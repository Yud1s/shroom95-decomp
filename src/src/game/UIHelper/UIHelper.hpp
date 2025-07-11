// UIHelper.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

// Level: 0 0x13508
class UIHelper;

class UIHelper
{
	// Nested
public:
	enum BALLOONTIP_DIR
{
	NE = 0,
	SE = 1,
	SW = 2,
	NW = 3
};
	// Fields
	// Methods
public:
	static _x_com_ptr<IWzGr2DLayer> __cdecl MakeBalloonTip(_x_com_ptr<IWzFont> arg0, long arg1, long arg2, long arg3, const ZArray<ZXString<char>> &arg4, _x_com_ptr<IWzGr2DLayer> arg5);
};
STATIC_ASSERT_SIZE(UIHelper, 1);


