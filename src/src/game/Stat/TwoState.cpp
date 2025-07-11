#include "TwoState.hpp"

void __anon_EncodeTime(COutPacket &pkt, const uint32_t t) {
    auto cur = timeGetTime();
    if(cur > t) {
        pkt.Encode1(1);
        pkt.Encode4(cur - t);
    } else {
        pkt.Encode1(0);
        pkt.Encode4(t - cur);
    }
}

uint32_t __anon_DecodeTime(CInPacket &pkt) {
    auto cur = timeGetTime();
    auto type = pkt.Decode1();
    auto time = pkt.Decode4();
    return type ? cur - time : time + cur;
}

uint32_t DynamicTermSet::GetTerm() const {
    return (uint32_t) m_usExpireTerm * 1000;
}

void DynamicTermSet::SetTerm(uint32_t term) {
    m_usExpireTerm = (uint16_t) (term / 1000);
}

void DynamicTermSet::Encode(COutPacket &pkt) const {
    pkt.Encode2(m_usExpireTerm);
}

void DynamicTermSet::Decode(CInPacket &pkt) {
    m_usExpireTerm = pkt.Decode2();
}


uint32_t BaseOnCurrentTime::GetBaseTime(uint32_t tLastUpdated) const {
    return m_tCurrentTime;
}

void BaseOnCurrentTime::SetBaseTime() {
    m_tCurrentTime = timeGetTime();
}

void BaseOnCurrentTime::Encode(COutPacket &pkt) const {
    __anon_EncodeTime(pkt, m_tCurrentTime);
}

void BaseOnCurrentTime::Decode(CInPacket &pkt) {
    m_tCurrentTime = __anon_DecodeTime(pkt);
}

uint32_t BaseOnLastUpdatedTime::GetBaseTime(uint32_t tLastUpdated) const { // NOLINT(*-convert-member-functions-to-static)
    return tLastUpdated;
}

void BaseOnLastUpdatedTime::SetBaseTime() {
}

void BaseOnLastUpdatedTime::Encode(COutPacket &) const {
}

void BaseOnLastUpdatedTime::Decode(CInPacket &) {
}

bool ExpireBase::IsNoExpire() {
    return false;
}

bool NoExpire::IsNoExpire() const {
    return true;
}

bool NoExpire::IsExpiredAt(uint32_t tCur, uint32_t tLastUpdated) const {
    return false;
}

uint32_t NoExpire::GetExpireTerm() const {
    return 0x7fffffff;
}

void NoExpire::SetExpireTerm(uint32_t term) {
}

void NoExpire::Encode(COutPacket &pkt) const {
}

void NoExpire::Decode(CInPacket &pkt) {
}
