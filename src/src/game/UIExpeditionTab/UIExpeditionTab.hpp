// UIExpeditionTab.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CtrlWnd/CtrlWnd.hpp"
#include "DraggableItem/DraggableItem.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"
#include "Wnd/Wnd.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "DBBasic/DBBasic.hpp"

struct PartyQuestInfo;

// Level: 1 0x9f6f
class TabDlgInterface;
// Level: 1 0x154f3
class DragMember;
// Level: 1 0x1390a
class CCtrlStatic;
// Level: 2 0x138fa
class CCtrlPQuestItem;
// Level: 2 0x9fa4
class TabExpedition;
// Level: 3 0x15503
class CCtrlSelectQuest;

class TabDlgInterface : public ZRefCounted
{
	// Nested
	// Fields
protected:
	CWnd *m_pParent{};
	// Methods
public:
	TabDlgInterface() {}
	virtual ~TabDlgInterface();

public:
	void _dtor_0();

public:
	TabDlgInterface(const TabDlgInterface &arg0);

public:
	void _ctor_1(const TabDlgInterface &arg0);

public:
	TabDlgInterface(CWnd *arg0);

public:
	void _ctor_0(CWnd *arg0);

public:
	virtual void OnCreate(void *arg0);

public:
	virtual void Draw(_x_com_ptr<IWzCanvas> arg0);

public:
	virtual void OnButtonClicked(uint32_t arg0);

public:
	virtual void OnChildNotify(uint32_t arg0, uint32_t arg1, uint32_t arg2);

public:
	virtual void ActivateControls();

public:
	virtual void HideControls();

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnMoveWnd(long l, long t);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void DoAction(long nAction, long nOption);

public:
	TabDlgInterface &operator=(const TabDlgInterface &arg0);

public:
	static TabDlgInterface &_op_assign_13(TabDlgInterface *pThis, const TabDlgInterface &arg0);
};
STATIC_ASSERT_SIZE(TabDlgInterface, 16);
class DragMember : public IDraggable
{
	// Nested
	// Fields
private:
	unsigned long m_dwCharID{};
	// Methods
public:
	virtual ~DragMember();

public:
	void _dtor_0();

public:
	DragMember(const DragMember &arg0);

public:
	void _ctor_1(const DragMember &arg0);

public:
	DragMember(IWzGr2DLayer *pLayer, unsigned long dwCharID);

public:
	void _ctor_0(IWzGr2DLayer *pLayer, unsigned long dwCharID);

public:
	virtual int32_t OnDropped(IUIMsgHandler *pFrom, IUIMsgHandler *pTo, long rx, long ry);

public:
	DragMember &operator=(const DragMember &arg0);

public:
	static DragMember &_op_assign_4(DragMember *pThis, const DragMember &arg0);
};
STATIC_ASSERT_SIZE(DragMember, 28);
class CCtrlStatic : public CCtrlWnd
{
	// Nested
	// Fields
	// Methods
public:
	virtual ~CCtrlStatic();

public:
	void _dtor_0();

public:
	CCtrlStatic(const CCtrlStatic &arg0);

public:
	void _ctor_1(const CCtrlStatic &arg0);

public:
	CCtrlStatic();

public:
	void _ctor_0();

private:
	virtual void Draw(long rx, long ry, const tagRECT *pRect);

private:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

private:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	CCtrlStatic &operator=(const CCtrlStatic &arg0);

public:
	static CCtrlStatic &_op_assign_6(CCtrlStatic *pThis, const CCtrlStatic &arg0);
};
STATIC_ASSERT_SIZE(CCtrlStatic, 52);
class CCtrlPQuestItem : public CCtrlStatic
{
	// Nested
	// Fields
protected:
	ZRef<PartyQuestInfo> m_pInfo;

protected:
	int32_t m_bSelected{};
	// Methods
public:
	virtual ~CCtrlPQuestItem();

public:
	void _dtor_0();

public:
	CCtrlPQuestItem(const CCtrlPQuestItem &arg0);

public:
	void _ctor_1(const CCtrlPQuestItem &arg0);

public:
	CCtrlPQuestItem();

public:
	void _ctor_0();

public:
	virtual void Draw(long rx, long ry, const tagRECT *pRect);

public:
	virtual void CreateCtrl(CWnd *pParent, uint32_t nId, long l, long t, ZRef<PartyQuestInfo> pInfo, int32_t bSelected);

protected:
	virtual ZXString16 GetBackUOL();

public:
	CCtrlPQuestItem &operator=(const CCtrlPQuestItem &arg0);

public:
	static CCtrlPQuestItem &_op_assign_6(CCtrlPQuestItem *pThis, const CCtrlPQuestItem &arg0);
};
STATIC_ASSERT_SIZE(CCtrlPQuestItem, 64);
class TabExpedition : public TabDlgInterface
{
	// Nested
public:
	enum ENUM_CTRL_ID
	{
		CTRL_ID_START = 0,
		STATIC_SELECT_QUEST_START = 1,
		STATIC_SELECT_QUEST_END = 11,
		BUTTON_PAGE_PREV = 12,
		BUTTON_PAGE_NEXT = 13,
		BUTTON_CREATE = 14,
		BUTTON_SEARCH = 15,
		BUTTON_CHANGE_MASTER = 16,
		BUTTON_KICK = 17,
		BUTTON_WHISPER = 18,
		BUTTON_INVITE = 19,
		BUTTON_CHANGE_BOSS = 20,
		BUTTON_WITHDRAW = 21,
		BUTTON_CHAT = 22,
		STATIC_PARTY_MEMBER_START = 23,
		STATIC_PARTY_MEMBER_END = 53
	};
	enum ENUM_STATE
	{
		STATE_NONE = 0,
		STATE_CREATE = 1,
		STATE_ARRANGE = 2
	};
	enum UnnamedEnum37524
	{
		PARTY_REGION_WIDTH = 79,
		PARTY_REGION_HEADER_HEIGHT = 6,
		PARTY_REGION_HEIGHT = 96,
		PARTY_MEMBER_WIDTH = 79,
		PARTY_MEMBER_HEIGHT = 15,
		OFFSET_LEFT = 10,
		OFFSET_TOP = 109,
		PARTY_REGION_GAP_X = 3,
		PARTY_REGION_GAP_Y = 1
	};
	enum PARAM_SELECT_TYPE
	{
		PST_NONE = 0,
		PST_TARGET = 1,
		PST_MOVE = 2
	};
	enum PARAM_MEMBER_TYPE
	{
		PMT_NORMAL = 0,
		PMT_BOSS = 1,
		PMT_MASTER = 2
	};
	enum QUEST_
	{
		QUEST_SHOW_PER_PAGE = 4,
		QUEST_UNIT_HEIGHT = 46
	};
	// Fields
private:
	ZMap<enum TabExpedition::ENUM_CTRL_ID, ZRef<CCtrlWnd>, enum TabExpedition::ENUM_CTRL_ID> m_mapControls;

private:
	ZMap<enum TabExpedition::ENUM_CTRL_ID, ZXString<char>, enum TabExpedition::ENUM_CTRL_ID> m_mapTooltip;

private:
	TabExpedition::ENUM_STATE m_nState;

private:
	long m_nQuestListShowCount{};

private:
	long m_nQuestListPage{};

private:
	long m_nSelectedQuestIndex{};

private:
	long m_nSelectedMemberIndex{};

private:
	int32_t m_bRelocateMode{};

private:
	long m_nRelocateFromIndex{};

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~TabExpedition();

public:
	void _dtor_0();

public:
	TabExpedition(const TabExpedition &arg0);

public:
	void _ctor_1(const TabExpedition &arg0);

public:
	TabExpedition(CWnd *pParent);

public:
	void _ctor_0(CWnd *pParent);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(_x_com_ptr<IWzCanvas> pCanvas);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void ActivateControls();

public:
	virtual void HideControls();

public:
	virtual void OnMoveWnd(long l, long t);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	void OnExpeditionChanged();

public:
	void OnStatChanged();

private:
	void SetState(TabExpedition::ENUM_STATE nState);

private:
	void InitState(TabExpedition::ENUM_STATE nState);

private:
	void EndState(TabExpedition::ENUM_STATE nState);

private:
	void AttachStatic(TabExpedition::ENUM_CTRL_ID nID, long x, long y, long width, long height);

private:
	void AttachBanner(TabExpedition::ENUM_CTRL_ID nID, long x, long y, long width, long height, ZRef<PartyQuestInfo> pInfo, int32_t bSelected);

private:
	void AttachButton(TabExpedition::ENUM_CTRL_ID nID, ZXString16 sUOL);

private:
	void SetControlEnable(TabExpedition::ENUM_CTRL_ID nID, int32_t bEnable);

private:
	void SetControlVisible(TabExpedition::ENUM_CTRL_ID nID, int32_t bEnable);

private:
	void DetachCtrl(TabExpedition::ENUM_CTRL_ID nId);

private:
	void Draw_Create(_x_com_ptr<IWzCanvas> pCanvas);

private:
	long GetQuestMaxPage();

private:
	long GetSelectQuestID_1();

private:
	long GetSelectQuestID_0(long nIndex);

private:
	void Draw_Arrange(_x_com_ptr<IWzCanvas> pCanvas);

private:
	void DrawMember(_x_com_ptr<IWzCanvas> pCanvas, long x, long y, long nCharacterID, ZXString<char> sName, long nJob, long nLevel, TabExpedition::PARAM_SELECT_TYPE eSelectType, int32_t bOnline, TabExpedition::PARAM_MEMBER_TYPE eMemberType);

private:
	void DrawParty(_x_com_ptr<IWzCanvas> pCanvas, long x, long y, long nPartyIndex, PARTYMEMBER partyMember, long nMasterPartyIndex);

private:
	void OnInvite();

private:
	long GetSelectMemberID_0(long nIndex);

private:
	long GetSelectMemberID_1();

private:
	long GetSelectMemberInfo(long nIndex, ZXString<char> &sName, long &nLevel, long &nJob, long &nChannel, int32_t &bPartyBoss, int32_t &bExpMaster);

private:
	int32_t HasMsgHandler(IUIMsgHandler *pHandler);

private:
	long GetPartyIndexOfRegion(long x, long y);

private:
	long GetPartyRegionX(long arg0);

private:
	long GetPartyRegionY(long arg0);

private:
	void EndDragDrop();

public:
	TabExpedition &operator=(const TabExpedition &arg0);

public:
	static TabExpedition &_op_assign_39(TabExpedition *pThis, const TabExpedition &arg0);
};
STATIC_ASSERT_SIZE(TabExpedition, 112);
class CCtrlSelectQuest : public CCtrlPQuestItem
{
	// Nested
	// Fields
	// Methods
public:
	virtual ~CCtrlSelectQuest();

public:
	void _dtor_0();

public:
	CCtrlSelectQuest(const CCtrlSelectQuest &arg0);

public:
	void _ctor_1(const CCtrlSelectQuest &arg0);

public:
	CCtrlSelectQuest();

public:
	void _ctor_0();

private:
	virtual ZXString16 GetBackUOL();

public:
	CCtrlSelectQuest &operator=(const CCtrlSelectQuest &arg0);

public:
	static CCtrlSelectQuest &_op_assign_4(CCtrlSelectQuest *pThis, const CCtrlSelectQuest &arg0);
};
STATIC_ASSERT_SIZE(CCtrlSelectQuest, 64);

ZXString16 __cdecl GetJobIcon(long bOnline, int32_t arg1);


template<>
struct ZHash<TabExpedition::ENUM_CTRL_ID> {
	size_t operator()(TabExpedition::ENUM_CTRL_ID value) {
		return std::rotr((size_t)value, 5);
	}
};