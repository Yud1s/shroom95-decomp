// UIUserList.cpp
#include "UIUserList.hpp"

#include "UtilDlg/UtilDlg.hpp"
#include "UIFriendGroup/UIFriendGroup.hpp"
#include "Stage/Stage.hpp"


static ZRef<CStage> FAKE_ZREF_STAGE{};

static ZArray<CTabFriend::FRIENDITEM> _FAKE_ZArray_CTabFriend_FRIENDITEM{};
static ZArray<ZPair<CTabFriend::GROUPITEM, ZArray<CTabFriend::FRIENDITEM>>>
_FAKE_ZArray_ZPair_CTabFriend_GROUPITEM_ZArray_CTabFriend_FRIENDITEM{};
static ZRef<CUIFriendGroup> _FAKE_ZRef_CUIFriendGroup{};
static ZRef<CUtilDlg> _FAKE_ZRef_CUtilDlg{};

static ZPair<CTabFriend::GROUPITEM, ZArray<CTabFriend::FRIENDITEM>>
_FAKE_ZPair_CTabFriend_GROUPITEM_ZArray_CTabFriend_FRIENDITEM{};
static ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::JobDescComp>
_FAKE_ZSortHelper_CTabGuildAlliance_GUILDITEM_CTabGuildAlliance_JobDescComp{};
static ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::JobAscComp>
_FAKE_ZSortHelper_CTabGuild_GUILDITEM_CTabGuild_JobAscComp{};

static IntroSortLoopHelper<CTabGuild::GUILDITEM, int, CTabGuild::JobAscComp>
_FAKE_IntroSortLoopHelper_CTabGuild_GUILDITEM_int_CTabGuild_JobAscComp{};
static IntroSortLoopHelper<CTabGuild::GUILDITEM, int, CTabGuild::JobDescComp>
_FAKE_IntroSortLoopHelper_CTabGuild_GUILDITEM_int_CTabGuild_JobDescComp{};

static InsertionSortHelper<CTabGuild::GUILDITEM, CTabGuild::JobAscComp>
_FAKE_InsertionSortHelper_CTabGuild_GUILDITEM_CTabGuild_JobAscComp{};
static ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::NameAscComp>
_FAKE_ZSortHelper_CTabGuildAlliance_GUILDITEM_CTabGuildAlliance_NameAscComp{};
static ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::NameDescComp>
_FAKE_ZSortHelper_CTabGuildAlliance_GUILDITEM_CTabGuildAlliance_NameDescComp{};
static ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::JobAscComp>
_FAKE_ZSortHelper_CTabGuildAlliance_GUILDITEM_CTabGuildAlliance_JobAscComp{};
static ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::LevelAscComp>
_FAKE_ZSortHelper_CTabGuildAlliance_GUILDITEM_CTabGuildAlliance_LevelAscComp{};

static ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::LevelDescComp>
_FAKE_ZSortHelper_CTabGuildAlliance_GUILDITEM_CTabGuildAlliance_LevelDescComp{};
static ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::GradeAscComp>
_FAKE_ZSortHelper_CTabGuildAlliance_GUILDITEM_CTabGuildAlliance_GradeAscComp{};

static IntroSortLoopHelper<CTabGuild::GUILDITEM, int, CTabGuild::NameDescComp>
_FAKE_IntroSortLoopHelper_CTabGuild_GUILDITEM_int_CTabGuild_NameDescComp{};
static InsertionSortHelper<CTabGuild::GUILDITEM, CTabGuild::NameDescComp>
_FAKE_InsertionSortHelper_CTabGuild_GUILDITEM_CTabGuild_NameDescComp{};

static ZSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::GradeDescComp>
_FAKE_ZSortHelper_CTabGuildAlliance_GUILDITEM_CTabGuildAlliance_GradeDescComp{};

static IntroSortLoopHelper<CTabGuildAlliance::GUILDITEM, int, CTabGuildAlliance::NameDescComp>
_FAKE_IntroSortLoopHelper_CTabGuildAlliance_GUILDITEM_int_CTabGuildAlliance_NameDescComp{};
static InsertionSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::NameDescComp>
_FAKE_InsertionSortHelper_CTabGuildAlliance_GUILDITEM_CTabGuildAlliance_NameDescComp{};

static IntroSortLoopHelper<CTabGuild::GUILDITEM, int, CTabGuild::GradeDescComp>
_FAKE_IntroSortLoopHelper_CTabGuild_GUILDITEM_int_CTabGuild_GradeDescComp{};
static InsertionSortHelper<CTabGuild::GUILDITEM, CTabGuild::GradeDescComp>
_FAKE_InsertionSortHelper_CTabGuild_GUILDITEM_CTabGuild_GradeDescComp{};

static IntroSortLoopHelper<CTabGuildAlliance::GUILDITEM, int, CTabGuildAlliance::LevelAscComp>
_FAKE_IntroSortLoopHelper_CTabGuildAlliance_GUILDITEM_int_CTabGuildAlliance_LevelAscComp{};
static InsertionSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::LevelAscComp>
_FAKE_InsertionSortHelper_CTabGuildAlliance_GUILDITEM_CTabGuildAlliance_LevelAscComp{};

static ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::NameAscComp>
_FAKE_ZSortHelper_CTabGuild_GUILDITEM_CTabGuild_NameAscComp{};
static ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::NameDescComp>
_FAKE_ZSortHelper_CTabGuild_GUILDITEM_CTabGuild_NameDescComp{};
static ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::JobDescComp>
_FAKE_ZSortHelper_CTabGuild_GUILDITEM_CTabGuild_JobDescComp{};
static ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::LevelAscComp>
_FAKE_ZSortHelper_CTabGuild_GUILDITEM_CTabGuild_LevelAscComp{};
static ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::LevelDescComp>
_FAKE_ZSortHelper_CTabGuild_GUILDITEM_CTabGuild_LevelDescComp{};
static ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::GradeAscComp>
_FAKE_ZSortHelper_CTabGuild_GUILDITEM_CTabGuild_GradeAscComp{};
static ZSortHelper<CTabGuild::GUILDITEM, CTabGuild::GradeDescComp>
_FAKE_ZSortHelper_CTabGuild_GUILDITEM_CTabGuild_GradeDescComp{};
static IntroSortLoopHelper<CTabGuildAlliance::GUILDITEM, int, CTabGuildAlliance::GradeDescComp>
_FAKE_IntroSortLoopHelper_CTabGuildAlliance_GUILDITEM_int_CTabGuildAlliance_GradeDescComp{};
static InsertionSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::GradeDescComp>
_FAKE_InsertionSortHelper_CTabGuildAlliance_GUILDITEM_CTabGuildAlliance_GradeDescComp{};
static IntroSortLoopHelper<CTabGuildAlliance::GUILDITEM, int, CTabGuildAlliance::NameAscComp>
_FAKE_IntroSortLoopHelper_CTabGuildAlliance_GUILDITEM_int_CTabGuildAlliance_NameAscComp{};
static InsertionSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::NameAscComp>
_FAKE_InsertionSortHelper_CTabGuildAlliance_GUILDITEM_CTabGuildAlliance_NameAscComp{};
static IntroSortLoopHelper<CTabGuild::GUILDITEM, int, CTabGuild::NameAscComp>
_FAKE_IntroSortLoopHelper_CTabGuild_GUILDITEM_int_CTabGuild_NameAscComp{};
static InsertionSortHelper<CTabGuild::GUILDITEM, CTabGuild::NameAscComp>
_FAKE_InsertionSortHelper_CTabGuild_GUILDITEM_CTabGuild_NameAscComp{};
static InsertionSortHelper<CTabGuild::GUILDITEM, CTabGuild::JobDescComp>
_FAKE_InsertionSortHelper_CTabGuild_GUILDITEM_CTabGuild_JobDescComp{};
static IntroSortLoopHelper<CTabGuildAlliance::GUILDITEM, int, CTabGuildAlliance::LevelDescComp>
_FAKE_IntroSortLoopHelper_CTabGuildAlliance_GUILDITEM_int_CTabGuildAlliance_LevelDescComp{};
static InsertionSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::LevelDescComp>
_FAKE_InsertionSortHelper_CTabGuildAlliance_GUILDITEM_CTabGuildAlliance_LevelDescComp{};

static IntroSortLoopHelper<CTabGuild::GUILDITEM, int, CTabGuild::LevelDescComp>
_FAKE_IntroSortLoopHelper_CTabGuild_GUILDITEM_int_CTabGuild_LevelDescComp{};
static InsertionSortHelper<CTabGuild::GUILDITEM, CTabGuild::LevelDescComp>
_FAKE_InsertionSortHelper_CTabGuild_GUILDITEM_CTabGuild_LevelDescComp{};

static IntroSortLoopHelper<CTabGuild::GUILDITEM, int, CTabGuild::GradeAscComp>
_FAKE_IntroSortLoopHelper_CTabGuild_GUILDITEM_int_CTabGuild_GradeAscComp{};
static InsertionSortHelper<CTabGuild::GUILDITEM, CTabGuild::GradeAscComp>
_FAKE_InsertionSortHelper_CTabGuild_GUILDITEM_CTabGuild_GradeAscComp{};

static IntroSortLoopHelper<CTabGuildAlliance::GUILDITEM, int, CTabGuildAlliance::JobAscComp>
_FAKE_IntroSortLoopHelper_CTabGuildAlliance_GUILDITEM_int_CTabGuildAlliance_JobAscComp{};
static InsertionSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::JobAscComp>
_FAKE_InsertionSortHelper_CTabGuildAlliance_GUILDITEM_CTabGuildAlliance_JobAscComp{};

static IntroSortLoopHelper<CTabGuild::GUILDITEM, int, CTabGuild::LevelAscComp>
_FAKE_IntroSortLoopHelper_CTabGuild_GUILDITEM_int_CTabGuild_LevelAscComp{};
static InsertionSortHelper<CTabGuild::GUILDITEM, CTabGuild::LevelAscComp>
_FAKE_InsertionSortHelper_CTabGuild_GUILDITEM_CTabGuild_LevelAscComp{};

static IntroSortLoopHelper<CTabGuildAlliance::GUILDITEM, int, CTabGuildAlliance::GradeAscComp>
_FAKE_IntroSortLoopHelper_CTabGuildAlliance_GUILDITEM_int_CTabGuildAlliance_GradeAscComp{};
static InsertionSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::GradeAscComp>
_FAKE_InsertionSortHelper_CTabGuildAlliance_GUILDITEM_CTabGuildAlliance_GradeAscComp{};

