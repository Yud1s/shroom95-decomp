// UtilDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Config/Config.hpp"

#include "CtrlWnd/CtrlWnd.hpp"
#include "Dialog/Dialog.hpp"
#include "CashShop_ShopSvrRes/CashShop_ShopSvrRes.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "MapLoadable/MapLoadable.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"
#include "GW/GW.hpp"
#include "Packet/Packet.hpp"

class CCtrlSlider;

// Level: 1 0x3482
class CUICancelCharacterCouponRequests;
// Level: 1 0x32ce
class CUtilDlg;
// Level: 1 0x3414
class CUIChannelShift;
// Level: 1 0x3511
class CUICashItemGachapon;
// Level: 1 0x3464
class CUIBlockUser;
// Level: 1 0x3532
class CUICashGachapon;
// Level: 1 0x34aa
class CUIGachaponBox;
// Level: 1 0x34c2
class CUIArtSpeakerSample;
// Level: 1 0x3551
class CUIPamsSong;
// Level: 1 0x342b
class CUIContextMenu;
// Level: 1 0x33ae
class CUIGameOpt;
// Level: 1 0x3496
class CUICancelCharacterCouponResults;
// Level: 1 0x3542
class CUIRandomMesoBag;
// Level: 1 0x33c3
class CUISysOpt;

