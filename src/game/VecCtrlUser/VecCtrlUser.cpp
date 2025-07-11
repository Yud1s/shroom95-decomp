// VecCtrlUser.cpp
#include "VecCtrlUser.hpp"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};
#include "VecCtrlUser_regen.ipp"

CVecCtrlUser::~CVecCtrlUser()
{
}

void CVecCtrlUser::_dtor_0()
{
    //return __sub_005A0840(this, nullptr);
    this->~CVecCtrlUser();
}

CVecCtrlUser::CVecCtrlUser(const CVecCtrlUser& arg0)
{
    _ctor_1(arg0);
}

void CVecCtrlUser::_ctor_1(const CVecCtrlUser& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CVecCtrlUser::CVecCtrlUser()
{
    m_tSentDebugRegister = get_update_time();
}

void CVecCtrlUser::_ctor_0()
{
    //return __sub_005A07D0(this, nullptr);
    new(this) CVecCtrlUser();
}

CVecCtrlUser* __cdecl CVecCtrlUser::CreateInstance()
{
    //return __sub_005A0BB0();
    return new CVecCtrlUser();
}

void CVecCtrlUser::SetForcedFlush()
{
    m_path.SetForcedFlush();
}

void CVecCtrlUser::OnSit(long x, long y)
{
    //__sub_005A0860(this, nullptr, x, y);
    Z_CHECK_HR(this->raw_Move(x, y));
}

void CVecCtrlUser::SetSecondaryStatChangedPoint(unsigned char arg0)
{
    m_path.SetStatChangedPoint(arg0);
}

int32_t CVecCtrlUser::GetImpactValidity()
{
    //return __sub_005A0C30(this, nullptr);
    UNIMPLEMENTED;
}

void CVecCtrlUser::DoCombatStep(double vx, double vy)
{
    ///__sub_0053A7D0(this, nullptr, vx, vy);
    if (m_impactNext.bValid)
    {
        SetMovePathAttribute(26);
        SetImpactNext(vx, vy);
    }
}

int32_t CVecCtrlUser::CollisionDetectFloat(const AbsPos& p1, long& tElapse, int32_t bCalcFloat)
{
    return __sub_005A1BA0(this, nullptr, p1, tElapse, bCalcFloat);
}

void CVecCtrlUser::SetFlyingSkill()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CVecCtrlUser::ResetFlyingSkill()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CVecCtrlUser::IsFlyingSkill() const
{
    return m_bUserFlyingSkill;
}

int32_t CVecCtrlUser::IsFlyingSkillState()
{
    //return __sub_005A0CB0(this, nullptr);
    UNIMPLEMENTED;
}

int32_t CVecCtrlUser::IsUserFlying()
{
    //return __sub_005A0CB0(this, nullptr);
    if (IsPermitMapFlyingSkill())
    {
        return true;
    }
    if (!m_pAttrField || !m_pAttrField->IsUserFlyMap())
    {
        return false;
    }
    return true;
}

int32_t CVecCtrlUser::IsPermitMapFlyingSkill() const
{
    //return __sub_005A0CB0(this, nullptr);
    if (auto attr = m_pAttrField)
    {
        return attr->IsUserFlyMap() && attr->bNeedSkillForFlying;
    }

    return false;
}

long CVecCtrlUser::BeginUpdateActive()
{
    //return __sub_005A0B40(this, nullptr);
    auto updated = CVecCtrl::BeginUpdateActive();
    auto vy = m_apl._ZtlSecureGet_vy();
    if (vy < GetPhysicalSpace2D()->m_constants->dFallSpeed)
        m_nMaxFreeFallTickCount = 0;
    else
        ++m_nMaxFreeFallTickCount;


    return updated;
}

int32_t CVecCtrlUser::WorkUpdateActive(long tElapse)
{
    return __sub_005A1390(this, nullptr, tElapse);
}

void CVecCtrlUser::WorkUpdateActiveLadderOrRope()
{
    __sub_005A1180(this, nullptr);
}

int32_t CVecCtrlUser::IsAbleToClimbLadderOrRope()
{
    return __sub_005A0C30(this, nullptr);
}

void CVecCtrlUser::EndUpdateActive()
{
    //__sub_005A0D20(this, nullptr);
    auto field = get_field();
    auto fieldTy = field->GetFieldType();
    if (m_path.IsTimeForFlush(false, fieldTy == 29))
    {
        auto lastElem = m_path.GetLastElement();
        auto x = tolong(m_ap._ZtlSecureGet_x());
        lastElem.x = x;
        m_ap._ZtlSecurePut_x(x);

        auto y = tolong(m_ap._ZtlSecureGet_y());
        lastElem.y = y;
        m_ap._ZtlSecurePut_y(y);


        auto vx = tolong(m_ap._ZtlSecureGet_vx());
        lastElem.vx = vx;
        m_ap._ZtlSecurePut_vx(vx);

        auto vy = tolong(m_ap._ZtlSecureGet_vy());
        lastElem.vy = vy;
        m_ap._ZtlSecurePut_vy(vy);


        if (auto fh = GetFoothold())
        {
            m_rp.SetFromAbsPos(m_ap, fh);
        }

        auto detect = 0; // TODO DR_CHECK

        COutPacket pkt(Cp::Usermove);
        pkt.Encode4(0); //DR0
        pkt.Encode4(0); //DR1
        pkt.Encode1(field->GetFieldKey());
        pkt.Encode4(0); //DR2
        pkt.Encode4(0); //DR3
        pkt.Encode4(field->GetCrc());

        auto key = 0; //TODO get_rand(dr0, 0)
        pkt.Encode4(key);
        pkt.Encode4(CCrc32::Get<int>(detect, key));
        if (m_path.Flush(pkt, false, nullptr))
            SendPacket(pkt);
    }
}

void CVecCtrlUser::OnAttachedObjectChanged(CStaticFoothold* pfhNew, CLadderOrRope* pLadderOrRopeNew, long tElapse)
{
    __sub_005A0FF0(this, nullptr, pfhNew, pLadderOrRopeNew, tElapse);
}

void CVecCtrlUser::MakeContinuousMovePath(long tElapse)
{
    //__sub_005A08A0(this, nullptr, tElapse);
    auto owner = dynamic_cast<CUser*>(m_pOwner);
    auto f = (owner->GetMoveAction() & 0xFFFFFFFE) != 0x12;

    auto ladderOrRope = f ? GetLadderOrRope() : nullptr;
    auto pfh = f ? m_pfh : nullptr;

    auto act = m_bWingsNow ? 14 : m_pfhFallStart ? 12 : 0;
    m_path.MakeMovePath(
        act,
        pfh,
        m_pfhFallStart,
        ladderOrRope,
        m_ap._ZtlSecureGet_x(),
        m_ap._ZtlSecureGet_y(),
        m_ap._ZtlSecureGet_vx(),
        m_ap._ZtlSecureGet_vy(),
        m_nMoveAction,
        tElapse,
        m_apOffset._ZtlSecureGet_x(),
        m_apOffset._ZtlSecureGet_y()
    );
}

void CVecCtrlUser::MakeNewMovePathElem()
{
    __sub_005A09F0(this, nullptr);
}

CVecCtrlUser& CVecCtrlUser::operator=(const CVecCtrlUser& arg0)
{
    return _op_assign_24(this, arg0);
}

CVecCtrlUser& CVecCtrlUser::_op_assign_24(CVecCtrlUser* pThis, const CVecCtrlUser& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
