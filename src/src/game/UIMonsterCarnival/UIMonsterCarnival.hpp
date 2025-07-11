// UIMonsterCarnival.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UIWnd/UIWnd.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "Wnd/Wnd.hpp"

class CCtrlTab;
class CCtrlScrollBar;

// Level: 0 0x1116f
class CTabList;
// Level: 1 0x111a4
class CUIMonsterCarnival;
// Level: 1 0x111ed
class CUISummonedList;

class CTabList
{
	// Nested
public:
	struct TAB_ITEM
	{
		// Nested
		// Fields
	public:
		long nIdx{};

	public:
		ZXString<char> sName;

	public:
		long nCP{};

	public:
		ZXString<char> sFuncKey;

	public:
		ZXString<char> sDesc;

	public:
		tagRECT rcRange{};

	public:
		uint32_t wVK_Num{};
		// Methods
	public:
		~TAB_ITEM();

	public:
		void _dtor_0();

	public:
		TAB_ITEM(const CTabList::TAB_ITEM &arg0);

	public:
		void _ctor_1( const CTabList::TAB_ITEM &arg0);

	public:
		TAB_ITEM();

	public:
		void _ctor_0();

	public:
		CTabList::TAB_ITEM &operator=(const CTabList::TAB_ITEM &__that);

	public:
		static CTabList::TAB_ITEM &_op_assign_3(CTabList::TAB_ITEM *pThis, const CTabList::TAB_ITEM &__that);
	};
	// Fields
private:
	CUIMonsterCarnival *m_pUIMonsterCarnival{};

private:
	ZArray<CTabList::TAB_ITEM> m_aTabItem;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CTabList();

public:
	void _dtor_0();

public:
	CTabList(const CTabList &arg0);

public:
	void _ctor_1( const CTabList &arg0);

public:
	CTabList(CUIMonsterCarnival *arg0);

public:
	void _ctor_0( CUIMonsterCarnival *arg0);

public:
	void OnCreate();

public:
	void Draw(_x_com_ptr<IWzCanvas> pCanvas);

public:
	void SetData(long nIdx, ZXString<char> sName, long nSP, ZXString<char> sDesc);

public:
	ZXString<char> GetDataName(long nIdx);

public:
	long GetItemCount();

public:
	unsigned long GetSelectItemIdx_1(uint32_t wParam);

public:
	unsigned long GetSelectItemIdx_0(tagPOINT ptRel);

public:
	ZXString<char> GetSelectItemDesc(tagPOINT ptRel);

public:
	CTabList &operator=(const CTabList &arg0);

public:
	static CTabList &_op_assign_11(CTabList *pThis, const CTabList &arg0);
};
STATIC_ASSERT_SIZE(CTabList, 32);
class CUIMonsterCarnival : public CUIWnd, public TSingleton<CUIMonsterCarnival>
{
	// Nested
public:
	struct SPELLED_ITEM
	{
		// Nested
		// Fields
	public:
		long nCount{};

	public:
		ZXString<char> sName;
		// Methods
	public:
		~SPELLED_ITEM();

	public:
		void _dtor_0();

	public:
		SPELLED_ITEM(const CUIMonsterCarnival::SPELLED_ITEM &arg0);

	public:
		void _ctor_1( const CUIMonsterCarnival::SPELLED_ITEM &arg0);

	public:
		SPELLED_ITEM();

	public:
		void _ctor_0();

	public:
		CUIMonsterCarnival::SPELLED_ITEM &operator=(const CUIMonsterCarnival::SPELLED_ITEM &arg0);

	public:
		static CUIMonsterCarnival::SPELLED_ITEM &_op_assign_3(CUIMonsterCarnival::SPELLED_ITEM *pThis, const CUIMonsterCarnival::SPELLED_ITEM &arg0);
	};

public:
	enum  TAB_
{
	TAB_SUMMONED = 0,
	TAB_SKILL = 1,
	TAB_GUARDIAN = 2,
	TAB_NO = 3
};
	// Fields
public:
	ZArray<CUIMonsterCarnival::SPELLED_ITEM> m_aSpelledList;

protected:
	ZRef<CCtrlTab> m_pTab;

protected:
	ZRef<CCtrlScrollBar> m_pSB;

protected:
	ZRef<CCtrlButton> m_pBtDecision;

protected:
	ZRef<CCtrlButton> m_pBtRock;

protected:
	tagRECT m_rcLock{};

protected:
	int32_t m_bLockFixed{};

protected:
	long m_nCurTab{};

protected:
	int32_t m_bMinMaxState{};

protected:
	int32_t m_bSideBtState{};

protected:
	long m_nToggleTime{};

protected:
	std::array<CTabList *, 3> m_pTabList;

protected:
	ZRef<CUISummonedList> m_pUISummonedList;

protected:
	_x_com_ptr<IWzFont> m_pFontWhite;

protected:
	_x_com_ptr<IWzFont> m_pFontBlack;

protected:
	_x_com_ptr<IWzFont> m_pFontGray;

protected:
	_x_com_ptr<IWzFont> m_pFontGray55;

protected:
	_x_com_ptr<IWzFont> m_pFontGray77;

protected:
	CUIToolTip m_uiToolTip;

protected:
	unsigned long m_dwCurIdx{};

protected:
	ZXString<char> m_sRecentSpell;

protected:
	long m_tTabView{};

protected:
	long m_nPersonalRest{};

protected:
	long m_nPersonalTotal{};

protected:
	std::array<long, 2> m_aTeamRest{};

protected:
	std::array<long, 2> m_aTeamTotal{};

protected:
	long m_nMyTeam{};

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIMonsterCarnival();

public:
	void _dtor_0();

public:
	CUIMonsterCarnival(const CUIMonsterCarnival &arg0);

public:
	void _ctor_1( const CUIMonsterCarnival &arg0);

