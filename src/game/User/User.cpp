// User.cpp
#include "User.hpp"

#include <skills_ids.h>

#include "spdlog/spdlog.h"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};

static ZRefCounted_AllocHelper<CGrenade> FAKE_ZRefCounted_AllocHelper_CGrenade{};
static ZRef<CGrenade> FAKE_ZRef_CGrenade{};
static ZRef<CPet> FAKE_ZRef_CPet{};

#include "User_regen.ipp"

USERLAYER::~USERLAYER()
{
}

void USERLAYER::_dtor_0()
{
    return __sub_004DF4B0(this, nullptr);
}

USERLAYER::USERLAYER(const USERLAYER& arg0)
{
    _ctor_1(arg0);
}

void USERLAYER::_ctor_1(const USERLAYER& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

USERLAYER::USERLAYER()
{
}

void USERLAYER::_ctor_0()
{
    new(this) USERLAYER();
}

USERLAYER& USERLAYER::operator=(const USERLAYER& arg0)
{
    return _op_assign_3(this, arg0);
}

USERLAYER& USERLAYER::_op_assign_3(USERLAYER* pThis, const USERLAYER& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUser::~CUser()
{
    if (auto ani = m_pSpectrumAniState)
        ani->bTerminate = true;


    if (m_uWingsSoundCookie)
    {
        stop_skill_sound(m_uWingsSoundCookie);
        m_uWingsSoundCookie = 0;
    }
}

void CUser::_dtor_0()
{
    this->~CUser();
}

CUser::CUser(const CUser& arg0)
{
    _ctor_1(arg0);
}

void CUser::_ctor_1(const CUser& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUser::CUser(unsigned long dwCharacterId)
{
    m_nTeamForMCarnival = 255;
    m_dwPhaseAlpha = 0;
    m_nLastMAType = 1;
    m_tRideVehicleLeft = -1;
    m_tOakCaskLeft = -1;
    m_bRepeatEffectRemove = true;
    this->m_dwCharacterId = dwCharacterId;

    m_apPet.Alloc(3);

    this->_ZtlSecurePut_m_nNameTagType(0);
    this->_ZtlSecurePut_m_nEmotion(0);
    this->_ZtlSecurePut_m_nChatBalloonType(0);
}

void CUser::_ctor_0(unsigned long dwCharacterId)
{
    //return __sub_004F4600(this, nullptr, dwCharacterId);
    new(this) CUser(dwCharacterId);
}

void CUser::Init(const AvatarLook& al, int32_t bShowAdminEffect)
{
    __sub_00500610(this, nullptr, al, bShowAdminEffect);
}

unsigned long CUser::GetCharacterId()
{
    return m_dwCharacterId;
}

const char* CUser::GetCharacterName()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

unsigned char CUser::GetCharacterLevel()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const SecondaryStat& CUser::GetSecondaryStat()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::IsLocalUser()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::IsPreview()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::IsRemoteUser()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::IsAdminHide()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::IsMovingMode()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::IsEvanJob()
{
    //return __sub_000BC000(this, nullptr);
    return is_evan_job(GetJobCode());
}

int32_t CUser::IsDarkSight()
{
    return __sub_000FFFB0(this, nullptr);
}

int32_t CUser::IsWindWalk()
{
    return __sub_000FFFE0(this, nullptr);
}

int32_t CUser::IsSneak()
{
    return __sub_00100010(this, nullptr);
}

int32_t CUser::IsDojangInvincible()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::IsCyclone()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::IsDoingBoomerangStep(long nReason)
{
    return __sub_00503370(this, nullptr, nReason);
}

int32_t CUser::IsDoingDojangBamboo(long nReason)
{
    //return __sub_00503370(this, nullptr, nReason);
    UNIMPLEMENTED;
}

int32_t CUser::IsDoingHashing()
{
    //return __sub_004DF340(this, nullptr);
    return this->m_dwMorphTemplateID
        && CMorphTemplate::IsSuperMan(this->m_dwMorphTemplateID)
        && GetOneTimeAction() > -1
        && GetOneTimeAction() == 45;
}

_x_com_ptr<IWzVector2D> CUser::GetVecCtrl()
{
    //return __sub_000BBED0(this, nullptr);
    return m_pvc;
}

_x_com_ptr<IWzVector2D> CUser::GetVecCtrl_0()
{
    return GetVecCtrl();
}

_x_com_ptr<IWzVector2D> CUser::GetVecCtrl_1()
{
    return GetVecCtrl();
}

/* TODO _x_com_ptr<IWzVector2D> CUser::GetVecCtrl() {
	return __sub_004DF390(this, nullptr);
}*/
int32_t CUser::IsStand()
{
    auto vec = this->GetVecCtrlUser();
    return vec->GetFoothold() && vec->IsStopped();
}

int32_t CUser::IsOnFoothold()
{
    return GetFoothold() != nullptr;
}

int32_t CUser::IsOnLadderOrRope()
{
    return GetVecCtrlUser()->GetLadderOrRope() != nullptr;
}

int32_t CUser::IsSwimOrFly()
{
    auto vec = this->GetVecCtrlUser();
    if (vec->IsSwimming())
        return true;

    return vec->IsUserFlying();
}

CStaticFoothold* CUser::GetFoothold()
{
    //return __sub_0053A280(this, nullptr);
    auto vec = this->GetVecCtrlUser();
    return vec->GetFoothold();
}

void CUser::OnAvatarModified()
{
    //__sub_004F6F00(this, nullptr);
    for (auto& pet : m_apPet)
    {
        if (!pet)
            break;
        pet->OnAvatarModified();
    }

    SetAbilityEquip();
    SetSetItemEffect();
    UpdateKeywordEffects();
    m_ItemEffect.UpdateEffects(m_avatarLook.anHairEquip.data());
}

void CUser::SetMoveAction(long nMA, int32_t bReload)
{
    //__sub_004DF540(this, nullptr, nMA, bReload);

    auto jaguarId = m_nRidingVehicleID;

    bool ridingJaguar = is_wildhunter_jaguar_vehicle_0(jaguarId);
    if (!ridingJaguar && !bReload && nMA == m_nMoveAction)
    {
        return;
    }

    if (!bReload && !ridingJaguar)
    {
        long dir = 0;
        auto raw = MoveAction2RawAction(nMA, &dir);
        auto charAct = ConvertCharacterAction(raw);
        long dirChar = 0;
        auto curCharAct = GetCurCharacterAction(&dirChar);
        if (curCharAct == charAct && dirChar == dir && raw == m_nTamingMobAction)
        {
            return;
        }
    }


    CAvatar::SetMoveAction(nMA, bReload);
    auto oneTimeAction = 0;
    if (m_dwMorphTemplateID)
    {
        oneTimeAction = 2;
    }
    else
    {
        oneTimeAction = GetCurCharacterAction(nullptr);
    }

    m_ItemEffect.ChangeAction(oneTimeAction);

    //TODO(game) rest
}

long CUser::GetAttackActionSpeed(long nSkillID)
{
    auto& ss = GetSecondaryStat();
    auto frozen = ss._ZtlSecureGet_nFrozen_();
    auto& tmp4 = ss.aTemporaryStat[4];


    auto booster = ss._ZtlSecureGet_nBooster_();
    auto wepAtkSpeed = _ZtlSecureGet_m_nWeaponAttackSpeed();
    auto auraBooster = GetAuraBooster();
    return get_attack_speed_degree(wepAtkSpeed, nSkillID, booster, tmp4->GetValue(), auraBooster, frozen);
    //return __sub_004DF740(this, nullptr, nSkillID);
}

const long CUser::GetAuraBooster()
{
    auto skillInfo = CSkillInfo::GetInstance();

    auto& ss = GetSecondaryStat();
    auto yellowAura = ss._ZtlSecureGet_nYellowAura_();
    if (yellowAura <= 0)
        return 0;

    auto rYellow = ss._ZtlSecureGet_rYellowAura_();
    auto skill = skillInfo->GetSkill(rYellow);
    if (!skill)
        return 0;

    auto lvlData = skill->GetLevelData(yellowAura);
    auto y = lvlData._ZtlSecureGet_nY();
    auto superBody = ss._ZtlSecureGet_nSuperBody_();
    if (superBody > 0)
    {
        if (auto skill2 = skillInfo->GetSkill(32110008))
        {
            auto lvl = skill2->GetLevelData(superBody);
            y += y * lvl._ZtlSecureGet_nY() / 100;
        }
    }

    return y;

    //return __sub_004DE900(this, nullptr);
}

int32_t CUser::SetAttackAction(long nAttackAction, long nAttackSpeed, const SKILLENTRY* pSkill, long nSLV)
{
    //return __sub_004E70B0(this, nullptr, nAttackAction, nAttackSpeed, pSkill, nSLV);
    if (nAttackAction == -1)
        return 0;
    this->m_tAlertRemain = 5000;
    if (GetOneTimeAction() > -1)
        return 0;
    auto weapon_type = get_weapon_type(this->m_nWeaponItemID);
    if (!is_correct_normal_attack(this->m_nAttackActionType, weapon_type, nAttackAction, pSkill, nSLV))
    {
        auto nSkillID = is_correct_magic_attack(this->m_nAttackActionType, weapon_type, nAttackAction, pSkill, nSLV);
        if (!nSkillID)
        {
            if (pSkill)
                nSkillID = pSkill->nSkillID;
            if (!is_correct_siege_attack(nAttackAction, nSkillID))
            {
                auto job = GetJobCode();
                if (pSkill || !is_aran_job(job) || nAttackAction < 145 || nAttackAction > 147)
                {
                    if (!is_not_depend_on_weapon_skill(pSkill, nSLV, job))
                    {
                        if (pSkill && !pSkill->IsCorrectWeaponType(weapon_type, -1))
                        {
                            auto str = _GetStr(0x1127);
                            CHATLOG_ADD(str, 0xCu);
                        }
                        return 0;
                    }
                }
            }
        }
    }
    this->m_nOneTimeAction = nAttackAction;
    PrepareActionLayer(nAttackSpeed, 100, false);
    if (this->m_pDragon)
    {
        auto name = get_action_name_from_code(nAttackAction);
        auto dragon_action_code_from_name = get_dragon_action_code_from_name(name);
        if (dragon_action_code_from_name > 0x1C)
            dragon_action_code_from_name = 0;
        m_nMoveAction = this->m_nMoveAction;
        auto v17 = m_pDragon->GetMoveAction();
        this->m_pDragon->SetMoveAction(v17 ^ (m_nMoveAction ^ v17) & 1, false);
        this->m_pDragon->SetAttackAction(dragon_action_code_from_name, nAttackSpeed);
    }
    return 1;
}

const CChatBalloon& CUser::GetChatBalloon()
{
    return m_chatBalloon;
}

long CUser::GetMiniRoomType()
{
    return m_nMiniRoomType;
}

unsigned long CUser::GetMiniRoomSN()
{
    return m_dwMiniRoomSN;
}

ZXString<char> CUser::GetMiniRoomTitle()
{
    return m_sMiniRoomTitle;
}

int32_t CUser::IsPrivate()
{
    return m_bPrivate;
}

void CUser::GetMiniRoomBalloonRect(tagRECT& arg0)
{
    UNIMPLEMENTED;
}

CPet* CUser::GetActivePet(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CPet* CUser::GetBossPet()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUser::SetActivePet(long nIdx, CPet* pPet)
{
    __sub_004E40E0(this, nullptr, nIdx, pPet);
}

ZRef<GW_ItemSlotPet> CUser::GetActivePetItemSlot(long nIndex)
{
    auto p = m_apPet[nIndex];
    //TODO op bool
    return !p ? ZRef<GW_ItemSlotPet>() : ZRef(p->GetItemSlot(), true);

    //return __sub_004E3030(this, nullptr, nIndex);
}

long CUser::GetPetWearID(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUser::GetActiveEffectItemID()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUser::MakeIncDecHPEffect(long nDelta, int32_t bGuard)
{
    __sub_004DE750(this, nullptr, nDelta, bGuard);
}

void CUser::OnTemporaryStatChanged(MY_UINT128 uFlag, long tDelay, int32_t bInit)
{
    //TODO(game) __sub_00500CB0(this, nullptr, CreateNakedParam(uFlag), tDelay, bInit);
    spdlog::info("On temp stat changed");
}

void CUser::UpdateAffectedSkillList(long tDelay, int32_t bEnterField)
{
    //TODO(game) __sub_004FFAF0(this, nullptr, tDelay, bEnterField);
}

void CUser::SetConsumeItemEffect(long arg0)
{
    __sub_004EEB60(this, nullptr, arg0);
}

void CUser::SetConsumeItemEffect(CInPacket& iPacket)
{
    __sub_004F54D0(this, nullptr, iPacket);
}

void CUser::SetActiveEffectItem(long arg0)
{
    __sub_004F5500(this, nullptr, arg0);
}

void CUser::ShowUpgradeTombEffect(long nItemID, long nPosX, long nPosY)
{
    __sub_004E5DC0(this, nullptr, nItemID, nPosX, nPosY);
}

void CUser::SetActivePortableChair(long nItemID)
{
    __sub_004EFF80(this, nullptr, nItemID);
    //TODO
    /*if (m_bDelayedLoad)
    {
        return;
    }

    auto userPool = CUserPool::GetInstance();
    auto& sp = StringPool::GetInstance();
    if (nItemID / 1000 == 3012 )
    {
        userPool->OnCoupleChairRecordAdd(m_dwCharacterId, nItemID);
    }
    else
    {
        userPool->OnCoupleChairRecordRemove(m_dwCharacterId);
    }

    auto addLayer = GetAdditionalLayer(10);
    if (!addLayer)
    {
        RemoveAdditionalLayer(10);
        if (m_nRidingVehicleID / 1000 == 1983)
        {
            SetRidingChair(0);
        }
        return;
    }

    if (addLayer->nData == nItemID)
    {
        return;
    }

    auto layer = RemoveAdditionalLayer(10);
    auto sFmt1 = sp.GetStringW(0x955);
    auto chairUol1 = ZXString16::FromFmt(sFmt1.c_str(), nItemID);
    auto sFmt2 = sp.GetStringW(0x956);
    auto chairUol2 = ZXString16::FromFmt(sFmt2.c_str(), nItemID);

    auto flip = m_pLayerUnderFace->Getflip();

    long ix{};
    if (LoadLayer(Ztl_bstr_t((const wchar_t*) chairUol1.c_str()), flip, layer->l, &ix))
    {

    }*/
}

void CUser::SetMapSpecificEffect()
{
    __sub_004F0460(this, nullptr);
}

tagPOINT CUser::GetRevivePos()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUser::OnChat(CInPacket& iPacket, int32_t bIsFromOutsideOfMap)
{
    __sub_004E86C0(this, nullptr, iPacket, bIsFromOutsideOfMap);
}

void CUser::OnChatFromOutside(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUser::OnADBoard(CInPacket& iPacket)
{
    __sub_004ED310(this, nullptr, iPacket);
}

void CUser::OnEmotion(CInPacket& iPacket)
{
    __sub_004E0150(this, nullptr, iPacket);
}

void CUser::OnEffect(CInPacket& arg0)
{
    __sub_004F9A70(this, nullptr, arg0);
}

void CUser::ShowItemUpgradeEffect(CInPacket& iPacket)
{
    __sub_004E7B00(this, nullptr, iPacket);
}

void CUser::ShowItemHyperUpgradeEffect(CInPacket& iPacket)
{
    __sub_004E7660(this, nullptr, iPacket);
}

void CUser::ShowItemOptionUpgradeEffect(CInPacket& iPacket)
{
    __sub_004E72C0(this, nullptr, iPacket);
}

void CUser::ShowItemReleaseEffect(CInPacket& iPacket)
{
    __sub_004E54D0(this, nullptr, iPacket);
}

void CUser::ShowItemUnreleaseEffect(CInPacket& iPacket)
{
    __sub_004E5670(this, nullptr, iPacket);
}

void CUser::OnMiniRoomBalloon(CInPacket& iPacket)
{
    __sub_004E8D30(this, nullptr, iPacket);
}

void CUser::OnPetPacket(long nType, CInPacket& iPacket)
{
    __sub_004E02A0(this, nullptr, nType, iPacket);
}

void CUser::OnShowPQReward(CInPacket& iPacket)
{
    __sub_004E6850(this, nullptr, iPacket);
}

void CUser::OnRandomEmotion(CInPacket& iPacket)
{
    __sub_004E34B0(this, nullptr, iPacket);
}

long CUser::OnPetActivated(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUser::PetInterActWithUserAction(long nUserAction, long nPetIndex)
{
    return __sub_000BC040(this, nullptr, nUserAction, nPetIndex);
}

void CUser::OnPetEvol(CInPacket& iPacket)
{
    __sub_004E5CE0(this, nullptr, iPacket);
}

void CUser::AddSummonedList(ZRef<CSummoned> pSummoned)
{
    __sub_004F4AB0(this, nullptr, CreateNakedParam(pSummoned));
}

int32_t CUser::OnSummonedRemoved(unsigned long dwSummonedID, CInPacket& iPacket)
{
    return __sub_004E3790(this, nullptr, dwSummonedID, iPacket);
}

void CUser::OnSummonedMove(CInPacket& iPacket)
{
    __sub_004E3860(this, nullptr, iPacket);
}

void CUser::OnSummonedAttack(CInPacket& iPacket)
{
    __sub_004E38F0(this, nullptr, iPacket);
}

void CUser::OnSummonedSkill(CInPacket& iPacket)
{
    __sub_004E3980(this, nullptr, iPacket);
}

void CUser::OnSummonedHit(CInPacket& iPacket)
{
    __sub_004E3A10(this, nullptr, iPacket);
}

ZRef<CSummoned> CUser::GetSummoned(long nSkillID)
{
    /*ZRef<CSummoned> ret;
    return *__sub_004E3550(this, nullptr, &ret, nSkillID);*/

    for (auto& summ : m_lSummoned)
    {
        if (summ->GetSkillID() == nSkillID && IsSamePhaseWithLocalUser())
            return summ;
    }
    return {};
}

ZRef<CSummoned> CUser::GetSummonedByID(long dwSummonedID)
{
    /*ZRef<CSummoned> ret;
    return *__sub_004E3670(this, nullptr, &ret, dwSummonedID);*/
    for (auto& summ : m_lSummoned)
    {
        if (summ->GetID() == dwSummonedID)
            return summ;
    }
    return {};
}

void CUser::OnDragonPacket(long nType, CInPacket& iPacket)
{
    __sub_004E5C00(this, nullptr, nType, iPacket);
}

void CUser::OnHitByUser(CInPacket& iPacket)
{
    __sub_004E11B0(this, nullptr, iPacket);
}

void CUser::OnSetPhase(CInPacket& iPacket)
{
    __sub_004E11F0(this, nullptr, iPacket);
}

void CUser::OnTeslaTriangle(CInPacket& iPacket)
{
    __sub_004F3770(this, nullptr, iPacket);
}

void CUser::OnFollowCharacter(CInPacket& iPacket)
{
    __sub_004E3220(this, nullptr, iPacket);
}

void CUser::OnPassiveMove(CInPacket& iPacket)
{
    //__sub_004DEA10(this, nullptr, iPacket);
    if (m_dwDriverID)
    {
        GetVecCtrlUser()->GetMovePath().OnMovePacket(iPacket, true);
    }
}

void CUser::OnFollowCharacterFailed(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUser::FixedPosTo(unsigned long dwCharID, long nDX, long nDY)
{
    return __sub_004E0190(this, nullptr, dwCharID, nDX, nDY);
    //TODO(game)
    /*auto user = CUserPool::GetInstance()->GetUser(dwCharID);
    if (!user)
        return -1;

    auto vec = user->GetVecCtrlUser();

    auto moveAction = vec->GetMoveAction();
    auto pos = user->GetPos();
    if ( moveAction >> 1 == 7 || moveAction >> 1 == 8 )
    {
        //result.p = (y + v22);
    }
    else
    {
        v14 = v21;
        if ( (user_->m_nMoveAction & 1) == 0 )
            v14 = -v21;
        nDY += v14;
    }


    long updated = vec->UpdatePassive(&nDY, &nDY);
    if (updated == -1)
        updated = 0;


    CAvatar::SetMoveAction(0);
    return updated;*/
}

void CUser::SetDriverID(unsigned long nTargetID)
{
    m_dwDriverID = nTargetID;
}

unsigned long CUser::GetDriverID()
{
    return m_dwDriverID;
}

int32_t CUser::IsFollow()
{
    return GetDriverID() != 0;
}

void CUser::SetPassenserID(unsigned long nTargetID)
{
    m_dwPassenserID = nTargetID;
}

int32_t CUser::GetPassenserID()
{
    return m_dwPassenserID;
}

void CUser::ShowRecoverUpgradeCountEffect(CInPacket& iPacket)
{
    __sub_004E0380(this, nullptr, iPacket);
}

void CUser::Update()
{
    __sub_004FB8D0(this, nullptr);
}

void CUser::OnSetDead(int32_t bOnInit)
{
    __sub_000BC050(this, nullptr, bOnInit);
}

void CUser::OnRevive()
{
    __sub_004DFE40(this, nullptr);
}

int32_t CUser::SetCoupleItemEffect(long nType, CUser* pPairUser, long nItemID)
{
    return __sub_004F05D0(this, nullptr, nType, pPairUser, nItemID);
}

int32_t CUser::IsCoupleItem(const _LARGE_INTEGER& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const _LARGE_INTEGER& CUser::GetCoupleItemSN()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUser::SetWeddingRingEffect(long nType, CUser* pPairUser, long nRingID)
{
    __sub_004F18E0(this, nullptr, nType, pPairUser, nRingID);
}

int32_t CUser::IsMarriageCharacter(const unsigned long& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const unsigned long& CUser::GetMarriageCharacterID()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::SetFriendShipItemEffect(long nType, CUser* pPairUser, long nItemID)
{
    return __sub_004F0D10(this, nullptr, nType, pPairUser, nItemID);
}

int32_t CUser::IsFriendShipItem(const _LARGE_INTEGER& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const _LARGE_INTEGER& CUser::GetFriendShipItemSN()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::SetNewYearCardEffect(long nType, CUser* pPairUser, unsigned long dwSN, long nItemID)
{
    return __sub_004F1450(this, nullptr, nType, pPairUser, dwSN, nItemID);
}

long CUser::GetLocalUserLevel()
{
    return __sub_005D3800(this, nullptr);
}

int32_t CUser::SetCoupleChairEffect(long nType, CUser* pPairUser, long nItemID)
{
    return __sub_004F1FE0(this, nullptr, nType, pPairUser, nItemID);
}

long CUser::GetHitPeriodRemain()
{
    return __sub_005D3800(this, nullptr);
}

void CUser::SetMorphed(unsigned long dwMorphTemplateID, int32_t bOnCreate)
{
    __sub_004F5F90(this, nullptr, dwMorphTemplateID, bOnCreate);
}

void CUser::SetGhostState(long nGhostIndex, int32_t bOnCreate)
{
    __sub_004F5E70(this, nullptr, nGhostIndex, bOnCreate);
}

int32_t CUser::IsTamingMobTired()
{
    return __sub_004DE210(this, nullptr);
}

void CUser::SetTeamForMCarnival(long arg0)
{
    m_nTeamForMCarnival = arg0;
}

ZXString<char> CUser::GetTeamNameForMCarnival()
{
    //return __sub_004E6A60(this, nullptr);
    auto& sp = StringPool::GetInstance();
    auto team = m_nTeamForMCarnival;
    if (team && team != 1)
    {
        return {};
    }
    auto code = team ? 0x1018 : 0x1017;
    auto fmt = sp.GetString(code);
    auto teamCode = team ? 2 : 1;
    return ZXString<char>::FromFmt(fmt.c_str(), teamCode);
}

long CUser::GetTeamForMCarnival()
{
    return __sub_005D3800(this, nullptr);
}

long CUser::GetTeamForPartyRaid()
{
    //return __sub_005D3800(this, nullptr);
    auto ctx = CWvsContext::GetInstance();
    auto team = ctx->GetTeamForPartyRaid();
    auto partyMemberId = ctx->IsPartyMemberID(m_dwCharacterId);
    if (team == PARTY_RAID_TEAM_RED)
        return partyMemberId == 0;
    if (team == PARTY_RAID_TEAM_BLUE)
        return partyMemberId != 0;
    return 255;
}

ZXString<char> CUser::GetTeamNameForPartyRaid()
{
    //return __sub_004E6B40(this, nullptr);
    auto& sp = StringPool::GetInstance();
    auto team = GetTeamForPartyRaid();
    if (team && team != 1)
    {
        return {};
    }

    auto code = team ? 0x1570 : 0x156F;
    auto fmt = sp.GetString(code);
    auto teamCode = team ? 2 : 1;
    return ZXString<char>::FromFmt(fmt.c_str(), teamCode);
}

long CUser::GetPhase()
{
    return m_nPhase;
}

void CUser::SetPhase(long arg0)
{
    m_nPhase = arg0;
}

unsigned long CUser::GetPhaseAlpha()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUser::IsSamePhaseWithLocalUser()
{
    return __sub_004DEC40(this, nullptr);
}

void CUser::GetUpFromPortableChair(int32_t bOnInit)
{
    __sub_000BC050(this, nullptr, bOnInit);
}

void CUser::ShowGauge(int32_t bOnInit)
{
    __sub_000BC050(this, nullptr, bOnInit);
}

void CUser::DrawGauge(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUser::DrawGauge()
{
    __sub_004E5FF0(this, nullptr);
}

void CUser::ShowHPTag(int32_t bOnInit)
{
    __sub_000BC050(this, nullptr, bOnInit);
}

void CUser::DrawHPTag(long arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUser::GetPartyHP()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUser::DrawNameTags()
{
    __sub_004EA990(this, nullptr);
}

unsigned long CUser::GetTargetID()
{
    return m_nTargetID;
}

void CUser::SetTargetID(unsigned long nTargetID)
{
    m_nTargetID = nTargetID;
}

long CUser::GetType()
{
    //return __sub_000BC060(this, nullptr);
    return 0;
}

long CUser::OnResolveMoveAction(long nInputX, long nInputY, long nCurMoveAction, const CVecCtrl* pvc)
{
    char* pThis = (char*)this;
    return __sub_004E5800((CUser*)(pThis + 4), nullptr, nInputX, nInputY, nCurMoveAction, pvc);
    /*auto oneTimeAct = GetOneTimeAction();
    if (m_pSpectrumAniState)
    {
        long dir{};
        auto rawAct = MoveAction2RawAction(m_nMoveAction, &dir);
        auto act = oneTimeAct <= -1 ? rawAct : oneTimeAct;
        switch (act)
        {
        case 45:
        case 46:
        case 64:
        case 65:
            m_pSpectrumAniState->bPause = oneTimeAct <= -1 && pvc->IsStopped() && !nInputY;
            break;
        default:
            break;
        }
    }


    auto bLeft = nCurMoveAction & 1;
    auto action = 0;
    if (!nInputX && pvc->GetFoothold())
    {
        action = nInputY > 0 ? 5 : (m_tAlertRemain > 0) * 2 + 2;
    }
    else if (!pvc->GetFoothold())
    {
        if (!pvc->IsOnLadder())
        {
            if (!pvc->IsOnRope())
            {
                action = m_bRocketBoosterLoop ? 20 : 3;

                if (pvc->IsSwimming())
                {
                    action = 6;
                }
                bLeft = nInputX < 0;
            }
            else
            {
                const auto ridingDragon = IsRidingEvanDragon();//is_evan_dragon_riding_item(m_nRidingVehicleID);
                action = ridingDragon ? 2 - (nInputY != 0) : 8;
            }
        }
        else
        {
            const auto ridingDragon = IsRidingEvanDragon();//is_evan_dragon_riding_item(m_nRidingVehicleID);
            action = ridingDragon ? 2 - (nInputY != 0) : 7;
        }
    }
    else
    {

    }


    if (oneTimeAct == 207 && (action == 7 || action == 8))
    {
        m_pDoubleJumpEffect = 0;
        m_nOneTimeAction = -1;
        m_nTamingMobOneTimeAction = -1;
        ClearActionLayer(1);
        PrepareActionLayer(6, 100, false);

    }


    if (pvc->IsUserFlying() && !pvc->GetFoothold() && oneTimeAct <= -1)
    {
        if ( m_nRidingVehicleID / 10000 == 193 )
        {
            if (pvc->IsStopped() || IsRidingWildHunterJaguar() || m_nRidingVehicleID == 1932016)
            {
                action = 6;
            }
            else
            {
                action = 2;
            }
        }
        else
        {
            action = 18 - static_cast<int>(pvc->IsStopped());
        }
    }


    m_nLastMAType = action;
    return (bLeft & 1) | action << 1;*/
}

void CUser::OnLayerZChanged(const CVecCtrl* pvc)
{
    //__sub_004E0110(this, nullptr, pvc);
    if (m_pvc.op_arrow() == pvc)
    {
        SetLayerZ();
        if (auto dragon = m_pDragon)
            m_pDragon->SetLayerZ();
    }
}

const ZRef<CAttrShoe> CUser::GetShoeAttr()
{
    return {};
}

const tagPOINT CUser::GetPos()
{
    return m_ptPos.op_tagpoint();
}

const tagPOINT CUser::GetPosPrev()
{
    return m_ptPosPrev.op_tagpoint();
}

long CUser::GetZMass()
{
    return GetVecCtrlUser()->GetZMass();
}

long CUser::GetLastJumpInputX() const
{
    return m_nLastJumpInputX;
}

void CUser::SetLastJumpInputX(long arg0)
{
    m_nLastJumpInputX = arg0;
}

long __fastcall CUser::_ZtlSecureGet_m_nChatBalloonType() const
{
    return __ZtlSecureFuse((long*)this->_ZtlSecureTear_m_nChatBalloonType.data(),
                           this->_ZtlSecureTear_m_nChatBalloonType_CS);
}

long __fastcall CUser::_ZtlSecurePut_m_nChatBalloonType(long arg0)
{
    _ZtlSecureTear_m_nChatBalloonType_CS = __ZtlSecureTear(arg0, this->_ZtlSecureTear_m_nChatBalloonType.data());
    return arg0;
}

long __fastcall CUser::_ZtlSecureGet_m_nNameTagType() const
{
    return __ZtlSecureFuse((long*)this->_ZtlSecureTear_m_nNameTagType.data(), this->_ZtlSecureTear_m_nNameTagType_CS);
}

long __fastcall CUser::_ZtlSecurePut_m_nNameTagType(long arg0)
{
    _ZtlSecureTear_m_nNameTagType_CS = __ZtlSecureTear(arg0, this->_ZtlSecureTear_m_nNameTagType.data());
    return arg0;
}

ZRef<CDragon> CUser::GetDragon()
{
    //return __sub_005F2860(this, nullptr);
    return m_pDragon;
}

void CUser::RegisterSerialBullet(long nSkillID, ATTACKINFO& a, const tagPOINT& pt0, const CMob* pPrevMob,
                                 unsigned long tCur, unsigned long& tPrevDelay, const Ztl_bstr_t& sBulletEffectUOL)
{
    __sub_004EA300(this, nullptr, nSkillID, a, pt0, pPrevMob, tCur, tPrevDelay, sBulletEffectUOL);
}

CUser::ADDITIONALLAYER* CUser::GetAdditionalLayer(long nType)
{
    return __sub_004DE110(this, nullptr, nType);
    /*ADDITIONALLAYER* result; // eax

    switch (nType)
    {
    case 0:
        result = &this->m_aAdditionalLayer[0];
        break;
    case 1:
        result = &this->m_aAdditionalLayer[1];
        break;
    case 2:
    case 3:
        result = &this->m_aAdditionalLayer[2];
        break;
    case 4:
        result = &this->m_aAdditionalLayer[31];
        break;
    case 5:
        result = &this->m_aAdditionalLayer[7];
        break;
    case 6:
        result = &this->m_aAdditionalLayer[19];
        break;
    case 7:
        result = &this->m_aAdditionalLayer[4];
        break;
    case 8:
        result = &this->m_aAdditionalLayer[63];
        break;
    case 9:
        result = &this->m_aAdditionalLayer[51];
        break;
    case 10:
        result = &this->m_aAdditionalLayer[52];
        break;
    case 11:
        result = &this->m_aAdditionalLayer[54];
        break;
    case 12:
        result = &this->m_aAdditionalLayer[5];
        break;
    case 13:
        result = &this->m_aAdditionalLayer[59];
        break;
    case 15:
        result = &this->m_aAdditionalLayer[60];
        break;
    case 16:
        result = &this->m_aAdditionalLayer[61];
        break;
    case 17:
        result = &this->m_aAdditionalLayer[62];
        break;
    case 18:
        result = &this->m_aAdditionalLayer[73];
        break;
    default:
        result = nullptr;
        break;
    }
    return result;*/
}

CUser::ADDITIONALLAYER* CUser::RemoveAdditionalLayer(long nType)
{
    return __sub_004E06F0(this, nullptr, nType);
    //TODO
    /*auto v2 = 0;
    auto v3 = 0;
    switch (nType)
    {
    case 0:
        v2 = 0;
        v3 = 2;
        break;
    case 1:
        v2 = 1;
        v3 = 2;
        break;
    case 2:
        v2 = 2;
        v3 = 2;
        break;
    case 3:
        v2 = 2;
        v3 = 4;
        break;
    case 4:
        v2 = 31;
        v3 = 51;
        break;
    case 5:
        v2 = 7;
        v3 = 19;
        break;
    case 6:
        v2 = 19;
        v3 = 31;
        break;
    case 7:
        v2 = 4;
        v3 = 5;
        break;
    case 8:
        v2 = 63;
        v3 = 73;
        break;
    case 9:
        v2 = 51;
        v3 = 52;
        break;
    case 10:
        v2 = 52;
        v3 = 54;
        break;
    case 11:
        v2 = 54;
        v3 = 59;
        break;
    case 12:
        v2 = 5;
        v3 = 7;
        break;
    case 13:
        v2 = 59;
        v3 = 60;
        break;
    case 15:
        v2 = 60;
        v3 = 61;
        break;
    case 16:
        v2 = 61;
        v3 = 61;
        break;
    case 17:
        v2 = 62;
        v3 = 63;
        break;
    case 18:
        v2 = 73;
        v3 = 75;
        break;
    default:
        v2 = nType;
        v3 = nType;
        break;
    }
    for (auto i = v2; i < v3; ++i)
    {
        auto& v5 = this->m_aAdditionalLayer[i];
        v5.nData = -1;
        v5.l.bFixed = 1;
        v5.l.pLayer = 0;
        auto& layer = v5.l.pLayer;
        v5.nDataForRepeat = -1;
        v5.l2.bFixed = 1;
        v5.l2.pLayer = 0;
        if (i == 1)
            this->m_aAdditionalLayer[1].nData = 0;
    }
    return &this->m_aAdditionalLayer[v2];*/
}

CUser::ADDITIONALLAYER* CUser::RetrieveNewYearCardAdditionalLayer(unsigned long dwSN)
{
    return __sub_004E6920(this, nullptr, dwSN);
}

void CUser::UpdateAdditionalLayer()
{
    __sub_004E08B0(this, nullptr);
}

int32_t CUser::LoadLayer(Ztl_bstr_t bsUOL, int32_t bLeft, USERLAYER& l, long* pnRepeatStartIndex)
{
    return __sub_004E96D0(this, nullptr, CreateNakedParam(bsUOL), bLeft, l, pnRepeatStartIndex);
}

void CUser::ShiftAffectedSkillAnimation(int32_t bForced)
{
    //__sub_000BC050(this, nullptr, bOnInit);
    //TODO(game) might be wrong
    static uint32_t skillAnimCounter;
    auto counter = ++skillAnimCounter;


    auto i = 0;

    while (true)
    {
        auto& aff = m_lpLayerAffected[i];
        auto n = aff.GetCount();

        auto color = 0;
        if (!n)
        {
            break;
        }


        auto& lastLayer = *aff.GetTailPosition();
        if (n == 1)
        {
            color = lastLayer->Getcolor();
            counter = skillAnimCounter;
        }


        if (bForced)
        {
            skillAnimCounter = 1;
        }
        else if (counter % 33)
        {
            return;
        }


        color = lastLayer->Getcolor();


        if ((color & 0xFF000000) != 0)
        {
            auto alpha = lastLayer->Getalpha();
            Z_CHECK_HR(alpha->RelMove(0, 0, vtMissing, vtMissing));

            aff.RemoveAt(&lastLayer);
            aff.AddHead(lastLayer);


            for (auto& se : m_lAffectedSkillEntry)
            {
                if (se.posList == (__POSITION*)&lastLayer)
                    se.posList = (__POSITION*)aff.GetHeadPosition();
            }

            lastLayer = *aff.GetTailPosition();
        }

        auto alpha = lastLayer->Getalpha();
        Z_CHECK_HR(alpha->RelMove(255, 0, vtMissing, vtMissing));
        Z_CHECK(lastLayer->Animate(GA_REPEAT, vtMissing, vtMissing));


        if (++i >= 2)
            break;

        counter = skillAnimCounter;
    }
}

void CUser::PrepareActionLayer(long nActionSpeed, long nWalkSpeed, int32_t bKeyDown)
{
    auto psdSpeed = 0;
    if (IsLocalUser())
    {
        if (auto psd = CUserLocal::GetInstance()->GetPassiveSkillData(); psd)
        {
            psdSpeed = psd->nPsdSpeed;
        }
    }


    auto& ss = GetSecondaryStat();
    auto speed = ss.GetSpeed(psdSpeed);
    if (auto slow = ss._ZtlSecureGet_nSlow_())
        speed = slow;
    if (auto frozen = ss._ZtlSecureGet_nFrozen_())
        speed += (static_cast<double>(speed * frozen) / 100.0);

    if (!m_bDelayedLoad)
    {
        CAvatar::PrepareActionLayer(nActionSpeed, speed, bKeyDown);
        PrepareShadowPartnerActionLayer();
        PrepareMirrorActionLayer();
        auto height = GetHeight();
        m_chatBalloon.AdjustCoordY(height);
        UpdateAdditionalLayer();
    }
}

void CUser::PrepareShadowPartnerActionLayer()
{
    __sub_004E1730(this, nullptr);
}

void CUser::PrepareMirrorActionLayer()
{
    __sub_004DF7E0(this, nullptr);
}

void CUser::ShowAffectedSkillAni(long tCur)
{
    __sub_004EB860(this, nullptr, tCur);
}

void CUser::ShowSkillEffect(const SKILLENTRY* arg0, long arg1, long arg2, int32_t arg3, long arg4, tagPOINT* arg5)
{
    __sub_004F6F60(this, nullptr, arg0, arg1, arg2, arg3, arg4, arg5);
}

void CUser::ShowSkillAffected(const SKILLENTRY* pSkill, long nSLV, int32_t bSpecial, long nSelect)
{
    __sub_004EC8E0(this, nullptr, pSkill, nSLV, bSpecial, nSelect);
}

void CUser::ShowSkillSpecialEffect(const SKILLENTRY* pSkill, long nDelayRate, CGrenade* pGrenade, long nSLV,
                                   long nTimeBombX, long nTimeBombY)
{
    __sub_004ECA90(this, nullptr, pSkill, nDelayRate, pGrenade, nSLV, nTimeBombX, nTimeBombY);
}

void CUser::ShowSkillPrepare(const SKILLENTRY* pSkill, long nActionSpeed, int32_t bKeyDown, int32_t bEnd)
{
    __sub_004E8160(this, nullptr, pSkill, nActionSpeed, bKeyDown, bEnd);
}

void CUser::ShowMorphEffect(int32_t bOnLadderOrRope, int32_t bSound)
{
    __sub_004E6750(this, nullptr, bOnLadderOrRope, bSound);
}

void CUser::ShowRideVehicleEffect(long nVehicleID)
{
    __sub_004ECE00(this, nullptr, nVehicleID);
}

void CUser::ShowOakCaskEffect()
{
    __sub_004DFFE0(this, nullptr);
}

void CUser::SetLayerZ()
{
    //__sub_004DFC10(this, nullptr);
    //TODO verify
    auto vec = GetVecCtrlUser();
    auto z = (vec->IsActive() != 0 ? 7 : 2) + 10 * (3000 * vec->GetPage() - vec->GetZMass()) - 0x3FFF8ADA;
    if (this->m_dwPassenserID)
    {
        auto user = CUserPool::GetInstance()->GetUser(this->m_dwPassenserID);
        CAvatar* userAvatar = user;
        if (user)
        {
            if (vec->GetLadderOrRope())
            {
                if (this->IsLocalUser() && userAvatar->GetLayerZ() < z)
                {
                    userAvatar->SetLayerZ(z + 1);
                    CAvatar::SetLayerZ(z);
                    return;
                }
                if (user->IsLocalUser())
                {
                    CAvatar::SetLayerZ(z + 4);
                    return;
                }
            }
            else
            {
                if (IsLocalUser() && userAvatar->GetLayerZ() > z)
                {
                    userAvatar->SetLayerZ(z - 1);
                    CAvatar::SetLayerZ(z);
                    return;
                }
                if (user->IsLocalUser())
                {
                    CAvatar::SetLayerZ(z + 6);
                    return;
                }
                if (!this->IsLocalUser())
                {
                    CAvatar::SetLayerZ(z + 1);
                    return;
                }
            }
        }
    }
    else if (this->m_dwDriverID)
    {
        auto user = CUserPool::GetInstance()->GetUser(this->m_dwPassenserID);
        CAvatar* userAvatar = user;
        if (user)
        {
            if (vec->GetLadderOrRope())
            {
                if (!this->IsLocalUser())
                {
                    auto driverZ = userAvatar->GetLayerZ();
                    CAvatar::SetLayerZ(driverZ + 1);
                    return;
                }
            }
            else if (user->IsLocalUser())
            {
                const auto vecDriver = user->GetVecCtrlUser();
                if (vecDriver->GetLadderOrRope())
                {
                    auto driverZ = userAvatar->GetLayerZ();
                    CAvatar::SetLayerZ(driverZ + 1);
                    return;
                }
                z = userAvatar->GetLayerZ() - 1;
            }
        }
    }
    CAvatar::SetLayerZ(z);
}

void CUser::RegisterNextBlink()
{
    CAvatar::RegisterNextBlink();
}

void CUser::SetAbilityEquip()
{
    //__sub_004EB5E0(this, nullptr);
    auto oldNameTagTy = _ZtlSecureGet_m_nNameTagType();
    this->_ZtlSecurePut_m_nNameTagType(0);
    this->_ZtlSecurePut_m_nChatBalloonType(0);

    auto itemInfo = CItemInfo::GetInstance();
    auto& sp = StringPool::GetInstance();

    for (auto& ring : _D_G_ANRINGBODYPART)
    {
        auto eq = m_avatarLook.anHairEquip[ring];
        if (!eq)
        {
            continue;
        }


        auto itemProp = itemInfo->GetItemInfo(eq);
        if (!itemProp)
        {
            continue;
        }


        auto v = itemProp->Getitem(sp.GetBSTR(0x99D));
        auto ty = get_int32(v, 0);

        if (ty)
            _ZtlSecurePut_m_nChatBalloonType(ty);

        v = itemProp->Getitem(sp.GetBSTR(0x99D));
        ty = get_int32(v, 0);

        if (ty)
            _ZtlSecurePut_m_nNameTagType(ty);
    }

    auto nameTagTy = _ZtlSecureGet_m_nNameTagType();
    if (nameTagTy != oldNameTagTy || m_nMedalItemID != m_avatarLook.anHairEquip[49])
        DrawNameTags();
}

void CUser::SetSetItemEffect()
{
    if (m_bDelayedLoad)
        return;


    /*long anPet[3]{};
    for (auto i = 0; i < 3; ++i)
    {
        auto pet = m_apPet[i];
        if (pet)
            anPet[i] = pet->GetTemplateID();
    }

    auto itemInfo = CItemInfo::GetInstance();
    auto effectId = itemInfo->GetSetItemEffect(m_avatarLook.anHairEquip.data(), m_avatarLook.nWeaponStickerID,
                                               (long*)&anPet);

    ZXString16 wsLinkedEffect;
    bool itemSetEffect = false;
    auto ctx = CWvsContext::GetInstance();
    if (!effectId)
    {
        if (IsLocalUser())
        {
            auto isLocal = IsLocalUser();
            ZRef<CItemInfo::SETITEMINFO> pSet;
            if (itemInfo->GetSetItemInfo().GetAt(m_nCompletedSetItemID, &pSet))
            {
                wsLinkedEffect = pSet->sCompleteEffectLink;
                effectId = pSet->nSetItemID;
                itemSetEffect = true;
            }
        }
        else
        {
            EQUIPPED_SETITEM es{};
            auto cd = ctx->GetCharacterData();
        }
    }*/

    //TODO(game)

    //__sub_004F4BD0(this, nullptr);
}

void CUser::SetSetItemBackground(int32_t bTeleport, int32_t bSetPetBackgroundEffect)
{
    //TODO(game) __sub_004ED540(this, nullptr, bTeleport, bSetPetBackgroundEffect);
}

void CUser::SetCarryItemEffect(long nCount)
{
    __sub_004EDB90(this, nullptr, nCount);
}

void CUser::ShowEffectItem(long nItemID)
{
    __sub_004EFB20(this, nullptr, nItemID);
}

void CUser::ShowFollowEffectItem(long arg0)
{
    __sub_004E8F90(this, nullptr, arg0);
}

void CUser::ShowEffectRocketBooster(const SKILLENTRY* pSkill, long nSLV)
{
    __sub_004EF660(this, nullptr, pSkill, nSLV);
}

void CUser::ShowEffectRocketBoosterAttack(const SKILLENTRY* pSkill, long nSLV)
{
    __sub_004EF920(this, nullptr, pSkill, nSLV);
}

void CUser::ShowEffectSiegeStart(const SKILLENTRY* pSkill, long nSLV, int32_t bSpecial)
{
    __sub_004E0580(this, nullptr, pSkill, nSLV, bSpecial);
}

void CUser::ShowEffectSiegeAttack(const SKILLENTRY* pSkill, long nSLV)
{
    __sub_004EF7F0(this, nullptr, pSkill, nSLV);
}

void CUser::ShowEffectSiegeEnd(const SKILLENTRY* pSkill, long nSLV, int32_t bSpecial)
{
    //__sub_004E0600(this, nullptr, pSkill, nSLV, bSpecial);
    if (pSkill)
    {
        if (GetOneTimeAction() > -1)
        {
            this->m_nOneTimeAction = -1;
            this->m_nTamingMobOneTimeAction = -1;
            ClearActionLayer(1);
        }
        this->m_nOneTimeAction = bSpecial ? 228 : 4 * (pSkill->nSkillID != 35111004) + 218;
        PrepareActionLayer(6, 100, 0);
    }
}

void CUser::ShowEffectFlameThrowerEnd(const SKILLENTRY* pSkill, long nSLV)
{
    //__sub_004E0680(this, nullptr, pSkill, nSLV);
    if (pSkill)
    {
        if (GetOneTimeAction() > -1)
        {
            this->m_nOneTimeAction = -1;
            this->m_nTamingMobOneTimeAction = -1;
            ClearActionLayer(1);
        }
        this->m_nOneTimeAction = pSkill->nSkillID != 35001001 ? 238 : 235;
        PrepareActionLayer(6, 100, 0);
    }
}

void CUser::SetAdminEffect()
{
    //__sub_004EAD40(this, nullptr);
    auto additionalLayer = GetAdditionalLayer(2);
    auto key = StringPool::GetInstance().GetBSTR(0xBFA);
    long repeatIx = 0;
    if (LoadLayer(key, true, additionalLayer->l, &repeatIx))
    {
        Z_CHECK_HR(additionalLayer->l.pLayer->Animate(GA_REPEAT, vtMissing, vtMissing));
    }
}

void CUser::SetIsAdminEffectAvaliable()
{
    //TODO correct?
    m_bShowAdminEffect = 1;
}

void CUser::RegisterAfterimage(long tStart, int32_t bLeft, long nAction, Ztl_bstr_t sAfterimageUOL, long nWeaponItemID,
                               long nSubWeaponItemID, long nChargeSkillID)
{
    __sub_00502D90(this, nullptr, tStart, bLeft, nAction, CreateNakedParam(sAfterimageUOL), nWeaponItemID,
                   nSubWeaponItemID, nChargeSkillID);
}

void CUser::ThrowGrenade(long pGrenade, long nAngle, long nImpactX, tagPOINT nImpactY)
{
    __sub_004F2840(this, nullptr, pGrenade, nAngle, nImpactX, CreateNakedParam(nImpactY));
}

long __cdecl CUser::GetShootDelay(const SKILLENTRY* pSkill, long nDefault)
{
    //return __sub_004DE240(pSkill, nDefault);

    if (!pSkill)
        return nDefault;
    const int nSkillID = pSkill->nSkillID;
    if (pSkill->nSkillID > 13111006)
    {
        if (nSkillID > 33101001)
        {
            if (nSkillID != 33121005)
                return nDefault;
        }
        else if (nSkillID != 33101001)
        {
            if (nSkillID == 13111007)
                return 561;
            if (nSkillID != 15111007)
                return nDefault;
            return 449;
        }
        return pSkill->tBallDelay;
    }
    if (pSkill->nSkillID == 13111006)
        return 618;
    if (nSkillID <= 0x4F7F90)
    {
        if (nSkillID == 0x4F7F90)
            return 90;
        if (nSkillID != 3221001)
        {
            if (nSkillID == 0x4C4F2B)
                return 90;
            return nDefault;
        }
        return pSkill->tBallDelay;
    }
    const int v4 = nSkillID - 5221007;
    if (!v4)
        return 180;
    if (v4 != 1)
        return nDefault;
    return 600;
}

long __cdecl CUser::GetBulletDelay(long nBulletItemID, long nSkillID, long nDefault)
{
    //return __sub_004DE2D0(nBulletItemID, nSkillID, nDefault);
    if (nBulletItemID / 10000 == 207 || nBulletItemID / 1000 == 5021 || nSkillID == HERMIT_SHADOW_MESO)
        return 120;
    switch (nSkillID)
    {
    case RANGER_STRAFE:
    case SNIPER_STRAFE:
    case WA3_STRAFE:
    case WH1_TRIPLE_SHOT:
    case WH3_ENDURING_FIRE:
        return 60;
    case MECH1_GATLING_GUN:
    case MECH2_ENHANCED_GATLING_GUN:
        return 90;
    case CORSAIR_BATTLESHIP_CANNON:
        return 120;
    case PIRATE_DOUBLE_SHOT:
    case OUTLAW_BURST_FIRE:
        return 240;
        default:
            return nDefault;
    }
}

Ztl_bstr_t __cdecl CUser::GetAfterimageUOL(SKILLENTRY* pSkill, long nSLV, Ztl_bstr_t sName, long nMastery,
                                           long nCharLevel)
{
    //return __sub_004ED0C0(pSkill, nSLV, CreateNakedParam(sName), nMastery, nCharLevel);
    static Ztl_bstr_t head = _GetBSTR(0x9A7);
    static Ztl_bstr_t slash = L"/";
    if (!sName.length())
        return L"";

    if (pSkill)
    {
        auto uol = pSkill->GetAfterimageUOL(nCharLevel);
        if (uol.length())
        {
            uol += slash;
            uol += sName;
            return uol;
        }
    }

    wchar_t key[32]{};
    auto n = ((nMastery - 10) & ((nMastery - 10 <= 0) - 1)) / 5;
    _itow_s(n, key, 10);

    Ztl_bstr_t uol = head;
    uol += sName;
    uol += slash;
    uol += key;
    return uol;
}

void CUser::PetAutoSpeaking(long nEvent)
{
    //__sub_004DEB10(this, nullptr, nEvent);
    for (auto& pet : m_apPet)
    {
        if (!pet)
            break;
        pet->AutoSpeakingByEvent(nEvent);
    }
}

long CUser::GetDamageDelay(long nSkillID, long nDamageIdx, long nDamagePerMob)
{
    //return __sub_004E0FF0(this, nullptr, nSkillID, nDamageIdx, nDamagePerMob);
    int aDelay_First[] = {0x1C2, 0x2D0, 0x3DE, 0x4EC, 0x6AE, 0x7BC};
    int aDelay_Vampire[] = {0, 0x3C, 0x1A4, 0x294};
    auto nDefaultDelay = 0;

    if (nSkillID > 15111004)
    {
        if (nSkillID != 33121001)
            return -1;

        auto delay = nDamageIdx == nDamagePerMob - 1 ? 1680 : 120 * nDamageIdx;
        if (delay != -1)
        {
            nDefaultDelay = delay;
        }
        else
        {
            //TODO(user) in theory not possible?
            //v5 = (const int*)33121001;
            //nDefaultDelay = v5[nDamageIdx / (nDamagePerMob / nDamagePerMob)];
            UNIMPLEMENTED;
        }
    }
    else
    {
        auto ix = 0;
        const int* dmgArr = (const int*)&aDelay_First;
        if (nSkillID == 14101006)
        {
            dmgArr = (const int*)&aDelay_Vampire;
            ix = 4;
        }
        else if (nSkillID == 15111004 || nSkillID == 5121007)
        {
            dmgArr = (const int*)&aDelay_First;
            ix = 6;
        }
        else
        {
            return -1;
        }

        nDefaultDelay = dmgArr[nDamageIdx / (nDamagePerMob / ix)];
    }

    auto& ss = this->GetSecondaryStat();
    auto auraBooster = GetAuraBooster();
    auto degree = get_attack_speed_degree(_ZtlSecureGet_m_nWeaponAttackSpeed(), nSkillID,
                                          ss._ZtlSecureGet_nBooster_(), ss.aTemporaryStat[4]->GetValue(),
                                          auraBooster, ss._ZtlSecureGet_nFrozen_());
    return nDefaultDelay * (degree + 10) / 16;
}

long CUser::GetJobCode()
{
    //return __sub_004EB550(this, nullptr);
    return -1;
}

void CUser::ShowKeyowrdEffect(const char* szChat)
{
    //__sub_004DEA90(this, nullptr, szChat);
    const auto z = m_pLayerUnderFace->Getz();
    m_KeywordEffect.Show(szChat, m_pOrigin, z);
}

void CUser::UpdateKeywordEffects()
{
    __sub_004EA590(this, nullptr);
}

void CUser::LoadDojangBerserkEffect()
{
    __sub_004F6170(this, nullptr);
}

void CUser::RemoveDojangBerserkEffect()
{
    __sub_004E1130(this, nullptr);
}

void CUser::LoadDojangInvincibleEffect()
{
    __sub_004F6250(this, nullptr);
}

void CUser::RemoveDojangInvincibleEffect()
{
    //__sub_004E1150(this, nullptr);
    if (!m_pLayerSuddenDeathEffect)
    {
        m_pLayerSuddenDeathEffect = LoadSkillRepeatEffect(4331003, m_pLayerUnderFace);
    }
}

void CUser::LoadSuddenDeathEffect()
{
    //__sub_004F3A10(this, nullptr);
    m_pLayerSuddenDeathEffect = 0;
}

void CUser::RemoveSuddenDeathEffect()
{
    //__sub_004E12C0(this, nullptr);
    m_pLayerSuddenDeathEffect = 0;
}

void CUser::LoadFinalCutEffect()
{
    //__sub_004F3A90(this, nullptr);
    if (!m_pLayerFinalCutEffect)
    {
        m_pLayerFinalCutEffect = LoadSkillRepeatEffect(0x423D0A, m_pLayerUnderFace);
    }
}

void CUser::RemoveFinalCutEffect()
{
    //__sub_004E12E0(this, nullptr);
    m_pLayerFinalCutEffect = 0;
}

void CUser::LoadBlessingArmor()
{
    //__sub_004F3B10(this, nullptr);
    if (m_pLayerBlessingArmor)
        return;

    m_pLayerBlessingArmor = LoadSkillRepeatEffect(1220013, m_pLayerUnderFace);
}

void CUser::RemoveBlessingArmor()
{
    //__sub_004E1300(this, nullptr);
    m_pLayerBlessingArmor = 0;
}

void CUser::LoadSwallowingEffect()
{
    __sub_004F3B90(this, nullptr);
}

void CUser::RemoveSwallowingEffect()
{
    //__sub_004E1320(this, nullptr);
    m_pLayerSwallowing = 0;
}

void CUser::UpdateMoreWildEffect(long tCur)
{
    __sub_004FB4C0(this, nullptr, tCur);
}

void CUser::LoadMoreWildEffect(long tDelay, int32_t bForced)
{
    __sub_004F6310(this, nullptr, tDelay, bForced);
}

void CUser::RemoveMoreWildEffect()
{
    //__sub_004FB880(this, nullptr);
    if (m_pLayerMoreWildEffect)
        LoadMoreWildFinishEffect();

    m_pLayerMoreWildEffect = 0;
    m_pLayerMoreWildEffect0 = 0;
}

void CUser::LoadMoreWildFinishEffect()
{
    __sub_004F6910(this, nullptr);
}

void CUser::RemoveMoreWildFinishEffect()
{
    //__sub_004E1340(this, nullptr);
    m_pLayerMoreWildEffect = 0;
}

void CUser::LoadDarkForceEffect()
{
    __sub_004F3E10(this, nullptr);
}

void CUser::UpdateAr01Effect()
{
    __sub_004F4060(this, nullptr);
}

long CUser::GetTeamForBattlefield() const
{
    return m_nTeamForBattlefield;
}

void CUser::SetTeamForBattlefield(const long arg0)
{
    m_nTeamForBattlefield = arg0;
}

_x_com_ptr<IWzGr2DLayer> CUser::LoadSkillRepeatEffect(long nSkillID, _x_com_ptr<IWzGr2DLayer> pOverlay)
{
    _x_com_ptr<IWzGr2DLayer> ret;
    return *__sub_004F2BB0(this, nullptr, &ret, nSkillID, CreateNakedParam(pOverlay));
}

long CUser::GetDashingSkill()
{
    //return __sub_004DE380(this, nullptr);
    auto job = GetJobCode();

    auto subJob = job % 1000 / 100;
    if (subJob == 5)
        return job / 1000 != 1 ? 5001005 : 15001003;

    if (subJob == 4)
        return 4321000;
    return 0;
}

void CUser::_LoadItemRepeatEffect(long nItemEffectID)
{
    __sub_004F31A0(this, nullptr, nItemEffectID);
}

void CUser::_RemoveItemRepeatEffect()
{
    //__sub_004E1170(this, nullptr);
    m_pLayerBuffRepeateEffect = 0;
}

void CUser::LoadMagicShield()
{
    __sub_004F33E0(this, nullptr);
}

void CUser::RemoveMagicShield()
{
    //__sub_004E1190(this, nullptr);
    m_pLayerMagicShield = 0;
}

void CUser::UpdateFlyingWingEffect()
{
    //__sub_004F3620(this, nullptr);
    auto& ss = GetSecondaryStat();
    auto flying = ss._ZtlSecureGet_nFlying_();

    if (!flying || m_pLayerFlyingWing)
    {
        if (!flying && m_pLayerFlyingWing)
        {
            m_pLayerFlyingWing = 0;
        }

        return;
    }


    auto job = GetJobCode();
    auto noviceSkill = get_novice_skill_as_race(1026, job);
    m_pLayerFlyingWing = LoadSkillRepeatEffect(noviceSkill, m_pLayerUnderFace);
}

_x_com_ptr<IWzGr2DLayer> CUser::GetMirrorSrcLayer(const long nIdx)
{
    //_x_com_ptr<IWzGr2DLayer> ret;
    //return *__sub_004DF410(this, nullptr, &ret, nIdx);
    switch (nIdx)
    {
    case 0:
        return this->m_pLayerUnderCharacter;
    case 1:
        return this->m_pLayerOverCharacter;
    case 2:
        return this->m_pLayerUnderFace;
    case 3:
        return this->m_pLayerFace;
    case 4:
        return this->m_pLayerOverFace;
    default:
        return {};
    }
}

void CUser::TryDoingCycloneAfter()
{
    __sub_004F4380(this, nullptr);
}

tagPOINT CUser::GetRidingMechanicBulletPos(tagPOINT pt, long nSkillID, long nBulletSequence)
{
    //tagPOINT ret;
    //return *__sub_004DEB50(this, nullptr, &ret, CreateNakedParam(pt), nSkillID, nBulletSequence);
    tagPOINT res{}; // eax

    if (nSkillID > 35111004)
    {
        if (nSkillID != 35121005 && nSkillID != 35121013)
            return pt;
    LABEL_9:
        if (nBulletSequence % 3 == 1)
        {
            pt.x += (this->m_nMoveAction & 1) != 0 ? 40 : -40;
        }
        else
        {
            if (nBulletSequence % 3 != 2)
                return pt;
            pt.x += (this->m_nMoveAction & 1) != 0 ? -40 : 40;
        }
        pt.y += 25;
        return pt;
    }
    if (nSkillID == 35111004)
        goto LABEL_9;
    if (nSkillID == 35001004 || nSkillID == 35101010)
    {
        pt.x += (this->m_nMoveAction & 1) != 0 ? 30 : -30;
        if (nBulletSequence % 2)
        {
            res.x = pt.x;
            res.y = pt.y + 5;
            return res;
        }
    }
    return pt;
}

int32_t CUser::IsFanShapeShoot(long nSkillID)
{
    //return __sub_00503370(this, nullptr, nReason);
    bool v2; // zf

    if (nSkillID > 35111004)
    {
        if (nSkillID == 35121005)
            return 0;
        v2 = nSkillID == 35121013;
    }
    else
    {
        if (nSkillID == 35111004 || nSkillID == 3001004 || nSkillID == 35001004)
            return 0;
        v2 = nSkillID == 35101010;
    }
    return !v2;
}

int32_t CUser::IsAbleToHitByUser(long nReason)
{
    //return __sub_00503370(this, nullptr, nReason);
    UNIMPLEMENTED;
}

void CUser::SetRepeatEffectRemove(int32_t bOnInit)
{
    __sub_000BC050(this, nullptr, bOnInit);
}

int32_t CUser::SetRepeatEffect(int32_t arg0)
{
    //TOIDO correct?
    m_bRepeatEffect = arg0;
    return 0;
}

int32_t CUser::IsRepeatEffect()
{
    return m_bRepeatEffect;
}

CUser& CUser::operator=(CUser& arg0)
{
    return _op_assign_230(this, arg0);
}

CUser& CUser::_op_assign_230(CUser* pThis, CUser& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUser::ADDITIONALLAYER::~ADDITIONALLAYER()
{
}

void CUser::ADDITIONALLAYER::_dtor_0()
{
    //return __sub_004DF510(this, nullptr);
    this->~ADDITIONALLAYER();
}

CUser::ADDITIONALLAYER::ADDITIONALLAYER(const CUser::ADDITIONALLAYER& arg0)
{
    _ctor_1(arg0);
}

void CUser::ADDITIONALLAYER::_ctor_1(const CUser::ADDITIONALLAYER& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUser::ADDITIONALLAYER::ADDITIONALLAYER()
{
    nData = -1;
    nDataForRepeat = -1;
    l.bFixed = true;
    l2.bFixed = true;
}

void CUser::ADDITIONALLAYER::_ctor_0()
{
    //return __sub_004E1630(this, nullptr);
    new(this) CUser::ADDITIONALLAYER();
}

void CUser::ADDITIONALLAYER::Reset()
{
    //__sub_004DF3C0(this, nullptr);
    nData = -1;
    l.bFixed = true;
    l.pLayer = 0;

    nDataForRepeat = -1;
    l2.bFixed = true;
    l2.pLayer = 0;
}

CUser::ADDITIONALLAYER& CUser::ADDITIONALLAYER::operator=(const CUser::ADDITIONALLAYER& arg0)
{
    return _op_assign_4(this, arg0);
}

CUser::ADDITIONALLAYER& CUser::ADDITIONALLAYER::_op_assign_4(CUser::ADDITIONALLAYER* pThis,
                                                             const CUser::ADDITIONALLAYER& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUser::AFFECTEDSKILLENTRY::~AFFECTEDSKILLENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUser::AFFECTEDSKILLENTRY::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUser::AFFECTEDSKILLENTRY::AFFECTEDSKILLENTRY(const CUser::AFFECTEDSKILLENTRY& arg0)
{
    _ctor_1(arg0);
}

void CUser::AFFECTEDSKILLENTRY::_ctor_1(const CUser::AFFECTEDSKILLENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUser::AFFECTEDSKILLENTRY::AFFECTEDSKILLENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CUser::AFFECTEDSKILLENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUser::AFFECTEDSKILLENTRY& CUser::AFFECTEDSKILLENTRY::operator=(const CUser::AFFECTEDSKILLENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

CUser::AFFECTEDSKILLENTRY& CUser::AFFECTEDSKILLENTRY::_op_assign_3(CUser::AFFECTEDSKILLENTRY* pThis,
                                                                   const CUser::AFFECTEDSKILLENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUser::AFTERIMAGEINFO::~AFTERIMAGEINFO()
{
}

void CUser::AFTERIMAGEINFO::_dtor_0()
{
    this->~AFTERIMAGEINFO();
}

CUser::AFTERIMAGEINFO::AFTERIMAGEINFO(const CUser::AFTERIMAGEINFO& arg0)
{
    _ctor_1(arg0);
}

void CUser::AFTERIMAGEINFO::_ctor_1(const CUser::AFTERIMAGEINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUser::AFTERIMAGEINFO::AFTERIMAGEINFO()
{
}

void CUser::AFTERIMAGEINFO::_ctor_0()
{
    new(this) AFTERIMAGEINFO();
}

CUser::AFTERIMAGEINFO& CUser::AFTERIMAGEINFO::operator=(const CUser::AFTERIMAGEINFO& arg0)
{
    return _op_assign_3(this, arg0);
}

CUser::AFTERIMAGEINFO& CUser::AFTERIMAGEINFO::_op_assign_3(CUser::AFTERIMAGEINFO* pThis,
                                                           const CUser::AFTERIMAGEINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CGrenade::~CGrenade()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CGrenade::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CGrenade::CGrenade(const CGrenade& arg0)
{
    _ctor_1(arg0);
}

void CGrenade::_ctor_1(const CGrenade& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CGrenade::CGrenade()
{
    m_pAttrShoe = new CAttrShoe(0);
}

void CGrenade::_ctor_0()
{
    //return __sub_004E2DB0(this, nullptr);
    new(this) CGrenade();
}

void CGrenade::Init(long nSkillID, long nSLV, CUser* pOwner, int32_t bFlip, tagPOINT pt, long vx, long vy,
                    int32_t bGravityFree, long tThrowDelayTime, long tLimitTime, long nBallAngle)
{
    __sub_00169960(this, nullptr, nSkillID, nSLV, pOwner, bFlip, CreateNakedParam(pt), vx, vy, bGravityFree,
                   tThrowDelayTime, tLimitTime, nBallAngle);
}

int32_t CGrenade::Update(unsigned long dwMobID)
{
    return __sub_001690D0(this, nullptr, dwMobID);
}

void CGrenade::PrepareAnimationLayer(int32_t bFlip, long nBallAngle)
{
    __sub_001694F0(this, nullptr, bFlip, nBallAngle);
}

_x_com_ptr<IWzVector2D> CGrenade::GetVecCtrl()
{
    return __sub_004DF4C0(this, nullptr);
}

CVecCtrlUser* CUser::GetVecCtrlUser()
{
    return dynamic_cast<CVecCtrlUser*>(m_pvc.op_arrow());
}

void CGrenade::SetDragValue(long nX, long nY)
{
    __sub_00168DE0(this, nullptr, nX, nY);
}

long CGrenade::GetType()
{
    return __sub_004E2E60(this, nullptr);
}

long CGrenade::OnResolveMoveAction(long nInputX, long nInputY, long nCurMoveAction, const CVecCtrl* pvc)
{
    return __sub_00168D20(this, nullptr, nInputX, nInputY, nCurMoveAction, pvc);
}

void CGrenade::OnLayerZChanged(const CVecCtrl* pvc)
{
    __sub_00168D50(this, nullptr, pvc);
}

const ZRef<CAttrShoe> CGrenade::GetShoeAttr()
{
    return __sub_004E2FA0(this, nullptr);
}

const tagPOINT CGrenade::GetPos()
{
    return __sub_004E2E70(this, nullptr);
}

const tagPOINT CGrenade::GetPosPrev()
{
    return __sub_004E2E90(this, nullptr);
}

long CGrenade::GetZMass()
{
    return __sub_004E2EC0(this, nullptr);
}

long CGrenade::GetSkillID()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CGrenade::BombAndAttackMob()
{
    __sub_00168E80(this, nullptr);
}

void CGrenade::JustBomb()
{
    __sub_00168DB0(this, nullptr);
}

int32_t CGrenade::SendTimeBombInfo(unsigned long dwMobID)
{
    return __sub_00168F20(this, nullptr, dwMobID);
}

CGrenade& CGrenade::operator=(const CGrenade& arg0)
{
    return _op_assign_19(this, arg0);
}

CGrenade& CGrenade::_op_assign_19(CGrenade* pThis, const CGrenade& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
