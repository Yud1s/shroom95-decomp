// NewYearCardDlg.cpp
#include "NewYearCardDlg.hpp"
#include "NewYearCardDlg_regen.ipp"

 CUINewYearCardDlg::~CUINewYearCardDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUINewYearCardDlg::_dtor_0() {
	return __sub_0061C220(this, nullptr);
}
 CUINewYearCardDlg::CUINewYearCardDlg(const CUINewYearCardDlg& arg0) {
	_ctor_1( arg0);
}
void CUINewYearCardDlg::_ctor_1( const CUINewYearCardDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUINewYearCardDlg::CUINewYearCardDlg(ZXString<char> sFrom, ZXString<char> sTo, ZXString<char> sMemo) {
	_ctor_0( sFrom, sTo, sMemo);
}
void CUINewYearCardDlg::_ctor_0( ZXString<char> sFrom, ZXString<char> sTo, ZXString<char> sMemo) {
	return __sub_0061C740(this, nullptr, CreateNakedParam(sFrom), CreateNakedParam(sTo), CreateNakedParam(sMemo));
}
void CUINewYearCardDlg::OnCreate(void* pData) {
	__sub_0061C110(this, nullptr, pData);
}
void CUINewYearCardDlg::OnButtonClicked(uint32_t nId) {
	__sub_0061C010(this, nullptr, nId);
}
void CUINewYearCardDlg::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_0061C070(this, nullptr, wParam, lParam);
}
void CUINewYearCardDlg::Draw(const tagRECT* pRect) {
	__sub_0061C390(this, nullptr, pRect);
}
void __cdecl CUINewYearCardDlg::ShowDlg(ZXString<char> sFrom, ZXString<char> sTo, ZXString<char> sMemo) {
	__sub_0061CAA0(CreateNakedParam(sFrom), CreateNakedParam(sTo), CreateNakedParam(sMemo));
}
void CUINewYearCardDlg::CloseDlg(int32_t nRetCode) {
	__sub_0061BFC0(this, nullptr, nRetCode);
}
CUINewYearCardDlg& CUINewYearCardDlg::operator=(const CUINewYearCardDlg& arg0) {
	return _op_assign_12(this, arg0);
}
CUINewYearCardDlg& CUINewYearCardDlg::_op_assign_12(CUINewYearCardDlg* pThis, const CUINewYearCardDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

