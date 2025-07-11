// UIUserList.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Wnd/Wnd.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "UIExpeditionTab/UIExpeditionTab.hpp"
#include "UIWnd/UIWnd.hpp"

// Level: 0 0x9e5e
class CTabGuildAlliance;
// Level: 0 0x9c8a
class CTabFriend;
// Level: 0 0x1f85
struct Friend_GroupAscComp_S;
// Level: 0 0x9f1c
class CTabBlackList;
// Level: 0 0x9dcc
class CTabGuild;
// Level: 0 0x9d69
class CTabParty;
// Level: 1 0x9edf
class CWndGuildGrade;
// Level: 1 0x9d0f
class CUIUserList;
// Level: 1 0x9efd
class CWndAllianceGrade;
// Level: 1 0xa053
class CUIPartyHP;

class CTabGuildAlliance
{
public:
    enum ORDER
    {
        LIST_HEADER = 0,
        NAME = 1,
        JOB = 2,
        LEVEL = 3,
        GRADE = 4,
        ORDER_NO = 5
    };

    // Nested
public:
    struct GUILDITEM
    {
        // Nested
        // Fields
    public:
        unsigned long dwMemberID{};

    public:
        ZXString<char> sMemberName;

    public:
        ZXString<char> sJobName;

    public:
        long nJob{};

    public:
        long nLevel{};

    public:
        long nGrade{};

    public:
        tagRECT rt{};

    public:
        ZXString<char> sGradeName;

    public:
        tagRECT rcMemberName{};

    public:
        tagRECT rcJobName{};

    public:
        tagRECT rcLevel{};

    public:
        tagRECT rcGrade{};

    public:
        int32_t bMemberNameReduced{};

    public:
        int32_t bJobNameReduced{};

    public:
        long nAllianceGrade{};
        // Methods
    public:
        ~GUILDITEM();

    public:
        void _dtor_0();

    public:
        GUILDITEM(const CTabGuildAlliance::GUILDITEM& __that);

    public:
        void _ctor_1(const CTabGuildAlliance::GUILDITEM& __that);

    public:
        GUILDITEM();

    public:
        void _ctor_0();

    public:
        CTabGuildAlliance::GUILDITEM& operator=(const CTabGuildAlliance::GUILDITEM& __that);

    public:
        static CTabGuildAlliance::GUILDITEM& _op_assign_3(CTabGuildAlliance::GUILDITEM* pThis,
                                                          const CTabGuildAlliance::GUILDITEM& __that);
    };

public:
    struct NameAscComp
    {
        // Nested
        // Fields
        // Methods
    public:
        int32_t operator()(const CTabGuildAlliance::GUILDITEM& arg0, const CTabGuildAlliance::GUILDITEM& arg1);

    public:
        static int32_t _op_call_0(CTabGuildAlliance::NameAscComp* pThis, const CTabGuildAlliance::GUILDITEM& arg0,
                                  const CTabGuildAlliance::GUILDITEM& arg1);
    };

public:
    struct JobAscComp
    {
        // Nested
        // Fields
        // Methods
    public:
        int32_t operator()(const CTabGuildAlliance::GUILDITEM& a, const CTabGuildAlliance::GUILDITEM& b);

    public:
        static int32_t _op_call_0(CTabGuildAlliance::JobAscComp* pThis, const CTabGuildAlliance::GUILDITEM& a,
                                  const CTabGuildAlliance::GUILDITEM& b);
    };

public:
    struct LevelAscComp
    {
        // Nested
        // Fields
        // Methods
    public:
        int32_t operator()(const CTabGuildAlliance::GUILDITEM& a, const CTabGuildAlliance::GUILDITEM& b);

    public:
        static int32_t _op_call_0(CTabGuildAlliance::LevelAscComp* pThis, const CTabGuildAlliance::GUILDITEM& a,
                                  const CTabGuildAlliance::GUILDITEM& b);
    };

public:
    struct GradeAscComp
    {
        // Nested
        // Fields
        // Methods
    public:
        int32_t operator()(const CTabGuildAlliance::GUILDITEM& a, const CTabGuildAlliance::GUILDITEM& b);

    public:
        static int32_t _op_call_0(CTabGuildAlliance::GradeAscComp* pThis, const CTabGuildAlliance::GUILDITEM& a,
                                  const CTabGuildAlliance::GUILDITEM& b);
    };

public:
    struct NameDescComp
    {
        // Nested
        // Fields
        // Methods
    public:
        int32_t operator()(const CTabGuildAlliance::GUILDITEM& arg0, const CTabGuildAlliance::GUILDITEM& arg1);

    public:
        static int32_t _op_call_0(CTabGuildAlliance::NameDescComp* pThis, const CTabGuildAlliance::GUILDITEM& arg0,
                                  const CTabGuildAlliance::GUILDITEM& arg1);
    };

public:
    struct JobDescComp
    {
        // Nested
        // Fields
        // Methods
    public:
        int32_t operator()(const CTabGuildAlliance::GUILDITEM& a, const CTabGuildAlliance::GUILDITEM& b);

    public:
        static int32_t _op_call_0(CTabGuildAlliance::JobDescComp* pThis, const CTabGuildAlliance::GUILDITEM& a,
                                  const CTabGuildAlliance::GUILDITEM& b);
    };

public:
    struct LevelDescComp
    {
        // Nested
        // Fields
        // Methods
    public:
        int32_t operator()(const CTabGuildAlliance::GUILDITEM& a, const CTabGuildAlliance::GUILDITEM& b);

    public:
        static int32_t _op_call_0(CTabGuildAlliance::LevelDescComp* pThis, const CTabGuildAlliance::GUILDITEM& a,
                                  const CTabGuildAlliance::GUILDITEM& b);
    };

public:
    struct GradeDescComp
    {
        // Nested
        // Fields
        // Methods
    public:
        int32_t operator()(const CTabGuildAlliance::GUILDITEM& a, const CTabGuildAlliance::GUILDITEM& b);

    public:
        static int32_t _op_call_0(CTabGuildAlliance::GradeDescComp* pThis, const CTabGuildAlliance::GUILDITEM& a,
                                  const CTabGuildAlliance::GUILDITEM& b);
    };

public:
    struct SectionData
    {
        // Nested
    public:
        enum ITEMPERPAGE
        {
            ITEMPERPAGE = 5
        };

        // Fields
    public:
        int32_t m_bMaximized{};

    public:
        tagPOINT m_ptBtMaxMin{};

    public:
        tagPOINT m_ptBtPage{};

    public:
        long m_nPageBtSpace{};

    public:
        long m_nPage{};

    public:
        long m_nMaxPage{};

    public:
        std::array<tagRECT, 5> m_arcArrange{};

    public:
        ZArray<CTabGuildAlliance::GUILDITEM> m_aGuildItem;

    public:
        long m_nTotalCount{};

    public:
        CTabGuildAlliance::ORDER m_nOrder;

    public:
        int32_t m_bAscend{};
        // Methods
    public:
        ~SectionData();

    public:
        void _dtor_0();

    public:
        SectionData(const CTabGuildAlliance::SectionData& arg0);

    public:
        void _ctor_1(const CTabGuildAlliance::SectionData& arg0);

        CTOR_DEFAULT(SectionData)

    public:
        SectionData();

    public:
        void _ctor_0();

    public:
        void SetPagePrev();

    public:
        void SetPageNext();

    public:
        long GetFirstOfPage();

