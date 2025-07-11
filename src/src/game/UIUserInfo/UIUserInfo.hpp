// UIUserInfo.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "PetTemplate/PetTemplate.hpp"
#include "Wnd/Wnd.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "Packet/Packet.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "UIWnd/UIWnd.hpp"
#include "CtrlWnd/CtrlWnd.hpp"

struct MedalAchievementInfo;

// Level: 1 0xdca2
class CUIItemSearchResult;
// Level: 1 0xdd84
class CUIUserInfoDetail;
// Level: 1 0xddef
class CUIUserInfo;
// Level: 1 0xddaa
class CUIUserInfoWishList;
// Level: 1 0xdccd
class CUIItemSearch;
// Level: 1 0xdd2a
class CUIUserInfoExceptionList;

class CUIItemSearchResult : public CWnd, public TSingleton<CUIItemSearchResult>
{
    // Nested
public:
    enum ID_CTRL_
    {
        ID_CTRL_SCROLLBAR = 1000,
        ID_CTRL_BT_SAVE = 2000,
        ID_CTRL_BT_REMOVE = 2001
    };

    enum UnnamedEnum56458
    {
        kWidth = 209,
        kHeight = 116,
        LIST_WIDTH = 169,
        LIST_HEIGHT = 66,
        LIST_UNIT_HEIGHT = 13,
        ITEMCOUNT_PER_PAGE = 5,
        HORIZON_MARGIN = 14,
        VERTICAL_MARGIN = 15,
        VERTICAL_LINE_ADVANCE = 14
    };

    // Fields
private:
    ZRef<CCtrlScrollBar> m_pScrollBar;

private:
    ZArray<long> m_aResult;

private:
    long m_nMouseOver{};

private:
    long m_nSelected{};

private:
    CUIToolTip m_uiToolTip;

private:
    CLayoutMan m_lm;
    // Methods
public:
    virtual ~CUIItemSearchResult();

public:
    void _dtor_0();

public:
    CUIItemSearchResult(const CUIItemSearchResult& arg0);

public:
    void _ctor_1(const CUIItemSearchResult& arg0);

public:
    CUIItemSearchResult(long lLeft, long lTop, ZXString<char>& sItem);

public:
    void _ctor_0(long lLeft, long lTop, ZXString<char>& sItem);

public:
    virtual void OnCreate(void* pData);

public:
    virtual void OnDestroy();

public:
    virtual int32_t OnSetFocus(int32_t bFocus);

public:
    virtual int32_t OnMouseMove(long rx, long ry);

public:
    virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
    virtual void OnMouseEnter(int32_t bEnter);

public:
    virtual void Draw(const tagRECT* pRect);

public:
    virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
    virtual void OnButtonClicked(uint32_t nId);

public:
    void Search(ZXString<char>& sItem);

public:
    long GetIndexFromPt(long x, long y);

public:
    CUIItemSearchResult& operator=(const CUIItemSearchResult& arg0);

public:
    static CUIItemSearchResult& _op_assign_14(CUIItemSearchResult* pThis, const CUIItemSearchResult& arg0);
};

STATIC_ASSERT_SIZE(CUIItemSearchResult, 2800);

class CUIUserInfoDetail : public CWnd, public TSingleton<CUIUserInfoDetail>
{
    // Nested
public:
    enum ID_CTRL_
    {
        ID_CTRL_SCROLLBAR = 1000,
        ID_CTRL_SCROLLBAR2 = 1001,
        ID_CTRL_BT_CLOSE = 2000
    };

    enum k
    {
        kWidth = 171,
        kHeight = 165
    };

