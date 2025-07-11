// MonsterBookMan.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"
#include "DBBasic/DBBasic.hpp"

// Level: 0 0xb693
struct MonsterBookStr;
// Level: 0 0xb861
class CMonsterBookAccessor;
// Level: 1 0xb6a3
struct MonsterBookInfo;

struct MonsterBookStr
{
	// Nested
	// Fields
public:
	ZXString<char> sHP;

public:
	ZXString<char> sMP;

public:
	ZXString<char> sEpisode;

public:
	ZArray<long> anArea;

public:
	ZArray<long> anReward;
	// Methods
public:
	~MonsterBookStr();

public:
	void _dtor_0();

public:
	MonsterBookStr(const MonsterBookStr &arg0);

public:
	void _ctor_1(const MonsterBookStr &arg0);

public:
	MonsterBookStr();

public:
	void _ctor_0();

public:
	MonsterBookStr &operator=(const MonsterBookStr &arg0);

public:
	static MonsterBookStr &_op_assign_3(MonsterBookStr *pThis, const MonsterBookStr &arg0);
};
STATIC_ASSERT_SIZE(MonsterBookStr, 20);
class CMonsterBookAccessor
{
	// Nested
	// Fields
	// Methods
public:
	static void __cdecl SetCover(CharacterData &arg0, long arg1);

public:
	static long __cdecl GetCover(const CharacterData &arg0);

public:
	static void __cdecl SetCount(CharacterData &cd, long nCardID, long nCardCount);

public:
	static long __cdecl GetCount(const CharacterData &cd, long nCardID);

public:
	static int32_t __cdecl IsCardFull(const CharacterData &arg0, long arg1);

public:
	static long __cdecl GetSize(const CharacterData &arg0);

public:
	static void __cdecl UpdateInfo(CharacterData &cd);

public:
	static ZRef<MonsterBookInfo> __cdecl GetInfo(const CharacterData &cd);
};
STATIC_ASSERT_SIZE(CMonsterBookAccessor, 1);
struct MonsterBookInfo : public ZRefCounted
{
	// Nested
	// Fields
public:
	long nLevel{};

public:
	long nNormal{};

public:
	long nSpecial{};

public:
	long nTotal{};

public:
	long nCoverMobID{};

public:
	ZXString<char> sCoverName;
	// Methods
public:
	virtual ~MonsterBookInfo();

public:
	void _dtor_0();

public:
	MonsterBookInfo(const MonsterBookInfo &arg0);

public:
	void _ctor_1(const MonsterBookInfo &arg0);

public:
	MonsterBookInfo();

public:
	void _ctor_0();

public:
	void Decode(CInPacket &arg0);

public:
	static long __cdecl GetBookLevel(long nCount);

public:
	MonsterBookInfo &operator=(const MonsterBookInfo &arg0);

public:
	static MonsterBookInfo &_op_assign_5(MonsterBookInfo *pThis, const MonsterBookInfo &arg0);
};
STATIC_ASSERT_SIZE(MonsterBookInfo, 36);
