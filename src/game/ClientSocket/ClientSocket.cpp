// ClientSocket.cpp
#include "ClientSocket.hpp"
#include "Stage/Stage.hpp"


#include "ClientConfig.hpp"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/bin_to_hex.h"

static ZRef<CStage> FAKE_ZREF_STAGE{};

#include "ClientSocket_regen.ipp"


CClientSocket::~CClientSocket()
{
    Close();
    ms_pInstance = nullptr;
}

void CClientSocket::_dtor_0()
{
    this->~CClientSocket();
}

CClientSocket::CClientSocket()
{
    ms_pInstance = this;
    ClearSendReceiveCtx();
}

void CClientSocket::_ctor_0()
{
    new(this) CClientSocket();
    // return __sub_000AF890(this, nullptr);
}

void CClientSocket::ConnectLogin()
{
    static ZInetAddr g_loginDefaultAddr("192.9.175.32", DEFAULT_LOGIN_PORT);
    auto app = CWvsApp::GetInstance();
    m_hWnd = app->GetMainWindow();
    CONNECTCONTEXT ctx;
    auto startMode = app->GetGameStartMode();

    if (startMode != CWvsApp::GSM::GAME && startMode != CWvsApp::GSM::WEB)
    {
        return;
    }

    if (startMode == CWvsApp::GSM::GAME || startMode == CWvsApp::GSM::WEB)
    {
        auto ix = startMode == CWvsApp::GSM::GAME ? 0 : 2;
        auto ip = app->GetCmdLine(ix);
        auto port = app->GetCmdLine(ix + 1);
        if (!ip.IsEmpty() && !port.IsEmpty())
        {
            ctx.lAddr.AddTail(ZInetAddr(ip.c_str(), port.ToInt().value_or(0)));
        }
    }

    if (ctx.lAddr.IsEmpty())
    {
        ctx.lAddr.AddTail(g_loginDefaultAddr);
    }
    ctx.posList = ctx.lAddr.GetHeadPosition();
    ctx.bLogin = 1;

    Connect(ctx);
    //__sub_000B0590(this, nullptr);
}

void CClientSocket::Connect(const sockaddr_in* pAddr)
{
    //__sub_000AE720(this, nullptr, pAddr);
    ClearSendReceiveCtx();
    Close();

    m_sock.Socket(SOCK_STREAM, AF_INET, 0 /*IPPROTO_TCP*/); // 1,2,0
    SetTimeout();

    // ReSharper disable once CppDeprecatedEntity
    if (auto sock = m_sock.op_uint(); WSAAsyncSelect(sock, m_hWnd, 0x401, 0x33) != -1)
    {
        auto res = connect(sock, (sockaddr*)pAddr, sizeof(sockaddr_in));
        if (res == -1 && WSAGetLastError() == WSAEWOULDBLOCK)
        {
            return;
        }
    }

    OnConnect(0);
}

void CClientSocket::Connect(const CClientSocket::CONNECTCONTEXT& ctx)
{
    m_ctxConnect = ctx;
    auto addr = ZList<ZInetAddr>::GetNext(m_ctxConnect.posList);
    Connect(reinterpret_cast<const sockaddr_in*>(addr));

    //__sub_000B0340(this, nullptr, ctx);
}

