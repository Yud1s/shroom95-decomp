// VecCtrl.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

/*#include "Life/Life.hpp"
#include "MovePath/MovePath.hpp"
#include "WvsPhysicalSpace2D/WvsPhysicalSpace2D.hpp"*/

#include "MovePath/MovePath.hpp"
#include "WvsPhysicalSpace2D/WvsPhysicalSpace2D.hpp"

struct IVecCtrlOwner;

class CAttrShoe : public ZRefCounted
{
    // Nested
    // Fields
public:
    TSecType<double> mass;

public:
    TSecType<double> walkAcc;

public:
    TSecType<double> walkSpeed;

public:
    TSecType<double> walkDrag;

public:
    TSecType<double> walkSlant;

public:
    TSecType<double> walkJump;

public:
    TSecType<double> swimAcc;

public:
    TSecType<double> swimSpeedH;

public:
    TSecType<double> swimSpeedV;

public:
    TSecType<double> flyAcc;

public:
    TSecType<double> flySpeed;
    // Methods
public:
    virtual ~CAttrShoe();

public:
    void _dtor_0();

public:
    CAttrShoe(const CAttrShoe& arg0);

public:
    void _ctor_1(const CAttrShoe& arg0);

public:
    CAttrShoe(int32_t arg0);

public:
    void _ctor_0(int32_t arg0);

public:
    ZRef<CAttrShoe> CreateAlertAttribute();

public:
    CAttrShoe& operator=(CAttrShoe& arg0);

public:
    static CAttrShoe& _op_assign_4(CAttrShoe* pThis, CAttrShoe& arg0);
};

STATIC_ASSERT_SIZE(CAttrShoe, 144);

// Level: 0 0x5b6d
struct RelPos;
// Level: 0 0x5b76
struct AbsPos;
// Level: 1 0x5b42
class CVecCtrl;

struct RelPos
{
    // Nested
    // Fields
public:
    std::array<double, 2> _ZtlSecureTear_pos{};

public:
    uint32_t _ZtlSecureTear_pos_CS{};

public:
    std::array<double, 2> _ZtlSecureTear_v{};

public:
    uint32_t _ZtlSecureTear_v_CS{};
    // Methods
public:
    RelPos();

public:
    void _ctor_0();

public:
    double __fastcall _ZtlSecureGet_pos() const;

public:
    double __fastcall _ZtlSecurePut_pos(double t);

public:
    double __fastcall _ZtlSecureGet_v() const;

public:
    double __fastcall _ZtlSecurePut_v(double t);

public:
    void SetFromAbsPos(AbsPos& arg0, CStaticFoothold* arg1);
};

STATIC_ASSERT_SIZE(RelPos, 48);

struct AbsPos
{
    AbsPos();
    // Nested
    // Fields
public:
    std::array<double, 2> _ZtlSecureTear_x{};

public:
    uint32_t _ZtlSecureTear_x_CS{};

public:
    std::array<double, 2> _ZtlSecureTear_y{};

public:
    uint32_t _ZtlSecureTear_y_CS{};

public:
    std::array<double, 2> _ZtlSecureTear_vx{};

public:
    uint32_t _ZtlSecureTear_vx_CS{};

public:
    std::array<double, 2> _ZtlSecureTear_vy{};

public:
    uint32_t _ZtlSecureTear_vy_CS{};
    // Methods
public:
    double __fastcall _ZtlSecureGet_x() const;

public:
    double __fastcall _ZtlSecurePut_x(double t);

public:
    double __fastcall _ZtlSecureGet_y() const;

public:
    double __fastcall _ZtlSecurePut_y(double t);

public:
    double __fastcall _ZtlSecureGet_vx() const;

public:
    double __fastcall _ZtlSecurePut_vx(double t);

public:
    double __fastcall _ZtlSecureGet_vy() const;

public:
    double __fastcall _ZtlSecurePut_vy(double t);

public:
    void SetFromRelPos(RelPos& rp, CStaticFoothold* pfh);
};

STATIC_ASSERT_SIZE(AbsPos, 96);

struct FallDownNext
{
public:
    int32_t bValid{};

public:
    CStaticFoothold* pfhFallStart{};
};

STATIC_ASSERT_SIZE(FallDownNext, 8);

class CVecCtrl : public ZRefCounted, public IWzVector2D
{
public:
    struct IMPACTNEXT
    {
        // Nested
        // Fields
    public:
        int32_t bValid{};

    public:
        double vx{};

    public:
        double vy{};
        // Methods
    public:
        IMPACTNEXT();

    public:
        void _ctor_0();
    };

