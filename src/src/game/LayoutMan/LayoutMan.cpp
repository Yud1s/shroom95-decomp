// LayoutMan.cpp
#include "LayoutMan.hpp"
#include "LayoutMan_regen.ipp"

CLayoutMan::~CLayoutMan()
{
}

void CLayoutMan::_dtor_0()
{
    this->~CLayoutMan();
}

CLayoutMan::CLayoutMan(const CLayoutMan& arg0)
{
    //_ctor_1( arg0);
}

void CLayoutMan::_ctor_1(const CLayoutMan& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CLayoutMan::CLayoutMan()
{
}

void CLayoutMan::_ctor_0()
{
    new(this) CLayoutMan();
}

void CLayoutMan::Init(CWnd* pWnd, long nOffsetX, long nOffsetY)
{
    m_pWnd = pWnd;
    m_nOffsetX = nOffsetX;
    m_nOffsetY = nOffsetY;
    //__sub_001CD2B0(this, nullptr, pWnd, nOffsetX, nOffsetY);
}

_x_com_ptr<IWzGr2DLayer> CLayoutMan::AddLayer(const wchar_t* sLayerUOL, long z, int32_t bManaged)
{
    _x_com_ptr<IWzGr2DLayer> ret;
    return *__sub_001CDB70(this, nullptr, &ret, sLayerUOL, z, bManaged);
}

_x_com_ptr<IWzGr2DLayer> CLayoutMan::AddSingleLayer(const wchar_t* sLayerUOL, long z, int32_t bManaged)
{
    _x_com_ptr<IWzGr2DLayer> ret;
    return *__sub_001CDCB0(this, nullptr, &ret, sLayerUOL, z, bManaged);
}

_x_com_ptr<IWzGr2DLayer> CLayoutMan::AddSingleLayerRemoveOrigin(const wchar_t* sLayerUOL, long z, int32_t bManaged)
{
    _x_com_ptr<IWzGr2DLayer> ret;
    return *__sub_001CE6C0(this, nullptr, &ret, sLayerUOL, z, bManaged);
}

ZRef<CCtrlOriginButton> CLayoutMan::AddButton(const wchar_t* sButtonUOL, uint32_t nID, long nOffsetX, long nOffsetY,
                                              CCtrlButton::CREATEPARAM* pParam)
{
    CCtrlButton::CREATEPARAM params{};
    if (pParam)
    {
        params.bAcceptFocus = pParam->bAcceptFocus;
        params.bDrawBack = pParam->bDrawBack;
        params.bAnimateOnce = pParam->bAnimateOnce;
        params.sUOL = pParam->sUOL;
    }
    else
    {
        params.bAcceptFocus = false;
    }
    params.sUOL = sButtonUOL;


    ZRef pBtn(new CCtrlOriginButton(), true);
    pBtn->CreateCtrl(
        m_pWnd, nID, nOffsetX + m_nOffsetX, nOffsetY + m_nOffsetY, 0, &params);
    m_aButton.Insert(pBtn);
    return pBtn;

    //ZRef<CCtrlOriginButton> ret;
    //return *__sub_001CF210(this, nullptr, &ret, sButtonUOL, nID, nOffsetX, nOffsetY, pParam);
}

int32_t CLayoutMan::CopyToCanvas(_x_com_ptr<IWzCanvas> pCanvas, const wchar_t* sSrcUOL, long nOffsetX, long nOffsetY)
{
    return __sub_001CEFC0(this, nullptr, CreateNakedParam(pCanvas), sSrcUOL, nOffsetX, nOffsetY);
}

int32_t CLayoutMan::CopyToCanvas(_x_com_ptr<IWzCanvas> pCanvas, _x_com_ptr<IWzCanvas> pSrcCanvas, long nOffsetX,
                                 long nOffsetY)
{
    //return __sub_001CD350(this, nullptr, CreateNakedParam(pCanvas), CreateNakedParam(pSrcCanvas), nOffsetX, nOffsetY);
    if (!pSrcCanvas)
    {
        return 0;
    }
    auto h = pSrcCanvas->Getheight();
    auto w = pSrcCanvas->Getwidth();

    pCanvas->Copy(
        nOffsetX + m_nOffsetX - w,
        nOffsetY + m_nOffsetY - h,
        pSrcCanvas.op_arrow(),
        Ztl_variant_t(255));

    return 1;
}

_x_com_ptr<IWzGr2DLayer> __cdecl CLayoutMan::CopyToEmptyLayer(_x_com_ptr<IWzGr2DLayer> pSrcLayer)
{
    return __sub_001CDDF0(CreateNakedParam(pSrcLayer));
}

_x_com_ptr<IWzGr2DLayer> __cdecl CLayoutMan::CopyToEmptyLayerOverlay(_x_com_ptr<IWzGr2DLayer> pSrcLayer, long z)
{
    return __sub_001CD500(CreateNakedParam(pSrcLayer), z);
}

CLayoutMan& CLayoutMan::operator=(const CLayoutMan& arg0)
{
    return _op_assign_12(this, arg0);
}

CLayoutMan& CLayoutMan::_op_assign_12(CLayoutMan* pThis, const CLayoutMan& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
