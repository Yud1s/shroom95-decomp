// CashShop_ShopSvrRes.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CashShop/CashShop.hpp"
#include "CSWnd_Oneaday/CSWnd_Oneaday.hpp"
#include "CSWnd/CSWnd.hpp"
#include "CSWnd2/CSWnd2.hpp"
#include "SkillInfo/SkillInfo.hpp"
#include "UtilDlg/UtilDlg.hpp"
#include "Stat/Stat.hpp"
#include "Stage/Stage.hpp"
#include "DBBasic/DBBasic.hpp"
#include "Packet/Packet.hpp"

struct CS_CATEGORY {
// Nested
// Fields
	public:  long nCategory{};
	public:  long nCategorySub{};
	public:  ZXString<char> sName;
	public:  uint16_t nDiscountRate{};
	public:  long nStart{};
	public:  long nCount{};
	public:  long nNotAvailableCount{};
// Methods
	/*TODO public:    ~CS_CATEGORY();
		public: static void _dtor_0(CS_CATEGORY* pThis);
	public:    CS_CATEGORY(const CS_CATEGORY& arg0);
		public: static void _ctor_1(CS_CATEGORY* pThis, const CS_CATEGORY& arg0);
	public:    CS_CATEGORY();
		public: static void _ctor_2(CS_CATEGORY* pThis);
	public:   CS_CATEGORY& operator=(const CS_CATEGORY& arg0);
		public: static CS_CATEGORY& _op_assign_3(CS_CATEGORY* pThis, const CS_CATEGORY& arg0);*/
};
STATIC_ASSERT_SIZE(CS_CATEGORY, 28);
struct CS_STOCK {
// Nested
// Fields
	public:  long nSN{};
	public:  long nStockState{};
// Methods
};
STATIC_ASSERT_SIZE(CS_STOCK, 8);
struct CS_LIMITGOODS;
struct CS_ZEROGOODS {
// Nested
// Fields
	public:  long nStartSN{};
	public:  long nEndSN{};
	public:  long nGoodsCount{};
	public:  long nEventSN{};
	public:  long nExpireDays{};
	public:  unsigned long dwConditionFlag{};
	public:  long nDateStart{};
	public:  long nDateEnd{};
	public:  long nHourStart{};
	public:  long nHourEnd{};
	public:  std::array<int32_t, 7> abWeek{};
// Methods
};
class CUICashItemGachapon;
class CUICashGachapon;

// Level: 1 0xbcc6
class CCashShop;

class CCashShop : public CStage
{
	// Nested
public:
	struct SENDGIFT
	{
		// Nested
		// Fields
	public:
		ZXString<char> sSPW;

	public:
		long nCommSN{};

	public:
		ZXString<char> sText;
		// Methods
	public:
		~SENDGIFT();

	public:
		void _dtor_0();

	public:
		SENDGIFT(const CCashShop::SENDGIFT &arg0);

	public:
		void _ctor_1(const CCashShop::SENDGIFT &arg0);

	public:
		SENDGIFT();

	public:
		void _ctor_0();

	public:
		CCashShop::SENDGIFT &operator=(const CCashShop::SENDGIFT &arg0);

