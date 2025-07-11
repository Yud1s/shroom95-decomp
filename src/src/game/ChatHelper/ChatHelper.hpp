// ChatHelper.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

// Level: 0 0x9362
class CClaimChatLog;
// Level: 0 0x9433
class CChatHelper;

class CClaimChatLog
{
	// Nested
	// Fields
private:
	int32_t m_nMaxLine{};

private:
	ZArray<ZXString<char>> m_asChatLog;

private:
	ZArray<ZXString<char>> m_asCharacterName;
	// Methods
public:
	~CClaimChatLog();

public:
	void _dtor_0();

public:
	CClaimChatLog(const CClaimChatLog &arg0);

public:
	void _ctor_1(const CClaimChatLog &arg0);

public:
	CClaimChatLog(ZArray<ZXString<char>> &asChatLog, ZXString<char> sCharacterName);

public:
	void _ctor_0(ZArray<ZXString<char>> &asChatLog, ZXString<char> sCharacterName);

public:
	int32_t IsClaimAbleCharacter(ZXString<char> sCharacterName);

public:
	ZXString<char> GetChatLogOfTwoCharacters(ZXString<char> sTargetCharacterName, ZXString<char> sSendCharacterName);

public:
	ZArray<ZXString<char>> &GetCharacterList();

private:
	int32_t AddCharacterName(ZXString<char> sCharacterName);

public:
	CClaimChatLog &operator=(const CClaimChatLog &arg0);

public:
	static CClaimChatLog &_op_assign_7(CClaimChatLog *pThis, const CClaimChatLog &arg0);
};
STATIC_ASSERT_SIZE(CClaimChatLog, 12);
class CChatHelper
{
	// Nested
public:
	enum UnnamedEnum37499
	{
		HISTORY_NO = 8,
		REPEAT_LIMIT = 4,
		MUTE_DURATION = 2800,
		ALLOWED_CHAT_PER_2SEC = 4
	};
	// Fields
protected:
	unsigned long m_dwLastChecked{};

protected:
	unsigned long m_dwMutedTime{};

protected:
	ZArray<ZXString<char>> m_asHistory;

protected:
	ZArray<ZXString<char>> m_asRecent;

protected:
	std::array<unsigned long, 4> m_dwChatTimeStamp{};

protected:
	long m_nChatIndex{};

protected:
	long m_nHistoryIndex{};

protected:
	int32_t m_bUseHistory{};
	// Methods

	CTOR_DEFAULT(CChatHelper);

public:
	~CChatHelper();

public:
	void _dtor_0();

public:
	CChatHelper(const CChatHelper &arg0);

public:
	void _ctor_1(const CChatHelper &arg0);

public:
	CChatHelper();

public:
	void _ctor_0();

public:
	int32_t TryChat(ZXString<char> &sChat);

public:
	ZXString<char> HistoryUp();

public:
	ZXString<char> HistoryDown();

public:
	void HistoryAddforCommand(ZXString<char> sCommand);

protected:
	void HistoryAdd(ZXString<char> sNew);

public:
	CChatHelper &operator=(const CChatHelper &arg0);

public:
	static CChatHelper &_op_assign_8(CChatHelper *pThis, const CChatHelper &arg0);
};
STATIC_ASSERT_SIZE(CChatHelper, 44);

void __cdecl CHATLOG_ADD(ZXString<char> &sString, uint16_t nType);
