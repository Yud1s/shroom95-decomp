// CashTradingRoomDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Dialog/Dialog.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "Packet/Packet.hpp"
#include "ChatHelper/ChatHelper.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "CtrlButton/CtrlButton.hpp"
//#include "Avatar/Avatar.hpp"

// EXTRA
class CCtrlScrollBar;
struct GW_MiniGameRecord;
class CCtrlEdit;
class CAvatar;
struct AvatarLook;

// Level: 1 0xea75
class CMiniRoomBaseDlg;
// Level: 2 0x21caa
class CCashTradingRoomDlg;

class CMiniRoomBaseDlg : public CUniqueModeless
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
		ChatTextInfo(const CMiniRoomBaseDlg::ChatTextInfo &arg0);

	public:
		void _ctor_1( const CMiniRoomBaseDlg::ChatTextInfo &arg0);

	public:
		ChatTextInfo();

	public:
		void _ctor_0();

	public:
		CMiniRoomBaseDlg::ChatTextInfo &operator=(const CMiniRoomBaseDlg::ChatTextInfo &arg0);

	public:
		static CMiniRoomBaseDlg::ChatTextInfo &_op_assign_3(CMiniRoomBaseDlg::ChatTextInfo *pThis, const CMiniRoomBaseDlg::ChatTextInfo &arg0);
	};

public:
	enum ID_
{
	ID_CTRL_SCR_CHAT = 1000,
	ID_MINIROOM_BASE = 1001
};
enum MATCH_
{
	MATCH_NONE = 0,
	MATCH_START1 = 1,
	MATCH_START2 = 2,
	MATCH_END = 3
};
enum CHATLOG_LINEMAX
{
	CHATLOG_LINEMAX = 1000
};
	// Fields
protected:
	ZRef<CCtrlScrollBar> m_pSB;

private:
	ZArray<CMiniRoomBaseDlg::ChatTextInfo> m_aChatText;

private:
	CChatHelper m_chatHelper;

private:
	long m_nLeft{};

private:
	long m_nTop{};

private:
	long m_nWidth{};

private:
	long m_nHeight{};

private:
	long m_nMyPosition{};

private:
	long m_nMaxUsers{};

private:
	long m_nCurUsers{};

private:
	int32_t m_bTournament{};

private:
	long m_nMiniRoomType{};

private:
	std::array<ZRef<CAvatar>, 8> m_apAvatar{};

private:
	std::array<ZXString<char>, 8> m_asUserID{};

private:
	std::array<short, 8> m_anJobCode{};

private:
	int32_t m_bEntrusted{};

protected:
	std::array<ZRef<GW_MiniGameRecord>, 8> m_apMGR{};
	// Methods
public:
	virtual ~CMiniRoomBaseDlg();

public:
	void _dtor_0();

public:
	CMiniRoomBaseDlg(const CMiniRoomBaseDlg &arg0);

public:
	void _ctor_1( const CMiniRoomBaseDlg &arg0);

public:
	CMiniRoomBaseDlg();

public:
	void _ctor_0();

public:
	virtual void Update();

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	void OnSelfAvatarChanged(const AvatarLook &al);

public:
	static void __cdecl OnPacketBase(CInPacket &iPacket);

public:
	static void __cdecl SendInviteResult(unsigned long dwSN, long nErrCode);

public:
	static void __cdecl SendCashInviteResult(unsigned long dwSN, long nErrCode);

protected:
	static void __cdecl OnEnterResultStatic(CInPacket &iPacket);

protected:
	static void __cdecl OnInviteStatic(CInPacket &iPacket);

protected:
	static void __cdecl OnInviteResultStatic(CInPacket &iPacket);

protected:
	static void __cdecl OnCheckSSN2Static(CInPacket &iPacket);

protected:
	void OnEnterBase(CInPacket &iPacket);

protected:
	void OnEnterResultBase(CInPacket &iPacket);

protected:
	void OnLeaveBase(CInPacket &iPacket);

