// VecCtrlMob.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "VecCtrl/VecCtrl.hpp"
#include "WvsPhysicalSpace2D/WvsPhysicalSpace2D.hpp"
#include "Rand32/Rand32.hpp"
#include "Life/Life.hpp"

// Level: 0 0x5b84
class CMoveRandMan;
// Level: 1 0x13836
class CVecCtrlMob;

class CMoveRandMan
{
    // Nested
    // Fields
private:
    uint16_t m_usRandCnt{};

private:
    CRand32 m_randMove;

private:
    uint32_t m_nLastRnd{};

private:
    int32_t m_bGenerated{};

private:
    int32_t m_bPassed{};
    // Methods
public:
    ~CMoveRandMan();

public:
    void _dtor_0();

public:
    CMoveRandMan();

public:
    void _ctor_1();

public:
    uint32_t GetRndValue(long min, int32_t max);
    uint32_t GetRndValue();

public:
    uint32_t GetLastRnd() const;

public:
    uint32_t GetNoRangeFilteredLastRnd() const;

public:
    int32_t IsGenerated() const;

public:
    int32_t IsPassed() const;

public:
    void SetGenerated();

public:
    void Init();

public:
    void SetSeed(uint32_t s1, uint32_t s2, uint32_t s3);

public:
    void GetSeed(uint32_t& arg0, uint32_t& arg1, uint32_t& arg2);

public:
    uint16_t GetRandCnt() const;
};

STATIC_ASSERT_SIZE(CMoveRandMan, 48);

class CVecCtrlMob : public CVecCtrl
{
    // Nested
public:
    struct MoveContext
    {
        // Nested
    public:
        struct StopContext
        {
            // Nested
            // Fields
        public:
            TSecType<long>& nCount;
            // Methods
        public:
            StopContext(TSecType<long>& arg0);

        public:
            void _ctor_0(TSecType<long>& arg0);
        };

    public:
        struct WalkContext
        {
            // Nested
            // Fields
        public:
            TSecType<long>& lInputX;

        public:
            TSecType<long>& nCount;
            // Methods
        public:
            WalkContext(TSecType<long>& arg0, TSecType<long>& arg1);

        public:
            void _ctor_0(TSecType<long>& arg0, TSecType<long>& arg1);
        };

    public:
        struct JumpContext
        {
            // Nested
            // Fields
        public:
            TSecType<long>& lInputX;

        public:
            TSecType<long>& nCount;

        public:
            TSecType<int>& bWantToJumpUp;

        public:
            TSecType<long>& nYBeforeJump;
            // Methods
        public:
            JumpContext(TSecType<long>& arg0, TSecType<long>& arg1, TSecType<int>& arg2, TSecType<long>& arg3);

        public:
            void _ctor_0(TSecType<long>& arg0, TSecType<long>& arg1, TSecType<int>& arg2, TSecType<long>& arg3);
        };

    public:
        struct FlyContext
        {
            // Nested
            // Fields
        public:
            SECPOINT& ptTarget;

        public:
            TSecType<int>& bTarget;

        public:
            TSecType<long>& nZMass;

        public:
            TSecType<long>& nRemain;
            // Methods
        public:
            FlyContext(SECPOINT& arg0, TSecType<int>& arg1, TSecType<long>& arg2, TSecType<long>& arg3);

        public:
            void _ctor_0(SECPOINT& arg0, TSecType<int>& arg1, TSecType<long>& arg2, TSecType<long>& arg3);
        };

        // Fields
    public:
        TSecType<long> a;

    public:
        TSecType<long> b;

    public:
        TSecType<long> c;

    public:
        TSecType<int> d;

    public:
        SECPOINT e;

    public:
        CVecCtrlMob::MoveContext::StopContext sc;

    public:
        CVecCtrlMob::MoveContext::WalkContext wc;

    public:
        CVecCtrlMob::MoveContext::JumpContext jc;

    public:
        CVecCtrlMob::MoveContext::FlyContext fc;
        // Methods
    public:
        ~MoveContext();

    public:
        void _dtor_0();

    public:
        MoveContext(const CVecCtrlMob::MoveContext& arg0);

    public:
        void _ctor_1(const CVecCtrlMob::MoveContext& arg0);
        CTOR_DEFAULT(MoveContext);

    public:
        MoveContext();

    public:
        void _ctor_0();

    public:
        void ClearMoveContext();
    };

public:
    struct EscortDest
    {
        // Nested
    public:
        enum DESTATTR_
        {
            DESTATTR_GENERAL = 0,
            DESTATTR_LADDERORROPE = 1,
            DESTATTR_STOP = 2
        };

