// UIPartyAdverTab.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "LayoutMan/LayoutMan.hpp"
#include "Wnd/Wnd.hpp"
#include "PartyQuestInfo/PartyQuestInfo.hpp"
#include "CtrlComboBox/CtrlComboBox.hpp"
#include "Packet/Packet.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "PartyCommon/PartyCommon.hpp"
#include "UIExpeditionTab/UIExpeditionTab.hpp"

// Level: 1 0x1504a
class CCtrlSelectPartyQuest;
// Level: 1 0x14fff
class TabPartyAdver;

class CCtrlSelectPartyQuest : public CCtrlPQuestItem
{
	// Nested
	// Fields
	// Methods
public:
	virtual ~CCtrlSelectPartyQuest();

public:
	void _dtor_0();

public:
	CCtrlSelectPartyQuest(const CCtrlSelectPartyQuest &arg0);

public:
	void _ctor_1(const CCtrlSelectPartyQuest &arg0);

public:
	CCtrlSelectPartyQuest();

public:
	void _ctor_0();

private:
	virtual ZXString16 GetBackUOL();

public:
	CCtrlSelectPartyQuest &operator=(const CCtrlSelectPartyQuest &arg0);

public:
	static CCtrlSelectPartyQuest &_op_assign_4(CCtrlSelectPartyQuest *pThis, const CCtrlSelectPartyQuest &arg0);
};
STATIC_ASSERT_SIZE(CCtrlSelectPartyQuest, 64);
class TabPartyAdver : public TabDlgInterface
{
	// Nested
public:
	enum ENUM_CTRL_ID
	{
		BUTTON_SELECT_QUEST_SEARCH = 0,
		BUTTON_SELECT_QUEST_PREV = 1,
		BUTTON_SELECT_QUEST_NEXT = 2,
		STATIC_SELECT_QUEST_START = 3,
		STATIC_SELECT_QUEST_END = 13,
		BUTTON_SELECT_PARTY_PREV = 14,
		BUTTON_SELECT_PARTY_NEXT = 15,
		BUTTON_SELECT_PARTY_REGIST_NEW = 16,
		BUTTON_SELECT_PARTY_DELETE_ADVER = 17,
		BUTTON_SELECT_PARTY_QUICK_JOIN = 18,
		BUTTON_SELECT_PARTY_REQUEST_APPLY = 19,
		BUTTON_SELECT_PARTY_WHISPER = 20,
		BUTTON_SELECT_PARTY_BACK = 21,
		STATIC_SELECT_PARTY_START = 22,
		STATIC_SELECT_PARTY_END = 32,
		BUTTON_REGIST_PARTY_COMMIT = 33,
		BUTTON_REGIST_PARTY_BACK = 34,
		COMBOBOX_PARTY_NAME = 35
	};
	enum ENUM_STATE
	{
		STATE_NONE = 0,
		STATE_QUEST_SELECT = 1,
		STATE_PARTY_SELECT = 2,
		STATE_REGIST_NEW = 3
	};
	enum QUEST_
	{
		QUEST_SHOW_PER_PAGE = 4,
		QUEST_UNIT_HEIGHT = 46
	};
	enum PARTY_
	{
		PARTY_UNIT_HEIGHT = 20,
		PARTY_LIST_X = 10,
		PARTY_LIST_Y = 127,
		PARTY_LIST_WIDTH = 244,
		PARTY_SHOW_PER_PAGE = 7
	};

