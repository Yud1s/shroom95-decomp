// CtrlComboBox.cpp
#include "CtrlComboBox.hpp"
#include "CtrlComboBox_regen.ipp"

CCtrlComboBoxSelect::~CCtrlComboBoxSelect()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CCtrlComboBoxSelect::_dtor_0()
{
    return __sub_000D8530(this, nullptr);
}

CCtrlComboBoxSelect::CCtrlComboBoxSelect(const CCtrlComboBoxSelect& arg0)
{
    _ctor_1(arg0);
}

void CCtrlComboBoxSelect::_ctor_1(const CCtrlComboBoxSelect& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlComboBoxSelect::CCtrlComboBoxSelect(CCtrlComboBox* pComboBox, long nSelect, long nSelectMax, FONT_TYPE fTypeSelect,
                                         FONT_TYPE fTypeSelectFocused, long nTextOffset_Y, int32_t bDeleteEnable)
{
    //_ctor_0(pComboBox, nSelect, nSelectMax, fTypeSelect, fTypeSelectFocused, nTextOffset_Y, bDeleteEnable);
    m_pComboBox = pComboBox;
    m_fTypeSelect = fTypeSelect;
    m_nSelect = nSelect;
    m_nSelectMax = nSelectMax;
    m_nTextOffset_Y = nTextOffset_Y;
    m_fTypeSelectFocused = fTypeSelectFocused;
    m_bDeleteEnable = bDeleteEnable;
}

void CCtrlComboBoxSelect::_ctor_0(CCtrlComboBox* pComboBox, long nSelect, long nSelectMax, FONT_TYPE fTypeSelect,
                                  FONT_TYPE fTypeSelectFocused, long nTextOffset_Y, int32_t bDeleteEnable)
{
    //return __sub_000D8480(this, nullptr, pComboBox, nSelect, nSelectMax, fTypeSelect, fTypeSelectFocused, nTextOffset_Y,
    //                     bDeleteEnable);
    new(this) CCtrlComboBoxSelect(pComboBox, nSelect, nSelectMax, fTypeSelect, fTypeSelectFocused, nTextOffset_Y,
                                  bDeleteEnable);
}

void CCtrlComboBoxSelect::Draw(long rx, long ry, const tagRECT* pRect)
{
    __sub_000D9AC0(this, nullptr, rx, ry, pRect);
}

void CCtrlComboBoxSelect::OnCreate(void* pData)
{
    __sub_000D8B20(this, nullptr, pData);
}

void CCtrlComboBoxSelect::OnKey(uint32_t wParam, int32_t lParam)
{
    __sub_000D91F0(this, nullptr, wParam, lParam);
}

int32_t CCtrlComboBoxSelect::OnSetFocus(int32_t bFocus)
{
    return __sub_000D91A0(this, nullptr, bFocus);
}

void CCtrlComboBoxSelect::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_000D97F0(this, nullptr, msg, wParam, rx, ry);
}

int32_t CCtrlComboBoxSelect::OnMouseMove(long rx, long ry)
{
    return __sub_000D82B0(this, nullptr, rx, ry);
}

int32_t CCtrlComboBoxSelect::OnMouseWheel(long rx, long ry, long nDelta)
{
    return __sub_000D8300(this, nullptr, rx, ry, nDelta);
}

CCtrlComboBoxSelect& CCtrlComboBoxSelect::operator=(const CCtrlComboBoxSelect& arg0)
{
    return _op_assign_13(this, arg0);
}

