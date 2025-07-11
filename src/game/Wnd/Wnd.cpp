// Wnd.cpp
#include "Wnd.hpp"

#include "spdlog/spdlog.h"

static ZList<CWnd*> FAKE_ZList_CWnd{};
static ZRef<CCtrlWnd> FAKE_ZRef_CCtrlWnd{};

#include "Wnd_regen.ipp"

uint32_t CWnd::ms_dwKeyCounter = 0;

CWnd::~CWnd()
{
}

void CWnd::_dtor_0()
{
    return __sub_005AEBC0(this, nullptr);
}

CWnd::CWnd(const CWnd& arg0)
{
    _ctor_1(arg0);
}

void CWnd::_ctor_1(const CWnd& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWnd::CWnd()
{
    CWnd::OnEndMoveWnd();
}

void CWnd::_ctor_0()
{
    new(this) CWnd();
    //return __sub_005AED30(this, nullptr);
}

void CWnd::OnKey(uint32_t wParam, int32_t lParam)
{
}

int32_t CWnd::OnSetFocus(const int32_t bFocus)
{
    if (bFocus)
    {
        if (const auto focusChild = m_pFocusChild)
        {
            const auto wndMan = CWndMan::GetInstance();
            wndMan->SetFocus(focusChild);
            if (wndMan->GetFocus())
            {
                return 0;
            }
            m_pFocusChild = nullptr;
        }
    }
    return 1;

    //return __sub_005AD3A0(this, nullptr, bFocus);
}

void CWnd::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    //__sub_00029250(this, nullptr, msg, wParam, rx, ry);
}

int32_t CWnd::OnMouseMove(long rx, long ry)
{
    return 0;
    //return __sub_000299E0(this, nullptr, rx, ry);
}

int32_t CWnd::OnMouseWheel(long rx, long ry, long nWheel)
{
    for (auto child : m_lpChildren)
    {
        if (child && child->IsKindOf(&CCtrlScrollBar::ms_RTTI_CCtrlScrollBar))
        {
            auto scrollBar = dynamic_cast<CCtrlScrollBar*>(child.op_ptr());
            auto x = scrollBar->GetX();
            auto y = scrollBar->GetY();

            if (scrollBar->OnMouseWheel(rx - x, ry - y, nWheel))
            {
                break;
            }
        }
    }
    return 1;
    //return __sub_005AE4D0(this, nullptr, rx, ry, nWheel);
}

void CWnd::OnMouseEnter(int32_t bEnter)
{
    auto inpSys = CInputSystem::GetInstance();
    if (bEnter && inpSys->GetCursorState())
    {
        inpSys->SetCursorState(0);
    }
    //__sub_005AD370(this, nullptr, bEnter);
}

int32_t CWnd::OnDragDrop(long nState, DRAGCTX& ctx, long rx, long ry)
{
    return __sub_000299F0(this, nullptr, nState, ctx, rx, ry);
}

long CWnd::GetAbsLeft()
{
    auto org = CWndMan::GetInstance()->GetOrgWindow(Origin_LT);
    return m_pLayer->Getx() - org->Getx();
    //return __sub_005AD480(this, nullptr);
}

long CWnd::GetAbsTop()
{
    auto org = CWndMan::GetInstance()->GetOrgWindow(Origin_LT);
    return m_pLayer->Gety() - org->Gety();
    //return __sub_005AD570(this, nullptr);
}

void CWnd::Update()
{
    for (auto child : m_lpChildren)
    {
        if (child && child->IsEnabled())
        {
            child->Update();
        }
    }
    //__sub_005AE7C0(this, nullptr);
}

