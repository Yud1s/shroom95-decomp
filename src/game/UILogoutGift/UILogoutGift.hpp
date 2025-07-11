// UILogoutGift.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UIToolTip/UIToolTip.hpp"
#include "Dialog/Dialog.hpp"

// Level: 1 0x11af9
class CUILogoutGift;

class CUILogoutGift : public CDialog, public TSingleton<CUILogoutGift>
{
	// Nested
public:
	enum  ID_CTRL_BT_SELECT_
{
	ID_CTRL_BT_SELECT_0 = 1000,
	ID_CTRL_BT_SELECT_1 = 1001,
	ID_CTRL_BT_SELECT_2 = 1002
};
	// Fields
private:
	
	SINGLETON_PAD;
private:
	std::array<ZRef<CCtrlButton>, 3> m_pBtSelect;

private:
	long m_nMouseToolTipIndex{};

private:
	CUIToolTip m_uiToolTip;

private:
	std::array<long, 3> m_aCommodityID{};
	// Methods
public:
	virtual ~CUILogoutGift();

public:
	void _dtor_0();

public:
	CUILogoutGift(const CUILogoutGift &arg0);

public:
	void _ctor_1( const CUILogoutGift &arg0);

public:
	CUILogoutGift();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestory();

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	static int32_t __cdecl TryShowLogoutGiftDialog();

protected:
	int32_t ShowItemToolTip(ZRef<CS_COMMODITY> pComm, long rx, long ry);

public:
	CUILogoutGift &operator=(const CUILogoutGift &arg0);

public:
	static CUILogoutGift &_op_assign_12(CUILogoutGift *pThis, const CUILogoutGift &arg0);
};
STATIC_ASSERT_SIZE(CUILogoutGift, 2820);


