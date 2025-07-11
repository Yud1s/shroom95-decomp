#include "zxstring.h"
#include <iostream>

template<>
void ZXString<char>::AssignCharStr(const char *s, size_t len) {
    this->Assign(s, len);
}

template<>
void ZXString<char>::AssignWideStr(const wchar_t *s, size_t len) {
    if(!s) {
        Empty();
        return;
    }

    auto sz = ZStrUtil::_ConvReqSizeW(s, nullptr, (int) len);
    auto buf = GetBuffer(sz, false);
    ZStrUtil::_ConvA(s, buf, (int) len);
    ReleaseBuffer(sz);
}

template<>
void ZXString<wchar_t>::AssignWideStr(const wchar_t *s, size_t len) {
    this->Assign(s, len);
}

template<>
void ZXString<wchar_t>::AssignCharStr(const char *s, size_t len) {
    if(!s) {
        Empty();
        return;
    }

    auto sz = (size_t)ZStrUtil::_ConvReqSizeA(s, nullptr, (int) len);
    sz = sz / sizeof(unsigned short) - 1;
    auto buf = GetBuffer(sz, false);
    ZStrUtil::_ConvW(s, buf, (int) len);
    ReleaseBuffer(sz);
}

template<>
void ZXString<unsigned short>::AssignWideStr(const wchar_t *s, size_t len) {
    Assign((const unsigned short *) s, len);
}

template<>
void ZXString<unsigned short>::AssignCharStr(const char *s, size_t len) {
    if(!s) {
        Empty();
        return;
    }

    auto sz = (size_t)ZStrUtil::_ConvReqSizeA(s, nullptr, (int) len);
    sz = sz / sizeof(unsigned short) - 1;
    auto buf = GetBuffer(sz, false);
    ZStrUtil::_ConvW(s, (wchar_t *) buf, (int) len);
    ReleaseBuffer(sz);
}

size_t ZHash<const char *>::operator()(const char *value) const {
    return ZHashStr(value);
}

size_t ZHash<const wchar_t *>::operator()(const wchar_t *value) const {
    return ZHashStr(value);
}

size_t ZHash<const unsigned short *>::operator()(const unsigned short *value) const {
    return ZHashStr(value);
}

void Util::StrSplit(const char *s, const char *sep, ZArray<ZXString<char>> &arr) {
    ZXString<char> str(s);
    auto sepLen = strlen(sep);
    while (!str.IsEmpty()) {
        auto n = str.Find(sep);
        if (n == SIZE_MAX) {
            arr.Insert(str.Trim());
            break;
        }

        auto l = str.Left(n);
        l = l.Trim();
        if (!l.IsEmpty()) {
            arr.Insert(l);
        }
        str = str.Mid(n + sepLen);
    }
}

bool Util::IsEndWithJongSung(ZXString<char> s) {
    // TODO impl this
    return false;
}

bool Util::IsHanGeulWithJongSung(wchar_t c) {
    return 0 < (c - 0xac00) % 0x1c;
}

ZXString<char> Util::AddJosa_I(ZXString<char> str) {
    // TODO
    return str;
}

ZXString<char> Util::AddJosa_EUL(ZXString<char> str) {
    // TODO
    return str;
}

ZXString<char> Util::AddJosa_EUN(ZXString<char> str) {
    // TODO
    return str;
}

wchar_t *ZStrUtil::_ConvW(const char *m, wchar_t *w, int nChars) {
#ifdef _WIN32
    MultiByteToWideChar(0, 0, m, nChars, w, 0x3fffffff);
#else
    mbstowcs(w, m, nChars);
#endif
    return w;
}

char *ZStrUtil::_ConvA(const wchar_t *w, char *m, int nChars) {
#ifdef _WIN32

    WideCharToMultiByte(0, 0, w, nChars, m, 0x3fffffff, nullptr, nullptr);
#else
    wcstombs(m, w, nChars);
#endif
    return m;
}

int ZStrUtil::_ConvReqSizeW(const wchar_t *w, char *__formal, int nChars) {
#ifdef WIN32
    auto sz =  WideCharToMultiByte(0, 0, w, nChars, nullptr, 0, nullptr, nullptr);
    return  sz > 1 ? sz : 0;

#else
    return -1; // TODO
#endif
}

int ZStrUtil::_ConvReqSizeA(const char *m, wchar_t *__formal, int nChars) {
#ifdef WIN32
    auto sz = MultiByteToWideChar(0, 0, m, nChars, nullptr, 0);
    return  sz > 1 ? sz * 2 : 0;
#else
    return -1; // TODO
#endif
}

char *ZStrUtil::_Conv_0(const wchar_t *w, char *m, int32_t nChars) {
    return _ConvA(w, m, nChars);
}

wchar_t *ZStrUtil::_Conv_1(const char *m, wchar_t *w, int32_t nChars) {
    return _ConvW(m, w, nChars);
}

wchar_t *ZStrUtil::_Conv(const char *m, wchar_t *w, int nChars) {
    return _ConvW(m, w, nChars);
}

char *ZStrUtil::_Conv(const wchar_t *w, char *m, int nChars) {
    return _ConvA(w, m, nChars);
}

