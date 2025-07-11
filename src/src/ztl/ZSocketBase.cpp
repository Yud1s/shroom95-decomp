//
//

#include "ZSocketBase.h"
#include "zexception.h"
#include "zallocex.h"

#include <thread>
#include <cstring>
#include <ws2tcpip.h>


ZSocketBase::_ZSocketInit::_ZSocketInit() {
    m_nRemained = 0;
    net_init();
}

ZSocketBase::_ZSocketInit::~_ZSocketInit() {
    if (!m_nRemained) {
        for (auto i = 0; i < 0x32; i++) {
            std::this_thread::sleep_for(std::chrono::milliseconds(0x64));
            if (!m_nRemained) {
                break;
            }
        }
    }

    net_cleanup();
}

ZSocketBase::_ZSocketInit ZSocketBase::_s_init;

ZSocketBase::ZSocketBase(SOCKET sck) {
    _m_hSocket = sck;
}

ZSocketBase::~ZSocketBase() {
    CloseSocket();
}

void ZSocketBase::CloseSocket() {
    if (_m_hSocket == INVALID_SOCKET) {
        return;
    }

    const auto res = closesocket(_m_hSocket);
    Z_SOCK_CHECK(res >= 0);
    _m_hSocket = INVALID_SOCKET;
}

void ZSocketBase::Attach(const ZSocketBase &other) {
    _m_hSocket = other._m_hSocket;
}

void ZSocketBase::Attach(SOCKET sck) {
    _m_hSocket = sck;
}

SOCKET ZSocketBase::Detach() {
    auto sck = _m_hSocket;
    _m_hSocket = -1;
    return sck;
}

void ZSocketBase::Socket(const int32_t type, const int32_t af, const int32_t proto) {
    const auto sck = socket(af, type, proto);
    _m_hSocket = sck;
    Z_SOCK_CHECK(sck != INVALID_SOCKET);
}

void ZSocketBase::Bind(const sockaddr *, int32_t) const {
    const auto res = bind(_m_hSocket, nullptr, 0);
    Z_SOCK_CHECK(res >= 0);
}

void ZSocketBase::Listen(int32_t port) const {
    auto res = listen(_m_hSocket, port);
    Z_SOCK_CHECK(res >= 0);
}

void ZSocketBase::GetSockName(sockaddr *addr, int32_t len) const {
    auto res = getsockname(_m_hSocket, addr, &len);
    Z_SOCK_CHECK(res >= 0);
}

void ZSocketBase::GetPeerName(sockaddr *addr, int32_t len) const {
    const auto res = getpeername(_m_hSocket, addr, &len);
    Z_SOCK_CHECK(res >= 0);
}

void ZSocketBase::SetNonBlocking(int32_t non_blocking) const {
#ifdef WIN32
    u_long mode = non_blocking;
    auto res = ioctlsocket(_m_hSocket, FIONBIO, &mode);
#else
    auto flags = fcntl(_m_hSocket, F_GETFL, 0);
    if (flags < 0) {
        ZException::Throw(sock_get_last_error());
    }

    if (non_blocking) {
        flags |= O_NONBLOCK;
    } else {
        flags &= ~O_NONBLOCK;
    }

    auto res = fcntl(_m_hSocket, F_SETFL, flags);
#endif
    Z_SOCK_CHECK(res >= 0);
}

uint32_t ZSocketBase::GetNotRead() const {
    return _IOControlGet(FIONREAD);
}

int32_t ZSocketBase::HasOOB() const {
    if(_m_hSocket == INVALID_SOCKET) {
        return 0;
    }
    //TODO
    return 1;
}

int32_t ZSocketBase::IsOOBInline() const {
    return _GetSockOptInt(SOL_SOCKET, SO_OOBINLINE);
}

void ZSocketBase::SetOOBInline(const int32_t oob) const {
    _SetSockOptInt(SOL_SOCKET, SO_OOBINLINE, oob);
}

void ZSocketBase::GetLinger(linger *l) const {
    int len = sizeof(linger);
    _GetSockOpt(SOL_SOCKET, SO_LINGER, l, &len);
}

void ZSocketBase::SetLinger(const linger *l) const {
    _SetSockOpt(SOL_SOCKET, SO_LINGER, l, sizeof(*l));
}

