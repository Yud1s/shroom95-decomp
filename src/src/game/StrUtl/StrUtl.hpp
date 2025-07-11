// StrUtl.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"





int32_t __cdecl Util__IsEndWithJongSung(ZXString<char> sInput);
ZXString<char> __cdecl Util__AddJosa_EUN(ZXString<char> sStr);
void __cdecl Util__StrSplit(const char* szStr, const char* szSeperator, ZArray<ZXString<char> >& asResult);
int32_t __cdecl Util__IsHanGeulWithJongSung(wchar_t chInput);
