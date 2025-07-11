//
//

#include "ZTimeUtil.h"

auto ToInt(const ZXString<char> &s) {
    return std::atoi((const char *) s); // NOLINT(*-err34-c)
}

constexpr uint64_t HUNDRED_NANOSECONDS_IN_A_SECOND = 10000000LL;
constexpr uint64_t SECONDS_IN_A_MINUTE = 60LL;
constexpr uint64_t SECONDS_IN_AN_HOUR = SECONDS_IN_A_MINUTE * 60LL;
constexpr uint64_t SECONDS_IN_A_DAY = SECONDS_IN_AN_HOUR * 24LL;

_FILETIME __cdecl TimeUtil::ULL2FT(uint64_t ull) {
    FILETIME ft{};
    ft.dwLowDateTime = static_cast<DWORD>(ull & 0xFFFFFFFF);
    ft.dwHighDateTime = static_cast<DWORD>(ull >> 32);
    return ft;
}

void TimeUtil::FTSubtract(const _FILETIME &ftFrom, const _FILETIME &ftTo,
                          long *pnDay = nullptr,
                          long *pnHour = nullptr,
                          long *pnMin = nullptr,
                          long *pnSec = nullptr) {

    auto ullFrom = FT2ULL(ftFrom);
    auto ullTo = FT2ULL(ftTo);
    auto diff = ullFrom - ullTo;

    if (pnDay) {
        *pnDay = static_cast<long>(diff / (HUNDRED_NANOSECONDS_IN_A_SECOND * SECONDS_IN_A_DAY));
        diff %= HUNDRED_NANOSECONDS_IN_A_SECOND * SECONDS_IN_A_DAY;
    }

    if(pnHour) {
        *pnHour = static_cast<long>(diff / (HUNDRED_NANOSECONDS_IN_A_SECOND * SECONDS_IN_AN_HOUR));
        diff %= HUNDRED_NANOSECONDS_IN_A_SECOND * SECONDS_IN_AN_HOUR;
    }

    if(pnMin) {
        *pnMin = static_cast<long>(diff / (HUNDRED_NANOSECONDS_IN_A_SECOND * SECONDS_IN_A_MINUTE));
        diff %= HUNDRED_NANOSECONDS_IN_A_SECOND * SECONDS_IN_A_MINUTE;
    }

    if(pnSec) {
        *pnSec = static_cast<long>(diff / HUNDRED_NANOSECONDS_IN_A_SECOND);
    }
}

long TimeUtil::FT2DAY(_FILETIME ft) {
    auto ull = FT2ULL(ft);
    return (long) (ull / (HUNDRED_NANOSECONDS_IN_A_SECOND * SECONDS_IN_A_DAY));
}

_FILETIME TimeUtil::GetFileTimeFromStringDate(ZXString<char> sDate) {
    // 150842304000000000 2079
    _FILETIME ft{0xbb058000, 0x217e646};

    if (sDate.GetLength() == 14) {
        _SYSTEMTIME st{};
        st.wYear = ToInt(sDate.Left(4));
        st.wMonth = ToInt(sDate.Mid(4, 6));
        st.wDay = ToInt(sDate.Mid(6, 8));
        st.wHour = ToInt(sDate.Mid(8, 10));
        st.wMinute = ToInt(sDate.Mid(10, 12));
        st.wSecond = ToInt(sDate.Mid(12, 14));

        SystemTimeToFileTime(&st, &ft);
    }

    return ft;
}

_FILETIME TimeUtil::FTAddDay(const _FILETIME &ft, long nDay) {
    auto ull = FT2ULL(ft);
    ull += static_cast<uint64_t>(nDay) * HUNDRED_NANOSECONDS_IN_A_SECOND * SECONDS_IN_A_DAY;
    return ULL2FT(ull);
}

_SYSTEMTIME TimeUtil::STGetNow() {
    _SYSTEMTIME st{};
    GetLocalTime(&st);
    return st;
}

uint64_t TimeUtil::FT2ULL(_FILETIME ft) {
    return (static_cast<uint64_t>(ft.dwHighDateTime) << 32) | ft.dwLowDateTime;
}

_FILETIME TimeUtil::FTGetNow() {
    auto st = STGetNow();
    _FILETIME ft{};
    SystemTimeToFileTime(&st, &ft);
    return ft;
}

_FILETIME TimeUtil::FTDateFromStr(ZXString<char> sData) {
    SYSTEMTIME st{};
    sscanf_s((const char*)sData, "%04hu%02hu%02hu", &st.wYear, &st.wMonth, &st.wDay);
    FILETIME ft{};
    SystemTimeToFileTime(&st, &ft);
    return ft;
}

_FILETIME TimeUtil::ST2FT(const _SYSTEMTIME &st) {
    FILETIME ft{};
    SystemTimeToFileTime(&st, &ft);
    return ft;
}

_SYSTEMTIME TimeUtil::FT2ST(const _FILETIME &ft) {
    SYSTEMTIME st{};
    FileTimeToSystemTime(&ft, &st);
    return st;
}

long __cdecl get_min_from_subtracting_two_filetime(_FILETIME* ft0, _FILETIME* ft1) {
    auto dt = TimeUtil::FT2ULL(*ft0) - TimeUtil::FT2ULL(*ft1);
    return static_cast<long>(dt / (HUNDRED_NANOSECONDS_IN_A_SECOND * SECONDS_IN_A_MINUTE));
}