int ZStrUtil::_ConvReqSize_0(const wchar_t *w, char *__formal, int nChars) {
    return _ConvReqSizeW(w, nullptr, nChars);
}

int ZStrUtil::_ConvReqSize_1(const char *m, wchar_t *__formal, int nChars) {
    return _ConvReqSizeA(m, nullptr, nChars);
}

int ZStrUtil::_ConvReqSize(const char *m, wchar_t *formal, int nChars) {
    return _ConvReqSizeA(m, formal, nChars);
}

int ZStrUtil::_ConvReqSize(const wchar_t *w, char *formal, const int nChars) {
    return _ConvReqSizeW(w, formal, nChars);
}

const char *ZStrUtil::Str(const char *str, const char *pat, const bool treatAsMbChar) {
    if (treatAsMbChar) {
#ifdef WIN32
        return reinterpret_cast<const char *>(_mbsstr(reinterpret_cast<const unsigned char *>(str),
                                                      reinterpret_cast<const unsigned char *>(pat)));
#else
        // TODO
            return (char *)strstr(str, pat);
#endif
    }
    return const_cast<char *>(strstr(str, pat));
}

char ZCharTraits<char>::to_upper(const char c) {
    return static_cast<char>(std::toupper(c));
}

char ZCharTraits<char>::to_lower(const char c) {
    return static_cast<char>(std::tolower(c));
}

int ZCharTraits<char>::compare(const char *s1, const char *s2) {
    return strcmp(s1, s2);
}

int ZCharTraits<char>::compare_ignore_case(const char *s1, const char *s2) {
    return strcasecmp(s1, s2);
}

size_t ZCharTraits<char>::find(const char *s1, const char *s2, bool mb_as_char) {
    auto r = strstr(s1, s2);
    return r ? r - s1 : SIZE_MAX;
}

size_t ZCharTraits<char>::find_ignore_case(const char *s1, const char *s2, bool mb_as_char) {
    // auto r = strcasestr(s1, s2);
    // return r ? r - s1 : SIZE_MAX;
    return find(s1, s2, mb_as_char); // TODO
}

int ZCharTraits<char>::fmt(char *buffer, size_t size, const char *format, va_list argptr) {
    return tstrfmt(buffer, size, format, argptr);
}

wchar_t ZCharTraits<wchar_t>::to_upper(const wchar_t c) {
    return static_cast<wchar_t>(std::towupper(c));
}

wchar_t ZCharTraits<wchar_t>::to_lower(wchar_t c) {
    return static_cast<wchar_t>(std::towlower(c));
}

int ZCharTraits<wchar_t>::compare(const wchar_t *s1, const wchar_t *s2) {
    return wcscmp(s1, s2);
}

int ZCharTraits<wchar_t>::compare_ignore_case(const wchar_t *s1, const wchar_t *s2) {
    return wcscasecmp(s1, s2);
}

size_t ZCharTraits<wchar_t>::find(const wchar_t *s1, const wchar_t *s2, bool mb_as_char) {
    auto r = wcsstr(s1, s2);
    return r ? r - s1 : SIZE_MAX;
}

size_t ZCharTraits<wchar_t>::find_ignore_case(const wchar_t *s1, const wchar_t *s2, bool mb_as_char) {
    // TODO
    // return SIZE_MAX;
    return find(s1, s2, mb_as_char);
}

int ZCharTraits<wchar_t>::fmt(wchar_t *buffer, size_t size, const wchar_t *format, va_list argptr) {
    return tstrfmt(buffer, size, format, argptr);
}

unsigned short ZCharTraits<unsigned short>::to_upper(const unsigned short c) {
    return std::towupper(c);
}

unsigned short ZCharTraits<unsigned short>::to_lower(const unsigned short c) {
    return std::towlower(c);
}

int ZCharTraits<unsigned short>::compare(const unsigned short *s1, const unsigned short *s2) {
    return wcscmp(reinterpret_cast<const wchar_t *>(s1), reinterpret_cast<const wchar_t *>(s2));
}

int ZCharTraits<unsigned short>::compare_ignore_case(const unsigned short *s1, const unsigned short *s2) {
    return wcscasecmp(reinterpret_cast<const wchar_t *>(s1), reinterpret_cast<const wchar_t *>(s2));
}

size_t ZCharTraits<unsigned short>::find(const unsigned short *s1, const unsigned short *s2, bool mb_as_char) {
    const auto r = reinterpret_cast<unsigned short const *>(wcsstr(reinterpret_cast<const wchar_t *>(s1),
                                                                   reinterpret_cast<const wchar_t *>(s2)));
    return r ? r - s1 : SIZE_MAX;
}

size_t
ZCharTraits<unsigned short>::find_ignore_case(const unsigned short *s1, const unsigned short *s2, bool mb_as_char) {
    // TODO
    // return SIZE_MAX;
    return find(s1, s2, mb_as_char);
}

int ZCharTraits<unsigned short>::fmt(unsigned short *buffer, const size_t size, const unsigned short *format,
                                     va_list argptr) {
    return tstrfmt(reinterpret_cast<wchar_t *>(buffer), size, reinterpret_cast<const wchar_t *>(format), argptr);
}
