// WeddingWishListDlg.cpp
#include "WeddingWishListDlg.hpp"
#include "WeddingWishListDlg_regen.ipp"

 CWishListInputDlg::~CWishListInputDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CWishListInputDlg::_dtor_0() {
	return __sub_005A6C40(this, nullptr);
}
 CWishListInputDlg::CWishListInputDlg(const CWishListInputDlg& arg0) {
	_ctor_1( arg0);
}
void CWishListInputDlg::_ctor_1( const CWishListInputDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CWishListInputDlg::CWishListInputDlg() {
	UNIMPLEMENTED; //_ctor_0();
}
void CWishListInputDlg::_ctor_0() {
	return __sub_005A8FE0(this, nullptr);
}
void CWishListInputDlg::OnCreate(void* pData) {
	__sub_005A91F0(this, nullptr, pData);
}
void CWishListInputDlg::Draw(const tagRECT* pRect) {
	__sub_005A73C0(this, nullptr, pRect);
}
void CWishListInputDlg::OnButtonClicked(uint32_t nId) {
	__sub_005AB680(this, nullptr, nId);
}
void CWishListInputDlg::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_005A6A50(this, nullptr, msg, wParam, rx, ry);
}
void CWishListInputDlg::Update() {
	__sub_005A6190(this, nullptr);
}
void CWishListInputDlg::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_005A60F0(this, nullptr, nId, param1, param2);
}
int32_t CWishListInputDlg::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_005A60B0(this, nullptr, rx, ry, ppCtrl);
}
void CWishListInputDlg::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_005A9920(this, nullptr, wParam, lParam);
}
void CWishListInputDlg::OnEnter() {
	__sub_005A7840(this, nullptr);
}
void CWishListInputDlg::OnDelete() {
	__sub_005A9950(this, nullptr);
}
void CWishListInputDlg::OnOK() {
	__sub_005A6F80(this, nullptr);
}
int32_t CWishListInputDlg::GetIndexFromPoint(long rx, long ry) {
	return __sub_005A6340(this, nullptr, rx, ry);
}
CWishListInputDlg& CWishListInputDlg::operator=(const CWishListInputDlg& arg0) {
	return _op_assign_15(this, arg0);
}
CWishListInputDlg& CWishListInputDlg::_op_assign_15(CWishListInputDlg* pThis, const CWishListInputDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CWeddingWishListDlg::~CWeddingWishListDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CWeddingWishListDlg::_dtor_0() {
	return __sub_005ABDA0(this, nullptr);
}
 CWeddingWishListDlg::CWeddingWishListDlg(const CWeddingWishListDlg& arg0) {
	_ctor_1( arg0);
}
void CWeddingWishListDlg::_ctor_1( const CWeddingWishListDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CWeddingWishListDlg::CWeddingWishListDlg() {
	UNIMPLEMENTED; //_ctor_0();
}
void CWeddingWishListDlg::_ctor_0() {
	return __sub_005ABBB0(this, nullptr);
}
void CWeddingWishListDlg::SetWeddingWishListDlg(CInPacket& iPacket) {
	__sub_005ABC90(this, nullptr, iPacket);
}
void CWeddingWishListDlg::SetRet(long nRet) {
	__sub_005ABCA0(this, nullptr, nRet);
}
void CWeddingWishListDlg::ResetInfo() {
	__sub_005ABF90(this, nullptr);
}
void CWeddingWishListDlg::OnCreate(void* pData) {
	__sub_005ABCB0(this, nullptr, pData);
}
int32_t CWeddingWishListDlg::HitTest(long rx, long ry, CCtrlWnd** ppCtrl) {
	return __sub_005A6120(this, nullptr, rx, ry, ppCtrl);
}
void CWeddingWishListDlg::Draw(const tagRECT* pRect) {
	__sub_005A6B40(this, nullptr, pRect);
}
void CWeddingWishListDlg::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_005ABCC0(this, nullptr, msg, wParam, rx, ry);
}
int32_t CWeddingWishListDlg::OnMouseMove(long rx, long ry) {
	return __sub_005A6260(this, nullptr, rx, ry);
}
void CWeddingWishListDlg::OnMouseEnter(int32_t bEnter) {
	__sub_005A6170(this, nullptr, bEnter);
}
void CWeddingWishListDlg::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_005A6200(this, nullptr, nId, param1, param2);
}
void CWeddingWishListDlg::OnButtonClicked(uint32_t uId) {
	__sub_005ABCD0(this, nullptr, uId);
}
void CWeddingWishListDlg::ClearToolTip() {
	__sub_005ABCE0(this, nullptr);
}
void CWeddingWishListDlg::OnTabChanged(long nTab) {
	__sub_005A6160(this, nullptr, nTab);
}
void CWeddingWishListDlg::SetPutItems(long nTI, ZArray<CWeddingWishListDlg::ITEM>& aItem) {
	__sub_005AB700(this, nullptr, nTI, aItem);
}
void CWeddingWishListDlg::SetScrollBar() {
	__sub_005ABCF0(this, nullptr);
}
void CWeddingWishListDlg::DrawGetItem(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_005ABD60(this, nullptr, CreateNakedParam(pCanvas));
}
void CWeddingWishListDlg::DrawPutItem(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_005ABD80(this, nullptr, CreateNakedParam(pCanvas));
}
int32_t CWeddingWishListDlg::GetItemIndexFromPoint(long rx, long ry, int32_t* pbBuy, long* pnIdx) {
	return __sub_005ABD00(this, nullptr, rx, ry, pbBuy, pnIdx);
}
long CWeddingWishListDlg::AskItemCount(const char* sMsg, long nDefault, long nMax) {
	return __sub_005A6FE0(this, nullptr, sMsg, nDefault, nMax);
}
long CWeddingWishListDlg::CmpPutItem() {
	return __sub_005A6430(this, nullptr);
}
void __cdecl CWeddingWishListDlg::OnPacket(long arg0, CInPacket& arg1) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CWeddingWishListDlg& CWeddingWishListDlg::operator=(const CWeddingWishListDlg& arg0) {
	return _op_assign_27(this, arg0);
}
CWeddingWishListDlg& CWeddingWishListDlg::_op_assign_27(CWeddingWishListDlg* pThis, const CWeddingWishListDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CWeddingWishListDlg::ITEM::~ITEM() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CWeddingWishListDlg::ITEM::_dtor_0() {
	return __sub_005A7990(this, nullptr);
}
 CWeddingWishListDlg::ITEM::ITEM(const CWeddingWishListDlg::ITEM& arg0) {
	_ctor_1( arg0);
}
void CWeddingWishListDlg::ITEM::_ctor_1( const CWeddingWishListDlg::ITEM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CWeddingWishListDlg::ITEM::ITEM() {
	UNIMPLEMENTED; //_ctor_0();
}
void CWeddingWishListDlg::ITEM::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CWeddingWishListDlg::ITEM& CWeddingWishListDlg::ITEM::operator=(const CWeddingWishListDlg::ITEM& __that) {
	return _op_assign_3(this, __that);
}
CWeddingWishListDlg::ITEM& CWeddingWishListDlg::ITEM::_op_assign_3(CWeddingWishListDlg::ITEM* pThis, const CWeddingWishListDlg::ITEM& __that) {
	return __sub_005A8F30(pThis, nullptr, __that);
}
 CWishListGiveDlg::~CWishListGiveDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CWishListGiveDlg::_dtor_0() {
	return __sub_005AC1A0(this, nullptr);
}
 CWishListGiveDlg::CWishListGiveDlg(const CWishListGiveDlg& arg0) {
	_ctor_1( arg0);
}
void CWishListGiveDlg::_ctor_1( const CWishListGiveDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CWishListGiveDlg::CWishListGiveDlg() {
	UNIMPLEMENTED; //_ctor_0();
}
void CWishListGiveDlg::_ctor_0() {
	return __sub_005ABFC0(this, nullptr);
}
void CWishListGiveDlg::SetWeddingWishListDlg(CInPacket& iPacket) {
	__sub_005ABA10(this, nullptr, iPacket);
}
void CWishListGiveDlg::SetRet(long nRet) {
	__sub_005A6DE0(this, nullptr, nRet);
}
void CWishListGiveDlg::SetGetItems(CInPacket& iPacket) {
	__sub_005AC280(this, nullptr, iPacket);
}
void CWishListGiveDlg::OnCreate(void* arg0) {
	__sub_005A9A50(this, nullptr, arg0);
}
void CWishListGiveDlg::Draw(const tagRECT* pRect) {
	__sub_005AA830(this, nullptr, pRect);
}
void CWishListGiveDlg::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_005A7A30(this, nullptr, msg, wParam, rx, ry);
}
void CWishListGiveDlg::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_005A6300(this, nullptr, nId, param1, param2);
}
void CWishListGiveDlg::OnButtonClicked(uint32_t nId) {
	__sub_005A7B00(this, nullptr, nId);
}
void CWishListGiveDlg::SetWishList(CInPacket& iPacket) {
	__sub_005A7B50(this, nullptr, iPacket);
}
void CWishListGiveDlg::SetScrollBar() {
	__sub_005A64C0(this, nullptr);
}
void CWishListGiveDlg::DrawGetItem(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_005A7C00(this, nullptr, CreateNakedParam(pCanvas));
}
void CWishListGiveDlg::DrawPutItem(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_005A8260(this, nullptr, CreateNakedParam(pCanvas));
}
void CWishListGiveDlg::DrawWishList(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_005A8030(this, nullptr, CreateNakedParam(pCanvas));
}
int32_t CWishListGiveDlg::GetItemIndexFromPoint(long rx, long ry, int32_t* pbBuy, long* pnIdx) {
	return __sub_005A6570(this, nullptr, rx, ry, pbBuy, pnIdx);
}
void CWishListGiveDlg::SendPutItemRequest() {
	__sub_005A7140(this, nullptr);
}
void __cdecl CWishListGiveDlg::OnPacket(long nType, CInPacket& iPacket) {
	__sub_005AC660(nType, iPacket);
}
CWishListGiveDlg& CWishListGiveDlg::operator=(const CWishListGiveDlg& arg0) {
	return _op_assign_22(this, arg0);
}
CWishListGiveDlg& CWishListGiveDlg::_op_assign_22(CWishListGiveDlg* pThis, const CWishListGiveDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CWishListRecvDlg::~CWishListRecvDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CWishListRecvDlg::_dtor_0() {
	return __sub_005ACAA0(this, nullptr);
}
 CWishListRecvDlg::CWishListRecvDlg(const CWishListRecvDlg& arg0) {
	_ctor_1( arg0);
}
void CWishListRecvDlg::_ctor_1( const CWishListRecvDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CWishListRecvDlg::CWishListRecvDlg() {
	UNIMPLEMENTED; //_ctor_0();
}
void CWishListRecvDlg::_ctor_0() {
	return __sub_005AC8C0(this, nullptr);
}
void CWishListRecvDlg::SetWeddingWishListDlg(CInPacket& iPacket) {
	__sub_005AD310(this, nullptr, iPacket);
}
void CWishListRecvDlg::SetRet(long nRet) {
	__sub_005A6EA0(this, nullptr, nRet);
}
void CWishListRecvDlg::OnCreate(void* arg0) {
	__sub_005AA8C0(this, nullptr, arg0);
}
void CWishListRecvDlg::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_005ACF30(this, nullptr, msg, wParam, rx, ry);
}
void CWishListRecvDlg::OnButtonClicked(uint32_t nId) {
	__sub_005AD000(this, nullptr, nId);
}
void CWishListRecvDlg::SetGetItems(CInPacket& iPacket) {
	__sub_005ACB50(this, nullptr, iPacket);
}
void CWishListRecvDlg::SetScrollBar() {
	__sub_005A67A0(this, nullptr);
}
void CWishListRecvDlg::DrawGetItem(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_005A86B0(this, nullptr, CreateNakedParam(pCanvas));
}
void CWishListRecvDlg::DrawPutItem(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_005A8AE0(this, nullptr, CreateNakedParam(pCanvas));
}
int32_t CWishListRecvDlg::GetItemIndexFromPoint(long rx, long ry, int32_t* pbBuy, long* pnIdx) {
	return __sub_005A6820(this, nullptr, rx, ry, pbBuy, pnIdx);
}
void CWishListRecvDlg::SendGetItemRequest() {
	__sub_005ABA50(this, nullptr);
}
void __cdecl CWishListRecvDlg::OnPacket(long nType, CInPacket& iPacket) {
	__sub_005AD050(nType, iPacket);
}
CWishListRecvDlg& CWishListRecvDlg::operator=(const CWishListRecvDlg& arg0) {
	return _op_assign_18(this, arg0);
}
CWishListRecvDlg& CWishListRecvDlg::_op_assign_18(CWishListRecvDlg* pThis, const CWishListRecvDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

