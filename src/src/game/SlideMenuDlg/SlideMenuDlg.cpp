// SlideMenuDlg.cpp
#include "SlideMenuDlg.hpp"

static InsertionSortHelper<CSlideMenuDlg::MAINBUTTONINFO, CSlideMenuDlg::CompButtonInfo> FAKE_InsertionSortHelper_CSlideMenuDlg_MAINBUTTONINFO_CSlideMenuDlg_CompButtonInfo{};
static ZSortHelper<CSlideMenuDlg::MAINBUTTONINFO, CSlideMenuDlg::CompButtonInfo> FAKE_ZSortHelper_CSlideMenuDlg_MAINBUTTONINFO_CSlideMenuDlg_CompButtonInfo{};

static IntroSortLoopHelper<CSlideMenuDlg::MAINBUTTONINFO, int, CSlideMenuDlg::CompButtonInfo> FAKE_IntroSortLoopHelperCSlideMenuDlgMAINBUTTONINFOCompButtonInfo{};

#include "SlideMenuDlg_regen.ipp"

 CSlideMenuDlg::~CSlideMenuDlg() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CSlideMenuDlg::_dtor_0() {
	return __sub_003123F0(this, nullptr);
}
 CSlideMenuDlg::CSlideMenuDlg(const CSlideMenuDlg& arg0) {
	_ctor_1( arg0);
}
void CSlideMenuDlg::_ctor_1( const CSlideMenuDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CSlideMenuDlg::CSlideMenuDlg(CInPacket& iPacket) {
	_ctor_0( iPacket);
}
void CSlideMenuDlg::_ctor_0( CInPacket& iPacket) {
	return __sub_003133E0(this, nullptr, iPacket);
}
void CSlideMenuDlg::OnCreate(void* pData) {
	__sub_003125A0(this, nullptr, pData);
}
void CSlideMenuDlg::Draw(const tagRECT* pRect) {
	__sub_00311E90(this, nullptr, pRect);
}
void CSlideMenuDlg::OnButtonClicked(uint32_t nId) {
	__sub_00310D60(this, nullptr, nId);
}
void CSlideMenuDlg::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_00310E30(this, nullptr, wParam, lParam);
}
long CSlideMenuDlg::GetSelectResult() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CSlideMenuDlg::SetSlideMenuDlg(CInPacket& iPacket) {
	__sub_00313250(this, nullptr, iPacket);
}
void CSlideMenuDlg::SetButtonInfo(ZXString<char> sInfo) {
	__sub_00312E90(this, nullptr, CreateNakedParam(sInfo));
}
void CSlideMenuDlg::CreateSlideMenuButton() {
	__sub_00311860(this, nullptr);
}
void CSlideMenuDlg::ArrowButtonClicked(long nButtonID) {
	__sub_00310CD0(this, nullptr, nButtonID);
}
CSlideMenuDlg& CSlideMenuDlg::operator=(const CSlideMenuDlg& arg0) {
	return _op_assign_15(this, arg0);
}
CSlideMenuDlg& CSlideMenuDlg::_op_assign_15(CSlideMenuDlg* pThis, const CSlideMenuDlg& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CSlideMenuDlg::MAINBUTTONINFO::~MAINBUTTONINFO() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CSlideMenuDlg::MAINBUTTONINFO::_dtor_0() {
	return __sub_00311020(this, nullptr);
}
 CSlideMenuDlg::MAINBUTTONINFO::MAINBUTTONINFO(const CSlideMenuDlg::MAINBUTTONINFO& __that) {
	_ctor_1( __that);
}
void CSlideMenuDlg::MAINBUTTONINFO::_ctor_1( const CSlideMenuDlg::MAINBUTTONINFO& __that) {
	return __sub_00311220(this, nullptr, __that);
}
 CSlideMenuDlg::MAINBUTTONINFO::MAINBUTTONINFO() {
	UNIMPLEMENTED; //_ctor_0();
}
void CSlideMenuDlg::MAINBUTTONINFO::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CSlideMenuDlg::MAINBUTTONINFO& CSlideMenuDlg::MAINBUTTONINFO::operator=(const CSlideMenuDlg::MAINBUTTONINFO& arg0) {
	return _op_assign_3(this, arg0);
}
CSlideMenuDlg::MAINBUTTONINFO& CSlideMenuDlg::MAINBUTTONINFO::_op_assign_3(CSlideMenuDlg::MAINBUTTONINFO* pThis, const CSlideMenuDlg::MAINBUTTONINFO& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CSlideMenuDlg::CompButtonInfo::operator()(const CSlideMenuDlg::MAINBUTTONINFO a, const CSlideMenuDlg::MAINBUTTONINFO b) {
	return _op_call_0(this, a, b);
}
int32_t CSlideMenuDlg::CompButtonInfo::_op_call_0(CSlideMenuDlg::CompButtonInfo* pThis, CSlideMenuDlg::MAINBUTTONINFO a, CSlideMenuDlg::MAINBUTTONINFO b) {
	return __sub_003110B0(pThis, nullptr, CreateNakedParam(a), CreateNakedParam(b));
}

void __cdecl DownHeap_CSlideMenuDlg__MAINBUTTONINFO_CSlideMenuDlg__CompButtonInfo_(ZArray<CSlideMenuDlg::MAINBUTTONINFO>& a, int32_t nIdx, int32_t nLen, int32_t nFrom, CSlideMenuDlg::CompButtonInfo& comp) {
	return __sub_00311680(a, nIdx, nLen, nFrom, comp);
}
void __cdecl InsertionSort_CSlideMenuDlg__MAINBUTTONINFO_CSlideMenuDlg__CompButtonInfo_(ZArray<CSlideMenuDlg::MAINBUTTONINFO>& a, int32_t nFrom, int32_t nTo, CSlideMenuDlg::CompButtonInfo& comp) {
	return __sub_00312140(a, nFrom, nTo, comp);
}
void __cdecl ZSort_CSlideMenuDlg__MAINBUTTONINFO_CSlideMenuDlg__CompButtonInfo_(ZArray<CSlideMenuDlg::MAINBUTTONINFO>& a, __POSITION* posFrom, __POSITION* posTo, CSlideMenuDlg::CompButtonInfo comp) {
	return __sub_00312E20(a, posFrom, posTo, CreateNakedParam(comp));
}
int32_t __cdecl Partition_CSlideMenuDlg__MAINBUTTONINFO_CSlideMenuDlg__CompButtonInfo_(ZArray<CSlideMenuDlg::MAINBUTTONINFO>& a, int32_t nFrom, int32_t nTo, const CSlideMenuDlg::MAINBUTTONINFO& pivot, CSlideMenuDlg::CompButtonInfo& comp) {
	return __sub_00311410(a, nFrom, nTo, pivot, comp);
}
const CSlideMenuDlg::MAINBUTTONINFO& __cdecl Median_CSlideMenuDlg__MAINBUTTONINFO_CSlideMenuDlg__CompButtonInfo_(const CSlideMenuDlg::MAINBUTTONINFO& a, const CSlideMenuDlg::MAINBUTTONINFO& b, const CSlideMenuDlg::MAINBUTTONINFO& c, CSlideMenuDlg::CompButtonInfo& comp) {
	return __sub_00311290(a, b, c, comp);
}
