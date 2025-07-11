// PersonalShopDlg.cpp
#include "PersonalShopDlg.hpp"

static ZRef<CPersonalShopDlg::CPutItemDlg> FAKE_ZRef_CPersonalShopDlg_CPutItemDlg{};

#include "PersonalShopDlg_regen.ipp"

 CPersonalShopDlg::~CPersonalShopDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CPersonalShopDlg::_dtor_0() {
	return __sub_0029E870(this, nullptr);
}
 CPersonalShopDlg::CPersonalShopDlg(const CPersonalShopDlg& arg0) {
	_ctor_1( arg0);
}
void CPersonalShopDlg::_ctor_1( const CPersonalShopDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPersonalShopDlg::CPersonalShopDlg() {
	UNIMPLEMENTED; //_ctor_0();
}
void CPersonalShopDlg::_ctor_0() {
	return __sub_0029E6C0(this, nullptr);
}
void CPersonalShopDlg::OnCreate(void* paramButton) {
	__sub_0029EBA0(this, nullptr, paramButton);
}
void CPersonalShopDlg::OnButtonClicked(uint32_t nId) {
	__sub_0029C080(this, nullptr, nId);
}
void CPersonalShopDlg::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_00298AE0(this, nullptr, wParam, lParam);
}
void CPersonalShopDlg::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_0029C340(this, nullptr, msg, wParam, rx, ry);
}
int32_t CPersonalShopDlg::OnMouseMove(long rx, long ry) {
	return __sub_00298C20(this, nullptr, rx, ry);
}
void CPersonalShopDlg::OnMouseEnter(int32_t bEnter) {
	__sub_002979C0(this, nullptr, bEnter);
}
void CPersonalShopDlg::OnChildNotify(uint32_t uId, uint32_t param1, uint32_t param2) {
	__sub_002979E0(this, nullptr, uId, param1, param2);
}
void CPersonalShopDlg::SetRet(long nRet) {
	__sub_002984C0(this, nullptr, nRet);
}
void CPersonalShopDlg::Draw(const tagRECT* pRect) {
	__sub_00298D50(this, nullptr, pRect);
}
int32_t CPersonalShopDlg::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_00297A30(this, nullptr, rx, ry, ppCtrl);
}
void CPersonalShopDlg::Update() {
	__sub_0029B340(this, nullptr);
}
void CPersonalShopDlg::ClearToolTip() {
	__sub_0011D980(this, nullptr);
}
void CPersonalShopDlg::GetActionPosition(long nSlot, long& nAction, tagPOINT& pt) {
	__sub_00297A90(this, nullptr, nSlot, nAction, pt);
}
void CPersonalShopDlg::OnPacket(long nType, CInPacket& iPacket) {
	__sub_0029C820(this, nullptr, nType, iPacket);
}
void CPersonalShopDlg::OnStart() {
	__sub_0029A2C0(this, nullptr);
}
void CPersonalShopDlg::OnRefresh(CInPacket& iPacket) {
	__sub_00298050(this, nullptr, iPacket);
}
void CPersonalShopDlg::OnEnterResult(CInPacket& iPacket) {
	__sub_00299A80(this, nullptr, iPacket);
}
void CPersonalShopDlg::OnEnter(long nSlot, CInPacket& iPacket) {
	__sub_00297B10(this, nullptr, nSlot, iPacket);
}
void CPersonalShopDlg::OnLeave(long nSlot, CInPacket& iPacket) {
	__sub_00299C40(this, nullptr, nSlot, iPacket);
}
void CPersonalShopDlg::DrawCharacterName(long nSlot, ZXString<char> sID) {
	__sub_00299E90(this, nullptr, nSlot, CreateNakedParam(sID));
}
long CPersonalShopDlg::GetMoney() {
	return __sub_00297FE0(this, nullptr);
}
unsigned char CPersonalShopDlg::GetMiniRoomType() {
	return __sub_0029E850(this, nullptr);
}
void CPersonalShopDlg::OnCorrectSSN2(long nProc) {
	__sub_00298580(this, nullptr, nProc);
}
void CPersonalShopDlg::OnBuyResult(CInPacket& iPacket) {
	__sub_0029A300(this, nullptr, iPacket);
}
void CPersonalShopDlg::OnSoldItemResult(CInPacket& iPacket) {
	__sub_0029A670(this, nullptr, iPacket);
}
void CPersonalShopDlg::OnMoveItemToInventory(CInPacket& iPacket) {
	__sub_00298650(this, nullptr, iPacket);
}
void CPersonalShopDlg::DestroySoldItemDlg() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CPersonalShopDlg::IsRoomMaster() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CPersonalShopDlg::DeliverBlackList() {
	__sub_0029B0D0(this, nullptr);
}
void CPersonalShopDlg::OnClickBanButton(long nSlot) {
	__sub_0029B1C0(this, nullptr, nSlot);
}
int32_t CPersonalShopDlg::CheckCashItemInList(int32_t& bHasCashItem, long nProc) {
	return __sub_0029A110(this, nullptr, bHasCashItem, nProc);
}
int32_t CPersonalShopDlg::PutItem(ZRef<GW_ItemSlotBase> pItem, long nTI, long nPos) {
	return __sub_0029C880(this, nullptr, CreateNakedParam(pItem), nTI, nPos);
}
int32_t CPersonalShopDlg::MoveItemToInventory(long nIdx) {
	return __sub_002987A0(this, nullptr, nIdx);
}
void CPersonalShopDlg::BuyItem(long nIdx) {
	__sub_0029A7F0(this, nullptr, nIdx);
}
long CPersonalShopDlg::GetItemIndexFromPoint(long rx, long ry) {
	return __sub_00297B90(this, nullptr, rx, ry);
}
long CPersonalShopDlg::GetRectIndexFromPoint(long rx, long ry) {
	return __sub_00298240(this, nullptr, rx, ry);
}
void CPersonalShopDlg::SetScrollBar() {
	__sub_00297C20(this, nullptr);
}
CPersonalShopDlg& CPersonalShopDlg::operator=(const CPersonalShopDlg& arg0) {
	return _op_assign_43(this, arg0);
}
CPersonalShopDlg& CPersonalShopDlg::_op_assign_43(CPersonalShopDlg* pThis, const CPersonalShopDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPersonalShopDlg::CPutItemDlg::~CPutItemDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CPersonalShopDlg::CPutItemDlg::_dtor_0() {
	return __sub_0029B520(this, nullptr);
}
 CPersonalShopDlg::CPutItemDlg::CPutItemDlg(const CPersonalShopDlg::CPutItemDlg& arg0) {
	_ctor_1( arg0);
}
void CPersonalShopDlg::CPutItemDlg::_ctor_1( const CPersonalShopDlg::CPutItemDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPersonalShopDlg::CPutItemDlg::CPutItemDlg(int32_t bSet, long nNumber, int32_t bCash) {
	_ctor_0( bSet, nNumber, bCash);
}
void CPersonalShopDlg::CPutItemDlg::_ctor_0( int32_t bSet, long nNumber, int32_t bCash) {
	return __sub_0029B430(this, nullptr, bSet, nNumber, bCash);
}
void CPersonalShopDlg::CPutItemDlg::SetRet(long nRet) {
	__sub_0029CCC0(this, nullptr, nRet);
}
void CPersonalShopDlg::CPutItemDlg::OnCreate(void* pData) {
	__sub_0029CE70(this, nullptr, pData);
}
void CPersonalShopDlg::CPutItemDlg::OnChildNotify(uint32_t uId, uint32_t param1, uint32_t param2) {
	__sub_00297C90(this, nullptr, uId, param1, param2);
}
void CPersonalShopDlg::CPutItemDlg::Draw(const tagRECT* pRect) {
	__sub_00297F50(this, nullptr, pRect);
}
void CPersonalShopDlg::CPutItemDlg::GetResult(long& nCount, long& nPrice, long& nSet) {
	__sub_0029B660(this, nullptr, nCount, nPrice, nSet);
}
int32_t CPersonalShopDlg::CPutItemDlg::IsNumber(ZRef<CCtrlEdit> pEdit, long nMin, long nMax) {
	return __sub_0029B740(this, nullptr, CreateNakedParam(pEdit), nMin, nMax);
}
CPersonalShopDlg::CPutItemDlg& CPersonalShopDlg::CPutItemDlg::operator=(const CPersonalShopDlg::CPutItemDlg& arg0) {
	return _op_assign_9(this, arg0);
}
CPersonalShopDlg::CPutItemDlg& CPersonalShopDlg::CPutItemDlg::_op_assign_9(CPersonalShopDlg::CPutItemDlg* pThis, const CPersonalShopDlg::CPutItemDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPersonalShopDlg::CSoldItemDlg::~CSoldItemDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CPersonalShopDlg::CSoldItemDlg::_dtor_0() {
	return __sub_0029BC10(this, nullptr);
}
 CPersonalShopDlg::CSoldItemDlg::CSoldItemDlg(const CPersonalShopDlg::CSoldItemDlg& arg0) {
	_ctor_1( arg0);
}
void CPersonalShopDlg::CSoldItemDlg::_ctor_1( const CPersonalShopDlg::CSoldItemDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPersonalShopDlg::CSoldItemDlg::CSoldItemDlg(CPersonalShopDlg* pDlg) {
	_ctor_0( pDlg);
}
void CPersonalShopDlg::CSoldItemDlg::_ctor_0( CPersonalShopDlg* pDlg) {
	return __sub_0029BB50(this, nullptr, pDlg);
}
void CPersonalShopDlg::CSoldItemDlg::OnCreate(void* pData) {
	__sub_0029BD00(this, nullptr, pData);
}
void CPersonalShopDlg::CSoldItemDlg::OnChildNotify(uint32_t uId, uint32_t param1, uint32_t param2) {
	__sub_00297AD0(this, nullptr, uId, param1, param2);
}
void CPersonalShopDlg::CSoldItemDlg::Draw(const tagRECT* pRect) {
	__sub_0029D430(this, nullptr, pRect);
}
void CPersonalShopDlg::CSoldItemDlg::SetRet(long nRet) {
	__sub_00298200(this, nullptr, nRet);
}
void CPersonalShopDlg::CSoldItemDlg::SetScrollBar() {
	__sub_00297DC0(this, nullptr);
}
CPersonalShopDlg::CSoldItemDlg& CPersonalShopDlg::CSoldItemDlg::operator=(const CPersonalShopDlg::CSoldItemDlg& arg0) {
	return _op_assign_8(this, arg0);
}
CPersonalShopDlg::CSoldItemDlg& CPersonalShopDlg::CSoldItemDlg::_op_assign_8(CPersonalShopDlg::CSoldItemDlg* pThis, const CPersonalShopDlg::CSoldItemDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPersonalShopDlg::ITEM::~ITEM() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CPersonalShopDlg::ITEM::_dtor_0() {
	return __sub_002981C0(this, nullptr);
}
 CPersonalShopDlg::ITEM::ITEM(const CPersonalShopDlg::ITEM& arg0) {
	_ctor_1( arg0);
}
void CPersonalShopDlg::ITEM::_ctor_1( const CPersonalShopDlg::ITEM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPersonalShopDlg::ITEM::ITEM() {
	UNIMPLEMENTED; //_ctor_0();
}
void CPersonalShopDlg::ITEM::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CPersonalShopDlg::ITEM& CPersonalShopDlg::ITEM::operator=(const CPersonalShopDlg::ITEM& arg0) {
	return _op_assign_3(this, arg0);
}
CPersonalShopDlg::ITEM& CPersonalShopDlg::ITEM::_op_assign_3(CPersonalShopDlg::ITEM* pThis, const CPersonalShopDlg::ITEM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPersonalShopDlg::SOLD_ITEM::~SOLD_ITEM() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CPersonalShopDlg::SOLD_ITEM::_dtor_0() {
	return __sub_0011D730(this, nullptr);
}
 CPersonalShopDlg::SOLD_ITEM::SOLD_ITEM(const CPersonalShopDlg::SOLD_ITEM& arg0) {
	_ctor_1( arg0);
}
void CPersonalShopDlg::SOLD_ITEM::_ctor_1( const CPersonalShopDlg::SOLD_ITEM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPersonalShopDlg::SOLD_ITEM::SOLD_ITEM() {
	UNIMPLEMENTED; //_ctor_0();
}
void CPersonalShopDlg::SOLD_ITEM::_ctor_0() {
	return __sub_0011D890(this, nullptr);
}
CPersonalShopDlg::SOLD_ITEM& CPersonalShopDlg::SOLD_ITEM::operator=(CPersonalShopDlg::SOLD_ITEM& arg0) {
	return _op_assign_3(this, arg0);
}
CPersonalShopDlg::SOLD_ITEM& CPersonalShopDlg::SOLD_ITEM::_op_assign_3(CPersonalShopDlg::SOLD_ITEM* pThis, CPersonalShopDlg::SOLD_ITEM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

