#pragma once

#include <cassert>
#include <cstring>
#include <initializer_list>
#include <span>
#include <optional>
#include <vector>
#include <charconv>

#include <cstring>
#include <cctype>
#include <cwctype>
#include <cstdarg>
#include <algorithm>

#ifdef _WIN32

#include <mbstring.h>

#endif

#include "zallocex.h"
#include "zhash.h"
#include "zarray.h"
#include <iostream>

namespace ZStrUtil {
    wchar_t *_ConvW(const char *m, wchar_t *w, int nChars);

    char *_ConvA(const wchar_t *w, char *m, int nChars);

    int _ConvReqSizeW(wchar_t const *w, char *__formal1, int nChars);

    int _ConvReqSizeA(char const *m, wchar_t *__formal1, int nChars);

    char *_Conv_0(const wchar_t *w, char *m, int32_t nChars);

    wchar_t *_Conv_1(const char *m, wchar_t *w, int32_t nChars);

    wchar_t *_Conv(const char *m, wchar_t *w, int nChars);

    char *_Conv(const wchar_t *w, char *m, int nChars);

    int _ConvReqSize_0(wchar_t const *w, char *__formal, int nChars);

    int _ConvReqSize_1(char const *m, wchar_t *__formal, int nChars);

    int _ConvReqSize(const char *m, wchar_t *formal, int nChars);

    int _ConvReqSize(const wchar_t *w, char *formal, int nChars);

    const char *Str(const char *str, const char *pat, bool treatAsMbChar);
}

template<typename T>
struct ZCharTraits;

template<>
struct ZCharTraits<char> : std::char_traits<char> {
    static char to_upper(char c);

    static char to_lower(char c);

    static int compare(const char *s1, const char *s2);

    static int compare_ignore_case(const char *s1, const char *s2);

    static size_t find(const char *s1, const char *s2, bool mb_as_char = false);

    static size_t find_ignore_case(const char *s1, const char *s2, bool mb_as_char = false);

    static int fmt(char *buffer, size_t size, const char *format, va_list argptr);

    static inline const char *const SPACE_CHARS = " \t\r\n";
    static inline const char *const EMPTY = "";
};


template<>
struct ZCharTraits<wchar_t> : std::char_traits<wchar_t> {
    static wchar_t to_upper(const wchar_t c);

    static wchar_t to_lower(wchar_t c);

    static int compare(const wchar_t *s1, const wchar_t *s2);

    static int compare_ignore_case(const wchar_t *s1, const wchar_t *s2);

    static size_t find(const wchar_t *s1, const wchar_t *s2, bool mb_as_char = false);

    static size_t find_ignore_case(const wchar_t *s1, const wchar_t *s2, bool mb_as_char = false);

    static int fmt(wchar_t *buffer, size_t size, const wchar_t *format, va_list argptr);

    static inline const wchar_t *const SPACE_CHARS = L" \t\r\n";
    static inline const wchar_t *const EMPTY = L"";
};


template<>
struct ZCharTraits<unsigned short> : public std::char_traits<unsigned short> {
    static unsigned short to_upper(const unsigned short c);

    static unsigned short to_lower(const unsigned short c);

    static int compare(const unsigned short *s1, const unsigned short *s2);

    static int compare_ignore_case(const unsigned short *s1, const unsigned short *s2);

    static size_t find(const unsigned short *s1, const unsigned short *s2, bool mb_as_char = false);

    static size_t find_ignore_case(const unsigned short *s1, const unsigned short *s2, bool mb_as_char = false);

    static int fmt(unsigned short *buffer, const size_t size, const unsigned short *format, va_list argptr);

    static inline const auto SPACE_CHARS = reinterpret_cast<const unsigned short *const>(
            ZCharTraits<wchar_t>::SPACE_CHARS);
    static inline const auto EMPTY =
            reinterpret_cast<const unsigned short *const>(ZCharTraits<wchar_t>::EMPTY);
};


template<typename T>
class ZXString {
private:
    struct Header {
        std::atomic_int _ref_count;
        size_t _cap{};
        size_t _byte_len{};
        T _data[0];

        // Delete constructors + destructors, as they should not be used
        void *operator new(size_t size) = delete;

