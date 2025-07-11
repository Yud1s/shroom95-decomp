// UIWnd.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Wnd/Wnd.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "UIToolTip/UIToolTip.hpp"
// External
class CCtrlButton;

// Level: 1 0x2e08
class CUIWnd;

class CUIWnd : public CWnd
{
	// Nested
public:
enum ID_CTRL_BT_CLOSE: int32_t
{
	ID_CTRL_BT_CLOSE = 1000
};
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	CUIToolTip m_uiToolTip;

protected:
	int32_t m_nUIType{};

protected:
	int32_t m_nBtCloseType{};

protected:
	int32_t m_nBtCloseX{};

protected:
	int32_t m_nBtCloseY{};

protected:
	int32_t m_nBackgrndX{};

protected:
	int32_t m_nBackgrndY{};

protected:
	int32_t m_nSmallScreenX{};

protected:
	int32_t m_nSmallScreenY{};

protected:
	int32_t m_nLargeScreenX{};

protected:
	int32_t m_nLargeScreenY{};
//TODO
public:
	bool m_bIsLargeMode{};
//TODO
public:
	bool m_bPosSave{};
// TODO
public:
	bool m_bBackgrnd{};
public:
	bool m_bPadding{};
	// TODO
public:
	int32_t m_nOption{};

protected:
	ZArray<unsigned char> m_abOption;

// TODO
public:
	ZXString16 m_sBackgrndUOL;
	// Methods
public:
	CUIWnd()
	{
		// TODO usually no defualt
	}

public:
	virtual ~CUIWnd();

public:
	void _dtor_0();

public:
	CUIWnd(const CUIWnd &arg0);

public:
	void _ctor_1( const CUIWnd &arg0);

public:
	CUIWnd(int32_t nUIType, int32_t closeType, int32_t closeX, int32_t closeY, const wchar_t *sBackgrndUOL, int32_t nBackgrndX, int32_t nBackgrndY, int32_t bMultiBg);

public:
	void _ctor_0( int32_t nUIType, int32_t closeType, int32_t closeX, int32_t closeY, const wchar_t *sBackgrndUOL, int32_t nBackgrndX, int32_t nBackgrndY, int32_t bMultiBg);

public:
	CUIWnd(int32_t nUIType, int32_t closeType, int32_t closeX, int32_t closeY, int32_t bBackgrnd, int32_t nBackgrndX, int32_t nBackgrndY);

public:
	void _ctor_3( int32_t nUIType, int32_t closeType, int32_t closeX, int32_t closeY, int32_t bBackgrnd, int32_t nBackgrndX, int32_t nBackgrndY);

public:
	void CreateUIWndPosSaved(long w, long h, long z);

public:
	void CreateUIWndPosForced(long smallL, long smallT, long largeL, long largeT, long w, long h, long z);

public:
	virtual void OnCreate(void *pData, ZXString16 sUOL, int32_t bMultiBg);
	void OnCreate_1(void *pData, ZXString16 sUOL, int32_t bMultiBg) {
		this->OnCreate(pData, sUOL, bMultiBg);
	}

public:
	virtual void OnCreate(void *pData);

	void OnCreate_0(void *pData) {
		this->OnCreate(pData);
	}

public:
	virtual void OnDestroy();

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void ClearToolTip();

public:
	void ReloadBackgrnd(int32_t bMultiBg);

public:
	virtual void SetScreenMode(bool bIsLarge, bool bNeedInvalidateTabs);

protected:
	ZXString16 GetResName();

CLASS_RTTI_(CUIWnd, CWnd);

public:
	CUIWnd &operator=(const CUIWnd &arg0);

public:
	static CUIWnd &_op_assign_21(CUIWnd *pThis, const CUIWnd &arg0);
};

STATIC_ASSERT_OFFSET_OF(CUIWnd, m_bIsLargeMode, 2808);
STATIC_ASSERT_OFFSET_OF(CUIWnd, m_bPosSave, 2809);
STATIC_ASSERT_OFFSET_OF(CUIWnd, m_bBackgrnd, 2810);
STATIC_ASSERT_OFFSET_OF(CUIWnd, m_nOption, 2812);
STATIC_ASSERT_OFFSET_OF(CUIWnd, m_sBackgrndUOL, 0x0b04);
STATIC_ASSERT_SIZE(CUIWnd, 2824);

