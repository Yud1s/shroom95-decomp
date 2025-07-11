// VecCtrlSummoned.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "VecCtrl/VecCtrl.hpp"
#include "Life/Life.hpp"
#include "WvsPhysicalSpace2D/WvsPhysicalSpace2D.hpp"

// Level: 1 0x137c8
class CVecCtrlSummoned;

struct MoveCtxInput
{ /* Size=0x8 */
	/* 0x0000 */ public:
	int32_t nCount{};
	/* 0x0004 */ public:
	int32_t lInputX{};
};

struct MoveCtxPoint
{ /* Size=0x14 */
	/* 0x0000 */ public:
	tagPOINT ptTarget{};
	/* 0x0008 */ public:
	int32_t bTarget{};
	/* 0x000c */ public:
	int32_t nZMass{};
	/* 0x0010 */ public:
	int32_t nRemain{};
};

union MoveCtx
{ /* Size=0x14 */
	/* 0x0000 */ public:
	MoveCtxInput fc;
	/* 0x0000 */ public:
	MoveCtxPoint wc{};
};

class CVecCtrlSummoned : public CVecCtrl
{
	// Nested
	// Fields
protected:
	tagRECT m_rcOut{};

protected:
	unsigned long m_dwSummonedID{};

protected:
	long m_nSkillID{};

protected:
	long m_tUpdateActiveAccumulated{};

protected:
	IVecCtrlOwner *m_pTarget;

protected:
	long m_nMoveAbility{};

protected:
	long m_nFollowingState{};

protected:
	long m_nCheckCount{};

protected:
	long m_nDistanceX_for_Walk{};

protected:
	MoveCtx m_moveCtx{};

protected:
	tagPOINT m_ptReference{};
	// Methods
public:
	virtual ~CVecCtrlSummoned();

public:
	void _dtor_0();

public:
	CVecCtrlSummoned(const CVecCtrlSummoned &arg0);

public:
	void _ctor_1(const CVecCtrlSummoned &arg0);

public:
	CVecCtrlSummoned();

public:
	void _ctor_0();

public:
	void Init(IVecCtrlOwner *pOwner, unsigned long dwSummonedID, long nSkillID, long nMoveAbility);

public:
	virtual void SetActive(int32_t bActive, long x, long y, long vx, long vy, long nMoveAction, CStaticFoothold *pfh);

public:
	virtual int32_t CollisionDetectFloat(const AbsPos &p1, long &tElapse, int32_t bCalcFloat);

public:
	virtual int32_t CollisionDetectWalk(const RelPos &d, long &arg1, int32_t arg2);

public:
	static CVecCtrlSummoned *__cdecl CreateInstance();

public:
	void ChaseTarget(int32_t bChase, IVecCtrlOwner *pTarget);

public:
	IVecCtrlOwner *GetChaseTarget();

public:
	void SetRectOut(long arg0, long arg1, long arg2, long arg3);

protected:
	virtual int32_t WorkUpdateActive(long pTarget);

protected:
	virtual void EndUpdateActive();

protected:
	void CtrlUpdateActiveFly();

protected:
	void CtrlUpdateActiveWalkFree();

protected:
	void ClearMoveContext();

public:
	CVecCtrlSummoned &operator=(const CVecCtrlSummoned &arg0);

public:
	static CVecCtrlSummoned &_op_assign_16(CVecCtrlSummoned *pThis, const CVecCtrlSummoned &arg0);
};
STATIC_ASSERT_SIZE(CVecCtrlSummoned, 840);
