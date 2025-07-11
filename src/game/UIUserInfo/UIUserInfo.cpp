// UIUserInfo.cpp
#include "UIUserInfo.hpp"

static ZRef<CS_COMMODITY> FAKE_ZRef_CS_COMMODITY{};
static ZRefCounted_AllocHelper<ZRefCountedDummy<CAvatar>> FAKE_ZRefCounted_AllocHelper_ZRefCountedDummy_CAvatar{};

#include "UIUserInfo_regen.ipp"

CUIItemSearchResult::~CUIItemSearchResult()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIItemSearchResult::_dtor_0()
{
    return __sub_004B1E50(this, nullptr);
}

CUIItemSearchResult::CUIItemSearchResult(const CUIItemSearchResult& arg0)
{
    _ctor_1(arg0);
}

void CUIItemSearchResult::_ctor_1(const CUIItemSearchResult& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIItemSearchResult::CUIItemSearchResult(long lLeft, long lTop, ZXString<char>& sItem)
{
    _ctor_0(lLeft, lTop, sItem);
}

void CUIItemSearchResult::_ctor_0(long lLeft, long lTop, ZXString<char>& sItem)
{
    return __sub_004B1D30(this, nullptr, lLeft, lTop, sItem);
}

void CUIItemSearchResult::OnCreate(void* pData)
{
    __sub_004ADC60(this, nullptr, pData);
}

void CUIItemSearchResult::OnDestroy()
{
    __sub_004B1E20(this, nullptr);
}

int32_t CUIItemSearchResult::OnSetFocus(int32_t bFocus)
{
    return __sub_004B1E30(this, nullptr, bFocus);
}

int32_t CUIItemSearchResult::OnMouseMove(long rx, long ry)
{
    return __sub_004AB550(this, nullptr, rx, ry);
}

void CUIItemSearchResult::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_004AAEF0(this, nullptr, msg, wParam, rx, ry);
}

void CUIItemSearchResult::OnMouseEnter(int32_t bEnter)
{
    __sub_004AA780(this, nullptr, bEnter);
}

void CUIItemSearchResult::Draw(const tagRECT* pRect)
{
    __sub_004ADF40(this, nullptr, pRect);
}

void CUIItemSearchResult::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    __sub_004AA750(this, nullptr, nId, param1, param2);
}

void CUIItemSearchResult::OnButtonClicked(uint32_t nId)
{
    __sub_004B1F30(this, nullptr, nId);
}

void CUIItemSearchResult::Search(ZXString<char>& sItem)
{
    __sub_004AE1E0(this, nullptr, sItem);
}

long CUIItemSearchResult::GetIndexFromPt(long x, long y)
{
    return __sub_004AAC40(this, nullptr, x, y);
}

CUIItemSearchResult& CUIItemSearchResult::operator=(const CUIItemSearchResult& arg0)
{
    return _op_assign_14(this, arg0);
}

