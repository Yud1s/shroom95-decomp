// StdAfx.cpp
#include "StdAfx.hpp"
#include "StdAfx_regen.ipp"

 __ZAPILoader::~__ZAPILoader() {
	 UNIMPLEMENTED; // _dtor_0();
}
void __ZAPILoader::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 __ZAPILoader::__ZAPILoader() {
	UNIMPLEMENTED; //_ctor_1();
}
void __ZAPILoader::_ctor_1() {
	return __sub_00343070(this, nullptr);
}
void __ZAPILoader::MakeRawKey(uint64_t key, __ZAPILoader::RAWKEY& rawkey) {
	__sub_00341780(this, nullptr, key, rawkey);
}
void __ZAPILoader::ShowErrorMessageAndExit() {
	__sub_00341700(this, nullptr);
}
void __ZAPILoader::InitDecoderInfo() {
	__sub_00341720(this, nullptr);
}
void __ZAPILoader::LoadLibraries() {
	__sub_00341750(this, nullptr);
}
void __ZAPILoader::LoadAPI() {
	__sub_00342E10(this, nullptr);
}
void __ZAPILoader::FreeLibraries() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
uint32_t __ZAPILoader::DecodePackage(const void* raw_pSrc, uint32_t& pibot, void* raw_pDst) {
	return __sub_00342B30(this, nullptr, raw_pSrc, pibot, raw_pDst);
}
void __ZAPILoader::_Decode(unsigned char* pDst, const unsigned char* pSrc, uint32_t uLen) {
	__sub_003422C0(this, nullptr, pDst, pSrc, uLen);
}
uint64_t __ZAPILoader::Decode(uint64_t b, const __ZAPILoader::RAWKEY& rawkey) {
	return __sub_00341990(this, nullptr, b, rawkey);
}
const void* __ZAPILoader::_GetS() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

/*
 ZExceptionHandler::~ZExceptionHandler() {
	 UNIMPLEMENTED; // _dtor_0();
}
void ZExceptionHandler::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 ZExceptionHandler::ZExceptionHandler() {
	UNIMPLEMENTED; //_ctor_1();
}
void ZExceptionHandler::_ctor_1() {
	return __sub_00343390(this, nullptr);
}
void ZExceptionHandler::SetReportFileName(const char* arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void ZExceptionHandler::SetAppendMode(int32_t arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void ZExceptionHandler::SetHandler(PROC* arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void ZExceptionHandler::SetNoDialog(int32_t arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void ZExceptionHandler::SetNoMiniDump(int32_t arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void ZExceptionHandler::WriteMiniDumpNow() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long __stdcall ZExceptionHandler::RawUnhandledExceptionFilter(_EXCEPTION_POINTERS* pExceptionInfo) {
	return __sub_00343380(pExceptionInfo);
}
long ZExceptionHandler::UnhandledExceptionFilter(_EXCEPTION_POINTERS* pExceptionInfo) {
	return __sub_00342F50(this, nullptr, pExceptionInfo);
}
void ZExceptionHandler::GenerateExceptionReport(_EXCEPTION_POINTERS* pExceptionInfo) {
	__sub_00342B90(this, nullptr, pExceptionInfo);
}
char* __cdecl ZExceptionHandler::GetExceptionString(unsigned long dwCode) {
	return __sub_00341C40(dwCode);
}
int32_t __cdecl ZExceptionHandler::GetLogicalAddress(void* pAddr, char* sModule, unsigned long len, unsigned long& dwSection, unsigned long& dwOffset) {
	return __sub_003425C0(pAddr, sModule, len, dwSection, dwOffset);
}
void ZExceptionHandler::IntelStackWalk(_CONTEXT* pContext) {
	__sub_00342670(this, nullptr, pContext);
}
void ZExceptionHandler::DbgHelpStackWalk(_CONTEXT* pContext) {
	__sub_003427B0(this, nullptr, pContext);
}
int32_t ZExceptionHandler::InitDbgHelpFunctions() {
	return __sub_00341F10(this, nullptr);
}
int32_t __cdecl ZExceptionHandler::Report(const char* sFormat, none sBuff) {
	return __sub_00341EA0(this, sFormat, sBuff);
}
int32_t ZExceptionHandler::GenerateMiniDump(_EXCEPTION_POINTERS* pExceptionPointers) {
	return __sub_00342110(this, nullptr, pExceptionPointers);
}*/

int32_t __cdecl _LoadProc(HINSTANCE__* arg0) {
	return __sub_00341690(arg0);
}
void __cdecl ZtlEnterFatalSection(ZFatalSectionData* pfs) {
	return __sub_00341C00(pfs);
}
