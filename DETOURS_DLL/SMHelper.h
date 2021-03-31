#ifndef _SMHELPER_H_
#define _SMHELPER_H_

#include <Windows.h>
#include <time.h>

#define BUFFER_SIZE 1024
#define MAX_ENTRIES 100

static char g_memoryName[] = "Global\\LAB2_MEMORY";
static char g_eventName[] = "Global\\LAB2_NOTIFY";
static char g_beginMsg[] = "!<START>";
static char g_endMsg[] = "!<END>";
static char g_dllName[] = "DETOURS_DLL.dll";
#define s_szDllPath g_dllName

typedef struct {
	time_t callTime;
	char functionCall[BUFFER_SIZE + 1];
}FUNC_ENTRY;

typedef struct {
	char hiddenFile[MAX_PATH + 1];
	char function[BUFFER_SIZE];
	
	FUNC_ENTRY entries[MAX_ENTRIES];
	unsigned readEntryIdx;
	unsigned writeEntryIdx;
}SHMEM_LAYOUT;

extern SHMEM_LAYOUT* info;
extern HANDLE event;
extern HANDLE memory;

bool getResources();
bool closeResources();

#endif //_SMHELPER_H_