static IntroSortLoopHelper<CTabGuildAlliance::GUILDITEM, int, CTabGuildAlliance::JobDescComp>
_FAKE_IntroSortLoopHelper_CTabGuildAlliance_GUILDITEM_int_CTabGuildAlliance_JobDescComp{};
static InsertionSortHelper<CTabGuildAlliance::GUILDITEM, CTabGuildAlliance::JobDescComp>
_FAKE_InsertionSortHelper_CTabGuildAlliance_GUILDITEM_CTabGuildAlliance_JobDescComp{};
static InsertionSortHelper<CTabFriend::FRIENDITEM, FI_NameAscComp>
_FAKE_InsertionSortHelper_CTabFriend_FRIENDITEM_FI_NameAscComp{};
static InsertionSortHelper<CTabFriend::FRIENDITEM, Friend_GroupAscComp<CTabFriend::FRIENDITEM>>
_FAKE_InsertionSortHelper_CTabFriend_FRIENDITEM_Friend_GroupAscComp_CTabFriend_FRIENDITEM{};

#include "UIUserList_regen.ipp"

CTabGuildAlliance::~CTabGuildAlliance()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CTabGuildAlliance::_dtor_0()
{
    return __sub_004D8160(this, nullptr);
}

CTabGuildAlliance::CTabGuildAlliance(const CTabGuildAlliance& arg0)
{
    _ctor_1(arg0);
}

