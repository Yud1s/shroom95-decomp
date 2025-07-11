// Logo.cpp
#include "Logo.hpp"
#include "Logo_regen.ipp"

 CLogo::~CLogo() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CLogo::_dtor_0() {
	return __sub_0020BC80(this, nullptr);
}
 CLogo::CLogo(const CLogo& arg0) {
	_ctor_1( arg0);
}
void CLogo::_ctor_1( const CLogo& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CLogo::CLogo() {
	//UNIMPLEMENTED; //_ctor_0();
}
void CLogo::_ctor_0() {
	return __sub_0020BBC0(this, nullptr);
}
void CLogo::Init(void* pParam) {
    InitNXLogo();
    CInputSystem::GetInstance()->ShowCursor(0);

    const auto app = CWvsApp::ms_pInstance;
    const auto arg_ix = app->GetGameStartMode() != CWvsApp::GSM::WEB ? 3 : 5;
    auto arg = app->GetCmdLine(arg_ix);

    //if(!arg.IsEmpty() && app->GetAutoConnect()) {
        LogoEnd();
    //}

	//__sub_0020E240(this, nullptr, pParam);
}
void CLogo::Close() {
    CSoundMan::GetInstance()->PlayBGM(nullptr, 0, 0, 1000, 0);
    CStage::Close();
	//__sub_0020BF50(this, nullptr);
}
void CLogo::Update() {
    UpdateLogo();
    UpdateVideo();
	//__sub_0020E430(this, nullptr);
}
void CLogo::OnKey(const uint32_t wParam, const int32_t lParam) {
    if(!CanSkip()) {
        return;
    }

    if((lParam & 0x80000000) == 0 && (wParam == 0xd || wParam == 0x1b || wParam == 0x20)) {
        ForcedEnd();
    }
	//__sub_0020C510(this, nullptr, wParam, lParam);
}
int32_t CLogo::OnSetFocus(int32_t bFocus) {
    return 1;
	//return __sub_0020BC20(this, nullptr, bFocus);
}
void CLogo::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
    if(CanSkip() && msg == 0x202) {
        ForcedEnd();
    }
	//__sub_0020C550(this, nullptr, msg, wParam, rx, ry);
}
bool CLogo::CanSkip() const
{
    if(m_dwTickInitial == 0) {
        return false;
    }

    const auto t = timeGetTime();
    const auto elapsedTicks  = (t - m_dwTickInitial) * 0x18;
    return (elapsedTicks / 1000) > -1;

	//return __sub_0020BAB0(this, nullptr);
}
void CLogo::InitWZLogo() {
	__sub_0020C580(this, nullptr);
}
void CLogo::DrawWZLogo(long nFrame) {
	__sub_0020D530(this, nullptr, nFrame);
}
void CLogo::LogoEnd() {
	__sub_0020BD00(this, nullptr);
}
void CLogo::ForcedEnd() {
	__sub_0020BF80(this, nullptr);
}
void CLogo::InitNXLogo() {
	__sub_0020DAE0(this, nullptr);
}
void CLogo::DrawNXLogo(const long nFrame) {
	__sub_0020D820(this, nullptr, nFrame);
}
void CLogo::UpdateLogo() {
	__sub_0020E330(this, nullptr);
}
void CLogo::UpdateVideo() {
	__sub_0020BDB0(this, nullptr);
}
CLogo& CLogo::operator=(const CLogo& arg0) {
	return _op_assign_21(this, arg0);
}
CLogo& CLogo::_op_assign_21(CLogo* pThis, const CLogo& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

