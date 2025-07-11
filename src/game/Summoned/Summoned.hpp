// Summoned.hpp
#pragma once
#include <VecCtrlSummoned/VecCtrlSummoned.hpp>

#include "util/base.h"
#include "pcom/wz.h"

#include "Bullet/Bullet.hpp"
#include "Life/Life.hpp"
#include "Mob/Mob.hpp"
#include "VecCtrl/VecCtrl.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"
#include "Packet/Packet.hpp"
#include "BookDlg/BookDlg.hpp"

// extra

class CUser;

class CMob;

// Level: 0 0x106fa
class CSummonedBase;
// Level: 1 0x106e9
class CSummoned;
// Level: 2 0x108c1
class CTutor;

class CSummonedBase
{

public:
	static ZMap<unsigned long, ZRef<SummonedAttackInfo>, unsigned long> ms_mSummonedAttackInfo;
	// Nested
	// Fields
	// Methods
public:
	virtual ~CSummonedBase();

public:
	void _dtor_0();

public:
	CSummonedBase(const CSummonedBase &arg0);

public:
	void _ctor_1( const CSummonedBase &arg0);

public:
	CSummonedBase();

public:
	void _ctor_0();

protected:
	ZRef<SummonedAttackInfo> LoadAttackInfo(long nSkillID, long nIdx, long nSLV, long nAIType);

public:
	long AIType2Action(long nAIType);

public:
	long Action2AIType(long nAction);

public:
	CSummonedBase &operator=(const CSummonedBase &arg0);

public:
	static CSummonedBase &_op_assign_6(CSummonedBase *pThis, const CSummonedBase &arg0);
};
STATIC_ASSERT_SIZE(CSummonedBase, 4);
class CSummoned : public CLife, public CSummonedBase
{
	// Nested
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

	public:
		int32_t bSelfDestruct{};
		// Methods
	public:
		~ATTACKEFFECT();

	public:
		void _dtor_0();

	public:
		ATTACKEFFECT(const CSummoned::ATTACKEFFECT &arg0);

	public:
		void _ctor_1( const CSummoned::ATTACKEFFECT &arg0);

	public:
		ATTACKEFFECT();

	public:
		void _ctor_0();

	public:
		void SetAttackEffect(Ztl_bstr_t sEffect_, long tCur, long tEffectAfter, int32_t bLeft_, int32_t bSelfDestruct_);

	public:
		CSummoned::ATTACKEFFECT &operator=(const CSummoned::ATTACKEFFECT &arg0);

	public:
		static CSummoned::ATTACKEFFECT &_op_assign_4(CSummoned::ATTACKEFFECT *pThis, const CSummoned::ATTACKEFFECT &arg0);
	};

public:
	class SummonedBullet : public CFadeoutBullet
	{
		// Nested
	public:
		class Container : public BulletContainer<CSummoned::SummonedBullet>
		{
			// Nested
			// Fields
			// Methods
		public:
			virtual ~Container();

		public:
			void _dtor_0();

		public:
			Container(const CSummoned::SummonedBullet::Container &arg0);

		public:
			void _ctor_1( const CSummoned::SummonedBullet::Container &arg0);

		public:
			Container();

		public:
			void _ctor_0();

		public:
			void OnRemoved();

		public:
			CSummoned::SummonedBullet::Container &operator=(const CSummoned::SummonedBullet::Container &arg0);

		public:
			static CSummoned::SummonedBullet::Container &_op_assign_4(CSummoned::SummonedBullet::Container *pThis, const CSummoned::SummonedBullet::Container &arg0);
		};

	public:
		struct OnRemovedFunc
		{
			// Nested
			// Fields
			// Methods
		public:
			int32_t operator()(CSummoned::SummonedBullet &arg0);

		public:
			static int32_t _op_call_0(CSummoned::SummonedBullet::OnRemovedFunc *pThis, CSummoned::SummonedBullet &arg0);
		};
		// Fields
	private:
		long m_nZ{};

	private:
		Ztl_bstr_t m_sBallUOL;

	private:
		long m_nAttackIdx{};
		// Methods
	public:
		virtual ~SummonedBullet();

	public:
		void _dtor_0();

	public:
		SummonedBullet(const CSummoned::SummonedBullet &arg0);

	public:
		void _ctor_1( const CSummoned::SummonedBullet &arg0);

	public:
		SummonedBullet(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget, long z, Ztl_bstr_t sBallUOL, long nAttackIdx);

	public:
		void _ctor_0( long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget, long z, Ztl_bstr_t sBallUOL, long nAttackIdx);

	protected:
		virtual _x_com_ptr<IWzGr2DLayer> PrepareBulletLayer(_x_com_ptr<IWzVector2D> pOrigin, int32_t bClockwise);

	public:
		CSummoned::SummonedBullet &operator=(const CSummoned::SummonedBullet &arg0);

	public:
		static CSummoned::SummonedBullet &_op_assign_4(CSummoned::SummonedBullet *pThis, const CSummoned::SummonedBullet &arg0);

	};
	// Fields
