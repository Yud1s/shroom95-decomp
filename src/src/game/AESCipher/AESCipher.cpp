// AESCipher.cpp
#include "AESCipher.hpp"
#include "AESCipher_regen.ipp"

#include "aes.hpp"

#define BYTEn(x, n)   (*((char*)&(x)+n))
#define BYTE1(x)   BYTEn(x,  1) 
//#define HIBYTE(x)   (*((char*)&(x)+1))


unsigned char CAESCipher::s_BasicKey[32]{0x63, 0x6f, 0x6e, 0x73, 0x74, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x38, 0x5f, 0x74, 0x20, 0x64, 0x61, 0x74, 0x61, 0x5b, 0x32, 0x5d, 0x20, 0x3d, 0x20, 0x0a, 0x7b, 0x0a, 0x09, 0x30, 0x78, 0x36, 0x33};
uint32_t CAESCipher::UserKey[32]{0x7830202c, 0x7d0a6636, 0x00000a3b, 0x0000005b, 0x00000008, 0x00000002, 0x00000010, 0x00000060, 0x00000006, 0x00000002, 0x00000043, 0x0000000f, 0x000000b4, 0x0000004b, 0x00000035, 0x00000005, 0x0000001b, 0x0000000a, 0x0000005f, 0x00000009, 0x0000000f, 0x00000050, 0x0000000c, 0x0000001b, 0x00000033, 0x00000055, 0x00000001, 0x00000009, 0x00000052, 0x000000de, 0x000000c7, 0x0000001e};
const unsigned char CAESCipher::bDefaultAESKeyValue[16]{0xc6, 0x50, 0x53, 0xf2, 0xa8, 0x42, 0x9d, 0x7f, 0x77, 0x09, 0x1d, 0x26, 0x42, 0x53, 0x88, 0x7c};
unsigned char CAESCipher::tab_gen{0};

unsigned char AES_KEY[] = {
	0x13, 0x00, 0x00, 0x00,
	0x08, 0x00, 0x00, 0x00,
	0x06, 0x00, 0x00, 0x00,
	0xB4, 0x00, 0x00, 0x00,
	0x1B, 0x00, 0x00, 0x00,
	0x0F, 0x00, 0x00, 0x00,
	0x33, 0x00, 0x00, 0x00,
	0x52, 0x00, 0x00, 0x00};



std::array<uint8_t, 16> expandKey(unsigned long key)
{
	// Expand the key 4 times
	std::array<uint8_t, 16> expandedKey{};
	for (int i = 0; i < 4; i++)
	{
		std::memcpy(&expandedKey[i * 4], &key, 4);
	}

	return expandedKey;
}

inline void xorBlock(unsigned char* pDest, const unsigned char* pSrc, const std::array<uint8_t, 16>& block, size_t n = 16)
{
	for (auto i = 0; i < n; i++)
	{
		pDest[i] = pSrc[i] ^ block[i];
	}
}

void __cdecl CAESCipher::Encrypt(unsigned char *pDest, unsigned char *pSrc, int32_t nLen, unsigned long *pdwKey)
{
	static Cipher::Aes<256> aes(AES_KEY);
	auto block = expandKey(*pdwKey);

	const auto blocks = nLen / 16;
	const auto rem = nLen % 16;

	for (auto i = 0; i < blocks; i++)
	{
		aes.encrypt_block(block.data());
		const auto ix = i * 16;
		xorBlock(&pDest[ix], &pSrc[ix], block);
	}

	aes.encrypt_block(block.data());
	const auto ix = blocks * 16;
	xorBlock(&pDest[ix], &pSrc[ix], block, rem);
}
void __cdecl CAESCipher::Decrypt(unsigned char *pDest, unsigned char *pSrc, int32_t nLen, unsigned long *pdwKey)
{
	Encrypt(pDest, pSrc, nLen, pdwKey);
}
void __cdecl CAESCipher::AES_EncKeySchedule(unsigned long *UserKey, CAESCipher::AES_ALG_INFO *AlgInfo)
{
	//__sub_000330D0(UserKey, AlgInfo);
	UNIMPLEMENTED;
}
void __cdecl CAESCipher::AES_DecKeySchedule(unsigned long *UserKey, CAESCipher::AES_ALG_INFO *AlgInfo)
{
	UNIMPLEMENTED;
	//__sub_000330D0(UserKey, AlgInfo);
}

void __cdecl CAESCipher::AES_EncInit(CAESCipher::AES_ALG_INFO *AlgInfo, unsigned long *pdwKey, unsigned char *pSrc, int32_t nLen)
{
	//__sub_00031C80(AlgInfo, pdwKey, pSrc, nLen);
	UNIMPLEMENTED;
}
void __cdecl CAESCipher::AES_DecInit(CAESCipher::AES_ALG_INFO *AlgInfo, unsigned long *pdwKey, unsigned char *pSrc, int32_t nLen)
{

	UNIMPLEMENTED;
}
unsigned char __cdecl CAESCipher::OFB_EncUpdate(CAESCipher::AES_ALG_INFO *AlgInfo, unsigned char *PlainTxt, unsigned long PlainTxtLen, unsigned char *CipherTxt, unsigned long *CipherTxtLen)
{
	//return __sub_00032D60(AlgInfo, PlainTxt, PlainTxtLen, CipherTxt, CipherTxtLen);

	UNIMPLEMENTED;
}
unsigned char __cdecl CAESCipher::OFB_EncFinal(CAESCipher::AES_ALG_INFO *AlgInfo, unsigned char *CipherTxt, unsigned long *CipherTxtLen)
{
	return __sub_00032EC0(AlgInfo, CipherTxt, CipherTxtLen);
	UNIMPLEMENTED;
}
unsigned char __cdecl CAESCipher::OFB_DecUpdate(CAESCipher::AES_ALG_INFO *AlgInfo, unsigned char *CipherTxt, unsigned long CipherTxtLen, unsigned char *PlainTxt, unsigned long *PlainTxtLen)
{
	//TODO return __sub_00032F10(AlgInfo, CipherTxt, CipherTxtLen, PlainTxt, PlainTxtLen);
	UNIMPLEMENTED;
}
unsigned char __cdecl CAESCipher::OFB_DecFinal(CAESCipher::AES_ALG_INFO *AlgInfo, unsigned char *PlainTxt, unsigned long *PlainTxtLen)
{
	//return __sub_00033080(AlgInfo, PlainTxt, PlainTxtLen);
	UNIMPLEMENTED;
}
void __cdecl CAESCipher::MorphKey(unsigned long *arg0, unsigned char arg1)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}

void __cdecl CAESCipher::RIJNDAEL_KeySchedule(unsigned long *UserKey, unsigned long *e_key)
{
	UNIMPLEMENTED;
}

void __cdecl CAESCipher::AES_Encrypt(void *CipherKey, unsigned char *Data)
{

	UNIMPLEMENTED;
}

void __cdecl CAESCipher::gen_tabs()
{
	UNIMPLEMENTED;
}

void __cdecl CAESCipher::AES_Decrypt(void *CipherKey, unsigned char *Data)
{
	//__sub_00031E30(CipherKey, Data);
	UNIMPLEMENTED;
}

