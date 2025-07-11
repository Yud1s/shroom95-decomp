#pragma once

#include <cstdint>
#include <cstdio>
#include <cwchar>

#ifndef _WIN32
typedef uint32_t HRESULT{};

static void *z_heap_alloc(size_t size) {
    return malloc(size);
}

static void z_heap_free(void *p) {
    free(p);
}

static int tstrfmt(char *buffer, size_t size, const char *format, va_list argptr) {
    return vsnprintf(buffer, size, format, argptr);
}

static int tstrfmt(wchar_t *buffer, size_t size, const wchar_t *format, va_list argptr) {
    return vswprintf(buffer, size, format, argptr);
}

#define MAX_PATH 260

typedef void _EXCEPTION_POINTERS;
typedef void _CONTEXT;

struct tagPOINT {
    long x{};
    long y{};
};


#else
#include <Windows.h>

static void* z_heap_alloc(const size_t size)
{
    HANDLE heap = GetProcessHeap();
    return HeapAlloc(heap, NULL, size);
}

static void z_heap_free(void *_p)
{
    HANDLE heap = GetProcessHeap();
    HeapFree(heap, 0, _p);
}

static int tstrfmt(char *buffer, size_t size, const char *format, va_list argptr)
{
    return _vsnprintf_s(buffer, size, _TRUNCATE, format, argptr);
}

static int tstrfmt(wchar_t *buffer, size_t size, const wchar_t *format, va_list argptr)
{
    return _vsnwprintf_s(buffer, size, _TRUNCATE, format, argptr);
}

#define strcasecmp _stricmp
#define wcscasecmp _wcsicmp





#endif



