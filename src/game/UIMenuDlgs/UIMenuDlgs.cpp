// UIMenuDlgs.cpp
#include "UIMenuDlgs.hpp"
#include "UIMenuDlgs_regen.ipp"

CUIGameMenu::~CUIGameMenu()
{
}

void CUIGameMenu::_dtor_0()
{
    //return __sub_003EE9C0(this, nullptr);
    this->~CUIGameMenu();
}

CUIGameMenu::CUIGameMenu(const CUIGameMenu& arg0)
{
    _ctor_1(arg0);
}

void CUIGameMenu::_ctor_1(const CUIGameMenu& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIGameMenu::CUIGameMenu()
{
    ms_pInstance = this;

    tagPOINT pt{
        .x = -220,
        .y = 0x2D1
    };

    SetOption(
        0, 255, 0, pt, pt, pt, 500, 0, 500);
    SetBackgrndV(L"UI/StatusBar2.img/mainBar/System/backgrnd", 185, 0, 0);
    CreateFadeWnd(79, 185, nullptr, 10, 1, nullptr, false, Origin_LB);
}

void CUIGameMenu::_ctor_0()
{
    //return __sub_003EEB40(this, nullptr);
    new(this) CUIGameMenu();
}

void CUIGameMenu::OnCreate(void* pData)
{
    __sub_003EED60(this, nullptr, pData);
}

void CUIGameMenu::OnKey(uint32_t wParam, int32_t lParam)
{
    __sub_003EE660(this, nullptr, wParam, lParam);
}

void CUIGameMenu::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_003EE3F0(this, nullptr, msg, wParam, rx, ry);
}

void CUIGameMenu::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    //__sub_003EE7B0(this, nullptr, nId, param1, param2);
    if ( param1 == 101 )
    {
        if ( param2 )
        {
            this->m_bSelValid = 1;
            this->m_nCurSel = nId - 1000;
        }
        else
        {
            this->m_bSelValid = 0;
        }
        ResetButtonState();
    }
    else if ( param1 == 100 )
    {
        this->OnButtonClicked(nId);
    }
}

void CUIGameMenu::OnButtonClicked(uint32_t nId)
{
    __sub_003EE380(this, nullptr, nId);
}

int32_t CUIGameMenu::HitTest(long rx, long ry, CCtrlWnd** ppCtrl)
{
    return __sub_003EE440(this, nullptr, rx, ry, ppCtrl);
}

long CUIGameMenu::GetResult()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIGameMenu::ResetButtonState()
{
    //__sub_003EE510(this, nullptr);
    auto id = 0;
    for (auto& btn: m_pBtMenu)
    {
        auto enter = m_bSelValid && m_nCurSel == id;
        btn->ForcedMouseEnter(enter);
        ++id;
    }
}

CUIGameMenu& CUIGameMenu::operator=(const CUIGameMenu& arg0)
{
    return _op_assign_11(this, arg0);
}

CUIGameMenu& CUIGameMenu::_op_assign_11(CUIGameMenu* pThis, const CUIGameMenu& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIShortCutMenu::~CUIShortCutMenu()
{
}

void CUIShortCutMenu::_dtor_0()
{
    //return __sub_003EEA60(this, nullptr);
    this->~CUIShortCutMenu();
}

CUIShortCutMenu::CUIShortCutMenu(const CUIShortCutMenu& arg0)
{
    _ctor_1(arg0);
}

void CUIShortCutMenu::_ctor_1(const CUIShortCutMenu& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIShortCutMenu::CUIShortCutMenu()
{
    ms_pInstance = this;

    tagPOINT pt{
        .x = -244,
        .y = 669,
    };

    SetOption(
        0,
        255, 0, pt, pt, pt, 500, 0, 500);

    SetBackgrndV(
        L"UI/StatusBar2.img/mainBar/Menu/backgrnd",
        210, 0, 0);
    CreateFadeWnd(79, 235, nullptr, 10, true, nullptr, false, Origin_LB);
}

void CUIShortCutMenu::_ctor_0()
{
    //return __sub_003EEC50(this, nullptr);
    new(this) CUIShortCutMenu();
}

void CUIShortCutMenu::OnCreate(void* pData)
{
    __sub_003EF480(this, nullptr, pData);
}

void CUIShortCutMenu::OnKey(uint32_t wParam, int32_t lParam)
{
    __sub_003EE810(this, nullptr, wParam, lParam);
}

void CUIShortCutMenu::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_003EE5D0(this, nullptr, msg, wParam, rx, ry);
}

void CUIShortCutMenu::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    //__sub_003EE960(this, nullptr, nId, param1, param2);
    if ( param1 == 101 )
    {
        if ( param2 )
        {
            this->m_bSelValid = 1;
            this->m_nCurSel = nId - 1000;
        }
        else
        {
            this->m_bSelValid = 0;
        }
        ResetButtonState();
    }
    else if ( param1 == 100 )
    {
        this->OnButtonClicked(nId);
    }
}

void CUIShortCutMenu::OnButtonClicked(uint32_t nId)
{
    __sub_003EE560(this, nullptr, nId);
}

int32_t CUIShortCutMenu::HitTest(long rx, long ry, CCtrlWnd** ppCtrl)
{
    return __sub_003EE450(this, nullptr, rx, ry, ppCtrl);
}

long CUIShortCutMenu::GetResult()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIShortCutMenu::SetResult(long nIdx)
{
    __sub_003EE460(this, nullptr, nIdx);
}

void CUIShortCutMenu::ResetButtonState()
{
    //__sub_003EE610(this, nullptr);
    auto i = 0;
    for (auto& btn: m_pBtMenu)
    {
        btn->ForcedMouseEnter(this->m_bSelValid && this->m_nCurSel == i);
        ++i;
    }
}

CUIShortCutMenu& CUIShortCutMenu::operator=(const CUIShortCutMenu& arg0)
{
    return _op_assign_12(this, arg0);
}

CUIShortCutMenu& CUIShortCutMenu::_op_assign_12(CUIShortCutMenu* pThis, const CUIShortCutMenu& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
