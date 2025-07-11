// StrUtl.cpp
#include "StrUtl.hpp"
#include "StrUtl_regen.ipp"


int32_t __cdecl Util__IsEndWithJongSung(ZXString<char> sInput) {
	return __sub_00348580(CreateNakedParam(sInput));
}
ZXString<char> __cdecl Util__AddJosa_EUN(ZXString<char> sStr) {
	ZXString<char> ret;
	return *__sub_00348820(&ret, CreateNakedParam(sStr));
}
void __cdecl Util__StrSplit(const char* szStr, const char* szSeperator, ZArray<ZXString<char> >& asResult) {
	return __sub_00348680(szStr, szSeperator, asResult);
}
int32_t __cdecl Util__IsHanGeulWithJongSung(wchar_t chInput) {
	return __sub_00348520(chInput);
}
