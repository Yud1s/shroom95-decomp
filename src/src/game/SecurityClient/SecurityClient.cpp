// SecurityClient.cpp
#include "SecurityClient.hpp"
#include "SecurityClient_regen.ipp"

CSecurityException::~CSecurityException() = default;

CSecurityException::CSecurityException(const CSecurityException &__that) {
    m_dwErrorCode = __that.m_dwErrorCode;
}

void CSecurityException::_ctor_1(const CSecurityException &__that) {
    new(this) CSecurityException(__that);
}

CSecurityException::CSecurityException(unsigned long arg0) {
    m_dwErrorCode = arg0;
}

void CSecurityException::_ctor_0(unsigned long arg0) {
    new(this) CSecurityException(arg0);
}

ZXString<char> CSecurityException::GetErrorMessage() {
    return {};
}

unsigned long CSecurityException::GetErrorCode() {
    return m_dwErrorCode;
}

CSecurityException &CSecurityException::operator=(const CSecurityException &arg0) {
    if (this != &arg0) {
        m_dwErrorCode = arg0.m_dwErrorCode;
    }
    return *this;
}

CSecurityException &CSecurityException::_op_assign_5(CSecurityException *pThis, const CSecurityException &arg0) {
    return pThis->operator=(arg0);
}

CSecurityException::CSecurityException() = default;

CSecurityClearFailed::~CSecurityClearFailed() = default;

CSecurityClearFailed::CSecurityClearFailed(const CSecurityClearFailed &__that) = default;

void CSecurityClearFailed::_ctor_1(const CSecurityClearFailed &__that) {
    new(this) CSecurityClearFailed(__that);
}

CSecurityClearFailed::CSecurityClearFailed(unsigned long arg0) : CSecurityException(arg0) {
}

void CSecurityClearFailed::_ctor_0(unsigned long arg0) {
    new(this) CSecurityException(arg0);
}

ZXString<char> CSecurityClearFailed::GetErrorMessage() {
    return {};
}

CSecurityClearFailed &CSecurityClearFailed::operator=(const CSecurityClearFailed &arg0) {
    if (this != &arg0) {
        CSecurityException::operator=(arg0);
    }
    return *this;
}

CSecurityClearFailed &
CSecurityClearFailed::_op_assign_4(CSecurityClearFailed *pThis, const CSecurityClearFailed &arg0) {
    return pThis->operator=(arg0);
}

CSecurityClient::~CSecurityClient() {
}

void CSecurityClient::_dtor_0() {
    return __sub_0061AEB0(this, nullptr);
}

CSecurityClient::CSecurityClient(const CSecurityClient &arg0) {
    _ctor_1(arg0);
}

