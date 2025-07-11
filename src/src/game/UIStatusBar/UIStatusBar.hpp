// UIStatusBar.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "ChatHelper/ChatHelper.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "Wnd/Wnd.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "FloatNotice/FloatNotice.hpp"
#include "CtrlEdit/CtrlEdit.hpp"
#include "CtrlComboBox/CtrlComboBox.hpp"

struct GW_ItemSlotBase;

// Level: 1 0x93a9
class CBitmapStrNumber;
// Level: 1 0x93f6
class CUIStatusBar;

class CBitmapStrNumber : public ZRefCounted
{
	// Nested
public:
	enum kNumber_Count
	{
		kNumber_Count = 10
	};
	enum Align
	{
		AlignLeft = 0,
		AlignRight = 1
	};
	// Fields
private:
	std::array<_x_com_ptr<IWzCanvas>, 10> m_apCanvasDigit{};

private:
	ZArray<_x_com_ptr<IWzCanvas>> m_apCanvasEtc;

private:
	ZXString<char> m_strEtcChars;

private:
	long m_nSpace{};

public:
	CBitmapStrNumber::Align m_align;
	// Methods
public:
	CBitmapStrNumber()
	{
	}
	virtual ~CBitmapStrNumber();

public:
	void _dtor_0();

public:
	CBitmapStrNumber(const CBitmapStrNumber &arg0);

public:
	void _ctor_1(const CBitmapStrNumber &arg0);

public:
	CBitmapStrNumber(_x_com_ptr<IWzProperty> pProp, long nSpace, const char *sEtcChars);

public:
	void _ctor_0(_x_com_ptr<IWzProperty> pProp, long nSpace, const char *sEtcChars);

public:
	void Draw(_x_com_ptr<IWzCanvas> pCanvas, long x, long y, const char *sNumber, CBitmapStrNumber::Align align);

private:
	_x_com_ptr<IWzCanvas> _GetDigit(char cDigit);

public:
	CBitmapStrNumber &operator=(const CBitmapStrNumber &arg0);

public:
	static CBitmapStrNumber &_op_assign_5(CBitmapStrNumber *pThis, const CBitmapStrNumber &arg0);
};
STATIC_ASSERT_SIZE(CBitmapStrNumber, 68);
class CUIStatusBar : public CWnd, public TSingleton<CUIStatusBar>
{
	// Nested
public:
	class CChatLog : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		ZXString16 m_sChat;

	public:
		std::array<long, 2> _ZtlSecureTear_m_nType{};

	public:
		uint32_t _ZtlSecureTear_m_nType_CS{};

	public:
		long m_nBack{};

	public:
		long m_nChannelID{};

	public:
		int32_t m_bWhisperIcon{};

	public:
		int32_t m_bFirstLine{};

	public:
		ZRef<GW_ItemSlotBase> m_pItem;
		// Methods
	public:
		virtual ~CChatLog();

	public:
		void _dtor_0();

	public:
		CChatLog(const CUIStatusBar::CChatLog &arg0);

	public:
		void _ctor_1(const CUIStatusBar::CChatLog &arg0);

	public:
		CChatLog(ZXString16 sChat, long nType, long nBack, long nChannelID, int32_t bWhisperIcon, int32_t bFirstLine, ZRef<GW_ItemSlotBase> pItem);

	public:
		void _ctor_0(ZXString16 sChat, long nType, long nBack, long nChannelID, int32_t bWhisperIcon, int32_t bFirstLine, ZRef<GW_ItemSlotBase> pItem);

	public:
		long __fastcall _ZtlSecureGet_m_nType() const;

	public:
		long __fastcall _ZtlSecurePut_m_nType(long arg0);

	public:
		int32_t IsFiltered(unsigned long dwFilterFlag) const;

	public:
		CUIStatusBar::CChatLog &operator=(const CUIStatusBar::CChatLog &arg0);

	public:
		static CUIStatusBar::CChatLog &_op_assign_6(CUIStatusBar::CChatLog *pThis, const CUIStatusBar::CChatLog &arg0);
	};

public:
	class CGauge
	{
		// Nested
		// Fields
	private:
		_x_com_ptr<IWzGr2DLayer> m_pLayerL;

	private:
		_x_com_ptr<IWzGr2DLayer> m_pLayerC;

	private:
		_x_com_ptr<IWzGr2DLayer> m_pLayerR;

	private:
		long m_nX{};

	private:
		long m_nY{};

	private:
		long m_nLength{};
		// Methods
	public:
		~CGauge();

	public:
		void _dtor_0();

	public:
		CGauge(const CUIStatusBar::CGauge &arg0);

	public:
		void _ctor_1(const CUIStatusBar::CGauge &arg0);

	public:
		CGauge();

	public:
		void _ctor_0();

	public:
		void Create(_x_com_ptr<IWzGr2DLayer> pLayer, const wchar_t *sUOL, long nX, long nY, long nLength);

	public:
		void SetVal(double dVal);

	public:
		CUIStatusBar::CGauge &operator=(const CUIStatusBar::CGauge &arg0);

	public:
		static CUIStatusBar::CGauge &_op_assign_5(CUIStatusBar::CGauge *pThis, const CUIStatusBar::CGauge &arg0);
	};

