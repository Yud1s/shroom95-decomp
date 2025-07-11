// UIItemProtector.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "GW/GW.hpp"
#include "Packet/Packet.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "CtrlWnd/CtrlWnd.hpp"

// Level: 1 0x10cdb
class CUIItemProtector;

class CUIItemProtector : public CUniqueModeless
{
	// Nested
public:
	enum ID_CTRL_BT_
{
	ID_CTRL_BT_PROTECT = 2000,
	ID_CTRL_BT_CANCEL = 2001
};
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlButton> m_pBtProtect;

protected:
	ZRef<GW_ItemSlotBase> m_pSelectedItem;

protected:
	CUIToolTip m_uiToolTip;

protected:
	int32_t m_nItemTI{};

protected:
	int32_t m_nSlotPosition{};

protected:
	COutPacket m_oPacket;

protected:
	long m_nProtectDay{};

protected:
	_FILETIME m_ftExpireDate;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIItemProtector();

public:
	void _dtor_0();

public:
	CUIItemProtector(const CUIItemProtector &arg0);

public:
	void _ctor_1( const CUIItemProtector &arg0);

public:
	CUIItemProtector(COutPacket oPacket, long nProtectDay);

public:
	void _ctor_0( COutPacket oPacket, long nProtectDay);

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

	CLASS_RTTI_(CUIItemProtector, CUniqueModeless);

public:
	CUIItemProtector &operator=(const CUIItemProtector &arg0);

public:
	static CUIItemProtector &_op_assign_14(CUIItemProtector *pThis, const CUIItemProtector &arg0);
};
STATIC_ASSERT_SIZE(CUIItemProtector, 2860);