class CUICancelCharacterCouponRequests : public CDialog
{
	// Nested
public:
	enum ID_CTRL_BT_
	{
		ID_CTRL_BT_YES = 1000,
		ID_CTRL_BT_NO = 1001
	};
	// Fields
protected:
	long m_nType{};

protected:
	ZRef<CCtrlButton> m_pBtYes;

protected:
	ZRef<CCtrlButton> m_pBtNo;
	// Methods
public:
	virtual ~CUICancelCharacterCouponRequests();

public:
	void _dtor_0();

public:
	CUICancelCharacterCouponRequests(const CUICancelCharacterCouponRequests &arg0);

public:
	void _ctor_1(const CUICancelCharacterCouponRequests &arg0);

public:
	CUICancelCharacterCouponRequests(long nType);

public:
	void _ctor_0(long nType);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	CUICancelCharacterCouponRequests &operator=(const CUICancelCharacterCouponRequests &arg0);

public:
	static CUICancelCharacterCouponRequests &_op_assign_7(CUICancelCharacterCouponRequests *pThis, const CUICancelCharacterCouponRequests &arg0);
};
STATIC_ASSERT_SIZE(CUICancelCharacterCouponRequests, 164);
class CUtilDlg : public CDialog
{
public:
	static ZList<CUtilDlg *> ms_lDialog;
	// Nested
public:
	enum ID_CTRL_
	{
		ID_CTRL_EDIT_INPUT = 3000,
		ID_CTRL_COMBOBOX = 3001,
		ID_CTRL_CHECKBOX = 3002
	};
	enum UnnamedEnum4881
	{
		TH = 20,
		CH = 16,
		SH = 15,
		MH = 21
	};
	// Fields
public:
	int32_t m_bCenter{};

public:
	int32_t m_bMsgImage{};

public:
	long m_bMsgImage_Img{};

public:
	int32_t m_bFixedW{};

public:
	int32_t m_bLine{};

public:
	int32_t m_bComboBox{};

public:
	int32_t m_bCheckBox{};

public:
	long m_nCheckBox_S{};

public:
	ZXString<char> m_sCheckBoxMsg;

protected:
	long m_nUtilDlgType{};

protected:
	long m_nHorzMax{};

protected:
	ZXString<char> m_sMsgDefault;

protected:
	ZRef<CCtrlEdit> m_pEditInput;

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtYes;

protected:
	ZRef<CCtrlButton> m_pBtNo;

protected:
	ZRef<CCtrlComboBox> m_pComboBox;

protected:
	ZRef<CCtrlCheckBox> m_pCheckBox;

protected:
	ZArray<ZXString<char>> m_aMsg;

protected:
	int32_t m_bNoEnterInput{};
	// Methods
public:
	virtual ~CUtilDlg();

public:
	void _dtor_0();

public:
	CUtilDlg(const CUtilDlg &arg0);

public:
	void _ctor_1(const CUtilDlg &arg0);

public:
	CUtilDlg();

public:
	void _ctor_0();

public:
	static int32_t __cdecl Notice(ZXString<char> sMsg, const wchar_t *sSndName, ZRef<CDialog> *ppDialog, int32_t bAutoSeparated, int32_t bIsTightLine);

public:
	static int32_t __cdecl NoticeOnTop(ZXString<char> arg0, const wchar_t *arg1, ZRef<CDialog> *arg2, int32_t arg3, int32_t arg4);

public:
	static int32_t __cdecl YesNo(ZXString<char> sMsg, int32_t bCenter, int32_t bFixedW);
	static int32_t __cdecl YesNo_1(ZXString<char> sMsg, int32_t bCenter, int32_t bFixedW)
	{
		return YesNo(sMsg, bCenter, bFixedW);
	}

public:
	static int32_t __cdecl YesNo(ZXString<char> sMsg, const wchar_t *sSndName, ZRef<CDialog> *ppDialog, int32_t bAutoSeparated, int32_t bNoEnterInput);
	static int32_t __cdecl YesNo_0(ZXString<char> sMsg, const wchar_t *sSndName, ZRef<CDialog> *ppDialog, int32_t bAutoSeparated, int32_t bNoEnterInput)
	{
		return YesNo(sMsg, sSndName, ppDialog, bAutoSeparated, bNoEnterInput);
	}

public:
	static int32_t __cdecl YesNo2(ZXString<char> sMsg, const wchar_t *sSndName, ZRef<CDialog> *ppDialog, int32_t bAutoSeparated, int32_t bNoEnterInput);

public:
	static void __cdecl ForcedRet();

public:
	virtual void PreCreateWnd(long l, long t, long w, long h, long z, int32_t bScreenCoord, void *pData);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	// TODO
	void SetUtilDlg(long nUtilDlgType, ZXString<char> sMsg, const wchar_t *sSndName, int32_t bAutoSeparated, int32_t bNoEnterInput, int32_t bIsTightLine);
	void SetUtilDlg_1(long nUtilDlgType, ZXString<char> sMsg, const wchar_t *sSndName, int32_t bAutoSeparated, int32_t bNoEnterInput, int32_t bIsTightLine)
	{
		SetUtilDlg(nUtilDlgType, sMsg, sSndName, bAutoSeparated, bNoEnterInput, bIsTightLine);
	}

public:
	void SetUtilDlg(long nUtilDlgType, const wchar_t *sSndName, int32_t bNoEnterInput, int32_t bIsTightLine);
	void SetUtilDlg_0(long nUtilDlgType, const wchar_t *sSndName, int32_t bNoEnterInput, int32_t bIsTightLine)
	{
		SetUtilDlg(nUtilDlgType, sSndName, bNoEnterInput, bIsTightLine);
	}

public:
	void SetUtilDlg_Input(long nHorzMax, ZXString<char> sMsgDefault);

public:
	void SetUtilDlg_COMBOBOX(ZList<ZXString<char>> &lItems);

public:
	ZXString<char> GetInputResult();

public:
	ZXString<char> GetComboBoxStr();

public:
	int32_t IsCheckBoxChecked();

protected:
	long GetTextTileCount();

public:
	CUtilDlg &operator=(const CUtilDlg &arg0);

public:
	static CUtilDlg &_op_assign_22(CUtilDlg *pThis, const CUtilDlg &arg0);
};
STATIC_ASSERT_SIZE(CUtilDlg, 248);
class CUIChannelShift : public CDialog
{
	// Nested
public:
	enum k
	{
		kWidth = 370,
		kHeight = 168,
		kDragRegionHeight = 24,
		kColumnCount = 5
	};
	// Fields
protected:
	long m_nSel{};

protected:
	long m_nChannelID{};

protected:
	long m_nChannelCount{};

protected:
	int32_t m_bIsAdult{};

protected:
	std::array<_x_com_ptr<IWzCanvas>, 3> m_pCanvasBack;

protected:
	std::array<_x_com_ptr<IWzCanvas>, 2> m_pCanvasItem;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerWorld;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerName;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerBackGround;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIChannelShift();

public:
	void _dtor_0();

public:
	CUIChannelShift(const CUIChannelShift &arg0);

public:
	void _ctor_1(const CUIChannelShift &arg0);

public:
	CUIChannelShift();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *arg0);

public:
	virtual void SetRet(long nRet);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	long GetResult();

protected:
	tagRECT GetRectFromIdx(long idx);

protected:
	long GetIdxFromPoint(long rx, long ry);

public:
	CUIChannelShift &operator=(const CUIChannelShift &arg0);

