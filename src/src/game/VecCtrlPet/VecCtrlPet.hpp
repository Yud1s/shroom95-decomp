// VecCtrlPet.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Life/Life.hpp"
#include "WvsPhysicalSpace2D/WvsPhysicalSpace2D.hpp"
#include "VecCtrl/VecCtrl.hpp"

// Level: 1 0x137ed
class CVecCtrlPet;

class CVecCtrlPet : public CVecCtrl
{
	// Nested
public:
	struct MoveCtx
	{
		// Nested
		// Fields
	public:
		long lInputX{};

	public:
		long nCount{};
		// Methods
	};
	// Fields
protected:
	long m_nMoveAbility{};

protected:
	long m_tDelayBeforeJump{};

protected:
	long m_nTargetOldX{};

protected:
	long m_tTargetStopTime{};

protected:
	long m_nPetOldX{};

protected:
	long m_nNearDropDirection{};

protected:
	long m_nPositionContext{};

protected:
	long m_tDoubleSpeedTime{};

protected:
	long m_nOffsetDiff{};

protected:
	CVecCtrlPet::MoveCtx m_moveCtx;
	// Methods
public:
	virtual ~CVecCtrlPet();

public:
	void _dtor_0();

public:
	CVecCtrlPet(const CVecCtrlPet &arg0);

public:
	void _ctor_1( const CVecCtrlPet &arg0);

public:
	CVecCtrlPet();

public:
	void _ctor_0();

public:
	void Init(IVecCtrlOwner *pOwner, long nMoveAbility);

public:
	virtual void SetActive(int32_t bActive, long x, long y, long vx, long vy, long nMoveAction, CStaticFoothold *pfh);

public:
	virtual int32_t CollisionDetectWalk(const RelPos &p1, long &tElapse, int32_t bOffsetSkip);

public:
	void SetPositionContext(long nPositionContext);

public:
	void SetNearDropDirection(long nPositionContext);

public:
	static CVecCtrlPet *__cdecl CreateInstance();

protected:
	void ClearMoveContext();

protected:
	virtual int32_t WorkUpdateActive(long pPet);

protected:
	virtual void EndUpdateActive();

protected:
	void WorkUpdateActiveLadderOrRope();

public:
	CVecCtrlPet &operator=(const CVecCtrlPet &arg0);

public:
	static CVecCtrlPet &_op_assign_13(CVecCtrlPet *pThis, const CVecCtrlPet &arg0);
};
STATIC_ASSERT_SIZE(CVecCtrlPet, 808);
