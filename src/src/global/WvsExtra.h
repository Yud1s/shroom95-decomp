#pragma once

#include <algorithm>
#include <cstdint>

#include "util/base.h"
#include "util/extra.h"

template <typename T>
static NakedParam<_x_com_ptr<T>> CreateNakedParam(_x_com_ptr<T> ptr)
{
    NakedParam<_x_com_ptr<T>> ret;
    new (&ret.data) _x_com_ptr<T>(ptr);
    return ret;
}

template <typename C>
static NakedParam<ZXString<C>> CreateNakedParam(ZXString<C> ptr)
{
    NakedParam<ZXString<C>> ret;
    new (&ret.data) ZXString<C>(ptr);
    return ret;
}

template <typename T>
static NakedParam<ZRef<T>> CreateNakedParam(ZRef<T> ptr)
{
    NakedParam<ZRef<T>> ret;
    new (&ret.data) ZRef<T>(ptr);
    return ret;
}
static NakedParam<Ztl_bstr_t> CreateNakedParam(Ztl_bstr_t ptr)
{
    NakedParam<Ztl_bstr_t> ret;
    new (&ret.data) Ztl_bstr_t(ptr);
    return ret;
}

static NakedParam<_FILETIME> CreateNakedParam(_FILETIME ptr)
{
    return NakedParam<_FILETIME>(&ptr);
}

template <typename D>
static NakedParam<D> CreateNakedParam(D ptr)
{
    return NakedParam<D>(&ptr);
}

static void __stdcall __vector_ctor_iterator(char* p, uint32_t sz, int count, void (__thiscall* pCtor)(void*))
{
    for (auto i = 0; i < count; ++i)
    {
        pCtor(p);
        p += sz;
    }
}

static void __stdcall __eh_vector_dtor_iterator(char* ptr, uint32_t sz, int count, void (__thiscall* pDtor)(void*))
{
    for (auto i = 0; i < count; ++i)
    {
        pDtor(ptr);
        ptr += sz;
    }
}

static void __stdcall __eh_vector_ctor_iterator(char* ptr, uint32_t sz, int count, void (__thiscall* pCtor)(void*), void (__thiscall* pDtor)(void*))
{
    for (auto i = 0; i < count; ++i)
    {
        pCtor(ptr);
        ptr += sz;
    }
}

// TODO(std)

static void
_atl__ATL_SAFE_ALLOCA_IMPLCAtlSafeAllocBufferManagerATLCCRTAllocatorCAtlSafeAllocBufferManagerATLCCRTAllocator()
{
}

static void _atl_AtlAdvise()
{
}

static void _atl_AtlUnadvise()
{
}

static void _atl_CComQIPtrIWebBrowser2IID_IWebBrowser2operator()
{
}

static void _atl_CComQIPtrIOleInPlaceObjectIID_IOleInPlaceObjectCComQIPtrIOleInPlaceObjectIID_IOleInPlaceObject()
{
}

static void _std__Adjust_heapintintint()
{
}

static void _std__Adjust_heapGeometryInclusionCheckerLineintGeometryInclusionCheckerLine()
{
}

static void _std__Unguarded_partitionGeometryInclusionCheckerLine()
{
}

static void _std__SortGeometryInclusionCheckerLineint()
{
}

static void _std__Insertion_sort1GeometryInclusionCheckerLineGeometryInclusionCheckerLine()
{
}

static void _std__Make_heapGeometryInclusionCheckerLineintGeometryInclusionCheckerLine()
{
}

static void _std__Sort_heapGeometryInclusionCheckerLine()
{
}

static void _std__Unguarded_partitionint()
{
}

static void _std__Sortintint()
{
}

static void _std__Insertion_sort1intint()
{
}

static void _std__Make_heapintintint()
{
}

static void _std__Sort_heapint()
{
}

static void _std__MedianGeometryInclusionCheckerLine()
{
}

static void _std__Medianint()
{
}

static void __IJL_Uninitialize()
{
}

template <typename T>
struct return_bound_rangeHelper
{
    static T call(T value, T min, T max)
    {
        return std::clamp(value, min, max);
    }
};

static return_bound_rangeHelper<double> _FAKE_return_bound_rangeHelperDouble{};

template <typename T>
struct _anon_DecodeHelper
{
    static void call()
    {

        UNIMPLEMENTED;
    }
};

static _anon_DecodeHelper<char> _FAKE_anon_DecodeHelperChar{};

