// UIIncubator.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CtrlWnd/CtrlWnd.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"
#include "GW/GW.hpp"
#include "UIToolTip/UIToolTip.hpp"

// Level: 1 0x10cf8
class CUIIncubator;

class CUIIncubator : public CUniqueModeless
{
	// Nested
public:
	struct UIinfo
	{
		// Nested
		// Fields
	public:
		tagPOINT ptPutItem{};

	public:
		tagPOINT offsetOverItem{};

	public:
		tagPOINT ptBtOk{};

	public:
		tagPOINT ptBtCancle{};

	public:
		tagPOINT ptResultEffect{};

	public:
		int32_t bResultEffect{};

	public:
		ZXString16 sResultEffUOL;
		// Methods
	public:
		~UIinfo();

	public:
		void _dtor_0();

	public:
		UIinfo(const CUIIncubator::UIinfo &arg0);

	public:
		void _ctor_1(const CUIIncubator::UIinfo &arg0);

	public:
		UIinfo();

	public:
		void _ctor_0();

	public:
		CUIIncubator::UIinfo &operator=(const CUIIncubator::UIinfo &arg0);

	public:
		static CUIIncubator::UIinfo &_op_assign_3(CUIIncubator::UIinfo *pThis, const CUIIncubator::UIinfo &arg0);
	};

public:
	enum ID_CTRL_BT_
	{
		ID_CTRL_BT_OK = 2000,
		ID_CTRL_BT_CANCEL = 2001
	};
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlButton> m_pBtOk;

protected:
	ZRef<GW_ItemSlotBase> m_pSelectedItem;

protected:
	CUIToolTip m_uiToolTip;

protected:
	long m_nPOS{};

protected:
	long m_nItemID{};

protected:
	long m_nItemTI{};

protected:
	long m_nSlotPosition{};

protected:
	_x_com_ptr<IWzProperty> m_pPropUIroot;

protected:
	ZXString16 m_sUIRoot;

protected:
	_x_com_ptr<IWzProperty> m_pPropUIInfo;

protected:
	ZXString16 m_sUIInfo;

protected:
	CUIIncubator::UIinfo m_UIinfo;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIIncubator();

public:
	void _dtor_0();

public:
	CUIIncubator(const CUIIncubator &arg0);

public:
	void _ctor_1(const CUIIncubator &arg0);

public:
	CUIIncubator(long nPOS, long nItemID, GW_ItemSlotBase *pItem, long nItemTI, long nSlotPosition);

public:
	void _ctor_0(long nPOS, long nItemID, GW_ItemSlotBase *pItem, long nItemTI, long nSlotPosition);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void ClearToolTip();

public:
	int32_t PutItem(GW_ItemSlotBase *pItem, long nItemTI, long nSlotPosition);
	CLASS_RTTI_(CUIIncubator, CUniqueModeless);

public:
	CUIIncubator &operator=(const CUIIncubator &arg0);

public:
	static CUIIncubator &_op_assign_14(CUIIncubator *pThis, const CUIIncubator &arg0);
};
STATIC_ASSERT_SIZE(CUIIncubator, 2904);
