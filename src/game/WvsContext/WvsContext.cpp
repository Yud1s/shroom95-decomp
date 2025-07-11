// WvsContext.cpp
#include "WvsContext.hpp"

#include <skills_ids.h>
#include <BattleRecordMan/BattleRecordMan.hpp>

#include "UIStatusBar/UIStatusBar.hpp"
#include "UtilDlg/UtilDlg.hpp"
#include "UIMenuDlgs/UIMenuDlgs.hpp"
#include "UIDialogEtc/UIDialogEtc.hpp"
#include "UserPool/UserPool.hpp"
#include "UIMapTransfer/UIMapTransfer.hpp"
#include "WvsContext2/WvsContext2.hpp"
#include "ztl/ZTimeUtil.h"
#include "Stage/Stage.hpp"
#include "DBBasic/DBBasic.hpp"
#include "spdlog/spdlog.h"


static ZRef<CStage> FAKE_ZREF_STAGE{};

CWvsContext g_context;

static ZRefCounted_AllocHelper<CS_COMMODITY> FAKE_AllocHelper1;
static ZSortHelper<ZRef<CS_COMMODITY>, PriceMoreFunc> FAKE_SortHelper1;

static InsertionSortHelper<ZXString<char>, Friend_GroupAscComp_S> FAKE_InsertionSortHelper1;

static ZRef<GW_ItemSlotPet> FAKE_ZRef1{};
static ZRef<CUIGameOpt> FAKE_ZRef2{};
static ZRef<CUISysOpt> FAKE_ZRef3{};
static ZRef<CUIJoyPad> FAKE_ZRef4{};
static ZRef<CUIGameMenu> FAKE_ZRef5{};
static ZRef<CTemporaryStatView::TEMPORARY_STAT> FAKE_ZRef6{};
static ZRef<ZArray<ZXString<char>>> FAKE_ZRef7{};
static ZRef<PrivilegeItem> FAKE_ZRef8{};
static ZRef<CUIShortCutMenu> FAKE_ZRef9{};
static ZRef<CUIClaimPreNotice> FAKE_ZRef10{};
static ZRef<USERREMOTE_ENTRY> FAKE_ZRef11{};
static ZRef<CUIClaim> FAKE_ZRef12{};
static ZRef<CTownPortalPool::TOWNPORTAL> FAKE_ZRef13{};
static ZRef<ZList<_FILETIME>> FAKE_ZRef14{};
static ZRef<CUIChannelShift> FAKE_ZRef15{};
static ZRef<CUIMapTransfer> FAKE_ZRef16{};
static ZRef<CSpeakerWorldDlgEx> FAKE_ZRef17{};
static ZRef<CSpeakerWorldDlg> FAKE_ZRef18{};
static ZRef<CUIAvatarMegaphone> FAKE_ZRef19{};
static ZRef<CUICancelCharacterCouponRequests> FAKE_ZRef20{};
static ZRef<CUISendMemo> FAKE_ZRef21{};
static ZRef<CUIHope> FAKE_ZRef22{};
static ZRef<CUIStatChange> FAKE_ZRef23{};
static ZRef<CUIStatChangeConfirm> FAKE_ZRef24{};
static ZRef<CUISkillDecEX> FAKE_ZRef25{};
static ZRef<CUISkillDec> FAKE_ZRef26{};
static ZRef<CUISkillInc> FAKE_ZRef27{};
static ZRef<CUISkillChangeConfirm> FAKE_ZRef28{};
static ZRef<CUIMapleTV> FAKE_ZRef29{};

static ZMap<long, ZXString<char>, long> FAKE_ZMap1{};
static ZMap<unsigned short, ZXString<char>, unsigned short> FAKE_ZMap2{};

static ZList<_FILETIME> FAKE_ZList1{};

static ZArray<StatPair> FAKE_ZArray1{};
static ZArray<ZRef<CUIStatusBar::CChatLog>> FAKE_ZArray2{};

static Additional::TCond<Additional::SKILL> FAKE_TCond1{};
static Additional::TCond<Additional::MOBCATEGORY> FAKE_TCond2{};
static Additional::TCond<Additional::ELEMBOOST> FAKE_TCond3{};
static Additional::TCond<Additional::BOSS> FAKE_TCond4{};
static Additional::TCond<Additional::CRITICAL> FAKE_TCond5{};


#include "WvsContext_regen.ipp"
#include "opcodes.h"

ZMap<unsigned long, long, unsigned long> CWvsContext::ms_mAreaCode;

FamilyInfo::~FamilyInfo()
{
    UNIMPLEMENTED; // _dtor_0();
}

void FamilyInfo::_dtor_0()
{
    return __sub_005D3F90(this, nullptr);
}

FamilyInfo::FamilyInfo(const FamilyInfo& arg0)
{
    _ctor_1(arg0);
}

