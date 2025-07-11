// BookDlg.cpp
#include "BookDlg.hpp"
#include "BookDlg_regen.ipp"

CT_INFO::~CT_INFO()
{

}

void CT_INFO::_dtor_0()
{
    this->~CT_INFO();
}

CT_INFO::CT_INFO(const CT_INFO& arg0)
{
    _ctor_1(arg0);
}

void CT_INFO::_ctor_1(const CT_INFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CT_INFO::CT_INFO()
{
}

void CT_INFO::_ctor_0()
{
    new(this) CT_INFO();
}

CT_INFO& CT_INFO::operator=(const CT_INFO& __that)
{
    return _op_assign_3(this, __that);
}

CT_INFO& CT_INFO::_op_assign_3(CT_INFO* pThis, const CT_INFO& __that)
{
    return __sub_00409720(pThis, nullptr, __that);
}

CBookDlg::~CBookDlg()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CBookDlg::_dtor_0()
{
    return __sub_000741B0(this, nullptr);
}

CBookDlg::CBookDlg(const CBookDlg& arg0)
{
    _ctor_1(arg0);
}

void CBookDlg::_ctor_1(const CBookDlg& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CBookDlg::CBookDlg()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CBookDlg::_ctor_0()
{
    return __sub_00074030(this, nullptr);
}

void CBookDlg::OnCreate(void* pData)
{
    __sub_00071F00(this, nullptr, pData);
}

void CBookDlg::OnButtonClicked(uint32_t nId)
{
    __sub_00074300(this, nullptr, nId);
}

void CBookDlg::Draw(const tagRECT* pRect)
{
    __sub_00073360(this, nullptr, pRect);
}

int32_t CBookDlg::OnSetFocus(int32_t bFocus)
{
    return __sub_00074180(this, nullptr, bFocus);
}

void CBookDlg::OnKey(uint32_t wParam, int32_t lParam)
{
    __sub_00071360(this, nullptr, wParam, lParam);
}

void CBookDlg::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_00074360(this, nullptr, msg, wParam, rx, ry);
}

int32_t CBookDlg::OnMouseMove(long rx, long ry)
{
    return __sub_00071E80(this, nullptr, rx, ry);
}

int32_t CBookDlg::HitTest(long rx, long ry, CCtrlWnd** ppCtrl)
{
    return __sub_00071EA0(this, nullptr, rx, ry, ppCtrl);
}

void CBookDlg::ClearToolTip()
{
    __sub_00074190(this, nullptr);
}

void CBookDlg::SetBookItem(long nItemID)
{
    __sub_000743B0(this, nullptr, nItemID);
}

void CBookDlg::SetPage(long arg0)
{
    __sub_00073AC0(this, nullptr, arg0);
}

void CBookDlg::SetCtrlEnabled()
{
    __sub_00071390(this, nullptr);
}

void CBookDlg::CheckMousePoint(long rx, long ry)
{
    __sub_00071B30(this, nullptr, rx, ry);
}

CBookDlg& CBookDlg::operator=(const CBookDlg& arg0)
{
    return _op_assign_16(this, arg0);
}

CBookDlg& CBookDlg::_op_assign_16(CBookDlg* pThis, const CBookDlg& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void __cdecl PcCreateObject__com_ptr_t__com_IIID_IWzFont___GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac___(
    const wchar_t* sUOL, _x_com_ptr<IWzFont>& pObj, IUnknown* pUnkOuter)
{
    return __sub_00071480(sUOL, pObj, pUnkOuter);
}
