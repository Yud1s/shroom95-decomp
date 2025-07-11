#include "zcomapi.h"
#include <memory>

#include "zallocex.h"

struct ZComBstrData {
    size_t len;
    wchar_t data[0];

    static ZComBstrData *Alloc(size_t byteLen) {
        const auto p = CoTaskMemAlloc(byteLen + sizeof(size_t) + sizeof(wchar_t));
        if (!p) {
            return nullptr;
        }
        const auto hdr = static_cast<ZComBstrData *>(p);
        std::memset(hdr->data, 0, byteLen + sizeof(wchar_t));
        hdr->len = byteLen;
        return hdr;
    }

    void Free() {
        CoTaskMemFree(this);
    }
};

ZComBstrData *BstrData(BSTR bstr) {
    return reinterpret_cast<ZComBstrData *>(bstr) - 1;
}


bool ClearBstr(VARIANT *pvarg) {
    if (pvarg->vt == VT_BSTR) {
        pvarg->vt = VT_EMPTY;
        if (const auto bstr = pvarg->bstrVal) {
            BstrData(bstr)->Free();
            pvarg->bstrVal = nullptr;
        }
        return true;
    }

    return false;
}

size_t ZComAPI::ZComSysStringLen(BSTR bstr) {
    if(!bstr) {
        return 0;
    }
    return ZComSysStringByteLen(bstr) / sizeof(wchar_t);
}

size_t ZComAPI::ZComSysStringByteLen(BSTR bstr) {
    if (!bstr) {
        return 0;
    }

    return BstrData(bstr)->len;
}

void ZComAPI::ZComSysFreeString(BSTR bstr) {
    if (bstr) {
        CoTaskMemFree(BstrData(bstr));
    }
}

BSTR __stdcall ZComAPI::ZtlConvertStringToBSTR(const char *pSrc) {
    if (!pSrc) {
        return nullptr;
    }

    auto size = MultiByteToWideChar(0, 0, pSrc, -1, nullptr, 0);
    size = size ? size - 1 : 0;
    const auto hdr = ZComBstrData::Alloc(size * sizeof(wchar_t));
    if (!hdr) {
        return nullptr;
    }
    MultiByteToWideChar(0, 0, pSrc, -1, hdr->data, 0x3fffffff);


    return hdr->data;
}

char * __stdcall ZComAPI::ZtlConvertBSTRToString(BSTR pSrc) {
    if (!pSrc) {
        return nullptr;
    }

    const auto size = WideCharToMultiByte(0, 0, pSrc, -1, nullptr, 0, nullptr, nullptr);
    const auto data = static_cast<char*>(z_anon_alloc(size));
    if (!data) {
        return nullptr;
    }
    WideCharToMultiByte(0, 0, pSrc, -1, data, 0x3fffffff, nullptr, nullptr);
    return data;
}

HRESULT ZComAPI::ZComVariantClear(VARIANT *pvarg) {
    if (ClearBstr(pvarg)) {
        return 0;
    }
    return VariantClear(pvarg);
}

HRESULT ZComAPI::ZComVariantCopy(VARIANT *pvargDest, const VARIANT *pvargSrc) {
    if (pvargDest == pvargSrc) {
        return S_OK;
    }

    if (pvargSrc->vt != VT_BSTR) {
        ClearBstr(pvargDest);
        return VariantCopy(pvargDest, pvargSrc);
    }


    if (const auto res = ZComVariantClear(pvargDest); res < 0) {
        return res;
    }

    pvargDest->vt = VT_BSTR;
    const auto bstr = pvargSrc->bstrVal;
    const auto len = ZComSysStringLen(bstr);
    pvargDest->bstrVal = ZComSysAllocStringLen(bstr, len);

    return S_OK;
}

HRESULT ZComAPI::ZComVariantChangeType(VARIANT *pvargDest, const VARIANT *pvargSrc, uint16_t wFlags, VARTYPE vt) {
    if (vt == VT_BSTR) {
        return ZComVarBstrFromVariant(pvargDest, pvargSrc);
    }

    if (pvargDest == pvargSrc && pvargSrc->vt == VT_BSTR) {
        VARIANT tmp;
        const auto res = VariantChangeType(&tmp, pvargSrc, wFlags, vt);
        if (res >= 0) {
            ZComVariantClear(pvargDest);
            *pvargDest = tmp;
        }
        return res;
    }

    ClearBstr(pvargDest);
    return VariantChangeType(pvargDest, pvargSrc, wFlags, vt);
}

HRESULT ZComAPI::ZComVarBstrFromVariant(VARIANT *pvargDest, const VARIANT *pvargSrc) {
    if (pvargSrc->vt == VT_BSTR) {
        return ZComVariantCopy(pvargDest, pvargSrc);
    }

    if (const auto res = ZComVariantClear(pvargDest); res < 0) {
        return res;
    }

    if (pvargSrc->vt == VT_EMPTY) {
        pvargDest->vt = VT_BSTR;
        pvargDest->bstrVal = ZComSysAllocString(L"");
        return S_OK;
    }

    wchar_t buf[256]{};
    switch (pvargSrc->vt) {
        case VT_I1:
        case VT_I2:
        case VT_I4:
            swprintf(buf, 255, L"%d", pvargSrc->lVal);
            break;
        case VT_UI1:
        case VT_UI2:
        case VT_UI4:
            swprintf(buf, 255, L"%u", pvargSrc->ulVal);
            break;
        case VT_R4:
            swprintf(buf, 255, L"%f", pvargSrc->fltVal);
            break;
        case VT_R8:
            swprintf(buf, 255, L"%lf", pvargSrc->dblVal);
            break;
        default:
            break; // TODO might no be normal behavior
    }

    pvargDest->vt = VT_BSTR;
    pvargDest->bstrVal = ZComSysAllocString(buf);

    return 0;
}

wchar_t *ZComAPI::ZComSysAllocStringLen(wchar_t const *s, const size_t len) {
    const auto byteLen = len * sizeof(wchar_t);
    const auto p = CoTaskMemAlloc(byteLen + sizeof(size_t) + sizeof(wchar_t));
    if (!p) {
        return nullptr;
    }

    const auto hdr = static_cast<ZComBstrData *>(p);
    hdr->len = byteLen;
    if (s) {
        std::memcpy(hdr->data, s, byteLen);
    }
    hdr->data[len] = 0;
    return hdr->data;
}

wchar_t *ZComAPI::ZComSysAllocStringByteLen(char const *s, const size_t byteLen) {
    return ZComSysAllocStringLen(reinterpret_cast<wchar_t const *>(s), byteLen / sizeof(wchar_t));
}

wchar_t *ZComAPI::ZComSysAllocString(const wchar_t *psz) {
    if (psz == nullptr) {
        return nullptr;
    }
    const auto len = wcslen(psz);
    return ZComSysAllocStringLen(psz, len);
}
