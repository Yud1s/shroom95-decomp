// CtrlEdit.cpp
#include "CtrlEdit.hpp"
#include "Stage/Stage.hpp"

static ZRef<CStage> FAKE_ZREF_STAGE{};

#include "CtrlEdit_regen.ipp"

CCtrlEdit::~CCtrlEdit() = default;

void CCtrlEdit::_dtor_0()
{
    this->~CCtrlEdit();
    // return __sub_000DF940(this, nullptr);
}

CCtrlEdit::CCtrlEdit(const CCtrlEdit &arg0)
{
    _ctor_1(arg0);
}

void CCtrlEdit::_ctor_1(const CCtrlEdit &arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlEdit::CCtrlEdit() = default;

void CCtrlEdit::_ctor_0()
{
    new (this) CCtrlEdit();
    // return __sub_000DF870(this, nullptr);
}

ZXString<char> CCtrlEdit::GetText()
{
    return m_sText;
    // return __sub_000E0750(this, nullptr);
}

void CCtrlEdit::SetText(const char *sText)
{
    m_sText = sText;
    m_col = static_cast<int>(m_sText.GetLength());
    AdjustHorz(0, true, false);
    InvalidateRect();
    //__sub_000E26A0(this, nullptr, sText);
}

void CCtrlEdit::SelectAll()
{

    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CCtrlEdit::SetParentComboBox(CCtrlComboBox *arg0)
{
    m_pParentComboBox = arg0;
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CCtrlEdit::MoveCaret(int32_t nCode)
{
    switch (nCode)
    {
    case CARET_MOVE_LEFT:
        m_col -= GetPrevCount();
        break;
    case CARET_MOVE_RIGHT:
        m_col += GetNextCount_1();
        break;
    case CARET_MOVE_HOME:
        m_col = 0;
        break;
    case CARET_MOVE_END:
        m_col = static_cast<int>(m_sText.GetLength());
        break;
    default:
        // TODO InvalidateRct might be required
        UNIMPLEMENTED;
        return;
    }

    AdjustHorz(0, false, false);
    InvalidateRect();
    //__sub_000E2E90(this, nullptr, nCode);
}

void CCtrlEdit::OnKey(uint32_t wParam, int32_t lParam)
{
    if (lParam >= 0 && (wParam - 8) <= 0x73)
    {
        if (wParam >= VK_F1 && wParam <= VK_F12)
        {
            get_stage()->OnKey(wParam, lParam);
            return;
        }

        auto a = (lParam >> 4) & 1;
        auto b = lParam & 1;

        switch (wParam)
        {
        case VK_BACK: // 0x8
            DeleteString(0);
            return;
        case VK_LEFT: // 0x25
            MoveCaret(CARET_MOVE_LEFT);
            return;
        case VK_RIGHT: // 0x27
            MoveCaret(CARET_MOVE_RIGHT);
            return;
        case VK_END: // 0x23
            if (!a)
            {
                MoveCaret(CARET_MOVE_END);
                return;
            }
            break;
        case VK_HOME: // 0x24
            if (!a)
            {
                MoveCaret(CARET_MOVE_HOME);
                return;
            }
            break;
        case VK_DOWN: // 0x28
            if (m_pParentComboBox)
            {
                m_pParentComboBox->OnKey(wParam, lParam);
                m_pParent->OnKey(wParam, lParam);
                return;
            }
            break;
        case VK_INSERT: // 0x2d
            if (b)
            {
                ExtractSelection(0);
                auto clip = GetClipboard();
                InsertString(clip, false, -1);
                InvalidateRect();
                return;
            }
            break;
        case 0x56: // V
            if (a)
            {
                ExtractSelection(0);
                auto clip = GetClipboard();
                InsertString(clip, false, -1);
                InvalidateRect();
                return;
            }
            break;

        case VK_DELETE: // 0x2e
            if (!b)
            {
                DeleteString(1);
                return;
            }
            ExtractSelection(true);
            AdjustHorz(0, true, false);
            InvalidateRect();
            return;
        case 0x43: // C
            if (a)
            {
                SetClipboard();
                return;
            }
            break;
        case 0x58: // X
            if (a)
            {
                ExtractSelection(1);
                AdjustHorz(0, true, false);
                InvalidateRect();
                return;
            }
            break;

        default:
            break;
        }
    }

    m_pParent->OnKey(wParam, lParam);
    //__sub_000E3A20(this, nullptr, wParam, lParam);
}

int32_t CCtrlEdit::OnSetFocus(int32_t bFocus)
{
    if (!bFocus)
    {
        // TODO verify
        OnIMEResult("");
    }
    else if (m_bAcceptFocus)
    {
        auto userLocal = CUserLocal::GetInstance();
        if (userLocal && userLocal->IsKeyDownSkillUsing())
        {
            userLocal->OnKeyDownSkillEnd();
        }

        auto wndMan = CWndMan::GetInstance();
        wndMan->ClearComposition();
        wndMan->EnableIME(false);
    }

    m_pParent->InvalidateRect(nullptr);
    return 1;

    // return __sub_000DE8B0(this, nullptr, bFocus);
}

void CCtrlEdit::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    switch (msg)
    {
    case WM_LBUTTONDOWN:
        MouseDown(rx, ry);
        break;
    case WM_LBUTTONDBLCLK:
        MouseDblClk(rx, ry);
        break;
    default:
        break;
    }

    //__sub_000E26F0(this, nullptr, msg, wParam, rx, ry);
}

int32_t CCtrlEdit::OnMouseMove(long rx, long ry)
{
    MouseMove(rx, ry);
    return 1;
    // return __sub_000E2730(this, nullptr, rx, ry);
}

void CCtrlEdit::OnMouseEnter(int32_t bEnter)
{
    CCtrlWnd::OnMouseEnter(bEnter);
    //__sub_000DE680(this, nullptr, bEnter);
}

int32_t CCtrlEdit::OnDragDrop(long nState, DRAGCTX &ctx, long rx, long ry)
{
    return 0;
    // return __sub_000DF8D0(this, nullptr, nState, ctx, rx, ry);
}

void CCtrlEdit::OnIMEModeChange(char cMode)
{
    //__sub_000DF8E0(this, nullptr, cMode);
}

void CCtrlEdit::OnIMEResult(const char *sComp)
{
    m_adwIMECompClause.RemoveAll();
    DestroyIMECandWnd();
    ZXString<char> src(sComp);
    if (src.IsEmpty() && !m_col)
    {
        return;
    }

    if (!(src == "\r"))
    {
        ExtractSelection(true);
    }

    InsertString(src, false, -1);
    InvalidateRect();

    //__sub_000E2F00(this, nullptr, sComp);
}

void CCtrlEdit::OnIMEComp(const char *sComp, ZArray<unsigned long> &adwCls, uint32_t nClsIdx, long nCursor,
                          ZList<ZXString<char>> &lCand, long nBegin, long nPage, long nCur)
{
    __sub_000E2FA0(this, nullptr, sComp, adwCls, nClsIdx, nCursor, lCand, nBegin, nPage, nCur);
}

void CCtrlEdit::Update()
{
    m_editCaret.Update(this->IsShown() && this->IsFocused());
    //__sub_000DE930(this, nullptr);
}

void CCtrlEdit::OnCreate(void *pData)
{
    __sub_000E30C0(this, nullptr, pData);
}

void CCtrlEdit::OnDestroy()
{
    __sub_000DFA80(this, nullptr);
}

void CCtrlEdit::Draw(long rx, long ry, const tagRECT *pRect)
{
    auto canvas = GetCanvas(0);
    if (m_nBackColor != 0)
    {
        auto bg = !IsEnabled() && IsBackTransparent() ? 0xffffffff : m_nBackColor;
        canvas->DrawRectangle(
            rx,
            ry,
            m_width,
            m_height,
            bg);
    }

    auto x = m_ptText.x;
    auto y = m_ptText.y;
    tagRECT rc = {
        .left = x + rx,
        .top = y + ry,
        .right = (rx - x) + m_width,
        .bottom = (m_height - y) + ry};
    m_pParent->ClipRect(&rc);
    DrawTextLineRange(canvas, 0, LONG_MAX);

    if (m_pCanvasEmptyText && m_sText.IsEmpty())
    {
        auto h = m_pCanvasEmptyText->Getheight();
        auto w = m_pCanvasEmptyText->Getwidth();
        canvas->Copy(
            (m_width - w) / 2 + rx,
            (m_height - h) / 2 + ry,
            m_pCanvasEmptyText,
            Ztl_variant_t(0xff, VT_I4));
    }

    //__sub_000E2750(this, nullptr, rx, ry, pRect);
}

void CCtrlEdit::SetEnable(int32_t bEnable)
{
    if (m_bEnabled != bEnable)
    {
        OnIMEResult(""); // TODO
        if (!bEnable)
        {
            m_editCaret.HideCaret();
        }
    }
    CCtrlWnd::SetEnable(bEnable);
    //__sub_000DE970(this, nullptr, bEnable);
}

ZXString<char> CCtrlEdit::FilterString(ZXString<char> sInput) // NOLINT(*-unnecessary-value-param)
{
    if (!m_bPasswd || sInput.IsEmpty())
    {
        return sInput;
    }

    auto n = sInput.GetLength();
    ZXString<char> ret;
    auto buf = ret.GetBuffer(n, false);
    memset(buf, '*', n);
    ret.ReleaseBuffer(n);
    return ret;

    // ZXString<char> ret;
    // return *__sub_000DFBF0(this, nullptr, &ret, CreateNakedParam(sInput));
}

void CCtrlEdit::MouseDown(long rx, long ry)
{
    auto pos = CalcCaretPos(rx);
    m_col = pos;
    m_selCol = m_col;
    AdjustHorz(0, false, false);
    InvalidateRect();
    //__sub_000E2060(this, nullptr, rx, ry);
}

void CCtrlEdit::MouseDblClk(long rx, long ry)
{
    m_col = CalcCaretPos(rx);
    WordSelect();
    AdjustHorz(0, false, false);
    InvalidateRect();
    //__sub_000E2090(this, nullptr, rx, ry);
}

void CCtrlEdit::MouseUp(long arg0, long arg1)
{
}

void CCtrlEdit::MouseMove(long rx, long ry)
{
    auto inpSys = CInputSystem::GetInstance();
    if (inpSys->IsKeyPressed(MK_LBUTTON))
    {
        m_col = CalcCaretPos(rx);
        AdjustHorz(0, false, false);
        InvalidateRect();
    }
    //__sub_000E20C0(this, nullptr, rx, ry);
}

int32_t CCtrlEdit::IsSelected() const
{
    return m_selCol != -1;
}

void CCtrlEdit::UnSelect()
{
    m_selCol = -1;
}

void CCtrlEdit::WordSelect()
{
    if (m_sText.IsEmpty())
    {
        return;
    }
    constexpr std::array<char, 4> SPACE_CHARS = {' ', '\t', '\r', '\n'};
    const auto is_space = [](char c)
    { return std::find(SPACE_CHARS.begin(), SPACE_CHARS.end(), c) != SPACE_CHARS.end(); };

    if (m_sText.IsEmpty())
    {
        return;
    }

    m_selCol = m_col;
    if (!is_space(m_sText[m_col]))
    {
        if (m_selCol > 0)
        {
            while (m_selCol > 0 && !is_space(m_sText[m_selCol - 1]))
            {
                m_selCol--;
            }
        }

        auto n = m_sText.GetLength();
        while (m_col < n && !is_space(m_sText[m_col]))
        {
            m_col++;
        }
    }

    //__sub_000E0900(this, nullptr);
}

void CCtrlEdit::ExtractSelection(int32_t bSave)
{
    __sub_000E2D30(this, nullptr, bSave);
}

void CCtrlEdit::SetClipboard()
{
    auto app = CWvsApp::GetInstance();
    auto len = m_sText.GetLength();

    if (m_selCol < 0 || m_selCol == m_col || m_col > len)
    {
        return;
    }

    auto from = std::min<size_t>(m_col, m_selCol);
    auto to = std::max<size_t>(m_col, m_selCol);
    auto s = m_sText.Mid(from, to);
    app->SetClipboardText(static_cast<const char *>(s));
    //__sub_000E0AC0(this, nullptr);
}

ZXString<char> CCtrlEdit::GetClipboard()
{
    ZXString<char> ret;
    return *__sub_000E0750(this, nullptr, &ret);
}

long CCtrlEdit::InsertString(ZXString<char> sSrc, int32_t bExtend, long nCursor)
{
    return __sub_000E2A10(this, nullptr, CreateNakedParam(sSrc), bExtend, nCursor);
}

long CCtrlEdit::DeleteString(int32_t bDelete)
{
    return __sub_000E3820(this, nullptr, bDelete);
}

void CCtrlEdit::AdjustHorz(long nCursor, int32_t bUnselect, int32_t bSelect)
{
    __sub_000E1750(this, nullptr, nCursor, bUnselect, bSelect);
}

long CCtrlEdit::CalcCaretPos(long lCoordX)
{
    return __sub_000E1D90(this, nullptr, lCoordX);
}

long CCtrlEdit::GetPrevCount()
{
    if (m_sText.IsEmpty())
    {
        return 0;
    }

    auto cur = (LPSTR)&m_sText[m_col];
    return cur - CharPrevA(static_cast<LPCSTR>(&m_sText[0]), cur);

    // return __sub_000DE9B0(this, nullptr);
}

long CCtrlEdit::GetNextCount_0(const char *sCur)
{
    // return __sub_000DE690(this, nullptr, sCur);
    return sCur ? CharNextA(sCur) - sCur : 0;
}

long CCtrlEdit::GetNextCount_1()
{
    return m_sText.IsEmpty() ? 0 : GetNextCount_0(&m_sText[m_col]);
    // return __sub_000DE9E0(this, nullptr);
}

int32_t CCtrlEdit::IsBackTransparent() const
{
    return m_nBackColor >> 24 == 0;
}

void CCtrlEdit::DrawTextLine(_x_com_ptr<IWzCanvas> pCanvas, long y, ZXString<char> sText, long sel0, long sel1)
{
    __sub_000E0B80(this, nullptr, CreateNakedParam(pCanvas), y, CreateNakedParam(sText), sel0, sel1);
}

void CCtrlEdit::DrawTextLineRange(_x_com_ptr<IWzCanvas> pCanvas, long nBegin, long nEnd)
{
    if (nEnd <= nBegin)
    {
        return;
    }

    auto sel0 = -1;
    auto sel1 = -1;
    if (m_selCol != -1 && m_col != m_selCol)
    {
        sel0 = std::min<long>(m_col, m_selCol);
        sel1 = std::max<long>(m_col, m_selCol);
    }

    auto ry = m_pLTCtrl->Getry();
    DrawTextLine(pCanvas, m_ptText.y + ry, m_sText, sel0, sel1);
    //__sub_000E1640(this, nullptr, CreateNakedParam(pCanvas), nBegin, nEnd);
}

void CCtrlEdit::CreateIMECandWnd(ZList<ZXString<char>> &lCand, long nBegin, long nPage, long nCur, int32_t bVert)
{
    __sub_000E2100(this, nullptr, lCand, nBegin, nPage, nCur, bVert);
}

void CCtrlEdit::DestroyIMECandWnd()
{
    m_pIMECandWnd = 0;
    //__sub_000DF7F0(this, nullptr);
}

int32_t CCtrlEdit::IsWhite(char arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlEdit &CCtrlEdit::operator=(const CCtrlEdit &arg0)
{
    return _op_assign_49(this, arg0);
}

CCtrlEdit &CCtrlEdit::_op_assign_49(CCtrlEdit *pThis, const CCtrlEdit &arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlEdit::CREATEPARAM::~CREATEPARAM()
{
}

void CCtrlEdit::CREATEPARAM::_dtor_0()
{
    // return __sub_00084890(this, nullptr);
    this->~CREATEPARAM();
}

CCtrlEdit::CREATEPARAM::CREATEPARAM(const CCtrlEdit::CREATEPARAM &arg0)
{
    _ctor_1(arg0);
}

void CCtrlEdit::CREATEPARAM::_ctor_1(const CCtrlEdit::CREATEPARAM &arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlEdit::CREATEPARAM::CREATEPARAM()
{
    ptText = tagPOINT{0, -2};
    sFont = Ztl_bstr_t(L"Arial");
    nFontHeight = 12;
    nFontColor = 0xff000000;
    // UNIMPLEMENTED; //_ctor_0();
}

void CCtrlEdit::CREATEPARAM::_ctor_0()
{
    new (this) CCtrlEdit::CREATEPARAM();
}

CCtrlEdit::CREATEPARAM &CCtrlEdit::CREATEPARAM::operator=(const CCtrlEdit::CREATEPARAM &arg0)
{
    return _op_assign_3(this, arg0);
}

CCtrlEdit::CREATEPARAM &
CCtrlEdit::CREATEPARAM::_op_assign_3(CCtrlEdit::CREATEPARAM *pThis, const CCtrlEdit::CREATEPARAM &arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlEdit::CEditCaret::~CEditCaret()
{
    //_dtor_0();
}

void CCtrlEdit::CEditCaret::_dtor_0()
{
    // return __sub_000DF010(this, nullptr);
    this->~CEditCaret();
}

CCtrlEdit::CEditCaret::CEditCaret(const CCtrlEdit::CEditCaret &arg0)
{
    _ctor_1(arg0);
}

void CCtrlEdit::CEditCaret::_ctor_1(const CCtrlEdit::CEditCaret &arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlEdit::CEditCaret::CEditCaret()
{
}

void CCtrlEdit::CEditCaret::_ctor_0()
{
    new (this) CCtrlEdit::CEditCaret();
}

void CCtrlEdit::CEditCaret::MakeCaret(_x_com_ptr<IWzGr2DLayer> pLayerWnd, long l, long t, long height, long z)
{ // NOLINT(*-unnecessary-value-param)
    __sub_000DF080(this, nullptr, CreateNakedParam(pLayerWnd), l, t, height, z);
}

void CCtrlEdit::CEditCaret::SetCaret(long l, long t, long width)
{
    if (!m_bInit)
    {
        return;
    }

    m_dwLastSet = timeGetTime();
    m_pLayerCaret->Putcolor(0xFFFFFFFF);
    auto lt = m_pLayerCaret->Getlt();
    lt->RelMove(m_l + l, m_t + t, vtMissing, vtMissing);

    auto rb = m_pLayerCaret->Getrb();
    rb->RelMove(width, m_height, vtMissing, vtMissing);
    //__sub_000DEA60(this, nullptr, l, t, width);
}

void CCtrlEdit::CEditCaret::HideCaret()
{
    m_pLayerCaret->Putcolor(0xFFFFFF);
    //__sub_000DE6B0(this, nullptr);
}

void CCtrlEdit::CEditCaret::Update(int32_t bShow)
{
    /*auto showCaret = false;
    if (bShow)
    {
        auto t = timeGetTime();
        auto dt = (t - m_dwLastSet) / 300;
        showCaret = ((t - m_dwLastSet) / 300 & 1) != 0;
    }

    m_pLayerCaret->Putcolor(showCaret ? 0xFFFFFFFF : 0xFFFFFF);*/
    __sub_000DE6F0(this, nullptr, bShow);
}

void CCtrlEdit::CEditCaret::Clear()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlEdit::CEditCaret &CCtrlEdit::CEditCaret::operator=(const CCtrlEdit::CEditCaret &arg0)
{
    return _op_assign_8(this, arg0);
}

CCtrlEdit::CEditCaret &
CCtrlEdit::CEditCaret::_op_assign_8(CCtrlEdit::CEditCaret *pThis, const CCtrlEdit::CEditCaret &arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlEdit::CIMECandWnd::~CIMECandWnd()
{
	 UNIMPLEMENTED; // _dtor_0();
}

void CCtrlEdit::CIMECandWnd::_dtor_0()
{
    return __sub_000DF700(this, nullptr);
}

CCtrlEdit::CIMECandWnd::CIMECandWnd(const CCtrlEdit::CIMECandWnd &arg0)
{
    _ctor_1(arg0);
}

void CCtrlEdit::CIMECandWnd::_ctor_1(const CCtrlEdit::CIMECandWnd &arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlEdit::CIMECandWnd::CIMECandWnd()
{
    // UNIMPLEMENTED; //_ctor_0();
}

void CCtrlEdit::CIMECandWnd::_ctor_0()
{
    new (this) CCtrlEdit::CIMECandWnd();
    // return __sub_000DF680(this, nullptr);
}

void CCtrlEdit::CIMECandWnd::OnCreate(void *pData)
{
    __sub_000DF570(this, nullptr, pData);
}

void CCtrlEdit::CIMECandWnd::OnDestroy()
{
    CWndMan::GetInstance()->ReleaseCaptureWnd(this);
    //__sub_000DE770(this, nullptr);
}

int32_t CCtrlEdit::CIMECandWnd::OnActivate(int32_t bActive)
{
    return 0;
    // return __sub_000DF6D0(this, nullptr, bActive);
}

int32_t CCtrlEdit::CIMECandWnd::OnSetFocus(int32_t bFocus)
{
    return __sub_000DF6E0(this, nullptr, bFocus);
}

void CCtrlEdit::CIMECandWnd::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_000DE7A0(this, nullptr, msg, wParam, rx, ry);
}

void CCtrlEdit::CIMECandWnd::Draw(const tagRECT *pRect)
{
    __sub_000DFD00(this, nullptr, pRect);
}

CCtrlEdit::CIMECandWnd &CCtrlEdit::CIMECandWnd::operator=(const CCtrlEdit::CIMECandWnd &arg0)
{
    return _op_assign_9(this, arg0);
}

CCtrlEdit::CIMECandWnd &
CCtrlEdit::CIMECandWnd::_op_assign_9(CCtrlEdit::CIMECandWnd *pThis, const CCtrlEdit::CIMECandWnd &arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlEdit::CIMECandWnd::CREATEPARAM::~CREATEPARAM()
{
	 UNIMPLEMENTED; // _dtor_0();
}

void CCtrlEdit::CIMECandWnd::CREATEPARAM::_dtor_0()
{
    return __sub_000DF7C0(this, nullptr);
}

CCtrlEdit::CIMECandWnd::CREATEPARAM::CREATEPARAM(const CCtrlEdit::CIMECandWnd::CREATEPARAM &arg0)
{
    _ctor_1(arg0);
}

void CCtrlEdit::CIMECandWnd::CREATEPARAM::_ctor_1(const CCtrlEdit::CIMECandWnd::CREATEPARAM &arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlEdit::CIMECandWnd::CREATEPARAM::CREATEPARAM()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CCtrlEdit::CIMECandWnd::CREATEPARAM::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlEdit::CIMECandWnd::CREATEPARAM &
CCtrlEdit::CIMECandWnd::CREATEPARAM::operator=(const CCtrlEdit::CIMECandWnd::CREATEPARAM &arg0)
{
    return _op_assign_3(this, arg0);
}

CCtrlEdit::CIMECandWnd::CREATEPARAM &
CCtrlEdit::CIMECandWnd::CREATEPARAM::_op_assign_3(CCtrlEdit::CIMECandWnd::CREATEPARAM *pThis,
                                                  const CCtrlEdit::CIMECandWnd::CREATEPARAM &arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
