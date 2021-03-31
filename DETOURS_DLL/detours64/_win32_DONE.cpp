//////////////////////////////////////////////////////////////////////////////
//
//  Detours Test Program (_win32.cpp of traceapi.dll)
//
//  Microsoft Research Detours Package
//
//  Copyright (c) Microsoft Corporation.  All rights reserved.
//

///////////////////////////////////////////////////////////////// Trampolines.
//
int (__stdcall * Real_AbortDoc)(HDC a0)
    = AbortDoc;

BOOL (__stdcall * Real_AbortPath)(HDC a0)
    = AbortPath;

HKL (__stdcall * Real_ActivateKeyboardLayout)(HKL a0,
                                              UINT a1)
    = ActivateKeyboardLayout;

ATOM (__stdcall * Real_AddAtomA)(LPCSTR a0)
    = AddAtomA;

ATOM (__stdcall * Real_AddAtomW)(LPCWSTR a0)
    = AddAtomW;

int (__stdcall * Real_AddFontResourceA)(LPCSTR a0)
    = AddFontResourceA;

int (__stdcall * Real_AddFontResourceW)(LPCWSTR a0)
    = AddFontResourceW;

BOOL (__stdcall * Real_AdjustWindowRect)(LPRECT a0,
                                         DWORD a1,
                                         BOOL a2)
    = AdjustWindowRect;

BOOL (__stdcall * Real_AdjustWindowRectEx)(LPRECT a0,
                                           DWORD a1,
                                           BOOL a2,
                                           DWORD a3)
    = AdjustWindowRectEx;

BOOL (__stdcall * Real_AllocConsole)(void)
    = AllocConsole;

BOOL (__stdcall * Real_AngleArc)(HDC a0,
                                 int a1,
                                 int a2,
                                 DWORD a3,
                                 FLOAT a4,
                                 FLOAT a5)
    = AngleArc;

BOOL (__stdcall * Real_AnimatePalette)(HPALETTE a0,
                                       UINT a1,
                                       UINT a2,
                                       CONST PALETTEENTRY* a3)
    = AnimatePalette;

BOOL (__stdcall * Real_AnyPopup)(void)
    = AnyPopup;

BOOL (__stdcall * Real_AppendMenuA)(HMENU a0,
                                    UINT a1,
                                    UINT_PTR a2,
                                    LPCSTR a3)
    = AppendMenuA;

BOOL (__stdcall * Real_AppendMenuW)(HMENU a0,
                                    UINT a1,
                                    UINT_PTR a2,
                                    LPCWSTR a3)
    = AppendMenuW;

BOOL (__stdcall * Real_Arc)(HDC a0,
                            int a1,
                            int a2,
                            int a3,
                            int a4,
                            int a5,
                            int a6,
                            int a7,
                            int a8)
    = Arc;

BOOL (__stdcall * Real_ArcTo)(HDC a0,
                              int a1,
                              int a2,
                              int a3,
                              int a4,
                              int a5,
                              int a6,
                              int a7,
                              int a8)
    = ArcTo;

BOOL (__stdcall * Real_AreFileApisANSI)(void)
    = AreFileApisANSI;

UINT (__stdcall * Real_ArrangeIconicWindows)(HWND a0)
    = ArrangeIconicWindows;

BOOL (__stdcall * Real_AttachThreadInput)(DWORD a0,
                                          DWORD a1,
                                          BOOL a2)
    = AttachThreadInput;

BOOL (__stdcall * Real_BackupRead)(HANDLE a0,
                                   LPBYTE a1,
                                   DWORD a2,
                                   LPDWORD a3,
                                   BOOL a4,
                                   BOOL a5,
                                   LPVOID* a6)
    = BackupRead;

BOOL (__stdcall * Real_BackupSeek)(HANDLE a0,
                                   DWORD a1,
                                   DWORD a2,
                                   LPDWORD a3,
                                   LPDWORD a4,
                                   LPVOID* a5)
    = BackupSeek;

BOOL (__stdcall * Real_BackupWrite)(HANDLE a0,
                                    LPBYTE a1,
                                    DWORD a2,
                                    LPDWORD a3,
                                    BOOL a4,
                                    BOOL a5,
                                    LPVOID* a6)
    = BackupWrite;

BOOL (__stdcall * Real_Beep)(DWORD a0,
                             DWORD a1)
    = Beep;

HDWP (__stdcall * Real_BeginDeferWindowPos)(int a0)
    = BeginDeferWindowPos;

HDC (__stdcall * Real_BeginPaint)(HWND a0,
                                  LPPAINTSTRUCT a1)
    = BeginPaint;

BOOL (__stdcall * Real_BeginPath)(HDC a0)
    = BeginPath;

HANDLE (__stdcall * Real_BeginUpdateResourceA)(LPCSTR a0,
                                               BOOL a1)
    = BeginUpdateResourceA;

HANDLE (__stdcall * Real_BeginUpdateResourceW)(LPCWSTR a0,
                                               BOOL a1)
    = BeginUpdateResourceW;

HRESULT (__stdcall * Real_BindMoniker)(IMoniker* a0,
                                       DWORD a1,
                                       CONST IID& a2,
                                       LPVOID* a3)
    = BindMoniker;

BOOL (__stdcall * Real_BitBlt)(HDC a0,
                               int a1,
                               int a2,
                               int a3,
                               int a4,
                               HDC a5,
                               int a6,
                               int a7,
                               DWORD a8)
    = BitBlt;

BOOL (__stdcall * Real_BringWindowToTop)(HWND a0)
    = BringWindowToTop;

long (__stdcall * Real_BroadcastSystemMessageA)(DWORD a0,
                                                LPDWORD a1,
                                                UINT a2,
                                                WPARAM a3,
                                                LPARAM a4)
    = BroadcastSystemMessageA;

long (__stdcall * Real_BroadcastSystemMessageW)(DWORD a0,
                                                LPDWORD a1,
                                                UINT a2,
                                                WPARAM a3,
                                                LPARAM a4)
    = BroadcastSystemMessageW;

BOOL (__stdcall * Real_BuildCommDCBA)(LPCSTR a0,
                                      LPDCB a1)
    = BuildCommDCBA;

BOOL (__stdcall * Real_BuildCommDCBAndTimeoutsA)(LPCSTR a0,
                                                 LPDCB a1,
                                                 LPCOMMTIMEOUTS a2)
    = BuildCommDCBAndTimeoutsA;

BOOL (__stdcall * Real_BuildCommDCBAndTimeoutsW)(LPCWSTR a0,
                                                 LPDCB a1,
                                                 LPCOMMTIMEOUTS a2)
    = BuildCommDCBAndTimeoutsW;

BOOL (__stdcall * Real_BuildCommDCBW)(LPCWSTR a0,
                                      LPDCB a1)
    = BuildCommDCBW;

HRESULT (__stdcall * Real_CLSIDFromProgID)(LPCOLESTR a0,
                                           LPGUID a1)
    = CLSIDFromProgID;

#ifdef _WIN32_WINNT_WIN7
HRESULT (__stdcall * Real_CLSIDFromString)(LPCOLESTR a0,
                                           LPGUID a1)
    = CLSIDFromString;
#else
HRESULT (__stdcall * Real_CLSIDFromString)(LPOLESTR a0,
                                           LPGUID a1)
    = CLSIDFromString;
#endif

BOOL (__stdcall * Real_CallMsgFilterA)(LPMSG a0,
                                       int a1)
    = CallMsgFilterA;

BOOL (__stdcall * Real_CallMsgFilterW)(LPMSG a0,
                                       int a1)
    = CallMsgFilterW;

BOOL (__stdcall * Real_CallNamedPipeA)(LPCSTR a0,
                                       LPVOID a1,
                                       DWORD a2,
                                       LPVOID a3,
                                       DWORD a4,
                                       LPDWORD a5,
                                       DWORD a6)
    = CallNamedPipeA;

BOOL (__stdcall * Real_CallNamedPipeW)(LPCWSTR a0,
                                       LPVOID a1,
                                       DWORD a2,
                                       LPVOID a3,
                                       DWORD a4,
                                       LPDWORD a5,
                                       DWORD a6)
    = CallNamedPipeW;

LRESULT (__stdcall * Real_CallNextHookEx)(HHOOK a0,
                                          int a1,
                                          WPARAM a2,
                                          LPARAM a3)
    = CallNextHookEx;

LRESULT (__stdcall * Real_CallWindowProcA)(WNDPROC a0,
                                           HWND a1,
                                           UINT a2,
                                           WPARAM a3,
                                           LPARAM a4)
    = CallWindowProcA;

LRESULT (__stdcall * Real_CallWindowProcW)(WNDPROC a0,
                                           HWND a1,
                                           UINT a2,
                                           WPARAM a3,
                                           LPARAM a4)
    = CallWindowProcW;

BOOL (__stdcall * Real_CancelDC)(HDC a0)
    = CancelDC;

BOOL (__stdcall * Real_CancelIo)(HANDLE a0)
    = CancelIo;

BOOL (__stdcall * Real_CancelWaitableTimer)(HANDLE a0)
    = CancelWaitableTimer;

WORD (__stdcall * Real_CascadeWindows)(HWND a0,
                                       UINT a1,
                                       CONST RECT* a2,
                                       UINT a3,
                                       CONST HWND * a4)
    = CascadeWindows;

BOOL (__stdcall * Real_ChangeClipboardChain)(HWND a0,
                                             HWND a1)
    = ChangeClipboardChain;

LONG (__stdcall * Real_ChangeDisplaySettingsA)(LPDEVMODEA a0,
                                               DWORD a1)
    = ChangeDisplaySettingsA;

LONG (__stdcall * Real_ChangeDisplaySettingsExA)(LPCSTR a0,
                                                 LPDEVMODEA a1,
                                                 HWND a2,
                                                 DWORD a3,
                                                 LPVOID a4)
    = ChangeDisplaySettingsExA;

LONG (__stdcall * Real_ChangeDisplaySettingsExW)(LPCWSTR a0,
                                                 LPDEVMODEW a1,
                                                 HWND a2,
                                                 DWORD a3,
                                                 LPVOID a4)
    = ChangeDisplaySettingsExW;

LONG (__stdcall * Real_ChangeDisplaySettingsW)(LPDEVMODEW a0,
                                               DWORD a1)
    = ChangeDisplaySettingsW;

BOOL (__stdcall * Real_ChangeMenuA)(HMENU a0,
                                    UINT a1,
                                    LPCSTR a2,
                                    UINT a3,
                                    UINT a4)
    = ChangeMenuA;

BOOL (__stdcall * Real_ChangeMenuW)(HMENU a0,
                                    UINT a1,
                                    LPCWSTR a2,
                                    UINT a3,
                                    UINT a4)
    = ChangeMenuW;

LPSTR (__stdcall * Real_CharLowerA)(LPSTR a0)
    = CharLowerA;

DWORD (__stdcall * Real_CharLowerBuffA)(LPSTR a0,
                                        DWORD a1)
    = CharLowerBuffA;

DWORD (__stdcall * Real_CharLowerBuffW)(LPWSTR a0,
                                        DWORD a1)
    = CharLowerBuffW;

LPWSTR (__stdcall * Real_CharLowerW)(LPWSTR a0)
    = CharLowerW;

LPSTR (__stdcall * Real_CharNextA)(LPCSTR a0)
    = CharNextA;

LPSTR (__stdcall * Real_CharNextExA)(WORD a0,
                                     LPCSTR a1,
                                     DWORD a2)
    = CharNextExA;

LPWSTR (__stdcall * Real_CharNextW)(LPCWSTR a0)
    = CharNextW;

LPSTR (__stdcall * Real_CharPrevA)(LPCSTR a0,
                                   LPCSTR a1)
    = CharPrevA;

LPSTR (__stdcall * Real_CharPrevExA)(WORD a0,
                                     LPCSTR a1,
                                     LPCSTR a2,
                                     DWORD a3)
    = CharPrevExA;

LPWSTR (__stdcall * Real_CharPrevW)(LPCWSTR a0,
                                    LPCWSTR a1)
    = CharPrevW;

BOOL (__stdcall * Real_CharToOemA)(LPCSTR a0,
                                   LPSTR a1)
    = CharToOemA;

BOOL (__stdcall * Real_CharToOemBuffA)(LPCSTR a0,
                                       LPSTR a1,
                                       DWORD a2)
    = CharToOemBuffA;

BOOL (__stdcall * Real_CharToOemBuffW)(LPCWSTR a0,
                                       LPSTR a1,
                                       DWORD a2)
    = CharToOemBuffW;

BOOL (__stdcall * Real_CharToOemW)(LPCWSTR a0,
                                   LPSTR a1)
    = CharToOemW;

LPSTR (__stdcall * Real_CharUpperA)(LPSTR a0)
    = CharUpperA;

DWORD (__stdcall * Real_CharUpperBuffA)(LPSTR a0,
                                        DWORD a1)
    = CharUpperBuffA;

DWORD (__stdcall * Real_CharUpperBuffW)(LPWSTR a0,
                                        DWORD a1)
    = CharUpperBuffW;

LPWSTR (__stdcall * Real_CharUpperW)(LPWSTR a0)
    = CharUpperW;

BOOL (__stdcall * Real_CheckColorsInGamut)(
                                           HDC a0,
#ifdef GDIPLUS_TS_QUERYVER
                                           LPRGBTRIPLE a1,
#else
                                           LPVOID a1,
#endif
                                           LPVOID a2,
                                           DWORD a3
                                          )
    = CheckColorsInGamut;

BOOL (__stdcall * Real_CheckDlgButton)(HWND a0,
                                       int a1,
                                       UINT a2)
    = CheckDlgButton;

DWORD (__stdcall * Real_CheckMenuItem)(HMENU a0,
                                       UINT a1,
                                       UINT a2)
    = CheckMenuItem;

BOOL (__stdcall * Real_CheckMenuRadioItem)(HMENU a0,
                                           UINT a1,
                                           UINT a2,
                                           UINT a3,
                                           UINT a4)
    = CheckMenuRadioItem;

BOOL (__stdcall * Real_CheckRadioButton)(HWND a0,
                                         int a1,
                                         int a2,
                                         int a3)
    = CheckRadioButton;

HWND (__stdcall * Real_ChildWindowFromPoint)(HWND a0,
                                             POINT a1)
    = ChildWindowFromPoint;

HWND (__stdcall * Real_ChildWindowFromPointEx)(HWND a0,
                                               POINT a1,
                                               UINT a2)
    = ChildWindowFromPointEx;

int (__stdcall * Real_ChoosePixelFormat)(HDC a0,
                                         CONST PIXELFORMATDESCRIPTOR* a1)
    = ChoosePixelFormat;

BOOL (__stdcall * Real_Chord)(HDC a0,
                              int a1,
                              int a2,
                              int a3,
                              int a4,
                              int a5,
                              int a6,
                              int a7,
                              int a8)
    = Chord;

BOOL (__stdcall * Real_ClearCommBreak)(HANDLE a0)
    = ClearCommBreak;

BOOL (__stdcall * Real_ClearCommError)(HANDLE a0,
                                       LPDWORD a1,
                                       LPCOMSTAT a2)
    = ClearCommError;

BOOL (__stdcall * Real_ClientToScreen)(HWND a0,
                                       LPPOINT a1)
    = ClientToScreen;

BOOL (__stdcall * Real_ClipCursor)(CONST RECT* a0)
    = ClipCursor;

BOOL (__stdcall * Real_CloseClipboard)(void)
    = CloseClipboard;

BOOL (__stdcall * Real_CloseDesktop)(HDESK a0)
    = CloseDesktop;

HENHMETAFILE (__stdcall * Real_CloseEnhMetaFile)(HDC a0)
    = CloseEnhMetaFile;

BOOL (__stdcall * Real_CloseFigure)(HDC a0)
    = CloseFigure;

BOOL (__stdcall * Real_CloseHandle)(HANDLE a0)
    = CloseHandle;

HMETAFILE (__stdcall * Real_CloseMetaFile)(HDC a0)
    = CloseMetaFile;

BOOL (__stdcall * Real_CloseWindow)(HWND a0)
    = CloseWindow;

BOOL (__stdcall * Real_CloseWindowStation)(HWINSTA a0)
    = CloseWindowStation;

ULONG (__stdcall * Real_CoAddRefServerProcess)(void)
    = CoAddRefServerProcess;

DWORD (__stdcall * Real_CoBuildVersion)(void)
    = CoBuildVersion;

HRESULT (__stdcall * Real_CoCopyProxy)(IUnknown* a0,
                                       IUnknown** a1)
    = CoCopyProxy;

HRESULT (__stdcall * Real_CoCreateFreeThreadedMarshaler)(LPUNKNOWN a0,
                                                         LPUNKNOWN* a1)
    = CoCreateFreeThreadedMarshaler;

HRESULT (__stdcall * Real_CoCreateGuid)(GUID* a0)
    = CoCreateGuid;

HRESULT (__stdcall * Real_CoCreateInstance)(CONST IID& a0,
                                            LPUNKNOWN a1,
                                            DWORD a2,
                                            CONST IID& a3,
                                            LPVOID* a4)
    = CoCreateInstance;

HRESULT (__stdcall * Real_CoCreateInstanceEx)(CONST IID& a0,
                                              IUnknown* a1,
                                              DWORD a2,
                                              COSERVERINFO* a3,
                                              DWORD a4,
                                              MULTI_QI* a5)
    = CoCreateInstanceEx;

HRESULT (__stdcall * Real_CoDisconnectObject)(LPUNKNOWN a0,
                                              DWORD a1)
    = CoDisconnectObject;

BOOL (__stdcall * Real_CoDosDateTimeToFileTime)(WORD a0,
                                                WORD a1,
                                                FILETIME* a2)
    = CoDosDateTimeToFileTime;

HRESULT (__stdcall * Real_CoFileTimeNow)(FILETIME* a0)
    = CoFileTimeNow;

BOOL (__stdcall * Real_CoFileTimeToDosDateTime)(FILETIME* a0,
                                                LPWORD a1,
                                                LPWORD a2)
    = CoFileTimeToDosDateTime;

void (__stdcall * Real_CoFreeAllLibraries)(void)
    = CoFreeAllLibraries;

void (__stdcall * Real_CoFreeLibrary)(HINSTANCE a0)
    = CoFreeLibrary;

void (__stdcall * Real_CoFreeUnusedLibraries)(void)
    = CoFreeUnusedLibraries;

HRESULT (__stdcall * Real_CoGetCallContext)(CONST IID& a0,
                                            void** a1)
    = CoGetCallContext;

HRESULT (__stdcall * Real_CoGetClassObject)(CONST IID& a0,
                                            DWORD a1,
                                            LPVOID a2,
                                            CONST IID& a3,
                                            LPVOID* a4)
    = CoGetClassObject;

DWORD (__stdcall * Real_CoGetCurrentProcess)(void)
    = CoGetCurrentProcess;

HRESULT (__stdcall * Real_CoGetInstanceFromFile)(COSERVERINFO* a0,
                                                 CLSID* a1,
                                                 IUnknown* a2,
                                                 DWORD a3,
                                                 DWORD a4,
                                                 OLECHAR* a5,
                                                 DWORD a6,
                                                 MULTI_QI* a7)
    = CoGetInstanceFromFile;

HRESULT (__stdcall * Real_CoGetInstanceFromIStorage)(COSERVERINFO* a0,
                                                     CLSID* a1,
                                                     IUnknown* a2,
                                                     DWORD a3,
                                                     IStorage* a4,
                                                     DWORD a5,
                                                     MULTI_QI* a6)
    = CoGetInstanceFromIStorage;

HRESULT (__stdcall * Real_CoGetInterfaceAndReleaseStream)(LPSTREAM a0,
                                                          CONST IID& a1,
                                                          LPVOID* a2)
    = CoGetInterfaceAndReleaseStream;

HRESULT (__stdcall * Real_CoGetMalloc)(DWORD a0,
                                       IMalloc** a1)
    = CoGetMalloc;

HRESULT (__stdcall * Real_CoGetMarshalSizeMax)(ULONG* a0,
                                               CONST IID& a1,
                                               LPUNKNOWN a2,
                                               DWORD a3,
                                               LPVOID a4,
                                               DWORD a5)
    = CoGetMarshalSizeMax;

HRESULT (__stdcall * Real_CoGetObject)(LPCWSTR a0,
                                       BIND_OPTS* a1,
                                       CONST IID& a2,
                                       void** a3)
    = CoGetObject;

HRESULT (__stdcall * Real_CoGetPSClsid)(CONST IID& a0,
                                        CLSID* a1)
    = CoGetPSClsid;

HRESULT (__stdcall * Real_CoGetStandardMarshal)(CONST IID& a0,
                                                LPUNKNOWN a1,
                                                DWORD a2,
                                                LPVOID a3,
                                                DWORD a4,
                                                IMarshal** a5)
    = CoGetStandardMarshal;

HRESULT (__stdcall * Real_CoGetStdMarshalEx)(LPUNKNOWN a0,
                                             DWORD a1,
                                             LPUNKNOWN* a2)
    = CoGetStdMarshalEx;

HRESULT (__stdcall * Real_CoGetTreatAsClass)(CONST IID& a0,
                                             LPGUID a1)
    = CoGetTreatAsClass;

HRESULT (__stdcall * Real_CoImpersonateClient)(void)
    = CoImpersonateClient;

HRESULT (__stdcall * Real_CoInitialize)(LPVOID a0)
    = CoInitialize;

HRESULT (__stdcall * Real_CoInitializeEx)(LPVOID a0,
                                          DWORD a1)
    = CoInitializeEx;

HRESULT (__stdcall * Real_CoInitializeSecurity)(PSECURITY_DESCRIPTOR a0,
                                                LONG a1,
                                                SOLE_AUTHENTICATION_SERVICE* a2,
                                                void* a3,
                                                DWORD a4,
                                                DWORD a5,
                                                void* a6,
                                                DWORD a7,
                                                void* a8)
    = CoInitializeSecurity;

BOOL (__stdcall * Real_CoIsHandlerConnected)(LPUNKNOWN a0)
    = CoIsHandlerConnected;

BOOL (__stdcall * Real_CoIsOle1Class)(CONST IID& a0)
    = CoIsOle1Class;

HINSTANCE (__stdcall * Real_CoLoadLibrary)(LPOLESTR a0,
                                           BOOL a1)
    = CoLoadLibrary;

HRESULT (__stdcall * Real_CoLockObjectExternal)(LPUNKNOWN a0,
                                                BOOL a1,
                                                BOOL a2)
    = CoLockObjectExternal;

HRESULT (__stdcall * Real_CoMarshalHresult)(LPSTREAM a0,
                                            HRESULT a1)
    = CoMarshalHresult;

HRESULT (__stdcall * Real_CoMarshalInterThreadInterfaceInStream)(CONST IID& a0,
                                                                 LPUNKNOWN a1,
                                                                 LPSTREAM* a2)
    = CoMarshalInterThreadInterfaceInStream;

HRESULT (__stdcall * Real_CoMarshalInterface)(LPSTREAM a0,
                                              CONST IID& a1,
                                              LPUNKNOWN a2,
                                              DWORD a3,
                                              LPVOID a4,
                                              DWORD a5)
    = CoMarshalInterface;

HRESULT (__stdcall * Real_CoQueryAuthenticationServices)(DWORD* a0,
                                                         SOLE_AUTHENTICATION_SERVICE** a1)
    = CoQueryAuthenticationServices;

HRESULT (__stdcall * Real_CoQueryClientBlanket)(DWORD* a0,
                                                DWORD* a1,
                                                OLECHAR** a2,
                                                DWORD* a3,
                                                DWORD* a4,
                                                RPC_AUTHZ_HANDLE* a5,
                                                DWORD* a6)
    = CoQueryClientBlanket;

HRESULT (__stdcall * Real_CoQueryProxyBlanket)(IUnknown* a0,
                                               DWORD* a1,
                                               DWORD* a2,
                                               OLECHAR** a3,
                                               DWORD* a4,
                                               DWORD* a5,
                                               RPC_AUTH_IDENTITY_HANDLE* a6,
                                               DWORD* a7)
    = CoQueryProxyBlanket;

HRESULT (__stdcall * Real_CoRegisterChannelHook)(CONST GUID& a0,
                                                 IChannelHook* a1)
    = CoRegisterChannelHook;

HRESULT (__stdcall * Real_CoRegisterClassObject)(CONST IID& a0,
                                                 LPUNKNOWN a1,
                                                 DWORD a2,
                                                 DWORD a3,
                                                 LPDWORD a4)
    = CoRegisterClassObject;

HRESULT (__stdcall * Real_CoRegisterMallocSpy)(IMallocSpy* a0)
    = CoRegisterMallocSpy;

HRESULT (__stdcall * Real_CoRegisterMessageFilter)(LPMESSAGEFILTER a0,
                                                   LPMESSAGEFILTER* a1)
    = CoRegisterMessageFilter;

HRESULT (__stdcall * Real_CoRegisterPSClsid)(CONST IID& a0,
                                             CONST IID& a1)
    = CoRegisterPSClsid;

HRESULT (__stdcall * Real_CoRegisterSurrogate)(LPSURROGATE a0)
    = CoRegisterSurrogate;

HRESULT (__stdcall * Real_CoReleaseMarshalData)(LPSTREAM a0)
    = CoReleaseMarshalData;

ULONG (__stdcall * Real_CoReleaseServerProcess)(void)
    = CoReleaseServerProcess;

HRESULT (__stdcall * Real_CoResumeClassObjects)(void)
    = CoResumeClassObjects;

HRESULT (__stdcall * Real_CoRevertToSelf)(void)
    = CoRevertToSelf;

HRESULT (__stdcall * Real_CoRevokeClassObject)(DWORD a0)
    = CoRevokeClassObject;

HRESULT (__stdcall * Real_CoRevokeMallocSpy)(void)
    = CoRevokeMallocSpy;

HRESULT (__stdcall * Real_CoSetProxyBlanket)(IUnknown* a0,
                                             DWORD a1,
                                             DWORD a2,
                                             OLECHAR* a3,
                                             DWORD a4,
                                             DWORD a5,
                                             RPC_AUTH_IDENTITY_HANDLE a6,
                                             DWORD a7)
    = CoSetProxyBlanket;

HRESULT (__stdcall * Real_CoSuspendClassObjects)(void)
    = CoSuspendClassObjects;

HRESULT (__stdcall * Real_CoSwitchCallContext)(IUnknown* a0,
                                               IUnknown** a1)
    = CoSwitchCallContext;

LPVOID (__stdcall * Real_CoTaskMemAlloc)(SIZE_T a0)
    = CoTaskMemAlloc;

void (__stdcall * Real_CoTaskMemFree)(LPVOID a0)
    = CoTaskMemFree;

LPVOID (__stdcall * Real_CoTaskMemRealloc)(LPVOID a0,
                                           SIZE_T a1)
    = CoTaskMemRealloc;

HRESULT (__stdcall * Real_CoTreatAsClass)(CONST IID& a0,
                                          CONST IID& a1)
    = CoTreatAsClass;

void (__stdcall * Real_CoUninitialize)(void)
    = CoUninitialize;

HRESULT (__stdcall * Real_CoUnmarshalHresult)(LPSTREAM a0,
                                              HRESULT* a1)
    = CoUnmarshalHresult;

HRESULT (__stdcall * Real_CoUnmarshalInterface)(LPSTREAM a0,
                                                CONST IID& a1,
                                                LPVOID* a2)
    = CoUnmarshalInterface;

BOOL (__stdcall * Real_ColorMatchToTarget)(HDC a0,
                                           HDC a1,
                                           DWORD a2)
    = ColorMatchToTarget;

int (__stdcall * Real_CombineRgn)(HRGN a0,
                                  HRGN a1,
                                  HRGN a2,
                                  int a3)
    = CombineRgn;

BOOL (__stdcall * Real_CombineTransform)(LPXFORM a0,
                                         CONST XFORM* a1,
                                         CONST XFORM* a2)
    = CombineTransform;

BOOL (__stdcall * Real_CommConfigDialogA)(LPCSTR a0,
                                          HWND a1,
                                          LPCOMMCONFIG a2)
    = CommConfigDialogA;

BOOL (__stdcall * Real_CommConfigDialogW)(LPCWSTR a0,
                                          HWND a1,
                                          LPCOMMCONFIG a2)
    = CommConfigDialogW;

LONG (__stdcall * Real_CompareFileTime)(CONST FILETIME* a0,
                                        CONST FILETIME* a1)
    = CompareFileTime;

int (__stdcall * Real_CompareStringA)(LCID a0,
                                      DWORD a1,
                                      LPCSTR a2,
                                      int a3,
                                      LPCSTR a4,
                                      int a5)
    = CompareStringA;

int (__stdcall * Real_CompareStringW)(LCID a0,
                                      DWORD a1,
                                      LPCWSTR a2,
                                      int a3,
                                      LPCWSTR a4,
                                      int a5)
    = CompareStringW;

BOOL (__stdcall * Real_ConnectNamedPipe)(HANDLE a0,
                                         LPOVERLAPPED a1)
    = ConnectNamedPipe;

#if !defined(DETOURS_ARM)
BOOL (__stdcall * Real_ContinueDebugEvent)(DWORD a0,
                                           DWORD a1,
                                           DWORD a2)
    = ContinueDebugEvent;
#endif // !DETOURS_ARM

LCID (__stdcall * Real_ConvertDefaultLocale)(LCID a0)
    = ConvertDefaultLocale;

LPVOID (__stdcall * Real_ConvertThreadToFiber)(LPVOID a0)
    = ConvertThreadToFiber;

int (__stdcall * Real_CopyAcceleratorTableA)(HACCEL a0,
                                             LPACCEL a1,
                                             int a2)
    = CopyAcceleratorTableA;

int (__stdcall * Real_CopyAcceleratorTableW)(HACCEL a0,
                                             LPACCEL a1,
                                             int a2)
    = CopyAcceleratorTableW;

HENHMETAFILE (__stdcall * Real_CopyEnhMetaFileA)(HENHMETAFILE a0,
                                                 LPCSTR a1)
    = CopyEnhMetaFileA;

HENHMETAFILE (__stdcall * Real_CopyEnhMetaFileW)(HENHMETAFILE a0,
                                                 LPCWSTR a1)
    = CopyEnhMetaFileW;

BOOL (__stdcall * Real_CopyFileA)(LPCSTR a0,
                                  LPCSTR a1,
                                  BOOL a2)
    = CopyFileA;

BOOL (__stdcall * Real_CopyFileExA)(LPCSTR a0,
                                    LPCSTR a1,
                                    LPPROGRESS_ROUTINE a2,
                                    LPVOID a3,
                                    LPBOOL a4,
                                    DWORD a5)
    = CopyFileExA;

BOOL (__stdcall * Real_CopyFileExW)(LPCWSTR a0,
                                    LPCWSTR a1,
                                    LPPROGRESS_ROUTINE a2,
                                    LPVOID a3,
                                    LPBOOL a4,
                                    DWORD a5)
    = CopyFileExW;

BOOL (__stdcall * Real_CopyFileW)(LPCWSTR a0,
                                  LPCWSTR a1,
                                  BOOL a2)
    = CopyFileW;

HICON (__stdcall * Real_CopyIcon)(HICON a0)
    = CopyIcon;

HANDLE (__stdcall * Real_CopyImage)(HANDLE a0,
                                    UINT a1,
                                    int a2,
                                    int a3,
                                    UINT a4)
    = CopyImage;

HMETAFILE (__stdcall * Real_CopyMetaFileA)(HMETAFILE a0,
                                           LPCSTR a1)
    = CopyMetaFileA;

HMETAFILE (__stdcall * Real_CopyMetaFileW)(HMETAFILE a0,
                                           LPCWSTR a1)
    = CopyMetaFileW;

BOOL (__stdcall * Real_CopyRect)(LPRECT a0,
                                 CONST RECT* a1)
    = CopyRect;

int (__stdcall * Real_CountClipboardFormats)(void)
    = CountClipboardFormats;

HACCEL (__stdcall * Real_CreateAcceleratorTableA)(LPACCEL a0,
                                                  int a1)
    = CreateAcceleratorTableA;

HACCEL (__stdcall * Real_CreateAcceleratorTableW)(LPACCEL a0,
                                                  int a1)
    = CreateAcceleratorTableW;

HRESULT (__stdcall * Real_CreateAntiMoniker)(IMoniker** a0)
    = CreateAntiMoniker;

HRESULT (__stdcall * Real_CreateBindCtx)(DWORD a0,
                                         IBindCtx** a1)
    = CreateBindCtx;

HBITMAP (__stdcall * Real_CreateBitmap)(int a0,
                                        int a1,
                                        UINT a2,
                                        UINT a3,
                                        CONST void* a4)
    = CreateBitmap;

HBITMAP (__stdcall * Real_CreateBitmapIndirect)(CONST BITMAP* a0)
    = CreateBitmapIndirect;

HBRUSH (__stdcall * Real_CreateBrushIndirect)(CONST LOGBRUSH* a0)
    = CreateBrushIndirect;

BOOL (__stdcall * Real_CreateCaret)(HWND a0,
                                    HBITMAP a1,
                                    int a2,
                                    int a3)
    = CreateCaret;

HRESULT (__stdcall * Real_CreateClassMoniker)(CONST IID& a0,
                                              IMoniker** a1)
    = CreateClassMoniker;

HCOLORSPACE (__stdcall * Real_CreateColorSpaceA)(LPLOGCOLORSPACEA a0)
    = CreateColorSpaceA;

HCOLORSPACE (__stdcall * Real_CreateColorSpaceW)(LPLOGCOLORSPACEW a0)
    = CreateColorSpaceW;

HBITMAP (__stdcall * Real_CreateCompatibleBitmap)(HDC a0,
                                                  int a1,
                                                  int a2)
    = CreateCompatibleBitmap;

HDC (__stdcall * Real_CreateCompatibleDC)(HDC a0)
    = CreateCompatibleDC;

HANDLE (__stdcall * Real_CreateConsoleScreenBuffer)(DWORD a0,
                                                    DWORD a1,
                                                    CONST SECURITY_ATTRIBUTES* a2,
                                                    DWORD a3,
                                                    LPVOID a4)
    = CreateConsoleScreenBuffer;

HCURSOR (__stdcall * Real_CreateCursor)(HINSTANCE a0,
                                        int a1,
                                        int a2,
                                        int a3,
                                        int a4,
                                        CONST void* a5,
                                        CONST void* a6)
    = CreateCursor;

HDC (__stdcall * Real_CreateDCA)(LPCSTR a0,
                                 LPCSTR a1,
                                 LPCSTR a2,
                                 CONST DEVMODEA * a3)
    = CreateDCA;

HDC (__stdcall * Real_CreateDCW)(LPCWSTR a0,
                                 LPCWSTR a1,
                                 LPCWSTR a2,
                                 CONST DEVMODEW * a3)
    = CreateDCW;

HBRUSH (__stdcall * Real_CreateDIBPatternBrush)(HGLOBAL a0,
                                                UINT a1)
    = CreateDIBPatternBrush;

HBRUSH (__stdcall * Real_CreateDIBPatternBrushPt)(CONST void* a0,
                                                  UINT a1)
    = CreateDIBPatternBrushPt;

HBITMAP (__stdcall * Real_CreateDIBSection)(HDC a0,
                                            CONST BITMAPINFO* a1,
                                            UINT a2,
                                            void** a3,
                                            HANDLE a4,
                                            DWORD a5)
    = CreateDIBSection;

HBITMAP (__stdcall * Real_CreateDIBitmap)(HDC a0,
                                          CONST BITMAPINFOHEADER* a1,
                                          DWORD a2,
                                          CONST void* a3,
                                          CONST BITMAPINFO* a4,
                                          UINT a5)
    = CreateDIBitmap;

HRESULT (__stdcall * Real_CreateDataAdviseHolder)(LPDATAADVISEHOLDER* a0)
    = CreateDataAdviseHolder;

HRESULT (__stdcall * Real_CreateDataCache)(LPUNKNOWN a0,
                                           CONST IID& a1,
                                           CONST IID& a2,
                                           LPVOID* a3)
    = CreateDataCache;

#if _MSC_VER < 1300
HDESK (__stdcall * Real_CreateDesktopA)(LPSTR a0,
                                        LPSTR a1,
                                        LPDEVMODEA a2,
                                        DWORD a3,
                                        ACCESS_MASK a4,
                                        LPSECURITY_ATTRIBUTES a5)
    = CreateDesktopA;
#else
HDESK (__stdcall * Real_CreateDesktopA)(LPCSTR a0,
                                        LPCSTR a1,
                                        LPDEVMODEA a2,
                                        DWORD a3,
                                        ACCESS_MASK a4,
                                        LPSECURITY_ATTRIBUTES a5)
    = CreateDesktopA;

#endif

#if _MSC_VER < 1300
HDESK (__stdcall * Real_CreateDesktopW)(LPWSTR a0,
                                        LPWSTR a1,
                                        LPDEVMODEW a2,
                                        DWORD a3,
                                        ACCESS_MASK a4,
                                        LPSECURITY_ATTRIBUTES a5)
    = CreateDesktopW;
#else
HDESK (__stdcall * Real_CreateDesktopW)(LPCWSTR a0,
                                        LPCWSTR a1,
                                        LPDEVMODEW a2,
                                        DWORD a3,
                                        ACCESS_MASK a4,
                                        LPSECURITY_ATTRIBUTES a5)
    = CreateDesktopW;
#endif

HWND (__stdcall * Real_CreateDialogIndirectParamA)(HINSTANCE a0,
                                                   LPCDLGTEMPLATEA a1,
                                                   HWND a2,
                                                   DLGPROC a3,
                                                   LPARAM a4)
    = CreateDialogIndirectParamA;

HWND (__stdcall * Real_CreateDialogIndirectParamW)(HINSTANCE a0,
                                                   LPCDLGTEMPLATEW a1,
                                                   HWND a2,
                                                   DLGPROC a3,
                                                   LPARAM a4)
    = CreateDialogIndirectParamW;

HWND (__stdcall * Real_CreateDialogParamA)(HINSTANCE a0,
                                           LPCSTR a1,
                                           HWND a2,
                                           DLGPROC a3,
                                           LPARAM a4)
    = CreateDialogParamA;

HWND (__stdcall * Real_CreateDialogParamW)(HINSTANCE a0,
                                           LPCWSTR a1,
                                           HWND a2,
                                           DLGPROC a3,
                                           LPARAM a4)
    = CreateDialogParamW;

BOOL (__stdcall * Real_CreateDirectoryA)(LPCSTR a0,
                                         LPSECURITY_ATTRIBUTES a1)
    = CreateDirectoryA;

BOOL (__stdcall * Real_CreateDirectoryExA)(LPCSTR a0,
                                           LPCSTR a1,
                                           LPSECURITY_ATTRIBUTES a2)
    = CreateDirectoryExA;

BOOL (__stdcall * Real_CreateDirectoryExW)(LPCWSTR a0,
                                           LPCWSTR a1,
                                           LPSECURITY_ATTRIBUTES a2)
    = CreateDirectoryExW;

BOOL (__stdcall * Real_CreateDirectoryW)(LPCWSTR a0,
                                         LPSECURITY_ATTRIBUTES a1)
    = CreateDirectoryW;

HBITMAP (__stdcall * Real_CreateDiscardableBitmap)(HDC a0,
                                                   int a1,
                                                   int a2)
    = CreateDiscardableBitmap;

HRGN (__stdcall * Real_CreateEllipticRgn)(int a0,
                                          int a1,
                                          int a2,
                                          int a3)
    = CreateEllipticRgn;

HRGN (__stdcall * Real_CreateEllipticRgnIndirect)(CONST RECT* a0)
    = CreateEllipticRgnIndirect;

HDC (__stdcall * Real_CreateEnhMetaFileA)(HDC a0,
                                          LPCSTR a1,
                                          CONST RECT* a2,
                                          LPCSTR a3)
    = CreateEnhMetaFileA;

HDC (__stdcall * Real_CreateEnhMetaFileW)(HDC a0,
                                          LPCWSTR a1,
                                          CONST RECT* a2,
                                          LPCWSTR a3)
    = CreateEnhMetaFileW;

HANDLE (__stdcall * Real_CreateEventA)(LPSECURITY_ATTRIBUTES a0,
                                       BOOL a1,
                                       BOOL a2,
                                       LPCSTR a3)
    = CreateEventA;

HANDLE (__stdcall * Real_CreateEventW)(LPSECURITY_ATTRIBUTES a0,
                                       BOOL a1,
                                       BOOL a2,
                                       LPCWSTR a3)
    = CreateEventW;

LPVOID (__stdcall * Real_CreateFiber)(ULONG_PTR a0,
                                      LPFIBER_START_ROUTINE a1,
                                      LPVOID a2)
    = CreateFiber;

HANDLE (__stdcall * Real_CreateFileA)(LPCSTR a0,
                                      DWORD a1,
                                      DWORD a2,
                                      LPSECURITY_ATTRIBUTES a3,
                                      DWORD a4,
                                      DWORD a5,
                                      HANDLE a6)
    = CreateFileA;

HANDLE (__stdcall * Real_CreateFileMappingA)(HANDLE a0,
                                             LPSECURITY_ATTRIBUTES a1,
                                             DWORD a2,
                                             DWORD a3,
                                             DWORD a4,
                                             LPCSTR a5)
    = CreateFileMappingA;

HANDLE (__stdcall * Real_CreateFileMappingW)(HANDLE a0,
                                             LPSECURITY_ATTRIBUTES a1,
                                             DWORD a2,
                                             DWORD a3,
                                             DWORD a4,
                                             LPCWSTR a5)
    = CreateFileMappingW;

HRESULT (__stdcall * Real_CreateFileMoniker)(LPCOLESTR a0,
                                             IMoniker** a1)
    = CreateFileMoniker;

HANDLE (__stdcall * Real_CreateFileW)(LPCWSTR a0,
                                      DWORD a1,
                                      DWORD a2,
                                      LPSECURITY_ATTRIBUTES a3,
                                      DWORD a4,
                                      DWORD a5,
                                      HANDLE a6)
    = CreateFileW;

HFONT (__stdcall * Real_CreateFontA)(int a0,
                                     int a1,
                                     int a2,
                                     int a3,
                                     int a4,
                                     DWORD a5,
                                     DWORD a6,
                                     DWORD a7,
                                     DWORD a8,
                                     DWORD a9,
                                     DWORD a10,
                                     DWORD a11,
                                     DWORD a12,
                                     LPCSTR a13)
    = CreateFontA;

HFONT (__stdcall * Real_CreateFontIndirectA)(CONST LOGFONTA* a0)
    = CreateFontIndirectA;

HFONT (__stdcall * Real_CreateFontIndirectW)(CONST LOGFONTW* a0)
    = CreateFontIndirectW;

HFONT (__stdcall * Real_CreateFontW)(int a0,
                                     int a1,
                                     int a2,
                                     int a3,
                                     int a4,
                                     DWORD a5,
                                     DWORD a6,
                                     DWORD a7,
                                     DWORD a8,
                                     DWORD a9,
                                     DWORD a10,
                                     DWORD a11,
                                     DWORD a12,
                                     LPCWSTR a13)
    = CreateFontW;

HRESULT (__stdcall * Real_CreateGenericComposite)(IMoniker* a0,
                                                  IMoniker* a1,
                                                  IMoniker** a2)
    = CreateGenericComposite;

HPALETTE (__stdcall * Real_CreateHalftonePalette)(HDC a0)
    = CreateHalftonePalette;

HBRUSH (__stdcall * Real_CreateHatchBrush)(int a0,
                                           COLORREF a1)
    = CreateHatchBrush;

HDC (__stdcall * Real_CreateICA)(LPCSTR a0,
                                 LPCSTR a1,
                                 LPCSTR a2,
                                 CONST DEVMODEA* a3)
    = CreateICA;

HDC (__stdcall * Real_CreateICW)(LPCWSTR a0,
                                 LPCWSTR a1,
                                 LPCWSTR a2,
                                 CONST DEVMODEW* a3)
    = CreateICW;

HRESULT (__stdcall * Real_CreateILockBytesOnHGlobal)(HGLOBAL a0,
                                                     BOOL a1,
                                                     ILockBytes** a2)
    = CreateILockBytesOnHGlobal;

HICON (__stdcall * Real_CreateIcon)(HINSTANCE a0,
                                    int a1,
                                    int a2,
                                    BYTE a3,
                                    BYTE a4,
                                    CONST BYTE* a5,
                                    CONST BYTE* a6)
    = CreateIcon;

HICON (__stdcall * Real_CreateIconFromResource)(PBYTE a0,
                                                DWORD a1,
                                                BOOL a2,
                                                DWORD a3)
    = CreateIconFromResource;

HICON (__stdcall * Real_CreateIconFromResourceEx)(PBYTE a0,
                                                  DWORD a1,
                                                  BOOL a2,
                                                  DWORD a3,
                                                  int a4,
                                                  int a5,
                                                  UINT a6)
    = CreateIconFromResourceEx;

HICON (__stdcall * Real_CreateIconIndirect)(PICONINFO a0)
    = CreateIconIndirect;

HANDLE (__stdcall * Real_CreateIoCompletionPort)(HANDLE a0,
                                                 HANDLE a1,
                                                 ULONG_PTR a2,
                                                 DWORD a3)
    = CreateIoCompletionPort;

HRESULT (__stdcall * Real_CreateItemMoniker)(LPCOLESTR a0,
                                             LPCOLESTR a1,
                                             IMoniker** a2)
    = CreateItemMoniker;

#if _MSC_VER < 1300
HWND (__stdcall * Real_CreateMDIWindowA)(LPSTR a0,
                                         LPSTR a1,
                                         DWORD a2,
                                         int a3,
                                         int a4,
                                         int a5,
                                         int a6,
                                         HWND a7,
                                         HINSTANCE a8,
                                         LPARAM a9)
    = CreateMDIWindowA;
#else
HWND (__stdcall * Real_CreateMDIWindowA)(LPCSTR a0,
                                         LPCSTR a1,
                                         DWORD a2,
                                         int a3,
                                         int a4,
                                         int a5,
                                         int a6,
                                         HWND a7,
                                         HINSTANCE a8,
                                         LPARAM a9)
    = CreateMDIWindowA;
#endif

#if _MSC_VER < 1300
HWND (__stdcall * Real_CreateMDIWindowW)(LPWSTR a0,
                                         LPWSTR a1,
                                         DWORD a2,
                                         int a3,
                                         int a4,
                                         int a5,
                                         int a6,
                                         HWND a7,
                                         HINSTANCE a8,
                                         LPARAM a9)
    = CreateMDIWindowW;
#else
HWND (__stdcall * Real_CreateMDIWindowW)(LPCWSTR a0,
                                         LPCWSTR a1,
                                         DWORD a2,
                                         int a3,
                                         int a4,
                                         int a5,
                                         int a6,
                                         HWND a7,
                                         HINSTANCE a8,
                                         LPARAM a9)
    = CreateMDIWindowW;
#endif

HANDLE (__stdcall * Real_CreateMailslotA)(LPCSTR a0,
                                          DWORD a1,
                                          DWORD a2,
                                          LPSECURITY_ATTRIBUTES a3)
    = CreateMailslotA;

HANDLE (__stdcall * Real_CreateMailslotW)(LPCWSTR a0,
                                          DWORD a1,
                                          DWORD a2,
                                          LPSECURITY_ATTRIBUTES a3)
    = CreateMailslotW;

HMENU (__stdcall * Real_CreateMenu)(void)
    = CreateMenu;

HDC (__stdcall * Real_CreateMetaFileA)(LPCSTR a0)
    = CreateMetaFileA;

HDC (__stdcall * Real_CreateMetaFileW)(LPCWSTR a0)
    = CreateMetaFileW;

HANDLE (__stdcall * Real_CreateMutexA)(LPSECURITY_ATTRIBUTES a0,
                                       BOOL a1,
                                       LPCSTR a2)
    = CreateMutexA;

HANDLE (__stdcall * Real_CreateMutexW)(LPSECURITY_ATTRIBUTES a0,
                                       BOOL a1,
                                       LPCWSTR a2)
    = CreateMutexW;

HANDLE (__stdcall * Real_CreateNamedPipeA)(LPCSTR a0,
                                           DWORD a1,
                                           DWORD a2,
                                           DWORD a3,
                                           DWORD a4,
                                           DWORD a5,
                                           DWORD a6,
                                           LPSECURITY_ATTRIBUTES a7)
    = CreateNamedPipeA;

HANDLE (__stdcall * Real_CreateNamedPipeW)(LPCWSTR a0,
                                           DWORD a1,
                                           DWORD a2,
                                           DWORD a3,
                                           DWORD a4,
                                           DWORD a5,
                                           DWORD a6,
                                           LPSECURITY_ATTRIBUTES a7)
    = CreateNamedPipeW;

HRESULT (__stdcall * Real_CreateOleAdviseHolder)(LPOLEADVISEHOLDER* a0)
    = CreateOleAdviseHolder;

HPALETTE (__stdcall * Real_CreatePalette)(CONST LOGPALETTE* a0)
    = CreatePalette;

HBRUSH (__stdcall * Real_CreatePatternBrush)(HBITMAP a0)
    = CreatePatternBrush;

HPEN (__stdcall * Real_CreatePen)(int a0,
                                  int a1,
                                  COLORREF a2)
    = CreatePen;

HPEN (__stdcall * Real_CreatePenIndirect)(CONST LOGPEN* a0)
    = CreatePenIndirect;

BOOL (__stdcall * Real_CreatePipe)(PHANDLE a0,
                                   PHANDLE a1,
                                   LPSECURITY_ATTRIBUTES a2,
                                   DWORD a3)
    = CreatePipe;

HRESULT (__stdcall * Real_CreatePointerMoniker)(LPUNKNOWN a0,
                                                IMoniker** a1)
    = CreatePointerMoniker;

HRGN (__stdcall * Real_CreatePolyPolygonRgn)(CONST POINT* a0,
                                             CONST INT* a1,
                                             int a2,
                                             int a3)
    = CreatePolyPolygonRgn;

HRGN (__stdcall * Real_CreatePolygonRgn)(CONST POINT* a0,
                                         int a1,
                                         int a2)
    = CreatePolygonRgn;

HMENU (__stdcall * Real_CreatePopupMenu)(void)
    = CreatePopupMenu;

BOOL (__stdcall * Real_CreateProcessA)(LPCSTR a0,
                                       LPSTR a1,
                                       LPSECURITY_ATTRIBUTES a2,
                                       LPSECURITY_ATTRIBUTES a3,
                                       BOOL a4,
                                       DWORD a5,
                                       LPVOID a6,
                                       LPCSTR a7,
                                       LPSTARTUPINFOA a8,
                                       LPPROCESS_INFORMATION a9)
    = CreateProcessA;

BOOL (__stdcall * Real_CreateProcessW)(LPCWSTR a0,
                                       LPWSTR a1,
                                       LPSECURITY_ATTRIBUTES a2,
                                       LPSECURITY_ATTRIBUTES a3,
                                       BOOL a4,
                                       DWORD a5,
                                       LPVOID a6,
                                       LPCWSTR a7,
                                       LPSTARTUPINFOW a8,
                                       LPPROCESS_INFORMATION a9)
    = CreateProcessW;

BOOL (__stdcall * Real_CreateProcessAsUserA)(
  __in_opt     HANDLE hToken,
  __in_opt     LPCSTR lpApplicationName,
  __inout_opt  LPSTR lpCommandLine,
  __in_opt     LPSECURITY_ATTRIBUTES lpProcessAttributes,
  __in_opt     LPSECURITY_ATTRIBUTES lpThreadAttributes,
  __in         BOOL bInheritHandles,
  __in         DWORD dwCreationFlags,
  __in_opt     LPVOID lpEnvironment,
  __in_opt     LPCSTR lpCurrentDirectory,
  __in         LPSTARTUPINFOA lpStartupInfo,
  __out        LPPROCESS_INFORMATION lpProcessInformation
                                       ) = CreateProcessAsUserA;

BOOL (__stdcall * Real_CreateProcessAsUserW)(
  __in_opt     HANDLE hToken,
  __in_opt     LPCWSTR lpApplicationName,
  __inout_opt  LPWSTR lpCommandLine,
  __in_opt     LPSECURITY_ATTRIBUTES lpProcessAttributes,
  __in_opt     LPSECURITY_ATTRIBUTES lpThreadAttributes,
  __in         BOOL bInheritHandles,
  __in         DWORD dwCreationFlags,
  __in_opt     LPVOID lpEnvironment,
  __in_opt     LPCWSTR lpCurrentDirectory,
  __in         LPSTARTUPINFOW lpStartupInfo,
  __out        LPPROCESS_INFORMATION lpProcessInformation
) = CreateProcessAsUserW;

#if(_WIN32_WINNT >= 0x0500)

BOOL (WINAPI * Real_CreateProcessWithLogonW)(
  __in         LPCWSTR lpUsername,
  __in_opt     LPCWSTR lpDomain,
  __in         LPCWSTR lpPassword,
  __in         DWORD dwLogonFlags,
  __in_opt     LPCWSTR lpApplicationName,
  __inout_opt  LPWSTR lpCommandLine,
  __in         DWORD dwCreationFlags,
  __in_opt     LPVOID lpEnvironment,
  __in_opt     LPCWSTR lpCurrentDirectory,
  __in         LPSTARTUPINFOW lpStartupInfo,
  __out        LPPROCESS_INFORMATION lpProcessInfo
) = CreateProcessWithLogonW;

BOOL (WINAPI * Real_CreateProcessWithTokenW)(
  __in         HANDLE hToken,
  __in         DWORD dwLogonFlags,
  __in_opt     LPCWSTR lpApplicationName,
  __inout_opt  LPWSTR lpCommandLine,
  __in         DWORD dwCreationFlags,
  __in_opt     LPVOID lpEnvironment,
  __in_opt     LPCWSTR lpCurrentDirectory,
  __in         LPSTARTUPINFOW lpStartupInfo,
  __out        LPPROCESS_INFORMATION lpProcessInfo
) = CreateProcessWithTokenW;
#endif

HRGN (__stdcall * Real_CreateRectRgn)(int a0,
                                      int a1,
                                      int a2,
                                      int a3)
    = CreateRectRgn;

HRGN (__stdcall * Real_CreateRectRgnIndirect)(CONST RECT* a0)
    = CreateRectRgnIndirect;

HANDLE (__stdcall * Real_CreateRemoteThread)(HANDLE a0,
                                             LPSECURITY_ATTRIBUTES a1,
                                             ULONG_PTR a2,
                                             LPTHREAD_START_ROUTINE a3,
                                             LPVOID a4,
                                             DWORD a5,
                                             LPDWORD a6)
    = CreateRemoteThread;

HRGN (__stdcall * Real_CreateRoundRectRgn)(int a0,
                                           int a1,
                                           int a2,
                                           int a3,
                                           int a4,
                                           int a5)
    = CreateRoundRectRgn;

BOOL (__stdcall * Real_CreateScalableFontResourceA)(DWORD a0,
                                                    LPCSTR a1,
                                                    LPCSTR a2,
                                                    LPCSTR a3)
    = CreateScalableFontResourceA;

BOOL (__stdcall * Real_CreateScalableFontResourceW)(DWORD a0,
                                                    LPCWSTR a1,
                                                    LPCWSTR a2,
                                                    LPCWSTR a3)
    = CreateScalableFontResourceW;

HANDLE (__stdcall * Real_CreateSemaphoreA)(LPSECURITY_ATTRIBUTES a0,
                                           LONG a1,
                                           LONG a2,
                                           LPCSTR a3)
    = CreateSemaphoreA;

HANDLE (__stdcall * Real_CreateSemaphoreW)(LPSECURITY_ATTRIBUTES a0,
                                           LONG a1,
                                           LONG a2,
                                           LPCWSTR a3)
    = CreateSemaphoreW;

HBRUSH (__stdcall * Real_CreateSolidBrush)(COLORREF a0)
    = CreateSolidBrush;

HRESULT (__stdcall * Real_CreateStdProgressIndicator)(HWND a0,
                                                      LPCOLESTR a1,
                                                      IBindStatusCallback* a2,
                                                      IBindStatusCallback** a3)
    = CreateStdProgressIndicator;

HRESULT (__stdcall * Real_CreateStreamOnHGlobal)(HGLOBAL a0,
                                                 BOOL a1,
                                                 LPSTREAM* a2)
    = CreateStreamOnHGlobal;

DWORD (__stdcall * Real_CreateTapePartition)(HANDLE a0,
                                             DWORD a1,
                                             DWORD a2,
                                             DWORD a3)
    = CreateTapePartition;

HANDLE (__stdcall * Real_CreateThread)(LPSECURITY_ATTRIBUTES a0,
                                       ULONG_PTR a1,
                                       LPTHREAD_START_ROUTINE a2,
                                       LPVOID a3,
                                       DWORD a4,
                                       LPDWORD a5)
    = CreateThread;

HANDLE (__stdcall * Real_CreateWaitableTimerA)(LPSECURITY_ATTRIBUTES a0,
                                               BOOL a1,
                                               LPCSTR a2)
    = CreateWaitableTimerA;

HANDLE (__stdcall * Real_CreateWaitableTimerW)(LPSECURITY_ATTRIBUTES a0,
                                               BOOL a1,
                                               LPCWSTR a2)
    = CreateWaitableTimerW;

HWND (__stdcall * Real_CreateWindowExA)(DWORD a0,
                                        LPCSTR a1,
                                        LPCSTR a2,
                                        DWORD a3,
                                        int a4,
                                        int a5,
                                        int a6,
                                        int a7,
                                        HWND a8,
                                        HMENU a9,
                                        HINSTANCE a10,
                                        LPVOID a11)
    = CreateWindowExA;

HWND (__stdcall * Real_CreateWindowExW)(DWORD a0,
                                        LPCWSTR a1,
                                        LPCWSTR a2,
                                        DWORD a3,
                                        int a4,
                                        int a5,
                                        int a6,
                                        int a7,
                                        HWND a8,
                                        HMENU a9,
                                        HINSTANCE a10,
                                        LPVOID a11)
    = CreateWindowExW;

#if _MSC_VER < 1300
HWINSTA (__stdcall * Real_CreateWindowStationA)(LPSTR a0,
                                                DWORD a1,
                                                ACCESS_MASK a2,
                                                LPSECURITY_ATTRIBUTES a3)
    = CreateWindowStationA;
#else
HWINSTA (__stdcall * Real_CreateWindowStationA)(LPCSTR a0,
                                                DWORD a1,
                                                ACCESS_MASK a2,
                                                LPSECURITY_ATTRIBUTES a3)
    = CreateWindowStationA;
#endif

#if _MSC_VER < 1300
HWINSTA (__stdcall * Real_CreateWindowStationW)(LPWSTR a0,
                                                DWORD a1,
                                                ACCESS_MASK a2,
                                                LPSECURITY_ATTRIBUTES a3)
    = CreateWindowStationW;
#else
HWINSTA (__stdcall * Real_CreateWindowStationW)(LPCWSTR a0,
                                                DWORD a1,
                                                ACCESS_MASK a2,
                                                LPSECURITY_ATTRIBUTES a3)
    = CreateWindowStationW;
#endif

BOOL (__stdcall * Real_DPtoLP)(HDC a0,
                               POINT* a1,
                               int a2)
    = DPtoLP;

BOOL (__stdcall * Real_DdeAbandonTransaction)(DWORD a0,
                                              HCONV a1,
                                              DWORD a2)
    = DdeAbandonTransaction;

LPBYTE (__stdcall * Real_DdeAccessData)(HDDEDATA a0,
                                        LPDWORD a1)
    = DdeAccessData;

HDDEDATA (__stdcall * Real_DdeAddData)(HDDEDATA a0,
                                       LPBYTE a1,
                                       DWORD a2,
                                       DWORD a3)
    = DdeAddData;

HDDEDATA (__stdcall * Real_DdeClientTransaction)(LPBYTE a0,
                                                 DWORD a1,
                                                 HCONV a2,
                                                 HSZ a3,
                                                 UINT a4,
                                                 UINT a5,
                                                 DWORD a6,
                                                 LPDWORD a7)
    = DdeClientTransaction;

int (__stdcall * Real_DdeCmpStringHandles)(HSZ a0,
                                           HSZ a1)
    = DdeCmpStringHandles;

HCONV (__stdcall * Real_DdeConnect)(DWORD a0,
                                    HSZ a1,
                                    HSZ a2,
                                    PCONVCONTEXT a3)
    = DdeConnect;

HCONVLIST (__stdcall * Real_DdeConnectList)(DWORD a0,
                                            HSZ a1,
                                            HSZ a2,
                                            HCONVLIST a3,
                                            PCONVCONTEXT a4)
    = DdeConnectList;

HDDEDATA (__stdcall * Real_DdeCreateDataHandle)(DWORD a0,
                                                LPBYTE a1,
                                                DWORD a2,
                                                DWORD a3,
                                                HSZ a4,
                                                UINT a5,
                                                UINT a6)
    = DdeCreateDataHandle;

HSZ (__stdcall * Real_DdeCreateStringHandleA)(DWORD a0,
                                              LPCSTR a1,
                                              int a2)
    = DdeCreateStringHandleA;

HSZ (__stdcall * Real_DdeCreateStringHandleW)(DWORD a0,
                                              LPCWSTR a1,
                                              int a2)
    = DdeCreateStringHandleW;

BOOL (__stdcall * Real_DdeDisconnect)(HCONV a0)
    = DdeDisconnect;

BOOL (__stdcall * Real_DdeDisconnectList)(HCONVLIST a0)
    = DdeDisconnectList;

BOOL (__stdcall * Real_DdeEnableCallback)(DWORD a0,
                                          HCONV a1,
                                          UINT a2)
    = DdeEnableCallback;

BOOL (__stdcall * Real_DdeFreeDataHandle)(HDDEDATA a0)
    = DdeFreeDataHandle;

BOOL (__stdcall * Real_DdeFreeStringHandle)(DWORD a0,
                                            HSZ a1)
    = DdeFreeStringHandle;

DWORD (__stdcall * Real_DdeGetData)(HDDEDATA a0,
                                    LPBYTE a1,
                                    DWORD a2,
                                    DWORD a3)
    = DdeGetData;

UINT (__stdcall * Real_DdeGetLastError)(DWORD a0)
    = DdeGetLastError;

BOOL (__stdcall * Real_DdeImpersonateClient)(HCONV a0)
    = DdeImpersonateClient;

BOOL (__stdcall * Real_DdeKeepStringHandle)(DWORD a0,
                                            HSZ a1)
    = DdeKeepStringHandle;

HDDEDATA (__stdcall * Real_DdeNameService)(DWORD a0,
                                           HSZ a1,
                                           HSZ a2,
                                           UINT a3)
    = DdeNameService;

BOOL (__stdcall * Real_DdePostAdvise)(DWORD a0,
                                      HSZ a1,
                                      HSZ a2)
    = DdePostAdvise;

UINT (__stdcall * Real_DdeQueryConvInfo)(HCONV a0,
                                         DWORD a1,
                                         CONVINFO* a2)
    = DdeQueryConvInfo;

HCONV (__stdcall * Real_DdeQueryNextServer)(HCONVLIST a0,
                                            HCONV a1)
    = DdeQueryNextServer;

DWORD (__stdcall * Real_DdeQueryStringA)(DWORD a0,
                                         HSZ a1,
                                         LPSTR a2,
                                         DWORD a3,
                                         int a4)
    = DdeQueryStringA;

DWORD (__stdcall * Real_DdeQueryStringW)(DWORD a0,
                                         HSZ a1,
                                         LPWSTR a2,
                                         DWORD a3,
                                         int a4)
    = DdeQueryStringW;

HCONV (__stdcall * Real_DdeReconnect)(HCONV a0)
    = DdeReconnect;

BOOL (__stdcall * Real_DdeSetQualityOfService)(HWND a0,
                                               CONST SECURITY_QUALITY_OF_SERVICE* a1,
                                               PSECURITY_QUALITY_OF_SERVICE a2)
    = DdeSetQualityOfService;

BOOL (__stdcall * Real_DdeSetUserHandle)(HCONV a0,
                                         DWORD a1,
                                         ULONG_PTR a2)
    = DdeSetUserHandle;

BOOL (__stdcall * Real_DdeUnaccessData)(HDDEDATA a0)
    = DdeUnaccessData;

BOOL (__stdcall * Real_DdeUninitialize)(DWORD a0)
    = DdeUninitialize;

BOOL (__stdcall * Real_DebugActiveProcess)(DWORD a0)
    = DebugActiveProcess;

BOOL (__stdcall * Real_DebugActiveProcessStop)(DWORD a0)
    = DebugActiveProcessStop;

void (__stdcall * Real_DebugBreak)(void)
    = DebugBreak;

LRESULT (__stdcall * Real_DefDlgProcA)(HWND a0,
                                       UINT a1,
                                       WPARAM a2,
                                       LPARAM a3)
    = DefDlgProcA;

LRESULT (__stdcall * Real_DefDlgProcW)(HWND a0,
                                       UINT a1,
                                       WPARAM a2,
                                       LPARAM a3)
    = DefDlgProcW;

LRESULT (__stdcall * Real_DefFrameProcA)(HWND a0,
                                         HWND a1,
                                         UINT a2,
                                         WPARAM a3,
                                         LPARAM a4)
    = DefFrameProcA;

LRESULT (__stdcall * Real_DefFrameProcW)(HWND a0,
                                         HWND a1,
                                         UINT a2,
                                         WPARAM a3,
                                         LPARAM a4)
    = DefFrameProcW;

LRESULT (__stdcall * Real_DefMDIChildProcA)(HWND a0,
                                            UINT a1,
                                            WPARAM a2,
                                            LPARAM a3)
    = DefMDIChildProcA;

LRESULT (__stdcall * Real_DefMDIChildProcW)(HWND a0,
                                            UINT a1,
                                            WPARAM a2,
                                            LPARAM a3)
    = DefMDIChildProcW;

LRESULT (__stdcall * Real_DefWindowProcA)(HWND a0,
                                          UINT a1,
                                          WPARAM a2,
                                          LPARAM a3)
    = DefWindowProcA;

LRESULT (__stdcall * Real_DefWindowProcW)(HWND a0,
                                          UINT a1,
                                          WPARAM a2,
                                          LPARAM a3)
    = DefWindowProcW;

HDWP (__stdcall * Real_DeferWindowPos)(HDWP a0,
                                       HWND a1,
                                       HWND a2,
                                       int a3,
                                       int a4,
                                       int a5,
                                       int a6,
                                       UINT a7)
    = DeferWindowPos;

BOOL (__stdcall * Real_DefineDosDeviceA)(DWORD a0,
                                         LPCSTR a1,
                                         LPCSTR a2)
    = DefineDosDeviceA;

BOOL (__stdcall * Real_DefineDosDeviceW)(DWORD a0,
                                         LPCWSTR a1,
                                         LPCWSTR a2)
    = DefineDosDeviceW;

ATOM (__stdcall * Real_DeleteAtom)(ATOM a0)
    = DeleteAtom;

BOOL (__stdcall * Real_DeleteColorSpace)(HCOLORSPACE a0)
    = DeleteColorSpace;

BOOL (__stdcall * Real_DeleteDC)(HDC a0)
    = DeleteDC;

BOOL (__stdcall * Real_DeleteEnhMetaFile)(HENHMETAFILE a0)
    = DeleteEnhMetaFile;

void (__stdcall * Real_DeleteFiber)(LPVOID a0)
    = DeleteFiber;

BOOL (__stdcall * Real_DeleteFileA)(LPCSTR a0)
    = DeleteFileA;

BOOL (__stdcall * Real_DeleteFileW)(LPCWSTR a0)
    = DeleteFileW;

BOOL (__stdcall * Real_DeleteMenu)(HMENU a0,
                                   UINT a1,
                                   UINT a2)
    = DeleteMenu;

BOOL (__stdcall * Real_DeleteMetaFile)(HMETAFILE a0)
    = DeleteMetaFile;

BOOL (__stdcall * Real_DeleteObject)(HGDIOBJ a0)
    = DeleteObject;

int (__stdcall * Real_DescribePixelFormat)(HDC a0,
                                           int a1,
                                           UINT a2,
                                           PIXELFORMATDESCRIPTOR* a3)
    = DescribePixelFormat;

BOOL (__stdcall * Real_DestroyAcceleratorTable)(HACCEL a0)
    = DestroyAcceleratorTable;

BOOL (__stdcall * Real_DestroyCaret)(void)
    = DestroyCaret;

BOOL (__stdcall * Real_DestroyCursor)(HCURSOR a0)
    = DestroyCursor;

BOOL (__stdcall * Real_DestroyIcon)(HICON a0)
    = DestroyIcon;

BOOL (__stdcall * Real_DestroyMenu)(HMENU a0)
    = DestroyMenu;

BOOL (__stdcall * Real_DestroyWindow)(HWND a0)
    = DestroyWindow;

BOOL (__stdcall * Real_DeviceIoControl)(HANDLE a0,
                                        DWORD a1,
                                        LPVOID a2,
                                        DWORD a3,
                                        LPVOID a4,
                                        DWORD a5,
                                        LPDWORD a6,
                                        LPOVERLAPPED a7)
    = DeviceIoControl;

INT_PTR (__stdcall * Real_DialogBoxIndirectParamA)(HINSTANCE a0,
                                                   LPCDLGTEMPLATEA a1,
                                                   HWND a2,
                                                   DLGPROC a3,
                                                   LPARAM a4)
    = DialogBoxIndirectParamA;

INT_PTR (__stdcall * Real_DialogBoxIndirectParamW)(HINSTANCE a0,
                                                   LPCDLGTEMPLATEW a1,
                                                   HWND a2,
                                                   DLGPROC a3,
                                                   LPARAM a4)
    = DialogBoxIndirectParamW;

INT_PTR (__stdcall * Real_DialogBoxParamA)(HINSTANCE a0,
                                           LPCSTR a1,
                                           HWND a2,
                                           DLGPROC a3,
                                           LPARAM a4)
    = DialogBoxParamA;

INT_PTR (__stdcall * Real_DialogBoxParamW)(HINSTANCE a0,
                                           LPCWSTR a1,
                                           HWND a2,
                                           DLGPROC a3,
                                           LPARAM a4)
    = DialogBoxParamW;

BOOL (__stdcall * Real_DisableThreadLibraryCalls)(HMODULE a0)
    = DisableThreadLibraryCalls;

BOOL (__stdcall * Real_DisconnectNamedPipe)(HANDLE a0)
    = DisconnectNamedPipe;

LRESULT (__stdcall * Real_DispatchMessageA)(CONST MSG* a0)
    = DispatchMessageA;

LRESULT (__stdcall * Real_DispatchMessageW)(CONST MSG* a0)
    = DispatchMessageW;

int (__stdcall * Real_DlgDirListA)(HWND a0,
                                   LPSTR a1,
                                   int a2,
                                   int a3,
                                   UINT a4)
    = DlgDirListA;

int (__stdcall * Real_DlgDirListComboBoxA)(HWND a0,
                                           LPSTR a1,
                                           int a2,
                                           int a3,
                                           UINT a4)
    = DlgDirListComboBoxA;

int (__stdcall * Real_DlgDirListComboBoxW)(HWND a0,
                                           LPWSTR a1,
                                           int a2,
                                           int a3,
                                           UINT a4)
    = DlgDirListComboBoxW;

int (__stdcall * Real_DlgDirListW)(HWND a0,
                                   LPWSTR a1,
                                   int a2,
                                   int a3,
                                   UINT a4)
    = DlgDirListW;

BOOL (__stdcall * Real_DlgDirSelectComboBoxExA)(HWND a0,
                                                LPSTR a1,
                                                int a2,
                                                int a3)
    = DlgDirSelectComboBoxExA;

BOOL (__stdcall * Real_DlgDirSelectComboBoxExW)(HWND a0,
                                                LPWSTR a1,
                                                int a2,
                                                int a3)
    = DlgDirSelectComboBoxExW;

BOOL (__stdcall * Real_DlgDirSelectExA)(HWND a0,
                                        LPSTR a1,
                                        int a2,
                                        int a3)
    = DlgDirSelectExA;

BOOL (__stdcall * Real_DlgDirSelectExW)(HWND a0,
                                        LPWSTR a1,
                                        int a2,
                                        int a3)
    = DlgDirSelectExW;

HRESULT (__stdcall * Real_DoDragDrop)(IDataObject* a0,
                                      IDropSource* a1,
                                      DWORD a2,
                                      LPDWORD a3)
    = DoDragDrop;

BOOL (__stdcall * Real_DosDateTimeToFileTime)(WORD a0,
                                              WORD a1,
                                              LPFILETIME a2)
    = DosDateTimeToFileTime;

BOOL (__stdcall * Real_DragDetect)(HWND a0,
                                   POINT a1)
    = DragDetect;

DWORD (__stdcall * Real_DragObject)(HWND a0,
                                    HWND a1,
                                    UINT a2,
                                    ULONG_PTR a3,
                                    HCURSOR a4)
    = DragObject;

BOOL (__stdcall * Real_DrawAnimatedRects)(HWND a0,
                                          int a1,
                                          CONST RECT* a2,
                                          CONST RECT* a3)
    = DrawAnimatedRects;

BOOL (__stdcall * Real_DrawCaption)(HWND a0,
                                    HDC a1,
                                    CONST RECT* a2,
                                    UINT a3)
    = DrawCaption;

BOOL (__stdcall * Real_DrawEdge)(HDC a0,
                                 LPRECT a1,
                                 UINT a2,
                                 UINT a3)
    = DrawEdge;

int (__stdcall * Real_DrawEscape)(HDC a0,
                                  int a1,
                                  int a2,
                                  LPCSTR a3)
    = DrawEscape;

BOOL (__stdcall * Real_DrawFocusRect)(HDC a0,
                                      CONST RECT* a1)
    = DrawFocusRect;

BOOL (__stdcall * Real_DrawFrameControl)(HDC a0,
                                         LPRECT a1,
                                         UINT a2,
                                         UINT a3)
    = DrawFrameControl;

BOOL (__stdcall * Real_DrawIcon)(HDC a0,
                                 int a1,
                                 int a2,
                                 HICON a3)
    = DrawIcon;

BOOL (__stdcall * Real_DrawIconEx)(HDC a0,
                                   int a1,
                                   int a2,
                                   HICON a3,
                                   int a4,
                                   int a5,
                                   UINT a6,
                                   HBRUSH a7,
                                   UINT a8)
    = DrawIconEx;

BOOL (__stdcall * Real_DrawMenuBar)(HWND a0)
    = DrawMenuBar;

BOOL (__stdcall * Real_DrawStateA)(HDC a0,
                                   HBRUSH a1,
                                   DRAWSTATEPROC a2,
                                   LPARAM a3,
                                   WPARAM a4,
                                   int a5,
                                   int a6,
                                   int a7,
                                   int a8,
                                   UINT a9)
    = DrawStateA;

BOOL (__stdcall * Real_DrawStateW)(HDC a0,
                                   HBRUSH a1,
                                   DRAWSTATEPROC a2,
                                   LPARAM a3,
                                   WPARAM a4,
                                   int a5,
                                   int a6,
                                   int a7,
                                   int a8,
                                   UINT a9)
    = DrawStateW;

int (__stdcall * Real_DrawTextA)(HDC a0,
                                 LPCSTR a1,
                                 int a2,
                                 LPRECT a3,
                                 UINT a4)
    = DrawTextA;

int (__stdcall * Real_DrawTextExA)(HDC a0,
                                   LPSTR a1,
                                   int a2,
                                   LPRECT a3,
                                   UINT a4,
                                   LPDRAWTEXTPARAMS a5)
    = DrawTextExA;

int (__stdcall * Real_DrawTextExW)(HDC a0,
                                   LPWSTR a1,
                                   int a2,
                                   LPRECT a3,
                                   UINT a4,
                                   LPDRAWTEXTPARAMS a5)
    = DrawTextExW;

int (__stdcall * Real_DrawTextW)(HDC a0,
                                 LPCWSTR a1,
                                 int a2,
                                 LPRECT a3,
                                 UINT a4)
    = DrawTextW;

BOOL (__stdcall * Real_DuplicateHandle)(HANDLE a0,
                                        HANDLE a1,
                                        HANDLE a2,
                                        LPHANDLE a3,
                                        DWORD a4,
                                        BOOL a5,
                                        DWORD a6)
    = DuplicateHandle;

BOOL (__stdcall * Real_Ellipse)(HDC a0,
                                int a1,
                                int a2,
                                int a3,
                                int a4)
    = Ellipse;

BOOL (__stdcall * Real_EmptyClipboard)(void)
    = EmptyClipboard;

BOOL (__stdcall * Real_EnableMenuItem)(HMENU a0,
                                       UINT a1,
                                       UINT a2)
    = EnableMenuItem;

BOOL (__stdcall * Real_EnableScrollBar)(HWND a0,
                                        UINT a1,
                                        UINT a2)
    = EnableScrollBar;

BOOL (__stdcall * Real_EnableWindow)(HWND a0,
                                     BOOL a1)
    = EnableWindow;

BOOL (__stdcall * Real_EndDeferWindowPos)(HDWP a0)
    = EndDeferWindowPos;

BOOL (__stdcall * Real_EndDialog)(HWND a0,
                                  INT_PTR a1)
    = EndDialog;

int (__stdcall * Real_EndDoc)(HDC a0)
    = EndDoc;

int (__stdcall * Real_EndPage)(HDC a0)
    = EndPage;

BOOL (__stdcall * Real_EndPaint)(HWND a0,
                                 CONST PAINTSTRUCT* a1)
    = EndPaint;

BOOL (__stdcall * Real_EndPath)(HDC a0)
    = EndPath;

BOOL (__stdcall * Real_EndUpdateResourceA)(HANDLE a0,
                                           BOOL a1)
    = EndUpdateResourceA;

BOOL (__stdcall * Real_EndUpdateResourceW)(HANDLE a0,
                                           BOOL a1)
    = EndUpdateResourceW;

BOOL (__stdcall * Real_EnumCalendarInfoA)(CALINFO_ENUMPROCA a0,
                                          LCID a1,
                                          CALID a2,
                                          CALTYPE a3)
    = EnumCalendarInfoA;

BOOL (__stdcall * Real_EnumCalendarInfoW)(CALINFO_ENUMPROCW a0,
                                          LCID a1,
                                          CALID a2,
                                          CALTYPE a3)
    = EnumCalendarInfoW;

BOOL (__stdcall * Real_EnumChildWindows)(HWND a0,
                                         WNDENUMPROC a1,
                                         LPARAM a2)
    = EnumChildWindows;

UINT (__stdcall * Real_EnumClipboardFormats)(UINT a0)
    = EnumClipboardFormats;

BOOL (__stdcall * Real_EnumDateFormatsA)(DATEFMT_ENUMPROCA a0,
                                         LCID a1,
                                         DWORD a2)
    = EnumDateFormatsA;

BOOL (__stdcall * Real_EnumDateFormatsW)(DATEFMT_ENUMPROCW a0,
                                         LCID a1,
                                         DWORD a2)
    = EnumDateFormatsW;

BOOL (__stdcall * Real_EnumDesktopWindows)(HDESK a0,
                                           WNDENUMPROC a1,
                                           LPARAM a2)
    = EnumDesktopWindows;

BOOL (__stdcall * Real_EnumDesktopsA)(HWINSTA a0,
                                      DESKTOPENUMPROCA a1,
                                      LPARAM a2)
    = EnumDesktopsA;

BOOL (__stdcall * Real_EnumDesktopsW)(HWINSTA a0,
                                      DESKTOPENUMPROCW a1,
                                      LPARAM a2)
    = EnumDesktopsW;

BOOL (__stdcall * Real_EnumDisplaySettingsA)(LPCSTR a0,
                                             DWORD a1,
                                             LPDEVMODEA a2)
    = EnumDisplaySettingsA;

BOOL (__stdcall * Real_EnumDisplaySettingsW)(LPCWSTR a0,
                                             DWORD a1,
                                             LPDEVMODEW a2)
    = EnumDisplaySettingsW;

BOOL (__stdcall * Real_EnumEnhMetaFile)(HDC a0,
                                        HENHMETAFILE a1,
                                        ENHMFENUMPROC a2,
                                        LPVOID a3,
                                        CONST RECT* a4)
    = EnumEnhMetaFile;

int (__stdcall * Real_EnumFontFamiliesA)(HDC a0,
                                         LPCSTR a1,
                                         FONTENUMPROCA a2,
                                         LPARAM a3)
    = EnumFontFamiliesA;

int (__stdcall * Real_EnumFontFamiliesExA)(HDC a0,
                                           LPLOGFONTA a1,
                                           FONTENUMPROCA a2,
                                           LPARAM a3,
                                           DWORD a4)
    = EnumFontFamiliesExA;

int (__stdcall * Real_EnumFontFamiliesExW)(HDC a0,
                                           LPLOGFONTW a1,
                                           FONTENUMPROCW a2,
                                           LPARAM a3,
                                           DWORD a4)
    = EnumFontFamiliesExW;

int (__stdcall * Real_EnumFontFamiliesW)(HDC a0,
                                         LPCWSTR a1,
                                         FONTENUMPROCW a2,
                                         LPARAM a3)
    = EnumFontFamiliesW;

int (__stdcall * Real_EnumFontsA)(HDC a0,
                                  LPCSTR a1,
                                  FONTENUMPROCA a2,
                                  LPARAM a3)
    = EnumFontsA;

int (__stdcall * Real_EnumFontsW)(HDC a0,
                                  LPCWSTR a1,
                                  FONTENUMPROCW a2,
                                  LPARAM a3)
    = EnumFontsW;

int (__stdcall * Real_EnumICMProfilesA)(HDC a0,
                                        ICMENUMPROCA a1,
                                        LPARAM a2)
    = EnumICMProfilesA;

int (__stdcall * Real_EnumICMProfilesW)(HDC a0,
                                        ICMENUMPROCW a1,
                                        LPARAM a2)
    = EnumICMProfilesW;

BOOL (__stdcall * Real_EnumMetaFile)(HDC a0,
                                     HMETAFILE a1,
                                     MFENUMPROC a2,
                                     LPARAM a3)
    = EnumMetaFile;

int (__stdcall * Real_EnumObjects)(HDC a0,
                                   int a1,
                                   GOBJENUMPROC a2,
                                   LPARAM a3)
    = EnumObjects;

int (__stdcall * Real_EnumPropsA)(HWND a0,
                                  PROPENUMPROCA a1)
    = EnumPropsA;

int (__stdcall * Real_EnumPropsExA)(HWND a0,
                                    PROPENUMPROCEXA a1,
                                    LPARAM a2)
    = EnumPropsExA;

int (__stdcall * Real_EnumPropsExW)(HWND a0,
                                    PROPENUMPROCEXW a1,
                                    LPARAM a2)
    = EnumPropsExW;

int (__stdcall * Real_EnumPropsW)(HWND a0,
                                  PROPENUMPROCW a1)
    = EnumPropsW;

#if _MSC_VER < 1300
BOOL (__stdcall * Real_EnumResourceLanguagesA)(HMODULE a0,
                                               LPCSTR a1,
                                               LPCSTR a2,
                                               ENUMRESLANGPROC a3,
                                               LONG a4)
    = EnumResourceLanguagesA;
#else
BOOL (__stdcall * Real_EnumResourceLanguagesA)(HMODULE a0,
                                               LPCSTR a1,
                                               LPCSTR a2,
                                               ENUMRESLANGPROCA a3,
                                               LONG_PTR a4)
    = EnumResourceLanguagesA;
#endif

#if _MSC_VER < 1300
BOOL (__stdcall * Real_EnumResourceLanguagesW)(HMODULE a0,
                                               LPCWSTR a1,
                                               LPCWSTR a2,
                                               ENUMRESLANGPROC a3,
                                               LONG a4)
    = EnumResourceLanguagesW;
#else
BOOL (__stdcall * Real_EnumResourceLanguagesW)(HMODULE a0,
                                               LPCWSTR a1,
                                               LPCWSTR a2,
                                               ENUMRESLANGPROCW a3,
                                               LONG_PTR a4)
    = EnumResourceLanguagesW;
#endif

#if _MSC_VER < 1300
BOOL (__stdcall * Real_EnumResourceNamesA)(HMODULE a0,
                                           LPCSTR a1,
                                           ENUMRESNAMEPROC a2,
                                           LONG a3)
    = EnumResourceNamesA;
#else
BOOL (__stdcall * Real_EnumResourceNamesA)(HMODULE a0,
                                           LPCSTR a1,
                                           ENUMRESNAMEPROCA a2,
                                           LONG_PTR a3)
    = EnumResourceNamesA;
#endif

#if _MSC_VER < 1300
BOOL (__stdcall * Real_EnumResourceNamesW)(HMODULE a0,
                                           LPCWSTR a1,
                                           ENUMRESNAMEPROC a2,
                                           LONG a3)
    = EnumResourceNamesW;
#else
BOOL (__stdcall * Real_EnumResourceNamesW)(HMODULE a0,
                                           LPCWSTR a1,
                                           ENUMRESNAMEPROCW a2,
                                           LONG_PTR a3)
    = EnumResourceNamesW;
#endif

#if _MSC_VER < 1300
BOOL (__stdcall * Real_EnumResourceTypesA)(HMODULE a0,
                                           ENUMRESTYPEPROC a1,
                                           LONG a2)
    = EnumResourceTypesA;
#else
BOOL (__stdcall * Real_EnumResourceTypesA)(HMODULE a0,
                                           ENUMRESTYPEPROCA a1,
                                           LONG_PTR a2)
    = EnumResourceTypesA;
#endif

#if _MSC_VER < 1300
BOOL (__stdcall * Real_EnumResourceTypesW)(HMODULE a0,
                                           ENUMRESTYPEPROC a1,
                                           LONG a2)
    = EnumResourceTypesW;
#else
BOOL (__stdcall * Real_EnumResourceTypesW)(HMODULE a0,
                                           ENUMRESTYPEPROCW a1,
                                           LONG_PTR a2)
    = EnumResourceTypesW;
#endif

BOOL (__stdcall * Real_EnumSystemCodePagesA)(CODEPAGE_ENUMPROCA a0,
                                             DWORD a1)
    = EnumSystemCodePagesA;

BOOL (__stdcall * Real_EnumSystemCodePagesW)(CODEPAGE_ENUMPROCW a0,
                                             DWORD a1)
    = EnumSystemCodePagesW;

#if(WINVER >= 0x0500)
BOOL (__stdcall * Real_EnumSystemLocalesA)(LOCALE_ENUMPROCA a0,
                                           DWORD a1)
    = EnumSystemLocalesA;

BOOL (__stdcall * Real_EnumSystemLocalesW)(LOCALE_ENUMPROCW a0,
                                           DWORD a1)
    = EnumSystemLocalesW;
#endif // (WINVER >= 0x0500)

BOOL (__stdcall * Real_EnumThreadWindows)(DWORD a0,
                                          WNDENUMPROC a1,
                                          LPARAM a2)
    = EnumThreadWindows;

BOOL (__stdcall * Real_EnumTimeFormatsA)(TIMEFMT_ENUMPROCA a0,
                                         LCID a1,
                                         DWORD a2)
    = EnumTimeFormatsA;

BOOL (__stdcall * Real_EnumTimeFormatsW)(TIMEFMT_ENUMPROCW a0,
                                         LCID a1,
                                         DWORD a2)
    = EnumTimeFormatsW;

BOOL (__stdcall * Real_EnumWindowStationsA)(WINSTAENUMPROCA a0,
                                            LPARAM a1)
    = EnumWindowStationsA;

BOOL (__stdcall * Real_EnumWindowStationsW)(WINSTAENUMPROCW a0,
                                            LPARAM a1)
    = EnumWindowStationsW;

BOOL (__stdcall * Real_EnumWindows)(WNDENUMPROC a0,
                                    LPARAM a1)
    = EnumWindows;

BOOL (__stdcall * Real_EqualRect)(CONST RECT* a0,
                                  CONST RECT* a1)
    = EqualRect;

BOOL (__stdcall * Real_EqualRgn)(HRGN a0,
                                 HRGN a1)
    = EqualRgn;

DWORD (__stdcall * Real_EraseTape)(HANDLE a0,
                                   DWORD a1,
                                   BOOL a2)
    = EraseTape;

int (__stdcall * Real_Escape)(HDC a0,
                              int a1,
                              int a2,
                              LPCSTR a3,
                              LPVOID a4)
    = Escape;

BOOL (__stdcall * Real_EscapeCommFunction)(HANDLE a0,
                                           DWORD a1)
    = EscapeCommFunction;

int (__stdcall * Real_ExcludeClipRect)(HDC a0,
                                       int a1,
                                       int a2,
                                       int a3,
                                       int a4)
    = ExcludeClipRect;

int (__stdcall * Real_ExcludeUpdateRgn)(HDC a0,
                                        HWND a1)
    = ExcludeUpdateRgn;

void (__stdcall * Real_ExitProcess)(UINT a0)
    = ExitProcess;

void (__stdcall * Real_ExitThread)(DWORD a0)
    = ExitThread;

BOOL (__stdcall * Real_ExitWindowsEx)(UINT a0,
                                      DWORD a1)
    = ExitWindowsEx;

DWORD (__stdcall * Real_ExpandEnvironmentStringsA)(LPCSTR a0,
                                                   LPSTR a1,
                                                   DWORD a2)
    = ExpandEnvironmentStringsA;

DWORD (__stdcall * Real_ExpandEnvironmentStringsW)(LPCWSTR a0,
                                                   LPWSTR a1,
                                                   DWORD a2)
    = ExpandEnvironmentStringsW;

HPEN (__stdcall * Real_ExtCreatePen)(DWORD a0,
                                     DWORD a1,
                                     CONST LOGBRUSH* a2,
                                     DWORD a3,
                                     CONST DWORD* a4)
    = ExtCreatePen;

HRGN (__stdcall * Real_ExtCreateRegion)(CONST XFORM* a0,
                                        DWORD a1,
                                        CONST RGNDATA* a2)
    = ExtCreateRegion;

int (__stdcall * Real_ExtEscape)(HDC a0,
                                 int a1,
                                 int a2,
                                 LPCSTR a3,
                                 int a4,
                                 LPSTR a5)
    = ExtEscape;

BOOL (__stdcall * Real_ExtFloodFill)(HDC a0,
                                     int a1,
                                     int a2,
                                     COLORREF a3,
                                     UINT a4)
    = ExtFloodFill;

int (__stdcall * Real_ExtSelectClipRgn)(HDC a0,
                                        HRGN a1,
                                        int a2)
    = ExtSelectClipRgn;

BOOL (__stdcall * Real_ExtTextOutA)(HDC a0,
                                    int a1,
                                    int a2,
                                    UINT a3,
                                    CONST RECT* a4,
                                    LPCSTR a5,
                                    UINT a6,
                                    CONST INT* a7)
    = ExtTextOutA;

BOOL (__stdcall * Real_ExtTextOutW)(HDC a0,
                                    int a1,
                                    int a2,
                                    UINT a3,
                                    CONST RECT* a4,
                                    LPCWSTR a5,
                                    UINT a6,
                                    CONST INT* a7)
    = ExtTextOutW;

void (__stdcall * Real_FatalAppExitA)(UINT a0,
                                      LPCSTR a1)
    = FatalAppExitA;

void (__stdcall * Real_FatalAppExitW)(UINT a0,
                                      LPCWSTR a1)
    = FatalAppExitW;

void (__stdcall * Real_FatalExit)(int a0)
    = FatalExit;

BOOL (__stdcall * Real_FileTimeToDosDateTime)(CONST FILETIME* a0,
                                              LPWORD a1,
                                              LPWORD a2)
    = FileTimeToDosDateTime;

BOOL (__stdcall * Real_FileTimeToLocalFileTime)(CONST FILETIME* a0,
                                                LPFILETIME a1)
    = FileTimeToLocalFileTime;

BOOL (__stdcall * Real_FileTimeToSystemTime)(CONST FILETIME* a0,
                                             LPSYSTEMTIME a1)
    = FileTimeToSystemTime;

BOOL (__stdcall * Real_FillConsoleOutputAttribute)(HANDLE a0,
                                                   WORD a1,
                                                   DWORD a2,
                                                   COORD a3,
                                                   LPDWORD a4)
    = FillConsoleOutputAttribute;

BOOL (__stdcall * Real_FillConsoleOutputCharacterA)(HANDLE a0,
                                                    CHAR a1,
                                                    DWORD a2,
                                                    COORD a3,
                                                    LPDWORD a4)
    = FillConsoleOutputCharacterA;

BOOL (__stdcall * Real_FillConsoleOutputCharacterW)(HANDLE a0,
                                                    WCHAR a1,
                                                    DWORD a2,
                                                    COORD a3,
                                                    LPDWORD a4)
    = FillConsoleOutputCharacterW;

BOOL (__stdcall * Real_FillPath)(HDC a0)
    = FillPath;

int (__stdcall * Real_FillRect)(HDC a0,
                                CONST RECT* a1,
                                HBRUSH a2)
    = FillRect;

BOOL (__stdcall * Real_FillRgn)(HDC a0,
                                HRGN a1,
                                HBRUSH a2)
    = FillRgn;

ATOM (__stdcall * Real_FindAtomA)(LPCSTR a0)
    = FindAtomA;

ATOM (__stdcall * Real_FindAtomW)(LPCWSTR a0)
    = FindAtomW;

BOOL (__stdcall * Real_FindClose)(HANDLE a0)
    = FindClose;

BOOL (__stdcall * Real_FindCloseChangeNotification)(HANDLE a0)
    = FindCloseChangeNotification;

HANDLE (__stdcall * Real_FindFirstChangeNotificationA)(LPCSTR a0,
                                                       BOOL a1,
                                                       DWORD a2)
    = FindFirstChangeNotificationA;

HANDLE (__stdcall * Real_FindFirstChangeNotificationW)(LPCWSTR a0,
                                                       BOOL a1,
                                                       DWORD a2)
    = FindFirstChangeNotificationW;

HANDLE (__stdcall * Real_FindFirstFileA)(LPCSTR a0,
                                         LPWIN32_FIND_DATAA a1)
    = FindFirstFileA;

HANDLE (__stdcall * Real_FindFirstFileExA)(LPCSTR a0,
                                           FINDEX_INFO_LEVELS a1,
                                           LPVOID a2,
                                           FINDEX_SEARCH_OPS a3,
                                           LPVOID a4,
                                           DWORD a5)
    = FindFirstFileExA;

HANDLE (__stdcall * Real_FindFirstFileExW)(LPCWSTR a0,
                                           FINDEX_INFO_LEVELS a1,
                                           LPVOID a2,
                                           FINDEX_SEARCH_OPS a3,
                                           LPVOID a4,
                                           DWORD a5)
    = FindFirstFileExW;

HANDLE (__stdcall * Real_FindFirstFileW)(LPCWSTR a0,
                                         LPWIN32_FIND_DATAW a1)
    = FindFirstFileW;

BOOL (__stdcall * Real_FindNextChangeNotification)(HANDLE a0)
    = FindNextChangeNotification;

BOOL (__stdcall * Real_FindNextFileA)(HANDLE a0,
                                      LPWIN32_FIND_DATAA a1)
    = FindNextFileA;

BOOL (__stdcall * Real_FindNextFileW)(HANDLE a0,
                                      LPWIN32_FIND_DATAW a1)
    = FindNextFileW;

HRSRC (__stdcall * Real_FindResourceA)(HMODULE a0,
                                       LPCSTR a1,
                                       LPCSTR a2)
    = FindResourceA;

HRSRC (__stdcall * Real_FindResourceExA)(HMODULE a0,
                                         LPCSTR a1,
                                         LPCSTR a2,
                                         WORD a3)
    = FindResourceExA;

HRSRC (__stdcall * Real_FindResourceExW)(HMODULE a0,
                                         LPCWSTR a1,
                                         LPCWSTR a2,
                                         WORD a3)
    = FindResourceExW;

HRSRC (__stdcall * Real_FindResourceW)(HMODULE a0,
                                       LPCWSTR a1,
                                       LPCWSTR a2)
    = FindResourceW;

HWND (__stdcall * Real_FindWindowA)(LPCSTR a0,
                                    LPCSTR a1)
    = FindWindowA;

HWND (__stdcall * Real_FindWindowExA)(HWND a0,
                                      HWND a1,
                                      LPCSTR a2,
                                      LPCSTR a3)
    = FindWindowExA;

HWND (__stdcall * Real_FindWindowExW)(HWND a0,
                                      HWND a1,
                                      LPCWSTR a2,
                                      LPCWSTR a3)
    = FindWindowExW;

HWND (__stdcall * Real_FindWindowW)(LPCWSTR a0,
                                    LPCWSTR a1)
    = FindWindowW;

BOOL (__stdcall * Real_FixBrushOrgEx)(HDC a0,
                                      int a1,
                                      int a2,
                                      POINT* a3)
    = FixBrushOrgEx;

BOOL (__stdcall * Real_FlashWindow)(HWND a0,
                                    BOOL a1)
    = FlashWindow;

BOOL (__stdcall * Real_FlattenPath)(HDC a0)
    = FlattenPath;

BOOL (__stdcall * Real_FloodFill)(HDC a0,
                                  int a1,
                                  int a2,
                                  COLORREF a3)
    = FloodFill;

BOOL (__stdcall * Real_FlushConsoleInputBuffer)(HANDLE a0)
    = FlushConsoleInputBuffer;

BOOL (__stdcall * Real_FlushFileBuffers)(HANDLE a0)
    = FlushFileBuffers;

BOOL (__stdcall * Real_FlushViewOfFile)(LPCVOID a0,
                                        SIZE_T a1)
    = FlushViewOfFile;

HRESULT (__stdcall * Real_FmtIdToPropStgName)(CONST FMTID* a0,
                                              LPOLESTR a1)
    = FmtIdToPropStgName;

int (__stdcall * Real_FoldStringA)(DWORD a0,
                                   LPCSTR a1,
                                   int a2,
                                   LPSTR a3,
                                   int a4)
    = FoldStringA;

int (__stdcall * Real_FoldStringW)(DWORD a0,
                                   LPCWSTR a1,
                                   int a2,
                                   LPWSTR a3,
                                   int a4)
    = FoldStringW;

DWORD (__stdcall * Real_FormatMessageA)(DWORD a0,
                                        LPCVOID a1,
                                        DWORD a2,
                                        DWORD a3,
                                        LPSTR a4,
                                        DWORD a5,
                                        va_list* a6)
    = FormatMessageA;

DWORD (__stdcall * Real_FormatMessageW)(DWORD a0,
                                        LPCVOID a1,
                                        DWORD a2,
                                        DWORD a3,
                                        LPWSTR a4,
                                        DWORD a5,
                                        va_list* a6)
    = FormatMessageW;

int (__stdcall * Real_FrameRect)(HDC a0,
                                 CONST RECT* a1,
                                 HBRUSH a2)
    = FrameRect;

BOOL (__stdcall * Real_FrameRgn)(HDC a0,
                                 HRGN a1,
                                 HBRUSH a2,
                                 int a3,
                                 int a4)
    = FrameRgn;

BOOL (__stdcall * Real_FreeConsole)(void)
    = FreeConsole;

BOOL (__stdcall * Real_FreeDDElParam)(UINT a0,
                                      LPARAM a1)
    = FreeDDElParam;

BOOL (__stdcall * Real_FreeEnvironmentStringsA)(LPSTR a0)
    = FreeEnvironmentStringsA;

BOOL (__stdcall * Real_FreeEnvironmentStringsW)(LPWSTR a0)
    = FreeEnvironmentStringsW;

BOOL (__stdcall * Real_FreeLibrary)(HMODULE a0)
    = FreeLibrary;

void (__stdcall * Real_FreeLibraryAndExitThread)(HMODULE a0,
                                                 DWORD a1)
    = FreeLibraryAndExitThread;

HRESULT (__stdcall * Real_FreePropVariantArray)(ULONG a0,
                                                PROPVARIANT* a1)
    = FreePropVariantArray;

BOOL (__stdcall * Real_FreeResource)(HGLOBAL a0)
    = FreeResource;

BOOL (__stdcall * Real_GdiComment)(HDC a0,
                                   UINT a1,
                                   CONST BYTE* a2)
    = GdiComment;

BOOL (__stdcall * Real_GdiFlush)(void)
    = GdiFlush;

DWORD (__stdcall * Real_GdiGetBatchLimit)(void)
    = GdiGetBatchLimit;

DWORD (__stdcall * Real_GdiSetBatchLimit)(DWORD a0)
    = GdiSetBatchLimit;

BOOL (__stdcall * Real_GenerateConsoleCtrlEvent)(DWORD a0,
                                                 DWORD a1)
    = GenerateConsoleCtrlEvent;

UINT (__stdcall * Real_GetACP)(void)
    = GetACP;

HWND (__stdcall * Real_GetActiveWindow)(void)
    = GetActiveWindow;

int (__stdcall * Real_GetArcDirection)(HDC a0)
    = GetArcDirection;

BOOL (__stdcall * Real_GetAspectRatioFilterEx)(HDC a0,
                                               SIZE* a1)
    = GetAspectRatioFilterEx;

SHORT (__stdcall * Real_GetAsyncKeyState)(int a0)
    = GetAsyncKeyState;

UINT (__stdcall * Real_GetAtomNameA)(ATOM a0,
                                     LPSTR a1,
                                     int a2)
    = GetAtomNameA;

UINT (__stdcall * Real_GetAtomNameW)(ATOM a0,
                                     LPWSTR a1,
                                     int a2)
    = GetAtomNameW;

BOOL (__stdcall * Real_GetBinaryTypeA)(LPCSTR a0,
                                       LPDWORD a1)
    = GetBinaryTypeA;

BOOL (__stdcall * Real_GetBinaryTypeW)(LPCWSTR a0,
                                       LPDWORD a1)
    = GetBinaryTypeW;

LONG (__stdcall * Real_GetBitmapBits)(HBITMAP a0,
                                      LONG a1,
                                      LPVOID a2)
    = GetBitmapBits;

BOOL (__stdcall * Real_GetBitmapDimensionEx)(HBITMAP a0,
                                             SIZE* a1)
    = GetBitmapDimensionEx;

COLORREF (__stdcall * Real_GetBkColor)(HDC a0)
    = GetBkColor;

int (__stdcall * Real_GetBkMode)(HDC a0)
    = GetBkMode;

UINT (__stdcall * Real_GetBoundsRect)(HDC a0,
                                      LPRECT a1,
                                      UINT a2)
    = GetBoundsRect;

BOOL (__stdcall * Real_GetBrushOrgEx)(HDC a0,
                                      POINT* a1)
    = GetBrushOrgEx;

BOOL (__stdcall * Real_GetCPInfo)(UINT a0,
                                  LPCPINFO a1)
    = GetCPInfo;

HWND (__stdcall * Real_GetCapture)(void)
    = GetCapture;

UINT (__stdcall * Real_GetCaretBlinkTime)(void)
    = GetCaretBlinkTime;

BOOL (__stdcall * Real_GetCaretPos)(POINT* a0)
    = GetCaretPos;

BOOL (__stdcall * Real_GetCharABCWidthsA)(HDC a0,
                                          UINT a1,
                                          UINT a2,
                                          LPABC a3)
    = GetCharABCWidthsA;

BOOL (__stdcall * Real_GetCharABCWidthsFloatA)(HDC a0,
                                               UINT a1,
                                               UINT a2,
                                               LPABCFLOAT a3)
    = GetCharABCWidthsFloatA;

BOOL (__stdcall * Real_GetCharABCWidthsFloatW)(HDC a0,
                                               UINT a1,
                                               UINT a2,
                                               LPABCFLOAT a3)
    = GetCharABCWidthsFloatW;

BOOL (__stdcall * Real_GetCharABCWidthsW)(HDC a0,
                                          UINT a1,
                                          UINT a2,
                                          LPABC a3)
    = GetCharABCWidthsW;

BOOL (__stdcall * Real_GetCharWidth32A)(HDC a0,
                                        UINT a1,
                                        UINT a2,
                                        LPINT a3)
    = GetCharWidth32A;

BOOL (__stdcall * Real_GetCharWidth32W)(HDC a0,
                                        UINT a1,
                                        UINT a2,
                                        LPINT a3)
    = GetCharWidth32W;

BOOL (__stdcall * Real_GetCharWidthA)(HDC a0,
                                      UINT a1,
                                      UINT a2,
                                      LPINT a3)
    = GetCharWidthA;

BOOL (__stdcall * Real_GetCharWidthFloatA)(HDC a0,
                                           UINT a1,
                                           UINT a2,
                                           PFLOAT a3)
    = GetCharWidthFloatA;

BOOL (__stdcall * Real_GetCharWidthFloatW)(HDC a0,
                                           UINT a1,
                                           UINT a2,
                                           PFLOAT a3)
    = GetCharWidthFloatW;

BOOL (__stdcall * Real_GetCharWidthW)(HDC a0,
                                      UINT a1,
                                      UINT a2,
                                      LPINT a3)
    = GetCharWidthW;

DWORD (__stdcall * Real_GetCharacterPlacementA)(HDC a0,
                                                LPCSTR a1,
                                                int a2,
                                                int a3,
                                                LPGCP_RESULTSA a4,
                                                DWORD a5)
    = GetCharacterPlacementA;

DWORD (__stdcall * Real_GetCharacterPlacementW)(HDC a0,
                                                LPCWSTR a1,
                                                int a2,
                                                int a3,
                                                LPGCP_RESULTSW a4,
                                                DWORD a5)
    = GetCharacterPlacementW;

HRESULT (__stdcall * Real_GetClassFile)(LPCOLESTR a0,
                                        CLSID* a1)
    = GetClassFile;

BOOL (__stdcall * Real_GetClassInfoA)(HINSTANCE a0,
                                      LPCSTR a1,
                                      LPWNDCLASSA a2)
    = GetClassInfoA;

BOOL (__stdcall * Real_GetClassInfoExA)(HINSTANCE a0,
                                        LPCSTR a1,
                                        LPWNDCLASSEXA a2)
    = GetClassInfoExA;

BOOL (__stdcall * Real_GetClassInfoExW)(HINSTANCE a0,
                                        LPCWSTR a1,
                                        LPWNDCLASSEXW a2)
    = GetClassInfoExW;

BOOL (__stdcall * Real_GetClassInfoW)(HINSTANCE a0,
                                      LPCWSTR a1,
                                      LPWNDCLASSW a2)
    = GetClassInfoW;

DWORD (__stdcall * Real_GetClassLongA)(HWND a0,
                                       int a1)
    = GetClassLongA;

DWORD (__stdcall * Real_GetClassLongW)(HWND a0,
                                       int a1)
    = GetClassLongW;

int (__stdcall * Real_GetClassNameA)(HWND a0,
                                     LPSTR a1,
                                     int a2)
    = GetClassNameA;

int (__stdcall * Real_GetClassNameW)(HWND a0,
                                     LPWSTR a1,
                                     int a2)
    = GetClassNameW;

WORD (__stdcall * Real_GetClassWord)(HWND a0,
                                     int a1)
    = GetClassWord;

BOOL (__stdcall * Real_GetClientRect)(HWND a0,
                                      LPRECT a1)
    = GetClientRect;

int (__stdcall * Real_GetClipBox)(HDC a0,
                                  LPRECT a1)
    = GetClipBox;

BOOL (__stdcall * Real_GetClipCursor)(LPRECT a0)
    = GetClipCursor;

int (__stdcall * Real_GetClipRgn)(HDC a0,
                                  HRGN a1)
    = GetClipRgn;

HANDLE (__stdcall * Real_GetClipboardData)(UINT a0)
    = GetClipboardData;

int (__stdcall * Real_GetClipboardFormatNameA)(UINT a0,
                                               LPSTR a1,
                                               int a2)
    = GetClipboardFormatNameA;

int (__stdcall * Real_GetClipboardFormatNameW)(UINT a0,
                                               LPWSTR a1,
                                               int a2)
    = GetClipboardFormatNameW;

HWND (__stdcall * Real_GetClipboardOwner)(void)
    = GetClipboardOwner;

HWND (__stdcall * Real_GetClipboardViewer)(void)
    = GetClipboardViewer;

BOOL (__stdcall * Real_GetColorAdjustment)(HDC a0,
                                           LPCOLORADJUSTMENT a1)
    = GetColorAdjustment;

HCOLORSPACE (__stdcall * Real_GetColorSpace)(HDC a0)
    = GetColorSpace;

BOOL (__stdcall * Real_GetCommConfig)(HANDLE a0,
                                      LPCOMMCONFIG a1,
                                      LPDWORD a2)
    = GetCommConfig;

BOOL (__stdcall * Real_GetCommMask)(HANDLE a0,
                                    LPDWORD a1)
    = GetCommMask;

BOOL (__stdcall * Real_GetCommModemStatus)(HANDLE a0,
                                           LPDWORD a1)
    = GetCommModemStatus;

BOOL (__stdcall * Real_GetCommProperties)(HANDLE a0,
                                          LPCOMMPROP a1)
    = GetCommProperties;

BOOL (__stdcall * Real_GetCommState)(HANDLE a0,
                                     LPDCB a1)
    = GetCommState;

BOOL (__stdcall * Real_GetCommTimeouts)(HANDLE a0,
                                        LPCOMMTIMEOUTS a1)
    = GetCommTimeouts;

LPSTR (__stdcall * Real_GetCommandLineA)(void)
    = GetCommandLineA;

LPWSTR (__stdcall * Real_GetCommandLineW)(void)
    = GetCommandLineW;

BOOL (__stdcall * Real_GetComputerNameA)(LPSTR a0,
                                         LPDWORD a1)
    = GetComputerNameA;

BOOL (__stdcall * Real_GetComputerNameW)(LPWSTR a0,
                                         LPDWORD a1)
    = GetComputerNameW;

UINT (__stdcall * Real_GetConsoleCP)(void)
    = GetConsoleCP;

BOOL (__stdcall * Real_GetConsoleCursorInfo)(HANDLE a0,
                                             PCONSOLE_CURSOR_INFO a1)
    = GetConsoleCursorInfo;

BOOL (__stdcall * Real_GetConsoleMode)(HANDLE a0,
                                       LPDWORD a1)
    = GetConsoleMode;

UINT (__stdcall * Real_GetConsoleOutputCP)(void)
    = GetConsoleOutputCP;

BOOL (__stdcall * Real_GetConsoleScreenBufferInfo)(HANDLE a0,
                                                   PCONSOLE_SCREEN_BUFFER_INFO a1)
    = GetConsoleScreenBufferInfo;

DWORD (__stdcall * Real_GetConsoleTitleA)(LPSTR a0,
                                          DWORD a1)
    = GetConsoleTitleA;

DWORD (__stdcall * Real_GetConsoleTitleW)(LPWSTR a0,
                                          DWORD a1)
    = GetConsoleTitleW;

HRESULT (__stdcall * Real_GetConvertStg)(IStorage* a0)
    = GetConvertStg;

int (__stdcall * Real_GetCurrencyFormatA)(LCID a0,
                                          DWORD a1,
                                          LPCSTR a2,
                                          CONST CURRENCYFMTA* a3,
                                          LPSTR a4,
                                          int a5)
    = GetCurrencyFormatA;

int (__stdcall * Real_GetCurrencyFormatW)(LCID a0,
                                          DWORD a1,
                                          LPCWSTR a2,
                                          CONST CURRENCYFMTW* a3,
                                          LPWSTR a4,
                                          int a5)
    = GetCurrencyFormatW;

DWORD (__stdcall * Real_GetCurrentDirectoryA)(DWORD a0,
                                              LPSTR a1)
    = GetCurrentDirectoryA;

DWORD (__stdcall * Real_GetCurrentDirectoryW)(DWORD a0,
                                              LPWSTR a1)
    = GetCurrentDirectoryW;

HGDIOBJ (__stdcall * Real_GetCurrentObject)(HDC a0,
                                            UINT a1)
    = GetCurrentObject;

BOOL (__stdcall * Real_GetCurrentPositionEx)(HDC a0,
                                             POINT* a1)
    = GetCurrentPositionEx;

HANDLE (__stdcall * Real_GetCurrentProcess)(void)
    = GetCurrentProcess;

DWORD (__stdcall * Real_GetCurrentProcessId)(void)
    = GetCurrentProcessId;

DWORD (__stdcall * Real_GetCurrentThreadId)(void)
    = GetCurrentThreadId;

HCURSOR (__stdcall * Real_GetCursor)(void)
    = GetCursor;

BOOL (__stdcall * Real_GetCursorPos)(POINT* a0)
    = GetCursorPos;

HDC (__stdcall * Real_GetDC)(HWND a0)
    = GetDC;

HDC (__stdcall * Real_GetDCEx)(HWND a0,
                               HRGN a1,
                               DWORD a2)
    = GetDCEx;

BOOL (__stdcall * Real_GetDCOrgEx)(HDC a0,
                                   POINT* a1)
    = GetDCOrgEx;

UINT (__stdcall * Real_GetDIBColorTable)(HDC a0,
                                         UINT a1,
                                         UINT a2,
                                         RGBQUAD* a3)
    = GetDIBColorTable;

int (__stdcall * Real_GetDIBits)(HDC a0,
                                 HBITMAP a1,
                                 UINT a2,
                                 UINT a3,
                                 LPVOID a4,
                                 LPBITMAPINFO a5,
                                 UINT a6)
    = GetDIBits;

int (__stdcall * Real_GetDateFormatA)(LCID a0,
                                      DWORD a1,
                                      CONST SYSTEMTIME* a2,
                                      LPCSTR a3,
                                      LPSTR a4,
                                      int a5)
    = GetDateFormatA;

int (__stdcall * Real_GetDateFormatW)(LCID a0,
                                      DWORD a1,
                                      CONST SYSTEMTIME* a2,
                                      LPCWSTR a3,
                                      LPWSTR a4,
                                      int a5)
    = GetDateFormatW;

BOOL (__stdcall * Real_GetDefaultCommConfigA)(LPCSTR a0,
                                              LPCOMMCONFIG a1,
                                              LPDWORD a2)
    = GetDefaultCommConfigA;

BOOL (__stdcall * Real_GetDefaultCommConfigW)(LPCWSTR a0,
                                              LPCOMMCONFIG a1,
                                              LPDWORD a2)
    = GetDefaultCommConfigW;

HWND (__stdcall * Real_GetDesktopWindow)(void)
    = GetDesktopWindow;

int (__stdcall * Real_GetDeviceCaps)(HDC a0,
                                     int a1)
    = GetDeviceCaps;

BOOL (__stdcall * Real_GetDeviceGammaRamp)(HDC a0,
                                           LPVOID a1)
    = GetDeviceGammaRamp;

long (__stdcall * Real_GetDialogBaseUnits)(void)
    = GetDialogBaseUnits;

BOOL (__stdcall * Real_GetDiskFreeSpaceA)(LPCSTR a0,
                                          LPDWORD a1,
                                          LPDWORD a2,
                                          LPDWORD a3,
                                          LPDWORD a4)
    = GetDiskFreeSpaceA;

BOOL (__stdcall * Real_GetDiskFreeSpaceExA)(LPCSTR a0,
                                            union _ULARGE_INTEGER* a1,
                                            union _ULARGE_INTEGER* a2,
                                            union _ULARGE_INTEGER* a3)
    = GetDiskFreeSpaceExA;

BOOL (__stdcall * Real_GetDiskFreeSpaceExW)(LPCWSTR a0,
                                            union _ULARGE_INTEGER* a1,
                                            union _ULARGE_INTEGER* a2,
                                            union _ULARGE_INTEGER* a3)
    = GetDiskFreeSpaceExW;

BOOL (__stdcall * Real_GetDiskFreeSpaceW)(LPCWSTR a0,
                                          LPDWORD a1,
                                          LPDWORD a2,
                                          LPDWORD a3,
                                          LPDWORD a4)
    = GetDiskFreeSpaceW;

int (__stdcall * Real_GetDlgCtrlID)(HWND a0)
    = GetDlgCtrlID;

HWND (__stdcall * Real_GetDlgItem)(HWND a0,
                                   int a1)
    = GetDlgItem;

UINT (__stdcall * Real_GetDlgItemInt)(HWND a0,
                                      int a1,
                                      BOOL* a2,
                                      BOOL a3)
    = GetDlgItemInt;

UINT (__stdcall * Real_GetDlgItemTextA)(HWND a0,
                                        int a1,
                                        LPSTR a2,
                                        int a3)
    = GetDlgItemTextA;

UINT (__stdcall * Real_GetDlgItemTextW)(HWND a0,
                                        int a1,
                                        LPWSTR a2,
                                        int a3)
    = GetDlgItemTextW;

UINT (__stdcall * Real_GetDoubleClickTime)(void)
    = GetDoubleClickTime;

UINT (__stdcall * Real_GetDriveTypeA)(LPCSTR a0)
    = GetDriveTypeA;

UINT (__stdcall * Real_GetDriveTypeW)(LPCWSTR a0)
    = GetDriveTypeW;

HENHMETAFILE (__stdcall * Real_GetEnhMetaFileA)(LPCSTR a0)
    = GetEnhMetaFileA;

UINT (__stdcall * Real_GetEnhMetaFileBits)(HENHMETAFILE a0,
                                           UINT a1,
                                           LPBYTE a2)
    = GetEnhMetaFileBits;

UINT (__stdcall * Real_GetEnhMetaFileDescriptionA)(HENHMETAFILE a0,
                                                   UINT a1,
                                                   LPSTR a2)
    = GetEnhMetaFileDescriptionA;

UINT (__stdcall * Real_GetEnhMetaFileDescriptionW)(HENHMETAFILE a0,
                                                   UINT a1,
                                                   LPWSTR a2)
    = GetEnhMetaFileDescriptionW;

UINT (__stdcall * Real_GetEnhMetaFileHeader)(HENHMETAFILE a0,
                                             UINT a1,
                                             ENHMETAHEADER* a2)
    = GetEnhMetaFileHeader;

UINT (__stdcall * Real_GetEnhMetaFilePaletteEntries)(HENHMETAFILE a0,
                                                     UINT a1,
                                                     PALETTEENTRY* a2)
    = GetEnhMetaFilePaletteEntries;

UINT (__stdcall * Real_GetEnhMetaFilePixelFormat)(HENHMETAFILE a0,
                                                  UINT a1,
                                                  PIXELFORMATDESCRIPTOR* a2)
    = GetEnhMetaFilePixelFormat;

HENHMETAFILE (__stdcall * Real_GetEnhMetaFileW)(LPCWSTR a0)
    = GetEnhMetaFileW;

#undef GetEnvironmentStrings

LPSTR (__stdcall * Real_GetEnvironmentStrings)(void)
    = GetEnvironmentStrings;

LPWSTR (__stdcall * Real_GetEnvironmentStringsW)(void)
    = GetEnvironmentStringsW;

DWORD (__stdcall * Real_GetEnvironmentVariableA)(LPCSTR a0,
                                                 LPSTR a1,
                                                 DWORD a2)
    = GetEnvironmentVariableA;

DWORD (__stdcall * Real_GetEnvironmentVariableW)(LPCWSTR a0,
                                                 LPWSTR a1,
                                                 DWORD a2)
    = GetEnvironmentVariableW;

BOOL (__stdcall * Real_GetExitCodeProcess)(HANDLE a0,
                                           LPDWORD a1)
    = GetExitCodeProcess;

BOOL (__stdcall * Real_GetExitCodeThread)(HANDLE a0,
                                          LPDWORD a1)
    = GetExitCodeThread;

DWORD (__stdcall * Real_GetFileAttributesA)(LPCSTR a0)
    = GetFileAttributesA;

BOOL (__stdcall * Real_GetFileAttributesExA)(LPCSTR a0,
                                             enum _GET_FILEEX_INFO_LEVELS a1,
                                             LPVOID a2)
    = GetFileAttributesExA;

BOOL (__stdcall * Real_GetFileAttributesExW)(LPCWSTR a0,
                                             enum _GET_FILEEX_INFO_LEVELS a1,
                                             LPVOID a2)
    = GetFileAttributesExW;

DWORD (__stdcall * Real_GetFileAttributesW)(LPCWSTR a0)
    = GetFileAttributesW;

BOOL (__stdcall * Real_GetFileInformationByHandle)(HANDLE a0,
                                                   LPBY_HANDLE_FILE_INFORMATION a1)
    = GetFileInformationByHandle;

DWORD (__stdcall * Real_GetFileSize)(HANDLE a0,
                                     LPDWORD a1)
    = GetFileSize;

BOOL (__stdcall * Real_GetFileTime)(HANDLE a0,
                                    LPFILETIME a1,
                                    LPFILETIME a2,
                                    LPFILETIME a3)
    = GetFileTime;

DWORD (__stdcall * Real_GetFileType)(HANDLE a0)
    = GetFileType;

HWND (__stdcall * Real_GetFocus)(void)
    = GetFocus;

DWORD (__stdcall * Real_GetFontData)(HDC a0,
                                     DWORD a1,
                                     DWORD a2,
                                     LPVOID a3,
                                     DWORD a4)
    = GetFontData;

DWORD (__stdcall * Real_GetFontLanguageInfo)(HDC a0)
    = GetFontLanguageInfo;

HWND (__stdcall * Real_GetForegroundWindow)(void)
    = GetForegroundWindow;

DWORD (__stdcall * Real_GetFullPathNameA)(LPCSTR a0,
                                          DWORD a1,
                                          LPSTR a2,
                                          LPSTR* a3)
    = GetFullPathNameA;

DWORD (__stdcall * Real_GetFullPathNameW)(LPCWSTR a0,
                                          DWORD a1,
                                          LPWSTR a2,
                                          LPWSTR* a3)
    = GetFullPathNameW;

DWORD (__stdcall * Real_GetGlyphOutlineA)(HDC a0,
                                          UINT a1,
                                          UINT a2,
                                          LPGLYPHMETRICS a3,
                                          DWORD a4,
                                          LPVOID a5,
                                          CONST MAT2* a6)
    = GetGlyphOutlineA;

DWORD (__stdcall * Real_GetGlyphOutlineW)(HDC a0,
                                          UINT a1,
                                          UINT a2,
                                          LPGLYPHMETRICS a3,
                                          DWORD a4,
                                          LPVOID a5,
                                          CONST MAT2* a6)
    = GetGlyphOutlineW;

int (__stdcall * Real_GetGraphicsMode)(HDC a0)
    = GetGraphicsMode;

HRESULT (__stdcall * Real_GetHGlobalFromILockBytes)(ILockBytes* a0,
                                                    HGLOBAL* a1)
    = GetHGlobalFromILockBytes;

HRESULT (__stdcall * Real_GetHGlobalFromStream)(LPSTREAM a0,
                                                HGLOBAL* a1)
    = GetHGlobalFromStream;

BOOL (__stdcall * Real_GetHandleInformation)(HANDLE a0,
                                             LPDWORD a1)
    = GetHandleInformation;

BOOL (__stdcall * Real_GetICMProfileA)(HDC a0,
                                       LPDWORD a1,
                                       LPSTR a2)
    = GetICMProfileA;

BOOL (__stdcall * Real_GetICMProfileW)(HDC a0,
                                       LPDWORD a1,
                                       LPWSTR a2)
    = GetICMProfileW;

BOOL (__stdcall * Real_GetIconInfo)(HICON a0,
                                    PICONINFO a1)
    = GetIconInfo;

BOOL (__stdcall * Real_GetInputState)(void)
    = GetInputState;

UINT (__stdcall * Real_GetKBCodePage)(void)
    = GetKBCodePage;

DWORD (__stdcall * Real_GetKerningPairsA)(HDC a0,
                                          DWORD a1,
                                          KERNINGPAIR* a2)
    = GetKerningPairsA;

DWORD (__stdcall * Real_GetKerningPairsW)(HDC a0,
                                          DWORD a1,
                                          KERNINGPAIR* a2)
    = GetKerningPairsW;

int (__stdcall * Real_GetKeyNameTextA)(LONG a0,
                                       LPSTR a1,
                                       int a2)
    = GetKeyNameTextA;

int (__stdcall * Real_GetKeyNameTextW)(LONG a0,
                                       LPWSTR a1,
                                       int a2)
    = GetKeyNameTextW;

SHORT (__stdcall * Real_GetKeyState)(int a0)
    = GetKeyState;

HKL (__stdcall * Real_GetKeyboardLayout)(DWORD a0)
    = GetKeyboardLayout;

int (__stdcall * Real_GetKeyboardLayoutList)(int a0,
                                             HKL* a1)
    = GetKeyboardLayoutList;

BOOL (__stdcall * Real_GetKeyboardLayoutNameA)(LPSTR a0)
    = GetKeyboardLayoutNameA;

BOOL (__stdcall * Real_GetKeyboardLayoutNameW)(LPWSTR a0)
    = GetKeyboardLayoutNameW;

BOOL (__stdcall * Real_GetKeyboardState)(PBYTE a0)
    = GetKeyboardState;

int (__stdcall * Real_GetKeyboardType)(int a0)
    = GetKeyboardType;

HWND (__stdcall * Real_GetLastActivePopup)(HWND a0)
    = GetLastActivePopup;

void (__stdcall * Real_GetLocalTime)(LPSYSTEMTIME a0)
    = GetLocalTime;

int (__stdcall * Real_GetLocaleInfoA)(LCID a0,
                                      LCTYPE a1,
                                      LPSTR a2,
                                      int a3)
    = GetLocaleInfoA;

int (__stdcall * Real_GetLocaleInfoW)(LCID a0,
                                      LCTYPE a1,
                                      LPWSTR a2,
                                      int a3)
    = GetLocaleInfoW;

BOOL (__stdcall * Real_GetLogColorSpaceA)(HCOLORSPACE a0,
                                          LOGCOLORSPACEA* a1,
                                          DWORD a2)
    = GetLogColorSpaceA;

BOOL (__stdcall * Real_GetLogColorSpaceW)(HCOLORSPACE a0,
                                          LOGCOLORSPACEW* a1,
                                          DWORD a2)
    = GetLogColorSpaceW;

DWORD (__stdcall * Real_GetLogicalDriveStringsA)(DWORD a0,
                                                 LPSTR a1)
    = GetLogicalDriveStringsA;

DWORD (__stdcall * Real_GetLogicalDriveStringsW)(DWORD a0,
                                                 LPWSTR a1)
    = GetLogicalDriveStringsW;

DWORD (__stdcall * Real_GetLogicalDrives)(void)
    = GetLogicalDrives;

BOOL (__stdcall * Real_GetMailslotInfo)(HANDLE a0,
                                        LPDWORD a1,
                                        LPDWORD a2,
                                        LPDWORD a3,
                                        LPDWORD a4)
    = GetMailslotInfo;

int (__stdcall * Real_GetMapMode)(HDC a0)
    = GetMapMode;

HMENU (__stdcall * Real_GetMenu)(HWND a0)
    = GetMenu;

LONG (__stdcall * Real_GetMenuCheckMarkDimensions)(void)
    = GetMenuCheckMarkDimensions;

DWORD (__stdcall * Real_GetMenuContextHelpId)(HMENU a0)
    = GetMenuContextHelpId;

UINT (__stdcall * Real_GetMenuDefaultItem)(HMENU a0,
                                           UINT a1,
                                           UINT a2)
    = GetMenuDefaultItem;

int (__stdcall * Real_GetMenuItemCount)(HMENU a0)
    = GetMenuItemCount;

UINT (__stdcall * Real_GetMenuItemID)(HMENU a0,
                                      int a1)
    = GetMenuItemID;

BOOL (__stdcall * Real_GetMenuItemInfoA)(HMENU a0,
                                         UINT a1,
                                         BOOL a2,
                                         LPMENUITEMINFOA a3)
    = GetMenuItemInfoA;

BOOL (__stdcall * Real_GetMenuItemInfoW)(HMENU a0,
                                         UINT a1,
                                         BOOL a2,
                                         LPMENUITEMINFOW a3)
    = GetMenuItemInfoW;

BOOL (__stdcall * Real_GetMenuItemRect)(HWND a0,
                                        HMENU a1,
                                        UINT a2,
                                        LPRECT a3)
    = GetMenuItemRect;

UINT (__stdcall * Real_GetMenuState)(HMENU a0,
                                     UINT a1,
                                     UINT a2)
    = GetMenuState;

int (__stdcall * Real_GetMenuStringA)(HMENU a0,
                                      UINT a1,
                                      LPSTR a2,
                                      int a3,
                                      UINT a4)
    = GetMenuStringA;

int (__stdcall * Real_GetMenuStringW)(HMENU a0,
                                      UINT a1,
                                      LPWSTR a2,
                                      int a3,
                                      UINT a4)
    = GetMenuStringW;

BOOL (__stdcall * Real_GetMessageA)(LPMSG a0,
                                    HWND a1,
                                    UINT a2,
                                    UINT a3)
    = GetMessageA;

LPARAM (__stdcall * Real_GetMessageExtraInfo)(void)
    = GetMessageExtraInfo;

DWORD (__stdcall * Real_GetMessagePos)(void)
    = GetMessagePos;

LONG (__stdcall * Real_GetMessageTime)(void)
    = GetMessageTime;

BOOL (__stdcall * Real_GetMessageW)(LPMSG a0,
                                    HWND a1,
                                    UINT a2,
                                    UINT a3)
    = GetMessageW;

HMETAFILE (__stdcall * Real_GetMetaFileA)(LPCSTR a0)
    = GetMetaFileA;

UINT (__stdcall * Real_GetMetaFileBitsEx)(HMETAFILE a0,
                                          UINT a1,
                                          LPVOID a2)
    = GetMetaFileBitsEx;

HMETAFILE (__stdcall * Real_GetMetaFileW)(LPCWSTR a0)
    = GetMetaFileW;

int (__stdcall * Real_GetMetaRgn)(HDC a0,
                                  HRGN a1)
    = GetMetaRgn;

BOOL (__stdcall * Real_GetMiterLimit)(HDC a0,
                                      PFLOAT a1)
    = GetMiterLimit;

DWORD (__stdcall * Real_GetModuleFileNameA)(HMODULE a0,
                                            LPSTR a1,
                                            DWORD a2)
    = GetModuleFileNameA;

DWORD (__stdcall * Real_GetModuleFileNameW)(HMODULE a0,
                                            LPWSTR a1,
                                            DWORD a2)
    = GetModuleFileNameW;

HMODULE (__stdcall * Real_GetModuleHandleA)(LPCSTR a0)
    = GetModuleHandleA;

HMODULE (__stdcall * Real_GetModuleHandleW)(LPCWSTR a0)
    = GetModuleHandleW;

BOOL (__stdcall * Real_GetNamedPipeHandleStateA)(HANDLE a0,
                                                 LPDWORD a1,
                                                 LPDWORD a2,
                                                 LPDWORD a3,
                                                 LPDWORD a4,
                                                 LPSTR a5,
                                                 DWORD a6)
    = GetNamedPipeHandleStateA;

BOOL (__stdcall * Real_GetNamedPipeHandleStateW)(HANDLE a0,
                                                 LPDWORD a1,
                                                 LPDWORD a2,
                                                 LPDWORD a3,
                                                 LPDWORD a4,
                                                 LPWSTR a5,
                                                 DWORD a6)
    = GetNamedPipeHandleStateW;

BOOL (__stdcall * Real_GetNamedPipeInfo)(HANDLE a0,
                                         LPDWORD a1,
                                         LPDWORD a2,
                                         LPDWORD a3,
                                         LPDWORD a4)
    = GetNamedPipeInfo;

COLORREF (__stdcall * Real_GetNearestColor)(HDC a0,
                                            COLORREF a1)
    = GetNearestColor;

UINT (__stdcall * Real_GetNearestPaletteIndex)(HPALETTE a0,
                                               COLORREF a1)
    = GetNearestPaletteIndex;

HWND (__stdcall * Real_GetNextDlgGroupItem)(HWND a0,
                                            HWND a1,
                                            BOOL a2)
    = GetNextDlgGroupItem;

HWND (__stdcall * Real_GetNextDlgTabItem)(HWND a0,
                                          HWND a1,
                                          BOOL a2)
    = GetNextDlgTabItem;

int (__stdcall * Real_GetNumberFormatA)(LCID a0,
                                        DWORD a1,
                                        LPCSTR a2,
                                        CONST NUMBERFMTA* a3,
                                        LPSTR a4,
                                        int a5)
    = GetNumberFormatA;

int (__stdcall * Real_GetNumberFormatW)(LCID a0,
                                        DWORD a1,
                                        LPCWSTR a2,
                                        CONST NUMBERFMTW* a3,
                                        LPWSTR a4,
                                        int a5)
    = GetNumberFormatW;

BOOL (__stdcall * Real_GetNumberOfConsoleInputEvents)(HANDLE a0,
                                                      LPDWORD a1)
    = GetNumberOfConsoleInputEvents;

BOOL (__stdcall * Real_GetNumberOfConsoleMouseButtons)(LPDWORD a0)
    = GetNumberOfConsoleMouseButtons;

UINT (__stdcall * Real_GetOEMCP)(void)
    = GetOEMCP;

int (__stdcall * Real_GetObjectA)(HGDIOBJ a0,
                                  int a1,
                                  LPVOID a2)
    = GetObjectA;

DWORD (__stdcall * Real_GetObjectType)(HGDIOBJ a0)
    = GetObjectType;

int (__stdcall * Real_GetObjectW)(HGDIOBJ a0,
                                  int a1,
                                  LPVOID a2)
    = GetObjectW;

HWND (__stdcall * Real_GetOpenClipboardWindow)(void)
    = GetOpenClipboardWindow;

UINT (__stdcall * Real_GetOutlineTextMetricsA)(HDC a0,
                                               UINT a1,
                                               LPOUTLINETEXTMETRICA a2)
    = GetOutlineTextMetricsA;

UINT (__stdcall * Real_GetOutlineTextMetricsW)(HDC a0,
                                               UINT a1,
                                               LPOUTLINETEXTMETRICW a2)
    = GetOutlineTextMetricsW;

BOOL (__stdcall * Real_GetOverlappedResult)(HANDLE a0,
                                            LPOVERLAPPED a1,
                                            LPDWORD a2,
                                            BOOL a3)
    = GetOverlappedResult;

UINT (__stdcall * Real_GetPaletteEntries)(HPALETTE a0,
                                          UINT a1,
                                          UINT a2,
                                          PALETTEENTRY* a3)
    = GetPaletteEntries;

HWND (__stdcall * Real_GetParent)(HWND a0)
    = GetParent;

int (__stdcall * Real_GetPath)(HDC a0,
                               POINT* a1,
                               LPBYTE a2,
                               int a3)
    = GetPath;

COLORREF (__stdcall * Real_GetPixel)(HDC a0,
                                     int a1,
                                     int a2)
    = GetPixel;

int (__stdcall * Real_GetPixelFormat)(HDC a0)
    = GetPixelFormat;

int (__stdcall * Real_GetPolyFillMode)(HDC a0)
    = GetPolyFillMode;

DWORD (__stdcall * Real_GetPriorityClass)(HANDLE a0)
    = GetPriorityClass;

int (__stdcall * Real_GetPriorityClipboardFormat)(UINT* a0,
                                                  int a1)
    = GetPriorityClipboardFormat;

UINT (__stdcall * Real_GetPrivateProfileIntA)(LPCSTR a0,
                                              LPCSTR a1,
                                              INT a2,
                                              LPCSTR a3)
    = GetPrivateProfileIntA;

UINT (__stdcall * Real_GetPrivateProfileIntW)(LPCWSTR a0,
                                              LPCWSTR a1,
                                              INT a2,
                                              LPCWSTR a3)
    = GetPrivateProfileIntW;

DWORD (__stdcall * Real_GetPrivateProfileSectionA)(LPCSTR a0,
                                                   LPSTR a1,
                                                   DWORD a2,
                                                   LPCSTR a3)
    = GetPrivateProfileSectionA;

DWORD (__stdcall * Real_GetPrivateProfileSectionNamesA)(LPSTR a0,
                                                        DWORD a1,
                                                        LPCSTR a2)
    = GetPrivateProfileSectionNamesA;

DWORD (__stdcall * Real_GetPrivateProfileSectionNamesW)(LPWSTR a0,
                                                        DWORD a1,
                                                        LPCWSTR a2)
    = GetPrivateProfileSectionNamesW;

DWORD (__stdcall * Real_GetPrivateProfileSectionW)(LPCWSTR a0,
                                                   LPWSTR a1,
                                                   DWORD a2,
                                                   LPCWSTR a3)
    = GetPrivateProfileSectionW;

DWORD (__stdcall * Real_GetPrivateProfileStringA)(LPCSTR a0,
                                                  LPCSTR a1,
                                                  LPCSTR a2,
                                                  LPSTR a3,
                                                  DWORD a4,
                                                  LPCSTR a5)
    = GetPrivateProfileStringA;

DWORD (__stdcall * Real_GetPrivateProfileStringW)(LPCWSTR a0,
                                                  LPCWSTR a1,
                                                  LPCWSTR a2,
                                                  LPWSTR a3,
                                                  DWORD a4,
                                                  LPCWSTR a5)
    = GetPrivateProfileStringW;

BOOL (__stdcall * Real_GetPrivateProfileStructA)(LPCSTR a0,
                                                 LPCSTR a1,
                                                 LPVOID a2,
                                                 UINT a3,
                                                 LPCSTR a4)
    = GetPrivateProfileStructA;

BOOL (__stdcall * Real_GetPrivateProfileStructW)(LPCWSTR a0,
                                                 LPCWSTR a1,
                                                 LPVOID a2,
                                                 UINT a3,
                                                 LPCWSTR a4)
    = GetPrivateProfileStructW;

FARPROC (__stdcall * Real_GetProcAddress)(HMODULE a0,
                                          LPCSTR a1)
    = GetProcAddress;

BOOL (__stdcall * Real_GetProcessAffinityMask)(HANDLE a0,
                                               PDWORD_PTR a1,
                                               PDWORD_PTR a2)
    = GetProcessAffinityMask;

DWORD (__stdcall * Real_GetProcessHeaps)(DWORD a0,
                                         PHANDLE a1)
    = GetProcessHeaps;

BOOL (__stdcall * Real_GetProcessShutdownParameters)(LPDWORD a0,
                                                     LPDWORD a1)
    = GetProcessShutdownParameters;

BOOL (__stdcall * Real_GetProcessTimes)(HANDLE a0,
                                        LPFILETIME a1,
                                        LPFILETIME a2,
                                        LPFILETIME a3,
                                        LPFILETIME a4)
    = GetProcessTimes;

DWORD (__stdcall * Real_GetProcessVersion)(DWORD a0)
    = GetProcessVersion;

HWINSTA (__stdcall * Real_GetProcessWindowStation)(void)
    = GetProcessWindowStation;

BOOL (__stdcall * Real_GetProcessWorkingSetSize)(HANDLE a0,
                                                 PSIZE_T a1,
                                                 PSIZE_T a2)
    = GetProcessWorkingSetSize;

UINT (__stdcall * Real_GetProfileIntA)(LPCSTR a0,
                                       LPCSTR a1,
                                       INT a2)
    = GetProfileIntA;

UINT (__stdcall * Real_GetProfileIntW)(LPCWSTR a0,
                                       LPCWSTR a1,
                                       INT a2)
    = GetProfileIntW;

DWORD (__stdcall * Real_GetProfileSectionA)(LPCSTR a0,
                                            LPSTR a1,
                                            DWORD a2)
    = GetProfileSectionA;

DWORD (__stdcall * Real_GetProfileSectionW)(LPCWSTR a0,
                                            LPWSTR a1,
                                            DWORD a2)
    = GetProfileSectionW;

DWORD (__stdcall * Real_GetProfileStringA)(LPCSTR a0,
                                           LPCSTR a1,
                                           LPCSTR a2,
                                           LPSTR a3,
                                           DWORD a4)
    = GetProfileStringA;

DWORD (__stdcall * Real_GetProfileStringW)(LPCWSTR a0,
                                           LPCWSTR a1,
                                           LPCWSTR a2,
                                           LPWSTR a3,
                                           DWORD a4)
    = GetProfileStringW;

HANDLE (__stdcall * Real_GetPropA)(HWND a0,
                                   LPCSTR a1)
    = GetPropA;

HANDLE (__stdcall * Real_GetPropW)(HWND a0,
                                   LPCWSTR a1)
    = GetPropW;

DWORD (__stdcall * Real_GetQueueStatus)(UINT a0)
    = GetQueueStatus;

BOOL (__stdcall * Real_GetQueuedCompletionStatus)(HANDLE a0,
                                                  LPDWORD a1,
                                                  PULONG_PTR a2,
                                                  LPOVERLAPPED* a3,
                                                  DWORD a4)
    = GetQueuedCompletionStatus;

int (__stdcall * Real_GetROP2)(HDC a0)
    = GetROP2;

BOOL (__stdcall * Real_GetRasterizerCaps)(LPRASTERIZER_STATUS a0,
                                          UINT a1)
    = GetRasterizerCaps;

DWORD (__stdcall * Real_GetRegionData)(HRGN a0,
                                       DWORD a1,
                                       LPRGNDATA a2)
    = GetRegionData;

int (__stdcall * Real_GetRgnBox)(HRGN a0,
                                 LPRECT a1)
    = GetRgnBox;

HRESULT (__stdcall * Real_GetRunningObjectTable)(DWORD a0,
                                                 LPRUNNINGOBJECTTABLE* a1)
    = GetRunningObjectTable;

BOOL (__stdcall * Real_GetScrollInfo)(HWND a0,
                                      int a1,
                                      LPSCROLLINFO a2)
    = GetScrollInfo;

int (__stdcall * Real_GetScrollPos)(HWND a0,
                                    int a1)
    = GetScrollPos;

BOOL (__stdcall * Real_GetScrollRange)(HWND a0,
                                       int a1,
                                       LPINT a2,
                                       LPINT a3)
    = GetScrollRange;

DWORD (__stdcall * Real_GetShortPathNameA)(LPCSTR a0,
                                           LPSTR a1,
                                           DWORD a2)
    = GetShortPathNameA;

DWORD (__stdcall * Real_GetShortPathNameW)(LPCWSTR a0,
                                           LPWSTR a1,
                                           DWORD a2)
    = GetShortPathNameW;

void (__stdcall * Real_GetStartupInfoA)(LPSTARTUPINFOA a0)
    = GetStartupInfoA;

void (__stdcall * Real_GetStartupInfoW)(LPSTARTUPINFOW a0)
    = GetStartupInfoW;

HANDLE (__stdcall * Real_GetStdHandle)(DWORD a0)
    = GetStdHandle;

HGDIOBJ (__stdcall * Real_GetStockObject)(int a0)
    = GetStockObject;

int (__stdcall * Real_GetStretchBltMode)(HDC a0)
    = GetStretchBltMode;

HMENU (__stdcall * Real_GetSubMenu)(HMENU a0,
                                    int a1)
    = GetSubMenu;

DWORD (__stdcall * Real_GetSysColor)(int a0)
    = GetSysColor;

HBRUSH (__stdcall * Real_GetSysColorBrush)(int a0)
    = GetSysColorBrush;

LCID (__stdcall * Real_GetSystemDefaultLCID)(void)
    = GetSystemDefaultLCID;

LANGID (__stdcall * Real_GetSystemDefaultLangID)(void)
    = GetSystemDefaultLangID;

UINT (__stdcall * Real_GetSystemDirectoryA)(LPSTR a0,
                                            UINT a1)
    = GetSystemDirectoryA;

UINT (__stdcall * Real_GetSystemDirectoryW)(LPWSTR a0,
                                            UINT a1)
    = GetSystemDirectoryW;

void (__stdcall * Real_GetSystemInfo)(LPSYSTEM_INFO a0)
    = GetSystemInfo;

HMENU (__stdcall * Real_GetSystemMenu)(HWND a0,
                                       BOOL a1)
    = GetSystemMenu;

int (__stdcall * Real_GetSystemMetrics)(int a0)
    = GetSystemMetrics;

UINT (__stdcall * Real_GetSystemPaletteEntries)(HDC a0,
                                                UINT a1,
                                                UINT a2,
                                                PALETTEENTRY* a3)
    = GetSystemPaletteEntries;

UINT (__stdcall * Real_GetSystemPaletteUse)(HDC a0)
    = GetSystemPaletteUse;

BOOL (__stdcall * Real_GetSystemPowerStatus)(LPSYSTEM_POWER_STATUS a0)
    = GetSystemPowerStatus;

void (__stdcall * Real_GetSystemTime)(LPSYSTEMTIME a0)
    = GetSystemTime;

BOOL (__stdcall * Real_GetSystemTimeAdjustment)(PDWORD a0,
                                                PDWORD a1,
                                                PBOOL a2)
    = GetSystemTimeAdjustment;

void (__stdcall * Real_GetSystemTimeAsFileTime)(LPFILETIME a0)
    = GetSystemTimeAsFileTime;

#if _MSC_VER < 1300
DWORD (__stdcall * Real_GetTabbedTextExtentA)(HDC a0,
                                              LPCSTR a1,
                                              int a2,
                                              int a3,
                                              INT* a4)
    = GetTabbedTextExtentA;
#else
DWORD (__stdcall * Real_GetTabbedTextExtentA)(HDC a0,
                                              LPCSTR a1,
                                              int a2,
                                              int a3,
                                              CONST INT* a4)
    = GetTabbedTextExtentA;
#endif

#if _MSC_VER < 1300
DWORD (__stdcall * Real_GetTabbedTextExtentW)(HDC a0,
                                              LPCWSTR a1,
                                              int a2,
                                              int a3,
                                              INT* a4)
    = GetTabbedTextExtentW;
#else
DWORD (__stdcall * Real_GetTabbedTextExtentW)(HDC a0,
                                              LPCWSTR a1,
                                              int a2,
                                              int a3,
                                              CONST INT* a4)
    = GetTabbedTextExtentW;
#endif

DWORD (__stdcall * Real_GetTapeParameters)(HANDLE a0,
                                           DWORD a1,
                                           LPDWORD a2,
                                           LPVOID a3)
    = GetTapeParameters;

DWORD (__stdcall * Real_GetTapePosition)(HANDLE a0,
                                         DWORD a1,
                                         LPDWORD a2,
                                         LPDWORD a3,
                                         LPDWORD a4)
    = GetTapePosition;

DWORD (__stdcall * Real_GetTapeStatus)(HANDLE a0)
    = GetTapeStatus;

UINT (__stdcall * Real_GetTempFileNameA)(LPCSTR a0,
                                         LPCSTR a1,
                                         UINT a2,
                                         LPSTR a3)
    = GetTempFileNameA;

UINT (__stdcall * Real_GetTempFileNameW)(LPCWSTR a0,
                                         LPCWSTR a1,
                                         UINT a2,
                                         LPWSTR a3)
    = GetTempFileNameW;

DWORD (__stdcall * Real_GetTempPathA)(DWORD a0,
                                      LPSTR a1)
    = GetTempPathA;

DWORD (__stdcall * Real_GetTempPathW)(DWORD a0,
                                      LPWSTR a1)
    = GetTempPathW;

UINT (__stdcall * Real_GetTextAlign)(HDC a0)
    = GetTextAlign;

int (__stdcall * Real_GetTextCharacterExtra)(HDC a0)
    = GetTextCharacterExtra;

int (__stdcall * Real_GetTextCharset)(HDC a0)
    = GetTextCharset;

int (__stdcall * Real_GetTextCharsetInfo)(HDC a0,
                                          LPFONTSIGNATURE a1,
                                          DWORD a2)
    = GetTextCharsetInfo;

COLORREF (__stdcall * Real_GetTextColor)(HDC a0)
    = GetTextColor;

BOOL (__stdcall * Real_GetTextExtentExPointA)(HDC a0,
                                              LPCSTR a1,
                                              int a2,
                                              int a3,
                                              LPINT a4,
                                              LPINT a5,
                                              SIZE* a6)
    = GetTextExtentExPointA;

BOOL (__stdcall * Real_GetTextExtentExPointW)(HDC a0,
                                              LPCWSTR a1,
                                              int a2,
                                              int a3,
                                              LPINT a4,
                                              LPINT a5,
                                              SIZE* a6)
    = GetTextExtentExPointW;

BOOL (__stdcall * Real_GetTextExtentPoint32A)(HDC a0,
                                              LPCSTR a1,
                                              int a2,
                                              SIZE* a3)
    = GetTextExtentPoint32A;

BOOL (__stdcall * Real_GetTextExtentPoint32W)(HDC a0,
                                              LPCWSTR a1,
                                              int a2,
                                              SIZE* a3)
    = GetTextExtentPoint32W;

BOOL (__stdcall * Real_GetTextExtentPointA)(HDC a0,
                                            LPCSTR a1,
                                            int a2,
                                            SIZE* a3)
    = GetTextExtentPointA;

BOOL (__stdcall * Real_GetTextExtentPointW)(HDC a0,
                                            LPCWSTR a1,
                                            int a2,
                                            SIZE* a3)
    = GetTextExtentPointW;

int (__stdcall * Real_GetTextFaceA)(HDC a0,
                                    int a1,
                                    LPSTR a2)
    = GetTextFaceA;

int (__stdcall * Real_GetTextFaceW)(HDC a0,
                                    int a1,
                                    LPWSTR a2)
    = GetTextFaceW;

BOOL (__stdcall * Real_GetTextMetricsA)(HDC a0,
                                        LPTEXTMETRICA a1)
    = GetTextMetricsA;

BOOL (__stdcall * Real_GetTextMetricsW)(HDC a0,
                                        LPTEXTMETRICW a1)
    = GetTextMetricsW;

BOOL (__stdcall * Real_GetThreadContext)(HANDLE a0,
                                         LPCONTEXT a1)
    = GetThreadContext;

HDESK (__stdcall * Real_GetThreadDesktop)(DWORD a0)
    = GetThreadDesktop;

#if(WINVER >= 0x0500)
LCID (__stdcall * Real_GetThreadLocale)(void)
    = GetThreadLocale;
#endif // (WINVER >= 0x0500)

int (__stdcall * Real_GetThreadPriority)(HANDLE a0)
    = GetThreadPriority;

BOOL (__stdcall * Real_GetThreadPriorityBoost)(HANDLE a0,
                                               PBOOL a1)
    = GetThreadPriorityBoost;

BOOL (__stdcall * Real_GetThreadSelectorEntry)(HANDLE a0,
                                               DWORD a1,
                                               LPLDT_ENTRY a2)
    = GetThreadSelectorEntry;

BOOL (__stdcall * Real_GetThreadTimes)(HANDLE a0,
                                       LPFILETIME a1,
                                       LPFILETIME a2,
                                       LPFILETIME a3,
                                       LPFILETIME a4)
    = GetThreadTimes;

DWORD (__stdcall * Real_GetTickCount)(void)
    = GetTickCount;

int (__stdcall * Real_GetTimeFormatA)(LCID a0,
                                      DWORD a1,
                                      CONST SYSTEMTIME* a2,
                                      LPCSTR a3,
                                      LPSTR a4,
                                      int a5)
    = GetTimeFormatA;

int (__stdcall * Real_GetTimeFormatW)(LCID a0,
                                      DWORD a1,
                                      CONST SYSTEMTIME* a2,
                                      LPCWSTR a3,
                                      LPWSTR a4,
                                      int a5)
    = GetTimeFormatW;

DWORD (__stdcall * Real_GetTimeZoneInformation)(LPTIME_ZONE_INFORMATION a0)
    = GetTimeZoneInformation;

HWND (__stdcall * Real_GetTopWindow)(HWND a0)
    = GetTopWindow;

BOOL (__stdcall * Real_GetUpdateRect)(HWND a0,
                                      LPRECT a1,
                                      BOOL a2)
    = GetUpdateRect;

int (__stdcall * Real_GetUpdateRgn)(HWND a0,
                                    HRGN a1,
                                    BOOL a2)
    = GetUpdateRgn;

LCID (__stdcall * Real_GetUserDefaultLCID)(void)
    = GetUserDefaultLCID;

LANGID (__stdcall * Real_GetUserDefaultLangID)(void)
    = GetUserDefaultLangID;

BOOL (__stdcall * Real_GetUserObjectInformationA)(HANDLE a0,
                                                  int a1,
                                                  PVOID a2,
                                                  DWORD a3,
                                                  LPDWORD a4)
    = GetUserObjectInformationA;

BOOL (__stdcall * Real_GetUserObjectInformationW)(HANDLE a0,
                                                  int a1,
                                                  PVOID a2,
                                                  DWORD a3,
                                                  LPDWORD a4)
    = GetUserObjectInformationW;

BOOL (__stdcall * Real_GetUserObjectSecurity)(HANDLE a0,
                                              PSECURITY_INFORMATION a1,
                                              PSECURITY_DESCRIPTOR a2,
                                              DWORD a3,
                                              LPDWORD a4)
    = GetUserObjectSecurity;

DWORD (__stdcall * Real_GetVersion)(void)
    = GetVersion;

BOOL (__stdcall * Real_GetVersionExA)(LPOSVERSIONINFOA a0)
    = GetVersionExA;

BOOL (__stdcall * Real_GetVersionExW)(LPOSVERSIONINFOW a0)
    = GetVersionExW;

BOOL (__stdcall * Real_GetViewportExtEx)(HDC a0,
                                         SIZE* a1)
    = GetViewportExtEx;

BOOL (__stdcall * Real_GetViewportOrgEx)(HDC a0,
                                         POINT* a1)
    = GetViewportOrgEx;

BOOL (__stdcall * Real_GetVolumeInformationA)(LPCSTR a0,
                                              LPSTR a1,
                                              DWORD a2,
                                              LPDWORD a3,
                                              LPDWORD a4,
                                              LPDWORD a5,
                                              LPSTR a6,
                                              DWORD a7)
    = GetVolumeInformationA;

BOOL (__stdcall * Real_GetVolumeInformationW)(LPCWSTR a0,
                                              LPWSTR a1,
                                              DWORD a2,
                                              LPDWORD a3,
                                              LPDWORD a4,
                                              LPDWORD a5,
                                              LPWSTR a6,
                                              DWORD a7)
    = GetVolumeInformationW;

UINT (__stdcall * Real_GetWinMetaFileBits)(HENHMETAFILE a0,
                                           UINT a1,
                                           LPBYTE a2,
                                           INT a3,
                                           HDC a4)
    = GetWinMetaFileBits;

HWND (__stdcall * Real_GetWindow)(HWND a0,
                                  UINT a1)
    = GetWindow;

DWORD (__stdcall * Real_GetWindowContextHelpId)(HWND a0)
    = GetWindowContextHelpId;

HDC (__stdcall * Real_GetWindowDC)(HWND a0)
    = GetWindowDC;

BOOL (__stdcall * Real_GetWindowExtEx)(HDC a0,
                                       SIZE* a1)
    = GetWindowExtEx;

LONG (__stdcall * Real_GetWindowLongA)(HWND a0,
                                       int a1)
    = GetWindowLongA;

LONG (__stdcall * Real_GetWindowLongW)(HWND a0,
                                       int a1)
    = GetWindowLongW;

BOOL (__stdcall * Real_GetWindowOrgEx)(HDC a0,
                                       POINT* a1)
    = GetWindowOrgEx;

BOOL (__stdcall * Real_GetWindowPlacement)(HWND a0,
                                           WINDOWPLACEMENT* a1)
    = GetWindowPlacement;

BOOL (__stdcall * Real_GetWindowRect)(HWND a0,
                                      LPRECT a1)
    = GetWindowRect;

int (__stdcall * Real_GetWindowRgn)(HWND a0,
                                    HRGN a1)
    = GetWindowRgn;

int (__stdcall * Real_GetWindowTextA)(HWND a0,
                                      LPSTR a1,
                                      int a2)
    = GetWindowTextA;

int (__stdcall * Real_GetWindowTextLengthA)(HWND a0)
    = GetWindowTextLengthA;

int (__stdcall * Real_GetWindowTextLengthW)(HWND a0)
    = GetWindowTextLengthW;

int (__stdcall * Real_GetWindowTextW)(HWND a0,
                                      LPWSTR a1,
                                      int a2)
    = GetWindowTextW;

DWORD (__stdcall * Real_GetWindowThreadProcessId)(HWND a0,
                                                  LPDWORD a1)
    = GetWindowThreadProcessId;

WORD (__stdcall * Real_GetWindowWord)(HWND a0,
                                      int a1)
    = GetWindowWord;

UINT (__stdcall * Real_GetWindowsDirectoryA)(LPSTR a0,
                                             UINT a1)
    = GetWindowsDirectoryA;

UINT (__stdcall * Real_GetWindowsDirectoryW)(LPWSTR a0,
                                             UINT a1)
    = GetWindowsDirectoryW;

BOOL (__stdcall * Real_GetWorldTransform)(HDC a0,
                                          XFORM* a1)
    = GetWorldTransform;

ATOM (__stdcall * Real_GlobalAddAtomA)(LPCSTR a0)
    = GlobalAddAtomA;

ATOM (__stdcall * Real_GlobalAddAtomW)(LPCWSTR a0)
    = GlobalAddAtomW;

HGLOBAL (__stdcall * Real_GlobalAlloc)(UINT a0,
                                       SIZE_T a1)
    = GlobalAlloc;

#if _MSC_VER < 1300
UINT (__stdcall * Real_GlobalCompact)(DWORD a0)
    = GlobalCompact;
#else
SIZE_T (__stdcall * Real_GlobalCompact)(DWORD a0)
    = GlobalCompact;
#endif

ATOM (__stdcall * Real_GlobalDeleteAtom)(ATOM a0)
    = GlobalDeleteAtom;

ATOM (__stdcall * Real_GlobalFindAtomA)(LPCSTR a0)
    = GlobalFindAtomA;

ATOM (__stdcall * Real_GlobalFindAtomW)(LPCWSTR a0)
    = GlobalFindAtomW;

void (__stdcall * Real_GlobalFix)(HGLOBAL a0)
    = GlobalFix;

UINT (__stdcall * Real_GlobalFlags)(HGLOBAL a0)
    = GlobalFlags;

HGLOBAL (__stdcall * Real_GlobalFree)(HGLOBAL a0)
    = GlobalFree;

UINT (__stdcall * Real_GlobalGetAtomNameA)(ATOM a0,
                                           LPSTR a1,
                                           int a2)
    = GlobalGetAtomNameA;

UINT (__stdcall * Real_GlobalGetAtomNameW)(ATOM a0,
                                           LPWSTR a1,
                                           int a2)
    = GlobalGetAtomNameW;

HGLOBAL (__stdcall * Real_GlobalHandle)(LPCVOID a0)
    = GlobalHandle;

LPVOID (__stdcall * Real_GlobalLock)(HGLOBAL a0)
    = GlobalLock;

void (__stdcall * Real_GlobalMemoryStatus)(LPMEMORYSTATUS a0)
    = GlobalMemoryStatus;

HGLOBAL (__stdcall * Real_GlobalReAlloc)(HGLOBAL a0,
                                         SIZE_T a1,
                                         UINT a2)
    = GlobalReAlloc;

SIZE_T (__stdcall * Real_GlobalSize)(HGLOBAL a0)
    = GlobalSize;

BOOL (__stdcall * Real_GlobalUnWire)(HGLOBAL a0)
    = GlobalUnWire;

void (__stdcall * Real_GlobalUnfix)(HGLOBAL a0)
    = GlobalUnfix;

BOOL (__stdcall * Real_GlobalUnlock)(HGLOBAL a0)
    = GlobalUnlock;

LPVOID (__stdcall * Real_GlobalWire)(HGLOBAL a0)
    = GlobalWire;

BOOL (__stdcall * Real_GrayStringA)(HDC a0,
                                    HBRUSH a1,
                                    GRAYSTRINGPROC a2,
                                    LPARAM a3,
                                    int a4,
                                    int a5,
                                    int a6,
                                    int a7,
                                    int a8)
    = GrayStringA;

BOOL (__stdcall * Real_GrayStringW)(HDC a0,
                                    HBRUSH a1,
                                    GRAYSTRINGPROC a2,
                                    LPARAM a3,
                                    int a4,
                                    int a5,
                                    int a6,
                                    int a7,
                                    int a8)
    = GrayStringW;

BOOL (__stdcall * Real_HeapLock)(HANDLE a0)
    = HeapLock;

BOOL (__stdcall * Real_HeapUnlock)(HANDLE a0)
    = HeapUnlock;

BOOL (__stdcall * Real_HideCaret)(HWND a0)
    = HideCaret;

BOOL (__stdcall * Real_HiliteMenuItem)(HWND a0,
                                       HMENU a1,
                                       UINT a2,
                                       UINT a3)
    = HiliteMenuItem;

#ifdef _WIN32_WINNT_WIN7
HRESULT (__stdcall * Real_IIDFromString)(LPCOLESTR a0,
                                         LPGUID a1)
    = IIDFromString;
#else
HRESULT (__stdcall * Real_IIDFromString)(LPOLESTR a0,
                                         LPGUID a1)
    = IIDFromString;
#endif

BOOL (__stdcall * Real_ImpersonateDdeClientWindow)(HWND a0,
                                                   HWND a1)
    = ImpersonateDdeClientWindow;

BOOL (__stdcall * Real_InSendMessage)(void)
    = InSendMessage;

BOOL (__stdcall * Real_InflateRect)(LPRECT a0,
                                    int a1,
                                    int a2)
    = InflateRect;

BOOL (__stdcall * Real_InitAtomTable)(DWORD a0)
    = InitAtomTable;

BOOL (__stdcall * Real_InsertMenuA)(HMENU a0,
                                    UINT a1,
                                    UINT a2,
                                    UINT_PTR a3,
                                    LPCSTR a4)
    = InsertMenuA;

BOOL (__stdcall * Real_InsertMenuW)(HMENU a0,
                                    UINT a1,
                                    UINT a2,
                                    UINT_PTR a3,
                                    LPCWSTR a4)
    = InsertMenuW;

BOOL (__stdcall * Real_InsertMenuItemA)(HMENU a0,
                                        UINT a1,
                                        BOOL a2,
                                        LPCMENUITEMINFOA a3)
    = InsertMenuItemA;

BOOL (__stdcall * Real_InsertMenuItemW)(HMENU a0,
                                        UINT a1,
                                        BOOL a2,
                                        LPCMENUITEMINFOW a3)
    = InsertMenuItemW;

int (__stdcall * Real_IntersectClipRect)(HDC a0,
                                         int a1,
                                         int a2,
                                         int a3,
                                         int a4)
    = IntersectClipRect;

BOOL (__stdcall * Real_IntersectRect)(LPRECT a0,
                                      CONST RECT* a1,
                                      CONST RECT* a2)
    = IntersectRect;

BOOL (__stdcall * Real_InvalidateRect)(HWND a0,
                                       CONST RECT* a1,
                                       BOOL a2)
    = InvalidateRect;

BOOL (__stdcall * Real_InvalidateRgn)(HWND a0,
                                      HRGN a1,
                                      BOOL a2)
    = InvalidateRgn;

BOOL (__stdcall * Real_InvertRect)(HDC a0,
                                   CONST RECT* a1)
    = InvertRect;

BOOL (__stdcall * Real_InvertRgn)(HDC a0,
                                  HRGN a1)
    = InvertRgn;

BOOL (__stdcall * Real_IsAccelerator)(HACCEL a0,
                                      int a1,
                                      LPMSG a2,
                                      WORD* a3)
    = IsAccelerator;

BOOL (__stdcall * Real_IsBadCodePtr)(FARPROC a0)
    = IsBadCodePtr;

BOOL (__stdcall * Real_IsBadHugeReadPtr)(CONST void* a0,
                                         UINT_PTR a1)
    = IsBadHugeReadPtr;

BOOL (__stdcall * Real_IsBadHugeWritePtr)(LPVOID a0,
                                          UINT_PTR a1)
    = IsBadHugeWritePtr;

BOOL (__stdcall * Real_IsBadReadPtr)(CONST void* a0,
                                     UINT_PTR a1)
    = IsBadReadPtr;

BOOL (__stdcall * Real_IsBadStringPtrA)(LPCSTR a0,
                                        UINT_PTR a1)
    = IsBadStringPtrA;

BOOL (__stdcall * Real_IsBadStringPtrW)(LPCWSTR a0,
                                        UINT_PTR a1)
    = IsBadStringPtrW;

BOOL (__stdcall * Real_IsBadWritePtr)(LPVOID a0,
                                      UINT_PTR a1)
    = IsBadWritePtr;

BOOL (__stdcall * Real_IsCharAlphaA)(CHAR a0)
    = IsCharAlphaA;

BOOL (__stdcall * Real_IsCharAlphaNumericA)(CHAR a0)
    = IsCharAlphaNumericA;

BOOL (__stdcall * Real_IsCharAlphaNumericW)(WCHAR a0)
    = IsCharAlphaNumericW;

BOOL (__stdcall * Real_IsCharAlphaW)(WCHAR a0)
    = IsCharAlphaW;

BOOL (__stdcall * Real_IsCharLowerA)(CHAR a0)
    = IsCharLowerA;

BOOL (__stdcall * Real_IsCharLowerW)(WCHAR a0)
    = IsCharLowerW;

BOOL (__stdcall * Real_IsCharUpperA)(CHAR a0)
    = IsCharUpperA;

BOOL (__stdcall * Real_IsCharUpperW)(WCHAR a0)
    = IsCharUpperW;

BOOL (__stdcall * Real_IsChild)(HWND a0,
                                HWND a1)
    = IsChild;

BOOL (__stdcall * Real_IsClipboardFormatAvailable)(UINT a0)
    = IsClipboardFormatAvailable;

BOOL (__stdcall * Real_IsDBCSLeadByte)(BYTE a0)
    = IsDBCSLeadByte;

BOOL (__stdcall * Real_IsDBCSLeadByteEx)(UINT a0,
                                         BYTE a1)
    = IsDBCSLeadByteEx;

BOOL (__stdcall * Real_IsDebuggerPresent)(void)
    = IsDebuggerPresent;

BOOL (__stdcall * Real_IsDialogMessageA)(HWND a0,
                                         LPMSG a1)
    = IsDialogMessageA;

BOOL (__stdcall * Real_IsDialogMessageW)(HWND a0,
                                         LPMSG a1)
    = IsDialogMessageW;

UINT (__stdcall * Real_IsDlgButtonChecked)(HWND a0,
                                           int a1)
    = IsDlgButtonChecked;

BOOL (__stdcall * Real_IsIconic)(HWND a0)
    = IsIconic;

BOOL (__stdcall * Real_IsMenu)(HMENU a0)
    = IsMenu;

#if !defined(DETOURS_ARM)
BOOL (__stdcall * Real_IsProcessorFeaturePresent)(DWORD a0)
    = IsProcessorFeaturePresent;
#endif // !DETOURS_ARM

BOOL (__stdcall * Real_IsRectEmpty)(CONST RECT* a0)
    = IsRectEmpty;

BOOL (__stdcall * Real_IsValidCodePage)(UINT a0)
    = IsValidCodePage;

BOOL (__stdcall * Real_IsValidLocale)(LCID a0,
                                      DWORD a1)
    = IsValidLocale;

BOOL (__stdcall * Real_IsWindow)(HWND a0)
    = IsWindow;

BOOL (__stdcall * Real_IsWindowEnabled)(HWND a0)
    = IsWindowEnabled;

BOOL (__stdcall * Real_IsWindowUnicode)(HWND a0)
    = IsWindowUnicode;

BOOL (__stdcall * Real_IsWindowVisible)(HWND a0)
    = IsWindowVisible;

BOOL (__stdcall * Real_IsZoomed)(HWND a0)
    = IsZoomed;

BOOL (__stdcall * Real_KillTimer)(HWND a0,
                                  UINT_PTR a1)
    = KillTimer;

BOOL (__stdcall * Real_LPtoDP)(HDC a0,
                               POINT* a1,
                               int a2)
    = LPtoDP;

BOOL (__stdcall * Real_LineDDA)(int a0,
                                int a1,
                                int a2,
                                int a3,
                                LINEDDAPROC a4,
                                LPARAM a5)
    = LineDDA;

BOOL (__stdcall * Real_LineTo)(HDC a0,
                               int a1,
                               int a2)
    = LineTo;

HACCEL (__stdcall * Real_LoadAcceleratorsA)(HINSTANCE a0,
                                            LPCSTR a1)
    = LoadAcceleratorsA;

HACCEL (__stdcall * Real_LoadAcceleratorsW)(HINSTANCE a0,
                                            LPCWSTR a1)
    = LoadAcceleratorsW;

HBITMAP (__stdcall * Real_LoadBitmapA)(HINSTANCE a0,
                                       LPCSTR a1)
    = LoadBitmapA;

HBITMAP (__stdcall * Real_LoadBitmapW)(HINSTANCE a0,
                                       LPCWSTR a1)
    = LoadBitmapW;

HCURSOR (__stdcall * Real_LoadCursorA)(HINSTANCE a0,
                                       LPCSTR a1)
    = LoadCursorA;

HCURSOR (__stdcall * Real_LoadCursorFromFileA)(LPCSTR a0)
    = LoadCursorFromFileA;

HCURSOR (__stdcall * Real_LoadCursorFromFileW)(LPCWSTR a0)
    = LoadCursorFromFileW;

HCURSOR (__stdcall * Real_LoadCursorW)(HINSTANCE a0,
                                       LPCWSTR a1)
    = LoadCursorW;

HICON (__stdcall * Real_LoadIconA)(HINSTANCE a0,
                                   LPCSTR a1)
    = LoadIconA;

HICON (__stdcall * Real_LoadIconW)(HINSTANCE a0,
                                   LPCWSTR a1)
    = LoadIconW;

HANDLE (__stdcall * Real_LoadImageA)(HINSTANCE a0,
                                     LPCSTR a1,
                                     UINT a2,
                                     int a3,
                                     int a4,
                                     UINT a5)
    = LoadImageA;

HANDLE (__stdcall * Real_LoadImageW)(HINSTANCE a0,
                                     LPCWSTR a1,
                                     UINT a2,
                                     int a3,
                                     int a4,
                                     UINT a5)
    = LoadImageW;

HKL (__stdcall * Real_LoadKeyboardLayoutA)(LPCSTR a0,
                                           UINT a1)
    = LoadKeyboardLayoutA;

HKL (__stdcall * Real_LoadKeyboardLayoutW)(LPCWSTR a0,
                                           UINT a1)
    = LoadKeyboardLayoutW;

HMODULE (__stdcall * Real_LoadLibraryA)(LPCSTR a0)
    = LoadLibraryA;

HMODULE (__stdcall * Real_LoadLibraryExA)(LPCSTR a0,
                                          HANDLE a1,
                                          DWORD a2)
    = LoadLibraryExA;

HMODULE (__stdcall * Real_LoadLibraryExW)(LPCWSTR a0,
                                          HANDLE a1,
                                          DWORD a2)
    = LoadLibraryExW;

HMODULE (__stdcall * Real_LoadLibraryW)(LPCWSTR a0)
    = LoadLibraryW;

HMENU (__stdcall * Real_LoadMenuA)(HINSTANCE a0,
                                   LPCSTR a1)
    = LoadMenuA;

HMENU (__stdcall * Real_LoadMenuIndirectA)(CONST MENUTEMPLATEA* a0)
    = LoadMenuIndirectA;

HMENU (__stdcall * Real_LoadMenuIndirectW)(CONST MENUTEMPLATEW* a0)
    = LoadMenuIndirectW;

HMENU (__stdcall * Real_LoadMenuW)(HINSTANCE a0,
                                   LPCWSTR a1)
    = LoadMenuW;

DWORD (__stdcall * Real_LoadModule)(LPCSTR a0,
                                    LPVOID a1)
    = LoadModule;

HGLOBAL (__stdcall * Real_LoadResource)(HMODULE a0,
                                        HRSRC a1)
    = LoadResource;

int (__stdcall * Real_LoadStringA)(HINSTANCE a0,
                                   UINT a1,
                                   LPSTR a2,
                                   int a3)
    = LoadStringA;

int (__stdcall * Real_LoadStringW)(HINSTANCE a0,
                                   UINT a1,
                                   LPWSTR a2,
                                   int a3)
    = LoadStringW;

#if _MSC_VER < 1300
HLOCAL (__stdcall * Real_LocalAlloc)(UINT a0,
                                     UINT a1)
    = LocalAlloc;
#else
HLOCAL (__stdcall * Real_LocalAlloc)(UINT a0,
                                     SIZE_T a1)
    = LocalAlloc;
#endif

#if _MSC_VER < 1300
UINT (__stdcall * Real_LocalCompact)(UINT a0)
    = LocalCompact;
#else
SIZE_T (__stdcall * Real_LocalCompact)(UINT a0)
    = LocalCompact;
#endif

BOOL (__stdcall * Real_LocalFileTimeToFileTime)(CONST FILETIME* a0,
                                                LPFILETIME a1)
    = LocalFileTimeToFileTime;

UINT (__stdcall * Real_LocalFlags)(HLOCAL a0)
    = LocalFlags;

HLOCAL (__stdcall * Real_LocalFree)(HLOCAL a0)
    = LocalFree;

HLOCAL (__stdcall * Real_LocalHandle)(LPCVOID a0)
    = LocalHandle;

LPVOID (__stdcall * Real_LocalLock)(HLOCAL a0)
    = LocalLock;

#if _MSC_VER < 1300
HLOCAL (__stdcall * Real_LocalReAlloc)(HLOCAL a0,
                                       UINT a1,
                                       UINT a2)
    = LocalReAlloc;
#else
HLOCAL (__stdcall * Real_LocalReAlloc)(HLOCAL a0,
                                       SIZE_T a1,
                                       UINT a2)
    = LocalReAlloc;
#endif

#if _MSC_VER < 1300
UINT (__stdcall * Real_LocalShrink)(HLOCAL a0,
                                      UINT a1)
    = LocalShrink;
#else
SIZE_T (__stdcall * Real_LocalShrink)(HLOCAL a0,
                                      UINT a1)
    = LocalShrink;
#endif

#if _MSC_VER < 1300
UINT (__stdcall * Real_LocalSize)(HLOCAL a0)
    = LocalSize;
#else
SIZE_T (__stdcall * Real_LocalSize)(HLOCAL a0)
    = LocalSize;
#endif

BOOL (__stdcall * Real_LocalUnlock)(HLOCAL a0)
    = LocalUnlock;

BOOL (__stdcall * Real_LockFile)(HANDLE a0,
                                 DWORD a1,
                                 DWORD a2,
                                 DWORD a3,
                                 DWORD a4)
    = LockFile;

BOOL (__stdcall * Real_LockFileEx)(HANDLE a0,
                                   DWORD a1,
                                   DWORD a2,
                                   DWORD a3,
                                   DWORD a4,
                                   LPOVERLAPPED a5)
    = LockFileEx;

LPVOID (__stdcall * Real_LockResource)(HGLOBAL a0)
    = LockResource;

BOOL (__stdcall * Real_LockWindowUpdate)(HWND a0)
    = LockWindowUpdate;

int (__stdcall * Real_LookupIconIdFromDirectory)(PBYTE a0,
                                                 BOOL a1)
    = LookupIconIdFromDirectory;

int (__stdcall * Real_LookupIconIdFromDirectoryEx)(PBYTE a0,
                                                   BOOL a1,
                                                   int a2,
                                                   int a3,
                                                   UINT a4)
    = LookupIconIdFromDirectoryEx;

BOOL (__stdcall * Real_MapDialogRect)(HWND a0,
                                      LPRECT a1)
    = MapDialogRect;

LPVOID (__stdcall * Real_MapViewOfFile)(HANDLE a0,
                                        DWORD a1,
                                        DWORD a2,
                                        DWORD a3,
                                        SIZE_T a4)
    = MapViewOfFile;

LPVOID (__stdcall * Real_MapViewOfFileEx)(HANDLE a0,
                                          DWORD a1,
                                          DWORD a2,
                                          DWORD a3,
                                          SIZE_T a4,
                                          LPVOID a5)
    = MapViewOfFileEx;

UINT (__stdcall * Real_MapVirtualKeyA)(UINT a0,
                                       UINT a1)
    = MapVirtualKeyA;

UINT (__stdcall * Real_MapVirtualKeyExA)(UINT a0,
                                         UINT a1,
                                         HKL a2)
    = MapVirtualKeyExA;

UINT (__stdcall * Real_MapVirtualKeyExW)(UINT a0,
                                         UINT a1,
                                         HKL a2)
    = MapVirtualKeyExW;

UINT (__stdcall * Real_MapVirtualKeyW)(UINT a0,
                                       UINT a1)
    = MapVirtualKeyW;

int (__stdcall * Real_MapWindowPoints)(HWND a0,
                                       HWND a1,
                                       POINT* a2,
                                       UINT a3)
    = MapWindowPoints;

BOOL (__stdcall * Real_MaskBlt)(HDC a0,
                                int a1,
                                int a2,
                                int a3,
                                int a4,
                                HDC a5,
                                int a6,
                                int a7,
                                HBITMAP a8,
                                int a9,
                                int a10,
                                DWORD a11)
    = MaskBlt;

int (__stdcall * Real_MenuItemFromPoint)(HWND a0,
                                         HMENU a1,
                                         POINT a2)
    = MenuItemFromPoint;

BOOL (__stdcall * Real_MessageBeep)(UINT a0)
    = MessageBeep;

int (__stdcall * Real_MessageBoxA)(HWND a0,
                                   LPCSTR a1,
                                   LPCSTR a2,
                                   UINT a3)
    = MessageBoxA;

int (__stdcall * Real_MessageBoxExA)(HWND a0,
                                     LPCSTR a1,
                                     LPCSTR a2,
                                     UINT a3,
                                     WORD a4)
    = MessageBoxExA;

int (__stdcall * Real_MessageBoxExW)(HWND a0,
                                     LPCWSTR a1,
                                     LPCWSTR a2,
                                     UINT a3,
                                     WORD a4)
    = MessageBoxExW;

#if _MSC_VER < 1300
int (__stdcall * Real_MessageBoxIndirectA)(MSGBOXPARAMSA* a0)
    = MessageBoxIndirectA;
#else
int (__stdcall * Real_MessageBoxIndirectA)(CONST MSGBOXPARAMSA* a0)
    = MessageBoxIndirectA;
#endif

#if _MSC_VER < 1300
int (__stdcall * Real_MessageBoxIndirectW)(MSGBOXPARAMSW* a0)
    = MessageBoxIndirectW;
#else
int (__stdcall * Real_MessageBoxIndirectW)(CONST MSGBOXPARAMSW* a0)
    = MessageBoxIndirectW;
#endif

int (__stdcall * Real_MessageBoxW)(HWND a0,
                                   LPCWSTR a1,
                                   LPCWSTR a2,
                                   UINT a3)
    = MessageBoxW;

HRESULT (__stdcall * Real_MkParseDisplayName)(IBindCtx* a0,
                                              LPCOLESTR a1,
                                              ULONG* a2,
                                              IMoniker** a3)
    = MkParseDisplayName;

BOOL (__stdcall * Real_ModifyMenuA)(HMENU a0,
                                    UINT a1,
                                    UINT a2,
                                    UINT_PTR a3,
                                    LPCSTR a4)
    = ModifyMenuA;

BOOL (__stdcall * Real_ModifyMenuW)(HMENU a0,
                                    UINT a1,
                                    UINT a2,
                                    UINT_PTR a3,
                                    LPCWSTR a4)
    = ModifyMenuW;

BOOL (__stdcall * Real_ModifyWorldTransform)(HDC a0,
                                             CONST XFORM* a1,
                                             DWORD a2)
    = ModifyWorldTransform;

HRESULT (__stdcall * Real_MonikerCommonPrefixWith)(IMoniker* a0,
                                                   IMoniker* a1,
                                                   IMoniker** a2)
    = MonikerCommonPrefixWith;

HRESULT (__stdcall * Real_MonikerRelativePathTo)(IMoniker* a0,
                                                 IMoniker* a1,
                                                 IMoniker** a2,
                                                 BOOL a3)
    = MonikerRelativePathTo;

BOOL (__stdcall * Real_MoveFileA)(LPCSTR a0,
                                  LPCSTR a1)
    = MoveFileA;

BOOL (__stdcall * Real_MoveFileExA)(LPCSTR a0,
                                    LPCSTR a1,
                                    DWORD a2)
    = MoveFileExA;

BOOL (__stdcall * Real_MoveFileExW)(LPCWSTR a0,
                                    LPCWSTR a1,
                                    DWORD a2)
    = MoveFileExW;

BOOL (__stdcall * Real_MoveFileW)(LPCWSTR a0,
                                  LPCWSTR a1)
    = MoveFileW;

BOOL (__stdcall * Real_MoveToEx)(HDC a0,
                                 int a1,
                                 int a2,
                                 POINT* a3)
    = MoveToEx;

BOOL (__stdcall * Real_MoveWindow)(HWND a0,
                                   int a1,
                                   int a2,
                                   int a3,
                                   int a4,
                                   BOOL a5)
    = MoveWindow;

#if _MSC_VER < 1300
DWORD (__stdcall * Real_MsgWaitForMultipleObjects)(DWORD a0,
                                                   HANDLE * a1,
                                                   BOOL a2,
                                                   DWORD a3,
                                                   DWORD a4)
    = MsgWaitForMultipleObjects;
#else
DWORD (__stdcall * Real_MsgWaitForMultipleObjects)(DWORD a0,
                                                   CONST HANDLE * a1,
                                                   BOOL a2,
                                                   DWORD a3,
                                                   DWORD a4)
    = MsgWaitForMultipleObjects;
#endif

#if _MSC_VER < 1300
DWORD (__stdcall * Real_MsgWaitForMultipleObjectsEx)(DWORD a0,
                                                     HANDLE * a1,
                                                     DWORD a2,
                                                     DWORD a3,
                                                     DWORD a4)
    = MsgWaitForMultipleObjectsEx;
#else
DWORD (__stdcall * Real_MsgWaitForMultipleObjectsEx)(DWORD a0,
                                                     CONST HANDLE * a1,
                                                     DWORD a2,
                                                     DWORD a3,
                                                     DWORD a4)
    = MsgWaitForMultipleObjectsEx;
#endif

int (__stdcall * Real_MulDiv)(int a0,
                              int a1,
                              int a2)
    = MulDiv;

DWORD (__stdcall * Real_OemKeyScan)(WORD a0)
    = OemKeyScan;

BOOL (__stdcall * Real_OemToCharA)(LPCSTR a0,
                                   LPSTR a1)
    = OemToCharA;

BOOL (__stdcall * Real_OemToCharBuffA)(LPCSTR a0,
                                       LPSTR a1,
                                       DWORD a2)
    = OemToCharBuffA;

BOOL (__stdcall * Real_OemToCharBuffW)(LPCSTR a0,
                                       LPWSTR a1,
                                       DWORD a2)
    = OemToCharBuffW;

BOOL (__stdcall * Real_OemToCharW)(LPCSTR a0,
                                   LPWSTR a1)
    = OemToCharW;

int (__stdcall * Real_OffsetClipRgn)(HDC a0,
                                     int a1,
                                     int a2)
    = OffsetClipRgn;

BOOL (__stdcall * Real_OffsetRect)(LPRECT a0,
                                   int a1,
                                   int a2)
    = OffsetRect;

int (__stdcall * Real_OffsetRgn)(HRGN a0,
                                 int a1,
                                 int a2)
    = OffsetRgn;

BOOL (__stdcall * Real_OffsetViewportOrgEx)(HDC a0,
                                            int a1,
                                            int a2,
                                            POINT* a3)
    = OffsetViewportOrgEx;

BOOL (__stdcall * Real_OffsetWindowOrgEx)(HDC a0,
                                          int a1,
                                          int a2,
                                          POINT* a3)
    = OffsetWindowOrgEx;

DWORD (__stdcall * Real_OleBuildVersion)(void)
    = OleBuildVersion;

HRESULT (__stdcall * Real_OleConvertIStorageToOLESTREAM)(IStorage* a0,
                                                         LPOLESTREAM a1)
    = OleConvertIStorageToOLESTREAM;

HRESULT (__stdcall * Real_OleConvertIStorageToOLESTREAMEx)(IStorage* a0,
                                                           CLIPFORMAT a1,
                                                           LONG a2,
                                                           LONG a3,
                                                           DWORD a4,
                                                           LPSTGMEDIUM a5,
                                                           LPOLESTREAM a6)
    = OleConvertIStorageToOLESTREAMEx;

HRESULT (__stdcall * Real_OleConvertOLESTREAMToIStorage)(LPOLESTREAM a0,
                                                         LPSTORAGE a1,
                                                         CONST DVTARGETDEVICE* a2)
    = OleConvertOLESTREAMToIStorage;

HRESULT (__stdcall * Real_OleConvertOLESTREAMToIStorageEx)(LPOLESTREAM a0,
                                                           LPSTORAGE a1,
                                                           CLIPFORMAT* a2,
                                                           LONG* a3,
                                                           LONG* a4,
                                                           DWORD* a5,
                                                           LPSTGMEDIUM a6)
    = OleConvertOLESTREAMToIStorageEx;

HRESULT (__stdcall * Real_OleCreate)(CONST IID& a0,
                                     CONST IID& a1,
                                     DWORD a2,
                                     LPFORMATETC a3,
                                     LPOLECLIENTSITE a4,
                                     LPSTORAGE a5,
                                     LPVOID* a6)
    = OleCreate;

HRESULT (__stdcall * Real_OleCreateDefaultHandler)(CONST IID& a0,
                                                   LPUNKNOWN a1,
                                                   CONST IID& a2,
                                                   LPVOID* a3)
    = OleCreateDefaultHandler;

HRESULT (__stdcall * Real_OleCreateEmbeddingHelper)(CONST IID& a0,
                                                    LPUNKNOWN a1,
                                                    DWORD a2,
                                                    LPCLASSFACTORY a3,
                                                    CONST IID& a4,
                                                    LPVOID* a5)
    = OleCreateEmbeddingHelper;

HRESULT (__stdcall * Real_OleCreateEx)(CONST IID& a0,
                                       CONST IID& a1,
                                       DWORD a2,
                                       DWORD a3,
                                       ULONG a4,
                                       DWORD* a5,
                                       LPFORMATETC a6,
                                       IAdviseSink* a7,
                                       DWORD* a8,
                                       LPOLECLIENTSITE a9,
                                       LPSTORAGE a10,
                                       LPVOID* a11)
    = OleCreateEx;

HRESULT (__stdcall * Real_OleCreateFromData)(IDataObject* a0,
                                             CONST IID& a1,
                                             DWORD a2,
                                             LPFORMATETC a3,
                                             LPOLECLIENTSITE a4,
                                             LPSTORAGE a5,
                                             LPVOID* a6)
    = OleCreateFromData;

HRESULT (__stdcall * Real_OleCreateFromDataEx)(IDataObject* a0,
                                               CONST IID& a1,
                                               DWORD a2,
                                               DWORD a3,
                                               ULONG a4,
                                               DWORD* a5,
                                               LPFORMATETC a6,
                                               IAdviseSink* a7,
                                               DWORD* a8,
                                               LPOLECLIENTSITE a9,
                                               LPSTORAGE a10,
                                               LPVOID* a11)
    = OleCreateFromDataEx;

HRESULT (__stdcall * Real_OleCreateFromFile)(CONST IID& a0,
                                             LPCOLESTR a1,
                                             CONST IID& a2,
                                             DWORD a3,
                                             LPFORMATETC a4,
                                             LPOLECLIENTSITE a5,
                                             LPSTORAGE a6,
                                             LPVOID* a7)
    = OleCreateFromFile;

HRESULT (__stdcall * Real_OleCreateFromFileEx)(CONST IID& a0,
                                               LPCOLESTR a1,
                                               CONST IID& a2,
                                               DWORD a3,
                                               DWORD a4,
                                               ULONG a5,
                                               DWORD* a6,
                                               LPFORMATETC a7,
                                               IAdviseSink* a8,
                                               DWORD* a9,
                                               LPOLECLIENTSITE a10,
                                               LPSTORAGE a11,
                                               LPVOID* a12)
    = OleCreateFromFileEx;

HRESULT (__stdcall * Real_OleCreateLink)(IMoniker* a0,
                                         CONST IID& a1,
                                         DWORD a2,
                                         LPFORMATETC a3,
                                         LPOLECLIENTSITE a4,
                                         LPSTORAGE a5,
                                         LPVOID* a6)
    = OleCreateLink;

HRESULT (__stdcall * Real_OleCreateLinkEx)(IMoniker* a0,
                                           CONST IID& a1,
                                           DWORD a2,
                                           DWORD a3,
                                           ULONG a4,
                                           DWORD* a5,
                                           LPFORMATETC a6,
                                           IAdviseSink* a7,
                                           DWORD* a8,
                                           LPOLECLIENTSITE a9,
                                           LPSTORAGE a10,
                                           LPVOID* a11)
    = OleCreateLinkEx;

HRESULT (__stdcall * Real_OleCreateLinkFromData)(IDataObject* a0,
                                                 CONST IID& a1,
                                                 DWORD a2,
                                                 LPFORMATETC a3,
                                                 LPOLECLIENTSITE a4,
                                                 LPSTORAGE a5,
                                                 LPVOID* a6)
    = OleCreateLinkFromData;

HRESULT (__stdcall * Real_OleCreateLinkFromDataEx)(IDataObject* a0,
                                                   CONST IID& a1,
                                                   DWORD a2,
                                                   DWORD a3,
                                                   ULONG a4,
                                                   DWORD* a5,
                                                   LPFORMATETC a6,
                                                   IAdviseSink* a7,
                                                   DWORD* a8,
                                                   LPOLECLIENTSITE a9,
                                                   LPSTORAGE a10,
                                                   LPVOID* a11)
    = OleCreateLinkFromDataEx;

HRESULT (__stdcall * Real_OleCreateLinkToFile)(LPCOLESTR a0,
                                               CONST IID& a1,
                                               DWORD a2,
                                               LPFORMATETC a3,
                                               LPOLECLIENTSITE a4,
                                               LPSTORAGE a5,
                                               LPVOID* a6)
    = OleCreateLinkToFile;

HRESULT (__stdcall * Real_OleCreateLinkToFileEx)(LPCOLESTR a0,
                                                 CONST IID& a1,
                                                 DWORD a2,
                                                 DWORD a3,
                                                 ULONG a4,
                                                 DWORD* a5,
                                                 LPFORMATETC a6,
                                                 IAdviseSink* a7,
                                                 DWORD* a8,
                                                 LPOLECLIENTSITE a9,
                                                 LPSTORAGE a10,
                                                 LPVOID* a11)
    = OleCreateLinkToFileEx;

HOLEMENU (__stdcall * Real_OleCreateMenuDescriptor)(HMENU a0,
                                                    LPOLEMENUGROUPWIDTHS a1)
    = OleCreateMenuDescriptor;

HRESULT (__stdcall * Real_OleCreateStaticFromData)(IDataObject* a0,
                                                   CONST IID& a1,
                                                   DWORD a2,
                                                   LPFORMATETC a3,
                                                   LPOLECLIENTSITE a4,
                                                   LPSTORAGE a5,
                                                   LPVOID* a6)
    = OleCreateStaticFromData;

HRESULT (__stdcall * Real_OleDestroyMenuDescriptor)(HOLEMENU a0)
    = OleDestroyMenuDescriptor;

HRESULT (__stdcall * Real_OleDoAutoConvert)(LPSTORAGE a0,
                                            LPGUID a1)
    = OleDoAutoConvert;

HRESULT (__stdcall * Real_OleDraw)(LPUNKNOWN a0,
                                   DWORD a1,
                                   HDC a2,
                                   LPCRECT a3)
    = OleDraw;

HANDLE (__stdcall * Real_OleDuplicateData)(HANDLE a0,
                                           CLIPFORMAT a1,
                                           UINT a2)
    = OleDuplicateData;

HRESULT (__stdcall * Real_OleFlushClipboard)(void)
    = OleFlushClipboard;

HRESULT (__stdcall * Real_OleGetAutoConvert)(CONST IID& a0,
                                             LPGUID a1)
    = OleGetAutoConvert;

HRESULT (__stdcall * Real_OleGetClipboard)(IDataObject** a0)
    = OleGetClipboard;

HGLOBAL (__stdcall * Real_OleGetIconOfClass)(CONST IID& a0,
                                             LPOLESTR a1,
                                             BOOL a2)
    = OleGetIconOfClass;

HGLOBAL (__stdcall * Real_OleGetIconOfFile)(LPOLESTR a0,
                                            BOOL a1)
    = OleGetIconOfFile;

HRESULT (__stdcall * Real_OleInitialize)(LPVOID a0)
    = OleInitialize;

HRESULT (__stdcall * Real_OleIsCurrentClipboard)(IDataObject* a0)
    = OleIsCurrentClipboard;

BOOL (__stdcall * Real_OleIsRunning)(IOleObject* a0)
    = OleIsRunning;

HRESULT (__stdcall * Real_OleLoad)(LPSTORAGE a0,
                                   CONST IID& a1,
                                   LPOLECLIENTSITE a2,
                                   LPVOID* a3)
    = OleLoad;

HRESULT (__stdcall * Real_OleLoadFromStream)(LPSTREAM a0,
                                             CONST IID& a1,
                                             LPVOID* a2)
    = OleLoadFromStream;

HRESULT (__stdcall * Real_OleLockRunning)(LPUNKNOWN a0,
                                          BOOL a1,
                                          BOOL a2)
    = OleLockRunning;

HGLOBAL (__stdcall * Real_OleMetafilePictFromIconAndLabel)(HICON a0,
                                                           LPOLESTR a1,
                                                           LPOLESTR a2,
                                                           UINT a3)
    = OleMetafilePictFromIconAndLabel;

HRESULT (__stdcall * Real_OleNoteObjectVisible)(LPUNKNOWN a0,
                                                BOOL a1)
    = OleNoteObjectVisible;

HRESULT (__stdcall * Real_OleQueryCreateFromData)(IDataObject* a0)
    = OleQueryCreateFromData;

HRESULT (__stdcall * Real_OleQueryLinkFromData)(IDataObject* a0)
    = OleQueryLinkFromData;

HRESULT (__stdcall * Real_OleRegEnumFormatEtc)(CONST IID& a0,
                                               DWORD a1,
                                               IEnumFORMATETC** a2)
    = OleRegEnumFormatEtc;

HRESULT (__stdcall * Real_OleRegEnumVerbs)(CONST IID& a0,
                                           IEnumOLEVERB** a1)
    = OleRegEnumVerbs;

HRESULT (__stdcall * Real_OleRegGetMiscStatus)(CONST IID& a0,
                                               DWORD a1,
                                               DWORD* a2)
    = OleRegGetMiscStatus;

HRESULT (__stdcall * Real_OleRegGetUserType)(CONST IID& a0,
                                             DWORD a1,
                                             LPOLESTR* a2)
    = OleRegGetUserType;

HRESULT (__stdcall * Real_OleRun)(LPUNKNOWN a0)
    = OleRun;

HRESULT (__stdcall * Real_OleSave)(LPPERSISTSTORAGE a0,
                                   LPSTORAGE a1,
                                   BOOL a2)
    = OleSave;

HRESULT (__stdcall * Real_OleSaveToStream)(IPersistStream* a0,
                                           LPSTREAM a1)
    = OleSaveToStream;

HRESULT (__stdcall * Real_OleSetAutoConvert)(CONST IID& a0,
                                             CONST IID& a1)
    = OleSetAutoConvert;

HRESULT (__stdcall * Real_OleSetClipboard)(IDataObject* a0)
    = OleSetClipboard;

HRESULT (__stdcall * Real_OleSetContainedObject)(LPUNKNOWN a0,
                                                 BOOL a1)
    = OleSetContainedObject;

HRESULT (__stdcall * Real_OleSetMenuDescriptor)(HOLEMENU a0,
                                                HWND a1,
                                                HWND a2,
                                                LPOLEINPLACEFRAME a3,
                                                LPOLEINPLACEACTIVEOBJECT a4)
    = OleSetMenuDescriptor;

HRESULT (__stdcall * Real_OleTranslateAccelerator)(LPOLEINPLACEFRAME a0,
                                                   LPOLEINPLACEFRAMEINFO a1,
                                                   LPMSG a2)
    = OleTranslateAccelerator;

void (__stdcall * Real_OleUninitialize)(void)
    = OleUninitialize;

BOOL (__stdcall * Real_OpenClipboard)(HWND a0)
    = OpenClipboard;

#if _MSC_VER < 1300
HDESK (__stdcall * Real_OpenDesktopA)(LPSTR a0,
                                      DWORD a1,
                                      BOOL a2,
                                      ACCESS_MASK a3)
    = OpenDesktopA;
#else
HDESK (__stdcall * Real_OpenDesktopA)(LPCSTR a0,
                                      DWORD a1,
                                      BOOL a2,
                                      ACCESS_MASK a3)
    = OpenDesktopA;
#endif

#if _MSC_VER < 1300
HDESK (__stdcall * Real_OpenDesktopW)(LPWSTR a0,
                                      DWORD a1,
                                      BOOL a2,
                                      ACCESS_MASK a3)
    = OpenDesktopW;
#else
HDESK (__stdcall * Real_OpenDesktopW)(LPCWSTR a0,
                                      DWORD a1,
                                      BOOL a2,
                                      ACCESS_MASK a3)
    = OpenDesktopW;
#endif

HANDLE (__stdcall * Real_OpenEventA)(DWORD a0,
                                     BOOL a1,
                                     LPCSTR a2)
    = OpenEventA;

HANDLE (__stdcall * Real_OpenEventW)(DWORD a0,
                                     BOOL a1,
                                     LPCWSTR a2)
    = OpenEventW;

HFILE (__stdcall * Real_OpenFile)(LPCSTR a0,
                                  LPOFSTRUCT a1,
                                  UINT a2)
    = OpenFile;

HANDLE (__stdcall * Real_OpenFileMappingA)(DWORD a0,
                                           BOOL a1,
                                           LPCSTR a2)
    = OpenFileMappingA;

HANDLE (__stdcall * Real_OpenFileMappingW)(DWORD a0,
                                           BOOL a1,
                                           LPCWSTR a2)
    = OpenFileMappingW;

BOOL (__stdcall * Real_OpenIcon)(HWND a0)
    = OpenIcon;

HDESK (__stdcall * Real_OpenInputDesktop)(DWORD a0,
                                          BOOL a1,
                                          ACCESS_MASK a2)
    = OpenInputDesktop;

HANDLE (__stdcall * Real_OpenMutexA)(DWORD a0,
                                     BOOL a1,
                                     LPCSTR a2)
    = OpenMutexA;

HANDLE (__stdcall * Real_OpenMutexW)(DWORD a0,
                                     BOOL a1,
                                     LPCWSTR a2)
    = OpenMutexW;

HANDLE (__stdcall * Real_OpenProcess)(DWORD a0,
                                      BOOL a1,
                                      DWORD pid)
    = OpenProcess;

BOOL (__stdcall * Real_OpenProcessToken)(__in   HANDLE ProcessHandle,
                                         __in   DWORD DesiredAccess,
                                         __out  PHANDLE TokenHandle
                                        )
    = OpenProcessToken;

HANDLE (__stdcall * Real_OpenSemaphoreA)(DWORD a0,
                                         BOOL a1,
                                         LPCSTR a2)
    = OpenSemaphoreA;

HANDLE (__stdcall * Real_OpenSemaphoreW)(DWORD a0,
                                         BOOL a1,
                                         LPCWSTR a2)
    = OpenSemaphoreW;

HANDLE (__stdcall * Real_OpenWaitableTimerA)(DWORD a0,
                                             BOOL a1,
                                             LPCSTR a2)
    = OpenWaitableTimerA;

HANDLE (__stdcall * Real_OpenWaitableTimerW)(DWORD a0,
                                             BOOL a1,
                                             LPCWSTR a2)
    = OpenWaitableTimerW;

#if _MSC_VER < 1300
HWINSTA (__stdcall * Real_OpenWindowStationA)(LPSTR a0,
                                              BOOL a1,
                                              ACCESS_MASK a2)
    = OpenWindowStationA;
#else
HWINSTA (__stdcall * Real_OpenWindowStationA)(LPCSTR a0,
                                              BOOL a1,
                                              ACCESS_MASK a2)
    = OpenWindowStationA;
#endif

#if _MSC_VER < 1300
HWINSTA (__stdcall * Real_OpenWindowStationW)(LPWSTR a0,
                                              BOOL a1,
                                              ACCESS_MASK a2)
    = OpenWindowStationW;
#else
HWINSTA (__stdcall * Real_OpenWindowStationW)(LPCWSTR a0,
                                              BOOL a1,
                                              ACCESS_MASK a2)
    = OpenWindowStationW;
#endif

void (__stdcall * Real_OutputDebugStringA)(LPCSTR a0)
    = OutputDebugStringA;

void (__stdcall * Real_OutputDebugStringW)(LPCWSTR a0)
    = OutputDebugStringW;

LPARAM (__stdcall * Real_PackDDElParam)(UINT a0,
                                        UINT_PTR a1,
                                        UINT_PTR a2)
    = PackDDElParam;

BOOL (__stdcall * Real_PaintDesktop)(HDC a0)
    = PaintDesktop;

BOOL (__stdcall * Real_PaintRgn)(HDC a0,
                                 HRGN a1)
    = PaintRgn;

BOOL (__stdcall * Real_PatBlt)(HDC a0,
                               int a1,
                               int a2,
                               int a3,
                               int a4,
                               DWORD a5)
    = PatBlt;

HRGN (__stdcall * Real_PathToRegion)(HDC a0)
    = PathToRegion;

BOOL (__stdcall * Real_PeekConsoleInputA)(HANDLE a0,
                                          PINPUT_RECORD a1,
                                          DWORD a2,
                                          LPDWORD a3)
    = PeekConsoleInputA;

BOOL (__stdcall * Real_PeekConsoleInputW)(HANDLE a0,
                                          PINPUT_RECORD a1,
                                          DWORD a2,
                                          LPDWORD a3)
    = PeekConsoleInputW;

BOOL (__stdcall * Real_PeekMessageA)(LPMSG a0,
                                     HWND a1,
                                     UINT a2,
                                     UINT a3,
                                     UINT a4)
    = PeekMessageA;

BOOL (__stdcall * Real_PeekMessageW)(LPMSG a0,
                                     HWND a1,
                                     UINT a2,
                                     UINT a3,
                                     UINT a4)
    = PeekMessageW;

BOOL (__stdcall * Real_PeekNamedPipe)(HANDLE a0,
                                      LPVOID a1,
                                      DWORD a2,
                                      LPDWORD a3,
                                      LPDWORD a4,
                                      LPDWORD a5)
    = PeekNamedPipe;

BOOL (__stdcall * Real_Pie)(HDC a0,
                            int a1,
                            int a2,
                            int a3,
                            int a4,
                            int a5,
                            int a6,
                            int a7,
                            int a8)
    = Pie;

BOOL (__stdcall * Real_PlayEnhMetaFile)(HDC a0,
                                        HENHMETAFILE a1,
                                        CONST RECT* a2)
    = PlayEnhMetaFile;

BOOL (__stdcall * Real_PlayEnhMetaFileRecord)(HDC a0,
                                              LPHANDLETABLE a1,
                                              CONST ENHMETARECORD* a2,
                                              UINT a3)
    = PlayEnhMetaFileRecord;

BOOL (__stdcall * Real_PlayMetaFile)(HDC a0,
                                     HMETAFILE a1)
    = PlayMetaFile;

BOOL (__stdcall * Real_PlayMetaFileRecord)(HDC a0,
                                           LPHANDLETABLE a1,
                                           LPMETARECORD a2,
                                           UINT a3)
    = PlayMetaFileRecord;

BOOL (__stdcall * Real_PlgBlt)(HDC a0,
                               CONST POINT* a1,
                               HDC a2,
                               int a3,
                               int a4,
                               int a5,
                               int a6,
                               HBITMAP a7,
                               int a8,
                               int a9)
    = PlgBlt;

BOOL (__stdcall * Real_PolyBezier)(HDC a0,
                                   CONST POINT* a1,
                                   DWORD a2)
    = PolyBezier;

BOOL (__stdcall * Real_PolyBezierTo)(HDC a0,
                                     CONST POINT* a1,
                                     DWORD a2)
    = PolyBezierTo;

BOOL (__stdcall * Real_PolyDraw)(HDC a0,
                                 CONST POINT* a1,
                                 CONST BYTE* a2,
                                 int a3)
    = PolyDraw;

BOOL (__stdcall * Real_PolyPolygon)(HDC a0,
                                    CONST POINT* a1,
                                    CONST INT* a2,
                                    int a3)
    = PolyPolygon;

BOOL (__stdcall * Real_PolyPolyline)(HDC a0,
                                     CONST POINT* a1,
                                     CONST DWORD* a2,
                                     DWORD a3)
    = PolyPolyline;

BOOL (__stdcall * Real_PolyTextOutA)(HDC a0,
                                     CONST POLYTEXTA* a1,
                                     int a2)
    = PolyTextOutA;

BOOL (__stdcall * Real_PolyTextOutW)(HDC a0,
                                     CONST POLYTEXTW* a1,
                                     int a2)
    = PolyTextOutW;

BOOL (__stdcall * Real_Polygon)(HDC a0,
                                CONST POINT* a1,
                                int a2)
    = Polygon;

BOOL (__stdcall * Real_Polyline)(HDC a0,
                                 CONST POINT* a1,
                                 int a2)
    = Polyline;

BOOL (__stdcall * Real_PolylineTo)(HDC a0,
                                   CONST POINT* a1,
                                   DWORD a2)
    = PolylineTo;

BOOL (__stdcall * Real_PostMessageA)(HWND a0,
                                     UINT a1,
                                     WPARAM a2,
                                     LPARAM a3)
    = PostMessageA;

BOOL (__stdcall * Real_PostMessageW)(HWND a0,
                                     UINT a1,
                                     WPARAM a2,
                                     LPARAM a3)
    = PostMessageW;

BOOL (__stdcall * Real_PostQueuedCompletionStatus)(HANDLE a0,
                                                   DWORD a1,
                                                   ULONG_PTR a2,
                                                   LPOVERLAPPED a3)
    = PostQueuedCompletionStatus;

void (__stdcall * Real_PostQuitMessage)(int a0)
    = PostQuitMessage;

BOOL (__stdcall * Real_PostThreadMessageA)(DWORD a0,
                                           UINT a1,
                                           WPARAM a2,
                                           LPARAM a3)
    = PostThreadMessageA;

BOOL (__stdcall * Real_PostThreadMessageW)(DWORD a0,
                                           UINT a1,
                                           WPARAM a2,
                                           LPARAM a3)
    = PostThreadMessageW;

DWORD (__stdcall * Real_PrepareTape)(HANDLE a0,
                                     DWORD a1,
                                     BOOL a2)
    = PrepareTape;

HRESULT (__stdcall * Real_ProgIDFromCLSID)(CONST IID& a0,
                                           LPOLESTR* a1)
    = ProgIDFromCLSID;

HRESULT (__stdcall * Real_PropVariantClear)(PROPVARIANT* a0)
    = PropVariantClear;

HRESULT (__stdcall * Real_PropVariantCopy)(PROPVARIANT* a0,
                                           CONST PROPVARIANT* a1)
    = PropVariantCopy;

BOOL (__stdcall * Real_PtInRect)(CONST RECT* a0,
                                 POINT a1)
    = PtInRect;

BOOL (__stdcall * Real_PtInRegion)(HRGN a0,
                                   int a1,
                                   int a2)
    = PtInRegion;

BOOL (__stdcall * Real_PtVisible)(HDC a0,
                                  int a1,
                                  int a2)
    = PtVisible;

BOOL (__stdcall * Real_PulseEvent)(HANDLE a0)
    = PulseEvent;

BOOL (__stdcall * Real_PurgeComm)(HANDLE a0,
                                  DWORD a1)
    = PurgeComm;

DWORD (__stdcall * Real_QueryDosDeviceA)(LPCSTR a0,
                                         LPSTR a1,
                                         DWORD a2)
    = QueryDosDeviceA;

DWORD (__stdcall * Real_QueryDosDeviceW)(LPCWSTR a0,
                                         LPWSTR a1,
                                         DWORD a2)
    = QueryDosDeviceW;

BOOL (__stdcall * Real_QueryPerformanceCounter)(LARGE_INTEGER* a0)
    = QueryPerformanceCounter;

BOOL (__stdcall * Real_QueryPerformanceFrequency)(LARGE_INTEGER* a0)
    = QueryPerformanceFrequency;

DWORD (__stdcall * Real_QueueUserAPC)(PAPCFUNC a0,
                                      HANDLE a1,
                                      ULONG_PTR a2)
    = QueueUserAPC;

void (__stdcall * Real_RaiseException)(DWORD a0,
                                       DWORD a1,
                                       DWORD a2,
                                       CONST ULONG_PTR* a3)
    = RaiseException;

HRESULT (__stdcall * Real_ReadClassStg)(LPSTORAGE a0,
                                        CLSID* a1)
    = ReadClassStg;

HRESULT (__stdcall * Real_ReadClassStm)(LPSTREAM a0,
                                        CLSID* a1)
    = ReadClassStm;

BOOL (__stdcall * Real_ReadConsoleA)(
                                     HANDLE a0,
                                     LPVOID a1,
                                     DWORD a2,
                                     LPDWORD a3,
#ifdef ENABLE_INSERT_MODE
                                     PCONSOLE_READCONSOLE_CONTROL a4
#else
                                     LPVOID a4
#endif
                                    )
    = ReadConsoleA;

BOOL (__stdcall * Real_ReadConsoleInputA)(HANDLE a0,
                                          PINPUT_RECORD a1,
                                          DWORD a2,
                                          LPDWORD a3)
    = ReadConsoleInputA;

BOOL (__stdcall * Real_ReadConsoleInputW)(HANDLE a0,
                                          PINPUT_RECORD a1,
                                          DWORD a2,
                                          LPDWORD a3)
    = ReadConsoleInputW;

BOOL (__stdcall * Real_ReadConsoleOutputA)(HANDLE a0,
                                           PCHAR_INFO a1,
                                           COORD a2,
                                           COORD a3,
                                           PSMALL_RECT a4)
    = ReadConsoleOutputA;

BOOL (__stdcall * Real_ReadConsoleOutputAttribute)(HANDLE a0,
                                                   LPWORD a1,
                                                   DWORD a2,
                                                   COORD a3,
                                                   LPDWORD a4)
    = ReadConsoleOutputAttribute;

BOOL (__stdcall * Real_ReadConsoleOutputCharacterA)(HANDLE a0,
                                                    LPSTR a1,
                                                    DWORD a2,
                                                    COORD a3,
                                                    LPDWORD a4)
    = ReadConsoleOutputCharacterA;

BOOL (__stdcall * Real_ReadConsoleOutputCharacterW)(HANDLE a0,
                                                    LPWSTR a1,
                                                    DWORD a2,
                                                    COORD a3,
                                                    LPDWORD a4)
    = ReadConsoleOutputCharacterW;

BOOL (__stdcall * Real_ReadConsoleOutputW)(HANDLE a0,
                                           PCHAR_INFO a1,
                                           COORD a2,
                                           COORD a3,
                                           PSMALL_RECT a4)
    = ReadConsoleOutputW;

BOOL (__stdcall * Real_ReadConsoleW)(
                                     HANDLE a0,
                                     LPVOID a1,
                                     DWORD a2,
                                     LPDWORD a3,
#ifdef ENABLE_INSERT_MODE
                                     PCONSOLE_READCONSOLE_CONTROL a4
#else
                                     LPVOID a4
#endif
                                    )
    = ReadConsoleW;

BOOL (__stdcall * Real_ReadDirectoryChangesW)(HANDLE a0,
                                              LPVOID a1,
                                              DWORD a2,
                                              BOOL a3,
                                              DWORD a4,
                                              LPDWORD a5,
                                              LPOVERLAPPED a6,
                                              LPOVERLAPPED_COMPLETION_ROUTINE a7)
    = ReadDirectoryChangesW;

BOOL (__stdcall * Real_ReadFile)(HANDLE a0,
                                 LPVOID a1,
                                 DWORD a2,
                                 LPDWORD a3,
                                 LPOVERLAPPED a4)
    = ReadFile;

BOOL (__stdcall * Real_ReadFileEx)(HANDLE a0,
                                   LPVOID a1,
                                   DWORD a2,
                                   LPOVERLAPPED a3,
                                   LPOVERLAPPED_COMPLETION_ROUTINE a4)
    = ReadFileEx;

HRESULT (__stdcall * Real_ReadFmtUserTypeStg)(LPSTORAGE a0,
                                              CLIPFORMAT* a1,
                                              LPOLESTR* a2)
    = ReadFmtUserTypeStg;

BOOL (__stdcall * Real_ReadProcessMemory)(HANDLE a0,
                                          LPCVOID a1,
                                          LPVOID a2,
                                          DWORD_PTR a3,
                                          PDWORD_PTR a4)
    = ReadProcessMemory;

UINT (__stdcall * Real_RealizePalette)(HDC a0)
    = RealizePalette;

BOOL (__stdcall * Real_RectInRegion)(HRGN a0,
                                     CONST RECT* a1)
    = RectInRegion;

BOOL (__stdcall * Real_RectVisible)(HDC a0,
                                    CONST RECT* a1)
    = RectVisible;

BOOL (__stdcall * Real_Rectangle)(HDC a0,
                                  int a1,
                                  int a2,
                                  int a3,
                                  int a4)
    = Rectangle;

BOOL (__stdcall * Real_RedrawWindow)(HWND a0,
                                     CONST RECT* a1,
                                     HRGN a2,
                                     UINT a3)
    = RedrawWindow;

ATOM (__stdcall * Real_RegisterClassA)(CONST WNDCLASSA* a0)
    = RegisterClassA;

ATOM (__stdcall * Real_RegisterClassExA)(CONST WNDCLASSEXA* a0)
    = RegisterClassExA;

ATOM (__stdcall * Real_RegisterClassExW)(CONST WNDCLASSEXW* a0)
    = RegisterClassExW;

ATOM (__stdcall * Real_RegisterClassW)(CONST WNDCLASSW* a0)
    = RegisterClassW;

UINT (__stdcall * Real_RegisterClipboardFormatA)(LPCSTR a0)
    = RegisterClipboardFormatA;

UINT (__stdcall * Real_RegisterClipboardFormatW)(LPCWSTR a0)
    = RegisterClipboardFormatW;

HRESULT (__stdcall * Real_RegisterDragDrop)(HWND a0,
                                            IDropTarget* a1)
    = RegisterDragDrop;

BOOL (__stdcall * Real_RegisterHotKey)(HWND a0,
                                       int a1,
                                       UINT a2,
                                       UINT a3)
    = RegisterHotKey;

UINT (__stdcall * Real_RegisterWindowMessageA)(LPCSTR a0)
    = RegisterWindowMessageA;

UINT (__stdcall * Real_RegisterWindowMessageW)(LPCWSTR a0)
    = RegisterWindowMessageW;

BOOL (__stdcall * Real_ReleaseCapture)(void)
    = ReleaseCapture;

int (__stdcall * Real_ReleaseDC)(HWND a0,
                                 HDC a1)
    = ReleaseDC;

BOOL (__stdcall * Real_ReleaseMutex)(HANDLE a0)
    = ReleaseMutex;

BOOL (__stdcall * Real_ReleaseSemaphore)(HANDLE a0,
                                         LONG a1,
                                         LPLONG a2)
    = ReleaseSemaphore;

void (__stdcall * Real_ReleaseStgMedium)(LPSTGMEDIUM a0)
    = ReleaseStgMedium;

BOOL (__stdcall * Real_RemoveDirectoryA)(LPCSTR a0)
    = RemoveDirectoryA;

BOOL (__stdcall * Real_RemoveDirectoryW)(LPCWSTR a0)
    = RemoveDirectoryW;

BOOL (__stdcall * Real_RemoveFontResourceA)(LPCSTR a0)
    = RemoveFontResourceA;

BOOL (__stdcall * Real_RemoveFontResourceW)(LPCWSTR a0)
    = RemoveFontResourceW;

BOOL (__stdcall * Real_RemoveMenu)(HMENU a0,
                                   UINT a1,
                                   UINT a2)
    = RemoveMenu;

HANDLE (__stdcall * Real_RemovePropA)(HWND a0,
                                      LPCSTR a1)
    = RemovePropA;

HANDLE (__stdcall * Real_RemovePropW)(HWND a0,
                                      LPCWSTR a1)
    = RemovePropW;

BOOL (__stdcall * Real_ReplyMessage)(LRESULT a0)
    = ReplyMessage;

HDC (__stdcall * Real_ResetDCA)(HDC a0,
                                CONST DEVMODEA* a1)
    = ResetDCA;

HDC (__stdcall * Real_ResetDCW)(HDC a0,
                                CONST DEVMODEW* a1)
    = ResetDCW;

BOOL (__stdcall * Real_ResetEvent)(HANDLE a0)
    = ResetEvent;

BOOL (__stdcall * Real_ResizePalette)(HPALETTE a0,
                                      UINT a1)
    = ResizePalette;

BOOL (__stdcall * Real_RestoreDC)(HDC a0,
                                  int a1)
    = RestoreDC;

DWORD (__stdcall * Real_ResumeThread)(HANDLE a0)
    = ResumeThread;

LPARAM (__stdcall * Real_ReuseDDElParam)(LPARAM a0,
                                         UINT a1,
                                         UINT a2,
                                         UINT_PTR a3,
                                         UINT_PTR a4)
    = ReuseDDElParam;

HRESULT (__stdcall * Real_RevokeDragDrop)(HWND a0)
    = RevokeDragDrop;

BOOL (__stdcall * Real_RoundRect)(HDC a0,
                                  int a1,
                                  int a2,
                                  int a3,
                                  int a4,
                                  int a5,
                                  int a6)
    = RoundRect;

int (__stdcall * Real_SaveDC)(HDC a0)
    = SaveDC;

BOOL (__stdcall * Real_ScaleViewportExtEx)(HDC a0,
                                           int a1,
                                           int a2,
                                           int a3,
                                           int a4,
                                           SIZE* a5)
    = ScaleViewportExtEx;

BOOL (__stdcall * Real_ScaleWindowExtEx)(HDC a0,
                                         int a1,
                                         int a2,
                                         int a3,
                                         int a4,
                                         SIZE* a5)
    = ScaleWindowExtEx;

BOOL (__stdcall * Real_ScreenToClient)(HWND a0,
                                       POINT* a1)
    = ScreenToClient;

BOOL (__stdcall * Real_ScrollConsoleScreenBufferA)(HANDLE a0,
                                                   CONST SMALL_RECT* a1,
                                                   CONST SMALL_RECT* a2,
                                                   COORD a3,
                                                   CONST CHAR_INFO* a4)
    = ScrollConsoleScreenBufferA;

BOOL (__stdcall * Real_ScrollConsoleScreenBufferW)(HANDLE a0,
                                                   CONST SMALL_RECT* a1,
                                                   CONST SMALL_RECT* a2,
                                                   COORD a3,
                                                   CONST CHAR_INFO* a4)
    = ScrollConsoleScreenBufferW;

BOOL (__stdcall * Real_ScrollDC)(HDC a0,
                                 int a1,
                                 int a2,
                                 CONST RECT* a3,
                                 CONST RECT* a4,
                                 HRGN a5,
                                 LPRECT a6)
    = ScrollDC;

BOOL (__stdcall * Real_ScrollWindow)(HWND a0,
                                     int a1,
                                     int a2,
                                     CONST RECT* a3,
                                     CONST RECT* a4)
    = ScrollWindow;

int (__stdcall * Real_ScrollWindowEx)(HWND a0,
                                      int a1,
                                      int a2,
                                      CONST RECT* a3,
                                      CONST RECT* a4,
                                      HRGN a5,
                                      LPRECT a6,
                                      UINT a7)
    = ScrollWindowEx;

DWORD (__stdcall * Real_SearchPathA)(LPCSTR a0,
                                     LPCSTR a1,
                                     LPCSTR a2,
                                     DWORD a3,
                                     LPSTR a4,
                                     LPSTR* a5)
    = SearchPathA;

DWORD (__stdcall * Real_SearchPathW)(LPCWSTR a0,
                                     LPCWSTR a1,
                                     LPCWSTR a2,
                                     DWORD a3,
                                     LPWSTR a4,
                                     LPWSTR* a5)
    = SearchPathW;

BOOL (__stdcall * Real_SelectClipPath)(HDC a0,
                                       int a1)
    = SelectClipPath;

int (__stdcall * Real_SelectClipRgn)(HDC a0,
                                     HRGN a1)
    = SelectClipRgn;

HGDIOBJ (__stdcall * Real_SelectObject)(HDC a0,
                                        HGDIOBJ a1)
    = SelectObject;

HPALETTE (__stdcall * Real_SelectPalette)(HDC a0,
                                          HPALETTE a1,
                                          BOOL a2)
    = SelectPalette;

LRESULT (__stdcall * Real_SendDlgItemMessageA)(HWND a0,
                                               int a1,
                                               UINT a2,
                                               WPARAM a3,
                                               LPARAM a4)
    = SendDlgItemMessageA;

LRESULT (__stdcall * Real_SendDlgItemMessageW)(HWND a0,
                                               int a1,
                                               UINT a2,
                                               WPARAM a3,
                                               LPARAM a4)
    = SendDlgItemMessageW;

LRESULT (__stdcall * Real_SendMessageA)(HWND a0,
                                        UINT a1,
                                        WPARAM a2,
                                        LPARAM a3)
    = SendMessageA;

BOOL (__stdcall * Real_SendMessageCallbackA)(HWND a0,
                                             UINT a1,
                                             WPARAM a2,
                                             LPARAM a3,
                                             SENDASYNCPROC a4,
                                             ULONG_PTR a5)
    = SendMessageCallbackA;

BOOL (__stdcall * Real_SendMessageCallbackW)(HWND a0,
                                             UINT a1,
                                             WPARAM a2,
                                             LPARAM a3,
                                             SENDASYNCPROC a4,
                                             ULONG_PTR a5)
    = SendMessageCallbackW;

LRESULT (__stdcall * Real_SendMessageTimeoutA)(HWND a0,
                                               UINT a1,
                                               WPARAM a2,
                                               LPARAM a3,
                                               UINT a4,
                                               UINT a5,
                                               PULONG_PTR a6)
    = SendMessageTimeoutA;

LRESULT (__stdcall * Real_SendMessageTimeoutW)(HWND a0,
                                               UINT a1,
                                               WPARAM a2,
                                               LPARAM a3,
                                               UINT a4,
                                               UINT a5,
                                               PULONG_PTR a6)
    = SendMessageTimeoutW;

LRESULT (__stdcall * Real_SendMessageW)(HWND a0,
                                        UINT a1,
                                        WPARAM a2,
                                        LPARAM a3)
    = SendMessageW;

BOOL (__stdcall * Real_SendNotifyMessageA)(HWND a0,
                                           UINT a1,
                                           WPARAM a2,
                                           LPARAM a3)
    = SendNotifyMessageA;

BOOL (__stdcall * Real_SendNotifyMessageW)(HWND a0,
                                           UINT a1,
                                           WPARAM a2,
                                           LPARAM a3)
    = SendNotifyMessageW;

int (__stdcall * Real_SetAbortProc)(HDC a0,
                                    ABORTPROC a1)
    = SetAbortProc;

HWND (__stdcall * Real_SetActiveWindow)(HWND a0)
    = SetActiveWindow;

int (__stdcall * Real_SetArcDirection)(HDC a0,
                                       int a1)
    = SetArcDirection;

LONG (__stdcall * Real_SetBitmapBits)(HBITMAP a0,
                                      DWORD a1,
                                      CONST void* a2)
    = SetBitmapBits;

BOOL (__stdcall * Real_SetBitmapDimensionEx)(HBITMAP a0,
                                             int a1,
                                             int a2,
                                             SIZE* a3)
    = SetBitmapDimensionEx;

COLORREF (__stdcall * Real_SetBkColor)(HDC a0,
                                       COLORREF a1)
    = SetBkColor;

int (__stdcall * Real_SetBkMode)(HDC a0,
                                 int a1)
    = SetBkMode;

UINT (__stdcall * Real_SetBoundsRect)(HDC a0,
                                      CONST RECT* a1,
                                      UINT a2)
    = SetBoundsRect;

BOOL (__stdcall * Real_SetBrushOrgEx)(HDC a0,
                                      int a1,
                                      int a2,
                                      POINT* a3)
    = SetBrushOrgEx;

HWND (__stdcall * Real_SetCapture)(HWND a0)
    = SetCapture;

BOOL (__stdcall * Real_SetCaretBlinkTime)(UINT a0)
    = SetCaretBlinkTime;

BOOL (__stdcall * Real_SetCaretPos)(int a0,
                                    int a1)
    = SetCaretPos;

DWORD (__stdcall * Real_SetClassLongA)(HWND a0,
                                       int a1,
                                       LONG a2)
    = SetClassLongA;

DWORD (__stdcall * Real_SetClassLongW)(HWND a0,
                                       int a1,
                                       LONG a2)
    = SetClassLongW;

WORD (__stdcall * Real_SetClassWord)(HWND a0,
                                     int a1,
                                     WORD a2)
    = SetClassWord;

HANDLE (__stdcall * Real_SetClipboardData)(UINT a0,
                                           HANDLE a1)
    = SetClipboardData;

HWND (__stdcall * Real_SetClipboardViewer)(HWND a0)
    = SetClipboardViewer;

BOOL (__stdcall * Real_SetColorAdjustment)(HDC a0,
                                           CONST COLORADJUSTMENT* a1)
    = SetColorAdjustment;

HCOLORSPACE (__stdcall * Real_SetColorSpace)(HDC a0,
                                             HCOLORSPACE a1)
    = SetColorSpace;

BOOL (__stdcall * Real_SetCommBreak)(HANDLE a0)
    = SetCommBreak;

BOOL (__stdcall * Real_SetCommConfig)(HANDLE a0,
                                      LPCOMMCONFIG a1,
                                      DWORD a2)
    = SetCommConfig;

BOOL (__stdcall * Real_SetCommMask)(HANDLE a0,
                                    DWORD a1)
    = SetCommMask;

BOOL (__stdcall * Real_SetCommState)(HANDLE a0,
                                     LPDCB a1)
    = SetCommState;

BOOL (__stdcall * Real_SetCommTimeouts)(HANDLE a0,
                                        LPCOMMTIMEOUTS a1)
    = SetCommTimeouts;

BOOL (__stdcall * Real_SetComputerNameA)(LPCSTR a0)
    = SetComputerNameA;

BOOL (__stdcall * Real_SetComputerNameW)(LPCWSTR a0)
    = SetComputerNameW;

BOOL (__stdcall * Real_SetConsoleActiveScreenBuffer)(HANDLE a0)
    = SetConsoleActiveScreenBuffer;

BOOL (__stdcall * Real_SetConsoleCP)(UINT a0)
    = SetConsoleCP;

BOOL (__stdcall * Real_SetConsoleCtrlHandler)(PHANDLER_ROUTINE a0,
                                              BOOL a1)
    = SetConsoleCtrlHandler;

BOOL (__stdcall * Real_SetConsoleCursorInfo)(HANDLE a0,
                                             CONST CONSOLE_CURSOR_INFO* a1)
    = SetConsoleCursorInfo;

BOOL (__stdcall * Real_SetConsoleCursorPosition)(HANDLE a0,
                                                 COORD a1)
    = SetConsoleCursorPosition;

BOOL (__stdcall * Real_SetConsoleMode)(HANDLE a0,
                                       DWORD a1)
    = SetConsoleMode;

BOOL (__stdcall * Real_SetConsoleOutputCP)(UINT a0)
    = SetConsoleOutputCP;

BOOL (__stdcall * Real_SetConsoleScreenBufferSize)(HANDLE a0,
                                                   COORD a1)
    = SetConsoleScreenBufferSize;

BOOL (__stdcall * Real_SetConsoleTextAttribute)(HANDLE a0,
                                                WORD a1)
    = SetConsoleTextAttribute;

BOOL (__stdcall * Real_SetConsoleTitleA)(LPCSTR a0)
    = SetConsoleTitleA;

BOOL (__stdcall * Real_SetConsoleTitleW)(LPCWSTR a0)
    = SetConsoleTitleW;

BOOL (__stdcall * Real_SetConsoleWindowInfo)(HANDLE a0,
                                             BOOL a1,
                                             CONST SMALL_RECT* a2)
    = SetConsoleWindowInfo;

HRESULT (__stdcall * Real_SetConvertStg)(LPSTORAGE a0,
                                         BOOL a1)
    = SetConvertStg;

BOOL (__stdcall * Real_SetCurrentDirectoryA)(LPCSTR a0)
    = SetCurrentDirectoryA;

BOOL (__stdcall * Real_SetCurrentDirectoryW)(LPCWSTR a0)
    = SetCurrentDirectoryW;

HCURSOR (__stdcall * Real_SetCursor)(HCURSOR a0)
    = SetCursor;

BOOL (__stdcall * Real_SetCursorPos)(int a0,
                                     int a1)
    = SetCursorPos;

UINT (__stdcall * Real_SetDIBColorTable)(HDC a0,
                                         UINT a1,
                                         UINT a2,
                                         CONST RGBQUAD* a3)
    = SetDIBColorTable;

int (__stdcall * Real_SetDIBits)(HDC a0,
                                 HBITMAP a1,
                                 UINT a2,
                                 UINT a3,
                                 CONST void* a4,
                                 CONST BITMAPINFO* a5,
                                 UINT a6)
    = SetDIBits;

int (__stdcall * Real_SetDIBitsToDevice)(HDC a0,
                                         int a1,
                                         int a2,
                                         DWORD a3,
                                         DWORD a4,
                                         int a5,
                                         int a6,
                                         UINT a7,
                                         UINT a8,
                                         CONST void* a9,
                                         CONST BITMAPINFO* a10,
                                         UINT a11)
    = SetDIBitsToDevice;

BOOL (__stdcall * Real_SetDefaultCommConfigA)(LPCSTR a0,
                                              LPCOMMCONFIG a1,
                                              DWORD a2)
    = SetDefaultCommConfigA;

BOOL (__stdcall * Real_SetDefaultCommConfigW)(LPCWSTR a0,
                                              LPCOMMCONFIG a1,
                                              DWORD a2)
    = SetDefaultCommConfigW;

BOOL (__stdcall * Real_SetDeviceGammaRamp)(HDC a0,
                                           LPVOID a1)
    = SetDeviceGammaRamp;

BOOL (__stdcall * Real_SetDlgItemInt)(HWND a0,
                                      int a1,
                                      UINT a2,
                                      BOOL a3)
    = SetDlgItemInt;

BOOL (__stdcall * Real_SetDlgItemTextA)(HWND a0,
                                        int a1,
                                        LPCSTR a2)
    = SetDlgItemTextA;

BOOL (__stdcall * Real_SetDlgItemTextW)(HWND a0,
                                        int a1,
                                        LPCWSTR a2)
    = SetDlgItemTextW;

BOOL (__stdcall * Real_SetDoubleClickTime)(UINT a0)
    = SetDoubleClickTime;

BOOL (__stdcall * Real_SetEndOfFile)(HANDLE a0)
    = SetEndOfFile;

HENHMETAFILE (__stdcall * Real_SetEnhMetaFileBits)(UINT a0,
                                                   CONST BYTE* a1)
    = SetEnhMetaFileBits;

BOOL (__stdcall * Real_SetEnvironmentVariableA)(LPCSTR a0,
                                                LPCSTR a1)
    = SetEnvironmentVariableA;

BOOL (__stdcall * Real_SetEnvironmentVariableW)(LPCWSTR a0,
                                                LPCWSTR a1)
    = SetEnvironmentVariableW;

UINT (__stdcall * Real_SetErrorMode)(UINT a0)
    = SetErrorMode;

BOOL (__stdcall * Real_SetEvent)(HANDLE a0)
    = SetEvent;

void (__stdcall * Real_SetFileApisToANSI)(void)
    = SetFileApisToANSI;

void (__stdcall * Real_SetFileApisToOEM)(void)
    = SetFileApisToOEM;

BOOL (__stdcall * Real_SetFileAttributesA)(LPCSTR a0,
                                           DWORD a1)
    = SetFileAttributesA;

BOOL (__stdcall * Real_SetFileAttributesW)(LPCWSTR a0,
                                           DWORD a1)
    = SetFileAttributesW;

DWORD (__stdcall * Real_SetFilePointer)(HANDLE a0,
                                        LONG a1,
                                        PLONG a2,
                                        DWORD a3)
    = SetFilePointer;

BOOL (__stdcall * Real_SetFileTime)(HANDLE a0,
                                    CONST FILETIME* a1,
                                    CONST FILETIME* a2,
                                    CONST FILETIME* a3)
    = SetFileTime;

HWND (__stdcall * Real_SetFocus)(HWND a0)
    = SetFocus;

BOOL (__stdcall * Real_SetForegroundWindow)(HWND a0)
    = SetForegroundWindow;

int (__stdcall * Real_SetGraphicsMode)(HDC a0,
                                       int a1)
    = SetGraphicsMode;

UINT (__stdcall * Real_SetHandleCount)(UINT a0)
    = SetHandleCount;

BOOL (__stdcall * Real_SetHandleInformation)(HANDLE a0,
                                             DWORD a1,
                                             DWORD a2)
    = SetHandleInformation;

int (__stdcall * Real_SetICMMode)(HDC a0,
                                  int a1)
    = SetICMMode;

BOOL (__stdcall * Real_SetICMProfileA)(HDC a0,
                                       LPSTR a1)
    = SetICMProfileA;

BOOL (__stdcall * Real_SetICMProfileW)(HDC a0,
                                       LPWSTR a1)
    = SetICMProfileW;

BOOL (__stdcall * Real_SetKeyboardState)(LPBYTE a0)
    = SetKeyboardState;

BOOL (__stdcall * Real_SetLocalTime)(CONST SYSTEMTIME* a0)
    = SetLocalTime;

BOOL (__stdcall * Real_SetLocaleInfoA)(LCID a0,
                                       LCTYPE a1,
                                       LPCSTR a2)
    = SetLocaleInfoA;

BOOL (__stdcall * Real_SetLocaleInfoW)(LCID a0,
                                       LCTYPE a1,
                                       LPCWSTR a2)
    = SetLocaleInfoW;

BOOL (__stdcall * Real_SetMailslotInfo)(HANDLE a0,
                                        DWORD a1)
    = SetMailslotInfo;

int (__stdcall * Real_SetMapMode)(HDC a0,
                                  int a1)
    = SetMapMode;

DWORD (__stdcall * Real_SetMapperFlags)(HDC a0,
                                        DWORD a1)
    = SetMapperFlags;

BOOL (__stdcall * Real_SetMenu)(HWND a0,
                                HMENU a1)
    = SetMenu;

BOOL (__stdcall * Real_SetMenuContextHelpId)(HMENU a0,
                                             DWORD a1)
    = SetMenuContextHelpId;

BOOL (__stdcall * Real_SetMenuDefaultItem)(HMENU a0,
                                           UINT a1,
                                           UINT a2)
    = SetMenuDefaultItem;

BOOL (__stdcall * Real_SetMenuItemBitmaps)(HMENU a0,
                                           UINT a1,
                                           UINT a2,
                                           HBITMAP a3,
                                           HBITMAP a4)
    = SetMenuItemBitmaps;

BOOL (__stdcall * Real_SetMenuItemInfoA)(HMENU a0,
                                         UINT a1,
                                         BOOL a2,
                                         CONST MENUITEMINFOA* a3)
    = SetMenuItemInfoA;

BOOL (__stdcall * Real_SetMenuItemInfoW)(HMENU a0,
                                         UINT a1,
                                         BOOL a2,
                                         CONST MENUITEMINFOW* a3)
    = SetMenuItemInfoW;

LPARAM (__stdcall * Real_SetMessageExtraInfo)(LPARAM a0)
    = SetMessageExtraInfo;

BOOL (__stdcall * Real_SetMessageQueue)(int a0)
    = SetMessageQueue;

HMETAFILE (__stdcall * Real_SetMetaFileBitsEx)(UINT a0,
                                               CONST BYTE* a1)
    = SetMetaFileBitsEx;

int (__stdcall * Real_SetMetaRgn)(HDC a0)
    = SetMetaRgn;

BOOL (__stdcall * Real_SetMiterLimit)(HDC a0,
                                      FLOAT a1,
                                      PFLOAT a2)
    = SetMiterLimit;

BOOL (__stdcall * Real_SetNamedPipeHandleState)(HANDLE a0,
                                                LPDWORD a1,
                                                LPDWORD a2,
                                                LPDWORD a3)
    = SetNamedPipeHandleState;

UINT (__stdcall * Real_SetPaletteEntries)(HPALETTE a0,
                                          UINT a1,
                                          UINT a2,
                                          CONST PALETTEENTRY* a3)
    = SetPaletteEntries;

HWND (__stdcall * Real_SetParent)(HWND a0,
                                  HWND a1)
    = SetParent;

COLORREF (__stdcall * Real_SetPixel)(HDC a0,
                                     int a1,
                                     int a2,
                                     COLORREF a3)
    = SetPixel;

BOOL (__stdcall * Real_SetPixelFormat)(HDC a0,
                                       int a1,
                                       CONST PIXELFORMATDESCRIPTOR* a2)
    = SetPixelFormat;

BOOL (__stdcall * Real_SetPixelV)(HDC a0,
                                  int a1,
                                  int a2,
                                  COLORREF a3)
    = SetPixelV;

int (__stdcall * Real_SetPolyFillMode)(HDC a0,
                                       int a1)
    = SetPolyFillMode;

BOOL (__stdcall * Real_SetPriorityClass)(HANDLE a0,
                                         DWORD a1)
    = SetPriorityClass;

BOOL (__stdcall * Real_SetProcessAffinityMask)(HANDLE a0,
                                               DWORD_PTR a1)
    = SetProcessAffinityMask;

BOOL (__stdcall * Real_SetProcessShutdownParameters)(DWORD a0,
                                                     DWORD a1)
    = SetProcessShutdownParameters;

BOOL (__stdcall * Real_SetProcessWindowStation)(HWINSTA a0)
    = SetProcessWindowStation;

BOOL (__stdcall * Real_SetProcessWorkingSetSize)(HANDLE a0,
                                                 SIZE_T a1,
                                                 SIZE_T a2)
    = SetProcessWorkingSetSize;

BOOL (__stdcall * Real_SetPropA)(HWND a0,
                                 LPCSTR a1,
                                 HANDLE a2)
    = SetPropA;

BOOL (__stdcall * Real_SetPropW)(HWND a0,
                                 LPCWSTR a1,
                                 HANDLE a2)
    = SetPropW;

int (__stdcall * Real_SetROP2)(HDC a0,
                               int a1)
    = SetROP2;

BOOL (__stdcall * Real_SetRect)(LPRECT a0,
                                int a1,
                                int a2,
                                int a3,
                                int a4)
    = SetRect;

BOOL (__stdcall * Real_SetRectEmpty)(LPRECT a0)
    = SetRectEmpty;

BOOL (__stdcall * Real_SetRectRgn)(HRGN a0,
                                   int a1,
                                   int a2,
                                   int a3,
                                   int a4)
    = SetRectRgn;

int (__stdcall * Real_SetScrollInfo)(HWND a0,
                                     int a1,
                                     LPCSCROLLINFO a2,
                                     BOOL a3)
    = SetScrollInfo;

int (__stdcall * Real_SetScrollPos)(HWND a0,
                                    int a1,
                                    int a2,
                                    BOOL a3)
    = SetScrollPos;

BOOL (__stdcall * Real_SetScrollRange)(HWND a0,
                                       int a1,
                                       int a2,
                                       int a3,
                                       BOOL a4)
    = SetScrollRange;

BOOL (__stdcall * Real_SetStdHandle)(DWORD a0,
                                     HANDLE a1)
    = SetStdHandle;

int (__stdcall * Real_SetStretchBltMode)(HDC a0,
                                         int a1)
    = SetStretchBltMode;

BOOL (__stdcall * Real_SetSysColors)(int a0,
                                     CONST INT* a1,
                                     CONST COLORREF* a2)
    = SetSysColors;

BOOL (__stdcall * Real_SetSystemCursor)(HCURSOR a0,
                                        DWORD a1)
    = SetSystemCursor;

UINT (__stdcall * Real_SetSystemPaletteUse)(HDC a0,
                                            UINT a1)
    = SetSystemPaletteUse;

BOOL (__stdcall * Real_SetSystemPowerState)(BOOL a0,
                                            BOOL a1)
    = SetSystemPowerState;

BOOL (__stdcall * Real_SetSystemTime)(CONST SYSTEMTIME* a0)
    = SetSystemTime;

BOOL (__stdcall * Real_SetSystemTimeAdjustment)(DWORD a0,
                                                BOOL a1)
    = SetSystemTimeAdjustment;

DWORD (__stdcall * Real_SetTapeParameters)(HANDLE a0,
                                           DWORD a1,
                                           LPVOID a2)
    = SetTapeParameters;

DWORD (__stdcall * Real_SetTapePosition)(HANDLE a0,
                                         DWORD a1,
                                         DWORD a2,
                                         DWORD a3,
                                         DWORD a4,
                                         BOOL a5)
    = SetTapePosition;

UINT (__stdcall * Real_SetTextAlign)(HDC a0,
                                     UINT a1)
    = SetTextAlign;

int (__stdcall * Real_SetTextCharacterExtra)(HDC a0,
                                             int a1)
    = SetTextCharacterExtra;

COLORREF (__stdcall * Real_SetTextColor)(HDC a0,
                                         COLORREF a1)
    = SetTextColor;

BOOL (__stdcall * Real_SetTextJustification)(HDC a0,
                                             int a1,
                                             int a2)
    = SetTextJustification;

DWORD_PTR (__stdcall * Real_SetThreadAffinityMask)(HANDLE a0,
                                               DWORD_PTR a1)
    = SetThreadAffinityMask;

BOOL (__stdcall * Real_SetThreadContext)(HANDLE a0,
                                         CONST CONTEXT* a1)
    = SetThreadContext;

BOOL (__stdcall * Real_SetThreadDesktop)(HDESK a0)
    = SetThreadDesktop;

DWORD (__stdcall * Real_SetThreadIdealProcessor)(HANDLE a0,
                                                 DWORD a1)
    = SetThreadIdealProcessor;

#if(WINVER >= 0x0500)
BOOL (__stdcall * Real_SetThreadLocale)(LCID a0)
    = SetThreadLocale;
#endif // (WINVER >= 0x0500)

BOOL (__stdcall * Real_SetThreadPriority)(HANDLE a0,
                                          int a1)
    = SetThreadPriority;

BOOL (__stdcall * Real_SetThreadPriorityBoost)(HANDLE a0,
                                               BOOL a1)
    = SetThreadPriorityBoost;

BOOL (__stdcall * Real_SetTimeZoneInformation)(CONST TIME_ZONE_INFORMATION* a0)
    = SetTimeZoneInformation;

UINT_PTR (__stdcall * Real_SetTimer)(HWND a0,
                                     UINT_PTR a1,
                                     UINT a2,
                                     TIMERPROC a3)
    = SetTimer;

LPTOP_LEVEL_EXCEPTION_FILTER (__stdcall * Real_SetUnhandledExceptionFilter)(LPTOP_LEVEL_EXCEPTION_FILTER a0)
    = SetUnhandledExceptionFilter;

BOOL (__stdcall * Real_SetUserObjectInformationA)(HANDLE a0,
                                                  int a1,
                                                  PVOID a2,
                                                  DWORD a3)
    = SetUserObjectInformationA;

BOOL (__stdcall * Real_SetUserObjectInformationW)(HANDLE a0,
                                                  int a1,
                                                  PVOID a2,
                                                  DWORD a3)
    = SetUserObjectInformationW;

BOOL (__stdcall * Real_SetUserObjectSecurity)(HANDLE a0,
                                              PSECURITY_INFORMATION a1,
                                              PSECURITY_DESCRIPTOR a2)
    = SetUserObjectSecurity;

BOOL (__stdcall * Real_SetViewportExtEx)(HDC a0,
                                         int a1,
                                         int a2,
                                         SIZE* a3)
    = SetViewportExtEx;

BOOL (__stdcall * Real_SetViewportOrgEx)(HDC a0,
                                         int a1,
                                         int a2,
                                         POINT* a3)
    = SetViewportOrgEx;

BOOL (__stdcall * Real_SetVolumeLabelA)(LPCSTR a0,
                                        LPCSTR a1)
    = SetVolumeLabelA;

BOOL (__stdcall * Real_SetVolumeLabelW)(LPCWSTR a0,
                                        LPCWSTR a1)
    = SetVolumeLabelW;

BOOL (__stdcall * Real_SetWaitableTimer)(HANDLE a0,
                                         CONST LARGE_INTEGER* a1,
                                         LONG a2,
                                         PTIMERAPCROUTINE a3,
                                         LPVOID a4,
                                         BOOL a5)
    = SetWaitableTimer;

HENHMETAFILE (__stdcall * Real_SetWinMetaFileBits)(UINT a0,
                                                   CONST BYTE* a1,
                                                   HDC a2,
                                                   CONST METAFILEPICT* a3)
    = SetWinMetaFileBits;

BOOL (__stdcall * Real_SetWindowContextHelpId)(HWND a0,
                                               DWORD a1)
    = SetWindowContextHelpId;

BOOL (__stdcall * Real_SetWindowExtEx)(HDC a0,
                                       int a1,
                                       int a2,
                                       SIZE* a3)
    = SetWindowExtEx;

LONG (__stdcall * Real_SetWindowLongA)(HWND a0,
                                       int a1,
                                       LONG a2)
    = SetWindowLongA;

LONG (__stdcall * Real_SetWindowLongW)(HWND a0,
                                       int a1,
                                       LONG a2)
    = SetWindowLongW;

BOOL (__stdcall * Real_SetWindowOrgEx)(HDC a0,
                                       int a1,
                                       int a2,
                                       POINT* a3)
    = SetWindowOrgEx;

BOOL (__stdcall * Real_SetWindowPlacement)(HWND a0,
                                           CONST WINDOWPLACEMENT* a1)
    = SetWindowPlacement;

BOOL (__stdcall * Real_SetWindowPos)(HWND a0,
                                     HWND a1,
                                     int a2,
                                     int a3,
                                     int a4,
                                     int a5,
                                     UINT a6)
    = SetWindowPos;

int (__stdcall * Real_SetWindowRgn)(HWND a0,
                                    HRGN a1,
                                    BOOL a2)
    = SetWindowRgn;

BOOL (__stdcall * Real_SetWindowTextA)(HWND a0,
                                       LPCSTR a1)
    = SetWindowTextA;

BOOL (__stdcall * Real_SetWindowTextW)(HWND a0,
                                       LPCWSTR a1)
    = SetWindowTextW;

WORD (__stdcall * Real_SetWindowWord)(HWND a0,
                                      int a1,
                                      WORD a2)
    = SetWindowWord;

HHOOK (__stdcall * Real_SetWindowsHookA)(int a0,
                                         HOOKPROC a1)
    = SetWindowsHookA;

HHOOK (__stdcall * Real_SetWindowsHookExA)(int a0,
                                           HOOKPROC a1,
                                           HINSTANCE a2,
                                           DWORD a3)
    = SetWindowsHookExA;

HHOOK (__stdcall * Real_SetWindowsHookExW)(int a0,
                                           HOOKPROC a1,
                                           HINSTANCE a2,
                                           DWORD a3)
    = SetWindowsHookExW;

HHOOK (__stdcall * Real_SetWindowsHookW)(int a0,
                                         HOOKPROC a1)
    = SetWindowsHookW;

BOOL (__stdcall * Real_SetWorldTransform)(HDC a0,
                                          CONST XFORM* a1)
    = SetWorldTransform;

BOOL (__stdcall * Real_SetupComm)(HANDLE a0,
                                  DWORD a1,
                                  DWORD a2)
    = SetupComm;

BOOL (__stdcall * Real_ShowCaret)(HWND a0)
    = ShowCaret;

int (__stdcall * Real_ShowCursor)(BOOL a0)
    = ShowCursor;

BOOL (__stdcall * Real_ShowOwnedPopups)(HWND a0,
                                        BOOL a1)
    = ShowOwnedPopups;

BOOL (__stdcall * Real_ShowScrollBar)(HWND a0,
                                      int a1,
                                      BOOL a2)
    = ShowScrollBar;

BOOL (__stdcall * Real_ShowWindow)(HWND a0,
                                   int a1)
    = ShowWindow;

BOOL (__stdcall * Real_ShowWindowAsync)(HWND a0,
                                        int a1)
    = ShowWindowAsync;

DWORD (__stdcall * Real_SignalObjectAndWait)(HANDLE a0,
                                             HANDLE a1,
                                             DWORD a2,
                                             BOOL a3)
    = SignalObjectAndWait;

DWORD (__stdcall * Real_SizeofResource)(HMODULE a0,
                                        HRSRC a1)
    = SizeofResource;

DWORD (__stdcall * Real_SleepEx)(DWORD a0,
                                 BOOL a1)
    = SleepEx;

int (__stdcall * Real_StartDocA)(HDC a0,
                                 CONST DOCINFOA* a1)
    = StartDocA;

int (__stdcall * Real_StartDocW)(HDC a0,
                                 CONST DOCINFOW* a1)
    = StartDocW;

int (__stdcall * Real_StartPage)(HDC a0)
    = StartPage;

HRESULT (__stdcall * Real_StgCreateDocfile)(CONST OLECHAR* a0,
                                            DWORD a1,
                                            DWORD a2,
                                            IStorage** a3)
    = StgCreateDocfile;

HRESULT (__stdcall * Real_StgCreateDocfileOnILockBytes)(ILockBytes* a0,
                                                        DWORD a1,
                                                        DWORD a2,
                                                        IStorage** a3)
    = StgCreateDocfileOnILockBytes;

HRESULT (__stdcall * Real_StgCreatePropSetStg)(IStorage* a0,
                                               DWORD a1,
                                               IPropertySetStorage** a2)
    = StgCreatePropSetStg;

HRESULT (__stdcall * Real_StgCreatePropStg)(IUnknown* a0,
                                            CONST IID& a1,
                                            CONST CLSID* a2,
                                            DWORD a3,
                                            DWORD a4,
                                            IPropertyStorage** a5)
    = StgCreatePropStg;

#if _MSC_VER < 1300
HRESULT (__stdcall * Real_StgCreateStorageEx)(CONST WCHAR* a0,
                                              DWORD a1,
                                              DWORD a2,
                                              DWORD a3,
                                              void* a4,
                                              void* a5,
                                              CONST IID& a6,
                                              void** a7)
    = StgCreateStorageEx;
#else
HRESULT (__stdcall * Real_StgCreateStorageEx)(CONST WCHAR* a0,
                                              DWORD a1,
                                              DWORD a2,
                                              DWORD a3,
                                              STGOPTIONS* a4,
                                              void* a5,
                                              CONST IID& a6,
                                              void** a7)
    = StgCreateStorageEx;
#endif

HRESULT (__stdcall * Real_StgGetIFillLockBytesOnFile)(CONST OLECHAR* a0,
                                                      IFillLockBytes** a1)
    = StgGetIFillLockBytesOnFile;

HRESULT (__stdcall * Real_StgGetIFillLockBytesOnILockBytes)(ILockBytes* a0,
                                                            IFillLockBytes** a1)
    = StgGetIFillLockBytesOnILockBytes;

HRESULT (__stdcall * Real_StgIsStorageFile)(CONST OLECHAR* a0)
    = StgIsStorageFile;

HRESULT (__stdcall * Real_StgIsStorageILockBytes)(ILockBytes* a0)
    = StgIsStorageILockBytes;

HRESULT (__stdcall * Real_StgOpenAsyncDocfileOnIFillLockBytes)(IFillLockBytes* a0,
                                                               DWORD a1,
                                                               DWORD a2,
                                                               IStorage** a3)
    = StgOpenAsyncDocfileOnIFillLockBytes;

HRESULT (__stdcall * Real_StgOpenPropStg)(IUnknown* a0,
                                          CONST IID& a1,
                                          DWORD a2,
                                          DWORD a3,
                                          IPropertyStorage** a4)
    = StgOpenPropStg;

HRESULT (__stdcall * Real_StgOpenStorage)(CONST OLECHAR* a0,
                                          IStorage* a1,
                                          DWORD a2,
                                          SNB a3,
                                          DWORD a4,
                                          IStorage** a5)
    = StgOpenStorage;

#if _MSC_VER < 1300
HRESULT (__stdcall * Real_StgOpenStorageEx)(CONST WCHAR* a0,
                                            DWORD a1,
                                            DWORD a2,
                                            DWORD a3,
                                            void* a4,
                                            void* a5,
                                            CONST IID& a6,
                                            void** a7)
    = StgOpenStorageEx;
#else
HRESULT (__stdcall * Real_StgOpenStorageEx)(CONST WCHAR* a0,
                                            DWORD a1,
                                            DWORD a2,
                                            DWORD a3,
                                            STGOPTIONS* a4,
                                            void* a5,
                                            CONST IID& a6,
                                            void** a7)
    = StgOpenStorageEx;
#endif

HRESULT (__stdcall * Real_StgOpenStorageOnILockBytes)(ILockBytes* a0,
                                                      IStorage* a1,
                                                      DWORD a2,
                                                      SNB a3,
                                                      DWORD a4,
                                                      IStorage** a5)
    = StgOpenStorageOnILockBytes;

HRESULT (__stdcall * Real_StgSetTimes)(CONST OLECHAR* a0,
                                       CONST FILETIME* a1,
                                       CONST FILETIME* a2,
                                       CONST FILETIME* a3)
    = StgSetTimes;

BOOL (__stdcall * Real_StretchBlt)(HDC a0,
                                   int a1,
                                   int a2,
                                   int a3,
                                   int a4,
                                   HDC a5,
                                   int a6,
                                   int a7,
                                   int a8,
                                   int a9,
                                   DWORD a10)
    = StretchBlt;

int (__stdcall * Real_StretchDIBits)(HDC a0,
                                     int a1,
                                     int a2,
                                     int a3,
                                     int a4,
                                     int a5,
                                     int a6,
                                     int a7,
                                     int a8,
                                     CONST void* a9,
                                     CONST BITMAPINFO* a10,
                                     UINT a11,
                                     DWORD a12)
    = StretchDIBits;

HRESULT (__stdcall * Real_StringFromCLSID)(CONST IID& a0,
                                           LPOLESTR* a1)
    = StringFromCLSID;

int (__stdcall * Real_StringFromGUID2)(CONST GUID& a0,
                                       LPOLESTR a1,
                                       int a2)
    = StringFromGUID2;

HRESULT (__stdcall * Real_StringFromIID)(CONST IID& a0,
                                         LPOLESTR* a1)
    = StringFromIID;

BOOL (__stdcall * Real_StrokeAndFillPath)(HDC a0)
    = StrokeAndFillPath;

BOOL (__stdcall * Real_StrokePath)(HDC a0)
    = StrokePath;

BOOL (__stdcall * Real_SubtractRect)(LPRECT a0,
                                     CONST RECT* a1,
                                     CONST RECT* a2)
    = SubtractRect;

DWORD (__stdcall * Real_SuspendThread)(HANDLE a0)
    = SuspendThread;

BOOL (__stdcall * Real_SwapBuffers)(HDC a0)
    = SwapBuffers;

BOOL (__stdcall * Real_SwapMouseButton)(BOOL a0)
    = SwapMouseButton;

BOOL (__stdcall * Real_SwitchDesktop)(HDESK a0)
    = SwitchDesktop;

void (__stdcall * Real_SwitchToFiber)(LPVOID a0)
    = SwitchToFiber;

BOOL (__stdcall * Real_SwitchToThread)(void)
    = SwitchToThread;

BOOL (__stdcall * Real_SystemParametersInfoA)(UINT a0,
                                              UINT a1,
                                              PVOID a2,
                                              UINT a3)
    = SystemParametersInfoA;

BOOL (__stdcall * Real_SystemParametersInfoW)(UINT a0,
                                              UINT a1,
                                              PVOID a2,
                                              UINT a3)
    = SystemParametersInfoW;

BOOL (__stdcall * Real_SystemTimeToFileTime)(CONST SYSTEMTIME* a0,
                                             LPFILETIME a1)
    = SystemTimeToFileTime;

BOOL (__stdcall * Real_SystemTimeToTzSpecificLocalTime)(
#ifdef PIPE_ACCEPT_REMOTE_CLIENTS
                                                        const TIME_ZONE_INFORMATION *a0,
                                                        const SYSTEMTIME *a1,
#else
                                                        LPTIME_ZONE_INFORMATION a0,
                                                        LPSYSTEMTIME a1,
#endif
                                                        LPSYSTEMTIME a2
                                                       )
    = SystemTimeToTzSpecificLocalTime;

#if _MSC_VER < 1300
LONG (__stdcall * Real_TabbedTextOutA)(HDC a0,
                                       int a1,
                                       int a2,
                                       LPCSTR a3,
                                       int a4,
                                       int a5,
                                       INT* a6,
                                       int a7)
    = TabbedTextOutA;
#else
LONG (__stdcall * Real_TabbedTextOutA)(HDC a0,
                                       int a1,
                                       int a2,
                                       LPCSTR a3,
                                       int a4,
                                       int a5,
                                       CONST INT* a6,
                                       int a7)
    = TabbedTextOutA;
#endif

#if _MSC_VER < 1300
LONG (__stdcall * Real_TabbedTextOutW)(HDC a0,
                                       int a1,
                                       int a2,
                                       LPCWSTR a3,
                                       int a4,
                                       int a5,
                                       INT* a6,
                                       int a7)
    = TabbedTextOutW;
#else
LONG (__stdcall * Real_TabbedTextOutW)(HDC a0,
                                       int a1,
                                       int a2,
                                       LPCWSTR a3,
                                       int a4,
                                       int a5,
                                       CONST INT* a6,
                                       int a7)
    = TabbedTextOutW;
#endif

BOOL (__stdcall * Real_TerminateProcess)(HANDLE a0,
                                         UINT a1)
    = TerminateProcess;

BOOL (__stdcall * Real_TerminateThread)(HANDLE a0,
                                        DWORD a1)
    = TerminateThread;

BOOL (__stdcall * Real_TextOutA)(HDC a0,
                                 int a1,
                                 int a2,
                                 LPCSTR a3,
                                 int a4)
    = TextOutA;

BOOL (__stdcall * Real_TextOutW)(HDC a0,
                                 int a1,
                                 int a2,
                                 LPCWSTR a3,
                                 int a4)
    = TextOutW;

WORD (__stdcall * Real_TileWindows)(HWND a0,
                                    UINT a1,
                                    CONST RECT* a2,
                                    UINT a3,
                                    CONST HWND * a4)
    = TileWindows;

#if _MSC_VER < 1300
int (__stdcall * Real_ToAscii)(UINT a0,
                               UINT a1,
                               BYTE* a2,
                               LPWORD a3,
                               UINT a4)
    = ToAscii;
#else
int (__stdcall * Real_ToAscii)(UINT a0,
                               UINT a1,
                               CONST BYTE* a2,
                               LPWORD a3,
                               UINT a4)
    = ToAscii;
#endif

#if _MSC_VER < 1300
int (__stdcall * Real_ToAsciiEx)(UINT a0,
                                 UINT a1,
                                 BYTE* a2,
                                 LPWORD a3,
                                 UINT a4,
                                 HKL a5)
    = ToAsciiEx;
#else
int (__stdcall * Real_ToAsciiEx)(UINT a0,
                                 UINT a1,
                                 CONST BYTE* a2,
                                 LPWORD a3,
                                 UINT a4,
                                 HKL a5)
    = ToAsciiEx;
#endif

#if _MSC_VER < 1300
int (__stdcall * Real_ToUnicode)(UINT a0,
                                 UINT a1,
                                 BYTE* a2,
                                 LPWSTR a3,
                                 int a4,
                                 UINT a5)
    = ToUnicode;
#else
int (__stdcall * Real_ToUnicode)(UINT a0,
                                 UINT a1,
                                 CONST BYTE* a2,
                                 LPWSTR a3,
                                 int a4,
                                 UINT a5)
    = ToUnicode;
#endif

#if _MSC_VER < 1300
int (__stdcall * Real_ToUnicodeEx)(UINT a0,
                                   UINT a1,
                                   BYTE* a2,
                                   LPWSTR a3,
                                   int a4,
                                   UINT a5,
                                   HKL a6)
    = ToUnicodeEx;
#else
int (__stdcall * Real_ToUnicodeEx)(UINT a0,
                                   UINT a1,
                                   CONST BYTE* a2,
                                   LPWSTR a3,
                                   int a4,
                                   UINT a5,
                                   HKL a6)
    = ToUnicodeEx;
#endif

BOOL (__stdcall * Real_TrackMouseEvent)(TRACKMOUSEEVENT* a0)
    = TrackMouseEvent;

BOOL (__stdcall * Real_TrackPopupMenu)(HMENU a0,
                                       UINT a1,
                                       int a2,
                                       int a3,
                                       int a4,
                                       HWND a5,
                                       CONST RECT* a6)
    = TrackPopupMenu;

BOOL (__stdcall * Real_TrackPopupMenuEx)(HMENU a0,
                                         UINT a1,
                                         int a2,
                                         int a3,
                                         HWND a4,
                                         LPTPMPARAMS a5)
    = TrackPopupMenuEx;

BOOL (__stdcall * Real_TransactNamedPipe)(HANDLE a0,
                                          LPVOID a1,
                                          DWORD a2,
                                          LPVOID a3,
                                          DWORD a4,
                                          LPDWORD a5,
                                          LPOVERLAPPED a6)
    = TransactNamedPipe;

int (__stdcall * Real_TranslateAcceleratorA)(HWND a0,
                                             HACCEL a1,
                                             LPMSG a2)
    = TranslateAcceleratorA;

int (__stdcall * Real_TranslateAcceleratorW)(HWND a0,
                                             HACCEL a1,
                                             LPMSG a2)
    = TranslateAcceleratorW;

BOOL (__stdcall * Real_TranslateCharsetInfo)(DWORD* a0,
                                             CHARSETINFO* a1,
                                             DWORD a2)
    = TranslateCharsetInfo;

BOOL (__stdcall * Real_TranslateMDISysAccel)(HWND a0,
                                             LPMSG a1)
    = TranslateMDISysAccel;

BOOL (__stdcall * Real_TranslateMessage)(CONST MSG* a0)
    = TranslateMessage;

BOOL (__stdcall * Real_TransmitCommChar)(HANDLE a0,
                                         char a1)
    = TransmitCommChar;

#if DETOUR_TryEnterCriticalSection_EVEN_IF_IT_EXERCISES_A_BUG_IN_RtlLookupFunctionTable
BOOL (__stdcall * Real_TryEnterCriticalSection)(LPCRITICAL_SECTION a0)
    = TryEnterCriticalSection;
#endif

BOOL (__stdcall * Real_UnhookWindowsHook)(int a0,
                                          HOOKPROC a1)
    = UnhookWindowsHook;

BOOL (__stdcall * Real_UnhookWindowsHookEx)(HHOOK a0)
    = UnhookWindowsHookEx;

BOOL (__stdcall * Real_UnionRect)(LPRECT a0,
                                  CONST RECT* a1,
                                  CONST RECT* a2)
    = UnionRect;

BOOL (__stdcall * Real_UnloadKeyboardLayout)(HKL a0)
    = UnloadKeyboardLayout;

BOOL (__stdcall * Real_UnlockFile)(HANDLE a0,
                                   DWORD a1,
                                   DWORD a2,
                                   DWORD a3,
                                   DWORD a4)
    = UnlockFile;

BOOL (__stdcall * Real_UnlockFileEx)(HANDLE a0,
                                     DWORD a1,
                                     DWORD a2,
                                     DWORD a3,
                                     LPOVERLAPPED a4)
    = UnlockFileEx;

BOOL (__stdcall * Real_UnmapViewOfFile)(LPCVOID a0)
    = UnmapViewOfFile;

BOOL (__stdcall * Real_UnpackDDElParam)(UINT a0,
                                        LPARAM a1,
                                        PUINT_PTR a2,
                                        PUINT_PTR a3)
    = UnpackDDElParam;

BOOL (__stdcall * Real_UnrealizeObject)(HGDIOBJ a0)
    = UnrealizeObject;

BOOL (__stdcall * Real_UnregisterClassA)(LPCSTR a0,
                                         HINSTANCE a1)
    = UnregisterClassA;

BOOL (__stdcall * Real_UnregisterClassW)(LPCWSTR a0,
                                         HINSTANCE a1)
    = UnregisterClassW;

BOOL (__stdcall * Real_UnregisterHotKey)(HWND a0,
                                         int a1)
    = UnregisterHotKey;

BOOL (__stdcall * Real_UpdateColors)(HDC a0)
    = UpdateColors;

BOOL (__stdcall * Real_UpdateResourceA)(HANDLE a0,
                                        LPCSTR a1,
                                        LPCSTR a2,
                                        WORD a3,
                                        LPVOID a4,
                                        DWORD a5)
    = UpdateResourceA;

BOOL (__stdcall * Real_UpdateResourceW)(HANDLE a0,
                                        LPCWSTR a1,
                                        LPCWSTR a2,
                                        WORD a3,
                                        LPVOID a4,
                                        DWORD a5)
    = UpdateResourceW;

BOOL (__stdcall * Real_UpdateWindow)(HWND a0)
    = UpdateWindow;

BOOL (__stdcall * Real_ValidateRect)(HWND a0,
                                     CONST RECT* a1)
    = ValidateRect;

BOOL (__stdcall * Real_ValidateRgn)(HWND a0,
                                    HRGN a1)
    = ValidateRgn;

DWORD (__stdcall * Real_VerLanguageNameA)(DWORD a0,
                                          LPSTR a1,
                                          DWORD a2)
    = VerLanguageNameA;

DWORD (__stdcall * Real_VerLanguageNameW)(DWORD a0,
                                          LPWSTR a1,
                                          DWORD a2)
    = VerLanguageNameW;

LPVOID (__stdcall * Real_VirtualAllocEx)(HANDLE a0,
                                         LPVOID a1,
                                         SIZE_T a2,
                                         DWORD a3,
                                         DWORD a4)
    = VirtualAllocEx;

BOOL (__stdcall * Real_VirtualFreeEx)(HANDLE a0,
                                      LPVOID a1,
                                      SIZE_T a2,
                                      DWORD a3)
    = VirtualFreeEx;

BOOL (__stdcall * Real_VirtualProtectEx)(HANDLE a0,
                                         LPVOID a1,
                                         SIZE_T a2,
                                         DWORD a3,
                                         PDWORD a4)
    = VirtualProtectEx;

DWORD_PTR (__stdcall * Real_VirtualQueryEx)(HANDLE a0,
                                        LPCVOID a1,
                                        PMEMORY_BASIC_INFORMATION a2,
                                        DWORD_PTR a3)
    = VirtualQueryEx;

SHORT (__stdcall * Real_VkKeyScanA)(CHAR a0)
    = VkKeyScanA;

SHORT (__stdcall * Real_VkKeyScanExA)(CHAR a0,
                                      HKL a1)
    = VkKeyScanExA;

SHORT (__stdcall * Real_VkKeyScanExW)(WCHAR a0,
                                      HKL a1)
    = VkKeyScanExW;

SHORT (__stdcall * Real_VkKeyScanW)(WCHAR a0)
    = VkKeyScanW;

SOCKET (__stdcall * Real_WSAAccept)(SOCKET a0,
                                    sockaddr* a1,
                                    LPINT a2,
                                    LPCONDITIONPROC a3,
                                    DWORD_PTR a4)
    = WSAAccept;

INT (__stdcall * Real_WSAAddressToStringA)(LPSOCKADDR a0,
                                           DWORD a1,
                                           LPWSAPROTOCOL_INFOA a2,
                                           LPSTR a3,
                                           LPDWORD a4)
    = WSAAddressToStringA;

INT (__stdcall * Real_WSAAddressToStringW)(LPSOCKADDR a0,
                                           DWORD a1,
                                           LPWSAPROTOCOL_INFOW a2,
                                           LPWSTR a3,
                                           LPDWORD a4)
    = WSAAddressToStringW;

HANDLE (__stdcall * Real_WSAAsyncGetHostByAddr)(HWND a0,
                                                u_int a1,
                                                CONST char* a2,
                                                int a3,
                                                int a4,
                                                char* a5,
                                                int a6)
    = WSAAsyncGetHostByAddr;

HANDLE (__stdcall * Real_WSAAsyncGetHostByName)(HWND a0,
                                                u_int a1,
                                                CONST char* a2,
                                                char* a3,
                                                int a4)
    = WSAAsyncGetHostByName;

HANDLE (__stdcall * Real_WSAAsyncGetProtoByName)(HWND a0,
                                                 u_int a1,
                                                 CONST char* a2,
                                                 char* a3,
                                                 int a4)
    = WSAAsyncGetProtoByName;

HANDLE (__stdcall * Real_WSAAsyncGetProtoByNumber)(HWND a0,
                                                   u_int a1,
                                                   int a2,
                                                   char* a3,
                                                   int a4)
    = WSAAsyncGetProtoByNumber;

HANDLE (__stdcall * Real_WSAAsyncGetServByName)(HWND a0,
                                                u_int a1,
                                                CONST char* a2,
                                                CONST char* a3,
                                                char* a4,
                                                int a5)
    = WSAAsyncGetServByName;

HANDLE (__stdcall * Real_WSAAsyncGetServByPort)(HWND a0,
                                                u_int a1,
                                                int a2,
                                                CONST char* a3,
                                                char* a4,
                                                int a5)
    = WSAAsyncGetServByPort;

int (__stdcall * Real_WSAAsyncSelect)(SOCKET a0,
                                      HWND a1,
                                      u_int a2,
                                      long a3)
    = WSAAsyncSelect;

int (__stdcall * Real_WSACancelAsyncRequest)(HANDLE a0)
    = WSACancelAsyncRequest;

int (__stdcall * Real_WSACancelBlockingCall)(void)
    = WSACancelBlockingCall;

int (__stdcall * Real_WSACleanup)(void)
    = WSACleanup;

BOOL (__stdcall * Real_WSACloseEvent)(HANDLE a0)
    = WSACloseEvent;

int (__stdcall * Real_WSAConnect)(SOCKET a0,
                                  CONST sockaddr* a1,
                                  int a2,
                                  LPWSABUF a3,
                                  LPWSABUF a4,
                                  LPQOS a5,
                                  LPQOS a6)
    = WSAConnect;

HANDLE (__stdcall * Real_WSACreateEvent)(void)
    = WSACreateEvent;

int (__stdcall * Real_WSADuplicateSocketA)(SOCKET a0,
                                           DWORD a1,
                                           LPWSAPROTOCOL_INFOA a2)
    = WSADuplicateSocketA;

int (__stdcall * Real_WSADuplicateSocketW)(SOCKET a0,
                                           DWORD a1,
                                           LPWSAPROTOCOL_INFOW a2)
    = WSADuplicateSocketW;

INT (__stdcall * Real_WSAEnumNameSpaceProvidersA)(LPDWORD a0,
                                                  LPWSANAMESPACE_INFOA a1)
    = WSAEnumNameSpaceProvidersA;

INT (__stdcall * Real_WSAEnumNameSpaceProvidersW)(LPDWORD a0,
                                                  LPWSANAMESPACE_INFOW a1)
    = WSAEnumNameSpaceProvidersW;

int (__stdcall * Real_WSAEnumNetworkEvents)(SOCKET a0,
                                            HANDLE a1,
                                            LPWSANETWORKEVENTS a2)
    = WSAEnumNetworkEvents;

int (__stdcall * Real_WSAEnumProtocolsA)(LPINT a0,
                                         LPWSAPROTOCOL_INFOA a1,
                                         LPDWORD a2)
    = WSAEnumProtocolsA;

int (__stdcall * Real_WSAEnumProtocolsW)(LPINT a0,
                                         LPWSAPROTOCOL_INFOW a1,
                                         LPDWORD a2)
    = WSAEnumProtocolsW;

int (__stdcall * Real_WSAEventSelect)(SOCKET a0,
                                      HANDLE a1,
                                      long a2)
    = WSAEventSelect;

BOOL (__stdcall * Real_WSAGetOverlappedResult)(SOCKET a0,
                                               LPWSAOVERLAPPED a1,
                                               LPDWORD a2,
                                               BOOL a3,
                                               LPDWORD a4)
    = WSAGetOverlappedResult;

BOOL (__stdcall * Real_WSAGetQOSByName)(SOCKET a0,
                                        LPWSABUF a1,
                                        LPQOS a2)
    = WSAGetQOSByName;

INT (__stdcall * Real_WSAGetServiceClassInfoA)(LPGUID a0,
                                               LPGUID a1,
                                               LPDWORD a2,
                                               LPWSASERVICECLASSINFOA a3)
    = WSAGetServiceClassInfoA;

INT (__stdcall * Real_WSAGetServiceClassInfoW)(LPGUID a0,
                                               LPGUID a1,
                                               LPDWORD a2,
                                               LPWSASERVICECLASSINFOW a3)
    = WSAGetServiceClassInfoW;

INT (__stdcall * Real_WSAGetServiceClassNameByClassIdA)(LPGUID a0,
                                                        LPSTR a1,
                                                        LPDWORD a2)
    = WSAGetServiceClassNameByClassIdA;

INT (__stdcall * Real_WSAGetServiceClassNameByClassIdW)(LPGUID a0,
                                                        LPWSTR a1,
                                                        LPDWORD a2)
    = WSAGetServiceClassNameByClassIdW;

int (__stdcall * Real_WSAHtonl)(SOCKET a0,
                                u_long a1,
                                u_long* a2)
    = WSAHtonl;

int (__stdcall * Real_WSAHtons)(SOCKET a0,
                                u_short a1,
                                u_short* a2)
    = WSAHtons;

INT (__stdcall * Real_WSAInstallServiceClassA)(LPWSASERVICECLASSINFOA a0)
    = WSAInstallServiceClassA;

INT (__stdcall * Real_WSAInstallServiceClassW)(LPWSASERVICECLASSINFOW a0)
    = WSAInstallServiceClassW;

int (__stdcall * Real_WSAIoctl)(SOCKET a0,
                                DWORD a1,
                                LPVOID a2,
                                DWORD a3,
                                LPVOID a4,
                                DWORD a5,
                                LPDWORD a6,
                                LPWSAOVERLAPPED a7,
                                LPWSAOVERLAPPED_COMPLETION_ROUTINE a8)
    = WSAIoctl;

BOOL (__stdcall * Real_WSAIsBlocking)(void)
    = WSAIsBlocking;

SOCKET (__stdcall * Real_WSAJoinLeaf)(SOCKET a0,
                                      CONST sockaddr* a1,
                                      int a2,
                                      LPWSABUF a3,
                                      LPWSABUF a4,
                                      LPQOS a5,
                                      LPQOS a6,
                                      DWORD a7)
    = WSAJoinLeaf;

INT (__stdcall * Real_WSALookupServiceBeginA)(LPWSAQUERYSETA a0,
                                              DWORD a1,
                                              LPHANDLE a2)
    = WSALookupServiceBeginA;

INT (__stdcall * Real_WSALookupServiceBeginW)(LPWSAQUERYSETW a0,
                                              DWORD a1,
                                              LPHANDLE a2)
    = WSALookupServiceBeginW;

INT (__stdcall * Real_WSALookupServiceEnd)(HANDLE a0)
    = WSALookupServiceEnd;

INT (__stdcall * Real_WSALookupServiceNextA)(HANDLE a0,
                                             DWORD a1,
                                             LPDWORD a2,
                                             LPWSAQUERYSETA a3)
    = WSALookupServiceNextA;

INT (__stdcall * Real_WSALookupServiceNextW)(HANDLE a0,
                                             DWORD a1,
                                             LPDWORD a2,
                                             LPWSAQUERYSETW a3)
    = WSALookupServiceNextW;

int (__stdcall * Real_WSANtohl)(SOCKET a0,
                                u_long a1,
                                u_long* a2)
    = WSANtohl;

int (__stdcall * Real_WSANtohs)(SOCKET a0,
                                u_short a1,
                                u_short* a2)
    = WSANtohs;

INT (__stdcall * Real_WSAProviderConfigChange)(LPHANDLE a0,
                                               LPWSAOVERLAPPED a1,
                                               LPWSAOVERLAPPED_COMPLETION_ROUTINE a2)
    = WSAProviderConfigChange;

int (__stdcall * Real_WSARecv)(SOCKET a0,
                               LPWSABUF a1,
                               DWORD a2,
                               LPDWORD a3,
                               LPDWORD a4,
                               LPWSAOVERLAPPED a5,
                               LPWSAOVERLAPPED_COMPLETION_ROUTINE a6)
    = WSARecv;

int (__stdcall * Real_WSARecvDisconnect)(SOCKET a0,
                                         LPWSABUF a1)
    = WSARecvDisconnect;

int (__stdcall * Real_WSARecvFrom)(SOCKET a0,
                                   LPWSABUF a1,
                                   DWORD a2,
                                   LPDWORD a3,
                                   LPDWORD a4,
                                   sockaddr* a5,
                                   LPINT a6,
                                   LPWSAOVERLAPPED a7,
                                   LPWSAOVERLAPPED_COMPLETION_ROUTINE a8)
    = WSARecvFrom;

INT (__stdcall * Real_WSARemoveServiceClass)(LPGUID a0)
    = WSARemoveServiceClass;

BOOL (__stdcall * Real_WSAResetEvent)(HANDLE a0)
    = WSAResetEvent;

int (__stdcall * Real_WSASend)(SOCKET a0,
                               LPWSABUF a1,
                               DWORD a2,
                               LPDWORD a3,
                               DWORD a4,
                               LPWSAOVERLAPPED a5,
                               LPWSAOVERLAPPED_COMPLETION_ROUTINE a6)
    = WSASend;

int (__stdcall * Real_WSASendDisconnect)(SOCKET a0,
                                         LPWSABUF a1)
    = WSASendDisconnect;

int (__stdcall * Real_WSASendTo)(SOCKET a0,
                                 LPWSABUF a1,
                                 DWORD a2,
                                 LPDWORD a3,
                                 DWORD a4,
                                 CONST sockaddr* a5,
                                 int a6,
                                 LPWSAOVERLAPPED a7,
                                 LPWSAOVERLAPPED_COMPLETION_ROUTINE a8)
    = WSASendTo;

FARPROC (__stdcall * Real_WSASetBlockingHook)(FARPROC a0)
    = WSASetBlockingHook;

BOOL (__stdcall * Real_WSASetEvent)(HANDLE a0)
    = WSASetEvent;

INT (__stdcall * Real_WSASetServiceA)(LPWSAQUERYSETA a0,
                                      WSAESETSERVICEOP a1,
                                      DWORD a2)
    = WSASetServiceA;

INT (__stdcall * Real_WSASetServiceW)(LPWSAQUERYSETW a0,
                                      WSAESETSERVICEOP a1,
                                      DWORD a2)
    = WSASetServiceW;

SOCKET (__stdcall * Real_WSASocketA)(int a0,
                                     int a1,
                                     int a2,
                                     LPWSAPROTOCOL_INFOA a3,
                                     GROUP a4,
                                     DWORD a5)
    = WSASocketA;

SOCKET (__stdcall * Real_WSASocketW)(int a0,
                                     int a1,
                                     int a2,
                                     LPWSAPROTOCOL_INFOW a3,
                                     GROUP a4,
                                     DWORD a5)
    = WSASocketW;

int (__stdcall * Real_WSAStartup)(WORD a0,
                                  LPWSADATA a1)
    = WSAStartup;

INT (__stdcall * Real_WSAStringToAddressA)(LPSTR a0,
                                           INT a1,
                                           LPWSAPROTOCOL_INFOA a2,
                                           LPSOCKADDR a3,
                                           LPINT a4)
    = WSAStringToAddressA;

INT (__stdcall * Real_WSAStringToAddressW)(LPWSTR a0,
                                           INT a1,
                                           LPWSAPROTOCOL_INFOW a2,
                                           LPSOCKADDR a3,
                                           LPINT a4)
    = WSAStringToAddressW;

int (__stdcall * Real_WSAUnhookBlockingHook)(void)
    = WSAUnhookBlockingHook;

DWORD (__stdcall * Real_WSAWaitForMultipleEvents)(DWORD a0,
                                                  CONST HANDLE * a1,
                                                  BOOL a2,
                                                  DWORD a3,
                                                  BOOL a4)
    = WSAWaitForMultipleEvents;

BOOL (__stdcall * Real_WaitCommEvent)(HANDLE a0,
                                      LPDWORD a1,
                                      LPOVERLAPPED a2)
    = WaitCommEvent;

DWORD (__stdcall * Real_WaitForInputIdle)(HANDLE a0,
                                          DWORD a1)
    = WaitForInputIdle;

DWORD (__stdcall * Real_WaitForMultipleObjects)(DWORD a0,
                                                CONST HANDLE * a1,
                                                BOOL a2,
                                                DWORD a3)
    = WaitForMultipleObjects;

DWORD (__stdcall * Real_WaitForMultipleObjectsEx)(DWORD a0,
                                                  CONST HANDLE * a1,
                                                  BOOL a2,
                                                  DWORD a3,
                                                  BOOL a4)
    = WaitForMultipleObjectsEx;

DWORD (__stdcall * Real_WaitForSingleObject)(HANDLE a0,
                                             DWORD a1)
    = WaitForSingleObject;

DWORD (__stdcall * Real_WaitForSingleObjectEx)(HANDLE a0,
                                               DWORD a1,
                                               BOOL a2)
    = WaitForSingleObjectEx;

BOOL (__stdcall * Real_WaitMessage)(void)
    = WaitMessage;

BOOL (__stdcall * Real_WaitNamedPipeA)(LPCSTR a0,
                                       DWORD a1)
    = WaitNamedPipeA;

BOOL (__stdcall * Real_WaitNamedPipeW)(LPCWSTR a0,
                                       DWORD a1)
    = WaitNamedPipeW;

BOOL (__stdcall * Real_WidenPath)(HDC a0)
    = WidenPath;

UINT (__stdcall * Real_WinExec)(LPCSTR a0,
                                UINT a1)
    = WinExec;

BOOL (__stdcall * Real_WinHelpA)(HWND a0,
                                 LPCSTR a1,
                                 UINT a2,
                                 ULONG_PTR a3)
    = WinHelpA;

BOOL (__stdcall * Real_WinHelpW)(HWND a0,
                                 LPCWSTR a1,
                                 UINT a2,
                                 ULONG_PTR a3)
    = WinHelpW;

HWND (__stdcall * Real_WindowFromDC)(HDC a0)
    = WindowFromDC;

HWND (__stdcall * Real_WindowFromPoint)(POINT a0)
    = WindowFromPoint;

HRESULT (__stdcall * Real_WriteClassStg)(LPSTORAGE a0,
                                         CONST IID& a1)
    = WriteClassStg;

HRESULT (__stdcall * Real_WriteClassStm)(LPSTREAM a0,
                                         CONST IID& a1)
    = WriteClassStm;

BOOL (__stdcall * Real_WriteConsoleA)(HANDLE a0,
                                      CONST void* a1,
                                      DWORD a2,
                                      LPDWORD a3,
                                      LPVOID a4)
    = WriteConsoleA;

BOOL (__stdcall * Real_WriteConsoleInputA)(HANDLE a0,
                                           CONST INPUT_RECORD* a1,
                                           DWORD a2,
                                           LPDWORD a3)
    = WriteConsoleInputA;

BOOL (__stdcall * Real_WriteConsoleInputW)(HANDLE a0,
                                           CONST INPUT_RECORD* a1,
                                           DWORD a2,
                                           LPDWORD a3)
    = WriteConsoleInputW;

BOOL (__stdcall * Real_WriteConsoleOutputA)(HANDLE a0,
                                            CONST CHAR_INFO* a1,
                                            COORD a2,
                                            COORD a3,
                                            PSMALL_RECT a4)
    = WriteConsoleOutputA;

BOOL (__stdcall * Real_WriteConsoleOutputAttribute)(HANDLE a0,
                                                    CONST WORD* a1,
                                                    DWORD a2,
                                                    COORD a3,
                                                    LPDWORD a4)
    = WriteConsoleOutputAttribute;

BOOL (__stdcall * Real_WriteConsoleOutputCharacterA)(HANDLE a0,
                                                     LPCSTR a1,
                                                     DWORD a2,
                                                     COORD a3,
                                                     LPDWORD a4)
    = WriteConsoleOutputCharacterA;

BOOL (__stdcall * Real_WriteConsoleOutputCharacterW)(HANDLE a0,
                                                     LPCWSTR a1,
                                                     DWORD a2,
                                                     COORD a3,
                                                     LPDWORD a4)
    = WriteConsoleOutputCharacterW;

BOOL (__stdcall * Real_WriteConsoleOutputW)(HANDLE a0,
                                            CONST CHAR_INFO* a1,
                                            COORD a2,
                                            COORD a3,
                                            PSMALL_RECT a4)
    = WriteConsoleOutputW;

BOOL (__stdcall * Real_WriteConsoleW)(HANDLE a0,
                                      CONST void* a1,
                                      DWORD a2,
                                      LPDWORD a3,
                                      LPVOID a4)
    = WriteConsoleW;

BOOL (__stdcall * Real_WriteFile)(HANDLE a0,
                                  LPCVOID a1,
                                  DWORD a2,
                                  LPDWORD a3,
                                  LPOVERLAPPED a4)
    = WriteFile;

BOOL (__stdcall * Real_WriteFileEx)(HANDLE a0,
                                    LPCVOID a1,
                                    DWORD a2,
                                    LPOVERLAPPED a3,
                                    LPOVERLAPPED_COMPLETION_ROUTINE a4)
    = WriteFileEx;

HRESULT (__stdcall * Real_WriteFmtUserTypeStg)(LPSTORAGE a0,
                                               CLIPFORMAT a1,
                                               LPOLESTR a2)
    = WriteFmtUserTypeStg;

BOOL (__stdcall * Real_WritePrivateProfileSectionA)(LPCSTR a0,
                                                    LPCSTR a1,
                                                    LPCSTR a2)
    = WritePrivateProfileSectionA;

BOOL (__stdcall * Real_WritePrivateProfileSectionW)(LPCWSTR a0,
                                                    LPCWSTR a1,
                                                    LPCWSTR a2)
    = WritePrivateProfileSectionW;

BOOL (__stdcall * Real_WritePrivateProfileStringA)(LPCSTR a0,
                                                   LPCSTR a1,
                                                   LPCSTR a2,
                                                   LPCSTR a3)
    = WritePrivateProfileStringA;

BOOL (__stdcall * Real_WritePrivateProfileStringW)(LPCWSTR a0,
                                                   LPCWSTR a1,
                                                   LPCWSTR a2,
                                                   LPCWSTR a3)
    = WritePrivateProfileStringW;

BOOL (__stdcall * Real_WritePrivateProfileStructA)(LPCSTR a0,
                                                   LPCSTR a1,
                                                   LPVOID a2,
                                                   UINT a3,
                                                   LPCSTR a4)
    = WritePrivateProfileStructA;

BOOL (__stdcall * Real_WritePrivateProfileStructW)(LPCWSTR a0,
                                                   LPCWSTR a1,
                                                   LPVOID a2,
                                                   UINT a3,
                                                   LPCWSTR a4)
    = WritePrivateProfileStructW;

#if _MSC_VER < 1300
BOOL (__stdcall * Real_WriteProcessMemory)(HANDLE a0,
                                           LPVOID a1,
                                           LPVOID a2,
                                           DWORD_PTR a3,
                                           PDWORD_PTR a4)
    = WriteProcessMemory;
#else
BOOL (__stdcall * Real_WriteProcessMemory)(HANDLE a0,
                                           LPVOID a1,
                                           LPCVOID a2,
                                           DWORD_PTR a3,
                                           PDWORD_PTR a4)
    = WriteProcessMemory;
#endif

BOOL (__stdcall * Real_WriteProfileSectionA)(LPCSTR a0,
                                             LPCSTR a1)
    = WriteProfileSectionA;

BOOL (__stdcall * Real_WriteProfileSectionW)(LPCWSTR a0,
                                             LPCWSTR a1)
    = WriteProfileSectionW;

BOOL (__stdcall * Real_WriteProfileStringA)(LPCSTR a0,
                                            LPCSTR a1,
                                            LPCSTR a2)
    = WriteProfileStringA;

BOOL (__stdcall * Real_WriteProfileStringW)(LPCWSTR a0,
                                            LPCWSTR a1,
                                            LPCWSTR a2)
    = WriteProfileStringW;

DWORD (__stdcall * Real_WriteTapemark)(HANDLE a0,
                                       DWORD a1,
                                       DWORD a2,
                                       BOOL a3)
    = WriteTapemark;

int (__stdcall * Real___WSAFDIsSet)(SOCKET a0,
                                    fd_set* a1)
    = __WSAFDIsSet;

long (__stdcall * Real__hread)(HFILE a0,
                               LPVOID a1,
                               long a2)
    = _hread;

long (__stdcall * Real__hwrite)(HFILE a0,
                                LPCSTR a1,
                                long a2)
    = _hwrite;

HFILE (__stdcall * Real__lclose)(HFILE a0)
    = _lclose;

HFILE (__stdcall * Real__lcreat)(LPCSTR a0,
                                 int a1)
    = _lcreat;

LONG (__stdcall * Real__llseek)(HFILE a0,
                                LONG a1,
                                int a2)
    = _llseek;

HFILE (__stdcall * Real__lopen)(LPCSTR a0,
                                int a1)
    = _lopen;

UINT (__stdcall * Real__lread)(HFILE a0,
                               LPVOID a1,
                               UINT a2)
    = _lread;

UINT (__stdcall * Real__lwrite)(HFILE a0,
                                LPCSTR a1,
                                UINT a2)
    = _lwrite;

SOCKET (__stdcall * Real_accept)(SOCKET a0,
                                 sockaddr* a1,
                                 int* a2)
    = accept;

int (__stdcall * Real_bind)(SOCKET a0,
                            CONST sockaddr* a1,
                            int a2)
    = bind;

int (__stdcall * Real_closesocket)(SOCKET a0)
    = closesocket;

int (__stdcall * Real_connect)(SOCKET a0,
                               CONST sockaddr* a1,
                               int a2)
    = connect;

hostent * (__stdcall * Real_gethostbyaddr)(CONST char* a0,
                                          int a1,
                                          int a2)
    = gethostbyaddr;

hostent * (__stdcall * Real_gethostbyname)(CONST char* a0)
    = gethostbyname;

int (__stdcall * Real_gethostname)(char* a0,
                                   int a1)
    = gethostname;

int (__stdcall * Real_getpeername)(SOCKET a0,
                                   sockaddr* a1,
                                   int* a2)
    = getpeername;

protoent * (__stdcall * Real_getprotobyname)(CONST char* a0)
    = getprotobyname;

protoent * (__stdcall * Real_getprotobynumber)(int a0)
    = getprotobynumber;

servent * (__stdcall * Real_getservbyname)(CONST char* a0,
                                           CONST char* a1)
    = getservbyname;

servent * (__stdcall * Real_getservbyport)(int a0,
                                           CONST char* a1)
    = getservbyport;

int (__stdcall * Real_getsockname)(SOCKET a0,
                                   sockaddr* a1,
                                   int* a2)
    = getsockname;

int (__stdcall * Real_getsockopt)(SOCKET a0,
                                  int a1,
                                  int a2,
                                  char* a3,
                                  int* a4)
    = getsockopt;

u_long (__stdcall * Real_htonl)(u_long a0)
    = htonl;

u_short (__stdcall * Real_htons)(u_short a0)
    = htons;

unsigned long (__stdcall * Real_inet_addr)(CONST char* a0)
    = inet_addr;

char * (__stdcall * Real_inet_ntoa)(in_addr a0)
    = inet_ntoa;

int (__stdcall * Real_ioctlsocket)(SOCKET a0,
                                   long a1,
                                   u_long* a2)
    = ioctlsocket;

void (__stdcall * Real_keybd_event)(BYTE a0,
                                    BYTE a1,
                                    DWORD a2,
                                    ULONG_PTR a3)
    = keybd_event;

int (__stdcall * Real_listen)(SOCKET a0,
                              int a1)
    = listen;

void (__stdcall * Real_mouse_event)(DWORD a0,
                                    DWORD a1,
                                    DWORD a2,
                                    DWORD a3,
                                    ULONG_PTR a4)
    = mouse_event;

u_long (__stdcall * Real_ntohl)(u_long a0)
    = ntohl;

u_short (__stdcall * Real_ntohs)(u_short a0)
    = ntohs;

int (__stdcall * Real_recv)(SOCKET a0,
                            char* a1,
                            int a2,
                            int a3)
    = recv;

int (__stdcall * Real_recvfrom)(SOCKET a0,
                                char* a1,
                                int a2,
                                int a3,
                                sockaddr* a4,
                                int* a5)
    = recvfrom;

int (__stdcall * Real_select)(int a0,
                              fd_set* a1,
                              fd_set* a2,
                              fd_set* a3,
                              CONST timeval* a4)
    = select;

int (__stdcall * Real_send)(SOCKET a0,
                            CONST char* a1,
                            int a2,
                            int a3)
    = send;

int (__stdcall * Real_sendto)(SOCKET a0,
                              CONST char* a1,
                              int a2,
                              int a3,
                              CONST sockaddr* a4,
                              int a5)
    = sendto;

int (__stdcall * Real_setsockopt)(SOCKET a0,
                                  int a1,
                                  int a2,
                                  CONST char* a3,
                                  int a4)
    = setsockopt;

int (__stdcall * Real_shutdown)(SOCKET a0,
                                int a1)
    = shutdown;

SOCKET (__stdcall * Real_socket)(int a0,
                                 int a1,
                                 int a2)
    = socket;

///////////////////////////////////////////////////////////////////// Detours.
//

int __stdcall Mine_AbortDoc(HDC a0)
{
    
    int rv = 0;
    __try {
        rv = Real_AbortDoc(a0);
    } __finally {
        _Print("AbortDoc(%p) -> %x", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_AbortPath(HDC a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_AbortPath(a0);
    } __finally {
        _Print("AbortPath(%p) -> %x", a0, rv);
    };
    return rv;
}

HKL __stdcall Mine_ActivateKeyboardLayout(HKL a0,
                                          UINT a1)
{
    
    HKL rv = 0;
    __try {
        rv = Real_ActivateKeyboardLayout(a0, a1);
    } __finally {
        _Print("ActivateKeyboardLayout(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

ATOM __stdcall Mine_AddAtomA(LPCSTR a0)
{
    
    ATOM rv = 0;
    __try {
        rv = Real_AddAtomA(a0);
    } __finally {
        _Print("AddAtomA(%hs) -> %x", a0, rv);
    };
    return rv;
}

ATOM __stdcall Mine_AddAtomW(LPCWSTR a0)
{
    
    ATOM rv = 0;
    __try {
        rv = Real_AddAtomW(a0);
    } __finally {
        _Print("AddAtomW(%ls) -> %x", a0, rv);
    };
    return rv;
}

int __stdcall Mine_AddFontResourceA(LPCSTR a0)
{
    
    int rv = 0;
    __try {
        rv = Real_AddFontResourceA(a0);
    } __finally {
        _Print("AddFontResourceA(%hs) -> %x", a0, rv);
    };
    return rv;
}

int __stdcall Mine_AddFontResourceW(LPCWSTR a0)
{
    
    int rv = 0;
    __try {
        rv = Real_AddFontResourceW(a0);
    } __finally {
        _Print("AddFontResourceW(%ls) -> %x", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_AdjustWindowRect(LPRECT a0,
                                     DWORD a1,
                                     BOOL a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_AdjustWindowRect(a0, a1, a2);
    } __finally {
        _Print("AdjustWindowRect(%p,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_AdjustWindowRectEx(LPRECT a0,
                                       DWORD a1,
                                       BOOL a2,
                                       DWORD a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_AdjustWindowRectEx(a0, a1, a2, a3);
    } __finally {
        _Print("AdjustWindowRectEx(%p,%p,%p,%p) -> %x", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_AllocConsole(void)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_AllocConsole();
    } __finally {
        _Print("AllocConsole() -> %x", rv);
    };
    return rv;
}

BOOL __stdcall Mine_AngleArc(HDC a0,
                             int a1,
                             int a2,
                             DWORD a3,
                             FLOAT a4,
                             FLOAT a5)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_AngleArc(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("AngleArc(%p,%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

BOOL __stdcall Mine_AnimatePalette(HPALETTE a0,
                                   UINT a1,
                                   UINT a2,
                                   PALETTEENTRY* a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_AnimatePalette(a0, a1, a2, a3);
    } __finally {
        _Print("AnimatePalette(%p,%p,%p,%p) -> %x", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_AnyPopup(void)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_AnyPopup();
    } __finally {
        _Print("AnyPopup() -> %x", rv);
    };
    return rv;
}

BOOL __stdcall Mine_AppendMenuA(HMENU a0,
                                UINT a1,
                                UINT_PTR a2,
                                LPCSTR a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_AppendMenuA(a0, a1, a2, a3);
    } __finally {
        _Print("AppendMenuA(%p,%p,%p,%hs) -> %x", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_AppendMenuW(HMENU a0,
                                UINT a1,
                                UINT_PTR a2,
                                LPCWSTR a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_AppendMenuW(a0, a1, a2, a3);
    } __finally {
        _Print("AppendMenuW(%p,%p,%p,%ls) -> %x", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_Arc(HDC a0,
                        int a1,
                        int a2,
                        int a3,
                        int a4,
                        int a5,
                        int a6,
                        int a7,
                        int a8)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_Arc(a0, a1, a2, a3, a4, a5, a6, a7, a8);
    } __finally {
        _Print("Arc(%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, a5, a6, a7, a8, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ArcTo(HDC a0,
                          int a1,
                          int a2,
                          int a3,
                          int a4,
                          int a5,
                          int a6,
                          int a7,
                          int a8)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ArcTo(a0, a1, a2, a3, a4, a5, a6, a7, a8);
    } __finally {
        _Print("ArcTo(%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, a5, a6, a7, a8, rv);
    };
    return rv;
}

BOOL __stdcall Mine_AreFileApisANSI(void)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_AreFileApisANSI();
    } __finally {
        _Print("AreFileApisANSI() -> %x", rv);
    };
    return rv;
}

UINT __stdcall Mine_ArrangeIconicWindows(HWND a0)
{
    
    UINT rv = 0;
    __try {
        rv = Real_ArrangeIconicWindows(a0);
    } __finally {
        _Print("ArrangeIconicWindows(%p) -> %x", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_AttachThreadInput(DWORD a0,
                                      DWORD a1,
                                      BOOL a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_AttachThreadInput(a0, a1, a2);
    } __finally {
        _Print("AttachThreadInput(%p,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_BackupRead(HANDLE a0,
                               LPBYTE a1,
                               DWORD a2,
                               LPDWORD a3,
                               BOOL a4,
                               BOOL a5,
                               LPVOID* a6)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_BackupRead(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("BackupRead(%p,%p,%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

BOOL __stdcall Mine_BackupSeek(HANDLE a0,
                               DWORD a1,
                               DWORD a2,
                               LPDWORD a3,
                               LPDWORD a4,
                               LPVOID* a5)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_BackupSeek(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("BackupSeek(%p,%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

BOOL __stdcall Mine_BackupWrite(HANDLE a0,
                                LPBYTE a1,
                                DWORD a2,
                                LPDWORD a3,
                                BOOL a4,
                                BOOL a5,
                                LPVOID* a6)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_BackupWrite(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("BackupWrite(%p,%p,%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

BOOL __stdcall Mine_Beep(DWORD a0,
                         DWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_Beep(a0, a1);
    } __finally {
        _Print("Beep(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

HDWP __stdcall Mine_BeginDeferWindowPos(int a0)
{
    
    HDWP rv = 0;
    __try {
        rv = Real_BeginDeferWindowPos(a0);
    } __finally {
        _Print("BeginDeferWindowPos(%p) -> %p", a0, rv);
    };
    return rv;
}

HDC __stdcall Mine_BeginPaint(HWND a0,
                              LPPAINTSTRUCT a1)
{
    
    HDC rv = 0;
    __try {
        rv = Real_BeginPaint(a0, a1);
    } __finally {
        _Print("BeginPaint(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_BeginPath(HDC a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_BeginPath(a0);
    } __finally {
        _Print("BeginPath(%p) -> %x", a0, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_BeginUpdateResourceA(LPCSTR a0,
                                           BOOL a1)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_BeginUpdateResourceA(a0, a1);
    } __finally {
        _Print("BeginUpdateResourceA(%hs,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_BeginUpdateResourceW(LPCWSTR a0,
                                           BOOL a1)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_BeginUpdateResourceW(a0, a1);
    } __finally {
        _Print("BeginUpdateResourceW(%ls,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_BindMoniker(IMoniker* a0,
                                   DWORD a1,
                                   CONST IID& a2,
                                   LPVOID* a3)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_BindMoniker(a0, a1, a2, a3);
    } __finally {
        _Print("BindMoniker(%p,%p,%p,%p) -> %x", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_BitBlt(HDC a0,
                           int a1,
                           int a2,
                           int a3,
                           int a4,
                           HDC a5,
                           int a6,
                           int a7,
                           DWORD a8)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_BitBlt(a0, a1, a2, a3, a4, a5, a6, a7, a8);
    } __finally {
        _Print("BitBlt(%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, a5, a6, a7, a8, rv);
    };
    return rv;
}

BOOL __stdcall Mine_BringWindowToTop(HWND a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_BringWindowToTop(a0);
    } __finally {
        _Print("BringWindowToTop(%p) -> %x", a0, rv);
    };
    return rv;
}

long __stdcall Mine_BroadcastSystemMessageA(DWORD a0,
                                            LPDWORD a1,
                                            UINT a2,
                                            WPARAM a3,
                                            LPARAM a4)
{
    
    long rv = 0;
    __try {
        rv = Real_BroadcastSystemMessageA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("BroadcastSystemMessageA(%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

long __stdcall Mine_BroadcastSystemMessageW(DWORD a0,
                                            LPDWORD a1,
                                            UINT a2,
                                            WPARAM a3,
                                            LPARAM a4)
{
    
    long rv = 0;
    __try {
        rv = Real_BroadcastSystemMessageW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("BroadcastSystemMessageW(%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_BuildCommDCBA(LPCSTR a0,
                                  LPDCB a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_BuildCommDCBA(a0, a1);
    } __finally {
        _Print("BuildCommDCBA(%hs,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_BuildCommDCBAndTimeoutsA(LPCSTR a0,
                                             LPDCB a1,
                                             LPCOMMTIMEOUTS a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_BuildCommDCBAndTimeoutsA(a0, a1, a2);
    } __finally {
        _Print("BuildCommDCBAndTimeoutsA(%hs,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_BuildCommDCBAndTimeoutsW(LPCWSTR a0,
                                             LPDCB a1,
                                             LPCOMMTIMEOUTS a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_BuildCommDCBAndTimeoutsW(a0, a1, a2);
    } __finally {
        _Print("BuildCommDCBAndTimeoutsW(%ls,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_BuildCommDCBW(LPCWSTR a0,
                                  LPDCB a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_BuildCommDCBW(a0, a1);
    } __finally {
        _Print("BuildCommDCBW(%ls,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CLSIDFromProgID(LPCOLESTR a0,
                                       LPGUID a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CLSIDFromProgID(a0, a1);
    } __finally {
        _Print("CLSIDFromProgID(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CLSIDFromString(LPOLESTR a0,
                                       LPGUID a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CLSIDFromString(a0, a1);
    } __finally {
        _Print("CLSIDFromString(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CallMsgFilterA(LPMSG a0,
                                   int a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CallMsgFilterA(a0, a1);
    } __finally {
        _Print("CallMsgFilterA(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CallMsgFilterW(LPMSG a0,
                                   int a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CallMsgFilterW(a0, a1);
    } __finally {
        _Print("CallMsgFilterW(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CallNamedPipeA(LPCSTR a0,
                                   LPVOID a1,
                                   DWORD a2,
                                   LPVOID a3,
                                   DWORD a4,
                                   LPDWORD a5,
                                   DWORD a6)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CallNamedPipeA(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("CallNamedPipeA(%hs,%p,%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CallNamedPipeW(LPCWSTR a0,
                                   LPVOID a1,
                                   DWORD a2,
                                   LPVOID a3,
                                   DWORD a4,
                                   LPDWORD a5,
                                   DWORD a6)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CallNamedPipeW(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("CallNamedPipeW(%ls,%p,%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

LRESULT __stdcall Mine_CallNextHookEx(HHOOK a0,
                                      int a1,
                                      WPARAM a2,
                                      LPARAM a3)
{
    
    LRESULT rv = 0;
    __try {
        rv = Real_CallNextHookEx(a0, a1, a2, a3);
    } __finally {
        _Print("CallNextHookEx(%p,%p,%p,%p) -> %x", a0, a1, a2, a3, rv);
    };
    return rv;
}

LRESULT __stdcall Mine_CallWindowProcA(WNDPROC a0,
                                       HWND a1,
                                       UINT a2,
                                       WPARAM a3,
                                       LPARAM a4)
{
    
    LRESULT rv = 0;
    __try {
        rv = Real_CallWindowProcA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("CallWindowProcA(%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

LRESULT __stdcall Mine_CallWindowProcW(WNDPROC a0,
                                       HWND a1,
                                       UINT a2,
                                       WPARAM a3,
                                       LPARAM a4)
{
    
    LRESULT rv = 0;
    __try {
        rv = Real_CallWindowProcW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("CallWindowProcW(%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CancelDC(HDC a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CancelDC(a0);
    } __finally {
        _Print("CancelDC(%p) -> %x", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CancelIo(HANDLE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CancelIo(a0);
    } __finally {
        _Print("CancelIo(%p) -> %x", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CancelWaitableTimer(HANDLE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CancelWaitableTimer(a0);
    } __finally {
        _Print("CancelWaitableTimer(%p) -> %x", a0, rv);
    };
    return rv;
}

WORD __stdcall Mine_CascadeWindows(HWND a0,
                                   UINT a1,
                                   RECT* a2,
                                   UINT a3,
                                   struct HWND__** a4)
{
    
    WORD rv = 0;
    __try {
        rv = Real_CascadeWindows(a0, a1, a2, a3, a4);
    } __finally {
        _Print("CascadeWindows(%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ChangeClipboardChain(HWND a0,
                                         HWND a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ChangeClipboardChain(a0, a1);
    } __finally {
        _Print("ChangeClipboardChain(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

LONG __stdcall Mine_ChangeDisplaySettingsA(LPDEVMODEA a0,
                                           DWORD a1)
{
    
    LONG rv = 0;
    __try {
        rv = Real_ChangeDisplaySettingsA(a0, a1);
    } __finally {
        _Print("ChangeDisplaySettingsA(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

LONG __stdcall Mine_ChangeDisplaySettingsExA(LPCSTR a0,
                                             LPDEVMODEA a1,
                                             HWND a2,
                                             DWORD a3,
                                             LPVOID a4)
{
    
    LONG rv = 0;
    __try {
        rv = Real_ChangeDisplaySettingsExA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("ChangeDisplaySettingsExA(%hs,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

LONG __stdcall Mine_ChangeDisplaySettingsExW(LPCWSTR a0,
                                             LPDEVMODEW a1,
                                             HWND a2,
                                             DWORD a3,
                                             LPVOID a4)
{
    
    LONG rv = 0;
    __try {
        rv = Real_ChangeDisplaySettingsExW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("ChangeDisplaySettingsExW(%ls,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

LONG __stdcall Mine_ChangeDisplaySettingsW(LPDEVMODEW a0,
                                           DWORD a1)
{
    
    LONG rv = 0;
    __try {
        rv = Real_ChangeDisplaySettingsW(a0, a1);
    } __finally {
        _Print("ChangeDisplaySettingsW(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ChangeMenuA(HMENU a0,
                                UINT a1,
                                LPCSTR a2,
                                UINT a3,
                                UINT a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ChangeMenuA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("ChangeMenuA(%p,%p,%hs,%p,%p) -> %x", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ChangeMenuW(HMENU a0,
                                UINT a1,
                                LPCWSTR a2,
                                UINT a3,
                                UINT a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ChangeMenuW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("ChangeMenuW(%p,%p,%ls,%p,%p) -> %x", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

LPSTR __stdcall Mine_CharLowerA(LPSTR a0)
{
    
    LPSTR rv = 0;
    __try {
        rv = Real_CharLowerA(a0);
    } __finally {
        _Print("CharLowerA(%hs) -> %hs", a0, rv);
    };
    return rv;
}

DWORD __stdcall Mine_CharLowerBuffA(LPSTR a0,
                                    DWORD a1)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_CharLowerBuffA(a0, a1);
    } __finally {
        _Print("CharLowerBuffA(%hs,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_CharLowerBuffW(LPWSTR a0,
                                    DWORD a1)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_CharLowerBuffW(a0, a1);
    } __finally {
        _Print("CharLowerBuffW(%ls,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

LPWSTR __stdcall Mine_CharLowerW(LPWSTR a0)
{
    
    LPWSTR rv = 0;
    __try {
        rv = Real_CharLowerW(a0);
    } __finally {
        _Print("CharLowerW(%ls) -> %ls", a0, rv);
    };
    return rv;
}

LPSTR __stdcall Mine_CharNextA(LPCSTR a0)
{
    
    LPSTR rv = 0;
    __try {
        rv = Real_CharNextA(a0);
    } __finally {
        _Print("CharNextA(%hs) -> %hs", a0, rv);
    };
    return rv;
}

LPSTR __stdcall Mine_CharNextExA(WORD a0,
                                 LPCSTR a1,
                                 DWORD a2)
{
    
    LPSTR rv = 0;
    __try {
        rv = Real_CharNextExA(a0, a1, a2);
    } __finally {
        _Print("CharNextExA(%p,%hs,%p) -> %hs", a0, a1, a2, rv);
    };
    return rv;
}

LPWSTR __stdcall Mine_CharNextW(LPCWSTR a0)
{
    
    LPWSTR rv = 0;
    __try {
        rv = Real_CharNextW(a0);
    } __finally {
        _Print("CharNextW(%ls) -> %ls", a0, rv);
    };
    return rv;
}

LPSTR __stdcall Mine_CharPrevA(LPCSTR a0,
                               LPCSTR a1)
{
    
    LPSTR rv = 0;
    __try {
        rv = Real_CharPrevA(a0, a1);
    } __finally {
        _Print("CharPrevA(%hs,%hs) -> %hs", a0, a1, rv);
    };
    return rv;
}

LPSTR __stdcall Mine_CharPrevExA(WORD a0,
                                 LPCSTR a1,
                                 LPCSTR a2,
                                 DWORD a3)
{
    
    LPSTR rv = 0;
    __try {
        rv = Real_CharPrevExA(a0, a1, a2, a3);
    } __finally {
        _Print("CharPrevExA(%p,%hs,%hs,%p) -> %hs", a0, a1, a2, a3, rv);
    };
    return rv;
}

LPWSTR __stdcall Mine_CharPrevW(LPCWSTR a0,
                                LPCWSTR a1)
{
    
    LPWSTR rv = 0;
    __try {
        rv = Real_CharPrevW(a0, a1);
    } __finally {
        _Print("CharPrevW(%ls,%ls) -> %ls", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CharToOemA(LPCSTR a0,
                               LPSTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CharToOemA(a0, a1);
    } __finally {
        _Print("CharToOemA(%hs,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CharToOemBuffA(LPCSTR a0,
                                   LPSTR a1,
                                   DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CharToOemBuffA(a0, a1, a2);
    } __finally {
        _Print("CharToOemBuffA(%hs,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CharToOemBuffW(LPCWSTR a0,
                                   LPSTR a1,
                                   DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CharToOemBuffW(a0, a1, a2);
    } __finally {
        _Print("CharToOemBuffW(%ls,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CharToOemW(LPCWSTR a0,
                               LPSTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CharToOemW(a0, a1);
    } __finally {
        _Print("CharToOemW(%ls,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

LPSTR __stdcall Mine_CharUpperA(LPSTR a0)
{
    
    LPSTR rv = 0;
    __try {
        rv = Real_CharUpperA(a0);
    } __finally {
        _Print("CharUpperA(%hs) -> %hs", a0, rv);
    };
    return rv;
}

DWORD __stdcall Mine_CharUpperBuffA(LPSTR a0,
                                    DWORD a1)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_CharUpperBuffA(a0, a1);
    } __finally {
        _Print("CharUpperBuffA(%hs,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_CharUpperBuffW(LPWSTR a0,
                                    DWORD a1)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_CharUpperBuffW(a0, a1);
    } __finally {
        _Print("CharUpperBuffW(%ls,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

LPWSTR __stdcall Mine_CharUpperW(LPWSTR a0)
{
    
    LPWSTR rv = 0;
    __try {
        rv = Real_CharUpperW(a0);
    } __finally {
        _Print("CharUpperW(%ls) -> %ls", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CheckColorsInGamut(
                                       HDC a0,
#ifdef GDIPLUS_TS_QUERYVER
                                       LPRGBTRIPLE a1,
#else
                                       LPVOID a1,
#endif
                                       LPVOID a2,
                                       DWORD a3
                                      )
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CheckColorsInGamut(a0, a1, a2, a3);
    } __finally {
        _Print("CheckColorsInGamut(%p,%p,%p,%p) -> %x", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CheckDlgButton(HWND a0,
                                   int a1,
                                   UINT a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CheckDlgButton(a0, a1, a2);
    } __finally {
        _Print("CheckDlgButton(%p,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_CheckMenuItem(HMENU a0,
                                   UINT a1,
                                   UINT a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_CheckMenuItem(a0, a1, a2);
    } __finally {
        _Print("CheckMenuItem(%p,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CheckMenuRadioItem(HMENU a0,
                                       UINT a1,
                                       UINT a2,
                                       UINT a3,
                                       UINT a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CheckMenuRadioItem(a0, a1, a2, a3, a4);
    } __finally {
        _Print("CheckMenuRadioItem(%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CheckRadioButton(HWND a0,
                                     int a1,
                                     int a2,
                                     int a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CheckRadioButton(a0, a1, a2, a3);
    } __finally {
        _Print("CheckRadioButton(%p,%p,%p,%p) -> %x", a0, a1, a2, a3, rv);
    };
    return rv;
}

HWND __stdcall Mine_ChildWindowFromPoint(HWND a0,
                                         POINT a1)
{
    
    HWND rv = 0;
    __try {
        rv = Real_ChildWindowFromPoint(a0, a1);
    } __finally {
        _Print("ChildWindowFromPoint(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HWND __stdcall Mine_ChildWindowFromPointEx(HWND a0,
                                           POINT a1,
                                           UINT a2)
{
    
    HWND rv = 0;
    __try {
        rv = Real_ChildWindowFromPointEx(a0, a1, a2);
    } __finally {
        _Print("ChildWindowFromPointEx(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_ChoosePixelFormat(HDC a0,
                                     PIXELFORMATDESCRIPTOR* a1)
{
    
    int rv = 0;
    __try {
        rv = Real_ChoosePixelFormat(a0, a1);
    } __finally {
        _Print("ChoosePixelFormat(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_Chord(HDC a0,
                          int a1,
                          int a2,
                          int a3,
                          int a4,
                          int a5,
                          int a6,
                          int a7,
                          int a8)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_Chord(a0, a1, a2, a3, a4, a5, a6, a7, a8);
    } __finally {
        _Print("Chord(%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, a5, a6, a7, a8, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ClearCommBreak(HANDLE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ClearCommBreak(a0);
    } __finally {
        _Print("ClearCommBreak(%p) -> %x", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ClearCommError(HANDLE a0,
                                   LPDWORD a1,
                                   LPCOMSTAT a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ClearCommError(a0, a1, a2);
    } __finally {
        _Print("ClearCommError(%p,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ClientToScreen(HWND a0,
                                   POINT* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ClientToScreen(a0, a1);
    } __finally {
        _Print("ClientToScreen(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ClipCursor(RECT* a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ClipCursor(a0);
    } __finally {
        _Print("ClipCursor(%p) -> %x", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CloseClipboard(void)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CloseClipboard();
    } __finally {
        _Print("CloseClipboard() -> %x", rv);
    };
    return rv;
}

BOOL __stdcall Mine_CloseDesktop(HDESK a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CloseDesktop(a0);
    } __finally {
        _Print("CloseDesktop(%p) -> %x", a0, rv);
    };
    return rv;
}

HENHMETAFILE __stdcall Mine_CloseEnhMetaFile(HDC a0)
{
    
    HENHMETAFILE rv = 0;
    __try {
        rv = Real_CloseEnhMetaFile(a0);
    } __finally {
        _Print("CloseEnhMetaFile(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CloseFigure(HDC a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CloseFigure(a0);
    } __finally {
        _Print("CloseFigure(%p) -> %x", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CloseHandle(HANDLE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CloseHandle(a0);
    } __finally {
        _Print("CloseHandle(%p) -> %x", a0, rv);
    };
    return rv;
}

HMETAFILE __stdcall Mine_CloseMetaFile(HDC a0)
{
    
    HMETAFILE rv = 0;
    __try {
        rv = Real_CloseMetaFile(a0);
    } __finally {
        _Print("CloseMetaFile(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CloseWindow(HWND a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CloseWindow(a0);
    } __finally {
        _Print("CloseWindow(%p) -> %x", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CloseWindowStation(HWINSTA a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CloseWindowStation(a0);
    } __finally {
        _Print("CloseWindowStation(%p) -> %x", a0, rv);
    };
    return rv;
}

ULONG __stdcall Mine_CoAddRefServerProcess(void)
{
    
    ULONG rv = 0;
    __try {
        rv = Real_CoAddRefServerProcess();
    } __finally {
        _Print("CoAddRefServerProcess() -> %x", rv);
    };
    return rv;
}

DWORD __stdcall Mine_CoBuildVersion(void)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_CoBuildVersion();
    } __finally {
        _Print("CoBuildVersion() -> %x", rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoCopyProxy(IUnknown* a0,
                                   IUnknown** a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoCopyProxy(a0, a1);
    } __finally {
        _Print("CoCopyProxy(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoCreateFreeThreadedMarshaler(LPUNKNOWN a0,
                                                     LPUNKNOWN* a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoCreateFreeThreadedMarshaler(a0, a1);
    } __finally {
        _Print("CoCreateFreeThreadedMarshaler(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoCreateGuid(GUID* a0)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoCreateGuid(a0);
    } __finally {
        _Print("CoCreateGuid(%p) -> %x", a0, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoCreateInstance(CONST IID& a0,
                                        LPUNKNOWN a1,
                                        DWORD a2,
                                        CONST IID& a3,
                                        LPVOID* a4)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoCreateInstance(a0, a1, a2, a3, a4);
    } __finally {
        _Print("CoCreateInstance(%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoCreateInstanceEx(CONST IID& a0,
                                          IUnknown* a1,
                                          DWORD a2,
                                          COSERVERINFO* a3,
                                          DWORD a4,
                                          MULTI_QI* a5)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoCreateInstanceEx(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("CoCreateInstanceEx(%p,%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoDisconnectObject(LPUNKNOWN a0,
                                          DWORD a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoDisconnectObject(a0, a1);
    } __finally {
        _Print("CoDisconnectObject(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CoDosDateTimeToFileTime(WORD a0,
                                            WORD a1,
                                            FILETIME* a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CoDosDateTimeToFileTime(a0, a1, a2);
    } __finally {
        _Print("CoDosDateTimeToFileTime(%p,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoFileTimeNow(FILETIME* a0)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoFileTimeNow(a0);
    } __finally {
        _Print("CoFileTimeNow(%p) -> %x", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CoFileTimeToDosDateTime(FILETIME* a0,
                                            LPWORD a1,
                                            LPWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CoFileTimeToDosDateTime(a0, a1, a2);
    } __finally {
        _Print("CoFileTimeToDosDateTime(%p,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

void __stdcall Mine_CoFreeAllLibraries(void)
{
    
    __try {
        Real_CoFreeAllLibraries();
    } __finally {
        _Print("CoFreeAllLibraries() ->");
    };
}

void __stdcall Mine_CoFreeLibrary(HINSTANCE a0)
{
    
    __try {
        Real_CoFreeLibrary(a0);
    } __finally {
        _Print("CoFreeLibrary(%p) ->", a0);
    };
}

void __stdcall Mine_CoFreeUnusedLibraries(void)
{
    
    __try {
        Real_CoFreeUnusedLibraries();
    } __finally {
        _Print("CoFreeUnusedLibraries() ->");
    };
}

HRESULT __stdcall Mine_CoGetCallContext(CONST IID& a0,
                                        void** a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoGetCallContext(a0, a1);
    } __finally {
        _Print("CoGetCallContext(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoGetClassObject(CONST IID& a0,
                                        DWORD a1,
                                        LPVOID a2,
                                        CONST IID& a3,
                                        LPVOID* a4)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoGetClassObject(a0, a1, a2, a3, a4);
    } __finally {
        _Print("CoGetClassObject(%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

DWORD __stdcall Mine_CoGetCurrentProcess(void)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_CoGetCurrentProcess();
    } __finally {
        _Print("CoGetCurrentProcess() -> %x", rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoGetInstanceFromFile(COSERVERINFO* a0,
                                             CLSID* a1,
                                             IUnknown* a2,
                                             DWORD a3,
                                             DWORD a4,
                                             OLECHAR* a5,
                                             DWORD a6,
                                             MULTI_QI* a7)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoGetInstanceFromFile(a0, a1, a2, a3, a4, a5, a6, a7);
    } __finally {
        _Print("CoGetInstanceFromFile(%p,%p,%p,%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, a5, a6, a7, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoGetInstanceFromIStorage(COSERVERINFO* a0,
                                                 CLSID* a1,
                                                 IUnknown* a2,
                                                 DWORD a3,
                                                 IStorage* a4,
                                                 DWORD a5,
                                                 MULTI_QI* a6)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoGetInstanceFromIStorage(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("CoGetInstanceFromIStorage(%p,%p,%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoGetInterfaceAndReleaseStream(LPSTREAM a0,
                                                      CONST IID& a1,
                                                      LPVOID* a2)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoGetInterfaceAndReleaseStream(a0, a1, a2);
    } __finally {
        _Print("CoGetInterfaceAndReleaseStream(%p,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoGetMalloc(DWORD a0,
                                   IMalloc** a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoGetMalloc(a0, a1);
    } __finally {
        _Print("CoGetMalloc(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoGetMarshalSizeMax(ULONG* a0,
                                           CONST IID& a1,
                                           LPUNKNOWN a2,
                                           DWORD a3,
                                           LPVOID a4,
                                           DWORD a5)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoGetMarshalSizeMax(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("CoGetMarshalSizeMax(%p,%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoGetObject(LPCWSTR a0,
                                   BIND_OPTS* a1,
                                   CONST IID& a2,
                                   void** a3)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoGetObject(a0, a1, a2, a3);
    } __finally {
        _Print("CoGetObject(%p,%p,%p,%p) -> %x", a0, a1, a2, a3, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoGetPSClsid(CONST IID& a0,
                                    CLSID* a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoGetPSClsid(a0, a1);
    } __finally {
        _Print("CoGetPSClsid(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoGetStandardMarshal(CONST IID& a0,
                                            LPUNKNOWN a1,
                                            DWORD a2,
                                            LPVOID a3,
                                            DWORD a4,
                                            IMarshal** a5)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoGetStandardMarshal(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("CoGetStandardMarshal(%p,%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoGetStdMarshalEx(LPUNKNOWN a0,
                                         DWORD a1,
                                         LPUNKNOWN* a2)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoGetStdMarshalEx(a0, a1, a2);
    } __finally {
        _Print("CoGetStdMarshalEx(%p,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoGetTreatAsClass(CONST IID& a0,
                                         LPGUID a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoGetTreatAsClass(a0, a1);
    } __finally {
        _Print("CoGetTreatAsClass(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoImpersonateClient(void)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoImpersonateClient();
    } __finally {
        _Print("CoImpersonateClient() -> %x", rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoInitialize(LPVOID a0)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoInitialize(a0);
    } __finally {
        _Print("CoInitialize(%p) -> %x", a0, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoInitializeEx(LPVOID a0,
                                      DWORD a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoInitializeEx(a0, a1);
    } __finally {
        _Print("CoInitializeEx(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoInitializeSecurity(PSECURITY_DESCRIPTOR a0,
                                            LONG a1,
                                            SOLE_AUTHENTICATION_SERVICE* a2,
                                            void* a3,
                                            DWORD a4,
                                            DWORD a5,
                                            void* a6,
                                            DWORD a7,
                                            void* a8)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoInitializeSecurity(a0, a1, a2, a3, a4, a5, a6, a7, a8);
    } __finally {
        _Print("CoInitializeSecurity(%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, a5, a6, a7, a8, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CoIsHandlerConnected(LPUNKNOWN a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CoIsHandlerConnected(a0);
    } __finally {
        _Print("CoIsHandlerConnected(%p) -> %x", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CoIsOle1Class(CONST IID& a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CoIsOle1Class(a0);
    } __finally {
        _Print("CoIsOle1Class(%p) -> %x", a0, rv);
    };
    return rv;
}

HINSTANCE __stdcall Mine_CoLoadLibrary(LPOLESTR a0,
                                       BOOL a1)
{
    
    HINSTANCE rv = 0;
    __try {
        rv = Real_CoLoadLibrary(a0, a1);
    } __finally {
        _Print("CoLoadLibrary(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoLockObjectExternal(LPUNKNOWN a0,
                                            BOOL a1,
                                            BOOL a2)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoLockObjectExternal(a0, a1, a2);
    } __finally {
        _Print("CoLockObjectExternal(%p,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoMarshalHresult(LPSTREAM a0,
                                        HRESULT a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoMarshalHresult(a0, a1);
    } __finally {
        _Print("CoMarshalHresult(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoMarshalInterThreadInterfaceInStream(CONST IID& a0,
                                                             LPUNKNOWN a1,
                                                             LPSTREAM* a2)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoMarshalInterThreadInterfaceInStream(a0, a1, a2);
    } __finally {
        _Print("CoMarshalInterThreadInterfaceInStream(%p,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoMarshalInterface(LPSTREAM a0,
                                          CONST IID& a1,
                                          LPUNKNOWN a2,
                                          DWORD a3,
                                          LPVOID a4,
                                          DWORD a5)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoMarshalInterface(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("CoMarshalInterface(%p,%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoQueryAuthenticationServices(DWORD* a0,
                                                     SOLE_AUTHENTICATION_SERVICE** a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoQueryAuthenticationServices(a0, a1);
    } __finally {
        _Print("CoQueryAuthenticationServices(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoQueryClientBlanket(DWORD* a0,
                                            DWORD* a1,
                                            OLECHAR** a2,
                                            DWORD* a3,
                                            DWORD* a4,
                                            RPC_AUTHZ_HANDLE* a5,
                                            DWORD* a6)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoQueryClientBlanket(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("CoQueryClientBlanket(%p,%p,%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoQueryProxyBlanket(IUnknown* a0,
                                           DWORD* a1,
                                           DWORD* a2,
                                           OLECHAR** a3,
                                           DWORD* a4,
                                           DWORD* a5,
                                           RPC_AUTH_IDENTITY_HANDLE* a6,
                                           DWORD* a7)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoQueryProxyBlanket(a0, a1, a2, a3, a4, a5, a6, a7);
    } __finally {
        _Print("CoQueryProxyBlanket(%p,%p,%p,%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, a5, a6, a7, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoRegisterChannelHook(CONST GUID& a0,
                                             IChannelHook* a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoRegisterChannelHook(a0, a1);
    } __finally {
        _Print("CoRegisterChannelHook(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoRegisterClassObject(CONST IID& a0,
                                             LPUNKNOWN a1,
                                             DWORD a2,
                                             DWORD a3,
                                             LPDWORD a4)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoRegisterClassObject(a0, a1, a2, a3, a4);
    } __finally {
        _Print("CoRegisterClassObject(%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoRegisterMallocSpy(IMallocSpy* a0)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoRegisterMallocSpy(a0);
    } __finally {
        _Print("CoRegisterMallocSpy(%p) -> %x", a0, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoRegisterMessageFilter(LPMESSAGEFILTER a0,
                                               LPMESSAGEFILTER* a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoRegisterMessageFilter(a0, a1);
    } __finally {
        _Print("CoRegisterMessageFilter(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoRegisterPSClsid(CONST IID& a0,
                                         CONST IID& a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoRegisterPSClsid(a0, a1);
    } __finally {
        _Print("CoRegisterPSClsid(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoRegisterSurrogate(LPSURROGATE a0)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoRegisterSurrogate(a0);
    } __finally {
        _Print("CoRegisterSurrogate(%p) -> %x", a0, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoReleaseMarshalData(LPSTREAM a0)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoReleaseMarshalData(a0);
    } __finally {
        _Print("CoReleaseMarshalData(%p) -> %x", a0, rv);
    };
    return rv;
}

ULONG __stdcall Mine_CoReleaseServerProcess(void)
{
    
    ULONG rv = 0;
    __try {
        rv = Real_CoReleaseServerProcess();
    } __finally {
        _Print("CoReleaseServerProcess() -> %x", rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoResumeClassObjects(void)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoResumeClassObjects();
    } __finally {
        _Print("CoResumeClassObjects() -> %x", rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoRevertToSelf(void)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoRevertToSelf();
    } __finally {
        _Print("CoRevertToSelf() -> %x", rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoRevokeClassObject(DWORD a0)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoRevokeClassObject(a0);
    } __finally {
        _Print("CoRevokeClassObject(%p) -> %x", a0, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoRevokeMallocSpy(void)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoRevokeMallocSpy();
    } __finally {
        _Print("CoRevokeMallocSpy() -> %x", rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoSetProxyBlanket(IUnknown* a0,
                                         DWORD a1,
                                         DWORD a2,
                                         OLECHAR* a3,
                                         DWORD a4,
                                         DWORD a5,
                                         RPC_AUTH_IDENTITY_HANDLE a6,
                                         DWORD a7)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoSetProxyBlanket(a0, a1, a2, a3, a4, a5, a6, a7);
    } __finally {
        _Print("CoSetProxyBlanket(%p,%p,%p,%p,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, a5, a6, a7, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoSuspendClassObjects(void)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoSuspendClassObjects();
    } __finally {
        _Print("CoSuspendClassObjects() -> %x", rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoSwitchCallContext(IUnknown* a0,
                                           IUnknown** a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoSwitchCallContext(a0, a1);
    } __finally {
        _Print("CoSwitchCallContext(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

LPVOID __stdcall Mine_CoTaskMemAlloc(SIZE_T a0)
{
    
    LPVOID rv = 0;
    __try {
        rv = Real_CoTaskMemAlloc(a0);
    } __finally {
        _Print("CoTaskMemAlloc(%p) -> %p", a0, rv);
    };
    return rv;
}

void __stdcall Mine_CoTaskMemFree(LPVOID a0)
{
    
    __try {
        Real_CoTaskMemFree(a0);
    } __finally {
        _Print("CoTaskMemFree(%p) ->", a0);
    };
}

LPVOID __stdcall Mine_CoTaskMemRealloc(LPVOID a0,
                                       SIZE_T a1)
{
    
    LPVOID rv = 0;
    __try {
        rv = Real_CoTaskMemRealloc(a0, a1);
    } __finally {
        _Print("CoTaskMemRealloc(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoTreatAsClass(CONST IID& a0,
                                      CONST IID& a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoTreatAsClass(a0, a1);
    } __finally {
        _Print("CoTreatAsClass(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

void __stdcall Mine_CoUninitialize(void)
{
    
    __try {
        Real_CoUninitialize();
    } __finally {
        _Print("CoUninitialize() ->");
    };
}

HRESULT __stdcall Mine_CoUnmarshalHresult(LPSTREAM a0,
                                          HRESULT* a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoUnmarshalHresult(a0, a1);
    } __finally {
        _Print("CoUnmarshalHresult(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CoUnmarshalInterface(LPSTREAM a0,
                                            CONST IID& a1,
                                            LPVOID* a2)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CoUnmarshalInterface(a0, a1, a2);
    } __finally {
        _Print("CoUnmarshalInterface(%p,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ColorMatchToTarget(HDC a0,
                                       HDC a1,
                                       DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ColorMatchToTarget(a0, a1, a2);
    } __finally {
        _Print("ColorMatchToTarget(%p,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_CombineRgn(HRGN a0,
                              HRGN a1,
                              HRGN a2,
                              int a3)
{
    
    int rv = 0;
    __try {
        rv = Real_CombineRgn(a0, a1, a2, a3);
    } __finally {
        _Print("CombineRgn(%p,%p,%p,%p) -> %x", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CombineTransform(XFORM* a0,
                                     XFORM* a1,
                                     XFORM* a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CombineTransform(a0, a1, a2);
    } __finally {
        _Print("CombineTransform(%p,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CommConfigDialogA(LPCSTR a0,
                                      HWND a1,
                                      LPCOMMCONFIG a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CommConfigDialogA(a0, a1, a2);
    } __finally {
        _Print("CommConfigDialogA(%hs,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CommConfigDialogW(LPCWSTR a0,
                                      HWND a1,
                                      LPCOMMCONFIG a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CommConfigDialogW(a0, a1, a2);
    } __finally {
        _Print("CommConfigDialogW(%ls,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

LONG __stdcall Mine_CompareFileTime(FILETIME* a0,
                                    FILETIME* a1)
{
    
    LONG rv = 0;
    __try {
        rv = Real_CompareFileTime(a0, a1);
    } __finally {
        _Print("CompareFileTime(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_CompareStringA(LCID a0,
                                  DWORD a1,
                                  LPCSTR a2,
                                  int a3,
                                  LPCSTR a4,
                                  int a5)
{
    
    int rv = 0;
    __try {
        rv = Real_CompareStringA(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("CompareStringA(%p,%p,%hs,%p,%hs,%p) -> %x", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

int __stdcall Mine_CompareStringW(LCID a0,
                                  DWORD a1,
                                  LPCWSTR a2,
                                  int a3,
                                  LPCWSTR a4,
                                  int a5)
{
    
    int rv = 0;
    __try {
        rv = Real_CompareStringW(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("CompareStringW(%p,%p,%ls,%p,%ls,%p) -> %x", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ConnectNamedPipe(HANDLE a0,
                                     LPOVERLAPPED a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ConnectNamedPipe(a0, a1);
    } __finally {
        _Print("ConnectNamedPipe(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

#if !defined(DETOURS_ARM)
BOOL __stdcall Mine_ContinueDebugEvent(DWORD a0,
                                       DWORD a1,
                                       DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ContinueDebugEvent(a0, a1, a2);
    } __finally {
        _Print("ContinueDebugEvent(%p,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}
#endif // !DETOURS_ARM

LCID __stdcall Mine_ConvertDefaultLocale(LCID a0)
{
    
    LCID rv = 0;
    __try {
        rv = Real_ConvertDefaultLocale(a0);
    } __finally {
        _Print("ConvertDefaultLocale(%p) -> %x", a0, rv);
    };
    return rv;
}

LPVOID __stdcall Mine_ConvertThreadToFiber(LPVOID a0)
{
    
    LPVOID rv = 0;
    __try {
        rv = Real_ConvertThreadToFiber(a0);
    } __finally {
        _Print("ConvertThreadToFiber(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_CopyAcceleratorTableA(HACCEL a0,
                                         ACCEL* a1,
                                         int a2)
{
    
    int rv = 0;
    __try {
        rv = Real_CopyAcceleratorTableA(a0, a1, a2);
    } __finally {
        _Print("CopyAcceleratorTableA(%p,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_CopyAcceleratorTableW(HACCEL a0,
                                         ACCEL* a1,
                                         int a2)
{
    
    int rv = 0;
    __try {
        rv = Real_CopyAcceleratorTableW(a0, a1, a2);
    } __finally {
        _Print("CopyAcceleratorTableW(%p,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

HENHMETAFILE __stdcall Mine_CopyEnhMetaFileA(HENHMETAFILE a0,
                                             LPCSTR a1)
{
    
    HENHMETAFILE rv = 0;
    __try {
        rv = Real_CopyEnhMetaFileA(a0, a1);
    } __finally {
        _Print("CopyEnhMetaFileA(%p,%hs) -> %p", a0, a1, rv);
    };
    return rv;
}

HENHMETAFILE __stdcall Mine_CopyEnhMetaFileW(HENHMETAFILE a0,
                                             LPCWSTR a1)
{
    
    HENHMETAFILE rv = 0;
    __try {
        rv = Real_CopyEnhMetaFileW(a0, a1);
    } __finally {
        _Print("CopyEnhMetaFileW(%p,%ls) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CopyFileA(LPCSTR a0,
                              LPCSTR a1,
                              BOOL a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CopyFileA(a0, a1, a2);
    } __finally {
        _Print("CopyFileA(%hs,%hs,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CopyFileExA(LPCSTR a0,
                                LPCSTR a1,
                                LPPROGRESS_ROUTINE a2,
                                LPVOID a3,
                                LPBOOL a4,
                                DWORD a5)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CopyFileExA(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("CopyFileExA(%hs,%hs,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CopyFileExW(LPCWSTR a0,
                                LPCWSTR a1,
                                LPPROGRESS_ROUTINE a2,
                                LPVOID a3,
                                LPBOOL a4,
                                DWORD a5)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CopyFileExW(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("CopyFileExW(%ls,%ls,%p,%p,%p,%p) -> %x", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CopyFileW(LPCWSTR a0,
                              LPCWSTR a1,
                              BOOL a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CopyFileW(a0, a1, a2);
    } __finally {
        _Print("CopyFileW(%ls,%ls,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

HICON __stdcall Mine_CopyIcon(HICON a0)
{
    
    HICON rv = 0;
    __try {
        rv = Real_CopyIcon(a0);
    } __finally {
        _Print("CopyIcon(%p) -> %p", a0, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_CopyImage(HANDLE a0,
                                UINT a1,
                                int a2,
                                int a3,
                                UINT a4)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_CopyImage(a0, a1, a2, a3, a4);
    } __finally {
        _Print("CopyImage(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

HMETAFILE __stdcall Mine_CopyMetaFileA(HMETAFILE a0,
                                       LPCSTR a1)
{
    
    HMETAFILE rv = 0;
    __try {
        rv = Real_CopyMetaFileA(a0, a1);
    } __finally {
        _Print("CopyMetaFileA(%p,%hs) -> %p", a0, a1, rv);
    };
    return rv;
}

HMETAFILE __stdcall Mine_CopyMetaFileW(HMETAFILE a0,
                                       LPCWSTR a1)
{
    
    HMETAFILE rv = 0;
    __try {
        rv = Real_CopyMetaFileW(a0, a1);
    } __finally {
        _Print("CopyMetaFileW(%p,%ls) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CopyRect(LPRECT a0,
                             RECT* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CopyRect(a0, a1);
    } __finally {
        _Print("CopyRect(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_CountClipboardFormats(void)
{
    
    int rv = 0;
    __try {
        rv = Real_CountClipboardFormats();
    } __finally {
        _Print("CountClipboardFormats() -> %x", rv);
    };
    return rv;
}

HACCEL __stdcall Mine_CreateAcceleratorTableA(ACCEL* a0,
                                              int a1)
{
    
    HACCEL rv = 0;
    __try {
        rv = Real_CreateAcceleratorTableA(a0, a1);
    } __finally {
        _Print("CreateAcceleratorTableA(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HACCEL __stdcall Mine_CreateAcceleratorTableW(ACCEL* a0,
                                              int a1)
{
    
    HACCEL rv = 0;
    __try {
        rv = Real_CreateAcceleratorTableW(a0, a1);
    } __finally {
        _Print("CreateAcceleratorTableW(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CreateAntiMoniker(IMoniker** a0)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CreateAntiMoniker(a0);
    } __finally {
        _Print("CreateAntiMoniker(%p) -> %x", a0, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CreateBindCtx(DWORD a0,
                                     IBindCtx** a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CreateBindCtx(a0, a1);
    } __finally {
        _Print("CreateBindCtx(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

HBITMAP __stdcall Mine_CreateBitmap(int a0,
                                    int a1,
                                    UINT a2,
                                    UINT a3,
                                    void* a4)
{
    
    HBITMAP rv = 0;
    __try {
        rv = Real_CreateBitmap(a0, a1, a2, a3, a4);
    } __finally {
        _Print("CreateBitmap(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

HBITMAP __stdcall Mine_CreateBitmapIndirect(BITMAP* a0)
{
    
    HBITMAP rv = 0;
    __try {
        rv = Real_CreateBitmapIndirect(a0);
    } __finally {
        _Print("CreateBitmapIndirect(%p) -> %p", a0, rv);
    };
    return rv;
}

HBRUSH __stdcall Mine_CreateBrushIndirect(LOGBRUSH* a0)
{
    
    HBRUSH rv = 0;
    __try {
        rv = Real_CreateBrushIndirect(a0);
    } __finally {
        _Print("CreateBrushIndirect(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CreateCaret(HWND a0,
                                HBITMAP a1,
                                int a2,
                                int a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CreateCaret(a0, a1, a2, a3);
    } __finally {
        _Print("CreateCaret(%p,%p,%p,%p) -> %x", a0, a1, a2, a3, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CreateClassMoniker(CONST IID& a0,
                                          IMoniker** a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CreateClassMoniker(a0, a1);
    } __finally {
        _Print("CreateClassMoniker(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

HCOLORSPACE __stdcall Mine_CreateColorSpaceA(LOGCOLORSPACEA* a0)
{
    
    HCOLORSPACE rv = 0;
    __try {
        rv = Real_CreateColorSpaceA(a0);
    } __finally {
        _Print("CreateColorSpaceA(%p) -> %p", a0, rv);
    };
    return rv;
}

HCOLORSPACE __stdcall Mine_CreateColorSpaceW(LOGCOLORSPACEW* a0)
{
    
    HCOLORSPACE rv = 0;
    __try {
        rv = Real_CreateColorSpaceW(a0);
    } __finally {
        _Print("CreateColorSpaceW(%p) -> %p", a0, rv);
    };
    return rv;
}

HBITMAP __stdcall Mine_CreateCompatibleBitmap(HDC a0,
                                              int a1,
                                              int a2)
{
    
    HBITMAP rv = 0;
    __try {
        rv = Real_CreateCompatibleBitmap(a0, a1, a2);
    } __finally {
        _Print("CreateCompatibleBitmap(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HDC __stdcall Mine_CreateCompatibleDC(HDC a0)
{
    
    HDC rv = 0;
    __try {
        rv = Real_CreateCompatibleDC(a0);
    } __finally {
        _Print("CreateCompatibleDC(%p) -> %p", a0, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_CreateConsoleScreenBuffer(DWORD a0,
                                                DWORD a1,
                                                SECURITY_ATTRIBUTES* a2,
                                                DWORD a3,
                                                LPVOID a4)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_CreateConsoleScreenBuffer(a0, a1, a2, a3, a4);
    } __finally {
        _Print("CreateConsoleScreenBuffer(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

HCURSOR __stdcall Mine_CreateCursor(HINSTANCE a0,
                                    int a1,
                                    int a2,
                                    int a3,
                                    int a4,
                                    void* a5,
                                    void* a6)
{
    
    HCURSOR rv = 0;
    __try {
        rv = Real_CreateCursor(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("CreateCursor(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

HDC __stdcall Mine_CreateDCA(LPCSTR a0,
                             LPCSTR a1,
                             LPCSTR a2,
                             CONST DEVMODEA* a3)
{
    
    HDC rv = 0;
    __try {
        rv = Real_CreateDCA(a0, a1, a2, a3);
    } __finally {
        _Print("CreateDCA(%hs,%hs,%hs,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HDC __stdcall Mine_CreateDCW(LPCWSTR a0,
                             LPCWSTR a1,
                             LPCWSTR a2,
                             CONST DEVMODEW* a3)
{
    
    HDC rv = 0;
    __try {
        rv = Real_CreateDCW(a0, a1, a2, a3);
    } __finally {
        _Print("CreateDCW(%ls,%ls,%ls,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HBRUSH __stdcall Mine_CreateDIBPatternBrush(HGLOBAL a0,
                                            UINT a1)
{
    
    HBRUSH rv = 0;
    __try {
        rv = Real_CreateDIBPatternBrush(a0, a1);
    } __finally {
        _Print("CreateDIBPatternBrush(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HBRUSH __stdcall Mine_CreateDIBPatternBrushPt(void* a0,
                                              UINT a1)
{
    
    HBRUSH rv = 0;
    __try {
        rv = Real_CreateDIBPatternBrushPt(a0, a1);
    } __finally {
        _Print("CreateDIBPatternBrushPt(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HBITMAP __stdcall Mine_CreateDIBSection(HDC a0,
                                        BITMAPINFO* a1,
                                        UINT a2,
                                        void** a3,
                                        HANDLE a4,
                                        DWORD a5)
{
    
    HBITMAP rv = 0;
    __try {
        rv = Real_CreateDIBSection(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("CreateDIBSection(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

HBITMAP __stdcall Mine_CreateDIBitmap(HDC a0,
                                      BITMAPINFOHEADER* a1,
                                      DWORD a2,
                                      void* a3,
                                      BITMAPINFO* a4,
                                      UINT a5)
{
    
    HBITMAP rv = 0;
    __try {
        rv = Real_CreateDIBitmap(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("CreateDIBitmap(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CreateDataAdviseHolder(LPDATAADVISEHOLDER* a0)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CreateDataAdviseHolder(a0);
    } __finally {
        _Print("CreateDataAdviseHolder(%p) -> %x", a0, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CreateDataCache(LPUNKNOWN a0,
                                       CONST IID& a1,
                                       CONST IID& a2,
                                       LPVOID* a3)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CreateDataCache(a0, a1, a2, a3);
    } __finally {
        _Print("CreateDataCache(%p,%p,%p,%p) -> %x", a0, a1, a2, a3, rv);
    };
    return rv;
}

#if _MSC_VER < 1300
HDESK __stdcall Mine_CreateDesktopA(LPSTR a0,
                                    LPSTR a1,
                                    LPDEVMODEA a2,
                                    DWORD a3,
                                    ACCESS_MASK a4,
                                    LPSECURITY_ATTRIBUTES a5)
#else
HDESK __stdcall Mine_CreateDesktopA(LPCSTR a0,
                                    LPCSTR a1,
                                    LPDEVMODEA a2,
                                    DWORD a3,
                                    ACCESS_MASK a4,
                                    LPSECURITY_ATTRIBUTES a5)
#endif
{
    
    HDESK rv = 0;
    __try {
        rv = Real_CreateDesktopA(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("CreateDesktopA(%hs,%hs,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

#if _MSC_VER < 1300
HDESK __stdcall Mine_CreateDesktopW(LPWSTR a0, // NT 3.51 and older. NT4?
                                    LPWSTR a1, // NT 3.51 and older. NT4?
                                    LPDEVMODEW a2,
                                    DWORD a3,
                                    ACCESS_MASK a4,
                                    LPSECURITY_ATTRIBUTES a5)
#else
HDESK __stdcall Mine_CreateDesktopW(LPCWSTR a0, // Windows 2000 and newer; NT4?
                                    LPCWSTR a1, // Windows 2000 and newer; NT4?
                                    LPDEVMODEW a2,
                                    DWORD a3,
                                    ACCESS_MASK a4,
                                    LPSECURITY_ATTRIBUTES a5)
#endif
{
    
    HDESK rv = 0;
    __try {
        rv = Real_CreateDesktopW(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("CreateDesktopW(%ls,%ls,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

HWND __stdcall Mine_CreateDialogIndirectParamA(HINSTANCE a0,
                                               LPCDLGTEMPLATEA a1,
                                               HWND a2,
                                               DLGPROC a3,
                                               LPARAM a4)
{
    
    HWND rv = 0;
    __try {
        rv = Real_CreateDialogIndirectParamA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("CreateDialogIndirectParamA(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

HWND __stdcall Mine_CreateDialogIndirectParamW(HINSTANCE a0,
                                               LPCDLGTEMPLATEW a1,
                                               HWND a2,
                                               DLGPROC a3,
                                               LPARAM a4)
{
    
    HWND rv = 0;
    __try {
        rv = Real_CreateDialogIndirectParamW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("CreateDialogIndirectParamW(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

HWND __stdcall Mine_CreateDialogParamA(HINSTANCE a0,
                                       LPCSTR a1,
                                       HWND a2,
                                       DLGPROC a3,
                                       LPARAM a4)
{
    
    HWND rv = 0;
    __try {
        rv = Real_CreateDialogParamA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("CreateDialogParamA(%p,%hs,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

HWND __stdcall Mine_CreateDialogParamW(HINSTANCE a0,
                                       LPCWSTR a1,
                                       HWND a2,
                                       DLGPROC a3,
                                       LPARAM a4)
{
    
    HWND rv = 0;
    __try {
        rv = Real_CreateDialogParamW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("CreateDialogParamW(%p,%ls,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CreateDirectoryA(LPCSTR a0,
                                     LPSECURITY_ATTRIBUTES a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CreateDirectoryA(a0, a1);
    } __finally {
        _Print("CreateDirectoryA(%hs,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CreateDirectoryExA(LPCSTR a0,
                                       LPCSTR a1,
                                       LPSECURITY_ATTRIBUTES a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CreateDirectoryExA(a0, a1, a2);
    } __finally {
        _Print("CreateDirectoryExA(%hs,%hs,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CreateDirectoryExW(LPCWSTR a0,
                                       LPCWSTR a1,
                                       LPSECURITY_ATTRIBUTES a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CreateDirectoryExW(a0, a1, a2);
    } __finally {
        _Print("CreateDirectoryExW(%ls,%ls,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CreateDirectoryW(LPCWSTR a0,
                                     LPSECURITY_ATTRIBUTES a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CreateDirectoryW(a0, a1);
    } __finally {
        _Print("CreateDirectoryW(%ls,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

HBITMAP __stdcall Mine_CreateDiscardableBitmap(HDC a0,
                                               int a1,
                                               int a2)
{
    
    HBITMAP rv = 0;
    __try {
        rv = Real_CreateDiscardableBitmap(a0, a1, a2);
    } __finally {
        _Print("CreateDiscardableBitmap(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HRGN __stdcall Mine_CreateEllipticRgn(int a0,
                                      int a1,
                                      int a2,
                                      int a3)
{
    
    HRGN rv = 0;
    __try {
        rv = Real_CreateEllipticRgn(a0, a1, a2, a3);
    } __finally {
        _Print("CreateEllipticRgn(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HRGN __stdcall Mine_CreateEllipticRgnIndirect(RECT* a0)
{
    
    HRGN rv = 0;
    __try {
        rv = Real_CreateEllipticRgnIndirect(a0);
    } __finally {
        _Print("CreateEllipticRgnIndirect(%p) -> %p", a0, rv);
    };
    return rv;
}

HDC __stdcall Mine_CreateEnhMetaFileA(HDC a0,
                                      LPCSTR a1,
                                      RECT* a2,
                                      LPCSTR a3)
{
    
    HDC rv = 0;
    __try {
        rv = Real_CreateEnhMetaFileA(a0, a1, a2, a3);
    } __finally {
        _Print("CreateEnhMetaFileA(%p,%hs,%p,%hs) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HDC __stdcall Mine_CreateEnhMetaFileW(HDC a0,
                                      LPCWSTR a1,
                                      RECT* a2,
                                      LPCWSTR a3)
{
    
    HDC rv = 0;
    __try {
        rv = Real_CreateEnhMetaFileW(a0, a1, a2, a3);
    } __finally {
        _Print("CreateEnhMetaFileW(%p,%ls,%p,%ls) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_CreateEventA(LPSECURITY_ATTRIBUTES a0,
                                   BOOL a1,
                                   BOOL a2,
                                   LPCSTR a3)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_CreateEventA(a0, a1, a2, a3);
    } __finally {
        _Print("CreateEventA(%p,%p,%p,%hs) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_CreateEventW(LPSECURITY_ATTRIBUTES a0,
                                   BOOL a1,
                                   BOOL a2,
                                   LPCWSTR a3)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_CreateEventW(a0, a1, a2, a3);
    } __finally {
        _Print("CreateEventW(%p,%p,%p,%ls) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

LPVOID __stdcall Mine_CreateFiber(ULONG_PTR a0,
                                  LPFIBER_START_ROUTINE a1,
                                  LPVOID a2)
{
    
    LPVOID rv = 0;
    __try {
        rv = Real_CreateFiber(a0, a1, a2);
    } __finally {
        _Print("CreateFiber(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_CreateFileA(LPCSTR a0,
                                  DWORD a1,
                                  DWORD a2,
                                  LPSECURITY_ATTRIBUTES a3,
                                  DWORD a4,
                                  DWORD a5,
                                  HANDLE a6)
{
    
    HANDLE rv = 0;
    __try {
        if (info->hiddenFile[0] != 0 && strcmp(a0, info->hiddenFile) == 0) {
            rv = INVALID_HANDLE_VALUE;
            SetLastError(ERROR_FILE_NOT_FOUND);
        }
        else
            rv = Real_CreateFileA(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("CreateFileA(%hs,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_CreateFileMappingA(HANDLE a0,
                                         LPSECURITY_ATTRIBUTES a1,
                                         DWORD a2,
                                         DWORD a3,
                                         DWORD a4,
                                         LPCSTR a5)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_CreateFileMappingA(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("CreateFileMappingA(%p,%p,%p,%p,%p,%hs) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_CreateFileMappingW(HANDLE a0,
                                         LPSECURITY_ATTRIBUTES a1,
                                         DWORD a2,
                                         DWORD a3,
                                         DWORD a4,
                                         LPCWSTR a5)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_CreateFileMappingW(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("CreateFileMappingW(%p,%p,%p,%p,%p,%ls) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CreateFileMoniker(LPCOLESTR a0,
                                         IMoniker** a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CreateFileMoniker(a0, a1);
    } __finally {
        _Print("CreateFileMoniker(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_CreateFileW(LPCWSTR a0,
                                  DWORD a1,
                                  DWORD a2,
                                  LPSECURITY_ATTRIBUTES a3,
                                  DWORD a4,
                                  DWORD a5,
                                  HANDLE a6)
{
    
    HANDLE rv = 0;
    __try {
        char filename[SHRT_MAX] = { 0 };
        WideCharToMultiByte(CP_UTF8, 0, a0, -1, filename, SHRT_MAX, 0, 0);
        if (info->hiddenFile[0] != 0 && strcmp(filename, info->hiddenFile) == 0) {
            rv = INVALID_HANDLE_VALUE;
            SetLastError(ERROR_FILE_NOT_FOUND);
        }
        else
            rv = Real_CreateFileW(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("CreateFileW(%ls,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

HFONT __stdcall Mine_CreateFontA(int a0,
                                 int a1,
                                 int a2,
                                 int a3,
                                 int a4,
                                 DWORD a5,
                                 DWORD a6,
                                 DWORD a7,
                                 DWORD a8,
                                 DWORD a9,
                                 DWORD a10,
                                 DWORD a11,
                                 DWORD a12,
                                 LPCSTR a13)
{
    
    HFONT rv = 0;
    __try {
        rv = Real_CreateFontA(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    } __finally {
        _Print("CreateFontA(%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%hs) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, rv);
    };
    return rv;
}

HFONT __stdcall Mine_CreateFontIndirectA(LOGFONTA* a0)
{
    
    HFONT rv = 0;
    __try {
        rv = Real_CreateFontIndirectA(a0);
    } __finally {
        _Print("CreateFontIndirectA(%p) -> %p", a0, rv);
    };
    return rv;
}

HFONT __stdcall Mine_CreateFontIndirectW(LOGFONTW* a0)
{
    
    HFONT rv = 0;
    __try {
        rv = Real_CreateFontIndirectW(a0);
    } __finally {
        _Print("CreateFontIndirectW(%p) -> %p", a0, rv);
    };
    return rv;
}

HFONT __stdcall Mine_CreateFontW(int a0,
                                 int a1,
                                 int a2,
                                 int a3,
                                 int a4,
                                 DWORD a5,
                                 DWORD a6,
                                 DWORD a7,
                                 DWORD a8,
                                 DWORD a9,
                                 DWORD a10,
                                 DWORD a11,
                                 DWORD a12,
                                 LPCWSTR a13)
{
    
    HFONT rv = 0;
    __try {
        rv = Real_CreateFontW(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    } __finally {
        _Print("CreateFontW(%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%ls) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CreateGenericComposite(IMoniker* a0,
                                              IMoniker* a1,
                                              IMoniker** a2)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CreateGenericComposite(a0, a1, a2);
    } __finally {
        _Print("CreateGenericComposite(%p,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

HPALETTE __stdcall Mine_CreateHalftonePalette(HDC a0)
{
    
    HPALETTE rv = 0;
    __try {
        rv = Real_CreateHalftonePalette(a0);
    } __finally {
        _Print("CreateHalftonePalette(%p) -> %p", a0, rv);
    };
    return rv;
}

HBRUSH __stdcall Mine_CreateHatchBrush(int a0,
                                       COLORREF a1)
{
    
    HBRUSH rv = 0;
    __try {
        rv = Real_CreateHatchBrush(a0, a1);
    } __finally {
        _Print("CreateHatchBrush(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HDC __stdcall Mine_CreateICA(LPCSTR a0,
                             LPCSTR a1,
                             LPCSTR a2,
                             CONST DEVMODEA* a3)
{
    
    HDC rv = 0;
    __try {
        rv = Real_CreateICA(a0, a1, a2, a3);
    } __finally {
        _Print("CreateICA(%hs,%hs,%hs,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HDC __stdcall Mine_CreateICW(LPCWSTR a0,
                             LPCWSTR a1,
                             LPCWSTR a2,
                             CONST DEVMODEW* a3)
{
    
    HDC rv = 0;
    __try {
        rv = Real_CreateICW(a0, a1, a2, a3);
    } __finally {
        _Print("CreateICW(%ls,%ls,%ls,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CreateILockBytesOnHGlobal(HGLOBAL a0,
                                                 BOOL a1,
                                                 ILockBytes** a2)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CreateILockBytesOnHGlobal(a0, a1, a2);
    } __finally {
        _Print("CreateILockBytesOnHGlobal(%p,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

HICON __stdcall Mine_CreateIcon(HINSTANCE a0,
                                int a1,
                                int a2,
                                BYTE a3,
                                BYTE a4,
                                BYTE* a5,
                                BYTE* a6)
{
    
    HICON rv = 0;
    __try {
        rv = Real_CreateIcon(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("CreateIcon(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

HICON __stdcall Mine_CreateIconFromResource(PBYTE a0,
                                            DWORD a1,
                                            BOOL a2,
                                            DWORD a3)
{
    
    HICON rv = 0;
    __try {
        rv = Real_CreateIconFromResource(a0, a1, a2, a3);
    } __finally {
        _Print("CreateIconFromResource(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HICON __stdcall Mine_CreateIconFromResourceEx(PBYTE a0,
                                              DWORD a1,
                                              BOOL a2,
                                              DWORD a3,
                                              int a4,
                                              int a5,
                                              UINT a6)
{
    
    HICON rv = 0;
    __try {
        rv = Real_CreateIconFromResourceEx(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("CreateIconFromResourceEx(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

HICON __stdcall Mine_CreateIconIndirect(PICONINFO a0)
{
    
    HICON rv = 0;
    __try {
        rv = Real_CreateIconIndirect(a0);
    } __finally {
        _Print("CreateIconIndirect(%p) -> %p", a0, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_CreateIoCompletionPort(HANDLE a0,
                                             HANDLE a1,
                                             ULONG_PTR a2,
                                             DWORD a3)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_CreateIoCompletionPort(a0, a1, a2, a3);
    } __finally {
        _Print("CreateIoCompletionPort(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CreateItemMoniker(LPCOLESTR a0,
                                         LPCOLESTR a1,
                                         IMoniker** a2)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CreateItemMoniker(a0, a1, a2);
    } __finally {
        _Print("CreateItemMoniker(%p,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

#if _MSC_VER < 1300
HWND __stdcall Mine_CreateMDIWindowA(LPSTR a0, // NT 3.51 and older. NT4?
                                     LPSTR a1, // NT 3.51 and older. NT4?
                                     DWORD a2,
                                     int a3,
                                     int a4,
                                     int a5,
                                     int a6,
                                     HWND a7,
                                     HINSTANCE a8,
                                     LPARAM a9)
#else
HWND __stdcall Mine_CreateMDIWindowA(LPCSTR a0, // Windows 2000 and newer; NT4?
                                     LPCSTR a1, // Windows 2000 and newer; NT4?
                                     DWORD a2,
                                     int a3,
                                     int a4,
                                     int a5,
                                     int a6,
                                     HWND a7,
                                     HINSTANCE a8,
                                     LPARAM a9)
#endif
{
    
    HWND rv = 0;
    __try {
        rv = Real_CreateMDIWindowA(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    } __finally {
        _Print("CreateMDIWindowA(%hs,%hs,%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, rv);
    };
    return rv;
}

#if _MSC_VER < 1300
HWND __stdcall Mine_CreateMDIWindowW(LPWSTR a0,
                                     LPWSTR a1,
                                     DWORD a2,
                                     int a3,
                                     int a4,
                                     int a5,
                                     int a6,
                                     HWND a7,
                                     HINSTANCE a8,
                                     LPARAM a9)
#else
HWND __stdcall Mine_CreateMDIWindowW(LPCWSTR a0,
                                     LPCWSTR a1,
                                     DWORD a2,
                                     int a3,
                                     int a4,
                                     int a5,
                                     int a6,
                                     HWND a7,
                                     HINSTANCE a8,
                                     LPARAM a9)
#endif
{
    
    HWND rv = 0;
    __try {
        rv = Real_CreateMDIWindowW(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    } __finally {
        _Print("CreateMDIWindowW(%ls,%ls,%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_CreateMailslotA(LPCSTR a0,
                                      DWORD a1,
                                      DWORD a2,
                                      LPSECURITY_ATTRIBUTES a3)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_CreateMailslotA(a0, a1, a2, a3);
    } __finally {
        _Print("CreateMailslotA(%hs,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_CreateMailslotW(LPCWSTR a0,
                                      DWORD a1,
                                      DWORD a2,
                                      LPSECURITY_ATTRIBUTES a3)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_CreateMailslotW(a0, a1, a2, a3);
    } __finally {
        _Print("CreateMailslotW(%ls,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HMENU __stdcall Mine_CreateMenu(void)
{
    
    HMENU rv = 0;
    __try {
        rv = Real_CreateMenu();
    } __finally {
        _Print("CreateMenu() -> %p", rv);
    };
    return rv;
}

HDC __stdcall Mine_CreateMetaFileA(LPCSTR a0)
{
    
    HDC rv = 0;
    __try {
        rv = Real_CreateMetaFileA(a0);
    } __finally {
        _Print("CreateMetaFileA(%hs) -> %p", a0, rv);
    };
    return rv;
}

HDC __stdcall Mine_CreateMetaFileW(LPCWSTR a0)
{
    
    HDC rv = 0;
    __try {
        rv = Real_CreateMetaFileW(a0);
    } __finally {
        _Print("CreateMetaFileW(%ls) -> %p", a0, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_CreateMutexA(LPSECURITY_ATTRIBUTES a0,
                                   BOOL a1,
                                   LPCSTR a2)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_CreateMutexA(a0, a1, a2);
    } __finally {
        _Print("CreateMutexA(%p,%p,%hs) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_CreateMutexW(LPSECURITY_ATTRIBUTES a0,
                                   BOOL a1,
                                   LPCWSTR a2)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_CreateMutexW(a0, a1, a2);
    } __finally {
        _Print("CreateMutexW(%p,%p,%ls) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_CreateNamedPipeA(LPCSTR a0,
                                       DWORD a1,
                                       DWORD a2,
                                       DWORD a3,
                                       DWORD a4,
                                       DWORD a5,
                                       DWORD a6,
                                       LPSECURITY_ATTRIBUTES a7)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_CreateNamedPipeA(a0, a1, a2, a3, a4, a5, a6, a7);
    } __finally {
        _Print("CreateNamedPipeA(%hs,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_CreateNamedPipeW(LPCWSTR a0,
                                       DWORD a1,
                                       DWORD a2,
                                       DWORD a3,
                                       DWORD a4,
                                       DWORD a5,
                                       DWORD a6,
                                       LPSECURITY_ATTRIBUTES a7)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_CreateNamedPipeW(a0, a1, a2, a3, a4, a5, a6, a7);
    } __finally {
        _Print("CreateNamedPipeW(%ls,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CreateOleAdviseHolder(LPOLEADVISEHOLDER* a0)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CreateOleAdviseHolder(a0);
    } __finally {
        _Print("CreateOleAdviseHolder(%p) -> %x", a0, rv);
    };
    return rv;
}

HPALETTE __stdcall Mine_CreatePalette(LOGPALETTE* a0)
{
    
    HPALETTE rv = 0;
    __try {
        rv = Real_CreatePalette(a0);
    } __finally {
        _Print("CreatePalette(%p) -> %p", a0, rv);
    };
    return rv;
}

HBRUSH __stdcall Mine_CreatePatternBrush(HBITMAP a0)
{
    
    HBRUSH rv = 0;
    __try {
        rv = Real_CreatePatternBrush(a0);
    } __finally {
        _Print("CreatePatternBrush(%p) -> %p", a0, rv);
    };
    return rv;
}

HPEN __stdcall Mine_CreatePen(int a0,
                              int a1,
                              COLORREF a2)
{
    
    HPEN rv = 0;
    __try {
        rv = Real_CreatePen(a0, a1, a2);
    } __finally {
        _Print("CreatePen(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HPEN __stdcall Mine_CreatePenIndirect(LOGPEN* a0)
{
    
    HPEN rv = 0;
    __try {
        rv = Real_CreatePenIndirect(a0);
    } __finally {
        _Print("CreatePenIndirect(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CreatePipe(PHANDLE a0,
                               PHANDLE a1,
                               LPSECURITY_ATTRIBUTES a2,
                               DWORD a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CreatePipe(a0, a1, a2, a3);
    } __finally {
        _Print("CreatePipe(%p,%p,%p,%p) -> %x", a0, a1, a2, a3, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CreatePointerMoniker(LPUNKNOWN a0,
                                            IMoniker** a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CreatePointerMoniker(a0, a1);
    } __finally {
        _Print("CreatePointerMoniker(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

HRGN __stdcall Mine_CreatePolyPolygonRgn(POINT* a0,
                                         INT* a1,
                                         int a2,
                                         int a3)
{
    
    HRGN rv = 0;
    __try {
        rv = Real_CreatePolyPolygonRgn(a0, a1, a2, a3);
    } __finally {
        _Print("CreatePolyPolygonRgn(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HRGN __stdcall Mine_CreatePolygonRgn(POINT* a0,
                                     int a1,
                                     int a2)
{
    
    HRGN rv = 0;
    __try {
        rv = Real_CreatePolygonRgn(a0, a1, a2);
    } __finally {
        _Print("CreatePolygonRgn(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HMENU __stdcall Mine_CreatePopupMenu(void)
{
    
    HMENU rv = 0;
    __try {
        rv = Real_CreatePopupMenu();
    } __finally {
        _Print("CreatePopupMenu() -> %p", rv);
    };
    return rv;
}

BOOL __stdcall Mine_CreateProcessA(LPCSTR lpApplicationName,
                                   LPSTR lpCommandLine,
                                   LPSECURITY_ATTRIBUTES lpProcessAttributes,
                                   LPSECURITY_ATTRIBUTES lpThreadAttributes,
                                   BOOL bInheritHandles,
                                   DWORD dwCreationFlags,
                                   LPVOID lpEnvironment,
                                   LPCSTR lpCurrentDirectory,
                                   LPSTARTUPINFOA lpStartupInfo,
                                   LPPROCESS_INFORMATION lpProcessInformation)
{
    
    PROCESS_INFORMATION procInfo;
    if (lpProcessInformation == NULL) {
        lpProcessInformation= &procInfo;
        ZeroMemory(&procInfo, sizeof(procInfo));
    }

    BOOL rv = 0;
    __try {
        rv = Real_CreateProcessA(lpApplicationName,
                                           lpCommandLine,
                                           lpProcessAttributes,
                                           lpThreadAttributes,
                                           bInheritHandles,
                                           dwCreationFlags,
                                           lpEnvironment,
                                           lpCurrentDirectory,
                                           lpStartupInfo,
                                           lpProcessInformation);
    } __finally {
        _Print("CreateProcessA(%hs,%hs,%p,%p,%p,%p,%p,%hs,%p,%p) -> %x (proc:%d/%p, thrd:%d/%p",
                lpApplicationName,
                lpCommandLine,
                lpProcessAttributes,
                lpThreadAttributes,
                bInheritHandles,
                dwCreationFlags,
                lpEnvironment,
                lpCurrentDirectory,
                lpStartupInfo,
                lpProcessInformation, rv,
                   lpProcessInformation->dwProcessId,
                   lpProcessInformation->hProcess,
                   lpProcessInformation->dwThreadId,
                   lpProcessInformation->hThread);
    };
    return rv;
}

BOOL __stdcall Mine_CreateProcessW(LPCWSTR lpApplicationName,
                                   LPWSTR lpCommandLine,
                                   LPSECURITY_ATTRIBUTES lpProcessAttributes,
                                   LPSECURITY_ATTRIBUTES lpThreadAttributes,
                                   BOOL bInheritHandles,
                                   DWORD dwCreationFlags,
                                   LPVOID lpEnvironment,
                                   LPCWSTR lpCurrentDirectory,
                                   LPSTARTUPINFOW lpStartupInfo,
                                   LPPROCESS_INFORMATION lpProcessInformation)
{
    
    PROCESS_INFORMATION procInfo;
    if (lpProcessInformation == NULL) {
        lpProcessInformation= &procInfo;
        ZeroMemory(&procInfo, sizeof(procInfo));
    }

    BOOL rv = 0;
    __try {
        rv = Real_CreateProcessW(lpApplicationName,
                                           lpCommandLine,
                                           lpProcessAttributes,
                                           lpThreadAttributes,
                                           bInheritHandles,
                                           dwCreationFlags,
                                           lpEnvironment,
                                           lpCurrentDirectory,
                                           lpStartupInfo,
                                           lpProcessInformation);
    } __finally {
        _Print("CreateProcessW(%ls,%ls,%p,%p,%p,%p,%p,%ls,%p,%p) -> %x (proc:%d/%p, thrd:%d/%p",
                lpApplicationName,
                lpCommandLine,
                lpProcessAttributes,
                lpThreadAttributes,
                bInheritHandles,
                dwCreationFlags,
                lpEnvironment,
                lpCurrentDirectory,
                lpStartupInfo,
                lpProcessInformation, rv,
                   lpProcessInformation->dwProcessId,
                   lpProcessInformation->hProcess,
                   lpProcessInformation->dwThreadId,
                   lpProcessInformation->hThread);
    };
    return rv;
}

BOOL __stdcall Mine_CreateProcessAsUserA(
  __in_opt     HANDLE hToken,
  __in_opt     LPCSTR lpApplicationName,
  __inout_opt  LPSTR lpCommandLine,
  __in_opt     LPSECURITY_ATTRIBUTES lpProcessAttributes,
  __in_opt     LPSECURITY_ATTRIBUTES lpThreadAttributes,
  __in         BOOL bInheritHandles,
  __in         DWORD dwCreationFlags,
  __in_opt     LPVOID lpEnvironment,
  __in_opt     LPCSTR lpCurrentDirectory,
  __in         LPSTARTUPINFOA lpStartupInfo,
  __out        LPPROCESS_INFORMATION lpProcessInformation
                                        )
{
    
    PROCESS_INFORMATION procInfo;
    if (lpProcessInformation == NULL) {
        lpProcessInformation= &procInfo;
        ZeroMemory(&procInfo, sizeof(procInfo));
    }

    BOOL rv = 0;
    __try {
        rv = Real_CreateProcessAsUserA(hToken,
                                       lpApplicationName,
                                       lpCommandLine,
                                       lpProcessAttributes,
                                       lpThreadAttributes,
                                       bInheritHandles,
                                       dwCreationFlags,
                                       lpEnvironment,
                                       lpCurrentDirectory,
                                       lpStartupInfo,
                                       lpProcessInformation);
    } __finally {
        _Print("CreateProcessAsUserA(%ls,%ls,%p,%p,%p,%p,%p,%ls,%p,%p) -> %x (proc:%d/%p, thrd:%d/%p",
                lpApplicationName,
                lpCommandLine,
                lpProcessAttributes,
                lpThreadAttributes,
                bInheritHandles,
                dwCreationFlags,
                lpEnvironment,
                lpCurrentDirectory,
                lpStartupInfo,
                lpProcessInformation, rv,
                   lpProcessInformation->dwProcessId,
                   lpProcessInformation->hProcess,
                   lpProcessInformation->dwThreadId,
                   lpProcessInformation->hThread);
    };
    return rv;
}

BOOL __stdcall Mine_CreateProcessAsUserW(
  __in_opt     HANDLE hToken,
  __in_opt     LPCWSTR lpApplicationName,
  __inout_opt  LPWSTR lpCommandLine,
  __in_opt     LPSECURITY_ATTRIBUTES lpProcessAttributes,
  __in_opt     LPSECURITY_ATTRIBUTES lpThreadAttributes,
  __in         BOOL bInheritHandles,
  __in         DWORD dwCreationFlags,
  __in_opt     LPVOID lpEnvironment,
  __in_opt     LPCWSTR lpCurrentDirectory,
  __in         LPSTARTUPINFOW lpStartupInfo,
  __out        LPPROCESS_INFORMATION lpProcessInformation
                                        )
{
    
    PROCESS_INFORMATION procInfo;
    if (lpProcessInformation == NULL) {
        lpProcessInformation= &procInfo;
        ZeroMemory(&procInfo, sizeof(procInfo));
    }

    BOOL rv = 0;
    __try {
        rv = Real_CreateProcessAsUserW(hToken,
                                       lpApplicationName,
                                       lpCommandLine,
                                       lpProcessAttributes,
                                       lpThreadAttributes,
                                       bInheritHandles,
                                       dwCreationFlags,
                                       lpEnvironment,
                                       lpCurrentDirectory,
                                       lpStartupInfo,
                                       lpProcessInformation);
    } __finally {
        _Print("CreateProcessAsUserW(%ls,%ls,%p,%p,%p,%p,%p,%ls,%p,%p) -> %x (proc:%d/%p, thrd:%d/%p",
                lpApplicationName,
                lpCommandLine,
                lpProcessAttributes,
                lpThreadAttributes,
                bInheritHandles,
                dwCreationFlags,
                lpEnvironment,
                lpCurrentDirectory,
                lpStartupInfo,
                lpProcessInformation, rv,
                   lpProcessInformation->dwProcessId,
                   lpProcessInformation->hProcess,
                   lpProcessInformation->dwThreadId,
                   lpProcessInformation->hThread);
    };
    return rv;
}

#if(_WIN32_WINNT >= 0x0500)
BOOL WINAPI Mine_CreateProcessWithLogonW(
  __in         LPCWSTR lpUsername,
  __in_opt     LPCWSTR lpDomain,
  __in         LPCWSTR lpPassword,
  __in         DWORD dwLogonFlags,
  __in_opt     LPCWSTR lpApplicationName,
  __inout_opt  LPWSTR lpCommandLine,
  __in         DWORD dwCreationFlags,
  __in_opt     LPVOID lpEnvironment,
  __in_opt     LPCWSTR lpCurrentDirectory,
  __in         LPSTARTUPINFOW lpStartupInfo,
  __out        LPPROCESS_INFORMATION lpProcessInfo
                                        )
{
    
    PROCESS_INFORMATION procInfo;
    if (lpProcessInfo == NULL) {
        lpProcessInfo= &procInfo;
        ZeroMemory(&procInfo, sizeof(procInfo));
    }

    BOOL rv = 0;
    __try {
        rv = Real_CreateProcessWithLogonW(
                lpUsername,
                lpDomain,
                lpPassword,
                dwLogonFlags,
                lpApplicationName,
                lpCommandLine,
                dwCreationFlags,
                lpEnvironment,
                lpCurrentDirectory,
                lpStartupInfo,
                lpProcessInfo);
    } __finally {
        _Print("CreateProcessWithLogonW(%ls,%ls,%ls,%d,%ls,%ls,%p,%p,%ls,%p,%p) -> %x (proc:%d/%p, thrd:%d/%p",
                lpUsername,
                lpDomain,
                lpPassword,
                dwLogonFlags,
                lpApplicationName,
                lpCommandLine,
                dwCreationFlags,
                lpEnvironment,
                lpCurrentDirectory,
                lpStartupInfo,
                lpProcessInfo, rv,
                   lpProcessInfo->dwProcessId,
                   lpProcessInfo->hProcess,
                   lpProcessInfo->dwThreadId,
                   lpProcessInfo->hThread);
    };
    return rv;
}

BOOL WINAPI Mine_CreateProcessWithTokenW(
  __in         HANDLE hToken,
  __in         DWORD dwLogonFlags,
  __in_opt     LPCWSTR lpApplicationName,
  __inout_opt  LPWSTR lpCommandLine,
  __in         DWORD dwCreationFlags,
  __in_opt     LPVOID lpEnvironment,
  __in_opt     LPCWSTR lpCurrentDirectory,
  __in         LPSTARTUPINFOW lpStartupInfo,
  __out        LPPROCESS_INFORMATION lpProcessInfo
)
{
    
    PROCESS_INFORMATION procInfo;
    if (lpProcessInfo == NULL) {
        lpProcessInfo= &procInfo;
        ZeroMemory(&procInfo, sizeof(procInfo));
    }

    BOOL rv = 0;
    __try {
        rv = Real_CreateProcessWithTokenW(hToken,
                                          dwLogonFlags,
                                          lpApplicationName,
                                          lpCommandLine,
                                          dwCreationFlags,
                                          lpEnvironment,
                                          lpCurrentDirectory,
                                          lpStartupInfo,
                                          lpProcessInfo);
    } __finally {
        _Print("CreateProcessWithTokenW(%ls,%ls,%p,%p,%ls,%p,%p) -> %x (proc:%d/%p, thrd:%d/%p",
                lpApplicationName,
                lpCommandLine,
                dwCreationFlags,
                lpEnvironment,
                lpCurrentDirectory,
                lpStartupInfo,
                lpProcessInfo, rv,
                   lpProcessInfo->dwProcessId,
                   lpProcessInfo->hProcess,
                   lpProcessInfo->dwThreadId,
                   lpProcessInfo->hThread);
    };
    return rv;
}
#endif // (_WIN32_WINNT >= 0x0500)

HRGN __stdcall Mine_CreateRectRgn(int a0,
                                  int a1,
                                  int a2,
                                  int a3)
{
    
    HRGN rv = 0;
    __try {
        rv = Real_CreateRectRgn(a0, a1, a2, a3);
    } __finally {
        _Print("CreateRectRgn(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HRGN __stdcall Mine_CreateRectRgnIndirect(RECT* a0)
{
    
    HRGN rv = 0;
    __try {
        rv = Real_CreateRectRgnIndirect(a0);
    } __finally {
        _Print("CreateRectRgnIndirect(%p) -> %p", a0, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_CreateRemoteThread(HANDLE a0,
                                         LPSECURITY_ATTRIBUTES a1,
                                         ULONG_PTR a2,
                                         LPTHREAD_START_ROUTINE a3,
                                         LPVOID a4,
                                         DWORD a5,
                                         LPDWORD a6)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_CreateRemoteThread(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("CreateRemoteThread(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

HRGN __stdcall Mine_CreateRoundRectRgn(int a0,
                                       int a1,
                                       int a2,
                                       int a3,
                                       int a4,
                                       int a5)
{
    
    HRGN rv = 0;
    __try {
        rv = Real_CreateRoundRectRgn(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("CreateRoundRectRgn(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CreateScalableFontResourceA(DWORD a0,
                                                LPCSTR a1,
                                                LPCSTR a2,
                                                LPCSTR a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CreateScalableFontResourceA(a0, a1, a2, a3);
    } __finally {
        _Print("CreateScalableFontResourceA(%p,%hs,%hs,%hs) -> %x", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_CreateScalableFontResourceW(DWORD a0,
                                                LPCWSTR a1,
                                                LPCWSTR a2,
                                                LPCWSTR a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_CreateScalableFontResourceW(a0, a1, a2, a3);
    } __finally {
        _Print("CreateScalableFontResourceW(%p,%ls,%ls,%ls) -> %x", a0, a1, a2, a3, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_CreateSemaphoreA(LPSECURITY_ATTRIBUTES a0,
                                       LONG a1,
                                       LONG a2,
                                       LPCSTR a3)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_CreateSemaphoreA(a0, a1, a2, a3);
    } __finally {
        _Print("CreateSemaphoreA(%p,%p,%p,%hs) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_CreateSemaphoreW(LPSECURITY_ATTRIBUTES a0,
                                       LONG a1,
                                       LONG a2,
                                       LPCWSTR a3)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_CreateSemaphoreW(a0, a1, a2, a3);
    } __finally {
        _Print("CreateSemaphoreW(%p,%p,%p,%ls) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HBRUSH __stdcall Mine_CreateSolidBrush(COLORREF a0)
{
    
    HBRUSH rv = 0;
    __try {
        rv = Real_CreateSolidBrush(a0);
    } __finally {
        _Print("CreateSolidBrush(%p) -> %p", a0, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CreateStdProgressIndicator(HWND a0,
                                                  LPCOLESTR a1,
                                                  IBindStatusCallback* a2,
                                                  IBindStatusCallback** a3)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CreateStdProgressIndicator(a0, a1, a2, a3);
    } __finally {
        _Print("CreateStdProgressIndicator(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_CreateStreamOnHGlobal(HGLOBAL a0,
                                             BOOL a1,
                                             LPSTREAM* a2)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_CreateStreamOnHGlobal(a0, a1, a2);
    } __finally {
        _Print("CreateStreamOnHGlobal(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_CreateTapePartition(HANDLE a0,
                                         DWORD a1,
                                         DWORD a2,
                                         DWORD a3)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_CreateTapePartition(a0, a1, a2, a3);
    } __finally {
        _Print("CreateTapePartition(%p,%p,%p,%p) -> %x", a0, a1, a2, a3, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_CreateThread(LPSECURITY_ATTRIBUTES a0,
                                   ULONG_PTR a1,
                                   LPTHREAD_START_ROUTINE a2,
                                   LPVOID a3,
                                   DWORD a4,
                                   LPDWORD a5)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_CreateThread(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("CreateThread(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_CreateWaitableTimerA(LPSECURITY_ATTRIBUTES a0,
                                           BOOL a1,
                                           LPCSTR a2)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_CreateWaitableTimerA(a0, a1, a2);
    } __finally {
        _Print("CreateWaitableTimerA(%p,%p,%hs) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_CreateWaitableTimerW(LPSECURITY_ATTRIBUTES a0,
                                           BOOL a1,
                                           LPCWSTR a2)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_CreateWaitableTimerW(a0, a1, a2);
    } __finally {
        _Print("CreateWaitableTimerW(%p,%p,%ls) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HWND __stdcall Mine_CreateWindowExA(DWORD a0,
                                    LPCSTR a1,
                                    LPCSTR a2,
                                    DWORD a3,
                                    int a4,
                                    int a5,
                                    int a6,
                                    int a7,
                                    HWND a8,
                                    HMENU a9,
                                    HINSTANCE a10,
                                    LPVOID a11)
{
    
    HWND rv = 0;
    __try {
        rv = Real_CreateWindowExA(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    } __finally {
        _Print("CreateWindowExA(%p,%hs,%hs,%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, rv);
    };
    return rv;
}

HWND __stdcall Mine_CreateWindowExW(DWORD a0,
                                    LPCWSTR a1,
                                    LPCWSTR a2,
                                    DWORD a3,
                                    int a4,
                                    int a5,
                                    int a6,
                                    int a7,
                                    HWND a8,
                                    HMENU a9,
                                    HINSTANCE a10,
                                    LPVOID a11)
{
    
    HWND rv = 0;
    __try {
        rv = Real_CreateWindowExW(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    } __finally {
        _Print("CreateWindowExW(%p,%ls,%ls,%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, rv);
    };
    return rv;
}

#if _MSC_VER < 1300
HWINSTA __stdcall Mine_CreateWindowStationA(LPSTR a0,
                                            DWORD a1,
                                            ACCESS_MASK a2,
                                            LPSECURITY_ATTRIBUTES a3)
#else
HWINSTA __stdcall Mine_CreateWindowStationA(LPCSTR a0,
                                            DWORD a1,
                                            ACCESS_MASK a2,
                                            LPSECURITY_ATTRIBUTES a3)
#endif
{
    
    HWINSTA rv = 0;
    __try {
        rv = Real_CreateWindowStationA(a0, a1, a2, a3);
    } __finally {
        _Print("CreateWindowStationA(%hs,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

#if _MSC_VER < 1300
HWINSTA __stdcall Mine_CreateWindowStationW(LPWSTR a0,
                                            DWORD a1,
                                            ACCESS_MASK a2,
                                            LPSECURITY_ATTRIBUTES a3)
#else
HWINSTA __stdcall Mine_CreateWindowStationW(LPCWSTR a0,
                                            DWORD a1,
                                            ACCESS_MASK a2,
                                            LPSECURITY_ATTRIBUTES a3)
#endif
{
    
    HWINSTA rv = 0;
    __try {
        rv = Real_CreateWindowStationW(a0, a1, a2, a3);
    } __finally {
        _Print("CreateWindowStationW(%ls,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DPtoLP(HDC a0,
                           POINT* a1,
                           int a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DPtoLP(a0, a1, a2);
    } __finally {
        _Print("DPtoLP(%p,%p,%p) -> %x", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DdeAbandonTransaction(DWORD a0,
                                          HCONV a1,
                                          DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DdeAbandonTransaction(a0, a1, a2);
    } __finally {
        _Print("DdeAbandonTransaction(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

LPBYTE __stdcall Mine_DdeAccessData(HDDEDATA a0,
                                    LPDWORD a1)
{
    
    LPBYTE rv = 0;
    __try {
        rv = Real_DdeAccessData(a0, a1);
    } __finally {
        _Print("DdeAccessData(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HDDEDATA __stdcall Mine_DdeAddData(HDDEDATA a0,
                                   LPBYTE a1,
                                   DWORD a2,
                                   DWORD a3)
{
    
    HDDEDATA rv = 0;
    __try {
        rv = Real_DdeAddData(a0, a1, a2, a3);
    } __finally {
        _Print("DdeAddData(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HDDEDATA __stdcall Mine_DdeClientTransaction(LPBYTE a0,
                                             DWORD a1,
                                             HCONV a2,
                                             HSZ a3,
                                             UINT a4,
                                             UINT a5,
                                             DWORD a6,
                                             LPDWORD a7)
{
    
    HDDEDATA rv = 0;
    __try {
        rv = Real_DdeClientTransaction(a0, a1, a2, a3, a4, a5, a6, a7);
    } __finally {
        _Print("DdeClientTransaction(%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, rv);
    };
    return rv;
}

int __stdcall Mine_DdeCmpStringHandles(HSZ a0,
                                       HSZ a1)
{
    
    int rv = 0;
    __try {
        rv = Real_DdeCmpStringHandles(a0, a1);
    } __finally {
        _Print("DdeCmpStringHandles(%p,%p) -> %x", a0, a1, rv);
    };
    return rv;
}

HCONV __stdcall Mine_DdeConnect(DWORD a0,
                                HSZ a1,
                                HSZ a2,
                                PCONVCONTEXT a3)
{
    
    HCONV rv = 0;
    __try {
        rv = Real_DdeConnect(a0, a1, a2, a3);
    } __finally {
        _Print("DdeConnect(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HCONVLIST __stdcall Mine_DdeConnectList(DWORD a0,
                                        HSZ a1,
                                        HSZ a2,
                                        HCONVLIST a3,
                                        PCONVCONTEXT a4)
{
    
    HCONVLIST rv = 0;
    __try {
        rv = Real_DdeConnectList(a0, a1, a2, a3, a4);
    } __finally {
        _Print("DdeConnectList(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

HDDEDATA __stdcall Mine_DdeCreateDataHandle(DWORD a0,
                                            LPBYTE a1,
                                            DWORD a2,
                                            DWORD a3,
                                            HSZ a4,
                                            UINT a5,
                                            UINT a6)
{
    
    HDDEDATA rv = 0;
    __try {
        rv = Real_DdeCreateDataHandle(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("DdeCreateDataHandle(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

HSZ __stdcall Mine_DdeCreateStringHandleA(DWORD a0,
                                          LPCSTR a1,
                                          int a2)
{
    
    HSZ rv = 0;
    __try {
        rv = Real_DdeCreateStringHandleA(a0, a1, a2);
    } __finally {
        _Print("DdeCreateStringHandleA(%p,%hs,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HSZ __stdcall Mine_DdeCreateStringHandleW(DWORD a0,
                                          LPCWSTR a1,
                                          int a2)
{
    
    HSZ rv = 0;
    __try {
        rv = Real_DdeCreateStringHandleW(a0, a1, a2);
    } __finally {
        _Print("DdeCreateStringHandleW(%p,%ls,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DdeDisconnect(HCONV a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DdeDisconnect(a0);
    } __finally {
        _Print("DdeDisconnect(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DdeDisconnectList(HCONVLIST a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DdeDisconnectList(a0);
    } __finally {
        _Print("DdeDisconnectList(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DdeEnableCallback(DWORD a0,
                                      HCONV a1,
                                      UINT a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DdeEnableCallback(a0, a1, a2);
    } __finally {
        _Print("DdeEnableCallback(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DdeFreeDataHandle(HDDEDATA a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DdeFreeDataHandle(a0);
    } __finally {
        _Print("DdeFreeDataHandle(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DdeFreeStringHandle(DWORD a0,
                                        HSZ a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DdeFreeStringHandle(a0, a1);
    } __finally {
        _Print("DdeFreeStringHandle(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_DdeGetData(HDDEDATA a0,
                                LPBYTE a1,
                                DWORD a2,
                                DWORD a3)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_DdeGetData(a0, a1, a2, a3);
    } __finally {
        _Print("DdeGetData(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

UINT __stdcall Mine_DdeGetLastError(DWORD a0)
{
    
    UINT rv = 0;
    __try {
        rv = Real_DdeGetLastError(a0);
    } __finally {
        _Print("DdeGetLastError(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DdeImpersonateClient(HCONV a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DdeImpersonateClient(a0);
    } __finally {
        _Print("DdeImpersonateClient(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DdeKeepStringHandle(DWORD a0,
                                        HSZ a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DdeKeepStringHandle(a0, a1);
    } __finally {
        _Print("DdeKeepStringHandle(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HDDEDATA __stdcall Mine_DdeNameService(DWORD a0,
                                       HSZ a1,
                                       HSZ a2,
                                       UINT a3)
{
    
    HDDEDATA rv = 0;
    __try {
        rv = Real_DdeNameService(a0, a1, a2, a3);
    } __finally {
        _Print("DdeNameService(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DdePostAdvise(DWORD a0,
                                  HSZ a1,
                                  HSZ a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DdePostAdvise(a0, a1, a2);
    } __finally {
        _Print("DdePostAdvise(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

UINT __stdcall Mine_DdeQueryConvInfo(HCONV a0,
                                     DWORD a1,
                                     CONVINFO* a2)
{
    
    UINT rv = 0;
    __try {
        rv = Real_DdeQueryConvInfo(a0, a1, a2);
    } __finally {
        _Print("DdeQueryConvInfo(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HCONV __stdcall Mine_DdeQueryNextServer(HCONVLIST a0,
                                        HCONV a1)
{
    
    HCONV rv = 0;
    __try {
        rv = Real_DdeQueryNextServer(a0, a1);
    } __finally {
        _Print("DdeQueryNextServer(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_DdeQueryStringA(DWORD a0,
                                     HSZ a1,
                                     LPSTR a2,
                                     DWORD a3,
                                     int a4)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_DdeQueryStringA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("DdeQueryStringA(%p,%p,%hs,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

DWORD __stdcall Mine_DdeQueryStringW(DWORD a0,
                                     HSZ a1,
                                     LPWSTR a2,
                                     DWORD a3,
                                     int a4)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_DdeQueryStringW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("DdeQueryStringW(%p,%p,%ls,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

HCONV __stdcall Mine_DdeReconnect(HCONV a0)
{
    
    HCONV rv = 0;
    __try {
        rv = Real_DdeReconnect(a0);
    } __finally {
        _Print("DdeReconnect(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DdeSetQualityOfService(HWND a0,
                                           PSECURITY_QUALITY_OF_SERVICE a1,
                                           PSECURITY_QUALITY_OF_SERVICE a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DdeSetQualityOfService(a0, a1, a2);
    } __finally {
        _Print("DdeSetQualityOfService(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DdeSetUserHandle(HCONV a0,
                                     DWORD a1,
                                     ULONG_PTR a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DdeSetUserHandle(a0, a1, a2);
    } __finally {
        _Print("DdeSetUserHandle(%p,%x,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DdeUnaccessData(HDDEDATA a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DdeUnaccessData(a0);
    } __finally {
        _Print("DdeUnaccessData(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DdeUninitialize(DWORD a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DdeUninitialize(a0);
    } __finally {
        _Print("DdeUninitialize(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DebugActiveProcess(DWORD a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DebugActiveProcess(a0);
    } __finally {
        _Print("DebugActiveProcess(pid=%d) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DebugActiveProcessStop(DWORD a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DebugActiveProcess(a0);
    } __finally {
        _Print("DebugActiveProcessStop(pid=%d) -> %p", a0, rv);
    };
    return rv;
}

void __stdcall Mine_DebugBreak(void)
{
    
    __try {
        Real_DebugBreak();
    } __finally {
        _Print("DebugBreak() ->");
    };
}

LRESULT __stdcall Mine_DefDlgProcA(HWND a0,
                                   UINT a1,
                                   WPARAM a2,
                                   LPARAM a3)
{
    
    LRESULT rv = 0;
    __try {
        rv = Real_DefDlgProcA(a0, a1, a2, a3);
    } __finally {
        _Print("DefDlgProcA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

LRESULT __stdcall Mine_DefDlgProcW(HWND a0,
                                   UINT a1,
                                   WPARAM a2,
                                   LPARAM a3)
{
    
    LRESULT rv = 0;
    __try {
        rv = Real_DefDlgProcW(a0, a1, a2, a3);
    } __finally {
        _Print("DefDlgProcW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

LRESULT __stdcall Mine_DefFrameProcA(HWND a0,
                                     HWND a1,
                                     UINT a2,
                                     WPARAM a3,
                                     LPARAM a4)
{
    
    LRESULT rv = 0;
    __try {
        rv = Real_DefFrameProcA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("DefFrameProcA(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

LRESULT __stdcall Mine_DefFrameProcW(HWND a0,
                                     HWND a1,
                                     UINT a2,
                                     WPARAM a3,
                                     LPARAM a4)
{
    
    LRESULT rv = 0;
    __try {
        rv = Real_DefFrameProcW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("DefFrameProcW(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

LRESULT __stdcall Mine_DefMDIChildProcA(HWND a0,
                                        UINT a1,
                                        WPARAM a2,
                                        LPARAM a3)
{
    
    LRESULT rv = 0;
    __try {
        rv = Real_DefMDIChildProcA(a0, a1, a2, a3);
    } __finally {
        _Print("DefMDIChildProcA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

LRESULT __stdcall Mine_DefMDIChildProcW(HWND a0,
                                        UINT a1,
                                        WPARAM a2,
                                        LPARAM a3)
{
    
    LRESULT rv = 0;
    __try {
        rv = Real_DefMDIChildProcW(a0, a1, a2, a3);
    } __finally {
        _Print("DefMDIChildProcW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

LRESULT __stdcall Mine_DefWindowProcA(HWND a0,
                                      UINT a1,
                                      WPARAM a2,
                                      LPARAM a3)
{
    
    LRESULT rv = 0;
    __try {
        rv = Real_DefWindowProcA(a0, a1, a2, a3);
    } __finally {
        _Print("DefWindowProcA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

LRESULT __stdcall Mine_DefWindowProcW(HWND a0,
                                      UINT a1,
                                      WPARAM a2,
                                      LPARAM a3)
{
    
    LRESULT rv = 0;
    __try {
        rv = Real_DefWindowProcW(a0, a1, a2, a3);
    } __finally {
        _Print("DefWindowProcW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HDWP __stdcall Mine_DeferWindowPos(HDWP a0,
                                   HWND a1,
                                   HWND a2,
                                   int a3,
                                   int a4,
                                   int a5,
                                   int a6,
                                   UINT a7)
{
    
    HDWP rv = 0;
    __try {
        rv = Real_DeferWindowPos(a0, a1, a2, a3, a4, a5, a6, a7);
    } __finally {
        _Print("DeferWindowPos(%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DefineDosDeviceA(DWORD a0,
                                     LPCSTR a1,
                                     LPCSTR a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DefineDosDeviceA(a0, a1, a2);
    } __finally {
        _Print("DefineDosDeviceA(%p,%hs,%hs) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DefineDosDeviceW(DWORD a0,
                                     LPCWSTR a1,
                                     LPCWSTR a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DefineDosDeviceW(a0, a1, a2);
    } __finally {
        _Print("DefineDosDeviceW(%p,%ls,%ls) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

ATOM __stdcall Mine_DeleteAtom(ATOM a0)
{
    
    ATOM rv = 0;
    __try {
        rv = Real_DeleteAtom(a0);
    } __finally {
        _Print("DeleteAtom(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DeleteColorSpace(HCOLORSPACE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DeleteColorSpace(a0);
    } __finally {
        _Print("DeleteColorSpace(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DeleteDC(HDC a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DeleteDC(a0);
    } __finally {
        _Print("DeleteDC(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DeleteEnhMetaFile(HENHMETAFILE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DeleteEnhMetaFile(a0);
    } __finally {
        _Print("DeleteEnhMetaFile(%p) -> %p", a0, rv);
    };
    return rv;
}

void __stdcall Mine_DeleteFiber(LPVOID a0)
{
    
    __try {
        Real_DeleteFiber(a0);
    } __finally {
        _Print("DeleteFiber(%p) ->", a0);
    };
}

BOOL __stdcall Mine_DeleteFileA(LPCSTR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DeleteFileA(a0);
    } __finally {
        _Print("DeleteFileA(%hs) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DeleteFileW(LPCWSTR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DeleteFileW(a0);
    } __finally {
        _Print("DeleteFileW(%ls) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DeleteMenu(HMENU a0,
                               UINT a1,
                               UINT a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DeleteMenu(a0, a1, a2);
    } __finally {
        _Print("DeleteMenu(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DeleteMetaFile(HMETAFILE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DeleteMetaFile(a0);
    } __finally {
        _Print("DeleteMetaFile(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DeleteObject(HGDIOBJ a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DeleteObject(a0);
    } __finally {
        _Print("DeleteObject(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_DescribePixelFormat(HDC a0,
                                       int a1,
                                       UINT a2,
                                       PIXELFORMATDESCRIPTOR* a3)
{
    
    int rv = 0;
    __try {
        rv = Real_DescribePixelFormat(a0, a1, a2, a3);
    } __finally {
        _Print("DescribePixelFormat(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DestroyAcceleratorTable(HACCEL a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DestroyAcceleratorTable(a0);
    } __finally {
        _Print("DestroyAcceleratorTable(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DestroyCaret(void)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DestroyCaret();
    } __finally {
        _Print("DestroyCaret() -> %p", rv);
    };
    return rv;
}

BOOL __stdcall Mine_DestroyCursor(HCURSOR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DestroyCursor(a0);
    } __finally {
        _Print("DestroyCursor(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DestroyIcon(HICON a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DestroyIcon(a0);
    } __finally {
        _Print("DestroyIcon(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DestroyMenu(HMENU a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DestroyMenu(a0);
    } __finally {
        _Print("DestroyMenu(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DestroyWindow(HWND a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DestroyWindow(a0);
    } __finally {
        _Print("DestroyWindow(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DeviceIoControl(HANDLE a0,
                                    DWORD a1,
                                    LPVOID a2,
                                    DWORD a3,
                                    LPVOID a4,
                                    DWORD a5,
                                    LPDWORD a6,
                                    LPOVERLAPPED a7)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DeviceIoControl(a0, a1, a2, a3, a4, a5, a6, a7);
    } __finally {
        _Print("DeviceIoControl(%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, rv);
    };
    return rv;
}

INT_PTR __stdcall Mine_DialogBoxIndirectParamA(HINSTANCE a0,
                                               LPCDLGTEMPLATEA a1,
                                               HWND a2,
                                               DLGPROC a3,
                                               LPARAM a4)
{
    
    INT_PTR rv = 0;
    __try {
        rv = Real_DialogBoxIndirectParamA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("DialogBoxIndirectParamA(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

INT_PTR __stdcall Mine_DialogBoxIndirectParamW(HINSTANCE a0,
                                               LPCDLGTEMPLATEW a1,
                                               HWND a2,
                                               DLGPROC a3,
                                               LPARAM a4)
{
    
    INT_PTR rv = 0;
    __try {
        rv = Real_DialogBoxIndirectParamW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("DialogBoxIndirectParamW(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

INT_PTR __stdcall Mine_DialogBoxParamA(HINSTANCE a0,
                                       LPCSTR a1,
                                       HWND a2,
                                       DLGPROC a3,
                                       LPARAM a4)
{
    
    INT_PTR rv = 0;
    __try {
        rv = Real_DialogBoxParamA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("DialogBoxParamA(%p,%hs,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

INT_PTR __stdcall Mine_DialogBoxParamW(HINSTANCE a0,
                                       LPCWSTR a1,
                                       HWND a2,
                                       DLGPROC a3,
                                       LPARAM a4)
{
    
    INT_PTR rv = 0;
    __try {
        rv = Real_DialogBoxParamW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("DialogBoxParamW(%p,%ls,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DisableThreadLibraryCalls(HMODULE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DisableThreadLibraryCalls(a0);
    } __finally {
        _Print("DisableThreadLibraryCalls(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DisconnectNamedPipe(HANDLE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DisconnectNamedPipe(a0);
    } __finally {
        _Print("DisconnectNamedPipe(%p) -> %p", a0, rv);
    };
    return rv;
}

LRESULT __stdcall Mine_DispatchMessageA(MSG* a0)
{
    
    LRESULT rv = 0;
    __try {
        rv = Real_DispatchMessageA(a0);
    } __finally {
        _Print("DispatchMessageA(%p) -> %p", a0, rv);
    };
    return rv;
}

LRESULT __stdcall Mine_DispatchMessageW(MSG* a0)
{
    
    LRESULT rv = 0;
    __try {
        rv = Real_DispatchMessageW(a0);
    } __finally {
        _Print("DispatchMessageW(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_DlgDirListA(HWND a0,
                               LPSTR a1,
                               int a2,
                               int a3,
                               UINT a4)
{
    
    int rv = 0;
    __try {
        rv = Real_DlgDirListA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("DlgDirListA(%p,%hs,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_DlgDirListComboBoxA(HWND a0,
                                       LPSTR a1,
                                       int a2,
                                       int a3,
                                       UINT a4)
{
    
    int rv = 0;
    __try {
        rv = Real_DlgDirListComboBoxA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("DlgDirListComboBoxA(%p,%hs,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_DlgDirListComboBoxW(HWND a0,
                                       LPWSTR a1,
                                       int a2,
                                       int a3,
                                       UINT a4)
{
    
    int rv = 0;
    __try {
        rv = Real_DlgDirListComboBoxW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("DlgDirListComboBoxW(%p,%ls,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_DlgDirListW(HWND a0,
                               LPWSTR a1,
                               int a2,
                               int a3,
                               UINT a4)
{
    
    int rv = 0;
    __try {
        rv = Real_DlgDirListW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("DlgDirListW(%p,%ls,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DlgDirSelectComboBoxExA(HWND a0,
                                            LPSTR a1,
                                            int a2,
                                            int a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DlgDirSelectComboBoxExA(a0, a1, a2, a3);
    } __finally {
        _Print("DlgDirSelectComboBoxExA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DlgDirSelectComboBoxExW(HWND a0,
                                            LPWSTR a1,
                                            int a2,
                                            int a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DlgDirSelectComboBoxExW(a0, a1, a2, a3);
    } __finally {
        _Print("DlgDirSelectComboBoxExW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DlgDirSelectExA(HWND a0,
                                    LPSTR a1,
                                    int a2,
                                    int a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DlgDirSelectExA(a0, a1, a2, a3);
    } __finally {
        _Print("DlgDirSelectExA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DlgDirSelectExW(HWND a0,
                                    LPWSTR a1,
                                    int a2,
                                    int a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DlgDirSelectExW(a0, a1, a2, a3);
    } __finally {
        _Print("DlgDirSelectExW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_DoDragDrop(IDataObject* a0,
                                  IDropSource* a1,
                                  DWORD a2,
                                  LPDWORD a3)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_DoDragDrop(a0, a1, a2, a3);
    } __finally {
        _Print("DoDragDrop(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DosDateTimeToFileTime(WORD a0,
                                          WORD a1,
                                          LPFILETIME a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DosDateTimeToFileTime(a0, a1, a2);
    } __finally {
        _Print("DosDateTimeToFileTime(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DragDetect(HWND a0,
                               POINT a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DragDetect(a0, a1);
    } __finally {
        _Print("DragDetect(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_DragObject(HWND a0,
                                HWND a1,
                                UINT a2,
                                ULONG_PTR a3,
                                HCURSOR a4)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_DragObject(a0, a1, a2, a3, a4);
    } __finally {
        _Print("DragObject(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DrawAnimatedRects(HWND a0,
                                      int a1,
                                      RECT* a2,
                                      RECT* a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DrawAnimatedRects(a0, a1, a2, a3);
    } __finally {
        _Print("DrawAnimatedRects(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DrawCaption(HWND a0,
                                HDC a1,
                                RECT* a2,
                                UINT a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DrawCaption(a0, a1, a2, a3);
    } __finally {
        _Print("DrawCaption(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DrawEdge(HDC a0,
                             LPRECT a1,
                             UINT a2,
                             UINT a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DrawEdge(a0, a1, a2, a3);
    } __finally {
        _Print("DrawEdge(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

int __stdcall Mine_DrawEscape(HDC a0,
                              int a1,
                              int a2,
                              LPCSTR a3)
{
    
    int rv = 0;
    __try {
        rv = Real_DrawEscape(a0, a1, a2, a3);
    } __finally {
        _Print("DrawEscape(%p,%p,%p,%hs) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DrawFocusRect(HDC a0,
                                  RECT* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DrawFocusRect(a0, a1);
    } __finally {
        _Print("DrawFocusRect(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DrawFrameControl(HDC a0,
                                     LPRECT a1,
                                     UINT a2,
                                     UINT a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DrawFrameControl(a0, a1, a2, a3);
    } __finally {
        _Print("DrawFrameControl(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DrawIcon(HDC a0,
                             int a1,
                             int a2,
                             HICON a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DrawIcon(a0, a1, a2, a3);
    } __finally {
        _Print("DrawIcon(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DrawIconEx(HDC a0,
                               int a1,
                               int a2,
                               HICON a3,
                               int a4,
                               int a5,
                               UINT a6,
                               HBRUSH a7,
                               UINT a8)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DrawIconEx(a0, a1, a2, a3, a4, a5, a6, a7, a8);
    } __finally {
        _Print("DrawIconEx(%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DrawMenuBar(HWND a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DrawMenuBar(a0);
    } __finally {
        _Print("DrawMenuBar(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DrawStateA(HDC a0,
                               HBRUSH a1,
                               DRAWSTATEPROC a2,
                               LPARAM a3,
                               WPARAM a4,
                               int a5,
                               int a6,
                               int a7,
                               int a8,
                               UINT a9)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DrawStateA(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    } __finally {
        _Print("DrawStateA(%p,%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DrawStateW(HDC a0,
                               HBRUSH a1,
                               DRAWSTATEPROC a2,
                               LPARAM a3,
                               WPARAM a4,
                               int a5,
                               int a6,
                               int a7,
                               int a8,
                               UINT a9)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DrawStateW(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    } __finally {
        _Print("DrawStateW(%p,%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, rv);
    };
    return rv;
}

int __stdcall Mine_DrawTextA(HDC a0,
                             LPCSTR a1,
                             int a2,
                             LPRECT a3,
                             UINT a4)
{
    
    int rv = 0;
    __try {
        rv = Real_DrawTextA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("DrawTextA(%p,%hs,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_DrawTextExA(HDC a0,
                               LPSTR a1,
                               int a2,
                               LPRECT a3,
                               UINT a4,
                               LPDRAWTEXTPARAMS a5)
{
    
    int rv = 0;
    __try {
        rv = Real_DrawTextExA(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("DrawTextExA(%p,%hs,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

int __stdcall Mine_DrawTextExW(HDC a0,
                               LPWSTR a1,
                               int a2,
                               LPRECT a3,
                               UINT a4,
                               LPDRAWTEXTPARAMS a5)
{
    
    int rv = 0;
    __try {
        rv = Real_DrawTextExW(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("DrawTextExW(%p,%ls,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

int __stdcall Mine_DrawTextW(HDC a0,
                             LPCWSTR a1,
                             int a2,
                             LPRECT a3,
                             UINT a4)
{
    
    int rv = 0;
    __try {
        rv = Real_DrawTextW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("DrawTextW(%p,%ls,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_DuplicateHandle(HANDLE a0,
                                    HANDLE a1,
                                    HANDLE a2,
                                    LPHANDLE a3,
                                    DWORD a4,
                                    BOOL a5,
                                    DWORD a6)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_DuplicateHandle(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("DuplicateHandle(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

BOOL __stdcall Mine_Ellipse(HDC a0,
                            int a1,
                            int a2,
                            int a3,
                            int a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_Ellipse(a0, a1, a2, a3, a4);
    } __finally {
        _Print("Ellipse(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EmptyClipboard(void)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EmptyClipboard();
    } __finally {
        _Print("EmptyClipboard() -> %p", rv);
    };
    return rv;
}

BOOL __stdcall Mine_EnableMenuItem(HMENU a0,
                                   UINT a1,
                                   UINT a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnableMenuItem(a0, a1, a2);
    } __finally {
        _Print("EnableMenuItem(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EnableScrollBar(HWND a0,
                                    UINT a1,
                                    UINT a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnableScrollBar(a0, a1, a2);
    } __finally {
        _Print("EnableScrollBar(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EnableWindow(HWND a0,
                                 BOOL a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnableWindow(a0, a1);
    } __finally {
        _Print("EnableWindow(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EndDeferWindowPos(HDWP a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EndDeferWindowPos(a0);
    } __finally {
        _Print("EndDeferWindowPos(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EndDialog(HWND a0,
                              INT_PTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EndDialog(a0, a1);
    } __finally {
        _Print("EndDialog(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_EndDoc(HDC a0)
{
    
    int rv = 0;
    __try {
        rv = Real_EndDoc(a0);
    } __finally {
        _Print("EndDoc(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_EndPage(HDC a0)
{
    
    int rv = 0;
    __try {
        rv = Real_EndPage(a0);
    } __finally {
        _Print("EndPage(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EndPaint(HWND a0,
                             PAINTSTRUCT* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EndPaint(a0, a1);
    } __finally {
        _Print("EndPaint(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EndPath(HDC a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EndPath(a0);
    } __finally {
        _Print("EndPath(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EndUpdateResourceA(HANDLE a0,
                                       BOOL a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EndUpdateResourceA(a0, a1);
    } __finally {
        _Print("EndUpdateResourceA(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EndUpdateResourceW(HANDLE a0,
                                       BOOL a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EndUpdateResourceW(a0, a1);
    } __finally {
        _Print("EndUpdateResourceW(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EnumCalendarInfoA(CALINFO_ENUMPROCA a0,
                                      LCID a1,
                                      CALID a2,
                                      CALTYPE a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumCalendarInfoA(a0, a1, a2, a3);
    } __finally {
        _Print("EnumCalendarInfoA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EnumCalendarInfoW(CALINFO_ENUMPROCW a0,
                                      LCID a1,
                                      CALID a2,
                                      CALTYPE a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumCalendarInfoW(a0, a1, a2, a3);
    } __finally {
        _Print("EnumCalendarInfoW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EnumChildWindows(HWND a0,
                                     WNDENUMPROC a1,
                                     LPARAM a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumChildWindows(a0, a1, a2);
    } __finally {
        _Print("EnumChildWindows(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

UINT __stdcall Mine_EnumClipboardFormats(UINT a0)
{
    
    UINT rv = 0;
    __try {
        rv = Real_EnumClipboardFormats(a0);
    } __finally {
        _Print("EnumClipboardFormats(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EnumDateFormatsA(DATEFMT_ENUMPROCA a0,
                                     LCID a1,
                                     DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumDateFormatsA(a0, a1, a2);
    } __finally {
        _Print("EnumDateFormatsA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EnumDateFormatsW(DATEFMT_ENUMPROCW a0,
                                     LCID a1,
                                     DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumDateFormatsW(a0, a1, a2);
    } __finally {
        _Print("EnumDateFormatsW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EnumDesktopWindows(HDESK a0,
                                       WNDENUMPROC a1,
                                       LPARAM a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumDesktopWindows(a0, a1, a2);
    } __finally {
        _Print("EnumDesktopWindows(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EnumDesktopsA(HWINSTA a0,
                                  DESKTOPENUMPROCA a1,
                                  LPARAM a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumDesktopsA(a0, a1, a2);
    } __finally {
        _Print("EnumDesktopsA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EnumDesktopsW(HWINSTA a0,
                                  DESKTOPENUMPROCW a1,
                                  LPARAM a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumDesktopsW(a0, a1, a2);
    } __finally {
        _Print("EnumDesktopsW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EnumDisplaySettingsA(LPCSTR a0,
                                         DWORD a1,
                                         LPDEVMODEA a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumDisplaySettingsA(a0, a1, a2);
    } __finally {
        _Print("EnumDisplaySettingsA(%hs,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EnumDisplaySettingsW(LPCWSTR a0,
                                         DWORD a1,
                                         LPDEVMODEW a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumDisplaySettingsW(a0, a1, a2);
    } __finally {
        _Print("EnumDisplaySettingsW(%ls,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EnumEnhMetaFile(HDC a0,
                                    HENHMETAFILE a1,
                                    ENHMFENUMPROC a2,
                                    LPVOID a3,
                                    RECT* a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumEnhMetaFile(a0, a1, a2, a3, a4);
    } __finally {
        _Print("EnumEnhMetaFile(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_EnumFontFamiliesA(HDC a0,
                                     LPCSTR a1,
                                     FONTENUMPROCA a2,
                                     LPARAM a3)
{
    
    int rv = 0;
    __try {
        rv = Real_EnumFontFamiliesA(a0, a1, a2, a3);
    } __finally {
        _Print("EnumFontFamiliesA(%p,%hs,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

int __stdcall Mine_EnumFontFamiliesExA(HDC a0,
                                       LPLOGFONTA a1,
                                       FONTENUMPROCA a2,
                                       LPARAM a3,
                                       DWORD a4)
{
    
    int rv = 0;
    __try {
        rv = Real_EnumFontFamiliesExA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("EnumFontFamiliesExA(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_EnumFontFamiliesExW(HDC a0,
                                       LPLOGFONTW a1,
                                       FONTENUMPROCW a2,
                                       LPARAM a3,
                                       DWORD a4)
{
    
    int rv = 0;
    __try {
        rv = Real_EnumFontFamiliesExW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("EnumFontFamiliesExW(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_EnumFontFamiliesW(HDC a0,
                                     LPCWSTR a1,
                                     FONTENUMPROCW a2,
                                     LPARAM a3)
{
    
    int rv = 0;
    __try {
        rv = Real_EnumFontFamiliesW(a0, a1, a2, a3);
    } __finally {
        _Print("EnumFontFamiliesW(%p,%ls,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

int __stdcall Mine_EnumFontsA(HDC a0,
                              LPCSTR a1,
                              FONTENUMPROCA a2,
                              LPARAM a3)
{
    
    int rv = 0;
    __try {
        rv = Real_EnumFontsA(a0, a1, a2, a3);
    } __finally {
        _Print("EnumFontsA(%p,%hs,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

int __stdcall Mine_EnumFontsW(HDC a0,
                              LPCWSTR a1,
                              FONTENUMPROCW a2,
                              LPARAM a3)
{
    
    int rv = 0;
    __try {
        rv = Real_EnumFontsW(a0, a1, a2, a3);
    } __finally {
        _Print("EnumFontsW(%p,%ls,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

int __stdcall Mine_EnumICMProfilesA(HDC a0,
                                    ICMENUMPROCA a1,
                                    LPARAM a2)
{
    
    int rv = 0;
    __try {
        rv = Real_EnumICMProfilesA(a0, a1, a2);
    } __finally {
        _Print("EnumICMProfilesA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_EnumICMProfilesW(HDC a0,
                                    ICMENUMPROCW a1,
                                    LPARAM a2)
{
    
    int rv = 0;
    __try {
        rv = Real_EnumICMProfilesW(a0, a1, a2);
    } __finally {
        _Print("EnumICMProfilesW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EnumMetaFile(HDC a0,
                                 HMETAFILE a1,
                                 MFENUMPROC a2,
                                 LPARAM a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumMetaFile(a0, a1, a2, a3);
    } __finally {
        _Print("EnumMetaFile(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

int __stdcall Mine_EnumObjects(HDC a0,
                               int a1,
                               GOBJENUMPROC a2,
                               LPARAM a3)
{
    
    int rv = 0;
    __try {
        rv = Real_EnumObjects(a0, a1, a2, a3);
    } __finally {
        _Print("EnumObjects(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

int __stdcall Mine_EnumPropsA(HWND a0,
                              PROPENUMPROCA a1)
{
    
    int rv = 0;
    __try {
        rv = Real_EnumPropsA(a0, a1);
    } __finally {
        _Print("EnumPropsA(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_EnumPropsExA(HWND a0,
                                PROPENUMPROCEXA a1,
                                LPARAM a2)
{
    
    int rv = 0;
    __try {
        rv = Real_EnumPropsExA(a0, a1, a2);
    } __finally {
        _Print("EnumPropsExA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_EnumPropsExW(HWND a0,
                                PROPENUMPROCEXW a1,
                                LPARAM a2)
{
    
    int rv = 0;
    __try {
        rv = Real_EnumPropsExW(a0, a1, a2);
    } __finally {
        _Print("EnumPropsExW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_EnumPropsW(HWND a0,
                              PROPENUMPROCW a1)
{
    
    int rv = 0;
    __try {
        rv = Real_EnumPropsW(a0, a1);
    } __finally {
        _Print("EnumPropsW(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

#if _MSC_VER < 1300
BOOL __stdcall Mine_EnumResourceLanguagesA(HMODULE a0,
                                           LPCSTR a1,
                                           LPCSTR a2,
                                           ENUMRESLANGPROC a3,
                                           LONG_PTR a4)
#else
BOOL __stdcall Mine_EnumResourceLanguagesA(HMODULE a0,
                                           LPCSTR a1,
                                           LPCSTR a2,
                                           ENUMRESLANGPROCA a3,
                                           LONG_PTR a4)
#endif
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumResourceLanguagesA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("EnumResourceLanguagesA(%p,%hs,%hs,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

#if _MSC_VER < 1300
BOOL __stdcall Mine_EnumResourceLanguagesW(HMODULE a0,
                                           LPCWSTR a1,
                                           LPCWSTR a2,
                                           ENUMRESLANGPROC a3,
                                           LONG_PTR a4)
#else
BOOL __stdcall Mine_EnumResourceLanguagesW(HMODULE a0,
                                           LPCWSTR a1,
                                           LPCWSTR a2,
                                           ENUMRESLANGPROCW a3,
                                           LONG_PTR a4)
#endif
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumResourceLanguagesW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("EnumResourceLanguagesW(%p,%ls,%ls,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

#if _MSC_VER < 1300
BOOL __stdcall Mine_EnumResourceNamesA(HMODULE a0,
                                       LPCSTR a1,
                                       ENUMRESNAMEPROC a2,
                                       LONG_PTR a3)
#else
BOOL __stdcall Mine_EnumResourceNamesA(HMODULE a0,
                                       LPCSTR a1,
                                       ENUMRESNAMEPROCA a2,
                                       LONG_PTR a3)
#endif
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumResourceNamesA(a0, a1, a2, a3);
    } __finally {
        _Print("EnumResourceNamesA(%p,%hs,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

#if _MSC_VER < 1300
BOOL __stdcall Mine_EnumResourceNamesW(HMODULE a0,
                                       LPCWSTR a1,
                                       ENUMRESNAMEPROC a2,
                                       LONG_PTR a3)
#else
BOOL __stdcall Mine_EnumResourceNamesW(HMODULE a0,
                                       LPCWSTR a1,
                                       ENUMRESNAMEPROCW a2,
                                       LONG_PTR a3)
#endif
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumResourceNamesW(a0, a1, a2, a3);
    } __finally {
        _Print("EnumResourceNamesW(%p,%ls,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

#if _MSC_VER < 1300
BOOL __stdcall Mine_EnumResourceTypesA(HMODULE a0,
                                       ENUMRESTYPEPROC a1,
                                       LONG_PTR a2)
#else
BOOL __stdcall Mine_EnumResourceTypesA(HMODULE a0,
                                       ENUMRESTYPEPROCA a1,
                                       LONG_PTR a2)
#endif
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumResourceTypesA(a0, a1, a2);
    } __finally {
        _Print("EnumResourceTypesA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

#if _MSC_VER < 1300
BOOL __stdcall Mine_EnumResourceTypesW(HMODULE a0,
                                       ENUMRESTYPEPROC a1,
                                       LONG_PTR a2)
#else
BOOL __stdcall Mine_EnumResourceTypesW(HMODULE a0,
                                       ENUMRESTYPEPROCW a1,
                                       LONG_PTR a2)
#endif
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumResourceTypesW(a0, a1, a2);
    } __finally {
        _Print("EnumResourceTypesW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EnumSystemCodePagesA(CODEPAGE_ENUMPROCA a0,
                                         DWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumSystemCodePagesA(a0, a1);
    } __finally {
        _Print("EnumSystemCodePagesA(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EnumSystemCodePagesW(CODEPAGE_ENUMPROCW a0,
                                         DWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumSystemCodePagesW(a0, a1);
    } __finally {
        _Print("EnumSystemCodePagesW(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

#if(WINVER >= 0x0500)
BOOL __stdcall Mine_EnumSystemLocalesA(LOCALE_ENUMPROCA a0,
                                       DWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumSystemLocalesA(a0, a1);
    } __finally {
        _Print("EnumSystemLocalesA(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EnumSystemLocalesW(LOCALE_ENUMPROCW a0,
                                       DWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumSystemLocalesW(a0, a1);
    } __finally {
        _Print("EnumSystemLocalesW(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}
#endif // (WINVER >= 0x0500)

BOOL __stdcall Mine_EnumThreadWindows(DWORD a0,
                                      WNDENUMPROC a1,
                                      LPARAM a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumThreadWindows(a0, a1, a2);
    } __finally {
        _Print("EnumThreadWindows(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EnumTimeFormatsA(TIMEFMT_ENUMPROCA a0,
                                     LCID a1,
                                     DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumTimeFormatsA(a0, a1, a2);
    } __finally {
        _Print("EnumTimeFormatsA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EnumTimeFormatsW(TIMEFMT_ENUMPROCW a0,
                                     LCID a1,
                                     DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumTimeFormatsW(a0, a1, a2);
    } __finally {
        _Print("EnumTimeFormatsW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EnumWindowStationsA(WINSTAENUMPROCA a0,
                                        LPARAM a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumWindowStationsA(a0, a1);
    } __finally {
        _Print("EnumWindowStationsA(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EnumWindowStationsW(WINSTAENUMPROCW a0,
                                        LPARAM a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumWindowStationsW(a0, a1);
    } __finally {
        _Print("EnumWindowStationsW(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EnumWindows(WNDENUMPROC a0,
                                LPARAM a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EnumWindows(a0, a1);
    } __finally {
        _Print("EnumWindows(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EqualRect(RECT* a0,
                              RECT* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EqualRect(a0, a1);
    } __finally {
        _Print("EqualRect(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EqualRgn(HRGN a0,
                             HRGN a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EqualRgn(a0, a1);
    } __finally {
        _Print("EqualRgn(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_EraseTape(HANDLE a0,
                               DWORD a1,
                               BOOL a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_EraseTape(a0, a1, a2);
    } __finally {
        _Print("EraseTape(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_Escape(HDC a0,
                          int a1,
                          int a2,
                          LPCSTR a3,
                          LPVOID a4)
{
    
    int rv = 0;
    __try {
        rv = Real_Escape(a0, a1, a2, a3, a4);
    } __finally {
        _Print("Escape(%p,%p,%p,%hs,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_EscapeCommFunction(HANDLE a0,
                                       DWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_EscapeCommFunction(a0, a1);
    } __finally {
        _Print("EscapeCommFunction(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_ExcludeClipRect(HDC a0,
                                   int a1,
                                   int a2,
                                   int a3,
                                   int a4)
{
    
    int rv = 0;
    __try {
        rv = Real_ExcludeClipRect(a0, a1, a2, a3, a4);
    } __finally {
        _Print("ExcludeClipRect(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_ExcludeUpdateRgn(HDC a0,
                                    HWND a1)
{
    
    int rv = 0;
    __try {
        rv = Real_ExcludeUpdateRgn(a0, a1);
    } __finally {
        _Print("ExcludeUpdateRgn(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

void __stdcall Mine_ExitProcess(UINT a0)
{
    
    __try {
        Real_ExitProcess(a0);
    } __finally {
        _Print("ExitProcess(%p) ->", a0);
    };
}

void __stdcall Mine_ExitThread(DWORD a0)
{
    
    __try {
        Real_ExitThread(a0);
    } __finally {
        _Print("ExitThread(%p) ->", a0);
    };
}

BOOL __stdcall Mine_ExitWindowsEx(UINT a0,
                                  DWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ExitWindowsEx(a0, a1);
    } __finally {
        _Print("ExitWindowsEx(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_ExpandEnvironmentStringsA(LPCSTR a0,
                                               LPSTR a1,
                                               DWORD a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_ExpandEnvironmentStringsA(a0, a1, a2);
    } __finally {
        _Print("ExpandEnvironmentStringsA(%hs,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_ExpandEnvironmentStringsW(LPCWSTR a0,
                                               LPWSTR a1,
                                               DWORD a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_ExpandEnvironmentStringsW(a0, a1, a2);
    } __finally {
        _Print("ExpandEnvironmentStringsW(%ls,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HPEN __stdcall Mine_ExtCreatePen(DWORD a0,
                                 DWORD a1,
                                 LOGBRUSH* a2,
                                 DWORD a3,
                                 DWORD* a4)
{
    
    HPEN rv = 0;
    __try {
        rv = Real_ExtCreatePen(a0, a1, a2, a3, a4);
    } __finally {
        _Print("ExtCreatePen(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

HRGN __stdcall Mine_ExtCreateRegion(XFORM* a0,
                                    DWORD a1,
                                    RGNDATA* a2)
{
    
    HRGN rv = 0;
    __try {
        rv = Real_ExtCreateRegion(a0, a1, a2);
    } __finally {
        _Print("ExtCreateRegion(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_ExtEscape(HDC a0,
                             int a1,
                             int a2,
                             LPCSTR a3,
                             int a4,
                             LPSTR a5)
{
    
    int rv = 0;
    __try {
        rv = Real_ExtEscape(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("ExtEscape(%p,%p,%p,%hs,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ExtFloodFill(HDC a0,
                                 int a1,
                                 int a2,
                                 COLORREF a3,
                                 UINT a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ExtFloodFill(a0, a1, a2, a3, a4);
    } __finally {
        _Print("ExtFloodFill(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_ExtSelectClipRgn(HDC a0,
                                    HRGN a1,
                                    int a2)
{
    
    int rv = 0;
    __try {
        rv = Real_ExtSelectClipRgn(a0, a1, a2);
    } __finally {
        _Print("ExtSelectClipRgn(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ExtTextOutA(HDC a0,
                                int a1,
                                int a2,
                                UINT a3,
                                RECT* a4,
                                LPCSTR a5,
                                UINT a6,
                                INT* a7)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ExtTextOutA(a0, a1, a2, a3, a4, a5, a6, a7);
    } __finally {
        _Print("ExtTextOutA(%p,%p,%p,%p,%p,%hs,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ExtTextOutW(HDC a0,
                                int a1,
                                int a2,
                                UINT a3,
                                RECT* a4,
                                LPCWSTR a5,
                                UINT a6,
                                INT* a7)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ExtTextOutW(a0, a1, a2, a3, a4, a5, a6, a7);
    } __finally {
        _Print("ExtTextOutW(%p,%p,%p,%p,%p,%ls,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, rv);
    };
    return rv;
}

void __stdcall Mine_FatalAppExitA(UINT a0,
                                  LPCSTR a1)
{
    
    __try {
        Real_FatalAppExitA(a0, a1);
    } __finally {
        _Print("FatalAppExitA(%p,%hs) ->", a0, a1);
    };
}

void __stdcall Mine_FatalAppExitW(UINT a0,
                                  LPCWSTR a1)
{
    
    __try {
        Real_FatalAppExitW(a0, a1);
    } __finally {
        _Print("FatalAppExitW(%p,%ls) ->", a0, a1);
    };
}

void __stdcall Mine_FatalExit(int a0)
{
    
    __try {
        Real_FatalExit(a0);
    } __finally {
        _Print("FatalExit(%p) ->", a0);
    };
}

BOOL __stdcall Mine_FileTimeToDosDateTime(FILETIME* a0,
                                          LPWORD a1,
                                          LPWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FileTimeToDosDateTime(a0, a1, a2);
    } __finally {
        _Print("FileTimeToDosDateTime(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FileTimeToLocalFileTime(FILETIME* a0,
                                            LPFILETIME a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FileTimeToLocalFileTime(a0, a1);
    } __finally {
        _Print("FileTimeToLocalFileTime(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FileTimeToSystemTime(FILETIME* a0,
                                         LPSYSTEMTIME a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FileTimeToSystemTime(a0, a1);
    } __finally {
        _Print("FileTimeToSystemTime(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FillConsoleOutputAttribute(HANDLE a0,
                                               WORD a1,
                                               DWORD a2,
                                               COORD a3,
                                               LPDWORD a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FillConsoleOutputAttribute(a0, a1, a2, a3, a4);
    } __finally {
        _Print("FillConsoleOutputAttribute(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FillConsoleOutputCharacterA(HANDLE a0,
                                                CHAR a1,
                                                DWORD a2,
                                                COORD a3,
                                                LPDWORD a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FillConsoleOutputCharacterA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("FillConsoleOutputCharacterA(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FillConsoleOutputCharacterW(HANDLE a0,
                                                WCHAR a1,
                                                DWORD a2,
                                                COORD a3,
                                                LPDWORD a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FillConsoleOutputCharacterW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("FillConsoleOutputCharacterW(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FillPath(HDC a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FillPath(a0);
    } __finally {
        _Print("FillPath(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_FillRect(HDC a0,
                            RECT* a1,
                            HBRUSH a2)
{
    
    int rv = 0;
    __try {
        rv = Real_FillRect(a0, a1, a2);
    } __finally {
        _Print("FillRect(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FillRgn(HDC a0,
                            HRGN a1,
                            HBRUSH a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FillRgn(a0, a1, a2);
    } __finally {
        _Print("FillRgn(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

ATOM __stdcall Mine_FindAtomA(LPCSTR a0)
{
    
    ATOM rv = 0;
    __try {
        rv = Real_FindAtomA(a0);
    } __finally {
        _Print("FindAtomA(%hs) -> %p", a0, rv);
    };
    return rv;
}

ATOM __stdcall Mine_FindAtomW(LPCWSTR a0)
{
    
    ATOM rv = 0;
    __try {
        rv = Real_FindAtomW(a0);
    } __finally {
        _Print("FindAtomW(%ls) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FindClose(HANDLE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FindClose(a0);
    } __finally {
        _Print("FindClose(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FindCloseChangeNotification(HANDLE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FindCloseChangeNotification(a0);
    } __finally {
        _Print("FindCloseChangeNotification(%p) -> %p", a0, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_FindFirstChangeNotificationA(LPCSTR a0,
                                                   BOOL a1,
                                                   DWORD a2)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_FindFirstChangeNotificationA(a0, a1, a2);
    } __finally {
        _Print("FindFirstChangeNotificationA(%hs,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_FindFirstChangeNotificationW(LPCWSTR a0,
                                                   BOOL a1,
                                                   DWORD a2)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_FindFirstChangeNotificationW(a0, a1, a2);
    } __finally {
        _Print("FindFirstChangeNotificationW(%ls,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_FindFirstFileA(LPCSTR a0,
                                     LPWIN32_FIND_DATAA a1)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_FindFirstFileA(a0, a1);
        if (info->hiddenFile[0] != 0 && strcmp(a1->cFileName, info->hiddenFile) == 0) {
            if (!Real_FindNextFileA(rv, a1)) {
                rv = INVALID_HANDLE_VALUE;
                SetLastError(ERROR_FILE_NOT_FOUND);
            }
        }
    } __finally {
        _Print("FindFirstFileA(%hs,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_FindFirstFileExA(LPCSTR a0,
                                       FINDEX_INFO_LEVELS a1,
                                       LPVOID a2,
                                       FINDEX_SEARCH_OPS a3,
                                       LPVOID a4,
                                       DWORD a5)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_FindFirstFileExA(a0, a1, a2, a3, a4, a5);
        LPWIN32_FIND_DATAA dat = (LPWIN32_FIND_DATAA)a2;
        if (info->hiddenFile[0] != 0 && strcmp(dat->cFileName, info->hiddenFile) == 0) {
            if (!Real_FindNextFileA(rv, dat)) {
                rv = INVALID_HANDLE_VALUE;
                SetLastError(ERROR_FILE_NOT_FOUND);
            }
        }
    } __finally {
        _Print("FindFirstFileExA(%hs,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_FindFirstFileExW(LPCWSTR a0,
                                       FINDEX_INFO_LEVELS a1,
                                       LPVOID a2,
                                       FINDEX_SEARCH_OPS a3,
                                       LPVOID a4,
                                       DWORD a5)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_FindFirstFileExW(a0, a1, a2, a3, a4, a5);
        LPWIN32_FIND_DATAW dat = (LPWIN32_FIND_DATAW)a2;
        char filename[SHRT_MAX] = { 0 };
        WideCharToMultiByte(CP_UTF8, 0, dat->cFileName, -1, filename, SHRT_MAX, 0, 0);
        if (info->hiddenFile[0] != 0 && strcmp(filename, info->hiddenFile) == 0) {
            if (!Real_FindNextFileW(rv, dat)) {
                rv = INVALID_HANDLE_VALUE;
                SetLastError(ERROR_FILE_NOT_FOUND);
            }
        }
    } __finally {
        _Print("FindFirstFileExW(%ls,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_FindFirstFileW(LPCWSTR a0,
                                     LPWIN32_FIND_DATAW a1)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_FindFirstFileW(a0, a1); 
        char filename[SHRT_MAX] = { 0 };
        WideCharToMultiByte(CP_UTF8, 0, a1->cFileName, -1, filename, SHRT_MAX, 0, 0);
        if (info->hiddenFile[0] != 0 && strcmp(filename, info->hiddenFile) == 0) {
            if (!Real_FindNextFileW(rv, a1)) {
                rv = INVALID_HANDLE_VALUE;
                SetLastError(ERROR_FILE_NOT_FOUND);
            }
        }
    } __finally {
        _Print("FindFirstFileW(%ls,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FindNextChangeNotification(HANDLE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FindNextChangeNotification(a0);
    } __finally {
        _Print("FindNextChangeNotification(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FindNextFileA(HANDLE a0,
                                  LPWIN32_FIND_DATAA a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FindNextFileA(a0, a1);
        if (info->hiddenFile[0] != 0 && strcmp(a1->cFileName, info->hiddenFile) == 0) {
            rv = Real_FindNextFileA(a0, a1);
        }
    } __finally {
        _Print("FindNextFileA(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FindNextFileW(HANDLE a0,
                                  LPWIN32_FIND_DATAW a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FindNextFileW(a0, a1);
        char filename[SHRT_MAX] = { 0 };
        WideCharToMultiByte(CP_UTF8, 0, a1->cFileName, -1, filename, SHRT_MAX, 0, 0);
        if (info->hiddenFile[0] != 0 && strcmp(filename, info->hiddenFile) == 0) {
            rv = Real_FindNextFileW(a0, a1);
        }
    } __finally {
        _Print("FindNextFileW(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRSRC __stdcall Mine_FindResourceA(HMODULE a0,
                                   LPCSTR a1,
                                   LPCSTR a2)
{
    
    HRSRC rv = 0;
    __try {
        rv = Real_FindResourceA(a0, a1, a2);
    } __finally {
        _Print("FindResourceA(%p,%hs,%hs) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HRSRC __stdcall Mine_FindResourceExA(HMODULE a0,
                                     LPCSTR a1,
                                     LPCSTR a2,
                                     WORD a3)
{
    
    HRSRC rv = 0;
    __try {
        rv = Real_FindResourceExA(a0, a1, a2, a3);
    } __finally {
        _Print("FindResourceExA(%p,%hs,%hs,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HRSRC __stdcall Mine_FindResourceExW(HMODULE a0,
                                     LPCWSTR a1,
                                     LPCWSTR a2,
                                     WORD a3)
{
    
    HRSRC rv = 0;
    __try {
        rv = Real_FindResourceExW(a0, a1, a2, a3);
    } __finally {
        _Print("FindResourceExW(%p,%ls,%ls,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HRSRC __stdcall Mine_FindResourceW(HMODULE a0,
                                   LPCWSTR a1,
                                   LPCWSTR a2)
{
    
    HRSRC rv = 0;
    __try {
        rv = Real_FindResourceW(a0, a1, a2);
    } __finally {
        _Print("FindResourceW(%p,%ls,%ls) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HWND __stdcall Mine_FindWindowA(LPCSTR a0,
                                LPCSTR a1)
{
    
    HWND rv = 0;
    __try {
        rv = Real_FindWindowA(a0, a1);
    } __finally {
        _Print("FindWindowA(%hs,%hs) -> %p", a0, a1, rv);
    };
    return rv;
}

HWND __stdcall Mine_FindWindowExA(HWND a0,
                                  HWND a1,
                                  LPCSTR a2,
                                  LPCSTR a3)
{
    
    HWND rv = 0;
    __try {
        rv = Real_FindWindowExA(a0, a1, a2, a3);
    } __finally {
        _Print("FindWindowExA(%p,%p,%hs,%hs) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HWND __stdcall Mine_FindWindowExW(HWND a0,
                                  HWND a1,
                                  LPCWSTR a2,
                                  LPCWSTR a3)
{
    
    HWND rv = 0;
    __try {
        rv = Real_FindWindowExW(a0, a1, a2, a3);
    } __finally {
        _Print("FindWindowExW(%p,%p,%ls,%ls) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HWND __stdcall Mine_FindWindowW(LPCWSTR a0,
                                LPCWSTR a1)
{
    
    HWND rv = 0;
    __try {
        rv = Real_FindWindowW(a0, a1);
    } __finally {
        _Print("FindWindowW(%ls,%ls) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FixBrushOrgEx(HDC a0,
                                  int a1,
                                  int a2,
                                  POINT* a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FixBrushOrgEx(a0, a1, a2, a3);
    } __finally {
        _Print("FixBrushOrgEx(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FlashWindow(HWND a0,
                                BOOL a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FlashWindow(a0, a1);
    } __finally {
        _Print("FlashWindow(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FlattenPath(HDC a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FlattenPath(a0);
    } __finally {
        _Print("FlattenPath(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FloodFill(HDC a0,
                              int a1,
                              int a2,
                              COLORREF a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FloodFill(a0, a1, a2, a3);
    } __finally {
        _Print("FloodFill(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FlushConsoleInputBuffer(HANDLE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FlushConsoleInputBuffer(a0);
    } __finally {
        _Print("FlushConsoleInputBuffer(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FlushFileBuffers(HANDLE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FlushFileBuffers(a0);
    } __finally {
        _Print("FlushFileBuffers(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FlushViewOfFile(LPCVOID a0,
                                    SIZE_T a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FlushViewOfFile(a0, a1);
    } __finally {
        _Print("FlushViewOfFile(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_FmtIdToPropStgName(FMTID* a0,
                                          LPOLESTR a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_FmtIdToPropStgName(a0, a1);
    } __finally {
        _Print("FmtIdToPropStgName(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_FoldStringA(DWORD a0,
                               LPCSTR a1,
                               int a2,
                               LPSTR a3,
                               int a4)
{
    
    int rv = 0;
    __try {
        rv = Real_FoldStringA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("FoldStringA(%p,%hs,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_FoldStringW(DWORD a0,
                               LPCWSTR a1,
                               int a2,
                               LPWSTR a3,
                               int a4)
{
    
    int rv = 0;
    __try {
        rv = Real_FoldStringW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("FoldStringW(%p,%ls,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

DWORD __stdcall Mine_FormatMessageA(DWORD a0,
                                    LPCVOID a1,
                                    DWORD a2,
                                    DWORD a3,
                                    LPSTR a4,
                                    DWORD a5,
                                    va_list* a6)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_FormatMessageA(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("FormatMessageA(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

DWORD __stdcall Mine_FormatMessageW(DWORD a0,
                                    LPCVOID a1,
                                    DWORD a2,
                                    DWORD a3,
                                    LPWSTR a4,
                                    DWORD a5,
                                    va_list* a6)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_FormatMessageW(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("FormatMessageW(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

int __stdcall Mine_FrameRect(HDC a0,
                             RECT* a1,
                             HBRUSH a2)
{
    
    int rv = 0;
    __try {
        rv = Real_FrameRect(a0, a1, a2);
    } __finally {
        _Print("FrameRect(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FrameRgn(HDC a0,
                             HRGN a1,
                             HBRUSH a2,
                             int a3,
                             int a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FrameRgn(a0, a1, a2, a3, a4);
    } __finally {
        _Print("FrameRgn(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FreeConsole(void)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FreeConsole();
    } __finally {
        _Print("FreeConsole() -> %p", rv);
    };
    return rv;
}

BOOL __stdcall Mine_FreeDDElParam(UINT a0,
                                  LPARAM a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FreeDDElParam(a0, a1);
    } __finally {
        _Print("FreeDDElParam(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FreeEnvironmentStringsA(LPSTR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FreeEnvironmentStringsA(a0);
    } __finally {
        _Print("FreeEnvironmentStringsA(%hs) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FreeEnvironmentStringsW(LPWSTR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FreeEnvironmentStringsW(a0);
    } __finally {
        _Print("FreeEnvironmentStringsW(%ls) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FreeLibrary(HMODULE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FreeLibrary(a0);
    } __finally {
        _Print("FreeLibrary(%p) -> %p", a0, rv);
    };
    return rv;
}

void __stdcall Mine_FreeLibraryAndExitThread(HMODULE a0,
                                             DWORD a1)
{
    
    __try {
        Real_FreeLibraryAndExitThread(a0, a1);
    } __finally {
        _Print("FreeLibraryAndExitThread(%p,%p) ->", a0, a1);
    };
}

HRESULT __stdcall Mine_FreePropVariantArray(ULONG a0,
                                            PROPVARIANT* a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_FreePropVariantArray(a0, a1);
    } __finally {
        _Print("FreePropVariantArray(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_FreeResource(HGLOBAL a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_FreeResource(a0);
    } __finally {
        _Print("FreeResource(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GdiComment(HDC a0,
                               UINT a1,
                               BYTE* a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GdiComment(a0, a1, a2);
    } __finally {
        _Print("GdiComment(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GdiFlush(void)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GdiFlush();
    } __finally {
        _Print("GdiFlush() -> %p", rv);
    };
    return rv;
}

DWORD __stdcall Mine_GdiGetBatchLimit(void)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GdiGetBatchLimit();
    } __finally {
        _Print("GdiGetBatchLimit() -> %p", rv);
    };
    return rv;
}

DWORD __stdcall Mine_GdiSetBatchLimit(DWORD a0)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GdiSetBatchLimit(a0);
    } __finally {
        _Print("GdiSetBatchLimit(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GenerateConsoleCtrlEvent(DWORD a0,
                                             DWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GenerateConsoleCtrlEvent(a0, a1);
    } __finally {
        _Print("GenerateConsoleCtrlEvent(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetACP(void)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetACP();
    } __finally {
        _Print("GetACP() -> %p", rv);
    };
    return rv;
}

HWND __stdcall Mine_GetActiveWindow(void)
{
    
    HWND rv = 0;
    __try {
        rv = Real_GetActiveWindow();
    } __finally {
        _Print("GetActiveWindow() -> %p", rv);
    };
    return rv;
}

int __stdcall Mine_GetArcDirection(HDC a0)
{
    
    int rv = 0;
    __try {
        rv = Real_GetArcDirection(a0);
    } __finally {
        _Print("GetArcDirection(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetAspectRatioFilterEx(HDC a0,
                                           SIZE* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetAspectRatioFilterEx(a0, a1);
    } __finally {
        _Print("GetAspectRatioFilterEx(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

SHORT __stdcall Mine_GetAsyncKeyState(int a0)
{
    
    SHORT rv = 0;
    __try {
        rv = Real_GetAsyncKeyState(a0);
    } __finally {
        _Print("GetAsyncKeyState(%p) -> %p", a0, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetAtomNameA(ATOM a0,
                                 LPSTR a1,
                                 int a2)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetAtomNameA(a0, a1, a2);
    } __finally {
        _Print("GetAtomNameA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetAtomNameW(ATOM a0,
                                 LPWSTR a1,
                                 int a2)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetAtomNameW(a0, a1, a2);
    } __finally {
        _Print("GetAtomNameW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetBinaryTypeA(LPCSTR a0,
                                   LPDWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetBinaryTypeA(a0, a1);
    } __finally {
        _Print("GetBinaryTypeA(%hs,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetBinaryTypeW(LPCWSTR a0,
                                   LPDWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetBinaryTypeW(a0, a1);
    } __finally {
        _Print("GetBinaryTypeW(%ls,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

LONG __stdcall Mine_GetBitmapBits(HBITMAP a0,
                                  LONG a1,
                                  LPVOID a2)
{
    
    LONG rv = 0;
    __try {
        rv = Real_GetBitmapBits(a0, a1, a2);
    } __finally {
        _Print("GetBitmapBits(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetBitmapDimensionEx(HBITMAP a0,
                                         SIZE* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetBitmapDimensionEx(a0, a1);
    } __finally {
        _Print("GetBitmapDimensionEx(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

COLORREF __stdcall Mine_GetBkColor(HDC a0)
{
    
    COLORREF rv = 0;
    __try {
        rv = Real_GetBkColor(a0);
    } __finally {
        _Print("GetBkColor(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_GetBkMode(HDC a0)
{
    
    int rv = 0;
    __try {
        rv = Real_GetBkMode(a0);
    } __finally {
        _Print("GetBkMode(%p) -> %p", a0, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetBoundsRect(HDC a0,
                                  LPRECT a1,
                                  UINT a2)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetBoundsRect(a0, a1, a2);
    } __finally {
        _Print("GetBoundsRect(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetBrushOrgEx(HDC a0,
                                  POINT* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetBrushOrgEx(a0, a1);
    } __finally {
        _Print("GetBrushOrgEx(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetCPInfo(UINT a0,
                              LPCPINFO a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetCPInfo(a0, a1);
    } __finally {
        _Print("GetCPInfo(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HWND __stdcall Mine_GetCapture(void)
{
    
    HWND rv = 0;
    __try {
        rv = Real_GetCapture();
    } __finally {
        _Print("GetCapture() -> %p", rv);
    };
    return rv;
}

UINT __stdcall Mine_GetCaretBlinkTime(void)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetCaretBlinkTime();
    } __finally {
        _Print("GetCaretBlinkTime() -> %p", rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetCaretPos(POINT* a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetCaretPos(a0);
    } __finally {
        _Print("GetCaretPos(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetCharABCWidthsA(HDC a0,
                                      UINT a1,
                                      UINT a2,
                                      LPABC a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetCharABCWidthsA(a0, a1, a2, a3);
    } __finally {
        _Print("GetCharABCWidthsA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetCharABCWidthsFloatA(HDC a0,
                                           UINT a1,
                                           UINT a2,
                                           LPABCFLOAT a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetCharABCWidthsFloatA(a0, a1, a2, a3);
    } __finally {
        _Print("GetCharABCWidthsFloatA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetCharABCWidthsFloatW(HDC a0,
                                           UINT a1,
                                           UINT a2,
                                           LPABCFLOAT a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetCharABCWidthsFloatW(a0, a1, a2, a3);
    } __finally {
        _Print("GetCharABCWidthsFloatW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetCharABCWidthsW(HDC a0,
                                      UINT a1,
                                      UINT a2,
                                      LPABC a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetCharABCWidthsW(a0, a1, a2, a3);
    } __finally {
        _Print("GetCharABCWidthsW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetCharWidth32A(HDC a0,
                                    UINT a1,
                                    UINT a2,
                                    LPINT a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetCharWidth32A(a0, a1, a2, a3);
    } __finally {
        _Print("GetCharWidth32A(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetCharWidth32W(HDC a0,
                                    UINT a1,
                                    UINT a2,
                                    LPINT a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetCharWidth32W(a0, a1, a2, a3);
    } __finally {
        _Print("GetCharWidth32W(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetCharWidthA(HDC a0,
                                  UINT a1,
                                  UINT a2,
                                  LPINT a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetCharWidthA(a0, a1, a2, a3);
    } __finally {
        _Print("GetCharWidthA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetCharWidthFloatA(HDC a0,
                                       UINT a1,
                                       UINT a2,
                                       PFLOAT a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetCharWidthFloatA(a0, a1, a2, a3);
    } __finally {
        _Print("GetCharWidthFloatA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetCharWidthFloatW(HDC a0,
                                       UINT a1,
                                       UINT a2,
                                       PFLOAT a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetCharWidthFloatW(a0, a1, a2, a3);
    } __finally {
        _Print("GetCharWidthFloatW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetCharWidthW(HDC a0,
                                  UINT a1,
                                  UINT a2,
                                  LPINT a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetCharWidthW(a0, a1, a2, a3);
    } __finally {
        _Print("GetCharWidthW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetCharacterPlacementA(HDC a0,
                                            LPCSTR a1,
                                            int a2,
                                            int a3,
                                            LPGCP_RESULTSA a4,
                                            DWORD a5)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetCharacterPlacementA(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("GetCharacterPlacementA(%p,%hs,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetCharacterPlacementW(HDC a0,
                                            LPCWSTR a1,
                                            int a2,
                                            int a3,
                                            LPGCP_RESULTSW a4,
                                            DWORD a5)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetCharacterPlacementW(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("GetCharacterPlacementW(%p,%ls,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_GetClassFile(LPCOLESTR a0,
                                    CLSID* a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_GetClassFile(a0, a1);
    } __finally {
        _Print("GetClassFile(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetClassInfoA(HINSTANCE a0,
                                  LPCSTR a1,
                                  LPWNDCLASSA a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetClassInfoA(a0, a1, a2);
    } __finally {
        _Print("GetClassInfoA(%p,%hs,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetClassInfoExA(HINSTANCE a0,
                                    LPCSTR a1,
                                    LPWNDCLASSEXA a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetClassInfoExA(a0, a1, a2);
    } __finally {
        _Print("GetClassInfoExA(%p,%hs,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetClassInfoExW(HINSTANCE a0,
                                    LPCWSTR a1,
                                    LPWNDCLASSEXW a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetClassInfoExW(a0, a1, a2);
    } __finally {
        _Print("GetClassInfoExW(%p,%ls,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetClassInfoW(HINSTANCE a0,
                                  LPCWSTR a1,
                                  LPWNDCLASSW a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetClassInfoW(a0, a1, a2);
    } __finally {
        _Print("GetClassInfoW(%p,%ls,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetClassLongA(HWND a0,
                                   int a1)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetClassLongA(a0, a1);
    } __finally {
        _Print("GetClassLongA(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetClassLongW(HWND a0,
                                   int a1)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetClassLongW(a0, a1);
    } __finally {
        _Print("GetClassLongW(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_GetClassNameA(HWND a0,
                                 LPSTR a1,
                                 int a2)
{
    
    int rv = 0;
    __try {
        rv = Real_GetClassNameA(a0, a1, a2);
    } __finally {
        _Print("GetClassNameA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_GetClassNameW(HWND a0,
                                 LPWSTR a1,
                                 int a2)
{
    
    int rv = 0;
    __try {
        rv = Real_GetClassNameW(a0, a1, a2);
    } __finally {
        _Print("GetClassNameW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

WORD __stdcall Mine_GetClassWord(HWND a0,
                                 int a1)
{
    
    WORD rv = 0;
    __try {
        rv = Real_GetClassWord(a0, a1);
    } __finally {
        _Print("GetClassWord(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetClientRect(HWND a0,
                                  LPRECT a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetClientRect(a0, a1);
    } __finally {
        _Print("GetClientRect(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_GetClipBox(HDC a0,
                              LPRECT a1)
{
    
    int rv = 0;
    __try {
        rv = Real_GetClipBox(a0, a1);
    } __finally {
        _Print("GetClipBox(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetClipCursor(LPRECT a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetClipCursor(a0);
    } __finally {
        _Print("GetClipCursor(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_GetClipRgn(HDC a0,
                              HRGN a1)
{
    
    int rv = 0;
    __try {
        rv = Real_GetClipRgn(a0, a1);
    } __finally {
        _Print("GetClipRgn(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_GetClipboardData(UINT a0)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_GetClipboardData(a0);
    } __finally {
        _Print("GetClipboardData(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_GetClipboardFormatNameA(UINT a0,
                                           LPSTR a1,
                                           int a2)
{
    
    int rv = 0;
    __try {
        rv = Real_GetClipboardFormatNameA(a0, a1, a2);
    } __finally {
        _Print("GetClipboardFormatNameA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_GetClipboardFormatNameW(UINT a0,
                                           LPWSTR a1,
                                           int a2)
{
    
    int rv = 0;
    __try {
        rv = Real_GetClipboardFormatNameW(a0, a1, a2);
    } __finally {
        _Print("GetClipboardFormatNameW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HWND __stdcall Mine_GetClipboardOwner(void)
{
    
    HWND rv = 0;
    __try {
        rv = Real_GetClipboardOwner();
    } __finally {
        _Print("GetClipboardOwner() -> %p", rv);
    };
    return rv;
}

HWND __stdcall Mine_GetClipboardViewer(void)
{
    
    HWND rv = 0;
    __try {
        rv = Real_GetClipboardViewer();
    } __finally {
        _Print("GetClipboardViewer() -> %p", rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetColorAdjustment(HDC a0,
                                       LPCOLORADJUSTMENT a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetColorAdjustment(a0, a1);
    } __finally {
        _Print("GetColorAdjustment(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HCOLORSPACE __stdcall Mine_GetColorSpace(HDC a0)
{
    
    HCOLORSPACE rv = 0;
    __try {
        rv = Real_GetColorSpace(a0);
    } __finally {
        _Print("GetColorSpace(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetCommConfig(HANDLE a0,
                                  LPCOMMCONFIG a1,
                                  LPDWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetCommConfig(a0, a1, a2);
    } __finally {
        _Print("GetCommConfig(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetCommMask(HANDLE a0,
                                LPDWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetCommMask(a0, a1);
    } __finally {
        _Print("GetCommMask(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetCommModemStatus(HANDLE a0,
                                       LPDWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetCommModemStatus(a0, a1);
    } __finally {
        _Print("GetCommModemStatus(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetCommProperties(HANDLE a0,
                                      LPCOMMPROP a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetCommProperties(a0, a1);
    } __finally {
        _Print("GetCommProperties(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetCommState(HANDLE a0,
                                 LPDCB a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetCommState(a0, a1);
    } __finally {
        _Print("GetCommState(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetCommTimeouts(HANDLE a0,
                                    LPCOMMTIMEOUTS a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetCommTimeouts(a0, a1);
    } __finally {
        _Print("GetCommTimeouts(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

LPSTR __stdcall Mine_GetCommandLineA(void)
{
    
    LPSTR rv = 0;
    __try {
        rv = Real_GetCommandLineA();
    } __finally {
        _Print("GetCommandLineA() -> %hs", rv);
    };
    return rv;
}

LPWSTR __stdcall Mine_GetCommandLineW(void)
{
    
    LPWSTR rv = 0;
    __try {
        rv = Real_GetCommandLineW();
    } __finally {
        _Print("GetCommandLineW() -> %ls", rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetComputerNameA(LPSTR a0,
                                     LPDWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetComputerNameA(a0, a1);
    } __finally {
        _Print("GetComputerNameA(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetComputerNameW(LPWSTR a0,
                                     LPDWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetComputerNameW(a0, a1);
    } __finally {
        _Print("GetComputerNameW(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetConsoleCP(void)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetConsoleCP();
    } __finally {
        _Print("GetConsoleCP() -> %p", rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetConsoleCursorInfo(HANDLE a0,
                                         PCONSOLE_CURSOR_INFO a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetConsoleCursorInfo(a0, a1);
    } __finally {
        _Print("GetConsoleCursorInfo(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetConsoleMode(HANDLE a0,
                                   LPDWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetConsoleMode(a0, a1);
    } __finally {
        _Print("GetConsoleMode(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetConsoleOutputCP(void)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetConsoleOutputCP();
    } __finally {
        _Print("GetConsoleOutputCP() -> %p", rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetConsoleScreenBufferInfo(HANDLE a0,
                                               PCONSOLE_SCREEN_BUFFER_INFO a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetConsoleScreenBufferInfo(a0, a1);
    } __finally {
        _Print("GetConsoleScreenBufferInfo(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetConsoleTitleA(LPSTR a0,
                                      DWORD a1)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetConsoleTitleA(a0, a1);
    } __finally {
        _Print("GetConsoleTitleA(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetConsoleTitleW(LPWSTR a0,
                                      DWORD a1)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetConsoleTitleW(a0, a1);
    } __finally {
        _Print("GetConsoleTitleW(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_GetConvertStg(LPSTORAGE a0)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_GetConvertStg(a0);
    } __finally {
        _Print("GetConvertStg(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_GetCurrencyFormatA(LCID a0,
                                      DWORD a1,
                                      LPCSTR a2,
                                      CURRENCYFMTA* a3,
                                      LPSTR a4,
                                      int a5)
{
    
    int rv = 0;
    __try {
        rv = Real_GetCurrencyFormatA(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("GetCurrencyFormatA(%p,%p,%hs,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

int __stdcall Mine_GetCurrencyFormatW(LCID a0,
                                      DWORD a1,
                                      LPCWSTR a2,
                                      CURRENCYFMTW* a3,
                                      LPWSTR a4,
                                      int a5)
{
    
    int rv = 0;
    __try {
        rv = Real_GetCurrencyFormatW(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("GetCurrencyFormatW(%p,%p,%ls,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetCurrentDirectoryA(DWORD a0,
                                          LPSTR a1)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetCurrentDirectoryA(a0, a1);
    } __finally {
        _Print("GetCurrentDirectoryA(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetCurrentDirectoryW(DWORD a0,
                                          LPWSTR a1)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetCurrentDirectoryW(a0, a1);
    } __finally {
        _Print("GetCurrentDirectoryW(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HGDIOBJ __stdcall Mine_GetCurrentObject(HDC a0,
                                        UINT a1)
{
    
    HGDIOBJ rv = 0;
    __try {
        rv = Real_GetCurrentObject(a0, a1);
    } __finally {
        _Print("GetCurrentObject(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetCurrentPositionEx(HDC a0,
                                         POINT* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetCurrentPositionEx(a0, a1);
    } __finally {
        _Print("GetCurrentPositionEx(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_GetCurrentProcess(void)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_GetCurrentProcess();
    } __finally {
        _Print("GetCurrentProcess() -> %p", rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetCurrentProcessId(void)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetCurrentProcessId();
    } __finally {
        _Print("GetCurrentProcessId() -> %p", rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetCurrentThreadId(void)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetCurrentThreadId();
    } __finally {
        _Print("GetCurrentThreadId() -> %p", rv);
    };
    return rv;
}

HCURSOR __stdcall Mine_GetCursor(void)
{
    
    HCURSOR rv = 0;
    __try {
        rv = Real_GetCursor();
    } __finally {
        _Print("GetCursor() -> %p", rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetCursorPos(POINT* a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetCursorPos(a0);
    } __finally {
        _Print("GetCursorPos(%p) -> %p", a0, rv);
    };
    return rv;
}

HDC __stdcall Mine_GetDC(HWND a0)
{
    
    HDC rv = 0;
    __try {
        rv = Real_GetDC(a0);
    } __finally {
        _Print("GetDC(%p) -> %p", a0, rv);
    };
    return rv;
}

HDC __stdcall Mine_GetDCEx(HWND a0,
                           HRGN a1,
                           DWORD a2)
{
    
    HDC rv = 0;
    __try {
        rv = Real_GetDCEx(a0, a1, a2);
    } __finally {
        _Print("GetDCEx(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetDCOrgEx(HDC a0,
                               POINT* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetDCOrgEx(a0, a1);
    } __finally {
        _Print("GetDCOrgEx(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetDIBColorTable(HDC a0,
                                     UINT a1,
                                     UINT a2,
                                     RGBQUAD* a3)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetDIBColorTable(a0, a1, a2, a3);
    } __finally {
        _Print("GetDIBColorTable(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

int __stdcall Mine_GetDIBits(HDC a0,
                             HBITMAP a1,
                             UINT a2,
                             UINT a3,
                             LPVOID a4,
                             LPBITMAPINFO a5,
                             UINT a6)
{
    
    int rv = 0;
    __try {
        rv = Real_GetDIBits(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("GetDIBits(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

int __stdcall Mine_GetDateFormatA(LCID a0,
                                  DWORD a1,
                                  SYSTEMTIME* a2,
                                  LPCSTR a3,
                                  LPSTR a4,
                                  int a5)
{
    
    int rv = 0;
    __try {
        rv = Real_GetDateFormatA(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("GetDateFormatA(%p,%p,%p,%hs,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

int __stdcall Mine_GetDateFormatW(LCID a0,
                                  DWORD a1,
                                  SYSTEMTIME* a2,
                                  LPCWSTR a3,
                                  LPWSTR a4,
                                  int a5)
{
    
    int rv = 0;
    __try {
        rv = Real_GetDateFormatW(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("GetDateFormatW(%p,%p,%p,%ls,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetDefaultCommConfigA(LPCSTR a0,
                                          LPCOMMCONFIG a1,
                                          LPDWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetDefaultCommConfigA(a0, a1, a2);
    } __finally {
        _Print("GetDefaultCommConfigA(%hs,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetDefaultCommConfigW(LPCWSTR a0,
                                          LPCOMMCONFIG a1,
                                          LPDWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetDefaultCommConfigW(a0, a1, a2);
    } __finally {
        _Print("GetDefaultCommConfigW(%ls,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HWND __stdcall Mine_GetDesktopWindow(void)
{
    
    HWND rv = 0;
    __try {
        rv = Real_GetDesktopWindow();
    } __finally {
        _Print("GetDesktopWindow() -> %p", rv);
    };
    return rv;
}

int __stdcall Mine_GetDeviceCaps(HDC a0,
                                 int a1)
{
    
    int rv = 0;
    __try {
        rv = Real_GetDeviceCaps(a0, a1);
    } __finally {
        _Print("GetDeviceCaps(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetDeviceGammaRamp(HDC a0,
                                       LPVOID a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetDeviceGammaRamp(a0, a1);
    } __finally {
        _Print("GetDeviceGammaRamp(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

long __stdcall Mine_GetDialogBaseUnits(void)
{
    
    long rv = 0;
    __try {
        rv = Real_GetDialogBaseUnits();
    } __finally {
        _Print("GetDialogBaseUnits() -> %p", rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetDiskFreeSpaceA(LPCSTR a0,
                                      LPDWORD a1,
                                      LPDWORD a2,
                                      LPDWORD a3,
                                      LPDWORD a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetDiskFreeSpaceA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("GetDiskFreeSpaceA(%hs,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetDiskFreeSpaceExA(LPCSTR a0,
                                        union _ULARGE_INTEGER* a1,
                                        union _ULARGE_INTEGER* a2,
                                        union _ULARGE_INTEGER* a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetDiskFreeSpaceExA(a0, a1, a2, a3);
    } __finally {
        _Print("GetDiskFreeSpaceExA(%hs,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetDiskFreeSpaceExW(LPCWSTR a0,
                                        union _ULARGE_INTEGER* a1,
                                        union _ULARGE_INTEGER* a2,
                                        union _ULARGE_INTEGER* a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetDiskFreeSpaceExW(a0, a1, a2, a3);
    } __finally {
        _Print("GetDiskFreeSpaceExW(%ls,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetDiskFreeSpaceW(LPCWSTR a0,
                                      LPDWORD a1,
                                      LPDWORD a2,
                                      LPDWORD a3,
                                      LPDWORD a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetDiskFreeSpaceW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("GetDiskFreeSpaceW(%ls,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_GetDlgCtrlID(HWND a0)
{
    
    int rv = 0;
    __try {
        rv = Real_GetDlgCtrlID(a0);
    } __finally {
        _Print("GetDlgCtrlID(%p) -> %p", a0, rv);
    };
    return rv;
}

HWND __stdcall Mine_GetDlgItem(HWND a0,
                               int a1)
{
    
    HWND rv = 0;
    __try {
        rv = Real_GetDlgItem(a0, a1);
    } __finally {
        _Print("GetDlgItem(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetDlgItemInt(HWND a0,
                                  int a1,
                                  BOOL* a2,
                                  BOOL a3)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetDlgItemInt(a0, a1, a2, a3);
    } __finally {
        _Print("GetDlgItemInt(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetDlgItemTextA(HWND a0,
                                    int a1,
                                    LPSTR a2,
                                    int a3)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetDlgItemTextA(a0, a1, a2, a3);
    } __finally {
        _Print("GetDlgItemTextA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetDlgItemTextW(HWND a0,
                                    int a1,
                                    LPWSTR a2,
                                    int a3)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetDlgItemTextW(a0, a1, a2, a3);
    } __finally {
        _Print("GetDlgItemTextW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetDoubleClickTime(void)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetDoubleClickTime();
    } __finally {
        _Print("GetDoubleClickTime() -> %p", rv);
    };
    return rv;
}

UINT __stdcall Mine_GetDriveTypeA(LPCSTR a0)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetDriveTypeA(a0);
    } __finally {
        _Print("GetDriveTypeA(%hs) -> %p", a0, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetDriveTypeW(LPCWSTR a0)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetDriveTypeW(a0);
    } __finally {
        _Print("GetDriveTypeW(%ls) -> %p", a0, rv);
    };
    return rv;
}

HENHMETAFILE __stdcall Mine_GetEnhMetaFileA(LPCSTR a0)
{
    
    HENHMETAFILE rv = 0;
    __try {
        rv = Real_GetEnhMetaFileA(a0);
    } __finally {
        _Print("GetEnhMetaFileA(%hs) -> %p", a0, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetEnhMetaFileBits(HENHMETAFILE a0,
                                       UINT a1,
                                       LPBYTE a2)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetEnhMetaFileBits(a0, a1, a2);
    } __finally {
        _Print("GetEnhMetaFileBits(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetEnhMetaFileDescriptionA(HENHMETAFILE a0,
                                               UINT a1,
                                               LPSTR a2)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetEnhMetaFileDescriptionA(a0, a1, a2);
    } __finally {
        _Print("GetEnhMetaFileDescriptionA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetEnhMetaFileDescriptionW(HENHMETAFILE a0,
                                               UINT a1,
                                               LPWSTR a2)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetEnhMetaFileDescriptionW(a0, a1, a2);
    } __finally {
        _Print("GetEnhMetaFileDescriptionW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetEnhMetaFileHeader(HENHMETAFILE a0,
                                         UINT a1,
                                         ENHMETAHEADER* a2)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetEnhMetaFileHeader(a0, a1, a2);
    } __finally {
        _Print("GetEnhMetaFileHeader(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetEnhMetaFilePaletteEntries(HENHMETAFILE a0,
                                                 UINT a1,
                                                 PALETTEENTRY* a2)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetEnhMetaFilePaletteEntries(a0, a1, a2);
    } __finally {
        _Print("GetEnhMetaFilePaletteEntries(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetEnhMetaFilePixelFormat(HENHMETAFILE a0,
                                              UINT a1,
                                              PIXELFORMATDESCRIPTOR* a2)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetEnhMetaFilePixelFormat(a0, a1, a2);
    } __finally {
        _Print("GetEnhMetaFilePixelFormat(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HENHMETAFILE __stdcall Mine_GetEnhMetaFileW(LPCWSTR a0)
{
    
    HENHMETAFILE rv = 0;
    __try {
        rv = Real_GetEnhMetaFileW(a0);
    } __finally {
        _Print("GetEnhMetaFileW(%ls) -> %p", a0, rv);
    };
    return rv;
}

LPSTR __stdcall Mine_GetEnvironmentStrings(void)
{
    
    LPSTR rv = 0;
    __try {
        rv = Real_GetEnvironmentStrings();
    } __finally {
        _Print("GetEnvironmentStrings() -> %hs", rv);
    };
    return rv;
}

LPWSTR __stdcall Mine_GetEnvironmentStringsW(void)
{
    
    LPWSTR rv = 0;
    __try {
        rv = Real_GetEnvironmentStringsW();
    } __finally {
        _Print("GetEnvironmentStringsW() -> %ls", rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetEnvironmentVariableA(LPCSTR a0,
                                             LPSTR a1,
                                             DWORD a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetEnvironmentVariableA(a0, a1, a2);
    } __finally {
        _Print("GetEnvironmentVariableA(%hs,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetEnvironmentVariableW(LPCWSTR a0,
                                             LPWSTR a1,
                                             DWORD a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetEnvironmentVariableW(a0, a1, a2);
    } __finally {
        _Print("GetEnvironmentVariableW(%ls,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetExitCodeProcess(HANDLE a0,
                                       LPDWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetExitCodeProcess(a0, a1);
    } __finally {
        _Print("GetExitCodeProcess(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetExitCodeThread(HANDLE a0,
                                      LPDWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetExitCodeThread(a0, a1);
    } __finally {
        _Print("GetExitCodeThread(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetFileAttributesA(LPCSTR a0)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetFileAttributesA(a0);
    } __finally {
        _Print("GetFileAttributesA(%hs) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetFileAttributesExA(LPCSTR a0,
                                         enum _GET_FILEEX_INFO_LEVELS a1,
                                         LPVOID a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetFileAttributesExA(a0, a1, a2);
    } __finally {
        _Print("GetFileAttributesExA(%hs,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetFileAttributesExW(LPCWSTR a0,
                                         enum _GET_FILEEX_INFO_LEVELS a1,
                                         LPVOID a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetFileAttributesExW(a0, a1, a2);
    } __finally {
        _Print("GetFileAttributesExW(%ls,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetFileAttributesW(LPCWSTR a0)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetFileAttributesW(a0);
    } __finally {
        _Print("GetFileAttributesW(%ls) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetFileInformationByHandle(HANDLE a0,
                                               LPBY_HANDLE_FILE_INFORMATION a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetFileInformationByHandle(a0, a1);
    } __finally {
        _Print("GetFileInformationByHandle(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetFileSize(HANDLE a0,
                                 LPDWORD a1)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetFileSize(a0, a1);
    } __finally {
        _Print("GetFileSize(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetFileTime(HANDLE a0,
                                LPFILETIME a1,
                                LPFILETIME a2,
                                LPFILETIME a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetFileTime(a0, a1, a2, a3);
    } __finally {
        _Print("GetFileTime(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetFileType(HANDLE a0)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetFileType(a0);
    } __finally {
        _Print("GetFileType(%p) -> %p", a0, rv);
    };
    return rv;
}

HWND __stdcall Mine_GetFocus(void)
{
    
    HWND rv = 0;
    __try {
        rv = Real_GetFocus();
    } __finally {
        _Print("GetFocus() -> %p", rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetFontData(HDC a0,
                                 DWORD a1,
                                 DWORD a2,
                                 LPVOID a3,
                                 DWORD a4)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetFontData(a0, a1, a2, a3, a4);
    } __finally {
        _Print("GetFontData(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetFontLanguageInfo(HDC a0)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetFontLanguageInfo(a0);
    } __finally {
        _Print("GetFontLanguageInfo(%p) -> %p", a0, rv);
    };
    return rv;
}

HWND __stdcall Mine_GetForegroundWindow(void)
{
    
    HWND rv = 0;
    __try {
        rv = Real_GetForegroundWindow();
    } __finally {
        _Print("GetForegroundWindow() -> %p", rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetFullPathNameA(LPCSTR a0,
                                      DWORD a1,
                                      LPSTR a2,
                                      LPSTR* a3)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetFullPathNameA(a0, a1, a2, a3);
    } __finally {
        _Print("GetFullPathNameA(%hs,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetFullPathNameW(LPCWSTR a0,
                                      DWORD a1,
                                      LPWSTR a2,
                                      LPWSTR* a3)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetFullPathNameW(a0, a1, a2, a3);
    } __finally {
        _Print("GetFullPathNameW(%ls,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetGlyphOutlineA(HDC a0,
                                      UINT a1,
                                      UINT a2,
                                      LPGLYPHMETRICS a3,
                                      DWORD a4,
                                      LPVOID a5,
                                      MAT2* a6)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetGlyphOutlineA(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("GetGlyphOutlineA(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetGlyphOutlineW(HDC a0,
                                      UINT a1,
                                      UINT a2,
                                      LPGLYPHMETRICS a3,
                                      DWORD a4,
                                      LPVOID a5,
                                      MAT2* a6)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetGlyphOutlineW(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("GetGlyphOutlineW(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

int __stdcall Mine_GetGraphicsMode(HDC a0)
{
    
    int rv = 0;
    __try {
        rv = Real_GetGraphicsMode(a0);
    } __finally {
        _Print("GetGraphicsMode(%p) -> %p", a0, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_GetHGlobalFromILockBytes(ILockBytes* a0,
                                                HGLOBAL* a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_GetHGlobalFromILockBytes(a0, a1);
    } __finally {
        _Print("GetHGlobalFromILockBytes(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_GetHGlobalFromStream(LPSTREAM a0,
                                            HGLOBAL* a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_GetHGlobalFromStream(a0, a1);
    } __finally {
        _Print("GetHGlobalFromStream(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetHandleInformation(HANDLE a0,
                                         LPDWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetHandleInformation(a0, a1);
    } __finally {
        _Print("GetHandleInformation(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetICMProfileA(HDC a0,
                                   LPDWORD a1,
                                   LPSTR a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetICMProfileA(a0, a1, a2);
    } __finally {
        _Print("GetICMProfileA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetICMProfileW(HDC a0,
                                   LPDWORD a1,
                                   LPWSTR a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetICMProfileW(a0, a1, a2);
    } __finally {
        _Print("GetICMProfileW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetIconInfo(HICON a0,
                                PICONINFO a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetIconInfo(a0, a1);
    } __finally {
        _Print("GetIconInfo(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetInputState(void)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetInputState();
    } __finally {
        _Print("GetInputState() -> %p", rv);
    };
    return rv;
}

UINT __stdcall Mine_GetKBCodePage(void)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetKBCodePage();
    } __finally {
        _Print("GetKBCodePage() -> %p", rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetKerningPairsA(HDC a0,
                                      DWORD a1,
                                      KERNINGPAIR* a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetKerningPairsA(a0, a1, a2);
    } __finally {
        _Print("GetKerningPairsA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetKerningPairsW(HDC a0,
                                      DWORD a1,
                                      KERNINGPAIR* a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetKerningPairsW(a0, a1, a2);
    } __finally {
        _Print("GetKerningPairsW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_GetKeyNameTextA(LONG a0,
                                   LPSTR a1,
                                   int a2)
{
    
    int rv = 0;
    __try {
        rv = Real_GetKeyNameTextA(a0, a1, a2);
    } __finally {
        _Print("GetKeyNameTextA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_GetKeyNameTextW(LONG a0,
                                   LPWSTR a1,
                                   int a2)
{
    
    int rv = 0;
    __try {
        rv = Real_GetKeyNameTextW(a0, a1, a2);
    } __finally {
        _Print("GetKeyNameTextW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

SHORT __stdcall Mine_GetKeyState(int a0)
{
    
    SHORT rv = 0;
    __try {
        rv = Real_GetKeyState(a0);
    } __finally {
        _Print("GetKeyState(%p) -> %p", a0, rv);
    };
    return rv;
}

HKL __stdcall Mine_GetKeyboardLayout(DWORD a0)
{
    
    HKL rv = 0;
    __try {
        rv = Real_GetKeyboardLayout(a0);
    } __finally {
        _Print("GetKeyboardLayout(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_GetKeyboardLayoutList(int a0,
                                         HKL* a1)
{
    
    int rv = 0;
    __try {
        rv = Real_GetKeyboardLayoutList(a0, a1);
    } __finally {
        _Print("GetKeyboardLayoutList(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetKeyboardLayoutNameA(LPSTR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetKeyboardLayoutNameA(a0);
    } __finally {
        _Print("GetKeyboardLayoutNameA(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetKeyboardLayoutNameW(LPWSTR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetKeyboardLayoutNameW(a0);
    } __finally {
        _Print("GetKeyboardLayoutNameW(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetKeyboardState(PBYTE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetKeyboardState(a0);
    } __finally {
        _Print("GetKeyboardState(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_GetKeyboardType(int a0)
{
    
    int rv = 0;
    __try {
        rv = Real_GetKeyboardType(a0);
    } __finally {
        _Print("GetKeyboardType(%p) -> %p", a0, rv);
    };
    return rv;
}

HWND __stdcall Mine_GetLastActivePopup(HWND a0)
{
    
    HWND rv = 0;
    __try {
        rv = Real_GetLastActivePopup(a0);
    } __finally {
        _Print("GetLastActivePopup(%p) -> %p", a0, rv);
    };
    return rv;
}

void __stdcall Mine_GetLocalTime(LPSYSTEMTIME a0)
{
    
    __try {
        Real_GetLocalTime(a0);
    } __finally {
        _Print("GetLocalTime(%p) ->", a0);
    };
}

int __stdcall Mine_GetLocaleInfoA(LCID a0,
                                  LCTYPE a1,
                                  LPSTR a2,
                                  int a3)
{
    
    int rv = 0;
    __try {
        rv = Real_GetLocaleInfoA(a0, a1, a2, a3);
    } __finally {
        _Print("GetLocaleInfoA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

int __stdcall Mine_GetLocaleInfoW(LCID a0,
                                  LCTYPE a1,
                                  LPWSTR a2,
                                  int a3)
{
    
    int rv = 0;
    __try {
        rv = Real_GetLocaleInfoW(a0, a1, a2, a3);
    } __finally {
        _Print("GetLocaleInfoW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetLogColorSpaceA(HCOLORSPACE a0,
                                      LOGCOLORSPACEA* a1,
                                      DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetLogColorSpaceA(a0, a1, a2);
    } __finally {
        _Print("GetLogColorSpaceA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetLogColorSpaceW(HCOLORSPACE a0,
                                      LOGCOLORSPACEW* a1,
                                      DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetLogColorSpaceW(a0, a1, a2);
    } __finally {
        _Print("GetLogColorSpaceW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetLogicalDriveStringsA(DWORD a0,
                                             LPSTR a1)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetLogicalDriveStringsA(a0, a1);
    } __finally {
        _Print("GetLogicalDriveStringsA(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetLogicalDriveStringsW(DWORD a0,
                                             LPWSTR a1)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetLogicalDriveStringsW(a0, a1);
    } __finally {
        _Print("GetLogicalDriveStringsW(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetLogicalDrives(void)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetLogicalDrives();
    } __finally {
        _Print("GetLogicalDrives() -> %p", rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetMailslotInfo(HANDLE a0,
                                    LPDWORD a1,
                                    LPDWORD a2,
                                    LPDWORD a3,
                                    LPDWORD a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetMailslotInfo(a0, a1, a2, a3, a4);
    } __finally {
        _Print("GetMailslotInfo(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_GetMapMode(HDC a0)
{
    
    int rv = 0;
    __try {
        rv = Real_GetMapMode(a0);
    } __finally {
        _Print("GetMapMode(%p) -> %p", a0, rv);
    };
    return rv;
}

HMENU __stdcall Mine_GetMenu(HWND a0)
{
    
    HMENU rv = 0;
    __try {
        rv = Real_GetMenu(a0);
    } __finally {
        _Print("GetMenu(%p) -> %p", a0, rv);
    };
    return rv;
}

LONG __stdcall Mine_GetMenuCheckMarkDimensions(void)
{
    
    LONG rv = 0;
    __try {
        rv = Real_GetMenuCheckMarkDimensions();
    } __finally {
        _Print("GetMenuCheckMarkDimensions() -> %p", rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetMenuContextHelpId(HMENU a0)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetMenuContextHelpId(a0);
    } __finally {
        _Print("GetMenuContextHelpId(%p) -> %p", a0, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetMenuDefaultItem(HMENU a0,
                                       UINT a1,
                                       UINT a2)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetMenuDefaultItem(a0, a1, a2);
    } __finally {
        _Print("GetMenuDefaultItem(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_GetMenuItemCount(HMENU a0)
{
    
    int rv = 0;
    __try {
        rv = Real_GetMenuItemCount(a0);
    } __finally {
        _Print("GetMenuItemCount(%p) -> %p", a0, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetMenuItemID(HMENU a0,
                                  int a1)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetMenuItemID(a0, a1);
    } __finally {
        _Print("GetMenuItemID(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetMenuItemInfoA(HMENU a0,
                                     UINT a1,
                                     BOOL a2,
                                     LPMENUITEMINFOA a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetMenuItemInfoA(a0, a1, a2, a3);
    } __finally {
        _Print("GetMenuItemInfoA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetMenuItemInfoW(HMENU a0,
                                     UINT a1,
                                     BOOL a2,
                                     LPMENUITEMINFOW a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetMenuItemInfoW(a0, a1, a2, a3);
    } __finally {
        _Print("GetMenuItemInfoW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetMenuItemRect(HWND a0,
                                    HMENU a1,
                                    UINT a2,
                                    LPRECT a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetMenuItemRect(a0, a1, a2, a3);
    } __finally {
        _Print("GetMenuItemRect(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetMenuState(HMENU a0,
                                 UINT a1,
                                 UINT a2)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetMenuState(a0, a1, a2);
    } __finally {
        _Print("GetMenuState(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_GetMenuStringA(HMENU a0,
                                  UINT a1,
                                  LPSTR a2,
                                  int a3,
                                  UINT a4)
{
    
    int rv = 0;
    __try {
        rv = Real_GetMenuStringA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("GetMenuStringA(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_GetMenuStringW(HMENU a0,
                                  UINT a1,
                                  LPWSTR a2,
                                  int a3,
                                  UINT a4)
{
    
    int rv = 0;
    __try {
        rv = Real_GetMenuStringW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("GetMenuStringW(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetMessageA(LPMSG a0,
                                HWND a1,
                                UINT a2,
                                UINT a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetMessageA(a0, a1, a2, a3);
    } __finally {
        _Print("GetMessageA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

LPARAM __stdcall Mine_GetMessageExtraInfo(void)
{
    
    LPARAM rv = 0;
    __try {
        rv = Real_GetMessageExtraInfo();
    } __finally {
        _Print("GetMessageExtraInfo() -> %p", rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetMessagePos(void)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetMessagePos();
    } __finally {
        _Print("GetMessagePos() -> %p", rv);
    };
    return rv;
}

LONG __stdcall Mine_GetMessageTime(void)
{
    
    LONG rv = 0;
    __try {
        rv = Real_GetMessageTime();
    } __finally {
        _Print("GetMessageTime() -> %p", rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetMessageW(LPMSG a0,
                                HWND a1,
                                UINT a2,
                                UINT a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetMessageW(a0, a1, a2, a3);
    } __finally {
        _Print("GetMessageW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HMETAFILE __stdcall Mine_GetMetaFileA(LPCSTR a0)
{
    
    HMETAFILE rv = 0;
    __try {
        rv = Real_GetMetaFileA(a0);
    } __finally {
        _Print("GetMetaFileA(%hs) -> %p", a0, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetMetaFileBitsEx(HMETAFILE a0,
                                      UINT a1,
                                      LPVOID a2)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetMetaFileBitsEx(a0, a1, a2);
    } __finally {
        _Print("GetMetaFileBitsEx(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HMETAFILE __stdcall Mine_GetMetaFileW(LPCWSTR a0)
{
    
    HMETAFILE rv = 0;
    __try {
        rv = Real_GetMetaFileW(a0);
    } __finally {
        _Print("GetMetaFileW(%ls) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_GetMetaRgn(HDC a0,
                              HRGN a1)
{
    
    int rv = 0;
    __try {
        rv = Real_GetMetaRgn(a0, a1);
    } __finally {
        _Print("GetMetaRgn(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetMiterLimit(HDC a0,
                                  PFLOAT a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetMiterLimit(a0, a1);
    } __finally {
        _Print("GetMiterLimit(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetModuleFileNameA(HMODULE a0,
                                        LPSTR a1,
                                        DWORD a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetModuleFileNameA(a0, a1, a2);
    } __finally {
        _Print("GetModuleFileNameA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetModuleFileNameW(HMODULE a0,
                                        LPWSTR a1,
                                        DWORD a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetModuleFileNameW(a0, a1, a2);
    } __finally {
        _Print("GetModuleFileNameW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HMODULE __stdcall Mine_GetModuleHandleA(LPCSTR a0)
{
    
    HMODULE rv = 0;
    __try {
        rv = Real_GetModuleHandleA(a0);
    } __finally {
        _Print("GetModuleHandleA(%hs) -> %p", a0, rv);
    };
    return rv;
}

HMODULE __stdcall Mine_GetModuleHandleW(LPCWSTR a0)
{
    
    HMODULE rv = 0;
    __try {
        rv = Real_GetModuleHandleW(a0);
    } __finally {
        _Print("GetModuleHandleW(%ls) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetNamedPipeHandleStateA(HANDLE a0,
                                             LPDWORD a1,
                                             LPDWORD a2,
                                             LPDWORD a3,
                                             LPDWORD a4,
                                             LPSTR a5,
                                             DWORD a6)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetNamedPipeHandleStateA(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("GetNamedPipeHandleStateA(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetNamedPipeHandleStateW(HANDLE a0,
                                             LPDWORD a1,
                                             LPDWORD a2,
                                             LPDWORD a3,
                                             LPDWORD a4,
                                             LPWSTR a5,
                                             DWORD a6)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetNamedPipeHandleStateW(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("GetNamedPipeHandleStateW(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetNamedPipeInfo(HANDLE a0,
                                     LPDWORD a1,
                                     LPDWORD a2,
                                     LPDWORD a3,
                                     LPDWORD a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetNamedPipeInfo(a0, a1, a2, a3, a4);
    } __finally {
        _Print("GetNamedPipeInfo(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

COLORREF __stdcall Mine_GetNearestColor(HDC a0,
                                        COLORREF a1)
{
    
    COLORREF rv = 0;
    __try {
        rv = Real_GetNearestColor(a0, a1);
    } __finally {
        _Print("GetNearestColor(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetNearestPaletteIndex(HPALETTE a0,
                                           COLORREF a1)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetNearestPaletteIndex(a0, a1);
    } __finally {
        _Print("GetNearestPaletteIndex(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HWND __stdcall Mine_GetNextDlgGroupItem(HWND a0,
                                        HWND a1,
                                        BOOL a2)
{
    
    HWND rv = 0;
    __try {
        rv = Real_GetNextDlgGroupItem(a0, a1, a2);
    } __finally {
        _Print("GetNextDlgGroupItem(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HWND __stdcall Mine_GetNextDlgTabItem(HWND a0,
                                      HWND a1,
                                      BOOL a2)
{
    
    HWND rv = 0;
    __try {
        rv = Real_GetNextDlgTabItem(a0, a1, a2);
    } __finally {
        _Print("GetNextDlgTabItem(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_GetNumberFormatA(LCID a0,
                                    DWORD a1,
                                    LPCSTR a2,
                                    NUMBERFMTA* a3,
                                    LPSTR a4,
                                    int a5)
{
    
    int rv = 0;
    __try {
        rv = Real_GetNumberFormatA(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("GetNumberFormatA(%p,%p,%hs,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

int __stdcall Mine_GetNumberFormatW(LCID a0,
                                    DWORD a1,
                                    LPCWSTR a2,
                                    NUMBERFMTW* a3,
                                    LPWSTR a4,
                                    int a5)
{
    
    int rv = 0;
    __try {
        rv = Real_GetNumberFormatW(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("GetNumberFormatW(%p,%p,%ls,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetNumberOfConsoleInputEvents(HANDLE a0,
                                                  LPDWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetNumberOfConsoleInputEvents(a0, a1);
    } __finally {
        _Print("GetNumberOfConsoleInputEvents(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetNumberOfConsoleMouseButtons(LPDWORD a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetNumberOfConsoleMouseButtons(a0);
    } __finally {
        _Print("GetNumberOfConsoleMouseButtons(%p) -> %p", a0, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetOEMCP(void)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetOEMCP();
    } __finally {
        _Print("GetOEMCP() -> %p", rv);
    };
    return rv;
}

int __stdcall Mine_GetObjectA(HGDIOBJ a0,
                              int a1,
                              LPVOID a2)
{
    
    int rv = 0;
    __try {
        rv = Real_GetObjectA(a0, a1, a2);
    } __finally {
        _Print("GetObjectA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetObjectType(HGDIOBJ a0)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetObjectType(a0);
    } __finally {
        _Print("GetObjectType(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_GetObjectW(HGDIOBJ a0,
                              int a1,
                              LPVOID a2)
{
    
    int rv = 0;
    __try {
        rv = Real_GetObjectW(a0, a1, a2);
    } __finally {
        _Print("GetObjectW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HWND __stdcall Mine_GetOpenClipboardWindow(void)
{
    
    HWND rv = 0;
    __try {
        rv = Real_GetOpenClipboardWindow();
    } __finally {
        _Print("GetOpenClipboardWindow() -> %p", rv);
    };
    return rv;
}

UINT __stdcall Mine_GetOutlineTextMetricsA(HDC a0,
                                           UINT a1,
                                           LPOUTLINETEXTMETRICA a2)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetOutlineTextMetricsA(a0, a1, a2);
    } __finally {
        _Print("GetOutlineTextMetricsA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetOutlineTextMetricsW(HDC a0,
                                           UINT a1,
                                           LPOUTLINETEXTMETRICW a2)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetOutlineTextMetricsW(a0, a1, a2);
    } __finally {
        _Print("GetOutlineTextMetricsW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetOverlappedResult(HANDLE a0,
                                        LPOVERLAPPED a1,
                                        LPDWORD a2,
                                        BOOL a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetOverlappedResult(a0, a1, a2, a3);
    } __finally {
        _Print("GetOverlappedResult(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetPaletteEntries(HPALETTE a0,
                                      UINT a1,
                                      UINT a2,
                                      PALETTEENTRY* a3)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetPaletteEntries(a0, a1, a2, a3);
    } __finally {
        _Print("GetPaletteEntries(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HWND __stdcall Mine_GetParent(HWND a0)
{
    
    HWND rv = 0;
    __try {
        rv = Real_GetParent(a0);
    } __finally {
        _Print("GetParent(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_GetPath(HDC a0,
                           POINT* a1,
                           LPBYTE a2,
                           int a3)
{
    
    int rv = 0;
    __try {
        rv = Real_GetPath(a0, a1, a2, a3);
    } __finally {
        _Print("GetPath(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

COLORREF __stdcall Mine_GetPixel(HDC a0,
                                 int a1,
                                 int a2)
{
    
    COLORREF rv = 0;
    __try {
        rv = Real_GetPixel(a0, a1, a2);
    } __finally {
        _Print("GetPixel(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_GetPixelFormat(HDC a0)
{
    
    int rv = 0;
    __try {
        rv = Real_GetPixelFormat(a0);
    } __finally {
        _Print("GetPixelFormat(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_GetPolyFillMode(HDC a0)
{
    
    int rv = 0;
    __try {
        rv = Real_GetPolyFillMode(a0);
    } __finally {
        _Print("GetPolyFillMode(%p) -> %p", a0, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetPriorityClass(HANDLE a0)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetPriorityClass(a0);
    } __finally {
        _Print("GetPriorityClass(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_GetPriorityClipboardFormat(UINT* a0,
                                              int a1)
{
    
    int rv = 0;
    __try {
        rv = Real_GetPriorityClipboardFormat(a0, a1);
    } __finally {
        _Print("GetPriorityClipboardFormat(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetPrivateProfileIntA(LPCSTR a0,
                                          LPCSTR a1,
                                          INT a2,
                                          LPCSTR a3)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetPrivateProfileIntA(a0, a1, a2, a3);
    } __finally {
        _Print("GetPrivateProfileIntA(%hs,%hs,%p,%hs) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetPrivateProfileIntW(LPCWSTR a0,
                                          LPCWSTR a1,
                                          INT a2,
                                          LPCWSTR a3)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetPrivateProfileIntW(a0, a1, a2, a3);
    } __finally {
        _Print("GetPrivateProfileIntW(%ls,%ls,%p,%ls) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetPrivateProfileSectionA(LPCSTR a0,
                                               LPSTR a1,
                                               DWORD a2,
                                               LPCSTR a3)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetPrivateProfileSectionA(a0, a1, a2, a3);
    } __finally {
        _Print("GetPrivateProfileSectionA(%hs,%p,%p,%hs) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetPrivateProfileSectionNamesA(LPSTR a0,
                                                    DWORD a1,
                                                    LPCSTR a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetPrivateProfileSectionNamesA(a0, a1, a2);
    } __finally {
        _Print("GetPrivateProfileSectionNamesA(%p,%p,%hs) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetPrivateProfileSectionNamesW(LPWSTR a0,
                                                    DWORD a1,
                                                    LPCWSTR a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetPrivateProfileSectionNamesW(a0, a1, a2);
    } __finally {
        _Print("GetPrivateProfileSectionNamesW(%p,%p,%ls) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetPrivateProfileSectionW(LPCWSTR a0,
                                               LPWSTR a1,
                                               DWORD a2,
                                               LPCWSTR a3)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetPrivateProfileSectionW(a0, a1, a2, a3);
    } __finally {
        _Print("GetPrivateProfileSectionW(%ls,%p,%p,%ls) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetPrivateProfileStringA(LPCSTR a0,
                                              LPCSTR a1,
                                              LPCSTR a2,
                                              LPSTR a3,
                                              DWORD a4,
                                              LPCSTR a5)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetPrivateProfileStringA(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("GetPrivateProfileStringA(%hs,%hs,%hs,%p,%p,%hs) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetPrivateProfileStringW(LPCWSTR a0,
                                              LPCWSTR a1,
                                              LPCWSTR a2,
                                              LPWSTR a3,
                                              DWORD a4,
                                              LPCWSTR a5)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetPrivateProfileStringW(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("GetPrivateProfileStringW(%ls,%ls,%ls,%p,%p,%ls) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetPrivateProfileStructA(LPCSTR a0,
                                             LPCSTR a1,
                                             LPVOID a2,
                                             UINT a3,
                                             LPCSTR a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetPrivateProfileStructA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("GetPrivateProfileStructA(%hs,%hs,%p,%p,%hs) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetPrivateProfileStructW(LPCWSTR a0,
                                             LPCWSTR a1,
                                             LPVOID a2,
                                             UINT a3,
                                             LPCWSTR a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetPrivateProfileStructW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("GetPrivateProfileStructW(%ls,%ls,%p,%p,%ls) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

FARPROC __stdcall Mine_GetProcAddress(HMODULE a0,
                                      LPCSTR a1)
{
    
    FARPROC rv = 0;
    __try {
        rv = Real_GetProcAddress(a0, a1);
    } __finally {
        _Print("GetProcAddress(%p,%hs) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetProcessAffinityMask(HANDLE a0,
                                           PDWORD_PTR a1,
                                           PDWORD_PTR a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetProcessAffinityMask(a0, a1, a2);
    } __finally {
        _Print("GetProcessAffinityMask(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetProcessHeaps(DWORD a0,
                                     PHANDLE a1)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetProcessHeaps(a0, a1);
    } __finally {
        _Print("GetProcessHeaps(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetProcessShutdownParameters(LPDWORD a0,
                                                 LPDWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetProcessShutdownParameters(a0, a1);
    } __finally {
        _Print("GetProcessShutdownParameters(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetProcessTimes(HANDLE a0,
                                    LPFILETIME a1,
                                    LPFILETIME a2,
                                    LPFILETIME a3,
                                    LPFILETIME a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetProcessTimes(a0, a1, a2, a3, a4);
    } __finally {
        _Print("GetProcessTimes(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetProcessVersion(DWORD a0)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetProcessVersion(a0);
    } __finally {
        _Print("GetProcessVersion(%p) -> %p", a0, rv);
    };
    return rv;
}

HWINSTA __stdcall Mine_GetProcessWindowStation(void)
{
    
    HWINSTA rv = 0;
    __try {
        rv = Real_GetProcessWindowStation();
    } __finally {
        _Print("GetProcessWindowStation() -> %p", rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetProcessWorkingSetSize(HANDLE a0,
                                             PSIZE_T a1,
                                             PSIZE_T a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetProcessWorkingSetSize(a0, a1, a2);
    } __finally {
        _Print("GetProcessWorkingSetSize(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetProfileIntA(LPCSTR a0,
                                   LPCSTR a1,
                                   INT a2)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetProfileIntA(a0, a1, a2);
    } __finally {
        _Print("GetProfileIntA(%hs,%hs,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetProfileIntW(LPCWSTR a0,
                                   LPCWSTR a1,
                                   INT a2)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetProfileIntW(a0, a1, a2);
    } __finally {
        _Print("GetProfileIntW(%ls,%ls,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetProfileSectionA(LPCSTR a0,
                                        LPSTR a1,
                                        DWORD a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetProfileSectionA(a0, a1, a2);
    } __finally {
        _Print("GetProfileSectionA(%hs,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetProfileSectionW(LPCWSTR a0,
                                        LPWSTR a1,
                                        DWORD a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetProfileSectionW(a0, a1, a2);
    } __finally {
        _Print("GetProfileSectionW(%ls,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetProfileStringA(LPCSTR a0,
                                       LPCSTR a1,
                                       LPCSTR a2,
                                       LPSTR a3,
                                       DWORD a4)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetProfileStringA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("GetProfileStringA(%hs,%hs,%hs,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetProfileStringW(LPCWSTR a0,
                                       LPCWSTR a1,
                                       LPCWSTR a2,
                                       LPWSTR a3,
                                       DWORD a4)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetProfileStringW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("GetProfileStringW(%ls,%ls,%ls,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_GetPropA(HWND a0,
                               LPCSTR a1)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_GetPropA(a0, a1);
    } __finally {
        _Print("GetPropA(%p,%hs) -> %p", a0, a1, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_GetPropW(HWND a0,
                               LPCWSTR a1)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_GetPropW(a0, a1);
    } __finally {
        _Print("GetPropW(%p,%ls) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetQueueStatus(UINT a0)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetQueueStatus(a0);
    } __finally {
        _Print("GetQueueStatus(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetQueuedCompletionStatus(HANDLE a0,
                                              LPDWORD a1,
                                              PULONG_PTR a2,
                                              LPOVERLAPPED* a3,
                                              DWORD a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetQueuedCompletionStatus(a0, a1, a2, a3, a4);
    } __finally {
        _Print("GetQueuedCompletionStatus(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_GetROP2(HDC a0)
{
    
    int rv = 0;
    __try {
        rv = Real_GetROP2(a0);
    } __finally {
        _Print("GetROP2(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetRasterizerCaps(LPRASTERIZER_STATUS a0,
                                      UINT a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetRasterizerCaps(a0, a1);
    } __finally {
        _Print("GetRasterizerCaps(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetRegionData(HRGN a0,
                                   DWORD a1,
                                   LPRGNDATA a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetRegionData(a0, a1, a2);
    } __finally {
        _Print("GetRegionData(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_GetRgnBox(HRGN a0,
                             LPRECT a1)
{
    
    int rv = 0;
    __try {
        rv = Real_GetRgnBox(a0, a1);
    } __finally {
        _Print("GetRgnBox(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_GetRunningObjectTable(DWORD a0,
                                             LPRUNNINGOBJECTTABLE* a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_GetRunningObjectTable(a0, a1);
    } __finally {
        _Print("GetRunningObjectTable(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetScrollInfo(HWND a0,
                                  int a1,
                                  LPSCROLLINFO a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetScrollInfo(a0, a1, a2);
    } __finally {
        _Print("GetScrollInfo(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_GetScrollPos(HWND a0,
                                int a1)
{
    
    int rv = 0;
    __try {
        rv = Real_GetScrollPos(a0, a1);
    } __finally {
        _Print("GetScrollPos(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetScrollRange(HWND a0,
                                   int a1,
                                   LPINT a2,
                                   LPINT a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetScrollRange(a0, a1, a2, a3);
    } __finally {
        _Print("GetScrollRange(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetShortPathNameA(LPCSTR a0,
                                       LPSTR a1,
                                       DWORD a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetShortPathNameA(a0, a1, a2);
    } __finally {
        _Print("GetShortPathNameA(%hs,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetShortPathNameW(LPCWSTR a0,
                                       LPWSTR a1,
                                       DWORD a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetShortPathNameW(a0, a1, a2);
    } __finally {
        _Print("GetShortPathNameW(%ls,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

void __stdcall Mine_GetStartupInfoA(LPSTARTUPINFOA a0)
{
    
    __try {
        Real_GetStartupInfoA(a0);
    } __finally {
        _Print("GetStartupInfoA(%p) ->", a0);
    };
}

void __stdcall Mine_GetStartupInfoW(LPSTARTUPINFOW a0)
{
    
    __try {
        Real_GetStartupInfoW(a0);
    } __finally {
        _Print("GetStartupInfoW(%p) ->", a0);
    };
}

HANDLE __stdcall Mine_GetStdHandle(DWORD a0)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_GetStdHandle(a0);
    } __finally {
        _Print("GetStdHandle(%p) -> %p", a0, rv);
    };
    return rv;
}

HGDIOBJ __stdcall Mine_GetStockObject(int a0)
{
    
    HGDIOBJ rv = 0;
    __try {
        rv = Real_GetStockObject(a0);
    } __finally {
        _Print("GetStockObject(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_GetStretchBltMode(HDC a0)
{
    
    int rv = 0;
    __try {
        rv = Real_GetStretchBltMode(a0);
    } __finally {
        _Print("GetStretchBltMode(%p) -> %p", a0, rv);
    };
    return rv;
}

HMENU __stdcall Mine_GetSubMenu(HMENU a0,
                                int a1)
{
    
    HMENU rv = 0;
    __try {
        rv = Real_GetSubMenu(a0, a1);
    } __finally {
        _Print("GetSubMenu(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetSysColor(int a0)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetSysColor(a0);
    } __finally {
        _Print("GetSysColor(%p) -> %p", a0, rv);
    };
    return rv;
}

HBRUSH __stdcall Mine_GetSysColorBrush(int a0)
{
    
    HBRUSH rv = 0;
    __try {
        rv = Real_GetSysColorBrush(a0);
    } __finally {
        _Print("GetSysColorBrush(%p) -> %p", a0, rv);
    };
    return rv;
}

LCID __stdcall Mine_GetSystemDefaultLCID(void)
{
    
    LCID rv = 0;
    __try {
        rv = Real_GetSystemDefaultLCID();
    } __finally {
        _Print("GetSystemDefaultLCID() -> %p", rv);
    };
    return rv;
}

LANGID __stdcall Mine_GetSystemDefaultLangID(void)
{
    
    LANGID rv = 0;
    __try {
        rv = Real_GetSystemDefaultLangID();
    } __finally {
        _Print("GetSystemDefaultLangID() -> %p", rv);
    };
    return rv;
}

UINT __stdcall Mine_GetSystemDirectoryA(LPSTR a0,
                                        UINT a1)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetSystemDirectoryA(a0, a1);
    } __finally {
        _Print("GetSystemDirectoryA(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetSystemDirectoryW(LPWSTR a0,
                                        UINT a1)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetSystemDirectoryW(a0, a1);
    } __finally {
        _Print("GetSystemDirectoryW(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

void __stdcall Mine_GetSystemInfo(LPSYSTEM_INFO a0)
{
    
    __try {
        Real_GetSystemInfo(a0);
    } __finally {
        _Print("GetSystemInfo(%p) ->", a0);
    };
}

HMENU __stdcall Mine_GetSystemMenu(HWND a0,
                                   BOOL a1)
{
    
    HMENU rv = 0;
    __try {
        rv = Real_GetSystemMenu(a0, a1);
    } __finally {
        _Print("GetSystemMenu(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_GetSystemMetrics(int a0)
{
    
    int rv = 0;
    __try {
        rv = Real_GetSystemMetrics(a0);
    } __finally {
        _Print("GetSystemMetrics(%p) -> %p", a0, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetSystemPaletteEntries(HDC a0,
                                            UINT a1,
                                            UINT a2,
                                            PALETTEENTRY* a3)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetSystemPaletteEntries(a0, a1, a2, a3);
    } __finally {
        _Print("GetSystemPaletteEntries(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetSystemPaletteUse(HDC a0)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetSystemPaletteUse(a0);
    } __finally {
        _Print("GetSystemPaletteUse(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetSystemPowerStatus(LPSYSTEM_POWER_STATUS a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetSystemPowerStatus(a0);
    } __finally {
        _Print("GetSystemPowerStatus(%p) -> %p", a0, rv);
    };
    return rv;
}

void __stdcall Mine_GetSystemTime(LPSYSTEMTIME a0)
{
    
    __try {
        Real_GetSystemTime(a0);
    } __finally {
        _Print("GetSystemTime(%p) ->", a0);
    };
}

BOOL __stdcall Mine_GetSystemTimeAdjustment(PDWORD a0,
                                            PDWORD a1,
                                            PBOOL a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetSystemTimeAdjustment(a0, a1, a2);
    } __finally {
        _Print("GetSystemTimeAdjustment(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

void __stdcall Mine_GetSystemTimeAsFileTime(LPFILETIME a0)
{
    
    __try {
        Real_GetSystemTimeAsFileTime(a0);
    } __finally {
        _Print("GetSystemTimeAsFileTime(%p) ->", a0);
    };
}

DWORD __stdcall Mine_GetTabbedTextExtentA(HDC a0,
                                          LPCSTR a1,
                                          int a2,
                                          int a3,
                                          INT* a4)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetTabbedTextExtentA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("GetTabbedTextExtentA(%p,%hs,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetTabbedTextExtentW(HDC a0,
                                          LPCWSTR a1,
                                          int a2,
                                          int a3,
                                          INT* a4)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetTabbedTextExtentW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("GetTabbedTextExtentW(%p,%ls,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetTapeParameters(HANDLE a0,
                                       DWORD a1,
                                       LPDWORD a2,
                                       LPVOID a3)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetTapeParameters(a0, a1, a2, a3);
    } __finally {
        _Print("GetTapeParameters(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetTapePosition(HANDLE a0,
                                     DWORD a1,
                                     LPDWORD a2,
                                     LPDWORD a3,
                                     LPDWORD a4)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetTapePosition(a0, a1, a2, a3, a4);
    } __finally {
        _Print("GetTapePosition(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetTapeStatus(HANDLE a0)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetTapeStatus(a0);
    } __finally {
        _Print("GetTapeStatus(%p) -> %p", a0, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetTempFileNameA(LPCSTR a0,
                                     LPCSTR a1,
                                     UINT a2,
                                     LPSTR a3)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetTempFileNameA(a0, a1, a2, a3);
    } __finally {
        _Print("GetTempFileNameA(%hs,%hs,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetTempFileNameW(LPCWSTR a0,
                                     LPCWSTR a1,
                                     UINT a2,
                                     LPWSTR a3)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetTempFileNameW(a0, a1, a2, a3);
    } __finally {
        _Print("GetTempFileNameW(%ls,%ls,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetTempPathA(DWORD a0,
                                  LPSTR a1)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetTempPathA(a0, a1);
    } __finally {
        _Print("GetTempPathA(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetTempPathW(DWORD a0,
                                  LPWSTR a1)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetTempPathW(a0, a1);
    } __finally {
        _Print("GetTempPathW(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetTextAlign(HDC a0)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetTextAlign(a0);
    } __finally {
        _Print("GetTextAlign(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_GetTextCharacterExtra(HDC a0)
{
    
    int rv = 0;
    __try {
        rv = Real_GetTextCharacterExtra(a0);
    } __finally {
        _Print("GetTextCharacterExtra(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_GetTextCharset(HDC a0)
{
    
    int rv = 0;
    __try {
        rv = Real_GetTextCharset(a0);
    } __finally {
        _Print("GetTextCharset(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_GetTextCharsetInfo(HDC a0,
                                      LPFONTSIGNATURE a1,
                                      DWORD a2)
{
    
    int rv = 0;
    __try {
        rv = Real_GetTextCharsetInfo(a0, a1, a2);
    } __finally {
        _Print("GetTextCharsetInfo(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

COLORREF __stdcall Mine_GetTextColor(HDC a0)
{
    
    COLORREF rv = 0;
    __try {
        rv = Real_GetTextColor(a0);
    } __finally {
        _Print("GetTextColor(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetTextExtentExPointA(HDC a0,
                                          LPCSTR a1,
                                          int a2,
                                          int a3,
                                          LPINT a4,
                                          LPINT a5,
                                          SIZE* a6)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetTextExtentExPointA(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("GetTextExtentExPointA(%p,%hs,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetTextExtentExPointW(HDC a0,
                                          LPCWSTR a1,
                                          int a2,
                                          int a3,
                                          LPINT a4,
                                          LPINT a5,
                                          SIZE* a6)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetTextExtentExPointW(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("GetTextExtentExPointW(%p,%ls,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetTextExtentPoint32A(HDC a0,
                                          LPCSTR a1,
                                          int a2,
                                          SIZE* a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetTextExtentPoint32A(a0, a1, a2, a3);
    } __finally {
        _Print("GetTextExtentPoint32A(%p,%hs,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetTextExtentPoint32W(HDC a0,
                                          LPCWSTR a1,
                                          int a2,
                                          SIZE* a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetTextExtentPoint32W(a0, a1, a2, a3);
    } __finally {
        _Print("GetTextExtentPoint32W(%p,%ls,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetTextExtentPointA(HDC a0,
                                        LPCSTR a1,
                                        int a2,
                                        SIZE* a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetTextExtentPointA(a0, a1, a2, a3);
    } __finally {
        _Print("GetTextExtentPointA(%p,%hs,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetTextExtentPointW(HDC a0,
                                        LPCWSTR a1,
                                        int a2,
                                        SIZE* a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetTextExtentPointW(a0, a1, a2, a3);
    } __finally {
        _Print("GetTextExtentPointW(%p,%ls,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

int __stdcall Mine_GetTextFaceA(HDC a0,
                                int a1,
                                LPSTR a2)
{
    
    int rv = 0;
    __try {
        rv = Real_GetTextFaceA(a0, a1, a2);
    } __finally {
        _Print("GetTextFaceA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_GetTextFaceW(HDC a0,
                                int a1,
                                LPWSTR a2)
{
    
    int rv = 0;
    __try {
        rv = Real_GetTextFaceW(a0, a1, a2);
    } __finally {
        _Print("GetTextFaceW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetTextMetricsA(HDC a0,
                                    LPTEXTMETRICA a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetTextMetricsA(a0, a1);
    } __finally {
        _Print("GetTextMetricsA(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetTextMetricsW(HDC a0,
                                    LPTEXTMETRICW a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetTextMetricsW(a0, a1);
    } __finally {
        _Print("GetTextMetricsW(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetThreadContext(HANDLE a0,
                                     LPCONTEXT a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetThreadContext(a0, a1);
    } __finally {
        _Print("GetThreadContext(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HDESK __stdcall Mine_GetThreadDesktop(DWORD a0)
{
    
    HDESK rv = 0;
    __try {
        rv = Real_GetThreadDesktop(a0);
    } __finally {
        _Print("GetThreadDesktop(%p) -> %p", a0, rv);
    };
    return rv;
}

#if(WINVER >= 0x0500)
LCID __stdcall Mine_GetThreadLocale(void)
{
    
    LCID rv = 0;
    __try {
        rv = Real_GetThreadLocale();
    } __finally {
        _Print("GetThreadLocale() -> %p", rv);
    };
    return rv;
}
#endif // (WINVER >= 0x0500)

int __stdcall Mine_GetThreadPriority(HANDLE a0)
{
    
    int rv = 0;
    __try {
        rv = Real_GetThreadPriority(a0);
    } __finally {
        _Print("GetThreadPriority(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetThreadPriorityBoost(HANDLE a0,
                                           PBOOL a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetThreadPriorityBoost(a0, a1);
    } __finally {
        _Print("GetThreadPriorityBoost(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetThreadSelectorEntry(HANDLE a0,
                                           DWORD a1,
                                           LPLDT_ENTRY a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetThreadSelectorEntry(a0, a1, a2);
    } __finally {
        _Print("GetThreadSelectorEntry(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetThreadTimes(HANDLE a0,
                                   LPFILETIME a1,
                                   LPFILETIME a2,
                                   LPFILETIME a3,
                                   LPFILETIME a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetThreadTimes(a0, a1, a2, a3, a4);
    } __finally {
        _Print("GetThreadTimes(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetTickCount(void)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetTickCount();
    } __finally {
        _Print("GetTickCount() -> %p", rv);
    };
    return rv;
}

int __stdcall Mine_GetTimeFormatA(LCID a0,
                                  DWORD a1,
                                  SYSTEMTIME* a2,
                                  LPCSTR a3,
                                  LPSTR a4,
                                  int a5)
{
    
    int rv = 0;
    __try {
        rv = Real_GetTimeFormatA(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("GetTimeFormatA(%p,%p,%p,%hs,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

int __stdcall Mine_GetTimeFormatW(LCID a0,
                                  DWORD a1,
                                  SYSTEMTIME* a2,
                                  LPCWSTR a3,
                                  LPWSTR a4,
                                  int a5)
{
    
    int rv = 0;
    __try {
        rv = Real_GetTimeFormatW(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("GetTimeFormatW(%p,%p,%p,%ls,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetTimeZoneInformation(LPTIME_ZONE_INFORMATION a0)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetTimeZoneInformation(a0);
    } __finally {
        _Print("GetTimeZoneInformation(%p) -> %p", a0, rv);
    };
    return rv;
}

HWND __stdcall Mine_GetTopWindow(HWND a0)
{
    
    HWND rv = 0;
    __try {
        rv = Real_GetTopWindow(a0);
    } __finally {
        _Print("GetTopWindow(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetUpdateRect(HWND a0,
                                  LPRECT a1,
                                  BOOL a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetUpdateRect(a0, a1, a2);
    } __finally {
        _Print("GetUpdateRect(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_GetUpdateRgn(HWND a0,
                                HRGN a1,
                                BOOL a2)
{
    
    int rv = 0;
    __try {
        rv = Real_GetUpdateRgn(a0, a1, a2);
    } __finally {
        _Print("GetUpdateRgn(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

LCID __stdcall Mine_GetUserDefaultLCID(void)
{
    
    LCID rv = 0;
    __try {
        rv = Real_GetUserDefaultLCID();
    } __finally {
        _Print("GetUserDefaultLCID() -> %p", rv);
    };
    return rv;
}

LANGID __stdcall Mine_GetUserDefaultLangID(void)
{
    
    LANGID rv = 0;
    __try {
        rv = Real_GetUserDefaultLangID();
    } __finally {
        _Print("GetUserDefaultLangID() -> %p", rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetUserObjectInformationA(HANDLE a0,
                                              int a1,
                                              PVOID a2,
                                              DWORD a3,
                                              LPDWORD a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetUserObjectInformationA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("GetUserObjectInformationA(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetUserObjectInformationW(HANDLE a0,
                                              int a1,
                                              PVOID a2,
                                              DWORD a3,
                                              LPDWORD a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetUserObjectInformationW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("GetUserObjectInformationW(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetUserObjectSecurity(HANDLE a0,
                                          PSECURITY_INFORMATION a1,
                                          PSECURITY_DESCRIPTOR a2,
                                          DWORD a3,
                                          LPDWORD a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetUserObjectSecurity(a0, a1, a2, a3, a4);
    } __finally {
        _Print("GetUserObjectSecurity(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetVersion(void)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetVersion();
    } __finally {
        _Print("GetVersion() -> %p", rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetVersionExA(LPOSVERSIONINFOA a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetVersionExA(a0);
    } __finally {
        _Print("GetVersionExA(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetVersionExW(LPOSVERSIONINFOW a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetVersionExW(a0);
    } __finally {
        _Print("GetVersionExW(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetViewportExtEx(HDC a0,
                                     SIZE* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetViewportExtEx(a0, a1);
    } __finally {
        _Print("GetViewportExtEx(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetViewportOrgEx(HDC a0,
                                     POINT* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetViewportOrgEx(a0, a1);
    } __finally {
        _Print("GetViewportOrgEx(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetVolumeInformationA(LPCSTR a0,
                                          LPSTR a1,
                                          DWORD a2,
                                          LPDWORD a3,
                                          LPDWORD a4,
                                          LPDWORD a5,
                                          LPSTR a6,
                                          DWORD a7)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetVolumeInformationA(a0, a1, a2, a3, a4, a5, a6, a7);
    } __finally {
        _Print("GetVolumeInformationA(%hs,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetVolumeInformationW(LPCWSTR a0,
                                          LPWSTR a1,
                                          DWORD a2,
                                          LPDWORD a3,
                                          LPDWORD a4,
                                          LPDWORD a5,
                                          LPWSTR a6,
                                          DWORD a7)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetVolumeInformationW(a0, a1, a2, a3, a4, a5, a6, a7);
    } __finally {
        _Print("GetVolumeInformationW(%ls,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetWinMetaFileBits(HENHMETAFILE a0,
                                       UINT a1,
                                       LPBYTE a2,
                                       INT a3,
                                       HDC a4)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetWinMetaFileBits(a0, a1, a2, a3, a4);
    } __finally {
        _Print("GetWinMetaFileBits(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

HWND __stdcall Mine_GetWindow(HWND a0,
                              UINT a1)
{
    
    HWND rv = 0;
    __try {
        rv = Real_GetWindow(a0, a1);
    } __finally {
        _Print("GetWindow(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetWindowContextHelpId(HWND a0)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetWindowContextHelpId(a0);
    } __finally {
        _Print("GetWindowContextHelpId(%p) -> %p", a0, rv);
    };
    return rv;
}

HDC __stdcall Mine_GetWindowDC(HWND a0)
{
    
    HDC rv = 0;
    __try {
        rv = Real_GetWindowDC(a0);
    } __finally {
        _Print("GetWindowDC(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetWindowExtEx(HDC a0,
                                   SIZE* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetWindowExtEx(a0, a1);
    } __finally {
        _Print("GetWindowExtEx(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

LONG __stdcall Mine_GetWindowLongA(HWND a0,
                                   int a1)
{
    
    LONG rv = 0;
    __try {
        rv = Real_GetWindowLongA(a0, a1);
    } __finally {
        _Print("GetWindowLongA(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

LONG __stdcall Mine_GetWindowLongW(HWND a0,
                                   int a1)
{
    
    LONG rv = 0;
    __try {
        rv = Real_GetWindowLongW(a0, a1);
    } __finally {
        _Print("GetWindowLongW(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetWindowOrgEx(HDC a0,
                                   POINT* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetWindowOrgEx(a0, a1);
    } __finally {
        _Print("GetWindowOrgEx(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetWindowPlacement(HWND a0,
                                       WINDOWPLACEMENT* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetWindowPlacement(a0, a1);
    } __finally {
        _Print("GetWindowPlacement(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetWindowRect(HWND a0,
                                  LPRECT a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetWindowRect(a0, a1);
    } __finally {
        _Print("GetWindowRect(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_GetWindowRgn(HWND a0,
                                HRGN a1)
{
    
    int rv = 0;
    __try {
        rv = Real_GetWindowRgn(a0, a1);
    } __finally {
        _Print("GetWindowRgn(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_GetWindowTextA(HWND a0,
                                  LPSTR a1,
                                  int a2)
{
    
    int rv = 0;
    __try {
        rv = Real_GetWindowTextA(a0, a1, a2);
    } __finally {
        _Print("GetWindowTextA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_GetWindowTextLengthA(HWND a0)
{
    
    int rv = 0;
    __try {
        rv = Real_GetWindowTextLengthA(a0);
    } __finally {
        _Print("GetWindowTextLengthA(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_GetWindowTextLengthW(HWND a0)
{
    
    int rv = 0;
    __try {
        rv = Real_GetWindowTextLengthW(a0);
    } __finally {
        _Print("GetWindowTextLengthW(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_GetWindowTextW(HWND a0,
                                  LPWSTR a1,
                                  int a2)
{
    
    int rv = 0;
    __try {
        rv = Real_GetWindowTextW(a0, a1, a2);
    } __finally {
        _Print("GetWindowTextW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_GetWindowThreadProcessId(HWND a0,
                                              LPDWORD a1)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_GetWindowThreadProcessId(a0, a1);
    } __finally {
        _Print("GetWindowThreadProcessId(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

WORD __stdcall Mine_GetWindowWord(HWND a0,
                                  int a1)
{
    
    WORD rv = 0;
    __try {
        rv = Real_GetWindowWord(a0, a1);
    } __finally {
        _Print("GetWindowWord(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetWindowsDirectoryA(LPSTR a0,
                                         UINT a1)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetWindowsDirectoryA(a0, a1);
    } __finally {
        _Print("GetWindowsDirectoryA(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

UINT __stdcall Mine_GetWindowsDirectoryW(LPWSTR a0,
                                         UINT a1)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GetWindowsDirectoryW(a0, a1);
    } __finally {
        _Print("GetWindowsDirectoryW(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GetWorldTransform(HDC a0,
                                      XFORM* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GetWorldTransform(a0, a1);
    } __finally {
        _Print("GetWorldTransform(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

ATOM __stdcall Mine_GlobalAddAtomA(LPCSTR a0)
{
    
    ATOM rv = 0;
    __try {
        rv = Real_GlobalAddAtomA(a0);
    } __finally {
        _Print("GlobalAddAtomA(%hs) -> %p", a0, rv);
    };
    return rv;
}

ATOM __stdcall Mine_GlobalAddAtomW(LPCWSTR a0)
{
    
    ATOM rv = 0;
    __try {
        rv = Real_GlobalAddAtomW(a0);
    } __finally {
        _Print("GlobalAddAtomW(%ls) -> %p", a0, rv);
    };
    return rv;
}

HGLOBAL __stdcall Mine_GlobalAlloc(UINT a0,
                                   SIZE_T a1)
{
    
    HGLOBAL rv = 0;
    __try {
        rv = Real_GlobalAlloc(a0, a1);
    } __finally {
        _Print("GlobalAlloc(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

SIZE_T __stdcall Mine_GlobalCompact(DWORD a0)
{
    
    SIZE_T rv = 0;
    __try {
        rv = Real_GlobalCompact(a0);
    } __finally {
        _Print("GlobalCompact(%p) -> %p", a0, rv);
    };
    return rv;
}

ATOM __stdcall Mine_GlobalDeleteAtom(ATOM a0)
{
    
    ATOM rv = 0;
    __try {
        rv = Real_GlobalDeleteAtom(a0);
    } __finally {
        _Print("GlobalDeleteAtom(%p) -> %p", a0, rv);
    };
    return rv;
}

ATOM __stdcall Mine_GlobalFindAtomA(LPCSTR a0)
{
    
    ATOM rv = 0;
    __try {
        rv = Real_GlobalFindAtomA(a0);
    } __finally {
        _Print("GlobalFindAtomA(%hs) -> %p", a0, rv);
    };
    return rv;
}

ATOM __stdcall Mine_GlobalFindAtomW(LPCWSTR a0)
{
    
    ATOM rv = 0;
    __try {
        rv = Real_GlobalFindAtomW(a0);
    } __finally {
        _Print("GlobalFindAtomW(%ls) -> %p", a0, rv);
    };
    return rv;
}

void __stdcall Mine_GlobalFix(HGLOBAL a0)
{
    
    __try {
        Real_GlobalFix(a0);
    } __finally {
        _Print("GlobalFix(%p) ->", a0);
    };
}

UINT __stdcall Mine_GlobalFlags(HGLOBAL a0)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GlobalFlags(a0);
    } __finally {
        _Print("GlobalFlags(%p) -> %p", a0, rv);
    };
    return rv;
}

HGLOBAL __stdcall Mine_GlobalFree(HGLOBAL a0)
{
    
    HGLOBAL rv = 0;
    __try {
        rv = Real_GlobalFree(a0);
    } __finally {
        _Print("GlobalFree(%p) -> %p", a0, rv);
    };
    return rv;
}

UINT __stdcall Mine_GlobalGetAtomNameA(ATOM a0,
                                       LPSTR a1,
                                       int a2)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GlobalGetAtomNameA(a0, a1, a2);
    } __finally {
        _Print("GlobalGetAtomNameA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

UINT __stdcall Mine_GlobalGetAtomNameW(ATOM a0,
                                       LPWSTR a1,
                                       int a2)
{
    
    UINT rv = 0;
    __try {
        rv = Real_GlobalGetAtomNameW(a0, a1, a2);
    } __finally {
        _Print("GlobalGetAtomNameW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HGLOBAL __stdcall Mine_GlobalHandle(LPCVOID a0)
{
    
    HGLOBAL rv = 0;
    __try {
        rv = Real_GlobalHandle(a0);
    } __finally {
        _Print("GlobalHandle(%p) -> %p", a0, rv);
    };
    return rv;
}

LPVOID __stdcall Mine_GlobalLock(HGLOBAL a0)
{
    
    LPVOID rv = 0;
    __try {
        rv = Real_GlobalLock(a0);
    } __finally {
        _Print("GlobalLock(%p) -> %p", a0, rv);
    };
    return rv;
}

void __stdcall Mine_GlobalMemoryStatus(LPMEMORYSTATUS a0)
{
    
    __try {
        Real_GlobalMemoryStatus(a0);
    } __finally {
        _Print("GlobalMemoryStatus(%p) ->", a0);
    };
}

HGLOBAL __stdcall Mine_GlobalReAlloc(HGLOBAL a0,
                                     SIZE_T a1,
                                     UINT a2)
{
    
    HGLOBAL rv = 0;
    __try {
        rv = Real_GlobalReAlloc(a0, a1, a2);
    } __finally {
        _Print("GlobalReAlloc(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

SIZE_T __stdcall Mine_GlobalSize(HGLOBAL a0)
{
    
    SIZE_T rv = 0;
    __try {
        rv = Real_GlobalSize(a0);
    } __finally {
        _Print("GlobalSize(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GlobalUnWire(HGLOBAL a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GlobalUnWire(a0);
    } __finally {
        _Print("GlobalUnWire(%p) -> %p", a0, rv);
    };
    return rv;
}

void __stdcall Mine_GlobalUnfix(HGLOBAL a0)
{
    
    __try {
        Real_GlobalUnfix(a0);
    } __finally {
        _Print("GlobalUnfix(%p) ->", a0);
    };
}

BOOL __stdcall Mine_GlobalUnlock(HGLOBAL a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GlobalUnlock(a0);
    } __finally {
        _Print("GlobalUnlock(%p) -> %p", a0, rv);
    };
    return rv;
}

LPVOID __stdcall Mine_GlobalWire(HGLOBAL a0)
{
    
    LPVOID rv = 0;
    __try {
        rv = Real_GlobalWire(a0);
    } __finally {
        _Print("GlobalWire(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GrayStringA(HDC a0,
                                HBRUSH a1,
                                GRAYSTRINGPROC a2,
                                LPARAM a3,
                                int a4,
                                int a5,
                                int a6,
                                int a7,
                                int a8)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GrayStringA(a0, a1, a2, a3, a4, a5, a6, a7, a8);
    } __finally {
        _Print("GrayStringA(%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, rv);
    };
    return rv;
}

BOOL __stdcall Mine_GrayStringW(HDC a0,
                                HBRUSH a1,
                                GRAYSTRINGPROC a2,
                                LPARAM a3,
                                int a4,
                                int a5,
                                int a6,
                                int a7,
                                int a8)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_GrayStringW(a0, a1, a2, a3, a4, a5, a6, a7, a8);
    } __finally {
        _Print("GrayStringW(%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, rv);
    };
    return rv;
}

BOOL __stdcall Mine_HeapLock(HANDLE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_HeapLock(a0);
    } __finally {
        _Print("HeapLock(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_HeapUnlock(HANDLE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_HeapUnlock(a0);
    } __finally {
        _Print("HeapUnlock(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_HideCaret(HWND a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_HideCaret(a0);
    } __finally {
        _Print("HideCaret(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_HiliteMenuItem(HWND a0,
                                   HMENU a1,
                                   UINT a2,
                                   UINT a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_HiliteMenuItem(a0, a1, a2, a3);
    } __finally {
        _Print("HiliteMenuItem(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_IIDFromString(LPOLESTR a0,
                                     LPGUID a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_IIDFromString(a0, a1);
    } __finally {
        _Print("IIDFromString(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ImpersonateDdeClientWindow(HWND a0,
                                               HWND a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ImpersonateDdeClientWindow(a0, a1);
    } __finally {
        _Print("ImpersonateDdeClientWindow(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_InSendMessage(void)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_InSendMessage();
    } __finally {
        _Print("InSendMessage() -> %p", rv);
    };
    return rv;
}

BOOL __stdcall Mine_InflateRect(LPRECT a0,
                                int a1,
                                int a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_InflateRect(a0, a1, a2);
    } __finally {
        _Print("InflateRect(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_InitAtomTable(DWORD a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_InitAtomTable(a0);
    } __finally {
        _Print("InitAtomTable(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_InsertMenuA(HMENU a0,
                                UINT a1,
                                UINT a2,
                                UINT_PTR a3,
                                LPCSTR a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_InsertMenuA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("InsertMenuA(%p,%p,%p,%p,%hs) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_InsertMenuItemA(HMENU a0,
                                    UINT a1,
                                    BOOL a2,
                                    MENUITEMINFOA* a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_InsertMenuItemA(a0, a1, a2, a3);
    } __finally {
        _Print("InsertMenuItemA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_InsertMenuItemW(HMENU a0,
                                    UINT a1,
                                    BOOL a2,
                                    MENUITEMINFOW* a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_InsertMenuItemW(a0, a1, a2, a3);
    } __finally {
        _Print("InsertMenuItemW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_InsertMenuW(HMENU a0,
                                UINT a1,
                                UINT a2,
                                UINT_PTR a3,
                                LPCWSTR a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_InsertMenuW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("InsertMenuW(%p,%p,%p,%p,%ls) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_IntersectClipRect(HDC a0,
                                     int a1,
                                     int a2,
                                     int a3,
                                     int a4)
{
    
    int rv = 0;
    __try {
        rv = Real_IntersectClipRect(a0, a1, a2, a3, a4);
    } __finally {
        _Print("IntersectClipRect(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IntersectRect(LPRECT a0,
                                  RECT* a1,
                                  RECT* a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IntersectRect(a0, a1, a2);
    } __finally {
        _Print("IntersectRect(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_InvalidateRect(HWND a0,
                                   RECT* a1,
                                   BOOL a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_InvalidateRect(a0, a1, a2);
    } __finally {
        _Print("InvalidateRect(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_InvalidateRgn(HWND a0,
                                  HRGN a1,
                                  BOOL a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_InvalidateRgn(a0, a1, a2);
    } __finally {
        _Print("InvalidateRgn(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_InvertRect(HDC a0,
                               RECT* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_InvertRect(a0, a1);
    } __finally {
        _Print("InvertRect(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_InvertRgn(HDC a0,
                              HRGN a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_InvertRgn(a0, a1);
    } __finally {
        _Print("InvertRgn(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsAccelerator(HACCEL a0,
                                  int a1,
                                  LPMSG a2,
                                  WORD* a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsAccelerator(a0, a1, a2, a3);
    } __finally {
        _Print("IsAccelerator(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsBadCodePtr(FARPROC a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsBadCodePtr(a0);
    } __finally {
        _Print("IsBadCodePtr(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsBadHugeReadPtr(void* a0,
                                     UINT_PTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsBadHugeReadPtr(a0, a1);
    } __finally {
        _Print("IsBadHugeReadPtr(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsBadHugeWritePtr(LPVOID a0,
                                      UINT_PTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsBadHugeWritePtr(a0, a1);
    } __finally {
        _Print("IsBadHugeWritePtr(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsBadReadPtr(void* a0,
                                 UINT_PTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsBadReadPtr(a0, a1);
    } __finally {
        _Print("IsBadReadPtr(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsBadStringPtrA(LPCSTR a0,
                                    UINT_PTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsBadStringPtrA(a0, a1);
    } __finally {
        _Print("IsBadStringPtrA(%hs,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsBadStringPtrW(LPCWSTR a0,
                                    UINT_PTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsBadStringPtrW(a0, a1);
    } __finally {
        _Print("IsBadStringPtrW(%ls,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsBadWritePtr(LPVOID a0,
                                  UINT_PTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsBadWritePtr(a0, a1);
    } __finally {
        _Print("IsBadWritePtr(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsCharAlphaA(CHAR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsCharAlphaA(a0);
    } __finally {
        _Print("IsCharAlphaA(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsCharAlphaNumericA(CHAR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsCharAlphaNumericA(a0);
    } __finally {
        _Print("IsCharAlphaNumericA(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsCharAlphaNumericW(WCHAR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsCharAlphaNumericW(a0);
    } __finally {
        _Print("IsCharAlphaNumericW(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsCharAlphaW(WCHAR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsCharAlphaW(a0);
    } __finally {
        _Print("IsCharAlphaW(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsCharLowerA(CHAR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsCharLowerA(a0);
    } __finally {
        _Print("IsCharLowerA(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsCharLowerW(WCHAR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsCharLowerW(a0);
    } __finally {
        _Print("IsCharLowerW(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsCharUpperA(CHAR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsCharUpperA(a0);
    } __finally {
        _Print("IsCharUpperA(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsCharUpperW(WCHAR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsCharUpperW(a0);
    } __finally {
        _Print("IsCharUpperW(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsChild(HWND a0,
                            HWND a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsChild(a0, a1);
    } __finally {
        _Print("IsChild(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsClipboardFormatAvailable(UINT a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsClipboardFormatAvailable(a0);
    } __finally {
        _Print("IsClipboardFormatAvailable(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsDBCSLeadByte(BYTE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsDBCSLeadByte(a0);
    } __finally {
        _Print("IsDBCSLeadByte(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsDBCSLeadByteEx(UINT a0,
                                     BYTE a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsDBCSLeadByteEx(a0, a1);
    } __finally {
        _Print("IsDBCSLeadByteEx(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsDebuggerPresent(void)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsDebuggerPresent();
    } __finally {
        _Print("IsDebuggerPresent() -> %p", rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsDialogMessageA(HWND a0,
                                     LPMSG a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsDialogMessageA(a0, a1);
    } __finally {
        _Print("IsDialogMessageA(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsDialogMessageW(HWND a0,
                                     LPMSG a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsDialogMessageW(a0, a1);
    } __finally {
        _Print("IsDialogMessageW(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

UINT __stdcall Mine_IsDlgButtonChecked(HWND a0,
                                       int a1)
{
    
    UINT rv = 0;
    __try {
        rv = Real_IsDlgButtonChecked(a0, a1);
    } __finally {
        _Print("IsDlgButtonChecked(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsIconic(HWND a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsIconic(a0);
    } __finally {
        _Print("IsIconic(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsMenu(HMENU a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsMenu(a0);
    } __finally {
        _Print("IsMenu(%p) -> %p", a0, rv);
    };
    return rv;
}

#if !defined(DETOURS_ARM)
BOOL __stdcall Mine_IsProcessorFeaturePresent(DWORD a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsProcessorFeaturePresent(a0);
    } __finally {
        _Print("IsProcessorFeaturePresent(%p) -> %p", a0, rv);
    };
    return rv;
}
#endif // !DETOURS_ARM

BOOL __stdcall Mine_IsRectEmpty(RECT* a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsRectEmpty(a0);
    } __finally {
        _Print("IsRectEmpty(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsValidCodePage(UINT a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsValidCodePage(a0);
    } __finally {
        _Print("IsValidCodePage(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsValidLocale(LCID a0,
                                  DWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsValidLocale(a0, a1);
    } __finally {
        _Print("IsValidLocale(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsWindow(HWND a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsWindow(a0);
    } __finally {
        _Print("IsWindow(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsWindowEnabled(HWND a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsWindowEnabled(a0);
    } __finally {
        _Print("IsWindowEnabled(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsWindowUnicode(HWND a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsWindowUnicode(a0);
    } __finally {
        _Print("IsWindowUnicode(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsWindowVisible(HWND a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsWindowVisible(a0);
    } __finally {
        _Print("IsWindowVisible(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_IsZoomed(HWND a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_IsZoomed(a0);
    } __finally {
        _Print("IsZoomed(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_KillTimer(HWND a0,
                              UINT_PTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_KillTimer(a0, a1);
    } __finally {
        _Print("KillTimer(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_LPtoDP(HDC a0,
                           POINT* a1,
                           int a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_LPtoDP(a0, a1, a2);
    } __finally {
        _Print("LPtoDP(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_LineDDA(int a0,
                            int a1,
                            int a2,
                            int a3,
                            LINEDDAPROC a4,
                            LPARAM a5)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_LineDDA(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("LineDDA(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

BOOL __stdcall Mine_LineTo(HDC a0,
                           int a1,
                           int a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_LineTo(a0, a1, a2);
    } __finally {
        _Print("LineTo(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HACCEL __stdcall Mine_LoadAcceleratorsA(HINSTANCE a0,
                                        LPCSTR a1)
{
    
    HACCEL rv = 0;
    __try {
        rv = Real_LoadAcceleratorsA(a0, a1);
    } __finally {
        _Print("LoadAcceleratorsA(%p,%hs) -> %p", a0, a1, rv);
    };
    return rv;
}

HACCEL __stdcall Mine_LoadAcceleratorsW(HINSTANCE a0,
                                        LPCWSTR a1)
{
    
    HACCEL rv = 0;
    __try {
        rv = Real_LoadAcceleratorsW(a0, a1);
    } __finally {
        _Print("LoadAcceleratorsW(%p,%ls) -> %p", a0, a1, rv);
    };
    return rv;
}

HBITMAP __stdcall Mine_LoadBitmapA(HINSTANCE a0,
                                   LPCSTR a1)
{
    
    HBITMAP rv = 0;
    __try {
        rv = Real_LoadBitmapA(a0, a1);
    } __finally {
        _Print("LoadBitmapA(%p,%hs) -> %p", a0, a1, rv);
    };
    return rv;
}

HBITMAP __stdcall Mine_LoadBitmapW(HINSTANCE a0,
                                   LPCWSTR a1)
{
    
    HBITMAP rv = 0;
    __try {
        rv = Real_LoadBitmapW(a0, a1);
    } __finally {
        _Print("LoadBitmapW(%p,%ls) -> %p", a0, a1, rv);
    };
    return rv;
}

HCURSOR __stdcall Mine_LoadCursorA(HINSTANCE a0,
                                   LPCSTR a1)
{
    
    HCURSOR rv = 0;
    __try {
        rv = Real_LoadCursorA(a0, a1);
    } __finally {
        _Print("LoadCursorA(%p,%hs) -> %p", a0, a1, rv);
    };
    return rv;
}

HCURSOR __stdcall Mine_LoadCursorFromFileA(LPCSTR a0)
{
    
    HCURSOR rv = 0;
    __try {
        rv = Real_LoadCursorFromFileA(a0);
    } __finally {
        _Print("LoadCursorFromFileA(%hs) -> %p", a0, rv);
    };
    return rv;
}

HCURSOR __stdcall Mine_LoadCursorFromFileW(LPCWSTR a0)
{
    
    HCURSOR rv = 0;
    __try {
        rv = Real_LoadCursorFromFileW(a0);
    } __finally {
        _Print("LoadCursorFromFileW(%ls) -> %p", a0, rv);
    };
    return rv;
}

HCURSOR __stdcall Mine_LoadCursorW(HINSTANCE a0,
                                   LPCWSTR a1)
{
    
    HCURSOR rv = 0;
    __try {
        rv = Real_LoadCursorW(a0, a1);
    } __finally {
        _Print("LoadCursorW(%p,%ls) -> %p", a0, a1, rv);
    };
    return rv;
}

HICON __stdcall Mine_LoadIconA(HINSTANCE a0,
                               LPCSTR a1)
{
    
    HICON rv = 0;
    __try {
        rv = Real_LoadIconA(a0, a1);
    } __finally {
        _Print("LoadIconA(%p,%hs) -> %p", a0, a1, rv);
    };
    return rv;
}

HICON __stdcall Mine_LoadIconW(HINSTANCE a0,
                               LPCWSTR a1)
{
    
    HICON rv = 0;
    __try {
        rv = Real_LoadIconW(a0, a1);
    } __finally {
        _Print("LoadIconW(%p,%ls) -> %p", a0, a1, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_LoadImageA(HINSTANCE a0,
                                 LPCSTR a1,
                                 UINT a2,
                                 int a3,
                                 int a4,
                                 UINT a5)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_LoadImageA(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("LoadImageA(%p,%hs,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_LoadImageW(HINSTANCE a0,
                                 LPCWSTR a1,
                                 UINT a2,
                                 int a3,
                                 int a4,
                                 UINT a5)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_LoadImageW(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("LoadImageW(%p,%ls,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

HKL __stdcall Mine_LoadKeyboardLayoutA(LPCSTR a0,
                                       UINT a1)
{
    
    HKL rv = 0;
    __try {
        rv = Real_LoadKeyboardLayoutA(a0, a1);
    } __finally {
        _Print("LoadKeyboardLayoutA(%hs,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HKL __stdcall Mine_LoadKeyboardLayoutW(LPCWSTR a0,
                                       UINT a1)
{
    
    HKL rv = 0;
    __try {
        rv = Real_LoadKeyboardLayoutW(a0, a1);
    } __finally {
        _Print("LoadKeyboardLayoutW(%ls,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HMODULE __stdcall Mine_LoadLibraryA(LPCSTR a0)
{
    
    HMODULE rv = 0;
    __try {
        rv = Real_LoadLibraryA(a0);
    } __finally {
        _Print("LoadLibraryA(%hs) -> %p", a0, rv);
    };
    return rv;
}

HMODULE __stdcall Mine_LoadLibraryExA(LPCSTR a0,
                                      HANDLE a1,
                                      DWORD a2)
{
    
    HMODULE rv = 0;
    __try {
        rv = Real_LoadLibraryExA(a0, a1, a2);
    } __finally {
        _Print("LoadLibraryExA(%hs,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HMODULE __stdcall Mine_LoadLibraryExW(LPCWSTR a0,
                                      HANDLE a1,
                                      DWORD a2)
{
    
    HMODULE rv = 0;
    __try {
        rv = Real_LoadLibraryExW(a0, a1, a2);
    } __finally {
        _Print("LoadLibraryExW(%ls,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HMODULE __stdcall Mine_LoadLibraryW(LPCWSTR a0)
{
    
    HMODULE rv = 0;
    __try {
        rv = Real_LoadLibraryW(a0);
    } __finally {
        _Print("LoadLibraryW(%ls) -> %p", a0, rv);
    };
    return rv;
}

HMENU __stdcall Mine_LoadMenuA(HINSTANCE a0,
                               LPCSTR a1)
{
    
    HMENU rv = 0;
    __try {
        rv = Real_LoadMenuA(a0, a1);
    } __finally {
        _Print("LoadMenuA(%p,%hs) -> %p", a0, a1, rv);
    };
    return rv;
}

HMENU __stdcall Mine_LoadMenuIndirectA(MENUTEMPLATEA* a0)
{
    
    HMENU rv = 0;
    __try {
        rv = Real_LoadMenuIndirectA(a0);
    } __finally {
        _Print("LoadMenuIndirectA(%p) -> %p", a0, rv);
    };
    return rv;
}

HMENU __stdcall Mine_LoadMenuIndirectW(MENUTEMPLATEW* a0)
{
    
    HMENU rv = 0;
    __try {
        rv = Real_LoadMenuIndirectW(a0);
    } __finally {
        _Print("LoadMenuIndirectW(%p) -> %p", a0, rv);
    };
    return rv;
}

HMENU __stdcall Mine_LoadMenuW(HINSTANCE a0,
                               LPCWSTR a1)
{
    
    HMENU rv = 0;
    __try {
        rv = Real_LoadMenuW(a0, a1);
    } __finally {
        _Print("LoadMenuW(%p,%ls) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_LoadModule(LPCSTR a0,
                                LPVOID a1)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_LoadModule(a0, a1);
    } __finally {
        _Print("LoadModule(%hs,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HGLOBAL __stdcall Mine_LoadResource(HMODULE a0,
                                    HRSRC a1)
{
    
    HGLOBAL rv = 0;
    __try {
        rv = Real_LoadResource(a0, a1);
    } __finally {
        _Print("LoadResource(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_LoadStringA(HINSTANCE a0,
                               UINT a1,
                               LPSTR a2,
                               int a3)
{
    
    int rv = 0;
    __try {
        rv = Real_LoadStringA(a0, a1, a2, a3);
    } __finally {
        _Print("LoadStringA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

int __stdcall Mine_LoadStringW(HINSTANCE a0,
                               UINT a1,
                               LPWSTR a2,
                               int a3)
{
    
    int rv = 0;
    __try {
        rv = Real_LoadStringW(a0, a1, a2, a3);
    } __finally {
        _Print("LoadStringW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HLOCAL __stdcall Mine_LocalAlloc(UINT a0,
                                 SIZE_T a1)
{
    
    HLOCAL rv = 0;
    __try {
        rv = Real_LocalAlloc(a0, a1);
    } __finally {
        _Print("LocalAlloc(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

SIZE_T __stdcall Mine_LocalCompact(UINT a0)
{
    
    SIZE_T rv = 0;
    __try {
        rv = Real_LocalCompact(a0);
    } __finally {
        _Print("LocalCompact(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_LocalFileTimeToFileTime(FILETIME* a0,
                                            LPFILETIME a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_LocalFileTimeToFileTime(a0, a1);
    } __finally {
        _Print("LocalFileTimeToFileTime(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

UINT __stdcall Mine_LocalFlags(HLOCAL a0)
{
    
    UINT rv = 0;
    __try {
        rv = Real_LocalFlags(a0);
    } __finally {
        _Print("LocalFlags(%p) -> %p", a0, rv);
    };
    return rv;
}

HLOCAL __stdcall Mine_LocalFree(HLOCAL a0)
{
    
    HLOCAL rv = 0;
    __try {
        rv = Real_LocalFree(a0);
    } __finally {
        _Print("LocalFree(%p) -> %p", a0, rv);
    };
    return rv;
}

HLOCAL __stdcall Mine_LocalHandle(LPCVOID a0)
{
    
    HLOCAL rv = 0;
    __try {
        rv = Real_LocalHandle(a0);
    } __finally {
        _Print("LocalHandle(%p) -> %p", a0, rv);
    };
    return rv;
}

LPVOID __stdcall Mine_LocalLock(HLOCAL a0)
{
    
    LPVOID rv = 0;
    __try {
        rv = Real_LocalLock(a0);
    } __finally {
        _Print("LocalLock(%p) -> %p", a0, rv);
    };
    return rv;
}

HLOCAL __stdcall Mine_LocalReAlloc(HLOCAL a0,
                                   SIZE_T a1,
                                   UINT a2)
{
    
    HLOCAL rv = 0;
    __try {
        rv = Real_LocalReAlloc(a0, a1, a2);
    } __finally {
        _Print("LocalReAlloc(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

SIZE_T __stdcall Mine_LocalShrink(HLOCAL a0,
                                  UINT a1)
{
    
    SIZE_T rv = 0;
    __try {
        rv = Real_LocalShrink(a0, a1);
    } __finally {
        _Print("LocalShrink(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

SIZE_T __stdcall Mine_LocalSize(HLOCAL a0)
{
    
    SIZE_T rv = 0;
    __try {
        rv = Real_LocalSize(a0);
    } __finally {
        _Print("LocalSize(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_LocalUnlock(HLOCAL a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_LocalUnlock(a0);
    } __finally {
        _Print("LocalUnlock(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_LockFile(HANDLE a0,
                             DWORD a1,
                             DWORD a2,
                             DWORD a3,
                             DWORD a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_LockFile(a0, a1, a2, a3, a4);
    } __finally {
        _Print("LockFile(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_LockFileEx(HANDLE a0,
                               DWORD a1,
                               DWORD a2,
                               DWORD a3,
                               DWORD a4,
                               LPOVERLAPPED a5)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_LockFileEx(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("LockFileEx(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

LPVOID __stdcall Mine_LockResource(HGLOBAL a0)
{
    
    LPVOID rv = 0;
    __try {
        rv = Real_LockResource(a0);
    } __finally {
        _Print("LockResource(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_LockWindowUpdate(HWND a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_LockWindowUpdate(a0);
    } __finally {
        _Print("LockWindowUpdate(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_LookupIconIdFromDirectory(PBYTE a0,
                                             BOOL a1)
{
    
    int rv = 0;
    __try {
        rv = Real_LookupIconIdFromDirectory(a0, a1);
    } __finally {
        _Print("LookupIconIdFromDirectory(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_LookupIconIdFromDirectoryEx(PBYTE a0,
                                               BOOL a1,
                                               int a2,
                                               int a3,
                                               UINT a4)
{
    
    int rv = 0;
    __try {
        rv = Real_LookupIconIdFromDirectoryEx(a0, a1, a2, a3, a4);
    } __finally {
        _Print("LookupIconIdFromDirectoryEx(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_MapDialogRect(HWND a0,
                                  LPRECT a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_MapDialogRect(a0, a1);
    } __finally {
        _Print("MapDialogRect(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

LPVOID __stdcall Mine_MapViewOfFile(HANDLE a0,
                                    DWORD a1,
                                    DWORD a2,
                                    DWORD a3,
                                    SIZE_T a4)
{
    
    LPVOID rv = 0;
    __try {
        rv = Real_MapViewOfFile(a0, a1, a2, a3, a4);
    } __finally {
        _Print("MapViewOfFile(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

LPVOID __stdcall Mine_MapViewOfFileEx(HANDLE a0,
                                      DWORD a1,
                                      DWORD a2,
                                      DWORD a3,
                                      SIZE_T a4,
                                      LPVOID a5)
{
    
    LPVOID rv = 0;
    __try {
        rv = Real_MapViewOfFileEx(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("MapViewOfFileEx(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

UINT __stdcall Mine_MapVirtualKeyA(UINT a0,
                                   UINT a1)
{
    
    UINT rv = 0;
    __try {
        rv = Real_MapVirtualKeyA(a0, a1);
    } __finally {
        _Print("MapVirtualKeyA(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

UINT __stdcall Mine_MapVirtualKeyExA(UINT a0,
                                     UINT a1,
                                     HKL a2)
{
    
    UINT rv = 0;
    __try {
        rv = Real_MapVirtualKeyExA(a0, a1, a2);
    } __finally {
        _Print("MapVirtualKeyExA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

UINT __stdcall Mine_MapVirtualKeyExW(UINT a0,
                                     UINT a1,
                                     HKL a2)
{
    
    UINT rv = 0;
    __try {
        rv = Real_MapVirtualKeyExW(a0, a1, a2);
    } __finally {
        _Print("MapVirtualKeyExW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

UINT __stdcall Mine_MapVirtualKeyW(UINT a0,
                                   UINT a1)
{
    
    UINT rv = 0;
    __try {
        rv = Real_MapVirtualKeyW(a0, a1);
    } __finally {
        _Print("MapVirtualKeyW(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_MapWindowPoints(HWND a0,
                                   HWND a1,
                                   POINT* a2,
                                   UINT a3)
{
    
    int rv = 0;
    __try {
        rv = Real_MapWindowPoints(a0, a1, a2, a3);
    } __finally {
        _Print("MapWindowPoints(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_MaskBlt(HDC a0,
                            int a1,
                            int a2,
                            int a3,
                            int a4,
                            HDC a5,
                            int a6,
                            int a7,
                            HBITMAP a8,
                            int a9,
                            int a10,
                            DWORD a11)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_MaskBlt(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    } __finally {
        _Print("MaskBlt(%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, rv);
    };
    return rv;
}

int __stdcall Mine_MenuItemFromPoint(HWND a0,
                                     HMENU a1,
                                     POINT a2)
{
    
    int rv = 0;
    __try {
        rv = Real_MenuItemFromPoint(a0, a1, a2);
    } __finally {
        _Print("MenuItemFromPoint(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_MessageBeep(UINT a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_MessageBeep(a0);
    } __finally {
        _Print("MessageBeep(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_MessageBoxA(HWND a0,
                               LPCSTR a1,
                               LPCSTR a2,
                               UINT a3)
{
    
    int rv = 0;
    __try {
        rv = Real_MessageBoxA(a0, a1, a2, a3);
    } __finally {
        _Print("MessageBoxA(%p,%hs,%hs,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

int __stdcall Mine_MessageBoxExA(HWND a0,
                                 LPCSTR a1,
                                 LPCSTR a2,
                                 UINT a3,
                                 WORD a4)
{
    
    int rv = 0;
    __try {
        rv = Real_MessageBoxExA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("MessageBoxExA(%p,%hs,%hs,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_MessageBoxExW(HWND a0,
                                 LPCWSTR a1,
                                 LPCWSTR a2,
                                 UINT a3,
                                 WORD a4)
{
    
    int rv = 0;
    __try {
        rv = Real_MessageBoxExW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("MessageBoxExW(%p,%ls,%ls,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_MessageBoxIndirectA(MSGBOXPARAMSA* a0)
{
    
    int rv = 0;
    __try {
        rv = Real_MessageBoxIndirectA(a0);
    } __finally {
        _Print("MessageBoxIndirectA(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_MessageBoxIndirectW(MSGBOXPARAMSW* a0)
{
    
    int rv = 0;
    __try {
        rv = Real_MessageBoxIndirectW(a0);
    } __finally {
        _Print("MessageBoxIndirectW(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_MessageBoxW(HWND a0,
                               LPCWSTR a1,
                               LPCWSTR a2,
                               UINT a3)
{
    
    int rv = 0;
    __try {
        rv = Real_MessageBoxW(a0, a1, a2, a3);
    } __finally {
        _Print("MessageBoxW(%p,%ls,%ls,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_MkParseDisplayName(IBindCtx* a0,
                                          LPCOLESTR a1,
                                          ULONG* a2,
                                          IMoniker** a3)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_MkParseDisplayName(a0, a1, a2, a3);
    } __finally {
        _Print("MkParseDisplayName(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ModifyMenuA(HMENU a0,
                                UINT a1,
                                UINT a2,
                                UINT_PTR a3,
                                LPCSTR a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ModifyMenuA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("ModifyMenuA(%p,%p,%p,%p,%hs) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ModifyMenuW(HMENU a0,
                                UINT a1,
                                UINT a2,
                                UINT_PTR a3,
                                LPCWSTR a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ModifyMenuW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("ModifyMenuW(%p,%p,%p,%p,%ls) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ModifyWorldTransform(HDC a0,
                                         XFORM* a1,
                                         DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ModifyWorldTransform(a0, a1, a2);
    } __finally {
        _Print("ModifyWorldTransform(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_MonikerCommonPrefixWith(IMoniker* a0,
                                               IMoniker* a1,
                                               IMoniker** a2)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_MonikerCommonPrefixWith(a0, a1, a2);
    } __finally {
        _Print("MonikerCommonPrefixWith(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_MonikerRelativePathTo(IMoniker* a0,
                                             IMoniker* a1,
                                             IMoniker** a2,
                                             BOOL a3)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_MonikerRelativePathTo(a0, a1, a2, a3);
    } __finally {
        _Print("MonikerRelativePathTo(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_MoveFileA(LPCSTR a0,
                              LPCSTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_MoveFileA(a0, a1);
    } __finally {
        _Print("MoveFileA(%hs,%hs) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_MoveFileExA(LPCSTR a0,
                                LPCSTR a1,
                                DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_MoveFileExA(a0, a1, a2);
    } __finally {
        _Print("MoveFileExA(%hs,%hs,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_MoveFileExW(LPCWSTR a0,
                                LPCWSTR a1,
                                DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_MoveFileExW(a0, a1, a2);
    } __finally {
        _Print("MoveFileExW(%ls,%ls,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_MoveFileW(LPCWSTR a0,
                              LPCWSTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_MoveFileW(a0, a1);
    } __finally {
        _Print("MoveFileW(%ls,%ls) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_MoveToEx(HDC a0,
                             int a1,
                             int a2,
                             POINT* a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_MoveToEx(a0, a1, a2, a3);
    } __finally {
        _Print("MoveToEx(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_MoveWindow(HWND a0,
                               int a1,
                               int a2,
                               int a3,
                               int a4,
                               BOOL a5)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_MoveWindow(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("MoveWindow(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

DWORD __stdcall Mine_MsgWaitForMultipleObjects(DWORD a0,
                                               void** a1,
                                               BOOL a2,
                                               DWORD a3,
                                               DWORD a4)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_MsgWaitForMultipleObjects(a0, a1, a2, a3, a4);
    } __finally {
        _Print("MsgWaitForMultipleObjects(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

DWORD __stdcall Mine_MsgWaitForMultipleObjectsEx(DWORD a0,
                                                 void** a1,
                                                 DWORD a2,
                                                 DWORD a3,
                                                 DWORD a4)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_MsgWaitForMultipleObjectsEx(a0, a1, a2, a3, a4);
    } __finally {
        _Print("MsgWaitForMultipleObjectsEx(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_MulDiv(int a0,
                          int a1,
                          int a2)
{
    
    int rv = 0;
    __try {
        rv = Real_MulDiv(a0, a1, a2);
    } __finally {
        _Print("MulDiv(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_OemKeyScan(WORD a0)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_OemKeyScan(a0);
    } __finally {
        _Print("OemKeyScan(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_OemToCharA(LPCSTR a0,
                               LPSTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_OemToCharA(a0, a1);
    } __finally {
        _Print("OemToCharA(%hs,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_OemToCharBuffA(LPCSTR a0,
                                   LPSTR a1,
                                   DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_OemToCharBuffA(a0, a1, a2);
    } __finally {
        _Print("OemToCharBuffA(%hs,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_OemToCharBuffW(LPCSTR a0,
                                   LPWSTR a1,
                                   DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_OemToCharBuffW(a0, a1, a2);
    } __finally {
        _Print("OemToCharBuffW(%hs,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_OemToCharW(LPCSTR a0,
                               LPWSTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_OemToCharW(a0, a1);
    } __finally {
        _Print("OemToCharW(%hs,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_OffsetClipRgn(HDC a0,
                                 int a1,
                                 int a2)
{
    
    int rv = 0;
    __try {
        rv = Real_OffsetClipRgn(a0, a1, a2);
    } __finally {
        _Print("OffsetClipRgn(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_OffsetRect(LPRECT a0,
                               int a1,
                               int a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_OffsetRect(a0, a1, a2);
    } __finally {
        _Print("OffsetRect(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_OffsetRgn(HRGN a0,
                             int a1,
                             int a2)
{
    
    int rv = 0;
    __try {
        rv = Real_OffsetRgn(a0, a1, a2);
    } __finally {
        _Print("OffsetRgn(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_OffsetViewportOrgEx(HDC a0,
                                        int a1,
                                        int a2,
                                        POINT* a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_OffsetViewportOrgEx(a0, a1, a2, a3);
    } __finally {
        _Print("OffsetViewportOrgEx(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_OffsetWindowOrgEx(HDC a0,
                                      int a1,
                                      int a2,
                                      POINT* a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_OffsetWindowOrgEx(a0, a1, a2, a3);
    } __finally {
        _Print("OffsetWindowOrgEx(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

DWORD __stdcall Mine_OleBuildVersion(void)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_OleBuildVersion();
    } __finally {
        _Print("OleBuildVersion() -> %p", rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleConvertIStorageToOLESTREAM(LPSTORAGE a0,
                                                     LPOLESTREAM a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleConvertIStorageToOLESTREAM(a0, a1);
    } __finally {
        _Print("OleConvertIStorageToOLESTREAM(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleConvertIStorageToOLESTREAMEx(LPSTORAGE a0,
                                                       CLIPFORMAT a1,
                                                       LONG a2,
                                                       LONG a3,
                                                       DWORD a4,
                                                       LPSTGMEDIUM a5,
                                                       LPOLESTREAM a6)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleConvertIStorageToOLESTREAMEx(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("OleConvertIStorageToOLESTREAMEx(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleConvertOLESTREAMToIStorage(LPOLESTREAM a0,
                                                     LPSTORAGE a1,
                                                     DVTARGETDEVICE* a2)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleConvertOLESTREAMToIStorage(a0, a1, a2);
    } __finally {
        _Print("OleConvertOLESTREAMToIStorage(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleConvertOLESTREAMToIStorageEx(LPOLESTREAM a0,
                                                       LPSTORAGE a1,
                                                       CLIPFORMAT* a2,
                                                       LONG* a3,
                                                       LONG* a4,
                                                       DWORD* a5,
                                                       LPSTGMEDIUM a6)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleConvertOLESTREAMToIStorageEx(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("OleConvertOLESTREAMToIStorageEx(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleCreate(CONST IID& a0,
                                 CONST IID& a1,
                                 DWORD a2,
                                 LPFORMATETC a3,
                                 LPOLECLIENTSITE a4,
                                 LPSTORAGE a5,
                                 LPVOID* a6)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleCreate(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("OleCreate(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleCreateDefaultHandler(CONST IID& a0,
                                               LPUNKNOWN a1,
                                               CONST IID& a2,
                                               LPVOID* a3)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleCreateDefaultHandler(a0, a1, a2, a3);
    } __finally {
        _Print("OleCreateDefaultHandler(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleCreateEmbeddingHelper(CONST IID& a0,
                                                LPUNKNOWN a1,
                                                DWORD a2,
                                                LPCLASSFACTORY a3,
                                                CONST IID& a4,
                                                LPVOID* a5)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleCreateEmbeddingHelper(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("OleCreateEmbeddingHelper(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleCreateEx(CONST IID& a0,
                                   CONST IID& a1,
                                   DWORD a2,
                                   DWORD a3,
                                   ULONG a4,
                                   DWORD* a5,
                                   LPFORMATETC a6,
                                   IAdviseSink* a7,
                                   DWORD* a8,
                                   LPOLECLIENTSITE a9,
                                   LPSTORAGE a10,
                                   LPVOID* a11)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleCreateEx(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    } __finally {
        _Print("OleCreateEx(%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleCreateFromData(IDataObject* a0,
                                         CONST IID& a1,
                                         DWORD a2,
                                         LPFORMATETC a3,
                                         LPOLECLIENTSITE a4,
                                         LPSTORAGE a5,
                                         LPVOID* a6)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleCreateFromData(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("OleCreateFromData(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleCreateFromDataEx(IDataObject* a0,
                                           CONST IID& a1,
                                           DWORD a2,
                                           DWORD a3,
                                           ULONG a4,
                                           DWORD* a5,
                                           LPFORMATETC a6,
                                           IAdviseSink* a7,
                                           DWORD* a8,
                                           LPOLECLIENTSITE a9,
                                           LPSTORAGE a10,
                                           LPVOID* a11)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleCreateFromDataEx(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    } __finally {
        _Print("OleCreateFromDataEx(%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleCreateFromFile(CONST IID& a0,
                                         LPCOLESTR a1,
                                         CONST IID& a2,
                                         DWORD a3,
                                         LPFORMATETC a4,
                                         LPOLECLIENTSITE a5,
                                         LPSTORAGE a6,
                                         LPVOID* a7)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleCreateFromFile(a0, a1, a2, a3, a4, a5, a6, a7);
    } __finally {
        _Print("OleCreateFromFile(%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleCreateFromFileEx(CONST IID& a0,
                                           LPCOLESTR a1,
                                           CONST IID& a2,
                                           DWORD a3,
                                           DWORD a4,
                                           ULONG a5,
                                           DWORD* a6,
                                           LPFORMATETC a7,
                                           IAdviseSink* a8,
                                           DWORD* a9,
                                           LPOLECLIENTSITE a10,
                                           LPSTORAGE a11,
                                           LPVOID* a12)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleCreateFromFileEx(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    } __finally {
        _Print("OleCreateFromFileEx(%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleCreateLink(IMoniker* a0,
                                     CONST IID& a1,
                                     DWORD a2,
                                     LPFORMATETC a3,
                                     LPOLECLIENTSITE a4,
                                     LPSTORAGE a5,
                                     LPVOID* a6)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleCreateLink(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("OleCreateLink(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleCreateLinkEx(IMoniker* a0,
                                       CONST IID& a1,
                                       DWORD a2,
                                       DWORD a3,
                                       ULONG a4,
                                       DWORD* a5,
                                       LPFORMATETC a6,
                                       IAdviseSink* a7,
                                       DWORD* a8,
                                       LPOLECLIENTSITE a9,
                                       LPSTORAGE a10,
                                       LPVOID* a11)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleCreateLinkEx(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    } __finally {
        _Print("OleCreateLinkEx(%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleCreateLinkFromData(IDataObject* a0,
                                             CONST IID& a1,
                                             DWORD a2,
                                             LPFORMATETC a3,
                                             LPOLECLIENTSITE a4,
                                             LPSTORAGE a5,
                                             LPVOID* a6)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleCreateLinkFromData(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("OleCreateLinkFromData(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleCreateLinkFromDataEx(IDataObject* a0,
                                               CONST IID& a1,
                                               DWORD a2,
                                               DWORD a3,
                                               ULONG a4,
                                               DWORD* a5,
                                               LPFORMATETC a6,
                                               IAdviseSink* a7,
                                               DWORD* a8,
                                               LPOLECLIENTSITE a9,
                                               LPSTORAGE a10,
                                               LPVOID* a11)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleCreateLinkFromDataEx(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    } __finally {
        _Print("OleCreateLinkFromDataEx(%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleCreateLinkToFile(LPCOLESTR a0,
                                           CONST IID& a1,
                                           DWORD a2,
                                           LPFORMATETC a3,
                                           LPOLECLIENTSITE a4,
                                           LPSTORAGE a5,
                                           LPVOID* a6)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleCreateLinkToFile(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("OleCreateLinkToFile(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleCreateLinkToFileEx(LPCOLESTR a0,
                                             CONST IID& a1,
                                             DWORD a2,
                                             DWORD a3,
                                             ULONG a4,
                                             DWORD* a5,
                                             LPFORMATETC a6,
                                             IAdviseSink* a7,
                                             DWORD* a8,
                                             LPOLECLIENTSITE a9,
                                             LPSTORAGE a10,
                                             LPVOID* a11)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleCreateLinkToFileEx(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    } __finally {
        _Print("OleCreateLinkToFileEx(%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, rv);
    };
    return rv;
}

HOLEMENU __stdcall Mine_OleCreateMenuDescriptor(HMENU a0,
                                                LPOLEMENUGROUPWIDTHS a1)
{
    
    HOLEMENU rv = 0;
    __try {
        rv = Real_OleCreateMenuDescriptor(a0, a1);
    } __finally {
        _Print("OleCreateMenuDescriptor(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleCreateStaticFromData(IDataObject* a0,
                                               CONST IID& a1,
                                               DWORD a2,
                                               LPFORMATETC a3,
                                               LPOLECLIENTSITE a4,
                                               LPSTORAGE a5,
                                               LPVOID* a6)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleCreateStaticFromData(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("OleCreateStaticFromData(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleDestroyMenuDescriptor(HOLEMENU a0)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleDestroyMenuDescriptor(a0);
    } __finally {
        _Print("OleDestroyMenuDescriptor(%p) -> %p", a0, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleDoAutoConvert(LPSTORAGE a0,
                                        LPGUID a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleDoAutoConvert(a0, a1);
    } __finally {
        _Print("OleDoAutoConvert(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleDraw(LPUNKNOWN a0,
                               DWORD a1,
                               HDC a2,
                               LPCRECT a3)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleDraw(a0, a1, a2, a3);
    } __finally {
        _Print("OleDraw(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_OleDuplicateData(HANDLE a0,
                                       CLIPFORMAT a1,
                                       UINT a2)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_OleDuplicateData(a0, a1, a2);
    } __finally {
        _Print("OleDuplicateData(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleFlushClipboard(void)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleFlushClipboard();
    } __finally {
        _Print("OleFlushClipboard() -> %p", rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleGetAutoConvert(CONST IID& a0,
                                         LPGUID a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleGetAutoConvert(a0, a1);
    } __finally {
        _Print("OleGetAutoConvert(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleGetClipboard(IDataObject** a0)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleGetClipboard(a0);
    } __finally {
        _Print("OleGetClipboard(%p) -> %p", a0, rv);
    };
    return rv;
}

HGLOBAL __stdcall Mine_OleGetIconOfClass(CONST IID& a0,
                                         LPOLESTR a1,
                                         BOOL a2)
{
    
    HGLOBAL rv = 0;
    __try {
        rv = Real_OleGetIconOfClass(a0, a1, a2);
    } __finally {
        _Print("OleGetIconOfClass(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HGLOBAL __stdcall Mine_OleGetIconOfFile(LPOLESTR a0,
                                        BOOL a1)
{
    
    HGLOBAL rv = 0;
    __try {
        rv = Real_OleGetIconOfFile(a0, a1);
    } __finally {
        _Print("OleGetIconOfFile(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleInitialize(LPVOID a0)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleInitialize(a0);
    } __finally {
        _Print("OleInitialize(%p) -> %p", a0, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleIsCurrentClipboard(IDataObject* a0)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleIsCurrentClipboard(a0);
    } __finally {
        _Print("OleIsCurrentClipboard(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_OleIsRunning(IOleObject* a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_OleIsRunning(a0);
    } __finally {
        _Print("OleIsRunning(%p) -> %p", a0, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleLoad(LPSTORAGE a0,
                               CONST IID& a1,
                               LPOLECLIENTSITE a2,
                               LPVOID* a3)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleLoad(a0, a1, a2, a3);
    } __finally {
        _Print("OleLoad(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleLoadFromStream(LPSTREAM a0,
                                         CONST IID& a1,
                                         LPVOID* a2)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleLoadFromStream(a0, a1, a2);
    } __finally {
        _Print("OleLoadFromStream(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleLockRunning(LPUNKNOWN a0,
                                      BOOL a1,
                                      BOOL a2)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleLockRunning(a0, a1, a2);
    } __finally {
        _Print("OleLockRunning(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HGLOBAL __stdcall Mine_OleMetafilePictFromIconAndLabel(HICON a0,
                                                       LPOLESTR a1,
                                                       LPOLESTR a2,
                                                       UINT a3)
{
    
    HGLOBAL rv = 0;
    __try {
        rv = Real_OleMetafilePictFromIconAndLabel(a0, a1, a2, a3);
    } __finally {
        _Print("OleMetafilePictFromIconAndLabel(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleNoteObjectVisible(LPUNKNOWN a0,
                                            BOOL a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleNoteObjectVisible(a0, a1);
    } __finally {
        _Print("OleNoteObjectVisible(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleQueryCreateFromData(IDataObject* a0)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleQueryCreateFromData(a0);
    } __finally {
        _Print("OleQueryCreateFromData(%p) -> %p", a0, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleQueryLinkFromData(IDataObject* a0)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleQueryLinkFromData(a0);
    } __finally {
        _Print("OleQueryLinkFromData(%p) -> %p", a0, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleRegEnumFormatEtc(CONST IID& a0,
                                           DWORD a1,
                                           IEnumFORMATETC** a2)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleRegEnumFormatEtc(a0, a1, a2);
    } __finally {
        _Print("OleRegEnumFormatEtc(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleRegEnumVerbs(CONST IID& a0,
                                       IEnumOLEVERB** a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleRegEnumVerbs(a0, a1);
    } __finally {
        _Print("OleRegEnumVerbs(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleRegGetMiscStatus(CONST IID& a0,
                                           DWORD a1,
                                           DWORD* a2)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleRegGetMiscStatus(a0, a1, a2);
    } __finally {
        _Print("OleRegGetMiscStatus(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleRegGetUserType(CONST IID& a0,
                                         DWORD a1,
                                         LPOLESTR* a2)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleRegGetUserType(a0, a1, a2);
    } __finally {
        _Print("OleRegGetUserType(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleRun(LPUNKNOWN a0)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleRun(a0);
    } __finally {
        _Print("OleRun(%p) -> %p", a0, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleSave(LPPERSISTSTORAGE a0,
                               LPSTORAGE a1,
                               BOOL a2)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleSave(a0, a1, a2);
    } __finally {
        _Print("OleSave(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleSaveToStream(IPersistStream* a0,
                                       LPSTREAM a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleSaveToStream(a0, a1);
    } __finally {
        _Print("OleSaveToStream(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleSetAutoConvert(CONST IID& a0,
                                         CONST IID& a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleSetAutoConvert(a0, a1);
    } __finally {
        _Print("OleSetAutoConvert(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleSetClipboard(IDataObject* a0)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleSetClipboard(a0);
    } __finally {
        _Print("OleSetClipboard(%p) -> %p", a0, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleSetContainedObject(LPUNKNOWN a0,
                                             BOOL a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleSetContainedObject(a0, a1);
    } __finally {
        _Print("OleSetContainedObject(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleSetMenuDescriptor(HOLEMENU a0,
                                            HWND a1,
                                            HWND a2,
                                            LPOLEINPLACEFRAME a3,
                                            LPOLEINPLACEACTIVEOBJECT a4)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleSetMenuDescriptor(a0, a1, a2, a3, a4);
    } __finally {
        _Print("OleSetMenuDescriptor(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_OleTranslateAccelerator(LPOLEINPLACEFRAME a0,
                                               LPOLEINPLACEFRAMEINFO a1,
                                               LPMSG a2)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_OleTranslateAccelerator(a0, a1, a2);
    } __finally {
        _Print("OleTranslateAccelerator(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

void __stdcall Mine_OleUninitialize(void)
{
    
    __try {
        Real_OleUninitialize();
    } __finally {
        _Print("OleUninitialize() ->");
    };
}

BOOL __stdcall Mine_OpenClipboard(HWND a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_OpenClipboard(a0);
    } __finally {
        _Print("OpenClipboard(%p) -> %p", a0, rv);
    };
    return rv;
}

#if _MSC_VER < 1300
HDESK __stdcall Mine_OpenDesktopA(LPSTR a0,
                                  DWORD a1,
                                  BOOL a2,
                                  ACCESS_MASK a3)
#else
HDESK __stdcall Mine_OpenDesktopA(LPCSTR a0,
                                  DWORD a1,
                                  BOOL a2,
                                  ACCESS_MASK a3)
#endif
{
    
    HDESK rv = 0;
    __try {
        rv = Real_OpenDesktopA(a0, a1, a2, a3);
    } __finally {
        _Print("OpenDesktopA(%hs,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

#if _MSC_VER < 1300
HDESK __stdcall Mine_OpenDesktopW(LPWSTR a0,
                                  DWORD a1,
                                  BOOL a2,
                                  ACCESS_MASK a3)
#else
HDESK __stdcall Mine_OpenDesktopW(LPCWSTR a0,
                                  DWORD a1,
                                  BOOL a2,
                                  ACCESS_MASK a3)
#endif
{
    
    HDESK rv = 0;
    __try {
        rv = Real_OpenDesktopW(a0, a1, a2, a3);
    } __finally {
        _Print("OpenDesktopW(%ls,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_OpenEventA(DWORD a0,
                                 BOOL a1,
                                 LPCSTR a2)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_OpenEventA(a0, a1, a2);
    } __finally {
        _Print("OpenEventA(%p,%p,%hs) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_OpenEventW(DWORD a0,
                                 BOOL a1,
                                 LPCWSTR a2)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_OpenEventW(a0, a1, a2);
    } __finally {
        _Print("OpenEventW(%p,%p,%ls) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HFILE __stdcall Mine_OpenFile(LPCSTR a0,
                              LPOFSTRUCT a1,
                              UINT a2)
{
    
    HFILE rv = 0;
    __try {
        rv = Real_OpenFile(a0, a1, a2);
    } __finally {
        _Print("OpenFile(%hs,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_OpenFileMappingA(DWORD a0,
                                       BOOL a1,
                                       LPCSTR a2)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_OpenFileMappingA(a0, a1, a2);
    } __finally {
        _Print("OpenFileMappingA(%p,%p,%hs) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_OpenFileMappingW(DWORD a0,
                                       BOOL a1,
                                       LPCWSTR a2)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_OpenFileMappingW(a0, a1, a2);
    } __finally {
        _Print("OpenFileMappingW(%p,%p,%ls) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_OpenIcon(HWND a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_OpenIcon(a0);
    } __finally {
        _Print("OpenIcon(%p) -> %p", a0, rv);
    };
    return rv;
}

HDESK __stdcall Mine_OpenInputDesktop(DWORD a0,
                                      BOOL a1,
                                      ACCESS_MASK a2)
{
    
    HDESK rv = 0;
    __try {
        rv = Real_OpenInputDesktop(a0, a1, a2);
    } __finally {
        _Print("OpenInputDesktop(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_OpenMutexA(DWORD a0,
                                 BOOL a1,
                                 LPCSTR a2)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_OpenMutexA(a0, a1, a2);
    } __finally {
        _Print("OpenMutexA(%p,%p,%hs) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_OpenMutexW(DWORD a0,
                                 BOOL a1,
                                 LPCWSTR a2)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_OpenMutexW(a0, a1, a2);
    } __finally {
        _Print("OpenMutexW(%p,%p,%ls) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_OpenProcess(DWORD a0,
                                  BOOL a1,
                                  DWORD pid)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_OpenProcess(a0, a1, pid);
    } __finally {
        _Print("OpenProcess(%p,%p,pid=%d) -> %p", a0, a1, pid, rv);
    };
    return rv;
}

BOOL __stdcall Mine_OpenProcessToken(__in   HANDLE ProcessHandle,
                                     __in   DWORD DesiredAccess,
                                     __out  PHANDLE TokenHandle
                                    )
{
    
    BOOL rv = 0;
    __try {
        rv = Real_OpenProcessToken(ProcessHandle,
                                   DesiredAccess,
                                   TokenHandle);

    } __finally {
        _Print("OpenProcessToken(%p,%p,%p) -> %p",
                ProcessHandle,
                DesiredAccess,
                TokenHandle, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_OpenSemaphoreA(DWORD a0,
                                     BOOL a1,
                                     LPCSTR a2)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_OpenSemaphoreA(a0, a1, a2);
    } __finally {
        _Print("OpenSemaphoreA(%p,%p,%hs) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_OpenSemaphoreW(DWORD a0,
                                     BOOL a1,
                                     LPCWSTR a2)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_OpenSemaphoreW(a0, a1, a2);
    } __finally {
        _Print("OpenSemaphoreW(%p,%p,%ls) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_OpenWaitableTimerA(DWORD a0,
                                         BOOL a1,
                                         LPCSTR a2)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_OpenWaitableTimerA(a0, a1, a2);
    } __finally {
        _Print("OpenWaitableTimerA(%p,%p,%hs) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_OpenWaitableTimerW(DWORD a0,
                                         BOOL a1,
                                         LPCWSTR a2)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_OpenWaitableTimerW(a0, a1, a2);
    } __finally {
        _Print("OpenWaitableTimerW(%p,%p,%ls) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

#if _MSC_VER < 1300
HWINSTA __stdcall Mine_OpenWindowStationA(LPSTR a0,
                                          BOOL a1,
                                          ACCESS_MASK a2)
#else
HWINSTA __stdcall Mine_OpenWindowStationA(LPCSTR a0,
                                          BOOL a1,
                                          ACCESS_MASK a2)
#endif
{
    
    HWINSTA rv = 0;
    __try {
        rv = Real_OpenWindowStationA(a0, a1, a2);
    } __finally {
        _Print("OpenWindowStationA(%hs,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

#if _MSC_VER < 1300
HWINSTA __stdcall Mine_OpenWindowStationW(LPWSTR a0,
                                          BOOL a1,
                                          ACCESS_MASK a2)
#else
HWINSTA __stdcall Mine_OpenWindowStationW(LPCWSTR a0,
                                          BOOL a1,
                                          ACCESS_MASK a2)
#endif
{
    
    HWINSTA rv = 0;
    __try {
        rv = Real_OpenWindowStationW(a0, a1, a2);
    } __finally {
        _Print("OpenWindowStationW(%ls,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

void __stdcall Mine_OutputDebugStringA(LPCSTR a0)
{
    
    __try {
        Real_OutputDebugStringA(a0);
    } __finally {
        _Print("OutputDebugStringA(%hs) ->", a0);
    };
}

void __stdcall Mine_OutputDebugStringW(LPCWSTR a0)
{
    
    __try {
        Real_OutputDebugStringW(a0);
    } __finally {
        _Print("OutputDebugStringW(%ls) ->", a0);
    };
}

LPARAM __stdcall Mine_PackDDElParam(UINT a0,
                                    UINT_PTR a1,
                                    UINT_PTR a2)
{
    
    LPARAM rv = 0;
    __try {
        rv = Real_PackDDElParam(a0, a1, a2);
    } __finally {
        _Print("PackDDElParam(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PaintDesktop(HDC a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PaintDesktop(a0);
    } __finally {
        _Print("PaintDesktop(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PaintRgn(HDC a0,
                             HRGN a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PaintRgn(a0, a1);
    } __finally {
        _Print("PaintRgn(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PatBlt(HDC a0,
                           int a1,
                           int a2,
                           int a3,
                           int a4,
                           DWORD a5)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PatBlt(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("PatBlt(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

HRGN __stdcall Mine_PathToRegion(HDC a0)
{
    
    HRGN rv = 0;
    __try {
        rv = Real_PathToRegion(a0);
    } __finally {
        _Print("PathToRegion(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PeekConsoleInputA(HANDLE a0,
                                      PINPUT_RECORD a1,
                                      DWORD a2,
                                      LPDWORD a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PeekConsoleInputA(a0, a1, a2, a3);
    } __finally {
        _Print("PeekConsoleInputA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PeekConsoleInputW(HANDLE a0,
                                      PINPUT_RECORD a1,
                                      DWORD a2,
                                      LPDWORD a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PeekConsoleInputW(a0, a1, a2, a3);
    } __finally {
        _Print("PeekConsoleInputW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PeekMessageA(LPMSG a0,
                                 HWND a1,
                                 UINT a2,
                                 UINT a3,
                                 UINT a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PeekMessageA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("PeekMessageA(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PeekMessageW(LPMSG a0,
                                 HWND a1,
                                 UINT a2,
                                 UINT a3,
                                 UINT a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PeekMessageW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("PeekMessageW(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PeekNamedPipe(HANDLE a0,
                                  LPVOID a1,
                                  DWORD a2,
                                  LPDWORD a3,
                                  LPDWORD a4,
                                  LPDWORD a5)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PeekNamedPipe(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("PeekNamedPipe(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

BOOL __stdcall Mine_Pie(HDC a0,
                        int a1,
                        int a2,
                        int a3,
                        int a4,
                        int a5,
                        int a6,
                        int a7,
                        int a8)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_Pie(a0, a1, a2, a3, a4, a5, a6, a7, a8);
    } __finally {
        _Print("Pie(%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PlayEnhMetaFile(HDC a0,
                                    HENHMETAFILE a1,
                                    RECT* a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PlayEnhMetaFile(a0, a1, a2);
    } __finally {
        _Print("PlayEnhMetaFile(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PlayEnhMetaFileRecord(HDC a0,
                                          LPHANDLETABLE a1,
                                          ENHMETARECORD* a2,
                                          UINT a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PlayEnhMetaFileRecord(a0, a1, a2, a3);
    } __finally {
        _Print("PlayEnhMetaFileRecord(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PlayMetaFile(HDC a0,
                                 HMETAFILE a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PlayMetaFile(a0, a1);
    } __finally {
        _Print("PlayMetaFile(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PlayMetaFileRecord(HDC a0,
                                       LPHANDLETABLE a1,
                                       LPMETARECORD a2,
                                       UINT a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PlayMetaFileRecord(a0, a1, a2, a3);
    } __finally {
        _Print("PlayMetaFileRecord(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PlgBlt(HDC a0,
                           POINT* a1,
                           HDC a2,
                           int a3,
                           int a4,
                           int a5,
                           int a6,
                           HBITMAP a7,
                           int a8,
                           int a9)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PlgBlt(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    } __finally {
        _Print("PlgBlt(%p,%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PolyBezier(HDC a0,
                               POINT* a1,
                               DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PolyBezier(a0, a1, a2);
    } __finally {
        _Print("PolyBezier(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PolyBezierTo(HDC a0,
                                 POINT* a1,
                                 DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PolyBezierTo(a0, a1, a2);
    } __finally {
        _Print("PolyBezierTo(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PolyDraw(HDC a0,
                             POINT* a1,
                             BYTE* a2,
                             int a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PolyDraw(a0, a1, a2, a3);
    } __finally {
        _Print("PolyDraw(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PolyPolygon(HDC a0,
                                POINT* a1,
                                INT* a2,
                                int a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PolyPolygon(a0, a1, a2, a3);
    } __finally {
        _Print("PolyPolygon(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PolyPolyline(HDC a0,
                                 POINT* a1,
                                 DWORD* a2,
                                 DWORD a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PolyPolyline(a0, a1, a2, a3);
    } __finally {
        _Print("PolyPolyline(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PolyTextOutA(HDC a0,
                                 POLYTEXTA* a1,
                                 int a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PolyTextOutA(a0, a1, a2);
    } __finally {
        _Print("PolyTextOutA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PolyTextOutW(HDC a0,
                                 POLYTEXTW* a1,
                                 int a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PolyTextOutW(a0, a1, a2);
    } __finally {
        _Print("PolyTextOutW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_Polygon(HDC a0,
                            POINT* a1,
                            int a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_Polygon(a0, a1, a2);
    } __finally {
        _Print("Polygon(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_Polyline(HDC a0,
                             POINT* a1,
                             int a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_Polyline(a0, a1, a2);
    } __finally {
        _Print("Polyline(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PolylineTo(HDC a0,
                               POINT* a1,
                               DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PolylineTo(a0, a1, a2);
    } __finally {
        _Print("PolylineTo(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PostMessageA(HWND a0,
                                 UINT a1,
                                 WPARAM a2,
                                 LPARAM a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PostMessageA(a0, a1, a2, a3);
    } __finally {
        _Print("PostMessageA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PostMessageW(HWND a0,
                                 UINT a1,
                                 WPARAM a2,
                                 LPARAM a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PostMessageW(a0, a1, a2, a3);
    } __finally {
        _Print("PostMessageW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PostQueuedCompletionStatus(HANDLE a0,
                                               DWORD a1,
                                               ULONG_PTR a2,
                                               LPOVERLAPPED a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PostQueuedCompletionStatus(a0, a1, a2, a3);
    } __finally {
        _Print("PostQueuedCompletionStatus(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

void __stdcall Mine_PostQuitMessage(int a0)
{
    
    __try {
        Real_PostQuitMessage(a0);
    } __finally {
        _Print("PostQuitMessage(%p) ->", a0);
    };
}

BOOL __stdcall Mine_PostThreadMessageA(DWORD a0,
                                       UINT a1,
                                       WPARAM a2,
                                       LPARAM a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PostThreadMessageA(a0, a1, a2, a3);
    } __finally {
        _Print("PostThreadMessageA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PostThreadMessageW(DWORD a0,
                                       UINT a1,
                                       WPARAM a2,
                                       LPARAM a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PostThreadMessageW(a0, a1, a2, a3);
    } __finally {
        _Print("PostThreadMessageW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

DWORD __stdcall Mine_PrepareTape(HANDLE a0,
                                 DWORD a1,
                                 BOOL a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_PrepareTape(a0, a1, a2);
    } __finally {
        _Print("PrepareTape(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_ProgIDFromCLSID(CONST IID& a0,
                                       LPOLESTR* a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_ProgIDFromCLSID(a0, a1);
    } __finally {
        _Print("ProgIDFromCLSID(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_PropVariantClear(PROPVARIANT* a0)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_PropVariantClear(a0);
    } __finally {
        _Print("PropVariantClear(%p) -> %p", a0, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_PropVariantCopy(PROPVARIANT* a0,
                                       PROPVARIANT* a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_PropVariantCopy(a0, a1);
    } __finally {
        _Print("PropVariantCopy(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PtInRect(RECT* a0,
                             POINT a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PtInRect(a0, a1);
    } __finally {
        _Print("PtInRect(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PtInRegion(HRGN a0,
                               int a1,
                               int a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PtInRegion(a0, a1, a2);
    } __finally {
        _Print("PtInRegion(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PtVisible(HDC a0,
                              int a1,
                              int a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PtVisible(a0, a1, a2);
    } __finally {
        _Print("PtVisible(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PulseEvent(HANDLE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PulseEvent(a0);
    } __finally {
        _Print("PulseEvent(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_PurgeComm(HANDLE a0,
                              DWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_PurgeComm(a0, a1);
    } __finally {
        _Print("PurgeComm(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_QueryDosDeviceA(LPCSTR a0,
                                     LPSTR a1,
                                     DWORD a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_QueryDosDeviceA(a0, a1, a2);
    } __finally {
        _Print("QueryDosDeviceA(%hs,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_QueryDosDeviceW(LPCWSTR a0,
                                     LPWSTR a1,
                                     DWORD a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_QueryDosDeviceW(a0, a1, a2);
    } __finally {
        _Print("QueryDosDeviceW(%ls,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_QueryPerformanceCounter(LARGE_INTEGER* a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_QueryPerformanceCounter(a0);
    } __finally {
        _Print("QueryPerformanceCounter(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_QueryPerformanceFrequency(LARGE_INTEGER* a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_QueryPerformanceFrequency(a0);
    } __finally {
        _Print("QueryPerformanceFrequency(%p) -> %p", a0, rv);
    };
    return rv;
}

DWORD __stdcall Mine_QueueUserAPC(PAPCFUNC a0,
                                  HANDLE a1,
                                  ULONG_PTR a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_QueueUserAPC(a0, a1, a2);
    } __finally {
        _Print("QueueUserAPC(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

void __stdcall Mine_RaiseException(DWORD a0,
                                   DWORD a1,
                                   DWORD a2,
                                   ULONG_PTR* a3)
{
    
    __try {
        Real_RaiseException(a0, a1, a2, a3);
    } __finally {
        _Print("RaiseException(%p,%p,%p,%p) ->", a0, a1, a2, a3);
    };
}

HRESULT __stdcall Mine_ReadClassStg(LPSTORAGE a0,
                                    CLSID* a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_ReadClassStg(a0, a1);
    } __finally {
        _Print("ReadClassStg(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_ReadClassStm(LPSTREAM a0,
                                    CLSID* a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_ReadClassStm(a0, a1);
    } __finally {
        _Print("ReadClassStm(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ReadConsoleA(
                                 HANDLE a0,
                                 LPVOID a1,
                                 DWORD a2,
                                 LPDWORD a3,
#ifdef ENABLE_INSERT_MODE
                                 PCONSOLE_READCONSOLE_CONTROL a4
#else
                                 LPVOID a4
#endif
                                )
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ReadConsoleA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("ReadConsoleA(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ReadConsoleInputA(HANDLE a0,
                                      PINPUT_RECORD a1,
                                      DWORD a2,
                                      LPDWORD a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ReadConsoleInputA(a0, a1, a2, a3);
    } __finally {
        _Print("ReadConsoleInputA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ReadConsoleInputW(HANDLE a0,
                                      PINPUT_RECORD a1,
                                      DWORD a2,
                                      LPDWORD a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ReadConsoleInputW(a0, a1, a2, a3);
    } __finally {
        _Print("ReadConsoleInputW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ReadConsoleOutputA(HANDLE a0,
                                       PCHAR_INFO a1,
                                       COORD a2,
                                       COORD a3,
                                       PSMALL_RECT a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ReadConsoleOutputA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("ReadConsoleOutputA(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ReadConsoleOutputAttribute(HANDLE a0,
                                               LPWORD a1,
                                               DWORD a2,
                                               COORD a3,
                                               LPDWORD a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ReadConsoleOutputAttribute(a0, a1, a2, a3, a4);
    } __finally {
        _Print("ReadConsoleOutputAttribute(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ReadConsoleOutputCharacterA(HANDLE a0,
                                                LPSTR a1,
                                                DWORD a2,
                                                COORD a3,
                                                LPDWORD a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ReadConsoleOutputCharacterA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("ReadConsoleOutputCharacterA(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ReadConsoleOutputCharacterW(HANDLE a0,
                                                LPWSTR a1,
                                                DWORD a2,
                                                COORD a3,
                                                LPDWORD a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ReadConsoleOutputCharacterW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("ReadConsoleOutputCharacterW(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ReadConsoleOutputW(HANDLE a0,
                                       PCHAR_INFO a1,
                                       COORD a2,
                                       COORD a3,
                                       PSMALL_RECT a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ReadConsoleOutputW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("ReadConsoleOutputW(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ReadConsoleW(
                                 HANDLE a0,
                                 LPVOID a1,
                                 DWORD a2,
                                 LPDWORD a3,
#ifdef ENABLE_INSERT_MODE
                                 PCONSOLE_READCONSOLE_CONTROL a4
#else
                                 LPVOID a4
#endif
                                )
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ReadConsoleW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("ReadConsoleW(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ReadDirectoryChangesW(HANDLE a0,
                                          LPVOID a1,
                                          DWORD a2,
                                          BOOL a3,
                                          DWORD a4,
                                          LPDWORD a5,
                                          LPOVERLAPPED a6,
                                          LPOVERLAPPED_COMPLETION_ROUTINE a7)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ReadDirectoryChangesW(a0, a1, a2, a3, a4, a5, a6, a7);
    } __finally {
        _Print("ReadDirectoryChangesW(%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ReadFile(HANDLE a0,
                             LPVOID a1,
                             DWORD a2,
                             LPDWORD a3,
                             LPOVERLAPPED a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ReadFile(a0, a1, a2, a3, a4);
    } __finally {
        _Print("ReadFile(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ReadFileEx(HANDLE a0,
                               LPVOID a1,
                               DWORD a2,
                               LPOVERLAPPED a3,
                               LPOVERLAPPED_COMPLETION_ROUTINE a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ReadFileEx(a0, a1, a2, a3, a4);
    } __finally {
        _Print("ReadFileEx(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_ReadFmtUserTypeStg(LPSTORAGE a0,
                                          CLIPFORMAT* a1,
                                          LPOLESTR* a2)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_ReadFmtUserTypeStg(a0, a1, a2);
    } __finally {
        _Print("ReadFmtUserTypeStg(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ReadProcessMemory(HANDLE a0,
                                      LPCVOID lpBase,
                                      LPVOID lpBuf,
                                      DWORD_PTR nSize,
                                      PDWORD_PTR a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ReadProcessMemory(a0, lpBase, lpBuf, nSize, a4);
    } __finally {
        _Print("ReadProcessMemory(%p,@%p..%p,%p,%p) -> %p",
                a0, lpBase,
                (PBYTE)lpBase + ((nSize > 0) ? nSize - 1 : 0),
                lpBuf, a4, rv);
    };
    return rv;
}

UINT __stdcall Mine_RealizePalette(HDC a0)
{
    
    UINT rv = 0;
    __try {
        rv = Real_RealizePalette(a0);
    } __finally {
        _Print("RealizePalette(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_RectInRegion(HRGN a0,
                                 RECT* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_RectInRegion(a0, a1);
    } __finally {
        _Print("RectInRegion(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_RectVisible(HDC a0,
                                RECT* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_RectVisible(a0, a1);
    } __finally {
        _Print("RectVisible(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_Rectangle(HDC a0,
                              int a1,
                              int a2,
                              int a3,
                              int a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_Rectangle(a0, a1, a2, a3, a4);
    } __finally {
        _Print("Rectangle(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_RedrawWindow(HWND a0,
                                 RECT* a1,
                                 HRGN a2,
                                 UINT a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_RedrawWindow(a0, a1, a2, a3);
    } __finally {
        _Print("RedrawWindow(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

ATOM __stdcall Mine_RegisterClassA(WNDCLASSA* a0)
{
    
    ATOM rv = 0;
    __try {
        rv = Real_RegisterClassA(a0);
    } __finally {
        _Print("RegisterClassA(%p) -> %p", a0, rv);
    };
    return rv;
}

ATOM __stdcall Mine_RegisterClassExA(WNDCLASSEXA* a0)
{
    
    ATOM rv = 0;
    __try {
        rv = Real_RegisterClassExA(a0);
    } __finally {
        _Print("RegisterClassExA(%p) -> %p", a0, rv);
    };
    return rv;
}

ATOM __stdcall Mine_RegisterClassExW(WNDCLASSEXW* a0)
{
    
    ATOM rv = 0;
    __try {
        rv = Real_RegisterClassExW(a0);
    } __finally {
        _Print("RegisterClassExW(%p) -> %p", a0, rv);
    };
    return rv;
}

ATOM __stdcall Mine_RegisterClassW(WNDCLASSW* a0)
{
    
    ATOM rv = 0;
    __try {
        rv = Real_RegisterClassW(a0);
    } __finally {
        _Print("RegisterClassW(%p) -> %p", a0, rv);
    };
    return rv;
}

UINT __stdcall Mine_RegisterClipboardFormatA(LPCSTR a0)
{
    
    UINT rv = 0;
    __try {
        rv = Real_RegisterClipboardFormatA(a0);
    } __finally {
        _Print("RegisterClipboardFormatA(%hs) -> %p", a0, rv);
    };
    return rv;
}

UINT __stdcall Mine_RegisterClipboardFormatW(LPCWSTR a0)
{
    
    UINT rv = 0;
    __try {
        rv = Real_RegisterClipboardFormatW(a0);
    } __finally {
        _Print("RegisterClipboardFormatW(%ls) -> %p", a0, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_RegisterDragDrop(HWND a0,
                                        IDropTarget* a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_RegisterDragDrop(a0, a1);
    } __finally {
        _Print("RegisterDragDrop(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_RegisterHotKey(HWND a0,
                                   int a1,
                                   UINT a2,
                                   UINT a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_RegisterHotKey(a0, a1, a2, a3);
    } __finally {
        _Print("RegisterHotKey(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

UINT __stdcall Mine_RegisterWindowMessageA(LPCSTR a0)
{
    
    UINT rv = 0;
    __try {
        rv = Real_RegisterWindowMessageA(a0);
    } __finally {
        _Print("RegisterWindowMessageA(%hs) -> %p", a0, rv);
    };
    return rv;
}

UINT __stdcall Mine_RegisterWindowMessageW(LPCWSTR a0)
{
    
    UINT rv = 0;
    __try {
        rv = Real_RegisterWindowMessageW(a0);
    } __finally {
        _Print("RegisterWindowMessageW(%ls) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ReleaseCapture(void)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ReleaseCapture();
    } __finally {
        _Print("ReleaseCapture() -> %p", rv);
    };
    return rv;
}

int __stdcall Mine_ReleaseDC(HWND a0,
                             HDC a1)
{
    
    int rv = 0;
    __try {
        rv = Real_ReleaseDC(a0, a1);
    } __finally {
        _Print("ReleaseDC(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ReleaseMutex(HANDLE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ReleaseMutex(a0);
    } __finally {
        _Print("ReleaseMutex(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ReleaseSemaphore(HANDLE a0,
                                     LONG a1,
                                     LPLONG a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ReleaseSemaphore(a0, a1, a2);
    } __finally {
        _Print("ReleaseSemaphore(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

void __stdcall Mine_ReleaseStgMedium(LPSTGMEDIUM a0)
{
    
    __try {
        Real_ReleaseStgMedium(a0);
    } __finally {
        _Print("ReleaseStgMedium(%p) ->", a0);
    };
}

BOOL __stdcall Mine_RemoveDirectoryA(LPCSTR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_RemoveDirectoryA(a0);
    } __finally {
        _Print("RemoveDirectoryA(%hs) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_RemoveDirectoryW(LPCWSTR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_RemoveDirectoryW(a0);
    } __finally {
        _Print("RemoveDirectoryW(%ls) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_RemoveFontResourceA(LPCSTR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_RemoveFontResourceA(a0);
    } __finally {
        _Print("RemoveFontResourceA(%hs) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_RemoveFontResourceW(LPCWSTR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_RemoveFontResourceW(a0);
    } __finally {
        _Print("RemoveFontResourceW(%ls) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_RemoveMenu(HMENU a0,
                               UINT a1,
                               UINT a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_RemoveMenu(a0, a1, a2);
    } __finally {
        _Print("RemoveMenu(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_RemovePropA(HWND a0,
                                  LPCSTR a1)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_RemovePropA(a0, a1);
    } __finally {
        _Print("RemovePropA(%p,%hs) -> %p", a0, a1, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_RemovePropW(HWND a0,
                                  LPCWSTR a1)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_RemovePropW(a0, a1);
    } __finally {
        _Print("RemovePropW(%p,%ls) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ReplyMessage(LRESULT a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ReplyMessage(a0);
    } __finally {
        _Print("ReplyMessage(%p) -> %p", a0, rv);
    };
    return rv;
}

HDC __stdcall Mine_ResetDCA(HDC a0,
                            CONST DEVMODEA* a1)
{
    
    HDC rv = 0;
    __try {
        rv = Real_ResetDCA(a0, a1);
    } __finally {
        _Print("ResetDCA(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HDC __stdcall Mine_ResetDCW(HDC a0,
                            CONST DEVMODEW* a1)
{
    
    HDC rv = 0;
    __try {
        rv = Real_ResetDCW(a0, a1);
    } __finally {
        _Print("ResetDCW(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ResetEvent(HANDLE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ResetEvent(a0);
    } __finally {
        _Print("ResetEvent(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ResizePalette(HPALETTE a0,
                                  UINT a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ResizePalette(a0, a1);
    } __finally {
        _Print("ResizePalette(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_RestoreDC(HDC a0,
                              int a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_RestoreDC(a0, a1);
    } __finally {
        _Print("RestoreDC(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_ResumeThread(HANDLE a0)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_ResumeThread(a0);
    } __finally {
        _Print("ResumeThread(%p) -> %p", a0, rv);
    };
    return rv;
}

LPARAM __stdcall Mine_ReuseDDElParam(LPARAM a0,
                                     UINT a1,
                                     UINT a2,
                                     UINT_PTR a3,
                                     UINT_PTR a4)
{
    
    LPARAM rv = 0;
    __try {
        rv = Real_ReuseDDElParam(a0, a1, a2, a3, a4);
    } __finally {
        _Print("ReuseDDElParam(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_RevokeDragDrop(HWND a0)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_RevokeDragDrop(a0);
    } __finally {
        _Print("RevokeDragDrop(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_RoundRect(HDC a0,
                              int a1,
                              int a2,
                              int a3,
                              int a4,
                              int a5,
                              int a6)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_RoundRect(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("RoundRect(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

int __stdcall Mine_SaveDC(HDC a0)
{
    
    int rv = 0;
    __try {
        rv = Real_SaveDC(a0);
    } __finally {
        _Print("SaveDC(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ScaleViewportExtEx(HDC a0,
                                       int a1,
                                       int a2,
                                       int a3,
                                       int a4,
                                       SIZE* a5)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ScaleViewportExtEx(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("ScaleViewportExtEx(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ScaleWindowExtEx(HDC a0,
                                     int a1,
                                     int a2,
                                     int a3,
                                     int a4,
                                     SIZE* a5)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ScaleWindowExtEx(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("ScaleWindowExtEx(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ScreenToClient(HWND a0,
                                   POINT* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ScreenToClient(a0, a1);
    } __finally {
        _Print("ScreenToClient(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ScrollConsoleScreenBufferA(HANDLE a0,
                                               SMALL_RECT* a1,
                                               SMALL_RECT* a2,
                                               COORD a3,
                                               CHAR_INFO* a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ScrollConsoleScreenBufferA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("ScrollConsoleScreenBufferA(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ScrollConsoleScreenBufferW(HANDLE a0,
                                               SMALL_RECT* a1,
                                               SMALL_RECT* a2,
                                               COORD a3,
                                               CHAR_INFO* a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ScrollConsoleScreenBufferW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("ScrollConsoleScreenBufferW(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ScrollDC(HDC a0,
                             int a1,
                             int a2,
                             RECT* a3,
                             RECT* a4,
                             HRGN a5,
                             LPRECT a6)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ScrollDC(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("ScrollDC(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ScrollWindow(HWND a0,
                                 int a1,
                                 int a2,
                                 RECT* a3,
                                 RECT* a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ScrollWindow(a0, a1, a2, a3, a4);
    } __finally {
        _Print("ScrollWindow(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_ScrollWindowEx(HWND a0,
                                  int a1,
                                  int a2,
                                  RECT* a3,
                                  RECT* a4,
                                  HRGN a5,
                                  LPRECT a6,
                                  UINT a7)
{
    
    int rv = 0;
    __try {
        rv = Real_ScrollWindowEx(a0, a1, a2, a3, a4, a5, a6, a7);
    } __finally {
        _Print("ScrollWindowEx(%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, rv);
    };
    return rv;
}

DWORD __stdcall Mine_SearchPathA(LPCSTR a0,
                                 LPCSTR a1,
                                 LPCSTR a2,
                                 DWORD a3,
                                 LPSTR a4,
                                 LPSTR* a5)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_SearchPathA(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("SearchPathA(%hs,%hs,%hs,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

DWORD __stdcall Mine_SearchPathW(LPCWSTR a0,
                                 LPCWSTR a1,
                                 LPCWSTR a2,
                                 DWORD a3,
                                 LPWSTR a4,
                                 LPWSTR* a5)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_SearchPathW(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("SearchPathW(%ls,%ls,%ls,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SelectClipPath(HDC a0,
                                   int a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SelectClipPath(a0, a1);
    } __finally {
        _Print("SelectClipPath(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_SelectClipRgn(HDC a0,
                                 HRGN a1)
{
    
    int rv = 0;
    __try {
        rv = Real_SelectClipRgn(a0, a1);
    } __finally {
        _Print("SelectClipRgn(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HGDIOBJ __stdcall Mine_SelectObject(HDC a0,
                                    HGDIOBJ a1)
{
    
    HGDIOBJ rv = 0;
    __try {
        rv = Real_SelectObject(a0, a1);
    } __finally {
        _Print("SelectObject(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HPALETTE __stdcall Mine_SelectPalette(HDC a0,
                                      HPALETTE a1,
                                      BOOL a2)
{
    
    HPALETTE rv = 0;
    __try {
        rv = Real_SelectPalette(a0, a1, a2);
    } __finally {
        _Print("SelectPalette(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

LRESULT __stdcall Mine_SendDlgItemMessageA(HWND a0,
                                           int a1,
                                           UINT a2,
                                           WPARAM a3,
                                           LPARAM a4)
{
    
    LRESULT rv = 0;
    __try {
        rv = Real_SendDlgItemMessageA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("SendDlgItemMessageA(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

LRESULT __stdcall Mine_SendDlgItemMessageW(HWND a0,
                                           int a1,
                                           UINT a2,
                                           WPARAM a3,
                                           LPARAM a4)
{
    
    LRESULT rv = 0;
    __try {
        rv = Real_SendDlgItemMessageW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("SendDlgItemMessageW(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

LRESULT __stdcall Mine_SendMessageA(HWND a0,
                                    UINT a1,
                                    WPARAM a2,
                                    LPARAM a3)
{
    
    LRESULT rv = 0;
    __try {
        rv = Real_SendMessageA(a0, a1, a2, a3);
    } __finally {
        _Print("SendMessageA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SendMessageCallbackA(HWND a0,
                                         UINT a1,
                                         WPARAM a2,
                                         LPARAM a3,
                                         SENDASYNCPROC a4,
                                         ULONG_PTR a5)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SendMessageCallbackA(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("SendMessageCallbackA(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SendMessageCallbackW(HWND a0,
                                         UINT a1,
                                         WPARAM a2,
                                         LPARAM a3,
                                         SENDASYNCPROC a4,
                                         ULONG_PTR a5)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SendMessageCallbackW(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("SendMessageCallbackW(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

LRESULT __stdcall Mine_SendMessageTimeoutA(HWND a0,
                                           UINT a1,
                                           WPARAM a2,
                                           LPARAM a3,
                                           UINT a4,
                                           UINT a5,
                                           PULONG_PTR a6)
{
    
    LRESULT rv = 0;
    __try {
        rv = Real_SendMessageTimeoutA(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("SendMessageTimeoutA(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

LRESULT __stdcall Mine_SendMessageTimeoutW(HWND a0,
                                           UINT a1,
                                           WPARAM a2,
                                           LPARAM a3,
                                           UINT a4,
                                           UINT a5,
                                           PULONG_PTR a6)
{
    
    LRESULT rv = 0;
    __try {
        rv = Real_SendMessageTimeoutW(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("SendMessageTimeoutW(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

LRESULT __stdcall Mine_SendMessageW(HWND a0,
                                    UINT a1,
                                    WPARAM a2,
                                    LPARAM a3)
{
    
    LRESULT rv = 0;
    __try {
        rv = Real_SendMessageW(a0, a1, a2, a3);
    } __finally {
        _Print("SendMessageW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SendNotifyMessageA(HWND a0,
                                       UINT a1,
                                       WPARAM a2,
                                       LPARAM a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SendNotifyMessageA(a0, a1, a2, a3);
    } __finally {
        _Print("SendNotifyMessageA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SendNotifyMessageW(HWND a0,
                                       UINT a1,
                                       WPARAM a2,
                                       LPARAM a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SendNotifyMessageW(a0, a1, a2, a3);
    } __finally {
        _Print("SendNotifyMessageW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

int __stdcall Mine_SetAbortProc(HDC a0,
                                ABORTPROC a1)
{
    
    int rv = 0;
    __try {
        rv = Real_SetAbortProc(a0, a1);
    } __finally {
        _Print("SetAbortProc(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HWND __stdcall Mine_SetActiveWindow(HWND a0)
{
    
    HWND rv = 0;
    __try {
        rv = Real_SetActiveWindow(a0);
    } __finally {
        _Print("SetActiveWindow(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_SetArcDirection(HDC a0,
                                   int a1)
{
    
    int rv = 0;
    __try {
        rv = Real_SetArcDirection(a0, a1);
    } __finally {
        _Print("SetArcDirection(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

LONG __stdcall Mine_SetBitmapBits(HBITMAP a0,
                                  DWORD a1,
                                  void* a2)
{
    
    LONG rv = 0;
    __try {
        rv = Real_SetBitmapBits(a0, a1, a2);
    } __finally {
        _Print("SetBitmapBits(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetBitmapDimensionEx(HBITMAP a0,
                                         int a1,
                                         int a2,
                                         SIZE* a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetBitmapDimensionEx(a0, a1, a2, a3);
    } __finally {
        _Print("SetBitmapDimensionEx(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

COLORREF __stdcall Mine_SetBkColor(HDC a0,
                                   COLORREF a1)
{
    
    COLORREF rv = 0;
    __try {
        rv = Real_SetBkColor(a0, a1);
    } __finally {
        _Print("SetBkColor(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_SetBkMode(HDC a0,
                             int a1)
{
    
    int rv = 0;
    __try {
        rv = Real_SetBkMode(a0, a1);
    } __finally {
        _Print("SetBkMode(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

UINT __stdcall Mine_SetBoundsRect(HDC a0,
                                  RECT* a1,
                                  UINT a2)
{
    
    UINT rv = 0;
    __try {
        rv = Real_SetBoundsRect(a0, a1, a2);
    } __finally {
        _Print("SetBoundsRect(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetBrushOrgEx(HDC a0,
                                  int a1,
                                  int a2,
                                  POINT* a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetBrushOrgEx(a0, a1, a2, a3);
    } __finally {
        _Print("SetBrushOrgEx(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HWND __stdcall Mine_SetCapture(HWND a0)
{
    
    HWND rv = 0;
    __try {
        rv = Real_SetCapture(a0);
    } __finally {
        _Print("SetCapture(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetCaretBlinkTime(UINT a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetCaretBlinkTime(a0);
    } __finally {
        _Print("SetCaretBlinkTime(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetCaretPos(int a0,
                                int a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetCaretPos(a0, a1);
    } __finally {
        _Print("SetCaretPos(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_SetClassLongA(HWND a0,
                                   int a1,
                                   LONG a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_SetClassLongA(a0, a1, a2);
    } __finally {
        _Print("SetClassLongA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_SetClassLongW(HWND a0,
                                   int a1,
                                   LONG a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_SetClassLongW(a0, a1, a2);
    } __finally {
        _Print("SetClassLongW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

WORD __stdcall Mine_SetClassWord(HWND a0,
                                 int a1,
                                 WORD a2)
{
    
    WORD rv = 0;
    __try {
        rv = Real_SetClassWord(a0, a1, a2);
    } __finally {
        _Print("SetClassWord(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_SetClipboardData(UINT a0,
                                       HANDLE a1)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_SetClipboardData(a0, a1);
    } __finally {
        _Print("SetClipboardData(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HWND __stdcall Mine_SetClipboardViewer(HWND a0)
{
    
    HWND rv = 0;
    __try {
        rv = Real_SetClipboardViewer(a0);
    } __finally {
        _Print("SetClipboardViewer(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetColorAdjustment(HDC a0,
                                       COLORADJUSTMENT* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetColorAdjustment(a0, a1);
    } __finally {
        _Print("SetColorAdjustment(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HCOLORSPACE __stdcall Mine_SetColorSpace(HDC a0,
                                         HCOLORSPACE a1)
{
    
    HCOLORSPACE rv = 0;
    __try {
        rv = Real_SetColorSpace(a0, a1);
    } __finally {
        _Print("SetColorSpace(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetCommBreak(HANDLE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetCommBreak(a0);
    } __finally {
        _Print("SetCommBreak(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetCommConfig(HANDLE a0,
                                  LPCOMMCONFIG a1,
                                  DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetCommConfig(a0, a1, a2);
    } __finally {
        _Print("SetCommConfig(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetCommMask(HANDLE a0,
                                DWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetCommMask(a0, a1);
    } __finally {
        _Print("SetCommMask(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetCommState(HANDLE a0,
                                 LPDCB a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetCommState(a0, a1);
    } __finally {
        _Print("SetCommState(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetCommTimeouts(HANDLE a0,
                                    LPCOMMTIMEOUTS a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetCommTimeouts(a0, a1);
    } __finally {
        _Print("SetCommTimeouts(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetComputerNameA(LPCSTR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetComputerNameA(a0);
    } __finally {
        _Print("SetComputerNameA(%hs) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetComputerNameW(LPCWSTR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetComputerNameW(a0);
    } __finally {
        _Print("SetComputerNameW(%ls) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetConsoleActiveScreenBuffer(HANDLE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetConsoleActiveScreenBuffer(a0);
    } __finally {
        _Print("SetConsoleActiveScreenBuffer(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetConsoleCP(UINT a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetConsoleCP(a0);
    } __finally {
        _Print("SetConsoleCP(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetConsoleCtrlHandler(PHANDLER_ROUTINE a0,
                                          BOOL a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetConsoleCtrlHandler(a0, a1);
    } __finally {
        _Print("SetConsoleCtrlHandler(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetConsoleCursorInfo(HANDLE a0,
                                         CONSOLE_CURSOR_INFO* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetConsoleCursorInfo(a0, a1);
    } __finally {
        _Print("SetConsoleCursorInfo(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetConsoleCursorPosition(HANDLE a0,
                                             COORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetConsoleCursorPosition(a0, a1);
    } __finally {
        _Print("SetConsoleCursorPosition(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetConsoleMode(HANDLE a0,
                                   DWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetConsoleMode(a0, a1);
    } __finally {
        _Print("SetConsoleMode(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetConsoleOutputCP(UINT a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetConsoleOutputCP(a0);
    } __finally {
        _Print("SetConsoleOutputCP(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetConsoleScreenBufferSize(HANDLE a0,
                                               COORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetConsoleScreenBufferSize(a0, a1);
    } __finally {
        _Print("SetConsoleScreenBufferSize(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetConsoleTextAttribute(HANDLE a0,
                                            WORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetConsoleTextAttribute(a0, a1);
    } __finally {
        _Print("SetConsoleTextAttribute(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetConsoleTitleA(LPCSTR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetConsoleTitleA(a0);
    } __finally {
        _Print("SetConsoleTitleA(%hs) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetConsoleTitleW(LPCWSTR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetConsoleTitleW(a0);
    } __finally {
        _Print("SetConsoleTitleW(%ls) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetConsoleWindowInfo(HANDLE a0,
                                         BOOL a1,
                                         SMALL_RECT* a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetConsoleWindowInfo(a0, a1, a2);
    } __finally {
        _Print("SetConsoleWindowInfo(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_SetConvertStg(LPSTORAGE a0,
                                     BOOL a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_SetConvertStg(a0, a1);
    } __finally {
        _Print("SetConvertStg(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetCurrentDirectoryA(LPCSTR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetCurrentDirectoryA(a0);
    } __finally {
        _Print("SetCurrentDirectoryA(%hs) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetCurrentDirectoryW(LPCWSTR a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetCurrentDirectoryW(a0);
    } __finally {
        _Print("SetCurrentDirectoryW(%ls) -> %p", a0, rv);
    };
    return rv;
}

HCURSOR __stdcall Mine_SetCursor(HCURSOR a0)
{
    
    HCURSOR rv = 0;
    __try {
        rv = Real_SetCursor(a0);
    } __finally {
        _Print("SetCursor(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetCursorPos(int a0,
                                 int a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetCursorPos(a0, a1);
    } __finally {
        _Print("SetCursorPos(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

UINT __stdcall Mine_SetDIBColorTable(HDC a0,
                                     UINT a1,
                                     UINT a2,
                                     RGBQUAD* a3)
{
    
    UINT rv = 0;
    __try {
        rv = Real_SetDIBColorTable(a0, a1, a2, a3);
    } __finally {
        _Print("SetDIBColorTable(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

int __stdcall Mine_SetDIBits(HDC a0,
                             HBITMAP a1,
                             UINT a2,
                             UINT a3,
                             void* a4,
                             BITMAPINFO* a5,
                             UINT a6)
{
    
    int rv = 0;
    __try {
        rv = Real_SetDIBits(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("SetDIBits(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

int __stdcall Mine_SetDIBitsToDevice(HDC a0,
                                     int a1,
                                     int a2,
                                     DWORD a3,
                                     DWORD a4,
                                     int a5,
                                     int a6,
                                     UINT a7,
                                     UINT a8,
                                     void* a9,
                                     BITMAPINFO* a10,
                                     UINT a11)
{
    
    int rv = 0;
    __try {
        rv = Real_SetDIBitsToDevice(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    } __finally {
        _Print("SetDIBitsToDevice(%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetDefaultCommConfigA(LPCSTR a0,
                                          LPCOMMCONFIG a1,
                                          DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetDefaultCommConfigA(a0, a1, a2);
    } __finally {
        _Print("SetDefaultCommConfigA(%hs,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetDefaultCommConfigW(LPCWSTR a0,
                                          LPCOMMCONFIG a1,
                                          DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetDefaultCommConfigW(a0, a1, a2);
    } __finally {
        _Print("SetDefaultCommConfigW(%ls,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetDeviceGammaRamp(HDC a0,
                                       LPVOID a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetDeviceGammaRamp(a0, a1);
    } __finally {
        _Print("SetDeviceGammaRamp(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetDlgItemInt(HWND a0,
                                  int a1,
                                  UINT a2,
                                  BOOL a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetDlgItemInt(a0, a1, a2, a3);
    } __finally {
        _Print("SetDlgItemInt(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetDlgItemTextA(HWND a0,
                                    int a1,
                                    LPCSTR a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetDlgItemTextA(a0, a1, a2);
    } __finally {
        _Print("SetDlgItemTextA(%p,%p,%hs) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetDlgItemTextW(HWND a0,
                                    int a1,
                                    LPCWSTR a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetDlgItemTextW(a0, a1, a2);
    } __finally {
        _Print("SetDlgItemTextW(%p,%p,%ls) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetDoubleClickTime(UINT a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetDoubleClickTime(a0);
    } __finally {
        _Print("SetDoubleClickTime(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetEndOfFile(HANDLE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetEndOfFile(a0);
    } __finally {
        _Print("SetEndOfFile(%p) -> %p", a0, rv);
    };
    return rv;
}

HENHMETAFILE __stdcall Mine_SetEnhMetaFileBits(UINT a0,
                                               BYTE* a1)
{
    
    HENHMETAFILE rv = 0;
    __try {
        rv = Real_SetEnhMetaFileBits(a0, a1);
    } __finally {
        _Print("SetEnhMetaFileBits(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetEnvironmentVariableA(LPCSTR a0,
                                            LPCSTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetEnvironmentVariableA(a0, a1);
    } __finally {
        _Print("SetEnvironmentVariableA(%hs,%hs) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetEnvironmentVariableW(LPCWSTR a0,
                                            LPCWSTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetEnvironmentVariableW(a0, a1);
    } __finally {
        _Print("SetEnvironmentVariableW(%ls,%ls) -> %p", a0, a1, rv);
    };
    return rv;
}

UINT __stdcall Mine_SetErrorMode(UINT a0)
{
    
    UINT rv = 0;
    __try {
        rv = Real_SetErrorMode(a0);
    } __finally {
        _Print("SetErrorMode(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetEvent(HANDLE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetEvent(a0);
    } __finally {
        _Print("SetEvent(%p) -> %p", a0, rv);
    };
    return rv;
}

void __stdcall Mine_SetFileApisToANSI(void)
{
    
    __try {
        Real_SetFileApisToANSI();
    } __finally {
        _Print("SetFileApisToANSI() ->");
    };
}

void __stdcall Mine_SetFileApisToOEM(void)
{
    
    __try {
        Real_SetFileApisToOEM();
    } __finally {
        _Print("SetFileApisToOEM() ->");
    };
}

BOOL __stdcall Mine_SetFileAttributesA(LPCSTR a0,
                                       DWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetFileAttributesA(a0, a1);
    } __finally {
        _Print("SetFileAttributesA(%hs,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetFileAttributesW(LPCWSTR a0,
                                       DWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetFileAttributesW(a0, a1);
    } __finally {
        _Print("SetFileAttributesW(%ls,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_SetFilePointer(HANDLE a0,
                                    LONG a1,
                                    PLONG a2,
                                    DWORD a3)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_SetFilePointer(a0, a1, a2, a3);
    } __finally {
        _Print("SetFilePointer(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetFileTime(HANDLE a0,
                                FILETIME* a1,
                                FILETIME* a2,
                                FILETIME* a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetFileTime(a0, a1, a2, a3);
    } __finally {
        _Print("SetFileTime(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HWND __stdcall Mine_SetFocus(HWND a0)
{
    
    HWND rv = 0;
    __try {
        rv = Real_SetFocus(a0);
    } __finally {
        _Print("SetFocus(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetForegroundWindow(HWND a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetForegroundWindow(a0);
    } __finally {
        _Print("SetForegroundWindow(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_SetGraphicsMode(HDC a0,
                                   int a1)
{
    
    int rv = 0;
    __try {
        rv = Real_SetGraphicsMode(a0, a1);
    } __finally {
        _Print("SetGraphicsMode(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

UINT __stdcall Mine_SetHandleCount(UINT a0)
{
    
    UINT rv = 0;
    __try {
        rv = Real_SetHandleCount(a0);
    } __finally {
        _Print("SetHandleCount(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetHandleInformation(HANDLE a0,
                                         DWORD a1,
                                         DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetHandleInformation(a0, a1, a2);
    } __finally {
        _Print("SetHandleInformation(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_SetICMMode(HDC a0,
                              int a1)
{
    
    int rv = 0;
    __try {
        rv = Real_SetICMMode(a0, a1);
    } __finally {
        _Print("SetICMMode(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetICMProfileA(HDC a0,
                                   LPSTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetICMProfileA(a0, a1);
    } __finally {
        _Print("SetICMProfileA(%p,%hs) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetICMProfileW(HDC a0,
                                   LPWSTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetICMProfileW(a0, a1);
    } __finally {
        _Print("SetICMProfileW(%p,%ls) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetKeyboardState(LPBYTE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetKeyboardState(a0);
    } __finally {
        _Print("SetKeyboardState(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetLocalTime(SYSTEMTIME* a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetLocalTime(a0);
    } __finally {
        _Print("SetLocalTime(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetLocaleInfoA(LCID a0,
                                   LCTYPE a1,
                                   LPCSTR a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetLocaleInfoA(a0, a1, a2);
    } __finally {
        _Print("SetLocaleInfoA(%p,%p,%hs) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetLocaleInfoW(LCID a0,
                                   LCTYPE a1,
                                   LPCWSTR a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetLocaleInfoW(a0, a1, a2);
    } __finally {
        _Print("SetLocaleInfoW(%p,%p,%ls) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetMailslotInfo(HANDLE a0,
                                    DWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetMailslotInfo(a0, a1);
    } __finally {
        _Print("SetMailslotInfo(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_SetMapMode(HDC a0,
                              int a1)
{
    
    int rv = 0;
    __try {
        rv = Real_SetMapMode(a0, a1);
    } __finally {
        _Print("SetMapMode(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_SetMapperFlags(HDC a0,
                                    DWORD a1)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_SetMapperFlags(a0, a1);
    } __finally {
        _Print("SetMapperFlags(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetMenu(HWND a0,
                            HMENU a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetMenu(a0, a1);
    } __finally {
        _Print("SetMenu(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetMenuContextHelpId(HMENU a0,
                                         DWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetMenuContextHelpId(a0, a1);
    } __finally {
        _Print("SetMenuContextHelpId(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetMenuDefaultItem(HMENU a0,
                                       UINT a1,
                                       UINT a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetMenuDefaultItem(a0, a1, a2);
    } __finally {
        _Print("SetMenuDefaultItem(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetMenuItemBitmaps(HMENU a0,
                                       UINT a1,
                                       UINT a2,
                                       HBITMAP a3,
                                       HBITMAP a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetMenuItemBitmaps(a0, a1, a2, a3, a4);
    } __finally {
        _Print("SetMenuItemBitmaps(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetMenuItemInfoA(HMENU a0,
                                     UINT a1,
                                     BOOL a2,
                                     MENUITEMINFOA* a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetMenuItemInfoA(a0, a1, a2, a3);
    } __finally {
        _Print("SetMenuItemInfoA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetMenuItemInfoW(HMENU a0,
                                     UINT a1,
                                     BOOL a2,
                                     MENUITEMINFOW* a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetMenuItemInfoW(a0, a1, a2, a3);
    } __finally {
        _Print("SetMenuItemInfoW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

LPARAM __stdcall Mine_SetMessageExtraInfo(LPARAM a0)
{
    
    LPARAM rv = 0;
    __try {
        rv = Real_SetMessageExtraInfo(a0);
    } __finally {
        _Print("SetMessageExtraInfo(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetMessageQueue(int a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetMessageQueue(a0);
    } __finally {
        _Print("SetMessageQueue(%p) -> %p", a0, rv);
    };
    return rv;
}

HMETAFILE __stdcall Mine_SetMetaFileBitsEx(UINT a0,
                                           BYTE* a1)
{
    
    HMETAFILE rv = 0;
    __try {
        rv = Real_SetMetaFileBitsEx(a0, a1);
    } __finally {
        _Print("SetMetaFileBitsEx(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_SetMetaRgn(HDC a0)
{
    
    int rv = 0;
    __try {
        rv = Real_SetMetaRgn(a0);
    } __finally {
        _Print("SetMetaRgn(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetMiterLimit(HDC a0,
                                  FLOAT a1,
                                  PFLOAT a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetMiterLimit(a0, a1, a2);
    } __finally {
        _Print("SetMiterLimit(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetNamedPipeHandleState(HANDLE a0,
                                            LPDWORD a1,
                                            LPDWORD a2,
                                            LPDWORD a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetNamedPipeHandleState(a0, a1, a2, a3);
    } __finally {
        _Print("SetNamedPipeHandleState(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

UINT __stdcall Mine_SetPaletteEntries(HPALETTE a0,
                                      UINT a1,
                                      UINT a2,
                                      PALETTEENTRY* a3)
{
    
    UINT rv = 0;
    __try {
        rv = Real_SetPaletteEntries(a0, a1, a2, a3);
    } __finally {
        _Print("SetPaletteEntries(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HWND __stdcall Mine_SetParent(HWND a0,
                              HWND a1)
{
    
    HWND rv = 0;
    __try {
        rv = Real_SetParent(a0, a1);
    } __finally {
        _Print("SetParent(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

COLORREF __stdcall Mine_SetPixel(HDC a0,
                                 int a1,
                                 int a2,
                                 COLORREF a3)
{
    
    COLORREF rv = 0;
    __try {
        rv = Real_SetPixel(a0, a1, a2, a3);
    } __finally {
        _Print("SetPixel(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetPixelFormat(HDC a0,
                                   int a1,
                                   PIXELFORMATDESCRIPTOR* a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetPixelFormat(a0, a1, a2);
    } __finally {
        _Print("SetPixelFormat(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetPixelV(HDC a0,
                              int a1,
                              int a2,
                              COLORREF a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetPixelV(a0, a1, a2, a3);
    } __finally {
        _Print("SetPixelV(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

int __stdcall Mine_SetPolyFillMode(HDC a0,
                                   int a1)
{
    
    int rv = 0;
    __try {
        rv = Real_SetPolyFillMode(a0, a1);
    } __finally {
        _Print("SetPolyFillMode(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetPriorityClass(HANDLE a0,
                                     DWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetPriorityClass(a0, a1);
    } __finally {
        _Print("SetPriorityClass(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetProcessAffinityMask(HANDLE a0,
                                           DWORD_PTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetProcessAffinityMask(a0, a1);
    } __finally {
        _Print("SetProcessAffinityMask(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetProcessShutdownParameters(DWORD a0,
                                                 DWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetProcessShutdownParameters(a0, a1);
    } __finally {
        _Print("SetProcessShutdownParameters(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetProcessWindowStation(HWINSTA a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetProcessWindowStation(a0);
    } __finally {
        _Print("SetProcessWindowStation(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetProcessWorkingSetSize(HANDLE a0,
                                             SIZE_T a1,
                                             SIZE_T a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetProcessWorkingSetSize(a0, a1, a2);
    } __finally {
        _Print("SetProcessWorkingSetSize(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetPropA(HWND a0,
                             LPCSTR a1,
                             HANDLE a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetPropA(a0, a1, a2);
    } __finally {
        _Print("SetPropA(%p,%hs,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetPropW(HWND a0,
                             LPCWSTR a1,
                             HANDLE a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetPropW(a0, a1, a2);
    } __finally {
        _Print("SetPropW(%p,%ls,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_SetROP2(HDC a0,
                           int a1)
{
    
    int rv = 0;
    __try {
        rv = Real_SetROP2(a0, a1);
    } __finally {
        _Print("SetROP2(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetRect(LPRECT a0,
                            int a1,
                            int a2,
                            int a3,
                            int a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetRect(a0, a1, a2, a3, a4);
    } __finally {
        _Print("SetRect(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetRectEmpty(LPRECT a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetRectEmpty(a0);
    } __finally {
        _Print("SetRectEmpty(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetRectRgn(HRGN a0,
                               int a1,
                               int a2,
                               int a3,
                               int a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetRectRgn(a0, a1, a2, a3, a4);
    } __finally {
        _Print("SetRectRgn(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_SetScrollInfo(HWND a0,
                                 int a1,
                                 LPCSCROLLINFO a2,
                                 BOOL a3)
{
    
    int rv = 0;
    __try {
        rv = Real_SetScrollInfo(a0, a1, a2, a3);
    } __finally {
        _Print("SetScrollInfo(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

int __stdcall Mine_SetScrollPos(HWND a0,
                                int a1,
                                int a2,
                                BOOL a3)
{
    
    int rv = 0;
    __try {
        rv = Real_SetScrollPos(a0, a1, a2, a3);
    } __finally {
        _Print("SetScrollPos(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetScrollRange(HWND a0,
                                   int a1,
                                   int a2,
                                   int a3,
                                   BOOL a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetScrollRange(a0, a1, a2, a3, a4);
    } __finally {
        _Print("SetScrollRange(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetStdHandle(DWORD a0,
                                 HANDLE a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetStdHandle(a0, a1);
    } __finally {
        _Print("SetStdHandle(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_SetStretchBltMode(HDC a0,
                                     int a1)
{
    
    int rv = 0;
    __try {
        rv = Real_SetStretchBltMode(a0, a1);
    } __finally {
        _Print("SetStretchBltMode(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetSysColors(int a0,
                                 INT* a1,
                                 COLORREF* a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetSysColors(a0, a1, a2);
    } __finally {
        _Print("SetSysColors(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetSystemCursor(HCURSOR a0,
                                    DWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetSystemCursor(a0, a1);
    } __finally {
        _Print("SetSystemCursor(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

UINT __stdcall Mine_SetSystemPaletteUse(HDC a0,
                                        UINT a1)
{
    
    UINT rv = 0;
    __try {
        rv = Real_SetSystemPaletteUse(a0, a1);
    } __finally {
        _Print("SetSystemPaletteUse(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetSystemPowerState(BOOL a0,
                                        BOOL a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetSystemPowerState(a0, a1);
    } __finally {
        _Print("SetSystemPowerState(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetSystemTime(SYSTEMTIME* a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetSystemTime(a0);
    } __finally {
        _Print("SetSystemTime(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetSystemTimeAdjustment(DWORD a0,
                                            BOOL a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetSystemTimeAdjustment(a0, a1);
    } __finally {
        _Print("SetSystemTimeAdjustment(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_SetTapeParameters(HANDLE a0,
                                       DWORD a1,
                                       LPVOID a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_SetTapeParameters(a0, a1, a2);
    } __finally {
        _Print("SetTapeParameters(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_SetTapePosition(HANDLE a0,
                                     DWORD a1,
                                     DWORD a2,
                                     DWORD a3,
                                     DWORD a4,
                                     BOOL a5)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_SetTapePosition(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("SetTapePosition(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

UINT __stdcall Mine_SetTextAlign(HDC a0,
                                 UINT a1)
{
    
    UINT rv = 0;
    __try {
        rv = Real_SetTextAlign(a0, a1);
    } __finally {
        _Print("SetTextAlign(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_SetTextCharacterExtra(HDC a0,
                                         int a1)
{
    
    int rv = 0;
    __try {
        rv = Real_SetTextCharacterExtra(a0, a1);
    } __finally {
        _Print("SetTextCharacterExtra(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

COLORREF __stdcall Mine_SetTextColor(HDC a0,
                                     COLORREF a1)
{
    
    COLORREF rv = 0;
    __try {
        rv = Real_SetTextColor(a0, a1);
    } __finally {
        _Print("SetTextColor(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetTextJustification(HDC a0,
                                         int a1,
                                         int a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetTextJustification(a0, a1, a2);
    } __finally {
        _Print("SetTextJustification(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD_PTR __stdcall Mine_SetThreadAffinityMask(HANDLE a0,
                                           DWORD_PTR a1)
{
    
    DWORD_PTR rv = 0;
    __try {
        rv = Real_SetThreadAffinityMask(a0, a1);
    } __finally {
        _Print("SetThreadAffinityMask(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetThreadContext(HANDLE a0,
                                     CONTEXT* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetThreadContext(a0, a1);
    } __finally {
        _Print("SetThreadContext(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetThreadDesktop(HDESK a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetThreadDesktop(a0);
    } __finally {
        _Print("SetThreadDesktop(%p) -> %p", a0, rv);
    };
    return rv;
}

DWORD __stdcall Mine_SetThreadIdealProcessor(HANDLE a0,
                                             DWORD a1)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_SetThreadIdealProcessor(a0, a1);
    } __finally {
        _Print("SetThreadIdealProcessor(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

#if(WINVER >= 0x0500)
BOOL __stdcall Mine_SetThreadLocale(LCID a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetThreadLocale(a0);
    } __finally {
        _Print("SetThreadLocale(%p) -> %p", a0, rv);
    };
    return rv;
}
#endif // (WINVER >= 0x0500)

BOOL __stdcall Mine_SetThreadPriority(HANDLE a0,
                                      int a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetThreadPriority(a0, a1);
    } __finally {
        _Print("SetThreadPriority(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetThreadPriorityBoost(HANDLE a0,
                                           BOOL a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetThreadPriorityBoost(a0, a1);
    } __finally {
        _Print("SetThreadPriorityBoost(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetTimeZoneInformation(TIME_ZONE_INFORMATION* a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetTimeZoneInformation(a0);
    } __finally {
        _Print("SetTimeZoneInformation(%p) -> %p", a0, rv);
    };
    return rv;
}

UINT_PTR __stdcall Mine_SetTimer(HWND a0,
                                 UINT_PTR a1,
                                 UINT a2,
                                 TIMERPROC a3)
{
    
    UINT_PTR rv = 0;
    __try {
        rv = Real_SetTimer(a0, a1, a2, a3);
    } __finally {
        _Print("SetTimer(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

LPTOP_LEVEL_EXCEPTION_FILTER __stdcall Mine_SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER a0)
{
    
    LPTOP_LEVEL_EXCEPTION_FILTER rv = 0;
    __try {
        rv = Real_SetUnhandledExceptionFilter(a0);
    } __finally {
        _Print("SetUnhandledExceptionFilter(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetUserObjectInformationA(HANDLE a0,
                                              int a1,
                                              PVOID a2,
                                              DWORD a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetUserObjectInformationA(a0, a1, a2, a3);
    } __finally {
        _Print("SetUserObjectInformationA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetUserObjectInformationW(HANDLE a0,
                                              int a1,
                                              PVOID a2,
                                              DWORD a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetUserObjectInformationW(a0, a1, a2, a3);
    } __finally {
        _Print("SetUserObjectInformationW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetUserObjectSecurity(HANDLE a0,
                                          PSECURITY_INFORMATION a1,
                                          PSECURITY_DESCRIPTOR a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetUserObjectSecurity(a0, a1, a2);
    } __finally {
        _Print("SetUserObjectSecurity(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetViewportExtEx(HDC a0,
                                     int a1,
                                     int a2,
                                     SIZE* a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetViewportExtEx(a0, a1, a2, a3);
    } __finally {
        _Print("SetViewportExtEx(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetViewportOrgEx(HDC a0,
                                     int a1,
                                     int a2,
                                     POINT* a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetViewportOrgEx(a0, a1, a2, a3);
    } __finally {
        _Print("SetViewportOrgEx(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetVolumeLabelA(LPCSTR a0,
                                    LPCSTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetVolumeLabelA(a0, a1);
    } __finally {
        _Print("SetVolumeLabelA(%hs,%hs) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetVolumeLabelW(LPCWSTR a0,
                                    LPCWSTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetVolumeLabelW(a0, a1);
    } __finally {
        _Print("SetVolumeLabelW(%ls,%ls) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetWaitableTimer(HANDLE a0,
                                     LARGE_INTEGER* a1,
                                     LONG a2,
                                     PTIMERAPCROUTINE a3,
                                     LPVOID a4,
                                     BOOL a5)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetWaitableTimer(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("SetWaitableTimer(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

HENHMETAFILE __stdcall Mine_SetWinMetaFileBits(UINT a0,
                                               BYTE* a1,
                                               HDC a2,
                                               METAFILEPICT* a3)
{
    
    HENHMETAFILE rv = 0;
    __try {
        rv = Real_SetWinMetaFileBits(a0, a1, a2, a3);
    } __finally {
        _Print("SetWinMetaFileBits(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetWindowContextHelpId(HWND a0,
                                           DWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetWindowContextHelpId(a0, a1);
    } __finally {
        _Print("SetWindowContextHelpId(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetWindowExtEx(HDC a0,
                                   int a1,
                                   int a2,
                                   SIZE* a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetWindowExtEx(a0, a1, a2, a3);
    } __finally {
        _Print("SetWindowExtEx(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

LONG __stdcall Mine_SetWindowLongA(HWND a0,
                                   int a1,
                                   LONG a2)
{
    
    LONG rv = 0;
    __try {
        rv = Real_SetWindowLongA(a0, a1, a2);
    } __finally {
        _Print("SetWindowLongA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

LONG __stdcall Mine_SetWindowLongW(HWND a0,
                                   int a1,
                                   LONG a2)
{
    
    LONG rv = 0;
    __try {
        rv = Real_SetWindowLongW(a0, a1, a2);
    } __finally {
        _Print("SetWindowLongW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetWindowOrgEx(HDC a0,
                                   int a1,
                                   int a2,
                                   POINT* a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetWindowOrgEx(a0, a1, a2, a3);
    } __finally {
        _Print("SetWindowOrgEx(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetWindowPlacement(HWND a0,
                                       WINDOWPLACEMENT* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetWindowPlacement(a0, a1);
    } __finally {
        _Print("SetWindowPlacement(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetWindowPos(HWND a0,
                                 HWND a1,
                                 int a2,
                                 int a3,
                                 int a4,
                                 int a5,
                                 UINT a6)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetWindowPos(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("SetWindowPos(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

int __stdcall Mine_SetWindowRgn(HWND a0,
                                HRGN a1,
                                BOOL a2)
{
    
    int rv = 0;
    __try {
        rv = Real_SetWindowRgn(a0, a1, a2);
    } __finally {
        _Print("SetWindowRgn(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetWindowTextA(HWND a0,
                                   LPCSTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetWindowTextA(a0, a1);
    } __finally {
        _Print("SetWindowTextA(%p,%hs) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetWindowTextW(HWND a0,
                                   LPCWSTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetWindowTextW(a0, a1);
    } __finally {
        _Print("SetWindowTextW(%p,%ls) -> %p", a0, a1, rv);
    };
    return rv;
}

WORD __stdcall Mine_SetWindowWord(HWND a0,
                                  int a1,
                                  WORD a2)
{
    
    WORD rv = 0;
    __try {
        rv = Real_SetWindowWord(a0, a1, a2);
    } __finally {
        _Print("SetWindowWord(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HHOOK __stdcall Mine_SetWindowsHookA(int a0,
                                     HOOKPROC a1)
{
    
    HHOOK rv = 0;
    __try {
        rv = Real_SetWindowsHookA(a0, a1);
    } __finally {
        _Print("SetWindowsHookA(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HHOOK __stdcall Mine_SetWindowsHookExA(int a0,
                                       HOOKPROC a1,
                                       HINSTANCE a2,
                                       DWORD a3)
{
    
    HHOOK rv = 0;
    __try {
        rv = Real_SetWindowsHookExA(a0, a1, a2, a3);
    } __finally {
        _Print("SetWindowsHookExA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HHOOK __stdcall Mine_SetWindowsHookExW(int a0,
                                       HOOKPROC a1,
                                       HINSTANCE a2,
                                       DWORD a3)
{
    
    HHOOK rv = 0;
    __try {
        rv = Real_SetWindowsHookExW(a0, a1, a2, a3);
    } __finally {
        _Print("SetWindowsHookExW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HHOOK __stdcall Mine_SetWindowsHookW(int a0,
                                     HOOKPROC a1)
{
    
    HHOOK rv = 0;
    __try {
        rv = Real_SetWindowsHookW(a0, a1);
    } __finally {
        _Print("SetWindowsHookW(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetWorldTransform(HDC a0,
                                      XFORM* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetWorldTransform(a0, a1);
    } __finally {
        _Print("SetWorldTransform(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SetupComm(HANDLE a0,
                              DWORD a1,
                              DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SetupComm(a0, a1, a2);
    } __finally {
        _Print("SetupComm(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ShowCaret(HWND a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ShowCaret(a0);
    } __finally {
        _Print("ShowCaret(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_ShowCursor(BOOL a0)
{
    
    int rv = 0;
    __try {
        rv = Real_ShowCursor(a0);
    } __finally {
        _Print("ShowCursor(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ShowOwnedPopups(HWND a0,
                                    BOOL a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ShowOwnedPopups(a0, a1);
    } __finally {
        _Print("ShowOwnedPopups(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ShowScrollBar(HWND a0,
                                  int a1,
                                  BOOL a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ShowScrollBar(a0, a1, a2);
    } __finally {
        _Print("ShowScrollBar(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ShowWindow(HWND a0,
                               int a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ShowWindow(a0, a1);
    } __finally {
        _Print("ShowWindow(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ShowWindowAsync(HWND a0,
                                    int a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ShowWindowAsync(a0, a1);
    } __finally {
        _Print("ShowWindowAsync(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_SignalObjectAndWait(HANDLE a0,
                                         HANDLE a1,
                                         DWORD a2,
                                         BOOL a3)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_SignalObjectAndWait(a0, a1, a2, a3);
    } __finally {
        _Print("SignalObjectAndWait(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

DWORD __stdcall Mine_SizeofResource(HMODULE a0,
                                    HRSRC a1)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_SizeofResource(a0, a1);
    } __finally {
        _Print("SizeofResource(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_SleepEx(DWORD a0,
                             BOOL a1)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_SleepEx(a0, a1);
    } __finally {
        _Print("SleepEx(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_StartDocA(HDC a0,
                             DOCINFOA* a1)
{
    
    int rv = 0;
    __try {
        rv = Real_StartDocA(a0, a1);
    } __finally {
        _Print("StartDocA(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_StartDocW(HDC a0,
                             DOCINFOW* a1)
{
    
    int rv = 0;
    __try {
        rv = Real_StartDocW(a0, a1);
    } __finally {
        _Print("StartDocW(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_StartPage(HDC a0)
{
    
    int rv = 0;
    __try {
        rv = Real_StartPage(a0);
    } __finally {
        _Print("StartPage(%p) -> %p", a0, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_StgCreateDocfile(OLECHAR* a0,
                                        DWORD a1,
                                        DWORD a2,
                                        IStorage** a3)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_StgCreateDocfile(a0, a1, a2, a3);
    } __finally {
        _Print("StgCreateDocfile(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_StgCreateDocfileOnILockBytes(ILockBytes* a0,
                                                    DWORD a1,
                                                    DWORD a2,
                                                    IStorage** a3)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_StgCreateDocfileOnILockBytes(a0, a1, a2, a3);
    } __finally {
        _Print("StgCreateDocfileOnILockBytes(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_StgCreatePropSetStg(IStorage* a0,
                                           DWORD a1,
                                           IPropertySetStorage** a2)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_StgCreatePropSetStg(a0, a1, a2);
    } __finally {
        _Print("StgCreatePropSetStg(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_StgCreatePropStg(IUnknown* a0,
                                        CONST IID& a1,
                                        CLSID* a2,
                                        DWORD a3,
                                        DWORD a4,
                                        IPropertyStorage** a5)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_StgCreatePropStg(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("StgCreatePropStg(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

#if _MSC_VER < 1300
HRESULT __stdcall Mine_StgCreateStorageEx(WCHAR* a0,
                                          DWORD a1,
                                          DWORD a2,
                                          DWORD a3,
                                          void* a4,
                                          void* a5,
                                          CONST IID& a6,
                                          void** a7)
#else
HRESULT __stdcall Mine_StgCreateStorageEx(WCHAR* a0,
                                          DWORD a1,
                                          DWORD a2,
                                          DWORD a3,
                                          STGOPTIONS* a4,
                                          void* a5,
                                          CONST IID& a6,
                                          void** a7)
#endif
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_StgCreateStorageEx(a0, a1, a2, a3, a4, a5, a6, a7);
    } __finally {
        _Print("StgCreateStorageEx(%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_StgGetIFillLockBytesOnFile(OLECHAR* a0,
                                                  IFillLockBytes** a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_StgGetIFillLockBytesOnFile(a0, a1);
    } __finally {
        _Print("StgGetIFillLockBytesOnFile(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_StgGetIFillLockBytesOnILockBytes(ILockBytes* a0,
                                                        IFillLockBytes** a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_StgGetIFillLockBytesOnILockBytes(a0, a1);
    } __finally {
        _Print("StgGetIFillLockBytesOnILockBytes(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_StgIsStorageFile(OLECHAR* a0)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_StgIsStorageFile(a0);
    } __finally {
        _Print("StgIsStorageFile(%p) -> %p", a0, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_StgIsStorageILockBytes(ILockBytes* a0)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_StgIsStorageILockBytes(a0);
    } __finally {
        _Print("StgIsStorageILockBytes(%p) -> %p", a0, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_StgOpenAsyncDocfileOnIFillLockBytes(IFillLockBytes* a0,
                                                           DWORD a1,
                                                           DWORD a2,
                                                           IStorage** a3)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_StgOpenAsyncDocfileOnIFillLockBytes(a0, a1, a2, a3);
    } __finally {
        _Print("StgOpenAsyncDocfileOnIFillLockBytes(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_StgOpenPropStg(IUnknown* a0,
                                      CONST IID& a1,
                                      DWORD a2,
                                      DWORD a3,
                                      IPropertyStorage** a4)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_StgOpenPropStg(a0, a1, a2, a3, a4);
    } __finally {
        _Print("StgOpenPropStg(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_StgOpenStorage(OLECHAR* a0,
                                      IStorage* a1,
                                      DWORD a2,
                                      SNB a3,
                                      DWORD a4,
                                      IStorage** a5)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_StgOpenStorage(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("StgOpenStorage(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

#if _MSC_VER < 1300
HRESULT __stdcall Mine_StgOpenStorageEx(WCHAR* a0,
                                        DWORD a1,
                                        DWORD a2,
                                        DWORD a3,
                                        void* a4,
                                        void* a5,
                                        CONST IID& a6,
                                        void** a7)
#else
HRESULT __stdcall Mine_StgOpenStorageEx(WCHAR* a0,
                                        DWORD a1,
                                        DWORD a2,
                                        DWORD a3,
                                        STGOPTIONS* a4,
                                        void* a5,
                                        CONST IID& a6,
                                        void** a7)
#endif
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_StgOpenStorageEx(a0, a1, a2, a3, a4, a5, a6, a7);
    } __finally {
        _Print("StgOpenStorageEx(%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_StgOpenStorageOnILockBytes(ILockBytes* a0,
                                                  IStorage* a1,
                                                  DWORD a2,
                                                  SNB a3,
                                                  DWORD a4,
                                                  IStorage** a5)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_StgOpenStorageOnILockBytes(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("StgOpenStorageOnILockBytes(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_StgSetTimes(OLECHAR* a0,
                                   FILETIME* a1,
                                   FILETIME* a2,
                                   FILETIME* a3)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_StgSetTimes(a0, a1, a2, a3);
    } __finally {
        _Print("StgSetTimes(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_StretchBlt(HDC a0,
                               int a1,
                               int a2,
                               int a3,
                               int a4,
                               HDC a5,
                               int a6,
                               int a7,
                               int a8,
                               int a9,
                               DWORD a10)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_StretchBlt(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    } __finally {
        _Print("StretchBlt(%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, rv);
    };
    return rv;
}

int __stdcall Mine_StretchDIBits(HDC a0,
                                 int a1,
                                 int a2,
                                 int a3,
                                 int a4,
                                 int a5,
                                 int a6,
                                 int a7,
                                 int a8,
                                 void* a9,
                                 BITMAPINFO* a10,
                                 UINT a11,
                                 DWORD a12)
{
    
    int rv = 0;
    __try {
        rv = Real_StretchDIBits(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    } __finally {
        _Print("StretchDIBits(%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_StringFromCLSID(CONST IID& a0,
                                       LPOLESTR* a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_StringFromCLSID(a0, a1);
    } __finally {
        _Print("StringFromCLSID(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_StringFromGUID2(CONST GUID& a0,
                                   LPOLESTR a1,
                                   int a2)
{
    
    int rv = 0;
    __try {
        rv = Real_StringFromGUID2(a0, a1, a2);
    } __finally {
        _Print("StringFromGUID2(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_StringFromIID(CONST IID& a0,
                                     LPOLESTR* a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_StringFromIID(a0, a1);
    } __finally {
        _Print("StringFromIID(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_StrokeAndFillPath(HDC a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_StrokeAndFillPath(a0);
    } __finally {
        _Print("StrokeAndFillPath(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_StrokePath(HDC a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_StrokePath(a0);
    } __finally {
        _Print("StrokePath(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SubtractRect(LPRECT a0,
                                 RECT* a1,
                                 RECT* a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SubtractRect(a0, a1, a2);
    } __finally {
        _Print("SubtractRect(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_SuspendThread(HANDLE a0)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_SuspendThread(a0);
    } __finally {
        _Print("SuspendThread(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SwapBuffers(HDC a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SwapBuffers(a0);
    } __finally {
        _Print("SwapBuffers(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SwapMouseButton(BOOL a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SwapMouseButton(a0);
    } __finally {
        _Print("SwapMouseButton(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SwitchDesktop(HDESK a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SwitchDesktop(a0);
    } __finally {
        _Print("SwitchDesktop(%p) -> %p", a0, rv);
    };
    return rv;
}

void __stdcall Mine_SwitchToFiber(LPVOID a0)
{
    
    __try {
        Real_SwitchToFiber(a0);
    } __finally {
        _Print("SwitchToFiber(%p) ->", a0);
    };
}

BOOL __stdcall Mine_SwitchToThread(void)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SwitchToThread();
    } __finally {
        _Print("SwitchToThread() -> %p", rv);
    };
    return rv;
}

BOOL __stdcall Mine_SystemParametersInfoA(UINT a0,
                                          UINT a1,
                                          PVOID a2,
                                          UINT a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SystemParametersInfoA(a0, a1, a2, a3);
    } __finally {
        _Print("SystemParametersInfoA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SystemParametersInfoW(UINT a0,
                                          UINT a1,
                                          PVOID a2,
                                          UINT a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SystemParametersInfoW(a0, a1, a2, a3);
    } __finally {
        _Print("SystemParametersInfoW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SystemTimeToFileTime(SYSTEMTIME* a0,
                                         LPFILETIME a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SystemTimeToFileTime(a0, a1);
    } __finally {
        _Print("SystemTimeToFileTime(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_SystemTimeToTzSpecificLocalTime(
#ifdef PIPE_ACCEPT_REMOTE_CLIENTS
                                                    const TIME_ZONE_INFORMATION *a0,
                                                    const SYSTEMTIME *a1,
#else
                                                    LPTIME_ZONE_INFORMATION a0,
                                                    LPSYSTEMTIME a1,
#endif
                                                    LPSYSTEMTIME a2
                                                   )
{
    
    BOOL rv = 0;
    __try {
        rv = Real_SystemTimeToTzSpecificLocalTime(a0, a1, a2);
    } __finally {
        _Print("SystemTimeToTzSpecificLocalTime(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

LONG __stdcall Mine_TabbedTextOutA(HDC a0,
                                   int a1,
                                   int a2,
                                   LPCSTR a3,
                                   int a4,
                                   int a5,
                                   INT* a6,
                                   int a7)
{
    
    LONG rv = 0;
    __try {
        rv = Real_TabbedTextOutA(a0, a1, a2, a3, a4, a5, a6, a7);
    } __finally {
        _Print("TabbedTextOutA(%p,%p,%p,%hs,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, rv);
    };
    return rv;
}

LONG __stdcall Mine_TabbedTextOutW(HDC a0,
                                   int a1,
                                   int a2,
                                   LPCWSTR a3,
                                   int a4,
                                   int a5,
                                   INT* a6,
                                   int a7)
{
    
    LONG rv = 0;
    __try {
        rv = Real_TabbedTextOutW(a0, a1, a2, a3, a4, a5, a6, a7);
    } __finally {
        _Print("TabbedTextOutW(%p,%p,%p,%ls,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, rv);
    };
    return rv;
}

BOOL __stdcall Mine_TerminateProcess(HANDLE a0,
                                     UINT a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_TerminateProcess(a0, a1);
    } __finally {
        _Print("TerminateProcess(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_TerminateThread(HANDLE a0,
                                    DWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_TerminateThread(a0, a1);
    } __finally {
        _Print("TerminateThread(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_TextOutA(HDC a0,
                             int a1,
                             int a2,
                             LPCSTR a3,
                             int a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_TextOutA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("TextOutA(%p,%p,%p,%hs,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_TextOutW(HDC a0,
                             int a1,
                             int a2,
                             LPCWSTR a3,
                             int a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_TextOutW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("TextOutW(%p,%p,%p,%ls,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

WORD __stdcall Mine_TileWindows(HWND a0,
                                UINT a1,
                                RECT* a2,
                                UINT a3,
                                struct HWND__** a4)
{
    
    WORD rv = 0;
    __try {
        rv = Real_TileWindows(a0, a1, a2, a3, a4);
    } __finally {
        _Print("TileWindows(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_ToAscii(UINT a0,
                           UINT a1,
                           BYTE* a2,
                           LPWORD a3,
                           UINT a4)
{
    
    int rv = 0;
    __try {
        rv = Real_ToAscii(a0, a1, a2, a3, a4);
    } __finally {
        _Print("ToAscii(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_ToAsciiEx(UINT a0,
                             UINT a1,
                             BYTE* a2,
                             LPWORD a3,
                             UINT a4,
                             HKL a5)
{
    
    int rv = 0;
    __try {
        rv = Real_ToAsciiEx(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("ToAsciiEx(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

int __stdcall Mine_ToUnicode(UINT a0,
                             UINT a1,
                             BYTE* a2,
                             LPWSTR a3,
                             int a4,
                             UINT a5)
{
    
    int rv = 0;
    __try {
        rv = Real_ToUnicode(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("ToUnicode(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

int __stdcall Mine_ToUnicodeEx(UINT a0,
                               UINT a1,
                               BYTE* a2,
                               LPWSTR a3,
                               int a4,
                               UINT a5,
                               HKL a6)
{
    
    int rv = 0;
    __try {
        rv = Real_ToUnicodeEx(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("ToUnicodeEx(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

BOOL __stdcall Mine_TrackMouseEvent(TRACKMOUSEEVENT* a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_TrackMouseEvent(a0);
    } __finally {
        _Print("TrackMouseEvent(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_TrackPopupMenu(HMENU a0,
                                   UINT a1,
                                   int a2,
                                   int a3,
                                   int a4,
                                   HWND a5,
                                   RECT* a6)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_TrackPopupMenu(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("TrackPopupMenu(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

BOOL __stdcall Mine_TrackPopupMenuEx(HMENU a0,
                                     UINT a1,
                                     int a2,
                                     int a3,
                                     HWND a4,
                                     LPTPMPARAMS a5)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_TrackPopupMenuEx(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("TrackPopupMenuEx(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

BOOL __stdcall Mine_TransactNamedPipe(HANDLE a0,
                                      LPVOID a1,
                                      DWORD a2,
                                      LPVOID a3,
                                      DWORD a4,
                                      LPDWORD a5,
                                      LPOVERLAPPED a6)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_TransactNamedPipe(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("TransactNamedPipe(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

int __stdcall Mine_TranslateAcceleratorA(HWND a0,
                                         HACCEL a1,
                                         LPMSG a2)
{
    
    int rv = 0;
    __try {
        rv = Real_TranslateAcceleratorA(a0, a1, a2);
    } __finally {
        _Print("TranslateAcceleratorA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_TranslateAcceleratorW(HWND a0,
                                         HACCEL a1,
                                         LPMSG a2)
{
    
    int rv = 0;
    __try {
        rv = Real_TranslateAcceleratorW(a0, a1, a2);
    } __finally {
        _Print("TranslateAcceleratorW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_TranslateCharsetInfo(DWORD* a0,
                                         CHARSETINFO* a1,
                                         DWORD a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_TranslateCharsetInfo(a0, a1, a2);
    } __finally {
        _Print("TranslateCharsetInfo(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_TranslateMDISysAccel(HWND a0,
                                         LPMSG a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_TranslateMDISysAccel(a0, a1);
    } __finally {
        _Print("TranslateMDISysAccel(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_TranslateMessage(MSG* a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_TranslateMessage(a0);
    } __finally {
        _Print("TranslateMessage(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_TransmitCommChar(HANDLE a0,
                                     char a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_TransmitCommChar(a0, a1);
    } __finally {
        _Print("TransmitCommChar(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

#if DETOUR_TryEnterCriticalSection_EVEN_IF_IT_EXERCISES_A_BUG_IN_RtlLookupFunctionTable
BOOL __stdcall Mine_TryEnterCriticalSection(LPCRITICAL_SECTION a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_TryEnterCriticalSection(a0);
    } __finally {
        _Print("TryEnterCriticalSection(%p) -> %p", a0, rv);
    };
    return rv;
}
#endif

BOOL __stdcall Mine_UnhookWindowsHook(int a0,
                                      HOOKPROC a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_UnhookWindowsHook(a0, a1);
    } __finally {
        _Print("UnhookWindowsHook(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_UnhookWindowsHookEx(HHOOK a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_UnhookWindowsHookEx(a0);
    } __finally {
        _Print("UnhookWindowsHookEx(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_UnionRect(LPRECT a0,
                              RECT* a1,
                              RECT* a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_UnionRect(a0, a1, a2);
    } __finally {
        _Print("UnionRect(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_UnloadKeyboardLayout(HKL a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_UnloadKeyboardLayout(a0);
    } __finally {
        _Print("UnloadKeyboardLayout(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_UnlockFile(HANDLE a0,
                               DWORD a1,
                               DWORD a2,
                               DWORD a3,
                               DWORD a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_UnlockFile(a0, a1, a2, a3, a4);
    } __finally {
        _Print("UnlockFile(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_UnlockFileEx(HANDLE a0,
                                 DWORD a1,
                                 DWORD a2,
                                 DWORD a3,
                                 LPOVERLAPPED a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_UnlockFileEx(a0, a1, a2, a3, a4);
    } __finally {
        _Print("UnlockFileEx(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_UnmapViewOfFile(LPCVOID a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_UnmapViewOfFile(a0);
    } __finally {
        _Print("UnmapViewOfFile(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_UnpackDDElParam(UINT a0,
                                    LPARAM a1,
                                    PUINT_PTR a2,
                                    PUINT_PTR a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_UnpackDDElParam(a0, a1, a2, a3);
    } __finally {
        _Print("UnpackDDElParam(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_UnrealizeObject(HGDIOBJ a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_UnrealizeObject(a0);
    } __finally {
        _Print("UnrealizeObject(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_UnregisterClassA(LPCSTR a0,
                                     HINSTANCE a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_UnregisterClassA(a0, a1);
    } __finally {
        _Print("UnregisterClassA(%hs,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_UnregisterClassW(LPCWSTR a0,
                                     HINSTANCE a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_UnregisterClassW(a0, a1);
    } __finally {
        _Print("UnregisterClassW(%ls,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_UnregisterHotKey(HWND a0,
                                     int a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_UnregisterHotKey(a0, a1);
    } __finally {
        _Print("UnregisterHotKey(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_UpdateColors(HDC a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_UpdateColors(a0);
    } __finally {
        _Print("UpdateColors(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_UpdateResourceA(HANDLE a0,
                                    LPCSTR a1,
                                    LPCSTR a2,
                                    WORD a3,
                                    LPVOID a4,
                                    DWORD a5)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_UpdateResourceA(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("UpdateResourceA(%p,%hs,%hs,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

BOOL __stdcall Mine_UpdateResourceW(HANDLE a0,
                                    LPCWSTR a1,
                                    LPCWSTR a2,
                                    WORD a3,
                                    LPVOID a4,
                                    DWORD a5)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_UpdateResourceW(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("UpdateResourceW(%p,%ls,%ls,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

BOOL __stdcall Mine_UpdateWindow(HWND a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_UpdateWindow(a0);
    } __finally {
        _Print("UpdateWindow(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ValidateRect(HWND a0,
                                 RECT* a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ValidateRect(a0, a1);
    } __finally {
        _Print("ValidateRect(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_ValidateRgn(HWND a0,
                                HRGN a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_ValidateRgn(a0, a1);
    } __finally {
        _Print("ValidateRgn(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_VerLanguageNameA(DWORD a0,
                                      LPSTR a1,
                                      DWORD a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_VerLanguageNameA(a0, a1, a2);
    } __finally {
        _Print("VerLanguageNameA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_VerLanguageNameW(DWORD a0,
                                      LPWSTR a1,
                                      DWORD a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_VerLanguageNameW(a0, a1, a2);
    } __finally {
        _Print("VerLanguageNameW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

LPVOID __stdcall Mine_VirtualAllocEx(HANDLE a0,
                                     LPVOID a1,
                                     SIZE_T a2,
                                     DWORD a3,
                                     DWORD a4)
{
    
    LPVOID rv = 0;
    __try {
        rv = Real_VirtualAllocEx(a0, a1, a2, a3, a4);
    } __finally {
        _Print("VirtualAllocEx(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_VirtualFreeEx(HANDLE a0,
                                  LPVOID a1,
                                  SIZE_T a2,
                                  DWORD a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_VirtualFreeEx(a0, a1, a2, a3);
    } __finally {
        _Print("VirtualFreeEx(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_VirtualProtectEx(HANDLE a0,
                                     LPVOID a1,
                                     SIZE_T a2,
                                     DWORD a3,
                                     PDWORD a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_VirtualProtectEx(a0, a1, a2, a3, a4);
    } __finally {
        _Print("VirtualProtectEx(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

DWORD_PTR __stdcall Mine_VirtualQueryEx(HANDLE a0,
                                        LPCVOID a1,
                                        PMEMORY_BASIC_INFORMATION a2,
                                        DWORD_PTR a3)
{
    
    DWORD_PTR rv = 0;
    __try {
        rv = Real_VirtualQueryEx(a0, a1, a2, a3);
    } __finally {
        _Print("VirtualQueryEx(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

SHORT __stdcall Mine_VkKeyScanA(CHAR a0)
{
    
    SHORT rv = 0;
    __try {
        rv = Real_VkKeyScanA(a0);
    } __finally {
        _Print("VkKeyScanA(%p) -> %p", a0, rv);
    };
    return rv;
}

SHORT __stdcall Mine_VkKeyScanExA(CHAR a0,
                                  HKL a1)
{
    
    SHORT rv = 0;
    __try {
        rv = Real_VkKeyScanExA(a0, a1);
    } __finally {
        _Print("VkKeyScanExA(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

SHORT __stdcall Mine_VkKeyScanExW(WCHAR a0,
                                  HKL a1)
{
    
    SHORT rv = 0;
    __try {
        rv = Real_VkKeyScanExW(a0, a1);
    } __finally {
        _Print("VkKeyScanExW(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

SHORT __stdcall Mine_VkKeyScanW(WCHAR a0)
{
    
    SHORT rv = 0;
    __try {
        rv = Real_VkKeyScanW(a0);
    } __finally {
        _Print("VkKeyScanW(%p) -> %p", a0, rv);
    };
    return rv;
}

SOCKET __stdcall Mine_WSAAccept(SOCKET a0,
                                sockaddr* a1,
                                LPINT a2,
                                LPCONDITIONPROC a3,
                                DWORD_PTR a4)
{
    
    SOCKET rv = 0;
    __try {
        rv = Real_WSAAccept(a0, a1, a2, a3, a4);
    } __finally {
        _Print("WSAAccept(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

INT __stdcall Mine_WSAAddressToStringA(LPSOCKADDR a0,
                                       DWORD a1,
                                       LPWSAPROTOCOL_INFOA a2,
                                       LPSTR a3,
                                       LPDWORD a4)
{
    
    INT rv = 0;
    __try {
        rv = Real_WSAAddressToStringA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("WSAAddressToStringA(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

INT __stdcall Mine_WSAAddressToStringW(LPSOCKADDR a0,
                                       DWORD a1,
                                       LPWSAPROTOCOL_INFOW a2,
                                       LPWSTR a3,
                                       LPDWORD a4)
{
    
    INT rv = 0;
    __try {
        rv = Real_WSAAddressToStringW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("WSAAddressToStringW(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_WSAAsyncGetHostByAddr(HWND a0,
                                            u_int a1,
                                            char* a2,
                                            int a3,
                                            int a4,
                                            char* a5,
                                            int a6)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_WSAAsyncGetHostByAddr(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("WSAAsyncGetHostByAddr(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_WSAAsyncGetHostByName(HWND a0,
                                            u_int a1,
                                            char* a2,
                                            char* a3,
                                            int a4)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_WSAAsyncGetHostByName(a0, a1, a2, a3, a4);
    } __finally {
        _Print("WSAAsyncGetHostByName(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_WSAAsyncGetProtoByName(HWND a0,
                                             u_int a1,
                                             char* a2,
                                             char* a3,
                                             int a4)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_WSAAsyncGetProtoByName(a0, a1, a2, a3, a4);
    } __finally {
        _Print("WSAAsyncGetProtoByName(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_WSAAsyncGetProtoByNumber(HWND a0,
                                               u_int a1,
                                               int a2,
                                               char* a3,
                                               int a4)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_WSAAsyncGetProtoByNumber(a0, a1, a2, a3, a4);
    } __finally {
        _Print("WSAAsyncGetProtoByNumber(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_WSAAsyncGetServByName(HWND a0,
                                            u_int a1,
                                            char* a2,
                                            char* a3,
                                            char* a4,
                                            int a5)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_WSAAsyncGetServByName(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("WSAAsyncGetServByName(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_WSAAsyncGetServByPort(HWND a0,
                                            u_int a1,
                                            int a2,
                                            char* a3,
                                            char* a4,
                                            int a5)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_WSAAsyncGetServByPort(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("WSAAsyncGetServByPort(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

int __stdcall Mine_WSAAsyncSelect(SOCKET a0,
                                  HWND a1,
                                  u_int a2,
                                  long a3)
{
    
    int rv = 0;
    __try {
        rv = Real_WSAAsyncSelect(a0, a1, a2, a3);
    } __finally {
        _Print("WSAAsyncSelect(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

int __stdcall Mine_WSACancelAsyncRequest(HANDLE a0)
{
    
    int rv = 0;
    __try {
        rv = Real_WSACancelAsyncRequest(a0);
    } __finally {
        _Print("WSACancelAsyncRequest(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_WSACancelBlockingCall(void)
{
    
    int rv = 0;
    __try {
        rv = Real_WSACancelBlockingCall();
    } __finally {
        _Print("WSACancelBlockingCall() -> %p", rv);
    };
    return rv;
}

int __stdcall Mine_WSACleanup(void)
{
    
    int rv = 0;
    __try {
        rv = Real_WSACleanup();
    } __finally {
        _Print("WSACleanup() -> %p", rv);
    };
    return rv;
}

BOOL __stdcall Mine_WSACloseEvent(HANDLE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WSACloseEvent(a0);
    } __finally {
        _Print("WSACloseEvent(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_WSAConnect(SOCKET a0,
                              sockaddr* a1,
                              int a2,
                              LPWSABUF a3,
                              LPWSABUF a4,
                              LPQOS a5,
                              LPQOS a6)
{
    
    int rv = 0;
    __try {
        rv = Real_WSAConnect(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("WSAConnect(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

HANDLE __stdcall Mine_WSACreateEvent(void)
{
    
    HANDLE rv = 0;
    __try {
        rv = Real_WSACreateEvent();
    } __finally {
        _Print("WSACreateEvent() -> %p", rv);
    };
    return rv;
}

int __stdcall Mine_WSADuplicateSocketA(SOCKET a0,
                                       DWORD a1,
                                       LPWSAPROTOCOL_INFOA a2)
{
    
    int rv = 0;
    __try {
        rv = Real_WSADuplicateSocketA(a0, a1, a2);
    } __finally {
        _Print("WSADuplicateSocketA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_WSADuplicateSocketW(SOCKET a0,
                                       DWORD a1,
                                       LPWSAPROTOCOL_INFOW a2)
{
    
    int rv = 0;
    __try {
        rv = Real_WSADuplicateSocketW(a0, a1, a2);
    } __finally {
        _Print("WSADuplicateSocketW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

INT __stdcall Mine_WSAEnumNameSpaceProvidersA(LPDWORD a0,
                                              LPWSANAMESPACE_INFOA a1)
{
    
    INT rv = 0;
    __try {
        rv = Real_WSAEnumNameSpaceProvidersA(a0, a1);
    } __finally {
        _Print("WSAEnumNameSpaceProvidersA(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

INT __stdcall Mine_WSAEnumNameSpaceProvidersW(LPDWORD a0,
                                              LPWSANAMESPACE_INFOW a1)
{
    
    INT rv = 0;
    __try {
        rv = Real_WSAEnumNameSpaceProvidersW(a0, a1);
    } __finally {
        _Print("WSAEnumNameSpaceProvidersW(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_WSAEnumNetworkEvents(SOCKET a0,
                                        HANDLE a1,
                                        LPWSANETWORKEVENTS a2)
{
    
    int rv = 0;
    __try {
        rv = Real_WSAEnumNetworkEvents(a0, a1, a2);
    } __finally {
        _Print("WSAEnumNetworkEvents(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_WSAEnumProtocolsA(LPINT a0,
                                     LPWSAPROTOCOL_INFOA a1,
                                     LPDWORD a2)
{
    
    int rv = 0;
    __try {
        rv = Real_WSAEnumProtocolsA(a0, a1, a2);
    } __finally {
        _Print("WSAEnumProtocolsA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_WSAEnumProtocolsW(LPINT a0,
                                     LPWSAPROTOCOL_INFOW a1,
                                     LPDWORD a2)
{
    
    int rv = 0;
    __try {
        rv = Real_WSAEnumProtocolsW(a0, a1, a2);
    } __finally {
        _Print("WSAEnumProtocolsW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_WSAEventSelect(SOCKET a0,
                                  HANDLE a1,
                                  long a2)
{
    
    int rv = 0;
    __try {
        rv = Real_WSAEventSelect(a0, a1, a2);
    } __finally {
        _Print("WSAEventSelect(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WSAGetOverlappedResult(SOCKET a0,
                                           LPWSAOVERLAPPED a1,
                                           LPDWORD a2,
                                           BOOL a3,
                                           LPDWORD a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WSAGetOverlappedResult(a0, a1, a2, a3, a4);
    } __finally {
        _Print("WSAGetOverlappedResult(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WSAGetQOSByName(SOCKET a0,
                                    LPWSABUF a1,
                                    LPQOS a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WSAGetQOSByName(a0, a1, a2);
    } __finally {
        _Print("WSAGetQOSByName(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

INT __stdcall Mine_WSAGetServiceClassInfoA(LPGUID a0,
                                           LPGUID a1,
                                           LPDWORD a2,
                                           LPWSASERVICECLASSINFOA a3)
{
    
    INT rv = 0;
    __try {
        rv = Real_WSAGetServiceClassInfoA(a0, a1, a2, a3);
    } __finally {
        _Print("WSAGetServiceClassInfoA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

INT __stdcall Mine_WSAGetServiceClassInfoW(LPGUID a0,
                                           LPGUID a1,
                                           LPDWORD a2,
                                           LPWSASERVICECLASSINFOW a3)
{
    
    INT rv = 0;
    __try {
        rv = Real_WSAGetServiceClassInfoW(a0, a1, a2, a3);
    } __finally {
        _Print("WSAGetServiceClassInfoW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

INT __stdcall Mine_WSAGetServiceClassNameByClassIdA(LPGUID a0,
                                                    LPSTR a1,
                                                    LPDWORD a2)
{
    
    INT rv = 0;
    __try {
        rv = Real_WSAGetServiceClassNameByClassIdA(a0, a1, a2);
    } __finally {
        _Print("WSAGetServiceClassNameByClassIdA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

INT __stdcall Mine_WSAGetServiceClassNameByClassIdW(LPGUID a0,
                                                    LPWSTR a1,
                                                    LPDWORD a2)
{
    
    INT rv = 0;
    __try {
        rv = Real_WSAGetServiceClassNameByClassIdW(a0, a1, a2);
    } __finally {
        _Print("WSAGetServiceClassNameByClassIdW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_WSAHtonl(SOCKET a0,
                            u_long a1,
                            u_long* a2)
{
    
    int rv = 0;
    __try {
        rv = Real_WSAHtonl(a0, a1, a2);
    } __finally {
        _Print("WSAHtonl(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_WSAHtons(SOCKET a0,
                            u_short a1,
                            u_short* a2)
{
    
    int rv = 0;
    __try {
        rv = Real_WSAHtons(a0, a1, a2);
    } __finally {
        _Print("WSAHtons(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

INT __stdcall Mine_WSAInstallServiceClassA(LPWSASERVICECLASSINFOA a0)
{
    
    INT rv = 0;
    __try {
        rv = Real_WSAInstallServiceClassA(a0);
    } __finally {
        _Print("WSAInstallServiceClassA(%p) -> %p", a0, rv);
    };
    return rv;
}

INT __stdcall Mine_WSAInstallServiceClassW(LPWSASERVICECLASSINFOW a0)
{
    
    INT rv = 0;
    __try {
        rv = Real_WSAInstallServiceClassW(a0);
    } __finally {
        _Print("WSAInstallServiceClassW(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_WSAIoctl(SOCKET a0,
                            DWORD a1,
                            LPVOID a2,
                            DWORD a3,
                            LPVOID a4,
                            DWORD a5,
                            LPDWORD a6,
                            LPWSAOVERLAPPED a7,
                            LPWSAOVERLAPPED_COMPLETION_ROUTINE a8)
{
    
    int rv = 0;
    __try {
        rv = Real_WSAIoctl(a0, a1, a2, a3, a4, a5, a6, a7, a8);
    } __finally {
        _Print("WSAIoctl(%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WSAIsBlocking(void)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WSAIsBlocking();
    } __finally {
        _Print("WSAIsBlocking() -> %p", rv);
    };
    return rv;
}

SOCKET __stdcall Mine_WSAJoinLeaf(SOCKET a0,
                                  sockaddr* a1,
                                  int a2,
                                  LPWSABUF a3,
                                  LPWSABUF a4,
                                  LPQOS a5,
                                  LPQOS a6,
                                  DWORD a7)
{
    
    SOCKET rv = 0;
    __try {
        rv = Real_WSAJoinLeaf(a0, a1, a2, a3, a4, a5, a6, a7);
    } __finally {
        _Print("WSAJoinLeaf(%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, rv);
    };
    return rv;
}

INT __stdcall Mine_WSALookupServiceBeginA(LPWSAQUERYSETA a0,
                                          DWORD a1,
                                          LPHANDLE a2)
{
    
    INT rv = 0;
    __try {
        rv = Real_WSALookupServiceBeginA(a0, a1, a2);
    } __finally {
        _Print("WSALookupServiceBeginA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

INT __stdcall Mine_WSALookupServiceBeginW(LPWSAQUERYSETW a0,
                                          DWORD a1,
                                          LPHANDLE a2)
{
    
    INT rv = 0;
    __try {
        rv = Real_WSALookupServiceBeginW(a0, a1, a2);
    } __finally {
        _Print("WSALookupServiceBeginW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

INT __stdcall Mine_WSALookupServiceEnd(HANDLE a0)
{
    
    INT rv = 0;
    __try {
        rv = Real_WSALookupServiceEnd(a0);
    } __finally {
        _Print("WSALookupServiceEnd(%p) -> %p", a0, rv);
    };
    return rv;
}

INT __stdcall Mine_WSALookupServiceNextA(HANDLE a0,
                                         DWORD a1,
                                         LPDWORD a2,
                                         LPWSAQUERYSETA a3)
{
    
    INT rv = 0;
    __try {
        rv = Real_WSALookupServiceNextA(a0, a1, a2, a3);
    } __finally {
        _Print("WSALookupServiceNextA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

INT __stdcall Mine_WSALookupServiceNextW(HANDLE a0,
                                         DWORD a1,
                                         LPDWORD a2,
                                         LPWSAQUERYSETW a3)
{
    
    INT rv = 0;
    __try {
        rv = Real_WSALookupServiceNextW(a0, a1, a2, a3);
    } __finally {
        _Print("WSALookupServiceNextW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

int __stdcall Mine_WSANtohl(SOCKET a0,
                            u_long a1,
                            u_long* a2)
{
    
    int rv = 0;
    __try {
        rv = Real_WSANtohl(a0, a1, a2);
    } __finally {
        _Print("WSANtohl(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_WSANtohs(SOCKET a0,
                            u_short a1,
                            u_short* a2)
{
    
    int rv = 0;
    __try {
        rv = Real_WSANtohs(a0, a1, a2);
    } __finally {
        _Print("WSANtohs(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

INT __stdcall Mine_WSAProviderConfigChange(LPHANDLE a0,
                                           LPWSAOVERLAPPED a1,
                                           LPWSAOVERLAPPED_COMPLETION_ROUTINE a2)
{
    
    INT rv = 0;
    __try {
        rv = Real_WSAProviderConfigChange(a0, a1, a2);
    } __finally {
        _Print("WSAProviderConfigChange(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_WSARecv(SOCKET a0,
                           LPWSABUF a1,
                           DWORD a2,
                           LPDWORD a3,
                           LPDWORD a4,
                           LPWSAOVERLAPPED a5,
                           LPWSAOVERLAPPED_COMPLETION_ROUTINE a6)
{
    
    int rv = 0;
    __try {
        rv = Real_WSARecv(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("WSARecv(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

int __stdcall Mine_WSARecvDisconnect(SOCKET a0,
                                     LPWSABUF a1)
{
    
    int rv = 0;
    __try {
        rv = Real_WSARecvDisconnect(a0, a1);
    } __finally {
        _Print("WSARecvDisconnect(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_WSARecvFrom(SOCKET a0,
                               LPWSABUF a1,
                               DWORD a2,
                               LPDWORD a3,
                               LPDWORD a4,
                               sockaddr* a5,
                               LPINT a6,
                               LPWSAOVERLAPPED a7,
                               LPWSAOVERLAPPED_COMPLETION_ROUTINE a8)
{
    
    int rv = 0;
    __try {
        rv = Real_WSARecvFrom(a0, a1, a2, a3, a4, a5, a6, a7, a8);
    } __finally {
        _Print("WSARecvFrom(%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, rv);
    };
    return rv;
}

INT __stdcall Mine_WSARemoveServiceClass(LPGUID a0)
{
    
    INT rv = 0;
    __try {
        rv = Real_WSARemoveServiceClass(a0);
    } __finally {
        _Print("WSARemoveServiceClass(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WSAResetEvent(HANDLE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WSAResetEvent(a0);
    } __finally {
        _Print("WSAResetEvent(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_WSASend(SOCKET a0,
                           LPWSABUF a1,
                           DWORD a2,
                           LPDWORD a3,
                           DWORD a4,
                           LPWSAOVERLAPPED a5,
                           LPWSAOVERLAPPED_COMPLETION_ROUTINE a6)
{
    
    int rv = 0;
    __try {
        rv = Real_WSASend(a0, a1, a2, a3, a4, a5, a6);
    } __finally {
        _Print("WSASend(%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, rv);
    };
    return rv;
}

int __stdcall Mine_WSASendDisconnect(SOCKET a0,
                                     LPWSABUF a1)
{
    
    int rv = 0;
    __try {
        rv = Real_WSASendDisconnect(a0, a1);
    } __finally {
        _Print("WSASendDisconnect(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_WSASendTo(SOCKET a0,
                             LPWSABUF a1,
                             DWORD a2,
                             LPDWORD a3,
                             DWORD a4,
                             sockaddr* a5,
                             int a6,
                             LPWSAOVERLAPPED a7,
                             LPWSAOVERLAPPED_COMPLETION_ROUTINE a8)
{
    
    int rv = 0;
    __try {
        rv = Real_WSASendTo(a0, a1, a2, a3, a4, a5, a6, a7, a8);
    } __finally {
        _Print("WSASendTo(%p,%p,%p,%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, a6, a7, a8, rv);
    };
    return rv;
}

FARPROC __stdcall Mine_WSASetBlockingHook(FARPROC a0)
{
    
    FARPROC rv = 0;
    __try {
        rv = Real_WSASetBlockingHook(a0);
    } __finally {
        _Print("WSASetBlockingHook(%p) -> %p", a0, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WSASetEvent(HANDLE a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WSASetEvent(a0);
    } __finally {
        _Print("WSASetEvent(%p) -> %p", a0, rv);
    };
    return rv;
}

INT __stdcall Mine_WSASetServiceA(LPWSAQUERYSETA a0,
                                  WSAESETSERVICEOP a1,
                                  DWORD a2)
{
    
    INT rv = 0;
    __try {
        rv = Real_WSASetServiceA(a0, a1, a2);
    } __finally {
        _Print("WSASetServiceA(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

INT __stdcall Mine_WSASetServiceW(LPWSAQUERYSETW a0,
                                  WSAESETSERVICEOP a1,
                                  DWORD a2)
{
    
    INT rv = 0;
    __try {
        rv = Real_WSASetServiceW(a0, a1, a2);
    } __finally {
        _Print("WSASetServiceW(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

SOCKET __stdcall Mine_WSASocketA(int a0,
                                 int a1,
                                 int a2,
                                 LPWSAPROTOCOL_INFOA a3,
                                 GROUP a4,
                                 DWORD a5)
{
    
    SOCKET rv = 0;
    __try {
        rv = Real_WSASocketA(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("WSASocketA(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

SOCKET __stdcall Mine_WSASocketW(int a0,
                                 int a1,
                                 int a2,
                                 LPWSAPROTOCOL_INFOW a3,
                                 GROUP a4,
                                 DWORD a5)
{
    
    SOCKET rv = 0;
    __try {
        rv = Real_WSASocketW(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("WSASocketW(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

int __stdcall Mine_WSAStartup(WORD a0,
                              LPWSADATA a1)
{
    
    int rv = 0;
    __try {
        rv = Real_WSAStartup(a0, a1);
    } __finally {
        _Print("WSAStartup(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

INT __stdcall Mine_WSAStringToAddressA(LPSTR a0,
                                       INT a1,
                                       LPWSAPROTOCOL_INFOA a2,
                                       LPSOCKADDR a3,
                                       LPINT a4)
{
    
    INT rv = 0;
    __try {
        rv = Real_WSAStringToAddressA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("WSAStringToAddressA(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

INT __stdcall Mine_WSAStringToAddressW(LPWSTR a0,
                                       INT a1,
                                       LPWSAPROTOCOL_INFOW a2,
                                       LPSOCKADDR a3,
                                       LPINT a4)
{
    
    INT rv = 0;
    __try {
        rv = Real_WSAStringToAddressW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("WSAStringToAddressW(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_WSAUnhookBlockingHook(void)
{
    
    int rv = 0;
    __try {
        rv = Real_WSAUnhookBlockingHook();
    } __finally {
        _Print("WSAUnhookBlockingHook() -> %p", rv);
    };
    return rv;
}

DWORD __stdcall Mine_WSAWaitForMultipleEvents(DWORD a0,
                                              void** a1,
                                              BOOL a2,
                                              DWORD a3,
                                              BOOL a4)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_WSAWaitForMultipleEvents(a0, a1, a2, a3, a4);
    } __finally {
        _Print("WSAWaitForMultipleEvents(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WaitCommEvent(HANDLE a0,
                                  LPDWORD a1,
                                  LPOVERLAPPED a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WaitCommEvent(a0, a1, a2);
    } __finally {
        _Print("WaitCommEvent(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_WaitForInputIdle(HANDLE a0,
                                      DWORD a1)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_WaitForInputIdle(a0, a1);
    } __finally {
        _Print("WaitForInputIdle(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_WaitForMultipleObjects(DWORD a0,
                                            void** a1,
                                            BOOL a2,
                                            DWORD a3)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_WaitForMultipleObjects(a0, a1, a2, a3);
    } __finally {
        _Print("WaitForMultipleObjects(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

DWORD __stdcall Mine_WaitForMultipleObjectsEx(DWORD a0,
                                              void** a1,
                                              BOOL a2,
                                              DWORD a3,
                                              BOOL a4)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_WaitForMultipleObjectsEx(a0, a1, a2, a3, a4);
    } __finally {
        _Print("WaitForMultipleObjectsEx(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

DWORD __stdcall Mine_WaitForSingleObject(HANDLE a0,
                                         DWORD a1)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_WaitForSingleObject(a0, a1);
    } __finally {
        _Print("WaitForSingleObject(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

DWORD __stdcall Mine_WaitForSingleObjectEx(HANDLE a0,
                                           DWORD a1,
                                           BOOL a2)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_WaitForSingleObjectEx(a0, a1, a2);
    } __finally {
        _Print("WaitForSingleObjectEx(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WaitMessage(void)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WaitMessage();
    } __finally {
        _Print("WaitMessage() -> %p", rv);
    };
    return rv;
}

BOOL __stdcall Mine_WaitNamedPipeA(LPCSTR a0,
                                   DWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WaitNamedPipeA(a0, a1);
    } __finally {
        _Print("WaitNamedPipeA(%hs,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WaitNamedPipeW(LPCWSTR a0,
                                   DWORD a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WaitNamedPipeW(a0, a1);
    } __finally {
        _Print("WaitNamedPipeW(%ls,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WidenPath(HDC a0)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WidenPath(a0);
    } __finally {
        _Print("WidenPath(%p) -> %p", a0, rv);
    };
    return rv;
}

UINT __stdcall Mine_WinExec(LPCSTR a0,
                            UINT a1)
{
    
    UINT rv = 0;
    __try {
        rv = Real_WinExec(a0, a1);
    } __finally {
        _Print("WinExec(%hs,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WinHelpA(HWND a0,
                             LPCSTR a1,
                             UINT a2,
                             ULONG_PTR a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WinHelpA(a0, a1, a2, a3);
    } __finally {
        _Print("WinHelpA(%p,%hs,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WinHelpW(HWND a0,
                             LPCWSTR a1,
                             UINT a2,
                             ULONG_PTR a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WinHelpW(a0, a1, a2, a3);
    } __finally {
        _Print("WinHelpW(%p,%ls,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

HWND __stdcall Mine_WindowFromDC(HDC a0)
{
    
    HWND rv = 0;
    __try {
        rv = Real_WindowFromDC(a0);
    } __finally {
        _Print("WindowFromDC(%p) -> %p", a0, rv);
    };
    return rv;
}

HWND __stdcall Mine_WindowFromPoint(POINT a0)
{
    
    HWND rv = 0;
    __try {
        rv = Real_WindowFromPoint(a0);
    } __finally {
        _Print("WindowFromPoint(%p) -> %p", a0, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_WriteClassStg(LPSTORAGE a0,
                                     CONST IID& a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_WriteClassStg(a0, a1);
    } __finally {
        _Print("WriteClassStg(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_WriteClassStm(LPSTREAM a0,
                                     CONST IID& a1)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_WriteClassStm(a0, a1);
    } __finally {
        _Print("WriteClassStm(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WriteConsoleA(HANDLE a0,
                                  void* a1,
                                  DWORD a2,
                                  LPDWORD a3,
                                  LPVOID a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WriteConsoleA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("WriteConsoleA(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WriteConsoleInputA(HANDLE a0,
                                       INPUT_RECORD* a1,
                                       DWORD a2,
                                       LPDWORD a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WriteConsoleInputA(a0, a1, a2, a3);
    } __finally {
        _Print("WriteConsoleInputA(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WriteConsoleInputW(HANDLE a0,
                                       INPUT_RECORD* a1,
                                       DWORD a2,
                                       LPDWORD a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WriteConsoleInputW(a0, a1, a2, a3);
    } __finally {
        _Print("WriteConsoleInputW(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WriteConsoleOutputA(HANDLE a0,
                                        CHAR_INFO* a1,
                                        COORD a2,
                                        COORD a3,
                                        PSMALL_RECT a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WriteConsoleOutputA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("WriteConsoleOutputA(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WriteConsoleOutputAttribute(HANDLE a0,
                                                WORD* a1,
                                                DWORD a2,
                                                COORD a3,
                                                LPDWORD a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WriteConsoleOutputAttribute(a0, a1, a2, a3, a4);
    } __finally {
        _Print("WriteConsoleOutputAttribute(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WriteConsoleOutputCharacterA(HANDLE a0,
                                                 LPCSTR a1,
                                                 DWORD a2,
                                                 COORD a3,
                                                 LPDWORD a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WriteConsoleOutputCharacterA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("WriteConsoleOutputCharacterA(%p,%hs,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WriteConsoleOutputCharacterW(HANDLE a0,
                                                 LPCWSTR a1,
                                                 DWORD a2,
                                                 COORD a3,
                                                 LPDWORD a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WriteConsoleOutputCharacterW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("WriteConsoleOutputCharacterW(%p,%ls,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WriteConsoleOutputW(HANDLE a0,
                                        CHAR_INFO* a1,
                                        COORD a2,
                                        COORD a3,
                                        PSMALL_RECT a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WriteConsoleOutputW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("WriteConsoleOutputW(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WriteConsoleW(HANDLE a0,
                                  void* a1,
                                  DWORD a2,
                                  LPDWORD a3,
                                  LPVOID a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WriteConsoleW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("WriteConsoleW(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WriteFile(HANDLE a0,
                              LPCVOID a1,
                              DWORD a2,
                              LPDWORD a3,
                              LPOVERLAPPED a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WriteFile(a0, a1, a2, a3, a4);
    } __finally {
        _Print("WriteFile(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WriteFileEx(HANDLE a0,
                                LPCVOID a1,
                                DWORD a2,
                                LPOVERLAPPED a3,
                                LPOVERLAPPED_COMPLETION_ROUTINE a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WriteFileEx(a0, a1, a2, a3, a4);
    } __finally {
        _Print("WriteFileEx(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

HRESULT __stdcall Mine_WriteFmtUserTypeStg(LPSTORAGE a0,
                                           CLIPFORMAT a1,
                                           LPOLESTR a2)
{
    
    HRESULT rv = 0;
    __try {
        rv = Real_WriteFmtUserTypeStg(a0, a1, a2);
    } __finally {
        _Print("WriteFmtUserTypeStg(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WritePrivateProfileSectionA(LPCSTR a0,
                                                LPCSTR a1,
                                                LPCSTR a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WritePrivateProfileSectionA(a0, a1, a2);
    } __finally {
        _Print("WritePrivateProfileSectionA(%hs,%hs,%hs) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WritePrivateProfileSectionW(LPCWSTR a0,
                                                LPCWSTR a1,
                                                LPCWSTR a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WritePrivateProfileSectionW(a0, a1, a2);
    } __finally {
        _Print("WritePrivateProfileSectionW(%ls,%ls,%ls) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WritePrivateProfileStringA(LPCSTR a0,
                                               LPCSTR a1,
                                               LPCSTR a2,
                                               LPCSTR a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WritePrivateProfileStringA(a0, a1, a2, a3);
    } __finally {
        _Print("WritePrivateProfileStringA(%hs,%hs,%hs,%hs) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WritePrivateProfileStringW(LPCWSTR a0,
                                               LPCWSTR a1,
                                               LPCWSTR a2,
                                               LPCWSTR a3)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WritePrivateProfileStringW(a0, a1, a2, a3);
    } __finally {
        _Print("WritePrivateProfileStringW(%ls,%ls,%ls,%ls) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WritePrivateProfileStructA(LPCSTR a0,
                                               LPCSTR a1,
                                               LPVOID a2,
                                               UINT a3,
                                               LPCSTR a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WritePrivateProfileStructA(a0, a1, a2, a3, a4);
    } __finally {
        _Print("WritePrivateProfileStructA(%hs,%hs,%p,%p,%hs) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WritePrivateProfileStructW(LPCWSTR a0,
                                               LPCWSTR a1,
                                               LPVOID a2,
                                               UINT a3,
                                               LPCWSTR a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WritePrivateProfileStructW(a0, a1, a2, a3, a4);
    } __finally {
        _Print("WritePrivateProfileStructW(%ls,%ls,%p,%p,%ls) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WriteProcessMemory(HANDLE a0,
                                       LPVOID lpBase,
                                       LPVOID lpBuf,
                                       DWORD_PTR nSize,
                                       PDWORD_PTR a4)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WriteProcessMemory(a0, lpBase, lpBuf, nSize, a4);
    } __finally {
        _Print("WriteProcessMemory(%p,@%p..%p,%p,%p) -> %p",
                a0, lpBase,
                (PBYTE)lpBase + ((nSize > 0) ? nSize - 1 : 0),
                lpBuf, a4, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WriteProfileSectionA(LPCSTR a0,
                                         LPCSTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WriteProfileSectionA(a0, a1);
    } __finally {
        _Print("WriteProfileSectionA(%hs,%hs) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WriteProfileSectionW(LPCWSTR a0,
                                         LPCWSTR a1)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WriteProfileSectionW(a0, a1);
    } __finally {
        _Print("WriteProfileSectionW(%ls,%ls) -> %p", a0, a1, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WriteProfileStringA(LPCSTR a0,
                                        LPCSTR a1,
                                        LPCSTR a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WriteProfileStringA(a0, a1, a2);
    } __finally {
        _Print("WriteProfileStringA(%hs,%hs,%hs) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

BOOL __stdcall Mine_WriteProfileStringW(LPCWSTR a0,
                                        LPCWSTR a1,
                                        LPCWSTR a2)
{
    
    BOOL rv = 0;
    __try {
        rv = Real_WriteProfileStringW(a0, a1, a2);
    } __finally {
        _Print("WriteProfileStringW(%ls,%ls,%ls) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

DWORD __stdcall Mine_WriteTapemark(HANDLE a0,
                                   DWORD a1,
                                   DWORD a2,
                                   BOOL a3)
{
    
    DWORD rv = 0;
    __try {
        rv = Real_WriteTapemark(a0, a1, a2, a3);
    } __finally {
        _Print("WriteTapemark(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

int __stdcall Mine___WSAFDIsSet(SOCKET a0,
                                fd_set* a1)
{
    
    int rv = 0;
    __try {
        rv = Real___WSAFDIsSet(a0, a1);
    } __finally {
        _Print("__WSAFDIsSet(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

long __stdcall Mine__hread(HFILE a0,
                           LPVOID a1,
                           long a2)
{
    
    long rv = 0;
    __try {
        rv = Real__hread(a0, a1, a2);
    } __finally {
        _Print("_hread(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

long __stdcall Mine__hwrite(HFILE a0,
                            LPCSTR a1,
                            long a2)
{
    
    long rv = 0;
    __try {
        rv = Real__hwrite(a0, a1, a2);
    } __finally {
        _Print("_hwrite(%p,%hs,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HFILE __stdcall Mine__lclose(HFILE a0)
{
    
    HFILE rv = 0;
    __try {
        rv = Real__lclose(a0);
    } __finally {
        _Print("_lclose(%p) -> %p", a0, rv);
    };
    return rv;
}

HFILE __stdcall Mine__lcreat(LPCSTR a0,
                             int a1)
{
    
    HFILE rv = 0;
    __try {
        rv = Real__lcreat(a0, a1);
    } __finally {
        _Print("_lcreat(%hs,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

LONG __stdcall Mine__llseek(HFILE a0,
                            LONG a1,
                            int a2)
{
    
    LONG rv = 0;
    __try {
        rv = Real__llseek(a0, a1, a2);
    } __finally {
        _Print("_llseek(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

HFILE __stdcall Mine__lopen(LPCSTR a0,
                            int a1)
{
    
    HFILE rv = 0;
    __try {
        rv = Real__lopen(a0, a1);
    } __finally {
        _Print("_lopen(%hs,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

UINT __stdcall Mine__lread(HFILE a0,
                           LPVOID a1,
                           UINT a2)
{
    
    UINT rv = 0;
    __try {
        rv = Real__lread(a0, a1, a2);
    } __finally {
        _Print("_lread(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

UINT __stdcall Mine__lwrite(HFILE a0,
                            LPCSTR a1,
                            UINT a2)
{
    
    UINT rv = 0;
    __try {
        rv = Real__lwrite(a0, a1, a2);
    } __finally {
        _Print("_lwrite(%p,%hs,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

SOCKET __stdcall Mine_accept(SOCKET a0,
                             sockaddr* a1,
                             int* a2)
{
    
    SOCKET rv = 0;
    __try {
        rv = Real_accept(a0, a1, a2);
    } __finally {
        _Print("accept(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_bind(SOCKET a0,
                        sockaddr* a1,
                        int a2)
{
    
    int rv = 0;
    __try {
        rv = Real_bind(a0, a1, a2);
    } __finally {
        _Print("bind(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_closesocket(SOCKET a0)
{
    
    int rv = 0;
    __try {
        rv = Real_closesocket(a0);
    } __finally {
        _Print("closesocket(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_connect(SOCKET a0,
                           sockaddr* a1,
                           int a2)
{
    
    int rv = 0;
    __try {
        rv = Real_connect(a0, a1, a2);
    } __finally {
        _Print("connect(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

hostent* __stdcall Mine_gethostbyaddr(char* a0,
                                      int a1,
                                      int a2)
{
    
    hostent* rv = 0;
    __try {
        rv = Real_gethostbyaddr(a0, a1, a2);
    } __finally {
        _Print("gethostbyaddr(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

hostent* __stdcall Mine_gethostbyname(char* a0)
{
    
    hostent* rv = 0;
    __try {
        rv = Real_gethostbyname(a0);
    } __finally {
        _Print("gethostbyname(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_gethostname(char* a0,
                               int a1)
{
    
    int rv = 0;
    __try {
        rv = Real_gethostname(a0, a1);
    } __finally {
        _Print("gethostname(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_getpeername(SOCKET a0,
                               sockaddr* a1,
                               int* a2)
{
    
    int rv = 0;
    __try {
        rv = Real_getpeername(a0, a1, a2);
    } __finally {
        _Print("getpeername(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

protoent* __stdcall Mine_getprotobyname(char* a0)
{
    
    protoent* rv = 0;
    __try {
        rv = Real_getprotobyname(a0);
    } __finally {
        _Print("getprotobyname(%p) -> %p", a0, rv);
    };
    return rv;
}

protoent* __stdcall Mine_getprotobynumber(int a0)
{
    
    protoent* rv = 0;
    __try {
        rv = Real_getprotobynumber(a0);
    } __finally {
        _Print("getprotobynumber(%p) -> %p", a0, rv);
    };
    return rv;
}

servent* __stdcall Mine_getservbyname(char* a0,
                                      char* a1)
{
    
    servent* rv = 0;
    __try {
        rv = Real_getservbyname(a0, a1);
    } __finally {
        _Print("getservbyname(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

servent* __stdcall Mine_getservbyport(int a0,
                                      char* a1)
{
    
    servent* rv = 0;
    __try {
        rv = Real_getservbyport(a0, a1);
    } __finally {
        _Print("getservbyport(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

int __stdcall Mine_getsockname(SOCKET a0,
                               sockaddr* a1,
                               int* a2)
{
    
    int rv = 0;
    __try {
        rv = Real_getsockname(a0, a1, a2);
    } __finally {
        _Print("getsockname(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

int __stdcall Mine_getsockopt(SOCKET a0,
                              int a1,
                              int a2,
                              char* a3,
                              int* a4)
{
    
    int rv = 0;
    __try {
        rv = Real_getsockopt(a0, a1, a2, a3, a4);
    } __finally {
        _Print("getsockopt(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

u_long __stdcall Mine_htonl(u_long a0)
{
    
    u_long rv = 0;
    __try {
        rv = Real_htonl(a0);
    } __finally {
        _Print("htonl(%p) -> %p", a0, rv);
    };
    return rv;
}

u_short __stdcall Mine_htons(u_short a0)
{
    
    u_short rv = 0;
    __try {
        rv = Real_htons(a0);
    } __finally {
        _Print("htons(%p) -> %p", a0, rv);
    };
    return rv;
}

unsigned long __stdcall Mine_inet_addr(char* a0)
{
    
    unsigned long rv = 0;
    __try {
        rv = Real_inet_addr(a0);
    } __finally {
        _Print("inet_addr(%p) -> %p", a0, rv);
    };
    return rv;
}

char* __stdcall Mine_inet_ntoa(in_addr a0)
{
    
    char* rv = 0;
    __try {
        rv = Real_inet_ntoa(a0);
    } __finally {
        _Print("inet_ntoa(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_ioctlsocket(SOCKET a0,
                               long a1,
                               u_long* a2)
{
    
    int rv = 0;
    __try {
        rv = Real_ioctlsocket(a0, a1, a2);
    } __finally {
        _Print("ioctlsocket(%p,%p,%p) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

void __stdcall Mine_keybd_event(BYTE a0,
                                BYTE a1,
                                DWORD a2,
                                ULONG_PTR a3)
{
    
    __try {
        Real_keybd_event(a0, a1, a2, a3);
    } __finally {
        _Print("keybd_event(%p,%p,%p,%p) ->", a0, a1, a2, a3);
    };
}

int __stdcall Mine_listen(SOCKET a0,
                          int a1)
{
    
    int rv = 0;
    __try {
        rv = Real_listen(a0, a1);
    } __finally {
        _Print("listen(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

void __stdcall Mine_mouse_event(DWORD a0,
                                DWORD a1,
                                DWORD a2,
                                DWORD a3,
                                ULONG_PTR a4)
{
    
    __try {
        Real_mouse_event(a0, a1, a2, a3, a4);
    } __finally {
        _Print("mouse_event(%p,%p,%p,%p,%p) ->", a0, a1, a2, a3, a4);
    };
}

u_long __stdcall Mine_ntohl(u_long a0)
{
    
    u_long rv = 0;
    __try {
        rv = Real_ntohl(a0);
    } __finally {
        _Print("ntohl(%p) -> %p", a0, rv);
    };
    return rv;
}

u_short __stdcall Mine_ntohs(u_short a0)
{
    
    u_short rv = 0;
    __try {
        rv = Real_ntohs(a0);
    } __finally {
        _Print("ntohs(%p) -> %p", a0, rv);
    };
    return rv;
}

int __stdcall Mine_recv(SOCKET a0,
                        char* a1,
                        int a2,
                        int a3)
{
    
    int rv = 0;
    __try {
        rv = Real_recv(a0, a1, a2, a3);
    } __finally {
        _Print("recv(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

int __stdcall Mine_recvfrom(SOCKET a0,
                            char* a1,
                            int a2,
                            int a3,
                            sockaddr* a4,
                            int* a5)
{
    
    int rv = 0;
    __try {
        rv = Real_recvfrom(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("recvfrom(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

int __stdcall Mine_select(int a0,
                          fd_set* a1,
                          fd_set* a2,
                          fd_set* a3,
                          timeval* a4)
{
    
    int rv = 0;
    __try {
        rv = Real_select(a0, a1, a2, a3, a4);
    } __finally {
        _Print("select(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_send(SOCKET a0,
                        char* a1,
                        int a2,
                        int a3)
{
    
    int rv = 0;
    __try {
        rv = Real_send(a0, a1, a2, a3);
    } __finally {
        _Print("send(%p,%p,%p,%p) -> %p", a0, a1, a2, a3, rv);
    };
    return rv;
}

int __stdcall Mine_sendto(SOCKET a0,
                          char* a1,
                          int a2,
                          int a3,
                          sockaddr* a4,
                          int a5)
{
    
    int rv = 0;
    __try {
        rv = Real_sendto(a0, a1, a2, a3, a4, a5);
    } __finally {
        _Print("sendto(%p,%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, a5, rv);
    };
    return rv;
}

int __stdcall Mine_setsockopt(SOCKET a0,
                              int a1,
                              int a2,
                              char* a3,
                              int a4)
{
    
    int rv = 0;
    __try {
        rv = Real_setsockopt(a0, a1, a2, a3, a4);
    } __finally {
        _Print("setsockopt(%p,%p,%p,%p,%p) -> %p", a0, a1, a2, a3, a4, rv);
    };
    return rv;
}

int __stdcall Mine_shutdown(SOCKET a0,
                            int a1)
{
    
    int rv = 0;
    __try {
        rv = Real_shutdown(a0, a1);
    } __finally {
        _Print("shutdown(%p,%p) -> %p", a0, a1, rv);
    };
    return rv;
}

SOCKET __stdcall Mine_socket(int a0,
                             int a1,
                             int a2)
{
    
    SOCKET rv = 0;
    __try {
        rv = Real_socket(a0, a1, a2);
    } __finally {
        _Print("socket(%x,%x,%x) -> %p", a0, a1, a2, rv);
    };
    return rv;
}

////////////////////////////////////////////////////////////// AttachDetours.
//

VOID DetAttach(PVOID *ppvReal, PVOID pvMine)
{
    PVOID pvReal = NULL;
    if (ppvReal == NULL) {
        ppvReal = &pvReal;
    }

    LONG l = DetourAttach(ppvReal, pvMine);
}

VOID DetDetach(PVOID *ppvReal, PVOID pvMine)
{
    LONG l = DetourDetach(ppvReal, pvMine);
}

#define ATTACH(x)       DetAttach(&(PVOID&)Real_##x,Mine_##x)
#define DETACH(x)       DetDetach(&(PVOID&)Real_##x,Mine_##x)

LONG AttachDetours(VOID)
{
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());

    // For this many APIs, we'll ignore one or two can't be detoured.
    DetourSetIgnoreTooSmall(TRUE);

    ATTACH(AbortDoc);
    ATTACH(AbortPath);
    ATTACH(ActivateKeyboardLayout);
    ATTACH(AddAtomA);
    ATTACH(AddAtomW);
    ATTACH(AddFontResourceA);
    ATTACH(AddFontResourceW);
    ATTACH(AdjustWindowRect);
    ATTACH(AdjustWindowRectEx);
    ATTACH(AllocConsole);
    ATTACH(AngleArc);
    ATTACH(AnimatePalette);
    ATTACH(AnyPopup);
    ATTACH(AppendMenuA);
    ATTACH(AppendMenuW);
    ATTACH(Arc);
    ATTACH(ArcTo);
    ATTACH(AreFileApisANSI);
    ATTACH(ArrangeIconicWindows);
    ATTACH(AttachThreadInput);
    ATTACH(BackupRead);
    ATTACH(BackupSeek);
    ATTACH(BackupWrite);
    ATTACH(Beep);
    ATTACH(BeginDeferWindowPos);
    ATTACH(BeginPaint);
    ATTACH(BeginPath);
    ATTACH(BeginUpdateResourceA);
    ATTACH(BeginUpdateResourceW);
    ATTACH(BindMoniker);
    ATTACH(BitBlt);
    ATTACH(BringWindowToTop);
    ATTACH(BroadcastSystemMessageA);
    ATTACH(BroadcastSystemMessageW);
    ATTACH(BuildCommDCBA);
    ATTACH(BuildCommDCBAndTimeoutsA);
    ATTACH(BuildCommDCBAndTimeoutsW);
    ATTACH(BuildCommDCBW);
    ATTACH(CLSIDFromProgID);
    ATTACH(CLSIDFromString);
    ATTACH(CallMsgFilterA);
    ATTACH(CallMsgFilterW);
    ATTACH(CallNamedPipeA);
    ATTACH(CallNamedPipeW);
    ATTACH(CallNextHookEx);
    ATTACH(CallWindowProcA);
    ATTACH(CallWindowProcW);
    ATTACH(CancelDC);
    ATTACH(CancelIo);
    ATTACH(CancelWaitableTimer);
    ATTACH(CascadeWindows);
    ATTACH(ChangeClipboardChain);
    ATTACH(ChangeDisplaySettingsA);
    ATTACH(ChangeDisplaySettingsExA);
    ATTACH(ChangeDisplaySettingsExW);
    ATTACH(ChangeDisplaySettingsW);
    ATTACH(ChangeMenuA);
    ATTACH(ChangeMenuW);
    ATTACH(CharLowerA);
    ATTACH(CharLowerBuffA);
    ATTACH(CharLowerBuffW);
    ATTACH(CharLowerW);
    ATTACH(CharNextA);
    ATTACH(CharNextExA);
    ATTACH(CharNextW);
    ATTACH(CharPrevA);
    ATTACH(CharPrevExA);
    ATTACH(CharPrevW);
    ATTACH(CharToOemA);
    ATTACH(CharToOemBuffA);
    ATTACH(CharToOemBuffW);
    ATTACH(CharToOemW);
    ATTACH(CharUpperA);
    ATTACH(CharUpperBuffA);
    ATTACH(CharUpperBuffW);
    ATTACH(CharUpperW);
    ATTACH(CheckColorsInGamut);
    ATTACH(CheckDlgButton);
    ATTACH(CheckMenuItem);
    ATTACH(CheckMenuRadioItem);
    ATTACH(CheckRadioButton);
    ATTACH(ChildWindowFromPoint);
    ATTACH(ChildWindowFromPointEx);
    ATTACH(ChoosePixelFormat);
    ATTACH(Chord);
    ATTACH(ClearCommBreak);
    ATTACH(ClearCommError);
    ATTACH(ClientToScreen);
    ATTACH(ClipCursor);
    ATTACH(CloseClipboard);
    ATTACH(CloseDesktop);
    ATTACH(CloseEnhMetaFile);
    ATTACH(CloseFigure);
    ATTACH(CloseHandle);
    ATTACH(CloseMetaFile);
    ATTACH(CloseWindow);
    ATTACH(CloseWindowStation);
    ATTACH(CoAddRefServerProcess);
    ATTACH(CoBuildVersion);
    ATTACH(CoCopyProxy);
    ATTACH(CoCreateFreeThreadedMarshaler);
    ATTACH(CoCreateGuid);
    ATTACH(CoCreateInstance);
    ATTACH(CoCreateInstanceEx);
    ATTACH(CoDisconnectObject);
    ATTACH(CoDosDateTimeToFileTime);
    ATTACH(CoFileTimeNow);
    ATTACH(CoFileTimeToDosDateTime);
    ATTACH(CoFreeAllLibraries);
    ATTACH(CoFreeLibrary);
    ATTACH(CoFreeUnusedLibraries);
    ATTACH(CoGetCallContext);
    ATTACH(CoGetClassObject);
    ATTACH(CoGetCurrentProcess);
    ATTACH(CoGetInstanceFromFile);
    ATTACH(CoGetInstanceFromIStorage);
    ATTACH(CoGetInterfaceAndReleaseStream);
    ATTACH(CoGetMalloc);
    ATTACH(CoGetMarshalSizeMax);
    ATTACH(CoGetObject);
    ATTACH(CoGetPSClsid);
    ATTACH(CoGetStandardMarshal);
    ATTACH(CoGetStdMarshalEx);
    ATTACH(CoGetTreatAsClass);
    ATTACH(CoImpersonateClient);
    ATTACH(CoInitialize);
    ATTACH(CoInitializeEx);
    ATTACH(CoInitializeSecurity);
    ATTACH(CoIsHandlerConnected);
    ATTACH(CoIsOle1Class);
    ATTACH(CoLoadLibrary);
    ATTACH(CoLockObjectExternal);
    ATTACH(CoMarshalHresult);
    ATTACH(CoMarshalInterThreadInterfaceInStream);
    ATTACH(CoMarshalInterface);
    ATTACH(CoQueryAuthenticationServices);
    ATTACH(CoQueryClientBlanket);
    ATTACH(CoQueryProxyBlanket);
    ATTACH(CoRegisterChannelHook);
    ATTACH(CoRegisterClassObject);
    ATTACH(CoRegisterMallocSpy);
    ATTACH(CoRegisterMessageFilter);
    ATTACH(CoRegisterPSClsid);
    ATTACH(CoRegisterSurrogate);
    ATTACH(CoReleaseMarshalData);
    ATTACH(CoReleaseServerProcess);
    ATTACH(CoResumeClassObjects);
    ATTACH(CoRevertToSelf);
    ATTACH(CoRevokeClassObject);
    ATTACH(CoRevokeMallocSpy);
    ATTACH(CoSetProxyBlanket);
    ATTACH(CoSuspendClassObjects);
    ATTACH(CoSwitchCallContext);
    ATTACH(CoTaskMemAlloc);
    ATTACH(CoTaskMemFree);
    ATTACH(CoTaskMemRealloc);
    ATTACH(CoTreatAsClass);
    ATTACH(CoUninitialize);
    ATTACH(CoUnmarshalHresult);
    ATTACH(CoUnmarshalInterface);
    ATTACH(ColorMatchToTarget);
    ATTACH(CombineRgn);
    ATTACH(CombineTransform);
    ATTACH(CommConfigDialogA);
    ATTACH(CommConfigDialogW);
    ATTACH(CompareFileTime);
    ATTACH(CompareStringA);
    ATTACH(CompareStringW);
    ATTACH(ConnectNamedPipe);
#if !defined(DETOURS_ARM)
    ATTACH(ContinueDebugEvent);
#endif // !DETOURS_ARM
    ATTACH(ConvertDefaultLocale);
    ATTACH(ConvertThreadToFiber);
    ATTACH(CopyAcceleratorTableA);
    ATTACH(CopyAcceleratorTableW);
    ATTACH(CopyEnhMetaFileA);
    ATTACH(CopyEnhMetaFileW);
    ATTACH(CopyFileA);
    ATTACH(CopyFileExA);
    ATTACH(CopyFileExW);
    ATTACH(CopyFileW);
    ATTACH(CopyIcon);
    ATTACH(CopyImage);
    ATTACH(CopyMetaFileA);
    ATTACH(CopyMetaFileW);
    ATTACH(CopyRect);
    ATTACH(CountClipboardFormats);
    ATTACH(CreateAcceleratorTableA);
    ATTACH(CreateAcceleratorTableW);
    ATTACH(CreateAntiMoniker);
    ATTACH(CreateBindCtx);
    ATTACH(CreateBitmap);
    ATTACH(CreateBitmapIndirect);
    ATTACH(CreateBrushIndirect);
    ATTACH(CreateCaret);
    ATTACH(CreateClassMoniker);
    ATTACH(CreateColorSpaceA);
    ATTACH(CreateColorSpaceW);
    ATTACH(CreateCompatibleBitmap);
    ATTACH(CreateCompatibleDC);
    ATTACH(CreateConsoleScreenBuffer);
    ATTACH(CreateCursor);
    ATTACH(CreateDCA);
    ATTACH(CreateDCW);
    ATTACH(CreateDIBPatternBrush);
    ATTACH(CreateDIBPatternBrushPt);
    ATTACH(CreateDIBSection);
    ATTACH(CreateDIBitmap);
    ATTACH(CreateDataAdviseHolder);
    ATTACH(CreateDataCache);
    ATTACH(CreateDesktopA);
    ATTACH(CreateDesktopW);
    ATTACH(CreateDialogIndirectParamA);
    ATTACH(CreateDialogIndirectParamW);
    ATTACH(CreateDialogParamA);
    ATTACH(CreateDialogParamW);
    ATTACH(CreateDirectoryA);
    ATTACH(CreateDirectoryExA);
    ATTACH(CreateDirectoryExW);
    ATTACH(CreateDirectoryW);
    ATTACH(CreateDiscardableBitmap);
    ATTACH(CreateEllipticRgn);
    ATTACH(CreateEllipticRgnIndirect);
    ATTACH(CreateEnhMetaFileA);
    ATTACH(CreateEnhMetaFileW);
    ATTACH(CreateEventA);
    ATTACH(CreateEventW);
    ATTACH(CreateFiber);
    ATTACH(CreateFileA);
    ATTACH(CreateFileMappingA);
    ATTACH(CreateFileMappingW);
    ATTACH(CreateFileMoniker);
    ATTACH(CreateFileW);
    ATTACH(CreateFontA);
    ATTACH(CreateFontIndirectA);
    ATTACH(CreateFontIndirectW);
    ATTACH(CreateFontW);
    ATTACH(CreateGenericComposite);
    ATTACH(CreateHalftonePalette);
    ATTACH(CreateHatchBrush);
    ATTACH(CreateICA);
    ATTACH(CreateICW);
    ATTACH(CreateILockBytesOnHGlobal);
    ATTACH(CreateIcon);
    ATTACH(CreateIconFromResource);
    ATTACH(CreateIconFromResourceEx);
    ATTACH(CreateIconIndirect);
    ATTACH(CreateIoCompletionPort);
    ATTACH(CreateItemMoniker);
    ATTACH(CreateMDIWindowA);
    ATTACH(CreateMDIWindowW);
    ATTACH(CreateMailslotA);
    ATTACH(CreateMailslotW);
    ATTACH(CreateMenu);
    ATTACH(CreateMetaFileA);
    ATTACH(CreateMetaFileW);
    ATTACH(CreateMutexA);
    ATTACH(CreateMutexW);
    ATTACH(CreateNamedPipeA);
    ATTACH(CreateNamedPipeW);
    ATTACH(CreateOleAdviseHolder);
    ATTACH(CreatePalette);
    ATTACH(CreatePatternBrush);
    ATTACH(CreatePen);
    ATTACH(CreatePenIndirect);
    ATTACH(CreatePipe);
    ATTACH(CreatePointerMoniker);
    ATTACH(CreatePolyPolygonRgn);
    ATTACH(CreatePolygonRgn);
    ATTACH(CreatePopupMenu);
    ATTACH(CreateProcessA);
    ATTACH(CreateProcessW);
    ATTACH(CreateProcessAsUserA);
    ATTACH(CreateProcessAsUserW);
#if(_WIN32_WINNT >= 0x0500)
    ATTACH(CreateProcessWithLogonW);
    ATTACH(CreateProcessWithTokenW);
#endif //(_WIN32_WINNT >= 0x0500)
    ATTACH(CreateRectRgn);
    ATTACH(CreateRectRgnIndirect);
    ATTACH(CreateRemoteThread);
    ATTACH(CreateRoundRectRgn);
    ATTACH(CreateScalableFontResourceA);
    ATTACH(CreateScalableFontResourceW);
    ATTACH(CreateSemaphoreA);
    ATTACH(CreateSemaphoreW);
    ATTACH(CreateSolidBrush);
    ATTACH(CreateStdProgressIndicator);
    ATTACH(CreateStreamOnHGlobal);
    ATTACH(CreateTapePartition);
    ATTACH(CreateThread);
    ATTACH(CreateWaitableTimerA);
    ATTACH(CreateWaitableTimerW);
    ATTACH(CreateWindowExA);
    ATTACH(CreateWindowExW);
    ATTACH(CreateWindowStationA);
    ATTACH(CreateWindowStationW);
    ATTACH(DPtoLP);
    ATTACH(DdeAbandonTransaction);
    ATTACH(DdeAccessData);
    ATTACH(DdeAddData);
    ATTACH(DdeClientTransaction);
    ATTACH(DdeCmpStringHandles);
    ATTACH(DdeConnect);
    ATTACH(DdeConnectList);
    ATTACH(DdeCreateDataHandle);
    ATTACH(DdeCreateStringHandleA);
    ATTACH(DdeCreateStringHandleW);
    ATTACH(DdeDisconnect);
    ATTACH(DdeDisconnectList);
    ATTACH(DdeEnableCallback);
    ATTACH(DdeFreeDataHandle);
    ATTACH(DdeFreeStringHandle);
    ATTACH(DdeGetData);
    ATTACH(DdeGetLastError);
    ATTACH(DdeImpersonateClient);
    ATTACH(DdeKeepStringHandle);
    ATTACH(DdeNameService);
    ATTACH(DdePostAdvise);
    ATTACH(DdeQueryConvInfo);
    ATTACH(DdeQueryNextServer);
    ATTACH(DdeQueryStringA);
    ATTACH(DdeQueryStringW);
    ATTACH(DdeReconnect);
    ATTACH(DdeSetQualityOfService);
    ATTACH(DdeSetUserHandle);
    ATTACH(DdeUnaccessData);
    ATTACH(DdeUninitialize);
    ATTACH(DebugActiveProcess);
    ATTACH(DebugActiveProcessStop);
    ATTACH(DebugBreak);
    ATTACH(DefDlgProcA);
    ATTACH(DefDlgProcW);
    ATTACH(DefFrameProcA);
    ATTACH(DefFrameProcW);
    ATTACH(DefMDIChildProcA);
    ATTACH(DefMDIChildProcW);
    ATTACH(DefWindowProcA);
    ATTACH(DefWindowProcW);
    ATTACH(DeferWindowPos);
    ATTACH(DefineDosDeviceA);
    ATTACH(DefineDosDeviceW);
    ATTACH(DeleteAtom);
    ATTACH(DeleteColorSpace);
    ATTACH(DeleteDC);
    ATTACH(DeleteEnhMetaFile);
    ATTACH(DeleteFiber);
    ATTACH(DeleteFileA);
    ATTACH(DeleteFileW);
    ATTACH(DeleteMenu);
    ATTACH(DeleteMetaFile);
    ATTACH(DeleteObject);
    ATTACH(DescribePixelFormat);
    ATTACH(DestroyAcceleratorTable);
    ATTACH(DestroyCaret);
    ATTACH(DestroyCursor);
    ATTACH(DestroyIcon);
    ATTACH(DestroyMenu);
    ATTACH(DestroyWindow);
    ATTACH(DeviceIoControl);
    ATTACH(DialogBoxIndirectParamA);
    ATTACH(DialogBoxIndirectParamW);
    ATTACH(DialogBoxParamA);
    ATTACH(DialogBoxParamW);
    ATTACH(DisableThreadLibraryCalls);
    ATTACH(DisconnectNamedPipe);
    ATTACH(DispatchMessageA);
    ATTACH(DispatchMessageW);
    ATTACH(DlgDirListA);
    ATTACH(DlgDirListComboBoxA);
    ATTACH(DlgDirListComboBoxW);
    ATTACH(DlgDirListW);
    ATTACH(DlgDirSelectComboBoxExA);
    ATTACH(DlgDirSelectComboBoxExW);
    ATTACH(DlgDirSelectExA);
    ATTACH(DlgDirSelectExW);
    ATTACH(DoDragDrop);
    ATTACH(DosDateTimeToFileTime);
    ATTACH(DragDetect);
    ATTACH(DragObject);
    ATTACH(DrawAnimatedRects);
    ATTACH(DrawCaption);
    ATTACH(DrawEdge);
    ATTACH(DrawEscape);
    ATTACH(DrawFocusRect);
    ATTACH(DrawFrameControl);
    ATTACH(DrawIcon);
    ATTACH(DrawIconEx);
    ATTACH(DrawMenuBar);
    ATTACH(DrawStateA);
    ATTACH(DrawStateW);
    ATTACH(DrawTextA);
    ATTACH(DrawTextExA);
    ATTACH(DrawTextExW);
    ATTACH(DrawTextW);
    ATTACH(DuplicateHandle);
    ATTACH(Ellipse);
    ATTACH(EmptyClipboard);
    ATTACH(EnableMenuItem);
    ATTACH(EnableScrollBar);
    ATTACH(EnableWindow);
    ATTACH(EndDeferWindowPos);
    ATTACH(EndDialog);
    ATTACH(EndDoc);
    ATTACH(EndPage);
    ATTACH(EndPaint);
    ATTACH(EndPath);
    ATTACH(EndUpdateResourceA);
    ATTACH(EndUpdateResourceW);
    ATTACH(EnumCalendarInfoA);
    ATTACH(EnumCalendarInfoW);
    ATTACH(EnumChildWindows);
    ATTACH(EnumClipboardFormats);
    ATTACH(EnumDateFormatsA);
    ATTACH(EnumDateFormatsW);
    ATTACH(EnumDesktopWindows);
    ATTACH(EnumDesktopsA);
    ATTACH(EnumDesktopsW);
    ATTACH(EnumDisplaySettingsA);
    ATTACH(EnumDisplaySettingsW);
    ATTACH(EnumEnhMetaFile);
    ATTACH(EnumFontFamiliesA);
    ATTACH(EnumFontFamiliesExA);
    ATTACH(EnumFontFamiliesExW);
    ATTACH(EnumFontFamiliesW);
    ATTACH(EnumFontsA);
    ATTACH(EnumFontsW);
    ATTACH(EnumICMProfilesA);
    ATTACH(EnumICMProfilesW);
    ATTACH(EnumMetaFile);
    ATTACH(EnumObjects);
    ATTACH(EnumPropsA);
    ATTACH(EnumPropsExA);
    ATTACH(EnumPropsExW);
    ATTACH(EnumPropsW);
    ATTACH(EnumResourceLanguagesA);
    ATTACH(EnumResourceLanguagesW);
    ATTACH(EnumResourceNamesA);
    ATTACH(EnumResourceNamesW);
    ATTACH(EnumResourceTypesA);
    ATTACH(EnumResourceTypesW);
    ATTACH(EnumSystemCodePagesA);
    ATTACH(EnumSystemCodePagesW);
#if(WINVER >= 0x0500)
    ATTACH(EnumSystemLocalesA);
    ATTACH(EnumSystemLocalesW);
#endif // (WINVER >= 0x0500)
    ATTACH(EnumThreadWindows);
    ATTACH(EnumTimeFormatsA);
    ATTACH(EnumTimeFormatsW);
    ATTACH(EnumWindowStationsA);
    ATTACH(EnumWindowStationsW);
    ATTACH(EnumWindows);
    ATTACH(EqualRect);
    ATTACH(EqualRgn);
    ATTACH(EraseTape);
    ATTACH(Escape);
    ATTACH(EscapeCommFunction);
    ATTACH(ExcludeClipRect);
    ATTACH(ExcludeUpdateRgn);
    ATTACH(ExitProcess);
    ATTACH(ExitThread);
    ATTACH(ExitWindowsEx);
    ATTACH(ExpandEnvironmentStringsA);
    ATTACH(ExpandEnvironmentStringsW);
    ATTACH(ExtCreatePen);
    ATTACH(ExtCreateRegion);
    ATTACH(ExtEscape);
    ATTACH(ExtFloodFill);
    ATTACH(ExtSelectClipRgn);
    ATTACH(ExtTextOutA);
    ATTACH(ExtTextOutW);
    ATTACH(FatalAppExitA);
    ATTACH(FatalAppExitW);
    ATTACH(FatalExit);
    ATTACH(FileTimeToDosDateTime);
    ATTACH(FileTimeToLocalFileTime);
    ATTACH(FileTimeToSystemTime);
    ATTACH(FillConsoleOutputAttribute);
    ATTACH(FillConsoleOutputCharacterA);
    ATTACH(FillConsoleOutputCharacterW);
    ATTACH(FillPath);
    ATTACH(FillRect);
    ATTACH(FillRgn);
    ATTACH(FindAtomA);
    ATTACH(FindAtomW);
    ATTACH(FindClose);
    ATTACH(FindCloseChangeNotification);
    ATTACH(FindFirstChangeNotificationA);
    ATTACH(FindFirstChangeNotificationW);
    ATTACH(FindFirstFileA);
    ATTACH(FindFirstFileExA);
    ATTACH(FindFirstFileExW);
    ATTACH(FindFirstFileW);
    ATTACH(FindNextChangeNotification);
    ATTACH(FindNextFileA);
    ATTACH(FindNextFileW);
    ATTACH(FindResourceA);
    ATTACH(FindResourceExA);
    ATTACH(FindResourceExW);
    ATTACH(FindResourceW);
    ATTACH(FindWindowA);
    ATTACH(FindWindowExA);
    ATTACH(FindWindowExW);
    ATTACH(FindWindowW);
    ATTACH(FixBrushOrgEx);
    ATTACH(FlashWindow);
    ATTACH(FlattenPath);
    ATTACH(FloodFill);
    ATTACH(FlushConsoleInputBuffer);
    ATTACH(FlushFileBuffers);
    ATTACH(FlushViewOfFile);
    ATTACH(FmtIdToPropStgName);
    ATTACH(FoldStringA);
    ATTACH(FoldStringW);
    ATTACH(FormatMessageA);
    ATTACH(FormatMessageW);
    ATTACH(FrameRect);
    ATTACH(FrameRgn);
    ATTACH(FreeConsole);
    ATTACH(FreeDDElParam);
    ATTACH(FreeEnvironmentStringsA);
    ATTACH(FreeEnvironmentStringsW);
    ATTACH(FreeLibrary);
    ATTACH(FreeLibraryAndExitThread);
    ATTACH(FreePropVariantArray);
    ATTACH(FreeResource);
    ATTACH(GdiComment);
    ATTACH(GdiFlush);
    ATTACH(GdiGetBatchLimit);
    ATTACH(GdiSetBatchLimit);
    ATTACH(GenerateConsoleCtrlEvent);
    ATTACH(GetACP);
    ATTACH(GetActiveWindow);
    ATTACH(GetArcDirection);
    ATTACH(GetAspectRatioFilterEx);
    ATTACH(GetAsyncKeyState);
    ATTACH(GetAtomNameA);
    ATTACH(GetAtomNameW);
    ATTACH(GetBinaryTypeA);
    ATTACH(GetBinaryTypeW);
    ATTACH(GetBitmapBits);
    ATTACH(GetBitmapDimensionEx);
    ATTACH(GetBkColor);
    ATTACH(GetBkMode);
    ATTACH(GetBoundsRect);
    ATTACH(GetBrushOrgEx);
    ATTACH(GetCPInfo);
    ATTACH(GetCapture);
    ATTACH(GetCaretBlinkTime);
    ATTACH(GetCaretPos);
    ATTACH(GetCharABCWidthsA);
    ATTACH(GetCharABCWidthsFloatA);
    ATTACH(GetCharABCWidthsFloatW);
    ATTACH(GetCharABCWidthsW);
    ATTACH(GetCharWidth32A);
    ATTACH(GetCharWidth32W);
    ATTACH(GetCharWidthA);
    ATTACH(GetCharWidthFloatA);
    ATTACH(GetCharWidthFloatW);
    ATTACH(GetCharWidthW);
    ATTACH(GetCharacterPlacementA);
    ATTACH(GetCharacterPlacementW);
    ATTACH(GetClassFile);
    ATTACH(GetClassInfoA);
    ATTACH(GetClassInfoExA);
    ATTACH(GetClassInfoExW);
    ATTACH(GetClassInfoW);
    ATTACH(GetClassLongA);
    ATTACH(GetClassLongW);
    ATTACH(GetClassNameA);
    ATTACH(GetClassNameW);
    ATTACH(GetClassWord);
    ATTACH(GetClientRect);
    ATTACH(GetClipBox);
    ATTACH(GetClipCursor);
    ATTACH(GetClipRgn);
    ATTACH(GetClipboardData);
    ATTACH(GetClipboardFormatNameA);
    ATTACH(GetClipboardFormatNameW);
    ATTACH(GetClipboardOwner);
    ATTACH(GetClipboardViewer);
    ATTACH(GetColorAdjustment);
    ATTACH(GetColorSpace);
    ATTACH(GetCommConfig);
    ATTACH(GetCommMask);
    ATTACH(GetCommModemStatus);
    ATTACH(GetCommProperties);
    ATTACH(GetCommState);
    ATTACH(GetCommTimeouts);
    ATTACH(GetCommandLineA);
    ATTACH(GetCommandLineW);
    ATTACH(GetComputerNameA);
    ATTACH(GetComputerNameW);
    ATTACH(GetConsoleCP);
    ATTACH(GetConsoleCursorInfo);
    ATTACH(GetConsoleMode);
    ATTACH(GetConsoleOutputCP);
    ATTACH(GetConsoleScreenBufferInfo);
    ATTACH(GetConsoleTitleA);
    ATTACH(GetConsoleTitleW);
    ATTACH(GetConvertStg);
    ATTACH(GetCurrencyFormatA);
    ATTACH(GetCurrencyFormatW);
    ATTACH(GetCurrentDirectoryA);
    ATTACH(GetCurrentDirectoryW);
    ATTACH(GetCurrentObject);
    ATTACH(GetCurrentPositionEx);
    ATTACH(GetCurrentProcess);
    ATTACH(GetCurrentProcessId);
    ATTACH(GetCurrentThreadId);
    ATTACH(GetCursor);
    ATTACH(GetCursorPos);
    ATTACH(GetDC);
    ATTACH(GetDCEx);
    ATTACH(GetDCOrgEx);
    ATTACH(GetDIBColorTable);
    ATTACH(GetDIBits);
    ATTACH(GetDateFormatA);
    ATTACH(GetDateFormatW);
    ATTACH(GetDefaultCommConfigA);
    ATTACH(GetDefaultCommConfigW);
    ATTACH(GetDesktopWindow);
    ATTACH(GetDeviceCaps);
    ATTACH(GetDeviceGammaRamp);
    ATTACH(GetDialogBaseUnits);
    ATTACH(GetDiskFreeSpaceA);
    ATTACH(GetDiskFreeSpaceExA);
    ATTACH(GetDiskFreeSpaceExW);
    ATTACH(GetDiskFreeSpaceW);
    ATTACH(GetDlgCtrlID);
    ATTACH(GetDlgItem);
    ATTACH(GetDlgItemInt);
    ATTACH(GetDlgItemTextA);
    ATTACH(GetDlgItemTextW);
    ATTACH(GetDoubleClickTime);
    ATTACH(GetDriveTypeA);
    ATTACH(GetDriveTypeW);
    ATTACH(GetEnhMetaFileA);
    ATTACH(GetEnhMetaFileBits);
    ATTACH(GetEnhMetaFileDescriptionA);
    ATTACH(GetEnhMetaFileDescriptionW);
    ATTACH(GetEnhMetaFileHeader);
    ATTACH(GetEnhMetaFilePaletteEntries);
    ATTACH(GetEnhMetaFilePixelFormat);
    ATTACH(GetEnhMetaFileW);
    ATTACH(GetEnvironmentStrings);
    ATTACH(GetEnvironmentStringsW);
    ATTACH(GetEnvironmentVariableA);
    ATTACH(GetEnvironmentVariableW);
    ATTACH(GetExitCodeProcess);
    ATTACH(GetExitCodeThread);
    ATTACH(GetFileAttributesA);
    ATTACH(GetFileAttributesExA);
    ATTACH(GetFileAttributesExW);
    ATTACH(GetFileAttributesW);
    ATTACH(GetFileInformationByHandle);
    ATTACH(GetFileSize);
    ATTACH(GetFileTime);
    ATTACH(GetFileType);
    ATTACH(GetFocus);
    ATTACH(GetFontData);
    ATTACH(GetFontLanguageInfo);
    ATTACH(GetForegroundWindow);
    ATTACH(GetFullPathNameA);
    ATTACH(GetFullPathNameW);
    ATTACH(GetGlyphOutlineA);
    ATTACH(GetGlyphOutlineW);
    ATTACH(GetGraphicsMode);
    ATTACH(GetHGlobalFromILockBytes);
    ATTACH(GetHGlobalFromStream);
    ATTACH(GetHandleInformation);
    ATTACH(GetICMProfileA);
    ATTACH(GetICMProfileW);
    ATTACH(GetIconInfo);
    ATTACH(GetInputState);
    ATTACH(GetKBCodePage);
    ATTACH(GetKerningPairsA);
    ATTACH(GetKerningPairsW);
    ATTACH(GetKeyNameTextA);
    ATTACH(GetKeyNameTextW);
    ATTACH(GetKeyState);
    ATTACH(GetKeyboardLayout);
    ATTACH(GetKeyboardLayoutList);
    ATTACH(GetKeyboardLayoutNameA);
    ATTACH(GetKeyboardLayoutNameW);
    ATTACH(GetKeyboardState);
    ATTACH(GetKeyboardType);
    ATTACH(GetLastActivePopup);
    ATTACH(GetLocalTime);
    ATTACH(GetLocaleInfoA);
    ATTACH(GetLocaleInfoW);
    ATTACH(GetLogColorSpaceA);
    ATTACH(GetLogColorSpaceW);
    ATTACH(GetLogicalDriveStringsA);
    ATTACH(GetLogicalDriveStringsW);
    ATTACH(GetLogicalDrives);
    ATTACH(GetMailslotInfo);
    ATTACH(GetMapMode);
    ATTACH(GetMenu);
    ATTACH(GetMenuCheckMarkDimensions);
    ATTACH(GetMenuContextHelpId);
    ATTACH(GetMenuDefaultItem);
    ATTACH(GetMenuItemCount);
    ATTACH(GetMenuItemID);
    ATTACH(GetMenuItemInfoA);
    ATTACH(GetMenuItemInfoW);
    ATTACH(GetMenuItemRect);
    ATTACH(GetMenuState);
    ATTACH(GetMenuStringA);
    ATTACH(GetMenuStringW);
    ATTACH(GetMessageA);
    ATTACH(GetMessageExtraInfo);
    ATTACH(GetMessagePos);
    ATTACH(GetMessageTime);
    ATTACH(GetMessageW);
    ATTACH(GetMetaFileA);
    ATTACH(GetMetaFileBitsEx);
    ATTACH(GetMetaFileW);
    ATTACH(GetMetaRgn);
    ATTACH(GetMiterLimit);
    ATTACH(GetModuleFileNameA);
    ATTACH(GetModuleFileNameW);
    ATTACH(GetModuleHandleA);
    ATTACH(GetModuleHandleW);
    ATTACH(GetNamedPipeHandleStateA);
    ATTACH(GetNamedPipeHandleStateW);
    ATTACH(GetNamedPipeInfo);
    ATTACH(GetNearestColor);
    ATTACH(GetNearestPaletteIndex);
    ATTACH(GetNextDlgGroupItem);
    ATTACH(GetNextDlgTabItem);
    ATTACH(GetNumberFormatA);
    ATTACH(GetNumberFormatW);
    ATTACH(GetNumberOfConsoleInputEvents);
    ATTACH(GetNumberOfConsoleMouseButtons);
    ATTACH(GetOEMCP);
    ATTACH(GetObjectA);
    ATTACH(GetObjectType);
    ATTACH(GetObjectW);
    ATTACH(GetOpenClipboardWindow);
    ATTACH(GetOutlineTextMetricsA);
    ATTACH(GetOutlineTextMetricsW);
    ATTACH(GetOverlappedResult);
    ATTACH(GetPaletteEntries);
    ATTACH(GetParent);
    ATTACH(GetPath);
    ATTACH(GetPixel);
    ATTACH(GetPixelFormat);
    ATTACH(GetPolyFillMode);
    ATTACH(GetPriorityClass);
    ATTACH(GetPriorityClipboardFormat);
    ATTACH(GetPrivateProfileIntA);
    ATTACH(GetPrivateProfileIntW);
    ATTACH(GetPrivateProfileSectionA);
    ATTACH(GetPrivateProfileSectionNamesA);
    ATTACH(GetPrivateProfileSectionNamesW);
    ATTACH(GetPrivateProfileSectionW);
    ATTACH(GetPrivateProfileStringA);
    ATTACH(GetPrivateProfileStringW);
    ATTACH(GetPrivateProfileStructA);
    ATTACH(GetPrivateProfileStructW);
    ATTACH(GetProcAddress);
    ATTACH(GetProcessAffinityMask);
    ATTACH(GetProcessHeaps);
    ATTACH(GetProcessShutdownParameters);
    ATTACH(GetProcessTimes);
    ATTACH(GetProcessVersion);
    ATTACH(GetProcessWindowStation);
    ATTACH(GetProcessWorkingSetSize);
    ATTACH(GetProfileIntA);
    ATTACH(GetProfileIntW);
    ATTACH(GetProfileSectionA);
    ATTACH(GetProfileSectionW);
    ATTACH(GetProfileStringA);
    ATTACH(GetProfileStringW);
    ATTACH(GetPropA);
    ATTACH(GetPropW);
    ATTACH(GetQueueStatus);
    ATTACH(GetQueuedCompletionStatus);
    ATTACH(GetROP2);
    ATTACH(GetRasterizerCaps);
    ATTACH(GetRegionData);
    ATTACH(GetRgnBox);
    ATTACH(GetRunningObjectTable);
    ATTACH(GetScrollInfo);
    ATTACH(GetScrollPos);
    ATTACH(GetScrollRange);
    ATTACH(GetShortPathNameA);
    ATTACH(GetShortPathNameW);
    ATTACH(GetStartupInfoA);
    ATTACH(GetStartupInfoW);
    ATTACH(GetStdHandle);
    ATTACH(GetStockObject);
    ATTACH(GetStretchBltMode);
    ATTACH(GetSubMenu);
    ATTACH(GetSysColor);
    ATTACH(GetSysColorBrush);
    ATTACH(GetSystemDefaultLCID);
    ATTACH(GetSystemDefaultLangID);
    ATTACH(GetSystemDirectoryA);
    ATTACH(GetSystemDirectoryW);
    ATTACH(GetSystemInfo);
    ATTACH(GetSystemMenu);
    ATTACH(GetSystemMetrics);
    ATTACH(GetSystemPaletteEntries);
    ATTACH(GetSystemPaletteUse);
    ATTACH(GetSystemPowerStatus);
    ATTACH(GetSystemTime);
    ATTACH(GetSystemTimeAdjustment);
    ATTACH(GetSystemTimeAsFileTime);
    ATTACH(GetTabbedTextExtentA);
    ATTACH(GetTabbedTextExtentW);
    ATTACH(GetTapeParameters);
    ATTACH(GetTapePosition);
    ATTACH(GetTapeStatus);
    ATTACH(GetTempFileNameA);
    ATTACH(GetTempFileNameW);
    ATTACH(GetTempPathA);
    ATTACH(GetTempPathW);
    ATTACH(GetTextAlign);
    ATTACH(GetTextCharacterExtra);
    ATTACH(GetTextCharset);
    ATTACH(GetTextCharsetInfo);
    ATTACH(GetTextColor);
    ATTACH(GetTextExtentExPointA);
    ATTACH(GetTextExtentExPointW);
    ATTACH(GetTextExtentPoint32A);
    ATTACH(GetTextExtentPoint32W);
    ATTACH(GetTextExtentPointA);
    ATTACH(GetTextExtentPointW);
    ATTACH(GetTextFaceA);
    ATTACH(GetTextFaceW);
    ATTACH(GetTextMetricsA);
    ATTACH(GetTextMetricsW);
    ATTACH(GetThreadContext);
    ATTACH(GetThreadDesktop);
#if(WINVER >= 0x0500)
    ATTACH(GetThreadLocale);
#endif // (WINVER >= 0x0500)
    ATTACH(GetThreadPriority);
    ATTACH(GetThreadPriorityBoost);
    ATTACH(GetThreadSelectorEntry);
    ATTACH(GetThreadTimes);
    ATTACH(GetTickCount);
    ATTACH(GetTimeFormatA);
    ATTACH(GetTimeFormatW);
    ATTACH(GetTimeZoneInformation);
    ATTACH(GetTopWindow);
    ATTACH(GetUpdateRect);
    ATTACH(GetUpdateRgn);
    ATTACH(GetUserDefaultLCID);
    ATTACH(GetUserDefaultLangID);
    ATTACH(GetUserObjectInformationA);
    ATTACH(GetUserObjectInformationW);
    ATTACH(GetUserObjectSecurity);
    ATTACH(GetVersion);
    ATTACH(GetVersionExA);
    ATTACH(GetVersionExW);
    ATTACH(GetViewportExtEx);
    ATTACH(GetViewportOrgEx);
    ATTACH(GetVolumeInformationA);
    ATTACH(GetVolumeInformationW);
    ATTACH(GetWinMetaFileBits);
    ATTACH(GetWindow);
    ATTACH(GetWindowContextHelpId);
    ATTACH(GetWindowDC);
    ATTACH(GetWindowExtEx);
    ATTACH(GetWindowLongA);
    ATTACH(GetWindowLongW);
    ATTACH(GetWindowOrgEx);
    ATTACH(GetWindowPlacement);
    ATTACH(GetWindowRect);
    ATTACH(GetWindowRgn);
    ATTACH(GetWindowTextA);
    ATTACH(GetWindowTextLengthA);
    ATTACH(GetWindowTextLengthW);
    ATTACH(GetWindowTextW);
    ATTACH(GetWindowThreadProcessId);
    ATTACH(GetWindowWord);
    ATTACH(GetWindowsDirectoryA);
    ATTACH(GetWindowsDirectoryW);
    ATTACH(GetWorldTransform);
    ATTACH(GlobalAddAtomA);
    ATTACH(GlobalAddAtomW);
    ATTACH(GlobalAlloc);
    ATTACH(GlobalCompact);
    ATTACH(GlobalDeleteAtom);
    ATTACH(GlobalFindAtomA);
    ATTACH(GlobalFindAtomW);
    ATTACH(GlobalFix);
    ATTACH(GlobalFlags);
    ATTACH(GlobalFree);
    ATTACH(GlobalGetAtomNameA);
    ATTACH(GlobalGetAtomNameW);
    ATTACH(GlobalHandle);
    ATTACH(GlobalLock);
    ATTACH(GlobalMemoryStatus);
    ATTACH(GlobalReAlloc);
    ATTACH(GlobalSize);
    ATTACH(GlobalUnWire);
    ATTACH(GlobalUnfix);
    ATTACH(GlobalUnlock);
    ATTACH(GlobalWire);
    ATTACH(GrayStringA);
    ATTACH(GrayStringW);
    ATTACH(HeapLock);
    ATTACH(HeapUnlock);
    ATTACH(HideCaret);
    ATTACH(HiliteMenuItem);
    ATTACH(IIDFromString);
    ATTACH(ImpersonateDdeClientWindow);
    ATTACH(InSendMessage);
    ATTACH(InflateRect);
    ATTACH(InitAtomTable);
    ATTACH(InsertMenuA);
    ATTACH(InsertMenuItemA);
    ATTACH(InsertMenuItemW);
    ATTACH(InsertMenuW);
    ATTACH(IntersectClipRect);
    ATTACH(IntersectRect);
    ATTACH(InvalidateRect);
    ATTACH(InvalidateRgn);
    ATTACH(InvertRect);
    ATTACH(InvertRgn);
    ATTACH(IsAccelerator);
    ATTACH(IsBadCodePtr);
    ATTACH(IsBadHugeReadPtr);
    ATTACH(IsBadHugeWritePtr);
    ATTACH(IsBadReadPtr);
    ATTACH(IsBadStringPtrA);
    ATTACH(IsBadStringPtrW);
    ATTACH(IsBadWritePtr);
    ATTACH(IsCharAlphaA);
    ATTACH(IsCharAlphaNumericA);
    ATTACH(IsCharAlphaNumericW);
    ATTACH(IsCharAlphaW);
    ATTACH(IsCharLowerA);
    ATTACH(IsCharLowerW);
    ATTACH(IsCharUpperA);
    ATTACH(IsCharUpperW);
    ATTACH(IsChild);
    ATTACH(IsClipboardFormatAvailable);
    ATTACH(IsDBCSLeadByte);
    ATTACH(IsDBCSLeadByteEx);
    ATTACH(IsDebuggerPresent);
    ATTACH(IsDialogMessageA);
    ATTACH(IsDialogMessageW);
    ATTACH(IsDlgButtonChecked);
    ATTACH(IsIconic);
    ATTACH(IsMenu);
#if !defined(DETOURS_ARM)
    ATTACH(IsProcessorFeaturePresent);
#endif // !DETOURS_ARM
    ATTACH(IsRectEmpty);
    ATTACH(IsValidCodePage);
    ATTACH(IsValidLocale);
    ATTACH(IsWindow);
    ATTACH(IsWindowEnabled);
    ATTACH(IsWindowUnicode);
    ATTACH(IsWindowVisible);
    ATTACH(IsZoomed);
    ATTACH(KillTimer);
    ATTACH(LPtoDP);
    ATTACH(LineDDA);
    ATTACH(LineTo);
    ATTACH(LoadAcceleratorsA);
    ATTACH(LoadAcceleratorsW);
    ATTACH(LoadBitmapA);
    ATTACH(LoadBitmapW);
    ATTACH(LoadCursorA);
    ATTACH(LoadCursorFromFileA);
    ATTACH(LoadCursorFromFileW);
    ATTACH(LoadCursorW);
    ATTACH(LoadIconA);
    ATTACH(LoadIconW);
    ATTACH(LoadImageA);
    ATTACH(LoadImageW);
    ATTACH(LoadKeyboardLayoutA);
    ATTACH(LoadKeyboardLayoutW);
    ATTACH(LoadLibraryA);
    ATTACH(LoadLibraryExA);
    ATTACH(LoadLibraryExW);
    ATTACH(LoadLibraryW);
    ATTACH(LoadMenuA);
    ATTACH(LoadMenuIndirectA);
    ATTACH(LoadMenuIndirectW);
    ATTACH(LoadMenuW);
    ATTACH(LoadModule);
    ATTACH(LoadResource);
    ATTACH(LoadStringA);
    ATTACH(LoadStringW);
    ATTACH(LocalAlloc);
    ATTACH(LocalCompact);
    ATTACH(LocalFileTimeToFileTime);
    ATTACH(LocalFlags);
    ATTACH(LocalFree);
    ATTACH(LocalHandle);
    ATTACH(LocalLock);
    ATTACH(LocalReAlloc);
    ATTACH(LocalShrink);
    ATTACH(LocalSize);
    ATTACH(LocalUnlock);
    ATTACH(LockFile);
    ATTACH(LockFileEx);
    ATTACH(LockResource);
    ATTACH(LockWindowUpdate);
    ATTACH(LookupIconIdFromDirectory);
    ATTACH(LookupIconIdFromDirectoryEx);
    ATTACH(MapDialogRect);
    ATTACH(MapViewOfFile);
    ATTACH(MapViewOfFileEx);
    ATTACH(MapVirtualKeyA);
    ATTACH(MapVirtualKeyExA);
    ATTACH(MapVirtualKeyExW);
    ATTACH(MapVirtualKeyW);
    ATTACH(MapWindowPoints);
    ATTACH(MaskBlt);
    ATTACH(MenuItemFromPoint);
    ATTACH(MessageBeep);
    ATTACH(MessageBoxA);
    ATTACH(MessageBoxExA);
    ATTACH(MessageBoxExW);
    ATTACH(MessageBoxIndirectA);
    ATTACH(MessageBoxIndirectW);
    ATTACH(MessageBoxW);
    ATTACH(MkParseDisplayName);
    ATTACH(ModifyMenuA);
    ATTACH(ModifyMenuW);
    ATTACH(ModifyWorldTransform);
    ATTACH(MonikerCommonPrefixWith);
    ATTACH(MonikerRelativePathTo);
    ATTACH(MoveFileA);
    ATTACH(MoveFileExA);
    ATTACH(MoveFileExW);
    ATTACH(MoveFileW);
    ATTACH(MoveToEx);
    ATTACH(MoveWindow);
    ATTACH(MsgWaitForMultipleObjects);
    ATTACH(MsgWaitForMultipleObjectsEx);
    ATTACH(MulDiv);
    ATTACH(OemKeyScan);
    ATTACH(OemToCharA);
    ATTACH(OemToCharBuffA);
    ATTACH(OemToCharBuffW);
    ATTACH(OemToCharW);
    ATTACH(OffsetClipRgn);
    ATTACH(OffsetRect);
    ATTACH(OffsetRgn);
    ATTACH(OffsetViewportOrgEx);
    ATTACH(OffsetWindowOrgEx);
    ATTACH(OleBuildVersion);
    ATTACH(OleConvertIStorageToOLESTREAM);
    ATTACH(OleConvertIStorageToOLESTREAMEx);
    ATTACH(OleConvertOLESTREAMToIStorage);
    ATTACH(OleConvertOLESTREAMToIStorageEx);
    ATTACH(OleCreate);
    ATTACH(OleCreateDefaultHandler);
    ATTACH(OleCreateEmbeddingHelper);
    ATTACH(OleCreateEx);
    ATTACH(OleCreateFromData);
    ATTACH(OleCreateFromDataEx);
    ATTACH(OleCreateFromFile);
    ATTACH(OleCreateFromFileEx);
    ATTACH(OleCreateLink);
    ATTACH(OleCreateLinkEx);
    ATTACH(OleCreateLinkFromData);
    ATTACH(OleCreateLinkFromDataEx);
    ATTACH(OleCreateLinkToFile);
    ATTACH(OleCreateLinkToFileEx);
    ATTACH(OleCreateMenuDescriptor);
    ATTACH(OleCreateStaticFromData);
    ATTACH(OleDestroyMenuDescriptor);
    ATTACH(OleDoAutoConvert);
    ATTACH(OleDraw);
    ATTACH(OleDuplicateData);
    ATTACH(OleFlushClipboard);
    ATTACH(OleGetAutoConvert);
    ATTACH(OleGetClipboard);
    ATTACH(OleGetIconOfClass);
    ATTACH(OleGetIconOfFile);
    ATTACH(OleInitialize);
    ATTACH(OleIsCurrentClipboard);
    ATTACH(OleIsRunning);
    ATTACH(OleLoad);
    ATTACH(OleLoadFromStream);
    ATTACH(OleLockRunning);
    ATTACH(OleMetafilePictFromIconAndLabel);
    ATTACH(OleNoteObjectVisible);
    ATTACH(OleQueryCreateFromData);
    ATTACH(OleQueryLinkFromData);
    ATTACH(OleRegEnumFormatEtc);
    ATTACH(OleRegEnumVerbs);
    ATTACH(OleRegGetMiscStatus);
    ATTACH(OleRegGetUserType);
    ATTACH(OleRun);
    ATTACH(OleSave);
    ATTACH(OleSaveToStream);
    ATTACH(OleSetAutoConvert);
    ATTACH(OleSetClipboard);
    ATTACH(OleSetContainedObject);
    ATTACH(OleSetMenuDescriptor);
    ATTACH(OleTranslateAccelerator);
    ATTACH(OleUninitialize);
    ATTACH(OpenClipboard);
    ATTACH(OpenDesktopA);
    ATTACH(OpenDesktopW);
    ATTACH(OpenEventA);
    ATTACH(OpenEventW);
    ATTACH(OpenFile);
    ATTACH(OpenFileMappingA);
    ATTACH(OpenFileMappingW);
    ATTACH(OpenIcon);
    ATTACH(OpenInputDesktop);
    ATTACH(OpenMutexA);
    ATTACH(OpenMutexW);
    ATTACH(OpenProcess);
    ATTACH(OpenProcessToken);
    ATTACH(OpenSemaphoreA);
    ATTACH(OpenSemaphoreW);
    ATTACH(OpenWaitableTimerA);
    ATTACH(OpenWaitableTimerW);
    ATTACH(OpenWindowStationA);
    ATTACH(OpenWindowStationW);
    ATTACH(OutputDebugStringA);
    ATTACH(OutputDebugStringW);
    ATTACH(PackDDElParam);
    ATTACH(PaintDesktop);
    ATTACH(PaintRgn);
    ATTACH(PatBlt);
    ATTACH(PathToRegion);
    ATTACH(PeekConsoleInputA);
    ATTACH(PeekConsoleInputW);
    ATTACH(PeekMessageA);
    ATTACH(PeekMessageW);
    ATTACH(PeekNamedPipe);
    ATTACH(Pie);
    ATTACH(PlayEnhMetaFile);
    ATTACH(PlayEnhMetaFileRecord);
    ATTACH(PlayMetaFile);
    ATTACH(PlayMetaFileRecord);
    ATTACH(PlgBlt);
    ATTACH(PolyBezier);
    ATTACH(PolyBezierTo);
    ATTACH(PolyDraw);
    ATTACH(PolyPolygon);
    ATTACH(PolyPolyline);
    ATTACH(PolyTextOutA);
    ATTACH(PolyTextOutW);
    ATTACH(Polygon);
    ATTACH(Polyline);
    ATTACH(PolylineTo);
    ATTACH(PostMessageA);
    ATTACH(PostMessageW);
    ATTACH(PostQueuedCompletionStatus);
    ATTACH(PostQuitMessage);
    ATTACH(PostThreadMessageA);
    ATTACH(PostThreadMessageW);
    ATTACH(PrepareTape);
    ATTACH(ProgIDFromCLSID);
    ATTACH(PropVariantClear);
    ATTACH(PropVariantCopy);
    ATTACH(PtInRect);
    ATTACH(PtInRegion);
    ATTACH(PtVisible);
    ATTACH(PulseEvent);
    ATTACH(PurgeComm);
    ATTACH(QueryDosDeviceA);
    ATTACH(QueryDosDeviceW);
    ATTACH(QueryPerformanceCounter);
    ATTACH(QueryPerformanceFrequency);
    ATTACH(QueueUserAPC);
    ATTACH(RaiseException);
    ATTACH(ReadClassStg);
    ATTACH(ReadClassStm);
    ATTACH(ReadConsoleA);
    ATTACH(ReadConsoleInputA);
    ATTACH(ReadConsoleInputW);
    ATTACH(ReadConsoleOutputA);
    ATTACH(ReadConsoleOutputAttribute);
    ATTACH(ReadConsoleOutputCharacterA);
    ATTACH(ReadConsoleOutputCharacterW);
    ATTACH(ReadConsoleOutputW);
    ATTACH(ReadConsoleW);
    ATTACH(ReadDirectoryChangesW);
    ATTACH(ReadFile);
    ATTACH(ReadFileEx);
    ATTACH(ReadFmtUserTypeStg);
    ATTACH(ReadProcessMemory);
    ATTACH(RealizePalette);
    ATTACH(RectInRegion);
    ATTACH(RectVisible);
    ATTACH(Rectangle);
    ATTACH(RedrawWindow);
    ATTACH(RegisterClassA);
    ATTACH(RegisterClassExA);
    ATTACH(RegisterClassExW);
    ATTACH(RegisterClassW);
    ATTACH(RegisterClipboardFormatA);
    ATTACH(RegisterClipboardFormatW);
    ATTACH(RegisterDragDrop);
    ATTACH(RegisterHotKey);
    ATTACH(RegisterWindowMessageA);
    ATTACH(RegisterWindowMessageW);
    ATTACH(ReleaseCapture);
    ATTACH(ReleaseDC);
    ATTACH(ReleaseMutex);
    ATTACH(ReleaseSemaphore);
    ATTACH(ReleaseStgMedium);
    ATTACH(RemoveDirectoryA);
    ATTACH(RemoveDirectoryW);
    ATTACH(RemoveFontResourceA);
    ATTACH(RemoveFontResourceW);
    ATTACH(RemoveMenu);
    ATTACH(RemovePropA);
    ATTACH(RemovePropW);
    ATTACH(ReplyMessage);
    ATTACH(ResetDCA);
    ATTACH(ResetDCW);
    ATTACH(ResetEvent);
    ATTACH(ResizePalette);
    ATTACH(RestoreDC);
    ATTACH(ResumeThread);
    ATTACH(ReuseDDElParam);
    ATTACH(RevokeDragDrop);
    ATTACH(RoundRect);
    ATTACH(SaveDC);
    ATTACH(ScaleViewportExtEx);
    ATTACH(ScaleWindowExtEx);
    ATTACH(ScreenToClient);
    ATTACH(ScrollConsoleScreenBufferA);
    ATTACH(ScrollConsoleScreenBufferW);
    ATTACH(ScrollDC);
    ATTACH(ScrollWindow);
    ATTACH(ScrollWindowEx);
    ATTACH(SearchPathA);
    ATTACH(SearchPathW);
    ATTACH(SelectClipPath);
    ATTACH(SelectClipRgn);
    ATTACH(SelectObject);
    ATTACH(SelectPalette);
    ATTACH(SendDlgItemMessageA);
    ATTACH(SendDlgItemMessageW);
    ATTACH(SendMessageA);
    ATTACH(SendMessageCallbackA);
    ATTACH(SendMessageCallbackW);
    ATTACH(SendMessageTimeoutA);
    ATTACH(SendMessageTimeoutW);
    ATTACH(SendMessageW);
    ATTACH(SendNotifyMessageA);
    ATTACH(SendNotifyMessageW);
    ATTACH(SetAbortProc);
    ATTACH(SetActiveWindow);
    ATTACH(SetArcDirection);
    ATTACH(SetBitmapBits);
    ATTACH(SetBitmapDimensionEx);
    ATTACH(SetBkColor);
    ATTACH(SetBkMode);
    ATTACH(SetBoundsRect);
    ATTACH(SetBrushOrgEx);
    ATTACH(SetCapture);
    ATTACH(SetCaretBlinkTime);
    ATTACH(SetCaretPos);
    ATTACH(SetClassLongA);
    ATTACH(SetClassLongW);
    ATTACH(SetClassWord);
    ATTACH(SetClipboardData);
    ATTACH(SetClipboardViewer);
    ATTACH(SetColorAdjustment);
    ATTACH(SetColorSpace);
    ATTACH(SetCommBreak);
    ATTACH(SetCommConfig);
    ATTACH(SetCommMask);
    ATTACH(SetCommState);
    ATTACH(SetCommTimeouts);
    ATTACH(SetComputerNameA);
    ATTACH(SetComputerNameW);
    ATTACH(SetConsoleActiveScreenBuffer);
    ATTACH(SetConsoleCP);
    ATTACH(SetConsoleCtrlHandler);
    ATTACH(SetConsoleCursorInfo);
    ATTACH(SetConsoleCursorPosition);
    ATTACH(SetConsoleMode);
    ATTACH(SetConsoleOutputCP);
    ATTACH(SetConsoleScreenBufferSize);
    ATTACH(SetConsoleTextAttribute);
    ATTACH(SetConsoleTitleA);
    ATTACH(SetConsoleTitleW);
    ATTACH(SetConsoleWindowInfo);
    ATTACH(SetConvertStg);
    ATTACH(SetCurrentDirectoryA);
    ATTACH(SetCurrentDirectoryW);
    ATTACH(SetCursor);
    ATTACH(SetCursorPos);
    ATTACH(SetDIBColorTable);
    ATTACH(SetDIBits);
    ATTACH(SetDIBitsToDevice);
    ATTACH(SetDefaultCommConfigA);
    ATTACH(SetDefaultCommConfigW);
    ATTACH(SetDeviceGammaRamp);
    ATTACH(SetDlgItemInt);
    ATTACH(SetDlgItemTextA);
    ATTACH(SetDlgItemTextW);
    ATTACH(SetDoubleClickTime);
    ATTACH(SetEndOfFile);
    ATTACH(SetEnhMetaFileBits);
    ATTACH(SetEnvironmentVariableA);
    ATTACH(SetEnvironmentVariableW);
    ATTACH(SetErrorMode);
    ATTACH(SetEvent);
    ATTACH(SetFileApisToANSI);
    ATTACH(SetFileApisToOEM);
    ATTACH(SetFileAttributesA);
    ATTACH(SetFileAttributesW);
    ATTACH(SetFilePointer);
    ATTACH(SetFileTime);
    ATTACH(SetFocus);
    ATTACH(SetForegroundWindow);
    ATTACH(SetGraphicsMode);
    ATTACH(SetHandleCount);
    ATTACH(SetHandleInformation);
    ATTACH(SetICMMode);
    ATTACH(SetICMProfileA);
    ATTACH(SetICMProfileW);
    ATTACH(SetKeyboardState);
    ATTACH(SetLocalTime);
    ATTACH(SetLocaleInfoA);
    ATTACH(SetLocaleInfoW);
    ATTACH(SetMailslotInfo);
    ATTACH(SetMapMode);
    ATTACH(SetMapperFlags);
    ATTACH(SetMenu);
    ATTACH(SetMenuContextHelpId);
    ATTACH(SetMenuDefaultItem);
    ATTACH(SetMenuItemBitmaps);
    ATTACH(SetMenuItemInfoA);
    ATTACH(SetMenuItemInfoW);
    ATTACH(SetMessageExtraInfo);
    ATTACH(SetMessageQueue);
    ATTACH(SetMetaFileBitsEx);
    ATTACH(SetMetaRgn);
    ATTACH(SetMiterLimit);
    ATTACH(SetNamedPipeHandleState);
    ATTACH(SetPaletteEntries);
    ATTACH(SetParent);
    ATTACH(SetPixel);
    ATTACH(SetPixelFormat);
    ATTACH(SetPixelV);
    ATTACH(SetPolyFillMode);
    ATTACH(SetPriorityClass);
    ATTACH(SetProcessAffinityMask);
    ATTACH(SetProcessShutdownParameters);
    ATTACH(SetProcessWindowStation);
    ATTACH(SetProcessWorkingSetSize);
    ATTACH(SetPropA);
    ATTACH(SetPropW);
    ATTACH(SetROP2);
    ATTACH(SetRect);
    ATTACH(SetRectEmpty);
    ATTACH(SetRectRgn);
    ATTACH(SetScrollInfo);
    ATTACH(SetScrollPos);
    ATTACH(SetScrollRange);
    ATTACH(SetStdHandle);
    ATTACH(SetStretchBltMode);
    ATTACH(SetSysColors);
    ATTACH(SetSystemCursor);
    ATTACH(SetSystemPaletteUse);
    ATTACH(SetSystemPowerState);
    ATTACH(SetSystemTime);
    ATTACH(SetSystemTimeAdjustment);
    ATTACH(SetTapeParameters);
    ATTACH(SetTapePosition);
    ATTACH(SetTextAlign);
    ATTACH(SetTextCharacterExtra);
    ATTACH(SetTextColor);
    ATTACH(SetTextJustification);
    ATTACH(SetThreadAffinityMask);
    ATTACH(SetThreadContext);
    ATTACH(SetThreadDesktop);
    ATTACH(SetThreadIdealProcessor);
#if(WINVER >= 0x0500)
    ATTACH(SetThreadLocale);
#endif // (WINVER >= 0x0500)
    ATTACH(SetThreadPriority);
    ATTACH(SetThreadPriorityBoost);
    ATTACH(SetTimeZoneInformation);
    ATTACH(SetTimer);
    ATTACH(SetUnhandledExceptionFilter);
    ATTACH(SetUserObjectInformationA);
    ATTACH(SetUserObjectInformationW);
    ATTACH(SetUserObjectSecurity);
    ATTACH(SetViewportExtEx);
    ATTACH(SetViewportOrgEx);
    ATTACH(SetVolumeLabelA);
    ATTACH(SetVolumeLabelW);
    ATTACH(SetWaitableTimer);
    ATTACH(SetWinMetaFileBits);
    ATTACH(SetWindowContextHelpId);
    ATTACH(SetWindowExtEx);
    ATTACH(SetWindowLongA);
    ATTACH(SetWindowLongW);
    ATTACH(SetWindowOrgEx);
    ATTACH(SetWindowPlacement);
    ATTACH(SetWindowPos);
    ATTACH(SetWindowRgn);
    ATTACH(SetWindowTextA);
    ATTACH(SetWindowTextW);
    ATTACH(SetWindowWord);
    ATTACH(SetWindowsHookA);
    ATTACH(SetWindowsHookExA);
    ATTACH(SetWindowsHookExW);
    ATTACH(SetWindowsHookW);
    ATTACH(SetWorldTransform);
    ATTACH(SetupComm);
    ATTACH(ShowCaret);
    ATTACH(ShowCursor);
    ATTACH(ShowOwnedPopups);
    ATTACH(ShowScrollBar);
    ATTACH(ShowWindow);
    ATTACH(ShowWindowAsync);
    ATTACH(SignalObjectAndWait);
    ATTACH(SizeofResource);
    ATTACH(SleepEx);
    ATTACH(StartDocA);
    ATTACH(StartDocW);
    ATTACH(StartPage);
    ATTACH(StgCreateDocfile);
    ATTACH(StgCreateDocfileOnILockBytes);
    ATTACH(StgCreatePropSetStg);
    ATTACH(StgCreatePropStg);
    ATTACH(StgCreateStorageEx);
    ATTACH(StgGetIFillLockBytesOnFile);
    ATTACH(StgGetIFillLockBytesOnILockBytes);
    ATTACH(StgIsStorageFile);
    ATTACH(StgIsStorageILockBytes);
    ATTACH(StgOpenAsyncDocfileOnIFillLockBytes);
    ATTACH(StgOpenPropStg);
    ATTACH(StgOpenStorage);
    ATTACH(StgOpenStorageEx);
    ATTACH(StgOpenStorageOnILockBytes);
    ATTACH(StgSetTimes);
    ATTACH(StretchBlt);
    ATTACH(StretchDIBits);
    ATTACH(StringFromCLSID);
    ATTACH(StringFromGUID2);
    ATTACH(StringFromIID);
    ATTACH(StrokeAndFillPath);
    ATTACH(StrokePath);
    ATTACH(SubtractRect);
    ATTACH(SuspendThread);
    ATTACH(SwapBuffers);
    ATTACH(SwapMouseButton);
    ATTACH(SwitchDesktop);
    ATTACH(SwitchToFiber);
    ATTACH(SwitchToThread);
    ATTACH(SystemParametersInfoA);
    ATTACH(SystemParametersInfoW);
    ATTACH(SystemTimeToFileTime);
    ATTACH(SystemTimeToTzSpecificLocalTime);
    ATTACH(TabbedTextOutA);
    ATTACH(TabbedTextOutW);
    ATTACH(TerminateProcess);
    ATTACH(TerminateThread);
    ATTACH(TextOutA);
    ATTACH(TextOutW);
    ATTACH(TileWindows);
    ATTACH(ToAscii);
    ATTACH(ToAsciiEx);
    ATTACH(ToUnicode);
    ATTACH(ToUnicodeEx);
    ATTACH(TrackMouseEvent);
    ATTACH(TrackPopupMenu);
    ATTACH(TrackPopupMenuEx);
    ATTACH(TransactNamedPipe);
    ATTACH(TranslateAcceleratorA);
    ATTACH(TranslateAcceleratorW);
    ATTACH(TranslateCharsetInfo);
    ATTACH(TranslateMDISysAccel);
    ATTACH(TranslateMessage);
    ATTACH(TransmitCommChar);
#if DETOUR_TryEnterCriticalSection_EVEN_IF_IT_EXERCISES_A_BUG_IN_RtlLookupFunctionTable
    ATTACH(TryEnterCriticalSection);
#endif
    ATTACH(UnhookWindowsHook);
    ATTACH(UnhookWindowsHookEx);
    ATTACH(UnionRect);
    ATTACH(UnloadKeyboardLayout);
    ATTACH(UnlockFile);
    ATTACH(UnlockFileEx);
    ATTACH(UnmapViewOfFile);
    ATTACH(UnpackDDElParam);
    ATTACH(UnrealizeObject);
    ATTACH(UnregisterClassA);
    ATTACH(UnregisterClassW);
    ATTACH(UnregisterHotKey);
    ATTACH(UpdateColors);
    ATTACH(UpdateResourceA);
    ATTACH(UpdateResourceW);
    ATTACH(UpdateWindow);
    ATTACH(ValidateRect);
    ATTACH(ValidateRgn);
    ATTACH(VerLanguageNameA);
    ATTACH(VerLanguageNameW);
    ATTACH(VirtualAllocEx);
    ATTACH(VirtualFreeEx);
    ATTACH(VirtualProtectEx);
    ATTACH(VirtualQueryEx);
    ATTACH(VkKeyScanA);
    ATTACH(VkKeyScanExA);
    ATTACH(VkKeyScanExW);
    ATTACH(VkKeyScanW);
    ATTACH(WSAAccept);
    ATTACH(WSAAddressToStringA);
    ATTACH(WSAAddressToStringW);
    ATTACH(WSAAsyncGetHostByAddr);
    ATTACH(WSAAsyncGetHostByName);
    ATTACH(WSAAsyncGetProtoByName);
    ATTACH(WSAAsyncGetProtoByNumber);
    ATTACH(WSAAsyncGetServByName);
    ATTACH(WSAAsyncGetServByPort);
    ATTACH(WSAAsyncSelect);
    ATTACH(WSACancelAsyncRequest);
    ATTACH(WSACancelBlockingCall);
    ATTACH(WSACleanup);
    ATTACH(WSACloseEvent);
    ATTACH(WSAConnect);
    ATTACH(WSACreateEvent);
    ATTACH(WSADuplicateSocketA);
    ATTACH(WSADuplicateSocketW);
    ATTACH(WSAEnumNameSpaceProvidersA);
    ATTACH(WSAEnumNameSpaceProvidersW);
    ATTACH(WSAEnumNetworkEvents);
    ATTACH(WSAEnumProtocolsA);
    ATTACH(WSAEnumProtocolsW);
    ATTACH(WSAEventSelect);
    ATTACH(WSAGetOverlappedResult);
    ATTACH(WSAGetQOSByName);
    ATTACH(WSAGetServiceClassInfoA);
    ATTACH(WSAGetServiceClassInfoW);
    ATTACH(WSAGetServiceClassNameByClassIdA);
    ATTACH(WSAGetServiceClassNameByClassIdW);
    ATTACH(WSAHtonl);
    ATTACH(WSAHtons);
    ATTACH(WSAInstallServiceClassA);
    ATTACH(WSAInstallServiceClassW);
    ATTACH(WSAIoctl);
    ATTACH(WSAIsBlocking);
    ATTACH(WSAJoinLeaf);
    ATTACH(WSALookupServiceBeginA);
    ATTACH(WSALookupServiceBeginW);
    ATTACH(WSALookupServiceEnd);
    ATTACH(WSALookupServiceNextA);
    ATTACH(WSALookupServiceNextW);
    ATTACH(WSANtohl);
    ATTACH(WSANtohs);
    ATTACH(WSAProviderConfigChange);
    ATTACH(WSARecv);
    ATTACH(WSARecvDisconnect);
    ATTACH(WSARecvFrom);
    ATTACH(WSARemoveServiceClass);
    ATTACH(WSAResetEvent);
    ATTACH(WSASend);
    ATTACH(WSASendDisconnect);
    ATTACH(WSASendTo);
    ATTACH(WSASetBlockingHook);
    ATTACH(WSASetEvent);
    ATTACH(WSASetServiceA);
    ATTACH(WSASetServiceW);
    ATTACH(WSASocketA);
    ATTACH(WSASocketW);
    ATTACH(WSAStartup);
    ATTACH(WSAStringToAddressA);
    ATTACH(WSAStringToAddressW);
    ATTACH(WSAUnhookBlockingHook);
    ATTACH(WSAWaitForMultipleEvents);
    ATTACH(WaitCommEvent);
    ATTACH(WaitForInputIdle);
    ATTACH(WaitForMultipleObjects);
    ATTACH(WaitForMultipleObjectsEx);
    ATTACH(WaitForSingleObject);
    ATTACH(WaitForSingleObjectEx);
    ATTACH(WaitMessage);
    ATTACH(WaitNamedPipeA);
    ATTACH(WaitNamedPipeW);
    ATTACH(WidenPath);
    ATTACH(WinExec);
    ATTACH(WinHelpA);
    ATTACH(WinHelpW);
    ATTACH(WindowFromDC);
    ATTACH(WindowFromPoint);
    ATTACH(WriteClassStg);
    ATTACH(WriteClassStm);
    ATTACH(WriteConsoleA);
    ATTACH(WriteConsoleInputA);
    ATTACH(WriteConsoleInputW);
    ATTACH(WriteConsoleOutputA);
    ATTACH(WriteConsoleOutputAttribute);
    ATTACH(WriteConsoleOutputCharacterA);
    ATTACH(WriteConsoleOutputCharacterW);
    ATTACH(WriteConsoleOutputW);
    ATTACH(WriteConsoleW);
    ATTACH(WriteFile);
    ATTACH(WriteFileEx);
    ATTACH(WriteFmtUserTypeStg);
    ATTACH(WritePrivateProfileSectionA);
    ATTACH(WritePrivateProfileSectionW);
    ATTACH(WritePrivateProfileStringA);
    ATTACH(WritePrivateProfileStringW);
    ATTACH(WritePrivateProfileStructA);
    ATTACH(WritePrivateProfileStructW);
    ATTACH(WriteProcessMemory);
    ATTACH(WriteProfileSectionA);
    ATTACH(WriteProfileSectionW);
    ATTACH(WriteProfileStringA);
    ATTACH(WriteProfileStringW);
    ATTACH(WriteTapemark);
    ATTACH(__WSAFDIsSet);
    ATTACH(_hread);
    ATTACH(_hwrite);
    ATTACH(_lclose);
    ATTACH(_lcreat);
    ATTACH(_llseek);
    ATTACH(_lopen);
    ATTACH(_lread);
    ATTACH(_lwrite);
    ATTACH(accept);
    ATTACH(bind);
    ATTACH(closesocket);
    ATTACH(connect);
    ATTACH(gethostbyaddr);
    ATTACH(gethostbyname);
    ATTACH(gethostname);
    ATTACH(getpeername);
    ATTACH(getprotobyname);
    ATTACH(getprotobynumber);
    ATTACH(getservbyname);
    ATTACH(getservbyport);
    ATTACH(getsockname);
    ATTACH(getsockopt);
    ATTACH(htonl);
    ATTACH(htons);
    ATTACH(inet_addr);
    ATTACH(inet_ntoa);
    ATTACH(ioctlsocket);
    ATTACH(keybd_event);
    ATTACH(listen);
    ATTACH(mouse_event);
    ATTACH(ntohl);
    ATTACH(ntohs);
    ATTACH(recv);
    ATTACH(recvfrom);
    ATTACH(select);
    ATTACH(send);
    ATTACH(sendto);
    ATTACH(setsockopt);
    ATTACH(shutdown);
    ATTACH(socket);

    PVOID *ppbFailedPointer = NULL;
    LONG error = DetourTransactionCommitEx(&ppbFailedPointer);
    if (error != 0) {
        printf("traceapi.dll: Attach transaction failed to commit. Error %ld (%p/%p)",
               error, ppbFailedPointer, *ppbFailedPointer);
        return error;
    }
    return 0;
}

LONG DetachDetours(VOID)
{
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());

    // For this many APIs, we'll ignore one or two can't be detoured.
    DetourSetIgnoreTooSmall(TRUE);

    DETACH(AbortDoc);
    DETACH(AbortPath);
    DETACH(ActivateKeyboardLayout);
    DETACH(AddAtomA);
    DETACH(AddAtomW);
    DETACH(AddFontResourceA);
    DETACH(AddFontResourceW);
    DETACH(AdjustWindowRect);
    DETACH(AdjustWindowRectEx);
    DETACH(AllocConsole);
    DETACH(AngleArc);
    DETACH(AnimatePalette);
    DETACH(AnyPopup);
    DETACH(AppendMenuA);
    DETACH(AppendMenuW);
    DETACH(Arc);
    DETACH(ArcTo);
    DETACH(AreFileApisANSI);
    DETACH(ArrangeIconicWindows);
    DETACH(AttachThreadInput);
    DETACH(BackupRead);
    DETACH(BackupSeek);
    DETACH(BackupWrite);
    DETACH(Beep);
    DETACH(BeginDeferWindowPos);
    DETACH(BeginPaint);
    DETACH(BeginPath);
    DETACH(BeginUpdateResourceA);
    DETACH(BeginUpdateResourceW);
    DETACH(BindMoniker);
    DETACH(BitBlt);
    DETACH(BringWindowToTop);
    DETACH(BroadcastSystemMessageA);
    DETACH(BroadcastSystemMessageW);
    DETACH(BuildCommDCBA);
    DETACH(BuildCommDCBAndTimeoutsA);
    DETACH(BuildCommDCBAndTimeoutsW);
    DETACH(BuildCommDCBW);
    DETACH(CLSIDFromProgID);
    DETACH(CLSIDFromString);
    DETACH(CallMsgFilterA);
    DETACH(CallMsgFilterW);
    DETACH(CallNamedPipeA);
    DETACH(CallNamedPipeW);
    DETACH(CallNextHookEx);
    DETACH(CallWindowProcA);
    DETACH(CallWindowProcW);
    DETACH(CancelDC);
    DETACH(CancelIo);
    DETACH(CancelWaitableTimer);
    DETACH(CascadeWindows);
    DETACH(ChangeClipboardChain);
    DETACH(ChangeDisplaySettingsA);
    DETACH(ChangeDisplaySettingsExA);
    DETACH(ChangeDisplaySettingsExW);
    DETACH(ChangeDisplaySettingsW);
    DETACH(ChangeMenuA);
    DETACH(ChangeMenuW);
    DETACH(CharLowerA);
    DETACH(CharLowerBuffA);
    DETACH(CharLowerBuffW);
    DETACH(CharLowerW);
    DETACH(CharNextA);
    DETACH(CharNextExA);
    DETACH(CharNextW);
    DETACH(CharPrevA);
    DETACH(CharPrevExA);
    DETACH(CharPrevW);
    DETACH(CharToOemA);
    DETACH(CharToOemBuffA);
    DETACH(CharToOemBuffW);
    DETACH(CharToOemW);
    DETACH(CharUpperA);
    DETACH(CharUpperBuffA);
    DETACH(CharUpperBuffW);
    DETACH(CharUpperW);
    DETACH(CheckColorsInGamut);
    DETACH(CheckDlgButton);
    DETACH(CheckMenuItem);
    DETACH(CheckMenuRadioItem);
    DETACH(CheckRadioButton);
    DETACH(ChildWindowFromPoint);
    DETACH(ChildWindowFromPointEx);
    DETACH(ChoosePixelFormat);
    DETACH(Chord);
    DETACH(ClearCommBreak);
    DETACH(ClearCommError);
    DETACH(ClientToScreen);
    DETACH(ClipCursor);
    DETACH(CloseClipboard);
    DETACH(CloseDesktop);
    DETACH(CloseEnhMetaFile);
    DETACH(CloseFigure);
    DETACH(CloseHandle);
    DETACH(CloseMetaFile);
    DETACH(CloseWindow);
    DETACH(CloseWindowStation);
    DETACH(CoAddRefServerProcess);
    DETACH(CoBuildVersion);
    DETACH(CoCopyProxy);
    DETACH(CoCreateFreeThreadedMarshaler);
    DETACH(CoCreateGuid);
    DETACH(CoCreateInstance);
    DETACH(CoCreateInstanceEx);
    DETACH(CoDisconnectObject);
    DETACH(CoDosDateTimeToFileTime);
    DETACH(CoFileTimeNow);
    DETACH(CoFileTimeToDosDateTime);
    DETACH(CoFreeAllLibraries);
    DETACH(CoFreeLibrary);
    DETACH(CoFreeUnusedLibraries);
    DETACH(CoGetCallContext);
    DETACH(CoGetClassObject);
    DETACH(CoGetCurrentProcess);
    DETACH(CoGetInstanceFromFile);
    DETACH(CoGetInstanceFromIStorage);
    DETACH(CoGetInterfaceAndReleaseStream);
    DETACH(CoGetMalloc);
    DETACH(CoGetMarshalSizeMax);
    DETACH(CoGetObject);
    DETACH(CoGetPSClsid);
    DETACH(CoGetStandardMarshal);
    DETACH(CoGetStdMarshalEx);
    DETACH(CoGetTreatAsClass);
    DETACH(CoImpersonateClient);
    DETACH(CoInitialize);
    DETACH(CoInitializeEx);
    DETACH(CoInitializeSecurity);
    DETACH(CoIsHandlerConnected);
    DETACH(CoIsOle1Class);
    DETACH(CoLoadLibrary);
    DETACH(CoLockObjectExternal);
    DETACH(CoMarshalHresult);
    DETACH(CoMarshalInterThreadInterfaceInStream);
    DETACH(CoMarshalInterface);
    DETACH(CoQueryAuthenticationServices);
    DETACH(CoQueryClientBlanket);
    DETACH(CoQueryProxyBlanket);
    DETACH(CoRegisterChannelHook);
    DETACH(CoRegisterClassObject);
    DETACH(CoRegisterMallocSpy);
    DETACH(CoRegisterMessageFilter);
    DETACH(CoRegisterPSClsid);
    DETACH(CoRegisterSurrogate);
    DETACH(CoReleaseMarshalData);
    DETACH(CoReleaseServerProcess);
    DETACH(CoResumeClassObjects);
    DETACH(CoRevertToSelf);
    DETACH(CoRevokeClassObject);
    DETACH(CoRevokeMallocSpy);
    DETACH(CoSetProxyBlanket);
    DETACH(CoSuspendClassObjects);
    DETACH(CoSwitchCallContext);
    DETACH(CoTaskMemAlloc);
    DETACH(CoTaskMemFree);
    DETACH(CoTaskMemRealloc);
    DETACH(CoTreatAsClass);
    DETACH(CoUninitialize);
    DETACH(CoUnmarshalHresult);
    DETACH(CoUnmarshalInterface);
    DETACH(ColorMatchToTarget);
    DETACH(CombineRgn);
    DETACH(CombineTransform);
    DETACH(CommConfigDialogA);
    DETACH(CommConfigDialogW);
    DETACH(CompareFileTime);
    DETACH(CompareStringA);
    DETACH(CompareStringW);
    DETACH(ConnectNamedPipe);
#if !defined(DETOURS_ARM)
    DETACH(ContinueDebugEvent);
#endif // !DETOURS_ARM
    DETACH(ConvertDefaultLocale);
    DETACH(ConvertThreadToFiber);
    DETACH(CopyAcceleratorTableA);
    DETACH(CopyAcceleratorTableW);
    DETACH(CopyEnhMetaFileA);
    DETACH(CopyEnhMetaFileW);
    DETACH(CopyFileA);
    DETACH(CopyFileExA);
    DETACH(CopyFileExW);
    DETACH(CopyFileW);
    DETACH(CopyIcon);
    DETACH(CopyImage);
    DETACH(CopyMetaFileA);
    DETACH(CopyMetaFileW);
    DETACH(CopyRect);
    DETACH(CountClipboardFormats);
    DETACH(CreateAcceleratorTableA);
    DETACH(CreateAcceleratorTableW);
    DETACH(CreateAntiMoniker);
    DETACH(CreateBindCtx);
    DETACH(CreateBitmap);
    DETACH(CreateBitmapIndirect);
    DETACH(CreateBrushIndirect);
    DETACH(CreateCaret);
    DETACH(CreateClassMoniker);
    DETACH(CreateColorSpaceA);
    DETACH(CreateColorSpaceW);
    DETACH(CreateCompatibleBitmap);
    DETACH(CreateCompatibleDC);
    DETACH(CreateConsoleScreenBuffer);
    DETACH(CreateCursor);
    DETACH(CreateDCA);
    DETACH(CreateDCW);
    DETACH(CreateDIBPatternBrush);
    DETACH(CreateDIBPatternBrushPt);
    DETACH(CreateDIBSection);
    DETACH(CreateDIBitmap);
    DETACH(CreateDataAdviseHolder);
    DETACH(CreateDataCache);
    DETACH(CreateDesktopA);
    DETACH(CreateDesktopW);
    DETACH(CreateDialogIndirectParamA);
    DETACH(CreateDialogIndirectParamW);
    DETACH(CreateDialogParamA);
    DETACH(CreateDialogParamW);
    DETACH(CreateDirectoryA);
    DETACH(CreateDirectoryExA);
    DETACH(CreateDirectoryExW);
    DETACH(CreateDirectoryW);
    DETACH(CreateDiscardableBitmap);
    DETACH(CreateEllipticRgn);
    DETACH(CreateEllipticRgnIndirect);
    DETACH(CreateEnhMetaFileA);
    DETACH(CreateEnhMetaFileW);
    DETACH(CreateEventA);
    DETACH(CreateEventW);
    DETACH(CreateFiber);
    DETACH(CreateFileA);
    DETACH(CreateFileMappingA);
    DETACH(CreateFileMappingW);
    DETACH(CreateFileMoniker);
    DETACH(CreateFileW);
    DETACH(CreateFontA);
    DETACH(CreateFontIndirectA);
    DETACH(CreateFontIndirectW);
    DETACH(CreateFontW);
    DETACH(CreateGenericComposite);
    DETACH(CreateHalftonePalette);
    DETACH(CreateHatchBrush);
    DETACH(CreateICA);
    DETACH(CreateICW);
    DETACH(CreateILockBytesOnHGlobal);
    DETACH(CreateIcon);
    DETACH(CreateIconFromResource);
    DETACH(CreateIconFromResourceEx);
    DETACH(CreateIconIndirect);
    DETACH(CreateIoCompletionPort);
    DETACH(CreateItemMoniker);
    DETACH(CreateMDIWindowA);
    DETACH(CreateMDIWindowW);
    DETACH(CreateMailslotA);
    DETACH(CreateMailslotW);
    DETACH(CreateMenu);
    DETACH(CreateMetaFileA);
    DETACH(CreateMetaFileW);
    DETACH(CreateMutexA);
    DETACH(CreateMutexW);
    DETACH(CreateNamedPipeA);
    DETACH(CreateNamedPipeW);
    DETACH(CreateOleAdviseHolder);
    DETACH(CreatePalette);
    DETACH(CreatePatternBrush);
    DETACH(CreatePen);
    DETACH(CreatePenIndirect);
    DETACH(CreatePipe);
    DETACH(CreatePointerMoniker);
    DETACH(CreatePolyPolygonRgn);
    DETACH(CreatePolygonRgn);
    DETACH(CreatePopupMenu);
    DETACH(CreateProcessA);
    DETACH(CreateProcessW);
    DETACH(CreateProcessAsUserA);
    DETACH(CreateProcessAsUserW);
#if(_WIN32_WINNT >= 0x0500)
    DETACH(CreateProcessWithLogonW);
    DETACH(CreateProcessWithTokenW);
#endif //(_WIN32_WINNT >= 0x0500)
    DETACH(CreateRectRgn);
    DETACH(CreateRectRgnIndirect);
    DETACH(CreateRemoteThread);
    DETACH(CreateRoundRectRgn);
    DETACH(CreateScalableFontResourceA);
    DETACH(CreateScalableFontResourceW);
    DETACH(CreateSemaphoreA);
    DETACH(CreateSemaphoreW);
    DETACH(CreateSolidBrush);
    DETACH(CreateStdProgressIndicator);
    DETACH(CreateStreamOnHGlobal);
    DETACH(CreateTapePartition);
    DETACH(CreateThread);
    DETACH(CreateWaitableTimerA);
    DETACH(CreateWaitableTimerW);
    DETACH(CreateWindowExA);
    DETACH(CreateWindowExW);
    DETACH(CreateWindowStationA);
    DETACH(CreateWindowStationW);
    DETACH(DPtoLP);
    DETACH(DdeAbandonTransaction);
    DETACH(DdeAccessData);
    DETACH(DdeAddData);
    DETACH(DdeClientTransaction);
    DETACH(DdeCmpStringHandles);
    DETACH(DdeConnect);
    DETACH(DdeConnectList);
    DETACH(DdeCreateDataHandle);
    DETACH(DdeCreateStringHandleA);
    DETACH(DdeCreateStringHandleW);
    DETACH(DdeDisconnect);
    DETACH(DdeDisconnectList);
    DETACH(DdeEnableCallback);
    DETACH(DdeFreeDataHandle);
    DETACH(DdeFreeStringHandle);
    DETACH(DdeGetData);
    DETACH(DdeGetLastError);
    DETACH(DdeImpersonateClient);
    DETACH(DdeKeepStringHandle);
    DETACH(DdeNameService);
    DETACH(DdePostAdvise);
    DETACH(DdeQueryConvInfo);
    DETACH(DdeQueryNextServer);
    DETACH(DdeQueryStringA);
    DETACH(DdeQueryStringW);
    DETACH(DdeReconnect);
    DETACH(DdeSetQualityOfService);
    DETACH(DdeSetUserHandle);
    DETACH(DdeUnaccessData);
    DETACH(DdeUninitialize);
    DETACH(DebugActiveProcess);
    DETACH(DebugActiveProcessStop);
    DETACH(DebugBreak);
    DETACH(DefDlgProcA);
    DETACH(DefDlgProcW);
    DETACH(DefFrameProcA);
    DETACH(DefFrameProcW);
    DETACH(DefMDIChildProcA);
    DETACH(DefMDIChildProcW);
    DETACH(DefWindowProcA);
    DETACH(DefWindowProcW);
    DETACH(DeferWindowPos);
    DETACH(DefineDosDeviceA);
    DETACH(DefineDosDeviceW);
    DETACH(DeleteAtom);
    DETACH(DeleteColorSpace);
    DETACH(DeleteDC);
    DETACH(DeleteEnhMetaFile);
    DETACH(DeleteFiber);
    DETACH(DeleteFileA);
    DETACH(DeleteFileW);
    DETACH(DeleteMenu);
    DETACH(DeleteMetaFile);
    DETACH(DeleteObject);
    DETACH(DescribePixelFormat);
    DETACH(DestroyAcceleratorTable);
    DETACH(DestroyCaret);
    DETACH(DestroyCursor);
    DETACH(DestroyIcon);
    DETACH(DestroyMenu);
    DETACH(DestroyWindow);
    DETACH(DeviceIoControl);
    DETACH(DialogBoxIndirectParamA);
    DETACH(DialogBoxIndirectParamW);
    DETACH(DialogBoxParamA);
    DETACH(DialogBoxParamW);
    DETACH(DisableThreadLibraryCalls);
    DETACH(DisconnectNamedPipe);
    DETACH(DispatchMessageA);
    DETACH(DispatchMessageW);
    DETACH(DlgDirListA);
    DETACH(DlgDirListComboBoxA);
    DETACH(DlgDirListComboBoxW);
    DETACH(DlgDirListW);
    DETACH(DlgDirSelectComboBoxExA);
    DETACH(DlgDirSelectComboBoxExW);
    DETACH(DlgDirSelectExA);
    DETACH(DlgDirSelectExW);
    DETACH(DoDragDrop);
    DETACH(DosDateTimeToFileTime);
    DETACH(DragDetect);
    DETACH(DragObject);
    DETACH(DrawAnimatedRects);
    DETACH(DrawCaption);
    DETACH(DrawEdge);
    DETACH(DrawEscape);
    DETACH(DrawFocusRect);
    DETACH(DrawFrameControl);
    DETACH(DrawIcon);
    DETACH(DrawIconEx);
    DETACH(DrawMenuBar);
    DETACH(DrawStateA);
    DETACH(DrawStateW);
    DETACH(DrawTextA);
    DETACH(DrawTextExA);
    DETACH(DrawTextExW);
    DETACH(DrawTextW);
    DETACH(DuplicateHandle);
    DETACH(Ellipse);
    DETACH(EmptyClipboard);
    DETACH(EnableMenuItem);
    DETACH(EnableScrollBar);
    DETACH(EnableWindow);
    DETACH(EndDeferWindowPos);
    DETACH(EndDialog);
    DETACH(EndDoc);
    DETACH(EndPage);
    DETACH(EndPaint);
    DETACH(EndPath);
    DETACH(EndUpdateResourceA);
    DETACH(EndUpdateResourceW);
    DETACH(EnumCalendarInfoA);
    DETACH(EnumCalendarInfoW);
    DETACH(EnumChildWindows);
    DETACH(EnumClipboardFormats);
    DETACH(EnumDateFormatsA);
    DETACH(EnumDateFormatsW);
    DETACH(EnumDesktopWindows);
    DETACH(EnumDesktopsA);
    DETACH(EnumDesktopsW);
    DETACH(EnumDisplaySettingsA);
    DETACH(EnumDisplaySettingsW);
    DETACH(EnumEnhMetaFile);
    DETACH(EnumFontFamiliesA);
    DETACH(EnumFontFamiliesExA);
    DETACH(EnumFontFamiliesExW);
    DETACH(EnumFontFamiliesW);
    DETACH(EnumFontsA);
    DETACH(EnumFontsW);
    DETACH(EnumICMProfilesA);
    DETACH(EnumICMProfilesW);
    DETACH(EnumMetaFile);
    DETACH(EnumObjects);
    DETACH(EnumPropsA);
    DETACH(EnumPropsExA);
    DETACH(EnumPropsExW);
    DETACH(EnumPropsW);
    DETACH(EnumResourceLanguagesA);
    DETACH(EnumResourceLanguagesW);
    DETACH(EnumResourceNamesA);
    DETACH(EnumResourceNamesW);
    DETACH(EnumResourceTypesA);
    DETACH(EnumResourceTypesW);
    DETACH(EnumSystemCodePagesA);
    DETACH(EnumSystemCodePagesW);
#if(WINVER >= 0x0500)
    DETACH(EnumSystemLocalesA);
    DETACH(EnumSystemLocalesW);
#endif // (WINVER >= 0x0500)
    DETACH(EnumThreadWindows);
    DETACH(EnumTimeFormatsA);
    DETACH(EnumTimeFormatsW);
    DETACH(EnumWindowStationsA);
    DETACH(EnumWindowStationsW);
    DETACH(EnumWindows);
    DETACH(EqualRect);
    DETACH(EqualRgn);
    DETACH(EraseTape);
    DETACH(Escape);
    DETACH(EscapeCommFunction);
    DETACH(ExcludeClipRect);
    DETACH(ExcludeUpdateRgn);
    DETACH(ExitProcess);
    DETACH(ExitThread);
    DETACH(ExitWindowsEx);
    DETACH(ExpandEnvironmentStringsA);
    DETACH(ExpandEnvironmentStringsW);
    DETACH(ExtCreatePen);
    DETACH(ExtCreateRegion);
    DETACH(ExtEscape);
    DETACH(ExtFloodFill);
    DETACH(ExtSelectClipRgn);
    DETACH(ExtTextOutA);
    DETACH(ExtTextOutW);
    DETACH(FatalAppExitA);
    DETACH(FatalAppExitW);
    DETACH(FatalExit);
    DETACH(FileTimeToDosDateTime);
    DETACH(FileTimeToLocalFileTime);
    DETACH(FileTimeToSystemTime);
    DETACH(FillConsoleOutputAttribute);
    DETACH(FillConsoleOutputCharacterA);
    DETACH(FillConsoleOutputCharacterW);
    DETACH(FillPath);
    DETACH(FillRect);
    DETACH(FillRgn);
    DETACH(FindAtomA);
    DETACH(FindAtomW);
    DETACH(FindClose);
    DETACH(FindCloseChangeNotification);
    DETACH(FindFirstChangeNotificationA);
    DETACH(FindFirstChangeNotificationW);
    DETACH(FindFirstFileA);
    DETACH(FindFirstFileExA);
    DETACH(FindFirstFileExW);
    DETACH(FindFirstFileW);
    DETACH(FindNextChangeNotification);
    DETACH(FindNextFileA);
    DETACH(FindNextFileW);
    DETACH(FindResourceA);
    DETACH(FindResourceExA);
    DETACH(FindResourceExW);
    DETACH(FindResourceW);
    DETACH(FindWindowA);
    DETACH(FindWindowExA);
    DETACH(FindWindowExW);
    DETACH(FindWindowW);
    DETACH(FixBrushOrgEx);
    DETACH(FlashWindow);
    DETACH(FlattenPath);
    DETACH(FloodFill);
    DETACH(FlushConsoleInputBuffer);
    DETACH(FlushFileBuffers);
    DETACH(FlushViewOfFile);
    DETACH(FmtIdToPropStgName);
    DETACH(FoldStringA);
    DETACH(FoldStringW);
    DETACH(FormatMessageA);
    DETACH(FormatMessageW);
    DETACH(FrameRect);
    DETACH(FrameRgn);
    DETACH(FreeConsole);
    DETACH(FreeDDElParam);
    DETACH(FreeEnvironmentStringsA);
    DETACH(FreeEnvironmentStringsW);
    DETACH(FreeLibrary);
    DETACH(FreeLibraryAndExitThread);
    DETACH(FreePropVariantArray);
    DETACH(FreeResource);
    DETACH(GdiComment);
    DETACH(GdiFlush);
    DETACH(GdiGetBatchLimit);
    DETACH(GdiSetBatchLimit);
    DETACH(GenerateConsoleCtrlEvent);
    DETACH(GetACP);
    DETACH(GetActiveWindow);
    DETACH(GetArcDirection);
    DETACH(GetAspectRatioFilterEx);
    DETACH(GetAsyncKeyState);
    DETACH(GetAtomNameA);
    DETACH(GetAtomNameW);
    DETACH(GetBinaryTypeA);
    DETACH(GetBinaryTypeW);
    DETACH(GetBitmapBits);
    DETACH(GetBitmapDimensionEx);
    DETACH(GetBkColor);
    DETACH(GetBkMode);
    DETACH(GetBoundsRect);
    DETACH(GetBrushOrgEx);
    DETACH(GetCPInfo);
    DETACH(GetCapture);
    DETACH(GetCaretBlinkTime);
    DETACH(GetCaretPos);
    DETACH(GetCharABCWidthsA);
    DETACH(GetCharABCWidthsFloatA);
    DETACH(GetCharABCWidthsFloatW);
    DETACH(GetCharABCWidthsW);
    DETACH(GetCharWidth32A);
    DETACH(GetCharWidth32W);
    DETACH(GetCharWidthA);
    DETACH(GetCharWidthFloatA);
    DETACH(GetCharWidthFloatW);
    DETACH(GetCharWidthW);
    DETACH(GetCharacterPlacementA);
    DETACH(GetCharacterPlacementW);
    DETACH(GetClassFile);
    DETACH(GetClassInfoA);
    DETACH(GetClassInfoExA);
    DETACH(GetClassInfoExW);
    DETACH(GetClassInfoW);
    DETACH(GetClassLongA);
    DETACH(GetClassLongW);
    DETACH(GetClassNameA);
    DETACH(GetClassNameW);
    DETACH(GetClassWord);
    DETACH(GetClientRect);
    DETACH(GetClipBox);
    DETACH(GetClipCursor);
    DETACH(GetClipRgn);
    DETACH(GetClipboardData);
    DETACH(GetClipboardFormatNameA);
    DETACH(GetClipboardFormatNameW);
    DETACH(GetClipboardOwner);
    DETACH(GetClipboardViewer);
    DETACH(GetColorAdjustment);
    DETACH(GetColorSpace);
    DETACH(GetCommConfig);
    DETACH(GetCommMask);
    DETACH(GetCommModemStatus);
    DETACH(GetCommProperties);
    DETACH(GetCommState);
    DETACH(GetCommTimeouts);
    DETACH(GetCommandLineA);
    DETACH(GetCommandLineW);
    DETACH(GetComputerNameA);
    DETACH(GetComputerNameW);
    DETACH(GetConsoleCP);
    DETACH(GetConsoleCursorInfo);
    DETACH(GetConsoleMode);
    DETACH(GetConsoleOutputCP);
    DETACH(GetConsoleScreenBufferInfo);
    DETACH(GetConsoleTitleA);
    DETACH(GetConsoleTitleW);
    DETACH(GetConvertStg);
    DETACH(GetCurrencyFormatA);
    DETACH(GetCurrencyFormatW);
    DETACH(GetCurrentDirectoryA);
    DETACH(GetCurrentDirectoryW);
    DETACH(GetCurrentObject);
    DETACH(GetCurrentPositionEx);
    DETACH(GetCurrentProcess);
    DETACH(GetCurrentProcessId);
    DETACH(GetCurrentThreadId);
    DETACH(GetCursor);
    DETACH(GetCursorPos);
    DETACH(GetDC);
    DETACH(GetDCEx);
    DETACH(GetDCOrgEx);
    DETACH(GetDIBColorTable);
    DETACH(GetDIBits);
    DETACH(GetDateFormatA);
    DETACH(GetDateFormatW);
    DETACH(GetDefaultCommConfigA);
    DETACH(GetDefaultCommConfigW);
    DETACH(GetDesktopWindow);
    DETACH(GetDeviceCaps);
    DETACH(GetDeviceGammaRamp);
    DETACH(GetDialogBaseUnits);
    DETACH(GetDiskFreeSpaceA);
    DETACH(GetDiskFreeSpaceExA);
    DETACH(GetDiskFreeSpaceExW);
    DETACH(GetDiskFreeSpaceW);
    DETACH(GetDlgCtrlID);
    DETACH(GetDlgItem);
    DETACH(GetDlgItemInt);
    DETACH(GetDlgItemTextA);
    DETACH(GetDlgItemTextW);
    DETACH(GetDoubleClickTime);
    DETACH(GetDriveTypeA);
    DETACH(GetDriveTypeW);
    DETACH(GetEnhMetaFileA);
    DETACH(GetEnhMetaFileBits);
    DETACH(GetEnhMetaFileDescriptionA);
    DETACH(GetEnhMetaFileDescriptionW);
    DETACH(GetEnhMetaFileHeader);
    DETACH(GetEnhMetaFilePaletteEntries);
    DETACH(GetEnhMetaFilePixelFormat);
    DETACH(GetEnhMetaFileW);
    DETACH(GetEnvironmentStrings);
    DETACH(GetEnvironmentStringsW);
    DETACH(GetEnvironmentVariableA);
    DETACH(GetEnvironmentVariableW);
    DETACH(GetExitCodeProcess);
    DETACH(GetExitCodeThread);
    DETACH(GetFileAttributesA);
    DETACH(GetFileAttributesExA);
    DETACH(GetFileAttributesExW);
    DETACH(GetFileAttributesW);
    DETACH(GetFileInformationByHandle);
    DETACH(GetFileSize);
    DETACH(GetFileTime);
    DETACH(GetFileType);
    DETACH(GetFocus);
    DETACH(GetFontData);
    DETACH(GetFontLanguageInfo);
    DETACH(GetForegroundWindow);
    DETACH(GetFullPathNameA);
    DETACH(GetFullPathNameW);
    DETACH(GetGlyphOutlineA);
    DETACH(GetGlyphOutlineW);
    DETACH(GetGraphicsMode);
    DETACH(GetHGlobalFromILockBytes);
    DETACH(GetHGlobalFromStream);
    DETACH(GetHandleInformation);
    DETACH(GetICMProfileA);
    DETACH(GetICMProfileW);
    DETACH(GetIconInfo);
    DETACH(GetInputState);
    DETACH(GetKBCodePage);
    DETACH(GetKerningPairsA);
    DETACH(GetKerningPairsW);
    DETACH(GetKeyNameTextA);
    DETACH(GetKeyNameTextW);
    DETACH(GetKeyState);
    DETACH(GetKeyboardLayout);
    DETACH(GetKeyboardLayoutList);
    DETACH(GetKeyboardLayoutNameA);
    DETACH(GetKeyboardLayoutNameW);
    DETACH(GetKeyboardState);
    DETACH(GetKeyboardType);
    DETACH(GetLastActivePopup);
    DETACH(GetLocalTime);
    DETACH(GetLocaleInfoA);
    DETACH(GetLocaleInfoW);
    DETACH(GetLogColorSpaceA);
    DETACH(GetLogColorSpaceW);
    DETACH(GetLogicalDriveStringsA);
    DETACH(GetLogicalDriveStringsW);
    DETACH(GetLogicalDrives);
    DETACH(GetMailslotInfo);
    DETACH(GetMapMode);
    DETACH(GetMenu);
    DETACH(GetMenuCheckMarkDimensions);
    DETACH(GetMenuContextHelpId);
    DETACH(GetMenuDefaultItem);
    DETACH(GetMenuItemCount);
    DETACH(GetMenuItemID);
    DETACH(GetMenuItemInfoA);
    DETACH(GetMenuItemInfoW);
    DETACH(GetMenuItemRect);
    DETACH(GetMenuState);
    DETACH(GetMenuStringA);
    DETACH(GetMenuStringW);
    DETACH(GetMessageA);
    DETACH(GetMessageExtraInfo);
    DETACH(GetMessagePos);
    DETACH(GetMessageTime);
    DETACH(GetMessageW);
    DETACH(GetMetaFileA);
    DETACH(GetMetaFileBitsEx);
    DETACH(GetMetaFileW);
    DETACH(GetMetaRgn);
    DETACH(GetMiterLimit);
    DETACH(GetModuleFileNameA);
    DETACH(GetModuleFileNameW);
    DETACH(GetModuleHandleA);
    DETACH(GetModuleHandleW);
    DETACH(GetNamedPipeHandleStateA);
    DETACH(GetNamedPipeHandleStateW);
    DETACH(GetNamedPipeInfo);
    DETACH(GetNearestColor);
    DETACH(GetNearestPaletteIndex);
    DETACH(GetNextDlgGroupItem);
    DETACH(GetNextDlgTabItem);
    DETACH(GetNumberFormatA);
    DETACH(GetNumberFormatW);
    DETACH(GetNumberOfConsoleInputEvents);
    DETACH(GetNumberOfConsoleMouseButtons);
    DETACH(GetOEMCP);
    DETACH(GetObjectA);
    DETACH(GetObjectType);
    DETACH(GetObjectW);
    DETACH(GetOpenClipboardWindow);
    DETACH(GetOutlineTextMetricsA);
    DETACH(GetOutlineTextMetricsW);
    DETACH(GetOverlappedResult);
    DETACH(GetPaletteEntries);
    DETACH(GetParent);
    DETACH(GetPath);
    DETACH(GetPixel);
    DETACH(GetPixelFormat);
    DETACH(GetPolyFillMode);
    DETACH(GetPriorityClass);
    DETACH(GetPriorityClipboardFormat);
    DETACH(GetPrivateProfileIntA);
    DETACH(GetPrivateProfileIntW);
    DETACH(GetPrivateProfileSectionA);
    DETACH(GetPrivateProfileSectionNamesA);
    DETACH(GetPrivateProfileSectionNamesW);
    DETACH(GetPrivateProfileSectionW);
    DETACH(GetPrivateProfileStringA);
    DETACH(GetPrivateProfileStringW);
    DETACH(GetPrivateProfileStructA);
    DETACH(GetPrivateProfileStructW);
    DETACH(GetProcAddress);
    DETACH(GetProcessAffinityMask);
    DETACH(GetProcessHeaps);
    DETACH(GetProcessShutdownParameters);
    DETACH(GetProcessTimes);
    DETACH(GetProcessVersion);
    DETACH(GetProcessWindowStation);
    DETACH(GetProcessWorkingSetSize);
    DETACH(GetProfileIntA);
    DETACH(GetProfileIntW);
    DETACH(GetProfileSectionA);
    DETACH(GetProfileSectionW);
    DETACH(GetProfileStringA);
    DETACH(GetProfileStringW);
    DETACH(GetPropA);
    DETACH(GetPropW);
    DETACH(GetQueueStatus);
    DETACH(GetQueuedCompletionStatus);
    DETACH(GetROP2);
    DETACH(GetRasterizerCaps);
    DETACH(GetRegionData);
    DETACH(GetRgnBox);
    DETACH(GetRunningObjectTable);
    DETACH(GetScrollInfo);
    DETACH(GetScrollPos);
    DETACH(GetScrollRange);
    DETACH(GetShortPathNameA);
    DETACH(GetShortPathNameW);
    DETACH(GetStartupInfoA);
    DETACH(GetStartupInfoW);
    DETACH(GetStdHandle);
    DETACH(GetStockObject);
    DETACH(GetStretchBltMode);
    DETACH(GetSubMenu);
    DETACH(GetSysColor);
    DETACH(GetSysColorBrush);
    DETACH(GetSystemDefaultLCID);
    DETACH(GetSystemDefaultLangID);
    DETACH(GetSystemDirectoryA);
    DETACH(GetSystemDirectoryW);
    DETACH(GetSystemInfo);
    DETACH(GetSystemMenu);
    DETACH(GetSystemMetrics);
    DETACH(GetSystemPaletteEntries);
    DETACH(GetSystemPaletteUse);
    DETACH(GetSystemPowerStatus);
    DETACH(GetSystemTime);
    DETACH(GetSystemTimeAdjustment);
    DETACH(GetSystemTimeAsFileTime);
    DETACH(GetTabbedTextExtentA);
    DETACH(GetTabbedTextExtentW);
    DETACH(GetTapeParameters);
    DETACH(GetTapePosition);
    DETACH(GetTapeStatus);
    DETACH(GetTempFileNameA);
    DETACH(GetTempFileNameW);
    DETACH(GetTempPathA);
    DETACH(GetTempPathW);
    DETACH(GetTextAlign);
    DETACH(GetTextCharacterExtra);
    DETACH(GetTextCharset);
    DETACH(GetTextCharsetInfo);
    DETACH(GetTextColor);
    DETACH(GetTextExtentExPointA);
    DETACH(GetTextExtentExPointW);
    DETACH(GetTextExtentPoint32A);
    DETACH(GetTextExtentPoint32W);
    DETACH(GetTextExtentPointA);
    DETACH(GetTextExtentPointW);
    DETACH(GetTextFaceA);
    DETACH(GetTextFaceW);
    DETACH(GetTextMetricsA);
    DETACH(GetTextMetricsW);
    DETACH(GetThreadContext);
    DETACH(GetThreadDesktop);
#if(WINVER >= 0x0500)
    DETACH(GetThreadLocale);
#endif // (WINVER >= 0x0500)
    DETACH(GetThreadPriority);
    DETACH(GetThreadPriorityBoost);
    DETACH(GetThreadSelectorEntry);
    DETACH(GetThreadTimes);
    DETACH(GetTickCount);
    DETACH(GetTimeFormatA);
    DETACH(GetTimeFormatW);
    DETACH(GetTimeZoneInformation);
    DETACH(GetTopWindow);
    DETACH(GetUpdateRect);
    DETACH(GetUpdateRgn);
    DETACH(GetUserDefaultLCID);
    DETACH(GetUserDefaultLangID);
    DETACH(GetUserObjectInformationA);
    DETACH(GetUserObjectInformationW);
    DETACH(GetUserObjectSecurity);
    DETACH(GetVersion);
    DETACH(GetVersionExA);
    DETACH(GetVersionExW);
    DETACH(GetViewportExtEx);
    DETACH(GetViewportOrgEx);
    DETACH(GetVolumeInformationA);
    DETACH(GetVolumeInformationW);
    DETACH(GetWinMetaFileBits);
    DETACH(GetWindow);
    DETACH(GetWindowContextHelpId);
    DETACH(GetWindowDC);
    DETACH(GetWindowExtEx);
    DETACH(GetWindowLongA);
    DETACH(GetWindowLongW);
    DETACH(GetWindowOrgEx);
    DETACH(GetWindowPlacement);
    DETACH(GetWindowRect);
    DETACH(GetWindowRgn);
    DETACH(GetWindowTextA);
    DETACH(GetWindowTextLengthA);
    DETACH(GetWindowTextLengthW);
    DETACH(GetWindowTextW);
    DETACH(GetWindowThreadProcessId);
    DETACH(GetWindowWord);
    DETACH(GetWindowsDirectoryA);
    DETACH(GetWindowsDirectoryW);
    DETACH(GetWorldTransform);
    DETACH(GlobalAddAtomA);
    DETACH(GlobalAddAtomW);
    DETACH(GlobalAlloc);
    DETACH(GlobalCompact);
    DETACH(GlobalDeleteAtom);
    DETACH(GlobalFindAtomA);
    DETACH(GlobalFindAtomW);
    DETACH(GlobalFix);
    DETACH(GlobalFlags);
    DETACH(GlobalFree);
    DETACH(GlobalGetAtomNameA);
    DETACH(GlobalGetAtomNameW);
    DETACH(GlobalHandle);
    DETACH(GlobalLock);
    DETACH(GlobalMemoryStatus);
    DETACH(GlobalReAlloc);
    DETACH(GlobalSize);
    DETACH(GlobalUnWire);
    DETACH(GlobalUnfix);
    DETACH(GlobalUnlock);
    DETACH(GlobalWire);
    DETACH(GrayStringA);
    DETACH(GrayStringW);
    DETACH(HeapLock);
    DETACH(HeapUnlock);
    DETACH(HideCaret);
    DETACH(HiliteMenuItem);
    DETACH(IIDFromString);
    DETACH(ImpersonateDdeClientWindow);
    DETACH(InSendMessage);
    DETACH(InflateRect);
    DETACH(InitAtomTable);
    DETACH(InsertMenuA);
    DETACH(InsertMenuItemA);
    DETACH(InsertMenuItemW);
    DETACH(InsertMenuW);
    DETACH(IntersectClipRect);
    DETACH(IntersectRect);
    DETACH(InvalidateRect);
    DETACH(InvalidateRgn);
    DETACH(InvertRect);
    DETACH(InvertRgn);
    DETACH(IsAccelerator);
    DETACH(IsBadCodePtr);
    DETACH(IsBadHugeReadPtr);
    DETACH(IsBadHugeWritePtr);
    DETACH(IsBadReadPtr);
    DETACH(IsBadStringPtrA);
    DETACH(IsBadStringPtrW);
    DETACH(IsBadWritePtr);
    DETACH(IsCharAlphaA);
    DETACH(IsCharAlphaNumericA);
    DETACH(IsCharAlphaNumericW);
    DETACH(IsCharAlphaW);
    DETACH(IsCharLowerA);
    DETACH(IsCharLowerW);
    DETACH(IsCharUpperA);
    DETACH(IsCharUpperW);
    DETACH(IsChild);
    DETACH(IsClipboardFormatAvailable);
    DETACH(IsDBCSLeadByte);
    DETACH(IsDBCSLeadByteEx);
    DETACH(IsDebuggerPresent);
    DETACH(IsDialogMessageA);
    DETACH(IsDialogMessageW);
    DETACH(IsDlgButtonChecked);
    DETACH(IsIconic);
    DETACH(IsMenu);
#if !defined(DETOURS_ARM)
    DETACH(IsProcessorFeaturePresent);
#endif // !DETOURS_ARM
    DETACH(IsRectEmpty);
    DETACH(IsValidCodePage);
    DETACH(IsValidLocale);
    DETACH(IsWindow);
    DETACH(IsWindowEnabled);
    DETACH(IsWindowUnicode);
    DETACH(IsWindowVisible);
    DETACH(IsZoomed);
    DETACH(KillTimer);
    DETACH(LPtoDP);
    DETACH(LineDDA);
    DETACH(LineTo);
    DETACH(LoadAcceleratorsA);
    DETACH(LoadAcceleratorsW);
    DETACH(LoadBitmapA);
    DETACH(LoadBitmapW);
    DETACH(LoadCursorA);
    DETACH(LoadCursorFromFileA);
    DETACH(LoadCursorFromFileW);
    DETACH(LoadCursorW);
    DETACH(LoadIconA);
    DETACH(LoadIconW);
    DETACH(LoadImageA);
    DETACH(LoadImageW);
    DETACH(LoadKeyboardLayoutA);
    DETACH(LoadKeyboardLayoutW);
    DETACH(LoadLibraryA);
    DETACH(LoadLibraryExA);
    DETACH(LoadLibraryExW);
    DETACH(LoadLibraryW);
    DETACH(LoadMenuA);
    DETACH(LoadMenuIndirectA);
    DETACH(LoadMenuIndirectW);
    DETACH(LoadMenuW);
    DETACH(LoadModule);
    DETACH(LoadResource);
    DETACH(LoadStringA);
    DETACH(LoadStringW);
    DETACH(LocalAlloc);
    DETACH(LocalCompact);
    DETACH(LocalFileTimeToFileTime);
    DETACH(LocalFlags);
    DETACH(LocalFree);
    DETACH(LocalHandle);
    DETACH(LocalLock);
    DETACH(LocalReAlloc);
    DETACH(LocalShrink);
    DETACH(LocalSize);
    DETACH(LocalUnlock);
    DETACH(LockFile);
    DETACH(LockFileEx);
    DETACH(LockResource);
    DETACH(LockWindowUpdate);
    DETACH(LookupIconIdFromDirectory);
    DETACH(LookupIconIdFromDirectoryEx);
    DETACH(MapDialogRect);
    DETACH(MapViewOfFile);
    DETACH(MapViewOfFileEx);
    DETACH(MapVirtualKeyA);
    DETACH(MapVirtualKeyExA);
    DETACH(MapVirtualKeyExW);
    DETACH(MapVirtualKeyW);
    DETACH(MapWindowPoints);
    DETACH(MaskBlt);
    DETACH(MenuItemFromPoint);
    DETACH(MessageBeep);
    DETACH(MessageBoxA);
    DETACH(MessageBoxExA);
    DETACH(MessageBoxExW);
    DETACH(MessageBoxIndirectA);
    DETACH(MessageBoxIndirectW);
    DETACH(MessageBoxW);
    DETACH(MkParseDisplayName);
    DETACH(ModifyMenuA);
    DETACH(ModifyMenuW);
    DETACH(ModifyWorldTransform);
    DETACH(MonikerCommonPrefixWith);
    DETACH(MonikerRelativePathTo);
    DETACH(MoveFileA);
    DETACH(MoveFileExA);
    DETACH(MoveFileExW);
    DETACH(MoveFileW);
    DETACH(MoveToEx);
    DETACH(MoveWindow);
    DETACH(MsgWaitForMultipleObjects);
    DETACH(MsgWaitForMultipleObjectsEx);
    DETACH(MulDiv);
    DETACH(OemKeyScan);
    DETACH(OemToCharA);
    DETACH(OemToCharBuffA);
    DETACH(OemToCharBuffW);
    DETACH(OemToCharW);
    DETACH(OffsetClipRgn);
    DETACH(OffsetRect);
    DETACH(OffsetRgn);
    DETACH(OffsetViewportOrgEx);
    DETACH(OffsetWindowOrgEx);
    DETACH(OleBuildVersion);
    DETACH(OleConvertIStorageToOLESTREAM);
    DETACH(OleConvertIStorageToOLESTREAMEx);
    DETACH(OleConvertOLESTREAMToIStorage);
    DETACH(OleConvertOLESTREAMToIStorageEx);
    DETACH(OleCreate);
    DETACH(OleCreateDefaultHandler);
    DETACH(OleCreateEmbeddingHelper);
    DETACH(OleCreateEx);
    DETACH(OleCreateFromData);
    DETACH(OleCreateFromDataEx);
    DETACH(OleCreateFromFile);
    DETACH(OleCreateFromFileEx);
    DETACH(OleCreateLink);
    DETACH(OleCreateLinkEx);
    DETACH(OleCreateLinkFromData);
    DETACH(OleCreateLinkFromDataEx);
    DETACH(OleCreateLinkToFile);
    DETACH(OleCreateLinkToFileEx);
    DETACH(OleCreateMenuDescriptor);
    DETACH(OleCreateStaticFromData);
    DETACH(OleDestroyMenuDescriptor);
    DETACH(OleDoAutoConvert);
    DETACH(OleDraw);
    DETACH(OleDuplicateData);
    DETACH(OleFlushClipboard);
    DETACH(OleGetAutoConvert);
    DETACH(OleGetClipboard);
    DETACH(OleGetIconOfClass);
    DETACH(OleGetIconOfFile);
    DETACH(OleInitialize);
    DETACH(OleIsCurrentClipboard);
    DETACH(OleIsRunning);
    DETACH(OleLoad);
    DETACH(OleLoadFromStream);
    DETACH(OleLockRunning);
    DETACH(OleMetafilePictFromIconAndLabel);
    DETACH(OleNoteObjectVisible);
    DETACH(OleQueryCreateFromData);
    DETACH(OleQueryLinkFromData);
    DETACH(OleRegEnumFormatEtc);
    DETACH(OleRegEnumVerbs);
    DETACH(OleRegGetMiscStatus);
    DETACH(OleRegGetUserType);
    DETACH(OleRun);
    DETACH(OleSave);
    DETACH(OleSaveToStream);
    DETACH(OleSetAutoConvert);
    DETACH(OleSetClipboard);
    DETACH(OleSetContainedObject);
    DETACH(OleSetMenuDescriptor);
    DETACH(OleTranslateAccelerator);
    DETACH(OleUninitialize);
    DETACH(OpenClipboard);
    DETACH(OpenDesktopA);
    DETACH(OpenDesktopW);
    DETACH(OpenEventA);
    DETACH(OpenEventW);
    DETACH(OpenFile);
    DETACH(OpenFileMappingA);
    DETACH(OpenFileMappingW);
    DETACH(OpenIcon);
    DETACH(OpenInputDesktop);
    DETACH(OpenMutexA);
    DETACH(OpenMutexW);
    DETACH(OpenProcess);
    DETACH(OpenProcessToken);
    DETACH(OpenSemaphoreA);
    DETACH(OpenSemaphoreW);
    DETACH(OpenWaitableTimerA);
    DETACH(OpenWaitableTimerW);
    DETACH(OpenWindowStationA);
    DETACH(OpenWindowStationW);
    DETACH(OutputDebugStringA);
    DETACH(OutputDebugStringW);
    DETACH(PackDDElParam);
    DETACH(PaintDesktop);
    DETACH(PaintRgn);
    DETACH(PatBlt);
    DETACH(PathToRegion);
    DETACH(PeekConsoleInputA);
    DETACH(PeekConsoleInputW);
    DETACH(PeekMessageA);
    DETACH(PeekMessageW);
    DETACH(PeekNamedPipe);
    DETACH(Pie);
    DETACH(PlayEnhMetaFile);
    DETACH(PlayEnhMetaFileRecord);
    DETACH(PlayMetaFile);
    DETACH(PlayMetaFileRecord);
    DETACH(PlgBlt);
    DETACH(PolyBezier);
    DETACH(PolyBezierTo);
    DETACH(PolyDraw);
    DETACH(PolyPolygon);
    DETACH(PolyPolyline);
    DETACH(PolyTextOutA);
    DETACH(PolyTextOutW);
    DETACH(Polygon);
    DETACH(Polyline);
    DETACH(PolylineTo);
    DETACH(PostMessageA);
    DETACH(PostMessageW);
    DETACH(PostQueuedCompletionStatus);
    DETACH(PostQuitMessage);
    DETACH(PostThreadMessageA);
    DETACH(PostThreadMessageW);
    DETACH(PrepareTape);
    DETACH(ProgIDFromCLSID);
    DETACH(PropVariantClear);
    DETACH(PropVariantCopy);
    DETACH(PtInRect);
    DETACH(PtInRegion);
    DETACH(PtVisible);
    DETACH(PulseEvent);
    DETACH(PurgeComm);
    DETACH(QueryDosDeviceA);
    DETACH(QueryDosDeviceW);
    DETACH(QueryPerformanceCounter);
    DETACH(QueryPerformanceFrequency);
    DETACH(QueueUserAPC);
    DETACH(RaiseException);
    DETACH(ReadClassStg);
    DETACH(ReadClassStm);
    DETACH(ReadConsoleA);
    DETACH(ReadConsoleInputA);
    DETACH(ReadConsoleInputW);
    DETACH(ReadConsoleOutputA);
    DETACH(ReadConsoleOutputAttribute);
    DETACH(ReadConsoleOutputCharacterA);
    DETACH(ReadConsoleOutputCharacterW);
    DETACH(ReadConsoleOutputW);
    DETACH(ReadConsoleW);
    DETACH(ReadDirectoryChangesW);
    DETACH(ReadFile);
    DETACH(ReadFileEx);
    DETACH(ReadFmtUserTypeStg);
    DETACH(ReadProcessMemory);
    DETACH(RealizePalette);
    DETACH(RectInRegion);
    DETACH(RectVisible);
    DETACH(Rectangle);
    DETACH(RedrawWindow);
    DETACH(RegisterClassA);
    DETACH(RegisterClassExA);
    DETACH(RegisterClassExW);
    DETACH(RegisterClassW);
    DETACH(RegisterClipboardFormatA);
    DETACH(RegisterClipboardFormatW);
    DETACH(RegisterDragDrop);
    DETACH(RegisterHotKey);
    DETACH(RegisterWindowMessageA);
    DETACH(RegisterWindowMessageW);
    DETACH(ReleaseCapture);
    DETACH(ReleaseDC);
    DETACH(ReleaseMutex);
    DETACH(ReleaseSemaphore);
    DETACH(ReleaseStgMedium);
    DETACH(RemoveDirectoryA);
    DETACH(RemoveDirectoryW);
    DETACH(RemoveFontResourceA);
    DETACH(RemoveFontResourceW);
    DETACH(RemoveMenu);
    DETACH(RemovePropA);
    DETACH(RemovePropW);
    DETACH(ReplyMessage);
    DETACH(ResetDCA);
    DETACH(ResetDCW);
    DETACH(ResetEvent);
    DETACH(ResizePalette);
    DETACH(RestoreDC);
    DETACH(ResumeThread);
    DETACH(ReuseDDElParam);
    DETACH(RevokeDragDrop);
    DETACH(RoundRect);
    DETACH(SaveDC);
    DETACH(ScaleViewportExtEx);
    DETACH(ScaleWindowExtEx);
    DETACH(ScreenToClient);
    DETACH(ScrollConsoleScreenBufferA);
    DETACH(ScrollConsoleScreenBufferW);
    DETACH(ScrollDC);
    DETACH(ScrollWindow);
    DETACH(ScrollWindowEx);
    DETACH(SearchPathA);
    DETACH(SearchPathW);
    DETACH(SelectClipPath);
    DETACH(SelectClipRgn);
    DETACH(SelectObject);
    DETACH(SelectPalette);
    DETACH(SendDlgItemMessageA);
    DETACH(SendDlgItemMessageW);
    DETACH(SendMessageA);
    DETACH(SendMessageCallbackA);
    DETACH(SendMessageCallbackW);
    DETACH(SendMessageTimeoutA);
    DETACH(SendMessageTimeoutW);
    DETACH(SendMessageW);
    DETACH(SendNotifyMessageA);
    DETACH(SendNotifyMessageW);
    DETACH(SetAbortProc);
    DETACH(SetActiveWindow);
    DETACH(SetArcDirection);
    DETACH(SetBitmapBits);
    DETACH(SetBitmapDimensionEx);
    DETACH(SetBkColor);
    DETACH(SetBkMode);
    DETACH(SetBoundsRect);
    DETACH(SetBrushOrgEx);
    DETACH(SetCapture);
    DETACH(SetCaretBlinkTime);
    DETACH(SetCaretPos);
    DETACH(SetClassLongA);
    DETACH(SetClassLongW);
    DETACH(SetClassWord);
    DETACH(SetClipboardData);
    DETACH(SetClipboardViewer);
    DETACH(SetColorAdjustment);
    DETACH(SetColorSpace);
    DETACH(SetCommBreak);
    DETACH(SetCommConfig);
    DETACH(SetCommMask);
    DETACH(SetCommState);
    DETACH(SetCommTimeouts);
    DETACH(SetComputerNameA);
    DETACH(SetComputerNameW);
    DETACH(SetConsoleActiveScreenBuffer);
    DETACH(SetConsoleCP);
    DETACH(SetConsoleCtrlHandler);
    DETACH(SetConsoleCursorInfo);
    DETACH(SetConsoleCursorPosition);
    DETACH(SetConsoleMode);
    DETACH(SetConsoleOutputCP);
    DETACH(SetConsoleScreenBufferSize);
    DETACH(SetConsoleTextAttribute);
    DETACH(SetConsoleTitleA);
    DETACH(SetConsoleTitleW);
    DETACH(SetConsoleWindowInfo);
    DETACH(SetConvertStg);
    DETACH(SetCurrentDirectoryA);
    DETACH(SetCurrentDirectoryW);
    DETACH(SetCursor);
    DETACH(SetCursorPos);
    DETACH(SetDIBColorTable);
    DETACH(SetDIBits);
    DETACH(SetDIBitsToDevice);
    DETACH(SetDefaultCommConfigA);
    DETACH(SetDefaultCommConfigW);
    DETACH(SetDeviceGammaRamp);
    DETACH(SetDlgItemInt);
    DETACH(SetDlgItemTextA);
    DETACH(SetDlgItemTextW);
    DETACH(SetDoubleClickTime);
    DETACH(SetEndOfFile);
    DETACH(SetEnhMetaFileBits);
    DETACH(SetEnvironmentVariableA);
    DETACH(SetEnvironmentVariableW);
    DETACH(SetErrorMode);
    DETACH(SetEvent);
    DETACH(SetFileApisToANSI);
    DETACH(SetFileApisToOEM);
    DETACH(SetFileAttributesA);
    DETACH(SetFileAttributesW);
    DETACH(SetFilePointer);
    DETACH(SetFileTime);
    DETACH(SetFocus);
    DETACH(SetForegroundWindow);
    DETACH(SetGraphicsMode);
    DETACH(SetHandleCount);
    DETACH(SetHandleInformation);
    DETACH(SetICMMode);
    DETACH(SetICMProfileA);
    DETACH(SetICMProfileW);
    DETACH(SetKeyboardState);
    DETACH(SetLocalTime);
    DETACH(SetLocaleInfoA);
    DETACH(SetLocaleInfoW);
    DETACH(SetMailslotInfo);
    DETACH(SetMapMode);
    DETACH(SetMapperFlags);
    DETACH(SetMenu);
    DETACH(SetMenuContextHelpId);
    DETACH(SetMenuDefaultItem);
    DETACH(SetMenuItemBitmaps);
    DETACH(SetMenuItemInfoA);
    DETACH(SetMenuItemInfoW);
    DETACH(SetMessageExtraInfo);
    DETACH(SetMessageQueue);
    DETACH(SetMetaFileBitsEx);
    DETACH(SetMetaRgn);
    DETACH(SetMiterLimit);
    DETACH(SetNamedPipeHandleState);
    DETACH(SetPaletteEntries);
    DETACH(SetParent);
    DETACH(SetPixel);
    DETACH(SetPixelFormat);
    DETACH(SetPixelV);
    DETACH(SetPolyFillMode);
    DETACH(SetPriorityClass);
    DETACH(SetProcessAffinityMask);
    DETACH(SetProcessShutdownParameters);
    DETACH(SetProcessWindowStation);
    DETACH(SetProcessWorkingSetSize);
    DETACH(SetPropA);
    DETACH(SetPropW);
    DETACH(SetROP2);
    DETACH(SetRect);
    DETACH(SetRectEmpty);
    DETACH(SetRectRgn);
    DETACH(SetScrollInfo);
    DETACH(SetScrollPos);
    DETACH(SetScrollRange);
    DETACH(SetStdHandle);
    DETACH(SetStretchBltMode);
    DETACH(SetSysColors);
    DETACH(SetSystemCursor);
    DETACH(SetSystemPaletteUse);
    DETACH(SetSystemPowerState);
    DETACH(SetSystemTime);
    DETACH(SetSystemTimeAdjustment);
    DETACH(SetTapeParameters);
    DETACH(SetTapePosition);
    DETACH(SetTextAlign);
    DETACH(SetTextCharacterExtra);
    DETACH(SetTextColor);
    DETACH(SetTextJustification);
    DETACH(SetThreadAffinityMask);
    DETACH(SetThreadContext);
    DETACH(SetThreadDesktop);
    DETACH(SetThreadIdealProcessor);
#if(WINVER >= 0x0500)
    DETACH(SetThreadLocale);
#endif // (WINVER >= 0x0500)
    DETACH(SetThreadPriority);
    DETACH(SetThreadPriorityBoost);
    DETACH(SetTimeZoneInformation);
    DETACH(SetTimer);
    DETACH(SetUnhandledExceptionFilter);
    DETACH(SetUserObjectInformationA);
    DETACH(SetUserObjectInformationW);
    DETACH(SetUserObjectSecurity);
    DETACH(SetViewportExtEx);
    DETACH(SetViewportOrgEx);
    DETACH(SetVolumeLabelA);
    DETACH(SetVolumeLabelW);
    DETACH(SetWaitableTimer);
    DETACH(SetWinMetaFileBits);
    DETACH(SetWindowContextHelpId);
    DETACH(SetWindowExtEx);
    DETACH(SetWindowLongA);
    DETACH(SetWindowLongW);
    DETACH(SetWindowOrgEx);
    DETACH(SetWindowPlacement);
    DETACH(SetWindowPos);
    DETACH(SetWindowRgn);
    DETACH(SetWindowTextA);
    DETACH(SetWindowTextW);
    DETACH(SetWindowWord);
    DETACH(SetWindowsHookA);
    DETACH(SetWindowsHookExA);
    DETACH(SetWindowsHookExW);
    DETACH(SetWindowsHookW);
    DETACH(SetWorldTransform);
    DETACH(SetupComm);
    DETACH(ShowCaret);
    DETACH(ShowCursor);
    DETACH(ShowOwnedPopups);
    DETACH(ShowScrollBar);
    DETACH(ShowWindow);
    DETACH(ShowWindowAsync);
    DETACH(SignalObjectAndWait);
    DETACH(SizeofResource);
    DETACH(SleepEx);
    DETACH(StartDocA);
    DETACH(StartDocW);
    DETACH(StartPage);
    DETACH(StgCreateDocfile);
    DETACH(StgCreateDocfileOnILockBytes);
    DETACH(StgCreatePropSetStg);
    DETACH(StgCreatePropStg);
    DETACH(StgCreateStorageEx);
    DETACH(StgGetIFillLockBytesOnFile);
    DETACH(StgGetIFillLockBytesOnILockBytes);
    DETACH(StgIsStorageFile);
    DETACH(StgIsStorageILockBytes);
    DETACH(StgOpenAsyncDocfileOnIFillLockBytes);
    DETACH(StgOpenPropStg);
    DETACH(StgOpenStorage);
    DETACH(StgOpenStorageEx);
    DETACH(StgOpenStorageOnILockBytes);
    DETACH(StgSetTimes);
    DETACH(StretchBlt);
    DETACH(StretchDIBits);
    DETACH(StringFromCLSID);
    DETACH(StringFromGUID2);
    DETACH(StringFromIID);
    DETACH(StrokeAndFillPath);
    DETACH(StrokePath);
    DETACH(SubtractRect);
    DETACH(SuspendThread);
    DETACH(SwapBuffers);
    DETACH(SwapMouseButton);
    DETACH(SwitchDesktop);
    DETACH(SwitchToFiber);
    DETACH(SwitchToThread);
    DETACH(SystemParametersInfoA);
    DETACH(SystemParametersInfoW);
    DETACH(SystemTimeToFileTime);
    DETACH(SystemTimeToTzSpecificLocalTime);
    DETACH(TabbedTextOutA);
    DETACH(TabbedTextOutW);
    DETACH(TerminateProcess);
    DETACH(TerminateThread);
    DETACH(TextOutA);
    DETACH(TextOutW);
    DETACH(TileWindows);
    DETACH(ToAscii);
    DETACH(ToAsciiEx);
    DETACH(ToUnicode);
    DETACH(ToUnicodeEx);
    DETACH(TrackMouseEvent);
    DETACH(TrackPopupMenu);
    DETACH(TrackPopupMenuEx);
    DETACH(TransactNamedPipe);
    DETACH(TranslateAcceleratorA);
    DETACH(TranslateAcceleratorW);
    DETACH(TranslateCharsetInfo);
    DETACH(TranslateMDISysAccel);
    DETACH(TranslateMessage);
    DETACH(TransmitCommChar);
#if DETOUR_TryEnterCriticalSection_EVEN_IF_IT_EXERCISES_A_BUG_IN_RtlLookupFunctionTable
    DETACH(TryEnterCriticalSection);
#endif
    DETACH(UnhookWindowsHook);
    DETACH(UnhookWindowsHookEx);
    DETACH(UnionRect);
    DETACH(UnloadKeyboardLayout);
    DETACH(UnlockFile);
    DETACH(UnlockFileEx);
    DETACH(UnmapViewOfFile);
    DETACH(UnpackDDElParam);
    DETACH(UnrealizeObject);
    DETACH(UnregisterClassA);
    DETACH(UnregisterClassW);
    DETACH(UnregisterHotKey);
    DETACH(UpdateColors);
    DETACH(UpdateResourceA);
    DETACH(UpdateResourceW);
    DETACH(UpdateWindow);
    DETACH(ValidateRect);
    DETACH(ValidateRgn);
    DETACH(VerLanguageNameA);
    DETACH(VerLanguageNameW);
    DETACH(VirtualAllocEx);
    DETACH(VirtualFreeEx);
    DETACH(VirtualProtectEx);
    DETACH(VirtualQueryEx);
    DETACH(VkKeyScanA);
    DETACH(VkKeyScanExA);
    DETACH(VkKeyScanExW);
    DETACH(VkKeyScanW);
    DETACH(WSAAccept);
    DETACH(WSAAddressToStringA);
    DETACH(WSAAddressToStringW);
    DETACH(WSAAsyncGetHostByAddr);
    DETACH(WSAAsyncGetHostByName);
    DETACH(WSAAsyncGetProtoByName);
    DETACH(WSAAsyncGetProtoByNumber);
    DETACH(WSAAsyncGetServByName);
    DETACH(WSAAsyncGetServByPort);
    DETACH(WSAAsyncSelect);
    DETACH(WSACancelAsyncRequest);
    DETACH(WSACancelBlockingCall);
    DETACH(WSACleanup);
    DETACH(WSACloseEvent);
    DETACH(WSAConnect);
    DETACH(WSACreateEvent);
    DETACH(WSADuplicateSocketA);
    DETACH(WSADuplicateSocketW);
    DETACH(WSAEnumNameSpaceProvidersA);
    DETACH(WSAEnumNameSpaceProvidersW);
    DETACH(WSAEnumNetworkEvents);
    DETACH(WSAEnumProtocolsA);
    DETACH(WSAEnumProtocolsW);
    DETACH(WSAEventSelect);
    DETACH(WSAGetOverlappedResult);
    DETACH(WSAGetQOSByName);
    DETACH(WSAGetServiceClassInfoA);
    DETACH(WSAGetServiceClassInfoW);
    DETACH(WSAGetServiceClassNameByClassIdA);
    DETACH(WSAGetServiceClassNameByClassIdW);
    DETACH(WSAHtonl);
    DETACH(WSAHtons);
    DETACH(WSAInstallServiceClassA);
    DETACH(WSAInstallServiceClassW);
    DETACH(WSAIoctl);
    DETACH(WSAIsBlocking);
    DETACH(WSAJoinLeaf);
    DETACH(WSALookupServiceBeginA);
    DETACH(WSALookupServiceBeginW);
    DETACH(WSALookupServiceEnd);
    DETACH(WSALookupServiceNextA);
    DETACH(WSALookupServiceNextW);
    DETACH(WSANtohl);
    DETACH(WSANtohs);
    DETACH(WSAProviderConfigChange);
    DETACH(WSARecv);
    DETACH(WSARecvDisconnect);
    DETACH(WSARecvFrom);
    DETACH(WSARemoveServiceClass);
    DETACH(WSAResetEvent);
    DETACH(WSASend);
    DETACH(WSASendDisconnect);
    DETACH(WSASendTo);
    DETACH(WSASetBlockingHook);
    DETACH(WSASetEvent);
    DETACH(WSASetServiceA);
    DETACH(WSASetServiceW);
    DETACH(WSASocketA);
    DETACH(WSASocketW);
    DETACH(WSAStartup);
    DETACH(WSAStringToAddressA);
    DETACH(WSAStringToAddressW);
    DETACH(WSAUnhookBlockingHook);
    DETACH(WSAWaitForMultipleEvents);
    DETACH(WaitCommEvent);
    DETACH(WaitForInputIdle);
    DETACH(WaitForMultipleObjects);
    DETACH(WaitForMultipleObjectsEx);
    DETACH(WaitForSingleObject);
    DETACH(WaitForSingleObjectEx);
    DETACH(WaitMessage);
    DETACH(WaitNamedPipeA);
    DETACH(WaitNamedPipeW);
    DETACH(WidenPath);
    DETACH(WinExec);
    DETACH(WinHelpA);
    DETACH(WinHelpW);
    DETACH(WindowFromDC);
    DETACH(WindowFromPoint);
    DETACH(WriteClassStg);
    DETACH(WriteClassStm);
    DETACH(WriteConsoleA);
    DETACH(WriteConsoleInputA);
    DETACH(WriteConsoleInputW);
    DETACH(WriteConsoleOutputA);
    DETACH(WriteConsoleOutputAttribute);
    DETACH(WriteConsoleOutputCharacterA);
    DETACH(WriteConsoleOutputCharacterW);
    DETACH(WriteConsoleOutputW);
    DETACH(WriteConsoleW);
    DETACH(WriteFile);
    DETACH(WriteFileEx);
    DETACH(WriteFmtUserTypeStg);
    DETACH(WritePrivateProfileSectionA);
    DETACH(WritePrivateProfileSectionW);
    DETACH(WritePrivateProfileStringA);
    DETACH(WritePrivateProfileStringW);
    DETACH(WritePrivateProfileStructA);
    DETACH(WritePrivateProfileStructW);
    DETACH(WriteProcessMemory);
    DETACH(WriteProfileSectionA);
    DETACH(WriteProfileSectionW);
    DETACH(WriteProfileStringA);
    DETACH(WriteProfileStringW);
    DETACH(WriteTapemark);
    DETACH(__WSAFDIsSet);
    DETACH(_hread);
    DETACH(_hwrite);
    DETACH(_lclose);
    DETACH(_lcreat);
    DETACH(_llseek);
    DETACH(_lopen);
    DETACH(_lread);
    DETACH(_lwrite);
    DETACH(accept);
    DETACH(bind);
    DETACH(closesocket);
    DETACH(connect);
    DETACH(gethostbyaddr);
    DETACH(gethostbyname);
    DETACH(gethostname);
    DETACH(getpeername);
    DETACH(getprotobyname);
    DETACH(getprotobynumber);
    DETACH(getservbyname);
    DETACH(getservbyport);
    DETACH(getsockname);
    DETACH(getsockopt);
    DETACH(htonl);
    DETACH(htons);
    DETACH(inet_addr);
    DETACH(inet_ntoa);
    DETACH(ioctlsocket);
    DETACH(keybd_event);
    DETACH(listen);
    DETACH(mouse_event);
    DETACH(ntohl);
    DETACH(ntohs);
    DETACH(recv);
    DETACH(recvfrom);
    DETACH(select);
    DETACH(send);
    DETACH(sendto);
    DETACH(setsockopt);
    DETACH(shutdown);
    DETACH(socket);

    if (DetourTransactionCommit() != 0) {
        PVOID *ppbFailedPointer = NULL;
        LONG error = DetourTransactionCommitEx(&ppbFailedPointer);

        printf("traceapi.dll: Detach transaction failed to commit. Error %ld (%p/%p)",
               error, ppbFailedPointer, *ppbFailedPointer);
        return error;
    }
    return 0;
}
//
///////////////////////////////////////////////////////////////// End of File.