void CWnd::CreateWnd(long l, long t, long w, long h, long z, int32_t bScreenCoord, void* pData, int32_t bSetFocus,
                     CWnd::UIOrigin org)
{
    auto wndMan = CWndMan::GetInstance();

    m_dwWndKey = ++ms_dwKeyCounter;
    SetRectEmpty(&m_rcInvalidated);

    m_origin = org;
    PreCreateWnd(l, t, w, h, z, bScreenCoord, pData);
    if (!m_pLayer)
    {
        m_width = w;
        m_height = h;
        Ztl_variant_t canvas, filter((long)0, VT_I4);
        m_pLayer = get_gr()->CreateLayer(
            0,
            0,
            0,
            0,
            0,
            canvas,
            filter);


        auto orgWnd = CWndMan::GetInstance()->GetOrgWindow(Origin_LT);
        auto lt = m_pLayer->Getlt();
        lt->Putorigin(Ztl_variant_t(static_cast<IUnknown*>(orgWnd)));
        Z_CHECK_HR(lt->RelMove(l, t, vtMissing, vtMissing));

        m_pLayer->Putz(z);
        m_pLayer->Putcolor(0xFFFFFFFF);
    }

    this->OnCreate(pData);
    InvalidateRect(nullptr);
    CWndMan::InsertWindow(this);
    if (bSetFocus)
    {
        wndMan->SetFocus(this);
    }

    tagPOINT p{};
    GetCursorPos(&p);
    if (auto handler = wndMan->GetHandlerFromPoint(p.x, p.y); handler && handler->IsEnabled())
    {
        handler->OnMouseEnter(1);
    }
    //__sub_005AD8F0(this, nullptr, l, t, w, h, z, bScreenCoord, pData, bSetFocus, org);
}

void CWnd::Destroy()
{
    if (!m_dwWndKey)
    {
        return;
    }
    const auto wndMan = CWndMan::GetInstance();
    OnDestroy();

    for (auto& child : m_lpChildren)
    {
        child->Destroy();
    }
    m_lpChildren.RemoveAll();
    m_pFocusChild = nullptr;

    m_pLayer = 0;
    m_pAnimationLayer = 0;
    m_pOverlabLayer = 0;

    m_dwWndKey = 0;
    CWndMan::RemoveWindow(this);
    CWndMan::RemoveUpdateWindow(this);
    CWndMan::RemoveInvalidatedWindow(this);
    wndMan->Unlink(this);

    tagPOINT pt{};
    wndMan->GetCursorPos(&pt, false);
    if (const auto handler = wndMan->GetHandlerFromPoint(pt.x, pt.y); handler && handler->IsEnabled())
    {
        handler->OnMouseEnter(1);
    }
    //__sub_005B0E50(this, nullptr);
}

void CWnd::PreCreateWnd(long l, long t, long w, long h, long z, int32_t bScreenCoord, void* pData)
{
    const auto gr = get_gr();
    const auto wndMan = CWndMan::GetInstance();
    if (!w || !h)
    {
        m_pLayer = gr->CreateLayer(
            0, 0, 0, 0, 0, Ztl_variant_t(0), vtMissing);
    }
    else
    {
        m_pLayer = gr->CreateLayer(
            l, t, w, h, 0, vtMissing, vtMissing);
    }


    const auto lt = m_pLayer->Getlt();
    if (bScreenCoord)
    {
        const auto org = wndMan->GetOrgWindow(m_origin);
        lt->Putorigin(Ztl_variant_t(static_cast<IUnknown*>(org)));
    }

    Z_CHECK_HR(lt->RelMove(l, t, vtMissing, vtMissing));
    m_pLayer->Putz(z);
    m_pLayer->Putcolor(0xFFFFFFFF);

    m_width = w;
    m_height = h;

    //__sub_005ADDC0(this, nullptr, 0, 0, w, h, z, bScreenCoord, pData);
}

void CWnd::OnCreate(void* pData)
{
}

void CWnd::OnDestroy()
{
}

void CWnd::OnMoveWnd(long l, long t)
{
    __sub_005AEE10(this, nullptr, l, t);
    /*return;
    if ( !TSingleton<CUIStatusBar>::ms_pInstance || l == 0x80000000 && t == 0x80000000 )
        return;



    auto cursorPos = CWndMan::GetInstance()->GetCursorPosPt(false);

    auto l = GetAbsLeft();
    auto t = GetAbsTop();

    if (m_ptCursorRel.x.GetData() == -1 && m_ptCursorRel.y.GetData() == -1)
    {
        m_ptCursorRel = cursorPos;
    }

    auto w = GetLayer()->Getwidth();
    //TODO might be width
    auto h = GetLayer()->Getheight();

    tagRECT rc{};
    SetRect(&rc, l, t, l + w, t + h);

    tagRECT icRC{};
    CWnd* icWnd = nullptr;
    for (auto& wnd: CWndMan::ms_lpWindow)
    {
        if (wnd != this && IsMyAddon(wnd) && CUIStatusBar::GetInstance() != wnd && (CUIEquip::GetInstance() != this || CUIPetEquip::GetInstance() != wnd))
        {
            tagRECT wndRC{};
            auto l = wnd->GetAbsLeft();
            auto t = wnd->GetAbsTop();
            SetRect(&wndRC, l, t, l + wnd->GetWidth(), t + wnd->GetHeight());
            if (IntersectRect(&icRC, &rc, &wndRC))
            {
                icWnd = wnd;
                break;
            }
        }
    }

    if (icWnd)
    {
        au
    }*/


}

