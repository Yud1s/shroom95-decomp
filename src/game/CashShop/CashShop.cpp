// CashShop.cpp
#include "CashShop.hpp"

#include "CSWnd2/CSWnd2.hpp"

static ZRef<CConfirmPurchaseDlg> FAKE_CConfirmPurchaseDlg{};
static ZRef<CItemSearchDlg> FAKE_CItemSearchDlg{};
static ZRef<CCouponUseSelectDlg> FAKE_CCouponUseSelectDlg{};

static IntroSortLoopHelper<ZRef<CS_COMMODITY_EX>, int, CommMoreFunc> FAKE_IntroSortLoopHelper{};
static InsertionSortHelper<ZRef<CS_COMMODITY_EX>, CommMoreFunc> FAKE_InsertionSortHelper{};

#include "CashShop_regen.ipp"


int32_t CommMoreFunc::operator()(const ZRef<CS_COMMODITY_EX> a, const ZRef<CS_COMMODITY_EX> b)
{
    return _op_call_0(this, a, b);
}

int32_t CommMoreFunc::_op_call_0(CommMoreFunc* pThis, const ZRef<CS_COMMODITY_EX> a, const ZRef<CS_COMMODITY_EX> b)
{
    return __sub_000826B0(pThis, nullptr, CreateNakedParam(a), CreateNakedParam(b));
}