    public:
        long GetLastOfPage();

    public:
        long GetCountOfPage();

    public:
        void Sort();

    public:
        CTabGuildAlliance::SectionData& operator=(const CTabGuildAlliance::SectionData& arg0);

    public:
        static CTabGuildAlliance::SectionData& _op_assign_9(CTabGuildAlliance::SectionData* pThis,
                                                            const CTabGuildAlliance::SectionData& arg0);
    };

public:
    enum O
    {
        ONLINE = 0,
        OFFLINE = 1,
        ONOFF_NO = 2
    };

    // Fields
public:
    std::array<ZRef<CCtrlButton>, 13> m_pBtGuildAlliance;

private:
    std::array<_x_com_ptr<IWzCanvas>, 7> m_aCanvas;

private:
    _x_com_ptr<IWzCanvas> m_pCanvasMarkDefault;

private:
    CUIUserList* m_pUIUserList{};

private:
    ZXString<char> m_sGuildName;

private:
    std::array<ZXString<char>, 5> m_asGrade;

private:
    std::array<ZXString<char>, 5> m_asGradeOriginal;

private:
    ZXString<char> m_sNotice;

private:
    _x_com_ptr<IWzGr2DLayer> m_pLayerNotice;

private:
    long m_nGuildNoticePos{};

public:
    std::array<CTabGuildAlliance::SectionData, 5> m_asdOnOff;
    // Methods
public:
    virtual ~CTabGuildAlliance();

public:
    void _dtor_0();

public:
    CTabGuildAlliance(const CTabGuildAlliance& arg0);

public:
    void _ctor_1(const CTabGuildAlliance& arg0);

public:
    CTabGuildAlliance(CUIUserList* pUIUserList);

public:
    void _ctor_0(CUIUserList* pUIUserList);

public:
    void OnCreate();

public:
    void LoadData();

public:
    long Draw(_x_com_ptr<IWzCanvas> arg0, _x_com_ptr<IWzCanvas> arg1, _x_com_ptr<IWzCanvas> arg2);

public:
    void Update();

public:
    void CreateButton();

public:
    void OnButtonClicked(uint32_t nId);

public:
    void OnCreateGuild();

public:
    void OnRemoveGuild();

public:
    void OnInvite();

public:
    void OnWithdraw();

public:
    void OnKick();

public:
    void OnGradeChange(int32_t bUp);

public:
    void OnWhisper();

public:
    void OnChat();

public:
    void OnChangeMaster();

public:
    void OnSetNotice();

public:
    void OnPartyInvite();

public:
    void OnListHeader(long nIndex, long rx, long ry, long nScrPos);

public:
    void OnSortMember(long nIndex, const CTabGuildAlliance::ORDER nOrder);

public:
    void OnMaxMinToggle(long nIndex);

public:
    void OnPageNext(long nIndex);

public:
    void OnPagePrev(long nIndex);

public:
    unsigned long GetMemberIDFromPoint(long rx, long ry, long nScrPos);

public:
    long GetGuildItem(unsigned long dwMemberID, CTabGuildAlliance::GUILDITEM& gi);

public:
    ZXString<char> GetToolTipString(long rx, long ry);

public:
    void DeleteNoticeLayer();

public:
    long CalcListCanvasHeight();

protected:
    void MakeNoticeLayer();

public:
    CTabGuildAlliance& operator=(const CTabGuildAlliance& arg0);

public:
    static CTabGuildAlliance& _op_assign_31(CTabGuildAlliance* pThis, const CTabGuildAlliance& arg0);
};

STATIC_ASSERT_SIZE(CTabGuildAlliance, 840);

class CTabFriend
{
    // Nested
public:
    struct FRIENDITEM
    {
        // Nested
        // Fields
    public:
        unsigned long dwFriendID{};

    public:
        ZXString<char> sFriendName;

    public:
        long nChannelID{};

    public:
        int32_t bInShop{};

    public:
        tagRECT rt{};

    public:
        int32_t bListenBlockedFriend{};

    public:
        int32_t bTalkBlockedFriend{};

    public:
        unsigned char nFlag{};

    public:
        ZXString<char> sFriendGroup;
        // Methods
    public:
        ~FRIENDITEM();

    public:
        void _dtor_0();

    public:
        FRIENDITEM(const CTabFriend::FRIENDITEM& __that);

    public:
        void _ctor_1(const CTabFriend::FRIENDITEM& __that);

    public:
        FRIENDITEM();

    public:
        void _ctor_0();

    public:
        int32_t SetBlock(int32_t arg0);

    public:
        int32_t IsBlocked();

    public:
        CTabFriend::FRIENDITEM& operator=(const CTabFriend::FRIENDITEM& arg0);

    public:
        static CTabFriend::FRIENDITEM& _op_assign_5(CTabFriend::FRIENDITEM* pThis, const CTabFriend::FRIENDITEM& arg0);
    };

public:
    struct GROUPITEM
    {
        // Nested
        // Fields
    public:
        ZXString<char> sGroupName;

    public:
        tagRECT rt{};

    public:
        int32_t bFolded{};

    public:
        unsigned char nFlag{};
        // Methods
    public:
        ~GROUPITEM();

    public:
        void _dtor_0();

    public:
        GROUPITEM(const CTabFriend::GROUPITEM& arg0);

    public:
        void _ctor_1(const CTabFriend::GROUPITEM& arg0);

    public:
        GROUPITEM();

    public:
        void _ctor_0();

    public:
        CTabFriend::GROUPITEM& operator=(const CTabFriend::GROUPITEM& arg0);

    public:
        static CTabFriend::GROUPITEM& _op_assign_3(CTabFriend::GROUPITEM* pThis, const CTabFriend::GROUPITEM& arg0);
    };

