// VecCtrlNpc.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "VecCtrl/VecCtrl.hpp"
#include "Life/Life.hpp"
#include "WvsPhysicalSpace2D/WvsPhysicalSpace2D.hpp"

// Level: 1 0x13808
class CVecCtrlNpc;

class CVecCtrlNpc : public CVecCtrl
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
    int32_t m_bMove{};

protected:
    CVecCtrlNpc::MoveCtx m_moveCtx;

protected:
    long m_tUpdateActiveAccumulated{};
    // Methods
public:
    virtual ~CVecCtrlNpc();

public:
    void _dtor_0();

public:
    CVecCtrlNpc(const CVecCtrlNpc& arg0);

public:
    void _ctor_1(const CVecCtrlNpc& arg0);

public:
    CVecCtrlNpc();

public:
    void _ctor_0();

public:
    void Init(IVecCtrlOwner* pOwner, long nMoveAbility, RANGE* prgHorz);

public:
    virtual void SetActive(int32_t bActive, long x, long y, long vx, long vy, long nMoveAction, CStaticFoothold* pfh);

public:
    void UpdateActiveInterrupted(long rpl, long tSlice);

public:
    static CVecCtrlNpc* __cdecl CreateInstance();

protected:
    virtual long BeginUpdateActive();

protected:
    virtual int32_t WorkUpdateActive(long tElapse);

protected:
    void ClearMoveContext();


public:
    CVecCtrlNpc& operator=(const CVecCtrlNpc& arg0);

public:
    static CVecCtrlNpc& _op_assign_10(CVecCtrlNpc* pThis, const CVecCtrlNpc& arg0);
};

STATIC_ASSERT_SIZE(CVecCtrlNpc, 776);