void CTabGuildAlliance::_ctor_1(const CTabGuildAlliance& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabGuildAlliance::CTabGuildAlliance(CUIUserList* pUIUserList)
{
    _ctor_0(pUIUserList);
}

void CTabGuildAlliance::_ctor_0(CUIUserList* pUIUserList)
{
    return __sub_004D8060(this, nullptr, pUIUserList);
}

void CTabGuildAlliance::OnCreate()
{
    __sub_004C9E60(this, nullptr);
}

void CTabGuildAlliance::LoadData()
{
    __sub_004DAA00(this, nullptr);
}

long CTabGuildAlliance::Draw(_x_com_ptr<IWzCanvas> arg0, _x_com_ptr<IWzCanvas> arg1, _x_com_ptr<IWzCanvas> arg2)
{
    return __sub_004CA6F0(this, nullptr, CreateNakedParam(arg0), CreateNakedParam(arg1), CreateNakedParam(arg2));
}

void CTabGuildAlliance::Update()
{
    __sub_004CC3E0(this, nullptr);
}

void CTabGuildAlliance::CreateButton()
{
    __sub_004BBE50(this, nullptr);
}

void CTabGuildAlliance::OnButtonClicked(uint32_t nId)
{
    __sub_004CCFC0(this, nullptr, nId);
}

void CTabGuildAlliance::OnCreateGuild()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CTabGuildAlliance::OnRemoveGuild()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CTabGuildAlliance::OnInvite()
{
    __sub_004CC9C0(this, nullptr);
}

void CTabGuildAlliance::OnWithdraw()
{
    __sub_004BBCC0(this, nullptr);
}

void CTabGuildAlliance::OnKick()
{
    __sub_004BF710(this, nullptr);
}

void CTabGuildAlliance::OnGradeChange(int32_t bUp)
{
    __sub_004BA5B0(this, nullptr, bUp);
}

void CTabGuildAlliance::OnWhisper()
{
    __sub_004CCB50(this, nullptr);
}

void CTabGuildAlliance::OnChat()
{
    __sub_004CCC20(this, nullptr);
}

void CTabGuildAlliance::OnChangeMaster()
{
    __sub_004BA670(this, nullptr);
}

void CTabGuildAlliance::OnSetNotice()
{
    __sub_004CCCF0(this, nullptr);
}

void CTabGuildAlliance::OnPartyInvite()
{
    __sub_004CCF10(this, nullptr);
}

void CTabGuildAlliance::OnListHeader(long nIndex, long rx, long ry, long nScrPos)
{
    __sub_004DC110(this, nullptr, nIndex, rx, ry, nScrPos);
}

void CTabGuildAlliance::OnSortMember(long nIndex, const CTabGuildAlliance::ORDER nOrder)
{
    __sub_004DB020(this, nullptr, nIndex, nOrder);
}

void CTabGuildAlliance::OnMaxMinToggle(long nIndex)
{
    __sub_004B9F20(this, nullptr, nIndex);
}

void CTabGuildAlliance::OnPageNext(long nIndex)
{
    __sub_004B9FC0(this, nullptr, nIndex);
}

void CTabGuildAlliance::OnPagePrev(long nIndex)
{
    __sub_004B9F70(this, nullptr, nIndex);
}

unsigned long CTabGuildAlliance::GetMemberIDFromPoint(long rx, long ry, long nScrPos)
{
    return __sub_004B9840(this, nullptr, rx, ry, nScrPos);
}

long CTabGuildAlliance::GetGuildItem(unsigned long dwMemberID, CTabGuildAlliance::GUILDITEM& gi)
{
    return __sub_004BF950(this, nullptr, dwMemberID, gi);
}

ZXString<char> CTabGuildAlliance::GetToolTipString(long rx, long ry)
{
    ZXString<char> ret;
    return *__sub_004BF9D0(this, nullptr, &ret, rx, ry);
}

void CTabGuildAlliance::DeleteNoticeLayer()
{
    __sub_004B8E20(this, nullptr);
}

long CTabGuildAlliance::CalcListCanvasHeight()
{
    return __sub_004B9900(this, nullptr);
}

void CTabGuildAlliance::MakeNoticeLayer()
{
    __sub_004B9450(this, nullptr);
}

CTabGuildAlliance& CTabGuildAlliance::operator=(const CTabGuildAlliance& arg0)
{
    return _op_assign_31(this, arg0);
}

CTabGuildAlliance& CTabGuildAlliance::_op_assign_31(CTabGuildAlliance* pThis, const CTabGuildAlliance& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabGuildAlliance::GUILDITEM::~GUILDITEM()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CTabGuildAlliance::GUILDITEM::_dtor_0()
{
    return __sub_004BA520(this, nullptr);
}

CTabGuildAlliance::GUILDITEM::GUILDITEM(const CTabGuildAlliance::GUILDITEM& __that)
{
    _ctor_1(__that);
}

void CTabGuildAlliance::GUILDITEM::_ctor_1(const CTabGuildAlliance::GUILDITEM& __that)
{
    return __sub_004C09E0(this, nullptr, __that);
}

CTabGuildAlliance::GUILDITEM::GUILDITEM()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CTabGuildAlliance::GUILDITEM::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabGuildAlliance::GUILDITEM& CTabGuildAlliance::GUILDITEM::operator=(const CTabGuildAlliance::GUILDITEM& __that)
{
    return _op_assign_3(this, __that);
}

CTabGuildAlliance::GUILDITEM& CTabGuildAlliance::GUILDITEM::_op_assign_3(
    CTabGuildAlliance::GUILDITEM* pThis, const CTabGuildAlliance::GUILDITEM& __that)
{
    return __sub_004BBD70(pThis, nullptr, __that);
}

int32_t CTabGuildAlliance::NameAscComp::operator()(const CTabGuildAlliance::GUILDITEM& arg0,
                                                   const CTabGuildAlliance::GUILDITEM& arg1)
{
    return _op_call_0(this, arg0, arg1);
}

int32_t CTabGuildAlliance::NameAscComp::_op_call_0(CTabGuildAlliance::NameAscComp* pThis,
                                                   const CTabGuildAlliance::GUILDITEM& arg0,
                                                   const CTabGuildAlliance::GUILDITEM& arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CTabGuildAlliance::JobAscComp::operator()(const CTabGuildAlliance::GUILDITEM& a,
                                                  const CTabGuildAlliance::GUILDITEM& b)
{
    return _op_call_0(this, a, b);
}

int32_t CTabGuildAlliance::JobAscComp::_op_call_0(CTabGuildAlliance::JobAscComp* pThis,
                                                  const CTabGuildAlliance::GUILDITEM& a,
                                                  const CTabGuildAlliance::GUILDITEM& b)
{
    return __sub_004B74E0(pThis, nullptr, a, b);
}

int32_t CTabGuildAlliance::LevelAscComp::operator()(const CTabGuildAlliance::GUILDITEM& a,
                                                    const CTabGuildAlliance::GUILDITEM& b)
{
    return _op_call_0(this, a, b);
}

int32_t CTabGuildAlliance::LevelAscComp::_op_call_0(CTabGuildAlliance::LevelAscComp* pThis,
                                                    const CTabGuildAlliance::GUILDITEM& a,
                                                    const CTabGuildAlliance::GUILDITEM& b)
{
    return __sub_004B7520(pThis, nullptr, a, b);
}

int32_t CTabGuildAlliance::GradeAscComp::operator()(const CTabGuildAlliance::GUILDITEM& a,
                                                    const CTabGuildAlliance::GUILDITEM& b)
{
    return _op_call_0(this, a, b);
}

int32_t CTabGuildAlliance::GradeAscComp::_op_call_0(CTabGuildAlliance::GradeAscComp* pThis,
                                                    const CTabGuildAlliance::GUILDITEM& a,
                                                    const CTabGuildAlliance::GUILDITEM& b)
{
    return __sub_004B7560(pThis, nullptr, a, b);
}

int32_t CTabGuildAlliance::NameDescComp::operator()(const CTabGuildAlliance::GUILDITEM& arg0,
                                                    const CTabGuildAlliance::GUILDITEM& arg1)
{
    return _op_call_0(this, arg0, arg1);
}

int32_t CTabGuildAlliance::NameDescComp::_op_call_0(CTabGuildAlliance::NameDescComp* pThis,
                                                    const CTabGuildAlliance::GUILDITEM& arg0,
                                                    const CTabGuildAlliance::GUILDITEM& arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CTabGuildAlliance::JobDescComp::operator()(const CTabGuildAlliance::GUILDITEM& a,
                                                   const CTabGuildAlliance::GUILDITEM& b)
{
    return _op_call_0(this, a, b);
}

int32_t CTabGuildAlliance::JobDescComp::_op_call_0(CTabGuildAlliance::JobDescComp* pThis,
                                                   const CTabGuildAlliance::GUILDITEM& a,
                                                   const CTabGuildAlliance::GUILDITEM& b)
{
    return __sub_004B75A0(pThis, nullptr, a, b);
}

int32_t CTabGuildAlliance::LevelDescComp::operator()(const CTabGuildAlliance::GUILDITEM& a,
                                                     const CTabGuildAlliance::GUILDITEM& b)
{
    return _op_call_0(this, a, b);
}

int32_t CTabGuildAlliance::LevelDescComp::_op_call_0(CTabGuildAlliance::LevelDescComp* pThis,
                                                     const CTabGuildAlliance::GUILDITEM& a,
                                                     const CTabGuildAlliance::GUILDITEM& b)
{
    return __sub_004B75E0(pThis, nullptr, a, b);
}

int32_t CTabGuildAlliance::GradeDescComp::operator()(const CTabGuildAlliance::GUILDITEM& a,
                                                     const CTabGuildAlliance::GUILDITEM& b)
{
    return _op_call_0(this, a, b);
}

int32_t CTabGuildAlliance::GradeDescComp::_op_call_0(CTabGuildAlliance::GradeDescComp* pThis,
                                                     const CTabGuildAlliance::GUILDITEM& a,
                                                     const CTabGuildAlliance::GUILDITEM& b)
{
    return __sub_004B7620(pThis, nullptr, a, b);
}

CTabGuildAlliance::SectionData::~SectionData()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CTabGuildAlliance::SectionData::_dtor_0()
{
    return __sub_004D4720(this, nullptr);
}

CTabGuildAlliance::SectionData::SectionData(const CTabGuildAlliance::SectionData& arg0)
{
    _ctor_1(arg0);
}

void CTabGuildAlliance::SectionData::_ctor_1(const CTabGuildAlliance::SectionData& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabGuildAlliance::SectionData::SectionData()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CTabGuildAlliance::SectionData::_ctor_0()
{
    return __sub_004D4700(this, nullptr);
}

void CTabGuildAlliance::SectionData::SetPagePrev()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CTabGuildAlliance::SectionData::SetPageNext()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CTabGuildAlliance::SectionData::GetFirstOfPage()
{
    return __sub_004B8E40(this, nullptr);
}

long CTabGuildAlliance::SectionData::GetLastOfPage()
{
    return __sub_004B8E40(this, nullptr);
}

long CTabGuildAlliance::SectionData::GetCountOfPage()
{
    return __sub_004B8E40(this, nullptr);
}

void CTabGuildAlliance::SectionData::Sort()
{
    __sub_004DA290(this, nullptr);
}

CTabGuildAlliance::SectionData& CTabGuildAlliance::SectionData::operator=(const CTabGuildAlliance::SectionData& arg0)
{
    return _op_assign_9(this, arg0);
}

CTabGuildAlliance::SectionData& CTabGuildAlliance::SectionData::_op_assign_9(
    CTabGuildAlliance::SectionData* pThis, const CTabGuildAlliance::SectionData& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabFriend::~CTabFriend()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CTabFriend::_dtor_0()
{
    return __sub_004DA480(this, nullptr);
}

CTabFriend::CTabFriend(const CTabFriend& arg0)
{
    _ctor_1(arg0);
}

void CTabFriend::_ctor_1(const CTabFriend& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabFriend::CTabFriend(CUIUserList* pUIUserList)
{
    m_pUIUserList = pUIUserList;
}

void CTabFriend::_ctor_0(CUIUserList* pUIUserList)
{
    return __sub_004DA400(this, nullptr, pUIUserList);
}

void CTabFriend::OnCreate()
{
    __sub_004C2210(this, nullptr);
}

void CTabFriend::LoadData()
{
    __sub_004D9A70(this, nullptr);
}

void CTabFriend::Draw(_x_com_ptr<IWzCanvas> pCanvas, _x_com_ptr<IWzCanvas> pCanvasList,
                      _x_com_ptr<IWzCanvas> pCanvasStat)
{
    __sub_004C2CD0(this, nullptr, CreateNakedParam(pCanvas), CreateNakedParam(pCanvasList),
                   CreateNakedParam(pCanvasStat));
}

void CTabFriend::CreateButton()
{
    __sub_004BC7C0(this, nullptr);
}

void CTabFriend::OnButtonClicked(uint32_t nId)
{
    __sub_004D9410(this, nullptr, nId);
}

void CTabFriend::OnAdd(ZXString<char> sDefaultName)
{
    __sub_004D8E50(this, nullptr, CreateNakedParam(sDefaultName));
}

void CTabFriend::OnModify()
{
    __sub_004D90E0(this, nullptr);
}

void CTabFriend::OnDelete()
{
    __sub_004D47A0(this, nullptr);
}

void CTabFriend::OnWhisper()
{
    __sub_004D4CC0(this, nullptr);
}

void CTabFriend::OnChat()
{
    __sub_004C42B0(this, nullptr);
}

void CTabFriend::OnFindUser()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CTabFriend::OnPartyInvite()
{
    __sub_004C4390(this, nullptr);
}

void CTabFriend::OnSendMateMsg()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CTabFriend::OnSendMemo()
{
    __sub_004C4440(this, nullptr);
}

void CTabFriend::OnBlockFriend()
{
    __sub_004D82B0(this, nullptr);
}

void CTabFriend::OnGroupAdd(ZXString<char> sGroupName, int32_t bAdd)
{
    __sub_004D4F20(this, nullptr, CreateNakedParam(sGroupName), bAdd);
}

void CTabFriend::OnGroupWhisper()
{
    __sub_004B7250(this, nullptr);
}

void CTabFriend::OnToggleView(int32_t bShowOnlineOnly)
{
    __sub_004B9DC0(this, nullptr, bShowOnlineOnly);
}

void CTabFriend::OnAccontMoreInfoView()
{
    __sub_004B7260(this, nullptr);
}

void CTabFriend::OnFindFriendView()
{
    __sub_004B7270(this, nullptr);
}

void CTabFriend::OnClick()
{
    __sub_004D5520(this, nullptr);
}

void CTabFriend::OnDblClick()
{
    __sub_004D92A0(this, nullptr);
}

unsigned long CTabFriend::GetFriendIDFromPoint(long arg0, long arg1, long arg2)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CTabFriend::GetFriendItem(unsigned long dwFriendID, CTabFriend::FRIENDITEM& fi)
{
    return __sub_004BE9B0(this, nullptr, dwFriendID, fi);
}

long CTabFriend::GetFriendCount(const ZArray<CTabFriend::FRIENDITEM>& aFriend, int32_t bOnline)
{
    return __sub_004B8E70(this, nullptr, aFriend, bOnline);
}

long CTabFriend::GetNonRequestFriendCount(const ZArray<CTabFriend::FRIENDITEM>& aFriend)
{
    return __sub_004B8EC0(this, nullptr, aFriend);
}

ZXString<char> CTabFriend::GetToolTipString(long rx, long ry)
{
    ZXString<char> ret;
    return *__sub_004BEAA0(this, nullptr, &ret, rx, ry);
}

void CTabFriend::ChangeBlockOption(unsigned long dwFriendID, short nFlag, int32_t bBlocked)
{
    __sub_004B7280(this, nullptr, dwFriendID, nFlag, bBlocked);
}

int32_t CTabFriend::IsGroupBlocked(ZXString<char> sGroupName)
{
    return __sub_004BAA90(this, nullptr, CreateNakedParam(sGroupName));
}

long CTabFriend::ButtonID2Index(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabFriend& CTabFriend::operator=(const CTabFriend& arg0)
{
    return _op_assign_33(this, arg0);
}

CTabFriend& CTabFriend::_op_assign_33(CTabFriend* pThis, const CTabFriend& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabFriend::FRIENDITEM::~FRIENDITEM()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CTabFriend::FRIENDITEM::_dtor_0()
{
    return __sub_004BA390(this, nullptr);
}

CTabFriend::FRIENDITEM::FRIENDITEM(const CTabFriend::FRIENDITEM& __that)
{
    _ctor_1(__that);
}

void CTabFriend::FRIENDITEM::_ctor_1(const CTabFriend::FRIENDITEM& __that)
{
    return __sub_004C0810(this, nullptr, __that);
}

CTabFriend::FRIENDITEM::FRIENDITEM()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CTabFriend::FRIENDITEM::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CTabFriend::FRIENDITEM::SetBlock(int32_t arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CTabFriend::FRIENDITEM::IsBlocked()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabFriend::FRIENDITEM& CTabFriend::FRIENDITEM::operator=(const CTabFriend::FRIENDITEM& arg0)
{
    return _op_assign_5(this, arg0);
}

CTabFriend::FRIENDITEM& CTabFriend::FRIENDITEM::_op_assign_5(CTabFriend::FRIENDITEM* pThis,
                                                             const CTabFriend::FRIENDITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabFriend::GROUPITEM::~GROUPITEM()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CTabFriend::GROUPITEM::_dtor_0()
{
    return __sub_004BA400(this, nullptr);
}

CTabFriend::GROUPITEM::GROUPITEM(const CTabFriend::GROUPITEM& arg0)
{
    _ctor_1(arg0);
}

void CTabFriend::GROUPITEM::_ctor_1(const CTabFriend::GROUPITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabFriend::GROUPITEM::GROUPITEM()
{
    //TODO(ctor) UNIMPLEMENTED; //_ctor_0();
}

void CTabFriend::GROUPITEM::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabFriend::GROUPITEM& CTabFriend::GROUPITEM::operator=(const CTabFriend::GROUPITEM& arg0)
{
    return _op_assign_3(this, arg0);
}

CTabFriend::GROUPITEM& CTabFriend::GROUPITEM::_op_assign_3(CTabFriend::GROUPITEM* pThis,
                                                           const CTabFriend::GROUPITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t Friend_GroupAscComp_S::operator()(const ZXString<char>& fiLhs, const ZXString<char>& fiRhs)
{
    return _op_call_0(this, fiLhs, fiRhs);
}

int32_t Friend_GroupAscComp_S::_op_call_0(Friend_GroupAscComp_S* pThis, const ZXString<char>& fiLhs,
                                          const ZXString<char>& fiRhs)
{
    return __sub_004BE850(pThis, nullptr, fiLhs, fiRhs);
}

CTabBlackList::~CTabBlackList()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CTabBlackList::_dtor_0()
{
    return __sub_004C20F0(this, nullptr);
}

CTabBlackList::CTabBlackList(const CTabBlackList& arg0)
{
    _ctor_1(arg0);
}

void CTabBlackList::_ctor_1(const CTabBlackList& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabBlackList::CTabBlackList(CUIUserList* arg0)
{
    _ctor_0(arg0);
}

void CTabBlackList::_ctor_0(CUIUserList* arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CTabBlackList::OnCreate()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CTabBlackList::LoadData()
{
    __sub_004CF690(this, nullptr);
}

void CTabBlackList::Draw(_x_com_ptr<IWzCanvas> pCanvasList)
{
    __sub_004CF8D0(this, nullptr, CreateNakedParam(pCanvasList));
}

void CTabBlackList::CreateButton()
{
    __sub_004BC650(this, nullptr);
}

void CTabBlackList::OnButtonClicked(uint32_t nId)
{
    __sub_004D0B50(this, nullptr, nId);
}

void CTabBlackList::OnAdd()
{
    __sub_004D0600(this, nullptr);
}

void CTabBlackList::OnDelete()
{
    __sub_004D09E0(this, nullptr);
}

unsigned long CTabBlackList::GetMemberIDFromPoint(long rx, long ry, long nScrPos)
{
    return __sub_004B9940(this, nullptr, rx, ry, nScrPos);
}

long CTabBlackList::GetBlackListItem(unsigned long arg0, ZXString<char> arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZXString<char> CTabBlackList::GetToolTipString(long rx, long ry)
{
    ZXString<char> ret;
    return *__sub_004BC5C0(this, nullptr, &ret, rx, ry);
}

CTabBlackList& CTabBlackList::operator=(const CTabBlackList& arg0)
{
    return _op_assign_13(this, arg0);
}

CTabBlackList& CTabBlackList::_op_assign_13(CTabBlackList* pThis, const CTabBlackList& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabBlackList::BLACKLISTITEM::~BLACKLISTITEM()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CTabBlackList::BLACKLISTITEM::_dtor_0()
{
    return __sub_004BA720(this, nullptr);
}

CTabBlackList::BLACKLISTITEM::BLACKLISTITEM(const CTabBlackList::BLACKLISTITEM& arg0)
{
    _ctor_1(arg0);
}

void CTabBlackList::BLACKLISTITEM::_ctor_1(const CTabBlackList::BLACKLISTITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabBlackList::BLACKLISTITEM::BLACKLISTITEM()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CTabBlackList::BLACKLISTITEM::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabBlackList::BLACKLISTITEM& CTabBlackList::BLACKLISTITEM::operator=(const CTabBlackList::BLACKLISTITEM& arg0)
{
    return _op_assign_3(this, arg0);
}

CTabBlackList::BLACKLISTITEM& CTabBlackList::BLACKLISTITEM::_op_assign_3(
    CTabBlackList::BLACKLISTITEM* pThis, const CTabBlackList::BLACKLISTITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabGuild::~CTabGuild()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CTabGuild::_dtor_0()
{
    return __sub_004D7F30(this, nullptr);
}

CTabGuild::CTabGuild(const CTabGuild& arg0)
{
    _ctor_1(arg0);
}

void CTabGuild::_ctor_1(const CTabGuild& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabGuild::CTabGuild(CUIUserList* pUIUserList)
{
    _ctor_0(pUIUserList);
}

void CTabGuild::_ctor_0(CUIUserList* pUIUserList)
{
    return __sub_004D7E50(this, nullptr, pUIUserList);
}

void CTabGuild::OnCreate()
{
    __sub_004C6F60(this, nullptr);
}

void CTabGuild::LoadData()
{
    __sub_004DA5B0(this, nullptr);
}

long CTabGuild::Draw(_x_com_ptr<IWzCanvas> arg0, _x_com_ptr<IWzCanvas> arg1, _x_com_ptr<IWzCanvas> arg2)
{
    return __sub_004C71F0(this, nullptr, CreateNakedParam(arg0), CreateNakedParam(arg1), CreateNakedParam(arg2));
}

void CTabGuild::Update()
{
    __sub_004C9110(this, nullptr);
}

void CTabGuild::CreateButton()
{
    __sub_004BB520(this, nullptr);
}

void CTabGuild::OnButtonClicked(uint32_t nId)
{
    __sub_004D5310(this, nullptr, nId);
}

void CTabGuild::OnCreateGuild()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CTabGuild::OnRemoveGuild()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CTabGuild::OnInvite()
{
    __sub_004C96F0(this, nullptr);
}

void CTabGuild::OnWithdraw()
{
    __sub_004B7330(this, nullptr);
}

void CTabGuild::OnKick()
{
    __sub_004C9840(this, nullptr);
}

void CTabGuild::OnGradeChange(int32_t bUp)
{
    __sub_004C9930(this, nullptr, bUp);
}

void CTabGuild::OnWhisper()
{
    __sub_004C9A10(this, nullptr);
}

void CTabGuild::OnChat()
{
    __sub_004C9AE0(this, nullptr);
}

void CTabGuild::OnFindUser()
{
    __sub_004BF5C0(this, nullptr);
}

void CTabGuild::OnSetNotice()
{
    __sub_004C9BC0(this, nullptr);
}

void CTabGuild::OnPartyInvite()
{
    __sub_004C9DB0(this, nullptr);
}

void CTabGuild::OnListHeader(int32_t bOnline, long rx, long ry, long nScrPos)
{
    __sub_004DC060(this, nullptr, bOnline, rx, ry, nScrPos);
}

void CTabGuild::OnSortMember(int32_t bOnline, const CTabGuild::ORDER nOrder)
{
    __sub_004DA9A0(this, nullptr, bOnline, nOrder);
}

void CTabGuild::OnMaxMinToggle(int32_t bOnline)
{
    __sub_004B9E30(this, nullptr, bOnline);
}

void CTabGuild::OnPageNext(int32_t bOnline)
{
    __sub_004B9ED0(this, nullptr, bOnline);
}

void CTabGuild::OnPagePrev(int32_t bOnline)
{
    __sub_004B9E80(this, nullptr, bOnline);
}

unsigned long CTabGuild::GetMemberIDFromPoint(long rx, long ry, long nScrPos)
{
    return __sub_004B9390(this, nullptr, rx, ry, nScrPos);
}

long CTabGuild::GetGuildItem(unsigned long dwMemberID, CTabGuild::GUILDITEM& gi)
{
    return __sub_004BF190(this, nullptr, dwMemberID, gi);
}

ZXString<char> CTabGuild::GetToolTipString(long rx, long ry)
{
    ZXString<char> ret;
    return *__sub_004BF220(this, nullptr, &ret, rx, ry);
}

void CTabGuild::DeleteGuildNoticeLayer()
{
    __sub_004B8DE0(this, nullptr);
}

void CTabGuild::MakeGuildNoticeLayer()
{
    __sub_004B8FD0(this, nullptr);
}

CTabGuild& CTabGuild::operator=(const CTabGuild& arg0)
{
    return _op_assign_30(this, arg0);
}

CTabGuild& CTabGuild::_op_assign_30(CTabGuild* pThis, const CTabGuild& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabGuild::GUILDITEM::~GUILDITEM()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CTabGuild::GUILDITEM::_dtor_0()
{
    return __sub_004BA490(this, nullptr);
}

CTabGuild::GUILDITEM::GUILDITEM(const CTabGuild::GUILDITEM& __that)
{
    _ctor_1(__that);
}

void CTabGuild::GUILDITEM::_ctor_1(const CTabGuild::GUILDITEM& __that)
{
    return __sub_004C08C0(this, nullptr, __that);
}

CTabGuild::GUILDITEM::GUILDITEM()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CTabGuild::GUILDITEM::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabGuild::GUILDITEM& CTabGuild::GUILDITEM::operator=(const CTabGuild::GUILDITEM& __that)
{
    return _op_assign_3(this, __that);
}

CTabGuild::GUILDITEM& CTabGuild::GUILDITEM::_op_assign_3(CTabGuild::GUILDITEM* pThis,
                                                         const CTabGuild::GUILDITEM& __that)
{
    return __sub_004BB450(pThis, nullptr, __that);
}

int32_t CTabGuild::NameAscComp::operator()(const CTabGuild::GUILDITEM& arg0, const CTabGuild::GUILDITEM& arg1)
{
    return _op_call_0(this, arg0, arg1);
}

int32_t CTabGuild::NameAscComp::_op_call_0(CTabGuild::NameAscComp* pThis, const CTabGuild::GUILDITEM& arg0,
                                           const CTabGuild::GUILDITEM& arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CTabGuild::JobAscComp::operator()(const CTabGuild::GUILDITEM& a, const CTabGuild::GUILDITEM& b)
{
    return _op_call_0(this, a, b);
}

int32_t CTabGuild::JobAscComp::_op_call_0(CTabGuild::JobAscComp* pThis, const CTabGuild::GUILDITEM& a,
                                          const CTabGuild::GUILDITEM& b)
{
    return __sub_004B7360(pThis, nullptr, a, b);
}

int32_t CTabGuild::LevelAscComp::operator()(const CTabGuild::GUILDITEM& a, const CTabGuild::GUILDITEM& b)
{
    return _op_call_0(this, a, b);
}

int32_t CTabGuild::LevelAscComp::_op_call_0(CTabGuild::LevelAscComp* pThis, const CTabGuild::GUILDITEM& a,
                                            const CTabGuild::GUILDITEM& b)
{
    return __sub_004B73A0(pThis, nullptr, a, b);
}

int32_t CTabGuild::GradeAscComp::operator()(const CTabGuild::GUILDITEM& a, const CTabGuild::GUILDITEM& b)
{
    return _op_call_0(this, a, b);
}

int32_t CTabGuild::GradeAscComp::_op_call_0(CTabGuild::GradeAscComp* pThis, const CTabGuild::GUILDITEM& a,
                                            const CTabGuild::GUILDITEM& b)
{
    return __sub_004B73E0(pThis, nullptr, a, b);
}

int32_t CTabGuild::NameDescComp::operator()(const CTabGuild::GUILDITEM& arg0, const CTabGuild::GUILDITEM& arg1)
{
    return _op_call_0(this, arg0, arg1);
}

int32_t CTabGuild::NameDescComp::_op_call_0(CTabGuild::NameDescComp* pThis, const CTabGuild::GUILDITEM& arg0,
                                            const CTabGuild::GUILDITEM& arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CTabGuild::JobDescComp::operator()(const CTabGuild::GUILDITEM& a, const CTabGuild::GUILDITEM& b)
{
    return _op_call_0(this, a, b);
}

int32_t CTabGuild::JobDescComp::_op_call_0(CTabGuild::JobDescComp* pThis, const CTabGuild::GUILDITEM& a,
                                           const CTabGuild::GUILDITEM& b)
{
    return __sub_004B7420(pThis, nullptr, a, b);
}

int32_t CTabGuild::LevelDescComp::operator()(const CTabGuild::GUILDITEM& a, const CTabGuild::GUILDITEM& b)
{
    return _op_call_0(this, a, b);
}

int32_t CTabGuild::LevelDescComp::_op_call_0(CTabGuild::LevelDescComp* pThis, const CTabGuild::GUILDITEM& a,
                                             const CTabGuild::GUILDITEM& b)
{
    return __sub_004B7460(pThis, nullptr, a, b);
}

int32_t CTabGuild::GradeDescComp::operator()(const CTabGuild::GUILDITEM& a, const CTabGuild::GUILDITEM& b)
{
    return _op_call_0(this, a, b);
}

int32_t CTabGuild::GradeDescComp::_op_call_0(CTabGuild::GradeDescComp* pThis, const CTabGuild::GUILDITEM& a,
                                             const CTabGuild::GUILDITEM& b)
{
    return __sub_004B74A0(pThis, nullptr, a, b);
}

CTabGuild::SectionData::~SectionData()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CTabGuild::SectionData::_dtor_0()
{
    return __sub_004D46F0(this, nullptr);
}

CTabGuild::SectionData::SectionData(const CTabGuild::SectionData& arg0)
{
    _ctor_1(arg0);
}

void CTabGuild::SectionData::_ctor_1(const CTabGuild::SectionData& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabGuild::SectionData::SectionData()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CTabGuild::SectionData::_ctor_0()
{
    return __sub_004D46D0(this, nullptr);
}

void CTabGuild::SectionData::SetPagePrev()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CTabGuild::SectionData::SetPageNext()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CTabGuild::SectionData::GetFirstOfPage()
{
    return __sub_004B8E00(this, nullptr);
}

long CTabGuild::SectionData::GetLastOfPage()
{
    return __sub_004B8E00(this, nullptr);
}

long CTabGuild::SectionData::GetCountOfPage()
{
    return __sub_004B8E00(this, nullptr);
}

void CTabGuild::SectionData::Sort()
{
    __sub_004DA1B0(this, nullptr);
}

CTabGuild::SectionData& CTabGuild::SectionData::operator=(const CTabGuild::SectionData& arg0)
{
    return _op_assign_9(this, arg0);
}

CTabGuild::SectionData& CTabGuild::SectionData::_op_assign_9(CTabGuild::SectionData* pThis,
                                                             const CTabGuild::SectionData& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabParty::~CTabParty()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CTabParty::_dtor_0()
{
    return __sub_004D4620(this, nullptr);
}

CTabParty::CTabParty(const CTabParty& arg0)
{
    _ctor_1(arg0);
}

void CTabParty::_ctor_1(const CTabParty& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabParty::CTabParty(CUIUserList* arg0)
{
    _ctor_0(arg0);
}

void CTabParty::_ctor_0(CUIUserList* arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CTabParty::OnCreate()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CTabParty::LoadData()
{
    __sub_004C4570(this, nullptr);
}

void CTabParty::Draw(_x_com_ptr<IWzCanvas> pCanvas)
{
    __sub_004C4A30(this, nullptr, CreateNakedParam(pCanvas));
}

void CTabParty::CreateButton()
{
    __sub_004BAF70(this, nullptr);
}

void CTabParty::OnButtonClicked(uint32_t nId)
{
    __sub_004D85B0(this, nullptr, nId);
}

void CTabParty::OnCreateParty()
{
    __sub_004B72D0(this, nullptr);
}

void CTabParty::OnInvite()
{
    __sub_004C6E10(this, nullptr);
}

void CTabParty::OnKick()
{
    __sub_004BEC00(this, nullptr);
}

void CTabParty::OnWithdraw()
{
    __sub_004B7300(this, nullptr);
}

void CTabParty::OnWhisper()
{
    __sub_004BECB0(this, nullptr);
}

void CTabParty::OnChat()
{
    __sub_004BED80(this, nullptr);
}

void CTabParty::OnChangeBoss()
{
    __sub_004BEE50(this, nullptr);
}

void CTabParty::ToggleShowHP()
{
    __sub_004D8560(this, nullptr);
}

void CTabParty::TogglePartySearch()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ZXString<char> CTabParty::GetToolTipString(long rx, long ry)
{
    ZXString<char> ret;
    return *__sub_004BEF80(this, nullptr, &ret, rx, ry);
}

unsigned long CTabParty::GetMemberIDFromPoint(long rx, long ry, long nScrPos)
{
    return __sub_004B8EF0(this, nullptr, rx, ry, nScrPos);
}

long CTabParty::GetPartyItem(unsigned long dwFriendID, CTabParty::PARTYITEM& pi)
{
    return __sub_004BAEA0(this, nullptr, dwFriendID, pi);
}

CTabParty& CTabParty::operator=(const CTabParty& arg0)
{
    return _op_assign_20(this, arg0);
}

CTabParty& CTabParty::_op_assign_20(CTabParty* pThis, const CTabParty& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabParty::PARTYITEM::~PARTYITEM()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CTabParty::PARTYITEM::_dtor_0()
{
    return __sub_004BA420(this, nullptr);
}

CTabParty::PARTYITEM::PARTYITEM(const CTabParty::PARTYITEM& arg0)
{
    _ctor_1(arg0);
}

void CTabParty::PARTYITEM::_ctor_1(const CTabParty::PARTYITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabParty::PARTYITEM::PARTYITEM()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CTabParty::PARTYITEM::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTabParty::PARTYITEM& CTabParty::PARTYITEM::operator=(const CTabParty::PARTYITEM& __that)
{
    return _op_assign_3(this, __that);
}

CTabParty::PARTYITEM& CTabParty::PARTYITEM::_op_assign_3(CTabParty::PARTYITEM* pThis,
                                                         const CTabParty::PARTYITEM& __that)
{
    return __sub_004BAE00(pThis, nullptr, __that);
}

CWndGuildGrade::~CWndGuildGrade()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CWndGuildGrade::_dtor_0()
{
    return __sub_004CD290(this, nullptr);
}

CWndGuildGrade::CWndGuildGrade(const CWndGuildGrade& arg0)
{
    _ctor_1(arg0);
}

void CWndGuildGrade::_ctor_1(const CWndGuildGrade& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWndGuildGrade::CWndGuildGrade(CUIUserList* pUIUserList, long nLeft, long nTop)
{
    _ctor_0(pUIUserList, nLeft, nTop);
}

void CWndGuildGrade::_ctor_0(CUIUserList* pUIUserList, long nLeft, long nTop)
{
    return __sub_004CD140(this, nullptr, pUIUserList, nLeft, nTop);
}

void CWndGuildGrade::OnCreate(void* pData)
{
    __sub_004CD380(this, nullptr, pData);
}

void CWndGuildGrade::Draw(const tagRECT* arg0)
{
    __sub_004CD730(this, nullptr, arg0);
}

void CWndGuildGrade::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_004B7660(this, nullptr, msg, wParam, rx, ry);
}

void CWndGuildGrade::OnButtonClicked(uint32_t nId)
{
    __sub_004D54E0(this, nullptr, nId);
}

int32_t CWndGuildGrade::OnSetFocus(int32_t bFocus)
{
    return __sub_004CD270(this, nullptr, bFocus);
}

void CWndGuildGrade::LoadData()
{
    __sub_004BC460(this, nullptr);
}

void CWndGuildGrade::OnChangeGradeName()
{
    __sub_004CDF80(this, nullptr);
}

void CWndGuildGrade::OnSaveGradeName()
{
    __sub_004BFD70(this, nullptr);
}

long CWndGuildGrade::GetGradeIndexFromPoint(long rx, long ry)
{
    return __sub_004B6FD0(this, nullptr, rx, ry);
}

CWndGuildGrade& CWndGuildGrade::operator=(const CWndGuildGrade& arg0)
{
    return _op_assign_12(this, arg0);
}

CWndGuildGrade& CWndGuildGrade::_op_assign_12(CWndGuildGrade* pThis, const CWndGuildGrade& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIUserList::~CUIUserList()
{
    ms_pInstance = nullptr;


    CWvsContext::GetInstance()->RemoveFromStackForTab(this);

    if (auto wnd = CWndGuildGrade::GetInstance())
    {
        wnd->Destroy();
        delete wnd;
    }
    //TODO(game)
    /*if (auto wnd = CWndGuildBoard::GetInstance())
    {
        wnd->Destroy();
        delete wnd;
    }*/
    if (auto wnd = CWndAllianceGrade::GetInstance())
    {
        wnd->Destroy();
        delete wnd;
    }
    if (auto wnd = CWndGuildGrade::GetInstance())
    {
        wnd->Destroy();
        delete wnd;
    }
}

void CUIUserList::_dtor_0()
{
    this->~CUIUserList();
    //return __sub_005CCC00(this, nullptr);
}

CUIUserList::CUIUserList(const CUIUserList& arg0)
{
    _ctor_1(arg0);
}

void CUIUserList::_ctor_1(const CUIUserList& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIUserList::CUIUserList(long nDefaultTab): CUIWnd(7, 5, 244, 7, 1, 0, 0)
{
    ms_pInstance = this;
    m_nCurTab = nDefaultTab;
    CUIWnd::CreateUIWndPosSaved(264, 382, 10);
}

void CUIUserList::_ctor_0(long nDefaultTab)
{
    //return __sub_004D0B70(this, nullptr, nDefaultTab);
    new(this) CUIUserList(nDefaultTab);
}

void CUIUserList::Draw(const tagRECT* pRect)
{
    __sub_004D0CD0(this, nullptr, pRect);
}

void CUIUserList::OnCreate(void* arg0)
{
    __sub_004DB080(this, nullptr, arg0);
}

void CUIUserList::ToggleGuildInfo(int32_t bOn)
{
    __sub_004D1B30(this, nullptr, bOn);
}

void CUIUserList::ToggleAllianceGrade(int32_t bOn)
{
    __sub_004D1C00(this, nullptr, bOn);
}

void CUIUserList::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    __sub_004DC6E0(this, nullptr, nId, param1, param2);
}

void CUIUserList::OnButtonClicked(uint32_t nId)
{
    __sub_004DA370(this, nullptr, nId);
}

void CUIUserList::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_004DC1D0(this, nullptr, msg, wParam, rx, ry);
}

int32_t CUIUserList::OnMouseMove(long rx, long ry)
{
    return __sub_004BFF70(this, nullptr, rx, ry);
}

void CUIUserList::Update()
{
    __sub_005CCC00(this, nullptr);
}

void CUIUserList::OnMoveWnd(long l, long t)
{
    __sub_004B99B0(this, nullptr, l, t);
}

int32_t CUIUserList::IsMyAddon(CWnd* pWnd)
{
    return __sub_004B7A90(this, nullptr, pWnd);
}

int32_t CUIUserList::CreateGuildButton(int32_t bOnline, const CTabGuild::SectionData& sdOnOff, const tagRECT& rc,
                                       long nPos)
{
    return __sub_004C0180(this, nullptr, bOnline, sdOnOff, rc, nPos);
}

void CUIUserList::DestroyGuildButton(long nIdx)
{
    __sub_004BAB80(this, nullptr, nIdx);
}

void CUIUserList::SetViewItem()
{
    __sub_005CCC00(this, nullptr);
}

int32_t CUIUserList::CreateAllianceButton(long nIndex, const CTabGuildAlliance::SectionData& sdOnOff, const tagRECT& rc,
                                          long nPos)
{
    return __sub_004C0450(this, nullptr, nIndex, sdOnOff, rc, nPos);
}

void CUIUserList::DestroyAllianceButton(long nIdx)
{
    __sub_004BAC00(this, nullptr, nIdx);
}

void CUIUserList::SetAllianceViewItem()
{
    __sub_005CCC00(this, nullptr);
}

void CUIUserList::SetFriendViewItem()
{
    __sub_005CCC00(this, nullptr);
}

void CUIUserList::OnStatChanged()
{
    __sub_005CCC00(this, nullptr);
}

void CUIUserList::OnExpeditionChanged()
{
    __sub_005CCC00(this, nullptr);
}

void CUIUserList::SetTooltipStr(ZXString<char> sMsg)
{
    __sub_004BAC80(this, nullptr, CreateNakedParam(sMsg));
}

TabExpedition* CUIUserList::GetTabExpedition()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIUserList::ResetInfo()
{
    __sub_005CCC00(this, nullptr);
}

long CUIUserList::GetCurrentTab()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIUserList::SetCurrentTab(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

tagRECT CUIUserList::GetToolTipArea(long arg0, long arg1, long arg2, long arg3)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIUserList::ToggleTab()
{
    __sub_005CCC00(this, nullptr);
}

void CUIUserList::OnSetNotice()
{
    __sub_005CCC00(this, nullptr);
}

void CUIUserList::OnTabChanged(long nTab)
{
    __sub_004DC580(this, nullptr, nTab);
}

void CUIUserList::SetButton()
{
    __sub_005CCC00(this, nullptr);
}

void CUIUserList::SetScrollBar(int32_t bOnInitialize)
{
    __sub_004B7920(this, nullptr, bOnInitialize);
}

void CUIUserList::SetScrollRange(long nRemain)
{
    __sub_004B7A50(this, nullptr, nRemain);
}

CUIUserList& CUIUserList::operator=(const CUIUserList& arg0)
{
    return _op_assign_38(this, arg0);
}

CUIUserList& CUIUserList::_op_assign_38(CUIUserList* pThis, const CUIUserList& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWndAllianceGrade::~CWndAllianceGrade()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CWndAllianceGrade::_dtor_0()
{
    return __sub_004CE540(this, nullptr);
}

CWndAllianceGrade::CWndAllianceGrade(const CWndAllianceGrade& arg0)
{
    _ctor_1(arg0);
}

void CWndAllianceGrade::_ctor_1(const CWndAllianceGrade& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CWndAllianceGrade::CWndAllianceGrade(CUIUserList* pUIUserList, long nLeft, long nTop)
{
    _ctor_0(pUIUserList, nLeft, nTop);
}

void CWndAllianceGrade::_ctor_0(CUIUserList* pUIUserList, long nLeft, long nTop)
{
    return __sub_004CE3D0(this, nullptr, pUIUserList, nLeft, nTop);
}

void CWndAllianceGrade::OnCreate(void* pData)
{
    __sub_004CE650(this, nullptr, pData);
}

void CWndAllianceGrade::Draw(const tagRECT* arg0)
{
    __sub_004CEA00(this, nullptr, arg0);
}

void CWndAllianceGrade::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_004B76A0(this, nullptr, msg, wParam, rx, ry);
}

void CWndAllianceGrade::OnButtonClicked(uint32_t nId)
{
    __sub_004D5500(this, nullptr, nId);
}

int32_t CWndAllianceGrade::OnSetFocus(int32_t bFocus)
{
    return __sub_004CE520(this, nullptr, bFocus);
}

void CWndAllianceGrade::LoadData()
{
    __sub_004BC510(this, nullptr);
}

void CWndAllianceGrade::OnChangeGradeName()
{
    __sub_004CF0B0(this, nullptr);
}

void CWndAllianceGrade::OnSaveGradeName()
{
    __sub_004CF4F0(this, nullptr);
}

long CWndAllianceGrade::GetGradeIndexFromPoint(long rx, long ry)
{
    return __sub_004B7040(this, nullptr, rx, ry);
}

CWndAllianceGrade& CWndAllianceGrade::operator=(const CWndAllianceGrade& arg0)
{
    return _op_assign_12(this, arg0);
}

CWndAllianceGrade& CWndAllianceGrade::_op_assign_12(CWndAllianceGrade* pThis, const CWndAllianceGrade& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIPartyHP::~CUIPartyHP()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIPartyHP::_dtor_0()
{
    return __sub_004D6330(this, nullptr);
}

CUIPartyHP::CUIPartyHP(const CUIPartyHP& arg0)
{
    _ctor_1(arg0);
}

void CUIPartyHP::_ctor_1(const CUIPartyHP& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIPartyHP::CUIPartyHP()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CUIPartyHP::_ctor_0()
{
    return __sub_004D5920(this, nullptr);
}

void CUIPartyHP::Draw(const tagRECT* pRect)
{
    __sub_004D1F70(this, nullptr, pRect);
}

void CUIPartyHP::Create()
{
    __sub_004D1CE0(this, nullptr);
}

void CUIPartyHP::Reset()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIPartyHP& CUIPartyHP::operator=(const CUIPartyHP& arg0)
{
    return _op_assign_9(this, arg0);
}

CUIPartyHP& CUIPartyHP::_op_assign_9(CUIPartyHP* pThis, const CUIPartyHP& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void __cdecl DownHeap_CTabGuild__GUILDITEM_CTabGuild__GradeAscComp_(ZArray<CTabGuild::GUILDITEM>& a, int32_t nIdx,
                                                                    int32_t nLen, int32_t nFrom,
                                                                    CTabGuild::GradeAscComp& comp)
{
    return __sub_004C12F0(a, nIdx, nLen, nFrom, comp);
}

void __cdecl DownHeap_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nIdx, int32_t nLen, int32_t nFrom,
    CTabGuildAlliance::LevelAscComp& comp)
{
    return __sub_004C1B30(a, nIdx, nLen, nFrom, comp);
}

void __cdecl InsertionSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuildAlliance::JobAscComp& comp)
{
    return __sub_004BE190(a, nFrom, nTo, comp);
}

void __cdecl DownHeap_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nIdx, int32_t nLen, int32_t nFrom,
    CTabGuildAlliance::NameAscComp& comp)
{
    return __sub_004C1590(a, nIdx, nLen, nFrom, comp);
}

void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, CTabGuildAlliance::LevelAscComp comp)
{
    return __sub_004D9930(a, CreateNakedParam(comp));
}

void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__NameDescComp_(ZArray<CTabGuild::GUILDITEM>& a,
                                                                 CTabGuild::NameDescComp comp)
{
    return __sub_004D9630(a, CreateNakedParam(comp));
}

void __cdecl DownHeap_CTabGuild__GUILDITEM_CTabGuild__JobAscComp_(ZArray<CTabGuild::GUILDITEM>& a, int32_t nIdx,
                                                                  int32_t nLen, int32_t nFrom,
                                                                  CTabGuild::JobAscComp& comp)
{
    return __sub_004C0DB0(a, nIdx, nLen, nFrom, comp);
}

void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, CTabGuildAlliance::JobAscComp comp)
{
    return __sub_004D9890(a, CreateNakedParam(comp));
}

void __cdecl InsertionSort_CTabGuild__GUILDITEM_CTabGuild__JobDescComp_(ZArray<CTabGuild::GUILDITEM>& a, int32_t nFrom,
                                                                        int32_t nTo, CTabGuild::JobDescComp& comp)
{
    return __sub_004BD9B0(a, nFrom, nTo, comp);
}

void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__LevelDescComp_(ZArray<CTabGuild::GUILDITEM>& a, __POSITION* posFrom,
                                                                  __POSITION* posTo, CTabGuild::LevelDescComp comp)
{
    return __sub_004D8980(a, posFrom, posTo, CreateNakedParam(comp));
}

int32_t __cdecl Partition_CTabGuild__GUILDITEM_CTabGuild__LevelAscComp_(ZArray<CTabGuild::GUILDITEM>& k, int32_t arg1,
                                                                        int32_t arg2, const CTabGuild::GUILDITEM& arg3,
                                                                        CTabGuild::LevelAscComp& arg4)
{
    return __sub_004B8040(k, arg1, arg2, arg3, arg4);
}

void __cdecl InsertionSort_CTabGuild__GUILDITEM_CTabGuild__GradeDescComp_(
    ZArray<CTabGuild::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuild::GradeDescComp& comp)
{
    return __sub_004BDE30(a, nFrom, nTo, comp);
}

bool __cdecl is_offline(const CTabFriend::FRIENDITEM& f)
{
    auto nFlag = f.nFlag;
    return f.bTalkBlockedFriend
        || f.bListenBlockedFriend
        || (nFlag == 0 || nFlag == 3 || nFlag == 4) && f.nChannelID < 0
        || nFlag == 2;
}

void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, __POSITION* posFrom, __POSITION* posTo,
    CTabGuildAlliance::GradeAscComp comp)
{
    return __sub_004D8D70(a, posFrom, posTo, CreateNakedParam(comp));
}

int32_t __cdecl Partition_CTabGuild__GUILDITEM_CTabGuild__GradeAscComp_(ZArray<CTabGuild::GUILDITEM>& k, int32_t arg1,
                                                                        int32_t arg2, const CTabGuild::GUILDITEM& arg3,
                                                                        CTabGuild::GradeAscComp& arg4)
{
    return __sub_004B8240(k, arg1, arg2, arg3, arg4);
}

void __cdecl DownHeap_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nIdx, int32_t nLen, int32_t nFrom,
    CTabGuildAlliance::JobAscComp& comp)
{
    return __sub_004C1850(a, nIdx, nLen, nFrom, comp);
}

int32_t __cdecl Partition_CTabGuild__GUILDITEM_CTabGuild__GradeDescComp_(
    ZArray<CTabGuild::GUILDITEM>& k, int32_t arg1, int32_t arg2, const CTabGuild::GUILDITEM& arg3,
    CTabGuild::GradeDescComp& arg4)
{
    return __sub_004B8340(k, arg1, arg2, arg3, arg4);
}

void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, CTabGuildAlliance::GradeDescComp comp)
{
    return __sub_004D9A20(a, CreateNakedParam(comp));
}

int32_t __cdecl Partition_CTabGuild__GUILDITEM_CTabGuild__NameAscComp_(ZArray<CTabGuild::GUILDITEM>& k, int32_t arg1,
                                                                       int32_t arg2, const CTabGuild::GUILDITEM& arg3,
                                                                       CTabGuild::NameAscComp& arg4)
{
    return __sub_004B7BC0(k, arg1, arg2, arg3, arg4);
}

const CTabGuildAlliance::GUILDITEM&__cdecl Median_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameDescComp_(
    const CTabGuildAlliance::GUILDITEM& a, const CTabGuildAlliance::GUILDITEM& b, const CTabGuildAlliance::GUILDITEM& c,
    CTabGuildAlliance::NameDescComp& comp)
{
    return __sub_004B85E0(a, b, c, comp);
}

void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, __POSITION* posFrom, __POSITION* posTo,
    CTabGuildAlliance::NameAscComp comp)
{
    return __sub_004D8AD0(a, posFrom, posTo, CreateNakedParam(comp));
}

int32_t __cdecl Partition_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& k, int32_t arg1, int32_t arg2, const CTabGuildAlliance::GUILDITEM& arg3,
    CTabGuildAlliance::JobAscComp& arg4)
{
    return __sub_004B8780(k, arg1, arg2, arg3, arg4);
}

void __cdecl DownHeap_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nIdx, int32_t nLen, int32_t nFrom,
    CTabGuildAlliance::GradeDescComp& comp)
{
    return __sub_004C1F80(a, nIdx, nLen, nFrom, comp);
}

void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__JobAscComp_(ZArray<CTabGuild::GUILDITEM>& a,
                                                               CTabGuild::JobAscComp comp)
{
    return __sub_004D9670(a, CreateNakedParam(comp));
}

int32_t __cdecl Partition_CTabGuild__GUILDITEM_CTabGuild__JobDescComp_(ZArray<CTabGuild::GUILDITEM>& k, int32_t arg1,
                                                                       int32_t arg2, const CTabGuild::GUILDITEM& arg3,
                                                                       CTabGuild::JobDescComp& arg4)
{
    return __sub_004B7F40(k, arg1, arg2, arg3, arg4);
}

void __cdecl InsertionSort_CTabGuild__GUILDITEM_CTabGuild__LevelAscComp_(
    ZArray<CTabGuild::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuild::LevelAscComp& comp)
{
    return __sub_004BDAD0(a, nFrom, nTo, comp);
}

void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, CTabGuildAlliance::JobDescComp comp)
{
    return __sub_004D98E0(a, CreateNakedParam(comp));
}

void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__LevelDescComp_(ZArray<CTabGuild::GUILDITEM>& a,
                                                                  CTabGuild::LevelDescComp comp)
{
    return __sub_004D9730(a, CreateNakedParam(comp));
}

void __cdecl DownHeap_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nIdx, int32_t nLen, int32_t nFrom,
    CTabGuildAlliance::JobDescComp& comp)
{
    return __sub_004C19C0(a, nIdx, nLen, nFrom, comp);
}

void __cdecl InsertionSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuildAlliance::LevelAscComp& comp)
{
    return __sub_004BE3D0(a, nFrom, nTo, comp);
}

void __cdecl DownHeap_CTabGuild__GUILDITEM_CTabGuild__NameDescComp_(ZArray<CTabGuild::GUILDITEM>& a, int32_t nIdx,
                                                                    int32_t nLen, int32_t nFrom,
                                                                    CTabGuild::NameDescComp& comp)
{
    return __sub_004C0C60(a, nIdx, nLen, nFrom, comp);
}

void __cdecl DownHeap_CTabGuild__GUILDITEM_CTabGuild__LevelDescComp_(ZArray<CTabGuild::GUILDITEM>& a, int32_t nIdx,
                                                                     int32_t nLen, int32_t nFrom,
                                                                     CTabGuild::LevelDescComp& comp)
{
    return __sub_004C11A0(a, nIdx, nLen, nFrom, comp);
}

int32_t __cdecl Partition_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& k, int32_t arg1, int32_t arg2, const CTabGuildAlliance::GUILDITEM& arg3,
    CTabGuildAlliance::LevelAscComp& arg4)
{
    return __sub_004B89A0(k, arg1, arg2, arg3, arg4);
}

int32_t __cdecl Partition_CTabGuild__GUILDITEM_CTabGuild__JobAscComp_(ZArray<CTabGuild::GUILDITEM>& k, int32_t arg1,
                                                                      int32_t arg2, const CTabGuild::GUILDITEM& arg3,
                                                                      CTabGuild::JobAscComp& arg4)
{
    return __sub_004B7E40(k, arg1, arg2, arg3, arg4);
}

int32_t __cdecl Partition_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& k, int32_t arg1, int32_t arg2, const CTabGuildAlliance::GUILDITEM& arg3,
    CTabGuildAlliance::LevelDescComp& arg4)
{
    return __sub_004B8AB0(k, arg1, arg2, arg3, arg4);
}

void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, __POSITION* posFrom, __POSITION* posTo,
    CTabGuildAlliance::NameDescComp comp)
{
    return __sub_004D8B40(a, posFrom, posTo, CreateNakedParam(comp));
}

void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__JobDescComp_(ZArray<CTabGuild::GUILDITEM>& a, __POSITION* posFrom,
                                                                __POSITION* posTo, CTabGuild::JobDescComp comp)
{
    return __sub_004D88A0(a, posFrom, posTo, CreateNakedParam(comp));
}

void __cdecl InsertionSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuildAlliance::GradeAscComp& comp)
{
    return __sub_004BE610(a, nFrom, nTo, comp);
}

void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, __POSITION* posFrom, __POSITION* posTo, CTabGuildAlliance::JobAscComp comp)
{
    return __sub_004D8BB0(a, posFrom, posTo, CreateNakedParam(comp));
}

int32_t __cdecl Partition_CTabGuild__GUILDITEM_CTabGuild__LevelDescComp_(
    ZArray<CTabGuild::GUILDITEM>& k, int32_t arg1, int32_t arg2, const CTabGuild::GUILDITEM& arg3,
    CTabGuild::LevelDescComp& arg4)
{
    return __sub_004B8140(k, arg1, arg2, arg3, arg4);
}

void __cdecl InsertionSort_CTabGuild__GUILDITEM_CTabGuild__JobAscComp_(ZArray<CTabGuild::GUILDITEM>& a, int32_t nFrom,
                                                                       int32_t nTo, CTabGuild::JobAscComp& comp)
{
    return __sub_004BD890(a, nFrom, nTo, comp);
}

void __cdecl InsertionSort_CTabFriend__FRIENDITEM_FI_NameAscComp_(ZArray<CTabFriend::FRIENDITEM>& a, int32_t nFrom,
                                                                  int32_t nTo, FI_NameAscComp& comp)
{
    return __sub_004BD450(a, nFrom, nTo, comp);
}

void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, __POSITION* posFrom, __POSITION* posTo,
    CTabGuildAlliance::LevelAscComp comp)
{
    return __sub_004D8C90(a, posFrom, posTo, CreateNakedParam(comp));
}

void __cdecl DownHeap_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nIdx, int32_t nLen, int32_t nFrom,
    CTabGuildAlliance::LevelDescComp& comp)
{
    return __sub_004C1CA0(a, nIdx, nLen, nFrom, comp);
}

int32_t __cdecl Partition_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& k, int32_t arg1, int32_t arg2, const CTabGuildAlliance::GUILDITEM& arg3,
    CTabGuildAlliance::JobDescComp& arg4)
{
    return __sub_004B8890(k, arg1, arg2, arg3, arg4);
}

void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__JobDescComp_(ZArray<CTabGuild::GUILDITEM>& a,
                                                                CTabGuild::JobDescComp comp)
{
    return __sub_004D96B0(a, CreateNakedParam(comp));
}

void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, __POSITION* posFrom, __POSITION* posTo,
    CTabGuildAlliance::JobDescComp comp)
{
    return __sub_004D8C20(a, posFrom, posTo, CreateNakedParam(comp));
}

void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__NameDescComp_(ZArray<CTabGuild::GUILDITEM>& a, __POSITION* posFrom,
                                                                 __POSITION* posTo, CTabGuild::NameDescComp comp)
{
    return __sub_004D87C0(a, posFrom, posTo, CreateNakedParam(comp));
}

void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__GradeDescComp_(ZArray<CTabGuild::GUILDITEM>& a, __POSITION* posFrom,
                                                                  __POSITION* posTo, CTabGuild::GradeDescComp comp)
{
    return __sub_004D8A60(a, posFrom, posTo, CreateNakedParam(comp));
}

void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__GradeAscComp_(ZArray<CTabGuild::GUILDITEM>& a,
                                                                 CTabGuild::GradeAscComp comp)
{
    return __sub_004D9770(a, CreateNakedParam(comp));
}

void __cdecl InsertionSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuildAlliance::JobDescComp& comp)
{
    return __sub_004BE2B0(a, nFrom, nTo, comp);
}

const CTabGuild::GUILDITEM&__cdecl Median_CTabGuild__GUILDITEM_CTabGuild__NameDescComp_(
    const CTabGuild::GUILDITEM& a, const CTabGuild::GUILDITEM& b, const CTabGuild::GUILDITEM& c,
    CTabGuild::NameDescComp& comp)
{
    return __sub_004B7CC0(a, b, c, comp);
}

int32_t __cdecl Partition_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& k, int32_t arg1, int32_t arg2, const CTabGuildAlliance::GUILDITEM& arg3,
    CTabGuildAlliance::GradeAscComp& arg4)
{
    return __sub_004B8BC0(k, arg1, arg2, arg3, arg4);
}

void __cdecl InsertionSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuildAlliance::NameAscComp& comp)
{
    return __sub_004BDF50(a, nFrom, nTo, comp);
}

void __cdecl InsertionSort_CTabFriend__FRIENDITEM_Friend_GroupAscComp_CTabFriend__FRIENDITEM__(
    ZArray<CTabFriend::FRIENDITEM>& a, int32_t nFrom, int32_t nTo, Friend_GroupAscComp<CTabFriend::FRIENDITEM>& comp)
{
    return __sub_004D3450(a, nFrom, nTo, comp);
}

int32_t __cdecl Partition_CTabGuild__GUILDITEM_CTabGuild__NameDescComp_(ZArray<CTabGuild::GUILDITEM>& k, int32_t arg1,
                                                                        int32_t arg2, const CTabGuild::GUILDITEM& arg3,
                                                                        CTabGuild::NameDescComp& arg4)
{
    return __sub_004B7D40(k, arg1, arg2, arg3, arg4);
}

void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__LevelAscComp_(ZArray<CTabGuild::GUILDITEM>& a, __POSITION* posFrom,
                                                                 __POSITION* posTo, CTabGuild::LevelAscComp comp)
{
    return __sub_004D8910(a, posFrom, posTo, CreateNakedParam(comp));
}

void __cdecl DownHeap_CTabGuild__GUILDITEM_CTabGuild__NameAscComp_(ZArray<CTabGuild::GUILDITEM>& a, int32_t nIdx,
                                                                   int32_t nLen, int32_t nFrom,
                                                                   CTabGuild::NameAscComp& comp)
{
    return __sub_004C0B10(a, nIdx, nLen, nFrom, comp);
}

void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__NameAscComp_(ZArray<CTabGuild::GUILDITEM>& a, __POSITION* posFrom,
                                                                __POSITION* posTo, CTabGuild::NameAscComp comp)
{
    return __sub_004D8750(a, posFrom, posTo, CreateNakedParam(comp));
}

void __cdecl DownHeap_CTabGuild__GUILDITEM_CTabGuild__JobDescComp_(ZArray<CTabGuild::GUILDITEM>& a, int32_t nIdx,
                                                                   int32_t nLen, int32_t nFrom,
                                                                   CTabGuild::JobDescComp& comp)
{
    return __sub_004C0F00(a, nIdx, nLen, nFrom, comp);
}

void __cdecl InsertionSort_CTabGuild__GUILDITEM_CTabGuild__NameDescComp_(
    ZArray<CTabGuild::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuild::NameDescComp& comp)
{
    return __sub_004BD770(a, nFrom, nTo, comp);
}

void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, __POSITION* posFrom, __POSITION* posTo,
    CTabGuildAlliance::GradeDescComp comp)
{
    return __sub_004D8DE0(a, posFrom, posTo, CreateNakedParam(comp));
}

void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, CTabGuildAlliance::NameAscComp comp)
{
    return __sub_004D97F0(a, CreateNakedParam(comp));
}

void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, CTabGuildAlliance::LevelDescComp comp)
{
    return __sub_004D9980(a, CreateNakedParam(comp));
}

void __cdecl InsertionSort_CTabGuild__GUILDITEM_CTabGuild__GradeAscComp_(
    ZArray<CTabGuild::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuild::GradeAscComp& comp)
{
    return __sub_004BDD10(a, nFrom, nTo, comp);
}

void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__GradeDescComp_(ZArray<CTabGuild::GUILDITEM>& a,
                                                                  CTabGuild::GradeDescComp comp)
{
    return __sub_004D97B0(a, CreateNakedParam(comp));
}

int32_t __cdecl Partition_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& i, int32_t arg1, int32_t arg2, const CTabGuildAlliance::GUILDITEM& arg3,
    CTabGuildAlliance::NameDescComp& arg4)
{
    return __sub_004B8660(i, arg1, arg2, arg3, arg4);
}

void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__JobAscComp_(ZArray<CTabGuild::GUILDITEM>& a, __POSITION* posFrom,
                                                               __POSITION* posTo, CTabGuild::JobAscComp comp)
{
    return __sub_004D8830(a, posFrom, posTo, CreateNakedParam(comp));
}

const CTabGuildAlliance::GUILDITEM&__cdecl Median_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameAscComp_(
    const CTabGuildAlliance::GUILDITEM& a, const CTabGuildAlliance::GUILDITEM& b, const CTabGuildAlliance::GUILDITEM& c,
    CTabGuildAlliance::NameAscComp& comp)
{
    return __sub_004B8440(a, b, c, comp);
}

void __cdecl InsertionSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuildAlliance::GradeDescComp& comp)
{
    return __sub_004BE730(a, nFrom, nTo, comp);
}

void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, __POSITION* posFrom, __POSITION* posTo,
    CTabGuildAlliance::LevelDescComp comp)
{
    return __sub_004D8D00(a, posFrom, posTo, CreateNakedParam(comp));
}

void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__LevelAscComp_(ZArray<CTabGuild::GUILDITEM>& a,
                                                                 CTabGuild::LevelAscComp comp)
{
    return __sub_004D96F0(a, CreateNakedParam(comp));
}

void __cdecl DownHeap_CTabGuild__GUILDITEM_CTabGuild__GradeDescComp_(ZArray<CTabGuild::GUILDITEM>& a, int32_t nIdx,
                                                                     int32_t nLen, int32_t nFrom,
                                                                     CTabGuild::GradeDescComp& comp)
{
    return __sub_004C1440(a, nIdx, nLen, nFrom, comp);
}

void __cdecl InsertionSort_CTabGuild__GUILDITEM_CTabGuild__LevelDescComp_(
    ZArray<CTabGuild::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuild::LevelDescComp& comp)
{
    return __sub_004BDBF0(a, nFrom, nTo, comp);
}

void __cdecl DownHeap_CTabGuild__GUILDITEM_CTabGuild__LevelAscComp_(ZArray<CTabGuild::GUILDITEM>& a, int32_t nIdx,
                                                                    int32_t nLen, int32_t nFrom,
                                                                    CTabGuild::LevelAscComp& comp)
{
    return __sub_004C1050(a, nIdx, nLen, nFrom, comp);
}

const CTabGuild::GUILDITEM&__cdecl Median_CTabGuild__GUILDITEM_CTabGuild__NameAscComp_(
    const CTabGuild::GUILDITEM& a, const CTabGuild::GUILDITEM& b, const CTabGuild::GUILDITEM& c,
    CTabGuild::NameAscComp& comp)
{
    return __sub_004B7B40(a, b, c, comp);
}

void __cdecl InsertionSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuildAlliance::LevelDescComp& comp)
{
    return __sub_004BE4F0(a, nFrom, nTo, comp);
}

void __cdecl DownHeap_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nIdx, int32_t nLen, int32_t nFrom,
    CTabGuildAlliance::GradeAscComp& comp)
{
    return __sub_004C1E10(a, nIdx, nLen, nFrom, comp);
}