    // Fields
public:
    std::array<ZRef<CCtrlButton>, 15> m_pBtFriend{};

private:
    CUIUserList* m_pUIUserList{};

private:
    _x_com_ptr<IWzCanvas> m_pGroupFolderCanvas;

private:
    _x_com_ptr<IWzCanvas> m_pGroupOpenButtonCanvas;

private:
    _x_com_ptr<IWzCanvas> m_pGroupCloseButtonCanvas;

private:
    _x_com_ptr<IWzCanvas> m_pBlockedIconCanvas;

private:
    _x_com_ptr<IWzCanvas> m_pSameChannelIconCanvas;

private:
    _x_com_ptr<IWzCanvas> m_pMateIconCanvas;

private:
    _x_com_ptr<IWzCanvas> m_pCellAuthIconCanvas;

private:
    long m_nListHeight{};

private:
    long m_nLineHeight{};

private:
    long m_nLineWidth{};

private:
    ZArray<ZPair<CTabFriend::GROUPITEM, ZArray<CTabFriend::FRIENDITEM>>> m_aFriends;

private:
    long m_nFriendMax{};

private:
    int32_t m_bShowOnlineOnly{};
    // Methods
public:
    virtual ~CTabFriend();

public:
    void _dtor_0();

public:
    CTabFriend(const CTabFriend& arg0);

public:
    void _ctor_1(const CTabFriend& arg0);

public:
    CTabFriend(CUIUserList* pUIUserList);

public:
    void _ctor_0(CUIUserList* pUIUserList);

public:
    void OnCreate();

public:
    void LoadData();

public:
    void Draw(_x_com_ptr<IWzCanvas> pCanvas, _x_com_ptr<IWzCanvas> pCanvasList, _x_com_ptr<IWzCanvas> pCanvasStat);

public:
    void CreateButton();

public:
    void OnButtonClicked(uint32_t nId);

public:
    void OnAdd(ZXString<char> sDefaultName);

public:
    void OnModify();

public:
    void OnDelete();

public:
    void OnWhisper();

public:
    void OnChat();

public:
    void OnFindUser();

public:
    void OnPartyInvite();

public:
    void OnSendMateMsg();

public:
    void OnSendMemo();

public:
    void OnBlockFriend();

public:
    void OnGroupAdd(ZXString<char> sGroupName, int32_t bAdd);

public:
    void OnGroupWhisper();

public:
    void OnToggleView(int32_t bShowOnlineOnly);

public:
    void OnAccontMoreInfoView();

public:
    void OnFindFriendView();

public:
    void OnClick();

public:
    void OnDblClick();

public:
    unsigned long GetFriendIDFromPoint(long arg0, long arg1, long arg2);

public:
    long GetFriendItem(unsigned long dwFriendID, CTabFriend::FRIENDITEM& fi);

public:
    long GetFriendCount(const ZArray<CTabFriend::FRIENDITEM>& aFriend, int32_t bOnline);

public:
    long GetNonRequestFriendCount(const ZArray<CTabFriend::FRIENDITEM>& aFriend);

public:
    ZXString<char> GetToolTipString(long rx, long ry);

public:
    void ChangeBlockOption(unsigned long dwFriendID, short nFlag, int32_t bBlocked);

public:
    int32_t IsGroupBlocked(ZXString<char> sGroupName);

private:
    long ButtonID2Index(long arg0);

public:
    CTabFriend& operator=(const CTabFriend& arg0);

public:
    static CTabFriend& _op_assign_33(CTabFriend* pThis, const CTabFriend& arg0);
};

STATIC_ASSERT_SIZE(CTabFriend, 180);

struct Friend_GroupAscComp_S
{
    // Nested
    // Fields
    // Methods
public:
    int32_t operator()(const ZXString<char>& fiLhs, const ZXString<char>& fiRhs);

public:
    static int32_t _op_call_0(Friend_GroupAscComp_S* pThis, const ZXString<char>& fiLhs, const ZXString<char>& fiRhs);
};

STATIC_ASSERT_SIZE(Friend_GroupAscComp_S, 1);

class CTabBlackList
{
    // Nested
public:
    struct BLACKLISTITEM
    {
        // Nested
        // Fields
    public:
        ZXString<char> sCharacterName;

    public:
        tagRECT rt{};
        // Methods
    public:
        ~BLACKLISTITEM();

    public:
        void _dtor_0();

    public:
        BLACKLISTITEM(const CTabBlackList::BLACKLISTITEM& arg0);

    public:
        void _ctor_1(const CTabBlackList::BLACKLISTITEM& arg0);

    public:
        BLACKLISTITEM();

    public:
        void _ctor_0();

    public:
        CTabBlackList::BLACKLISTITEM& operator=(const CTabBlackList::BLACKLISTITEM& arg0);

    public:
        static CTabBlackList::BLACKLISTITEM& _op_assign_3(CTabBlackList::BLACKLISTITEM* pThis,
                                                          const CTabBlackList::BLACKLISTITEM& arg0);
    };

    // Fields
public:
    std::array<ZRef<CCtrlButton>, 2> m_pBtBlackList{};

private:
    CUIUserList* m_pUIUserList{};

private:
    ZArray<CTabBlackList::BLACKLISTITEM> m_BlackList;
    // Methods
public:
    virtual ~CTabBlackList();

public:
    void _dtor_0();

public:
    CTabBlackList(const CTabBlackList& arg0);

public:
    void _ctor_1(const CTabBlackList& arg0);

public:
    CTabBlackList(CUIUserList* arg0);

public:
    void _ctor_0(CUIUserList* arg0);

public:
    void OnCreate();

public:
    void LoadData();

public:
    void Draw(_x_com_ptr<IWzCanvas> pCanvasList);

public:
    void CreateButton();

public:
    void OnButtonClicked(uint32_t nId);

public:
    void OnAdd();

public:
    void OnDelete();

public:
    unsigned long GetMemberIDFromPoint(long rx, long ry, long nScrPos);

public:
    long GetBlackListItem(unsigned long arg0, ZXString<char> arg1);

public:
    ZXString<char> GetToolTipString(long rx, long ry);

public:
    CTabBlackList& operator=(const CTabBlackList& arg0);

public:
    static CTabBlackList& _op_assign_13(CTabBlackList* pThis, const CTabBlackList& arg0);
};

STATIC_ASSERT_SIZE(CTabBlackList, 28);

class CTabGuild
{
    // Nested
public:
    enum ORDER
    {
        LIST_HEADER = 0,
        NAME = 1,
        JOB = 2,
        LEVEL = 3,
        GRADE = 4,
        ORDER_NO = 5
    };

    struct GUILDITEM
    {
        // Nested
        // Fields
    public:
        unsigned long dwMemberID{};

    public:
        ZXString<char> sMemberName;

    public:
        ZXString<char> sJobName;

    public:
        long nJob{};

    public:
        long nLevel{};

    public:
        long nGrade{};

    public:
        tagRECT rt{};

    public:
        ZXString<char> sGradeName;

    public:
        tagRECT rcMemberName{};

    public:
        tagRECT rcJobName{};

    public:
        tagRECT rcLevel{};

    public:
        tagRECT rcGrade{};

    public:
        int32_t bMemberNameReduced{};

    public:
        int32_t bJobNameReduced{};
        // Methods
    public:
        ~GUILDITEM();

    public:
        void _dtor_0();

    public:
        GUILDITEM(const CTabGuild::GUILDITEM& __that);

    public:
        void _ctor_1(const CTabGuild::GUILDITEM& __that);

    public:
        GUILDITEM();

    public:
        void _ctor_0();

    public:
        CTabGuild::GUILDITEM& operator=(const CTabGuild::GUILDITEM& __that);

    public:
        static CTabGuild::GUILDITEM& _op_assign_3(CTabGuild::GUILDITEM* pThis, const CTabGuild::GUILDITEM& __that);
    };

public:
    struct NameAscComp
    {
        // Nested
        // Fields
        // Methods
    public:
        int32_t operator()(const CTabGuild::GUILDITEM& arg0, const CTabGuild::GUILDITEM& arg1);

    public:
        static int32_t _op_call_0(CTabGuild::NameAscComp* pThis, const CTabGuild::GUILDITEM& arg0,
                                  const CTabGuild::GUILDITEM& arg1);
    };

public:
    struct JobAscComp
    {
        // Nested
        // Fields
        // Methods
    public:
        int32_t operator()(const CTabGuild::GUILDITEM& a, const CTabGuild::GUILDITEM& b);

    public:
        static int32_t _op_call_0(CTabGuild::JobAscComp* pThis, const CTabGuild::GUILDITEM& a,
                                  const CTabGuild::GUILDITEM& b);
    };

public:
    struct LevelAscComp
    {
        // Nested
        // Fields
        // Methods
    public:
        int32_t operator()(const CTabGuild::GUILDITEM& a, const CTabGuild::GUILDITEM& b);

    public:
        static int32_t _op_call_0(CTabGuild::LevelAscComp* pThis, const CTabGuild::GUILDITEM& a,
                                  const CTabGuild::GUILDITEM& b);
    };

public:
    struct GradeAscComp
    {
        // Nested
        // Fields
        // Methods
    public:
        int32_t operator()(const CTabGuild::GUILDITEM& a, const CTabGuild::GUILDITEM& b);

