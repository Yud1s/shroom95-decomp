// StoreBankDlg.cpp
#include "StoreBankDlg.hpp"
#include "StoreBankDlg_regen.ipp"

 CStoreBankDlg::~CStoreBankDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CStoreBankDlg::_dtor_0() {
	return __sub_003456B0(this, nullptr);
}
 CStoreBankDlg::CStoreBankDlg(const CStoreBankDlg& arg0) {
	_ctor_1( arg0);
}
void CStoreBankDlg::_ctor_1( const CStoreBankDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CStoreBankDlg::CStoreBankDlg() {
	UNIMPLEMENTED; //_ctor_0();
}
void CStoreBankDlg::_ctor_0() {
	return __sub_00345560(this, nullptr);
}
void CStoreBankDlg::SetStoreBankDlg(CInPacket& iPacket) {
	__sub_00345C20(this, nullptr, iPacket);
}
void CStoreBankDlg::SetRet(long nRet) {
	__sub_00343EB0(this, nullptr, nRet);
}
void CStoreBankDlg::ResetInfo() {
	__sub_00343510(this, nullptr);
}
void CStoreBankDlg::OnCreate(void* pData) {
	__sub_00344C00(this, nullptr, pData);
}
int32_t CStoreBankDlg::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_00343470(this, nullptr, rx, ry, ppCtrl);
}
void CStoreBankDlg::Draw(const tagRECT* pRect) {
	__sub_00345330(this, nullptr, pRect);
}
void CStoreBankDlg::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_003434A0(this, nullptr, nId, param1, param2);
}
void CStoreBankDlg::OnButtonClicked(uint32_t nId) {
	__sub_00344000(this, nullptr, nId);
}
void CStoreBankDlg::OnTabChanged(long nRet) {
	__sub_00343EB0(this, nullptr, nRet);
}
void CStoreBankDlg::SetItems(CInPacket& iPacket) {
	__sub_00345820(this, nullptr, iPacket);
}
void CStoreBankDlg::SetScrollBar() {
	__sub_003434E0(this, nullptr);
}
void CStoreBankDlg::SetNPC() {
	__sub_003435D0(this, nullptr);
}
void CStoreBankDlg::DrawGetItem(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_003440F0(this, nullptr, CreateNakedParam(pCanvas));
}
void CStoreBankDlg::DrawMoney(_x_com_ptr<IWzCanvas> pCanvas, long nMoney, long nLeft) {
	__sub_00344770(this, nullptr, CreateNakedParam(pCanvas), nMoney, nLeft);
}
int32_t CStoreBankDlg::GetItemIndexFromPoint(long arg0, long arg1) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CStoreBankDlg::SendCalculateFeeRequest() {
	__sub_00343F70(this, nullptr);
}
void CStoreBankDlg::SendGetAllRequest(long nPassingDay, long nFee) {
	__sub_003449F0(this, nullptr, nPassingDay, nFee);
}
void CStoreBankDlg::SendExitRequest() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CStoreBankDlg::RemoveAll() {
	__sub_00345530(this, nullptr);
}
void __cdecl CStoreBankDlg::OnPacket(long nType, CInPacket& iPacket) {
	__sub_00345C60(nType, iPacket);
}
CStoreBankDlg& CStoreBankDlg::operator=(const CStoreBankDlg& arg0) {
	return _op_assign_26(this, arg0);
}
CStoreBankDlg& CStoreBankDlg::_op_assign_26(CStoreBankDlg* pThis, const CStoreBankDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CStoreBankDlg::ITEM::~ITEM() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CStoreBankDlg::ITEM::_dtor_0() {
	return __sub_00344050(this, nullptr);
}
 CStoreBankDlg::ITEM::ITEM(const CStoreBankDlg::ITEM& arg0) {
	_ctor_1( arg0);
}
void CStoreBankDlg::ITEM::_ctor_1( const CStoreBankDlg::ITEM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CStoreBankDlg::ITEM::ITEM() {
	UNIMPLEMENTED; //_ctor_0();
}
void CStoreBankDlg::ITEM::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CStoreBankDlg::ITEM& CStoreBankDlg::ITEM::operator=(const CStoreBankDlg::ITEM& __that) {
	return _op_assign_3(this, __that);
}
CStoreBankDlg::ITEM& CStoreBankDlg::ITEM::_op_assign_3(CStoreBankDlg::ITEM* pThis, const CStoreBankDlg::ITEM& __that) {
	return __sub_00344B50(pThis, nullptr, __that);
}

