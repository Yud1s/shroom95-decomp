// AESCipher.hpp
#pragma once
#include "util/base.h"



// Level: 0 0x20d92
class CAESCipher;

class CAESCipher
{

public:
	static unsigned char s_BasicKey[32];
	static uint32_t UserKey[32];
	static unsigned char tab_gen;
	static const unsigned char bDefaultAESKeyValue[16];

private:
	static unsigned char bShuffle[256];

	// Nested
public:
	struct AES_ALG_INFO
	{
		std::array<unsigned char, 16> ChainVar{};
		std::array<unsigned char, 16> Buffer{};
		unsigned long BufLen{};
		std::array<unsigned long, 68> RoundKey{};
		// Methods
	};

public:
	struct RIJNDAEL_CIPHER_KEY
	{
	public:
		unsigned long k_len{};
		std::array<unsigned long, 64> RK;
		// Methods
	};
public:
	static void __cdecl Encrypt(unsigned char *pDest, unsigned char *pSrc, int32_t nLen, unsigned long *pdwKey);
	static void __cdecl Decrypt(unsigned char *pDest, unsigned char *pSrc, int32_t nLen, unsigned long *pdwKey);

private:
	static void __cdecl gen_tabs();
	static void __cdecl AES_EncKeySchedule(unsigned long *UserKey, CAESCipher::AES_ALG_INFO *AlgInfo);
	static void __cdecl AES_DecKeySchedule(unsigned long *UserKey, CAESCipher::AES_ALG_INFO *AlgInfo);
	static void __cdecl RIJNDAEL_KeySchedule(unsigned long *UserKey, unsigned long *e_key);
	static void __cdecl AES_Encrypt(void *CipherKey, unsigned char *Data);
	static void __cdecl AES_Decrypt(void *CipherKey, unsigned char *Data);
	static void __cdecl AES_EncInit(CAESCipher::AES_ALG_INFO *AlgInfo, unsigned long *pdwKey, unsigned char *pSrc, int32_t nLen);
	static void __cdecl AES_DecInit(CAESCipher::AES_ALG_INFO *AlgInfo, unsigned long *pdwKey, unsigned char *pSrc, int32_t nLen);
	static unsigned char __cdecl OFB_EncUpdate(CAESCipher::AES_ALG_INFO *AlgInfo, unsigned char *PlainTxt, unsigned long PlainTxtLen, unsigned char *CipherTxt, unsigned long *CipherTxtLen);
	static unsigned char __cdecl OFB_EncFinal(CAESCipher::AES_ALG_INFO *AlgInfo, unsigned char *CipherTxt, unsigned long *CipherTxtLen);
	static unsigned char __cdecl OFB_DecUpdate(CAESCipher::AES_ALG_INFO *AlgInfo, unsigned char *CipherTxt, unsigned long CipherTxtLen, unsigned char *PlainTxt, unsigned long *PlainTxtLen);
	static unsigned char __cdecl OFB_DecFinal(CAESCipher::AES_ALG_INFO *AlgInfo, unsigned char *PlainTxt, unsigned long *PlainTxtLen);
	static void __cdecl MorphKey(unsigned long *arg0, unsigned char arg1);
};
STATIC_ASSERT_SIZE(CAESCipher, 1);