	public:
		static CCashShop::SENDGIFT &_op_assign_3(CCashShop::SENDGIFT *pThis, const CCashShop::SENDGIFT &arg0);
	};
	// Fields
public:
	int32_t m_bIsOneADay{};

public:
	int32_t m_bCashShopRequestSent{};

public:
	std::array<long, 2> _ZtlSecureTear_m_nNexonCash{};

public:
	uint32_t _ZtlSecureTear_m_nNexonCash_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_m_nMaplePoint{};

public:
	uint32_t _ZtlSecureTear_m_nMaplePoint_CS{};

public:
	std::array<long, 2> _ZtlSecureTear_m_nPrepaidNXCash{};

public:
	uint32_t _ZtlSecureTear_m_nPrepaidNXCash_CS{};

public:
	int32_t m_bCashShopAuthorized{};

public:
	ZArray<CS_CATEGORY> m_aCategory;

public:
	ZArray<CS_STOCK> m_aStock;

public:
	ZArray<CS_LIMITGOODS> m_aLimitGoods;

public:
	std::array<std::array<std::array<CS_BEST, 5>, 2>, 9> m_aBest;

public:
	ZArray<GW_CashItemInfo> m_aCashItemInfo;

public:
	long m_nTrunkCount{};

public:
	long m_nCharacterSlotCount{};

public:
	long m_nBuyCharacterCount{};

public:
	long m_nCharacterCount{};

public:
	ZXString<char> m_sNexonClubID;

public:
	ZXString<char> m_sNexonClubIDToShow;

public:
	std::array<long, 10> m_nWishList{};

public:
	long m_nWishBuyOrGift{};

public:
	int32_t m_bRemoveWish{};

public:
	ZArray<long> m_aAvatarBuy;

public:
	ZArray<long> m_aAvatarBuyDone;

public:
	long m_nAvatarBuyIdx{};

public:
	unsigned long m_dwAvatarPurchaseOption{};

public:
	int32_t m_bWearPackage{};

public:
	int32_t m_bMigrateFromWishItem{};

public:
	long m_nCommSN{};

public:
	ZXString<char> m_sGiveTo;

public:
	void *m_hSingleInstanceMtx{};

public:
	long m_nCurSortType{};

public:
	int32_t m_bEventOn{};

public:
	long m_nHighestCharacterLevelInThisAccount{};

public:
	ZArray<CS_ZEROGOODS> m_aZeroGoods;

protected:
	ZArray<ZXString<char>> m_aSendGifts;

protected:
	long m_nGiftsIdx{};

protected:
	int32_t m_bGifts{};

protected:
	long m_nSpentNXCash{};

protected:
	ZXString<char> m_sSentItem;

protected:
	ZArray<ZXString<char>> m_aSendGiftsDone;

protected:
	CCashShop::SENDGIFT m_sg;

public:
	ZArray<ZXString<char>> m_asWorldName;

public:
	CUICashItemGachapon *m_pUICashItemGachapon{};

public:
	CUICashGachapon *m_pUICashGachapon{};

protected:
	long m_nCurCategory{};

protected:
	long m_nCurCategorySub{};

protected:
	long m_nCurPage{};

protected:
	int32_t m_bUserPreviewControl{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayer;

protected:
	ZList<ZRef<CS_COMMODITY_EX>> m_lCommSearchResult;

protected:
	CCSWnd_Char m_wndChar;

protected:
	CCSWnd_Locker m_wndLocker;

protected:
	CCSWnd_Inventory m_wndInventory;

protected:
	CCSWnd_Tab m_wndTab;

protected:
	CCSWnd_List m_wndList;

protected:
	CCSWnd_Best m_wndBest;

protected:
	CCSWnd_Status m_wndStatus;

protected:
	CCSWnd_ItemSearch m_wndItemSearch;

protected:
	CCSWnd_OneADay m_wndOneADay;

protected:
	long m_nOneADayItemSN{};

protected:
	long m_nOneADayItemDate{};

protected:
	int32_t m_bRequestBuyOneADay{};

protected:
	ZArray<OneADayInfo> m_aPrevOneADayInfo;

protected:
	long m_nPurchaseRecord{};

protected:
	ZMap<long, int, long> m_mPurchaseRecord;
	// Methods
public:
	virtual ~CCashShop();

public:
	void _dtor_0();

public:
	CCashShop(const CCashShop &arg0);

public:
	void _ctor_1(const CCashShop &arg0);

public:
	CCashShop(CInPacket &iPacket);

public:
	void _ctor_0(CInPacket &iPacket);

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
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	void OnBuyAvatar();

public:
	void OnDefaultAvatar();

public:
	void OnTakeOff();

public:
	void EndChat();

public:
	void OnRebateLockerItem(long nReason);

public:
	void OnExItemSlot(long nReason);

public:
	void OnIncTrunkCount();

public:
	void OnIncCharacterSlotCount(long nReason);

public:
	void OnBuyCharacter(long nReason);

public:
	void OnEnableEquipSlotExt(long nReason);

public:
	void OnChangedCategory(int32_t nCategory);

public:
	void OnChangedCategorySub(int32_t nCategorySub);

public:
	void OnChangedSortType(int32_t nSortType);

public:
	void OnChangedPage(int32_t nPage);

public:
	void OnBuy(long nReason);

public:
	void OnGift(long nReason);

public:
	void OnGiftMateInfoResult(CInPacket &arg0);

public:
	void OnGiftPackage(long nReason);

public:
	void OnBuyPackage(long nReason);

public:
	void OnBuyCouple(long nReason);

public:
	void OnBuyFriendship(long nReason);

public:
	void OnBuyNormal(long nReason);

public:
	void OnBuySlotInc(long nReason);

public:
	void OnSetWish(long nReason);

public:
	void OnRemoveWish(long nReason);

public:
	void OnWear(long nItemID, long nCommSN, int32_t bPackage);

public:
	void SetPet(long nItemID, long nCommSN, int32_t bPackage);

public:
	void SetEmotion(long nReason);

public:
	void SetActiveEffectItem(long nItemID, long nCommSN);

public:
	void SetColorLens(long nItemID, long nCommSN);

public:
	void ShowBullet(long nReason);

public:
	void BlowWeather(long nReason);

public:
	void ShowMessageBox(long nItemID, long nCommSN);

public:
	void ShowPersonalShop(long nItemID, long nCommSN);

public:
	void ShowEntrustedShop(long nItemID, long nCommSN);

public:
	void ShowADBoard(long nItemID, long nCommSN);

public:
	void ProcessBuy(long nItemID, long nCommSN);

public:
	void OnStatusCharge();

public:
	void OnStatusCheck();

public:
	void OnStatusCoupon();

public:
	void OnStatusExit();

public:
	int32_t OnMoveCashItemLtoS(_LARGE_INTEGER liSN, long nTI, long nPOS);

public:
	int32_t OnMoveCashItemStoL(_LARGE_INTEGER liSN, long nTI);

public:
	void GoTo(long nCategory, long nCategorySub, long nNo);

public:
	long GetNexonCash();

public:
	long GetMaplePoint();

public:
	long GetPrepaidNXCash();

public:
	long GetCurCategory();

public:
	long GetCurCategorySub();

public:
	long GetCurPage();

public:
	int32_t IsSearchResult();

public:
	int32_t IsWishCategory();

public:
	int32_t IsHelpCategory();

public:
	int32_t IsOneADayCategory();

public:
	void GetCategoryIndex(long nCategory, long &nStart, long &nCount);

public:
	long GetCategorySubIndex(long nCategory, long nCategorySub);

public:
	long GetUsableCommodityIndexBySN(long &nSN);

public:
	long GetTrunkCount();

public:
	long GetCharacterSlotCount();

public:
	long GetBuyCharacterCount();

public:
	int32_t IsControlingUserPreview();

public:
	void SetUserPreviewControl(int32_t bControl);

public:
	void RestoreFocus();

public:
	int32_t TrySendQueryCashRequest();

public:
	void SendBuyAvatarPacket();

public:
	int32_t GetCashPurchaseRecord(long nCommoditySN);

public:
	void RequestCashPurchaseRecord(long nCommoditySN);

public:
	void GiftWishItem();

public:
	int32_t IsEventOn();

public:
	void ApplyWishListEvent();

public:
	void OnBuyNameChange(long nReason);

public:
	void SendCheckDuplicateIDPacket(ZXString<char> sCharName);

public:
	void SendCheckNameChangePossiblePacket(unsigned long dwCharID, ZXString<char> sSPW);

public:
	void SendBuyNameChangeItemPacket(long nCommSN, ZXString<char> sOldCharName, ZXString<char> sNewCharName);

public:
	void OnBuyTransferWorldItem(long nReason);

public:
	int32_t CheckTransferWorldPossible(ZXString<char> &sMsg);

public:
	void SendCheckTransferWorldPossiblePacket(unsigned long dwCharacterID, ZXString<char> sSPW);

public:
	void SendBuyTransferWorldItemPacket(long nCommSN, long nTargetWorldID);

public:
	void InvalidateLocker();

public:
	void InvalidateInventory();

public:
	void SendGiftsPacket();

public:
	int32_t OnCashGachaponCopy(long nItemID, long nNumber);

public:
	void SendChangeMaplePoint(_LARGE_INTEGER liSN, long nItemID);

public:
	long __fastcall _ZtlSecureGet_m_nNexonCash() const;

public:
	long __fastcall _ZtlSecurePut_m_nNexonCash(long arg0);

public:
	long __fastcall _ZtlSecureGet_m_nMaplePoint() const;

public:
	long __fastcall _ZtlSecurePut_m_nMaplePoint(long arg0);

public:
	long __fastcall _ZtlSecureGet_m_nPrepaidNXCash() const;

public:
	long __fastcall _ZtlSecurePut_m_nPrepaidNXCash(long arg0);

public:
	CS_STOCK &GetStockInfoFromCommSN(long arg0);

public:
	void SetSearchResult(ZList<ZRef<CS_COMMODITY_EX>> &lCommSearchResult);

public:
	ZList<ZRef<CS_COMMODITY_EX>> &GetSearchResult();

public:
	virtual void OnPacket(long nType, CInPacket &iPacket);

protected:
	void OnCashItemResLimitGoodsCountChanged(CInPacket &iPacket);

protected:
	void OnChargeParamResult(CInPacket &iPacket);

protected:
	void OnQueryCashResult(CInPacket &iPacket);

protected:
	void OnPurchaseExpChanged(CInPacket &iPacket);

protected:
	void OnCashItemResult(CInPacket &iPacket);

protected:
	void OnCashItemResLoadLockerDone(CInPacket &iPacket);

protected:
	void OnCashItemResLoadLockerFailed(CInPacket &iPacket);

protected:
	void OnCashItemResLoadGiftDone(CInPacket &iPacket);

protected:
	void OnCashItemResLoadGiftFailed(CInPacket &iPacket);

protected:
	void OnCashItemResLoadWishDone(CInPacket &iPacket);

protected:
	void OnCashItemResLoadWishFailed(CInPacket &iPacket);

protected:
	void OnCashItemResSetWishDone(CInPacket &iPacket);

protected:
	void OnCashItemResSetWishFailed(CInPacket &iPacket);

protected:
	void OnCashItemResBuyDone(CInPacket &iPacket);

protected:
	void OnCashItemResBuyFailed(CInPacket &iPacket);

protected:
	void OnCashItemResBuyPackageDone(CInPacket &iPacket);

protected:
	void OnCashItemResBuyPackageFailed(CInPacket &iPacket);

protected:
	void OnCashItemResGiftPackageDone(CInPacket &iPacket);

protected:
	void OnCashItemResGiftPackageFailed(CInPacket &iPacket);

protected:
	void OnCashItemResUseCouponDone(CInPacket &iPacket);

protected:
	void OnCashItemResGiftCouponDone(CInPacket &iPacket);

protected:
	void OnCashItemResUseCouponFailed(CInPacket &iPacket);

protected:
	void OnCashItemResGiftDone(CInPacket &iPacket);

protected:
	void OnCashItemResGiftFailed(CInPacket &iPacket);

protected:
	void OnCashItemResIncSlotCountDone(CInPacket &iPacket);

protected:
	void OnCashItemResIncSlotCountFailed(CInPacket &iPacket);

protected:
	void OnCashItemResIncTrunkCountDone(CInPacket &iPacket);

protected:
	void OnCashItemResIncTrunkCountFailed(CInPacket &iPacket);

protected:
	void OnCashItemResIncCharacterSlotCountDone(CInPacket &iPacket);

protected:
	void OnCashItemResIncCharacterSlotCountFailed(CInPacket &iPacket);

protected:
	void OnCashItemResIncBuyCharacterCountDone(CInPacket &iPacket);

protected:
	void OnCashItemResIncBuyCharacterCountFailed(CInPacket &iPacket);

protected:
	void OnCashItemResEnableEquipSlotExtDone(CInPacket &iPacket);

protected:
	void OnCashItemResEnableEquipSlotExtFailed(CInPacket &iPacket);

protected:
	void OnCashItemResMoveLtoSDone(CInPacket &iPacket);

protected:
	void OnCashItemResMoveLtoSFailed(CInPacket &iPacket);

protected:
	void OnCashItemResMoveStoLDone(CInPacket &iPacket);

protected:
	void OnCashItemResMoveStoLFailed(CInPacket &iPacket);

protected:
	void OnCashItemResDestroyDone(CInPacket &iPacket);

protected:
	void OnCashItemResDestroyFailed(CInPacket &iPacket);

protected:
	void OnCashItemResRebateDone(CInPacket &iPacket);

protected:
	void OnCashItemResRebateFailed(CInPacket &iPacket);

protected:
	void OnCashItemResCoupleDone(CInPacket &iPacket);

protected:
	void OnCashItemResCoupleFailed(CInPacket &iPacket);

protected:
	void OnCashItemResFriendShipDone(CInPacket &iPacket);

protected:
	void OnCashItemResFriendShipFailed(CInPacket &iPacket);

protected:
	void OnCashItemResFreeCashItemDone(CInPacket &iPacket);

protected:
	void OnCashItemResFreeCashItemFailed(CInPacket &arg0);

protected:
	void OnCashItemResBuyFreeCoupoonDone(CInPacket &arg0);

protected:
	void OnCashItemResBuyFreeCoupoonFailed(CInPacket &arg0);

protected:
	void OnCashItemResExpireDone(CInPacket &iPacket);

protected:
	void OnCashItemResBuyNormalDone(CInPacket &iPacket);

protected:
	void OnCashItemResBuyNormalFailed(CInPacket &iPacket);

protected:
	void OnCashItemResPurchaseRecord(CInPacket &iPacket);

protected:
	void OnCashItemResPurchaseRecordFailed(CInPacket &iPacket);

protected:
	void OnOneADay(CInPacket &iPacket);

protected:
	void InitOneADay();

protected:
	void SendTransferFieldPacket();

protected:
	int32_t IsUsableMasteryBookItem(long nItemID, const CharacterData &cd, const SKILLENTRY *&pMasteredSkill);

protected:
	int32_t IsUsableItem(long nItemID, ZXString<char> &sReq);

protected:
	int32_t IsUsableItemCheckFirst(long nItemID, ZXString<char> &sReq);

protected:
	int32_t IsUsableItemGift(long nItemID, ZXString<char> &sReq, ZXString<char> sGiveTo, const CharacterData &cd, const BasicStat &bs);

protected:
	int32_t IsBuyableCommodity(long nCommSN, ZXString<char> &sReq);

protected:
	void NoticeFailReason(long nReason);

protected:
	int32_t CheckAlreadyExist(long nItemID, int32_t bExceptLocker);

protected:
	long FindWishList(long nCommSN);

protected:
	int32_t DecodeStock(CInPacket &iPacket);

protected:
	int32_t UpdateStock(long nCommSN, long nStockFailReason);

protected:
	int32_t DecodeLimitGoods(CInPacket &iPacket);

protected:
	int32_t DecodeZeroGoods(CInPacket &iPacket);

protected:
	long IsZeroGoods(long nCommSN);

protected:
	int32_t ChangeLimitGoodsState(long nCommSN, long nStockFailReason);

protected:
	int32_t IsLimitGoodsRemain(long nCommSN);

protected:
	void OnCheckDuplicatedIDResult(CInPacket &iPacket);

protected:
	void OnCheckNameChangePossibleResult(CInPacket &iPacket);

protected:
	void OnCashItemNameChangeResBuyDone(CInPacket &iPacket);

protected:
	void OnCheckTransferWorldPossibleResult(CInPacket &iPacket);

protected:
	void OnCashItemResTransferWorldDone(CInPacket &iPacket);

protected:
	void OnCashItemResTransferWorldFailed(CInPacket &iPacket);

protected:
	void OnCashShopGachaponStampResult(CInPacket &iPacket);

public:
	void SetCashItemGachaponDlg(CUICashItemGachapon *arg0);

public:
	void ReSetCashItemGachaponDlg();

public:
	void OnCashItemGachaponResult(CInPacket &iPacket);

public:
	void SetCashGachaponDlg(CUICashGachapon *arg0);

public:
	void ReSetCashGachaponDlg();

public:
	void OnCashItemResCashGachaponOpenDone(CInPacket &iPacket);

public:
	void OnCashItemResCashGachaponOpenFailed(CInPacket &iPacket);

public:
	void OnCashItemResCashGachaponCopyDone(CInPacket &iPacket);

public:
	void OnCashItemResCashGachaponCopyFailed(CInPacket &iPacket);

public:
	void OnCashItemResChangeMaplePointDone(CInPacket &iPacket);

public:
	void OnCashItemResChangeMaplePointFailed(CInPacket &iPacket);

public:
	void OnNoticeFreeCashItem(CInPacket &iPacket);

protected:
	void LoadData(CInPacket &arg0);
	CLASS_RTTI_(CCashShop, CStage);

public:
	CCashShop &operator=(const CCashShop &arg0);

public:
	static CCashShop &_op_assign_198(CCashShop *pThis, const CCashShop &arg0);
};
STATIC_ASSERT_SIZE(CCashShop, 15216);