	// Fields
private:
	ZMap<enum TabPartyAdver::ENUM_CTRL_ID, ZRef<CCtrlWnd>, enum TabPartyAdver::ENUM_CTRL_ID> m_mapControls;

private:
	ZMap<enum TabPartyAdver::ENUM_CTRL_ID, ZXString<char>, enum TabPartyAdver::ENUM_CTRL_ID> m_mapTooltip;

private:
	_x_com_ptr<IWzFont> m_pFontWhite;

private:
	_x_com_ptr<IWzFont> m_pFontAAAA;

private:
	_x_com_ptr<IWzFont> m_pFontMeso;

private:
	TabPartyAdver::ENUM_STATE m_nState;

private:
	long m_nQuestListShowCount{};

private:
	long m_nQuestListPage{};

private:
	long m_nSelectedQuestIndex{};

private:
	ZList<ZRef<ADVER_COMMON>> m_listPartyAdver;

private:
	long m_nPartyListPage{};

private:
	long m_nSelectedPartyIndex{};

private:
	CUIToolTip m_uiToolTipParty;

private:
	long m_nPartyMouseOverIndex{};

private:
	bool m_bStateChangableToSelectParty{};

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~TabPartyAdver();

public:
	void _dtor_0();

public:
	TabPartyAdver(const TabPartyAdver &arg0);

public:
	void _ctor_1(const TabPartyAdver &arg0);

public:
	TabPartyAdver(CWnd *pParent);

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
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void DoAction(long nAction, long nOption);

public:
	void OnPacket(long nRetCode, CInPacket &iPacket);

private:
	void SetState(TabPartyAdver::ENUM_STATE nState);

private:
	void InitState(TabPartyAdver::ENUM_STATE nState);

private:
	void EndState(TabPartyAdver::ENUM_STATE nState);

private:
	void AttachStatic(TabPartyAdver::ENUM_CTRL_ID nID, long x, long y, long width, long height);

private:
	void AttachBanner(TabPartyAdver::ENUM_CTRL_ID nID, long x, long y, ZRef<PartyQuestInfo> pInfo, int32_t bSelected);

private:
	void AttachButton(TabPartyAdver::ENUM_CTRL_ID nID, ZXString16 sUOL);

private:
	CCtrlComboBox *AttachComboBox(TabPartyAdver::ENUM_CTRL_ID nID, long nType, long x, long y, long width, long height, void *paramCombo);

private:
	void SetControlEnable(TabPartyAdver::ENUM_CTRL_ID nID, int32_t bEnable);

private:
	void SetControlVisible(TabPartyAdver::ENUM_CTRL_ID nID, int32_t bEnable);

private:
	void DetachCtrl(TabPartyAdver::ENUM_CTRL_ID nId);

private:
	void Draw_QuestSelect(_x_com_ptr<IWzCanvas> pCanvas);

private:
	long GetQuestMaxPage();

private:
	long GetSelectQuestID_0(long nIndex);

private:
	long GetSelectQuestID_1();

private:
	long GetIndexFromQuestID(long nPartyQuestID);

private:
	const PartyQuestInfo *GetSelectPartyQuestInfo();

private:
	void SendPartyAdverRequestPacket();

private:
	void OnButton_QuestPrev();

private:
	void OnButton_QuestNext();

private:
	void Draw_PartySelect(_x_com_ptr<IWzCanvas> pCanvas);

private:
	void DrawPartyUnit(const ADVER_COMMON *adver, _x_com_ptr<IWzCanvas> pCanvas, long x, long y, int32_t bSelected);

private:
	void RequestAdverRemoveFromNotiList();

private:
	void SendPartyApplyPacketTo(long nPartyID);

private:
	void SendPartyApplyPacket();

private:
	void SendAdverDeletePacket();

private:
	long GetSelectedPartyID();

private:
	const ADVER_COMMON *GetSelectedPartyAdver();

private:
	long FindQuickJoinParty();

private:
	void OnButton_Whisper();

private:
	long GetPartyMaxPage();

private:
	void ShowTooltip(long nSelectIndex);

private:
	void Draw_Regist(_x_com_ptr<IWzCanvas> pCanvas);

private:
	void SendPartyRegistCommitPacket();

private:
	int32_t IsTitleValid(ZXString<char> &msg);

private:
	long GetAdverPrice();

private:
	int32_t IsAbleToRegist();

public:
	TabPartyAdver &operator=(const TabPartyAdver &arg0);

public:
	static TabPartyAdver &_op_assign_49(TabPartyAdver *pThis, const TabPartyAdver &arg0);
};
STATIC_ASSERT_SIZE(TabPartyAdver, 2780);

int32_t __cdecl QuestFilter(ZRef<PartyQuestInfo> p);
