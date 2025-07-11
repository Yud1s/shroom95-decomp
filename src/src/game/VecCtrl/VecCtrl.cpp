// VecCtrl.cpp
#include "VecCtrl.hpp"

#include <DropPool/DropPool.hpp>
#include <VecCtrlDragon/VecCtrlDragon.hpp>
#include <VecCtrlGrenade/VecCtrlGrenade.hpp>
#include <VecCtrlMob/VecCtrlMob.hpp>
#include <VecCtrlNpc/VecCtrlNpc.hpp>
#include <VecCtrlPet/VecCtrlPet.hpp>
#include <VecCtrlSummoned/VecCtrlSummoned.hpp>
#include <VecCtrlUser/VecCtrlUser.hpp>

#include "util/extra.h"


#include "VecCtrl_regen.ipp"

RelPos::RelPos()
{
    _ZtlSecurePut_pos(0.);
    _ZtlSecurePut_v(0.);
}

void RelPos::_ctor_0()
{
    new(this) RelPos();
}

double __fastcall RelPos::_ZtlSecureGet_pos() const
{
    return __ZtlSecureFuse((double*)_ZtlSecureTear_pos.data(), _ZtlSecureTear_pos_CS);
}

double __fastcall RelPos::_ZtlSecurePut_pos(double t)
{
    _ZtlSecureTear_pos_CS = __ZtlSecureTear(t, _ZtlSecureTear_pos.data());
    return t;
    //return __sub_00590B40(this, t);
}

double __fastcall RelPos::_ZtlSecureGet_v() const
{
    return __ZtlSecureFuse((double*)_ZtlSecureTear_v.data(), _ZtlSecureTear_v_CS);
}

double __fastcall RelPos::_ZtlSecurePut_v(double t)
{
    //return __sub_00590B60(this, t);

    _ZtlSecureTear_v_CS = __ZtlSecureTear(t, _ZtlSecureTear_v.data());
    return t;
}

void RelPos::SetFromAbsPos(AbsPos& ap, CStaticFoothold* pFh)
{
    //__sub_00590C00(this, nullptr, arg0, arg1);
    auto uvx = pFh->GetUVX();
    auto uvy = pFh->GetUVY();
    auto v = fabs(uvx) <= 0.5
                 ? (ap._ZtlSecureGet_y() - pFh->GetY1()) / uvy
                 : (ap._ZtlSecureGet_x() - pFh->GetX1()) / uvx;

    _ZtlSecurePut_v(v);

    auto vx = ap._ZtlSecureGet_vx();
    auto vy = ap._ZtlSecureGet_vy();
    _ZtlSecurePut_v(vy * uvy + vx * uvx);

    auto pos = _ZtlSecureGet_pos();
    auto len = pFh->GetLen();
    auto pos_ = 0.0;
    if ( pos < 0.0 || (pos_ = len, len < pos) )
        pos = pos_;

    _ZtlSecurePut_pos(pos);
}

AbsPos::AbsPos()
{
    _ZtlSecurePut_vx(0.);
    _ZtlSecurePut_vy(0.);
    _ZtlSecurePut_x(0.);
    _ZtlSecurePut_y(0.);
}

_ZTL_SEC_GETSETI(double, AbsPos, x)

_ZTL_SEC_GETSETI(double, AbsPos, y)

_ZTL_SEC_GETSETI(double, AbsPos, vx)

_ZTL_SEC_GETSETI(double, AbsPos, vy)

void AbsPos::SetFromRelPos(RelPos& rp, CStaticFoothold* pfh)
{
    //__sub_00590CF0(this, nullptr, rp, pfh);
    auto uvx = pfh->GetUVX();
    auto uvy = pfh->GetUVY();

    auto pos = rp._ZtlSecureGet_pos();
    auto v = rp._ZtlSecureGet_v();

    _ZtlSecurePut_x(pos * uvx + pfh->GetX1());
    _ZtlSecurePut_y(pos * uvy + pfh->GetY1());
    _ZtlSecurePut_vx(v * uvx);
    _ZtlSecurePut_vy(v * uvy);
}

CVecCtrl::~CVecCtrl()
{
}

void CVecCtrl::_dtor_0()
{
    //return __sub_00591720(this, nullptr);
    this->~CVecCtrl();
}

CVecCtrl::CVecCtrl(const CVecCtrl& arg0)
{
    _ctor_1(arg0);
}

