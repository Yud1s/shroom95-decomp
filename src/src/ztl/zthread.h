#pragma once

#include "util.h"
#include <cstdint>

#include <windows.h>


static uint32_t _ResumeThread(HANDLE hThread) {
    return ResumeThread(hThread);
}

static uint32_t _SuspendThread(HANDLE hThread) {
    return SuspendThread(hThread);
}

class ZThread {

public:
    struct ZThreadResult {
        void Succeeded() {
        }

        uint32_t Failed(uint32_t nErrorCode) {
            return 0;
        }
    };

    struct _ZTS : public ZThreadResult {
    public:
        ZThread *pThis{};
        void *pParam{};
        uint32_t uInitFlag{};
        HANDLE hEvent{};
        HANDLE hEvent2{};
        uint32_t dwError{};
    };

public:
    ZThread() = default;

    virtual ~ZThread() {
        CloseThread();
    }

    [[nodiscard]] uint32_t GetThreadId() const {
        return _m_dwThreadId;
    }

    [[nodiscard]] HANDLE GetThreadHandle() const {
        return _m_hThread;

    }

    bool BeginThread(void *param, int32_t prio, bool suspend, uint32_t stack_size, _SECURITY_ATTRIBUTES *security) {
        _ZTS zts{};
        zts.pParam = param;
        zts.uInitFlag = suspend ? CREATE_SUSPENDED : 0;
        zts.pThis = this;

        zts.hEvent = CreateEventA(nullptr, true, false, nullptr);
        if (!zts.hEvent) {
            return false;
        }

        zts.hEvent2 = CreateEventA(nullptr, true, false, nullptr);
        if (!zts.hEvent2) {
            CloseHandle(zts.hEvent);
            return false;
        }

        const auto thread = _beginthreadex(security, stack_size,
                                           &ZThread::_ZTE,
                                           (void *) &zts, zts.uInitFlag | CREATE_SUSPENDED,
                                           &_m_dwThreadId);

        if(thread == 0) {
            CloseHandle(zts.hEvent);
            CloseHandle(zts.hEvent2);
            SetLastError(errno);
            return false;
        }

        _m_hThread = reinterpret_cast<HANDLE>(thread);
        if(prio) {
            SetThreadPriority(_m_hThread, prio);
        }

        auto _r1 = ResumeThread();
        WaitForSingleObject(zts.hEvent, INFINITE);
        CloseHandle(zts.hEvent);

        if(zts.dwError) {
            CloseHandle(_m_hThread);
            _m_hThread = nullptr;
            _m_dwThreadId = 0;
            SetLastError(zts.dwError);
            return false;
        }

        if(suspend) {
            auto _r2 = SuspendThread();
        }

        SetEvent(zts.hEvent2);
        return true;
    }

    void CloseThread() {
        _m_dwThreadId = 0;
        if (auto thread = _m_hThread.exchange(nullptr)) {
            CloseHandle(this->_m_hThread);
        }
    }

    [[nodiscard]] bool JoinThread(uint32_t timeout) const {
        auto res = WaitForSingleObject(_m_hThread, timeout);
        if (res == WAIT_OBJECT_0) {
            return false;
        }
        return true;
    }

    [[nodiscard]] uint32_t SuspendThread() const {
        return _SuspendThread(_m_hThread);
    }

    [[nodiscard]] uint32_t ResumeThread() const {
        return _ResumeThread(_m_hThread);
    }

protected:
    virtual int32_t Run(void *pParam, ZThread::_ZTS *res) {
        res->dwError = 0;
        SetEvent(res->hEvent);
        WaitForSingleObject(res->hEvent2, INFINITE);
        CloseHandle(res->hEvent2);
        return true;
    }

    static uint32_t __stdcall _ZTE(void * p) {
        const auto res = static_cast<_ZTS *>(p);
        return static_cast<uint32_t>(res->pThis->Run(res->pParam, res));
    }

private:
    uint32_t _m_dwThreadId{};
    std::atomic<HANDLE> _m_hThread{};
};