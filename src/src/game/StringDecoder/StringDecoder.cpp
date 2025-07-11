// StringDecoder.cpp
#include "StringDecoder.hpp"

#include <fstream>

const unsigned char StringPool::ms_aKey[1]{};
const uint32_t StringPool::ms_nKeySize{};
const char *StringPool::ms_aString[1]{};
const uint32_t StringPool::ms_nSize{};
StringPool *StringPool::ms_pInstance{};

#include "StringDecoder_regen.ipp"



StringPool::~StringPool() = default;
void StringPool::_dtor_0()
{
    this->~StringPool();
}
StringPool::StringPool(const StringPool &arg0)
{
	_ctor_1( arg0);
}
void StringPool::_ctor_1( const StringPool &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
StringPool::StringPool()
{
	UNIMPLEMENTED; //_ctor_0();
}
void StringPool::_ctor_0()
{
	return __sub_003465D0(this, nullptr);
}
StringPool &__cdecl StringPool::GetInstance()
{
	return __sub_003466A0();
}
ZXString16 StringPool::GetStringW_(uint32_t nIdx, wchar_t __formal)
{
    ZFatalSectionGuard lock(m_lock);
    auto& str = m_apZWString[nIdx];
    if(str) {
        return *str;
    }

    ZXString<char> strA = GetString(nIdx);
    str = new ZXString16();
    str->AssignCharStr(static_cast<const char*>(strA));
    return *str;

    //ZXString16 result;
	//return *__sub_00346880(this, nullptr, &result, nIdx, __formal);
}
ZXString<char> StringPool::GetString(uint32_t nIdx, char __formal)
{
    ZFatalSectionGuard lock(m_lock);
    auto& str = m_apZMString[nIdx];
    //TODO something wrong second get is not name
    if(str) {
        return *str;
    }

    auto pStr = FileStringPool::GetInstance()->GetStringAt(nIdx);
    if(pStr == nullptr) {
        return {};
    }

    m_apZMString[nIdx] = new ZXString<char>(pStr);
    return *m_apZMString[nIdx];
}
ZXString<char> StringPool::GetString(uint32_t nIdx)
{
    return GetString(nIdx, 0);
    //ZXString<char> ret;
	//return *__sub_00003B30(this, nullptr, &ret, nIdx);
}
ZXString<char> StringPool::GetStringA(uint32_t nIdx)
{
    return GetString(nIdx, 0);
   // ZXString<char> ret;
	//return *__sub_00003B30(this, nullptr, &ret, nIdx);
}
ZXString16 StringPool::GetStringW(uint32_t nIdx)
{
    return GetStringW_(nIdx, 0);
    //ZXString16 result;
	//return *__sub_00003B60(this, nullptr, &result, nIdx);
}
Ztl_bstr_t StringPool::GetBSTR(uint32_t nIdx)
{

    return Ztl_bstr_t(GetStringW(nIdx).op_c_str());
	//return *__sub_00004BB0(this, nullptr, &result, nIdx);
}
StringPool &StringPool::operator=(const StringPool &arg0)
{
	return _op_assign_10(this, arg0);
}
StringPool &StringPool::_op_assign_10(StringPool *pThis, const StringPool &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}

ZXString16 StringPool::GetString_2(uint32_t nIdx, wchar_t __formal) {
    return GetStringW_(nIdx, __formal);

}

ZXString<char> StringPool::GetString_1(uint32_t nIdx, char __formal) {
    return GetString(nIdx, __formal);
}

ZXString16 _GetStrW(uint32_t nIdx)
{
    return StringPool::GetInstance().GetStringW(nIdx);
}

ZXString<char> _GetStr(uint32_t nIdx)
{
    return StringPool::GetInstance().GetString(nIdx);
}

Ztl_bstr_t _GetBSTR(uint32_t nIdx)
{
    return StringPool::GetInstance().GetBSTR(nIdx);
}

ZXString<char> StringPool::GetString_0(uint32_t nIdx) {
    auto res = GetString(nIdx, 0);
    return res;
}

StringPool::Key::~Key()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void StringPool::Key::_dtor_0()
{
	return __sub_00346460(this, nullptr);
}
StringPool::Key::Key(const StringPool::Key &arg0)
{
	_ctor_1( arg0);
}
void StringPool::Key::_ctor_1( const StringPool::Key &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
StringPool::Key::Key(const unsigned char *pKey, uint32_t nKeySize, uint32_t nSeed)
{
	_ctor_0( pKey, nKeySize, nSeed);
}
void StringPool::Key::_ctor_0( const unsigned char *pKey, uint32_t nKeySize, uint32_t nSeed)
{
	return __sub_00346470(this, nullptr, pKey, nKeySize, nSeed);
}
unsigned char StringPool::Key::GetKey(uint32_t nIdx)
{
	return __sub_00346230(this, nullptr, nIdx);
}
StringPool::Key &StringPool::Key::operator=(const StringPool::Key &arg0)
{
	return _op_assign_4(this, arg0);
}
StringPool::Key &StringPool::Key::_op_assign_4(StringPool::Key *pThis, const StringPool::Key &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}

void __cdecl rotatel_unsignedchar_(unsigned char *array, uint32_t size, uint32_t shift)
{
	return __sub_00346270(array, size, shift);
}
void __cdecl _anon_Decode_char_(ZXString<char> &sSrc, const unsigned char *pKey, uint32_t nKeySize, uint32_t nSeed)
{
	return __sub_00346520(sSrc, pKey, nKeySize, nSeed);
}

void FileStringPool::LoadFromFile(const wchar_t *filename) {
    std::ifstream input(filename, std::ios::binary);

    if(!input) {
        throw new std::exception("String pool file does not exist");
    }

    uint32_t offsetTableSize = 0;
    input.read(reinterpret_cast<char *>(&offsetTableSize), sizeof(offsetTableSize));

    // Read the offsets
    _offsets.resize(offsetTableSize);
    input.read(reinterpret_cast<char *>(_offsets.data()),
               static_cast<std::streamsize>(offsetTableSize * sizeof(uint32_t))); // NOLINT(*-misplaced-widening-cast)

    // Read the data table size
    uint32_t dataTableSize = 0;
    input.read(reinterpret_cast<char *>(&dataTableSize), sizeof(dataTableSize));

    // Read the data
    _data.resize(dataTableSize);
    input.read(reinterpret_cast<char *>(_data.data()),
               static_cast<std::streamsize>(dataTableSize * sizeof(uint8_t))); // NOLINT(*-misplaced-widening-cast)

    // Close the file
    input.close();
}

const char *FileStringPool::GetStringAt(uint32_t index) const {
    return reinterpret_cast<const char*>(_data.data() + _offsets[index]);
}

size_t FileStringPool::GetStringSizeAt(uint32_t index) const {
    if(index >= _offsets.size()) {
        return 0;
    }

    if(index == _offsets.size() - 1) {
        return _data.size() - _offsets[index];
    }

    return _offsets[index + 1] - _offsets[index];
}
