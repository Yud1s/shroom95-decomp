// UISkill.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "LayoutMan/LayoutMan.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "UIWnd/UIWnd.hpp"
#include "SkillInfo/SkillInfo.hpp"
#include "Wnd/Wnd.hpp"

class CCtrlTab;
class CCtrlScrollBar;
class CCtrlEdit;

// Level: 1 0xd916
class CUISkill;
// Level: 1 0xd8e7
class CWndSkillGuide;
// Level: 1 0xd8cd
class CUIMacroSys;

class CUISkill : public CUIWnd, public TSingleton<CUISkill>
{
    // Nested
public:
    struct RecommSkillPair
    {
        // Nested
        // Fields
    public:
        long nSP{};

    public:
        long nSkillID{};
        // Methods
    public:
        RecommSkillPair(long arg0, long arg1);

    public:
        void _ctor_0(long arg0, long arg1);

    public:
        RecommSkillPair();

    public:
        void _ctor_1();

    public:
        bool operator<(const CUISkill::RecommSkillPair& arg0) const;

    public:
        static bool _op_lt_2(CUISkill::RecommSkillPair* pThis, const CUISkill::RecommSkillPair& arg0);
    };

public:
    enum ID_CTRL_
    {
        ID_CTRL_TAB = 2000,
        ID_CTRL_SCR_ITEM = 2001,
        ID_CTRL_BT_UP0 = 2010,
        ID_CTRL_BT_TIP0 = 2020,
        ID_CTRL_BT_TIP1 = 2021,
        ID_CTRL_BT_TIP2 = 2022,
        ID_CTRL_BT_OPENMACROSKILL = 2023,
        ID_CTRL_BT_SKILL_GUIDE_0 = 3000,
        ID_CTRL_BT_SKILL_GUIDE_1 = 3001,
        ID_CTRL_BT_SKILL_GUIDE_2 = 3002,
        ID_CTRL_BT_SKILL_GUIDE_3 = 3003,
        ID_CTRL_BT_SKILL_GUIDE_4 = 3004
    };

    enum k
    {
        kWidth = 174,
        kHeight = 281,
        kBtClose_X = 153,
        kBtClose_Y = 6,
        kScrSkill_X = 153,
        kScrSkill_Y = 93,
        kScrSkill_Len = 155,
        kSkillInfo_X = 10,
        kSkillInfo_Y = 93,
        kBtHeight = 12,
        kBtWidth = 12,
        kLineHeight = 15,
        kSP_X = 104,
        kSP_Y = 256,
        kBtUpOffset_X = 125,
        kBtUpOffset_Y = 20,
        kTabButtonWidth = 31
    };

    enum SKILL_PER_PAGE
    {
        SKILL_PER_PAGE = 4
    };

    enum MACROUISTATE_
    {
        MACROUISTATE_NONE = 0,
        MACROUISTATE_FULL = 1
    };

    enum MAX_TAB_NUM
    {
        MAX_TAB_NUM = 5
    };

