//
//

#include <algorithm>
#include <cstring>
#include "ZFileStream.h"
#include "zexception.h"
#include <iostream>

ZIStream::ZIStream() = default;

ZIStream::~ZIStream() = default;

uint32_t ZIStream::Read(void *buf, uint32_t len) {
    return 0;
}

uint32_t ZIStream::Write(const void *buf, uint32_t len) {
    return 0;
}

uint32_t ZIStream::ReadFromSpecificPos(uint32_t buf, unsigned char *, uint32_t len) {
    return 0;
}

void ZIStream::Flush(int32_t b) {
}

uint32_t ZIStream::ReadEOF(void *buf, uint32_t len) {
    auto remaining = len;
    while (remaining > 0) {
        const auto read = Read(buf, remaining);
        if (read == 0) {
            break;
        }

        remaining -= read;
    }

    return len - remaining;
}

uint32_t ZIStream::WriteEOF(const void *buf, uint32_t len) {
    auto remaining = len;
    while (remaining > 0) {
        const auto written = Write(buf, remaining);
        if (written == 0) {
            break;
        }

        remaining -= written;
    }

    return len - remaining;
}

uint32_t ZIStream::CopyTo(ZIStream *stream, const uint32_t len) {
    return stream->CopyFrom(this, len);
}

uint32_t ZIStream::CopyFrom(ZIStream *stream, const uint32_t len) {
    ZFixedArray<uint8_t, 65536, 0> buf;
    return CopyFromHelper(stream, len, buf.GetData(), sizeof(buf));
}

void ZIStream::ReadFully(void *buf, const uint32_t len) {
    size_t read = 0;
    while(read < len) {
        auto n = Read(static_cast<uint8_t *>(buf) + read, len - read);
        if(n == 0) {
            ZException::Throw(0x26);
        }

        read += n;
    }
}

void ZIStream::WriteFully(const void *buf, uint32_t len) {
    size_t written = 0;

    const auto byteBuf = static_cast<const unsigned char*>(buf);
    while(written < len) {
        const auto n = Write(byteBuf + written, len - written);
        if(n == 0) {
            ZException::Throw(0x26);
        }

        written += n;
    }
}

uint32_t ZIStream::CopyFromHelper(ZIStream *stream, uint32_t len, void *buf, uint32_t bufLen) {
    auto n = len == 0 ? SIZE_MAX : len;
    size_t total = 0;
    while (n > 0) {
        const auto chunk = n < bufLen ? n : bufLen;
        const auto read = stream->ReadEOF(buf, chunk);
        if (read) {
            if (WriteEOF(buf, read) != read) {
                ZException::Throw(0x26);
            }

            if (n != SIZE_MAX) {
                n -= read;
            }
            total += read;
        }

        if (read < chunk) {
            break;
        }
    }

    return total;
}

ZISeekableStream::ZISeekableStream() = default;

ZISeekableStream::~ZISeekableStream() = default;

uint32_t ZISeekableStream::GetPosition() {
    return 0;
}

void ZISeekableStream::SetPosition(int32_t pos, SEEK_METHOD method) {

}

uint32_t ZISeekableStream::GetLength() {
    return 0;
}

void ZISeekableStream::SetLength(uint32_t len) {


}

ZFileStream::ZFileStream() = default;

ZFileStream::~ZFileStream() {
    Close();
}

HANDLE ZFileStream::GetHandle() const {
    return m_hFile;
}

void ZFileStream::SetHandle(HANDLE handle, const int state) {
    m_hFile = handle;
    m_state = state;
    m_uPos = _GetRealPosition(handle);

}

void ZFileStream::Attach(HANDLE handle, const bool write) {
    if(handle == INVALID_HANDLE_VALUE || !handle) {
        ZException::Throw(6);
    }
    auto state = static_cast<int>(FILE_STATE_ATTACHED);
    if(write) {
        state |= static_cast<int>(FILE_STATE_WRITE);
    }
    SetHandle(handle, state);
}

