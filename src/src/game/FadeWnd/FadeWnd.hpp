// FadeWnd.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Wnd/Wnd.hpp"
#include "Dialog/Dialog.hpp"
#include "CtrlWnd/CtrlWnd.hpp"

// Level: 1 0x94c7
class CFadeWnd;
// Level: 2 0x9337
class CUIFadeYesNo;

class CFadeWnd : public CDialog
{
	// Nested
public:
	enum UnnamedEnum37520
{
	MSMInvite = 0,
	FriendReq = 1,
	TradeInvite = 2,
	CashTradeInvite = 3,
	NewMemo = 4,
	PartyInvite = 5,
	AllianceInvite = 6,
	QuestClear = 7,
	GuildInvite = 8,
	UserAlarm = 9,
	ParcelAlarm = 10,
	PartyQuestAlarm = 11,
	FamilyInvite = 12,
	PartyApply = 13,
	ExpeditionInvite = 14,
	ExpeditionApply = 15,
	FollowRequest = 16,
	NewYearCardArrived = 17
};
enum FW_
{
	FW_START = 0,
	FW_PRE_FADEIN = 1,
	FW_FADEIN = 2,
	FW_GENERAL = 3,
	FW_FADEOUT = 4,
	FW_POST_FADEOUT = 5
};
	// Fields
protected:
	long m_a0{};

protected:
	long m_a{};

protected:
	long m_a1{};

protected:
	long m_t0{};

protected:
	long m_t{};

protected:
	long m_t1{};

protected:
	tagPOINT m_pt0{};

protected:
	tagPOINT m_pt{};

protected:
	tagPOINT m_pt1{};

protected:
	long m_nPhase{};

protected:
	long m_tPhase{};

protected:
	long m_tTimeOver{};

protected:
	int32_t m_bClose{};

protected:
	int32_t m_bUserAlarm{};

protected:
	int32_t m_bOK{true};

protected:
	long m_nType{-1};

protected:
	ZXString<char> m_sInviter;

protected:
	long m_nLevel{};

protected:
	long m_nJobCode{};

protected:
	long m_nExpQuestID{};

protected:
	unsigned long m_dwSN{};

protected:
	unsigned long m_dwFriendID{};
	// Methods
public:
	virtual ~CFadeWnd();

public:
	void _dtor_0();

public:
	CFadeWnd(const CFadeWnd &arg0);

public:
	void _ctor_1( const CFadeWnd &arg0) const;

public:
	CFadeWnd();

public:
	void _ctor_0();

public:
	void SetOption(long a0, long a, long a1, tagPOINT pt0, tagPOINT pt, tagPOINT pt1, long t0, long t, long t1);

public:
	void CreateFadeWnd(long nWidth, long nHeight, const wchar_t *sUOL, long nZ, int32_t bScreenCoord, void *pData, int32_t bSetFocus, CWnd::UIOrigin org);

public:
	void ResetTime();

public:
	void Close(int32_t bOK);

public:
	int32_t IsShowingUp() const;

public:
	virtual void Update();

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void Delete();

public:
	virtual void OnPreFadeIn();

public:
	virtual void OnPostFadeOut();

public:
	virtual void SendCloseMessage();

public:
	virtual unsigned long GetInviterID();

protected:
	void Fade(int32_t bFadeOut);

public:
	CFadeWnd &operator=(const CFadeWnd &arg0);

public:
	static CFadeWnd &_op_assign_16(CFadeWnd *pThis, const CFadeWnd &arg0);
};
STATIC_ASSERT_SIZE(CFadeWnd, 244);
class CUIFadeYesNo : public CFadeWnd
{
public:
	static inline std::atomic_int ms_dwAlarmCounter = 0;

