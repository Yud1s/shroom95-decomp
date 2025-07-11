// UserRemote.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "User/User.hpp"
#include "SkillInfo/SkillInfo.hpp"
#include "Stat/Stat.hpp"
#include "Packet/Packet.hpp"

// Level: 1 0xa23d
class CUserRemote;

class CUserRemote : public CUser
{
	// Nested
public:
	enum DELAY_EFFECT_
	{
		DELAY_EFFECT_DARK_FORCE = 1,
		DELAY_EFFECT_DRAGON_FURY = 2,
		DELAY_EFFECT_SWALLOWING = 4
	};
	// Fields
protected:
	unsigned char m_nLevel{};

protected:
	SecondaryStat m_secondaryStat;

protected:
	long m_nPortableChairID{};

protected:
	long m_nPrepareSkillID{};

protected:
	long m_nPrepareSkillLevel{};

protected:
	long m_nPrepareSkillActionSpeed{};

protected:
	long m_nKeydownSkillID{};

protected:
	long m_nKeydownSkillLevel{};

protected:
	long m_nKeydownSkillActionSpeed{};

protected:
	int32_t m_bKeyDown{};

protected:
	long m_tLastKeyDown{};

protected:
	long m_tLastFlameThrower{};

protected:
	int32_t m_bADBoardRemote{};

protected:
	ZXString<char> m_sADBoardRemote;

protected:
	long m_nJobCode{};

protected:
	long m_nMovingShootPreparedSkillID{};

protected:
	long m_nDelayedEffectFlag{};
	// Methods
public:
	virtual ~CUserRemote();

public:
	void _dtor_0();

public:
	CUserRemote(const CUserRemote &arg0);

public:
	void _ctor_1(const CUserRemote &arg0);

public:
	CUserRemote(unsigned long dwCharacterId);

public:
	void _ctor_0(unsigned long dwCharacterId);

public:
	void Init(CInPacket &iPacket, int32_t bPartyMember, int32_t bDelayedLoad);

public:
	virtual unsigned char GetCharacterLevel();

public:
	virtual const SecondaryStat &GetSecondaryStat();

public:
	virtual int32_t IsLocalUser();

public:
	virtual int32_t IsPreview();

public:
	virtual int32_t IsRemoteUser();

public:
	virtual void Update();

public:
	virtual long GetJobCode();

public:
	void RedrawGuildNameTag();

public:
	void OnMove(CInPacket &iPacket);

public:
	void OnAttack(long nType, CInPacket &iPacket);

public:
	void OnSkillPrepare(CInPacket &arg0);

public:
	void OnMovingShootAttackPrepare(CInPacket &arg0);

public:
	void OnSkillCancel(CInPacket &arg0);

public:
	void OnHit(CInPacket &arg0);

public:
	void OnSetActiveEffectItem(CInPacket &iPacket);

public:
	void OnShowUpgradeTombEffect(CInPacket &arg0);

public:
	void OnSetActivePortableChair(CInPacket &iPacket);

public:
	void ActivatePortableChair();

public:
	void OnAvatarModified(CInPacket &arg0);

public:
	void OnReceiveHP(CInPacket &arg0);

public:
	void OnGuildNameChanged(CInPacket &arg0);

public:
	void OnGuildMarkChanged(CInPacket &arg0);

public:
	void OnThrowGrenade(CInPacket &arg0);

public:
	virtual long OnPetActivated(CInPacket &iPacket);

public:
	virtual void OnPetEvol(CInPacket &arg0);

public:
	virtual void GetUpFromPortableChair(int32_t bOnInit);

public:
	void OnSetTemporaryStat(CInPacket &arg0);

public:
	void OnResetTemporaryStat(CInPacket &arg0);

public:
	void OnMeleeAttack(long nDamagePerMob, const SKILLENTRY *pSkill, long nSLV, long nAction, int32_t bLeft, long nMastery, ZArray<ATTACKINFO> &aAttack);

public:
	void OnShootAttack(long ss, const SKILLENTRY *tDelayFirst, long nMultipleBySkill, long tCur, int32_t bSoulArrow, long nBulletCount, long nAttackCount, ZArray<ATTACKINFO> &tDelayShoot, tagPOINT tDelay1, unsigned long skillHitAni, int32_t tPrevDelay, const SKILLENTRY *sBulletEffectUOL, long i);

public:
	void OnMagicAttack(long nDamagePerMob, const SKILLENTRY *pSkill, long nSLV, long nAction, int32_t bLeft, long nMastery, ZArray<ATTACKINFO> &aAttack, long tKeyDown);

public:
	void OnBodyAttack(long nDamagePerMob, const SKILLENTRY *pSkill, long nSLV, long nAction, int32_t bLeft, long nMastery, ZArray<ATTACKINFO> &aAttack);

public:
	void LoadCompletely();

public:
	virtual int32_t CanUseBareHand();

public:
	void SetLevel(unsigned char arg0);

public:
	void CheckDelayedEffect();

	CLASS_RTTI_(CUserRemote, CUser);

public:
	CUserRemote &operator=(CUserRemote &arg0);

public:
	static CUserRemote &_op_assign_43(CUserRemote *pThis, CUserRemote &arg0);
};
STATIC_ASSERT_SIZE(CUserRemote, 20208);
