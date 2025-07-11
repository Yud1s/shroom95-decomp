// EntrustedShopDlg.cpp
#include "EntrustedShopDlg.hpp"

static ZRef<CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY> FAKE_ZRef_CEntrustedShopDlg_CVisitListDlg_VISITLOGENTRY{};

static ZRefCounted_AllocHelper<ZRefCountedDummy<CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY>> FAKE_ZRefCounted_AllocHelper_ZRefCountedDummy_CEntrustedShopDlg_CVisitListDlg_VISITLOGENTRY{};

#include "EntrustedShopDlg_regen.ipp"

CEntrustedShopDlg::~CEntrustedShopDlg()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CEntrustedShopDlg::_dtor_0()
{
	return __sub_0011DA00(this, nullptr);
}
CEntrustedShopDlg::CEntrustedShopDlg(const CEntrustedShopDlg &arg0)
{
	_ctor_1( arg0);
}
void CEntrustedShopDlg::_ctor_1( const CEntrustedShopDlg &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CEntrustedShopDlg::CEntrustedShopDlg()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CEntrustedShopDlg::_ctor_0()
{
	return __sub_0011D8F0(this, nullptr);
}
void CEntrustedShopDlg::OnButtonClicked(uint32_t nId)
{
	__sub_0011E400(this, nullptr, nId);
}
void CEntrustedShopDlg::SetRet(long nRet)
{
	__sub_0011E480(this, nullptr, nRet);
}
void CEntrustedShopDlg::Draw(const tagRECT *pRect)
{
	__sub_0011F930(this, nullptr, pRect);
}
void CEntrustedShopDlg::DrawEmployee()
{
	__sub_0011CE60(this, nullptr);
}
void CEntrustedShopDlg::DrawRemainingTime()
{
	__sub_0011E6B0(this, nullptr);
}
void CEntrustedShopDlg::Update()
{
	__sub_0011E920(this, nullptr);
}
int32_t CEntrustedShopDlg::IsEntrusted()
{
	return __sub_0011D9A0(this, nullptr);
}
void CEntrustedShopDlg::RegisterEmployer(unsigned long dwTemplateID)
{
	__sub_0011F960(this, nullptr, dwTemplateID);
}
void CEntrustedShopDlg::AddBlackList(ZXString<char> sName)
{
	__sub_0011ED50(this, nullptr, CreateNakedParam(sName));
}
void CEntrustedShopDlg::DeleteBlackList(ZXString<char> sName)
{
	__sub_0011EE20(this, nullptr, CreateNakedParam(sName));
}
void CEntrustedShopDlg::DestroyBlackListDlg()
{
	__sub_0011D400(this, nullptr);
}
void CEntrustedShopDlg::DestroyVisitListDlg()
{
	__sub_0011D450(this, nullptr);
}
void CEntrustedShopDlg::OnPacket(long nType, CInPacket &iPacket)
{
	__sub_00120EC0(this, nullptr, nType, iPacket);
}
void CEntrustedShopDlg::OnStart()
{
	__sub_0011C760(this, nullptr);
}
void CEntrustedShopDlg::OnRefresh(CInPacket &iPacket)
{
	__sub_0011CC30(this, nullptr, iPacket);
}
void CEntrustedShopDlg::OnEnterResult(CInPacket &iPacket)
{
	__sub_0011FDC0(this, nullptr, iPacket);
}
void CEntrustedShopDlg::OnLeave(long nSlot, CInPacket &iPacket)
{
	__sub_0011E950(this, nullptr, nSlot, iPacket);
}
long CEntrustedShopDlg::GetMoney()
{
	return __sub_0011D380(this, nullptr);
}
unsigned char CEntrustedShopDlg::GetMiniRoomType()
{
	return __sub_0011D9B0(this, nullptr);
}
void CEntrustedShopDlg::OnCorrectSSN2(long nProc)
{
	__sub_0011DB30(this, nullptr, nProc);
}
void CEntrustedShopDlg::DecodeSoldItemList(CInPacket &iPacket)
{
	__sub_0011FC70(this, nullptr, iPacket);
}
void CEntrustedShopDlg::OnGoOut()
{
	__sub_0011DD40(this, nullptr);
}
void CEntrustedShopDlg::OnArrange()
{
	__sub_0011DDD0(this, nullptr);
}
void CEntrustedShopDlg::OnWithdrawMoney()
{
	__sub_0011DE80(this, nullptr);
}
void CEntrustedShopDlg::OnBlackList()
{
	__sub_0011DF10(this, nullptr);
}
void CEntrustedShopDlg::OnVisitList()
{
	__sub_0011DF90(this, nullptr);
}
void CEntrustedShopDlg::OnArrangeItemResult(CInPacket &iPacket)
{
	__sub_0011DC20(this, nullptr, iPacket);
}
void CEntrustedShopDlg::OnWithdrawAllResult(CInPacket &iPacket)
{
	__sub_0011EBA0(this, nullptr, iPacket);
}
void CEntrustedShopDlg::OnWithdrawMoneyResult(CInPacket &iPacket)
{
	__sub_0011C7A0(this, nullptr, iPacket);
}
void CEntrustedShopDlg::OnBlackListResult(CInPacket &iPacket)
{
	__sub_00120D50(this, nullptr, iPacket);
}
void CEntrustedShopDlg::OnVisitListResult(CInPacket &iPacket)
{
	__sub_00120890(this, nullptr, iPacket);
}
CEntrustedShopDlg &CEntrustedShopDlg::operator=(const CEntrustedShopDlg &arg0)
{
	return _op_assign_34(this, arg0);
}
CEntrustedShopDlg &CEntrustedShopDlg::_op_assign_34(CEntrustedShopDlg *pThis, const CEntrustedShopDlg &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CEntrustedShopDlg::CBlackListDlg::~CBlackListDlg()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CEntrustedShopDlg::CBlackListDlg::_dtor_0()
{
	return __sub_00120C00(this, nullptr);
}
CEntrustedShopDlg::CBlackListDlg::CBlackListDlg(const CEntrustedShopDlg::CBlackListDlg &arg0)
{
	_ctor_1( arg0);
}
void CEntrustedShopDlg::CBlackListDlg::_ctor_1( const CEntrustedShopDlg::CBlackListDlg &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CEntrustedShopDlg::CBlackListDlg::CBlackListDlg(CEntrustedShopDlg *pDlg, const ZList<ZXString<char>> &lBlackList)
{
	_ctor_0( pDlg, lBlackList);
}
void CEntrustedShopDlg::CBlackListDlg::_ctor_0( CEntrustedShopDlg *pDlg, const ZList<ZXString<char>> &lBlackList)
{
	return __sub_00120AB0(this, nullptr, pDlg, lBlackList);
}
void CEntrustedShopDlg::CBlackListDlg::OnCreate(void *pData)
{
	__sub_0011E010(this, nullptr, pData);
}
void CEntrustedShopDlg::CBlackListDlg::OnButtonClicked(uint32_t nId)
{
	__sub_00120CF0(this, nullptr, nId);
}
void CEntrustedShopDlg::CBlackListDlg::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
	__sub_0011C7F0(this, nullptr, msg, wParam, rx, ry);
}
void CEntrustedShopDlg::CBlackListDlg::Draw(const tagRECT *pRect)
{
	__sub_0011EFB0(this, nullptr, pRect);
}
void CEntrustedShopDlg::CBlackListDlg::SetRet(long nRet)
{
	__sub_0011D4A0(this, nullptr, nRet);
}
void CEntrustedShopDlg::CBlackListDlg::AddBlackList()
{
	__sub_00120310(this, nullptr);
}
void CEntrustedShopDlg::CBlackListDlg::DeleteBlackList()
{
	__sub_0011EEF0(this, nullptr);
}
CEntrustedShopDlg::CBlackListDlg &CEntrustedShopDlg::CBlackListDlg::operator=(const CEntrustedShopDlg::CBlackListDlg &arg0)
{
	return _op_assign_10(this, arg0);
}
CEntrustedShopDlg::CBlackListDlg &CEntrustedShopDlg::CBlackListDlg::_op_assign_10(CEntrustedShopDlg::CBlackListDlg *pThis, const CEntrustedShopDlg::CBlackListDlg &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CEntrustedShopDlg::CVisitListDlg::~CVisitListDlg()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CEntrustedShopDlg::CVisitListDlg::_dtor_0()
{
	return __sub_001207C0(this, nullptr);
}
CEntrustedShopDlg::CVisitListDlg::CVisitListDlg(const CEntrustedShopDlg::CVisitListDlg &arg0)
{
	_ctor_1( arg0);
}
void CEntrustedShopDlg::CVisitListDlg::_ctor_1( const CEntrustedShopDlg::CVisitListDlg &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CEntrustedShopDlg::CVisitListDlg::CVisitListDlg(CEntrustedShopDlg *pDlg, const ZList<ZRef<CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY>> &vl)
{
	_ctor_0( pDlg, vl);
}
void CEntrustedShopDlg::CVisitListDlg::_ctor_0( CEntrustedShopDlg *pDlg, const ZList<ZRef<CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY>> &vl)
{
	return __sub_001206A0(this, nullptr, pDlg, vl);
}
void CEntrustedShopDlg::CVisitListDlg::OnCreate(void *pData)
{
	__sub_0011D4C0(this, nullptr, pData);
}
void CEntrustedShopDlg::CVisitListDlg::OnButtonClicked(uint32_t nId)
{
	__sub_0011D630(this, nullptr, nId);
}
void CEntrustedShopDlg::CVisitListDlg::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
	__sub_0011C890(this, nullptr, msg, wParam, rx, ry);
}
void CEntrustedShopDlg::CVisitListDlg::Draw(const tagRECT *pRect)
{
	__sub_0011F260(this, nullptr, pRect);
}
void CEntrustedShopDlg::CVisitListDlg::SetRet(long nRet)
{
	__sub_0011D710(this, nullptr, nRet);
}
CEntrustedShopDlg::CVisitListDlg &CEntrustedShopDlg::CVisitListDlg::operator=(const CEntrustedShopDlg::CVisitListDlg &arg0)
{
	return _op_assign_8(this, arg0);
}
CEntrustedShopDlg::CVisitListDlg &CEntrustedShopDlg::CVisitListDlg::_op_assign_8(CEntrustedShopDlg::CVisitListDlg *pThis, const CEntrustedShopDlg::CVisitListDlg &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY::~VISITLOGENTRY()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY::_dtor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY::VISITLOGENTRY(const CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY &arg0)
{
	_ctor_1( arg0);
}
void CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY::_ctor_1( const CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY::VISITLOGENTRY()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY &CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY::operator=(const CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY &arg0)
{
	return _op_assign_3(this, arg0);
}
CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY &CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY::_op_assign_3(CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY *pThis, const CEntrustedShopDlg::CVisitListDlg::VISITLOGENTRY &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
