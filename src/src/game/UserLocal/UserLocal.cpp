// UserLocal.cpp
#include "UserLocal.hpp"

bool __cdecl _IsRectEmpty(SECRECT& p)
{
    if (p._ZtlSecureGet_left() < p._ZtlSecureGet_right())
        if (p._ZtlSecureGet_top() < p._ZtlSecureGet_bottom())
            return false;

    return true;
}


int aMobMove[7] = {
    0x11,
    6,
    6,
    6,
    6,
    0x1b
};

int aDelayForHashing[6] = {
    0x3c, 0x14a, 0x1fe, 0x276, 0x2d0, 0x2ee
};

int aDelayForHashing_0[6] = {
    0x3c, 0x14a, 0x1fe, 0x276, 0x2d0
};

int aDelayForHashing_1[4] = {
    0xb4, 0x186, 0x258, 0x294
};

int aDelayForHashing_2[3] = {
    0x96, 0x10e, 0x1e0
};

int aDelayForHashing_3[4] = {
    0, 0xb4, 0x168, 0x1c2
};

int aDelayForHashing_4[8] = {
    0, 0xb4, 0x1c2, 0x2d0,
    0x384, 0x3de, 0x438, 0x492
};

int aDelayForHashing_5[3] = {
    0x50, 0x168, 0x140
};

#include <VecCtrlUser/VecCtrlUser.hpp>

#include "spdlog/spdlog.h"
#include "UtilDlg/UtilDlg.hpp"
#include "Stage/Stage.hpp"
#include "ext/skills_ids.h"

static ZRef<CStage> FAKE_ZRef_CStage{};


static ZRef<ITEMSKILLLEVELDATA> _FAKE_ZRef_ITEMSKILLLEVELDATA{};
static ZRef<CItemInfo::ItemSkill> _FAKE_ZRef_CItemInfo_ItemSkill{};
static ZRef<AdditionPsd> _FAKE_ZRef_AdditionPsd{};
static ZRef<CUIContextMenu> _FAKE_ZRef_CUIContextMenu{};
static ZRef<CField> _FAKE_ZRef_CField{};
static ZRef<CUIRandomMesoBag> _FAKE_ZRef_CUIRandomMesoBag{};

static ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>> _FAKE_ZList_ZRef_CActionMan_MOBACTIONFRAMEENTRY{};

HRESULT __fastcall __QueryVecCtrlUser(_x_com_ptr<IWzVector2D>* self, void* edx, CVecCtrlUser* p)
{
    //return self->__QueryInterface<IWzVector2D*>((IWzVector2D*)p);
    auto vec = dynamic_cast<IWzVector2D*>(p);
    self->Attach(vec, true);
    return 0;
}

#include "UserLocal_regen.ipp"

ZArray<long> CUserLocal::ms_anTutors{};

CAntiRepeat::CAntiRepeat()
= default;

CAntiRepeat::~CAntiRepeat()
{
}

void CAntiRepeat::_dtor_0()
{
    this->~CAntiRepeat();
}

CAntiRepeat::CAntiRepeat(long arg0)
{
    m_nCountLimit = arg0;
}

void CAntiRepeat::_ctor_1(long arg0)
{
    new(this) CAntiRepeat(arg0);
}