    // Fields
protected:
    long m_cRef{};

protected:
    IVecCtrlOwner* m_pOwner{};

protected:
    int32_t m_bActive{};

protected:
    _x_com_ptr<IWzVector2D> m_pVecAlternate;

protected:
    AbsPos m_ap;

protected:
    AbsPos m_apl;

protected:
    AbsPos m_apOffset;

protected:
    RelPos m_rp;

protected:
    RelPos m_rpLast;

protected:
    CStaticFoothold* m_pfh{};

protected:
    CStaticFoothold* m_pfhLast{};

protected:
    CStaticFoothold* m_pfhFallStart{};

protected:
    ZRef<CStaticFoothold> m_pfhLandingNext;

protected:
    std::array<CLadderOrRope*, 2> _ZtlSecureTear_m_pLadderOrRope{};

protected:
    uint32_t _ZtlSecureTear_m_pLadderOrRope_CS{};

protected:
    long m_lPage{};

protected:
    long m_lZMass{};

protected:
    tagRECT m_rcBound{};

protected:
    long m_nMoveAction{};

protected:
    int32_t m_bAttachedObjectChanged{};

protected:
    int32_t m_bBeginUpdateActivePassed{};

protected:
    int32_t m_bSetLayerZNext{};

protected:
    std::array<long, 2> _ZtlSecureTear_m_nInputX{};

protected:
    uint32_t _ZtlSecureTear_m_nInputX_CS{};

protected:
    std::array<long, 2> _ZtlSecureTear_m_nInputY{};

protected:
    uint32_t _ZtlSecureTear_m_nInputY_CS{};

protected:
    int32_t m_bJumpNext{};

protected:
    int32_t m_bTryJumpedInFly{};
    // TODO union
protected:
    FallDownNext m_falldownNext;

protected:
    int32_t m_bWingsNext{};

protected:
    int32_t m_bWingsNow{};

protected:
    int32_t m_bWingsPrev{};

protected:
    long m_nWingsParam{};

protected:
    CVecCtrl::IMPACTNEXT m_impactNext;

protected:
    const CAttrField* m_pAttrField{};

protected:
    ZRef<CAttrShoe> m_pCurAttrShoe;

protected:
    CMovePath m_path;

protected:
    long m_nSlideCount{};

protected:
    double m_dShortDrag{};

protected:
    int32_t m_bEscortMob{};
    // Methods
public:
    virtual ~CVecCtrl();

public:
    void _dtor_0();

public:
    CVecCtrl(const CVecCtrl& arg0);

public:
    void _ctor_1(const CVecCtrl& arg0);

    // CTOR_DEFAULT(CVecCtrl)
    void _ctor_default()
    {
        // TODO howto with abstract
    }

public:
    CVecCtrl();

public:
    void _ctor_0();

public:
    void Init(IVecCtrlOwner* pOwner);

public:
    virtual void SetActive(int32_t arg0, long arg1, long arg2, long arg3, long arg4, long arg5, CStaticFoothold* arg6);

public:
    int32_t IsActive() const;

public:
    int32_t IsUser();

public:
    int32_t IsMob();

public:
    int32_t IsNpc();

public:
    int32_t IsPet();

public:
    int32_t IsSummoned();

public:
    int32_t IsGrenade();

public:
    int32_t IsDragon();

public:
    int32_t IsOnFoothold() const;

public:
    int32_t IsOnLadder() const;

public:
    int32_t IsOnRope() const;

public:
    int32_t IsStopped() const;

public:
    int32_t IsFalling() const;

public:
    int32_t IsDoingWings();

public:
    int32_t IsLandingWings();

private:
    int32_t _IsSwimmingMap() const;

protected:
    int32_t _IsUserFlyMap() const;

protected:
    int32_t _IsNeedSkillForFly();

public:
    virtual int32_t IsUserFlying() const ;

public:
    int32_t IsSwimming() const;

public:
    int32_t IsFreeFalling();

public:
    int32_t IsFloating();

public:
    long GetPage() const;

public:
    long GetZMass() const;

public:
    CStaticFoothold* GetFoothold() const;

public:
    const CLadderOrRope* GetLadderOrRope() const;

public:
    const AbsPos& GetAbsPos() const;

public:
    long GetMoveAction() const;

public:
    void SetMoveAction(long moveAction);

public:
    void ResolveMoveAction();

public:
    void SetAlternateVector2D(_x_com_ptr<IWzVector2D> vec);

public:
    _x_com_ptr<IWzVector2D> GetAlternateVector2D();

public:
    void UpdateActive();

public:
    void CalcWalk(long vMax);

public:
    void CalcFloat(long drag2);

public:
    virtual int32_t CollisionDetectWalk(const RelPos& tCollide, long& t, int32_t pfhLink);

public:
    virtual int32_t CollisionDetectFloat(const AbsPos& p1, long& tElapse, int32_t bCalcFloat);

public:
    void GetInput(long& nInputX, long& nInputY) const;

public:
    void SetInput(long nInputX, long nInputY);

public:
    void SetJumpNext();

public:
    void SetFallDownNext(CStaticFoothold* arg0);

public:
    void SetWingsNext();

public:
    void SetWingsStop();

public:
    void SetImpactNext(double vx, double vy);

