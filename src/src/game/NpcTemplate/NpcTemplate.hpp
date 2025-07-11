// NpcTemplate.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"
#include "DBBasic/DBBasic.hpp"

// Level: 0 0xc59d
class CNpcTemplate;
// Level: 0 0x1f89e
struct MODSCRIPT;

class CNpcTemplate
{
public:
	static ZMap<long, ZRef<CNpcTemplate>, long> ms_mNpcTemplate;
	// Nested
public:
	struct SPEAK_CONDITION
	{
		// Nested
		// Fields
	public:
		_x_com_ptr<IWzProperty> pProp;

	public:
		long nJobCategory{};

	public:
		long nJob{};

	public:
		uint16_t usQuestID{};
		// Methods
	public:
		~SPEAK_CONDITION();

	public:
		void _dtor_0();

	public:
		SPEAK_CONDITION(const CNpcTemplate::SPEAK_CONDITION &arg0);

	public:
		void _ctor_1( const CNpcTemplate::SPEAK_CONDITION &arg0);

	public:
		SPEAK_CONDITION();

	public:
		void _ctor_0();

	public:
		int32_t CheckCondition(long nJob_, const CharacterData &cd);

	public:
		CNpcTemplate::SPEAK_CONDITION &operator=(const CNpcTemplate::SPEAK_CONDITION &arg0);

	public:
		static CNpcTemplate::SPEAK_CONDITION &_op_assign_4(CNpcTemplate::SPEAK_CONDITION *pThis, const CNpcTemplate::SPEAK_CONDITION &arg0);
	};

public:
	struct ACT
	{
		// Nested
		// Fields
	public:
		Ztl_bstr_t bsAction;

	public:
		ZArray<Ztl_bstr_t> absSpeak;

	public:
		int32_t bHideName{};

	public:
		int32_t bHideQuestBalloon{};

	public:
		ZList<CNpcTemplate::SPEAK_CONDITION> lbsSpeak;
		// Methods
	public:
		~ACT();

	public:
		void _dtor_0();

	public:
		ACT(const CNpcTemplate::ACT &arg0);

	public:
		void _ctor_1( const CNpcTemplate::ACT &arg0);

	public:
		ACT();

	public:
		void _ctor_0();

	public:
		ZArray<Ztl_bstr_t> GetChatMessageList(const CharacterData &cd, long &nIdx, long dwTemplateID);

	public:
		CNpcTemplate::ACT &operator=(const CNpcTemplate::ACT &arg0);

	public:
		static CNpcTemplate::ACT &_op_assign_4(CNpcTemplate::ACT *pThis, const CNpcTemplate::ACT &arg0);
	};

public:
	struct QUEST_CONDITION
	{
		// Nested
		// Fields
	public:
		long nQuestID{};

	public:
		long nQuestState{};

	public:
		ZXString<char> sQRValue;
		// Methods
	public:
		~QUEST_CONDITION();

	public:
		void _dtor_0();

	public:
		QUEST_CONDITION(const CNpcTemplate::QUEST_CONDITION &arg0);

	public:
		void _ctor_1( const CNpcTemplate::QUEST_CONDITION &arg0);

	public:
		QUEST_CONDITION();

	public:
		void _ctor_0();

	public:
		CNpcTemplate::QUEST_CONDITION &operator=(const CNpcTemplate::QUEST_CONDITION &arg0);

	public:
		static CNpcTemplate::QUEST_CONDITION &_op_assign_3(CNpcTemplate::QUEST_CONDITION *pThis, const CNpcTemplate::QUEST_CONDITION &arg0);
	};

public:
	struct QuestLine
	{
		// Nested
		// Fields
	public:
		uint16_t usQuestID{};

	public:
		ZXString<char> sMsg;
		// Methods
	public:
		~QuestLine();

	public:
		void _dtor_0();

	public:
		QuestLine(const CNpcTemplate::QuestLine &arg0);

	public:
		void _ctor_1( const CNpcTemplate::QuestLine &arg0);

	public:
		QuestLine();

	public:
		void _ctor_0();

	public:
		CNpcTemplate::QuestLine &operator=(const CNpcTemplate::QuestLine &arg0);

	public:
		static CNpcTemplate::QuestLine &_op_assign_3(CNpcTemplate::QuestLine *pThis, const CNpcTemplate::QuestLine &arg0);
	};

public:
	struct CLIENT_ACTION_SET
	{
		// Nested
		// Fields
	public:
		_x_com_ptr<IWzProperty> pProp;

	public:
		ZList<CNpcTemplate::QUEST_CONDITION> lCondition;

	public:
		ZArray<CNpcTemplate::ACT> aAct;

	public:
		int32_t bHide{};

	public:
		unsigned char nGender{};
		// Methods
	public:
		~CLIENT_ACTION_SET();

	public:
		void _dtor_0();

	public:
		CLIENT_ACTION_SET(const CNpcTemplate::CLIENT_ACTION_SET &arg0);

	public:
		void _ctor_1( const CNpcTemplate::CLIENT_ACTION_SET &arg0);

	public:
		CLIENT_ACTION_SET();

	public:
		void _ctor_0();

	public:
		CNpcTemplate::CLIENT_ACTION_SET &operator=(const CNpcTemplate::CLIENT_ACTION_SET &arg0);

