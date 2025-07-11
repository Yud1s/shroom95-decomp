// UIMessenger.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"
#include "Wnd/Wnd.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "ChatHelper/ChatHelper.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"

// Level: 1 0xdb16
class CUIMessenger;

class CUIMessenger : public CWnd, public TSingleton<CUIMessenger>
{
	// Nested
public:
	struct ChatTextInfo
	{
		// Nested
		// Fields
	public:
		ZXString16 sChatText;

	public:
		FONT_TYPE ftColor;
		// Methods
	public:
		~ChatTextInfo();

	public:
		void _dtor_0();

	public:
		ChatTextInfo(const CUIMessenger::ChatTextInfo &arg0);

	public:
		void _ctor_1( const CUIMessenger::ChatTextInfo &arg0);

	public:
		ChatTextInfo();

	public:
		void _ctor_0();

	public:
		CUIMessenger::ChatTextInfo &operator=(const CUIMessenger::ChatTextInfo &arg0);

	public:
		static CUIMessenger::ChatTextInfo &_op_assign_3(CUIMessenger::ChatTextInfo *pThis, const CUIMessenger::ChatTextInfo &arg0);
	};

public:
	struct CHARACTER
	{
		// Nested
		// Fields
	public:
		ZRef<CAvatar> pAvatar;

	public:
		_x_com_ptr<IWzGr2DLayer> pIDTag;

	public:
		_x_com_ptr<IWzGr2DLayer> pBalloon;

	public:
		int32_t bCharged{};

	public:
		int32_t bInputState{};

	public:
		long nChannelID{};

	public:
		Ztl_bstr_t sID;
		// Methods
	public:
		~CHARACTER();

	public:
		void _dtor_0();

	public:
		CHARACTER(const CUIMessenger::CHARACTER &arg0);

	public:
		void _ctor_1( const CUIMessenger::CHARACTER &arg0);

	CTOR_DEFAULT(CHARACTER)
	public:
		CHARACTER();

	public:
		void _ctor_0();

	public:
		void Clear();

	public:
		void Hide();

	public:
		CUIMessenger::CHARACTER &operator=(const CUIMessenger::CHARACTER &arg0);

	public:
		static CUIMessenger::CHARACTER &_op_assign_5(CUIMessenger::CHARACTER *pThis, const CUIMessenger::CHARACTER &arg0);
	};

public:
enum  ID_CTRL_
{
	ID_CTRL_BT_CLOSE = 1000,
	ID_CTRL_BT_MINIMIZE = 1001,
	ID_CTRL_BT_MAXIMIZE = 1002,
	ID_CTRL_BT_ENTER = 1003,
	ID_CTRL_BT_CLAIM = 1004,
	ID_CTRL_EDIT_CHAT = 1005,
	ID_CTRL_SCR_CHAT = 1006
};
enum  MAX_CHARACTER
{
	MAX_CHARACTER = 3
};
enum  CHATLOG_LINEMAX
{
	CHATLOG_LINEMAX = 1000
};
	// Fields
protected:
	int32_t m_nState{};

protected:
	long m_nTextLineCount{};

protected:
	int32_t m_bInputState{};

protected:
	long m_tRestUpdateState{};

protected:
	long m_nBlink{};

protected:
	ZArray<CUIMessenger::ChatTextInfo> m_aChatText;

protected:
	_x_com_ptr<IWzFont> m_pFontText;

protected:
	_x_com_ptr<IWzFont> m_pFontID;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerBlink;

protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	ZRef<CCtrlButton> m_pBtMinimize;

protected:
	ZRef<CCtrlButton> m_pBtMaximize;

protected:
	ZRef<CCtrlButton> m_pBtEnter;

protected:
	ZRef<CCtrlButton> m_pBtClaim;

protected:
	ZRef<CCtrlEdit> m_pEditChat;

protected:
	ZRef<CCtrlScrollBar> m_pSB;

protected:
	std::array<CUIMessenger::CHARACTER, 3> m_aCharacter{};

protected:
	long m_nSelfCharacter{};

protected:
	CChatHelper m_chatHelper;

protected:
	CUIToolTip m_uiToolTip;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIMessenger();

public:
	void _dtor_0();

public:
	CUIMessenger(const CUIMessenger &arg0);

public:
	void _ctor_1( const CUIMessenger &arg0);

public:
	CUIMessenger(unsigned long dwJoinSN);

public:
	void _ctor_0( unsigned long dwJoinSN);

public:
	static int32_t __cdecl TryNew(unsigned long dwSN);

public:
	void TryDelete();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void ClearToolTip();

public:
	virtual void Update();

public:
	void SetState(long nState);

public:
	void OnSelfAvatarChanged(const AvatarLook &al);

public:
	void SendInviteMsg(ZXString<char> sTarget);

public:
	static void __cdecl OnPacket(CInPacket &iPacket);

public:
	void OnEnter_0(long nIdx, const AvatarLook &al, const char *sID, long nChannelID, int32_t bNew);

public:
	void OnEnter_1(CInPacket &iPacket);

public:
	void OnSelfEnterResult(CInPacket &iPacket);

public:
	void OnSelfEnter(long nIdx, int32_t bNew);

public:
	void OnLeave_0(long nIdx);

public:
	void OnLeave_1(CInPacket &iPacket);

public:
	static void __cdecl OnInvite(CInPacket &iPacket);

public:
	void OnInviteResult(CInPacket &iPacket);

public:
	void OnChat(CInPacket &iPacket);

public:
	void OnBlocked(CInPacket &iPacket);

public:
	void OnAvatar(CInPacket &iPacket);

public:
	void OnMigrated(CInPacket &iPacket);

public:
	void SetAvatar(long arg0, const AvatarLook &arg1, int32_t arg2);

public:
	void SetShowState(long nIdx);

public:
	void SetLayer();

public:
	void SetCtrl();

public:
	void DrawTextA(_x_com_ptr<IWzCanvas> pCanvas);

public:
	void DrawStatusBar(_x_com_ptr<IWzCanvas> pCanvas);

public:
	int32_t HandleSlashCommand(ZXString<char> sText);

protected:
	void ToggleBlink(int32_t bShow);

protected:
	void StartBlink(int32_t bStart);

protected:
	void AddChatText(ZXString16 sText, long nIdx);

protected:
	void SendClaim();

protected:
	void ProcessChat();

public:
	CUIMessenger &operator=(const CUIMessenger &arg0);

public:
	static CUIMessenger &_op_assign_44(CUIMessenger *pThis, const CUIMessenger &arg0);
};
STATIC_ASSERT_SIZE(CUIMessenger, 3016);

