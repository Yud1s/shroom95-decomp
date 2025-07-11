// TextLineBreaker.hpp
#pragma once

#include "util/base.h"
#include "pcom/wz.h"


// Level: 1 0x3e2f
class CTextLineBreaker;

class CTextLineBreaker : public ZRefCounted {
// Nested
// Fields
private:
    long m_nWidth{};
// Methods
public:
    virtual  ~CTextLineBreaker();

public:
    void _dtor_0();

public:
    CTextLineBreaker(const CTextLineBreaker &arg0);

public:
    void _ctor_1(const CTextLineBreaker &arg0);

public:
    CTextLineBreaker(long arg0);

public:
    void _ctor_0(long arg0);

public:
    int32_t LineBreakText(ZXString<char> sText, ZArray<ZXString<char> > &aSTR, _x_com_ptr<IWzFont> pFont);

public:
    CTextLineBreaker &operator=(const CTextLineBreaker &arg0);

public:
    static CTextLineBreaker &_op_assign_4(CTextLineBreaker *pThis, const CTextLineBreaker &arg0);
};

STATIC_ASSERT_SIZE(CTextLineBreaker, 16);


