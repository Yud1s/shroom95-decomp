// UIStat.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "LayoutMan/LayoutMan.hpp"
#include "Wnd/Wnd.hpp"
#include "UIWnd/UIWnd.hpp"
#include "UIToolTip/UIToolTip.hpp"

// Level: 1 0xd83f
class CUIStatDetail;
// Level: 1 0xd86a
class CUIStat;

class CUIStatDetail : public CWnd, public TSingleton<CUIStatDetail>
{
	// Nested
public:
	enum ID_CTRL_BT_HIDE
	{
		ID_CTRL_BT_HIDE = 1000
	};
	enum k
	{
		kWidth = 178,
		kHeight = 247
	};
	// Fields
protected:
	CUIToolTip m_uiToolTip;

protected:
	CToolTipHelper m_ttHelper;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIStatDetail();

public:
	void _dtor_0();

public:
	CUIStatDetail(const CUIStatDetail &arg0);

public:
	void _ctor_1(const CUIStatDetail &arg0);

public:
	CUIStatDetail(long lLeft, long lTop);

public:
	void _ctor_0(long lLeft, long lTop);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Draw(const tagRECT *arg0);

public:
	virtual void ClearToolTip();

protected:
	long GetCriticalProp();

public:
	CUIStatDetail &operator=(const CUIStatDetail &arg0);

public:
	static CUIStatDetail &_op_assign_13(CUIStatDetail *pThis, const CUIStatDetail &arg0);
};
STATIC_ASSERT_SIZE(CUIStatDetail, 2812);
class CUIStat : public CUIWnd, public TSingleton<CUIStat>
{

public:
	static ZXString<char> ms_aStatName[4];
	// Nested
public:
	enum kA
	{
		kApUpNo = 6,
		kAutoApUpNo = 3
	};
	enum ID_CTRL_BT_
	{
		ID_CTRL_BT_APUP_HP = 2000,
		ID_CTRL_BT_APUP_MP = 2001,
		ID_CTRL_BT_APUP_STR = 2002,
		ID_CTRL_BT_APUP_DEX = 2003,
		ID_CTRL_BT_APUP_INT = 2004,
		ID_CTRL_BT_APUP_LUK = 2005,
		ID_CTRL_BT_DETAIL = 2006,
		ID_CTRL_BT_AUTO_APUP = 2007,
		ID_CTRL_BT_AUTO_APUP1 = 2008,
		ID_CTRL_BT_AUTO_APUP2 = 2009
	};
	enum k
	{
		kWidth = 172,
		kHeight = 337,
		kBtClose_X = 150,
		kBtClose_Y = 6
	};
	enum UnnamedEnum46400
	{
		STR = 0,
		DEX = 1,
		INT = 2,
		LUK = 3,
		STAT_NO = 4
	};
	// Fields
protected:
	std::array<ZRef<CCtrlOriginButton>, 6> m_pBtApUp{};

protected:
	std::array<ZRef<CCtrlOriginButton>, 3> m_pBtAutoApUp{};

protected:
	ZRef<CUIStatDetail> m_pUIStatDetail;

protected:
	_x_com_ptr<IWzFont> m_pFont;

protected:
	_x_com_ptr<IWzFont> m_pFontNo;

protected:
	CToolTipHelper m_ttHelper;

protected:
	_x_com_ptr<IWzFont> m_pFontCategory;

protected:
	_x_com_ptr<IWzProperty> m_pStatJob;

protected:
	int32_t m_bTip{};

protected:
	std::array<_x_com_ptr<IWzGr2DLayer>, 4> m_pLayerTip{};

private:
	std::array<_x_com_ptr<IWzCanvas>, 4> m_apCanvasDisabled{};

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIStat();

public:
	CUIStat();

public:
	void _dtor_0();

public:
	CUIStat(const CUIStat &arg0);

public:
	void _ctor_1(const CUIStat &arg0);

public:
	CUIStat(int32_t bTip);

public:
	void _ctor_0(int32_t bTip);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual void OnMoveWnd(long l, long t);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	void ResetInfo();

public:
	void ToggleDetail();

public:
	void DrawJob(long arg0, long arg1, long arg2, _x_com_ptr<IWzCanvas> arg3);

public:
	virtual int32_t IsMyAddon(CWnd *pWnd);

public:
	void AutoApUp(int32_t bWantToBeInfighter);

protected:
	void RestoreButtons();

protected:
	void EnableApUpButton();

protected:
	void CreateTip();
	CLASS_RTTI_(CUIStat, CUIWnd);

public:
	CUIStat &operator=(const CUIStat &arg0);

public:
	static CUIStat &_op_assign_22(CUIStat *pThis, const CUIStat &arg0);
};
STATIC_ASSERT_SIZE(CUIStat, 3008);
