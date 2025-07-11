// CakePieEvent.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Wnd/Wnd.hpp"
#include "Dialog/Dialog.hpp"

// Level: 1 0x5d47
class CClock;
// Level: 1 0x11601
class CCakePieEvent;
// Level: 1 0x115ed
class CUICakePieEventItemInfo;
// Level: 2 0x116e4
class CTimerboard_CakePieEvent;

class CClock : public CWnd
{
	// Nested
public:
	struct INITPARAM
	{
		// Nested
		// Fields
	public:
		int32_t bTimer{};

	public:
		long nBackColor{};

	public:
		long nFontColor{};

	public:
		long nFontSize{};

	public:
		int32_t bBold{};

	public:
		ZXString<char> sBackPath;

	public:
		ZXString<char> sDigitPath;

	public:
		long nX1{};

	public:
		long nX2{};

	public:
		long nX3{};

	public:
		long nX4{};

	public:
		long nPath{};
		// Methods
	public:
		~INITPARAM();

	public:
		void _dtor_0();

	public:
		INITPARAM(const CClock::INITPARAM &arg0);

	public:
		void _ctor_1(const CClock::INITPARAM &arg0);

	CTOR_DEFAULT(INITPARAM)
	public:
		INITPARAM();

	public:
		void _ctor_0();

	public:
		CClock::INITPARAM &operator=(const CClock::INITPARAM &arg0);

	public:
		static CClock::INITPARAM &_op_assign_3(CClock::INITPARAM *pThis, const CClock::INITPARAM &arg0);
	};

public:
	struct CLOCKITEM
	{
		// Nested
		// Fields
	public:
		int32_t bPM{};

	public:
		long nHour{};

	public:
		long nMin{};

	public:
		long nSec{};
		// Methods
	public:
		void Set(long arg0, long arg1, long arg2);

	public:
		void Set(CClock::CLOCKITEM &arg0);

	public:
		int32_t IsSame(CClock::CLOCKITEM &arg0);

	public:
		int32_t IsValid();

	public:
		void Elapse(long tElapsed);
	};
	// Fields
protected:
	int32_t m_bTimer{};

protected:
	long m_nBackColor{};

protected:
	_x_com_ptr<IWzFont> m_pFont;

protected:
	int32_t m_bStart{};

protected:
	long m_tTimeOver{};

protected:
	long m_tRemain{};

protected:
	ZXString<char> m_sBackPath;

protected:
	ZXString<char> m_sDigitPath;

protected:
	long m_nX1{};

protected:
	long m_nX2{};

protected:
	long m_nX3{};

protected:
	long m_nX4{};

protected:
	long m_tInit{};

protected:
	CClock::CLOCKITEM m_ciInit;

protected:
	CClock::CLOCKITEM m_ciCur;

protected:
	long m_tlCur{};

protected:
	ZArray<_x_com_ptr<IWzCanvas>> m_apClockCanvas;
	// Methods
public:
	virtual ~CClock();

public:
	void _dtor_0();

public:
	CClock(const CClock &arg0);

public:
	void _ctor_1(const CClock &arg0);

	CTOR_DEFAULT(CClock)
public:
	CClock();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void Update();

public:
	void SetTimer(long tDuration);

public:
	void SetClock(long nHour, long nMin, long nSec);

public:
	void Start();

public:
	void Clear();

public:
	int32_t IsEnd();

public:
	int32_t IsTimer();

public:
	long GetRemainTime();

protected:
	virtual _x_com_ptr<IWzProperty> GetFontTime();

protected:
	virtual void LoadClockCanvas(ZArray<_x_com_ptr<IWzCanvas>> &apClockCanvas, _x_com_ptr<IWzProperty> pClockDigit);

public:
	CClock &operator=(const CClock &arg0);

public:
	static CClock &_op_assign_16(CClock *pThis, const CClock &arg0);
};
STATIC_ASSERT_SIZE(CClock, 220);
class CCakePieEvent : public TSingleton<CCakePieEvent>
{
	// Nested
	// Fields
private:
	ZList<ZRef<CAKEPIEEVENT_ITEMINFO>> m_lEventItemInfo;

private:
	ZRef<CUICakePieEventItemInfo> m_pUIEventStatue_GL5thEvent;
	// Methods
public:
	virtual ~CCakePieEvent();

public:
	void _dtor_0();

public:
	CCakePieEvent(const CCakePieEvent &arg0);

public:
	void _ctor_1(const CCakePieEvent &arg0);

public:
	CCakePieEvent();

public:
	void _ctor_0();

