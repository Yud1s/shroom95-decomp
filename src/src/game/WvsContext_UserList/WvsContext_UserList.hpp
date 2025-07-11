// WvsContext_UserList.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UIUserList/UIUserList.hpp"
#include "GW/GW.hpp"

// Level: 0 0x14fc7
struct PARTYSERACH_SETTING;

struct PARTYSERACH_SETTING
{
	// Nested
	// Fields
public:
	int32_t bCleared{};

public:
	long nMin_Level{};

public:
	long nMax_Level{};

public:
	long nNumOf_PartyMember{};

public:
	unsigned long dwSearchingJob{};
	// Methods
	CTOR_DEFAULT(PARTYSERACH_SETTING)
public:
	PARTYSERACH_SETTING();

public:
	void _ctor_0();

public:
	void Clear();
};
STATIC_ASSERT_SIZE(PARTYSERACH_SETTING, 20);

void __cdecl InsertionSort_ZXString_char__Friend_GroupAscComp_S_(ZArray<ZXString<char>> &a, int32_t nFrom, int32_t nTo, Friend_GroupAscComp_S &comp);
int32_t __cdecl is_online(const GW_Friend &f, int32_t bListenBlocked);