void CSecurityClient::_ctor_1(const CSecurityClient &arg0) {
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSecurityClient::CSecurityClient() {
    //TODO UNIMPLEMENTED; //_ctor_0();
}

void CSecurityClient::_ctor_0() {
    return __sub_0061A870(this, nullptr);
}

void CSecurityClient::InitModule() {
    // Loads hackshield
    //__sub_0061A9C0(this, nullptr);
}

void CSecurityClient::ClearModule() {
    // Uninit HS
    //__sub_0061AD70(this, nullptr);
}

void CSecurityClient::StartModule() {

    m_bStartModule = 1;
    m_dwCallbackTime = GetTickCount();

    //__sub_0061ABA0(this, nullptr);
}

void CSecurityClient::StopModule() {
    // Stops HS
    //__sub_0061AE10(this, nullptr);
}

void CSecurityClient::Update() {
    //__sub_0061A730(this, nullptr);
}

void CSecurityClient::OnPacket(CInPacket &iPacket) {
    auto code = iPacket.Decode1();
    if (code == 2) {
        OnCheckClientIntegrityRequest(iPacket);
    }

    //__sub_0061AE80(this, nullptr, iPacket);
}

void CSecurityClient::SetThreat(long arg0, long arg1, void *arg2) {
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CSecurityClient::SetUserID(const char *arg0) {
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CSecurityClient::OnCheckClientIntegrityRequest(CInPacket &iPacket) {

    const size_t REQ_SIZE = 0x192;
    std::array<uint8_t, REQ_SIZE> req{};

    auto size = iPacket.Decode2();
    iPacket.DecodeBuffer(req.data(), REQ_SIZE);

    // Would send the challenge response here
    //__sub_0061AC10(this, nullptr, iPacket);
}

void CSecurityClient::SetMainWnd(HWND__ *arg0) {
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSecurityClient &CSecurityClient::operator=(CSecurityClient &arg0) {
    return _op_assign_13(this, arg0);
}

CSecurityClient &CSecurityClient::_op_assign_13(CSecurityClient *pThis, CSecurityClient &arg0) {
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSecurityInitFailed::~CSecurityInitFailed() {
	 UNIMPLEMENTED; // _dtor_0();
}

void CSecurityInitFailed::_dtor_0() {
    return __sub_0061AB50(this, nullptr);
}

CSecurityInitFailed::CSecurityInitFailed(const CSecurityInitFailed &__that) {
    _ctor_1(__that);
}

void CSecurityInitFailed::_ctor_1(const CSecurityInitFailed &__that) {
    return __sub_0061AB60(this, nullptr, __that);
}

CSecurityInitFailed::CSecurityInitFailed(unsigned long arg0) {
    _ctor_0(arg0);
}

void CSecurityInitFailed::_ctor_0(unsigned long arg0) {
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZXString<char> CSecurityInitFailed::GetErrorMessage() {
    return __sub_0061B320(this, nullptr);
}

CSecurityInitFailed &CSecurityInitFailed::operator=(const CSecurityInitFailed &arg0) {
    return _op_assign_4(this, arg0);
}

CSecurityInitFailed &CSecurityInitFailed::_op_assign_4(CSecurityInitFailed *pThis, const CSecurityInitFailed &arg0) {
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSecurityThreatDetected::~CSecurityThreatDetected() {
	 UNIMPLEMENTED; // _dtor_0();
}

void CSecurityThreatDetected::_dtor_0() {
    return __sub_0061A7C0(this, nullptr);
}

CSecurityThreatDetected::CSecurityThreatDetected(const CSecurityThreatDetected &__that) {
    _ctor_1(__that);
}

void CSecurityThreatDetected::_ctor_1(const CSecurityThreatDetected &__that) {
    return __sub_0061A7F0(this, nullptr, __that);
}

CSecurityThreatDetected::CSecurityThreatDetected(unsigned long arg0) {
    _ctor_0(arg0);
}

void CSecurityThreatDetected::_ctor_0(unsigned long arg0) {
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZXString<char> CSecurityThreatDetected::GetErrorMessage() {
    return __sub_0061B720(this, nullptr);
}

CSecurityThreatDetected &CSecurityThreatDetected::operator=(const CSecurityThreatDetected &arg0) {
    return _op_assign_4(this, arg0);
}

CSecurityThreatDetected &
CSecurityThreatDetected::_op_assign_4(CSecurityThreatDetected *pThis, const CSecurityThreatDetected &arg0) {
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSecurityUpdateFailed::~CSecurityUpdateFailed() {
	 UNIMPLEMENTED; // _dtor_0();
}

void CSecurityUpdateFailed::_dtor_0() {
    return __sub_0061AB40(this, nullptr);
}

CSecurityUpdateFailed::CSecurityUpdateFailed(const CSecurityUpdateFailed &__that) {
    _ctor_1(__that);
}

void CSecurityUpdateFailed::_ctor_1(const CSecurityUpdateFailed &__that) {
    return __sub_0061AB80(this, nullptr, __that);
}

CSecurityUpdateFailed::CSecurityUpdateFailed(unsigned long arg0) {
    _ctor_0(arg0);
}

void CSecurityUpdateFailed::_ctor_0(unsigned long arg0) {
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZXString<char> CSecurityUpdateFailed::GetErrorMessage() {
    return __sub_0061AF80(this, nullptr);
}

CSecurityUpdateFailed &CSecurityUpdateFailed::operator=(const CSecurityUpdateFailed &arg0) {
    return _op_assign_4(this, arg0);
}

CSecurityUpdateFailed &
CSecurityUpdateFailed::_op_assign_4(CSecurityUpdateFailed *pThis, const CSecurityUpdateFailed &arg0) {
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t __stdcall _AhnHS_Callback(long lCode, long lParamSize, void *pParam) {
    return __sub_0061A820(lCode, lParamSize, pParam);
}
