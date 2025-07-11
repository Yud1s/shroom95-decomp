#pragma once

#include <array>
#include <cstdint>
#include <cstddef>
#include <bitset>

#include "util.h"


//TODO verify memory layout
// standard specifies left to right layout for bitset
template<size_t N>
class UIntN {
private:
    enum {
        BLOCK_SIZE = sizeof(size_t) * 8,
        BLOCKS = N / BLOCK_SIZE
    };

    std::array<size_t, BLOCKS> _data{};

    [[nodiscard]] std::pair<size_t, size_t> getBlockIndex(size_t bit) const {
        return std::make_pair(bit / BLOCK_SIZE, bit % BLOCK_SIZE);
    }

    [[nodiscard]] std::pair<size_t, size_t> getBlockShift(size_t bit) const {
        auto [block, offset] = getBlockIndex(bit);
        // Meme devs decided to reverse the bit order
        // Very smart to turn a single instruction
        // into +4 and even more micro ops
        return std::make_pair(block, BLOCK_SIZE - offset - 1);
    }

public:
    std::array<size_t, BLOCKS> &getBlocks() {
        return &_data;
    }

    [[nodiscard]] const std::array<size_t, BLOCKS> &getBlocks() const {
        return &_data;
    }

    [[nodiscard]] size_t getBlock(size_t index) const {
        return _data[index];
    }

    UIntN() = default;

    explicit UIntN(uint32_t value) {
        setValue(value);
    }

    UIntN(const UIntN &value, size_t bits) {
        for (size_t i = 0; i < bits; i++) {
            setBitNumber(i, value.getBitNumber(i));
        }
    }

    UIntN(bool bit, size_t shiftLeft) {
        if(shiftLeft >= N) {
            _data = {};
            return;
        }
        setValue(1);
        this->shiftLeft(shiftLeft);
    }

    [[nodiscard]] size_t getBitNumber(size_t bit) const {
        if (bit >= N) {
            return 0;
        }
        // Meme devs decided they had to reverse the bit order
        auto [block, shift] = getBlockShift(bit);
        return (_data[block] >> shift) & 1;
    }

    UIntN &setBitNumber(size_t bit, uint32_t value) {
        if (bit < N) {
            auto [block, shift] = getBlockShift(bit);
            _data[block] &= ~(1 << shift);
            _data[block] |= value << shift;
        }
        return *this;
    }

    UIntN &setValue(uint32_t value) {
        for(auto i = 0; i < BLOCKS - 1; i++) {
            _data[i] = 0;
        }
        _data[BLOCKS - 1] = value;
        return *this;
    }

    UIntN &setValue(uint64_t value) {
        for(auto i = 0; i < BLOCKS - 2; i++) {
            _data[i] = 0;
        }
        //TODO is this correct?
        _data[BLOCKS - 2] = value & 0xFFFFFFFF;
        _data[BLOCKS - 1] = value >> 32;
        return *this;
    }

    UIntN &setValue(const UIntN &value) {
        _data = value._data;
        return *this;
    }

    [[nodiscard]] int compareTo(uint32_t value) const {
        return compareTo(UIntN(value));
    }

    [[nodiscard]] int compareTo(const UIntN& other) const {
        for(auto i = BLOCKS - 1; i >= 0; --i) {
            if(_data[i] < other._data[i]) {
                return -1;
            }
            if(_data[i] > other._data[i]) {
                return 1;
            }
        }
        return 0;
    }


    UIntN& shiftLeft(size_t bits) {
        if(bits == 0 || !this->operator bool())
            return *this;
        if(bits >= N) {
            _data = {};
            return *this;
        }

        std::array<size_t, BLOCKS> result = {};
        auto [block_shift, bit_shift] = getBlockIndex(bits);

        for(auto i = 0; i < BLOCKS; i++) {
            // Check if there's a next block
            if(i + block_shift >= BLOCKS) {
                break;
            }
            result[i] = _data[i + block_shift] << bit_shift;

            // No shift on bit-level
            if(bit_shift == 0) {
                continue;
            }

            // Check if there's a next block
            if(i + block_shift + 1 >= BLOCKS) {
                break;
            }

            result[i] |= _data[i + block_shift + 1] >> (BLOCK_SIZE - bit_shift);
        }

        _data = result;
        return *this;
    }

    // Assignment operators
    UIntN& operator=(uint32_t value) {
        setValue(value);
        return *this;
    }
    UIntN& operator=(uint64_t value) {
        setValue(value);
        return *this;
    }
    UIntN& operator=(const UIntN& value) {
        setValue(value);
        return *this;
    }

    // Bit operators
    UIntN& operator&=(const UIntN& other) {
        for(auto i = 0; i < BLOCKS; i++) {
            _data[i] &= other._data[i];
        }
        return *this;
    }
    UIntN operator&(const UIntN& other) const {
        return UIntN(*this) &= other;
    }

    UIntN& operator|=(const UIntN& other) {
        for(auto i = 0; i < BLOCKS; i++) {
            _data[i] |= other._data[i];
        }
        return *this;
    }

    UIntN operator|(const UIntN& other) const {
        return UIntN(*this) |= other;
    }

    UIntN operator~() const
    {
        UIntN result;
        for(auto i = 0; i < BLOCKS; i++) {
            result._data[i] = ~_data[i];
        }
        return result;
    }

    // Comparison
    friend auto operator<=>(const UIntN& u1, const UIntN& u2) {
        auto cmp = u1.compareTo(u2);
        if(cmp < 0) return std::strong_ordering::less;
        if(cmp > 0) return std::strong_ordering::greater;
        return std::strong_ordering::equivalent;
    }
    friend auto operator==(const UIntN& u1, const UIntN& u2) {
        return u1 <=> u2 == std::strong_ordering::equivalent;
    }
    friend auto operator<=>(const UIntN& u, uint32_t value) {
        return u <=> UIntN(value);
    }
    friend auto operator==(const UIntN& u, uint32_t value) {
        return u == UIntN(value);
    }


    // Bool operators
    bool operator!() const {
        for(auto i = 0; i < BLOCKS; i++) {
            if(_data[i]) {
                return false;
            }
        }
        return true;
    }
    explicit operator bool() const {
        return !this->operator!();
    }

};


//typedef UIntN<128> Z_UINT128;
//Z_ASSERT_SIZE(Z_UINT128, 16);
