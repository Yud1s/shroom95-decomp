// AntiPrivateServer.cpp
#include "AntiPrivateServer.hpp"
#include "AntiPrivateServer_regen.ipp"

 CCriticalSector::~CCriticalSector() {
	DeleteCriticalSection(&m_cs);
}
void CCriticalSector::_dtor_0() {
	return __sub_0005DB70(this, nullptr);
}
 CCriticalSector::CCriticalSector() {
	InitializeCriticalSection(&m_cs);
}
void CCriticalSector::_ctor_1() {
	return __sub_0005DB60(this, nullptr);
}
void CCriticalSector::Enter() {
	__sub_0005DB70(this, nullptr);
}
void CCriticalSector::Leave() {
	__sub_0005DB70(this, nullptr);
}

unsigned long __cdecl GetGPNMemCrc32(unsigned long dwImgBase, unsigned long dwGPNStart, unsigned long dwGPNSize) {
	return __sub_0005DC90(dwImgBase, dwGPNStart, dwGPNSize);
}
unsigned long __cdecl RVAToOffset(void* lpBase, unsigned long dwRva) {
	return __sub_0005DE00(lpBase, dwRva);
}
unsigned long __cdecl CheckSumForce(unsigned char* pbStart, unsigned long dwSize) {
	return __sub_0005DB80(pbStart, dwSize);
}
PROC* __stdcall MyGetProcAddress(HINSTANCE__* hModule, const char* lpProcName) {
	return __sub_0005E0A0(hModule, lpProcName);
}
HINSTANCE__* __cdecl InitSafeDll() {
	return __sub_0005E2F0();
}
void __cdecl HideDll(HINSTANCE__* hModule) {
	return __sub_0005EBD0(hModule);
}
