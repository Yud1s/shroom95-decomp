// TrunkDlg.cpp
#include "TrunkDlg.hpp"
#include "TrunkDlg_regen.ipp"

CTrunkDlg::~CTrunkDlg()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CTrunkDlg::_dtor_0()
{
    return __sub_0036A1A0(this, nullptr);
}

CTrunkDlg::CTrunkDlg(const CTrunkDlg& arg0)
{
    _ctor_1(arg0);
}

void CTrunkDlg::_ctor_1(const CTrunkDlg& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTrunkDlg::CTrunkDlg()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CTrunkDlg::_ctor_0()
{
    return __sub_0036A050(this, nullptr);
}

void CTrunkDlg::SetTrunkDlg(CInPacket& iPacket)
{
    __sub_0036A940(this, nullptr, iPacket);
}

void CTrunkDlg::SetRet(long nRet)
{
    __sub_00367250(this, nullptr, nRet);
}

void CTrunkDlg::ResetInfo()
{
    __sub_0036A7A0(this, nullptr);
}

void CTrunkDlg::OnCreate(void* arg0)
{
    __sub_00368C00(this, nullptr, arg0);
}

int32_t CTrunkDlg::HitTest(long rx, long ry, CCtrlWnd** ppCtrl)
{
    return __sub_003663F0(this, nullptr, rx, ry, ppCtrl);
}

void CTrunkDlg::Draw(const tagRECT* pRect)
{
    __sub_00369850(this, nullptr, pRect);
}

void CTrunkDlg::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_0036A860(this, nullptr, msg, wParam, rx, ry);
}

int32_t CTrunkDlg::OnMouseMove(long rx, long ry)
{
    return __sub_00366800(this, nullptr, rx, ry);
}

void CTrunkDlg::OnMouseEnter(int32_t bEnter)
{
    __sub_00366440(this, nullptr, bEnter);
}

void CTrunkDlg::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    __sub_00366470(this, nullptr, nId, param1, param2);
}

void CTrunkDlg::OnButtonClicked(uint32_t nId)
{
    __sub_0036A7D0(this, nullptr, nId);
}

void CTrunkDlg::ClearToolTip()
{
    __sub_0036A140(this, nullptr);
}

void CTrunkDlg::OnTabChanged(long nTab)
{
    __sub_00366430(this, nullptr, nTab);
}

void CTrunkDlg::SetGetItems(CInPacket& iPacket)
{
    __sub_0036A390(this, nullptr, iPacket);
}

void CTrunkDlg::SetPutItems(long nTI, ZArray<CTrunkDlg::ITEM>& aItem)
{
    __sub_00369AB0(this, nullptr, nTI, aItem);
}

void CTrunkDlg::SetScrollBar()
{
    __sub_003664D0(this, nullptr);
}

void CTrunkDlg::SetAvatar()
{
    __sub_003675A0(this, nullptr);
}

void CTrunkDlg::SetNPC()
{
    __sub_00366950(this, nullptr);
}

void CTrunkDlg::Update()
{
    __sub_00366460(this, nullptr);
}

void CTrunkDlg::DrawGetItem(_x_com_ptr<IWzCanvas> pCanvas)
{
    __sub_00367710(this, nullptr, CreateNakedParam(pCanvas));
}

void CTrunkDlg::DrawPutItem(_x_com_ptr<IWzCanvas> pCanvas)
{
    __sub_00367DC0(this, nullptr, CreateNakedParam(pCanvas));
}

void CTrunkDlg::DrawMoney(_x_com_ptr<IWzCanvas> pCanvas, long nMoney, long nLeft)
{
    __sub_003682F0(this, nullptr, CreateNakedParam(pCanvas), nMoney, nLeft);
}

int32_t CTrunkDlg::GetItemIndexFromPoint(long rx, long ry, int32_t* pbBuy, long* pnIdx)
{
    return __sub_00366540(this, nullptr, rx, ry, pbBuy, pnIdx);
}

void CTrunkDlg::SendGetItemRequest()
{
    __sub_00369E00(this, nullptr);
}

void CTrunkDlg::SendPutItemRequest()
{
    __sub_00368570(this, nullptr);
}

void CTrunkDlg::SendSortItemRequest()
{
    __sub_00367310(this, nullptr);
}

void CTrunkDlg::SendGetMoneyRequest()
{
    __sub_003688E0(this, nullptr);
}

void CTrunkDlg::SendPutMoneyRequest()
{
    __sub_003689E0(this, nullptr);
}

long CTrunkDlg::AskItemCount(const char* sMsg, long nDefault, long nMax)
{
    return __sub_003673A0(this, nullptr, sMsg, nDefault, nMax);
}

long CTrunkDlg::CmpPutItem()
{
    return __sub_00366770(this, nullptr);
}

void __cdecl CTrunkDlg::OnPacket(CInPacket& iPacket)
{
    __sub_0036A990(iPacket);
}

CTrunkDlg& CTrunkDlg::operator=(const CTrunkDlg& arg0)
{
    return _op_assign_37(this, arg0);
}

CTrunkDlg& CTrunkDlg::_op_assign_37(CTrunkDlg* pThis, const CTrunkDlg& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTrunkDlg::ITEM::~ITEM()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CTrunkDlg::ITEM::_dtor_0()
{
    return __sub_00367500(this, nullptr);
}

CTrunkDlg::ITEM::ITEM(const CTrunkDlg::ITEM& arg0)
{
    _ctor_1(arg0);
}

void CTrunkDlg::ITEM::_ctor_1(const CTrunkDlg::ITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTrunkDlg::ITEM::ITEM()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CTrunkDlg::ITEM::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CTrunkDlg::ITEM& CTrunkDlg::ITEM::operator=(const CTrunkDlg::ITEM& __that)
{
    return _op_assign_3(this, __that);
}

CTrunkDlg::ITEM& CTrunkDlg::ITEM::_op_assign_3(CTrunkDlg::ITEM* pThis, const CTrunkDlg::ITEM& __that)
{
    return __sub_00368B50(pThis, nullptr, __that);
}