	// Nested

enum UnnamedEnum37641
{
	ID_CTRL_BT_OK = 2000,
	ID_CTRL_BT_CANCEL = 2001,
	UISB_CHATLOG_BOTTOM = 80
};
enum MAX_WND_NUM
{
	MAX_WND_NUM = 100
};
enum k
{
	kAlarm_X = 440,
	kAlarm_Y = 159,
	kMemoAlarm_X = 439,
	kMemoAlarm_Y = 149
};
	// Fields
protected:
	long m_nChannelID{};

protected:
	ZXString<char> m_sFriend;

protected:
	unsigned long m_dwInviterID{};

protected:
	int32_t m_bGameOpt_Party{};

protected:
	int32_t m_bGameOpt_Guild{};

protected:
	unsigned long m_dwApplierID{};

protected:
	ZXString<char> m_sApplierName;

protected:
	uint16_t m_usQuestID{};

protected:
	long m_nUserAlarmType{};

protected:
	ZXString<char> m_sUser;

protected:
	ZXString<char> m_sSender;

protected:
	int32_t m_bQuickDelivery{};

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasIcon;

protected:
	_x_com_ptr<IWzFont> m_pFont;

protected:
	ZXString<char> m_sFollowRequester;

private:
	int32_t m_bOnceClicked{};
	// Methods
public:
	virtual ~CUIFadeYesNo();

public:
	void _dtor_0() const;

public:
	CUIFadeYesNo(const CUIFadeYesNo &arg0);

public:
	void _ctor_1( const CUIFadeYesNo &arg0) const;

public:
	CUIFadeYesNo();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void Delete();

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void SendCloseMessage();

public:
	void CreateMSMInvite(ZXString<char> sInviter, long nChannelID, unsigned long dwSN);

public:
	void CreateFriendReg(ZXString<char> sFriend, long nLevel, long nJobCode, unsigned long dwFriendID);

public:
	void CreatePartyInvite(ZXString<char> sInviter, long nLevel, long nJobCode, unsigned long dwInviterID, int32_t bPartyOpt);

public:
	void CreatePartyApply(ZXString<char> sApplierName, long nLevel, long nJobCode, unsigned long dwApplierID);

public:
	void CreateExpedtionInvite(ZXString<char> sInviter, long nLevel, long nJobCode, long nExpQuestID);

public:
	void CreateExpedtionApply(ZXString<char> sApplierName, long nLevel, long nJobCode, unsigned long dwApplierID);

public:
	void CreateTradeInvite(ZXString<char> sInviter, unsigned long dwSN, int32_t bCash);

public:
	void CreateGuildInvite(ZXString<char> sInviter, long nLevel, long nJobCode, unsigned long dwInviterID, int32_t bGuildOpt);

public:
	void CreateAllianceInvite(ZXString<char> sInviter, unsigned long dwInviterID);

public:
	void CreateQuestClear(uint16_t usQuestID);

public:
	void CreateUserAlarm(ZXString<char> sUser, long nType);

public:
	void CreateNewMemo();

public:
	void CreateParcelAlarm(ZXString<char> sSender, int32_t bQuickDelivery);

public:
	void CreateNewYearCardArrived(ZXString<char> sSender, unsigned long dwSN);

public:
	void CreatePartyQuestAlarm(uint16_t usQuestID);

public:
	void CreateFamilyInvite(ZXString<char> sInviter, long nLevel, long nJobCode, unsigned long dwInviterID);

public:
	void CreateFollowRequest(ZXString<char> sRequester, long nJobCode, long nLevel);

public:
	long GetType() const;

public:
	unsigned long GetFriendID();

public:
	uint16_t GetQuestID() const;

public:
	unsigned long GetRelatedValue(long nType) const;

public:
	ZXString<char> GetRelatedName(long nType);

public:
	unsigned long GetNewYearCardSN() const;

public:
	void MoveWndPosition();

public:
	virtual unsigned long GetInviterID();

protected:
	void TryShowMemoListDlg(long rx, long ry);

public:
	CUIFadeYesNo &operator=(const CUIFadeYesNo &arg0);

public:
	static CUIFadeYesNo &_op_assign_37(CUIFadeYesNo *pThis, const CUIFadeYesNo &arg0);
};
STATIC_ASSERT_SIZE(CUIFadeYesNo, 324);


