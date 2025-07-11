// Msgbox.cpp
#include "Msgbox.hpp"
#include "Msgbox_regen.ipp"

 CMsgbox::~CMsgbox() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CMsgbox::_dtor_0() {
	return __sub_00268590(this, nullptr);
}
 CMsgbox::CMsgbox(const CMsgbox& arg0) {
	_ctor_1( arg0);
}
void CMsgbox::_ctor_1( const CMsgbox& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMsgbox::CMsgbox() {
	UNIMPLEMENTED; //_ctor_0();
}
void CMsgbox::_ctor_0() {
	return __sub_002686B0(this, nullptr);
}
void CMsgbox::Init(ZXString<char> sMsg, ZXString<char> sLink, ZXString<char> sDesc) {
	__sub_00269370(this, nullptr, CreateNakedParam(sMsg), CreateNakedParam(sLink), CreateNakedParam(sDesc));
}
CMsgbox& CMsgbox::operator=(const CMsgbox& arg0) {
	return _op_assign_4(this, arg0);
}
CMsgbox& CMsgbox::_op_assign_4(CMsgbox* pThis, const CMsgbox& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMsgboxLinkWeb::~CMsgboxLinkWeb() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CMsgboxLinkWeb::_dtor_0() {
	return __sub_00268630(this, nullptr);
}
 CMsgboxLinkWeb::CMsgboxLinkWeb(const CMsgboxLinkWeb& arg0) {
	_ctor_1( arg0);
}
void CMsgboxLinkWeb::_ctor_1( const CMsgboxLinkWeb& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMsgboxLinkWeb::CMsgboxLinkWeb() {
	UNIMPLEMENTED; //_ctor_0();
}
void CMsgboxLinkWeb::_ctor_0() {
	return __sub_002687B0(this, nullptr);
}
void CMsgboxLinkWeb::Init(ZXString<char> sMsg, ZXString<char> sLink) {
	__sub_00269470(this, nullptr, CreateNakedParam(sMsg), CreateNakedParam(sLink));
}
CMsgboxLinkWeb& CMsgboxLinkWeb::operator=(const CMsgboxLinkWeb& arg0) {
	return _op_assign_4(this, arg0);
}
CMsgboxLinkWeb& CMsgboxLinkWeb::_op_assign_4(CMsgboxLinkWeb* pThis, const CMsgboxLinkWeb& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

int32_t __stdcall MsgDlgProc(HWND__* hDlg, uint32_t iMessage, uint32_t wParam, long lParam) {
	return __sub_002688A0(hDlg, iMessage, wParam, lParam);
}

int __stdcall MsgLinkWebDlgProc(HWND__ *hDlg, uint32_t iMessage, uint32_t wParam, long lParam){
    //TODO 00668f80
    UNIMPLEMENTED;
}