HANDLE ZFileStream::Detach() {
    const auto file = m_hFile;
    m_hFile = INVALID_HANDLE_VALUE;
    return file;
}

void ZFileStream::OpenForWriting(const char *fname, uint32_t creationDisp, uint32_t flagAttr, uint32_t shareMode,
                                 uint32_t desiredAcc, _SECURITY_ATTRIBUTES *attr, void *tmplFile) {
    Close();

    m_state = 0;
#ifdef WIN32
    auto file = CreateFileA(fname,
                            desiredAcc, shareMode,
                            attr, creationDisp,
                            flagAttr, nullptr);
    Z_CHECK(file != INVALID_HANDLE_VALUE);

    if(desiredAcc & GENERIC_WRITE) {
        m_state |= static_cast<int>(FILE_STATE_WRITE);
    }
#else
    auto file = open(fname, O_CREAT | O_WRONLY | O_TRUNC, 0666);
    Z_CHECK(file >= 0);
#endif
    m_hFile = file;
    m_uPos = 0;
    m_state |= static_cast<int>(FILE_STATE_ATTACHED);
}

void ZFileStream::OpenForReading(const char *fname, uint32_t creationDisp, uint32_t flagAttr, uint32_t shareMode,
                                 uint32_t desiredAcc, _SECURITY_ATTRIBUTES *attr, void *tmplFile) {
    OpenForWriting(fname, creationDisp, flagAttr, shareMode, desiredAcc, attr, tmplFile);
}

void ZFileStream::OpenForBoth(const char *fname, uint32_t creationDisp, uint32_t flagAttr, uint32_t shareMode,
                              uint32_t desiredAcc, _SECURITY_ATTRIBUTES * attr, void *tmplFile) {
    OpenForWriting(fname, creationDisp, flagAttr, shareMode, desiredAcc, nullptr, tmplFile);
}

bool ZFileStream::Close() {
    //TODO map
    if (m_hFile != INVALID_HANDLE_VALUE) {
#ifdef WIN32
        auto res = CloseHandle(m_hFile);
#else
        auto res = close(m_hFile) >= 0;
#endif
        m_state = FILE_STATE_NONE;
        if(!res) {
            return false;
        }

        m_hFile = INVALID_HANDLE_VALUE;
    }

    return true;
}

uint32_t ZFileStream::ReadFromSpecificPos(uint32_t pos, unsigned char *data, uint32_t len) {
    SetPosition64(pos, SEEK_METHOD_BEGIN);
    return Read(data, len);
}

void *ZFileStream::Map(uint32_t, const char *, uint32_t, uint64_t, uint64_t) {
    return nullptr;
}

int32_t ZFileStream::Unmap(int32_t should_destroy_mapping_obj) {
    return 0;
}

uint32_t ZFileStream::Read(void *buf, uint32_t len) {
    auto readd = 0;
#ifdef WIN32
    auto res = ReadFile(m_hFile, buf, len, reinterpret_cast<DWORD *>(&readd), nullptr);
    if(const auto err = GetLastError(); !res && err !=  ERROR_BROKEN_PIPE) {
        ZException::Throw(static_cast<HRESULT>(err));
    }
#else
    auto res = read(m_hFile, buf, len);
    Z_CHECK(res >= 0);
    readd = res;
#endif
    m_uPos += readd;
    return readd;
}

uint32_t ZFileStream::Write(const void *buf, uint32_t len) {
    //TODO map
    size_t written = 0;
#ifdef WIN32
    Z_CHECK(WriteFile(m_hFile, buf, len, reinterpret_cast<DWORD *>(&written), nullptr));
#else
    auto res = write(m_hFile, buf, len);
    Z_CHECK(res >= 0);
    written = res;
#endif
    m_uPos += written;
    return written;
}

