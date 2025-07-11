// UIGuildBBS.cpp
#include "UIGuildBBS.hpp"
#include "UIGuildBBS_regen.ipp"

 CUIGuildBBS::~CUIGuildBBS() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIGuildBBS::_dtor_0() {
	return __sub_003C3F10(this, nullptr);
}
 CUIGuildBBS::CUIGuildBBS(const CUIGuildBBS& arg0) {
	_ctor_1( arg0);
}
void CUIGuildBBS::_ctor_1( const CUIGuildBBS& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIGuildBBS::CUIGuildBBS() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUIGuildBBS::_ctor_0() {
	return __sub_003C3CB0(this, nullptr);
}
void CUIGuildBBS::OnCreate(void* pData) {
	__sub_003C69F0(this, nullptr, pData);
}
void CUIGuildBBS::OnDestroy() {
	__sub_003C2FC0(this, nullptr);
}
void CUIGuildBBS::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_003C2E30(this, nullptr, wParam, lParam);
}
void CUIGuildBBS::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_003C3980(this, nullptr, msg, wParam, rx, ry);
}
int32_t CUIGuildBBS::OnMouseMove(long rx, long ry) {
	return __sub_003C2E40(this, nullptr, rx, ry);
}
void CUIGuildBBS::OnButtonClicked(uint32_t nId) {
	__sub_003C80A0(this, nullptr, nId);
}
void CUIGuildBBS::Draw(const tagRECT* pRect) {
	__sub_003C82B0(this, nullptr, pRect);
}
void CUIGuildBBS::ClearToolTip() {
	__sub_003C3EB0(this, nullptr);
}
void CUIGuildBBS::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_003C38E0(this, nullptr, nId, param1, param2);
}
void CUIGuildBBS::SetScrollBar() {
	__sub_003C2FE0(this, nullptr);
}
void CUIGuildBBS::LoadViewTextBox() {
	__sub_003C4C00(this, nullptr);
}
void CUIGuildBBS::ShowDeleteCommentButtons() {
	__sub_003C34B0(this, nullptr);
}
void CUIGuildBBS::LoadWriteTextBox(int32_t bModify, int32_t bNotice) {
	__sub_003C5A10(this, nullptr, bModify, bNotice);
}
void CUIGuildBBS::DestroyPreviousControls() {
	__sub_003C2E80(this, nullptr);
}
void CUIGuildBBS::OnWrite(int32_t bModify, int32_t bNotice) {
	__sub_003C63F0(this, nullptr, bModify, bNotice);
}
void CUIGuildBBS::OnRegister(int32_t bModify, int32_t bNotice) {
	__sub_003C4250(this, nullptr, bModify, bNotice);
}
void CUIGuildBBS::OnDelete() {
	__sub_003C6520(this, nullptr);
}
void CUIGuildBBS::OnCancel() {
	__sub_003C6510(this, nullptr);
}
void CUIGuildBBS::OnComment() {
	__sub_003C4530(this, nullptr);
}
void CUIGuildBBS::OnCommentDelete(int32_t nIdx) {
	__sub_003C3B70(this, nullptr, nIdx);
}
void CUIGuildBBS::SendLoadListRequest() {
	__sub_003C3680(this, nullptr);
}
void CUIGuildBBS::SendViewEntryRequest() {
	__sub_003C3710(this, nullptr);
}
void CUIGuildBBS::SendModifyCheckRequest() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIGuildBBS::OnGuildBBSPacket(CInPacket& iPacket) {
	__sub_003C8260(this, nullptr, iPacket);
}
void CUIGuildBBS::OnLoadListResult(CInPacket& iPacket) {
	__sub_003C46C0(this, nullptr, iPacket);
}
void CUIGuildBBS::OnViewEntryResult(CInPacket& iPacket) {
	__sub_003C6630(this, nullptr, iPacket);
}
void CUIGuildBBS::OnEntryNotFound() {
	__sub_003C6970(this, nullptr);
}
int32_t CUIGuildBBS::IsGuildBBSAdmin() {
	return __sub_003C30A0(this, nullptr);
}
void CUIGuildBBS::MoveEmoticon(int32_t nCode) {
	__sub_003C3030(this, nullptr, nCode);
}
void CUIGuildBBS::DrawList(ZRef<CUIGuildBBS::ENTRYLIST>& pEntryList, _x_com_ptr<IWzCanvas>& pCanvas, long nTop) {
	__sub_003C7550(this, nullptr, pEntryList, pCanvas, nTop);
}
void CUIGuildBBS::FormatDate(const _FILETIME& ftTime, ZXString<char>& sDate) {
	__sub_003C4B00(this, nullptr, ftTime, sDate);
}
void CUIGuildBBS::FormatShortDate(const _FILETIME& ftTime, ZXString<char>& sDate) {
	__sub_003C4B50(this, nullptr, ftTime, sDate);
}
CUIGuildBBS& CUIGuildBBS::operator=(const CUIGuildBBS& arg0) {
	return _op_assign_38(this, arg0);
}
CUIGuildBBS& CUIGuildBBS::_op_assign_38(CUIGuildBBS* pThis, const CUIGuildBBS& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIGuildBBS::COMMENT::~COMMENT() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIGuildBBS::COMMENT::_dtor_0() {
	return __sub_003C3800(this, nullptr);
}
 CUIGuildBBS::COMMENT::COMMENT(const CUIGuildBBS::COMMENT& arg0) {
	_ctor_1( arg0);
}
void CUIGuildBBS::COMMENT::_ctor_1( const CUIGuildBBS::COMMENT& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIGuildBBS::COMMENT::COMMENT() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUIGuildBBS::COMMENT::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIGuildBBS::COMMENT& CUIGuildBBS::COMMENT::operator=(const CUIGuildBBS::COMMENT& arg0) {
	return _op_assign_3(this, arg0);
}
CUIGuildBBS::COMMENT& CUIGuildBBS::COMMENT::_op_assign_3(CUIGuildBBS::COMMENT* pThis, const CUIGuildBBS::COMMENT& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIGuildBBS::CURENTRY::~CURENTRY() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIGuildBBS::CURENTRY::_dtor_0() {
	return __sub_003C4A80(this, nullptr);
}
 CUIGuildBBS::CURENTRY::CURENTRY(const CUIGuildBBS::CURENTRY& arg0) {
	_ctor_1( arg0);
}
void CUIGuildBBS::CURENTRY::_ctor_1( const CUIGuildBBS::CURENTRY& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIGuildBBS::CURENTRY::CURENTRY() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUIGuildBBS::CURENTRY::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIGuildBBS::CURENTRY& CUIGuildBBS::CURENTRY::operator=(const CUIGuildBBS::CURENTRY& arg0) {
	return _op_assign_3(this, arg0);
}
CUIGuildBBS::CURENTRY& CUIGuildBBS::CURENTRY::_op_assign_3(CUIGuildBBS::CURENTRY* pThis, const CUIGuildBBS::CURENTRY& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIGuildBBS::ENTRYLIST::~ENTRYLIST() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIGuildBBS::ENTRYLIST::_dtor_0() {
	return __sub_003C37A0(this, nullptr);
}
 CUIGuildBBS::ENTRYLIST::ENTRYLIST(const CUIGuildBBS::ENTRYLIST& arg0) {
	_ctor_1( arg0);
}
void CUIGuildBBS::ENTRYLIST::_ctor_1( const CUIGuildBBS::ENTRYLIST& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIGuildBBS::ENTRYLIST::ENTRYLIST() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUIGuildBBS::ENTRYLIST::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIGuildBBS::ENTRYLIST& CUIGuildBBS::ENTRYLIST::operator=(const CUIGuildBBS::ENTRYLIST& arg0) {
	return _op_assign_3(this, arg0);
}
CUIGuildBBS::ENTRYLIST& CUIGuildBBS::ENTRYLIST::_op_assign_3(CUIGuildBBS::ENTRYLIST* pThis, const CUIGuildBBS::ENTRYLIST& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

