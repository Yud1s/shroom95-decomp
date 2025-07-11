// UIFriendGroup.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Dialog/Dialog.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "LayoutMan/LayoutMan.hpp"

class CCtrlEdit;
class CCtrlScrollBar;

// Level: 1 0x14489
class CUIFriendGroup;

class CUIFriendGroup : public CDialog
{
	// Nested
public:
	struct Friend
	{
		// Nested
		// Fields
	public:
		ZXString<char> sFriendName;

	public:
		ZXString<char> sGroupName;

	public:
		int32_t bChecked{};
		// Methods
	public:
		~Friend();

	public:
		void _dtor_0();

	public:
		Friend(const CUIFriendGroup::Friend &__that);

	public:
		void _ctor_1( const CUIFriendGroup::Friend &__that);

	public:
		Friend(ZXString<char> sFriendName, ZXString<char> sGroupName, int32_t bChecked);

	public:
		void _ctor_0( ZXString<char> sFriendName, ZXString<char> sGroupName, int32_t bChecked);

	public:
		Friend();

	public:
		void _ctor_3();

	public:
		CUIFriendGroup::Friend &operator=(const CUIFriendGroup::Friend &arg0);

	public:
		static CUIFriendGroup::Friend &_op_assign_4(CUIFriendGroup::Friend *pThis, const CUIFriendGroup::Friend &arg0);
	};

public:
	enum  UnnamedEnum83051
{
	BT_NO = 2,
	ID_CTRL_SCR = 3,
	ID_CTRL_EDIT_GROUPNAME = 4,
	ID_CTRL_CHECKBOX_0 = 5,
	ID_CTRL_CHECKBOX_1 = 6,
	ID_CTRL_CHECKBOX_2 = 7,
	ID_CTRL_CHECKBOX_3 = 8,
	ID_CTRL_CHECKBOX_4 = 9,
	ID_CTRL_CHECKBOX_5 = 10,
	ID_CTRL_CHECKBOX_6 = 11,
	CB_NO = 7
};
	// Fields
public:
	ZRef<CCtrlEdit> m_pEditGroupName;

public:
	ZArray<CUIFriendGroup::Friend> m_aFriends;

protected:
	ZRef<CCtrlScrollBar> m_pSB;

protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	std::array<ZRef<CCtrlCheckBox>, 7> m_pCheckBox;

protected:
	_x_com_ptr<IWzFont> m_pFontWhite;

protected:
	_x_com_ptr<IWzFont> m_pFontBlack;

protected:
	_x_com_ptr<IWzFont> m_pFontGray;

protected:
	ZXString<char> m_sGroupName_Orig;

protected:
	int32_t m_bAdd{};

protected:
	long m_nLineHeight{};

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIFriendGroup();

public:
	void _dtor_0();

public:
	CUIFriendGroup(const CUIFriendGroup &arg0);

public:
	void _ctor_1( const CUIFriendGroup &arg0);

public:
	CUIFriendGroup(long l, long t, ZXString<char> sGroupName, const ZArray<CUIFriendGroup::Friend> &aFriends, int32_t bAdd);

public:
	void _ctor_0( long l, long t, ZXString<char> sGroupName, const ZArray<CUIFriendGroup::Friend> &aFriends, int32_t bAdd);

public:
	virtual void SetRet(long nRet);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

protected:
	void SetScrollBar();

protected:
	int32_t OnOK();

	CLASS_RTTI_(CUIFriendGroup, CDialog);

public:
	CUIFriendGroup &operator=(const CUIFriendGroup &arg0);

public:
	static CUIFriendGroup &_op_assign_13(CUIFriendGroup *pThis, const CUIFriendGroup &arg0);
};
STATIC_ASSERT_SIZE(CUIFriendGroup, 272);


