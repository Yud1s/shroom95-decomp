#include "zcom.h"
#include "zcomapi.h"

int get_int32(Ztl_variant_t &v, int nDefault)
{
    if (v.vt == VT_I4)
    {
        return v.lVal;
    }

    if(v.vt == VT_EMPTY || v.vt == VT_ERROR)
    {
        return nDefault;
    }

    Ztl_variant_t tmp = v;
    if (ZComAPI::ZComVariantChangeType(&tmp, &v, 0, VT_I4) >= 0)
    {
        return tmp.lVal;
    }

    return nDefault;
}

Ztl_variant_t::Ztl_variant_t(const VARIANT &varSrc) : xvariant_t(varSrc)
{
}

Ztl_variant_t::Ztl_variant_t(const _xbstr_t &bstrSrc) : xvariant_t(bstrSrc)
{
}

Ztl_variant_t::Ztl_variant_t(long lSrc, VARTYPE vtSrc) : xvariant_t(lSrc, vtSrc)
{
}

Ztl_variant_t::Ztl_variant_t(int lSrc, VARTYPE vtSrc) : xvariant_t(static_cast<long>(lSrc), vtSrc)
{
}

Ztl_variant_t::Ztl_variant_t(uint32_t lSrc, VARTYPE vtSrc): xvariant_t(static_cast<long>(lSrc), vtSrc)
{
}

Ztl_variant_t::Ztl_variant_t(const Ztl_variant_t &other) = default;
Ztl_variant_t::Ztl_variant_t() = default;
Ztl_variant_t::~Ztl_variant_t() = default;

IUnknown *Ztl_variant_t::GetUnknown(const bool addRef, const bool tryChangeType) const
{
    IUnknown *pRef = nullptr;
    auto vt = this->vt;
    if (vt == (VT_BYREF | VT_UNKNOWN) || vt == (VT_BYREF | VT_DISPATCH))
    {
        pRef = *this->ppunkVal;
    }
    else if (vt == VT_UNKNOWN || vt == VT_DISPATCH)
    {
        pRef = this->punkVal;
    }
    else if (tryChangeType)
    {
        _xvariant_t tmp;
        tmp.ChangeType(VT_UNKNOWN, this);
        pRef = tmp.punkVal;
    }
    else
    {
        return nullptr;
    }

    if (addRef)
    {
        pRef->AddRef();
    }

    return pRef;
}

Ztl_variant_t::Ztl_variant_t(const _variant_t &other) : xvariant_t(other)
{
}

Ztl_variant_t::Ztl_variant_t(IUnknown* pSrc, bool addRef) : xvariant_t(pSrc, addRef)
{
}

void Ztl_variant_t::_ctor_default()
{
    new (this) Ztl_variant_t();
}

void Ztl_variant_t::_ctor_1(const _variant_t &other)
{
    new (this) Ztl_variant_t(other);
}

void Ztl_variant_t::_ctor_2(long lSrc, VARTYPE vtSrc)
{
    new (this) Ztl_variant_t(lSrc, vtSrc);
}

void Ztl_variant_t::_ctor_3(const _xbstr_t &bstrSrc)
{
    new (this) Ztl_variant_t(bstrSrc);
}

void Ztl_variant_t::_ctor_4(const VARIANT &varSrc)
{
    new (this) Ztl_variant_t(varSrc);
}

Ztl_variant_t::operator _xvariant_t *()
{
    return (xvariant_t *)this;
}

float Ztl_variant_t::GetFloat(float def) const
{
    Ztl_variant_t tmp;
    if (!vt || vt == VT_ERROR || ZComAPI::ZComVariantChangeType(&tmp, this, 0, VT_R4) < 0)
        return def;
    return tmp.fltVal;
}

int32_t Ztl_variant_t::GetInt32(int32_t def ) const
{
    if (vt == VT_I4)
    {
        return lVal;
    }

    if(vt == VT_EMPTY || vt == VT_ERROR)
    {
        return def;
    }

    Ztl_variant_t tmp;
    if (ZComAPI::ZComVariantChangeType(&tmp, this, 0, VT_I4) >= 0)
    {
        return tmp.lVal;
    }

    return def;
}