    // Fields
protected:
    ZArray<long> m_aSkillRoot;

protected:
    ZRef<CCtrlTab> m_pTab;

protected:
    ZRef<CCtrlScrollBar> m_pSBSkill;

protected:
    std::array<ZRef<CCtrlButton>, 4> m_apBtUp{};

protected:
    ZRef<CCtrlOriginButton> m_pBtOpenMacroSkill;

protected:
    SKILLROOT m_SkillRootVisible;

protected:
    std::array<_x_com_ptr<IWzCanvas>, 2> m_pCanvasSkill{};

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasRecommendSkill;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasLine;

protected:
    _x_com_ptr<IWzFont> m_pFont;

protected:
    _x_com_ptr<IWzFont> m_pFontBonus;

protected:
    _x_com_ptr<IWzFont> m_pFontBookName;

protected:
    _x_com_ptr<IWzFont> m_pFontNo;

protected:
    long m_nMouseOver{};

protected:
    int32_t m_bTip{};

protected:
    std::array<_x_com_ptr<IWzGr2DLayer>, 3> m_pLayerTip{};

protected:
    long m_nMacroUIState{};

protected:
    ZRef<CUIMacroSys> m_pUIMacroSys;

protected:
    long m_nTabOption{};

protected:
    int32_t m_bDualRogueSkillWarning{};

protected:
    std::array<ZRef<CCtrlOriginButton>, 5> m_pBtSkillGuide{};

protected:
    ZRef<CWndSkillGuide> m_pWndSkillGuide;

private:
    CLayoutMan m_lm;
    // Methods
public:
    virtual ~CUISkill();

public:
    void _dtor_0();

public:
    CUISkill(const CUISkill& arg0);

public:
    void _ctor_1(const CUISkill& arg0);

public:
    CUISkill(int32_t bTip, long nTabOption);

public:
    void _ctor_0(int32_t bTip, long nTabOption);

public:
    virtual void OnCreate(void* pData);

public:
    virtual void OnDestroy();

public:
    virtual void OnMoveWnd(long l, long t);

public:
    virtual int32_t OnMouseMove(long rx, long ry);

public:
    virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
    virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
    virtual void OnButtonClicked(uint32_t nId);

public:
    virtual void Draw(const tagRECT* arg0);

public:
    virtual int32_t IsMyAddon(CWnd* pWnd);

public:
    void ResetInfo();

public:
    void ToggleTab();

public:
    void ShiftMacroUIState();

public:
    long GetMacroUIState() const;

public:
    long GetRecommendSKill(const SKILLROOT* pSkillRoot);

protected:
    void OnTabChanged(long nTab);

protected:
    void OnSkillLevelUpButton(long nIdx);

protected:
    void SetSkillRootList();

protected:
    void SetTabItems();

protected:
    void SetScrollBar();

protected:
    void SetButtons();

protected:
    void SetButton(long nIdx, int32_t bShow, int32_t bEnable);

protected:
    long GetSkillIndexFromPoint(long rx, long ry, int32_t bIcon);

protected:
    const SKILLROOT* GetSkillRootVisible(int32_t bReload);

protected:
    void CreateTip();

protected:
    long GetMySkillDegreeSP(long nSkillDegree);

protected:
    long GetMaxSkillDegreeSP(long nSkillDegree);

protected:
    int32_t CanSkillUp(const SKILLENTRY* pSkillEntry);

protected:
    long GetMySkillDegreeSPDualJob(long nDualJobSkillDegree);

protected:
    void GetMaxSkillDegreeSPDualJob(long nDualJobSkillDegree, long& nMaxSP, long& nJobSP, long& nSpecialSP);

protected:
    int32_t CanSkillUpDualJob(const SKILLENTRY* pSkillEntry);

public:
    void OpenSkillGuide(long nGrade);

public:
    void OpenCurSkillGuide();

public:
    void CloseSkillGuide();

    CLASS_RTTI_(CUISkill, CUIWnd);

public:
    CUISkill& operator=(const CUISkill& arg0);

public:
    static CUISkill& _op_assign_39(CUISkill* pThis, const CUISkill& arg0);
};

STATIC_ASSERT_SIZE(CUISkill, 3040);

class CWndSkillGuide : public CWnd
{
    // Nested
    // Fields
    // Methods
public:
    virtual ~CWndSkillGuide();

public:
    void _dtor_0();

public:
    CWndSkillGuide(const CWndSkillGuide& arg0);

public:
    void _ctor_1(const CWndSkillGuide& arg0);

public:
    CWndSkillGuide(long nGrade);

public:
    void _ctor_0(long nGrade);

public:
    virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
    virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
    virtual void OnMoveWnd();

public:
    CWndSkillGuide& operator=(const CWndSkillGuide& arg0);

public:
    static CWndSkillGuide& _op_assign_6(CWndSkillGuide* pThis, const CWndSkillGuide& arg0);
};

STATIC_ASSERT_SIZE(CWndSkillGuide, 128);

