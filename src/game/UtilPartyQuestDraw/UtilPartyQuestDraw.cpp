// UtilPartyQuestDraw.cpp
#include "UtilPartyQuestDraw.hpp"
#include "UtilPartyQuestDraw_regen.ipp"

 CFontContainer::~CFontContainer() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CFontContainer::_dtor_0() {
	return __sub_0058F070(this, nullptr);
}
 CFontContainer::CFontContainer(const CFontContainer& arg0) {
	_ctor_1( arg0);
}
void CFontContainer::_ctor_1( const CFontContainer& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CFontContainer::CFontContainer() {
	UNIMPLEMENTED; //_ctor_0();
}
void CFontContainer::_ctor_0() {
	return __sub_0058F430(this, nullptr);
}
CFontContainer& CFontContainer::operator=(const CFontContainer& arg0) {
	return _op_assign_3(this, arg0);
}
CFontContainer& CFontContainer::_op_assign_3(CFontContainer* pThis, const CFontContainer& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

void __cdecl DrawLevelRange(_x_com_ptr<IWzCanvas> pCanvas, long x, long y, long nLevel1, long nLevel2, int32_t bGray) {
	return __sub_005900B0(CreateNakedParam(pCanvas), x, y, nLevel1, nLevel2, bGray);
}
void __cdecl DrawQuestUnit2(const PartyQuestInfo* pInfo, _x_com_ptr<IWzCanvas> pCanvas, long x, long y, int32_t bByExp) {
	return __sub_0058FDD0(pInfo, CreateNakedParam(pCanvas), x, y, bByExp);
}
long __cdecl GetLevel() {
	return __sub_0058F0E0();
}
CFontContainer* __cdecl GetFont() {
	return __sub_0058FDC0();
}
void __cdecl DoDraw(const PartyQuestInfo* pCanvas, _x_com_ptr<IWzCanvas> x, long y, long bSelected, int32_t sUOL, ZXString16 arg5) {
	return __sub_00590180(pCanvas, CreateNakedParam(x), y, bSelected, sUOL, CreateNakedParam(arg5));
}
void __cdecl DrawDigitForLevel(_x_com_ptr<IWzCanvas> pCanvas, long x, long y, long number, int32_t bGray) {
	return __sub_0058FB00(CreateNakedParam(pCanvas), x, y, number, bGray);
}

void __cdecl DrawNumberForLevel(_x_com_ptr<IWzCanvas> pCanvas, int x, int y, int number, bool gray) {
    std::array<int, 3> digits {
        (number / 100) % 10,
        (number / 10) % 10,
        number % 10
    };

    for (size_t i = 0; i < 3; i++) {
		if(i == 0 && digits[i] == 0) {
			continue;
		}

        auto xOff = x + i * 12;
        DrawDigitForLevel(pCanvas, x, y, digits[i], gray);
    }
}