Ztl_bstr_t Ztl_variant_t::GetStr()
{
    if (vt == 8)
    {
        return {bstrVal};
    }

    Ztl_variant_t dst;
    ZComAPI::ZComVarBstrFromVariant(&dst, this);
    return {dst.bstrVal};
}

Ztl_variant_t::operator const _xvariant_t *() const
{
    return (const xvariant_t *)this;
}

Ztl_bstr_t::Ztl_bstr_t(const _xbstr_t &other) : _xbstr_t(other)
{
}
Ztl_bstr_t::Ztl_bstr_t(const Ztl_bstr_t &other) : _xbstr_t(other)
{
}
Ztl_bstr_t::Ztl_bstr_t(wchar_t const *s) : _xbstr_t(s)
{
}
Ztl_bstr_t::Ztl_bstr_t(char const *s) : _xbstr_t(s)
{
}
Ztl_bstr_t::Ztl_bstr_t() = default;
Ztl_bstr_t::~Ztl_bstr_t() = default;

int32_t Ztl_bstr_t::ToInt()
{
    const wchar_t* p = this->op_ushort_str();
    return _wtoi(p);
}

bool Ztl_bstr_t::operator==(wchar_t const *s) const
{
    return _xbstr_t::operator==(s);
}
Ztl_bstr_t &Ztl_bstr_t::operator=(const Ztl_bstr_t &other) = default;

_xbstr_t &Ztl_bstr_t::operator+=(wchar_t const *s)
{
    return _xbstr_t::operator+=(s);
}

_xbstr_t Ztl_bstr_t::operator+(wchar_t const *s) const
{
    return _xbstr_t::operator+(s);
}

_xbstr_t Ztl_bstr_t::operator+(const Ztl_bstr_t &other) const
{
    return _xbstr_t::operator+(other);
}

bool Ztl_bstr_t::operator==(const unsigned short *s) const
{
    return _xbstr_t::operator==((const wchar_t *)s);
}

Ztl_bstr_t::Ztl_bstr_t(const unsigned short *s) : _xbstr_t((const wchar_t *)s)
{
}

_xbstr_t &Ztl_bstr_t::op_add_assign(const wchar_t *s)
{
    return _xbstr_t::operator+=(s);
}

Ztl_bstr_t &Ztl_bstr_t::op_assign(const Ztl_bstr_t &other)
{
    return operator=(other);
}

bool Ztl_bstr_t::op_eq(const wchar_t *s)
{
    return _xbstr_t::operator==(s);
}

_xbstr_t Ztl_bstr_t::op_add_1(const wchar_t *s)
{
    return _xbstr_t::operator+(s);
}

_xbstr_t Ztl_bstr_t::op_add_0(const Ztl_bstr_t &other)
{
    return _xbstr_t::operator+(other);
}

Ztl_bstr_t::operator const unsigned short *() const
{ // NOLINT(*-explicit-constructor)
    const wchar_t *p = _xbstr_t::operator const wchar_t *();
    return (const unsigned short *)p;
}

Ztl_bstr_t::operator const wchar_t *() const
{
    const wchar_t *p = _xbstr_t::operator const wchar_t *();
    return p;
}

void Ztl_bstr_t::_ctor_4(const _xbstr_t &other)
{
    new (this) Ztl_bstr_t(other);
}

void Ztl_bstr_t::_ctor_2(const wchar_t *s)
{
    new (this) Ztl_bstr_t(s);
}

void Ztl_bstr_t::_ctor_1(const char *s)
{
    new (this) Ztl_bstr_t(s);
}

void Ztl_bstr_t::_ctor_copy(const Ztl_bstr_t &other)
{
    new (this) Ztl_bstr_t(other);
}

void Ztl_bstr_t::_ctor_default()
{
    new (this) Ztl_bstr_t();
}
