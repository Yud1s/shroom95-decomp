// UIStat.cpp
#include "UIStat.hpp"

#include "WvsExtra.h"

static _ZtlSecureFuseHelper<unsigned char> FAKE_ZtlSecureFuseHelperUShort{};
static _ZtlSecureFuseHelper<long> FAKE_ZtlSecureFuseHelperLong{};

#include "UIStat_regen.ipp"

ZXString<char> CUIStat::ms_aStatName[4]
{
    ZXString<char>("STR"), ZXString<char>("DEX"), ZXString<char>("INT"), ZXString<char>("LUK")
};

CUIStatDetail::~CUIStatDetail()
{
    ms_pInstance = nullptr;
}

void CUIStatDetail::_dtor_0()
{
    this->~CUIStatDetail();
}

CUIStatDetail::CUIStatDetail(const CUIStatDetail& arg0)
{
    _ctor_1(arg0);
}

void CUIStatDetail::_ctor_1(const CUIStatDetail& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStatDetail::CUIStatDetail(long lLeft, long lTop)
{
    //_ctor_0(lLeft, lTop);
    ms_pInstance = this;
    CreateWnd(lLeft, lTop, 178, 247, 10, 1, 0, 1, Origin_LT);
}

void CUIStatDetail::_ctor_0(long lLeft, long lTop)
{
    //return __sub_00467560(this, nullptr, lLeft, lTop);
    new(this) CUIStatDetail(lLeft, lTop);
}

void CUIStatDetail::OnCreate(void* pData)
{
    __sub_004623B0(this, nullptr, pData);
}

void CUIStatDetail::OnDestroy()
{
}

int32_t CUIStatDetail::OnSetFocus(int32_t bFocus)
{
    return __sub_004614E0(this, nullptr, bFocus);
}

void CUIStatDetail::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    if (msg == 513)
        m_uiToolTip.ClearToolTip();
}

int32_t CUIStatDetail::OnMouseMove(long rx, long ry)
{
//    return __sub_00461450(this, nullptr, rx, ry);
    m_ttHelper.CheckAndShow(m_uiToolTip, rx, ry, 0, 0);
    return 0;
}

void CUIStatDetail::OnMouseEnter(int32_t bEnter)
{
    CWnd::OnMouseEnter(bEnter);
    m_uiToolTip.ClearToolTip();
}

void CUIStatDetail::OnButtonClicked(uint32_t nId)
{
    __sub_004685D0(this, nullptr, nId);
}

void CUIStatDetail::Draw(const tagRECT* arg0)
{
    __sub_004625F0(this, nullptr, arg0);
}

void CUIStatDetail::ClearToolTip()
{
    m_uiToolTip.ClearToolTip();
}

long CUIStatDetail::GetCriticalProp()
{
    return __sub_00461BF0(this, nullptr);
}

CUIStatDetail& CUIStatDetail::operator=(const CUIStatDetail& arg0)
{
    return _op_assign_13(this, arg0);
}

CUIStatDetail& CUIStatDetail::_op_assign_13(CUIStatDetail* pThis, const CUIStatDetail& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStat::~CUIStat()
{
    ms_pInstance = nullptr;
}

CUIStat::CUIStat(): CUIWnd(2, 5, 150, 6, 1, 0, 0)
{
    ms_pInstance = this;

    m_pFont = get_basic_font(FONT_SMALL_GRAY);
    m_pFontNo = get_basic_font(FONT_SMALL_GRAY);
    CreateUIWndPosSaved(172, 337, 10);
}

void CUIStat::_dtor_0()
{
    this->~CUIStat();
}

CUIStat::CUIStat(const CUIStat& arg0)
{
    _ctor_1(arg0);
}

void CUIStat::_ctor_1(const CUIStat& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIStat::CUIStat(int32_t bTip): CUIStat()
{
    m_bTip = bTip;
}

void CUIStat::_ctor_0(int32_t bTip)
{
    new(this) CUIStat(bTip);
    //return __sub_00467750(this, nullptr, bTip);
}

void CUIStat::OnCreate(void* pData)
{
    __sub_00467B90(this, nullptr, pData);
}

void CUIStat::OnDestroy()
{
    __sub_00461810(this, nullptr);
}

void CUIStat::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_004614A0(this, nullptr, msg, wParam, rx, ry);
}

int32_t CUIStat::OnMouseMove(long rx, long ry)
{
    return __sub_004649D0(this, nullptr, rx, ry);
}

void CUIStat::OnMouseEnter(int32_t bEnter)
{
    __sub_00461480(this, nullptr, bEnter);
}

void CUIStat::OnMoveWnd(long l, long t)
{
    __sub_00461590(this, nullptr, l, t);
}

void CUIStat::OnButtonClicked(uint32_t nId)
{
    __sub_00468610(this, nullptr, nId);
}

void CUIStat::Draw(const tagRECT* pRect)
{
    __sub_00464BD0(this, nullptr, pRect);
}

void CUIStat::ResetInfo()
{
    __sub_00462380(this, nullptr);
}

void CUIStat::ToggleDetail()
{
    __sub_004684E0(this, nullptr);
}

void CUIStat::DrawJob(long arg0, long arg1, long arg2, _x_com_ptr<IWzCanvas> arg3)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CUIStat::IsMyAddon(CWnd* pWnd)
{
    return __sub_004679A0(this, nullptr, pWnd);
}

void CUIStat::AutoApUp(int32_t bWantToBeInfighter)
{
    __sub_004661E0(this, nullptr, bWantToBeInfighter);
}

void CUIStat::RestoreButtons()
{
    __sub_00461AA0(this, nullptr);
}

void CUIStat::EnableApUpButton()
{
    __sub_00461860(this, nullptr);
}

void CUIStat::CreateTip()
{
    __sub_00466530(this, nullptr);
}

CUIStat& CUIStat::operator=(const CUIStat& arg0)
{
    return _op_assign_22(this, arg0);
}

CUIStat& CUIStat::_op_assign_22(CUIStat* pThis, const CUIStat& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
