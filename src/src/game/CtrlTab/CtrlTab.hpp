// CtrlTab.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CtrlWnd/CtrlWnd.hpp"
#include "Wnd/Wnd.hpp"

// Level: 1 0x94e9
class CCtrlTab;

class CCtrlTab : public CCtrlWnd
{
    // Nested
public:
    struct CREATEPARAM
    {
        // Nested
        // Fields
    public:
        int32_t bDrawBaseImage{};

    public:
        long nTabSpace{};
        // Methods
    public:
        CREATEPARAM();

    public:
        void _ctor_0();
    };

public:
    struct TABINFO
    {
        // Nested
        // Fields
    public:
        int32_t bCanvas{};

    public:
        long nStart{};

    public:
        long nEnd{};

    public:
        ZXString16 sTabNameNormal;

    public:
        ZXString16 sTabNameSelected;

    public:
        _x_com_ptr<IWzCanvas> pCanvasNormal;

    public:
        _x_com_ptr<IWzCanvas> pCanvasSelected;

    public:
        int32_t bEnabled{};
        // Methods
    public:
        ~TABINFO();

    public:
        void _dtor_0();

    public:
        TABINFO(const CCtrlTab::TABINFO& arg0);

    public:
        void _ctor_1(const CCtrlTab::TABINFO& arg0);

    public:
        TABINFO();

    public:
        void _ctor_0();

    public:
        CCtrlTab::TABINFO& operator=(const CCtrlTab::TABINFO& arg0);

    public:
        static CCtrlTab::TABINFO& _op_assign_3(CCtrlTab::TABINFO* pThis, const CCtrlTab::TABINFO& arg0);
    };

    // Fields
protected:
    int32_t m_bSameWidth{};

protected:
    long m_nTabWidth{};

protected:
    int32_t m_bDrawBaseImage{};

protected:
    long m_nTabSpace{};

protected:
    long m_nCurTab{};

protected:
    ZList<CCtrlTab::TABINFO> m_lTabInfo;

protected:
    _x_com_ptr<IWzFont> m_pFontNormal;

protected:
    _x_com_ptr<IWzFont> m_pFontSelected;

protected:
    long m_nInsertPos{};

protected:
    long m_nType{};

protected:
    long m_nHeight{};
    // Methods
public:
    virtual ~CCtrlTab();

public:
    void _dtor_0();

public:
    CCtrlTab(const CCtrlTab& arg0);

public:
    void _ctor_1(const CCtrlTab& arg0);

public:
    CCtrlTab();

public:
    void _ctor_0();
    void _ctor_default()
    {
        new (this) CCtrlTab();
    }

public:
    virtual void CreateCtrl(CWnd* pParent, uint32_t nId, long nType, long l, long t, long width, long nHeight,
                            void* pData);

public:
    virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
    virtual int32_t OnSetFocus(int32_t bFocus);

public:
    virtual void Draw(long rx, long ry, const tagRECT* pRect);

public:
    void AddItem(const char* arg0, const char* arg1, int32_t arg2);

public:
    void AddItem_Canvas(_x_com_ptr<IWzCanvas> pCanvasNormal, _x_com_ptr<IWzCanvas> pCanvasSelected, int32_t bEnable);

public:
    void RemoveAllItems();

public:
    long GetCurTab();

public:
    long GetTabNo();

public:
    void SetTab(long nTab);

public:
    void AssimilateWidth(int32_t arg0, long arg1);

protected:
    _x_com_ptr<IWzCanvas> GetTabCanvas(long nType, long nNo);

protected:
    void RelocateTabPos();

protected:
    static void __cdecl GetTabBaseUOL(long type, ZXString16& sUOL);
    CLASS_RTTI_(CCtrlTab, CCtrlWnd);

public:
    CCtrlTab& operator=(const CCtrlTab& arg0);

public:
    static CCtrlTab& _op_assign_20(CCtrlTab* pThis, const CCtrlTab& arg0);
};

STATIC_ASSERT_SIZE(CCtrlTab, 112);
