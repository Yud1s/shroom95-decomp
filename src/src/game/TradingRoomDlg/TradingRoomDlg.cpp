// TradingRoomDlg.cpp
#include "TradingRoomDlg.hpp"

static ZArray<ZPair<long, unsigned long>> FAKE_ZArray_ZPair_long_unsigned_long{};

#include "TradingRoomDlg_regen.ipp"

 CTradingRoomDlg::~CTradingRoomDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CTradingRoomDlg::_dtor_0() {
	return __sub_00366290(this, nullptr);
}
 CTradingRoomDlg::CTradingRoomDlg(const CTradingRoomDlg& arg0) {
	_ctor_1( arg0);
}
void CTradingRoomDlg::_ctor_1( const CTradingRoomDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CTradingRoomDlg::CTradingRoomDlg() {
	UNIMPLEMENTED; //_ctor_0();
}
void CTradingRoomDlg::_ctor_0() {
	return __sub_00366120(this, nullptr);
}
void CTradingRoomDlg::SetRet(long nRet) {
	__sub_003639A0(this, nullptr, nRet);
}
void CTradingRoomDlg::OnCreate(void* pData) {
	__sub_00365AB0(this, nullptr, pData);
}
int32_t CTradingRoomDlg::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_00363730(this, nullptr, rx, ry, ppCtrl);
}
void CTradingRoomDlg::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_00364E00(this, nullptr, wParam, lParam);
}
int32_t CTradingRoomDlg::OnMouseMove(long rx, long ry) {
	return __sub_003638B0(this, nullptr, rx, ry);
}
void CTradingRoomDlg::OnMouseEnter(int32_t bEnter) {
	__sub_003637B0(this, nullptr, bEnter);
}
void CTradingRoomDlg::OnButtonClicked(uint32_t uId) {
	__sub_00364C80(this, nullptr, uId);
}
void CTradingRoomDlg::Draw(const tagRECT* pRect) {
	__sub_00364F20(this, nullptr, pRect);
}
void CTradingRoomDlg::GetActionPosition(long nSlot, long& nAction, tagPOINT& pt) {
	__sub_003636E0(this, nullptr, nSlot, nAction, pt);
}
void CTradingRoomDlg::OnPacket(long nType, CInPacket& iPacket) {
	__sub_003649A0(this, nullptr, nType, iPacket);
}
void CTradingRoomDlg::OnEnter(long nSlot, CInPacket& iPacket) {
	__sub_00363720(this, nullptr, nSlot, iPacket);
}
void CTradingRoomDlg::OnLeave(long nSlot, CInPacket& iPacket) {
	__sub_00364A10(this, nullptr, nSlot, iPacket);
}
void CTradingRoomDlg::OnPutItem(CInPacket& iPacket) {
	__sub_00363A60(this, nullptr, iPacket);
}
void CTradingRoomDlg::OnPutMoney(CInPacket& iPacket) {
	__sub_00363950(this, nullptr, iPacket);
}
void CTradingRoomDlg::OnTrade(CInPacket& iPacket) {
	__sub_00363F20(this, nullptr, iPacket);
}
void CTradingRoomDlg::OnExceedLimit(CInPacket& iPacket) {
	__sub_00364160(this, nullptr, iPacket);
}
int32_t CTradingRoomDlg::PutItem(ZRef<GW_ItemSlotBase> pItem, long nItemTI, long nSlotPosition, long x, long y) {
	return __sub_003641D0(this, nullptr, CreateNakedParam(pItem), nItemTI, nSlotPosition, x, y);
}
void CTradingRoomDlg::PutMoney() {
	__sub_00364450(this, nullptr);
}
void CTradingRoomDlg::Trade() {
	__sub_003646B0(this, nullptr);
}
void CTradingRoomDlg::DrawItems(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_00363BB0(this, nullptr, CreateNakedParam(pCanvas));
}
long CTradingRoomDlg::GetItemIndexFromPoint(long rx, long ry) {
	return __sub_003637D0(this, nullptr, rx, ry);
}
long CTradingRoomDlg::GetRectIndexFromPoint(long rx, long ry) {
	return __sub_003637D0(this, nullptr, rx, ry);
}
CTradingRoomDlg& CTradingRoomDlg::operator=(const CTradingRoomDlg& arg0) {
	return _op_assign_28(this, arg0);
}
CTradingRoomDlg& CTradingRoomDlg::_op_assign_28(CTradingRoomDlg* pThis, const CTradingRoomDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CTradingRoomDlg::ITEM::~ITEM() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CTradingRoomDlg::ITEM::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CTradingRoomDlg::ITEM::ITEM(const CTradingRoomDlg::ITEM& arg0) {
	_ctor_1( arg0);
}
void CTradingRoomDlg::ITEM::_ctor_1( const CTradingRoomDlg::ITEM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CTradingRoomDlg::ITEM::ITEM() {
	UNIMPLEMENTED; //_ctor_0();
}
void CTradingRoomDlg::ITEM::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CTradingRoomDlg::ITEM& CTradingRoomDlg::ITEM::operator=(const CTradingRoomDlg::ITEM& arg0) {
	return _op_assign_3(this, arg0);
}
CTradingRoomDlg::ITEM& CTradingRoomDlg::ITEM::_op_assign_3(CTradingRoomDlg::ITEM* pThis, const CTradingRoomDlg::ITEM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

