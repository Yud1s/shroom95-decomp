// ChatBalloon.cpp
#include "ChatBalloon.hpp"

static ZList<Ztl_bstr_t> FAKE_ZList_Ztl_bstr_t_{};

#include "ChatBalloon_regen.ipp"

CChatBalloon::~CChatBalloon()
{
}

void CChatBalloon::_dtor_0()
{
    return __sub_000A2BF0(this, nullptr);
}

CChatBalloon::CChatBalloon(const CChatBalloon& arg0)
{
    _ctor_1(arg0);
}

void CChatBalloon::_ctor_1(const CChatBalloon& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CChatBalloon::CChatBalloon()
{
    auto& sp = StringPool::GetInstance();
    auto& rm = get_rm();

    auto uol = sp.GetBSTR(0x1A71);
    m_pButton[0] = rm->GetObjectT<IWzCanvas>(uol + sp.GetBSTR(0x5C7));
    m_pButton[1] = rm->GetObjectT<IWzCanvas>(uol + sp.GetBSTR(0x5C9));
    m_pButton[3] = rm->GetObjectT<IWzCanvas>(uol + sp.GetBSTR(0x5CD));

    m_bADButtonPressed = false;
}

void CChatBalloon::_ctor_0()
{
    new(this) CChatBalloon();
    //return __sub_000A2620(this, nullptr);
}

int32_t CChatBalloon::IsBalloonOn()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CChatBalloon::IsAbbreviated()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CChatBalloon::MakeBalloon(Ztl_bstr_t arg0, _x_com_ptr<IWzGr2DLayer> arg1, _x_com_ptr<IWzVector2D> arg2, long arg3,
                               long arg4, long arg5, int32_t arg6, long arg7, long arg8)
{
    __sub_000A84F0(this, nullptr, CreateNakedParam(arg0), CreateNakedParam(arg1), CreateNakedParam(arg2), arg3, arg4,
                   arg5, arg6, arg7, arg8);
}

void CChatBalloon::MakeMobBalloon(Ztl_bstr_t bsText, _x_com_ptr<IWzGr2DLayer> pLayerOverlay,
                                  _x_com_ptr<IWzVector2D> pVectorOrigin, long tTimeOut, long nChatBalloon,
                                  long nFadeDelay, long nWidth)
{
    __sub_000A9AC0(this, nullptr, CreateNakedParam(bsText), CreateNakedParam(pLayerOverlay),
                   CreateNakedParam(pVectorOrigin), tTimeOut, nChatBalloon, nFadeDelay, nWidth);
}

void CChatBalloon::MakeScreenBalloon(_x_com_ptr<IWzProperty> pProp, Ztl_bstr_t bsText, long nChatBalloon, long tTimeOut,
                                     long nWidth)
{
    __sub_000A94F0(this, nullptr, CreateNakedParam(pProp), CreateNakedParam(bsText), nChatBalloon, tTimeOut, nWidth);
}

void CChatBalloon::DestroyBalloon()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CChatBalloon::MakeMiniRoomBalloon(long arg0, Ztl_bstr_t arg1, long arg2, _x_com_ptr<IWzVector2D> arg3,
                                       int32_t arg4, long arg5, long arg6, long arg7, int32_t arg8)
{
    __sub_000A2D90(this, nullptr, arg0, CreateNakedParam(arg1), arg2, CreateNakedParam(arg3), arg4, arg5, arg6, arg7,
                   arg8);
}

void CChatBalloon::DestroyMiniRoomBalloon()
{
    __sub_000A1A00(this, nullptr);
}

void CChatBalloon::GetMiniRoomBalloonRect(tagRECT& rc)
{
    __sub_000A1A80(this, nullptr, rc);
}

void CChatBalloon::MakeADBoardBalloon(Ztl_bstr_t bsText, _x_com_ptr<IWzGr2DLayer> pLayerOveray,
                                      _x_com_ptr<IWzVector2D> pVectorOrigin, int32_t bCloseButton)
{
    __sub_000A99B0(this, nullptr, CreateNakedParam(bsText), CreateNakedParam(pLayerOveray),
                   CreateNakedParam(pVectorOrigin), bCloseButton);
}

void CChatBalloon::DestoryADBoardBallon()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CChatBalloon::ADBoardMouseMove(tagPOINT pt)
{
    __sub_000A1CE0(this, nullptr, CreateNakedParam(pt));
}

void CChatBalloon::ADBoardMouseDown(tagPOINT pt)
{
    __sub_000A1F00(this, nullptr, CreateNakedParam(pt));
}

int32_t CChatBalloon::ADBoardMouseUp(tagPOINT pt)
{
    return __sub_000A1850(this, nullptr, CreateNakedParam(pt));
}

int32_t CChatBalloon::MousePointCheck(tagPOINT pt)
{
    return __sub_000A1220(this, nullptr, CreateNakedParam(pt));
}

void CChatBalloon::AdjustCoordY(long nHeight)
{
    __sub_000A1300(this, nullptr, nHeight);
}

void CChatBalloon::CheckTimeOut(int32_t bOnRotating)
{
    __sub_000A2060(this, nullptr, bOnRotating);
}

void CChatBalloon::SetFadeDelay(long nDelay)
{
    __sub_000A1200(this, nullptr, nDelay);
}

_x_com_ptr<IWzCanvas> CChatBalloon::CreateCanvas(Ztl_bstr_t bsText, uint32_t uFontColor, _x_com_ptr<IWzProperty> pProp,
                                                 long nType, long nWidth)
{
    _x_com_ptr<IWzCanvas> ret;
    return *__sub_000A59D0(this, nullptr, &ret, CreateNakedParam(bsText), uFontColor, CreateNakedParam(pProp), nType,
                           nWidth);
}

CChatBalloon& CChatBalloon::operator=(const CChatBalloon& arg0)
{
    return _op_assign_22(this, arg0);
}

CChatBalloon& CChatBalloon::_op_assign_22(CChatBalloon* pThis, const CChatBalloon& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
