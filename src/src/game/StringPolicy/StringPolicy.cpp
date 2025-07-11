// StringPolicy.cpp
#include "StringPolicy.hpp"
#include "StringPolicy_regen.ipp"

CCurseProcess::~CCurseProcess()
{
}

void CCurseProcess::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCurseProcess::CCurseProcess()
{
    UNIMPLEMENTED; //_ctor_1();
}

void CCurseProcess::_ctor_1()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t __cdecl CCurseProcess::ProcessString(char* sString, int32_t* pbFiltered, int32_t bIgnoreNewLine)
{
    return __sub_003477F0(sString, pbFiltered, bIgnoreNewLine);
}

int32_t __cdecl CCurseProcess::GetSwindleWarning(char* arg0, ZXString<char>& arg1)
{
    return __sub_00347BC0(arg0, arg1);
}

char* __cdecl CCurseProcess::GetField(const char* arg0, int32_t arg1, char* arg2)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

char* __cdecl CCurseProcess::SearchSubstring(char* sString, const char* sWord)
{
    return __sub_003469E0(sString, sWord);
}

void __cdecl CCurseProcess::FilterChar(const char* sSrc, char* sDst, const char* sChars, int32_t bIgnoreNewLine)
{
    //__sub_00346A50(sSrc, sDst, sChars, bIgnoreNewLine);
    for ( auto  i = sSrc; *i; ++i )
    {
        auto v6 = *i;
        if ( (*i >= 0x20u || !bIgnoreNewLine && (v6 == '\r' || v6 == '\n')) && !CCurseProcess::Strchr(sChars, v6) )
            *sDst++ = *i;
    }
    *sDst = 0;
}

void __cdecl CCurseProcess::MergeByInsertion(const char* sSrc, char* sDst, const char* sSkip)
{
    __sub_00346AB0(sSrc, sDst, sSkip);
}

int32_t __cdecl CCurseProcess::IsGood(char* sString, int32_t bIgnoreNewLine)
{
    //return __sub_00346B80(sString, bIgnoreNewLine);
    if ( strlen(sString) >= 0x3FF )
        return 0;
    auto v3 = *sString;
    auto v4 = sString;
    if ( *sString )
    {
        while ( v3 > 0x1Fu || v3 == 13 || v3 == 10 )
        {
            v3 = *++v4;
            if ( !v3 )
                goto LABEL_8;
        }
        return 0;
    }

    char sFiltered[1024];
    LABEL_8:
      CCurseProcess::FilterChar(sString, sFiltered, " _-:\t^.,*/;!\\'\"`+", bIgnoreNewLine);
    //TODO(game)
    /*for ( i = 0; s_asCurse1.a && i < s_asCurse1.a[-1]._m_pStr; ++i )
    {
        if ( CCurseProcess::SearchSubstring(sFiltered, s_asCurse1.a[i]._m_pStr) )
            return 0;
    }*/
    return 1;
}

char* __cdecl CCurseProcess::ConvertString(char* sString, int32_t bIgnoreNewLine)
{
    return __sub_00346C50(sString, bIgnoreNewLine);
}

int32_t __cdecl CCurseProcess::IsCharEqual(char chr1, char chr2)
{
    return _mbctolower(chr1) == _mbctolower(chr2);
}

const char* __cdecl CCurseProcess::Strchr(const char* str, char chr)
{
    //return __sub_003469B0(str, chr);
    if (!*str)
        return nullptr;

    while (!IsCharEqual(*str, chr))
    {
        if (!*++str)
            return nullptr;
    }
    return str;
}

int32_t __cdecl is_valid_character_name(const ZXString<char>& arg0, int32_t arg1)
{
    //TODO(crash) broken fix this return __sub_00346F20(arg0, arg1);
    return 1;
}
