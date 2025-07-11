// CtrlTab.cpp
#include "CtrlTab.hpp"
#include "CtrlTab_regen.ipp"

CCtrlTab::~CCtrlTab()
{
}

void CCtrlTab::_dtor_0()
{
    this->~CCtrlTab();
}

CCtrlTab::CCtrlTab(const CCtrlTab& arg0)
{
    _ctor_1(arg0);
}

void CCtrlTab::_ctor_1(const CCtrlTab& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlTab::CCtrlTab()
{
    m_bDrawBaseImage = true;
    m_pFontNormal = G_PCOM.CreateWzFont();
    m_pFontSelected = G_PCOM.CreateWzFont();

    auto& sp = StringPool::GetInstance();
    m_pFontNormal->Create(sp.GetBSTR(0x1a25), 12, 0xFF677B91, vtMissing);
    m_pFontSelected->Create(sp.GetBSTR(0x1a25), 12, 0xFF000000, vtMissing);
}

void CCtrlTab::_ctor_0()
{
    //return __sub_000EE590(this, nullptr);
    new(this) CCtrlTab();
}

void CCtrlTab::CreateCtrl(CWnd* pParent, uint32_t nId, long nType, long l, long t, long width, long nHeight,
                          void* pData)
{
    auto* param = static_cast<CREATEPARAM*>(pData);
    RemoveAllItems();
    this->m_nType = nType;
    switch (nType)
    {
    case 0:
        this->m_nHeight = 24;
        break;
    case 1:
        this->m_nHeight = 19;
        break;
    case 2:
    case 4:
    case 5:
        this->m_nHeight = 21;
        break;
    case 3:
        this->m_nHeight = 28;
        break;
    case 6:
        this->m_nHeight = 20;
        break;
    case 7:
        this->m_nHeight = 17;
        break;
    case 8:
        this->m_nHeight = nHeight;
        break;
    default:
        break;
    }
    if (pData)
    {
        m_bDrawBaseImage = param->bDrawBaseImage;
        m_nTabSpace = param->nTabSpace;
    }
    CCtrlWnd::CreateCtrl(pParent, nId, l, t, width, this->m_nHeight, pData);
}

void CCtrlTab::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry)
{
    if (msg == 513 && ry >= 4)
    {
        auto cur = m_lTabInfo.GetHeadPosition();
        auto ix = 0;
        for (auto& tabInfo : m_lTabInfo)
        {
            if (tabInfo.nStart - 2 <= rx && rx <= tabInfo.nEnd + 2 && tabInfo.bEnabled)
            {
                play_ui_sound_str(0x4F7);
                SetTab(ix);
                break;
            }

            ++ix;
        }
    }
}

int32_t CCtrlTab::OnSetFocus(int32_t bFocus)
{
    return 0;
}

void CCtrlTab::Draw(long rx, long ry, const tagRECT* pRect)
{
    __sub_000EF160(this, nullptr, rx, ry, pRect);
}

void CCtrlTab::AddItem(const char* arg0, const char* arg1, int32_t arg2)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CCtrlTab::AddItem_Canvas(_x_com_ptr<IWzCanvas> pCanvasNormal, _x_com_ptr<IWzCanvas> pCanvasSelected,
                              int32_t bEnable)
{
    __sub_000EFC40(this, nullptr, CreateNakedParam(pCanvasNormal), CreateNakedParam(pCanvasSelected), bEnable);
}

void CCtrlTab::RemoveAllItems()
{
    __sub_000EE090(this, nullptr);
}

long CCtrlTab::GetCurTab()
{
    return m_nCurTab;
}

long CCtrlTab::GetTabNo()
{
    return m_lTabInfo.GetCount();
}

void CCtrlTab::SetTab(long nTab)
{
    //__sub_000EDE60(this, nullptr, nTab);
    if (nTab >= 0 && nTab < m_lTabInfo.GetCount())
    {
        m_nCurTab = nTab;
        InvalidateRect();
        m_pParent->OnChildNotify(m_nCtrlId, 500u, m_nCurTab);
    }
}

void CCtrlTab::AssimilateWidth(int32_t arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

_x_com_ptr<IWzCanvas> CCtrlTab::GetTabCanvas(long nType, long nNo)
{
    _x_com_ptr<IWzCanvas> ret;
    return *__sub_000EED50(this, nullptr, &ret, nType, nNo);
}

void CCtrlTab::RelocateTabPos()
{
    __sub_000EE7F0(this, nullptr);
}

void __cdecl CCtrlTab::GetTabBaseUOL(long type, ZXString16& sUOL)
{
    __sub_000EEC30(type, sUOL);
}

CCtrlTab& CCtrlTab::operator=(const CCtrlTab& arg0)
{
    return _op_assign_20(this, arg0);
}

CCtrlTab& CCtrlTab::_op_assign_20(CCtrlTab* pThis, const CCtrlTab& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlTab::CREATEPARAM::CREATEPARAM()
{
    UNIMPLEMENTED; //_ctor_0();
}

void CCtrlTab::CREATEPARAM::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlTab::TABINFO::~TABINFO()
{
}

void CCtrlTab::TABINFO::_dtor_0()
{
    this->~TABINFO();
}

CCtrlTab::TABINFO::TABINFO(const CCtrlTab::TABINFO& arg0)
{
    _ctor_1(arg0);
}

void CCtrlTab::TABINFO::_ctor_1(const CCtrlTab::TABINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlTab::TABINFO::TABINFO()
{
}

void CCtrlTab::TABINFO::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CCtrlTab::TABINFO& CCtrlTab::TABINFO::operator=(const CCtrlTab::TABINFO& arg0)
{
    return _op_assign_3(this, arg0);
}

CCtrlTab::TABINFO& CCtrlTab::TABINFO::_op_assign_3(CCtrlTab::TABINFO* pThis, const CCtrlTab::TABINFO& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
