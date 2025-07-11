// Crc32.cpp
#include "Crc32.hpp"
#include "Crc32_regen.ipp"

uint32_t CCrc32::ms_adwCrc32Table[256]{};

unsigned long __cdecl CCrc32::GetCrc32_(const uint8_t* pData, unsigned long dwSize, unsigned long dwInit,
                                       int32_t bUseAddr, unsigned long* pdwSimpleGuardPoint)
{
    //return __sub_000B7860(pData, dwSize, dwInit, bUseAddr, pdwSimpleGuardPoint);
    return GetCrc32(pData, dwSize, dwInit, bUseAddr, pdwSimpleGuardPoint, 0);
}

unsigned long __cdecl CCrc32::GetCrc32(const uint8_t* pData, unsigned long dwSize, unsigned long dwInit, int32_t bUseAddr,
                                        unsigned long* pdwSimpleGuardPoint, int32_t bPosSave)
{
    return __sub_000B7860(pData, dwSize, dwInit, bUseAddr, pdwSimpleGuardPoint, bPosSave);
    //UNIMPLEMENTED;
}

void CCrc32::Init()
{
    auto table = ms_adwCrc32Table;
    auto seed = 0xdd10ee12 - 0x191;
    for (int i = 0; i < 256; i++)
    {
        uint32_t crc = i;
        for (int j = 0; j < 8; j++)
        {
            if (crc & 1)
            {
                crc = crc >> 1 ^ seed;
            }
            else
            {
                crc >>= 1;
            }
        }
        table[i] = crc;
    }
}

uint32_t GETCRC32HelperString::call(ZXString<char> str, uint32_t init)
{
    auto len = str.GetLength();
    //TODO verify null termination
    auto data = static_cast<const char*>(str);
    return CCrc32::GetCrc32(
        (const uint8_t*)data,
        len,
        init,
        0,
        nullptr,
        0
    );
}

uint32_t GETCRC32Svr_long(const int32_t* a, uint32_t init)
{
    return CCrc32::GetCrc32(reinterpret_cast<const unsigned char*>(a), sizeof(int32_t), init, 0, nullptr, 0);
}
