#include "SMHelper.h"
#include <cstdio>

SHMEM_LAYOUT* info = NULL;
HANDLE event = NULL;
HANDLE memory = NULL;

bool getResources() {
	FILE* f;
	fopen_s(&f, "D:/k.txt", "a");
	memory = OpenFileMappingA(FILE_MAP_ALL_ACCESS, TRUE, g_memoryName);
	if (memory == NULL) {
		fprintf_s(f, "OPEN_MAPPING - 0x%08X\n", GetLastError());
		fclose(f);
		return false;
	}

	info = (SHMEM_LAYOUT*)MapViewOfFile(memory, FILE_MAP_ALL_ACCESS, 0, 0, sizeof(SHMEM_LAYOUT));
	if (info == NULL) {
		fprintf_s(f, "MAP_VIEW - 0x%08X\n", GetLastError());
		fclose(f);
		CloseHandle(memory);
		return false;
	}

	event = OpenEventA(EVENT_ALL_ACCESS, FALSE, g_eventName);
	if(event == NULL) {
		fprintf_s(f, "OPEN_EVENT - 0x%08X\n", GetLastError());
		fclose(f);
		CloseHandle(memory);
		return false;
	}
	fclose(f);
	return true;
}

bool closeResources() {
	UnmapViewOfFile(info);
	CloseHandle(memory);
	CloseHandle(event);
	return true;
}