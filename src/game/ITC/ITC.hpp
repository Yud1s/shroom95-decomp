// ITC.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "GW/GW.hpp"
#include "Stage/Stage.hpp"
#include "ITCWnd2/ITCWnd2.hpp"
#include "ITCWnd/ITCWnd.hpp"
#include "Packet/Packet.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "Wnd/Wnd.hpp"

struct CT_INFO;
class CCtrlSelector;
class CITCWnd_Status;
class CCtrlScrollBar;

// Level: 1 0x14926
class CITCWnd_List;
// Level: 1 0x14846
class CITC;
// Level: 1 0x14903
class CITCWnd_Status;

class CITCWnd_List : public CWnd
{
	// Nested
public:
	struct PICTURE_PLATE
	{
		// Nested
		// Fields
	public:
		long nX{};

	public:
		long nY{};

	public:
		ZXString16 sUOL;
		// Methods
	public:
		~PICTURE_PLATE();

	public:
		void _dtor_0();

	public:
		PICTURE_PLATE(const CITCWnd_List::PICTURE_PLATE &arg0);

	public:
		void _ctor_1( const CITCWnd_List::PICTURE_PLATE &arg0);

	public:
		PICTURE_PLATE();

	public:
		void _ctor_0();

	public:
		CITCWnd_List::PICTURE_PLATE &operator=(const CITCWnd_List::PICTURE_PLATE &arg0);

	public:
		static CITCWnd_List::PICTURE_PLATE &_op_assign_3(CITCWnd_List::PICTURE_PLATE *pThis, const CITCWnd_List::PICTURE_PLATE &arg0);
	};

public:
	enum  ID_CTRL_
{
	ID_CTRL_ST_ITCLIST = 1000,
	ID_CTRL_BT_PLATE_START = 2000,
	ID_CTRL_SCROLLBAR = 3000
};
enum  ITC_
{
	ITC_PLATE_NO = 16,
	ITC_BUTTON_PER_ROWS = 2
};
enum  k
{
	kScroll_XPos = 483,
	kScroll_YPos = 0,
	kScroll_Height = 337,
	kScreen_Height = 320,
	kClipRectText_Left = 10,
	kClipRectText_Top = 7,
	kClipRectText_Width = 470
};
enum  UnnamedEnum84233
{
	Sub_Category_Contract_History = 2,
	Sub_Category_Auction_History = 3,
	Xpos_ItemName = 10,
	Xpos_MyPage_ItemName = 71
};
	// Fields
public:
	long m_nCurrentCategoryItemCnt{};

protected:
	ZRef<CCtrlSelector> m_pSelector;

protected:
	std::array<std::array<ZRef<CCtrlButton>, 2>, 18> m_pBtPlate;

protected:
	long m_nPlateNo{};

protected:
	CITC *m_pITC{};

protected:
	ZArray<_x_com_ptr<IWzGr2DLayer>> m_apClassLayer;

protected:
	ZArray<_x_com_ptr<IWzGr2DLayer>> m_apLimitLayer;

protected:
	CUIToolTip m_uiToolTip;

protected:
	ZArray<CITCWnd_List::PICTURE_PLATE> m_picturePlate;

protected:
	ZArray<long> m_aSetEffectItem;

protected:
	long m_nCurCategory{};

protected:
	long m_nCurCategorySub{};

protected:
	long m_nCurPage{};

protected:
	ZRef<CCtrlScrollBar> m_pScrollBar;

protected:
	ZArray<CT_INFO> m_aCT;

protected:
	ZArray<_x_com_ptr<IWzFont>> m_apFont;

protected:
	long m_nScrollPos{};

protected:
	long m_nScrollRange{};
	// Methods
public:
	virtual ~CITCWnd_List();

public:
	void _dtor_0();

public:
	CITCWnd_List(const CITCWnd_List &arg0);

public:
	void _ctor_1( const CITCWnd_List &arg0);

public:
	CITCWnd_List();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void ClearToolTip();

public:
	void SetCursorToPlate(long nPlateNo);

public:
	tagRECT GetPlateRect(long nPlate);

public:
	void ChangeCategorySub();

public:
	void ChangePage();

public:
	void AddPicturePlate(long arg0, long arg1, const wchar_t *arg2);

public:
	void ClearPicturePlate();

public:
	int32_t IsSameList();

public:
	void OnGetNewList();

public:
	void OnSetCurPage(long nPlateNo);

public:
	ZXString<char> GetContractHistoryCode(long nProcessStatus);

public:
	ZXString<char> GetAuctionHistoryCode(long nProcessStatus);

protected:
	void SetPlateNo(long nPlateNo);

public:
	CITCWnd_List &operator=(const CITCWnd_List &arg0);

public:
	static CITCWnd_List &_op_assign_24(CITCWnd_List *pThis, const CITCWnd_List &arg0);
};
STATIC_ASSERT_SIZE(CITCWnd_List, 3120);

