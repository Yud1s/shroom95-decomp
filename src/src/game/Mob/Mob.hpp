// Mob.hpp
#pragma once
#include <VecCtrlMob/VecCtrlMob.hpp>

#include "util/base.h"
#include "pcom/wz.h"

#include "Bullet/Bullet.hpp"
#include "MobTemplate/MobTemplate.hpp"
#include "UInt128/UInt128.hpp"
#include "Packet/Packet.hpp"
#include "WvsPhysicalSpace2D/WvsPhysicalSpace2D.hpp"
#include "Life/Life.hpp"
#include "Stat/Stat.hpp"
#include "VecCtrl/VecCtrl.hpp"
#include "ActionMan/ActionMan.hpp"

class CUserLocal;

// Level: 1 0xb9e1
class CMob;

struct PtTarget
{ /* Size=0x4 */
	/* 0x0000 */ public:
	int16_t x;
	/* 0x0002 */ public:
	int16_t y;
};

struct SkillInfoTarget
{ /* Size=0x4 */
	/* 0x0000 */ public:
	int16_t nSkillIDandLev;
	/* 0x0002 */ public:
	int16_t nDelay;
};

class CMob : public CLife
{
	// Nested
public:
	struct TARGETINFO
	{
		// Nested
		// Fields
		union
		{
		public:
			unsigned long dwTargetInfo;

		public:
			PtTarget ptTarget;

		public:
			SkillInfoTarget skillInfo;

		public:
			unsigned long dwData{};
		};
		// Methods
	public:
		TARGETINFO();

	public:
		void _ctor_0();

		CTOR_DEFAULT(TARGETINFO)
	};

public:
	struct ATTACKEFFECT
	{
		// Nested
		// Fields
	public:
		long tStart{};

	public:
		int32_t bLeft{};

	public:
		Ztl_bstr_t sEffect;
		// Methods
	public:
		~ATTACKEFFECT();

	public:
		void _dtor_0();

	public:
		ATTACKEFFECT(const CMob::ATTACKEFFECT &arg0);

	public:
		void _ctor_1(const CMob::ATTACKEFFECT &arg0);

	public:
		ATTACKEFFECT();

	public:
		void _ctor_0();

	public:
		CMob::ATTACKEFFECT &operator=(const CMob::ATTACKEFFECT &arg0);

	public:
		static CMob::ATTACKEFFECT &_op_assign_3(CMob::ATTACKEFFECT *pThis, const CMob::ATTACKEFFECT &arg0);
	};

public:
	struct AFFECTEDSKILLENTRY
	{
		// Nested
		// Fields
	public:
		long nSkillID{};

	public:
		long tStart{};

	public:
		__POSITION *posList{};

	public:
		int32_t bIcon{};

	public:
		int32_t bFlip{};

	public:
		_x_com_ptr<IWzGr2DLayer> pLayer;
		// Methods
	public:
		~AFFECTEDSKILLENTRY();

	public:
		void _dtor_0();

	public:
		AFFECTEDSKILLENTRY(const CMob::AFFECTEDSKILLENTRY &arg0);

	public:
		void _ctor_1(const CMob::AFFECTEDSKILLENTRY &arg0);

	public:
		AFFECTEDSKILLENTRY();

	public:
		void _ctor_0();

	public:
		CMob::AFFECTEDSKILLENTRY &operator=(const CMob::AFFECTEDSKILLENTRY &arg0);

	public:
		static CMob::AFFECTEDSKILLENTRY &_op_assign_3(CMob::AFFECTEDSKILLENTRY *pThis, const CMob::AFFECTEDSKILLENTRY &arg0);
	};

public:
	struct ATTACKENTRY
	{
		// Nested
		// Fields
	public:
		long tTime{};

	public:
		long nType{};

	public:
		tagRECT rcRange{};

	public:
		unsigned long dwTargetInfo{};

	public:
		int32_t bLeft{};

	public:
		long nAttackIdx{};
		// Methods
	};

public:
	struct DAMAGEINFO
	{
		// Nested
		// Fields
	public:
		std::array<long, 2> _ZtlSecureTear_tDelayedProcess{};

	public:
		uint32_t _ZtlSecureTear_tDelayedProcess_CS{};

	public:
		std::array<unsigned long, 2> _ZtlSecureTear_dwCharacterId;

	public:
		uint32_t _ZtlSecureTear_dwCharacterId_CS{};

	public:
		std::array<long, 2> _ZtlSecureTear_nSkillID{};

	public:
		uint32_t _ZtlSecureTear_nSkillID_CS{};

	public:
		std::array<long, 2> _ZtlSecureTear_nHitAction{};

	public:
		uint32_t _ZtlSecureTear_nHitAction_CS{};

	public:
		std::array<int32_t, 2> _ZtlSecureTear_bLeft{};

	public:
		uint32_t _ZtlSecureTear_bLeft_CS{};

	public:
		std::array<long, 2> _ZtlSecureTear_nDamage{};

	public:
		uint32_t _ZtlSecureTear_nDamage_CS{};

	public:
		std::array<int32_t, 2> _ZtlSecureTear_bCriticalAttack{};

