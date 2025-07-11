#include "zallocex.h"


void *z_anon_alloc(size_t size) {
    return ZAllocExAnon::GetInstance()->Alloc(size);
}

void z_anon_free(void *p) {
    ZAllocExAnon::GetInstance()->Free(reinterpret_cast<void **>(p));
}

template <>
ZAllocEx<ZAllocAnonSelector> ZAllocEx<ZAllocAnonSelector>::_s_alloc{};

template <>
ZAllocEx<ZAllocStrSelector<char>> ZAllocEx<ZAllocStrSelector<char>>::_s_alloc{};

template <>
ZAllocEx<ZAllocStrSelector<unsigned short>> ZAllocEx<ZAllocStrSelector<unsigned short>>::_s_alloc{};

template <>
ZAllocEx<ZAllocStrSelector<wchar_t>> ZAllocEx<ZAllocStrSelector<wchar_t>>::_s_alloc{};