        void operator delete(void *p) = delete;

        void *operator new[](size_t size) = delete;

        void operator delete[](void *p) = delete;

        static Header *Alloc(size_t cap, int ref_count) {
            // Allocate the header + the data + one extra for the null terminator
            auto data = ZAllocEx<ZAllocStrSelector<T>>::GetInstance()->Alloc(
                    sizeof(Header) + sizeof(T) * (cap + 1));
            auto hdr = reinterpret_cast<Header *>(data);
            hdr->_cap = cap;
            hdr->_ref_count = ref_count;
            return hdr;
        }

        void Free() {
            ZAllocEx<ZAllocStrSelector<T>>::GetInstance()->Free(reinterpret_cast<void **>(this));
        }

        void SetLen(size_t elems) {
            _byte_len = elems * sizeof(T);
        }

        size_t Len() const {
            return _byte_len / sizeof(T);
        }

        std::span<T> GetSpan() {
            return std::span<T>(_data, Len());
        }

        bool Release() {
            return _ref_count.fetch_sub(1) <= 1;
        }

        void AddRef() {
            _ref_count.fetch_add(1);
        }
    };

    [[nodiscard]] Header *GetHeader() const {
        return _p ?
               reinterpret_cast<Header *>(_p) - 1
                  : nullptr;
    }

    Header *GetHeader() {
        return _p ?
               reinterpret_cast<Header *>(_p) - 1
                  : nullptr;
    }

    T *_p{};

public:
    ~ZXString() {
        _ReleaseHeader();
    }

    ZXString() = default;

    explicit ZXString(size_t n) {
        auto b = GetBuffer(n, false);
        ReleaseBuffer(0);
    }

    explicit ZXString(wchar_t c) {
        auto b = GetBuffer(1, false);
        b[0] = c;
        ReleaseBuffer(1);
    }

    explicit ZXString(char c) {
        _p = GetBuffer(1, false);
        _p[0] = c;
        ReleaseBuffer(1);
    }

    explicit ZXString(const T *s, int n = SIZE_MAX) {
        Assign(s, n);
    }

    ZXString(const ZXString &s) {
        *this = s;
    }

    static ZXString FromFmt(const T *fmt, ...) {
        ZXString ret;
        va_list args;
                va_start(args, fmt);
        ret.FormatV(fmt, args);
                va_end(args);
        return ret;
    }

    ZXString<T> &operator=(const ZXString<T> &other) {
        if (this == &other) {
            return *this;
        }

        auto other_hdr = other.GetHeader();
        // If the other string is empty, just release this one
        if (!other_hdr) {
            _ReleaseHeader();
            return *this;
        }

        // If the string is edited, we need to copy it
        if (other_hdr->_ref_count == -1) {
            Assign(other._p);
            return *this;
        }

        // Otherwise increment the ref _count
        other_hdr->AddRef();
        _ReleaseHeader();
        _p = other._p;
        return *this;
    }

    ZXString<T> &operator=(const T *s) {
        Assign(s, SIZE_MAX);
        return *this;
    }

    void Assign(const T *s, size_t len = SIZE_MAX) {
        _ReleaseHeader();
        if (!len || !s) {
            return;
        }

        len = len == SIZE_MAX ? ZCharTraits<T>::length(s) : len;
        auto buf = GetBuffer(len, false);
        std::memmove(buf, s, len * sizeof(T));
        ReleaseBuffer(len);
    }

    T *CopyToArray(ZArray<T> &arr) const {
        arr = ZArray(_p, GetLength());
        return arr;
    }

    explicit operator const T *() const {
        return _p ? _p : ZCharTraits<T>::EMPTY;
    }


    [[nodiscard]] size_t GetLength() const {
        auto hdr = GetHeader();
        return hdr ? hdr->Len() : 0;
    }

    [[nodiscard]] bool IsEmpty() const {
        return GetLength() == 0;
    }

    [[nodiscard]] int GetRefCount() {
        auto hdr = GetHeader();
        return hdr ? hdr->_ref_count.load() : 0;
    }

    void Empty() {
        _ReleaseHeader();
    }

    const T &operator[](size_t ix) const {
        return _p[ix];
    }