public:
	class CQuickSlot
	{
		// Nested
	public:
		struct FuncKeyMappedInfo
		{
			// Nested
			// Fields
		public:
			FUNCKEY_MAPPED fkm;

		public:
			long nNumber{};
			// Methods
		};
		// Fields

	private:
		_x_com_ptr<IWzProperty> m_pImgFontNumber;

	private:
		int32_t m_bShowSlide{};

	private:
		long m_nInitX{};

	private:
		long m_nInitY{};

	private:
		_x_com_ptr<IWzGr2DLayer> m_pLayerSlideBg;

	private:
		_x_com_ptr<IWzGr2DLayer> m_pLayerShortCut;

	private:
		ZRef<CCtrlOriginButton> m_pBtSlideUp;

	private:
		ZRef<CCtrlOriginButton> m_pBtSlideDown;

	private:
		_x_com_ptr<IWzGr2DLayer> m_pLayerSkillCooltime;

	private:
		std::array<_x_com_ptr<IWzCanvas>, 16> m_aCanvasSkillCooltime{};

	private:
		std::array<long, 8> m_aFuncKeyMappedSkillCooltime{};

	private:
		_x_com_ptr<IWzGr2DLayer> m_pLayerConsumeItemCoolTime;

	private:
		long m_nConsumeItemCoolTimeState{};

	private:
		std::array<CUIStatusBar::CQuickSlot::FuncKeyMappedInfo, 8> m_aFuncKeyMappedInfo{};
		// Methods
		CTOR_DEFAULT(CQuickSlot)
	public:
		~CQuickSlot();

	public:
		void _dtor_0();

	public:
		CQuickSlot(const CUIStatusBar::CQuickSlot &arg0);

	public:
		void _ctor_1(const CUIStatusBar::CQuickSlot &arg0);

	public:
		CQuickSlot();

	public:
		void _ctor_0();

	public:
		void Init(int32_t bShowSlide, CLayoutMan &lm);

	public:
		void ChangeScreenResolution(int32_t bLargeScreen, _x_com_ptr<IWzGr2DLayer> pParentLayer);

	public:
		void Draw();

	public:
		long GetIndexByPos(long x, long y);

	public:
		void GetPosByIndex(long nIdx, long &x, long &y);

	public:
		void Toggle();

	public:
		long GetInitX();

	public:
		int32_t IsEnabled();

	public:
		int32_t IsSlideUp();

	public:
		void DrawConsumeItemCooltime();

	public:
		void DrawSkillCooltime();

	public:
		int32_t CompareValidateFuncKeyMappedInfo();

	public:
		const FUNCKEY_MAPPED &GetFunckey(long arg0);

	public:
		CUIStatusBar::CQuickSlot &operator=(const CUIStatusBar::CQuickSlot &arg0);

	public:
		static CUIStatusBar::CQuickSlot &_op_assign_16(CUIStatusBar::CQuickSlot *pThis, const CUIStatusBar::CQuickSlot &arg0);
	};

public:
	enum ID_CTRL_
	{
		ID_CTRL_BT_SHOP = 1000,
		ID_CTRL_BT_ITC = 1001,
		ID_CTRL_BT_MENU = 1002,
		ID_CTRL_BT_MINIMIZE_CHAT = 1003,
		ID_CTRL_BT_MAXIMIZE_CHAT = 1004,
		ID_CTRL_BT_KEYCONFIG = 1005,
		ID_CTRL_BT_QUICKSLOT = 1006,
		ID_CTRL_BT_SYSTEM = 1007,
		ID_CTRL_BT_WHISPER = 1008,
		ID_CTRL_BT_CLAIM = 1009,
		ID_CTRL_SCR_CHATLOG = 1010,
		ID_CTRL_EDIT_CHATINPUT = 1011,
		ID_CTRL_COMBOBOX_CHATTARGET = 1012,
		ID_CTRL_BT_CHANNELSHIFT = 1013,
		ID_CTRL_BT_CHATFILTER_ALL = 1014,
		ID_CTRL_BT_CHATFILTER_FRIEND = 1015,
		ID_CTRL_BT_CHATFILTER_PARTY = 1016,
		ID_CTRL_BT_CHATFILTER_GUILD = 1017,
		ID_CTRL_BT_CHATFILTER_ALLIANCE = 1018,
		ID_CTRL_BT_CHATFILTER_EXPD = 1019,
		ID_CTRL_BT_SHORTCUT_BASE = 2000
	};
	enum MAX_WHISPERCANDIATE
	{
		MAX_WHISPERCANDIATE = 10
	};
	enum CHATFILTER_
	{
		CHATFILTER_ALL = 0,
		CHATFILTER_FRIEND = 1,
		CHATFILTER_PARTY = 2,
		CHATFILTER_GUILD = 3,
		CHATFILTER_ALLIANCE = 4,
		CHATFILTER_EXPD = 5,
		CHATFILTER_COUNT = 6
	};

	// Fields

