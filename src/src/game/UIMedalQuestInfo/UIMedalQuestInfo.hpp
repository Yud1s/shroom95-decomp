// UIMedalQuestInfo.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UIWnd/UIWnd.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "Wnd/Wnd.hpp"
#include "BookDlg/BookDlg.hpp"

class CCtrlTab;
class CCtrlScrollBar;
class CAvatar;

// Level: 0 0x15260
struct QIBaseCompareFunc;
// Level: 0 0xe766
struct MedalQuestInfo;
// Level: 0 0x15265
struct QICategoryCompareFunc;
// Level: 1 0xe6e5
class CUIMedalQuestInfo;
// Level: 1 0xe67c
class CUIMedalQuestInfoDetail;

struct QIBaseCompareFunc
{
	// Nested
	// Fields
	// Methods
public:
	int32_t operator()(const ZRef<MedalQuestInfo> a, const ZRef<MedalQuestInfo> b);

public:
	static int32_t _op_call_0(QIBaseCompareFunc *pThis, const ZRef<MedalQuestInfo> a, const ZRef<MedalQuestInfo> b);
};
STATIC_ASSERT_SIZE(QIBaseCompareFunc, 1);




struct MedalQuestInfo
{
	// Nested
	// Fields
public:
	uint16_t usQuestID{};

public:
	long nCategory{};

public:
	long nMedalCategory{};

public:
	long nMedalState{};

public:
	ZXString<char> sName;

public:
	ZXString<char> sLevelLimit;

public:
	ZArray<ZXString<char>> asDesc;

public:
	ZArray<long> aCTHeight;

public:
	ZArray<ZArray<CT_INFO>> aaCT;

public:
	int32_t bTimeLimitQuest{};

public:
	long nCompletedCount_OfSeries{};

public:
	long nSortKey{};

public:
	long nViewMedalID{};

public:
	long nTop{};

public:
	_FILETIME ftCompleteTime;

public:
	ZArray<long> aResignedTogetherQuest;

public:
	ZArray<ZXString<char>> asSummary;

public:
	ZArray<long> aCTSummary_Height;

public:
	ZArray<ZArray<CT_INFO>> aaCTSummary;
	// Methods
public:
	~MedalQuestInfo();

public:
	void _dtor_0();

public:
	MedalQuestInfo(const MedalQuestInfo &arg0);

public:
	void _ctor_1(const MedalQuestInfo &arg0);

public:
	MedalQuestInfo();

public:
	void _ctor_0();

public:
	MedalQuestInfo &operator=(const MedalQuestInfo &arg0);

public:
	static MedalQuestInfo &_op_assign_3(MedalQuestInfo *pThis, const MedalQuestInfo &arg0);
};
STATIC_ASSERT_SIZE(MedalQuestInfo, 80);

