// Packet.cpp
#include "Packet.hpp"

#include <iomanip>

#include "Packet_regen.ipp"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/bin_to_hex.h"

constexpr uint16_t BLOCK_LEN = 0x5b4;
constexpr uint16_t FIRST_BLOCK_LEN = BLOCK_LEN - 4;

COutPacket::~COutPacket() = default;

void COutPacket::_dtor_0()
{
    return __sub_0002B950(this, nullptr);
}

COutPacket::COutPacket() : m_aSendBuff(0x100, ZAllocHelper(1))
{
}

COutPacket::COutPacket(const COutPacket& other)
{
    m_bLoopback = other.m_bLoopback;
    m_aSendBuff = other.m_aSendBuff;
    m_uOffset = other.m_uOffset;
    m_bIsEncryptedByShanda = other.m_bIsEncryptedByShanda;
}

void COutPacket::_ctor_copy(const COutPacket& other)
{
    new(this) COutPacket(other);
}

COutPacket::COutPacket(long nType, int32_t bLoopback, int32_t bTypeHeader1Byte)
{
    Init(nType, bLoopback, bTypeHeader1Byte);
}

COutPacket::COutPacket(long nType, int32_t bLoopback)
{
    Init(nType, bLoopback);
}

COutPacket::COutPacket(long nType)
{
    Init(nType);
}

void COutPacket::_ctor_1(long nType)
{
    new(this) COutPacket(nType);
    //return __sub_0028D090(this, nullptr, nType);
}

COutPacket::COutPacket(Lp lp) : COutPacket(static_cast<long>(lp))
{
}

COutPacket::COutPacket(Cp cp) : COutPacket(static_cast<long>(cp))
{
}


uint32_t COutPacket::GetOffset() const
{
    return m_uOffset;
}

unsigned char COutPacket::GetType()
{
    return m_aSendBuff[0];
}

void COutPacket::Encode1(unsigned char n)
{
    EnlargeBuffer(1);
    m_aSendBuff[m_uOffset++] = n;
}

void COutPacket::EncodeAt1(unsigned char arg0, uint32_t arg1)
{
    m_aSendBuff[arg1] = arg0;
}

void COutPacket::Encode2(uint16_t n)
{
    EnlargeBuffer(2);
    EncodeAt2(n, m_uOffset);
    m_uOffset += 2;
    //__sub_0002CA10(this, nullptr, n);
}

void COutPacket::EncodeAt2(uint16_t arg0, uint32_t arg1)
{
    memcpy(&m_aSendBuff[m_uOffset], &arg0, 2);
}

void COutPacket::Encode4(unsigned long n)
{
    EnlargeBuffer(4);
    EncodeAt4(n, m_uOffset);
    m_uOffset += 4;

    //__sub_000153B0(this, nullptr, n);
}

void COutPacket::EncodeAt4(unsigned long arg0, uint32_t arg1)
{
    memcpy(&m_aSendBuff[m_uOffset], &arg0, 4);
}

void COutPacket::EncodeStr(ZXString<char> s)
{
    // NOLINT(*-unnecessary-value-param)
    EnlargeBuffer(CIOBufferManipulator::EncSizeStr(s));
    m_uOffset += CIOBufferManipulator::EncodeStr(s, &m_aSendBuff[m_uOffset]);
    //__sub_000841F0(this, nullptr, CreateNakedParam(s));
}

void COutPacket::EncodeBuffer(const void* p, uint32_t uSize)
{
    EnlargeBuffer(uSize);
    m_uOffset += CIOBufferManipulator::EncodeBuffer(p, uSize, &m_aSendBuff[m_uOffset]);
    //__sub_00082200(this, nullptr, p, uSize);
}

void COutPacket::EncodePacket(CInPacket& arg0)
{
    arg0.CopyTo(*this);
}

void COutPacket::Encode(CInPacket& arg0)
{
    EncodePacket(arg0);
}

void COutPacket::Encode(ZXString<char> s)
{
    // NOLINT(*-unnecessary-value-param)
    EncodeStr(s);
}

void COutPacket::Encode(unsigned char n)
{
    Encode1(n);
}

void COutPacket::Encode(uint16_t n)
{
    Encode2(n);
}

void COutPacket::Encode(unsigned long n)
{
    Encode4(n);
}

void COutPacket::InitByte(long nType, int32_t bLoopback)
{
    m_bLoopback = bLoopback;
    m_uOffset = 0;
    if (nType != INT_MAX)
    {
        Encode1(nType);
    }
    //__sub_0028CEA0(this, nullptr, nType, bLoopback);
}

