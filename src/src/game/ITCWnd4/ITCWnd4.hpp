// ITCWnd4.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "ITC/ITC.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "Dialog/Dialog.hpp"

class CCtrlTab;
class CCtrlScrollBar;

// Level: 1 0x14983
class CITCWndItemDlg;
// Level: 1 0x228f5
class CITCBidAuctionDlg;

class CITCWndItemDlg : public CDialog
{
public:
	static inline int32_t ms_anItemScrollPos[5]{};
	// Nested
public:
	enum  ID_CTRL_
{
	ID_CTRL_BT_CLOSE = 1000,
	ID_CTRL_UIITEM_TAB = 1001,
	ID_CTRL_UIITEM_SCR_ITEM = 1002
};
enum  k
{
	kBtClose_X = 155,
	kBtClose_Y = 6,
	kScrItem_X = 152,
	kScrItem_Y = 51,
	kScrItem_Len = 200,
	kItemSlotNo = 24
};
	// Fields
protected:
	ZRef<CCtrlTab> m_pTab;

protected:
	ZRef<CCtrlScrollBar> m_pSBItem;

protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	CUIToolTip m_uiToolTip;

protected:
	long m_nFirstPosition{};

protected:
	long m_nItemTI{};

protected:
	_x_com_ptr<IWzProperty> m_pImgFontNumber;

protected:
	long m_nSelectedNo{};

protected:
	CITC *m_pITC{};

protected:
	long m_nItemID{};

public:
	ZRef<ITCITEM> m_pITCItem;
	// Methods
public:
	virtual ~CITCWndItemDlg();

public:
	void _dtor_0();

public:
	CITCWndItemDlg(const CITCWndItemDlg &arg0);

public:
	void _ctor_1( const CITCWndItemDlg &arg0);

public:
	CITCWndItemDlg(void *pData, ZRef<ITCITEM> &pii);

public:
	void _ctor_0( void *pData, ZRef<ITCITEM> &pii);

public:
	virtual void OnCreate(void *arg0);

public:
	virtual void OnDestroy();

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void ClearToolTip();

public:
	void ResetInfo();

public:
	void ChangeTab(long arg0);

public:
	long GetSlotPositionFromPoint(long rx, long ry);

public:
	long GetItemTypeIndex();

public:
	void SetSelectedNo(long nPos);

protected:
	void OnTabChanged(long nTab);

protected:
	int32_t GetItemSlotRect(long nSlotPosition, tagRECT *pRc);

public:
	CITCWndItemDlg &operator=(const CITCWndItemDlg &arg0);

public:
	static CITCWndItemDlg &_op_assign_18(CITCWndItemDlg *pThis, const CITCWndItemDlg &arg0);
};
STATIC_ASSERT_SIZE(CITCWndItemDlg, 2832);
class CITCBidAuctionDlg : public CDialog
{
	// Nested
public:
	enum  ID_CTRL_
{
	ID_CTRL_BT_CLOSE = 1000,
	ID_CTRL_UIITEM_TAB = 1001,
	ID_CTRL_UIITEM_SCR_ITEM = 1002,
	ID_CTRL_BT_BIDRANGEUP = 1003,
	ID_CTRL_BT_BIDRANGEDOWN = 1004
};
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlButton> m_pBtUp;

protected:
	ZRef<CCtrlButton> m_pBtDown;

protected:
	long m_nMyBidRange{};

protected:
	long m_nMyBidPrice{};

protected:
	long m_nBestBidPrice{};

protected:
	long m_nBidRangeUnit{};

protected:
	long m_tLastUpdate{};

protected:
	CITC *m_pITC{};

protected:
	long m_nItemID{};

public:
	ZRef<ITCITEM> m_pITCItem;
	// Methods
public:
	virtual ~CITCBidAuctionDlg();

public:
	void _dtor_0();

public:
	CITCBidAuctionDlg(const CITCBidAuctionDlg &arg0);

public:
	void _ctor_1( const CITCBidAuctionDlg &arg0);

public:
	CITCBidAuctionDlg(void *pData, ZRef<ITCITEM> &pii);

public:
	void _ctor_0( void *pData, ZRef<ITCITEM> &pii);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void Update();

public:
	long GetPriceWithCommision();

public:
	CITCBidAuctionDlg &operator=(const CITCBidAuctionDlg &arg0);

public:
	static CITCBidAuctionDlg &_op_assign_10(CITCBidAuctionDlg *pThis, const CITCBidAuctionDlg &arg0);
};
STATIC_ASSERT_SIZE(CITCBidAuctionDlg, 212);



