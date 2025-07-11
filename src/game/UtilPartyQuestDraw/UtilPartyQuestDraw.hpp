// UtilPartyQuestDraw.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "PartyQuestInfo/PartyQuestInfo.hpp"

// Level: 1 0x138e2
class CFontContainer;

class CFontContainer : public TSimpleSingleton<CFontContainer>
{
	// Nested
	// Fields
public:
	_x_com_ptr<IWzFont> m_pFont4444;

public:
	_x_com_ptr<IWzFont> m_pFont9999;

public:
	_x_com_ptr<IWzFont> m_pFontWhite;

public:
	_x_com_ptr<IWzFont> m_pFontOnline;

public:
	_x_com_ptr<IWzFont> m_pFontOffline;

public:
	_x_com_ptr<IWzFont> m_pFontExpMasterRed;

public:
	_x_com_ptr<IWzFont> m_pFontPartyBossYellow;
	// Methods
public:
	~CFontContainer();

public:
	void _dtor_0();

public:
	CFontContainer(const CFontContainer &arg0);

public:
	void _ctor_1( const CFontContainer &arg0);

public:
	CFontContainer();

public:
	void _ctor_0();

public:
	CFontContainer &operator=(const CFontContainer &arg0);

public:
	static CFontContainer &_op_assign_3(CFontContainer *pThis, const CFontContainer &arg0);
};
STATIC_ASSERT_SIZE(CFontContainer, 28);

void __cdecl DrawLevelRange(_x_com_ptr<IWzCanvas> pCanvas, long x, long y, long nLevel1, long nLevel2, int32_t bGray);
void __cdecl DrawQuestUnit2(const PartyQuestInfo *pInfo, _x_com_ptr<IWzCanvas> pCanvas, long x, long y, int32_t bByExp);
long __cdecl GetLevel();
CFontContainer *__cdecl GetFont();
void __cdecl DoDraw(const PartyQuestInfo *pCanvas, _x_com_ptr<IWzCanvas> x, long y, long bSelected, int32_t sUOL, ZXString16 arg5);
void __cdecl DrawDigitForLevel(_x_com_ptr<IWzCanvas> pCanvas, long x, long y, long number, int32_t bGray);
void __cdecl DrawNumberForLevel(_x_com_ptr<IWzCanvas> pCanvas, int x, int y, int number, bool gray);