void COutPacket::Init(long nType, int32_t bLoopback, int32_t bTypeHeader1Byte)
{
    m_bLoopback = bLoopback;
    m_uOffset = 0;
    m_bIsEncryptedByShanda = 0;
    if (nType != INT_MAX)
    {
        if (bTypeHeader1Byte)
        {
            Encode1(nType);
        }
        else
        {
            Encode2(nType);
        }
    }
    //__sub_0028CED0(this, nullptr, nType, bLoopback, bTypeHeader1Byte);
}

void COutPacket::Init(long nType, int32_t bLoopback)
{
    Init(nType, bLoopback, 0);
    //__sub_0028CEA0(this, nullptr, nType, bLoopback);
}

void COutPacket::Init(long nType)
{
    Init(nType, 0, 0);
    //__sub_0028D000(this, nullptr, nType);
}

int32_t COutPacket::IsLoopback() const
{
    return m_bLoopback;
}

void COutPacket::MakeBufferList(ZList<ZRef<ZSocketBuffer>>& l, uint16_t uSeqBase, unsigned long* puSeqKey, int32_t bEnc,
                                unsigned long dwKey) const
{
    auto start = &m_aSendBuff[0];
    //spdlog::info("S: {:Xpn}", spdlog::to_hex(start, start + m_uOffset));

    if (bEnc && !m_bIsEncryptedByShanda)
    {
        // TODO this hurts const correctnes, but there's not really another choice
        // It should be fine atleast, because we just set a field to 1
        // and mutate the buffer
        CIOBufferManipulator::_En((char*)&m_aSendBuff[0], static_cast<int>(m_uOffset));
        const auto pkt = const_cast<COutPacket*>(this);
        pkt->m_bIsEncryptedByShanda = 1;
    }

    auto blockLen = std::min<size_t>(m_uOffset + 4, BLOCK_LEN);
    ZRef sockBuf(ZSocketBuffer::Alloc(blockLen, ZAllocHelper(1)), true);
    if (m_bLoopback)
    {
        sockBuf->_prev = sockBuf.op_ptr();
    }
    auto buf = sockBuf->operator char*();
    auto key16 = reinterpret_cast<uint16_t*>(puSeqKey);
    if (puSeqKey)
    {
        uSeqBase ^= key16[1];
    }
    *reinterpret_cast<uint16_t*>(&buf[0]) = uSeqBase;

    auto offset = m_uOffset;
    if (bEnc)
    {
        offset ^= uSeqBase;
    }
    *reinterpret_cast<uint16_t*>(&buf[2]) = offset;
    const auto dataLen = blockLen - 4;

    if (bEnc)
    {
        CAESCipher::Encrypt(reinterpret_cast<uint8_t*>(&buf[4]), const_cast<uint8_t*>(&m_aSendBuff[0]),
                            static_cast<int>(dataLen), &dwKey);
    }
    else
    {
        memcpy(&buf[4], &m_aSendBuff[0], dataLen);
    }
    l.AddTail(sockBuf);


    auto remaining = m_uOffset - dataLen;
    while (remaining > 0)
    {
        blockLen = std::min<size_t>(BLOCK_LEN, remaining);
        ZRef blockBuf(ZSocketBuffer::Alloc(blockLen, ZAllocHelper(1)), true);
        if (m_bLoopback)
        {
            blockBuf->_prev = static_cast<ZSocketBuffer*>(blockBuf);
        }
        buf = blockBuf->operator char*();
        auto data = const_cast<uint8_t*>(&m_aSendBuff[m_uOffset - remaining]);
        if (bEnc)
        {
            CAESCipher::Encrypt(reinterpret_cast<uint8_t*>(buf), data, static_cast<int>(blockLen), &dwKey);
        }
        else
        {
            memcpy(buf, data, blockLen);
        }
        l.AddTail(sockBuf);
        remaining -= blockLen;
    }
    //__sub_0028D100(this, nullptr, l, uSeqBase, puSeqKey, bEnc, dwKey);
}

ZXString<char> COutPacket::DumpString(long arg0) const
{
    auto n = std::min<size_t>(arg0, m_uOffset);
    ZXString<char> ret;
    char buf[16];
    for (auto i = 0; i < n; i++)
    {
        sprintf_s(buf, "%02x ", m_aSendBuff[i]);
        ret += buf;
    }
    return ret;
}