protected:
	void OnAvatar(CInPacket &iPacket);

protected:
	virtual void GetActionPosition(long nSlot, long &nAction, tagPOINT &pt);

protected:
	virtual void OnPacket(long nSlot, CInPacket &iPacket);

protected:
	virtual void OnEnter(long nSlot, CInPacket &iPacket);

protected:
	virtual void OnEnterResult(CInPacket &iPacket);

protected:
	virtual void OnLeave(long nSlot, CInPacket &iPacket);

protected:
	virtual void OnChat(CInPacket &iPacket);

protected:
	virtual void DrawCharacterName(long nSlot, ZXString<char> sID);

protected:
	virtual void DecodeMiniGameRecord(long nSlot, CInPacket &iPacket);

protected:
	virtual int32_t IsEntrusted();

protected:
	virtual void RegisterEmployer(unsigned long dwTemplateID);

protected:
	virtual void DrawEmployee();

protected:
	virtual void OnCorrectSSN2(long nProc);

protected:
	long GetMaxUsers();

protected:
	long GetCurUsers();

protected:
	long GetMyPosition();

protected:
	ZRef<CAvatar> GetAvatar(long nSlot);

protected:
	ZRef<GW_MiniGameRecord> GetMiniGameRecord(long arg0);

protected:
	ZXString<char> GetUserID(long nSlot);

protected:
	short GetJobCode(long arg0);

protected:
	void SetTournament(int32_t arg0);

protected:
	int32_t IsTournament();

protected:
	void SetMiniRoomType(long nProc);

protected:
	int32_t GetMiniRoomType();

protected:
	void EnableChat(long left, long top, long width, long height, int32_t bCreateScrollBar);

protected:
	void CheckAndSendChat(ZXString<char> strChatMsg);

protected:
	void AddChatText(ZXString16 sText, FONT_TYPE nFontColor);

protected:
	void MakeGameMessage(ZXString<char> &sText, long nMessageCode, ZXString<char> sCharacterName);

private:
	long GetTextLineCount();

private:
	void DrawTextA();

private:
	void DecodeAvatar(long nSlot, CInPacket &iPacket);

private:
	void DecodeEmployeeTemplate(long nSlot, CInPacket &iPacket);

protected:
	static CMiniRoomBaseDlg *__cdecl MiniRoomFactory(long nType);
	CLASS_RTTI_(CMiniRoomBaseDlg, CUniqueModeless);

public:
	CMiniRoomBaseDlg &operator=(const CMiniRoomBaseDlg &arg0);

public:
	static CMiniRoomBaseDlg &_op_assign_53(CMiniRoomBaseDlg *pThis, const CMiniRoomBaseDlg &arg0);
};
STATIC_ASSERT_SIZE(CMiniRoomBaseDlg, 420);
class CCashTradingRoomDlg : public CMiniRoomBaseDlg
{
	// Nested
public:
	struct ITEM
	{
		// Nested
		// Fields
	public:
		ZRef<GW_ItemSlotBase> pItem;

	public:
		_x_com_ptr<IWzCanvas> pIcon;

	public:
		long nNumber{};
		// Methods
	public:
		~ITEM();

	public:
		void _dtor_0();

	public:
		ITEM(const CCashTradingRoomDlg::ITEM &arg0);

	public:
		void _ctor_1( const CCashTradingRoomDlg::ITEM &arg0);

	public:
		ITEM();

	public:
		void _ctor_0();

	public:
		CCashTradingRoomDlg::ITEM &operator=(const CCashTradingRoomDlg::ITEM &arg0);

