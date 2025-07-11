// RepairDurabilityDlg.cpp
#include "RepairDurabilityDlg.hpp"
#include "RepairDurabilityDlg_regen.ipp"

 CRepairDurabilityDlg::~CRepairDurabilityDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CRepairDurabilityDlg::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CRepairDurabilityDlg::CRepairDurabilityDlg(const CRepairDurabilityDlg& arg0) {
	_ctor_1( arg0);
}
void CRepairDurabilityDlg::_ctor_1( const CRepairDurabilityDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CRepairDurabilityDlg::CRepairDurabilityDlg(unsigned long dwNpcTemplateID) {
	_ctor_0( dwNpcTemplateID);
}
void CRepairDurabilityDlg::_ctor_0( unsigned long dwNpcTemplateID) {
	return __sub_0051D8D0(this, nullptr, dwNpcTemplateID);
}
void CRepairDurabilityDlg::ResetInfo() {
	__sub_002D52C0(this, nullptr);
}
void CRepairDurabilityDlg::OnCreate(void* pData) {
	__sub_002D4650(this, nullptr, pData);
}
int32_t CRepairDurabilityDlg::OnMouseMove(long rx, long ry) {
	return __sub_002D3870(this, nullptr, rx, ry);
}
void CRepairDurabilityDlg::OnMouseEnter(int32_t bEnter) {
	__sub_002D2AE0(this, nullptr, bEnter);
}
void CRepairDurabilityDlg::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_002D2DA0(this, nullptr, msg, wParam, rx, ry);
}
int32_t CRepairDurabilityDlg::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_002D2B00(this, nullptr, rx, ry, ppCtrl);
}
void CRepairDurabilityDlg::Draw(const tagRECT* pRect) {
	__sub_002D4E20(this, nullptr, pRect);
}
void CRepairDurabilityDlg::ClearToolTip() {
	__sub_0051D9D0(this, nullptr);
}
void CRepairDurabilityDlg::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_002D2B40(this, nullptr, nId, param1, param2);
}
void CRepairDurabilityDlg::OnButtonClicked(uint32_t nId) {
	__sub_002D3A20(this, nullptr, nId);
}
void CRepairDurabilityDlg::SetItems() {
	__sub_002D5200(this, nullptr);
}
void CRepairDurabilityDlg::AddItem(GW_ItemSlotBase* pItem, long nPOS) {
	__sub_002D5000(this, nullptr, pItem, nPOS);
}
void CRepairDurabilityDlg::ResetRepairPay() {
	__sub_002D2D20(this, nullptr);
}
void CRepairDurabilityDlg::SetScrollBar() {
	__sub_002D2B80(this, nullptr);
}
void CRepairDurabilityDlg::SetNPC() {
	__sub_002D2ED0(this, nullptr);
}
void CRepairDurabilityDlg::DrawItem(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_002D3B20(this, nullptr, CreateNakedParam(pCanvas));
}
void CRepairDurabilityDlg::DrawMoney(_x_com_ptr<IWzCanvas> pCanvas, long nMoney, long nLeft) {
	__sub_002D4320(this, nullptr, CreateNakedParam(pCanvas), nMoney, nLeft);
}
long CRepairDurabilityDlg::GetItemIndexFromPoint(long rx, long ry) {
	return __sub_002D2BB0(this, nullptr, rx, ry);
}
void CRepairDurabilityDlg::SendRepairDurabilityAll() {
	__sub_002D37B0(this, nullptr);
}
void CRepairDurabilityDlg::SendRepairDurability() {
	__sub_002D3980(this, nullptr);
}
void CRepairDurabilityDlg::RemoveAll() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CRepairDurabilityDlg& CRepairDurabilityDlg::operator=(const CRepairDurabilityDlg& arg0) {
	return _op_assign_27(this, arg0);
}
CRepairDurabilityDlg& CRepairDurabilityDlg::_op_assign_27(CRepairDurabilityDlg* pThis, const CRepairDurabilityDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CRepairDurabilityDlg::ITEM::~ITEM() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CRepairDurabilityDlg::ITEM::_dtor_0() {
	return __sub_002D3A80(this, nullptr);
}
 CRepairDurabilityDlg::ITEM::ITEM(const CRepairDurabilityDlg::ITEM& arg0) {
	_ctor_1( arg0);
}
void CRepairDurabilityDlg::ITEM::_ctor_1( const CRepairDurabilityDlg::ITEM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CRepairDurabilityDlg::ITEM::ITEM() {
	UNIMPLEMENTED; //_ctor_0();
}
void CRepairDurabilityDlg::ITEM::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CRepairDurabilityDlg::ITEM& CRepairDurabilityDlg::ITEM::operator=(const CRepairDurabilityDlg::ITEM& __that) {
	return _op_assign_3(this, __that);
}
CRepairDurabilityDlg::ITEM& CRepairDurabilityDlg::ITEM::_op_assign_3(CRepairDurabilityDlg::ITEM* pThis, const CRepairDurabilityDlg::ITEM& __that) {
	return __sub_002D45A0(pThis, nullptr, __that);
}