int32_t CClientSocket::OnConnect(int32_t bSuccess)
{
    if (m_ctxConnect.lAddr.IsEmpty())
    {
        return 0;
    }

    if (!bSuccess)
    {
        if (!m_ctxConnect.posList)
        {
            Close();
            if (m_ctxConnect.bLogin)
            {
                // THROW Terminate exception
                UNIMPLEMENTED;
            }
            else
            {
                // Throw terminate exception
                UNIMPLEMENTED;
            }
        }

        auto addr = ZList<ZInetAddr>::GetNext(m_ctxConnect.posList);
        Connect(reinterpret_cast<const sockaddr_in*>(addr));
    }

    m_ctxConnect.lAddr.RemoveAll();
    ZRef<ZSocketBuffer> pBuf(ZSocketBuffer::Alloc(0x5b4, ZAllocHelper(1)), true);
    auto buf = pBuf->operator char*();
    auto cur = buf;
    auto size = 0;
    auto timeout = 28;
    auto remain = 2;
    while (true)
    {
        auto read = recv(m_sock.operator SOCKET(), cur, remain, 0);
        if (read == -1)
        {
            if (WSAGetLastError() == WSAEWOULDBLOCK && timeout >= 0)
            {
                Sleep(100);
                --timeout;
                continue;
            }
            //OnError(WSAGetLastError());
            UNIMPLEMENTED; //TODO
            return 0;
        }
        cur = &cur[read];
        remain -= read;
        if (remain > 0)
        {
            continue;
        }

        if (!size)
        {
            size = *reinterpret_cast<uint16_t*>(buf);
            buf += 2;
            remain = size;

            if (size == 0 || size > 128)
            {
                //TODO throw
                UNIMPLEMENTED;
            }
            continue;
        }

        // Decode Handshake
        auto hbuf = (uint8_t*)buf;
        auto end = (uint8_t*)cur;
        uint16_t version = 0;
        hbuf += CIOBufferManipulator::Decode2(version, hbuf, end - hbuf);

        ZXString<char> subVersionStr;
        hbuf += CIOBufferManipulator::DecodeStr(subVersionStr, hbuf, end - hbuf);
        const auto subVersion = subVersionStr.ToInt().value_or(0);

        hbuf += CIOBufferManipulator::Decode4(m_uSeqSnd, hbuf, end - hbuf);
        hbuf += CIOBufferManipulator::Decode4(m_uSeqRcv, hbuf, end - hbuf);

        uint8_t locale = 0;
        hbuf += CIOBufferManipulator::Decode1(locale, hbuf, end - hbuf);

        auto app = CWvsApp::GetInstance();
        auto startMode = app->GetGameStartMode();
        auto ctx = CWvsContext::GetInstance();
        ctx->SetLoginBaseStep(startMode == CWvsApp::GSM::GAME ? 0 : 1);

        if (locale != 8)
        {
            CTerminateException(0x22000007).Throw();
        }

        if (version != CLIENT_VERSION)
        {
            CPatchException(CLIENT_VERSION).Throw();
        }
        app->SetPatchExceptionInfo(version);

        if (subVersion > 1)
        {
            CPatchException(CLIENT_VERSION).Throw();
        }

        auto isLogin = m_ctxConnect.bLogin;
        ClearSendReceiveCtx();
        m_ctxConnect = CONNECTCONTEXT();

        m_sock.GetPeerName(
            (sockaddr*)m_addr.operator const sockaddr*(),
            sizeof(sockaddr));

        if (isLogin)
        {
            //TODO reset exception file + send backup packet
        }
        else
        {
            CSystemInfo sysInfo;
            sysInfo.Init();
            COutPacket pkt(Cp::Migratein);
            pkt.Encode4(ctx->GetCharacterId());
            pkt.EncodeBuffer(sysInfo.GetMachineId(), 16);
            const auto isGM = ctx->IsUserGM();
            pkt.Encode1(isGM);
            pkt.Encode1(0);
            pkt.EncodeBuffer(ctx->GetClientKey(), 8);
            SendPacket(pkt);
        }

        break;
    }


    return 1;
    //return __sub_000AEF10(this, nullptr, arg0);
}

void CClientSocket::OnRead()
{
    //__sub_000B03F0(this, nullptr);

    auto socketHandle = m_sock.op_uint();
    if (socketHandle == INVALID_SOCKET || !m_ctxConnect.lAddr.IsEmpty())
    {
        return;
    }


    while (true)
    {
        auto buf = ZSocketBuffer::Alloc(0x5b4, ZAllocHelper(1));


        auto read = recv(socketHandle, buf->operator char*(), 0x5b4, 0);
        ZRef pBuf(buf, true);
        if (!read)
        {
            break;
        }

        if (read == -1)
        {
            auto dwErr = WSAGetLastError();
            if (dwErr == WSAEWOULDBLOCK)
            {
                return;
            }

            //TODO fix this
            if (dwErr == WSAENOTCONN && !m_ctxConnect.lAddr.IsEmpty())
            {
                return;
            }

            OnError(dwErr);
            return;
        }

        m_lpRecvBuff.AddTail() = buf->Sub(0, read, ZAllocHelper(1));
        ManipulatePacket();
    }
}

void CClientSocket::OnError(int32_t dwErr)
{
    Close();
    if (m_ctxConnect.lAddr.GetCount())
    {
        OnConnect(0);
        return;
    }
    OnClose();
}

void CClientSocket::OnClose()
{
    Close();
    //TODO why is that required
    if (GetInstance() != this)
        return;
    if (m_bIsGuestID)
    {
        PostQuitMessage(0);
        return;
    }

    const auto code = m_ctxConnect.bLogin ? 0x22000002 : 0x21000002;
    CMSException(code).Throw();
}

void CClientSocket::Close()
{
    ClearSendReceiveCtx();
    m_sock.CloseSocket();
}

uint32_t CClientSocket::GetHandle()
{
    return m_sock.op_uint();
}