uint32_t ZSocketBase::GetMaxMsgSize() const {
#ifdef _WIN32
    return static_cast<uint32_t>(_GetSockOptInt(SOL_SOCKET, SO_MAX_MSG_SIZE));
#else
    //TODO
    return (uint32_t) _GetSockOptInt(SOL_SOCKET, SO_RCVBUF);
#endif
}

int32_t ZSocketBase::IsNoDelay() const {
    return _GetSockOptInt(IPPROTO_TCP, TCP_NODELAY);
}

void ZSocketBase::SetNoDelay(const int32_t b) const {
    _SetSockOptInt(IPPROTO_TCP, TCP_NODELAY, b);
}

int32_t ZSocketBase::CanReuseAddr() const {
    return _GetSockOptInt(SOL_SOCKET, SO_REUSEADDR);
}

void ZSocketBase::SetReuseAddr(const int32_t b) const {
    _SetSockOptInt(SOL_SOCKET, SO_REUSEADDR, b);
}

uint32_t ZSocketBase::GetReceiveBufferSize() const {
    return static_cast<uint32_t>(_GetSockOptInt(SOL_SOCKET, SO_RCVBUF));
}

void ZSocketBase::SetReceiveBufferSize(const uint32_t sz) const {
    _SetSockOptInt(SOL_SOCKET, SO_RCVBUF, static_cast<int>(sz));
}

uint32_t ZSocketBase::GetSendBufferSize() const {
    return static_cast<uint32_t>(_GetSockOptInt(SOL_SOCKET, SO_SNDBUF));
}

void ZSocketBase::SetSendBufferSize(uint32_t v) const {
    _SetSockOptInt(SOL_SOCKET, SO_SNDBUF, static_cast<int>(v));
}

int32_t ZSocketBase::GetConnectTime() const {
#ifdef WIN32
    //return _GetSockOptInt(SOL_SOCKET, SO_CONNECT_TIME);
    return 0;//TODO
#else
    //TODO
    return 0;
#endif
}

void ZSocketBase::UpdateAcceptContext(uint32_t accept) {
#ifdef _WIN32
    //TODO _SetSockOptInt(SO_UPDATE_ACCEPT_CONTEXT, 0, accept);
#else
    //TODO
#endif
}

void ZSocketBase::_AddRemained() {
    ++_s_init.m_nRemained;
}

void ZSocketBase::_DeleteRemained() {
    --_s_init.m_nRemained;
}

void ZSocketBase::_GetSockOpt(int level, int optname, void *optval, int *optlen) const {
#ifdef _WIN32
    auto res = getsockopt(_m_hSocket, level, optname, static_cast<char *>(optval), optlen);
#else
    auto res = getsockopt(_m_hSocket, level, optname, optval, reinterpret_cast<socklen_t *>(optlen));
#endif
    Z_SOCK_CHECK(res >= 0);
}

void ZSocketBase::_SetSockOpt(int level, int optname, const void *optval, int optlen) const {
#ifdef _WIN32
    auto res = setsockopt(_m_hSocket, level, optname, static_cast<const char *>(optval), optlen);
#else
    auto res = setsockopt(_m_hSocket, level, optname, optval, optlen);
#endif
    Z_SOCK_CHECK(res >= 0);
}

void ZSocketBase::_SetSockOptInt(const int level, const int optname, const int optval) const {
    _SetSockOpt(level, optname, &optval, sizeof(optval));
}

int ZSocketBase::_GetSockOptInt(const int level, const int optname) const {
    int v = 0;
    int len = sizeof(v);
    _GetSockOpt(level, optname, &v, &len);
    return v;
}

void ZSocketBase::_IOControl(uint32_t cmd, uint32_t *argp) const {
#ifdef _WIN32
    auto res = ioctlsocket(_m_hSocket, static_cast<long>(cmd), reinterpret_cast<u_long *>(argp));
#else
    auto res = ioctl(_m_hSocket, cmd, argp);
#endif
    Z_SOCK_CHECK(res >= 0);
}

uint32_t ZSocketBase::_IOControlGet(const uint32_t cmd) const {
    uint32_t v{};
    _IOControl(cmd, &v);
    return v;
}

ZSocketBase::operator SOCKET() const {
    return _m_hSocket;
}

ZSocketBase::ZSocketBase() {
    _m_hSocket = INVALID_SOCKET;
}

SOCKET ZSocketBase::op_uint() const {
    return _m_hSocket;
}

