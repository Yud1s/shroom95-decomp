#pragma once

#include "helper.h"
#include "zalloc.h"
#include "zlock.h"
#include <iostream>

// TODO: appears to be a debug class
class ZFakeStatAvBuff {
};

class ZRecyclableStatic {
public:
    struct CallBack {
        CallBack *_next{};
        CallBack() = default;
        virtual ~CallBack() = default;
    };

private:
    CallBack *_head{};

public:
    ZRecyclableStatic() = default;
    ~ZRecyclableStatic();

    [[maybe_unused]] void Register(CallBack *p);
    static ZRecyclableStatic &GetInstance();
};
Z_ASSERT_SIZE(ZRecyclableStatic, 4);


template<class RefT, size_t BLOCK_SIZE, class T>
class ZRecyclableAvBuffer : public ZRecyclableStatic::CallBack {
    //TODO static_assert(sizeof(T) >= sizeof(size_t), "Size of T must be at least sizeof(size_t)");

private:
    ZFakeStatAvBuff *_stat{};
    SmallBlockStack<sizeof(RefT), BLOCK_SIZE> _stack;
    ZRecyclableAvBuffer() {
        ZRecyclableStatic::GetInstance().Register(this);
    }

public:
    static ZRecyclableAvBuffer<RefT, BLOCK_SIZE, T> *GetInstance() {
        static ZRecyclableAvBuffer<RefT, BLOCK_SIZE, T> s_pInstance;
        return &s_pInstance;
    }

    void **raw_new() {
        return _stack.Pop();
    }

    void raw_delete(void *p) {
        _stack.Push(p);
    }

    static void *operator new(size_t size) {
        return z_heap_alloc(size);
    }

    static void operator delete(void *p) {
        z_heap_free(p);
    }
};

typedef ZRecyclableAvBuffer<int, 16, int> ZRecyclableInt16AvBuffer;
Z_ASSERT_SIZE(ZRecyclableInt16AvBuffer, 0x18);

template<typename RefT, size_t BLOCK_SIZE, typename T>
class ZRecyclable : protected ZAllocBase {
public:
    ZRecyclable() = default;

    void* operator new(size_t size) {
        return _Av()->raw_new();
    }
    void* operator new[](size_t size) {
        return _Av()->raw_new();
    }

    void operator delete(void *p) {
        _Av()->raw_delete(p);
    }

    void operator delete[](void *p) {
        _Av()->raw_delete(p);
    }

protected:
    virtual ~ZRecyclable() = default;

private:
    static ZRecyclableAvBuffer<RefT, BLOCK_SIZE, T> *_Av() {
        return ZRecyclableAvBuffer<RefT, BLOCK_SIZE, T>::GetInstance();
    }
};

typedef ZRecyclable<int, 16, int> ZRecyclableInt16;
Z_ASSERT_SIZE(ZRecyclableInt16, 4);