void CWnd::OnEndMoveWnd()
{
    m_ptCursorRel.x = -1;
    m_ptCursorRel.y = -1;
    // __sub_005AECA0(this, nullptr);
}

void CWnd::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    if (param1 == 100)
    {
        OnButtonClicked(nId);
    }
}

void CWnd::OnButtonClicked(uint32_t nId)
{
}

int32_t CWnd::HitTest(long rx, long ry, CCtrlWnd** ppCtrl)
{
    if (ppCtrl)
    {
        *ppCtrl = nullptr;
    }
    auto cur = m_lpChildren.GetTailPosition();
    while (cur)
    {
        auto child = *ZList<ZRef<CCtrlWnd>>::GetPrev(cur);
        if (!child->IsShown())
        {
            continue;
        }

        const auto cRy = child->GetY();
        if (const auto cRx = child->GetX(); child->HitTest(rx - cRx, ry - cRy))
        {
            if (ppCtrl)
            {
                *ppCtrl = child.op_ptr();
            }
            return 2;
        }
    }

    if (rx < 0 || ry < 0 || rx >= m_width || ry >= m_height)
    {
        return 0;
    }
    return 2;
    //return __sub_005AE3B0(this, nullptr, rx, ry, ppCtrl);
}

int32_t CWnd::OnActivate(const int32_t bActive)
{
    if (bActive)
    {
        CWndMan::UpdateWindowPosition(this);
    }
    return 1;
}

unsigned long CWnd::GetWndKey() const
{
    return m_dwWndKey;
}

_x_com_ptr<IWzGr2DLayer> CWnd::GetLayer()
{
    return m_pLayer;
    //return __sub_0002A270(this, nullptr);
}

_x_com_ptr<IWzGr2DLayer> CWnd::GetOverlabLayer()
{
    return m_pOverlabLayer;
    //return __sub_0002A270(this, nullptr);
}

_x_com_ptr<IWzCanvas> CWnd::GetCanvas() const
{
    auto& layer = m_pOverlabLayer ? m_pOverlabLayer : m_pLayer;
    const auto canvas = layer->Getcanvas(Ztl_variant_t(0, VT_I4));
    return _x_com_ptr<IWzCanvas>(canvas);
    // return __sub_0002B170(this, nullptr);
}

Ztl_variant_t CWnd::ClipRect(const tagRECT* pRect) const
{
    if (const auto canvas = GetCanvas())
    {
        const auto top = pRect->top;
        const auto left = pRect->left;

        return canvas->SetClipRect(
            left,
            top,
            pRect->right - left,
            pRect->bottom - top,
            vtMissing); //TODO vtEmpty
    }
    return {};
    // return __sub_005AE850(this, nullptr, pRect);
}

void CWnd::MoveWnd(const long l, const long t)
{
    Z_CHECK_HR(GetLayer()->RelMove(l, t, vtMissing, vtMissing));
    //__sub_005AEE10(this, nullptr, l, t);
}

void CWnd::MoveWndToAbsPos(long absL, long absT)
{
    const auto wndMan = CWndMan::GetInstance();
    const auto orgLt = wndMan->GetOrgWindow(Origin_LT);
    const auto orgCur = wndMan->GetOrgWindow(m_origin);
    const auto x = orgLt->Getx() - orgCur->Getx();
    const auto y = orgLt->Gety() - orgCur->Gety();
    MoveWnd(absL + x, absT + y);
    //__sub_005AD660(this, nullptr, absL, absT);
}

void CWnd::SetFocusChild(CCtrlWnd* pCtrl)
{
    if (!FindChild(pCtrl))
    {
        return;
    }

    if (!pCtrl || !pCtrl->IsKindOf(&CCtrlComboBoxSelect::ms_RTTI_CCtrlComboBoxSelect))
    {
        m_pFocusChild = pCtrl;
    }
    // __sub_005AECF0(this, nullptr, pCtrl);
}

int32_t CWnd::IsFocused() const
{
    const auto wndMan = CWndMan::GetInstance();
    return wndMan->GetFocus() == this;
}