int32_t CAntiRepeat::TryRepeat(long nX, long nY)
{
    // eax
    // eax

    const int v3 = this->m_nX - nX;
    if (int v4; v3 <= -6 || v3 >= 6 || (v4 = this->m_nY - nY, v4 <= -150) || v4 >= 150)
    {
        this->m_nX = nX;
        this->m_nY = nY;
        this->m_nRepeatCount = 0;
        return 1;
    }
    else
    {
        if (int m_nRepeatCount = this->m_nRepeatCount; m_nRepeatCount < this->m_nCountLimit)
        {
            this->m_nRepeatCount = m_nRepeatCount + 1;
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

CDualKeyChecker::~CDualKeyChecker()
= default;

void CDualKeyChecker::_dtor_0()
{
    this->~CDualKeyChecker();
    //return __sub_00506CD0(this, nullptr);
}

CDualKeyChecker::CDualKeyChecker(const CDualKeyChecker& arg0)
{
    _ctor_1(arg0);
}

void CDualKeyChecker::_ctor_1(const CDualKeyChecker& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDualKeyChecker::CDualKeyChecker()
= default;

void CDualKeyChecker::_ctor_0()
{
    new(this) CDualKeyChecker();
}

CDualKeyChecker::State CDualKeyChecker::Check(CDualKeyChecker::KeyMsg& msg)
{
    //return __sub_00519290(this, nullptr, msg);
    if ((msg.lParam & 0x80000000) == 0)
    {
        m_lScanCode = this->m_lScanCode;
        const auto lParam_high = HIWORD(msg.lParam);
        this->m_tInputTime = 0;
        this->m_lScanCode = 0;
        if (!m_lScanCode)
        {
            if (lParam_high == 29)
            {
            LABEL_11:
                this->m_tInputTime = timeGetTime();
                this->m_lScanCode = lParam_high;
                m_lMsg.AddTail(msg);
                return State_Buffered;
            }
            if (lParam_high != 56)
            {
            LABEL_5:
                PushAndPopMsg(msg);
                return State_None;
            }
        }
        if (lParam_high != 29 && lParam_high != 56)
            goto LABEL_5;
        if (m_lScanCode && m_lScanCode != lParam_high)
            return State_Dual;
        goto LABEL_11;
    }

    PushAndPopMsg(msg);
    return State_None;
}

void CDualKeyChecker::Update()
{
    if (m_lScanCode && timeGetTime() > m_tInputTime + 50)
    {
        m_tInputTime = 0;
        m_lScanCode = 0;
    }
}

int32_t CDualKeyChecker::GetQueuedMsg(CDualKeyChecker::KeyMsg& arg0)
{
    if (auto head = m_lMsg.GetHeadPosition())
    {
        arg0 = *head;
        m_lMsg.RemoveHead();
        return 1;
    }

    return 0;
}

void CDualKeyChecker::PushAndPopMsg(CDualKeyChecker::KeyMsg& msg)
{
    //__sub_005119F0(this, nullptr, msg);
    if (!m_lMsg.IsEmpty())
    {
        m_lMsg.AddTail(msg);
        msg = *m_lMsg.GetHeadPosition();
        m_lMsg.RemoveHead();
    }
}

CDualKeyChecker& CDualKeyChecker::operator=(const CDualKeyChecker& arg0)
{
    return _op_assign_7(this, arg0);
}

CDualKeyChecker& CDualKeyChecker::_op_assign_7(CDualKeyChecker* pThis, const CDualKeyChecker& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ActionRandMan::~ActionRandMan()
{
    if (bRollBack)
    {
        //TODO(game) lock
        auto past1 = RndManRef.m_past_s1;
        auto past2 = RndManRef.m_past_s2;
        auto past3 = RndManRef.m_past_s3;
        RndManRef.SetSeed(past1, past2, past3);
    }
}

void ActionRandMan::_dtor_0()
{
    this->~ActionRandMan();
}

ActionRandMan::ActionRandMan(CRand32& RndMan): RndManRef(RndMan)
{
    bRollBack = true;
}

void ActionRandMan::_ctor_0(CRand32& RndMan)
{
    new(this) ActionRandMan(RndMan);
}

uint32_t ActionRandMan::GetRandom() const
{
    return RndManRef.Random();
}

void ActionRandMan::PreventRollback()
{
    this->bRollBack = 0;
}

CUserLocal::~CUserLocal()
{
    auto anim = CAnimationDisplayer::GetInstance();
    anim->RemovePrepareAnimation(m_dwCharacterId);

    if (m_uSkillSoundCookie)
        stop_skill_sound(m_uSkillSoundCookie);

    //TODO maybe empty
    auto center = get_gr()->Getcenter();
    center->Putorigin(vtMissing);
    center->RelMove(0, 0, vtMissing, vtMissing);

    ms_pInstance = nullptr;
}

void CUserLocal::_dtor_0()
{
    this->~CUserLocal();
}

CUserLocal::CUserLocal(const CUserLocal& arg0)
{
    _ctor_1(arg0);
}

void CUserLocal::_ctor_1(const CUserLocal& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUserLocal::CUserLocal(unsigned long uSN): m_antiRepeat(100), m_antiRepeat_Buff(20), CUser(uSN)
{
    //_ctor_0( uSN);
    ms_pInstance = this;

    m_tPetConsumeNoPotionMsgTime = -1;
    CUserLocal::GetUpFromPortableChair(true);
    this->_ZtlSecurePut_m_nLastJumpInputX(0);
    m_nIdx_ToolTipByMouse = -1;
    m_pPassiveSkillData = new PassiveSkillData();
    m_pAttrShoe = new CAttrShoe(0);

    auto t = timeGetTime();
    m_tLastWarnUsingDisabledWeapon = t;
    m_tLastCantUseSkill = t;

    auto ut = get_update_time();
    m_tLastJump = ut;
    m_tLastStormArrow = ut;
    m_tLastRapidFire = ut;
    m_tLastFlameThrower = ut;
    m_tLastTitan = ut;
    m_tLastTankSiegeMode = ut;
    m_tLastPoisonDamage = ut;
    m_tLastArealDamage = ut;
    m_tLastHideMorphedCheck = ut;
    m_tLastStopMotionDamage = ut;
    m_tLastUseAura = ut;

    m_tMineMoveStart = ut;
    m_tSwallowDigestTime = ut;
    m_tSwallowLastMobWriggle = ut;
    m_tCyclone = ut;
    m_tMovingShootAttackTime = ut;

    auto cd = 0x80000000;
    auto maxCdSkills = {
        4121008,
        0x4DF8F1,
        15100004,
        0x4F5C6A,
        0x41EEEA,
        0x4E23ED,
        0x4F5C6E,
        0x4F8379 + 3,
        0x4F837D,
        14111006,
        21001001,
        30001068,
        4001003,
        4341003,
        32101001,
        1121001,
        1321001,
        0x4E23EC + 3,
        15111004,
        32111011,
        35001001,
        35101009
    };
    for (auto id : maxCdSkills)
    {
        m_mCoolEndTime.Insert(id, cd);
    }

    auto jobCode = GetJobCode();
    if (is_aran_job(jobCode))
    {
        m_mCoolEndTime.Insert(0, cd);
    }


    _ZtlSecurePut_m_usActivePetSkill(0);


    UpdateMonsterBookInfo();
    UpdatePassiveSkillData(true);
}

void CUserLocal::_ctor_0(unsigned long uSN)
{
    //return __sub_0051A9A0(this, nullptr, uSN);
    new(this) CUserLocal(uSN);
}

void CUserLocal::Init()
{
    __sub_00519360(this, nullptr);
}

unsigned char CUserLocal::GetCharacterLevel()
{
    return CWvsContext::GetInstance()->GetCharacterLevel();
}

SecondaryStat& CUserLocal::GetSecondaryStat()
{
    return CWvsContext::GetInstance()->GetSecondaryStat();
}

long CUserLocal::GetJobCode()
{
    if (auto ctx = CWvsContext::GetInstance())
    {
        return ctx->GetCharacterData()->characterStat._ZtlSecureGet_nJob();
    }

    return -1;
}

int32_t CUserLocal::IsLocalUser()
{
    return true;
}

int32_t CUserLocal::IsPreview()
{
    return false;
}

int32_t CUserLocal::IsRemoteUser()
{
    return false;
}

int32_t CUserLocal::IsAdminHide()
{
    return this->m_bAdminHide;
}

int32_t CUserLocal::IsMovingMode()
{
    return this->m_bMovingMode;
}

unsigned char CUserLocal::GetLevel()
{
    return GetCharacterLevel();
}

unsigned long CUserLocal::GetFieldID() const
{
    return CWvsContext::GetInstance()->GetCurFieldID();
}

int32_t CUserLocal::IsSit() const
{
    auto sit = _ZtlSecureGet_m_bSit();
    return sit;
}

int32_t CUserLocal::IsPreparingSkill() const
{
    return this->m_preparingSkill.nSkillID != 0;
}

int32_t CUserLocal::IsRepeatSkill() const
{
    return this->m_repeatSkill.nSkillID != 0;
}

long CUserLocal::GetRepeatSkillPoint() const
{
    return this->m_repeatSkill.nPoint;
}

bool __cdecl is_able_to_move_during_gauge_skill(int nSkillID)
{
    if (nSkillID > GUNSLINGER_GRENADE)
    {
        if (nSkillID > EVAN4_ICE_BREATH)
        {
            if (nSkillID == EVAN7_FIRE_BREATH)
                return true;
            return nSkillID == WH4_WILD_ARROW_BLAST;
        }
        else
        {
            if (nSkillID == EVAN4_ICE_BREATH || nSkillID == NW3_POISON_BOMB)
                return true;
            return nSkillID == TB2_CORKSCREW_BLOW;
        }
    }
    else
    {
        if (nSkillID == GUNSLINGER_GRENADE)
            return true;
        if (nSkillID > BISHOP_BIG_BANG)
        {
            if (nSkillID == MARKSMAN_PIERCING_ARROW)
                return true;
            return nSkillID == BRAWLER_CORKSCREW_BLOW;
        }
        else
        {
            if (nSkillID == BISHOP_BIG_BANG || nSkillID == FP3_BIG_BANG)
                return true;
            return nSkillID == IL3_BIG_BANG;
        }
    }
}

int32_t CUserLocal::IsImmovable()
{
    if ((!this->m_preparingSkill.nSkillID || is_able_to_move_during_gauge_skill(this->m_preparingSkill.nSkillID))
        && !IsSit())
    {
        if (!IsStun()
            && (this->m_nMoveAction & 0xFFFFFFFE) != 0x12
            && !this->m_bKnockBackStun)
        {
            auto nSkillID = this->m_repeatSkill.nSkillID;
            if (!nSkillID || nSkillID == 35121005)
                return false;
        }
    }
    return true;
}

int32_t CUserLocal::IsStun()
{
    return GetSecondaryStat()._ZtlSecureGet_nStun_() != 0;
}

int32_t CUserLocal::IsSealed()
{
    return GetSecondaryStat()._ZtlSecureGet_nSeal_() != 0;
}

int32_t CUserLocal::IsWeakened()
{
    return GetSecondaryStat()._ZtlSecureGet_nWeakness_() != 0;
}

int32_t CUserLocal::IsAttract()
{
    return GetSecondaryStat()._ZtlSecureGet_nAttract_() != 0;
}

int32_t CUserLocal::IsStopPortion()
{
    return GetSecondaryStat()._ZtlSecureGet_nStopPortion_() != 0;
}

int32_t CUserLocal::IsStopMotion()
{
    return GetSecondaryStat()._ZtlSecureGet_nStopMotion_() != 0;
}

void CUserLocal::SetAttractMove(long& nPos_X, long& nPos_Y)
{
    auto& ss = GetSecondaryStat();
    switch (ss._ZtlSecureGet_nAttract_())
    {
    case 1:
        nPos_X = -1;
        break;
    case 2:
        nPos_X = 1;
        break;
    case 3:
        Jump(1);
        break;
    case 4:
        nPos_Y = 1;
        break;
    case 6:
        nPos_X = -1;
        Jump(1);
        break;
    case 7:
        nPos_X = 1;
        Jump(1);
        break;
    default:
        return;
    }
}

int32_t CUserLocal::IsKnockBackStun()
{
    return m_bKnockBackStun;
}

int32_t CUserLocal::IsSkillAvailable()
{
    auto& ss = GetSecondaryStat();
    return !ss._ZtlSecureGet_nStun_() && !ss._ZtlSecureGet_nSeal_() && !ss._ZtlSecureGet_nAttract_();
}

int32_t CUserLocal::HasOnDashSkill()
{
    auto skill = GetOnDashSkill();
    return skill && GetSkillLevel(skill) > 0;
}

long CUserLocal::GetOnDashSkill()
{
    return CUser::GetDashingSkill() != 4321000 ? 0 : 4321001;
}

void CUserLocal::SetMoveAction(long nMA, int32_t bReload)
{
    //__sub_00503CE0(this, nullptr, nMA, bReload);
    CUser::SetMoveAction(nMA, bReload);

    auto ma = m_nMoveAction;
    if (m_pvc)
    {
        GetVecCtrlUser()->SetMoveAction(ma);
    }
}

void CUserLocal::ResetOneTimeAction()
{
    this->m_finalAttack.nSkillID = 0;
    m_nOneTimeAction = -1;
    m_nTamingMobOneTimeAction = -1;
    ClearActionLayer(1);
}

void CUserLocal::SetImpact(long nAttr, long nImpact, int32_t bLeft)
{
    //__sub_00505E10(this, nullptr, nAttr, nImpact, bLeft);
    auto dir = bLeft ? -nImpact : nImpact;
    auto vec = GetVecCtrlUser();
    vec->SetMovePathAttribute(nAttr);
    vec->SetImpactNext(dir, nImpact);
}

void CUserLocal::SetDamaged(long nDamage, long vx, long vy, unsigned long dwObstacleData, CMob* pMob, long nAttackIdx,
                            long nDir, long nPowerGuard, int32_t bCheckHitRemain, int32_t bSendPacket)
{
    __sub_005343C0(this, nullptr, nDamage, vx, vy, dwObstacleData, pMob, nAttackIdx, nDir, nPowerGuard, bCheckHitRemain,
                   bSendPacket);
}

void CUserLocal::ShowCounterDamage(long nDamage)
{
    this->SetDamaged(nDamage, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

long CUserLocal::GetProperBulletPosition(const SKILLENTRY* pSkill, long nSLV, long* pnItemID, long* pnCashItemPos,
                                         long* pnCashItemID)
{
    return __sub_00507310(this, nullptr, pSkill, nSLV, pnItemID, pnCashItemPos, pnCashItemID);
}

long CUserLocal::GetSpiritJavelinItemID(const SKILLENTRY* nItemID, long nSlotCount)
{
    return __sub_00507850(this, nullptr, nItemID, nSlotCount);
}

void CUserLocal::Jump(int32_t bEnforced)
{
    __sub_0050A1D0(this, nullptr, bEnforced);
}

void CUserLocal::FallDown()
{
    __sub_00505D90(this, nullptr);
}

void CUserLocal::ApplyAllSkillLevelUP(long nItemOptionID, long nLevel, long& nSLV)
{
    __sub_005090F0(this, nullptr, nItemOptionID, nLevel, nSLV);
}

void CUserLocal::ApplyEmotionOption(long nItemOptionID, long nLevel)
{
    __sub_005091A0(this, nullptr, nItemOptionID, nLevel);
}

void CUserLocal::ApplyWeaponOption(long nItemOptionID, long nLevel, long& nCriticalProb, long& nCriticalDamage,
                                   long& nTotalDAMr, long& nBossDAMr, long& nIgnoreTargetDEF)
{
    __sub_005092D0(this, nullptr, nItemOptionID, nLevel, nCriticalProb, nCriticalDamage, nTotalDAMr, nBossDAMr,
                   nIgnoreTargetDEF);
}

void CUserLocal::ApplyDefenseOption(long& nDamage)
{
    __sub_0050E950(this, nullptr, nDamage);
}

void CUserLocal::ApplyIgnoreDAMOption(long nItemOptionID, long nLevel, long& nIgnoreDAMProb, long& nIgnoreDAM,
                                      long& nIgnoreDAMrProb, long& nIgnoreDAMr)
{
    __sub_005093B0(this, nullptr, nItemOptionID, nLevel, nIgnoreDAMProb, nIgnoreDAM, nIgnoreDAMrProb, nIgnoreDAMr);
}

void CUserLocal::ApplyInvicibleOption(long nItemOptionID, long nLevel, long& nInvincible_inc, long& nInvincible_prob,
                                      long& nInvincible)
{
    __sub_00509490(this, nullptr, nItemOptionID, nLevel, nInvincible_inc, nInvincible_prob, nInvincible);
}

void CUserLocal::ApplyAccessoryOption(long& dRecoveryHP, long& dRecoveryMP, int32_t bSit)
{
    __sub_0050EDD0(this, nullptr, dRecoveryHP, dRecoveryMP, bSit);
}

void CUserLocal::ApplyRecoveryOption(long nItemOptionID, long nLevel, long& dRecoveryHP, long& dRecoveryMP,
                                     int32_t bSit)
{
    __sub_00509560(this, nullptr, nItemOptionID, nLevel, dRecoveryHP, dRecoveryMP, bSit);
}

void CUserLocal::VerticalJump()
{
    __sub_0050F510(this, nullptr);
}

void CUserLocal::Update()
{
    __sub_00537330(this, nullptr);


    /* auto ctx = CWvsContext::GetInstance();
     //TODO TSecType<unsigned char>::GetData(&TSingleton<CWvsContext>::ms_pInstance->m_nSubGradeCode) & 0x80
     if (ctx->IsUserGM() && m_bMovingMode)
     {
         CUser::Update();
         return;
     }

     m_DualKeyChecker.Update();
     CDualKeyChecker::KeyMsg msg;
     if (m_DualKeyChecker.GetQueuedMsg(msg))
     {
         OnKey(msg.wParam, msg.lParam);
     }


     auto updateTime = get_update_time();
     if (m_bCurActionIsFlyingSkill)
     {
         if (m_nOneTimeAction != 272)
         {
             m_bCurActionIsFlyingSkill = false;
             auto vec = dynamic_cast<CVecCtrlUser*>(m_pvc.op_arrow());
             vec->SetJumpNext();
         }
     }
     else
     {
         m_bCurActionIsFlyingSkill = true;
     }

     auto fieldId = get_field()->GetFieldID();
     auto& sp = StringPool::GetInstance();

     if (fieldId == 103000100 || fieldId == 600010001)
     {
     }

 */
}

void CUserLocal::ClearToolTip()
{
    m_uiToolTip.ClearToolTip();
}

int32_t CUserLocal::PreprocessOnKey(uint32_t& wParam, int32_t& lParam)
{
    //return __sub_005199A0(this, nullptr, wParam, lParam);
    CDualKeyChecker::KeyMsg msg{};
    msg.lParam = lParam;
    msg.wParam = wParam;
    auto v5 = this->m_DualKeyChecker.Check(msg);
    if (v5 == 2)
    {
        if (CUserLocal::ProcessDualKey())
            return 1;
    }
    else if (v5 == 1)
    {
        return 1;
    }
    lParam = msg.lParam;
    wParam = msg.wParam;
    return 0;
}

void CUserLocal::OnKey(uint32_t wParam, int32_t lParam)
{
    if (lParam & 0x80000000)
    {
        // Unset the flag
        lParam &= 0x7FFFFFFF;
    }
    __sub_005369F0(this, nullptr, wParam, lParam);
}

void CUserLocal::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    //__sub_005372C0(this, nullptr, msg, wParam, rx, ry);
    m_uiToolTip.ClearToolTip();
    switch (msg)
    {
    case 201:
        HandleLButtonDown();
        break;
    case 202:
        HandleLButtonClk();
        break;
    case 203:
        HandleLButtonDblClk();
        break;
    case 205:
        HandleRButtonClk();
        break;
    default:
        break;
    }
}

int32_t CUserLocal::OnMouseMove(long rx, long ry)
{
    return __sub_0051B240(this, nullptr, rx, ry);
}

void CUserLocal::OnFeatureChanged()
{
    //__sub_0051D640(this, nullptr);
    auto ctx = TSingleton<CWvsContext>::ms_pInstance;
    auto cd = ctx->GetCharacterData();
    GetAvatarLook().Load(cd->characterStat, ctx->GetRealEquip(), ctx->GetRealEquip2());;
    CAvatar::NotifyAvatarModified(false);
    CUserLocal::SetShoeAttr();
    for (auto& pet : m_apPet)
    {
        if (pet)
            pet->OnValidateStat();
    }
    if (const auto mess = CUIMessenger::GetInstance())
        mess->OnSelfAvatarChanged(this->m_avatarLook);


    const auto unique = CUniqueModeless::GetInstance();
    if (unique
        && unique->IsKindOf(
            &CMiniRoomBaseDlg::ms_RTTI_CMiniRoomBaseDlg))
    {
        dynamic_cast<CMiniRoomBaseDlg*>(unique)->OnSelfAvatarChanged(this->m_avatarLook);
    }
    SetCarryItemEffectForLocal(*cd.op_arrow());
    SetPairCharacterID();
    SetActiveEffectItemForLocal(*cd.op_arrow(), ctx->GetActiveEffectItemID());
    SetFriendPairCharacterID();
    SetMarriagePairCharacterID();
    ValidateItemSkill();
    ValidateSkillBonus();
}

void CUserLocal::OnPacket(long nType, CInPacket& iPacket)
{
    //__sub_005340C0(this, nullptr, nType, iPacket);
    switch (nType)
    {
    case 0xE7:
        this->OnSitResult(iPacket);
        break;
    case 0xE8:
        this->OnEmotion(iPacket);
        break;
    case 0xE9:
        this->OnEffect(iPacket);
        break;
    case 0xEA:
        this->OnTeleport(iPacket);
        break;
    case 0xEC:
        this->OnMesoGive_Succeeded(iPacket);
        break;
    case 0xED:
        this->OnMesoGive_Failed(iPacket);
        break;
    case 0xEE:
        this->OnRandomMesobag_Succeeded(iPacket);
        break;
    case 0xEF:
        this->OnRandomMesobag_Failed(iPacket);
        break;
    case 0xF0:
        this->OnFieldFadeInOut(iPacket);
        break;
    case 0xF1:
        this->OnFieldFadeOutForce(iPacket);
        break;
    case 0xF2:
        this->OnQuestResult(iPacket);
        break;
    case 0xF3:
        this->OnNotifyHPDecByField(iPacket);
        break;
    case 0xF5:
        this->OnBalloonMsg(iPacket);
        break;
    case 0xF6:
        this->OnPlayEventSound(iPacket);
        break;
    case 0xF7:
        this->OnPlayMinigameSound(iPacket);
        break;
    case 0xF8:
        this->OnMakerResult(iPacket);
        break;
    case 0xFA:
        this->OnOpenClassCompetitionPage(iPacket);
        break;
    case 0xFB:
        this->OnOpenUI(iPacket);
        break;
    case 0xFC:
        this->OnOpenUIWithOption(iPacket);
        break;
    case 0xFD:
        this->OnSetDirectionMode(iPacket);
        break;
    case 0xFE:
        this->OnSetStandAloneMode(iPacket);
        break;
    case 0xFF:
        this->OnHireTutor(iPacket);
        break;
    case 0x100:
        this->OnTutorMsg(iPacket);
        break;
    case 0x101:
        this->OnIncComboResponse(iPacket);
        break;
    case 0x102:
        this->OnRandomEmotion(iPacket);
        break;
    case 0x103:
        this->OnResignQuestReturn(iPacket);
        break;
    case 0x104:
        this->OnPassMateName(iPacket);
        break;
    case 0x105:
        this->OnRadioSchedule(iPacket);
        break;
    case 0x106:
        this->OnOpenSkillGuide(iPacket);
        break;
    case 0x107:
        this->OnNoticeMsg(iPacket);
        break;
    case 0x108:
        this->OnChatMsg(iPacket);
        break;
    case 0x109:
        this->OnBuffzoneEffect(iPacket);
        break;
    case 0x10A:
        this->OnGoToCommoditySN(iPacket);
        break;
    case 0x10B:
        this->OnDamageMeter(iPacket);
        break;
    case 0x10C:
        this->OnTimeBombAttack(iPacket);
        break;
    case 0x10D:
        this->OnPassiveMove(iPacket);
        break;
    case 0x10E:
        this->OnFollowCharacterFailed(iPacket);
        break;
    case 0x10F:
        this->OnVengeanceSkillApply(iPacket);
        break;
    case 0x110:
        this->OnExJablinApply(iPacket);
        break;
    case 0x111:
        this->OnAskAPSPEvent(iPacket);
        break;
    case 0x112:
        this->OnQuestGuideResult(iPacket);
        break;
    case 0x113:
        this->OnDeliveryQuest(iPacket);
        break;
    case 0x114:
        this->OnSkillCooltimeSet(iPacket);
        break;
    default:
        break;
    }
}

void CUserLocal::OnTeleport(CInPacket& iPacket)
{
    const auto ctx = CWvsContext::GetInstance();
    if (iPacket.Decode1())
    {
        ctx->SetExclRequestSent(0);
    }

    const auto portalList = CPortalList::GetInstance();
    if (const auto portal = portalList->GetPortal(iPacket.Decode1()))
    {
        m_ptPos.x = portal->ptPos.x;
        m_ptPos.y = portal->ptPos.y;
        TryRegisterTeleport(0, 0, portal->sName.const_c_str(), portal->sTName.const_c_str(), true);
    }
}

void CUserLocal::OnSitResult(CInPacket& iPacket)
{
    __sub_00505E70(this, nullptr, iPacket);
}

void CUserLocal::OnMesoGive_Succeeded(CInPacket& iPacket)
{
    __sub_0050F950(this, nullptr, iPacket);
}

void CUserLocal::OnMesoGive_Failed(CInPacket& iPacket)
{
    __sub_0050D530(this, nullptr, iPacket);
}

void CUserLocal::OnRandomMesobag_Succeeded(CInPacket& iPacket)
{
    __sub_0050FA30(this, nullptr, iPacket);
}

void CUserLocal::OnRandomMesobag_Failed(CInPacket& iPacket)
{
    __sub_0050D560(this, nullptr, iPacket);
}

void CUserLocal::OnFieldFadeInOut(CInPacket& iPacket)
{
    __sub_00505790(this, nullptr, iPacket);
}

void CUserLocal::OnFieldFadeOutForce(CInPacket& iPacket)
{
    __sub_005057F0(this, nullptr, iPacket);
}

void CUserLocal::OnQuestResult(CInPacket& arg0)
{
    __sub_00514080(this, nullptr, arg0);
}

long CUserLocal::OnPetActivated(CInPacket& iPacket)
{
    return __sub_0050FB90(this, nullptr, iPacket);
}

long CUserLocal::PetInterActWithItem(long nItemID)
{
    return __sub_00503DF0(this, nullptr, nItemID);
}

long CUserLocal::PetInterActWithUserAction(long nUserAction, long nPetIndex)
{
    //return __sub_00503EC0(this, nullptr, nUserAction, nPetIndex);
    if (nPetIndex >= 0)
    {
        if (nPetIndex < 3 && m_apPet[nPetIndex])
        {
            m_apPet[nPetIndex]->DoActionByUserAction(nUserAction);
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        for (auto i = 0; i < 3; ++i)
        {
            auto& pet = this->m_apPet[i];
            if (!pet)
                break;
            pet->DoActionByUserAction(nUserAction);
        }
        return 1;
    }
}

void CUserLocal::OnPetEvol(CInPacket& iPacket)
{
    __sub_00503F30(this, nullptr, iPacket);
}

void CUserLocal::OnSummonedCreated(ZRef<CSummoned> pSummoned)
{
    __sub_0050D590(this, nullptr, CreateNakedParam(pSummoned));
}

void CUserLocal::OnSetDead(int32_t bDyingNow)
{
    __sub_00503FC0(this, nullptr, bDyingNow);
}

void CUserLocal::OnRevive()
{
    __sub_00504010(this, nullptr);
}

void CUserLocal::RequestUpgradeTombEffect()
{
    __sub_00508320(this, nullptr);
}

void CUserLocal::OnNotifyHPDecByField(CInPacket& iPacket)
{
    __sub_0050FED0(this, nullptr, iPacket);
}

void CUserLocal::OnUserPetSkillChanged(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::OnBalloonMsg(CInPacket& iPacket)
{
    __sub_0051D780(this, nullptr, iPacket);
}

void CUserLocal::OnPlayEventSound(CInPacket& iPacket)
{
    __sub_00516D60(this, nullptr, iPacket);
}

void CUserLocal::OnPlayMinigameSound(CInPacket& iPacket)
{
    __sub_00516E10(this, nullptr, iPacket);
}

void CUserLocal::OnMakerResult(CInPacket& iPacket)
{
    __sub_005102F0(this, nullptr, iPacket);
}

void CUserLocal::OnOpenClassCompetitionPage(CInPacket& iPacket)
{
    __sub_00505580(this, nullptr, iPacket);
}

void CUserLocal::OnOpenUI(CInPacket& iPacket)
{
    __sub_005055F0(this, nullptr, iPacket);
}

void CUserLocal::OnOpenUIWithOption(CInPacket& iPacket)
{
    __sub_00532300(this, nullptr, iPacket);
}

void CUserLocal::OnSetDirectionMode(CInPacket& iPacket)
{
    __sub_005054F0(this, nullptr, iPacket);
}

void CUserLocal::OnSetStandAloneMode(CInPacket& iPacket)
{
    __sub_00505550(this, nullptr, iPacket);
}

void CUserLocal::OnHireTutor(CInPacket& iPacket)
{
    __sub_0050E560(this, nullptr, iPacket);
}

void CUserLocal::OnTutorMsg(CInPacket& iPacket)
{
    __sub_00516F60(this, nullptr, iPacket);
}

void CUserLocal::OnDamageMeter(CInPacket& iPacket)
{
    __sub_00505620(this, nullptr, iPacket);
}

void CUserLocal::OnTimeBombAttack(CInPacket& iPacket)
{
    __sub_005323F0(this, nullptr, iPacket);
}

void CUserLocal::SetCarryItemEffectForLocal(CharacterData& cd)
{
    //TODO(game) __sub_005083D0(this, nullptr, cd);
}

void CUserLocal::SetActiveEffectItemForLocal(CharacterData& cd, long nActiveEffectItemID)
{
    __sub_005084C0(this, nullptr, cd, nActiveEffectItemID);
}

void CUserLocal::SetActiveEffectItemForFirstLocalUserLoading(CharacterData& cd)
{
    __sub_005083D0(this, nullptr, cd);
}

void CUserLocal::SetPairCharacterID()
{
    //TODO(game) __sub_00508680(this, nullptr);
}

void CUserLocal::SetFriendPairCharacterID()
{
    //TODO(game) __sub_00508810(this, nullptr);
}

void CUserLocal::SetMarriagePairCharacterID()
{
    //TODO(game) __sub_005089B0(this, nullptr);
}

void CUserLocal::SetNewYearCardPairCharacterID()
{
    //TODO(game) __sub_00508AF0(this, nullptr);
}

void CUserLocal::OnJoystickButton(uint32_t wButton, unsigned long dwData)
{
    __sub_00536550(this, nullptr, wButton, dwData);
}

long CUserLocal::FindHitSummonedInRect(const tagRECT& rc, CSummoned** apSummoned, long nMaxCount)
{
    //return __sub_00506100(this, nullptr, rc, apSummoned, nMaxCount);
    auto i = 0;
    for (auto& summ : m_lSummoned)
    {
        if (i >= nMaxCount)
            break;

        tagRECT bodyRc{};
        tagRECT intersectRc{};
        summ->GetBodyRect(bodyRc, true);
        if (!IsRectEmpty(&bodyRc) && IntersectRect(&intersectRc, &bodyRc, &rc))
        {
            apSummoned[++i] = summ.op_arrow();
        }
    }

    return i;
}

void CUserLocal::SetSecondaryStatChangedPoint(unsigned char bSN)
{
    GetVecCtrlUser()->SetSecondaryStatChangedPoint(bSN);
}

void CUserLocal::RedrawGuildNameTag()
{
    auto ctx = CWvsContext::GetInstance();

    m_sGuildName = ctx->GetGuildName();

    m_nGuildMarkBg = ctx->GetGuildMarkBg();
    m_nGuildMark = ctx->GetGuildMark();
    m_nGuildMarkBgColor = ctx->GetGuildMarkBgColor();
    m_nGuildMarkColor = ctx->GetGuildMarkColor();
    DrawNameTags();
}

int32_t CUserLocal::IsWeaponDisabled()
{
    //return __sub_0050D700(this, nullptr);
    auto ctx = CWvsContext::GetInstance();
    auto cd = ctx->GetCharacterData();
    auto& sp = StringPool::GetInstance();

    auto t = timeGetTime();
    if (!cd->aEquipped[11] && !CanUseBareHand())
    {
        if (t - m_tLastWarnUsingDisabledWeapon > 2000)
        {
            auto warnMsg = sp.GetString(0x18b5);
            CHATLOG_ADD(warnMsg, 0xC);
            m_tLastWarnUsingDisabledWeapon = t;
        }

        return true;
    }

    if (!ctx->GetRealEquip()[11] && !CanUseBareHand())
    {
        if (t - m_tLastWarnUsingDisabledWeapon > 2000)
        {
            auto warnMsg = sp.GetString(0xB4B);
            CHATLOG_ADD(warnMsg, 0xC);
            m_tLastWarnUsingDisabledWeapon = t;
        }

        return true;
    }

    return false;
}

int32_t CUserLocal::IsKeyDownSkillUsing() const
{
    return m_bKeyDown;
}

int32_t CUserLocal::IsDashing()
{
    //return __sub_00160050(this, nullptr);
    auto& ss = GetSecondaryStat();
    return ss.aTemporaryStat[1]->IsActivated();
}

int32_t CUserLocal::IsDashing2()
{
    //return __sub_00160050(this, nullptr);
    auto& ss = GetSecondaryStat();
    return ss.aTemporaryStat[1]->IsActivated() && GetDashingSkill() == 4321000;
}

void CUserLocal::GetUpFromPortableChair(int32_t bOnInit)
{
    //__sub_00506050(this, nullptr, bOnInit);
    _ZtlSecurePut_m_bSit(false);
    _ZtlSecurePut_m_nPortableChairID(0);
    SetChairHeight(0);
    this->_ZtlSecurePut_m_nSittingTime(0);
    m_bPortableChairStatSetSent = false;
    //TODO(game) SetActivePortableChair(0);
    if (!bOnInit)
    {
        GetVecCtrlUser()->SetMovePathAttribute(10);
    }
}

void CUserLocal::OnTemporaryStatChanged(MY_UINT128 uFlag, long tDelay, int32_t bInit)
{
    //__sub_00505320(this, nullptr, CreateNakedParam(uFlag), tDelay, bInit);
    auto ctx = CWvsContext::GetInstance();
    auto& secondaryStat = GetSecondaryStat();

    if (uFlag.checkFlag(CTS_ENERGY_CHARGED))
    {
        auto& tempStat = secondaryStat.aTemporaryStat[0];
        ZFatalSectionGuard lock(tempStat->GetLock());

        if (auto value = tempStat->GetValue())
        {
            ctx->UI_Open(0x13, 0xFFFFFFFF);
            auto maxValue = tempStat->GetMaxValue();
            CUIEnergyBar::GetInstance()->SetEnergy(value, maxValue);
        }
    }

    if (uFlag.checkFlag(CTS_RIDE_VEHICLE))
    {
        this->m_nVehicleValid = this->m_nVehicleValid - 1 < 0 ? 0 : this->m_nVehicleValid - 1;
    }

    CUser::OnTemporaryStatChanged(uFlag, tDelay, bInit);
}

void CUserLocal::OnResignQuestReturn(CInPacket& iPacket)
{
    __sub_00505720(this, nullptr, iPacket);
}

void CUserLocal::OnPassMateName(CInPacket& iPacket)
{
    __sub_00518260(this, nullptr, iPacket);
}

void __cdecl CUserLocal::SetMonsterBookCover(long nCardID)
{
    CWvsContext::GetInstance()->GetCharacterData()->nMonsterBookCoverID = nCardID;
}

long __cdecl CUserLocal::GetMonsterBookCover()
{
    return CWvsContext::GetInstance()->GetCharacterData()->nMonsterBookCoverID;
}

void __cdecl CUserLocal::SetMonsterCardCount(long nCardID, long nCardCount)
{
    auto cd = CWvsContext::GetInstance()->GetCharacterData();
    CMonsterBookAccessor::SetCount(*cd.op_arrow(), nCardID, nCardCount);
}

long __cdecl CUserLocal::GetMonsterCardCount(long nCardID)
{
    auto cd = CWvsContext::GetInstance()->GetCharacterData();
    return CMonsterBookAccessor::GetCount(*cd.op_arrow(), nCardID);
}

int32_t __cdecl CUserLocal::IsMonsterCardFull(long arg0)
{
    auto cd = CWvsContext::GetInstance()->GetCharacterData();
    return CMonsterBookAccessor::IsCardFull(*cd.op_arrow(), arg0);
}

void __cdecl CUserLocal::UpdateMonsterBookInfo()
{
    auto cd = CWvsContext::GetInstance()->GetCharacterData();
    CMonsterBookAccessor::UpdateInfo(*cd.op_arrow());
}

ZRef<MonsterBookInfo> __cdecl CUserLocal::GetMonsterBookInfo()
{
    auto cd = CWvsContext::GetInstance()->GetCharacterData();
    return CMonsterBookAccessor::GetInfo(*cd.op_arrow());
}

long CUserLocal::GetMonsterCardCheckListSize(long nGrade)
{
    long size = 0;
    m_mMonsterCardCheckListSize.GetAt(nGrade, &size);
    return size;
}

void CUserLocal::SetMonsterCardCheckList(long nCardID, int32_t bRemove)
{
    __sub_0050E440(this, nullptr, nCardID, bRemove);
}

void CUserLocal::FollowCharacterFailedMsg(long nError, unsigned long dwDriverID)
{
    __sub_00510C70(this, nullptr, nError, dwDriverID);
}

void CUserLocal::OnFollowCharacterFailed(CInPacket& iPacket)
{
    auto err = (int)iPacket.Decode4();
    auto driverId = iPacket.Decode4();
    if (err == -2)
    {
        TSingleton<CWvsContext>::ms_pInstance->SetOldDriverID(0);
    }
    else if (err >= 0)
    {
        FollowCharacterFailedMsg(err, driverId);
    }
}

void CUserLocal::SetPassiveTransferField(int32_t arg0)
{
    m_bTryPassiveTransferField = arg0;
}

int32_t CUserLocal::IsPassiveTransferField() const
{
    return m_bTryPassiveTransferField;
}

void CUserLocal::OnVengeanceSkillApply(CInPacket& iPacket)
{
    __sub_00509B10(this, nullptr, iPacket);
}

void CUserLocal::OnExJablinApply(CInPacket& iPacket)
{
    __sub_005034E0(this, nullptr, iPacket);
}

void CUserLocal::OnGoToCommoditySN(CInPacket& iPacket)
{
    __sub_00505760(this, nullptr, iPacket);
}

void CUserLocal::OnAskAPSPEvent(CInPacket& iPacket)
{
    __sub_0050F0E0(this, nullptr, iPacket);
}

void CUserLocal::OnDeliveryQuest(CInPacket& iPacket)
{
    __sub_0050EF60(this, nullptr, iPacket);
}

const ZRef<CAttrShoe> CUserLocal::GetShoeAttr()
{
    //return __sub_0050A840(this, nullptr);
    auto ctx = CWvsContext::GetInstance();
    if (ctx->IsManagerJob())
    {
        return m_pAttrShoe;
    }

    auto field = get_field();
    if (field->GetOption() & 2 == 0)
    {
        return m_pAttrShoe;
    }


    auto vec = GetVecCtrlUser();
    auto isFlying = vec->IsUserFlying();
    ZRef attrField(new CAttrShoe(isFlying), true);
    return attrField;
}

long CUserLocal::OnResolveMoveAction(long nInputX, long nInputY, long nCurMoveAction, const CVecCtrl* pvc)
{
    //return __sub_00508030(this, nullptr, nInputX, nInputY, nCurMoveAction, pvc);
    if (nInputX || nInputY)
    {
        auto portalList = CPortalList::GetInstance();
        auto pos = GetPos();
        auto hidden = portalList->FindPortal_Hidden(pos.x, pos.y, 100);
        portalList->SetHiddenPortal(hidden);
    }


    auto flag = true;
    auto cd = CWvsContext::GetInstance()->GetCharacterData();
    auto hp = cd->characterStat._ZtlSecureGet_nHP();


    auto vec = GetVecCtrlUser();
    if (IsDead() && hp)
    {
        if (nCurMoveAction & 0xFFFFFFFE != 4)
        {
            vec->raw_Move(m_ptRevive.x, m_ptRevive.y);
            vec->SetForcedFlush();
        }
        return nCurMoveAction & 1 | 4;
    }

    if (!hp)
    {
        return nCurMoveAction & 1 | 0x12;
    }
    else if (IsSit())
    {
        return nCurMoveAction & 1 | 0x14;
    }


    if (m_bFly && (pvc->GetFoothold() || pvc->IsOnLadder() || pvc->IsOnRope()))
        m_bFly = false;

    return CUser::OnResolveMoveAction(nInputX, nInputY, nCurMoveAction, pvc);
}

void CUserLocal::SetShoeAttr()
{
    __sub_0050A990(this, nullptr);
}

int32_t CUserLocal::UseFuncKeyMapped(int32_t lParam)
{
    return __sub_00532E20(this, nullptr, lParam);
}

int32_t CUserLocal::UseFuncKeyMappedUpKey(int32_t lParam)
{
    return __sub_00507F00(this, nullptr, lParam);
}

void CUserLocal::CheckPortal_Collision()
{
    __sub_00519A10(this, nullptr);
}

void CUserLocal::CheckReactor_Collision()
{
    __sub_00503D20(this, nullptr);
}

void CUserLocal::OnCollisionCustomImpact(double vx, double vy)
{
    __sub_0050B750(this, nullptr, vx, vy);
}

void CUserLocal::HandleUpKeyDown()
{
    __sub_00519E50(this, nullptr);
}

void CUserLocal::HandleCtrlKeyDown()
{
    //__sub_005326B0(this, nullptr);
    auto ctx = CWvsContext::GetInstance();
    if (!ctx->CanSendExclRequest(200))
        return;

    if (IsAttract() || IsPreparingSkill())
        return;
    auto& ss = GetSecondaryStat();
    if (IsImmovable())
    {
        //TODO(game)
        switch (m_repeatSkill.nSkillID)
        {
        case MECH3_MECH_SIEGE_MODE:
        case MECH4_MECH_SIEGE_MODE:
            if (this->m_repeatSkill.bDone)
                return;
            this->m_repeatSkill.nPoint = 1;
            return;
        default:
            return;
        case MECH4_GIANT_ROBOT_SG88:
            break;
        }

        // Giant robot
        auto cd = ctx->GetCharacterData();
        const SKILLENTRY* pSkill{};
        auto slvl = CSkillInfo::GetInstance()->GetSkillLevel(*cd.op_arrow(), MECH4_GIANT_ROBOT_SG88, &pSkill);
        if (pSkill)
        {
            auto& lvlData = pSkill->GetLevelData(slvl);
            m_repeatSkill.nPoint += lvlData._ZtlSecureGet_nX();
            m_repeatSkill.bKeyDown = true;
        }

        return;
    }
    if (this->m_repeatSkill.nSkillID == MECH4_MECH_MISSILE_TANK && !this->m_repeatSkill.bDone)
    {
        m_repeatSkill.nPoint = 1;
        return;
    }


    if (CheckRidingVehicleExceptMechanic())
        return;
    if (IsMonsterMorphed() || m_nGhostIndex)
    {
        ctx->AddChatMorphedMsg();
        return;
    }
    if (IsAttackableMorphed())
    {
        auto job = GetJobCode();
        auto noviceSkill = get_novice_skill_as_race(1066, job);
        DoActiveSkill(noviceSkill, 0, nullptr);
        return;
    }
    if (IsHideMorphed())
    {
        SendSkillCancelRequest(BRAWLER_OAK_BARREL);
        return;
    }
    if (IsDashing())
    {
        SendSkillCancelRequest(GetDashingSkill());
        if (HasOnDashSkill())
        {
            DoActiveSkill(GetOnDashSkill(), 0, nullptr);
            return;
        }
    }
    if (GetCurrentAction(nullptr) == 188
        && IsOnFoothold()
        && GetActionInfo().nCurFrameIndex > 1
        && GetSkillLevel(DB3_TORNADO_SPIN_ATTACK) > 19
        && GetSkillLevel(DB4_FLYING_ASSAULTER) > 9)
    {
        ResetOneTimeAction();
        PrepareActionLayer(6, 100, 0);
        this->m_rush.bValid = 0;
        this->m_rush.tCoolTimeEnd = get_update_time();
        DoActiveSkill(DB3_TORNADO_SPIN_ATTACK, 0, 0);
    }

    auto field = get_field();
    auto reactor = CReactorPool::GetInstance();
    auto job = GetJobCode();
    if (!field->BasicActionAttack() && !reactor->FindHitReactor())
    {
        if (IsDarkSight() && GetSkillLevel(NW2_VANISH) <= 0
            && GetSkillLevel(DB4_ADVANCED_DARK_SIGHT) <= 0)
        {
            auto ds = is_cygnus_job(job) ? NW1_DARK_SIGHT : THIEF_DARK_SIGHT;
            auto skill = CSkillInfo::GetInstance()->GetSkill(ds);
            ShowSkillEffect(skill, 1, 6, 0, 0x7FFFFFFF, nullptr);
            play_skill_sound(ds, SE_SKILL_USE, GetSkillLevel(ds));
            SendSkillCancelRequest(ds);
            return;
        }

        if (IsWeaponDisabled())
            return;

        if (is_shooting_weapon(m_nWeaponItemID) && (is_mechanic_job(job) ||
            GetProperBulletPosition(nullptr, 0, nullptr, nullptr, nullptr)
            || ss._ZtlSecureGet_nSoulArrow_()
            || ss._ZtlSecureGet_nSpiritJavelin_()) && GetMoveAction() & 0xFFFFFFFE != 0xA)
        {
            long nShootRange0{};
            if (!TryDoingMeleeAttack(nullptr, 0, &nShootRange0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0))
                TryDoingShootAttack(nullptr, 0, nShootRange0, false, 0, 0);
        }
        else
        {
            TryDoingMeleeAttack(nullptr, 0, nullptr, 0, 0, 0, nullptr, 0, 0, 0, 0, 0);
        }
    }
}

void CUserLocal::HandleXKeyDown()
{
    __sub_0050F6D0(this, nullptr);
}

void CUserLocal::HandleLButtonDown()
{
    __sub_00503D80(this, nullptr);
}

void CUserLocal::HandleLButtonClk()
{
    __sub_00533920(this, nullptr);
}

void CUserLocal::HandleLButtonDblClk()
{
    __sub_00533B90(this, nullptr);
}

void CUserLocal::HandleRButtonClk()
{
    __sub_00511A60(this, nullptr);
}

long CUserLocal::TryDoingNormalAttack(const ZArray<tagRECT>& arcArea, long& tDelay, int32_t bHitReactor)
{
    return __sub_005123C0(this, nullptr, arcArea, tDelay, bHitReactor);
}

int32_t CUserLocal::TryDoingMeleeAttack(const SKILLENTRY* pSkill, long nSLV, long* pnShootRange0,
                                        long nSerialAttackSkillID, unsigned long dwLastAttackMobID, long tKeyDown,
                                        CGrenade* pGrenade, long nReservedSkillID, int32_t bTimeBombAttack,
                                        long nTimeBombX, long nTimeBombY, long nShootSkillID)
{
    return __sub_0051E780(this, nullptr, pSkill, nSLV, pnShootRange0, nSerialAttackSkillID, dwLastAttackMobID, tKeyDown,
                          pGrenade, nReservedSkillID, bTimeBombAttack, nTimeBombX, nTimeBombY, nShootSkillID);
}

int32_t CUserLocal::TryDoingShootAttack(const SKILLENTRY* pSkill, long nSLV, long nShootRange0, int32_t bMortalBlow,
                                        long tKeyDown, uint32_t nRandForMortalBlowAction)
{
    return __sub_00525A00(this, nullptr, pSkill, nSLV, nShootRange0, bMortalBlow, tKeyDown, nRandForMortalBlowAction);
}

int32_t CUserLocal::TryDoingMagicAttack(const SKILLENTRY* pSkill, long nSLV, long nReduceCount, long tKeyDown)
{
    return __sub_0052A240(this, nullptr, pSkill, nSLV, nReduceCount, tKeyDown);
}

int32_t CUserLocal::TryDoingBodyAttack(const SKILLENTRY* pSkill, long nSLV, CMob* pMob, tagPOINT ptHit)
{
    return __sub_00530710(this, nullptr, pSkill, nSLV, pMob, CreateNakedParam(ptHit));
}

int32_t CUserLocal::TryDoingWings(const SKILLENTRY* pSkill, long nSLV)
{
    return __sub_0050D3E0(this, nullptr, pSkill, nSLV);
}

int32_t CUserLocal::TryDoingMonsterMagnet(const SKILLENTRY* pSkill, long nSLV, long nShootRange0)
{
    return __sub_00512F90(this, nullptr, pSkill, nSLV, nShootRange0);
}

int32_t CUserLocal::TryRegisterTeleport(const SKILLENTRY* pSkill, long nSLV, const char* sPortalName,
                                        const char* sTargetPortalName, int32_t bForced)
{
    return __sub_00513690(this, nullptr, pSkill, nSLV, sPortalName, sTargetPortalName, bForced);
}

void CUserLocal::TryRegisterFinalAttack(const CharacterData& cd, const ZArray<ZArray<long>>& a1, long nSkillID,
                                        long tDelay)
{
    __sub_00504E00(this, nullptr, cd, a1, nSkillID, tDelay);
}

void CUserLocal::TryRegisterSerialAttack(long nSkillID, long tDelay, unsigned long dwMobID)
{
    __sub_00503480(this, nullptr, nSkillID, tDelay, dwMobID);
}

void CUserLocal::TryRegisterSparkAttack(ATTACKINFO& a, long tReserve)
{
    __sub_0050D370(this, nullptr, a, tReserve);
}

int32_t CUserLocal::TryDoingSmoothingMovingShootAttackPrepare(const SKILLENTRY* pSkill, long nSLV, long nShootRange0)
{
    return __sub_00512F90(this, nullptr, pSkill, nSLV, nShootRange0);
}

void CUserLocal::TryDoingSmoothingMovingShootAttack()
{
    __sub_0052DE70(this, nullptr);
}

void CUserLocal::TryLeaveDirectionMode(long tCur)
{
    if (this->m_bAfterLeaveDirectionMode)
    {
        if (tCur - this->m_tAfterLeaveDirectionMode >= 0)
        {
            this->m_bAfterLeaveDirectionMode = 0;
            SetDirectionMode(false);
        }
    }
}

void CUserLocal::SetDirectionMode(int32_t bSet)
{
    __sub_00504240(this, nullptr, bSet);
}

int32_t CUserLocal::DoActiveSkill(long nSkillID, uint32_t nScanCode, long* pnConsumeCheck)
{
    return __sub_005445B0(this, nullptr, nSkillID, nScanCode, pnConsumeCheck);
}

long CUserLocal::DoActiveSkill_StatChange_ByPet(long arg0, ZXString<char> arg1, int32_t arg2)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::MoveToPortal(const char* sPortalName)
{
    __sub_0012A1F0(this, nullptr, sPortalName);
}

void CUserLocal::SitOnPortableChair(long nSeatID)
{
    _ZtlSecurePut_m_bSit(true);
    _ZtlSecurePut_m_nPortableChairID(nSeatID);
    _ZtlSecurePut_m_nSittingTime(timeGetTime());
    m_bPortableChairStatSetSent = false;
    SetChairHeight(nSeatID);
}

long CUserLocal::GetPortableChairSittingTime()
{
    return __sub_00348E50(this, nullptr);
}

void CUserLocal::ResetPortableChairSittingtime()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUserLocal::GetPortableChairID()
{
    //return __sub_00348E50(this, nullptr);
    return _ZtlSecureGet_m_nPortableChairID();
}

int32_t CUserLocal::SetPortableChairStatSetSent()
{
    return __sub_00504FC0(this, nullptr);
}

void CUserLocal::SetPortableChairStatSetSent_(int32_t arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::GetPortableChairStatSetSent()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

uint16_t CUserLocal::GetPetSkill()
{
    return __sub_0059E6F0(this, nullptr);
}

void CUserLocal::UpdatePetSkill()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::TryConsumePetHP(long nDamage, int32_t bForce, unsigned char bBuffSkill)
{
    __sub_0050D8A0(this, nullptr, nDamage, bForce, bBuffSkill);
}

void CUserLocal::TryConsumePetMP(long nDamage, int32_t bForce, unsigned char bBuffSkill)
{
    __sub_0050DBC0(this, nullptr, nDamage, bForce, bBuffSkill);
}

void CUserLocal::SetConsumePetMP(int32_t arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::OnKeyDownSkillEnd()
{
    __sub_005301B0(this, nullptr);
}

int32_t CUserLocal::SendSkillUseRequest(const SKILLENTRY* pSkill, long nSLV, unsigned long dwAffectedMemberBitmap,
                                        long nMobCount, unsigned long* adwMobID, long nSpiritJavelinItemID,
                                        long nPelletPOS)
{
    return __sub_0053E930(this, nullptr, pSkill, nSLV, dwAffectedMemberBitmap, nMobCount, adwMobID,
                          nSpiritJavelinItemID, nPelletPOS);
}

void CUserLocal::SendSkillCancelRequest(long skillId)
{
    auto skillId_1 = skillId;
    switch (skillId)
    {
    case ADVANCED_DARK_AURA:
        skillId_1 = DARK_AURA;
        break;
    case ADVANCED_BLUE_AURA:
        skillId_1 = BLUE_AURA;
        break;
    case ADVANCED_YELLOW_AURA:
        skillId_1 = YELLOW_AURA;
        break;
    default:
        break;
    }
    if (this->m_preparingSkill.nSkillID == skillId_1)
    {
        this->m_preparingSkill.nSkillID = 0;
        this->m_preparingSkill.tStart = 0;
        this->m_preparingSkill.tAttackStartTime = 0;
        this->m_preparingSkill.bKeyDown = 0;
    }
    if (skillId_1 == WH2_JAGUAROSHI)
        ResetSwallow();
    COutPacket pkt(Cp::Userskillcancelrequest);
    pkt.Encode4(skillId);
    SendPacket(pkt);
    if (skillId_1 > EVANBEGINNER_MONSTER_RIDER)
    {
        if (skillId_1 != CITIZEN_MONSTER_RIDING && skillId_1 != WH1_JAGUAR_RIDER && skillId_1 != MECH1_MECH_PROTOTYPE)
            goto LABEL_26;
    }
    else if (skillId_1 != EVANBEGINNER_MONSTER_RIDER)
    {
        if (skillId_1 > NOBLESSE_MONSTER_RIDER)
        {
            if (skillId_1 != LEGEND_MONSTER_RIDER)
                goto LABEL_26;
        }
        else if (skillId_1 != NOBLESSE_MONSTER_RIDER
            && skillId_1 != BEGINNER_MONSTER_RIDER
            && skillId_1 != CORSAIR_BATTLESHIP)
        {
            goto LABEL_26;
        }
    }
    if (!this->m_nVehicleValid)
        this->m_tLastVehicleValidSetting = get_update_time();
    ++this->m_nVehicleValid;
LABEL_26:
    if (is_keydown_skill(skillId_1))
    {
        if (skillId_1 != BOWMASTER_HURRICANE
            && skillId_1 != CORSAIR_RAPID_FIRE
            && skillId_1 != WA3_HURRICANE
            && skillId_1 != MECH1_FLAME_LAUNCHER
            && skillId_1 != MECH2_ENHANCED_FLAME_LAUNCHER
            && skillId_1 != WH4_WILD_ARROW_BLAST)
        {
            auto anim = CAnimationDisplayer::GetInstance();
            anim->RemovePrepareAnimation(this->m_dwCharacterId);
            if (this->m_pDragon)
            {
                m_nMoveAction = this->m_nMoveAction;
                auto MoveAction = m_pDragon->GetMoveAction();
                m_pDragon->SetMoveAction(MoveAction ^ (m_nMoveAction ^ MoveAction) & 1, 0);
                m_pDragon->SetOneTimeAction(0);
            }
        }
    }
}

void CUserLocal::SendSkillEffectRequest(long nAttr, long nImpact, int32_t bLeft)
{
    __sub_00505E10(this, nullptr, nAttr, nImpact, bLeft);
}

void CUserLocal::ViewAutoQuestAlert()
{
    __sub_00516600(this, nullptr);
}

void CUserLocal::EraseAutoQuestAlert()
{
    __sub_00505060(this, nullptr);
}

void CUserLocal::ShowAutoStartQuestList()
{
    __sub_0050FEF0(this, nullptr);
}

void CUserLocal::GetDCRect(tagRECT& rc)
{
    __sub_005050A0(this, nullptr, rc);
}

ZXString<char> CUserLocal::GetMateNameByQuestID(uint16_t arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::CanUseBareHand()
{
    //return __sub_00504060(this, nullptr);
    return GetJobCode() % 1000 / 100 == 5;
}

int32_t CUserLocal::IsVehicleValid()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::CheckRidingVehicle(int32_t bJaguarCheckPass)
{
    return __sub_0050E100(this, nullptr, bJaguarCheckPass);
}

int32_t CUserLocal::CheckRidingVehicleExceptMechanic()
{
    //return __sub_00160050(this, nullptr);
    return false;
}

int32_t CUserLocal::IsActiveSkillReplacedByMeleeAttack()
{
    return __sub_00160050(this, nullptr);
}

long CUserLocal::GetSkillLevel(long nSkillID)
{
    return __sub_00508F60(this, nullptr, nSkillID);
}

void CUserLocal::TalkToNpc(ZRef<CNpc> pNpc)
{
    __sub_005321F0(this, nullptr, CreateNakedParam(pNpc));
}

int32_t CUserLocal::IsDoingRocketBooster()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::ApplyMechanicMode(long nOldMechanicMode, long nNewMechanicMode)
{
    __sub_005034F0(this, nullptr, nOldMechanicMode, nNewMechanicMode);
}

void CUserLocal::SendRepeatEffectRemoveRequest()
{
    __sub_00509D70(this, nullptr);
}

int32_t CUserLocal::DoActiveSkill_MeleeAttack(const SKILLENTRY* pSkill, long nSLV)
{
    if (IsWeaponDisabled())
        return 0;
    if ((this->m_nMoveAction & 0xFFFFFFFE) == 0xA && (!pSkill || pSkill->nSkillID != ARAN3_ROLLING_SPIN))
        return 0;
    if (pSkill)
    {
        auto& ss = GetSecondaryStat();
        auto wt = get_weapon_type(m_nWeaponItemID);
        auto sid = pSkill->nSkillID;

        //TODO
    }

    m_bReplacedByMeleeAttack = TryDoingMeleeAttack(pSkill, nSLV, nullptr, 0, 0, 0, nullptr, 0, 0, 0LL, 0, 0);
    return m_bReplacedByMeleeAttack;
}

int32_t CUserLocal::DoActiveSkill_ShootAttack(const SKILLENTRY* pSkill, long nSLV)
{
    if (IsWeaponDisabled())
        return 0;
    auto skillID = pSkill->nSkillID;
    auto& ss = GetSecondaryStat();
    auto vec = GetVecCtrlUser();
    if (skillID >= WA3_WIND_PIERCING
        && skillID <= WA3_WIND_SHOT
        && ss._ZtlSecureGet_nMorph_() != WA3_EAGLE_EYE)
    {
        auto str = _GetStr(0xDF3);
        CHATLOG_ADD(str, 0xCu);
        return 0;
    }

    auto v10 = 0;
    if (skillID > TB3_SHARK_WAVE)
    {
        if (skillID == ARAN2_COMBO_SMASH || skillID == ARAN3_COMBO_FENRIR)
            goto LABEL_63;
        v10 = skillID == ARAN4_COMBO_TEMPEST;
    }
    else
    {
        if (skillID == TB3_SHARK_WAVE)
            goto LABEL_63;
        if (skillID <= BUCCANEER_ENERGY_ORB)
        {
            if (skillID == BUCCANEER_ENERGY_ORB)
            {
                if (IsOnLadderOrRope())
                    return 0;
                if (!ss[0]->IsActivated())
                {
                    auto str = _GetStr(0xDF2);
                    CHATLOG_ADD(str, 0xCu);
                    return 0;
                }
                return TryDoingShootAttack(pSkill, nSLV, 0, 0, 0, 0);
            }
            if (skillID != NIGHTLORD_TAUNT)
            {
                v10 = skillID == SHADOWER_TAUNT;
                goto LABEL_23;
            }
        LABEL_63:
            if (vec->GetLadderOrRope())
                return 0;
            return TryDoingShootAttack(pSkill, nSLV, 0, 0, 0, 0);
        }
        v10 = skillID == DW2_SOUL_BLADE;
    }
LABEL_23:
    if (v10)
        goto LABEL_63;

    auto job_category = get_job_category(skillID / 10000);
    auto weapon_type = get_weapon_type(this->m_nWeaponItemID);
    auto v15 = 0;
    if (job_category != 3)
    {
        if (job_category != 4)
        {
            if (job_category != 5 || weapon_type != 49)
            {
            LABEL_28:
                auto str = _GetStr(0x1127u);
                CHATLOG_ADD(str, 0xCu);
                return 0;
            }
            goto LABEL_34;
        }
        v15 = weapon_type == 47;
        goto LABEL_27;
    }
    if (weapon_type != 45)
    {
        v15 = weapon_type == 46;
    LABEL_27:
        if (!v15)
            goto LABEL_28;
    }
LABEL_34:
    if (is_shooting_weapon(this->m_nWeaponItemID)
        && ((this->m_nMoveAction & 0xFFFFFFFE) != 0xA || IsRidingWildHunterJaguar())
        && (GetProperBulletPosition(pSkill, nSLV, nullptr, nullptr, nullptr)
            || is_shoot_skill_not_consuming_bullet(skillID)
            || ss._ZtlSecureGet_nSoulArrow_()
            || ss._ZtlSecureGet_nSpiritJavelin_()))
    {
        long nShootRange0 = 0;
        if (is_shoot_skill_not_switched_to_melee_attack(nSLV))
        {
            if (skillID != PIRATE_DOUBLE_SHOT && skillID != OUTLAW_BURST_FIRE)
                return TryDoingShootAttack(pSkill, nSLV, 0, 0, 0, 0);
            if (!TryDoingMeleeAttack(nullptr, 0, &nShootRange0, 0, 0, 0, nullptr, 0, 0LL, 0, 0, skillID))
                return TryDoingShootAttack(pSkill, nSLV, nShootRange0, 0, 0, 0);
        }
        else if (!TryDoingMeleeAttack(nullptr, 0, &nShootRange0, 0, 0, 0, nullptr, skillID, 0LL, 0, 0, 0))
        {
            return TryDoingShootAttack(pSkill, nSLV, nShootRange0, 0, 0, 0);
        }
    }
    else if (this->m_nRidingVehicleID != 1932016)
    {
        if (!ss._ZtlSecureGet_nSoulArrow_()
            && !ss._ZtlSecureGet_nSpiritJavelin_()
            && !GetProperBulletPosition(pSkill, nSLV, nullptr, nullptr, nullptr)
            && GetOneTimeAction() <= -1)
        {
            if (job_category == 3)
            {
                auto str = _GetStr(0xB4Fu);
                CHATLOG_ADD(str, 0xCu);
            }
            else if (job_category == 4)
            {
                auto str = _GetStr(0xB50u);
                CHATLOG_ADD(str, 0xCu);
            }
            else
            {
                auto str = _GetStr(0xB49u);
                CHATLOG_ADD(str, 0xCu);
            }
        }
        TryDoingMeleeAttack(nullptr, 0, nullptr, 0, 0, 0, nullptr, 0, 0LL, 0, 0, 0);
    }
    return 0;
}

int32_t CUserLocal::DoActiveSkill_VehicleShootAttack(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_MagicAttack(const SKILLENTRY* pSkill, long nSLV)
{
    if (!IsWeaponDisabled())
    {
        if ((this->m_nMoveAction & 0xFFFFFFFE) != 0xA)
            return CUserLocal::TryDoingMagicAttack(pSkill, nSLV, 0, 0);
        CUserLocal::TryDoingMeleeAttack(nullptr, 0, nullptr, 0, 0, 0, nullptr, 0, 0LL, 0, 0, 0);
    }
    return 0;
}

int32_t CUserLocal::DoActiveSkill_WeaponBooster(const SKILLENTRY* pSkill, long nSLV, long nWT1, long nWT2, long nWT3,
                                                long nWT4)
{
    return __sub_0053F960(this, nullptr, pSkill, nSLV, nWT1, nWT2, nWT3, nWT4);
}

int32_t CUserLocal::DoActiveSkill_Teleport(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_Heal(const SKILLENTRY* pSkill, long nSLV)
{
    auto ctx = TSingleton<CWvsContext>::ms_pInstance;
    if (!ctx->CanSendExclRequest(300))
    {
        return 0;
    }
    auto cd = ctx->GetCharacterData();
    if (TSingleton<CSkillInfo>::ms_pInstance->GetSkillLevel(*cd.op_arrow(), pSkill->nSkillID, nullptr) <= 0)
        return 0;
    auto v10 = pSkill->nSkillID / 1000 % 10;
    if (!v10 || v10 == 9 || GetOneTimeAction() > -1)
        return 0;
    auto vec = GetVecCtrlUser();
    if (vec->IsOnLadder() || vec->IsOnRope() || vec->IsUserFlying()) //TODO(game) user flying?
        return 0;
    COutPacket pkt(103);
    pkt.Encode4(get_update_time());
    pkt.Encode4(pSkill->nSkillID);
    pkt.Encode1(nSLV);
    long cnt{};
    auto pt = FindParty(pSkill, nSLV, &cnt);
    pkt.Encode1(pt);
    pkt.Encode2(0);
    ctx->SetExclRequestSent(true);
    SendPacket(pkt);
    ShowSkillEffect(pSkill, nSLV, 6, 0, 0x7FFFFFFF, nullptr);
    if (!TryDoingMagicAttack(pSkill, nSLV, 0, 0))
    {
        if (pSkill->IsActionAppointed(nSLV))
        {
            this->m_nOneTimeAction = pSkill->GetRandomAppointedAction(nSLV, rand());
            PrepareActionLayer(6, 100, 0);
        }
    }
    return 1;
}

int32_t CUserLocal::DoActiveSkill_TownPortal(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_OpenGate(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_Prepare(const SKILLENTRY* pSkill, long nSLV, uint32_t nScanCode)
{
    return __sub_00541710(this, nullptr, pSkill, nSLV, nScanCode);
}

int32_t CUserLocal::DoActiveSkill_Summon(const SKILLENTRY* pSkill, long nSLV)
{
    auto vec = GetVecCtrlUser();
    auto field = get_field();

    auto nSkillID_ = pSkill->nSkillID;
    if (vec->IsUserFlying() || vec->IsSwimming())
    {
        if (!vec->GetFoothold() && (nSkillID_ == MECH3_ROCK_N_SHOCK
            || nSkillID_ == MECH3_ACCELERATION_BOT_EX7
            || nSkillID_ == MECH3_HEALING_ROBOT_HLX
            || nSkillID_ == MECH4_BOTS_N_TOTS
            || nSkillID_ == MECH4_AMPLIFIER_ROBOT_AF11))
        {
            auto str = _GetStr(0x18AA);
            CHATLOG_ADD(str, 12);
            return 0;
        }
    }

    if (!vec->IsUserFlying() && !vec->GetFoothold())
    {
        return 0;
    }

    if (field->GetFieldID() / 1000000 % 100 == 9)
        return 0;

    auto ctx = CWvsContext::GetInstance();
    if (IsDead() || !ctx->CanSendExclRequest(300))
    {
        return 0;
    }
    if (nSkillID_ == MECH3_SATELLITE || nSkillID_ == MECH3_SATELLITE_1 || nSkillID_ == MECH3_SATELLITE_2)
    {
        auto summ = GetSummoned(MECH3_SATELLITE);
        //TODO
        UNIMPLEMENTED;
    }

    auto pos = GetPos();
    auto left = IsLeft();
    if (nSkillID_ == RANGER_PUPPET
        || nSkillID_ == SNIPER_PUPPET
        || nSkillID_ == WA3_PUPPET
        || nSkillID_ == DB5_MIRRORED_TARGET
        || nSkillID_ == WH3_WILD_TRAP
        || is_summon_octopus_skill(nSkillID_)
        || nSkillID_ == WH2_ITS_RAINING_MINESHIDDEN_SELFDESTRUCT)
    {
        auto range = 200;
        if (is_summon_octopus_skill(nSkillID_))
        {
            range = 45;
        }
        else if (nSkillID_ == DB5_MIRRORED_TARGET)
        {
            range = -50;
        }
        else if (nSkillID_ == WH2_ITS_RAINING_MINESHIDDEN_SELFDESTRUCT)
        {
            range = -30;
        }

        auto phy2d = CWvsPhysicalSpace2D::GetInstance();
        auto v22 = 2 * ((m_nMoveAction & 1) == 0) - 1;
        auto v23 = pos.x + range * v22;
        auto mbr = phy2d->GetMBR();
        if (mbr.left + 1 >= v23)
            v23 = mbr.left + 1;
        auto v24 = mbr.right - 1;
        pos.x = v23;
        if (v23 >= v24)
            pos.x = v24;
        auto userPos = GetPos();
        if (pos.x != userPos.x)
        {
            while (true)
            {
                if (vec->IsUserFlying())
                    break;
                long cy{};
                auto fhU = phy2d->GetFootholdUnderneath(pos.x, pos.y, &cy, pos.y + 80, 1);
                long cyA{};
                auto fhAbove = phy2d->GetFootholdAbove(pos.x, pos.y, &cyA, pos.y - 80);
                if (fhU)
                {
                    if (fhAbove && cy - pos.y > pos.y - cyA)
                        pos.y = cyA - 1;
                    else
                        pos.y = cy - 1;
                    break;
                }
                if (fhAbove)
                {
                    pos.y = cyA - 1;
                    break;
                }
                userPos = GetPos();
                pos.x += -15 * v22;
                if (v22 * pos.x <= v22 * userPos.x)
                    return 0;
                if (pos.x == userPos.x)
                    break;
            }
        }
    }

    auto actionAppointed = pSkill->IsActionAppointed(nSLV);
    if (actionAppointed)
    {
        if (GetOneTimeAction() > -1)
        {
            return 0;
        }

        m_nOneTimeAction = pSkill->GetRandomAppointedAction(nSLV, rand());
        PrepareActionLayer(6, 100, false);
    }

    COutPacket pkt(Cp::Userskilluserequest);
    pkt.Encode4(get_update_time());
    pkt.Encode4(nSkillID_);
    pkt.Encode1(nSLV);
    if (nSkillID_ == MECH3_ROCK_N_SHOCK)
    {
        //TODO(game)
        /*
        *COutPacket::Encode1(&oPacket, field);
    if ( field == 2 )
    {
      COutPacket::Encode4(&oPacket, *ldwTeslaCoilSummonedID.a);
      COutPacket::Encode4(&oPacket, ldwTeslaCoilSummonedID.a[1]);
    }*/
    }

    pkt.Encode2(pos.x);
    pkt.Encode2(pos.y);
    pkt.Encode1(left);
    pkt.Encode1(vec->IsUserFlying());
    SendPacket(pkt);
    ctx->SetExclRequestSent(true);
    ShowSkillEffect(pSkill, nSLV, 6, 0, 0x7FFFFFFF, nullptr);
    return 1;
}

int32_t CUserLocal::DoActiveSkill_StatChange(const SKILLENTRY* pSkill, long nSLV, unsigned long dwTargetFlag)
{
    return __sub_00543C20(this, nullptr, pSkill, nSLV, dwTargetFlag);
}

int32_t CUserLocal::DoActiveSkill_MesoExplosion(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_BoundJump(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_RocketBooster(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_StatChangeAdmin(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_SmokeShell(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_RecoveryAura(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_CombatStep(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_Flying(long nSkillID)
{
    return __sub_0053CEC0(this, nullptr, nSkillID);
}

int32_t CUserLocal::DoActiveSkill_NotPrepare_Bomb(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_DamageMeter(long nSkillID)
{
    return __sub_0053D0D0(this, nullptr, nSkillID);
}

int32_t CUserLocal::DoActiveSkill_RepeatSkill(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_Aura(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoEnchantSkill()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoMakerSkill()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoAntiMacroSkill(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_HookAndHit(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_MobCapture(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::DoActiveSkill_SummonMonster(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::ClearRocketBooster()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::ClearRepeatSkill()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

unsigned long CUserLocal::FindParty(const SKILLENTRY* pSkill, long nSLV, long* pnCount)
{
    return __sub_0053A620(this, nullptr, pSkill, nSLV, pnCount);
}

void CUserLocal::TryDoingFinalAttack()
{
    //TODO(game)
    return;
}

void CUserLocal::TryDoingSerialAttack()
{
    //TODO(game)
    return;
}

void CUserLocal::TryDoingSparkAttack()
{
    //TODO(game)
    return;
}

void CUserLocal::TryDoingPreparedSkill()
{
    auto p_m_preparingSkill = &this->m_preparingSkill;
    auto ctx = CWvsContext::GetInstance();
    auto skillInfo = CSkillInfo::GetInstance();
    auto cd = ctx->GetCharacterData();
    auto& ss = GetSecondaryStat();
    if (this->m_preparingSkill.nSkillID && get_update_time() - this->m_preparingSkill.tStart >= 0)
    {
        const SKILLENTRY* pSkill{};

        auto SkillLevel = skillInfo->GetSkillLevel(
            *cd,
            p_m_preparingSkill->nSkillID,
            &pSkill);
        if (p_m_preparingSkill->nSkillID == MECH2_ENHANCED_FLAME_LAUNCHER)
            SkillLevel = skillInfo->GetSkillLevel(*cd, MECH1_FLAME_LAUNCHER, nullptr);
        if (pSkill && SkillLevel)
        {
            if (this->m_bKeyDown)
            {
                if (p_m_preparingSkill->nSkillID == MECH1_FLAME_LAUNCHER
                    || p_m_preparingSkill->nSkillID == MECH2_ENHANCED_FLAME_LAUNCHER)
                {
                    if (get_update_time() - this->m_preparingSkill.tStart < 8000)
                    {
                        if (get_update_time() - this->m_preparingSkill.tAttackStartTime >= 0)
                        {
                            auto Value = ss[4]->GetValue();
                            auto nFrozen = ss._ZtlSecureGet_nFrozen_();

                            auto AuraBooster = GetAuraBooster();
                            auto nBooster = ss._ZtlSecureGet_nBooster_();
                            auto m_nWeaponAttackSpeed = _ZtlSecureGet_m_nWeaponAttackSpeed();
                            auto attack_speed_degree = get_attack_speed_degree(
                                m_nWeaponAttackSpeed,
                                0,
                                nBooster,
                                Value,
                                AuraBooster,
                                nFrozen);
                            ShowSkillPrepare(pSkill, attack_speed_degree, 1, 0);
                            this->m_preparingSkill.tAttackStartTime = GetActionInfo().tTotFrameDelay +
                                get_update_time();
                        }
                    }
                    else
                    {
                        auto cool_time = get_cool_time(p_m_preparingSkill->nSkillID);
                        m_mCoolEndTime.Insert(p_m_preparingSkill->nSkillID, cool_time + get_update_time());
                        OnKeyDownSkillEnd();
                    }
                }
                else if (get_update_time() - this->m_tLastKeyDown == pSkill->tPrepare)
                {
                    auto Value = ss[4]->GetValue();
                    auto nFrozen = ss._ZtlSecureGet_nFrozen_();

                    auto AuraBooster = GetAuraBooster();
                    auto nBooster = ss._ZtlSecureGet_nBooster_();
                    auto m_nWeaponAttackSpeed = _ZtlSecureGet_m_nWeaponAttackSpeed();
                    auto attack_speed_degree = get_attack_speed_degree(
                        m_nWeaponAttackSpeed,
                        0,
                        nBooster,
                        Value,
                        AuraBooster,
                        nFrozen);
                    ShowSkillPrepare(pSkill, attack_speed_degree, 1, 0);
                }
            }
            else
            {
                p_m_preparingSkill->nSkillID = 0;
                p_m_preparingSkill->tStart = 0;
                p_m_preparingSkill->tAttackStartTime = 0;
                p_m_preparingSkill->bKeyDown = 0;
                if (GetOneTimeAction() > -1)
                {
                    this->ResetOneTimeAction();
                    this->PrepareActionLayer(6, 100, 0);
                }
                if (pSkill->nSkillID == FP2_EXPLOSION)
                {
                    TryDoingMagicAttack(pSkill, SkillLevel, 0, 0);
                }
                else if (pSkill->nSkillID == CHIEFBANDIT_CHAKRA)
                {
                    DoActiveSkill_StatChange(pSkill, SkillLevel, 1u);
                }
            }
        }
    }
}

void CUserLocal::TryDoingRepeatSkill(long tCur)
{
    auto cd = CWvsContext::GetInstance()->GetCharacterData();
    auto skillInfo = CSkillInfo::GetInstance();
    auto nSkillID = this->m_repeatSkill.nSkillID;
    auto v5 = 0;
    if (nSkillID <= MECH4_MECH_MISSILE_TANK)
    {
        if (nSkillID == MECH4_MECH_MISSILE_TANK)
        {
            CUserLocal::TryDoingSiege(tCur);
            return;
        }
        if (nSkillID != MECH3_MECH_SIEGE_MODE)
        {
            if (nSkillID == MECH4_GIANT_ROBOT_SG88)
            {
                if (this->m_repeatSkill.bKeyDownbar || tCur - this->m_repeatSkill.tStart < 810)
                {
                    if (this->m_repeatSkill.bDone)
                    {
                        if (tCur - this->m_repeatSkill.tAttackStartTime >= 2520)
                        {
                            auto summ = GetSummoned(MECH4_GIANT_ROBOT_SG88);
                            if (summ)
                            {
                                if (!summ->IsAssistAttackManual())
                                {
                                    summ->SendRemove();
                                    CUserLocal::ClearRepeatSkill();
                                    if (this->m_nMechanicMode == MECH4_MECH_MISSILE_TANK)
                                    {
                                        this->m_repeatSkill.nSkillID = MECH4_MECH_MISSILE_TANK;
                                        this->m_repeatSkill.tStart = tCur;
                                    }
                                }
                            }
                        }
                    }
                    else if (tCur - this->m_repeatSkill.tStart >= 2790)
                    {
                        auto summ = GetSummoned(MECH4_GIANT_ROBOT_SG88);
                        if (summ)
                            summ->SetAssistAttackManual(true);
                        this->m_repeatSkill.bDone = 1;
                        this->m_repeatSkill.tAttackStartTime = tCur;
                        m_pLayerKeyDownBar = 0;
                    }
                }
                else
                {
                    CreateKeyDownBar(MECH4_GIANT_ROBOT_SG88);
                    this->m_repeatSkill.bKeyDownbar = 1;
                }
            }
            return;
        }
        v5 = tCur;
        if (tCur - this->m_repeatSkill.tStart >= 5000)
        {
            auto slvl = skillInfo->GetSkillLevel(*cd.op_arrow(), m_repeatSkill.nSkillID, nullptr);
            SendSkillEffectRequest(35110004, slvl, 1);
            ClearRepeatSkill();
            play_skill_sound(35111004, SE_SKILL_USE, 0);
            return;
        }
    LABEL_31:
        TryDoingSiege(v5);
        return;
    }
    if (nSkillID != MECH4_MECH_SIEGE_MODE)
        return;
    if (!this->m_bSendTankSiegeModeEnd)
    {
        v5 = tCur;
        if (tCur - this->m_tLastTankSiegeMode >= 5000)
        {
            auto slvl = skillInfo->GetSkillLevel(*cd.op_arrow(), m_repeatSkill.nSkillID, nullptr);
            CUserLocal::SendSkillEffectRequest(35120013, slvl, 1);
            this->m_bSendTankSiegeModeEnd = 1;
            play_skill_sound(35121013, SE_SKILL_USE, 0);
            return;
        }
        goto LABEL_31;
    }
    if (this->m_nMechanicMode == MECH4_MECH_MISSILE_TANK)
        this->m_repeatSkill.nSkillID = MECH4_MECH_MISSILE_TANK;
}

void CUserLocal::TryDoingSiege(long tCur)
{
    auto v3 = 0;
    if (this->m_repeatSkill.bDone)
    {
        switch (this->m_repeatSkill.nSkillID)
        {
        case MECH3_MECH_SIEGE_MODE:
            v3 = tCur - this->m_repeatSkill.tAttackStartTime < 180;
            break;
        case MECH4_MECH_MISSILE_TANK:
            v3 = tCur - this->m_repeatSkill.tAttackStartTime < 420;
            break;
        case MECH4_MECH_SIEGE_MODE:
            v3 = tCur - this->m_repeatSkill.tAttackStartTime < 180;
            break;
        default:
            if (this->m_repeatSkill.bDone)
                return;
        }
        if (!v3)
            this->m_repeatSkill.bDone = false;
        if (this->m_repeatSkill.bDone)
            return;
    }
    if (this->m_repeatSkill.nPoint)
    {
        auto ctx = TSingleton<CWvsContext>::ms_pInstance;
        auto cd = ctx->GetCharacterData();
        auto skillInfo = CSkillInfo::GetInstance();
        auto nSkillID = this->m_repeatSkill.nSkillID;
        const SKILLENTRY* entry{};
        auto slv = skillInfo->GetSkillLevel(*cd.op_arrow(), nSkillID, &entry);
        if (skillInfo->CheckConsumeForActiveSkill(
            *cd.op_arrow(),
            ctx->GetBasicStat(),
            ctx->GetSecondaryStat(),
            entry->nSkillID,
            nullptr,
            nullptr))
            TryDoingShootAttack(entry, slv, 0, 0, 0, 0);
        this->m_repeatSkill.tAttackStartTime = get_update_time();
        this->m_repeatSkill.bDone = true;
        this->m_repeatSkill.nPoint = 0;
    }
}

void CUserLocal::TryDoingRocketBooster()
{
    //TODO(game)
    return;
}

void CUserLocal::TryDoingRocketBoosterEnd()
{
    //TODO(game)
    return;
}

void CUserLocal::TryDoingTeleport()
{
    __sub_00532C00(this, nullptr);
}

void CUserLocal::TryDoingRush()
{
    __sub_0050B8C0(this, nullptr);
}

void CUserLocal::TryDoingFlyingRush()
{
    __sub_0050BC10(this, nullptr);
}

void CUserLocal::TryDoingFallDown()
{
    __sub_00505D90(this, nullptr);
}

void CUserLocal::TryDoingItemSkill(CMob* pMob, long tAttackTime, long nMobCount, long nDamagePerMob, long nSkillID,
                                   long nAction)
{
    __sub_00507A70(this, nullptr, pMob, tAttackTime, nMobCount, nDamagePerMob, nSkillID, nAction);
}

void CUserLocal::TryDoingMine()
{
    //TODO(game) __sub_00507D70(this, nullptr);
}

void CUserLocal::TryDoingSitdownHealing()
{
    __sub_00503D60(this, nullptr);
}

void CUserLocal::ValidateItemSkill()
{
    __sub_0051B540(this, nullptr);
}

void CUserLocal::ValidateSkillBonus()
{
    __sub_0050C4D0(this, nullptr);
}

void CUserLocal::CheckEquippedSetItem()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::TryAutoRequestFollowCharacter()
{
    __sub_00504BF0(this, nullptr);
}

void CUserLocal::TryPassiveTransferField()
{
    __sub_0051A2E0(this, nullptr);
}

void CUserLocal::CheckPassenser()
{
    if ( m_dwPassenserID )
    {
        if ( auto user = TSingleton<CUserPool>::ms_pInstance->GetUser(m_dwPassenserID) )
        {
            user->GetSecondaryStat();
            user->SetDriverID(0);
        }
        this->m_dwPassenserID = 0;
    }
}

int32_t CUserLocal::IsTeleportSkillAvailable(const SKILLENTRY* pSkill, long nSLV, tagPOINT& ptAfterTeleport)
{
    return __sub_0053A350(this, nullptr, pSkill, nSLV, ptAfterTeleport);
}

int32_t CUserLocal::IsEquippedCorrectWeaponForSkill(const SKILLENTRY* pSkill)
{
    return __sub_0053A0A0(this, nullptr, pSkill);
}

void CUserLocal::OnSkillCooltimeSet(CInPacket& iPacket)
{
    __sub_00508B90(this, nullptr, iPacket);
}

void CUserLocal::CreateKeyDownBar(long nSeatID)
{
    //TODO(game)
}

void CUserLocal::DrawKeyDownBar()
{
    __sub_005153B0(this, nullptr);
}

long CUserLocal::GetAchillesReduce(long nDamage)
{
    return __sub_00508C40(this, nullptr, nDamage);
}

void CUserLocal::SendBanMapByMobRequest(unsigned long dwMobTemplateID)
{
    __sub_00508D50(this, nullptr, dwMobTemplateID);
}

void CUserLocal::CheckBoobyTrapPickUpRequest(int32_t lParam)
{
    __sub_00506190(this, nullptr, lParam);
}

void CUserLocal::ThrowGrenade(long nSkillID, long nSLV, long tKeyDown)
{
    __sub_0050DF50(this, nullptr, nSkillID, nSLV, tKeyDown);
}

void CUserLocal::BeRushValid()
{
    __sub_00505D00(this, nullptr);
}

void CUserLocal::AddRushElem(CUserLocal::RUSH::RUSHELEM::RUSHSTYLE nState, long nVx, long tDuring, double dAx)
{
    __sub_0050F6A0(this, nullptr, nState, nVx, tDuring, dAx);
}

_ZTL_SEC_GETSETI(long, CUserLocal, m_nLastJumpInputX)
_ZTL_SEC_GETSETI(int32_t, CUserLocal, m_bSit)
_ZTL_SEC_GETSETI(long, CUserLocal, m_nPortableChairID)
_ZTL_SEC_GETSETI(long, CUserLocal, m_nSittingTime)
_ZTL_SEC_GETSETI(uint16_t, CUserLocal, m_usActivePetSkill)

void CUserLocal::ShowBallonMsg(ZXString<char>& str, long nWidth, long tTimeOut, long x, long y,
                               _x_com_ptr<IWzVector2D> pOrigin)
{
    __sub_0051D580(this, nullptr, str, nWidth, tTimeOut, x, y, CreateNakedParam(pOrigin));
}

int32_t CUserLocal::ProcessDualKey()
{
    return __sub_0050A6F0(this, nullptr);
}

long CUserLocal::CalcBuffDefenseAttr(char nElemAttr, long nDamage)
{
    return __sub_00504120(this, nullptr, nElemAttr, nDamage);
}

void CUserLocal::RemoveTutor(long nSKillId)
{
    m_pTutor = 0;
    for (auto& tutor : ms_anTutors)
    {
        if (tutor == nSKillId)
        {
            ms_anTutors.RemoveAt(&tutor);
        }
    }
}

void CUserLocal::RequestIncCombo()
{
    __sub_00509070(this, nullptr);
}

void CUserLocal::OnIncComboResponse(CInPacket& iPacket)
{
    __sub_0051A970(this, nullptr, iPacket);
}

long CUserLocal::GetCombo()
{
    return __sub_00348E50(this, nullptr);
}

void CUserLocal::SetCombo(long nCombo)
{
    m_nCombo = nCombo;
}

void CUserLocal::ClearCombo()
{
    __sub_00505660(this, nullptr);
}

void CUserLocal::DrawCombo()
{
    __sub_00517040(this, nullptr);
}

void CUserLocal::HoldCombo(int32_t bHold)
{
    __sub_005180E0(this, nullptr, bHold);
}

int32_t CUserLocal::IsHoldingCombo()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::OnRadioSchedule(CInPacket& iPacket)
{
    __sub_00518120(this, nullptr, iPacket);
}

void CUserLocal::OnOpenSkillGuide(CInPacket& iPacket)
{
    __sub_0050E6A0(this, nullptr, iPacket);
}

void CUserLocal::OnNoticeMsg(CInPacket& iPacket)
{
    __sub_005181D0(this, nullptr, iPacket);
}

void CUserLocal::OnChatMsg(CInPacket& iPacket)
{
    //__sub_00518300(this, nullptr, iPacket);
    auto flag = iPacket.Decode2();
    auto msg = iPacket.DecodeStr();
    if (auto statusBar = CUIStatusBar::GetInstance())
        statusBar->ChatLogAdd(msg.c_str(), flag, -1, 0, {});
}

void CUserLocal::OnBuffzoneEffect(CInPacket& iPacket)
{
    __sub_005183A0(this, nullptr, iPacket);
}

long CUserLocal::GetConsumeItemUsingLastTime()
{
    return m_tConsumeItemUsingLastTime;
}

void CUserLocal::SetConsumeItemUsingLastTime(long t)
{
    m_tConsumeItemUsingLastTime = t;
}

void CUserLocal::UpdateClientTimer(long tCur)
{
    /*auto cur = m_mClientTimerSkill.GetHeadPosition();
    while (cur)
    {
        long value{};

    }*/

    //TODO(game)
}

void CUserLocal::SetClientTimer(long nSkillID, long tTime)
{
    __sub_0050E8B0(this, nullptr, nSkillID, tTime);
}

void CUserLocal::SetSwallowed()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::FindSwallowMob(const SKILLENTRY* arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::TryDoingSwallowMobWriggle()
{
    // TODO: No module found for method
    //UNIMPLEMENTED;
    //TODO(game)
}

void CUserLocal::ResetMobWriggle()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUserLocal::TryDoingSwallowAbsorb(const SKILLENTRY* pSkill, long nSLV, long nShootRange0)
{
    return __sub_00512F90(this, nullptr, pSkill, nSLV, nShootRange0);
}

void CUserLocal::TryDoingSwallowBuff()
{
    // TODO: No module found for method
    //TODO(game) UNIMPLEMENTED;
}

void CUserLocal::ResetSwallow()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::TryDoingCyclone()
{
    __sub_00532D60(this, nullptr);
}

long CUserLocal::GetTeslaCoilCount()
{
    return __sub_00348E50(this, nullptr);
}

void CUserLocal::GetTeslaCoilSummonedID(ZArray<unsigned long>& ldwTeslaCoilSummonedID)
{
    __sub_00510B90(this, nullptr, ldwTeslaCoilSummonedID);
}

void CUserLocal::ChangeTeslaCoilEndTime(long tNew)
{
    for (auto& summ : m_lSummoned)
    {
        if (summ->GetSkillID() == MECH3_ROCK_N_SHOCK)
            summ->ChangeEndTime(tNew);
    }
}

void CUserLocal::ChangeTeslaTriangle()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::ClearPassiveSkillData()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::SetPassiveSkillData(const SKILLENTRY* pSkill, long nSLV)
{
    __sub_005185A0(this, nullptr, pSkill, nSLV);
}

void CUserLocal::RevisePassiveSkillData()
{
    __sub_005042E0(this, nullptr);
}

void CUserLocal::UpdatePassiveSkillData(int32_t bDontSend)
{
    __sub_00518C20(this, nullptr, bDontSend);
}

void CUserLocal::SetChatPassiveSkillDataInfo()
{
    __sub_00510ED0(this, nullptr);
}

const ZRef<PassiveSkillData> CUserLocal::GetPassiveSkillData()
{
    //return __sub_001008C0(this, nullptr);
    return m_pPassiveSkillData;
}

void CUserLocal::SetPassiveSkillDataForced(ZXString<char> sFlag, long nVal)
{
    __sub_00509730(this, nullptr, CreateNakedParam(sFlag), nVal);
}

int32_t CUserLocal::CheckApplyExJablin(const SKILLENTRY* pSkill, long nAction)
{
    //return __sub_00509BF0(this, nullptr, pSkill, nAction);
    auto nSkillID = pSkill ? pSkill->nSkillID : 0;
    if (!this->m_bNextShootExJablin)
        return 0;
    if (GetSkillLevel(NIGHTLORD_EXPERT_THROWING_STAR_HANDLING) <= 0)
    {
        this->m_bNextShootExJablin = 0;
        return 0;
    }
    return is_shoot_action(nAction)
        && (!nSkillID || !is_shoot_skill_not_consuming_bullet(nSkillID) && !is_shoot_skill_not_showing_bullet(pSkill));
}

void CUserLocal::SetPetsAngry()
{
    //__sub_005042A0(this, nullptr);
    for (auto& pet : m_apPet)
        if (pet)
            pet->SetAngryAction();
}

void CUserLocal::ResetNLCPQ()
{
    // TODO: No module found for method
    //TODO(game)
}

int32_t CUserLocal::HasGL5thEventTeam()
{
    return __sub_00160050(this, nullptr);
}

int32_t CUserLocal::IsGL5thEventCakeTeam()
{
    return __sub_00160050(this, nullptr);
}

int32_t CUserLocal::IsGL5thEventPieTeam()
{
    return __sub_00160050(this, nullptr);
}

void CUserLocal::OnQuestGuideResult(CInPacket& iPacket)
{
    __sub_0050F1E0(this, nullptr, iPacket);
}

CUserLocal& CUserLocal::operator=(CUserLocal& arg0)
{
    return _op_assign_314(this, arg0);
}

CUserLocal& CUserLocal::_op_assign_314(CUserLocal* pThis, CUserLocal& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUserLocal::TELEPORT::TELEPORT()
{
}

void CUserLocal::TELEPORT::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUserLocal::RUSH::~RUSH()
{
}

void CUserLocal::RUSH::_dtor_0()
{
    this->~RUSH();
}

CUserLocal::RUSH::RUSH(const CUserLocal::RUSH& arg0)
{
    _ctor_1(arg0);
}

void CUserLocal::RUSH::_ctor_1(const CUserLocal::RUSH& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUserLocal::RUSH::RUSH()
{
}

void CUserLocal::RUSH::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUserLocal::RUSH& CUserLocal::RUSH::operator=(const CUserLocal::RUSH& arg0)
{
    return _op_assign_3(this, arg0);
}

CUserLocal::RUSH& CUserLocal::RUSH::_op_assign_3(CUserLocal::RUSH* pThis, const CUserLocal::RUSH& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUserLocal::CBalloonMsg::~CBalloonMsg()
{
}

void CUserLocal::CBalloonMsg::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUserLocal::CBalloonMsg::CBalloonMsg(const CUserLocal::CBalloonMsg& arg0)
{
    _ctor_1(arg0);
}

void CUserLocal::CBalloonMsg::_ctor_1(const CUserLocal::CBalloonMsg& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUserLocal::CBalloonMsg::CBalloonMsg()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CUserLocal::CBalloonMsg::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserLocal::CBalloonMsg::Init(ZXString<char>& str, long nWidth, long tTimeOut, long x, long y,
                                   _x_com_ptr<IWzVector2D> pOrigin)
{
    __sub_0051BBB0(this, nullptr, str, nWidth, tTimeOut, x, y, CreateNakedParam(pOrigin));
}

CUserLocal::CBalloonMsg& CUserLocal::CBalloonMsg::operator=(const CUserLocal::CBalloonMsg& arg0)
{
    return _op_assign_4(this, arg0);
}

CUserLocal::CBalloonMsg& CUserLocal::CBalloonMsg::_op_assign_4(CUserLocal::CBalloonMsg* pThis,
                                                               const CUserLocal::CBalloonMsg& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

tagPOINT __cdecl GetShootAttackPt0(long nSkillID, long nJob, const tagPOINT& ptUser, long nVehicleID,
                                   long nBodyRelMoveY)
{
    //TODO(game) !!!
    //return __sub_005039A0(nSkillID, nJob, ptUser, nVehicleID, nBodyRelMoveY);
    auto res = ptUser;
    res.y -= 28;
    if (is_position_up_skill_on_riding(nSkillID, nJob))
    {
        UNIMPLEMENTED; //TODO(game) detect riding vehicle
    }

    switch (nSkillID)
    {
    case WH2_JAGUAROSHI_2:
        res.y -= 12;
        break;
    case WH4_STINK_BOMB_SHOT:
        res.y += 11;
        break;
    case MECH1_GATLING_GUN:
    case WH2_RICOCHET:
    case MECH2_ENHANCED_GATLING_GUN:
        res.y += 5;
        break;
    case MECH3_PUNCH_LAUNCHER:
        res.y += 10;
        break;
    default:
        break;
    }

    return res;
}

long __cdecl GetShootRange0(long nSkillID, long nShootRange0, int32_t bMortalBlow)
{
    nShootRange0 = 400;
    switch (nSkillID)
    {
    case WH2_JAGUAROSHI_2:
        return 70;
    case WH1_TRIPLE_SHOT:
        return 65;
    case WH2_RICOCHET:
        return 39;
    case WH3_ENDURING_FIRE:
        return 65;
    case WH4_STINK_BOMB_SHOT:
        return 22;
    default:
        return bMortalBlow ? 0 : nShootRange0;
    }
}

const SKILLENTRY* __cdecl get_soul_arrow(long nJob)
{
    auto skillInfo = CSkillInfo::GetInstance();
    if (nJob / 100 == 33)
        return skillInfo->GetSkill(WH2_SOUL_ARROW_CROSSBOW);
    if (nJob / 1000 == 1)
        return skillInfo->GetSkill(WA2_SOUL_ARROW);
    if (nJob / 10 == 32)
        return skillInfo->GetSkill(CROSSBOWMAN_SOUL_ARROW_CROSSBOW);
    return skillInfo->GetSkill(HUNTER_SOUL_ARROW_BOW);
}

void __cdecl sort_mob_by_distance(int32_t arg0, CMob** arg1, long arg2)
{
    return __sub_00504B20(arg0, arg1, arg2);
}

long __cdecl get_stance_skill_id(const long nJob)
{
    //return __sub_005031D0(nJob);
    if (nJob <= 2112)
    {
        switch (nJob)
        {
        case 2112:
            return 21121003;
        case 112:
            return 1121002;
        case 122:
            return 1221002;
        case 132:
            return 1321002;
        default:
            return 0;
        }
    }
    if (nJob != 3212)
    {
        if (nJob > 3309 && nJob <= 3312)
            return 33101006;
        return 0;
    }
    return 32121005;
}

void __cdecl zswap_CMob__(CMob*& a, CMob*& b)
{
    return __sub_00504480(a, b);
}

char __cdecl _ZtlSecureFuse_char_(const char* at, uint32_t uCS)
{
    return __sub_005035C0(at, uCS);
}

void __cdecl sort_attackInfo_by_distance(int32_t arg0, ATTACKINFO* arg1, long arg2)
{
    return __sub_00504A50(arg0, arg1, arg2);
}
