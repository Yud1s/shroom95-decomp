#include "helper.h"
#include "macros.h"
#include "asm_helper.h"
#include "zallocex.h"


void* operator new(size_t size) {
    return z_anon_alloc(size);
}
void* operator new[](size_t size) {
    return z_anon_alloc(size);
}
void operator delete(void* ptr) {
    z_anon_free(ptr);
}
void operator delete[](void* ptr) {
    z_anon_free(ptr);
}

void *__cdecl _operator_new(size_t size)
{
    return z_anon_alloc(size);
}
void __cdecl _operator_delete(void *p)
{
    z_anon_free(p);
}

void _operator_delete_0(void* p) {
    z_anon_free(p);
}

void* _operator_new_array(uint32_t nSize) {
    return z_anon_alloc(nSize);
}

extern "C" void __cdecl _aulldvrm();

NAKED void __aulldvrm()
{
    __asm {
        jmp _aulldvrm
    }
}


extern "C" void __cdecl _alldiv();

NAKED void __alldiv()
{
    __asm {
        jmp _alldiv
        /*push edi
            push esi
            push ebx
            xor  edi, edi
            mov  eax, dword ptr [esp + 0x14]
            or   eax, eax
            jge  L_2
            inc  edi
            mov  edx, dword ptr [esp + 0x10]
            neg  eax
            neg  edx
            sbb  eax, 0
            mov  dword ptr [esp + 0x14], eax
            mov  dword ptr [esp + 0x10], edx
            L_2:
            mov  eax, dword ptr [esp + 0x1C]
            or   eax, eax
            jge  L_3
            inc  edi
            mov  edx, dword ptr [esp + 0x18]
            neg  eax
            neg  edx
            sbb  eax, 0
            mov  dword ptr [esp + 0x1C], eax
            mov  dword ptr [esp + 0x18], edx
            L_3:
            or   eax, eax
            jnz  L_4
            mov  ecx, dword ptr [esp + 0x18]
            mov  eax, dword ptr [esp + 0x14]
            xor  edx, edx
            div  ecx
            mov  ebx, eax
            mov  eax, dword ptr [esp + 0x10]
            div  ecx
            mov  edx, ebx
            jmp  L_8
            L_4:
            mov  ebx, eax
            mov  ecx, dword ptr [esp + 0x18]
            mov  edx, dword ptr [esp + 0x14]
            mov  eax, dword ptr [esp + 0x10]
            L_5:
            shr  ebx, 1
            rcr  ecx, 1
            shr  edx, 1
            rcr  eax, 1
            or   ebx, ebx
            jnz  L_5
            div  ecx
            mov  esi, eax
            mul  dword ptr [esp + 0x1C]
            mov  ecx, eax
            mov  eax, dword ptr [esp + 0x18]
            mul  esi
            add  edx, ecx
            jb   L_6
            cmp  edx, dword ptr [esp + 0x14]
            ja   L_6
            jb   L_7
            cmp  eax, dword ptr [esp + 0x10]
            jbe  L_7
            L_6:
            dec  esi
            L_7:
            xor  edx, edx
            mov  eax, esi
            L_8:
            dec  edi
            jnz  L_9
            neg  edx
            neg  eax
            sbb  edx, 0
            L_9:
            pop  ebx
            pop  esi
            pop  edi
            ret  2*8*/
    }
}


extern "C" void __cdecl _aulldiv();

NAKED void __aulldiv()
{
    __asm {
        jmp _aulldiv
        /*push ebx
        push esi
        mov  eax, dword ptr [esp + 0x18]
        or   eax, eax
        jnz  L_2
        mov  ecx, dword ptr [esp + 0x14]
        mov  eax, dword ptr [esp + 0x10]
        xor  edx, edx
        div  ecx
        mov  ebx, eax
        mov  eax, dword ptr [esp + 0xC]
        div  ecx
        mov  edx, ebx
        jmp  L_6
        L_2:
        mov  ecx, eax
        mov  ebx, dword ptr [esp + 0x14]
        mov  edx, dword ptr [esp + 0x10]
        mov  eax, dword ptr [esp + 0xC]
        L_3:
        shr  ecx, 1
        rcr  ebx, 1
        shr  edx, 1
        rcr  eax, 1
        or   ecx, ecx
        jnz  L_3
        div  ebx
        mov  esi, eax
        mul  dword ptr [esp + 0x18]
        mov  ecx, eax
        mov  eax, dword ptr [esp + 0x14]
        mul  esi
        add  edx, ecx
        jb   L_4
        cmp  edx, dword ptr [esp + 0x10]
        ja   L_4
        jb   L_5
        cmp  eax, dword ptr [esp + 0xC]
        jbe  L_5
        L_4:
        dec  esi
        L_5:
        xor  edx, edx
        mov  eax, esi
        L_6:
        pop  esi
        pop  ebx
        ret  2*8*/
    }
}