public:
	static CUIChannelShift &_op_assign_12(CUIChannelShift *pThis, const CUIChannelShift &arg0);
};
STATIC_ASSERT_SIZE(CUIChannelShift, 212);
class CUICashItemGachapon : public CUniqueModeless
{
	// Nested
public:
	enum ID_CTRL_BT_
	{
		ID_CTRL_BT_OPEN = 2000,
		ID_CTRL_BT_CLOSE = 2001
	};
	// Fields
protected:
	CCashShop *m_pCashShop{};

protected:
	long m_nState{};

protected:
	long m_nResultState{};

protected:
	long m_nReturnResult{};

protected:
	long m_nResult{};

protected:
	long m_nIUC{};

protected:
	_LARGE_INTEGER m_liItemSN;

protected:
	long m_nPOS{};

protected:
	long m_nSelectedItemID{};

protected:
	long m_nSelectedItemCount{};

protected:
	int32_t m_bRequestSent{};

protected:
	int32_t m_bShowResult{};

protected:
	int32_t m_bCloseButtonEnabled{};

protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	ZRef<CCtrlButton> m_pBtOpen;

protected:
	ZRef<GW_ItemSlotBase> m_pSelectedItem;

protected:
	long m_tStart{};

protected:
	long m_tEnd{};

protected:
	int32_t m_bJackpot{};

protected:
	_x_com_ptr<IWzCanvas> m_pStartAnimation;

protected:
	_x_com_ptr<IWzCanvas> m_pEndAnimation;

protected:
	_x_com_ptr<IWzCanvas> m_pEndAnimationJackpot;

protected:
	int32_t m_nItemTI{};

protected:
	int32_t m_nSlotPosition{};

protected:
	CUIToolTip m_uiToolTip;
	// Methods
public:
	virtual ~CUICashItemGachapon();

public:
	void _dtor_0();

public:
	CUICashItemGachapon(const CUICashItemGachapon &arg0);

public:
	void _ctor_1(const CUICashItemGachapon &arg0);

public:
	CUICashItemGachapon(_LARGE_INTEGER liSN, CCashShop *pCashShop, long nItemID);

public:
	void _ctor_0(_LARGE_INTEGER liSN, CCashShop *pCashShop, long nItemID);

public:
	virtual void OnCreate(void *pData);

public:
	void OnCashItemGachaponResult(CInPacket &iPacket);

public:
	void ShowResult();

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Update();

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void ClearToolTip();

public:
	int32_t PutItem(GW_ItemSlotBase *arg0, long arg1, long arg2);

	CLASS_RTTI_(CUICashItemGachapon, CUniqueModeless);

public:
	CUICashItemGachapon &operator=(const CUICashItemGachapon &arg0);

public:
	static CUICashItemGachapon &_op_assign_15(CUICashItemGachapon *pThis, const CUICashItemGachapon &arg0);
};
STATIC_ASSERT_SIZE(CUICashItemGachapon, 2896);
class CUIBlockUser : public CDialog, public TSingleton<CUIBlockUser>
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
private:
	SINGLETON_PAD;

protected:
	ZXString<char> m_sCharacterName;

protected:
	unsigned long m_nDuration{};

protected:
	unsigned long m_nBlockReason{};

protected:
	ZXString<char> m_sDescription;

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	ZRef<CCtrlEdit> m_pEditDuration;

protected:
	ZRef<CCtrlEdit> m_pEditDesciption;

protected:
	ZRef<CCtrlComboBox> m_pCBBlockReason;
	// Methods
public:
	virtual ~CUIBlockUser();

public:
	void _dtor_0();

public:
	CUIBlockUser(const CUIBlockUser &arg0);

public:
	void _ctor_1(const CUIBlockUser &arg0);

public:
	CUIBlockUser(ZXString<char> sCharacterName, unsigned long nDuration, unsigned long nBlockReason);

public:
	void _ctor_0(ZXString<char> sCharacterName, unsigned long nDuration, unsigned long nBlockReason);

public:
	virtual void OnCreate(void *arg0);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	void GetResult(unsigned long &nDuration, unsigned long &nBlockReason, ZXString<char> &sDescription);

protected:
	void SetResult();

public:
	CUIBlockUser &operator=(const CUIBlockUser &arg0);

