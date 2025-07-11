// ITC.cpp
#include "ITC.hpp"

#include "ITCWnd4/ITCWnd4.hpp"

static ZRef<CITCBidAuctionDlg> FAKE_ZRef_CITCBidAuctionDlg;
static ZRef<CITCWndItemDlg> FAKE_ZRef_CITCWndItemDlg;

#include "ITC_regen.ipp"

 CITCWnd_List::~CITCWnd_List() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CITCWnd_List::_dtor_0() {
	return __sub_001746F0(this, nullptr);
}
 CITCWnd_List::CITCWnd_List(const CITCWnd_List& arg0) {
	_ctor_1( arg0);
}
void CITCWnd_List::_ctor_1( const CITCWnd_List& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CITCWnd_List::CITCWnd_List() {
	UNIMPLEMENTED; //_ctor_0();
}
void CITCWnd_List::_ctor_0() {
	return __sub_00174600(this, nullptr);
}
void CITCWnd_List::OnCreate(void* pData) {
	__sub_0018AAC0(this, nullptr, pData);
}
void CITCWnd_List::OnDestroy() {
	__sub_001746F0(this, nullptr);
}
int32_t CITCWnd_List::OnMouseMove(long rx, long ry) {
	return __sub_00187690(this, nullptr, rx, ry);
}
void CITCWnd_List::OnMouseEnter(int32_t bEnter) {
	__sub_001874C0(this, nullptr, bEnter);
}
void CITCWnd_List::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_001874E0(this, nullptr, nId, param1, param2);
}
void CITCWnd_List::OnButtonClicked(uint32_t nId) {
	__sub_001878C0(this, nullptr, nId);
}
void CITCWnd_List::Draw(const tagRECT* pRect) {
	__sub_00187BC0(this, nullptr, pRect);
}
int32_t CITCWnd_List::OnSetFocus(int32_t bFocus) {
	return __sub_001746C0(this, nullptr, bFocus);
}
void CITCWnd_List::ClearToolTip() {
	__sub_001746D0(this, nullptr);
}
void CITCWnd_List::SetCursorToPlate(long nPlateNo) {
	__sub_00189EF0(this, nullptr, nPlateNo);
}
tagRECT CITCWnd_List::GetPlateRect(long nPlate) {
	tagRECT ret;
	return *__sub_00187560(this, nullptr, &ret, nPlate);
}
void CITCWnd_List::ChangeCategorySub() {
	__sub_001746F0(this, nullptr);
}
void CITCWnd_List::ChangePage() {
	__sub_001746F0(this, nullptr);
}
void CITCWnd_List::AddPicturePlate(long arg0, long arg1, const wchar_t* arg2) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CITCWnd_List::ClearPicturePlate() {
	__sub_001746F0(this, nullptr);
}
int32_t CITCWnd_List::IsSameList() {
	return __sub_001875A0(this, nullptr);
}
void CITCWnd_List::OnGetNewList() {
	__sub_001746F0(this, nullptr);
}
void CITCWnd_List::OnSetCurPage(long nPlateNo) {
	__sub_00189EF0(this, nullptr, nPlateNo);
}
ZXString<char> CITCWnd_List::GetContractHistoryCode(long nProcessStatus) {
	ZXString<char> ret;
	return *__sub_001875D0(this, nullptr, &ret, nProcessStatus);
}
ZXString<char> CITCWnd_List::GetAuctionHistoryCode(long nProcessStatus) {
	ZXString<char> ret;
	return *__sub_00187640(this, nullptr, &ret, nProcessStatus);
}
void CITCWnd_List::SetPlateNo(long nPlateNo) {
	__sub_00189EF0(this, nullptr, nPlateNo);
}
CITCWnd_List& CITCWnd_List::operator=(const CITCWnd_List& arg0) {
	return _op_assign_24(this, arg0);
}
CITCWnd_List& CITCWnd_List::_op_assign_24(CITCWnd_List* pThis, const CITCWnd_List& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CITCWnd_List::PICTURE_PLATE::~PICTURE_PLATE() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CITCWnd_List::PICTURE_PLATE::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CITCWnd_List::PICTURE_PLATE::PICTURE_PLATE(const CITCWnd_List::PICTURE_PLATE& arg0) {
	_ctor_1( arg0);
}
void CITCWnd_List::PICTURE_PLATE::_ctor_1( const CITCWnd_List::PICTURE_PLATE& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CITCWnd_List::PICTURE_PLATE::PICTURE_PLATE() {
	UNIMPLEMENTED; //_ctor_0();
}
void CITCWnd_List::PICTURE_PLATE::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CITCWnd_List::PICTURE_PLATE& CITCWnd_List::PICTURE_PLATE::operator=(const CITCWnd_List::PICTURE_PLATE& arg0) {
	return _op_assign_3(this, arg0);
}
CITCWnd_List::PICTURE_PLATE& CITCWnd_List::PICTURE_PLATE::_op_assign_3(CITCWnd_List::PICTURE_PLATE* pThis, const CITCWnd_List::PICTURE_PLATE& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CITC::~CITC() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CITC::_dtor_0() {
	return __sub_00174850(this, nullptr);
}
 CITC::CITC(const CITC& arg0) {
	_ctor_1( arg0);
}
void CITC::_ctor_1( const CITC& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CITC::CITC(CInPacket& iPacket) {
	_ctor_0( iPacket);
}
void CITC::_ctor_0( CInPacket& iPacket) {
	return __sub_00174D00(this, nullptr, iPacket);
}
void CITC::Init(void* pParam) {
	__sub_00173EE0(this, nullptr, pParam);
}
void CITC::Close() {
	__sub_00174400(this, nullptr);
}
void CITC::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_00171DF0(this, nullptr, wParam, lParam);
}
void CITC::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_001749F0(this, nullptr, msg, wParam, rx, ry);
}
int32_t CITC::OnSetFocus(int32_t bFocus) {
	return __sub_00174A00(this, nullptr, bFocus);
}
int32_t CITC::IsNum(ZXString<char> arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CITC::IsNum(ZRef<CCtrlEdit> arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CITC::OnChangedCategory(int32_t nCategory) {
	__sub_001744A0(this, nullptr, nCategory);
}
void CITC::OnChangedCategorySub(int32_t nCategorySub, int32_t nSortType, int32_t nSortColumn) {
	__sub_001739A0(this, nullptr, nCategorySub, nSortType, nSortColumn);
}
void CITC::OnChangedPage(int32_t nPage) {
	__sub_00173AF0(this, nullptr, nPage);
}
void CITC::OnBuy(ZRef<ITCITEM>& ii) {
	__sub_00173270(this, nullptr, ii);
}
void CITC::OnSale(ZRef<ITCITEM>& pii) {
	__sub_00172CE0(this, nullptr, pii);
}
void CITC::OnSetZzim(ZRef<ITCITEM>& ii) {
	__sub_001733B0(this, nullptr, ii);
}
void CITC::OnBuyZzim(ZRef<ITCITEM>& ii) {
	__sub_00173450(this, nullptr, ii);
}
void CITC::OnDeleteZzim(ZRef<ITCITEM>& ii) {
	__sub_00173520(this, nullptr, ii);
}
void CITC::OnViewWish(ZRef<ITCITEM>& ii) {
	__sub_001735C0(this, nullptr, ii);
}
void CITC::OnBuyWish(ZRef<ITCITEM>& ii) {
	__sub_00173660(this, nullptr, ii);
}
void CITC::OnCancelWish(ZRef<ITCITEM>& ii) {
	__sub_00173700(this, nullptr, ii);
}
void CITC::OnBid(ZRef<ITCITEM>& ii) {
	__sub_00172C10(this, nullptr, ii);
}
void CITC::OnBuyAuctionImm(ZRef<ITCITEM>& ii) {
	__sub_00173310(this, nullptr, ii);
}
void CITC::OnStatusCharge() {
	__sub_00172A50(this, nullptr);
}
void CITC::OnStatusCheck() {
	__sub_00172E70(this, nullptr);
}
void CITC::OnStatusExit() {
	__sub_00172E80(this, nullptr);
}
_FILETIME CITC::FileTimeAddition(_FILETIME ftFirst, _FILETIME ftSecond, int32_t bSubtract) {
	return __sub_00171E00(this, nullptr, CreateNakedParam(ftFirst), CreateNakedParam(ftSecond), bSubtract);
}
_FILETIME CITC::GetRelTime() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
_SYSTEMTIME CITC::GetCorrectTime() {
	return __sub_00171E50(this, nullptr);
}
long CITC::GetNexonCash() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CITC::GetMaplePoint() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CITC::GetCurCategory() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CITC::GetCurCategorySub() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CITC::GetCurPage() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CITC::IsSaleCategory() {
	return __sub_00172AD0(this, nullptr);
}
int32_t CITC::IsPurchaseCategory() {
	return __sub_00172AD0(this, nullptr);
}
int32_t CITC::IsAuctionCategory() {
	return __sub_00172AD0(this, nullptr);
}
int32_t CITC::IsMyPageCategory() {
	return __sub_00172AD0(this, nullptr);
}
int32_t CITC::IsHelpCategory() {
	return __sub_00172AD0(this, nullptr);
}
int32_t CITC::OnRegisterWishEntry(long nItemID, long nWishPrice, long nWishCount, unsigned char bWishRegistrationFeeOption, unsigned char bWishDuration, ZXString<char> sWishDesc) {
	return __sub_00173C10(this, nullptr, nItemID, nWishPrice, nWishCount, bWishRegistrationFeeOption, bWishDuration, CreateNakedParam(sWishDesc));
}
int32_t CITC::OnRegisterSaleEntry(long nRegType, long nTI, long nSlotNo, GW_ItemSlotBase* pItem) {
	return __sub_00172E90(this, nullptr, nRegType, nTI, nSlotNo, pItem);
}
void CITC::OnSaleCurrentItem(long nItemTI, long nSlotPosition, GW_ItemSlotBase* pItem, long nITCSN) {
	__sub_001731A0(this, nullptr, nItemTI, nSlotPosition, pItem, nITCSN);
}
void CITC::OnCancelSaleItem(ZRef<ITCITEM>& ii) {
	__sub_001737A0(this, nullptr, ii);
}
void CITC::OnMoveITCPurchaseItemLtoS(ZRef<ITCITEM>& ii, long nTI, long nPos) {
	__sub_00173880(this, nullptr, ii, nTI, nPos);
}
int32_t CITC::TrySendQueryCashRequest() {
	return __sub_00172AD0(this, nullptr);
}
long __fastcall CITC::_ZtlSecureGet_m_nNexonCash() const {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long __fastcall CITC::_ZtlSecurePut_m_nNexonCash(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long __fastcall CITC::_ZtlSecureGet_m_nMaplePoint() const {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long __fastcall CITC::_ZtlSecurePut_m_nMaplePoint(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CITC::OnPacket(long nType, CInPacket& iPacket) {
	__sub_00177470(this, nullptr, nType, iPacket);
}
void CITC::OnChargeParamResult(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnQueryCashResult(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnNormalItemResult(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnNormalItemResRegisterSaleEntryFailed(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnNormalItemResRegisterSaleEntryDone(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnSaleCurrentItemToWishDone(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnSaleCurrentItemToWishFailed(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnGetITCListFailed(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnGetITCListDone(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnGetSearchITCListFailed(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnGetSearchITCListDone(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnGetUserPurchaseItemDone(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnGetUserPurchaseItemFailed(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnGetUserSaleItemDone(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnGetUserSaleItemFailed(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnCancelSaleItemDone(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnCancelSaleItemFailed(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnMoveITCPurchaseItemLtoSDone(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnMoveITCPurchaseItemLtoSFailed(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnSetZzimDone(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnSetZzimFailed(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnDeleteZzimDone(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnDeleteZzimFailed(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnLoadWishSaleListDone(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnLoadWishSaleListFailed(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnBuyWishDone(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnBuyWishFailed(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnCancelWishDone(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnCancelWishFailed(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnBuyItemDone(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnBuyItemFailed(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnBuyZzimItemDone(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnBuyZzimItemFailed(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnRegisterWishItemDone(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnRegisterWishItemFailed(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnNotifyCancelWishResult(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnSuccessBidInfoResult(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::OnBidAuctionFailed(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::SendTransferFieldPacket() {
	__sub_00172B70(this, nullptr);
}
void CITC::NoticeFailReason(long nReason) {
	__sub_00175DD0(this, nullptr, nReason);
}
void CITC::LoadData(CInPacket& iPacket) {
	__sub_00174A60(this, nullptr, iPacket);
}
void CITC::SetSearchCondition(int32_t bSearch, long nSearchCategory, long nSearchSubCategory, long nSearchOption, ZXString<char> sSearchCondition) {
	__sub_00173DE0(this, nullptr, bSearch, nSearchCategory, nSearchSubCategory, nSearchOption, CreateNakedParam(sSearchCondition));
}
CITC& CITC::operator=(const CITC& arg0) {
	return _op_assign_95(this, arg0);
}
CITC& CITC::_op_assign_95(CITC* pThis, const CITC& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CITCWnd_Status::~CITCWnd_Status() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CITCWnd_Status::_dtor_0() {
	return __sub_00172970(this, nullptr);
}
 CITCWnd_Status::CITCWnd_Status(const CITCWnd_Status& arg0) {
	_ctor_1( arg0);
}
void CITCWnd_Status::_ctor_1( const CITCWnd_Status& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CITCWnd_Status::CITCWnd_Status() {
	UNIMPLEMENTED; //_ctor_0();
}
void CITCWnd_Status::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CITCWnd_Status::OnCreate(void* pData) {
	__sub_00185010(this, nullptr, pData);
}
void CITCWnd_Status::OnButtonClicked(uint32_t nId) {
	__sub_00184410(this, nullptr, nId);
}
void CITCWnd_Status::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_00184450(this, nullptr, msg, wParam, rx, ry);
}
void CITCWnd_Status::Draw(const tagRECT* pRect) {
	__sub_00185380(this, nullptr, pRect);
}
int32_t CITCWnd_Status::OnSetFocus(int32_t bFocus) {
	return __sub_00172950(this, nullptr, bFocus);
}
CITCWnd_Status& CITCWnd_Status::operator=(const CITCWnd_Status& arg0) {
	return _op_assign_8(this, arg0);
}
CITCWnd_Status& CITCWnd_Status::_op_assign_8(CITCWnd_Status* pThis, const CITCWnd_Status& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

