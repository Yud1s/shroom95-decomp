// UIQuestInfo.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UIToolTip/UIToolTip.hpp"
#include "Wnd/Wnd.hpp"
#include "UIWnd/UIWnd.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "CtrlButton/CtrlButton.hpp"

class CCtrlScrollBar;
class CCtrlTab;
class CAvatar;
struct CT_INFO;

// Level: 0 0xe46e
struct QuestInfo;
// Level: 0 0x14dcb
struct QICompareFunc;
// Level: 1 0x14df7
class CCtrlButtonQuestAlarmAuto;
// Level: 1 0xe58d
class CUIQuestAlarm;
// Level: 1 0xe424
class CUIQuestInfoDetail;
// Level: 1 0xe4f6
class CUIQuestInfo;

struct QuestInfo
{
	// Nested
	// Fields
public:
	uint16_t usQuestID{};

public:
	long nIconType{};

public:
	long nCategory{};

public:
	ZXString<char> sName;

public:
	ZXString<char> sLevelLimit;

public:
	ZXString<char> sMateName;

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
	ZXString<char> sPrefix;

public:
	ZArray<ZXString<char>> asSummary;

public:
	ZArray<long> aCTSummary_Height;

public:
	ZArray<ZArray<CT_INFO>> aaCTSummary;

public:
	long nDeliveryType{};
	// Methods
public:
	~QuestInfo();

public:
	void _dtor_0();

public:
	QuestInfo(const QuestInfo &arg0);

public:
	void _ctor_1( const QuestInfo &arg0);

public:
	QuestInfo();

public:
	void _ctor_0();

public:
	QuestInfo &operator=(const QuestInfo &arg0);

public:
	static QuestInfo &_op_assign_3(QuestInfo *pThis, const QuestInfo &arg0);
};
STATIC_ASSERT_SIZE(QuestInfo, 68);
struct QICompareFunc
{
	// Nested
	// Fields
	// Methods
public:
	int32_t operator()(const ZRef<QuestInfo> a, const ZRef<QuestInfo> b);

public:
	static int32_t _op_call_0(QICompareFunc *pThis, const ZRef<QuestInfo> a, const ZRef<QuestInfo> b);
};
STATIC_ASSERT_SIZE(QICompareFunc, 1);
class CCtrlButtonQuestAlarmAuto : public CCtrlButton
{
	// Nested
	// Fields
public:
	int32_t m_bUseAutoRegister{};
	// Methods
public:
	virtual ~CCtrlButtonQuestAlarmAuto();

public:
	void _dtor_0();

public:
	CCtrlButtonQuestAlarmAuto(const CCtrlButtonQuestAlarmAuto &arg0);

public:
	void _ctor_1( const CCtrlButtonQuestAlarmAuto &arg0);

public:
	CCtrlButtonQuestAlarmAuto();

public:
	void _ctor_0();

public:
	virtual void SetEnable(int32_t bEnable);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

