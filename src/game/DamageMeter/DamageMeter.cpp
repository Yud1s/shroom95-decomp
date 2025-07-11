// DamageMeter.cpp
#include "DamageMeter.hpp"
#include "DamageMeter_regen.ipp"

CUIDamageBoard::~CUIDamageBoard()
{
}

void CUIDamageBoard::_dtor_0()
{
    return __sub_000F0D50(this, nullptr);
}

CUIDamageBoard::CUIDamageBoard(const CUIDamageBoard& arg0)
{
    _ctor_1(arg0);
}

void CUIDamageBoard::_ctor_1(const CUIDamageBoard& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIDamageBoard::CUIDamageBoard()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CUIDamageBoard::_ctor_0()
{
    return __sub_000F0CB0(this, nullptr);
}

void CUIDamageBoard::OnCreate(void* pData)
{
    __sub_000F0D70(this, nullptr, pData);
}

void CUIDamageBoard::Draw(const tagRECT* arg0)
{
    __sub_000F1290(this, nullptr, arg0);
}

int32_t CUIDamageBoard::OnSetFocus(int32_t bFocus)
{
    return __sub_000F0D40(this, nullptr, bFocus);
}

void CUIDamageBoard::UpdateDamageInfo(long nAverageDamage, long nMaxAverageDamage)
{
    __sub_000F0D80(this, nullptr, nAverageDamage, nMaxAverageDamage);
}

CUIDamageBoard& CUIDamageBoard::operator=(const CUIDamageBoard& arg0)
{
    return _op_assign_7(this, arg0);
}

CUIDamageBoard& CUIDamageBoard::_op_assign_7(CUIDamageBoard* pThis, const CUIDamageBoard& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDamageMeter::~CDamageMeter()
{
    if (m_pClock)
    {
        m_pClock->Destroy();
        m_pClock = nullptr;
    }

    if (m_pDamageBoard)
    {
        m_pDamageBoard->Destroy();
        m_pDamageBoard = nullptr;
    }

    ms_pInstance = nullptr;
}

void CDamageMeter::_dtor_0()
{
    return __sub_000F0E10(this, nullptr);
}

CDamageMeter::CDamageMeter(const CDamageMeter& arg0)
{
    _ctor_1(arg0);
}

void CDamageMeter::_ctor_1(const CDamageMeter& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDamageMeter::CDamageMeter()
{
    m_nDuration = 300;
}

void CDamageMeter::_ctor_0()
{
    return __sub_000F0DD0(this, nullptr);
}

void CDamageMeter::LoadDamageInfo()
{
    __sub_000F1A30(this, nullptr);
}

void CDamageMeter::AddDamageInfo(long nDamage)
{
    __sub_000F0DA0(this, nullptr, nDamage);
}

void CDamageMeter::Update()
{
    __sub_000F19C0(this, nullptr);
}

void CDamageMeter::SetTimer(long nDuration)
{
    __sub_000F0F20(this, nullptr, nDuration);
}

void CDamageMeter::SetActivate(int32_t arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CDamageMeter::IsActivate()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CDamageMeter::GetAverageDamage()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CDamageMeter::GetMaxAverageDamage()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CDamageMeter::KillTimer()
{
    __sub_000F1980(this, nullptr);
}

void CDamageMeter::SaveDamageInfo()
{
    __sub_000F10D0(this, nullptr);
}

CDamageMeter& CDamageMeter::operator=(const CDamageMeter& arg0)
{
    return _op_assign_13(this, arg0);
}

CDamageMeter& CDamageMeter::_op_assign_13(CDamageMeter* pThis, const CDamageMeter& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
