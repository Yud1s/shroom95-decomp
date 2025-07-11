// NewYearCardSenderDlg.cpp
#include "NewYearCardSenderDlg.hpp"
#include "NewYearCardSenderDlg_regen.ipp"

 CNewYearCardReceiverSearchResult::~CNewYearCardReceiverSearchResult() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CNewYearCardReceiverSearchResult::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CNewYearCardReceiverSearchResult::CNewYearCardReceiverSearchResult(const CNewYearCardReceiverSearchResult& arg0) {
	_ctor_1( arg0);
}
void CNewYearCardReceiverSearchResult::_ctor_1( const CNewYearCardReceiverSearchResult& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CNewYearCardReceiverSearchResult::CNewYearCardReceiverSearchResult(CUINewYearCardSenderDlg* pParent) {
	_ctor_0( pParent);
}
void CNewYearCardReceiverSearchResult::_ctor_0( CUINewYearCardSenderDlg* pParent) {
	return __sub_0061D780(this, nullptr, pParent);
}
void CNewYearCardReceiverSearchResult::SetUp(const ZArray<ZXString<char> >& asNames) {
	__sub_0061CFB0(this, nullptr, asNames);
}
void CNewYearCardReceiverSearchResult::Draw(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_0061DB90(this, nullptr, CreateNakedParam(pCanvas));
}
int32_t CNewYearCardReceiverSearchResult::OnMouseLButtonClk(long rx, long ry) {
	return __sub_0061D010(this, nullptr, rx, ry);
}
void CNewYearCardReceiverSearchResult::OnMouseMove(long rx, long ry) {
	__sub_0061CD80(this, nullptr, rx, ry);
}
int32_t CNewYearCardReceiverSearchResult::HitTest(long rx, long ry) {
	return __sub_0061CDC0(this, nullptr, rx, ry);
}
void CNewYearCardReceiverSearchResult::_InvalidateRect() {
	__sub_0061CBB0(this, nullptr);
}
long CNewYearCardReceiverSearchResult::_GetTopItemIndex() {
	return __sub_0061CCF0(this, nullptr);
}
long CNewYearCardReceiverSearchResult::_GetSelection(long rx, long ry) {
	return __sub_0061CD20(this, nullptr, rx, ry);
}
void CNewYearCardReceiverSearchResult::_ClearHighlight() {
	__sub_0061CBF0(this, nullptr);
}
CNewYearCardReceiverSearchResult& CNewYearCardReceiverSearchResult::operator=(const CNewYearCardReceiverSearchResult& arg0) {
	return _op_assign_12(this, arg0);
}
CNewYearCardReceiverSearchResult& CNewYearCardReceiverSearchResult::_op_assign_12(CNewYearCardReceiverSearchResult* pThis, const CNewYearCardReceiverSearchResult& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUINewYearCardSenderDlg::~CUINewYearCardSenderDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUINewYearCardSenderDlg::_dtor_0() {
	return __sub_0061E6D0(this, nullptr);
}
 CUINewYearCardSenderDlg::CUINewYearCardSenderDlg(const CUINewYearCardSenderDlg& arg0) {
	_ctor_1( arg0);
}
void CUINewYearCardSenderDlg::_ctor_1( const CUINewYearCardSenderDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUINewYearCardSenderDlg::CUINewYearCardSenderDlg(long nPOS, long nItemID) {
	_ctor_0( nPOS, nItemID);
}
void CUINewYearCardSenderDlg::_ctor_0( long nPOS, long nItemID) {
	return __sub_0061D0B0(this, nullptr, nPOS, nItemID);
}
void CUINewYearCardSenderDlg::Draw(const tagRECT* pRect) {
	__sub_0061DF50(this, nullptr, pRect);
}
void CUINewYearCardSenderDlg::OnCreate(void* pData) {
	__sub_0061E050(this, nullptr, pData);
}
void CUINewYearCardSenderDlg::OnButtonClicked(uint32_t nId) {
	__sub_0061E840(this, nullptr, nId);
}
void CUINewYearCardSenderDlg::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_0061D200(this, nullptr, msg, wParam, rx, ry);
}
int32_t CUINewYearCardSenderDlg::OnMouseMove(long rx, long ry) {
	return __sub_0061CE20(this, nullptr, rx, ry);
}
int32_t CUINewYearCardSenderDlg::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_0061CE50(this, nullptr, rx, ry, ppCtrl);
}
void CUINewYearCardSenderDlg::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_0061CC00(this, nullptr, wParam, lParam);
}
void CUINewYearCardSenderDlg::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_0061CC30(this, nullptr, nId, param1, param2);
}
void __cdecl CUINewYearCardSenderDlg::ShowDlg(long nPOS, long nItemID) {
	__sub_0061D230(nPOS, nItemID);
}
ZXString<char>& CUINewYearCardSenderDlg::GetTargetName() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ZXString<char>& CUINewYearCardSenderDlg::GetMemo() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUINewYearCardSenderDlg::SetSearchName(ZXString<char> sName) {
	__sub_0061CF20(this, nullptr, CreateNakedParam(sName));
}
void CUINewYearCardSenderDlg::_DoSearch() {
	__sub_0061E5D0(this, nullptr);
}
int32_t CUINewYearCardSenderDlg::_SendNewYearCard() {
	return __sub_0061D2A0(this, nullptr);
}
void CUINewYearCardSenderDlg::_CloseDlg(int32_t nRetCode) {
	__sub_0061CC70(this, nullptr, nRetCode);
}
void CUINewYearCardSenderDlg::_ToggleSearchPane() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUINewYearCardSenderDlg::_ShowSearchPane(bool bShow) {
	__sub_0061CCC0(this, nullptr, bShow);
}
long CUINewYearCardSenderDlg::_SearchFromFriendList(ZXString<char> sSubName, ZArray<ZXString<char> >& sResultToAdd) {
	return __sub_0061D460(this, nullptr, CreateNakedParam(sSubName), sResultToAdd);
}
long CUINewYearCardSenderDlg::_SearchFromGuildList(ZXString<char> sSubName, ZArray<ZXString<char> >& sResultToAdd) {
	return __sub_0061D5F0(this, nullptr, CreateNakedParam(sSubName), sResultToAdd);
}
CUINewYearCardSenderDlg& CUINewYearCardSenderDlg::operator=(const CUINewYearCardSenderDlg& arg0) {
	return _op_assign_25(this, arg0);
}
CUINewYearCardSenderDlg& CUINewYearCardSenderDlg::_op_assign_25(CUINewYearCardSenderDlg* pThis, const CUINewYearCardSenderDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