/*int32_t CommMoreFunc::operator()(const ZRef<CS_COMMODITY> arg0, const ZRef<CS_COMMODITY> arg1) {
	return _op_call_1(this, arg0, arg1);
}*/
int32_t CommMoreFunc::_op_call_1(CommMoreFunc* pThis, const ZRef<CS_COMMODITY> arg0, const ZRef<CS_COMMODITY> arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CS_COMMODITY::~CS_COMMODITY()
{
}

void CS_COMMODITY::_dtor_0()
{
    //return __sub_00080790(this, nullptr);
    this->~CS_COMMODITY();
}

CS_COMMODITY::CS_COMMODITY(const CS_COMMODITY& arg0)
{
    _ctor_1(arg0);
}

void CS_COMMODITY::_ctor_1(const CS_COMMODITY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CS_COMMODITY::CS_COMMODITY()
{
    nItemId = 0;
}

void CS_COMMODITY::_ctor_0()
{
    //return __sub_000806E0(this, nullptr);
    new(this) CS_COMMODITY();
}

int32_t CS_COMMODITY::IsLimited_FirstCash()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CS_COMMODITY::IsLimited_NXCID()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CS_COMMODITY::IsLimitedByRecord()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CS_COMMODITY::Encode(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CS_COMMODITY::Decode(CInPacket& iPacket)
{
    __sub_0009AA40(this, nullptr, iPacket);
}

void CS_COMMODITY::EncodeModifiedData(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CS_COMMODITY::DecodeModifiedData(CInPacket& iPacket)
{
    __sub_0009AA40(this, nullptr, iPacket);
}

CS_COMMODITY& CS_COMMODITY::operator=(CS_COMMODITY& __that)
{
    return _op_assign_10(this, __that);
}

CS_COMMODITY& CS_COMMODITY::_op_assign_10(CS_COMMODITY* pThis, CS_COMMODITY& __that)
{
    return __sub_00082290(pThis, nullptr, __that);
}

CCouponUseSelectDlg::~CCouponUseSelectDlg()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CCouponUseSelectDlg::_dtor_0()
{
    return __sub_00084570(this, nullptr);
}

CCouponUseSelectDlg::CCouponUseSelectDlg(const CCouponUseSelectDlg& arg0)
{
    _ctor_1(arg0);
}

void CCouponUseSelectDlg::_ctor_1(const CCouponUseSelectDlg& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCouponUseSelectDlg::CCouponUseSelectDlg()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CCouponUseSelectDlg::_ctor_0()
{
    return __sub_000842F0(this, nullptr);
}

void CCouponUseSelectDlg::OnCreate(void* pData)
{
    __sub_0008C810(this, nullptr, pData);
}

void CCouponUseSelectDlg::OnChildNotify(uint32_t uId, uint32_t param1, uint32_t param2)
{
    __sub_00084440(this, nullptr, uId, param1, param2);
}

void CCouponUseSelectDlg::SetRet(long nRet)
{
    __sub_000846E0(this, nullptr, nRet);
}

int32_t __cdecl CCouponUseSelectDlg::Confirm(ZXString<char>& sCouponID, ZXString<char>& sCharacterID)
{
    return __sub_00084740(sCouponID, sCharacterID);
}

void CCouponUseSelectDlg::Draw(const tagRECT* pRect)
{
    __sub_000844F0(this, nullptr, pRect);
}

void CCouponUseSelectDlg::Update()
{
    __sub_0008CE70(this, nullptr);
}

int32_t CCouponUseSelectDlg::IsCouponIDValid()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CCouponUseSelectDlg::IsCharacterIDValid()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCouponUseSelectDlg& CCouponUseSelectDlg::operator=(const CCouponUseSelectDlg& arg0)
{
    return _op_assign_11(this, arg0);
}

CCouponUseSelectDlg& CCouponUseSelectDlg::_op_assign_11(CCouponUseSelectDlg* pThis, const CCouponUseSelectDlg& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CConfirmPurchaseDlg::~CConfirmPurchaseDlg()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CConfirmPurchaseDlg::_dtor_0()
{
    return __sub_0008AB90(this, nullptr);
}

CConfirmPurchaseDlg::CConfirmPurchaseDlg(const CConfirmPurchaseDlg& arg0)
{
    _ctor_1(arg0);
}

void CConfirmPurchaseDlg::_ctor_1(const CConfirmPurchaseDlg& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CConfirmPurchaseDlg::CConfirmPurchaseDlg(ZXString<char> sMsg, long nType, unsigned long dwOption,
                                         ZArray<ZRef<CS_COMMODITY>>& aCSC, int32_t bIsMesoCommodity)
{
    _ctor_0(sMsg, nType, dwOption, aCSC, bIsMesoCommodity);
}

void CConfirmPurchaseDlg::_ctor_0(ZXString<char> sMsg, long nType, unsigned long dwOption,
                                  ZArray<ZRef<CS_COMMODITY>>& aCSC, int32_t bIsMesoCommodity)
{
    return __sub_0008A940(this, nullptr, CreateNakedParam(sMsg), nType, dwOption, aCSC, bIsMesoCommodity);
}

CConfirmPurchaseDlg::CConfirmPurchaseDlg(ZXString<char> sMsg, long nType, unsigned long dwOption,
                                         ZArray<ZRef<CS_COMMODITY_EX>>& aCSC, int32_t bIsMesoCommodity)
{
    _ctor_3(sMsg, nType, dwOption, aCSC, bIsMesoCommodity);
}

void CConfirmPurchaseDlg::_ctor_3(ZXString<char> sMsg, long nType, unsigned long dwOption,
                                  ZArray<ZRef<CS_COMMODITY_EX>>& aCSC, int32_t bIsMesoCommodity)
{
    return __sub_00088A70(this, nullptr, CreateNakedParam(sMsg), nType, dwOption, aCSC, bIsMesoCommodity);
}

void CConfirmPurchaseDlg::OnCreate(void* pData)
{
    __sub_0008ACC0(this, nullptr, pData);
}

void CConfirmPurchaseDlg::Draw(const tagRECT* arg0)
{
    __sub_0008B6A0(this, nullptr, arg0);
}

void CConfirmPurchaseDlg::DrawBackgrnd()
{
    __sub_00089560(this, nullptr);
}

void CConfirmPurchaseDlg::SetLayer()
{
    __sub_0008A2B0(this, nullptr);
}

int32_t __cdecl CConfirmPurchaseDlg::Confirm(ZXString<char> sMsg, long nType, unsigned long& dwOption,
                                             ZRef<CS_COMMODITY_EX> CSC, long* pComboBoxParam)
{
    return __sub_0008C660(CreateNakedParam(sMsg), nType, dwOption, CreateNakedParam(CSC), pComboBoxParam);
}

int32_t __cdecl CConfirmPurchaseDlg::Confirm_3(ZXString<char> sMsg, long nType, unsigned long& dwOption,
                                               ZArray<ZRef<CS_COMMODITY_EX>>& aCSC, long* pComboBoxParam,
                                               int32_t bIsMesoCommodity)
{
    return __sub_0008C480(CreateNakedParam(sMsg), nType, dwOption, aCSC, pComboBoxParam, bIsMesoCommodity);
}

int32_t __cdecl CConfirmPurchaseDlg::Confirm(ZXString<char> sMsg, long nType, unsigned long& dwOption)
{
    return __sub_0008C3C0(CreateNakedParam(sMsg), nType, dwOption);
}

int32_t __cdecl CConfirmPurchaseDlg::Confirm_1(ZXString<char> sMsg, long nType, unsigned long& dwOption,
                                               ZRef<CS_COMMODITY> CSC, int32_t bIsMesoCommodity)
{
    return __sub_0008C2C0(CreateNakedParam(sMsg), nType, dwOption, CreateNakedParam(CSC), bIsMesoCommodity);
}

int32_t __cdecl CConfirmPurchaseDlg::Confirm_0(ZXString<char> sMsg, long nType, unsigned long& dwOption,
                                               ZArray<ZRef<CS_COMMODITY>>& aCSC, int32_t bIsMesoCommodity)
{
    return __sub_0008C100(CreateNakedParam(sMsg), nType, dwOption, aCSC, bIsMesoCommodity);
}

void CConfirmPurchaseDlg::SetRet(long nRet)
{
    __sub_00089440(this, nullptr, nRet);
}

CConfirmPurchaseDlg& CConfirmPurchaseDlg::operator=(const CConfirmPurchaseDlg& arg0)
{
    return _op_assign_14(this, arg0);
}

CConfirmPurchaseDlg& CConfirmPurchaseDlg::_op_assign_14(CConfirmPurchaseDlg* pThis, const CConfirmPurchaseDlg& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCSWnd_ItemSearch::~CCSWnd_ItemSearch()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CCSWnd_ItemSearch::_dtor_0()
{
    return __sub_00081070(this, nullptr);
}

CCSWnd_ItemSearch::CCSWnd_ItemSearch(const CCSWnd_ItemSearch& arg0)
{
    _ctor_1(arg0);
}

void CCSWnd_ItemSearch::_ctor_1(const CCSWnd_ItemSearch& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCSWnd_ItemSearch::CCSWnd_ItemSearch()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CCSWnd_ItemSearch::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CCSWnd_ItemSearch::OnCreate(void* arg0)
{
    __sub_000C8980(this, nullptr, arg0);
}

void CCSWnd_ItemSearch::OnButtonClicked(uint32_t nID)
{
    __sub_000CD640(this, nullptr, nID);
}

CCSWnd_ItemSearch& CCSWnd_ItemSearch::operator=(const CCSWnd_ItemSearch& arg0)
{
    return _op_assign_5(this, arg0);
}

CCSWnd_ItemSearch& CCSWnd_ItemSearch::_op_assign_5(CCSWnd_ItemSearch* pThis, const CCSWnd_ItemSearch& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void __cdecl ZSort_ZRef_CS_COMMODITY_EX__CommMoreFunc_(ZArray<ZRef<CS_COMMODITY_EX>>& a, __POSITION* posFrom,
                                                       __POSITION* posTo, CommMoreFunc comp)
{
    return __sub_00092990(a, posFrom, posTo, CreateNakedParam(comp));
}

unsigned char __cdecl _ZtlSecureFuse_unsignedchar_(const unsigned char* at, uint32_t uCS)
{
    return __sub_0007D4D0(at, uCS);
}

const ZRef<CS_COMMODITY_EX>& __cdecl Median_ZRef_CS_COMMODITY_EX__CommMoreFunc_(
    const ZRef<CS_COMMODITY_EX>& a, const ZRef<CS_COMMODITY_EX>& b, const ZRef<CS_COMMODITY_EX>& c, CommMoreFunc& comp)
{
    return __sub_00083370(a, b, c, comp);
}

int32_t __cdecl is_dual_job_born(long nJob, short nSubJob)
{
    if ( nJob / 1000 )
    return 0;
  return nSubJob == 1;
}

short __cdecl _ZtlSecureFuse_short_(const short* at, uint32_t uCS)
{
    return __sub_0007D510(at, uCS);
}

int32_t __cdecl Partition_ZRef_CS_COMMODITY_EX__CommMoreFunc_(ZArray<ZRef<CS_COMMODITY_EX>>& a, int32_t nFrom,
                                                              int32_t nTo, const ZRef<CS_COMMODITY_EX>& pivot,
                                                              CommMoreFunc& comp)
{
    return __sub_000834B0(a, nFrom, nTo, pivot, comp);
}

long __cdecl get_inven_redundant_inc(CharacterData& nInc, long arg1, long arg2)
{
    return __sub_0007E420(nInc, arg1, arg2);
}

void __cdecl DownHeap_ZRef_CS_COMMODITY_EX__CommMoreFunc_(ZArray<ZRef<CS_COMMODITY_EX>>& a, int32_t nIdx, int32_t nLen,
                                                          int32_t nFrom, CommMoreFunc& comp)
{
    return __sub_000835D0(a, nIdx, nLen, nFrom, comp);
}

void __cdecl InsertionSort_ZRef_CS_COMMODITY_EX__CommMoreFunc_(ZArray<ZRef<CS_COMMODITY_EX>>& a, int32_t nFrom,
                                                               int32_t nTo, CommMoreFunc& comp)
{
    return __sub_00083180(a, nFrom, nTo, comp);
}
