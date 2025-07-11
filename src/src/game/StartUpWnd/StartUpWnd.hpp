// StartUpWnd.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

struct StartUpWndParam
{
	// Nested
	// Fields
public:
	std::array<char, 512> URL{};

public:
	int32_t width{};

public:
	int32_t height{};

public:
	unsigned long timeout{};

public:
	HINSTANCE__ *hInst{};
};
STATIC_ASSERT_SIZE(StartUpWndParam, 528);

// 86B648 4
static const StartUpWndParam *_D_PSWP3{};

long __stdcall StartUpWndProc(HWND__ *hwnd, uint32_t uMsg, uint32_t wParam, long lParam);
int32_t __cdecl ShowStartUpWnd(const StartUpWndParam &sup);
