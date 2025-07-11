#ifndef ZTL_SECURE_H
#define ZTL_SECURE_H

#include <bit>
#include <exception>

static uint32_t get_zfuse_rand() {
    return rand(); // NOLINT(*-msc50-cpp)
}

constexpr uint32_t SECURE_MASK = 0xBAADF00D;

template<typename T>
static uint32_t __ZtlSecureTear(T value, T* at) {
    auto checksum = SECURE_MASK;
    constexpr size_t BLOCK_LEN = sizeof(uint32_t);

    if constexpr((sizeof(T) % BLOCK_LEN) == 0) {
        const size_t BLOCKS = sizeof(T) / BLOCK_LEN;
        auto *p = reinterpret_cast<uint32_t *>(&value);
        const auto key = reinterpret_cast<uint32_t*>(&at[0]);
        const auto data = reinterpret_cast<uint32_t*>(&at[1]);

        for (auto i = 0; i < BLOCKS; i++) {
            key[i] = get_zfuse_rand();
            data[i] = std::rotr(p[i] ^ key[i], 5);
            checksum = data[i] + std::rotr(key[i] ^ checksum, 5);
        }
    } else {
        const size_t BLOCKS = sizeof(T);
        const auto *p = reinterpret_cast<uint8_t *>(&value);
        const auto key = reinterpret_cast<uint8_t*>(&at[0]);
        const auto data = reinterpret_cast<uint8_t*>(&at[1]);

        for (auto i = 0; i < BLOCKS; i++) {
            key[i] = (get_zfuse_rand() & 0xff);
            data[i] = p[i] ^ key[i];
            checksum = data[i] + std::rotr(key[i] ^ checksum, 5);
        }
    }

    return checksum;
}


template<typename T>
static T __ZtlSecureFuse(T* at, uint32_t cs) {
    auto checksum = SECURE_MASK;
    constexpr size_t BLOCK_LEN = sizeof(uint32_t);

    if constexpr((sizeof(T) % BLOCK_LEN) == 0) {
        const size_t BLOCKS = sizeof(T) / BLOCK_LEN;
        const auto key = reinterpret_cast<uint32_t*>(&at[0]);
        const auto data = reinterpret_cast<uint32_t*>(&at[1]);
        uint32_t value[BLOCKS]{0};

        for (auto i = 0; i < BLOCKS; i++) {
            value[i] = (key[i] ^ std::rotl(data[i], 5));
            checksum = data[i] + std::rotr(key[i] ^ checksum, 5);
        }

        if (checksum != cs)
            throw std::exception("ZtlSecureFuse() failed.");

        return *reinterpret_cast<T *>(&value[0]);
    } else {
        const size_t BLOCKS = sizeof(T);
        const auto key = reinterpret_cast<uint8_t*>(&at[0]);
        const auto data = reinterpret_cast<uint8_t*>(&at[1]);
        uint8_t value[BLOCKS]{0};

        for (auto i = 0; i < BLOCKS; i++) {
            value[i] = (key[i] ^ data[i]);
            checksum = data[i] + std::rotr(key[i] ^ checksum, 5);
        }

        if (checksum != cs)
            throw std::exception("ZtlSecureFuse() failed.");

        return *reinterpret_cast<T *>(&value[0]);
    }
}

template<typename T>
struct _ZtlSecureFuseHelper {
    static T __cdecl call(const T* at, const uint32_t cs) {
        return __ZtlSecureFuse<T>(const_cast<T*>(at), cs);
    }
};

template<typename T>
struct _ZtlSecureTearHelper {
    static uint32_t __fastcall call(T v, T* at) {
        return __ZtlSecureTear<T>(v, at);
    }
};


#endif //ZTL_SECURE_H