	public:
		static CNpcTemplate::CLIENT_ACTION_SET &_op_assign_3(CNpcTemplate::CLIENT_ACTION_SET *pThis, const CNpcTemplate::CLIENT_ACTION_SET &arg0);
	};
	// Fields
public:
	unsigned long dwTemplateID{};

public:
	ZXString<char> sName;

public:
	ZXString<char> sFuncName;

public:
	int32_t bMove{};

public:
	int32_t bFloat{};

public:
	long nSpeed{};

public:
	int32_t bHide{};

public:
	int32_t bHideName{};

public:
	int32_t bDcMark{};

public:
	tagRECT dcRange{};

public:
	int32_t nShop{};

public:
	long nTrunkCost_Get{};

public:
	long nTrunkCost_Put{};

public:
	int32_t bStoreBank{};

public:
	int32_t bCash{};

public:
	int32_t bTalkMouseOnly{};

public:
	int32_t bMapleTV{};

public:
	long nMapleTVmsgX{};

public:
	long nMapleTVmsgY{};

public:
	long nMapleTVadX{};

public:
	long nMapleTVadY{};

public:
	ZArray<Ztl_bstr_t> absSpeak;

public:
	ZList<CNpcTemplate::SPEAK_CONDITION> lbsSpeak;

public:
	ZArray<CNpcTemplate::ACT> aAct;

public:
	long nSpecialAct{};

public:
	ZList<CNpcTemplate::CLIENT_ACTION_SET> m_lClientActionSet;

public:
	long tLastHideCheck{};

public:
	long nIsViewToLocalUser{};

public:
	ZList<SCRIPTINFO> lScriptInfo;

public:
	ZXString<char> sScript;

public:
	std::array<ZXString<char>, 2> asDefault;

public:
	ZList<CNpcTemplate::QuestLine> m_lQuestCompleteDefault;

public:
	ZList<long> m_lLocation;

public:
	unsigned long m_dwImitate{};
	// Methods
public:
	~CNpcTemplate();

public:
	void _dtor_0();

public:
	CNpcTemplate(const CNpcTemplate &arg0);

public:
	void _ctor_1( const CNpcTemplate &arg0);

public:
	CNpcTemplate();

public:
	void _ctor_0();

public:
	static ZArray<Ztl_bstr_t> __cdecl GetChatMessageList(const CharacterData &cd, long &nIdx, ZArray<Ztl_bstr_t> &defSpeak, ZList<CNpcTemplate::SPEAK_CONDITION> &lbsSpeak, long dwTemplateID);
	static ZArray<Ztl_bstr_t> __cdecl GetChatMessageList_1(const CharacterData &cd, long &nIdx, ZArray<Ztl_bstr_t> &defSpeak, ZList<CNpcTemplate::SPEAK_CONDITION> &lbsSpeak, long dwTemplateID)
	{
		return GetChatMessageList(cd, nIdx, defSpeak, lbsSpeak, dwTemplateID);
	}

public:
	ZArray<Ztl_bstr_t> GetChatMessageList(const CharacterData &cd, long &nIdx);
	ZArray<Ztl_bstr_t> GetChatMessageList_0(const CharacterData &cd, long &nIdx){
		return GetChatMessageList(cd, nIdx);
	
	}

public:
	long CalcClientActionSetIdx(int32_t bQuestCheck);

public:
	int32_t IsHideToLocalUser(long tUpdateInterval);

public:
	static void __cdecl Load();

public:
	static void __cdecl Unload();

public:
	static CNpcTemplate *__cdecl GetNpcTemplate(unsigned long dwTemplateID);

public:
	static void __cdecl OnSetNpcScript(CInPacket &iPacket);

public:
	void UpdateScript(_SYSTEMTIME st);

protected:
	static int32_t __cdecl RegisterNpc(unsigned long arg0, _x_com_ptr<IWzProperty> arg1, _x_com_ptr<IWzProperty> arg2);

protected:
	static void __cdecl LoadSpeakCondition(_x_com_ptr<IWzProperty> pSpeak, ZList<CNpcTemplate::SPEAK_CONDITION> &lbsSpeak);

public:
	CNpcTemplate &operator=(const CNpcTemplate &arg0);

public:
	static CNpcTemplate &_op_assign_14(CNpcTemplate *pThis, const CNpcTemplate &arg0);
};
STATIC_ASSERT_SIZE(CNpcTemplate, 232);
struct MODSCRIPT
{
	// Nested
	// Fields
public:
	unsigned long dwTemplateID{};

public:
	SCRIPTINFO sInfo;
	// Methods
public:
	~MODSCRIPT();

public:
	void _dtor_0();

public:
	MODSCRIPT(const MODSCRIPT &arg0);

public:
	void _ctor_1( const MODSCRIPT &arg0);

public:
	MODSCRIPT();

public:
	void _ctor_0();

public:
	void Encode(COutPacket &arg0);

public:
	void Decode(CInPacket &iPacket);

public:
	MODSCRIPT &operator=(const MODSCRIPT &arg0);

public:
	static MODSCRIPT &_op_assign_5(MODSCRIPT *pThis, const MODSCRIPT &arg0);
};
STATIC_ASSERT_SIZE(MODSCRIPT, 16);

// 86F304 4
static const CNpcTemplate *_D_S_PTEMPLATE{};
