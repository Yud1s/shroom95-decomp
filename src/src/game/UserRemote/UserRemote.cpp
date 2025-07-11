// UserRemote.cpp
#include "UserRemote.hpp"

static ZArray<ATTACKINFO> FAKE_ZArray_ATTACKINFO{};

#include "UserRemote_regen.ipp"

CUserRemote::~CUserRemote()
{
    CAnimationDisplayer::GetInstance()->RemovePrepareAnimation(m_dwCharacterId);
}

void CUserRemote::_dtor_0()
{
    return __sub_00554360(this, nullptr);
}

CUserRemote::CUserRemote(const CUserRemote& arg0)
{
    _ctor_1(arg0);
}

void CUserRemote::_ctor_1(const CUserRemote& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUserRemote::CUserRemote(unsigned long dwCharacterId): CUser(dwCharacterId)
{
    m_nMovingShootPreparedSkillID = -1;
}

void CUserRemote::_ctor_0(unsigned long dwCharacterId)
{
    new(this) CUserRemote(dwCharacterId);
    //return __sub_00554540(this, nullptr, dwCharacterId);
}

void CUserRemote::Init(CInPacket& iPacket, int32_t bPartyMember, int32_t bDelayedLoad)
{
    __sub_00555460(this, nullptr, iPacket, bPartyMember, bDelayedLoad);
}

unsigned char CUserRemote::GetCharacterLevel()
{
    return __sub_00554420(this, nullptr);
}

const SecondaryStat& CUserRemote::GetSecondaryStat()
{
    return __sub_00554430(this, nullptr);
}

int32_t CUserRemote::IsLocalUser()
{
    return __sub_00554440(this, nullptr);
}

int32_t CUserRemote::IsPreview()
{
    return __sub_00554450(this, nullptr);
}

int32_t CUserRemote::IsRemoteUser()
{
    return __sub_00554460(this, nullptr);
}

void CUserRemote::Update()
{
    __sub_00555D50(this, nullptr);
}

long CUserRemote::GetJobCode()
{
    return __sub_00554470(this, nullptr);
}

void CUserRemote::RedrawGuildNameTag()
{
    __sub_005539D0(this, nullptr);
}

void CUserRemote::OnMove(CInPacket& iPacket)
{
    __sub_00548A80(this, nullptr, iPacket);
}

void CUserRemote::OnAttack(long nType, CInPacket& iPacket)
{
    __sub_0055A670(this, nullptr, nType, iPacket);
}

void CUserRemote::OnSkillPrepare(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserRemote::OnMovingShootAttackPrepare(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserRemote::OnSkillCancel(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserRemote::OnHit(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserRemote::OnSetActiveEffectItem(CInPacket& iPacket)
{
    __sub_00549220(this, nullptr, iPacket);
}

void CUserRemote::OnShowUpgradeTombEffect(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserRemote::OnSetActivePortableChair(CInPacket& iPacket)
{
    __sub_00549240(this, nullptr, iPacket);
}

void CUserRemote::ActivatePortableChair()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserRemote::OnAvatarModified(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserRemote::OnReceiveHP(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserRemote::OnGuildNameChanged(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserRemote::OnGuildMarkChanged(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserRemote::OnThrowGrenade(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUserRemote::OnPetActivated(CInPacket& iPacket)
{
    return __sub_005547D0(this, nullptr, iPacket);
}

void CUserRemote::OnPetEvol(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserRemote::GetUpFromPortableChair(int32_t bOnInit)
{
    __sub_00554520(this, nullptr, bOnInit);
}

void CUserRemote::OnSetTemporaryStat(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserRemote::OnResetTemporaryStat(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserRemote::OnMeleeAttack(long nDamagePerMob, const SKILLENTRY* pSkill, long nSLV, long nAction, int32_t bLeft,
                                long nMastery, ZArray<ATTACKINFO>& aAttack)
{
    __sub_00559D60(this, nullptr, nDamagePerMob, pSkill, nSLV, nAction, bLeft, nMastery, aAttack);
}

void CUserRemote::OnShootAttack(long ss, const SKILLENTRY* tDelayFirst, long nMultipleBySkill, long tCur,
                                int32_t bSoulArrow, long nBulletCount, long nAttackCount,
                                ZArray<ATTACKINFO>& tDelayShoot, tagPOINT tDelay1, unsigned long skillHitAni,
                                int32_t tPrevDelay, const SKILLENTRY* sBulletEffectUOL, long i)
{
    __sub_005567D0(this, nullptr, ss, tDelayFirst, nMultipleBySkill, tCur, bSoulArrow, nBulletCount, nAttackCount,
                   tDelayShoot, CreateNakedParam(tDelay1), skillHitAni, tPrevDelay, sBulletEffectUOL, i);
}

void CUserRemote::OnMagicAttack(long nDamagePerMob, const SKILLENTRY* pSkill, long nSLV, long nAction, int32_t bLeft,
                                long nMastery, ZArray<ATTACKINFO>& aAttack, long tKeyDown)
{
    __sub_00558C30(this, nullptr, nDamagePerMob, pSkill, nSLV, nAction, bLeft, nMastery, aAttack, tKeyDown);
}

void CUserRemote::OnBodyAttack(long nDamagePerMob, const SKILLENTRY* pSkill, long nSLV, long nAction, int32_t bLeft,
                               long nMastery, ZArray<ATTACKINFO>& aAttack)
{
    __sub_005548F0(this, nullptr, nDamagePerMob, pSkill, nSLV, nAction, bLeft, nMastery, aAttack);
}

void CUserRemote::LoadCompletely()
{
    __sub_00555130(this, nullptr);
}

int32_t CUserRemote::CanUseBareHand()
{
    //return __sub_00554490(this, nullptr);
    return GetJobCode() % 1000 / 100 == 5;
}

void CUserRemote::SetLevel(unsigned char arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserRemote::CheckDelayedEffect()
{
    __sub_005539E0(this, nullptr);
}

CUserRemote& CUserRemote::operator=(CUserRemote& arg0)
{
    return _op_assign_43(this, arg0);
}

CUserRemote& CUserRemote::_op_assign_43(CUserRemote* pThis, CUserRemote& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
