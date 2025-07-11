#pragma once

#include "util/base.h"
#include "pcom/wz.h"
#include "util/extra.h"
#include "Packet/Packet.hpp"

static void __anon_EncodeTime(COutPacket &pkt, uint32_t t);

static uint32_t __anon_DecodeTime(CInPacket &pkt);

class DynamicTermSet {
public:
    DynamicTermSet() = default;

    virtual ~DynamicTermSet() = default;

protected:
    [[nodiscard]] uint32_t GetTerm() const;

    void SetTerm(uint32_t term);

    void Encode(COutPacket &pkt) const;

    void Decode(CInPacket &pkt);

private:
    // TODO uint16_t
    uint32_t m_usExpireTerm{};
};

STATIC_ASSERT_SIZE(DynamicTermSet, 8);

template<typename T, const int N>
class not_equal {
public:
    static T GetMaxValue() {
        return N;
    }

    static bool Check(const T &v) {
        return v != N;
    }
};

template<typename T, const int N>
class greater_equal {
public:
    static T GetMaxValue() {
        return N;
    }

    static bool Check(const T &v) {
        return v >= N;
    }
};

template<typename T, size_t D, size_t N>
class Decrease {
public:
    static bool GetState() {
        return false;
    }
};

template<typename T>
class Nothing {
public:
    static bool GetState() {
        return false;
    }
};

class BaseOnCurrentTime {
    uint32_t m_tCurrentTime{};

public:
    BaseOnCurrentTime() = default;

    virtual ~BaseOnCurrentTime() = default;

protected:
    [[nodiscard]] uint32_t GetBaseTime(uint32_t tLastUpdated) const;

    void SetBaseTime();

    void Encode(COutPacket &pkt) const;

    void Decode(CInPacket &pkt);
};

STATIC_ASSERT_SIZE(BaseOnCurrentTime, 8);

class BaseOnLastUpdatedTime {
public:
    virtual ~BaseOnLastUpdatedTime() = default;

protected:
    [[nodiscard]] uint32_t GetBaseTime(uint32_t tLastUpdated) const;

    void SetBaseTime();

    void Encode(COutPacket &) const;

    void Decode(CInPacket &);
};

class ExpireBase {
public:
    ExpireBase() = default;

protected:
    virtual bool IsNoExpire();

    [[nodiscard]] virtual bool IsExpiredAt(uint32_t tCur, uint32_t tLastUpdated) const = 0;

    [[nodiscard]] virtual uint32_t GetExpireTerm() const = 0;

    virtual void SetExpireTerm(uint32_t term) = 0;

    virtual void Encode(COutPacket &pkt) const = 0;

    virtual void Decode(CInPacket &arg0) = 0;
};

class NoExpire : public ExpireBase {
public:
    NoExpire() = default;

    virtual ~NoExpire() = default;

protected:
    [[nodiscard]] virtual bool IsNoExpire() const;

    [[nodiscard]] bool IsExpiredAt(uint32_t tCur, uint32_t tLastUpdated) const override;

    [[nodiscard]] uint32_t GetExpireTerm() const override;

    void SetExpireTerm(uint32_t term) override;

    void Encode(COutPacket &pkt) const override;

    void Decode(CInPacket &pkt) override;
};

// Expire<BaseOnCurrentTime,DynamicTermSet>
template<typename T, typename U>
class Expire : public ExpireBase, public T, public U {
public:
    Expire() = default;

    ~Expire() override = default;

    void _ctor_0() {
        new(this) Expire();
    }

protected:
    [[nodiscard]] bool IsExpiredAt(uint32_t tCur, uint32_t tLastUpdated) const override {
        auto t = tCur - T::GetBaseTime(tLastUpdated);
        return GetExpireTerm() < t;
    }

    [[nodiscard]] uint32_t GetExpireTerm() const override {
        return U::GetTerm();
    }

    void SetExpireTerm(uint32_t term) override {
        U::SetTerm(term);
    }

    void Encode(COutPacket &pkt) const override {
        T::Encode(pkt);
        U::Encode(pkt);
    }

    void Decode(CInPacket &pkt) override {
        T::Decode(pkt);
        U::Decode(pkt);
    }
};

typedef Expire<BaseOnCurrentTime, DynamicTermSet> expire_cur_time_dynamic_t;
STATIC_ASSERT_SIZE(expire_cur_time_dynamic_t, 0x14);

template<typename T>
class TemporaryStatBase : public ZRefCounted {
public:
    TemporaryStatBase() {
        m_tLastUpdated = timeGetTime();
    }

    CTOR_DEFAULT(TemporaryStatBase)

    void _ctor_0() {
        new(this) TemporaryStatBase();
    }

    ~TemporaryStatBase() override = default;

public:
    void Reset() {
        m_value = 0;
        m_reason = 0;
        m_tLastUpdated = timeGetTime();
    }