	CLASS_RTTI_(CCtrlButtonQuestAlarmAuto, CCtrlButton);

public:
	CCtrlButtonQuestAlarmAuto &operator=(const CCtrlButtonQuestAlarmAuto &arg0);

public:
	static CCtrlButtonQuestAlarmAuto &_op_assign_9(CCtrlButtonQuestAlarmAuto *pThis, const CCtrlButtonQuestAlarmAuto &arg0);
};
STATIC_ASSERT_SIZE(CCtrlButtonQuestAlarmAuto, 2784);
class CUIQuestAlarm : public CUIWnd, public TSingleton<CUIQuestAlarm>
{
	// Nested
public:
	enum ID_CTRL_BT_
{
	ID_CTRL_BT_MAX = 2000,
	ID_CTRL_BT_MIN = 2001,
	ID_CTRL_BT_DELETE1 = 2002,
	ID_CTRL_BT_DELETE2 = 2003,
	ID_CTRL_BT_DELETE3 = 2004,
	ID_CTRL_BT_DELETE4 = 2005,
	ID_CTRL_BT_DELETE5 = 2006,
	ID_CTRL_BT_AUTO = 2007,
	ID_CTRL_BT_Q = 2008
};
enum kWidth
{
	kWidth = 180
};
	// Fields
protected:
	ZArray<long> m_aQuestID;

protected:
	int32_t m_bMaximized{};

protected:
	_x_com_ptr<IWzFont> m_pFont;

protected:
	_x_com_ptr<IWzFont> m_pFontTitle;

protected:
	_x_com_ptr<IWzFont> m_pFontTitleSkyBlue;

protected:
	_x_com_ptr<IWzFont> m_pFontRed;

protected:
	_x_com_ptr<IWzFont> m_pFontRedViolet;

protected:
	_x_com_ptr<IWzFont> m_pFontOrange;

protected:
	_x_com_ptr<IWzFont> m_pFontGreen;

protected:
	std::array<ZRef<CCtrlButton>, 5> m_apBtDelete{};

protected:
	ZRef<CCtrlButton> m_pBtAuto;

protected:
	ZRef<CCtrlButtonWithAniState> m_pBtQ;

protected:
	_x_com_ptr<IWzCanvas> m_pBackgrndCenter;

protected:
	_x_com_ptr<IWzCanvas> m_pBackgrndBottom;

protected:
	ZMap<ZXString<char>, tagRECT, ZXString<char>> m_mQuestTitleRect;

private:
	int32_t m_bActive{};

private:
	int32_t m_bCreated{};

private:
	ZMap<long, unsigned long, long> m_mQuestLastUpdateTime;

private:
	ZArray<long> m_aDeletedQuestID;

private:
	int32_t m_bUseAutoRegister{};

private:
	ZArray<ZXString<char>> m_aTitleText;

private:
	ZArray<tagRECT> m_aTitleRect;

private:
	ZArray<tagRECT> m_aDemandRect;

private:
	std::array<int32_t, 5> m_bRegisteredJustBefore{};

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIQuestAlarm();

public:
	void _dtor_0();

public:
	CUIQuestAlarm(const CUIQuestAlarm &arg0);

public:
	void _ctor_1( const CUIQuestAlarm &arg0);

public:
	CUIQuestAlarm();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void Draw(const tagRECT *arg0);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	int32_t RemoveOldQuest();

public:
	void ResetInfo(uint16_t usQuestID);

public:
	void RegisterQuest(uint16_t usQuestID, int32_t bAutomated);

public:
	void DeleteQuest(uint16_t usQuestID);

public:
	void ToggleQuestAlarmState();

public:
	void UpdateNewQuestAlarmButton(int32_t bFoundNew);

public:
	long GetRegisterQuestNum();

public:
	int32_t IsInQuestAlarmList(uint16_t usQuestID);

public:
	_x_com_ptr<IWzFont> GetProgressFont(long nProportion);

public:
	_x_com_ptr<IWzFont> GetProgressFontMeso(double nProportion);

public:
	int32_t Recover();

public:
	int32_t IsCreated();

public:
	void Create();

public:
	void ClearHistory(long QID);

public:
	ZXString<char> CheckSecretItem(const ItemInfo &itemInfo);

protected:
	long GetHeight();

protected:
	void DeleteQuestByIndex(long nIdx);

private:
	void RemoveQuestByIndex(long nIdx);

public:
	CUIQuestAlarm &operator=(const CUIQuestAlarm &arg0);

public:
	static CUIQuestAlarm &_op_assign_28(CUIQuestAlarm *pThis, const CUIQuestAlarm &arg0);
};
STATIC_ASSERT_SIZE(CUIQuestAlarm, 3040);
class CUIQuestInfoDetail : public CWnd, public TSingleton<CUIQuestInfoDetail>
{
	// Nested
public:
	enum ID_CTRL_
{
	ID_CTRL_UIQUESTINFO_SCR_LOG = 2000,
	ID_CTRL_UIQUESTINFO_SCR_SUMMARY = 2001,
	ID_CTRL_BT_HIDE = 2002,
	ID_CTRL_BT_RESIGN = 2003,
	ID_CTRL_BT_MARK_NPC = 2004,
	ID_CTRL_BT_REGISTERALARM = 2005,
	ID_CTRL_BT_MARK_MOB = 2006,
	ID_CTRL_BT_QUESTDELIVERYACCEPT = 2007,
	ID_CTRL_BT_QUESTDELIVERYCOMPLETE = 2008
};
enum k
{
	kWidth = 296,
	kHeight = 396,
	kLine_Height = 7,
	kScrLog_X = 275,
	kScrLog_Y = 127,
	kScrLog_Len = 120,
	kScrLog_Len_L = 238,
	kScrLog_Unit = 8,
	kScrSummary_X = 275,
	kScrSummary_Y = 251,
	kScrSummary_Len = 113,
	kScrSummary_Unit = 8,
	kButton_Y = 373,
	kTimer_Width = 167,
	kTimer_Height = 20,
	kDeliveryButton_Height = 15
};
	// Fields
protected:
	ZRef<CUIQuestInfo> m_pUIQuestInfo;

protected:
	ZRef<QuestInfo> m_pQI;

protected:
	ZRef<CCtrlButton> m_pBtHide;

protected:
	ZRef<CCtrlButton> m_pBtResign;

protected:
	ZRef<CCtrlButton> m_pBtAccept;

protected:
	ZRef<CCtrlButton> m_pBtRegisterAlarm;

protected:
	ZRef<CCtrlButton> m_pBtQuestDeliveryAccept;

protected:
	ZRef<CCtrlButton> m_pBtQuestDeliveryComplete;

protected:
	ZRef<CCtrlScrollBar> m_pSBLog;

protected:
	long m_nSBLogPos{};

protected:
	ZRef<CCtrlScrollBar> m_pSBSummary;

protected:
	long m_nSBSummaryPos{};

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

private:
	ZArray<_x_com_ptr<IWzFont>> m_apFont;

private:
	long m_ctHeight{};

protected:
	ZRef<CCtrlButton> m_pBtMarkMob;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerTip;
	// Methods
public:
	virtual ~CUIQuestInfoDetail();

public:
	void _dtor_0();

public:
	CUIQuestInfoDetail(const CUIQuestInfoDetail &arg0);

public:
	void _ctor_1( const CUIQuestInfoDetail &arg0);

public:
	CUIQuestInfoDetail(ZRef<CUIQuestInfo> pUIQuestInfo, long l, long t);

public:
	void _ctor_0( ZRef<CUIQuestInfo> pUIQuestInfo, long l, long t);

public:
	virtual void OnCreate(void *arg0);

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
	uint16_t GetQuestID();

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

public:
	long GetScrLogLen();

protected:
	void DrawTimeText();

protected:
	void MarkNpcLocation_InWorldMap();

protected:
	void MarkMapLocation_InWorldMap(long nMapID);

public:
	void RemoveQuestGuideTip();

protected:
	void MarkMobLocation_InWorldMap();

protected:
	void CreateQuestGuideTip();

protected:
	long GetDeliveryButtonHeight();

public:
	CUIQuestInfoDetail &operator=(const CUIQuestInfoDetail &arg0);

public:
	static CUIQuestInfoDetail &_op_assign_27(CUIQuestInfoDetail *pThis, const CUIQuestInfoDetail &arg0);
};
STATIC_ASSERT_SIZE(CUIQuestInfoDetail, 2948);
class CUIQuestInfo : public CUIWnd, public TSingleton<CUIQuestInfo>
{
public:
	static ZList<unsigned short> ms_lQuestRead;