    [[nodiscard]] T GetAt(size_t ix) const {
        return _p[ix];
    }

    void SetAt(size_t ix, T c) {
        _p[ix] = c;
    }

    T *GetBuffer(size_t min_len, bool retain) {
        auto hdr = GetHeader();
        if (hdr && hdr->_cap >= min_len) {
            // We can only claim the string buffer If there's at most one reference
            auto one = 1;
            if (hdr->_ref_count.compare_exchange_strong(one, -1)) {
                return _p;
            }
        }

        auto cap = hdr ? hdr->_cap : 0;
        auto len = cap > min_len ? cap : min_len;
        auto newHdr = Header::Alloc(len, -1);

        if (!hdr) {
            _p = newHdr->_data;
            if (len)
                _p[0] = 0;
            return _p;
        }

        if (retain && len) {
            std::memmove(&newHdr->_data, &hdr->_data, hdr->_byte_len + sizeof(T));
            newHdr->_byte_len = hdr->_byte_len;
        }

        // Release the old header
        _ReleaseHeader();
        // Assign the new one
        _p = newHdr->_data;
        return _p;
    }

    void ReleaseBuffer(size_t len = SIZE_MAX) {
        auto hdr = GetHeader();
        hdr->_ref_count = 1;

        // Set zero terminator and len
        if (len != SIZE_MAX) {
            _p[len] = 0;
            hdr->SetLen(len);
            return;
        }

        // Use the null-terminator to find the length
        hdr->SetLen(ZCharTraits<T>::length(_p));
    }

    ZXString &FormatV(const T *fmt, va_list args) {
        auto buf_len = 256;//TODO decrease buffer len
        while (true) {
            if (buf_len > 1024) {
                break;
            }

            auto buf = GetBuffer(buf_len, false);
            va_list args_copy;
            va_copy(args_copy, args);
            auto written = ZCharTraits<T>::fmt(buf, buf_len, fmt, args_copy);
            va_end(args_copy);

            if (written >= 0) {
                ReleaseBuffer(written);
                break;
            }

            ReleaseBuffer(buf_len);
            buf_len *= 2;
        }
        return *this;
    }

    ZXString &Format(const T *fmt, ...) {
        va_list args;
                va_start(args, fmt);
        FormatV(fmt, args);
                va_end(args);
        return *this;
    }



    ZXString operator+(const ZXString &other) const {
        if(!other._p) {
            return *this;
        }
        return _Add(other._p, other.GetHeader()->Len());
    }

    ZXString operator+(const T c) const {
        return _Add(&c, 1);
    }

    ZXString operator+(const T *s) const {
        if (!s) {
            return *this;
        }
        return _Add(s, ZCharTraits<T>::length(s));
    }

    ZXString &operator+=(const ZXString &other) {
        if(!other._p) {
            return *this;
        }
        _Cat(other._p, other.GetHeader()->Len());
        return *this;
    }

    ZXString &operator+=(const T c) {
        _Cat(&c, 1);
        return *this;
    }

    ZXString &operator+=(const T *s) {
        if (!s) {
            return *this;
        }
        _Cat(s, ZCharTraits<T>::length(s));
        return *this;
    }

    [[nodiscard]] int CompareOther(const ZXString &other) const {
        return Compare(other._p);
    }

    int Compare(const T *s) const {
        auto p = _p ? _p : ZCharTraits<T>::EMPTY;
        s = s ? s : ZCharTraits<T>::EMPTY;
        return ZCharTraits<T>::compare(p, s);
    }

    int CompareNoCase(const T *s) const {
        if (_p == s) {
            return 0;
        }
        auto p = _p ? _p : ZCharTraits<T>::EMPTY;
        s = s ? s : ZCharTraits<T>::EMPTY;

        return ZCharTraits<T>::compare_ignore_case(p, s);
    }

    bool operator==(const ZXString<T> &other) const {
        return CompareOther(other) == 0;
    }

    bool operator!=(const ZXString<T> &other) const {
        return !(this == other);
    }

    bool operator==(const T *other) const {
        return Compare(other) == 0;
    }

    bool operator!=(const T *other) const {
        return !(this == other);
    }

