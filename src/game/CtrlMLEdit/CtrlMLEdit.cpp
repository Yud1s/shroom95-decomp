// CtrlMLEdit.cpp
#include "CtrlMLEdit.hpp"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};
#include "CtrlMLEdit_regen.ipp"

 CCtrlMLEdit::~CCtrlMLEdit() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCtrlMLEdit::_dtor_0() {
	return __sub_000E52F0(this, nullptr);
}
 CCtrlMLEdit::CCtrlMLEdit(const CCtrlMLEdit& arg0) {
	_ctor_1( arg0);
}
void CCtrlMLEdit::_ctor_1( const CCtrlMLEdit& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlMLEdit::CCtrlMLEdit() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCtrlMLEdit::_ctor_0() {
	return __sub_000E5220(this, nullptr);
}
ZXString<char> CCtrlMLEdit::GetText() {
	return __sub_000E5590(this, nullptr);
}
void CCtrlMLEdit::SetText(const char* sText) {
	__sub_000E8730(this, nullptr, sText);
}
void CCtrlMLEdit::SetReadOnly(int32_t arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CCtrlMLEdit::GetTotalRow() {
	return __sub_000E46B0(this, nullptr);
}
const ZArray<long>& CCtrlMLEdit::GetStartPOSs() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCtrlMLEdit::SetCurScrollLine(long nCur) {
	__sub_000E8540(this, nullptr, nCur);
}
void CCtrlMLEdit::SetScrollbar(ZRef<CCtrlScrollBar> pScrollbar) {
	__sub_000E5130(this, nullptr, CreateNakedParam(pScrollbar));
}
void CCtrlMLEdit::UpdateScrollbar() {
	__sub_000E8560(this, nullptr);
}
void CCtrlMLEdit::OnKey(uint32_t wParam, int32_t lParam) {
	__sub_000E95F0(this, nullptr, wParam, lParam);
}
int32_t CCtrlMLEdit::OnSetFocus(int32_t bFocus) {
	return __sub_000E4520(this, nullptr, bFocus);
}
void CCtrlMLEdit::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_000E8780(this, nullptr, msg, wParam, rx, ry);
}
int32_t CCtrlMLEdit::OnMouseMove(long rx, long ry) {
	return __sub_000E87C0(this, nullptr, rx, ry);
}
void CCtrlMLEdit::OnMouseEnter(int32_t bEnter) {
	__sub_000E4290(this, nullptr, bEnter);
}
int32_t CCtrlMLEdit::OnDragDrop(long nState, DRAGCTX& ctx, long rx, long ry) {
	return __sub_000E5280(this, nullptr, nState, ctx, rx, ry);
}
void CCtrlMLEdit::OnIMEModeChange(char cMode) {
	__sub_000E5290(this, nullptr, cMode);
}
void CCtrlMLEdit::OnIMEResult(const char* sComp) {
	__sub_000E93A0(this, nullptr, sComp);
}
void CCtrlMLEdit::OnIMEComp(const char* sComp, ZArray<unsigned long>& adwCls, uint32_t nClsIdx, long nCursor, ZList<ZXString<char> >& lCand, long nBegin, long nPage, long nCur) {
	__sub_000E9430(this, nullptr, sComp, adwCls, nClsIdx, nCursor, lCand, nBegin, nPage, nCur);
}
void CCtrlMLEdit::Update() {
	__sub_000E4580(this, nullptr);
}
void CCtrlMLEdit::OnCreate(void* pData) {
	__sub_000E87E0(this, nullptr, pData);
}
void CCtrlMLEdit::OnDestroy() {
	__sub_000E5440(this, nullptr);
}
void CCtrlMLEdit::Draw(long rx, long ry, const tagRECT* pRect) {
	__sub_000E8250(this, nullptr, rx, ry, pRect);
}
void CCtrlMLEdit::SetEnable(int32_t bEnable) {
	__sub_000E45C0(this, nullptr, bEnable);
}
int32_t CCtrlMLEdit::OnMouseWheel(long rx, long ry, long nWheel) {
	return __sub_000E4600(this, nullptr, rx, ry, nWheel);
}
void CCtrlMLEdit::MouseDown(long rx, long ry) {
	__sub_000E8660(this, nullptr, rx, ry);
}
void CCtrlMLEdit::MouseDblClk(long rx, long ry) {
	__sub_000E86B0(this, nullptr, rx, ry);
}
void CCtrlMLEdit::MouseUp(long arg0, long arg1) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCtrlMLEdit::MouseMove(long rx, long ry) {
	__sub_000E86F0(this, nullptr, rx, ry);
}
int32_t CCtrlMLEdit::IsSelected() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCtrlMLEdit::UnSelect() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCtrlMLEdit::WordSelect() {
	__sub_000E55E0(this, nullptr);
}
void CCtrlMLEdit::ExtractSelection(int32_t bSave) {
	__sub_000E83E0(this, nullptr, bSave);
}
void CCtrlMLEdit::SetClipboard() {
	__sub_000E63C0(this, nullptr);
}
ZXString<char> CCtrlMLEdit::GetClipboard() {
	return __sub_000E5590(this, nullptr);
}
long CCtrlMLEdit::InsertString(ZXString<char> sSrc, int32_t bExtend, long nCursor) {
	return __sub_000E8DA0(this, nullptr, CreateNakedParam(sSrc), bExtend, nCursor);
}
long CCtrlMLEdit::DeleteString(int32_t bDelete) {
	return __sub_000E90C0(this, nullptr, bDelete);
}
void CCtrlMLEdit::MoveCaret(int32_t nCode) {
	__sub_000E9550(this, nullptr, nCode);
}
void CCtrlMLEdit::AdjustHorz(long nCursor, int32_t bUnselect, int32_t bSelect) {
	__sub_000E85F0(this, nullptr, nCursor, bUnselect, bSelect);
}
void CCtrlMLEdit::AdjustVert(int32_t nCode) {
	__sub_000E92C0(this, nullptr, nCode);
}
void CCtrlMLEdit::CalcLineStart() {
	__sub_000E61F0(this, nullptr);
}
long CCtrlMLEdit::GetRow() {
	return __sub_000E4690(this, nullptr);
}
void CCtrlMLEdit::DisplayCaret(long nCursor) {
	__sub_000E7390(this, nullptr, nCursor);
}
long CCtrlMLEdit::CalcCaretPos(long lCoordX, long lCoordY) {
	return __sub_000E79B0(this, nullptr, lCoordX, lCoordY);
}
long CCtrlMLEdit::GetPrevCount() {
	return __sub_000E4640(this, nullptr);
}
long CCtrlMLEdit::GetNextCount_0(const char* sCur) {
	return __sub_000E42A0(this, nullptr, sCur);
}
long CCtrlMLEdit::GetNextCount_1() {
	return __sub_000E4670(this, nullptr);
}
int32_t CCtrlMLEdit::IsBackTransparent() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCtrlMLEdit::DrawTextLine(_x_com_ptr<IWzCanvas> pCanvas, long y, ZXString<char> sText, long sel0, long sel1) {
	__sub_000E6480(this, nullptr, CreateNakedParam(pCanvas), y, CreateNakedParam(sText), sel0, sel1);
}
void CCtrlMLEdit::DrawTextLineRange(_x_com_ptr<IWzCanvas> pCanvas, long nBegin, long nEnd) {
	__sub_000E7280(this, nullptr, CreateNakedParam(pCanvas), nBegin, nEnd);
}
void CCtrlMLEdit::CreateIMECandWnd(ZList<ZXString<char> >& lCand, long nBegin, long nPage, long nCur, int32_t bVert) {
	__sub_000E7CB0(this, nullptr, lCand, nBegin, nPage, nCur, bVert);
}
void CCtrlMLEdit::DestroyIMECandWnd() {
	__sub_000E51F0(this, nullptr);
}
int32_t CCtrlMLEdit::IsWhite(char arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CCtrlMLEdit& CCtrlMLEdit::operator=(const CCtrlMLEdit& arg0) {
	return _op_assign_57(this, arg0);
}
CCtrlMLEdit& CCtrlMLEdit::_op_assign_57(CCtrlMLEdit* pThis, const CCtrlMLEdit& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlMLEdit::CREATEPARAM::~CREATEPARAM() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCtrlMLEdit::CREATEPARAM::_dtor_0() {
	return __sub_00290C00(this, nullptr);
}
 CCtrlMLEdit::CREATEPARAM::CREATEPARAM(const CCtrlMLEdit::CREATEPARAM& arg0) {
	_ctor_1( arg0);
}
void CCtrlMLEdit::CREATEPARAM::_ctor_1( const CCtrlMLEdit::CREATEPARAM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlMLEdit::CREATEPARAM::CREATEPARAM() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCtrlMLEdit::CREATEPARAM::_ctor_0() {
	return __sub_000E56C0(this, nullptr);
}
CCtrlMLEdit::CREATEPARAM& CCtrlMLEdit::CREATEPARAM::operator=(const CCtrlMLEdit::CREATEPARAM& arg0) {
	return _op_assign_3(this, arg0);
}
CCtrlMLEdit::CREATEPARAM& CCtrlMLEdit::CREATEPARAM::_op_assign_3(CCtrlMLEdit::CREATEPARAM* pThis, const CCtrlMLEdit::CREATEPARAM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlMLEdit::CEditCaret::~CEditCaret() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCtrlMLEdit::CEditCaret::_dtor_0() {
	return __sub_000E46C0(this, nullptr);
}
 CCtrlMLEdit::CEditCaret::CEditCaret(const CCtrlMLEdit::CEditCaret& arg0) {
	_ctor_1( arg0);
}
void CCtrlMLEdit::CEditCaret::_ctor_1( const CCtrlMLEdit::CEditCaret& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlMLEdit::CEditCaret::CEditCaret() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCtrlMLEdit::CEditCaret::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCtrlMLEdit::CEditCaret::MakeCaret(_x_com_ptr<IWzGr2DLayer> pLayerWnd, long l, long t, long height, long z) {
	__sub_000E4730(this, nullptr, CreateNakedParam(pLayerWnd), l, t, height, z);
}
void CCtrlMLEdit::CEditCaret::SetCaret(long l, long t, long width) {
	__sub_000E4C40(this, nullptr, l, t, width);
}
void CCtrlMLEdit::CEditCaret::HideCaret() {
	__sub_000E42C0(this, nullptr);
}
void CCtrlMLEdit::CEditCaret::SetReadOnlyCaret() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CCtrlMLEdit::CEditCaret::SetHideCaret(int32_t bShow) {
	__sub_000E4320(this, nullptr, bShow);
}
void CCtrlMLEdit::CEditCaret::Update(int32_t bShow) {
	__sub_000E4320(this, nullptr, bShow);
}
void CCtrlMLEdit::CEditCaret::Clear() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CCtrlMLEdit::CEditCaret& CCtrlMLEdit::CEditCaret::operator=(const CCtrlMLEdit::CEditCaret& arg0) {
	return _op_assign_10(this, arg0);
}
CCtrlMLEdit::CEditCaret& CCtrlMLEdit::CEditCaret::_op_assign_10(CCtrlMLEdit::CEditCaret* pThis, const CCtrlMLEdit::CEditCaret& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlMLEdit::CIMECandWnd::~CIMECandWnd() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCtrlMLEdit::CIMECandWnd::_dtor_0() {
	return __sub_000E5070(this, nullptr);
}
 CCtrlMLEdit::CIMECandWnd::CIMECandWnd(const CCtrlMLEdit::CIMECandWnd& arg0) {
	_ctor_1( arg0);
}
void CCtrlMLEdit::CIMECandWnd::_ctor_1( const CCtrlMLEdit::CIMECandWnd& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlMLEdit::CIMECandWnd::CIMECandWnd() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCtrlMLEdit::CIMECandWnd::_ctor_0() {
	return __sub_000E4FF0(this, nullptr);
}
void CCtrlMLEdit::CIMECandWnd::OnCreate(void* pData) {
	__sub_000E4F40(this, nullptr, pData);
}
void CCtrlMLEdit::CIMECandWnd::OnDestroy() {
	__sub_000E43E0(this, nullptr);
}
int32_t CCtrlMLEdit::CIMECandWnd::OnActivate(int32_t bActive) {
	return __sub_000E5040(this, nullptr, bActive);
}
int32_t CCtrlMLEdit::CIMECandWnd::OnSetFocus(int32_t bFocus) {
	return __sub_000E5050(this, nullptr, bFocus);
}
void CCtrlMLEdit::CIMECandWnd::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_000E4410(this, nullptr, msg, wParam, rx, ry);
}
void CCtrlMLEdit::CIMECandWnd::Draw(const tagRECT* pRect) {
	__sub_000E57A0(this, nullptr, pRect);
}
CCtrlMLEdit::CIMECandWnd& CCtrlMLEdit::CIMECandWnd::operator=(const CCtrlMLEdit::CIMECandWnd& arg0) {
	return _op_assign_9(this, arg0);
}
CCtrlMLEdit::CIMECandWnd& CCtrlMLEdit::CIMECandWnd::_op_assign_9(CCtrlMLEdit::CIMECandWnd* pThis, const CCtrlMLEdit::CIMECandWnd& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlMLEdit::CIMECandWnd::CREATEPARAM::~CREATEPARAM() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CCtrlMLEdit::CIMECandWnd::CREATEPARAM::_dtor_0() {
	return __sub_000E51C0(this, nullptr);
}
 CCtrlMLEdit::CIMECandWnd::CREATEPARAM::CREATEPARAM(const CCtrlMLEdit::CIMECandWnd::CREATEPARAM& arg0) {
	_ctor_1( arg0);
}
void CCtrlMLEdit::CIMECandWnd::CREATEPARAM::_ctor_1( const CCtrlMLEdit::CIMECandWnd::CREATEPARAM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlMLEdit::CIMECandWnd::CREATEPARAM::CREATEPARAM() {
	UNIMPLEMENTED; //_ctor_0();
}
void CCtrlMLEdit::CIMECandWnd::CREATEPARAM::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CCtrlMLEdit::CIMECandWnd::CREATEPARAM& CCtrlMLEdit::CIMECandWnd::CREATEPARAM::operator=(const CCtrlMLEdit::CIMECandWnd::CREATEPARAM& arg0) {
	return _op_assign_3(this, arg0);
}
CCtrlMLEdit::CIMECandWnd::CREATEPARAM& CCtrlMLEdit::CIMECandWnd::CREATEPARAM::_op_assign_3(CCtrlMLEdit::CIMECandWnd::CREATEPARAM* pThis, const CCtrlMLEdit::CIMECandWnd::CREATEPARAM& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

