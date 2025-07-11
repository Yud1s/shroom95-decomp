// UIEnchantDlg.cpp
#include "UIEnchantDlg.hpp"
#include "UIEnchantDlg_regen.ipp"

 CUIEnchantDlg::~CUIEnchantDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIEnchantDlg::_dtor_0() {
	return __sub_003A1C70(this, nullptr);
}
 CUIEnchantDlg::CUIEnchantDlg(const CUIEnchantDlg& arg0) {
	_ctor_1( arg0);
}
void CUIEnchantDlg::_ctor_1( const CUIEnchantDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIEnchantDlg::CUIEnchantDlg() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUIEnchantDlg::_ctor_0() {
	return __sub_003A1B30(this, nullptr);
}
void CUIEnchantDlg::OnCreate(void* pData) {
	__sub_003A1E60(this, nullptr, pData);
}
int32_t CUIEnchantDlg::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_003A0760(this, nullptr, rx, ry, ppCtrl);
}
void CUIEnchantDlg::Draw(const tagRECT* pRect) {
	__sub_003A0980(this, nullptr, pRect);
}
void CUIEnchantDlg::OnButtonClicked(uint32_t nId) {
	__sub_003A07A0(this, nullptr, nId);
}
void CUIEnchantDlg::Update() {
	__sub_003A1E40(this, nullptr);
}
void CUIEnchantDlg::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_003A1C10(this, nullptr, wParam, lParam);
}
int32_t CUIEnchantDlg::OnMouseMove(long rx, long ry) {
	return __sub_003A0860(this, nullptr, rx, ry);
}
int32_t CUIEnchantDlg::PutItem(GW_ItemSlotBase* pItem, long nItemTI, long nSlotPosition) {
	return __sub_003A1200(this, nullptr, pItem, nItemTI, nSlotPosition);
}
void CUIEnchantDlg::ShowEffect() {
	__sub_003A0900(this, nullptr);
}
void CUIEnchantDlg::SetResult(int32_t bSuccess, int32_t bCursed, long nEnchantCategory, int32_t bRecoverable) {
	__sub_003A1340(this, nullptr, bSuccess, bCursed, nEnchantCategory, bRecoverable);
}
void CUIEnchantDlg::ShowResult() {
	__sub_003A1610(this, nullptr);
}
long CUIEnchantDlg::GetSlotPosition() {
	return __sub_003A08E0(this, nullptr);
}
int32_t CUIEnchantDlg::IsRequestSent() {
	return __sub_003A07F0(this, nullptr);
}
void CUIEnchantDlg::EnableWhiteScrollCheck(int32_t bEnable) {
	__sub_003A0940(this, nullptr, bEnable);
}
long CUIEnchantDlg::GetWhiteScrollCheck() {
	return __sub_003A08E0(this, nullptr);
}
int32_t CUIEnchantDlg::IsOKToShowResult() {
	return __sub_003A07F0(this, nullptr);
}
void CUIEnchantDlg::RefreshToolTip() {
	__sub_003A1060(this, nullptr);
}
ZRef<GW_ItemSlotBase> CUIEnchantDlg::MakeClone(ZRef<GW_ItemSlotBase> pSrc) {
	ZRef<GW_ItemSlotBase> ret{};
	return *__sub_003A0B50(this, nullptr, &ret, CreateNakedParam(pSrc));
}
CUIEnchantDlg& CUIEnchantDlg::operator=(const CUIEnchantDlg& arg0) {
	return _op_assign_24(this, arg0);
}
CUIEnchantDlg& CUIEnchantDlg::_op_assign_24(CUIEnchantDlg* pThis, const CUIEnchantDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