    // Fields
protected:
    ZRef<CCtrlScrollBar> m_pScrollBar;

protected:
    ZRef<CCtrlScrollBar> m_pScrollBar2;

private:
    CLayoutMan m_lm;
    // Methods
public:
    virtual ~CUIUserInfoDetail();

public:
    void _dtor_0();

public:
    CUIUserInfoDetail(const CUIUserInfoDetail& arg0);

public:
    void _ctor_1(const CUIUserInfoDetail& arg0);

public:
    CUIUserInfoDetail(long lLeft, long lTop);

public:
    void _ctor_0(long lLeft, long lTop);

public:
    virtual void OnCreate(void* pData);

public:
    virtual void OnDestroy();

public:
    virtual int32_t OnSetFocus(int32_t bFocus);

public:
    virtual void Draw(const tagRECT* pRect);

public:
    virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
    void ResetAvatar();

    CLASS_RTTI_(CUIUserInfoDetail, CWnd);

public:
    CUIUserInfoDetail& operator=(const CUIUserInfoDetail& arg0);

public:
    static CUIUserInfoDetail& _op_assign_12(CUIUserInfoDetail* pThis, const CUIUserInfoDetail& arg0);
};

STATIC_ASSERT_SIZE(CUIUserInfoDetail, 164);

class CUIUserInfo : public CUIWnd, public TSingleton<CUIUserInfo>
{
    // Nested
public:
    enum ID_CTRL_
    {
        ID_CTRL_BT_DETAIL = 2000,
        ID_CTRL_BT_WISHLIST = 2001,
        ID_CTRL_BT_PARTY = 2002,
        ID_CTRL_BT_TRADE = 2003,
        ID_CTRL_BT_UP = 2004,
        ID_CTRL_BT_DOWN = 2005,
        ID_CTRL_BT_PETINFO = 2006,
        ID_CTRL_BT_TAMINGMOBINFO = 2007,
        ID_CTRL_BT_COLLECTION = 2008,
        ID_CTRL_BT_EXCEPTIONLIST = 2009,
        ID_CTRL_BT_FAMILY = 2010,
        ID_CTRL_BT_EXCEPTIONLIST_SHOW = 2011,
        ID_CTRL_BT_PET_1 = 2012,
        ID_CTRL_BT_PET_2 = 2013,
        ID_CTRL_BT_PET_3 = 2014,
        ID_CTRL_SCROLLBAR = 2015
    };

    enum UnnamedEnum56761
    {
        INFO_HIDDEN = 0,
        PETINFO_SHOWN = 1,
        TAMINGMOBINFO_SHOWN = 2,
        COLLECTION_SHOWN = 3
    };

    enum MEDAL_PER_PAGE
    {
        MEDAL_PER_PAGE = 6
    };

    enum k
    {
        kWidth = 271,
        kHeight = 190,
        kTamingMobHeight = 368,
        kPetHeight = 386,
        kCollectHeight = 386
    };