    public:
        static int32_t _op_call_0(CTabGuild::GradeAscComp* pThis, const CTabGuild::GUILDITEM& a,
                                  const CTabGuild::GUILDITEM& b);
    };

public:
    struct NameDescComp
    {
        // Nested
        // Fields
        // Methods
    public:
        int32_t operator()(const CTabGuild::GUILDITEM& arg0, const CTabGuild::GUILDITEM& arg1);

    public:
        static int32_t _op_call_0(CTabGuild::NameDescComp* pThis, const CTabGuild::GUILDITEM& arg0,
                                  const CTabGuild::GUILDITEM& arg1);
    };

public:
    struct JobDescComp
    {
        // Nested
        // Fields
        // Methods
    public:
        int32_t operator()(const CTabGuild::GUILDITEM& a, const CTabGuild::GUILDITEM& b);

    public:
        static int32_t _op_call_0(CTabGuild::JobDescComp* pThis, const CTabGuild::GUILDITEM& a,
                                  const CTabGuild::GUILDITEM& b);
    };

public:
    struct LevelDescComp
    {
        // Nested
        // Fields
        // Methods
    public:
        int32_t operator()(const CTabGuild::GUILDITEM& a, const CTabGuild::GUILDITEM& b);

    public:
        static int32_t _op_call_0(CTabGuild::LevelDescComp* pThis, const CTabGuild::GUILDITEM& a,
                                  const CTabGuild::GUILDITEM& b);
    };

public:
    struct GradeDescComp
    {
        // Nested
        // Fields
        // Methods
    public:
        int32_t operator()(const CTabGuild::GUILDITEM& a, const CTabGuild::GUILDITEM& b);

    public:
        static int32_t _op_call_0(CTabGuild::GradeDescComp* pThis, const CTabGuild::GUILDITEM& a,
                                  const CTabGuild::GUILDITEM& b);
    };

public:
    struct SectionData
    {
        // Nested
    public:
        enum ITEMPERPAGE
        {
            ITEMPERPAGE = 20
        };

        // Fields
    public:
        int32_t m_bMaximized{};

    public:
        tagPOINT m_ptBtMaxMin{};

    public:
        tagPOINT m_ptBtPage{};

    public:
        long m_nPageBtSpace{};

    public:
        long m_nPage{};

    public:
        long m_nMaxPage{};

    public:
        std::array<tagRECT, 5> m_arcArrange{};

    public:
        ZArray<CTabGuild::GUILDITEM> m_aGuildItem;

    public:
        CTabGuild::ORDER m_nOrder;

    public:
        int32_t m_bAscend{};
        // Methods
    public:
        ~SectionData();

    public:
        void _dtor_0();

    public:
        SectionData(const CTabGuild::SectionData& arg0);

    public:
        void _ctor_1(const CTabGuild::SectionData& arg0);

        CTOR_DEFAULT(SectionData)

    public:
        SectionData();

    public:
        void _ctor_0();

    public:
        void SetPagePrev();

    public:
        void SetPageNext();

    public:
        long GetFirstOfPage();

    public:
        long GetLastOfPage();

    public:
        long GetCountOfPage();

    public:
        void Sort();

    public:
        CTabGuild::SectionData& operator=(const CTabGuild::SectionData& arg0);

    public:
        static CTabGuild::SectionData& _op_assign_9(CTabGuild::SectionData* pThis, const CTabGuild::SectionData& arg0);
    };


public:
    enum O
    {
        ONLINE = 0,
        OFFLINE = 1,
        ONOFF_NO = 2
    };

    // Fields
public:
    std::array<ZRef<CCtrlButton>, 13> m_pBtGuild;

private:
    _x_com_ptr<IWzCanvas> m_pCanvasMarkDefault;

private:
    CUIUserList* m_pUIUserList{};

private:
    ZXString<char> m_sGuildName;

private:
    std::array<ZXString<char>, 5> m_asGrade{};

private:
    std::array<ZXString<char>, 5> m_asGradeOriginal{};

private:
    ZXString<char> m_sNotice;

private:
    _x_com_ptr<IWzGr2DLayer> m_pLayerNotice;

private:
    long m_nGuildNoticePos{};

public:
    std::array<CTabGuild::SectionData, 2> m_asdOnOff{};
    // Methods
public:
    virtual ~CTabGuild();

public:
    void _dtor_0();

public:
    CTabGuild(const CTabGuild& arg0);

public:
    void _ctor_1(const CTabGuild& arg0);

public:
    CTabGuild(CUIUserList* pUIUserList);

public:
    void _ctor_0(CUIUserList* pUIUserList);

public:
    void OnCreate();

public:
    void LoadData();

public:
    long Draw(_x_com_ptr<IWzCanvas> arg0, _x_com_ptr<IWzCanvas> arg1, _x_com_ptr<IWzCanvas> arg2);

public:
    void Update();

public:
    void CreateButton();

public:
    void OnButtonClicked(uint32_t nId);

public:
    void OnCreateGuild();

public:
    void OnRemoveGuild();

public:
    void OnInvite();

public:
    void OnWithdraw();

public:
    void OnKick();

public:
    void OnGradeChange(int32_t bUp);

public:
    void OnWhisper();

public:
    void OnChat();

public:
    void OnFindUser();

public:
    void OnSetNotice();

public:
    void OnPartyInvite();

public:
    void OnListHeader(int32_t bOnline, long rx, long ry, long nScrPos);

public:
    void OnSortMember(int32_t bOnline, const CTabGuild::ORDER nOrder);

public:
    void OnMaxMinToggle(int32_t bOnline);

public:
    void OnPageNext(int32_t bOnline);

public:
    void OnPagePrev(int32_t bOnline);

public:
    unsigned long GetMemberIDFromPoint(long rx, long ry, long nScrPos);

public:
    long GetGuildItem(unsigned long dwMemberID, CTabGuild::GUILDITEM& gi);

public:
    ZXString<char> GetToolTipString(long rx, long ry);

public:
    void DeleteGuildNoticeLayer();

protected:
    void MakeGuildNoticeLayer();

public:
    CTabGuild& operator=(const CTabGuild& arg0);

public:
    static CTabGuild& _op_assign_30(CTabGuild* pThis, const CTabGuild& arg0);
};

STATIC_ASSERT_SIZE(CTabGuild, 420);

class CTabParty
{
    // Nested
public:
    struct PARTYITEM
    {
        // Nested
        // Fields
    public:
        unsigned long dwMemberID{};

    public:
        ZXString<char> sMemberName;

    public:
        unsigned long dwFieldID{};

    public:
        ZXString<char> sJobName;

    public:
        long nLevel{};

    public:
        long nChannelID{};

    public:
        int32_t bBoss{};

    public:
        tagRECT rt{};

    public:
        tagRECT rcMemberName{};

    public:
        tagRECT rcJobName{};

    public:
        int32_t bJobNameReduced{};
        // Methods
    public:
        ~PARTYITEM();

    public:
        void _dtor_0();

    public:
        PARTYITEM(const CTabParty::PARTYITEM& arg0);

    public:
        void _ctor_1(const CTabParty::PARTYITEM& arg0);

    public:
        PARTYITEM();

    public:
        void _ctor_0();

