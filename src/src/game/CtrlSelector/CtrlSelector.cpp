// CtrlSelector.cpp
#include "CtrlSelector.hpp"
#include "CtrlSelector_regen.ipp"

CCtrlSelector::~CCtrlSelector()
{
}

void CCtrlSelector::_dtor_0()
{
    this->~CCtrlSelector();
}

CCtrlSelector::CCtrlSelector(const CCtrlSelector& arg0)
{
    _ctor_1(arg0);
}

void CCtrlSelector::_ctor_1(const CCtrlSelector& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlSelector::CCtrlSelector()
{
}

void CCtrlSelector::_ctor_0()
{
    new(this) CCtrlSelector();
}

void CCtrlSelector::CreateCtrl(CWnd* pParent, uint32_t nId, long l, long t, long w, void* pData)
{
    this->m_nNo = 0;
    this->m_nNoPerPage = 0;
    this->m_nPageNo = 0;
    this->m_nCurPage = 0;
    this->m_bCenterAlign = 0;
    this->m_nCurMouseOver = -1;
    CCtrlWnd::CreateCtrl(pParent, nId, l, t, w, 14, pData);
}

void CCtrlSelector::SetSelectorStart(long nNo, long nNoPerPage, int32_t bCenterAlign, int32_t bEmphasize)
{
    //__sub_000EC920(this, nullptr, nNo, nNoPerPage, bCenterAlign, bEmphasize);
    this->m_nCurSel = 0;
    this->m_nNo = nNo;
    this->m_nNoPerPage = nNoPerPage;
    auto v7 = 0;
    if (nNoPerPage > 0)
        v7 = (nNo + nNoPerPage - 1) / nNoPerPage;
    this->m_nPageNo = v7;
    this->m_bCenterAlign = bCenterAlign;
    this->m_nCurPage = 0;
    this->m_bEmphasize = bEmphasize;
    m_aText.Alloc(nNo);
}

void CCtrlSelector::SetSelector(long nIdx, ZXString<char> sText)
{
    //__sub_000EB810(this, nullptr, nIdx, CreateNakedParam(sText));
    if (nIdx >= 0 || nIdx < m_nNo)
        m_aText[nIdx] = sText;
}

void CCtrlSelector::SetSelectorEnd()
{
    ResetVisible();
}

void CCtrlSelector::SetSelectorAttr(long clrBackgrnd, long clrBasic, long clrMouseOver)
{
    __sub_000EB9F0(this, nullptr, clrBackgrnd, clrBasic, clrMouseOver);
}

int32_t CCtrlSelector::OnMouseMove(long rx, long ry)
{
    //return __sub_000EB680(this, nullptr, rx, ry);
    if (this->m_nCurSel)
    {
        this->m_nCurPage = -1;
        auto i = 0;
        for (auto rya = 0; ; rya += 6)
        {
            if (i >= m_aVisibleSelector.GetCount())
                break;
            const auto& vis = m_aVisibleSelector[i];
            if (vis.nIdx != -3)
            {
                tagRECT rectSelector{};
                SetRect(
                    &rectSelector,
                    vis.rect.left,
                    vis.rect.top,
                    vis.rect.left + vis.rect.right,
                    vis.rect.top + vis.rect.bottom);
                InflateRect(&rectSelector, vis.nIdx >= 0 ? 4 : 1, 1);
                if (PtInRect(&rectSelector, tagPOINT{.x = rx, .y = ry}))
                {
                    this->m_nCurPage = i;
                    break;
                }
            }
            ++i;
        }
        InvalidateRect();
    }
    return 0;
}

void CCtrlSelector::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    __sub_000EC990(this, nullptr, msg, wParam, rx, ry);
}

void CCtrlSelector::OnMouseEnter(int32_t bEnter)
{
    CCtrlWnd::OnMouseEnter(bEnter);
    if ( this->m_nCurSel )
    {
        this->m_nCurPage = -1;
        InvalidateRect();
    }
}

void CCtrlSelector::Draw(long rx, long ry, const tagRECT* pRect)
{
    __sub_000EBC50(this, nullptr, rx, ry, pRect);
}

void CCtrlSelector::SetCurSel(long nCurSel)
{
    this->m_nCurSel = nCurSel;
    this->m_nCurPage = nCurSel / this->m_nNoPerPage;
    ResetVisible();
    InvalidateRect();
}

long CCtrlSelector::GetCurSel() const
{
    return m_nCurSel;
}

long CCtrlSelector::GetCount() const
{
    return m_aText.GetCount();
}

void CCtrlSelector::ResetVisible()
{
    __sub_000EC220(this, nullptr);
}

CCtrlSelector& CCtrlSelector::operator=(const CCtrlSelector& arg0)
{
    return _op_assign_19(this, arg0);
}

CCtrlSelector& CCtrlSelector::_op_assign_19(CCtrlSelector* pThis, const CCtrlSelector& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlSelector::VISIBLE_ITEM::~VISIBLE_ITEM()
{
}

void CCtrlSelector::VISIBLE_ITEM::_dtor_0()
{
    this->~VISIBLE_ITEM();
}

CCtrlSelector::VISIBLE_ITEM::VISIBLE_ITEM(const CCtrlSelector::VISIBLE_ITEM& arg0)
{
    _ctor_1(arg0);
}

void CCtrlSelector::VISIBLE_ITEM::_ctor_1(const CCtrlSelector::VISIBLE_ITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlSelector::VISIBLE_ITEM::VISIBLE_ITEM()
{
}

void CCtrlSelector::VISIBLE_ITEM::_ctor_0()
{
    new(this) CCtrlSelector::VISIBLE_ITEM();
}

CCtrlSelector::VISIBLE_ITEM& CCtrlSelector::VISIBLE_ITEM::operator=(const CCtrlSelector::VISIBLE_ITEM& arg0)
{
    return _op_assign_3(this, arg0);
}

CCtrlSelector::VISIBLE_ITEM& CCtrlSelector::VISIBLE_ITEM::_op_assign_3(CCtrlSelector::VISIBLE_ITEM* pThis,
                                                                       const CCtrlSelector::VISIBLE_ITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
