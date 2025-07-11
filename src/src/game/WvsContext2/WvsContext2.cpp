// WvsContext2.cpp
#include "WvsContext2.hpp"

#include "CashShop/CashShop.hpp"

static ZRef<CS_COMMODITY> FAKE_ZRef_CS_COMMODITY{};
static IntroSortLoopHelper<ZRef<CS_COMMODITY>, int, PriceMoreFunc> FAKE_IntroSortLoopHelper_ZRef_CS_COMMODITY_int_PriceMoreFunc{};
static InsertionSortHelper<ZRef<CS_COMMODITY>, SnLessFunc> FAKE_InsertionSortHelper_ZRef_CS_COMMODITY_SnLessFunc{};
static ZSortHelper<ZRef<CS_COMMODITY>, SnLessFunc> FAKE_ZSortHelper_ZRef_CS_COMMODITY_SnLessFunc{};
static InsertionSortHelper<ZRef<CS_COMMODITY>, PriceMoreFunc> FAKE_InsertionSortHelper_ZRef_CS_COMMODITY_PriceMoreFunc{};
static IntroSortLoopHelper<ZRef<CS_COMMODITY>, int, SnLessFunc> FAKE_IntroSortLoopHelper_ZRef_CS_COMMODITY_int_SnLessFunc{};
static ZSortHelper<ZRef<CS_COMMODITY>, PriceMoreFunc> FAKE_ZSortHelper_ZRef_CS_COMMODITY_PriceMoreFunc{};

#include "WvsContext2_regen.ipp"