	public:
		static CCashTradingRoomDlg::ITEM &_op_assign_3(CCashTradingRoomDlg::ITEM *pThis, const CCashTradingRoomDlg::ITEM &arg0);
	};

public:
	enum ID_CTRL_
{
	ID_CTRL_BT_TRADE_LOCK = 1001,
	ID_CTRL_BT_TRADE_TRADE = 1002,
	ID_CTRL_BT_TRADE_COIN = 1003,
	ID_CTRL_BT_ENTER = 1004,
	ID_CTRL_BT_CLAIM = 1005,
	ID_CTRL_EDIT_CHAT = 1006
};
	// Fields
public:
	ZRef<CCtrlOriginButton> m_pBtTrade;

public:
	ZRef<CCtrlOriginButton> m_pBtCoin;

public:
	ZRef<CCtrlEdit> m_pEditChat;

protected:
	_x_com_ptr<IWzFont> m_pFont;

protected:
	_x_com_ptr<IWzFont> m_pFontMoney;

protected:
	_x_com_ptr<IWzFont> m_pFontTextMoney;

protected:
	_x_com_ptr<IWzFont> m_pFontItemName;

protected:
	_x_com_ptr<IWzFont> m_pFontAlert;

protected:
	_x_com_ptr<IWzFont> m_pFontRemain;

protected:
	_x_com_ptr<IWzProperty> m_pImgFontNumber;

protected:
	int32_t m_bMyLock{};

protected:
	int32_t m_bPeerLock{};

protected:
	std::array<ZArray<CCashTradingRoomDlg::ITEM>, 2> m_aaItem;

protected:
	std::array<long, 2> m_anMoney{};

protected:
	ZArray<ZXString<char>> m_asToolTipMoney;

protected:
	long m_nInitMoney{};

protected:
	CUIToolTip m_uiToolTip;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CCashTradingRoomDlg();

public:
	void _dtor_0();

public:
	CCashTradingRoomDlg(const CCashTradingRoomDlg &arg0);

public:
	void _ctor_1( const CCashTradingRoomDlg &arg0);

public:
	CCashTradingRoomDlg();

public:
	void _ctor_0();

public:
	virtual void SetRet(long nRet);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual void OnButtonClicked(uint32_t uId);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void ClearToolTip();

protected:
	virtual void GetActionPosition(long nSlot, long &nAction, tagPOINT &pt);

protected:
	virtual void OnPacket(long nType, CInPacket &iPacket);

protected:
	virtual void OnEnter(long nSlot, CInPacket &iPacket);

protected:
	virtual void OnLeave(long nSlot, CInPacket &iPacket);

protected:
	void OnPutItem(CInPacket &iPacket);

protected:
	void OnPutMoney(CInPacket &iPacket);

protected:
	void OnTrade(CInPacket &iPacket);

protected:
	void GetTextMoney(long nMoney, ZXString<char> &sToolTip, ZXString<char> &sBox);

protected:
	int32_t CompressTextMoney(long nMoney, ZXString<char> &sToolTip, ZXString<char> &sBox);

protected:
	void MakeTextMoney(long nMoney, ZXString<char> &sToolTip, ZXString<char> &sBox, int32_t bCompressed);

protected:
	void DelTextLeadingZeroes(ZXString<char> &sToolTip, ZXString<char> &sBox, int32_t bCompressed);

public:
	int32_t PutItem(ZRef<GW_ItemSlotBase> pItem, long nItemTI, long nSlotPosition, long x, long y);

protected:
	void PutMoney();

protected:
	void Trade();

public:
	long GetPeerGender();

public:
	long GetPeerJob();

protected:
	void DrawItems(_x_com_ptr<IWzCanvas> arg0);

protected:
	long GetItemIndexFromPoint(long rx, long ry);

protected:
	long GetRectIndexFromPoint(long rx, long ry);

CLASS_RTTI_(CCashTradingRoomDlg, CMiniRoomBaseDlg);

public:
	CCashTradingRoomDlg &operator=(const CCashTradingRoomDlg &arg0);

public:
	static CCashTradingRoomDlg &_op_assign_33(CCashTradingRoomDlg *pThis, const CCashTradingRoomDlg &arg0);
};
STATIC_ASSERT_SIZE(CCashTradingRoomDlg, 3156);



