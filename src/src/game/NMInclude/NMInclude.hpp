// NMInclude.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"





HRESULT __stdcall StringCchCopyA(char* pszDest, uint32_t cchDest, const char* pszSrc);
HRESULT __stdcall StringCopyWorkerA(char* pcchNewDestLength, uint32_t cchToCopy, uint32_t* arg2, const char* arg3, uint32_t arg4);
