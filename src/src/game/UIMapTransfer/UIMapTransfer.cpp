// UIMapTransfer.cpp
#include "UIMapTransfer.hpp"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};
#include "UIMapTransfer_regen.ipp"

 CUIMapTransfer::~CUIMapTransfer() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIMapTransfer::_dtor_0() {
	return __sub_003DF2C0(this, nullptr);
}
 CUIMapTransfer::CUIMapTransfer(const CUIMapTransfer& arg0) {
	_ctor_1( arg0);
}
void CUIMapTransfer::_ctor_1( const CUIMapTransfer& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIMapTransfer::CUIMapTransfer(int32_t bCanTransferContinent) {
	_ctor_0( bCanTransferContinent);
}
void CUIMapTransfer::_ctor_0( int32_t bCanTransferContinent) {
	return __sub_003DF480(this, nullptr, bCanTransferContinent);
}
void CUIMapTransfer::Draw(const tagRECT* pRect) {
	__sub_003DF5C0(this, nullptr, pRect);
}
void CUIMapTransfer::OnCreate(void* pData) {
	__sub_003E0640(this, nullptr, pData);
}
void CUIMapTransfer::OnButtonClicked(uint32_t nId) {
	__sub_003E0ED0(this, nullptr, nId);
}
void CUIMapTransfer::SetRet(long nRet) {
	__sub_003E0250(this, nullptr, nRet);
}
void CUIMapTransfer::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_003DF270(this, nullptr, msg, wParam, rx, ry);
}
void CUIMapTransfer::Update() {
	__sub_003DFC70(this, nullptr);
}
void CUIMapTransfer::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_003DF0A0(this, nullptr, nId, param1, param2);
}
int32_t CUIMapTransfer::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_003DF060(this, nullptr, rx, ry, ppCtrl);
}
void CUIMapTransfer::GetResult(ZXString<char>& sTarget, unsigned long& dwTargetField) {
	__sub_003E0590(this, nullptr, sTarget, dwTargetField);
}
void CUIMapTransfer::UpdateFieldList(unsigned long* aFieldList, int32_t bCanTransferContinent) {
	__sub_003DF0D0(this, nullptr, aFieldList, bCanTransferContinent);
}
void CUIMapTransfer::OnRegister() {
	__sub_003DFE30(this, nullptr);
}
void CUIMapTransfer::OnDelete() {
	__sub_003E00E0(this, nullptr);
}
void CUIMapTransfer::DeleteSelectedField() {
	__sub_003DF230(this, nullptr);
}
int32_t CUIMapTransfer::GetMapIndexFromPoint(long rx, long ry) {
	return __sub_003DF150(this, nullptr, rx, ry);
}
CUIMapTransfer& CUIMapTransfer::operator=(const CUIMapTransfer& arg0) {
	return _op_assign_17(this, arg0);
}
CUIMapTransfer& CUIMapTransfer::_op_assign_17(CUIMapTransfer* pThis, const CUIMapTransfer& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