ZInetAddr::ZInetAddr(const char * addr, const uint32_t port) : sockaddr_in() {
    _Init(port, 0);
    if(!addr || !addr[0]) {
        return;
    }

#ifdef _WIN32
    auto res = inet_pton(AF_INET, addr, &sin_addr);
#else
    auto res = inet_addr(addr);
#endif
    Z_SOCK_CHECK(res != INADDR_NONE);
}

ZInetAddr::ZInetAddr(const uint32_t port): sockaddr_in() {
    _InitN(port, 0);
}

ZInetAddr::~ZInetAddr() = default;

int32_t ZInetAddr::operator==(const ZInetAddr & other) const {
    return std::memcmp(GetAddrIn(), other.GetAddrIn(), sizeof(sockaddr_in)) == 0;
}

uint32_t ZInetAddr::GetIPAddr() const {
    return *reinterpret_cast<const uint32_t *>(&this->sin_addr);
}

uint32_t ZInetAddr::GetPort() const {
    return ntohs(this->sin_port);
}

const char *ZInetAddr::GetAddr() const {
#ifdef _WIN32
    static char buf[0x20];
    auto res = inet_ntop(AF_INET, &sin_addr, buf, sizeof(buf));
#else
    auto res = inet_ntoa(this->sin_addr);
#endif
    Z_SOCK_CHECK(res != nullptr);
    return res;
}

void ZInetAddr::_Init(uint32_t port, uint32_t addr) {
    _InitN(port, addr);
}

void ZInetAddr::_InitN(uint16_t port, uint32_t addr) {
    sin_family = AF_INET;
    sin_addr.s_addr = htonl(addr);
    sin_port = htons(port);
    std::memset(sin_zero, 0, sizeof(sin_zero));
}

void ZInetAddr::GetHostAddr(sockaddr_in * addr) {
    // TODO , return localhost for now
    addr->sin_family = AF_INET;
    addr->sin_addr.s_addr = htonl(INADDR_LOOPBACK);
    addr->sin_port = 0;
    std::memset(addr->sin_zero, 0, sizeof(addr->sin_zero));

}

const sockaddr_in *ZInetAddr::GetAddrIn() const {
    return this;
}

ZInetAddr::operator const sockaddr *() const {
    return reinterpret_cast<const sockaddr*>(GetAddrIn());
}

ZInetAddr::operator const sockaddr_in *() const {
    return GetAddrIn();
}

ZInetAddr::ZInetAddr() : sockaddr_in() {
    _Init(0, 0);
}

ZInetAddr::ZInetAddr(uint32_t ip, uint32_t port) : sockaddr_in() {
    _Init(port, ip);

}

sockaddr_in *ZInetAddr::GetAddrIn() {
    return this;
}

ZInetAddr::operator sockaddr_in *() {
    return GetAddrIn();
}

ZInetAddr::operator sockaddr *() {
    return reinterpret_cast<sockaddr *>(GetAddrIn());
}

ZSocketBuffer::ZSocketBuffer(uint32_t len, char *buf, ZSocketBuffer *parent) : _WSABUF() {
    Init(len, buf, parent);
}

ZSocketBuffer::~ZSocketBuffer() {
    if(!_m_pParent) {
        z_anon_free(buf);
    }
}

ZSocketBuffer::operator char *() const {
    return buf;
}

uint32_t ZSocketBuffer::GetLength() const {
    return len;
}

ZSocketBuffer *ZSocketBuffer::Sub(const uint32_t from, const uint32_t len, const ZAllocHelper &alloc) {
    auto sock_buf = z_anon_alloc(sizeof(ZSocketBuffer));
    new(sock_buf) ZSocketBuffer(len, &buf[from], this);
    return static_cast<ZSocketBuffer *>(sock_buf);
}

ZSocketBuffer *ZSocketBuffer::Init(const uint32_t len, char *buf, ZSocketBuffer *parent) {
    this->len = len;
    this->buf = buf;
    this->_m_pParent = parent;
    return this;
}

ZSocketBuffer *ZSocketBuffer::Alloc(uint32_t u, const ZAllocHelper &alloc) {
    auto buf = z_anon_alloc(u);
    if(!buf) {
        return nullptr;
    }
    auto sock_buf = z_anon_alloc(sizeof(ZSocketBuffer));
    if(!sock_buf) {
        z_anon_free(buf);
        return nullptr;
    }
    new(sock_buf) ZSocketBuffer(u, static_cast<char *>(buf), nullptr);
    return static_cast<ZSocketBuffer *>(sock_buf);
}