	CTOR_DEFAULT(CCakePieEvent)

private:
	ZRef<CAKEPIEEVENT_ITEMINFO> FindItemInfo(long nFieldID, long nItemID);

public:
	void OpenUI_ItemInfo();

public:
	void CloseUI_ItemInfo();

public:
	void Update();

public:
	void SetEventItemInfo(long nFieldID, long nItemID, long nPercentage, long nEventStatus, long nWinnerTeam);

public:
	ZRef<CAKEPIEEVENT_ITEMINFO> GetEventItemInfo(long nFieldID, long nItemID);

public:
	CCakePieEvent &operator=(const CCakePieEvent &arg0);

public:
	static CCakePieEvent &_op_assign_9(CCakePieEvent *pThis, const CCakePieEvent &arg0);
};
STATIC_ASSERT_SIZE(CCakePieEvent, 32);
class CUICakePieEventItemInfo : public CDialog
{
	// Nested
public:
	enum UnnamedEnum71131
{
	ID_CTRL_BT_CLOSE = 1000,
	GAGE_LEFT = 90,
	GAGE_WIDTH = 116,
	MAX_PERCENTAGE = 100
};
	// Fields
private:
	_x_com_ptr<IWzCanvas> m_pCanvasBack;

private:
	_x_com_ptr<IWzCanvas> m_pGageBar;

private:
	_x_com_ptr<IWzCanvas> m_pGage0;

private:
	_x_com_ptr<IWzCanvas> m_pGage1;

private:
	ZRef<CCtrlButton> m_pBtClose;

private:
	long m_tLastGetEventItemInfo{};

private:
	long m_tLastReflash{};

private:
	std::array<long, 8> m_nGageTop{};

private:
	std::array<long, 8> m_nPercentage{};

private:
	std::array<long, 8> m_nEventStatus{};

private:
	std::array<long, 8> m_nWinnerTeam{};

private:
	std::array<long, 8> m_nGageGageReflash{};
	// Methods
public:
	virtual ~CUICakePieEventItemInfo();

public:
	void _dtor_0();

public:
	CUICakePieEventItemInfo(const CUICakePieEventItemInfo &arg0);

public:
	void _ctor_1(const CUICakePieEventItemInfo &arg0);

public:
	CUICakePieEventItemInfo();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Update();

public:
	CUICakePieEventItemInfo &operator=(const CUICakePieEventItemInfo &arg0);

public:
	static CUICakePieEventItemInfo &_op_assign_8(CUICakePieEventItemInfo *pThis, const CUICakePieEventItemInfo &arg0);
};
STATIC_ASSERT_SIZE(CUICakePieEventItemInfo, 336);
class CTimerboard_CakePieEvent : public CClock
{
	// Nested
	// Fields
protected:
	long m_nTimerType{};

protected:
	long m_nLastBarReflashFlag{};

protected:
	long m_tLastBarReflashTime{};

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasBack;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasBarEffect;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasGage0;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasGage1;

protected:
	_x_com_ptr<IWzProperty> m_pTimerFont;
	// Methods
public:
	virtual ~CTimerboard_CakePieEvent();

public:
	void _dtor_0();

public:
	CTimerboard_CakePieEvent(const CTimerboard_CakePieEvent &arg0);

public:
	void _ctor_1(const CTimerboard_CakePieEvent &arg0);

public:
	CTimerboard_CakePieEvent(long nTimerType);

public:
	void _ctor_0(long nTimerType);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

protected:
	virtual _x_com_ptr<IWzProperty> GetFontTime();

public:
	CTimerboard_CakePieEvent &operator=(const CTimerboard_CakePieEvent &arg0);

public:
	static CTimerboard_CakePieEvent &_op_assign_6(CTimerboard_CakePieEvent *pThis, const CTimerboard_CakePieEvent &arg0);
};
STATIC_ASSERT_SIZE(CTimerboard_CakePieEvent, 252);


