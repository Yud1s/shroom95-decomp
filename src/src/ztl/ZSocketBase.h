//
//

#ifndef ZTL_ZSOCKETBASE_H
#define ZTL_ZSOCKETBASE_H

#define REGEN_HELPERS 1

#include <atomic>
#include <cstdint>

#ifdef _WIN32

#include <winsock2.h>
#include <windows.h>

typedef int socklen_t;

static uint32_t sock_get_last_error() {
    return WSAGetLastError();
}


static bool sck_check(int s) {
    return s != INVALID_SOCKET;
}

static void net_init() {
    WSADATA wsaData;
    WSAStartup(MAKEWORD(2, 2), &wsaData);
}

static void net_cleanup() {
    WSACleanup();
}

#else

#include <sys/socket.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include "zalloc.h"
#include "zref.h"

#define SOCKET int
#define INVALID_SOCKET (-1)

static uint32_t sock_get_last_error() {
    return errno;
}

static bool sck_check(int s) {
    return s >= 0;
}

static void net_init() {

}

static void net_cleanup() {

}

static int closesocket(SOCKET s) {
    return close(s);
}

typedef struct _WSABUF {
    unsigned long len{};
    char *buf{};
} WSABUF, *LPWSABUF;

#endif


#include "zref.h"


class ZSocketBase {

public:
    struct _ZSocketInit {
        /* 0x0000 */ public:
        volatile std::atomic_int m_nRemained;

    public:
        _ZSocketInit();

    public:
        ~_ZSocketInit();
    };

private:
    SOCKET _m_hSocket;
private:
    static ZSocketBase::_ZSocketInit _s_init;

public:
    ZSocketBase();
    explicit ZSocketBase(SOCKET sck);

public:
    ~ZSocketBase();

public:
    void CloseSocket();


private:
    void Attach(const ZSocketBase &);

public:
    void Attach(SOCKET sck);

public:
    SOCKET Detach();

public:
    void Socket(int32_t, int32_t, int32_t);

public:
    void Bind(const sockaddr *, int32_t) const;

public:
    void Listen(int32_t) const;

public:
    void GetSockName(sockaddr *, int32_t) const;

public:
    void GetPeerName(sockaddr *, int32_t) const;

public:
    void SetNonBlocking(int32_t) const;

public:
    [[nodiscard]] uint32_t GetNotRead() const;

public:
    [[nodiscard]] int32_t HasOOB() const;

public:
    [[nodiscard]] int32_t IsOOBInline() const;

public:
    void SetOOBInline(int32_t) const;

public:
    void GetLinger(linger *) const;

public:
    void SetLinger(const linger *) const;

public:
    [[nodiscard]] uint32_t GetMaxMsgSize() const;

public:
    [[nodiscard]] int32_t IsNoDelay() const;

public:
    void SetNoDelay(int32_t) const;

public:
    [[nodiscard]] int32_t CanReuseAddr() const;

public:
    void SetReuseAddr(int32_t) const;

public:
    [[nodiscard]] uint32_t GetReceiveBufferSize() const;

public:
    void SetReceiveBufferSize(uint32_t) const;

public:
    [[nodiscard]] uint32_t GetSendBufferSize() const;

public:
    void SetSendBufferSize(uint32_t) const;

public:
    [[nodiscard]] int32_t GetConnectTime() const;

public:
    void UpdateAcceptContext(uint32_t);

public:
    // Operator to get the socket
    explicit operator SOCKET() const;

#ifdef REGEN_HELPERS

    [[nodiscard]] SOCKET op_uint() const;

#endif

private:
    void _SetSockOpt(int level, int optname, const void *optval, int optlen) const;

    void _SetSockOptInt(int level, int optname, int optval) const;

    void _GetSockOpt(int level, int optname, void *optval, int *optlen) const;

    [[nodiscard]] int _GetSockOptInt(int level, int optname) const;

    void _IOControl(uint32_t cmd, uint32_t *argp) const;

    [[nodiscard]] uint32_t _IOControlGet(uint32_t cmd) const;

protected:
    static void _AddRemained();

protected:
    static void _DeleteRemained();
};


class ZInetAddr : sockaddr_in {
public:
    ZInetAddr();
    ZInetAddr(const char *, uint32_t);
    ZInetAddr(uint32_t ip, uint32_t port);
    explicit ZInetAddr(uint32_t);

#ifdef REGEN_HELPERS

    void _ctor_0(uint16_t port) {
        new(this) ZInetAddr(static_cast<uint32_t>(0), port);
    }

    void _ctor_1(const char *addr, uint32_t port) {
        new(this) ZInetAddr(addr, port);
    }

    void _ctor_2(uint32_t ip) {
        new(this) ZInetAddr(ip);
    }

#endif

public:
    ~ZInetAddr();
    explicit operator const sockaddr *() const;
    explicit operator const sockaddr_in *() const;
    explicit operator sockaddr*();
    explicit operator sockaddr_in*();
    int32_t operator==(const ZInetAddr &) const;
    [[nodiscard]] uint32_t GetIPAddr() const;
    [[nodiscard]] uint32_t GetPort() const;
    [[nodiscard]] const char *GetAddr() const;

private:
    void _Init(uint32_t, uint32_t);
    void _InitN(uint16_t, uint32_t);
    [[nodiscard]] const sockaddr_in *GetAddrIn() const;
    [[nodiscard]] sockaddr_in *GetAddrIn();

public:
    static void GetHostAddr(sockaddr_in *);
};

class ZSocketBuffer : public ZRefCounted, private _WSABUF, private ZRefCountedAccessorBase {
private:
    struct _ZSocketBufferInit {
    };

private:
    ZRef<ZSocketBuffer> _m_pParent;
    static ZSocketBuffer::_ZSocketBufferInit _s_init;

protected:
    ZSocketBuffer(uint32_t len, char *buf, ZSocketBuffer *parent);
    ~ZSocketBuffer() override;

public:
    explicit operator char *() const;

    [[nodiscard]] uint32_t GetLength() const;


public:
    ZSocketBuffer *Sub(uint32_t from, uint32_t len, const ZAllocHelper &alloc);

protected:
    ZSocketBuffer *Init(uint32_t len, char *buf, ZSocketBuffer *parent);

public:
    static ZSocketBuffer *Alloc(uint32_t u, const ZAllocHelper &alloc);
};
Z_ASSERT_SIZE(ZSocketBuffer, 0x1C);

#endif //ZTL_ZSOCKETBASE_H
