#include <cstdio>
#include "SMHelper.h"
#include <TlHelp32.h>

#define PROC_ACCESS PROCESS_ALL_ACCESS | (PROCESS_CREATE_THREAD | PROCESS_VM_OPERATION | PROCESS_VM_WRITE)

HANDLE getProcess(DWORD PID) {
	HANDLE proc = OpenProcess(PROC_ACCESS, NULL, PID);
	if(proc == INVALID_HANDLE_VALUE) {
		printf("[!] Can't open process with PID %d! (0x%08X)\n", PID, GetLastError());
	}
	return proc;
}

HANDLE getProcess(char* processName) {
	PROCESSENTRY32 pe32;
	pe32.dwSize = sizeof(PROCESSENTRY32);
	HANDLE hTool32 = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);
	BOOL bProcess = Process32First(hTool32, &pe32);
	if(bProcess == TRUE) {
		while(Process32Next(hTool32, &pe32) == TRUE) {
			if(strcmp(pe32.szExeFile, processName) == 0) {
				HANDLE proc = OpenProcess(PROC_ACCESS, NULL, pe32.th32ProcessID);
				if (proc == INVALID_HANDLE_VALUE) {
					printf("[!] Can't open process with PID %lu! (0x%08X)\n", pe32.th32ProcessID, GetLastError());
				}
				return proc;
			}
		}
	}
	printf("[!] Can't find process with name %s!\n", processName);
	return INVALID_HANDLE_VALUE;
}

void injectDLL(HANDLE process) {
	char* dir = new char[MAX_PATH];
	char* fullpath = new char[MAX_PATH];
	
	GetCurrentDirectoryA(MAX_PATH, dir);
	sprintf_s(fullpath, MAX_PATH, "%s\\%s", dir, g_dllName);
	
	LPVOID LoadLibraryAddr = GetProcAddress(GetModuleHandleA("kernel32.dll"), "LoadLibraryA");
	LPVOID LLParam = VirtualAllocEx(process, NULL, strlen(fullpath) + 1, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
	int written = WriteProcessMemory(process, LLParam, fullpath, strlen(fullpath) + 1, NULL);
	if(written == 0) {
		closeResources();
		printf("[!] No info written to process!");
		exit(-1);
	}
	HANDLE thread = CreateRemoteThread(process, NULL, NULL, (LPTHREAD_START_ROUTINE)LoadLibraryAddr, LLParam, THREAD_QUERY_INFORMATION, NULL);
	if(thread == NULL) {
		closeResources();
		printf("[!] Can't create thread inside process! (0x%08X)\n", GetLastError());
		exit(-1);
	}
	WaitForSingleObject(thread, INFINITE);
	DWORD exitcode = 0;
	GetExitCodeThread(thread, &exitcode);
	printf("[?] Exit code: 0x%08X\n", exitcode);
	CloseHandle(process);
	
	delete[] dir;
	delete[] fullpath;
}

void trace() {
	bool exit = false;
	do {
		DWORD wait = WaitForSingleObject(event, INFINITE);
		switch(wait) {
		case WAIT_OBJECT_0:
		{
			while (info->readEntryIdx != info->writeEntryIdx + 1) {
				FUNC_ENTRY entry = info->entries[info->readEntryIdx];
				if (strncmp(entry.functionCall, g_beginMsg, sizeof(g_beginMsg)) == 0) {
					printf("[===] ATTACHED [===]\n");
				}
				else if (strncmp(entry.functionCall, g_endMsg, sizeof(g_endMsg)) == 0) {
					printf("[===] DETACHED [===]\n");
					exit = true;
				}
				else {
					if (strncmp(entry.functionCall, info->function, strlen(info->function)) == 0) {
						struct tm time;
						localtime_s(&time, &entry.callTime);
						printf("[|] <%02d:%02d:%02d> %s\n", time.tm_hour, time.tm_min, time.tm_sec, entry.functionCall);
					}
				}
				info->readEntryIdx = (info->readEntryIdx + 1) % MAX_ENTRIES;
			}
		}
		break;
		default:
			printf("[?] Wait error: 0x%08X\n", GetLastError());
		}
	} while (!exit);
}

void enableDebugPriv() {
	HANDLE hToken;
	TOKEN_PRIVILEGES tp;
	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, GetCurrentProcessId());

	tp.PrivilegeCount = 1;
	LookupPrivilegeValueA(NULL, "SeDebugPrivilege", &tp.Privileges[0].Luid);
	tp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;
	OpenProcessToken(hProcess, TOKEN_ADJUST_PRIVILEGES, &hToken);

	AdjustTokenPrivileges(hToken, FALSE, &tp, NULL, NULL, NULL);
	CloseHandle(hToken);
}

int main(int argc, char* argv[]) {
	atexit((void(*)())closeResources);
	unsigned pid = -1;
	char* procName = NULL;
	char* tracedFunc = NULL;
	char* hiddenFile = NULL;

	if(argc == 1) {
		printf("Usage: %s < -pid <PID> | -name <process> > < -func <function> | -hide <file> >\n", strrchr(argv[0],'\\') + 1);
		return 0;
	}
	//getchar();
	enableDebugPriv();

	for(int i = 0; i < argc; ++i) {
		if(strcmp(argv[i], "-pid") == 0) {
			if(i < argc) {
				pid = atol(argv[i + 1]);
				++i;
			}
		}
		if(strcmp(argv[i], "-name") == 0) {
			if(i < argc) {
				procName = argv[i + 1];
				++i;
			}
		}
		if(strcmp(argv[i], "-func") == 0) {
			if(i < argc) {
				tracedFunc = argv[i + 1];
				++i;
			}
		}
		if(strcmp(argv[i], "-hide") == 0) {
			if(i < argc) {
				hiddenFile = argv[i + 1];
				++i;
			}
		}
	}

	if(pid == -1 && procName == NULL) {
		printf("[!] No process given, exitting\n");
	}

	if(hiddenFile == NULL && tracedFunc == NULL) {
		printf("[!] Nothing to do, exitting\n");
	}

	if(!getResources()) {
		printf("[!] Can't use shared memory, exitting...\n");
		return -1;
	}

	ZeroMemory(info, sizeof(SHMEM_LAYOUT));

	if(hiddenFile != NULL) {
		strncpy_s(info->hiddenFile, hiddenFile, MAX_PATH);
	}
	else {
		info->hiddenFile[0] = 0;
	}

	if (tracedFunc != NULL) {
		strncpy_s(info->function, tracedFunc, strlen(tracedFunc));
		info->function[strlen(tracedFunc)] = 0;
	}
	else
		info->function[0] = 0;

	printf("[/] Getting process handle...\n");
	HANDLE process = NULL;
	if (procName == NULL)
		process = getProcess(pid);
	else
		process = getProcess(procName);
	
	if(process == INVALID_HANDLE_VALUE) {
		printf("[!] Can't get process handle, exitting...\n");
		return -1;
	}
	
	printf("[\\] Handle got!\n");

	printf("[|] Injecting DLL...\n");
	injectDLL(process);
	
	printf("[/] Waiting output...\n\n");
	trace();
	printf("[\\] Done!\n");

	printf("[-] Exitting\n");
	closeResources();
}