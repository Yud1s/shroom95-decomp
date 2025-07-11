#pragma once

#include <atomic>
#include <cstdint>
#include <thread>

#include "helper.h"


constexpr size_t INITIAL_LOCK_ATTEMPTS = 2;

struct ZFatalSectionData {
    std::atomic<void *> _tib{};
    std::atomic_int _ref_count{};
};
Z_ASSERT_SIZE(ZFatalSectionData, sizeof(size_t) * 2);

struct ZFatalSection : ZFatalSectionData {
    /// Multi-threaded
    bool try_m();

    /// Single-threaded
    [[maybe_unused]] bool try_s();

    bool try_i();

    static bool (ZFatalSection::*_s_pfnTry)();

    inline bool inner_try_lock();

    bool TryLock();

    void Lock();

    void Unlock();

    [[maybe_unused]] bool IsLocked() const;

    [[maybe_unused]] int GetRefCount() const;

    static bool IsMultiThreaded();
};

Z_ASSERT_SIZE(ZFatalSection, sizeof(ZFatalSectionData));

struct ZFatalSectionGuard {
public:
    ZFatalSection *_lock{};

    explicit ZFatalSectionGuard(ZFatalSection &lock);

    void _ctor_0(ZFatalSection &lock) {
        new(this) ZFatalSectionGuard(lock);
    }

    [[maybe_unused]] explicit ZFatalSectionGuard(ZFatalSection *lock);

    ~ZFatalSectionGuard();
};

Z_ASSERT_SIZE(ZFatalSectionGuard, sizeof(size_t));


class ZSyncAutoUnlock {
private:
    ZFatalSection *_lock = nullptr;
public:
    explicit ZSyncAutoUnlock(ZFatalSection &lock, bool unlock);

    explicit ZSyncAutoUnlock(ZFatalSection *lock, bool unlock);

    explicit ZSyncAutoUnlock(ZFatalSection &lock);

    explicit ZSyncAutoUnlock(ZFatalSection *lock);

    ~ZSyncAutoUnlock();

    void CancelUnlock();
};

Z_ASSERT_SIZE(ZSyncAutoUnlock, sizeof(size_t));

template<typename T>
class ZSynchronizedHelper {
    ZFatalSection *m_pLock{};

public:
    explicit operator int() const {
        return m_pLock->IsLocked();
    }

    explicit ZSynchronizedHelper(ZFatalSection &lock) {
        m_pLock = &lock;
        m_pLock->Lock();
    }

    void _ctor_0(ZFatalSection &lock) {
        new(this) ZSynchronizedHelper(lock);
    }

    explicit ZSynchronizedHelper(ZFatalSection *lock) {
        m_pLock = lock;
        if(m_pLock) {
            m_pLock->Lock();
        }

    }

    ~ZSynchronizedHelper() {
        if(m_pLock) {
            m_pLock->Unlock();
            m_pLock = nullptr;
        }
    }
};