void CClientSocket::ManipulatePacket()
{
    auto cur = m_lpRecvBuff.GetHeadPosition();
    while (cur)
    {
        long oldState = 0;
        auto state = m_packetRecv.AppendBuffer(*cur, &oldState, CLIENT_NET_ENC);
        if (!(*cur))
        {
            m_lpRecvBuff.RemoveHead();
        }

        constexpr uint16_t INV_VERSION = ~static_cast<uint16_t>(CLIENT_VERSION);
        if (state > CInPacket::RS_HEADER && oldState == CInPacket::RS_HEADER)
        {
            auto high = m_uSeqRcv >> 16;
            if (CLIENT_NET_ENC && (high ^ m_packetRecv.GetRawSeq()) != INV_VERSION)
            {
                OnError(0);
                break;
            }
        }
        if (m_packetRecv.GetDataLen() >= UINT16_MAX)
        {
            OnError(0);
            break;
        }

        if (state == CInPacket::RS_COMPLETED)
        {
            CInPacket pkt(m_packetRecv);
            if (CLIENT_NET_ENC)
            {
                pkt.DecryptData(m_uSeqRcv);
                m_uSeqRcv = CIGCipher::innoHash(reinterpret_cast<uint8_t*>(&m_uSeqRcv), 4, nullptr);
            }
            ProcessPacket(pkt);
        }
        cur = m_lpRecvBuff.GetHeadPosition();
    }
    //__sub_000B0220(this, nullptr);
}

void CClientSocket::SendPacket(const COutPacket& oPacket)
{
    ZFatalSectionGuard send(m_lockSend);
    oPacket.MakeBufferList(m_lpSendBuff, CLIENT_VERSION, &m_uSeqSnd, CLIENT_NET_ENC, m_uSeqSnd);
    m_uSeqSnd = CIGCipher::innoHash(reinterpret_cast<uint8_t*>(&m_uSeqSnd), 4, nullptr);
    Flush();
    //__sub_000AF9F0(this, nullptr, oPacket);
}

void CClientSocket::Flush()
{
    //__sub_000AF6A0(this, nullptr);
    const auto sckHandle = m_sock.op_uint();
    if (!sckHandle || sckHandle == INVALID_SOCKET)
    {
        return;
    }

    while (!m_lpSendBuff.IsEmpty())
    {
        const auto head = m_lpSendBuff.GetHeadPosition();
        auto first = head->op_arrow();
        const auto data = static_cast<const char*>(*first);
        const auto len = first->GetLength();
        const auto sent = send(sckHandle, data, len, 0);
        if (sent == -1)
        {
            if (const auto err = WSAGetLastError(); err != WSAEWOULDBLOCK)
            {
                OnError(err);
            }
            break;
        }


        if (len != sent)
        {
            auto sub = first->Sub(sent, len - sent, ZAllocHelper(1));
            //TODO verify that this is correct
            *head = ZRef(sub, true);
        }
        else
        {
            m_lpSendBuff.RemoveHead();
        }
    }
}

void CClientSocket::SetTimeout()
{
    m_tTimeout = static_cast<long>(timeGetTime()) + 15000;
}

int32_t CClientSocket::IsTimeout() const
{
    return timeGetTime() > m_tTimeout;
}

ZSocketBase* CClientSocket::GetRawSock()
{
    return &m_sock;
}

void CClientSocket::ClearSendReceiveCtx()
{
    m_packetRecv = CInPacket();
    m_lpRecvBuff.RemoveAll();
    m_lpSendBuff.RemoveAll();
}

void CClientSocket::ProcessPacket(CInPacket& iPacket)
{
    const auto app = CWvsApp::GetInstance();
    const auto ctx = CWvsContext::GetInstance();

    ZRef<CStage> stage = get_stage();
    auto op = iPacket.Decode2();

    switch (const auto lp = static_cast<Lp>(op))
    {
    case Lp::Migratecommand:
        OnMigrateCommand(iPacket);
        break;
    case Lp::Alivereq:
        OnAliveReq(iPacket);
        break;
    case Lp::Authencodechanged:
        OnAuthenCodeChanged(iPacket);
        break;
    case Lp::Authenmessage:
        OnAuthenMessage(iPacket);
        break;
    case Lp::Securitypacket:
        if (auto sec = CSecurityClient::ms_pInstance; sec)
        {
            sec->OnPacket(iPacket);
        }
        break;
    case Lp::Checkcrcresult:
        OnCheckCrcResult(iPacket);
        break;
    default:
        app->SetBackupPacket(iPacket);
        if (lp >= Lp::BeginCharacterdata && lp <= Lp::EndCharacterdata)
        {
            ctx->OnPacket(op, iPacket);
        }
        else if (stage)
        {
            stage->OnPacket(op, iPacket);
        }
        break;
    }

    //__sub_000B00F0(this, nullptr, iPacket);
}

void CClientSocket::OnAliveReq(CInPacket& iPacket)
{
    SendPacket(COutPacket(Cp::Aliveack));
}

