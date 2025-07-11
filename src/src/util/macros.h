//
//

#ifndef GMS95_REGEN_MACROS_H
#define GMS95_REGEN_MACROS_H

#include <cstdlib>
#include <type_traits>
#include <intrin.h>


[[noreturn]] static void zabort() noexcept {
  __debugbreak();
  std::abort();
}

//#define SINGLETON_PAD \
//private:              \
//    size_t pad{};

#define SINGLETON_PAD

#define UNIMPLEMENTED zabort()


#ifdef __GNUC__
#define PACK_BEGIN 
#define PACK_END __attribute__((__packed__))

#define PACK(__Declaration__) __Declaration__ __attribute__((__packed__))
#endif

#ifdef _MSC_VER
#define PACK_BEGIN __pragma(pack(push, 1))
#define PACK_END __pragma(pack(pop))


#define PACK(__Declaration__) __pragma(pack(push, 1)) __Declaration__ __pragma(pack(pop))
#endif

template <typename Type, std::size_t ExpectedSize, std::size_t ActualSize = 0>
struct validate_size : std::true_type
{
    static_assert(ActualSize == ExpectedSize,
                  "actual size does not match expected size");
};

template <typename Type, std::size_t ExpectedSize>
struct validate_size<Type, ExpectedSize, 0>
        : validate_size<Type, ExpectedSize, sizeof(Type)>
{
};

#define STATIC_ASSERT_SIZE(TY, SIZE) static_assert(validate_size<TY, SIZE>::value, "")

template <std::size_t ExpectedOffset, std::size_t ActualOffset>
struct validate_offset : std::true_type
{
    static_assert(ActualOffset == ExpectedOffset,
                  "actual offset(second) does not match expected offset(first)");
};


#define STATIC_ASSERT_OFFSET_OF(TY, MEMBER, OFF) static_assert(validate_offset<OFF, offsetof(TY, MEMBER)>::value, "")



#endif //GMS95_REGEN_MACROS_H
