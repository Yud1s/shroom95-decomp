// check_dr.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"





void* __cdecl MS_GetProcAddress(void* pvBase, const char* szFuncName);
int32_t __cdecl DR_check(none* pDrInfo, unsigned long* pCheck, HINSTANCE__* hImageBase);
void DR_uninit();



int32_t __cdecl MS_GetThreadContext(void* hThread, _CONTEXT* lpContext);
HINSTANCE__* __cdecl MS_GetModuleHandleA(const char* szModuleName);


void DeleteNstSafeDll();