CUIItemSearchResult& CUIItemSearchResult::_op_assign_14(CUIItemSearchResult* pThis, const CUIItemSearchResult& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIUserInfoDetail::~CUIUserInfoDetail()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIUserInfoDetail::_dtor_0()
{
    return __sub_004ADB70(this, nullptr);
}

CUIUserInfoDetail::CUIUserInfoDetail(const CUIUserInfoDetail& arg0)
{
    _ctor_1(arg0);
}

void CUIUserInfoDetail::_ctor_1(const CUIUserInfoDetail& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIUserInfoDetail::CUIUserInfoDetail(long lLeft, long lTop)
{
    _ctor_0(lLeft, lTop);
}

void CUIUserInfoDetail::_ctor_0(long lLeft, long lTop)
{
    return __sub_004ADA30(this, nullptr, lLeft, lTop);
}

void CUIUserInfoDetail::OnCreate(void* pData)
{
    __sub_004AEEB0(this, nullptr, pData);
}

void CUIUserInfoDetail::OnDestroy()
{
    __sub_004ADB00(this, nullptr);
}

int32_t CUIUserInfoDetail::OnSetFocus(int32_t bFocus)
{
    return __sub_004ADB10(this, nullptr, bFocus);
}

void CUIUserInfoDetail::Draw(const tagRECT* pRect)
{
    __sub_004AF1A0(this, nullptr, pRect);
}

void CUIUserInfoDetail::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    __sub_004AA870(this, nullptr, nId, param1, param2);
}

void CUIUserInfoDetail::ResetAvatar()
{
    __sub_004AADF0(this, nullptr);
}

CUIUserInfoDetail& CUIUserInfoDetail::operator=(const CUIUserInfoDetail& arg0)
{
    return _op_assign_12(this, arg0);
}

CUIUserInfoDetail& CUIUserInfoDetail::_op_assign_12(CUIUserInfoDetail* pThis, const CUIUserInfoDetail& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIUserInfo::~CUIUserInfo()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIUserInfo::_dtor_0()
{
    return __sub_004AD2B0(this, nullptr);
}

CUIUserInfo::CUIUserInfo(const CUIUserInfo& arg0)
{
    _ctor_1(arg0);
}

void CUIUserInfo::_ctor_1(const CUIUserInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIUserInfo::CUIUserInfo(): CUIWnd(10, 5, 250, 6, 0, 0, 0)
{
    ms_pInstance = this;
    CreateUIWndPosSaved(0, 0, 10);
}

void CUIUserInfo::_ctor_0()
{
    new(this) CUIUserInfo();
    //return __sub_004B0990(this, nullptr);
}

void CUIUserInfo::OnCreate(void* pData)
{
    __sub_004B2BB0(this, nullptr, pData);
}

void CUIUserInfo::OnDestroy()
{
    __sub_004AB850(this, nullptr);
}

void CUIUserInfo::OnMouseEnter(int32_t bEnter)
{
    __sub_004AA8A0(this, nullptr, bEnter);
}

void CUIUserInfo::OnMoveWnd(long l, long t)
{
    __sub_004AAE40(this, nullptr, l, t);
}

void CUIUserInfo::OnButtonClicked(uint32_t nId)
{
    __sub_004B6D80(this, nullptr, nId);
}

void CUIUserInfo::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    __sub_004AA8C0(this, nullptr, nId, param1, param2);
}

void CUIUserInfo::Draw(const tagRECT* pRect)
{
    __sub_004B3A50(this, nullptr, pRect);
}

void CUIUserInfo::Update()
{
    __sub_004AA9C0(this, nullptr);
}

int32_t CUIUserInfo::HitTest(long rx, long ry, CCtrlWnd** ppCtrl)
{
    return __sub_004AA8F0(this, nullptr, rx, ry, ppCtrl);
}

int32_t CUIUserInfo::OnMouseMove(long rx, long ry)
{
    return __sub_004B17D0(this, nullptr, rx, ry);
}

int32_t CUIUserInfo::IsMyAddon(CWnd* pWnd)
{
    return __sub_004AD6A0(this, nullptr, pWnd);
}

void CUIUserInfo::SetUserInfo(unsigned long dwCharacterID, const char* sName, unsigned char nLevel, short nJob,
                              short nPOP, const char* sCommunity, const char* sAlliance, int32_t bPetActivated,
                              int32_t bIsMarried)
{
    __sub_004ACBB0(this, nullptr, dwCharacterID, sName, nLevel, nJob, nPOP, sCommunity, sAlliance, bPetActivated,
                   bIsMarried);
}

int32_t CUIUserInfo::SetAvatarInfo(const AvatarLook& al)
{
    return __sub_004B6840(this, nullptr, al);
}

void CUIUserInfo::SetPetInfo(long nPetIndex, unsigned long dwTemplateID, ZXString<char> sName, unsigned char nLevel,
                             short nTameness, unsigned char nRepleteness, uint16_t usPetSkill, long nItemID)
{
    __sub_004AD710(this, nullptr, nPetIndex, dwTemplateID, CreateNakedParam(sName), nLevel, nTameness, nRepleteness,
                   usPetSkill, nItemID);
}

void CUIUserInfo::SetMultiPetInfo(int32_t bPetActivated, CInPacket& iPacket)
{
    __sub_004B66A0(this, nullptr, bPetActivated, iPacket);
}

void CUIUserInfo::SetTamingMobInfo(long nLevel, long nExp, long nFatigue)
{
    __sub_004B67C0(this, nullptr, nLevel, nExp, nFatigue);
}

void CUIUserInfo::SetWishItemInfo(ZArray<long>& aWishItem)
{
    __sub_004ACC90(this, nullptr, aWishItem);
}

void CUIUserInfo::SetChairItemInfo(ZArray<long>& aChairItem)
{
    __sub_004ACDA0(this, nullptr, aChairItem);
}

void CUIUserInfo::SetMedalAchievementInfo(ZRef<MedalAchievementInfo> pInfo)
{
    //__sub_004AB990(this, nullptr, CreateNakedParam(pInfo));
    m_pMedalInfo = pInfo;
    m_pBtCollection->SetEnable(static_cast<bool>(m_pMedalInfo));
}

void CUIUserInfo::ResetInfo()
{
    __sub_004B6CD0(this, nullptr);
}

void CUIUserInfo::ResetInfo_Pet()
{
    __sub_004ACE10(this, nullptr);
}

void CUIUserInfo::ResetInfo_TamingMob()
{
    __sub_004AA9F0(this, nullptr);
}

void CUIUserInfo::SetPetItemList(long nPetIndex)
{
    __sub_004ACFB0(this, nullptr, nPetIndex);
}

void CUIUserInfo::SetTamingMobItemList()
{
    __sub_004AD100(this, nullptr);
}

void CUIUserInfo::CreatePetAvatar(long nPetIndex)
{
    __sub_004ABA40(this, nullptr, nPetIndex);
}

void CUIUserInfo::CreateTamingMobAvatar()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIUserInfo::NotifyGivePopResult(long nPOP)
{
    __sub_004AA920(this, nullptr, nPOP);
}

int32_t CUIUserInfo::IsLocalUserInfo()
{
    return __sub_004AAA40(this, nullptr);
}

void CUIUserInfo::SetState(long nState)
{
    __sub_004B39D0(this, nullptr, nState);
}

void CUIUserInfo::SetLayer()
{
    __sub_004B0BB0(this, nullptr);
}

void CUIUserInfo::SetCtrl()
{
    __sub_004B22B0(this, nullptr);
}

void CUIUserInfo::OnClosePet(unsigned long dwOwnerID)
{
    __sub_004B6D00(this, nullptr, dwOwnerID);
}

void CUIUserInfo::ToggleAddOn(long nType)
{
    __sub_004B15D0(this, nullptr, nType);
}

void CUIUserInfo::TogglePetInfo(int32_t arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIUserInfo::ToggleExceptionList()
{
    __sub_004B14C0(this, nullptr);
}

void CUIUserInfo::AddOnClear()
{
    __sub_004AB900(this, nullptr);
}

void CUIUserInfo::OnPetTabChanged(long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CUIUserInfo::SetAddOnOption(long nOption)
{
    __sub_004AA940(this, nullptr, nOption);
}

long CUIUserInfo::GetAddOnOption()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIUserInfo& CUIUserInfo::operator=(const CUIUserInfo& arg0)
{
    return _op_assign_45(this, arg0);
}

CUIUserInfo& CUIUserInfo::_op_assign_45(CUIUserInfo* pThis, const CUIUserInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIUserInfoWishList::~CUIUserInfoWishList()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIUserInfoWishList::_dtor_0()
{
    return __sub_004AB470(this, nullptr);
}

CUIUserInfoWishList::CUIUserInfoWishList(const CUIUserInfoWishList& arg0)
{
    _ctor_1(arg0);
}

void CUIUserInfoWishList::_ctor_1(const CUIUserInfoWishList& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIUserInfoWishList::CUIUserInfoWishList(long lLeft, long lTop)
{
    _ctor_0(lLeft, lTop);
}

void CUIUserInfoWishList::_ctor_0(long lLeft, long lTop)
{
    return __sub_004AB310(this, nullptr, lLeft, lTop);
}

void CUIUserInfoWishList::OnCreate(void* pData)
{
    __sub_004B0060(this, nullptr, pData);
}

void CUIUserInfoWishList::OnDestroy()
{
    __sub_004AB3F0(this, nullptr);
}

int32_t CUIUserInfoWishList::OnSetFocus(int32_t bFocus)
{
    return __sub_004AB400(this, nullptr, bFocus);
}

void CUIUserInfoWishList::Draw(const tagRECT* pRect)
{
    __sub_004B03E0(this, nullptr, pRect);
}

void CUIUserInfoWishList::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    __sub_004AD280(this, nullptr, nId, param1, param2);
}

void CUIUserInfoWishList::OnButtonClicked(uint32_t nId)
{
    __sub_004B08D0(this, nullptr, nId);
}

int32_t CUIUserInfoWishList::OnMouseMove(long rx, long ry)
{
    return __sub_004AC870(this, nullptr, rx, ry);
}

void CUIUserInfoWishList::ClearToolTip()
{
    __sub_004AB410(this, nullptr);
}

void CUIUserInfoWishList::ResetAvatar()
{
    __sub_004AC670(this, nullptr);
}

CUIUserInfoWishList& CUIUserInfoWishList::operator=(const CUIUserInfoWishList& arg0)
{
    return _op_assign_15(this, arg0);
}

CUIUserInfoWishList& CUIUserInfoWishList::_op_assign_15(CUIUserInfoWishList* pThis, const CUIUserInfoWishList& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIItemSearch::~CUIItemSearch()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIItemSearch::_dtor_0()
{
    return __sub_004AB670(this, nullptr);
}

CUIItemSearch::CUIItemSearch(const CUIItemSearch& arg0)
{
    _ctor_1(arg0);
}

void CUIItemSearch::_ctor_1(const CUIItemSearch& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIItemSearch::CUIItemSearch(long l, long t)
{
    _ctor_0(l, t);
}

void CUIItemSearch::_ctor_0(long l, long t)
{
    return __sub_004AE3F0(this, nullptr, l, t);
}

void CUIItemSearch::OnCreate(void* pData)
{
    __sub_004B1FB0(this, nullptr, pData);
}

void CUIItemSearch::OnDestroy()
{
    __sub_004AB7B0(this, nullptr);
}

void CUIItemSearch::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    __sub_004AA7D0(this, nullptr, nId, param1, param2);
}

void CUIItemSearch::OnKey(uint32_t wParam, int32_t lParam)
{
    __sub_004B2AF0(this, nullptr, wParam, lParam);
}

void CUIItemSearch::OnButtonClicked(uint32_t nId)
{
    __sub_004B2A30(this, nullptr, nId);
}

int32_t CUIItemSearch::OnMouseMove(long rx, long ry)
{
    return __sub_004AA800(this, nullptr, rx, ry);
}

void CUIItemSearch::OnMouseEnter(int32_t bEnter)
{
    __sub_004AA7B0(this, nullptr, bEnter);
}

void CUIItemSearch::OnMoveWnd(long l, long t)
{
    __sub_004AACE0(this, nullptr, l, t);
}

int32_t CUIItemSearch::OnSetFocus(int32_t bFocus)
{
    return __sub_004AA830(this, nullptr, bFocus);
}

void CUIItemSearch::Draw(const tagRECT* pRect)
{
    __sub_004AA810(this, nullptr, pRect);
}

void CUIItemSearch::Update()
{
    __sub_004AA820(this, nullptr);
}

int32_t CUIItemSearch::IsMyAddon(CWnd* pWnd)
{
    return __sub_004AB760(this, nullptr, pWnd);
}

void CUIItemSearch::OpenSearchResult(ZXString<char>& sItem)
{
    __sub_004B28E0(this, nullptr, sItem);
}

CUIItemSearch& CUIItemSearch::operator=(const CUIItemSearch& arg0)
{
    return _op_assign_19(this, arg0);
}

CUIItemSearch& CUIItemSearch::_op_assign_19(CUIItemSearch* pThis, const CUIItemSearch& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIUserInfoExceptionList::~CUIUserInfoExceptionList()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIUserInfoExceptionList::_dtor_0()
{
    return __sub_004AD8F0(this, nullptr);
}

CUIUserInfoExceptionList::CUIUserInfoExceptionList(const CUIUserInfoExceptionList& arg0)
{
    _ctor_1(arg0);
}

void CUIUserInfoExceptionList::_ctor_1(const CUIUserInfoExceptionList& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIUserInfoExceptionList::CUIUserInfoExceptionList(long lLeft, long lTop, long nPetIndex)
{
    _ctor_0(lLeft, lTop, nPetIndex);
}

void CUIUserInfoExceptionList::_ctor_0(long lLeft, long lTop, long nPetIndex)
{
    return __sub_004AD7E0(this, nullptr, lLeft, lTop, nPetIndex);
}

void CUIUserInfoExceptionList::OnCreate(void* pData)
{
    __sub_004AE4D0(this, nullptr, pData);
}

void CUIUserInfoExceptionList::OnDestroy()
{
    __sub_004AB7F0(this, nullptr);
}

int32_t CUIUserInfoExceptionList::OnSetFocus(int32_t bFocus)
{
    return __sub_004AD8D0(this, nullptr, bFocus);
}

void CUIUserInfoExceptionList::Draw(const tagRECT* pRect)
{
    __sub_004AE850(this, nullptr, pRect);
}

void CUIUserInfoExceptionList::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    __sub_004AA840(this, nullptr, nId, param1, param2);
}

void CUIUserInfoExceptionList::OnButtonClicked(uint32_t nId)
{
    __sub_004B21C0(this, nullptr, nId);
}

int32_t CUIUserInfoExceptionList::OnMouseMove(long rx, long ry)
{
    return __sub_004AAF30(this, nullptr, rx, ry);
}

void CUIUserInfoExceptionList::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_004AAF70(this, nullptr, msg, wParam, rx, ry);
}

void CUIUserInfoExceptionList::OpenItemSearch()
{
    __sub_004B1C60(this, nullptr);
}

void CUIUserInfoExceptionList::CloseItemSearch()
{
    __sub_004AB2E0(this, nullptr);
}

int32_t CUIUserInfoExceptionList::AddToList(long nItemID)
{
    return __sub_004AEBC0(this, nullptr, nItemID);
}

int32_t CUIUserInfoExceptionList::RemoveFromList(long nItemID)
{
    return __sub_004AAFB0(this, nullptr, nItemID);
}

long CUIUserInfoExceptionList::GetIndexFromPt(long x, long y)
{
    return __sub_004AAD30(this, nullptr, x, y);
}

long CUIUserInfoExceptionList::GetPetIndex()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIUserInfoExceptionList& CUIUserInfoExceptionList::operator=(const CUIUserInfoExceptionList& arg0)
{
    return _op_assign_17(this, arg0);
}

CUIUserInfoExceptionList& CUIUserInfoExceptionList::_op_assign_17(CUIUserInfoExceptionList* pThis,
                                                                  const CUIUserInfoExceptionList& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