extern "C" void __cdecl _allmul();


NAKED void __allmul()
{
    __asm {
        jmp _allmul
        /*mov  eax, dword ptr [esp + 0x8]
            mov  ecx, dword ptr [esp + 0x10]
            or   ecx, eax
            mov  ecx, dword ptr [esp + 0xC]
            jnz  L_2
            mov  eax, dword ptr [esp + 0x4]
            mul  ecx
            ret  2*8
            L_2:
            push ebx
            mul  ecx
            mov  ebx, eax
            mov  eax, dword ptr [esp + 0x8]
            mul  dword ptr [esp + 0x14]
            add  ebx, eax
            mov  eax, dword ptr [esp + 0x8]
            mul  ecx
            add  edx, ebx
            pop  ebx
            ret  2*8*/
    }
}

extern "C" void __cdecl _aullrem();

NAKED void __aullrem()
{
    __asm {
        jmp _aullrem
        /*push ebx
            mov  eax, dword ptr [esp + 0x14]
            or   eax, eax
            jnz  L_2
            mov  ecx, dword ptr [esp + 0x10]
            mov  eax, dword ptr [esp + 0xC]
            xor  edx, edx
            div  ecx
            mov  eax, dword ptr [esp + 0x8]
            div  ecx
            mov  eax, edx
            xor  edx, edx
            jmp  L_6
            L_2:
            mov  ecx, eax
            mov  ebx, dword ptr [esp + 0x10]
            mov  edx, dword ptr [esp + 0xC]
            mov  eax, dword ptr [esp + 0x8]
            L_3:
            shr  ecx, 1
            rcr  ebx, 1
            shr  edx, 1
            rcr  eax, 1
            or   ecx, ecx
            jnz  L_3
            div  ebx
            mov  ecx, eax
            mul  dword ptr [esp + 0x14]
            xchg eax, ecx
            mul  dword ptr [esp + 0x10]
            add  edx, ecx
            jb   L_4
            cmp  edx, dword ptr [esp + 0xC]
            ja   L_4
            jb   L_5
            cmp  eax, dword ptr [esp + 0x8]
            jbe  L_5
            L_4:
            sub  eax, dword ptr [esp + 0x10]
            sbb  edx, dword ptr [esp + 0x14]
            L_5:
            sub  eax, dword ptr [esp + 0x8]
            sbb  edx, dword ptr [esp + 0xC]
            neg  edx
            neg  eax
            sbb  edx, 0
            L_6:
            pop  ebx
            ret  2*8*/
    }
}

extern "C" void __cdecl _allshl();

NAKED void __allshl()
{
    __asm {
        jmp _allshl
        /*cmp  cl,  64
        jnb  L_3
        cmp  cl,  32
        jnb  L_2
        shld edx, eax, cl
        shl  eax, cl
        ret
        L_2:
        mov  edx, eax
        xor  eax, eax
        and  cl,  32-1
        shl  edx, cl
        ret
        L_3:
        xor  eax, eax
        xor  edx, edx
        ret*/
    }
}

extern "C" void __cdecl _CIacos();

NAKED void __CIacos()
{
    __asm {
        jmp _CIacos
    }
}

extern "C" void __cdecl _CIsqrt();

NAKED void __CIsqrt()
{
    __asm {
        jmp _CIsqrt
    }
}


extern "C" void __cdecl _CIcos();

NAKED void __CIcos()
{
    __asm {
        jmp _CIcos
    }
}


extern "C" void __cdecl _CIsin();

NAKED void __CIsin()
{
    __asm {
        jmp _CIsin
    }
}


extern "C" void __cdecl _CIatan();

NAKED void __CIatan()
{
    __asm {
        jmp _CIatan
    }
}


extern "C" void __cdecl _CIatan2();

