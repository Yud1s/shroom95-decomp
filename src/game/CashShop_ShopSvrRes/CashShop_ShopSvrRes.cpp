// CashShop_ShopSvrRes.cpp
#include "CashShop_ShopSvrRes.hpp"
#include "UIDialogEtc/UIDialogEtc.hpp"




static ZRef<CUITransferWorldLicenseNotice> FAKE_ZRef_CUITransferWorldLicenseNotice{};
static ZRef<CS_COMMODITY> FAKE_ZRef_CS_COMMODITY{};
static ZArray<_ULARGE_INTEGER> FAKE_ZArray__ULARGE_INTEGER{};
static ZArray<GW_GiftList> FAKE_ZArray_GW_GiftList{};
static ZRef<CUIChangingLicenseNotice> FAKE_ZRef_CUIChangingLicenseNotice{};

#include "CashShop_ShopSvrRes_regen.ipp"

CCashShop::~CCashShop()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CCashShop::_dtor_0()
{
	return __sub_00094A20(this, nullptr);
}
CCashShop::CCashShop(const CCashShop &arg0)
{
	_ctor_1( arg0);
}
void CCashShop::_ctor_1( const CCashShop &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CCashShop::CCashShop(CInPacket &iPacket)
{
	_ctor_0( iPacket);
}
void CCashShop::_ctor_0( CInPacket &iPacket)
{
	return __sub_000938B0(this, nullptr, iPacket);
}
void CCashShop::Init(void *pParam)
{
	__sub_00084920(this, nullptr, pParam);
}
void CCashShop::Close()
{
	__sub_00094A20(this, nullptr);
}
void CCashShop::OnKey(uint32_t wParam, int32_t lParam)
{
	__sub_0007F7C0(this, nullptr, wParam, lParam);
}
void CCashShop::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
	__sub_00092E80(this, nullptr, msg, wParam, rx, ry);
}
int32_t CCashShop::OnSetFocus(int32_t bFocus)
{
	return __sub_00092E00(this, nullptr, bFocus);
}
int32_t CCashShop::OnMouseMove(long rx, long ry)
{
	return __sub_00092E10(this, nullptr, rx, ry);
}
void CCashShop::OnBuyAvatar()
{
	__sub_00094A20(this, nullptr);
}
void CCashShop::OnDefaultAvatar()
{
	__sub_00094A20(this, nullptr);
}
void CCashShop::OnTakeOff()
{
	__sub_00094A20(this, nullptr);
}
void CCashShop::EndChat()
{
	__sub_00094A20(this, nullptr);
}
void CCashShop::OnRebateLockerItem(long nReason)
{
	__sub_00095BC0(this, nullptr, nReason);
}
void CCashShop::OnExItemSlot(long nReason)
{
	__sub_00095BC0(this, nullptr, nReason);
}
void CCashShop::OnIncTrunkCount()
{
	__sub_00094A20(this, nullptr);
}
void CCashShop::OnIncCharacterSlotCount(long nReason)
{
	__sub_00095BC0(this, nullptr, nReason);
}
void CCashShop::OnBuyCharacter(long nReason)
{
	__sub_00095BC0(this, nullptr, nReason);
}
void CCashShop::OnEnableEquipSlotExt(long nReason)
{
	__sub_00095BC0(this, nullptr, nReason);
}
void CCashShop::OnChangedCategory(int32_t nCategory)
{
	__sub_0007E560(this, nullptr, nCategory);
}
void CCashShop::OnChangedCategorySub(int32_t nCategorySub)
{
	__sub_0007DBF0(this, nullptr, nCategorySub);
}
void CCashShop::OnChangedSortType(int32_t nSortType)
{
	__sub_00081810(this, nullptr, nSortType);
}
void CCashShop::OnChangedPage(int32_t nPage)
{
	__sub_0007D310(this, nullptr, nPage);
}
void CCashShop::OnBuy(long nReason)
{
	__sub_00095BC0(this, nullptr, nReason);
}
void CCashShop::OnGift(long nReason)
{
	__sub_00095BC0(this, nullptr, nReason);
}
void CCashShop::OnGiftMateInfoResult(CInPacket &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCashShop::OnGiftPackage(long nReason)
{
	__sub_00095BC0(this, nullptr, nReason);
}
void CCashShop::OnBuyPackage(long nReason)
{
	__sub_00095BC0(this, nullptr, nReason);
}
void CCashShop::OnBuyCouple(long nReason)
{
	__sub_00095BC0(this, nullptr, nReason);
}
void CCashShop::OnBuyFriendship(long nReason)
{
	__sub_00095BC0(this, nullptr, nReason);
}
void CCashShop::OnBuyNormal(long nReason)
{
	__sub_00095BC0(this, nullptr, nReason);
}
void CCashShop::OnBuySlotInc(long nReason)
{
	__sub_00095BC0(this, nullptr, nReason);
}
void CCashShop::OnSetWish(long nReason)
{
	__sub_00095BC0(this, nullptr, nReason);
}
void CCashShop::OnRemoveWish(long nReason)
{
	__sub_00095BC0(this, nullptr, nReason);
}
void CCashShop::OnWear(long nItemID, long nCommSN, int32_t bPackage)
{
	__sub_0007D330(this, nullptr, nItemID, nCommSN, bPackage);
}
void CCashShop::SetPet(long nItemID, long nCommSN, int32_t bPackage)
{
	__sub_0007D340(this, nullptr, nItemID, nCommSN, bPackage);
}
void CCashShop::SetEmotion(long nReason)
{
	__sub_00095BC0(this, nullptr, nReason);
}
void CCashShop::SetActiveEffectItem(long nItemID, long nCommSN)
{
	__sub_0007D370(this, nullptr, nItemID, nCommSN);
}
void CCashShop::SetColorLens(long nItemID, long nCommSN)
{
	__sub_0007D360(this, nullptr, nItemID, nCommSN);
}
void CCashShop::ShowBullet(long nReason)
{
	__sub_00095BC0(this, nullptr, nReason);
}
void CCashShop::BlowWeather(long nReason)
{
	__sub_00095BC0(this, nullptr, nReason);
}
void CCashShop::ShowMessageBox(long nItemID, long nCommSN)
{
	__sub_0007D3A0(this, nullptr, nItemID, nCommSN);
}
void CCashShop::ShowPersonalShop(long nItemID, long nCommSN)
{
	__sub_0007D3B0(this, nullptr, nItemID, nCommSN);
}
void CCashShop::ShowEntrustedShop(long nItemID, long nCommSN)
{
	__sub_0007D3C0(this, nullptr, nItemID, nCommSN);
}
void CCashShop::ShowADBoard(long nItemID, long nCommSN)
{
	__sub_0007D3D0(this, nullptr, nItemID, nCommSN);
}
void CCashShop::ProcessBuy(long nItemID, long nCommSN)
{
	__sub_000936B0(this, nullptr, nItemID, nCommSN);
}
void CCashShop::OnStatusCharge()
{
	__sub_00094A20(this, nullptr);
}
void CCashShop::OnStatusCheck()
{
	__sub_00094A20(this, nullptr);
}
void CCashShop::OnStatusCoupon()
{
	__sub_00094A20(this, nullptr);
}
void CCashShop::OnStatusExit()
{
	__sub_00094A20(this, nullptr);
}
int32_t CCashShop::OnMoveCashItemLtoS(_LARGE_INTEGER liSN, long nTI, long nPOS)
{
	return __sub_000828E0(this, nullptr, liSN, nTI, nPOS);
}
int32_t CCashShop::OnMoveCashItemStoL(_LARGE_INTEGER liSN, long nTI)
{
	return __sub_00082B50(this, nullptr, liSN, nTI);
}
void CCashShop::GoTo(long nCategory, long nCategorySub, long nNo)
{
	__sub_0007E6F0(this, nullptr, nCategory, nCategorySub, nNo);
}
long CCashShop::GetNexonCash()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CCashShop::GetMaplePoint()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CCashShop::GetPrepaidNXCash()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CCashShop::GetCurCategory()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CCashShop::GetCurCategorySub()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CCashShop::GetCurPage()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CCashShop::IsSearchResult()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CCashShop::IsWishCategory()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CCashShop::IsHelpCategory()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CCashShop::IsOneADayCategory()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCashShop::GetCategoryIndex(long nCategory, long &nStart, long &nCount)
{
	__sub_0007E590(this, nullptr, nCategory, nStart, nCount);
}
long CCashShop::GetCategorySubIndex(long nCategory, long nCategorySub)
{
	return __sub_0007E5E0(this, nullptr, nCategory, nCategorySub);
}
long CCashShop::GetUsableCommodityIndexBySN(long &nSN)
{
	return __sub_00082520(this, nullptr, nSN);
}
long CCashShop::GetTrunkCount()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CCashShop::GetCharacterSlotCount()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CCashShop::GetBuyCharacterCount()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CCashShop::IsControlingUserPreview()
{
	return __sub_0007D400(this, nullptr);
}
void CCashShop::SetUserPreviewControl(int32_t bControl)
{
	__sub_0007E8E0(this, nullptr, bControl);
}
void CCashShop::RestoreFocus()
{
	__sub_00094A20(this, nullptr);
}
int32_t CCashShop::TrySendQueryCashRequest()
{
	return __sub_00081BC0(this, nullptr);
}
void CCashShop::SendBuyAvatarPacket()
{
	__sub_00094A20(this, nullptr);
}
int32_t CCashShop::GetCashPurchaseRecord(long nCommoditySN)
{
	return __sub_00082450(this, nullptr, nCommoditySN);
}
void CCashShop::RequestCashPurchaseRecord(long nCommoditySN)
{
	__sub_000823C0(this, nullptr, nCommoditySN);
}
void CCashShop::GiftWishItem()
{
	__sub_00094A20(this, nullptr);
}
int32_t CCashShop::IsEventOn()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCashShop::ApplyWishListEvent()
{
	__sub_00094A20(this, nullptr);
}
void CCashShop::OnBuyNameChange(long nReason)
{
	__sub_00095BC0(this, nullptr, nReason);
}
void CCashShop::SendCheckDuplicateIDPacket(ZXString<char> sCharName)
{
	__sub_00088070(this, nullptr, CreateNakedParam(sCharName));
}
void CCashShop::SendCheckNameChangePossiblePacket(unsigned long dwCharID, ZXString<char> sSPW)
{
	__sub_00088190(this, nullptr, dwCharID, CreateNakedParam(sSPW));
}
void CCashShop::SendBuyNameChangeItemPacket(long nCommSN, ZXString<char> sOldCharName, ZXString<char> sNewCharName)
{
	__sub_00088250(this, nullptr, nCommSN, CreateNakedParam(sOldCharName), CreateNakedParam(sNewCharName));
}
void CCashShop::OnBuyTransferWorldItem(long nReason)
{
	__sub_00095BC0(this, nullptr, nReason);
}
int32_t CCashShop::CheckTransferWorldPossible(ZXString<char> &sMsg)
{
	return __sub_00088360(this, nullptr, sMsg);
}
void CCashShop::SendCheckTransferWorldPossiblePacket(unsigned long dwCharacterID, ZXString<char> sSPW)
{
	__sub_000884C0(this, nullptr, dwCharacterID, CreateNakedParam(sSPW));
}
void CCashShop::SendBuyTransferWorldItemPacket(long nCommSN, long nTargetWorldID)
{
	__sub_00082F30(this, nullptr, nCommSN, nTargetWorldID);
}
void CCashShop::InvalidateLocker()
{
	__sub_00094A20(this, nullptr);
}
void CCashShop::InvalidateInventory()
{
	__sub_00094A20(this, nullptr);
}
void CCashShop::SendGiftsPacket()
{
	__sub_00094A20(this, nullptr);
}
int32_t CCashShop::OnCashGachaponCopy(long nItemID, long nNumber)
{
	return __sub_00092690(this, nullptr, nItemID, nNumber);
}
void CCashShop::SendChangeMaplePoint(_LARGE_INTEGER liSN, long nItemID)
{
	__sub_00088580(this, nullptr, liSN, nItemID);
}

_ZTL_SEC_GETSETI(long, CCashShop, m_nNexonCash)
_ZTL_SEC_GETSETI(long, CCashShop, m_nMaplePoint)
_ZTL_SEC_GETSETI(long, CCashShop, m_nPrepaidNXCash)

CS_STOCK &CCashShop::GetStockInfoFromCommSN(long arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCashShop::SetSearchResult(ZList<ZRef<CS_COMMODITY_EX>> &lCommSearchResult)
{
	__sub_00093C00(this, nullptr, lCommSearchResult);
}
ZList<ZRef<CS_COMMODITY_EX>> &CCashShop::GetSearchResult()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCashShop::OnPacket(long nType, CInPacket &iPacket)
{
	__sub_000997E0(this, nullptr, nType, iPacket);
}
void CCashShop::OnCashItemResLimitGoodsCountChanged(CInPacket &iPacket)
{
	__sub_00093F30(this, nullptr, iPacket);
}
void CCashShop::OnChargeParamResult(CInPacket &iPacket)
{
	__sub_00096320(this, nullptr, iPacket);
}
void CCashShop::OnQueryCashResult(CInPacket &iPacket)
{
	__sub_00096400(this, nullptr, iPacket);
}
void CCashShop::OnPurchaseExpChanged(CInPacket &iPacket)
{
	__sub_00093F10(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResult(CInPacket &iPacket)
{
	__sub_00099370(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResLoadLockerDone(CInPacket &iPacket)
{
	__sub_00094CB0(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResLoadLockerFailed(CInPacket &iPacket)
{
	__sub_000964F0(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResLoadGiftDone(CInPacket &iPacket)
{
	__sub_00096520(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResLoadGiftFailed(CInPacket &iPacket)
{
	__sub_00096960(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResLoadWishDone(CInPacket &iPacket)
{
	__sub_00094020(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResLoadWishFailed(CInPacket &iPacket)
{
	__sub_00096990(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResSetWishDone(CInPacket &iPacket)
{
	__sub_00094D60(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResSetWishFailed(CInPacket &iPacket)
{
	__sub_000969C0(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResBuyDone(CInPacket &iPacket)
{
	__sub_00094DD0(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResBuyFailed(CInPacket &iPacket)
{
	__sub_000969F0(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResBuyPackageDone(CInPacket &iPacket)
{
	__sub_00096B60(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResBuyPackageFailed(CInPacket &iPacket)
{
	__sub_00096D40(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResGiftPackageDone(CInPacket &iPacket)
{
	__sub_00096DC0(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResGiftPackageFailed(CInPacket &iPacket)
{
	__sub_00096F20(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResUseCouponDone(CInPacket &iPacket)
{
	__sub_00098670(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResGiftCouponDone(CInPacket &iPacket)
{
	__sub_00098E10(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResUseCouponFailed(CInPacket &iPacket)
{
	__sub_00096F90(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResGiftDone(CInPacket &iPacket)
{
	__sub_00097050(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResGiftFailed(CInPacket &iPacket)
{
	__sub_00097210(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResIncSlotCountDone(CInPacket &iPacket)
{
	__sub_00097270(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResIncSlotCountFailed(CInPacket &iPacket)
{
	__sub_00097390(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResIncTrunkCountDone(CInPacket &iPacket)
{
	__sub_00094ED0(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResIncTrunkCountFailed(CInPacket &iPacket)
{
	__sub_000973D0(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResIncCharacterSlotCountDone(CInPacket &iPacket)
{
	__sub_00094F70(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResIncCharacterSlotCountFailed(CInPacket &iPacket)
{
	__sub_00097410(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResIncBuyCharacterCountDone(CInPacket &iPacket)
{
	__sub_00095000(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResIncBuyCharacterCountFailed(CInPacket &iPacket)
{
	__sub_00097450(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResEnableEquipSlotExtDone(CInPacket &iPacket)
{
	__sub_00097490(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResEnableEquipSlotExtFailed(CInPacket &iPacket)
{
	__sub_000976F0(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResMoveLtoSDone(CInPacket &iPacket)
{
	__sub_00095050(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResMoveLtoSFailed(CInPacket &iPacket)
{
	__sub_00097730(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResMoveStoLDone(CInPacket &iPacket)
{
	__sub_000948D0(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResMoveStoLFailed(CInPacket &iPacket)
{
	__sub_00097920(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResDestroyDone(CInPacket &iPacket)
{
	__sub_00095250(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResDestroyFailed(CInPacket &iPacket)
{
	__sub_00097950(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResRebateDone(CInPacket &iPacket)
{
	__sub_00097980(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResRebateFailed(CInPacket &iPacket)
{
	__sub_00097AD0(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResCoupleDone(CInPacket &iPacket)
{
	__sub_00097B70(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResCoupleFailed(CInPacket &iPacket)
{
	__sub_00097D20(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResFriendShipDone(CInPacket &iPacket)
{
	__sub_00097D90(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResFriendShipFailed(CInPacket &iPacket)
{
	__sub_00097F40(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResFreeCashItemDone(CInPacket &iPacket)
{
	__sub_00094880(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResFreeCashItemFailed(CInPacket &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCashShop::OnCashItemResBuyFreeCoupoonDone(CInPacket &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCashShop::OnCashItemResBuyFreeCoupoonFailed(CInPacket &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCashShop::OnCashItemResExpireDone(CInPacket &iPacket)
{
	__sub_00097760(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResBuyNormalDone(CInPacket &iPacket)
{
	__sub_00095310(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResBuyNormalFailed(CInPacket &iPacket)
{
	__sub_00097B00(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResPurchaseRecord(CInPacket &iPacket)
{
	__sub_00095B50(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResPurchaseRecordFailed(CInPacket &iPacket)
{
	__sub_00094070(this, nullptr, iPacket);
}
void CCashShop::OnOneADay(CInPacket &iPacket)
{
	__sub_00095950(this, nullptr, iPacket);
}
void CCashShop::InitOneADay()
{
	__sub_00094A20(this, nullptr);
}
void CCashShop::SendTransferFieldPacket()
{
	__sub_00094A20(this, nullptr);
}
int32_t CCashShop::IsUsableMasteryBookItem(long nItemID, const CharacterData &cd, const SKILLENTRY *&pMasteredSkill)
{
	return __sub_00085B90(this, nullptr, nItemID, cd, pMasteredSkill);
}
int32_t CCashShop::IsUsableItem(long nItemID, ZXString<char> &sReq)
{
	return __sub_00085E80(this, nullptr, nItemID, sReq);
}
int32_t CCashShop::IsUsableItemCheckFirst(long nItemID, ZXString<char> &sReq)
{
	return __sub_00086820(this, nullptr, nItemID, sReq);
}
int32_t CCashShop::IsUsableItemGift(long nItemID, ZXString<char> &sReq, ZXString<char> sGiveTo, const CharacterData &cd, const BasicStat &bs)
{
	return __sub_00086B20(this, nullptr, nItemID, sReq, CreateNakedParam(sGiveTo), cd, bs);
}
int32_t CCashShop::IsBuyableCommodity(long nCommSN, ZXString<char> &sReq)
{
	return __sub_000872F0(this, nullptr, nCommSN, sReq);
}
void CCashShop::NoticeFailReason(long nReason)
{
	__sub_00095BC0(this, nullptr, nReason);
}
int32_t CCashShop::CheckAlreadyExist(long nItemID, int32_t bExceptLocker)
{
	return __sub_0007E750(this, nullptr, nItemID, bExceptLocker);
}
long CCashShop::FindWishList(long nCommSN)
{
	return __sub_00082CD0(this, nullptr, nCommSN);
}
int32_t CCashShop::DecodeStock(CInPacket &iPacket)
{
	return __sub_00082DA0(this, nullptr, iPacket);
}
int32_t CCashShop::UpdateStock(long nCommSN, long nStockFailReason)
{
	return __sub_0007E7A0(this, nullptr, nCommSN, nStockFailReason);
}
int32_t CCashShop::DecodeLimitGoods(CInPacket &iPacket)
{
	return __sub_00082DF0(this, nullptr, iPacket);
}
int32_t CCashShop::DecodeZeroGoods(CInPacket &iPacket)
{
	return __sub_00082E40(this, nullptr, iPacket);
}
long CCashShop::IsZeroGoods(long nCommSN)
{
	return __sub_0007E920(this, nullptr, nCommSN);
}
int32_t CCashShop::ChangeLimitGoodsState(long nCommSN, long nStockFailReason)
{
	return __sub_0007E820(this, nullptr, nCommSN, nStockFailReason);
}
int32_t CCashShop::IsLimitGoodsRemain(long nCommSN)
{
	return __sub_0007E620(this, nullptr, nCommSN);
}
void CCashShop::OnCheckDuplicatedIDResult(CInPacket &iPacket)
{
	__sub_00097FB0(this, nullptr, iPacket);
}
void CCashShop::OnCheckNameChangePossibleResult(CInPacket &iPacket)
{
	__sub_00095470(this, nullptr, iPacket);
}
void CCashShop::OnCashItemNameChangeResBuyDone(CInPacket &iPacket)
{
	__sub_00095600(this, nullptr, iPacket);
}
void CCashShop::OnCheckTransferWorldPossibleResult(CInPacket &iPacket)
{
	__sub_000980B0(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResTransferWorldDone(CInPacket &iPacket)
{
	__sub_00095710(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResTransferWorldFailed(CInPacket &iPacket)
{
	__sub_00098370(this, nullptr, iPacket);
}
void CCashShop::OnCashShopGachaponStampResult(CInPacket &iPacket)
{
	__sub_000983A0(this, nullptr, iPacket);
}
void CCashShop::SetCashItemGachaponDlg(CUICashItemGachapon *arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCashShop::ReSetCashItemGachaponDlg()
{
	__sub_00094A20(this, nullptr);
}
void CCashShop::OnCashItemGachaponResult(CInPacket &iPacket)
{
	__sub_00095820(this, nullptr, iPacket);
}
void CCashShop::SetCashGachaponDlg(CUICashGachapon *arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCashShop::ReSetCashGachaponDlg()
{
	__sub_00094A20(this, nullptr);
}
void CCashShop::OnCashItemResCashGachaponOpenDone(CInPacket &iPacket)
{
	__sub_00094AC0(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResCashGachaponOpenFailed(CInPacket &iPacket)
{
	__sub_000962B0(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResCashGachaponCopyDone(CInPacket &iPacket)
{
	__sub_00094B90(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResCashGachaponCopyFailed(CInPacket &iPacket)
{
	__sub_000962F0(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResChangeMaplePointDone(CInPacket &iPacket)
{
	__sub_00098520(this, nullptr, iPacket);
}
void CCashShop::OnCashItemResChangeMaplePointFailed(CInPacket &iPacket)
{
	__sub_00095910(this, nullptr, iPacket);
}
void CCashShop::OnNoticeFreeCashItem(CInPacket &iPacket)
{
	__sub_000959C0(this, nullptr, iPacket);
}
void CCashShop::LoadData(CInPacket &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CCashShop &CCashShop::operator=(const CCashShop &arg0)
{
	return _op_assign_198(this, arg0);
}
CCashShop &CCashShop::_op_assign_198(CCashShop *pThis, const CCashShop &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CCashShop::SENDGIFT::~SENDGIFT()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CCashShop::SENDGIFT::_dtor_0()
{
	return __sub_00082350(this, nullptr);
}
CCashShop::SENDGIFT::SENDGIFT(const CCashShop::SENDGIFT &arg0)
{
	_ctor_1( arg0);
}
void CCashShop::SENDGIFT::_ctor_1( const CCashShop::SENDGIFT &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CCashShop::SENDGIFT::SENDGIFT()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CCashShop::SENDGIFT::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CCashShop::SENDGIFT &CCashShop::SENDGIFT::operator=(const CCashShop::SENDGIFT &arg0)
{
	return _op_assign_3(this, arg0);
}
CCashShop::SENDGIFT &CCashShop::SENDGIFT::_op_assign_3(CCashShop::SENDGIFT *pThis, const CCashShop::SENDGIFT &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
