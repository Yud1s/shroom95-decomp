// OmokDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "CashTradingRoomDlg/CashTradingRoomDlg.hpp"

// Level: 0 0x20dd6
struct STONELAYER;
// Level: 1 0x20dca
class COmokDlg;

struct STONELAYER
{
	// Nested
	// Fields
public:
	long x{};

public:
	long y{};

public:
	long nStoneColor{};

public:
	_x_com_ptr<IWzGr2DLayer> pLayer;
	// Methods
public:
	~STONELAYER();

public:
	void _dtor_0();

public:
	STONELAYER(const STONELAYER &arg0);

public:
	void _ctor_1(const STONELAYER &arg0);

public:
	STONELAYER();

public:
	void _ctor_0();

public:
	STONELAYER &operator=(const STONELAYER &arg0);

public:
	static STONELAYER &_op_assign_3(STONELAYER *pThis, const STONELAYER &arg0);
};
STATIC_ASSERT_SIZE(STONELAYER, 16);
class COmokDlg : public CMiniRoomBaseDlg
{
	// Nested
public:
	enum ID_CTRL_
	{
		ID_CTRL_BT_OMOK_START = 1001,
		ID_CTRL_BT_OMOK_TIE = 1002,
		ID_CTRL_BT_OMOK_GIVEUP = 1003,
		ID_CTRL_BT_OMOK_END = 1004,
		ID_CTRL_EDIT_CHAT = 1005,
		ID_CTRL_BT_CLAIM = 1006,
		ID_CTRL_BT_OMOK_READY = 1007,
		ID_CTRL_BT_OMOK_BAN = 1008,
		ID_CTRL_BT_OMOK_RETREAT = 1009
	};
	enum GAME_
	{
		GAME_OPEN = 0,
		GAME_ON = 1,
		GAME_SET = 2
	};
	// Fields
public:
	ZRef<CCtrlButton> m_pBtClose;

public:
	ZRef<CCtrlButton> m_pBtTie;

public:
	ZRef<CCtrlButton> m_pBtGiveUp;

public:
	ZRef<CCtrlButton> m_pBtStart;

public:
	ZRef<CCtrlButton> m_pBtReady;

public:
	ZRef<CCtrlButton> m_pBtEnd;

public:
	ZRef<CCtrlButton> m_pBtBan;

public:
	ZRef<CCtrlButton> m_pBtRetreat;

public:
	ZRef<CCtrlButton> m_pBtClaim;

public:
	ZRef<CCtrlEdit> m_pEditChat;

protected:
	_x_com_ptr<IWzProperty> m_pStone;

protected:
	_x_com_ptr<IWzProperty> m_pCommon;

protected:
	_x_com_ptr<IWzCanvas> m_pNameBar;

protected:
	_x_com_ptr<IWzCanvas> m_pRecordTableDark;

protected:
	_x_com_ptr<IWzCanvas> m_pRecordTableDim;

protected:
	_x_com_ptr<IWzCanvas> m_pMaster;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pResultOnAvatar;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerLastStone;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerResult;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerReady;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerMyStoneColor;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerPeerStoneColor;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerTurn;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerRound;

protected:
	ZList<STONELAYER> m_lStoneLayer;

protected:
	_x_com_ptr<IWzFont> m_pFont;

protected:
	CUIToolTip m_uiToolTip;

protected:
	int32_t m_bGiveUpRequestSent{};

protected:
	int32_t m_bDrawRequestSent{};

protected:
	int32_t m_bDrawRequestSent_Turn{};

protected:
	int32_t m_bRetreatRequestSent{};

protected:
	int32_t m_bRetreatRequestSent_Turn{};

protected:
	int32_t m_bRetreatRequestSent_Match{};

protected:
	std::array<std::array<long, 15>, 15> m_aaStoneCheckers{};

protected:
	long m_nPlayerColor{};

protected:
	long m_nWinnerColor{};

protected:
	int32_t m_bCurTurn{};

protected:
	long m_nGameSituation{};

protected:
	int32_t m_bLeaveBooked{};

protected:
	int32_t m_bReady{};

protected:
	int32_t m_bTournament{};

protected:
	long m_nMatchState{};

protected:
	ZXString<char> m_sTitle;

protected:
	long m_nTimeLeft{};

protected:
	long m_nTimeFloor{};

protected:
	long m_nWinnerIdx{};

protected:
	long m_nGameResultType{};

protected:
	long m_nGameKind{};

protected:
	long m_tNextOperation{};

protected:
	tagPOINT m_pt{};

protected:
	long m_nMyStoneNo{};

protected:
	long m_nRound{};
	// Methods
public:
	virtual ~COmokDlg();

public:
	void _dtor_0();

public:
	COmokDlg(const COmokDlg &arg0);

public:
	void _ctor_1(const COmokDlg &arg0);

public:
	COmokDlg();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnButtonClicked(uint32_t uId);

public:
	virtual void Draw(const tagRECT *arg0);

protected:
	virtual void GetActionPosition(long nSlot, long &nAction, tagPOINT &pt);

protected:
	virtual void OnPacket(long nType, CInPacket &iPacket);

protected:
	virtual void OnEnterResult(CInPacket &iPacket);

protected:
	virtual void OnEnter(long nSlot, CInPacket &iPacket);

protected:
	virtual void OnLeave(long nSlot, CInPacket &iPacket);

protected:
	virtual void Update();

protected:
	virtual void DecodeMiniGameRecord(long nSlot, CInPacket &iPacket);

protected:
	void OnPutStoneChecker(CInPacket &iPacket);

protected:
	void OnPutStoneCheckerErr(CInPacket &iPacket);

protected:
	void OnTieRequest(CInPacket &iPacket);

protected:
	void OnTieResult(CInPacket &iPacket);

protected:
	void OnRetreatRequest(CInPacket &iPacket);

protected:
	void OnRetreatResult(CInPacket &iPacket);

protected:
	void OnGiveUpResult(CInPacket &arg0);

protected:
	void OnGameResult(CInPacket &iPacket);

protected:
	void OnUserReady(CInPacket &iPacket);

protected:
	void OnUserCancelReady(CInPacket &iPacket);

protected:
	void OnUserStart(CInPacket &iPacket);

protected:
	void OnTimeOver(CInPacket &iPacket);

public:
	void PutStoneChecker(tagPOINT pt);

protected:
	void SendTieRequest();

protected:
	void SendRetreatRequest();

protected:
	void SendClaimGiveUp();

protected:
	void OnClickStartButton();

protected:
	void OnClickReadyButton();

protected:
	void OnClickEndButton();

protected:
	void OnClickBanButton();

protected:
	void DrawGameResult(_x_com_ptr<IWzCanvas> pCanvas, long nPlayerColor);

protected:
	void DrawReadyOrNot();

protected:
	void DrawStoneColor();

protected:
	void ResetMiniGameData();

protected:
	void AnimateTheLast();

protected:
	tagPOINT GetStoneCheckerPositionFromPoint(long rx, long ry);

protected:
	int32_t IsUserTurn();

protected:
	int32_t IsRoomMaster();

protected:
	int32_t IsWinnerLastTime();

protected:
	void InsertStoneCheckerLayer(int32_t i, int32_t j, long nStoneColor);

protected:
	void AnimateRoundEffect(long arg0);

protected:
	void InsertStoneAnimateLayer(_x_com_ptr<IWzProperty> arg0, STONELAYER &arg1, long arg2);

public:
	COmokDlg &operator=(const COmokDlg &arg0);

public:
	static COmokDlg &_op_assign_48(COmokDlg *pThis, const COmokDlg &arg0);
};
STATIC_ASSERT_SIZE(COmokDlg, 4212);
