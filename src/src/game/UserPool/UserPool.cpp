// UserPool.cpp
#include "UserPool.hpp"

#include <Field/Field.hpp>

static ZRef<CUser> FAKE_ZRef_CUser{};
static ZRef<CSummoned> FAKE_ZRef_CSummoned{};
static ZRef<USERREMOTE_ENTRY> FAKE_ZRef_USERREMOTE_ENTRY{};
static ZList<ZRef<CUserRemote>> FAKE_ZList_ZRef_CUserRemote{};

#include "UserPool_regen.ipp"

USERREMOTE_ENTRY::~USERREMOTE_ENTRY()
{
}

void USERREMOTE_ENTRY::_dtor_0()
{
    //return __sub_0054B320(this, nullptr);
    this->~USERREMOTE_ENTRY();
}

USERREMOTE_ENTRY::USERREMOTE_ENTRY(const USERREMOTE_ENTRY& arg0)
{
    _ctor_1(arg0);
}

void USERREMOTE_ENTRY::_ctor_1(const USERREMOTE_ENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

USERREMOTE_ENTRY::USERREMOTE_ENTRY()
{
}

void USERREMOTE_ENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

USERREMOTE_ENTRY& USERREMOTE_ENTRY::operator=(const USERREMOTE_ENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

USERREMOTE_ENTRY& USERREMOTE_ENTRY::_op_assign_3(USERREMOTE_ENTRY* pThis, const USERREMOTE_ENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUserPool::~CUserPool()
{
    ms_pInstance = nullptr;
}

void CUserPool::_dtor_0()
{
    return __sub_0054B130(this, nullptr);
}

CUserPool::CUserPool(const CUserPool& arg0)
{
    _ctor_1(arg0);
}

void CUserPool::_ctor_1(const CUserPool& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUserPool::CUserPool()
{
    ms_pInstance = this;
    m_tLoadEnd = timeGetTime() + 20000;
}

void CUserPool::_ctor_0()
{
    //return __sub_0054AFE0(this, nullptr);
    new(this) CUserPool();
}

CUserLocal* CUserPool::GetLocalUser()
{
    return m_pUserLocal.op_arrow();
}

void CUserPool::CreateLocalUser(ZRef<CharacterData> pDataUser)
{
    //__sub_0054C220(this, nullptr, CreateNakedParam(pDataUser));

    auto ctx = CWvsContext::GetInstance();

    ctx->SetCharacterData(pDataUser);

    m_pUserLocal = new CUserLocal(pDataUser->characterStat.dwCharacterID);
    m_pUserLocal->Init();
    if (auto dmg = CDamageMeter::GetInstance())
    {
        dmg->LoadDamageInfo();
    }
}

CUserRemote* CUserPool::GetRemoteUser(unsigned long dwCharacterID)
{
    //return __sub_0054B250(this, nullptr, dwCharacterID);
    ZRef<USERREMOTE_ENTRY> remoteUser{};
    m_mUserRemote.GetAt(dwCharacterID, &remoteUser);
    return remoteUser ? remoteUser->pUserRemote.op_ptr() : nullptr;
}

ZList<ZRef<USERREMOTE_ENTRY>>& CUserPool::GetRemoteUserList()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUserPool::GetRemoteUserCount()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUserRemote* CUserPool::FindRemoteUser(const tagPOINT& pt)
{
    return __sub_0054B550(this, nullptr, pt);
}

CUserRemote* CUserPool::FindRemoteUserByName(const char* sName)
{
    return __sub_0054B650(this, nullptr, sName);
}

CUserRemote* CUserPool::FindBalloon(const tagPOINT& pt)
{
    return __sub_0054B730(this, nullptr, pt);
}

CUser* CUserPool::FindPet(const tagPOINT& pt)
{
    return __sub_0054B840(this, nullptr, pt);
}

long CUserPool::FindHitUserInRect(const tagRECT& arg0, CUserRemote** arg1, long arg2)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUserPool::FindHitUserInManyRects(const ZArray<tagRECT>& arg0, CUserRemote** arg1, long arg2)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserPool::DoHealNearHealingRobot()
{
    __sub_0054BB20(this, nullptr);
}

long CUserPool::FindHitUserInRectWithReason(const tagRECT& rc, CUserRemote** apUser, long nMaxCount, long nReason)
{
    return __sub_0054B9C0(this, nullptr, rc, apUser, nMaxCount, nReason);
}

CUser* CUserPool::GetUser(unsigned long dwCharacterID)
{
    //return __sub_0054C350(this, nullptr, dwCharacterID);
    auto local = CUserLocal::GetInstance();
    if (local && local->GetCharacterId())
        return local;

    return GetRemoteUser(dwCharacterID);
}

void CUserPool::RemoveAllUser()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUserPool::Update()
{
    __sub_0054C370(this, nullptr);
}

void CUserPool::OnPacket(long nType, CInPacket& iPacket)
{
    //__sub_0054DDF0(this, nullptr, nType, iPacket);
    if (nType == 179)
    {
        CUserPool::OnUserEnterField(iPacket);
    }
    else if (nType == 180)
    {
        CUserPool::OnUserLeaveField(iPacket);
    }
    else if ((nType - 181) > 0x1C)
    {
        if ((nType - 210) > 0x14)
        {
            if ((nType - 231) <= 0x2D)
                CUserPool::OnUserLocalPacket(nType, iPacket);
        }
        else
        {
            CUserPool::OnUserRemotePacket(nType, iPacket);
        }
    }
    else
    {
        CUserPool::OnUserCommonPacket(nType, iPacket);
    }
}

void CUserPool::OnCoupleRecordAdd(const _LARGE_INTEGER& liSN, CUser* pUser, long nItemID)
{
    __sub_0054D600(this, nullptr, liSN, pUser, nItemID);
}

void CUserPool::OnCoupleRecordRemove(const _LARGE_INTEGER& liSN)
{
    __sub_0054CF70(this, nullptr, liSN);
}

void CUserPool::OnFriendRecordAdd(const _LARGE_INTEGER& liSN, CUser* pUser, long nItemID)
{
    __sub_0054D700(this, nullptr, liSN, pUser, nItemID);
}

void CUserPool::OnFriendRecordRemove(const _LARGE_INTEGER& liSN)
{
    __sub_0054D020(this, nullptr, liSN);
}

void CUserPool::OnMarriageRecordAdd(unsigned long dwCharacterID, CUser* pUser, long nRingID)
{
    __sub_0054D800(this, nullptr, dwCharacterID, pUser, nRingID);
}

void CUserPool::OnMarriageRecordRemove(unsigned long dwCharacterId)
{
    __sub_0054D0D0(this, nullptr, dwCharacterId);
}

void CUserPool::OnNewYearCardRecordAdd(CUser* pUser, unsigned long dwSN)
{
    __sub_0054DE60(this, nullptr, pUser, dwSN);
}

void CUserPool::OnNewYearCardRecordRemove(unsigned long dwSN)
{
    __sub_0054DCE0(this, nullptr, dwSN);
}

void CUserPool::OnNewYearCardRecordRemoveAll(unsigned long dwCharacterID)
{
    //TODO(game) __sub_0054D160(this, nullptr, dwCharacterID);
}

void CUserPool::OnCoupleChairRecordAdd(unsigned long dwCharacterId, long nItemID)
{
    __sub_0054D8B0(this, nullptr, dwCharacterId, nItemID);
}

void CUserPool::OnCoupleChairRecordRemove(unsigned long dwCharacterId)
{
    __sub_0054D220(this, nullptr, dwCharacterId);
}

void CUserPool::OnUserEnterField(CInPacket& iPacket)
{
    //__sub_0054DB40(this, nullptr, iPacket);
    auto id = iPacket.Decode4();
    auto ctx = CWvsContext::GetInstance();

    ZRef<USERREMOTE_ENTRY> userRemote;
    if (ctx->GetCharacterId() == id || ctx->GetStandAloneMode() || m_mUserRemote.GetAt(id, &userRemote))
    {
        return;
    }

    userRemote = new USERREMOTE_ENTRY();
    userRemote->pUserRemote = new CUserRemote(id);
    auto lEntry = m_lUserRemote.AddTail(userRemote);
    userRemote->posList = reinterpret_cast<__POSITION*>(&lEntry);

    auto delayedEntry = m_lDelayedLoad.AddTail();
    userRemote->posDelayedLoad = reinterpret_cast<__POSITION*>(&delayedEntry);
    m_mUserRemote.Insert(id, userRemote);

    auto isPartyMemberId = ctx->IsPartyMemberID(id);
    userRemote->pUserRemote->Init(iPacket, isPartyMemberId, true);

    auto field = get_field();
    field->DecodeFieldSpecificData(userRemote->pUserRemote.op_arrow(), iPacket);
    userRemote->pUserRemote->RedrawGuildNameTag();

    if (auto partyHp = CUIPartyHP::GetInstance())
    {
        partyHp->Destroy();
        partyHp->Create();
    }
}

void CUserPool::OnUserLeaveField(CInPacket& iPacket)
{
    __sub_0054D4C0(this, nullptr, iPacket);
}

void CUserPool::OnUserCommonPacket(long nType, CInPacket& iPacket)
{
    __sub_0054CDB0(this, nullptr, nType, iPacket);
}

void CUserPool::OnUserRemotePacket(long nType, CInPacket& iPacket)
{
    //__sub_0054B390(this, nullptr, nType, iPacket);
    auto id = iPacket.Decode4();
    auto remote = GetRemoteUser(id);
    if (!remote || CWvsContext::GetInstance()->GetStandAloneMode())
        return;

    if (remote->IsDelayedLoad())
    {
        switch (nType)
        {
        case 211:
        case 212:
        case 213:
        case 214:
            remote->OnAttack(nType, iPacket);
            break;
        case 215:
            remote->OnSkillPrepare(iPacket);
            break;
        case 216:
            remote->OnMovingShootAttackPrepare(iPacket);
            break;
        case 217:
            remote->OnSkillCancel(iPacket);
            break;
        case 218:
            remote->OnHit(iPacket);
            break;
        case 219:
            remote->OnEmotion(iPacket);
            break;
        case 220:
            remote->OnSetActiveEffectItem(iPacket);
            break;
        case 221:
            remote->OnShowUpgradeTombEffect(iPacket);
            break;
        case 224:
            remote->OnEffect(iPacket);
            break;
        case 230:
            remote->OnThrowGrenade(iPacket);
            break;
        default:
            break;
        }
    }
    switch (nType)
    {
    case 210:
        remote->OnMove(iPacket);
        break;
    case 222:
        remote->OnSetActivePortableChair(iPacket);
        break;
    case 223:
        remote->OnAvatarModified(iPacket);
        break;
    case 225:
        remote->OnSetTemporaryStat(iPacket);
        break;
    case 226:
        remote->OnResetTemporaryStat(iPacket);
        break;
    case 227:
        remote->OnReceiveHP(iPacket);
        break;
    case 228:
        remote->OnGuildNameChanged(iPacket);
        break;
    case 229:
        remote->OnGuildMarkChanged(iPacket);
        break;
    default:
        return;
    }
}

void CUserPool::OnUserLocalPacket(long nType, CInPacket& iPacket)
{
    //__sub_00548AA0(this, nullptr, nType, iPacket);
    if (auto local = GetLocalUser())
    {
        local->OnPacket(nType, iPacket);
    }
}

CUserPool& CUserPool::operator=(const CUserPool& arg0)
{
    return _op_assign_36(this, arg0);
}

CUserPool& CUserPool::_op_assign_36(CUserPool* pThis, const CUserPool& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
