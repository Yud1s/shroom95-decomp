// UIKarma.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "LayoutMan/LayoutMan.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"
#include "GW/GW.hpp"

// Level: 1 0x11448
class CUIKarmaDlg;

class CUIKarmaDlg : public CUniqueModeless
{
	// Nested
	// Fields
private:
	long m_nPOS{};

private:
	long m_nItemID{};

private:
	long m_nTargetTI{};

private:
	long m_nTargetPOS{};

private:
	long m_nKarmaType{};

private:
	ZRef<GW_ItemSlotBase> m_pItem;

private:
	CUIToolTip m_uiToolTip;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIKarmaDlg();

public:
	void _dtor_0();

public:
	CUIKarmaDlg(const CUIKarmaDlg &arg0);

public:
	void _ctor_1( const CUIKarmaDlg &arg0);

public:
	CUIKarmaDlg(long nPOS, long nItemID);

public:
	void _ctor_0( long nPOS, long nItemID);

public:
	virtual void OnCreate(void *pData);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	int32_t PutItem(GW_ItemSlotBase *pItem, long nItemTI, long nSlotPosition);

private:
	int32_t _SendConsumeCashItemUseRequest();

	CLASS_RTTI_(CUIKarmaDlg, CUniqueModeless);

public:
	CUIKarmaDlg &operator=(const CUIKarmaDlg &arg0);

public:
	static CUIKarmaDlg &_op_assign_14(CUIKarmaDlg *pThis, const CUIKarmaDlg &arg0);
};
STATIC_ASSERT_SIZE(CUIKarmaDlg, 2828);
