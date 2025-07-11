// Exception.cpp
#include "Exception.hpp"
#include "Exception_regen.ipp"

void *CMSException::THROW_INFO = nullptr;
CMSException::CMSException() = default;
CMSException::~CMSException() = default;
CMSException::CMSException(HRESULT hr) : ZException(hr) {
    auto app = CWvsApp::GetInstance();
    if (app) {
        app->SendBackupPacket(3, hr);
    }
}
void CMSException::_ctor_0(HRESULT hr) {
    new(this) CMSException(hr);
}
ZXString<char> CMSException::GetMessageA() {
    //TODO write this out
    return __sub_001210B0(this, nullptr);
}


void *CTerminateException::THROW_INFO = nullptr;
CTerminateException::~CTerminateException() = default;
CTerminateException::CTerminateException(HRESULT hr) : CMSException(hr) {
}
void CTerminateException::_ctor_1(HRESULT hr) {
    new(this) CTerminateException(hr);
}


void *CPatchException::THROW_INFO = nullptr;
CPatchException::~CPatchException() = default;
CPatchException::CPatchException(long nTargetVersion) : CMSException(0x20000000) {
    m_pi.nCurrentVersion = 95;
    m_pi.nTargetVersion = nTargetVersion;

    auto cmdLine = GetCommandLineA();
    strcpy_s(m_pi.sCommandLine.data(), m_pi.sCommandLine.size(), cmdLine);

    //todo CORRECT?
    char buf[MAX_PATH + 1];
    GetCurrentDirectoryA(MAX_PATH, buf);
    lstrcatA(buf, "\\");
    strcpy_s(m_pi.sRootPath.data(), m_pi.sRootPath.size(), buf);
}

void CPatchException::_ctor_1(long nTargetVersion) {
    new(this) CPatchException(nTargetVersion);
}



void* CDisconnectException::THROW_INFO = nullptr;
CDisconnectException::~CDisconnectException() = default;
CDisconnectException::CDisconnectException(HRESULT hr): CMSException(hr) {
}
void CDisconnectException::_ctor_1( HRESULT hr) {
    new(this) CDisconnectException(hr);
}
long CDisconnectException::GetNoticeIdx() {
    auto n = Error() - 0x21000001;
    switch(n) {
        case 0:
            return 0x16;
        case 1:
            return 0x17;
        case 2:
            return 0x18;
        case 3:
            return 0x19;
        case 4:
            return 0x23;
        default:
            return -1;

    }
}