public:
	static CUIBlockUser &_op_assign_9(CUIBlockUser *pThis, const CUIBlockUser &arg0);
};
STATIC_ASSERT_SIZE(CUIBlockUser, 212);
class CUICashGachapon : public CUniqueModeless
{
	// Nested
public:
	enum ID_CTRL_BT_
	{
		ID_CTRL_BT_OPEN = 2000,
		ID_CTRL_BT_CLOSE = 2001,
		ID_CTRL_BT_CANCEL = 2002,
		ID_CTRL_BT_ITEMCOPY = 2003
	};
	enum EFFECT_
	{
		EFFECT_None = 0,
		EFFECT_Open1 = 1,
		EFFECT_Open2 = 2,
		EFFECT_CopySuccess = 3,
		EFFECT_CopyFailed1 = 4,
		EFFECT_CopyFailed2 = 5,
		EFFECT_ItemOne = 6,
		EFFECT_ItemTwo = 7
	};
	// Fields
protected:
	CCashShop *m_pCashShop{};

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasTemp;

protected:
	_LARGE_INTEGER m_liItemSN;

protected:
	ZRef<CCtrlButton> m_pBtOpen;

protected:
	ZRef<CCtrlButton> m_pBtItemCopy;

protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<GW_ItemSlotBase> m_pSelectedItem;

protected:
	_x_com_ptr<IWzCanvas> m_pStartAnimation;

protected:
	_x_com_ptr<IWzCanvas> m_pEndAnimation;

protected:
	_x_com_ptr<IWzCanvas> m_pEndAnimationJackpot;

protected:
	long m_nEffectDisp{};

protected:
	long m_tEffectNext{};

protected:
	long m_nEffectIndex{};

protected:
	_x_com_ptr<IWzCanvas> m_pEffect;

protected:
	long m_nSelectedItemID{};

protected:
	long m_nSelectedItemCount{};

protected:
	long m_nLostItemID{};

protected:
	long m_nLostItemNumber{};

protected:
	CUIToolTip m_uiToolTip;
	// Methods
public:
	virtual ~CUICashGachapon();

public:
	void _dtor_0();

public:
	CUICashGachapon(const CUICashGachapon &arg0);

public:
	void _ctor_1(const CUICashGachapon &arg0);

public:
	CUICashGachapon(_LARGE_INTEGER liSN, CCashShop *pCashShop);

public:
	void _ctor_0(_LARGE_INTEGER liSN, CCashShop *pCashShop);

public:
	virtual void OnCreate(void *pData);

public:
	void OnCashGachaponOpenResult(long nItemID, long nCount);

public:
	void OnCashGachaponItemCopyResult(int32_t bRandomItemCopy, long nLostItemID, long nLostItemNumber);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Update();

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void ClearToolTip();

public:
	int32_t PutItem(GW_ItemSlotBase *arg0, long arg1, long arg2);