void FamilyInfo::_ctor_1(const FamilyInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

FamilyInfo::FamilyInfo()
{
    wChildLimit = 2;
    //TODO HASH table
    //UNIMPLEMENTED;
}

void FamilyInfo::_ctor_0()
{
    new(this) FamilyInfo();
    //return __sub_005D8360(this, nullptr);
}

void FamilyInfo::Decode(CInPacket& iPacket)
{
    __sub_00609B10(this, nullptr, iPacket);
}

FamilyInfo& FamilyInfo::operator=(const FamilyInfo& arg0)
{
    return _op_assign_4(this, arg0);
}

FamilyInfo& FamilyInfo::_op_assign_4(FamilyInfo* pThis, const FamilyInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

GUILDDATA::~GUILDDATA()
{
}

void GUILDDATA::_dtor_0()
{
    return __sub_005E0150(this, nullptr);
}

GUILDDATA::GUILDDATA(const GUILDDATA& arg0)
{
    _ctor_1(arg0);
}

void GUILDDATA::_ctor_1(const GUILDDATA& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

GUILDDATA::GUILDDATA()
{
    Clear();
}

void GUILDDATA::_ctor_0()
{
    new(this) GUILDDATA();
    //return __sub_005E5750(this, nullptr);
}

long GUILDDATA::GetGuildSkillLevel(long arg0)
{
    if (!is_guild_skill(arg0))
    {
        return 0;
    }

    auto se = mSkillRecord.GetAt(arg0, nullptr);
    return se ? se->nLevel : 0;
}

ZXString<char> GUILDDATA::GetGuildSkillBuyer(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long GUILDDATA::GetCount()
{
    return __sub_000F3EC0(this, nullptr);
}

void GUILDDATA::Encode(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GUILDDATA::Decode(CInPacket& iPacket)
{
    __sub_000FB760(this, nullptr, iPacket);
}

void GUILDDATA::RemoveKey(unsigned long dwCharacterID)
{
    __sub_0060B730(this, nullptr, dwCharacterID);
}

long GUILDDATA::FindIndex(unsigned long dwCharacterID)
{
    return (long)adwCharacterID.FindIndex(dwCharacterID);
    //return __sub_0012B330(this, nullptr, dwCharacterID);
}

void GUILDDATA::Clear()
{
    this->nGuildID = 0;
    this->nPoint = 0;
    this->nLevel = 1;
    this->sGuildName.Clear();

    asGradeName.RemoveAll();
    adwCharacterID.RemoveAll();
    aMemberData.RemoveAll();

    this->nMaxMemberNum = 0;
    this->nMark = 0;
    this->nMarkBg = 0;
    this->nMarkColor = 0;
    this->nMarkBgColor = 0;
    this->sNotice.Clear();
    this->nAllianceID = 0;
    mSkillRecord.RemoveAll();
    aSkillRecordOnlyID.RemoveAll();
}

long GUILDDATA::CalcGuildLevel(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

GUILDDATA& GUILDDATA::operator=(const GUILDDATA& __that)
{
    return _op_assign_12(this, __that);
}

GUILDDATA& GUILDDATA::_op_assign_12(GUILDDATA* pThis, const GUILDDATA& __that)
{
    return __sub_0060D270(pThis, nullptr, __that);
}

GUILDDATA::SKILLENTRY::~SKILLENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void GUILDDATA::SKILLENTRY::_dtor_0()
{
    return __sub_000F6D90(this, nullptr);
}

GUILDDATA::SKILLENTRY::SKILLENTRY(const GUILDDATA::SKILLENTRY& arg0)
{
    _ctor_1(arg0);
}

void GUILDDATA::SKILLENTRY::_ctor_1(const GUILDDATA::SKILLENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

GUILDDATA::SKILLENTRY::SKILLENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void GUILDDATA::SKILLENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GUILDDATA::SKILLENTRY::Encode(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void GUILDDATA::SKILLENTRY::Decode(CInPacket& iPacket)
{
    __sub_000F8A10(this, nullptr, iPacket);
}

GUILDDATA::SKILLENTRY& GUILDDATA::SKILLENTRY::operator=(const GUILDDATA::SKILLENTRY& arg0)
{
    return _op_assign_5(this, arg0);
}

GUILDDATA::SKILLENTRY&
GUILDDATA::SKILLENTRY::_op_assign_5(GUILDDATA::SKILLENTRY* pThis, const GUILDDATA::SKILLENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

WORLDMAPQUESTDEMANDITEM::~WORLDMAPQUESTDEMANDITEM()
{
    UNIMPLEMENTED; // _dtor_0();
}

void WORLDMAPQUESTDEMANDITEM::_dtor_0()
{
    return __sub_005D37A0(this, nullptr);
}

WORLDMAPQUESTDEMANDITEM::WORLDMAPQUESTDEMANDITEM(const WORLDMAPQUESTDEMANDITEM& arg0)
{
    _ctor_1(arg0);
}

void WORLDMAPQUESTDEMANDITEM::_ctor_1(const WORLDMAPQUESTDEMANDITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

WORLDMAPQUESTDEMANDITEM::WORLDMAPQUESTDEMANDITEM()
{
    UNIMPLEMENTED; //_ctor_0();
}

void WORLDMAPQUESTDEMANDITEM::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

WORLDMAPQUESTDEMANDITEM& WORLDMAPQUESTDEMANDITEM::operator=(const WORLDMAPQUESTDEMANDITEM& arg0)
{
    return _op_assign_3(this, arg0);
}

WORLDMAPQUESTDEMANDITEM&
WORLDMAPQUESTDEMANDITEM::_op_assign_3(WORLDMAPQUESTDEMANDITEM* pThis, const WORLDMAPQUESTDEMANDITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTemporaryStatView::~CTemporaryStatView()
{
}

void CTemporaryStatView::_dtor_0()
{
    this->~CTemporaryStatView();
}

CTemporaryStatView::CTemporaryStatView(const CTemporaryStatView& arg0)
{
    _ctor_1(arg0);
}

void CTemporaryStatView::_ctor_1(const CTemporaryStatView& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTemporaryStatView::CTemporaryStatView()
{
    //TODO UNIMPLEMENTED; //_ctor_0();
}

void CTemporaryStatView::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CTemporaryStatView::Clear()
{
    m_lTemporaryStat.RemoveAll();
}

void
CTemporaryStatView::SetTemporary(long nType, long nID, long tDuration, MY_UINT128 uFlagTemp, ZXString<char> sToolTip,
                                 long nSubID, long nHideTime)
{
    //__sub_0035FA50(this, nullptr, nType, nID, tDuration, CreateNakedParam(uFlagTemp), CreateNakedParam(sToolTip),nSubID, nHideTime);
    if (is_guided_bullet_skill(nID))
        return;

    for (auto& cur : m_lTemporaryStat)
    {
        //TODO(game) Delete
    }

    ZRef<TEMPORARY_STAT> pStat(new TEMPORARY_STAT(nType, nID, tDuration, uFlagTemp, sToolTip, nSubID, nHideTime), true);
    if (nType == 3)
    {
        m_lTemporaryStat.AddTail(pStat);
    }
    else
    {
        m_lTemporaryStat.AddHead(pStat);
    }

    AdjustPosition();
}

void CTemporaryStatView::ResetTemporary(long nType, long nID, MY_UINT128 uFlagTemp)
{
    //__sub_0035D100(this, nullptr, nType, nID, CreateNakedParam(uFlagTemp));
    const MY_UINT128 uFlagTmp = ~uFlagTemp;
    m_lTemporaryStat.Retain([=](auto& stat)
    {
        stat->uFlagTemp &= uFlagTmp;
        if (stat->nType == 3)
            return false;

        if (stat->nType == 4)
        {
            return stat->nID != nID;
        }

        return !static_cast<bool>(uFlagTmp) || stat->uFlagTemp.compareTo(0);
    });

    AdjustPosition();
}

void CTemporaryStatView::ResetTemporary(long nType, long nID)
{
    //__sub_0035D030(this, nullptr, nType, nID);
    m_lTemporaryStat.Retain([=](auto& stat)
    {
        return stat->nID != nID;
    });
}

void CTemporaryStatView::Update()
{
    for (auto pos : m_lTemporaryStat)
    {
        if (pos->nID != CORSAIR_BATTLESHIP && pos->nID != MECH1_MECH_PROTOTYPE)
        {
            pos->SetLeft(pos->GetLeft() - 30);
        }

        pos->UpdateShadowIndex();
    }
}

void CTemporaryStatView::UpdatePassively(long nID, long nLeft, long nMax)
{
    __sub_0035DD40(this, nullptr, nID, nLeft, nMax);
}

void CTemporaryStatView::Show()
{
    auto pos = m_lTemporaryStat.GetHeadPosition();
    while (pos)
    {
        auto p = *m_lTemporaryStat.GetNext(pos);

        auto alpha = p->pLayer->Getalpha();
        Z_CHECK_HR(alpha->RelMove(210, 0, vtMissing, vtMissing));
    }
}

void CTemporaryStatView::Hide()
{
    for (auto& stat : m_lTemporaryStat)
    {
        auto alpha = stat->pLayer->Getalpha();
        alpha->RelMove(0, 0, vtMissing, vtMissing);
    }
}

int32_t CTemporaryStatView::ShowToolTip(CUIToolTip& uiToolTip, const tagPOINT& ptCursor, long rx, long ry)
{
    return __sub_0035D310(this, nullptr, uiToolTip, ptCursor, rx, ry);
}

void CTemporaryStatView::FindIcon(const tagPOINT& ptCursor, long& nType, long& nID)
{
    __sub_0035CEF0(this, nullptr, ptCursor, nType, nID);
}

void CTemporaryStatView::AdjustPosition()
{
    const auto LN = 32;
    auto i = (int)m_lTemporaryStat.GetCount() * -LN;
    for (auto& stat : m_lTemporaryStat)
    {
        auto h = stat->pLayer->Getheight();
        auto w = stat->pLayer->Getwidth();
        stat->pLayer->RelMove((LN - w) / 2 + i - 3,
                              (LN - h) / 2 + 23, vtMissing, vtMissing);

        h = stat->pLayerShadow->Getheight();
        w = stat->pLayerShadow->Getwidth();
        stat->pLayerShadow->RelMove((LN - w) / 2 + i - 3,
                                    (LN - h) / 2 + 23, vtMissing, vtMissing);

        i += 32;
    }
}

CTemporaryStatView& CTemporaryStatView::operator=(const CTemporaryStatView& arg0)
{
    return _op_assign_14(this, arg0);
}

CTemporaryStatView& CTemporaryStatView::_op_assign_14(CTemporaryStatView* pThis, const CTemporaryStatView& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTemporaryStatView::TEMPORARY_STAT::~TEMPORARY_STAT()
{
}

void CTemporaryStatView::TEMPORARY_STAT::_dtor_0()
{
    //return __sub_0035F9B0(this, nullptr);
    this->~TEMPORARY_STAT();
}

CTemporaryStatView::TEMPORARY_STAT::TEMPORARY_STAT(const CTemporaryStatView::TEMPORARY_STAT& arg0)
{
    _ctor_1(arg0);
}

void CTemporaryStatView::TEMPORARY_STAT::_ctor_1(const CTemporaryStatView::TEMPORARY_STAT& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

_com_ptr_t<_com_IIID<IWzCanvas, &__uuidof(IWzCanvas)>> createTempIcon1(int nID)
{
    auto& sp = StringPool::GetInstance();
    auto ctx = CWvsContext::GetInstance();
    auto cd = ctx->GetCharacterData();
    auto skillInfo = CSkillInfo::GetInstance();

    auto icon = G_PCOM.CreateCanvas();
    Z_CHECK_HR(icon->raw_Create(32, 32, vtMissing, vtMissing));
    auto canvas = get_rm()->GetObjectT<IWzCanvas>(sp.GetBSTR(0xB8Du), vtMissing, vtMissing);
    Z_CHECK_HR(icon->Copy(0, 0, canvas, Ztl_variant_t(255)));

    auto info = CItemInfo::GetInstance()->GetItemInfo(nID);
    if (info)
    {
        _com_ptr_t<_com_IIID<IWzCanvas, &__uuidof(IWzCanvas)>> canvas;
        if (is_monsterbook_card_item(nID))
        {
            //TODO(statgame) with get_unknown
            canvas = info->GetItemT<IWzCanvas>(sp.GetBSTR(0x95B));
        }
        else
        {
            //TODO(statgame) with get_unknown
            canvas = info->GetItemT<IWzCanvas>(sp.GetBSTR(0x661));
        }


        if (canvas)
        {
            auto h = canvas->Getheight();
            auto w = canvas->Getwidth();
            auto x = (int)(32 - h) / 2 < 0 ? 0 : (int)(32 - h) / 2;
            auto y = (int)(32 - w) / 2 < 0 ? 0 : (int)(32 - w) / 2;
            icon->Copy(x, y, canvas, Ztl_variant_t(255));
        }

        auto job = cd->characterStat._ZtlSecureGet_nJob();
        auto sub = job / 1000;
        auto id = sub == 1 ? 14110003 : sub == 3 ? 30000002 : 4110000;
        const SKILLENTRY* entry{};
        auto slvl = skillInfo->GetSkillLevel(*cd.op_arrow(), id, &entry);

        //TODO(game) rest
    }
    return icon;
}

_com_ptr_t<_com_IIID<IWzCanvas, &__uuidof(IWzCanvas)>> createTempIcon2(int nID, long nSubID)
{
    auto& sp = StringPool::GetInstance();
    auto ctx = CWvsContext::GetInstance();
    auto cd = ctx->GetCharacterData();
    auto skillInfo = CSkillInfo::GetInstance();

    nSubID = !nSubID ? nID : nSubID;
    long buffTy = 0;
    if (nSubID == 33101006)
    {
        buffTy = ctx->GetSwallowBuffType();
    }
    else if (nSubID == 0x4DFCDF || nSubID == 0x4F837F || nSubID == 0x217C065)
    {
        buffTy = ctx->GetDiceBuffType();
    }

    auto skill = skillInfo->GetSkill(nSubID);
    return skill->GetIconCanvas(buffTy);
}

_com_ptr_t<_com_IIID<IWzCanvas, &__uuidof(IWzCanvas)>> createTempIcon3(int spKey, long nID)
{
    auto& sp = StringPool::GetInstance();
    auto icon = G_PCOM.CreateCanvas();
    Z_CHECK_HR(icon->raw_Create(32, 32, vtMissing, vtMissing));

    auto wStr = sp.GetStringW(spKey);
    auto wIconUOL = ZXString16::FromFmt(wStr.c_str(), nID);
    auto iconCanvas = get_rm()->GetObjectT<IWzCanvas>(Ztl_bstr_t((const wchar_t*)wIconUOL.c_str()));
    if (iconCanvas)
    {
        auto h = iconCanvas->Getheight();
        auto w = iconCanvas->Getwidth();
        auto x = (int)(32 - h) / 2 < 0 ? 0 : (int)(32 - h) / 2;
        auto y = (int)(32 - w) / 2 < 0 ? 0 : (int)(32 - w) / 2;
        icon->Copy(x, y, iconCanvas, Ztl_variant_t(255));
    }
    return icon;
}

CTemporaryStatView::TEMPORARY_STAT::TEMPORARY_STAT(long nType, long nID, long tDuration, MY_UINT128 uFlagTemp,
                                                   ZXString<char> sToolTip, long nSubID, long nHideTime)
{
    //_ctor_0(nType, nID, tDuration, uFlagTemp, sToolTip, nSubID, nHideTime);
    this->uFlagTemp = uFlagTemp;
    this->nID = nID;
    this->nSubID = nSubID;
    this->nType = nType;
    this->sToolTip = sToolTip;
    this->nIndexShadow = -1;
    this->tHideTime = nHideTime;

    auto tMaxDuration = tDuration;
    auto& sp = StringPool::GetInstance();
    auto skillInfo = CSkillInfo::GetInstance();
    auto ctx = CWvsContext::GetInstance();

    const auto& cd = ctx->GetCharacterData();
    _com_ptr_t<_com_IIID<IWzCanvas, &__uuidof(IWzCanvas)>> icon;
    switch (nType)
    {
    case 1:
        icon = createTempIcon1(nID);
        break;

    case 2:
        icon = createTempIcon2(nID, nSubID);
        break;
    case 3:
        icon = createTempIcon3(0xe25, nID);
        break;

    case 4:
        icon = createTempIcon3(0x11f3, nID);
        break;

    default:
        break;
    }


    pLayer = get_gr()->CreateLayer(0, 0, 0, 0, 0xC006156C, Ztl_variant_t(0), vtMissing);
    auto org = CWndMan::GetInstance()->GetOrgWindow(CWndMan::Origin_RT);

    pLayer->Putorigin(Ztl_variant_t(org));
    pLayer->Putcolor(0xD2FFFFFF);
    Z_CHECK_HR(
        pLayer->InsertCanvas(icon, Ztl_variant_t(500), Ztl_variant_t(210), Ztl_variant_t(64), vtMissing, vtMissing))


    pLayerShadow = get_gr()->CreateLayer(0, 0, 0, 0, 0xC006156C, Ztl_variant_t(0), vtMissing);
    pLayerShadow->Putorigin(Ztl_variant_t(org));
    pLayerShadow->Putcolor(0xD2FFFFFF);


    tLeftUnit = tMaxDuration / 16;
    SetLeft(tDuration);
    if (tHideTime && get_update_time() < tHideTime)
    {
        Hide();
    }
}

void CTemporaryStatView::TEMPORARY_STAT::_ctor_0(long nType, long nID, long tDuration, MY_UINT128 uFlagTemp,
                                                 ZXString<char> sToolTip, long nSubID, long nHideTime)
{
    //return __sub_0035DE20(this, nullptr, nType, nID, tDuration, CreateNakedParam(uFlagTemp), CreateNakedParam(sToolTip),
    //                     nSubID,
    //                   nHideTime);

    new(this) TEMPORARY_STAT(nType, nID, tDuration, uFlagTemp, sToolTip, nSubID, nHideTime);
}

long CTemporaryStatView::TEMPORARY_STAT::GetLeftUnit()
{
    return tLeftUnit;
}

void CTemporaryStatView::TEMPORARY_STAT::SetLeftUnit(long tNewLeft)
{
    //__sub_0035DA00(this, nullptr, tNewLeft);
    tLeftUnit = tNewLeft;
}

long CTemporaryStatView::TEMPORARY_STAT::GetLeft()
{
    return tLeft;
}

void CTemporaryStatView::TEMPORARY_STAT::SetLeft(long tNewLeft)
{
    //__sub_0035DA00(this, nullptr, tNewLeft);
    tLeft = tNewLeft;
    UpdateShadowIndex();
    auto leftUnit = 3000;
    if (nID == CORSAIR_BATTLESHIP || nID == MECH1_MECH_PROTOTYPE)
        leftUnit = this->tLeftUnit;

    if (tLeft > leftUnit && tLeft <= leftUnit)
    {
        pLayer->Animate(GA_REPEAT, vtMissing, vtMissing);
        pLayerShadow->Animate(GA_REPEAT, vtMissing, vtMissing);
    }
}

void CTemporaryStatView::TEMPORARY_STAT::UpdateShadowIndex()
{
    //__sub_0035D560(this, nullptr);
    if (tHideTime)
    {
        if (tHideTime > get_update_time())
        {
            Hide();
        }
        else
        {
            Show();
            tHideTime = 0;
        }
    }
}

void CTemporaryStatView::TEMPORARY_STAT::Show()
{
    //__sub_0035C0A0(this, nullptr);
    pLayer->Putvisible(true);
    if (pLayerShadow)
    {
        pLayerShadow->Putvisible(true);
    }
}

void CTemporaryStatView::TEMPORARY_STAT::Hide()
{
    //__sub_0035C110(this, nullptr);
    pLayer->Putvisible(false);
    if (pLayerShadow)
    {
        pLayerShadow->Putvisible(false);
    }
}

CTemporaryStatView::TEMPORARY_STAT&
CTemporaryStatView::TEMPORARY_STAT::operator=(const CTemporaryStatView::TEMPORARY_STAT& arg0)
{
    return _op_assign_10(this, arg0);
}

CTemporaryStatView::TEMPORARY_STAT&
CTemporaryStatView::TEMPORARY_STAT::_op_assign_10(CTemporaryStatView::TEMPORARY_STAT* pThis,
                                                  const CTemporaryStatView::TEMPORARY_STAT& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ALLIANCEDATA::~ALLIANCEDATA()
{
}

void ALLIANCEDATA::_dtor_0()
{
    return __sub_005E0210(this, nullptr);
}

ALLIANCEDATA::ALLIANCEDATA(const ALLIANCEDATA& arg0)
{
    _ctor_1(arg0);
}

void ALLIANCEDATA::_ctor_1(const ALLIANCEDATA& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ALLIANCEDATA::ALLIANCEDATA()
{
    //TODO(ctor) UNIMPLEMENTED; //_ctor_0();
    Clear();
}

void ALLIANCEDATA::_ctor_0()
{
    new(this) ALLIANCEDATA();
    //return __sub_005E57D0(this, nullptr);
}

long ALLIANCEDATA::GetCount()
{
    return this->adwGuildID.GetCount();
}

void ALLIANCEDATA::Encode(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void ALLIANCEDATA::Decode(CInPacket& iPacket)
{
    __sub_000F8AA0(this, nullptr, iPacket);
}

void ALLIANCEDATA::RemoveKey(unsigned long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long ALLIANCEDATA::FindIndex(unsigned long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void ALLIANCEDATA::Clear()
{
    //__sub_005DFB40(this, nullptr);
    nAllianceID = 0;
    sAllianceName.Clear();
    asGradeName.RemoveAll();
    adwGuildID.RemoveAll();
    nMaxMemberNum = 0;
    sNotice.Clear();
}

ALLIANCEDATA& ALLIANCEDATA::operator=(const ALLIANCEDATA& __that)
{
    return _op_assign_9(this, __that);
}

ALLIANCEDATA& ALLIANCEDATA::_op_assign_9(ALLIANCEDATA* pThis, const ALLIANCEDATA& __that)
{
    return __sub_0060D080(pThis, nullptr, __that);
}

CTownPortalPool::~CTownPortalPool()
{
    ms_pInstance = nullptr;
}

void CTownPortalPool::_dtor_0()
{
    return __sub_005D3950(this, nullptr);
}

CTownPortalPool::CTownPortalPool(const CTownPortalPool& arg0)
{
    _ctor_1(arg0);
}

void CTownPortalPool::_ctor_1(const CTownPortalPool& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTownPortalPool::CTownPortalPool()
{
    ms_pInstance = this;
}

void CTownPortalPool::_ctor_0()
{
    new(this) CTownPortalPool();
    //return __sub_005D38F0(this, nullptr);
}

void CTownPortalPool::Update(long tCur)
{
    //TODO(game) __sub_003626C0(this, nullptr, tCur);
}

void CTownPortalPool::OnPacket(long nType, CInPacket& iPacket)
{
    switch ((Lp)nType)
    {
    case Lp::Townportalcreated:
        OnTownPortalCreated(iPacket);
        break;
    case Lp::Townportalremoved:
        OnTownPortalRemoved(iPacket);
        break;
    default:
        return;
    }
    //__sub_003636B0(this, nullptr, nType, iPacket);
}

void CTownPortalPool::TryEnterTownPortal(tagPOINT pt)
{
    __sub_003624B0(this, nullptr, CreateNakedParam(pt));
}

void CTownPortalPool::OnTownPortalCreated(CInPacket& iPacket)
{
    __sub_00362C00(this, nullptr, iPacket);
}

void CTownPortalPool::OnTownPortalRemoved(CInPacket& iPacket)
{
    __sub_00361920(this, nullptr, iPacket);
}

void CTownPortalPool::AddTownPortal(ZRef<CTownPortalPool::TOWNPORTAL> ptp)
{
    __sub_00362B50(this, nullptr, CreateNakedParam(ptp));
}

void CTownPortalPool::RemoveTownPortal(ZRef<CTownPortalPool::TOWNPORTAL> ptp)
{
    __sub_00361880(this, nullptr, CreateNakedParam(ptp));
}

CTownPortalPool& CTownPortalPool::operator=(const CTownPortalPool& arg0)
{
    return _op_assign_10(this, arg0);
}

CTownPortalPool& CTownPortalPool::_op_assign_10(CTownPortalPool* pThis, const CTownPortalPool& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTownPortalPool::TOWNPORTAL::~TOWNPORTAL()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CTownPortalPool::TOWNPORTAL::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTownPortalPool::TOWNPORTAL::TOWNPORTAL(const CTownPortalPool::TOWNPORTAL& arg0)
{
    _ctor_1(arg0);
}

void CTownPortalPool::TOWNPORTAL::_ctor_1(const CTownPortalPool::TOWNPORTAL& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTownPortalPool::TOWNPORTAL::TOWNPORTAL()
{
    //UNIMPLEMENTED; //_ctor_0();
}

void CTownPortalPool::TOWNPORTAL::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTownPortalPool::TOWNPORTAL& CTownPortalPool::TOWNPORTAL::operator=(const CTownPortalPool::TOWNPORTAL& arg0)
{
    return _op_assign_3(this, arg0);
}

CTownPortalPool::TOWNPORTAL&
CTownPortalPool::TOWNPORTAL::_op_assign_3(CTownPortalPool::TOWNPORTAL* pThis, const CTownPortalPool::TOWNPORTAL& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

COpenGatePool::~COpenGatePool()
{
    ms_pInstance = nullptr;
}

void COpenGatePool::_dtor_0()
{
    return __sub_005D3A70(this, nullptr);
}

COpenGatePool::COpenGatePool(const COpenGatePool& arg0)
{
    _ctor_1(arg0);
}

void COpenGatePool::_ctor_1(const COpenGatePool& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

COpenGatePool::COpenGatePool()
{
    ms_pInstance = this;
}

void COpenGatePool::_ctor_0()
{
    return __sub_005D39F0(this, nullptr);
}

void COpenGatePool::Update(long pos1)
{
    //__sub_00289E00(this, nullptr, pos1);
}

void COpenGatePool::OnPacket(long nType, CInPacket& iPacket)
{
    __sub_0028C8B0(this, nullptr, nType, iPacket);
}

int32_t COpenGatePool::TryEnterOpenGate(tagPOINT pt, tagPOINT& ptTarget)
{
    return __sub_00289860(this, nullptr, CreateNakedParam(pt), ptTarget);
}

void COpenGatePool::OnOpenGateCreated(CInPacket& iPacket)
{
    __sub_0028BFD0(this, nullptr, iPacket);
}

void COpenGatePool::OnOpenGateRemoved(CInPacket& iPacket)
{
    __sub_0028B780(this, nullptr, iPacket);
}

void COpenGatePool::AddOpenGate1(ZRef<COpenGatePool::OPENGATE> ptp)
{
    __sub_0028BE70(this, nullptr, CreateNakedParam(ptp));
}

void COpenGatePool::AddOpenGate2(ZRef<COpenGatePool::OPENGATE> ptp)
{
    __sub_0028BF20(this, nullptr, CreateNakedParam(ptp));
}

void COpenGatePool::RemoveOpenGate1(ZRef<COpenGatePool::OPENGATE> ptp)
{
    __sub_00289510(this, nullptr, CreateNakedParam(ptp));
}

void COpenGatePool::RemoveOpenGate2(ZRef<COpenGatePool::OPENGATE> ptp)
{
    __sub_002895B0(this, nullptr, CreateNakedParam(ptp));
}

COpenGatePool& COpenGatePool::operator=(const COpenGatePool& arg0)
{
    return _op_assign_12(this, arg0);
}

COpenGatePool& COpenGatePool::_op_assign_12(COpenGatePool* pThis, const COpenGatePool& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

COpenGatePool::OPENGATE::~OPENGATE()
{
    UNIMPLEMENTED; // _dtor_0();
}

void COpenGatePool::OPENGATE::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

COpenGatePool::OPENGATE::OPENGATE(const COpenGatePool::OPENGATE& arg0)
{
    _ctor_1(arg0);
}

void COpenGatePool::OPENGATE::_ctor_1(const COpenGatePool::OPENGATE& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

COpenGatePool::OPENGATE::OPENGATE()
{
    UNIMPLEMENTED; //_ctor_0();
}

void COpenGatePool::OPENGATE::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

COpenGatePool::OPENGATE& COpenGatePool::OPENGATE::operator=(const COpenGatePool::OPENGATE& arg0)
{
    return _op_assign_3(this, arg0);
}

COpenGatePool::OPENGATE&
COpenGatePool::OPENGATE::_op_assign_3(COpenGatePool::OPENGATE* pThis, const COpenGatePool::OPENGATE& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUISkillDec::~CUISkillDec()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUISkillDec::_dtor_0()
{
    return __sub_005EB080(this, nullptr);
}

CUISkillDec::CUISkillDec(const CUISkillDec& arg0)
{
    _ctor_1(arg0);
}

void CUISkillDec::_ctor_1(const CUISkillDec& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUISkillDec::CUISkillDec()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CUISkillDec::_ctor_0()
{
    return __sub_005EAF90(this, nullptr);
}

void CUISkillDec::OnCreate(void* pData)
{
    __sub_00458690(this, nullptr, pData);
}

void CUISkillDec::CreateSkillDecDlg()
{
    __sub_005CC7F0(this, nullptr);
}

void CUISkillDec::OnDestroy()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUISkillDec::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    __sub_00458A60(this, nullptr, nId, param1, param2);
}

void CUISkillDec::OnKey(uint32_t wParam, int32_t lParam)
{
    __sub_005EB050(this, nullptr, wParam, lParam);
}

void CUISkillDec::OnButtonClicked(uint32_t nId)
{
    __sub_00452C80(this, nullptr, nId);
}

void CUISkillDec::Draw(const tagRECT* arg0)
{
    __sub_004530F0(this, nullptr, arg0);
}

void CUISkillDec::ResetInfo()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUISkillDec::GetResult(long& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUISkillDec::SetOption(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUISkillDec::GetCurTab()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUISkillDec::OnTabChanged(long nTab)
{
    __sub_00458630(this, nullptr, nTab);
}

void CUISkillDec::OnSkillDecButton(long nIdx)
{
    __sub_004524B0(this, nullptr, nIdx);
}

void CUISkillDec::SetSkillRootList()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUISkillDec::SetTabItems()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUISkillDec::SetScrollBar()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUISkillDec::SetButtons()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUISkillDec::IsEnableSkill(const SKILLENTRY* p)
{
    return __sub_00452CE0(this, nullptr, p);
}

int32_t CUISkillDec::IsRequiredSkill(long nReqSkillID)
{
    return __sub_00452570(this, nullptr, nReqSkillID);
}

long CUISkillDec::GetExcessSP(long nTab)
{
    return __sub_00452670(this, nullptr, nTab);
}

void CUISkillDec::ReloadSkillRootVisible()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const SKILLENTRY* CUISkillDec::GetSkillEntry(long nIdx)
{
    return __sub_00452280(this, nullptr, nIdx);
}

long CUISkillDec::GetSkillEntryCount()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUISkillDec& CUISkillDec::operator=(const CUISkillDec& arg0)
{
    return _op_assign_26(this, arg0);
}

CUISkillDec& CUISkillDec::_op_assign_26(CUISkillDec* pThis, const CUISkillDec& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIJoyPad::~CUIJoyPad()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIJoyPad::_dtor_0()
{
    return __sub_005DFC90(this, nullptr);
}

CUIJoyPad::CUIJoyPad(const CUIJoyPad& arg0)
{
    _ctor_1(arg0);
}

void CUIJoyPad::_ctor_1(const CUIJoyPad& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIJoyPad::CUIJoyPad()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CUIJoyPad::_ctor_0()
{
    return __sub_005DFBA0(this, nullptr);
}

void CUIJoyPad::OnCreate(void* pData)
{
    __sub_00573DC0(this, nullptr, pData);
}

void CUIJoyPad::SetRet(long nRet)
{
    __sub_0057A780(this, nullptr, nRet);
}

void CUIJoyPad::OnButtonClicked(uint32_t nId)
{
    __sub_00569A00(this, nullptr, nId);
}

void CUIJoyPad::Draw(const tagRECT* pRect)
{
    __sub_005743F0(this, nullptr, pRect);
}

void CUIJoyPad::SetCtrlFromJoyPad()
{
    __sub_005DFC90(this, nullptr);
}

void CUIJoyPad::GetJoyPadFromCtrl()
{
    __sub_005DFC90(this, nullptr);
}

void CUIJoyPad::SetDefault()
{
    __sub_005DFC90(this, nullptr);
}

int32_t CUIJoyPad::CheckControls()
{
    return __sub_00569580(this, nullptr);
}

CUIJoyPad& CUIJoyPad::operator=(const CUIJoyPad& arg0)
{
    return _op_assign_11(this, arg0);
}

CUIJoyPad& CUIJoyPad::_op_assign_11(CUIJoyPad* pThis, const CUIJoyPad& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStatChangeConfirm::~CUIStatChangeConfirm()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIStatChangeConfirm::_dtor_0()
{
    return __sub_005D3EB0(this, nullptr);
}

CUIStatChangeConfirm::CUIStatChangeConfirm(const CUIStatChangeConfirm& arg0)
{
    _ctor_1(arg0);
}

void CUIStatChangeConfirm::_ctor_1(const CUIStatChangeConfirm& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStatChangeConfirm::CUIStatChangeConfirm()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CUIStatChangeConfirm::_ctor_0()
{
    return __sub_005D3E10(this, nullptr);
}

void CUIStatChangeConfirm::SetOption(unsigned long dwDec, unsigned long dwInc)
{
    __sub_005CC790(this, nullptr, dwDec, dwInc);
}

void CUIStatChangeConfirm::CreateStatChangeDlg()
{
    __sub_005CC7B0(this, nullptr);
}

void CUIStatChangeConfirm::GetResult(unsigned long& dwDec, unsigned long& dwInc)
{
    __sub_005CC7D0(this, nullptr, dwDec, dwInc);
}

void CUIStatChangeConfirm::OnCreate(void* pData)
{
    __sub_0046A480(this, nullptr, pData);
}

void CUIStatChangeConfirm::Draw(const tagRECT* pRect)
{
    __sub_0046B260(this, nullptr, pRect);
}

void CUIStatChangeConfirm::OnButtonClicked(uint32_t nId)
{
    __sub_005D3E50(this, nullptr, nId);
}

CUIStatChangeConfirm& CUIStatChangeConfirm::operator=(const CUIStatChangeConfirm& arg0)
{
    return _op_assign_9(this, arg0);
}

CUIStatChangeConfirm&
CUIStatChangeConfirm::_op_assign_9(CUIStatChangeConfirm* pThis, const CUIStatChangeConfirm& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStatChange::~CUIStatChange()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIStatChange::_dtor_0()
{
    return __sub_005DFE80(this, nullptr);
}

CUIStatChange::CUIStatChange(const CUIStatChange& arg0)
{
    _ctor_1(arg0);
}

void CUIStatChange::_ctor_1(const CUIStatChange& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStatChange::CUIStatChange()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CUIStatChange::_ctor_0()
{
    return __sub_005DFD80(this, nullptr);
}

void CUIStatChange::SetOption(unsigned long dwDec, unsigned long dwInc)
{
    __sub_005CC730(this, nullptr, dwDec, dwInc);
}

void CUIStatChange::CreateStatChangeDlg()
{
    __sub_005CC750(this, nullptr);
}

void CUIStatChange::GetResult(unsigned long& dwDec, unsigned long& dwInc)
{
    __sub_005CC770(this, nullptr, dwDec, dwInc);
}

void CUIStatChange::OnCreate(void* pData)
{
    __sub_0046A010(this, nullptr, pData);
}

void CUIStatChange::OnButtonClicked(uint32_t nId)
{
    __sub_004686F0(this, nullptr, nId);
}

void CUIStatChange::Draw(const tagRECT* pRect)
{
    __sub_0046BF90(this, nullptr, pRect);
}

void CUIStatChange::OnKey(uint32_t wParam, int32_t lParam)
{
    __sub_005DFE20(this, nullptr, wParam, lParam);
}

void CUIStatChange::SetRet(long nRet)
{
    __sub_005DFE40(this, nullptr, nRet);
}

void CUIStatChange::DrawDecStat(unsigned long dwDec)
{
    __sub_0046A8F0(this, nullptr, dwDec);
}

void CUIStatChange::SetButtons()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUIStatChange::IsUnderMinHP(long nHP)
{
    return __sub_00468B30(this, nullptr, nHP);
}

int32_t CUIStatChange::IsUnderMinMP(long nMP)
{
    return __sub_00469130(this, nullptr, nMP);
}

int32_t CUIStatChange::IsOverMaxHP(long nHP)
{
    return __sub_004697F0(this, nullptr, nHP);
}

int32_t CUIStatChange::IsOverMaxMP(long nMP)
{
    return __sub_00469880(this, nullptr, nMP);
}

CUIStatChange& CUIStatChange::operator=(const CUIStatChange& arg0)
{
    return _op_assign_17(this, arg0);
}

CUIStatChange& CUIStatChange::_op_assign_17(CUIStatChange* pThis, const CUIStatChange& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUISkillInc::~CUISkillInc()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUISkillInc::_dtor_0()
{
    return __sub_005EB2B0(this, nullptr);
}

CUISkillInc::CUISkillInc(const CUISkillInc& arg0)
{
    _ctor_1(arg0);
}

void CUISkillInc::_ctor_1(const CUISkillInc& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUISkillInc::CUISkillInc()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CUISkillInc::_ctor_0()
{
    return __sub_005EB1A0(this, nullptr);
}

void CUISkillInc::OnCreate(void* pData)
{
    __sub_00458AC0(this, nullptr, pData);
}

void CUISkillInc::CreateSkillIncDlg()
{
    __sub_005CC830(this, nullptr);
}

void CUISkillInc::OnDestroy()
{
    __sub_005EB270(this, nullptr);
}

void CUISkillInc::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    __sub_00458DF0(this, nullptr, nId, param1, param2);
}

void CUISkillInc::OnKey(uint32_t wParam, int32_t lParam)
{
    __sub_005EB240(this, nullptr, wParam, lParam);
}

void CUISkillInc::OnButtonClicked(uint32_t nId)
{
    __sub_00452F70(this, nullptr, nId);
}

void CUISkillInc::Draw(const tagRECT* arg0)
{
    __sub_00455EA0(this, nullptr, arg0);
}

void CUISkillInc::DrawTab(long nTab)
{
    __sub_00454C40(this, nullptr, nTab);
}

void CUISkillInc::ResetInfo()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUISkillInc::GetResult(long& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUISkillInc::SetOption(long nDecSkillID, long nTab)
{
    __sub_005CC850(this, nullptr, nDecSkillID, nTab);
}

void CUISkillInc::OnSkillIncButton(long nIdx)
{
    __sub_00452B20(this, nullptr, nIdx);
}

void CUISkillInc::SetSkillRootList()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUISkillInc::SetScrollBar()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUISkillInc::SetButtons()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUISkillInc::ReloadSkillRootVisible()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const SKILLENTRY* CUISkillInc::GetSkillEntry(long nIdx)
{
    return __sub_00452320(this, nullptr, nIdx);
}

long CUISkillInc::GetSkillEntryCount()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUISkillInc& CUISkillInc::operator=(const CUISkillInc& arg0)
{
    return _op_assign_21(this, arg0);
}

CUISkillInc& CUISkillInc::_op_assign_21(CUISkillInc* pThis, const CUISkillInc& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUISkillChangeConfirm::~CUISkillChangeConfirm()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUISkillChangeConfirm::_dtor_0()
{
    return __sub_005E0010(this, nullptr);
}

CUISkillChangeConfirm::CUISkillChangeConfirm(const CUISkillChangeConfirm& arg0)
{
    _ctor_1(arg0);
}

void CUISkillChangeConfirm::_ctor_1(const CUISkillChangeConfirm& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUISkillChangeConfirm::CUISkillChangeConfirm()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CUISkillChangeConfirm::_ctor_0()
{
    return __sub_005DFF50(this, nullptr);
}

void CUISkillChangeConfirm::OnCreate(void* pData)
{
    __sub_00454EF0(this, nullptr, pData);
}

void CUISkillChangeConfirm::OnDestroy()
{
    __sub_005E00F0(this, nullptr);
}

void CUISkillChangeConfirm::OnButtonClicked(uint32_t nID)
{
    __sub_005DFFB0(this, nullptr, nID);
}

void CUISkillChangeConfirm::Draw(const tagRECT* arg0)
{
    __sub_00456CA0(this, nullptr, arg0);
}

void CUISkillChangeConfirm::DrawTab(long nDecSkillID, long nIncSkillID)
{
    __sub_005CC8F0(this, nullptr, nDecSkillID, nIncSkillID);
}

void CUISkillChangeConfirm::GetResult(long& nDecSkillID, long& nIncSkillID)
{
    __sub_005CC8D0(this, nullptr, nDecSkillID, nIncSkillID);
}

void CUISkillChangeConfirm::SetOption(long nDecSkillID, long nIncSkillID)
{
    __sub_005CC8F0(this, nullptr, nDecSkillID, nIncSkillID);
}

void CUISkillChangeConfirm::CreateSkillChangeConfirmDlg()
{
    __sub_005CC970(this, nullptr);
}

CUISkillChangeConfirm& CUISkillChangeConfirm::operator=(const CUISkillChangeConfirm& arg0)
{
    return _op_assign_11(this, arg0);
}

CUISkillChangeConfirm&
CUISkillChangeConfirm::_op_assign_11(CUISkillChangeConfirm* pThis, const CUISkillChangeConfirm& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWvsContext::~CWvsContext()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CWvsContext::_dtor_0()
{
    return __sub_005E9BA0(this, nullptr);
}

CWvsContext::CWvsContext(const CWvsContext& arg0)
{
    _ctor_1(arg0);
}

void CWvsContext::_ctor_1(const CWvsContext& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWvsContext::CWvsContext()
{
    ms_pInstance = this;
    m_basicStat.Clear();
    m_forcedStat.Clear();

    //TODO zalloc
    m_pUIRaiseManager = new CUIRaiseManager();
    m_nTeamForPartyRaid = PARTY_RAID_TEAM_NONE;
    m_nPartyRaidStageMine = 1;
    m_nPartyRaidStageOther = 1;

    m_nScreenWidth = 0x320; //TODO global
    m_nScreenHeight = 0x258; //TODO global

    auto t = (long)timeGetTime();
    m_tLastEffectItemChange = t;
    m_tLastEmotionChange = t;
    m_tExclRequestSent = t;
    m_tLastStatResetRequest = t;
    m_tAutoAcceptQuestRequest = t;
    m_tLastStatResetRequest = t;

    m_tNextNoticePlaytime = t + 3600000;
    m_nPlaytimeHour = 1;

    m_tLastGivePopularity = t - 300000;
    m_tLastSueCharacter = t - 300000;

    auto ft = TimeUtil::FTGetNow();
    m_ftLastUpdate = ft;
    m_bShowOnlyWorthyQuests = true;
}

void CWvsContext::_ctor_0()
{
    new(this) CWvsContext();
}

void CWvsContext::IssueConnect(const ZInetAddr* pAddr)
{
    //__sub_005E0300(this, nullptr, pAddr);
    auto sck = CClientSocket::GetInstance();
    sck->Close();

    CClientSocket::CONNECTCONTEXT ctx{};
    ctx.lAddr.Insert(*pAddr);
    sck->Connect_1(ctx);
}

void CWvsContext::ReturnToTitle()
{
    //UNIMPLEMENTED;
    m_pUIRaiseManager->ClearWindows();
    auto app = CWvsApp::ms_pInstance;
    app->ConnectLogin();

    //TODO zalloc
    auto login = new CLogin();
    set_stage(login, nullptr);

    CConfig::ms_pInstance->ResetSessionInfo();
    if (app->GetGameStartMode() == CWvsApp::GSM::GAME)
    {
        CNMCOClientObject::ms_pInstance->LogoutAuth();
    }
}

void CWvsContext::OnEnterGame()
{
    __sub_005E7110(this, nullptr);
}

void CWvsContext::OnPostEnterGame()
{
    _CheckExpiredProtectItems();
}

void CWvsContext::OnEnterField()
{
    __sub_005DBEC0(this, nullptr);
}

void CWvsContext::OnLeaveGame()
{
    __sub_005E7840(this, nullptr);
}

void CWvsContext::OnGameStageChanged()
{
    __sub_005E6760(this, nullptr);
}

void CWvsContext::ClearFieldUI()
{
    __sub_005D4CB0(this, nullptr);
}

void CWvsContext::SendMigrateToShopRequest(int32_t bFromWishItem)
{
    __sub_005DC280(this, nullptr, bFromWishItem);
}

void CWvsContext::SendMigrateToITCRequest()
{
    __sub_005DEF50(this, nullptr);
}

long CWvsContext::GetCurFieldID()
{
    //return __sub_005DB0A0(this, nullptr);
    if (auto field = get_field())
        return field->GetFieldID();

    return -1;
}

void CWvsContext::UI_Toggle(int32_t nUIType, int32_t nDefaultTab)
{
    __sub_005DC510(this, nullptr, nUIType, nDefaultTab);
}

void CWvsContext::UI_Open(int32_t nUIType, int32_t nDefaultTab)
{
    __sub_005D83F0(this, nullptr, nUIType, nDefaultTab);
}

void CWvsContext::UI_Close(int32_t nUIType)
{
    __sub_005D5370(this, nullptr, nUIType);
}

void CWvsContext::UI_OpenRevive()
{
    __sub_005CC9B0(this, nullptr);
}

void CWvsContext::UI_CloseRevive()
{
    //__sub_005CCCD0(this, nullptr);
    if (auto revive = CUIRevive::GetInstance())
    {
        revive->Destroy();
        delete revive;
    }
}

void CWvsContext::UI_Menu()
{
    __sub_005E8120(this, nullptr);
}

void CWvsContext::UI_ShortCut()
{
    __sub_005DD740(this, nullptr);
}

void CWvsContext::UI_Shop()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::GetInfoFromSharedMemory()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CWvsContext::GetWebCookie(WEBCOOKIE* arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::RemoveWebCookie()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::SetCookieString(const char* arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CWvsContext::GetLoginBaseStep() const
{
    return m_nLoginBaseStep;
}

void CWvsContext::SetLoginBaseStep(long arg0)
{
    m_nLoginBaseStep = arg0;
}

const char* CWvsContext::GetEMailAccount()
{
    return (const char*)m_sEMailAccount;
    // return __sub_0009C800(this, nullptr);
}

void CWvsContext::SetEMailAccount(const char* arg0)
{
    m_sEMailAccount = arg0;
}

unsigned char* CWvsContext::GetClientKey()
{
    return m_aClientKey.data();
}

void CWvsContext::SetClientKey(const unsigned char* arg0, long arg1)
{
    std::memcpy(m_aClientKey.data(), arg0, arg1);
}

void CWvsContext::RemoveQuestMateName(uint16_t usQuestID)
{
    __sub_005E0800(this, nullptr, usQuestID);
}

void CWvsContext::SetQuestMateName(uint16_t nQuestID, ZXString<char> sMateName)
{
    __sub_005FCF40(this, nullptr, nQuestID, CreateNakedParam(sMateName));
}

ZXString<char> CWvsContext::GetQuestMateName(uint16_t nQuestID)
{
    ZXString<char> ret;
    return *__sub_005F7F50(this, nullptr, &ret, nQuestID);
}

void
CWvsContext::SetAccountInfo(unsigned long dwAccountId, long nGender, unsigned char nGradeCode, unsigned char nCountryID,
                            ZXString<char> sNexonClubID, unsigned char nPurchaseExp,
                            unsigned char nChatBlockReason, // NOLINT(*-unnecessary-value-param)
                            _SYSTEMTIME dtChatUnblockDate, unsigned char nSubGradeCode, int32_t bTesterAccount,
                            _SYSTEMTIME dtRegisterDate, long nNumOfCharacter,
                            ZXString<char> sGuestIDRegistrationURL)
{
    // NOLINT(*-unnecessary-value-param)

    m_nGender = nGender;
    m_dwAccountId = dwAccountId;
    m_nGradeCode = nGradeCode;
    m_nSubGradeCode = nSubGradeCode;

    m_nCountryID = nCountryID;
    m_sNexonClubID = sNexonClubID;
    m_dtChatUnblockDate = dtChatUnblockDate;
    m_nPurchaseExp = nPurchaseExp;
    m_nNumOfCharacter = nNumOfCharacter;

    m_bTesterAccount = bTesterAccount;
    m_dtRegisterDate = dtRegisterDate;

    m_bIsGuestAccount = !sGuestIDRegistrationURL.IsEmpty();
    CClientSocket::ms_pInstance->SetGuestIDLoginInfo(sGuestIDRegistrationURL);

    /*__sub_001D51F0(this, nullptr, dwAccountId, nGender, nGradeCode, nCountryID, CreateNakedParam(sNexonClubID), nPurchaseExp,
                   nChatBlockReason, CreateNakedParam(dtChatUnblockDate), nSubGradeCode, bTesterAccount,
                   CreateNakedParam(dtRegisterDate), nNumOfCharacter, CreateNakedParam(sGuestIDRegistrationURL));*/
}

void CWvsContext::SetSlotInfo(long arg0)
{
    //TODO
    m_nSlotCount = arg0;
}

void CWvsContext::SetCharacterCountInfo(long arg0)
{
    //TODO
    m_nCharacterCount = arg0;
}

void CWvsContext::SetGender(unsigned char arg0)
{
    m_nGender = arg0;
}

void CWvsContext::SetGender(long arg0)
{
    m_nGender = arg0;
}

unsigned long CWvsContext::GetAccountId() const
{
    //return __sub_003F6AB0(this, nullptr);
    return m_dwAccountId;
}

long CWvsContext::GetGender() const
{
    //return __sub_0012B0E0(this, nullptr);
    return m_nGender;
}

const char* CWvsContext::GetNexonClubID()
{
    //return __sub_0009C800(this, nullptr);
    return (const char*)m_sNexonClubID;
}

unsigned char CWvsContext::GetCountryID() const
{
    return m_nCountryID;
}

long CWvsContext::GetTotalCharacterCount() const
{
    return m_nCharacterCount;
}

long CWvsContext::GetCurrentWorldCharacterCount()
{
    //TODO verify
    return m_nNumOfCharacter;
}

long CWvsContext::GetSlotCount() const
{
    return m_nSlotCount;
}

void CWvsContext::IncreaseCharCount()
{
    //TODO verify
    m_nCharacterCount++;
}

void CWvsContext::IncreaseSlotCount()
{
    //TODO verify
    m_nSlotCount++;
}

int32_t CWvsContext::IsManagerAccount() const
{
    return m_bManagerAccount;
}

int32_t CWvsContext::IsManagerJob()
{
    return m_nGradeCode & 1 != 0 || IsManagerAccount();
}

int32_t CWvsContext::IsTesterAccount()
{
    return m_bTesterAccount || m_bManagerAccount;
}

unsigned char CWvsContext::GetGradeCode()
{
    return m_nGradeCode;
}

int32_t CWvsContext::IsSuperGM()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CWvsContext::IsAdminAccount()
{
    return GetGradeCode() & 1 || m_bManagerAccount;
}

int32_t CWvsContext::IsTradeBlockedUser()
{
    //TODO return !IsTesterAccount() && !IsAdminAccount() && m_nGradeCode & 0x10 == 0
    return __sub_00100F90(this, nullptr);
}

int32_t CWvsContext::CannotDropItem()
{
    return __sub_00100FD0(this, nullptr);
}

int32_t CWvsContext::CannotUseCommunityFunction()
{
    return IsUnderCover() || m_bTesterAccount;
}

int32_t CWvsContext::CanUseTestCommand()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CWvsContext::CanUseAdminCommand()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CWvsContext::CanUseCommonCommand()
{
    return m_bTesterAccount || m_bManagerAccount || IsUnderCover();
}

int32_t CWvsContext::IsGuestAccount()
{
    return m_bIsGuestAccount;
}

int32_t CWvsContext::IsSubGMAccount()
{
    return m_nSubGradeCode.GetData() & 0x80;
}

int32_t CWvsContext::IsOutSourceSuperGM()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CWvsContext::IsOutSourceGM()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CWvsContext::IsUserGM()
{
    return m_nSubGradeCode.GetData() >> 7;
}

long CWvsContext::GetAdminLevel()
{
    auto gc = GetGradeCode();
    if (gc & 0x20)
    {
        return 0;
    }

    if (!IsUnderCover())
    {
        return 1;
    }

    auto sc = m_nSubGradeCode.GetData();
    if (sc & 0x20)
    {
        return 2;
    }
    if (sc & 0x40)
    {
        return 3;
    }
    return (sc ^ 0x80) >> 7 | 4;
}

int32_t CWvsContext::IsUnderCover()
{
    return GetGradeCode() & 1 && IsManagerAccount();
}

int32_t CWvsContext::IsTeleportPermissible()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CWvsContext::IsChatBlocked()
{
    return m_nChatBlockReason != 0;
}

_SYSTEMTIME CWvsContext::GetChatUnblockDate()
{
    return m_dtChatUnblockDate;
}

unsigned char CWvsContext::GetChatBlockReason()
{
    return m_nChatBlockReason;
}

_SYSTEMTIME CWvsContext::GetRegisterDate()
{
    return m_dtRegisterDate;
}

int32_t CWvsContext::IsNewAccount()
{
    auto now = Util::FTGetNow();
    auto regT = TimeUtil::ST2FT(m_dtRegisterDate);
    auto ageMin = get_min_from_subtracting_two_filetime(&now, &regT);
    return ageMin < 20160;
    //return __sub_005FA230(this, nullptr);
}

int32_t CWvsContext::HasNoCharacter() const
{
    return m_nCharacterCount == 0;
}

void CWvsContext::SetJustCreatedCharacter(int32_t arg0)
{
    m_bThisAccountJustCreatedCharacter = arg0;
}

int32_t CWvsContext::GetJustCreatedCharacter() const
{
    return m_bThisAccountJustCreatedCharacter;
}

void CWvsContext::SetWorldInfo(long nWorldID, long nChannelID, ZArray<ZXString<char>>& aChannelName,
                               ZArray<int>& aAdultChannel)
{
    __sub_005E02A0(this, nullptr, nWorldID, nChannelID, aChannelName, aAdultChannel);
}

void CWvsContext::SetChannelID(long arg0)
{
    m_nWorldID = arg0;
}

long CWvsContext::GetWorldID() const
{
    return m_nWorldID;
    //return __sub_0012B0E0(this, nullptr);
}

long CWvsContext::GetChannelID() const
{
    return m_nChannelID;
    //return __sub_0012B0E0(this, nullptr);
}

long CWvsContext::GetChannelCount()
{
    return (long)m_aChannelName.GetCount();
    //return __sub_0012B0E0(this, nullptr);
}

const char* CWvsContext::GetChannelName(long nIdx)
{
    if (nIdx >= 0 && nIdx < m_aChannelName.GetCount())
    {
        return m_aChannelName.GetAt(nIdx).c_str();
    }

    return "";
    //return __sub_0012FEC0(this, nullptr, nIdx);
}

const char* CWvsContext::GetChannelName_()
{
    if (m_nChannelID == -1)
        return nullptr;
    return m_aChannelName[m_nChannelID].c_str();
}

int32_t CWvsContext::GetAdultChannel(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

unsigned long CWvsContext::GetCharacterId()
{
    return m_dwCharacterId;
    //return __sub_003F6AB0(this, nullptr);
}

void CWvsContext::SetCharacterId(unsigned long dwFlag)
{
    m_dwCharacterId = dwFlag;
    //__sub_005F61C0(this, nullptr, dwFlag);
}

void CWvsContext::SetPremium(int32_t premium)
{
    m_bPremium = premium;
}

void CWvsContext::SetPremiumArgument(unsigned long dwFlag)
{
    m_ulPremiumArgument = dwFlag;
}

const char* CWvsContext::GetCharacterName()
{
    return m_pCharacterData ? m_pCharacterData->characterStat.sCharacterName.data() : nullptr;
    //return __sub_0009C800(this, nullptr);
}


long CWvsContext::GetCharacterLevel()
{
    return m_pCharacterData ? m_pCharacterData->characterStat._ZtlSecureGet_nLevel() : 0;
    //return __sub_0012B0E0(this, nullptr);
}

int32_t CWvsContext::IsPremiumUser()
{
    return m_bPremium;
}

unsigned long CWvsContext::GetPremiumArgument() const
{
    return m_ulPremiumArgument;
}

long CWvsContext::GetFuncKeyMappedType(uint32_t arg0, uint32_t arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CWvsContext::ProcessBasicUIKey(uint32_t wParam, int32_t lParam)
{
    return __sub_005E8500(this, nullptr, wParam, lParam);
}

int32_t CWvsContext::UseFuncKeyMapped(int32_t lParam)
{
    return __sub_005DD890(this, nullptr, lParam);
}

int32_t CWvsContext::MonsterCarnivalDlgKeyHook(uint32_t wParam)
{
    return __sub_005CCF40(this, nullptr, wParam);
}

void CWvsContext::ChannelShift()
{
    __sub_005DAE80(this, nullptr);
}

void CWvsContext::OnPacket(long nType, CInPacket& iPacket)
{
    //__sub_005E5830(this, nullptr, nType, iPacket);
    switch (nType)
    {
    case 28:
        OnInventoryOperation(iPacket);
        break;
    case 29:
        OnInventoryGrow(iPacket);
        break;
    case 30:
        OnStatChanged(iPacket);
        break;
    case 31:
        OnTemporaryStatSet(iPacket);
        break;
    case 32:
        OnTemporaryStatReset(iPacket);
        break;
    case 33:
        OnForcedStatSet(iPacket);
        break;
    case 34:
        OnForcedStatReset(iPacket);
        break;
    case 35:
        OnChangeSkillRecordResult(iPacket);
        break;
    case 36:
        OnSkillUseResult(iPacket);
        break;
    case 37:
        OnGivePopularityResult(iPacket);
        break;
    case 38:
        OnMessage(iPacket);
        break;
    case 39:
        OnOpenFullClientDownloadLink(iPacket);
        break;
    case 40:
        OnMemoResult(iPacket);
        break;
    case 41:
        OnMapTransferResult(iPacket);
        break;
    case 42:
        OnAntiMacroResult(iPacket);
        break;
    case 44:
        OnClaimResult(iPacket);
        break;
    case 45:
        OnSetClaimSvrAvailableTime(iPacket);
        break;
    case 46:
        OnClaimSvrStatusChanged(iPacket);
        break;
    case 47:
        OnSetTamingMobInfo(iPacket);
        break;
    case 48:
        OnQuestClear(iPacket);
        break;
    case 49:
        OnEntrustedShopCheckResult(iPacket);
        break;
    case 50:
        OnSkillLearnItemResult(iPacket);
        break;
    case 51:
        OnSkillResetItemResult(iPacket);
        break;
    case 52:
        OnGatherItemResult(iPacket);
        break;
    case 53:
        OnSortItemResult(iPacket);
        break;
    case 55:
        OnSueCharacterResult(iPacket);
        break;
    case 57:
        OnTradeMoneyLimit(iPacket);
        break;
    case 58:
        OnSetGender(iPacket);
        break;
    case 59:
        OnGuildBBSPacket(iPacket);
        break;
    case 61:
        OnCharacterInfo(iPacket);
        break;
    case 62:
        OnPartyResult(iPacket);
        break;
    case 64:
        OnExpedtionResult(iPacket);
        break;
    case 65:
        OnFriendResult(iPacket);
        break;
    case 67:
        OnGuildResult(iPacket);
        break;
    case 68:
        OnAllianceResult(iPacket);
        break;
    case 69:
        OnTownPortal(iPacket);
        break;
    case 70:
        OnOpenGate(iPacket);
        break;
    case 71:
        OnBroadcastMsg(iPacket);
        break;
    case 72:
        OnIncubatorResult(iPacket);
        break;
    case 73:
        OnShopScannerResult(iPacket);
        break;
    case 74:
        OnShopLinkResult(iPacket);
        break;
    case 75:
        OnMarriageRequest(iPacket);
        break;
    case 76:
        OnMarriageResult(iPacket);
        break;
    case 77:
        OnWeddingGiftResult(iPacket);
        break;
    case 78:
        OnNotifyMarriedPartnerMapTransfer(iPacket);
        break;
    case 79:
        OnCashPetFoodResult(iPacket);
        break;
    case 80:
        OnSetWeekEventMessage(iPacket);
        break;
    case 81:
        OnSetPotionDiscountRate(iPacket);
        break;
    case 82:
        OnBridleMobCatchFail(iPacket);
        break;
    case 83:
        OnImitatedNPCResult(iPacket);
        break;
    case 84:
        OnImitatedNPCData(iPacket);
        break;
    case 85:
        OnLimitedNPCDisableInfo(iPacket);
        break;
    case 86:
        OnMonsterBookSetCard(iPacket);
        break;
    case 87:
        OnMonsterBookSetCover(iPacket);
        break;
    case 88:
        OnHourChanged(iPacket);
        break;
    case 89:
        OnMiniMapOnOff(iPacket);
        break;
    case 90:
        OnConsultAuthkeyUpdate(iPacket);
        break;
    case 91:
        OnClassCompetitionAuthkeyUpdate(iPacket);
        break;
    case 92:
        OnWebBoardAuthkeyUpdate(iPacket);
        break;
    case 93:
        OnSessionValue(iPacket);
        break;
    case 94:
        OnPartyValue(iPacket);
        break;
    case 95:
        OnFieldSetVariable(iPacket);
        break;
    case 96:
        OnBonusExpRateChanged(iPacket);
        break;
    case 97:
        OnPotionDiscountRateChanged(iPacket);
        break;
    case 98:
        OnFamilyChartResult(iPacket);
        break;
    case 99:
        OnFamilyInfoResult(iPacket);
        break;
    case 100:
        OnFamilyResult(iPacket);
        break;
    case 101:
        OnFamilyJoinRequest(iPacket);
        break;
    case 102:
        OnFamilyJoinRequestResult(iPacket);
        break;
    case 103:
        OnFamilyJoinAccepted(iPacket);
        break;
    case 104:
        OnFamilyPrivilegeList(iPacket);
        break;
    case 105:
        OnFamilyFamousPointIncResult(iPacket);
        break;
    case 106:
        OnFamilyNotifyLoginOrLogout(iPacket);
        break;
    case 107:
        OnFamilySetPrivilege(iPacket);
        break;
    case 108:
        OnFamilySummonRequest(iPacket);
        break;
    case 109:
        OnNotifyLevelUp(iPacket);
        break;
    case 110:
        OnNotifyWedding(iPacket);
        break;
    case 111:
        OnNotifyJobChange(iPacket);
        break;
    case 113:
        OnMapleTVUseRes(iPacket);
        break;
    case 114:
        OnAvatarMegaphoneRes(iPacket);
        break;
    case 115:
        OnSetAvatarMegaphone(iPacket);
        break;
    case 116:
        OnClearAvatarMegaphone(iPacket);
        break;
    case 117:
        OnCancelNameChangeResult(iPacket);
        break;
    case 118:
        OnCancelTransferWorldResult(iPacket);
        break;
    case 119:
        OnDestroyShopResult(iPacket);
        break;
    case 120:
        OnFakeGMNotice(iPacket);
        break;
    case 121:
        OnSuccessInUsegachaponBox(iPacket);
        break;
    case 122:
        OnNewYearCardRes(iPacket);
        break;
    case 123:
        OnRandomMorphRes(iPacket);
        break;
    case 124:
        OnCancelNameChangebyOther(iPacket);
        break;
    case 125:
        OnSetBuyEquipExt(iPacket);
        break;
    case 126:
        OnSetPassenserRequest(iPacket);
        break;
    case 127:
        OnScriptProgressMessage(iPacket);
        break;
    case 128:
        OnDataCRCCheckFailed(iPacket);
        break;
    case 129:
        OnCakePieEventResult(iPacket);
        break;
    case 130:
        OnUpdateGMBoard(iPacket);
        break;
    case 131:
        OnShowSlotMessage(iPacket);
        break;
    case 132:
        OnWildHunterInfo(iPacket);
        break;
    case 133:
        OnAccountMoreInfo(iPacket);
        break;
    case 134:
        OnFindFirend(iPacket);
        break;
    case 135:
        OnStageChange(iPacket);
        break;
    case 136:
        OnDragonBallBox(iPacket);
        break;
    case 137:
        OnAskWhetherUsePamsSong(iPacket);
        break;
    case 138:
        OnTransferChannel(iPacket);
        break;
    case 139:
        OnDisallowedDeliveryQuestList(iPacket);
        break;
    case 140:
        OnMacroSysDataInit(iPacket);
        break;
    default:
        return;
    }
}

void CWvsContext::OnMessage(CInPacket& iPacket)
{
    switch (iPacket.Decode1())
    {
    case 0u:
        this->OnDropPickUpMessage(iPacket);
        break;
    case 1u:
        this->OnQuestRecordMessage(iPacket);
        break;
    case 2u:
        this->OnCashItemExpireMessage(iPacket);
        break;
    case 3u:
        this->OnIncEXPMessage(iPacket);
        break;
    case 4u:
        this->OnIncSPMessage(iPacket);
        break;
    case 5u:
        this->OnIncPOPMessage(iPacket);
        break;
    case 6u:
        this->OnIncMoneyMessage(iPacket);
        break;
    case 7u:
        this->OnIncGPMessage(iPacket);
        break;
    case 8u:
        this->OnGiveBuffMessage(iPacket);
        break;
    case 9u:
        this->OnGeneralItemExpireMessage(iPacket);
        break;
    case 0xAu:
        this->OnSystemMessage(iPacket);
        break;
    case 0xBu:
        this->OnQuestRecordExMessage(iPacket);
        break;
    case 0xCu:
        this->OnItemProtectExpireMessage(iPacket);
        break;
    case 0xDu:
        this->OnItemExpireReplaceMessage(iPacket);
        break;
    case 0xEu:
        this->OnSkillExpireMessage(iPacket);
        break;
    default:
        return;
    }
}

void CWvsContext::OnOpenFullClientDownloadLink(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnMemoResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnWildHunterInfo(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZRef<CharacterData> CWvsContext::GetCharacterData()
{
    //ZRef<CharacterData> ret{};
    //return *__sub_0002B960(this, nullptr, &ret);
    return m_pCharacterData;
}

void CWvsContext::SetCharacterData(ZRef<CharacterData> pCharacter)
{
    //__sub_005EAE70(this, nullptr, CreateNakedParam(pCharacter));
    m_pCharacterData = pCharacter;
    if (auto statusBar = CUIStatusBar::GetInstance())
    {
        statusBar->ResetButtonToolTip();
    }

    auto questAlarm = CConfig::GetInstance()->GetQuestAlarm();
    auto uiQuestAlarm = CUIQuestAlarm::GetInstance();
    for (auto& qa : questAlarm)
    {
        if (!m_pCharacterData->IsQuestInProgress(qa))
            uiQuestAlarm->DeleteQuest(qa);
    }

    ValidateStat();
}

const BasicStat& CWvsContext::GetBasicStat()
{
    //return __sub_000701C0(this, nullptr);
    return m_basicStat;
}

SecondaryStat& CWvsContext::GetSecondaryStat()
{
    //return __sub_000FEF50(this, nullptr);
    return m_secondaryStat;
}

const ForcedStat& CWvsContext::GetForcedStat()
{
    return m_forcedStat;
}

int32_t CWvsContext::IsStatForced()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTemporaryStatView& CWvsContext::GetTempStatView()
{
    return m_temporaryStatView;
}

ZRef<GW_ItemSlotBase>* CWvsContext::GetRealEquip()
{
    return m_aRealEquip.data();
}

ZRef<GW_ItemSlotBase> CWvsContext::GetRealEquipSlot(long nBodyPart)
{
    return this->m_aRealEquip[nBodyPart];
    //return __sub_004617D0(this, nullptr, nBodyPart);
}

ZRef<GW_ItemSlotBase>* CWvsContext::GetRealEquip2()
{
    return m_aRealEquip2.data();
}

ZRef<GW_ItemSlotBase>* CWvsContext::GetRealDragonEquip()
{
    return m_aRealDragonEquip.data();
}

ZRef<GW_ItemSlotBase>* CWvsContext::GetRealMechanicEquip()
{
    return m_aRealMechanicEquip.data();
}

int32_t CWvsContext::IsRealEquipItem(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CWvsContext::IsRealEquip2Item(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CWvsContext::IsEquipped(long nItem)
{
    auto slot = get_equiped_from_item(nItem, *m_pCharacterData.op_ptr());
    return static_cast<bool>(slot);
    //return __sub_005CC9F0(this, nullptr, nItem);
}

long CWvsContext::GetBodypartToWear(GW_ItemSlotBase* arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CalcDamage& CWvsContext::GetCalcDamage()
{
    //return __sub_0023A030(this, nullptr);
    return m_CalcDamage;
}

void CWvsContext::ValidateStat()
{
    __sub_005E8670(this, nullptr);
    return;
    auto charData = GetCharacterData();
    if (charData)
    {
        charData->ClearVisitorLog();
    }

    if (!charData)
    {
        auto& charStat = charData->characterStat;

        ZRef<GW_ItemSlotPet> petItems[3]{};
        auto i = 0;

        for (auto& pet : charStat.aliPetLockerSN)
        {
            auto cashSlot = charData->FindCashItemSlotPosition(5, pet);
            if (!cashSlot)
            {
                continue;
            }

            auto item = charData->GetItem(5, cashSlot);
            petItems[i].Attach(dynamic_cast<GW_ItemSlotPet*>(item.op_arrow()));
            ++i;
        }


        auto basicStatUp = m_secondaryStat._ZtlSecureGet_nBasicStatUp_();
        get_real_equip(
            *charData.op_arrow(),
            &petItems[0],
            m_aRealEquip.data(),
            m_aRealEquip2.data(),
            m_aRealDragonEquip.data(),
            m_aRealMechanicEquip.data(),
            basicStatUp,
            0,
            0);

        CheckEquippedSetItem();

        auto psd = CUserLocal::GetInstance()->GetPassiveSkillData();
        auto nPdsMHPr = 0;
        auto nPdsMMPr = 0;
        if (psd)
        {
            nPdsMHPr = psd->nMHPr;
            nPdsMMPr = psd->nMMPr;
        }


        m_basicStat.SetFrom(
            *charData.op_arrow(),
            m_forcedStat,
            m_aRealEquip.data(),
            m_aRealEquip2.data(),
            m_aRealDragonEquip.data(),
            m_aRealMechanicEquip.data(),
            m_secondaryStat._ZtlSecureGet_nMaxHP_(),
            m_secondaryStat._ZtlSecureGet_nMaxMP_(),
            m_secondaryStat._ZtlSecureGet_nBasicStatUp_(),
            m_secondaryStat._ZtlSecureGet_nEMHP_(),
            m_secondaryStat._ZtlSecureGet_nEMMP_(),
            m_secondaryStat._ZtlSecureGet_nSwallowMaxMP_(),
            m_secondaryStat._ZtlSecureGet_nConversion_(),
            m_secondaryStat._ZtlSecureGet_nMorewildMaxHP_(),
            nPdsMHPr,
            nPdsMMPr,
            m_secondaryStat.GetJaguarRidingMaxHPUp(*charData.op_arrow())
        );


        m_secondaryStat.SetFrom(
            *charData.op_arrow(),
            m_basicStat,
            m_forcedStat,
            m_aRealEquip.data(),
            m_aRealEquip2.data(),
            m_aRealDragonEquip.data(),
            m_aRealMechanicEquip.data()
        );


        if (auto p = CUIStat::GetInstance())
            p->ResetInfo();
        // CUIStatusBar
        if (auto p = CUIStatusBar::GetInstance())
            p->InvalidateRect(nullptr);
        if (auto p = CUIKeyConfig::GetInstance())
            p->InvalidateRect(nullptr);
        if (auto p = CUIItem::GetInstance())
            p->InvalidateRect(nullptr);
        if (auto p = CUIEquip::GetInstance())
            p->InvalidateRect(nullptr);
        if (auto p = CUIDragonEquip::GetInstance())
            p->InvalidateRect(nullptr);
        if (auto p = CUIMechanicEquip::GetInstance())
            p->InvalidateRect(nullptr);
        if (auto p = CUserLocal::GetInstance(); p && m_bDirectionMode)
            p->OnFeatureChanged();
        if (auto p = CUISkill::GetInstance())
            p->ResetInfo();
        if (auto p = CUISkillEx::GetInstance())
            p->ResetInfo();
        if (auto p = CUniqueModeless::GetInstance())
            p->ResetInfo();
        if (auto p = CUIPartyHP::GetInstance())
            p->InvalidateRect(nullptr);
        if (auto p = CUIUserList::GetInstance())
            p->OnStatChanged();
        if (auto p = CUIPartySearch::GetInstance())
            p->InvalidateRect(nullptr);
        if (auto p = CUIGuildBBS::GetInstance())
            p->InvalidateRect(nullptr);
        if (auto p = CUIPetEquip::GetInstance())
            p->InvalidateRect(nullptr);

        ValidateAdditionalItemEffect();
        if (CUserLocal::GetInstance())
        {
            if (CheckNormalAutoStartQuest(true))
                UpdateAutoQuestAlertIcon();
        }
    }
}

void CWvsContext::CheckEquippedSetItem()
{
    __sub_005E04D0(this, nullptr);
}

void CWvsContext::UpdateAutoStartQuestOnLevelUp()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::ResetAutoQuest()
{
    __sub_005E8CE0(this, nullptr);
}

int32_t CWvsContext::IsNeedToShowNewAutoQuestEffect()
{
    return __sub_005FA230(this, nullptr);
}

void CWvsContext::SetNewAutoQuestStartAlert(int32_t arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::SetNewAutoCompletionAlertQuest(int32_t arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const ZList<unsigned short>& CWvsContext::GetNewAutoQuestStartList()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::ClearNewAutoQuestStartList()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZXString16 CWvsContext::GetAutoQuestIconUOL()
{
    return __sub_005DDE40(this, nullptr);
}

ZXString16 CWvsContext::GetAutoQuestIconAppearUOL()
{
    return __sub_005DDF60(this, nullptr);
}

long CWvsContext::GetSkillLevelUpState(const SKILLENTRY* p)
{
    return __sub_005D5A40(this, nullptr, p);
}

long CWvsContext::GetPartyID()
{
    //return __sub_0012B0E0(this, nullptr);
    return m_nPartyID;
}

void CWvsContext::GetPartyMemberData(long nIdx, unsigned long& dwMemberID, ZXString<char>& sMemberName,
                                     unsigned long& dwFieldID, ZXString<char>& sMemberJob, long& nLevel,
                                     long& nChannelID, int32_t& bBoss)
{
    __sub_006101B0(this, nullptr, nIdx, dwMemberID, sMemberName, dwFieldID, sMemberJob, nLevel, nChannelID, bBoss);
}

unsigned long CWvsContext::GetPartyMemberID(long arg0)
{
    if (!m_nPartyID)
    {
        return 0;
    }
    return m_party.party.adwCharacterID[arg0];
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CWvsContext::IsPartyMemberOnline(long arg0)
{
    //TODO
    return m_party.adwFieldID[arg0] > 0;
}

int32_t CWvsContext::IsPartyMemberOnlineInSameChannel(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CWvsContext::GetPartyMemberNumber()
{
    if (!m_nPartyID)
    {
        return 0;
    }
    auto& ids = m_party.party.adwCharacterID;
    return std::count_if(ids.begin(), ids.end(), [](auto& id) { return id; });
}

void CWvsContext::GetOnlinePartyMemberID(ZArray<unsigned long>& arg0)
{
    if (!arg0.IsEmpty())
        arg0.RemoveAll();

    if (!m_nPartyID)
        return;

    for (auto i = 0; i < 6; ++i)
    {
        auto chId = m_party.party.anChannelID[i];
        auto charId = m_party.party.adwCharacterID[i];
        //TODO might be wrgon to check only channel
        if (charId != m_dwCharacterId && chId > 0)
        {
            arg0.Insert(charId);
        }
    }
}

int32_t CWvsContext::GetPartyTownPortal(long nIdx, PARTYDATA::TOWNPORTAL& pt)
{
    if (m_nPartyID == 0)
    {
        pt = m_townPortal;
        return 1;
    }

    if (m_party.adwFieldID[nIdx] == 0)
    {
        return 0;
    }

    pt = m_party.aTownPortal[nIdx];
    return 1;
    //return __sub_0060FC60(this, nullptr, nIdx, pt);
}

void CWvsContext::GetMyTownPortal(PARTYDATA::TOWNPORTAL& pt)
{
    pt = m_townPortal;
}

unsigned long CWvsContext::GetPartyMemberByName(ZXString<char> sName)
{
    return __sub_0060B9F0(this, nullptr, CreateNakedParam(sName));
}

unsigned long CWvsContext::FindUser(unsigned long dwMemberID)
{
    return __sub_0060FBE0(this, nullptr, dwMemberID);
}

int32_t CWvsContext::IsPartyMemberID(unsigned long dwMemberID)
{
    return __sub_0060FCF0(this, nullptr, dwMemberID);
}

int32_t CWvsContext::AmIPartyBoss()
{
    return GetPartyBossID() == m_dwCharacterId;
}

unsigned long CWvsContext::GetPartyBossID() const
{
    if (m_nPartyID)
    {
        return 0;
    }
    return m_party.party.dwPartyBossCharacterID;
    //return __sub_003F6AB0(this, nullptr);
}

void CWvsContext::SetPartySerachSetting(PARTYSERACH_SETTING arg0)
{
    m_PartySearch_Setting = arg0;
}

void CWvsContext::SetPartySearchState(long arg0)
{
    m_nPartySearch_State = arg0;
}

PARTYSERACH_SETTING CWvsContext::GetPartySerachSetting()
{
    return m_PartySearch_Setting;
}

long CWvsContext::GetPartySearchState() const
{
    return m_nPartySearch_State;
}

void CWvsContext::ClearPartySearchSetting()
{
    m_PartySearch_Setting = {};
}

void CWvsContext::SetKeepPartySearch()
{
    m_bKeep_PartySearch = true;
}

void CWvsContext::StartPartyMemberSearch()
{
    auto ptSearch = CUIPartySearch::GetInstance();
    if (!ptSearch)
    {
        m_nPartySearch_State = 1;
        ShowPartySearch_Remocon_Searching();
        auto& setting = m_PartySearch_Setting;
        SendPartyWanted(setting.nMin_Level, setting.nMax_Level, setting.nNumOf_PartyMember, setting.dwSearchingJob);
        return;
    }
    ptSearch->StartSearch();
    //__sub_005DAB40(this, nullptr);
}

void CWvsContext::HoldPartyMemberSearch()
{
    auto ptSearch = CUIPartySearch::GetInstance();
    if (!ptSearch)
    {
        m_nPartySearch_State = 2;
        ShowPartySearch_Remocon_Holding();
        SendCancelPartyWanted();
        return;
    }
    ptSearch->HoldSearch();
    //__sub_005DAB90(this, nullptr);
}

void CWvsContext::StopPartySearch()
{
    auto ptSearch = CUIPartySearch::GetInstance();
    if (!ptSearch)
    {
        ClearPartySearchSetting();
        m_nPartySearch_State = 0;
        ClosePartySearch_Remocon();
        SendCancelPartyWanted();
        return;
    }
    ptSearch->StopSearch();
    //__sub_005D6B80(this, nullptr);
}

_x_com_ptr<IWzGr2DLayer> CWvsContext::GetPartySearch_Remocon_Layer()
{
    return m_pPartySearchLayer_Searching;
    //return __sub_004170D0(this, nullptr);
}

void CWvsContext::LoadPartySearch_Remocon_Layer()
{
    __sub_005E1B50(this, nullptr);
}

void CWvsContext::ShowPartySearch_Remocon_Layer(long nState, int32_t bFade)
{
    __sub_005CFB40(this, nullptr, nState, bFade);
}

void CWvsContext::ShowPartySearch_Remocon_Searching()
{
    __sub_005DA9A0(this, nullptr);
}

void CWvsContext::ShowPartySearch_Remocon_Holding()
{
    __sub_005DAA70(this, nullptr);
}

void CWvsContext::ClosePartySearch_Remocon()
{
    __sub_005D68A0(this, nullptr);
}

long CWvsContext::GetGuildID() const
{
    return m_guild.nGuildID;
}

ZXString<char> CWvsContext::GetGuildName() const
{
    return m_guild.sGuildName;
}

long CWvsContext::GetGuildMaxMemberNum() const
{
    return m_guild.nMaxMemberNum;
}

long CWvsContext::GetGuildMemberNum() const
{
    return (long)m_guild.adwCharacterID.GetCount();
}

void CWvsContext::GetGuildMemberDataByIdx(long nIdx, long& nCharacterID, GUILDMEMBER& gm)
{
    //__sub_0060B2B0(this, nullptr, nIdx, nCharacterID, gm);
    nCharacterID = (long)m_guild.adwCharacterID[nIdx];
    gm = m_guild.aMemberData[nIdx];
}

unsigned long CWvsContext::GetGuildMemberIDByID(long charId)
{
    auto pos = m_guild.FindIndex(charId);
    if (pos == -1)
    {
        return 0;
    }

    return pos;
}

int32_t CWvsContext::GetGuildMemberNameByID(unsigned long dwCharacterID, ZXString<char>& sCharacterName)
{
    return __sub_0060BAE0(this, nullptr, dwCharacterID, sCharacterName);
}

void CWvsContext::GetOnlineGuildMemberID(ZArray<unsigned long>& adwGuildMemberID)
{
    __sub_0060BB90(this, nullptr, adwGuildMemberID);
}

unsigned long CWvsContext::GetGuildMemberIDByName(ZXString<char> sName)
{
    return __sub_0060B9F0(this, nullptr, CreateNakedParam(sName));
}

ZXString<char> CWvsContext::GetGuildGradeName(long nIndex)
{
    if (m_guild.nGuildID)
    {
        if (m_guild.asGradeName.GetCount() >= nIndex)
        {
            return m_guild.asGradeName[nIndex - 1];
        }
    }
    return ZXString<char>();
    // return __sub_005DF440(this, nullptr, nIndex);
}

int32_t CWvsContext::AmIGuildMaster()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CWvsContext::GetGuildMemberGrade(unsigned long dwCharacterID)
{
    return __sub_0012C6D0(this, nullptr, dwCharacterID);
}

long CWvsContext::GetGuildMaxGradeNum()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CWvsContext::IsGuildMemberExist(long nPsdNo)
{
    /*if (m_guild.nGuildID) {
        return 1;
    }
    m_guild.FindIndex()*/
    return __sub_005CC9F0(this, nullptr, nPsdNo);
}

void CWvsContext::GuildNPCSay(ZArray<ZXString<char>>& asSay, long dwGuildNpcTemplateID)
{
    __sub_0060BD90(this, nullptr, asSay, dwGuildNpcTemplateID);
}

uint16_t CWvsContext::GetGuildMark()
{
    return m_guild.nMark;
}

unsigned char CWvsContext::GetGuildMarkColor()
{
    return m_guild.nMarkColor;
}

uint16_t CWvsContext::GetGuildMarkBg() const
{
    return m_guild.nMarkBg;
}

unsigned char CWvsContext::GetGuildMarkBgColor() const
{
    return m_guild.nMarkBgColor;
}

long CWvsContext::GetGuildSkillLevel(long skillId)
{
    return m_guild.GetGuildSkillLevel(skillId);
    //return __sub_005F3E10(this, nullptr, nItemID);
}

ZXString<char> CWvsContext::GetGuildSkillBuyer(long nIndex)
{
    return m_guild.GetGuildSkillBuyer(nIndex);
}

ZArray<long> CWvsContext::GetGuildSkillArray() const
{
    return m_guild.aSkillRecordOnlyID;
}

_x_com_ptr<IWzCanvas>
CWvsContext::GetGuildMarkCanvas(uint16_t arg0, unsigned char arg1, uint16_t arg2, unsigned char arg3)
{
    _x_com_ptr<IWzCanvas> ret;
    return *__sub_0060C2C0(this, nullptr, &ret, arg0, arg1, arg2, arg3);
}

ZXString<char> CWvsContext::GetGuildNotice() const
{
    return m_guild.sNotice;
}

long CWvsContext::GetGuildPoint() const
{
    return m_guild.nPoint;
}

ZXString<char> CWvsContext::GetAllianceName() const
{
    return m_alliance.sAllianceName;
}

ZXString<char> CWvsContext::GetAllianceNotice() const
{
    return m_alliance.sNotice;
}

ZXString16 CWvsContext::GetGuildBoardAuthKey()
{
    return m_sGuildBoardAuthkey;
}

unsigned long CWvsContext::GetGuildBoardAuthKeyLastUpdated() const
{
    return m_dwGuildBoardAuthkeyLastUpdated;
}

long CWvsContext::GetGuildAllianceID() const
{
    return m_alliance.nAllianceID;
}

ZXString<char> CWvsContext::GetAllianceGradeName(long nIndex)
{
    if (m_alliance.nAllianceID)
    {
        if (m_alliance.asGradeName.GetCount() >= nIndex)
        {
            return m_alliance.asGradeName[nIndex - 1];
        }
    }
    return {};
    //return __sub_005DF440(this, nullptr, nIndex);
}

long CWvsContext::GetAllianceMemberNum()
{
    return m_AllianceMember.GetCount();
}

long CWvsContext::GetAllianceMemberNumMax() const
{
    return m_alliance.nMaxMemberNum;
}

GUILDDATA& CWvsContext::GetAllianceMemberByIdx(long arg0)
{
    return m_AllianceMember[arg0];
}

void CWvsContext::GetOnlineAllianceMemberID(ZArray<unsigned long>& adwAllianceMemberID)
{
    __sub_0060BC10(this, nullptr, adwAllianceMemberID);
}

int32_t CWvsContext::AmIAllianceMaster()
{
    return __sub_005FA230(this, nullptr);
}

int32_t CWvsContext::AmIAllianceSubMaster()
{
    return __sub_005FA230(this, nullptr);
}

long CWvsContext::GetAllianceMemberGrade(unsigned long dwCharacterID)
{
    return __sub_0012C6D0(this, nullptr, dwCharacterID);
}

int32_t CWvsContext::IsAllianceMemberExist(long nPsdNo)
{
    return __sub_005CC9F0(this, nullptr, nPsdNo);
}

long CWvsContext::GetAllianceMaxGradeNum()
{
    if (m_guild.nAllianceID == 0)
    {
        return 0;
    }

    //TODO

    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::UpdateAllianceMemberInfo(GUILDDATA& gd)
{
    __sub_0060EEB0(this, nullptr, gd);
}

void CWvsContext::GetOnlineExpeditionMemberID(ZArray<unsigned long>& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZXString16 CWvsContext::GetConsultAuthKey()
{
    return m_sConsultAuthkey;
}

unsigned long CWvsContext::GetConsultAuthKeyLastUpdated()
{
    return m_dwConsultAuthkeyLastUpdated;
}

ZXString16 CWvsContext::GetClassCompetitionAuthKey()
{
    return m_sClassCompetitionAuthkey;
}

unsigned long CWvsContext::GetClassCompetitionAuthKeyLastUpdated()
{
    return m_dwClassCompetitionAuthkeyLastUpdated;
}

ZXString16 CWvsContext::GetWebBoardAuthKey(long nType)
{
    if (nType < m_sWebBoardAuthKey.size())
    {
        return m_sWebBoardAuthKey[nType];
    }
    return ZXString16{};
    //return __sub_004DCCF0(this, nullptr, nType);
}

unsigned long CWvsContext::GetWebBoardAuthKeyLastUpdated(long arg0)
{
    return m_dwWebBoardAuthkeyLastUpdated[arg0];
}

void CWvsContext::SetDirectionMode(int32_t arg0)
{
    m_bDirectionMode = arg0;
}

int32_t CWvsContext::GetDirectionMode()
{
    return m_bDirectionMode;
    //return __sub_005FA230(this, nullptr);
}

void CWvsContext::SetStandAloneMode(int32_t arg0)
{
    m_bStandAloneMode = arg0;
}

int32_t CWvsContext::GetStandAloneMode()
{
    //return __sub_005FA230(this, nullptr);
    return m_bStandAloneMode;
}

_x_com_ptr<IWzCanvas> CWvsContext::GetBattleTeamMarkCanvas(long nTeamCategory)
{
    _x_com_ptr<IWzCanvas> ret;
    return *__sub_0060CC00(this, nullptr, &ret, nTeamCategory);
}

void CWvsContext::LoadFriend()
{
    COutPacket pkt(Cp::Friendrequest);
    pkt.Encode1(1);
    SendPacket(pkt);
}

void CWvsContext::CheckReqFriend()
{
    if (IsFadeWndExist(1, 0, {}))
        return;

    for (auto i = 0; i < m_pFriendArray->m_aFriend.GetCount(); ++i)
    {
        m_pFriendArray->IsDataTwisted();
        auto& frd = m_pFriendArray->m_aFriend[i];

        if (frd.nFlag == 1)
        {
            auto fade = new CUIFadeYesNo();
            fade->CreateFriendReg(ZXString<char>(frd.sFriendName.data()), 0, 0, frd.dwFriendID);
            SetNewFadeWnd(fade);
        }
    }
}

long CWvsContext::GetFriendCount()
{
    return m_pFriendArray->m_aFriend.GetCount();
}

void CWvsContext::GetFriendByID(unsigned long dwFriendID, GW_Friend* f)
{
    __sub_00612220(this, nullptr, dwFriendID, f);
}

void CWvsContext::GetFriendByName(ZXString<char> sFriendName, GW_Friend* f)
{
    __sub_00612260(this, nullptr, CreateNakedParam(sFriendName), f);
}

void CWvsContext::GetOnlineFriendID(ZArray<unsigned long>& arg0)
{
    arg0.RemoveAll();

    int i = 0;
    for (auto& frnd : m_pFriendArray->m_aFriend)
    {
        if (is_online(frnd, m_pFriendArray->m_aListenBlocked[i]))
        {
            arg0.Insert(frnd.dwFriendID);
        }

        ++i;
    }
}

void CWvsContext::GetOnlineFriendIDByGroup(ZXString<char> sGroupName, ZArray<unsigned long>& adwFriendMemberID)
{
    __sub_00610410(this, nullptr, CreateNakedParam(sGroupName), adwFriendMemberID);
}

const GW_Friend& CWvsContext::GetFriendByIdx(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const GW_Friend& CWvsContext::GetFriendByGroup(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::GetFriendGroups(ZArray<ZXString<char>>& aGroups)
{
    __sub_00612340(this, nullptr, aGroups);
}

int32_t CWvsContext::IsFriendInShop(long nPsdNo)
{
    return __sub_005CC9F0(this, nullptr, nPsdNo);
}

int32_t CWvsContext::IsBlockedFriend(long nIdx, long nFlag)
{
    return __sub_00610500(this, nullptr, nIdx, nFlag);
}

int32_t CWvsContext::ChangeBlockOption(unsigned long dwFriendID, long nFlag, int32_t bBlocked)
{
    return __sub_00612570(this, nullptr, dwFriendID, nFlag, bBlocked);
}

unsigned long CWvsContext::GetMarriedPartnerCurFieldID()
{
    return m_dwMarriedPartnerCurFieldID;
}

long CWvsContext::GetMarriedPartnerID()
{
    return m_nMarriedPartnerID;
}

void CWvsContext::SetClaimSvrAvailableTime(unsigned char openTime, unsigned char closeTime)
{
    m_nClaimSvrOpenTime = openTime;
    m_nClaimSvrCloseTime = closeTime;
}

int32_t CWvsContext::IsClaimSvrConnected() const
{
    return m_bClaimSvrConnected;
}

long CWvsContext::IsExist(long nItemID)
{
    return __sub_005F3150(this, nullptr, nItemID);
}

void CWvsContext::SetUserLoadCompleted()
{
    m_bFirstUserLoad = false;
}

int32_t CWvsContext::IsFirstUserLoad()
{
    return m_bFirstUserLoad;
}

int32_t CWvsContext::LoadCommodity()
{
    return __sub_005FA230(this, nullptr);
}

void CWvsContext::SortCommodity()
{
    ZSort(m_aCommodity, SnLessFunc{});
}

void CWvsContext::MakeOriginalSN(ZMap<long, long, long>& mSN_OriginalSN)
{
    __sub_00606DE0(this, nullptr, mSN_OriginalSN);
}

int32_t CWvsContext::LoadPackageOriginalSN(const ZMap<long, long, long>& mSN_OriginalSN)
{
    return __sub_005F6F00(this, nullptr, mSN_OriginalSN);
}

void CWvsContext::SetSaleInfo(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const ZRef<CS_COMMODITY> CWvsContext::GetCommodityBySN(long nCommSN)
{
    return __sub_00605BD0(this, nullptr, nCommSN);
}

const ZRef<CS_COMMODITY> CWvsContext::GetCommodityByIndex(long nCommSN)
{
    return m_aCommodity[nCommSN];
    //return __sub_00605BD0(this, nullptr, nCommSN);
}

int32_t CWvsContext::IsValidCommodity(long nItemId)
{
    //return __sub_005CC9F0(this, nullptr, nPsdNo);
    auto cd = GetCharacterData();
    auto job = cd->characterStat._ZtlSecureGet_nJob();
    return is_matched_itemid_job(nItemId, job);
}

void CWvsContext::LoadAreaCode()
{
    auto& rm = get_rm();
    auto& sp = StringPool::GetInstance();

    auto prop = rm->GetObjectT<IWzProperty>(sp.GetBSTR(0xBD6));
    IUnknown* enm;
    //TODO(game) might need to free
    Z_CHECK_HR(prop->Get__NewEnum(&enm));
    _x_com_ptr<IEnumVARIANT> enumVar((IEnumVARIANT*)enm);
    while (true)
    {
        Ztl_variant_t name;
        ULONG fetched = 0;
        if (enumVar->Next(1, &name, &fetched))
        {
            break;
        }

        auto sName = DetachBSTR(name);
        auto item = prop->Getitem(sName);
        auto category = get_int32(item, 0);

        auto num = _wtoi(sName);
        ms_mAreaCode.Insert(num, category);
    }
}

ZArray<ZRef<CS_COMMODITY>>& CWvsContext::GetCommodity()
{
    return m_aCommodity;
}

ZArray<CS_LIMITGOODS>& CWvsContext::GetLimitGoods()
{
    return m_aLimitGoods;
}

void CWvsContext::SetPresentInfo(long nCommSN, ZXString<char> sGiveTo)
{
    m_nCommSN = nCommSN;
    m_sGiveTo = sGiveTo;
    //__sub_004AD210(this, nullptr, nCommSN, CreateNakedParam(sGiveTo));
}

void CWvsContext::GetPresentInfo(long& arg0, ZXString<char>& arg1)
{
    arg0 = m_nCommSN;
    arg1 = m_sGiveTo;
}

int32_t CWvsContext::GetMigrateFromWishItem()
{
    //return __sub_005FA230(this, nullptr);
    UNIMPLEMENTED;
}

int32_t CWvsContext::CanSendExclRequest(long tTimeInterval, int32_t bIgnoreDeadState)
{
    //return __sub_0009C980(this, nullptr, tTimeInterval, bIgnoreDeadState);
    return !m_bExclRequestSent && (bIgnoreDeadState || m_pCharacterData->characterStat._ZtlSecureGet_nHP() > 0)
        && get_update_time() - m_tExclRequestSent >= tTimeInterval;
}

int32_t CWvsContext::CanSendExclRequestQ(long arg0, int32_t arg1, int32_t arg2)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::SetExclRequestSent(int32_t arg0)
{
    m_bExclRequestSent = arg0;
    m_tExclRequestSent = get_update_time();
}

void CWvsContext::SetExclRequestSentQ(int32_t arg0, int32_t arg1)
{
    m_tExclRequestSentQ = {arg0, arg1};
}

int32_t CWvsContext::IsAbleToConsume(long nItemID, int32_t bShowChatLog)
{
    //return __sub_005DA770(this, nullptr, nItemID, bShowChatLog);
    auto itemInfo = CItemInfo::GetInstance();
    auto check = itemInfo->CheckUseRequirement(nItemID, 0);
    if (bShowChatLog)
    {
        auto v5 = check - 2;
        auto& sp = StringPool::GetInstance();
        if (v5)
        {
            if (v5 != 1)
                return check == 0;;
            auto msg = sp.GetString(0x1573);
            CHATLOG_ADD(msg, 0xCu);
        }
        else
        {
            auto msg = sp.GetString(0xC96u);
            CHATLOG_ADD(msg, 0xCu);
        }
    }

    return check == 0;
}

void CWvsContext::SetExclRequestSentTime(long arg0)
{
    m_tExclRequestSent = arg0;
}

void CWvsContext::SendGatherItemRequest(long nType)
{
    __sub_005D5B70(this, nullptr, nType);
}

void CWvsContext::SendSortItemRequest(long nType)
{
    __sub_005D5C60(this, nullptr, nType);
}

void CWvsContext::SendChangeSlotPositionRequest(long nType, long nOldPos, long nNewPos, long nCount)
{
    __sub_005D9C10(this, nullptr, nType, nOldPos, nNewPos, nCount);
}

void CWvsContext::SendDropPickUpRequest(const tagPOINT& pt, unsigned long dwDropID, unsigned long dwCliCrc)
{
    __sub_005D5D50(this, nullptr, pt, dwDropID, dwCliCrc);
}

void CWvsContext::SendItemReleaseRequest(long nUPOS, long nEPOS)
{
    __sub_005D5F10(this, nullptr, nUPOS, nEPOS);
}

void CWvsContext::SendUpgradeItemUseRequest(long nUPOS, long nEPOS, int32_t bWhiteScroll, int32_t bEnchantSkill)
{
    __sub_005D6260(this, nullptr, nUPOS, nEPOS, bWhiteScroll, bEnchantSkill);
}

void CWvsContext::SendHyperUpgradeItemUseRequest(long nUPOS, long nEPOS, int32_t bEnchantSkill)
{
    __sub_005D6130(this, nullptr, nUPOS, nEPOS, bEnchantSkill);
}

void CWvsContext::SendItemOptionUpgradeItemUseRequest(long nUPOS, long nEPOS, int32_t bEnchantSkill)
{
    __sub_005D6000(this, nullptr, nUPOS, nEPOS, bEnchantSkill);
}

void CWvsContext::SendStatChangeItemUseRequest(long nPOS, long nItemID)
{
    __sub_005DDFE0(this, nullptr, nPOS, nItemID);
}

void
CWvsContext::SendStatChangeItemUseRequestByPetQ(_LARGE_INTEGER liPetSN, long nPOS, long nItemID, int32_t bConsumeMP,
                                                unsigned char bBuffSkill, int32_t nIndex)
{
    __sub_005DE400(this, nullptr, liPetSN, nPOS, nItemID, bConsumeMP, bBuffSkill, nIndex);
}

void CWvsContext::SendStatChangeItemCancelRequest(long nItemID)
{
    __sub_005D9DD0(this, nullptr, nItemID);
}

void CWvsContext::SendMobSummonItemUseRequest(long nPOS, long nItemID)
{
    __sub_005DE580(this, nullptr, nPOS, nItemID);
}

void CWvsContext::SendPetFoodItemUseRequest(long nPOS, long nItemID)
{
    __sub_005D9F20(this, nullptr, nPOS, nItemID);
}

void CWvsContext::SendMapleTvItemUseRequest(long arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::SendTamingMobFoodItemUseRequest(long nPOS, long nItemID)
{
    __sub_005D63A0(this, nullptr, nPOS, nItemID);
}

void CWvsContext::SendScriptRunItemRequest(long nPOS, long nItemID)
{
    __sub_005DE7A0(this, nullptr, nPOS, nItemID);
}

void CWvsContext::SendConsumeCashItemUseRequest(long nPOS, long nItemID, long nEPOS, ZXString<char> sDefaultValue)
{
    __sub_005EB3E0(this, nullptr, nPOS, nItemID, nEPOS, CreateNakedParam(sDefaultValue));
}

void CWvsContext::SendDragonBallBoxRequest()
{
    __sub_005D73D0(this, nullptr);
}

void CWvsContext::SendDragonBallSummonRequest()
{
    __sub_005D7440(this, nullptr);
}

void CWvsContext::SendSitOnPortableChairRequest(long nPOS, long nItemID)
{
    __sub_005DA100(this, nullptr, nPOS, nItemID);
}

void CWvsContext::SendGetUpFromChairRequest(long tTimeInterval)
{
    __sub_005D6740(this, nullptr, tTimeInterval);
}

void CWvsContext::SendCreateMessageBoxRequest(long arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::SendCreateMiniGameRequest(long arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::SendEtcCashItemUseRequest(long arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::SendCashSlotItemUseRequest(long nPOS, long nItemID, _LARGE_INTEGER liCashItemSN)
{
    __sub_005FC4B0(this, nullptr, nPOS, nItemID, liCashItemSN);
}

void CWvsContext::SendUIOpenItemRequest(long nPOS, long nItemID)
{
    __sub_005D64D0(this, nullptr, nPOS, nItemID);
}

void CWvsContext::SendOpenShopRequest(long arg0, long arg1, int32_t arg2)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::SendAbilityUpRequest(const ZArray<StatPair>& aStatUp)
{
    __sub_005F63B0(this, nullptr, aStatUp);
}

void CWvsContext::SendAbilityUpRequest(unsigned long dwFlag)
{
    __sub_005F61C0(this, nullptr, dwFlag);
}

void CWvsContext::SendSkillUpRequest(long arg0)
{
    if (CanSendExclRequest())
    {
        COutPacket pkt(Cp::Userskilluprequest);
        pkt.Encode4(get_update_time());
        pkt.Encode4(arg0);
        SendPacket(pkt);

        SetExclRequestSent(true);
    }
}

void CWvsContext::SendStatChangeRequest(long nHP, long nMP, long nOption)
{
    __sub_005F2A00(this, nullptr, nHP, nMP, nOption);
}

void CWvsContext::SendStatChangeRequestByItemOption(long arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::SendPortalScrollUseRequest(long arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::SendDropMoneyRequest(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::SendGivePopularityRequest(const char* sName, int32_t bInc)
{
    __sub_005F67E0(this, nullptr, sName, bInc);
}

void CWvsContext::SendCharacterInfoRequest(unsigned long dwCharacterID, int32_t bSelfInfoPossible, int32_t bPetInfo)
{
    __sub_005F2F70(this, nullptr, dwCharacterID, bSelfInfoPossible, bPetInfo);
}

void CWvsContext::SendActivatePetRequest(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::SendEmotionChange(long nEmotion, int32_t bByItemOption, long nDuration)
{
    __sub_005F9320(this, nullptr, nEmotion, bByItemOption, nDuration);
}

void CWvsContext::SendActiveEffectItemChange(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::SendRemoteShopOpenRequest(long nPos)
{
    if (!CUniqueModeless::GetInstance())
    {
        return;
    }

    COutPacket pkt(Cp::Userremoteshopopenrequest);
    pkt.Encode2(nPos);
    SendPacket(pkt);
}

void CWvsContext::SendHPInfoRequest(int32_t arg0, unsigned long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::SendMapTransferRequest(long nType, unsigned long dwTargetField, int32_t bCanTransferContinent)
{
    __sub_005F3B90(this, nullptr, nType, dwTargetField, bCanTransferContinent);
}

void CWvsContext::SendAntiMacroItemUseRequest(long arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::SendClaimRequest(ZArray<ZXString<char>>& asChatLog, ZXString<char> sCharacterName)
{
    __sub_00605FB0(this, nullptr, asChatLog, CreateNakedParam(sCharacterName));
}

void CWvsContext::SendEntrustedShopCheckRequest(long nPOS, long nItemID, _LARGE_INTEGER liCashItemSN)
{
    __sub_005FAB90(this, nullptr, nPOS, nItemID, liCashItemSN);
}

void CWvsContext::SendSkillLearnItemUseRequest(long nPOS, long nItemID)
{
    __sub_005D65E0(this, nullptr, nPOS, nItemID);
}

void CWvsContext::SendSkillResetItemUseRequest(long nPOS, long nItemID)
{
    __sub_005DE8C0(this, nullptr, nPOS, nItemID);
}

void CWvsContext::SendShopScannerItemUseRequest(long nPOS, long nItemID)
{
    __sub_005E10E0(this, nullptr, nPOS, nItemID);
}

void CWvsContext::SendMapTransferItemUseRequest(long nPOS, long nItemID)
{
    __sub_005E6020(this, nullptr, nPOS, nItemID);
}

void CWvsContext::SendEngagementRequest(long nPOS, long nItemID)
{
    __sub_005E1410(this, nullptr, nPOS, nItemID);
}

void CWvsContext::SendNewYearCardUseRequest(long nPOS, long nItemID)
{
    __sub_005DA380(this, nullptr, nPOS, nItemID);
}

void CWvsContext::ShowNewYearCard(long nSN)
{
    __sub_005DED00(this, nullptr, nSN);
}

void CWvsContext::SendRandomMorphOtherRequest(long nPos, long nItemID)
{
    __sub_005CCED0(this, nullptr, nPos, nItemID);
}

void CWvsContext::SendSelectNpcItemUseRequest(long nPOS, long nItemID)
{
    __sub_005DA430(this, nullptr, nPOS, nItemID);
}

void CWvsContext::SendSendInvitaionRequest(long nPos, long nItemID)
{
    __sub_005E16E0(this, nullptr, nPos, nItemID);
}

void CWvsContext::SendInvitationQuery(long nPOS, long nItemID)
{
    __sub_005DA630(this, nullptr, nPOS, nItemID);
}

void CWvsContext::SendRingDropRequest(long nItemID)
{
    __sub_005D6810(this, nullptr, nItemID);
}

void CWvsContext::SendWishListInput(ZXString<char>* asWishList, long nCount)
{
    __sub_005E19D0(this, nullptr, asWishList, nCount);
}

void CWvsContext::SendPartyWanted(unsigned long dwMinLv, unsigned long dwMaxLv, unsigned long dwCount,
                                  unsigned long dwJobFlag)
{
    __sub_00610100(this, nullptr, dwMinLv, dwMaxLv, dwCount, dwJobFlag);
}

void CWvsContext::SendCancelPartyWanted()
{
    //TODO(pktgame)
    /*COutPacket pkt(Cp::CancelInvitePartyMatch);
    CClientSocket::GetInstance()->SendPacket(pkt);*/
}

void CWvsContext::SendLotteryItemUseRequest(long nPos, long nItemID)
{
    __sub_005D6C50(this, nullptr, nPos, nItemID);
}

void CWvsContext::SendRequestSessionValue(ZXString<char> sKey, int32_t bReset)
{
    __sub_005E1A90(this, nullptr, CreateNakedParam(sKey), bReset);
}

void CWvsContext::SendWaterOfLife()
{
    SendPacket(COutPacket(Cp::Userusewateroflife));
}

void CWvsContext::SendFamilyInviteResult(ZXString<char> strInviterName, unsigned long dwInviterID, int32_t bResult)
{
    if (!IsFamilyMember())
    {
        return;
    }

    COutPacket pkt(Cp::Familyjoinresult);
    pkt.Encode4(dwInviterID);
    pkt.Encode(strInviterName);
    pkt.Encode1(bResult);
    SendPacket(pkt);
    //__sub_00609C50(this, nullptr, CreateNakedParam(strInviterName), dwInviterID, bResult);
}

void CWvsContext::SendFamilyChartRequest(ZXString<char> sUserName)
{
    __sub_005FA330(this, nullptr, CreateNakedParam(sUserName));
}

void CWvsContext::SendFamilyInfoRequest()
{
    SendPacket(COutPacket(Cp::Familyinforequest));
}

void CWvsContext::SendRegisterJunior(ZXString<char> sUserName)
{
    __sub_005FA330(this, nullptr, CreateNakedParam(sUserName));
}

void CWvsContext::SendUnregisterJunior(unsigned long dwFlag)
{
    __sub_005F61C0(this, nullptr, dwFlag);
}

void CWvsContext::SendUnregisterParent()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::SendUseFamilyPrivilege(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::SendSetFamilyPrecept(ZXString<char> sUserName)
{
    __sub_005FA330(this, nullptr, CreateNakedParam(sUserName));
}

void CWvsContext::SendFollowCharacterRequest(unsigned long dwDriverID, int32_t bAutoReq, int32_t bKeyInput)
{
    __sub_005F9530(this, nullptr, dwDriverID, bAutoReq, bKeyInput);
}

void CWvsContext::SetOldDriverID(unsigned long dwFlag)
{
    //__sub_005F61C0(this, nullptr, dwFlag);
    m_dwOldDriverID = dwFlag;
}

unsigned long CWvsContext::GetOldDriverID()
{
    return m_dwOldDriverID;
}

void CWvsContext::SendFollowCharacterWithdraw()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::SendFollowRequestApply(int32_t arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::ShowPartyInfo()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::ShowGuildInfo()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnInventoryOperation(CInPacket& pkt)
{
    if (pkt.Decode1())
    {
        SetExclRequestSent(false);
    }

    auto cd = GetCharacterData();
    ZMap<long, long, long> itemCounts;
    for (auto i = 1; i < 6; ++i)
    {
        for (auto j = 1; j < cd->GetItemSlotCount(i); ++j)
        {
            if (auto item = cd->GetItem(i, j))
            {
                auto id = item->nItemID.GetData();
                auto count = GetItemCount(id);
                itemCounts.Insert(id, count);
            }
        }
    }


    ZMap<long, long, long> oldItems1;
    ZArray<long> checkQuestEquipIds;
    auto local = CUserLocal::GetInstance();

    auto ops = pkt.Decode1();


    auto beforePos = -1;
    auto statChanged = false;
    for (auto i = 0; i < ops; ++i)
    {
        auto op = pkt.Decode1();
        auto invTy = pkt.Decode1();
        auto slot = (int16_t)pkt.Decode2();

        if (op == 0)
        {
            auto item = GW_ItemSlotBase::Decode(pkt);
            auto id = item->nItemID.GetData();
            if (slot > 0)
            {
                oldItems1.Insert(id, slot);
            }

            long pastCount = 0;
            itemCounts.GetAt(id, &pastCount);

            cd->SetItem(invTy, slot, item);
            CheckQuestCompleteByItem(id, pastCount);
            CheckInventoryOnAutoStartQuest(id, true);
        }
        else if (op == 1) // Update
        {
            auto quantity = (int16_t)pkt.Decode2();
            auto item = cd->GetItem(invTy, slot);
            auto id = item->nItemID.GetData();
            if (slot > 0)
            {
                oldItems1.Insert(id, slot);
            }
            item->SetItemNumber(quantity);

            long pastCount = 0;
            itemCounts.GetAt(id, &pastCount);

            CheckInventoryOnAutoStartQuest(id, true);
            CheckQuestCompleteByItem(id, pastCount);
        }
        else if (op == 2) // Move
        {
            auto to = (int16_t)pkt.Decode2();
            auto oldItem = cd->GetItem(invTy, slot);
            auto newItem = cd->GetItem(invTy, to);

            if (invTy == 1 && (slot < 0 || to <= 0))
                statChanged = true;

            if (newItem)
            {
                checkQuestEquipIds.Insert(newItem->nItemID.GetData());
            }

            if (oldItem)
            {
                checkQuestEquipIds.Insert(oldItem->nItemID.GetData());
            }

            if (slot > 0 || to > 0)
            {
                if (newItem && m_nLastestGetItemID == newItem->nItemID.GetData() && m_nLastestGetItemPos == to)
                {
                    oldItems1.Insert(newItem->nItemID.GetData(), to);
                    beforePos = m_nLastestGetItemPos;
                }
                else if (oldItem && m_nLastestGetItemID == oldItem->nItemID.GetData() && m_nLastestGetItemPos == slot)
                {
                    oldItems1.Insert(oldItem->nItemID.GetData(), slot);
                    beforePos = m_nLastestGetItemPos;
                }

                cd->SetItem(invTy, to, oldItem);
                cd->SetItem(invTy, slot, newItem);

                if (oldItem)
                {
                    CheckInventoryOnAutoStartQuest(oldItem->nItemID.GetData(), true);
                }
                if (newItem)
                {
                    CheckInventoryOnAutoStartQuest(newItem->nItemID.GetData(), true);
                }
            }
        }
        else if (op == 3) // Remove
        {
            auto item = cd->GetItem(invTy, slot);
            auto id = item->nItemID.GetData();

            long pastCount = 0;
            itemCounts.GetAt(id, &pastCount);
            if (slot > 0)
                oldItems1.Insert(id, slot);

            if (local && local->IsSit() && local->GetPortableChairID() == id && cd->GetItemCount(invTy, id) == 1)
            {
                SendGetUpFromChairRequest(false);
            }

            if (invTy == 1 && slot < 0)
                statChanged = true;

            checkQuestEquipIds.Insert(id);
            cd->SetItem(invTy, slot, nullptr);
            CheckInventoryOnAutoStartQuest(id, true);
            CheckQuestCompleteByItem(id, pastCount);
        }
        else if (op == 4) // Exp
        {
            auto exp = pkt.Decode4();
            cd->GetItem(invTy, slot)->SetEXP(exp);
        }

        if (i == ops - 1 && statChanged)
        {
            local->SetSecondaryStatChangedPoint(pkt.Decode1());
            for (auto& checkId : checkQuestEquipIds)
                CheckEquipOnAutoStartQuest(checkId, true);
            UpdateAutoQuestAlertIcon();
        }
    }

    ValidateStat();
    if (auto userInfo = CUIUserInfo::GetInstance())
    {
        userInfo->ResetInfo();
        userInfo->ResetInfo_TamingMob();
        userInfo->ResetInfo_Pet();
    }

    if (auto medalInfo = CUIMedalQuestInfo::GetInstance())
    {
        medalInfo->ResetWearedMedal();
    }

    auto cur = oldItems1.GetHeadPosition();
    while (cur)
    {
        long pos = 0;
        auto id = oldItems1.GetNext(cur, &pos);

        long pastCount = 0;
        itemCounts.GetAt(id, &pastCount);

        auto newCount = GetItemCount(id);

        if (pastCount < newCount)
        {
            m_nLastestGetItemID = id;
            m_nLastestGetItemPos = pos;
            if (!pastCount)
                InsertItemMsg(id);

            if (CItemInfo::GetInstance()->IsEquipItem(id))
            {
                auto item = cd->GetItem(1, pos);
                auto eq = dynamic_cast<GW_ItemSlotEquip*>(item.op_arrow());
                if (eq && eq->GetItemGrade() && !eq->IsReleased())
                {
                    auto str = _GetStr(5875);
                    CHATLOG_ADD(str, 12);
                }
            }
        }

        if (pastCount > newCount && id == m_nLastestGetItemID && pos == m_nLastestGetItemPos)
        {
            m_nLastestGetItemPos = 0;
            m_nLastestGetItemID = 0;
            if (!newCount)
                RemoveItemMsg(id);
        }

        if (pastCount && id == m_nLastestGetItemID && m_nLastestGetItemPos == beforePos && pos !=
            m_nLastestGetItemPos)
        {
            if (pos >= 0)
            {
                m_nLastestGetItemPos = pos;
                if (auto uiItem = CUIItem::GetInstance())
                {
                    //TODO uiItem->m_nLastestGetItemID = 0;
                    m_nLastestGetItemPos = 0;
                }
            }
            else
            {
                m_nLastestGetItemPos = 0;
                m_nLastestGetItemID = 0;
            }
        }
        //TODO
    }
}

void CWvsContext::OnInventoryGrow(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

bool is_jobchange_level_in_evan(short nLevel)
{
    switch (nLevel)
    {
    case 10:
    case 20:
    case 30:
    case 40:
    case 50:
    case 60:
    case 80:
    case 100:
    case 120:
    case 160:
        return true;
    default:
        return false;
    }
}

void CWvsContext::OnStatChanged(CInPacket& pkt)
{
    if (pkt.Decode1())
    {
        m_bExclRequestSent = false;
        m_tExclRequestSent = get_update_time();
    }

    auto charData = GetCharacterData();


    auto hp = charData->characterStat._ZtlSecureGet_nHP();
    auto mp = charData->characterStat._ZtlSecureGet_nMP();
    auto lvl = charData->characterStat._ZtlSecureGet_nLevel();
    charData->characterStat.DecodeChangeStat(pkt);

    auto localUser = CUserLocal::GetInstance();

    if (pkt.Decode1())
    {
        localUser->
            SetSecondaryStatChangedPoint(pkt.Decode1());
    }

    if (pkt.Decode1())
    {
        CBattleRecordMan::GetInstance()->SetBattleRecoveryInfo(
            pkt.Decode4(),
            pkt.Decode4(),
            hp,
            mp
        );
    }

    ValidateStat();
    ///TODO(game)
    /*auto newLvl = charData->characterStat._ZtlSecureGet_nLevel();
    if (newLvl > lvl && localUser)
    {
        auto job = charData->characterStat._ZtlSecureGet_nJob();
        if (job / 100 != 22 && job != 2001  || !is_jobchange_level_in_evan(job))
        {

        }
    }*/

    //TODO reset
}

void CWvsContext::OnTemporaryStatSet(CInPacket& pkt)
{
    auto skillInfo = CSkillInfo::GetInstance();
    auto oldRidingItem = m_secondaryStat.GetVechicleID();

    ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long> viewMap;

    auto flag = m_secondaryStat.DecodeForLocal(pkt, viewMap);
    auto tDelay = pkt.Decode2();
    const auto cd = GetCharacterData();
    auto job = cd->characterStat._ZtlSecureGet_nJob();
    auto& ss = m_secondaryStat;
    auto local = CUserLocal::GetInstance();

    auto viewTy = 2;
    if (flag)
    {
        bool combo = flag & CTS_COMBO_ABILITY_BUFF;
        bool notDamaged = flag & CTS_NOT_DAMAGED;
        bool aura = flag & CTS_AURA;
        if (!combo && !notDamaged && !aura)
        {
            auto cur = viewMap.GetHeadPosition();
            while (cur)
            {
                viewTy = 0;
                ZRef<SecondaryStat::VIEWELEM> viewElem{};
                auto id = viewMap.GetNext(cur, &viewElem);
                auto skill = skillInfo->GetSkill(id);

                if (skillInfo->GetSkill(id))
                {
                    viewTy = 2;
                    if (id == CORSAIR_BATTLESHIP)
                    {
                        auto slvl = skillInfo->GetSkillLevel(*cd, CORSAIR_BATTLESHIP, nullptr);
                        auto charLvl = cd->characterStat._ZtlSecureGet_nLevel();
                        auto dur = get_max_durability_of_vehicle(CORSAIR_BATTLESHIP, slvl, charLvl);
                        m_temporaryStatView.SetTemporary(2, id, dur, viewElem->uFlag, {}, 0, 0);
                    }
                    else if (id == THIEF_DARK_SIGHT)
                    {
                        auto subId = 0;
                        if (job / 10 == 43 && skillInfo->GetSkillLevel(*cd, DB4_ADVANCED_DARK_SIGHT, nullptr) > 0)
                        {
                            subId = DB4_ADVANCED_DARK_SIGHT;
                        }
                        m_temporaryStatView.SetTemporary(2, id, viewElem->tDuration, viewElem->uFlag, {}, subId, 0);
                    }
                    else if (id == MARAUDER_ROLL_OF_THE_DICE
                        || id == OUTLAW_ROLL_OF_THE_DICE
                        || id == MECH3_ROLL_OF_THE_DICE)
                    {
                        m_temporaryStatView.SetTemporary(2, id, viewElem->tDuration, viewElem->uFlag, {}, 0,
                                                         get_update_time() + 1500);
                        auto dice = m_secondaryStat._ZtlSecureGet_nDice_();
                        if (dice > 0)
                        {
                            play_skill_sound(id, dice == 1 ? SE_SKILL_USE2 : SE_SKILL_USE3, 0);
                        }
                    }
                    else
                    {
                        if (id == PALADIN_DIVINE_SHIELD)
                            play_skill_sound(PALADIN_DIVINE_SHIELD, SE_SKILL_USE, 0);

                        m_temporaryStatView.SetTemporary(viewTy, id, viewElem->tDuration,
                                                         viewElem->uFlag, {}, 0,
                                                         0);
                    }
                }
                else
                {
                    viewTy = 1;
                    m_temporaryStatView.SetTemporary(viewTy, -id, viewElem->tDuration,
                                                     viewElem->uFlag, {}, 0,
                                                     0);
                }
            }


            if (flag & CTS_RIDE_VEHICLE)
            {
                auto ridingJaguar = ss.IsWildhunterJaguarVehicle();
                if (ss.IsRidingSkillVehicle() || ss.IsEventVehicle() || ridingJaguar || ss.
                    IsMechanicVehicle() || !local->IsOnLadderOrRope())
                {
                    if ((ridingJaguar || ss.IsMechanicVehicle()) && oldRidingItem)
                    {
                        local->SetRidingVehicle(ss[3]->GetValue(), false);
                        auto vid = ridingJaguar ? 3300 : 3500;
                        auto sid = ridingJaguar ? WH1_JAGUAR_RIDER : MECH1_MECH_PROTOTYPE;

                        auto fmtStr = _GetStrW(2535);
                        auto uol = ZXString16::FromFmt(fmtStr.c_str(), vid, sid);

                        auto layer = local->GetLayerUnderFace();
                        auto og = local->GetOrigin();

                        // TODO verify
                        CAnimationDisplayer::GetInstance()->Effect_SkillUse(
                            (const wchar_t*)uol.c_str(),
                            !local->IsLeft(),
                            og,
                            {},
                            1000,
                            0x7FFFFFFF,
                            3,
                            0,
                            0,
                            false
                        );
                        uol += L"0";
                        //uol._Cat(L"0");
                        CAnimationDisplayer::GetInstance()->Effect_SkillUse(
                            uol.c_str(),
                            !local->IsLeft(),
                            og,
                            {},
                            1000,
                            0x7FFFFFFF,
                            3,
                            0,
                            0,
                            false
                        );
                    }
                    else
                    {
                        local->ShowRideVehicleEffect(ss[3]->GetValue());
                    }
                }
                else
                {
                    local->SendSkillCancelRequest(CORSAIR_BATTLESHIP);
                }
            }

            local->OnTemporaryStatChanged(flag, tDelay, false);
            if (SecondaryStat::IsMovementAffectingStat(flag))
            {
                local->SetSecondaryStatChangedPoint(pkt.Decode1());
            }

            if (flag & CTS_BARRIER)
                local->LoadBarrier();
            if (flag & CTS_GUIDED_BULLET && ss[5]->IsActivated())
            {
                if (auto bullet = ss[5])
                {
                    auto gBullet = dynamic_cast<TemporaryStat_GuidedBullet*>(bullet);
                    auto mobPool = CMobPool::GetInstance();
                    if (auto mob = mobPool->GetMob(gBullet->GetMobID()))
                    {
                        mob->SetGuided(gBullet->GetReason(), 0);
                    }
                }
            }

            if (flag & CTS_MAXHP)
            {
                if (auto party = CUIPartyHP::GetInstance())
                {
                    party->Destroy();
                    party->Create();
                }
            }
        }
    }


    CUserLocal::GetInstance()->UpdatePassiveSkillData(false);
    ValidateStat();
    if (IsCalcDamageStat(flag))
    {
        SendPacket(COutPacket(Cp::Usercalcdamagestatsetrequest));
    }
}

void CWvsContext::OnTemporaryStatReset(CInPacket& pkt)
{
    auto flag = pkt.DecodeT<MY_UINT128>();
    auto local = CUserLocal::GetInstance();
    if (flag & CTS_RIDE_VEHICLE)
    {
        local->ShowRideVehicleEffect(m_secondaryStat[3]->GetValue());
    }

    if (flag & CTS_GUIDED_BULLET && m_secondaryStat[5]->IsActivated())
    {
        CMobPool::GetInstance()->ResetGuidedMob(m_secondaryStat[5]->GetReason(), m_secondaryStat[5]->GetValue());
    }

    local->OnTemporaryStatChanged(flag, 0, false);

    m_secondaryStat.Reset(flag);
    if (SecondaryStat::IsMovementAffectingStat(flag))
    {
        local->SetSecondaryStatChangedPoint(pkt.Decode1());
    }

    m_temporaryStatView.ResetTemporary(0, 0, flag);
    if (flag & CTS_BARRIER)
        local->RemoveBarrier();
    local->UpdatePassiveSkillData(false);
    ValidateStat();
    if (IsCalcDamageStat(flag))
    {
        SendPacket(COutPacket(Cp::Usercalcdamagestatsetrequest));
    }
}

void CWvsContext::OnForcedStatSet(CInPacket& arg0)
{
    m_forcedStat.Decode(arg0);
    ValidateStat();
}

void CWvsContext::OnForcedStatReset(CInPacket& arg0)
{
    m_forcedStat.Clear();
    ValidateStat();
}

void CWvsContext::OnChangeSkillRecordResult(CInPacket& pkt)
{
    if (pkt.Decode1())
    {
        SetExclRequestSent(0);
    }


    auto local = CUserLocal::GetInstance();
    auto cd = GetCharacterData();
    auto len = pkt.Decode2();
    for (auto i = 0; i < len; ++i)
    {
        auto skillId = pkt.Decode4();
        auto lvl = (int)pkt.Decode4(); //TODO verify
        if (lvl >= 0)
            cd->mSkillRecord.Insert(skillId, lvl);
        else
            cd->mSkillRecord.RemoveKey(skillId);
        auto masteryLevel = pkt.Decode4();
        if (is_skill_need_master_level(skillId))
            cd->mSkillMasterLev.Insert(skillId, masteryLevel);
        FILETIME ft{};
        pkt.DecodeBuffer(&ft, 8);
        cd->mSkillExpired.Insert(skillId, ft);
    }


    local->SetSecondaryStatChangedPoint(pkt.Decode1());
    local->UpdatePassiveSkillData(false);
    ValidateStat();
    CSequencedKeyMan::GetInstance()->Restore();
}

void CWvsContext::OnSkillUseResult(CInPacket& arg0)
{
    SetExclRequestSent(false);
    arg0.Decode1();
}

void CWvsContext::OnGivePopularityResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnDropPickUpMessage(CInPacket& arg0)
{
    //TODO(game)
    spdlog::info("Drop pickup msg");
}

void CWvsContext::OnQuestRecordMessage(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnQuestRecordExMessage(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnCashItemExpireMessage(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnGeneralItemExpireMessage(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnItemProtectExpireMessage(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnItemExpireReplaceMessage(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnSkillExpireMessage(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnSystemMessage(CInPacket& arg0)
{
    auto msg = arg0.DecodeStr();
    if (!msg.IsEmpty())
    {
        if (auto statusBar = CUIStatusBar::GetInstance())
            statusBar->ChatLogAdd(msg.c_str(), 12, -1, false, {});
    }
}

void CWvsContext::OnIncEXPMessage(CInPacket& pkt)
{
    auto color = pkt.Decode1();
    auto exp = pkt.Decode4();
    spdlog::info("Got exp: {}", exp);
    //TODO
}

void CWvsContext::OnIncSPMessage(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnIncPOPMessage(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnIncMoneyMessage(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnIncGPMessage(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnGiveBuffMessage(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnUpgradeItemResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnCharacterInfo(CInPacket& pkt)
{
    m_bExclRequestSent = false;
    auto updateTime = get_update_time();
    m_tExclRequestSent = updateTime;

    auto charId = pkt.Decode4();
    auto remoteUser = CUserPool::GetInstance()->GetRemoteUser(charId);

    if (!remoteUser)
    {
        return;
    }

    auto lvl = pkt.Decode1();
    auto job = pkt.Decode2();
    auto pop = pkt.Decode2();
    auto married = pkt.Decode1();
    auto community = pkt.DecodeStr();
    auto alliance = pkt.DecodeStr();

    auto f1 = pkt.Decode1();
    auto hasPet = pkt.Decode1();


    m_pUIUserInfo = 0;
    UI_Open(10, -1);

    if (auto userInfo = CUIUserInfo::GetInstance())
    {
        userInfo->SetUserInfo(
            charId, remoteUser->GetCharacterName(), lvl, job, pop, community.c_str(), alliance.c_str(), hasPet,
            married);

        auto avatar = userInfo->SetAvatarInfo(remoteUser->GetAvatarLook());
        userInfo->SetMultiPetInfo(hasPet, pkt);

        if (pkt.Decode1())
        {
            auto tmLvl = pkt.Decode4();
            auto tmExp = pkt.Decode4();
            auto tmFat = pkt.Decode4();
            if (!f1 || !hasPet)
            {
                if (avatar)
                    userInfo->SetTamingMobInfo(tmLvl, tmExp, tmFat);
            }
        }

        if (auto wishItems = pkt.Decode1())
        {
            ZArray<long> aWishItems;
            aWishItems.ReAlloc(wishItems, 0, ZAllocHelper(1));
            pkt.DecodeBuffer(aWishItems.GetData_(), sizeof(long) * wishItems);
            userInfo->SetWishItemInfo(aWishItems);
        }

        ZRef<MedalAchievementInfo> medalInfo(new MedalAchievementInfo(), true);
        medalInfo->Decode(pkt);
        userInfo->SetMedalAchievementInfo(medalInfo);

        auto chairItems = pkt.Decode4();
        ZArray<long> chairs;
        if (chairItems)
        {
            chairs.ReAlloc(chairItems, 0, ZAllocHelper(1));
            pkt.DecodeBuffer(chairs.GetData_(), sizeof(long) * chairItems);
        }
        userInfo->SetChairItemInfo(chairs);
    }
}

void CWvsContext::OnPartyResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnExpedtionResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnGuildResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnAllianceResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnFriendResult(CInPacket& arg0)
{
    // TODO: No module found for method
    //TODO(game) UNIMPLEMENTED;
}

void CWvsContext::OnTownPortal(CInPacket& pkt)
{
    spdlog::info("On town portal...");
    //TODO
    auto townId = pkt.Decode4();
    auto fieldId = pkt.Decode4();
    tagPOINT pt{};
    auto skillId = 0;


    if (townId != 999999999 && fieldId != 999999999)
    {
        skillId = pkt.Decode4();
        pt = pkt.DecodePoint32();
    }


    m_townPortal.Set(townId, fieldId, skillId, pt);
    if (const auto field = get_field())
    {
        field->OnTownPortalChanged(this->m_nPartyID != 0, this->m_party, this->m_townPortal, 1);
    }
}

void CWvsContext::OnOpenGate(CInPacket& pkt)
{
    auto pt = pkt.DecodePoint16();
    if (auto field = get_field())
    {
        field->OnOpenGate();
    }
}

void CWvsContext::OnBroadcastMsg(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnRevive()
{
    m_secondaryStat.Clear();
    m_secondaryStat.SetFrom(
        *m_pCharacterData.op_arrow(),
        m_basicStat,
        m_forcedStat,
        m_aRealEquip.data(),
        m_aRealEquip2.data(),
        m_aRealDragonEquip.data(),
        m_aRealMechanicEquip.data());
    m_temporaryStatView.Clear();
}

void CWvsContext::OnAntiMacroResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnInitialQuiz(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnInitialSpeedQuiz(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnQuestClear(CInPacket& pkt)
{
    auto qid = pkt.Decode2();
    if (!IsFadeWndExist(7, 0, {}))
    {
        auto wnd = new CUIFadeYesNo();
        wnd->CreateQuestClear(qid);
        SetNewFadeWnd(wnd);
    }
}

void CWvsContext::OnQuestProgressUpdated(uint16_t usQuestID, long nItemID, ZXString<char> sOldInfo)
{
    __sub_005FA500(this, nullptr, usQuestID, nItemID, CreateNakedParam(sOldInfo));
}

void CWvsContext::OnClaimResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnClaimSvrStatusChanged(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnSetClaimSvrAvailableTime(CInPacket& arg0)
{
    m_nClaimSvrOpenTime = arg0.Decode1();
    m_nClaimSvrCloseTime = arg0.Decode1();
}

void CWvsContext::OnSetTamingMobInfo(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnShopPacket(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnEntrustedShopCheckResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnIncubatorResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnShopScannerResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnShopLinkResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnMarriageRequest(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnMarriageResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnWeddingGiftResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnCashPetFoodResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnSkillLearnItemResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnSkillResetItemResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnGatherItemResult(CInPacket& arg0)
{
    arg0.Decode1();
    auto v2 = arg0.Decode1();
    if ( auto uiItem = TSingleton<CUIItem>::ms_pInstance )
        uiItem->SetArrangeButton(v2, 1);
}

void CWvsContext::OnSortItemResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnTradeMoneyLimit(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnSetGender(CInPacket& arg0)
{
    m_nGender = arg0.Decode1();
}

void CWvsContext::OnSetWeekEventMessage(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnSetPotionDiscountRate(CInPacket& arg0)
{
    m_nPotionDiscountRate = arg0.Decode1();
}

void CWvsContext::OnNotifyMarriedPartnerMapTransfer(CInPacket& iPacket)
{
    __sub_005CFB00(this, nullptr, iPacket);
}

void CWvsContext::OnImitatedNPCResult(CInPacket& iPacket)
{
    __sub_005CFB30(this, nullptr, iPacket);
}

void CWvsContext::OnImitatedNPCData(CInPacket& iPacket)
{
    __sub_005CCDF0(this, nullptr, iPacket);
}

void CWvsContext::OnLimitedNPCDisableInfo(CInPacket& iPacket)
{
    __sub_005CCE10(this, nullptr, iPacket);
}

void CWvsContext::OnGuildBBSPacket(CInPacket& iPacket)
{
    __sub_005CCF20(this, nullptr, iPacket);
}

void CWvsContext::OnMacroSysDataInit(CInPacket& arg0)
{
    auto macroMan = CMacroSysMan::GetInstance();
    macroMan->Reset();
    macroMan->SetMacro(arg0);
}

void CWvsContext::OnBridleMobCatchFail(CInPacket& iPacket)
{
    __sub_005D9A80(this, nullptr, iPacket);
}

void CWvsContext::OnMonsterBookSetCard(CInPacket& iPacket)
{
    __sub_005DDCB0(this, nullptr, iPacket);
}

void CWvsContext::OnMonsterBookSetCover(CInPacket& iPacket)
{
    __sub_005CFA70(this, nullptr, iPacket);
}

void CWvsContext::OnHourChanged(CInPacket& iPacket)
{
    __sub_005CFAA0(this, nullptr, iPacket);
}

void CWvsContext::OnConsultAuthkeyUpdate(CInPacket& iPacket)
{
    __sub_005E3F30(this, nullptr, iPacket);
}

void CWvsContext::OnClassCompetitionAuthkeyUpdate(CInPacket& iPacket)
{
    __sub_005E4000(this, nullptr, iPacket);
}

void CWvsContext::OnWebBoardAuthkeyUpdate(CInPacket& iPacket)
{
    __sub_005E40D0(this, nullptr, iPacket);
}

void CWvsContext::OnSessionValue(CInPacket& iPacket)
{
    __sub_005E41B0(this, nullptr, iPacket);
}

void CWvsContext::OnPartyValue(CInPacket& iPacket)
{
    __sub_005E4720(this, nullptr, iPacket);
}

void CWvsContext::OnFieldSetVariable(CInPacket& iPacket)
{
    __sub_005E4870(this, nullptr, iPacket);
}

void CWvsContext::OnBonusExpRateChanged(CInPacket& iPacket)
{
    __sub_005DF170(this, nullptr, iPacket);
}

void CWvsContext::OnPotionDiscountRateChanged(CInPacket& iPacket)
{
    __sub_005DF300(this, nullptr, iPacket);
}

void CWvsContext::OnFamilyChartResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnFamilyInfoResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnFamilyResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnFamilyJoinRequest(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnFamilyJoinRequestResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnFamilyJoinAccepted(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnFamilyPrivilegeList(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnFamilyFamousPointIncResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnFamilyNotifyLoginOrLogout(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnFamilySetPrivilege(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnFamilySummonRequest(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnNotifyLevelUp(CInPacket& iPacket)
{
    __sub_005E4A90(this, nullptr, iPacket);
}

void CWvsContext::OnNotifyWedding(CInPacket& iPacket)
{
    __sub_005E4CF0(this, nullptr, iPacket);
}

void CWvsContext::OnNotifyJobChange(CInPacket& iPacket)
{
    __sub_005E4EF0(this, nullptr, iPacket);
}

void CWvsContext::OnSetBuyEquipExt(CInPacket& iPacket)
{
    __sub_005D0020(this, nullptr, iPacket);
}

void CWvsContext::OnScriptProgressMessage(CInPacket& iPacket)
{
    __sub_005E5110(this, nullptr, iPacket);
}

void CWvsContext::OnDataCRCCheckFailed(CInPacket& iPacket)
{
    __sub_005E51B0(this, nullptr, iPacket);
}

void CWvsContext::OnShowSlotMessage(CInPacket& iPacket)
{
    __sub_005DF4C0(this, nullptr, iPacket);
}

void CWvsContext::OnCakePieEventResult(CInPacket& iPacket)
{
    __sub_005D0040(this, nullptr, iPacket);
}

void CWvsContext::OnStageChange(CInPacket& iPacket)
{
    __sub_005E5360(this, nullptr, iPacket);
}

void CWvsContext::OnDragonBallBox(CInPacket& iPacket)
{
    __sub_005DB630(this, nullptr, iPacket);
}

void CWvsContext::SetNewFadeWnd(CUIFadeYesNo* pWnd)
{
    __sub_005F9690(this, nullptr, pWnd);
}

void CWvsContext::ClearFadeWnd()
{
    for (auto& fadeWnd : m_apFadeWnd)
    {
        fadeWnd->Destroy();
    }
    m_apFadeWnd.RemoveAll();
}

void CWvsContext::DeleteFadeWnd(ZRef<CUIFadeYesNo> pWnd)
{
    __sub_005F9840(this, nullptr, CreateNakedParam(pWnd));
}

void CWvsContext::DeleteFadeWnd(long nType, long nFriendID, uint16_t nQuestID, ZXString<char> sSender,
                                unsigned long dwNewYearCardSN)
{
    __sub_005F9950(this, nullptr, nType, nFriendID, nQuestID, CreateNakedParam(sSender), dwNewYearCardSN);
}

int32_t CWvsContext::IsFadeWndExist(long nType, unsigned long dwValue, ZXString<char> sName)
{
    return __sub_005F32A0(this, nullptr, nType, dwValue, CreateNakedParam(sName));
}

void CWvsContext::SetTopFadeWnd(ZRef<CUIFadeYesNo> pWnd)
{
    __sub_005F9BB0(this, nullptr, CreateNakedParam(pWnd));
}

int32_t CWvsContext::IsTopFadeWnd(ZRef<CUIFadeYesNo> pWnd)
{
    return __sub_005F33C0(this, nullptr, CreateNakedParam(pWnd));
}

long CWvsContext::GetReceivedMemoCount()
{
    return m_lReceivedMemo.GetCount();
}

void CWvsContext::ExtractReceivedMemo(ZList<GW_Memo>& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::ShowUI(int32_t bShow)
{
    __sub_005D6D30(this, nullptr, bShow);
}

int32_t CWvsContext::GetShowUI()
{
    return m_bShowUI;
    //return __sub_005FA230(this, nullptr);
}

int32_t CWvsContext::IsTimerSet()
{
    return __sub_005FA230(this, nullptr);
}

void CWvsContext::SetEventTimer(long nDuration)
{
    if (!m_pClock)
    {
        return;
    }

    auto clock = new CClock();
    CClock::INITPARAM param;
    param.nBackColor = 0xff000040;
    param.nFontColor = 0xffffff20;
    clock->CreateWnd(0xffffff7f, 0x1e, 0x102, 0x3a, 0xc00616fc, 1, &param, 1, CWnd::Origin_CT);
    clock->SetTimer(nDuration);
}

void CWvsContext::OnEventTimer()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::Update()
{
    __sub_005EA7F0(this, nullptr);
}

void CWvsContext::CheckTemporaryStatDuration()
{
    // TODO: No module found for method
    //TODO(game) UNIMPLEMENTED;
}

void CWvsContext::AddQuestTimer(uint16_t usQuestID, long tRemain, int32_t bTimeKeepQuestTimer)
{
    __sub_00605A90(this, nullptr, usQuestID, tRemain, bTimeKeepQuestTimer);
}

void CWvsContext::RemoveQuestTimer(uint16_t usQuestID, int32_t bNewAlertCheck)
{
    //TODO(game) __sub_005E0660(this, nullptr, usQuestID, bNewAlertCheck);
}

void CWvsContext::ResetQuestTimer(uint16_t usQuestID, int32_t bNewAlertCheck)
{
    //TODO(game) __sub_005E0660(this, nullptr, usQuestID, bNewAlertCheck);
}

void CWvsContext::ClearQuestTimer()
{
    for (auto& questTimer : m_lpUIQuestTimer)
    {
        questTimer->Destroy();
    }
    m_lpUIQuestTimer.RemoveAll();
}

ZRef<CUIQuestTimer> CWvsContext::GetQuestTimer(uint16_t usQuestID, int32_t bTimeKeepQuestTimer)
{
    //TODO
    /*auto timer = this->m_lpUIQuestTimer.FindSatisfying(
        [usQuestID, bTimeKeepQuestTimer](const ZRef<CUIQuestTimer> &timer) {
            return timer->GetQuestID() == usQuestID && timer->IsTimeKeepQuestTimer() == bTimeKeepQuestTimer;
        });

    return timer ? (*timer) : ZRef<CUIQuestTimer>(0);*/
    ZRef<CUIQuestTimer> ret;
    return *__sub_005F3720(this, nullptr, &ret, usQuestID, bTimeKeepQuestTimer);
}

void CWvsContext::OnMapTransferResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CWvsContext::GetActiveEffectItemID()
{
    return m_nActiveEffectItemID;
}

void CWvsContext::SetActiveEffectItemID(long arg0)
{
    m_nActiveEffectItemID = arg0;
}

void CWvsContext::SetAntiMacroRemainTime(long arg0)
{
    m_tRemainAntiMacroQuestion = arg0;
}

void CWvsContext::ShowAntiMacroNotice(long arg0, long arg1)
{
    ZRef wnd(new CUIAntiMacroNotice(arg0, arg1), true);
    wnd->DoModal();
}

void CWvsContext::SaveAntiMacroScreenShot(ZXString<char> sUserName)
{
    __sub_005FA330(this, nullptr, CreateNakedParam(sUserName));
}

void CWvsContext::SetInitialQuizRemainTime(long arg0)
{
    m_tRemainInitialQuiz = arg0;
}

void CWvsContext::StartQuest(uint16_t usQuestID, unsigned long dwNpcTemplateID, int32_t bAutoStart)
{
    __sub_005F70B0(this, nullptr, usQuestID, dwNpcTemplateID, bAutoStart);
}

void CWvsContext::ResignQuest(uint16_t usQuestID)
{
    __sub_005E0800(this, nullptr, usQuestID);
}

void CWvsContext::ShowQuestInfoDetail(long nTab, uint16_t usQuestID)
{
    __sub_005F0BD0(this, nullptr, nTab, usQuestID);
}

long CWvsContext::GetItemCount(long nItemID)
{
    return __sub_005F3E10(this, nullptr, nItemID);
}

ZXString<char> CWvsContext::GetQuestMobCount(long nIndex)
{
    ZXString<char> ret;
    return *__sub_005DF440(this, nullptr, &ret, nIndex);
}

void CWvsContext::CheckQuestCompleteByItem(long arg0, long arg1)
{
    //TODO(game)
}

void CWvsContext::CheckQuestCompleteByMeso(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZXString<char> CWvsContext::GetQuestMobName(uint16_t usQuestRecordKey)
{
    ZXString<char> ret;
    return *__sub_00600920(this, nullptr, &ret, usQuestRecordKey);
}

ZXString<char> CWvsContext::GetQuestBonusEXP(uint16_t arg0)
{
    return m_pCharacterData->GetQuestBonusEXP(arg0);
}

long CWvsContext::GetQuestState(uint16_t usQuestID)
{
    return __sub_005F4500(this, nullptr, usQuestID);
}

ZXString<char> CWvsContext::GetQuestRecordValue(uint16_t usQuestID)
{
    auto charData = GetCharacterData();
    ZXString<char> ret;
    charData->GetQuest(usQuestID, ret);
    return ret;
}

long CWvsContext::GetQuestItemID(uint16_t usQuestID, long nNum)
{
    auto qm = CQuestMan::GetInstance();
    auto demand = qm->GetCompleteDemand(usQuestID);
    if (usQuestID && demand)
    {
        return demand->aDemandItem[nNum].nItemID;
    }
    return 0;
    //return __sub_005F4650(this, nullptr, usQuestID, nNum);
}

void CWvsContext::ShowPremiumArgument(unsigned long ulArgument, long nSessionCount)
{
    __sub_005FA5B0(this, nullptr, ulArgument, nSessionCount);
}

void CWvsContext::SetPurchaseExp(unsigned char arg0)
{
    m_nPurchaseExp = arg0;
}

void CWvsContext::PersonalShopOpen()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::PersonalShopClose()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CWvsContext::IsPersonalShopOpen()
{
    return m_bPersonalShopOpen;
    //return __sub_005FA230(this, nullptr);
}

void CWvsContext::SetADBoard(ZXString<char> sUserName)
{
    m_sADBoard = sUserName;
    //__sub_005FA330(this, nullptr, CreateNakedParam(sUserName));
}

ZXString<char> CWvsContext::GetADBoard()
{
    return m_sADBoard;
}

void CWvsContext::ADBoardOpen()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::ADBoardClose()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CWvsContext::IsADBoardOpen() const
{
    return m_bADBoard;
    //return __sub_005FA230(this, nullptr);
}

void CWvsContext::OpenBook(long nItemID)
{
    __sub_005DA850(this, nullptr, nItemID);
}

void CWvsContext::CloseBook()
{
    __sub_005DA8F0(this, nullptr);
}

void CWvsContext::OpenRaise(long nItemID)
{
    __sub_005CCEF0(this, nullptr, nItemID);
}

void CWvsContext::UseBoxGachaponItem(long nPos, long nItemID)
{
    __sub_005DABC0(this, nullptr, nPos, nItemID);
}

void CWvsContext::SendUseBoxGachaponItemRequest(long nPos, long nItemID)
{
    __sub_005D6BC0(this, nullptr, nPos, nItemID);
}

void CWvsContext::SendUseGachaponRemoteRequest(long nItemID, unsigned long dwTownID)
{
    __sub_005D7340(this, nullptr, nItemID, dwTownID);
}

void CWvsContext::CloseShopScanner()
{
    auto shopScanner = CUIShopScanner::GetInstance();
    if (!shopScanner)
    {
        return;
    }

    auto sound = StringPool::GetInstance().GetStringW(0x924);
    play_ui_sound(reinterpret_cast<const wchar_t*>(sound.c_str()));
    shopScanner->Destroy();
    delete shopScanner;
    //__sub_005DADD0(this, nullptr);
}

int32_t CWvsContext::RunShopScanner(COutPacket& oPacket)
{
    return __sub_005DEB50(this, nullptr, oPacket);
}

int32_t CWvsContext::RunMapTransferItem(COutPacket& oPacket, int32_t bCanTransferContinent)
{
    return __sub_005E11C0(this, nullptr, oPacket, bCanTransferContinent);
}

int32_t CWvsContext::IsExistSkillCooltimeOver(long nPsdNo)
{
    return m_mSkillCooltimeOver.GetAt(nPsdNo, nullptr) != nullptr;
    //return __sub_005CC9F0(this, nullptr, nPsdNo);
}

void CWvsContext::ClearCooltimeAll()
{
    m_mSkillCooltimeOver.RemoveAll();

    auto cur = m_mSkillCooltimeOver.GetHeadPosition();
    auto t = timeGetTime();
    while (cur)
    {
        long value = 0;
        auto key = m_mSkillCooltimeOver.GetNext(cur, &value);
        SetSkillCooltimeOver(key, value * 1000 + t);
    }
}

long CWvsContext::GetSkillCooltimeOver(long nItemID)
{
    return __sub_005F3E10(this, nullptr, nItemID);
}

void CWvsContext::SetSkillCooltimeOver(long nSkillID, long tTimeOver)
{
    __sub_005DB0D0(this, nullptr, nSkillID, tTimeOver);
}

void CWvsContext::RemoveSkillCooltimeOver(long nSkillID)
{
    if (nSkillID == 5221999)
    {
        m_temporaryStatView.ResetTemporary(2, CORSAIR_BATTLESHIP);
    }
    m_mSkillCooltimeOver.RemoveKey(nSkillID);
    //__sub_005CCF80(this, nullptr, nSkillID);
}

void CWvsContext::CheckDarkForce(int32_t arg0)
{
    // TODO: No module found for method
    //TODO(game)
}

long CWvsContext::GetDarkForceDamage() const
{
    return m_nDarkForceDamage;
}

long CWvsContext::GetDarkForcePddr() const
{
    return m_nDarkForcePddr;
}

void CWvsContext::CheckDragonFury(int32_t arg0)
{
    // TODO: No module found for method
    //TODO(game)
}

long CWvsContext::GetDragonFuryDamage() const
{
    return m_nDragonFury;
}

void CWvsContext::OnMapleTVUseRes(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnAvatarMegaphoneRes(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnSetAvatarMegaphone(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnClearAvatarMegaphone(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnCancelNameChangeResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnCancelTransferWorldResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnDestroyShopResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnFakeGMNotice(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnSuccessInUsegachaponBox(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnNewYearCardRes(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnRandomMorphRes(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::SetActionRndSeed(uint32_t s1, uint32_t s2, uint32_t s3)
{
    m_RndActionMan.SetSeed(s1, s2, s3);
    //__sub_00318C60(this, nullptr, s1, s2, s3);
}

CRand32& CWvsContext::GetActionRndMan()
{
    return m_RndActionMan;
    //return __sub_00503320(this, nullptr);
}

long CWvsContext::GetPotionDiscountRate() const
{
    return m_nPotionDiscountRate;
}

int32_t CWvsContext::CheckEquipOnAutoStartQuest(long nItemID, int32_t bNewAlertCheck)
{
    return __sub_005E69D0(this, nullptr, nItemID, bNewAlertCheck);
}

int32_t CWvsContext::CheckInventoryOnAutoStartQuest(long nItemID, int32_t bNewAlertCheck)
{
    return __sub_005E6AB0(this, nullptr, nItemID, bNewAlertCheck);
}

int32_t CWvsContext::CheckFieldOnAutoStartQuest(unsigned long dwCheckFieldID)
{
    return __sub_005E6B70(this, nullptr, dwCheckFieldID);
}

int32_t CWvsContext::CheckNormalAutoStartQuest(int32_t bNewAlertCheck)
{
    return __sub_005E6C50(this, nullptr, bNewAlertCheck);
}

void CWvsContext::CheckAutoCompletionAlertQuest()
{
    __sub_005E5FD0(this, nullptr);
}

void CWvsContext::UpdateAutoQuestAlertIcon()
{
    __sub_005CCE30(this, nullptr);
}

void CWvsContext::UpdateAutoStartQuestPreStartList(ZArray<unsigned short>& aQuestList, int32_t bNewAlertCheck)
{
    __sub_005E5F70(this, nullptr, aQuestList, bNewAlertCheck);
}

void CWvsContext::TryRegisterAutoStartQuest(uint16_t usQuestID, int32_t bNewAlertCheck)
{
    //TODO(game) __sub_005E0660(this, nullptr, usQuestID, bNewAlertCheck);
}

void CWvsContext::TryRegisterAutoCompletionAlertQuest(uint16_t usQuestID)
{
    __sub_005E0800(this, nullptr, usQuestID);
}

ZMap<unsigned short, int, unsigned short>& CWvsContext::GetAutoStartPreStart()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZMap<unsigned short, int, unsigned short>& CWvsContext::GetAutoCompleQuestInProgress()
{
    return m_mAutoCompleteQuestInProgress;
}

ZList<unsigned short>& CWvsContext::GetAutoCompletionAlertQuest()
{
    return m_lAutoCompletionAlertQuest;
}

void CWvsContext::RemoveAtAutoQuestList(uint16_t usQuestID)
{
    m_mAutoStartQuestPreStart.RemoveKey(usQuestID);
    m_mAutoCompleteQuestInProgress.RemoveKey(usQuestID);

    auto p = m_lAutoCompletionAlertQuest.Find(usQuestID);
    if (p)
    {
        m_lAutoCompletionAlertQuest.RemoveAt(p);
    }

    //__sub_005E0800(this, nullptr, usQuestID);
}

void CWvsContext::OnSetPassenserRequest(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::CheckNewQuestAvailable(int32_t arg0)
{
    //TODO(game)
}

void CWvsContext::ReleaseRefs()
{
    __sub_005D49E0(this, nullptr);
}

void CWvsContext::SendSueCharacterRequest(unsigned long arg0, unsigned char arg1, ZXString<char> arg2)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnSueCharacterResult(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::SendExpUpItemUseRequest(long nPOS, long nItemID)
{
    __sub_005DB1C0(this, nullptr, nPOS, nItemID);
}

void CWvsContext::SendTempExpUseRequest()
{
    __sub_005DB430(this, nullptr);
}

void CWvsContext::OnCancelNameChangebyOther(CInPacket& arg0)
{
    auto s = StringPool::GetInstance().GetString(0x196);
    CUtilDlg::Notice(s, nullptr, nullptr, 0, 0);
    m_bExclRequestSent = 0;
    m_tExclRequestSent = get_update_time();
}

void CWvsContext::GetLastestGetItemID(long& arg0, long& arg1)
{
    arg0 = m_nLastestGetItemID;
    arg1 = m_nLastestGetItemPos;
}

void CWvsContext::SetLastestGetItemID(long arg0, long arg1)
{
    m_nLastestGetItemID = arg0;
    m_nLastestGetItemPos = arg1;
}

void CWvsContext::ClearLastestGetItemID()
{
    m_nLastestGetItemID = 0;
    m_nLastestGetItemPos = 0;
}

long CWvsContext::GetSwallowBuffType()
{
    auto& ss = m_secondaryStat;
    if (ss._ZtlSecureGet_nSwallowCritical_())
    {
        return 1;
    }
    if (ss._ZtlSecureGet_nSwallowMaxMP_())
    {
        return 2;
    }
    if (ss._ZtlSecureGet_nSwallowAttackDamage_())
    {
        return 3;
    }
    if (ss._ZtlSecureGet_nSwallowDefence_())
    {
        return 4;
    }
    if (ss._ZtlSecureGet_nSwallowEvasion_())
    {
        return 5;
    }
    return 0;
    //return __sub_005CCFC0(this, nullptr);
}

long CWvsContext::GetDiceBuffType()
{
    auto dice = m_secondaryStat._ZtlSecureGet_nDice_();
    return dice ? dice - 1 & (dice - 1 < 1) - 1 : 0;
    //return __sub_005CD070(this, nullptr);
}

long CWvsContext::GetQuestDeliveryItemPos() const
{
    return m_nQuestDeliveryItemPos;
}

void CWvsContext::SetQuestDeliveryItemPos(long arg0)
{
    m_nQuestDeliveryItemPos = arg0;
}

uint16_t CWvsContext::GetDeliveryQuestID() const
{
    return m_usDeliveryQuestID;
}

void CWvsContext::SetDeliveryQuestID(uint16_t usQuestID)
{
    m_usDeliveryQuestID = usQuestID;
}

void CWvsContext::TryRecovery()
{
    __sub_005D4020(this, nullptr);
}

void CWvsContext::OnMemoNotify_Receive()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::SetOnReadingMemo(int32_t arg0)
{
    m_bOnReadingMemo = arg0;
}

int32_t __cdecl CWvsContext::IsConnected(unsigned long dwFrom, unsigned long dwTo)
{
    if ((dwFrom / 1000000) % 100 != 9)
    {
        if ((((dwTo / 1000000) % 100 != 9) && (dwFrom / 10000 != 20009)) && (dwTo / 10000 != 20009))
        {
            auto areaFrom = ms_mAreaCode.GetAt(dwFrom / 10000000, nullptr);
            auto areaTo = ms_mAreaCode.GetAt(dwTo / 10000000, nullptr);
            if (areaFrom && areaTo)
            {
                return *areaFrom == *areaTo;
            }
        }
    }
    return 0;
    //return __sub_005F0AF0(dwFrom, dwTo);
}

void CWvsContext::SendBridleItemUseRequest(long nPOS, long nItemID)
{
    __sub_005E08C0(this, nullptr, nPOS, nItemID);
}

void CWvsContext::SetTamingMobInfo(long nHP, long nMP, long nOption)
{
    __sub_005F2A00(this, nullptr, nHP, nMP, nOption);
}

void CWvsContext::GetTamingMobInfo(long& lvl, long& exp, long& fatigue)
{
    lvl = m_nTamingMobLevel;
    exp = m_nTamingMobExp;
    fatigue = m_nTamingMobFatigue;
}

long CWvsContext::GetTamingMobLevel() const
{
    return m_nTamingMobLevel;
}

void CWvsContext::ReleaseCommodityRes()
{
    m_pCommodity = 0;
    m_pCashPackage = 0;
}

void CWvsContext::SetCommodityReload()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CWvsContext::TryCloseUI(CUIWnd* pUIWnd)
{
    return __sub_005D8ED0(this, nullptr, pUIWnd);
}

void CWvsContext::CheckOpBoardHasNew()
{
    __sub_005D4870(this, nullptr);
}

void CWvsContext::OnUpdateGMBoard(CInPacket& iPacket)
{
    __sub_005E03C0(this, nullptr, iPacket);
}

void CWvsContext::OnAccountMoreInfo(CInPacket& iPacket)
{
    __sub_005DBE50(this, nullptr, iPacket);
}

void CWvsContext::OnFindFirend(CInPacket& iPacket)
{
    __sub_005CF9A0(this, nullptr, iPacket);
}

void CWvsContext::OnSetLogoutGiftConfig(CInPacket& iPacket)
{
    //__sub_005CFA30(this, nullptr, iPacket);
    m_bPredictQuit = iPacket.Decode4();
    for (auto& gift : m_anLogoutGiftCommoditySN)
        gift = iPacket.Decode4();
}

void CWvsContext::OnLogoutGift(CInPacket& iPacket)
{
    //__sub_005CCCB0(this, nullptr, iPacket);
    if (auto p = CUILogoutGift::GetInstance())
        p->SetRet(1);
}

int32_t CWvsContext::GetShowMobInfoName() const
{
    return m_bShowMobInfoName;
}

void CWvsContext::SetShowMobInfoName(int32_t arg0)
{
    m_bShowMobInfoName = arg0;
}

int32_t CWvsContext::GetShowMobInfoHP() const
{
    return m_bShowMobInfoHP;
}

void CWvsContext::SetShowMobInfoHP(int32_t arg0)
{
    m_bShowMobInfoHP = arg0;
}

void CWvsContext::PushStackForTab(CUIWnd* item)
{
    __sub_0036AD50(this, nullptr, item);
}

CUIWnd* CWvsContext::GetTopStackForTab()
{
    return __sub_005CF8C0(this, nullptr);
}

void CWvsContext::RemoveFromStackForTab(CUIWnd* item)
{
    __sub_0036AD50(this, nullptr, item);
}

int32_t CWvsContext::IsFakeGMNotice()
{
    return m_bIsFakeGMNotice;
}

void CWvsContext::SendBoobyTrapAlert(long trapType)
{
    COutPacket pkt(Cp::Boobytrapalert);
    pkt.Encode4(trapType);
    SendPacket(pkt);
}

void CWvsContext::CheckBoobyTrapPickUpRequest(const tagPOINT& pt)
{
    CDropPool::GetInstance()->BoobyTrapCheckPickupItem(pt);
    //__sub_00609670(this, nullptr, pt);
}

int32_t CWvsContext::IsPickUpRequestEntrance() const
{
    return m_bRecentPickUpEntrance;
    //return __sub_005FA230(this, nullptr);
}

void CWvsContext::ClearPickUpEntranceState()
{
    m_bRecentPickUpEntrance = 0;
}

int32_t CWvsContext::IsKillMobFromEnterField()
{
    return m_bKillMobFromEnterField;
}

void CWvsContext::OnMobDead()
{
    m_bKillMobFromEnterField = 1;
    //__sub_005CC9A0(this, nullptr);
}

void CWvsContext::SetADSpaceOnOff(int32_t arg0)
{
    m_bADSpaceON = arg0;
}

int32_t CWvsContext::IsADSpaceOn()
{
    return m_bADSpaceON;
    //return __sub_005FA230(this, nullptr);
}

int32_t CWvsContext::IsMiniMapOnOff()
{
    return m_bMiniMapOnOff;
}

void CWvsContext::OnMiniMapOnOff(CInPacket& iPacket)
{
    m_bMiniMapOnOff = iPacket.Decode1();
    CUIMiniMap::GetInstance()->ReloadMiniMap();
    //__sub_005CFFF0(this, nullptr, iPacket);
}

long CWvsContext::GetCashShopInitialItem()
{
    return m_nCashShopInitialItem;
}

void CWvsContext::SetCashShopInitialItem(long arg0)
{
    m_nCashShopInitialItem = arg0;
}

long CWvsContext::GetEnergy() const
{
    return m_nEnergy;
}

long CWvsContext::GetCurrentPrivilege() const
{
    return m_privilege.bType ? m_privilege.nIndex : -1;
    //return __sub_005CC9D0(this, nullptr);
}

ZXString<char> CWvsContext::GetPrivilegeName(long nIndex)
{
    auto priv = m_apPrivilege.At(nIndex);
    return priv ? (*priv)->strName : ZXString<char>();
    //return __sub_005DF440(this, nullptr, nIndex);
}

ZRef<PrivilegeItem> CWvsContext::GetPrivilegeItem(long nIndex)
{
    auto priv = m_apPrivilege.At(nIndex);
    return priv ? *priv : ZRef<PrivilegeItem>(0);
    //return __sub_005D72E0(this, nullptr, nIndex);
}

int32_t CWvsContext::CanRegisterFamilyChild()
{
    return __sub_005FA230(this, nullptr);
}

void CWvsContext::SetUnregisterCharacterName(ZXString<char> sUserName)
{
    __sub_005FA330(this, nullptr, CreateNakedParam(sUserName));
}

void CWvsContext::_CheckExpiredProtectItem(GW_ItemSlotBase* pItem, const _FILETIME& ftNow)
{
    __sub_005E6180(this, nullptr, pItem, ftNow);
}

void CWvsContext::_CheckExpiredProtectItems()
{
    __sub_005E63D0(this, nullptr);
}

long CWvsContext::GetCookieHousePoint()
{
    return m_nCookieHousePoint;
}

int32_t CWvsContext::GetBuyEquipExt()
{
    return m_bBuyEquipExt;
}

void CWvsContext::AddChatMorphedMsg()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZXString<char> CWvsContext::GetCashPackageName(long nIndex)
{
    auto pkgName = m_mCashPackageName.GetAt(nIndex, nullptr);
    if (pkgName && !pkgName->IsEmpty())
    {
        return *pkgName;
    }
    return CItemInfo::GetInstance()->GetSpecialName(nIndex);
    //return __sub_005DF440(this, nullptr, nIndex);
}

CWvsContext::Massacre& CWvsContext::GetMasscreInfo()
{
    return m_Massacre;
}

PartyRaidTeam CWvsContext::GetTeamForPartyRaid()
{
    return m_nTeamForPartyRaid;
}

long CWvsContext::GetPartyRaceStageMine() const
{
    return m_nPartyRaidStageMine;
}

long CWvsContext::GetPartyRaceStageOther() const
{
    return m_nPartyRaidStageOther;
}

long CWvsContext::GetPartyRacePoint() const
{
    return m_nPartyRaidPoint;
}

int32_t CWvsContext::IsBambooUsed() const
{
    return m_bBambooUsed;
}

void CWvsContext::ValidateAdditionalItemEffect()
{
    //TODO(game) __sub_005E6D30(this, nullptr);
}

void CWvsContext::SetImpactNextBySessionValue(const ZXString<char>& strKey, const ZXString<char>& strValue, double vx,
                                              double vy)
{
    if (strKey.IsEmpty())
    {
        return;
    }

    SendRequestSessionValue(strKey, 0);
    m_strImpactNextBySessionValueKey = strKey;
    m_strImpactNextBySessionValue = strValue;
    m_dImpactNextBySessionValueVX = vx;
    m_dImpactNextBySessionValueVY = vy;

    //__sub_005E52F0(this, nullptr, strKey, strValue, vx, vy);
}

int32_t CWvsContext::GetScreenHeight() const
{
    return this->m_nScreenHeight;
}

int32_t CWvsContext::GetScreenWidth() const
{
    return this->m_nScreenWidth;
}

int32_t CWvsContext::GetAdjustCenterY() const
{
    return this->m_nAdjustCenterY;
}

void CWvsContext::SetScreenResolution(bool bLargeScreen, bool bSave)
{
    __sub_005CD0C0(this, nullptr, bLargeScreen, bSave);
}

void CWvsContext::ToggleScreenResolution()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

bool CWvsContext::IsLargeScreen()
{
    return m_bIsLargeScreen;
    // TODO: No module found for method
    //UNIMPLEMENTED;
}

void CWvsContext::ClearPasssiveSkillBuffing()
{
    m_aPasssiveSkillBuffing.fill(0);
}

void CWvsContext::SetPasssiveSkillBuffing(const SecondaryStat& ss)
{
    ClearPasssiveSkillBuffing();
    auto dice = ss._ZtlSecureGet_nDice_();
    auto diceInfo = ss.aDiceInfo;
    for (auto i = 0; i < diceInfo.size(); i++)
    {
        m_aPasssiveSkillBuffing[i] = dice > 1 && diceInfo[i];
    }
    //__sub_005CD220(this, nullptr, ss);
}

int32_t CWvsContext::GetPasssiveSkillBuffing(long ix)
{
    if (ix > m_aPasssiveSkillBuffing.size())
    {
        return 0;
    }
    return m_aPasssiveSkillBuffing[ix];
    //return __sub_005CC9F0(this, nullptr, nPsdNo);
}

int32_t CWvsContext::IsFamilyMember()
{
    return m_FamilyInfo.bInitialized;
    //return __sub_005FA230(this, nullptr);
}

ZXString<char> CWvsContext::GetGMBoardURL()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::LoadItemMsg(long arg0)
{
    //TODO(game)
}

void CWvsContext::InsertItemMsg(long arg0)
{
    if (!CItemInfo::GetInstance()->IsMsgItem(arg0))
        return;

    bool show = true;
    for (auto& msg : m_lItemMsg)
    {
        if (msg.nItemID != arg0)
        {
            show = true;
            break;
        }
    }

    if (show)
    {
        LoadItemMsg(arg0);
    }
}

void CWvsContext::RemoveItemMsg(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::RestoreItemMsg()
{
    // TODO: No module found for method
    //TODO(game) UNIMPLEMENTED;
}

void CWvsContext::UpdateItemMsg(long arg0)
{
    // TODO: No module found for method
    //TODO(game) UNIMPLEMENTED;
}

void CWvsContext::OnTransferChannel(CInPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CWvsContext::OnDisallowedDeliveryQuestList(CInPacket& arg0)
{
    CQuestMan::GetInstance()->DecodeDisallowedDeliveryList(arg0);
}

void CWvsContext::OnAskWhetherUsePamsSong(CInPacket& iPacket)
{
    AskWhetherUsePamsSong();
    //__sub_005DB6D0(this, nullptr, iPacket);
}

void CWvsContext::AskWhetherUsePamsSong()
{
    CUIPamsSong song;
    auto res = song.DoModal();

    COutPacket pkt(Cp::Userpamssonguserequest);
    pkt.Encode1(res);
    SendPacket(pkt);
    //__sub_005D74F0(this, nullptr);
}

ZList<unsigned long>& CWvsContext::GetWorldMapQuestMobList()
{
    return m_lWorldMapQuestMobList;
}

ZArray<WORLDMAPQUESTDEMANDITEM>& CWvsContext::GetWorldMapQuestDemandItem()
{
    return m_aWorldMapQuestDemandItem;
}

uint16_t CWvsContext::GetWorldMapQuestID() const
{
    return m_usWorldMapQuestID;
}

void CWvsContext::SetWorldMapQuestID(uint16_t usQuestID)
{
    m_usWorldMapQuestID = usQuestID;
    //__sub_005E0800(this, nullptr, usQuestID);
}

void CWvsContext::ResetWorldMapQuestDemand()
{
    m_lWorldMapQuestMobList.RemoveAll();
    m_aWorldMapQuestDemandItem.RemoveAll();
    m_usWorldMapQuestID = 0;
    //__sub_005E54A0(this, nullptr);
}

void CWvsContext::AddWorldMapQuestDemandMob(unsigned long dwFlag)
{
    __sub_005F61C0(this, nullptr, dwFlag);
}

void CWvsContext::AddWorldMapQuestDemandItem(unsigned long dwDemandItemID, unsigned long dwDemandMobID)
{
    __sub_005E8F30(this, nullptr, dwDemandItemID, dwDemandMobID);
}

int32_t CWvsContext::IsInWorldMapQuestDemand(unsigned long dwMobID)
{
    return __sub_005D00B0(this, nullptr, dwMobID);
}

int32_t CWvsContext::IsWorthlessQuest(uint16_t usQuestID)
{
    return __sub_005D75C0(this, nullptr, usQuestID);
}

int32_t CWvsContext::IsNearStartQuest(uint16_t usQuestID)
{
    return __sub_005D7690(this, nullptr, usQuestID);
}

int32_t CWvsContext::IsShowOnlyWorthyQuests() const
{
    return m_bShowOnlyWorthyQuests;
    //return __sub_005FA230(this, nullptr);
}

void CWvsContext::SetShowOnlyWorthyQuests(int32_t arg0)
{
    m_bShowOnlyWorthyQuests = arg0;
}

void CWvsContext::SetShowWorthlessQuestFromConfig()
{
    auto x = 0, y = 0, op = 0;
    CConfig::GetInstance()->GetUIWndPos(6, x, y, op);
    m_bShowOnlyWorthyQuests = (op & 0xf0000000) == 0x10000000;
    //__sub_005CD290(this, nullptr);
}

CWvsContext& CWvsContext::operator=(CWvsContext& arg0)
{
    return _op_assign_636(this, arg0);
}

CWvsContext& CWvsContext::_op_assign_636(CWvsContext* pThis, CWvsContext& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWvsContext::CFriend::~CFriend()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CWvsContext::CFriend::_dtor_0()
{
    return __sub_005D8090(this, nullptr);
}

CWvsContext::CFriend::CFriend(const CWvsContext::CFriend& arg0)
{
    _ctor_1(arg0);
}

void CWvsContext::CFriend::_ctor_1(const CWvsContext::CFriend& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWvsContext::CFriend::CFriend()
{
}

void CWvsContext::CFriend::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CWvsContext::CFriend::IsDataTwisted()
{
    return __sub_006102C0(this, nullptr);
}

void CWvsContext::CFriend::Reset(CInPacket& iPacket)
{
    __sub_00610760(this, nullptr, iPacket);
}

void CWvsContext::CFriend::Insert(CInPacket& iPacket)
{
    __sub_00610810(this, nullptr, iPacket);
}

void CWvsContext::CFriend::UpdateFriend(CInPacket& iPacket, int32_t bUpdateBlockedFriend)
{
    __sub_006125D0(this, nullptr, iPacket, bUpdateBlockedFriend);
}

void CWvsContext::CFriend::UpdateBlockedFriend(long nIdx)
{
    __sub_0060FD80(this, nullptr, nIdx);
}

void CWvsContext::CFriend::Remove(unsigned long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CWvsContext::CFriend::GetCount() const
{
    return m_aFriend.GetCount();
}

long CWvsContext::CFriend::FindIndex(ZXString<char> sFriendName)
{
    // NOLINT(*-unnecessary-value-param)
    if (!IsDataTwisted())
    {
        return -1;
    }
    for (auto it = m_aFriend.begin(); it != m_aFriend.end(); ++it)
    {
        auto name = (const char*)it->sFriendName.data();
        if (sFriendName == name)
        {
            return it - m_aFriend.begin();
        }
    }
    return -1;
    //return __sub_00610900(this, nullptr, CreateNakedParam(sFriendName));
}

long CWvsContext::CFriend::FindIndex(unsigned long dwFriendID)
{
    if (!IsDataTwisted())
    {
        return -1;
    }
    for (auto it = m_aFriend.begin(); it != m_aFriend.end(); ++it)
    {
        if (it->dwFriendID == dwFriendID)
        {
            return it - m_aFriend.begin();
        }
    }
    return -1;
    //return __sub_006108A0(this, nullptr, dwFriendID);
}

CWvsContext::CFriend& CWvsContext::CFriend::operator=(const CWvsContext::CFriend& arg0)
{
    return _op_assign_12(this, arg0);
}

CWvsContext::CFriend&
CWvsContext::CFriend::_op_assign_12(CWvsContext::CFriend* pThis, const CWvsContext::CFriend& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWvsContext::Massacre::Massacre()
{
    //TODO(ctor) UNIMPLEMENTED; //_ctor_0();
}

void CWvsContext::Massacre::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWvsContext::ITEMMSGINFO::~ITEMMSGINFO()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CWvsContext::ITEMMSGINFO::_dtor_0()
{
    return __sub_00602B00(this, nullptr);
}

CWvsContext::ITEMMSGINFO::ITEMMSGINFO(const CWvsContext::ITEMMSGINFO& arg0)
{
    _ctor_1(arg0);
}

void CWvsContext::ITEMMSGINFO::_ctor_1(const CWvsContext::ITEMMSGINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWvsContext::ITEMMSGINFO::ITEMMSGINFO()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CWvsContext::ITEMMSGINFO::_ctor_0()
{
    return __sub_00602A80(this, nullptr);
}

CWvsContext::ITEMMSGINFO& CWvsContext::ITEMMSGINFO::operator=(const CWvsContext::ITEMMSGINFO& arg0)
{
    return _op_assign_3(this, arg0);
}

CWvsContext::ITEMMSGINFO&
CWvsContext::ITEMMSGINFO::_op_assign_3(CWvsContext::ITEMMSGINFO* pThis, const CWvsContext::ITEMMSGINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWvsContext::ITEMMSG::~ITEMMSG()
{
}

void CWvsContext::ITEMMSG::_dtor_0()
{
    return __sub_005F2800(this, nullptr);
}

CWvsContext::ITEMMSG::ITEMMSG(const CWvsContext::ITEMMSG& arg0)
{
    _ctor_1(arg0);
}

void CWvsContext::ITEMMSG::_ctor_1(const CWvsContext::ITEMMSG& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWvsContext::ITEMMSG::ITEMMSG()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CWvsContext::ITEMMSG::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWvsContext::ITEMMSG& CWvsContext::ITEMMSG::operator=(const CWvsContext::ITEMMSG& arg0)
{
    return _op_assign_3(this, arg0);
}

CWvsContext::ITEMMSG&
CWvsContext::ITEMMSG::_op_assign_3(CWvsContext::ITEMMSG* pThis, const CWvsContext::ITEMMSG& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUISkillDecEX::~CUISkillDecEX()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUISkillDecEX::_dtor_0()
{
    return __sub_005E6640(this, nullptr);
}

CUISkillDecEX::CUISkillDecEX(const CUISkillDecEX& arg0)
{
    _ctor_1(arg0);
}

void CUISkillDecEX::_ctor_1(const CUISkillDecEX& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUISkillDecEX::CUISkillDecEX()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CUISkillDecEX::_ctor_0()
{
    return __sub_005E6560(this, nullptr);
}

void CUISkillDecEX::OnCreate(void* pData)
{
    __sub_00457DA0(this, nullptr, pData);
}

void CUISkillDecEX::CreateSkillDecDlg()
{
    __sub_005CC810(this, nullptr);
}

void CUISkillDecEX::OnDestroy()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUISkillDecEX::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    __sub_00458170(this, nullptr, nId, param1, param2);
}

void CUISkillDecEX::OnKey(uint32_t wParam, int32_t lParam)
{
    __sub_005E6610(this, nullptr, wParam, lParam);
}

void CUISkillDecEX::OnButtonClicked(uint32_t nId)
{
    __sub_00453060(this, nullptr, nId);
}

void CUISkillDecEX::Draw(const tagRECT* arg0)
{
    __sub_004554A0(this, nullptr, arg0);
}

void CUISkillDecEX::ResetInfo()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUISkillDecEX::GetResult(long& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUISkillDecEX::SetOption(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUISkillDecEX::GetCurTab()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUISkillDecEX::OnTabChanged(long nTab)
{
    __sub_004530C0(this, nullptr, nTab);
}

void CUISkillDecEX::OnSkillDecButton(long nIdx)
{
    __sub_00452E20(this, nullptr, nIdx);
}

void CUISkillDecEX::SetSkillRootList()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUISkillDecEX::SetTabItems()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUISkillDecEX::SetScrollBar()
{
    auto range = 0;
    if (auto root = GetSkillRootVisible(false))
    {
        auto n = root->aSkill.GetCount();
        range = (long)n - 3;
    }

    m_pSBSkill->SetScrollRange(range);
}

void CUISkillDecEX::SetButtons()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUISkillDecEX::IsEnableSkill(const SKILLENTRY* p)
{
    //return __sub_004529D0(this, nullptr, p);
    auto cd = CWvsContext::_S()->GetCharacterData();
    return IsRequiredSkill(p->nSkillID) && CSkillInfo::_S()->GetSkillLevel(*cd.op_arrow(), p->nSkillID, nullptr) > 0;
}

int32_t CUISkillDecEX::IsRequiredSkill(long nReqSkillID)
{
    return __sub_004528D0(this, nullptr, nReqSkillID);
}

long CUISkillDecEX::GetExcessSP(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const SKILLROOT* CUISkillDecEX::GetSkillRootVisible(int32_t bReload)
{
    return __sub_00452A70(this, nullptr, bReload);
}

CUISkillDecEX& CUISkillDecEX::operator=(const CUISkillDecEX& arg0)
{
    return _op_assign_24(this, arg0);
}

CUISkillDecEX& CUISkillDecEX::_op_assign_24(CUISkillDecEX* pThis, const CUISkillDecEX& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}


int32_t __cdecl _anon__IsGuildSupplyQuest(uint16_t usQuestID)
{
    return (usQuestID - 26000) <= 0x3E7u;
}

int32_t __cdecl TryToggleTab(CUIWnd* arg0)
{
    return __sub_005CCD00(arg0);
}
