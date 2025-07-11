//
//

#ifndef ZTL_ZTIMEUTIL_H
#define ZTL_ZTIMEUTIL_H

#include <util.h>
#include "zxstring.h"

namespace TimeUtil {
    void __cdecl FTSubtract(const _FILETIME &ftFrom, const _FILETIME &ftTo, long *pnDay, long *pnHour, long *pnMin, long *pnSec);
    long __cdecl FT2DAY(_FILETIME ft);
    _FILETIME __cdecl GetFileTimeFromStringDate(ZXString<char> sDate);
    _FILETIME __cdecl FTAddDay(const _FILETIME &ft, long nDay);
    _SYSTEMTIME __cdecl STGetNow();
    uint64_t __cdecl FT2ULL(_FILETIME ft);
    _FILETIME __cdecl ULL2FT(uint64_t ull);
    _FILETIME ST2FT(const _SYSTEMTIME &st);
    _SYSTEMTIME FT2ST(const _FILETIME &ft);
    _FILETIME __cdecl FTGetNow();
    _FILETIME __cdecl FTDateFromStr(ZXString<char> sDate);
};


long __cdecl get_min_from_subtracting_two_filetime(_FILETIME *ft0, _FILETIME *ft1);


#endif //ZTL_ZTIMEUTIL_H
