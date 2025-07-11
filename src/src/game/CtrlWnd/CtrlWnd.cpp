// CtrlWnd.cpp
#include "CtrlWnd.hpp"

static ZRef<CCtrlWnd> FAKE_ZRef_CCtrlWnd{};

#include "CtrlWnd_regen.ipp"

CCtrlWnd::~CCtrlWnd() = default;

void CCtrlWnd::_dtor_0()
{
    this->~CCtrlWnd();
    //return __sub_00071820(this, nullptr);
}

CCtrlWnd::CCtrlWnd(const CCtrlWnd& arg0)
{
    _ctor_1(arg0);
}

void CCtrlWnd::_ctor_1(const CCtrlWnd& arg0) const
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlWnd::CCtrlWnd()
{
    m_nCtrlId = -1;
    m_bAcceptFocus = 1;
    m_bEnabled = 1;
    m_bShown = 1;
}

void CCtrlWnd::_ctor_0()
{
    new(this) CCtrlWnd();
    //return __sub_000EFFC0(this, nullptr);
}

void CCtrlWnd::OnKey(uint32_t wParam, int32_t lParam)
{
    m_pParent->OnKey(wParam, lParam);
    //__sub_000892E0(this, nullptr, wParam, lParam);
}

int32_t CCtrlWnd::OnSetFocus(int32_t bFocus)
{
    return bFocus ? m_bAcceptFocus : 1;
    //return __sub_000717E0(this, nullptr, bFocus);
}

void CCtrlWnd::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
}

int32_t CCtrlWnd::OnMouseMove(long rx, long ry)
{
    return 0;
}

void CCtrlWnd::OnMouseEnter(int32_t bEnter)
{
    auto inpSys = CInputSystem::GetInstance();
    if (bEnter && inpSys->GetCursorState())
    {
        inpSys->SetCursorState(0);
    }
}

int32_t CCtrlWnd::OnDragDrop(long nState, DRAGCTX& ctx, long rx, long ry)
{
    return 0;
}

long CCtrlWnd::GetAbsLeft()
{
    return m_pParent->GetAbsLeft() + m_pLTCtrl->Getrx();
}

long CCtrlWnd::GetAbsTop()
{
    return m_pParent->GetAbsTop() + m_pLTCtrl->Getry();
}

void CCtrlWnd::Update()
{
}

void CCtrlWnd::CreateCtrl(CWnd* pParent, uint32_t nId, long l, long t, long w, long h, void* pData)
{
    m_nCtrlId = nId;
    m_pParent = pParent;
    m_pLTCtrl = G_PCOM.CreateVector2D();
    const auto parentLayer = pParent->GetLayer();
    m_pLTCtrl->PutOrigin(pParent->GetLayer());
    Z_CHECK_HR(m_pLTCtrl->RelMove(l, t, vtMissing, vtMissing));

    m_width = w;
    m_height = h;
    OnCreate(pData);
    m_pParent->InsertChildAfter(this, nullptr);
    //__sub_000F0900(this, nullptr, pParent, nId, l, t, w, h, pData);
}

void CCtrlWnd::Destroy()
{
    if (m_nCtrlId == -1)
    {
        return;
    }

    CWndMan::GetInstance()->Unlink(this);
    OnDestroy();
    m_pParent->RemoveChild(this);
    m_pParent = nullptr;
    m_pLTCtrl = 0;
    m_nCtrlId = -1;
}

void CCtrlWnd::OnCreate(void* pData)
{
}

void CCtrlWnd::OnDestroy()
{
}

int32_t CCtrlWnd::HitTest(long rx, long ry)
{
    const tagRECT rc{
        .left = 0,
        .top = 0,
        .right = m_width,
        .bottom = m_height
    };
    return PtInRect(&rc, tagPOINT{rx, ry});
}

tagRECT CCtrlWnd::GetRect()
{
    int x, y;
    Z_CHECK_HR(m_pLTCtrl->_GetSnapshot(nullptr, nullptr, &x, &y, nullptr, nullptr, nullptr, nullptr, vtMissing));

    return tagRECT{
        .left = x,
        .top = y,
        .right = x + m_width,
        .bottom = y + m_height
    };
}

