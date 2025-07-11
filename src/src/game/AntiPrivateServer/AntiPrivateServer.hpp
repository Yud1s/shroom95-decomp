// AntiPrivateServer.hpp
#pragma once

#include "util/base.h"
#include "pcom/wz.h"


// Level: 0 0x12dc5
class CCriticalSector;

class CCriticalSector {
// Nested
// Fields
private:
    _RTL_CRITICAL_SECTION m_cs;
// Methods
public:
    ~CCriticalSector();

public:
    void _dtor_0();

public:
    CCriticalSector();

public:
    void _ctor_1();

public:
    void Enter();

public:
    void Leave();
};

STATIC_ASSERT_SIZE(CCriticalSector, 24);


unsigned long __cdecl GetGPNMemCrc32(unsigned long dwImgBase, unsigned long dwGPNStart, unsigned long dwGPNSize);

unsigned long __cdecl RVAToOffset(void *lpBase, unsigned long dwRva);

unsigned long __cdecl CheckSumForce(unsigned char *pbStart, unsigned long dwSize);

PROC *__stdcall MyGetProcAddress(HINSTANCE__ *hModule, const char *lpProcName);

HINSTANCE__ *__cdecl InitSafeDll();

void __cdecl HideDll(HINSTANCE__ *hModule);

static HMODULE MS_GetModuleHandleW(wchar_t const* moduleName)
{
    return GetModuleHandleW(moduleName);
}
