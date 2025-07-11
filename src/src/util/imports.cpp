#include "imports.h"

#include <iostream>
#include <WinSock2.h>

#include "windows.h"
#include "wininet.h"
#include "tlhelp32.h"
#include "psapi.h"
#include "oleauto.h"
#include "timeapi.h"
#include "spdlog/spdlog.h"


LONG __stdcall __InterlockedExchange(
  LONG volatile *Target,
  LONG          Value
) {
  return InterlockedExchange(Target, Value);
}

long __stdcall __InterlockedIncrement(
   long volatile * lpAddend
) {
	return InterlockedIncrement(lpAddend);
}


long __stdcall __InterlockedDecrement(
   long volatile * lpAddend
) {
	return InterlockedDecrement(lpAddend);
}

static void __AhnHS_CheckHackShieldRunningStatus() {}
static void __AhnHS_PreTranslateBufferedDIMessage() {}
static void __AhnHS_HSUpdateA() {}
static void __AhnHS_CheckAPIHookedW() {}
static void __AhnHS_SetUserIdW() {}
static void __AhnHS_SendHsLogW() {}
static void __AhnHS_GetSDKVersion() {}
static void __AhnHS_HSUpdateExA() {}
static void __AhnHS_StartMonitorA() {}
static void __AhnHS_ResumeService() {}
static void __AhnHS_CheckFileCRCA() {}
static void __AhnHS_CheckFileCRCW() {}
static void __AhnHS_PreTranslateBufferedDICounter() {}
static void __AhnHS_IsModuleSecureW() {}
static void __AhnHS_InitializeA() {}
static void __AhnHS_MakeResponse() {}
static void __AhnHS_PauseService() {}
static void __AhnHS_MakeGuidAckMsg() {}
static void __AhnHS_StartMonitorW() {}
static void __AhnHS_SaveFuncAddress() {}
static void __AhnHS_Uninitialize() {}
static void __AhnHS_PreTranslateImmediateDIMessage() {}
static void __AhnHS_Direct3DCreate9() {}
static void __AhnHS_Direct3DCreate8() {}
static void __AhnHS_CheckAPIHookedA() {}
static void __AhnHS_SendHsLogA() {}
static void __AhnHS_StopService() {}
static void __AhnHS_IsModuleSecureA() {}
static void __AhnHS_HSUpdateExW() {}
static void __AhnHS_VerifyProtectedFunction() {}
static void __AhnHS_StartService() {}
static void __AhnHS_sendto() {}
static void __AhnHS_HSUpdateW() {}
static void __AhnHS_MakeAckMsg() {}
static void __AhnHS_InitializeW() {}
static void __AhnHS_SetUserIdA() {}

static void NMCO_MemoryFree() {}
static void NMCO_SetPatchOption() {}
static void NMCO_CallNMFunc() {}
static void NMCO_SetLocaleAndRegion() {}


HMODULE MustLoadLibrary(const wchar_t* libName) {
	const auto lib = LoadLibraryW(libName);
	if(!lib) {
		//TODO lib name
		spdlog::error("Failed to load library Error: {}", GetLastError());
		throw std::exception("Failed to load library");
	}

	return lib;
}

