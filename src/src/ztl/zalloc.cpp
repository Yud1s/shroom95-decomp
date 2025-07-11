#include "zalloc.h"

#include <iostream>

ZAllocHelper::ZAllocHelper(int dummy)
{
}

void ZAllocHelper::_ctor_0(const int dummy)
{
    new(this) ZAllocHelper(dummy);
}

AllocSmallBlock* AllocSmallBlock::GetNext() const
{
    if (!this->next)
    {
        return nullptr;
    }
    return reinterpret_cast<AllocSmallBlock*>(static_cast<size_t*>(this->next) - 1);
}

void AllocSmallBlock::SetNext(AllocSmallBlock* next)
{
    this->next = next->data;
}

AllocSmallBlock* AllocLargeBlock::GetBlockAt(const size_t ix, const size_t block_size)
{
    return reinterpret_cast<AllocSmallBlock*>(reinterpret_cast<uint8_t*>(this->blocks) + ix * block_size);
}

AllocLargeBlock* ZAllocBase::_AllocLgBlock(const size_t block_size, const size_t block_count)
{
    const auto small_block_size = block_size + sizeof(AllocSmallBlock) - sizeof(void*);
    const auto large_block_size = block_count * small_block_size + sizeof(AllocLargeBlock);

    // False warning, because we return the pointer to the data, not the block
    // ReSharper disable once CppDFAMemoryLeak
    const auto lg_block = static_cast<AllocLargeBlock*>(z_heap_alloc(large_block_size));
    if (!lg_block)
    {
        Z_UNIMPLEMENTED;
    }

    lg_block->size = large_block_size - sizeof(size_t);
    lg_block->next = nullptr;

    // First block
    auto prev = &lg_block->blocks[0];
    prev->block_size = block_size;

    // Inner blocks
    for (auto i = 1; i < block_count; i++)
    {
        const auto block = lg_block->GetBlockAt(i, small_block_size);
        block->block_size = block_size;
        prev->SetNext(block);
        prev = block;
    }

    // Last block
    prev->block_size = block_size;
    prev->next = nullptr;

    auto cur = lg_block->GetBlockAt(0, small_block_size);

#ifdef Z_DEBUG_ASSERTIONS
    auto count = 0;
    while (cur)
    {
        count++;
        Z_DEBUG_ASSERT(block_size == cur->block_size, "Block size mismatch");
        cur = cur->GetNext();
    }
    Z_DEBUG_ASSERT(count == block_count, "Block count mismatch");
#endif

    return lg_block;
}

void* ZAllocBase::_AllowRaw(size_t block_size, size_t block_count)
{
    Z_UNIMPLEMENTED; //TODO
}

void ZAllocBase::_FreeRaw(void* p, size_t size)
{
    Z_UNIMPLEMENTED;
}

void* ZAllocBase::_AllowRawBlocks(size_t block_size, size_t block_count)
{
    // ReSharper disable once CppDFAMemoryLeak
    return _AllocLgBlock(block_size, block_count)->blocks[0].data;
}

void ZAllocBase::_FreeRawBlocks(void* p, size_t size)
{
    Z_UNIMPLEMENTED;
}

size_t ZAllocBase::_MemSize(const void* p)
{
    // Allocation size is stored right in front of the header
    auto size = *(static_cast<const size_t*>(p) - 1);

    // If the value is negative, it means the allocation is large
    if (size & 0x80000000)
        size = ~size;

    return size;
}

void* ZAllocBase::_NextHeadBlock(void* p)
{
    //TODO
    Z_UNIMPLEMENTED;
    return nullptr;
}

AllocHeapBlock* ZAllocBase::_AllocHeap(const size_t size)
{
    return static_cast<AllocHeapBlock*>(z_heap_alloc(size + sizeof(AllocHeapBlock)));
}

void ZAllocBase::_FreeHeap(AllocHeapBlock* p)
{
    z_heap_free(p);
}

AllocHeapBlock* ZAllocBase::_CastBlock(void* p)
{
    return static_cast<AllocHeapBlock*>(p) - 1;
}


ZAllocBase::BlockSize ZAllocAnonSelector::GetBlockIx(const size_t size) const
{
    if (size <= BLOCK16_SIZE)
    {
        return ZAllocBase::BlockSize::Block16;
    }
    else if (size <= BLOCK32_SIZE)
    {
        return ZAllocBase::BlockSize::Block32;
    }
    else if (size <= BLOCK64_SIZE)
    {
        return ZAllocBase::BlockSize::Block64;
    }
    else if (size <= BLOCK128_SIZE)
    {
        return ZAllocBase::BlockSize::Block128;
    }
    else
    {
        return ZAllocBase::BlockSize::BlockHeap;
    }
}

size_t ZAllocAnonSelector::GetBlockSize(const ZAllocBase::BlockSize blocks, size_t& block_count) const
{
    switch (blocks)
    {
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
