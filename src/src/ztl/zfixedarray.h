#pragma once

#include "util.h"
#include "zrecyclable.h"


template<typename T, size_t N, T DEFAULT_VALUE>
class ZFixedArray {
public:
    struct Data final : ZRecyclable<Data, 1, Data> {
    public:
        T a[N];

        Data() {
            for (size_t i = 0; i < N; i++) {
                a[i] = DEFAULT_VALUE;
            }
        }
        ~Data() override = default;
    };


private:
    Data *p;

public:
    ZFixedArray() {
        p = new Data();
    }

    ~ZFixedArray() {
        if(p) {
            delete p;
            p = nullptr;
        }
    }

    explicit operator T *() const {
        return p->a;

    }

    explicit operator const T *() const {
        return p->a;
    }

    const T &operator*() const {
        return p->a;
    }

    T &operator*() {
        return p->a;
    }

    T *GetData() {
        return p->a;
    }

    [[nodiscard]] const T *GetData() const {
        return p->a;
    }

    static size_t GetLength() {
        return N;
    }


    static size_t GetCount() {
        return N;

    }

    static size_t GetSize() {
        return N * sizeof(T);
    }
};

typedef ZFixedArray<unsigned char, 65536, 0> ZFixedArrayUChar65536;
Z_ASSERT_SIZE(ZFixedArrayUChar65536::Data, 0x10004);