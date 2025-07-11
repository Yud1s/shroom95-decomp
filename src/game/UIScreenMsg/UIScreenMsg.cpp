// UIScreenMsg.cpp
#include "UIScreenMsg.hpp"
#include "UIScreenMsg_regen.ipp"

CUIScreenMsg::~CUIScreenMsg()
{
    ms_pInstance = nullptr;
}

void CUIScreenMsg::_dtor_0()
{
    return __sub_0043D820(this, nullptr);
}

CUIScreenMsg::CUIScreenMsg(const CUIScreenMsg& arg0)
{
    _ctor_1(arg0);
}

void CUIScreenMsg::_ctor_1(const CUIScreenMsg& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIScreenMsg::CUIScreenMsg()
{
    auto& gr = get_gr();
    auto wndMan = CWndMan::GetInstance();
    for (auto i = 0; i < 6; ++i)
    {
        auto layer = gr->CreateLayer(
            0, 0, 0x122, 0xe, 0xC0061634, vtMissing, vtMissing);


        auto org = wndMan->GetOrgWindow(CWnd::Origin_RB);

        //TODO move?
        layer->Putorigin(Ztl_variant_t(org));


        auto canvas = layer->Getcanvas(Ztl_variant_t(0, VT_I4));
        auto h = canvas->Getheight();
        auto w = canvas->Getwidth();
        canvas->DrawRectangle(0, 0, w, h, 0xFFFFFF);

        m_llScrMsg.AddTail(_x_com_ptr<IWzGr2DLayer>(layer));
    }
    LayoutScrMsg();
}

void CUIScreenMsg::_ctor_0()
{
    return __sub_0043D8B0(this, nullptr);
}

void CUIScreenMsg::ScrMsg_Add(const char* sScrMsg, FONT_TYPE fType, FONT_TYPE fOutlineType)
{
    __sub_0043DC40(this, nullptr, sScrMsg, fType, fOutlineType);
}

void CUIScreenMsg::MoveScrMsg()
{
    __sub_0043D630(this, nullptr);
}

void CUIScreenMsg::LayoutScrMsg()
{
    __sub_0043D440(this, nullptr);
}

CUIScreenMsg& CUIScreenMsg::operator=(const CUIScreenMsg& arg0)
{
    return _op_assign_6(this, arg0);
}

CUIScreenMsg& CUIScreenMsg::_op_assign_6(CUIScreenMsg* pThis, const CUIScreenMsg& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
