// PortalList.cpp
#include "PortalList.hpp"

static ZRefCounted_AllocHelper<ZRefCountedDummy<PORTAL>> FAKE_ZRefCounted_AllocHelper_ZRefCountedDummy_PORTAL{};

ZRefCountedDummy<PORTAL>* AllocPortal(void* p)
{
    auto pt = new ZRefCountedDummy<PORTAL>();
    return pt;
}

#include "PortalList_regen.ipp"

PORTAL::~PORTAL()
{
}

void PORTAL::_dtor_0()
{
    this->~PORTAL();
}

PORTAL::PORTAL(const PORTAL& arg0)
{
    _ctor_1(arg0);
}

void PORTAL::_ctor_1(const PORTAL& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

PORTAL::PORTAL()
{
}

void PORTAL::_ctor_0()
{
    new(this) PORTAL();
}

int32_t PORTAL::IsChangable()
{
    return nType == 4 || nType == 5;
}

PORTAL& PORTAL::operator=(const PORTAL& arg0)
{
    return _op_assign_4(this, arg0);
}

PORTAL& PORTAL::_op_assign_4(PORTAL* pThis, const PORTAL& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CPortalList::~CPortalList()
{
    ms_pInstance = nullptr;
}

void CPortalList::_dtor_0()
{
    //return __sub_002ABB40(this, nullptr);
    this->~CPortalList();
}

CPortalList::CPortalList(const CPortalList& arg0)
{
    _ctor_1(arg0);
}

void CPortalList::_ctor_1(const CPortalList& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CPortalList::CPortalList()
{
    //UNIMPLEMENTED; //_ctor_0();
    ms_pInstance = this;
}

void CPortalList::_ctor_0()
{
    //return __sub_002ABAE0(this, nullptr);
    new(this) CPortalList();
}

void CPortalList::RestorePortal(CField* pField, _x_com_ptr<IWzProperty> pPropPortal)
{
    __sub_002AD3C0(this, nullptr, pField, CreateNakedParam(pPropPortal));

    /*if (!pPropPortal)
        return;


    auto fieldId = pField->GetFieldID();
    m_dwPortalCrc = CCrc32::Get(fieldId, 0);

    IUnknown* enm{};
    //TODO(game) might need to free
    Z_CHECK_HR(pPropPortal->Get__NewEnum(&enm));
    _x_com_ptr<IEnumVARIANT> enumVar((IEnumVARIANT*)enm);


    auto& sp = StringPool::GetInstance();
    while (true)
    {
        ULONG fetched{};
        Ztl_variant_t vKey{};
        if (enumVar->Next(1, &vKey, &fetched))
        {
            break;
        }

        auto key = DetachBSTR(vKey);
        auto item = pPropPortal->GetItemT<IWzProperty>(key);


        ZRef<PORTAL> pt(ZAllocHelper(1));


        auto vName = item->Getitem(sp.GetBSTR(1749));
        pt->sName = DetachBSTR(vName);

        auto vTy = item->Getitem(sp.GetBSTR(1750));
        pt->nType = vTy.op_long();

        auto vX = item->Getitem(sp.GetBSTR(997));
        pt->ptPos.x = vX.op_long();
        auto vY = item->Getitem(sp.GetBSTR(998));
        pt->ptPos.y = vY.op_long();

        auto vHR = item->Getitem(sp.GetBSTR(5122));
        pt->nHRange = get_int32(vHR, 100);
        auto vVR = item->Getitem(sp.GetBSTR(5215));
        pt->nVRange = get_int32(vVR, 100);


        auto vTN = item->Getitem(sp.GetBSTR(1751));
        pt->nTMap = vTN.op_long();
        auto vTName = item->Getitem(sp.GetBSTR(1752));
        pt->sTName = DetachBSTR(vTName);


        auto vTN2 = item->Getitem(sp.GetBSTR(6128));
        if (get_int32(vTN2, 0))
            pt->nTMap = fieldId;

        auto hideTL = item->Getitem(sp.GetBSTR(3810));
        pt->bHideTooltip = get_int32(hideTL, 0);
        auto vDelayT = item->Getitem(sp.GetBSTR(6825));
        pt->nDelayTime = get_int32(vDelayT, 0);
        auto vOnce = item->Getitem(sp.GetBSTR(4357));
        pt->bOnlyOnce = get_int32(vOnce, 0);
        auto vVImpact = item->Getitem(sp.GetBSTR(5214));
        pt->nVImpact = get_int32(vVImpact, 0);
        auto vHImpact = item->Getitem(sp.GetBSTR(5120));
        pt->nHImpact = get_int32(vHImpact, 0);

        auto vReactorName = item->Getitem(sp.GetBSTR(5121));
        pt->sReactorName = DetachBSTR(vReactorName);
        auto vSessKey = item->Getitem(sp.GetBSTR(5962));
        pt->sSessionValueKey = DetachBSTR(vSessKey);
        auto vSessVal = item->Getitem(sp.GetBSTR(5963));
        pt->sSessionValue = DetachBSTR(vSessVal);


        //TODO crc

        if (pt->nType != 6)
        {
            m_aPortal.Insert(pt);
            _x_com_ptr<IWzGr2DLayer> layer;
            _x_com_ptr<IWzProperty> prop;
            switch (pt->nType)
            {
            case 2:
            case 4:
            case 7:
                prop = GetPropPV();
                layer = CAnimationDisplayer::LoadLayer(
                    prop,
                    false,
                    {},
                    pt->ptPos.x,
                    pt->ptPos.y,
                    {},
                    0xC0041F78,
                    255,
                    0

                );
                layer->Animate(GA_REPEAT, vtMissing, vtMissing);
                m_llVisiblePortal.AddTail(layer);
                break;
            case 3:
            case 9:
            case 0xC:
            case 0xD:
                m_aPortal_Collision.Insert(pt);
                break;
            case 0xA:
            case 0xB:
                m_aPortal_Hidden.Insert(pt);
                vName = item->Getitem(sp.GetBSTR(4402));
                pt->sImage = DetachBSTR(vName);
                if (pt->sImage.IsEmpty())
                {
                    pt->sImage = sp.GetString(980);
                }
                break;
            default:
                break;
            }
        }
        else
        {
            pField->RestoreTownPortal(pt->ptPos);
        }
        break;
    }*/
}

const PORTAL* CPortalList::FindPortal(long x, long y, long nXrange)
{
    //return __sub_002AB230(this, nullptr, x, y, nXrange);
    constexpr auto nYrange = 50;
    for (auto& portal : m_aPortal)
    {
        tagRECT rc{
            .left = portal->ptPos.x - nXrange,
            .top = portal->ptPos.y - nYrange,
            .right = portal->ptPos.x + nXrange,
            .bottom = portal->ptPos.y + nYrange
        };
        if (PtInRect(&rc, {x, y}))
        {
            return portal.op_arrow();
        }
    }
    return {};
}

const PORTAL* CPortalList::FindPortalByName(const char* sName)
{
    //return __sub_002AB2C0(this, nullptr, sName);
    for (auto& portal : m_aPortal)
    {
        if (portal->sName == sName)
        {
            return portal.op_arrow();
        }
    }
    return {};
}

const PORTAL* CPortalList::FindPortal_Collision(long x, long y)
{
    return __sub_002AB310(this, nullptr, x, y);
}

const PORTAL* CPortalList::FindPortal_Visible(long x, long y, long nXrange)
{
    constexpr auto nYrange = 50;
    for (auto& portal : m_aPortal)
    {
        tagRECT rc{
            .left = portal->ptPos.x - nXrange,
            .top = portal->ptPos.y - nYrange,
            .right = portal->ptPos.x + nXrange,
            .bottom = portal->ptPos.y + nYrange
        };
        if (portal->nType == 2 && PtInRect(&rc, {x, y}))
        {
            return portal.op_arrow();
        }
    }
    return {};
}

ZRef<PORTAL> CPortalList::FindPortal_Hidden(long x, long y, long nXrange)
{
    constexpr auto nYrange = 50;
    for (auto& portal : m_aPortal_Hidden)
    {
        if (!portal->nType == 0)
        {
            continue;
        }
        tagRECT rc{
            .left = portal->ptPos.x - nXrange,
            .top = portal->ptPos.y - nYrange,
            .right = portal->ptPos.x + nXrange,
            .bottom = portal->ptPos.y + nYrange
        };
        if (PtInRect(&rc, {x, y}))
        {
            return portal;
        }
    }
    return {};
}

const PORTAL* CPortalList::GetPortal(long arg0)
{
    return m_aPortal[arg0].op_arrow();
}

long CPortalList::GetPortalCount()
{
    //TODO game verify
    return m_aPortal.GetCount();
}

void CPortalList::SetHiddenPortal(ZRef<PORTAL> pPortal)
{
    __sub_002AC860(this, nullptr, CreateNakedParam(pPortal));
}

void CPortalList::UpdateHiddenPortal()
{
    __sub_002AD010(this, nullptr);
}

_x_com_ptr<IWzProperty> CPortalList::GetPropPV()
{
    if (m_pPropPV)
    {
        return m_pPropPV;
    }
    auto& sp = StringPool::GetInstance();
    auto& rm = get_rm();
    auto prop = rm->GetObjectT<IWzProperty>(sp.GetBSTR(0x6da));

    auto subProp = prop->GetItemT<IWzProperty>(sp.GetBSTR(0x5ee));
    auto subProp1 = subProp->GetItemT<IWzProperty>(sp.GetBSTR(0x6db));
    auto subProp2 = subProp1->GetItemT<IWzProperty>(sp.GetBSTR(0x6d9));

    m_pPropPV = subProp2;
    return m_pPropPV;
    //return __sub_002ABC90(this, nullptr);
}

_x_com_ptr<IWzProperty> CPortalList::GetPropPH()
{
    return __sub_002AC080(this, nullptr);
}

_x_com_ptr<IWzProperty> CPortalList::GetPropPSH()
{
    return __sub_002AC470(this, nullptr);
}

unsigned long CPortalList::GetCRC()
{
    return m_dwPortalCrc;
}

CPortalList& CPortalList::operator=(const CPortalList& arg0)
{
    return _op_assign_17(this, arg0);
}

CPortalList& CPortalList::_op_assign_17(CPortalList* pThis, const CPortalList& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

unsigned long __cdecl GETCRC32String(ZXString<char> str, unsigned long dwInit)
{
    return __sub_002AB880(CreateNakedParam(str), dwInit);
}
