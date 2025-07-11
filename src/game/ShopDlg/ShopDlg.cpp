// ShopDlg.cpp
#include "ShopDlg.hpp"
#include "ShopDlg_regen.ipp"

 CShopDlg::~CShopDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CShopDlg::_dtor_0() {
	return __sub_002EA860(this, nullptr);
}
 CShopDlg::CShopDlg(const CShopDlg& arg0) {
	_ctor_1( arg0);
}
void CShopDlg::_ctor_1( const CShopDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CShopDlg::CShopDlg() {
	UNIMPLEMENTED; //_ctor_0();
}
void CShopDlg::_ctor_0() {
	return __sub_002EA6E0(this, nullptr);
}
void CShopDlg::SetShopDlg(CInPacket& arg0) {
	__sub_002EAB00(this, nullptr, arg0);
}
void CShopDlg::SetRet(long nRet) {
	__sub_002E4B80(this, nullptr, nRet);
}
void CShopDlg::ResetInfo() {
	__sub_002EB620(this, nullptr);
}
void CShopDlg::OnCreate(void* arg0) {
	__sub_002E7540(this, nullptr, arg0);
}
int32_t CShopDlg::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_002E38E0(this, nullptr, rx, ry, ppCtrl);
}
void CShopDlg::Draw(const tagRECT* pRect) {
	__sub_002E9610(this, nullptr, pRect);
}
void CShopDlg::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_002EB6F0(this, nullptr, msg, wParam, rx, ry);
}
int32_t CShopDlg::OnMouseMove(long rx, long ry) {
	return __sub_002E4C40(this, nullptr, rx, ry);
}
void CShopDlg::OnMouseEnter(int32_t bEnter) {
	__sub_002E3930(this, nullptr, bEnter);
}
void CShopDlg::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_002E3950(this, nullptr, wParam, lParam);
}
void CShopDlg::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_002E3A30(this, nullptr, nId, param1, param2);
}
void CShopDlg::OnButtonClicked(uint32_t nId) {
	__sub_002EB650(this, nullptr, nId);
}
void CShopDlg::ClearToolTip() {
	__sub_002EA800(this, nullptr);
}
void CShopDlg::OnTabChanged(long nTab) {
	__sub_002E3920(this, nullptr, nTab);
}
void CShopDlg::SetSellItems(long nTI, ZArray<CShopDlg::ITEM>& aItem) {
	__sub_002E9790(this, nullptr, nTI, aItem);
}
void CShopDlg::SetScrollBar() {
	__sub_002E3B60(this, nullptr);
}
void CShopDlg::SetAvatar() {
	__sub_002E5580(this, nullptr);
}
void CShopDlg::SetNPC() {
	__sub_002E3EC0(this, nullptr);
}
void CShopDlg::Update() {
	__sub_002E3A20(this, nullptr);
}
void CShopDlg::DrawBuyItem(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_002E8600(this, nullptr, CreateNakedParam(pCanvas));
}
void CShopDlg::DrawSellItem(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_002E56F0(this, nullptr, CreateNakedParam(pCanvas));
}
void CShopDlg::DrawMoney(_x_com_ptr<IWzCanvas> pCanvas, long nMoney) {
	__sub_002E6FE0(this, nullptr, CreateNakedParam(pCanvas), nMoney);
}
int32_t CShopDlg::GetItemIndexFromPoint(long rx, long ry, int32_t* pbBuy, long* pnIdx) {
	return __sub_002E3C00(this, nullptr, rx, ry, pbBuy, pnIdx);
}
void CShopDlg::SendBuyRequest() {
	__sub_002E9BB0(this, nullptr);
}
void CShopDlg::SendSellRequest() {
	__sub_002E7260(this, nullptr);
}
void CShopDlg::SendRechargeRequest() {
	__sub_002E4E90(this, nullptr);
}
long CShopDlg::AskItemCount(const char* sMsg, long nDefault, long nMax) {
	return __sub_002E5220(this, nullptr, sMsg, nDefault, nMax);
}
long CShopDlg::CmpSellItem() {
	return __sub_002E5050(this, nullptr);
}
ZArray<CShopDlg::ITEM>& CShopDlg::GetCurBuyItem() {
	return __sub_002E3A00(this, nullptr);
}
long CShopDlg::GetDiscountPrice(long nPrice, long nItemID) {
	return __sub_002E5120(this, nullptr, nPrice, nItemID);
}
long CShopDlg::GetDiscountPriceByItem(long nPrice, long nItemID) {
	return __sub_002E3AC0(this, nullptr, nPrice, nItemID);
}
long CShopDlg::GetDiscountPriceByGuildSkill(long nPrice) {
	return __sub_002E47B0(this, nullptr, nPrice);
}
long CShopDlg::GetOverchargePrice(long nPrice) {
	return __sub_002E4960(this, nullptr, nPrice);
}
long CShopDlg::GetDiscountPriceByRate(long nPrice, long nDiscountRate) {
	return __sub_002E3980(this, nullptr, nPrice, nDiscountRate);
}
void __cdecl CShopDlg::OnPacket(long nType, CInPacket& iPacket) {
	__sub_002EB7D0(nType, iPacket);
}
CShopDlg& CShopDlg::operator=(const CShopDlg& arg0) {
	return _op_assign_41(this, arg0);
}
CShopDlg& CShopDlg::_op_assign_41(CShopDlg* pThis, const CShopDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CShopDlg::ITEM::~ITEM() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CShopDlg::ITEM::_dtor_0() {
	return __sub_002E53F0(this, nullptr);
}
 CShopDlg::ITEM::ITEM(const CShopDlg::ITEM& arg0) {
	_ctor_1( arg0);
}
void CShopDlg::ITEM::_ctor_1( const CShopDlg::ITEM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CShopDlg::ITEM::ITEM() {
	UNIMPLEMENTED; //_ctor_0();
}
void CShopDlg::ITEM::_ctor_0() {
	return __sub_002E5390(this, nullptr);
}
CShopDlg::ITEM& CShopDlg::ITEM::operator=(CShopDlg::ITEM& __that) {
	return _op_assign_3(this, __that);
}
CShopDlg::ITEM& CShopDlg::ITEM::_op_assign_3(CShopDlg::ITEM* pThis, CShopDlg::ITEM& __that) {
	return __sub_002E54B0(pThis, nullptr, __that);
}