    bool operator<(const T *other) const {
        return Compare(other) < 0;
    }

    bool operator<=(const T *other) const {
        return Compare(other) <= 0;
    }

    bool operator>(const T *other) const {
        return Compare(other) > 0;
    }

    bool operator>=(const T *other) const {
        return Compare(other) >= 0;
    }

    ZXString Substring(size_t from, size_t to = SIZE_MAX) const {
        ZXString ret;
        if (!_p) {
            return ret;
        }
        ZTL_CHECK_BOUNDS(from, GetLength() + 1);


        // TODO maybe this should just use the len
        auto start = &_p[from];
        size_t len = 0;
        if (to == SIZE_MAX) {
            ret.Assign(&_p[from]);
            return ret;
        }
        Z_DEBUG_ASSERT(to >= from, "Invalid substring range");
        len = to - from;
        ZTL_CHECK_BOUNDS(to, GetLength() + 1);
        ret.Assign(start, len);
        return ret;
    }

    ZXString Mid(size_t from, size_t to = SIZE_MAX) {
        return Substring(from, to);
    }

    ZXString Left(size_t n) {
        return Substring(0, n);
    }

    ZXString Right(size_t n) {
        return Substring(GetLength() - n);
    }

    ZXString &Trim(const T *spaceChars = nullptr) {
        return TrimLeft(spaceChars).TrimRight(spaceChars);
    }

    ZXString &TrimRight(const T *spaceChars = nullptr) {
        spaceChars = spaceChars ? spaceChars : ZCharTraits<T>::SPACE_CHARS;
        auto trim = GetView().find_last_not_of(spaceChars);
        if (trim == SIZE_MAX) {
            Clear();
            return *this;
        }

        GetBuffer(0, true);
        ReleaseBuffer(trim + 1);
        return *this;
    }

    ZXString &TrimLeft(const T *spaceChars = nullptr) {
        spaceChars = spaceChars ? spaceChars : ZCharTraits<T>::SPACE_CHARS;
        auto trim = GetView().find_first_not_of(spaceChars);
        if (trim == SIZE_MAX) {
            Clear();
            return *this;
        }

        if (!trim) {
            return *this;
        }

        auto len = GetLength();
        auto buf = GetBuffer(0, true);
        std::memmove(buf, buf + trim, len - trim);
        ReleaseBuffer(len - trim);
        return *this;
    }

    void MakeUpper() {
        auto span = GetSpan();
        std::transform(span.begin(), span.end(), span.begin(), ZCharTraits<T>::to_upper);
    }

    void MakeLower() {
        auto span = GetSpan();
        std::transform(span.begin(), span.end(), span.begin(), ZCharTraits<T>::to_lower);
    }

    size_t Find(const T *pat, size_t start = 0, bool treat_mb_as_char = false) const {
        if (!_p) {
            return SIZE_MAX;
        }
        return ZCharTraits<T>::find(_p + start, pat, treat_mb_as_char);
    }

    [[nodiscard]] size_t Find(T c, size_t start = 0) const {
        return GetView().find(c, start);
    }

    [[nodiscard]] size_t Find_(T c, const size_t start) const {
        return Find(c, start);
    }

    size_t Find__0(const T *pat, const size_t start = 0, const bool treat_mb_as_char = false) const {
        if (!_p)
        {
            if (!pat || !*pat)
                return 0;
            return SIZE_MAX;
        }

        if (!pat || !*pat)
            return GetLength();

        auto res = ZCharTraits<T>::find(_p + start, pat, treat_mb_as_char);
        return res != SIZE_MAX ? res + start : res;
        //return Find(pat, start, treat_mb_as_char);
    }

    size_t Find__1(T c, const size_t start) {
        // TODO verify order
        return Find(c, start);
    }

    size_t FindReverse(T c) {
        return GetView().rfind(c);
    }

    bool Contains(const T *pat) const {
        return Find(pat, 0, false) != SIZE_MAX;
    }

