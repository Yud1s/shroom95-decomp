// UIItemProtector.cpp
#include "UIItemProtector.hpp"
#include "UIItemProtector_regen.ipp"

 CUIItemProtector::~CUIItemProtector() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIItemProtector::_dtor_0() {
	return __sub_003D73D0(this, nullptr);
}
 CUIItemProtector::CUIItemProtector(const CUIItemProtector& arg0) {
	_ctor_1( arg0);
}
void CUIItemProtector::_ctor_1( const CUIItemProtector& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIItemProtector::CUIItemProtector(COutPacket oPacket, long nProtectDay) {
	_ctor_0( oPacket, nProtectDay);
}
void CUIItemProtector::_ctor_0( COutPacket oPacket, long nProtectDay) {
	return __sub_003D7200(this, nullptr, CreateNakedParam(oPacket), nProtectDay);
}
void CUIItemProtector::OnCreate(void* pData) {
	__sub_003D6FF0(this, nullptr, pData);
}
void CUIItemProtector::OnDestroy() {
	__sub_003D7360(this, nullptr);
}
void CUIItemProtector::Draw(const tagRECT* pRect) {
	__sub_003D6E30(this, nullptr, pRect);
}
void CUIItemProtector::OnButtonClicked(uint32_t nId) {
	__sub_003D7520(this, nullptr, nId);
}
int32_t CUIItemProtector::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_003D6DF0(this, nullptr, rx, ry, ppCtrl);
}
int32_t CUIItemProtector::OnMouseMove(long rx, long ry) {
	return __sub_003D6F20(this, nullptr, rx, ry);
}
void CUIItemProtector::ClearToolTip() {
	__sub_003D7370(this, nullptr);
}
int32_t CUIItemProtector::PutItem(GW_ItemSlotBase* pItem, long nItemTI, long nSlotPosition) {
	return __sub_003D7160(this, nullptr, pItem, nItemTI, nSlotPosition);
}
CUIItemProtector& CUIItemProtector::operator=(const CUIItemProtector& arg0) {
	return _op_assign_14(this, arg0);
}
CUIItemProtector& CUIItemProtector::_op_assign_14(CUIItemProtector* pThis, const CUIItemProtector& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

