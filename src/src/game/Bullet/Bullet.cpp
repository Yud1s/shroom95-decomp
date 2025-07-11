// Bullet.cpp
#include "Bullet.hpp"
#include "Bullet_regen.ipp"

CBullet::~CBullet()
{
}

void CBullet::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CBullet::CBullet(const CBullet& arg0)
{
    _ctor_1(arg0);
}

void CBullet::_ctor_1(const CBullet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CBullet::CBullet(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget)
{
    //_ctor_0(tStart, tEnd, ptStart, ptEnd, pVecTarget);
    m_tStart = tStart;
    m_tEnd = tEnd;
    m_ptStart = ptStart;
    m_ptEnd = ptEnd;
    m_pVecTarget = pVecTarget;
}

void CBullet::_ctor_0(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd, _x_com_ptr<IWzVector2D> pVecTarget)
{
    /*return __sub_00076F10(this, nullptr, tStart, tEnd, CreateNakedParam(ptStart), CreateNakedParam(ptEnd),
                          CreateNakedParam(pVecTarget));*/
    new(this) CBullet(tStart, tEnd, ptStart, ptEnd, pVecTarget);
}

int32_t CBullet::NeedsUpdate(long tCur)
{
    return tCur - this->m_tEnd < 0 && tCur - this->m_tStart > 0;
}

int32_t CBullet::Initialize()
{
    //return __sub_00076F80(this, nullptr);
    if (m_pLayer)
        return true;

    if (!m_pOrigin)
    {
        m_pOrigin = CreateBulletOrigin();
    }

    if (m_pOrigin && !m_pLayer)
    {
        m_pLayer = PrepareBulletLayer(m_pOrigin, m_bClockwise);
    }

    return m_pOrigin && m_pLayer;
}

int32_t CBullet::CallUpdate(long tCur)
{
    //return __sub_00077060(this, nullptr, tCur);
    if ( !NeedsUpdate(tCur) )
        return tCur - this->m_tEnd >= 0;
    if ( Initialize() )
        return this->Update(tCur);
    return 1;
}

_x_com_ptr<IWzVector2D> CBullet::CreateBulletOrigin()
{
    //return __sub_00077550(this, nullptr);
    auto dx = m_ptEnd.x - m_ptStart.x;
    auto dy = m_ptEnd.y - m_ptStart.y;

    if (dx || dy)
    {
        auto dist = sqrt(dx* dx + dy * dy);

        auto vec = G_PCOM.CreateVector2D();
        int targetX = 0, targetY = 0;
        if (m_pVecTarget)
        {
            vec->PutOrigin(m_pVecTarget);
            m_pVecTarget->raw__GetSnapshot(&targetX, &targetY, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, vtMissing);
        }

        vec->RelMove(m_ptStart.x - targetX, m_ptStart.y - targetY, vtMissing, vtMissing);
        vec->RelMove(m_ptEnd.x - targetX, m_ptEnd.y - targetY, Ztl_variant_t(m_tEnd), vtMissing);

        double dDx = dx;
        double dDy = dy;
        auto v32 = std::atan2(-(dDy / dist), -(dDx / dist)) * 180.0 / _D_PI__8;
        vec->Putra(v32);

        if (v32 > 90. && v32 < 270.)
        {
            vec->Putra(v32 - 180.);
            m_bClockwise = true;
        }

        return _x_com_ptr<IWzVector2D>(vec);
    }

    return {};
}

_x_com_ptr<IWzGr2DLayer> CBullet::PrepareBulletLayer(_x_com_ptr<IWzVector2D> arg0, int32_t arg1)
{
    return {};
}

int32_t CBullet::Update(long tCur)
{
    return 0;
}

_x_com_ptr<IWzGr2DLayer> CBullet::GetLayer()
{
    return m_pLayer;
}

_x_com_ptr<IWzVector2D> CBullet::GetOrigin()
{
    return m_pOrigin;
}

int32_t CBullet::IsClockwise()
{
    return m_bClockwise;
}

_x_com_ptr<IWzVector2D> CBullet::GetVecTarget()
{
    //return __sub_00077550(this, nullptr);
    UNIMPLEMENTED;
}

long CBullet::GetStartTime()
{
    return this->m_tStart;
}

long CBullet::GetEndTime()
{
     return this->m_tEnd;
}

CBullet& CBullet::operator=(const CBullet& arg0)
{
    return _op_assign_15(this, arg0);
}

CBullet& CBullet::_op_assign_15(CBullet* pThis, const CBullet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}


CFadeoutBullet::~CFadeoutBullet()
{
}

void CFadeoutBullet::_dtor_0()
{
    return __sub_0023C500(this, nullptr);
}

CFadeoutBullet::CFadeoutBullet(const CFadeoutBullet& arg0)
{
    _ctor_1(arg0);
}

void CFadeoutBullet::_ctor_1(const CFadeoutBullet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFadeoutBullet::CFadeoutBullet(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd,
                               _x_com_ptr<IWzVector2D> pVecTarget) : CBullet(tStart, tEnd, ptStart, ptEnd, pVecTarget)
{
    //TODO(game) _ctor_0(tStart, tEnd, ptStart, ptEnd, pVecTarget);
}

void CFadeoutBullet::_ctor_0(long tStart, long tEnd, tagPOINT ptStart, tagPOINT ptEnd,
                             _x_com_ptr<IWzVector2D> pVecTarget)
{
    /*return __sub_0023C450(this, nullptr, tStart, tEnd, CreateNakedParam(ptStart), CreateNakedParam(ptEnd),
                          CreateNakedParam(pVecTarget));*/
    new(this) CFadeoutBullet(tStart, tEnd, ptStart, ptEnd, pVecTarget);
}

void CFadeoutBullet::OnRemoved()
{
    //__sub_0023C500(this, nullptr);
    if (auto layer = GetLayer())
    {
        auto t = layer->GetcurrentTime();
        Fadeout(t + 200);
    }
}

int32_t CFadeoutBullet::Update(long tCur)
{
    return __sub_00077320(this, nullptr, tCur);
}

void CFadeoutBullet::Fadeout(long tEnd)
{
    __sub_000770B0(this, nullptr, tEnd);
}

CFadeoutBullet& CFadeoutBullet::operator=(const CFadeoutBullet& arg0)
{
    return _op_assign_6(this, arg0);
}

CFadeoutBullet& CFadeoutBullet::_op_assign_6(CFadeoutBullet* pThis, const CFadeoutBullet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFadeoutBullet::Container::~Container()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CFadeoutBullet::Container::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFadeoutBullet::Container::Container(const CFadeoutBullet::Container& arg0)
{
    _ctor_1(arg0);
}

void CFadeoutBullet::Container::_ctor_1(const CFadeoutBullet::Container& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFadeoutBullet::Container::Container()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CFadeoutBullet::Container::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CFadeoutBullet::Container::OnRemoved()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CFadeoutBullet::Container& CFadeoutBullet::Container::operator=(const CFadeoutBullet::Container& arg0)
{
    return _op_assign_4(this, arg0);
}

CFadeoutBullet::Container& CFadeoutBullet::Container::_op_assign_4(CFadeoutBullet::Container* pThis,
                                                                   const CFadeoutBullet::Container& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CFadeoutBullet::OnRemovedFunc::operator()(CFadeoutBullet& arg0)
{
    return _op_call_0(this, arg0);
}

int32_t CFadeoutBullet::OnRemovedFunc::_op_call_0(CFadeoutBullet::OnRemovedFunc* pThis, CFadeoutBullet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
