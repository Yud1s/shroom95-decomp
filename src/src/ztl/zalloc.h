#pragma once

#include "helper.h"
#include "util.h"
#include "zlock.h"

constexpr size_t LARGE_BLOCK_SIZE = 1024;
constexpr size_t STR_HDR_SIZE = 3 * sizeof(size_t);
constexpr size_t MAX_BLOCK_IX = 4;

struct AllocHeapBlock {
    size_t size;
    uint8_t data[0];
};
Z_ASSERT_SIZE(AllocHeapBlock, sizeof(size_t));

struct AllocSmallBlock {
    size_t block_size{};
    union {
        void *next{};
        char data[1];
    };

    [[nodiscard]] AllocSmallBlock* GetNext() const;

    void SetNext(AllocSmallBlock* next);
};
Z_ASSERT_SIZE(AllocSmallBlock, sizeof(size_t) * 2);


struct AllocLargeBlock {
    size_t size{};
    void *next{};
    AllocSmallBlock blocks[0];

    AllocSmallBlock* GetBlockAt(size_t ix, size_t block_size);
};
Z_ASSERT_SIZE(AllocLargeBlock, sizeof(size_t) * 2);

class ZAllocHelper {
public:
    explicit ZAllocHelper(int dummy = 0);
    void _ctor_0(int dummy);
};



class ZAllocBase {
public:
    enum class BlockSize: size_t {
        Block16 = 0,
        Block32 = 1,
        Block64 = 2,
        Block128 = 3,
        BlockHeap = 4
    };


    static AllocHeapBlock* _AllocHeap(size_t size);
    static void _FreeHeap(AllocHeapBlock* p);
    static AllocHeapBlock* _CastBlock(void* p);

    static void* _AllowRaw(size_t block_size, size_t block_count);
    static void _FreeRaw(void* p, size_t size);

    static void* _AllowRawBlocks(size_t block_size, size_t block_count);
    static void _FreeRawBlocks(void* p, size_t size);

    static size_t _MemSize(const void* p);
    static void* _NextHeadBlock(void* p);


    static AllocLargeBlock* _AllocLgBlock(size_t block_size, size_t block_count);
};



template<typename T>
struct ZAllocStrSelector {
private:
    enum BLOCK_SIZE: size_t {
        EXTRA_SIZE = sizeof(T) + STR_HDR_SIZE,
        BLOCK16_SIZE = sizeof(T) * 16 + EXTRA_SIZE,
        BLOCK32_SIZE = sizeof(T) * 32 + EXTRA_SIZE,
        BLOCK64_SIZE = sizeof(T) * 64 + EXTRA_SIZE,
        BLOCK128_SIZE = sizeof(T) * 128 + EXTRA_SIZE,
    };

public:
    [[nodiscard]] ZAllocBase::BlockSize GetBlockIx(size_t size) const {
        if (size <= BLOCK16_SIZE) {
            return ZAllocBase::BlockSize::Block16;
        }
        if (size <= BLOCK32_SIZE) {
            return ZAllocBase::BlockSize::Block32;
        }
        if (size <= BLOCK64_SIZE) {
            return ZAllocBase::BlockSize::Block64;
        }
        if (size <= BLOCK128_SIZE) {
            return ZAllocBase::BlockSize::Block128;
        }
        return ZAllocBase::BlockSize::BlockHeap;
    }
protected:
    size_t GetBlockSize(const ZAllocBase::BlockSize blocks, size_t& block_count) const {
        switch (blocks) {
            case ZAllocBase::BlockSize::Block16:
                block_count = LARGE_BLOCK_SIZE / 16;
                return BLOCK16_SIZE;
            case ZAllocBase::BlockSize::Block32:
                block_count = LARGE_BLOCK_SIZE / 32;
                return BLOCK32_SIZE;
            case ZAllocBase::BlockSize::Block64:
                block_count = LARGE_BLOCK_SIZE / 64;
                return BLOCK64_SIZE;
            case ZAllocBase::BlockSize::Block128:
                block_count = LARGE_BLOCK_SIZE / 128;
                return BLOCK128_SIZE;
            default:
                block_count = 0;
                return 0;
        }
    }
};

struct ZAllocAnonSelector {
private:
    enum BLOCK_SIZE: size_t {
        BLOCK16_SIZE = 16,
        BLOCK32_SIZE = 32,
        BLOCK64_SIZE = 64,
        BLOCK128_SIZE = 128
    };
public:
    [[nodiscard]] ZAllocBase::BlockSize GetBlockIx(size_t size) const;
protected:

    size_t GetBlockSize(ZAllocBase::BlockSize blocks, size_t& block_count) const;
};

Z_ASSERT_SIZE(ZAllocAnonSelector, 1);

template <size_t SIZE, size_t BLOCK_COUNT = 16>
class SmallBlockStack {
    ZFatalSection _lock;
    void* _cur{};

public:
    void** Pop() {
        ZFatalSectionGuard guard(_lock);
        // Refill
        if(!_cur)
            _cur = ZAllocBase::_AllowRawBlocks(SIZE, BLOCK_COUNT);


        const auto p = static_cast<void**>(_cur);
        _cur = *p;
        return p;
    }

    void Push(void* p) {
        ZFatalSectionGuard guard(_lock);
        *static_cast<void**>(p) = _cur;
        _cur = p;
    }
};
