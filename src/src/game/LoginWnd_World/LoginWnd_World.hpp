// LoginWnd_World.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CtrlWnd/CtrlWnd.hpp"
#include "Login/Login.hpp"
#include "FadeWnd/FadeWnd.hpp"
#include "Dialog/Dialog.hpp"

// Level: 1 0x21e8f
class CUIChannelSelect;
// Level: 1 0x21ec2
class CUIRecommendWorld;
// Level: 1 0x21e58
class CUIWorldSelect;

class CUIChannelSelect : public CFadeWnd, public TSingleton<CUIChannelSelect>
{
	// Nested
public:
	struct CREATEPARAM
	{
		// Nested
		// Fields
	public:
		void *pLogin{};

	public:
		long nWorldIdx{};

	public:
		long bPopulateLevel{};
		// Methods
	};

public:
	struct DescInfo
	{
		// Nested
		// Fields
	public:
		ZXString<char> sDesc;

	public:
		long nWidth{};
		// Methods
	public:
		~DescInfo();

	public:
		void _dtor_0() const;

	public:
		DescInfo(const CUIChannelSelect::DescInfo &arg0);

	public:
		void _ctor_1(const CUIChannelSelect::DescInfo &arg0) const;

	public:
		DescInfo();

	public:
		void _ctor_0() const;

	public:
		CUIChannelSelect::DescInfo &operator=(const CUIChannelSelect::DescInfo &arg0);

	public:
		static CUIChannelSelect::DescInfo &_op_assign_3(CUIChannelSelect::DescInfo *pThis, const CUIChannelSelect::DescInfo &arg0);
	};

public:
	enum ID_CTRL_CHANNELSELECT_BT
	{
		ID_CTRL_CHANNELSELECT_BT = 1000
	};
	enum CHANNEL_GAUGE_
	{
		CHANNEL_GAUGE_COUNT = 14,
		CHANNEL_GAUGE_UNIT = 55
	};
	// Fields
protected:
	CLogin *m_pLogin{};

protected:
	long m_nUserPopulation{};

protected:
	long m_nSelect{};

protected:
	CLogin::WORLDITEM *m_pWorldItem{};

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasWorldName;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasGauge;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerSelect;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerDummy;

protected:
	long m_bCheck{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerScroll;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerEventDesc;

protected:
	ZRef<CCtrlButton> m_pBtCS;

protected:
	ZRef<CConnectionNoticeDlg> m_pConnectionDlg;
	// Methods
public:
	virtual ~CUIChannelSelect();

public:
	void _dtor_0();

public:
	CUIChannelSelect(const CUIChannelSelect &arg0);

public:
	void _ctor_1(const CUIChannelSelect &arg0) const;

public:
	CUIChannelSelect(void *pData);

public:
	void _ctor_0(void *pData);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnPreFadeIn();

public:
	virtual void OnPostFadeOut();

public:
	virtual void Delete();

public:
	void ResetInfo(long nWorldIdx, long bPopulateLevel, int32_t bRedraw);

public:
	void DrawNoticeConnecting();

public:
	void RemoveNoticeConnecting();

protected:
	tagRECT GetRect(long nIdx) const;

protected:
	long GetChannelIDFromPt(const tagPOINT &pt) const;

protected:
	long GetCharCount(const char *arg0, ZXString<char> arg1) const;

protected:
	int32_t IsRequestValid() const;

protected:
	void CreateEventDescBalloon(ZXString<char> arg0) const;

protected:
	void MakeBalloon(long arg0, long arg1, long arg2) const;

protected:
	void SetSelected(long nChannelID);

protected:
	void SelectChannel(long nChannelID);

protected:
	void EnterChannel(long nChannelID);

public:
	CUIChannelSelect &operator=(const CUIChannelSelect &arg0);

public:
	static CUIChannelSelect &_op_assign_24(CUIChannelSelect *pThis, const CUIChannelSelect &arg0);
};
STATIC_ASSERT_SIZE(CUIChannelSelect, 304);
class CUIRecommendWorld : public CDialog, public TSingleton<CUIRecommendWorld>
{
	// Nested
public:
	enum ID_CTRL_
	{
		ID_CTRL_PREV_BT = 1000,
		ID_CTRL_NEXT_BT = 1001,
		ID_CTRL_SELECT_BT = 1002,
		ID_CTRL_CLOSE_BT = 1003,
		ID_CTRL_MESSAGE_SCR = 1004
	};
	enum kUIRW_
	{
		kUIRW_X = 302,
		kUIRW_Y = 152,
		kUIRW_W = 200,
		kUIRW_H = 228,
		kUIRW_MESSAGE_X = 40,
		kUIRW_MESSAGE_Y = 110,
		kUIRW_MESSAGE_W = 125,
		kUIRW_MESSAGE_H = 70,
		kUIRW_MESSAGE_SCR_X = 170,
		kUIRW_MESSAGE_SCR_Y = 110,
		kUIRW_MESSAGE_SCR_H = 70,
		kUIRW_WORLD_X = 34,
		kUIRW_WORLD_Y = 35,
		kUIRW_WORLD_W = 135,
		kUIRW_WORLD_H = 49,
		kUIRW_PREV_BT_X = 34,
		kUIRW_PREV_BT_Y = 90,
		kUIRW_NEXT_BT_X = 135,
		kUIRW_NEXT_BT_Y = 90,
		kUIRW_CLOSE_BT_X = 104,
		kUIRW_CLOSE_BT_Y = 185,
		kUIRW_SELECT_BT_X = 47,
		kUIRW_SELECT_BT_Y = 185
	};
	// Fields