	// Nested
public:
	enum ID_CTRL_
{
	ID_CTRL_UIQUESTINFO_TAB = 2000,
	ID_CTRL_UIQUESTINFO_SCR_LIST = 2001,
	ID_CTRL_BT_MIN = 3000,
	ID_CTRL_BT_MAX = 4000,
	ID_CTRL_BT_SHOW_ONLY_WORTHY_QUESTS = 5000,
	ID_CTRL_BT_SHOW_ALL_QUESTS = 5001
};
enum UnnamedEnum46527
{
	kWidth = 235,
	kHeight = 396,
	kDetail_X = 235,
	kDetail_Y = 0,
	kBtClose_X = 214,
	kBtClose_Y = 6,
	kBtShowOnlyWorthyQuests_X = 150,
	kBtShowOnlyWorthyQuests_Y = 373,
	kList_Margin_X = 14,
	kList_Margin_Y = 52,
	KList_Width = 202,
	KList_Text_Width = 188,
	KList_Text_Gap = 3,
	kScrList_X = 217,
	kScrList_Y = 48,
	kScrList_Len = 318,
	kScrList_Unit = 22,
	kItems_Per_Page = 9
};
	// Fields
protected:
	ZRef<CCtrlTab> m_pTab;

protected:
	ZRef<CCtrlScrollBar> m_pSBList;

protected:
	long m_nTab{};

protected:
	long m_nSelect{};

protected:
	long m_nToggleTime{};

protected:
	int32_t m_bDetailOpen{};

protected:
	int32_t m_bDetailShown{};

protected:
	long m_nScrollPos{};

protected:
	_x_com_ptr<IWzProperty> m_pProp;

protected:
	std::array<_x_com_ptr<IWzCanvas>, 4> m_pCanvasIcon{};

protected:
	std::array<std::array<_x_com_ptr<IWzFont>, 2>, 2> m_pFontBack{};

protected:
	ZArray<_x_com_ptr<IWzFont>> m_apFont;

protected:
	ZArray<_x_com_ptr<IWzGr2DLayer>> m_apLayerIcon;

protected:
	std::array<ZArray<ZRef<QuestInfo>>, 4> m_aaQuestInfo{};

protected:
	ZRef<CUIQuestInfoDetail> m_pQuestInfoDetail;

protected:
	std::array<ZArray<ZRef<CCtrlButton>>, 4> m_apBtMin{};

protected:
	std::array<ZArray<ZRef<CCtrlButton>>, 4> m_apBtMax{};

protected:
	ZRef<CCtrlButton> m_pBtShowOnlyWorthyQuests;

protected:
	ZRef<CCtrlButton> m_pBtShowAllQuests;

private:
	ZMap<long, long, long> m_mCountInCategory;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIQuestInfo();

public:
	void _dtor_0();

public:
	CUIQuestInfo(const CUIQuestInfo &arg0);

public:
	void _ctor_1( const CUIQuestInfo &arg0);

public:
	CUIQuestInfo(long nTab);

public:
	void _ctor_0( long nTab);

public:
	virtual void OnCreate(void *arg0);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnDestroy();

public:
	virtual void OnMoveWnd(long l, long t);

public:
	virtual void Update();

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual int32_t IsMyAddon(CWnd *pWnd);

public:
	int32_t ShowQuestInfoDetail(long nTab, uint16_t usQuestID);

public:
	void ResetInfo(int32_t bLoadData);

public:
	void ToggleDetail(int32_t bOpen);

public:
	ZRef<QuestInfo> GetQuestInfo();

public:
	ZRef<QuestInfo> GetQuestInfo_(long arg0, long arg1);

public:
	ZArray<ZXString<char>> GetQuestDesc(long nState, _x_com_ptr<IWzProperty> pPropQuest);

public:
	ZArray<ZXString<char>> GetQuestSummary(_x_com_ptr<IWzProperty> pPropQuest);

public:
	void MarkQuestAsRead(uint16_t usQuestID);

public:
	static void __cdecl MarkQuestAsRead_static(uint16_t arg0);

public:
	static int32_t __cdecl IsMarkedAsRead(uint16_t usQuestID);

public:
	static void __cdecl ClearInfo_AboutReadQuest();

public:
	long GetCurTab();

public:
	void ToggleTab();

public:
	int32_t IsShowOnlyWorthyQuests_Public();

protected:
	void SetQuestViewState_ToOption(long nOption);

protected:
	long GetQuestViewState_FromOption();

protected:
	void SetRecentQuest_ToOption(long nOption);

protected:
	long GetRecentQuest_FromOption();

protected:
	void OnTabChanged(long nTab);

protected:
	void LoadData();

protected:
	void InsertQuestInfo(long nState, uint16_t usQuestID, _x_com_ptr<IWzProperty> pPropQuest, _FILETIME ftEnd, long nForcedCategory);

protected:
	long GetQuestState(uint16_t usQuestID, _FILETIME &ftEnd);

protected:
	void SetBackFont(int32_t bLast);

protected:
	void SetScrollBar();

protected:
	void SetButton();

protected:
	void SetSelect(long nSelect);

protected:
	void OnToggleDetail(int32_t bOpen);

protected:
	int32_t IsMinimizedCategory(long nTab, long nCategory);

protected:
	int32_t IsCategoryButton(ZRef<QuestInfo> pQuest);

protected:
	int32_t IsWorthlessQuest(uint16_t usQuestID);

protected:
	long GetCategoryOf(uint16_t usQuestID);

protected:
	void ToggleCategory(long nTab, long nCategory, int32_t bOpen);

protected:
	void DestroyCategoryButton(long nTab, long nCategory);

protected:
	void SyncScrollBarWithSelected();

protected:
	long GetQuestIdxFromMousePos(long rx, long ry);

public:
	int32_t TryShowRecentlyUpdatedQuest();

public:
	int32_t TryShowRecentlyViewedQuest();

public:
	int32_t TryShowSuitableLevelQuest(int32_t bNotRead);

public:
	int32_t TryShowTopQuest();

protected:
	int32_t IsShowOnlyWorthyQuests();

