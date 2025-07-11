// StringDecoder.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "util/extra.h"


class FileStringPool: public TSingleton<FileStringPool>{
private:
    std::vector<uint32_t> _offsets{};
    std::vector<uint8_t> _data{};

public:
    FileStringPool() = default;
    void LoadFromFile(const wchar_t *filename);
    [[nodiscard]] const char* GetStringAt(uint32_t index) const;
    [[nodiscard]] size_t GetStringSizeAt(uint32_t index) const;
};

class StringPool : public ClassLevelLockable<StringPool>
{
	// Nested
public:
	class Key
	{
		// Nested
		// Fields
	private:
		ZArray<unsigned char> m_aKey;
		// Methods
	public:
		~Key();

	public:
		void _dtor_0();

	public:
		Key(const StringPool::Key &arg0);

	public:
		void _ctor_1( const StringPool::Key &arg0);

	public:
		Key(const unsigned char *pKey, uint32_t nKeySize, uint32_t nSeed);

	public:
		void _ctor_0( const unsigned char *pKey, uint32_t nKeySize, uint32_t nSeed);

	public:
		unsigned char GetKey(uint32_t nIdx);

	public:
		StringPool::Key &operator=(const StringPool::Key &arg0);

	public:
		static StringPool::Key &_op_assign_4(StringPool::Key *pThis, const StringPool::Key &arg0);
	};

public:
  static const unsigned char ms_aKey[1]; //TODO size 0
  static const uint32_t ms_nKeySize;
  static const char* ms_aString[1]; // TODO size 0
  static const uint32_t ms_nSize;
  static StringPool* ms_pInstance;
	// Fields
private:
	ZArray<ZXString<char> *> m_apZMString;
	ZArray<ZXString16 *> m_apZWString;
	ZFatalSection m_lock;

	// Methods
private:
	~StringPool();
    void _dtor_0();
    StringPool(const StringPool &arg0);
    void _ctor_1( const StringPool &arg0);

public:
	StringPool();
	void _ctor_0();
	static StringPool &__cdecl GetInstance();



public:
	ZXString<char> GetString(uint32_t nIdx);
	ZXString<char> GetString_0(uint32_t nIdx);
	ZXString<char> GetStringA(uint32_t nIdx);
	ZXString16 GetStringW(uint32_t nIdx);
	Ztl_bstr_t GetBSTR(uint32_t nIdx);
	StringPool &operator=(const StringPool &arg0);
	static StringPool &_op_assign_10(StringPool *pThis, const StringPool &arg0);

private:
    ZXString16 GetStringW_(uint32_t nIdx, wchar_t __formal);
    ZXString16 GetString_2(uint32_t nIdx, wchar_t __formal);
    ZXString<char> GetString(uint32_t nIdx, char __formal);
    ZXString<char> GetString_1(uint32_t nIdx, char __formal);
};
STATIC_ASSERT_SIZE(StringPool, 16);


ZXString16 _GetStrW(uint32_t nIdx);

ZXString<char> _GetStr(uint32_t nIdx);

Ztl_bstr_t _GetBSTR(uint32_t nIdx);

void __cdecl rotatel_unsignedchar_(unsigned char *array, uint32_t size, uint32_t shift);
void __cdecl _anon_Decode_char_(ZXString<char> &sSrc, const unsigned char *pKey, uint32_t nKeySize, uint32_t nSeed);
