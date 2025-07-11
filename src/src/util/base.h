#pragma once

// TODO
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_DEPRECATE_MEMORY
#include <memory.h>

#include <cstring>
#include <cstdlib>
#include <array>
#include <utility>

#include <winsock2.h>
#include <windows.h>
#include <timeapi.h>
#include <oleauto.h>

#include <setupapi.h>
#include <comutil.h>

#include <stdexcept>
#include <string>
#include <cstdint>

#include "macros.h"
#include "asm_helper.h"
#include "crtti.h"
#include "helper.h"

#include "types.h"
#include "tsingleton.h"


#include "ztl/zarray.h"
#include "ztl/zref.h"
#include "ztl/zalloc.h"
#include "ztl/ZSocketBase.h"
#include "ztl/zxstring.h"
#include "ztl/zlist.h"
#include "ztl/zlock.h"
#include "ztl/zmap.h"
#include "ztl/zexception.h"
#include "ztl/ztl.h"
#include "ztl/zheap.h"
#include "ztl/zthread.h"
#include "ztl/zsort.h"
#include "ztl/zcom.h"
#include "ztl/zcomapi.h"
#include "ztl/xcomutil.h"
#include "ztl/secure.h"
#include "ztl/sectype.h"

#include <type_traits>

template<typename T>
static void* get_vtable() {
	T t;
	return *(void**)&t;
}

#define CTOR_DEFAULT(CLASS) public: void _ctor_default() { new(this) CLASS(); }


static void __xsecurity_check_cookie() {
    // TODO noop for now
}


typedef int none;

struct RANGE
{
    // Nested
    // Fields
public:
    long low{};

public:
    long high{};
    // Methods
};




#define ZTL_SEC_GET(ty, name) _ZtlSecureFuseHelper<ty>::call(&this->_ZtlSecureTear_##name[0], this->_ZtlSecureTear_##name##_CS)
#define ZTL_SEC_SET(ty, name, val) this->_ZtlSecureTear_##name##_CS = _ZtlSecureTearHelper<ty>::call(val, &this->_ZtlSecureTear_##name[0])

#define _ZTL_SEC_GETTERI(__ty, __klass, __name) \
    __ty __klass::_ZtlSecureGet_##__name() const  \
    {                                         \
        return ZTL_SEC_GET(__ty, __name);       \
    }

//TODO verify + maybe add explicit fastcall
#define ZTL_SEC_SETTERI(__ty, __klass, __name)          \
    __ty __klass::_ZtlSecurePut_##__name(__ty arg0) \
    {                                                 \
        ZTL_SEC_SET(__ty, __name, arg0);                \
        return arg0;                                  \
    }

#define _ZTL_SEC_GETSETI(__ty, __klass, __name)  \
    __ty __klass::_ZtlSecureGet_##__name() const  \
    {                                         \
        return ZTL_SEC_GET(__ty, __name);       \
    }          \
    __ty __klass::_ZtlSecurePut_##__name(__ty arg0) \
    {                                                 \
        ZTL_SEC_SET(__ty, __name, arg0);                \
        return arg0;                                  \
    }

#define _ZTL_SEC_GETSETI_(__ty, __klass, __name)  \
    __ty _ZtlSecureGet_##__name() const  \
    {                                         \
        return ZTL_SEC_GET(__ty, __name);       \
    }          \
    __ty _ZtlSecurePut_##__name(__ty arg0) \
    {                                                 \
        ZTL_SEC_SET(__ty, __name, arg0);                \
        return arg0;                                  \
    }


static _ZtlSecureFuseHelper<char> _FAKE_ZtlSecureFuseHelperChar;
static _ZtlSecureTearHelper<char> _FAKE_ZtlSecureTearHelperChar;

static _ZtlSecureFuseHelper<unsigned char> _FAKE_ZtlSecureFuseHelperUChar;
static _ZtlSecureTearHelper<unsigned char> _FAKE_ZtlSecureTearHelperUChar;