	public:
		uint32_t _ZtlSecureTear_bCriticalAttack_CS{};

	public:
		std::array<long, 2> _ZtlSecureTear_nAttackIdx{};

	public:
		uint32_t _ZtlSecureTear_nAttackIdx_CS{};

	public:
		std::array<int32_t, 2> _ZtlSecureTear_bChase{};

	public:
		uint32_t _ZtlSecureTear_bChase_CS{};

	public:
		std::array<long, 2> _ZtlSecureTear_nMoveType{};

	public:
		uint32_t _ZtlSecureTear_nMoveType_CS{};

	public:
		std::array<long, 2> _ZtlSecureTear_nBulletCashItemID{};

	public:
		uint32_t _ZtlSecureTear_nBulletCashItemID_CS{};

	public:
		std::array<long, 2> _ZtlSecureTear_nMoveEndingPosX{};

	public:
		uint32_t _ZtlSecureTear_nMoveEndingPosX_CS{};

	public:
		std::array<long, 2> _ZtlSecureTear_nMoveEndingPosY{};

	public:
		uint32_t _ZtlSecureTear_nMoveEndingPosY_CS{};

	public:
		std::array<int32_t, 2> _ZtlSecureTear_bMoveLeft{};

	public:
		uint32_t _ZtlSecureTear_bMoveLeft_CS{};
		// Methods
	public:
		long __fastcall _ZtlSecureGet_tDelayedProcess() const;

	public:
		long __fastcall _ZtlSecurePut_tDelayedProcess(long arg0);

	public:
		unsigned long __fastcall _ZtlSecureGet_dwCharacterId() const;

	public:
		unsigned long __fastcall _ZtlSecurePut_dwCharacterId(unsigned long arg0);

	public:
		long __fastcall _ZtlSecureGet_nSkillID() const;

	public:
		long __fastcall _ZtlSecurePut_nSkillID(long arg0);

	public:
		long __fastcall _ZtlSecureGet_nHitAction() const;

	public:
		long __fastcall _ZtlSecurePut_nHitAction(long arg0);

	public:
		int32_t __fastcall _ZtlSecureGet_bLeft() const;

	public:
		int32_t __fastcall _ZtlSecurePut_bLeft(int32_t arg0);

	public:
		long __fastcall _ZtlSecureGet_nDamage() const;

	public:
		long __fastcall _ZtlSecurePut_nDamage(long arg0);

	public:
		int32_t __fastcall _ZtlSecureGet_bCriticalAttack() const;

	public:
		int32_t __fastcall _ZtlSecurePut_bCriticalAttack(int32_t arg0);

	public:
		long __fastcall _ZtlSecureGet_nAttackIdx() const;

	public:
		long __fastcall _ZtlSecurePut_nAttackIdx(long arg0);

	public:
		int32_t __fastcall _ZtlSecureGet_bChase() const;

	public:
		int32_t __fastcall _ZtlSecurePut_bChase(int32_t arg0);

	public:
		long __fastcall _ZtlSecureGet_nMoveType() const;

	public:
		long __fastcall _ZtlSecurePut_nMoveType(long arg0);

	public:
		long __fastcall _ZtlSecureGet_nBulletCashItemID() const;

	public:
		long __fastcall _ZtlSecurePut_nBulletCashItemID(long arg0);

	public:
		long __fastcall _ZtlSecureGet_nMoveEndingPosX() const;

	public:
		long __fastcall _ZtlSecurePut_nMoveEndingPosX(long arg0);

	public:
		long __fastcall _ZtlSecureGet_nMoveEndingPosY() const;

	public:
		long __fastcall _ZtlSecurePut_nMoveEndingPosY(long arg0);

	public:
		int32_t __fastcall _ZtlSecureGet_bMoveLeft() const;

	public:
		int32_t __fastcall _ZtlSecurePut_bMoveLeft(int32_t arg0);
	};

public:
	struct HITEFFECT
	{
		// Nested
		// Fields
	public:
		long tHit{};

	public:
		long nSkillID{};

	public:
		int32_t bLeft{};

	public:
		int32_t bSfx{};

	public:
		Ztl_bstr_t sHitUOL;

	public:
		tagPOINT ptRel{};
		// Methods
	public:
		~HITEFFECT();

	public:
		void _dtor_0();

	public:
		HITEFFECT(const CMob::HITEFFECT &arg0);

	public:
		void _ctor_1(const CMob::HITEFFECT &arg0);

	public:
		HITEFFECT();

	public:
		void _ctor_0();

	public:
		CMob::HITEFFECT &operator=(const CMob::HITEFFECT &arg0);

	public:
		static CMob::HITEFFECT &_op_assign_3(CMob::HITEFFECT *pThis, const CMob::HITEFFECT &arg0);
	};

public:
	struct DROPPICKUP
	{
		// Nested
		// Fields
	public:
		unsigned long dwDropID{};

	public:
		long tLastTry{};
		// Methods
	};

public:
	struct DelaySkill
	{
		// Nested
		// Fields
	public:
		long tSkillDelayTime{};

	public:
		long nSkillID{};

