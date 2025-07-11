// StdAfx.hpp
#pragma once

#include "util/base.h"
#include "pcom/wz.h"


// Level: 0 0x15d7a
class __ZAPILoader;

// Level: 0 0x133eb
class ZExceptionHandler;

class __ZAPILoader {
// Nested
public:
    struct RAWKEY {
// Nested
// Fields
    public:
        std::array<unsigned long, 32> adw;
// Methods
    };
// Fields
protected:
    std::array<HINSTANCE__ *, 9> m_ahDll;
protected:
    __ZAPILoader::RAWKEY m_rawkey;
protected:
    uint64_t m_sr;
protected:
    uint64_t m_lastRemnant;
protected:
    uint32_t m_uLastRemnant{};
protected:
    uint32_t m_uXorChain{};
protected:
    uint32_t m_uXorChainSize{};
// Methods
public:
    ~__ZAPILoader();

public:
    void _dtor_0();

public:
    __ZAPILoader();

public:
    void _ctor_1();

public:
    void MakeRawKey(uint64_t key, __ZAPILoader::RAWKEY &rawkey);

protected:
    void ShowErrorMessageAndExit();

protected:
    void InitDecoderInfo();

protected:
    void LoadLibraries();

protected:
    void LoadAPI();

protected:
    void FreeLibraries();

protected:
    uint32_t DecodePackage(const void *raw_pSrc, uint32_t &pibot, void *raw_pDst);

protected:
    void _Decode(unsigned char *pDst, const unsigned char *pSrc, uint32_t uLen);

protected:
    uint64_t Decode(uint64_t b, const __ZAPILoader::RAWKEY &rawkey);

protected:
    const void *_GetS();
};

STATIC_ASSERT_SIZE(__ZAPILoader, 200);

/*class ZExceptionHandler {
// Nested
// Fields
private:
    ZFatalSectionData m_cs;
private:
    volatile long m_bInFilter{};
private:
    std::array<char, 260> m_sReportFileName{};
private:
    PROC *m_pPreviousFilter{};
private:
    void *m_hReportFile{};
private:
    int32_t m_bOverwrite{};
private:
    int32_t m_bNoDialog{};
private:
    int32_t m_bNoMiniDump{};
private:
    PROC *m_pfnHandler{};
private:
    void *m_hProcess{};
private:
    PROC *_SymInitialize{};
private:
    PROC *_SymCleanup{};
private:
    PROC *_StackWalk{};
private:
    PROC *_SymFunctionTableAccess{};
private:
    PROC *_SymGetModuleBase{};
private:
    PROC *_SymGetSymFromAddr{};
private:
    PROC *_SymGetLineFromAddr{};
private:
    PROC *_MiniDumpWriteDump{};
// Methods
public:
    ~ZExceptionHandler();

public:
    void _dtor_0();

public:
    ZExceptionHandler();

public:
    void _ctor_1();

public:
    void SetReportFileName(const char *arg0);

public:
    void SetAppendMode(int32_t arg0);

public:
    void SetHandler(PROC *arg0);

public:
    void SetNoDialog(int32_t arg0);

public:
    void SetNoMiniDump(int32_t arg0);

public:
    void WriteMiniDumpNow();

private:
    static long __stdcall RawUnhandledExceptionFilter(_EXCEPTION_POINTERS *pExceptionInfo);

private:
    long UnhandledExceptionFilter(_EXCEPTION_POINTERS *pExceptionInfo);

private:
    void GenerateExceptionReport(_EXCEPTION_POINTERS *pExceptionInfo);

private:
    static char *__cdecl GetExceptionString(unsigned long dwCode);

private:
    static int32_t __cdecl GetLogicalAddress(void *pAddr, char *sModule, unsigned long len, unsigned long &dwSection,
                                             unsigned long &dwOffset);

private:
    void IntelStackWalk(_CONTEXT *pContext);

private:
    void DbgHelpStackWalk(_CONTEXT *pContext);

private:
    int32_t InitDbgHelpFunctions();

private:
    int32_t __cdecl Report(const char *sFormat, none sBuff);

private:
    int32_t GenerateMiniDump(_EXCEPTION_POINTERS *pExceptionPointers);
};

STATIC_ASSERT_SIZE(ZExceptionHandler, 332);*/


int32_t __cdecl _LoadProc(HINSTANCE__ *arg0);

void __cdecl ZtlEnterFatalSection(ZFatalSectionData *pfs);
