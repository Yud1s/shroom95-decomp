// UIKeyConfig.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "GW/GW.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"
#include "DraggableItem/DraggableItem.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "UIWnd/UIWnd.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "Dialog/Dialog.hpp"
#include "LayoutMan/LayoutMan.hpp"

// Level: 1 0x14bf6
class CDraggableSkill;
// Level: 1 0x14be3
class CDraggableMenu;
// Level: 1 0xdac2
class CUIKeyConfig;

class CDraggableSkill : public IDraggable
{
	// Nested
public:
	enum  INVALID_INDEX
{
	INVALID_INDEX = 255
};
	// Fields
protected:
	long m_nSkillID{};

protected:
	int32_t m_bMacroSysSkill{};

protected:
	long m_nMacroIdx{};

protected:
	long m_nSkillIdx{};

protected:
	IUIMsgHandler *m_pSource{};
	// Methods
public:
	virtual ~CDraggableSkill();

public:
	void _dtor_0();

public:
	CDraggableSkill(const CDraggableSkill &arg0);

public:
	void _ctor_1(const CDraggableSkill &arg0);

public:
	CDraggableSkill(IWzGr2DLayer *pLayer, long nSkillID, IUIMsgHandler *pSource, int32_t bMacroSkill, long nMacroIdx, long nSkillIdx);

public:
	void _ctor_0(IWzGr2DLayer *pLayer, long nSkillID, IUIMsgHandler *pSource, int32_t bMacroSkill, long nMacroIdx, long nSkillIdx);

public:
	virtual int32_t OnDropped(IUIMsgHandler *pFrom, IUIMsgHandler *pTo, long rx, long ry);

public:
	virtual int32_t OnDoubleClicked();

protected:
	int32_t MapFuncKey(long rx, long ry, int32_t bOnStatusBar);

protected:
	int32_t MapMacro(long rx, long ry, int32_t bOnlyDelete, int32_t bDragFromToAllMacroUI);

public:
	CDraggableSkill &operator=(const CDraggableSkill &arg0);

public:
	static CDraggableSkill &_op_assign_7(CDraggableSkill *pThis, const CDraggableSkill &arg0);
};
STATIC_ASSERT_SIZE(CDraggableSkill, 44);
class CDraggableMenu : public IDraggable
{
	// Nested
	// Fields
protected:
	long m_nType{};

protected:
	long m_nMenuID{};

protected:
	int32_t m_bFromPalette{};

protected:
	IUIMsgHandler *m_pSource{};
	// Methods
public:
	virtual ~CDraggableMenu();

public:
	void _dtor_0();

public:
	CDraggableMenu(const CDraggableMenu &arg0);

public:
	void _ctor_1(const CDraggableMenu &arg0);

public:
	CDraggableMenu(IWzGr2DLayer *pLayer, long nType, long nMenuID, int32_t bFromPalette, IUIMsgHandler *pSource);

public:
	void _ctor_0(IWzGr2DLayer *pLayer, long nType, long nMenuID, int32_t bFromPalette, IUIMsgHandler *pSource);

public:
	virtual int32_t OnDropped(IUIMsgHandler *pFrom, IUIMsgHandler *pTo, long rx, long ry);

public:
	virtual int32_t OnDoubleClicked();

protected:
	int32_t MapFuncKey(long rx, long ry, int32_t bOnStatusBar);

protected:
	int32_t UnmapFuncKey(long arg0, long arg1);

protected:
	void QuickslotDropOut();

public:
	CDraggableMenu &operator=(const CDraggableMenu &arg0);

public:
	static CDraggableMenu &_op_assign_8(CDraggableMenu *pThis, const CDraggableMenu &arg0);
};
STATIC_ASSERT_SIZE(CDraggableMenu, 40);
class CUIKeyConfig : public CUIWnd, public TSingleton<CUIKeyConfig>
{
	// Nested
public:
	class CNoticeDlg : public CDialog
	{
		// Nested
	public:
		enum  ID_CTRL_
{
	ID_CTRL_EDIT_COUNT = 1000,
	ID_CTRL_EDIT_PRICE = 1001,
	ID_CTRL_EDIT_SET = 1002,
	ID_CTRL_CHECKBOX_SET = 1003
};
		// Fields
	protected:
		long m_nNoticeType{};

	protected:
		ZRef<CCtrlButton> m_pBtOK;

	protected:
		ZRef<CCtrlButton> m_pBtCancel;

	protected:
		CUIToolTip m_uiNoticeToolTip;
		// Methods
	public:
		virtual ~CNoticeDlg();

