// ADBalloon.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

struct ADBalloonParam {
// Nested
// Fields
	public:  std::array<char, 512> URL{};
	public:  int32_t width{};
	public:  int32_t height{};
	public:  unsigned long timeout{};
	public:  HINSTANCE__* hInst;
};
STATIC_ASSERT_SIZE(ADBalloonParam, 528);

// 864058 4
static const ADBalloonParam* _D_PADP{};



int32_t __cdecl ShowADBalloon(const ADBalloonParam& adp);
int32_t __stdcall ADBallonProc(struct HWND__ *hwnd, uint32_t uMsg, uint32_t wParam, int32_t lParam);