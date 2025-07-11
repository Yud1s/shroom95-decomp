#include "zlock.h"

#if defined(_MSC_VER)
#include <intrin.h>
#define readfsdword(offset) __readfsdword(offset)
#elif defined(__clang__) || defined(__GNUC__)
inline uint32_t readfsdword([[maybe_unused]] uint32_t offset) {
    /*uint32_t value{};
    asm("movl %%fs:(%1), %0"
            : "=r" (value)
            : "r" (offset));*/

    //TODO
    return std::hash<std::thread::id>{}(std::this_thread::get_id());
}
#else
#error "Compiler not supported"
#endif

void* get_tib() {
    return reinterpret_cast<void*>(readfsdword(0x18));
}

bool (ZFatalSection::*ZFatalSection::_s_pfnTry)() = &ZFatalSection::try_i;


bool ZFatalSection::try_m() {
    auto tib = get_tib();
    auto null = static_cast<void*>(nullptr);
    if(!_tib.compare_exchange_strong(null, tib)) {
        // Can't _lock If another thread holds the _lock
        if(_tib.load() != tib) {
            return false;
        }
    }

    _ref_count.fetch_add(1);
    return true;
}

[[maybe_unused]] bool ZFatalSection::try_s() {
    if(auto tib = get_tib(); _tib != nullptr && _tib != tib) {
        return false;
    }

    _ref_count += 1;
    return true;
}


[[maybe_unused]]
bool ZFatalSection::try_i() {
    _s_pfnTry = std::thread::hardware_concurrency() == 1 ? &ZFatalSection::try_s : &ZFatalSection::try_m;
    return (this->*(ZFatalSection::_s_pfnTry))();
}

void ZFatalSection::Lock() {
    for(auto i = 0; i < INITIAL_LOCK_ATTEMPTS; i++) {
        if(inner_try_lock()) {
            return;
        }
    }

    while(true) {
        std::this_thread::yield();
        if(inner_try_lock()) {
            return;
        }
    }
}

bool ZFatalSection::inner_try_lock() {
    return (this->*_s_pfnTry)();
}

void ZFatalSection::Unlock() {
    if(_ref_count.fetch_sub(1) <= 1) {
        _tib.store(nullptr);
    }
}

[[maybe_unused]] bool ZFatalSection::IsLocked() const {
    return _tib.load() != nullptr;
}

int ZFatalSection::GetRefCount() const {
    return _ref_count.load();
}

bool ZFatalSection::TryLock() {
    return inner_try_lock();
}

bool ZFatalSection::IsMultiThreaded() {
    return _s_pfnTry == &ZFatalSection::try_m;
}

ZFatalSectionGuard::ZFatalSectionGuard(ZFatalSection &lock){
    lock.Lock();
    _lock = &lock;
}

ZFatalSectionGuard::~ZFatalSectionGuard() {
    _lock->Unlock();
}

[[maybe_unused]] ZFatalSectionGuard::ZFatalSectionGuard(ZFatalSection *lock) {
    _lock = lock;
    lock->Lock();

}

ZSyncAutoUnlock::ZSyncAutoUnlock(ZFatalSection *lock) {

    this->_lock = lock;
}

ZSyncAutoUnlock::ZSyncAutoUnlock(ZFatalSection &lock) {
    this->_lock = &lock;
}

[[maybe_unused]] ZSyncAutoUnlock::ZSyncAutoUnlock(ZFatalSection *lock, const bool unlock) {
    //TODO
    if(unlock) {
        _lock = lock;
    }
}

[[maybe_unused]] ZSyncAutoUnlock::ZSyncAutoUnlock(ZFatalSection &lock, const bool unlock) {
    //TODO
    if(unlock) {
        _lock = &lock;
    }
}

void ZSyncAutoUnlock::CancelUnlock() {
    _lock = nullptr;
}

ZSyncAutoUnlock::~ZSyncAutoUnlock() {
    if(_lock) {
        _lock->Unlock();
    }

}