int32_t CWnd::IsActive() const
{
    return 1;
}

long CWnd::GetWidth() const
{
    return m_width;
}

long CWnd::GetHeight() const
{
    return m_height;
}

void CWnd::InvalidateRect(const tagRECT* pRect)
{
    if (pRect)
    {
        UnionRect(&m_rcInvalidated, &m_rcInvalidated, pRect);
    }
    else
    {
        SetRect(&m_rcInvalidated, 0, 0, m_width, m_height);
    }
    CWndMan::InsertInvalidatedWindow(this);
    //__sub_005AD3F0(this, nullptr, pRect);
}

void CWnd::Draw(const tagRECT* pRect)
{
    if (m_pBackgrnd)
    {
        const auto canvas = GetCanvas();
        Z_CHECK_HR(canvas->Copy(m_nBackgrndX, m_nBackgrndY, m_pBackgrnd, vtMissing));
    }
    else if (m_pOverlabLayer)
    {
        const auto canvas = GetCanvas();
        const auto w = m_pOverlabLayer->Getwidth();
        const auto h = m_pOverlabLayer->Getheight();
        Z_CHECK_HR(canvas->DrawRectangle(m_nBackgrndX, m_nBackgrndY, w, h, 0xFFFFFF));
    }
    //__sub_005AE5C0(this, nullptr, pRect);
}

int32_t CWnd::IsMyAddon(CWnd* pWnd)
{
    return 0;
}

int32_t CWnd::IsScreenCoord() const
{
    return m_bScreenCoord;
}

CCtrlWnd* CWnd::GetFocusChild() const
{
    return m_pFocusChild;
}

CCtrlWnd* CWnd::GetChildItem(uint32_t nId)
{
    for (auto child : m_lpChildren)
    {
        if (child && child->GetCtrlId() == nId)
        {
            return child.op_ptr();
        }
    }
    return nullptr;

    //return __sub_005AE810(this, nullptr, nId);
}

void CWnd::RemoveChild(CCtrlWnd* pCtrl)
{
    if (pCtrl == m_pFocusChild)
    {
        m_pFocusChild = nullptr;
    }
    m_lpChildren.RemoveAt(reinterpret_cast<ZRef<CCtrlWnd>*>(FindChild(pCtrl)));
    //__sub_005AECC0(this, nullptr, pCtrl);
}

void CWnd::CoverBackgrnd(ZXString16 arg0, const long arg1, const long arg2, const int32_t arg3)
{
    __sub_005B0FD0(this, nullptr, CreateNakedParam(arg0), arg1, arg2, arg3);
}

__POSITION* CWnd::FindChild(CCtrlWnd* pCtrl) const
{
    const ZRef pCtrlRef(pCtrl, true);
    return reinterpret_cast<__POSITION*>(m_lpChildren.Find(pCtrlRef, nullptr));
    //return __sub_000F0380(this, nullptr, pCtrl);
}

void CWnd::InsertChildAfter(CCtrlWnd* pCtrl, __POSITION* pos)
{
    const ZRef pCtrlRef(pCtrl, true);
    if (pos)
    {
        *m_lpChildren.InsertAfter(reinterpret_cast<ZRef<CCtrlWnd>*>(pos)) = pCtrlRef;
    }
    else
    {
        m_lpChildren.AddTail(pCtrlRef);
    }
    //__sub_000F06E0(this, nullptr, pCtrl, pos);
}

void CWnd::InsertChildBefore(CCtrlWnd* pCtrl, __POSITION* pos)
{
    const ZRef pCtrlRef(pCtrl, true);
    if (pos)
    {
        *m_lpChildren.InsertBefore(reinterpret_cast<ZRef<CCtrlWnd>*>(pos)) = pCtrlRef;
    }
    else
    {
        m_lpChildren.AddHead(pCtrlRef);
    }


    // *m_lpChildren.InsertBefore(reinterpret_cast<ZRef<CCtrlWnd>*>(pos)) = pCtrlRef;
    //__sub_000F07F0(this, nullptr, pCtrl, pos);
}

void CWnd::SetAnimationBackgrnd(Ztl_bstr_t sUOL, long nBackgrndX, long nBackgrndY)
{
    __sub_005AFA00(this, nullptr, CreateNakedParam(sUOL), nBackgrndX, nBackgrndY);
}