void CClientSocket::OnMigrateCommand(CInPacket& iPacket) const
{
    auto guestFlag = iPacket.Decode1();
    if (!guestFlag)
    {
        if (!m_bIsGuestID)
        {
            CDisconnectException(0x21000002).Throw();
        }
        PostQuitMessage(0);
        return;
    }

    if (auto stage = get_stage(); !stage || !stage->IsKindOf(&CInterStage::ms_RTTI_CInterStage))
    {
        set_stage(new CInterStage(), nullptr);
    }

    const auto ctx = CWvsContext::GetInstance();
    const auto ip = iPacket.Decode4();
    const auto port = iPacket.Decode2();
    const ZInetAddr addr(ip, port);
    ctx->IssueConnect(&addr);
    //__sub_000ADD50(this, nullptr, iPacket);
}

void CClientSocket::OnAuthenCodeChanged(CInPacket& iPacket)
{
    const auto ctx = CWvsContext::GetInstance();
    const auto premium = iPacket.Decode1();
    const auto arg = iPacket.Decode4();

    if (const auto premArg = (premium >> 1) & 1; premArg != ctx->IsPremiumUser())
    {
        ctx->SetPremium(premArg);
        if (auto stage = get_stage(); stage && stage->IsKindOf(&CCashShop::ms_RTTI_CCashShop))
        {
            dynamic_cast<CCashShop*>(stage.op_ptr())->OnStatusExit();
        }

        if (premArg)
        {
            CUINoticePremium prem;
            const auto sessionCount = prem.DoModal();
            ctx->ShowPremiumArgument(arg, sessionCount);
        }
    }

    if (arg & 4)
    {
        CDisconnectException(0x21000004).Throw();
    }

    //__sub_000AFE50(this, nullptr, iPacket);
}

void CClientSocket::OnAuthenMessage(CInPacket& iPacket)
{
    const auto arg = iPacket.Decode4();
    const auto sessionCount = iPacket.Decode1();

    const auto ctx = CWvsContext::GetInstance();
    if (!ctx->IsPremiumUser())
    {
        return;
    }

    if (auto stage = get_stage(); !stage || stage->IsKindOf(&CCashShop::ms_RTTI_CCashShop))
    {
        ctx->ShowPremiumArgument(arg, sessionCount);
    }
}

void CClientSocket::SetGuestIDLoginInfo(ZXString<char> sGuestIDRegistrationURL) // NOLINT(*-unnecessary-value-param)
{
    m_URLGuestIDRegistration = sGuestIDRegistrationURL;
}

ZXString<char> CClientSocket::GetGuestIDRegistrationURL()
{
    return m_URLGuestIDRegistration;
}

int32_t CClientSocket::WasGuestIDLogin() const
{
    return m_bIsGuestID;
}

void CClientSocket::OnCheckCrcResult(CInPacket& iPacket)
{
    if (iPacket.Decode1())
    {
        return;
    }

    // TODO throw cms excption 0x2200000a
    UNIMPLEMENTED;
}

CClientSocket& CClientSocket::operator=(const CClientSocket& arg0)
{
    return _op_assign_29(this, arg0);
}

CClientSocket& CClientSocket::_op_assign_29(CClientSocket* pThis, const CClientSocket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const ZInetAddr& CClientSocket::GetPeerAddr()
{
    return m_addr;
}

void CClientSocket::Connect_1(const CClientSocket::CONNECTCONTEXT& ctx)
{
    Connect(ctx);
}

void CClientSocket::Connect_0(const sockaddr_in* pAddr)
{
    Connect(pAddr);
}

CClientSocket::CONNECTCONTEXT::~CONNECTCONTEXT()
= default;

CClientSocket::CONNECTCONTEXT::CONNECTCONTEXT(const CClientSocket::CONNECTCONTEXT& arg0)
{
    *this = arg0;
}

void CClientSocket::CONNECTCONTEXT::_ctor_1(const CClientSocket::CONNECTCONTEXT& arg0)
{
    new(this) CONNECTCONTEXT(arg0);
}

CClientSocket::CONNECTCONTEXT::CONNECTCONTEXT() = default;

void CClientSocket::CONNECTCONTEXT::_ctor_0()
{
    new(this) CONNECTCONTEXT();
}

CClientSocket::CONNECTCONTEXT& CClientSocket::CONNECTCONTEXT::operator=(const CClientSocket::CONNECTCONTEXT& arg0)
{
    if (this == &arg0)
    {
        return *this;
    }

    bLogin = arg0.bLogin;
    lAddr = arg0.lAddr;
    posList = lAddr.GetHeadPosition();
    return *this;
}

CClientSocket::CONNECTCONTEXT& CClientSocket::CONNECTCONTEXT::_op_assign_3(
    CClientSocket::CONNECTCONTEXT* pThis, const CClientSocket::CONNECTCONTEXT& arg0)
{
    return pThis->operator=(arg0);
}

void __cdecl SendPacket(const COutPacket& oPacket)
{
    return CClientSocket::ms_pInstance->SendPacket(oPacket);
}
