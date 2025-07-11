// UIQuestTimer.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UIWnd/UIWnd.hpp"
#include "Wnd/Wnd.hpp"

struct QuestTimerInfo
{
	// Nested
	// Fields
public:
	uint16_t usQuestID{};

public:
	long tLimit{};

public:
	long tRemain{};
	// Methods
};
STATIC_ASSERT_SIZE(QuestTimerInfo, 12);

// Level: 1 0xe821
class CUIQuestTimerAction;
// Level: 1 0xe892
class CUIQuestTimer;

class CUIQuestTimerAction : public CUIWnd
{
	// Nested
	// Fields
protected:
	int32_t m_bMoving{};

protected:
	int32_t m_bSound{};

protected:
	long m_nUnit{};

protected:
	uint32_t m_unSoundCookie{};

protected:
	_x_com_ptr<IWzProperty> m_pUIProp;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pUILayer;

protected:
	ZRef<QuestTimerInfo> m_pInfo;

protected:
	ZRef<CUIQuestTimer> m_pQuestTimer;
	// Methods
public:
	virtual ~CUIQuestTimerAction();

public:
	void _dtor_0();

public:
	CUIQuestTimerAction(const CUIQuestTimerAction &arg0);

public:
	void _ctor_1(const CUIQuestTimerAction &arg0);

public:
	CUIQuestTimerAction(ZRef<CUIQuestTimer> arg0, ZRef<QuestTimerInfo> arg1, long arg2, long arg3);

public:
	void _ctor_0(ZRef<CUIQuestTimer> arg0, ZRef<QuestTimerInfo> arg1, long arg2, long arg3);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void Update();

public:
	virtual void OnMoveWnd(long l, long t);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual int32_t IsMyAddon(CWnd *pWnd);

public:
	int32_t IsMoving();

public:
	long GetWidth();

public:
	long GetHeight();

public:
	long GetDestroyActionDelay();

public:
	void SetVisible(int32_t bVisible);

	CLASS_RTTI_(CUIQuestTimerAction, CUIWnd);

public:
	CUIQuestTimerAction &operator=(const CUIQuestTimerAction &arg0);

public:
	static CUIQuestTimerAction &_op_assign_19(CUIQuestTimerAction *pThis, const CUIQuestTimerAction &arg0);
};
STATIC_ASSERT_SIZE(CUIQuestTimerAction, 2864);
class CUIQuestTimer : public CUIWnd
{
	// Nested
public:
	enum UnnamedEnum46408
	{
		kDefault_X = 700,
		kDefault_Y = 50,
		kWidth = 52,
		kHeight = 12,
		kTimer_Gap = 50,
		kGauge_Width = 48,
		kGauge_Height = 8,
		KGauge_MarginX = 2,
		KGauge_MarginY = 2
	};
	enum TIME_GAUGE_
	{
		TIME_GAUGE_LEFT_END = 0,
		TIME_GAUGE_RIGHT_END = 1,
		TIME_GAUGE_MIDDLE = 2,
		TIME_GAUGE_BACKGRND = 3,
		TIME_GAUGE_NO = 4
	};
	// Fields
protected:
	long m_nLeft{};

protected:
	long m_nTop{};

protected:
	int32_t m_bToolTipVisible{};

protected:
	int32_t m_bMoving{};

protected:
	tagPOINT m_ptMouse{};

protected:
	long m_nUnit{};

protected:
	long m_tUpdate{};

protected:
	long m_tDrawToolTip{};

protected:
	int32_t m_bTimeKeepQuestTimer{};

protected:
	ZRef<QuestTimerInfo> m_pInfo;

protected:
	ZRef<CUIQuestTimerAction> m_pAction;

protected:
	std::array<_x_com_ptr<IWzCanvas>, 4> m_apTimeGauge;
	// Methods
public:
	virtual ~CUIQuestTimer();

public:
	void _dtor_0();

public:
	CUIQuestTimer(const CUIQuestTimer &arg0);

public:
	void _ctor_1(const CUIQuestTimer &arg0);

public:
	CUIQuestTimer(uint16_t usQuestID, long tRemain, long nX, long nY, int32_t bTimeKeepQuestTimer);

public:
	void _ctor_0(uint16_t usQuestID, long tRemain, long nX, long nY, int32_t bTimeKeepQuestTimer);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void Update();

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnMoveWnd(long l, long t);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual int32_t IsMyAddon(CWnd *pWnd);

public:
	virtual void SetScreenMode(bool bIsLarge, bool bNeedInvalidateTabs);

public:
	void SetToolTip();

public:
	virtual void ClearToolTip();

public:
	void SetToolTipVisible(int32_t bVisible);

public:
	void SetMouse(long l, long t);

public:
	int32_t IsMoving();

public:
	long GetLeft();

public:
	long GetTop();

public:
	uint16_t GetQuestID();

public:
	ZXString<char> GetRemainTimeString(int32_t bShort);

public:
	void SetRemainTime(long arg0);

public:
	void SetVisible(int32_t bVisible);

public:
	int32_t IsTimeKeepQuestTimer();

	CLASS_RTTI_(CUIQuestTimer, CUIWnd);

public:
	CUIQuestTimer &operator=(const CUIQuestTimer &arg0);

public:
	static CUIQuestTimer &_op_assign_28(CUIQuestTimer *pThis, const CUIQuestTimer &arg0);
};
STATIC_ASSERT_SIZE(CUIQuestTimer, 2896);
