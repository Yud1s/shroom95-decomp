// VecCtrlMob.cpp
#include "VecCtrlMob.hpp"
#include "VecCtrlMob_regen.ipp"

CMoveRandMan::~CMoveRandMan() = default;

void CMoveRandMan::_dtor_0()
{
    this->~CMoveRandMan();
}

CMoveRandMan::CMoveRandMan() = default;

void CMoveRandMan::_ctor_1()
{
    new(this) CMoveRandMan();
}

uint32_t CMoveRandMan::GetRndValue(long base, int32_t mod)
{
    auto r = m_randMove.Random();
    m_usRandCnt++;
    return r % mod + base;
}

uint32_t CMoveRandMan::GetRndValue()
{
    auto r = m_randMove.Random();
    m_usRandCnt++;
    return r;
}

uint32_t CMoveRandMan::GetLastRnd() const
{
    return m_nLastRnd;
}

uint32_t CMoveRandMan::GetNoRangeFilteredLastRnd() const
{
    return m_nLastRnd;
}

int32_t CMoveRandMan::IsGenerated() const
{
    return m_bGenerated;
}

int32_t CMoveRandMan::IsPassed() const
{
    return m_bPassed;
}

void CMoveRandMan::SetGenerated()
{
    m_bGenerated = true;
}

void CMoveRandMan::Init()
{
    //__sub_00596C20(this, nullptr);
    m_nLastRnd = 0;
    const auto s1 = _D_G_RAND.Random() | 0x100000;
    const auto s2 = _D_G_RAND.Random() | 0x1000;
    const auto s3 = _D_G_RAND.Random() | 0x10;
    SetSeed(s1, s2, s3);
}

void CMoveRandMan::SetSeed(uint32_t s1, uint32_t s2, uint32_t s3)
{
    //__sub_00596CB0(this, nullptr, s1, s2, s3);
    m_randMove.SetSeed(s1, s2, s3);
    m_bGenerated = false;
    m_bPassed = false;
}

void CMoveRandMan::GetSeed(uint32_t& arg0, uint32_t& arg1, uint32_t& arg2)
{
    m_randMove.GetSeed(arg0, arg1, arg2);
}

uint16_t CMoveRandMan::GetRandCnt() const
{
    return m_usRandCnt;
}

CVecCtrlMob::~CVecCtrlMob()
{
}

void CVecCtrlMob::_dtor_0()
{
    this->~CVecCtrlMob();
}

CVecCtrlMob::CVecCtrlMob(const CVecCtrlMob& arg0)
    : m_moveCtx(arg0.m_moveCtx)
{
    _ctor_1(arg0);
}

