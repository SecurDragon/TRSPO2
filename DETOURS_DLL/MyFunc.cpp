//
BOOL(__stdcall* Real_MoveWindow)(HWND a0,
    int a1,
    int a2,
    int a3,
    int a4,
    BOOL a5)
    = MoveWindow;

BOOL(__stdcall* Real_SetEvent)(HANDLE a0)
= SetEvent;

BOOL (__stdcall * Real_CloseHandle)(HANDLE a0)
    = CloseHandle;

BOOL __stdcall Mine_MoveWindow(HWND a0,
    int a1,
    int a2,
    int a3,
    int a4,
    BOOL a5)
{
    _PrintEnter("MoveWindow(%p,%p,%p,%p,%p,%p)\n", a0, a1, a2, a3, a4, a5);

    BOOL rv = 0;
    __try {
        rv = Real_MoveWindow(a0, a1, a2, a3, a4, a5);
    }
    __finally {
        _PrintExit("MoveWindow(,,,,,) -> %p\n", rv);
    };
    return rv;
}

BOOL __stdcall Mine_CloseHandle(HANDLE a0)
{
    _PrintEnter("CloseHandle(%p)\n", a0);

    BOOL rv = 0;
    __try {
        rv = Real_CloseHandle(a0);
    } __finally {
        _PrintExit("CloseHandle() -> %x\n", rv);
    };
    return rv;
}

VOID DetAttach(PVOID* ppvReal, PVOID pvMine, const char* psz)
{
    PVOID pvReal = NULL;
    if (ppvReal == NULL) {
        ppvReal = &pvReal;
    }

    LONG l = DetourAttach(ppvReal, pvMine);
    /*if (l != 0) {
        Syelog(SYELOG_SEVERITY_NOTICE,
               "Attach failed: `%s': error %d\n", DetRealName(psz), l);

        Decode((PBYTE)*ppvReal, 3);
    }*/
}

VOID DetDetach(PVOID* ppvReal, PVOID pvMine, const char* psz)
{
    LONG l = DetourDetach(ppvReal, pvMine);
    if (l != 0) {
#if 0
        Syelog(SYELOG_SEVERITY_NOTICE,
            "Detach failed: `%s': error %d\n", DetRealName(psz), l);
#else
        (void)psz;
#endif
    }
}

#define ATTACH(x)       DetAttach(&(PVOID&)Real_##x,Mine_##x,#x)
#define DETACH(x)       DetDetach(&(PVOID&)Real_##x,Mine_##x,#x)

LONG AttachDetours(VOID) {
    FILE* f = NULL;
    fopen_s(&f, "D:\\tmp.txt", "a+");
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());

    // For this many APIs, we'll ignore one or two can't be detoured.
    DetourSetIgnoreTooSmall(TRUE);
	
    ATTACH(MoveWindow);
    ATTACH(CloseHandle);
	
    PVOID* ppbFailedPointer = NULL;
    LONG error = DetourTransactionCommitEx(&ppbFailedPointer);
    if (error != 0) {
        fprintf(f, "traceapi.dll: Attach transaction failed to commit. Error %ld (%p/%p)",
            error, ppbFailedPointer, *ppbFailedPointer);
        return error;
    }
    fprintf(f,"ATTACHED\n");
    fclose(f);
    return 0;
}

LONG DetachDetours(VOID)
{
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());

    // For this many APIs, we'll ignore one or two can't be detoured.
    DetourSetIgnoreTooSmall(TRUE);
    
    DETACH(MoveWindow);
    DETACH(CloseHandle);
    
    if (DetourTransactionCommit() != 0) {
        PVOID* ppbFailedPointer = NULL;
        LONG error = DetourTransactionCommitEx(&ppbFailedPointer);

        printf("traceapi.dll: Detach transaction failed to commit. Error %ld (%p/%p)",
            error, ppbFailedPointer, *ppbFailedPointer);
        return error;
    }
    return 0;
}
