// UISkillEx.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UIToolTip/UIToolTip.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "UIWnd/UIWnd.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "SkillInfo/SkillInfo.hpp"
#include "Wnd/Wnd.hpp"

class CCtrlEdit;
class CCtrlTab;
class CCtrlScrollBar;

// Level: 1 0xd9ba
class CUIMacroSysEx;
// Level: 1 0xd9ed
class CUISkillEx;

class CUIMacroSysEx : public CWnd, public TSingleton<CUIMacroSysEx>
{
	// Nested
public:
	enum  ID_CTRL_
{
	ID_CTRL_BT_OK = 3000,
	ID_CTRL_CHECKBOX_SHOUT = 3010,
	ID_CTRL_EDIT_MACROSKILL_NAME = 3011
};
enum  UnnamedEnum46645
{
	kWidth = 180,
	kHeight = 306,
	kSkillSet_X = 11,
	kSkillSet_Y = 27,
	kSkillIcon_X = 14,
	kSkillIcon_Y = 30,
	kSkill_OffsetX = 34,
	kSkill_OffsetY = 41,
	MACROSKILL_PER_PAGE = 5
};
	// Fields
protected:
	ZRef<CCtrlOriginButton> m_pBtChangeName;

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
	virtual ~CUIMacroSysEx();

public:
	void _dtor_0();

public:
	CUIMacroSysEx(const CUIMacroSysEx &arg0);

public:
	void _ctor_1( const CUIMacroSysEx &arg0);

public:
	CUIMacroSysEx(long lLeft, long lTop);

public:
	void _ctor_0( long lLeft, long lTop);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void OnMouseButton(uint32_t arg0, uint32_t arg1, long arg2, long arg3);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void SetEnable(int32_t bEnable);

public:
	virtual int32_t IsEnabled();

public:
	virtual void SetShow(int32_t bShow);

public:
	virtual int32_t IsShown();

public:
	virtual void Draw(const tagRECT *pRect);

public:
	int32_t GetIndexByPos(long rx, long ry, int32_t bIncludeCombinationSkill, long &nMacroIdx, long &nSkillIdx);

public:
	void ResetInfo();

protected:
	void OnSelected(long nMacroIdx);

	CLASS_RTTI_(CUIMacroSysEx, CWnd);

public:
	CUIMacroSysEx &operator=(const CUIMacroSysEx &arg0);

public:
	static CUIMacroSysEx &_op_assign_22(CUIMacroSysEx *pThis, const CUIMacroSysEx &arg0);
};
STATIC_ASSERT_SIZE(CUIMacroSysEx, 2820);
class CUISkillEx : public CUIWnd, public TSingleton<CUISkillEx>
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
		void _ctor_0( long arg0, long arg1);

	public:
		RecommSkillPair();

	public:
		void _ctor_1();

	public:
		bool operator<(const CUISkillEx::RecommSkillPair &arg0) const;

	public:
		static bool _op_lt_2(CUISkillEx::RecommSkillPair *pThis, const CUISkillEx::RecommSkillPair &arg0);
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
	ID_CTRL_BT_TALK = 2024,
	ID_CTRL_BT_SKILL_GUIDE_0 = 3000,
	ID_CTRL_BT_SKILL_GUIDE_1 = 3001,
	ID_CTRL_BT_SKILL_GUIDE_2 = 3002,
	ID_CTRL_BT_SKILL_GUIDE_3 = 3003,
	ID_CTRL_BT_SKILL_GUIDE_4 = 3004
};
enum  k
{
	kWidth = 286,
	kHeight = 306,
	kBtClose_X = 262,
	kBtClose_Y = 5,
	kBtMacro_X = 222,
	kBtMacro_Y = 171,
	kScrSkill_X = 265,
	kScrSkill_Y = 219,
	kScrSkill_Len = 77,
	kSkillInfo_X = 10,
	kSkillInfo_Y = 219,
	kSkillInfo_Width = 124,
	kSkillInfo_Height = 35,
	kSkillInfo_offsetX = 3,
	kSkillInfo_offsetY = 7,
	kBtHeight = 12,
	kBtWidth = 12,
	kLineHeight = 15,
	kSP_X = 99,
	kSP_Y = 178,
	kBtUpOffset_X = 109,
	kBtUpOffset_Y = 20
};
enum  SKILL_
{
	SKILL_COLUMN_PER_PAGE = 2,
	SKILL_ROW_PER_PAGE = 2,
	SKILL_PER_PAGE = 4
};
enum  TABCOUNT
{
	TABCOUNT = 11
};
enum MACROUISTATE_
{
	MACROUISTATE_NONE = 0,
	MACROUISTATE_FULL = 1
};
	// Fields
