// ITCDialog.cpp
#include "ITCDialog.hpp"

static ZRef<CRegisterWishEntryDlg> FAKE_ZRefRegisterWishEntryDlg_{};
static ZRef<CRegisterSaleEntryDlg> FAKE_ZRefRegisterSaleEntryDlg_{};
static ZRef<CRegisterAuctionEntryDlg> FAKE_ZRefRegisterAuctionEntryDlg_{};

#include "ITCDialog_regen.ipp"

 CSelectLoadWishSaleListDlg::~CSelectLoadWishSaleListDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CSelectLoadWishSaleListDlg::_dtor_0() {
	return __sub_00177DF0(this, nullptr);
}
 CSelectLoadWishSaleListDlg::CSelectLoadWishSaleListDlg(const CSelectLoadWishSaleListDlg& arg0) {
	_ctor_1( arg0);
}
void CSelectLoadWishSaleListDlg::_ctor_1( const CSelectLoadWishSaleListDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CSelectLoadWishSaleListDlg::CSelectLoadWishSaleListDlg(void* pData) {
	_ctor_0( pData);
}
void CSelectLoadWishSaleListDlg::_ctor_0( void* pData) {
	return __sub_00177D30(this, nullptr, pData);
}
void CSelectLoadWishSaleListDlg::OnCreate(void* pData) {
	__sub_0017A570(this, nullptr, pData);
}
void CSelectLoadWishSaleListDlg::OnDestroy() {
	__sub_001775A0(this, nullptr);
}
void CSelectLoadWishSaleListDlg::Draw(const tagRECT* pRect) {
	__sub_0017ACF0(this, nullptr, pRect);
}
void CSelectLoadWishSaleListDlg::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_001775B0(this, nullptr, nId, param1, param2);
}
void CSelectLoadWishSaleListDlg::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_00178420(this, nullptr, msg, wParam, rx, ry);
}
int32_t CSelectLoadWishSaleListDlg::OnMouseMove(long rx, long ry) {
	return __sub_00177EB0(this, nullptr, rx, ry);
}
void CSelectLoadWishSaleListDlg::OnButtonClicked(uint32_t nId) {
	__sub_00177550(this, nullptr, nId);
}
void CSelectLoadWishSaleListDlg::SetScrollBar() {
	__sub_001777F0(this, nullptr);
}
CSelectLoadWishSaleListDlg& CSelectLoadWishSaleListDlg::operator=(const CSelectLoadWishSaleListDlg& arg0) {
	return _op_assign_11(this, arg0);
}
CSelectLoadWishSaleListDlg& CSelectLoadWishSaleListDlg::_op_assign_11(CSelectLoadWishSaleListDlg* pThis, const CSelectLoadWishSaleListDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CRegisterWishEntrySearchDlg::~CRegisterWishEntrySearchDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CRegisterWishEntrySearchDlg::_dtor_0() {
	return __sub_00177AA0(this, nullptr);
}
 CRegisterWishEntrySearchDlg::CRegisterWishEntrySearchDlg(const CRegisterWishEntrySearchDlg& arg0) {
	_ctor_1( arg0);
}
void CRegisterWishEntrySearchDlg::_ctor_1( const CRegisterWishEntrySearchDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CRegisterWishEntrySearchDlg::CRegisterWishEntrySearchDlg(void* pData) {
	_ctor_0( pData);
}
void CRegisterWishEntrySearchDlg::_ctor_0( void* pData) {
	return __sub_001779D0(this, nullptr, pData);
}
void CRegisterWishEntrySearchDlg::OnCreate(void* pData) {
	__sub_0017F0C0(this, nullptr, pData);
}
void CRegisterWishEntrySearchDlg::OnDestroy() {
	__sub_001774F0(this, nullptr);
}
void CRegisterWishEntrySearchDlg::Draw(const tagRECT* pRect) {
	__sub_00179AB0(this, nullptr, pRect);
}
void CRegisterWishEntrySearchDlg::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_001774E0(this, nullptr, wParam, lParam);
}
void CRegisterWishEntrySearchDlg::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_00177500(this, nullptr, nId, param1, param2);
}
void CRegisterWishEntrySearchDlg::OnButtonClicked(uint32_t nId) {
	__sub_0017A380(this, nullptr, nId);
}
void CRegisterWishEntrySearchDlg::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_0017FCB0(this, nullptr, msg, wParam, rx, ry);
}
int32_t CRegisterWishEntrySearchDlg::OnMouseMove(long rx, long ry) {
	return __sub_00177BB0(this, nullptr, rx, ry);
}
void CRegisterWishEntrySearchDlg::SetScrollBar() {
	__sub_00177760(this, nullptr);
}
CRegisterWishEntrySearchDlg& CRegisterWishEntrySearchDlg::operator=(const CRegisterWishEntrySearchDlg& arg0) {
	return _op_assign_12(this, arg0);
}
CRegisterWishEntrySearchDlg& CRegisterWishEntrySearchDlg::_op_assign_12(CRegisterWishEntrySearchDlg* pThis, const CRegisterWishEntrySearchDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CRegisterAuctionEntryDlg::~CRegisterAuctionEntryDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CRegisterAuctionEntryDlg::_dtor_0() {
	return __sub_00178280(this, nullptr);
}
 CRegisterAuctionEntryDlg::CRegisterAuctionEntryDlg(const CRegisterAuctionEntryDlg& arg0) {
	_ctor_1( arg0);
}
void CRegisterAuctionEntryDlg::_ctor_1( const CRegisterAuctionEntryDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CRegisterAuctionEntryDlg::CRegisterAuctionEntryDlg(long nTI, GW_ItemSlotBase* pItem, void* pData) {
	_ctor_0( nTI, pItem, pData);
}
void CRegisterAuctionEntryDlg::_ctor_0( long nTI, GW_ItemSlotBase* pItem, void* pData) {
	return __sub_00178540(this, nullptr, nTI, pItem, pData);
}
void CRegisterAuctionEntryDlg::SetRet(long nRet) {
	__sub_0017E4D0(this, nullptr, nRet);
}
void CRegisterAuctionEntryDlg::OnCreate(void* pData) {
	__sub_0017C9C0(this, nullptr, pData);
}
void CRegisterAuctionEntryDlg::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_00177620(this, nullptr, nId, param1, param2);
}
void CRegisterAuctionEntryDlg::Draw(const tagRECT* pRect) {
	__sub_0017D6E0(this, nullptr, pRect);
}
void CRegisterAuctionEntryDlg::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_0017E100(this, nullptr, wParam, lParam);
}
int32_t __cdecl CRegisterAuctionEntryDlg::Confirm(long nTI, GW_ItemSlotBase* pItem, void* pData, long& nBeginPrice, long& nEndPrice, long& nSaleCount, unsigned char& bSaleDuration, unsigned char& bRegisterFeeType, long& nBidRange) {
	return __sub_0017E230(nTI, pItem, pData, nBeginPrice, nEndPrice, nSaleCount, bSaleDuration, bRegisterFeeType, nBidRange);
}
CRegisterAuctionEntryDlg& CRegisterAuctionEntryDlg::operator=(const CRegisterAuctionEntryDlg& arg0) {
	return _op_assign_9(this, arg0);
}
CRegisterAuctionEntryDlg& CRegisterAuctionEntryDlg::_op_assign_9(CRegisterAuctionEntryDlg* pThis, const CRegisterAuctionEntryDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CRegisterSaleEntryDlg::~CRegisterSaleEntryDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CRegisterSaleEntryDlg::_dtor_0() {
	return __sub_001778F0(this, nullptr);
}
 CRegisterSaleEntryDlg::CRegisterSaleEntryDlg(const CRegisterSaleEntryDlg& arg0) {
	_ctor_1( arg0);
}
void CRegisterSaleEntryDlg::_ctor_1( const CRegisterSaleEntryDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CRegisterSaleEntryDlg::CRegisterSaleEntryDlg(long nTI, GW_ItemSlotBase* pItem, void* pData) {
	_ctor_0( nTI, pItem, pData);
}
void CRegisterSaleEntryDlg::_ctor_0( long nTI, GW_ItemSlotBase* pItem, void* pData) {
	return __sub_001786B0(this, nullptr, nTI, pItem, pData);
}
void CRegisterSaleEntryDlg::SetRet(long nRet) {
	__sub_001798F0(this, nullptr, nRet);
}
void CRegisterSaleEntryDlg::OnCreate(void* pData) {
	__sub_0017E6E0(this, nullptr, pData);
}
void CRegisterSaleEntryDlg::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_001774C0(this, nullptr, nId, param1, param2);
}
void CRegisterSaleEntryDlg::Draw(const tagRECT* pRect) {
	__sub_00178EB0(this, nullptr, pRect);
}
void CRegisterSaleEntryDlg::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_001796E0(this, nullptr, wParam, lParam);
}
int32_t __cdecl CRegisterSaleEntryDlg::Confirm(long nTI, GW_ItemSlotBase* pItem, void* pData, long& nSalePrice, long& nSaleCount, unsigned char& bSaleDuration, unsigned char& bRegisterFeeType) {
	return __sub_001797A0(nTI, pItem, pData, nSalePrice, nSaleCount, bSaleDuration, bRegisterFeeType);
}
CRegisterSaleEntryDlg& CRegisterSaleEntryDlg::operator=(const CRegisterSaleEntryDlg& arg0) {
	return _op_assign_9(this, arg0);
}
CRegisterSaleEntryDlg& CRegisterSaleEntryDlg::_op_assign_9(CRegisterSaleEntryDlg* pThis, const CRegisterSaleEntryDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CRegisterWishEntryDlg::~CRegisterWishEntryDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CRegisterWishEntryDlg::_dtor_0() {
	return __sub_00178190(this, nullptr);
}
 CRegisterWishEntryDlg::CRegisterWishEntryDlg(const CRegisterWishEntryDlg& arg0) {
	_ctor_1( arg0);
}
void CRegisterWishEntryDlg::_ctor_1( const CRegisterWishEntryDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CRegisterWishEntryDlg::CRegisterWishEntryDlg(long nItemID, void* pData) {
	_ctor_0( nItemID, pData);
}
void CRegisterWishEntryDlg::_ctor_0( long nItemID, void* pData) {
	return __sub_00178020(this, nullptr, nItemID, pData);
}
void CRegisterWishEntryDlg::SetRet(long nRet) {
	__sub_0017C8D0(this, nullptr, nRet);
}
void CRegisterWishEntryDlg::OnCreate(void* pData) {
	__sub_0017B5F0(this, nullptr, pData);
}
void CRegisterWishEntryDlg::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_00177600(this, nullptr, nId, param1, param2);
}
void CRegisterWishEntryDlg::Draw(const tagRECT* pRect) {
	__sub_0017C0A0(this, nullptr, pRect);
}
void CRegisterWishEntryDlg::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_0017C660(this, nullptr, wParam, lParam);
}
int32_t __cdecl CRegisterWishEntryDlg::Confirm(long nItemID, void* pData, long& nSalePrice, long& nSaleCount, unsigned char& bSaleDuration, unsigned char& bRegisterFeeType, ZXString<char>& sDesc) {
	return __sub_0017C730(nItemID, pData, nSalePrice, nSaleCount, bSaleDuration, bRegisterFeeType, sDesc);
}
CRegisterWishEntryDlg& CRegisterWishEntryDlg::operator=(const CRegisterWishEntryDlg& arg0) {
	return _op_assign_9(this, arg0);
}
CRegisterWishEntryDlg& CRegisterWishEntryDlg::_op_assign_9(CRegisterWishEntryDlg* pThis, const CRegisterWishEntryDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

int32_t __cdecl CheckNumber(ZRef<CCtrlEdit> pEdit, long nMin, long nMax) {
	return __sub_001787D0(CreateNakedParam(pEdit), nMin, nMax);
}
int32_t __cdecl IsNumber(ZRef<CCtrlEdit> pEdit, long nMin, long nMax, ZRef<CDialog> pChild) {
	return __sub_001789D0(CreateNakedParam(pEdit), nMin, nMax, CreateNakedParam(pChild));
}
