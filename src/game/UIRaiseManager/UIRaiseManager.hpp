// UIRaiseManager.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CtrlWnd/CtrlWnd.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "Wnd/Wnd.hpp"

// Level: 1 0xe7c7
class CUIRaiseWndBase;
// Level: 1 0xe7d7
class CUIRaiseManager;
// Level: 2 0xe7ee
class CUIRaiseWnd;
// Level: 2 0xe804
class CUIRaisePieceWnd;

class CUIRaiseWndBase : public CWnd
{

public:
	static CUIRaiseManager *s_pManager;
	// Nested
public:
	enum ID_CTRL_BT_CLOSE
	{
		ID_CTRL_BT_CLOSE = 0
	};
	// Fields
private:
	long _nItemID{};

private:
	long _nQuestID{};

private:
	ZXString16 _sUIData;

private:
	ZXString<char> _sName;

private:
	ZArray<ZXString<char>> _asMessage;

private:
	ZArray<long> _anItemID;

private:
	long _nQRData{};

private:
	long _nLMargin{};

private:
	long _nRMargin{};

private:
	long _nTMargin{};

private:
	long _nBMargin{};

private:
	std::array<std::array<_x_com_ptr<IWzCanvas>, 3>, 3> _apBgTileCanvas{};

private:
	_x_com_ptr<IWzVector2D> _pOrigin;

private:
	_x_com_ptr<IWzGr2DLayer> _pImg;

private:
	CUIToolTip _uiToolTip;

private:
	ZRef<CCtrlButton> _pBtClose;
	// Methods
public:

	CUIRaiseWndBase();
	virtual ~CUIRaiseWndBase();

public:
	void _dtor_0();

public:
	CUIRaiseWndBase(const CUIRaiseWndBase &arg0);

public:
	void _ctor_1(const CUIRaiseWndBase &arg0);

public:
	CUIRaiseWndBase(long nItemID, long nQuestID, long nQRData, ZXString16 &sUIData, ZXString<char> &sName, ZArray<ZXString<char>> &asMessage, ZArray<long> &anItemID);

public:
	void _ctor_0(long nItemID, long nQuestID, long nQRData, ZXString16 &sUIData, ZXString<char> &sName, ZArray<ZXString<char>> &asMessage, ZArray<long> &anItemID);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	int32_t PutItem(long nItemTI, long nSlotPosition);

public:
	void SetQRData(long nQRData);

public:
	int32_t EnableDrop(long nItemID);

public:
	long GetQuestID();

public:
	long GetQRData();

public:
	long GetEnableDropItemIndex(long nItemID);

public:
	_x_com_ptr<IWzCanvas> GetPreviewImage(long nIndex);

public:
	static void __cdecl SetManager(CUIRaiseManager *arg0);

private:
	void _LoadBgTile(_x_com_ptr<IWzCanvas> *apCanvas, Ztl_bstr_t &sUOL);

private:
	void _Repaint();

private:
	void _LevelUp();

private:
	void _LoadLayer(unsigned long cColor);

private:
	virtual int32_t SendPutItem(long arg0, long arg1, long arg2);

private:
	virtual int32_t CheckDrop(long nItemID);

private:
	virtual long GetLevel();

private:
	virtual _x_com_ptr<IWzCanvas> MakePreviewImage();

	CLASS_RTTI_(CUIRaiseWndBase, CWnd);

public:
	CUIRaiseWndBase &operator=(const CUIRaiseWndBase &arg0);

public:
	static CUIRaiseWndBase &_op_assign_28(CUIRaiseWndBase *pThis, const CUIRaiseWndBase &arg0);
};
STATIC_ASSERT_SIZE(CUIRaiseWndBase, 2856);
class CUIRaiseManager : public ZRefCounted
{
	// Nested
	// Fields
private:
	ZMap<unsigned long, ZRef<CUIRaiseWndBase>, unsigned long> m_mWnds;

private:
	ZMap<unsigned long, tagPOINT, unsigned long> m_mPosBackup;
	// Methods
public:
	virtual ~CUIRaiseManager();

public:
	void _dtor_0();

public:
	CUIRaiseManager(const CUIRaiseManager &arg0);

public:
	void _ctor_1(const CUIRaiseManager &arg0);

