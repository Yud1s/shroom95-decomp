#pragma once
#include "util.h"
#include "zalloc.h"
#include "zlock.h"

template <typename T>
class ZAllocEx : private ZAllocBase, public T
{
private:
    //TODO conditional gap int gap{};
    ZFatalSection _lock;
    void* small_blocks[MAX_BLOCK_IX]{nullptr};
    void* large_blocks[MAX_BLOCK_IX]{nullptr};



public:
    // Overload operators to enforce heap allocation
    void *operator new(unsigned int size)
    {
        return z_heap_alloc(size);
    }

    void operator delete(void *_p)
    {
        z_heap_free(_p);
    }

    ZAllocEx() = default;

    static ZAllocEx _s_alloc;

    static ZAllocEx* GetInstance()
    {
        return &_s_alloc;
    }

    size_t GetFreeBlocks(BlockSize blocks) {
        ZFatalSectionGuard guard(_lock);
        auto ix = static_cast<size_t>(blocks);
        auto p = this->small_blocks[ix];
        auto count = 0;
        while (p) {
            count++;
            p = *reinterpret_cast<void**>(p);
        }
        return count;
    }


    void** Pop(BlockSize blocks) {
        ZFatalSectionGuard guard(_lock);
        auto ix = static_cast<size_t>(blocks);
        if (!this->small_blocks[ix])
            RefillBlocks(blocks);

        auto p = reinterpret_cast<void**>(this->small_blocks[ix]);
        this->small_blocks[ix] = *p;
        return p;
    }

    void Push(BlockSize blocks, void** p) {
        ZFatalSectionGuard guard(_lock);
        auto ix = static_cast<size_t>(blocks);

        *reinterpret_cast<void**>(p) = this->small_blocks[ix];
        this->small_blocks[ix] = p;
    }

    void* Alloc(size_t size)
    {
        auto blocks = T::GetBlockIx(size);
        if(blocks == ZAllocBase::BlockSize::BlockHeap)
        {
            // Allocate on the heap
            auto p = reinterpret_cast<AllocHeapBlock*>(z_heap_alloc(size + sizeof(AllocHeapBlock)));
            p->size = size;
            return p->data;
        }

        return Pop(blocks);
    }

    template<class A>
    A* AllocT() {
        return reinterpret_cast<A*>(Alloc(sizeof(A)));
    }

    template<class A>
    A* AllocArrayT(size_t count) {
        return reinterpret_cast<A*>(Alloc(sizeof(A) * count));
    }

    void Free(void **p)
    {
        if (!p)
            return;

        auto size = ZAllocBase::_MemSize(p);
        auto blocks = T::GetBlockIx(size);
        if(blocks == ZAllocBase::BlockSize::BlockHeap)
        {
            z_heap_free(p - 1);
            return;
        }

        Push(blocks, p);
    }

    template<typename A>
    void FreeT(A* p)
    {
        Free(reinterpret_cast<void**>(p));
    }

private:
    void RefillBlocks(BlockSize blocks) {
        size_t block_count;
        auto block_size = this->GetBlockSize(blocks, block_count);

        auto ix = static_cast<size_t>(blocks);

        // Allocate a new block and link It
        auto lg_block = _AllocLgBlock(block_size, block_count);
        lg_block->next = this->large_blocks[ix];

        // Put the blocks on the stack
        void* head = &lg_block->blocks[0].data;
        this->large_blocks[ix] = head;
        this->small_blocks[ix] = head;
    }
};
Z_ASSERT_SIZE(ZAllocEx<ZAllocAnonSelector>, 0x2C);



typedef ZAllocEx<ZAllocAnonSelector> ZAllocExAnon;
typedef ZAllocEx<ZAllocStrSelector<char>> ZAllocExStr;
typedef ZAllocEx<ZAllocStrSelector<unsigned short>> ZAllocExWStr;

void* z_anon_alloc(size_t size);
void z_anon_free(void *p);