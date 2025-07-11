// VecCtrlSummoned.cpp
#include "VecCtrlSummoned.hpp"

#include <skills_ids.h>

#include "VecCtrlSummoned_regen.ipp"

CVecCtrlSummoned::~CVecCtrlSummoned()
{
}

void CVecCtrlSummoned::_dtor_0()
{
    this->~CVecCtrlSummoned();
}

CVecCtrlSummoned::CVecCtrlSummoned(const CVecCtrlSummoned& arg0)
{
    _ctor_1(arg0);
}

void CVecCtrlSummoned::_ctor_1(const CVecCtrlSummoned& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CVecCtrlSummoned::CVecCtrlSummoned(): CVecCtrl()
{
}

void CVecCtrlSummoned::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CVecCtrlSummoned::Init(IVecCtrlOwner* pOwner, unsigned long dwSummonedID, long nSkillID, long nMoveAbility)
{
    //__sub_0059F660(this, nullptr, pOwner, dwSummonedID, nSkillID, nMoveAbility);
    CVecCtrl::Init(pOwner);
    this->m_dwSummonedID = dwSummonedID;
    this->m_nSkillID = nSkillID;
    this->m_nMoveAbility = nMoveAbility;
    this->m_nFollowingState = 0;
    this->m_nCheckCount = 0;
    this->m_nDistanceX_for_Walk = 0;
    if (nMoveAbility == 1)
    {
        if (nSkillID == TB1_LIGHTNING
            || nSkillID == DW1_SOUL
            || nSkillID == BW1_FLAME
            || nSkillID == WA1_STORM
            || nSkillID == NW1_DARKNESS)
        {
            this->m_nDistanceX_for_Walk = 42;
        }
        else
        {
            this->m_nDistanceX_for_Walk = 70;
        }
    }
    this->m_rcOut.left = -300;
    this->m_rcOut.top = -200;
    this->m_rcOut.right = 300;
    this->m_rcOut.bottom = 200;
}

void CVecCtrlSummoned::SetActive(int32_t bActive, long x, long y, long vx, long vy, long nMoveAction,
                                 CStaticFoothold* pfh)
{
    CVecCtrl::SetActive(bActive, x, y, vx, vy, nMoveAction, pfh);
    this->m_ptReference.x = x;
    this->m_ptReference.y = y;
    this->m_pTarget = nullptr;
    this->m_tUpdateActiveAccumulated = 0;
    m_moveCtx = {};
}

int32_t CVecCtrlSummoned::CollisionDetectFloat(const AbsPos& p1, long& tElapse, int32_t bCalcFloat)
{
    return __sub_0059F890(this, nullptr, p1, tElapse, bCalcFloat);
}

int32_t CVecCtrlSummoned::CollisionDetectWalk(const RelPos& d, long& arg1, int32_t arg2)
{
    return __sub_0059FEE0(this, nullptr, d, arg1, arg2);
}

CVecCtrlSummoned* __cdecl CVecCtrlSummoned::CreateInstance()
{
    return new CVecCtrlSummoned();
}

void CVecCtrlSummoned::ChaseTarget(int32_t bChase, IVecCtrlOwner* pTarget)
{
    //__sub_0059F780(this, nullptr, bChase, pTarget);
    if (bChase)
    {
        if (this->m_pTarget != pTarget)
        {
            this->m_pTarget = pTarget;
            this->m_moveCtx.wc = {};
        }
    }
    else
    {
        this->m_pTarget = nullptr;
    }
}

IVecCtrlOwner* CVecCtrlSummoned::GetChaseTarget()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CVecCtrlSummoned::SetRectOut(long arg0, long arg1, long arg2, long arg3)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CVecCtrlSummoned::WorkUpdateActive(long pTarget)
{
    return __sub_005A0090(this, nullptr, pTarget);
}

void CVecCtrlSummoned::EndUpdateActive()
{
    //__sub_005A0700(this, nullptr);
    m_nMoveAbility = this->m_nMoveAbility;
    auto v3 = m_nMoveAbility == 4 || m_nMoveAbility == 5;
    if (m_path.IsTimeForFlush(v3, false))
    {
        COutPacket pkt(Cp::Summonedmove);
        pkt.Encode4(m_dwSummonedID);
        if (!this->m_path.Flush(pkt, 0, nullptr))
            SendPacket(pkt);
    }
}

void CVecCtrlSummoned::CtrlUpdateActiveFly()
{
    __sub_0059FA50(this, nullptr);
}

void CVecCtrlSummoned::CtrlUpdateActiveWalkFree()
{
    //__sub_0059FE80(this, nullptr);
    if (this->m_moveCtx.wc.ptTarget.x <= 0)
    {
        this->m_moveCtx.wc.ptTarget.x = _D_G_RAND.Random() % 0x14 + 20;
        auto v2 = _D_G_RAND.Random() % 3 - 1;
        this->m_moveCtx.wc.ptTarget.y = v2;
        CVecCtrl::SetInput(v2, 0);
    }
    --this->m_moveCtx.wc.ptTarget.x;
}

void CVecCtrlSummoned::ClearMoveContext()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CVecCtrlSummoned& CVecCtrlSummoned::operator=(const CVecCtrlSummoned& arg0)
{
    return _op_assign_16(this, arg0);
}

CVecCtrlSummoned& CVecCtrlSummoned::_op_assign_16(CVecCtrlSummoned* pThis, const CVecCtrlSummoned& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