	SINGLETON_PAD;

protected:
	CLogin *m_pLogin{};

protected:
	long m_nRWMIndex{};

protected:
	ZRef<CCtrlButton> m_pBtPrev;

protected:
	ZRef<CCtrlButton> m_pBtNext;

protected:
	ZRef<CCtrlButton> m_pBtSelect;

protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	_x_com_ptr<IWzFont> m_pMessageFont;

protected:
	ZArray<ZXString16> m_asMessage;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasWorldName;

protected:
	long m_nMessageRange{};
	// Methods
public:
	virtual ~CUIRecommendWorld();

public:
	void _dtor_0();

public:
	CUIRecommendWorld(const CUIRecommendWorld &arg0);

public:
	void _ctor_1(const CUIRecommendWorld &arg0) const;

public:
	CUIRecommendWorld(CLogin *pData);

public:
	void _ctor_0(CLogin *pData);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void SetRet(long nRet);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	int32_t IsRequestValid();

public:
	void SelectWorld();

public:
	void MoveWorld(long nMovement);

public:
	void ViewWorldSelect() const;

public:
	void ResetWorldAndMessage(int32_t bRedraw);

public:
	CUIRecommendWorld &operator=(const CUIRecommendWorld &arg0);

public:
	static CUIRecommendWorld &_op_assign_16(CUIRecommendWorld *pThis, const CUIRecommendWorld &arg0);
};
STATIC_ASSERT_SIZE(CUIRecommendWorld, 204);
class CUIWorldSelect : public CDialog, public TSingleton<CUIWorldSelect>
{
	// Nested
public:
	struct DescInfo
	{
		// Nested
		// Fields
	public:
		ZXString<char> sDesc;

	public:
		long nWidth{};
		// Methods
	public:
		~DescInfo();

	public:
		void _dtor_0() const;

	public:
		DescInfo(const CUIWorldSelect::DescInfo &arg0);

	public:
		void _ctor_1(const CUIWorldSelect::DescInfo &arg0) const;

	public:
		DescInfo();

	public:
		void _ctor_0() const;

	public:
		CUIWorldSelect::DescInfo &operator=(const CUIWorldSelect::DescInfo &arg0);

	public:
		static CUIWorldSelect::DescInfo &_op_assign_3(CUIWorldSelect::DescInfo *pThis, const CUIWorldSelect::DescInfo &arg0);
	};
	enum ID_CTRL_WORLDSELECT_BT
	{
		ID_CTRL_WORLDSELECT_BT = 1000
	};
	enum kUIWS_
	{
		kUIWS_MAX_WORLD = 36,
		kUIWS_WORLD_WIDTH = 94,
		kUIWS_WORLD_HEIGHT = 26,
		kUIWS_WORLD_PER_ROW = 6
	};
	enum LAYER_ALPHA
	{
		LAYER_ALPHA = 253
	};
	// Fields
	SINGLETON_PAD;

protected:
	CLogin *m_pLogin{};

protected:
	long m_nWorld{};

protected:
	long m_nKeyFocus{};

protected:
	std::array<ZRef<CCtrlButton>, 36> m_pBtWS{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerWorldInfo;

protected:
	ZArray<_x_com_ptr<IWzGr2DLayer>> m_apLayerBalloon;

protected:
	ZArray<_x_com_ptr<IWzGr2DLayer>> m_apLayerWorldState;

protected:
	long nBalloonCount{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerAdvice;

protected:
	long m_nWorldIdx{};
	// Methods
public:
	virtual ~CUIWorldSelect();

public:
	void _dtor_0();

public:
	CUIWorldSelect(const CUIWorldSelect &arg0);

public:
	void _ctor_1(const CUIWorldSelect &arg0) const;

public:
	CUIWorldSelect(CLogin *pData);

public:
	void _ctor_0(CLogin *pData);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void SetRet(long nRet);

public:
	void ResetInfo(long arg0, int32_t arg1) const;

public:
	void DrawWorldItems();

public:
	void EnableButtons(long nSelIdx);

public:
	void SetFocusWorld(long nWorldID);

public:
	void UserLimitResult(long bOverUserLimit, long bPopulateLevel);

public:
	void MakeAdvice();

protected:
	void SetKeyFocus(long nIdx);

protected:
	void ToggleScroll() const;

protected:
	int32_t IsRequestValid();

protected:
	_x_com_ptr<IWzGr2DLayer> MakeBalloon(long nWidth, long nHeight, int32_t bArrowType);

protected:
	_x_com_ptr<IWzCanvas> CreateCanvas(Ztl_bstr_t bsText, uint32_t uFontColor, _x_com_ptr<IWzProperty> pProp);

protected:
	void MakeWSBalloon(Ztl_bstr_t arg0, long arg1, long arg2);

public:
	CUIWorldSelect &operator=(const CUIWorldSelect &arg0);

public:
	static CUIWorldSelect &_op_assign_21(CUIWorldSelect *pThis, const CUIWorldSelect &arg0);
};
STATIC_ASSERT_SIZE(CUIWorldSelect, 472);
