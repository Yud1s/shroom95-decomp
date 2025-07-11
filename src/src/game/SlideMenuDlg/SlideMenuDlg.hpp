// SlideMenuDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Dialog/Dialog.hpp"
#include "Packet/Packet.hpp"

// Level: 1 0xcc44
class CSlideMenuDlg;

class CSlideMenuDlg : public CDialog
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
		MAINBUTTONINFO(const CSlideMenuDlg::MAINBUTTONINFO &__that);

	public:
		void _ctor_1(const CSlideMenuDlg::MAINBUTTONINFO &__that);

	public:
		MAINBUTTONINFO();

	public:
		void _ctor_0();

	public:
		CSlideMenuDlg::MAINBUTTONINFO &operator=(const CSlideMenuDlg::MAINBUTTONINFO &arg0);

	public:
		static CSlideMenuDlg::MAINBUTTONINFO &_op_assign_3(CSlideMenuDlg::MAINBUTTONINFO *pThis, const CSlideMenuDlg::MAINBUTTONINFO &arg0);
	};

public:
	struct CompButtonInfo
	{
		// Nested
		// Fields
		// Methods
	public:
		int32_t operator()(const CSlideMenuDlg::MAINBUTTONINFO a, const CSlideMenuDlg::MAINBUTTONINFO b);

	public:
		static int32_t _op_call_0(CSlideMenuDlg::CompButtonInfo *pThis, const CSlideMenuDlg::MAINBUTTONINFO a, const CSlideMenuDlg::MAINBUTTONINFO b);
	};

public:
	enum ID_CTRL_SLIDEMENU_BT_
	{
		ID_CTRL_SLIDEMENU_BT_LEFT_ARROW = 3000,
		ID_CTRL_SLIDEMENU_BT_RIGHT_ARROW = 3001,
		ID_CTRL_SLIDEMENU_BT_MOVE = 3002,
		ID_CTRL_SLIDEMENU_BT_CANCLE = 3003,
		ID_CTRL_SLIDEMENU_BT_LEFT = 3004,
		ID_CTRL_SLIDEMENU_BT_CENTER = 3005,
		ID_CTRL_SLIDEMENU_BT_RIGHT = 3006
	};
	enum k
	{
		kWidth = 235,
		kHeight = 165,
		kBtLeftArrow_X = 11,
		kBtLeftArrow_Y = 67,
		kBtRightArrow_X = 200,
		kBtRightArrow_Y = 67,
		kBtMove_X = 69,
		kBtMove_Y = 134,
		kBtCancle_X = 128,
		kBtCancle_Y = 134,
		kBtLeft_X = 45,
		kBtLeft_Y = 58,
		kBtCenter_X = 97,
		kBtCenter_Y = 58,
		kBtRight_X = 149,
		kBtRight_Y = 58,
		kMoveInfoText_X = 117,
		kMoveInfoText_Y = 107
	};
	// Fields
protected:
	ZArray<CSlideMenuDlg::MAINBUTTONINFO> m_aButtonInfo;

protected:
	long m_nCurrentStartPosition{};

protected:
	long m_nDlgType{};

protected:
	long m_nCurrentMoveInfo{};

protected:
	ZRef<CCtrlButton> m_pBtMainCenter;

protected:
	ZRef<CCtrlButton> m_pBtMainLeft;

protected:
	ZRef<CCtrlButton> m_pBtMainRight;

protected:
	ZRef<CCtrlButton> m_pBtLeftArrow;

protected:
	ZRef<CCtrlButton> m_pBtRightArrow;

protected:
	ZRef<CCtrlButton> m_pBtMove;

protected:
	ZRef<CCtrlButton> m_pBtCancle;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pCoverLayer;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pChoiceLayer;
	// Methods
public:
	virtual ~CSlideMenuDlg();

public:
	void _dtor_0();

public:
	CSlideMenuDlg(const CSlideMenuDlg &arg0);

public:
	void _ctor_1(const CSlideMenuDlg &arg0);

public:
	CSlideMenuDlg(CInPacket &iPacket);

public:
	void _ctor_0(CInPacket &iPacket);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	long GetSelectResult();

protected:
	void SetSlideMenuDlg(CInPacket &iPacket);

protected:
	void SetButtonInfo(ZXString<char> sInfo);

protected:
	void CreateSlideMenuButton();

protected:
	void ArrowButtonClicked(long nButtonID);
	CLASS_RTTI_(CSlideMenuDlg, CDialog);

public:
	CSlideMenuDlg &operator=(const CSlideMenuDlg &arg0);

public:
	static CSlideMenuDlg &_op_assign_15(CSlideMenuDlg *pThis, const CSlideMenuDlg &arg0);
};
STATIC_ASSERT_SIZE(CSlideMenuDlg, 224);

void __cdecl DownHeap_CSlideMenuDlg__MAINBUTTONINFO_CSlideMenuDlg__CompButtonInfo_(ZArray<CSlideMenuDlg::MAINBUTTONINFO> &a, int32_t nIdx, int32_t nLen, int32_t nFrom, CSlideMenuDlg::CompButtonInfo &comp);
void __cdecl InsertionSort_CSlideMenuDlg__MAINBUTTONINFO_CSlideMenuDlg__CompButtonInfo_(ZArray<CSlideMenuDlg::MAINBUTTONINFO> &a, int32_t nFrom, int32_t nTo, CSlideMenuDlg::CompButtonInfo &comp);
void __cdecl ZSort_CSlideMenuDlg__MAINBUTTONINFO_CSlideMenuDlg__CompButtonInfo_(ZArray<CSlideMenuDlg::MAINBUTTONINFO> &a, __POSITION *posFrom, __POSITION *posTo, CSlideMenuDlg::CompButtonInfo comp);
int32_t __cdecl Partition_CSlideMenuDlg__MAINBUTTONINFO_CSlideMenuDlg__CompButtonInfo_(ZArray<CSlideMenuDlg::MAINBUTTONINFO> &a, int32_t nFrom, int32_t nTo, const CSlideMenuDlg::MAINBUTTONINFO &pivot, CSlideMenuDlg::CompButtonInfo &comp);
const CSlideMenuDlg::MAINBUTTONINFO &__cdecl Median_CSlideMenuDlg__MAINBUTTONINFO_CSlideMenuDlg__CompButtonInfo_(const CSlideMenuDlg::MAINBUTTONINFO &a, const CSlideMenuDlg::MAINBUTTONINFO &b, const CSlideMenuDlg::MAINBUTTONINFO &c, CSlideMenuDlg::CompButtonInfo &comp);
