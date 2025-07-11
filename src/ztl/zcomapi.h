//
// Created by jonas on 17.07.24.
//

#ifndef ZCOMAPI_H
#define ZCOMAPI_H

#include "comdef.h"

namespace ZComAPI {
    HRESULT ZComVariantClear(VARIANT *pvarg);

    HRESULT ZComVariantCopy(VARIANT *pvargDest, const VARIANT *pvargSrc);

    HRESULT ZComVariantChangeType(VARIANT *pvargDest, const VARIANT *pvargSrc, uint16_t wFlags, VARTYPE vt);

    HRESULT ZComVarBstrFromVariant(VARIANT *pvargDest, const VARIANT *pvargSrc);

    wchar_t *ZComSysAllocStringLen(wchar_t const *s, size_t len);

    wchar_t *ZComSysAllocStringByteLen(char const *s, size_t byteLen);

    wchar_t *ZComSysAllocString(const wchar_t *psz);
    size_t ZComSysStringLen(BSTR bstr);
    size_t ZComSysStringByteLen(BSTR bstr);
    void ZComSysFreeString(BSTR bstr);


    BSTR __stdcall ZtlConvertStringToBSTR(const char* pSrc);
    char* __stdcall ZtlConvertBSTRToString(BSTR pSrc);
}



#endif //ZCOMAPI_H
