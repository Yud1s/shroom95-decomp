// BrowserControl.cpp
#include "BrowserControl.hpp"
#include "BrowserControl_regen.ipp"


char* __cdecl ZStrUtil__Str(const char* string, const char* pat, int32_t bTreatAsMBChar) {
	return __sub_000745D0(string, pat, bTreatAsMBChar);
}
void __cdecl ADAD__Log(const char* str, long __formal) {
	return __sub_00074670(str, __formal);
}
wchar_t* __cdecl A2WBSTR(const char* lp, int32_t nLen) {
	return __sub_000748A0(lp, nLen);
}
HRESULT __stdcall ATL__AtlAdvise(IUnknown* pUnkCP, IUnknown* pUnk, const _GUID& iid, unsigned long* pdw) {
	return __sub_00074A10(pUnkCP, pUnk, iid, pdw);
}
HRESULT __stdcall ATL__AtlUnadvise(IUnknown* pUnkCP, const _GUID& iid, unsigned long dw) {
	return __sub_00074AB0(pUnkCP, iid, dw);
}
/*int32_t __cdecl IsEqualGUID(const _GUID& rguid1, const _GUID& rguid2) {
	return __sub_00074560(rguid1, rguid2);
}*/
void __cdecl ADAD__Log(const char* str) {
	return __sub_00074660(str);
}