    ZXString Replace(const T *pat, const T *repl) {
        assert(repl != nullptr);
        if (!pat) {
            return *this;
        }
        auto ix = Find(pat);
        if (ix == SIZE_MAX) {
            return *this;
        }
        auto pat_len = ZCharTraits<T>::length(pat);

        ZXString ret;
        ret._Cat(_p, ix);
        ret._Cat(repl, ZCharTraits<T>::length(repl));
        ret._Cat(_p + ix + pat_len, GetLength() - ix - pat_len);

        return ret;
    }

    ZXString ReplaceAll(const T *needle, const T *repl) const {
        assert(repl != nullptr);
        if (!needle) {
            return *this;
        }
        if (!_p) {
            return *this;
        }


        ZXString ret;
        auto end = _p;
        auto needle_len = ZCharTraits<T>::length(needle);
        auto repl_len = ZCharTraits<T>::length(repl);

        while (true) {
            auto ix = ZCharTraits<T>::find(end, needle);
            if (ix == SIZE_MAX) {
                ret._Cat(end);
                break;
            }

            ret._Cat(end, ix);
            ret._Cat(repl, repl_len);
            end = end + ix + needle_len;
        }

        return ret;
    }


    ZXString _Add(const T *s, size_t len) const {
        ZXString ret;
        ret += *this;
        ret += s;
        return ret;
    }

    ZXString &_Cat(const T *s, size_t len = SIZE_MAX) {
        if (!s) {
            len = 0;
        } else {
            len = len == SIZE_MAX ? ZCharTraits<T>::length(s) : len;
        }

        if (!len) {
            return *this;
        }

        auto hdr = GetHeader();
        if (!hdr) {
            Assign(s, len);
            return *this;
        }

        auto end = GetLength();
        auto required_size = len + end;
        auto cap = hdr->_cap ? hdr->_cap : 16;
        while (cap < required_size) {
            cap *= 2;
        }

        auto buf = GetBuffer(cap, true);
        std::memmove(buf + end, s, len * sizeof(T));
        ReleaseBuffer(required_size);
        return *this;
    }


    void Clear() {
        _ReleaseHeader();
    }

    friend std::ostream &operator<<(std::ostream &os, const ZXString &s) {
        auto p = static_cast<const T *>(s);
        os << p;
        return os;
    }

    std::optional<int> ToInt(int base = 10) {
        if (!_p) {
            return std::nullopt;
        }
        auto s = GetView();
        int value{};
        if (std::from_chars(s.data(), s.data() + s.size(), value).ec == std::errc{}) {
            return value;
        }else {
            return std::nullopt;
        }
    }


    void _ctor_copy(const ZXString &other) {
        new(this) ZXString(other);
    }

    void _ctor_default() {
        new(this) ZXString();
    }

    [[nodiscard]] bool op_eq(const ZXString &other) const {
        return CompareOther(other) == 0;
    }

    [[nodiscard]] bool op_eq_0(const ZXString &other) const {
        return CompareOther(other) == 0;
    }

    ZXString op_add_0(const T *s) const {
        if (!s) {
            return *this;
        }
        return _Add(s, ZCharTraits<T>::length(s));
    }

    [[nodiscard]] ZXString op_add_1(const ZXString &other) const {
        return _Add(other._p, other.GetLength());
    }

    ZXString op_add_2(T c) {
        return _Add(&c, 1);
    }

    ZXString &op_add_assign_0(const ZXString &other) {
        AssignOther(other);
        return *this;
    }

    ZXString &op_add_assign_1(const T *s) {
        Assign(s);
        return *this;
    }

    // void __thiscall ZXString16::Assign<char>(class ZXString16* this, char const* s, int32_t n)
    void AssignCharStr(const char *s, size_t len = SIZE_MAX);

    // void __thiscall ZXString<uint16_t,char>::Assign<uint16_t>(ZXString<uint16_t,char>* this, uint16_t const* arg2, int32_t arg3)
    void AssignWideStr(const wchar_t *s, size_t len = SIZE_MAX);

    // public: __thiscall ZXString<char>::D::D(char const *,int),     _m_pStr = 0; ZXString<char>::Assign(this, t, n);
    // public: __thiscall ZXString16::D::D(char const *,int) ZXString16::Assign<char>
    ZXString &CreateFromCharStr(const char *s, size_t len = SIZE_MAX) {
        new(this) ZXString();
        AssignCharStr(s, len);
        return *this; //TODO mayber also required for Assign
    }

