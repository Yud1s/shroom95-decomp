// StringPolicy.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

// Level: 0 0x9351
class CCurseProcess;

class CCurseProcess
{

protected:
	static inline uint32_t s_dwLastWarn = 0;
	// Nested
public:
	enum STRING_MAX
{
	STRING_MAX = 1024
};
	// Fields
	// Methods
private:
	~CCurseProcess();

public:
	void _dtor_0();

private:
	CCurseProcess();

public:
	void _ctor_1();

public:
	static int32_t __cdecl ProcessString(char *sString, int32_t *pbFiltered, int32_t bIgnoreNewLine);

public:
	static int32_t __cdecl GetSwindleWarning(char *arg0, ZXString<char> &arg1);

protected:
	static char *__cdecl GetField(const char *arg0, int32_t arg1, char *arg2);

protected:
	static char *__cdecl SearchSubstring(char *sString, const char *sWord);

protected:
	static void __cdecl FilterChar(const char *sSrc, char *sDst, const char *sChars, int32_t bIgnoreNewLine);

protected:
	static void __cdecl MergeByInsertion(const char *sSrc, char *sDst, const char *sSkip);

protected:
	static int32_t __cdecl IsGood(char *sString, int32_t bIgnoreNewLine);

protected:
	static char *__cdecl ConvertString(char *sString, int32_t bIgnoreNewLine);

protected:
	static int32_t __cdecl IsCharEqual(char chr1, char chr2);

protected:
	static const char *__cdecl Strchr(const char *str, char chr);
};
STATIC_ASSERT_SIZE(CCurseProcess, 1);



int32_t __cdecl is_valid_character_name(const ZXString<char> &arg0, int32_t arg1);