    [[nodiscard]] const T &GetValue() const {
        // TODO: og impl locks here, but it returns a reference
        // so locking wont do anything
        return m_value;
    }

    [[nodiscard]] const T &GetReason() const {
        // TODO: lock
        return m_reason;
    }

    [[nodiscard]] uint32_t GetLastUpdatedTime() const {
        return m_tLastUpdated;
    }


    [[nodiscard]] virtual bool IsActivated() const {
        return true;
    }

    [[nodiscard]] virtual T GetMaxValue() const {
        return 0;
    }

    [[nodiscard]] virtual bool IsExpiredAt(uint32_t t) const {
        return false;
    }

    [[nodiscard]] virtual uint32_t GetExpireTerm() const {
        return 0;

    }

    virtual void EncodeForClient(COutPacket &pkt) const {
        pkt.EncodeBuffer(&m_value, sizeof(T));
        pkt.EncodeBuffer(&m_reason, sizeof(T));
    }

    virtual void DecodeForClient(CInPacket &pkt) {
        pkt.DecodeBuffer(&m_value, sizeof(T));
        pkt.DecodeBuffer(&m_reason, sizeof(T));
    }


    ZFatalSection& GetLock() {
        return m_lock;
    }

    const ZFatalSection& GetLock() const {
        return m_lock;
    }

private:
    void SetLastUpdatedTime(uint32_t t) {
        m_tLastUpdated = t;
    }

private:
    T m_value{};
    T m_reason{};
    uint32_t m_tLastUpdated{};
    ZFatalSection m_lock;
};

STATIC_ASSERT_SIZE(TemporaryStatBase<long>, 0x20);

template<typename T, typename Cond, typename Exp, typename S1, typename S2>
class TwoStateTemporaryStat : public TemporaryStatBase<T>, public Exp {
public:
    TwoStateTemporaryStat() = default;

    ~TwoStateTemporaryStat() override = default;

    CTOR_DEFAULT(TwoStateTemporaryStat)
    void _ctor_0() {
        new(this) TwoStateTemporaryStat();
    }

public:
    [[nodiscard]] bool IsActivated() const override {
        return Cond::Check(this->GetValue());
    }

    [[nodiscard]] T GetMaxValue() const override {
        return Cond::GetMaxValue();
    }

    [[nodiscard]] bool IsExpiredAt(uint32_t tCur) const override {
        // TODO lock
        return Exp::IsExpiredAt(tCur, this->GetLastUpdatedTime());
    }

    [[nodiscard]] uint32_t GetExpireTerm() const override {
        return Exp::GetExpireTerm();
    }

    [[nodiscard]] bool IsFirstState() const {
        return S1::GetState();
    }

    [[nodiscard]] bool IsSecondState() const {
        return S2::GetState();
    }

    void EncodeForClient(COutPacket &pkt) const override {
        TemporaryStatBase<T>::EncodeForClient(pkt);
        Exp::Encode(pkt);
    }

    void DecodeForClient(CInPacket &pkt) override {
        TemporaryStatBase<T>::DecodeForClient(pkt);
        Exp::Decode(pkt);
    }
};

class TemporaryStat_PartyBooster
        : public TwoStateTemporaryStat<long, not_equal<long, 0>, Expire<BaseOnCurrentTime, DynamicTermSet>, Nothing<long>, Nothing<long>> {
public:
    enum PARTY_BOOSTER_MAX {
        PARTY_BOOSTER_MAX = 254
    };

public:
    TemporaryStat_PartyBooster() = default;

    void _ctor_0() {
        new(this) TemporaryStat_PartyBooster();
    }

    ~TemporaryStat_PartyBooster() override = default;
};

STATIC_ASSERT_SIZE(TemporaryStat_PartyBooster, 52);

class TemporaryStat_GuidedBullet
        : public TwoStateTemporaryStat<long, not_equal<long, 0>, NoExpire, Nothing<long>, Nothing<long>> {
private:
    unsigned long m_dwMobID{};
    // Methods
public:
    ~TemporaryStat_GuidedBullet() override = default;

    TemporaryStat_GuidedBullet() = default;

    void _ctor_0() {
        new(this) TemporaryStat_GuidedBullet();
    }

    [[nodiscard]] unsigned long GetMobID() const {
        return m_dwMobID;
    }

    virtual void EncodeForClient(COutPacket &oPacket) {
        TwoStateTemporaryStat<long, not_equal<long, 0>, NoExpire, Nothing<long>, Nothing<long>>::EncodeForClient(oPacket);
        oPacket.Encode4(m_dwMobID);
    }

    void DecodeForClient(CInPacket &iPacket) override {
        TwoStateTemporaryStat<long, not_equal<long, 0>, NoExpire, Nothing<long>, Nothing<long>>::DecodeForClient(iPacket);
        m_dwMobID = iPacket.Decode4();
    }
};

STATIC_ASSERT_SIZE(TemporaryStat_GuidedBullet, 40);