template <typename T>
struct rotatelHelper
{
    static void call(T *data, size_t len, size_t bitshift)
    {   
        uint8_t* a = reinterpret_cast<uint8_t*>(data);
        auto sz = len / sizeof(T);

        if (bitshift == 0 || sz == 0)
        {
            return; // No shift needed or empty array
        }

        size_t byteShift = bitshift / 8; // Full bytes to shift
        size_t bitShift = bitshift % 8;  // Remaining bit positions to shift

        if (byteShift >= sz)
        {
            byteShift = byteShift % sz;
        }

        // First, handle the full byte shift
        if (byteShift > 0)
        {
            // Rotate the array in place by the number of full bytes
            std::reverse(a, a + byteShift);
            std::reverse(a + byteShift, a + sz);
            std::reverse(a, a + sz);
        }

        // If there are no remaining bit shifts, we're done
        if (bitShift == 0)
        {
            return;
        }

        // Handle the bit shift
        uint8_t carry = 0;
        for (size_t i = 0; i < sz; ++i)
        {
            uint8_t nextCarry = (a[i] >> (8 - bitShift));
            a[i] = (a[i] << bitShift) | carry;
            carry = nextCarry;
        }

        // Handle the wrap-around of the remaining bits
        a[0] |= carry;
    }
};

static rotatelHelper<unsigned char> _FAKE_rotatelHelperUChar{};

// class ZXString<char> __cdecl operator+<char,char>(char const *,class ZXString<char> const &)
static ZXString<char> __op_add_char_char(const char *s1, const ZXString<char> &s2)
{
    ZXString<char> ret(s1);
    ret += s2;
    return ret;
}

// class ZXString<char> __cdecl operator+<unsigned short,char>(unsigned short const *,class ZXString<char> const &)
static ZXString<char> __op_add_ushort_char(unsigned short const *s1, const ZXString<char> &s2)
{
    ZXString<char> ret;
    ret.AssignWideStr((const wchar_t *)s1);
    ret += s2;
    return ret;
}

static zmaxHelper<int> _FAKE_zmaxHelperInt{};
static zmaxHelper<double> _FAKE_zmaxHelperDouble{};

static zminHelper<int> _FAKE_zminHelperInt{};
static zminHelper<double> _FAKE_zminHelperDouble{};

template <typename T>
struct constructHelper
{
    static void call(T *p)
    {
        new (p) T();
    }
};
static constructHelper<ZFatalSection> _FAKE_constructHelperZFatalSection{};

static void Start_eTracer(unsigned long arg1, unsigned long arg2)
{
    // TODO
    UNIMPLEMENTED;
}

static void __swap_zxstring_char(ZXString<char> &x, ZXString<char> &y)
{
    auto temp = x;
    x = y;
    y = temp;
}

static void __swap(char *a, char *b)
{
    // TODO this normally uses zxstring
    // but since It's only used for party char name strings
    //  we need only 13 bytes
    char buf[64];

    strcpy(buf, a);
    strcpy(a, b);
    strcpy(b, buf);
}

// ZXString char  + unsigned char
template <typename TStr>
struct ExtractCharacterNameHelper
{
    static TStr call(TStr chat)
    {
        TStr ret;
        // auto colon = chat.Find_((T) ':', 0);
        // TODO
        size_t colon = SIZE_MAX;
        if (colon == SIZE_MAX)
        {
            return ret;
        }
        // TODO in theory there's more parsing
        auto left = chat.Left(colon - 1);
        return left.Trim();
    }
};

static _ZtlSecureTearHelper<CLadderOrRope *> _FAKE_ZtlSecureTear_CLadderOrRope__{};
static _ZtlSecureFuseHelper<CLadderOrRope *> _FAKE_ZtlSecureFuse_CLadderOrRope__{};

class CNMManager : TSingleton<CNMManager>
{
public:
    CNMManager()
    {
    }

    ~CNMManager()
    {
    }

    void Init()
    {
    }

    bool Finalize(bool bPatch)
    {
        return true;
    }
};

class CNMCOClientObject : public TSingleton<CNMCOClientObject>
{
public:
    CNMCOClientObject()
    {
    }

    ~CNMCOClientObject()
    {
    }

    bool SetPatchOption(uint32_t gameCode)
    {
        return true; // TODO
    }

    bool SetLocaleAndRegion(int localeId, int regionCod)
    {
        return true; // TODO
    }

    bool Initialize(uint32_t gameCode)
    {
        return true;
    }

    bool LogoutAuth()
    {
        return true;
    }

    bool DetachAuth()
    {
        return true;
    }

    // Return is reply code
    int AttachAuth(char const *pszPassport, int32_t nRegionCode)
    {
        return 0; // kLoginAuth_OK
    }

    const char *GetNexonPassport(char *szPassportOut)
    {
        // TODO
        strcpy(szPassportOut, "NexonPassport");
        return szPassportOut;
    }
};

class CSystemInfo
{
protected:
    std::array<uint8_t, 16> SupportId{};
    std::array<uint8_t, 16> MachineId{};

public:
    CSystemInfo() = default;

    CTOR_DEFAULT(CSystemInfo)

    virtual ~CSystemInfo() = default;

    void Init()
    {
        // TODO
    }

    const unsigned char *GetMachineId()
    {
        return MachineId.data();
    }

    const unsigned char *GetSupportId()
    {
        return SupportId.data();
    }

    uint32_t GetGameRoomClient()
    {
        return 1337; // TODO
    }
};