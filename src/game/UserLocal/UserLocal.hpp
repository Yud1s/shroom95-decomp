// UserLocal.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Summoned/Summoned.hpp"
#include "Mob/Mob.hpp"
#include "Rand32/Rand32.hpp"
#include "SkillInfo/SkillInfo.hpp"
#include "DBBasic/DBBasic.hpp"
#include "VecCtrl/VecCtrl.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "WvsPhysicalSpace2D/WvsPhysicalSpace2D.hpp"
#include "Stat/Stat.hpp"
#include "Packet/Packet.hpp"
#include "UInt128/UInt128.hpp"

#include "User/User.hpp"

class CNpc;
class CMob;
class CSummoned;
class CTutor;
class CGrenade;
struct MonsterBookInfo;

struct ATTACKINFO;

// Level: 0 0x1b362
struct PassiveSkillData;
// Level: 0 0x19c90
class CAntiRepeat;
// Level: 0 0xa5f1
class CDualKeyChecker;
// Level: 0 0x5e0a
struct ActionRandMan;
// Level: 1 0xa215
class CUserLocal;

class CAntiRepeat
{
	// Nested
public:
	enum COUNT_LIMIT
	{
		COUNT_LIMIT = 100
	};
	// Fields
protected:
	long m_nX{};

protected:
	long m_nY{};

protected:
	long m_nRepeatCount{};

protected:
	long m_nCountLimit{};
	// Methods
public:
	CAntiRepeat();
	~CAntiRepeat();

public:
	void _dtor_0();

public:
	CAntiRepeat(long arg0);

public:
	void _ctor_1(long arg0);

public:
	int32_t TryRepeat(long nX, long nY);
};
STATIC_ASSERT_SIZE(CAntiRepeat, 16);
class CDualKeyChecker
{
	// Nested
public:
	struct KeyMsg
	{
		// Nested
		// Fields
	public:
		uint32_t wParam{};

	public:
		int32_t lParam{};
		// Methods
	};

public:
	enum k
	{
		kTimeout = 50,
		kScancode1 = 29,
		kScancode2 = 56
	};
	enum State
	{
		State_None = 0,
		State_Buffered = 1,
		State_Dual = 2
	};
	// Fields
private:
	uint32_t m_lScanCode{};

private:
	unsigned long m_tInputTime{};

private:
	ZList<CDualKeyChecker::KeyMsg> m_lMsg;
	// Methods
public:
	~CDualKeyChecker();

public:
	void _dtor_0();

public:
	CDualKeyChecker(const CDualKeyChecker &arg0);

public:
	void _ctor_1(const CDualKeyChecker &arg0);

public:
	CDualKeyChecker();

public:
	void _ctor_0();

public:
	CDualKeyChecker::State Check(CDualKeyChecker::KeyMsg &msg);

public:
	void Update();

public:
	int32_t GetQueuedMsg(CDualKeyChecker::KeyMsg &arg0);

private:
	void PushAndPopMsg(CDualKeyChecker::KeyMsg &msg);

public:
	CDualKeyChecker &operator=(const CDualKeyChecker &arg0);

public:
	static CDualKeyChecker &_op_assign_7(CDualKeyChecker *pThis, const CDualKeyChecker &arg0);
};
STATIC_ASSERT_SIZE(CDualKeyChecker, 28);
struct ActionRandMan
{
	// Nested
	// Fields
public:
	int32_t bRollBack{};

public:
	CRand32 &RndManRef;
	// Methods
public:
	~ActionRandMan();

public:
	void _dtor_0();

public:
	ActionRandMan(CRand32 &RndMan);

public:
	void _ctor_0(CRand32 &RndMan);

public:
	uint32_t GetRandom() const;

public:
	void PreventRollback();
};
STATIC_ASSERT_SIZE(ActionRandMan, 8);
class CUserLocal : public CUser, public TSingleton<CUserLocal>
{

	// Nested
public:
	struct PREPARING_SKILL
	{
		// Nested
		// Fields
	public:
		long nSkillID{};

	public:
		long tStart{};

	public:
		long tAttackStartTime{};

	public:
		int32_t bKeyDown{};
		// Methods
	};

public:
	struct REPEAT_SKILL
	{
		// Nested
		// Fields
	public:
		long nSkillID{};

	public:
		long tStart{};

	public:
		long tAttackStartTime{};

	public:
		long nPoint{};

	public:
		int32_t bDone{};

	public:
		int32_t bKeyDownbar{};

	public:
		int32_t bKeyDown{};
		// Methods
	};

public:
	struct FINAL_ATTACK
	{
		// Nested
		// Fields
	public:
		long nLastSkillID{};

	public:
		long nSkillID{};

	public:
		long nWT{};

	public:
		long tStart{};
		// Methods
	};

public:
	struct SERIAL_ATTACK
	{
		// Nested
		// Fields
	public:
		long nLastSkillID{};

	public:
		long nSkillID{};

	public:
		long nWT{};

	public:
		long tStart{};

	public:
		unsigned long dwMobID{};
		// Methods
	};

public:
	struct TELEPORT
	{
		// Nested
		// Fields
	public:
		int32_t bValid{};