struct QICategoryCompareFunc
{
	// Nested
	// Fields
	// Methods
public:
	int32_t operator()(const ZRef<MedalQuestInfo> a, const ZRef<MedalQuestInfo> b);

public:
	static int32_t _op_call_0(QICategoryCompareFunc *pThis, const ZRef<MedalQuestInfo> a, const ZRef<MedalQuestInfo> b);
};
STATIC_ASSERT_SIZE(QICategoryCompareFunc, 1);
class CUIMedalQuestInfo : public CUIWnd, public TSingleton<CUIMedalQuestInfo>
{
	// Nested
public:
	enum ID_CTRL_
	{
		ID_CTRL_UIMEDALQUESTINFO_TAB = 2000,
		ID_CTRL_UIMEDALQUESTINFO_SCR_LIST = 2001,
		ID_CTRL_BT_MIN = 3000,
		ID_CTRL_BT_MAX = 4000,
		ID_CTRL_BT_OK = 5000,
		ID_CTRL_BT_GIVEUP = 6000
	};
	enum UnnamedEnum46579
	{
		kWidth = 262,
		kHeight = 374,
		kDetail_X = 262,
		kDetail_Y = 0,
		kBtClose_X = 242,
		kBtClose_Y = 6,
		kBaseCount_X = 55,
		kBaseCount_Y = 60,
		kBaseScrList_X = 241,
		kBaseScrList_Y = 96,
		kBaseScrList_Len = 245,
		kList_BaseMargin_X = 10,
		kList_BaseMargin_Y = 96,
		kList_BaseWidth = 229,
		kList_BaseHeight = 242,
		kList_Margin_X = 10,
		kList_Margin_Y = 52,
		KList_Width = 229,
		kList_Height = 290,
		kScrList_X = 241,
		kScrList_Y = 50,
		kScrList_Len = 290,
		kUnits_Height = 46,
		kUnits_Margin = 3,
		kCUnits_Height = 18,
		kCUnits_Margin = 5,
		kUnits_Per_Page = 12
	};
	// Fields
protected:
	ZRef<CCtrlTab> m_pTab;

protected:
	ZRef<CCtrlScrollBar> m_pSBList;

protected:
	long m_nTab{};

protected:
	long m_nSelMedalCategory{};

protected:
	long m_nSelect{};

protected:
	long m_nToggleTime{};

protected:
	int32_t m_bDetailOpen{};

protected:
	long m_nScrollPos{};

protected:
	long m_nMedalItemID{};

protected:
	_x_com_ptr<IWzProperty> m_pProp;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasIcon;

protected:
	std::array<std::array<_x_com_ptr<IWzFont>, 2>, 2> m_pFontBack;

protected:
	ZArray<_x_com_ptr<IWzFont>> m_apFont;

protected:
	ZArray<_x_com_ptr<IWzGr2DLayer>> m_apLayerIcon;

protected:
	_x_com_ptr<IWzCanvas> m_pBackgrndBase;

protected:
	_x_com_ptr<IWzCanvas> m_pBackgrndMedalInfo;

protected:
	_x_com_ptr<IWzFont> m_pCountFont;

protected:
	_x_com_ptr<IWzFont> m_pQuestName;

protected:
	_x_com_ptr<IWzFont> m_pQuestDetail;

protected:
	std::array<ZArray<ZRef<MedalQuestInfo>>, 4> m_aaMedalQuestInfo;

protected:
	ZArray<ZRef<MedalQuestInfo>> m_aaBaseMQInfo;

protected:
	ZRef<CUIMedalQuestInfoDetail> m_pQuestInfoDetail;

protected:
	std::array<ZArray<ZRef<CCtrlButton>>, 4> m_apBtMin;

protected:
	std::array<ZArray<ZRef<CCtrlButton>>, 4> m_apBtMax;

private:
	ZMap<long, long, long> m_mCountInState;

private:
	CUIToolTip m_uiToolTip;
	// Methods
public:
	virtual ~CUIMedalQuestInfo();

public:
	void _dtor_0();

public:
	CUIMedalQuestInfo(const CUIMedalQuestInfo &arg0);

public:
	void _ctor_1(const CUIMedalQuestInfo &arg0);

public:
	CUIMedalQuestInfo(long nTab);

public:
	void _ctor_0(long nTab);

public:
	virtual void OnCreate(void *arg0);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnDestroy();

public:
	virtual void Update();

public:
	virtual int32_t IsMyAddon(CWnd *pWnd);

public:
	int32_t ShowQuestInfoDetail(long nMedalCategory, uint16_t usQuestID);

public:
	void ResetInfo(int32_t bLoadData);

public:
	void ResetWearedMedal();

public:
	void ToggleDetail(int32_t bOpen);

public:
	ZRef<MedalQuestInfo> GetQuestInfo();

public:
	ZArray<ZXString<char>> GetQuestDesc(long nState, _x_com_ptr<IWzProperty> pPropQuest);

public:
	ZArray<ZXString<char>> GetQuestSummary(_x_com_ptr<IWzProperty> pPropQuest);

public:
	ZArray<long> GetResignedTogetherQuests(_x_com_ptr<IWzProperty> pPropQuest);

public:
	static void __cdecl ClearInfo_AboutReadQuest();

public:
	long GetCurTab();

public:
	void ToggleTab();

protected:
	void OnTabChanged(long nTab);

protected:
	void LoadData();

protected:
	void LoadWearedMedal();

protected:
	void InsertQuestInfo(long nState, uint16_t usQuestID, _x_com_ptr<IWzProperty> pPropQuest, _FILETIME ftEnd);

protected:
	long GetQuestState(uint16_t usQuestID, _FILETIME &ftEnd);

protected:
	void SetBackFont(int32_t bLast);

protected:
	void SetScrollBar();

protected:
	void SetSelect(long nSelect);

protected:
	long GetMedalState(long nState);

protected:
	long GetMedalCategory(long arg0);

protected:
	int32_t IsMinimizedState(long nMedalCategory, long nMedalState);

protected:
	int32_t IsStateButton(ZRef<MedalQuestInfo> pQuest);

protected:
	void ToggleState(long nMedalCategory, long nMedalState, int32_t bOpen);

protected:
	void DestroyButton(long nMedalCategory, long nMedalState);

protected:
	void SyncScrollBarWithSelected();

protected:
	long GetSelect(long ry);

protected:
	long GetHeight(long arg0);

public:
	int32_t TryShowRecentlyUpdatedQuest();

public:
	int32_t TryShowRecentlyViewedQuest();

public:
	int32_t TryShowSuitableLevelQuest(int32_t arg0);

public:
	int32_t TryShowTopQuest();

