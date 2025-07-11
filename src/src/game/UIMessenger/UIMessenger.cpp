// UIMessenger.cpp
#include "UIMessenger.hpp"
#include "UIMessenger_regen.ipp"

CUIMessenger::~CUIMessenger()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIMessenger::_dtor_0()
{
    return __sub_003F3F70(this, nullptr);
}

CUIMessenger::CUIMessenger(const CUIMessenger& arg0)
{
    _ctor_1(arg0);
}

void CUIMessenger::_ctor_1(const CUIMessenger& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIMessenger::CUIMessenger(unsigned long dwJoinSN)
{
    //_ctor_0(dwJoinSN);
    ms_pInstance = this;

    auto cfg  = CConfig::GetInstance();
    auto x = 0, y = 0;
    cfg->GetUIWndPos(8, x, y, this->m_nState);
    CreateWnd(x, y, 0, 0, 10, 1, (void*)dwJoinSN, 1, Origin_LT);
}

void CUIMessenger::_ctor_0(unsigned long dwJoinSN)
{
    //return __sub_003F3DE0(this, nullptr, dwJoinSN);
    new(this) CUIMessenger(dwJoinSN);
}

int32_t __cdecl CUIMessenger::TryNew(unsigned long dwSN)
{
    return __sub_003F4140(dwSN);
}

void CUIMessenger::TryDelete()
{
    __sub_003F02A0(this, nullptr);
}

void CUIMessenger::OnCreate(void* pData)
{
    __sub_003F59D0(this, nullptr, pData);
}

void CUIMessenger::OnDestroy()
{
    __sub_003F03F0(this, nullptr);
}

void CUIMessenger::OnKey(uint32_t wParam, int32_t lParam)
{
    __sub_003F6400(this, nullptr, wParam, lParam);
}

void CUIMessenger::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2)
{
    __sub_003EFB60(this, nullptr, nId, param1, param2);
}

void CUIMessenger::OnButtonClicked(uint32_t nId)
{
    __sub_003F6380(this, nullptr, nId);
}

int32_t CUIMessenger::HitTest(long rx, long ry, CCtrlWnd** ppCtrl)
{
    return __sub_003EFAD0(this, nullptr, rx, ry, ppCtrl);
}

int32_t CUIMessenger::OnMouseMove(long rx, long ry)
{
    return __sub_003F0600(this, nullptr, rx, ry);
}

void CUIMessenger::OnMouseEnter(int32_t bEnter)
{
    __sub_003EFB30(this, nullptr, bEnter);
}

void CUIMessenger::Draw(const tagRECT* pRect)
{
    __sub_003F5C70(this, nullptr, pRect);
}

void CUIMessenger::ClearToolTip()
{
    __sub_003F3F50(this, nullptr);
}

void CUIMessenger::Update()
{
    __sub_003F2FF0(this, nullptr);
}

void CUIMessenger::SetState(long nState)
{
    __sub_003F4200(this, nullptr, nState);
}

void CUIMessenger::OnSelfAvatarChanged(const AvatarLook& al)
{
    __sub_003F3490(this, nullptr, al);
}

void CUIMessenger::SendInviteMsg(ZXString<char> sTarget)
{
    __sub_003F5820(this, nullptr, CreateNakedParam(sTarget));
}

void __cdecl CUIMessenger::OnPacket(CInPacket& iPacket)
{
    __sub_003F5E40(iPacket);
}

void CUIMessenger::OnEnter_0(long nIdx, const AvatarLook& al, const char* sID, long nChannelID, int32_t bNew)
{
    __sub_003F4730(this, nullptr, nIdx, al, sID, nChannelID, bNew);
}

void CUIMessenger::OnEnter_1(CInPacket& iPacket)
{
    __sub_003F5D30(this, nullptr, iPacket);
}

void CUIMessenger::OnSelfEnterResult(CInPacket& iPacket)
{
    __sub_003F5E00(this, nullptr, iPacket);
}

void CUIMessenger::OnSelfEnter(long nIdx, int32_t bNew)
{
    __sub_003F4960(this, nullptr, nIdx, bNew);
}

void CUIMessenger::OnLeave_0(long nIdx)
{
    __sub_003F4A90(this, nullptr, nIdx);
}

void CUIMessenger::OnLeave_1(CInPacket& iPacket)
{
    __sub_003F5E20(this, nullptr, iPacket);
}

void __cdecl CUIMessenger::OnInvite(CInPacket& iPacket)
{
    __sub_003F2CB0(iPacket);
}

void CUIMessenger::OnInviteResult(CInPacket& iPacket)
{
    __sub_003F5030(this, nullptr, iPacket);
}

void CUIMessenger::OnChat(CInPacket& iPacket)
{
    __sub_003F52D0(this, nullptr, iPacket);
}

