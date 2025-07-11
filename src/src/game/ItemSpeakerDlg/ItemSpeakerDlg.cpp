// ItemSpeakerDlg.cpp
#include "ItemSpeakerDlg.hpp"
#include "ItemSpeakerDlg_regen.ipp"

 CItemSpeakerDlg::~CItemSpeakerDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CItemSpeakerDlg::_dtor_0() {
	return __sub_001C9C60(this, nullptr);
}
 CItemSpeakerDlg::CItemSpeakerDlg(const CItemSpeakerDlg& arg0) {
	_ctor_1( arg0);
}
void CItemSpeakerDlg::_ctor_1( const CItemSpeakerDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CItemSpeakerDlg::CItemSpeakerDlg(long nPOS, long nItemID) {
	_ctor_0( nPOS, nItemID);
}
void CItemSpeakerDlg::_ctor_0( long nPOS, long nItemID) {
	return __sub_001CA0E0(this, nullptr, nPOS, nItemID);
}
void CItemSpeakerDlg::OnCreate(void* pData) {
	__sub_001CA210(this, nullptr, pData);
}
void CItemSpeakerDlg::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_001CB7E0(this, nullptr, msg, wParam, rx, ry);
}
int32_t CItemSpeakerDlg::OnMouseMove(long rx, long ry) {
	return __sub_001C9B70(this, nullptr, rx, ry);
}
int32_t CItemSpeakerDlg::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_001C9BF0(this, nullptr, rx, ry, ppCtrl);
}
void CItemSpeakerDlg::OnButtonClicked(uint32_t nId) {
	__sub_001CAB10(this, nullptr, nId);
}
void CItemSpeakerDlg::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_001CAB60(this, nullptr, wParam, lParam);
}
int32_t CItemSpeakerDlg::PutItem(long nTI, long nPOS) {
	return __sub_001CABA0(this, nullptr, nTI, nPOS);
}
int32_t CItemSpeakerDlg::_InItemRect(long rx, long ry) {
	return __sub_001C9AB0(this, nullptr, rx, ry);
}
int32_t CItemSpeakerDlg::_SendConsumeCashItemUseRequest() {
	return __sub_001C9E70(this, nullptr);
}
CItemSpeakerDlg& CItemSpeakerDlg::operator=(const CItemSpeakerDlg& arg0) {
	return _op_assign_15(this, arg0);
}
CItemSpeakerDlg& CItemSpeakerDlg::_op_assign_15(CItemSpeakerDlg* pThis, const CItemSpeakerDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

