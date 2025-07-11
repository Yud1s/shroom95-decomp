// UILogoutGift.cpp
#include "UILogoutGift.hpp"
#include "CashShop/CashShop.hpp"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};

static ZRef<CItemInfo::EQUIPEXTITEM> FAKE_ZRef_CItemInfo_EQUIPEXTITEM{};

#include "UILogoutGift_regen.ipp"

 CUILogoutGift::~CUILogoutGift() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUILogoutGift::_dtor_0() {
	return __sub_003DE0E0(this, nullptr);
}
 CUILogoutGift::CUILogoutGift(const CUILogoutGift& arg0) {
	_ctor_1( arg0);
}
void CUILogoutGift::_ctor_1( const CUILogoutGift& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUILogoutGift::CUILogoutGift() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUILogoutGift::_ctor_0() {
	return __sub_003DE730(this, nullptr);
}
void CUILogoutGift::OnCreate(void* pData) {
	__sub_003DEC80(this, nullptr, pData);
}
void CUILogoutGift::OnDestory() {
	__sub_003DE0C0(this, nullptr);
}
void CUILogoutGift::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_003DE0B0(this, nullptr, wParam, lParam);
}
void CUILogoutGift::OnButtonClicked(uint32_t nId) {
	__sub_003DE690(this, nullptr, nId);
}
void CUILogoutGift::Draw(const tagRECT* pRect) {
	__sub_003DE9B0(this, nullptr, pRect);
}
int32_t CUILogoutGift::OnMouseMove(long rx, long ry) {
	return __sub_003DE830(this, nullptr, rx, ry);
}
void CUILogoutGift::OnMouseEnter(int32_t bEnter) {
	__sub_003DE090(this, nullptr, bEnter);
}
int32_t __cdecl CUILogoutGift::TryShowLogoutGiftDialog() {
	return __sub_003DEEE0();
}
int32_t CUILogoutGift::ShowItemToolTip(ZRef<CS_COMMODITY> pComm, long rx, long ry) {
	return __sub_003DE1B0(this, nullptr, CreateNakedParam(pComm), rx, ry);
}
CUILogoutGift& CUILogoutGift::operator=(const CUILogoutGift& arg0) {
	return _op_assign_12(this, arg0);
}
CUILogoutGift& CUILogoutGift::_op_assign_12(CUILogoutGift* pThis, const CUILogoutGift& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

