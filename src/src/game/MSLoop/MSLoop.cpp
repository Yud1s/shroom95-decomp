// MSLoop.cpp
#include "MSLoop.hpp"
#include "MSLoop_regen.ipp"


char** __cdecl GetDevMultiSz(void* Devs, _SP_DEVINFO_DATA* DevInfo, unsigned long Prop) {
	return __sub_00269F40(Devs, DevInfo, Prop);
}
char** __cdecl GetMultiSzIndexArray(char* MultiSz) {
	return __sub_00269EC0(MultiSz);
}
int32_t __cdecl _tcsicmp(const char* _String1, const char* _String2) {
	return __sub_00269D20(_String1, _String2);
}
void __cdecl DelMultiSz(char** Array) {
	return __sub_0026A020(Array);
}
int32_t __cdecl Remove(void* Devs, _SP_DEVINFO_DATA* DevInfo, unsigned long Index) {
	return __sub_00269530(Devs, DevInfo, Index);
}
int32_t __cdecl WildCompareHwIds(char** Array, const none& MatchEntry) {
	return __sub_00269E80(Array, MatchEntry);
}
int32_t __cdecl WildCardMatch(const char* Item, const none& MatchEntry) {
	return __sub_00269D30(Item, MatchEntry);
}
