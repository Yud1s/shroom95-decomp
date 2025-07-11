//
//

#ifndef GMS95_REGEN_HELPER_H
#define GMS95_REGEN_HELPER_H

#include <windows.h>
#include <cstdlib>
#include <cmath>
#include <mbstring.h>

void *__cdecl _operator_new(size_t size);
void __cdecl _operator_delete(void *p);
void _operator_delete_0(void* p);
void* _operator_new_array(uint32_t nSize);


int WINAPI _DrawTextA(HDC hdc,
                             LPCSTR lpString,
                             int nCount,
                             LPRECT lpRect,
                             UINT uFormat);

int _sscanf(const char *s, const char *format, ...);

const char *_strrchr(
    const char *str,
    int c);

const char *_strstr(
    const char *str,
    const char *substr);

#define __strlwr _strlwr
#define __strupr _strupr
const wchar_t *_wcsstr(const wchar_t *str, const wchar_t *substr);

const wchar_t *_wcschr(const wchar_t *str, wchar_t c);

#define __wcsicmp _wcsicmp
#define _wcstol wcstol
#define __wtoi _wtoi

const unsigned char *__mbschr(
    const unsigned char *str,
    unsigned int c);

#define __ismbcalpha _ismbcalpha
#define __mbctoupper _mbctoupper
#define __mbsnbicmp _mbsnbicmp
#define __mbsnbcpy _mbsnbcpy
#define __mbsnbcat _mbsnbcat
#define __mbsicmp _mbsicmp
#define __mbctolower _mbctolower


#define _atol atol
#define _IsEqualGUID IsEqualGUID
#define _sprintf sprintf

wchar_t *__cdecl __itow(int value, wchar_t *buffer, int radix);

int _atoi(const char *str);

#define __atoi64 _atoi64
//#define _atof atof
double __cdecl _atof(const char* s);

double get_rand_0(unsigned int rand, double f0, double f1);

#define _srand srand
#define _rand rand

double _pow(double x, double y);

int _atexit(void(__cdecl *func)(void));

void _memcpy(void *dest, const void *src, size_t count);

void _memset(void *dest, int value, size_t count);

void _memmove(void *dest, const void *src, size_t count);

int abs_0(int n);

double abs_1(double n);

int __cdecl _zmin_int(int a, int b);

long __cdecl _zmin_long(long a, long b);

long __cdecl _zmax_long(long a, long b);

double _zmin_double(double a, double b);

double _zmax_double(double a, double b);

#define _malloc malloc
#define _free free

void __except_handler4();

double _ceil(double d);

double _floor(double d);

extern "C"
{
    void __alldiv();
    void __aulldiv();
    void __allmul();
    void __aullrem();
    void __aulldvrm();
    void __allshl();
    void __CIacos();
    void __CIsqrt();
    void __CIcos();
    void __CIpow();
    void __CIsin();
    void __CIatan();
    void __CIatan2();
    void __ftol2_sse();
    void __alloca_probe_8();
    void _alloca_probe_16();
    void __alloca_probe_16();
    void __chkstk();
}

#endif // GMS95_REGEN_HELPER_H