protected:
	ZArray<long> m_aSkillRoot;

protected:
	ZRef<CCtrlTab> m_pTab;

protected:
	ZRef<CCtrlScrollBar> m_pSBSkill;

protected:
	std::array<std::array<ZRef<CCtrlButton>, 2>, 2> m_apBtUp;

protected:
	ZRef<CCtrlOriginButton> m_pBtOpenMacroSkill;

protected:
	SKILLROOT m_SkillRootVisible;

protected:
	std::array<_x_com_ptr<IWzCanvas>, 2> m_pCanvasSkill;

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
	_x_com_ptr<IWzProperty> m_pImgFontSPNo;

protected:
	long m_nMouseOver{};

protected:
	int32_t m_bTip{};

protected:
	std::array<_x_com_ptr<IWzGr2DLayer>, 3> m_pLayerTip;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerGlow;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerDragon;

protected:
	long m_nMacroUIState{};

protected:
	ZRef<CUIMacroSysEx> m_pUIMacroSys;

protected:
	long m_nTabOption{};

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUISkillEx();

public:
	void _dtor_0();

public:
	CUISkillEx(const CUISkillEx &arg0);

public:
	void _ctor_1( const CUISkillEx &arg0);

public:
	CUISkillEx(int32_t bTip, long nTabOption);

public:
	void _ctor_0( int32_t bTip, long nTabOption);

public:
	virtual void OnCreate(void *pData);

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
	virtual void Draw(const tagRECT *arg0);

public:
	virtual int32_t IsMyAddon(CWnd *pWnd);

public:
	void ResetInfo();

public:
	void ToggleTab();

public:
	void ShiftMacroUIState();

public:
	long GetMacroUIState();

public:
	long GetRecommendSKill(const SKILLROOT *arg0);

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
	void SetButton(long nX, long nY, int32_t bShow, int32_t bEnable);

protected:
	long GetSkillIndexFromPoint(long rx, long ry, int32_t bIcon);

protected:
	const SKILLROOT *GetSkillRootVisible(int32_t bReload);

protected:
	void CreateTip();



		CLASS_RTTI_(CUISkillEx, CUIWnd);

public:
	CUISkillEx &operator=(const CUISkillEx &arg0);

public:
	static CUISkillEx &_op_assign_30(CUISkillEx *pThis, const CUISkillEx &arg0);
};
STATIC_ASSERT_SIZE(CUISkillEx, 3000);




// 86F124 4
static ZArray<CUISkillEx::RecommSkillPair> _D_S_ARECOMMSKILL__1{};

void __cdecl ZSort_CUISkillEx__RecommSkillPair_(ZArray<CUISkillEx::RecommSkillPair> &a);
void __cdecl ZSort_CUISkillEx__RecommSkillPair_(ZArray<CUISkillEx::RecommSkillPair> &a, __POSITION *posFrom, __POSITION *posTo);
void __cdecl DownHeap_CUISkillEx__RecommSkillPair_(ZArray<CUISkillEx::RecommSkillPair> &a, int32_t nIdx, int32_t nLen, int32_t nFrom);
void __cdecl InsertionSort_CUISkillEx__RecommSkillPair_(ZArray<CUISkillEx::RecommSkillPair> &a, int32_t nFrom, int32_t nTo);
int32_t __cdecl Partition_CUISkillEx__RecommSkillPair_(ZArray<CUISkillEx::RecommSkillPair> &a, int32_t nFrom, int32_t nTo, const CUISkillEx::RecommSkillPair &pivot);