void CUIMessenger::OnBlocked(CInPacket& iPacket)
{
    __sub_003F51A0(this, nullptr, iPacket);
}

void CUIMessenger::OnAvatar(CInPacket& iPacket)
{
    __sub_003F2EA0(this, nullptr, iPacket);
}

void CUIMessenger::OnMigrated(CInPacket& iPacket)
{
    __sub_003F5720(this, nullptr, iPacket);
}

void CUIMessenger::SetAvatar(long arg0, const AvatarLook& arg1, int32_t arg2)
{
    __sub_003F0880(this, nullptr, arg0, arg1, arg2);
}

void CUIMessenger::SetShowState(long nIdx)
{
    __sub_003EFCF0(this, nullptr, nIdx);
}

void CUIMessenger::SetLayer()
{
    __sub_003F1920(this, nullptr);
}

void CUIMessenger::SetCtrl()
{
    __sub_003F34C0(this, nullptr);
}

void CUIMessenger::DrawTextA(_x_com_ptr<IWzCanvas> pCanvas)
{
    __sub_003F2A90(this, nullptr, CreateNakedParam(pCanvas));
}

void CUIMessenger::DrawStatusBar(_x_com_ptr<IWzCanvas> pCanvas)
{
    __sub_003F4BA0(this, nullptr, CreateNakedParam(pCanvas));
}

int32_t CUIMessenger::HandleSlashCommand(ZXString<char> sText)
{
    return __sub_003F5EE0(this, nullptr, CreateNakedParam(sText));
}

void CUIMessenger::ToggleBlink(int32_t bShow)
{
    __sub_003EFC00(this, nullptr, bShow);
}

void CUIMessenger::StartBlink(int32_t bStart)
{
    __sub_003EFBA0(this, nullptr, bStart);
}

void CUIMessenger::AddChatText(ZXString16 sText, long nIdx)
{
    __sub_003F4250(this, nullptr, CreateNakedParam(sText), nIdx);
}

void CUIMessenger::SendClaim()
{
    __sub_003F3320(this, nullptr);
}

void CUIMessenger::ProcessChat()
{
    __sub_003F6140(this, nullptr);
}

CUIMessenger& CUIMessenger::operator=(const CUIMessenger& arg0)
{
    return _op_assign_44(this, arg0);
}

CUIMessenger& CUIMessenger::_op_assign_44(CUIMessenger* pThis, const CUIMessenger& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIMessenger::ChatTextInfo::~ChatTextInfo()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIMessenger::ChatTextInfo::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIMessenger::ChatTextInfo::ChatTextInfo(const CUIMessenger::ChatTextInfo& arg0)
{
    _ctor_1(arg0);
}

void CUIMessenger::ChatTextInfo::_ctor_1(const CUIMessenger::ChatTextInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIMessenger::ChatTextInfo::ChatTextInfo()
{
}

void CUIMessenger::ChatTextInfo::_ctor_0()
{
    new(this) ChatTextInfo();
 }

CUIMessenger::ChatTextInfo& CUIMessenger::ChatTextInfo::operator=(const CUIMessenger::ChatTextInfo& arg0)
{
    return _op_assign_3(this, arg0);
}

CUIMessenger::ChatTextInfo& CUIMessenger::ChatTextInfo::_op_assign_3(CUIMessenger::ChatTextInfo* pThis,
                                                                     const CUIMessenger::ChatTextInfo& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIMessenger::CHARACTER::~CHARACTER()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CUIMessenger::CHARACTER::_dtor_0()
{
    return __sub_003F0590(this, nullptr);
}

CUIMessenger::CHARACTER::CHARACTER(const CUIMessenger::CHARACTER& arg0)
{
    _ctor_1(arg0);
}

void CUIMessenger::CHARACTER::_ctor_1(const CUIMessenger::CHARACTER& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIMessenger::CHARACTER::CHARACTER()
{
    //UNIMPLEMENTED; //_ctor_0();
    Clear();
}

void CUIMessenger::CHARACTER::_ctor_0()
{
    //return __sub_003F2F90(this, nullptr);
    new(this) CHARACTER();
}

void CUIMessenger::CHARACTER::Clear()
{
    __sub_003F0380(this, nullptr);
}

void CUIMessenger::CHARACTER::Hide()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CUIMessenger::CHARACTER& CUIMessenger::CHARACTER::operator=(const CUIMessenger::CHARACTER& arg0)
{
    return _op_assign_5(this, arg0);
}

CUIMessenger::CHARACTER& CUIMessenger::CHARACTER::_op_assign_5(CUIMessenger::CHARACTER* pThis,
                                                               const CUIMessenger::CHARACTER& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
