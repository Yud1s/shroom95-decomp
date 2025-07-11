// MemoListDlg.cpp
#include "MemoListDlg.hpp"
#include "MemoListDlg_regen.ipp"

 CMemoListDlg::~CMemoListDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CMemoListDlg::_dtor_0() {
	return __sub_00225F90(this, nullptr);
}
 CMemoListDlg::CMemoListDlg(const CMemoListDlg& arg0) {
	_ctor_1( arg0);
}
void CMemoListDlg::_ctor_1( const CMemoListDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMemoListDlg::CMemoListDlg(const ZList<GW_Memo>& lMemo) {
	_ctor_0( lMemo);
}
void CMemoListDlg::_ctor_0( const ZList<GW_Memo>& lMemo) {
	return __sub_00225EA0(this, nullptr, lMemo);
}
void CMemoListDlg::OnCreate(void* pData) {
	__sub_00226120(this, nullptr, pData);
}
void CMemoListDlg::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_00224120(this, nullptr, nId, param1, param2);
}
void CMemoListDlg::Draw(const tagRECT* pRect) {
	__sub_00225810(this, nullptr, pRect);
}
void CMemoListDlg::OnButtonClicked(uint32_t nId) {
	__sub_00224170(this, nullptr, nId);
}
void CMemoListDlg::SetRet(long nRet) {
	__sub_00224280(this, nullptr, nRet);
}
void CMemoListDlg::DrawMemo(_x_com_ptr<IWzCanvas> pCanvas, const CMemoListDlg::MEMO& m, long y, int32_t bIsLast) {
	__sub_002247B0(this, nullptr, CreateNakedParam(pCanvas), m, y, bIsLast);
}
CMemoListDlg& CMemoListDlg::operator=(const CMemoListDlg& arg0) {
	return _op_assign_9(this, arg0);
}
CMemoListDlg& CMemoListDlg::_op_assign_9(CMemoListDlg* pThis, const CMemoListDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMemoListDlg::MEMO::~MEMO() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CMemoListDlg::MEMO::_dtor_0() {
	return __sub_00225D40(this, nullptr);
}
 CMemoListDlg::MEMO::MEMO(const CMemoListDlg::MEMO& arg0) {
	_ctor_1( arg0);
}
void CMemoListDlg::MEMO::_ctor_1( const CMemoListDlg::MEMO& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMemoListDlg::MEMO::MEMO() {
	UNIMPLEMENTED; //_ctor_0();
}
void CMemoListDlg::MEMO::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CMemoListDlg::MEMO& CMemoListDlg::MEMO::operator=(const CMemoListDlg::MEMO& arg0) {
	return _op_assign_3(this, arg0);
}
CMemoListDlg::MEMO& CMemoListDlg::MEMO::_op_assign_3(CMemoListDlg::MEMO* pThis, const CMemoListDlg::MEMO& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

