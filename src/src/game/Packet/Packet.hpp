// Packet.hpp
#pragma once

#include "util/base.h"
#include "pcom/wz.h"
#include "opcodes.h"

// Level: 0 0x1b78
class COutPacket;

// Level: 0 0x1b43
class CInPacket;


class CIOBufferManipulator {
    // Nested
    // Fields
    // Methods
private:
    ~CIOBufferManipulator();

public:
    void _dtor_0();

private:
    CIOBufferManipulator();

public:
    static void _ctor_1();

public:
    static uint32_t __cdecl Decode1(unsigned char &n, const unsigned char *pSrc, uint32_t uRemain);

public:
    static uint32_t __cdecl Decode2(uint16_t &n, const unsigned char *pSrc, uint32_t uRemain);

public:
    static uint32_t __cdecl Decode4(unsigned long &n, const unsigned char *pSrc, uint32_t uRemain);

public:
    static uint32_t __cdecl DecodeBuffer(void *arg0, uint32_t arg1, const unsigned char *arg2, uint32_t arg3);

public:
    static uint32_t __cdecl DecodeStr(ZXString<char> &s, const unsigned char *pSrc, uint32_t uRemain);

public:
    static uint32_t __cdecl EncSize1(const unsigned char &arg0);

public:
    static uint32_t __cdecl EncSize2(const uint16_t &arg0);

public:
    static uint32_t __cdecl EncSize4(const unsigned long &arg0);

public:
    static uint32_t __cdecl EncSizeStr(const ZXString<char> &arg0);

public:
    static uint32_t __cdecl Encode1(unsigned char n, unsigned char *arg1);

public:
    static uint32_t __cdecl Encode2(uint16_t n, unsigned char *arg1);

public:
    static uint32_t __cdecl Encode4(unsigned long n, unsigned char *arg1);

public:
    static uint32_t __cdecl EncodeStr(ZXString<char> s, unsigned char *pDes);

public:
    static uint32_t __cdecl EncodeBuffer(const void *pData, uint32_t size, unsigned char *arg2);

public:
    static bool __stdcall _En(char *Buffer, int32_t Ln);

public:
    static bool __stdcall _De(char *Buffer, int32_t Ln);
};

class COutPacket {
protected:
    int32_t m_bLoopback{};
    ZArray<unsigned char> m_aSendBuff{};
    uint32_t m_uOffset{};
    int32_t m_bIsEncryptedByShanda{};
public:
    ~COutPacket();
    void _dtor_0();


    COutPacket();
    CTOR_DEFAULT(COutPacket)
    COutPacket(const COutPacket &other);
    void _ctor_copy(const COutPacket &other);
    COutPacket(long nType, int32_t bLoopback, int32_t bTypeHeader1Byte);
    COutPacket(long nType, int32_t bLoopback);
    explicit COutPacket(long nType);
    void _ctor_1(long nType);
    explicit COutPacket(Lp lp);
    explicit COutPacket(Cp cp);

    uint32_t GetOffset() const;
    unsigned char GetType();
    void Encode1(unsigned char n);
    void EncodeAt1(unsigned char arg0, uint32_t arg1);
    void Encode2(uint16_t n);
    void EncodeAt2(uint16_t arg0, uint32_t arg1);
    void Encode4(unsigned long n);
    void EncodeAt4(unsigned long arg0, uint32_t arg1);
    void EncodeStr(ZXString<char> s);
    void EncodeBuffer(const void *p, uint32_t uSize);
    void EncodePacket(CInPacket &arg0);
    void Encode(CInPacket &arg0);
    void Encode(ZXString<char> s);
    void Encode(unsigned char n);
    void Encode(uint16_t n);
    void Encode(unsigned long n);
    void InitByte(long nType, int32_t bLoopback);

//TODO
public:
    void Init(long nType, int32_t bLoopback, int32_t bTypeHeader1Byte);
    void Init_0(long nType, int32_t bLoopback, int32_t bTypeHeader1Byte);
    void Init(long nType, int32_t bLoopback);
    void Init_1(long nType, int32_t bLoopback);
    void Init(long nType);
    void Init_2(long nType);

