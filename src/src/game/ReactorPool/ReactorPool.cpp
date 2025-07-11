// ReactorPool.cpp
#include "ReactorPool.hpp"

static ZRef<REACTOR> FAKE_REF_REACTOR_{};
static ZRef<CReactorTemplate::STATEINFO> FAKE_REF_CReactorTemplate_STATEINFO_{};

#include "ReactorPool_regen.ipp"

REACTOR::~REACTOR()
{
}

void REACTOR::_dtor_0()
{
    return __sub_002CE310(this, nullptr);
}

REACTOR::REACTOR(const REACTOR& arg0)
{
    _ctor_1(arg0);
}

void REACTOR::_ctor_1(const REACTOR& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

REACTOR::REACTOR()
{
}

void REACTOR::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

REACTOR& REACTOR::operator=(const REACTOR& arg0)
{
    return _op_assign_3(this, arg0);
}

REACTOR& REACTOR::_op_assign_3(REACTOR* pThis, const REACTOR& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CReactorPool::~CReactorPool()
{
}

void CReactorPool::_dtor_0()
{
    return __sub_005D3B90(this, nullptr);
}

CReactorPool::CReactorPool(const CReactorPool& arg0)
{
    _ctor_1(arg0);
}

void CReactorPool::_ctor_1(const CReactorPool& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CReactorPool::CReactorPool()
{
}

void CReactorPool::_ctor_0()
{
    return __sub_005D3B30(this, nullptr);
}

void CReactorPool::Update(long tCur)
{
    __sub_002CEFC0(this, nullptr, tCur);
}

void CReactorPool::LoadReactorLayer(ZRef<REACTOR> p)
{
    __sub_002CE630(this, nullptr, CreateNakedParam(p));
}

void CReactorPool::OnPacket(long nType, CInPacket& iPacket)
{
    //__sub_002CF9B0(this, nullptr, nType, iPacket);
    switch (nType)
    {
    case 334:
        OnReactorChangeState(iPacket);
        break;
    case 335:
        OnReactorMove(iPacket);
        break;
    case 336:
        OnReactorEnterField(iPacket);
        break;
    case 337:
        OnReactorLeaveField(iPacket);
        break;
    default:
        break;
    }
}

void CReactorPool::OnReactorChangeState(CInPacket& iPacket)
{
    __sub_002CCD60(this, nullptr, iPacket);
}

void CReactorPool::OnReactorEnterField(CInPacket& iPacket)
{
    __sub_002CF490(this, nullptr, iPacket);
}

void CReactorPool::OnReactorLeaveField(CInPacket& iPacket)
{
    __sub_002CCEA0(this, nullptr, iPacket);
}

void CReactorPool::OnReactorMove(CInPacket& iPacket)
{
    __sub_002CD110(this, nullptr, iPacket);
}

int32_t CReactorPool::FindHitReactor()
{
    return __sub_002CD4E0(this, nullptr);
}

void CReactorPool::FindSkillReactor(long nSkillID)
{
    __sub_002CDAB0(this, nullptr, nSkillID);
}

void CReactorPool::FindTouchReactorAroundLocalUser(ZMap<long, long, long>& m_reactorOnLocalUser)
{
    __sub_002CDED0(this, nullptr, m_reactorOnLocalUser);
}

long CReactorPool::GetState(ZXString<char> arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CReactorPool::GetAniState(ZXString<char> arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CReactorPool::GetStates(ZXString<char> sName, long* pState, long* pAniState)
{
    return __sub_002CDDB0(this, nullptr, CreateNakedParam(sName), pState, pAniState);
}

void CReactorPool::AddReactor(ZRef<REACTOR> p)
{
    __sub_002CF250(this, nullptr, CreateNakedParam(p));
}

void CReactorPool::RemoveReactor(ZRef<REACTOR> p)
{
    __sub_002CCCA0(this, nullptr, CreateNakedParam(p));
}

CReactorPool& CReactorPool::operator=(const CReactorPool& arg0)
{
    return _op_assign_18(this, arg0);
}

CReactorPool& CReactorPool::_op_assign_18(CReactorPool* pThis, const CReactorPool& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long __cdecl get_hittype_priority_level(unsigned long dwOption, long nType)
{
    int v2; // eax
    int result; // eax

    v2 = dwOption & 1;
    if ((dwOption & 2) != 0)
    {
        if (nType)
        {
            if (nType == 1)
            {
                return -(v2 != 0);
            }
            else if (nType == 2)
            {
                return (v2 != 0) - 1;
            }
            else
            {
                return -1;
            }
        }
        else
        {
            return 1;
        }
    }
    else
    {
        switch (nType)
        {
        case 0:
            result = 2;
            break;
        case 1:
            result = 2 * (v2 == 0) - 1;
            break;
        case 2:
            result = 2 * (v2 != 0) - 1;
            break;
        case 3:
            return -(v2 != 0);
        case 4:
            return (v2 != 0) - 1;
        default:
            return -1;
        }
    }
    return result;
}
