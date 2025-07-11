// NewYearCardSenderDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CtrlWnd/CtrlWnd.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"

// Level: 0 0x3b2d
class CNewYearCardReceiverSearchResult;
// Level: 1 0x3b50
class CUINewYearCardSenderDlg;

class CNewYearCardReceiverSearchResult
{
	// Nested
	// Fields
protected:
	ZArray<ZXString<char>> m_asNames;

protected:
	CUINewYearCardSenderDlg *m_pParent{};

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasBackgrnd;

protected:
	_x_com_ptr<IWzFont> m_pFontNormal;

protected:
	_x_com_ptr<IWzFont> m_pFontHighLight;

protected:
	int32_t m_iCurrentMouseOver{};
	// Methods
public:
	~CNewYearCardReceiverSearchResult();

public:
	void _dtor_0();

	void scaling_deleting_dtor()
	{
	}

public:
	CNewYearCardReceiverSearchResult(const CNewYearCardReceiverSearchResult &arg0);

public:
	void _ctor_1(const CNewYearCardReceiverSearchResult &arg0);

public:
	CNewYearCardReceiverSearchResult(CUINewYearCardSenderDlg *pParent);

public:
	void _ctor_0(CUINewYearCardSenderDlg *pParent);

protected:
	void SetUp(const ZArray<ZXString<char>> &asNames);

protected:
	void Draw(_x_com_ptr<IWzCanvas> pCanvas);

protected:
	int32_t OnMouseLButtonClk(long rx, long ry);

protected:
	void OnMouseMove(long rx, long ry);

protected:
	int32_t HitTest(long rx, long ry);

protected:
	void _InvalidateRect();

protected:
	long _GetTopItemIndex();

protected:
	long _GetSelection(long rx, long ry);

protected:
	void _ClearHighlight();

public:
	CNewYearCardReceiverSearchResult &operator=(const CNewYearCardReceiverSearchResult &arg0);

public:
	static CNewYearCardReceiverSearchResult &_op_assign_12(CNewYearCardReceiverSearchResult *pThis, const CNewYearCardReceiverSearchResult &arg0);
};
STATIC_ASSERT_SIZE(CNewYearCardReceiverSearchResult, 24);
class CUINewYearCardSenderDlg : public CUniqueModeless
{
	// Nested
public:
	enum ID_CTRL_
	{
		ID_CTRL_BT_SEARCH = 0,
		ID_CTRL_BT_OK = 1,
		ID_CTRL_BT_CANCEL = 2,
		ID_CTRL_EDIT_TARGET = 3,
		ID_CTRL_MLEDIT_MEMO = 4,
		ID_CTRL_SCROLL_ITEM = 5
	};
	// Fields
protected:
	ZXString<char> m_sTarget;

protected:
	ZXString<char> m_sMemo;

protected:
	ZRef<CCtrlButton> m_pBtSearch;

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlEdit> m_pEditTarget;

protected:
	ZRef<CCtrlMLEdit> m_pMLEditMemo;

protected:
	ZRef<CCtrlScrollBar> m_pSBNameList;

protected:
	long m_nInvenPOS{};

protected:
	long m_nItemID{};

protected:
	CNewYearCardReceiverSearchResult *m_pSearchResult{};

protected:
	bool m_bShowSearchResult{};
	// Methods
public:
	virtual ~CUINewYearCardSenderDlg();

public:
	void _dtor_0();

public:
	CUINewYearCardSenderDlg(const CUINewYearCardSenderDlg &arg0);

public:
	void _ctor_1(const CUINewYearCardSenderDlg &arg0);

public:
	CUINewYearCardSenderDlg(long nPOS, long nItemID);

public:
	void _ctor_0(long nPOS, long nItemID);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	static void __cdecl ShowDlg(long nPOS, long nItemID);

public:
	ZXString<char> &GetTargetName();

public:
	ZXString<char> &GetMemo();

protected:
	void SetSearchName(ZXString<char> sName);

protected:
	void _DoSearch();

protected:
	int32_t _SendNewYearCard();

protected:
	void _CloseDlg(int32_t nRetCode);

protected:
	void _ToggleSearchPane();

protected:
	void _ShowSearchPane(bool bShow);

protected:
	long _SearchFromFriendList(ZXString<char> sSubName, ZArray<ZXString<char>> &sResultToAdd);

protected:
	long _SearchFromGuildList(ZXString<char> sSubName, ZArray<ZXString<char>> &sResultToAdd);

	CLASS_RTTI_(CUINewYearCardSenderDlg, CUniqueModeless);

public:
	CUINewYearCardSenderDlg &operator=(const CUINewYearCardSenderDlg &arg0);

public:
	static CUINewYearCardSenderDlg &_op_assign_25(CUINewYearCardSenderDlg *pThis, const CUINewYearCardSenderDlg &arg0);
};
STATIC_ASSERT_SIZE(CUINewYearCardSenderDlg, 220);
