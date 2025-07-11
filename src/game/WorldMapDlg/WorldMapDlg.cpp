// WorldMapDlg.cpp
#include "WorldMapDlg.hpp"
#include "WorldMapDlg_regen.ipp"

WORLDMAP_ITEM::~WORLDMAP_ITEM()
{
    UNIMPLEMENTED; // _dtor_0();
}

void WORLDMAP_ITEM::_dtor_0()
{
    return __sub_005B5D00(this, nullptr);
}

WORLDMAP_ITEM::WORLDMAP_ITEM(const WORLDMAP_ITEM& arg0)
{
    _ctor_1(arg0);
}

void WORLDMAP_ITEM::_ctor_1(const WORLDMAP_ITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

WORLDMAP_ITEM::WORLDMAP_ITEM()
{
    UNIMPLEMENTED; //_ctor_0();
}

void WORLDMAP_ITEM::_ctor_0()
{
    return __sub_005B5EC0(this, nullptr);
}

void WORLDMAP_ITEM::ResetLayer()
{
    __sub_005B5BA0(this, nullptr);
}

WORLDMAP_ITEM& WORLDMAP_ITEM::operator=(const WORLDMAP_ITEM& arg0)
{
    return _op_assign_4(this, arg0);
}

WORLDMAP_ITEM& WORLDMAP_ITEM::_op_assign_4(WORLDMAP_ITEM* pThis, const WORLDMAP_ITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlButtonQuestToggle::~CCtrlButtonQuestToggle()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CCtrlButtonQuestToggle::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlButtonQuestToggle::CCtrlButtonQuestToggle(const CCtrlButtonQuestToggle& arg0)
{
    _ctor_1(arg0);
}

void CCtrlButtonQuestToggle::_ctor_1(const CCtrlButtonQuestToggle& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlButtonQuestToggle::CCtrlButtonQuestToggle()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CCtrlButtonQuestToggle::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CCtrlButtonQuestToggle::SetEnable(int32_t bEnable)
{
    __sub_005B5850(this, nullptr, bEnable);
}

void CCtrlButtonQuestToggle::OnMouseEnter(int32_t bEnter)
{
    __sub_005B6050(this, nullptr, bEnter);
}

int32_t CCtrlButtonQuestToggle::OnMouseMove(long rx, long ry)
{
    return __sub_005B61C0(this, nullptr, rx, ry);
}

CCtrlButtonQuestToggle& CCtrlButtonQuestToggle::operator=(const CCtrlButtonQuestToggle& arg0)
{
    return _op_assign_9(this, arg0);
}

CCtrlButtonQuestToggle& CCtrlButtonQuestToggle::_op_assign_9(CCtrlButtonQuestToggle* pThis,
                                                             const CCtrlButtonQuestToggle& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWorldMapDlg::~CWorldMapDlg()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CWorldMapDlg::_dtor_0()
{
    return __sub_005BB2A0(this, nullptr);
}

CWorldMapDlg::CWorldMapDlg(const CWorldMapDlg& arg0)
{
    _ctor_1(arg0);
}

void CWorldMapDlg::_ctor_1(const CWorldMapDlg& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWorldMapDlg::CWorldMapDlg()
{
    this->m_dwField = 999999999;
    this->m_nSelectedLink = -1;
    this->m_nSelectedWMI = -1;
}

void CWorldMapDlg::_ctor_0()
{
    new(this) CWorldMapDlg();
}

void CWorldMapDlg::OnCreate(void* pData)
{
    __sub_005B9E10(this, nullptr, pData);
}

void CWorldMapDlg::OnDestroy()
{
    __sub_005B5F80(this, nullptr);
}

void CWorldMapDlg::OnMouseEnter(int32_t bEnter)
{
    __sub_005B58D0(this, nullptr, bEnter);
}

int32_t CWorldMapDlg::OnMouseMove(long rx, long ry)
{
    return __sub_005BAE40(this, nullptr, rx, ry);
}

void CWorldMapDlg::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_005BF1C0(this, nullptr, msg, wParam, rx, ry);
}

void CWorldMapDlg::OnKey(uint32_t wParam, int32_t lParam)
{
    __sub_005BF220(this, nullptr, wParam, lParam);
}

int32_t CWorldMapDlg::HitTest(long rx, long ry, CCtrlWnd** ppCtrl)
{
    return __sub_005B5890(this, nullptr, rx, ry, ppCtrl);
}

void CWorldMapDlg::Draw(const tagRECT* pRect)
{
    __sub_005BA060(this, nullptr, pRect);
}

void CWorldMapDlg::ClearToolTip()
{
    __sub_005BB280(this, nullptr);
}

int32_t CWorldMapDlg::CreateWorldMapDlg(unsigned long dwField, unsigned long dwNpcTemplate, int32_t bMobMark)
{
    return __sub_005BE670(this, nullptr, dwField, dwNpcTemplate, bMobMark);
}

int32_t CWorldMapDlg::SetWorldMap(_x_com_ptr<IWzProperty> arg0)
{
    return __sub_005BD820(this, nullptr, CreateNakedParam(arg0));
}

void CWorldMapDlg::SetWorldMapDeeper()
{
    __sub_005BEC90(this, nullptr);
}

void CWorldMapDlg::SetWorldMapShallower()
{
    __sub_005BEF30(this, nullptr);
}

int32_t CWorldMapDlg::LoadInfo(_x_com_ptr<IWzProperty> pWorldMap)
{
    return __sub_005B7B00(this, nullptr, CreateNakedParam(pWorldMap));
}

int32_t CWorldMapDlg::LoadMapList(_x_com_ptr<IWzProperty> arg0)
{
    return __sub_005BC160(this, nullptr, CreateNakedParam(arg0));
}

int32_t CWorldMapDlg::LoadMapLink(_x_com_ptr<IWzProperty> arg0)
{
    return __sub_005BBC20(this, nullptr, CreateNakedParam(arg0));
}

int32_t CWorldMapDlg::IsHavingFieldNo(_x_com_ptr<IWzProperty> pWorldMap, unsigned long dwFindFieldID)
{
    return __sub_005B8F30(this, nullptr, CreateNakedParam(pWorldMap), dwFindFieldID);
}

_x_com_ptr<IWzProperty> CWorldMapDlg::GetDeepestWorldMap(unsigned long dwFieldID)
{
    _x_com_ptr<IWzProperty> ret;
    return *__sub_005BB440(this, nullptr, &ret, dwFieldID);
}

_x_com_ptr<IWzProperty> CWorldMapDlg::GetDeepestWorldMap_For_NpcMark()
{
    return __sub_005B93E0(this, nullptr);
}

void CWorldMapDlg::MakeBorder()
{
    __sub_005B6490(this, nullptr);
}

int32_t CWorldMapDlg::CheckSpotInfo(long rx, long ry)
{
    return __sub_005B59A0(this, nullptr, rx, ry);
}

int32_t CWorldMapDlg::CheckLinkInfo(long rx, long ry)
{
    return __sub_005BAA30(this, nullptr, rx, ry);
}

void CWorldMapDlg::OnButtonClicked(uint32_t nId)
{
    __sub_005BF2A0(this, nullptr, nId);
}

long CWorldMapDlg::MakeCurrentMobList(_x_com_ptr<IWzProperty> arg0)
{
    return __sub_005B7D00(this, nullptr, CreateNakedParam(arg0));
}

void CWorldMapDlg::ScoreLinkMap(_x_com_ptr<IWzProperty> arg0)
{
    __sub_005B83B0(this, nullptr, CreateNakedParam(arg0));
}

_x_com_ptr<IWzProperty> CWorldMapDlg::GetDeepestWorldMap_For_MobMark()
{
    return __sub_005B8A80(this, nullptr);
}

void CWorldMapDlg::CreateQuestGuideTip()
{
    __sub_005BAE80(this, nullptr);
}

int32_t CWorldMapDlg::DidFindQuestMob()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWorldMapDlg::ClearQuestGuide()
{
    __sub_005B5BF0(this, nullptr);
}

CWorldMapDlg& CWorldMapDlg::operator=(const CWorldMapDlg& arg0)
{
    return _op_assign_32(this, arg0);
}

CWorldMapDlg& CWorldMapDlg::_op_assign_32(CWorldMapDlg* pThis, const CWorldMapDlg& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWorldMapDlg::WORLDMAP_LINK::~WORLDMAP_LINK()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CWorldMapDlg::WORLDMAP_LINK::_dtor_0()
{
    return __sub_005B5E40(this, nullptr);
}

CWorldMapDlg::WORLDMAP_LINK::WORLDMAP_LINK(const CWorldMapDlg::WORLDMAP_LINK& arg0)
{
    _ctor_1(arg0);
}

void CWorldMapDlg::WORLDMAP_LINK::_ctor_1(const CWorldMapDlg::WORLDMAP_LINK& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWorldMapDlg::WORLDMAP_LINK::WORLDMAP_LINK()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CWorldMapDlg::WORLDMAP_LINK::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWorldMapDlg::WORLDMAP_LINK& CWorldMapDlg::WORLDMAP_LINK::operator=(const CWorldMapDlg::WORLDMAP_LINK& arg0)
{
    return _op_assign_3(this, arg0);
}

CWorldMapDlg::WORLDMAP_LINK& CWorldMapDlg::WORLDMAP_LINK::_op_assign_3(CWorldMapDlg::WORLDMAP_LINK* pThis,
                                                                       const CWorldMapDlg::WORLDMAP_LINK& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
