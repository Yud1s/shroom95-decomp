// Pet.cpp
#include "Pet.hpp"

#include <UIUserInfo/UIUserInfo.hpp>

#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};
#include "Pet_regen.ipp"

CDurationChecker::~CDurationChecker()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CDurationChecker::_dtor_0()
{
    return __sub_002A01E0(this, nullptr);
}

CDurationChecker::CDurationChecker(const CDurationChecker& arg0) : m_nCountMin(0),
                                                                   m_nCountMax(0),
                                                                   m_nDurationLimitMin(0),
                                                                   m_nDurationLimitMax(0),
                                                                   m_nDurationMin(0),
                                                                   m_nDurationMax(0)
{
    _ctor_1(arg0);
}

void CDurationChecker::_ctor_1(const CDurationChecker& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDurationChecker::CDurationChecker(long nCountMin, long nCountMax, long durationLimitMin, long durationLimitMax,
                                   long durationMin, long durationMax):
    m_nCountMin(nCountMin), m_nCountMax(nCountMax), m_nDurationLimitMin(durationLimitMin),
    m_nDurationLimitMax(durationLimitMax), m_nDurationMin(durationMin), m_nDurationMax(durationMax),
    m_DurationQueue(nCountMax)
{
}

void CDurationChecker::_ctor_0(long arg0, long arg1, long arg2, long arg3, long arg4, long arg5)
{
    new(this) CDurationChecker(arg0, arg1, arg2, arg3, arg4, arg5);
}

CDurationChecker::CDurationChecker() : m_nCountMin(0),
                                       m_nCountMax(0),
                                       m_nDurationLimitMin(0),
                                       m_nDurationLimitMax(0),
                                       m_nDurationMin(0),
                                       m_nDurationMax(0) // TODO
{
}

void CDurationChecker::_ctor_3()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CDurationChecker::Validate(long tDuration)
{
    return __sub_00117440(this, nullptr, tDuration);
}

void CDurationChecker::Reset()
{
    __sub_002A01E0(this, nullptr);
}

long CDurationChecker::GetCountLimit()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CDurationChecker::GetCount()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CDurationChecker::GetDurationLimitMin()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CDurationChecker::GetDurationLimitMax()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CDurationChecker::SetDurationLimit(long arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CDurationChecker::GetDurationTotal()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDurationChecker::DurationQueue::~DurationQueue()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CDurationChecker::DurationQueue::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDurationChecker::DurationQueue::DurationQueue(const CDurationChecker::DurationQueue& arg0)
    : m_nCountLimit(0) // TODO
{
    _ctor_1(arg0);
}

void CDurationChecker::DurationQueue::_ctor_1(const CDurationChecker::DurationQueue& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CDurationChecker::DurationQueue::DurationQueue(long nCountLimit)
    : m_nCountLimit(nCountLimit)
{
    //_ctor_0( nCountLimit);
    m_atDuration.ReAlloc(nCountLimit, 0, ZAllocHelper(1));
}

void CDurationChecker::DurationQueue::_ctor_0(long nCountLimit)
{
    //return __sub_004E2D60(this, nullptr, nCountLimit);
    new(this) CDurationChecker::DurationQueue(nCountLimit);
}

long CDurationChecker::DurationQueue::Add(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CDurationChecker::DurationQueue::Clear()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CDurationChecker::DurationQueue::GetCountLimit()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CDurationChecker::DurationQueue::GetCount()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CDurationChecker::DurationQueue::GetCountTotal()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CDurationChecker::DurationQueue::GetDurationTotal()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

PETLAYER::~PETLAYER()
{
    UNIMPLEMENTED; // _dtor_0();
}

void PETLAYER::_dtor_0()
{
    return __sub_0029FC90(this, nullptr);
}

PETLAYER::PETLAYER(const PETLAYER& arg0)
{
    _ctor_1(arg0);
}

void PETLAYER::_ctor_1(const PETLAYER& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

PETLAYER::PETLAYER()
{
    UNIMPLEMENTED; //_ctor_0();
}

void PETLAYER::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

PETLAYER& PETLAYER::operator=(const PETLAYER& arg0)
{
    return _op_assign_3(this, arg0);
}

PETLAYER& PETLAYER::_op_assign_3(PETLAYER* pThis, const PETLAYER& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CPet::~CPet()
{
    if (auto userInfo = CUIUserInfo::GetInstance())
        userInfo->OnClosePet(m_pOwner->GetCharacterId());
}

void CPet::_dtor_0()
{
    return __sub_000FFD20(this, nullptr);
}

CPet::CPet(const CPet& arg0)
{
    _ctor_1(arg0);
}

void CPet::_ctor_1(const CPet& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CPet::CPet():
    m_DCClient(3, 4, 1000, 0x7FFFFFFF, 0x80000000, 0x7FFFFFFF)
{
    m_nRestAction = 1;
    m_nOneTimeAction = -1;
    m_bFirstPetAction = true;

    _ZtlSecurePut_m_bChatBalloon(0);
    _ZtlSecurePut_m_bIgnoreItems(0);
    _ZtlSecurePut_m_bLongRange(0);
    _ZtlSecurePut_m_bNameTag(0);
    _ZtlSecurePut_m_bPickupItem(0);
    _ZtlSecurePut_m_bPickupMeso(0);
    _ZtlSecurePut_m_bPickupOthers(0);
    _ZtlSecurePut_m_bConsumeHP(0);
    _ZtlSecurePut_m_bConsumeMP(0);
    _ZtlSecurePut_m_bSweepForDrop(0);
    _ZtlSecurePut_m_dwPosCRC(0);

    m_tItemSoltChange = get_update_time();
}

void CPet::_ctor_0()
{
    return __sub_004E3DF0(this, nullptr);
}

void CPet::Init(CUser* pOwner, long nPetID)
{
    __sub_002A3530(this, nullptr, pOwner, nPetID);
}

void CPet::Init(CUser* pOwner, CInPacket& iPacket)
{
    __sub_002A5340(this, nullptr, pOwner, iPacket);
}

unsigned long CPet::GetTemplateID()
{
    return m_pTemplate->GetTemplateID();
}

const ZXString<char>& CPet::GetName()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const ZXString<char>& CPet::GetBasicName()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CPet::IsNamedPet()
{
    return __sub_0029FEB0(this, nullptr);
}

GW_ItemSlotPet* CPet::GetItemSlot()
{
    return __sub_0029FFB0(this, nullptr);
}

long CPet::GetLevel()
{
    return __sub_002A0080(this, nullptr);
}

CUser* CPet::GetOwner()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

_x_com_ptr<IWzVector2D> CPet::GetVecCtrl()
{
    return __sub_0029FC60(this, nullptr);
}

/*_x_com_ptr<IWzVector2D> CPet::GetVecCtrl()
{
	return __sub_0010FD10(this, nullptr);
}*/
int32_t CPet::IsLeft()
{
    return __sub_0029FEB0(this, nullptr);
}

long CPet::GetMoveAction()
{
    return __sub_002A0080(this, nullptr);
}

void CPet::SetMoveAction(long nMA, int32_t bReload)
{
    __sub_002A3830(this, nullptr, nMA, bReload);
}

void CPet::GetBodyRect(tagRECT& rc)
{
    __sub_002A1AC0(this, nullptr, rc);
}

_LARGE_INTEGER CPet::GetPetLockerSN()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CPet::IsOnPlayingOneTimeAction()
{
    return __sub_0029FEB0(this, nullptr);
}

long CPet::GetOneTimeAction()
{
    return __sub_002A0080(this, nullptr);
}

void CPet::ResetOneTimeAction()
{
    __sub_000FFD20(this, nullptr);
}

long CPet::GetCurrentAction(long* arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

_x_com_ptr<IWzGr2DLayer> CPet::GetLayerAction()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CPet::ParseCommand(ZXString<char> sChat)
{
    return __sub_002A3CC0(this, nullptr, CreateNakedParam(sChat));
}

void CPet::ChatCommand(const ZXString<char>& sContent)
{
    __sub_002A4020(this, nullptr, sContent);
}

void CPet::CursedChatCommand()
{
    __sub_000FFD20(this, nullptr);
}

void CPet::RandomAction()
{
    __sub_000FFD20(this, nullptr);
}

void CPet::SetSetItemEffect(long nEffectID, long nEffIndex)
{
    __sub_002A4F10(this, nullptr, nEffectID, nEffIndex);
}

void CPet::SetSetItemBackground(long nEffIndex, int32_t bTeleport)
{
    __sub_002A4320(this, nullptr, nEffIndex, bTeleport);
}

void CPet::ChatCommandInPreview(const ZXString<char>& s)
{
    __sub_002A1450(this, nullptr, s);
}

void CPet::ShowEffect(long nType, tagPOINT ptOld, tagPOINT ptNew)
{
    __sub_002A2050(this, nullptr, nType, CreateNakedParam(ptOld), CreateNakedParam(ptNew));
}

void CPet::ShowEffect(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CPet::Update()
{
    __sub_000FFD20(this, nullptr);
}

void CPet::TryPickUpDrop()
{
    __sub_000FFD20(this, nullptr);
}

int32_t CPet::SendDropPickUpRequest(const tagPOINT& pt, unsigned long dwID, unsigned long dwCliCrc,
                                    unsigned long dwRectCrc)
{
    return __sub_002A0820(this, nullptr, pt, dwID, dwCliCrc, dwRectCrc);
}

void CPet::SetShoeAttr()
{
    __sub_000FFD20(this, nullptr);
}

uint16_t CPet::GetUpgradePetSkill()
{
    return __sub_002A00B0(this, nullptr);
}

int32_t CPet::IsUpgradePetSkillChanged(uint16_t arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CPet::SendUpdateExceptionListRequest(ZArray<long>& aList)
{
    __sub_002A0DD0(this, nullptr, aList);
}

int32_t CPet::IsInExceptionListPet(long nItemID)
{
    return __sub_0029FCA0(this, nullptr, nItemID);
}

void CPet::SetPreviewState()
{
    __sub_000FFD20(this, nullptr);
}

void CPet::SetPetIndex(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CPet::GetPetIndex()
{
    return __sub_002A0080(this, nullptr);
}

void CPet::SetPositionContext(long nPositonContext)
{
    __sub_0029FC10(this, nullptr, nPositonContext);
}

long CPet::GetType()
{
    return __sub_002A0400(this, nullptr);
}

long CPet::OnResolveMoveAction(long nInputX, long nInputY, long nCurMoveAction, const CVecCtrl* pvc)
{
    return __sub_002A06C0(this, nullptr, nInputX, nInputY, nCurMoveAction, pvc);
}

void CPet::OnLayerZChanged(const CVecCtrl* pvc)
{
    __sub_0029FB30(this, nullptr, pvc);
}

const ZRef<CAttrShoe> CPet::GetShoeAttr()
{
    return __sub_002A0480(this, nullptr);
}

const tagPOINT CPet::GetPos()
{
    return __sub_002A04B0(this, nullptr);
}

const tagPOINT CPet::GetPosPrev()
{
    return __sub_002A04E0(this, nullptr);
}

long CPet::GetZMass()
{
    return __sub_002A0460(this, nullptr);
}

void CPet::OnMove(CInPacket& iPacket)
{
    __sub_0029FB60(this, nullptr, iPacket);
}

void CPet::OnAction(CInPacket& iPacket)
{
    __sub_002A3860(this, nullptr, iPacket);
}

void CPet::OnNameChanged(CInPacket& iPacket)
{
    __sub_002A11F0(this, nullptr, iPacket);
}

void CPet::OnActionCommand(CInPacket& iPacket)
{
    __sub_002A3930(this, nullptr, iPacket);
}

void CPet::OnAvatarModified()
{
    //__sub_000FFD20(this, nullptr);
    if (m_nOneTimeAction > -1)
        m_nOneTimeAction = -1;

    ClearActionLayer();
    PrepareActionLayer();
}

void CPet::OnValidateStat()
{
    __sub_000FFD20(this, nullptr);
}

void CPet::OnLoadExceptionList(CInPacket& iPacket)
{
    __sub_002A1510(this, nullptr, iPacket);
}

long CPet::GetPetNameTagRing()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CPet::DoAction(long nType, long nAction, Ztl_bstr_t sChat, int32_t bSend, int32_t bChatBalloon,
                    int32_t bIgnoreOnPlayingOneTimeAction)
{
    __sub_002A2340(this, nullptr, nType, nAction, CreateNakedParam(sChat), bSend, bChatBalloon,
                   bIgnoreOnPlayingOneTimeAction);
}

long CPet::DoActionByUserAction(long nUserAction)
{
    return __sub_002A2710(this, nullptr, nUserAction);
}

int32_t CPet::IsInterActPetByUserAction()
{
    return __sub_0029FEB0(this, nullptr);
}

void CPet::HangOnBack(int32_t bHangOnBack, int32_t bForce)
{
    __sub_002A29B0(this, nullptr, bHangOnBack, bForce);
}

CPet::ADDITIONALLAYER* CPet::GetAdditionalLayer(long nType)
{
    return __sub_0029F9C0(this, nullptr, nType);
}

CPet::ADDITIONALLAYER* CPet::RemoveAdditionalLayer(long nType)
{
    return __sub_0029FF10(this, nullptr, nType);
}

void CPet::UpdateAdditionalLayer()
{
    __sub_000FFD20(this, nullptr);
}

int32_t CPet::LoadLayer(Ztl_bstr_t bsUOL, int32_t bLeft, PETLAYER& l, long* pnRepeatStartIndex)
{
    return __sub_002A2E50(this, nullptr, CreateNakedParam(bsUOL), bLeft, l, pnRepeatStartIndex);
}

void CPet::ClearActionLayer()
{
    __sub_000FFD20(this, nullptr);
}

void CPet::PrepareActionLayer()
{
    __sub_000FFD20(this, nullptr);
}

void CPet::SetLayerZ()
{
    __sub_000FFD20(this, nullptr);
}

long CPet::MoveAction2RawAction(long nMA, long* pnDir)
{
    return __sub_002A0FF0(this, nullptr, nMA, pnDir);
}

int32_t CPet::CanPickupMeso()
{
    return __sub_002A0220(this, nullptr);
}

int32_t CPet::CanPickupItem()
{
    return __sub_002A0220(this, nullptr);
}

int32_t CPet::CanPickupOthers()
{
    return __sub_002A0220(this, nullptr);
}

int32_t CPet::IsLongRange()
{
    return __sub_002A0220(this, nullptr);
}

int32_t CPet::SweepForDrop()
{
    return __sub_002A0220(this, nullptr);
}

int32_t CPet::CanConsumeHP()
{
    return __sub_002A0220(this, nullptr);
}

int32_t CPet::CanConsumeMP()
{
    return __sub_002A0220(this, nullptr);
}

int32_t CPet::CanIgnoreItems()
{
    return __sub_002A0220(this, nullptr);
}

int32_t CPet::HaveNameTagRing()
{
    return __sub_002A0220(this, nullptr);
}

int32_t CPet::HaveChatBalloonRing()
{
    return __sub_002A0220(this, nullptr);
}

int32_t CPet::IsInPickupForbiddenMap()
{
    return __sub_002A0220(this, nullptr);
}

void CPet::UpdatePetAbility()
{
    __sub_000FFD20(this, nullptr);
}

int32_t CPet::IsItemSoltChangeEnded(long nItemID)
{
    return __sub_0029FCA0(this, nullptr, nItemID);
}

void CPet::BeginItemSoltChange()
{
    __sub_000FFD20(this, nullptr);
}

void CPet::EndItemSoltChange()
{
    __sub_000FFD20(this, nullptr);
}

_ZTL_SEC_GETSETI(int32_t, CPet, m_bPickupMeso)
_ZTL_SEC_GETSETI(int32_t, CPet, m_bPickupItem)
_ZTL_SEC_GETSETI(int32_t, CPet, m_bPickupOthers)
_ZTL_SEC_GETSETI(int32_t, CPet, m_bLongRange)
_ZTL_SEC_GETSETI(int32_t, CPet, m_bSweepForDrop)
_ZTL_SEC_GETSETI(int32_t, CPet, m_bConsumeHP)
_ZTL_SEC_GETSETI(int32_t, CPet, m_bConsumeMP)
_ZTL_SEC_GETSETI(int32_t, CPet, m_bIgnoreItems)
_ZTL_SEC_GETSETI(int32_t, CPet, m_bNameTag)
_ZTL_SEC_GETSETI(int32_t, CPet, m_bChatBalloon)
_ZTL_SEC_GETSETI(unsigned long, CPet, m_dwPosCRC)

int32_t __cdecl CPet::IsRestAction(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CPet::AutoSpeakingByEvent(long nEvent)
{
    __sub_002A18A0(this, nullptr, nEvent);
}

void CPet::AutoSpeakingByRandom()
{
    __sub_000FFD20(this, nullptr);
}

void CPet::SetRestAction()
{
    __sub_000FFD20(this, nullptr);
}

void CPet::SetAngryAction()
{
    __sub_000FFD20(this, nullptr);
}

/*
const CRTTI *CPet::GetRTTI()
{
	return __sub_002A0410(this, nullptr);
}
int32_t CPet::IsKindOf(const CRTTI *pRTTI)
{
	return __sub_002A0420(this, nullptr, pRTTI);
}
const CRTTI *__cdecl CPet::GetClassRTTI()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}*/
CPet::ADDITIONALLAYER::~ADDITIONALLAYER()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CPet::ADDITIONALLAYER::_dtor_0()
{
    return __sub_0029FED0(this, nullptr);
}

CPet::ADDITIONALLAYER::ADDITIONALLAYER(const CPet::ADDITIONALLAYER& arg0)
{
    _ctor_1(arg0);
}

void CPet::ADDITIONALLAYER::_ctor_1(const CPet::ADDITIONALLAYER& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CPet::ADDITIONALLAYER::ADDITIONALLAYER()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CPet::ADDITIONALLAYER::_ctor_0()
{
    return __sub_004E16C0(this, nullptr);
}

void CPet::ADDITIONALLAYER::Reset()
{
    __sub_0029FED0(this, nullptr);
}

CPet::ADDITIONALLAYER& CPet::ADDITIONALLAYER::operator=(const CPet::ADDITIONALLAYER& arg0)
{
    return _op_assign_4(this, arg0);
}

CPet::ADDITIONALLAYER& CPet::ADDITIONALLAYER::_op_assign_4(CPet::ADDITIONALLAYER* pThis,
                                                           const CPet::ADDITIONALLAYER& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