    [[nodiscard]] int32_t IsLoopback() const;
    void MakeBufferList(ZList<ZRef<ZSocketBuffer>> &l, uint16_t uSeqBase, unsigned long *puSeqKey, int32_t bEnc,
                        unsigned long dwKey) const;
    [[nodiscard]] ZXString<char> DumpString(long arg0) const;
    void EnlargeBuffer(uint32_t arg0);
    COutPacket &operator=(const COutPacket &arg0);
    static COutPacket &_op_assign_30(COutPacket *pThis, const COutPacket &arg0);

    friend class CInPacket;
};

STATIC_ASSERT_SIZE(COutPacket, 16);

class CInPacket {
    // Nested
public:
    struct AUTO_CLEAR {
        // Nested
        // Fields
    public:
        CInPacket *m_pPacket{};

    public:
        int32_t m_bClear{};
        // Methods
    public:
        ~AUTO_CLEAR();

    public:
        void _dtor_0();

    public:
        explicit AUTO_CLEAR(CInPacket *arg0);

    public:
        void _ctor_1(CInPacket *arg0);

    public:
        void ContinueReceiving();
    };

public:
    enum RS_ {
        RS_HEADER = 0,
        RS_DATA = 1,
        RS_COMPLETED = 2
    };
    // Fields
protected:
    int32_t m_bLoopback{};
    long m_nState{};
    ZArray<unsigned char> m_aRecvBuff;
    uint16_t m_uLength{};
    uint16_t m_uRawSeq{};
    uint16_t m_uDataLen{};
    uint32_t m_uOffset{};
    // Methods

public:
    CInPacket();

public:
    ~CInPacket();

public:
    void _dtor_0();

public:
    CInPacket(CInPacket &iPacket);

public:
    void _ctor_1(CInPacket &iPacket);

public:
    explicit CInPacket(int32_t arg0);

public:
    void _ctor_0(int32_t arg0);

public:
    unsigned char Decode1();

public:
    uint16_t Decode2();

    tagPOINT DecodePoint16();
    tagPOINT DecodePoint32();

public:
    unsigned long Decode4();

public:
    ZXString<char> DecodeStr();

    int64_t Decode8();

    FILETIME DecodeFT();

    template<typename T>
    T DecodeT() {
        T t;
        DecodeBuffer(&t, sizeof(T));
        return t;
    }

public:
    void DecodeBuffer(void *p, uint32_t uSize);

public:
    void CopyTo(COutPacket &arg0);

public:
    void CopyFrom(COutPacket &arg0);

public:
    void AssignFrom(CInPacket &arg0);

    template<typename T, size_t N>
    std::array<T, N> DecodeArray() {
        std::array<T, N> arr;
        for (size_t i = 0; i < N; i++) {
            Decode(arr[i]);
        }
        return arr;
    }

protected:
    void Decode(ZXString<char> &arg0);

protected:
    void Decode(unsigned long &arg0);

protected:
    void Decode(uint16_t &arg0);

protected:
    void Decode(unsigned char &arg0);

public:
    [[nodiscard]] int32_t IsLoopback() const;

public:
    void Clear();

public:
    long AppendBuffer(ZRef<ZSocketBuffer> &pBuff, long *pnLastState, int32_t bEnc);

public:
    uint16_t DecodeSeqBase(unsigned long arg0);

public:
    uint16_t GetRawSeq() const;

public:
    [[nodiscard]] uint16_t GetDataLen() const;

public:
    unsigned char GetType();

public:
    int32_t DecryptData(unsigned long dwKey);

public:
    [[nodiscard]] uint32_t GetOffset() const;

public:
    void SetOffset(uint32_t arg0);

public:
    ZXString<char> DumpString(long nSize);

protected:
    void RawAppendBuffer(const void *p, uint32_t uSize);

protected:
    void WriteClientLog();

public:
    uint32_t BackupBuffer(ZArray<unsigned char> &pBuffer, uint32_t nSize);

private:
    void SendBackupPacket(unsigned long dwErrorCode);

public:
    CInPacket &operator=(const CInPacket &__that);

public:
    static CInPacket &_op_assign_30(CInPacket *pThis, const CInPacket &__that);
};

uint32_t _anon_DecodeTime_1(CInPacket &pkt);

CInPacket &__op_shift_right_2(CInPacket &iPacket, int &val);

CInPacket &__op_shift_right_3(CInPacket &iPacket, ZXString<char> &val);

STATIC_ASSERT_SIZE(CInPacket, 24);


