#include <winsock2.h>
#include <cstring>
#include <iostream>
#include "zexception.h"


ZException::ZException() {
    m_hr = 0;
}

[[maybe_unused]] ZException::ZException(const HRESULT hr) : m_hr(hr) {}

[[maybe_unused]] HRESULT ZException::Error() const { return m_hr; }

[[noreturn]]  void ZException::Throw(const HRESULT hr) {
    //TODO resolve that
    throw ZException(hr); // NOLINT(*-exception-baseclass)
}

[[noreturn]]  void ZException::Throw() {
    //TODO resolve that
    throw *this; // NOLINT(*-exception-baseclass)
}

void ZException::_ctor_0(const HRESULT hr) {
    new(this) ZException(hr);
}

[[noreturn]]  void ZException::ThrowLastError() {
#ifdef _WIN32
    Throw(static_cast<HRESULT>(GetLastError()));
#else
    Throw(errno);
#endif
}

[[noreturn]]  void ZException::ThrowLastSocketError() {
#ifdef _WIN32
    Throw(WSAGetLastError());
#else
    Throw(errno);
#endif

}

/*const char *ZException::what() const noexcept {
    static char buf[32]{};
    sprintf(buf, "zexception: 0x%08X", m_hr);
    return &buf[0];
}*/


ZExceptionHandler* ZExceptionHandler::_G_ZEH = new ZExceptionHandler();

ZExceptionHandler::ZExceptionHandler() = default;

[[maybe_unused]] void ZExceptionHandler::SetReportFileName(const char *file_name) {
    strcpy_s(_report_file_name.data(), MAX_PATH, file_name);
}

[[maybe_unused]] void ZExceptionHandler::SetAppendMode(const bool append) {
    _should_overwrite = !append;
}

[[maybe_unused]] void ZExceptionHandler::SetHandler(void (*handler)(int, const char *)) {
    _handler = handler;
}

[[maybe_unused]] void ZExceptionHandler::SetNoDialog(const bool no_dialog) {
    this->_no_dialog = no_dialog;
}

[[maybe_unused]] void ZExceptionHandler::SetNoMiniDump(const bool no_mini_dump) {
    this->_no_mini_dump = no_mini_dump;

}

[[maybe_unused]] void ZExceptionHandler::WriteMiniDumpNow() {
    //TODO implement
}

int ZExceptionHandler::UnhandledExceptionFilter(_EXCEPTION_POINTERS *pExceptionInfo) {
    // Spin-lock _in_filter
    while (_in_filter.exchange(true)) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    {
        ZFatalSectionGuard guard(_lock);
        // Call handler
        if (_handler) {
            _handler(0, _report_file_name.data());
        }

        // TODO setup file before
        this->GenerateExceptionReport(pExceptionInfo);

        if (_handler) {
            _handler(1, _report_file_name.data());
        }
    }

    _in_filter = false;
    while (_in_filter) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    if (_prev_filter) {
        return _prev_filter(pExceptionInfo);
    }

    return _no_dialog ? 1 : 0;
}

void ZExceptionHandler::GenerateExceptionReport(_EXCEPTION_POINTERS *pExceptionInfo) {

    // Get local time
    //Report("==== %d/%d/%d %02d:%02d:%02d.%03d ==============================\\r\\n\"", )

    const auto tid = std::this_thread::get_id();
    const auto pid = GetProcessId(GetCurrentProcess()); //TODO
    Report(R"(PID(%X), TID(%X)\r\n")", pid, tid);

    const auto code = 0; //TODO
    const auto msg = GetExceptionString(code);
    Report(R"(Exception code: %08X (%s)\r\n)", code, msg);

    // Check for TID in record
    size_t section = 0;
    size_t offset = 0;
    void *addr = nullptr;
    char module[MAX_PATH]{0};
    GetLogicalAddress(addr, module, MAX_PATH, section, offset);
    Report(R"(Fault address: %p, %s, %04X:%08X\r\n)", addr, module, section, offset);

    // TODO registers


    const auto ctx = nullptr; // TODO
    if (InitDbgHelpFunctions()) {
        GenerateMiniDump(pExceptionInfo);
        DbgHelpStackWalk(ctx);
        _SymCleanup(_process_handle);
        Report("\r\n");
    } else {
        Report("DBGHELP.DLL not found\r\n");
        IntelStackWalk(ctx);
    }
}

void ZExceptionHandler::IntelStackWalk(_CONTEXT *ctx) {
    // TODO just iterate the stack until bad write ptr

}

bool ZExceptionHandler::DbgHelpStackWalk(_CONTEXT *ctx) {
    Report("\r\nCall stack:\r\n");
    Report("Address Frame\r\n");

    const auto thread = nullptr; //TODO
    uint8_t frame[0x1c]; //TODO

    while (_StackWalk(
            0x14c, //TODO
            _process_handle,
            thread,
            &frame,
            ctx,
            nullptr,
            _SymFunctionTableAccess,
            _SymGetModuleBase,
            nullptr


    )) {

        //TODO

        break;

    }


    return false;
}

bool ZExceptionHandler::Report(const char * fmt, ...) {
    //Printf for now
    va_list args;
            va_start(args, fmt);
    vprintf(fmt, args);
            va_end(args);

    return false;
}

int ZExceptionHandler::GenerateMiniDump(_EXCEPTION_POINTERS *pExceptionInfo) {
    if(_no_mini_dump || !_MiniDumpWriteDump) {
        return 0;
    }

    //TODO write minidump


    return 0;
}

int ZExceptionHandler::RawUnhandledExceptionFilter(_EXCEPTION_POINTERS *p) {
    return ZExceptionHandler::_G_ZEH->UnhandledExceptionFilter(p);
}

char *ZExceptionHandler::GetExceptionString(HRESULT code) {
    static char BUFFER[1024];
    strcpy_s(BUFFER, "Unknown");
    // TODO format HRESULT
    return BUFFER;
}

int ZExceptionHandler::GetLogicalAddress(void *addr, char *module, size_t len, size_t &section, size_t &offset) {
    return 0;
}

bool ZExceptionHandler::InitDbgHelpFunctions() {
    //TODO load dbghelper functions
    if(!_SymGetLineFromAddr) {

        // TODO load
        return false;

    }
    return true;
}



