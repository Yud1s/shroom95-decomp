// UIQuestInfo.cpp
#include "UIQuestInfo.hpp"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};

static IntroSortLoopHelper<ZRef<QuestInfo>, int, QICompareFunc>
FAKE_IntroSortLoopHelper_ZRef_QuestInfo_int_QICompareFunc{};
static InsertionSortHelper<ZRef<QuestInfo>, QICompareFunc> FAKE_InsertionSortHelper_ZRef_QuestInfo_QICompareFunc{};
static ZSortHelper<ZRef<QuestInfo>, QICompareFunc> FAKE_ZSortHelper_ZRef_QuestInfo_QICompareFunc{};

#include "UIQuestInfo_regen.ipp"

ZList<unsigned short> CUIQuestInfo::ms_lQuestRead;

QuestInfo::~QuestInfo()
{
    UNIMPLEMENTED; // _dtor_0();
}

void QuestInfo::_dtor_0()
{
    return __sub_00432450(this, nullptr);
}

QuestInfo::QuestInfo(const QuestInfo& arg0)
{
    _ctor_1(arg0);
}

void QuestInfo::_ctor_1(const QuestInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

QuestInfo::QuestInfo()
{
    UNIMPLEMENTED; //_ctor_0();
}

void QuestInfo::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

QuestInfo& QuestInfo::operator=(const QuestInfo& arg0)
{
    return _op_assign_3(this, arg0);
}

QuestInfo& QuestInfo::_op_assign_3(QuestInfo* pThis, const QuestInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t QICompareFunc::operator()(const ZRef<QuestInfo> a, const ZRef<QuestInfo> b)
{
    return _op_call_0(this, a, b);
}

int32_t QICompareFunc::_op_call_0(QICompareFunc* pThis, const ZRef<QuestInfo> a, const ZRef<QuestInfo> b)
{
    return __sub_00422110(pThis, nullptr, CreateNakedParam(a), CreateNakedParam(b));
}

CCtrlButtonQuestAlarmAuto::~CCtrlButtonQuestAlarmAuto()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CCtrlButtonQuestAlarmAuto::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlButtonQuestAlarmAuto::CCtrlButtonQuestAlarmAuto(const CCtrlButtonQuestAlarmAuto& arg0)
{
    _ctor_1(arg0);
}

void CCtrlButtonQuestAlarmAuto::_ctor_1(const CCtrlButtonQuestAlarmAuto& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlButtonQuestAlarmAuto::CCtrlButtonQuestAlarmAuto()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CCtrlButtonQuestAlarmAuto::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CCtrlButtonQuestAlarmAuto::SetEnable(int32_t bEnable)
{
    __sub_00421120(this, nullptr, bEnable);
}

void CCtrlButtonQuestAlarmAuto::OnMouseEnter(int32_t bEnter)
{
    __sub_00423540(this, nullptr, bEnter);
}

int32_t CCtrlButtonQuestAlarmAuto::OnMouseMove(long rx, long ry)
{
    return __sub_004236B0(this, nullptr, rx, ry);
}

CCtrlButtonQuestAlarmAuto& CCtrlButtonQuestAlarmAuto::operator=(const CCtrlButtonQuestAlarmAuto& arg0)
{
    return _op_assign_9(this, arg0);
}

CCtrlButtonQuestAlarmAuto& CCtrlButtonQuestAlarmAuto::_op_assign_9(CCtrlButtonQuestAlarmAuto* pThis,
                                                                   const CCtrlButtonQuestAlarmAuto& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIQuestAlarm::~CUIQuestAlarm()
{
    auto head = m_mQuestLastUpdateTime.GetHeadPosition();
    while (head)
    {
        unsigned long val{};
        m_mQuestLastUpdateTime.GetNext(head, &val);
        if (isAllConditionsSatisfied(val))
        {
            int i = 0;
            for (auto& quest : m_aQuestID)
            {
                if (quest == val)
                {
                    RemoveQuestByIndex(i);
                }

                ++i;
            }
        }

        ms_pInstance = nullptr;
    }
}

void CUIQuestAlarm::_dtor_0()
{
    return __sub_0042C7C0(this, nullptr);
}

CUIQuestAlarm::CUIQuestAlarm(const CUIQuestAlarm& arg0)
{
    _ctor_1(arg0);
}

void CUIQuestAlarm::_ctor_1(const CUIQuestAlarm& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIQuestAlarm::CUIQuestAlarm() : CUIWnd(13, 5, 163, 4, 1, 0, 0)
{
    m_bUseAutoRegister = true;
    auto cfg = CConfig::GetInstance();
    m_aQuestID = cfg->GetQuestAlarm();
    if (!m_aQuestID.IsEmpty() || cfg->GetQueatAlarmOpened())
    {
        Create();
    }

    m_bMaximized = m_nOption != 0;
}

void CUIQuestAlarm::_ctor_0()
{
    return __sub_0042C5A0(this, nullptr);
}

void CUIQuestAlarm::OnCreate(void* pData)
{
    //__sub_0042CAC0(this, nullptr, pData);
    auto cfg = CConfig::GetInstance();
    m_lm.Init(this, 0, 0);
    if (m_aQuestID.IsEmpty())
    {
        m_bMaximized = false;
    }


    auto uol = m_bMaximized ? L"UI/UIWindow2.img/QuestAlarm/backgrndmax" : L"UI/UIWindow2.img/QuestAlarm/backgrndmin";
    CUIWnd::OnCreate(pData, ZXString16(uol), false);

    m_pFontTitle = get_basic_font(FONT_SMALL_WHITE);
    m_pFontTitleSkyBlue = get_basic_font(FONT_SMALL_SKYBLUE_B);
    m_pFontRed = get_basic_font(FONT_SMALL_RED);
    m_pFontRedViolet = get_basic_font(FONT_SMALL_REDVIOLET);
    m_pFontOrange = get_basic_font(FONT_SMALL_ORANGE);
    m_pFontGreen = get_basic_font(FONT_SMALL_LIGHTGREEN);

    auto btnUol = m_bMaximized ? L"UI/UIWindow2.img/QuestAlarm/BtMin" : L"UI/UIWindow2.img/QuestAlarm/BtMax";
    auto id = m_bMaximized ? 2001 : 2000;
    m_lm.AddButton(btnUol, id, 0, 0, nullptr);


    ZRef btnAuto((CCtrlButton*)new CCtrlButtonWithAniState(), true);
    CCtrlButton::CREATEPARAM paramsAuto{};
    paramsAuto.bAcceptFocus = true;
    paramsAuto.sUOL = L"UI/UIWindow2.img/QuestAlarm/BtAuto";
    btnAuto->CreateCtrl(this, 2007, 118, 4, 0, &paramsAuto);
    m_pBtAuto = btnAuto;

    m_bUseAutoRegister = cfg->GetQuestAlarmAutoRegister();
    m_pBtAuto->SetEnable(m_bUseAutoRegister);

    ZRef btnQ(new CCtrlButtonWithAniState(), true);
    paramsAuto.sUOL = L"UI/UIWindow2.img/QuestAlarm/BtQ";
    btnQ->CreateCtrl(this, 2008, 4, 4, 0, &paramsAuto);
    m_pBtQ = btnQ;


    m_pBackgrndCenter = get_rm()->GetObjectT<IWzCanvas>(L"UI/UIWindow2.img/QuestAlarm/backgrndcenter");
    m_pBackgrndBottom = get_rm()->GetObjectT<IWzCanvas>(L"UI/UIWindow2.img/QuestAlarm/backgrndbottom");

    for (auto& del : m_apBtDelete)
    {
        del = 0;
    }

    m_mQuestTitleRect.RemoveAll();
    m_aTitleText.RemoveAll();
    m_aTitleRect.RemoveAll();
}

void CUIQuestAlarm::OnDestroy()
{
    __sub_00421160(this, nullptr);
}

void CUIQuestAlarm::Draw(const tagRECT* arg0)
{
    //TODO(game) __sub_0042D850(this, nullptr, arg0);
}

void CUIQuestAlarm::OnButtonClicked(uint32_t nId)
{
    __sub_00431D00(this, nullptr, nId);
}

int32_t CUIQuestAlarm::OnMouseMove(long rx, long ry)
{
    return __sub_00423920(this, nullptr, rx, ry);
}

void CUIQuestAlarm::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_00424200(this, nullptr, msg, wParam, rx, ry);
}

int32_t CUIQuestAlarm::OnSetFocus(int32_t bFocus)
{
    return __sub_0042C7A0(this, nullptr, bFocus);
}

int32_t CUIQuestAlarm::RemoveOldQuest()
{
    return __sub_004323D0(this, nullptr);
}

void CUIQuestAlarm::ResetInfo(uint16_t usQuestID)
{
    __sub_00423B90(this, nullptr, usQuestID);
}

void CUIQuestAlarm::RegisterQuest(uint16_t usQuestID, int32_t bAutomated)
{
    __sub_004347C0(this, nullptr, usQuestID, bAutomated);
}

void CUIQuestAlarm::DeleteQuest(uint16_t usQuestID)
{
    __sub_00432390(this, nullptr, usQuestID);
}

void CUIQuestAlarm::ToggleQuestAlarmState()
{
    __sub_00422770(this, nullptr);
}

void CUIQuestAlarm::UpdateNewQuestAlarmButton(int32_t bFoundNew)
{
    __sub_004213E0(this, nullptr, bFoundNew);
}

long CUIQuestAlarm::GetRegisterQuestNum()
{
    return __sub_00422650(this, nullptr);
}

int32_t CUIQuestAlarm::IsInQuestAlarmList(uint16_t usQuestID)
{
    return __sub_00421730(this, nullptr, usQuestID);
}

_x_com_ptr<IWzFont> CUIQuestAlarm::GetProgressFont(long nProportion)
{
    if (nProportion < 33)
    {
        return m_pFontRed;
    }
    else if (nProportion < 66)
    {
        return m_pFontRedViolet;
    }
    else if (nProportion < 100)
    {
        return m_pFontOrange;
    }
    else
    {
        return m_pFontGreen;
    }
    //return __sub_00421770(this, nullptr, nProportion);
}

_x_com_ptr<IWzFont> CUIQuestAlarm::GetProgressFontMeso(double nProportion)
{
    if (nProportion >= 1.0)
    {
        return m_pFontGreen;
    }
    else
    {
        return m_pFontRed;
    }
    //return __sub_004217E0(this, nullptr, nProportion);
}

int32_t CUIQuestAlarm::Recover()
{
    return __sub_004323D0(this, nullptr);
}

int32_t CUIQuestAlarm::IsCreated()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIQuestAlarm::Create()
{
    __sub_00422730(this, nullptr);
}

void CUIQuestAlarm::ClearHistory(long QID)
{
    __sub_00421820(this, nullptr, QID);
}

ZXString<char> CUIQuestAlarm::CheckSecretItem(const ItemInfo& itemInfo)
{
    auto id = itemInfo.nItemID;
    const int SECRET_ITEM_ID = 3800088;
    if (itemInfo.bSecret && CWvsContext::GetInstance()->IsExist(SECRET_ITEM_ID))
    {
        id = SECRET_ITEM_ID;
    }

    return CItemInfo::GetInstance()->GetItemName(id);


    //return __sub_00422600(this, nullptr, itemInfo);
}

long CUIQuestAlarm::GetHeight()
{
    return __sub_00422650(this, nullptr);
}

void CUIQuestAlarm::DeleteQuestByIndex(long nIdx)
{
    __sub_00431CD0(this, nullptr, nIdx);
}

void CUIQuestAlarm::RemoveQuestByIndex(long nIdx)
{
    __sub_00422570(this, nullptr, nIdx);
}

CUIQuestAlarm& CUIQuestAlarm::operator=(const CUIQuestAlarm& arg0)
{
    return _op_assign_28(this, arg0);
}

CUIQuestAlarm& CUIQuestAlarm::_op_assign_28(CUIQuestAlarm* pThis, const CUIQuestAlarm& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIQuestInfoDetail::~CUIQuestInfoDetail()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIQuestInfoDetail::_dtor_0()
{
    return __sub_00423BF0(this, nullptr);
}

CUIQuestInfoDetail::CUIQuestInfoDetail(const CUIQuestInfoDetail& arg0)
{
    _ctor_1(arg0);
}

void CUIQuestInfoDetail::_ctor_1(const CUIQuestInfoDetail& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIQuestInfoDetail::CUIQuestInfoDetail(ZRef<CUIQuestInfo> pUIQuestInfo, long l, long t)
{
    _ctor_0(pUIQuestInfo, l, t);
}

void CUIQuestInfoDetail::_ctor_0(ZRef<CUIQuestInfo> pUIQuestInfo, long l, long t)
{
    return __sub_00424720(this, nullptr, CreateNakedParam(pUIQuestInfo), l, t);
}

void CUIQuestInfoDetail::OnCreate(void* arg0)
{
    __sub_00430DD0(this, nullptr, arg0);
}

void CUIQuestInfoDetail::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    __sub_00421050(this, nullptr, nId, param1, param2);
}

void CUIQuestInfoDetail::OnButtonClicked(uint32_t nId)
{
    __sub_00434C90(this, nullptr, nId);
}

void CUIQuestInfoDetail::Draw(const tagRECT* pRect)
{
    __sub_004248C0(this, nullptr, pRect);
}

void CUIQuestInfoDetail::Update()
{
    __sub_00429C10(this, nullptr);
}

int32_t CUIQuestInfoDetail::OnSetFocus(int32_t bFocus)
{
    return __sub_00423ED0(this, nullptr, bFocus);
}

int32_t CUIQuestInfoDetail::OnMouseMove(long rx, long ry)
{
    return __sub_00426BD0(this, nullptr, rx, ry);
}

void CUIQuestInfoDetail::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_00423EF0(this, nullptr, msg, wParam, rx, ry);
}

uint16_t CUIQuestInfoDetail::GetQuestID()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIQuestInfoDetail::ResetInfo()
{
    __sub_00431800(this, nullptr);
}

void CUIQuestInfoDetail::SetNPC()
{
    __sub_0042FD70(this, nullptr);
}

void CUIQuestInfoDetail::SetGauge_SeriesQuest()
{
    __sub_00425760(this, nullptr);
}

void CUIQuestInfoDetail::SetButton()
{
    __sub_004298B0(this, nullptr);
}

void CUIQuestInfoDetail::SetScrollBar()
{
    __sub_004218A0(this, nullptr);
}

void CUIQuestInfoDetail::SetTimer()
{
    __sub_00429C50(this, nullptr);
}

void CUIQuestInfoDetail::SetLayout()
{
    __sub_00423020(this, nullptr);
}

long CUIQuestInfoDetail::GetScrLogLen()
{
    return __sub_00421850(this, nullptr);
}

void CUIQuestInfoDetail::DrawTimeText()
{
    __sub_00426800(this, nullptr);
}

void CUIQuestInfoDetail::MarkNpcLocation_InWorldMap()
{
    __sub_00423240(this, nullptr);
}

void CUIQuestInfoDetail::MarkMapLocation_InWorldMap(long nMapID)
{
    __sub_00423480(this, nullptr, nMapID);
}

void CUIQuestInfoDetail::RemoveQuestGuideTip()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIQuestInfoDetail::MarkMobLocation_InWorldMap()
{
    __sub_00423340(this, nullptr);
}

void CUIQuestInfoDetail::CreateQuestGuideTip()
{
    __sub_004295B0(this, nullptr);
}

long CUIQuestInfoDetail::GetDeliveryButtonHeight()
{
    return __sub_004212E0(this, nullptr);
}

CUIQuestInfoDetail& CUIQuestInfoDetail::operator=(const CUIQuestInfoDetail& arg0)
{
    return _op_assign_27(this, arg0);
}

CUIQuestInfoDetail& CUIQuestInfoDetail::_op_assign_27(CUIQuestInfoDetail* pThis, const CUIQuestInfoDetail& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIQuestInfo::~CUIQuestInfo()
{
}

void CUIQuestInfo::_dtor_0()
{
    this->~CUIQuestInfo();
}

CUIQuestInfo::CUIQuestInfo(const CUIQuestInfo& arg0)
{
    _ctor_1(arg0);
}

void CUIQuestInfo::_ctor_1(const CUIQuestInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIQuestInfo::CUIQuestInfo(long nTab): CUIWnd(6, 5, 214, 6, 1, 0, 0)
{
    ms_pInstance = this;

    m_nScrollPos = -1;
    m_nSelect = -1;
    m_nTab = 0;
    CreateUIWndPosSaved(235, 396, 10);
}

void CUIQuestInfo::_ctor_0(long nTab)
{
    //return __sub_004271E0(this, nullptr, nTab);
    new(this) CUIQuestInfo(nTab);
}

void CUIQuestInfo::OnCreate(void* arg0)
{
    __sub_00427600(this, nullptr, arg0);
}

void CUIQuestInfo::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    //__sub_00435260(this, nullptr, nId, param1, param2);
    if (nId == 2000)
    {
        if (param1 == 500)
        {
            OnTabChanged(param2);
            return;
        }
    }
    else if (nId == 2001 && param1 >= 0x12C && param1 <= 0x130)
    {
        InvalidateRect(nullptr);
    }

    CWnd::OnChildNotify(nId, param1, param2);
}

int32_t CUIQuestInfo::OnMouseMove(long rx, long ry)
{
    return __sub_004291B0(this, nullptr, rx, ry);
}

void CUIQuestInfo::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_00431980(this, nullptr, msg, wParam, rx, ry);
}

void CUIQuestInfo::Draw(const tagRECT* pRect)
{
    __sub_0042A780(this, nullptr, pRect);
}

void CUIQuestInfo::OnDestroy()
{
    //__sub_005CCC30(this, nullptr);
    CQuestMan::GetInstance()->ClearRecentlyUpdatedQuest();
    CWvsContext::GetInstance()->RemoveFromStackForTab(this);
    if (auto& questDetail = m_pQuestInfoDetail)
    {
        questDetail->Destroy();
        questDetail = 0;
    }

    CUIWnd::OnDestroy();
}

void CUIQuestInfo::OnMoveWnd(long l, long t)
{
    __sub_00421A80(this, nullptr, l, t);
}

void CUIQuestInfo::Update()
{
    //__sub_005CCC30(this, nullptr);
    CWnd::Update();
}

void CUIQuestInfo::OnButtonClicked(uint32_t nId)
{
    __sub_004345C0(this, nullptr, nId);
}

int32_t CUIQuestInfo::IsMyAddon(CWnd* pWnd)
{
    return __sub_004273D0(this, nullptr, pWnd);
}

int32_t CUIQuestInfo::ShowQuestInfoDetail(long nTab, uint16_t usQuestID)
{
    return __sub_00431B00(this, nullptr, nTab, usQuestID);
}

void CUIQuestInfo::ResetInfo(int32_t bLoadData)
{
    __sub_004343C0(this, nullptr, bLoadData);
}

void CUIQuestInfo::ToggleDetail(int32_t bOpen)
{
    __sub_00421AD0(this, nullptr, bOpen);
}

ZRef<QuestInfo> CUIQuestInfo::GetQuestInfo()
{
    return __sub_00422080(this, nullptr);
}

ZRef<QuestInfo> CUIQuestInfo::GetQuestInfo_(long arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZArray<ZXString<char>> CUIQuestInfo::GetQuestDesc(long nState, _x_com_ptr<IWzProperty> pPropQuest)
{
    return __sub_0042D360(this, nullptr, nState, CreateNakedParam(pPropQuest));
}

ZArray<ZXString<char>> CUIQuestInfo::GetQuestSummary(_x_com_ptr<IWzProperty> pPropQuest)
{
    return __sub_0042D570(this, nullptr, CreateNakedParam(pPropQuest));
}

void CUIQuestInfo::MarkQuestAsRead(uint16_t usQuestID)
{
    __sub_0042A730(this, nullptr, usQuestID);
}

void __cdecl CUIQuestInfo::MarkQuestAsRead_static(uint16_t arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t __cdecl CUIQuestInfo::IsMarkedAsRead(uint16_t usQuestID)
{
    return __sub_00421DA0(usQuestID);
}

void __cdecl CUIQuestInfo::ClearInfo_AboutReadQuest()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CUIQuestInfo::GetCurTab()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIQuestInfo::ToggleTab()
{
    //__sub_005CCC30(this, nullptr);
    auto curTab = m_pTab->GetCurTab();
    auto tabCount = m_pTab->GetTabNo();
    m_pTab->SetTab((curTab + 1) % tabCount);
}

int32_t CUIQuestInfo::IsShowOnlyWorthyQuests_Public()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIQuestInfo::SetQuestViewState_ToOption(long nOption)
{
    __sub_004210E0(this, nullptr, nOption);
}

long CUIQuestInfo::GetQuestViewState_FromOption()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIQuestInfo::SetRecentQuest_ToOption(long nOption)
{
    __sub_00421100(this, nullptr, nOption);
}

long CUIQuestInfo::GetRecentQuest_FromOption()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIQuestInfo::OnTabChanged(long nTab)
{
    //__sub_004351D0(this, nullptr, nTab);
    m_nTab = nTab;
    m_nSelect = -1;
    LoadData();
    SetScrollBar();
    SetButton();

    if (nTab)
    {
        if (nTab == 1 && !TryShowRecentlyUpdatedQuest())
        {
            TryShowRecentlyViewedQuest();
        }
    }
    else if (TryShowSuitableLevelQuest(true))
    {
        TryShowSuitableLevelQuest(false);
    }

    if (m_nSelect == -1 && !TryShowTopQuest())
    {
        ToggleDetail(false);
    }

    SyncScrollBarWithSelected();
}

void CUIQuestInfo::LoadData()
{
    //TODO __sub_005CCC30(this, nullptr);
}

void CUIQuestInfo::InsertQuestInfo(long nState, uint16_t usQuestID, _x_com_ptr<IWzProperty> pPropQuest, _FILETIME ftEnd,
                                   long nForcedCategory)
{
    __sub_00432690(this, nullptr, nState, usQuestID, CreateNakedParam(pPropQuest), CreateNakedParam(ftEnd),
                   nForcedCategory);
}

long CUIQuestInfo::GetQuestState(uint16_t usQuestID, _FILETIME& ftEnd)
{
    return __sub_00422270(this, nullptr, usQuestID, ftEnd);
}

void CUIQuestInfo::SetBackFont(int32_t bLast)
{
    __sub_00421DC0(this, nullptr, bLast);
}

void CUIQuestInfo::SetScrollBar()
{
    //__sub_005CCC30(this, nullptr);
    auto questInfo = m_aaQuestInfo[m_nTab];
    auto len = questInfo.GetCount();
    m_pSBList->SetScrollRange(len ? len + 3 : -13);
}

void CUIQuestInfo::SetButton()
{
    //__sub_005CCC30(this, nullptr);
    this->m_pBtShowOnlyWorthyQuests->SetShow(0);
    this->m_pBtShowAllQuests->SetShow(0);
    if (!this->m_nTab)
    {
        if ((this->m_nOption & 0xF0000000) == 0x10000000)
        {
            this->m_pBtShowAllQuests->SetShow(1);
            this->m_pBtShowAllQuests->SetAbove(0);
            this->m_pBtShowOnlyWorthyQuests->SetShow(0);
        }
        else
        {
            this->m_pBtShowOnlyWorthyQuests->SetShow(1);
            this->m_pBtShowOnlyWorthyQuests->SetAbove(0);
            this->m_pBtShowAllQuests->SetShow(0);
        }
    }
}

void CUIQuestInfo::SetSelect(long nSelect)
{
    __sub_0042C220(this, nullptr, nSelect);
}

void CUIQuestInfo::OnToggleDetail(int32_t bOpen)
{
    __sub_00421AD0(this, nullptr, bOpen);
}

int32_t CUIQuestInfo::IsMinimizedCategory(long nTab, long nCategory)
{
    return __sub_00421B70(this, nullptr, nTab, nCategory);
}

int32_t CUIQuestInfo::IsCategoryButton(ZRef<QuestInfo> pQuest)
{
    return __sub_00422300(this, nullptr, CreateNakedParam(pQuest));
}

int32_t CUIQuestInfo::IsWorthlessQuest(uint16_t usQuestID)
{
    return __sub_004223B0(this, nullptr, usQuestID);
}

long CUIQuestInfo::GetCategoryOf(uint16_t usQuestID)
{
    return __sub_004293E0(this, nullptr, usQuestID);
}

void CUIQuestInfo::ToggleCategory(long nTab, long nCategory, int32_t bOpen)
{
    __sub_00421D50(this, nullptr, nTab, nCategory, bOpen);
}

void CUIQuestInfo::DestroyCategoryButton(long nTab, long nCategory)
{
    __sub_004224E0(this, nullptr, nTab, nCategory);
}

void CUIQuestInfo::SyncScrollBarWithSelected()
{
    //__sub_005CCC30(this, nullptr);
    auto sel = m_nSelect <= 8 ? 0 : m_nSelect;
    m_pSBList->SetCurPos(sel);
}

long CUIQuestInfo::GetQuestIdxFromMousePos(long rx, long ry)
{
    return __sub_00421980(this, nullptr, rx, ry);
}

int32_t CUIQuestInfo::TryShowRecentlyUpdatedQuest()
{
    return __sub_00432020(this, nullptr);
}

int32_t CUIQuestInfo::TryShowRecentlyViewedQuest()
{
    return __sub_00432080(this, nullptr);
}

int32_t CUIQuestInfo::TryShowSuitableLevelQuest(int32_t bNotRead)
{
    return __sub_00432090(this, nullptr, bNotRead);
}

int32_t CUIQuestInfo::TryShowTopQuest()
{
    return __sub_00432240(this, nullptr);
}

int32_t CUIQuestInfo::IsShowOnlyWorthyQuests()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIQuestInfo& CUIQuestInfo::operator=(const CUIQuestInfo& arg0)
{
    return _op_assign_56(this, arg0);
}

CUIQuestInfo& CUIQuestInfo::_op_assign_56(CUIQuestInfo* pThis, const CUIQuestInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void __cdecl GetQuestSubInfo(uint16_t usQuestID, ZXString<char>& sLevelLimit)
{
    return __sub_0042A590(usQuestID, sLevelLimit);
}

const ZRef<QuestInfo>& __cdecl Median_ZRef_QuestInfo__QICompareFunc_(const ZRef<QuestInfo>& a, const ZRef<QuestInfo>& b,
                                                                     const ZRef<QuestInfo>& c, QICompareFunc& comp)
{
    return __sub_00422B00(a, b, c, comp);
}

int32_t __cdecl Partition_ZRef_QuestInfo__QICompareFunc_(ZArray<ZRef<QuestInfo>>& a, int32_t nFrom, int32_t nTo,
                                                         const ZRef<QuestInfo>& pivot, QICompareFunc& comp)
{
    return __sub_00422C40(a, nFrom, nTo, pivot, comp);
}

void __cdecl InsertionSort_ZRef_QuestInfo__QICompareFunc_(ZArray<ZRef<QuestInfo>>& a, int32_t nFrom, int32_t nTo,
                                                          QICompareFunc& comp)
{
    return __sub_00422900(a, nFrom, nTo, comp);
}

void __cdecl ZSort_ZRef_QuestInfo__QICompareFunc_(ZArray<ZRef<QuestInfo>>& a, __POSITION* posFrom, __POSITION* posTo,
                                                  QICompareFunc comp)
{
    return __sub_00429840(a, posFrom, posTo, CreateNakedParam(comp));
}

void __cdecl DownHeap_ZRef_QuestInfo__QICompareFunc_(ZArray<ZRef<QuestInfo>>& a, int32_t nIdx, int32_t nLen,
                                                     int32_t nFrom, QICompareFunc& comp)
{
    return __sub_00422D60(a, nIdx, nLen, nFrom, comp);
}

void __cdecl ZSort_ZRef_QuestInfo__QICompareFunc_(ZArray<ZRef<QuestInfo>>& a, QICompareFunc comp)
{
    return __sub_0042D320(a, CreateNakedParam(comp));
}
