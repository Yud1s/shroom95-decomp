// MemoryGameDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UIToolTip/UIToolTip.hpp"
#include "Packet/Packet.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "CashTradingRoomDlg/CashTradingRoomDlg.hpp"

// Level: 1 0x21d0b
class CMemoryGameDlg;

class CMemoryGameDlg: public CMiniRoomBaseDlg {
// Nested

enum ID_CTRL_ {
	ID_CTRL_BT_MEMORYGAME_START = 1001,
	ID_CTRL_BT_MEMORYGAME_TIE = 1002,
	ID_CTRL_BT_MEMORYGAME_GIVEUP = 1003,
	ID_CTRL_BT_MEMORYGAME_END = 1004,
	ID_CTRL_EDIT_CHAT = 1005,
	ID_CTRL_BT_CLAIM = 1006,
	ID_CTRL_BT_MEMORYGAME_READY = 1007,
	ID_CTRL_BT_MEMORYGAME_BAN = 1008
};
enum GAME_ {
	GAME_OPEN = 0,
	GAME_ON = 1,
	GAME_SET = 2
};

// Fields
	public:  ZRef<CCtrlButton> m_pBtClose;
	public:  ZRef<CCtrlButton> m_pBtTie;
	public:  ZRef<CCtrlButton> m_pBtGiveUp;
	public:  ZRef<CCtrlButton> m_pBtStart;
	public:  ZRef<CCtrlButton> m_pBtReady;
	public:  ZRef<CCtrlButton> m_pBtEnd;
	public:  ZRef<CCtrlButton> m_pBtBan;
	public:  ZRef<CCtrlButton> m_pBtRetreat;
	public:  ZRef<CCtrlButton> m_pBtClaim;
	public:  ZRef<CCtrlEdit> m_pEditChat;
	protected:  long m_nCardSelected{};
	protected:  int32_t m_bSelected{};
	protected:  _x_com_ptr<IWzProperty> m_pCommon;
	protected:  _x_com_ptr<IWzProperty> m_pMemoryGameCard;
	protected:  _x_com_ptr<IWzProperty> m_pMemoryGameScore;
	protected:  _x_com_ptr<IWzCanvas> m_pNameBar;
	protected:  _x_com_ptr<IWzCanvas> m_pRecordTableDark;
	protected:  _x_com_ptr<IWzCanvas> m_pRecordTableDim;
	protected:  _x_com_ptr<IWzCanvas> m_pMaster;
	protected:  _x_com_ptr<IWzGr2DLayer> m_pResultOnAvatar;
	protected:  _x_com_ptr<IWzGr2DLayer> m_pLayerResult;
	protected:  _x_com_ptr<IWzGr2DLayer> m_pLayerReady;
	protected:  _x_com_ptr<IWzGr2DLayer> m_pLayerScore1;
	protected:  _x_com_ptr<IWzGr2DLayer> m_pLayerScore2;
	protected:  _x_com_ptr<IWzGr2DLayer> m_pLayerTurn;
	protected:  _x_com_ptr<IWzGr2DLayer> m_pLayerRound;
	protected:  ZArray<long> m_anShuffle;
	protected:  ZArray<_x_com_ptr<IWzGr2DLayer> > m_apLayer;
	protected:  _x_com_ptr<IWzFont> m_pFont;
	protected:  CUIToolTip m_uiToolTip;
	protected:  int32_t m_bGiveUpRequestSent{};
	protected:  int32_t m_bDrawRequestSent{};
	protected:  int32_t m_bDrawRequestSent_Turn{};
	protected:  int32_t m_bCurTurn{};
	protected:  int32_t m_bRoomMaster{};
	protected:  long m_nGameSituation{};
	protected:  int32_t m_bLeaveBooked{};
	protected:  int32_t m_bReady{};
	protected:  int32_t m_bTournament{};
	protected:  ZXString<char> m_sTitle;
	protected:  ZXString<char> m_sBackNo;
	protected:  long m_nTimeLeft{};
	protected:  long m_nTimeFloor{};
	protected:  long m_nWinnerIdx{};
	protected:  long m_nGameResultType{};
	protected:  long m_nGameKind{};
	protected:  tagPOINT m_pt{};
	protected:  long m_nLast1{};
	protected:  long m_nLast2{};
	protected:  long m_nCount{};
	protected:  long m_nCardCount_Turn{};
	protected:  long m_tTurnBack{};
	protected:  long m_tArrange{};
	protected:  int32_t m_bTurnBack{};
	protected:  std::array<long, 2> m_anScore{};
	protected:  int32_t m_bShowAndHide{};
	protected:  std::array<long, 30> m_anShowState{};
	protected:  long m_nCardInRow{};
	protected:  tagPOINT m_ptFirstCard{};
	protected:  int32_t m_nMatchState{};
	protected:  long m_tNextOperation{};
	protected:  long m_nRound{};
// Methods
	public:  virtual  ~CMemoryGameDlg();
		public: void _dtor_0();
	public:    CMemoryGameDlg(const CMemoryGameDlg& arg0);
		public: void _ctor_1( const CMemoryGameDlg& arg0);
	public:    CMemoryGameDlg();
		public: void _ctor_0();
	public:  virtual void OnCreate(void* pData);
		public:  virtual int32_t HitTest(long rx, long ry, CCtrlWnd** ppCtrl);
		public:  virtual void OnKey(uint32_t wParam, int32_t lParam);
		public:  virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);
		public:  virtual int32_t OnMouseMove(long rx, long ry);
		public:  virtual void OnButtonClicked(uint32_t uId);
		public:  virtual void Draw(const tagRECT* arg0);
		protected:  virtual void GetActionPosition(long nSlot, long& nAction, tagPOINT& pt);
		protected:  virtual void OnPacket(long nType, CInPacket& iPacket);
		protected:  virtual void OnEnterResult(CInPacket& iPacket);
		protected:  virtual void OnEnter(long nSlot, CInPacket& iPacket);
		protected:  virtual void OnLeave(long nSlot, CInPacket& iPacket);
		protected:  virtual void Update();
		protected:  virtual void DecodeMiniGameRecord(long nSlot, CInPacket& iPacket);
		protected:   void OnTurnUpCard(CInPacket& iPacket);
		protected:   void OnTieRequest(CInPacket& iPacket);
		protected:   void OnTieResult(CInPacket& iPacket);
		protected:   void OnGiveUpResult(CInPacket& arg0);
		protected:   void OnGameResult(CInPacket& iPacket);
		protected:   void OnUserReady(CInPacket& iPacket);
		protected:   void OnUserCancelReady(CInPacket& iPacket);
		protected:   void OnUserStart(CInPacket& iPacket);
		protected:   void OnTimeOver(CInPacket& iPacket);
		protected:   void SendTieRequest();
		protected:   void SendClaimGiveUp();
		protected:   void OnClickStartButton();
		protected:   void OnClickReadyButton();
		protected:   void OnClickEndButton();
		protected:   void OnClickBanButton();
		protected:   void SendTurnUpCard(long nIdx, int32_t bFirstCard);
		protected:   void DrawEffect(long arg0, long arg1);
		protected:   void DrawScore();
		protected:   void DrawGameResult(_x_com_ptr<IWzCanvas> pCanvas);
		protected:   void DrawReadyOrNot();
		protected:   void ResetMiniGameData();
		protected:   long GetCardPositionFromPoint(long rx, long ry);
		protected:   void TurnUpCard_Pic(long i, int32_t bTurnUpCard_Back);
		protected:   void TurnUpCard_Back(long i, int32_t bTimeOver);
		protected:   void SetCard_Pic(long i);
		protected:   void SetCard_Back(long i);
		protected:   void SetCardSelected(long i);
		protected:   void SetCardFree();
		protected:   void ArrangeCard();
		protected:   int32_t IsUserTurn();
		protected:   int32_t IsRoomMaster();
		protected:   int32_t IsWinnerLastTime();
		protected:   void AnimateRoundEffect(long arg0);
		public:   CMemoryGameDlg& operator=(const CMemoryGameDlg& arg0);
		public: static CMemoryGameDlg& _op_assign_50(CMemoryGameDlg* pThis, const CMemoryGameDlg& arg0);
};
STATIC_ASSERT_SIZE(CMemoryGameDlg, 3464);

