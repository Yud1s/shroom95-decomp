// UIDialogEtc.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"
#include "Field/Field.hpp"
#include "Wnd/Wnd.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "Dialog/Dialog.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "CashShop_ShopSvrRes/CashShop_ShopSvrRes.hpp"

struct CT_INFO;

// Level: 1 0xd3f6
class CUIAntiMacro;
// Level: 1 0xd47d
class CUISpeedQuiz;
// Level: 1 0xd25e
class CUIClaim;
// Level: 1 0xd593
class CUISkillEffectChange;
// Level: 1 0xd287
class CUISendMemo;
// Level: 1 0xd4fb
class CUIChangingLicenseNotice;
// Level: 1 0xd45a
class CUIInitialQuiz;
// Level: 1 0xd30d
class CSlideNotice;
// Level: 1 0xd248
class CUIClaimPreNotice;
// Level: 1 0xd416
class CUIAdminAntiMacro;
// Level: 1 0x11a9a
class CUINoticePremium;
// Level: 1 0xd56b
class CUIAvatarMegaphone;
// Level: 1 0xd3de
class CUIReceiveGift;
// Level: 1 0xd2fa
class CSpeakerWorldDlgEx;
// Level: 1 0xd443
class CUIAntiMacroNotice;
// Level: 1 0xd3c9
class CUISendGift;
// Level: 1 0xd4d7
class CUIChangingCharacterName;
// Level: 1 0xd529
class CUITransferWorldSelectDlg;
// Level: 1 0xd498
class CUIWeddingInvitation;
// Level: 1 0xd337
class CUISendGifts;
// Level: 1 0xd2e6
class CSpeakerWorldDlg;
// Level: 1 0xd2d1
class CMatchTableDlg;
// Level: 1 0xd274
class CUIHope;
// Level: 1 0xd551
class CUIMapleTV;
// Level: 1 0xd513
class CUITransferWorldLicenseNotice;

