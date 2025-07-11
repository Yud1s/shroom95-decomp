#ifndef ZTL_CRAND32_H
#define ZTL_CRAND32_H

#include <array>
#include <cstdint>

#include "zlock.h"

class CRand32 {
    std::array<uint32_t, 3> _seed{};
    std::array<uint32_t, 3> _past_seed{};
    ZFatalSection _lock;

public:
    CRand32(uint32_t u1, uint32_t u2, uint32_t u3);
    CRand32();
    void SetSeed(uint32_t u1, uint32_t u2, uint32_t u3);
    uint32_t Random();
    uint32_t GetPastRand();
};

extern CRand32 _D_G_RAND;


#endif //ZTL_CRAND32_H