void CVecCtrl::_ctor_1(const CVecCtrl& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CVecCtrl::CVecCtrl()
{
    _ZtlSecurePut_m_nInputX(0);
    _ZtlSecurePut_m_nInputY(0);
    _ZtlSecurePut_m_pLadderOrRope(nullptr);
}

void CVecCtrl::_ctor_0()
{
    new(this) CVecCtrl();
    //return __sub_00591380(this, nullptr);
}

void CVecCtrl::Init(IVecCtrlOwner* pOwner)
{
    m_pOwner = pOwner;
    m_rcBound = CWvsPhysicalSpace2D::ms_pInstance->GetMBR();
    //__sub_00590A00(this, nullptr, pOwner);
}

void CVecCtrl::SetActive(int32_t bActive, long x, long y, long vx, long vy, long nMoveAction, CStaticFoothold* pFh)
{
    __sub_005918B0(this, nullptr, bActive, x, y, vx, vy, nMoveAction, pFh);
    /*m_bActive = bActive;
    auto right = this->m_rcBound.right;
    if (x >= this->m_rcBound.left)
    {
        if (x > right)
            x = right;
    }
    else
    {
        x = this->m_rcBound.left;
    }
    if (y >= this->m_rcBound.top)
    {
        if (y > this->m_rcBound.bottom)
            y = this->m_rcBound.bottom;
    }
    else
    {
        y = this->m_rcBound.top;
    }

    m_ap._ZtlSecurePut_x(x);
    m_ap._ZtlSecurePut_y(y);
    m_ap._ZtlSecurePut_vx(vx);
    m_ap._ZtlSecurePut_vy(vy);
    m_pfhLast = pFh;
    if (m_pOwner->GetType() != 7)
    {
        m_pfh = pFh;
    }
    m_pfhFallStart = nullptr;

    if (m_pfh)
    {
        m_lPage = m_pfh->GetPage();
        m_lZMass = m_pfh->GetZMass();
        m_rp.SetFromAbsPos(m_ap, pFh);
        m_ap.SetFromRelPos(m_rp, pFh);
    }
    else
    {
        m_lPage = 7;
        m_lZMass = 0;
    }

    m_apl = m_ap;
    if ((nMoveAction & 0xFFFFFFFE) == 0)
        nMoveAction = this->m_pOwner->OnResolveMoveAction(0, 0, nMoveAction & 1, this);
    m_nMoveAction = nMoveAction;

    const auto ty = m_pOwner->GetType();
    auto shortUpdate = ty == 0 || ty == 3 || ty == 4 || ty == 8;

    vx = m_ap._ZtlSecureGet_vx();
    vy = m_ap._ZtlSecureGet_vy();
    x = m_ap._ZtlSecureGet_x();
    y = m_ap._ZtlSecureGet_y();

    m_path.Init(bActive, shortUpdate, x, y, vx, vy, nMoveAction, pFh, nullptr);
    _ZtlSecurePut_m_nInputX(0);
    _ZtlSecurePut_m_nInputY(0);
    m_pAttrField = nullptr;
    m_pCurAttrShoe = 0;

    if (bActive)
    {
        m_pAttrField = CWvsPhysicalSpace2D::GetInstance()->GetFieldAttr();
        m_pCurAttrShoe = m_pOwner->GetShoeAttr();
    }*/
}

int32_t CVecCtrl::IsActive() const
{
    return m_bActive;
    //return __sub_00591570(this, nullptr);
}

int32_t CVecCtrl::IsUser()
{
    //TODO mostly wrong
    //return __sub_00591570(this, nullptr);
    return dynamic_cast<CVecCtrlUser*>(this) != nullptr;
}

int32_t CVecCtrl::IsMob()
{
    //return __sub_00591570(this, nullptr);
    return dynamic_cast<CVecCtrlMob*>(this) != nullptr;
}

int32_t CVecCtrl::IsNpc()
{
    //return __sub_00591570(this, nullptr);
    return dynamic_cast<CVecCtrlNpc*>(this) != nullptr;
}

int32_t CVecCtrl::IsPet()
{
    //return __sub_00591570(this, nullptr);
    return dynamic_cast<CVecCtrlPet*>(this) != nullptr;
}

int32_t CVecCtrl::IsSummoned()
{
    //return __sub_00591570(this, nullptr);
    return dynamic_cast<CVecCtrlSummoned*>(this) != nullptr;
}

int32_t CVecCtrl::IsGrenade()
{
    //return __sub_00591570(this, nullptr);
    return dynamic_cast<CVecCtrlGrenade*>(this) != nullptr;
}

int32_t CVecCtrl::IsDragon()
{
    //return __sub_00591570(this, nullptr);
    return dynamic_cast<CVecCtrlDragon*>(this) != nullptr;
}

int32_t CVecCtrl::IsOnFoothold() const
{
    return m_pfh != nullptr;
    //return __sub_00591570(this, nullptr);
}

int32_t CVecCtrl::IsOnLadder() const
{
    auto ladder = GetLadderOrRope();
    return ladder && ladder->bLadder;
}

int32_t CVecCtrl::IsOnRope() const
{
    const auto ladder = GetLadderOrRope();
    return ladder && !ladder->bLadder;
}

int32_t CVecCtrl::IsStopped() const
{
    const auto vx = GetAbsPos()._ZtlSecureGet_vx();
    const auto vy = GetAbsPos()._ZtlSecureGet_vy();
    return vx == 0. && vy == 0.;
}

int32_t CVecCtrl::IsFalling() const
{
    const auto vy = GetAbsPos()._ZtlSecureGet_vy();
    return !m_pfh && vy > 0;
}

int32_t CVecCtrl::IsDoingWings()
{
    //TODO(vecctrl)
    return m_bWingsNow;
}

int32_t CVecCtrl::IsLandingWings()
{
    //TODO(vecctrl)
    return 0;
}

int32_t CVecCtrl::_IsSwimmingMap() const
{
    const auto attr = this->m_pAttrField;
    return attr && attr->IsSwimMap();
}

int32_t CVecCtrl::_IsUserFlyMap() const
{
    const auto attr = this->m_pAttrField;
    return attr && attr->IsUserFlyMap();
}

int32_t CVecCtrl::_IsNeedSkillForFly()
{
    //return __sub_00591570(this, nullptr);
    const auto attr = this->m_pAttrField;
    return attr && attr->bNeedSkillForFlying;
}

int32_t CVecCtrl::IsUserFlying() const
{
    return 0;
}

int32_t CVecCtrl::IsSwimming() const
{
    const auto* attr = this->m_pAttrField;
    if (!attr)
        return false;

    const auto x = GetAbsPos()._ZtlSecureGet_x();
    const auto y = GetAbsPos()._ZtlSecureGet_y();

    return attr->IsSwimMap() || attr->icSwimArea.IsInArea(x, y);
}

int32_t CVecCtrl::IsFreeFalling()
{
    return !m_pfh && !IsSwimming() && !IsUserFlying() && this->m_pCurAttrShoe->flyAcc <= 0.;
}

int32_t CVecCtrl::IsFloating()
{
    //return __sub_00591570(this, nullptr);
    UNIMPLEMENTED; //TODO(vecctrl)
}

long CVecCtrl::GetPage() const
{
    return m_lPage;
}

long CVecCtrl::GetZMass() const
{
    return m_lZMass;
}

CStaticFoothold* CVecCtrl::GetFoothold() const
{
    return m_pfh;
    //return __sub_00239F20(this, nullptr);
}

const CLadderOrRope* CVecCtrl::GetLadderOrRope() const
{
    return _ZtlSecureGet_m_pLadderOrRope();
    //return __sub_000BBE80(this, nullptr);
}

const AbsPos& CVecCtrl::GetAbsPos() const
{
    return m_ap;
}

long CVecCtrl::GetMoveAction() const
{
    return m_nMoveAction;
}

void CVecCtrl::SetMoveAction(long moveAction)
{
    m_nMoveAction = moveAction;
}

void CVecCtrl::ResolveMoveAction()
{
    const auto x = _ZtlSecureGet_m_nInputX();
    const auto y = _ZtlSecureGet_m_nInputY();
    m_nMoveAction = m_pOwner->OnResolveMoveAction(x, y, m_nMoveAction, this);
}

void CVecCtrl::SetAlternateVector2D(_x_com_ptr<IWzVector2D> vec)
{
    m_pVecAlternate = vec;
}

_x_com_ptr<IWzVector2D> CVecCtrl::GetAlternateVector2D()
{
    return m_pVecAlternate;
}

void CVecCtrl::UpdateActive()
{
    if (const auto rpl = BeginUpdateActive())
    {
        m_bBeginUpdateActivePassed = true;
        InspectUpdateActive();
        if (WorkUpdateActive(rpl))
        {
            EndUpdateActive();
        }
    }


    //__sub_00590980(this, nullptr);
}

void CVecCtrl::CalcWalk(long vMax)
{
    __sub_00592BA0(this, nullptr, vMax);
}

void CVecCtrl::CalcFloat(long drag2)
{
    __sub_005934C0(this, nullptr, drag2);
}

int32_t CVecCtrl::CollisionDetectWalk(const RelPos& tCollide, long& t, int32_t pfhLink)
{
    return __sub_00592280(this, nullptr, tCollide, t, pfhLink);
}

int32_t CVecCtrl::CollisionDetectFloat(const AbsPos& p1, long& tElapse, int32_t bCalcFloat)
{
    return __sub_00594740(this, nullptr, p1, tElapse, bCalcFloat);

    /*auto tElapseMax = BoundPosMapRange_0(p1, tElapse);
    auto ph2d = GetPhysicalSpace2D();

    auto x = tolong(p1._ZtlSecureGet_x());
    auto y = tolong(p1._ZtlSecureGet_y());

    auto ax = tolong(m_ap._ZtlSecureGet_x());
    auto ay = tolong(m_ap._ZtlSecureGet_y());

    auto dx = ax - x;
    auto dy = ay - y;

    double v = 0.;


    if (x == ax && y == ay)
    {
        tElapse -= tElapseMax;
        MakeContinuousMovePath(tElapseMax);
        return 0;
    }

    ZList<ZRef<CStaticFoothold>> lFh;
    ph2d->GetCrossCandidate(
        x, y, ax, ay, lFh);

    bool bNeedToLandOnReservedFh = 0;

    ZRef<CStaticFoothold> pfhFirstCollideCW;
    ZRef<CStaticFoothold> pfhFirstCollideCCW;

    auto qFirstCollide = 2;
    auto tCollide = 1;
    double tSec = 0.;

    for (auto fh : lFh)
    {
        if (m_pfhLandingNext && m_pfhLandingNext != fh)
        {
            continue;
        }

        auto vy = m_ap._ZtlSecureGet_vy();
        if (fh == m_pfhLandingNext && vy > 0.)
        {
            bNeedToLandOnReservedFh = true;
        }

        if (fh->GetUVX() < 0.)
        {
            auto zMass = fh->GetZMass();
            if (zMass != ph2d->GetBaseZMass() && zMass != m_lZMass)
            {
                if (m_pOwner->GetType() != 7)
                {
                    continue;
                }

                if (m_pfhLast && m_pfhLast->GetPage() != fh->GetPage())
                {
                    continue;
                }
            }
        }

        if (!fh->GetFootHoldState())
        {
            continue;
        }


        auto fx1 = fh->GetX1();
        auto fy1 = fh->GetY1();
        auto fx2 = fh->GetX2();
        auto fy2 = fh->GetY2();


        //TODO verify
        auto diffP = get_cross_product(fx1, fy1, x, y, fx2, fy2);
        auto diffA = get_cross_product(fx1, fy1, ax, ay, fx2, fy2);

        auto pfhCCW = fh;
        auto pfhCW = fh;

        //TODO correct?
        if (diffP < 0 || diffA < 0)
        {
            //TODO verify
            auto diffP1 = get_cross_product(x, y, ax, ay, fx1, fy1);
            auto diffP2 = get_cross_product(x, y, ax, ay, fx2, fy2);
            if ((diffP1 < 0 && diffP2 < 0) || (diffP1 > 0 && diffP2 > 0))
            {
                continue;
            }

            if (m_pfhLandingNext == fh && m_ap._ZtlSecureGet_vy() > 0.)
            {
                bNeedToLandOnReservedFh = false;
            }
            else
            {
                if (!diffP1)
                {
                    auto fhPrev = fh->GetPrevLink();
                    if ( !fhPrev || !is_blocked_area(fhPrev, fh.op_arrow(), ax, ay) )
                    {
                        continue;
                    }

                    pfhCCW = fhPrev;
                }

                if (!diffP2)
                {
                    auto fhNext = fh->GetNextLink();
                    if (!fhNext || !is_blocked_area(fh.op_arrow(), fhNext, ax, ay))
                    {
                        continue;
                    }

                    pfhCW = fhNext;
                }
            }
        }

        auto dfy = fy2 - fy1;
        auto dfx = fx2 - fx1;
        auto absDiff = std::abs(dx * dfy - dy * dfx);
        auto det = std::abs(fx1 * fy2 + y * dfx - x * dfy - fy1 * fx2);
        int collide = tCollide * det;
        if (qFirstCollide * absDiff >= collide)
        {
            //TODO
            //
            //if ( v34 | v32 )
        //goto LABEL_63;


            if (pfhFirstCollideCW->CheckCollisionLeft(*pfhCW.op_arrow()))
            {
                pfhFirstCollideCW = pfhCW;
            }

            if (pfhFirstCollideCCW->CheckCollisionRight(*pfhCCW.op_arrow()))
            {
                pfhFirstCollideCCW = pfhCCW;
            }
        }
        else
        {
            tCollide = absDiff;
            pfhFirstCollideCW = pfhCW;
            pfhFirstCollideCCW = pfhCCW;
            qFirstCollide = det;

            auto xf2a = fy1 * fx2;
            auto yf2a = fx1 * fy2;

            auto a = (dx * (int64_t)(xf2a - yf2a) + dfx * (int64_t)(x * ay - y * ax);
            auto b = dy * dfx - dx * dfy;
            v = a / b;

            if (dx)
            {
                tSec = (v - (double)x) * (double)dy / (double)dx + (double)y;
            }
            else
            {
                tSec = (v - (double)fx1) * (double)dfy / (double)dfx + (double)fy1;
            }
        }
    }

    if (!pfhFirstCollideCW || !pfhFirstCollideCCW)
    {
        if (bNeedToLandOnReservedFh)
        {
            auto ax_ = m_ap._ZtlSecureGet_x();
            auto& nextFh = m_pfhLandingNext;
            auto pos = (ax / nextFh->GetX1()) / nextFh->GetUVX();
            if (pos < 0. || pos < nextFh->GetLen())
                pos = nextFh->GetLen();

            m_rp._ZtlSecurePut_pos(pos);
            m_rp._ZtlSecurePut_v(0);
            m_ap.SetFromRelPos(m_rp, nextFh.op_arrow());
            OnAttachedObjectChanged(nextFh.op_arrow(), nullptr, tElapseMax);
            tElapse -= tElapseMax;
            return true;
        }

        tElapse -= tElapseMax;
        MakeContinuousMovePath(tElapseMax);
        return false;
    }


    auto vya = (double)qFirstCollide / tCollide;
    auto collideA = (long)(vya * tElapseMax);

    auto aVX = m_ap._ZtlSecureGet_vx();
    auto aVY = m_ap._ZtlSecureGet_vy();
    auto pVX = p1._ZtlSecureGet_vx();
    auto pVY = p1._ZtlSecureGet_vy();

    auto dVY = aVY - pVY;
    auto dVX = aVX - pVX;

    auto rV = m_rp._ZtlSecureGet_v();

    ZRef<CStaticFoothold> collideFh = pfhFirstCollideCW;
    if (pfhFirstCollideCW == pfhFirstCollideCCW)
    {
        m_rp._ZtlSecurePut_v(
          collideFh->GetUVY() * dVY + collideFh->GetUVX() * dVX
        );
    }
    else
    {
        auto t = pfhFirstCollideCW->CalcSlopeScale(dx, dy);
        auto u = pfhFirstCollideCCW->CalcSlopeScale(dx, dy);

        if (t <= 0.001 || u <= 0.001)
        {
            if (t >= -0.001 || (t = u, u >= -0.001)) {
                if (pfhFirstCollideCW->GetX1() >= pfhFirstCollideCW->GetX2())
                {
                    collideFh = pfhFirstCollideCCW;
                }

                t = 0.;
            }
        }
        m_rp._ZtlSecurePut_v(t);
    }

    if (m_pfhFallStart && m_pfhFallStart == collideFh)
    {
        m_rp._ZtlSecurePut_v(rV);
        return true;
    }

    tElapse -= collideA;
    double pos = 0.;
    if (collideFh->GetUVX() <= 0.5)
    {
        pos = (tSec - collideFh->GetY1()) / collideFh->GetUVY();
    }
    else
    {
        pos = (v - collideFh->GetX1()) / collideFh->GetUVX();
    }
    m_rp._ZtlSecurePut_pos(pos);




    return true;*/
}

void CVecCtrl::GetInput(long& nInputX, long& nInputY) const
{
    nInputX = _ZtlSecureGet_m_nInputX();
    nInputY = _ZtlSecureGet_m_nInputY();
    //__sub_005049C0(this, nullptr, nInputX, nInputY);
}

void CVecCtrl::SetInput(const long nInputX, const long nInputY)
{
    _ZtlSecurePut_m_nInputX(nInputX);
    _ZtlSecurePut_m_nInputY(nInputY);
    m_nMoveAction = m_pOwner->OnResolveMoveAction(nInputX, nInputY, m_nMoveAction, this);

    //__sub_00554300(this, nullptr, nInputX, nInputY);
}

void CVecCtrl::SetJumpNext()
{
}

void CVecCtrl::SetWingsNext()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CVecCtrl::SetWingsStop()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CVecCtrl::SetImpactNext(double vx, double vy)
{
    //__sub_00349070(this, nullptr, vx, vy);
    double v4 = 0., v5 = 0., v6 = 0.;
    auto v3 = this->m_impactNext.bValid == 0;
    this->m_bWingsNow = 0;
    if (v3)
    {
        this->m_impactNext.vy = 0.0;
        this->m_impactNext.vx = 0.0;
    }
    this->m_impactNext.bValid = 1;
    if (vx < 0.0 && vx < this->m_impactNext.vx)
    {
        v4 = vx + this->m_impactNext.vx;
        if (v4 < vx)
        {
            this->m_impactNext.vx = vx;
            goto LABEL_12;
        }
    LABEL_11:
        this->m_impactNext.vx = v4;
        goto LABEL_12;
    }
    if (vx > 0.0 && vx > this->m_impactNext.vx)
    {
        v4 = vx + this->m_impactNext.vx;
        if (v4 > vx)
        {
            this->m_impactNext.vx = vx;
            goto LABEL_12;
        }
        goto LABEL_11;
    }
LABEL_12:
    if (vy < 0.0 && vy < this->m_impactNext.vy)
    {
        v5 = vy;
        v6 = this->m_impactNext.vy + vy;
        if (v6 >= vy)
        {
        LABEL_15:
            this->m_impactNext.vy = v6;
            return;
        }
        goto LABEL_19;
    }
    v5 = vy;
    if (vy > 0.0 && vy > this->m_impactNext.vy)
    {
        v6 = this->m_impactNext.vy + vy;
        if (v6 <= vy)
            goto LABEL_15;
    LABEL_19:
        this->m_impactNext.vy = v5;
    }
}

void CVecCtrl::SetImpactNext(long nAttr, double vx, double vy)
{
    SetMovePathAttribute(nAttr);
    SetImpactNext(vx, vy);
    //__sub_00505CD0(this, nullptr, nAttr, vx, vy);
}

void CVecCtrl::SetMovePathAttribute(long nAttr)
{
    auto pfhStart = m_pfhFallStart;
    if (nAttr == 11 && m_falldownNext.bValid)
    {
        pfhStart = m_falldownNext.pfhFallStart;
    }

    const auto vx = (long)m_ap._ZtlSecureGet_vx();
    const auto vy = (long)m_ap._ZtlSecureGet_vy();
    const auto x = (long)m_ap._ZtlSecureGet_x();
    const auto y = (long)m_ap._ZtlSecureGet_y();
    const auto pLR = GetLadderOrRope();

    m_path.MakeMovePath(
        nAttr,
        m_pfh,
        pfhStart,
        pLR,
        x,
        y,
        vx,
        vy,
        m_nMoveAction,
        0,
        0,
        0
    );
}

void CVecCtrl::SetWingsParam(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CVecCtrl::DetachFromFoothold()
{
    //__sub_00590D90(this, nullptr);
    m_pfh = this->m_pfh;
    if (m_pfh)
    {
        auto m_len = m_pfh->GetLen();
        auto pos = m_rp._ZtlSecureGet_pos();
        if (pos >= 0.0)
        {
            if (m_len < pos)
                pos = m_len;
        }
        else
        {
            pos = 0.0;
        }
        m_rp._ZtlSecurePut_pos(pos);
        m_ap.SetFromRelPos(m_rp, m_pfh);
        auto v4 = this->m_pfh;
        auto x2 = v4->GetX2();;
        auto x1 = (double)v4->GetX1();
        auto x = m_ap._ZtlSecureGet_x();
        auto v7 = (double)x2;
        if (x < x1 || (x1 = x, x <= v7))
            v7 = x1;
        m_ap._ZtlSecurePut_x(v7);
        auto y = m_ap._ZtlSecureGet_y();
        y = floor(y - 1.0);
        m_ap._ZtlSecurePut_y(y);
        this->OnAttachedObjectChanged(nullptr, nullptr, 0);
    }
}

int CVecCtrl::UpdatePassive(const long* pFixedX, const long* pFixedY)
{
    if (BeginUpdatePassive())
    {
        //TODO make the timestep variable a global
        return WorkUpdatePassive(0x1e, pFixedX, pFixedY);
    }

    return 0;

    //return __sub_00590930(this, nullptr, pFixedX, pFixedY);
}

CMovePath& CVecCtrl::GetMovePath()
{
    return m_path;
}

CVecCtrl*__cdecl CVecCtrl::CreateInstance()
{
    //return __sub_00591830();
    return new CVecCtrl();
}

CWvsPhysicalSpace2D* CVecCtrl::GetPhysicalSpace2D() const
{
    return CWvsPhysicalSpace2D::GetInstance();
}

void CVecCtrl::OnAttachedObjectChanged(CStaticFoothold* pfhNew, CLadderOrRope* pLadderOrRopeNew, long tElapse)
{
    __sub_005929E0(this, nullptr, pfhNew, pLadderOrRopeNew, tElapse);
    /*
        MakeContinuousMovePath(tElapse);
        auto page = m_lPage;
        auto zMass = m_lZMass;
        if (pfhNew)
        {
            page = pfhNew->GetPage();
            zMass = pfhNew->GetZMass();


            m_pfhLast = pfhNew;
            m_pfhFallStart = nullptr;
            m_pfhLandingNext = 0;
            m_bWingsNow = false;
        }
        else if (pLadderOrRopeNew)
        {
            m_pfhFallStart = nullptr;
            page = pLadderOrRopeNew->nPage;
            zMass = 0;
            m_bSetLayerZNext = true;
            m_bWingsNow = false;
        }


        if (m_lZMass != zMass || m_lPage != page)
        {
            m_lPage = page;
            m_lZMass = zMass;
            m_pOwner->OnLayerZChanged(this);
        }

        m_pfh = pfhNew;
        _ZtlSecurePut_m_pLadderOrRope(pLadderOrRopeNew);

        long inpX = 0, inpY = 0;
        GetInput(inpX, inpY);
        m_nMoveAction = m_pOwner->OnResolveMoveAction(inpX, inpY, m_nMoveAction, this);
        MakeNewMovePathElem();*/
}

void CVecCtrl::SetAttachedObjectChanged(const int32_t attachedObj)
{
    m_bAttachedObjectChanged = attachedObj;
}

int32_t CVecCtrl::IsAttachedObjectChanged() const
{
    return m_bAttachedObjectChanged;
}

long CVecCtrl::GetMPA() const
{
    UNIMPLEMENTED;
}

void CVecCtrl::MakeContinuousMovePath(long tElapse)
{
    auto act = m_bWingsNow ? 14 : m_pfhFallStart ? 12 : 0;
    m_path.MakeMovePath(
        act,
        m_pfh,
        m_pfhFallStart,
        GetLadderOrRope(),
        m_ap._ZtlSecureGet_x(),
        m_ap._ZtlSecureGet_y(),
        m_ap._ZtlSecureGet_vx(),
        m_ap._ZtlSecureGet_vy(),
        m_nMoveAction,
        tElapse,
        m_apOffset._ZtlSecureGet_x(),
        m_apOffset._ZtlSecureGet_y()
    );
    //__sub_00591600(this, nullptr, tElapse);
}

void CVecCtrl::MakeNewMovePathElem()
{
    auto act = m_bWingsNow ? 14 : m_pfhFallStart ? 12 : 0;
    m_path.AddNewElem(
        act,
        m_pfh,
        m_pfhFallStart,
        GetLadderOrRope(),
        m_ap._ZtlSecureGet_x(),
        m_ap._ZtlSecureGet_y(),
        m_ap._ZtlSecureGet_vx(),
        m_ap._ZtlSecureGet_vy(),
        m_nMoveAction,
        0, 0);
    //__sub_00590A30(this, nullptr);
}

void CVecCtrl::SaveFloatStateBeforeCollision()
{
}

void CVecCtrl::SaveFloatStateAfterCollision()
{
}

long CVecCtrl::BoundPosMapRange(const RelPos& rp, long tElapse)
{
    return __sub_005910C0(this, nullptr, rp, tElapse);
    /*const auto rpos = m_rp._ZtlSecureGet_pos();
    const auto pos = rp._ZtlSecureGet_pos();
    const auto dpos = rpos - pos;
    auto result = 0;

    const auto isLeft = m_rcBound.left > rpos;
    const auto isRight = m_rcBound.right < rpos;
    if (!isLeft && !isRight)
        return tElapse;

    const double bound = isLeft ? m_rcBound.left : m_rcBound.right;
    const auto newPos = (bound - this->m_pfh->GetX1()) / this->m_pfh->GetUVX();
    m_rp._ZtlSecurePut_pos(newPos);
    m_rp._ZtlSecurePut_v(0.);
    if (0.0 == dpos)
    {
        result = tElapse;
    }
    else
    {
        result = (newPos - pos)
            / dpos
            * static_cast<double>(tElapse);
    }
    if (result < 0)
        return 0;
    if (result > tElapse)
        return tElapse;
    return result;*/
}

long CVecCtrl::BoundPosMapRange(const AbsPos& dx0, long dy0)
{
    return __sub_00590EA0(this, nullptr, dx0, dy0);
}

_ZTL_SEC_GETSETI(CLadderOrRope*, CVecCtrl, m_pLadderOrRope)
_ZTL_SEC_GETSETI(long, CVecCtrl, m_nInputX)
_ZTL_SEC_GETSETI(long, CVecCtrl, m_nInputY)

long CVecCtrl::BeginUpdateActive()
{
    //return __sub_00591F90(this, nullptr);
    m_apl = m_ap;
    m_pAttrField = GetPhysicalSpace2D()->GetFieldAttr();
    m_pCurAttrShoe = m_pOwner->GetShoeAttr();

    //TODO timestemp
    return 30;
}

int32_t CVecCtrl::WorkUpdateActive(long rpl)
{
    return __sub_00594460(this, nullptr, rpl);
}

void CVecCtrl::EndUpdateActive()
{
}

int32_t CVecCtrl::BeginUpdatePassive()
{
    m_apl = m_ap;
    return true;
}

int CVecCtrl::WorkUpdatePassive(long tElapse, const long* pFixedX, const long* pFixedY)
{
    return __sub_00591BE0(this, nullptr, tElapse, pFixedX, pFixedY);
}

void CVecCtrl::InspectUpdateActive()
{
}

void CVecCtrl::SetSlide(long arg0, double arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CVecCtrl::JustJump()
{
    return __sub_00593EA0(this, nullptr);
}

void CVecCtrl::Jump()
{
    m_bJumpNext = false;
    m_bTryJumpedInFly = true;
    if (JustJump())
    {
        SetMovePathAttribute(1);
    }
}

void CVecCtrl::Wings()
{
    m_bWingsNext = false;
    if (JustJump())
    {
        m_bWingsNow = true;
        SetMovePathAttribute(13);
    }
}

void CVecCtrl::FallDown()
{
    __sub_00593D80(this, nullptr);
}

void CVecCtrl::Impact()
{
    __sub_00592050(this, nullptr);
}

HRESULT __stdcall CVecCtrl::QueryInterface(const _GUID& riid, void** ppv)
{
    //return __sub_00595300(this, riid, ppv);
    if (!ppv)
        return 0x80004003;

    if (IsEqualGUID(riid, __uuidof(IUnknown)) || IsEqualGUID(riid, __uuidof(IWzVector2D)) ||
        IsEqualGUID(riid, __uuidof(IWzShape2D)) || IsEqualGUID(riid, __uuidof(IWzSerialize)))
    {
        *ppv = dynamic_cast<IWzVector2D*>(this);
        AddRef();
        return 0;
    }

    *ppv = nullptr;
    return 0x80004002;
}

unsigned long __stdcall CVecCtrl::AddRef()
{
    //return __sub_00595390(this);

    return InterlockedIncrement(&m_cRef);
}

unsigned long __stdcall CVecCtrl::Release()
{
    auto res = InterlockedDecrement(&m_cRef);
    if (!res)
    {
        delete this;
    }

    return res;
    //return __sub_005953B0(this);
}

HRESULT __stdcall CVecCtrl::get_value(tagVARIANT vKey, tagVARIANT* pvValue)
{
    //return __sub_005915B0(this, CreateNakedParam(vKey), pvValue);
    //return m_pVecAlternate->get_value(vKey, pvValue);
    UNIMPLEMENTED;
}

HRESULT __stdcall CVecCtrl::put_value(tagVARIANT vKey, tagVARIANT vVal)
{
    //return __sub_005915F0(this, CreateNakedParam(vKey), CreateNakedParam(vVal));
    return 0x80004005;
}

HRESULT __stdcall CVecCtrl::get_persistentUOL(wchar_t** pVal)
{
    //return __sub_005953E0(this, pVal);
    return 2 * (pVal != nullptr) - 0x7FFFBFFD;
}

HRESULT __stdcall CVecCtrl::raw_Serialize(IWzArchive* pArchive)
{
    //return __sub_00595400(this, pArchive);
    return 2 * (pArchive != nullptr) - 0x7FFFBFFD;
}

HRESULT __stdcall CVecCtrl::get_item(tagVARIANT vIndex, tagVARIANT* pvValue)
{
    //return __sub_00595420(this, CreateNakedParam(vIndex), pvValue);
    if (!pvValue)
        return 0x80004003;
    pvValue->vt = 0;
    return 0;
}

HRESULT __stdcall CVecCtrl::get__NewEnum(IUnknown** pVal)
{
    //return __sub_00595440(this, pVal);
    return 2 * (pVal != nullptr) - 0x7FFFBFFD;
}

HRESULT __stdcall CVecCtrl::get_count(unsigned int* pVal)
{
    //return __sub_00595460(this, (unsigned long*)pVal);
    if (!pVal)
        return 0x80004003;
    *pVal = 0;
    return 0;
}

HRESULT __stdcall CVecCtrl::get_x(int* pVal)
{
    //return __sub_00595480(this, (long*)pVal);
    if (!pVal)
        return 0x80004003;
    return raw__GetSnapshot(pVal, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
                                             vtMissing);
}

HRESULT __stdcall CVecCtrl::get_y(int* pVal)
{
    //return __sub_00595510(this, (long*)pVal);
    if (!pVal)
        return 0x80004003;
    return raw__GetSnapshot(nullptr, pVal, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
                                             vtMissing);
}

HRESULT __stdcall CVecCtrl::get_x2(int* pVal)
{
    //return __sub_005955A0(this, (long*)pVal);
    UNIMPLEMENTED;
}

HRESULT __stdcall CVecCtrl::get_y2(int* pVal)
{
    //return __sub_005955C0(this, (long*)pVal);
    UNIMPLEMENTED;
}

HRESULT __stdcall CVecCtrl::put_x(int newVal)
{
    UNIMPLEMENTED;
    //return __sub_005954E0(this, newVal);
}

HRESULT __stdcall CVecCtrl::put_y(int newVal)
{
    UNIMPLEMENTED;
    //return __sub_00595570(this, newVal);
}

HRESULT __stdcall CVecCtrl::put_x2(int newVal)
{
    UNIMPLEMENTED;
    //return __sub_005955B0(this, newVal);
}

HRESULT __stdcall CVecCtrl::put_y2(int newVal)
{
    UNIMPLEMENTED;
    //return __sub_005955D0(this, newVal);
}

HRESULT __stdcall CVecCtrl::raw_Move(int x, int y)
{
    m_pfh = nullptr;
    _ZtlSecurePut_m_pLadderOrRope(nullptr);
    m_apl._ZtlSecurePut_x(x);
    m_apl._ZtlSecurePut_y(y);
    m_apl._ZtlSecurePut_vx(0.);
    m_apl._ZtlSecurePut_vy(0.);

    m_ap._ZtlSecurePut_x(x);
    m_ap._ZtlSecurePut_y(y);
    m_ap._ZtlSecurePut_vx(0.);
    m_ap._ZtlSecurePut_vy(0.);

    if (m_bActive)
        SetMovePathAttribute(3);
    return 0;
}

HRESULT __stdcall CVecCtrl::raw_Offset(int nDX, int nDY)
{
    auto x = m_ap._ZtlSecureGet_x();
    auto y = m_ap._ZtlSecureGet_y();
    return raw_Move(x + nDX, y + nDY);
    //return __sub_00595960(this, nDX, nDY);
}

HRESULT __stdcall CVecCtrl::raw_Scale(int nXMul, int nXDiv, int nYMul, int nYDiv, int nXOrg, int nYOrg)
{
    if (!nXDiv || !nYDiv)
        return 0x80070057;
    auto x = m_ap._ZtlSecureGet_x();
    auto y = m_ap._ZtlSecureGet_y();
    return raw_Move(
        (int)((x - (double)nXOrg) * (double)nXMul / (double)nXDiv + (double)nXOrg),
        (int)((double)nYOrg + (y - (double)nYOrg) * (double)nYMul / (double)nYDiv));
    //UNIMPLEMENTED;
    //return __sub_005959C0(this, nXMul, nXDiv, nYMul, nYDiv, nXOrg, nYOrg);
}

HRESULT __stdcall CVecCtrl::raw_Insert(tagVARIANT vIndexOrShape, tagVARIANT vShape)
{
    return 0x80004001;
    //return __sub_005955E0(this, CreateNakedParam(vIndexOrShape), CreateNakedParam(vShape));
}

HRESULT __stdcall CVecCtrl::raw_Remove(tagVARIANT vIndex, tagVARIANT* pvRemoved)
{
    UNIMPLEMENTED;
    //return __sub_005955F0(this, CreateNakedParam(vIndex), pvRemoved);
}

HRESULT __stdcall CVecCtrl::raw_Init(int nX, int nY)
{
    //TODO maybe wrong
    return raw_Move(nX, nY);
    //return __sub_00595600(this, nX, nY);
}

HRESULT __stdcall CVecCtrl::get_currentTime(int* pnTime)
{
    return 0x80004001;
    //return __sub_00595610(this, (long*)pnTime);
}

HRESULT __stdcall CVecCtrl::put_currentTime(int nTime)
{
    return 0x80004001;
}

HRESULT __stdcall CVecCtrl::get_origin(tagVARIANT* ppOrigin)
{
    if (!ppOrigin)
        return 0x80004003;
    ppOrigin->vt = 13;
    ppOrigin->lVal = 0;
    return 0;
}

HRESULT __stdcall CVecCtrl::put_origin(tagVARIANT pOrigin)
{
    return 0x80004001;
}

HRESULT __stdcall CVecCtrl::get_rx(int* pnX)
{
    //return __sub_00595670(this, (long*)pnX);
    if (!pnX)
        return 0x80004003;
    return raw__GetSnapshot(nullptr, nullptr, pnX, nullptr, nullptr, nullptr, nullptr, nullptr,
                                             vtMissing);
}

HRESULT __stdcall CVecCtrl::get_ry(int* pnY)
{
    //return __sub_00595740(this, (long*)pnY);

    if (!pnY)
        return 0x80004003;
    return raw__GetSnapshot(nullptr, nullptr, nullptr, pnY, nullptr, nullptr, nullptr, nullptr,
                                             vtMissing);
}

HRESULT __stdcall CVecCtrl::put_rx(int nX)
{
    //return __sub_005956D0(this, nX);
    int ry = 0;
    if (auto hr = get_ry(&ry); hr < 0)
    {
        return hr;
    }

    return raw_RelMove(
        nX,
        ry,
        vtMissing,
        vtMissing
    );
}

HRESULT __stdcall CVecCtrl::put_ry(int nY)
{
    //return __sub_005957A0(this, nY);
    int rx = 0;
    if (auto hr = get_rx(&rx); hr < 0)
    {
        return hr;
    }

    return raw_RelMove(
        rx,
        nY,
        vtMissing,
        vtMissing
    );
}

HRESULT __stdcall CVecCtrl::get_a(double* pa)
{
    //return __sub_00595810(this, pa);
    return 0x80004001;
}

HRESULT __stdcall CVecCtrl::get_ra(double* pra)
{
    //return __sub_00595820(this, pra);
    return 0x80004001;
}

HRESULT __stdcall CVecCtrl::put_ra(double ra)
{
    //return __sub_00595830(this, ra);
    return 0x80004001;
}

HRESULT __stdcall CVecCtrl::get_flipX(int* pnFlipX)
{
    //return __sub_00595840(this, (long*)pnFlipX);
    if (pnFlipX)
        *pnFlipX = 0;
    return 0;
}

HRESULT __stdcall CVecCtrl::put_flipX(int nFlipX)
{
    //return __sub_00595860(this, nFlipX);
    return 0;
}


int calcPos(double x, double vx, double t)
{
    return static_cast<int>(tolong(x + (vx - x) * t));
    //return tolong(x);
}

HRESULT
__stdcall CVecCtrl::raw__GetSnapshot(int* px, int* py, int* prx, int* pry, int* pxOrg, int* pyOrg, double* pa,
                                     double* paOrg, tagVARIANT vTime)
{
    /*return __sub_00595A50(this, (long*)t, (long*)arg1, (long*)arg2, (long*)arg3, (long*)arg4, (long*)arg5, arg6, arg7,
                          CreateNakedParam(arg8));*/

    auto result = S_OK;
    if (m_pVecAlternate)
    {
        result = m_pVecAlternate->raw__GetSnapshot(px, py, prx, pry, pxOrg, pyOrg, pa, paOrg, vTime);
        if (result < 0)
        {
            return result;
        }
    }
    else
    {
        const auto t = CWvsApp::GetInstance()->GetTimeGap() / 30.;
        if (px)
        {
            auto x = m_ap._ZtlSecureGet_x();
            auto vx = m_apl._ZtlSecureGet_x();
            *px = calcPos(x, vx, t);
        }

        if (py)
        {
            auto y = m_ap._ZtlSecureGet_y();
            auto vy = m_apl._ZtlSecureGet_y();
            *py = calcPos(y, vy, t);
        }

        if (prx)
        {
            auto x = m_ap._ZtlSecureGet_x();
            auto vx = m_apl._ZtlSecureGet_x();
            *prx = calcPos(x, vx, t);
        }

        if (pry)
        {
            auto y = m_ap._ZtlSecureGet_y();
            auto vy = m_apl._ZtlSecureGet_y();
            *pry = calcPos(y, vy, t);
        }
    }

    if (pyOrg)
        *pyOrg = 0;
    if (pxOrg)
        *pxOrg = 0;
    if (pa)
        *pa = 0.;
    if (paOrg)
        *paOrg = 0.;

    return result;
}

HRESULT __stdcall CVecCtrl::raw_RelMove(int nX, int nY, tagVARIANT nTime, tagVARIANT nType)
{
    //return __sub_00595870(this, nX, nY, CreateNakedParam(nTime), CreateNakedParam(nType));
    return raw_Move(nX, nY);
}

HRESULT __stdcall CVecCtrl::raw_RelOffset(int nDX, int nDY, tagVARIANT vTime, tagVARIANT nType)
{
    //return __sub_00595890(this, nDX, nDY, CreateNakedParam(vTime), CreateNakedParam(nType));
    return raw_Offset(nDX, nDY);
}

HRESULT __stdcall CVecCtrl::raw_Ratio(IWzVector2D* pOrigin, int nOriginWidth, int nOriginHeight, int nScaleWidth,
                                      int nScaleHeight)
{
    //return __sub_005958B0(this, pOrigin, nOriginWidth, nOriginHeight, nScaleWidth, nScaleHeight);

    return 0x80004001;
}

HRESULT __stdcall CVecCtrl::raw_WrapClip(tagVARIANT pOrigin, int nWrapLeft, int nWrapTop, unsigned int uWrapWidth,
                                         unsigned int uWrapHeight, tagVARIANT bClip)
{
    //return __sub_005958C0(this, CreateNakedParam(pOrigin), nWrapLeft, nWrapTop, uWrapWidth, uWrapHeight,
    //                     CreateNakedParam(bClip));

    return 0x80004001;
}

HRESULT __stdcall CVecCtrl::raw_Rotate(double aAmount, tagVARIANT nTime)
{
    //return __sub_005958D0(this, aAmount, CreateNakedParam(nTime));

    return 0x80004001;
}

HRESULT __stdcall CVecCtrl::get_looseLevel(unsigned int* puLevel)
{
    //return __sub_005958E0(this, (unsigned long*)puLevel);
    return 0x80004001;
}

HRESULT __stdcall CVecCtrl::put_looseLevel(unsigned int uLevel)
{
    //return __sub_005958F0(this, uLevel);

    return 0x80004001;
}

HRESULT __stdcall CVecCtrl::raw_Fly(tagVARIANT* aVar, int nArgs)
{
    //return __sub_00595900(this, aVar, nArgs);

    return 0x80004005;
}

CVecCtrl& CVecCtrl::operator=(const CVecCtrl& arg0)
{
    return _op_assign_131(this, arg0);
}

CVecCtrl& CVecCtrl::_op_assign_131(CVecCtrl* pThis, const CVecCtrl& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CVecCtrl::IMPACTNEXT::IMPACTNEXT()
{
}

void CVecCtrl::IMPACTNEXT::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

double __cdecl max_walk_speed(CStaticFoothold* pfh, const CAttrShoe* pas, long dir)
{
    //return __sub_00592B20(pfh, pas, dir);
    auto& phy = CWvsPhysicalSpace2D::GetInstance()->m_constants;;
    double walk = pfh->GetAttribute()->walk;
    double walkSpeed = pas->walkSpeed.GetData();
    auto result = walkSpeed * (phy->dWalkSpeed * walk);
    if (dir)
        return result * (pfh->GetUVY() * pfh->GetUVY() * (double)dir + 1.0);
    return result;
}

double __cdecl return_bound_range_double_(double t, double tMin, double tMax)
{
    //return __sub_005909D0(t, tMin, tMax);
    auto result = tMin;
    if (t >= tMin)
    {
        result = t;
        if (tMax < t)
            return tMax;
    }
    return result;
}

int32_t __cdecl is_blocked_area(CStaticFoothold* pfh1, CStaticFoothold* pfh2, long x, long y)
{
    //TODO verify
    //return __sub_00590770(pfh1, pfh2, x, y);
    int x1_1 = pfh1->GetX1(), y1_1 = pfh1->GetY1();
    int x2_1 = pfh1->GetX2(), y2_1 = pfh1->GetY2();
    int x1_2 = pfh2->GetX1(), y1_2 = pfh2->GetY1();
    int x2_2 = pfh2->GetX2(), y2_2 = pfh2->GetY2();

    // Cross product to determine relative positions
    int cross1 = (x2_1 - x1_1) * (y2_2 - y1_1) - (x2_2 - x1_1) * (y2_1 - y1_1);
    int cross2 = (y - y1_1) * (x2_1 - x1_1) - (x - x1_1) * (y2_1 - y1_1);
    int cross3 = (y - y1_2) * (x2_2 - x1_2) - (x - x1_2) * (y2_2 - y1_2);

    if (cross1 <= 0)
    {
        if (cross2 <= 0 && cross3 <= 0) return 0;
    }
    else
    {
        if (cross2 <= 0 || cross3 <= 0) return 0;
    }

    return 1; // The point is inside a blocked area
}

uint32_t __fastcall _ZtlSecureTear_CLadderOrRope__(CLadderOrRope* arg0, CLadderOrRope** arg1)
{
    return __sub_00591350(arg0, arg1);
}

void __cdecl AccSpeed(double& v, double f, double m, double vMax, double tSec)
{
    //return __sub_00590850(v, f, m, vMax, tSec);
    if (vMax >= 0.0)
    {
        if (f <= 0.0)
        {
            if (-vMax < v)
            {
                auto v6 = -vMax;
                auto v7 = f / m * tSec + v;
                v = v7;
                if (v7 < v6)
                    v = v6;
            }
        }
        else if (vMax > v)
        {
            auto v5 = f / m * tSec + v;
            v = v5;
            if (v5 > vMax)
                v = vMax;
        }
    }
}

long __cdecl get_cross_product(long xOrg, long yOrg, long x1, long y1, long x2, long y2)
{
    //return __sub_00590740(xOrg, yOrg, x1, y1, x2, y2);
    return (y2 - yOrg) * (x1 - xOrg) - (y1 - yOrg) * (x2 - xOrg);
}