class CUIAntiMacro : public CDialog, public TSingleton<CUIAntiMacro>
{
	// Nested
public:
	enum ID_CTRL_EDIT_TEXT
	{
		ID_CTRL_EDIT_TEXT = 1000
	};
	enum NUM_OF_
	{
		NUM_OF_QUESTION_DIGIT = 6,
		NUM_OF_NOISE_LINE = 20
	};
	// Fields
private:
	SINGLETON_PAD;

protected:
	ZRef<CCtrlEdit> m_pEdit;

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	long m_tTimeOver{};

protected:
	long m_nRemainSec{};

protected:
	int32_t m_bFirst{};

protected:
	_x_com_ptr<IWzCanvas> m_pCanvas;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIAntiMacro();

public:
	void _dtor_0();

public:
	CUIAntiMacro(const CUIAntiMacro &arg0);

public:
	void _ctor_1(const CUIAntiMacro &arg0);

public:
	CUIAntiMacro();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void SetRet(long nRet);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void Update();

public:
	void SetValues(_x_com_ptr<IWzCanvas> pCanvas, long tRemain, int32_t bFirst);

public:
	CUIAntiMacro &operator=(const CUIAntiMacro &arg0);

public:
	static CUIAntiMacro &_op_assign_9(CUIAntiMacro *pThis, const CUIAntiMacro &arg0);
};
STATIC_ASSERT_SIZE(CUIAntiMacro, 200);
class CUISpeedQuiz : public CDialog, public TSingleton<CUISpeedQuiz>
{
	// Nested
public:
	enum ID_CTRL_
	{
		ID_CTRL_EDIT_TEXT = 1000,
		ID_CTRL_BT_GIVEUP = 1001,
		ID_CTRL_BT_PASS = 1002
	};
	// Fields
private:
	SINGLETON_PAD;

protected:
	ZRef<CCtrlEdit> m_pEdit;

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtNext;

protected:
	ZRef<CCtrlButton> m_pBtGiveup;

protected:
	ZRef<CDialog> m_pChildModal;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvas;

protected:
	long m_nCorrect{};

protected:
	long m_nRemain{};

protected:
	long m_tTimeOver{};

protected:
	long m_nRemainSec{};

protected:
	long m_nLimitSec{};

protected:
	int32_t m_bResultSent{};

protected:
	long m_nType{};
	// Methods
public:
	virtual ~CUISpeedQuiz();

public:
	void _dtor_0();

public:
	CUISpeedQuiz(const CUISpeedQuiz &arg0);

public:
	void _ctor_1(const CUISpeedQuiz &arg0);

public:
	CUISpeedQuiz();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void SetRet(long nRet);

public:
	virtual void Update();

public:
	void SetValues(long nType, unsigned long dwAnswer, long nCorrect, long nRemain, long tRemain);

public:
	long GetRemainTime();

public:
	void SendResult(ZXString<char> sMsg);

public:
	CUISpeedQuiz &operator=(const CUISpeedQuiz &arg0);

public:
	static CUISpeedQuiz &_op_assign_11(CUISpeedQuiz *pThis, const CUISpeedQuiz &arg0);
};
STATIC_ASSERT_SIZE(CUISpeedQuiz, 220);
class CUIClaim : public CDialog
{
	// Nested
public:
	enum ID_
	{
		ID_CTRL_COMBOBOX_CHARACTERNAME = 0,
		ID_CTRL_COMBOBOX_TYPE = 1,
		ID_CTRL_EDIT_1 = 2,
		ID_TYPE_CURSE = 3,
		ID_TYPE_AD = 4,
		ID_TYPE_CHEAT = 5,
		ID_TYPE_REALMONEYTRADE = 6,
		ID_TYPE_IMPERSONATION = 7,
		ID_TYPE_PRIVATEINFO = 8,
		ID_TYPE_MACROPROGRAM = 9,
		ID_CHARACTERLIST = 1000,
		ID_CTRL_EDIT_CONTEXT1 = 2000,
		ID_CTRL_EDIT_CONTEXT2 = 2001,
		ID_CTRL_EDIT_CONTEXT3 = 2002,
		ID_CTRL_EDIT_CONTEXT4 = 2003
	};
	// Fields
protected:
	ZRef<CCtrlComboBox> m_pCBCharacterName;

protected:
	ZRef<CCtrlComboBox> m_pCBType;

protected:
	ZRef<CCtrlEdit> m_pEditContext1;

protected:
	ZRef<CCtrlEdit> m_pEditContext2;

protected:
	ZRef<CCtrlEdit> m_pEditContext3;

protected:
	ZRef<CCtrlEdit> m_pEditContext4;

protected:
	ZArray<ZXString<char>> m_asCharacterList;

protected:
	ZXString<char> m_sContext;

protected:
	int32_t m_bChatClaim{};

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIClaim();

public:
	void _dtor_0();

public:
	CUIClaim(const CUIClaim &arg0);

public:
	void _ctor_1(const CUIClaim &arg0);

public:
	CUIClaim(ZArray<ZXString<char>> &characterList, int32_t bChatClaim);

public:
	void _ctor_0(ZArray<ZXString<char>> &characterList, int32_t bChatClaim);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void SetRet(long nRet);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	void GetResult(ZXString<char> &sCharacterName, long &nType, ZXString<char> &sContext);

public:
	CUIClaim &operator=(const CUIClaim &arg0);

public:
	static CUIClaim &_op_assign_7(CUIClaim *pThis, const CUIClaim &arg0);
};
STATIC_ASSERT_SIZE(CUIClaim, 224);
class CUISkillEffectChange : public CDialog, public TSingleton<CUISkillEffectChange>
{
	// Nested
	// Fields
private:
	SINGLETON_PAD;

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	long m_nLevel{};

protected:
	ZXString<char> m_sSkillName;
	// Methods
public:
	virtual ~CUISkillEffectChange();

public:
	void _dtor_0();

public:
	CUISkillEffectChange(const CUISkillEffectChange &arg0);

public:
	void _ctor_1(const CUISkillEffectChange &arg0);

public:
	CUISkillEffectChange();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void SetRet(long nRet);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	void SetValues(long nLevel, ZXString<char> sSkillName);

public:
	CUISkillEffectChange &operator=(const CUISkillEffectChange &arg0);

public:
	static CUISkillEffectChange &_op_assign_8(CUISkillEffectChange *pThis, const CUISkillEffectChange &arg0);
};
STATIC_ASSERT_SIZE(CUISkillEffectChange, 164);
class CUISendMemo : public CDialog
{
	// Nested
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	ZRef<CCtrlEdit> m_pEditReceiver;

protected:
	ZRef<CCtrlEdit> m_pEditContent;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUISendMemo();

public:
	void _dtor_0();

public:
	CUISendMemo(const CUISendMemo &arg0);

public:
	void _ctor_1(const CUISendMemo &arg0);

public:
	CUISendMemo();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void SetRet(long nRet);

public:
	void SetReceiver(ZXString<char> sReceiver);

public:
	void GetResult(ZXString<char> &sReceiver, ZXString<char> &sContent);

public:
	CUISendMemo &operator=(const CUISendMemo &arg0);

public:
	static CUISendMemo &_op_assign_8(CUISendMemo *pThis, const CUISendMemo &arg0);
};
STATIC_ASSERT_SIZE(CUISendMemo, 204);
class CUIChangingLicenseNotice : public CDialog
{
	// Nested
public:
	enum ID_CTRL_SCROLLBAR
	{
		ID_CTRL_SCROLLBAR = 1000
	};
	enum k
	{
		kDialog_Width = 406,
		kDialog_Height = 424,
		kDialog_YPos_Adjustment = 216,
		kOKBtn_XPos = 275,
		kOKBtn_YPos = 395,
		kCancelBtn_XPos = 340,
		kCancelBtn_YPos = 395,
		kScroll_XPos = 384,
		kScroll_YPos = 47,
		kScroll_Height = 324,
		kScreen_Height = 317,
		kClipRectText_Left = 29,
		kClipRectText_Top = 51,
		kClipRectText_Width = 355
	};
	// Fields
protected:
	CCashShop *m_pCashShop{};

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlScrollBar> m_pScrollBar;

protected:
	ZArray<CT_INFO> m_aCT;

protected:
	ZArray<_x_com_ptr<IWzFont>> m_apFont;

protected:
	long m_nScrollPos{};

protected:
	long m_nScrollRange{};

protected:
	long m_nBirthDate{};

protected:
	long m_nCommSN{};
	// Methods
public:
	virtual ~CUIChangingLicenseNotice();

public:
	void _dtor_0();

public:
	CUIChangingLicenseNotice(const CUIChangingLicenseNotice &arg0);

public:
	void _ctor_1(const CUIChangingLicenseNotice &arg0);

public:
	CUIChangingLicenseNotice(void *pData);

public:
	void _ctor_0(void *pData);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void SetRet(long nRet);

public:
	void SetBirthDate(long nBirthDate);

public:
	long GetBirthDate();

public:
	long GetCommSN();

protected:
	void LoadFont();

public:
	CUIChangingLicenseNotice &operator=(const CUIChangingLicenseNotice &arg0);

public:
	static CUIChangingLicenseNotice &_op_assign_14(CUIChangingLicenseNotice *pThis, const CUIChangingLicenseNotice &arg0);
};
STATIC_ASSERT_SIZE(CUIChangingLicenseNotice, 196);
class CUIInitialQuiz : public CDialog, public TSingleton<CUIInitialQuiz>
{
	// Nested
public:
	enum ID_CTRL_EDIT_TEXT
	{
		ID_CTRL_EDIT_TEXT = 1000
	};
	// Fields
private:
	SINGLETON_PAD;

protected:
	ZRef<CCtrlEdit> m_pEdit;

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CDialog> m_pChildModal;

protected:
	ZXString<char> m_sTitle;

protected:
	ZXString<char> m_sQuizText;

protected:
	ZXString<char> m_sHintText;

protected:
	long m_nMinInput{};

protected:
	long m_nMaxInput{};

protected:
	long m_tTimeOver{};

protected:
	long m_nRemainSec{};

protected:
	int32_t m_bResultSent{};
	// Methods
public:
	virtual ~CUIInitialQuiz();

public:
	void _dtor_0();

public:
	CUIInitialQuiz(const CUIInitialQuiz &arg0);

public:
	void _ctor_1(const CUIInitialQuiz &arg0);

public:
	CUIInitialQuiz();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void SetRet(long nRet);

public:
	virtual void Update();

public:
	void SetValues(ZXString<char> sTitle, ZXString<char> sQuizText, ZXString<char> sHintText, long nMinInput, long nMaxInput, long tRemain);

public:
	long GetRemainTime();

public:
	void SendResult(ZXString<char> sMsg);

public:
	CUIInitialQuiz &operator=(const CUIInitialQuiz &arg0);

public:
	static CUIInitialQuiz &_op_assign_10(CUIInitialQuiz *pThis, const CUIInitialQuiz &arg0);
};
STATIC_ASSERT_SIZE(CUIInitialQuiz, 204);
class CSlideNotice : public CWnd, public TSingleton<CSlideNotice>
{
	// Nested
	// Fields
protected:
	ZXString<char> m_sNotice;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerSlide;
	// Methods
public:
	virtual ~CSlideNotice();

public:
	void _dtor_0();

public:
	CSlideNotice(const CSlideNotice &arg0);

public:
	void _ctor_1(const CSlideNotice &arg0);

public:
	CSlideNotice();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	void SetMsg(ZXString<char> sNotice);

public:
	CSlideNotice &operator=(const CSlideNotice &arg0);

public:
	static CSlideNotice &_op_assign_7(CSlideNotice *pThis, const CSlideNotice &arg0);
};
STATIC_ASSERT_SIZE(CSlideNotice, 136);
class CUIClaimPreNotice : public CDialog
{
	// Nested
public:
	enum ID_CTRL_BT_
	{
		ID_CTRL_BT_CCLAIM = 1000,
		ID_CTRL_BT_PCLAIM = 1001
	};
	// Fields
private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIClaimPreNotice();

public:
	void _dtor_0();

public:
	CUIClaimPreNotice(const CUIClaimPreNotice &arg0);

public:
	void _ctor_1(const CUIClaimPreNotice &arg0);

public:
	CUIClaimPreNotice();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	CUIClaimPreNotice &operator=(const CUIClaimPreNotice &arg0);

public:
	static CUIClaimPreNotice &_op_assign_5(CUIClaimPreNotice *pThis, const CUIClaimPreNotice &arg0);
};
STATIC_ASSERT_SIZE(CUIClaimPreNotice, 164);
class CUIAdminAntiMacro : public CDialog, public TSingleton<CUIAdminAntiMacro>
{
	// Nested
public:
	enum ID_CTRL_EDIT_TEXT
	{
		ID_CTRL_EDIT_TEXT = 1000
	};
	enum NUM_OF_
	{
		NUM_OF_QUESTION_DIGIT = 6,
		NUM_OF_NOISE_LINE = 20
	};
	// Fields
	SINGLETON_PAD;

protected:
	ZRef<CCtrlEdit> m_pEdit;

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	long m_tTimeOver{};

protected:
	long m_nRemainSec{};

protected:
	int32_t m_bFirst{};

protected:
	_x_com_ptr<IWzCanvas> m_pCanvas;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIAdminAntiMacro();

public:
	void _dtor_0();

public:
	CUIAdminAntiMacro(const CUIAdminAntiMacro &arg0);

public:
	void _ctor_1(const CUIAdminAntiMacro &arg0);

public:
	CUIAdminAntiMacro();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void SetRet(long nRet);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void Update();

public:
	void SetValues(_x_com_ptr<IWzCanvas> pCanvas, long tRemain, int32_t bFirst);

public:
	CUIAdminAntiMacro &operator=(const CUIAdminAntiMacro &arg0);

public:
	static CUIAdminAntiMacro &_op_assign_9(CUIAdminAntiMacro *pThis, const CUIAdminAntiMacro &arg0);
};
STATIC_ASSERT_SIZE(CUIAdminAntiMacro, 200);
class CUINoticePremium : public CDialog, public TSingleton<CUINoticePremium>
{
	// Nested
	// Fields