    public:
        CTabParty::PARTYITEM& operator=(const CTabParty::PARTYITEM& __that);

    public:
        static CTabParty::PARTYITEM& _op_assign_3(CTabParty::PARTYITEM* pThis, const CTabParty::PARTYITEM& __that);
    };

public:
    enum UnnamedEnum40291
    {
        SAMEMAP = 0,
        OFFLINE = 1,
        ELSEWHERE = 2
    };

    // Fields
public:
    std::array<ZRef<CCtrlButton>, 9> m_pBtParty{};

private:
    CUIUserList* m_pUIUserList{};

private:
    ZArray<CTabParty::PARTYITEM> m_aSameMap;

private:
    ZArray<CTabParty::PARTYITEM> m_aOffLine;

private:
    ZArray<CTabParty::PARTYITEM> m_aElseWhere;
    // Methods
public:
    virtual ~CTabParty();

public:
    void _dtor_0();

public:
    CTabParty(const CTabParty& arg0);

public:
    void _ctor_1(const CTabParty& arg0);

public:
    CTabParty(CUIUserList* arg0);

public:
    void _ctor_0(CUIUserList* arg0);

public:
    void OnCreate();

public:
    void LoadData();

public:
    void Draw(_x_com_ptr<IWzCanvas> pCanvas);

public:
    void CreateButton();

public:
    void OnButtonClicked(uint32_t nId);

public:
    void OnCreateParty();

public:
    void OnInvite();

public:
    void OnKick();

public:
    void OnWithdraw();

public:
    void OnWhisper();

public:
    void OnChat();

public:
    void OnChangeBoss();

public:
    void ToggleShowHP();

public:
    void TogglePartySearch();

public:
    ZXString<char> GetToolTipString(long rx, long ry);

public:
    unsigned long GetMemberIDFromPoint(long rx, long ry, long nScrPos);

public:
    long GetPartyItem(unsigned long dwFriendID, CTabParty::PARTYITEM& pi);

public:
    CTabParty& operator=(const CTabParty& arg0);

public:
    static CTabParty& _op_assign_20(CTabParty* pThis, const CTabParty& arg0);
};

STATIC_ASSERT_SIZE(CTabParty, 92);

class CWndGuildGrade : public CWnd, public TSingleton<CWndGuildGrade>
{
    // Nested
    // Fields
protected:
    std::array<ZRef<CCtrlButton>, 2> m_pBtGuildGrade;

protected:
    long m_nSelected{};

private:
    CUIUserList* m_pUIUserList{};

private:
    std::array<ZXString<char>, 5> m_asGrade{};

private:
    std::array<ZXString<char>, 5> m_asGradeOriginal{};

private:
    CLayoutMan m_lm;
    // Methods
public:
    virtual ~CWndGuildGrade();

public:
    void _dtor_0();

public:
    CWndGuildGrade(const CWndGuildGrade& arg0);

public:
    void _ctor_1(const CWndGuildGrade& arg0);

public:
    CWndGuildGrade(CUIUserList* pUIUserList, long nLeft, long nTop);

public:
    void _ctor_0(CUIUserList* pUIUserList, long nLeft, long nTop);

public:
    virtual void OnCreate(void* pData);

public:
    virtual void Draw(const tagRECT* arg0);

public:
    virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
    virtual void OnButtonClicked(uint32_t nId);

public:
    virtual int32_t OnSetFocus(int32_t bFocus);

public:
    void LoadData();

public:
    void OnChangeGradeName();

public:
    void OnSaveGradeName();

public:
    long GetGradeIndexFromPoint(long rx, long ry);

public:
    CWndGuildGrade& operator=(const CWndGuildGrade& arg0);

public:
    static CWndGuildGrade& _op_assign_12(CWndGuildGrade* pThis, const CWndGuildGrade& arg0);
};

STATIC_ASSERT_SIZE(CWndGuildGrade, 212);

class CUIUserList : public CUIWnd, public TSingleton<CUIUserList>
{
    // Nested
public:
    enum TAB_
    {
        TAB_FRIEND = 0,
        TAB_PARTY = 1,
        TAB_EXPEDITION = 2,
        TAB_GUILD = 3,
        TAB_GUILDALLIANCE = 4,
        TAB_BLACKLIST = 5,
        TAB_NO = 6
    };

    // Fields
public:
    ZXString<char> m_sLocationInfo;

protected:
    ZRef<CCtrlTab> m_pTab;

protected:
    ZRef<CCtrlScrollBar> m_pSB;

protected:
    long m_nCurTab{};

protected:
    std::array<ZRef<CCtrlButton>, 6> m_pBtGuild_Dynamic{};

protected:
    std::array<ZRef<CCtrlButton>, 15> m_pBtAlliance_Dynamic{};

protected:
    long m_nItem{};

protected:
    long m_nViewItem{};

protected:
    long m_nToggleTime{};

protected:
    tagRECT rcOnlineCount{};

protected:
    tagRECT rcOfflineCount{};

protected:
    tagRECT rcTotalCount{};

protected:
    std::array<tagRECT, 5> rcAlliance{};

protected:
    int32_t m_bGuildGradeShown{};

protected:
    int32_t m_bAllianceGradeShown{};

protected:
    unsigned long m_dwCurCID{};

protected:
    ZXString<char> m_sCurGroup;

protected:
    CTabFriend* m_pTabFriend{};

protected:
    CTabParty* m_pTabParty{};

protected:
    CTabGuild* m_pTabGuild{};

protected:
    CTabGuildAlliance* m_pTabGuildAlliance{};

protected:
    CWndGuildGrade* m_pWndGuildGrade{};

protected:
    CTabBlackList* m_pTabBlackList{};

protected:
    TabExpedition* m_pTabExpedition{};

protected:
    _x_com_ptr<IWzFont> m_pFontWhite;

protected:
    _x_com_ptr<IWzFont> m_pFontBlack;

protected:
    _x_com_ptr<IWzFont> m_pFontGray;

protected:
    _x_com_ptr<IWzFont> m_pFontGray_B5;

protected:
    _x_com_ptr<IWzFont> m_pFontGray_77;

protected:
    _x_com_ptr<IWzFont> m_pFontGroupName;

protected:
    _x_com_ptr<IWzFont> m_pFontBlocked;

protected:
    _x_com_ptr<IWzFont> m_pFontOnline;

protected:
    _x_com_ptr<IWzFont> m_pFontOffline;

protected:
    _x_com_ptr<IWzFont> m_pFontLocation;

private:
    CLayoutMan m_lm;
    // Methods
public:
    virtual ~CUIUserList();

public:
    void _dtor_0();

public:
    CUIUserList(const CUIUserList& arg0);

public:
    void _ctor_1(const CUIUserList& arg0);

public:
    CUIUserList(long nDefaultTab);

public:
    void _ctor_0(long nDefaultTab);

public:
    virtual void Draw(const tagRECT* pRect);

public:
    virtual void OnCreate(void* arg0);

public:
    virtual void ToggleGuildInfo(int32_t bOn);

public:
    virtual void ToggleAllianceGrade(int32_t bOn);

public:
    virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
    virtual void OnButtonClicked(uint32_t nId);

public:
    virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
    virtual int32_t OnMouseMove(long rx, long ry);

public:
    virtual void Update();

public:
    virtual void OnMoveWnd(long l, long t);

public:
    virtual int32_t IsMyAddon(CWnd* pWnd);

public:
    int32_t CreateGuildButton(int32_t bOnline, const CTabGuild::SectionData& sdOnOff, const tagRECT& rc, long nPos);

public:
    void DestroyGuildButton(long nIdx);

public:
    void SetViewItem();

public:
    int32_t CreateAllianceButton(long nIndex, const CTabGuildAlliance::SectionData& sdOnOff, const tagRECT& rc,
                                 long nPos);

public:
    void DestroyAllianceButton(long nIdx);

public:
    void SetAllianceViewItem();

public:
    void SetFriendViewItem();

public:
    void OnStatChanged();

public:
    void OnExpeditionChanged();

public:
    void SetTooltipStr(ZXString<char> sMsg);

public:
    TabExpedition* GetTabExpedition();

public:
    void ResetInfo();

public:
    long GetCurrentTab();

public:
    void SetCurrentTab(long arg0);

public:
    tagRECT GetToolTipArea(long arg0, long arg1, long arg2, long arg3);

public:
    void ToggleTab();

public:
    void OnSetNotice();

protected:
    void OnTabChanged(long nTab);

protected:
    void SetButton();

protected:
    void SetScrollBar(int32_t bOnInitialize);

protected:
    void SetScrollRange(long nRemain);