	public:
		int32_t bByPortal{};

	public:
		tagPOINT pt{};

	public:
		long tStart{};

	public:
		long tCoolTimeEnd{};

	public:
		int32_t bNextAttack{};

	public:
		long nTeleportMasteryID{};
		// Methods
	public:
		TELEPORT();

	public:
		void _ctor_0();
	};

public:
	struct RUSH
	{
		// Nested
	public:
		struct RUSHELEM
		{
			// Nested
		public:
			enum RUSHSTYLE
			{
				RS_CONSTANTSPEED = 0,
				RS_CONSTANTSPEED_AND_HIDE = 1,
				RS_SLOWDOWN = 2,
				RS_SLOWDOWN2 = 3
			};
			// Fields
		public:
			CUserLocal::RUSH::RUSHELEM::RUSHSTYLE nState;

		public:
			long tDuring{};

		public:
			long nVx{};

		public:
			double dVx{};

		public:
			double dAx{};
			// Methods
		};
		// Fields
	public:
		long nSkillID{};

	public:
		int32_t bValid{};

	public:
		ZList<CUserLocal::RUSH::RUSHELEM> lElem;

	public:
		long tCoolTimeEnd{};

	public:
		ZArray<tagPOINT> aMobCurPos;
		// Methods
	public:
		~RUSH();

	public:
		void _dtor_0();

	public:
		RUSH(const CUserLocal::RUSH &arg0);

	public:
		void _ctor_1(const CUserLocal::RUSH &arg0);

	public:
		RUSH();

	public:
		void _ctor_0();

	public:
		CUserLocal::RUSH &operator=(const CUserLocal::RUSH &arg0);

	public:
		static CUserLocal::RUSH &_op_assign_3(CUserLocal::RUSH *pThis, const CUserLocal::RUSH &arg0);
	};

public:
	struct FALLDOWN
	{
		// Nested
		// Fields
	public:
		int32_t bValid{};

	public:
		CStaticFoothold *pfhStart{};
		// Methods
	};

public:
	class CBalloonMsg
	{
		// Nested
	public:
		enum UnnamedEnum42727
		{
			LEFT_MARGIN = 10,
			RIGHT_MARGIN = 10,
			TOP_MARGIN = 10,
			BOTTOM_MARGIN = 10
		};
		// Fields
	public:
		_x_com_ptr<IWzGr2DLayer> m_pLayer;

	public:
		long m_tEnd{};
		// Methods
	public:
		~CBalloonMsg();

	public:
		void _dtor_0();

	public:
		CBalloonMsg(const CUserLocal::CBalloonMsg &arg0);

	public:
		void _ctor_1(const CUserLocal::CBalloonMsg &arg0);

	public:
		CBalloonMsg();

	public:
		void _ctor_0();

	public:
		void Init(ZXString<char> &str, long nWidth, long tTimeOut, long x, long y, _x_com_ptr<IWzVector2D> pOrigin);

	public:
		CUserLocal::CBalloonMsg &operator=(const CUserLocal::CBalloonMsg &arg0);

	public:
		static CUserLocal::CBalloonMsg &_op_assign_4(CUserLocal::CBalloonMsg *pThis, const CUserLocal::CBalloonMsg &arg0);
	};

public:
	struct MOVINGSHOOTENTRY
	{
		// Nested
		// Fields
	public:
		const SKILLENTRY *pSkill{};

	public:
		long nSLV{};

	public:
		long nShootRange0{};

	public:
		long nBulletItemID{};

	public:
		long nBulletCashItemID{};

	public:
		int32_t bSoulArrow{};

	public:
		long nAction{};

	public:
		long nAttackActionType{};

	public:
		long nActionSpeed{};

	public:
		long nBulletItemPos{};

