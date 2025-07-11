// UIMiniMap.cpp
#include "UIMiniMap.hpp"

#include "UserPool/UserPool.hpp"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};


static ZRef<USERREMOTE_ENTRY> FAKE_ZRef_USERREMOTE_ENTRY{};

static ZRef<SimpleMiniMap_LadderRope> FAKE_ZRef_SimpleMiniMap_LadderRope{};
static ZRef<SimpleMiniMap_FootHold> FAKE_ZRef_SimpleMiniMap_FootHold{};

static ZRefCounted_AllocHelper<ZRefCountedDummy<SimpleMiniMap_LadderRope>>
FAKE_ZRefCountedDummy_SimpleMiniMap_LadderRope{};
static ZRefCounted_AllocHelper<ZRefCountedDummy<SimpleMiniMap_FootHold>> FAKE_ZRefCountedDummy_SimpleMiniMap_FootHold{};

#include "UIMiniMap_regen.ipp"

CUIMiniMap::~CUIMiniMap()
{
    DestroyMMWindow();
    ms_pInstance = nullptr;
}

void CUIMiniMap::_dtor_0()
{
    //return __sub_003F9550(this, nullptr);
    this->~CUIMiniMap();
}

CUIMiniMap::CUIMiniMap(const CUIMiniMap& arg0)
{
    _ctor_1(arg0);
}