    // public: __thiscall ZXString16::G::G(unsigned short const *,int), _m_pStr = 0;ZXString16::Assign(this, t, n);
    // public: __thiscall ZXString<char>::G::G(unsigned short const *,int)
    ZXString &CreateFromCStr(const wchar_t *s, size_t len = SIZE_MAX) {
        new(this) ZXString();
        AssignWideStr(s, len);
        return *this;
    }

    // ZXString16* __thiscall ZXString16::operator=<unsigned short>(class ZXString16* this, wchar16 const* s)
    // class ZXString<char>* __thiscall ZXString<char>::operator=<char>(class ZXString<char>* this, char const* s)
    void AssignCStr(const T *s) {
        Assign(s);
    }

    // __thiscall ZXString16::operator unsigned short const *
    const T *op_c_str() {
        return c_str(); // TODO naming
    }

    // char const* __thiscall ZXString<char>(* this)
    const T *const_c_str() const {
        return _p;
    }

    const T *c_str() {
        return _p;
    }

    // TODO
    ZXString &op_assign(const ZXString &other) {
        return operator=(other);
    }

    // Only for T=char, in theory
    ZXString &op_add_assign_other_0(const ZXString &other) {
        return operator+=(other);
    }

    // Only for T=wchar_t, in theory
    ZXString &op_add_assign_other_1(const ZXString &other) {
        return operator+=(other);
    }

    // Only for T=wchar_t, in theory
    ZXString &op_add_assign_t_0(const T *s) {
        return operator+=(s);
    }

    // Only for T=char, in theory
    ZXString &op_add_assign_t_1(const T *s) {
        return operator+=(s);
    }


private:
    void _ReleaseHeader() {
        auto hdr = GetHeader();
        if (hdr && hdr->Release()) {
            hdr->Free();
        }
        _p = nullptr;
    }

    static void _Release(Header *hdr) {
        if (hdr && hdr->Release()) {
            hdr->Free();
        }
    }

public:
    // Operators
    [[nodiscard]] std::basic_string_view<T> GetView() const {
        auto hdr = GetHeader();
        return hdr ?
               std::basic_string_view<T>(hdr->_data, hdr->Len()) :
               std::basic_string_view<T>();
    }

    std::span<T> GetSpan() {
        auto hdr = GetHeader();
        return hdr ? hdr->GetSpan() : std::span<T>();
    }

    bool operator!() {
        return *_p == nullptr;
    }
};


template<typename T>
void PrintTo(const ZXString<T> &s, std::ostream *os) {
    auto p = static_cast<const T *>(s);
    if (p != nullptr) {
        *os << p;
    }
}

template<typename TChr>
static size_t ZHashStr(const TChr *value) {
    uint32_t hash = 0;
    for (size_t i = 0; value[i]; i++) {
        auto a = static_cast<uint32_t>(value[i]) << 5;
        hash += a + i + 1;
    }
    return hash;
}

template<>
struct ZHash<const char *> {
    size_t operator()(const char *value) const;
};

template<>
struct ZHash<const wchar_t *> {
    size_t operator()(const wchar_t *value) const;
};

template<>
struct ZHash<const unsigned short *> {
    size_t operator()(const unsigned short *value) const;
};

template<typename T>
struct ZHash<ZXString<T>> {
    size_t operator()(const ZXString<T> &value) {
        return ZHashStr(static_cast<const T *>(value));
    }
};

namespace Util {
    bool IsEndWithJongSung(ZXString<char> s);

    bool IsHanGeulWithJongSung(wchar_t c);

    ZXString<char> __cdecl AddJosa_I(ZXString<char> str);

    ZXString<char> __cdecl AddJosa_EUL(ZXString<char> str);

    ZXString<char> __cdecl AddJosa_EUN(ZXString<char> str);

    void StrSplit(char const *s, char const *sep, ZArray<ZXString<char>> &arr);
}

static_assert(sizeof(ZXString<char>) == sizeof(void *), "ZXString is the wrong size");


typedef ZXString<wchar_t> ZXString16;
typedef ZXString<char> ZXString8;
