// NoticeQuestProgress.cpp
#include "NoticeQuestProgress.hpp"
#include "NoticeQuestProgress_regen.ipp"

 CNoticeQuestProgress::~CNoticeQuestProgress() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CNoticeQuestProgress::_dtor_0() {
	return __sub_0026DBD0(this, nullptr);
}
 CNoticeQuestProgress::CNoticeQuestProgress(const CNoticeQuestProgress& arg0) {
	_ctor_1( arg0);
}
void CNoticeQuestProgress::_ctor_1( const CNoticeQuestProgress& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CNoticeQuestProgress::CNoticeQuestProgress() {
	UNIMPLEMENTED; //_ctor_0();
}
void CNoticeQuestProgress::_ctor_0() {
	return __sub_0026E060(this, nullptr);
}
void CNoticeQuestProgress::Update() {
	__sub_0026F6A0(this, nullptr);
}
int32_t CNoticeQuestProgress::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_0026DC90(this, nullptr, rx, ry, ppCtrl);
}
int32_t CNoticeQuestProgress::OnSetFocus(int32_t bFocus) {
	return __sub_0026DCA0(this, nullptr, bFocus);
}
void CNoticeQuestProgress::OnQuestProgressUpdated_Item(uint16_t usQuestID, long nItemID) {
	__sub_0026DCE0(this, nullptr, usQuestID, nItemID);
}
void CNoticeQuestProgress::OnQuestProgressUpdated_Mob(uint16_t usQuestID, ZXString<char> sOldRecord) {
	__sub_0026F6B0(this, nullptr, usQuestID, CreateNakedParam(sOldRecord));
}
void CNoticeQuestProgress::OnQuestProgressUpdated_Script(ZXString<char> sMsg) {
	__sub_0026DF50(this, nullptr, CreateNakedParam(sMsg));
}
void CNoticeQuestProgress::NoticeProgressChange() {
	__sub_0026E6B0(this, nullptr);
}
CNoticeQuestProgress& CNoticeQuestProgress::operator=(const CNoticeQuestProgress& arg0) {
	return _op_assign_10(this, arg0);
}
CNoticeQuestProgress& CNoticeQuestProgress::_op_assign_10(CNoticeQuestProgress* pThis, const CNoticeQuestProgress& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CNoticeQuestProgress::NOTICE_CHANGE::~NOTICE_CHANGE() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CNoticeQuestProgress::NOTICE_CHANGE::_dtor_0() {
	return __sub_0026DB30(this, nullptr);
}
 CNoticeQuestProgress::NOTICE_CHANGE::NOTICE_CHANGE(const CNoticeQuestProgress::NOTICE_CHANGE& arg0) {
	_ctor_1( arg0);
}
void CNoticeQuestProgress::NOTICE_CHANGE::_ctor_1( const CNoticeQuestProgress::NOTICE_CHANGE& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CNoticeQuestProgress::NOTICE_CHANGE::NOTICE_CHANGE() {
	UNIMPLEMENTED; //_ctor_0();
}
void CNoticeQuestProgress::NOTICE_CHANGE::_ctor_0() {
	return __sub_0026DB00(this, nullptr);
}
CNoticeQuestProgress::NOTICE_CHANGE& CNoticeQuestProgress::NOTICE_CHANGE::operator=(const CNoticeQuestProgress::NOTICE_CHANGE& arg0) {
	return _op_assign_3(this, arg0);
}
CNoticeQuestProgress::NOTICE_CHANGE& CNoticeQuestProgress::NOTICE_CHANGE::_op_assign_3(CNoticeQuestProgress::NOTICE_CHANGE* pThis, const CNoticeQuestProgress::NOTICE_CHANGE& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

