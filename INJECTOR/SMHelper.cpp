#include "SMHelper.h"

#include <cstdio>
#include <sddl.h>

SHMEM_LAYOUT* info = NULL;
HANDLE event = NULL;
HANDLE memory = NULL;

bool getResources() {
	printf("[|] Creating file mapping...\n");
	SECURITY_DESCRIPTOR pSD;
	SECURITY_ATTRIBUTES SA;
	if (!InitializeSecurityDescriptor(&pSD, SECURITY_DESCRIPTOR_REVISION)) {
		printf("[!] Can't initialize SD! (0x%08X)\n", GetLastError());
		return false;
	}
	if (!SetSecurityDescriptorDacl(&pSD, TRUE, NULL, FALSE)) {
		printf("[!] Can't set DACL! (0x%08X)\n", GetLastError());
		return false;
	}
	SA.nLength = sizeof(SA);
	SA.lpSecurityDescriptor = &pSD;
	SA.bInheritHandle = TRUE;
	memory = CreateFileMappingA(INVALID_HANDLE_VALUE, &SA, PAGE_READWRITE, 0, sizeof(SHMEM_LAYOUT), g_memoryName);
	if (memory == NULL) {
		printf("[!] Can't create mapping! (0x%08X)\n", GetLastError());
		return false;
	}

	printf("[|] Mapping view...\n");
	info = (SHMEM_LAYOUT*)MapViewOfFile(memory, FILE_MAP_ALL_ACCESS, 0, 0, sizeof(SHMEM_LAYOUT));
	if (info == NULL) {
		printf("[!] Can't map view! (0x%08X)\n", GetLastError());
		CloseHandle(memory);
		return false;
	}

	printf("[|] Creating event...\n");
	event = CreateEventA(&SA, FALSE, FALSE, g_eventName);
	if (event == NULL) {
		printf("[!] Can't create event! (0x%08X)\n", GetLastError());
		CloseHandle(memory);
		return false;
	}

	return true;
}

bool closeResources() {
	UnmapViewOfFile(info);
	CloseHandle(memory);
	CloseHandle(event);
	return true;
}