	CLASS_RTTI_(CUICashGachapon, CUniqueModeless);

public:
	CUICashGachapon &operator=(const CUICashGachapon &arg0);

public:
	static CUICashGachapon &_op_assign_16(CUICashGachapon *pThis, const CUICashGachapon &arg0);
};
STATIC_ASSERT_SIZE(CUICashGachapon, 2888);
class CUIGachaponBox : public CDialog
{
	// Nested
public:
	enum ID_CTRL_BT_
	{
		ID_CTRL_BT_OK = 1000,
		ID_CTRL_BT_CANCEL = 1001
	};
	// Fields
protected:
	long m_nBoxStatus{};

protected:
	int32_t m_bIsGoldBox{};

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;
	// Methods
public:
	virtual ~CUIGachaponBox();

public:
	void _dtor_0();

public:
	CUIGachaponBox(const CUIGachaponBox &arg0);

public:
	void _ctor_1(const CUIGachaponBox &arg0);

public:
	CUIGachaponBox(long nBoxStatus, int32_t bIsGoldBox);

public:
	void _ctor_0(long nBoxStatus, int32_t bIsGoldBox);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	CUIGachaponBox &operator=(const CUIGachaponBox &arg0);

public:
	static CUIGachaponBox &_op_assign_7(CUIGachaponBox *pThis, const CUIGachaponBox &arg0);
};
STATIC_ASSERT_SIZE(CUIGachaponBox, 168);
class CUIArtSpeakerSample : public CDialog
{
	// Nested
public:
	enum ID_CTRL_BT_BASE
	{
		ID_CTRL_BT_BASE = 2000
	};
	// Fields
protected:
	ZArray<ZRef<CCtrlButton>> m_arrBts;

protected:
	long m_nResult{};

protected:
	long m_nBtNumber{};

protected:
	_x_com_ptr<IWzProperty> m_pProp;

protected:
	long m_nItemID{};
	// Methods
public:
	virtual ~CUIArtSpeakerSample();

public:
	void _dtor_0();

public:
	CUIArtSpeakerSample(const CUIArtSpeakerSample &arg0);

public:
	void _ctor_1(const CUIArtSpeakerSample &arg0);

public:
	CUIArtSpeakerSample(long nItemID, tagPOINT pt);

public:
	void _ctor_0(long nItemID, tagPOINT pt);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	long GetResult();

public:
	CUIArtSpeakerSample &operator=(const CUIArtSpeakerSample &arg0);

public:
	static CUIArtSpeakerSample &_op_assign_10(CUIArtSpeakerSample *pThis, const CUIArtSpeakerSample &arg0);
};
STATIC_ASSERT_SIZE(CUIArtSpeakerSample, 164);
class CUIPamsSong : public CDialog
{
	// Nested
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtOk;

protected:
	ZRef<CCtrlButton> m_pBtCancel;
	// Methods
public:
	virtual ~CUIPamsSong();

public:
	void _dtor_0();

public:
	CUIPamsSong(const CUIPamsSong &arg0);

public:
	void _ctor_1(const CUIPamsSong &arg0);

public:
	CUIPamsSong();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	CUIPamsSong &operator=(const CUIPamsSong &arg0);

public:
	static CUIPamsSong &_op_assign_4(CUIPamsSong *pThis, const CUIPamsSong &arg0);
};
STATIC_ASSERT_SIZE(CUIPamsSong, 160);
class CUIContextMenu : public CDialog
{
	// Nested
public:
	enum ID_CTRL_BT_
	{
		ID_CTRL_BT_INFO = 2000,
		ID_CTRL_BT_SAVE = 2001,
		ID_CTRL_BT_TRADE = 2002,
		ID_CTRL_BT_CASHTRADE = 2003,
		ID_CTRL_BT_WHISPER = 2004,
		ID_CTRL_BT_PARTY = 2005,
		ID_CTRL_BT_EXPEDITION = 2006,
		ID_CTRL_BT_GUILD = 2007,
		ID_CTRL_BT_CLAIM = 2008,
		ID_CTRL_BT_FAMILY = 2009,
		ID_CTRL_BT_FOLLOW = 2010
	};
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtInfo;

protected:
	ZRef<CCtrlButton> m_pBtSave;

protected:
	ZRef<CCtrlButton> m_pBtTrade;

protected:
	ZRef<CCtrlButton> m_pBtCashTrade;

protected:
	ZRef<CCtrlButton> m_pBtWhisper;

protected:
	ZRef<CCtrlButton> m_pBtParty;

protected:
	ZRef<CCtrlButton> m_pBtExpedition;

protected:
	ZRef<CCtrlButton> m_pBtGuild;

protected:
	ZRef<CCtrlButton> m_pBtClaim;

protected:
	ZRef<CCtrlButton> m_pBtFamily;

protected:
	ZRef<CCtrlButton> m_pBtFollow;

protected:
	ZXString<char> m_sCharacterName;

protected:
	long m_nResult{};

protected:
	long m_nBtNumber{};

protected:
	int32_t m_bParty{};

protected:
	int32_t m_bExpedition{};

protected:
	int32_t m_bGuild{};

protected:
	int32_t m_bFamily{};

protected:
	int32_t m_bCantFollow{};
	// Methods
public:
	virtual ~CUIContextMenu();

public:
	void _dtor_0();

public:
	CUIContextMenu(const CUIContextMenu &arg0);

public:
	void _ctor_1(const CUIContextMenu &arg0);

public:
	CUIContextMenu(ZXString<char> sCharacterName, tagPOINT pt, int32_t bCantFollow);

public:
	void _ctor_0(ZXString<char> sCharacterName, tagPOINT pt, int32_t bCantFollow);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	long GetResult();

public:
	CUIContextMenu &operator=(const CUIContextMenu &arg0);

public:
	static CUIContextMenu &_op_assign_10(CUIContextMenu *pThis, const CUIContextMenu &arg0);
};
STATIC_ASSERT_SIZE(CUIContextMenu, 264);
class CUIGameOpt : public CDialog
{
	// Nested
public:
	enum ID_CTRL_CHECKBOX_
	{
		ID_CTRL_CHECKBOX_MINIMAP = 1000,
		ID_CTRL_CHECKBOX_WHISPER = 1001,
		ID_CTRL_CHECKBOX_FRIEND = 1002,
		ID_CTRL_CHECKBOX_MESSENGER = 1003,
		ID_CTRL_CHECKBOX_EXCHANGE = 1004,
		ID_CTRL_CHECKBOX_PARTY = 1005,
		ID_CTRL_CHECKBOX_PARTYSEARCH = 1006,
		ID_CTRL_CHECKBOX_EXPEDITION = 1007,
		ID_CTRL_CHECKBOX_GAME = 1008,
		ID_CTRL_CHECKBOX_GUILDINVITE = 1009,
		ID_CTRL_CHECKBOX_GUILDTALK = 1010,
		ID_CTRL_CHECKBOX_ALLIANCEINVITE = 1011,
		ID_CTRL_CHECKBOX_ALLIANCETALK = 1012,
		ID_CTRL_CHECKBOX_FAMILY = 1013,
		ID_CTRL_CHECKBOX_FOLLOWREQUEST = 1014
	};
	// Fields
protected:
	ZRef<CCtrlCheckBox> m_pCB_MiniMap;

protected:
	ZRef<CCtrlCheckBox> m_pCB_Whisper;

protected:
	ZRef<CCtrlCheckBox> m_pCB_Friend;

protected:
	ZRef<CCtrlCheckBox> m_pCB_Messenger;

protected:
	ZRef<CCtrlCheckBox> m_pCB_Exchange;

protected:
	ZRef<CCtrlCheckBox> m_pCB_Party;

protected:
	ZRef<CCtrlCheckBox> m_pCB_PartySearch;

protected:
	ZRef<CCtrlCheckBox> m_pCB_Expedition;

protected:
	ZRef<CCtrlCheckBox> m_pCB_GuildInvite;

protected:
	ZRef<CCtrlCheckBox> m_pCB_GuildTalk;

protected:
	ZRef<CCtrlCheckBox> m_pCB_AllianceInvite;

protected:
	ZRef<CCtrlCheckBox> m_pCB_AllianceTalk;

protected:
	ZRef<CCtrlCheckBox> m_pCB_Family;

protected:
	ZRef<CCtrlCheckBox> m_pCB_FollowRequest;

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	CONFIG_GAMEOPT m_gameOptOld;

protected:
	CONFIG_GAMEOPT m_gameOptCur;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIGameOpt();

public:
	void _dtor_0();

public:
	CUIGameOpt(const CUIGameOpt &arg0);

public:
	void _ctor_1(const CUIGameOpt &arg0);

public:
	CUIGameOpt();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *paramCheckBox);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void SetRet(long nRet);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

