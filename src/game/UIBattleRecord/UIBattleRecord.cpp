// UIBattleRecord.cpp
#include "UIBattleRecord.hpp"

static ZRef<CUIBattleRecord::CInputDlg> FAKE_ZRef_CUIBattleRecord_CInputDlg{};

#include "UIBattleRecord_regen.ipp"

 CUIBattleRecord::~CUIBattleRecord() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIBattleRecord::_dtor_0() {
	return __sub_00373510(this, nullptr);
}
 CUIBattleRecord::CUIBattleRecord(const CUIBattleRecord& arg0) {
	_ctor_1( arg0);
}
void CUIBattleRecord::_ctor_1( const CUIBattleRecord& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIBattleRecord::CUIBattleRecord() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUIBattleRecord::_ctor_0() {
	return __sub_00373370(this, nullptr);
}
void CUIBattleRecord::OnCreate(void* arg0) {
	__sub_00373CF0(this, nullptr, arg0);
}
void CUIBattleRecord::OnDestroy() {
	__sub_003732F0(this, nullptr);
}
void CUIBattleRecord::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_00375CB0(this, nullptr, nId, param1, param2);
}
void CUIBattleRecord::Draw(const tagRECT* pRect) {
	__sub_00374B80(this, nullptr, pRect);
}
void CUIBattleRecord::Update() {
	__sub_003730E0(this, nullptr);
}
void CUIBattleRecord::OnButtonClicked(uint32_t nId) {
	__sub_00373860(this, nullptr, nId);
}
void CUIBattleRecord::SetNextUpdateTime() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIBattleRecord::SetBtToolTip(ZRef<CCtrlButton> pCurrentBt, const char* sDesc) {
	__sub_003759E0(this, nullptr, CreateNakedParam(pCurrentBt), sDesc);
}
void CUIBattleRecord::OnTabChanged(long nTab) {
	__sub_00373060(this, nullptr, nTab);
}
void CUIBattleRecord::Toggle() {
	__sub_00373170(this, nullptr);
}
CUIBattleRecord& CUIBattleRecord::operator=(const CUIBattleRecord& arg0) {
	return _op_assign_16(this, arg0);
}
CUIBattleRecord& CUIBattleRecord::_op_assign_16(CUIBattleRecord* pThis, const CUIBattleRecord& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIBattleRecord::CInputDlg::~CInputDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIBattleRecord::CInputDlg::_dtor_0() {
	return __sub_003737A0(this, nullptr);
}
 CUIBattleRecord::CInputDlg::CInputDlg(const CUIBattleRecord::CInputDlg& arg0) {
	_ctor_1( arg0);
}
void CUIBattleRecord::CInputDlg::_ctor_1(const CUIBattleRecord::CInputDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIBattleRecord::CInputDlg::CInputDlg(long nX, long nY, int32_t bNum) {
	_ctor_0( nX, nY, bNum);
}
void CUIBattleRecord::CInputDlg::_ctor_0(long nX, long nY, int32_t bNum) {
	return __sub_003736F0(this, nullptr, nX, nY, bNum);
}
void CUIBattleRecord::CInputDlg::OnCreate(void* pData) {
	__sub_00375B80(this, nullptr, pData);
}
void CUIBattleRecord::CInputDlg::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_00373C00(this, nullptr, wParam, lParam);
}
long CUIBattleRecord::CInputDlg::GetSetNum() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ZXString<char> CUIBattleRecord::CInputDlg::GetComment() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIBattleRecord::CInputDlg& CUIBattleRecord::CInputDlg::operator=(const CUIBattleRecord::CInputDlg& arg0) {
	return _op_assign_7(this, arg0);
}
CUIBattleRecord::CInputDlg& CUIBattleRecord::CInputDlg::_op_assign_7(CUIBattleRecord::CInputDlg* pThis, const CUIBattleRecord::CInputDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

