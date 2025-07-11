// Mob.cpp
#include "Mob.hpp"

#include <random>
#include <VecCtrlMob/VecCtrlMob.hpp>

#include "Summoned/Summoned.hpp"
#include "Stage/Stage.hpp"

static ZRef<CStage> FAKE_ZRef_CStage{};

static ZRef<CMob::ReservedPacket> FAKE_ZRef_CMob_ReservedPacket{};
static ZRef<CSummoned> FAKE_ZRef_CSummoned{};
static ZRef<ITEMSKILLLEVELDATA> FAKE_ZRef_ITEMSKILLLEVELDATA{};
static ZRef<ITEMOPTIONSKILLLEVELDATA> FAKE_ZRef_ITEMOPTIONSKILLLEVELDATA{};
static ZRef<MobSpeakInformation> FAKE_ZRef_MobSpeakInformation{};
static ZRef<MobSpeakCondition> FAKE_ZRef_MobSpeakCondition{};
static ZRef<CMob::MobBullet> FAKE_ZRef_CMob_MobBullet{};

HRESULT __fastcall __QueryVecCtrlMob(_x_com_ptr<IWzVector2D>* self, void* edx, CVecCtrlMob* p)
{
    //return self->__QueryInterface<IWzVector2D*>((IWzVector2D*)p);

    auto vec = dynamic_cast<IWzVector2D*>(p);
    self->Attach(vec, true);
    return 0;
}

#include "Mob_regen.ipp"


CMob::~CMob()
{
}

void CMob::_dtor_0()
{
    this->~CMob();
}

CMob::CMob(const CMob& arg0)
{
    _ctor_1(arg0);
}

