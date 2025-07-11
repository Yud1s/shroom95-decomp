// ITCWnd.cpp
#include "ITCWnd.hpp"

static ZRef<CUserPreview> FAKE_CUserPreview{};

#include "ITCWnd_regen.ipp"

int32_t CITCWnd_Inventory::ms_anItemScrollPos[5]{};

CITCWnd_SALE::~CITCWnd_SALE()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CITCWnd_SALE::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CITCWnd_SALE::CITCWnd_SALE(const CITCWnd_SALE& arg0) {
	_ctor_1( arg0);
}
void CITCWnd_SALE::_ctor_1( const CITCWnd_SALE& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CITCWnd_SALE::CITCWnd_SALE() {
	UNIMPLEMENTED; //_ctor_0();
}
void CITCWnd_SALE::_ctor_0() {
	return __sub_00171FF0(this, nullptr);
}
void CITCWnd_SALE::OnCreate(void* pData) {
	__sub_00182710(this, nullptr, pData);
}
void CITCWnd_SALE::OnDestroy() {
	__sub_0017FE20(this, nullptr);
}
void CITCWnd_SALE::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_0017FE30(this, nullptr, nId, param1, param2);
}
void CITCWnd_SALE::OnButtonClicked(uint32_t nId) {
	__sub_00180050(this, nullptr, nId);
}
int32_t CITCWnd_SALE::OnMouseMove(long rx, long ry) {
	return __sub_001810C0(this, nullptr, rx, ry);
}
void CITCWnd_SALE::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_00180650(this, nullptr, msg, wParam, rx, ry);
}
void CITCWnd_SALE::OnMouseEnter(int32_t bEnter) {
	__sub_0017FE80(this, nullptr, bEnter);
}
void CITCWnd_SALE::Draw(const tagRECT* pRect) {
	__sub_00180D70(this, nullptr, pRect);
}
int32_t CITCWnd_SALE::OnSetFocus(int32_t bFocus) {
	return __sub_00172090(this, nullptr, bFocus);
}
void CITCWnd_SALE::ClearToolTip() {
	__sub_001720A0(this, nullptr);
}
void CITCWnd_SALE::SetSelectedNo(int32_t arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CITCWnd_SALE::GetWndSaleIndex(long rx, long ry) {
	return __sub_00180130(this, nullptr, rx, ry);
}
tagRECT CITCWnd_SALE::GetWndSaleRect(long nIndex) {
	tagRECT rect;
	return *__sub_001800A0(this, nullptr, &rect, nIndex);
}
void CITCWnd_SALE::ResetScrollBar() {
	__sub_001801B0(this, nullptr);
}
CITCWnd_SALE& CITCWnd_SALE::operator=(const CITCWnd_SALE& arg0) {
	return _op_assign_17(this, arg0);
}
CITCWnd_SALE& CITCWnd_SALE::_op_assign_17(CITCWnd_SALE* pThis, const CITCWnd_SALE& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CITCWnd_Char::~CITCWnd_Char() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CITCWnd_Char::_dtor_0() {
	return __sub_001803F0(this, nullptr);
}
 CITCWnd_Char::CITCWnd_Char(const CITCWnd_Char& arg0) {
	_ctor_1( arg0);
}
void CITCWnd_Char::_ctor_1( const CITCWnd_Char& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CITCWnd_Char::CITCWnd_Char() {
	UNIMPLEMENTED; //_ctor_0();
}
void CITCWnd_Char::_ctor_0() {
	return __sub_00180320(this, nullptr);
}
void CITCWnd_Char::OnCreate(void* pData) {
	__sub_00183850(this, nullptr, pData);
}
void CITCWnd_Char::OnDestroy() {
	__sub_001805E0(this, nullptr);
}
void CITCWnd_Char::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_0017FE00(this, nullptr, nId, param1, param2);
}
void CITCWnd_Char::Draw(const tagRECT* pRect) {
	__sub_00182090(this, nullptr, pRect);
}
void CITCWnd_Char::Update() {
	__sub_0017FF60(this, nullptr);
}
int32_t CITCWnd_Char::OnSetFocus(int32_t bFocus) {
	return __sub_001803C0(this, nullptr, bFocus);
}
void CITCWnd_Char::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_001803D0(this, nullptr, msg, wParam, rx, ry);
}
void CITCWnd_Char::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_00180B40(this, nullptr, wParam, lParam);
}
void CITCWnd_Char::OnDefaultAvatar() {
	__sub_001837D0(this, nullptr);
}
void CITCWnd_Char::InitAvatar() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CITCWnd_Char::InitPet() {
	__sub_00180C30(this, nullptr);
}
long CITCWnd_Char::GetWeaponItemID(long nWT, long& nAttackType) {
	return __sub_001804E0(this, nullptr, nWT, nAttackType);
}
void CITCWnd_Char::InitActiveEffect() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CITCWnd_Char::SetActiveEffectItem(long nItemID) {
	__sub_0017FF90(this, nullptr, nItemID);
}
void CITCWnd_Char::InitRing() {
	__sub_00183780(this, nullptr);
}
void CITCWnd_Char::SetPet(long nItemID, long nCommSN, int32_t bPackage) {
	__sub_0017FFC0(this, nullptr, nItemID, nCommSN, bPackage);
}
void CITCWnd_Char::SetRing(long nItemID, long nCommSN, int32_t bPackage) {
	__sub_00182510(this, nullptr, nItemID, nCommSN, bPackage);
}
CITCWnd_Char& CITCWnd_Char::operator=(const CITCWnd_Char& arg0) {
	return _op_assign_20(this, arg0);
}
CITCWnd_Char& CITCWnd_Char::_op_assign_20(CITCWnd_Char* pThis, const CITCWnd_Char& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CITCWnd_Inventory::~CITCWnd_Inventory() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CITCWnd_Inventory::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CITCWnd_Inventory::CITCWnd_Inventory(const CITCWnd_Inventory& arg0) {
	_ctor_1( arg0);
}
void CITCWnd_Inventory::_ctor_1( const CITCWnd_Inventory& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CITCWnd_Inventory::CITCWnd_Inventory() {
	UNIMPLEMENTED; //_ctor_0();
}
void CITCWnd_Inventory::_ctor_0() {
	return __sub_00172360(this, nullptr);
}
void CITCWnd_Inventory::OnCreate(void* arg0) {
	__sub_00182CE0(this, nullptr, arg0);
}
void CITCWnd_Inventory::OnDestroy() {
	__sub_0017FF20(this, nullptr);
}
void CITCWnd_Inventory::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_00181880(this, nullptr, nId, param1, param2);
}
void CITCWnd_Inventory::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_00181E30(this, nullptr, msg, wParam, rx, ry);
}
int32_t CITCWnd_Inventory::OnMouseMove(long rx, long ry) {
	return __sub_00181F60(this, nullptr, rx, ry);
}
void CITCWnd_Inventory::OnButtonClicked(uint32_t nId) {
	__sub_00180700(this, nullptr, nId);
}
void CITCWnd_Inventory::OnMouseEnter(int32_t bEnter) {
	__sub_0017FF30(this, nullptr, bEnter);
}
void CITCWnd_Inventory::Draw(const tagRECT* pRect) {
	__sub_001819E0(this, nullptr, pRect);
}
int32_t CITCWnd_Inventory::OnSetFocus(int32_t bFocus) {
	return __sub_00172410(this, nullptr, bFocus);
}
void CITCWnd_Inventory::ClearToolTip() {
	__sub_00172420(this, nullptr);
}
void CITCWnd_Inventory::ResetInfo() {
	__sub_0017FFB0(this, nullptr);
}
long CITCWnd_Inventory::GetSlotPositionFromPoint(long rx, long ry) {
	return __sub_00181910(this, nullptr, rx, ry);
}
long CITCWnd_Inventory::GetItemTypeIndex() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CITCWnd_Inventory::SetInventoryTI(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CITCWnd_Inventory::SetSelectedNo(long nPos) {
	__sub_001808F0(this, nullptr, nPos);
}
void CITCWnd_Inventory::OnTabChanged(long nTab) {
	__sub_00180810(this, nullptr, nTab);
}
int32_t CITCWnd_Inventory::GetItemSlotRect(long nSlotPosition, tagRECT* pRc) {
	return __sub_00180A40(this, nullptr, nSlotPosition, pRc);
}
CITCWnd_Inventory& CITCWnd_Inventory::operator=(const CITCWnd_Inventory& arg0) {
	return _op_assign_20(this, arg0);
}
CITCWnd_Inventory& CITCWnd_Inventory::_op_assign_20(CITCWnd_Inventory* pThis, const CITCWnd_Inventory& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CITCWnd_PURCHASE::~CITCWnd_PURCHASE() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CITCWnd_PURCHASE::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CITCWnd_PURCHASE::CITCWnd_PURCHASE(const CITCWnd_PURCHASE& arg0) {
	_ctor_1( arg0);
}
void CITCWnd_PURCHASE::_ctor_1( const CITCWnd_PURCHASE& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CITCWnd_PURCHASE::CITCWnd_PURCHASE() {
	UNIMPLEMENTED; //_ctor_0();
}
void CITCWnd_PURCHASE::_ctor_0() {
	return __sub_001721C0(this, nullptr);
}
void CITCWnd_PURCHASE::OnCreate(void* pData) {
	__sub_00182A70(this, nullptr, pData);
}
void CITCWnd_PURCHASE::OnDestroy() {
	__sub_0017FEA0(this, nullptr);
}
void CITCWnd_PURCHASE::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_0017FEB0(this, nullptr, nId, param1, param2);
}
int32_t CITCWnd_PURCHASE::OnMouseMove(long rx, long ry) {
	return __sub_00181710(this, nullptr, rx, ry);
}
void CITCWnd_PURCHASE::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_00181550(this, nullptr, msg, wParam, rx, ry);
}
void CITCWnd_PURCHASE::OnMouseEnter(int32_t bEnter) {
	__sub_0017FF00(this, nullptr, bEnter);
}
void CITCWnd_PURCHASE::Draw(const tagRECT* pRect) {
	__sub_00181230(this, nullptr, pRect);
}
int32_t CITCWnd_PURCHASE::OnSetFocus(int32_t bFocus) {
	return __sub_00172250(this, nullptr, bFocus);
}
void CITCWnd_PURCHASE::ClearToolTip() {
	__sub_00172260(this, nullptr);
}
void CITCWnd_PURCHASE::SetSelectedNo(int32_t arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CITCWnd_PURCHASE::GetWndPurchaseIndex(long rx, long ry) {
	return __sub_00180270(this, nullptr, rx, ry);
}
tagRECT CITCWnd_PURCHASE::GetWndPurchaseRect(long nIndex) {
	tagRECT rect;
	return *__sub_001801E0(this, nullptr, &rect, nIndex);
}
void CITCWnd_PURCHASE::ResetScrollBar() {
	__sub_001802F0(this, nullptr);
}
CITCWnd_PURCHASE& CITCWnd_PURCHASE::operator=(const CITCWnd_PURCHASE& arg0) {
	return _op_assign_16(this, arg0);
}
CITCWnd_PURCHASE& CITCWnd_PURCHASE::_op_assign_16(CITCWnd_PURCHASE* pThis, const CITCWnd_PURCHASE& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