    // Fields
protected:
    ZRef<CCtrlOriginButton> m_pBtParty;

protected:
    ZRef<CCtrlOriginButton> m_pBtTrade;

protected:
    ZRef<CCtrlOriginButton> m_pBtUP;

protected:
    ZRef<CCtrlOriginButton> m_pBtDown;

protected:
    ZRef<CCtrlOriginButton> m_pBtPet;

protected:
    ZRef<CCtrlOriginButton> m_pBtTamingMob;

protected:
    ZRef<CCtrlOriginButton> m_pBtCollection;

protected:
    ZRef<CCtrlOriginButton> m_pBtExceptList;

protected:
    ZRef<CCtrlScrollBar> m_pScrollBar;

protected:
    std::array<ZRef<CCtrlButton>, 3> m_pBtPets{};

protected:
    ZRef<CUIUserInfoDetail> m_pUIUserInfoDetail;

protected:
    ZRef<CUIUserInfoWishList> m_pUIUserInfoWishList;

protected:
    ZRef<CUIUserInfoExceptionList> m_pUIUserInfoExceptionList;

protected:
    std::array<ZArray<long>, 3> m_aaPetItemList{};

protected:
    ZArray<long> m_aTamingMobItemList;

protected:
    ZRef<CAvatar> m_pAvatar;

protected:
    ZRef<CAvatar> m_pTamingMobAvatar;

protected:
    long m_nState{};

protected:
    unsigned long m_dwCharacterID{};

protected:
    ZXString<char> m_sName;

protected:
    unsigned char m_nLevel{};

protected:
    short m_nJob{};

protected:
    short m_nPOP{};

protected:
    ZXString<char> m_sCommunity;

protected:
    ZXString<char> m_sAlliance;

protected:
    int32_t m_bPetActivated{};

protected:
    int32_t m_bIsMarried{};

protected:
    long m_nCurrentPetIndex{};

protected:
    std::array<CPetTemplate*, 3> m_apPetTemplate{};

protected:
    std::array<ZXString<char>, 3> m_asPetName{};

protected:
    std::array<unsigned char, 3> m_anPetLevel{};

protected:
    std::array<short, 3> m_anTameness{};

protected:
    std::array<unsigned char, 3> m_anRepleteness{};

protected:
    std::array<long, 3> m_anPetEquipItemID{};

protected:
    std::array<uint16_t, 3> m_ausPetSkill{};

protected:
    ZXString<char> m_sTamingMobName;

protected:
    int32_t m_bTamingMob{};

protected:
    long m_nTamingMobID{};

protected:
    long m_nSaddleID{};

protected:
    long m_nMobEquipID{};

protected:
    long m_nTamingMobLevel{};

protected:
    long m_nTamingMobExp{};

protected:
    long m_nTamingMobFatigue{};

protected:
    ZRef<MedalAchievementInfo> m_pMedalInfo;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pLayerPet;

protected:
    _x_com_ptr<IWzGr2DLayer> m_pBossPetCrown;

protected:
    std::array<_x_com_ptr<IWzGr2DLayer>, 3> m_apLayerPet{};

protected:
    ZArray<TSecType<long>> m_aItems;

protected:
    ZArray<TSecType<long>> m_aChairItems;

protected:
    ZArray<TSecType<long>> m_aWishItems;

protected:
    CUIToolTip m_uiToolTip;

private:
    int32_t m_bExceptionListOpened{};

private:
    CLayoutMan m_lm;
    // Methods
public:
    virtual ~CUIUserInfo();

public:
    void _dtor_0();

public:
    CUIUserInfo(const CUIUserInfo& arg0);

public:
    void _ctor_1(const CUIUserInfo& arg0);

    CTOR_DEFAULT(CUIUserInfo);

public:
    CUIUserInfo();

public:
    void _ctor_0();

public:
    virtual void OnCreate(void* pData);

public:
    virtual void OnDestroy();

public:
    virtual void OnMouseEnter(int32_t bEnter);

public:
    virtual void OnMoveWnd(long l, long t);

public:
    virtual void OnButtonClicked(uint32_t nId);

public:
    virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
    virtual void Draw(const tagRECT* pRect);

public:
    virtual void Update();

public:
    virtual int32_t HitTest(long rx, long ry, CCtrlWnd** ppCtrl);

public:
    virtual int32_t OnMouseMove(long rx, long ry);

public:
    virtual int32_t IsMyAddon(CWnd* pWnd);

public:
    void SetUserInfo(unsigned long dwCharacterID, const char* sName, unsigned char nLevel, short nJob, short nPOP,
                     const char* sCommunity, const char* sAlliance, int32_t bPetActivated, int32_t bIsMarried);

public:
    int32_t SetAvatarInfo(const AvatarLook& al);

public:
    void SetPetInfo(long nPetIndex, unsigned long dwTemplateID, ZXString<char> sName, unsigned char nLevel,
                    short nTameness, unsigned char nRepleteness, uint16_t usPetSkill, long nItemID);

public:
    void SetMultiPetInfo(int32_t bPetActivated, CInPacket& iPacket);

public:
    void SetTamingMobInfo(long nLevel, long nExp, long nFatigue);

public:
    void SetWishItemInfo(ZArray<long>& aWishItem);

public:
    void SetChairItemInfo(ZArray<long>& aChairItem);

public:
    void SetMedalAchievementInfo(ZRef<MedalAchievementInfo> pInfo);

public:
    void ResetInfo();

public:
    void ResetInfo_Pet();

public:
    void ResetInfo_TamingMob();

public:
    void SetPetItemList(long nPetIndex);

public:
    void SetTamingMobItemList();

public:
    void CreatePetAvatar(long nPetIndex);

public:
    void CreateTamingMobAvatar();

public:
    void NotifyGivePopResult(long nPOP);

public:
    int32_t IsLocalUserInfo();

public:
    void SetState(long nState);

public:
    void SetLayer();

public:
    void SetCtrl();

public:
    void OnClosePet(unsigned long dwOwnerID);

protected:
    void ToggleAddOn(long nType);

protected:
    void TogglePetInfo(int32_t arg0);

protected:
    void ToggleExceptionList();

protected:
    void AddOnClear();

protected:
    void OnPetTabChanged(long arg0);

protected:
    void SetAddOnOption(long nOption);

protected:
    long GetAddOnOption();