public:
	static ZArray<ZRef<CChatLog>> m_aChatLog;

protected:
	CUIToolTip m_uiToolTip;

protected:
	CUIToolTip m_uiItemToolTip;

protected:
	tagPOINT m_ptItemToolTipClicked{};

protected:
	ZRef<CCtrlButton> m_pBtITC;

protected:
	ZRef<CCtrlOriginButton> m_pBtMenu;

protected:
	ZRef<CCtrlOriginButton> m_pBtSystem;

protected:
	ZRef<CCtrlOriginButton> m_pBtMin;

protected:
	ZRef<CCtrlOriginButton> m_pBtMax;

protected:
	ZRef<CCtrlOriginButton> m_pBtEquipKey;

protected:
	ZRef<CCtrlOriginButton> m_pBtInvenKey;

protected:
	ZRef<CCtrlOriginButton> m_pBtStatKey;

protected:
	ZRef<CCtrlOriginButton> m_pBtSkillKey;

protected:
	ZRef<CCtrlOriginButton> m_pBtWhisper;

protected:
	ZRef<CCtrlScrollBar> m_pScrChatLog;

protected:
	ZRef<CCtrlEdit> m_pEditChatInput;

protected:
	ZRef<CCtrlComboBox> m_pCBChatTarget;

protected:
	CCtrlComboBox::CREATEPARAM m_paramComboBox;

protected:
	CCtrlEdit::CREATEPARAM m_paramEdit;

protected:
	long m_nChatTarget{};

protected:
	long m_nCurPtY{};