	public:
		void _dtor_0();

	public:
		CNoticeDlg(const CUIKeyConfig::CNoticeDlg &arg0);

	public:
		void _ctor_1(const CUIKeyConfig::CNoticeDlg &arg0);

	public:
		CNoticeDlg(CUIKeyConfig *pParent, long nType);

	public:
		void _ctor_0(CUIKeyConfig *pParent, long nType);

	public:
		virtual void OnCreate(void *pData);

	public:
		virtual void OnButtonClicked(uint32_t nId);

	public:
		virtual void OnKey(uint32_t wParam, int32_t lParam);

	public:
		virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

	protected:
		void SetToolTipInNotice(ZRef<CCtrlButton> pCurrentBt, const char *sDesc);

	public:
		CUIKeyConfig::CNoticeDlg &operator=(const CUIKeyConfig::CNoticeDlg &arg0);

	public:
		static CUIKeyConfig::CNoticeDlg &_op_assign_8(CUIKeyConfig::CNoticeDlg *pThis, const CUIKeyConfig::CNoticeDlg &arg0);
	};

public:
	struct FuncKeyMappedInfo
	{
		// Nested
		// Fields
	public:
		FUNCKEY_MAPPED fkm;

	public:
		long nNumber{};
		// Methods
	};

public:
	struct BasicKeyMappedInfo
	{
		// Nested
		// Fields
	public:
		FUNCKEY_MAPPED fkm;

	public:
		int32_t bMapped{};
		// Methods
	};

public:
	enum  kClose_
{
	kClose_X = 600,
	kClose_Y = 6
};
enum  UnnamedEnum55994
{
	BASIC_OFFSETX = 34,
	MAXICON_PERLINE = 17,
	KEY_LINE_NUM = 6,
	START_OFFSET = 11,
	NOTKEYSLOT_X = 6,
	NOTKEYSLOT_Y = 267,
	NOTKEYSLOT_OFFSETX = 34,
	NOTKEYSLOT_OFFSETY = 34
};
	// Fields
protected:
	std::array<FuncKeyMappedInfo, 89> m_aFuncKeyMappedInfo{};

protected:
	std::array<BasicKeyMappedInfo, 54> m_aBasicKeyMappedInfo{};

private:
	_x_com_ptr<IWzProperty> m_pImgFontNumber;

private:
	_x_com_ptr<IWzProperty> m_pKeyConfig;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerKey;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerMap;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerPalette;

private:
	int32_t m_bForcedDestroy{};

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIKeyConfig();

public:
	void _dtor_0();

public:
	CUIKeyConfig(const CUIKeyConfig &arg0);

public:
	void _ctor_1(const CUIKeyConfig &arg0);
	CTOR_DEFAULT(CUIKeyConfig);
public:
	CUIKeyConfig();

public:
	void _ctor_0();

public:
	long GetShortCutIndexByPos(long x, long y);

public:
	int32_t CompareValidateFuncKeyMappedInfo();

public:
	void RemoveFromPalette(long nType, long nIdx);

public:
	void AddToPalette(long nType, long nIdx);

public:
	void SetForcedDestroy();

public:
	void ReDrawKeyPalette();

protected:
	virtual void OnCreate(void *pData);

protected:
	virtual void Draw(const tagRECT *pRect);

protected:
	virtual void OnButtonClicked(uint32_t nId);

protected:
	virtual void OnDestroy();

protected:
	virtual int32_t OnMouseMove(long rx, long ry);

protected:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

protected:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

protected:
	void SetPaletteItems();

protected:
	void DrawKeys();

protected:
	void DrawKeyPalette();

protected:
	void DrawFuncKeyMapped();

protected:
	void TryBeginDragFuncKeyMappedIcon(long arg0, long arg1);

protected:
	void GetShortCutPos(long nIdx, long &x, long &y);

protected:
	void ResetPaletteItems();

protected:
	long GetPaletteSlotFromIdx(long nType, long nIdx);

protected:
	long GetIdxFromPaletteSlot(long nSlot);

protected:
	void OnQuickslotKeyConf();

private:
	void CalcKeyIconPosInfo();

	CLASS_RTTI_(CUIKeyConfig, CUIWnd);

public:
	CUIKeyConfig &operator=(const CUIKeyConfig &arg0);

public:
	static CUIKeyConfig &_op_assign_30(CUIKeyConfig *pThis, const CUIKeyConfig &arg0);
};
STATIC_ASSERT_SIZE(CUIKeyConfig, 4584);




