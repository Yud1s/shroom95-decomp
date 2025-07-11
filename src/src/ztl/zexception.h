#pragma once

#include <array>

#include "util.h"
#include "zlock.h"

class ZException {
    HRESULT m_hr{};
public:
    explicit ZException(HRESULT hr);
    ZException();

    void _ctor_0(HRESULT hr);

    //todo c++ exception const char* what() const noexcept override;

    [[noreturn]]  static void Throw(HRESULT hr);
    [[noreturn]]  static void ThrowLastError();
    [[noreturn]]  static void ThrowLastSocketError();
    [[noreturn]] void Throw();


    [[maybe_unused]] [[nodiscard]] HRESULT Error() const;


public:
    static inline void *THROW_INFO = nullptr; //TODO
};

class ZExceptionHandler {
private:
    ZFatalSection _lock;
    std::atomic_bool _in_filter{};
    std::array<char, 260> _report_file_name{};

    int (*_prev_filter)(_EXCEPTION_POINTERS *) = nullptr;

    void *_report_file_handle{};
    int _should_overwrite = false;
    int _no_dialog = false;
    int _no_mini_dump = false;

    void (*_handler)(int, const char *){};

    void *_process_handle{};

    int32_t (*_SymInitialize)(void *, char *, int32_t){};

    int32_t (*_SymCleanup)(void *){};

    int32_t
    (*_StackWalk)(uint32_t, void *, void *, void *, void *, int32_t (*)(void *, uint32_t, void *, uint32_t, uint32_t *),
                  void *(*)(void *, uint32_t), uint32_t (*)(void *, uint32_t),
                  uint32_t (*)(void *, void *, void *)){};

    void *(*_SymFunctionTableAccess)(void *, uint32_t){};

    uint32_t (*_SymGetModuleBase)(void *, uint32_t){};

    int32_t (*_SymGetSymFromAddr)(void *, uint32_t, uint32_t *, void *){};

    int32_t (*_SymGetLineFromAddr)(void *, uint32_t, uint32_t *, void *){};

    int32_t (*_MiniDumpWriteDump)(void *, uint32_t, void *, int, void *, void *, void *){};

    static ZExceptionHandler* _G_ZEH;
public:

    ZExceptionHandler();
    [[maybe_unused]] void SetReportFileName(const char *file_name);
    [[maybe_unused]] void SetAppendMode(bool append);
    [[maybe_unused]] void SetHandler(void (*handler)(int, const char *));
    [[maybe_unused]] void SetNoDialog(bool no_dialog);
    [[maybe_unused]] void SetNoMiniDump(bool no_mini_dump);
    [[maybe_unused]] void WriteMiniDumpNow();
    int UnhandledExceptionFilter(_EXCEPTION_POINTERS *pExceptionInfo);
    void GenerateExceptionReport(_EXCEPTION_POINTERS *pExceptionInfo);
    void IntelStackWalk(_CONTEXT *ctx);
    bool DbgHelpStackWalk(_CONTEXT *ctx);
    bool InitDbgHelpFunctions();
    bool Report(const char *, ...);
    int GenerateMiniDump(_EXCEPTION_POINTERS *pExceptionInfo);

    static int RawUnhandledExceptionFilter(_EXCEPTION_POINTERS *);
    static char *GetExceptionString(HRESULT code);
    static int GetLogicalAddress(void *addr, char *module, size_t len, size_t &section, size_t &offset);
};

Z_ASSERT_SIZE(ZExceptionHandler, 0x14c);





