// FloatNotice.cpp
#include "FloatNotice.hpp"
#include "FloatNotice_regen.ipp"

CFloatNotice::~CFloatNotice()
{
}

void CFloatNotice::_dtor_0()
{
    this->~CFloatNotice();
}

CFloatNotice::CFloatNotice(const CFloatNotice& arg0)
{
    _ctor_1(arg0);
}

void CFloatNotice::_ctor_1(const CFloatNotice& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFloatNotice::CFloatNotice()
{
    m_pFont = G_PCOM.CreateWzFont();
    auto fontOpt = StringPool::GetInstance().GetBSTR(0x5b0);
    auto fontName = StringPool::GetInstance().GetBSTR(0x1a25);
    Z_CHECK_HR(m_pFont->Create(
        fontName,
        14,
        0xffffffff,
        Ztl_variant_t(fontOpt)));
}

void CFloatNotice::_ctor_0()
{
    //return __sub_00167160(this, nullptr);
    new(this) CFloatNotice();
}

void CFloatNotice::CreateFloatNotice(const char* arg0, long arg1, long arg2, long arg3)
{
    __sub_00167AD0(this, nullptr, arg0, arg1, arg2, arg3);
}

void CFloatNotice::DeleteFloatNotice()
{
    m_pLayer = 0;
}

int32_t CFloatNotice::IsNotice()
{
    return m_pLayer != 0;
}

void CFloatNotice::CreateEffEvolRing()
{
    __sub_001672D0(this, nullptr);
}

CFloatNotice& CFloatNotice::operator=(const CFloatNotice& arg0)
{
    return _op_assign_7(this, arg0);
}

CFloatNotice& CFloatNotice::_op_assign_7(CFloatNotice* pThis, const CFloatNotice& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
