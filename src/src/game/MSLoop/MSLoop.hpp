// MSLoop.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"





char** __cdecl GetDevMultiSz(void* Devs, _SP_DEVINFO_DATA* DevInfo, unsigned long Prop);
char** __cdecl GetMultiSzIndexArray(char* MultiSz);
int32_t __cdecl _tcsicmp(const char* _String1, const char* _String2);
void __cdecl DelMultiSz(char** Array);
int32_t __cdecl Remove(void* Devs, _SP_DEVINFO_DATA* DevInfo, unsigned long Index);
int32_t __cdecl WildCompareHwIds(char** Array, const none& MatchEntry);
int32_t __cdecl WildCardMatch(const char* Item, const none& MatchEntry);
