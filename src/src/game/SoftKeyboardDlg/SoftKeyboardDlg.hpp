// SoftKeyboardDlg.hpp
#pragma once

#include "util/base.h"
#include "pcom/wz.h"

#include "Dialog/Dialog.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "LayoutMan/LayoutMan.hpp"

class CCtrlTab;

class CCtrlEditEx;

// Level: 1 0x139be
class CSoftKeyboardDlg;

class CSoftKeyboardDlg : public CDialog {
// Nested
public:
    enum  TAB_ {
    TAB_NUMERIC = 0,
    TAB_LOWCASE = 1,
    TAB_HIGHCASE = 2,
    TAB_NO = 3
};
enum  ID_CTRL_ {
    ID_CTRL_BT_NUMBER_START = 1000,
    ID_CTRL_BT_NUMBER_END = 1009,
    ID_CTRL_BT_LOWCASE_START = 1010,
    ID_CTRL_BT_LOWCASE_END = 1019,
    ID_CTRL_BT_HIGHCASE_START = 1020,
    ID_CTRL_BT_HIGHCASE_END = 1029,
    ID_CTRL_BT_DELETE = 1030,
    ID_CTRL_BT_NEXT = 1031,
    ID_CTRL_TAB = 1032,
    ID_CTRL_EDIT = 1033
};

// Fields
protected:
    long m_nMin{};
protected:
    long m_nMax{};
protected:
    CUIToolTip m_uiTooltip;
protected:
    long m_tClearTooltip{};
protected:
    std::array<TSecType<long>, 10> m_anRandom;
protected:
    long m_nCurTab{};
protected:
    ZRef<CCtrlTab> m_pTab;
protected:
    std::array<ZRef<CCtrlOriginButton>, 10> m_apBtNumber;
protected:
    std::array<ZRef<CCtrlOriginButton>, 10> m_apBtLowCase;
protected:
    std::array<ZRef<CCtrlOriginButton>, 10> m_apBtHighCase;
protected:
    ZRef<CCtrlEditEx> m_pEditEx;
private:
    CLayoutMan m_lm;
// Methods
public:
    virtual  ~CSoftKeyboardDlg();

public:
    void _dtor_0();

public:
    CSoftKeyboardDlg(const CSoftKeyboardDlg &arg0);

public:
    void _ctor_1(const CSoftKeyboardDlg &arg0);

public:
    CSoftKeyboardDlg(long nMin, long nMax);

public:
    void _ctor_0(long nMin, long nMax);

public:
    virtual void OnCreate(void *arg0);

public:
    virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
    virtual void OnButtonClicked(uint32_t nId);

public:
    virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
    virtual void Update();

public:
    void SetTooltip(ZXString<char> sTooltip);

public:
    ZXString<char> GetResult();

public:
    static int32_t __cdecl InitializeSecondaryPassword(ZXString<char> &sResult, ZRef<CDialog> *ppDialog);

protected:
    void OnTabChanged(long nTab);

protected:
    void SetButton();

protected:
    int32_t GetNextSwitchingChar(uint32_t nId, char &c, int32_t bHighCase);

protected:
    int32_t CheckResultText();

public:
    CSoftKeyboardDlg &operator=(CSoftKeyboardDlg &arg0);

public:
    static CSoftKeyboardDlg &_op_assign_15(CSoftKeyboardDlg *pThis, CSoftKeyboardDlg &arg0);
};

STATIC_ASSERT_SIZE(CSoftKeyboardDlg, 3188);


