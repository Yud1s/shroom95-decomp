// UIHelper.cpp
#include "UIHelper.hpp"
#include "UIHelper_regen.ipp"

_x_com_ptr<IWzGr2DLayer> __cdecl UIHelper::MakeBalloonTip(_x_com_ptr<IWzFont> arg0, long arg1, long arg2, long arg3, const ZArray<ZXString<char> >& arg4, _x_com_ptr<IWzGr2DLayer> arg5) {
	return __sub_003C9780(CreateNakedParam(arg0), arg1, arg2, arg3, arg4, CreateNakedParam(arg5));
}

