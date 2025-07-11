// WndMan_IME.cpp
#include "WndMan_IME.hpp"
#include "WndMan_IME_regen.ipp"


int32_t __cdecl attr_prec(unsigned char b) {
	std::array attr{0,1,-1, 2, -2, 3, -4};
	return b < attr.size() ? attr[b] : 0;
}
