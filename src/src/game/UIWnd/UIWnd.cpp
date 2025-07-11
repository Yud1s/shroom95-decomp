// UIWnd.cpp
#include "UIWnd.hpp"
#include "UIWnd_regen.ipp"

CUIWnd::~CUIWnd()
{
}

void CUIWnd::_dtor_0()
{
    //return __sub_004DD780(this, nullptr);
    this->~CUIWnd();
}

CUIWnd::CUIWnd(const CUIWnd& arg0)
{
    _ctor_1(arg0);
}

void CUIWnd::_ctor_1(const CUIWnd& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIWnd::CUIWnd(int32_t nUIType, int32_t closeType, int32_t closeX, int32_t closeY, const wchar_t* sBackgrndUOL,
               int32_t nBackgrndX, int32_t nBackgrndY, int32_t bMultiBg)
{
    //_ctor_0(nUIType, closeType, closeX, closeY, sBackgrndUOL, nBackgrndX, nBackgrndY, bMultiBg);
    m_nBtCloseType = closeType;
    m_nUIType = nUIType;
    m_nBtCloseX = closeX;
    m_nBtCloseY = closeY;


    SetBackgrnd(sBackgrndUOL, nBackgrndX, nBackgrndY, bMultiBg, 0, 0);
    m_bPosSave = true;
}

void CUIWnd::_ctor_0(int32_t nUIType, int32_t closeType, int32_t closeX, int32_t closeY, const wchar_t* sBackgrndUOL,
                     int32_t nBackgrndX, int32_t nBackgrndY, int32_t bMultiBg)
{
    //return __sub_004DD980(this, nullptr, nUIType, closeType, closeX, closeY, sBackgrndUOL, nBackgrndX, nBackgrndY, bMultiBg);
    new(this) CUIWnd(nUIType, closeType, closeX, closeY, bMultiBg, nBackgrndX, nBackgrndY);
}

CUIWnd::CUIWnd(int32_t nUIType, int32_t closeType, int32_t closeX, int32_t closeY, int32_t bBackgrnd,
               int32_t nBackgrndX, int32_t nBackgrndY)
{
    //_ctor_3(nUIType, closeType, closeX, closeY, bBackgrnd, nBackgrndX, nBackgrndY);
    m_nUIType = nUIType;
    m_nBtCloseY = closeY;
    m_nBtCloseX = closeX;
    m_nBtCloseType = closeType;
    m_bPosSave = true;
    m_nBackgrndX = nBackgrndX;
    m_bBackgrnd = bBackgrnd;
    m_nBackgrndY = nBackgrndY;
}

void CUIWnd::_ctor_3(int32_t nUIType, int32_t closeType, int32_t closeX, int32_t closeY, int32_t bBackgrnd,
                     int32_t nBackgrndX, int32_t nBackgrndY)
{
    //return __sub_004DD680(this, nullptr, nUIType, closeType, closeX, closeY, bBackgrnd, nBackgrndX, nBackgrndY);
    new(this) CUIWnd(nUIType, closeType, closeX, closeY, bBackgrnd, nBackgrndX, nBackgrndY);
}

void CUIWnd::CreateUIWndPosSaved(long w, long h, long z)
{
    auto cfg = CConfig::GetInstance();
    cfg->GetUIWndPos(m_nUIType, m_nSmallScreenX, m_nSmallScreenY, m_nOption);
    cfg->GetUIWndPosLarge(m_nUIType, m_nLargeScreenX, m_nLargeScreenY);
    m_bPosSave = true;
    CWnd::CreateWnd(m_nSmallScreenX, m_nSmallScreenY, w, h, z, true, nullptr, true, Origin_LT);
}

void CUIWnd::CreateUIWndPosForced(long smallL, long smallT, long largeL, long largeT, long w, long h, long z)
{
    m_nLargeScreenX = largeL;
    m_nLargeScreenY = largeT;
    m_nSmallScreenX = smallL;
    m_nSmallScreenY = smallT;
    m_bPosSave = false;
    CWnd::CreateWnd(smallL, smallT, w, h, z, true, nullptr, true, Origin_LT);
}

void CUIWnd::OnCreate(void* pData, ZXString16 sUOL, int32_t bMultiBg)
{
    __sub_004DDB30(this, nullptr, pData, CreateNakedParam(sUOL), bMultiBg);
}

void CUIWnd::OnCreate(void* pData)
{
    this->OnCreate(pData, ZXString16(), false);
}

void CUIWnd::OnDestroy()
{
    if (m_bPosSave)
    {
        //TODO(game) saving)
    }

    if (auto wndMan = CWndMan::GetInstance())
        wndMan->UnregisterUIWindow(this);
    m_bIsLargeMode = false;
}

void CUIWnd::OnMouseEnter(int32_t bEnter)
{
    CWnd::OnMouseEnter(bEnter);
    m_uiToolTip.ClearToolTip();
}

int32_t CUIWnd::OnSetFocus(int32_t bFocus)
{
    return 0;
}

void CUIWnd::OnKey(uint32_t wParam, int32_t lParam)
{
    if (auto ctx = CWvsContext::GetInstance())
        ctx->ProcessBasicUIKey(wParam, lParam);
}

void CUIWnd::OnButtonClicked(uint32_t nId)
{
    if (nId == 1000)
        CWvsContext::GetInstance()->UI_Close(m_nUIType);
}

int32_t CUIWnd::HitTest(long rx, long ry, CCtrlWnd** ppCtrl)
{
    auto res = CWnd::HitTest(rx, ry, ppCtrl);
    if (res && (!ppCtrl || !*ppCtrl))
        return (ry > 0x18) + 1;

    return res;
}

void CUIWnd::ClearToolTip()
{
    m_uiToolTip.ClearToolTip();
}

void CUIWnd::ReloadBackgrnd(int32_t bMultiBg)
{
    if (m_bBackgrnd)
    {
        CWnd::SetBackgrnd(Ztl_bstr_t((const wchar_t*)m_sBackgrndUOL.c_str()), m_nBackgrndX, m_nBackgrndY, bMultiBg, 0,
                          0);
    }
}

void CUIWnd::SetScreenMode(bool bIsLarge, bool bNeedInvalidateTabs)
{
    __sub_004DD570(this, nullptr, bIsLarge, bNeedInvalidateTabs);
}

ZXString16 CUIWnd::GetResName()
{
    auto v4 = 0;
    switch (this->m_nUIType)
    {
    case 0:
        v4 = 6728;
        goto LABEL_3;
    case 1:
        v4 = 2210;
        goto LABEL_3;
    case 2:
        v4 = 2211;
        goto LABEL_3;
    case 3:
        v4 = 2212;
        goto LABEL_3;
    case 4:
        v4 = 2216;
        goto LABEL_3;
    case 5:
        v4 = 2440;
        goto LABEL_3;
    case 6:
        v4 = 6752;
        goto LABEL_3;
    case 9:
        v4 = 2632;
        goto LABEL_3;
    case 0xA:
        v4 = 2217;
        goto LABEL_3;
    case 0x1A:
        v4 = 6716;
        goto LABEL_3;
    case 0x1B:
        v4 = 2218;
        goto LABEL_3;
    case 0x1E:
        v4 = 6768;
        goto LABEL_3;
    case 0x20:
        v4 = 2213;
        goto LABEL_3;
    case 0x2A:
        v4 = 6140;
    LABEL_3:
        return StringPool::GetInstance().GetStringW(v4);
    default:
        return ZXString16();
    }
}

CUIWnd& CUIWnd::operator=(const CUIWnd& arg0)
{
    return _op_assign_21(this, arg0);
}

CUIWnd& CUIWnd::_op_assign_21(CUIWnd* pThis, const CUIWnd& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