class CUIMacroSys : public CWnd, public TSingleton<CUIMacroSys>
{
    // Nested
public:
    enum ID_CTRL_
    {
        ID_CTRL_BT_OK = 3000,
        ID_CTRL_BT_FOLD = 3001,
        ID_CTRL_SCR_ITEM = 3010,
        ID_CTRL_CHECKBOX_SHOUT = 3011,
        ID_CTRL_EDIT_MACROSKILL_NAME = 3012
    };

    enum UnnamedEnum46450
    {
        kWidth = 195,
        kHeight = 281,
        kScrMacroSys_X = 174,
        kScrMacroSys_Y = 42,
        kScrMacroSys_Len = 124,
        MACROSKILL_PER_PAGE = 3
    };

    // Fields
protected:
    ZRef<CCtrlOriginButton> m_pBtChangeName;

protected:
    ZRef<CCtrlScrollBar> m_pSBMacro;

protected:
    ZRef<CCtrlCheckBox> m_pCheckShout;

protected:
    ZRef<CCtrlEdit> m_pEditName;

protected:
    CUIToolTip m_uiToolTip;

protected:
    long m_nMouseOver{};

protected:
    long m_nSelected{};

private:
    int32_t m_bEnable{};

private:
    int32_t m_bShow{};

private:
    CLayoutMan m_lm;
    // Methods
public:
    virtual ~CUIMacroSys();

public:
    void _dtor_0();

public:
    CUIMacroSys(const CUIMacroSys& arg0);

public:
    void _ctor_1(const CUIMacroSys& arg0);

public:
    CUIMacroSys(long nLeft, long nTop);

public:
    void _ctor_0(long nLeft, long nTop);

public:
    virtual void OnCreate(void* pData);

public:
    virtual void OnDestroy();

public:
    virtual int32_t OnSetFocus(int32_t bFocus);

public:
    virtual void OnMouseButton(uint32_t arg0, uint32_t arg1, long arg2, long arg3);

public:
    virtual int32_t OnMouseMove(long rx, long ry);

public:
    virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
    virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
    virtual void OnButtonClicked(uint32_t nId);

public:
    virtual int32_t HitTest(long rx, long ry, CCtrlWnd** ppCtrl);

public:
    virtual void SetEnable(int32_t bEnable);

public:
    virtual int32_t IsEnabled();

public:
    virtual void SetShow(int32_t bShow);

public:
    virtual int32_t IsShown();

public:
    virtual void Draw(const tagRECT* pRect);

public:
    int32_t GetIndexByPos(long rx, long ry, int32_t bIncludeCombinationSkill, long& nMacroIdx, long& nSkillIdx);

public:
    void ResetInfo();

protected:
    void OnSelected(long nMacroIdx);

    CLASS_RTTI_(CUIMacroSys, CWnd);

public:
    CUIMacroSys& operator=(const CUIMacroSys& arg0);

public:
    static CUIMacroSys& _op_assign_23(CUIMacroSys* pThis, const CUIMacroSys& arg0);
};

STATIC_ASSERT_SIZE(CUIMacroSys, 2828);


// 86F104 4
static ZArray<CUISkill::RecommSkillPair> _D_S_ARECOMMSKILL{};

void __cdecl DownHeap_CUISkill__RecommSkillPair_(ZArray<CUISkill::RecommSkillPair>& a, int32_t nIdx, int32_t nLen,
                                                 int32_t nFrom);
void __cdecl ZSort_CUISkill__RecommSkillPair_(ZArray<CUISkill::RecommSkillPair>& a, __POSITION* posFrom,
                                              __POSITION* posTo);
long __cdecl get_job_change_level(long nJob, short nSubJob, int32_t nStep);
int32_t __cdecl Partition_CUISkill__RecommSkillPair_(ZArray<CUISkill::RecommSkillPair>& a, int32_t nFrom, int32_t nTo,
                                                     const CUISkill::RecommSkillPair& pivot);
void __cdecl ZSort_CUISkill__RecommSkillPair_(ZArray<CUISkill::RecommSkillPair>& a);
void __cdecl InsertionSort_CUISkill__RecommSkillPair_(ZArray<CUISkill::RecommSkillPair>& a, int32_t nFrom, int32_t nTo);
