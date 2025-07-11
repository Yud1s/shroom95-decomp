// ADBalloon.cpp
#include "ADBalloon.hpp"
#include "ADBalloon_regen.ipp"




int32_t __cdecl ShowADBalloon(const ADBalloonParam& adp) {
	return __sub_00029000(adp);
}

int32_t __stdcall ADBallonProc(struct HWND__ *hwnd, uint32_t uMsg, uint32_t wParam, int32_t lParam) {
	UNIMPLEMENTED;
	return 0; //TODO
}