	CTOR_DEFAULT(CUIMonsterCarnival);
public:
	CUIMonsterCarnival();

public:
	void _ctor_0();

public:
	void InsertSpelledData(ZXString<char> sName, long nCount);

public:
	void UpdateSpelledData(ZXString<char> sName);

public:
	void SetSpelledData(ZXString<char> sName, long nCount);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnCreate(void *arg0);

public:
	virtual void OnDestroy();

public:
	virtual void ToggleAddOn(int32_t bOn);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void Update();

public:
	virtual void OnMoveWnd(long l, long t);

public:
	virtual int32_t IsMyAddon(CWnd *pWnd);

public:
	void OnTabAutoOpen(int32_t bTabMove);

public:
	long GetCurrentTab();

public:
	void SetCurrentTab(long arg0);

public:
	void RequestSend();

public:
	void RequestResult(long nCategory, long nIdx, ZXString<char> sCharacterName);

public:
	void FuncKeyProcess(uint32_t wParam);

public:
	void SetUIData(long nCategory, long nIdx, ZXString<char> sName, long nCP, ZXString<char> sDesc);

public:
	void ResetUI();

public:
	void DrawListTooltip(long rx, long ry, tagPOINT ptMouse);

public:
	int32_t DrawCPTooltip(long rx, long ry, tagPOINT ptRawMouse);

public:
	int32_t DrawLockTooltip(long rx, long ry, tagPOINT ptRawMouse);

public:
	void SetPersonalCP(long nRest, long nTotal);

public:
	void SetTeamCP(long nTeam, long nRest, long nTotal);

public:
	void SetTeam(long nTeam);

public:
	ZXString<char> GetRecentSpell();

protected:
	void LoadAllTabInfo();

protected:
	void OnTabChanged(long nTab);

protected:
	void ToggleTabWindow(int32_t bOpen);

protected:
	void SetButton();

protected:
	void SetScrollBar();

protected:
	void SetLayer();

protected:
	void SetLayerSize(long w, long h);

protected:
	long CalcTabWindowHeight(long nItemCount);

public:
	CUIMonsterCarnival &operator=(const CUIMonsterCarnival &arg0);

public:
	static CUIMonsterCarnival &_op_assign_40(CUIMonsterCarnival *pThis, const CUIMonsterCarnival &arg0);
};
STATIC_ASSERT_SIZE(CUIMonsterCarnival, 5628);
class CUISummonedList : public CWnd, public TSingleton<CUISummonedList>
{
	// Nested
public:
	
enum  k
{
	kWidth = 118,
	kHeight = 100
};
enum  ID_CTRL_SUMMONEDLIST_SCR
{
	ID_CTRL_SUMMONEDLIST_SCR = 0
};

	// Fields
protected:
	CUIToolTip m_uiToolTip;

protected:
	_x_com_ptr<IWzFont> m_pFontGray77;

protected:
	_x_com_ptr<IWzFont> m_pFontWhite;

protected:
	ZRef<CCtrlScrollBar> m_pSB;

protected:
	CUIMonsterCarnival *m_pUIMonsterCarnival{};
	// Methods
public:
	virtual ~CUISummonedList();

public:
	void _dtor_0();

public:
	CUISummonedList(const CUISummonedList &arg0);

public:
	void _ctor_1( const CUISummonedList &arg0);

public:
	CUISummonedList(CUIMonsterCarnival *pUIMonsterCarnival, long lLeft, long lTop);

public:
	void _ctor_0( CUIMonsterCarnival *pUIMonsterCarnival, long lLeft, long lTop);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void ClearToolTip();

public:
	void SetScrollBar();

public:
	void MoveScrollBarPos(long nInc);

public:
	CUISummonedList &operator=(const CUISummonedList &arg0);

public:
	static CUISummonedList &_op_assign_11(CUISummonedList *pThis, const CUISummonedList &arg0);
};
STATIC_ASSERT_SIZE(CUISummonedList, 2780);

