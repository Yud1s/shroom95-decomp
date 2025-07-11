// UIPartySearch.cpp
#include "UIPartySearch.hpp"
#include "UIPartySearch_regen.ipp"

 CUIPartySearch::~CUIPartySearch() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIPartySearch::_dtor_0() {
	return __sub_00417BF0(this, nullptr);
}
 CUIPartySearch::CUIPartySearch(const CUIPartySearch& arg0) {
	_ctor_3( arg0);
}
void CUIPartySearch::_ctor_3( const CUIPartySearch& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIPartySearch::CUIPartySearch(long nDefaultTab) {
	_ctor_0( nDefaultTab);
}
void CUIPartySearch::_ctor_0( long nDefaultTab) {
	return __sub_00417CB0(this, nullptr, nDefaultTab);
}
 CUIPartySearch::CUIPartySearch(long nLeft, long nTop, long nDefaultTab) {
	_ctor_1( nLeft, nTop, nDefaultTab);
}
void CUIPartySearch::_ctor_1( long nLeft, long nTop, long nDefaultTab) {
	return __sub_00417A60(this, nullptr, nLeft, nTop, nDefaultTab);
}
void CUIPartySearch::OnCreate(void* arg0) {
	__sub_00417DE0(this, nullptr, arg0);
}
void CUIPartySearch::OnDestroy() {
	__sub_00417100(this, nullptr);
}
void CUIPartySearch::Draw(const tagRECT* pRect) {
	__sub_00417570(this, nullptr, pRect);
}
void CUIPartySearch::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_00418580(this, nullptr, wParam, lParam);
}
int32_t CUIPartySearch::OnSetFocus(int32_t bFocus) {
	return __sub_00416F40(this, nullptr, bFocus);
}
void CUIPartySearch::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_00417620(this, nullptr, nId, param1, param2);
}
void CUIPartySearch::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_00418630(this, nullptr, msg, wParam, rx, ry);
}
void CUIPartySearch::OnButtonClicked(uint32_t nId) {
	__sub_00417130(this, nullptr, nId);
}
void CUIPartySearch::OnMoveWnd(long l, long t) {
	__sub_00417020(this, nullptr, l, t);
}
void CUIPartySearch::OnPacket(long nRetCode, CInPacket& iPacket) {
	__sub_00416F50(this, nullptr, nRetCode, iPacket);
}
void CUIPartySearch::ToggleTab() {
	__sub_00417000(this, nullptr);
}
TabPartyAdver* CUIPartySearch::GetTabAdver() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
TabPartySearch* CUIPartySearch::GetTabSearch() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIPartySearch::StartSearch() {
	__sub_00416F60(this, nullptr);
}
void CUIPartySearch::HoldSearch() {
	__sub_00416F70(this, nullptr);
}
void CUIPartySearch::StopSearch() {
	__sub_00416F80(this, nullptr);
}
void CUIPartySearch::RequestPartyAdverSearch(long nPartyQuestID) {
	__sub_00417050(this, nullptr, nPartyQuestID);
}
long CUIPartySearch::GetIdx_Of_FocusedEdit() {
	return __sub_00418520(this, nullptr);
}
void CUIPartySearch::OnTabChanged(long nTab) {
	__sub_00417160(this, nullptr, nTab);
}
TabDlgInterface* CUIPartySearch::GetCurTabDlg() {
	return __sub_00416FE0(this, nullptr);
}
CUIPartySearch& CUIPartySearch::operator=(const CUIPartySearch& arg0) {
	return _op_assign_27(this, arg0);
}
CUIPartySearch& CUIPartySearch::_op_assign_27(CUIPartySearch* pThis, const CUIPartySearch& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPartySearch_RemoCon::~CPartySearch_RemoCon() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CPartySearch_RemoCon::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPartySearch_RemoCon::CPartySearch_RemoCon(const CPartySearch_RemoCon& arg0) {
	_ctor_1( arg0);
}
void CPartySearch_RemoCon::_ctor_1( const CPartySearch_RemoCon& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPartySearch_RemoCon::CPartySearch_RemoCon() {
	UNIMPLEMENTED; //_ctor_0();
}
void CPartySearch_RemoCon::_ctor_0() {
	return __sub_004171A0(this, nullptr);
}
int32_t CPartySearch_RemoCon::OnSetFocus(int32_t bFocus) {
	return __sub_00417300(this, nullptr, bFocus);
}
void CPartySearch_RemoCon::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_00417070(this, nullptr, msg, wParam, rx, ry);
}
CPartySearch_RemoCon& CPartySearch_RemoCon::operator=(const CPartySearch_RemoCon& arg0) {
	return _op_assign_5(this, arg0);
}
CPartySearch_RemoCon& CPartySearch_RemoCon::_op_assign_5(CPartySearch_RemoCon* pThis, const CPartySearch_RemoCon& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

