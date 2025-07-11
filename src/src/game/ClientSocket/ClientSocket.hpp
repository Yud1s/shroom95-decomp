// ClientSocket.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"

class CClientSocket : public TSingleton<CClientSocket>
{
	// Nested
public:
	struct CONNECTCONTEXT
	{
		// Nested
		// Fields
	public:
		ZList<ZInetAddr> lAddr;
        ZInetAddr *posList{};
		int32_t bLogin{};
		// Methods
		~CONNECTCONTEXT();
		CONNECTCONTEXT(const CClientSocket::CONNECTCONTEXT &arg0);
		void _ctor_1(const CClientSocket::CONNECTCONTEXT &arg0);
		CONNECTCONTEXT();
		void _ctor_0();
		CClientSocket::CONNECTCONTEXT &operator=(const CClientSocket::CONNECTCONTEXT &arg0);
		static CClientSocket::CONNECTCONTEXT &_op_assign_3(CClientSocket::CONNECTCONTEXT *pThis, const CClientSocket::CONNECTCONTEXT &arg0);
	};

public:
	enum RECV_DATA_MAX_SIZE
	{
		RECV_DATA_MAX_SIZE = 65536
	};
	// Fields
protected:
	HWND__ *m_hWnd{};

protected:
	ZSocketBase m_sock;

protected:
	CClientSocket::CONNECTCONTEXT m_ctxConnect;

protected:
	ZInetAddr m_addr;

protected:
	long m_tTimeout{};

protected:
	ZList<ZRef<ZSocketBuffer>> m_lpRecvBuff;

protected:
	ZList<ZRef<ZSocketBuffer>> m_lpSendBuff;

protected:
	CInPacket m_packetRecv;

protected:
	ZFatalSection m_lockSend;

protected:
	unsigned long m_uSeqSnd{};

protected:
	unsigned long m_uSeqRcv{};

protected:
	ZXString<char> m_URLGuestIDRegistration;

protected:
	int32_t m_bIsGuestID{};
	// Methods
public:
	virtual ~CClientSocket();

public:
	void _dtor_0();

public:
	CClientSocket();

public:
	void _ctor_0();

public:
	void ConnectLogin();

protected:
	void Connect(const sockaddr_in *pAddr);

	void Connect_0(const sockaddr_in *pAddr);

public:
	void Connect(const CClientSocket::CONNECTCONTEXT &ctx);

	void Connect_1(const CClientSocket::CONNECTCONTEXT &ctx);

public:
	int32_t OnConnect(int32_t bSuccess);

public:
	void OnRead();

public:
	void OnError(int32_t dwErr);

public:
	void OnClose();

public:
	void Close();

public:
	uint32_t GetHandle();

public:
	void ManipulatePacket();

public:
	void SendPacket(const COutPacket &oPacket);

public:
	void Flush();

public:
	const ZInetAddr &GetPeerAddr();

public:
	void SetTimeout();

public:
	int32_t IsTimeout() const;

public:
	ZSocketBase *GetRawSock();

protected:
	void ClearSendReceiveCtx();

protected:
	void ProcessPacket(CInPacket &iPacket);

protected:
	void OnAliveReq(CInPacket &iPacket);

protected:
	void OnMigrateCommand(CInPacket &iPacket) const;

protected:
	void OnAuthenCodeChanged(CInPacket &iPacket);

protected:
	void OnAuthenMessage(CInPacket &iPacket);

public:
	void SetGuestIDLoginInfo(ZXString<char> sGuestIDRegistrationURL);

public:
	ZXString<char> GetGuestIDRegistrationURL();

public:
	int32_t WasGuestIDLogin() const;

protected:
	void OnCheckCrcResult(CInPacket &iPacket);

public:
	CClientSocket &operator=(const CClientSocket &arg0);

public:
	static CClientSocket &_op_assign_29(CClientSocket *pThis, const CClientSocket &arg0);
};
STATIC_ASSERT_SIZE(CClientSocket, 148);


void __cdecl SendPacket(const COutPacket &oPacket);
