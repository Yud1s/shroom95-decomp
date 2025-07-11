// CSWnd2.cpp
#include "CSWnd2.hpp"

static ZRef<CShortcutHelpDialog> FAKE_ZRef_CShortcutHelpDialog{};
static ZRef<CItemInfo::EQUIPEXTITEM> FAKE_ZRef_CItemInfo_EQUIPEXTITEM{};

#include "CSWnd2_regen.ipp"

uint32_t CCSWnd_Tab::ms_KeyDownDelay{}; //TODO

CCSWnd_Best::~CCSWnd_Best()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CCSWnd_Best::_dtor_0() {
	return __sub_000C6680(this, nullptr);
}
 CCSWnd_Best::CCSWnd_Best(const CCSWnd_Best& arg0) {
	_ctor_1( arg0);
}
void CCSWnd_Best::_ctor_1( const CCSWnd_Best& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCSWnd_Best::CCSWnd_Best() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCSWnd_Best::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCSWnd_Best::OnCreate(void* pData) {
	__sub_000C6820(this, nullptr, pData);
}
void CCSWnd_Best::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_000CAA00(this, nullptr, msg, wParam, rx, ry);
}
void CCSWnd_Best::Draw(const tagRECT* pRect) {
	__sub_000CAED0(this, nullptr, pRect);
}
int32_t CCSWnd_Best::OnSetFocus(int32_t bFocus) {
	return __sub_000C6460(this, nullptr, bFocus);
}
tagRECT CCSWnd_Best::GetBestRect(long nBest) {
	tagRECT ret{};
	return *__sub_000C6470(this, nullptr, &ret, nBest);
}
void CCSWnd_Best::ChangeCategory() {
	__sub_000C6680(this, nullptr);
}
void CCSWnd_Best::GoToCommoditySN(long nSN) {
	__sub_000C6DC0(this, nullptr, nSN);
}
CCSWnd_Best& CCSWnd_Best::operator=(const CCSWnd_Best& arg0) {
	return _op_assign_10(this, arg0);
}
CCSWnd_Best& CCSWnd_Best::_op_assign_10(CCSWnd_Best* pThis, const CCSWnd_Best& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCSWnd_Tab::~CCSWnd_Tab() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCSWnd_Tab::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCSWnd_Tab::CCSWnd_Tab(const CCSWnd_Tab& arg0) {
	_ctor_1( arg0);
}
void CCSWnd_Tab::_ctor_1( const CCSWnd_Tab& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCSWnd_Tab::CCSWnd_Tab() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCSWnd_Tab::_ctor_0() {
	return __sub_00081140(this, nullptr);
}
void CCSWnd_Tab::OnCreate(void* pData) {
	__sub_000CCC10(this, nullptr, pData);
}
void CCSWnd_Tab::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_000C6EE0(this, nullptr, msg, wParam, rx, ry);
}
void CCSWnd_Tab::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_000C8310(this, nullptr, wParam, lParam);
}
void CCSWnd_Tab::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_000C6250(this, nullptr, nId, param1, param2);
}
void CCSWnd_Tab::Draw(const tagRECT* pRect) {
	__sub_000C68A0(this, nullptr, pRect);
}
int32_t CCSWnd_Tab::OnSetFocus(int32_t bFocus) {
	return __sub_000C62B0(this, nullptr, bFocus);
}
int32_t CCSWnd_Tab::OnKeyRet(uint32_t wParam, int32_t lParam) {
	return __sub_000C6FB0(this, nullptr, wParam, lParam);
}
void CCSWnd_Tab::ChangeCategory() {
	__sub_000C8E40(this, nullptr);
}
void CCSWnd_Tab::ChangeSubCategory() {
	__sub_000C6530(this, nullptr);
}
long CCSWnd_Tab::GetTabIndex(long rx, long ry) {
	return __sub_000C62C0(this, nullptr, rx, ry);
}
CCSWnd_Tab& CCSWnd_Tab::operator=(const CCSWnd_Tab& arg0) {
	return _op_assign_13(this, arg0);
}
CCSWnd_Tab& CCSWnd_Tab::_op_assign_13(CCSWnd_Tab* pThis, const CCSWnd_Tab& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCSWnd_Status::~CCSWnd_Status() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCSWnd_Status::_dtor_0() {
	return __sub_000812F0(this, nullptr);
}
 CCSWnd_Status::CCSWnd_Status(const CCSWnd_Status& arg0) {
	_ctor_1( arg0);
}
void CCSWnd_Status::_ctor_1( const CCSWnd_Status& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCSWnd_Status::CCSWnd_Status() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCSWnd_Status::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCSWnd_Status::OnCreate(void* pData) {
	__sub_000CB840(this, nullptr, pData);
}
void CCSWnd_Status::OnButtonClicked(uint32_t nId) {
	__sub_000C64A0(this, nullptr, nId);
}
void CCSWnd_Status::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_000C6510(this, nullptr, msg, wParam, rx, ry);
}
void CCSWnd_Status::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_000CD610(this, nullptr, wParam, lParam);
}
void CCSWnd_Status::Draw(const tagRECT* pRect) {
	__sub_000CBCD0(this, nullptr, pRect);
}
int32_t CCSWnd_Status::OnSetFocus(int32_t bFocus) {
	return __sub_000C6500(this, nullptr, bFocus);
}
int32_t CCSWnd_Status::OnKeyRet(uint32_t wParam, int32_t lParam) {
	return __sub_000CC430(this, nullptr, wParam, lParam);
}
CCSWnd_Status& CCSWnd_Status::operator=(const CCSWnd_Status& arg0) {
	return _op_assign_10(this, arg0);
}
CCSWnd_Status& CCSWnd_Status::_op_assign_10(CCSWnd_Status* pThis, const CCSWnd_Status& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CItemSearchDlg::~CItemSearchDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CItemSearchDlg::_dtor_0() {
	return __sub_000C6C10(this, nullptr);
}
 CItemSearchDlg::CItemSearchDlg(const CItemSearchDlg& arg0): m_aPrices(arg0.m_aPrices) {
	_ctor_1( arg0);
}
void CItemSearchDlg::_ctor_1( const CItemSearchDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CItemSearchDlg::CItemSearchDlg(ZArray<tagPOINT>& aPrices): m_aPrices(aPrices) {
	_ctor_0( aPrices);
}
void CItemSearchDlg::_ctor_0( ZArray<tagPOINT>& aPrices) {
	return __sub_000C6BB0(this, nullptr, aPrices);
}
void CItemSearchDlg::OnCreate(void* pData) {
	__sub_000CC660(this, nullptr, pData);
}
void CItemSearchDlg::GetResult(ZXString<char>& sSearchName, long& nLowerPrice, long& nUpperPrice) {
	__sub_000C8860(this, nullptr, sSearchName, nLowerPrice, nUpperPrice);
}
 CShortcutHelpDialog::~CShortcutHelpDialog() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CShortcutHelpDialog::_dtor_0() {
	return __sub_000C6D10(this, nullptr);
}
 CShortcutHelpDialog::CShortcutHelpDialog(const CShortcutHelpDialog& arg0) {
	_ctor_1( arg0);
}
void CShortcutHelpDialog::_ctor_1( const CShortcutHelpDialog& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CShortcutHelpDialog::CShortcutHelpDialog() {
	UNIMPLEMENTED; //_ctor_0();
}
void CShortcutHelpDialog::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CShortcutHelpDialog::OnCreate(void* pData) {
	__sub_000C9050(this, nullptr, pData);
}
CShortcutHelpDialog& CShortcutHelpDialog::operator=(const CShortcutHelpDialog& arg0) {
	return _op_assign_4(this, arg0);
}
CShortcutHelpDialog& CShortcutHelpDialog::_op_assign_4(CShortcutHelpDialog* pThis, const CShortcutHelpDialog& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCSWnd_List::~CCSWnd_List() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCSWnd_List::_dtor_0() {
	return __sub_000CD8B0(this, nullptr);
}
 CCSWnd_List::CCSWnd_List(const CCSWnd_List& arg0) {
	_ctor_1( arg0);
}
void CCSWnd_List::_ctor_1( const CCSWnd_List& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCSWnd_List::CCSWnd_List() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCSWnd_List::_ctor_0() {
	return __sub_00092A00(this, nullptr);
}
void CCSWnd_List::OnCreate(void* pData) {
	__sub_000D0500(this, nullptr, pData);
}
void CCSWnd_List::OnDestroy() {
	__sub_000C71A0(this, nullptr);
}
int32_t CCSWnd_List::OnMouseMove(long rx, long ry) {
	return __sub_000C8320(this, nullptr, rx, ry);
}
void CCSWnd_List::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_000C91A0(this, nullptr, msg, wParam, rx, ry);
}
void CCSWnd_List::OnMouseEnter(int32_t bEnter) {
	__sub_000C6340(this, nullptr, bEnter);
}
int32_t CCSWnd_List::OnMouseWheel(long rx, long ry, long nWheel) {
	return __sub_000C6550(this, nullptr, rx, ry, nWheel);
}
void CCSWnd_List::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_000CCF40(this, nullptr, wParam, lParam);
}
void CCSWnd_List::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_000C6360(this, nullptr, nId, param1, param2);
}
void CCSWnd_List::OnButtonClicked(uint32_t nId) {
	__sub_000C71D0(this, nullptr, nId);
}
void CCSWnd_List::Update() {
	__sub_000C84B0(this, nullptr);
}
void CCSWnd_List::Draw(const tagRECT* arg0) {
	__sub_000CDA10(this, nullptr, arg0);
}
int32_t CCSWnd_List::OnSetFocus(int32_t bFocus) {
	return __sub_000C63A0(this, nullptr, bFocus);
}
void CCSWnd_List::ClearToolTip() {
	__sub_00092B40(this, nullptr);
}
int32_t CCSWnd_List::OnKeyRet(uint32_t wParam, int32_t lParam) {
	return __sub_000C9460(this, nullptr, wParam, lParam);
}
void CCSWnd_List::SetCursorToPlate(long nPlate) {
	__sub_000C65B0(this, nullptr, nPlate);
}
void CCSWnd_List::SetUserPreviewControl(int32_t bControl) {
	__sub_000C67F0(this, nullptr, bControl);
}
tagRECT CCSWnd_List::GetPlateRect(long nPlate) {
	tagRECT ret{};
	return *__sub_000C63B0(this, nullptr, &ret, nPlate);
}
void CCSWnd_List::ChangeCategorySub() {
	__sub_000C98F0(this, nullptr);
}
void CCSWnd_List::ChangePage() {
	__sub_000CFC70(this, nullptr);
}
void CCSWnd_List::AddPicturePlate(long nX, long nY, const wchar_t* sUOL) {
	__sub_000CFBC0(this, nullptr, nX, nY, sUOL);
}
void CCSWnd_List::ClearPicturePlate() {
	__sub_000CCF50(this, nullptr);
}
void CCSWnd_List::AddClassIconLayer(long nX, long nY, long nClass) {
	__sub_000CCF60(this, nullptr, nX, nY, nClass);
}
void CCSWnd_List::AddLimitIconLayer(long nX, long nY) {
	__sub_000CD340(this, nullptr, nX, nY);
}
void CCSWnd_List::SetUpdateLayers(int32_t bControl) {
	__sub_000C67F0(this, nullptr, bControl);
}
long CCSWnd_List::GetCommodityGender(ZRef<CS_COMMODITY> pComm) {
	return __sub_000C80A0(this, nullptr, CreateNakedParam(pComm));
}
int32_t CCSWnd_List::IsSameList() {
	return __sub_000C6410(this, nullptr);
}
void CCSWnd_List::ResetSlotIncComm() {
	__sub_000C7460(this, nullptr);
}
int32_t CCSWnd_List::IsKeyNavigationMode() {
	return __sub_000C6410(this, nullptr);
}
void CCSWnd_List::SetPlateNo(long nPlateNo) {
	__sub_000C9B40(this, nullptr, nPlateNo);
}
void CCSWnd_List::SetButtonKeyFocus(long nPlateIndx, long nBtnIndx) {
	__sub_000C6610(this, nullptr, nPlateIndx, nBtnIndx);
}
void CCSWnd_List::WearCommodity(ZRef<CS_COMMODITY> pComm) {
	__sub_000C85E0(this, nullptr, CreateNakedParam(pComm));
}
int32_t CCSWnd_List::WearItem(ZRef<CS_COMMODITY> pComm, int32_t bPackage) {
	return __sub_000C7D80(this, nullptr, CreateNakedParam(pComm), bPackage);
}
int32_t CCSWnd_List::ShowItemToolTip(ZRef<CS_COMMODITY_EX> pComm, long rx, long ry) {
	return __sub_000C7780(this, nullptr, CreateNakedParam(pComm), rx, ry);
}
CCSWnd_List& CCSWnd_List::operator=(const CCSWnd_List& arg0) {
	return _op_assign_36(this, arg0);
}
CCSWnd_List& CCSWnd_List::_op_assign_36(CCSWnd_List* pThis, const CCSWnd_List& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCSWnd_List::PICTURE_PLATE::~PICTURE_PLATE() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCSWnd_List::PICTURE_PLATE::_dtor_0() {
	return __sub_000820B0(this, nullptr);
}
 CCSWnd_List::PICTURE_PLATE::PICTURE_PLATE(const CCSWnd_List::PICTURE_PLATE& arg0) {
	_ctor_1( arg0);
}
void CCSWnd_List::PICTURE_PLATE::_ctor_1( const CCSWnd_List::PICTURE_PLATE& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCSWnd_List::PICTURE_PLATE::PICTURE_PLATE() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCSWnd_List::PICTURE_PLATE::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CCSWnd_List::PICTURE_PLATE& CCSWnd_List::PICTURE_PLATE::operator=(const CCSWnd_List::PICTURE_PLATE& arg0) {
	return _op_assign_3(this, arg0);
}
CCSWnd_List::PICTURE_PLATE& CCSWnd_List::PICTURE_PLATE::_op_assign_3(CCSWnd_List::PICTURE_PLATE* pThis, const CCSWnd_List::PICTURE_PLATE& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

