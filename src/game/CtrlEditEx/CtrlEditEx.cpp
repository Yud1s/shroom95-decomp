// CtrlEditEx.cpp
#include "CtrlEditEx.hpp"
#include "CtrlEditEx_regen.ipp"

 CCtrlEditEx::~CCtrlEditEx() {
	//_dtor_0();
}
void CCtrlEditEx::_dtor_0() {
    this->~CCtrlEditEx();
	//return __sub_000E3CB0(this, nullptr);
}
 CCtrlEditEx::CCtrlEditEx(const CCtrlEditEx& arg0) {
	_ctor_1( arg0);
}
void CCtrlEditEx::_ctor_1( const CCtrlEditEx& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CCtrlEditEx::CCtrlEditEx() = default;
void CCtrlEditEx::_ctor_0() {
    new(this) CCtrlEditEx();
	//return __sub_000E3C70(this, nullptr);
}
void CCtrlEditEx::Update() {
    auto t = timeGetTime();
    if(m_bSwitchingMode && (t - m_tShowSwitchingChar) > 0) {
        m_tShowSwitchingChar = 0;
        InvalidateRect();
    }
    CCtrlEdit::Update();
	//__sub_000E3CD0(this, nullptr);
}
void CCtrlEditEx::OnKey(uint32_t wParam, uint32_t lParam) {
	__sub_000E3DE0(this, nullptr, wParam, lParam);
}
void CCtrlEditEx::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
    if(msg == WM_LBUTTONDOWN || msg == WM_LBUTTONDBLCLK) {
        m_bSwitchingMode = false;
    }
    CCtrlEdit::OnMouseButton(msg, wParam, rx, ry);
	//__sub_000E3D10(this, nullptr, msg, wParam, rx, ry);
}
void CCtrlEditEx::OnIMEResult(const char* sComp) {
    if(sComp && *sComp) {
        EndSwitching();
    }
    CCtrlEdit::OnIMEResult(sComp);
	//__sub_000E3DB0(this, nullptr, sComp);
}
ZXString<char> CCtrlEditEx::FilterString(ZXString<char> sInput) {
	ZXString<char> ret;
	return *__sub_000E3F90(this, nullptr, &ret, CreateNakedParam(sInput));
}
void CCtrlEditEx::SetSwitchingChar(char cChar) {
    ExtractSelection(false);
    InsertString(ZXString<char>(cChar), 0, -1);
    m_selCol = m_col - 1;
    m_bSwitchingMode = true;
    m_tShowSwitchingChar = timeGetTime() + 500;
    InvalidateRect();
	//__sub_000E3F20(this, nullptr, cChar);
}
char CCtrlEditEx::GetSwitchingChar() {
    if(!m_bSwitchingMode) {
        return 0;
    }

    if(m_selCol < m_col) {
        return m_sText.Mid(m_selCol, m_col)[0];
    }

    return 0;

	//return __sub_000E41E0(this, nullptr);
}
void CCtrlEditEx::EndSwitching() {
    if(!m_bSwitchingMode) {
        return;
    }

    m_bSwitchingMode = 0;
    m_tShowSwitchingChar = 0;
    m_selCol = m_col;

    CCtrlWnd::InvalidateRect();
	//__sub_000E3D40(this, nullptr);
}
void CCtrlEditEx::SetReadOnly(int32_t arg0) {
    m_bReadOnly = arg0;
}
void CCtrlEditEx::DeleteString() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CCtrlEditEx& CCtrlEditEx::operator=(const CCtrlEditEx& arg0) {
	return _op_assign_16(this, arg0);
}
CCtrlEditEx& CCtrlEditEx::_op_assign_16(CCtrlEditEx* pThis, const CCtrlEditEx& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