class CITCWnd_Status : public CWnd
{
	// Nested
public:
	enum ID_CTRL_BT_ITCSTATUS_
{
	ID_CTRL_BT_ITCSTATUS_CHARGE = 1000,
	ID_CTRL_BT_ITCSTATUS_CHECK = 1001,
	ID_CTRL_BT_ITCSTATUS_EXIT = 1002
};
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtCharge;

protected:
	ZRef<CCtrlButton> m_pBtCheck;

protected:
	ZRef<CCtrlButton> m_pBtExit;

protected:
	CITC *m_pITC{};
	// Methods
public:
	virtual ~CITCWnd_Status();

public:
	void _dtor_0();

public:
	CITCWnd_Status(const CITCWnd_Status &arg0);

public:
	void _ctor_1( const CITCWnd_Status &arg0);

public:
	CITCWnd_Status();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	CITCWnd_Status &operator=(const CITCWnd_Status &arg0);

public:
	static CITCWnd_Status &_op_assign_8(CITCWnd_Status *pThis, const CITCWnd_Status &arg0);
};
STATIC_ASSERT_SIZE(CITCWnd_Status, 156);

class CITC : public CStage
{
	// Nested
	// Fields
public:
	int32_t m_bITCRequestSent{};

protected:
	std::array<long, 2> _ZtlSecureTear_m_nNexonCash{};

protected:
	uint32_t _ZtlSecureTear_m_nNexonCash_CS{};

protected:
	std::array<long, 2> _ZtlSecureTear_m_nMaplePoint{};

protected:
	uint32_t _ZtlSecureTear_m_nMaplePoint_CS{};

protected:
	_FILETIME m_ftRel;

public:
	ZXString<char> m_sNexonClubID;

public:
	ZXString<char> m_sNexonClubIDToShow;

public:
	void *m_hSingleInstanceMtx{};

public:
	ZArray<ZRef<ITCITEM>> m_aSaleItem;

public:
	ZArray<ZRef<ITCITEM>> m_aPurchaseItem;

public:
	ZArray<ZRef<ITCITEM>> m_aWishItem;

public:
	ZArray<ZRef<ITCITEM>> m_aCurrentPageItem;

public:
	long m_nCurrentCategoryItemCnt{};

public:
	long m_nCurrentPageItemCnt{};

public:
	long m_nSortType{};

public:
	long m_nSortColumn{};

protected:
	long m_nCurCategory{};

protected:
	long m_nCurCategorySub{};

protected:
	long m_nCurPage{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayer;

protected:
	CITCWnd_Char m_wndChar;

protected:
	CITCWnd_SALE m_wndSale;

protected:
	CITCWnd_PURCHASE m_wndPurchase;

protected:
	CITCWnd_Inventory m_wndInventory;

protected:
	CITCWnd_Tab m_wndTab;

protected:
	CITCWnd_SubTab m_wndSubTab;

protected:
	CITCWnd_List m_wndList;

protected:
	CITCWnd_Status m_wndStatus;

public:
	long m_nWishItemID{};

public:
	long m_nWishPrice{};

public:
	long m_nWishCount{};

public:
	unsigned char m_bWishRegistrationFeeOption{};

public:
	unsigned char m_bWishDuration{};

public:
	ZXString<char> m_sWishDesc;

public:
	long m_nRegisterFeeMeso{};

public:
	long m_nCommissionRate{};

public:
	long m_nCommissionBase{};

public:
	long m_nAuctionDurationMin{};

public:
	long m_nAuctionDurationMax{};

private:
	int32_t m_bSearch{};

private:
	long m_nSearchCategory{};

private:
	long m_nSearchSubCategory{};

private:
	long m_nSearchOption{};

private:
	ZXString<char> m_sSearchCondition;

private:
	int32_t m_bNoticeLimitedList{};
	// Methods
public:
	virtual ~CITC();

public:
	void _dtor_0();

public:
	CITC(const CITC &arg0);

public:
	void _ctor_1( const CITC &arg0);

public:
	CITC(CInPacket &iPacket);

public:
	void _ctor_0( CInPacket &iPacket);

public:
	virtual void Init(void *pParam);

public:
	virtual void Close();

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	int32_t IsNum(ZXString<char> arg0);

public:
	int32_t IsNum(ZRef<CCtrlEdit> arg0);

public:
	void OnChangedCategory(int32_t nCategory);

public:
	void OnChangedCategorySub(int32_t nCategorySub, int32_t nSortType, int32_t nSortColumn);

public:
	void OnChangedPage(int32_t nPage);

public:
	void OnBuy(ZRef<ITCITEM> &ii);

public:
	void OnSale(ZRef<ITCITEM> &pii);

public:
	void OnSetZzim(ZRef<ITCITEM> &ii);

public:
	void OnBuyZzim(ZRef<ITCITEM> &ii);

public:
	void OnDeleteZzim(ZRef<ITCITEM> &ii);

public:
	void OnViewWish(ZRef<ITCITEM> &ii);

public:
	void OnBuyWish(ZRef<ITCITEM> &ii);

public:
	void OnCancelWish(ZRef<ITCITEM> &ii);

public:
	void OnBid(ZRef<ITCITEM> &ii);

public:
	void OnBuyAuctionImm(ZRef<ITCITEM> &ii);

public:
	void OnStatusCharge();

public:
	void OnStatusCheck();

public:
	void OnStatusExit();

public:
	_FILETIME FileTimeAddition(_FILETIME ftFirst, _FILETIME ftSecond, int32_t bSubtract);

public:
	_FILETIME GetRelTime();

public:
	_SYSTEMTIME GetCorrectTime();

public:
	long GetNexonCash();

public:
	long GetMaplePoint();

public:
	long GetCurCategory();

public:
	long GetCurCategorySub();

public:
	long GetCurPage();

public:
	int32_t IsSaleCategory();

public:
	int32_t IsPurchaseCategory();

public:
	int32_t IsAuctionCategory();

public:
	int32_t IsMyPageCategory();

public:
	int32_t IsHelpCategory();

public:
	int32_t OnRegisterWishEntry(long nItemID, long nWishPrice, long nWishCount, unsigned char bWishRegistrationFeeOption, unsigned char bWishDuration, ZXString<char> sWishDesc);

public:
	int32_t OnRegisterSaleEntry(long nRegType, long nTI, long nSlotNo, GW_ItemSlotBase *pItem);

public:
	void OnSaleCurrentItem(long nItemTI, long nSlotPosition, GW_ItemSlotBase *pItem, long nITCSN);

public:
	void OnCancelSaleItem(ZRef<ITCITEM> &ii);

public:
	void OnMoveITCPurchaseItemLtoS(ZRef<ITCITEM> &ii, long nTI, long nPos);

public:
	int32_t TrySendQueryCashRequest();

protected:
	long __fastcall _ZtlSecureGet_m_nNexonCash() const;

protected:
	long __fastcall _ZtlSecurePut_m_nNexonCash(long arg0);

protected:
	long __fastcall _ZtlSecureGet_m_nMaplePoint() const;

protected:
	long __fastcall _ZtlSecurePut_m_nMaplePoint(long arg0);

public:
	virtual void OnPacket(long nType, CInPacket &iPacket);

protected:
	void OnChargeParamResult(CInPacket &iPacket);

protected:
	void OnQueryCashResult(CInPacket &iPacket);

protected:
	void OnNormalItemResult(CInPacket &iPacket);

protected:
	void OnNormalItemResRegisterSaleEntryFailed(CInPacket &iPacket);

protected:
	void OnNormalItemResRegisterSaleEntryDone(CInPacket &iPacket);

protected:
	void OnSaleCurrentItemToWishDone(CInPacket &iPacket);

protected:
	void OnSaleCurrentItemToWishFailed(CInPacket &iPacket);

protected:
	void OnGetITCListFailed(CInPacket &iPacket);

protected:
	void OnGetITCListDone(CInPacket &iPacket);

protected:
	void OnGetSearchITCListFailed(CInPacket &iPacket);

protected:
	void OnGetSearchITCListDone(CInPacket &iPacket);

protected:
	void OnGetUserPurchaseItemDone(CInPacket &iPacket);

protected:
	void OnGetUserPurchaseItemFailed(CInPacket &iPacket);

protected:
	void OnGetUserSaleItemDone(CInPacket &iPacket);

protected:
	void OnGetUserSaleItemFailed(CInPacket &iPacket);

protected:
	void OnCancelSaleItemDone(CInPacket &iPacket);

protected:
	void OnCancelSaleItemFailed(CInPacket &iPacket);

protected:
	void OnMoveITCPurchaseItemLtoSDone(CInPacket &iPacket);

protected:
	void OnMoveITCPurchaseItemLtoSFailed(CInPacket &iPacket);

protected:
	void OnSetZzimDone(CInPacket &iPacket);

protected:
	void OnSetZzimFailed(CInPacket &iPacket);

protected:
	void OnDeleteZzimDone(CInPacket &iPacket);

protected:
	void OnDeleteZzimFailed(CInPacket &iPacket);

protected:
	void OnLoadWishSaleListDone(CInPacket &iPacket);

protected:
	void OnLoadWishSaleListFailed(CInPacket &iPacket);

protected:
	void OnBuyWishDone(CInPacket &iPacket);

protected:
	void OnBuyWishFailed(CInPacket &iPacket);

protected:
	void OnCancelWishDone(CInPacket &iPacket);

protected:
	void OnCancelWishFailed(CInPacket &iPacket);

protected:
	void OnBuyItemDone(CInPacket &iPacket);

protected:
	void OnBuyItemFailed(CInPacket &iPacket);

protected:
	void OnBuyZzimItemDone(CInPacket &iPacket);

protected:
	void OnBuyZzimItemFailed(CInPacket &iPacket);

protected:
	void OnRegisterWishItemDone(CInPacket &iPacket);

protected:
	void OnRegisterWishItemFailed(CInPacket &iPacket);

protected:
	void OnNotifyCancelWishResult(CInPacket &iPacket);

protected:
	void OnSuccessBidInfoResult(CInPacket &iPacket);

protected:
	void OnBidAuctionFailed(CInPacket &iPacket);

protected:
	void SendTransferFieldPacket();

protected:
	void NoticeFailReason(long nReason);

protected:
	void LoadData(CInPacket &iPacket);

public:
	void SetSearchCondition(int32_t bSearch, long nSearchCategory, long nSearchSubCategory, long nSearchOption, ZXString<char> sSearchCondition);

	CLASS_RTTI_(CITC, CStage);

public:
	CITC &operator=(const CITC &arg0);

public:
	static CITC &_op_assign_95(CITC *pThis, const CITC &arg0);
};
STATIC_ASSERT_SIZE(CITC, 13448);