NAKED void __CIatan2()
{
    __asm {
        jmp _CIatan2
    }
}

extern "C" void __cdecl _CIpow();

NAKED void __CIpow()
{
    __asm {
        jmp _CIpow
    }
}

extern "C" void __cdecl _ftol2_sse();

NAKED void __ftol2_sse()
{
    __asm
    {
        jmp _ftol2_sse
    }
}

NAKED void __alloca_probe_8()
{
    __asm {
        
        push ecx
        lea ecx, [esp + 8]
        sub ecx, eax
        and ecx, 7
        add eax, ecx
        sbb ecx, ecx
        or eax, ecx
        pop ecx
        jmp __chkstk
    }
}

NAKED void _alloca_probe_16()
{
    __asm {
        ret
    }
}

NAKED void __alloca_probe_16()
{
    __asm {
        push ecx
        lea ecx, [esp + 8]
        sub ecx, eax
        and ecx, 0xf
        add eax, ecx
        sbb ecx, ecx
        or eax, ecx
        pop ecx
        jmp __chkstk
    }
}

extern "C" void __cdecl _chkstk();

NAKED void __chkstk()
{
    __asm {
        //jmp _chkstk
        push ecx
        lea ecx, [esp + 4]
        sub ecx, eax
        sbb eax, eax
        not eax
        and ecx, eax
        mov eax, esp
        and eax, 0xfffff000

L1:
        cmp ecx, eax
        jb L2

        mov eax, ecx
        pop ecx
        //xchg esp, eax
        xchg    eax, esp
        mov eax, dword ptr[eax]
        mov dword ptr [esp], eax
        ret

L2: 
        sub eax, 0x1000
        test dword ptr[eax], eax
        jmp L1
    }
}

int WINAPI _DrawTextA(HDC hdc, LPCSTR lpString, int nCount, LPRECT lpRect, UINT uFormat) {
    return DrawTextA(hdc, lpString, nCount, lpRect, uFormat);
}

int _sscanf(const char *s, const char *format, ...) {
    va_list args;
            va_start(args, format);
    int res = sscanf(s, format, args);
            va_end(args);
    return res;
}

const char *_strrchr(const char *str, int c) {
    return std::strrchr(str, c);
}

const char *_strstr(const char *str, const char *substr) {
    return std::strstr(str, substr);
}

const wchar_t *_wcsstr(const wchar_t *str, const wchar_t *substr) {
    return std::wcsstr(str, substr);
}

const wchar_t *_wcschr(const wchar_t *str, wchar_t c) {
    return std::wcschr(str, c);
}

const unsigned char *__mbschr(const unsigned char *str, unsigned int c) {
    return _mbschr(str, c);
}

wchar_t *__itow(int value, wchar_t *buffer, int radix) {
    _itow_s(value, buffer, 16, radix);
    return buffer;
}

int _atoi(const char *str) {
    return std::atoi(str);
}

double _atof(char const* _String)
{
    if (!_String)
        return 0.; //TODO verify that this si correct

    return atof(_String);
}

double get_rand_0(unsigned int rand, double f0, double f1) {
    // TODO
    auto r = (double)rand / RAND_MAX;
    return f0 + r * (f1 - f0);
}

double _pow(double x, double y) {
    return std::pow(x, y);
}

int _atexit(void (*func)(void)) {
    return std::atexit(func);
}

void _memcpy(void *dest, const void *src, size_t count) {
    std::memcpy(dest, src, count);
}

void _memset(void *dest, int value, size_t count) {
    std::memset(dest, value, count);
}

void _memmove(void *dest, const void *src, size_t count) {
    std::memmove(dest, src, count);
}

int abs_0(int n) {
    return n < 0 ? -n : n;
}

double abs_1(double n) {
    return n < 0 ? -n : n; // TODO
}

int _zmin_int(int a, int b) {
    return a < b ? a : b;
}

long _zmin_long(long a, long b) {
    return a < b ? a : b;
}

long _zmax_long(long a, long b) {
    return a > b ? a : b;
}

double _zmin_double(double a, double b) {
    return a < b ? a : b;
}

double _zmax_double(double a, double b) {
    return a > b ? a : b;
}

double _ceil(double d) {
    return ceil(d);
}

double _floor(double d) {
    return floor(d);
}

void __except_handler4() {}
