// UIFindFriend.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Wnd/Wnd.hpp"
#include "UIWnd/UIWnd.hpp"
#include "Packet/Packet.hpp"
#include "Avatar/Avatar.hpp"

class CCtrlComboBox;
class CCtrlScrollBar;

// Level: 1 0x11849
class CUIFindFriend;
// Level: 1 0x117c4
class CUIFindFriendDetail;

struct SearchInfo
{
	// Nested
	// Fields
public:
	unsigned long dwCharacterID{};

public:
	ZXString<char> sCharacterName;

public:
	unsigned char nLevel{};

public:
	short nJob{};

public:
	unsigned long dwPlayStyle{};

public:
	unsigned long dwActivityAregs{};

public:
	long nSorting{};

public:
	int32_t bAvatarLook{};

public:
	AvatarLook al;
};
STATIC_ASSERT_SIZE(SearchInfo, 548);

class CUIFindFriend : public CUIWnd, public TSingleton<CUIFindFriend>
{
	// Nested
public:
	enum  ID_CTRL_
{
	ID_CTRL_BT_CLOSE = 2000,
	ID_CTRL_BT_ADDBUDDY = 2001,
	ID_CTRL_BT_WHISPER = 2002,
	ID_CTRL_BT_FINDFRIEND = 2003,
	ID_CTRL_BT_DETAIL = 2004,
	ID_CTRL_CB_SORT = 2005,
	ID_CTRL_SCR_LIST = 2006
};
enum  UnnamedEnum71724
{
	kBtClose_X = 162,
	kBtClose_Y = 7,
	kWidth = 181,
	kHeight = 309,
	kList_Margin_X = 10,
	KList_Width = 145,
	kScrList_X = 158,
	kScrList_Y = 80,
	kScrList_Len = 183,
	kScrList_Unit = 20,
	kDetailX = 181,
	kDetailY = 117
};
	// Fields
private:
	ZRef<CCtrlComboBox> m_pCBSort;

private:
	ZRef<CCtrlButton> m_pBtAddBuddy;

private:
	ZRef<CCtrlButton> m_pBtWhisper;

private:
	ZRef<CCtrlButton> m_pBtFindFriend;

private:
	ZRef<CCtrlButton> m_pBtDetail;

private:
	ZRef<CCtrlScrollBar> m_pSBList;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerLoading;

private:
	ZRef<SearchInfo> m_pMyInfo;

private:
	long m_nSelectList{};

private:
	ZList<ZRef<SearchInfo>> m_lSearchList;

protected:
	ZRef<CUIFindFriendDetail> m_pUIDetail;
	// Methods
public:
	virtual ~CUIFindFriend();

public:
	void _dtor_0();

public:
	CUIFindFriend(const CUIFindFriend &arg0);

public:
	void _ctor_1( const CUIFindFriend &arg0);
	CTOR_DEFAULT(CUIFindFriend);
public:
	CUIFindFriend();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnMoveWnd(long l, long t);

public:
	virtual int32_t IsMyAddon(CWnd *pWnd);

public:
	void ListSorting(long nType);

public:
	void SendMyInfoRequest();

public:
	void SendSearchRequest();

public:
	void OnMyInfoResult(CInPacket &iPacket);

public:
	void OnSearchResult(CInPacket &iPacket);

public:
	void OnRequestError(long nErr);

public:
	void OnAddBuddy();

public:
	void OnWhisper();

public:
	void OnToggleDetail();

public:
	void OnToggleDetailClose();

	CLASS_RTTI_(CUIFindFriend, CUIWnd);

public:
	CUIFindFriend &operator=(const CUIFindFriend &arg0);

public:
	static CUIFindFriend &_op_assign_26(CUIFindFriend *pThis, const CUIFindFriend &arg0);
};
STATIC_ASSERT_SIZE(CUIFindFriend, 2916);
class CUIFindFriendDetail : public CWnd, public TSingleton<CUIFindFriendDetail>
{
	// Nested
public:
enum  ID_CTRL_
{
	ID_CTRL_BT_CLOSE = 2000,
	ID_CTRL_SCR_LIST1 = 2001,
	ID_CTRL_SCR_LIST2 = 2002
};
enum  UnnamedEnum67007
{
	kWidth = 291,
	kHeight = 190,
	kList_Margin_X = 147,
	KList_Width = 99,
	kScrList1_X = 247,
	kScrList1_Y = 100,
	kScrList1_Len = 33,
	kScrList1_Unit = 12,
	kScrList2_X = 247,
	kScrList2_Y = 136,
	kScrList2_Len = 33,
	kScrList2_Unit = 12
};
	// Fields
private:
	ZRef<CAvatar> m_pAvatarLook;

private:
	ZRef<SearchInfo> m_pSearchInfo;

private:
	ZArray<ZXString<char>> m_aPlayStyle;

private:
	ZArray<ZXString<char>> m_aActivityAregs;

private:
	ZRef<CCtrlButton> m_pBtClose;

private:
	ZRef<CCtrlScrollBar> m_pSBList1;

private:
	ZRef<CCtrlScrollBar> m_pSBList2;
	// Methods
public:
	virtual ~CUIFindFriendDetail();

public:
	void _dtor_0();

public:
	CUIFindFriendDetail(const CUIFindFriendDetail &arg0);

public:
	void _ctor_1( const CUIFindFriendDetail &arg0);

public:
	CUIFindFriendDetail(long lLeft, long lTop);

public:
	void _ctor_0( long lLeft, long lTop);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	void SetDetailInfo(ZRef<SearchInfo> pSearchInfo);

public:
	void OnDetailInfoResult(CInPacket &iPacket);

	CLASS_RTTI_(CUIFindFriendDetail, CWnd);

public:
	CUIFindFriendDetail &operator=(const CUIFindFriendDetail &arg0);

public:
	static CUIFindFriendDetail &_op_assign_13(CUIFindFriendDetail *pThis, const CUIFindFriendDetail &arg0);
};
STATIC_ASSERT_SIZE(CUIFindFriendDetail, 176);