protected:
	int32_t m_bDragChatWnd{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerTempEXP;

protected:
	_x_com_ptr<IWzFont> m_pFont;

protected:
	_x_com_ptr<IWzFont> m_pFontJobTitle;

protected:
	_x_com_ptr<IWzFont> m_pFontDimGreen;

protected:
	_x_com_ptr<IWzFont> m_pFontWhite;

protected:
	std::array<_x_com_ptr<IWzFont>, 27> m_pFontChatLog{};

protected:
	_x_com_ptr<IWzFont> m_pFontJobCategory;

protected:
	_x_com_ptr<IWzProperty> m_pImgFontLevelNo;

protected:
	_x_com_ptr<IWzProperty> m_pImgFontMemo;

protected:
	long m_nScrWidth{};

protected:
	unsigned long m_dwLastScrolled{};

protected:
	ZXString<char> m_sWhisperTarget;

protected:
	ZList<ZXString<char>> m_lsWhisperCandidate;

private:
	CUIStatusBar::CGauge m_GaugeHP;

private:
	CUIStatusBar::CGauge m_GaugeMP;

private:
	CUIStatusBar::CGauge m_GaugeEXP;

private:
	CBitmapStrNumber m_GougeNo;

private:
	double m_dEXPNo{};

public:
	ZXString<char> m_sFriendGroupTarget;

protected:
	CChatHelper m_chatHelper;

protected:
	CFloatNotice m_floatNotice;

protected:
	CFloatNotice m_quizPanel;

protected:
	CFloatNotice m_itemMsg;

protected:
	unsigned long m_dwItemMsg{};

protected:
	unsigned long m_dwFloatNotice{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerNoticeMsg;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerChatLog;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerChatBar;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerSkin;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerGaugeText;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerChatSpace;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerChatSpace2;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerChatEnter;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerChatCover;

protected:
	std::array<_x_com_ptr<IWzGr2DLayer>, 4> m_pLayerButtonAni{};

protected:
	std::array<long, 4> m_bButtonAniPlayTime{};

protected:
	long m_nChatWndHeight{};

protected:
	long m_nChatWndType{};

protected:
	long m_nChatWndLineVisible{};

protected:
	tagPOINT m_ptChatWnd{};

protected:
	int32_t m_bDoNotAskTarget{};

protected:
	long m_nPastHP{};

protected:
	long m_nPastMP{};

private:
	long m_tLastUpdateSkillCooltime{};

private:
	CUIStatusBar::CQuickSlot m_QuickSlot;

private:
	CLayoutMan m_lm;

private:
	std::array<ZRef<CCtrlOriginButton>, 6> m_apBtChatFilter{};

private:
	unsigned long m_dwChatFilterFlag{};
	// Methods
public:
	virtual ~CUIStatusBar();

public:
	void _dtor_0();

public:
	CUIStatusBar(const CUIStatusBar &arg0);

public:
	void _ctor_1(const CUIStatusBar &arg0);

public:
	CUIStatusBar();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pCanvas);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void Update();

public:
	virtual void ClearToolTip();

public:
	uint32_t GetEmotionKey(ZXString<char> &sChat);

public:
	void StartChat(const char *sText);

public:
	void EndChat();

public:
	void FloatNotice(const char *sNotice, long nType, unsigned long dwDuration);

public:
	void SetProblem(const char *sProblem);

public:
	int32_t SetItemMsg(const char *sMsg, long nType, unsigned long dwDuration);

public:
	void ChatLogAdd(const char *sChat, long lType, long nChannelID, int32_t bWhisperIcon, ZRef<GW_ItemSlotBase> pItem);

public:
	void NoticeMsgAdd(const char *arg0);

public:
	long GetShortCutIndexByPos(long x, long y);

public:
	void ResetButtonToolTip();

public:
	ZXString<char> GetWhisperTarget();

public:
	void SetWhisperTarget(ZXString<char> sWhisperTarget, int32_t bResetIfEqual);

public:
	void SetChatTarget(long nTarget);

public:
	long GetChatTarget();

public:
	void SetWhisperTargetFromCandidate();

public:
	void AddWhisperCandidate(ZXString<char> sWhisperCandidate);

public:
	int32_t ChangeWhisperTarget();

public:
	int32_t ChangeGroupWhisperTarget();

public:
	void SetChatType(long nType);

public:
	int32_t GetChatType();

public:
	void QuickSlotToggle();

public:
	void ChangeChatWndSize(long rx, long ry, long nType);

public:
	static void __cdecl RemoveChatLog();

public:
	void SetButtonBlink(long nIdx, int32_t bOn);

public:
	void SetShortcutTooltip(long nIdx, char cKey);

public:
	ZArray<ZXString<char>> GetChatLog();

public:
	ZXString16 ConvertWhisperToNormal(ZXString16 sChatLine);

public:
	void EnableButtons(int32_t bEnable);

public:
	void ReDrawQuickslot();

public:
	void Eff_EvolRing();

protected:
	void SetStatusValue(long lv, long nJob, ZXString<char> sCharName);

protected:
	void SetNumberValue(long pImgNumber, long pCanvasText, long s, long arg3, long arg4, long arg5, long arg6);

protected:
	void ProcessToolTip(long rx, long ry);

protected:
	bool IsChatLogFiltered(long ty);
	void DrawChatItem(IWzCanvas* canvas, CChatLog* chat, int ix);
	void ChatLogDraw();

protected:
	void SendGroupMessage(const long nChatTarget, const ZXString<char> &sText);

protected:
	void SendCoupleMessage(const ZXString<char> &sText);

protected:
	void ToggleMaxMinButton();

protected:
	void ToggleQuickSlot();

protected:
	void ToggleShortCutMenu();

protected:
	void MakeCtrlEdit(int32_t bCreate);

protected:
	void FlashHPBar();

protected:
	void FlashMPBar();

protected:
	int32_t TryBeginWhisper(long rx, long ry);

protected:
	void TryBeginShowItemInfo(long rx, long ry);

protected:
	void SendClaim();

protected:
	void TryBeginChangeChatWnd(long rx, long ry);

public:
	int32_t IsQuickSlotEnabled();

public:
	int32_t IsQuickSlotSlideUp();

public:
	void ChangeDragFuncKeyMappedIcon(long rx, long ry, FUNCKEY_MAPPED &fkm);

protected:
	void TryBeginDragFuncKeyMappedIcon(long rx, long ry);

protected:
	void DrawDragFuncKeyMappedIcon(long arg0, long arg1, FUNCKEY_MAPPED &arg2);

protected:
	void TryShowMemoListDlg(long rx, long ry);

protected:
	void TryUseTempExp(long rx, long ry);

	CLASS_RTTI_(CUIStatusBar, CWnd);

public:
	void ChangeScreenResolution();

private:
	void _ResetChatBarPos();

private:
	void _RefreshChatLog();

private:
	long _GetFilteredChatLogCount();

private:
	void _SetFilterButton();

public:
	CUIStatusBar &operator=(const CUIStatusBar &arg0);

public:
	static CUIStatusBar &_op_assign_76(CUIStatusBar *pThis, const CUIStatusBar &arg0);
};
STATIC_ASSERT_SIZE(CUIStatusBar, 6496);

ZXString16 __cdecl ExtractCharacterName_ZXString_unsignedshort__(ZXString16 sChat);
