// NpcTemplate.cpp
#include "NpcTemplate.hpp"
#include "Stage/Stage.hpp"
static ZRef<CStage> FAKE_ZRef_CStage{};

static ZRef<CNpcTemplate> FAKE_ZRef_CNpcTemplate{};
static ZMap<long, ZRef<CNpcTemplate>, long> FAKE_ZMap_long_ZRef_CNpcTemplate_long{};

#include "NpcTemplate_regen.ipp"

ZMap<long, ZRef<CNpcTemplate>, long> CNpcTemplate::ms_mNpcTemplate{};

CNpcTemplate::~CNpcTemplate()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CNpcTemplate::_dtor_0()
{
    return __sub_0027BD10(this, nullptr);
}

CNpcTemplate::CNpcTemplate(const CNpcTemplate& arg0)
{
    _ctor_1(arg0);
}

void CNpcTemplate::_ctor_1(const CNpcTemplate& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CNpcTemplate::CNpcTemplate()
{
}

void CNpcTemplate::_ctor_0()
{
    //return __sub_0027BC10(this, nullptr);
    new(this) CNpcTemplate();
}

ZArray<Ztl_bstr_t> __cdecl CNpcTemplate::GetChatMessageList(const CharacterData& cd, long& nIdx,
                                                            ZArray<Ztl_bstr_t>& defSpeak,
                                                            ZList<CNpcTemplate::SPEAK_CONDITION>& lbsSpeak,
                                                            long dwTemplateID)
{
    return __sub_0027B670(cd, nIdx, defSpeak, lbsSpeak, dwTemplateID);
}

ZArray<Ztl_bstr_t> CNpcTemplate::GetChatMessageList(const CharacterData& cd, long& nIdx)
{
    return __sub_00277FE0(this, nullptr, cd, nIdx);
}

long CNpcTemplate::CalcClientActionSetIdx(int32_t bQuestCheck)
{
    return __sub_0027AB20(this, nullptr, bQuestCheck);
}

int32_t CNpcTemplate::IsHideToLocalUser(long tUpdateInterval)
{
    return __sub_0027AC90(this, nullptr, tUpdateInterval);
}

void __cdecl CNpcTemplate::Load()
{
    __sub_0027F190();
}

void __cdecl CNpcTemplate::Unload()
{
    __sub_0027A4C0();
}

CNpcTemplate* __cdecl CNpcTemplate::GetNpcTemplate(unsigned long dwTemplateID)
{
    return __sub_0027F1C0(dwTemplateID);
}

void __cdecl CNpcTemplate::OnSetNpcScript(CInPacket& iPacket)
{
    __sub_0027F700(iPacket);
}

void CNpcTemplate::UpdateScript(_SYSTEMTIME st)
{
    __sub_0027B400(this, nullptr, CreateNakedParam(st));
}

int32_t __cdecl CNpcTemplate::RegisterNpc(unsigned long arg0, _x_com_ptr<IWzProperty> arg1,
                                          _x_com_ptr<IWzProperty> arg2)
{
    return __sub_0027C190(arg0, CreateNakedParam(arg1), CreateNakedParam(arg2));
}

void __cdecl CNpcTemplate::LoadSpeakCondition(_x_com_ptr<IWzProperty> pSpeak,
                                              ZList<CNpcTemplate::SPEAK_CONDITION>& lbsSpeak)
{
    __sub_0027B030(CreateNakedParam(pSpeak), lbsSpeak);
}

CNpcTemplate& CNpcTemplate::operator=(const CNpcTemplate& arg0)
{
    return _op_assign_14(this, arg0);
}

CNpcTemplate& CNpcTemplate::_op_assign_14(CNpcTemplate* pThis, const CNpcTemplate& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CNpcTemplate::SPEAK_CONDITION::~SPEAK_CONDITION()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CNpcTemplate::SPEAK_CONDITION::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CNpcTemplate::SPEAK_CONDITION::SPEAK_CONDITION(const CNpcTemplate::SPEAK_CONDITION& arg0)
{
    _ctor_1(arg0);
}

void CNpcTemplate::SPEAK_CONDITION::_ctor_1(const CNpcTemplate::SPEAK_CONDITION& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CNpcTemplate::SPEAK_CONDITION::SPEAK_CONDITION()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CNpcTemplate::SPEAK_CONDITION::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CNpcTemplate::SPEAK_CONDITION::CheckCondition(long nJob_, const CharacterData& cd)
{
    return __sub_00279EF0(this, nullptr, nJob_, cd);
}

CNpcTemplate::SPEAK_CONDITION& CNpcTemplate::SPEAK_CONDITION::operator=(const CNpcTemplate::SPEAK_CONDITION& arg0)
{
    return _op_assign_4(this, arg0);
}

CNpcTemplate::SPEAK_CONDITION& CNpcTemplate::SPEAK_CONDITION::_op_assign_4(
    CNpcTemplate::SPEAK_CONDITION* pThis, const CNpcTemplate::SPEAK_CONDITION& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CNpcTemplate::ACT::~ACT()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CNpcTemplate::ACT::_dtor_0()
{
    return __sub_0027B5D0(this, nullptr);
}

CNpcTemplate::ACT::ACT(const CNpcTemplate::ACT& arg0)
{
    _ctor_1(arg0);
}

void CNpcTemplate::ACT::_ctor_1(const CNpcTemplate::ACT& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CNpcTemplate::ACT::ACT()
{
}

void CNpcTemplate::ACT::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZArray<Ztl_bstr_t> CNpcTemplate::ACT::GetChatMessageList(const CharacterData& cd, long& nIdx, long dwTemplateID)
{
    return __sub_00278020(this, nullptr, cd, nIdx, dwTemplateID);
}

CNpcTemplate::ACT& CNpcTemplate::ACT::operator=(const CNpcTemplate::ACT& arg0)
{
    return _op_assign_4(this, arg0);
}

CNpcTemplate::ACT& CNpcTemplate::ACT::_op_assign_4(CNpcTemplate::ACT* pThis, const CNpcTemplate::ACT& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CNpcTemplate::QUEST_CONDITION::~QUEST_CONDITION()
{
}

void CNpcTemplate::QUEST_CONDITION::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CNpcTemplate::QUEST_CONDITION::QUEST_CONDITION(const CNpcTemplate::QUEST_CONDITION& arg0)
{
    _ctor_1(arg0);
}

void CNpcTemplate::QUEST_CONDITION::_ctor_1(const CNpcTemplate::QUEST_CONDITION& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CNpcTemplate::QUEST_CONDITION::QUEST_CONDITION()
{
}

void CNpcTemplate::QUEST_CONDITION::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CNpcTemplate::QUEST_CONDITION& CNpcTemplate::QUEST_CONDITION::operator=(const CNpcTemplate::QUEST_CONDITION& arg0)
{
    return _op_assign_3(this, arg0);
}

CNpcTemplate::QUEST_CONDITION& CNpcTemplate::QUEST_CONDITION::_op_assign_3(
    CNpcTemplate::QUEST_CONDITION* pThis, const CNpcTemplate::QUEST_CONDITION& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CNpcTemplate::QuestLine::~QuestLine()
{
}

void CNpcTemplate::QuestLine::_dtor_0()
{
    return __sub_0027AAE0(this, nullptr);
}

CNpcTemplate::QuestLine::QuestLine(const CNpcTemplate::QuestLine& arg0)
{
    _ctor_1(arg0);
}

void CNpcTemplate::QuestLine::_ctor_1(const CNpcTemplate::QuestLine& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CNpcTemplate::QuestLine::QuestLine()
{
}

void CNpcTemplate::QuestLine::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CNpcTemplate::QuestLine& CNpcTemplate::QuestLine::operator=(const CNpcTemplate::QuestLine& arg0)
{
    return _op_assign_3(this, arg0);
}

CNpcTemplate::QuestLine& CNpcTemplate::QuestLine::_op_assign_3(CNpcTemplate::QuestLine* pThis,
                                                               const CNpcTemplate::QuestLine& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CNpcTemplate::CLIENT_ACTION_SET::~CLIENT_ACTION_SET()
{
}

void CNpcTemplate::CLIENT_ACTION_SET::_dtor_0()
{
    return __sub_0027BB90(this, nullptr);
}

CNpcTemplate::CLIENT_ACTION_SET::CLIENT_ACTION_SET(const CNpcTemplate::CLIENT_ACTION_SET& arg0)
{
    _ctor_1(arg0);
}

void CNpcTemplate::CLIENT_ACTION_SET::_ctor_1(const CNpcTemplate::CLIENT_ACTION_SET& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CNpcTemplate::CLIENT_ACTION_SET::CLIENT_ACTION_SET()
{
}

void CNpcTemplate::CLIENT_ACTION_SET::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CNpcTemplate::CLIENT_ACTION_SET& CNpcTemplate::CLIENT_ACTION_SET::operator=(const CNpcTemplate::CLIENT_ACTION_SET& arg0)
{
    return _op_assign_3(this, arg0);
}

CNpcTemplate::CLIENT_ACTION_SET& CNpcTemplate::CLIENT_ACTION_SET::_op_assign_3(
    CNpcTemplate::CLIENT_ACTION_SET* pThis, const CNpcTemplate::CLIENT_ACTION_SET& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

MODSCRIPT::~MODSCRIPT()
{
    UNIMPLEMENTED; // _dtor_0();
}

void MODSCRIPT::_dtor_0()
{
    return __sub_0027AB00(this, nullptr);
}

MODSCRIPT::MODSCRIPT(const MODSCRIPT& arg0)
{
    _ctor_1(arg0);
}

void MODSCRIPT::_ctor_1(const MODSCRIPT& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

MODSCRIPT::MODSCRIPT()
{
    UNIMPLEMENTED; //_ctor_0();
}

void MODSCRIPT::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void MODSCRIPT::Encode(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void MODSCRIPT::Decode(CInPacket& iPacket)
{
    __sub_000F96F0(this, nullptr, iPacket);
}

MODSCRIPT& MODSCRIPT::operator=(const MODSCRIPT& arg0)
{
    return _op_assign_5(this, arg0);
}

MODSCRIPT& MODSCRIPT::_op_assign_5(MODSCRIPT* pThis, const MODSCRIPT& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
