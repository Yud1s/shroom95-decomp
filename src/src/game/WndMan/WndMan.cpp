// WndMan.cpp
#include "WndMan.hpp"
#include <Windowsx.h>

#include <Login/Login.hpp>

#include "spdlog/spdlog.h"
#include "Stage/Stage.hpp"

static ZRef<CStage> FAKE_ZREF_STAGE{};

static ZList<CWnd*> FAKE_ZListCWnd_{};

#include "WndMan_regen.ipp"

ZList<CWnd*> CWndMan::ms_lpWindow{};
ZList<CWnd*> CWndMan::ms_lpUpdateWindow{};
ZList<CWnd*> CWndMan::ms_lpInvalidatedWindow{};
int32_t CWndMan::ms_tLastMouseMessage = timeGetTime();

DRAGCTX::~DRAGCTX() = default;

void DRAGCTX::_dtor_0()
{
    this->~DRAGCTX();
}

DRAGCTX::DRAGCTX(const DRAGCTX& arg0)
{
    _ctor_1(arg0);
}

void DRAGCTX::_ctor_1(const DRAGCTX& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

DRAGCTX::DRAGCTX() = default;

void DRAGCTX::_ctor_0()
{
    new(this) DRAGCTX();
}

DRAGCTX& DRAGCTX::operator=(const DRAGCTX& arg0)
{
    return _op_assign_3(this, arg0);
}

DRAGCTX& DRAGCTX::_op_assign_3(DRAGCTX* pThis, const DRAGCTX& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWndMan::~CWndMan()
{
    if (m_hOldIMC != reinterpret_cast<HIMC__*>(-1))
    {
        ImmAssociateContext(m_hWnd, m_hOldIMC);
    }

    if (m_hNewIMC != reinterpret_cast<HIMC__*>(-1))
    {
        ImmDestroyContext(m_hNewIMC);
    }
}

void CWndMan::_dtor_0()
{
    return __sub_005B2D90(this, nullptr);
}

CWndMan::CWndMan(const CWndMan& arg0)
{
    //_ctor_1(arg0);
}

void CWndMan::_ctor_1(const CWndMan& arg0)
{
    new(this) CWndMan(arg0);
}

CWndMan::CWndMan(HWND__* hWnd)
{
    m_hWnd = hWnd;
    m_hNewIMC = reinterpret_cast<HIMC__*>(-1);
    m_hOldIMC = reinterpret_cast<HIMC__*>(-1);
    ms_pInstance = this;
    m_hNewIMC = ImmCreateContext();
    m_hOldIMC = ImmAssociateContext(m_hWnd, m_hNewIMC);
    m_dwIMEProperty = ImmGetProperty(GetKeyboardLayout(0), 4);

    for (auto& v : m_pOrgWindow)
    {
        v = G_PCOM.CreateVector2D();
    }
    ResetOrgWindow();
    m_ptCursor.x = 0;
    m_ptCursor.y = 0;
    ClearDragContext();
    //_ctor_0(m_hWnd);
}

void CWndMan::_ctor_0(HWND__* hWnd)
{
    new(this) CWndMan(hWnd);
    // return __sub_005B4390(this, nullptr, m_hWnd);
}

CWnd* CWndMan::GetActiveWnd() const
{
    return m_pActiveWnd;
}

IUIMsgHandler* CWndMan::GetFocus() const
{
    return m_pFocus;
}

IUIMsgHandler* CWndMan::GetCapture()
{
    const auto tail = m_lpCapture.GetTailPosition();
    return tail ? *tail : nullptr;
}

int32_t CWndMan::SetActiveWnd(CWnd* pWnd)
{
    if (!SetActiveWndImp(pWnd))
    {
        return 0;
    }

    if (pWnd == nullptr)
    {
        SetFocusImp(nullptr);
    }
    else
    {
        SetFocusImp(dynamic_cast<IUIMsgHandler*>(pWnd));
    }

    return 1;
}

void CWndMan::SetFocus(IUIMsgHandler* pHandler)
{
    if ((!pHandler || pHandler->IsEnabled()) && this->m_pFocus != pHandler)
    {
        CWnd* parent = nullptr;
        auto ctrlWnd = dynamic_cast<CCtrlWnd*>(pHandler);
        if (ctrlWnd)
        {
            parent = ctrlWnd->GetParent();
        }
        else
        {
            parent = dynamic_cast<CWnd*>(pHandler);
        }

        if (SetActiveWndImp(parent))
        {
            SetFocusImp(pHandler);
            if (ctrlWnd)
                parent->SetFocusChild(ctrlWnd);
        }
    }
}

void CWndMan::SetCaptureWnd(IUIMsgHandler* pHandler)
{
    ClearDragContext();
    ReleaseCaptureWnd(pHandler);
    m_lpCapture.AddTail(pHandler);
    //__sub_005B47F0(this, nullptr, pHandler);
}

void CWndMan::ReleaseCaptureWnd(IUIMsgHandler* pHandler)
{
    if (const auto p = m_lpCapture.Find(pHandler))
    {
        m_lpCapture.RemoveAt(p);
    }
    //__sub_005B3030(this, nullptr, pHandler);
}

void CWndMan::GetCursorPos(tagPOINT* lpPoint, int32_t bField) const
{
    const auto inpSys = CInputSystem::ms_pInstance;
    if (!inpSys)
    {
        return;
    }
    inpSys->GetCursorPos(lpPoint);
    if (!bField)
    {
        return;
    }

    const auto& top = m_pOrgWindow[0];
    lpPoint->x += top->Getx();
    lpPoint->y += top->Gety();

    //__sub_005B1540(this, nullptr, lpPoint, bField);
}

tagPOINT CWndMan::GetCursorPosPt(bool bField) const
{
    tagPOINT pt{};
    GetCursorPos(&pt, bField);
    return pt;
}

void CWndMan::SetCursorPos(tagPOINT pt, int32_t bField)
{
    const auto inp_sys = CInputSystem::ms_pInstance;
    if (!inp_sys)
    {
        return;
    }

    if (!bField)
    {
        return;
    }

    tagPOINT pos{};
    GetCursorPos(&pos, bField);

    pt.x -= pos.x;
    pt.y -= pos.y;
    inp_sys->SetCursorPos(pt.x, pt.y);
}

void CWndMan::BeginDragDrop(IUIMsgHandler* pContainer, IDraggable* pObj, int32_t bDropByMouseUp)
{
    m_bDropByMouseUp = bDropByMouseUp;
    if (m_pDragWnd)
    {
        m_pDragWnd = nullptr;
    }

    const auto inpSys = CInputSystem::GetInstance();
    inpSys->SetCursorState(0xb);
    m_ctxDrag.pContainer = pContainer;
    m_ctxDrag.pObj = pObj;

    const auto objLayer = pObj->m_pLayer;
    const auto orgVec = m_pOrgWindow[0];

    const auto nX = objLayer->Getx() - orgVec->Getx();
    const auto nY = objLayer->Gety() - orgVec->Gety();

    objLayer->RelMove(nX, nY, vtMissing, vtMissing);
    objLayer->Putoverlay(vtMissing); // TODO: vtempty
    objLayer->Putz(0x7ffffffd);

    if (m_pCursorHandler)
    {
        if (m_pCursorHandler->IsEnabled())
        {
            m_pCursorHandler->OnMouseEnter(0);
        }
        m_pCursorHandler = nullptr;
    }

    if (pContainer)
    {
        const auto l = pContainer->GetAbsLeft();
        const auto t = pContainer->GetAbsTop();
        pContainer->OnDraggableMove(
            1,
            pObj,
            m_ptCursor.x - l,
            m_ptCursor.y - t);
        m_pCursorHandler = pContainer;
    }

    //__sub_005B3380(this, nullptr, pContainer, pObj, bDropByMouseUp);
}

void CWndMan::EndDragDrop(long rx, long ry, int32_t bDblClk)
{
    const auto pObj = m_ctxDrag.pObj.op_ptr();
    if (!pObj)
    {
        return;
    }

    if (m_pCursorHandler)
    {
        m_pCursorHandler->OnDraggableMove(0, pObj, rx, ry);
    }

    if (m_pLayer)
    {
        const auto alpha = pObj->m_pLayer->Getalpha();
        alpha->RelMove(0, 0, Ztl_variant_t(), Ztl_variant_t());
    }
    ClearDragContext();

    const auto inpSys = CInputSystem::GetInstance();
    if (m_pCursorHandler && m_pCursorHandler->IsEnabled())
    {
        m_pCursorHandler->OnMouseEnter(1);
        inpSys->SetCursorState(-1);
    }
    else if (!m_pCursorHandler)
    {
        inpSys->SetCursorState(0);
    }

    pObj->m_OldIcon = FUNCKEY_MAPPED();
    auto dropResult = 0;
    if (bDblClk)
    {
        pObj->OnDoubleClicked();
    }
    else
    {
        dropResult = pObj->OnDropped(m_ctxDrag.pContainer, m_pCursorHandler, rx, ry);
    }

    if (m_pLayer)
    {
        const auto alpha = pObj->m_pLayer->Getalpha();
        alpha->RelMove(128, 0, Ztl_variant_t(), Ztl_variant_t());
    }

    if (dropResult && m_pCursorHandler && m_pCursorHandler->IsKindOf(&CUIStatusBar::ms_RTTI_CUIStatusBar))
    {
        if (pObj->m_OldIcon.nType != 0)
        {
            CUIStatusBar::GetInstance()->ChangeDragFuncKeyMappedIcon(
                rx,
                ry,
                pObj->m_OldIcon);
        }
    }

    //__sub_005B37C0(this, nullptr, rx, ry, bDblClk);
}

void CWndMan::ClearDragContext()
{
    m_ctxDrag.pContainer = nullptr;
    m_ctxDrag.pObj = 0;
    //__sub_005B3060(this, nullptr);
}

void setImmWnd(HIMC ctx, uint32_t m_dwIMEProperty)
{
    CANDIDATEFORM cdf{};
    if ((m_dwIMEProperty & 0x10000) != 0)
    {
        cdf.dwIndex = 0;
        cdf.dwStyle = 64;
        cdf.ptCurrentPos.x = -GetSystemMetrics(0);
        cdf.ptCurrentPos.y = -GetSystemMetrics(1);
        ImmSetCandidateWindow(ctx, &cdf);
    }
    else
    {
        for (auto i = 0; i < 4; ++i)
        {
            if (ImmGetCandidateWindow(ctx, i, &cdf) && cdf.dwStyle)
            {
                cdf.dwStyle = 0;
                ImmSetCandidateWindow(ctx, &cdf);
            }
        }
    }
}


void immStartComp(HWND__* hWnd)
{
    if (auto ctx = ImmGetContext(hWnd))
    {
        COMPOSITIONFORM cdf{};
        cdf.dwStyle = 2;
        cdf.ptCurrentPos.x = -GetSystemMetrics(0);
        cdf.ptCurrentPos.y = -GetSystemMetrics(1);
        ImmSetCompositionWindow(ctx, &cdf);
        ImmReleaseContext(hWnd, ctx);
    }
}


int32_t CWndMan::TranslateMessage(uint32_t& msg, uint32_t& wParam, long& lParam, long* plResult)
{
    //return __sub_005B5360(this, nullptr, message, wParam, lParam, plResult);
    auto inp = CInputSystem::GetInstance();
    unsigned long specialFlag = 0;
    unsigned long flag = 0;
    bool isDown = msg == WM_KEYDOWN || msg == WM_SYSKEYDOWN;
    char c = 0;
    switch (msg)
    {
    case WM_INPUTLANGCHANGEREQUEST:
        return 1;
    case WM_INPUTLANGCHANGE:
        m_dwIMEProperty = ImmGetProperty(GetKeyboardLayout(0), 0);
        if (const auto ctx = ImmGetContext(m_hWnd))
        {
            setImmWnd(ctx, m_dwIMEProperty);
            ImmReleaseContext(this->m_hWnd, ctx);
            SendIMEMode();
        }
        break;
    case WM_KEYDOWN:
    case WM_KEYUP:
    case WM_SYSKEYDOWN:
    case WM_SYSKEYUP:
        if (!inp || inp->m_apDevice[0])
        {
            if (!m_pFocus || !m_pFocus->IsKindOf(&CCtrlEdit::ms_RTTI_CCtrlEdit))
                return 0;
        }

        flag = isDown ? 0 : 0x80000000;
        specialFlag = inp->GetSpecialKeyFlag();

        lParam = flag | lParam & 0x1FF0000 | specialFlag;
        msg = 256;
        *plResult = ProcessKey(msg, wParam, lParam);
        return *plResult;
    case WM_CHAR:
        // Cast required here toi unsigned later mby
        c = static_cast<char>(wParam);
        if (wParam != 13 && (c < 0x20 || c >= 0x7F))
            return 1;
        SendIMEResult(reinterpret_cast<const char*>(&wParam));
        break;
    case WM_IME_STARTCOMPOSITION:
        if ((m_dwIMEProperty & 0x20000) == 0 || (m_dwIMEProperty & 0x10000) == 0)
            return 1;
        immStartComp(m_hWnd);
        break;
    case WM_IME_NOTIFY:
        ProcessIMENotify(wParam);
        if ((m_dwIMEProperty & 0x20000) == 0 && (m_dwIMEProperty & 0x10000) != 0)
        {
            *plResult = 0;
            return 1;
        }
        break;
    case WM_IME_COMPOSITION:
        ProcessIMEComposition(lParam);
        if ((m_dwIMEProperty & 0x20000) == 0 && (m_dwIMEProperty & 0x10000) != 0)
        {
            *plResult = 0;
            return 1;
        }
        break;

    case WM_MOUSEMOVE:
    case WM_LBUTTONDOWN:
    case WM_LBUTTONUP:
    case WM_LBUTTONDBLCLK:
    case WM_RBUTTONDOWN:
    case WM_RBUTTONUP:
    case WM_RBUTTONDBLCLK:
    case WM_MOUSEWHEEL:
        if (!inp || inp->m_apDevice[1])
            return 0;
        if (msg != WM_MOUSEWHEEL)
            inp->SetCursorVectorPos(GET_X_LPARAM(lParam), GET_Y_LPARAM(lParam));
        *plResult = ProcessMouse(msg, wParam, lParam);
        return 0;

    default:
        return 0;
    }

    *plResult = DefWindowProc(m_hWnd, msg, wParam, lParam);
    return 1;
}

int calcWheelDelta(uint32_t wParam)
{
    return (GET_WHEEL_DELTA_WPARAM(wParam) + 60) / 120;
}


long CWndMan::ProcessMouse(uint32_t message, uint32_t wParam, long lParam)
{
    auto inp = CInputSystem::GetInstance();
    auto oldPt = m_ptCursor.op_tagpoint();
    auto pt = GetCursorPosPt(false);
    m_ptCursor = pt;

    long rx = 0, ry = 0;
    auto handler = GetHandlerFromPoint(pt.x, pt.y);
    if (handler)
    {
        rx = pt.x - handler->GetAbsLeft();
        ry = pt.y - handler->GetAbsTop();
    }

    if (m_pDragWnd)
    {
        auto layer = GetLayer();
        layer->RelOffset(pt.x - oldPt.x, pt.y - oldPt.y, vtMissing, vtMissing);

        auto t = m_pDragWnd->GetAbsTop();
        auto l = m_pDragWnd->GetAbsLeft();
        m_pDragWnd->OnMoveWnd(l, t);

        if (inp->IsKeyPressed(1))
            return 0;

        m_pDragWnd->OnEndMoveWnd();
        m_pDragWnd = nullptr;
    }


    if (auto dragObj = m_ctxDrag.pObj)
    {
        dragObj->m_pLayer->RelOffset(pt.x - oldPt.x, pt.y - oldPt.y, vtMissing, vtMissing);
        if (m_pCursorHandler != handler)
        {
            if (m_pCursorHandler)
                m_pCursorHandler->OnDraggableMove(0, dragObj.op_arrow(), 0, 0);
            m_pCursorHandler = handler;
            if (handler)
            {
                handler->OnDraggableMove(1, dragObj.op_arrow(), rx, ry);
            }
        }

        if (message == WM_MOUSEWHEEL && handler)
        {
            if (handler->IsEnabled())
                handler->OnMouseWheel(rx, rx, calcWheelDelta(wParam)); //TODO(game) wparam
            return 0;
        }

        if (message == WM_LBUTTONDOWN || (m_bDropByMouseUp && WM_LBUTTONUP))
        {
            EndDragDrop(rx, ry, false);
        }
        else if (message == WM_LBUTTONDBLCLK)
        {
            EndDragDrop(rx, ry, true);
        }

        return 0;
    }


    if (m_pCursorHandler != handler)
    {
        if (m_pCursorHandler)
            m_pCursorHandler->OnMouseEnter(false);
        m_pCursorHandler = handler;
        if (!handler)
            return 0;
        if (handler->IsEnabled())
            handler->OnMouseEnter(true);
    }

    if (!handler)
    {
        return 0;
    }

    rx = pt.x - handler->GetAbsLeft();
    ry = pt.y - handler->GetAbsTop();
    ms_tLastMouseMessage = timeGetTime();
    if (message == WM_MOUSEMOVE)
    {
        if (!inp->IsCursorShown())
            inp->ShowCursor(true);
        if (handler->IsEnabled())
            handler->OnMouseMove(rx, ry);
    }
    else if (message == WM_MOUSEWHEEL)
    {
        if (handler->IsEnabled())
            handler->OnMouseWheel(rx, rx, calcWheelDelta(wParam)); //TODO(game) wparam
    }
    else if (message == WM_LBUTTONDOWN)
    {
        auto curState = inp->GetCursorState();
        auto state = curState == 7 ? 9 : curState == 8 ? 10 : 12;
        inp->SetCursorState(state);
        SetFocus(handler);
        if (auto wnd = dynamic_cast<CWnd*>(handler))
        {
            if (wnd->HitTest(rx, ry, nullptr) == 1)
            {
                m_pDragWnd = wnd;
                return 0;
            }
        }
    }
    else if (message == WM_LBUTTONUP)
    {
        auto curState = inp->GetCursorState();
        if (curState == 9 || curState == 10 || curState == 12)
            inp->SetCursorState(-1);
    }


    if (handler->IsEnabled())
        handler->OnMouseButton(message, wParam, rx, ry);

    return 0;

    //return __sub_005B3BE0(this, nullptr, message, wParam, lParam);
}


long CWndMan::ProcessKey(uint32_t message, uint32_t wParam, long lParam)
{
    if (lParam < 0)
    {
        if (!m_pFocus)
        {
            SetFocus(this);
        }

        if (m_pFocus && m_pFocus->IsEnabled())
        {
            m_pFocus->OnKey(wParam, lParam);
        }
        return 0;
    }
    // check for f9
    if (wParam == VK_F9)
    {
        /*spdlog::info("Focus wnd: {}", m_pFocus != nullptr);

        spdlog::info("Wndman info:");


        auto focus = GetFocus();
        if (auto focusWnd = dynamic_cast<CCtrlWnd*>(focus))
        {
            auto wnd = focusWnd->GetParent();
            wnd->PrintInfoTree(0);
        }
        else if (auto focusWnd = dynamic_cast<CWnd*>(focus))
        {
            focusWnd->PrintInfoTree(0);
        }*/

        COutPacket pkt(106);
        pkt.Encode4(get_update_time());
        pkt.Encode4(1000);
        SendPacket(pkt);
    }


    if (wParam == VK_F10)
    {
        /*spdlog::info("Wndman(all) info:");
        for (const auto wnd: ms_lpWindow)
        {
            spdlog::info("-------------");
            wnd->PrintInfoTree(0);
        }*/

        auto gr = get_gr();
        auto center = gr->Getcenter();

        auto x = center->Getx();
        auto y = center->Gety();
        spdlog::info("x: {}", x);
        center->Putx(x + 50);
        center->put_y(y);
    }

    if (wParam == VK_F11)
    {
        /*spdlog::info("Wndman(all) info:");
        for (const auto wnd: ms_lpWindow)
        {
            spdlog::info("-------------");
            wnd->PrintInfoTree(0);
        }*/

        auto gr = get_gr();
        auto center = gr->Getcenter();

        auto x = center->Getx();
        auto y = center->Gety();
        spdlog::info("x: {}", x);
        center->Putx(x);
        center->put_y(y - 50);
    }

    if (wParam == VK_SCROLL)
    {
        const auto t = timeGetTime();
        const auto statusBar = CUIStatusBar::GetInstance();
        if (!m_tLastScrShot || t - m_tLastScrShot >= 1000 || !statusBar)
        {
            m_nScrShotCount = 1;
        }
        else
        {
            m_nScrShotCount++;
        }
        m_tLastScrShot = static_cast<long>(t);

        if (m_nScrShotCount < 4)
        {
            CScreenShot::SaveFullScreenToJpg();
        }
        else if (m_nScrShotCount == 4 && statusBar)
        {
            statusBar->ChatLogAdd(
                "You cannot take screenshots right now",
                12,
                -1,
                0,
                {});
        }
        return 0;
    }
    else if (lParam & KF_EXTENDED)
    {
        if (wParam == VK_RETURN)
        {
            const auto gr = get_gr();
            SetFullScreen(gr->GetfullScreen());
        }
        else if (wParam == VK_F4)
        {
            if (CUILogoutGift::TryShowLogoutGiftDialog())
            {
                PostQuitMessage(0);
            }
        }
        else if (wParam == VK_F12)
        {
            get_gr()->ToggleFpsPanel();
        }
        return 0;
    }

    if (!m_pFocus)
    {
        SetFocus(this);
    }

    if (m_pFocus && m_pFocus->IsEnabled())
    {
        m_pFocus->OnKey(wParam, lParam);
    }
    return 0;
    // return __sub_005B4590(this, nullptr, message, wParam, lParam);
}

long CWndMan::ProcessJoystick(uint32_t message, uint32_t wParam, long lParam)
{
    return __sub_005B1DC0(this, nullptr, message, wParam, lParam);
}

void __cdecl CWndMan::s_Update()
{
    ms_lpUpdateWindow.RemoveAll();
    ms_lpUpdateWindow.AddTail(ms_lpWindow);

    auto cur = ms_lpUpdateWindow.GetHeadPosition();
    while (cur)
    {
        ms_lpUpdateWindow.RemoveHead();
        (*cur)->Update();
        cur = ms_lpUpdateWindow.GetHeadPosition();
    }

    if (const auto inp = CInputSystem::GetInstance(); inp->IsCursorShown() && timeGetTime() - ms_tLastMouseMessage >
        15000)
    {
        // Hide cursor
        inp->ShowCursor(0);
        // Clear tooltips
        for (const auto wnd : ms_lpWindow)
        {
            wnd->ClearToolTip();
            for (auto child : wnd->m_lpChildren)
            {
                if (child->IsEnabled())
                {
                    child->ClearToolTip();
                }
            }
        }
    }
}

void CWndMan::DestroyAll()
{
    std::vector<CWnd*> windows;
    for (auto wnd : ms_lpWindow)
    {
        windows.push_back(wnd);
    }

    for (const auto wnd : windows)
    {
        if (wnd == this)
            continue;
        wnd->Destroy();
        delete wnd;
    }
    Destroy();
    ms_lpWindow.RemoveAll();
    ms_lpUpdateWindow.RemoveAll();
    //__sub_005B2120(this, nullptr);
}

void CWndMan::Unlink(IUIMsgHandler* pHandler)
{
    if (auto p = m_lpCapture.Find(pHandler))
    {
        m_lpCapture.RemoveAt(p);
    }

    if (m_pCursorHandler == pHandler)
    {
        m_pCursorHandler = nullptr;
    }

    if (m_ctxDrag.pObj && m_ctxDrag.pContainer == pHandler)
    {
        ClearDragContext();
    }

    if (m_pFocus == pHandler)
    {
        if (const auto inpSys = CInputSystem::GetInstance())
        {
            inpSys->SetAcquireKeyboard(1);
        }
        m_pFocus = nullptr;
    }

    if (pHandler && pHandler->IsKindOf(&CWnd::ms_RTTI_CWnd))
    {
        const auto wnd = dynamic_cast<CWnd*>(pHandler);
        if (m_pDragWnd == wnd)
        {
            m_pDragWnd = nullptr;
        }

        if (m_pActiveWnd == wnd)
        {
            wnd->OnActivate(false);
            m_pActiveWnd = nullptr;

            // Set the next window as active
            auto cur = ms_lpWindow.GetTailPosition();
            while (cur)
            {
                if (*cur != pHandler && SetActiveWnd(*cur))
                {
                    break;
                }

                ZList<CWnd*>::GetPrev(cur);
            }
        }
    }

    //__sub_005B3290(this, nullptr, pHandler);
}

IUIMsgHandler* CWndMan::GetHandlerFromPoint(const long x, const long y)
{
    if (const auto capture = GetCapture())
    {
        if (!capture->IsKindOf(&CWnd::ms_RTTI_CWnd))
        {
            return capture;
        }

        const auto wnd = dynamic_cast<CWnd*>(capture);
        const auto l = wnd->GetAbsLeft();
        CCtrlWnd* pCtrl = nullptr;
        if (const auto t = wnd->GetAbsTop(); wnd->HitTest(x - l, y - t, &pCtrl))
        {
            if (!pCtrl)
                return wnd;

            if (pCtrl->IsEnabled() && pCtrl->IsShown())
                return pCtrl;

            return nullptr;
        }
    }

    auto curWnd = ms_lpWindow.GetTailPosition();
    while (curWnd)
    {
        const auto wnd = *ZList<CWnd*>::GetPrev(curWnd);
        const auto l = wnd->GetAbsLeft();
        const auto t = wnd->GetAbsTop();
        CCtrlWnd* pCtrl = nullptr;
        if (wnd->HitTest(x - l, y - t, &pCtrl))
        {
            if (!pCtrl)
                return wnd;

            if (pCtrl->IsEnabled() && pCtrl->IsShown())
                return pCtrl;

            return nullptr;
        }
    }

    return nullptr;

    // return __sub_005B21A0(this, nullptr, x, y);
}

_x_com_ptr<IWzVector2D> CWndMan::GetOrgWindow(const CWnd::UIOrigin org)
{
    return m_pOrgWindow[org];
}

void CWndMan::OnKey(const uint32_t wParam, const int32_t lParam)
{
    if (auto p = get_stage())
    {
        p->OnKey(wParam, lParam);
    }
}

int32_t CWndMan::OnSetFocus(const int32_t bFocus)
{
    if (auto p = get_stage())
    {
        return p->OnSetFocus(bFocus);
    }
    return 0;
}

void CWndMan::OnMouseButton(const uint32_t msg, const uint32_t wParam, const long rx, const long ry)
{
    if (auto p = get_stage())
    {
        p->OnMouseButton(msg, wParam, rx, ry);
    }
}

int32_t CWndMan::OnMouseMove(const long rx, const long ry)
{
    if (auto p = get_stage())
    {
        return p->OnMouseMove(rx, ry);
    }
    return 0;

    // return __sub_005B2FB0(this, nullptr, rx, ry);
}

int32_t CWndMan::OnMouseWheel(long rx, long ry, long nWheel)
{
    if (auto p = get_stage())
    {
        return p->OnMouseWheel(rx, ry, nWheel);
    }
    return 0;

    // return __sub_005B2FD0(this, nullptr, rx, ry, nWheel);
}

void CWndMan::OnMouseEnter(int32_t bEnter)
{
    if (auto p = get_stage())
    {
        p->OnMouseEnter(bEnter);
    }
    //__sub_005B2FF0(this, nullptr, bEnter);
}

void CWndMan::OnDraggableMove(long nState, IDraggable* pObj, long rx, long ry)
{
    if (auto p = get_stage())
    {
        p->OnDraggableMove(nState, pObj, rx, ry);
    }
    //__sub_005B3010(this, nullptr, nState, pObj, rx, ry);
}

void CWndMan::PreCreateWnd(long l, long t, long w, long h, long z, int32_t bScreenCoord, void* pData)
{
    __sub_005B2F20(this, nullptr, l, t, w, h, z, bScreenCoord, pData);
}

int32_t CWndMan::OnActivate(int32_t bActive)
{
    return 1;
    // return __sub_005B2F30(this, nullptr, bActive);
}

void __cdecl CWndMan::RedrawInvalidatedWindows()
{
    for (const auto wnd : ms_lpInvalidatedWindow)
    {
        if (IsRectEmpty(&wnd->m_rcInvalidated))
        {
            continue;
        }

        wnd->ClipRect(&wnd->m_rcInvalidated);
        wnd->Draw(&wnd->m_rcInvalidated);
        for (auto child : wnd->m_lpChildren)
        {
            auto rc = child->GetRect();
            if (!child->IsShown())
            {
                continue;
            }
            tagRECT pRect{};
            if (!IntersectRect(&pRect, &wnd->m_rcInvalidated, &rc))
            {
                continue;
            }

            wnd->ClipRect(&pRect);
            child->Draw(rc.left, rc.top, &pRect);
        }
        SetRectEmpty(&wnd->m_rcInvalidated);
    }
    ms_lpInvalidatedWindow.RemoveAll();

    //__sub_005B2340();
}

void CWndMan::ToggleWindow()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWndMan::SetFullScreen(int32_t bIsLarge)
{
    const auto gr = get_gr();
    gr->PutfullScreen(!bIsLarge);
    const auto cfg = CConfig::GetInstance();
    cfg->m_sysOpt.bSysOpt_WindowedMode = !bIsLarge;
    cfg->SaveGlobal();
    //TODO __sub_005B25E0(this, nullptr, bIsLarge);
}

int32_t CWndMan::SetActiveWndImp(CWnd* pWnd)
{
    if (m_pActiveWnd == pWnd)
    {
        return 1;
    }

    if (pWnd)
    {
        if (!pWnd->OnActivate(true))
        {
            return 0;
        }
    }

    if (m_pActiveWnd)
    {
        m_pActiveWnd->OnActivate(false);
    }

    m_pActiveWnd = pWnd;
    if (const auto inpSys = CInputSystem::GetInstance())
        inpSys->SetAcquireKeyboard(true);

    return 1;
}

void CWndMan::SetFocusImp(IUIMsgHandler* pHandler)
{
    if (pHandler && !pHandler->OnSetFocus(1))
    {
        return;
    }
    const auto oldFocus = m_pFocus;
    m_pFocus = pHandler;
    if (oldFocus)
    {
        oldFocus->OnSetFocus(0);
    }
    if (const auto inpSys = CInputSystem::GetInstance())
    {
        const auto acquire = pHandler && pHandler->IsKindOf(&CCtrlEdit::ms_RTTI_CCtrlEdit);
        inpSys->SetAcquireKeyboard(acquire);
    }

    if (const auto userLocal = CUserLocal::GetInstance(); userLocal && userLocal->IsKeyDownSkillUsing())
    {
        userLocal->OnKeyDownSkillEnd();
    }

    // __sub_005B16B0(this, nullptr, pHandler);
}

void __cdecl CWndMan::InsertWindow(CWnd* pWnd)
{
    const auto overlay = pWnd->m_pLayer->Getoverlay().GetUnknown();
    const _x_com_ptr<IWzGr2DLayer> oLayer(overlay);

    const auto layerZ = pWnd->m_pLayer->Getz();
    auto z = layerZ;
    if (oLayer)
    {
        z = oLayer->Getz();
    }

    auto cur = ms_lpWindow.GetHeadPosition();
    while (cur)
    {
        if ((*cur)->m_pLayer->Getz() > z)
        {
            break;
        }
        ZList<CWnd*>::GetNext(cur);
    }

    if (cur)
    {
        *ms_lpWindow.InsertBefore(cur) = pWnd;
    }
    else
    {
        ms_lpWindow.AddTail(pWnd);
    }
    pWnd->m_pLayer->put_z(layerZ);

    //__sub_005B4830(pWnd);
}

int32_t __cdecl CWndMan::RemoveWindow(CWnd* pWnd)
{
    if (const auto p = ms_lpWindow.Find(pWnd))
    {
        ms_lpWindow.RemoveAt(p);
        return 1;
    }

    return 0;
    // return __sub_005B30C0(pWnd);
}

void __cdecl CWndMan::UpdateWindowPosition(CWnd* pWnd)
{
    if (RemoveWindow(pWnd))
    {
        InsertWindow(pWnd);
    }

    //__sub_005B4A80(pWnd);
}

void __cdecl CWndMan::RemoveUpdateWindow(CWnd* pWnd)
{
    if (const auto p = ms_lpUpdateWindow.Find(pWnd))
    {
        ms_lpUpdateWindow.RemoveAt(p);
    }

    //__sub_005B30F0(pWnd);
}

void __cdecl CWndMan::InsertInvalidatedWindow(CWnd* pWnd)
{
    if (ms_lpInvalidatedWindow.Find(pWnd))
    {
        return;
    }
    ms_lpInvalidatedWindow.AddTail(pWnd);

    //__sub_005B4AA0(pWnd);
}

void __cdecl CWndMan::RemoveInvalidatedWindow(CWnd* pWnd)
{
    if (const auto p = ms_lpInvalidatedWindow.Find(pWnd))
    {
        ms_lpInvalidatedWindow.RemoveAt(p);
    }

    //__sub_005B3120(pWnd);
}

void CWndMan::ProcessIMENotify(uint32_t wParam)
{
    __sub_005B50B0(this, nullptr, wParam);
}

void CWndMan::ProcessIMEComposition(long lParam)
{
    __sub_005B5180(this, nullptr, lParam);
}

void CWndMan::SendIMEComp()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWndMan::SendIMEResult(const char* sComp)
{
    if (m_pFocus)
    {
        m_pFocus->OnIMEResult(sComp);
    }
    //__sub_005B4D30(this, nullptr, sComp);
}

void CWndMan::SendIMEMode()
{
    if (!m_pFocus)
    {
        return;
    }

    auto mode = 0x49;
    if (m_bIMEActive)
    {
        auto ctx = ImmGetContext(m_hWnd);
        auto open = ImmGetOpenStatus(ctx);
        DWORD conv = 0, sentence = 0;
        if (open)
        {
            ImmGetConversionStatus(ctx, &conv, &sentence);
        }
        ImmReleaseContext(m_hWnd, ctx);

        if (open && (conv & IME_CMODE_NATIVE))
        {
            mode = conv & IME_CMODE_KATAKANA ? (0x48 + 3) : 0x48;
        }
        else
        {
            mode = 0x41;
        }
    }

    m_pFocus->OnIMEModeChange(mode);
}

void CWndMan::ClearComposition()
{
    NotifyIME(0x15, 4, 0);
}

void CWndMan::EnableIME(int32_t bEnable)
{
    const auto imm = ImmGetContext(m_hWnd);
    ImmReleaseContext(m_hWnd, imm);
    if (bEnable)
    {
        ImmAssociateContext(m_hWnd, m_hNewIMC);
    }
    else
    {
        ImmAssociateContext(m_hWnd, nullptr);
    }
    //__sub_005B25E0(this, nullptr, bEnable);
}

void CWndMan::NotifyIME(unsigned long dwAction, unsigned long dwIndex, unsigned long dwValue)
{
    auto ctx = ImmGetContext(m_hWnd);
    ImmNotifyIME(ctx, dwAction, dwIndex, dwValue);
    ImmReleaseContext(m_hWnd, ctx);
    //__sub_005B4DD0(this, nullptr, dwAction, dwIndex, dwValue);
}

void CWndMan::OnEventChangeScreenResolution()
{
    ResetOrgWindow();
    const auto lg = CWvsContext::GetInstance()->IsLargeScreen();
    RelocateUIWindows(lg);
    if (const auto statusBar = CUIStatusBar::GetInstance())
    {
        statusBar->ChangeScreenResolution();
    }
    //__sub_005B3150(this, nullptr);
}

void CWndMan::RegisterUIWindow(CUIWnd* pWnd)
{
    if (auto p = m_lUIWnd.Find(pWnd); p)
    {
        return;
    }
    m_lUIWnd.AddTail(pWnd);
    //__sub_005B4AD0(this, nullptr, pWnd);
}

void CWndMan::UnregisterUIWindow(CUIWnd* pWnd)
{
    if (auto p = m_lUIWnd.Find(pWnd))
    {
        m_lUIWnd.RemoveAt(p);
    }

    //__sub_005B3180(this, nullptr, pWnd);
}

void CWndMan::ResetOrgWindow()
{
    const auto center = get_gr()->Getcenter();
    for (auto i = 0; i < 9; i++)
    {
        Ztl_variant_t v(static_cast<IUnknown*>(center));
        m_pOrgWindow[i]->Putorigin(v);

        auto x = 0;
        auto y = -get_adjust_cy();
        const auto h = get_screen_height();
        const auto w = get_screen_width();
        if (i % 3 == 0)
        {
            x = -(w / 2);
        }
        else if (i % 3 == 2)
        {
            x = w / 2;
        }
        if (i / 3 == 0)
        {
            y -= h / 2;
        }
        else if (i / 3 == 2)
        {
            y += h / 2;
        }
        Z_CHECK_HR(m_pOrgWindow[i]->RelMove(x, y, vtMissing, vtMissing));
    }

    //__sub_005B1AF0(this, nullptr);
}

void CWndMan::RelocateUIWindows(int32_t bIsLarge)
{
    for (const auto wnd : m_lUIWnd)
    {
        wnd->SetScreenMode(bIsLarge, true);
    }

    //__sub_005B25E0(this, nullptr, bIsLarge);
}

CWndMan& CWndMan::operator=(const CWndMan& arg0)
{
    return _op_assign_57(this, arg0);
}

CWndMan& CWndMan::_op_assign_57(CWndMan* pThis, const CWndMan& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
