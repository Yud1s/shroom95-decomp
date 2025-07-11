// CtrlButton.cpp
#include "CtrlButton.hpp"
#include "CtrlButton_regen.ipp"
#include "spdlog/spdlog.h"

CCtrlButton* CCtrlButton::m_pButtonEntered{};

CCtrlCheckBox::~CCtrlCheckBox()
{
    //_dtor_0();
}

void CCtrlCheckBox::_dtor_0()
{
    this->~CCtrlCheckBox();
}

CCtrlCheckBox::CCtrlCheckBox(const CCtrlCheckBox& arg0)
{
    _ctor_1(arg0);
}

void CCtrlCheckBox::_ctor_1(const CCtrlCheckBox& arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlCheckBox::CCtrlCheckBox()
{
}

void CCtrlCheckBox::_ctor_0()
{
    new(this) CCtrlCheckBox();
}

void CCtrlCheckBox::CreateCtrl(CWnd* pParent, uint32_t nId, long l, long t, void* pData)
{
    __sub_000D6F60(this, nullptr, pParent, nId, l, t, pData);
}

int32_t CCtrlCheckBox::OnSetFocus(int32_t bFocus)
{
    if (bFocus)
    {
        return m_bAcceptFocus;
    }

    CWndMan::GetInstance()->ReleaseCaptureWnd(this);
    ChangeCheckBoxState();
    m_pParent->InvalidateRect(nullptr);
    return 1;
    // return __sub_000D46E0(this, nullptr, bFocus);
}

void CCtrlCheckBox::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    if (!IsEnabled())
    {
        return;
    }

    if (msg == WM_LBUTTONDOWN)
    {
        MouseDown();
    }
    else if (msg == WM_LBUTTONUP)
    {
        m_bChecked = !m_bChecked;
        MouseUp();
    }
    //__sub_000D4760(this, nullptr, msg, wParam, rx, ry);
}

int32_t CCtrlCheckBox::OnMouseWheel(long rx, long ry, long nWheel)
{
    if (!m_pParent)
    {
        return 0;
    }

    auto pry = m_pLTCtrl->Getry();
    auto prx = m_pLTCtrl->Getrx();

    return m_pParent->OnMouseWheel(rx + prx, ry + pry, nWheel);

    // return __sub_000D45A0(this, nullptr, rx, ry, nWheel);
}

void CCtrlCheckBox::Draw(long rx, long ry, const tagRECT* pRect)
{
    __sub_000D6360(this, nullptr, rx, ry, pRect);
}

void CCtrlCheckBox::SetEnable(int32_t bEnable)
{
    CCtrlWnd::SetEnable(bEnable);
    ChangeCheckBoxState();
    //__sub_000D4550(this, nullptr, bEnable);
}

void CCtrlCheckBox::SetChecked(int32_t bChecked)
{
    if (IsEnabled())
    {
        m_bChecked = bChecked;
        ChangeCheckBoxState();
    }
    //__sub_000D4570(this, nullptr, bChecked);
}

int32_t CCtrlCheckBox::IsChecked() const
{
    return m_bChecked;
}

// ReSharper disable once CppPassValueParameterByConstReference
void CCtrlCheckBox::SetText(ZXString<char> arg0)
{
    m_sText = arg0;
    InvalidateRect();
}

void CCtrlCheckBox::ChangeCheckBoxState()
{
    auto base = IsEnabled() ? CHECKBOX_UNCHECKED : CHECKBOX_UNCHECKED_DISABLED;
    m_nCheckBoxState = m_bChecked ? base + 1 : base;
    InvalidateRect();
    //__sub_000D4510(this, nullptr);
}

void CCtrlCheckBox::MouseDown()
{
    if (IsEnabled())
    {
        CWndMan::GetInstance()->SetCaptureWnd(this);
        ChangeCheckBoxState();
    }
    //__sub_000D4660(this, nullptr);
}

void CCtrlCheckBox::MouseUp()
{
    if (IsEnabled())
    {
        CWndMan::GetInstance()->ReleaseCaptureWnd(this);
        ChangeCheckBoxState();
        m_pParent->OnChildNotify(m_nCtrlId, 200, m_bChecked);
    }

    //__sub_000D4690(this, nullptr);
}

CCtrlCheckBox& CCtrlCheckBox::operator=(const CCtrlCheckBox& arg0)
{
    return _op_assign_18(this, arg0);
}