        // Fields
    public:
        tagPOINT dp{};

    public:
        long nAttr{};

    public:
        long ZMass{};

    public:
        long nStopDuration{};
        // Methods
    public:
        EscortDest();

    public:
        void _ctor_0();
    };

    // Fields
protected:
    long m_nMoveAbility{};

protected:
    long m_nHomeMass{};

protected:
    IVecCtrlOwner* m_pTarget{};

protected:
    TSecType<int> m_bForcedChase;

protected:
    TSecType<long> m_tChaseDuration;

protected:
    long m_tUpdateActiveAccumulated{};

protected:
    CMoveRandMan m_moveRndMan;

protected:
    long m_nCheckTarget{};

protected:
    CMoveRandMan m_moveRndMan_Mass;

protected:
    CMoveRandMan m_moveRndMan_Direction;

protected:
    int32_t m_bNeedForCheckFlyTarget_A{};

protected:
    int32_t m_bNeedForCheckFlyTargetInternal_A{};

protected:
    CMoveRandMan m_moveRndManForPOS_X_A;

protected:
    CMoveRandMan m_moveRndManForPOS_Y_A;

protected:
    TSecType<long> m_nCheckTargetBeforeX_A;

protected:
    TSecType<long> m_nCheckTargetBeforeY_A;

protected:
    TSecType<long> m_nCheckTargetAfterX_A;

protected:
    TSecType<long> m_nCheckTargetAfterY_A;

protected:
    CMoveRandMan m_moveRndManForFH;

protected:
    CMoveRandMan m_moveRndManForPOS;

protected:
    CMoveRandMan m_moveRndManForTargetY;

protected:
    unsigned long m_nCheckfhSN{};

protected:
    long m_nCheckfhPOS{};

protected:
    TSecType<long> m_nCheckTargetX;

protected:
    TSecType<long> m_nCheckTargetY;

protected:
    int32_t m_bNeedForCheckFlyTarget_B{};

protected:
    int32_t m_bNeedForCheckFlyTargetInternal_B{};

protected:
    SECPOINT m_ptBeforeCollision;

protected:
    AbsPos m_apBeforeCollision;

protected:
    SECPOINT m_ptAfterCollision;

protected:
    TSecType<int> m_bSimpleCollisionHacked;

protected:
    TSecType<long> m_nComputeX;

protected:
    TSecType<long> m_nComputeY;

protected:
    TSecType<int> m_bABHackCheckNeed;

protected:
    TSecType<int> m_bFloatHackCheckNeed;

protected:
    TSecType<int> m_bDoubleGuardCorrect;

protected:
    TSecType<long> m_nHackedCode;

protected:
    TSecType<long> m_nGuardTargetX;

protected:
    TSecType<long> m_nGuardTargetY;

protected:
    TSecType<long> m_nGuardCurX;

protected:
    TSecType<long> m_nGuardCurY;

protected:
    TSecType<long> m_nInputResultX;

protected:
    TSecType<long> m_nInputResultY;

protected:
    TSecType<int> m_bJumped;

protected:
    int32_t m_bGuardAreaIn{};

protected:
    int32_t m_bGuardAreaPassed{};

protected:
    int32_t m_bGuardResultCleanState{};

protected:
    int32_t m_bRespectUpdateCtrl{};

protected:
    int32_t m_bPassedUpdateCtrl{};

protected:
    int32_t m_bPassedInspectUpdate{};

protected:
    TSecType<long> m_nInputCheckX;

protected:
    TSecType<long> m_nInputCheckY;

protected:
    int32_t m_bNeedCheckTarget{};

protected:
    TSecType<long> m_nGuardAfterX;

protected:
    TSecType<long> m_nGuardAfterY;

protected:
    int32_t m_bGuardAfterPassed{};

protected:
    TSecType<double> m_dGuardCurX;

protected:
    TSecType<double> m_dGuardCurY;

protected:
    TSecType<long> m_nStoreInputX;

protected:
    CVecCtrlMob::MoveContext m_moveCtx;

public:
    TSecType<unsigned long> m_dwHackedCodeCRC;

public:
    TSecType<int> m_bChasing;

public:
    TSecType<int> m_bChasingHack;

protected:
    int32_t m_bMoveMobOnLadderOrRopeX{};

protected:
    tagPOINT m_ptLastPoint{};

protected:
    int32_t m_bRightAngleJump{};

protected:
    long m_nStopDuration{};

protected:
    int32_t m_bEscortStop{};

protected:
    tagPOINT m_ptStartTargetPosition{};

protected:
    long m_nStartTargetPositionZmass{};

protected:
    int32_t m_bNeedReturnToStartTarget{};

protected:
    int32_t m_bOnRushMove{};

protected:
    long m_nRushMoveDistance{};

protected:
    long m_tRushMoveDuration{};

public:
    ZArray<CVecCtrlMob::EscortDest> m_aEscorDest;

public:
    CVecCtrlMob::EscortDest m_Old_Dest;

public:
    long m_nCurrentDestIndex{};

public:
    long m_nCurrentDestIndexForce{};

public:
    int32_t m_bMoveMobBeforeEscortCurDest{};
    // Methods
public:
    virtual ~CVecCtrlMob();

public:
    void _dtor_0();

public:
    CVecCtrlMob(const CVecCtrlMob& arg0);

public:
    void _ctor_1(const CVecCtrlMob& arg0);

public:
    CVecCtrlMob();

public:
    void _ctor_0();

public:
    void Init(IVecCtrlOwner* pOwner, long nMoveAbility, long nHomeMass);

public:
    virtual void SetActive(int32_t bActive, long x, long y, long vx, long vy, long nMoveAction, CStaticFoothold* pfh);

public:
    void SetMoveAbility(long arg0);

public:
    void UpdateActiveInterrupted(long nXDiff, long bOnce, long fDrag, long pAttrShoe, long tSlice, long rpl,
                                 long dPosDiff, long apl);

public:
    void ChaseTarget(int32_t bChase, IVecCtrlOwner* pTarget, int32_t bForced);

public:
    void ChaseTargetImp(int32_t bChase, IVecCtrlOwner* pTarget, int32_t bForced);

public:
    int32_t IsChasing();

public:
    int32_t IsForcedChase();

public:
    IVecCtrlOwner* GetChaseTarget();

public:
    long GetMoveAbility();

public:
    int32_t IsCheatMobMoveRand();

public:
    int32_t IsCheatMobMoveRandImp();

public:
    TSecType<long> GetHackedCode();

public:
    long GetTargetX();

public:
    long GetTargetY();

public:
    void RiseByToss(double vy);

public:
    void ClearTemporaryValues();

public:
    long GetChaseDuration();

public:
    virtual void SaveFloatStateBeforeCollision();

public:
    virtual void SaveFloatStateAfterCollision();

public:
    virtual int32_t CollisionDetectWalk(const RelPos& d, long& r, int32_t rgC);

public:
    virtual int32_t CollisionDetectFloat(const AbsPos& r, long& rgL, int32_t l);

public:
    static CVecCtrlMob*__cdecl CreateInstance();

public:
    void SetStatChangedPoint(unsigned char arg0);

public:
    void SetMoveRandManSeed(uint32_t s1, uint32_t s2, uint32_t s3);

protected:
    virtual long BeginUpdateActive();

protected:
    virtual int32_t WorkUpdateActive(long arg0);

protected:
    virtual void InspectUpdateActive();

protected:
    void FlyCtrlGuardingBefore();

protected:
    void FlyCtrlGuardingAfter();

protected:
    void CtrlUpdateActiveStop();

protected:
    void CtrlUpdateActiveMove();

protected:
    void CtrlUpdateActiveJump();

protected:
    void CtrlUpdateActiveFly();

protected:
    void CtrlUpdateActiveEscort();

protected:
    void DelayedGiveUpChasing();

protected:
    void ClearMoveContext();

protected:
    void SetJumpNext(int32_t bWantToJumpUp);

protected:
    void WorkUpdateActiveLadderOrRope();

protected:
    int32_t IsAbleToClimbLadderOrRope();

protected:
    void MoveMobOnLadderOrRopeX();

protected:
    void MoveMobOnRightAngleX();

protected:
    void CollisionDetectEscortDest();

protected:
    void CollisionDetectEscortBeforeTargetPosition();

public:
    void SetRushAttack(double v, long nDistance, long tAttackActionRemain);

protected:
    void MoveMobBeforeEscortCurDest();

public:
    void SetEscortMobAttr();

public:
    void ClearEscortInfo();

public:
    void SetEcortStop(long arg0, int32_t arg1);

public:
    int32_t IsEscortStop();

public:
    int32_t IsEscortJumpForLadder();
};

STATIC_ASSERT_SIZE(CVecCtrlMob, 1960);


double __cdecl ReturnDecSpeed(double v, double f, double m, double vMax, double tSec);
