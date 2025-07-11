// UIMenuDlgs.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "FadeWnd/FadeWnd.hpp"
#include "CtrlWnd/CtrlWnd.hpp"

// Level: 1 0x10c72
class CUIGameMenu;
// Level: 1 0x10c94
class CUIShortCutMenu;

class CUIGameMenu : public CFadeWnd, public TSingleton<CUIGameMenu>
{
    // Nested
public:
    enum ID_CTRL_BT_MENU_BASE
    {
        ID_CTRL_BT_MENU_BASE = 1000
    };

    enum UIMENU_BUTTON_NO
    {
        UIMENU_BUTTON_NO = 6
    };

    // Fields
protected:
    std::array<ZRef<CCtrlButton>, 6> m_pBtMenu{};

protected:
    int32_t m_bSelValid{};

protected:
    long m_nCurSel{};

protected:
    long m_nResult{};
    // Methods
public:
    virtual ~CUIGameMenu();

public:
    void _dtor_0();

public:
    CUIGameMenu(const CUIGameMenu& arg0);

public:
    void _ctor_1(const CUIGameMenu& arg0);

public:
    CUIGameMenu();

public:
    void _ctor_0();

public:
    virtual void OnCreate(void* pData);

public:
    virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
    virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
    virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
    virtual void OnButtonClicked(uint32_t nId);

public:
    virtual int32_t HitTest(long rx, long ry, CCtrlWnd** ppCtrl);

public:
    long GetResult();

protected:
    void ResetButtonState();

public:
    CUIGameMenu& operator=(const CUIGameMenu& arg0);

public:
    static CUIGameMenu& _op_assign_11(CUIGameMenu* pThis, const CUIGameMenu& arg0);
};

STATIC_ASSERT_SIZE(CUIGameMenu, 304);

class CUIShortCutMenu : public CFadeWnd, public TSingleton<CUIShortCutMenu>
{
    // Nested
public:
    enum ID_CTRL_BT_MENU_BASE
    {
        ID_CTRL_BT_MENU_BASE = 1000
    };

    enum UIMENU_BUTTON_NO
    {
        UIMENU_BUTTON_NO = 7
    };

    // Fields
protected:
    std::array<ZRef<CCtrlButton>, 7> m_pBtMenu{};

protected:
    int32_t m_bSelValid{};

protected:
    long m_nCurSel{};

protected:
    long m_nResult{};
    // Methods
public:
    virtual ~CUIShortCutMenu();

public:
    void _dtor_0();

public:
    CUIShortCutMenu(const CUIShortCutMenu& arg0);

public:
    void _ctor_1(const CUIShortCutMenu& arg0);

    CTOR_DEFAULT(CUIShortCutMenu)

public:
    CUIShortCutMenu();

public:
    void _ctor_0();

public:
    virtual void OnCreate(void* pData);

public:
    virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
    virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
    virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
    virtual void OnButtonClicked(uint32_t nId);

public:
    virtual int32_t HitTest(long rx, long ry, CCtrlWnd** ppCtrl);

public:
    long GetResult();

protected:
    void SetResult(long nIdx);

protected:
    void ResetButtonState();

public:
    CUIShortCutMenu& operator=(const CUIShortCutMenu& arg0);

public:
    static CUIShortCutMenu& _op_assign_12(CUIShortCutMenu* pThis, const CUIShortCutMenu& arg0);
};

STATIC_ASSERT_SIZE(CUIShortCutMenu, 312);
