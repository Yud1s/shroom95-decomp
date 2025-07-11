// WvsPhysicalSpace2D.cpp
#include "WvsPhysicalSpace2D.hpp"

#include "spdlog/spdlog.h"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};

//static TRSTree<long, ZRef<CStaticFoothold>, 2, 4, 2> Fake_TRSTree{};
typedef TFHTree<ZRef<CStaticFoothold>> FHTree;

#include "WvsPhysicalSpace2D_regen.ipp"

CAttrField::~CAttrField() = default;

void CAttrField::_dtor_0()
{
    this->~CAttrField();
}

CAttrField::CAttrField(const CAttrField& arg0)
{
    _ctor_1(arg0);
}

void CAttrField::_ctor_1(const CAttrField& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAttrField::CAttrField()
{
    walk = 1.;
    drag = 1.;
    fly = 1.;
    g = 1.;
}

void CAttrField::_ctor_0()
{
    new(this) CAttrField();
}

bool CAttrField::IsSwimMap() const
{
    return nMapType.GetData() == SWIM;
}

bool CAttrField::IsUserFlyMap() const
{
    return nMapType.GetData() == USERFLY;
}

void CAttrField::SetSwimMap()
{
    nMapType = SWIM;
}

void CAttrField::SetUserFlyMap()
{
    nMapType = USERFLY;
}

CAttrField& CAttrField::operator=(CAttrField& arg0)
{
    return _op_assign_7(this, arg0);
}

CAttrField& CAttrField::_op_assign_7(CAttrField* pThis, CAttrField& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAttrFoothold::~CAttrFoothold()
{
}

void CAttrFoothold::_dtor_0()
{
    this->~CAttrFoothold();
}

CAttrFoothold::CAttrFoothold(const CAttrFoothold& arg0)
{
    _ctor_1(arg0);
}

void CAttrFoothold::_ctor_1(const CAttrFoothold& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAttrFoothold::CAttrFoothold()
{
    this->walk = 1.;
    drag = 1.;
    force = 0.;
    forbidfalldown = false;
    cantThrough = false;
}

void CAttrFoothold::_ctor_0()
{
    //return __sub_00614C30(this, nullptr);
    new(this) CAttrFoothold();
}

CAttrFoothold& CAttrFoothold::operator=(CAttrFoothold& arg0)
{
    return _op_assign_3(this, arg0);
}

CAttrFoothold& CAttrFoothold::_op_assign_3(CAttrFoothold* pThis, CAttrFoothold& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWvsPhysicalSpace2D::~CWvsPhysicalSpace2D()
{

}

void CWvsPhysicalSpace2D::_dtor_0()
{
    //return __sub_00615F90(this, nullptr);
    this->~CWvsPhysicalSpace2D();
}

CWvsPhysicalSpace2D::CWvsPhysicalSpace2D(const CWvsPhysicalSpace2D& arg0)
{
    _ctor_1(arg0);
}

void CWvsPhysicalSpace2D::_ctor_1(const CWvsPhysicalSpace2D& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWvsPhysicalSpace2D::CWvsPhysicalSpace2D()
{
    ms_pInstance = this;

    auto phys = get_rm()->GetObjectT<IWzProperty>(L"Map/Physics.img");

    m_constants = new CONSTANTS();
    auto v = phys->Getitem(L"walkForce");
    m_constants->dWalkForce = get_double(v, 0.);


    v = phys->Getitem(L"walkSpeed");
    m_constants->dWalkSpeed = get_double(v, 0.);

    v = phys->Getitem(L"walkDrag");
    m_constants->dWalkDrag = get_double(v, 0.);

    v = phys->Getitem(L"slipForce");
    m_constants->dSlipForce = get_double(v, 0.);

    v = phys->Getitem(L"slipSpeed");
    m_constants->dSlipSpeed = get_double(v, 0.);

    v = phys->Getitem(L"floatDrag1");
    m_constants->dFloatDrag1 = get_double(v, 0.);

    v = phys->Getitem(L"floatDrag2");
    m_constants->dFloatDrag2 = get_double(v, 0.);

    v = phys->Getitem(L"floatCoefficient");
    m_constants->dFloatCoefficient = get_double(v, 0.);

    v = phys->Getitem(L"swimForce");
    m_constants->dSwimForce = get_double(v, 0.);

    v = phys->Getitem(L"swimSpeed");
    m_constants->dSwimSpeed = get_double(v, 0.);

    v = phys->Getitem(L"flyForce");
    m_constants->dFlyForce = get_double(v, 0.);

    v = phys->Getitem(L"flySpeed");
    m_constants->dFlySpeed = get_double(v, 0.);

    v = phys->Getitem(L"gravityAcc");
    m_constants->dGravityAcc = get_double(v, 0.);
    //m_constants->dGravityAcc = 1.;

    v = phys->Getitem(L"fallSpeed");
    m_constants->dFallSpeed = get_double(v, 0.);
    //m_constants->dFallSpeed = 1.;

    v = phys->Getitem(L"jumpSpeed");
    m_constants->dJumpSpeed = get_double(v, 0.);

    v = phys->Getitem(L"maxFriction");
    m_constants->dMaxFriction = get_double(v, 0.);

    v = phys->Getitem(L"minFriction");
    m_constants->dMinFriction = get_double(v, 0.);

    v = phys->Getitem(L"swimSpeedDec");
    m_constants->dSwimSpeedDec = get_double(v, 0.);

    v = phys->Getitem(L"flyJumpDec");
    m_constants->dFlyJumpDec = get_double(v, 0.);
}

void CWvsPhysicalSpace2D::_ctor_0()
{
    //return __sub_006173E0(this, nullptr);
    new(this) CWvsPhysicalSpace2D();
}

const tagRECT& CWvsPhysicalSpace2D::GetMBR() const
{
    return m_rcMBR;
}

auto CWvsPhysicalSpace2D::GetBaseZMass() -> long
{
    return m_nBaseZMass;
}

long CWvsPhysicalSpace2D::GetMassCount()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CWvsPhysicalSpace2D::GetZMassByIndex(long arg0)
{
    return m_aIndexZMass[arg0];
}

const RANGE& CWvsPhysicalSpace2D::GetMassRange(long arg0)
{
    return m_aMassRange[arg0];
}

const ZArray<unsigned long>& CWvsPhysicalSpace2D::GetMassFootholdList(long arg0)
{
    return m_aaMassFootholdList[arg0];
}


long getPropInt(_com_ptr_t<_com_IIID<IWzProperty, &__uuidof(IWzProperty)>>& prop, uint32_t key, long nDefault = 0)
{
    auto v = prop->Getitem(StringPool::GetInstance().GetBSTR(key));
    return get_int32(v, nDefault);
}

void CWvsPhysicalSpace2D::LoadFoothold(_com_ptr_t<_com_IIID<IWzProperty, &__uuidof(IWzProperty)>>& prop, long page,
                                       long zMass, long dwSn)
{
    auto x1 = getPropInt(prop, 0x937);
    auto x2 = getPropInt(prop, 0x938);
    auto y1 = getPropInt(prop, 0x939);
    auto y2 = getPropInt(prop, 0x93A);
    auto drag = getPropInt(prop, 0xBC6);
    auto force = getPropInt(prop, 0xBC7);
    auto forbidFalldown = getPropInt(prop, 0x1152);
    auto v = prop->Getitem(L"cantThrough");
    auto cantThrough = get_int32(v, 0);
    auto snPrev = getPropInt(prop, 0x79F);
    auto snNext = getPropInt(prop, 0x7A0);

    auto crc = m_dwCRC;
    crc = CCrc32::GetCrc32((const uint8_t*)&x1, 4, crc, 0, 0, false);
    crc = CCrc32::GetCrc32((const uint8_t*)&y1, 4, crc, 0, 0, false);
    crc = CCrc32::GetCrc32((const uint8_t*)&x2, 4, crc, 0, 0, false);
    crc = CCrc32::GetCrc32((const uint8_t*)&y2, 4, crc, 0, 0, false);
    crc = CCrc32::GetCrc32((const uint8_t*)&drag, 4, crc, 0, 0, false);
    crc = CCrc32::GetCrc32((const uint8_t*)&force, 4, crc, 0, 0, false);
    crc = CCrc32::GetCrc32((const uint8_t*)&forbidFalldown, 4, crc, 0, 0, false);
    crc = CCrc32::GetCrc32((const uint8_t*)&cantThrough, 4, crc, 0, 0, false);
    crc = CCrc32::GetCrc32((const uint8_t*)&snPrev, 4, crc, 0, 0, false);
    crc = CCrc32::GetCrc32((const uint8_t*)&snNext, 4, crc, 0, 0, false);
    m_dwCRC = crc;

    auto atFh = new CAttrFoothold();
    atFh->drag = drag / 100.;
    atFh->force = force / 100.;
    atFh->forbidfalldown = forbidFalldown;
    atFh->cantThrough = cantThrough;

    ZRef fh(new CStaticFoothold(dwSn, x1, y1, x2, y2, page, zMass, snPrev, snNext, atFh), true);

    m_mFoothold.Insert(dwSn, fh);
    m_rtFoothold.InsertData(x1, y1, x2, y2, &fh);

    auto old = m_aMassRange.GetCount();
    if (old <= zMass)
    {
        m_aMassRange._Realloc(zMass + 1, 0, ZAllocHelper(1));
        //m_aaMassFootholdList._Realloc(zMass + 1, 0, ZAllocHelper(1));


        while (old < zMass)
        {
            m_aMassRange[old].low = 0x7FFFFFFF;
            m_aMassRange[old].high = 0x80000000;
            old++;
        }
    }

    spdlog::info("zmass: {} , {} {}", zMass, m_aaMassFootholdList.GetCount(), m_aaMassFootholdList.GetCapacity());
    if (zMass >= m_aaMassFootholdList.GetCount())
    {
        m_aaMassFootholdList._Realloc(zMass + 1, 0, ZAllocHelper(1));
        spdlog::info("Alloc: Mass count: {}", m_aaMassFootholdList.GetCount());
    }


    auto xMin = std::min(x1, x2);
    auto xMax = std::max(x1, x2);
    auto yMin = std::min(y1, y2);
    auto yMax = std::max(y1, y2);

    if (m_rcMBR.left > xMin + 30)
    {
        m_rcMBR.left = xMin + 30;
    }
    if (m_rcMBR.right < xMax - 30)
    {
        m_rcMBR.right = xMax - 30;
    }
    if (m_rcMBR.top > yMin - 300)
    {
        m_rcMBR.top = xMin - 300;
    }

    if (x1 != x2)
    {
        yMax += 10;
        if (m_rcMBR.bottom < yMax)
        {
            m_rcMBR.bottom = yMax;
        }
    }

    spdlog::info("MAss count: {}", m_aaMassFootholdList.GetCount());
    if (m_aaMassFootholdList[zMass].IsEmpty())
    {
        m_aIndexZMass.Insert(zMass);
    }
    m_aaMassFootholdList[zMass].Insert(dwSn);
}

void
CWvsPhysicalSpace2D::Load(_x_com_ptr<IWzProperty> pPropFoothold, _x_com_ptr<IWzProperty> pLadderRope,
                          _x_com_ptr<IWzProperty> pInfo)
{
    /*auto& sp = StringPool::GetInstance();


    static bool constCRC = false;
    if (!constCRC)
    {
        constCRC = true;
        m_dwCRC = GetConstantCRC();
    }


    IUnknown* enm{};
    //TODO(game) might need to free
    Z_CHECK_HR(pPropFoothold->Get__NewEnum(&enm));
    _x_com_ptr<IEnumVARIANT> groupEnum((IEnumVARIANT*)enm);
    ULONG fetched = 0;

    while (true)
    {
        Ztl_variant_t vGroup;
        if (groupEnum->Next(1, &vGroup, &fetched))
        {
            break;
        }

        auto sGroup = DetachBSTR(vGroup);
        auto nGroup = _wtoi(sGroup);
        auto groupProp = pPropFoothold->GetItemT<IWzProperty>(sGroup);

        IUnknown* enmMass{};
        //TODO(game) might need to free
        Z_CHECK_HR(groupProp->Get__NewEnum(&enmMass));
        _x_com_ptr enmMassVar((IEnumVARIANT*)enmMass);
        while (true)
        {
            Ztl_variant_t vMass;
            fetched = 0;
            if (enmMassVar->Next(1, &vMass, &fetched))
            {
                break;
            }

            auto sMass = DetachBSTR(vMass);
            auto nMass = _wtoi(sMass);
            auto massProp = groupProp->GetItemT<IWzProperty>(sMass);

            IUnknown* enmSn{};
            //TODO(game) might need to free
            Z_CHECK_HR(massProp->Get__NewEnum(&enmSn));
            if (!enmSn)
            {
                break;
            }
            _x_com_ptr enmSnVar((IEnumVARIANT*)enmSn);
            while (true)
            {
                Ztl_variant_t vSn;
                fetched = 0;
                if (enmSnVar->Next(1, &vSn, &fetched))
                {
                    break;
                }

                auto sSn = DetachBSTR(vSn);
                auto nSn = _wtoi(sSn);
                auto fhProp = massProp->GetItemT<IWzProperty>(sSn);

                auto dwSN = nSn;
                auto zMass = nMass;
                auto page = nGroup;

                this->LoadFoothold(fhProp, page, zMass, dwSN);
            }
        }
    }*/


    __sub_00618AA0(this, nullptr, CreateNakedParam(pPropFoothold), CreateNakedParam(pLadderRope), CreateNakedParam(pInfo));
}

void CWvsPhysicalSpace2D::GetCrossCandidate(long x1, long y1, long x2, long y2,
                                            ZList<ZRef<CStaticFoothold>>& lCrossCandidate)
{
    //__sub_00116610(this, nullptr, x1, y1, x2, y2, lCrossCandidate);

    I2 i2;
    i2.l = std::min(x1, x2);
    i2.r = std::max(x1, x2);
    i2.t = std::min(y1, y2);
    i2.b = std::max(y1, y2);

    m_rtFoothold.raw_Search(nullptr, i2, lCrossCandidate);
}

CStaticFoothold* CWvsPhysicalSpace2D::GetFoothold(unsigned long dwSN)
{
    //return __sub_00117D10(this, nullptr, dwSN);
    ZRef<CStaticFoothold> pFoothold;
    if (dwSN && m_mFoothold.GetAt(dwSN, &pFoothold))
    {
        return pFoothold.op_arrow();
    }

    return nullptr;
}

CStaticFoothold* CWvsPhysicalSpace2D::GetFootholdAbove(long x, long y, long* pcy, long yMax)
{
    //return __sub_00616320(this, nullptr, x, y, pcy, yMax);
    if (yMax > y)
        return nullptr;


    ZList<ZRef<CStaticFoothold>> fhs;
    GetCrossCandidate(x - 1, yMax, x + 1, y + 1, fhs);
    CStaticFoothold* pfhAbove{};
    for (auto& fh: fhs)
    {
        if (fh->GetX1() < fh->GetX2() && fh->GetX1() <= x && fh->GetX2() >= x )
        {
            auto dx = fh->GetX2() - fh->GetX1();
            auto dy = fh->GetY2() - fh->GetY1();
            auto cur = fh->GetY1() + (x - fh->GetX1()) * dy / dx;
            if ( cur <= y && cur > yMax )
            {
                yMax = cur;
                *pcy = cur;
                pfhAbove = fh.op_arrow();
            }
        }
    }

    return pfhAbove;


    //return nullptr;
}

CStaticFoothold*
CWvsPhysicalSpace2D::GetFootholdAboveForRocketBooster(long x, long y, long yRangeMin, long yRangeMax, long& cyReturn)
{
    return __sub_006161C0(this, nullptr, x, y, yRangeMin, yRangeMax, cyReturn);
}

CStaticFoothold* CWvsPhysicalSpace2D::GetFootholdUnderneath(long x, long y, long* pcy, long yMin, long nRangeX)
{
    return __sub_00616430(this, nullptr, x, y, pcy, yMin, nRangeX);
}

CStaticFoothold* CWvsPhysicalSpace2D::GetFootholdClosest(long x, long y)
{
    return __sub_00614270(this, nullptr, x, y);
}

void CWvsPhysicalSpace2D::GetFootholdRange(long x, long y1, long y2, ZList<long>& lPosition)
{
    __sub_00616550(this, nullptr, x, y1, y2, lPosition);
}

int32_t CWvsPhysicalSpace2D::CanGoThrough(long xm1, long ym1, long& xm2, long& ym2, long nZMass)
{
    return __sub_00616680(this, nullptr, xm1, ym1, xm2, ym2, nZMass);
}

int32_t CWvsPhysicalSpace2D::CanWalkThrough(ZRef<CStaticFoothold> pfhFrom, ZRef<CStaticFoothold> pfhTo)
{
    return __sub_00615010(this, nullptr, CreateNakedParam(pfhFrom), CreateNakedParam(pfhTo));
}

long CWvsPhysicalSpace2D::FindRightEndX_CanWalkThrough(ZRef<CStaticFoothold> arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CWvsPhysicalSpace2D::FindLeftEndX_CanWalkThrough(ZRef<CStaticFoothold> arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CLadderOrRope* CWvsPhysicalSpace2D::GetLadderOrRope(long x1, long y1, long x2, long y2)
{
    //return __sub_00613860(this, nullptr, x1, y1, x2, y2);
    auto xMin = std::min(x1, x2) - 10;
    auto xMax = std::max(x1, x2) + 10;
    auto yMin = std::min(y1, y2);
    auto yMax = std::max(y1, y2);


    for (auto& lr: m_aLadderOrRope)
    {
        if ( xMin <= lr.x && lr.x <= xMax && yMin <= lr.y2 && lr.y1 <= yMax )
            return &lr;
    }

    return nullptr;


}

CLadderOrRope* CWvsPhysicalSpace2D::GetLadderOrRopeBySN(unsigned long arg0)
{
    for (auto& lr: m_aLadderOrRope)
    {
        if (lr.dwSN == arg0)
            return &lr;
    }

    return nullptr;
}

CAttrField* CWvsPhysicalSpace2D::GetFieldAttr()
{
    return m_pAttrField;
}

void CWvsPhysicalSpace2D::SetFieldAttr()
{
    m_pAttrField = new CAttrField();
    //auto& stage = get_stage();
    if (auto field = get_field())
    {
        auto fs = field->GetFs();
        fs = fs == 0. ? 1. : fs;
        m_pAttrField->walk = fs;
        m_pAttrField->drag = fs;


        if (field->IsSwimmingMap())
        {
            m_pAttrField->nMapType = CAttrField::SWIM;
        }
        else if (field->IsFlyingMap())
        {
            m_pAttrField->nMapType = CAttrField::USERFLY;
        }

        auto& swimRect = field->m_aSwimRect;
        m_pAttrField->icSwimArea.AddToArea(swimRect.GetData(), swimRect.GetCount());
    }
    //__sub_00616A20(this, nullptr);
}

void CWvsPhysicalSpace2D::FootHoldMove(unsigned long dwSN, long x, long y)
{
    //__sub_0061A580(this, nullptr, dwSN, x, y);
    spdlog::info("Foothold move not implemented!!!");
    return;
}

void CWvsPhysicalSpace2D::FootHoldStateChange(unsigned long dwSN, long nState)
{
    if (const auto fh = GetFoothold(dwSN))
    {
        fh->SetFootHoldState(nState);
    }
    //__sub_00615220(this, nullptr, dwSN, nState);
}

unsigned long CWvsPhysicalSpace2D::GetCRC()
{
    //return __sub_00612CD0(this, nullptr);
    return m_dwCRC;
}

unsigned long CWvsPhysicalSpace2D::GetConstantCRC()
{
    return __sub_00612CD0(this, nullptr);
}

CWvsPhysicalSpace2D& CWvsPhysicalSpace2D::operator=(const CWvsPhysicalSpace2D& arg0)
{
    return _op_assign_29(this, arg0);
}

CWvsPhysicalSpace2D& CWvsPhysicalSpace2D::_op_assign_29(CWvsPhysicalSpace2D* pThis, const CWvsPhysicalSpace2D& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CStaticFoothold::~CStaticFoothold()
{
}

void CStaticFoothold::_dtor_0()
{
    //return __sub_00614F60(this, nullptr);
    this->~CStaticFoothold();
}

CStaticFoothold::CStaticFoothold(const CStaticFoothold& arg0)
{
    _ctor_1(arg0);
}

void CStaticFoothold::_ctor_1(const CStaticFoothold& arg0)
{
    new(this) CStaticFoothold(arg0);
}

CStaticFoothold::CStaticFoothold(unsigned long dwSN, long x1, long y1, long x2, long y2, long page, long ZMass,
                                 unsigned long dwSNPrev, unsigned long dwSNNext, CAttrFoothold* pAttrFoothold)
{
    //_ctor_0(dwSN, x1, y1, x2, y2, page, ZMass, dwSNPrev, dwSNNext, pAttrFoothold);
    m_x1 = x1;
    m_xReal1 = x1;

    m_y1 = y1;
    m_yReal1 = y1;

    m_x2 = x2;
    m_xReal2 = x2;

    m_y2 = y2;
    m_yReal2 = y2;

    m_lZMass = ZMass;
    m_pAttrFoothold = pAttrFoothold;

    m_dwSN = dwSN;
    m_dwSNPrev = dwSNPrev;
    m_dwSNNext = dwSNNext;
    m_nState = 1;


    const auto dx = static_cast<double>(x2 - x1);
    const auto dy = static_cast<double>(y2 - y1);
    m_len = sqrt(dx * dx + dy * dy);
    m_uvx = dx / m_len;
    m_uvy = dy / m_len;
}

void CStaticFoothold::_ctor_0(unsigned long dwSN, long x1, long y1, long x2, long y2, long page, long ZMass,
                              unsigned long dwSNPrev, unsigned long dwSNNext, CAttrFoothold* pAttrFoothold)
{
    //return __sub_00614E80(this, nullptr, dwSN, x1, y1, x2, y2, page, ZMass, dwSNPrev, dwSNNext, pAttrFoothold);
    new(this) CStaticFoothold(dwSN, x1, y1, x2, y2, page, ZMass, dwSNPrev, dwSNNext, pAttrFoothold);
}

unsigned long CStaticFoothold::GetSN() const
{
    return m_dwSN;
}

long CStaticFoothold::GetXReal1() const
{
    return m_xReal1;
}

long CStaticFoothold::GetYReal1() const
{
    return m_yReal1;
}

long CStaticFoothold::GetXReal2() const
{
    return m_xReal2;
}

long CStaticFoothold::GetYReal2() const
{
    return m_yReal2;
}

long CStaticFoothold::GetX1() const
{
    return m_x1;
}

long CStaticFoothold::GetY1() const
{
    return m_y1;
}

long CStaticFoothold::GetX2() const
{
    return m_x2;
}

long CStaticFoothold::GetY2() const
{
    return m_y2;
}

long CStaticFoothold::GetPage() const
{
    return m_lPage;
}

long CStaticFoothold::GetZMass() const
{
        return m_lZMass;
}

double CStaticFoothold::GetUVX() const
{
    return m_uvx;
}

double CStaticFoothold::GetUVY() const
{
    return m_uvy;
}

double CStaticFoothold::GetLen() const
{
    return m_len;
}

CStaticFoothold* CStaticFoothold::GetNextLink() const
{
    return m_pfhNext;
}

CStaticFoothold* CStaticFoothold::GetPrevLink() const
{
    return m_pfhPrev;
}

const CStaticFoothold* CStaticFoothold::GetForwardLink(const double d, const double posCur, const double len)
{
    //return __sub_00612B10(this, nullptr, d, posCur, len);
    //TODO verify
    if (d == 0.0) return this; // No movement

    long double remaining = (d > 0.0) ? (m_len - posCur) : posCur;
    long double distanceLeft = len - remaining;

    if (distanceLeft <= 0.0) return this; // Already at the limit

    auto current = this;
    while (current) {
        current = (d > 0.0) ? current->m_pfhNext : current->m_pfhPrev;
        if (!current) return nullptr; // Reached the end

        long double travelDist = (d > 0.0) ? current->m_len : 0.0;
        travelDist = (travelDist > distanceLeft) ? (current->m_len - travelDist) : travelDist;
        distanceLeft -= travelDist;

        if (distanceLeft <= 0.0) return current;
    }

    return nullptr; // Shouldn't reach here unless something went wrong
}

long CStaticFoothold::GetFootHoldState() const
{
    return m_nState;
}

int32_t CStaticFoothold::IsVertical() const
{
    return this->m_uvx <= 0.0;
    //return __sub_00612AF0(this, nullptr);
}

CAttrFoothold* CStaticFoothold::GetAttribute() const
{
    return m_pAttrFoothold.op_arrow();
}

void CStaticFoothold::SetPosition(long x1, long x2, long y1, long y2)
{
    m_x1 = x1;
    m_x2 = x2;
    m_y1 = y1;
    m_y2 = y2;

    auto dx = static_cast<double>(x2 - x1);
    auto dy = static_cast<double>(y2 - y1);
    m_len = sqrt(dx * dx + dy * dy);
    m_uvx = dx / m_len;
    m_uvy = dy / m_len;

    //__sub_00612C60(this, nullptr, x1, x2, y1, y2);
}

void CStaticFoothold::SetFootHoldState(long arg0)
{
    m_nState = arg0;
}

bool CStaticFoothold::CheckCollisionLeft(const CStaticFoothold& other) const
{
    return get_cross_product(m_x1, m_y1, m_x2, m_y2, other.m_x1, other.m_y1) < 0;
}

bool CStaticFoothold::CheckCollisionRight(const CStaticFoothold& other) const
{
    return get_cross_product(m_x1, m_y1, m_x2, m_y2, other.m_x2, other.m_y2) < 0;
}

double CStaticFoothold::CalcSlopeScale(double dx, double dy) const
{
    //TODO in theory dot product
    return m_uvx * dx + m_uvy * dy;
}

long CStaticFoothold::Det(long x, long y) const
{
    auto dx = m_x2 - m_x1;
    auto dy = m_y2 - m_y1;

    //return m_x1 * m_y2 + y *  - x * dy - fy1 * fx2;
    //TODO(game)
    return 0;
}

void CStaticFoothold::ValidateVectorInfo()
{
    //TODO __sub_00614F60(this, nullptr);
}

CStaticFoothold& CStaticFoothold::operator=(const CStaticFoothold& arg0)
{
    return _op_assign_26(this, arg0);
}

CStaticFoothold& CStaticFoothold::_op_assign_26(CStaticFoothold* pThis, const CStaticFoothold& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
