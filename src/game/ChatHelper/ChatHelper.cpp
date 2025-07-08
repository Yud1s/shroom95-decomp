// ChatHelper.cpp
#include "ChatHelper.hpp"

#include "WvsExtra.h"

static ExtractCharacterNameHelper<ZXString<char>> FAKE_ExtractCharacterNameHelper;

#include "ChatHelper_regen.ipp"

CClaimChatLog::~CClaimChatLog()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CClaimChatLog::_dtor_0()
{
    return __sub_00602B90(this, nullptr);
}

CClaimChatLog::CClaimChatLog(const CClaimChatLog& arg0)
{
    _ctor_1(arg0);
}

void CClaimChatLog::_ctor_1(const CClaimChatLog& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CClaimChatLog::CClaimChatLog(ZArray<ZXString<char>>& asChatLog, ZXString<char> sCharacterName)
{
    _ctor_0(asChatLog, sCharacterName);
}

void CClaimChatLog::_ctor_0(ZArray<ZXString<char>>& asChatLog, ZXString<char> sCharacterName)
{
    return __sub_000AAAC0(this, nullptr, asChatLog, CreateNakedParam(sCharacterName));
}

int32_t CClaimChatLog::IsClaimAbleCharacter(ZXString<char> sCharacterName)
{
    return __sub_000AAC20(this, nullptr, CreateNakedParam(sCharacterName));
}

ZXString<char> CClaimChatLog::GetChatLogOfTwoCharacters(ZXString<char> sTargetCharacterName,
                                                        ZXString<char> sSendCharacterName)
{
    ZXString<char> ret;
    return *__sub_000AAD20(this, nullptr, &ret, CreateNakedParam(sTargetCharacterName),
                           CreateNakedParam(sSendCharacterName));
}

ZArray<ZXString<char>>& CClaimChatLog::GetCharacterList()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CClaimChatLog::AddCharacterName(ZXString<char> sCharacterName)
{
    return __sub_000AA350(this, nullptr, CreateNakedParam(sCharacterName));
}

CClaimChatLog& CClaimChatLog::operator=(const CClaimChatLog& arg0)
{
    return _op_assign_7(this, arg0);
}

CClaimChatLog& CClaimChatLog::_op_assign_7(CClaimChatLog* pThis, const CClaimChatLog& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CChatHelper::~CChatHelper()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CChatHelper::_dtor_0()
{
    return __sub_000AA4F0(this, nullptr);
}

CChatHelper::CChatHelper(const CChatHelper& arg0)
{
    _ctor_1(arg0);
}

void CChatHelper::_ctor_1(const CChatHelper& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CChatHelper::CChatHelper()
{
    m_nHistoryIndex = -1;
}

void CChatHelper::_ctor_0()
{
    return __sub_000AA4C0(this, nullptr);
}

int32_t CChatHelper::TryChat(ZXString<char>& sChat)
{
    return __sub_000AA550(this, nullptr, sChat);
}

ZXString<char> CChatHelper::HistoryUp()
{
    return __sub_000AA230(this, nullptr);
}

ZXString<char> CChatHelper::HistoryDown()
{
    return __sub_000AA2C0(this, nullptr);
}

void CChatHelper::HistoryAddforCommand(ZXString<char> sCommand)
{
    __sub_000AA1B0(this, nullptr, CreateNakedParam(sCommand));
}

void CChatHelper::HistoryAdd(ZXString<char> sNew)
{
    __sub_000AA090(this, nullptr, CreateNakedParam(sNew));
}

CChatHelper& CChatHelper::operator=(const CChatHelper& arg0)
{
    return _op_assign_8(this, arg0);
}

CChatHelper& CChatHelper::_op_assign_8(CChatHelper* pThis, const CChatHelper& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void __cdecl CHATLOG_ADD(ZXString<char>& sString, uint16_t nType)
{
    return __sub_000AA000(sString, nType);
}