int32_t __cdecl Partition_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& i, int32_t arg1, int32_t arg2, const CTabGuildAlliance::GUILDITEM& arg3,
    CTabGuildAlliance::NameAscComp& arg4)
{
    return __sub_004B84C0(i, arg1, arg2, arg3, arg4);
}

int32_t __cdecl Partition_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& k, int32_t arg1, int32_t arg2, const CTabGuildAlliance::GUILDITEM& arg3,
    CTabGuildAlliance::GradeDescComp& arg4)
{
    return __sub_004B8CD0(k, arg1, arg2, arg3, arg4);
}

void __cdecl InsertionSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuildAlliance::NameDescComp& comp)
{
    return __sub_004BE070(a, nFrom, nTo, comp);
}

void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__GradeAscComp_(ZArray<CTabGuild::GUILDITEM>& a, __POSITION* posFrom,
                                                                 __POSITION* posTo, CTabGuild::GradeAscComp comp)
{
    return __sub_004D89F0(a, posFrom, posTo, CreateNakedParam(comp));
}

void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, CTabGuildAlliance::GradeAscComp comp)
{
    return __sub_004D99D0(a, CreateNakedParam(comp));
}

void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, CTabGuildAlliance::NameDescComp comp)
{
    return __sub_004D9840(a, CreateNakedParam(comp));
}

void __cdecl InsertionSort_CTabGuild__GUILDITEM_CTabGuild__NameAscComp_(ZArray<CTabGuild::GUILDITEM>& a, int32_t nFrom,
                                                                        int32_t nTo, CTabGuild::NameAscComp& comp)
{
    return __sub_004BD650(a, nFrom, nTo, comp);
}

long __cdecl get_channel(const CTabFriend::FRIENDITEM& fi)
{
    if (is_offline(fi))
        return 2;
    auto ch = fi.nChannelID;
    return ch < 0 ? 0 : ch;
}

void __cdecl DownHeap_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nIdx, int32_t nLen, int32_t nFrom,
    CTabGuildAlliance::NameDescComp& comp)
{
    return __sub_004C16F0(a, nIdx, nLen, nFrom, comp);
}

void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__NameAscComp_(ZArray<CTabGuild::GUILDITEM>& a,
                                                                CTabGuild::NameAscComp comp)
{
    return __sub_004D95F0(a, CreateNakedParam(comp));
}
