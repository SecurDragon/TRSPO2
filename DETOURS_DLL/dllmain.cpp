// dllmain.cpp : Определяет точку входа для приложения DLL.

#pragma warning(disable : 4996)
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <winsock2.h>
#include <Windows.h>
#include <stdio.h>

#include "Print.h"
#include "SMHelper.h"
#include "detours64/detours.h"

#include "detours64/_win32_DONE.cpp"
#include "Print.cpp"


BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        getResources();
        _Print(g_beginMsg);
        AttachDetours();
        break;
    case DLL_PROCESS_DETACH:
        _Print(g_endMsg);
        DetachDetours();
        closeResources();
        break;
    }
    return TRUE;
}

