// SlideMenuDlgEX.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CtrlWnd/CtrlWnd.hpp"
#include "Dialog/Dialog.hpp"
#include "Packet/Packet.hpp"

// Level: 1 0xccaa
class CSlideMenuDlgEX;

class CSlideMenuDlgEX : public CDialog
{
	// Nested
public:
	struct MAINBUTTONINFO
	{
		// Nested
		// Fields
	public:
		ZXString16 sButtonName;

	public:
		ZXString16 sImagePath;

	public:
		int32_t nIndex{};
		// Methods
	public:
		~MAINBUTTONINFO();

	public:
		void _dtor_0();

	public:
		MAINBUTTONINFO(const CSlideMenuDlgEX::MAINBUTTONINFO &__that);

	public:
		void _ctor_1(const CSlideMenuDlgEX::MAINBUTTONINFO &__that);

	public:
		MAINBUTTONINFO();

	public:
		void _ctor_0();

	public:
		CSlideMenuDlgEX::MAINBUTTONINFO &operator=(const CSlideMenuDlgEX::MAINBUTTONINFO &arg0);

	public:
		static CSlideMenuDlgEX::MAINBUTTONINFO &_op_assign_3(CSlideMenuDlgEX::MAINBUTTONINFO *pThis, const CSlideMenuDlgEX::MAINBUTTONINFO &arg0);
	};

public:
	struct CompButtonInfo
	{
		// Nested
		// Fields
		// Methods
	public:
		int32_t operator()(const CSlideMenuDlgEX::MAINBUTTONINFO a, const CSlideMenuDlgEX::MAINBUTTONINFO b);

	public:
		static int32_t _op_call_0(CSlideMenuDlgEX::CompButtonInfo *pThis, const CSlideMenuDlgEX::MAINBUTTONINFO a, const CSlideMenuDlgEX::MAINBUTTONINFO b);
	};

public:
	enum ID_CTRL_SLIDEMENU_BT_
	{
		ID_CTRL_SLIDEMENU_BT_LEFT_ARROW = 3000,
		ID_CTRL_SLIDEMENU_BT_RIGHT_ARROW = 3001,
		ID_CTRL_SLIDEMENU_BT_MOVE = 3002,
		ID_CTRL_SLIDEMENU_BT_CANCLE = 3003,
		ID_CTRL_SLIDEMENU_BT_01 = 3004,
		ID_CTRL_SLIDEMENU_BT_02 = 3005,
		ID_CTRL_SLIDEMENU_BT_03 = 3006,
		ID_CTRL_SLIDEMENU_BT_04 = 3007,
		ID_CTRL_SLIDEMENU_BT_05 = 3008,
		ID_CTRL_SLIDEMENU_BT_06 = 3009,
		ID_CTRL_SLIDEMENU_BT_07 = 3010,
		ID_CTRL_SLIDEMENU_BT_08 = 3011
	};
	enum k
	{
		kWidth = 284,
		kHeight = 217,
		kBtLeftArrow_X = 7,
		kBtLeftArrow_Y = 89,
		kBtRightArrow_X = 242,
		kBtRightArrow_Y = 89,
		kBtMove_X = 88,
		kBtMove_Y = 181,
		kBtCancle_X = 146,
		kBtCancle_Y = 181,
		kBMain_X = 40,
		kBMain_Y_Upper = 53,
		kBMain_Y_Lower = 105,
		kMoveInfoText_Y = 153
	};
	// Fields
public:
	long m_nDlgType{};

public:
	long m_nSelected{};

public:
	long m_nCurPage{};

public:
	long m_nTotalPage{};

public:
	ZArray<CSlideMenuDlgEX::MAINBUTTONINFO> m_aButtonInfo;

public:
	std::array<ZRef<CCtrlButton>, 8> m_apBtMain;

public:
	ZRef<CCtrlButton> m_pBtLeftArrow;

public:
	ZRef<CCtrlButton> m_pBtRightArrow;

public:
	ZRef<CCtrlButton> m_pBtMove;

public:
	ZRef<CCtrlButton> m_pBtCancle;
	// Methods
public:
	virtual ~CSlideMenuDlgEX();

public:
	void _dtor_0();

public:
	CSlideMenuDlgEX(const CSlideMenuDlgEX &arg0);

public:
	void _ctor_1(const CSlideMenuDlgEX &arg0);

public:
	CSlideMenuDlgEX(CInPacket &iPacket);

public:
	void _ctor_0(CInPacket &iPacket);

public:
	virtual void OnCreate(void *pData);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void Update();

public:
	long GetSelectResult();

public:
	void SetSlideMenuDlg(CInPacket &iPacket);

public:
	void SetButtonInfo(ZXString<char> sInfo);

public:
	void CreateSlideMenuButton();

public:
	void CreateMainButton();

public:
	void ArrowButtonClicked(long nButtonID);

	CLASS_RTTI_(CSlideMenuDlgEX, CDialog);

public:
	CSlideMenuDlgEX &operator=(const CSlideMenuDlgEX &arg0);

public:
	static CSlideMenuDlgEX &_op_assign_18(CSlideMenuDlgEX *pThis, const CSlideMenuDlgEX &arg0);
};
STATIC_ASSERT_SIZE(CSlideMenuDlgEX, 260);

const CSlideMenuDlgEX::MAINBUTTONINFO &__cdecl Median_CSlideMenuDlgEX__MAINBUTTONINFO_CSlideMenuDlgEX__CompButtonInfo_(const CSlideMenuDlgEX::MAINBUTTONINFO &a, const CSlideMenuDlgEX::MAINBUTTONINFO &b, const CSlideMenuDlgEX::MAINBUTTONINFO &c, CSlideMenuDlgEX::CompButtonInfo &comp);
void __cdecl InsertionSort_CSlideMenuDlgEX__MAINBUTTONINFO_CSlideMenuDlgEX__CompButtonInfo_(ZArray<CSlideMenuDlgEX::MAINBUTTONINFO> &a, int32_t nFrom, int32_t nTo, CSlideMenuDlgEX::CompButtonInfo &comp);
int32_t __cdecl Partition_CSlideMenuDlgEX__MAINBUTTONINFO_CSlideMenuDlgEX__CompButtonInfo_(ZArray<CSlideMenuDlgEX::MAINBUTTONINFO> &a, int32_t nFrom, int32_t nTo, const CSlideMenuDlgEX::MAINBUTTONINFO &pivot, CSlideMenuDlgEX::CompButtonInfo &comp);
void __cdecl DownHeap_CSlideMenuDlgEX__MAINBUTTONINFO_CSlideMenuDlgEX__CompButtonInfo_(ZArray<CSlideMenuDlgEX::MAINBUTTONINFO> &a, int32_t nIdx, int32_t nLen, int32_t nFrom, CSlideMenuDlgEX::CompButtonInfo &comp);
void __cdecl ZSort_CSlideMenuDlgEX__MAINBUTTONINFO_CSlideMenuDlgEX__CompButtonInfo_(ZArray<CSlideMenuDlgEX::MAINBUTTONINFO> &a, __POSITION *posFrom, __POSITION *posTo, CSlideMenuDlgEX::CompButtonInfo comp);
