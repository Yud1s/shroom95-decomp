// CSWnd_Oneaday.cpp
#include "CSWnd_Oneaday.hpp"

static ZRef<CS_COMMODITY> FAKE_ZRef_CS_COMMODITY{};

#include "CSWnd_Oneaday_regen.ipp"

 CCSWnd_OneADay::~CCSWnd_OneADay() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCSWnd_OneADay::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCSWnd_OneADay::CCSWnd_OneADay(const CCSWnd_OneADay& arg0) {
	_ctor_1( arg0);
}
void CCSWnd_OneADay::_ctor_1( const CCSWnd_OneADay& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCSWnd_OneADay::CCSWnd_OneADay() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCSWnd_OneADay::_ctor_0() {
	return __sub_000813E0(this, nullptr);
}
void CCSWnd_OneADay::OnCreate(void* pData) {
	__sub_000D2FD0(this, nullptr, pData);
}
void CCSWnd_OneADay::Draw(const tagRECT* pRect) {
	__sub_000D4360(this, nullptr, pRect);
}
void CCSWnd_OneADay::ClearToolTip() {
	__sub_000814B0(this, nullptr);
}
int32_t CCSWnd_OneADay::OnMouseMove(long rx, long ry) {
	return __sub_000D16D0(this, nullptr, rx, ry);
}
void CCSWnd_OneADay::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_000D0D50(this, nullptr, msg, wParam, rx, ry);
}
void CCSWnd_OneADay::OnMouseEnter(int32_t bEnter) {
	__sub_000D0C20(this, nullptr, bEnter);
}
void CCSWnd_OneADay::OnButtonClicked(uint32_t nId) {
	__sub_000D1400(this, nullptr, nId);
}
void CCSWnd_OneADay::Update() {
	__sub_000D1610(this, nullptr);
}
void CCSWnd_OneADay::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_000D4320(this, nullptr, nId, param1, param2);
}
void CCSWnd_OneADay::DrawToday(_x_com_ptr<IWzCanvas> pCanvas, const tagRECT* pRect) {
	__sub_000D3C50(this, nullptr, CreateNakedParam(pCanvas), pRect);
}
void CCSWnd_OneADay::DrawPrev(_x_com_ptr<IWzCanvas> pCanvas, const tagRECT* pRect) {
	__sub_000D3970(this, nullptr, CreateNakedParam(pCanvas), pRect);
}
void CCSWnd_OneADay::DrawCommodity(_x_com_ptr<IWzCanvas> arg0, const tagRECT& arg1, long arg2, long arg3) {
	__sub_000D1980(this, nullptr, CreateNakedParam(arg0), arg1, arg2, arg3);
}
int32_t CCSWnd_OneADay::ShowItemToolTip(ZRef<CS_COMMODITY_EX> pComm, long rx, long ry) {
	return __sub_000D0F70(this, nullptr, CreateNakedParam(pComm), rx, ry);
}
tagRECT CCSWnd_OneADay::GetPlateRect_1(long nPlate) {
	tagRECT ret{};
	ret.left = 4;
	ret.top = 0x5d;
	ret.right = 0x18e;
	ret.bottom = 0x9e;
	return ret;

//	return *__sub_000D0C70(this, nullptr, &ret, nPlate);
}
tagRECT CCSWnd_OneADay::GetPlateRect_0() {
	tagRECT rect;
	return *__sub_000D0C40(this, nullptr, &rect);
}
long CCSWnd_OneADay::GetOneADayItemSN() {
	return __sub_000D0CD0(this, nullptr);
}
const ZArray<OneADayInfo>& CCSWnd_OneADay::GetPrevOneADayInfo() {
	return __sub_000D0CE0(this, nullptr);
}
int32_t CCSWnd_OneADay::IsEmptyOneADayItem() {
	return __sub_000D0EF0(this, nullptr);
}
void CCSWnd_OneADay::ChangeState(uint32_t state, int32_t bForce) {
	__sub_000D2B90(this, nullptr, state, bForce);
}
void CCSWnd_OneADay::DisableTodayButtons() {
	__sub_000D0CF0(this, nullptr);
}
CCSWnd_OneADay& CCSWnd_OneADay::operator=(const CCSWnd_OneADay& arg0) {
	return _op_assign_23(this, arg0);
}
CCSWnd_OneADay& CCSWnd_OneADay::_op_assign_23(CCSWnd_OneADay* pThis, const CCSWnd_OneADay& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