void CUIMiniMap::_ctor_1(const CUIMiniMap& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

template <typename T>
_com_ptr_t<_com_IIID<T, &__uuidof(T)>> GetObjectT(uint32_t code)
{
    auto bstr = StringPool::GetInstance().GetBSTR(code);
    return get_rm()->GetObjectT<T>(bstr);
}

template <typename T>
_com_ptr_t<_com_IIID<T, &__uuidof(T)>> GetItemT(_com_ptr_t<_com_IIID<IWzProperty, &__uuidof(IWzProperty)>>& prop,
                                                uint32_t code)
{
    auto bstr = StringPool::GetInstance().GetBSTR(code);
    return prop->GetItemT<T>(bstr);
}

CUIMiniMap::CUIMiniMap(CWvsContext* pWvsContext): CUIWnd(4, 0, -1, -1, 0, 0, 0)
{
    ms_pInstance = this;
    //_ctor_0( pWvsContext);
    m_nPrevOption = -1;

    auto pMapHelper = GetObjectT<IWzProperty>(0x6DA);
    auto miniMap = GetItemT<IWzProperty>(pMapHelper, 0x113E);
    m_pCanvasIconSelf = GetItemT<IWzCanvas>(miniMap, 0x113F);
    m_pCanvasIconRemoteUser = GetItemT<IWzCanvas>(miniMap, 0x1140);
    m_pCanvasIconFriend = GetItemT<IWzCanvas>(miniMap, 0x1141);
    m_pCanvasIconGuild = GetItemT<IWzCanvas>(miniMap, 0x1142);
    m_pCanvasIconGuildMaster = GetItemT<IWzCanvas>(miniMap, 0x1143);
    m_pCanvasIconMatch = GetItemT<IWzCanvas>(miniMap, 0x1144);
    m_pCanvasIconParty = GetItemT<IWzCanvas>(miniMap, 0x1AC5);
    m_pCanvasIconPartyMaster = GetItemT<IWzCanvas>(miniMap, 0x1145);
    m_pCanvasIconNpc = GetItemT<IWzCanvas>(miniMap, 0x59B);
    m_pCanvasIconNpcStart = GetItemT<IWzCanvas>(miniMap, 0x1146);
    m_pCanvasIconNpcEnd = GetItemT<IWzCanvas>(miniMap, 0x1147);
    m_pCanvasIconShopSelf = GetItemT<IWzCanvas>(miniMap, 0x1148);
    m_pCanvasIconShopRemote = GetItemT<IWzCanvas>(miniMap, 0x1149);
    m_pCanvasIconPortal = GetItemT<IWzCanvas>(miniMap, 0x5ee);
    m_pCanvasIconN = GetItemT<IWzCanvas>(miniMap, 0x114b);
    m_pCanvasIconNE = GetItemT<IWzCanvas>(miniMap, 0x114c);
    m_pCanvasIconSW = GetItemT<IWzCanvas>(miniMap, 0x114D);
    m_pCanvasIconS = GetItemT<IWzCanvas>(miniMap, 0x114E);
    m_pCanvasIconSE = GetItemT<IWzCanvas>(miniMap, 0x114F);
    m_pCanvasIconW = GetItemT<IWzCanvas>(miniMap, 0x1150);
    m_pCanvasIconE = GetItemT<IWzCanvas>(miniMap, 0x1151);


    m_pCanvasIconNpcLowLevel = GetObjectT<IWzCanvas>(0x19ef);
}

void CUIMiniMap::_ctor_0(CWvsContext* pWvsContext)
{
    new(this) CUIMiniMap(pWvsContext);
    //return __sub_003FFD20(this, nullptr, pWvsContext);
}

void CUIMiniMap::SetLayer()
{
    __sub_004011A0(this, nullptr);
}

void CUIMiniMap::SetCtrl()
{
    __sub_003F9D40(this, nullptr);
}

void CUIMiniMap::ToggleMap()
{
    //__sub_00403DD0(this, nullptr);
    SetSize();
    SetLayer();
    SetCtrl();
    InvalidateRect(nullptr);
}

void CUIMiniMap::ToggleMiniMapState()
{
    //__sub_00403E00(this, nullptr);
    if ( this->m_bShowMiniMap )
    {
        m_nOption = this->m_nOption;
        this->m_nPrevOption = m_nOption;
        auto v2 = (m_nOption + 2) % 3;
        this->m_nOption = v2;
        if ( v2 == 2 )
            this->m_nPrevOption = 1;
        ToggleMap();
    }
}

int32_t CUIMiniMap::LoadMiniMap(_x_com_ptr<IWzProperty> pInfo, _x_com_ptr<IWzProperty> pData, unsigned long dwFieldId)
{
    return __sub_00407910(this, nullptr, CreateNakedParam(pInfo), CreateNakedParam(pData), dwFieldId);
}

int32_t CUIMiniMap::ReloadMiniMap()
{
    return __sub_00408510(this, nullptr);
}

void CUIMiniMap::CalculateScr()
{
    //__sub_003F6790(this, nullptr);
    int m_nMag; // ecx
    int v3; // edi
    int v4; // eax
    int m_nReal_CX; // edx
    int v6; // eax
    int m_nReal_CY; // ebx
    int v8; // edi
    int v9; // eax
    int v10; // eax

    m_nMag = this->m_nMag;
    v3 = this->m_nPane_W << m_nMag;
    v4 = this->m_nLocal_X - v3 / 2;
    m_nReal_CX = this->m_nReal_CX;
    this->m_nScrOrig_X = v4;
    if ( v4 < -m_nReal_CX )
        this->m_nScrOrig_X = -m_nReal_CX;
    v6 = this->m_nReal_W - m_nReal_CX - v3;
    if ( this->m_nScrOrig_X > v6 )
        this->m_nScrOrig_X = v6;
    m_nReal_CY = this->m_nReal_CY;
    v8 = this->m_nPane_H << m_nMag;
    this->m_nScrOrig_X = (m_nReal_CX + this->m_nScrOrig_X) >> m_nMag;
    v9 = this->m_nLocal_Y - v8 / 2;
    this->m_nScrOrig_Y = v9;
    if ( v9 < -m_nReal_CY )
        this->m_nScrOrig_Y = -m_nReal_CY;
    v10 = this->m_nReal_H - m_nReal_CY - v8;
    if ( this->m_nScrOrig_Y > v10 )
        this->m_nScrOrig_Y = v10;
    this->m_nScrOrig_Y = (m_nReal_CY + this->m_nScrOrig_Y) >> m_nMag;
}

long CUIMiniMap::GetMiniMapWidth()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIMiniMap::Update()
{
    __sub_004053A0(this, nullptr);
}

int32_t CUIMiniMap::HitTest(long rx, long ry, CCtrlWnd** ppCtrl)
{
    //return __sub_003F6AD0(this, nullptr, rx, ry, ppCtrl);
    auto result = CWnd::HitTest(rx, ry, ppCtrl);
    if ( result && (!ppCtrl || !*ppCtrl) )
        return 1;
    return result;
}

void CUIMiniMap::OnButtonClicked(uint32_t nId)
{
    __sub_00403E40(this, nullptr, nId);
}

int32_t CUIMiniMap::OnMouseMove(long rx, long ry)
{
    return __sub_004040A0(this, nullptr, rx, ry);
}

void CUIMiniMap::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_003F8410(this, nullptr, msg, wParam, rx, ry);
}

void CUIMiniMap::SetSearch(unsigned long dwCharacterID)
{
    __sub_003F6DB0(this, nullptr, dwCharacterID);
}

void CUIMiniMap::InsertStalkee(unsigned long dwCharacterID, ZXString<char>& strName, tagPOINT pt)
{
    __sub_00407330(this, nullptr, dwCharacterID, strName, CreateNakedParam(pt));
}

