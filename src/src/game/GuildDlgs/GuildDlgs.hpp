// GuildDlgs.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Dialog/Dialog.hpp"
#include "LayoutMan/LayoutMan.hpp"

class CCtrlComboBox;

// Level: 0 0xb077
struct GUILDRANKING;
// Level: 1 0xb0bb
class CGuildRankDlg;
// Level: 1 0xafb3
class CSetGuildMarkDlg;
// Level: 1 0xb02b
class CCreateGuildAgreeDlg;

struct GUILDRANKING {
// Nested
// Fields
	public:  ZXString<char> sGuildName;
	public:  long nPoint{};
	public:  long nMark{};
	public:  long nMarkColor{};
	public:  long nMarkBG{};
	public:  long nMarkBGColor{};
// Methods
	public:    ~GUILDRANKING();
		public: void _dtor_0();
	public:    GUILDRANKING(const GUILDRANKING& arg0);
		public: void _ctor_1( const GUILDRANKING& arg0);
	public:    GUILDRANKING();
		public: void _ctor_0();
	public:   GUILDRANKING& operator=(const GUILDRANKING& arg0);
		public: static GUILDRANKING& _op_assign_3(GUILDRANKING* pThis, const GUILDRANKING& arg0);
};
STATIC_ASSERT_SIZE(GUILDRANKING, 24);
class CGuildRankDlg: public CDialog {
// Nested
public: enum  COUNTPERPAGE {
	COUNTPERPAGE = 6
};
enum  ID_CTRL_BT_ {
	ID_CTRL_BT_LEFT = 1000,
	ID_CTRL_BT_RIGHT = 1001
};
// Fields
	protected:  ZArray<GUILDRANKING> m_aGuildRanking;
	protected:  ZRef<CCtrlOriginButton> m_pBtLeft;
	protected:  ZRef<CCtrlOriginButton> m_pBtRight;
	protected:  ZRef<CCtrlOriginButton> m_pBtOK;
	protected:  _x_com_ptr<IWzGr2DLayer> m_pAniLayer;
	protected:  long m_nPage{};
	private:  CLayoutMan m_lm;
// Methods
	public:  virtual  ~CGuildRankDlg();
		public: void _dtor_0();
	public:    CGuildRankDlg(const CGuildRankDlg& arg0);
		public: void _ctor_1( const CGuildRankDlg& arg0);
	public:    CGuildRankDlg(ZArray<GUILDRANKING>& aGuildRanking);
		public: void _ctor_0( ZArray<GUILDRANKING>& aGuildRanking);
	public:  virtual void OnCreate(void* pData);
		public:  virtual void Draw(const tagRECT* pRect);
		public:  virtual void OnButtonClicked(uint32_t nId);
		public:   void DrawCurPage();
		public:  static ZArray<GUILDRANKING> __cdecl MakeDummyRank();
		protected:   void DrawRanking(long nRank, long ny, long nPoint, long nAlpha);
		public:   CGuildRankDlg& operator=(const CGuildRankDlg& arg0);
		public: static CGuildRankDlg& _op_assign_9(CGuildRankDlg* pThis, const CGuildRankDlg& arg0);
};
STATIC_ASSERT_SIZE(CGuildRankDlg, 200);
class CSetGuildMarkDlg: public CDialog {
// Nested
public:enum  UnnamedEnum44955 {
	CREATE_DIALOG = 0,
	SHOW_ANIMATION_START = 1,
	SHOW_ANIMATION_END = 2,
	SHOW_MESSAGE_START = 3,
	SHOW_MESSAGE_END = 4
};
enum  ID_CTRL_ {
	ID_CTRL_BT_MARKBG_LEFT = 1000,
	ID_CTRL_BT_MARKBG_RIGHT = 1001,
	ID_CTRL_BT_MARKBGCOLOR_LEFT = 1002,
	ID_CTRL_BT_MARKBGCOLOR_RIGHT = 1003,
	ID_CTRL_BT_MARK_LEFT = 1004,
	ID_CTRL_BT_MARK_RIGHT = 1005,
	ID_CTRL_BT_MARKCOLOR_LEFT = 1006,
	ID_CTRL_BT_MARKCOLOR_RIGHT = 1007,
	ID_CTRL_COMBOBOX_MARK = 1008
};
enum  COLOR_M {
	COLOR_MIN = 1,
	COLOR_MAX = 16
};
// Fields
	protected:  ZRef<CCtrlOriginButton> m_pBtYes;
	protected:  ZRef<CCtrlOriginButton> m_pBtNo;
	protected:  std::array<ZRef<CCtrlButton>, 2> m_pBtMarkCol;
	protected:  std::array<ZRef<CCtrlButton>, 2> m_pBtMarkBg;
	protected:  std::array<ZRef<CCtrlButton>, 2> m_pBtMarkBgCol;
	protected:  std::array<ZRef<CCtrlButton>, 2> m_pBtMark;
	protected:  ZRef<CCtrlComboBox> m_pCB;
	protected:  _x_com_ptr<IWzFont> m_pFont;
	protected:  _x_com_ptr<IWzGr2DLayer> m_pLayerAni;
	protected:  long m_nStatus{};
	protected:  long m_nAnimationState{};
	protected:  long m_nAfterAniTimeLeft{};
	protected:  long m_nShowMsgTimeLeft{};
	protected:  long m_nMarkBg{};
	protected:  long m_nMarkBgColor{};
	protected:  long m_nMark{};
	protected:  long m_nMarkColor{};
	protected:  std::array<long, 10> m_nLastMarkNum{};
	private:  CLayoutMan m_lm;
// Methods
	public:  virtual  ~CSetGuildMarkDlg();
		public: void _dtor_0();
	public:    CSetGuildMarkDlg(const CSetGuildMarkDlg& arg0);
		public: void _ctor_1( const CSetGuildMarkDlg& arg0);
	public:    CSetGuildMarkDlg();
		public: void _ctor_0();
	public:  virtual void OnCreate(void* pData);
		public:  virtual void Update();
		public:  virtual void OnButtonClicked(uint32_t nId);
		public:  virtual void OnChildNotify(uint32_t uId, uint32_t param1, uint32_t param2);
		public:  virtual void SetRet(long nRet);
		public:   void GetResult(long& nMarkBg, long& nMarkBgColor, long& nMark, long& nMarkColor);
		protected:   void ShowAnimation();
		protected:   void InitGuildMark();
		protected:   void ShowGuildMark();
		protected:   void InitLastMarkNumber();
		public:   CSetGuildMarkDlg& operator=(const CSetGuildMarkDlg& arg0);
		public: static CSetGuildMarkDlg& _op_assign_13(CSetGuildMarkDlg* pThis, const CSetGuildMarkDlg& arg0);
};
STATIC_ASSERT_SIZE(CSetGuildMarkDlg, 332);
class CCreateGuildAgreeDlg: public CDialog {
// Nested
public:

enum  UnnamedEnum45084 {
	CREATE_DIALOG = 0,
	SHOW_ANIMATION_START = 1,
	SHOW_ANIMATION_END = 2,
	SHOW_MESSAGE_START = 3,
	SHOW_MESSAGE_END = 4
};
enum  kGuildMake_ {
	kGuildMake_X = 275,
	kGuildMake_Y = 100,
	kGuildMake_Width = 250,
	kGuildMake_Height = 314
};
// Fields
	protected:  ZXString<char> m_sMasterName;
	protected:  ZXString<char> m_sGuildName;
	protected:  ZRef<CCtrlOriginButton> m_pBtYes;
	protected:  ZRef<CCtrlOriginButton> m_pBtNo;
	protected:  _x_com_ptr<IWzFont> m_pFont;
	protected:  _x_com_ptr<IWzGr2DLayer> m_pLayerAni;
	protected:  _x_com_ptr<IWzGr2DLayer> m_pLayerMsg;
	protected:  long m_nStatus{};
	protected:  long m_nAnimationState{};
	protected:  long m_nAfterAniTimeLeft{};
	protected:  long m_nShowMsgTimeLeft{};
	protected:  long m_nWaitChoiceTimeLeft{};
	private:  CLayoutMan m_lm;
// Methods
	public:  virtual  ~CCreateGuildAgreeDlg();
		public: void _dtor_0();
	public:    CCreateGuildAgreeDlg(const CCreateGuildAgreeDlg& arg0);
		public: void _ctor_1( const CCreateGuildAgreeDlg& arg0);
	public:    CCreateGuildAgreeDlg(ZXString<char> sMasterName, ZXString<char> sGuildName);
		public: void _ctor_0( ZXString<char> sMasterName, ZXString<char> sGuildName);
	public:  virtual void OnCreate(void* pData);
		public:  virtual void Update();
		protected:   void ShowAnimation();
		public:   CCreateGuildAgreeDlg& operator=(const CCreateGuildAgreeDlg& arg0);
		public: static CCreateGuildAgreeDlg& _op_assign_6(CCreateGuildAgreeDlg* pThis, const CCreateGuildAgreeDlg& arg0);
};
STATIC_ASSERT_SIZE(CCreateGuildAgreeDlg, 220);