    CLASS_RTTI_(CUIUserInfo, CUIWnd);

public:
    CUIUserInfo& operator=(const CUIUserInfo& arg0);

public:
    static CUIUserInfo& _op_assign_45(CUIUserInfo* pThis, const CUIUserInfo& arg0);
};

STATIC_ASSERT_SIZE(CUIUserInfo, 5804);

class CUIUserInfoWishList : public CWnd, public TSingleton<CUIUserInfoWishList>
{
    // Nested
public:
    enum ID_CTRL_
    {
        ID_CTRL_SCROLLBAR = 1000,
        ID_CTRL_BT_PRESENT_0 = 3000,
        ID_CTRL_BT_PRESENT_1 = 3001,
        ID_CTRL_BT_PRESENT_2 = 3002
    };

    enum k
    {
        kWidth = 171,
        kHeight = 157
    };

    // Fields
protected:
    ZRef<CCtrlScrollBar> m_pScrollBar;

protected:
    std::array<ZRef<CCtrlButton>, 3> m_aBtPresent{};

protected:
    CUIToolTip m_uiToolTip;
    // Methods
public:
    virtual ~CUIUserInfoWishList();

public:
    void _dtor_0();

public:
    CUIUserInfoWishList(const CUIUserInfoWishList& arg0);

public:
    void _ctor_1(const CUIUserInfoWishList& arg0);

public:
    CUIUserInfoWishList(long lLeft, long lTop);

public:
    void _ctor_0(long lLeft, long lTop);

public:
    virtual void OnCreate(void* pData);

public:
    virtual void OnDestroy();

public:
    virtual int32_t OnSetFocus(int32_t bFocus);

public:
    virtual void Draw(const tagRECT* pRect);

public:
    virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
    virtual void OnButtonClicked(uint32_t nId);

public:
    virtual int32_t OnMouseMove(long rx, long ry);

public:
    virtual void ClearToolTip();

public:
    void ResetAvatar();

    CLASS_RTTI_(CUIUserInfoWishList, CWnd);

public:
    CUIUserInfoWishList& operator=(const CUIUserInfoWishList& arg0);

public:
    static CUIUserInfoWishList& _op_assign_15(CUIUserInfoWishList* pThis, const CUIUserInfoWishList& arg0);
};

STATIC_ASSERT_SIZE(CUIUserInfoWishList, 2792);

class CUIItemSearch : public CUIWnd, public TSingleton<CUIItemSearch>
{
    // Nested
public:
    enum ID_CTRL_
    {
        ID_CTRL_SCROLLBAR = 0,
        ID_CTRL_BT_SEARCH = 1,
        ID_CTRL_EDIT_SEARCH = 2
    };

    enum k
    {
        kWidth = 209,
        kHeight = 99
    };