    void SetImpactNext_0(double vx, double vy)
    {
        SetImpactNext(vx, vy);
    }

public:
    void SetImpactNext(long nAttr, double vx, double vy);

    void SetImpactNext_1(long nAttr, double vx, double vy)
    {
        SetImpactNext(nAttr, vx, vy);
    }

public:
    void SetMovePathAttribute(long arg0);

public:
    void SetWingsParam(long arg0);

public:
    void DetachFromFoothold();

public:
    int UpdatePassive(const long* pFixedX, const long* pFixedY);

public:
    CMovePath& GetMovePath();

public:
    static CVecCtrl*__cdecl CreateInstance();

public:
    CWvsPhysicalSpace2D* GetPhysicalSpace2D() const;

protected:
    virtual void OnAttachedObjectChanged(CStaticFoothold* pfhNew, CLadderOrRope* pLadderOrRopeNew, long tElapse);

protected:
    void SetAttachedObjectChanged(int32_t attachedObj);

protected:
    int32_t IsAttachedObjectChanged() const;

protected:
    long GetMPA() const;

protected:
    virtual void MakeContinuousMovePath(long tElapse);

protected:
    void MakeNewMovePathElem();

protected:
    virtual void SaveFloatStateBeforeCollision();

protected:
    virtual void SaveFloatStateAfterCollision();

protected:
    long BoundPosMapRange(const RelPos& d0, long tElapse);

    long BoundPosMapRange_1(const RelPos& d0, long tElapseMax)
    {
        return BoundPosMapRange(d0, tElapseMax);
    }

protected:
    long BoundPosMapRange(const AbsPos& dx0, long dy0);