	CLASS_RTTI_(CUIQuestInfo, CUIWnd);

public:
	CUIQuestInfo &operator=(const CUIQuestInfo &arg0);

public:
	static CUIQuestInfo &_op_assign_56(CUIQuestInfo *pThis, const CUIQuestInfo &arg0);
};
STATIC_ASSERT_SIZE(CUIQuestInfo, 3024);





void __cdecl GetQuestSubInfo(uint16_t usQuestID, ZXString<char> &sLevelLimit);
const ZRef<QuestInfo> &__cdecl Median_ZRef_QuestInfo__QICompareFunc_(const ZRef<QuestInfo> &a, const ZRef<QuestInfo> &b, const ZRef<QuestInfo> &c, QICompareFunc &comp);
int32_t __cdecl Partition_ZRef_QuestInfo__QICompareFunc_(ZArray<ZRef<QuestInfo>> &a, int32_t nFrom, int32_t nTo, const ZRef<QuestInfo> &pivot, QICompareFunc &comp);
void __cdecl InsertionSort_ZRef_QuestInfo__QICompareFunc_(ZArray<ZRef<QuestInfo>> &a, int32_t nFrom, int32_t nTo, QICompareFunc &comp);
void __cdecl ZSort_ZRef_QuestInfo__QICompareFunc_(ZArray<ZRef<QuestInfo>> &a, __POSITION *posFrom, __POSITION *posTo, QICompareFunc comp);
void __cdecl DownHeap_ZRef_QuestInfo__QICompareFunc_(ZArray<ZRef<QuestInfo>> &a, int32_t nIdx, int32_t nLen, int32_t nFrom, QICompareFunc &comp);
void __cdecl ZSort_ZRef_QuestInfo__QICompareFunc_(ZArray<ZRef<QuestInfo>> &a, QICompareFunc comp);
