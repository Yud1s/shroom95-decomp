// NMInclude.cpp
#include "NMInclude.hpp"
#include "NMInclude_regen.ipp"


HRESULT __stdcall StringCchCopyA(char* pszDest, uint32_t cchDest, const char* pszSrc) {
	return __sub_0026B720(pszDest, cchDest, pszSrc);
}
HRESULT __stdcall StringCopyWorkerA(char* pcchNewDestLength, uint32_t cchToCopy, uint32_t* arg2, const char* arg3, uint32_t arg4) {
	return __sub_0026B0F0(pcchNewDestLength, cchToCopy, arg2, arg3, arg4);
}