static _ZtlSecureFuseHelper<short> _FAKE_ZtlSecureFuseHelperShort;
static _ZtlSecureTearHelper<short> _FAKE_ZtlSecureTearHelperShort;

static _ZtlSecureFuseHelper<unsigned short> _FAKE_ZtlSecureFuseHelperUShort;
static _ZtlSecureTearHelper<unsigned short> _FAKE_ZtlSecureTearHelperUShort;

static _ZtlSecureFuseHelper<int> _FAKE_ZtlSecureFuseHelperInt;
static _ZtlSecureTearHelper<int> _FAKE_ZtlSecureTearHelperInt;


static _ZtlSecureFuseHelper<long> _FAKE_ZtlSecureFuseHelperLong;
static _ZtlSecureTearHelper<long> _FAKE_ZtlSecureTearHelperLong;

static _ZtlSecureFuseHelper<unsigned long> _FAKE_ZtlSecureFuseHelperULong;
static _ZtlSecureTearHelper<unsigned long> _FAKE_ZtlSecureTearHelperULong;

static _ZtlSecureFuseHelper<double> _FAKE_ZtlSecureFuseHelperDouble;
static _ZtlSecureTearHelper<double> _FAKE_ZtlSecureTearHelperDouble;

static _ZtlSecureFuseHelper<float> _FAKE_ZtlSecureFuseHelperFloat;
static _ZtlSecureTearHelper<float> _FAKE_ZtlSecureTearHelperFloat;

struct SECRECT
{
    std::array<int32_t, 2> _ZtlSecureTear_left{};
    uint32_t _ZtlSecureTear_left_CS{};
    std::array<int32_t, 2> _ZtlSecureTear_top{};
    uint32_t _ZtlSecureTear_top_CS{};
    std::array<int32_t, 2> _ZtlSecureTear_right{};
    uint32_t _ZtlSecureTear_right_CS{};
    std::array<int32_t, 2> _ZtlSecureTear_bottom{};
    uint32_t _ZtlSecureTear_bottom_CS{};

    _ZTL_SEC_GETSETI_(int32_t, SECRECT, left)
    _ZTL_SEC_GETSETI_(int32_t, SECRECT, top)
    _ZTL_SEC_GETSETI_(int32_t, SECRECT, right)
    _ZTL_SEC_GETSETI_(int32_t, SECRECT, bottom)

    SECRECT()
    {
        _ZtlSecurePut_bottom(0);
        _ZtlSecurePut_top(0);
        _ZtlSecurePut_right(0);
        _ZtlSecurePut_left(0);
    }

    explicit SECRECT(const tagRECT& rc)
    {
        _ZtlSecurePut_bottom(rc.bottom);
        _ZtlSecurePut_top(rc.top);
        _ZtlSecurePut_right(rc.right);
        _ZtlSecurePut_left(rc.left);
    }

    explicit operator tagRECT() const {
        return ToRect(*this);
    }

    void Set(int l, int t, int r, int b)
    {
        _ZtlSecurePut_bottom(b);
        _ZtlSecurePut_top(t);
        _ZtlSecurePut_right(r);
        _ZtlSecurePut_left(l);
    }

    void SetEmpty()
    {
        Set(0, 0, 0, 0);
    }

    static bool __cdecl SetRect(SECRECT& secret, int l, int t, int r, int b) {
        secret._ZtlSecurePut_left(l);
        secret._ZtlSecurePut_top(t);
        secret._ZtlSecurePut_right(r);
        secret._ZtlSecurePut_bottom(b);
        return true;
    }

    static tagRECT __cdecl ToRect(const SECRECT& src) {
        tagRECT dst{};
        dst.left = src._ZtlSecureGet_left();
        dst.top = src._ZtlSecureGet_top();
        dst.right = src._ZtlSecureGet_right();
        dst.bottom = src._ZtlSecureGet_bottom();
        return dst;
    }

    void __cdecl SetRectEmpty() {
        SetRect(*this, 0, 0, 0, 0);
    }
};

struct __POSITION
{ /* Size=0x1 */
};