void CCtrlWnd::SetAbove(CCtrlWnd* pCtrl)
{
    ZRef<CCtrlWnd> tmp(this, true);
    m_pParent->RemoveChild(this);
    auto pos = pCtrl ? m_pParent->FindChild(pCtrl) : nullptr;
    m_pParent->InsertChildAfter(this, pos);
}

void CCtrlWnd::SetBelow(CCtrlWnd* pCtrl)
{
    ZRef<CCtrlWnd> tmp(this, true);
    m_pParent->RemoveChild(this);
    auto pos = pCtrl ? m_pParent->FindChild(pCtrl) : nullptr;
    m_pParent->InsertChildBefore(this, pos);
}

uint32_t CCtrlWnd::GetCtrlId() const
{
    return m_nCtrlId;
}

CWnd* CCtrlWnd::GetParent() const
{
    return m_pParent;
}

_x_com_ptr<IWzCanvas> CCtrlWnd::GetCanvas(const long idx) const
{
    const auto layer = m_pParent->m_pOverlabLayer ? m_pParent->m_pOverlabLayer : m_pParent->m_pLayer;
    return _x_com_ptr<IWzCanvas>(layer->Getcanvas(Ztl_variant_t(static_cast<int>(idx), VT_I4)));
    //return *__sub_000D47B0(this, nullptr, &ret, idx);
}

int32_t CCtrlWnd::IsFocused() const
{
    return CWndMan::GetInstance()->GetFocus() == this;
}

void CCtrlWnd::InvalidateRect()
{
    auto rect = GetRect();
    m_pParent->InvalidateRect(&rect);
}

void CCtrlWnd::Draw(long rx, long ry, const tagRECT* pRect)
{
}

void CCtrlWnd::SetEnable(int32_t bEnable)
{
    if (IsEnabled() != bEnable)
    {
        m_bEnabled = bEnable;
        if (!bEnable && IsFocused())
        {
            CWndMan::GetInstance()->SetFocus(nullptr);
        }
        InvalidateRect();
    }
    //__sub_000EFF80(this, nullptr, bEnable);
}

int32_t CCtrlWnd::IsEnabled()
{
    return m_bEnabled;
    //return __sub_00071830(this, nullptr);
}

void CCtrlWnd::SetShow(int32_t bShow)
{
    if (IsShown() != bShow)
    {
        m_bShown = bShow;
        InvalidateRect();
    }
    //__sub_000EFDA0(this, nullptr, bShow);
}

int32_t CCtrlWnd::IsShown()
{
    return m_bShown;
    //return __sub_00071840(this, nullptr);
}

void CCtrlWnd::Move(long x, long y) const
{
    Z_CHECK_HR(m_pLTCtrl->RelMove(x, y, vtMissing, vtMissing));
    //__sub_000D8170(this, nullptr, x, y);
}

long CCtrlWnd::GetX() const
{
    return m_pLTCtrl->Getrx();
    //return __sub_00372FE0(this, nullptr);
}

long CCtrlWnd::GetY() const
{
    return m_pLTCtrl->Getry();
    //return __sub_00373020(this, nullptr);
}

long CCtrlWnd::GetWidth() const
{
    return m_width;
}

long CCtrlWnd::GetHeight() const
{
    return m_height;
}

int32_t CCtrlWnd::IsAcceptFocus() const
{
    return m_bAcceptFocus;
    //return __sub_000EFF40(this, nullptr);
}

void CCtrlWnd::NotifyToParent(uint32_t param1, uint32_t param2) const
{
    m_pParent->OnChildNotify(m_nCtrlId, param1, param2);
}

CCtrlWnd& CCtrlWnd::operator=(const CCtrlWnd& arg0)
{
    return _op_assign_40(this, arg0);
}

CCtrlWnd& CCtrlWnd::_op_assign_40(CCtrlWnd* pThis, const CCtrlWnd& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
