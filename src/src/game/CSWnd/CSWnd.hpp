// CSWnd.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Wnd/Wnd.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"
// #include "CashShop_ShopSvrRes/CashShop_ShopSvrRes.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "Avatar/Avatar.hpp"

class CUserPreview;
class CCashShop;
class CUtilDlgEx;
class CWvsPhysicalSpace2D;

// Level: 1 0xbc31
class CCSWnd_Char;
// Level: 1 0xbd01
class CCSWnd_Locker;
// Level: 1 0xbd2c
class CCSWnd_Inventory;

class CCSWnd_Char : public CWnd, public TSingleton<CCSWnd_Char>
{
	// Nested
public:
	struct WEAR_INFO
	{
		// Nested
		// Fields
	public:
		long nItemID{};

	public:
		long nCommSN{};
		// Methods
	};

public:
	enum ID_CTRL_
	{
		ID_CTRL_BT_CSCHAR_BUYAVATAR = 1000,
		ID_CTRL_BT_CSCHAR_DEFAULTAVATAR = 1001,
		ID_CTRL_BT_CSCHAR_TAKEOFFAVATAR = 1002,
		ID_CTRL_EDIT_CHAT = 1003,
		ID_CTRL_TAB_BACKGROUND = 1004
	};
	enum PREVIEW_BACKGRND_
	{
		PREVIEW_BACKGRND_LEFT = 24,
		PREVIEW_BACKGRND_TOP = 40,
		PREVIEW_BACKGRND_WIDTH = 212,
		PREVIEW_BACKGRND_HEIGHT = 165
	};
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtBuyAvatar;

protected:
	ZRef<CCtrlButton> m_pBtDefaultAvatar;

protected:
	ZRef<CCtrlButton> m_pBtTakeoffAvatar;

protected:
	ZRef<CCtrlEdit> m_pEditChat;

protected:
	ZRef<CCtrlTab> m_pTab;

protected:
	AvatarLook m_avatarLookInitial;

protected:
	std::array<CCSWnd_Char::WEAR_INFO, 60> m_aWearInfo;

protected:
	CCSWnd_Char::WEAR_INFO m_petInfo;

protected:
	ZRef<CWvsPhysicalSpace2D> m_pSpace2D;

protected:
	ZRef<CUserPreview> m_pUserPreview;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerUserCtrl;

protected:
	_x_com_ptr<IWzProperty> m_pPropUserCtrlOn;

protected:
	_x_com_ptr<IWzProperty> m_pPropUserCtrlOff;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerBackground;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerFloatNotice;

protected:
	ZList<_x_com_ptr<IWzGr2DLayer>> m_lpLayerTransient;

protected:
	long m_tBlowWeather{};

protected:
	int32_t m_bBlowWeather{};

protected:
	int32_t m_bLayerWeather{};

protected:
	long m_nEffectCommSN{};

protected:
	long m_nColorLensItemID{};

protected:
	long m_nColorLensCommSN{};

protected:
	CCashShop *m_pCashShop{};
	// Methods
public:
	virtual ~CCSWnd_Char();

public:
	void _dtor_0();

public:
	CCSWnd_Char(const CCSWnd_Char &arg0);

public:
	void _ctor_1(const CCSWnd_Char &arg0);

	CTOR_DEFAULT(CCSWnd_Char)
public:
	CCSWnd_Char();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *arg0);

public:
	virtual void OnDestroy();

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void Update();

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	int32_t OnKeyRet(uint32_t wParam, int32_t lParam);

public:
	void OnTabChanged(long nTab);

public:
	void OnWear(long nItemID, long nCommSN, int32_t bPackage);

public:
	void OnTakeOff();

public:
	void OnDefaultAvatar();

public:
	void InitAvatar();

public:
	long CmpAvatar(long nBodyPart);

public:
	void InitRing();

public:
	void SetRing(long nItemID, long nCommSN, int32_t bPackage);

public:
	void MakeNameTag();

public:
	void InitPet();

public:
	void SetPet(long nItemID, long nCommSN, int32_t bPackage);

public:
	long CmpPet();

public:
	void InitRiding();

public:
	int32_t SetRiding(long nItemID, long nCommSN, long nBodyPart);

public:
	long GetMessageBoxSN();

public:
	long GetPersonalShopSN();

public:
	long GetEntrustedShopSN();

public:
	long GetEffectSN();

public:
	long GetColorLensSN();

public:
	void StartChat();

public:
	void EndChat();

public:
	void OnChat(ZXString<char> sText);

public:
	void SetEmotion(long nItemID);

public:
	void InitColorLens();

public:
	void SetColorLens(long nItemID, long nCommSN);

public:
	void InitActiveEffect();

public:
	void SetActiveEffectItem(long nItemID, long nCommSN);

public:
	void ShowBullet(long nItemID);

public:
	void BlowWeather(long nItemID);

public:
	void ShowMessageBox(long nItemID, long nCommSN);

public:
	void ShowPersonalShop(long nItemID, long nCommSN);

public:
	void ShowEntrustedShop(long nItemID, long nCommSN);

public:
	void ShowADBoard(long nItemID, long nCommSN);

public:
	long GetWeaponItemID(long nWT, long &nAttackActionType);

public:
	void SetUserPreviewControl(int32_t bControl);

protected:
	int32_t IsTwoHandWeapon(long nItemID);

protected:
	void CreateFloatNotice(const char *arg0, long arg1);

protected:
	void DeleteFloatNotice();

