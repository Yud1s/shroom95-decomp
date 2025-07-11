// SlideMenuDlgEX.cpp
#include "SlideMenuDlgEX.hpp"

static ZSortHelper<CSlideMenuDlgEX::MAINBUTTONINFO, CSlideMenuDlgEX::CompButtonInfo> FAKE_ZSortHelper_CSlideMenuDlgEX__MAINBUTTONINFO_CSlideMenuDlgEX__CompButtonInfo{};
static InsertionSortHelper<CSlideMenuDlgEX::MAINBUTTONINFO, CSlideMenuDlgEX::CompButtonInfo> FAKE_InsertionSortHelper_CSlideMenuDlgEX__MAINBUTTONINFO_CSlideMenuDlgEX__CompButtonInfo{};
static IntroSortLoopHelper<CSlideMenuDlgEX::MAINBUTTONINFO, int, CSlideMenuDlgEX::CompButtonInfo> FAKE_IntroSortLoopHelper_CSlideMenuDlgEX__MAINBUTTONINFO_int_CSlideMenuDlgEX__CompButtonInfo{};

#include "SlideMenuDlgEX_regen.ipp"

CSlideMenuDlgEX::~CSlideMenuDlgEX()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CSlideMenuDlgEX::_dtor_0()
{
	return __sub_00314C50(this, nullptr);
}
CSlideMenuDlgEX::CSlideMenuDlgEX(const CSlideMenuDlgEX &arg0)
{
	_ctor_1( arg0);
}
void CSlideMenuDlgEX::_ctor_1( const CSlideMenuDlgEX &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CSlideMenuDlgEX::CSlideMenuDlgEX(CInPacket &iPacket)
{
	_ctor_0( iPacket);
}
void CSlideMenuDlgEX::_ctor_0( CInPacket &iPacket)
{
	return __sub_00315790(this, nullptr, iPacket);
}
void CSlideMenuDlgEX::OnCreate(void *pData)
{
	__sub_00314DA0(this, nullptr, pData);
}
int32_t CSlideMenuDlgEX::HitTest(long rx, long ry, CCtrlWnd **ppCtrl)
{
	return __sub_003134C0(this, nullptr, rx, ry, ppCtrl);
}
void CSlideMenuDlgEX::Draw(const tagRECT *pRect)
{
	__sub_00314220(this, nullptr, pRect);
}
void CSlideMenuDlgEX::OnButtonClicked(uint32_t nId)
{
	__sub_00314410(this, nullptr, nId);
}
void CSlideMenuDlgEX::OnKey(uint32_t wParam, int32_t lParam)
{
	__sub_00313540(this, nullptr, wParam, lParam);
}
void CSlideMenuDlgEX::Update()
{
	__sub_003134F0(this, nullptr);
}
long CSlideMenuDlgEX::GetSelectResult()
{
	return __sub_00313680(this, nullptr);
}
void CSlideMenuDlgEX::SetSlideMenuDlg(CInPacket &iPacket)
{
	__sub_003156F0(this, nullptr, iPacket);
}
void CSlideMenuDlgEX::SetButtonInfo(ZXString<char> sInfo)
{
	__sub_003153D0(this, nullptr, CreateNakedParam(sInfo));
}
void CSlideMenuDlgEX::CreateSlideMenuButton()
{
	__sub_003144D0(this, nullptr);
}
void CSlideMenuDlgEX::CreateMainButton()
{
	__sub_00313900(this, nullptr);
}
void CSlideMenuDlgEX::ArrowButtonClicked(long nButtonID)
{
	__sub_00313A70(this, nullptr, nButtonID);
}
CSlideMenuDlgEX &CSlideMenuDlgEX::operator=(const CSlideMenuDlgEX &arg0)
{
	return _op_assign_18(this, arg0);
}
CSlideMenuDlgEX &CSlideMenuDlgEX::_op_assign_18(CSlideMenuDlgEX *pThis, const CSlideMenuDlgEX &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CSlideMenuDlgEX::MAINBUTTONINFO::~MAINBUTTONINFO()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CSlideMenuDlgEX::MAINBUTTONINFO::_dtor_0()
{
	return __sub_00313740(this, nullptr);
}
CSlideMenuDlgEX::MAINBUTTONINFO::MAINBUTTONINFO(const CSlideMenuDlgEX::MAINBUTTONINFO &__that)
{
	_ctor_1( __that);
}
void CSlideMenuDlgEX::MAINBUTTONINFO::_ctor_1( const CSlideMenuDlgEX::MAINBUTTONINFO &__that)
{
	return __sub_00313BE0(this, nullptr, __that);
}
CSlideMenuDlgEX::MAINBUTTONINFO::MAINBUTTONINFO()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CSlideMenuDlgEX::MAINBUTTONINFO::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CSlideMenuDlgEX::MAINBUTTONINFO &CSlideMenuDlgEX::MAINBUTTONINFO::operator=(const CSlideMenuDlgEX::MAINBUTTONINFO &arg0)
{
	return _op_assign_3(this, arg0);
}
CSlideMenuDlgEX::MAINBUTTONINFO &CSlideMenuDlgEX::MAINBUTTONINFO::_op_assign_3(CSlideMenuDlgEX::MAINBUTTONINFO *pThis, const CSlideMenuDlgEX::MAINBUTTONINFO &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CSlideMenuDlgEX::CompButtonInfo::operator()(const CSlideMenuDlgEX::MAINBUTTONINFO a, const CSlideMenuDlgEX::MAINBUTTONINFO b)
{
	return _op_call_0(this, a, b);
}
int32_t CSlideMenuDlgEX::CompButtonInfo::_op_call_0(CSlideMenuDlgEX::CompButtonInfo *pThis, CSlideMenuDlgEX::MAINBUTTONINFO a, CSlideMenuDlgEX::MAINBUTTONINFO b)
{
	return __sub_003137D0(pThis, nullptr, CreateNakedParam(a), CreateNakedParam(b));
}

const CSlideMenuDlgEX::MAINBUTTONINFO &__cdecl Median_CSlideMenuDlgEX__MAINBUTTONINFO_CSlideMenuDlgEX__CompButtonInfo_(const CSlideMenuDlgEX::MAINBUTTONINFO &a, const CSlideMenuDlgEX::MAINBUTTONINFO &b, const CSlideMenuDlgEX::MAINBUTTONINFO &c, CSlideMenuDlgEX::CompButtonInfo &comp)
{
	return __sub_00313C50(a, b, c, comp);
}
void __cdecl InsertionSort_CSlideMenuDlgEX__MAINBUTTONINFO_CSlideMenuDlgEX__CompButtonInfo_(ZArray<CSlideMenuDlgEX::MAINBUTTONINFO> &a, int32_t nFrom, int32_t nTo, CSlideMenuDlgEX::CompButtonInfo &comp)
{
	return __sub_003149A0(a, nFrom, nTo, comp);
}
int32_t __cdecl Partition_CSlideMenuDlgEX__MAINBUTTONINFO_CSlideMenuDlgEX__CompButtonInfo_(ZArray<CSlideMenuDlgEX::MAINBUTTONINFO> &a, int32_t nFrom, int32_t nTo, const CSlideMenuDlgEX::MAINBUTTONINFO &pivot, CSlideMenuDlgEX::CompButtonInfo &comp)
{
	return __sub_00313DD0(a, nFrom, nTo, pivot, comp);
}
void __cdecl DownHeap_CSlideMenuDlgEX__MAINBUTTONINFO_CSlideMenuDlgEX__CompButtonInfo_(ZArray<CSlideMenuDlgEX::MAINBUTTONINFO> &a, int32_t nIdx, int32_t nLen, int32_t nFrom, CSlideMenuDlgEX::CompButtonInfo &comp)
{
	return __sub_00314040(a, nIdx, nLen, nFrom, comp);
}
void __cdecl ZSort_CSlideMenuDlgEX__MAINBUTTONINFO_CSlideMenuDlgEX__CompButtonInfo_(ZArray<CSlideMenuDlgEX::MAINBUTTONINFO> &a, __POSITION *posFrom, __POSITION *posTo, CSlideMenuDlgEX::CompButtonInfo comp)
{
	return __sub_00315360(a, posFrom, posTo, CreateNakedParam(comp));
}
