// StartUpWnd.cpp
#include "StartUpWnd.hpp"
#include "StartUpWnd_regen.ipp"


long __stdcall StartUpWndProc(HWND__* hwnd, uint32_t uMsg, uint32_t wParam, long lParam) {
	return __sub_00320160(hwnd, uMsg, wParam, lParam);
}
int32_t __cdecl ShowStartUpWnd(const StartUpWndParam& sup) {
	return __sub_00320680(sup);
}
