// UIEnchantDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UIToolTip/UIToolTip.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"
#include "GW/GW.hpp"
#include "CtrlWnd/CtrlWnd.hpp"

// Level: 1 0x10b8f
class CUIEnchantDlg;

class CUIEnchantDlg : public CUniqueModeless
{
	// Nested
public:
	enum ID_CTRL_WHITESCROLL_COMBO
	{
		ID_CTRL_WHITESCROLL_COMBO = 5000
	};

	// Fields
protected:
	ZRef<GW_ItemSlotBase> m_pSelectedItem;

protected:
	ZRef<GW_ItemSlotBase> m_pClonedItem;

protected:
	long m_nItemTI{};

protected:
	long m_nSlotPosition{};

protected:
	CUIToolTip m_uiToolTip;

protected:
	int32_t m_bRequestSent{};

protected:
	int32_t m_bReceivedResult{};

protected:
	int32_t m_bSuccess{};

protected:
	int32_t m_bCursed{};

protected:
	long m_nEnchantCategory{};

protected:
	int32_t m_bRecoverable{};

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	ZRef<CCtrlCheckBox> m_pCheckWhiteScroll;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerEffect;

protected:
	_x_com_ptr<IWzCanvas> m_apCanvasGuide;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIEnchantDlg();

public:
	void _dtor_0();

public:
	CUIEnchantDlg(const CUIEnchantDlg &arg0);

public:
	void _ctor_1(const CUIEnchantDlg &arg0);

public:
	CUIEnchantDlg();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Update();

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	int32_t PutItem(GW_ItemSlotBase *pItem, long nItemTI, long nSlotPosition);

public:
	void ShowEffect();

public:
	void SetResult(int32_t bSuccess, int32_t bCursed, long nEnchantCategory, int32_t bRecoverable);

public:
	void ShowResult();

public:
	long GetSlotPosition();

public:
	int32_t IsRequestSent();

public:
	void EnableWhiteScrollCheck(int32_t bEnable);

public:
	long GetWhiteScrollCheck();

public:
	int32_t IsOKToShowResult();

public:
	void RefreshToolTip();

private:
	ZRef<GW_ItemSlotBase> MakeClone(ZRef<GW_ItemSlotBase> pSrc);
	CLASS_RTTI_(CUIEnchantDlg, CUniqueModeless);

public:
	CUIEnchantDlg &operator=(const CUIEnchantDlg &arg0);

public:
	static CUIEnchantDlg &_op_assign_24(CUIEnchantDlg *pThis, const CUIEnchantDlg &arg0);
};
STATIC_ASSERT_SIZE(CUIEnchantDlg, 2880);
