// UIKarma.cpp
#include "UIKarma.hpp"
#include "UIKarma_regen.ipp"

 CUIKarmaDlg::~CUIKarmaDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIKarmaDlg::_dtor_0() {
	return __sub_003D7DE0(this, nullptr);
}
 CUIKarmaDlg::CUIKarmaDlg(const CUIKarmaDlg& arg0) {
	_ctor_1( arg0);
}
void CUIKarmaDlg::_ctor_1( const CUIKarmaDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIKarmaDlg::CUIKarmaDlg(long nPOS, long nItemID) {
	_ctor_0( nPOS, nItemID);
}
void CUIKarmaDlg::_ctor_0( long nPOS, long nItemID) {
	return __sub_003D7C90(this, nullptr, nPOS, nItemID);
}
void CUIKarmaDlg::OnCreate(void* pData) {
	__sub_003D7A80(this, nullptr, pData);
}
int32_t CUIKarmaDlg::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_003D78E0(this, nullptr, rx, ry, ppCtrl);
}
void CUIKarmaDlg::Draw(const tagRECT* pRect) {
	__sub_003D79A0(this, nullptr, pRect);
}
void CUIKarmaDlg::OnButtonClicked(uint32_t nId) {
	__sub_003D8130(this, nullptr, nId);
}
void CUIKarmaDlg::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_003D7D80(this, nullptr, wParam, lParam);
}
int32_t CUIKarmaDlg::OnMouseMove(long rx, long ry) {
	return __sub_003D7920(this, nullptr, rx, ry);
}
int32_t CUIKarmaDlg::PutItem(GW_ItemSlotBase* pItem, long nItemTI, long nSlotPosition) {
	return __sub_003D7BA0(this, nullptr, pItem, nItemTI, nSlotPosition);
}
int32_t CUIKarmaDlg::_SendConsumeCashItemUseRequest() {
	return __sub_003D7EF0(this, nullptr);
}
CUIKarmaDlg& CUIKarmaDlg::operator=(const CUIKarmaDlg& arg0) {
	return _op_assign_14(this, arg0);
}
CUIKarmaDlg& CUIKarmaDlg::_op_assign_14(CUIKarmaDlg* pThis, const CUIKarmaDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

