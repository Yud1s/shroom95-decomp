// AdminShopDlg.cpp
#include "AdminShopDlg.hpp"

static ZRef<CAdminShopDlg::AdminShopCommodity> FAKE_ZRef_CAdminShopDlg_AdminShopCommodity{};
static ZRefCounted_AllocHelper<CAdminShopDlg::AdminShopCommodity> FAKE_ZRefCounted_AllocHelper_CAdminShopDlg_AdminShopCommodity{};

#include "AdminShopDlg_regen.ipp"
 CAdminShopDlg::~CAdminShopDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CAdminShopDlg::_dtor_0() {
	return __sub_0002D640(this, nullptr);
}
 CAdminShopDlg::CAdminShopDlg(const CAdminShopDlg& arg0) {
	_ctor_1( arg0);
}
void CAdminShopDlg::_ctor_1( const CAdminShopDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CAdminShopDlg::CAdminShopDlg() {
	UNIMPLEMENTED; //_ctor_0();
}
void CAdminShopDlg::_ctor_0() {
	return __sub_0002D4D0(this, nullptr);
}
void __cdecl CAdminShopDlg::OnPacket(long nType, CInPacket& iPacket) {
	__sub_000310F0(nType, iPacket);
}
void CAdminShopDlg::SetAdminShopDlg(CInPacket& iPacket, unsigned long dwNpcTemplateID, long nCommodityCount) {
	__sub_000307C0(this, nullptr, iPacket, dwNpcTemplateID, nCommodityCount);
}
void CAdminShopDlg::SetRet(long nRet) {
	__sub_0002CA60(this, nullptr, nRet);
}
void CAdminShopDlg::ResetInfo() {
	__sub_00030E50(this, nullptr);
}
void CAdminShopDlg::OnCreate(void* arg0) {
	__sub_0002ECD0(this, nullptr, arg0);
}
void CAdminShopDlg::Draw(const tagRECT* pRect) {
	__sub_0002FDF0(this, nullptr, pRect);
}
int32_t CAdminShopDlg::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_00029710(this, nullptr, rx, ry, ppCtrl);
}
int32_t CAdminShopDlg::OnMouseMove(long rx, long ry) {
	return __sub_0002CB40(this, nullptr, rx, ry);
}
void CAdminShopDlg::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_00030E80(this, nullptr, msg, wParam, rx, ry);
}
void CAdminShopDlg::OnMouseEnter(int32_t bEnter) {
	__sub_00029750(this, nullptr, bEnter);
}
void CAdminShopDlg::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_00029770(this, nullptr, wParam, lParam);
}
void CAdminShopDlg::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_00029C30(this, nullptr, nId, param1, param2);
}
void CAdminShopDlg::OnButtonClicked(uint32_t nId) {
	__sub_00030F90(this, nullptr, nId);
}
void CAdminShopDlg::ClearToolTip() {
	__sub_0002D5E0(this, nullptr);
}
void CAdminShopDlg::OnTabChanged(long nTab) {
	__sub_000297A0(this, nullptr, nTab);
}
void CAdminShopDlg::SetUserItems(long nTI, ZArray<ZRef<CAdminShopDlg::AdminShopCommodity> >& aCommodity) {
	__sub_0002FF20(this, nullptr, nTI, aCommodity);
}
void CAdminShopDlg::SetScrollBar() {
	__sub_0002A4D0(this, nullptr);
}
void CAdminShopDlg::SetAvatar() {
	__sub_0002DB20(this, nullptr);
}
void CAdminShopDlg::SetNPC() {
	__sub_0002BB10(this, nullptr);
}
void CAdminShopDlg::Update() {
	__sub_00029CC0(this, nullptr);
}
void CAdminShopDlg::DrawNPCItem(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_0002DC90(this, nullptr, CreateNakedParam(pCanvas));
}
void CAdminShopDlg::DrawUserItem(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_0002E3C0(this, nullptr, CreateNakedParam(pCanvas));
}
void CAdminShopDlg::DrawMoney(_x_com_ptr<IWzCanvas> pCanvas, long nMoney) {
	__sub_0002E9F0(this, nullptr, CreateNakedParam(pCanvas), nMoney);
}
int32_t CAdminShopDlg::GetItemIndexFromPoint(long rx, long ry, int32_t* pbNPC, long* pnIdx) {
	return __sub_0002A580(this, nullptr, rx, ry, pbNPC, pnIdx);
}
ZArray<ZRef<CAdminShopDlg::AdminShopCommodity> >& CAdminShopDlg::GetCurNPCItem() {
	return __sub_00029B60(this, nullptr);
}
long CAdminShopDlg::AskItemCount(const char* sMsg, long nDefault, long nMax) {
	return __sub_0002D310(this, nullptr, sMsg, nDefault, nMax);
}
long CAdminShopDlg::CmpSellItem() {
	return __sub_0002CDB0(this, nullptr);
}
void CAdminShopDlg::SendTradeRequest() {
	__sub_00030220(this, nullptr);
}
CAdminShopDlg& CAdminShopDlg::operator=(const CAdminShopDlg& arg0) {
	return _op_assign_34(this, arg0);
}
CAdminShopDlg& CAdminShopDlg::_op_assign_34(CAdminShopDlg* pThis, const CAdminShopDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CAdminShopDlg::AdminShopCommodity::~AdminShopCommodity() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CAdminShopDlg::AdminShopCommodity::_dtor_0() {
	return __sub_0002C6B0(this, nullptr);
}
 CAdminShopDlg::AdminShopCommodity::AdminShopCommodity(const CAdminShopDlg::AdminShopCommodity& arg0) {
	_ctor_1( arg0);
}
void CAdminShopDlg::AdminShopCommodity::_ctor_1( const CAdminShopDlg::AdminShopCommodity& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CAdminShopDlg::AdminShopCommodity::AdminShopCommodity() {
	UNIMPLEMENTED; //_ctor_0();
}
void CAdminShopDlg::AdminShopCommodity::_ctor_0() {
	return __sub_0002C5B0(this, nullptr);
}
CAdminShopDlg::AdminShopCommodity& CAdminShopDlg::AdminShopCommodity::operator=(CAdminShopDlg::AdminShopCommodity& __that) {
	return _op_assign_3(this, __that);
}
CAdminShopDlg::AdminShopCommodity& CAdminShopDlg::AdminShopCommodity::_op_assign_3(CAdminShopDlg::AdminShopCommodity* pThis, CAdminShopDlg::AdminShopCommodity& __that) {
	return __sub_0002D250(pThis, nullptr, __that);
}

long __cdecl make_act_dir(long a, int32_t bLeft) {
	return ((a * 2) | (bLeft & 1));
}

GW_ItemSlotEquip* __cdecl rc_equip(GW_ItemSlotBase* p) {
	return (GW_ItemSlotEquip *)p;
}
