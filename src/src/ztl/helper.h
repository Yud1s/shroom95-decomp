//
//

#ifndef ZTL_HELPER_H
#define ZTL_HELPER_H

#include <cstddef>
#include <cassert>
#include <stdexcept>

typedef void POSITION;

#define Z_UNIMPLEMENTED abort()

#ifdef ZTL_EXTRA_PADING
#define ZTL_PAD_FIELD private: int _ztl_pad{};
#else
#define ZTL_PAD_FIELD
#endif


#ifndef Z_NO_CHECK_BOUNDS
#define ZTL_CHECK_BOUNDS(index, size) if ((index) >= (size)) { throw std::out_of_range("Index out of bounds"); }
#define ZTL_CHECK_BOUNDS_PTR(ptr, start, end) if ((ptr) < (start) || (ptr) >= (end)) { throw std::out_of_range("Pointer out of bounds"); }
#else
#define ZTL_CHECK_BOUNDS(index, size)
#endif

// GCC + Clang
#ifndef _MSC_VER
#define Z_PACK(__Declaration__) __Declaration__ __attribute__((__packed__))
#endif

#ifdef _MSC_VER
#define Z_PACK(__Declaration__) __pragma(pack(push, 1)) __Declaration__ __pragma(pack(pop))
#endif

template<typename Type, std::size_t ExpectedSize, std::size_t ActualSize = 0>
struct z_validate_size : std::true_type {
    static_assert(ActualSize == ExpectedSize,
                  "actual size does not match expected size");
};

template<typename Type, std::size_t ExpectedSize>
struct z_validate_size<Type, ExpectedSize, 0>
        : z_validate_size<Type, ExpectedSize, sizeof(Type)> {
};

template<std::size_t ExpectedOffset, std::size_t ActualOffset>
struct z_validate_offset : std::true_type {
    static_assert(ActualOffset == ExpectedOffset,
                  "actual offset(second) does not match expected offset(first)");
};

#define Z_ASSERT_SIZE(TY, SIZE) static_assert(z_validate_size<TY, SIZE>::value, "")
#define Z_ASSERT_OFFSET_OF(TY, MEMBER, OFF) static_assert(z_validate_offset<OFF, offsetof(TY, MEMBER)>::value, "")

#define Z_DEBUG_ASSERTIONS 1
#ifdef Z_DEBUG_ASSERTIONS
#define Z_DEBUG_ASSERT(exp, msg) assert(((void)(msg), exp))
#else
#define Z_DEBUG_ASSERT(x, MSG)
#endif

#define Z_CHECK(x) if(!(x)) ZException::ThrowLastError();
#define Z_SOCK_CHECK(x) if(!(x)) ZException::ThrowLastSocketError();

#define REGEN_HELPERS 1

#endif //ZTL_HELPER_H