protected:
	void TransientLayer_Weather(ZXString16 arg0, long arg1, long arg2, long arg3);

protected:
	void TransientLayer_Clear();

public:
	CCSWnd_Char &operator=(const CCSWnd_Char &arg0);

public:
	static CCSWnd_Char &_op_assign_53(CCSWnd_Char *pThis, const CCSWnd_Char &arg0);
};
STATIC_ASSERT_SIZE(CCSWnd_Char, 1260);
class CCSWnd_Locker : public CWnd, public TSingleton<CCSWnd_Locker>
{
	// Nested
public:
	enum ID_CTRL_
{
	ID_CTRL_BT_CSLOCKER_REBATE = 1000,
	ID_CTRL_SB_CSLOCKER = 1001
};
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtRebate;

protected:
	ZRef<CCtrlScrollBar> m_pScrollBar;

protected:
	CUIToolTip m_uiToolTip;

protected:
	_x_com_ptr<IWzProperty> m_pImgFontNumber;

protected:
	long m_nSelectedNo{};

protected:
	CCashShop *m_pCashShop{};
	// Methods
public:
	virtual ~CCSWnd_Locker();

public:
	void _dtor_0();

public:
	CCSWnd_Locker(const CCSWnd_Locker &arg0);

public:
	void _ctor_1(const CCSWnd_Locker &arg0);

	CTOR_DEFAULT(CCSWnd_Locker)
public:
	CCSWnd_Locker();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void ClearToolTip();

public:
	void SetSelectedNo(int32_t bClearSelect);

public:
	long GetLockerIndex(long rx, long ry);

public:
	tagRECT GetLockerRect(long nIndex);

protected:
	void ResetScrollBar();

public:
	CCSWnd_Locker &operator=(const CCSWnd_Locker &arg0);

public:
	static CCSWnd_Locker &_op_assign_17(CCSWnd_Locker *pThis, const CCSWnd_Locker &arg0);
};
STATIC_ASSERT_SIZE(CCSWnd_Locker, 2788);
class CCSWnd_Inventory : public CWnd, public TSingleton<CCSWnd_Inventory>
{
public:
	static int32_t ms_anItemScrollPos[6];
	// Nested
public:
	enum ID_CTRL_
	{
		ID_CTRL_TAB_CSINVENTORY = 1000,
		ID_CTRL_SB_CSINVENTORY = 1001,
		ID_CTRL_BT_CSINVENTORY_EXEQUIP = 1002,
		ID_CTRL_BT_CSINVENTORY_EXCONSUME = 1003,
		ID_CTRL_BT_CSINVENTORY_EXINSTALL = 1004,
		ID_CTRL_BT_CSINVENTORY_EXETC = 1005,
		ID_CTRL_BT_CSINVENTORY_EXCASH = 1006,
		ID_CTRL_BT_CSINVENTORY_EXTRUNK = 1007
	};
	enum kItemSlotNo
	{
		kItemSlotNo = 12
	};
	// Fields
protected:
	ZRef<CCtrlTab> m_pTab;

protected:
	ZRef<CCtrlScrollBar> m_pScrollBar;

protected:
	ZRef<CCtrlButton> m_pBtExEquip;

protected:
	ZRef<CCtrlButton> m_pBtExConsume;

protected:
	ZRef<CCtrlButton> m_pBtExInstall;

protected:
	ZRef<CCtrlButton> m_pBtExEtc;

protected:
	ZRef<CCtrlButton> m_pBtExTrunk;

protected:
	CUIToolTip m_uiToolTip;

protected:
	_x_com_ptr<IWzProperty> m_pImgFontNumber;

protected:
	long m_nFirstPosition{};

protected:
	long m_nItemTI{};

protected:
	long m_nSelectedNo{};

protected:
	CCashShop *m_pCashShop{};
	// Methods
public:
	virtual ~CCSWnd_Inventory();

public:
	void _dtor_0();

public:
	CCSWnd_Inventory(const CCSWnd_Inventory &arg0);

public:
	void _ctor_1(const CCSWnd_Inventory &arg0);

	CTOR_DEFAULT(CCSWnd_Inventory)
public:
	CCSWnd_Inventory();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *arg0);

public:
	virtual void OnDestroy();

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void ClearToolTip();

public:
	void ResetInfo();

public:
	void EnableExButton();

public:
	void EnableExTrunkButton();

public:
	long GetSlotPositionFromPoint(long rx, long ry);

public:
	long GetItemTypeIndex();

public:
	void SetInventoryTI(long nTI);

public:
	void SetSelectedNo(long nTI);

protected:
	void OnTabChanged(long nTI);

protected:
	int32_t GetItemSlotRect(long nSlotPosition, tagRECT *pRc);

public:
	CCSWnd_Inventory &operator=(const CCSWnd_Inventory &arg0);

public:
	static CCSWnd_Inventory &_op_assign_22(CCSWnd_Inventory *pThis, const CCSWnd_Inventory &arg0);
};
STATIC_ASSERT_SIZE(CCSWnd_Inventory, 2836);



long __cdecl get_face_wearing_colorlens(const AvatarLook &avatarLook, long nColorLensItemID);
int32_t __cdecl zmin_int_(int32_t a, int32_t b);
long __cdecl get_substitute_weaponid(unsigned long dwFlag);
CLadderOrRope *__cdecl _ZtlSecureFuse_CLadderOrRope__(CLadderOrRope **at, uint32_t uCS);
