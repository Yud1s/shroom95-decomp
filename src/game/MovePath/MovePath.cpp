// MovePath.cpp
#include "MovePath.hpp"
#include "MovePath_regen.ipp"

CMovePath::~CMovePath()
{
}

void CMovePath::_dtor_0()
{
    //return __sub_00266CD0(this, nullptr);
    this->~CMovePath();
}

CMovePath::CMovePath(const CMovePath& arg0)
{
    _ctor_1(arg0);
}

void CMovePath::_ctor_1(const CMovePath& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMovePath::CMovePath()
{
}

void CMovePath::_ctor_0()
{
    //return __sub_00266CA0(this, nullptr);
    new(this) CMovePath();
}

void CMovePath::Decode(CInPacket& iPacket, int32_t bPassive)
{
    __sub_00267920(this, nullptr, iPacket, bPassive);
}

void CMovePath::Encode(COutPacket& oPacket, int32_t* pbPassive)
{
    __sub_00266E20(this, nullptr, oPacket, pbPassive);
}

long CMovePath::GetStartPositionX()
{
    return _ZtlSecureGet_m_x();
}

long CMovePath::GetStartPositionY()
{
    return _ZtlSecureGet_m_y();
}

long CMovePath::GetEndPositionX()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CMovePath::GetEndPositionY()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CMovePath::GetHeadPositionX()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CMovePath::GetHeadPositionY()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

unsigned char CMovePath::GetLastMoveAction()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

short CMovePath::GetLastFoothold()
{
    return m_elemLast.fh;
}

short CMovePath::GetLastFootholdStepOn()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CMovePath::IsEmpty()
{
    return m_lElem.IsEmpty();
}

CMovePath::ELEM& CMovePath::GetLastElement()
{
    return *m_lElem.GetTailPosition();
}

tagRECT CMovePath::GetMoveRect()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZXString<char> CMovePath::DumpPosition()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CMovePath::DumpMovePath()
{
    UNIMPLEMENTED;
}

void CMovePath::SetForcedFlush()
{
    m_bForcedFlush = true;
}

void CMovePath::Init(int32_t bSend, int32_t bShortUpdate, long x, long y, long vx, long vy, long nMoveAction,
                     CStaticFoothold* pfh, CLadderOrRope* pLR)
{
    //__sub_002668E0(this, nullptr, bSend, bShortUpdate, x, y, vx, vy, nMoveAction, pfh, pLR);
    m_bShortUpdate = bShortUpdate;

    _ZtlSecurePut_m_x(x);
    _ZtlSecurePut_m_y(y);
    _ZtlSecurePut_m_vx(vx);
    _ZtlSecurePut_m_vy(vy);

    m_elemLast.nAttr = 0;
    m_elemLast.x = x;
    m_elemLast.y = y;
    m_elemLast.vx = vx;
    m_elemLast.vy = vy;
    m_elemLast.fh = pfh ? pfh->GetSN() : pLR ? -pLR->dwSN : 0;
    m_elemLast.bMoveAction = nMoveAction;
    m_elemLast.tElapse = 0;
    m_elemLast.xOffset = 0;
    m_elemLast.yOffset = 0;
    m_tGatherDuration = 0;

    _ZtlSecurePut_m_tInterval(30);
    _ZtlSecurePut_m_tOffset(0);
    _ZtlSecurePut_m_tReceived(0);


    m_usRandCnt = 0;
    m_usActualRandCnt = 0;
    m_lElem.RemoveAll();
}

void CMovePath::MakeMovePath(long nAttr, const CStaticFoothold* pfh, const CStaticFoothold* pfhStart,
                             const CLadderOrRope* pLR, long x, long y, long vx, long vy, long nMoveAction, long tElapse,
                             long xOffset, long yOffset)
{
    __sub_00267C90(this, nullptr, nAttr, pfh, pfhStart, pLR, x, y, vx, vy, nMoveAction, tElapse, xOffset, yOffset);
}

void CMovePath::AddNewElem(long nAttr, const CStaticFoothold* pfh, const CStaticFoothold* pfhFallStart,
                           const CLadderOrRope* pLR, long x, long y, long vx, long vy, long nMoveAction, long xOffset,
                           long yOffset)
{
    //__sub_00267E70(this, nullptr, nAttr, pfh, pfhFallStart, pLR, x, y, vx, vy, nMoveAction, xOffset, yOffset);
    auto elem = m_lElem.AddTail();
    elem.fh = pfh ? pfh->GetSN() : pLR ? -pLR->dwSN : 0;
    elem.fhFallStart = pfhFallStart ? pfhFallStart->GetSN() : 0;
    elem.nAttr = nAttr;
    elem.x = x;
    elem.y = y;
    elem.vx = vx;
    elem.vy = vy;
    elem.bMoveAction = nMoveAction;
    elem.xOffset = xOffset;
    elem.yOffset = yOffset;
    elem.usRandCnt = m_usRandCnt;
    elem.usActualRandCnt = m_usActualRandCnt;
}

void CMovePath::SetStatChangedPoint(unsigned char bStat)
{
    //__sub_00267F30(this, nullptr, bStat);
    auto elem = m_lElem.AddTail();
    elem.nAttr = 9;
    elem.bStat = bStat;
}

int32_t CMovePath::IsTimeForFlush(int32_t bFly, int32_t bDynamicFoothold)
{
    //return __sub_00266870(this, nullptr, bFly, bDynamicFoothold);
    if (m_lElem.IsEmpty())
        return false;

    const auto t = m_bShortUpdate ? (bDynamicFoothold != 0 ? 200 : 500) : 1000;
    if (m_tGatherDuration < t)
    {
        return false;
    }

    if (m_bShortUpdate || bFly)
    {
        return true;
    }
    auto tail = m_lElem.GetTailPosition();
    if (!tail)
    {
        return false;
    }

    while (tail->fh <= 0)
    {
        if (!m_lElem.GetPrev(tail))
        {
            return false;
        }
    }

    return true;
}

int32_t CMovePath::Flush(COutPacket& oPacket, int32_t bFly, CMovePath* oPath)
{
    //TODO fix this
    if (m_lElem.IsEmpty())
        return 0;
    return __sub_00268160(this, nullptr, oPacket, bFly, oPath);

    /*
    m_tGatherDuration = 0;
    ZList<CMovePath::ELEM> lElem;
    if (!m_bShortUpdate && !bFly)
    {
        auto cur = m_lElem.GetTailPosition();
        while (cur && cur->fh <= 0)
        {
            m_tGatherDuration += cur->tElapse;
            m_lElem.GetPrev(cur);
        }

        if (cur)
        {
            m_lElem.GetNext(cur);
            lElem.MoveAfter(m_lElem, cur, nullptr, nullptr);
        }
        else
        {
            m_tGatherDuration = 0;
        }
    }

    auto tail = m_lElem.GetTailPosition();
    bool flag = true;
    if (!tail)
        return 0;


    if (m_bForcedFlush || tail->nAttr || tail->x != m_elemLast.x || tail->y != m_elemLast.y || tail->vx != m_elemLast.vx
        || tail->vy != m_elemLast.vy || tail->bMoveAction != m_elemLast.bMoveAction)
    {
        flag = false;
    }

    if (oPath)
    {
        for (auto& elem : m_lElem)
        {
            oPath->m_lElem.AddTail(elem);
            oPath->_ZtlSecurePut_m_tReceived(oPath->_ZtlSecureGet_m_tReceived() + elem.tElapse);
        }
    }


    Encode(oPacket, nullptr);
    _ZtlSecurePut_m_vx(m_elemLast.vx);
    _ZtlSecurePut_m_vy(m_elemLast.vy);
    _ZtlSecurePut_m_x(m_elemLast.x);
    _ZtlSecurePut_m_y(m_elemLast.y);

    if (flag)
    {
        for (auto& elem : m_lElem)
        {
            if (elem.nAttr == 9)
            {
                bFly = false;
                break;
            }
        }
    }


    m_lElem.RemoveAll();
    m_lElem.MoveAfter(lElem, nullptr, nullptr, nullptr);
    m_aKeyPadState.RemoveAll();
    m_aKeyPadStateByFoothold.RemoveAll();
    m_bForcedFlush = false;

    return bFly;*/
}

void CMovePath::SetKeyPadState(int32_t bLeftKeyPressed, int32_t bRightKeyPressed, int32_t bUpKeyPressed,
                               int32_t bDownKeyPressed)
{
    //__sub_002673C0(this, nullptr, bLeftKeyPressed, bRightKeyPressed, bUpKeyPressed, bDownKeyPressed);

    auto state = bDownKeyPressed | (2
        * (bUpKeyPressed | (2 * (bRightKeyPressed | (2 * bLeftKeyPressed)))));
    m_aKeyPadState.Insert(state);
}

void CMovePath::SetKeyPadStateByFoothold(int32_t bLeftKeyPressed, int32_t bRightKeyPressed, int32_t bUpKeyPressed,
                                         int32_t bDownKeyPressed)
{
    //__sub_002673C0(this, nullptr, bLeftKeyPressed, bRightKeyPressed, bUpKeyPressed, bDownKeyPressed);
    UNIMPLEMENTED;
}

long CMovePath::GetGatherDuration() const
{
    return m_tGatherDuration;
}

int32_t CMovePath::CalcPassivePos(double& h3, double& h4, double& h1, double& xn, short& h2, long& arg5, int64_t& arg6,
                                  double& arg7, double& arg8)
{
    return __sub_002673F0(this, nullptr, h3, h4, h1, xn, h2, arg5, arg6, arg7, arg8);
}

void CMovePath::OnMovePacket(CInPacket& iPacket, int32_t bPassive)
{
    __sub_002683F0(this, nullptr, iPacket, bPassive);
}

void CMovePath::DiscardByInterrupt(long nMoveType, CVecCtrl* pvc, int32_t bNotForceLanding)
{
    __sub_00267F60(this, nullptr, nMoveType, pvc, bNotForceLanding);
}

long CMovePath::GetPassiveRemain()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const CMovePath::ELEM& CMovePath::GetElemLast() const
{
    return m_elemLast;
}

uint16_t CMovePath::GetRandCnt() const
{
    return m_usRandCnt;
}

uint16_t CMovePath::GetActualRandCnt() const
{
    return m_usActualRandCnt;
}

void CMovePath::SetRandCnt(uint16_t arg0)
{
    m_usRandCnt = arg0;
}

void CMovePath::SetActualRandCnt(uint16_t arg0)
{
    m_usActualRandCnt = arg0;
}

_ZTL_SEC_GETSETI(long, CMovePath, m_tInterval)
_ZTL_SEC_GETSETI(long, CMovePath, m_tOffset)
_ZTL_SEC_GETSETI(long, CMovePath, m_tReceived)
_ZTL_SEC_GETSETI(short, CMovePath, m_x)
_ZTL_SEC_GETSETI(short, CMovePath, m_y)
_ZTL_SEC_GETSETI(short, CMovePath, m_vx)
_ZTL_SEC_GETSETI(short, CMovePath, m_vy)

CMovePath& CMovePath::operator=(const CMovePath& arg0)
{
    return _op_assign_52(this, arg0);
}

CMovePath& CMovePath::_op_assign_52(CMovePath* pThis, const CMovePath& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CMovePath::ELEM::ELEM()
{
}

void CMovePath::ELEM::_ctor_0()
{
    new(this) ELEM();
}

ZXString<char> CMovePath::ELEM::ToString()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void __cdecl CalcHermiteSplineCoeff(long t, long T, double& h1, double& h2, double& h3, double& h4)
{
    //return __sub_00266400(t, T, h1, h2, h3, h4);
    auto v6 = (double)t;
    auto v7 = v6 / (double)T;
    auto v8 = v7 * v7 * v7 * 2.0;
    auto v9 = v7 * v7 * 3.0;
    h1 = v8 - v9 + 1.0;
    h2 = v9 - v8;
    h4 = v6 / 1000.0;
    auto v10 = v7 * v7;
    h3 = v6 / 1000.0 * (v10 - 2.0 * v7 + 1.0);
    h4 = (v10 - v7) * h4;
}
