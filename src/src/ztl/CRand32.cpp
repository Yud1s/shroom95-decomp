#include "CRand32.h"
#include <chrono>

static CRand32 _D_G_RAND;

std::array<uint32_t,3> calcRand(std::array<uint32_t, 3>& seed) {
    auto [s1, s2, s3] = seed;
    auto a = (((((s1 << 12) ^ (s1 >> 6)) & 0x1fff) ^ (s1 >> 19)) ^ (s1 << 12));
    auto b = (((((s2 >> 0x17) ^ (s2 << 4)) & 0x7f) ^ (s2 >> 0x19)) ^ (s2 << 4));
    auto c = (((((s3 << 0x11) ^ (s3 >> 8)) & 0x1fffff) ^ (s3 << 0x11)) ^ (s3 >> 0xb));

    return {a, b, c};

}

CRand32::CRand32(const uint32_t u1, const uint32_t u2, const uint32_t u3) {
    SetSeed(u1, u2, u3);
}

CRand32::CRand32() {
    //TODO should be timeGetTime
    const auto t = static_cast<uint32_t>(std::chrono::system_clock::now().time_since_epoch().count());
    constexpr uint32_t A = 0x343fd;
    constexpr uint32_t B = 0x269ec3;

    const auto s = ((t * A + B) * A + B) * A + B;
    SetSeed(
            s | 0x100000,
            s | 0x1000,
            s | 0x10
    );
}

void CRand32::SetSeed(const uint32_t u1, const uint32_t u2, const uint32_t u3) {
    ZSynchronizedHelper<ZFatalSection> lock(_lock);
    _seed = {u1, u2, u3};
    _past_seed = _seed;
}

uint32_t CRand32::Random() {
    ZSynchronizedHelper<ZFatalSection> lock(_lock);
    _past_seed = _seed;

    auto [a, b, c] = calcRand(_seed);
    _seed = {a, b, c};
    return a ^ b ^ c;
}

uint32_t CRand32::GetPastRand() {
    ZSynchronizedHelper<ZFatalSection> lock(_lock);
    auto [a, b, c] = calcRand(_past_seed);
    return a ^ b ^ c;
}