    CLASS_RTTI_(CUIUserList, CUIWnd);

public:
    CUIUserList& operator=(const CUIUserList& arg0);

public:
    static CUIUserList& _op_assign_38(CUIUserList* pThis, const CUIUserList& arg0);
};

STATIC_ASSERT_SIZE(CUIUserList, 3260);

class CWndAllianceGrade : public CWnd, public TSingleton<CWndAllianceGrade>
{
    // Nested
    // Fields
protected:
    std::array<ZRef<CCtrlButton>, 2> m_pBtGuildGrade{};

protected:
    long m_nSelected{};

private:
    std::array<_x_com_ptr<IWzCanvas>, 5> m_aCanvas{};

private:
    CUIUserList* m_pUIUserList{};

private:
    std::array<ZXString<char>, 5> m_asGrade{};

private:
    std::array<ZXString<char>, 5> m_asGradeOriginal{};

private:
    CLayoutMan m_lm;
    // Methods
public:
    virtual ~CWndAllianceGrade();

public:
    void _dtor_0();

public:
    CWndAllianceGrade(const CWndAllianceGrade& arg0);

public:
    void _ctor_1(const CWndAllianceGrade& arg0);

public:
    CWndAllianceGrade(CUIUserList* pUIUserList, long nLeft, long nTop);

public:
    void _ctor_0(CUIUserList* pUIUserList, long nLeft, long nTop);

public:
    virtual void OnCreate(void* pData);

public:
    virtual void Draw(const tagRECT* arg0);

public:
    virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
    virtual void OnButtonClicked(uint32_t nId);

public:
    virtual int32_t OnSetFocus(int32_t bFocus);

public:
    void LoadData();

public:
    void OnChangeGradeName();

public:
    void OnSaveGradeName();

public:
    long GetGradeIndexFromPoint(long rx, long ry);

public:
    CWndAllianceGrade& operator=(const CWndAllianceGrade& arg0);

public:
    static CWndAllianceGrade& _op_assign_12(CWndAllianceGrade* pThis, const CWndAllianceGrade& arg0);
};

STATIC_ASSERT_SIZE(CWndAllianceGrade, 232);

class CUIPartyHP : public CUIWnd, public TSingleton<CUIPartyHP>
{
    // Nested
    // Fields
protected:
    _x_com_ptr<IWzCanvas> m_pCanvasBgrNW;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasBgrN;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasBgrNE;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasBgrW;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasBgrC;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasBgrE;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasBgrSW;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasBgrS;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasBgrSE;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasGraduation;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasBar;

protected:
    _x_com_ptr<IWzCanvas> m_pCanvasGauge;
    // Methods
public:
    virtual ~CUIPartyHP();

public:
    void _dtor_0();

public:
    CUIPartyHP(const CUIPartyHP& arg0);

public:
    void _ctor_1(const CUIPartyHP& arg0);

public:
    CUIPartyHP();

public:
    void _ctor_0();

public:
    virtual void Draw(const tagRECT* pRect);

public:
    void Create();

public:
    void Reset();

    CLASS_RTTI_(CUIPartyHP, CUIWnd);

public:
    CUIPartyHP& operator=(const CUIPartyHP& arg0);

public:
    static CUIPartyHP& _op_assign_9(CUIPartyHP* pThis, const CUIPartyHP& arg0);
};

STATIC_ASSERT_SIZE(CUIPartyHP, 2872);

struct FI_NameAscComp
{
public:
    bool operator()(const CTabFriend::FRIENDITEM& arg0, const CTabFriend::FRIENDITEM& arg1)
    {
        return 0;
    }

    // Nested
    // Fields
    // Methods
    /*public:   bool operator()(const CTabFriend::FRIENDITEM& arg0, const CTabFriend::FRIENDITEM& arg1) {
        return 0;
    }
        public: static int32_t _op_call_0(FI_NameAscComp* pThis, const CTabFriend::FRIENDITEM& arg0, const CTabFriend::FRIENDITEM& arg1) */
};

STATIC_ASSERT_SIZE(FI_NameAscComp, 1);

template <typename T>
class Friend_GroupAscComp
{
public:
    bool operator()(const CTabFriend::FRIENDITEM& arg0, const CTabFriend::FRIENDITEM& arg1)
    {
        return 0;
    }
};

//STATIC_ASSERT_SIZE(Friend_GroupAscComp, 1);


void __cdecl DownHeap_CTabGuild__GUILDITEM_CTabGuild__GradeAscComp_(ZArray<CTabGuild::GUILDITEM>& a, int32_t nIdx,
                                                                    int32_t nLen, int32_t nFrom,
                                                                    CTabGuild::GradeAscComp& comp);
void __cdecl DownHeap_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nIdx, int32_t nLen, int32_t nFrom,
    CTabGuildAlliance::LevelAscComp& comp);
void __cdecl InsertionSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuildAlliance::JobAscComp& comp);
void __cdecl DownHeap_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nIdx, int32_t nLen, int32_t nFrom,
    CTabGuildAlliance::NameAscComp& comp);
void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, CTabGuildAlliance::LevelAscComp comp);
void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__NameDescComp_(ZArray<CTabGuild::GUILDITEM>& a,
                                                                 CTabGuild::NameDescComp comp);
void __cdecl DownHeap_CTabGuild__GUILDITEM_CTabGuild__JobAscComp_(ZArray<CTabGuild::GUILDITEM>& a, int32_t nIdx,
                                                                  int32_t nLen, int32_t nFrom,
                                                                  CTabGuild::JobAscComp& comp);
void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, CTabGuildAlliance::JobAscComp comp);
void __cdecl InsertionSort_CTabGuild__GUILDITEM_CTabGuild__JobDescComp_(ZArray<CTabGuild::GUILDITEM>& a, int32_t nFrom,
                                                                        int32_t nTo, CTabGuild::JobDescComp& comp);
void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__LevelDescComp_(ZArray<CTabGuild::GUILDITEM>& a, __POSITION* posFrom,
                                                                  __POSITION* posTo, CTabGuild::LevelDescComp comp);
int32_t __cdecl Partition_CTabGuild__GUILDITEM_CTabGuild__LevelAscComp_(ZArray<CTabGuild::GUILDITEM>& k, int32_t arg1,
                                                                        int32_t arg2, const CTabGuild::GUILDITEM& arg3,
                                                                        CTabGuild::LevelAscComp& arg4);