	CLASS_RTTI_(CUIMedalQuestInfo, CUIWnd);

public:
	CUIMedalQuestInfo &operator=(const CUIMedalQuestInfo &arg0);

public:
	static CUIMedalQuestInfo &_op_assign_47(CUIMedalQuestInfo *pThis, const CUIMedalQuestInfo &arg0);
};
STATIC_ASSERT_SIZE(CUIMedalQuestInfo, 5636);
class CUIMedalQuestInfoDetail : public CWnd, public TSingleton<CUIMedalQuestInfoDetail>
{
	// Nested
public:
	enum ID_CTRL_
{
	ID_CTRL_UIQUESTINFO_SCR_LOG = 2000,
	ID_CTRL_UIQUESTINFO_SCR_SUMMARY = 2001,
	ID_CTRL_BT_HIDE = 2002,
	ID_CTRL_BT_CHALLENGE = 2003,
	ID_CTRL_BT_GIVEUP = 2004
};
enum k
{
	kWidth = 304,
	kHeight = 374,
	kLine_Height = 7,
	kLog_Margin_X = 17,
	kLog_Width = 265,
	kScrLog_X = 284,
	kScrLog_Y = 128,
	kScrLog_Len = 213,
	kScrLog_Unit = 8,
	kButton_Y = 350,
	kTimer_Width = 150,
	kTimer_Height = 20
};
	// Fields
protected:
	ZRef<CUIMedalQuestInfo> m_pUIMedalQuestInfo;

protected:
	ZRef<MedalQuestInfo> m_pQI;

protected:
	ZRef<CCtrlButton> m_pBtChallenge;

protected:
	ZRef<CCtrlButton> m_pBtGiveup;

protected:
	ZRef<CCtrlScrollBar> m_pSBLog;

protected:
	long m_nSBLogPos{};

protected:
	unsigned long m_dwNpcTemplateID{};

protected:
	_x_com_ptr<IWzProperty> m_pProp;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerNPC;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerGauge_SeriesQuest;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasLine;

protected:
	_x_com_ptr<IWzFont> m_pFont;

protected:
	_x_com_ptr<IWzFont> m_pFontReq;

protected:
	long m_tLastUpdate{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerQuestTimer;

protected:
	ZRef<CAvatar> m_pImitatedLook;

private:
	CUIToolTip m_uiToolTip;

private:
	tagRECT m_rcSeriesQuestGauge{};

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIMedalQuestInfoDetail();

public:
	void _dtor_0();

public:
	CUIMedalQuestInfoDetail(const CUIMedalQuestInfoDetail &arg0);

public:
	void _ctor_1(const CUIMedalQuestInfoDetail &arg0);

public:
	CUIMedalQuestInfoDetail(ZRef<CUIMedalQuestInfo> pUIQuestInfo, long l, long t);

public:
	void _ctor_0(ZRef<CUIMedalQuestInfo> pUIQuestInfo, long l, long t);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void Update();

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	void ResetInfo();

public:
	void SetNPC();

public:
	void SetGauge_SeriesQuest();

public:
	void SetButton();

public:
	void SetScrollBar();

public:
	void SetTimer();

public:
	void SetLayout();

protected:
	void DrawTimeText();

protected:
	void MarkNpcLocation_InWorldMap();

public:
	CUIMedalQuestInfoDetail &operator=(const CUIMedalQuestInfoDetail &arg0);

public:
	static CUIMedalQuestInfoDetail &_op_assign_20(CUIMedalQuestInfoDetail *pThis, const CUIMedalQuestInfoDetail &arg0);
};
STATIC_ASSERT_SIZE(CUIMedalQuestInfoDetail, 2884);



void __cdecl DownHeap_ZRef_MedalQuestInfo__QICategoryCompareFunc_(ZArray<ZRef<MedalQuestInfo>> &a, int32_t nIdx, int32_t nLen, int32_t nFrom, QICategoryCompareFunc &comp);
void __cdecl ZSort_ZRef_MedalQuestInfo__QIBaseCompareFunc_(ZArray<ZRef<MedalQuestInfo>> &a, QIBaseCompareFunc comp);
int32_t __cdecl Partition_ZRef_MedalQuestInfo__QIBaseCompareFunc_(ZArray<ZRef<MedalQuestInfo>> &a, int32_t nFrom, int32_t nTo, const ZRef<MedalQuestInfo> &pivot, QIBaseCompareFunc &comp);
void __cdecl ZSort_ZRef_MedalQuestInfo__QIBaseCompareFunc_(ZArray<ZRef<MedalQuestInfo>> &a, __POSITION *posFrom, __POSITION *posTo, QIBaseCompareFunc comp);
void __cdecl ZSort_ZRef_MedalQuestInfo__QICategoryCompareFunc_(ZArray<ZRef<MedalQuestInfo>> &a, __POSITION *posFrom, __POSITION *posTo, QICategoryCompareFunc comp);
void __cdecl ZSort_ZRef_MedalQuestInfo__QICategoryCompareFunc_(ZArray<ZRef<MedalQuestInfo>> &a, QICategoryCompareFunc comp);
int32_t __cdecl Partition_ZRef_MedalQuestInfo__QICategoryCompareFunc_(ZArray<ZRef<MedalQuestInfo>> &a, int32_t nFrom, int32_t nTo, const ZRef<MedalQuestInfo> &pivot, QICategoryCompareFunc &comp);
const ZRef<MedalQuestInfo> &__cdecl Median_ZRef_MedalQuestInfo__QIBaseCompareFunc_(const ZRef<MedalQuestInfo> &a, const ZRef<MedalQuestInfo> &b, const ZRef<MedalQuestInfo> &c, QIBaseCompareFunc &comp);
const ZRef<MedalQuestInfo> &__cdecl Median_ZRef_MedalQuestInfo__QICategoryCompareFunc_(const ZRef<MedalQuestInfo> &a, const ZRef<MedalQuestInfo> &b, const ZRef<MedalQuestInfo> &c, QICategoryCompareFunc &comp);
void __cdecl InsertionSort_ZRef_MedalQuestInfo__QICategoryCompareFunc_(ZArray<ZRef<MedalQuestInfo>> &a, int32_t nFrom, int32_t nTo, QICategoryCompareFunc &comp);
void __cdecl InsertionSort_ZRef_MedalQuestInfo__QIBaseCompareFunc_(ZArray<ZRef<MedalQuestInfo>> &a, int32_t nFrom, int32_t nTo, QIBaseCompareFunc &comp);
void __cdecl DownHeap_ZRef_MedalQuestInfo__QIBaseCompareFunc_(ZArray<ZRef<MedalQuestInfo>> &a, int32_t nIdx, int32_t nLen, int32_t nFrom, QIBaseCompareFunc &comp);
