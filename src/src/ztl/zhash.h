#pragma once

#include <cstdint>
#include <bit>
#include <cstddef>

/// Struct to implement ZHash
template<typename T>
struct ZHash;

// Basic int hashes




template<>
struct ZHash<size_t> {
    size_t operator()(const size_t& value) const {
        return std::rotr(value, 5);
    }
};

#define FORWARD_ZHASH(T, D) template <>  \
                 struct ZHash<T> { \
                     size_t operator()(const T& value) { \
                         return ZHash<D>{}((D)value); \
                     } \
                 };

FORWARD_ZHASH(int8_t, size_t);
FORWARD_ZHASH(int16_t, size_t);
FORWARD_ZHASH(int32_t, size_t);
FORWARD_ZHASH(int64_t, size_t);
FORWARD_ZHASH(long, size_t);

FORWARD_ZHASH(uint8_t, size_t);
FORWARD_ZHASH(uint16_t, size_t);
//TODO check 64 bit FORWARD_ZHASH(uint32_t, size_t);
FORWARD_ZHASH(uint64_t, size_t);
FORWARD_ZHASH(unsigned long, size_t);

template<typename T>
static size_t zhash(const T& value) {
    return ZHash<T>{}(value);
}


template<typename T>
void zhash_field(size_t& hash, const T& value) {
    hash += static_cast<size_t>(value)  + 0x421;
}

template<typename T, typename ... Types>
void zhash_field(size_t& hash, const T& value, const Types& ... args) {
    hash += static_cast<size_t>(value) << 5;
    zhash_field(hash, args...);
}

template<typename ... Types>
size_t zhash_class_fields(const Types& ... args) {
    size_t hash = 0;
    zhash_field(hash, args...);
    return hash;
}

// hash for t