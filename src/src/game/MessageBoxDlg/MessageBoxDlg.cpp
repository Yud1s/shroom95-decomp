// MessageBoxDlg.cpp
#include "MessageBoxDlg.hpp"
#include "MessageBoxDlg_regen.ipp"

 CMessageBoxDlg::~CMessageBoxDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CMessageBoxDlg::_dtor_0() {
	return __sub_00234140(this, nullptr);
}
 CMessageBoxDlg::CMessageBoxDlg(const CMessageBoxDlg& arg0) {
	_ctor_1( arg0);
}
void CMessageBoxDlg::_ctor_1( const CMessageBoxDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMessageBoxDlg::CMessageBoxDlg(ZXString<char> sHope, ZXString<char> sCharacterName, long nItemID) {
	_ctor_0( sHope, sCharacterName, nItemID);
}
void CMessageBoxDlg::_ctor_0( ZXString<char> sHope, ZXString<char> sCharacterName, long nItemID) {
	return __sub_00234390(this, nullptr, CreateNakedParam(sHope), CreateNakedParam(sCharacterName), nItemID);
}
void CMessageBoxDlg::OnCreate(void* pData) {
	__sub_00234270(this, nullptr, pData);
}
void CMessageBoxDlg::Draw(const tagRECT* pRect) {
	__sub_002347E0(this, nullptr, pRect);
}
void CMessageBoxDlg::OnButtonClicked(uint32_t nId) {
	__sub_002340E0(this, nullptr, nId);
}
CMessageBoxDlg& CMessageBoxDlg::operator=(const CMessageBoxDlg& arg0) {
	return _op_assign_6(this, arg0);
}
CMessageBoxDlg& CMessageBoxDlg::_op_assign_6(CMessageBoxDlg* pThis, const CMessageBoxDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

