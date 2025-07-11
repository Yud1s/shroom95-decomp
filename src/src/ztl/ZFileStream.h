//
//

#ifndef ZTL_ZFILESTREAM_H
#define ZTL_ZFILESTREAM_H


#include <cstdint>
#include "zfixedarray.h"


#ifndef _WIN32

#include <fcntl.h>
#include <sys/stat.h>

struct _SECURITY_ATTRIBUTES {
    uint32_t nLength;
    void *lpSecurityDescriptor;
    int32_t bInheritHandle;

};

typedef int HANDLE;
#define INVALID_HANDLE_VALUE (-1)
#else
#include <Windows.h>
#endif


struct ZIStream {

public:
    ZIStream();
    virtual ~ZIStream();
    virtual uint32_t Read(void *buf, uint32_t len);
    virtual uint32_t Write(const void *buf, uint32_t len);
    virtual uint32_t ReadFromSpecificPos(uint32_t buf, unsigned char *, uint32_t len);
    virtual void Flush(int32_t all);
    virtual uint32_t ReadEOF(void *buf, uint32_t len);
    virtual uint32_t WriteEOF(const void *buf, uint32_t len);
    virtual uint32_t CopyTo(ZIStream *stream, uint32_t len);
    virtual uint32_t CopyFrom(ZIStream *stream, uint32_t len);
    void ReadFully(void *buf, uint32_t len);
    void WriteFully(const void *buf, uint32_t len);
    uint32_t CopyFromHelper(ZIStream *stream, uint32_t len, void *buf, uint32_t bufLen);
};

enum SEEK_METHOD: int {
    SEEK_METHOD_BEGIN = 0,
    SEEK_METHOD_CURRENT = 1,
    SEEK_METHOD_END = 2,
};

struct ZISeekableStream : public ZIStream {

public:
    ZISeekableStream();

public:
    ~ZISeekableStream() override;

public:
    virtual uint32_t GetPosition();

public:
    virtual void SetPosition(int32_t pos, SEEK_METHOD method);

public:
    virtual uint32_t GetLength();

public:
    virtual void SetLength(uint32_t len);


};

class ZFileStream : public ZISeekableStream{
    enum FILE_STATE: int {
        FILE_STATE_NONE = 0,
        FILE_STATE_ATTACHED = 1 << 0,
        FILE_STATE_WRITE = 1 << 1,
        FILE_STATE_MAPPED_TO_END = 1 << 2,
    };


protected:
    uint64_t m_uPos{};
protected:
    HANDLE m_hFile = INVALID_HANDLE_VALUE;
protected:
    HANDLE m_hMap{};
protected:
    uint8_t* m_pMap{};
protected:
    uint64_t m_uMapBegin{};
protected:
    uint64_t m_uMapEnd{};
protected:
    ZFixedArray<unsigned char, 65536, 0> m_abBuff{};
protected:
    int m_state{};

public:
    ZFileStream();
    void _ctor_default();

public:
    ~ZFileStream() override;

public:
    [[nodiscard]] HANDLE GetHandle() const;

public:
    explicit operator HANDLE  () const;

public:
    void SetHandle(HANDLE handle, int state);

public:
    void Attach(HANDLE handle, bool write);

public:
    HANDLE Detach();

public:
    void
    OpenForWriting(const char *fname,
                   uint32_t creationDisp = CREATE_ALWAYS,
                   uint32_t flagAttr = FILE_ATTRIBUTE_NORMAL,
                   uint32_t shareMode = 0,
                   uint32_t desiredAcc = GENERIC_WRITE,
                   _SECURITY_ATTRIBUTES *attr = nullptr,
                   void *tmplFile = nullptr);

public:
    void
    OpenForReading(const char *fname,
                   uint32_t creationDisp = OPEN_EXISTING,
                   uint32_t flagAttr = FILE_ATTRIBUTE_NORMAL,
                   uint32_t shareMode = 0,
                   uint32_t desiredAcc = GENERIC_READ,
                   _SECURITY_ATTRIBUTES *attr = nullptr,
                   void *tmplFile = nullptr);

public:
    void
    OpenForBoth(const char *fname,
                uint32_t creationDisp = CREATE_ALWAYS,
                uint32_t flagAttr = FILE_ATTRIBUTE_NORMAL,
                uint32_t shareMode = 0,
                uint32_t desiredAcc = GENERIC_READ | GENERIC_WRITE,
                _SECURITY_ATTRIBUTES * attr = nullptr,
                void *tmplFile = nullptr);

public:
    bool Close();

public:
    uint32_t ReadFromSpecificPos(uint32_t pos,
                                         unsigned char *data,
                                         uint32_t len) override;

public:
    void *Map(uint32_t, const char *, uint32_t, uint64_t, uint64_t);

public:
    int32_t Unmap(int32_t should_destroy_mapping_obj);

public:
    uint32_t Read(void *buf, uint32_t len) override;

public:
    uint32_t Write(const void *buf, uint32_t len) override;

public:
    void Flush(int32_t all) override;

public:
    uint32_t ReadEOF(void *buf, uint32_t len) override;

public:
    uint32_t WriteEOF(const void *buf, uint32_t len) override;

public:
    uint32_t CopyTo(ZIStream *stream, uint32_t size) override;

public:
    uint32_t CopyFrom(ZIStream *stream, uint32_t size) override;

public:
    uint32_t GetPosition() override;

public:
    void SetPosition(int32_t pos, SEEK_METHOD method) override;

public:
    uint32_t GetLength() override;

public:
    void SetLength(uint32_t len) override;

public:
    virtual uint64_t GetPosition64();

public:
    virtual void SetPosition64(int64_t pos, SEEK_METHOD method);

public:
    virtual uint64_t GetLength64();

public:
    virtual void SetLength64(uint64_t n);

protected:
    static uint64_t _GetRealPosition(HANDLE file);

protected:
    static uint64_t _SetRealPosition(HANDLE file, uint64_t pos, SEEK_METHOD method);
};


#endif //ZTL_ZFILESTREAM_H