CCtrlComboBoxSelect& CCtrlComboBoxSelect::_op_assign_13(CCtrlComboBoxSelect* pThis, const CCtrlComboBoxSelect& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlComboBox::~CCtrlComboBox()
{
}

void CCtrlComboBox::_dtor_0()
{
    return __sub_000DA1E0(this, nullptr);
}

CCtrlComboBox::CCtrlComboBox(const CCtrlComboBox& arg0)
{
    _ctor_1(arg0);
}

void CCtrlComboBox::_ctor_1(const CCtrlComboBox& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlComboBox::CCtrlComboBox()
{
    m_nPrevSelect = -1;
}

void CCtrlComboBox::_ctor_0()
{
    //return __sub_000DA090(this, nullptr);
    new(this) CCtrlComboBox();
}

void CCtrlComboBox::CreateCtrl(CWnd* pParent, uint32_t nId, long nType, long l, long t, long w, long h, void* pData)
{
    auto param = static_cast<CREATEPARAM*>(pData);
    this->m_nType = nType;
    this->m_nBackColor = param->nBackColor;
    this->m_nBackFocusedColor = param->nBackFocusedColor;
    this->m_nBorderColor = param->nBorderColor;
    this->m_fType = param->fType;
    this->m_fTypeFocused = param->fTypeFocused;
    this->m_fTypeSelect = param->fTypeSelect;
    this->m_fTypeSelectFocused = param->fTypeSelectFocused;
    this->m_nBoxPosX = param->nBoxPosX;
    this->m_nBoxPosY = param->nBoxPosY;
    this->m_nBoxWidth = param->nBoxWidth;
    this->m_nBoxTextLeftOffset = param->nBoxTextLeftOffset;
    this->m_nDesign = param->nDesign;
    this->m_nMaxItem_Shown = param->nMaxItem_Shown;
    this->m_Id_ScrollBar = param->Id_ScrollBar;
    param->Id_ScrollBar = 0;
    this->m_nType_ScrollBar = param->nType_ScrollBar;
    this->m_bButtonOnLeft = param->bButtonOnLeft;
    this->m_bAlwaysFocusOnText = param->bAlwayFocusOnText;
    this->m_bDeleteEnable = param->bDeleteEnable;
    m_sUOL = param->sButtonUOL;
    this->m_ItemListPos = param->nItemListPosType;
    this->m_nTextOffset_Y = param->nTextOffSet_Y;
    CCtrlWnd::CreateCtrl(pParent, nId, l, t, w, h, param);
}

void CCtrlComboBox::Draw(long rx, long ry, const tagRECT* pRect)
{
    __sub_000DD250(this, nullptr, rx, ry, pRect);
}

void CCtrlComboBox::OnCreate(void* pData)
{
    __sub_000DA7D0(this, nullptr, pData);
}

void CCtrlComboBox::OnDestroy()
{
    CCtrlComboBox::RemoveSelectWnd();
}

int32_t CCtrlComboBox::OnSetFocus(int32_t bFocus)
{
    if (bFocus)
    {
        if (m_bAcceptFocus)
            InvalidateRect();
        return m_bAcceptFocus;
    }
    else
    {
        InvalidateRect();
        return 1;
    }
}

void CCtrlComboBox::Update()
{
    if (this->m_nComboBoxState == 1 && !this->m_pCtrlCBS && get_update_time() - this->m_tBtClicked > 300)
    {
        this->m_nComboBoxState = 0;
        InvalidateRect();
    }
}

void CCtrlComboBox::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    if (msg == 513 || msg == 515)
        BtClicked();
}

void CCtrlComboBox::OnMouseEnter(int32_t bEnter)
{
    //__sub_000D80E0(this, nullptr, bEnter);
    CCtrlWnd::OnMouseEnter(bEnter);
    if (bEnter)
    {
        if (this->m_nComboBoxState != 3)
        {
            this->m_nComboBoxState = 3;
            InvalidateRect();
            return;
        }
    }
    else if (this->m_nComboBoxState == 3)
    {
        this->m_nComboBoxState = 0;
    }
    InvalidateRect();
}

void CCtrlComboBox::OnKey(uint32_t wParam, int32_t lParam)
{
    //__sub_000D9910(this, nullptr, wParam, lParam);
    if (lParam >= 0 && (wParam == 37 || wParam == 39 || wParam == 40))
    {
        BtClicked();
        return;
    }

    m_pParent->OnKey(wParam, lParam);
}

int32_t CCtrlComboBox::HitTest(long rx, long ry)
{
    //return __sub_000D8350(this, nullptr, rx, ry);
    auto res = CCtrlWnd::HitTest(rx, ry);
    if (!res && m_pCtrlEdit)
    {
        auto l = m_pCtrlEdit->GetAbsLeft();
        auto t = m_pCtrlEdit->GetAbsTop();
        //TODO(game) verify
        return m_pCtrlEdit->HitTest(rx - l, ry - t);
    }

    return res;
}

void CCtrlComboBox::SetAbove(CCtrlWnd* pCtrl)
{
    CCtrlWnd::SetAbove(pCtrl);
    if (m_pCtrlEdit)
        m_pCtrlEdit->SetAbove(this);
    if (m_pCtrlCBS)
        m_pCtrlCBS->SetAbove(this);
    if (m_pCtrlScrollBar)
        m_pCtrlScrollBar->SetAbove(this);
}

void CCtrlComboBox::AddItem(const char* sItemName, unsigned long dwParam)
{
    ITEM_INFO info;
    info.sItemName = sItemName;
    info.dwParam = dwParam;
    m_lItemInfo.AddTail(info);
    if (m_nComboBoxState == 2)
        m_nComboBoxState = 0;
}

void CCtrlComboBox::RemoveAllItems()
{
    m_lItemInfo.RemoveAll();
}

void CCtrlComboBox::GetComboBoxUOL(long nType, Ztl_bstr_t& m_sUOL)
{
    m_sUOL = StringPool::GetInstance().GetBSTR(0xb21);
    switch (nType)
    {
    case 1:
        m_sUOL += L"2";
    case 2:
        m_sUOL += L"3";
        break;
    case 3:
        m_sUOL += L"4";
        break;
    case 4:
        m_sUOL += L"5";
        break;
    case 5:
        m_sUOL += L"6";
        break;
    default:
        return;
    }
    //__sub_000DA6F0(this, nullptr, nType, m_sUOL);
}

ZXString<char> CCtrlComboBox::GetText()
{
    if (m_nDesign == 2)
    {
        return m_pCtrlEdit->GetText();
    }

    auto ix = m_lItemInfo.FindIndex(m_nSelect);
    return ix->sItemName;
}

ZList<CCtrlComboBox::ITEM_INFO> CCtrlComboBox::GetItemList()
{
    return m_lItemInfo;
}

long CCtrlComboBox::GetItemCount()
{
    return m_lItemInfo.GetCount();
}

long CCtrlComboBox::GetCurSelect()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

unsigned long CCtrlComboBox::GetItemParam(long nIdx)
{
    //return __sub_000D8E40(this, nullptr, nIdx);
    //TODO(game) why it's crashing
    return m_lItemInfo.FindIndex(nIdx)->dwParam;
}

void CCtrlComboBox::SetSelect(long nSelect)
{
    return; //TODO
    //__sub_000D90E0(this, nullptr, nSelect);
    RemoveSelectWnd();
    m_nSelect = nSelect;
    InvalidateRect();
    auto param = GetItemParam(m_nSelect);
    m_pParent->OnChildNotify(m_nCtrlId, 600, param);
}

void CCtrlComboBox::SetForcedSelect(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CCtrlComboBox::Delete(long nSelect)
{
    __sub_000D96D0(this, nullptr, nSelect);
}

void CCtrlComboBox::DeleteByParam(unsigned long dwParam, int32_t bOpenSelectWnd)
{
    __sub_000DA470(this, nullptr, dwParam, bOpenSelectWnd);
}

int32_t CCtrlComboBox::IsActivateComboBoxSelectWnd()
{
    //TODO(game)
    return static_cast<bool>(m_pCtrlCBS);
}

long CCtrlComboBox::GetComboBoxItemTotalHeight()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CCtrlComboBox::RemoveSelectWnd()
{
    __sub_000D9070(this, nullptr);
}

void CCtrlComboBox::MakeSelectWnd()
{
    __sub_000D94E0(this, nullptr);
}

void CCtrlComboBox::MakeScrollBar()
{
    __sub_000D9320(this, nullptr);
}

void CCtrlComboBox::BtClicked()
{
    __sub_000D98D0(this, nullptr);
}

_x_com_ptr<IWzCanvas> CCtrlComboBox::GetButtonCanvas()
{
    //return __sub_000D8560(this, nullptr);
    if (!this->m_lItemInfo.GetCount())
        this->m_nComboBoxState = 2;
    switch (this->m_nType)
    {
    case 0:
    case 2:
    case 3:
    case 4:
    case 5:
        switch (this->m_nComboBoxState)
        {
        case 0:
            return m_pCanvasButton[0];
        case 1:
            return m_pCanvasButton[1];
        case 2:
            return m_pCanvasButton[2];
        case 3:
            return m_pCanvasButton[3];
        case 4:
            return m_pCanvasButton[4];
        default:
            return m_pCanvasButton[0];
        }
        break;
    case 1:
        switch (this->m_nComboBoxState)
        {
        case 0:
            return m_pCanvasButton[0];
        case 1:
        case 4:
            return m_pCanvasButton[1];
        case 2:
            return m_pCanvasButton[2];
        case 3:
            return m_pCanvasButton[3];
        default:
            return m_pCanvasButton[0];
        }
        break;
    default:
        return {};
    }
}

_x_com_ptr<IWzCanvas> CCtrlComboBox::GetStartCanvas()
{
    return __sub_000D8710(this, nullptr);
}

_x_com_ptr<IWzCanvas> CCtrlComboBox::GetLineCanvas()
{
    return __sub_000D8810(this, nullptr);
}

int32_t CCtrlComboBox::IsItemExist()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlComboBox& CCtrlComboBox::operator=(const CCtrlComboBox& arg0)
{
    return _op_assign_39(this, arg0);
}

CCtrlComboBox& CCtrlComboBox::_op_assign_39(CCtrlComboBox* pThis, const CCtrlComboBox& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlComboBox::ITEM_INFO::~ITEM_INFO()
{
}

void CCtrlComboBox::ITEM_INFO::_dtor_0()
{
    return __sub_000D94C0(this, nullptr);
}

CCtrlComboBox::ITEM_INFO::ITEM_INFO(const CCtrlComboBox::ITEM_INFO& arg0)
{
    _ctor_1(arg0);
}

void CCtrlComboBox::ITEM_INFO::_ctor_1(const CCtrlComboBox::ITEM_INFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlComboBox::ITEM_INFO::ITEM_INFO()
{
}

void CCtrlComboBox::ITEM_INFO::_ctor_0()
{
    new(this) CCtrlComboBox::ITEM_INFO();
}

CCtrlComboBox::ITEM_INFO& CCtrlComboBox::ITEM_INFO::operator=(const CCtrlComboBox::ITEM_INFO& arg0) = default;

CCtrlComboBox::ITEM_INFO& CCtrlComboBox::ITEM_INFO::_op_assign_3(CCtrlComboBox::ITEM_INFO* pThis,
                                                                 const CCtrlComboBox::ITEM_INFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlComboBox::CREATEPARAM::~CREATEPARAM()
{
}

void CCtrlComboBox::CREATEPARAM::_dtor_0()
{
    return __sub_0008A920(this, nullptr);
}

CCtrlComboBox::CREATEPARAM::CREATEPARAM(const CCtrlComboBox::CREATEPARAM& arg0)
{
    _ctor_1(arg0);
}

void CCtrlComboBox::CREATEPARAM::_ctor_1(const CCtrlComboBox::CREATEPARAM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlComboBox::CREATEPARAM::CREATEPARAM()
{
    nBackColor = 0xFFEEEEEE;
    nBackFocusedColor = 0xFFA5A198;
    nBorderColor = 0xFF999999;
    nBoxWidth = -1;
    nBoxTextLeftOffset = 7;
    nDesign = 1;
    nType_ScrollBar = 3;
    fType = FONT_BASIC_BLACK;
    fTypeFocused = FONT_BASIC_WHITE;
    fTypeSelect = FONT_BASIC_BLACK;
    fTypeSelectFocused = FONT_BASIC_WHITE;
    nItemListPosType = 1;
}

void CCtrlComboBox::CREATEPARAM::_ctor_0()
{
    //return __sub_000894F0(this, nullptr);
    new(this) CCtrlComboBox::CREATEPARAM();
}

CCtrlComboBox::CREATEPARAM& CCtrlComboBox::CREATEPARAM::operator=(const CCtrlComboBox::CREATEPARAM& arg0)
{
    return _op_assign_3(this, arg0);
}

CCtrlComboBox::CREATEPARAM& CCtrlComboBox::CREATEPARAM::_op_assign_3(CCtrlComboBox::CREATEPARAM* pThis,
                                                                     const CCtrlComboBox::CREATEPARAM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZXString<char> __cdecl operator__char_char__144860(const char* s1, const ZXString<char>& s2)
{
    return __sub_000D99A0(s1, s2);
}