void COutPacket::EnlargeBuffer(uint32_t arg0)
{
    m_aSendBuff.MakeSpace(m_uOffset + arg0);
}

COutPacket& COutPacket::operator=(const COutPacket& arg0)
{
    if (this == &arg0)
    {
        return *this;
    }

    m_bLoopback = arg0.m_bLoopback;
    m_aSendBuff = arg0.m_aSendBuff;
    m_uOffset = arg0.m_uOffset;
    m_bIsEncryptedByShanda = arg0.m_bIsEncryptedByShanda;
    return *this;

    //return _op_assign_30(this, arg0);
}

COutPacket& COutPacket::_op_assign_30(COutPacket* pThis, const COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void COutPacket::Init_0(long nType, int32_t bLoopback, int32_t bTypeHeader1Byte)
{
    Init(nType, bLoopback, bTypeHeader1Byte);
}

void COutPacket::Init_1(long nType, int32_t bLoopback)
{
    Init(nType, bLoopback);
}

void COutPacket::Init_2(long nType)
{
    Init(nType);
}

CIOBufferManipulator::~CIOBufferManipulator()
{
}

void CIOBufferManipulator::_dtor_0()
{
}

CIOBufferManipulator::CIOBufferManipulator()
{
}

void CIOBufferManipulator::_ctor_1()
{
}

uint32_t __cdecl CIOBufferManipulator::Decode1(unsigned char& n, const unsigned char* pSrc, uint32_t uRemain)
{
    return DecodeBuffer(&n, 1, pSrc, uRemain);
    //return __sub_00007790(n, pSrc, uRemain);
}

uint32_t __cdecl CIOBufferManipulator::Decode2(uint16_t& n, const unsigned char* pSrc, uint32_t uRemain)
{
    return DecodeBuffer(&n, 2, pSrc, uRemain);
    //return __sub_00029360(n, pSrc, uRemain);
}

uint32_t __cdecl CIOBufferManipulator::Decode4(unsigned long& n, const unsigned char* pSrc, uint32_t uRemain)
{
    return DecodeBuffer(&n, 4, pSrc, uRemain);
    //return __sub_000077C0(n, pSrc, uRemain);
}

uint32_t
__cdecl CIOBufferManipulator::DecodeBuffer(void* b, uint32_t len, const unsigned char* pSrc, uint32_t uRemain)
{
    if (uRemain >= len)
    {
        memcpy(b, pSrc, len);
        return len;
    }
    ZException::Throw(26);
    //return __sub_000336F0(b, len, pSrc, uRemain);
}

uint32_t __cdecl CIOBufferManipulator::DecodeStr(ZXString<char>& s, const unsigned char* pSrc, uint32_t uRemain)
{
    uint16_t sz;
    Decode2(sz, pSrc, uRemain);
    if (sz > uRemain - 2)
    {
        ZException::Throw(26);
    }
    s.AssignCharStr(reinterpret_cast<const char*>(pSrc + 2), sz);
    return sz + 2;
    //return __sub_00082140(s, pSrc, uRemain);
}

uint32_t __cdecl CIOBufferManipulator::EncSize1(const unsigned char& arg0)
{
    return 1;
}

uint32_t __cdecl CIOBufferManipulator::EncSize2(const uint16_t& arg0)
{
    return 2;
}

uint32_t __cdecl CIOBufferManipulator::EncSize4(const unsigned long& arg0)
{
    return 4;
}

uint32_t __cdecl CIOBufferManipulator::EncSizeStr(const ZXString<char>& arg0)
{
    return arg0.GetLength() + 2;
}

uint32_t __cdecl CIOBufferManipulator::Encode1(unsigned char n, unsigned char* arg1)
{
    *arg1 = n;
    return 1;
}

uint32_t __cdecl CIOBufferManipulator::Encode2(uint16_t n, unsigned char* pDes)
{
    return EncodeBuffer(&n, 2, pDes);
}

uint32_t __cdecl CIOBufferManipulator::Encode4(unsigned long n, unsigned char* pDes)
{
    return EncodeBuffer(&n, 4, pDes);
}

uint32_t __cdecl CIOBufferManipulator::EncodeStr(ZXString<char> s, unsigned char* pDes)
{
    Encode2(s.GetLength(), pDes);
    return EncodeBuffer(s.operator const char*(), s.GetLength(), &pDes[2]) + 2;
    //return __sub_000821A0(CreateNakedParam(s), pDes);
}

uint32_t __cdecl CIOBufferManipulator::EncodeBuffer(const void* pData, uint32_t size, unsigned char* pDes)
{
    memcpy(pDes, pData, size);
    return size;
}

bool __stdcall CIOBufferManipulator::_En(char* Buffer, int32_t Ln)
{
    //return __sub_0028C8E0(Buffer, Ln);
    int32_t j;
    uint8_t a, c;
    for (uint8_t i = 0; i < 3; ++i)
    {
        a = 0;
        for (j = Ln; j > 0; --j)
        {
            c = Buffer[Ln - j];
            c = std::rotl(c, 3);
            c = static_cast<uint8_t>(c + j); // Guess this is supposed to be right?
            c ^= a;
            a = c;
            c = std::rotr(a, j);
            c ^= 0xFF;
            c += 0x48;
            Buffer[Ln - j] = c;
        }
        a = 0;
        for (j = Ln; j > 0; --j)
        {
            c = Buffer[j - 1];
            c = std::rotl(c, 4);
            c = static_cast<uint8_t>(c + j); // Guess this is supposed to be right?
            c ^= a;
            a = c;
            c ^= 0x13;
            c = std::rotr(c, 3);
            Buffer[j - 1] = c;
        }
    }
    return false; //TODO
}

bool __stdcall CIOBufferManipulator::_De(char* Buffer, int32_t Ln)
{
    int32_t j;
    uint8_t a, b, c;
    for (uint8_t i = 0; i < 3; i++)
    {
        a = 0;
        b = 0;
        for (j = Ln; j > 0; j--)
        {
            c = Buffer[j - 1];
            c = std::rotl(c, 3);
            c ^= 0x13;
            a = c;
            c ^= b;
            c = static_cast<uint8_t>(c - j); // Guess this is supposed to be right?
            c = std::rotr(c, 4);
            b = a;
            Buffer[j - 1] = c;
        }
        a = 0;
        b = 0;
        for (j = Ln; j > 0; j--)
        {
            c = Buffer[Ln - j];
            c -= 0x48;
            c ^= 0xFF;
            c = std::rotl(c, j);
            a = c;
            c ^= b;
            c = static_cast<uint8_t>(c - j); // Guess this is supposed to be right?
            c = std::rotr(c, 3);
            b = a;
            Buffer[Ln - j] = c;
        }
    }
    return false; //TODO
}

CInPacket::~CInPacket() = default;

void CInPacket::_dtor_0()
{
    return __sub_000AE6A0(this, nullptr);
}


CInPacket::CInPacket(): m_aRecvBuff(0x100, ZAllocHelper(1))
{
}

CInPacket::CInPacket(CInPacket& iPacket)
{
    *this = iPacket;

    iPacket.m_uOffset = 0;
    iPacket.m_uLength = 0;
    iPacket.m_nState = RS_HEADER;
}

void CInPacket::_ctor_1(CInPacket& iPacket)
{
    new(this) CInPacket(iPacket);
    //return __sub_0028CDF0(this, nullptr, iPacket);
}

CInPacket::CInPacket(int32_t arg0) : m_aRecvBuff(arg0)
{
}

void CInPacket::_ctor_0(int32_t arg0)
{
    new(this) CInPacket(arg0);
}

unsigned char CInPacket::Decode1()
{
    uint8_t v = 0;
    m_uOffset += CIOBufferManipulator::Decode1(
        v,
        &m_aRecvBuff[m_uOffset],
        m_uLength - m_uOffset);
    return v;

    //return __sub_000097D0(this, nullptr);
}

uint16_t CInPacket::Decode2()
{
    uint16_t v = 0;
    m_uOffset += CIOBufferManipulator::Decode2(
        v,
        &m_aRecvBuff[m_uOffset],
        m_uLength - m_uOffset);
    return v;
    //return __sub_0002A2A0(this, nullptr);
}

tagPOINT CInPacket::DecodePoint16()
{
    tagPOINT pt{};
    pt.x = Decode2();
    pt.y = Decode2();
    return pt;
}

tagPOINT CInPacket::DecodePoint32()
{
    tagPOINT pt{};
    pt.x = Decode4();
    pt.y = Decode4();
    return pt;
}

unsigned long CInPacket::Decode4()
{
    unsigned long v = 0;
    m_uOffset += CIOBufferManipulator::Decode4(
        v,
        &m_aRecvBuff[m_uOffset],
        m_uLength - m_uOffset);
    return v;
    //return __sub_00009870(this, nullptr);
}

ZXString<char> CInPacket::DecodeStr()
{
    ZXString<char> ret;
    m_uOffset += CIOBufferManipulator::DecodeStr(
        ret,
        &m_aRecvBuff[m_uOffset],
        m_uLength - m_uOffset);
    return ret;
    //return __sub_00084140(this, nullptr);
}

int64_t CInPacket::Decode8()
{
    int64_t v = 0;
    DecodeBuffer(&v, 8);
    return v;
}

FILETIME CInPacket::DecodeFT()
{
    FILETIME ft{};
    DecodeBuffer(&ft, 8);
    return ft;
}

void CInPacket::DecodeBuffer(void* p, uint32_t uSize)
{
    m_uOffset += CIOBufferManipulator::DecodeBuffer(
        p,
        uSize,
        &m_aRecvBuff[m_uOffset],
        m_uLength - m_uOffset);
    //__sub_000336A0(this, nullptr, p, uSize);
}

void CInPacket::CopyTo(COutPacket& arg0)
{
    arg0.EncodeBuffer(&m_aRecvBuff[0], m_uLength);
}

void CInPacket::CopyFrom(COutPacket& arg0)
{
    RawAppendBuffer(&arg0.m_aSendBuff[0], arg0.m_uOffset);
}

void CInPacket::AssignFrom(CInPacket& arg0)
{
    m_aRecvBuff = arg0.m_aRecvBuff;
    m_uLength = arg0.m_uLength;
    m_uRawSeq = arg0.m_uRawSeq;
    m_uDataLen = arg0.m_uDataLen;
    m_uOffset = arg0.m_uOffset;
    m_nState = arg0.m_nState;
    m_bLoopback = arg0.m_bLoopback;
}

void CInPacket::Decode(ZXString<char>& arg0)
{
    arg0 = DecodeStr();
}

void CInPacket::Decode(unsigned long& arg0)
{
    arg0 = Decode4();
}

void CInPacket::Decode(uint16_t& arg0)
{
    arg0 = Decode2();
}

void CInPacket::Decode(unsigned char& arg0)
{
    arg0 = Decode1();
}

int32_t CInPacket::IsLoopback() const
{
    return m_bLoopback;
}

void CInPacket::Clear()
{
    m_aRecvBuff.RemoveAll();
    //__sub_000AE6A0(this, nullptr);
}

long CInPacket::AppendBuffer(ZRef<ZSocketBuffer>& pBuff, long* pnLastState, int32_t bEnc)
{
    if (pnLastState)
    {
        *pnLastState = m_nState;
    }

    auto buf = pBuff->operator char*();
    auto bufLen = pBuff->GetLength();
    if (m_nState == RS_HEADER)
    {
        auto appendSize = std::min<size_t>(4 - m_uLength, pBuff->GetLength());
        RawAppendBuffer(buf, appendSize);
        if (m_uLength >= 4)
        {
            m_nState = RS_DATA;
            m_uRawSeq = Decode2();
            auto len = Decode2();
            if (bEnc)
            {
                len = len ^ m_uRawSeq;
            }
            m_uDataLen = len;
        }

        bufLen -= appendSize;
        if (bufLen == 0)
        {
            pBuff = nullptr;
            return m_nState;
        }

        buf = &buf[appendSize];
    }

    auto reqLen = m_uDataLen - m_uLength + 4;
    auto appendSize = std::min<size_t>(reqLen, bufLen);
    RawAppendBuffer(buf, appendSize);
    if (m_uDataLen + 4 <= m_uLength)
    {
        m_nState = RS_COMPLETED;
    }
    bufLen -= appendSize;
    if (bufLen != 0)
    {
        pBuff = pBuff->Sub(pBuff->GetLength() - bufLen, bufLen, ZAllocHelper(1));
    }
    else
    {
        pBuff = 0;
    }

    return m_nState;
    //return __sub_0028D550(this, nullptr, pBuff, pnLastState, bEnc);
}

uint16_t CInPacket::DecodeSeqBase(unsigned long seq)
{
    //TODO correct?
    m_uRawSeq = seq & 0xFFFF;
    return seq >> 16;
}

uint16_t CInPacket::GetRawSeq() const
{
    //return __sub_0002A2A0(this, nullptr);
    return m_uRawSeq;
}

uint16_t CInPacket::GetDataLen() const
{
    return m_uDataLen;
}

unsigned char CInPacket::GetType()
{
    return m_aRecvBuff[0];
}

int32_t CInPacket::DecryptData(unsigned long dwKey)
{
    auto len = std::min<size_t>(m_uDataLen, FIRST_BLOCK_LEN);
    if (len == 0)
    {
        return 0;
    }

    auto p = &m_aRecvBuff[4];
    CAESCipher::Decrypt(p, p, static_cast<int>(len), &dwKey);
    p = &m_aRecvBuff[4 + len];

    auto remaining = m_uDataLen - len;
    while (remaining > 0)
    {
        len = std::min<size_t>(remaining, BLOCK_LEN);
        CAESCipher::Decrypt(p, p, static_cast<int>(len), &dwKey);
        remaining -= len;
        p = &p[len];
    }

    CIOBufferManipulator::_De(
        reinterpret_cast<char*>(&m_aRecvBuff[4]),
        m_uDataLen);

    const auto start = &m_aRecvBuff[4];
    //spdlog::info("R: {:Xpn}", spdlog::to_hex(start, start + m_uDataLen));

    return 1;
    //return __sub_0028CCA0(this, nullptr, dwKey);
}

uint32_t CInPacket::GetOffset() const
{
    return m_uOffset;
}

void CInPacket::SetOffset(uint32_t arg0)
{
    m_uOffset = arg0;
}

ZXString<char> CInPacket::DumpString(long nSize)
{
    auto n = std::min<size_t>(m_uLength, m_uOffset);
    ZXString<char> ret;
    for (auto i = 0; i < n; i++)
    {
        char buf[16];
        sprintf_s(buf, "%02x ", m_aRecvBuff[i]);
        ret += buf;
    }
    return ret;

    //return __sub_0028CF20(this, nullptr, nSize);
}

void CInPacket::RawAppendBuffer(const void* p, uint32_t uSize)
{
    m_aRecvBuff.MakeSpace(m_uLength + uSize);
    memcpy(&m_aRecvBuff[m_uLength], p, uSize);
    m_uLength += uSize;
    //__sub_0028CD80(this, nullptr, p, uSize);
}

void CInPacket::WriteClientLog()
{
    __sub_000AE6A0(this, nullptr);
}

uint32_t CInPacket::BackupBuffer(ZArray<unsigned char>& pBuffer, uint32_t nSize)
{
    auto n = std::min<size_t>(nSize, m_uLength);
    memcpy(&pBuffer[0], &m_aRecvBuff[0], n);
    return n;
    //return __sub_005C1FF0(this, nullptr, pBuffer, nSize);
}

void CInPacket::SendBackupPacket(unsigned long dwErrorCode)
{
    // NOLINT(*-convert-member-functions-to-static)
    CWvsApp::ms_pInstance->SendBackupPacket(1, dwErrorCode);
    //__sub_0028CC80(this, nullptr, dwErrorCode);
}

CInPacket& CInPacket::operator=(const CInPacket& other)
{
    if (this == &other)
    {
        return *this;
    }
    m_bLoopback = other.m_bLoopback;
    m_aRecvBuff = other.m_aRecvBuff;
    m_uOffset = other.m_uOffset;
    m_uLength = other.m_uLength;
    m_uRawSeq = other.m_uRawSeq;
    m_uDataLen = other.m_uDataLen;
    m_nState = other.m_nState;
    return *this;
}

CInPacket& CInPacket::_op_assign_30(CInPacket* pThis, const CInPacket& __that)
{
    return __sub_0023EA10(pThis, nullptr, __that);
}

CInPacket::AUTO_CLEAR::~AUTO_CLEAR()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CInPacket::AUTO_CLEAR::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CInPacket::AUTO_CLEAR::AUTO_CLEAR(CInPacket* arg0)
{
    _ctor_1(arg0);
}

void CInPacket::AUTO_CLEAR::_ctor_1(CInPacket* arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CInPacket::AUTO_CLEAR::ContinueReceiving()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

uint32_t _anon_DecodeTime_1(CInPacket& pkt)
{
    auto t = timeGetTime();
    auto flag = pkt.Decode1();
    auto offset = pkt.Decode4();
    return flag ? t - offset : t + offset;
}


CInPacket& __op_shift_right_2(CInPacket& iPacket, int& val)
{
    val = static_cast<int>(iPacket.Decode4());
    return iPacket;
}

CInPacket& __op_shift_right_3(CInPacket& iPacket, ZXString<char>& val)
{
    val = iPacket.DecodeStr();
    return iPacket;
}