	public:
		long nSLV{};

	public:
		long nOption{};
		// Methods
	public:
		DelaySkill();

	public:
		void _ctor_0();
	};

public:
	struct ReservedPacket
	{
		// Nested
		// Fields
	public:
		int32_t bSet{};

	public:
		MY_UINT128 uFlag;

	public:
		CInPacket iPacket;
		// Methods
	public:
		~ReservedPacket();

	public:
		void _dtor_0();

	public:
		ReservedPacket(CMob::ReservedPacket &arg0);

	public:
		void _ctor_1(CMob::ReservedPacket &arg0);

	public:
		ReservedPacket();

	public:
		void _ctor_0();

	public:
		CMob::ReservedPacket &operator=(const CMob::ReservedPacket &arg0);

	public:
		static CMob::ReservedPacket &_op_assign_3(CMob::ReservedPacket *pThis, const CMob::ReservedPacket &arg0);
	};

public:
	class MobBullet : public CFadeoutBullet
	{
		// Nested
	public:
		class Container : public BulletContainer<CMob::MobBullet>
		{
			// Nested
			// Fields
			// Methods
		public:
			virtual ~Container();

		public:
			void _dtor_0();

		public:
			Container(const CMob::MobBullet::Container &arg0);

		public:
			void _ctor_1(const CMob::MobBullet::Container &arg0);

		public:
			Container();

		public:
			void _ctor_0();

		public:
			void OnRemoved();

		public:
			void ProcessAttack(CMob *pMob, CUserLocal *pUserLocal, tagRECT rcUserLocal, long tCur);

		public:
			CMob::MobBullet::Container &operator=(const CMob::MobBullet::Container &arg0);

		public:
			static CMob::MobBullet::Container &_op_assign_5(CMob::MobBullet::Container *pThis, const CMob::MobBullet::Container &arg0);
		};

	public:
		struct OnRemovedFunc
		{
			// Nested
			// Fields
			// Methods
		public:
			int32_t operator()(CMob::MobBullet &arg0);

		public:
			static int32_t _op_call_0(CMob::MobBullet::OnRemovedFunc *pThis, CMob::MobBullet &arg0);
		};

	public:
		struct ProcessAttackFunc
		{
			// Nested
			// Fields
		private:
			CMob *m_pMob{};

		private:
			CUserLocal *m_pUserLocal{};

		private:
			tagRECT m_rcLocalUser{};

		private:
			long m_tCur{};
			// Methods
		public:
			ProcessAttackFunc(CMob *arg0, CUserLocal *arg1, tagRECT arg2, long arg3);

		public:
			void _ctor_0(CMob *arg0, CUserLocal *arg1, tagRECT arg2, long arg3);

		public:
			int32_t operator()(CMob::MobBullet &arg0);

		public:
			static int32_t _op_call_1(CMob::MobBullet::ProcessAttackFunc *pThis, CMob::MobBullet &arg0);
		};
		// Fields
	private:
		long m_nZ{};

	private:
		int32_t m_bLeft{};

	private:
		Ztl_bstr_t m_sBallUOL;

	private:
		long m_nAttackIdx{};
		// Methods
	public:
		virtual ~MobBullet();

	public:
		void _dtor_0();

	public:
		MobBullet(const CMob::MobBullet &arg0);

	public:
		void _ctor_1(const CMob::MobBullet &arg0);

	public:
		MobBullet(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget, long z, int32_t bLeft, Ztl_bstr_t sBallUOL, long nAttackIdx);

	public:
		void _ctor_0(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget, long z, int32_t bLeft, Ztl_bstr_t sBallUOL, long nAttackIdx);

	public:
		void ProcessAttack(CMob *pThisMob, CUserLocal *pUserLocal, tagRECT rcUserLocal);

	protected:
		virtual _x_com_ptr<IWzGr2DLayer> PrepareBulletLayer(_x_com_ptr<IWzVector2D> pOrigin, int32_t bClockwise);

	public:
		CMob::MobBullet &operator=(const CMob::MobBullet &arg0);