void ZImports::LoadImports() {
	const auto dinput = MustLoadLibrary(L"dinput8.dll");
	const auto mss32 = MustLoadLibrary(L"mss32.dll");
	const auto ijl15 = MustLoadLibrary(L"ijl15.dll");


	_DirectInput8Create = GetProcAddress(dinput, "DirectInput8Create");

	___AhnHS_CheckHackShieldRunningStatus = &__AhnHS_CheckHackShieldRunningStatus;
	___AhnHS_PreTranslateBufferedDIMessage = &__AhnHS_PreTranslateBufferedDIMessage;
	___AhnHS_IsModuleSecureW = &__AhnHS_IsModuleSecureW;
	___AhnHS_HSUpdateA = &__AhnHS_HSUpdateA;
	___AhnHS_SetUserIdA = &__AhnHS_SetUserIdA;
	___AhnHS_StartMonitorA = &__AhnHS_StartMonitorA;
	___AhnHS_HSUpdateExA = &__AhnHS_HSUpdateExA;
	___AhnHS_sendto = &__AhnHS_sendto;
	___AhnHS_HSUpdateW = &__AhnHS_HSUpdateW;
	___AhnHS_MakeAckMsg = &__AhnHS_MakeAckMsg;
	___AhnHS_SendHsLogW = &__AhnHS_SendHsLogW;
	___AhnHS_GetSDKVersion = &__AhnHS_GetSDKVersion;
	___AhnHS_IsModuleSecureA = &__AhnHS_IsModuleSecureA;
	___AhnHS_VerifyProtectedFunction = &__AhnHS_VerifyProtectedFunction;
	___AhnHS_PreTranslateBufferedDICounter = &__AhnHS_PreTranslateBufferedDICounter;
	___AhnHS_CheckFileCRCA = &__AhnHS_CheckFileCRCA;
	___AhnHS_HSUpdateExW = &__AhnHS_HSUpdateExW;
	___AhnHS_StartService = &__AhnHS_StartService;
	___AhnHS_ResumeService = &__AhnHS_ResumeService;
	___AhnHS_SendHsLogA = &__AhnHS_SendHsLogA;
	___AhnHS_StopService = &__AhnHS_StopService;
	___AhnHS_Direct3DCreate8 = &__AhnHS_Direct3DCreate8;
	___AhnHS_InitializeW = &__AhnHS_InitializeW;
	___AhnHS_MakeGuidAckMsg = &__AhnHS_MakeGuidAckMsg;
	___AhnHS_StartMonitorW = &__AhnHS_StartMonitorW;
	___AhnHS_SaveFuncAddress = &__AhnHS_SaveFuncAddress;
	___AhnHS_SetUserIdW = &__AhnHS_SetUserIdW;
	___AhnHS_InitializeA = &__AhnHS_InitializeA;
	___AhnHS_CheckFileCRCW = &__AhnHS_CheckFileCRCW;
	___AhnHS_MakeResponse = &__AhnHS_MakeResponse;
	___AhnHS_Uninitialize = &__AhnHS_Uninitialize;
	___AhnHS_CheckAPIHookedW = &__AhnHS_CheckAPIHookedW;
	___AhnHS_Direct3DCreate9 = &__AhnHS_Direct3DCreate9;
	___AhnHS_CheckAPIHookedA = &__AhnHS_CheckAPIHookedA;
	___AhnHS_PauseService = &__AhnHS_PauseService;
	___AhnHS_PreTranslateImmediateDIMessage = &__AhnHS_PreTranslateImmediateDIMessage;
	
	_AIL_quick_status = GetProcAddress(mss32, "_AIL_quick_status");
	_AIL_quick_set_volume = GetProcAddress(mss32, "_AIL_quick_set_volume");
	_AIL_quick_unload = GetProcAddress(mss32, "_AIL_quick_unload");
	_AIL_quick_ms_position = GetProcAddress(mss32, "_AIL_quick_ms_position");
	_AIL_quick_shutdown = GetProcAddress(mss32, "_AIL_quick_shutdown");
	_AIL_set_redist_directory = GetProcAddress(mss32, "_AIL_set_redist_directory");
	_AIL_quick_set_ms_position = GetProcAddress(mss32, "_AIL_quick_set_ms_position");
	_AIL_quick_halt = GetProcAddress(mss32, "_AIL_quick_halt");
	_AIL_quick_play = GetProcAddress(mss32, "_AIL_quick_play");
	_AIL_quick_ms_length = GetProcAddress(mss32, "_AIL_quick_ms_length");
	_AIL_quick_startup = GetProcAddress(mss32, "_AIL_quick_startup");

	_ijlWrite = GetProcAddress(ijl15, "ijlWrite");
	_ijlRead = GetProcAddress(ijl15, "ijlRead");
	_ijlFree = GetProcAddress(ijl15, "ijlFree");
	_ijlInit = GetProcAddress(ijl15, "ijlInit");

	_NMCO_MemoryFree = &NMCO_MemoryFree;
	_NMCO_SetPatchOption = &NMCO_SetPatchOption;
	_NMCO_CallNMFunc = &NMCO_CallNMFunc;
	_NMCO_SetLocaleAndRegion = &NMCO_SetLocaleAndRegion;

	_CreateFileA = &CreateFileA;
	_WriteFile = &WriteFile;
	_GetCurrentProcessId = &GetCurrentProcessId;
	_FindWindowA = &FindWindowA;
	_socket = &socket;
	_Sleep = &Sleep;
	_CloseHandle = &CloseHandle;
	_AdjustWindowRect = &AdjustWindowRect;
	_GetSystemDirectoryA = &GetSystemDirectoryA;
	_OffsetRect = &OffsetRect;
	_RegEnumKeyExA = &RegEnumKeyExA;
	_lstrcpyA = &lstrcpyA;
	_VirtualAllocEx = &VirtualAllocEx;
	_RtlUnwind = &RtlUnwind;
	_HttpSendRequestA = &HttpSendRequestA;
	_SafeArrayDestroy = &SafeArrayDestroy;
	_getpeername = &getpeername;
	_Process32First = &Process32First;
	_ExitProcess = &ExitProcess;
	_WaitForSingleObject = &WaitForSingleObject;
	_GetSystemTimeAsFileTime = &GetSystemTimeAsFileTime;
	_GetWindowTextA = &GetWindowTextA;
	_IsBadWritePtr = &IsBadWritePtr;
	_wsprintfA = &wsprintfA;
	_GetOEMCP = &GetOEMCP;
	_OpenProcess = &OpenProcess;
	_OpenProcessToken = &OpenProcessToken;
	_GetDlgItem = &GetDlgItem;
	_CharUpperBuffA = &CharUpperBuffA;
	_HttpOpenRequestA = &HttpOpenRequestA;
	_TlsSetValue = &TlsSetValue;
	_LeaveCriticalSection = &LeaveCriticalSection;
	_SelectObject = &SelectObject;
	_DeleteObject = &DeleteObject;
	// ReSharper disable once CppDeprecatedEntity
	_GetVersionExA = &GetVersionExA;
	_MoveWindow = &MoveWindow;
	_closesocket = &closesocket;
	_RegDeleteValueA = &RegDeleteValueA;
	_VerQueryValueA = &VerQueryValueA;
	_CreateEventA = &CreateEventA;
	_GetCurrentProcess = &GetCurrentProcess;
	_BringWindowToTop = &BringWindowToTop;
	_AttachThreadInput = &AttachThreadInput;
	_SetLastError = &SetLastError;
	// ReSharper disable once CppDeprecatedEntity
	_GetVersion = &GetVersion;
	_WriteConsoleA = &WriteConsoleA;
	_InternetConnectA = &InternetConnectA;
	_CreateProcessA = &CreateProcessA;
	_htonl = &htonl;
	_MessageBoxA = &MessageBoxA;
	_IsBadReadPtr = &IsBadReadPtr;
	_SetEvent = &SetEvent;
	_InterlockedIncrement = &__InterlockedIncrement;
	_UnmapViewOfFile = &UnmapViewOfFile;
	_SetUnhandledExceptionFilter = &SetUnhandledExceptionFilter;
	_InterlockedDecrement = &__InterlockedDecrement;
	_SystemTimeToFileTime = &SystemTimeToFileTime;
	_InitializeCriticalSectionAndSpinCount = &InitializeCriticalSectionAndSpinCount;
	_WriteConsoleW = &WriteConsoleW;
	_GetModuleHandleA = &GetModuleHandleA;
	_LCMapStringW = &LCMapStringW;
	_LoadLibraryA = &LoadLibraryA;
	_RegQueryValueExA = &RegQueryValueExA;
	//ZImports::_Netbios = &Netbios;
	_InternetOpenA = &InternetOpenA;
	_DispatchMessageA = &DispatchMessageA;
	_GetProcessMemoryInfo = &GetProcessMemoryInfo;
	_CoCreateGuid = &CoCreateGuid;
	_LocalAlloc = &LocalAlloc;
	_IsValidCodePage = &IsValidCodePage;
	_SafeArrayCreate = &SafeArrayCreate;
	_MapViewOfFile = &MapViewOfFile;
	_CreateDIBSection = &CreateDIBSection;
	_RegFlushKey = &RegFlushKey;
	_GetStdHandle = &GetStdHandle;
	_GetFileVersionInfoSizeA = &GetFileVersionInfoSizeA;
	_getsockname = &getsockname;
	_FileTimeToSystemTime = &FileTimeToSystemTime;
	_HeapCreate = &HeapCreate;
	_FreeLibrary = &FreeLibrary;
	_GetStringTypeA = &GetStringTypeA;
	_GetTickCount = &GetTickCount;
	_GetConsoleCP = &GetConsoleCP;
	_RegSetValueExA = &RegSetValueExA;
	_RegQueryInfoKeyA = &RegQueryInfoKeyA;
	_Thread32First = &Thread32First;
	_TerminateProcess = &TerminateProcess;
	_SetStdHandle = &SetStdHandle;
	_GetEnvironmentStrings = &GetEnvironmentStrings;
	//_GetAdaptersInfo = &GetAdaptersInfo;
	_OpenMutexA = &OpenMutexA;
	_GetWindowThreadProcessId = &GetWindowThreadProcessId;
	_VariantClear = &VariantClear;
	_Module32Next = &Module32Next;
	_FreeEnvironmentStringsA = &FreeEnvironmentStringsA;
	_HeapSize = &HeapSize;
	_ExitThread = &ExitThread;
	_GetFileSize = &GetFileSize;
	_Process32Next = &Process32Next;
	// ReSharper disable once CppDeprecatedEntity
	_inet_addr = &inet_addr;
	_IsDBCSLeadByte = &IsDBCSLeadByte;
	_CreateThread = &CreateThread;
	_CharNextA = &CharNextA;
	_CreateMutexA = &CreateMutexA;
	_LookupPrivilegeValueA = &LookupPrivilegeValueA;
	_CreateCompatibleDC = &CreateCompatibleDC;
	_VirtualFree = &VirtualFree;
	_GetWindow = &GetWindow;
	_QueryPerformanceCounter = &QueryPerformanceCounter;
	_WSACleanup = &WSACleanup;
	_VirtualQuery = &VirtualQuery;
	_InternetCloseHandle = &InternetCloseHandle;
	_GetFileVersionInfoA = &GetFileVersionInfoA;
	_LCMapStringA = &LCMapStringA;
	_TlsGetValue = &TlsGetValue;
	_GetStartupInfoA = &GetStartupInfoA;
	_MultiByteToWideChar = &MultiByteToWideChar;
	_VirtualAlloc = &VirtualAlloc;
	_IsDebuggerPresent = &IsDebuggerPresent;
	_RegCloseKey = &RegCloseKey;
	_MapVirtualKeyA = &MapVirtualKeyA;
	_FreeEnvironmentStringsW = &FreeEnvironmentStringsW;
	_RaiseException = &RaiseException;
	_GetCommandLineA = &GetCommandLineA;
	_FormatMessageA = &FormatMessageA;
	_TlsFree = &TlsFree;
	_RegCreateKeyExA = &RegCreateKeyExA;
	_GetModuleFileNameA = &GetModuleFileNameA;
	_VariantCopy = &VariantCopy;
	_CreateWindowExA = &CreateWindowExA;
	_PtInRect = &PtInRect;
	_SetFilePointer = &SetFilePointer;
	_UnhandledExceptionFilter = &UnhandledExceptionFilter;
	_GetLocaleInfoA = &GetLocaleInfoA;
	_lstrcmpA = &lstrcmpA;
	_GetWindowsDirectoryA = &GetWindowsDirectoryA;
	_TlsAlloc = &TlsAlloc;
	_FindNextFileA = &FindNextFileA;
	_LocalFree = &LocalFree;
	_GetEnvironmentStringsW = &GetEnvironmentStringsW;
	_IsWindowEnabled = &IsWindowEnabled;
	_SetRectEmpty = &SetRectEmpty;
	_GetTempPathA = &GetTempPathA;
	_GetObjectA = &GetObjectA;
	_GetCurrentThreadId = &GetCurrentThreadId;
	_WSAGetLastError = &WSAGetLastError;
	_ReadFile = &ReadFile;
	_AdjustTokenPrivileges = &AdjustTokenPrivileges;
	_WriteProcessMemory = &WriteProcessMemory;
	_Module32First = &Module32First;
	_GetCPInfo = &GetCPInfo;
	_FlushFileBuffers = &FlushFileBuffers;
	_BitBlt = &BitBlt;
	_GetStringTypeW = &GetStringTypeW;
	_DeleteFileA = &DeleteFileA;
	_GetLastError = &GetLastError;
	_CopyFileA = &CopyFileA;
	_VariantInit = &VariantInit;
	_wvsprintfA = &wvsprintfA;
	_RegEnumValueA = &RegEnumValueA;
	_htons = &htons;
	_SetHandleCount = &SetHandleCount;
	_EnterCriticalSection = &EnterCriticalSection;
	_RegOpenKeyExA = &RegOpenKeyExA;
	_HeapReAlloc = &HeapReAlloc;
	_PeekMessageA = &PeekMessageA;
	_DeleteCriticalSection = &DeleteCriticalSection;
	_TranslateMessage = &TranslateMessage;
	_VirtualProtect = &VirtualProtect;
	_GetProcAddress = &GetProcAddress;
	_GlobalMemoryStatus = &GlobalMemoryStatus;
	_DeleteDC = &DeleteDC;
	_GetConsoleOutputCP = &GetConsoleOutputCP;
	_GetLocalTime = &GetLocalTime;
	_HeapFree = &HeapFree;
	_RegDeleteKeyA = &RegDeleteKeyA;
	_GetProcessHeap = &GetProcessHeap;
	// ReSharper disable once CppDeprecatedEntity
	_gethostbyname = &gethostbyname;
	_InterlockedExchange = &__InterlockedExchange;
	_FindClose = &FindClose;
	_SetRect = &SetRect;
	_GetConsoleMode = &GetConsoleMode;
	_lstrlenA = &lstrlenA;
	_CompareFileTime = &CompareFileTime;
	_LoadStringA = &LoadStringA;
	_ReleaseMutex = &ReleaseMutex;
	_GetExitCodeProcess = &GetExitCodeProcess;
	_InitializeCriticalSection = &InitializeCriticalSection;
	_FindFirstFileA = &FindFirstFileA;
	_LoadBitmapA = &LoadBitmapA;
	_Thread32Next = &Thread32Next;
	_GetErrorInfo = &GetErrorInfo;
	_CreateFileMappingA = &CreateFileMappingA;
	_WSAStartup = &WSAStartup;
	_GetFileType = &GetFileType;
	_HeapAlloc = &HeapAlloc;
	_lstrcpynA = &lstrcpynA;
	_VariantChangeType = &VariantChangeType;
	_GetTempFileNameA = &GetTempFileNameA;
	_GetVolumeInformationA = &GetVolumeInformationA;
	_InternetSetStatusCallback = &InternetSetStatusCallback;
	_lstrcmpiA = &lstrcmpiA;
	_SendMessageA = &SendMessageA;
	_VirtualProtectEx = &VirtualProtectEx;
	_ReadProcessMemory = &ReadProcessMemory;
	_timeGetTime = &timeGetTime;
	_LoadLibraryExA = &LoadLibraryExA;
	_GetModuleHandleW = &GetModuleHandleW;
	_DialogBoxParamA = &DialogBoxParamA;
	_EnableWindow = &EnableWindow;
	_EnumThreadWindows = &EnumThreadWindows;
	_GetACP = &GetACP;
	_CreateToolhelp32Snapshot = &CreateToolhelp32Snapshot;
	_WideCharToMultiByte = &WideCharToMultiByte;
}

__declspec(naked) void __ijlInit() {
	__asm {
		jmp dword ptr [ZImports::_ijlInit]
	}
}

__declspec(naked) void __ijlRead() {
	__asm {
		jmp dword ptr [ZImports::_ijlRead]
	}
}

__declspec(naked) void __ijlWrite() {
	__asm {
		jmp dword ptr [ZImports::_ijlWrite]
	}
}

__declspec(naked) void __ijlFree() {
	__asm {
		jmp dword ptr [ZImports::_ijlFree]
	}
}


void _DirectInput8Create() {
	__asm {
		jmp dword ptr [ZImports::_DirectInput8Create]
	}
}