protected:
	void SetCtrlFromSysOpt();

protected:
	void GetSysOptFromCtrl();

public:
	CUIGameOpt &operator=(const CUIGameOpt &arg0);

public:
	static CUIGameOpt &_op_assign_9(CUIGameOpt *pThis, const CUIGameOpt &arg0);
};
STATIC_ASSERT_SIZE(CUIGameOpt, 444);
class CUICancelCharacterCouponResults : public CDialog
{
	// Nested
public:
	enum ID_CTRL_BT_OK
	{
		ID_CTRL_BT_OK = 1000
	};
	// Fields
protected:
	long m_nType{};

protected:
	ZRef<CCtrlButton> m_pBtOK;
	// Methods
public:
	virtual ~CUICancelCharacterCouponResults();

public:
	void _dtor_0();

public:
	CUICancelCharacterCouponResults(const CUICancelCharacterCouponResults &arg0);

public:
	void _ctor_1(const CUICancelCharacterCouponResults &arg0);

public:
	CUICancelCharacterCouponResults(long nType);

public:
	void _ctor_0(long nType);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	CUICancelCharacterCouponResults &operator=(const CUICancelCharacterCouponResults &arg0);

public:
	static CUICancelCharacterCouponResults &_op_assign_7(CUICancelCharacterCouponResults *pThis, const CUICancelCharacterCouponResults &arg0);
};
STATIC_ASSERT_SIZE(CUICancelCharacterCouponResults, 156);
class CUIRandomMesoBag : public CDialog
{
	// Nested
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtOk;

protected:
	ZXString16 m_sMesoReceiveMessage;

protected:
	ZXString<char> m_sMesoAmount;

protected:
	long m_nRank{};
	// Methods
public:
	virtual ~CUIRandomMesoBag();

public:
	void _dtor_0();

public:
	CUIRandomMesoBag(const CUIRandomMesoBag &arg0);

public:
	void _ctor_1(const CUIRandomMesoBag &arg0);

public:
	CUIRandomMesoBag(long nRank, long nMesoAmount);

public:
	void _ctor_0(long nRank, long nMesoAmount);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	CUIRandomMesoBag &operator=(const CUIRandomMesoBag &arg0);

public:
	static CUIRandomMesoBag &_op_assign_5(CUIRandomMesoBag *pThis, const CUIRandomMesoBag &arg0);
};
STATIC_ASSERT_SIZE(CUIRandomMesoBag, 164);
class CUISysOpt : public CDialog
{
	// Nested
public:
	enum ID_CTRL_
	{
		ID_CTRL_SLIDER_VIDEO = 1000,
		ID_CTRL_SLIDER_BGM = 1001,
		ID_CTRL_CHECKBOX_BGM = 1002,
		ID_CTRL_SLIDER_SE = 1003,
		ID_CTRL_CHECKBOX_SE = 1004,
		ID_CTRL_COMBOBOX_SCREENSHOT = 1005,
		ID_CTRL_SLIDER_MOUSESPEED = 1006,
		ID_CTRL_SLIDER_HPFLASH = 1007,
		ID_CTRL_SLIDER_MPFLASH = 1008,
		ID_CTRL_CHECKBOX_TREMBLE = 1009,
		ID_CTRL_CHECKBOX_SCREEN_800 = 1010,
		ID_CTRL_CHECKBOX_SCREEN_1024 = 1011,
		ID_CTRL_COMBOBOX_MOBINFO = 1012,
		ID_CTRL_CHECKBOX_FULLSCREEN = 1013,
		ID_CTRL_CHECKBOX_WINDOWED = 1014,
		ID_CTRL_CHECKBOX_MINIMAP_NORMAL = 1015,
		ID_CTRL_CHECKBOX_MINIMAP_SIMPLE = 1016
	};
	// Fields
protected:
	ZRef<CCtrlSlider> m_pSliderVideo;

protected:
	ZRef<CCtrlSlider> m_pSliderBGMVol;

protected:
	ZRef<CCtrlCheckBox> m_pCBBGMMute;

protected:
	ZRef<CCtrlSlider> m_pSliderSEVol;

protected:
	ZRef<CCtrlCheckBox> m_pCBSEMute;

protected:
	ZRef<CCtrlCheckBox> m_pCBTremble;

protected:
	ZRef<CCtrlComboBox> m_pCBScreenShot;

protected:
	ZRef<CCtrlSlider> m_pSliderMouseSpeed;

protected:
	ZRef<CCtrlSlider> m_pSliderHPFlash;

protected:
	ZRef<CCtrlSlider> m_pSliderMPFlash;

protected:
	ZRef<CCtrlComboBox> m_pCBMobInfo;

protected:
	ZRef<CCtrlCheckBox> m_pCBScreen800;

protected:
	ZRef<CCtrlCheckBox> m_pCBScreen1024;

protected:
	ZRef<CCtrlCheckBox> m_pCBFullScreen;

protected:
	ZRef<CCtrlCheckBox> m_pCBWindowed;

protected:
	ZRef<CCtrlCheckBox> m_pCBMinimapNormalMode;

protected:
	ZRef<CCtrlCheckBox> m_pCBMinimapSimpleMode;

protected:
	CONFIG_SYSOPT m_sysOptOld;

protected:
	CONFIG_SYSOPT m_sysOptCur;

protected:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUISysOpt();

public:
	void _dtor_0();

public:
	CUISysOpt(const CUISysOpt &arg0);

public:
	void _ctor_1(const CUISysOpt &arg0);

public:
	CUISysOpt();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *paramCheckBox);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void SetRet(long nRet);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

protected:
	void SetCtrlFromSysOpt();

protected:
	void GetSysOptFromCtrl();

public:
	CUISysOpt &operator=(const CUISysOpt &arg0);

public:
	static CUISysOpt &_op_assign_9(CUISysOpt *pThis, const CUISysOpt &arg0);
};
STATIC_ASSERT_SIZE(CUISysOpt, 412);
