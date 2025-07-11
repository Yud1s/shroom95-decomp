// MobTemplate.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"
#include "util/extra.h"

//#include "ActionMan/ActionMan.hpp"

// Level: 1 0x1c96
struct MobAttackInfo;
// Level: 1 0x1c59
class CMobTemplate;
// Level: 1 0x21af8
struct MobSpeakInformation;

struct MobAttackInfo : public ZRefCounted
{
	// Nested
public:
	enum AT_
	{
		AT_RANGE = 0,
		AT_SHOOT = 1,
		AT_PIERCE = 2,
		AT_AREA1 = 3,
		AT_AREA2 = 4
	};
	// Fields
public:
	long nType{};

public:
	int32_t bInactive{};

public:
	long nConMP{};

public:
	long nPAD{};

public:
	int32_t bMagicAttack{};

public:
	long nBulletNumber{};

public:
	long nMagicElemAttr{};

public:
	int32_t bJumpAttack{};
	union
	{
	public:
		SECRECT rcRang;

	public:
		TzRange tzRange;

	public:
		TzArea tzArea;
	};

public:
	long nBulletSpeed{};

public:
	int32_t bDeadlyAttack{};

public:
	int32_t bTremble{};

public:
	Ztl_bstr_t sEffect;

public:
	Ztl_bstr_t sHit;

public:
	Ztl_bstr_t sBall;

public:
	Ztl_bstr_t sAreaWarning;

public:
	int32_t bHitAttach{};

public:
	long tEffectAfter{};

public:
	long tAttackAfter{};

public:
	int32_t bDoFirst{};

public:
	long nMPBurn{};

public:
	int32_t bKnockBack{};

public:
	int32_t bFacingAttatch{};

public:
	long tRandDelayAttack{};

public:
	int32_t bRush{};

public:
	int32_t bSpeicalAttack{};
	// Methods
public:
	virtual ~MobAttackInfo();

public:
	void _dtor_0();

public:
	MobAttackInfo(const MobAttackInfo &arg0);

public:
	void _ctor_1(const MobAttackInfo &arg0);

public:
	MobAttackInfo();

public:
	void _ctor_0();

public:
	MobAttackInfo &operator=(const MobAttackInfo &arg0);

public:
	static MobAttackInfo &_op_assign_3(MobAttackInfo *pThis, const MobAttackInfo &arg0);
};
STATIC_ASSERT_SIZE(MobAttackInfo, 176);
class CMobTemplate : public ZRefCounted
{

public:
	static ZMap<long, ZRef<CMobTemplate>, long> ms_mMobTemplate;
	// Nested
	// Fields
public:
	std::array<unsigned long, 2> _ZtlSecureTear_dwTemplateID{};

public:
	uint32_t _ZtlSecureTear_dwTemplateID_CS{};

public:
	std::array<unsigned long, 2> _ZtlSecureTear_dwLinkedTemplateID{};

public:
	uint32_t _ZtlSecureTear_dwLinkedTemplateID_CS{};

public:
	std::array<unsigned long, 2> _ZtlSecureTear_dwMonsterBookID{};

public:
	uint32_t _ZtlSecureTear_dwMonsterBookID_CS{};

public:
	ZXString<char> sName;

public:
	std::array<long, 2> _ZtlSecureTear_nSpecies{};

public:
	uint32_t _ZtlSecureTear_nSpecies_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nMoveAbility{};

public:
	uint32_t _ZtlSecureTear_nMoveAbility_CS{};

public:
	std::array<int32_t, 2> _ZtlSecureTear_bRegenAction{};

public:
	uint32_t _ZtlSecureTear_bRegenAction_CS{};

public:
	std::array<int32_t, 2> _ZtlSecureTear_bBodyAttack{};

public:
	uint32_t _ZtlSecureTear_bBodyAttack_CS{};

public:
	std::array<int32_t, 2> _ZtlSecureTear_bBoss{};

public:
	uint32_t _ZtlSecureTear_bBoss_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nLevel{};

public:
	uint32_t _ZtlSecureTear_nLevel_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nMaxHP{};

public:
	uint32_t _ZtlSecureTear_nMaxHP_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nMaxMP{};

public:
	uint32_t _ZtlSecureTear_nMaxMP_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nSpeed{};

public:
	uint32_t _ZtlSecureTear_nSpeed_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nFlySpeed{};

public:
	uint32_t _ZtlSecureTear_nFlySpeed_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nChaseSpeed{};

public:
	uint32_t _ZtlSecureTear_nChaseSpeed_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nPAD{};

public:
	uint32_t _ZtlSecureTear_nPAD_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nPDR{};

public:
	uint32_t _ZtlSecureTear_nPDR_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nMAD{};

public:
	uint32_t _ZtlSecureTear_nMAD_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nMDR{};

public:
	uint32_t _ZtlSecureTear_nMDR_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nACC{};

public:
	uint32_t _ZtlSecureTear_nACC_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nEVA{};

public:
	uint32_t _ZtlSecureTear_nEVA_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nEXP{};

public:
	uint32_t _ZtlSecureTear_nEXP_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nPushedDamage{};

public:
	uint32_t _ZtlSecureTear_nPushedDamage_CS{};

public:
	std::array<long, 8> aDamagedElemAttr{};

public:
	long nHPRecovery{};

public:
	long nMPRecovery{};

public:
	std::array<int32_t, 2> _ZtlSecureTear_bUndead{};

public:
	uint32_t _ZtlSecureTear_bUndead_CS{};

public:
	double nFs{};

public:
	std::array<int32_t, 2> _ZtlSecureTear_bSelfDestruction{};

public:
	uint32_t _ZtlSecureTear_bSelfDestruction_CS{};

public:
	std::array<int32_t, 2> _ZtlSecureTear_bFirstSelfDestruction{};

public:
	uint32_t _ZtlSecureTear_bFirstSelfDestruction_CS{};

public:
	std::array<int32_t, 2> _ZtlSecureTear_bPickUpDrop{};

public:
	uint32_t _ZtlSecureTear_bPickUpDrop_CS{};

public:
	std::array<int32_t, 2> _ZtlSecureTear_bFirstAttack{};

public:
	uint32_t _ZtlSecureTear_bFirstAttack_CS{};

public:
	std::array<int32_t, 2> _ZtlSecureTear_bInvincible{};

public:
	uint32_t _ZtlSecureTear_bInvincible_CS{};

public:
	std::array<int32_t, 2> _ZtlSecureTear_bDisable{};

public:
	uint32_t _ZtlSecureTear_bDisable_CS{};

public:
	int32_t bNoFlip{};

public:
	std::array<int32_t, 2> _ZtlSecureTear_bNotAttack{};

public:
	uint32_t _ZtlSecureTear_bNotAttack_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nFixedDamage{};

public:
	uint32_t _ZtlSecureTear_nFixedDamage_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nWeaponID{};

public:
	uint32_t _ZtlSecureTear_nWeaponID_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_bAngerGauge{};

public:
	uint32_t _ZtlSecureTear_bAngerGauge_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nChargeCount{};

public:
	uint32_t _ZtlSecureTear_nChargeCount_CS{};

public:
	std::array<int32_t, 2> _ZtlSecureTear_bHPGaugeHide{};

public:
	uint32_t _ZtlSecureTear_bHPGaugeHide_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nHPTagColor{};

public:
	uint32_t _ZtlSecureTear_nHPTagColor_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_nHPTagBgColor{};

public:
	uint32_t _ZtlSecureTear_nHPTagBgColor_CS{};

public:
	int32_t bChase{};

public:
	int32_t bDamagedByMob{};

public:
	long nDropItemPeriod{};

public:
	ZArray<unsigned long> m_aDamagedBySelectedMob;

public:
	long nBanType{};

public:
	long nAttackCount{};

public:
	long nSkillCount{};

public:
	long nHitCount{};

public:
	long nDieCount{};

public:
	int32_t bHideHP{};

public:
	int32_t bHideName{};

public:
	int32_t bHideLevel{};

public:
	long nEscortType{};

public:
	std::array<ZRef<MobAttackInfo>, 9> m_apAttackInfo{};

public:
	ZArray<MobSkillInfo> m_aSkillInfo;

public:
	ZArray<ZRef<MobSpeakInformation>> apSpeakInformation;

public:
	ZArray<ZRef<MobSpeakCondition>> apSpeakCondition;

public:
	long nChatBalloon{};

public:
	long nWidth{};

private:
	std::array<int32_t, 2> _ZtlSecureTear_bOnlyNormalAttack{};

private:
	uint32_t _ZtlSecureTear_bOnlyNormalAttack_CS{};

private:
	ZArray<long> m_aDamagedBySelectedSkill;

protected:
	int32_t bCantPassByTeleport{};

public:
	std::array<long, 2> _ZtlSecureTear_nCategory{};

public:
	uint32_t _ZtlSecureTear_nCategory_CS{};

public:
	std::array<int32_t, 2> _ZtlSecureTear_bCannotEvade{};

public:
	uint32_t _ZtlSecureTear_bCannotEvade_CS{};

public:
	std::array<int32_t, 2> _ZtlSecureTear_bUpperMostLayer{};

public:
	uint32_t _ZtlSecureTear_bUpperMostLayer_CS{};
	// Methods
public:
	virtual ~CMobTemplate();

public:
	void _dtor_0();

public:
	CMobTemplate(const CMobTemplate &arg0);

public:
	void _ctor_1(const CMobTemplate &arg0);

public:
	CMobTemplate();

public:
	void _ctor_0();

public:
	unsigned long __fastcall _ZtlSecureGet_dwTemplateID() const;

public:
	unsigned long __fastcall _ZtlSecurePut_dwTemplateID(unsigned long arg0);

public:
	unsigned long __fastcall _ZtlSecureGet_dwLinkedTemplateID() const;

public:
	unsigned long __fastcall _ZtlSecurePut_dwLinkedTemplateID(unsigned long arg0);

public:
	unsigned long __fastcall _ZtlSecureGet_dwMonsterBookID() const;

public:
	unsigned long __fastcall _ZtlSecurePut_dwMonsterBookID(unsigned long arg0);

public:
	long __fastcall _ZtlSecureGet_nSpecies() const;

public:
	long __fastcall _ZtlSecurePut_nSpecies(long arg0);

public:
	long __fastcall _ZtlSecureGet_nMoveAbility() const;

public:
	long __fastcall _ZtlSecurePut_nMoveAbility(long arg0);

public:
	int32_t __fastcall _ZtlSecureGet_bRegenAction() const;

public:
	int32_t __fastcall _ZtlSecurePut_bRegenAction(int32_t arg0);

public:
	int32_t __fastcall _ZtlSecureGet_bBodyAttack() const;

public:
	int32_t __fastcall _ZtlSecurePut_bBodyAttack(int32_t arg0);

public:
	int32_t __fastcall _ZtlSecureGet_bBoss() const;

public:
	int32_t __fastcall _ZtlSecurePut_bBoss(int32_t arg0);

public:
	long __fastcall _ZtlSecureGet_nLevel() const;

public:
	long __fastcall _ZtlSecurePut_nLevel(long arg0);

public:
	long __fastcall _ZtlSecureGet_nMaxHP() const;

public:
	long __fastcall _ZtlSecurePut_nMaxHP(long arg0);

public:
	long __fastcall _ZtlSecureGet_nMaxMP() const;

public:
	long __fastcall _ZtlSecurePut_nMaxMP(long arg0);

public:
	long __fastcall _ZtlSecureGet_nSpeed() const;

public:
	long __fastcall _ZtlSecurePut_nSpeed(long arg0);

public:
	long __fastcall _ZtlSecureGet_nFlySpeed() const;

public:
	long __fastcall _ZtlSecurePut_nFlySpeed(long arg0);

public:
	long __fastcall _ZtlSecureGet_nChaseSpeed() const;

public:
	long __fastcall _ZtlSecurePut_nChaseSpeed(long arg0);

public:
	long __fastcall _ZtlSecureGet_nPAD() const;

public:
	long __fastcall _ZtlSecurePut_nPAD(long arg0);

public:
	long __fastcall _ZtlSecureGet_nPDR() const;

public:
	long __fastcall _ZtlSecurePut_nPDR(long arg0);

public:
	long __fastcall _ZtlSecureGet_nMAD() const;

public:
	long __fastcall _ZtlSecurePut_nMAD(long arg0);

public:
	long __fastcall _ZtlSecureGet_nMDR() const;

public:
	long __fastcall _ZtlSecurePut_nMDR(long arg0);

public:
	long __fastcall _ZtlSecureGet_nACC() const;

public:
	long __fastcall _ZtlSecurePut_nACC(long arg0);

public:
	long __fastcall _ZtlSecureGet_nEVA() const;

public:
	long __fastcall _ZtlSecurePut_nEVA(long arg0);

public:
	long __fastcall _ZtlSecureGet_nEXP() const;

public:
	long __fastcall _ZtlSecurePut_nEXP(long arg0);

public:
	long __fastcall _ZtlSecureGet_nPushedDamage() const;

public:
	long __fastcall _ZtlSecurePut_nPushedDamage(long arg0);

public:
	int32_t __fastcall _ZtlSecureGet_bUndead() const;

public:
	int32_t __fastcall _ZtlSecurePut_bUndead(int32_t arg0);

public:
	int32_t __fastcall _ZtlSecureGet_bSelfDestruction() const;

public:
	int32_t __fastcall _ZtlSecurePut_bSelfDestruction(int32_t arg0);

public:
	int32_t __fastcall _ZtlSecureGet_bFirstSelfDestruction() const;

public:
	int32_t __fastcall _ZtlSecurePut_bFirstSelfDestruction(int32_t arg0);

public:
	int32_t __fastcall _ZtlSecureGet_bPickUpDrop() const;

public:
	int32_t __fastcall _ZtlSecurePut_bPickUpDrop(int32_t arg0);

public:
	int32_t __fastcall _ZtlSecureGet_bFirstAttack() const;

public:
	int32_t __fastcall _ZtlSecurePut_bFirstAttack(int32_t arg0);

public:
	int32_t __fastcall _ZtlSecureGet_bInvincible() const;

public:
	int32_t __fastcall _ZtlSecurePut_bInvincible(int32_t arg0);

public:
	int32_t __fastcall _ZtlSecureGet_bDisable() const;

public:
	int32_t __fastcall _ZtlSecurePut_bDisable(int32_t arg0);

public:
	int32_t __fastcall _ZtlSecureGet_bNotAttack() const;

public:
	int32_t __fastcall _ZtlSecurePut_bNotAttack(int32_t arg0);

public:
	long __fastcall _ZtlSecureGet_nFixedDamage() const;

public:
	long __fastcall _ZtlSecurePut_nFixedDamage(long arg0);

public:
	long __fastcall _ZtlSecureGet_nWeaponID() const;

public:
	long __fastcall _ZtlSecurePut_nWeaponID(long arg0);

public:
	long __fastcall _ZtlSecureGet_bAngerGauge() const;

public:
	long __fastcall _ZtlSecurePut_bAngerGauge(long arg0);

public:
	long __fastcall _ZtlSecureGet_nChargeCount() const;

public:
	long __fastcall _ZtlSecurePut_nChargeCount(long arg0);

public:
	int32_t __fastcall _ZtlSecureGet_bHPGaugeHide() const;

public:
	int32_t __fastcall _ZtlSecurePut_bHPGaugeHide(int32_t arg0);

public:
	long __fastcall _ZtlSecureGet_nHPTagColor() const;

public:
	long __fastcall _ZtlSecurePut_nHPTagColor(long arg0);

public:
	long __fastcall _ZtlSecureGet_nHPTagBgColor() const;

public:
	long __fastcall _ZtlSecurePut_nHPTagBgColor(long arg0);

public:
	int32_t IsLevelVisible() const;

public:
	int32_t IsDamagedBySelectedSkill() const;

public:
	int32_t IsVulnerableTo(long nSkillID);

public:
	int32_t CanApplyCtrl();

public:
	MobAttackInfo *GetAttackInfo(long nIdx);

public:
	const MobSkillInfo *GetSkillInfo(long nSkillID);

public:
	unsigned long CalcCrc(unsigned long dwKey);

public:
	static void __cdecl Load();

public:
	static void __cdecl Unload();

public:
	static CMobTemplate *__cdecl GetMobTemplate(unsigned long dwTemplateID);

protected:
	ZRef<MobAttackInfo> LoadAttackInfo(long nIdx);

protected:
	void LoadSkillInfo(_x_com_ptr<IWzProperty> pProp);

protected:
	static int32_t __cdecl RegisterMob(unsigned long arg0, _x_com_ptr<IWzProperty> arg1);

protected:
	void LoadSpeakInformation(_x_com_ptr<IWzProperty> pInformation, long nAction);

protected:
	void LoadSpeakCondition(_x_com_ptr<IWzProperty> pConditions);

private:
	int32_t __fastcall _ZtlSecureGet_bOnlyNormalAttack() const;

private:
	int32_t __fastcall _ZtlSecurePut_bOnlyNormalAttack(int32_t arg0);

public:
	int32_t IsCantPassByTeleport();

public:
	long __fastcall _ZtlSecureGet_nCategory() const;

public:
	long __fastcall _ZtlSecurePut_nCategory(long arg0);

public:
	int32_t __fastcall _ZtlSecureGet_bCannotEvade() const;

public:
	int32_t __fastcall _ZtlSecurePut_bCannotEvade(int32_t arg0);

public:
	int32_t __fastcall _ZtlSecureGet_bUpperMostLayer() const;

public:
	int32_t __fastcall _ZtlSecurePut_bUpperMostLayer(int32_t arg0);

public:
	CMobTemplate &operator=(const CMobTemplate &arg0);

public:
	static CMobTemplate &_op_assign_101(CMobTemplate *pThis, const CMobTemplate &arg0);
};
STATIC_ASSERT_SIZE(CMobTemplate, 720);
struct MobSpeakInformation : public ZRefCounted
{
	// Nested
	// Fields
public:
	long nAction{};

public:
	long nHP{};

public:
	long nMP{};

public:
	long nProb{};

public:
	long nWidth{};

public:
	ZArray<ZXString<char>> asSpeech;
	// Methods
public:
	virtual ~MobSpeakInformation();

public:
	void _dtor_0();

public:
	MobSpeakInformation(const MobSpeakInformation &arg0);

public:
	void _ctor_1(const MobSpeakInformation &arg0);

public:
	MobSpeakInformation();

public:
	void _ctor_0();

public:
	MobSpeakInformation &operator=(const MobSpeakInformation &arg0);

public:
	static MobSpeakInformation &_op_assign_3(MobSpeakInformation *pThis, const MobSpeakInformation &arg0);
};
STATIC_ASSERT_SIZE(MobSpeakInformation, 36);

Ztl_variant_t __cdecl GetVariantLinkData(_x_com_ptr<IWzProperty> pData, _x_com_ptr<IWzProperty> pLinkData, Ztl_bstr_t sName);
int32_t __cdecl get_element_attribute_(const wchar_t *arg0, long *arg1);
_x_com_ptr<IWzProperty> __cdecl GetPropertyLinkData(_x_com_ptr<IWzProperty> pData, _x_com_ptr<IWzProperty> pLinkData, Ztl_bstr_t sName);