void CUIMiniMap::RemoveStalkee(unsigned long dwCharacterID)
{
    __sub_003F6DB0(this, nullptr, dwCharacterID);
}

void CUIMiniMap::SetShowMiniMap(int32_t bShow)
{
    //__sub_003F6B00(this, nullptr, bShow);
    m_bShowMiniMap = bShow;
}

void CUIMiniMap::SetMiniMapType(long arg0, int32_t arg1)
{
    m_nMiniMapType = arg0;
}

void CUIMiniMap::SortFootHold()
{
    __sub_003F88A0(this, nullptr);
    /*auto pos = FootHoldMap.GetHeadPosition();
    while (pos)
    {
        ZRef<SimpleMiniMap_FootHold> fh;
        FootHoldMap.GetNext(pos, &fh);

        if (fh->bUsed)
        {
            FootHoldMap.RemoveKey(fh->CurSN);
        }
        else
        {
            if (fh->PrevSN)
            {
                if (fh->NextSN)
                {

                }
            }
        }
    }*/
}

void CUIMiniMap::ReleaseFootHoldData()
{
    __sub_003F9010(this, nullptr);
}

void CUIMiniMap::ReleaseFootHoldMapData()
{
    __sub_003F7E10(this, nullptr);
}

void CUIMiniMap::DestroyMMWindow()
{
    __sub_003F7DC0(this, nullptr);
}

tagPOINT CUIMiniMap::TransformPoint(const tagPOINT& ptIn)
{
    //TODO verirfy
    tagPOINT ret;
    ret.x = ((m_nReal_CX + ptIn.x) >> m_nMag) - m_nScrOrig_X;
    ret.y = ((m_nReal_CY + ptIn.y) >> m_nMag) - m_nScrOrig_Y;
    return ret;
    //	return __sub_003F6750(this, nullptr, ptIn);
}

void CUIMiniMap::DrawIcon_1(ZList<tagPOINT>& lPt, _x_com_ptr<IWzCanvas> pIcon)
{
    __sub_003F7D00(this, nullptr, lPt, CreateNakedParam(pIcon));
}

void CUIMiniMap::DrawIcon_0(tagPOINT& pt, _x_com_ptr<IWzCanvas> pIcon)
{
    __sub_003F7980(this, nullptr, pt, CreateNakedParam(pIcon));
}

void CUIMiniMap::MakeSimpleMiniMap(_x_com_ptr<IWzProperty> pField)
{
    __sub_00407380(this, nullptr, CreateNakedParam(pField));
}

int32_t CUIMiniMap::LoadFootHold(_x_com_ptr<IWzProperty> pPropFootHold)
{
    return __sub_003FA030(this, nullptr, CreateNakedParam(pPropFootHold));
}

int32_t CUIMiniMap::LoadLadderRope(_x_com_ptr<IWzProperty> pPropLadderRope)
{
    return __sub_00405010(this, nullptr, CreateNakedParam(pPropLadderRope));
}

void CUIMiniMap::MakeConvexLayer()
{
    __sub_003FB0B0(this, nullptr);
}

void CUIMiniMap::MakeIconsForSimpleMiniMap()
{
    __sub_003FC210(this, nullptr);
}

void CUIMiniMap::SetSize()
{
    __sub_003F6DE0(this, nullptr);
}

void CUIMiniMap::SetLayer_Simple()
{
    __sub_003FD340(this, nullptr);
}

void CUIMiniMap::SetCtrl_Simple()
{
    __sub_003F9030(this, nullptr);
}

double CUIMiniMap::CalcAngle(tagPOINT pt1, tagPOINT pt2, tagPOINT pt3)
{
    return __sub_003F6F50(this, nullptr, CreateNakedParam(pt1), CreateNakedParam(pt2), CreateNakedParam(pt3));
}

void CUIMiniMap::UpdateRect(tagRECT& rt)
{
    //__sub_003F6B10(this, nullptr, rt);
    if (!m_nMiniMapType && !m_nOption)
        SetRect(
            &rt,
            rt.left - (rt.right - rt.left) / 2,
            rt.top - (rt.bottom - rt.top) / 2,
            (rt.right - rt.left) / 2 + rt.right,
            (rt.bottom - rt.top) / 2 + rt.bottom);
}

CUIMiniMap& CUIMiniMap::operator=(const CUIMiniMap& arg0)
{
    return _op_assign_38(this, arg0);
}

CUIMiniMap& CUIMiniMap::_op_assign_38(CUIMiniMap* pThis, const CUIMiniMap& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
