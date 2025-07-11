// ITCWnd4.cpp
#include "ITCWnd4.hpp"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};
#include "ITCWnd4_regen.ipp"

 CITCWndItemDlg::~CITCWndItemDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CITCWndItemDlg::_dtor_0() {
	return __sub_0018B620(this, nullptr);
}
 CITCWndItemDlg::CITCWndItemDlg(const CITCWndItemDlg& arg0) {
	_ctor_1( arg0);
}
void CITCWndItemDlg::_ctor_1( const CITCWndItemDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CITCWndItemDlg::CITCWndItemDlg(void* pData, ZRef<ITCITEM>& pii) {
	_ctor_0( pData, pii);
}
void CITCWndItemDlg::_ctor_0( void* pData, ZRef<ITCITEM>& pii) {
	return __sub_0018BB00(this, nullptr, pData, pii);
}
void CITCWndItemDlg::OnCreate(void* arg0) {
	__sub_0018C220(this, nullptr, arg0);
}
void CITCWndItemDlg::OnDestroy() {
	__sub_0018B770(this, nullptr);
}
void CITCWndItemDlg::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_0018BC10(this, nullptr, nId, param1, param2);
}
void CITCWndItemDlg::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_0018BE80(this, nullptr, msg, wParam, rx, ry);
}
int32_t CITCWndItemDlg::OnMouseMove(long rx, long ry) {
	return __sub_0018C0F0(this, nullptr, rx, ry);
}
void CITCWndItemDlg::OnButtonClicked(uint32_t nId) {
	__sub_0018B550(this, nullptr, nId);
}
void CITCWndItemDlg::Draw(const tagRECT* pRect) {
	__sub_0018CFD0(this, nullptr, pRect);
}
void CITCWndItemDlg::ClearToolTip() {
	__sub_0018B750(this, nullptr);
}
void CITCWndItemDlg::ResetInfo() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CITCWndItemDlg::ChangeTab(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CITCWndItemDlg::GetSlotPositionFromPoint(long rx, long ry) {
	return __sub_0018BCA0(this, nullptr, rx, ry);
}
long CITCWndItemDlg::GetItemTypeIndex() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CITCWndItemDlg::SetSelectedNo(long nPos) {
	__sub_0018B570(this, nullptr, nPos);
}
void CITCWndItemDlg::OnTabChanged(long nTab) {
	__sub_0018B7B0(this, nullptr, nTab);
}
int32_t CITCWndItemDlg::GetItemSlotRect(long nSlotPosition, tagRECT* pRc) {
	return __sub_0018B890(this, nullptr, nSlotPosition, pRc);
}
CITCWndItemDlg& CITCWndItemDlg::operator=(const CITCWndItemDlg& arg0) {
	return _op_assign_18(this, arg0);
}
CITCWndItemDlg& CITCWndItemDlg::_op_assign_18(CITCWndItemDlg* pThis, const CITCWndItemDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CITCBidAuctionDlg::~CITCBidAuctionDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CITCBidAuctionDlg::_dtor_0() {
	return __sub_0018B990(this, nullptr);
}
 CITCBidAuctionDlg::CITCBidAuctionDlg(const CITCBidAuctionDlg& arg0) {
	_ctor_1( arg0);
}
void CITCBidAuctionDlg::_ctor_1( const CITCBidAuctionDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CITCBidAuctionDlg::CITCBidAuctionDlg(void* pData, ZRef<ITCITEM>& pii) {
	_ctor_0( pData, pii);
}
void CITCBidAuctionDlg::_ctor_0( void* pData, ZRef<ITCITEM>& pii) {
	return __sub_0018BD70(this, nullptr, pData, pii);
}
void CITCBidAuctionDlg::OnCreate(void* pData) {
	__sub_0018D6A0(this, nullptr, pData);
}
void CITCBidAuctionDlg::OnDestroy() {
	__sub_0018BAC0(this, nullptr);
}
void CITCBidAuctionDlg::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_0018B590(this, nullptr, nId, param1, param2);
}
void CITCBidAuctionDlg::OnButtonClicked(uint32_t nId) {
	__sub_0018EB50(this, nullptr, nId);
}
void CITCBidAuctionDlg::Draw(const tagRECT* pRect) {
	__sub_0018E050(this, nullptr, pRect);
}
void CITCBidAuctionDlg::Update() {
	__sub_0018B5B0(this, nullptr);
}
long CITCBidAuctionDlg::GetPriceWithCommision() {
	return __sub_0018B5E0(this, nullptr);
}
CITCBidAuctionDlg& CITCBidAuctionDlg::operator=(const CITCBidAuctionDlg& arg0) {
	return _op_assign_10(this, arg0);
}
CITCBidAuctionDlg& CITCBidAuctionDlg::_op_assign_10(CITCBidAuctionDlg* pThis, const CITCBidAuctionDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