protected:
	CSummoned::ATTACKEFFECT m_effectAttack;

private:
	CSummoned::SummonedBullet::Container m_Bullets;

protected:
	const unsigned long m_dwSummonedID{};

protected:
	unsigned long m_dwCharacterID{};

protected:
	int32_t m_bOwnerIsLocal{};

protected:
	long m_nSkillID{};

protected:
	unsigned char m_nCharLevel{};

protected:
	long m_nSLV{};

protected:
	long m_nUpgradeSLV{};

protected:
	long m_nMoveAbility{};

protected:
	long m_nAssistType{};

protected:
	long m_nPAD{};

protected:
	long m_nMAD{};

protected:
	long m_nDamage{};

protected:
	int32_t m_bInvulnerable{};

protected:
	unsigned long m_nTargetID{};

protected:
	long m_tCreateTime{};

protected:
	long m_tEndTime{};

protected:
	int32_t m_bAssistAttackManual{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerAction;

protected:
	std::array<long, 2> _ZtlSecureTear_m_nMoveAction{};

protected:
	uint32_t _ZtlSecureTear_m_nMoveAction_CS{};

protected:
	std::array<long, 2> _ZtlSecureTear_m_nOneTimeAction{};

protected:
	uint32_t _ZtlSecureTear_m_nOneTimeAction_CS{};

protected:
	ZArray<ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>> m_aAction;

protected:
	__POSITION *m_posFrame{};

protected:
	long m_tCurFrameRemain{};

protected:
	long m_tNextFramesRemain{};

protected:
	std::array<long, 2> _ZtlSecureTear_m_tHitPeriodRemain{};

protected:
	uint32_t _ZtlSecureTear_m_tHitPeriodRemain_CS{};

protected:
	long m_tActionDelay{};

protected:
	long m_tLastAttack{};

protected:
	long m_tNextHeal{};

protected:
	long m_tNextBuff{};

protected:
	tagRECT m_rcBody{};

protected:
	tagRECT m_rcBodyFlip{};

protected:
	unsigned long m_uLayerStateCounter{};

protected:
	__POSITION *m_posList{};

protected:
	int32_t m_nSuspend{};

protected:
	int32_t m_bSelfDestucted{};

protected:
	ZRef<CAvatar> m_pAvatar;

protected:
	int32_t m_bSummonedEffect{};

protected:
	int32_t m_bSummonedEffect0{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerEffect;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerEffect0;

protected:
	_x_com_ptr<IWzVector2D> m_pvc;

protected:
	ZRef<CAttrShoe> m_pAttrShoe;

protected:
	SECPOINT m_ptPos;

protected:
	SECPOINT m_ptPosPrev;

private:
	ZMap<unsigned long, long, unsigned long> m_mHealRobotLastHealTime;

private:
	long m_nTeslaCoilState{};

private:
	ZRef<Triangle> m_pTriangle;

private:
	ZRef<ZArray<unsigned long>> m_padwTeslaFamily;
	// Methods
public:
	CSummoned() : m_dwSummonedID(0)
	{
	}
	virtual ~CSummoned();

public:
	void _dtor_0();

public:
	CSummoned(const CSummoned &arg0);

public:
	void _ctor_1( const CSummoned &arg0);

public:
	CSummoned(unsigned long dwCharacterID, unsigned long dwSummonedID, long nSkillID, unsigned char nCharLevel, long nSLV);

public:
	void _ctor_0( unsigned long dwCharacterID, unsigned long dwSummonedID, long nSkillID, unsigned char nCharLevel, long nSLV);

public:
	int32_t Init(CInPacket &pkt);
	int32_t Init_1(CInPacket &iPacket)
	{
		return Init(iPacket);
	}

public:
	int32_t Init(long x, long y, long nMoveAction, short nCurFoothold, long nMoveAbility, long nAssistType, long nEnterType, AvatarLook *pAvatarLook);
	int32_t Init_0(long x, long y, long nMoveAction, short nCurFoothold, long nMoveAbility, long nAssistType, long nEnterType, AvatarLook *pAvatarLook)
	{
		return Init(x, y, nMoveAction, nCurFoothold, nMoveAbility, nAssistType, nEnterType, pAvatarLook);
	}

public:
	void SetActive(int32_t bLeader);

public:
	int32_t IsLeft();

public:
	int32_t IsPosFixed();

public:
	unsigned long GetID();

public:
	long GetMoveAction();

public:
	void SetMoveAction(long nMA, int32_t bReload);

public:
	void SetAttackAction(long nAttackAction);

public:
	long GetOneTimeAction();

public:
	long GetOneTimeActionRemain();

public:
	int32_t IsOnPlayingOneTimeAction();

public:
	void ResetOneTimeAction();

public:
	long GetCurrentAction(long *pnDir);

public:
	int32_t GetBodyRect(tagRECT &rc, int32_t bContinuous);

public:
	tagPOINT GetHitPoint(tagRECT arg0);

public:
	long GetHeight() const;

public:
	_x_com_ptr<IWzVector2D> GetVecCtrl();

public:
	long GetSkillID();

public:
	long GetSkillLevel();

public:
	CUser *GetOwnerUser();

public:
	void SetShoeAttr();

public:
	int32_t AttackToTargetMob(CMob *pMob, long tCur);

public:
	void TryDoingAttack(long tCur, long nAIType);

public:
	void TryDoingAttackTarget(long tCur);

public:
	void TryDoingAttackManual(long tCur);

public:
	int32_t TryDoingHeal(long tCur);

public:
	void TryDoingGiveBuff(long tCur);

public:
	int32_t TryDoingHealingRobot(unsigned long dwLocalUserID, tagRECT &rectLocalUser);

public:
	void TryDoingSummon(long tCur);

public:
	void TryDoingTaslaCoilAttack(long tCur);

public:
	void SetDamaged(long nDamage, long vx, long vy, CMob *pMob, long nAttackIdx, long nDir);

public:
	virtual void Update();

public:
	void ProcessAction(long tCur);

public:
	void ProcessAttack(long tCur);

public:
	void ChaseTarget(int32_t bChase, IVecCtrlOwner *pTarget);

public:
	int32_t IsActive();

public:
	int32_t IsInvulnerable();

public:
	void SetSuspended(long nSuspend);

public:
	int32_t IsSuspended();

public:
	void ShowEffect(long nType);

public:
	void PreserveAction();

public:
	unsigned long GetTargetID();

public:
	void SetTargetID(unsigned long nTargetID);

public:
	const long GetAssistType();

public:
	void SetAssistAttackManual(int32_t bLeader);

public:
	const int32_t IsAssistAttackManual();

public:
	void SendRemove();

public:
	void ChangeEndTime(long arg0);

public:
	void SetTeslaCoilLeader(int32_t bLeader);

public:
	void SetTeslaCoilTriangle(ZRef<Triangle> pTriangle, ZRef<ZArray<unsigned long>> padwID);

public:
	void ShowTeslaCoilTriangle(ZRef<Triangle> pTriangle, long tStart, long tEnd, Ztl_bstr_t sEffectUOL);

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


	CVecCtrlSummoned* GetVecCtrlSummoned();

public:
	void OnRemoved(CInPacket &iPacket);

public:
	void OnMove(CInPacket &iPacket);

public:
	void OnAttack(CInPacket &iPacket);

public:
	void OnSkill(CInPacket &iPacket);

public:
	void OnHit(CInPacket &iPacket);

protected:
	void PrepareActionLayer();

protected:
	long MoveAction2RawAction(long nMA, long *pnDir);

protected:
	void SetLayerZ();

protected:
	void SetFrameInfo(ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>> &l, __POSITION *pos);

protected:
	void MakeIncDecHPEffect(long nDelta);

protected:
	long __fastcall _ZtlSecureGet_m_nMoveAction() const;

protected:
	long __fastcall _ZtlSecurePut_m_nMoveAction(long arg0);

protected:
	long __fastcall _ZtlSecureGet_m_nOneTimeAction() const;

protected:
	long __fastcall _ZtlSecurePut_m_nOneTimeAction(long arg0);

protected:
	long __fastcall _ZtlSecureGet_m_tHitPeriodRemain() const;

protected:
	long __fastcall _ZtlSecurePut_m_tHitPeriodRemain(long arg0);

	CLASS_RTTI_(CSummoned, CLife);

private:
	void _LoadEffect();

private:
	void _UpdateEffect();
};
STATIC_ASSERT_SIZE(CSummoned, 496);
class CTutor : public CSummoned
{
	// Nested
public:
	enum kBalloon
{
	kBalloonLeft = 19,
	kBalloonRight = 19,
	kBalloonTop = 21,
	kBalloonBottom = 19,
	kBalloonArrowHeight = 52
};

	// Fields
protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerMsg;

protected:
	ZArray<_x_com_ptr<IWzFont>> m_apFont;

protected:
	ZArray<CT_INFO> m_aCT;

protected:
	long m_nCTHeight{};

protected:
	unsigned long m_tMsgReceived{};

protected:
	unsigned long m_tDuration{};
	// Methods
public:
	virtual ~CTutor();

public:
	void _dtor_0();

public:
	CTutor(const CTutor &arg0);

public:
	void _ctor_1( const CTutor &arg0);

public:
	CTutor(unsigned long dwCharacterID, long nSkillID);

public:
	void _ctor_0( unsigned long dwCharacterID, long nSkillID);

public:
	virtual void Update();

public:
	void OnMessage(long nIdx, long nDuration);
	void OnMessage_0(long nIdx, long nDuration)
	{
		OnMessage(nIdx, nDuration);
	}

public:
	void OnMessage(ZXString<char> &sMsg, long nWidth, long nDuration);
	void OnMessage_1(ZXString<char> &sMsg, long nWidth, long nDuration)
	{
		OnMessage(sMsg, nWidth, nDuration);
	}
};
STATIC_ASSERT_SIZE(CTutor, 520);

