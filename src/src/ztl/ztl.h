//
//

#ifndef ZTL_ZTL_H
#define ZTL_ZTL_H

template<typename T1, typename T2>
class ZPair {
public:
    T1 first;
    T2 second;

    ZPair() = default;
    ZPair(const T1& first, const T2& second) : first(first), second(second) {}

#ifdef REGEN_HELPERS
    void _ctor_0(const T1& f, const T2& s) {
        new(this) ZPair(f, s);
    }
#endif
};

//template<typename T1, typename T2>
struct PairFirstLess {
    bool operator()(const ZPair<long, long>& a, const ZPair<long, long>& b) const {
        return a.first <= b.first;
    }
};

//template<typename T1, typename T2>
struct PairSecondLess {
    bool operator()(const ZPair<long, long>& a, const ZPair<long, long>& b) const {
        return a.second <= b.second;
    }
};

template<typename T>
struct zmaxHelper {
    static T call(T a, T b) {
        return a > b ? a : b;
    }
};



template<typename T>
struct zminHelper {
    static T call(T a, T b) {
        return a < b ? a : b;
    }
};


#endif //ZTL_ZTL_H
