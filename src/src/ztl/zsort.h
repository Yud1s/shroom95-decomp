#ifndef ZTL_ZSORT_H
#define ZTL_ZSORT_H

#include "zarray.h"
#include <iostream>

template<typename T>
struct DefaultOrdCmp {
    bool operator()(const T &a, const T &b) const {
        return a < b;
    }
};

template<typename T, typename Cmp>
void ZSort(ZArray<T> &arr, Cmp cmp) {
    if (!arr.GetCount()) {
        return;
    }

    ZSort(arr, arr.GetTailPosition(), arr.GetHeadPosition(), cmp);
}

template<typename T>
void ZSort(ZArray<T> &arr) {
    ZSort(arr, DefaultOrdCmp<T>());
}

template<typename T, typename Cmp>
void ZSort(ZArray<T> &arr, T *from, T *to, Cmp cmp) {
    if (!from || !to) {
        return;
    }

    auto nFrom = arr.IndexOf(from);
    auto nTo = arr.IndexOf(to);
    if (nFrom >= nTo) {
        return;
    }

    auto len = nTo - nFrom;
    auto depth = 0;
    while (len != 1) {
        len /= 2;
        ++depth;
    }

    IntroSortLoop<T, int, Cmp>(arr, nFrom, nTo, 2 * depth, cmp);
    InsertionSort<T, Cmp>(arr, nFrom, nTo, cmp);
}

template<typename T>
void ZSort(ZArray<T> &arr, T *from, T *to) {
    DefaultOrdCmp<T> cmp;
    ZSort(arr, from, to, cmp);
}

template<typename T, typename Cmp>
struct ZSortHelper {
    void call(ZArray<T> &arr, Cmp cmp) {
        ZSort(arr, cmp);
    }

    void call_0(ZArray<T> &arr, Cmp cmp) {
        ZSort(arr, cmp);
    }

    void call_1(ZArray<T> &arr, T* from, T* to, Cmp cmp) {
        ZSort(arr, cmp);
    }
};

template<typename T>
struct ZSortHelperDefault {
    void call(ZArray<T> &arr) {
        ZSort(arr);
    }

    void call_0(ZArray<T> &arr) {
        ZSort(arr);
    }

    void call_1(ZArray<T> &arr, T* from, T* to) {
        ZSort(arr);
    }
};

template<typename T, typename Cmp>
static int Partition(ZArray<T> &arr, int from, int to, const T &pivot, Cmp &cmp) {
    int l = from;
    int r = to;

    while (true) {
        while (!cmp(pivot, arr[l])) {
            ++l;
        }
        while (cmp(pivot, arr[r])) {
            --r;
        }

        if (l >= r) {
            return l;
        }
        std::swap(arr[l], arr[r]);
    }
}

template<typename T, typename Cmp>
static const T &Median3(const T &a, const T &b, const T &c, Cmp &cmp) {
    // Note: cmp is not strict(<) order, It could be also <=
    if (cmp(a, b)) {
        if (cmp(b, c)) {
            // a < b < c
            return b;
        } else if (cmp(a, c)) {
            // a < c < b
            return c;
        } else {
            // c < a < b
            return a;
        }
    }

    if (cmp(c, b)) {
        // c < b < a
        return b;
    } else if (cmp(c, a)) {
        // b < c < a
        return c;
    } else {
        // b < a < c
        return a;
    }
}

template<typename T, typename K, typename Cmp>
static void IntroSortLoop(ZArray<T> &arr, int from, int to, int depthLimit, Cmp &cmp) {
    auto len = to - from;
    if (len <= 16) {
        return;
    }

    while (depthLimit) {
        --depthLimit;
        auto mid = arr[from + (len / 2)];
        auto pivot = Median3(arr[from], mid, arr[to - 1], cmp);
        auto cut = Partition(arr, from, to, pivot, cmp);
        IntroSortLoop<T, K, Cmp>(arr, cut, to, depthLimit, cmp);
        to = cut;

        len = to - from;
        if (len <= 16) {
            return;
        }
    }


    HeapSort(arr, from, to, cmp);
}

template<typename T, typename K, typename Cmp>
struct IntroSortLoopHelper {
    void call(ZArray<T> &arr, int from, int to, int depthLimit, Cmp &cmp) {
        IntroSortLoop<T, K, Cmp>(arr, from, to, depthLimit, cmp);
    }
};
template<typename T, typename K>
struct IntroSortLoopHelperDefault {
    void call(ZArray<T> &arr, int from, int to, int depthLimit) {
        DefaultOrdCmp<T> cmp;
        IntroSortLoop<T, K, DefaultOrdCmp<T>>(arr, from, to, depthLimit, cmp);
    }
};

template<typename T, typename Cmp>
static void InsertionSort(ZArray<T> &arr, int from, int to, Cmp &cmp) {
    for (int i = from + 1; i <= to; ++i) {
        auto tmp = arr[i];
        int j = i - 1;
        while (j >= from && !cmp(arr[j], tmp)) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = tmp;
    }
}

template<typename T, typename Cmp>
struct InsertionSortHelper {
    void call(ZArray<T> &arr, int from, int to, Cmp &cmp) {
        InsertionSort(arr, from, to, cmp);
    }
};
template<typename T>
struct InsertionSortHelperDefault {
    void call(ZArray<T> &arr, int from, int to) {
        DefaultOrdCmp<T> cmp;
        InsertionSort(arr, from, to,  cmp);
    }
};

template<typename T, typename Cmp>
static void HeapSort(ZArray<T> &arr, int from, int to, Cmp &cmp) {
    if (!arr.GetCount()) {
        return;
    }

    auto len = to - from;
    for (int i = len / 2; i >= 1; --i) {
        DownHeap(arr, i, len, from, cmp);
    }

    while (len > 1) {
        std::swap(arr[from], arr[from + len - 1]);
        --len;
        DownHeap(arr, 1, len, from, cmp);
    }
}

template<typename T, typename Cmp>
static void DownHeap(ZArray<T> &arr, int idx, int len, int from, Cmp &cmp) {
    auto tmp = arr[idx + from - 1];
    while (idx <= len / 2) {
        auto oldIdx = idx;
        idx += 2;
        if (idx < len && cmp(arr[idx + from - 1], arr[idx + from])) {
            ++idx;
        }

        if (!cmp(arr[idx + from - 1], tmp)) {
            break;
        }
        arr[oldIdx + from - 1] = arr[idx + from - 1];
    }
    arr[idx + from - 1] = tmp;
}

#endif //ZTL_ZSORT_H