	public:
		static CMob::MobBullet &_op_assign_5(CMob::MobBullet *pThis, const CMob::MobBullet &arg0);
	};

public:
	enum MOBCTRL_
	{
		MOBCTRL_PASSIVE = 255,
		MOBCTRL_PASSIVE0 = 254,
		MOBCTRL_PASSIVE1 = 253,
		MOBCTRL_ACTIVE_INT = 1,
		MOBCTRL_ACTIVE_REQ = 2,
		MOBCTRL_ACTIVE_PERM0 = 3,
		MOBCTRL_ACTIVE_PERM1 = 4
	};
	enum SUSPEND_
	{
		SUSPEND_NONE = 0,
		SUSPEND_INIT = 1,
		SUSPEND_DIE = 2,
		SUSPEND_BOMB = 3,
		SUSPEND_SWALLOW = 4
	};
	enum DAMAGEDBYMOB_HPBAR_
	{
		DAMAGEDBYMOB_HPBAR_RIGHT = 0,
		DAMAGEDBYMOB_HPBAR_LEFT = 1,
		DAMAGEDBYMOB_HPBAR_LADDERORROPE = 2
	};
	// Fields
protected:
	long m_nMobChargeCount{};

protected:
	int32_t m_bAttackReady{};

protected:
	long m_nAngerGaugeCount{};

protected:
	long m_nUpdateTime{};

protected:
	long m_nCurrIndicatorIndex{};

protected:
	long m_bFullChargeEffectTime{};

protected:
	long m_bFullChargeEffectStartTime{};

protected:
	CMob::ATTACKEFFECT m_effectAttack;

protected:
	ZList<CMob::AFFECTEDSKILLENTRY> m_lAffectedSkillEntry;

protected:
	ZList<CMob::ATTACKENTRY> m_lAttackEntry;

protected:
	ZList<_x_com_ptr<IWzGr2DLayer>> m_lpLayerASAni;

protected:
	ZList<_x_com_ptr<IWzGr2DLayer>> m_lpLayerASIcon;

protected:
	__POSITION *m_posAffectedGuidedBullet{};

protected:
	_x_com_ptr<IWzVector2D> m_pvc;

protected:
	_x_com_ptr<IWzVector2D> m_pvcActive;

protected:
	_x_com_ptr<IWzVector2D> m_pvcHead;

protected:
	std::array<int32_t, 2> _ZtlSecureTear_m_bInViewSplit{};

protected:
	uint32_t _ZtlSecureTear_m_bInViewSplit_CS{};

protected:
	std::array<long, 2> _ZtlSecureTear_m_nMobCtrlState{};

protected:
	uint32_t _ZtlSecureTear_m_nMobCtrlState_CS{};

protected:
	std::array<short, 2> _ZtlSecureTear_m_nMobCtrlSN{};

protected:
	uint32_t _ZtlSecureTear_m_nMobCtrlSN_CS{};

protected:
	long m_nSkillCommand{};

protected:
	long m_nSLV{};

protected:
	long m_nSummonType{};

protected:
	long m_tSummonEffect{};

protected:
	long m_tDoomEffectEnd{};

protected:
	std::array<long, 2> _ZtlSecureTear_m_tLastApplyCtrl{};

protected:
	uint32_t _ZtlSecureTear_m_tLastApplyCtrl_CS{};

protected:
	std::array<long, 2> _ZtlSecureTear_m_tLastTryPickUpDrop{};

protected:
	uint32_t _ZtlSecureTear_m_tLastTryPickUpDrop_CS{};

protected:
	long m_tLastAreaAttack{};

protected:
	int32_t m_bDoFirstAttack{};

protected:
	unsigned long m_uLayerStateCounter{};

protected:
	std::array<unsigned long, 2> _ZtlSecureTear_m_dwMobID{};

protected:
	uint32_t _ZtlSecureTear_m_dwMobID_CS{};

protected:
	CMobTemplate *m_pTemplate{};

protected:
	CMobTemplate *m_pTemplateByDoom{};

protected:
	std::array<long, 2> _ZtlSecureTear_m_nMP{};

protected:
	uint32_t _ZtlSecureTear_m_nMP_CS{};

protected:
	MobStat m_stat;

protected:
	RANGE m_rgHorz;

protected:
	long m_nTeamForMCarnival{};

protected:
	long m_nPhase{};

protected:
	std::array<long, 2> _ZtlSecureTear_m_nMoveAction{};

protected:
	uint32_t _ZtlSecureTear_m_nMoveAction_CS{};

protected:
	std::array<long, 2> _ZtlSecureTear_m_nOneTimeAction{};

protected:
	uint32_t _ZtlSecureTear_m_nOneTimeAction_CS{};

protected:
	std::array<long, 2> _ZtlSecureTear_m_tHitExpire{};

protected:
	uint32_t _ZtlSecureTear_m_tHitExpire_CS{};

protected:
	std::array<long, 2> _ZtlSecureTear_m_tLastHitExpire{};

protected:
	uint32_t _ZtlSecureTear_m_tLastHitExpire_CS{};

protected:
	__POSITION *m_posFrame{};

protected:
	std::array<long, 2> _ZtlSecureTear_m_tCurFrameRemain{};

protected:
	uint32_t _ZtlSecureTear_m_tCurFrameRemain_CS{};

protected:
	std::array<long, 2> _ZtlSecureTear_m_tNextFramesRemain{};

protected:
	uint32_t _ZtlSecureTear_m_tNextFramesRemain_CS{};

protected:
	std::array<long, 2> _ZtlSecureTear_m_tActionDelay{};

protected:
	uint32_t _ZtlSecureTear_m_tActionDelay_CS{};

protected:
	tagRECT m_rcBody{};

protected:
	tagRECT m_rcBodyFlip{};

protected:
	ZArray<tagRECT> m_arcMultiBody;

protected:
	ZArray<tagRECT> m_arcMultiBodyFlip;

protected:
	ZArray<tagRECT> m_arcAttackBody;

protected:
	ZArray<tagRECT> m_arcAttackBodyFlip;

protected:
	ZArray<ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>>> m_aAction;

protected:
	std::array<long, 2> _ZtlSecureTear_m_tInitDelay{};

protected:
	uint32_t _ZtlSecureTear_m_tInitDelay_CS{};

protected:
	std::array<long, 2> _ZtlSecureTear_m_nDeadType{};

protected:
	uint32_t _ZtlSecureTear_m_nDeadType_CS{};

protected:
	std::array<int32_t, 2> _ZtlSecureTear_m_nSuspended{};

protected:
	uint32_t _ZtlSecureTear_m_nSuspended_CS{};

protected:
	long m_tLastPoisonDamage{};

protected:
	long m_tLastVenomDamage{};

protected:
	long m_tLastAmbushDamage{};

protected:
	long m_tLastObstacleDamage{};

protected:
	long m_tLastHitByMob{};

protected:
	long m_tLastHitDazzledMob{};

protected:
	ZList<unsigned long> m_ldwRevive;

protected:
	ZList<CMob::DAMAGEINFO> m_lDamageInfo;

protected:
	ZList<CMob::HITEFFECT> m_lHitEffect;

protected:
	ZList<CMob::DROPPICKUP> m_lDropPickUpLog;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerAction;

protected:
	long m_nCalcDamageStatIndex{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerHPTag;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pEffectLayer;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerAngerTag;

protected:
	int32_t m_bNeedToUpdateCrc{};

protected:
	unsigned long m_dwMobCrc{};

private:
	long m_tLastHitted{};

private:
	_x_com_ptr<IWzCanvas> m_pCanvasHPIndicator;

private:
	ZMap<long, long, long> m_mDelayedHPIndicator;

private:
	ZArray<long> m_pCanvasAngerIndicatorArrayCount;

private:
	ZArray<ZArray<_x_com_ptr<IWzCanvas>>> m_pCanvasAngerIndicatorArray;

private:
	long m_nGaugeCount{};

private:
	ZRef<CAttrShoe> m_pAttrShoe;

private:
	SECPOINT m_ptPos;

private:
	SECPOINT m_ptPosPrev;

private:
	long m_nHPpercentage{};

private:
	int32_t m_bWaitingToBeSetTossed{};

protected:
	ZArray<tagPOINT> m_aMultiTargetForBall;

protected:
	ZArray<long> m_aRandTimeforAreaAttack;

private:
	CMob::DelaySkill m_delaySkill;

private:
	int32_t m_bDoomReserved{};

private:
	unsigned char m_bDoomReservedSN{};

private:
	ZList<ZRef<CMob::ReservedPacket>> m_lpStatChangeReserved;

public:
	TSecType<int> m_bChasing;

private:
	long m_tTimeBomb{};

protected:
	unsigned long m_dwSwallowCharacterID{};

protected:
	unsigned long m_dwTargetMobID{};

protected:
	long m_tEscortStopActTime{};

protected:
	long m_nEscortStopAct{};

public:
	long m_nDamagedByMobHPBarState{};

private:
	long m_nRushAttackIdx{};

private:
	long m_tRushAttackEnd{};

private:
	CMob::MobBullet::Container m_Bullets;
	// Methods
public:
	virtual ~CMob();

public:
	void _dtor_0();

public:
	CMob(const CMob &arg0);

public:
	void _ctor_1(const CMob &arg0);

public:
	CMob(CMobTemplate *pMobTemplate);

public:
	void _ctor_0(CMobTemplate *pMobTemplate);

public:
	void Init(unsigned long dwMobID, CInPacket &iPacket);

public:
	void SetActive(int32_t bActive);

public:
	int32_t IsActive();

public:
	int32_t IsInViewSplit();

public:
	void SetInViewSplit(int32_t arg0);

public:
	void ChaseTarget(int32_t bChase, IVecCtrlOwner *pTarget, int32_t bForced);

public:
	CMobTemplate *GetTemplate() const;

public:
	CMobTemplate *GetCurTemplate() const;

public:
	MobStat *GetMobStat();

public:
	long GetCalcDamageStatIndex() const;

public:
	unsigned long GetMobID() const;

public:
	int32_t IsBossMob() const;

public:
	long GetMoveAbility() const;

public:
	const MobAttackInfo *GetAttackInfo(long nAction) const;

public:
	long GetMoveAction() const;

public:
	void SetMoveAction(long nMA, int32_t bReload);

public:
	int32_t IsInited();

public:
	int32_t IsSuspended();

public:
	long GetSuspended();

public:
	void SetSuspended(long nSuspend);

public:
	int32_t IsNotAttack();

public:
	int32_t IsDamagedByMob();

public:
	int32_t CheckDamagedByMob(unsigned long dwTemplateID);

public:
	int32_t IsMobOurTeam();

public:
	int32_t IsSamePhaseWithMe();

public:
	int32_t IsNoFlip();

public:
	int32_t IsDazzledMobByMe();

public:
	int32_t IsDazzled();

public:
	void SetLastHitDazzledMob(long arg0);

public:
	long GetLastHitDazzledMob();

public:
	long GetDeadType();

public:
	void SetDeadType(long arg0);

public:
	int32_t IsTimeBomb();

public:
	const ZList<unsigned long> &GetReviveList();

public:
	int32_t IsOnPlayingOneTimeAction();

public:
	long GetOneTimeAction();

public:
	void ResetOneTimeAction();

public:
	long GetOneTimeActionRemain();

public:
	int32_t SetAttackAction(long arg0);

public:
	long GetRandomHitAction();

public:
	int32_t IsLeft();

public:
	long GetCurrentAction(long *pnDir);

public:
	long GetCurrentFrameIndex();

public:
	int32_t GetBodyRect(tagRECT &rc, int32_t bContinuous);

public:
	tagPOINT GetHitPoint(tagRECT rcAttack);

public:
	tagPOINT GetHitPointHeightRand(tagRECT rcAttack);

public:
	void GetAttackBodyRect(ZArray<tagRECT> &arcAttack, int32_t bContinuous);

public:
	void GetMultiBodyRect(ZArray<tagRECT> &arcMulti, int32_t bContinuous);

public:
	void GetArrayBodyRectImpl(const ZArray<tagRECT> &originBodyRect, const ZArray<tagRECT> &originBodyRectFlip, ZArray<tagRECT> &arcRect, int32_t bContinuous);

public:
	long GetHeight();

public:
	long GetHalfWidth();

public:
	long GetPushedDamage();

public:
	long GetTeamForMCarnival();

public:
	int32_t IsImmovable();

public:
	int32_t IsPosFixed();

public:
	int32_t IsDoom();

public:
	CStaticFoothold *GetFoothold();

public:
	_x_com_ptr<IWzVector2D> GetVecCtrl();

public:
	_x_com_ptr<IWzVector2D> GetActiveVecCtrl();

	CVecCtrlMob* GetVecCtrlMob();
	CVecCtrlMob* GetActiveVecCtrlMob();


public:
	void SetShoeAttr();

public:
	void AddDamageInfo(unsigned long dwCharacterId, long nSkillID, long tDelayedProcess, long nHitAction, int32_t bLeft, long nDamage, int32_t bCriticalAttack, long nAttackIdx, tagPOINT pt, Ztl_bstr_t sHitAni, int32_t bChase, long nMoveType, long nBulletCashItemID, long nMoveEndingPosX, long nMoveEndingPosY, int32_t bMoveLeft);

public:
	long GetRemainDamageInfoDelay();

public:
	void OnDie();

public:
	void OnBomb();

public:
	void OnDestructByMiss();

public:
	void OnSwallowed();

public:
	void OnRevive();

public:
	void OnDoomed(int32_t bDoom);

public:
	virtual void Update();

public:
	void ProcessAction(long tCur);

public:
	void ProcessAttack(long arg0);

public:
	void SetTemporaryStat(CInPacket &iPacket, long nCalcDamageIndex);

public:
	void ShowHPIndicator();

public:
	void HideHPIndicator();

public:
	long MakeNameTag(const char *sName, _x_com_ptr<IWzGr2DLayer> pOverlay, _x_com_ptr<IWzVector2D> pvc);

public:
	int32_t IsTargetInAttackRange(long anAttackAction, long *rcTarget, int32_t *abAttackLeft, CMob::TARGETINFO *bNoFlip, long pUserLocal);

public:
	virtual long GetType();

public:
	virtual long OnResolveMoveAction(long nInputX, long nInputY, long nCurMoveAction, const CVecCtrl *pvc);

public:
	virtual void OnLayerZChanged(const CVecCtrl *pvc);

public:
	virtual const ZRef<CAttrShoe> GetShoeAttr();

public:
	virtual const tagPOINT GetPos();

public:
	virtual const tagPOINT GetPosPrev();

public:
	virtual long GetZMass();

public:
	void OnMove(CInPacket &iPacket);

public:
	void OnCtrlAck(CInPacket &iPacket);

public:
	void OnStatSet(CInPacket &iPacket);

public:
	void OnStatReset(CInPacket &iPacket);

public:
	void OnSuspendReset(CInPacket &iPacket);

public:
	void OnAffected(CInPacket &iPacket);

public:
	void OnDamaged(CInPacket &iPacket);

public:
	void OnCatchEffect(CInPacket &iPacket);

public:
	void OnEffectByItem(CInPacket &iPacket);

public:
	void OnSpecialEffectBySkill(CInPacket &iPacket);

public:
	void OnHPIndicator(CInPacket &iPacket);

public:
	void OnMobAttackedByMob(CInPacket &iPacket);

public:
	void OnMobSpeaking(CInPacket &iPacket);

public:
	void OnMobSkillDelay(CInPacket &iPacket);

public:
	void OnEscortFullPath(CInPacket &iPacket);

public:
	void OnIncMobChargeCount(CInPacket &iPacket);

public:
	int32_t SendDropPickUpRequest(unsigned long dwID);

public:
	void SetGuided(long nSkillID, long nDelay);

public:
	void ResetGuided();

protected:
	int32_t IsRectIntersectWithTrapezoid(long x0, long x1, long x2, long y, long r, const tagRECT &rc);

protected:
	void OnHit(unsigned long dwCharacterId, long nSkillID, long nHitAction, int32_t bLeft, long nDamage, int32_t bCriticalAttack, long nAttackIdx, int32_t bChase, long nMoveType, long nBulletCashItemID, long nMoveEndingPosX, long nMoveEndingPosY, int32_t bMoveLeft, int32_t bZigZagDamage);

protected:
	void DoAttack(long nAction, int32_t bLeft, CMob::TARGETINFO ti);

protected:
	void RegisterMagicBulletAnimation(long arg0, long arg1, tagPOINT arg2, tagPOINT arg3, _x_com_ptr<IWzVector2D> arg4, long arg5, Ztl_bstr_t arg6, int32_t arg7);

protected:
	_x_com_ptr<IWzGr2DLayer> LoadLayer(Ztl_bstr_t bsUOL, int32_t bLeft, long rx, long ry, long nZ_Diff, long nPos);

protected:
	_x_com_ptr<IWzGr2DLayer> LoadEffectLayer(long nItemID);

protected:
	void ShowDamage(long nDamage, long nAttackIdx, int32_t bCriticalAttack, int32_t bHalfHeight, int32_t ZigZagDamage, int32_t bAdjustHeight);

protected:
	void ShowEffectByItem(long nItemID, int32_t bSuccess);

protected:
	void ShowCatchEffect(int32_t bSuccess, long tDelay);

protected:
	void UpdateAffectedSkillList(long tDelay);

protected:
	int32_t ShowAffectedSkill(long arg0);

protected:
	void SetAffectedLayerPos();

protected:
	void ShiftAffectedSkillAnimation(int32_t bForced);

protected:
	void ApplyControl(long tCur);

protected:
	void TryPickUpDrop(long tCur);

protected:
	void TryFirstAttack();

protected:
	void TryFirstSelfDestruction();

protected:
	int32_t TryDoingSkill(long &nAction, int32_t &bLeft, CMob::TARGETINFO &ti);

protected:
	void TrySelfDestruct();

protected:
	void TrySpeaking(long nSpeakInfo, long nSpeech);

protected:
	void ShowHitEffect(long nDamage);

protected:
	void CreateHPIndicator(long nPercent, unsigned long dwColor);

protected:
	void DrawHPTag(long arg0, long arg1);

protected:
	void AdjustHPIndicatorPosition();

protected:
	void InitAngerGaugeData();

protected:
	void CreateAngerIndicator();

protected:
	void AdjustAngerIndicatorPosition();

protected:
	void AnimateAngerIndicator();

protected:
	void AngerGaugeFullChargeEffect();

protected:
	void ChangeAngerIndicator(long nIndicatorIndex);

protected:
	int32_t __fastcall _ZtlSecureGet_m_bInViewSplit() const;

protected:
	int32_t __fastcall _ZtlSecurePut_m_bInViewSplit(int32_t arg0);

protected:
	long __fastcall _ZtlSecureGet_m_nMobCtrlState() const;

protected:
	long __fastcall _ZtlSecurePut_m_nMobCtrlState(long arg0);

protected:
	short __fastcall _ZtlSecureGet_m_nMobCtrlSN() const;

protected:
	short __fastcall _ZtlSecurePut_m_nMobCtrlSN(short arg0);

protected:
	long __fastcall _ZtlSecureGet_m_tLastApplyCtrl() const;

protected:
	long __fastcall _ZtlSecurePut_m_tLastApplyCtrl(long arg0);

protected:
	long __fastcall _ZtlSecureGet_m_tLastTryPickUpDrop() const;

protected:
	long __fastcall _ZtlSecurePut_m_tLastTryPickUpDrop(long arg0);

protected:
	unsigned long __fastcall _ZtlSecureGet_m_dwMobID() const;

protected:
	unsigned long __fastcall _ZtlSecurePut_m_dwMobID(unsigned long arg0);

protected:
	long __fastcall _ZtlSecureGet_m_nMP() const;

protected:
	long __fastcall _ZtlSecurePut_m_nMP(long arg0);

protected:
	long __fastcall _ZtlSecureGet_m_nMoveAction() const;

protected:
	long __fastcall _ZtlSecurePut_m_nMoveAction(long arg0);

protected:
	long __fastcall _ZtlSecureGet_m_nOneTimeAction() const;

protected:
	long __fastcall _ZtlSecurePut_m_nOneTimeAction(long arg0);

protected:
	long __fastcall _ZtlSecureGet_m_tHitExpire() const;

protected:
	long __fastcall _ZtlSecurePut_m_tHitExpire(long arg0);

protected:
	long __fastcall _ZtlSecureGet_m_tLastHitExpire() const;

protected:
	long __fastcall _ZtlSecurePut_m_tLastHitExpire(long arg0);

protected:
	long __fastcall _ZtlSecureGet_m_tCurFrameRemain() const;

protected:
	long __fastcall _ZtlSecurePut_m_tCurFrameRemain(long arg0);

protected:
	long __fastcall _ZtlSecureGet_m_tNextFramesRemain() const;

protected:
	long __fastcall _ZtlSecurePut_m_tNextFramesRemain(long arg0);

protected:
	long __fastcall _ZtlSecureGet_m_tActionDelay() const;

protected:
	long __fastcall _ZtlSecurePut_m_tActionDelay(long arg0);

protected:
	long __fastcall _ZtlSecureGet_m_tInitDelay() const;

protected:
	long __fastcall _ZtlSecurePut_m_tInitDelay(long arg0);

protected:
	long __fastcall _ZtlSecureGet_m_nDeadType() const;

protected:
	long __fastcall _ZtlSecurePut_m_nDeadType(long arg0);

protected:
	int32_t __fastcall _ZtlSecureGet_m_nSuspended() const;

protected:
	int32_t __fastcall _ZtlSecurePut_m_nSuspended(int32_t arg0);

protected:
	void ClearActionLayer();

protected:
	void PrepareActionLayer();

protected:
	long GetActionDelay(long nAction);

protected:
	void SetLayerZ();

protected:
	long MoveAction2RawAction(long nMA, long *pnDir) const;

protected:
	long RawAction2MoveAction(long nAction) const;

protected:
	void SetFrameInfo(ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>> &l, __POSITION *pos);

protected:
	void GenerateMovePath(long nAction, int32_t bLeft, CMob::TARGETINFO ti, int32_t bChase, long nMoveType, long nMoveEndingX, long nMoveEndingY, int32_t bMoveLeft, int32_t bRiseByToss);

public:
	void SetNeedToUpdateCrc(int32_t arg0);

public:
	unsigned long GetCrc();

public:
	unsigned long CalcCrc();

public:
	long GetHPPercentage();

public:
	int32_t IsRisingByToss();

public:
	int32_t CanBeTossedAgain();

public:
	static int32_t __cdecl IsAttackAction(long arg0);

public:
	static int32_t __cdecl IsSkillAction(long arg0);

public:
	static int32_t __cdecl IsHitAction(long arg0);

public:
	static int32_t __cdecl IsDieAction(long arg0);

public:
	void SetDamagedByMob(long nDamage, long vx, long vy, CMob *pAttackMob, long nAttackIdx, long nDir);

protected:
	int32_t LoadMobAction(long nAction);

protected:
	long GetFineAction(long nAction);

protected:
	long GetFineMoveDirAction(long nMoveDirAction);

protected:
	int32_t IsMultiBallAttack(long nAction, long &nBulletNumber, long &nRange);

protected:
	void SetMultiBallTarget(long nBulletNumber, long nRange);

protected:
	void SetRandTimeForAreaAttack(long nAction);

protected:
	tagPOINT SetBallDestPoint(tagPOINT pt1, tagPOINT pt2, int32_t bLeft, long nRange);

private:
	void ProcessStatSet(MY_UINT128 uFlagSet, CInPacket &iPacket);

private:
	void ProcessStatReset(MY_UINT128 uFlagReset, CInPacket &iPacket);

private:
	void UpdateTimeBomb();

public:
	void SetTimeBombTime(long nSkillID);

public:
	void SetSwallowCharacter(unsigned long arg0);

public:
	int32_t IsEscortMob();

public:
	int32_t IsNotEnemyMob();

public:
	void SendCollisionEscort(long nDest);

protected:
	int32_t IsChaseTargetEscort();

protected:
	int32_t IsChaseTargetDazzle();

protected:
	int32_t IsAbleTargetEscortMob(CMob *pEscortMob);

protected:
	long GetDamagedByMobofNonDamageTime();

protected:
	void UpdateEscortStopActRepeat();

public:
	void ClearEscortInfo();

public:
	void SendRequestEscortPath();

public:
	void SendEscortStopEndRequest();

public:
	void OnEscortStopEndPermmision();

public:
	void OnEscortStopSay(CInPacket &iPacket);

public:
	void OnEscortReturnBefore(CInPacket &iPaket);

public:
	void SetRushAttack(long arg0, long arg1);

public:
	void ResetRushAttack();

public:
	int32_t IsOnRushAttack();

public:
	long GetRushAttackIdx();

public:
	void OnNextAttack(CInPacket &iPacket);

	CLASS_RTTI_(CMob, CLife);

public:
	int32_t IsCantPassByTeleport();

public:
	CMob &operator=(CMob &arg0);

public:
	static CMob &_op_assign_223(CMob *pThis, CMob &arg0);
};
STATIC_ASSERT_SIZE(CMob, 1512);

CMob *__cdecl CreateMob(CMobTemplate *pMobTemplate);
const wchar_t *__cdecl get_item_sound(long nItemID, int32_t bSuccess);
void __stdcall _vectorconstructoriterator_(void *__t, uint32_t __s, int32_t __n, PROC *__f);
tagRECT &__cdecl adjust_rect(tagRECT &rc, long x, long y, int32_t bFlip);
long __cdecl calc_priority(long x1, long y1, long x2, long y2);
void __cdecl get_random_unique_array(ZArray<long> &anShuffle, long nStart, unsigned long nRange, unsigned long nCount);

static void __cdecl _zswap_cmob_ptr(CMob **a, CMob **b)
{
	CMob *c = *a;
	*a = *b;
	*b = c;
}