void ZFileStream::Flush(int32_t all) {
    if(m_pMap) {
#ifdef _WIN32
        Z_CHECK(FlushViewOfFile(m_pMap, 0));
#else
        Z_CHECK(msync(m_pMap, m_uMapSize, MS_SYNC) >= 0);
#endif
    }

    if (m_state & static_cast<int>(FILE_STATE_WRITE)) {
#ifdef WIN32
        Z_CHECK(FlushFileBuffers(m_hFile));
#else
        Z_CHECK(fsync(m_hFile) >= 0);
#endif
    }
}

uint32_t ZFileStream::ReadEOF(void *buf, uint32_t len) {
    //TODO map
    return ZIStream::ReadEOF(buf, len);
}

uint32_t ZFileStream::WriteEOF(const void *buf, uint32_t len) {
    //TODO map
    return ZIStream::WriteEOF(buf, len);
}

uint32_t ZFileStream::CopyTo(ZIStream *stream, uint32_t size) {
    //TODO map
    return ZIStream::CopyTo(stream, size);
}

uint32_t ZFileStream::CopyFrom(ZIStream *stream, uint32_t size) {
    //TODO map
    return ZIStream::CopyFrom(stream, size);
}

uint32_t ZFileStream::GetPosition() {
    //TODO check overflow
    return m_uPos;
}

void ZFileStream::SetPosition(int32_t pos, SEEK_METHOD method) {
    SetPosition64(pos, method);
}

uint32_t ZFileStream::GetLength() {
    auto len = GetLength64();
    //TODO check overflow
    return len;
}

void ZFileStream::SetLength(uint32_t len) {
    SetLength64(len);
}

uint64_t ZFileStream::GetPosition64() {
    return m_uPos;
}

void ZFileStream::SetPosition64(int64_t pos, SEEK_METHOD method) {
    if(method == SEEK_METHOD_CURRENT) {
        pos = static_cast<int64_t>(m_uPos) + pos;
        method = SEEK_METHOD_BEGIN;
    }
    //TODO map
    _SetRealPosition(m_hFile, pos, method);
    m_uPos = pos;
}

uint64_t ZFileStream::GetLength64() {
#ifdef WIN32
    LARGE_INTEGER size{};
    Z_CHECK(GetFileSizeEx(m_hFile, &size));
    return size.QuadPart;
#else
    struct stat st{};
    Z_CHECK(fstat(m_hFile, &st) >= 0);
    return st.st_size;
#endif
}

void ZFileStream::SetLength64(uint64_t n) {
    // TODO: if mapped throw

#ifdef _WIN32
    _SetRealPosition(m_hFile, n, SEEK_METHOD_BEGIN);
    auto res = SetEndOfFile(m_hFile);
    // Reset position to pos
    _SetRealPosition(m_hFile, m_uPos, SEEK_METHOD_BEGIN);
    Z_CHECK(res);
#else
    auto res = ftruncate(m_hFile, n);
    Z_CHECK(res >= 0);
#endif
}

uint64_t ZFileStream::_GetRealPosition(HANDLE file) {
#ifdef WIN32
    LARGE_INTEGER pos{};
    const auto res = SetFilePointerEx(file, {0}, &pos, FILE_CURRENT);
    Z_CHECK(res);
    return pos.QuadPart;
#else
    auto pos = lseek((int) file, 0, SEEK_CUR);
    Z_CHECK(pos < 0);
    return pos;
#endif
}

uint64_t ZFileStream::_SetRealPosition(HANDLE file, uint64_t pos, SEEK_METHOD method) {
#ifdef WIN32
    LARGE_INTEGER newPos{};
    LARGE_INTEGER move{};
    //TODO truncating casting
    move.QuadPart = static_cast<long long>(pos);
    const auto res = SetFilePointerEx(file, move, &newPos, method);
    Z_CHECK(res);
    return newPos.QuadPart;
#else
    auto newPos = lseek64((int) file, (int64_t)pos, (int)method);
    Z_CHECK(newPos < 0);
    return newPos;
#endif
}

ZFileStream::operator HANDLE() const {
    return m_hFile;
}

void ZFileStream::_ctor_default() {
    new(this) ZFileStream();
}