void CMob::_ctor_1(const CMob& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMob::CMob(CMobTemplate* pMobTemplate)
{
    this->m_nTeamForMCarnival = 255;
    m_pTemplate = pMobTemplate;

    m_aAction.Alloc(43);
    m_bNeedToUpdateCrc = true;
    m_nHPpercentage = 100;
    m_nRushAttackIdx = -1;

    this->_ZtlSecurePut_m_bInViewSplit(false);
    this->_ZtlSecurePut_m_nMobCtrlState(-1);
    this->_ZtlSecurePut_m_nMobCtrlSN(0);
    this->_ZtlSecurePut_m_nOneTimeAction(-1);
    this->_ZtlSecurePut_m_nMoveAction(0);
    this->_ZtlSecurePut_m_dwMobID(0);
    this->_ZtlSecurePut_m_tCurFrameRemain(0);
    this->_ZtlSecurePut_m_tNextFramesRemain(0);
    this->_ZtlSecurePut_m_tActionDelay(0);
    this->_ZtlSecurePut_m_tInitDelay(0);
    this->_ZtlSecurePut_m_nDeadType(0);
    _ZtlSecurePut_m_nSuspended(0);

    m_stat.SetFrom(m_pTemplate);

    auto t = get_update_time();
    _ZtlSecurePut_m_tLastTryPickUpDrop(t);
    _ZtlSecurePut_m_tLastApplyCtrl(t);
    m_tLastHitDazzledMob = t;

    m_pCanvasHPIndicator = G_PCOM.CreateCanvas();
}

void CMob::_ctor_0(CMobTemplate* pMobTemplate)
{
    //return __sub_0024CA30(this, nullptr, pMobTemplate);
    new(this) CMob(pMobTemplate);
}

void CMob::Init(unsigned long dwMobID, CInPacket& iPacket)
{
    __sub_0024D3B0(this, nullptr, dwMobID, iPacket);
}

void CMob::SetActive(int32_t bActive)
{
    //__sub_00240950(this, nullptr, bActive);
    auto pvc = GetVecCtrlMob();
    auto pvcActive = GetActiveVecCtrlMob();

    if (bActive)
    {
        if (!pvcActive->IsActive())
        {
            _ZtlSecurePut_m_nMobCtrlState(MOBCTRL_ACTIVE_PERM0);
            auto& lastElem = pvc->GetMovePath().GetElemLast();
            auto fh = CWvsPhysicalSpace2D::GetInstance()->GetFoothold(lastElem.fh);
            pvcActive->SetActive(true, lastElem.x, lastElem.y, lastElem.vx, lastElem.vy, lastElem.bMoveAction, fh);
        }
        return;
    }

    if (!pvcActive->IsActive())
        return;

    auto state = _ZtlSecureGet_m_nMobCtrlState() - 3;
    auto newState = -2;

    if (state)
    {
        if (state != 1)
        {
            auto ma = GetCurTemplate()->_ZtlSecureGet_nMoveAbility();
            pvc->GetMovePath().DiscardByInterrupt(ma, pvc, false);
            newState = -1;
        }
        else
        {
            newState = -3;
        }
    }

    _ZtlSecurePut_m_nMobCtrlState(newState);
    pvcActive->SetActive(false, 0, 0, 0, 0, 0, nullptr);
}

int32_t CMob::IsActive()
{
    //return __sub_0023AB30(this, nullptr);
    return GetActiveVecCtrlMob()->IsActive();
}

int32_t CMob::IsInViewSplit()
{
    return _ZtlSecureGet_m_bInViewSplit();
}

void CMob::SetInViewSplit(int32_t arg0)
{
    _ZtlSecurePut_m_bInViewSplit(arg0);
}

void CMob::ChaseTarget(int32_t bChase, IVecCtrlOwner* pTarget, int32_t bForced)
{
    //TODO(game)
    //__sub_00242DB0(this, nullptr, bChase, pTarget, bForced);
    /*if (!IsActive())
        return;

    if (!bChase || IsChaseTargetEscort() )*/
}

CMobTemplate* CMob::GetTemplate() const
{
    return m_pTemplate;
}

CMobTemplate* CMob::GetCurTemplate() const
{
    if (m_stat.nDoom_ && m_pTemplateByDoom)
        return m_pTemplateByDoom;
    return m_pTemplate;
}

MobStat* CMob::GetMobStat()
{
    return &m_stat;
}

long CMob::GetCalcDamageStatIndex() const
{
    return m_nCalcDamageStatIndex;
}

unsigned long CMob::GetMobID() const
{
    return _ZtlSecureGet_m_dwMobID();
}

int32_t CMob::IsBossMob() const
{
    return m_pTemplate->_ZtlSecureGet_bBoss();
}

long CMob::GetMoveAbility() const
{
    //return __sub_0023A690(this, nullptr);
    return m_pTemplate->_ZtlSecureGet_nMoveAbility();
}

const MobAttackInfo* CMob::GetAttackInfo(long nAction) const
{
    if ((nAction - 13) <= 8)
        return this->m_pTemplate->GetAttackInfo(nAction - 13);
    return nullptr;
}

long CMob::GetMoveAction() const
{
    return _ZtlSecureGet_m_nMoveAction();
}

void CMob::SetMoveAction(long nMA, int32_t bReload)
{
    auto fineMA = GetFineMoveDirAction(nMA);
    auto ma = _ZtlSecureGet_m_nMoveAction();
    if (bReload || fineMA != ma)
    {
        _ZtlSecurePut_m_nMoveAction(fineMA);
        if (_ZtlSecureGet_m_nOneTimeAction() <= -1)
            PrepareActionLayer();
    }
}

int32_t CMob::IsInited()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CMob::IsSuspended()
{
    return GetSuspended() != 0;
}

long CMob::GetSuspended()
{
    return _ZtlSecureGet_m_nSuspended();
}

void CMob::SetSuspended(long nSuspend)
{
    _ZtlSecurePut_m_nSuspended(nSuspend);
}

int32_t CMob::IsNotAttack()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CMob::IsDamagedByMob()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CMob::CheckDamagedByMob(unsigned long dwTemplateID)
{
    if (m_pTemplate->bDamagedByMob)
    {
        if (m_pTemplate->m_aDamagedBySelectedMob.IsEmpty())
            return true;

        for (auto& mob : m_pTemplate->m_aDamagedBySelectedMob)
        {
            if (mob == dwTemplateID)
                return true;
        }
    }
    return false;
}

int32_t CMob::IsMobOurTeam()
{
    //return __sub_0023B4A0(this, nullptr);
    auto field = get_field();
    auto user = CUserLocal::GetInstance();


    return field && user && (field->GetFieldType() == 10 || field->GetFieldType() == 15)
        && m_nTeamForMCarnival == user->GetTeamForMCarnival();
}

int32_t CMob::IsSamePhaseWithMe()
{
    auto field = get_field();
    auto user = CUserLocal::GetInstance();

    if (user && field)
    {
        auto phase = field->GetPhaseAlpha();
        if (!phase)
            return true;

        if (phase >= m_nPhase && m_nPhase == user->GetPhase())
            return true;
    }

    return false;
}

int32_t CMob::IsNoFlip()
{
    return !m_stat.nDoom_ && m_pTemplate->bNoFlip;
}

int32_t CMob::IsDazzledMobByMe()
{
    if (auto user = CUserLocal::GetInstance())
    {
        auto dazzle = m_stat.nDazzle_;
        if (dazzle == user->GetCharacterId())
            return true;
    }

    return false;
}

int32_t CMob::IsDazzled()
{
    return m_stat.nDazzle_;
}

void CMob::SetLastHitDazzledMob(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CMob::GetLastHitDazzledMob()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CMob::GetDeadType()
{
    return _ZtlSecureGet_m_nDeadType();
}

void CMob::SetDeadType(long arg0)
{
    _ZtlSecurePut_m_nDeadType(arg0);
}

int32_t CMob::IsTimeBomb()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const ZList<unsigned long>& CMob::GetReviveList()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CMob::IsOnPlayingOneTimeAction()
{
    return GetOneTimeAction() > -1;
}

long CMob::GetOneTimeAction()
{
    return _ZtlSecureGet_m_nOneTimeAction();
}

void CMob::ResetOneTimeAction()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CMob::GetOneTimeActionRemain()
{
    if (!IsOnPlayingOneTimeAction())
        return false;
    return _ZtlSecureGet_m_tCurFrameRemain() + _ZtlSecureGet_m_tNextFramesRemain();
}

int32_t CMob::SetAttackAction(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CMob::GetRandomHitAction()
{
    if (this->m_pTemplate->nHitCount <= 0)
        return -1;
    return rand() % this->m_pTemplate->nHitCount + 7;
}

int32_t CMob::IsLeft()
{
    //return __sub_0023C610(this, nullptr);
    if (IsNoFlip())
        return true;

    return GetMoveAction() & 1;
}

long CMob::GetCurrentAction(long* pnDir)
{
    auto ma = GetMoveAction();
    auto raw = MoveAction2RawAction(ma, pnDir);
    auto ota = GetOneTimeAction();
    if (!IsOnPlayingOneTimeAction())
        return GetFineAction(raw);
    return GetFineAction(ota);
}

long CMob::GetCurrentFrameIndex()
{
    auto act = GetCurrentAction(nullptr);
    return m_aAction[act].IndexOf((const ZRef<CActionMan::MOBACTIONFRAMEENTRY>*)m_posFrame);
}

int32_t CMob::GetBodyRect(tagRECT& rc, int32_t bContinuous)
{
    //return __sub_00242140(this, nullptr, rc, bContinuous);
    if (IsRectEmpty(&m_rcBody))
    {
        SetRectEmpty(&rc);
        return 0;
    }


    auto pos = m_ptPos.op_tagpoint();
    auto rcBody = IsLeft() ? m_rcBody : m_rcBodyFlip;
    rc = rcBody;
    OffsetRect(&rc, pos.x, pos.y);
    if (bContinuous)
    {
        auto prevPos = m_ptPosPrev.op_tagpoint();
        OffsetRect(&rcBody, prevPos.x, prevPos.y);
        UnionRect(&rc, &rc, &rcBody);
    }

    return 1;
}

tagPOINT CMob::GetHitPoint(tagRECT rcAttack)
{
    //tagPOINT ret{};
    //return *__sub_00242260(this, nullptr, &ret, CreateNakedParam(rcAttack));
    tagPOINT pt{};
    tagRECT rcBody{};
    if (GetBodyRect(rcBody, false))
    {
        if (rcAttack.left < rcBody.right)
        {
            if (rcAttack.right <= rcBody.left)
                rcAttack.right = rcBody.left + 1;
        }
        else
        {
            rcAttack.left = rcBody.right - 1;
        }
        if (rcAttack.top < rcBody.bottom)
        {
            if (rcAttack.bottom <= rcBody.top)
                rcAttack.bottom = rcBody.top + 1;
        }
        else
        {
            rcAttack.top = rcBody.bottom - 1;
        }
        tagRECT rcIntersect{};
        IntersectRect(&rcIntersect, &rcAttack, &rcBody);
        pt.x = (rcIntersect.right + rcIntersect.left) / 2;
        pt.y = (rcIntersect.bottom + rcIntersect.top) / 2;
    }
    return pt;
}

tagPOINT CMob::GetHitPointHeightRand(tagRECT rcAttack)
{
    //tagPOINT ret{};
    //return *__sub_00242310(this, nullptr, &ret, CreateNakedParam(rcAttack));

    tagPOINT pt{};
    tagRECT rc{};
    if (GetBodyRect(rc, false))
    {
        if (rcAttack.left < rc.right)
        {
            if (rcAttack.right <= rc.left)
                rcAttack.right = rc.left + 1;
        }
        else
        {
            rcAttack.left = rc.right - 1;
        }
        if (rcAttack.top < rc.bottom)
        {
            if (rcAttack.bottom <= rc.top)
                rcAttack.bottom = rc.top + 1;
        }
        else
        {
            rcAttack.top = rc.bottom - 1;
        }
        tagRECT rcIntersect{};
        IntersectRect(&rcIntersect, &rcAttack, &rc);
        pt.x = (rcIntersect.right + rcIntersect.left) / 2;
        auto v4 = std::abs(rcIntersect.bottom - rcIntersect.top) / 2;
        auto v5 = 0;
        if (v4)
            v5 = _D_G_RAND.Random() % v4;
        pt.y = (rcIntersect.top + rcIntersect.bottom) / 2 + 3 * (v5 - v4 / 2);
    }

    return pt;
}

void CMob::GetAttackBodyRect(ZArray<tagRECT>& arcAttack, int32_t bContinuous)
{
    //__sub_002443C0(this, nullptr, arcAttack, bContinuous);
    GetArrayBodyRectImpl(this->m_arcAttackBody, this->m_arcAttackBodyFlip, arcAttack, bContinuous);
}

void CMob::GetMultiBodyRect(ZArray<tagRECT>& arcMulti, int32_t bContinuous)
{
    //__sub_002443E0(this, nullptr, arcMulti, bContinuous);
    GetArrayBodyRectImpl(this->m_arcMultiBody, this->m_arcMultiBodyFlip, arcMulti, bContinuous);
}

void CMob::GetArrayBodyRectImpl(const ZArray<tagRECT>& originBodyRect, const ZArray<tagRECT>& originBodyRectFlip,
                                ZArray<tagRECT>& arcRect, int32_t bContinuous)
{
    //__sub_00242400(this, nullptr, originBodyRect, originBodyRectFlip, arcRect, bContinuous);
    if (!originBodyRect.IsEmpty())
    {
        arcRect.Alloc(0);
        auto aRC = &originBodyRect;
        if (!this->m_pTemplate->bNoFlip && (GetMoveAction() & 1) == 0)
        {
            aRC = &originBodyRectFlip;
        }

        for (auto& rc : *aRC)
        {
            auto& cur = arcRect.InsertBefore();
            cur = rc;

            auto x = m_ptPos.x.GetData();
            auto y = m_ptPos.y.GetData();
            OffsetRect(&cur, x, y);
            if (bContinuous)
            {
                tagRECT prev = rc;
                auto prevX = m_ptPosPrev.x.GetData();
                auto prevY = m_ptPosPrev.y.GetData();
                OffsetRect(&prev, prevX, prevY);
                UnionRect(&cur, &cur, &prev);
            }
        }
    }
}

long CMob::GetHeight()
{
    //return __sub_0023C810(this, nullptr);
    auto canvas = m_pLayerAction->Getcanvas(Ztl_variant_t(0));
    auto cy = canvas->Getcy();
    return cy;
}

long CMob::GetHalfWidth()
{
    return __sub_0023E790(this, nullptr);
}

long CMob::GetPushedDamage()
{
    //return __sub_0023B5C0(this, nullptr);
    auto local = CUserLocal::GetInstance();
    auto pushedDmg = GetCurTemplate()->_ZtlSecureGet_nPushedDamage();
    if (local && !IsBossMob())
    {
        auto& ss = local->GetSecondaryStat();
        auto kb = ss._ZtlSecureGet_nSmartKnockback_();
        if (kb > 0)
            return kb * pushedDmg / 100.;
    }

    return pushedDmg;
}

long CMob::GetTeamForMCarnival()
{
    return m_nTeamForMCarnival;
}

int32_t CMob::IsImmovable()
{
    return m_stat.nStun_ || m_stat.nFreeze_ || m_stat.nWeb_ || GetSuspended() == 4;
}

int32_t CMob::IsPosFixed()
{
    return GetMoveAbility() == 0;
}

int32_t CMob::IsDoom()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CStaticFoothold* CMob::GetFoothold()
{
    return GetVecCtrlMob()->GetFoothold();
}

_x_com_ptr<IWzVector2D> CMob::GetVecCtrl()
{
    return m_pvc;
}

_x_com_ptr<IWzVector2D> CMob::GetActiveVecCtrl()
{
    return m_pvcActive;
}

void CMob::SetShoeAttr()
{
    //__sub_00241E50(this, nullptr);
    m_pAttrShoe = new CAttrShoe(0);

    auto active = GetActiveVecCtrlMob();
    auto tmpl = GetCurTemplate();
    auto nSpeed = m_stat.nSpeed;
    if (active && active->IsChasing() && active->GetChaseTarget())
        nSpeed = tmpl->_ZtlSecureGet_nChaseSpeed();

    auto ma = tmpl->_ZtlSecureGet_nMoveAbility();
    if (ma)
    {
        m_pAttrShoe->walkSpeed = std::clamp<long>(nSpeed + m_stat.nSpeed_, 10, 140) / 100.;
    }
    else
    {
        m_pAttrShoe->walkSpeed = 0.;
    }

    if (ma == 4)
    {
        m_pAttrShoe->flyAcc = 1.0;
        auto speed = std::clamp<long>(m_stat.nSpeed + m_stat.nSpeed_, 10, 140);
        m_pAttrShoe->flySpeed = speed / 100.;
        m_pAttrShoe->swimAcc = 1.0;
        m_pAttrShoe->swimSpeedH = speed / 100.;
        m_pAttrShoe->swimSpeedV = speed / 100.;
    }


    m_pAttrShoe->walkAcc = m_pTemplate->nFs;
    m_pAttrShoe->walkDrag = m_pTemplate->nFs;
}

void CMob::AddDamageInfo(unsigned long dwCharacterId, long nSkillID, long tDelayedProcess, long nHitAction,
                         int32_t bLeft, long nDamage, int32_t bCriticalAttack, long nAttackIdx, tagPOINT pt,
                         Ztl_bstr_t sHitAni, int32_t bChase, long nMoveType, long nBulletCashItemID,
                         long nMoveEndingPosX, long nMoveEndingPosY, int32_t bMoveLeft)
{
    __sub_00253A10(this, nullptr, dwCharacterId, nSkillID, tDelayedProcess, nHitAction, bLeft, nDamage, bCriticalAttack,
                   nAttackIdx, CreateNakedParam(pt), CreateNakedParam(sHitAni), bChase, nMoveType, nBulletCashItemID,
                   nMoveEndingPosX, nMoveEndingPosY, bMoveLeft);
}

long CMob::GetRemainDamageInfoDelay()
{
    //return __sub_0023E730(this, nullptr);
    if (m_lDamageInfo.IsEmpty())
        return 0;

    auto t = get_update_time();
    auto delay = 1;
    for (auto& dmgInfo : m_lDamageInfo)
    {
        auto dmgDelay = dmgInfo._ZtlSecureGet_tDelayedProcess() - t;
        if (dmgDelay >= delay)
            delay = dmgDelay;
    }
    return delay;
}

void CMob::OnDie()
{
    //__sub_0024E4B0(this, nullptr);
    auto tmplId = m_pTemplate->_ZtlSecureGet_dwTemplateID();
    if (tmplId == 8810122)
    {
        auto alpha = m_pLayerAction->Getalpha();
        alpha->RelMove(255, 0, vtMissing, vtMissing);
    }

    auto curTmpl = GetCurTemplate();
    auto curTmplId = curTmpl->_ZtlSecureGet_dwTemplateID();


    auto pos = GetPos();
    auto soundVol = get_sound_volume_by_pos(pos.x, pos.y);
    //TODO(sound) play_mob_sound(curTmplId, SE_MOB_DIE, soundVol);

    if (curTmpl->nDieCount > 0)
    {
        auto deadTy = GetDeadType();
        auto dieAct = GetDeadType() == 3 ? 22 : rand() % curTmpl->nDieCount + 10;
        _ZtlSecurePut_m_nOneTimeAction(dieAct);

        PrepareActionLayer();

        int x = 0;
        int y = 0;
        auto vec = GetVecCtrlMob();
        vec->raw__GetSnapshot(&x, &y, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, vtMissing);
        m_ptPos = tagPOINT{.x = x, .y = y};
        vec->raw_Move(x, y);
        SetSuspended(2);
        TrySpeaking(-1, -1);
    }

    m_lpLayerASAni.RemoveAll();
    m_lpLayerASIcon.RemoveAll();
    m_lAffectedSkillEntry.RemoveAll();
    m_tLastPoisonDamage = 0x7FFFFFFF;
    m_tLastVenomDamage = 0x7FFFFFFF;
    m_tLastAmbushDamage = 0x7FFFFFFF;
    m_tLastObstacleDamage = 0x7FFFFFFF;

    for (auto& burned : m_stat.lBurnedInfo)
        burned.nDotCount = 0;

    //TODO m_Bullets.CallUpdate_RemoveT()

    auto anim = CAnimationDisplayer::GetInstance();
    if (tmplId == 8800002 || tmplId == 8800102)
        anim->Effect_Tremble(30., 0, 0, 0, false);
    if (tmplId == 8810026 || tmplId == 8810130)
        anim->Effect_Tremble(10., 0, 0, 4000, true);
    if (tmplId == 8810018 || tmplId == 8810122)
        anim->Effect_Tremble(5., 0, 0, 3000, true);
    if (tmplId == 8830003)
        anim->Effect_Tremble(10., 0, 0, 3000, false);
}

void CMob::OnBomb()
{
    __sub_00250EC0(this, nullptr);
}

void CMob::OnDestructByMiss()
{
    __sub_0024EA30(this, nullptr);
}

void CMob::OnSwallowed()
{
    __sub_00241810(this, nullptr);
}

void CMob::OnRevive()
{
    __sub_00240AA0(this, nullptr);
}

void CMob::OnDoomed(int32_t bDoom)
{
    __sub_0024ED40(this, nullptr, bDoom);
}

void CMob::Update()
{
    __sub_00254300(this, nullptr);
}

void CMob::ProcessAction(long tCur)
{
    __sub_0024AB60(this, nullptr, tCur);
}

void CMob::ProcessAttack(long arg0)
{
    //TODO __sub_00252950(this, nullptr, arg0);
}

void CMob::SetTemporaryStat(CInPacket& iPacket, long nCalcDamageIndex)
{
    __sub_0024AFD0(this, nullptr, iPacket, nCalcDamageIndex);
    /*MY_UINT128 uFlag(0);
    m_stat.Reset(~uFlag);

    m_stat.SetFrom(m_pTemplate);*/
}

void CMob::ShowHPIndicator()
{
    __sub_0023E200(this, nullptr);
}

void CMob::HideHPIndicator()
{
    __sub_0023E530(this, nullptr);
}

long CMob::MakeNameTag(const char* sName, _x_com_ptr<IWzGr2DLayer> pOverlay, _x_com_ptr<IWzVector2D> pvc)
{
    return __sub_00246AE0(this, nullptr, sName, CreateNakedParam(pOverlay), CreateNakedParam(pvc));
}

int32_t CMob::IsTargetInAttackRange(long anAttackAction, long* rcTarget, int32_t* abAttackLeft,
                                    CMob::TARGETINFO* bNoFlip, long pUserLocal)
{
    return __sub_00245F50(this, nullptr, anAttackAction, rcTarget, abAttackLeft, bNoFlip, pUserLocal);
}

long CMob::GetType()
{
    return 1;
}

long CMob::OnResolveMoveAction(long nInputX, long nInputY, long nCurMoveAction, const CVecCtrl* pvc)
{
    //return __sub_0023CAF0(this, nullptr, nInputX, nInputY, nCurMoveAction, pvc);
    auto tmpl = m_stat.nDoom_ ? m_pTemplateByDoom : m_pTemplate;
    auto vec = GetVecCtrlMob();
    auto bChase = vec->GetChaseTarget() ? tmpl->bChase : false;

    auto v13 = 0;


    switch (tmpl->_ZtlSecureGet_nMoveAbility())
    {
    case 0:
        if (!nInputX)
            return nCurMoveAction & 1 | 4;
        return static_cast<int>(nInputX < 0) | 4;
    case 1:
        if (!nInputX)
            return nCurMoveAction & 1 | 4;
        return nInputX < 0 | 2 * (bChase ? 16 : 1);
    case 3:
        if (!pvc->GetFoothold())
        {
            if (nInputX)
                return static_cast<int>(nInputX < 0) | 6;
            return nCurMoveAction & 1 | 6;
        }
        if (!nInputX)
            return nCurMoveAction & 1 | 4;
        v13 = bChase ? 16 : 1;
        return nInputX < 0 | (2 * v13);
    case 4:
        if (!nInputX)
            return nCurMoveAction & 1 | 2 * (bChase ? 16 : 6);
        v13 = bChase ? 16 : 6;
        return nInputX < 0 | 2 * v13;
    case 6:

        if (vec->GetFoothold())
        {
            if (nInputX)
                return static_cast<int>(nInputX < 0) | 2;
            return nCurMoveAction & 1 | 4;
        }
        if (vec->IsOnLadder() || vec->IsOnRope())
        {
            if (nInputX)
                return static_cast<int>(nInputX < 0) | 0x10;
            return nCurMoveAction & 1 | 0x10;
        }
        if (nInputX)
            return static_cast<int>(nInputX < 0) | 6;
        return nCurMoveAction & 1 | 6;
    default:
        return 0;
    }
}

void CMob::OnLayerZChanged(const CVecCtrl* pvc)
{
    if (m_pvc.op_arrow() == pvc)
        SetLayerZ();
}

const ZRef<CAttrShoe> CMob::GetShoeAttr()
{
    //return __sub_00240C20(this, nullptr);
    return m_pAttrShoe;
}

const tagPOINT CMob::GetPos()
{
    //return __sub_0024CFF0(this, nullptr);
    return m_ptPos.op_tagpoint();
}

const tagPOINT CMob::GetPosPrev()
{
    //return __sub_0024D020(this, nullptr);
    return m_ptPosPrev.op_tagpoint();
}

long CMob::GetZMass()
{
    return GetVecCtrlMob()->GetZMass();
}

void CMob::OnMove(CInPacket& iPacket)
{
    __sub_002521E0(this, nullptr, iPacket);
}

void CMob::OnCtrlAck(CInPacket& iPacket)
{
    //__sub_00240C50(this, nullptr, iPacket);
    if (!IsActive())
        SetActive(true);


    auto sn = iPacket.Decode2();
    auto nextAtk = iPacket.Decode1();
    auto mp = iPacket.Decode2();
    auto skill = iPacket.Decode1();
    auto slv = iPacket.Decode1();

    _ZtlSecurePut_m_nMP(mp);

    if (!m_nSkillCommand || skill)
    {
        m_nSkillCommand = skill;
        m_nSLV = slv;
    }

    auto nextState = 2;
    if (sn - _ZtlSecureGet_m_nMobCtrlSN() >= 0)
        nextState = (nextAtk != 0) + 3;

    _ZtlSecurePut_m_nMobCtrlState(nextState);
}

void CMob::OnStatSet(CInPacket& iPacket)
{
    __sub_00252660(this, nullptr, iPacket);
}

void CMob::OnStatReset(CInPacket& iPacket)
{
    __sub_00252780(this, nullptr, iPacket);
}

void CMob::OnSuspendReset(CInPacket& iPacket)
{
    __sub_0024ACB0(this, nullptr, iPacket);
}

void CMob::OnAffected(CInPacket& iPacket)
{
    __sub_00244400(this, nullptr, iPacket);
}

void CMob::OnDamaged(CInPacket& iPacket)
{
    __sub_0024ECB0(this, nullptr, iPacket);
}

void CMob::OnCatchEffect(CInPacket& iPacket)
{
    __sub_0023CD00(this, nullptr, iPacket);
}

void CMob::OnEffectByItem(CInPacket& iPacket)
{
    __sub_0023CD40(this, nullptr, iPacket);
}

void CMob::OnSpecialEffectBySkill(CInPacket& iPacket)
{
    __sub_002540B0(this, nullptr, iPacket);
}

void CMob::OnHPIndicator(CInPacket& iPacket)
{
    __sub_00242EF0(this, nullptr, iPacket);
}

void CMob::OnMobAttackedByMob(CInPacket& iPacket)
{
    __sub_002436A0(this, nullptr, iPacket);
}

void CMob::OnMobSpeaking(CInPacket& iPacket)
{
    __sub_00250000(this, nullptr, iPacket);
}

void CMob::OnMobSkillDelay(CInPacket& iPacket)
{
    __sub_0023D560(this, nullptr, iPacket);
}

void CMob::OnEscortFullPath(CInPacket& iPacket)
{
    __sub_00243D90(this, nullptr, iPacket);
}

void CMob::OnIncMobChargeCount(CInPacket& iPacket)
{
    __sub_0023D500(this, nullptr, iPacket);
}

int32_t CMob::SendDropPickUpRequest(unsigned long dwID)
{
    return __sub_00244450(this, nullptr, dwID);
}

void CMob::SetGuided(long nSkillID, long nDelay)
{
    //__sub_00244570(this, nullptr, nSkillID, nDelay);
    auto t = get_update_time();
    auto& aff = m_lAffectedSkillEntry.AddTail();
    aff.nSkillID = nSkillID;
    aff.tStart = std::max<long>(t + nDelay, 1);
    aff.posList = nullptr;
    m_posAffectedGuidedBullet = (__POSITION*)&aff;
}

void CMob::ResetGuided()
{
    __sub_002410B0(this, nullptr);
}

int32_t CMob::IsRectIntersectWithTrapezoid(long x0, long x1, long x2, long y, long r, const tagRECT& rc)
{
    return __sub_0023B390(this, nullptr, x0, x1, x2, y, r, rc);
}

void CMob::OnHit(unsigned long dwCharacterId, long nSkillID, long nHitAction, int32_t bLeft, long nDamage,
                 int32_t bCriticalAttack, long nAttackIdx, int32_t bChase, long nMoveType, long nBulletCashItemID,
                 long nMoveEndingPosX, long nMoveEndingPosY, int32_t bMoveLeft, int32_t bZigZagDamage)
{
    __sub_00253100(this, nullptr, dwCharacterId, nSkillID, nHitAction, bLeft, nDamage, bCriticalAttack, nAttackIdx,
                   bChase, nMoveType, nBulletCashItemID, nMoveEndingPosX, nMoveEndingPosY, bMoveLeft, bZigZagDamage);
}

void CMob::DoAttack(long nAction, int32_t bLeft, CMob::TARGETINFO ti)
{
    __sub_002504D0(this, nullptr, nAction, bLeft, CreateNakedParam(ti));
}

void CMob::RegisterMagicBulletAnimation(long arg0, long arg1, tagPOINT arg2, tagPOINT arg3,
                                        _x_com_ptr<IWzVector2D> arg4, long arg5, Ztl_bstr_t arg6, int32_t arg7)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

_x_com_ptr<IWzGr2DLayer> CMob::LoadLayer(Ztl_bstr_t bsUOL, int32_t bLeft, long rx, long ry, long nZ_Diff, long nPos)
{
    _x_com_ptr<IWzGr2DLayer> ret;
    return *__sub_00244900(this, nullptr, &ret, CreateNakedParam(bsUOL), bLeft, rx, ry, nZ_Diff, nPos);
}

_x_com_ptr<IWzGr2DLayer> CMob::LoadEffectLayer(long nItemID)
{
    _x_com_ptr<IWzGr2DLayer> ret;
    return *__sub_002458E0(this, nullptr, &ret, nItemID);
}

void CMob::ShowDamage(long nDamage, long nAttackIdx, int32_t bCriticalAttack, int32_t bHalfHeight, int32_t ZigZagDamage,
                      int32_t bAdjustHeight)
{
    __sub_0023C950(this, nullptr, nDamage, nAttackIdx, bCriticalAttack, bHalfHeight, ZigZagDamage, bAdjustHeight);
}

void CMob::ShowEffectByItem(long nItemID, int32_t bSuccess)
{
    __sub_0023B2D0(this, nullptr, nItemID, bSuccess);
}

void CMob::ShowCatchEffect(int32_t bSuccess, long tDelay)
{
    __sub_0023B220(this, nullptr, bSuccess, tDelay);
}

void CMob::UpdateAffectedSkillList(long tDelay)
{
    __sub_0024A500(this, nullptr, tDelay);
}

int32_t CMob::ShowAffectedSkill(long arg0)
{
    return __sub_0024EF30(this, nullptr, arg0);
}

void CMob::SetAffectedLayerPos()
{
    __sub_0023EAF0(this, nullptr);
}

void CMob::ShiftAffectedSkillAnimation(int32_t bForced)
{
    __sub_00248640(this, nullptr, bForced);
}

void CMob::ApplyControl(long tCur)
{
    __sub_00240D20(this, nullptr, tCur);
}

void CMob::TryPickUpDrop(long tCur)
{
    __sub_0023EA60(this, nullptr, tCur);
}

void CMob::TryFirstAttack()
{
    __sub_002482F0(this, nullptr);
}

void CMob::TryFirstSelfDestruction()
{
    __sub_00240EE0(this, nullptr);
}

int32_t CMob::TryDoingSkill(long& nAction, int32_t& bLeft, CMob::TARGETINFO& ti)
{
    return __sub_0024AE60(this, nullptr, nAction, bLeft, ti);
}

void CMob::TrySelfDestruct()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CMob::TrySpeaking(long nSpeakInfo, long nSpeech)
{
    __sub_0024B6D0(this, nullptr, nSpeakInfo, nSpeech);
}

void CMob::ShowHitEffect(long nDamage)
{
    __sub_0024B140(this, nullptr, nDamage);
}

void CMob::CreateHPIndicator(long nPercent, unsigned long dwColor)
{
    __sub_00243160(this, nullptr, nPercent, dwColor);
}

void CMob::DrawHPTag(long arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CMob::AdjustHPIndicatorPosition()
{
    __sub_00242F80(this, nullptr);
}

void CMob::InitAngerGaugeData()
{
    __sub_00248B00(this, nullptr);
}

void CMob::CreateAngerIndicator()
{
    __sub_0023CD70(this, nullptr);
}

void CMob::AdjustAngerIndicatorPosition()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CMob::AnimateAngerIndicator()
{
    __sub_0023D060(this, nullptr);
}

void CMob::AngerGaugeFullChargeEffect()
{
    __sub_002490B0(this, nullptr);
}

void CMob::ChangeAngerIndicator(long nIndicatorIndex)
{
    __sub_0023A100(this, nullptr, nIndicatorIndex);
}

_ZTL_SEC_GETSETI(int32_t, CMob, m_bInViewSplit)
_ZTL_SEC_GETSETI(long, CMob, m_nMobCtrlState)
_ZTL_SEC_GETSETI(short, CMob, m_nMobCtrlSN)
_ZTL_SEC_GETSETI(long, CMob, m_tLastApplyCtrl)
_ZTL_SEC_GETSETI(long, CMob, m_tLastTryPickUpDrop)
_ZTL_SEC_GETSETI(unsigned long, CMob, m_dwMobID)
_ZTL_SEC_GETSETI(long, CMob, m_nMP)
_ZTL_SEC_GETSETI(long, CMob, m_nMoveAction)
_ZTL_SEC_GETSETI(long, CMob, m_nOneTimeAction)
_ZTL_SEC_GETSETI(long, CMob, m_tHitExpire)
_ZTL_SEC_GETSETI(long, CMob, m_tLastHitExpire)
_ZTL_SEC_GETSETI(long, CMob, m_tCurFrameRemain)
_ZTL_SEC_GETSETI(long, CMob, m_tNextFramesRemain)
_ZTL_SEC_GETSETI(long, CMob, m_tActionDelay)
_ZTL_SEC_GETSETI(long, CMob, m_tInitDelay)
_ZTL_SEC_GETSETI(long, CMob, m_nDeadType)
_ZTL_SEC_GETSETI(int32_t, CMob, m_nSuspended)

void CMob::ClearActionLayer()
{
    for (auto& act : m_aAction)
        act.RemoveAll();
}

void CMob::PrepareActionLayer()
{
    __sub_0024A030(this, nullptr);
}

long CMob::GetActionDelay(long nAction)
{
    return __sub_0023E970(this, nullptr, nAction);
}

void CMob::SetLayerZ()
{
    //__sub_0023AB50(this, nullptr);

    auto pvc = GetVecCtrlMob();
    auto z = pvc->GetMoveAbility() == 4 ? 0xC0041F14 : 10 * (3000 * pvc->GetPage() - pvc->GetZMass()) - 0x3FFF8AD9;
    m_pLayerAction->Putz(z);

    auto tmplId = m_pTemplate->_ZtlSecureGet_dwTemplateID();

    switch (tmplId)
    {
    case 8810003u:
    case 8810011u:
    case 8810103u:
        m_pLayerAction->Putz(10 * (3000 * pvc->GetPage() - pvc->GetZMass()) - 0x3FFF8ADC);
        break;
    case 8810004u:
    case 8810010u:
    case 8810012u:
    case 8810102u:
    case 8810104u:
        m_pLayerAction->Putz(10 * (3000 * pvc->GetPage() - pvc->GetZMass()) - 0x3FFF8ADD);
        break;
    case 8810005u:
    case 8810006u:
    case 8810013u:
    case 8810014u:
    case 8810105u:
    case 8810106u:
        m_pLayerAction->Putz(10 * (3000 * pvc->GetPage() - pvc->GetZMass()) - 0x3FFF8ADE);
        break;
    case 8810007u:
    case 8810015u:
    case 8810107u:
        m_pLayerAction->Putz(10 * (3000 * pvc->GetPage() - pvc->GetZMass()) - 0x6665AB0);
        break;
    case 8810008u:
    case 8810016u:
    case 8810108u:
        m_pLayerAction->Putz(10 * (3000 * pvc->GetPage() - pvc->GetZMass()) - 0x3FFF8ADF);
        break;
    case 8810009u:
    case 8810017u:
    case 8810109u:
        m_pLayerAction->Putz(10 * (3000 * pvc->GetPage() - pvc->GetZMass()) - 0x3FFF8AE1);
        break;
    case 8810018u:
    case 8810122u:
        m_pLayerAction->Putz(10 * (3000 * pvc->GetPage() - pvc->GetZMass()) - 0x3FFF8ADB);
        break;

    case 0x864700u:
    case 0x864701u:
    case 0x864702u:
    case 0x864764u:
    case 0x864765u:
    case 0x864766u:
        m_pLayerAction->Putz(10 * (3000 * pvc->GetPage() - pvc->GetZMass()) - 0x3FFF8ADB);
        break;
    case 0x864703u:
    case 0x864704u:
    case 0x864767u:
    case 0x864768u:
        m_pLayerAction->Putz(10 * (3000 * pvc->GetPage() - pvc->GetZMass()) - 0x3FFF8ADF);
        break;
    case 0x864705u:
    case 0x864706u:
    case 0x864769u:
    case 0x86476Au:
        m_pLayerAction->Putz(10 * (3000 * pvc->GetPage() - pvc->GetZMass()) - 0x3FFF8ADE);
        break;
    case 0x864707u:
    case 0x864708u:
    case 0x86476Bu:
    case 0x86476Cu:
        m_pLayerAction->Putz(10 * (3000 * pvc->GetPage() - pvc->GetZMass()) - 0x3FFF8ADD);
        break;
    case 0x864709u:
    case 0x86470Au:
    case 0x86476Du:
    case 0x86476Eu:
        m_pLayerAction->Putz(10 * (3000 * pvc->GetPage() - pvc->GetZMass()) - 0x3FFF8ADC);
        break;
    case 8810002:
        m_pLayerAction->Putz(10 * (3000 * pvc->GetPage() - pvc->GetZMass()) - 0x3FFF8ADD);
        break;

    case 8830001:
    case 8830002:
    case 8830004:
    case 8830005:
    case 8830006:
    case 8830008:
    case 8830009:
    case 8830011:
    case 8830012:
    case 8830013:
        m_pLayerAction->Putz(30000 * pvc->GetPage() - 0x3FFFF830);
        break;
    case 8830000:
    case 8830003:
    case 8830007:
    case 8830010:
        m_pLayerAction->Putz(30000 * pvc->GetPage() - 0x3FFFF831);
        break;

    default:
        break;
    }

    if (m_pTemplate->_ZtlSecureGet_bUpperMostLayer())
        m_pLayerAction->Putz(0xC0041F14);

}

long CMob::MoveAction2RawAction(long nMA, long* pnDir) const
{
    //return __sub_0023A9C0(this, nullptr, nMA, pnDir);
    auto result = 0;
    if (pnDir)
        *pnDir = nMA & 1;
    switch (nMA >> 1)
    {
    case 1:
        result = 0;
        break;
    case 2:
        result = 1;
        break;
    case 3:
        result = 2;
        break;
    case 6:
        result = 3;
        break;
    case 8:
        result = 4;
        break;
    case 16:
        result = 39;
        break;
    default:
        result = 2
            * (m_pTemplate->_ZtlSecureGet_nMoveAbility() == 4)
            + 1;
        break;
    }
    return result;
}

long CMob::RawAction2MoveAction(long nAction) const
{
    //return __sub_0023AA70(this, nullptr, nAction);
    auto result = 0;
    switch (nAction)
    {
    case 0:
        result = 1;
        break;
    case 1:
        result = 2;
        break;
    case 2:
        result = 3;
        break;
    case 3:
        result = 6;
        break;
    case 4:
        result = 8;
        break;
    case 39:
        result = 16;
        break;
    default:
        result = 4
            * (m_pTemplate->_ZtlSecureGet_nMoveAbility() == 4)
            + 2;
        break;
    }
    return result;
}

void CMob::SetFrameInfo(ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>& l, __POSITION* pos)
{
    __sub_00242560(this, nullptr, l, pos);
}

void CMob::GenerateMovePath(long nAction, int32_t bLeft, CMob::TARGETINFO ti, int32_t bChase, long nMoveType,
                            long nMoveEndingX, long nMoveEndingY, int32_t bMoveLeft, int32_t bRiseByToss)
{
    __sub_00251100(this, nullptr, nAction, bLeft, CreateNakedParam(ti), bChase, nMoveType, nMoveEndingX, nMoveEndingY,
                   bMoveLeft, bRiseByToss);
}

void CMob::SetNeedToUpdateCrc(int32_t arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

unsigned long CMob::GetCrc()
{
    if (!this->m_bNeedToUpdateCrc)
        return this->m_dwMobCrc;
    unsigned int result = CalcCrc();
    this->m_dwMobCrc = result;
    this->m_bNeedToUpdateCrc = 0;
    return result;
}

unsigned long CMob::CalcCrc()
{
    return m_pTemplate->CalcCrc(CMobPool::GetInstance()->GetMobCrcKey());
}

long CMob::GetHPPercentage()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CMob::IsRisingByToss()
{
    if (this->m_stat.nRiseByToss_ || this->m_bWaitingToBeSetTossed)
    {
        if (!GetFoothold())
            return 1;
    }
    return false;
}

int32_t CMob::CanBeTossedAgain()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t __cdecl CMob::IsAttackAction(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t __cdecl CMob::IsSkillAction(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t __cdecl CMob::IsHitAction(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t __cdecl CMob::IsDieAction(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CMob::SetDamagedByMob(long nDamage, long vx, long vy, CMob* pAttackMob, long nAttackIdx, long nDir)
{
    __sub_0024B260(this, nullptr, nDamage, vx, vy, pAttackMob, nAttackIdx, nDir);
}

int32_t CMob::LoadMobAction(long nAction)
{
    return __sub_0023B6B0(this, nullptr, nAction);
}

long CMob::GetFineAction(long nAction)
{
    //return __sub_00249270(this, nullptr, nAction);
    static ZMap<long, ZMap<long, long, long>, long> mobActionErrata;

    auto tmpl = m_stat.nDoom_ ? m_pTemplateByDoom : m_pTemplate;
    auto mid = tmpl->_ZtlSecureGet_dwTemplateID();

    if (LoadMobAction(nAction))
    {
        return nAction;
    }

    //TODO(game, important) check if the original insert works here
    auto value = mobActionErrata.InsertPtrValue(mid, nullptr);
    long fineActValue = 0;
    if (value && value->GetAt(nAction, &fineActValue))
    {
        LoadMobAction(fineActValue);
        return fineActValue;
    }

    fineActValue = 1;
    if (!LoadMobAction(1))
    {
        if (!LoadMobAction(3))
        {
            CMSException(0x22000006).Throw();
        }
        fineActValue = 3;
    }

    value->Insert(nAction, fineActValue);
    return fineActValue;
}

long CMob::GetFineMoveDirAction(long nMoveDirAction)
{
    //return __sub_002493D0(this, nullptr, nMoveDirAction);
    long dir{};
    auto act = MoveAction2RawAction(nMoveDirAction, &dir);
    auto fine = GetFineAction(act);
    fine = RawAction2MoveAction(fine);
    return dir & 1 | (fine << 1);
}

int32_t CMob::IsMultiBallAttack(long nAction, long& nBulletNumber, long& nRange)
{
    return __sub_00241100(this, nullptr, nAction, nBulletNumber, nRange);
}

void CMob::SetMultiBallTarget(long nBulletNumber, long nRange)
{
    __sub_002438A0(this, nullptr, nBulletNumber, nRange);
}

void CMob::SetRandTimeForAreaAttack(long nAction)
{
    __sub_00243B80(this, nullptr, nAction);
}

tagPOINT CMob::SetBallDestPoint(tagPOINT pt1, tagPOINT pt2, int32_t bLeft, long nRange)
{
    tagPOINT ret{};
    return *__sub_0023A130(this, nullptr, &ret, CreateNakedParam(pt1), CreateNakedParam(pt2), bLeft, nRange);
}

void CMob::ProcessStatSet(MY_UINT128 uFlagSet, CInPacket& iPacket)
{
    __sub_0024BDD0(this, nullptr, CreateNakedParam(uFlagSet), iPacket);
}

void CMob::ProcessStatReset(MY_UINT128 uFlagReset, CInPacket& iPacket)
{
    __sub_00250030(this, nullptr, CreateNakedParam(uFlagReset), iPacket);
}

void CMob::UpdateTimeBomb()
{
    __sub_00243C30(this, nullptr);
}

void CMob::SetTimeBombTime(long nSkillID)
{
    __sub_0023B720(this, nullptr, nSkillID);
}

void CMob::SetSwallowCharacter(unsigned long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CMob::IsEscortMob()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CMob::IsNotEnemyMob()
{
    return __sub_00239FB0(this, nullptr);
}

void CMob::SendCollisionEscort(long nDest)
{
    __sub_00241150(this, nullptr, nDest);
}

int32_t CMob::IsChaseTargetEscort()
{
    //return __sub_0023B7B0(this, nullptr);
    if (!IsActive() || !m_dwTargetMobID || GetTemplate()->nEscortType == 1)
        return 0;

    auto target = dynamic_cast<CMob*>(GetActiveVecCtrlMob()->GetChaseTarget());
    return target && target->GetType() == 1 && target->GetTemplate()->nEscortType == 1;
}

int32_t CMob::IsChaseTargetDazzle()
{
    //return __sub_0023B830(this, nullptr);
    if (!IsActive() || !m_dwTargetMobID)
        return 0;

    auto target = dynamic_cast<CMob*>(GetActiveVecCtrlMob()->GetChaseTarget());
    return target && target->GetType() == 1 && target->m_stat.bInvincible != 1; //TODO
}

int32_t CMob::IsAbleTargetEscortMob(CMob* pEscortMob)
{
    return __sub_0023B8A0(this, nullptr, pEscortMob);
}

long CMob::GetDamagedByMobofNonDamageTime()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CMob::UpdateEscortStopActRepeat()
{
    __sub_0024C730(this, nullptr);
}

void CMob::ClearEscortInfo()
{
    __sub_0023B980(this, nullptr);
}

void CMob::SendRequestEscortPath()
{
    __sub_002411F0(this, nullptr);
}

void CMob::SendEscortStopEndRequest()
{
    __sub_00241290(this, nullptr);
}

void CMob::OnEscortStopEndPermmision()
{
    __sub_0023B9C0(this, nullptr);
}

void CMob::OnEscortStopSay(CInPacket& iPacket)
{
    __sub_0024C500(this, nullptr, iPacket);
}

void CMob::OnEscortReturnBefore(CInPacket& iPaket)
{
    __sub_00249410(this, nullptr, iPaket);
}

void CMob::SetRushAttack(long arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CMob::ResetRushAttack()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CMob::IsOnRushAttack()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CMob::GetRushAttackIdx()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CMob::OnNextAttack(CInPacket& iPacket)
{
    __sub_002528A0(this, nullptr, iPacket);
}

int32_t CMob::IsCantPassByTeleport()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMob& CMob::operator=(CMob& arg0)
{
    return _op_assign_223(this, arg0);
}

CMob& CMob::_op_assign_223(CMob* pThis, CMob& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CVecCtrlMob* CMob::GetVecCtrlMob()
{
    return dynamic_cast<CVecCtrlMob*>(m_pvc.op_arrow());
}

CVecCtrlMob* CMob::GetActiveVecCtrlMob()
{
    return m_pvcActive ? dynamic_cast<CVecCtrlMob*>(m_pvcActive.op_arrow()) : nullptr;
}

CMob::TARGETINFO::TARGETINFO()
{
}

void CMob::TARGETINFO::_ctor_0()
{
    return __sub_00239FA0(this, nullptr);
}

CMob::ATTACKEFFECT::~ATTACKEFFECT()
{
}

void CMob::ATTACKEFFECT::_dtor_0()
{
    this->~ATTACKEFFECT();
    //return __sub_002447C0(this, nullptr);
}

CMob::ATTACKEFFECT::ATTACKEFFECT(const CMob::ATTACKEFFECT& arg0)
{
    _ctor_1(arg0);
}

void CMob::ATTACKEFFECT::_ctor_1(const CMob::ATTACKEFFECT& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMob::ATTACKEFFECT::ATTACKEFFECT()
{
}

void CMob::ATTACKEFFECT::_ctor_0()
{
    new(this) ATTACKEFFECT();
}

CMob::ATTACKEFFECT& CMob::ATTACKEFFECT::operator=(const CMob::ATTACKEFFECT& arg0)
{
    return _op_assign_3(this, arg0);
}

CMob::ATTACKEFFECT& CMob::ATTACKEFFECT::_op_assign_3(CMob::ATTACKEFFECT* pThis, const CMob::ATTACKEFFECT& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMob::AFFECTEDSKILLENTRY::~AFFECTEDSKILLENTRY()
{
}

void CMob::AFFECTEDSKILLENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMob::AFFECTEDSKILLENTRY::AFFECTEDSKILLENTRY(const CMob::AFFECTEDSKILLENTRY& arg0)
{
    _ctor_1(arg0);
}

void CMob::AFFECTEDSKILLENTRY::_ctor_1(const CMob::AFFECTEDSKILLENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMob::AFFECTEDSKILLENTRY::AFFECTEDSKILLENTRY()
{
}

void CMob::AFFECTEDSKILLENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMob::AFFECTEDSKILLENTRY& CMob::AFFECTEDSKILLENTRY::operator=(const CMob::AFFECTEDSKILLENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CMob::AFFECTEDSKILLENTRY& CMob::AFFECTEDSKILLENTRY::_op_assign_3(CMob::AFFECTEDSKILLENTRY* pThis,
                                                                 const CMob::AFFECTEDSKILLENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

_ZTL_SEC_GETSETI(long, CMob::DAMAGEINFO, tDelayedProcess)
_ZTL_SEC_GETSETI(unsigned long, CMob::DAMAGEINFO, dwCharacterId)
_ZTL_SEC_GETSETI(long, CMob::DAMAGEINFO, nSkillID)
_ZTL_SEC_GETSETI(long, CMob::DAMAGEINFO, nHitAction)
_ZTL_SEC_GETSETI(int32_t, CMob::DAMAGEINFO, bLeft)
_ZTL_SEC_GETSETI(long, CMob::DAMAGEINFO, nDamage)
_ZTL_SEC_GETSETI(int32_t, CMob::DAMAGEINFO, bCriticalAttack)
_ZTL_SEC_GETSETI(long, CMob::DAMAGEINFO, nAttackIdx)
_ZTL_SEC_GETSETI(int32_t, CMob::DAMAGEINFO, bChase)
_ZTL_SEC_GETSETI(long, CMob::DAMAGEINFO, nMoveType)
_ZTL_SEC_GETSETI(long, CMob::DAMAGEINFO, nBulletCashItemID)
_ZTL_SEC_GETSETI(long, CMob::DAMAGEINFO, nMoveEndingPosX)
_ZTL_SEC_GETSETI(long, CMob::DAMAGEINFO, nMoveEndingPosY)
_ZTL_SEC_GETSETI(int32_t, CMob::DAMAGEINFO, bMoveLeft)

CMob::HITEFFECT::~HITEFFECT()
{
}

void CMob::HITEFFECT::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMob::HITEFFECT::HITEFFECT(const CMob::HITEFFECT& arg0)
{
    _ctor_1(arg0);
}

void CMob::HITEFFECT::_ctor_1(const CMob::HITEFFECT& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMob::HITEFFECT::HITEFFECT()
{
}

void CMob::HITEFFECT::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMob::HITEFFECT& CMob::HITEFFECT::operator=(const CMob::HITEFFECT& arg0)
{
    return _op_assign_3(this, arg0);
}

CMob::HITEFFECT& CMob::HITEFFECT::_op_assign_3(CMob::HITEFFECT* pThis, const CMob::HITEFFECT& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMob::DelaySkill::DelaySkill()
{
}

void CMob::DelaySkill::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMob::ReservedPacket::~ReservedPacket()
{
}

void CMob::ReservedPacket::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMob::ReservedPacket::ReservedPacket(CMob::ReservedPacket& arg0)
{
    _ctor_1(arg0);
}

void CMob::ReservedPacket::_ctor_1(CMob::ReservedPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMob::ReservedPacket::ReservedPacket()
{
}

void CMob::ReservedPacket::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMob::ReservedPacket& CMob::ReservedPacket::operator=(const CMob::ReservedPacket& arg0)
{
    return _op_assign_3(this, arg0);
}

CMob::ReservedPacket& CMob::ReservedPacket::_op_assign_3(CMob::ReservedPacket* pThis, const CMob::ReservedPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMob::MobBullet::~MobBullet()
{
}

void CMob::MobBullet::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMob::MobBullet::MobBullet(const CMob::MobBullet& arg0)
{
    _ctor_1(arg0);
}

void CMob::MobBullet::_ctor_1(const CMob::MobBullet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMob::MobBullet::MobBullet(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget,
                           long z, int32_t bLeft, Ztl_bstr_t sBallUOL, long nAttackIdx) : CFadeoutBullet(
    tStart, tEnd, ptStart, ptEnd, pVecTarget)
{
    m_nZ = z;
    m_bLeft = bLeft;
    m_sBallUOL = sBallUOL;
    m_nAttackIdx = nAttackIdx;
}

void CMob::MobBullet::_ctor_0(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd,
                              _x_com_ptr<IWzVector2D> pVecTarget, long z, int32_t bLeft, Ztl_bstr_t sBallUOL,
                              long nAttackIdx)
{
    //return __sub_002495B0(this, nullptr, tStart, tEnd, CreateNakedParam(ptStart), CreateNakedParam(ptEnd),
    //                          CreateNakedParam(pVecTarget), z, bLeft, CreateNakedParam(sBallUOL), nAttackIdx);
    new(this) MobBullet(tStart, tEnd, ptStart, ptEnd, pVecTarget, z, bLeft, sBallUOL, nAttackIdx);
}

void CMob::MobBullet::ProcessAttack(CMob* pThisMob, CUserLocal* pUserLocal, tagRECT rcUserLocal)
{
    //__sub_0024C7A0(this, nullptr, pThisMob, pUserLocal, CreateNakedParam(rcUserLocal));
    //TODO(game)
}

_x_com_ptr<IWzGr2DLayer> CMob::MobBullet::PrepareBulletLayer(_x_com_ptr<IWzVector2D> pOrigin, int32_t bClockwise)
{
    return __sub_002496D0(this, nullptr, CreateNakedParam(pOrigin), bClockwise);
}

CMob::MobBullet& CMob::MobBullet::operator=(const CMob::MobBullet& arg0)
{
    return _op_assign_5(this, arg0);
}

CMob::MobBullet& CMob::MobBullet::_op_assign_5(CMob::MobBullet* pThis, const CMob::MobBullet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMob::MobBullet::Container::~Container()
{
}

void CMob::MobBullet::Container::_dtor_0()
{
    return __sub_00241760(this, nullptr);
}

CMob::MobBullet::Container::Container(const CMob::MobBullet::Container& arg0)
{
    _ctor_1(arg0);
}

void CMob::MobBullet::Container::_ctor_1(const CMob::MobBullet::Container& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMob::MobBullet::Container::Container()
{
}

void CMob::MobBullet::Container::_ctor_0()
{
    new(this) Container();
}

void CMob::MobBullet::Container::OnRemoved()
{
}

void CMob::MobBullet::Container::ProcessAttack(CMob* pMob, CUserLocal* pUserLocal, tagRECT rcUserLocal, long tCur)
{
    CallUpdate(ProcessAttackFunc(pMob, pUserLocal, rcUserLocal, tCur));
}

CMob::MobBullet::Container& CMob::MobBullet::Container::operator=(const CMob::MobBullet::Container& arg0)
{
    return _op_assign_5(this, arg0);
}

CMob::MobBullet::Container& CMob::MobBullet::Container::_op_assign_5(CMob::MobBullet::Container* pThis,
                                                                     const CMob::MobBullet::Container& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CMob::MobBullet::OnRemovedFunc::operator()(CMob::MobBullet& arg0)
{
    return _op_call_0(this, arg0);
}

int32_t CMob::MobBullet::OnRemovedFunc::_op_call_0(CMob::MobBullet::OnRemovedFunc* pThis, CMob::MobBullet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMob::MobBullet::ProcessAttackFunc::ProcessAttackFunc(CMob* arg0, CUserLocal* arg1, tagRECT arg2, long arg3)
{
    m_pMob = arg0;
    m_pUserLocal = arg1;
    m_rcLocalUser = arg2;
    m_tCur = arg3;
}

void CMob::MobBullet::ProcessAttackFunc::_ctor_0(CMob* arg0, CUserLocal* arg1, tagRECT arg2, long arg3)
{
    new(this) ProcessAttackFunc(arg0, arg1, arg2, arg3);
}

int32_t CMob::MobBullet::ProcessAttackFunc::operator()(CMob::MobBullet& arg0)
{
    if (arg0.NeedsUpdate(m_tCur))
    {
        arg0.ProcessAttack(m_pMob, m_pUserLocal, m_rcLocalUser);
    }
    return 0;
}

int32_t CMob::MobBullet::ProcessAttackFunc::_op_call_1(CMob::MobBullet::ProcessAttackFunc* pThis, CMob::MobBullet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMob* __cdecl CreateMob(CMobTemplate* pMobTemplate)
{
    //return __sub_00250440(pMobTemplate);
    return new CMob(pMobTemplate);
}

const wchar_t* __cdecl get_item_sound(long nItemID, int32_t bSuccess)
{
    //return __sub_0023A050(nItemID, bSuccess);
    if (nItemID != 2270002)
        return nullptr;
    auto result = L"CatchSuccess";
    if (!bSuccess)
        return L"CatchFaild";
    return result;
}

void __stdcall _vectorconstructoriterator_(void* __t, uint32_t __s, int32_t __n, PROC* __f)
{
    return __sub_0023A070(__t, __s, __n, __f);
}

tagRECT& __cdecl adjust_rect(tagRECT& rc, long x, long y, int32_t bFlip)
{
    if (bFlip)
    {
        auto tmp = -rc.left;
        rc.left = -rc.right;
        rc.right = tmp;
    }
    OffsetRect(&rc, x, y);
    return rc;
    //return __sub_0023C7D0(rc, x, y, bFlip);
}

long __cdecl calc_priority(long x1, long y1, long x2, long y2)
{
    return __sub_0023A0B0(x1, y1, x2, y2);
}

void __cdecl get_random_unique_array(ZArray<long>& anShuffle, long nStart, unsigned long nRange, unsigned long nCount)
{
    if (!nRange || !nCount)
    {
        return;
    }


    anShuffle.Alloc(nCount);
    ZList<long> l;

    auto remaining = nCount;

    auto ix = 0;

    auto count = nCount;

    while (remaining)
    {
        nCount = count;
        nCount = std::min(count, nRange);
        for (auto i = 0; i < nRange; ++i)
        {
            l.Insert(nStart + i);
        }

        for (auto i = 0; i < nCount; ++i)
        {
            auto rand = _D_G_RAND.Random();
            if (auto len = l.GetCount())
            {
                rand %= len;
            }

            auto val = l.FindIndex(rand);
            anShuffle[ix++] = *val;
            l.RemoveAt(val);
        }

        remaining -= nCount;
        count = remaining;
    }


    //return __sub_002447E0(anShuffle, nStart, nRange, nCount);
}