	CTOR_DEFAULT(CUIRaiseManager)
public:
	CUIRaiseManager();

public:
	void _ctor_0();

public:
	void OpenWindow(long nItemID);

public:
	void DestroyWindow(long nItemID);

public:
	void DestroyWindowWithQuestID(long nQuestID);

public:
	void RestoreWindows();

public:
	void DestroyWindows();

public:
	void ClearWindows();

public:
	void SetQRDataWithQuestID(long nQuestID, long nQRData);

private:
	void _CreateWindow(long arg0);

private:
	long _Quest2Item(long nQuestID);

public:
	CUIRaiseManager &operator=(const CUIRaiseManager &arg0);

public:
	static CUIRaiseManager &_op_assign_12(CUIRaiseManager *pThis, const CUIRaiseManager &arg0);
};
STATIC_ASSERT_SIZE(CUIRaiseManager, 60);
class CUIRaiseWnd : public CUIRaiseWndBase
{
	// Nested
	// Fields
private:
	long _nIncExpUnit{};

private:
	long _nGrade{};
	// Methods
public:
	virtual ~CUIRaiseWnd();

public:
	void _dtor_0();

public:
	CUIRaiseWnd(const CUIRaiseWnd &arg0);

public:
	void _ctor_1(const CUIRaiseWnd &arg0);

public:
	CUIRaiseWnd(long nItemID, long nQuestID, long nIncExpUnit, long nGrade, ZXString16 &sUIData, ZXString<char> &sName, ZArray<ZXString<char>> &asMessage, ZArray<long> &anItemID);

public:
	void _ctor_0(long nItemID, long nQuestID, long nIncExpUnit, long nGrade, ZXString16 &sUIData, ZXString<char> &sName, ZArray<ZXString<char>> &asMessage, ZArray<long> &anItemID);

private:
	virtual int32_t SendPutItem(long nItemTI, long nSlotPosition, long _nItemID);

private:
	virtual long GetLevel();

private:
	virtual int32_t CheckDrop(long nItemID);

private:
	virtual _x_com_ptr<IWzCanvas> MakePreviewImage();

	CLASS_RTTI_(CUIRaiseWnd, CUIRaiseWndBase);

public:
	CUIRaiseWnd &operator=(const CUIRaiseWnd &arg0);

public:
	static CUIRaiseWnd &_op_assign_10(CUIRaiseWnd *pThis, const CUIRaiseWnd &arg0);
};
STATIC_ASSERT_SIZE(CUIRaiseWnd, 2864);
class CUIRaisePieceWnd : public CUIRaiseWndBase
{
	// Nested
	// Fields
	// Methods
public:
	virtual ~CUIRaisePieceWnd();

public:
	void _dtor_0();

public:
	CUIRaisePieceWnd(const CUIRaisePieceWnd &arg0);

public:
	void _ctor_1(const CUIRaisePieceWnd &arg0);

public:
	CUIRaisePieceWnd(long nItemID, long nQuestID, long nGrade, ZXString16 &sUIData, ZXString<char> &sName, ZArray<ZXString<char>> &asMessage, ZArray<long> &anItemID);

public:
	void _ctor_0(long nItemID, long nQuestID, long nGrade, ZXString16 &sUIData, ZXString<char> &sName, ZArray<ZXString<char>> &asMessage, ZArray<long> &anItemID);

private:
	virtual int32_t SendPutItem(long nItemTI, long nSlotPosition, long _nItemID);

private:
	virtual int32_t CheckDrop(long nItemID);

private:
	virtual long GetLevel();

private:
	virtual _x_com_ptr<IWzCanvas> MakePreviewImage();

	CLASS_RTTI_(CUIRaisePieceWnd, CUIRaiseWndBase);

public:
	CUIRaisePieceWnd &operator=(const CUIRaisePieceWnd &arg0);

public:
	static CUIRaisePieceWnd &_op_assign_10(CUIRaisePieceWnd *pThis, const CUIRaisePieceWnd &arg0);
};
STATIC_ASSERT_SIZE(CUIRaisePieceWnd, 2856);