    // Fields
private:
    ZRef<CCtrlEdit> m_pEditSearch;

private:
    ZRef<CUIItemSearchResult> m_pUISearchResult;

private:
    CLayoutMan m_lm;
    // Methods
public:
    virtual ~CUIItemSearch();

public:
    void _dtor_0();

public:
    CUIItemSearch(const CUIItemSearch& arg0);

public:
    void _ctor_1(const CUIItemSearch& arg0);

public:
    CUIItemSearch(long l, long t);

public:
    void _ctor_0(long l, long t);

public:
    virtual void OnCreate(void* pData);

public:
    virtual void OnDestroy();

public:
    virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
    virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
    virtual void OnButtonClicked(uint32_t nId);

public:
    virtual int32_t OnMouseMove(long rx, long ry);

public:
    virtual void OnMouseEnter(int32_t bEnter);

public:
    virtual void OnMoveWnd(long l, long t);

public:
    virtual int32_t OnSetFocus(int32_t bFocus);

public:
    virtual void Draw(const tagRECT* pRect);

public:
    virtual void Update();

public:
    virtual int32_t IsMyAddon(CWnd* pWnd);

public:
    void OpenSearchResult(ZXString<char>& sItem);

    CLASS_RTTI_(CUIItemSearch, CUIWnd);

public:
    CUIItemSearch& operator=(const CUIItemSearch& arg0);

public:
    static CUIItemSearch& _op_assign_19(CUIItemSearch* pThis, const CUIItemSearch& arg0);
};

STATIC_ASSERT_SIZE(CUIItemSearch, 2860);

class CUIUserInfoExceptionList : public CWnd, public TSingleton<CUIUserInfoExceptionList>
{
    // Nested
public:
    enum ID_CTRL_
    {
        ID_CTRL_SCROLLBAR = 1000,
        ID_CTRL_BT_CLOSE = 2000,
        ID_CTRL_BT_MESO = 2001,
        ID_CTRL_BT_REGISTER = 2002,
        ID_CTRL_BT_DELETE = 2003
    };

    enum UnnamedEnum46477
    {
        kWidth = 171,
        kHeight = 157,
        ITEMCOUNT_PER_PAGE = 7,
        VERTICAL_MARGIN = 30,
        VERTICAL_LINE_ADVANCE = 13
    };

    // Fields
private:
    ZRef<CCtrlButton> m_pBtClose;

private:
    ZRef<CCtrlButton> m_pBtMeso;

private:
    ZRef<CCtrlButton> m_pBtRegister;

private:
    ZRef<CCtrlButton> m_pBtDelete;

private:
    ZRef<CCtrlScrollBar> m_pScrollBar;

private:
    ZRef<CUIItemSearch> m_pUIItemSearch;

private:
    long m_nMouseOver{};

private:
    long m_nSelected{};

private:
    long m_nPetIndex{};

private:
    CLayoutMan m_lm;
    // Methods
public:
    virtual ~CUIUserInfoExceptionList();

public:
    void _dtor_0();

public:
    CUIUserInfoExceptionList(const CUIUserInfoExceptionList& arg0);

public:
    void _ctor_1(const CUIUserInfoExceptionList& arg0);

public:
    CUIUserInfoExceptionList(long lLeft, long lTop, long nPetIndex);

public:
    void _ctor_0(long lLeft, long lTop, long nPetIndex);

public:
    virtual void OnCreate(void* pData);

public:
    virtual void OnDestroy();

public:
    virtual int32_t OnSetFocus(int32_t bFocus);

public:
    virtual void Draw(const tagRECT* pRect);

public:
    virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
    virtual void OnButtonClicked(uint32_t nId);

public:
    virtual int32_t OnMouseMove(long rx, long ry);

public:
    virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
    void OpenItemSearch();

public:
    void CloseItemSearch();

public:
    int32_t AddToList(long nItemID);

public:
    int32_t RemoveFromList(long nItemID);

public:
    long GetIndexFromPt(long x, long y);

public:
    long GetPetIndex();

public:
    CUIUserInfoExceptionList& operator=(const CUIUserInfoExceptionList& arg0);

public:
    static CUIUserInfoExceptionList& _op_assign_17(CUIUserInfoExceptionList* pThis,
                                                   const CUIUserInfoExceptionList& arg0);
};

STATIC_ASSERT_SIZE(CUIUserInfoExceptionList, 208);
