// QuestMan.cpp
#include "QuestMan.hpp"

#include "MonsterBookMan/MonsterBookMan.hpp"

static ZRef<QuestDemand> FAKE_ZRef_QuestDemand{};
static ZRef<MonsterBookInfo> FAKE_ZRef_MonsterBookInfo{};

static ZArray<CQuestMan::Rank> FAKE_ZArray_CQuestMan_Rank{};

static ZRefCounted_AllocHelper<ZRefCountedDummy<QuestDemand>> FAKE_ZRefCounted_AllocHelper_ZRefCountedDummy_QuestDemand{};

#include "QuestMan_regen.ipp"

QuestDemand::~QuestDemand()
{
}
void QuestDemand::_dtor_0()
{
	return __sub_002BA770(this, nullptr);
}
QuestDemand::QuestDemand(const QuestDemand &arg0)
{
	_ctor_1(arg0);
}
void QuestDemand::_ctor_1(const QuestDemand &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
QuestDemand::QuestDemand()
{
	// UNIMPLEMENTED; //_ctor_0();
}
void QuestDemand::_ctor_0()
{
	return __sub_002BA6E0(this, nullptr);
}
QuestDemand &QuestDemand::operator=(const QuestDemand &arg0)
{
	return _op_assign_3(this, arg0);
}
QuestDemand &QuestDemand::_op_assign_3(QuestDemand *pThis, const QuestDemand &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
GradeEntity::~GradeEntity()
{
}
void GradeEntity::_dtor_0()
{
	return __sub_002B8520(this, nullptr);
}
GradeEntity::GradeEntity(const GradeEntity &__that)
{
	_ctor_1(__that);
}
void GradeEntity::_ctor_1(const GradeEntity &__that)
{
	return __sub_002BFD90(this, nullptr, __that);
}
GradeEntity::GradeEntity()
{
	// UNIMPLEMENTED; //_ctor_0();
}
void GradeEntity::_ctor_0()
{
	return __sub_002B85B0(this, nullptr);
}
GradeEntity &GradeEntity::operator=(const GradeEntity &arg0)
{
	return _op_assign_3(this, arg0);
}
GradeEntity &GradeEntity::_op_assign_3(GradeEntity *pThis, const GradeEntity &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CQuestMan::~CQuestMan()
{
	ms_pInstance = nullptr;
}
void CQuestMan::_dtor_0()
{
	return __sub_002BB040(this, nullptr);
}
CQuestMan::CQuestMan(const CQuestMan &arg0)
{
	_ctor_1(arg0);
}
void CQuestMan::_ctor_1(const CQuestMan &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CQuestMan::CQuestMan()
{
	ms_pInstance = this;
}
void CQuestMan::_ctor_0()
{

}
int32_t CQuestMan::LoadDemand()
{
	return __sub_002C3D60(this, nullptr);
}
QuestDemand *CQuestMan::GetStartDemand(uint16_t usQuestID)
{
	ZRef<QuestDemand> pDemand;
	if (m_mStartDemand.GetAt(usQuestID, &pDemand))
		return pDemand.op_arrow();

	return nullptr;
}
QuestDemand *CQuestMan::GetCompleteDemand(uint16_t usQuestID)
{
	return __sub_00270B50(this, nullptr, usQuestID);
}
int32_t CQuestMan::CheckStartDemand(uint16_t usQuestId, unsigned long pStart, const CharacterData &st, const SecondaryStat &bIsEnable, long ftStart, long i, int32_t ft, long ftEnd)
{
	return __sub_002BB6E0(this, nullptr, usQuestId, pStart, st, bIsEnable, ftStart, i, ft, ftEnd);
	/*if (!usQuestId || m_mBlockedQuest.GetAt(usQuestId, nullptr))
		return 0;

	GetStartDemand()*/
}
long CQuestMan::CheckCompleteDemand(uint16_t usQuestID, unsigned long dwNpcTemplateID, const CharacterData &cd, const SecondaryStat &ss)
{
	return __sub_002BC3D0(this, nullptr, usQuestID, dwNpcTemplateID, cd, ss);
}
void CQuestMan::SetWorldID(long arg0)
{
	m_nWorldID = arg0;
}
void CQuestMan::SetQuestClear()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CQuestMan::SetQuestTime(long nQuestID, _FILETIME ftStart, _FILETIME ftEnd)
{
	__sub_002B8AC0(this, nullptr, nQuestID, CreateNakedParam(ftStart), CreateNakedParam(ftEnd));
}
int32_t CQuestMan::IsStartScriptLinkedQuest(uint16_t usQuestID)
{
	return __sub_002B79B0(this, nullptr, usQuestID);
}
int32_t CQuestMan::IsCompleteScriptLinkedQuest(uint16_t usQuestID)
{
	return __sub_002B7A70(this, nullptr, usQuestID);
}
int32_t CQuestMan::IsAutoAlertQuest(uint16_t usQuestID)
{
	return __sub_002B6890(this, nullptr, usQuestID);
}
int32_t CQuestMan::IsAutoStartQuest(uint16_t usQuestID)
{
	return __sub_002B5800(this, nullptr, usQuestID);
}
int32_t CQuestMan::IsAutoAutoAcceptQuest(uint16_t usQuestID)
{
	return __sub_002B5820(this, nullptr, usQuestID);
}
int32_t CQuestMan::IsAutoCompleteQuest(uint16_t usQuestID)
{
	return __sub_002B5840(this, nullptr, usQuestID);
}
int32_t CQuestMan::IsAutoCancelQuest(uint16_t arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CQuestMan::IsAutoCompletionAlertQuest(uint16_t usQuestID)
{
	return __sub_002B6870(this, nullptr, usQuestID);
}
int32_t CQuestMan::IsOneShotQuest(uint16_t arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CQuestMan::IsTimeLimitQuest(uint16_t usQuestID)
{
	return __sub_002B5860(this, nullptr, usQuestID);
}
int32_t CQuestMan::IsTimeLimitQuest2(uint16_t usQuestID)
{
	return __sub_002B5880(this, nullptr, usQuestID);
}
int32_t CQuestMan::IsTimeKeepQuest(uint16_t arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CQuestMan::IsDailyPlayQuest(uint16_t usQuestID)
{
	return __sub_002B58A0(this, nullptr, usQuestID);
}
int32_t CQuestMan::IsPartyQuest(uint16_t usQuestID)
{
	return __sub_00122C20(this, nullptr, usQuestID);
}
int32_t CQuestMan::IsEventQuest(uint16_t usQuestID)
{
	return __sub_00122C20(this, nullptr, usQuestID);
}
int32_t CQuestMan::IsMedalQuest(uint16_t usQuestID)
{
	return __sub_00122C20(this, nullptr, usQuestID);
}
int32_t CQuestMan::IsGuildSupplyQuest(uint16_t usQuestID)
{
	return __sub_00122C20(this, nullptr, usQuestID);
}
int32_t CQuestMan::IsEquipOnAutoStartQuest(long nItemID)
{
	return __sub_002B57B0(this, nullptr, nItemID);
}
int32_t CQuestMan::IsFieldOnAutoStartQuest(long nItemID)
{
	return __sub_002B57D0(this, nullptr, nItemID);
}
int32_t CQuestMan::IsAutoStartQuestOnLevelUp(uint16_t arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
uint16_t CQuestMan::GetAutoStartQuestIDOnLevelUp()
{
	return __sub_002B4DB0(this, nullptr);
}
ZMap<long, ZArray<unsigned short>, long> &CQuestMan::GetAutoStartQuestOnEquip()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ZMap<unsigned long, ZArray<unsigned short>, unsigned long> &CQuestMan::GetAutoStartQuestOnField()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CQuestMan::GetQuestCategory(uint16_t usQuestID)
{
	return __sub_002B68C0(this, nullptr, usQuestID);
}
long CQuestMan::GetCompletedQuestCnt(const CharacterData &cd, int32_t bExcluseEvent)
{
	return __sub_002B7C90(this, nullptr, cd, bExcluseEvent);
}
void CQuestMan::LoadPartyQuestInfo()
{
	__sub_002C5540(this, nullptr);
}
ZXString<char> CQuestMan::GetPartyQuestRank(uint16_t arg0, CharacterData &arg1)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CQuestMan::GetPartyQuestRankCount(ZXString<char> &sRank, const CharacterData &cd)
{
	return __sub_002B8D20(this, nullptr, sRank, cd);
}
void CQuestMan::LoadExclusive()
{
	__sub_002B9670(this, nullptr);
}
int32_t CQuestMan::CheckExclusive(uint16_t usQuestID, const CharacterData &cd)
{
	return __sub_002B9CC0(this, nullptr, usQuestID, cd);
}
int32_t CQuestMan::IsDeliveryAcceptQuest(uint16_t usQuestID)
{
	return __sub_002B7B30(this, nullptr, usQuestID);
}
int32_t CQuestMan::IsDeliveryCompleteQuest(uint16_t usQuestID)
{
	return __sub_002B7BE0(this, nullptr, usQuestID);
}
int32_t CQuestMan::IsDisallowedDeliveryQuest(uint16_t usQuestID)
{
	return __sub_002B58E0(this, nullptr, usQuestID);
}
int32_t CQuestMan::GetQuestByNpc(unsigned long dwNpcTemplateID, ZArray<unsigned short> &aNpcQuest)
{
	return __sub_002B7870(this, nullptr, dwNpcTemplateID, aNpcQuest);
}
int32_t CQuestMan::GetQuestByItem(long nItemID, ZArray<unsigned short> &aItemQuest)
{
	return __sub_002B78A0(this, nullptr, nItemID, aItemQuest);
}
int32_t CQuestMan::GetQuestByItemDemand(long nItemID, ZArray<unsigned short> &aItemQuest)
{
	return __sub_002B78D0(this, nullptr, nItemID, aItemQuest);
}
int32_t CQuestMan::GetQuestByMeso(ZArray<unsigned short> &aMesoQuest)
{
	return __sub_002B7900(this, nullptr, aMesoQuest);
}
int32_t CQuestMan::GetQuestByLevel(ZArray<unsigned short> &aLevelQuest)
{
	return __sub_002B7940(this, nullptr, aLevelQuest);
}
ZArray<unsigned short> CQuestMan::GetQuestArray()
{
	//return __sub_005D83C0(this, nullptr);
	return m_aQuest;
}
long CQuestMan::GetQuestCategoryCount()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ZXString<char> CQuestMan::GetQuestCategoryName(long nIdx)
{
	auto cat = this->m_asQuestCategoryName.At(nIdx);
	return cat ? *cat : ZXString<char>();
	// return __sub_002B9320(this, nullptr, nIdx);
}
ZXString<char> CQuestMan::GetPartyQuestRankString(uint16_t usQuestID, ZXString<char> sValue)
{
	ZXString<char> ret;
	return *__sub_002B93A0(this, nullptr, &ret, usQuestID, CreateNakedParam(sValue));
}
ZMap<unsigned short, int, unsigned short> &CQuestMan::GetAutoStartQuest()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ZArray<unsigned short> CQuestMan::GetNormalAutoStartQuest()
{
	//return __sub_005D83C0(this, nullptr);
	return m_aNormalAutoStartQuest;
}
ZList<unsigned short> &CQuestMan::GetAutoCompletionAlertQuest()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ZXString<char> CQuestMan::GetPartyQuestIconPath(uint16_t usQuestID)
{
	ZXString<char> ret;
	return *__sub_005F79E0(this, nullptr, &ret, usQuestID);
}
long CQuestMan::GetQuestSortKey(uint16_t arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CQuestMan::GetQuestDisplayMedal(uint16_t usQuestID)
{
	return __sub_002BB400(this, nullptr, usQuestID);
}
uint16_t CQuestMan::GetQuestIDByLayerTag(ZXString<char> arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CQuestMan::GetQuestStartingEffect(uint16_t arg0, ZXString<char> &arg1)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CQuestMan::DecodeDisallowedDeliveryList(CInPacket &iPacket)
{
	__sub_002B86D0(this, nullptr, iPacket);
}
void CQuestMan::LoadQuestInfo()
{
	__sub_002BEC10(this, nullptr);
}
ZXString<char> CQuestMan::GetQuestName(uint16_t usQuestID)
{
	ZXString<char> ret;
	return *__sub_005F79E0(this, nullptr, &ret, usQuestID);
}
ZArray<unsigned short> CQuestMan::GetSeriesQuest(ZXString<char> sName)
{
	return __sub_003E2EB0(this, nullptr, CreateNakedParam(sName));
}
ZXString<char> CQuestMan::GetSeriesQuestName(uint16_t usQuestID)
{
	ZXString<char> ret;
	return *__sub_005F79E0(this, nullptr, &ret, usQuestID);
}
long CQuestMan::GetQuestTimeLimit(uint16_t usQuestID)
{
	return __sub_002B5920(this, nullptr, usQuestID);
}
unsigned long CQuestMan::GetQuestTimeLimit2(uint16_t usQuestID)
{
	return __sub_002B68E0(this, nullptr, usQuestID);
}
unsigned long CQuestMan::GetQuestDailyPlayMinTime(uint16_t usQuestID)
{
	return __sub_002B6900(this, nullptr, usQuestID);
}
ZList<unsigned short> CQuestMan::GetTimeKeepQuestList()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CQuestMan::GetKeepTime(uint16_t usQuestID)
{
	return __sub_002B8C80(this, nullptr, usQuestID);
}
ZXString<char> CQuestMan::GetKeepFieldSet(uint16_t arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ZRef<TimeKeepInfo> CQuestMan::GetTimeKeepInfo(uint16_t usQuestID)
{
	auto demand = m_mCompleteDemand.GetAt(usQuestID, nullptr);
	if (demand)
	{
		return (*demand)->pTimeKeepInfo;
	}

	return ZRef<TimeKeepInfo>();

	// return __sub_002B8740(this, nullptr, usQuestID);
}
int32_t CQuestMan::RegisterDemandItem(uint16_t usQuestID, long nQuestState, long nItemID, long nCount)
{
	return __sub_002B8B70(this, nullptr, usQuestID, nQuestState, nItemID, nCount);
}
int32_t CQuestMan::RegisterDemand(uint16_t arg0, _x_com_ptr<IWzProperty> arg1)
{
	return __sub_002C0020(this, nullptr, arg0, CreateNakedParam(arg1));
}
void CQuestMan::SetRecentlyUpdatedQuest(uint16_t usQuestID)
{
	__sub_002B9370(this, nullptr, usQuestID);
}
uint16_t CQuestMan::GetRecentlyUpdatedQuest()
{
	return __sub_002B4DB0(this, nullptr);
}
void CQuestMan::RemoveRecentlyUpdatedQuest(uint16_t usQuestID)
{
	__sub_002B7980(this, nullptr, usQuestID);
}
void CQuestMan::ClearRecentlyUpdatedQuest()
{
	m_lRecentlyUpdatedQuest.RemoveAll();
}
void CQuestMan::LoadPartyQuestRank(uint16_t arg0, _x_com_ptr<IWzProperty> arg1)
{
	__sub_002C4720(this, nullptr, arg0, CreateNakedParam(arg1));
}
void CQuestMan::LoadPartyQuestRankString(uint16_t usQuestID, _x_com_ptr<IWzProperty> pRankString)
{
	__sub_002BDDC0(this, nullptr, usQuestID, CreateNakedParam(pRankString));
}
void CQuestMan::LoadQuestExpByLevelInfo()
{
	__sub_002B9D50(this, nullptr);
}
int32_t CQuestMan::GetExpRateByLevel(uint16_t usQuestID, long &nReturnValue)
{
	return __sub_002B5940(this, nullptr, usQuestID, nReturnValue);
}
void CQuestMan::LoadQuestPerformByDayInfo()
{
	__sub_002BA0F0(this, nullptr);
}
long CQuestMan::GetQuestPerformCountByDay(uint16_t arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CQuestMan &CQuestMan::operator=(const CQuestMan &arg0)
{
	return _op_assign_85(this, arg0);
}
CQuestMan &CQuestMan::_op_assign_85(CQuestMan *pThis, const CQuestMan &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CQuestMan::Rank::~Rank()
{
}
void CQuestMan::Rank::_dtor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CQuestMan::Rank::Rank(const CQuestMan::Rank &arg0)
{
	_ctor_1(arg0);
}
void CQuestMan::Rank::_ctor_1(const CQuestMan::Rank &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CQuestMan::Rank::Rank()
{
	// UNIMPLEMENTED; //_ctor_0();
}
void CQuestMan::Rank::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CQuestMan::Rank &CQuestMan::Rank::operator=(const CQuestMan::Rank &arg0)
{
	return _op_assign_3(this, arg0);
}
CQuestMan::Rank &CQuestMan::Rank::_op_assign_3(CQuestMan::Rank *pThis, const CQuestMan::Rank &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CQuestMan::RankString::~RankString()
{
}
void CQuestMan::RankString::_dtor_0()
{
	return __sub_002B8830(this, nullptr);
}
CQuestMan::RankString::RankString(const CQuestMan::RankString &arg0)
{
	_ctor_1(arg0);
}
void CQuestMan::RankString::_ctor_1(const CQuestMan::RankString &arg0)
{
	// TODO: No module found for method
	// UNIMPLEMENTED;
	*this = arg0;
}
CQuestMan::RankString::RankString()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CQuestMan::RankString::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CQuestMan::RankString &CQuestMan::RankString::operator=(const CQuestMan::RankString &__that)
{
	return _op_assign_3(this, __that);
}
CQuestMan::RankString &CQuestMan::RankString::_op_assign_3(CQuestMan::RankString *pThis, const CQuestMan::RankString &__that)
{
	return __sub_002B8950(pThis, nullptr, __that);
}

int32_t __cdecl _anon__CheckEquippedItemByIndex(GW_ItemSlotBase *pItem, long nItemID)
{
	//return __sub_002B8720(pItem, nItemID);
	return pItem && pItem->nItemID == nItemID;
}
void __cdecl AddQuestList(ZArray<unsigned short> &aQuestList, ZXString<char> &sList, const ZArray<unsigned short> &aQuest, long nQuestState)
{
	return __sub_002BE190(aQuestList, sList, aQuest, nQuestState);
}
_FILETIME __cdecl GetStringToFileTime(ZXString<char> sDate, int32_t bStart)
{
	return __sub_002BAA30(CreateNakedParam(sDate), bStart);
}
ZXString<char> __cdecl operator__unsignedshort_char__134022(const uint16_t *s1, const ZXString<char> &s2)
{
	return __sub_002B8FF0(s1, s2);
}