CCtrlCheckBox& CCtrlCheckBox::_op_assign_18(CCtrlCheckBox* pThis, const CCtrlCheckBox& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlCheckBox::CREATEPARAM::~CREATEPARAM()
{
}

void CCtrlCheckBox::CREATEPARAM::_dtor_0()
{
    this->~CREATEPARAM();
    // return __sub_00084710(this, nullptr);
}

CCtrlCheckBox::CREATEPARAM::CREATEPARAM(const CCtrlCheckBox::CREATEPARAM& arg0)
{
    _ctor_1(arg0);
}

void CCtrlCheckBox::CREATEPARAM::_ctor_1(const CCtrlCheckBox::CREATEPARAM& arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlCheckBox::CREATEPARAM::CREATEPARAM()
{
    nBackColor = 0xFFFFFFFF;
    bAcceptFocus = 1;
    nFontColor = 0xff000000;
    nFontHeight = 0xc;
    bDrawLineAtFocus = 1;

    // TODO
    sFont = StringPool::GetInstance().GetBSTR(0x1a25);
}

void CCtrlCheckBox::CREATEPARAM::_ctor_0()
{
    new(this) CCtrlCheckBox::CREATEPARAM();
    // return __sub_00088990(this, nullptr);
}

CCtrlCheckBox::CREATEPARAM& CCtrlCheckBox::CREATEPARAM::operator=(const CCtrlCheckBox::CREATEPARAM& arg0)
{
    return _op_assign_3(this, arg0);
}

CCtrlCheckBox::CREATEPARAM& CCtrlCheckBox::CREATEPARAM::_op_assign_3(CCtrlCheckBox::CREATEPARAM* pThis,
                                                                     const CCtrlCheckBox::CREATEPARAM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlButton::~CCtrlButton()
{
}

void CCtrlButton::_dtor_0()
{
    this->~CCtrlButton();
    // return __sub_00071980(this, nullptr);
}

CCtrlButton::CCtrlButton(const CCtrlButton& arg0)
{
    _ctor_1(arg0);
}

void CCtrlButton::_ctor_1(const CCtrlButton& arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlButton::CCtrlButton()
{
    // UNIMPLEMENTED; //_ctor_0();
}

void CCtrlButton::_ctor_0()
{
    //return __sub_00071740(this, nullptr);
    new(this) CCtrlButton();
}

void CCtrlButton::ForcedMouseEnter(bool enter)
{
    MouseEnter(enter, true);
}

void CCtrlButton::CreateCtrl(CWnd* pParent, const uint32_t nId, const long l, long t, const long decClickArea,
                             void* pData)
{
    const auto data = static_cast<CREATEPARAM*>(pData);
    m_bAcceptFocus = data->bAcceptFocus;
    m_bDrawBack = data->bDrawBack;
    m_bAnimateOnce = data->bAnimateOnce;
    m_bMouseEnter = false;
    m_nDecClickArea = decClickArea;
    m_bPressed = false;
    m_bPressedByKey = false;
    m_bKeyFocused = false;
    m_bToolTip = false;
    m_sToolTipTitle = "";
    m_uiToolTip.ClearToolTip();

    SetButtonImage(data->sUOL);

    auto h = 0;
    auto w = 0;

    for (const auto& prop : m_apPropButton)
    {
        if (!prop)
        {
            continue;
        }

        auto n = prop->Getcount();
        for (auto i = 0; i < n; i++)
        {
            wchar_t buf[32];
            _itow_s(i, buf, 10);
            const auto canvas = prop->GetItemT<IWzCanvas>(Ztl_bstr_t(buf));
            w = std::max<long>(canvas->Getwidth(), w);
            h = std::max<long>(canvas->Getheight(), h);
        }
    }

    LoadToolTipFromData(reinterpret_cast<const wchar_t*>(data->sUOL.c_str()));
    m_bSelfDisable = false;
    CCtrlWnd::CreateCtrl(pParent, nId, l, t, w, h, pData);

    //__sub_000D77D0(this, nullptr, pParent, nId, l, t, decClickArea, pData);
}

void CCtrlButton::Destroy()
{
    if (this == m_pButtonEntered)
    {
        m_pButtonEntered = nullptr;
    }
    m_pLayerFocusFrame = nullptr;
    ClearToolTip();
    CCtrlWnd::Destroy();
    //__sub_00071980(this, nullptr);
}

void CCtrlButton::OnKey(uint32_t wParam, int32_t lParam)
{
    if (lParam >= 0)
    {
        if (wParam == 32)
        {
            if (!this->m_bPressed)
            {
                this->m_nDecClickArea = 0;
                this->m_bPressed = 1;
                ChangeDisplayState(1);
            }
            return;
        }
        m_pParent->OnKey(wParam, lParam);
        return;
    }
    if (wParam != 32)
    {
        m_pParent->OnKey(wParam, lParam);
        return;
    }
    if (this->m_bPressed)
    {
        this->m_nDecClickArea = 0;
        this->m_bPressed = 0;
        play_ui_sound_str(0x5d0);
        ChangeDisplayState(0);
        m_pParent->OnChildNotify(m_nCtrlId, 100, 0);
    }
}

void CCtrlButton::OnMouseButton(const uint32_t msg, const uint32_t wParam, const long rx, const long ry)
{
    //__sub_000D6D10(this, nullptr, msg, wParam, rx, ry);
    if (!HitTest(rx, ry))
        return;

    if (msg == 0x201)
    {
        MouseDown();
    }
    else if (msg == 0x202)
    {
        auto parent = m_pParent;
        auto cursorState = 4;
        if (parent && parent->IsKindOf(&CUIStatusBar::ms_RTTI_CUIStatusBar) && m_nCtrlId == 1000)
            cursorState = 6;
        CInputSystem::GetInstance()->SetCursorState(cursorState);
        MouseUp();
    }
    else if (msg == 0x203)
    {
        MouseDown();
    }
}

void CCtrlButton::OnMouseEnter(const int32_t bEnter)
{
    if (!bEnter)
    {
        m_bMouseEnter = false;
        MouseEnter(false, false);
    }
    //__sub_000D7B30(this, nullptr, bEnter);
}

int32_t CCtrlButton::OnMouseMove(long rx, long ry)
{
    if (!HitTest(rx, ry))
    {
        if (m_dwDisplayStarted)
        {
            m_dwDisplayStarted = 0;
            MouseEnter(false, false);
        }
    }
    else if (!m_dwDisplayStarted)
    {
        m_dwDisplayStarted = 1;
        MouseEnter(true, false);
    }

    return 0;
    //return __sub_000D7AD0(this, nullptr, rx, ry);
}

void CCtrlButton::Draw(const long rx, const long ry, const tagRECT* pRect)
{
    const auto btnCanvas = GetButtonCanvas();
    const auto w = btnCanvas->Getwidth();
    const auto h = btnCanvas->Getheight();

    const auto canvas = GetCanvas(0);
    if (m_bDrawBack)
    {
        Z_CHECK_HR(canvas->DrawRectangle(rx, ry, m_width, m_height, 0xFFFFFF));
    }

    Z_CHECK_HR(canvas->Copy(
        (m_width - w) / 2 + rx,
        (m_height - h) / 2 + ry,
        btnCanvas,
        Ztl_variant_t(0xff, VT_I4)));

    //__sub_000D4CA0(this, nullptr, rx, ry, pRect);
}

void CCtrlButton::Update()
{
    const auto inpSys = CInputSystem::GetInstance();
    if (this != m_pButtonEntered)
    {
        if (m_bPressed && inpSys->IsKeyPressed(1))
        {
            m_bPressed = 0;
            m_bPressedByKey = 0;
            ChangeDisplayState(BUTTON_STATE_NORMAL);
            return;
        }
    }

    if (m_bPressed && m_nDisplayState == BUTTON_STATE_NORMAL)
    {
        return;
    }

    auto t = get_update_time();
    if (m_nAniCount > 1 && m_nAniDelay < (t - m_dwDisplayStarted))
    {
        ChangeDisplayFrame();
    }
    //__sub_00071980(this, nullptr);
}

void CCtrlButton::SetEnable(int32_t bEnable)
{
    if (IsEnabled() != bEnable)
    {
        m_nDecClickArea = 0;
        m_bPressed = false;
        ChangeDisplayState(bEnable ? 0 : 2);
    }

    CCtrlWnd::SetEnable(bEnable);
}

void CCtrlButton::ClearToolTip()
{
    m_sToolTipDesc.Clear();
}

void CCtrlButton::SetShow(int32_t bShow)
{
    CCtrlWnd::SetShow(bShow);
}

int32_t CCtrlButton::HitTest(long rx, long ry)
{
    auto ar = m_nDecClickArea;
    return ar <= rx && (rx < (this->m_width - ar) && (ar <= ry && ry < (this->m_height - ar)));
    // return __sub_000D44D0(this, nullptr, rx, ry);
}

void CCtrlButton::EnableToolTip(int32_t arg0)
{
    m_bToolTip = arg0;
}

void CCtrlButton::LoadToolTip(const wchar_t* sUOL, int32_t bEnable, int32_t bUpDir)
{
    __sub_000D55E0(this, nullptr, sUOL, bEnable, bUpDir);
}

void CCtrlButton::SetToolTip(const char* sTitle, const char* sDesc, int32_t bUpDir)
{
    __sub_000D49D0(this, nullptr, sTitle, sDesc, bUpDir);
}

void CCtrlButton::SetSimpleToolTip(const ZXString<char>& sDesc, const ZXString<char>& sPosition,
                                   const int32_t bMultiLine)
{
    __sub_000D5B60(this, nullptr, CreateNakedParam(sDesc), CreateNakedParam(sPosition), bMultiLine);
}

void CCtrlButton::LoadToolTipbyString(const char* sText, const int32_t bEnable, const int32_t bUpDir)
{
    __sub_000D4990(this, nullptr, sText, bEnable, bUpDir);
}

void CCtrlButton::LoadToolTipFromData(const wchar_t* sUOL)
{
    __sub_000D58E0(this, nullptr, sUOL);
}

void CCtrlButton::ForceToMouseEnter(int32_t arg0) const
{
    //TODO MouseEnter(arg0, true);
    UNIMPLEMENTED;
}

void CCtrlButton::SetKeyFocus(const int32_t bFocus)
{
    __sub_000D5250(this, nullptr, bFocus);
}

// ReSharper disable once CppPassValueParameterByConstReference
void CCtrlButton::SetButtonImage(ZXString16 sUOL)
{
    __sub_000D66D0(this, nullptr, CreateNakedParam(sUOL));
}

void CCtrlButton::SetSelfDisable()
{
    m_bSelfDisable = true;
}

void CCtrlButton::ClearSelfDisable()
{
    m_bSelfDisable = false;
}

_x_com_ptr<IWzCanvas> CCtrlButton::GetButtonCanvas()
{
    wchar_t buf[32]{};
    _itow_s(m_nDisplayFrame, buf, 10);

    const auto& prop = m_apPropButton[m_nDisplayState];
    const auto canvas = prop->GetItemT<IWzCanvas>(buf);
    auto xcanvas = _x_com_ptr<IWzCanvas>(canvas);

    if (m_nDisplayState == BUTTON_STATE_DISABLED && m_bSelfDisable)
    {
        make_gray_canvas(xcanvas);
    }

    return xcanvas;
    //_x_com_ptr<IWzCanvas> ret;
    //return *__sub_000D4B60(this, nullptr, &ret);
}

_x_com_ptr<IWzCanvas> CCtrlButton::GetKeyFocusedCanvas()
{
    _x_com_ptr<IWzCanvas> ret;
    return *__sub_000D4B60(this, nullptr, &ret);
}

_x_com_ptr<IWzProperty> CCtrlButton::GetPropFocusFrame()
{
    return __sub_0041CAA0(this, nullptr);
}

void CCtrlButton::ChangeDisplayState(int32_t nState)
{
    __sub_000D4E90(this, nullptr, nState);
}

void CCtrlButton::ChangeDisplayFrame()
{
    //__sub_00071980(this, nullptr);
    auto displayFrame = m_nDisplayFrame;
    auto aniCount = m_nAniCount;
    auto nextFrame = displayFrame + 1;

    if (nextFrame >= m_nAniCount && m_bAnimateOnce)
    {
        return;
    }

    m_nDisplayFrame = nextFrame % aniCount;
    m_dwDisplayStarted = get_update_time();
    auto canvas = GetButtonCanvas();

    auto prop = canvas->Getproperty();
    auto item = prop->Getitem(StringPool::GetInstance().GetBSTR(0x1aa9));
    auto aniDelay = get_int32(item, 120);
    m_nAniDelay = aniDelay;
    InvalidateRect();
}

void CCtrlButton::MouseDown()
{
    if (IsEnabled())
    {
        m_bPressed = 1;
        m_bPressedByKey = 0;
        ChangeDisplayState(1);
    }
    //__sub_00071980(this, nullptr);
}

void CCtrlButton::MouseUp()
{
    if (IsEnabled() && m_bPressed)
    {
        m_bPressed = false;
        m_bPressedByKey = false;
        play_ui_sound(L"BtMouseClick");
        ChangeDisplayState(3);
        m_pParent->OnChildNotify(m_nCtrlId, 100, 0);
    }

    //__sub_00071980(this, nullptr);
}

void CCtrlButton::MouseEnter(int32_t bEnter, int32_t bForced)
{
    //TODO(ui) fix this
    if (!IsEnabled() || m_bKeyFocused)
    {
        return;
    }
    m_pButtonEntered = bEnter ? this : nullptr;

    if (bEnter && !bForced)
    {
        auto state = 4;
        if (m_pParent && m_nCtrlId == 1000 && m_pParent->IsKindOf(&CUIStatusBar::ms_RTTI_CUIStatusBar))
        {
            state = 6;
        }
        CInputSystem::GetInstance()->SetCursorState(state);
    }

    if (m_bPressedByKey)
    {
        return;
    }

    if (!bEnter)
    {
        ChangeDisplayState(BUTTON_STATE_NORMAL);
        if (!bForced)
        {
            NotifyToParent(0x65, bForced);
        }
    }
    else if (m_bPressed)
    {
        ChangeDisplayState(BUTTON_STATE_PRESSED);
        if (!bForced)
        {
            NotifyToParent(0x65, bForced);
        }
    }
    else
    {
        ChangeDisplayState(BUTTON_STATE_MOUSEOVER);
        if (!bForced)
        {
            auto sound = StringPool::GetInstance().GetStringW(0x5d1);
            play_ui_sound(reinterpret_cast<const wchar_t*>(sound.c_str()));
            NotifyToParent(0x65, bForced);
        }
    }

    //__sub_000D6DA0(this, nullptr, bEnter, bForced);
}

int32_t CCtrlButton::IsEntered() const
{
    return m_bMouseEnter;
}

CCtrlButton& CCtrlButton::operator=(const CCtrlButton& arg0)
{
    return _op_assign_38(this, arg0);
}

CCtrlButton& CCtrlButton::_op_assign_38(CCtrlButton* pThis, const CCtrlButton& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlButton::CREATEPARAM::~CREATEPARAM()
{
}

void CCtrlButton::CREATEPARAM::_dtor_0()
{
    this->~CREATEPARAM();
    // return __sub_0002CB20(this, nullptr);
}

CCtrlButton::CREATEPARAM::CREATEPARAM(const CCtrlButton::CREATEPARAM& arg0)
{
    _ctor_1(arg0);
}

void CCtrlButton::CREATEPARAM::_ctor_1(const CCtrlButton::CREATEPARAM& arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlButton::CREATEPARAM::CREATEPARAM()
{
    bAcceptFocus = 1;
    // UNIMPLEMENTED; //_ctor_0();
}

void CCtrlButton::CREATEPARAM::_ctor_0()
{
    new(this) CCtrlButton::CREATEPARAM();
    // return __sub_0002C9F0(this, nullptr);
}

CCtrlButton::CREATEPARAM& CCtrlButton::CREATEPARAM::operator=(const CCtrlButton::CREATEPARAM& arg0)
{
    return _op_assign_3(this, arg0);
}

CCtrlButton::CREATEPARAM& CCtrlButton::CREATEPARAM::_op_assign_3(CCtrlButton::CREATEPARAM* pThis,
                                                                 const CCtrlButton::CREATEPARAM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlButtonWithAniState::~CCtrlButtonWithAniState()
{
}

void CCtrlButtonWithAniState::_dtor_0()
{
    this->~CCtrlButtonWithAniState();
    // return __sub_000D7790(this, nullptr);
}

CCtrlButtonWithAniState::CCtrlButtonWithAniState(const CCtrlButtonWithAniState& arg0)
{
    _ctor_1(arg0);
}

void CCtrlButtonWithAniState::_ctor_1(const CCtrlButtonWithAniState& arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlButtonWithAniState::CCtrlButtonWithAniState()
{
}

void CCtrlButtonWithAniState::_ctor_0()
{
    new(this) CCtrlButtonWithAniState();
}

void CCtrlButtonWithAniState::CreateCtrl(CWnd* pParent, uint32_t nId, long l, long t, long decClickArea, void* pData)
{
    CCtrlButton::CreateCtrl(pParent, nId, l, t, decClickArea, pData);
    auto rm = get_rm();
    auto prop = rm->GetObjectT<IWzProperty>(
        reinterpret_cast<const wchar_t*>(static_cast<CREATEPARAM*>(pData)->sUOL.c_str()));
    m_pProp_Ani = prop->GetItemT<IWzProperty>(StringPool::GetInstance().GetBSTR(1558));

    m_pProp_Normal = m_apPropButton[0];
    m_pProp_MouseOver = m_apPropButton[3];
}

void CCtrlButtonWithAniState::Update()
{
    CCtrlButton::Update();
    auto t = get_update_time();
    if (m_bOnAnimate && m_tStopAnimation && t > m_tStopAnimation)
    {
        Animate(false, 0);
    }
    //__sub_000D7790(this, nullptr);
}

int32_t CCtrlButtonWithAniState::IsOnAnimate() const
{
    return m_bOnAnimate;
}

void CCtrlButtonWithAniState::Animate(const int32_t bAnimate, const long tDuration)
{
    if (!bAnimate)
    {
        m_apPropButton[0] = m_pProp_Normal;
        m_apPropButton[3] = m_pProp_MouseOver;
        m_tStopAnimation = 0;
    }
    else
    {
        m_apPropButton[0] = m_pProp_Ani;
        m_apPropButton[3] = m_pProp_Ani;

        if (tDuration != 0)
        {
            m_tStopAnimation = get_update_time() + tDuration;
        }
        else
        {
            m_tStopAnimation = 0;
        }
    }
    m_bOnAnimate = bAnimate;
    ChangeDisplayState(m_nDisplayState);
    //__sub_000D65D0(this, nullptr, bAnimate, tDuration);
}

CCtrlButtonWithAniState& CCtrlButtonWithAniState::operator=(const CCtrlButtonWithAniState& arg0)
{
    return _op_assign_10(this, arg0);
}

CCtrlButtonWithAniState& CCtrlButtonWithAniState::_op_assign_10(CCtrlButtonWithAniState* pThis,
                                                                const CCtrlButtonWithAniState& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlOriginButton::~CCtrlOriginButton()
{
}

void CCtrlOriginButton::_dtor_0()
{
    this->~CCtrlOriginButton();
}

CCtrlOriginButton::CCtrlOriginButton(const CCtrlOriginButton& arg0)
{
    _ctor_1(arg0);
}

void CCtrlOriginButton::_ctor_1(const CCtrlOriginButton& arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlOriginButton::CCtrlOriginButton()
{
}

void CCtrlOriginButton::_ctor_0()
{
    new(this) CCtrlOriginButton();
}

void CCtrlOriginButton::CreateCtrl(CWnd* pParent, uint32_t nId, long l, long t, long decClickArea, void* pData)
{
    auto* param = static_cast<CREATEPARAM*>(pData);
    //__sub_000D7B50(this, nullptr, pParent, nId, l, t, decClickArea, pData);
    CCtrlButton::CreateCtrl(pParent, nId, l, t, decClickArea, pData);

    auto bgProp = get_rm()->GetObjectT<IWzProperty>(param->sUOL.c_str());


    m_pPropChecked = bgProp->GetItemT<IWzProperty>(L"checked");
}

void CCtrlOriginButton::Draw(long rx, long ry, const tagRECT* pRect)
{
    __sub_000D5E30(this, nullptr, rx, ry, pRect);
}

int32_t CCtrlOriginButton::HitTest(long rx, long ry)
{
    //return __sub_000D60E0(this, nullptr, rx, ry);
    auto canvas = GetButtonCanvas();

    auto cx = canvas->Getcx();
    auto cy = canvas->Getcy();
    if (this->m_nDecClickArea - cx > rx)
        return 0;

    if (cx >= this->m_width - this->m_nDecClickArea - rx)
        return 0;

    if (this->m_nDecClickArea - rx > ry)
        return 0;

    if (ry >= this->m_height - this->m_nDecClickArea - cy)
        return 0;

    return 1;
}

tagRECT CCtrlOriginButton::GetRect()
{
    //return __sub_000D6260(this, nullptr);
    auto rc = CCtrlWnd::GetRect();
    auto canvas = GetButtonCanvas();
    OffsetRect(&rc, -canvas->Getcx(), -canvas->Getcy());
    return rc;
}

void CCtrlOriginButton::SetCheck(int32_t arg0)
{
    if (IsEnabled())
    {
        m_bChecked = arg0;
        InvalidateRect();
    }
}

int32_t CCtrlOriginButton::IsChecked() const
{
    return m_bChecked;
}

CCtrlOriginButton& CCtrlOriginButton::operator=(const CCtrlOriginButton& arg0)
{
    return _op_assign_9(this, arg0);
}

CCtrlOriginButton& CCtrlOriginButton::_op_assign_9(CCtrlOriginButton* pThis, const CCtrlOriginButton& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
