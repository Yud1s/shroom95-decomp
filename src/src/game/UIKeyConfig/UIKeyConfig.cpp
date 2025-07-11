// UIKeyConfig.cpp
#include "UIKeyConfig.hpp"

#include "QuickslotKeyModifyDlg/QuickslotKeyModifyDlg.hpp"

static ZRef<CQuickslotKeyModifyDlg> FAKE_ZRef_CQuickslotKeyModifyDlg{};

static ZRef<CUIKeyConfig::CNoticeDlg> FAKE_ZRef_CUIKeyConfig_CNoticeDlg{};

#include "UIKeyConfig_regen.ipp"

CDraggableSkill::~CDraggableSkill()
{
}

void CDraggableSkill::_dtor_0()
{
    return __sub_003D8FF0(this, nullptr);
}

CDraggableSkill::CDraggableSkill(const CDraggableSkill& arg0)
{
    _ctor_1(arg0);
}

void CDraggableSkill::_ctor_1(const CDraggableSkill& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDraggableSkill::CDraggableSkill(IWzGr2DLayer* pLayer, long nSkillID, IUIMsgHandler* pSource, int32_t bMacroSkill,
                                 long nMacroIdx, long nSkillIdx)
{
    m_pLayer = pLayer;
    m_nSkillID = nSkillID;
    m_pSource = pSource;
    m_bMacroSysSkill = bMacroSkill;
    m_nMacroIdx = nMacroIdx;
    m_nSkillIdx = nSkillIdx;
}

void CDraggableSkill::_ctor_0(IWzGr2DLayer* pLayer, long nSkillID, IUIMsgHandler* pSource, int32_t bMacroSkill,
                              long nMacroIdx, long nSkillIdx)
{
    new(this) CDraggableSkill(pLayer, nSkillID, pSource, bMacroSkill, nMacroIdx, nSkillIdx);
}

int32_t CDraggableSkill::OnDropped(IUIMsgHandler* pFrom, IUIMsgHandler* pTo, long rx, long ry)
{
    return __sub_0010A4E0(this, nullptr, pFrom, pTo, rx, ry);
}

int32_t CDraggableSkill::OnDoubleClicked()
{
    return __sub_0010A0F0(this, nullptr);
}

int32_t CDraggableSkill::MapFuncKey(long rx, long ry, int32_t bOnStatusBar)
{
    return __sub_0010A330(this, nullptr, rx, ry, bOnStatusBar);
}

int32_t CDraggableSkill::MapMacro(long rx, long ry, int32_t bOnlyDelete, int32_t bDragFromToAllMacroUI)
{
    return __sub_0010A180(this, nullptr, rx, ry, bOnlyDelete, bDragFromToAllMacroUI);
}

CDraggableSkill& CDraggableSkill::operator=(const CDraggableSkill& arg0)
{
    return _op_assign_7(this, arg0);
}

CDraggableSkill& CDraggableSkill::_op_assign_7(CDraggableSkill* pThis, const CDraggableSkill& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDraggableMenu::~CDraggableMenu()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CDraggableMenu::_dtor_0()
{
    return __sub_003D8EE0(this, nullptr);
}

CDraggableMenu::CDraggableMenu(const CDraggableMenu& arg0)
{
    _ctor_1(arg0);
}

void CDraggableMenu::_ctor_1(const CDraggableMenu& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDraggableMenu::CDraggableMenu(IWzGr2DLayer* pLayer, long nType, long nMenuID, int32_t bFromPalette,
                               IUIMsgHandler* pSource)
{
    _ctor_0(pLayer, nType, nMenuID, bFromPalette, pSource);
}

void CDraggableMenu::_ctor_0(IWzGr2DLayer* pLayer, long nType, long nMenuID, int32_t bFromPalette,
                             IUIMsgHandler* pSource)
{
    return __sub_003D8E50(this, nullptr, pLayer, nType, nMenuID, bFromPalette, pSource);
}

int32_t CDraggableMenu::OnDropped(IUIMsgHandler* pFrom, IUIMsgHandler* pTo, long rx, long ry)
{
    return __sub_00109CC0(this, nullptr, pFrom, pTo, rx, ry);
}

int32_t CDraggableMenu::OnDoubleClicked()
{
    return __sub_00109A80(this, nullptr);
}

int32_t CDraggableMenu::MapFuncKey(long rx, long ry, int32_t bOnStatusBar)
{
    return __sub_00109A90(this, nullptr, rx, ry, bOnStatusBar);
}

int32_t CDraggableMenu::UnmapFuncKey(long arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CDraggableMenu::QuickslotDropOut()
{
    __sub_003D8EE0(this, nullptr);
}

CDraggableMenu& CDraggableMenu::operator=(const CDraggableMenu& arg0)
{
    return _op_assign_8(this, arg0);
}

CDraggableMenu& CDraggableMenu::_op_assign_8(CDraggableMenu* pThis, const CDraggableMenu& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIKeyConfig::~CUIKeyConfig()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIKeyConfig::_dtor_0()
{
    return __sub_003D8CD0(this, nullptr);
}

CUIKeyConfig::CUIKeyConfig(const CUIKeyConfig& arg0)
{
    _ctor_1(arg0);
}

void CUIKeyConfig::_ctor_1(const CUIKeyConfig& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIKeyConfig::CUIKeyConfig(): CUIWnd::CUIWnd(5, 5, 600, 6, L"UI/UIWindow2.img/KeyConfig/backgrnd", 0, 0, 1)
{
    ms_pInstance = this;

    m_pKeyConfig = get_rm()->GetObjectT<IWzProperty>(L"UI/UIWindow2.img/KeyConfig");
    CFuncKeyMappedMan::GetInstance()->SaveFuncKeyMap();
    CQuickslotKeyMappedMan::GetInstance()->SaveQuickslotKeyMap();


    auto h = m_pBackgrnd->Getheight();
    auto w = m_pBackgrnd->Getwidth();

    CreateUIWndPosSaved(w, h, 10);
    CalcKeyIconPosInfo();
}

void CUIKeyConfig::_ctor_0()
{
    return __sub_003D9700(this, nullptr);
}

long CUIKeyConfig::GetShortCutIndexByPos(long x, long y)
{
    return __sub_003D8270(this, nullptr, x, y);
}

int32_t CUIKeyConfig::CompareValidateFuncKeyMappedInfo()
{
    return __sub_003D9370(this, nullptr);
}

void CUIKeyConfig::RemoveFromPalette(long nType, long nIdx)
{
    __sub_003D8B50(this, nullptr, nType, nIdx);
}

void CUIKeyConfig::AddToPalette(long nType, long nIdx)
{
    __sub_003D8B80(this, nullptr, nType, nIdx);
}

void CUIKeyConfig::SetForcedDestroy()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIKeyConfig::ReDrawKeyPalette()
{
    __sub_003DD930(this, nullptr);
}

void CUIKeyConfig::OnCreate(void* pData)
{
    __sub_003DC5D0(this, nullptr, pData);
}

void CUIKeyConfig::Draw(const tagRECT* pRect)
{
    __sub_003DD7C0(this, nullptr, pRect);
}

void CUIKeyConfig::OnButtonClicked(uint32_t nId)
{
    __sub_003DDD90(this, nullptr, nId);
}

void CUIKeyConfig::OnDestroy()
{
    __sub_003DDF60(this, nullptr);
}

int32_t CUIKeyConfig::OnMouseMove(long rx, long ry)
{
    return __sub_003D90D0(this, nullptr, rx, ry);
}

int32_t CUIKeyConfig::HitTest(long rx, long ry, CCtrlWnd** ppCtrl)
{
    return __sub_003D8AC0(this, nullptr, rx, ry, ppCtrl);
}

void CUIKeyConfig::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_003DD7A0(this, nullptr, msg, wParam, rx, ry);
}

void CUIKeyConfig::SetPaletteItems()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIKeyConfig::DrawKeys()
{
    __sub_003DA030(this, nullptr);
}

void CUIKeyConfig::DrawKeyPalette()
{
    __sub_003D99F0(this, nullptr);
}

void CUIKeyConfig::DrawFuncKeyMapped()
{
    __sub_003DA4E0(this, nullptr);
}

void CUIKeyConfig::TryBeginDragFuncKeyMappedIcon(long arg0, long arg1)
{
    __sub_003DB310(this, nullptr, arg0, arg1);
}

void CUIKeyConfig::GetShortCutPos(long nIdx, long& x, long& y)
{
    __sub_003D8320(this, nullptr, nIdx, x, y);
}

void CUIKeyConfig::ResetPaletteItems()
{
    __sub_003D8BC0(this, nullptr);
}

long CUIKeyConfig::GetPaletteSlotFromIdx(long nType, long nIdx)
{
    return __sub_003D8380(this, nullptr, nType, nIdx);
}

long CUIKeyConfig::GetIdxFromPaletteSlot(long nSlot)
{
    return __sub_003D83B0(this, nullptr, nSlot);
}

void CUIKeyConfig::OnQuickslotKeyConf()
{
    __sub_003D9280(this, nullptr);
}

void CUIKeyConfig::CalcKeyIconPosInfo()
{
    __sub_003D83D0(this, nullptr);
}

CUIKeyConfig& CUIKeyConfig::operator=(const CUIKeyConfig& arg0)
{
    return _op_assign_30(this, arg0);
}

CUIKeyConfig& CUIKeyConfig::_op_assign_30(CUIKeyConfig* pThis, const CUIKeyConfig& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIKeyConfig::CNoticeDlg::~CNoticeDlg()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIKeyConfig::CNoticeDlg::_dtor_0()
{
    return __sub_003DDCB0(this, nullptr);
}

CUIKeyConfig::CNoticeDlg::CNoticeDlg(const CUIKeyConfig::CNoticeDlg& arg0)
{
    _ctor_1(arg0);
}

void CUIKeyConfig::CNoticeDlg::_ctor_1(const CUIKeyConfig::CNoticeDlg& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIKeyConfig::CNoticeDlg::CNoticeDlg(CUIKeyConfig* pParent, long nType)
{
    _ctor_0(pParent, nType);
}

void CUIKeyConfig::CNoticeDlg::_ctor_0(CUIKeyConfig* pParent, long nType)
{
    return __sub_003DDBB0(this, nullptr, pParent, nType);
}

void CUIKeyConfig::CNoticeDlg::OnCreate(void* pData)
{
    __sub_003DC280(this, nullptr, pData);
}

void CUIKeyConfig::CNoticeDlg::OnButtonClicked(uint32_t nId)
{
    __sub_003D8350(this, nullptr, nId);
}

void CUIKeyConfig::CNoticeDlg::OnKey(uint32_t wParam, int32_t lParam)
{
    __sub_003D8370(this, nullptr, wParam, lParam);
}

void CUIKeyConfig::CNoticeDlg::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    __sub_003DDA00(this, nullptr, nId, param1, param2);
}

void CUIKeyConfig::CNoticeDlg::SetToolTipInNotice(ZRef<CCtrlButton> pCurrentBt, const char* sDesc)
{
    __sub_003DC430(this, nullptr, CreateNakedParam(pCurrentBt), sDesc);
}

CUIKeyConfig::CNoticeDlg& CUIKeyConfig::CNoticeDlg::operator=(const CUIKeyConfig::CNoticeDlg& arg0)
{
    return _op_assign_8(this, arg0);
}

CUIKeyConfig::CNoticeDlg& CUIKeyConfig::CNoticeDlg::_op_assign_8(CUIKeyConfig::CNoticeDlg* pThis,
                                                                 const CUIKeyConfig::CNoticeDlg& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
