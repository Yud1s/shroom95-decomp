// TimeUtil.cpp
#include "TimeUtil.hpp"
#include "Stage/Stage.hpp"

static ZRef<CStage> FAKE_ZRef_CStage{};
#include "TimeUtil_regen.ipp"

constexpr uint64_t HUNDRED_NANOSECONDS_IN_A_SECOND = 10000000LL;
constexpr uint64_t SECONDS_IN_A_DAY = 86400LL;
const uint64_t SECONDS_IN_AN_HOUR = 3600LL;
const uint64_t SECONDS_IN_A_MINUTE = 60LL;

FILETIME __cdecl ULL2FT(uint64_t ull) {
    FILETIME ft{};
    ft.dwLowDateTime = static_cast<DWORD>(ull & 0xFFFFFFFF);
    ft.dwHighDateTime = static_cast<DWORD>(ull >> 32);
    return ft;
    //return __sub_003600E0(ull);
}

void __cdecl Util::FTSubtract(const _FILETIME &ftFrom, const _FILETIME &ftTo, long *pnDay, long *pnHour, long *pnMin,
                              long *pnSec) {
    auto ullFrom = FT2ULL(ftFrom);
    auto ullTo = FT2ULL(ftTo);
    auto diff = ullTo - ullFrom;

    *pnDay = static_cast<long>(diff / (HUNDRED_NANOSECONDS_IN_A_SECOND * SECONDS_IN_A_DAY));
    diff %= HUNDRED_NANOSECONDS_IN_A_SECOND * SECONDS_IN_A_DAY;

    *pnHour = static_cast<long>(diff / (HUNDRED_NANOSECONDS_IN_A_SECOND * SECONDS_IN_AN_HOUR));
    diff %= HUNDRED_NANOSECONDS_IN_A_SECOND * SECONDS_IN_AN_HOUR;

    *pnMin = static_cast<long>(diff / (HUNDRED_NANOSECONDS_IN_A_SECOND * SECONDS_IN_A_MINUTE));
    diff %= HUNDRED_NANOSECONDS_IN_A_SECOND * SECONDS_IN_A_MINUTE;

    *pnSec = static_cast<long>(diff / HUNDRED_NANOSECONDS_IN_A_SECOND);
    //return __sub_00360030(ftFrom, ftTo, pnDay, pnHour, pnMin, pnSec);
}

long __cdecl Util::FT2DAY(_FILETIME ft) {
    auto ull = FT2ULL(ft);

    // Calculate days
    return (long)(ull / (HUNDRED_NANOSECONDS_IN_A_SECOND * SECONDS_IN_A_DAY));
    //return __sub_00360190(CreateNakedParam(ft));
}

_FILETIME __cdecl Util::FTDateFromStr(ZXString<char> sDate) {
    //return Util::GetFileTimeFromStringDate(sDate.m_pStr);
    //TODO
    return _FILETIME{};
    // return __sub_00360210(CreateNakedParam(sDate));
}

_FILETIME __cdecl Util::FTAddDay(const _FILETIME &ft, long nDay) {
    auto ull = FT2ULL(ft);
    ull += nDay * HUNDRED_NANOSECONDS_IN_A_SECOND * SECONDS_IN_A_DAY;
    return ULL2FT(ull);
    //return __sub_0035FFE0(CreateNakedParam(ft), nDay);
}

_SYSTEMTIME __cdecl Util::STGetNow() {
    /*
     * TODO, if stage is MapLoadable -> CField::GetCorrect Time
     *  else GetLocalTime
     */
    return __sub_00360120();
}

uint64_t __cdecl Util::FT2ULL(_FILETIME ft) {
    return (static_cast<uint64_t>(ft.dwHighDateTime) << 32) | ft.dwLowDateTime;
    //return __sub_00360100(CreateNakedParam(ft));
}



_FILETIME __cdecl Util::FTGetNow() {
    auto st = STGetNow();
    _FILETIME ft{};
    SystemTimeToFileTime(&st, &ft);
    return ft;
    //return __sub_003601C0();
}


_FILETIME __cdecl Util::GetFileTimeFromStringDate(char *sData) {
    SYSTEMTIME st;
    sscanf(sData, "%04hu%02hu%02hu", &st.wYear, &st.wMonth, &st.wDay); // NOLINT(*-err34-c)
    FILETIME ft{};
    SystemTimeToFileTime(&st, &ft);
    return ft;
}
