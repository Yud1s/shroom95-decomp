// VecCtrlDragon.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "VecCtrl/VecCtrl.hpp"
#include "Life/Life.hpp"

// Level: 1 0x138c0
class CVecCtrlDragon;

class CVecCtrlDragon : public CVecCtrl
{
    // Nested
    // Fields
protected:
    IVecCtrlOwner* m_pTarget{};

protected:
    unsigned long m_dwCharacterID{};

protected:
    long m_nFollowingState{};

protected:
    long m_nCheckCount{};

protected:
    long m_nDistanceX_for_Walk{};
    // Methods
public:
    virtual ~CVecCtrlDragon();

public:
    void _dtor_0();

public:
    CVecCtrlDragon(const CVecCtrlDragon& arg0);

public:
    void _ctor_1(const CVecCtrlDragon& arg0);

public:
    CVecCtrlDragon();

public:
    void _ctor_0();

public:
    void Init(IVecCtrlOwner* pUser, unsigned long dwCharacterID);

public:
    void ChaseTarget(int32_t bChase, IVecCtrlOwner* pTarget);

public:
    static CVecCtrlDragon* __cdecl CreateInstance();

protected:
    virtual int32_t WorkUpdateActive(long rcOut);

protected:
    virtual void EndUpdateActive();

protected:
    virtual int WorkUpdatePassive(long tElapse);

public:
    CVecCtrlDragon& operator=(const CVecCtrlDragon& arg0);

public:
    static CVecCtrlDragon& _op_assign_9(CVecCtrlDragon* pThis, const CVecCtrlDragon& arg0);
};

STATIC_ASSERT_SIZE(CVecCtrlDragon, 784);
