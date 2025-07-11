// check_dr.cpp
#include "check_dr.hpp"
#include "check_dr_regen.ipp"


void* __cdecl MS_GetProcAddress(void* pvBase, const char* szFuncName) {
	return __sub_000AB150(pvBase, szFuncName);
}
int32_t __cdecl DR_check(none* pDrInfo, unsigned long* pCheck, HINSTANCE__* hImageBase) {
	//TODO return __sub_000AB900(pDrInfo, pCheck, hImageBase);
    return 0;
}
int32_t __cdecl MS_GetThreadContext(void* hThread, _CONTEXT* lpContext) {
	return __sub_000AB2E0(hThread, lpContext);
}
HINSTANCE__* __cdecl MS_GetModuleHandleA(const char* szModuleName) {
	return __sub_000AB040(szModuleName);
}

void DR_uninit() {
    UNIMPLEMENTED;
    /*
     *
     *     if (g_hNtdll != 0)
    {
        _FreeLibrary@4(g_hNtdll);
        _DeleteFileA@4(&g_szSafePath);
    }

     */
}

void DeleteNstSafeDll() {
    UNIMPLEMENTED;
}