void __cdecl InsertionSort_CTabGuild__GUILDITEM_CTabGuild__GradeDescComp_(
    ZArray<CTabGuild::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuild::GradeDescComp& comp);
bool __cdecl is_offline(const CTabFriend::FRIENDITEM& f);
void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, __POSITION* posFrom, __POSITION* posTo,
    CTabGuildAlliance::GradeAscComp comp);
int32_t __cdecl Partition_CTabGuild__GUILDITEM_CTabGuild__GradeAscComp_(ZArray<CTabGuild::GUILDITEM>& k, int32_t arg1,
                                                                        int32_t arg2, const CTabGuild::GUILDITEM& arg3,
                                                                        CTabGuild::GradeAscComp& arg4);
void __cdecl DownHeap_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nIdx, int32_t nLen, int32_t nFrom,
    CTabGuildAlliance::JobAscComp& comp);
int32_t __cdecl Partition_CTabGuild__GUILDITEM_CTabGuild__GradeDescComp_(
    ZArray<CTabGuild::GUILDITEM>& k, int32_t arg1, int32_t arg2, const CTabGuild::GUILDITEM& arg3,
    CTabGuild::GradeDescComp& arg4);
void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, CTabGuildAlliance::GradeDescComp comp);
int32_t __cdecl Partition_CTabGuild__GUILDITEM_CTabGuild__NameAscComp_(ZArray<CTabGuild::GUILDITEM>& k, int32_t arg1,
                                                                       int32_t arg2, const CTabGuild::GUILDITEM& arg3,
                                                                       CTabGuild::NameAscComp& arg4);
const CTabGuildAlliance::GUILDITEM&__cdecl Median_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameDescComp_(
    const CTabGuildAlliance::GUILDITEM& a, const CTabGuildAlliance::GUILDITEM& b, const CTabGuildAlliance::GUILDITEM& c,
    CTabGuildAlliance::NameDescComp& comp);
void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, __POSITION* posFrom, __POSITION* posTo,
    CTabGuildAlliance::NameAscComp comp);
int32_t __cdecl Partition_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& k, int32_t arg1, int32_t arg2, const CTabGuildAlliance::GUILDITEM& arg3,
    CTabGuildAlliance::JobAscComp& arg4);
void __cdecl DownHeap_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nIdx, int32_t nLen, int32_t nFrom,
    CTabGuildAlliance::GradeDescComp& comp);
void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__JobAscComp_(ZArray<CTabGuild::GUILDITEM>& a,
                                                               CTabGuild::JobAscComp comp);
int32_t __cdecl Partition_CTabGuild__GUILDITEM_CTabGuild__JobDescComp_(ZArray<CTabGuild::GUILDITEM>& k, int32_t arg1,
                                                                       int32_t arg2, const CTabGuild::GUILDITEM& arg3,
                                                                       CTabGuild::JobDescComp& arg4);
void __cdecl InsertionSort_CTabGuild__GUILDITEM_CTabGuild__LevelAscComp_(
    ZArray<CTabGuild::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuild::LevelAscComp& comp);
void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, CTabGuildAlliance::JobDescComp comp);
void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__LevelDescComp_(ZArray<CTabGuild::GUILDITEM>& a,
                                                                  CTabGuild::LevelDescComp comp);
void __cdecl DownHeap_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nIdx, int32_t nLen, int32_t nFrom,
    CTabGuildAlliance::JobDescComp& comp);
void __cdecl InsertionSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuildAlliance::LevelAscComp& comp);
void __cdecl DownHeap_CTabGuild__GUILDITEM_CTabGuild__NameDescComp_(ZArray<CTabGuild::GUILDITEM>& a, int32_t nIdx,
                                                                    int32_t nLen, int32_t nFrom,
                                                                    CTabGuild::NameDescComp& comp);
void __cdecl DownHeap_CTabGuild__GUILDITEM_CTabGuild__LevelDescComp_(ZArray<CTabGuild::GUILDITEM>& a, int32_t nIdx,
                                                                     int32_t nLen, int32_t nFrom,
                                                                     CTabGuild::LevelDescComp& comp);
int32_t __cdecl Partition_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& k, int32_t arg1, int32_t arg2, const CTabGuildAlliance::GUILDITEM& arg3,
    CTabGuildAlliance::LevelAscComp& arg4);
int32_t __cdecl Partition_CTabGuild__GUILDITEM_CTabGuild__JobAscComp_(ZArray<CTabGuild::GUILDITEM>& k, int32_t arg1,
                                                                      int32_t arg2, const CTabGuild::GUILDITEM& arg3,
                                                                      CTabGuild::JobAscComp& arg4);
int32_t __cdecl Partition_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& k, int32_t arg1, int32_t arg2, const CTabGuildAlliance::GUILDITEM& arg3,
    CTabGuildAlliance::LevelDescComp& arg4);
void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, __POSITION* posFrom, __POSITION* posTo,
    CTabGuildAlliance::NameDescComp comp);
void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__JobDescComp_(ZArray<CTabGuild::GUILDITEM>& a, __POSITION* posFrom,
                                                                __POSITION* posTo, CTabGuild::JobDescComp comp);
void __cdecl InsertionSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuildAlliance::GradeAscComp& comp);
void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, __POSITION* posFrom, __POSITION* posTo,
    CTabGuildAlliance::JobAscComp comp);
int32_t __cdecl Partition_CTabGuild__GUILDITEM_CTabGuild__LevelDescComp_(
    ZArray<CTabGuild::GUILDITEM>& k, int32_t arg1, int32_t arg2, const CTabGuild::GUILDITEM& arg3,
    CTabGuild::LevelDescComp& arg4);
void __cdecl InsertionSort_CTabGuild__GUILDITEM_CTabGuild__JobAscComp_(ZArray<CTabGuild::GUILDITEM>& a, int32_t nFrom,
                                                                       int32_t nTo, CTabGuild::JobAscComp& comp);
void __cdecl InsertionSort_CTabFriend__FRIENDITEM_FI_NameAscComp_(ZArray<CTabFriend::FRIENDITEM>& a, int32_t nFrom,
                                                                  int32_t nTo, FI_NameAscComp& comp);
void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, __POSITION* posFrom, __POSITION* posTo,
    CTabGuildAlliance::LevelAscComp comp);
void __cdecl DownHeap_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nIdx, int32_t nLen, int32_t nFrom,
    CTabGuildAlliance::LevelDescComp& comp);
int32_t __cdecl Partition_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& k, int32_t arg1, int32_t arg2, const CTabGuildAlliance::GUILDITEM& arg3,
    CTabGuildAlliance::JobDescComp& arg4);
void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__JobDescComp_(ZArray<CTabGuild::GUILDITEM>& a,
                                                                CTabGuild::JobDescComp comp);
void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, __POSITION* posFrom, __POSITION* posTo,
    CTabGuildAlliance::JobDescComp comp);
void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__NameDescComp_(ZArray<CTabGuild::GUILDITEM>& a, __POSITION* posFrom,
                                                                 __POSITION* posTo, CTabGuild::NameDescComp comp);
void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__GradeDescComp_(ZArray<CTabGuild::GUILDITEM>& a, __POSITION* posFrom,
                                                                  __POSITION* posTo, CTabGuild::GradeDescComp comp);