    long BoundPosMapRange_0(const AbsPos& dx0, long dy0)
    {
        return BoundPosMapRange(dx0, dy0);
    }

protected:
    CLadderOrRope*__fastcall _ZtlSecureGet_m_pLadderOrRope() const;

protected:
    CLadderOrRope*__fastcall _ZtlSecurePut_m_pLadderOrRope(CLadderOrRope* arg0);

protected:
    long __fastcall _ZtlSecureGet_m_nInputX() const;

protected:
    long __fastcall _ZtlSecurePut_m_nInputX(long arg0);

protected:
    long __fastcall _ZtlSecureGet_m_nInputY() const;

protected:
    long __fastcall _ZtlSecurePut_m_nInputY(long arg0);

protected:
    virtual long BeginUpdateActive();

protected:
    virtual int32_t WorkUpdateActive(long rpl);

protected:
    virtual void EndUpdateActive();

protected:
    virtual int32_t BeginUpdatePassive();

protected:
    virtual int WorkUpdatePassive(long tElapse, const long* pFixedX, const long* pFixedY);

protected:
    virtual void InspectUpdateActive();

public:
    void SetSlide(long arg0, double arg1);

private:
    int32_t JustJump();

protected:
    void Jump();

protected:
    void Wings();

protected:
    void FallDown();

protected:
    void Impact();

public:
    virtual HRESULT __stdcall QueryInterface(const _GUID& riid, void** ppv) override;

public:
    virtual unsigned long __stdcall AddRef() override;

public:
    virtual unsigned long __stdcall Release() override;

public:
    virtual HRESULT __stdcall get_value(tagVARIANT vKey, tagVARIANT* pvValue);

public:
    virtual HRESULT __stdcall put_value(tagVARIANT vKey, tagVARIANT vVal);

public:
    virtual HRESULT __stdcall get_persistentUOL(wchar_t** pVal) override;

public:
    virtual HRESULT __stdcall raw_Serialize(IWzArchive* pArchive) override;

public:
    virtual HRESULT __stdcall get_item(tagVARIANT vIndex, tagVARIANT* pvValue) override;

public:
    virtual HRESULT __stdcall get__NewEnum(IUnknown** pVal) override;

public:
    virtual HRESULT __stdcall get_count(unsigned int* pVal) override;

public:
    virtual HRESULT __stdcall get_x(int*) override;
    //STDMETHODIMP HRESULT get_x(long* pVal) override;

public:
    virtual HRESULT __stdcall get_y(int* pVal) override;

public:
    virtual HRESULT __stdcall get_x2(int* pVal) override;

public:
    virtual HRESULT __stdcall get_y2(int* pVal) override;

public:
    virtual HRESULT __stdcall put_x(int newVal) override;

public:
    virtual HRESULT __stdcall put_y(int newVal) override;

public:
    virtual HRESULT __stdcall put_x2(int newVal) override;

public:
    virtual HRESULT __stdcall put_y2(int newVal) override;

public:
    virtual HRESULT __stdcall raw_Move(int arg0, int arg1) override;

public:
    virtual HRESULT __stdcall raw_Offset(int nDX, int nDY) override;

public:
    virtual HRESULT __stdcall raw_Scale(int nXMul, int nXDiv, int nYMul, int nYDiv, int nXOrg, int nYOrg) override;

public:
    virtual HRESULT __stdcall raw_Insert(tagVARIANT vIndexOrShape, tagVARIANT vShape) override;

public:
    virtual HRESULT __stdcall raw_Remove(tagVARIANT vIndex, tagVARIANT* pvRemoved) override;

public:
    virtual HRESULT __stdcall raw_Init(int nX, int nY) override;

public:
    virtual HRESULT __stdcall get_currentTime(int* pnTime) override;

public:
    virtual HRESULT __stdcall put_currentTime(int nTime) override;

public:
    virtual HRESULT __stdcall get_origin(tagVARIANT* ppOrigin) override;

public:
    virtual HRESULT __stdcall put_origin(tagVARIANT pOrigin) override;

public:
    virtual HRESULT __stdcall get_rx(int* pnX) override;

public:
    virtual HRESULT __stdcall get_ry(int* pnY) override;

public:
    virtual HRESULT __stdcall put_rx(int nX) override;

public:
    virtual HRESULT __stdcall put_ry(int nY) override;

public:
    virtual HRESULT __stdcall get_a(double* pa);

public:
    virtual HRESULT __stdcall get_ra(double* pra) override;

public:
    virtual HRESULT __stdcall put_ra(double ra) override;

public:
    virtual HRESULT __stdcall get_flipX(int* pnFlipX) override;

public:
    virtual HRESULT __stdcall put_flipX(int nFlipX) override;

public:
    virtual HRESULT __stdcall raw__GetSnapshot(int* t, int* arg1, int* arg2, int* arg3, int* arg4, int* arg5,
                                               double* arg6, double* arg7, tagVARIANT arg8) override;

public:
    virtual HRESULT __stdcall raw_RelMove(int nX, int nY, tagVARIANT nTime, tagVARIANT nType) override;

public:
    virtual HRESULT __stdcall raw_RelOffset(int nDX, int nDY, tagVARIANT vTime, tagVARIANT nType) override;

public:
    virtual HRESULT __stdcall raw_Ratio(IWzVector2D* pOrigin, int nOriginWidth, int nOriginHeight, int nScaleWidth,
                                        int nScaleHeight) override;

public:
    virtual HRESULT __stdcall raw_WrapClip(tagVARIANT pOrigin, int nWrapLeft, int nWrapTop, unsigned int uWrapWidth,
                                           unsigned int uWrapHeight, tagVARIANT bClip) override;

public:
    virtual HRESULT __stdcall raw_Rotate(double aAmount, tagVARIANT nTime) override;

public:
    virtual HRESULT __stdcall get_looseLevel(unsigned int* puLevel) override;

public:
    virtual HRESULT __stdcall put_looseLevel(unsigned int uLevel) override;

public:
    virtual HRESULT __stdcall raw_Fly(tagVARIANT* aVar, int nArgs) override;

public:
    CVecCtrl& operator=(const CVecCtrl& arg0);

public:
    static CVecCtrl& _op_assign_131(CVecCtrl* pThis, const CVecCtrl& arg0);
};

STATIC_ASSERT_SIZE(CVecCtrl, 760);

double __cdecl max_walk_speed(CStaticFoothold* pfh, const CAttrShoe* pas, long dir);
double __cdecl return_bound_range_double_(double t, double tMin, double tMax);
int32_t __cdecl is_blocked_area(CStaticFoothold* pfh1, CStaticFoothold* pfh2, long x, long y);
uint32_t __fastcall _ZtlSecureTear_CLadderOrRope__(CLadderOrRope* arg0, CLadderOrRope** arg1);
void __cdecl AccSpeed(double& v, double f, double m, double vMax, double tSec);
long __cdecl get_cross_product(long xOrg, long yOrg, long x1, long y1, long x2, long y2);