ITEMDATA::~ITEMDATA()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void ITEMDATA::_dtor_0()
{
	return __sub_005F4AC0(this, nullptr);
}
ITEMDATA::ITEMDATA(const ITEMDATA &arg0)
{
	_ctor_1( arg0);
}
void ITEMDATA::_ctor_1( const ITEMDATA &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ITEMDATA::ITEMDATA()
{
	UNIMPLEMENTED; //_ctor_0();
}
void ITEMDATA::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ITEMDATA &ITEMDATA::operator=(const ITEMDATA &arg0)
{
	return _op_assign_3(this, arg0);
}
ITEMDATA &ITEMDATA::_op_assign_3(ITEMDATA *pThis, const ITEMDATA &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t SnLessFunc::operator()(const ZRef<CS_COMMODITY> a, const ZRef<CS_COMMODITY> b)
{
	return _op_call_0(this, a, b);
}
int32_t SnLessFunc::_op_call_0(SnLessFunc *pThis, const ZRef<CS_COMMODITY> a, const ZRef<CS_COMMODITY> b)
{
	return __sub_005F38F0(pThis, nullptr, CreateNakedParam(a), CreateNakedParam(b));
}
int32_t PriceMoreFunc::operator()(const ZRef<CS_COMMODITY> a, const ZRef<CS_COMMODITY> b)
{
	return _op_call_0(this, a, b);
}
int32_t PriceMoreFunc::_op_call_0(PriceMoreFunc *pThis, const ZRef<CS_COMMODITY> a, const ZRef<CS_COMMODITY> b)
{
	return __sub_005F3A40(pThis, nullptr, CreateNakedParam(a), CreateNakedParam(b));
}
CMiniGameCreateDlg::~CMiniGameCreateDlg()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CMiniGameCreateDlg::_dtor_0()
{
	return __sub_005F5AC0(this, nullptr);
}
CMiniGameCreateDlg::CMiniGameCreateDlg(const CMiniGameCreateDlg &arg0)
{
	_ctor_1( arg0);
}
void CMiniGameCreateDlg::_ctor_1( const CMiniGameCreateDlg &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CMiniGameCreateDlg::CMiniGameCreateDlg()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CMiniGameCreateDlg::_ctor_0()
{
	return __sub_005F5980(this, nullptr);
}
void CMiniGameCreateDlg::OnCreate(void *pData)
{
	__sub_003962C0(this, nullptr, pData);
}
void CMiniGameCreateDlg::OnChildNotify(uint32_t uId, uint32_t param1, uint32_t param2)
{
	__sub_00383380(this, nullptr, uId, param1, param2);
}
void CMiniGameCreateDlg::SetRet(long nRet)
{
	__sub_0037F130(this, nullptr, nRet);
}
void CMiniGameCreateDlg::Draw(const tagRECT *pRect)
{
	__sub_00383080(this, nullptr, pRect);
}
void CMiniGameCreateDlg::Update()
{
	__sub_005F5AC0(this, nullptr);
}
int32_t CMiniGameCreateDlg::IsTitleValid()
{
	return __sub_00383600(this, nullptr);
}
int32_t CMiniGameCreateDlg::IsPasswordValid()
{
	return __sub_003836E0(this, nullptr);
}
void CMiniGameCreateDlg::GetResult(ZXString<char> &sTitle, ZXString<char> &sPassword, int32_t &bPassword)
{
	__sub_00383790(this, nullptr, sTitle, sPassword, bPassword);
}
CMiniGameCreateDlg &CMiniGameCreateDlg::operator=(const CMiniGameCreateDlg &arg0)
{
	return _op_assign_11(this, arg0);
}
CMiniGameCreateDlg &CMiniGameCreateDlg::_op_assign_11(CMiniGameCreateDlg *pThis, const CMiniGameCreateDlg &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
MedalAchievementInfo::~MedalAchievementInfo()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void MedalAchievementInfo::_dtor_0()
{
	return __sub_005F2890(this, nullptr);
}
MedalAchievementInfo::MedalAchievementInfo(const MedalAchievementInfo &arg0)
{
	_ctor_1( arg0);
}
void MedalAchievementInfo::_ctor_1( const MedalAchievementInfo &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
MedalAchievementInfo::MedalAchievementInfo()
{
}
void MedalAchievementInfo::_ctor_0()
{
	new(this) MedalAchievementInfo();
}
void MedalAchievementInfo::Decode(CInPacket &iPacket)
{
	__sub_004AD180(this, nullptr, iPacket);
}
MedalAchievementInfo &MedalAchievementInfo::operator=(const MedalAchievementInfo &arg0)
{
	return _op_assign_4(this, arg0);
}
MedalAchievementInfo &MedalAchievementInfo::_op_assign_4(MedalAchievementInfo *pThis, const MedalAchievementInfo &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CMemoryGameCreateDlg::~CMemoryGameCreateDlg()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CMemoryGameCreateDlg::_dtor_0()
{
	return __sub_005F5D80(this, nullptr);
}
CMemoryGameCreateDlg::CMemoryGameCreateDlg(const CMemoryGameCreateDlg &arg0)
{
	_ctor_1( arg0);
}
void CMemoryGameCreateDlg::_ctor_1( const CMemoryGameCreateDlg &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CMemoryGameCreateDlg::CMemoryGameCreateDlg()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CMemoryGameCreateDlg::_ctor_0()
{
	return __sub_005F5C40(this, nullptr);
}
void CMemoryGameCreateDlg::OnCreate(void *pData)
{
	__sub_00396F10(this, nullptr, pData);
}
void CMemoryGameCreateDlg::OnChildNotify(uint32_t uId, uint32_t param1, uint32_t param2)
{
	__sub_00383B60(this, nullptr, uId, param1, param2);
}
void CMemoryGameCreateDlg::SetRet(long nRet)
{
	__sub_0037F160(this, nullptr, nRet);
}
void CMemoryGameCreateDlg::Draw(const tagRECT *pRect)
{
	__sub_00383860(this, nullptr, pRect);
}
void CMemoryGameCreateDlg::Update()
{
	__sub_005F5D80(this, nullptr);
}
int32_t CMemoryGameCreateDlg::IsTitleValid()
{
	return __sub_00383DE0(this, nullptr);
}
int32_t CMemoryGameCreateDlg::IsPasswordValid()
{
	return __sub_00383EC0(this, nullptr);
}
void CMemoryGameCreateDlg::GetResult(ZXString<char> &sTitle, long &nGameSize, ZXString<char> &sPassword, int32_t &bPassword)
{
	__sub_00383F70(this, nullptr, sTitle, nGameSize, sPassword, bPassword);
}
CMemoryGameCreateDlg &CMemoryGameCreateDlg::operator=(const CMemoryGameCreateDlg &arg0)
{
	return _op_assign_11(this, arg0);
}
CMemoryGameCreateDlg &CMemoryGameCreateDlg::_op_assign_11(CMemoryGameCreateDlg *pThis, const CMemoryGameCreateDlg &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}

void __cdecl ZSort_ZRef_CS_COMMODITY__PriceMoreFunc_(ZArray<ZRef<CS_COMMODITY>> &a, __POSITION *posFrom, __POSITION *posTo, PriceMoreFunc comp)
{
	return __sub_00602A10(a, posFrom, posTo, CreateNakedParam(comp));
}
void __cdecl DownHeap_ZRef_CS_COMMODITY__SnLessFunc_(ZArray<ZRef<CS_COMMODITY>> &a, int32_t nIdx, int32_t nLen, int32_t nFrom, SnLessFunc &comp)
{
	return __sub_005F5580(a, nIdx, nLen, nFrom, comp);
}
void __cdecl DownHeap_ZRef_CS_COMMODITY__PriceMoreFunc_(ZArray<ZRef<CS_COMMODITY>> &a, int32_t nIdx, int32_t nLen, int32_t nFrom, PriceMoreFunc &comp)
{
	return __sub_005F5780(a, nIdx, nLen, nFrom, comp);
}
long __cdecl get_minigame_type(long nItemID)
{
	return __sub_005F08B0(nItemID);
}
void __cdecl ZSort_ZRef_CS_COMMODITY__SnLessFunc_(ZArray<ZRef<CS_COMMODITY>> &a, SnLessFunc comp)
{
	return __sub_00606B30(a, CreateNakedParam(comp));
}
_x_com_ptr<IWzCanvas> __cdecl _anon__CreateCanvasFromJpegPacket(CInPacket &iPacket)
{
	return __sub_005F1550(iPacket);
}
const ZRef<CS_COMMODITY> &__cdecl Median_ZRef_CS_COMMODITY__PriceMoreFunc_(const ZRef<CS_COMMODITY> &a, const ZRef<CS_COMMODITY> &b, const ZRef<CS_COMMODITY> &c, PriceMoreFunc &comp)
{
	return __sub_005F5320(a, b, c, comp);
}
void __cdecl InsertionSort_ZRef_CS_COMMODITY__SnLessFunc_(ZArray<ZRef<CS_COMMODITY>> &a, int32_t nFrom, int32_t nTo, SnLessFunc &comp)
{
	return __sub_005F4BB0(a, nFrom, nTo, comp);
}
int32_t __cdecl Partition_ZRef_CS_COMMODITY__PriceMoreFunc_(ZArray<ZRef<CS_COMMODITY>> &a, int32_t nFrom, int32_t nTo, const ZRef<CS_COMMODITY> &pivot, PriceMoreFunc &comp)
{
	return __sub_005F5460(a, nFrom, nTo, pivot, comp);
}
void __cdecl InsertionSort_ZRef_CS_COMMODITY__PriceMoreFunc_(ZArray<ZRef<CS_COMMODITY>> &a, int32_t nFrom, int32_t nTo, PriceMoreFunc &comp)
{
	return __sub_005F4DA0(a, nFrom, nTo, comp);
}
void __cdecl ZSort_ZRef_CS_COMMODITY__PriceMoreFunc_(ZArray<ZRef<CS_COMMODITY>> &a, PriceMoreFunc comp)
{
	return __sub_00606B70(a, CreateNakedParam(comp));
}
const ZRef<CS_COMMODITY> &__cdecl Median_ZRef_CS_COMMODITY__SnLessFunc_(const ZRef<CS_COMMODITY> &a, const ZRef<CS_COMMODITY> &b, const ZRef<CS_COMMODITY> &c, SnLessFunc &comp)
{
	return __sub_005F50C0(a, b, c, comp);
}
int32_t __cdecl Partition_ZRef_CS_COMMODITY__SnLessFunc_(ZArray<ZRef<CS_COMMODITY>> &a, int32_t nFrom, int32_t nTo, const ZRef<CS_COMMODITY> &pivot, SnLessFunc &comp)
{
	return __sub_005F5200(a, nFrom, nTo, pivot, comp);
}
void __cdecl ZSort_ZRef_CS_COMMODITY__SnLessFunc_(ZArray<ZRef<CS_COMMODITY>> &a, __POSITION *posFrom, __POSITION *posTo, SnLessFunc comp)
{
	return __sub_006029A0(a, posFrom, posTo, CreateNakedParam(comp));
}