void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__GradeAscComp_(ZArray<CTabGuild::GUILDITEM>& a,
                                                                 CTabGuild::GradeAscComp comp);
void __cdecl InsertionSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__JobDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuildAlliance::JobDescComp& comp);
const CTabGuild::GUILDITEM&__cdecl Median_CTabGuild__GUILDITEM_CTabGuild__NameDescComp_(
    const CTabGuild::GUILDITEM& a, const CTabGuild::GUILDITEM& b, const CTabGuild::GUILDITEM& c,
    CTabGuild::NameDescComp& comp);
int32_t __cdecl Partition_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& k, int32_t arg1, int32_t arg2, const CTabGuildAlliance::GUILDITEM& arg3,
    CTabGuildAlliance::GradeAscComp& arg4);
void __cdecl InsertionSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuildAlliance::NameAscComp& comp);
void __cdecl InsertionSort_CTabFriend__FRIENDITEM_Friend_GroupAscComp_CTabFriend__FRIENDITEM__(
    ZArray<CTabFriend::FRIENDITEM>& a, int32_t nFrom, int32_t nTo, Friend_GroupAscComp<CTabFriend::FRIENDITEM>& comp);
int32_t __cdecl Partition_CTabGuild__GUILDITEM_CTabGuild__NameDescComp_(ZArray<CTabGuild::GUILDITEM>& k, int32_t arg1,
                                                                        int32_t arg2, const CTabGuild::GUILDITEM& arg3,
                                                                        CTabGuild::NameDescComp& arg4);
void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__LevelAscComp_(ZArray<CTabGuild::GUILDITEM>& a, __POSITION* posFrom,
                                                                 __POSITION* posTo, CTabGuild::LevelAscComp comp);
void __cdecl DownHeap_CTabGuild__GUILDITEM_CTabGuild__NameAscComp_(ZArray<CTabGuild::GUILDITEM>& a, int32_t nIdx,
                                                                   int32_t nLen, int32_t nFrom,
                                                                   CTabGuild::NameAscComp& comp);
void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__NameAscComp_(ZArray<CTabGuild::GUILDITEM>& a, __POSITION* posFrom,
                                                                __POSITION* posTo, CTabGuild::NameAscComp comp);
void __cdecl DownHeap_CTabGuild__GUILDITEM_CTabGuild__JobDescComp_(ZArray<CTabGuild::GUILDITEM>& a, int32_t nIdx,
                                                                   int32_t nLen, int32_t nFrom,
                                                                   CTabGuild::JobDescComp& comp);
void __cdecl InsertionSort_CTabGuild__GUILDITEM_CTabGuild__NameDescComp_(
    ZArray<CTabGuild::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuild::NameDescComp& comp);
void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, __POSITION* posFrom, __POSITION* posTo,
    CTabGuildAlliance::GradeDescComp comp);
void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, CTabGuildAlliance::NameAscComp comp);
void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, CTabGuildAlliance::LevelDescComp comp);
void __cdecl InsertionSort_CTabGuild__GUILDITEM_CTabGuild__GradeAscComp_(
    ZArray<CTabGuild::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuild::GradeAscComp& comp);
void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__GradeDescComp_(ZArray<CTabGuild::GUILDITEM>& a,
                                                                  CTabGuild::GradeDescComp comp);
int32_t __cdecl Partition_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& i, int32_t arg1, int32_t arg2, const CTabGuildAlliance::GUILDITEM& arg3,
    CTabGuildAlliance::NameDescComp& arg4);
void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__JobAscComp_(ZArray<CTabGuild::GUILDITEM>& a, __POSITION* posFrom,
                                                               __POSITION* posTo, CTabGuild::JobAscComp comp);
const CTabGuildAlliance::GUILDITEM&__cdecl Median_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameAscComp_(
    const CTabGuildAlliance::GUILDITEM& a, const CTabGuildAlliance::GUILDITEM& b, const CTabGuildAlliance::GUILDITEM& c,
    CTabGuildAlliance::NameAscComp& comp);
void __cdecl InsertionSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuildAlliance::GradeDescComp& comp);
void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, __POSITION* posFrom, __POSITION* posTo,
    CTabGuildAlliance::LevelDescComp comp);
void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__LevelAscComp_(ZArray<CTabGuild::GUILDITEM>& a,
                                                                 CTabGuild::LevelAscComp comp);
void __cdecl DownHeap_CTabGuild__GUILDITEM_CTabGuild__GradeDescComp_(ZArray<CTabGuild::GUILDITEM>& a, int32_t nIdx,
                                                                     int32_t nLen, int32_t nFrom,
                                                                     CTabGuild::GradeDescComp& comp);
void __cdecl InsertionSort_CTabGuild__GUILDITEM_CTabGuild__LevelDescComp_(
    ZArray<CTabGuild::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuild::LevelDescComp& comp);
void __cdecl DownHeap_CTabGuild__GUILDITEM_CTabGuild__LevelAscComp_(ZArray<CTabGuild::GUILDITEM>& a, int32_t nIdx,
                                                                    int32_t nLen, int32_t nFrom,
                                                                    CTabGuild::LevelAscComp& comp);
const CTabGuild::GUILDITEM&__cdecl Median_CTabGuild__GUILDITEM_CTabGuild__NameAscComp_(
    const CTabGuild::GUILDITEM& a, const CTabGuild::GUILDITEM& b, const CTabGuild::GUILDITEM& c,
    CTabGuild::NameAscComp& comp);
void __cdecl InsertionSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__LevelDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuildAlliance::LevelDescComp& comp);
void __cdecl DownHeap_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nIdx, int32_t nLen, int32_t nFrom,
    CTabGuildAlliance::GradeAscComp& comp);
int32_t __cdecl Partition_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& i, int32_t arg1, int32_t arg2, const CTabGuildAlliance::GUILDITEM& arg3,
    CTabGuildAlliance::NameAscComp& arg4);
int32_t __cdecl Partition_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& k, int32_t arg1, int32_t arg2, const CTabGuildAlliance::GUILDITEM& arg3,
    CTabGuildAlliance::GradeDescComp& arg4);
void __cdecl InsertionSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nFrom, int32_t nTo, CTabGuildAlliance::NameDescComp& comp);
void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__GradeAscComp_(ZArray<CTabGuild::GUILDITEM>& a, __POSITION* posFrom,
                                                                 __POSITION* posTo, CTabGuild::GradeAscComp comp);
void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__GradeAscComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, CTabGuildAlliance::GradeAscComp comp);
void __cdecl ZSort_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, CTabGuildAlliance::NameDescComp comp);
void __cdecl InsertionSort_CTabGuild__GUILDITEM_CTabGuild__NameAscComp_(ZArray<CTabGuild::GUILDITEM>& a, int32_t nFrom,
                                                                        int32_t nTo, CTabGuild::NameAscComp& comp);
long __cdecl get_channel(const CTabFriend::FRIENDITEM& fi);
void __cdecl DownHeap_CTabGuildAlliance__GUILDITEM_CTabGuildAlliance__NameDescComp_(
    ZArray<CTabGuildAlliance::GUILDITEM>& a, int32_t nIdx, int32_t nLen, int32_t nFrom,
    CTabGuildAlliance::NameDescComp& comp);
void __cdecl ZSort_CTabGuild__GUILDITEM_CTabGuild__NameAscComp_(ZArray<CTabGuild::GUILDITEM>& a,
                                                                CTabGuild::NameAscComp comp);
