// igCipher.hpp
#pragma once

#include "util/base.h"
#include "pcom/wz.h"


class CIGCipher {
public:
    static unsigned char bShuffle[256];

    static unsigned long __cdecl innoHash(unsigned char *pSrc, int32_t nLen, unsigned long *pdwKey);

    static void __cdecl innoEncrypt(unsigned char *pDest, unsigned char *pSrc, int32_t nLen, unsigned long *pdwKey);

    static void __cdecl innoDecrypt(unsigned char *pDest, unsigned char *pSrc, int32_t nLen, unsigned long *pdwKey);

    static void __cdecl innoEncryptStr(unsigned char *arg0, const char *arg1, unsigned long *arg2);

    static const char *__cdecl innoDecryptStr(char *pDest, unsigned char *pSrc, unsigned long *pdwKey);

    static void __cdecl MorphKey(unsigned long *key, unsigned char data);
};

STATIC_ASSERT_SIZE(CIGCipher, 1);