	public:
		long nBulletCashItemPos{};
		// Methods
	};

public:
	enum PET_CONSUME_NO_POTION_MSG_TIME
	{
		PET_CONSUME_NO_POTION_MSG_TIME = 3000
	};
	// Fields

public:
	static ZArray<long> ms_anTutors;

public:
	long m_nLastPointedItem{};

public:
	int32_t m_bAdminHide{};

protected:
	int32_t m_bAfterLeaveDirectionMode{};

protected:
	long m_tAfterLeaveDirectionMode{};

public:
	int32_t m_bConsumePetMP{};

protected:
	CUserLocal::PREPARING_SKILL m_preparingSkill;

protected:
	CUserLocal::REPEAT_SKILL m_repeatSkill;

protected:
	CUserLocal::FINAL_ATTACK m_finalAttack;

protected:
	CUserLocal::SERIAL_ATTACK m_serialAttack;

protected:
	CUserLocal::TELEPORT m_teleport;

protected:
	CUserLocal::RUSH m_rush;

protected:
	CUserLocal::FALLDOWN m_falldown;

protected:
	int32_t m_bFly{};

protected:
	int32_t m_bReplacedByMeleeAttack{};

protected:
	ZRef<CAttrShoe> m_pAttrShoe;

protected:
	long m_nRocketBoosterVY{};

protected:
	int32_t m_bRocketBoosterAttack{};

protected:
	long m_tRocketBoosterAttack{};

protected:
	std::array<long, 2> _ZtlSecureTear_m_nLastJumpInputX{};

protected:
	uint32_t _ZtlSecureTear_m_nLastJumpInputX_CS{};

protected:
	std::array<int32_t, 2> _ZtlSecureTear_m_bSit{};

protected:
	uint32_t _ZtlSecureTear_m_bSit_CS{};

protected:
	CAntiRepeat m_antiRepeat;

protected:
	CAntiRepeat m_antiRepeat_Buff;

protected:
	ZRef<CMob> m_pSparkStartMob;

protected:
	tagPOINT m_ptSparkStart{};

protected:
	long m_tReserveSpark{};

protected:
	CUIToolTip m_uiToolTip;

protected:
	long m_nIdx_ToolTipByMouse{};

protected:
	ZMap<long, CUIToolTip, long> m_mCharToolTip;

protected:
	std::array<long, 2> _ZtlSecureTear_m_nPortableChairID{};

protected:
	uint32_t _ZtlSecureTear_m_nPortableChairID_CS{};

protected:
	std::array<long, 2> _ZtlSecureTear_m_nSittingTime{};

protected:
	uint32_t _ZtlSecureTear_m_nSittingTime_CS{};

protected:
	std::array<uint16_t, 2> _ZtlSecureTear_m_usActivePetSkill{};

protected:
	uint32_t _ZtlSecureTear_m_usActivePetSkill_CS{};

protected:
	int32_t m_bPortableChairStatSetSent{};

protected:
	long m_tLastCantUseSkill{};

protected:
	long m_tLastWarnUsingDisabledWeapon{};

protected:
	long m_tLastPoisonDamage{};

protected:
	long m_tLastArealDamage{};

protected:
	long m_tLastHideMorphedCheck{};

protected:
	long m_tLastStopMotionDamage{};

protected:
	long m_tLastUseAura{};

protected:
	long m_tLastJump{};

protected:
	tagPOINT m_ptBeforeKeyDown{};

protected:
	long m_tLastKeyDown{};

protected:
	long m_tWingsEnd{};

protected:
	int32_t m_bKeyDown{};

protected:
	uint32_t m_nKeyDownScanCode{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerKeyDownBar;

protected:
	long m_nKeyDownBarPosition{};

protected:
	long m_tLastStormArrow{};

protected:
	long m_tLastRapidFire{};

protected:
	long m_tLastFlameThrower{};

protected:
	long m_tLastTitan{};

protected:
	long m_tLastTankSiegeMode{};

protected:
	int32_t m_bSendTankSiegeModeEnd{};

protected:
	long m_tLastKnockBackStun{};

protected:
	int32_t m_bKnockBackStun{};

protected:
	uint32_t m_uSkillSoundCookie{};

protected:
	ZMap<long, long, long> m_mCoolEndTime;

protected:
	int32_t m_bAutoStartQuestSet{};

protected:
	unsigned long m_tLastCheck_AutoCompletionAlertQuest{};

protected:
	int32_t m_bTryPassiveTransferField{};

protected:
	int32_t m_bMovingMode{};

protected:
	int32_t m_bInitialAnimationOnPreCompleteQuest{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerPreCompleteQuest;

protected:
	ZList<CUserLocal::CBalloonMsg> m_lBalloonMsgAvatar;

protected:
	ZList<CUserLocal::CBalloonMsg> m_lBalloonMsgField;

private:
	long m_nVehicleValid{};

private:
	long m_tLastVehicleValidSetting{};

protected:
	long m_tPrevPortalIndex{};

protected:
	ZMap<long, long, long> m_mMonsterCardCheckList;

protected:
	ZMap<long, long, long> m_mMonsterCardCheckListSize;

protected:
	ZList<ZRef<CItemInfo::ItemSkill>> m_lpItemSkill;

protected:
	ZRef<CTutor> m_pTutor;

private:
	CDualKeyChecker m_DualKeyChecker;

protected:
	long m_nCombo{};

protected:
	unsigned long m_tLastSetCombo{};

protected:
	int32_t m_bHoldCombo{};

protected:
	_x_com_ptr<IWzVector2D> m_pOrgCombo_Normal;

protected:
	_x_com_ptr<IWzVector2D> m_pOrgCombo_BigAmp;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerCombo;

protected:
	std::array<_x_com_ptr<IWzGr2DLayer>, 5> m_apLayerComboDigit;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerComboSkillCommand_Attack;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerComboSkillCommand_Buff;

private:
	int32_t m_bCurActionIsFlyingSkill{};

private:
	long m_tConsumeItemUsingLastTime{};

private:
	ZMap<long, long, long> m_mClientTimerSkill;

protected:
	unsigned long m_dwSwallowMobID{};

protected:
	unsigned long m_dwSwallowMobTemplateID{};

protected:
	long m_tSwallowLastMobWriggle{};

protected:
	int32_t m_bSwallowed{};

protected:
	long m_tSwallowDigestTime{};

protected:
	unsigned long m_tPetConsumeNoPotionMsgTime{};

protected:
	unsigned long m_tMineMoveStart{};

protected:
	long m_nMineState{};

protected:
	unsigned long m_tCyclone{};

protected:
	int32_t m_bJumpKeyUp{};

protected:
	int32_t m_bMovingShootStarted{};

protected:
	long m_tMovingShootAttackTime{};

protected:
	CUserLocal::MOVINGSHOOTENTRY m_movingShootEntry;

protected:
	ZRef<PassiveSkillData> m_pPassiveSkillData;

private:
	int32_t m_bNextAttackCritical{};

private:
	int32_t m_bNextShootExJablin{};

protected:
	long m_tLastUpdatedNLCTransferTimer{};

public:
	long m_nPetHPConsumeFailed{};

public:
	long m_nPetMPConsumeFailed{};

public:
	long m_nPetHPAlert{};

public:
	long m_tLastCheckReactorCollision{};

public:
	ZMap<long, long, long> m_mReactorOnLocalUser;
	// Methods
public:
	virtual ~CUserLocal();

public:
	void _dtor_0();

public:
	CUserLocal(const CUserLocal &arg0);

public:
	void _ctor_1(const CUserLocal &arg0);

public:
	CUserLocal(unsigned long uSN);

public:
	void _ctor_0(unsigned long uSN);

public:
	void Init();

public:
	virtual unsigned char GetCharacterLevel();

public:
	virtual SecondaryStat &GetSecondaryStat();

public:
	virtual long GetJobCode();

public:
	virtual int32_t IsLocalUser();

public:
	virtual int32_t IsPreview();

public:
	virtual int32_t IsRemoteUser();

public:
	virtual int32_t IsAdminHide();

public:
	virtual int32_t IsMovingMode();

public:
	unsigned char GetLevel();

public:
	unsigned long GetFieldID() const;

public:
	int32_t IsSit() const;

public:
	int32_t IsPreparingSkill() const;

public:
	int32_t IsRepeatSkill() const;

public:
	long GetRepeatSkillPoint() const;

public:
	int32_t IsImmovable();

public:
	int32_t IsStun();

public:
	int32_t IsSealed();

public:
	int32_t IsWeakened();

public:
	int32_t IsAttract();

public:
	int32_t IsStopPortion();

public:
	int32_t IsStopMotion();

public:
	void SetAttractMove(long &nPos_X, long &nPos_Y);

public:
	int32_t IsKnockBackStun();

public:
	int32_t IsSkillAvailable();

public:
	int32_t HasOnDashSkill();

public:
	long GetOnDashSkill();

public:
	virtual void SetMoveAction(long nMA, int32_t bReload);

public:
	virtual void ResetOneTimeAction();

public:
	void SetImpact(long nAttr, long nImpact, int32_t bLeft);

public:
	virtual void SetDamaged(long nDamage, long vx, long vy, unsigned long dwObstacleData, CMob *pMob, long nAttackIdx, long nDir, long nPowerGuard, int32_t bCheckHitRemain, int32_t bSendPacket);

public:
	void ShowCounterDamage(long nDamage);

public:
	long GetProperBulletPosition(const SKILLENTRY *pSkill, long nSLV, long *pnItemID, long *pnCashItemPos, long *pnCashItemID);

public:
	long GetSpiritJavelinItemID(const SKILLENTRY *nItemID, long nSlotCount);

public:
	void Jump(int32_t bEnforced);

public:
	void FallDown();

public:
	void ApplyAllSkillLevelUP(long nItemOptionID, long nLevel, long &nSLV);

public:
	void ApplyEmotionOption(long nItemOptionID, long nLevel);

public:
	void ApplyWeaponOption(long nItemOptionID, long nLevel, long &nCriticalProb, long &nCriticalDamage, long &nTotalDAMr, long &nBossDAMr, long &nIgnoreTargetDEF);

public:
	void ApplyDefenseOption(long &nDamage);

public:
	void ApplyIgnoreDAMOption(long nItemOptionID, long nLevel, long &nIgnoreDAMProb, long &nIgnoreDAM, long &nIgnoreDAMrProb, long &nIgnoreDAMr);

public:
	void ApplyInvicibleOption(long nItemOptionID, long nLevel, long &nInvincible_inc, long &nInvincible_prob, long &nInvincible);

public:
	void ApplyAccessoryOption(long &dRecoveryHP, long &dRecoveryMP, int32_t bSit);

public:
	void ApplyRecoveryOption(long nItemOptionID, long nLevel, long &dRecoveryHP, long &dRecoveryMP, int32_t bSit);

public:
	void VerticalJump();

public:
	virtual void Update();

public:
	virtual void ClearToolTip();

public:
	int32_t PreprocessOnKey(uint32_t &wParam, int32_t& lParam);

public:
	void OnKey(uint32_t wParam, int32_t lParam);

public:
	void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	int32_t OnMouseMove(long rx, long ry);

public:
	void OnFeatureChanged();

public:
	void OnPacket(long nType, CInPacket &iPacket);

public:
	void OnTeleport(CInPacket &iPacket);

public:
	void OnSitResult(CInPacket &iPacket);

public:
	void OnMesoGive_Succeeded(CInPacket &iPacket);

public:
	void OnMesoGive_Failed(CInPacket &iPacket);

public:
	void OnRandomMesobag_Succeeded(CInPacket &iPacket);

public:
	void OnRandomMesobag_Failed(CInPacket &iPacket);

public:
	void OnFieldFadeInOut(CInPacket &iPacket);

public:
	void OnFieldFadeOutForce(CInPacket &iPacket);

public:
	void OnQuestResult(CInPacket &arg0);

public:
	virtual long OnPetActivated(CInPacket &iPacket);

public:
	long PetInterActWithItem(long nItemID);

public:
	virtual long PetInterActWithUserAction(long nUserAction, long nPetIndex);

public:
	virtual void OnPetEvol(CInPacket &iPacket);

public:
	void OnSummonedCreated(ZRef<CSummoned> pSummoned);

public:
	virtual void OnSetDead(int32_t bDyingNow);

public:
	virtual void OnRevive();

public:
	void RequestUpgradeTombEffect();

public:
	void OnNotifyHPDecByField(CInPacket &iPacket);

public:
	void OnUserPetSkillChanged(CInPacket &arg0);

public:
	void OnBalloonMsg(CInPacket &iPacket);

public:
	void OnPlayEventSound(CInPacket &iPacket);

public:
	void OnPlayMinigameSound(CInPacket &iPacket);

public:
	void OnMakerResult(CInPacket &iPacket);

public:
	void OnOpenClassCompetitionPage(CInPacket &iPacket);

public:
	void OnOpenUI(CInPacket &iPacket);

public:
	void OnOpenUIWithOption(CInPacket &iPacket);

public:
	void OnSetDirectionMode(CInPacket &iPacket);

public:
	void OnSetStandAloneMode(CInPacket &iPacket);

public:
	void OnHireTutor(CInPacket &iPacket);

public:
	void OnTutorMsg(CInPacket &iPacket);

public:
	void OnDamageMeter(CInPacket &iPacket);

public:
	void OnTimeBombAttack(CInPacket &iPacket);

public:
	void SetCarryItemEffectForLocal(CharacterData &cd);

public:
	void SetActiveEffectItemForLocal(CharacterData &cd, long nActiveEffectItemID);

public:
	void SetActiveEffectItemForFirstLocalUserLoading(CharacterData &cd);

public:
	void SetPairCharacterID();

public:
	void SetFriendPairCharacterID();

public:
	void SetMarriagePairCharacterID();

public:
	void SetNewYearCardPairCharacterID();

public:
	void OnJoystickButton(uint32_t wButton, unsigned long dwData);

public:
	long FindHitSummonedInRect(const tagRECT &rc, CSummoned **apSummoned, long nMaxCount);

public:
	void SetSecondaryStatChangedPoint(unsigned char bSN);

public:
	void RedrawGuildNameTag();

public:
	int32_t IsWeaponDisabled();

public:
	int32_t IsKeyDownSkillUsing() const;

public:
	int32_t IsDashing();

public:
	int32_t IsDashing2();

public:
	virtual void GetUpFromPortableChair(int32_t bOnInit);

public:
	virtual void OnTemporaryStatChanged(MY_UINT128 uFlag, long tDelay, int32_t bInit);

public:
	void OnResignQuestReturn(CInPacket &iPacket);

public:
	void OnPassMateName(CInPacket &iPacket);

public:
	static void __cdecl SetMonsterBookCover(long nCardID);

public:
	static long __cdecl GetMonsterBookCover();

public:
	static void __cdecl SetMonsterCardCount(long nCardID, long nCardCount);

public:
	static long __cdecl GetMonsterCardCount(long nCardID);

public:
	static int32_t __cdecl IsMonsterCardFull(long arg0);

public:
	static void __cdecl UpdateMonsterBookInfo();

public:
	static ZRef<MonsterBookInfo> __cdecl GetMonsterBookInfo();

public:
	long GetMonsterCardCheckListSize(long nGrade);

public:
	void SetMonsterCardCheckList(long nCardID, int32_t bRemove);

public:
	void FollowCharacterFailedMsg(long nError, unsigned long dwDriverID);

public:
	void OnFollowCharacterFailed(CInPacket &iPacket);

public:
	void SetPassiveTransferField(int32_t arg0);

public:
	int32_t IsPassiveTransferField() const;

public:
	void OnVengeanceSkillApply(CInPacket &iPacket);

public:
	void OnExJablinApply(CInPacket &iPacket);

public:
	void OnGoToCommoditySN(CInPacket &iPacket);

public:
	void OnAskAPSPEvent(CInPacket &iPacket);

public:
	void OnDeliveryQuest(CInPacket &iPacket);

public:
	virtual const ZRef<CAttrShoe> GetShoeAttr();

public:
	virtual long OnResolveMoveAction(long nInputX, long nInputY, long nCurMoveAction, const CVecCtrl *pvc);

protected:
	void SetShoeAttr();

public:
	int32_t UseFuncKeyMapped(int32_t lParam);

public:
	int32_t UseFuncKeyMappedUpKey(int32_t lParam);

protected:
	void CheckPortal_Collision();

protected:
	void CheckReactor_Collision();

public:
	void OnCollisionCustomImpact(double vx, double vy);

protected:
	void HandleUpKeyDown();

protected:
	void HandleCtrlKeyDown();

protected:
	void HandleXKeyDown();

protected:
	void HandleLButtonDown();

protected:
	void HandleLButtonClk();

protected:
	void HandleLButtonDblClk();

protected:
	void HandleRButtonClk();

public:
	long TryDoingNormalAttack(const ZArray<tagRECT> &arcArea, long &tDelay, int32_t bHitReactor);

protected:
	int32_t TryDoingMeleeAttack(const SKILLENTRY *pSkill, long nSLV, long *pnShootRange0, long nSerialAttackSkillID, unsigned long dwLastAttackMobID, long tKeyDown, CGrenade *pGrenade, long nReservedSkillID, int32_t bTimeBombAttack, long nTimeBombX, long nTimeBombY, long nShootSkillID);

protected:
	int32_t TryDoingShootAttack(const SKILLENTRY *pSkill, long nSLV, long nShootRange0, int32_t bMortalBlow, long tKeyDown, uint32_t nRandForMortalBlowAction);

protected:
	int32_t TryDoingMagicAttack(const SKILLENTRY *pSkill, long nSLV, long nReduceCount, long tKeyDown);

protected:
	int32_t TryDoingBodyAttack(const SKILLENTRY *pSkill, long nSLV, CMob *pMob, tagPOINT ptHit);

protected:
	int32_t TryDoingWings(const SKILLENTRY *pSkill, long nSLV);

protected:
	int32_t TryDoingMonsterMagnet(const SKILLENTRY *pSkill, long nSLV, long nShootRange0);

protected:
	int32_t TryRegisterTeleport(const SKILLENTRY *pSkill, long nSLV, const char *sPortalName, const char *sTargetPortalName, int32_t bForced);

protected:
	void TryRegisterFinalAttack(const CharacterData &cd, const ZArray<ZArray<long>> &a1, long nSkillID, long tDelay);

protected:
	void TryRegisterSerialAttack(long nSkillID, long tDelay, unsigned long dwMobID);

protected:
	void TryRegisterSparkAttack(ATTACKINFO &a, long tReserve);

protected:
	int32_t TryDoingSmoothingMovingShootAttackPrepare(const SKILLENTRY *pSkill, long nSLV, long nShootRange0);

protected:
	void TryDoingSmoothingMovingShootAttack();

protected:
	void TryLeaveDirectionMode(long tCur);

protected:
	void SetDirectionMode(int32_t bSet);

public:
	int32_t DoActiveSkill(long nSkillID, uint32_t nScanCode, long *pnConsumeCheck);

public:
	long DoActiveSkill_StatChange_ByPet(long arg0, ZXString<char> arg1, int32_t arg2);

public:
	void MoveToPortal(const char *sPortalName);

public:
	void SitOnPortableChair(long nSeatID);

public:
	long GetPortableChairSittingTime();

public:
	void ResetPortableChairSittingtime();

public:
	long GetPortableChairID();

public:
	int32_t SetPortableChairStatSetSent();

public:
	void SetPortableChairStatSetSent_(int32_t arg0);

public:
	int32_t GetPortableChairStatSetSent();

public:
	uint16_t GetPetSkill();

public:
	void UpdatePetSkill();

public:
	void TryConsumePetHP(long nDamage, int32_t bForce, unsigned char bBuffSkill);

public:
	void TryConsumePetMP(long nDamage, int32_t bForce, unsigned char bBuffSkill);

public:
	void SetConsumePetMP(int32_t arg0);

public:
	void OnKeyDownSkillEnd();

public:
	int32_t SendSkillUseRequest(const SKILLENTRY *pSkill, long nSLV, unsigned long dwAffectedMemberBitmap, long nMobCount, unsigned long *adwMobID, long nSpiritJavelinItemID, long nPelletPOS);

public:
	void SendSkillCancelRequest(long skillId);

public:
	void SendSkillEffectRequest(long nAttr, long nImpact, int32_t bLeft);

public:
	void ViewAutoQuestAlert();

public:
	void EraseAutoQuestAlert();

public:
	void ShowAutoStartQuestList();

public:
	void GetDCRect(tagRECT &rc);

public:
	ZXString<char> GetMateNameByQuestID(uint16_t arg0);

public:
	virtual int32_t CanUseBareHand();

public:
	int32_t IsVehicleValid();

public:
	int32_t CheckRidingVehicle(int32_t bJaguarCheckPass);

public:
	int32_t CheckRidingVehicleExceptMechanic();

public:
	int32_t IsActiveSkillReplacedByMeleeAttack();

public:
	long GetSkillLevel(long nSkillID);

public:
	void TalkToNpc(ZRef<CNpc> pNpc);

public:
	int32_t IsDoingRocketBooster();

public:
	void ApplyMechanicMode(long nOldMechanicMode, long nNewMechanicMode);

public:
	void SendRepeatEffectRemoveRequest();

protected:
	int32_t DoActiveSkill_MeleeAttack(const SKILLENTRY *pSkill, long nSLV);

protected:
	int32_t DoActiveSkill_ShootAttack(const SKILLENTRY *pSkill, long nSLV);

protected:
	int32_t DoActiveSkill_VehicleShootAttack(const SKILLENTRY *arg0, long arg1);

protected:
	int32_t DoActiveSkill_MagicAttack(const SKILLENTRY *pSkill, long nSLV);

protected:
	int32_t DoActiveSkill_WeaponBooster(const SKILLENTRY *pSkill, long nSLV, long nWT1, long nWT2, long nWT3, long nWT4);

protected:
	int32_t DoActiveSkill_Teleport(const SKILLENTRY *arg0, long arg1);

protected:
	int32_t DoActiveSkill_Heal(const SKILLENTRY *pSkill, long nSLV);

protected:
	int32_t DoActiveSkill_TownPortal(const SKILLENTRY *arg0, long arg1);

protected:
	int32_t DoActiveSkill_OpenGate(const SKILLENTRY *arg0, long arg1);

protected:
	int32_t DoActiveSkill_Prepare(const SKILLENTRY *pSkill, long nSLV, uint32_t nScanCode);

protected:
	int32_t DoActiveSkill_Summon(const SKILLENTRY *pSkill, long nSLV);

protected:
	int32_t DoActiveSkill_StatChange(const SKILLENTRY *pSkill, long nSLV, unsigned long dwTargetFlag);

protected:
	int32_t DoActiveSkill_MesoExplosion(const SKILLENTRY *arg0, long arg1);

protected:
	int32_t DoActiveSkill_BoundJump(const SKILLENTRY *arg0, long arg1);

protected:
	int32_t DoActiveSkill_RocketBooster(const SKILLENTRY *arg0, long arg1);

protected:
	int32_t DoActiveSkill_StatChangeAdmin(const SKILLENTRY *arg0, long arg1);

protected:
	int32_t DoActiveSkill_SmokeShell(const SKILLENTRY *arg0, long arg1);

protected:
	int32_t DoActiveSkill_RecoveryAura(const SKILLENTRY *arg0, long arg1);

protected:
	int32_t DoActiveSkill_CombatStep(const SKILLENTRY *arg0, long arg1);

protected:
	int32_t DoActiveSkill_Flying(long nSkillID);

protected:
	int32_t DoActiveSkill_NotPrepare_Bomb(const SKILLENTRY *arg0, long arg1);

protected:
	int32_t DoActiveSkill_DamageMeter(long nSkillID);

protected:
	int32_t DoActiveSkill_RepeatSkill(const SKILLENTRY *arg0, long arg1);

protected:
	int32_t DoActiveSkill_Aura(const SKILLENTRY *arg0, long arg1);

protected:
	int32_t DoEnchantSkill();

protected:
	int32_t DoMakerSkill();

protected:
	int32_t DoAntiMacroSkill(const SKILLENTRY *arg0, long arg1);

protected:
	int32_t DoActiveSkill_HookAndHit(const SKILLENTRY *arg0, long arg1);

protected:
	int32_t DoActiveSkill_MobCapture(const SKILLENTRY *arg0, long arg1);

protected:
	int32_t DoActiveSkill_SummonMonster(const SKILLENTRY *arg0, long arg1);

protected:
	void ClearRocketBooster();

protected:
	void ClearRepeatSkill();

protected:
	unsigned long FindParty(const SKILLENTRY *pSkill, long nSLV, long *pnCount);

protected:
	void TryDoingFinalAttack();

protected:
	void TryDoingSerialAttack();

protected:
	void TryDoingSparkAttack();

protected:
	void TryDoingPreparedSkill();

protected:
	void TryDoingRepeatSkill(long tCur);

protected:
	void TryDoingSiege(long tCur);

protected:
	void TryDoingRocketBooster();

protected:
	void TryDoingRocketBoosterEnd();

protected:
	void TryDoingTeleport();

protected:
	void TryDoingRush();

protected:
	void TryDoingFlyingRush();

protected:
	void TryDoingFallDown();

protected:
	void TryDoingItemSkill(CMob *pMob, long tAttackTime, long nMobCount, long nDamagePerMob, long nSkillID, long nAction);

protected:
	void TryDoingMine();

protected:
	void TryDoingSitdownHealing();

protected:
	void ValidateItemSkill();

protected:
	void ValidateSkillBonus();

protected:
	void CheckEquippedSetItem();

protected:
	void TryAutoRequestFollowCharacter();

protected:
	void TryPassiveTransferField();

protected:
	void CheckPassenser();

protected:
	int32_t IsTeleportSkillAvailable(const SKILLENTRY *pSkill, long nSLV, tagPOINT &ptAfterTeleport);

protected:
	int32_t IsEquippedCorrectWeaponForSkill(const SKILLENTRY *pSkill);

protected:
	void OnSkillCooltimeSet(CInPacket &iPacket);

protected:
	void CreateKeyDownBar(long nSeatID);

protected:
	void DrawKeyDownBar();

protected:
	long GetAchillesReduce(long nDamage);

protected:
	void SendBanMapByMobRequest(unsigned long dwMobTemplateID);

protected:
	void CheckBoobyTrapPickUpRequest(int32_t lParam);

protected:
	virtual void ThrowGrenade(long nSkillID, long nSLV, long tKeyDown);

protected:
	void BeRushValid();

protected:
	void AddRushElem(CUserLocal::RUSH::RUSHELEM::RUSHSTYLE nState, long nVx, long tDuring, double dAx);

protected:
	long __fastcall _ZtlSecureGet_m_nLastJumpInputX() const;

protected:
	long __fastcall _ZtlSecurePut_m_nLastJumpInputX(long arg0);

protected:
	int32_t __fastcall _ZtlSecureGet_m_bSit() const;

protected:
	int32_t __fastcall _ZtlSecurePut_m_bSit(int32_t arg0);

protected:
	long __fastcall _ZtlSecureGet_m_nPortableChairID() const;

protected:
	long __fastcall _ZtlSecurePut_m_nPortableChairID(long arg0);

protected:
	long __fastcall _ZtlSecureGet_m_nSittingTime() const;

protected:
	long __fastcall _ZtlSecurePut_m_nSittingTime(long arg0);

protected:
	uint16_t __fastcall _ZtlSecureGet_m_usActivePetSkill() const;

protected:
	uint16_t __fastcall _ZtlSecurePut_m_usActivePetSkill(uint16_t arg0);

protected:
	void ShowBallonMsg(ZXString<char> &str, long nWidth, long tTimeOut, long x, long y, _x_com_ptr<IWzVector2D> pOrigin);

private:
	int32_t ProcessDualKey();

private:
	long CalcBuffDefenseAttr(char nElemAttr, long nDamage);

	CLASS_RTTI_(CUserLocal, CUser);

public:
	void RemoveTutor(long nSKillId);

public:
	void RequestIncCombo();

public:
	void OnIncComboResponse(CInPacket &iPacket);

public:
	long GetCombo();

public:
	void SetCombo(long nCombo);

public:
	void ClearCombo();

public:
	void DrawCombo();

public:
	void HoldCombo(int32_t bHold);

public:
	int32_t IsHoldingCombo();

public:
	void OnRadioSchedule(CInPacket &iPacket);

public:
	void OnOpenSkillGuide(CInPacket &iPacket);

public:
	void OnNoticeMsg(CInPacket &iPacket);

public:
	void OnChatMsg(CInPacket &iPacket);

private:
	void OnBuffzoneEffect(CInPacket &iPacket);

public:
	long GetConsumeItemUsingLastTime();

public:
	void SetConsumeItemUsingLastTime(long t);

private:
	void UpdateClientTimer(long tCur);

private:
	void SetClientTimer(long nSkillID, long tTime);

public:
	void SetSwallowed();

public:
	int32_t FindSwallowMob(const SKILLENTRY *arg0, long arg1);

public:
	void TryDoingSwallowMobWriggle();

public:
	void ResetMobWriggle();

public:
	int32_t TryDoingSwallowAbsorb(const SKILLENTRY *pSkill, long nSLV, long nShootRange0);

public:
	void TryDoingSwallowBuff();

public:
	void ResetSwallow();

public:
	void TryDoingCyclone();

public:
	long GetTeslaCoilCount();

public:
	void GetTeslaCoilSummonedID(ZArray<unsigned long> &ldwTeslaCoilSummonedID);

public:
	void ChangeTeslaCoilEndTime(long tNew);

public:
	void ChangeTeslaTriangle();

protected:
	void ClearPassiveSkillData();

protected:
	void SetPassiveSkillData(const SKILLENTRY *pSkill, long nSLV);

protected:
	void RevisePassiveSkillData();

public:
	void UpdatePassiveSkillData(int32_t bDontSend);

public:
	void SetChatPassiveSkillDataInfo();

public:
	const ZRef<PassiveSkillData> GetPassiveSkillData();

public:
	void SetPassiveSkillDataForced(ZXString<char> sFlag, long nVal);

private:
	int32_t CheckApplyExJablin(const SKILLENTRY *pSkill, long nAction);

protected:
	void SetPetsAngry();

public:
	void ResetNLCPQ();

public:
	int32_t HasGL5thEventTeam();

public:
	int32_t IsGL5thEventCakeTeam();

public:
	int32_t IsGL5thEventPieTeam();

public:
	void OnQuestGuideResult(CInPacket &iPacket);

public:
	CUserLocal &operator=(CUserLocal &arg0);

public:
	static CUserLocal &_op_assign_314(CUserLocal *pThis, CUserLocal &arg0);
};
STATIC_ASSERT_SIZE(CUserLocal, 18560);

tagPOINT __cdecl GetShootAttackPt0(long nSkillID, long nJob, const tagPOINT &ptUser, long nVehicleID, long nBodyRelMoveY);
long __cdecl GetShootRange0(long nSkillID, long nShootRange0, int32_t bMortalBlow);
const SKILLENTRY *__cdecl get_soul_arrow(long nJob);
void __cdecl sort_mob_by_distance(int32_t arg0, CMob **arg1, long arg2);
long __cdecl get_stance_skill_id(const long nJob);
void __cdecl zswap_CMob__(CMob *&a, CMob *&b);
char __cdecl _ZtlSecureFuse_char_(const char *at, uint32_t uCS);
void __cdecl sort_attackInfo_by_distance(int32_t arg0, ATTACKINFO *arg1, long arg2);
