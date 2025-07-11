// VecCtrlUser.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "WvsPhysicalSpace2D/WvsPhysicalSpace2D.hpp"
#include "VecCtrl/VecCtrl.hpp"

// Level: 1 0xa529
class CVecCtrlUser;

class CVecCtrlUser : public CVecCtrl
{
    // Nested
public:
    struct MOVEMENTINFO
    {
        // Nested
        // Fields
    public:
        long tSecondaryStatChanged{};

    public:
        short nSpeed{};

    public:
        short nJump{};

    public:
        unsigned char bSpec{};

    public:
        double fs{};

    public:
        double fSwim{};

    public:
        unsigned char bSN{};

    public:
        int32_t bRidingSkillVehicle{};

    public:
        int32_t bRidingEventVehicle{};

    public:
        int32_t bRidingWildhunterJaguarVehicle{};

    public:
        int32_t bRidingMechanicVehicle{};

    public:
        int32_t bFlying{};
        // Methods
    };

    // Fields
private:
    int32_t m_bUserFlyingSkill{};

protected:
    long m_nMaxFreeFallTickCount{};

protected:
    int32_t m_bForceFlush{};

protected:
    long m_tSentDebugRegister{};
    // Methods
public:
    virtual ~CVecCtrlUser();

public:
    void _dtor_0();

public:
    CVecCtrlUser(const CVecCtrlUser& arg0);

public:
    void _ctor_1(const CVecCtrlUser& arg0);

public:
    CVecCtrlUser();

public:
    void _ctor_0();

public:
    static CVecCtrlUser* __cdecl CreateInstance();

public:
    void SetForcedFlush();

public:
    void OnSit(long x, long y);

public:
    void SetSecondaryStatChangedPoint(unsigned char arg0);

public:
    int32_t GetImpactValidity();

public:
    void DoCombatStep(double vx, double vy);

public:
    virtual int32_t CollisionDetectFloat(const AbsPos& p1, long& tElapse, int32_t bCalcFloat);

public:
    void SetFlyingSkill();

public:
    void ResetFlyingSkill();

public:
    int32_t IsFlyingSkill() const;

public:
    int32_t IsFlyingSkillState();

public:
    virtual int32_t IsUserFlying();

public:
    int32_t IsPermitMapFlyingSkill() const;

protected:
    virtual long BeginUpdateActive();

protected:
    virtual int32_t WorkUpdateActive(long tElapse);

protected:
    void WorkUpdateActiveLadderOrRope();

protected:
    int32_t IsAbleToClimbLadderOrRope();

protected:
    virtual void EndUpdateActive();

protected:
    virtual void OnAttachedObjectChanged(CStaticFoothold* pfhNew, CLadderOrRope* pLadderOrRopeNew, long tElapse);

protected:
    virtual void MakeContinuousMovePath(long tElapse);

protected:
    virtual void MakeNewMovePathElem();

public:
    CVecCtrlUser& operator=(const CVecCtrlUser& arg0);

public:
    static CVecCtrlUser& _op_assign_24(CVecCtrlUser* pThis, const CVecCtrlUser& arg0);
};

STATIC_ASSERT_SIZE(CVecCtrlUser, 776);
