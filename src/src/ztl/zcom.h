#ifndef ZCOM_H
#define ZCOM_H


#include "comdef.h"
#include "xcomutil.h"
#include "zexception.h"

class Ztl_bstr_t;
class Ztl_variant_t : public xvariant_t
{
public:
    explicit Ztl_variant_t(const VARIANT& varSrc);
    Ztl_variant_t(const _xbstr_t& bstrSrc);
    Ztl_variant_t(long lSrc, VARTYPE vtSrc = VT_I4);
    Ztl_variant_t(int lSrc, VARTYPE vtSrc = VT_I4);
    Ztl_variant_t(uint32_t lSrc, VARTYPE vtSrc = VT_UI4);
    Ztl_variant_t(const Ztl_variant_t& other);
    Ztl_variant_t(const variant_t& other);
    explicit Ztl_variant_t(IUnknown* pSrc, bool addRef = true);
    Ztl_variant_t();

    ~Ztl_variant_t();
    explicit operator const xvariant_t*() const;
    explicit operator xvariant_t*();


    float GetFloat(float def = 0.) const;
    int32_t GetInt32(int32_t def = 0) const;
    Ztl_bstr_t GetStr();


    [[nodiscard]] IUnknown* GetUnknown(bool addRef = false, bool tryChangeType = false) const;
    void _ctor_default();
    void _ctor_1(const variant_t& other);
    void _ctor_2(long lSrc, VARTYPE vtSrc);
    void _ctor_3(const _xbstr_t& bstrSrc);
    void _ctor_4(const VARIANT& varSrc);
};

int get_int32(Ztl_variant_t& v, int nDefault);


class Ztl_bstr_t : public _xbstr_t
{
public:
    Ztl_bstr_t(const _xbstr_t& other);

    Ztl_bstr_t(const Ztl_bstr_t& other);

    Ztl_bstr_t(wchar_t const* s);

    explicit Ztl_bstr_t(unsigned short const* s);

    explicit Ztl_bstr_t(char const* s);

    Ztl_bstr_t();

    ~Ztl_bstr_t();

    int32_t ToInt();

    bool operator==(wchar_t const* s) const;

    bool operator==(unsigned short const* s) const;

    Ztl_bstr_t& operator=(const Ztl_bstr_t& other);

    _xbstr_t& operator+=(wchar_t const* s);

    _xbstr_t operator+(wchar_t const* s) const;

    _xbstr_t operator+(const Ztl_bstr_t& other) const;

    operator const unsigned short*() const; // NOLINT(*-explicit-constructor)
    operator const wchar_t*() const; // NOLINT(*-explicit-constructor)

    void _ctor_default();

    void _ctor_copy(const Ztl_bstr_t& other);

    void _ctor_1(const char* s);

    void _ctor_2(const wchar_t* s);

    void _ctor_4(const _xbstr_t& other);

    _xbstr_t& op_add_assign(const wchar_t* s);

    Ztl_bstr_t& op_assign(const Ztl_bstr_t& other);

    bool op_eq(const wchar_t* s);

    _xbstr_t op_add_1(const wchar_t* s);

    _xbstr_t op_add_0(const Ztl_bstr_t& other);
};


#define Z_CHECK_HR(hr) if (FAILED(hr)) { throw ZException(hr); }

#endif //ZCOM_H
