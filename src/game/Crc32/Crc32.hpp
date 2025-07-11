// Crc32.hpp
#pragma once

#include "util/base.h"
#include "pcom/wz.h"

// Level: 0 0x20190
class CCrc32;

class CCrc32 {
public:
    static uint32_t ms_adwCrc32Table[256];
    // Nested
    // Fields
    // Methods
public:
    static unsigned long
    __cdecl GetCrc32_(const uint8_t *pData, unsigned long dwSize, unsigned long dwInit, int32_t bUseAddr,
                     unsigned long *pdwSimpleGuardPoint);

public:
    static unsigned long
    __cdecl GetCrc32(const uint8_t *arg0, unsigned long arg1, unsigned long arg2, int32_t arg3, unsigned long *arg4, int32_t bPosSave);


    template<typename T>
    static unsigned long Get(const T& value, unsigned long cur)
    {
        return CCrc32::GetCrc32((const uint8_t*)&value, sizeof(T), cur, 0, nullptr, 0);
    }

    static void Init();
};

template<typename T, typename U>
struct GETCRC32Helper {
    static T call(const U &data) {
        auto pData = reinterpret_cast<const unsigned char *>(&data);
        return static_cast<T>(CCrc32::GetCrc32(pData, sizeof(U), 0, 0, nullptr, 0));
    }
};

struct GETCRC32HelperString {
    static uint32_t __cdecl call(ZXString<char> str, uint32_t init);
};


uint32_t GETCRC32Svr_long(const int32_t* a, uint32_t init);

STATIC_ASSERT_SIZE(CCrc32, 1);