	SINGLETON_PAD;

private:
	ZRef<CCtrlButton> m_pBtClose;
	// Methods
public:
	virtual ~CUINoticePremium();

public:
	void _dtor_0();

public:
	CUINoticePremium(const CUINoticePremium &arg0);

public:
	void _ctor_1(const CUINoticePremium &arg0);

	CTOR_DEFAULT(CUINoticePremium);

public:
	CUINoticePremium();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	void SetVisible(int32_t bVisible);

public:
	CUINoticePremium &operator=(const CUINoticePremium &arg0);

public:
	static CUINoticePremium &_op_assign_5(CUINoticePremium *pThis, const CUINoticePremium &arg0);
};
STATIC_ASSERT_SIZE(CUINoticePremium, 156);
class CUIAvatarMegaphone : public CDialog
{
	// Nested
public:
	enum ID_CTRL_
	{
		ID_CTRL_EDIT_MSG = 0,
		ID_CTRL_WHISPER = 1
	};
	enum MULTI_EDIT_PROPERTY
	{
		MULTI_EDIT_HORZ_MAX = 97,
		MULTI_EDIT_MAX_HEIGHT = 4,
		MULTI_EDIT_FONT_HEIGHT = 15
	};
	// Fields
protected:
	long m_nItemID{};

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	int32_t m_bWhisper{};

protected:
	ZRef<CCtrlCheckBox> m_pCheckWhisper;

protected:
	ZRef<CCtrlMLEdit> m_pEditInput;

protected:
	long m_nDialogType{};
	// Methods
public:
	virtual ~CUIAvatarMegaphone();

public:
	void _dtor_0();

public:
	CUIAvatarMegaphone(const CUIAvatarMegaphone &arg0);

public:
	void _ctor_1(const CUIAvatarMegaphone &arg0);

public:
	CUIAvatarMegaphone(long nItemID, int32_t bWhisper);

public:
	void _ctor_0(long nItemID, int32_t bWhisper);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnChildNotify(uint32_t uId, uint32_t param1, uint32_t param2);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	void GetText(ZXString<char> &sInput1, ZXString<char> &sInput2, ZXString<char> &sInput3, ZXString<char> &sInput4);

public:
	int32_t IsCheckWhisper();

public:
	CUIAvatarMegaphone &operator=(const CUIAvatarMegaphone &arg0);

public:
	static CUIAvatarMegaphone &_op_assign_10(CUIAvatarMegaphone *pThis, const CUIAvatarMegaphone &arg0);
};
STATIC_ASSERT_SIZE(CUIAvatarMegaphone, 188);
class CUIReceiveGift : public CDialog
{
	// Nested
public:
	enum ID_CTRL_EDIT_TEXT
	{
		ID_CTRL_EDIT_TEXT = 1000
	};
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlEdit> m_pEdit;

protected:
	long m_nItemID{};

protected:
	ZXString<char> m_sSendCharacterName;

protected:
	ZXString<char> m_sText;

protected:
	ZXString<char> m_sMemo;
	// Methods
public:
	virtual ~CUIReceiveGift();

public:
	void _dtor_0();

public:
	CUIReceiveGift(const CUIReceiveGift &arg0);

public:
	void _ctor_1(const CUIReceiveGift &arg0);

public:
	CUIReceiveGift();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void SetRet(long nRet);

public:
	void GetResult(ZXString<char> &sMsg);

public:
	void SetValues(long nItemID, ZXString<char> sSendCharacterName, ZXString<char> sText);

public:
	CUIReceiveGift &operator=(const CUIReceiveGift &arg0);

public:
	static CUIReceiveGift &_op_assign_8(CUIReceiveGift *pThis, const CUIReceiveGift &arg0);
};
STATIC_ASSERT_SIZE(CUIReceiveGift, 176);
class CSpeakerWorldDlgEx : public CDialog
{
	// Nested
public:
	enum ID_CTRL_
	{
		ID_CTRL_CHECKBOX_WHISPER = 1000,
		ID_CTRL_EDIT_INPUT = 1001,
		ID_CTRL_EDIT_INPUT2 = 1002,
		ID_CTRL_EDIT_INPUT3 = 1003,
		ID_CTRL_BT_SAMPLE = 1004,
		ID_CTRL_BT_PREVIEW = 1005
	};
	// Fields
protected:
	ZRef<CCtrlCheckBox> m_pCheckBoxWhisper;

protected:
	ZRef<CCtrlEdit> m_pEditInput;

protected:
	ZRef<CCtrlEdit> m_pEditInput2;

protected:
	ZRef<CCtrlEdit> m_pEditInput3;

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	ZRef<CCtrlButton> m_pBtSample;

protected:
	ZRef<CCtrlButton> m_pBtPreview;

protected:
	long m_nItemID{};

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CSpeakerWorldDlgEx();

public:
	void _dtor_0();

public:
	CSpeakerWorldDlgEx(const CSpeakerWorldDlgEx &arg0);

public:
	void _ctor_1(const CSpeakerWorldDlgEx &arg0);

public:
	CSpeakerWorldDlgEx(long nItemID);

public:
	void _ctor_0(long nItemID);

public:
	virtual void OnCreate(void *pData);

public:
	void GetResult(ZXString<char> &sResult1, ZXString<char> &sResult2, ZXString<char> &sResult3, int32_t &bCheckWhisper);

public:
	virtual void OnButtonClicked(uint32_t arg0);

public:
	CSpeakerWorldDlgEx &operator=(const CSpeakerWorldDlgEx &arg0);

public:
	static CSpeakerWorldDlgEx &_op_assign_6(CSpeakerWorldDlgEx *pThis, const CSpeakerWorldDlgEx &arg0);
};
STATIC_ASSERT_SIZE(CSpeakerWorldDlgEx, 240);
class CUIAntiMacroNotice : public CDialog
{
	// Nested
public:
	enum ID_CTRL_EDIT_INPUT
	{
		ID_CTRL_EDIT_INPUT = 1000
	};
	// Fields
protected:
	ZRef<CCtrlEdit> m_pEditInput;

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	_x_com_ptr<IWzCanvas> m_pAdminAvatar;

protected:
	ZArray<ZXString<char>> m_asText;

protected:
	long m_nType{};

protected:
	long m_nAntiMacroType{};

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIAntiMacroNotice();

public:
	void _dtor_0();

public:
	CUIAntiMacroNotice(const CUIAntiMacroNotice &arg0);

public:
	void _ctor_1(const CUIAntiMacroNotice &arg0);

public:
	CUIAntiMacroNotice(long nType, long nAntiMacroType);

public:
	void _ctor_0(long nType, long nAntiMacroType);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	CUIAntiMacroNotice &operator=(const CUIAntiMacroNotice &arg0);

public:
	static CUIAntiMacroNotice &_op_assign_5(CUIAntiMacroNotice *pThis, const CUIAntiMacroNotice &arg0);
};
STATIC_ASSERT_SIZE(CUIAntiMacroNotice, 196);
class CUISendGift : public CDialog
{
	// Nested
public:
	enum ID_CTRL_EDIT_
	{
		ID_CTRL_EDIT_GIVETO = 1000,
		ID_CTRL_EDIT_TEXT = 1001,
		ID_CTRL_EDIT_TEXT2 = 1002
	};
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlEdit> m_pEditReceiver;

protected:
	ZRef<CCtrlEdit> m_pEditContent1;

protected:
	ZRef<CCtrlEdit> m_pEditContent2;

protected:
	ZXString<char> m_sReceiver;

protected:
	ZXString<char> m_sContent;

protected:
	int32_t m_bReceiverFixed{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerMessage;
	// Methods
public:
	virtual ~CUISendGift();

public:
	void _dtor_0();

public:
	CUISendGift(const CUISendGift &arg0);

public:
	void _ctor_1(const CUISendGift &arg0);

public:
	CUISendGift();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void SetRet(long nRet);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	void GetResult(ZXString<char> &sReceiver, ZXString<char> &sContent);

public:
	void SetReceiver(ZXString<char> sReceiver);

public:
	CUISendGift &operator=(const CUISendGift &arg0);

public:
	static CUISendGift &_op_assign_9(CUISendGift *pThis, const CUISendGift &arg0);
};
STATIC_ASSERT_SIZE(CUISendGift, 200);
class CUIChangingCharacterName : public CDialog, public TSingleton<CUIChangingCharacterName>
{
	// Nested
public:
	enum IT_CTRL_NEWCHAR_
	{
		IT_CTRL_NEWCHAR_NAME = 1000,
		IT_CTRL_NEWCHAR_BT_CHECK = 1001,
		IT_CTRL_NEWCHAR_BT_YES = 1002,
		IT_CTRL_NEWCHAR_BT_NO = 1003
	};
	// Fields

