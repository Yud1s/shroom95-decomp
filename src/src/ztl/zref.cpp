#include "zref.h"

bool ZRefCount::IsLastRef() const {
    return GetRef().load() == 1;
}

int ZRefCount::AddRef() {
    return GetRef().fetch_add(1, std::memory_order_relaxed);
}

bool ZRefCount::Release() {
    return GetRef().fetch_sub(1, std::memory_order_relaxed) == 1;
}

const std::atomic_int &ZRefCount::GetRef() const {
    // HIGHLY UNSAFE + UB but we can't get around It
    // because the msvc compiler doesn't respect explicit packing
    // for derived classes
    return *reinterpret_cast<const std::atomic_int *>(&ref_count);
}

std::atomic_int &ZRefCount::GetRef() {
    // HIGHLY UNSAFE + UB but we can't get around It
    // because the msvc compiler doesn't respect explicit packing
    // for derived classes
    return *reinterpret_cast<std::atomic_int *>(&ref_count);
}

int ZRefCount::GetRefCount() const {
    return GetRef().load();
}

void ZRefCount::Set(int rc) {
    GetRef().store(rc);
}

ZRefCounted::ZRefCounted() {}

bool ZRefCounted::IsLastRef() const {
    return ref_count.IsLastRef();
}

ZRefCounted *ZRefCountedAccessorBase::_Set1(ZRefCounted *p) {
    p->ref_count.Set(1);
    return p;
}

void ZRefCountedAccessorBase::_Delete(ZRefCounted *p) {
    delete p;
}

void ZRefCountedAccessorBase::_AddRef(ZRefCounted *p) {
    p->ref_count.AddRef();
}

void ZRefCountedAccessorBase::_Release(ZRefCounted *p) {
    if (p->ref_count.Release()) {
        _Delete(p);
    }
}

ZRefCounted *&ZRefCountedAccessorBase::_GetPrev(ZRefCounted *p) {
    return p->_prev;
}

ZRefCounted *&ZRefCountedAccessorBase::_GetNext(ZRefCounted *p) {
    return p->_next;
}

int &ZRefCountedAccessorBase::_GetLong(ZRefCounted *p) {
    return p->_long;
}