void CWnd::SetBackgrnd(Ztl_bstr_t sUOL, long bgX, long bgY, const int32_t bMulti, const long expandW,
                       const long expandH)
{
    const auto rm = get_rm();
    const auto bg = rm->GetObjectT<IWzCanvas>(sUOL);
    m_pBackgrnd = G_PCOM.CreateCanvas();

    const auto w = bg->Getwidth();
    const auto h = bg->Getheight();

    Z_CHECK_HR(m_pBackgrnd->Create(w + expandW, h + expandH, vtMissing, vtMissing));
    Z_CHECK_HR(m_pBackgrnd->Copy(0, 0, bg, vtMissing));

    if (bMulti)
    {
        for (auto i = 0; i < 5; i++)
        {
            wchar_t buf[16];
            _itow_s(i, buf, 10);
            auto uol = sUOL + buf;

            auto bgI = rm->GetObjectT<IWzCanvas>(uol);
            if (!bgI)
            {
                //TODO(game) break or continue
                continue;
            }
            const auto cx = bgI->Getcx();
            const auto cy = bgI->Getcy();
            Z_CHECK_HR(m_pBackgrnd->Copy(
                -cx,
                -cy,
                bgI,
                Ztl_variant_t(0xff, VT_I4)));
        }
    }

    m_nBackgrndX = bgX;
    m_nBackgrndY = bgY;
    //__sub_005AFEB0(this, nullptr, CreateNakedParam(arg0), arg1, arg2, arg3, arg4, arg5);
}

void CWnd::SetBackgrndV(Ztl_bstr_t sUOL, long nHeight, long nBackgrndX, long nBackgrndY)
{
    const auto rm = get_rm();
    const auto bgProp = rm->GetObjectT<IWzProperty>(sUOL);

    const auto bg0 = bgProp->GetItemT<IWzCanvas>(L"0");
    const auto bg1 = bgProp->GetItemT<IWzCanvas>(L"1");
    const auto bg2 = bgProp->GetItemT<IWzCanvas>(L"2");

    m_pBackgrnd = G_PCOM.CreateCanvas();
    const Ztl_variant_t alpha(0xff, VT_I4);
    const auto w = bg0->Getwidth();
    Z_CHECK_HR(m_pBackgrnd->Create(w, nHeight, vtMissing, vtMissing));
    Z_CHECK_HR(m_pBackgrnd->Copy(0, 0, bg0, alpha));

    const auto h0 = bg0->Getheight();
    const auto h2 = bg2->Getheight();
    const auto w1 = bg1->Getwidth();
    Z_CHECK_HR(m_pBackgrnd->CopyEx(
        0, h0,
        bg1,
        CA_OVERWRITE,
        static_cast<int>(w1), nHeight - h0 - h2,
        0, 0,
        0, 0,
        vtMissing));

    Z_CHECK_HR(m_pBackgrnd->Copy(0, nHeight - h2, bg2, alpha));
    m_nBackgrndX = nBackgrndX;
    m_nBackgrndY = nBackgrndY;

    //__sub_005B0530(this, nullptr, CreateNakedParam(sUOL), nHeight, nBackgrndX, nBackgrndY);
}

CWnd& CWnd::operator=(const CWnd& arg0)
{
    return _op_assign_53(this, arg0);
}

CWnd& CWnd::_op_assign_53(CWnd* pThis, const CWnd& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}


const char* GetCtrlname(CCtrlWnd* ctrl, std::string& extra)
{
    if (auto btn = dynamic_cast<CCtrlButton*>(ctrl))
    {
        return "CCtrlButton";
    }

    if (const auto edit = dynamic_cast<CCtrlEdit*>(ctrl))
    {
        extra = edit->GetText().c_str();
        return "CCtrlEdit";
    }

    return "CCtrlWnd";
}

void CWnd::PrintInfoTree(size_t level)
{
    spdlog::info("{}Wnd({})", std::string(level, '-'), GetWndKey());
    auto indent = std::string(level + 1, '-');
    std::string extra;
    for (auto child : m_lpChildren)
    {
        extra.clear();
        auto id = child->GetCtrlId();
        auto name = GetCtrlname(child.op_arrow(), extra);

        if (extra.empty())
        {
            spdlog::info("{}{}({})", indent, name, id);
        }
        else
        {
            spdlog::info("{}{}({}, {})", indent, name, id, extra);
        }
    }
}