	SINGLETON_PAD;

protected:
	CCashShop *m_pCashShop{};

protected:
	ZRef<CCtrlButton> m_pBtCheck;

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlEdit> m_pEditCharacterName;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerMessage;

protected:
	ZXString<char> m_sNewCharacterName;

protected:
	long m_nBirthDate{};

protected:
	long m_nCommSN{};
	// Methods
public:
	virtual ~CUIChangingCharacterName();

public:
	void _dtor_0();

public:
	CUIChangingCharacterName(const CUIChangingCharacterName &arg0);

public:
	void _ctor_1(const CUIChangingCharacterName &arg0);

public:
	CUIChangingCharacterName(CCashShop *pCashShop);

public:
	void _ctor_0(CCashShop *pCashShop);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void SetRet(long nRet);

public:
	void SetNameValues(ZXString<char> sCharacterName);

public:
	void SetBirthDate(long nBirthDate);

public:
	long GetBirthDate();

public:
	long GetCommSN();

public:
	CUIChangingCharacterName &operator=(const CUIChangingCharacterName &arg0);

public:
	static CUIChangingCharacterName &_op_assign_11(CUIChangingCharacterName *pThis, const CUIChangingCharacterName &arg0);
};
STATIC_ASSERT_SIZE(CUIChangingCharacterName, 200);
class CUITransferWorldSelectDlg : public CDialog, public TSingleton<CUITransferWorldSelectDlg>
{
	// Nested
public:
	enum ID_CTRL_
	{
		ID_CTRL_BT_OK = 1000,
		ID_CTRL_BT_CANCEL = 1001,
		ID_CTRL_BT_CLOSE = 1002,
		ID_CTRL_CB_BLOCKREASON = 1003,
		ID_CTRL_EDIT_NAME = 1004,
		ID_CTRL_EDIT_DURATION = 1005,
		ID_CTRL_EDIT_DESCRIPTION = 1006
	};
	// Fields
	SINGLETON_PAD;

protected:
	CCashShop *m_pCashShop{};

protected:
	long m_nCharacterID{};

protected:
	ZXString<char> m_sCharacterName;

protected:
	long m_nTargetWorldID{};

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	ZRef<CCtrlComboBox> m_pCBWorldSelection;
	// Methods
public:
	virtual ~CUITransferWorldSelectDlg();

public:
	void _dtor_0();

public:
	CUITransferWorldSelectDlg(const CUITransferWorldSelectDlg &arg0);

public:
	void _ctor_1(const CUITransferWorldSelectDlg &arg0);

public:
	CUITransferWorldSelectDlg(CCashShop *pCashShop, ZXString<char> sCharacterName);

public:
	void _ctor_0(CCashShop *pCashShop, ZXString<char> sCharacterName);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	void GetResult(long &nTargetWorldID);

protected:
	void SetResult();

public:
	CUITransferWorldSelectDlg &operator=(const CUITransferWorldSelectDlg &arg0);

public:
	static CUITransferWorldSelectDlg &_op_assign_9(CUITransferWorldSelectDlg *pThis, const CUITransferWorldSelectDlg &arg0);
};
STATIC_ASSERT_SIZE(CUITransferWorldSelectDlg, 196);
class CUIWeddingInvitation : public CDialog
{
	// Nested
public:
	enum IT_
	{
		IT_VEGAS = 1,
		IT_CATHEDRAL = 2
	};

protected:
	ZXString<char> m_strGroomName;

protected:
	ZXString<char> m_strBrideName;

protected:
	long m_nType{};

protected:
	ZRef<CCtrlButton> m_pBtOK;
	// Methods
public:
	virtual ~CUIWeddingInvitation();

public:
	void _dtor_0();

public:
	CUIWeddingInvitation(const CUIWeddingInvitation &arg0);

public:
	void _ctor_1(const CUIWeddingInvitation &arg0);

public:
	CUIWeddingInvitation(ZXString<char> strGroomName, ZXString<char> strBrideName, long nType);

public:
	void _ctor_0(ZXString<char> strGroomName, ZXString<char> strBrideName, long nType);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	CUIWeddingInvitation &operator=(const CUIWeddingInvitation &arg0);

public:
	static CUIWeddingInvitation &_op_assign_5(CUIWeddingInvitation *pThis, const CUIWeddingInvitation &arg0);
};
STATIC_ASSERT_SIZE(CUIWeddingInvitation, 164);
class CUISendGifts : public CDialog
{
	// Nested
public:
	struct FRIEND
	{
		// Nested
		// Fields
	public:
		unsigned long dwFriendID{};

