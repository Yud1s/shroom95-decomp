// TimeUtil.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

namespace Util
{
    void __cdecl FTSubtract(const _FILETIME &ftFrom, const _FILETIME &ftTo, long *pnDay, long *pnHour, long *pnMin, long *pnSec);
    long __cdecl FT2DAY(_FILETIME ft);
    _FILETIME __cdecl FTDateFromStr(ZXString<char> sDate);
    _FILETIME __cdecl FTAddDay(const _FILETIME &ft, long nDay);
    _SYSTEMTIME __cdecl STGetNow();
    uint64_t __cdecl FT2ULL(_FILETIME ft);
    _FILETIME __cdecl FTGetNow();

    _FILETIME __cdecl GetFileTimeFromStringDate(char *sData);
}