// UIGoldHammer.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "GW/GW.hpp"
#include "Dialog/Dialog.hpp"
#include "Packet/Packet.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "UIToolTip/UIToolTip.hpp"

// Level: 1 0x10659
class CUIItemUpgrade;
// Level: 1 0x106ab
class CUIVega;
// Level: 1 0x11921
class CUIVegaResultPopup;

class CUIItemUpgrade : public CUniqueModeless
{
	// Nested
public:
enum ID_CTRL_BT_
{
	ID_CTRL_BT_UPGRADE = 2000,
	ID_CTRL_BT_CANCEL = 2001
};
enum STATE_
{
	STATE_NORMAL = 0,
	STATE_MAKING_ITEM = 1,
	STATE_FINISHED = 2,
	STATE_DONE = 3
};

	// Fields
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
	long m_nPOS{};

protected:
	long m_nItemID{};

protected:
	int32_t m_bRequestSent{};

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlButton> m_pBtUpgrade;

protected:
	ZRef<GW_ItemSlotBase> m_pSelectedItem;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvas_GaugeBar;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvas_GaugeBarBack;

protected:
	long m_tStart{};

protected:
	long m_tEnd{};

protected:
	long m_nGaugeBarSpeed{};

protected:
	int32_t m_nItemTI{};

protected:
	int32_t m_nSlotPosition{};

protected:
	long m_nIUCMax{};

protected:
	CUIToolTip m_uiToolTip;

protected:
	COutPacket m_oPacket;

protected:
	COutPacket m_oResultPacket;
	// Methods
public:
	virtual ~CUIItemUpgrade();

public:
	void _dtor_0();

public:
	CUIItemUpgrade(const CUIItemUpgrade &arg0);

public:
	void _ctor_1(const CUIItemUpgrade &arg0);

public:
	CUIItemUpgrade(COutPacket oPacket, long nPOS, long nItemID);

public:
	void _ctor_0(COutPacket oPacket, long nPOS, long nItemID);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnPacket(long nType, CInPacket &iPacket);

public:
	void OnItemUpgradeResult(CInPacket &iPacket);

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
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void ClearToolTip();

public:
	int32_t PutItem(GW_ItemSlotBase *pItem, long nItemTI, long nSlotPosition);

public:
	void DrawGaugeBar(_x_com_ptr<IWzCanvas> pCanvas);

	CLASS_RTTI_(CUIItemUpgrade, CUniqueModeless);

public:
	CUIItemUpgrade &operator=(const CUIItemUpgrade &arg0);

public:
	static CUIItemUpgrade &_op_assign_19(CUIItemUpgrade *pThis, const CUIItemUpgrade &arg0);
};
STATIC_ASSERT_SIZE(CUIItemUpgrade, 2900);
class CUIVega : public CUniqueModeless
{
	// Nested
public:
	enum ID_CTRL_BT_START
{
	ID_CTRL_BT_START = 2000
};
enum STATE_
{
	STATE_NORMAL = 0,
	STATE_MAKING_ITEM = 1,
	STATE_FINISHED = 2,
	STATE_DONE = 3
};
	// Fields
protected:
	long m_nId{};

protected:
	long m_nState{};

protected:
	long m_nRet1{};

protected:
	long m_nRet2{};

protected:
	long m_nSound{};

protected:
	int32_t m_bRequestSent{};

protected:
	long m_nWhiteScrollUse{};

protected:
	long m_nVegaListCount{};

protected:
	ZArray<long> m_aVegaScrollList;

protected:
	CUIToolTip m_uiToolTip;

protected:
	int32_t m_nEquipItemTI{};

protected:
	int32_t m_nEquipSlotPosition{};

protected:
	int32_t m_nScrollItemTI{};

protected:
	int32_t m_nScrollSlotPosition{};

protected:
	_x_com_ptr<IWzCanvas> m_pCanvas_GaugeBar;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvas_GaugeBarBack;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvas_Arrow;

protected:
	ZArray<_x_com_ptr<IWzCanvas>> m_aCanvas_Count;

protected:
	long m_tStart{};

protected:
	long m_nGaugeBarSpeed{};

protected:
	ZRef<CCtrlButton> m_pBtPut;

protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	ZRef<GW_ItemSlotBase> m_pSelectedEquipItem;

protected:
	ZRef<GW_ItemSlotBase> m_pSelectedScrollItem;

protected:
	COutPacket m_oPacket;
	// Methods
public:
	virtual ~CUIVega();

public:
	void _dtor_0();

public:
	CUIVega(const CUIVega &arg0);

public:
	void _ctor_1(const CUIVega &arg0);

public:
	CUIVega(COutPacket oPacket, long nId);

public:
	void _ctor_0(COutPacket oPacket, long nId);

public:
	virtual void OnCreate(void *arg0);

public:
	virtual void OnPacket(long nType, CInPacket &iPacket);

public:
	void OnVegaResult(CInPacket &iPacket);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Update();

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	int32_t PutItem(GW_ItemSlotBase *pItem, long nItemTI, long nSlotPosition);

public:
	void DrawGaugeBar(_x_com_ptr<IWzCanvas> pCanvas);

public:
	void DrawCount(_x_com_ptr<IWzCanvas> pCanvas);

public:
	int32_t is_right_scroll(long nScrollID);

	CLASS_RTTI_(CUIVega, CUniqueModeless);

public:
	CUIVega &operator=(const CUIVega &arg0);

public:
	static CUIVega &_op_assign_19(CUIVega *pThis, const CUIVega &arg0);
};
STATIC_ASSERT_SIZE(CUIVega, 2904);
class CUIVegaResultPopup : public CDialog
{
	// Nested
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	long m_nResult{};

protected:
	CUIToolTip m_uiToolTip;

protected:
	ZRef<GW_ItemSlotBase> m_pSelectedEquipItem;

protected:
	int32_t m_nEquipItemTI{};

protected:
	int32_t m_nEquipSlotPosition{};
	// Methods
public:
	virtual ~CUIVegaResultPopup();

public:
	void _dtor_0();

public:
	CUIVegaResultPopup(const CUIVegaResultPopup &arg0);

public:
	void _ctor_1(const CUIVegaResultPopup &arg0);

public:
	CUIVegaResultPopup(long nResult, ZRef<GW_ItemSlotBase> pSelectedEquipItem, int32_t nEquipItemTI, int32_t nEquipSlotPosition);

public:
	void _ctor_0(long nResult, ZRef<GW_ItemSlotBase> pSelectedEquipItem, int32_t nEquipItemTI, int32_t nEquipSlotPosition);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	CUIVegaResultPopup &operator=(const CUIVegaResultPopup &arg0);

public:
	static CUIVegaResultPopup &_op_assign_7(CUIVegaResultPopup *pThis, const CUIVegaResultPopup &arg0);
};
STATIC_ASSERT_SIZE(CUIVegaResultPopup, 2804);