	public:
		ZXString<char> sFriendName;

	public:
		tagRECT rt{};
		// Methods
	public:
		~FRIEND();

	public:
		void _dtor_0();

	public:
		FRIEND(const CUISendGifts::FRIEND &arg0);

	public:
		void _ctor_1(const CUISendGifts::FRIEND &arg0);

	public:
		FRIEND();

	public:
		void _ctor_0();

	public:
		CUISendGifts::FRIEND &operator=(const CUISendGifts::FRIEND &arg0);

	public:
		static CUISendGifts::FRIEND &_op_assign_3(CUISendGifts::FRIEND *pThis, const CUISendGifts::FRIEND &arg0);
	};

public:
	struct GUILD
	{
		// Nested
		// Fields
	public:
		unsigned long dwMemberID{};

	public:
		ZXString<char> sMemberName;

	public:
		tagRECT rt{};
		// Methods
	public:
		~GUILD();

	public:
		void _dtor_0();

	public:
		GUILD(const CUISendGifts::GUILD &arg0);

	public:
		void _ctor_1(const CUISendGifts::GUILD &arg0);

	public:
		GUILD();

	public:
		void _ctor_0();

	public:
		CUISendGifts::GUILD &operator=(const CUISendGifts::GUILD &arg0);

	public:
		static CUISendGifts::GUILD &_op_assign_3(CUISendGifts::GUILD *pThis, const CUISendGifts::GUILD &arg0);
	};

public:
	enum UnnamedEnum46573
	{
		ID_CTRL_EDIT_GIVETO = 1000,
		ID_CTRL_EDIT_TEXT = 1001,
		ID_CTRL_EDIT_TEXT2 = 1002,
		ID_CTRL_BT_FRIEND = 1003,
		ID_CTRL_BT_GUILD = 1004,
		ID_CTRL_BT_HIDE = 1005,
		ID_CTRL_BT_ADD = 1006,
		ID_CTRL_BT_REMOVE = 1007,
		ID_CTRL_SCROLLBAR = 1008,
		kList_X = 283,
		kList_Y = 53,
		kList_Text = 293,
		kList_Text_Gap = 2,
		kList_Gap = 18,
		kList_W = 153,
		BACKGRND_HEIGHT = 169,
		BACKGRND_WIDTH_MAX = 473,
		BACKGRND_WIDTH_NORMAL = 266
	};
	enum UnnamedEnum54041
	{
		LIST_HIDDEN = 0,
		FRIENDLIST_SHOWN = 1,
		GUILDLIST_SHOWN = 2
	};
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlButton> m_pBtFriend;

protected:
	ZRef<CCtrlButton> m_pBtGuild;

protected:
	ZRef<CCtrlButton> m_pBtHide;

protected:
	ZRef<CCtrlButton> m_pBtAdd;

protected:
	ZRef<CCtrlButton> m_pBtRemove;

protected:
	ZRef<CCtrlScrollBar> m_pScrollBar;

protected:
	ZRef<CCtrlEdit> m_pEditReceiver;

protected:
	ZRef<CCtrlEdit> m_pEditContent1;

protected:
	ZRef<CCtrlEdit> m_pEditContent2;

protected:
	ZXString<char> m_sContent;

protected:
	ZArray<ZXString<char>> m_aReceiver;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerMessage;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerMessage2;

protected:
	long m_nState{};

protected:
	ZArray<CUISendGifts::FRIEND> m_aFriend;

protected:
	ZArray<CUISendGifts::GUILD> m_aGuild;

protected:
	long m_nItem{};

protected:
	long m_nViewItem{};

protected:
	unsigned long m_dwCurCID{};

protected:
	_x_com_ptr<IWzFont> m_pFontBlack;

protected:
	_x_com_ptr<IWzFont> m_pFontWhite;

protected:
	_x_com_ptr<IWzFont> m_pFontGray;

protected:
	ZXString<char> m_sTempReciever;

protected:
	ZXString<char> m_sTempContent1;

protected:
	ZXString<char> m_sTempContent2;
	// Methods
public:
	virtual ~CUISendGifts();

public:
	void _dtor_0();

public:
	CUISendGifts(const CUISendGifts &arg0);

public:
	void _ctor_1(const CUISendGifts &arg0);

public:
	CUISendGifts();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void SetRet(long nRet);

public:
	void SetState(long nState);

public:
	void SetLayer();

public:
	void SetScrollBar();

public:
	void SetCtrl();

public:
	void LoadData();

public:
	unsigned long GetMemberIDFromPoint(long rx, long ry, long nScrPos, int32_t bFlag);

public:
	ZXString<char> GetCharacterNameFromPoint(long rx, long ry, long nScrPos, int32_t bFlag);

public:
	void AddReciever(ZXString<char> sSelect);

public:
	void GetResult(ZArray<ZXString<char>> &saReceiver, ZXString<char> &sContent);

public:
	CUISendGifts &operator=(const CUISendGifts &arg0);

public:
	static CUISendGifts &_op_assign_19(CUISendGifts *pThis, const CUISendGifts &arg0);
};
STATIC_ASSERT_SIZE(CUISendGifts, 296);
class CSpeakerWorldDlg : public CDialog
{
	// Nested
public:
	enum ID_CTRL_
	{
		ID_CTRL_CHECKBOX_WHISPER = 1000,
		ID_CTRL_EDIT_INPUT = 1001
	};
	enum ID_SPEAKER_
	{
		ID_SPEAKER_HEART = 0,
		ID_SPEAKER_SKULL = 1
	};
	// Fields
protected:
	ZRef<CCtrlCheckBox> m_pCheckBoxWhisper;

protected:
	int32_t m_bEnableCBWhisper{};

protected:
	ZRef<CCtrlEdit> m_pEditInput;

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlButton> m_pBtClose;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CSpeakerWorldDlg();

public:
	void _dtor_0();

public:
	CSpeakerWorldDlg(const CSpeakerWorldDlg &arg0);

public:
	void _ctor_1(const CSpeakerWorldDlg &arg0);

public:
	CSpeakerWorldDlg(unsigned long arg0);

public:
	void _ctor_0(unsigned long arg0);

public:
	CSpeakerWorldDlg(int32_t bIsPowerful);

public:
	void _ctor_3(int32_t bIsPowerful);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	void GetResult(ZXString<char> &sResult, int32_t &bCheckWhisper);

public:
	CSpeakerWorldDlg &operator=(const CSpeakerWorldDlg &arg0);

public:
	static CSpeakerWorldDlg &_op_assign_7(CSpeakerWorldDlg *pThis, const CSpeakerWorldDlg &arg0);
};
STATIC_ASSERT_SIZE(CSpeakerWorldDlg, 208);
class CMatchTableDlg : public CDialog
{
	// Nested
public:
	enum ID_CTRL_BT_ROLL
	{
		ID_CTRL_BT_ROLLUP = 1000,
		ID_CTRL_BT_ROLLDOWN = 1001
	};
	enum UnnamedEnum53948
	{
		LOW_PART = 1,
		HIGH_PART = 2
	};
	// Fields
protected:
	std::array<std::array<unsigned long, 6>, 32> m_aaMatch;

protected:
	std::array<ZRef<CAvatar>, 8> m_apAvatar;

protected:
	std::array<ZXString<char>, 8> m_asCharacterName;

protected:
	long m_nState{};

protected:
	long m_nScroll{};

protected:
	CField_Tournament *m_pField{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerHighBack;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerHighAvatarLine;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerHighTable;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerHighName;

protected:
	_x_com_ptr<IWzProperty> m_pMinigameTable;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvas;

protected:
	_x_com_ptr<IWzFont> m_pFont;

protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	ZRef<CCtrlButton> m_pBtUP;

protected:
	ZRef<CCtrlButton> m_pBtDown;
	// Methods
public:
	virtual ~CMatchTableDlg();

public:
	void _dtor_0();

public:
	CMatchTableDlg(const CMatchTableDlg &arg0);

public:
	void _ctor_1(const CMatchTableDlg &arg0);

public:
	CMatchTableDlg(CInPacket &iPacket, CField_Tournament *pField);

public:
	void _ctor_0(CInPacket &iPacket, CField_Tournament *pField);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

protected:
	void DrawLine();

protected:
	void DrawAvatar();

protected:
	void DrawStateA();

protected:
	void DrawCharacterName();

protected:
	void CreateAvatar();

public:
	CMatchTableDlg &operator=(const CMatchTableDlg &arg0);

public:
	static CMatchTableDlg &_op_assign_10(CMatchTableDlg *pThis, const CMatchTableDlg &arg0);
};
STATIC_ASSERT_SIZE(CMatchTableDlg, 1072);
class CUIHope : public CDialog
{
	// Nested
public:
	enum ID_CTRL_EDIT_
	{
		ID_CTRL_EDIT_1 = 0,
		ID_CTRL_EDIT_2 = 1,
		ID_CTRL_EDIT_3 = 2
	};
	// Fields
protected:
	long m_nItemID{};

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	ZRef<CCtrlEdit> m_pEditInput1;

protected:
	ZRef<CCtrlEdit> m_pEditInput2;

protected:
	ZRef<CCtrlEdit> m_pEditInput3;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIHope();

public:
	void _dtor_0();

public:
	CUIHope(const CUIHope &arg0);

public:
	void _ctor_1(const CUIHope &arg0);

public:
	CUIHope(long nItemID);

public:
	void _ctor_0(long nItemID);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	void GetText(ZXString<char> &sInput1, ZXString<char> &sInput2, ZXString<char> &sInput3);

public:
	CUIHope &operator=(const CUIHope &arg0);

public:
	static CUIHope &_op_assign_8(CUIHope *pThis, const CUIHope &arg0);
};
STATIC_ASSERT_SIZE(CUIHope, 216);
class CUIMapleTV : public CDialog
{
	// Nested
public:
	enum ID_CTRL_
	{
		ID_CTRL_CHBOX_RECEIVER = 0,
		ID_CTRL_EDIT_RECEIVER = 1,
		ID_CTRL_EDIT_MSG = 2,
		ID_CTRL_EDIT_1 = 3,
		ID_CTRL_EDIT_2 = 4,
		ID_CTRL_EDIT_3 = 5,
		ID_CTRL_EDIT_4 = 6,
		ID_CTRL_EDIT_5 = 7,
		ID_CTRL_WHISPER = 8
	};
	enum MULTI_EDIT_PROPERTY
	{
		MULTI_EDIT_HORZ_MAX = 125,
		MULTI_EDIT_HORZ_SOLE_MAX = 170,
		MULTI_EDIT_MAX_HEIGHT = 5,
		MULTI_EDIT_FONT_HEIGHT = 15
	};
	enum EDITTVTYPE
	{
		NORMAL_MULTI_EDIT = 0,
		SOLE_MULTI_EDIT = 1,
		LOVE_MULTI_EDIT = 2
	};
	// Fields
protected:
	long m_nItemID{};

protected:
	ZRef<CCtrlCheckBox> m_pCheckBoxReceiver;

protected:
	std::array<_x_com_ptr<IWzCanvas>, 2> m_pReceiverBox;

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	int32_t m_bWhisper{};

protected:
	ZRef<CCtrlCheckBox> m_pCheckWhisper;

protected:
	ZRef<CCtrlEdit> m_pEditInputReceiver;

protected:
	ZRef<CCtrlMLEdit> m_pEditInput;

protected:
	long m_nDialogType{};
	// Methods
public:
	virtual ~CUIMapleTV();

public:
	void _dtor_0();

public:
	CUIMapleTV(const CUIMapleTV &arg0);

public:
	void _ctor_1(const CUIMapleTV &arg0);

public:
	CUIMapleTV(long nItemID, long nTVType, int32_t bWhisper);

public:
	void _ctor_0(long nItemID, long nTVType, int32_t bWhisper);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnChildNotify(uint32_t uId, uint32_t param1, uint32_t param2);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	void GetText(ZXString<char> &sReceiver, ZXString<char> &sInput1, ZXString<char> &sInput2, ZXString<char> &sInput3, ZXString<char> &sInput4, ZXString<char> &sInput5);

public:
	long GetDialogType();

public:
	int32_t IsCheckWhisper();

protected:
	void setDialogType(long nDialogType);

public:
	CUIMapleTV &operator=(const CUIMapleTV &arg0);

public:
	static CUIMapleTV &_op_assign_12(CUIMapleTV *pThis, const CUIMapleTV &arg0);
};
STATIC_ASSERT_SIZE(CUIMapleTV, 212);
class CUITransferWorldLicenseNotice : public CDialog
{
	// Nested
public:
	enum ID_CTRL_SCROLLBAR
	{
		ID_CTRL_SCROLLBAR = 1000
	};
	enum k
	{
		kDialog_Width = 406,
		kDialog_Height = 424,
		kDialog_YPos_Adjustment = 216,
		kOKBtn_XPos = 275,
		kOKBtn_YPos = 395,
		kCancelBtn_XPos = 340,
		kCancelBtn_YPos = 395,
		kScroll_XPos = 384,
		kScroll_YPos = 47,
		kScroll_Height = 324,
		kScreen_Height = 317,
		kClipRectText_Left = 29,
		kClipRectText_Top = 51,
		kClipRectText_Width = 355
	};
	// Fields
protected:
	CCashShop *m_pCashShop{};

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlScrollBar> m_pScrollBar;

protected:
	ZArray<CT_INFO> m_aCT;

protected:
	ZArray<_x_com_ptr<IWzFont>> m_apFont;

protected:
	long m_nScrollPos{};

protected:
	long m_nScrollRange{};

protected:
	long m_nBirthDate{};

protected:
	long m_nCommSN{};
	// Methods
public:
	virtual ~CUITransferWorldLicenseNotice();

public:
	void _dtor_0();

public:
	CUITransferWorldLicenseNotice(const CUITransferWorldLicenseNotice &arg0);

public:
	void _ctor_1(const CUITransferWorldLicenseNotice &arg0);

public:
	CUITransferWorldLicenseNotice(void *pData);

public:
	void _ctor_0(void *pData);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void SetRet(long nRet);

public:
	void SetBirthDate(long nBirthDate);

public:
	long GetBirthDate();

public:
	long GetCommSN();

protected:
	void LoadFont();

public:
	CUITransferWorldLicenseNotice &operator=(const CUITransferWorldLicenseNotice &arg0);

public:
	static CUITransferWorldLicenseNotice &_op_assign_14(CUITransferWorldLicenseNotice *pThis, const CUITransferWorldLicenseNotice &arg0);
};
STATIC_ASSERT_SIZE(CUITransferWorldLicenseNotice, 196);
