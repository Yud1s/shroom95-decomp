// UIGachaponRemote.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "AdminShopDlg/AdminShopDlg.hpp"

// Level: 1 0xed3b
class CUIGachaponRemote;

class CUIGachaponRemote : public CUniqueModeless
{
	// Nested
public:
	enum ID_CTRL_BT_
	{
		ID_CTRL_BT_CANCEL = 2000,
		ID_CTRL_BT_TOWN0 = 2001,
		ID_CTRL_BT_TOWN1 = 2002,
		ID_CTRL_BT_TOWN2 = 2003,
		ID_CTRL_BT_TOWN3 = 2004,
		ID_CTRL_BT_TOWN4 = 2005,
		ID_CTRL_BT_TOWN5 = 2006,
		ID_CTRL_BT_TOWN6 = 2007,
		ID_CTRL_BT_TOWN7 = 2008,
		ID_CTRL_BT_TOWN8 = 2009,
		ID_CTRL_BT_TOWN9 = 2010
	};
	enum MAX_TOWN_NUM
	{
		MAX_TOWN_NUM = 10
	};
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	std::array<ZRef<CCtrlButton>, 10> m_pBtTown;

protected:
	long m_nItemID{};
	// Methods
public:
	virtual ~CUIGachaponRemote();

public:
	void _dtor_0();

public:
	CUIGachaponRemote(const CUIGachaponRemote &arg0);

public:
	void _ctor_1( const CUIGachaponRemote &arg0);

public:
	CUIGachaponRemote(long nItemID);

public:
	void _ctor_0( long nItemID);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

	CLASS_RTTI_(CUIGachaponRemote, CUniqueModeless);

public:
	CUIGachaponRemote &operator=(const CUIGachaponRemote &arg0);

public:
	static CUIGachaponRemote &_op_assign_11(CUIGachaponRemote *pThis, const CUIGachaponRemote &arg0);
};
STATIC_ASSERT_SIZE(CUIGachaponRemote, 240);
