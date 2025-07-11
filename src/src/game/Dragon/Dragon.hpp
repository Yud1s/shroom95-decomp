// Dragon.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"
//#include "User/User.hpp"
#include "VecCtrl/VecCtrl.hpp"
#include "Life/Life.hpp"
#include "ActionMan/ActionMan.hpp"


class CUser;

// Level: 1 0x5d86
class CDragon;

class CDragon : public CLife
{
	// Nested
	// Fields
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
	__POSITION *m_posFrame;

protected:
	long m_tCurFrameRemain{};

protected:
	long m_nAttackSpeed{};

protected:
	tagRECT m_rcBody{};

protected:
	tagRECT m_rcBodyFlip{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerKeyDownBar;

protected:
	long m_nKeyDownBarPosition{};

protected:
	long m_nPrepareSkillID{};

protected:
	_x_com_ptr<IWzVector2D> m_pvc;

protected:
	ZRef<CAttrShoe> m_pAttrShoe;

protected:
	SECPOINT m_ptPos;

protected:
	SECPOINT m_ptPosPrev;

protected:
	CUser *m_pOwner;

protected:
	long m_nJobCode{};

protected:
	ZArray<unsigned short> m_aQuest;

protected:
	long m_nQuestState{};

protected:
	long m_nLastQuestState{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerQuestInfo;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerDragonFury;

protected:
	long m_nLastInputX{};

protected:
	long m_nModifyInputXCount{};

private:
	ZArray<ZArray<ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>>>> m_aAction;
	// Methods
public:
	virtual ~CDragon();

public:
	void _dtor_0();

public:
	CDragon(const CDragon &arg0);

public:
	void _ctor_1(const CDragon &arg0);

public:
	CDragon();

public:
	void _ctor_0();

public:
	int32_t IsLeft();

public:
	long GetHeight();

public:
	int32_t GetBodyRect(tagRECT &rc, int32_t bContinuous);

public:
	long GetMoveAction();

public:
	void SetMoveAction(long nMA, int32_t bReload);

public:
	long GetCurrentAction(long *pnDir);

public:
	long GetOneTimeAction();

public:
	void SetOneTimeAction(long arg0);

public:
	int32_t IsOnPlayingOneTimeAction();

public:
	void ResetOneTimeAction();

public:
	void SetAttackAction(long nSkillID, long tLastKeyDown);

public:
	long GetAttackSpeed();

public:
	long MoveAction2RawAction(long arg0, long *arg1);

public:
	void ProcessAction(long tCur);

public:
	void ChaseTarget(int32_t bChase, IVecCtrlOwner *pTarget);

public:
	void CreateEffect(long nType);

public:
	void DeleteEffect(long nType);

public:
	void CreateKeyDownBar(long nSkillID);

public:
	void DestoryKeyDownBar();

public:
	void DrawKeyDownBar();

public:
	void UpdateKeyDownBar(long nSkillID, long tLastKeyDown);

public:
	long GetLayerZ();

public:
	void SetLayerZ();

public:
	int32_t NeedToTalk(long x, long y);

public:
	void OnCreated(CUser *pOwner, CInPacket &iPacket);

public:
	void OnMove(CInPacket &iPacket);

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
	_x_com_ptr<IWzVector2D> GetVecCtrl();

public:
	virtual void Update();

protected:
	long __fastcall _ZtlSecureGet_m_nMoveAction() const;

protected:
	long __fastcall _ZtlSecurePut_m_nMoveAction(long arg0);

protected:
	long __fastcall _ZtlSecureGet_m_nOneTimeAction() const;

protected:
	long __fastcall _ZtlSecurePut_m_nOneTimeAction(long arg0);

protected:
	void PrepareActionLayer();

protected:
	void SetFrameInfo(ZList<ZRef<CActionMan::SUMMONEDACTIONFRAMEENTRY>> &l, __POSITION *pos);

protected:
	void UpdateQuestInfo();
	CLASS_RTTI_(CDragon, CLife);

public:
	CDragon &operator=(const CDragon &arg0);

public:
	static CDragon &_op_assign_48(CDragon *pThis, const CDragon &arg0);
};
STATIC_ASSERT_SIZE(CDragon, 320);