void CVecCtrlMob::_ctor_1(const CVecCtrlMob& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CVecCtrlMob::CVecCtrlMob()
{
    m_moveRndMan.Init();
    m_moveRndMan_Mass.Init();
    m_moveRndMan_Direction.Init();
    m_moveRndManForFH.Init();
    m_moveRndManForPOS.Init();
    m_moveRndManForTargetY.Init();
    m_moveRndManForPOS_X_A.Init();
    m_moveRndManForPOS_Y_A.Init();

    m_bDoubleGuardCorrect = 1;
    m_bRightAngleJump = true;
}

void CVecCtrlMob::_ctor_0()
{
    //return __sub_00597C60(this, nullptr);
    new(this) CVecCtrlMob();
}

void CVecCtrlMob::Init(IVecCtrlOwner* pOwner, long nMoveAbility, long nHomeMass)
{
    //__sub_00596A00(this, nullptr, pOwner, nMoveAbility, nHomeMass);
    CVecCtrl::Init(pOwner);
    m_nMoveAbility = nMoveAbility;
    m_nHomeMass = nHomeMass;
}

void CVecCtrlMob::SetActive(int32_t bActive, long x, long y, long vx, long vy, long nMoveAction, CStaticFoothold* pfh)
{
    //__sub_005987F0(this, nullptr, pMob, pLR, arg2, arg3, arg4, arg5, arg6);
    CVecCtrl::SetActive(bActive, x, y, vx, vy, nMoveAction, pfh);
    m_pTarget = nullptr;
    m_bForcedChase = false;
    m_tChaseDuration = 0;
    m_bChasing = false;


    const auto mob = dynamic_cast<CMob*>(m_pOwner);
    if (mob)
    {
        //TODO mob->ChaseTarget()
        mob->m_bChasing = m_bChasing.GetData();
    }

    this->m_tUpdateActiveAccumulated = 0;
    this->m_bJumpNext = 0;
    this->m_bOnRushMove = 0;
    this->m_nRushMoveDistance = 0;
    this->m_tRushMoveDuration = 0;

    m_moveCtx.ClearMoveContext();

    if (bActive && mob->GetTemplate()->nEscortType == 1)
    {
        if (IsAbleToClimbLadderOrRope())
        {
            if (const auto lr = GetPhysicalSpace2D()->GetLadderOrRope(x, y, x, y))
            {
                m_ap._ZtlSecurePut_vy(0.);
                m_ap._ZtlSecurePut_vx(0.);
                m_ap._ZtlSecurePut_x(lr->x);
                OnAttachedObjectChanged(nullptr, lr, 0);
            }
            else if (const auto lrB = GetPhysicalSpace2D()->GetLadderOrRope(x, y - 20, x, y))
            {
                m_ap._ZtlSecurePut_vy(0.);
                m_ap._ZtlSecurePut_vx(0.);
                m_ap._ZtlSecurePut_x(lrB->x);
                m_ap._ZtlSecurePut_y(std::min<double>(lrB->y2, m_ap._ZtlSecureGet_y()));
                OnAttachedObjectChanged(nullptr, lrB, 0);
            }
            else if (auto lrC = GetPhysicalSpace2D()->GetLadderOrRope(x, y, x, y + 10))
            {
                if (y <= lrC->y1 && lrC->y1 <= y + 10)
                {
                    m_ap._ZtlSecurePut_vx(0.);
                    m_ap._ZtlSecurePut_vy(0.);
                    m_ap._ZtlSecurePut_x(lrC->x);
                    m_ap._ZtlSecurePut_y(lrC->y1);
                    OnAttachedObjectChanged(nullptr, lrC, 0);
                }
            }
        }
    }
}

void CVecCtrlMob::SetMoveAbility(long arg0)
{
    m_nMoveAbility = arg0;
}

void CVecCtrlMob::UpdateActiveInterrupted(long nXDiff, long bOnce, long fDrag, long pAttrShoe, long tSlice, long rpl,
                                          long dPosDiff, long apl)
{
    __sub_00598C80(this, nullptr, nXDiff, bOnce, fDrag, pAttrShoe, tSlice, rpl, dPosDiff, apl);
}

void CVecCtrlMob::ChaseTarget(int32_t bChase, IVecCtrlOwner* pTarget, int32_t bForced)
{
    //__sub_0059B660(this, nullptr, bChase, pTarget, bForced);
    m_bChasing = bChase;
    ChaseTargetImp(bChase, pTarget, bForced);
}

void CVecCtrlMob::ChaseTargetImp(int32_t bChase, IVecCtrlOwner* pTarget, int32_t bForced)
{
    //__sub_00598AD0(this, nullptr, bChase, pTarget, bForced);
    auto chasing = m_bChasing.GetData();
    m_bChasingHack = chasing != bChase;
    if (bChase)
    {
        if (!m_bForcedChase.GetData())
        {
            auto rnd = m_moveRndMan.GetRndValue();
            m_tChaseDuration = rnd + 60000 * (3 - rnd / 60000);
            if (m_pTarget != pTarget)
                ClearMoveContext();
            m_pTarget = pTarget;
            m_bForcedChase = bForced;
            if (!m_aEscorDest.IsEmpty() && !m_bNeedReturnToStartTarget)
            {
                m_ptStartTargetPosition.x = m_ap._ZtlSecureGet_x();
                m_ptStartTargetPosition.y = m_ap._ZtlSecureGet_y();
                m_bNeedReturnToStartTarget = true;
                m_nStartTargetPositionZmass = m_lZMass;
            }
        }
    }
    else
    {
        m_pTarget= nullptr;
        m_bForcedChase = 0;
        m_tChaseDuration = 0;
        dynamic_cast<CMob*>(m_pOwner)->m_bChasing = 0;
    }

    m_bChasing = dynamic_cast<CMob*>(m_pOwner)->m_bChasing.GetData();
}

int32_t CVecCtrlMob::IsChasing()
{
    return m_bChasing;
}

int32_t CVecCtrlMob::IsForcedChase()
{
    return m_bForcedChase;
}

IVecCtrlOwner* CVecCtrlMob::GetChaseTarget()
{
    return m_pTarget;
}

long CVecCtrlMob::GetMoveAbility()
{
    return m_nMoveAbility;
}

int32_t CVecCtrlMob::IsCheatMobMoveRand()
{
    //return __sub_0059CEB0(this, nullptr);
    auto isCheat = IsCheatMobMoveRandImp();
    long hacked = m_nHackedCode;
    m_nHackedCode = CCrc32::Get<long>(hacked, 0x5F);
    return isCheat;
}

int32_t CVecCtrlMob::IsCheatMobMoveRandImp()
{
    return __sub_0059A8C0(this, nullptr);
}

TSecType<long> CVecCtrlMob::GetHackedCode()
{
    return TSecType(m_nHackedCode.GetData());
}

long CVecCtrlMob::GetTargetX()
{
    return this->m_nCheckTargetX;
}

long CVecCtrlMob::GetTargetY()
{
    return this->m_nCheckTargetY;
}

void CVecCtrlMob::RiseByToss(double vy)
{
    //__sub_0059B400(this, nullptr, vy);
    if (m_pfh)
    {
        m_pfhLandingNext = m_pfh;
    }
    else
    {
        auto x = m_ap._ZtlSecureGet_x();
        auto y = m_ap._ZtlSecureGet_y();
        m_pfhLandingNext = GetPhysicalSpace2D()->GetFootholdUnderneath(x, y, 0, 2147483647, 2);
    }

    if (m_pfhLandingNext)
    {
        DetachFromFoothold();
        m_ap._ZtlSecurePut_vy(vy);
        m_ap._ZtlSecurePut_vx(0.);
        m_bJumpNext = false;
        SetMovePathAttribute(16);
    }
}

void CVecCtrlMob::ClearTemporaryValues()
{
    //__sub_00596A30(this, nullptr);
    m_bOnRushMove = false;
    m_nRushMoveDistance = 0;
    m_tRushMoveDuration = 0;
}

long CVecCtrlMob::GetChaseDuration()
{
    //return __sub_00597620(this, nullptr);
    return m_tChaseDuration;
}

void CVecCtrlMob::SaveFloatStateBeforeCollision()
{
    //__sub_0059A380(this, nullptr);
    m_apBeforeCollision = m_ap;
    m_ptBeforeCollision = m_moveCtx.fc.ptTarget.op_tagpoint();
    //TODO(game) makes no sense
    m_bSimpleCollisionHacked = m_ap._ZtlSecureGet_x() == m_apBeforeCollision._ZtlSecureGet_x() && m_ap._ZtlSecureGet_y() == m_apBeforeCollision._ZtlSecureGet_y();


    m_bFloatHackCheckNeed = true;
}

void CVecCtrlMob::SaveFloatStateAfterCollision()
{
    //__sub_0059A450(this, nullptr);
    m_ptAfterCollision = m_moveCtx.fc.ptTarget.op_tagpoint();
    if (!m_bFloatHackCheckNeed)
        m_bDoubleGuardCorrect = false;
}

int32_t CVecCtrlMob::CollisionDetectWalk(const RelPos& d, long& r, int32_t rgC)
{
    return __sub_0059C650(this, nullptr, d, r, rgC);
}

int32_t CVecCtrlMob::CollisionDetectFloat(const AbsPos& r, long& rgL, int32_t l)
{
    return __sub_0059A4A0(this, nullptr, r, rgL, l);
}

CVecCtrlMob*__cdecl CVecCtrlMob::CreateInstance()
{
    //return __sub_00598770();
    return new CVecCtrlMob();
}

void CVecCtrlMob::SetStatChangedPoint(unsigned char arg0)
{
    m_path.SetStatChangedPoint(arg0);
}

void CVecCtrlMob::SetMoveRandManSeed(uint32_t s1, uint32_t s2, uint32_t s3)
{
    //__sub_00597160(this, nullptr, s1, s2, s3);
    if (m_nMoveAbility == 1)
    {
        m_moveRndMan_Direction.SetSeed(s1, s2, s3);
    }
    else if (m_nMoveAbility == 3)
    {
        m_moveRndMan.SetSeed(s1, s2, s3);
    }
}

long CVecCtrlMob::BeginUpdateActive()
{
    CVecCtrl::BeginUpdateActive();
    return 90;
}

int32_t CVecCtrlMob::WorkUpdateActive(long arg0)
{
    return __sub_0059D450(this, nullptr, arg0);
    /*this->m_ptLastPoint.x = m_ap._ZtlSecureGet_x();
    this->m_ptLastPoint.y = m_ap._ZtlSecureGet_y();
    if (!m_aEscorDest.IsEmpty()
        && (!this->m_pfh
            || GetLadderOrRope()
            || this->m_bJumpNext
            || this->m_bMoveMobOnLadderOrRopeX))
    {
        m_bChasing = false;
        ChaseTargetImp(m_bChasing, 0, 0);
    }
    if (this->m_bOnRushMove)
    {
        if (this->m_nRushMoveDistance)
        {
            auto v6 = m_path.GetStartPositionX();
            if (std::abs(v6 - m_ap._ZtlSecureGet_x()) > m_nRushMoveDistance)
            {
                this->m_nRushMoveDistance = 0;
                m_rp._ZtlSecurePut_v(0.);
                m_ap.SetFromRelPos(m_rp, m_pfh);
                SetMovePathAttribute(36);
            }
        }
        m_tRushMoveDuration = this->m_tRushMoveDuration;
        if (m_tRushMoveDuration && this->m_path.GetGatherDuration() > m_tRushMoveDuration)
        {
            this->m_tRushMoveDuration = 0;
            this->m_bOnRushMove = 0;
        }
    }
    auto mob = dynamic_cast<CMob*>(m_pOwner);
    if (mob && mob->IsImmovable())
    {
        CVecCtrl::SetInput(0, 0);
    }
    else if (this->m_bEscortStop || this->m_nStopDuration && this->m_nStopDuration > get_update_time())
    {
        CVecCtrl::SetInput(0, _ZtlSecureGet_m_nInputY());
    }
    else if (this->m_bOnRushMove)
    {
        if (m_ap._ZtlSecureGet_vx() >= 0.0)
        {
            CVecCtrl::SetInput(m_ap._ZtlSecureGet_vx() > 0.0, 0);
        }
        else
        {
            CVecCtrl::SetInput(-1, 0);
        }
    }
    else
    {
        switch (this->m_nMoveAbility)
        {
        case 0:
            CVecCtrlMob::CtrlUpdateActiveStop();
            break;
        case 1:
            CVecCtrlMob::CtrlUpdateActiveMove();
            break;
        case 3:
            CVecCtrlMob::CtrlUpdateActiveJump();
            break;
        case 4:
            CVecCtrlMob::FlyCtrlGuardingBefore();
            CVecCtrlMob::CtrlUpdateActiveFly();
            break;
        case 6:
            CVecCtrlMob::CtrlUpdateActiveEscort();
            break;
        default:
            break;
        }
    }
    if (this->m_pTarget)
    {
        if (!this->m_bForcedChase)
        {
            auto v12 = this->m_tChaseDuration.GetData() - arg0;
            m_tChaseDuration = v12;
            if (v12 < 0)
            {
                m_bChasing = false;
                ChaseTargetImp(m_bChasing, nullptr, 0);
            }
        }
    }
    if (this->m_nMoveAbility == 6
        && GetLadderOrRope()
        && !this->m_bEscortStop
        && !this->m_bNeedReturnToStartTarget)
    {
        CVecCtrlMob::WorkUpdateActiveLadderOrRope();
        CVecCtrlMob::CollisionDetectEscortDest();
        if (m_aEscorDest[this->m_nCurrentDestIndex].nAttr == 1)
            return 1;
        if (this->m_Old_Dest.dp.y >= m_aEscorDest[this->m_nCurrentDestIndex].dp.y)
            return 1;
        auto v15 = m_ap._ZtlSecureGet_x();
        auto v16 = &this->m_aEscorDest[this->m_nCurrentDestIndex];
        if (fabs(v15 - v16->dp.x) < 90.0)
            return 1;
        if (v16->dp.x > v15)
            CVecCtrl::SetInput(1, 0);
        auto v17 = &this->m_aEscorDest[this->m_nCurrentDestIndex];
        if (v17->dp.x < v15)
            CVecCtrl::SetInput(-1, 0);
        SetJumpNext(0);
    }
    auto result = CVecCtrl::WorkUpdateActive(arg0);
    if (result && this->m_nMoveAbility == 6)
    {
        if (this->m_bEscortStop)
        {
            result = 1;
            this->m_bPassedUpdateCtrl = 1;
            return result;
        }
        m_nStopDuration = this->m_nStopDuration;
        if (m_nStopDuration)
        {
            if (m_nStopDuration <= get_update_time())
            {
                mob->SendEscortStopEndRequest();
                this->m_nStopDuration = 0;
            }
            result = 1;
            this->m_bPassedUpdateCtrl = 1;
            return result;
        }
        if (!this->m_bMoveMobOnLadderOrRopeX)
            CVecCtrlMob::MoveMobOnLadderOrRopeX();
        if (this->m_pfh)
            goto LABEL_105;
        if (m_ap._ZtlSecureGet_vy() > 0.0
            && !_ZtlSecureGet_m_pLadderOrRope()
            && _ZtlSecureGet_m_nInputY() < 0)
        {
            if (IsAbleToClimbLadderOrRope())
            {
                auto d = m_ap._ZtlSecureGet_x();
                auto v58 = m_apl._ZtlSecureGet_x();
                auto phys = TSingleton<CWvsPhysicalSpace2D>::ms_pInstance;
                auto y = m_ap._ZtlSecureGet_y();
                auto t_4a = tolong(y);
                auto t = tolong(d);
                auto v24 = this->m_apl._ZtlSecureGet_y();
                auto d_4 = tolong(v24);
                auto v25 = tolong(v58);
                auto LadderOrRope = phys->GetLadderOrRope(v25, d_4, t, t_4a);
                if (LadderOrRope)
                {
                    auto v27 = m_ap._ZtlSecurePut_vy(0.0);
                    m_ap._ZtlSecurePut_vx(v27);
                    m_ap._ZtlSecurePut_x(LadderOrRope->x);
                    if (this->m_bNeedReturnToStartTarget)
                        CollisionDetectEscortBeforeTargetPosition();
                    else
                        CollisionDetectEscortDest();
                    if (this->m_bMoveMobBeforeEscortCurDest)
                    {
                        MoveMobBeforeEscortCurDest();
                        this->m_bMoveMobBeforeEscortCurDest = 0;
                        this->m_nCurrentDestIndexForce = 0;
                    }
                    return 1;
                }
            }
        }
        if (this->m_pfh)
        {
        LABEL_105:
            if (!_ZtlSecureGet_m_pLadderOrRope() && _ZtlSecureGet_m_nInputY() < 0)
            {
                if (IsAbleToClimbLadderOrRope())
                {
                    auto v59 = m_ap._ZtlSecureGet_x();
                    auto v56 = m_ap._ZtlSecureGet_x();
                    auto v28 = TSingleton<CWvsPhysicalSpace2D>::ms_pInstance;
                    auto v29 = m_ap._ZtlSecureGet_y();
                    auto t_4b = tolong(v29);
                    auto ta = tolong(v59);
                    auto v30 = m_ap._ZtlSecureGet_y();
                    auto d_4a = tolong(v30) - 20;
                    auto v31 = tolong(v56);
                    auto v32 = v28->GetLadderOrRope(v31, d_4a, ta, t_4b);
                    if (v32)
                    {
                        m_ap._ZtlSecurePut_vy(0.);
                        m_ap._ZtlSecurePut_vx(0.);
                        m_ap._ZtlSecurePut_x(v32->x);
                        auto v34 = m_ap._ZtlSecureGet_y();
                        auto at = v32->y2;
                        if (at >= v34)
                            at = v34;
                        m_ap._ZtlSecurePut_y(at);
                        this->OnAttachedObjectChanged(nullptr, v32, 0);
                        this->m_bMoveMobOnLadderOrRopeX = 0;
                        if (this->m_bNeedReturnToStartTarget)
                            CollisionDetectEscortBeforeTargetPosition();
                        else
                            CollisionDetectEscortDest();
                        if (this->m_bMoveMobBeforeEscortCurDest)
                        {
                            MoveMobBeforeEscortCurDest();
                            this->m_bMoveMobBeforeEscortCurDest = 0;
                            this->m_nCurrentDestIndexForce = 0;
                        }
                        return 1;
                    }
                }
            }
            if (this->m_pfh)
            {
                if (!_ZtlSecureGet_m_pLadderOrRope() && _ZtlSecureGet_m_nInputY() > 0)
                {
                    if (IsAbleToClimbLadderOrRope())
                    {
                        auto v60 = m_ap._ZtlSecureGet_x();
                        auto v57 = m_ap._ZtlSecureGet_x();
                        auto v35 = TSingleton<CWvsPhysicalSpace2D>::ms_pInstance;
                        auto v36 = m_ap._ZtlSecureGet_y();
                        auto t_4c = tolong(v36) + 10;
                        auto tb = tolong(v60);
                        auto v37 = m_ap._ZtlSecureGet_y();
                        auto d_4b = tolong(v37);
                        auto v38 = tolong(v57);
                        auto LadderOrRope = v35->GetLadderOrRope(v38, d_4b, tb, t_4c);
                        if (LadderOrRope)
                        {
                            auto v39 = m_ap._ZtlSecureGet_y();
                            if (tolong(v39) <= LadderOrRope->y1)
                            {
                                auto v40 = m_ap._ZtlSecureGet_y();
                                if (LadderOrRope->y1 <= tolong(v40) + 10)
                                {
                                    m_ap._ZtlSecurePut_vx(0.);
                                    m_ap._ZtlSecurePut_vy(0.);
                                    m_ap._ZtlSecurePut_x(LadderOrRope->x);
                                    m_ap._ZtlSecurePut_y(LadderOrRope->y1);
                                    this->OnAttachedObjectChanged(nullptr, LadderOrRope, 0);
                                    this->m_bMoveMobOnLadderOrRopeX = 0;
                                    if (this->m_bNeedReturnToStartTarget)
                                        CollisionDetectEscortBeforeTargetPosition();
                                    else
                                        CollisionDetectEscortDest();
                                    if (this->m_bMoveMobBeforeEscortCurDest)
                                    {
                                        MoveMobBeforeEscortCurDest();
                                        this->m_bMoveMobBeforeEscortCurDest = 0;
                                        this->m_nCurrentDestIndexForce = 0;
                                    }
                                    return 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (this->m_bMoveMobOnLadderOrRopeX && this->m_pfh)
        {
            SetInput(0, _ZtlSecureGet_m_nInputY());
            SetJumpNext(0);
        }
        if (this->m_bNeedReturnToStartTarget)
            CollisionDetectEscortBeforeTargetPosition();
        else
            CollisionDetectEscortDest();
        if (this->m_bMoveMobBeforeEscortCurDest)
        {
            MoveMobBeforeEscortCurDest();
            this->m_bMoveMobBeforeEscortCurDest = 0;
            this->m_nCurrentDestIndexForce = 0;
        }
        return 1;
    }
    return result;*/
}

void CVecCtrlMob::InspectUpdateActive()
{
    __sub_005996F0(this, nullptr);
}

void CVecCtrlMob::FlyCtrlGuardingBefore()
{
    __sub_00599EC0(this, nullptr);
}

void CVecCtrlMob::FlyCtrlGuardingAfter()
{
    __sub_0059A0E0(this, nullptr);
}

void CVecCtrlMob::CtrlUpdateActiveStop()
{
    __sub_0059B6A0(this, nullptr);
}

void CVecCtrlMob::CtrlUpdateActiveMove()
{
    __sub_0059D090(this, nullptr);
}

void CVecCtrlMob::CtrlUpdateActiveJump()
{
    __sub_005998F0(this, nullptr);
    return;
    /* if ( this->m_pfhLandingNext )
   {
     CVecCtrl::SetInput(0, 0);
     this->m_bPassedUpdateCtrl = 1;
     return;
   }
   auto pSpace2D = TSingleton<CWvsPhysicalSpace2D>::ms_pInstance;
     auto inpX = _ZtlSecureGet_m_nInputX();
   if ( !this->m_pfh )
   {
       auto jumpUp = m_moveCtx.jc.bWantToJumpUp.GetData();
     if ( jumpUp )
     {
       this->m_moveCtx.jc.bWantToJumpUp = false;
       if ( inpX )
       {
         auto Data = this->m_moveCtx.jc.nYBeforeJump.GetData();
         auto d = this->m_ap._ZtlSecureGet_y();
         if ( tolong(d) == Data )
         {
           CVecCtrl::SetInput(-inpX, 0);
         }
       }
     }
     auto posCur = m_rp._ZtlSecureGet_pos();
     m_pfh = this->m_pfh;
     auto ForwardLink = m_pfh->GetForwardLink( inpX, posCur, 40.0);
     if ( ForwardLink )
     {
       if ( inpX )
       {
         if ( ForwardLink->GetUVX() <= 0.0 )
         {
           posCur = ForwardLink->GetUVY();
           if ( inpX * posCur < 0.0 )
           {
               auto m_dwSNNext  = 0;
             if ( inpX) >= 0 )
               m_dwSNNext = this->m_pfh->GetNextLink();
             else
               m_dwSNNext = this->m_pfh->m_dwSNPrev;
             if ( m_dwSNNext
               && *(m_dwSNNext + 64) <= 0.0
               && (posCur = *(m_dwSNNext + 72), v30 = CVecCtrl::_ZtlSecureGet_m_nInputX(this), v30 * posCur < 0.0)
               && (CVecCtrl::_ZtlSecureGet_m_nInputX(this) < 0
                && _ZtlSecureFuse<double>(this->m_rp._ZtlSecureTear_pos, this->m_rp._ZtlSecureTear_pos_CS) < 1.0
                || CVecCtrl::_ZtlSecureGet_m_nInputX(this) > 0
                && this->m_pfh->m_len - 1.0 < _ZtlSecureFuse<double>(
                                                this->m_rp._ZtlSecureTear_pos,
                                                this->m_rp._ZtlSecureTear_pos_CS)) )
             {
               v10 = CVecCtrl::_ZtlSecureGet_m_nInputX(this);
               CVecCtrl::SetInput(this, -v10, 0);
             }
             else if ( TSecType<long>::GetData(this->m_moveCtx.jc.nCount) > 0 )
             {
 LABEL_32:
               CVecCtrlMob::SetJumpNext(this, 1);
               goto LABEL_49;
             }
           }
         }
       }
     }
     nCount = this->m_moveCtx.jc.nCount;
     if ( !this->m_pTarget )
     {
       if ( TSecType<long>::GetData(nCount) <= 0 )
       {
         v23 = CRand32::Random(&this->m_moveRndMan.m_randMove);
         ++this->m_moveRndMan.m_usRandCnt;
         if ( v23 % 5 )
         {
           this->m_moveRndMan.m_bGenerated = 1;
           v25 = CRand32::Random(&this->m_moveRndMan.m_randMove);
           ++this->m_moveRndMan.m_usRandCnt;
           TSecType<long>::operator=(this->m_moveCtx.jc.nCount, (v25 % 0x7D0 + 1000) / 0x5A);
           v26 = CRand32::Random(&this->m_moveRndMan.m_randMove);
           ++this->m_moveRndMan.m_usRandCnt;
           this->m_moveRndMan.m_nLastRnd = v26;
           this->m_moveRndMan.m_bPassed = 1;
           TSecType<long>::operator=(this->m_moveCtx.jc.lInputX, v26 % 3 - 1);
           v27 = TSecType<long>::GetData(this->m_moveCtx.jc.lInputX);
           CVecCtrl::SetInput(this, v27, 0);
           this->m_nCheckTarget = CVecCtrl::_ZtlSecureGet_m_nInputX(this);
           m_usRandCnt = this->m_moveRndMan.m_usRandCnt;
           this->m_path.m_usRandCnt = m_usRandCnt;
         }
         else
         {
           CVecCtrl::Jump(this);
           m_usRandCnt = this->m_moveRndMan.m_usRandCnt;
         }
         this->m_path.m_usActualRandCnt = m_usRandCnt;
       }
       goto LABEL_49;
     }
     if ( TSecType<long>::GetData(nCount) <= 0 )
       goto LABEL_33;
     m_lZMass = this->m_pfh->m_lZMass;
     if ( m_lZMass == this->m_pTarget->GetZMass(this->m_pTarget)
       || (posCur = *((this->m_pTarget->GetPos)(this->m_pTarget, &v30) + 4),
           y = AbsPos::_ZtlSecureGet_y(&this->m_ap),
           y <= posCur)
       || (v14 = this->m_pTarget->GetZMass(this->m_pTarget),
           v15 = _ZtlSecureFuse<double>(this->m_ap._ZtlSecureTear_x, this->m_ap._ZtlSecureTear_x_CS),
           v16 = pSpace2D[0],
           pSpace2D[0]->m_aMassRange.a[v14].low >= v15)
       || v16->m_aMassRange.a[v14].high <= _ZtlSecureFuse<double>(
                                             this->m_ap._ZtlSecureTear_x,
                                             this->m_ap._ZtlSecureTear_x_CS)
       || (v17 = CRand32::Random(&this->m_moveRndMan.m_randMove), ++this->m_moveRndMan.m_usRandCnt, v17 % 3) )
     {
 LABEL_33:
       if ( TSecType<long>::GetData(this->m_moveCtx.jc.nCount) <= 0 )
       {
         v18 = CRand32::Random(&this->m_moveRndMan.m_randMove);
         ++this->m_moveRndMan.m_usRandCnt;
         TSecType<long>::operator=(this->m_moveCtx.jc.nCount, (v18 + 400 * (2 - v18 / 0x190)) / 0x5A);
         if ( TSecType<long>::GetData(this->m_moveCtx.jc.lInputX)
           && (posCur = _ZtlSecureFuse<double>(this->m_ap._ZtlSecureTear_x, this->m_ap._ZtlSecureTear_x_CS),
               v19 = (this->m_pTarget->GetPos)(this->m_pTarget, pSpace2D),
               fabs(*v19 - posCur) < 100.0) )
         {
           if ( this->m_rcBound.left == _ZtlSecureFuse<double>(
                                          this->m_ap._ZtlSecureTear_x,
                                          this->m_ap._ZtlSecureTear_x_CS) )
           {
             TSecType<long>::SetData(this->m_moveCtx.jc.lInputX, 1);
           }
           else if ( this->m_rcBound.right == _ZtlSecureFuse<double>(
                                                this->m_ap._ZtlSecureTear_x,
                                                this->m_ap._ZtlSecureTear_x_CS) )
           {
             TSecType<long>::SetData(this->m_moveCtx.jc.lInputX, -1);
           }
         }
         else
         {
           posCur = _ZtlSecureFuse<double>(this->m_ap._ZtlSecureTear_x, this->m_ap._ZtlSecureTear_x_CS);
           v20 = *(this->m_pTarget->GetPos)(this->m_pTarget, pSpace2D);
           v21 = -1;
           if ( v20 >= posCur )
             v21 = 1;
           TSecType<long>::operator=(this->m_moveCtx.jc.lInputX, v21);
         }
         v22 = TSecType<long>::GetData(this->m_moveCtx.jc.lInputX);
         CVecCtrl::SetInput(this, v22, 0);
       }
       goto LABEL_49;
     }
     CVecCtrlMob::ClearMoveContext(this);
     goto LABEL_32;
   }
 LABEL_49:
   v28 = this->m_moveCtx.jc.nCount;
   v29 = TSecType<long>::GetData(v28);
   TSecType<long>::SetData(v28, v29 - 1);
   this->m_bPassedUpdateCtrl = 1;*/
}

void CVecCtrlMob::CtrlUpdateActiveFly()
{
    __sub_0059BEB0(this, nullptr);
}

void CVecCtrlMob::CtrlUpdateActiveEscort()
{
    __sub_0059B8D0(this, nullptr);
}

void CVecCtrlMob::DelayedGiveUpChasing()
{
    //__sub_0059A860(this, nullptr);
    if (m_pTarget)
    {
        auto rnd = m_moveRndMan.GetRndValue(3000, 3000);
        if (m_tChaseDuration > rnd)
            m_tChaseDuration = rnd;
    }
}

void CVecCtrlMob::ClearMoveContext()
{
    //__sub_00597190(this, nullptr);
    m_moveCtx.ClearMoveContext();
}

void CVecCtrlMob::SetJumpNext(int32_t bWantToJumpUp)
{
    //__sub_005971E0(this, nullptr, bWantToJumpUp);
    auto wantJump = m_moveCtx.jc.bWantToJumpUp;
    this->m_bJumpNext = bWantToJumpUp;

    auto y = tolong(m_ap._ZtlSecureGet_y());
    m_moveCtx.jc.nYBeforeJump = y;
}

void CVecCtrlMob::WorkUpdateActiveLadderOrRope()
{
    __sub_0059B4D0(this, nullptr);
}

int32_t CVecCtrlMob::IsAbleToClimbLadderOrRope()
{
    auto mob = dynamic_cast<CMob*>(m_pOwner);
    return m_nMoveAbility == 6 && mob->GetOneTimeAction() <= -1;
    //return __sub_00596E50(this, nullptr);
}

void CVecCtrlMob::MoveMobOnLadderOrRopeX()
{
    __sub_00596EB0(this, nullptr);
}

void CVecCtrlMob::MoveMobOnRightAngleX()
{
    __sub_005970A0(this, nullptr);
}

void CVecCtrlMob::CollisionDetectEscortDest()
{
    __sub_00597630(this, nullptr);
}

void CVecCtrlMob::CollisionDetectEscortBeforeTargetPosition()
{
    __sub_00596AD0(this, nullptr);
}

void CVecCtrlMob::SetRushAttack(double v, long nDistance, long tAttackActionRemain)
{
    __sub_00596DB0(this, nullptr, v, nDistance, tAttackActionRemain);
}

void CVecCtrlMob::MoveMobBeforeEscortCurDest()
{
    __sub_0059CF00(this, nullptr);
}

void CVecCtrlMob::SetEscortMobAttr()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CVecCtrlMob::ClearEscortInfo()
{
    //__sub_00597120(this, nullptr);
    m_aEscorDest.RemoveAll();
    m_bMoveMobOnLadderOrRopeX = false;
    m_nCurrentDestIndex = 0;
    m_ptLastPoint = {0, 0};
    m_bRightAngleJump = true;
    m_nStopDuration = 0;
    m_bEscortStop = false;
}

void CVecCtrlMob::SetEcortStop(long arg0, int32_t arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CVecCtrlMob::IsEscortStop()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CVecCtrlMob::IsEscortJumpForLadder()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CVecCtrlMob::MoveContext::MoveContext()

    : sc(this->a),
      wc(this->b, this->c),
      jc(this->a, this->b, this->d, this->c),
      fc(this->e, this->d, this->a, this->c)
{
    // TODO
}

CVecCtrlMob::MoveContext::~MoveContext()
{
}

void CVecCtrlMob::MoveContext::_dtor_0()
{
    this->~MoveContext();
}

CVecCtrlMob::MoveContext::MoveContext(const CVecCtrlMob::MoveContext& arg0) : sc(arg0.sc), wc(arg0.wc), jc(arg0.jc),
                                                                              fc(arg0.fc)
{
    _ctor_1(arg0);
}

void CVecCtrlMob::MoveContext::_ctor_1(const CVecCtrlMob::MoveContext& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

/*CVecCtrlMob::MoveContext::MoveContext()
{
	UNIMPLEMENTED; //_ctor_0();
}*/
void CVecCtrlMob::MoveContext::_ctor_0()
{
    return __sub_00597AB0(this, nullptr);
}

void CVecCtrlMob::MoveContext::ClearMoveContext()
{
    //__sub_00596D00(this, nullptr);
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    e = {0, 0};
}

CVecCtrlMob::MoveContext::StopContext::StopContext(TSecType<long>& arg0) : nCount(arg0)
{
}

void CVecCtrlMob::MoveContext::StopContext::_ctor_0(TSecType<long>& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CVecCtrlMob::MoveContext::WalkContext::WalkContext(TSecType<long>& arg0, TSecType<long>& arg1)
    : lInputX(arg0), nCount(arg1)
{
}

void CVecCtrlMob::MoveContext::WalkContext::_ctor_0(TSecType<long>& arg0, TSecType<long>& arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CVecCtrlMob::MoveContext::JumpContext::JumpContext(TSecType<long>& arg0, TSecType<long>& arg1, TSecType<int>& arg2,
                                                   TSecType<long>& arg3)
    : lInputX(arg0), nCount(arg1), bWantToJumpUp(arg2), nYBeforeJump(arg3)
{
}

void CVecCtrlMob::MoveContext::JumpContext::_ctor_0(TSecType<long>& arg0, TSecType<long>& arg1, TSecType<int>& arg2,
                                                    TSecType<long>& arg3)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CVecCtrlMob::MoveContext::FlyContext::FlyContext(SECPOINT& arg0, TSecType<int>& arg1, TSecType<long>& arg2,
                                                 TSecType<long>& arg3)
    : ptTarget(arg0), bTarget(arg1), nZMass(arg2), nRemain(arg3)
{
}

void CVecCtrlMob::MoveContext::FlyContext::_ctor_0(SECPOINT& arg0, TSecType<int>& arg1, TSecType<long>& arg2,
                                                   TSecType<long>& arg3)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CVecCtrlMob::EscortDest::EscortDest()
{
}

void CVecCtrlMob::EscortDest::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

double __cdecl ReturnDecSpeed(double v, double f, double m, double vMax, double tSec)
{
    //return __sub_00596990(v, f, m, vMax, tSec);
    // st7
    long double v6; // st6

    double result = vMax;
    if ( vMax < 0.0 )
        return v;

    if ( v > vMax )
    {
        v6 = v - f / m * tSec;
        if ( v6 < vMax )
            return result;
        return v6;
    }
    result = v;
    v6 = -vMax;
    if ( -vMax > v )
    {
        result = v + f / m * tSec;
        if ( v6 < result )
            return v6;
    }
    return result;
}
