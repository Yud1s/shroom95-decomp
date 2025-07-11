// CSWnd.cpp
#include "CSWnd.hpp"

static ZRefCounted_AllocHelper<ZRefCountedDummy<CWvsPhysicalSpace2D>> FAKE_ZRefCounted_AllocHelper_ZRefCountedDummy_CWvsPhysicalSpace2D{};
static ZRefCounted_AllocHelper<CUserPreview> FAKE_ZRefCounted_AllocHelper_CUserPreview{};



int32_t CCSWnd_Inventory::ms_anItemScrollPos[6]{};

#include "CSWnd_regen.ipp"

 CCSWnd_Char::~CCSWnd_Char() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCSWnd_Char::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCSWnd_Char::CCSWnd_Char(const CCSWnd_Char& arg0) {
	_ctor_1( arg0);
}
void CCSWnd_Char::_ctor_1( const CCSWnd_Char& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCSWnd_Char::CCSWnd_Char() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCSWnd_Char::_ctor_0() {
	return __sub_00080940(this, nullptr);
}
void CCSWnd_Char::OnCreate(void* arg0) {
	__sub_000C4590(this, nullptr, arg0);
}
void CCSWnd_Char::OnDestroy() {
	__sub_000BD480(this, nullptr);
}
void CCSWnd_Char::OnButtonClicked(uint32_t nId) {
	__sub_000BB630(this, nullptr, nId);
}
void CCSWnd_Char::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_000C5A20(this, nullptr, nId, param1, param2);
}
void CCSWnd_Char::Draw(const tagRECT* pRect) {
	__sub_000BF380(this, nullptr, pRect);
}
void CCSWnd_Char::Update() {
	__sub_000BD800(this, nullptr);
}
int32_t CCSWnd_Char::OnSetFocus(int32_t bFocus) {
	return __sub_000BB620(this, nullptr, bFocus);
}
void CCSWnd_Char::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_000BC380(this, nullptr, msg, wParam, rx, ry);
}
void CCSWnd_Char::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_000C5D20(this, nullptr, wParam, lParam);
}
int32_t CCSWnd_Char::OnKeyRet(uint32_t wParam, int32_t lParam) {
	return __sub_000BFCC0(this, nullptr, wParam, lParam);
}
void CCSWnd_Char::OnTabChanged(long nTab) {
	__sub_000BF040(this, nullptr, nTab);
}
void CCSWnd_Char::OnWear(long nItemID, long nCommSN, int32_t bPackage) {
	__sub_000C5A60(this, nullptr, nItemID, nCommSN, bPackage);
}
void CCSWnd_Char::OnTakeOff() {
	__sub_000BCA00(this, nullptr);
}
void CCSWnd_Char::OnDefaultAvatar() {
	__sub_000BEC80(this, nullptr);
}
void CCSWnd_Char::InitAvatar() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CCSWnd_Char::CmpAvatar(long nBodyPart) {
	return __sub_000BB680(this, nullptr, nBodyPart);
}
void CCSWnd_Char::InitRing() {
	__sub_000BB730(this, nullptr);
}
void CCSWnd_Char::SetRing(long nItemID, long nCommSN, int32_t bPackage) {
	__sub_000BF830(this, nullptr, nItemID, nCommSN, bPackage);
}
void CCSWnd_Char::MakeNameTag() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCSWnd_Char::InitPet() {
	__sub_000BDE30(this, nullptr);
}
void CCSWnd_Char::SetPet(long nItemID, long nCommSN, int32_t bPackage) {
	__sub_000BC400(this, nullptr, nItemID, nCommSN, bPackage);
}
long CCSWnd_Char::CmpPet() {
	return __sub_000BDFD0(this, nullptr);
}
void CCSWnd_Char::InitRiding() {
	__sub_000BB9B0(this, nullptr);
}
int32_t CCSWnd_Char::SetRiding(long nItemID, long nCommSN, long nBodyPart) {
	return __sub_000BC490(this, nullptr, nItemID, nCommSN, nBodyPart);
}
long CCSWnd_Char::GetMessageBoxSN() {
	return __sub_000BB9E0(this, nullptr);
}
long CCSWnd_Char::GetPersonalShopSN() {
	return __sub_000BB9F0(this, nullptr);
}
long CCSWnd_Char::GetEntrustedShopSN() {
	return __sub_000BBA00(this, nullptr);
}
long CCSWnd_Char::GetEffectSN() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CCSWnd_Char::GetColorLensSN() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCSWnd_Char::StartChat() {
	__sub_000BBA10(this, nullptr);
}
void CCSWnd_Char::EndChat() {
	__sub_000BBA50(this, nullptr);
}
void CCSWnd_Char::OnChat(ZXString<char> sText) {
	__sub_000BFBD0(this, nullptr, CreateNakedParam(sText));
}
void CCSWnd_Char::SetEmotion(long nItemID) {
	__sub_000BBA80(this, nullptr, nItemID);
}
void CCSWnd_Char::InitColorLens() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCSWnd_Char::SetColorLens(long nItemID, long nCommSN) {
	__sub_000BBB50(this, nullptr, nItemID, nCommSN);
}
void CCSWnd_Char::InitActiveEffect() {
	__sub_000BC640(this, nullptr);
}
void CCSWnd_Char::SetActiveEffectItem(long nItemID, long nCommSN) {
	__sub_000BBAC0(this, nullptr, nItemID, nCommSN);
}
void CCSWnd_Char::ShowBullet(long nItemID) {
	__sub_000BE150(this, nullptr, nItemID);
}
void CCSWnd_Char::BlowWeather(long nItemID) {
	__sub_000C5D30(this, nullptr, nItemID);
}
void CCSWnd_Char::ShowMessageBox(long nItemID, long nCommSN) {
	__sub_000BBB00(this, nullptr, nItemID, nCommSN);
}
void CCSWnd_Char::ShowPersonalShop(long nItemID, long nCommSN) {
	__sub_000BC660(this, nullptr, nItemID, nCommSN);
}
void CCSWnd_Char::ShowEntrustedShop(long nItemID, long nCommSN) {
	__sub_000BC6B0(this, nullptr, nItemID, nCommSN);
}
void CCSWnd_Char::ShowADBoard(long nItemID, long nCommSN) {
	__sub_000BBB10(this, nullptr, nItemID, nCommSN);
}
long CCSWnd_Char::GetWeaponItemID(long nWT, long& nAttackActionType) {
	return __sub_000BD4F0(this, nullptr, nWT, nAttackActionType);
}
void CCSWnd_Char::SetUserPreviewControl(int32_t bControl) {
	__sub_000BD5F0(this, nullptr, bControl);
}
int32_t CCSWnd_Char::IsTwoHandWeapon(long nItemID) {
	return __sub_000BFF50(this, nullptr, nItemID);
}
void CCSWnd_Char::CreateFloatNotice(const char* arg0, long arg1) {
	__sub_000C0110(this, nullptr, arg0, arg1);
}
void CCSWnd_Char::DeleteFloatNotice() {
	__sub_000BCB10(this, nullptr);
}
void CCSWnd_Char::TransientLayer_Weather(ZXString16 arg0, long arg1, long arg2, long arg3) {
	__sub_000C0F30(this, nullptr, CreateNakedParam(arg0), arg1, arg2, arg3);
}
void CCSWnd_Char::TransientLayer_Clear() {
	__sub_000BCB30(this, nullptr);
}
CCSWnd_Char& CCSWnd_Char::operator=(const CCSWnd_Char& arg0) {
	return _op_assign_53(this, arg0);
}
CCSWnd_Char& CCSWnd_Char::_op_assign_53(CCSWnd_Char* pThis, const CCSWnd_Char& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCSWnd_Locker::~CCSWnd_Locker() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCSWnd_Locker::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCSWnd_Locker::CCSWnd_Locker(const CCSWnd_Locker& arg0) {
	_ctor_1( arg0);
}
void CCSWnd_Locker::_ctor_1( const CCSWnd_Locker& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCSWnd_Locker::CCSWnd_Locker() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCSWnd_Locker::_ctor_0() {
	return __sub_00080C50(this, nullptr);
}
void CCSWnd_Locker::OnCreate(void* pData) {
	__sub_000C31C0(this, nullptr, pData);
}
void CCSWnd_Locker::OnDestroy() {
	__sub_000BB7A0(this, nullptr);
}
void CCSWnd_Locker::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_000BB7B0(this, nullptr, nId, param1, param2);
}
void CCSWnd_Locker::OnButtonClicked(uint32_t nId) {
	__sub_000BC700(this, nullptr, nId);
}
int32_t CCSWnd_Locker::OnSetFocus(int32_t bFocus) {
	return __sub_000BB820(this, nullptr, bFocus);
}
int32_t CCSWnd_Locker::OnMouseMove(long rx, long ry) {
	return __sub_000BE4B0(this, nullptr, rx, ry);
}
void CCSWnd_Locker::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_000BE1B0(this, nullptr, msg, wParam, rx, ry);
}
void CCSWnd_Locker::OnMouseEnter(int32_t bEnter) {
	__sub_000BB800(this, nullptr, bEnter);
}
void CCSWnd_Locker::Draw(const tagRECT* pRect) {
	__sub_000BCD60(this, nullptr, pRect);
}
void CCSWnd_Locker::ClearToolTip() {
	__sub_00080CF0(this, nullptr);
}
void CCSWnd_Locker::SetSelectedNo(int32_t bClearSelect) {
	__sub_000BD070(this, nullptr, bClearSelect);
}
long CCSWnd_Locker::GetLockerIndex(long rx, long ry) {
	return __sub_000BC7E0(this, nullptr, rx, ry);
}
tagRECT CCSWnd_Locker::GetLockerRect(long nIndex) {
	//TODO verify
	tagRECT ret;
	// TODO simple contains check rather
	if(nIndex >= 0 && nIndex < this->m_pCashShop->m_aCashItemInfo.GetCount()) {
		auto curPos = m_pScrollBar->GetCurPos();
		auto x = nIndex + curPos * -6;
		if(x < 12) {
			auto a = (x / 6) * 35;
			auto b = (x % 6) * 35;

			ret.left = 21 + b;
			ret.top = a + 30;
			ret.right = 53 + b;
			ret.bottom = a + 62;
		}
	}
	return ret;

	// return __sub_000BC740(this, nullptr, nIndex);
}
void CCSWnd_Locker::ResetScrollBar() {
	__sub_000BC860(this, nullptr);
}
CCSWnd_Locker& CCSWnd_Locker::operator=(const CCSWnd_Locker& arg0) {
	return _op_assign_17(this, arg0);
}
CCSWnd_Locker& CCSWnd_Locker::_op_assign_17(CCSWnd_Locker* pThis, const CCSWnd_Locker& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCSWnd_Inventory::~CCSWnd_Inventory() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCSWnd_Inventory::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCSWnd_Inventory::CCSWnd_Inventory(const CCSWnd_Inventory& arg0) {
	_ctor_1( arg0);
}
void CCSWnd_Inventory::_ctor_1( const CCSWnd_Inventory& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCSWnd_Inventory::CCSWnd_Inventory() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCSWnd_Inventory::_ctor_0() {
	return __sub_00080E10(this, nullptr);
}
void CCSWnd_Inventory::OnCreate(void* arg0) {
	__sub_000C34F0(this, nullptr, arg0);
}
void CCSWnd_Inventory::OnDestroy() {
	__sub_000BB830(this, nullptr);
}
void CCSWnd_Inventory::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_000C4160(this, nullptr, nId, param1, param2);
}
int32_t CCSWnd_Inventory::OnSetFocus(int32_t bFocus) {
	return __sub_000BB8E0(this, nullptr, bFocus);
}
void CCSWnd_Inventory::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_000BED40(this, nullptr, msg, wParam, rx, ry);
}
int32_t CCSWnd_Inventory::OnMouseMove(long rx, long ry) {
	return __sub_000BEEC0(this, nullptr, rx, ry);
}
void CCSWnd_Inventory::OnButtonClicked(uint32_t nId) {
	__sub_000BB840(this, nullptr, nId);
}
void CCSWnd_Inventory::OnMouseEnter(int32_t bEnter) {
	__sub_000BB8F0(this, nullptr, bEnter);
}
void CCSWnd_Inventory::Draw(const tagRECT* pRect) {
	__sub_000BE710(this, nullptr, pRect);
}
void CCSWnd_Inventory::ClearToolTip() {
	__sub_00080ED0(this, nullptr);
}
void CCSWnd_Inventory::ResetInfo() {
	__sub_000BE620(this, nullptr);
}
void CCSWnd_Inventory::EnableExButton() {
	__sub_000BD9D0(this, nullptr);
}
void CCSWnd_Inventory::EnableExTrunkButton() {
	__sub_000BBB20(this, nullptr);
}
long CCSWnd_Inventory::GetSlotPositionFromPoint(long rx, long ry) {
	return __sub_000BE640(this, nullptr, rx, ry);
}
long CCSWnd_Inventory::GetItemTypeIndex() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCSWnd_Inventory::SetInventoryTI(long nTI) {
	__sub_00093CB0(this, nullptr, nTI);
}
void CCSWnd_Inventory::SetSelectedNo(long nTI) {
	__sub_00093CB0(this, nullptr, nTI);
}
void CCSWnd_Inventory::OnTabChanged(long nTI) {
	__sub_00093CB0(this, nullptr, nTI);
}
int32_t CCSWnd_Inventory::GetItemSlotRect(long nSlotPosition, tagRECT* pRc) {
	return __sub_000BDC10(this, nullptr, nSlotPosition, pRc);
}
CCSWnd_Inventory& CCSWnd_Inventory::operator=(const CCSWnd_Inventory& arg0) {
	return _op_assign_22(this, arg0);
}
CCSWnd_Inventory& CCSWnd_Inventory::_op_assign_22(CCSWnd_Inventory* pThis, const CCSWnd_Inventory& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

long __cdecl get_face_wearing_colorlens(const AvatarLook& avatarLook, long nColorLensItemID) {
	return __sub_000BB5B0(avatarLook, nColorLensItemID);
}
int32_t __cdecl zmin_int_(int32_t a, int32_t b) {
	return __sub_000BB970(a, b);
}
long __cdecl get_substitute_weaponid(unsigned long dwFlag) {
	return __sub_000BB510(dwFlag);
}
CLadderOrRope* __cdecl _ZtlSecureFuse_CLadderOrRope__(CLadderOrRope** at, uint32_t uCS) {
	return __sub_000BB930(at, uCS);
}
