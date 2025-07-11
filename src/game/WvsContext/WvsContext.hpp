// WvsContext.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Config/Config.hpp"

#include "WvsContext_UserList/WvsContext_UserList.hpp"
#include "GW/GW.hpp"
#include "Dialog/Dialog.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "Rand32/Rand32.hpp"
#include "UInt128/UInt128.hpp"
#include "WvsContext_Family/WvsContext_Family.hpp"
#include "SkillInfo/SkillInfo.hpp"
#include "UIWnd/UIWnd.hpp"
#include "Tips/Tips.hpp"
#include "Packet/Packet.hpp"
#include "Stat/Stat.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "FadeWnd/FadeWnd.hpp"
#include "DBBasic/DBBasic.hpp"

class CMobPool;
class CUserPool;
class CNpcPool;
class CDropPool;
class CMessageBoxPool;
class CEmployeePool;
class CAffectedAreaPool;
class CPortalList;
class CUIStat;
class CPartySearch_RemoCon;
class CSummonedPool;
class CReactorPool;
class CUISkill;
class CUISkillEx;
class CUIKeyConfig;
class CUIQuestInfo;
class CUIMedalQuestInfo;
class CUIUserInfo;
class CUIQuestAlarm;
class CUIGuildBBS;
class CAvatarMegaphone;
class CUIMonsterCarnival;
class CUIEnergyBar;
class CUIMonsterBook;
class CUIPartySearch;
class CUIRanking;
class CUIFamily;
class CUIFamilyChart;
class CUIOperatorBoard;
class CUIOpBoardState;
class CUIDragonBox;
class CUIBattleRecord;
class CUIAccountMoreInfo;
class CUIFindFriend;
class CUIQuestTimer;
class CClock;
class CNoticeQuestProgress;

// Level: 0 0x1f5b
struct FamilyInfo;
// Level: 0 0xb18b
struct GUILDDATA;
// Level: 0 0x1f6a
struct WORLDMAPQUESTDEMANDITEM;
// Level: 0 0x162c
class CTemporaryStatView;
// Level: 0 0xb197
struct ALLIANCEDATA;
// Level: 1 0xca0d
class CTownPortalPool;
// Level: 1 0xcb24
class COpenGatePool;
// Level: 1 0x10bdd
class CUISkillDec;
// Level: 1 0x3565
class CUIJoyPad;
// Level: 1 0x10bbc
class CUIStatChangeConfirm;
// Level: 1 0x10ba9
class CUIStatChange;
// Level: 1 0x10c45
class CUISkillInc;
// Level: 1 0x10c5a
class CUISkillChangeConfirm;
// Level: 1 0x20f9
class CWvsContext;
// Level: 1 0x10c28
class CUISkillDecEX;

struct FamilyInfo
{
	// Nested
	// Fields
public:
	long nFamousPoint{};

public:
	long nTotalFamousPoint{};

public:
	long nTodaySavePoint{};

public:
	uint16_t wChildCount{};

public:
	uint16_t wChildLimit{};

public:
	uint16_t wTotalChildCount{};

public:
	unsigned long dwBossID{};

public:
	ZXString<char> strFamilyName;

public:
	ZXString<char> strPrecept;

public:
	ZMap<long, long, long> mPrivilegeUse;

public:
	int32_t bInitialized{};
	// Methods
public:
	~FamilyInfo();

public:
	void _dtor_0();

public:
	FamilyInfo(const FamilyInfo &arg0);

public:
	void _ctor_1(const FamilyInfo &arg0);

	CTOR_DEFAULT(FamilyInfo)
public:
	FamilyInfo();

public:
	void _ctor_0();

public:
	void Decode(CInPacket &iPacket);

public:
	FamilyInfo &operator=(const FamilyInfo &arg0);

public:
	static FamilyInfo &_op_assign_4(FamilyInfo *pThis, const FamilyInfo &arg0);
};
STATIC_ASSERT_SIZE(FamilyInfo, 60);
#pragma pack(push, 1)
struct GUILDDATA
{
	// Nested
public:
	struct SKILLENTRY
	{
		// Nested
		// Fields
	public:
		short nLevel{};

	public:
		_FILETIME dateExpire{};

	public:
		ZXString<char> strBuyCharacterName;
		// Methods
	public:
		~SKILLENTRY();

	public:
		void _dtor_0();

	public:
		SKILLENTRY(const GUILDDATA::SKILLENTRY &arg0);

	public:
		void _ctor_1(const GUILDDATA::SKILLENTRY &arg0);

	public:
		SKILLENTRY();

	public:
		void _ctor_0();

	public:
		void Encode(COutPacket &arg0);

	public:
		void Decode(CInPacket &iPacket);

	public:
		GUILDDATA::SKILLENTRY &operator=(const GUILDDATA::SKILLENTRY &arg0);

	public:
		static GUILDDATA::SKILLENTRY &_op_assign_5(GUILDDATA::SKILLENTRY *pThis, const GUILDDATA::SKILLENTRY &arg0);
	};
	// Fields
public:
	long nGuildID{};

public:
	ZXString<char> sGuildName;

public:
	ZArray<ZXString<char>> asGradeName;

public:
	ZArray<unsigned long> adwCharacterID;

public:
	ZArray<GUILDMEMBER> aMemberData;

public:
	long nMaxMemberNum{};

public:
	uint16_t nMarkBg{};

public:
	unsigned char nMarkBgColor{};

public:
	uint16_t nMark{};

public:
	unsigned char nMarkColor{};

public:
	ZXString<char> sNotice;

public:
	long nPoint{};

public:
	long nAllianceID{};

public:
	long nLevel{};

public:
	ZMap<long, GUILDDATA::SKILLENTRY, long> mSkillRecord;

public:
	ZArray<long> aSkillRecordOnlyID;
	// Methods
	CTOR_DEFAULT(GUILDDATA)
public:
	~GUILDDATA();

public:
	void _dtor_0();

public:
	GUILDDATA(const GUILDDATA &arg0);

public:
	void _ctor_1(const GUILDDATA &arg0);

public:
	GUILDDATA();

public:
	void _ctor_0();

public:
	long GetGuildSkillLevel(long arg0);

public:
	ZXString<char> GetGuildSkillBuyer(long arg0);

public:
	long GetCount();

public:
	void Encode(COutPacket &arg0);

public:
	void Decode(CInPacket &iPacket);

public:
	void RemoveKey(unsigned long dwCharacterID);

public:
	long FindIndex(unsigned long dwCharacterID);

public:
	void Clear();

public:
	long CalcGuildLevel(long arg0);

public:
	GUILDDATA &operator=(const GUILDDATA &__that);

public:
	static GUILDDATA &_op_assign_12(GUILDDATA *pThis, const GUILDDATA &__that);
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(GUILDDATA, 74);
struct WORLDMAPQUESTDEMANDITEM
{
	// Nested
	// Fields
public:
	unsigned long dwDemandItemID{};

public:
	int32_t bCoveredByMob{};

public:
	ZList<unsigned long> lRewardMobID;
	// Methods
public:
	~WORLDMAPQUESTDEMANDITEM();

public:
	void _dtor_0();

public:
	WORLDMAPQUESTDEMANDITEM(const WORLDMAPQUESTDEMANDITEM &arg0);

public:
	void _ctor_1(const WORLDMAPQUESTDEMANDITEM &arg0);

public:
	WORLDMAPQUESTDEMANDITEM();

public:
	void _ctor_0();

public:
	WORLDMAPQUESTDEMANDITEM &operator=(const WORLDMAPQUESTDEMANDITEM &arg0);

public:
	static WORLDMAPQUESTDEMANDITEM &_op_assign_3(WORLDMAPQUESTDEMANDITEM *pThis, const WORLDMAPQUESTDEMANDITEM &arg0);
};
STATIC_ASSERT_SIZE(WORLDMAPQUESTDEMANDITEM, 28);
class CTemporaryStatView
{
	// Nested
public:
	class TEMPORARY_STAT : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		MY_UINT128 uFlagTemp;

	public:
		long nType{};

	public:
		long nID{};

	public:
		long nSubID{};

	public:
		ZXString<char> sToolTip;

	public:
		_x_com_ptr<IWzGr2DLayer> pLayer;

	public:
		_x_com_ptr<IWzGr2DLayer> pLayerShadow;

	public:
		long nIndexShadow{};

	public:
		long tHideTime{};

	private:
		int32_t bNoShadow{};

	private:
		long tLeft{};

	private:
		long tLeftUnit{};
		// Methods
	public:
		virtual ~TEMPORARY_STAT();

	public:
		void _dtor_0();

	public:
		TEMPORARY_STAT(const CTemporaryStatView::TEMPORARY_STAT &arg0);

	public:
		void _ctor_1(const CTemporaryStatView::TEMPORARY_STAT &arg0);

	public:
		TEMPORARY_STAT(long nType, long nID, long tDuration, MY_UINT128 uFlagTemp, ZXString<char> sToolTip, long nSubID, long nHideTime);

	public:
		void _ctor_0(long nType, long nID, long tDuration, MY_UINT128 uFlagTemp, ZXString<char> sToolTip, long nSubID, long nHideTime);

	public:
		long GetLeftUnit();

	public:
		void SetLeftUnit(long tNewLeft);

	public:
		long GetLeft();

	public:
		void SetLeft(long tNewLeft);

	public:
		void UpdateShadowIndex();

	public:
		void Show();

	public:
		void Hide();

	public:
		CTemporaryStatView::TEMPORARY_STAT &operator=(const CTemporaryStatView::TEMPORARY_STAT &arg0);

	public:
		static CTemporaryStatView::TEMPORARY_STAT &_op_assign_10(CTemporaryStatView::TEMPORARY_STAT *pThis, const CTemporaryStatView::TEMPORARY_STAT &arg0);
	};
	// Fields
protected:
	ZList<ZRef<CTemporaryStatView::TEMPORARY_STAT>> m_lTemporaryStat;
	// Methods
public:
	virtual ~CTemporaryStatView();

public:
	void _dtor_0();

public:
	CTemporaryStatView(const CTemporaryStatView &arg0);

public:
	void _ctor_1(const CTemporaryStatView &arg0);

public:
	CTemporaryStatView();

public:
	void _ctor_0();

public:
	void Clear();

public:
	void SetTemporary(long nType, long nID, long tDuration, MY_UINT128 uFlagTemp, ZXString<char> sToolTip, long nSubID, long nHideTime);

public:
	void ResetTemporary(long nType, long nID, MY_UINT128 uFlagTemp);

	void ResetTemporary_0(long nType, long nID, MY_UINT128 uFlagTemp)
	{
		ResetTemporary(nType, nID, uFlagTemp);
	}

public:
	void ResetTemporary(long nType, long nID);
	void ResetTemporary_1(long nType, long nID)
	{
		ResetTemporary(nType, nID);
	}

public:
	void Update();

public:
	void UpdatePassively(long nID, long nLeft, long nMax);

public:
	void Show();

public:
	void Hide();

public:
	int32_t ShowToolTip(CUIToolTip &uiToolTip, const tagPOINT &ptCursor, long rx, long ry);

public:
	void FindIcon(const tagPOINT &ptCursor, long &nType, long &nID);

protected:
	void AdjustPosition();

public:
	CTemporaryStatView &operator=(const CTemporaryStatView &arg0);

public:
	static CTemporaryStatView &_op_assign_14(CTemporaryStatView *pThis, const CTemporaryStatView &arg0);
};
STATIC_ASSERT_SIZE(CTemporaryStatView, 24);
#pragma pack(push, 1)
struct ALLIANCEDATA
{
	// Nested
	// Fields
public:
	long nAllianceID{};

public:
	ZXString<char> sAllianceName;

public:
	ZArray<ZXString<char>> asGradeName;

public:
	ZArray<unsigned long> adwGuildID;

public:
	long nMaxMemberNum{};

public:
	ZXString<char> sNotice;
	// Methods
public:
	~ALLIANCEDATA();

public:
	void _dtor_0();

public:
	ALLIANCEDATA(const ALLIANCEDATA &arg0);

public:
	void _ctor_1(const ALLIANCEDATA &arg0);

	CTOR_DEFAULT(ALLIANCEDATA)
public:
	ALLIANCEDATA();

public:
	void _ctor_0();

public:
	long GetCount();

public:
	void Encode(COutPacket &arg0);

public:
	void Decode(CInPacket &iPacket);

public:
	void RemoveKey(unsigned long arg0);

public:
	long FindIndex(unsigned long arg0);

public:
	void Clear();

public:
	ALLIANCEDATA &operator=(const ALLIANCEDATA &__that);

public:
	static ALLIANCEDATA &_op_assign_9(ALLIANCEDATA *pThis, const ALLIANCEDATA &__that);
};
#pragma pack(pop)
STATIC_ASSERT_SIZE(ALLIANCEDATA, 24);
class CTownPortalPool : public TSingleton<CTownPortalPool>
{
	// Nested
public:
	struct TOWNPORTAL
	{
		// Nested
		// Fields
	public:
		long nState{};

	public:
		__POSITION *posList{};

	public:
		unsigned long dwCharacterID{};

	public:
		long x{};

	public:
		long y{};

	public:
		_x_com_ptr<IWzGr2DLayer> pLayerMain;

	public:
		_x_com_ptr<IWzGr2DLayer> pLayerFrame;

	public:
		long tDoorOpen{};
		// Methods
	public:
		~TOWNPORTAL();

	public:
		void _dtor_0();

	public:
		TOWNPORTAL(const CTownPortalPool::TOWNPORTAL &arg0);

	public:
		void _ctor_1(const CTownPortalPool::TOWNPORTAL &arg0);

	public:
		TOWNPORTAL();

	public:
		void _ctor_0();

	public:
		CTownPortalPool::TOWNPORTAL &operator=(const CTownPortalPool::TOWNPORTAL &arg0);

	public:
		static CTownPortalPool::TOWNPORTAL &_op_assign_3(CTownPortalPool::TOWNPORTAL *pThis, const CTownPortalPool::TOWNPORTAL &arg0);
	};
	// Fields
protected:
	ZMap<unsigned long, ZRef<CTownPortalPool::TOWNPORTAL>, unsigned long> m_mTownPortal;

protected:
	ZList<ZRef<CTownPortalPool::TOWNPORTAL>> m_lTownPortal;
	// Methods
public:
	virtual ~CTownPortalPool();

public:
	void _dtor_0();

public:
	CTownPortalPool(const CTownPortalPool &arg0);

public:
	void _ctor_1(const CTownPortalPool &arg0);

public:
	CTownPortalPool();

public:
	void _ctor_0();

public:
	void Update(long tCur);

public:
	void OnPacket(long nType, CInPacket &iPacket);

public:
	void TryEnterTownPortal(tagPOINT pt);

protected:
	void OnTownPortalCreated(CInPacket &iPacket);

protected:
	void OnTownPortalRemoved(CInPacket &iPacket);

protected:
	void AddTownPortal(ZRef<CTownPortalPool::TOWNPORTAL> ptp);

protected:
	void RemoveTownPortal(ZRef<CTownPortalPool::TOWNPORTAL> ptp);

public:
	CTownPortalPool &operator=(const CTownPortalPool &arg0);

public:
	static CTownPortalPool &_op_assign_10(CTownPortalPool *pThis, const CTownPortalPool &arg0);
};
STATIC_ASSERT_SIZE(CTownPortalPool, 48);
class COpenGatePool : public TSingleton<COpenGatePool>
{
	// Nested
public:
	struct OPENGATE
	{
		// Nested
		// Fields
	public:
		long nState{};

	public:
		__POSITION *posList{};

	public:
		unsigned long dwCharacterID{};

	public:
		long x{};

	public:
		long y{};

	public:
		long nPartyID{};

	public:
		_x_com_ptr<IWzGr2DLayer> pLayerMain;

	public:
		_x_com_ptr<IWzGr2DLayer> pLayerFrame;

	public:
		long tDoorOpen{};

	public:
		int32_t bActive{};
		// Methods
	public:
		~OPENGATE();

	public:
		void _dtor_0();

	public:
		OPENGATE(const COpenGatePool::OPENGATE &arg0);

	public:
		void _ctor_1(const COpenGatePool::OPENGATE &arg0);

	public:
		OPENGATE();

	public:
		void _ctor_0();

	public:
		COpenGatePool::OPENGATE &operator=(const COpenGatePool::OPENGATE &arg0);

	public:
		static COpenGatePool::OPENGATE &_op_assign_3(COpenGatePool::OPENGATE *pThis, const COpenGatePool::OPENGATE &arg0);
	};
	// Fields
protected:
	ZMap<unsigned long, ZRef<COpenGatePool::OPENGATE>, unsigned long> m_mOpenGate1;

protected:
	ZList<ZRef<COpenGatePool::OPENGATE>> m_lOpenGate1;

protected:
	ZMap<unsigned long, ZRef<COpenGatePool::OPENGATE>, unsigned long> m_mOpenGate2;

protected:
	ZList<ZRef<COpenGatePool::OPENGATE>> m_lOpenGate2;
	// Methods
public:
	virtual ~COpenGatePool();

public:
	void _dtor_0();

public:
	COpenGatePool(const COpenGatePool &arg0);

public:
	void _ctor_1(const COpenGatePool &arg0);

public:
	COpenGatePool();

public:
	void _ctor_0();

public:
	void Update(long pos1);

public:
	void OnPacket(long nType, CInPacket &iPacket);

public:
	int32_t TryEnterOpenGate(tagPOINT pt, tagPOINT &ptTarget);

protected:
	void OnOpenGateCreated(CInPacket &iPacket);

protected:
	void OnOpenGateRemoved(CInPacket &iPacket);

protected:
	void AddOpenGate1(ZRef<COpenGatePool::OPENGATE> ptp);

protected:
	void AddOpenGate2(ZRef<COpenGatePool::OPENGATE> ptp);

protected:
	void RemoveOpenGate1(ZRef<COpenGatePool::OPENGATE> ptp);

protected:
	void RemoveOpenGate2(ZRef<COpenGatePool::OPENGATE> ptp);

public:
	COpenGatePool &operator=(const COpenGatePool &arg0);

public:
	static COpenGatePool &_op_assign_12(COpenGatePool *pThis, const COpenGatePool &arg0);
};
STATIC_ASSERT_SIZE(COpenGatePool, 92);
class CUISkillDec : public CDialog
{
	// Nested
public:
public:
	enum ID_CTRL_
	{
		ID_CTRL_TAB = 2000,
		ID_CTRL_SCR_ITEM = 2001,
		ID_CTRL_BT_UP0 = 2010
	};
	enum k
	{
		kTab_Y = 69,
		kScrSkill_X = 150,
		kScrSkill_Y = 95,
		kScrSkill_Len = 153,
		kSkillInfo_X = 9,
		kSkillInfo_Y = 95
	};
	enum SKILL_PER_PAGE
	{
		SKILL_PER_PAGE = 4
	};
	// Fields
protected:
	ZArray<long> m_aSkillRoot;

protected:
	ZRef<CCtrlTab> m_pTab;

protected:
	ZRef<CCtrlScrollBar> m_pSBSkill;

protected:
	std::array<ZRef<CCtrlButton>, 4> m_apBtDown;

protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	ZArray<SKILLROOT> m_aSkillRootVisible;

protected:
	long m_nSkillEntryCount{};

protected:
	long m_nTabPos{};

protected:
	long m_nDecSkillID{};

protected:
	long m_nItemLevel{};

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUISkillDec();

public:
	void _dtor_0();

public:
	CUISkillDec(const CUISkillDec &arg0);

public:
	void _ctor_1(const CUISkillDec &arg0);

public:
	CUISkillDec();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	void CreateSkillDecDlg();

public:
	virtual void OnDestroy();

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Draw(const tagRECT *arg0);

public:
	void ResetInfo();

public:
	void GetResult(long &arg0);

public:
	void SetOption(long arg0);

public:
	long GetCurTab();

protected:
	void OnTabChanged(long nTab);

protected:
	void OnSkillDecButton(long nIdx);

protected:
	void SetSkillRootList();

protected:
	void SetTabItems();

protected:
	void SetScrollBar();

protected:
	void SetButtons();

protected:
	int32_t IsEnableSkill(const SKILLENTRY *p);

protected:
	int32_t IsRequiredSkill(long nReqSkillID);

protected:
	long GetExcessSP(long nTab);

protected:
	void ReloadSkillRootVisible();

protected:
	const SKILLENTRY *GetSkillEntry(long nIdx);

protected:
	long GetSkillEntryCount();

public:
	CUISkillDec &operator=(const CUISkillDec &arg0);

public:
	static CUISkillDec &_op_assign_26(CUISkillDec *pThis, const CUISkillDec &arg0);
};
STATIC_ASSERT_SIZE(CUISkillDec, 244);
class CUIJoyPad : public CDialog
{
	// Nested
public:
	enum ID_CTRL_
	{
		ID_CTRL_COMBOBOX_BASE = 1000,
		ID_CTRL_COMBOBOX_ATTACK = 1000,
		ID_CTRL_COMBOBOX_JUMP = 1001,
		ID_CTRL_COMBOBOX_PICKUP = 1002,
		ID_CTRL_COMBOBOX_DELETE = 1003,
		ID_CTRL_COMBOBOX_END = 1004,
		ID_CTRL_COMBOBOX_PAGEDOWN = 1005,
		ID_CTRL_COMBOBOX_INSERT = 1006,
		ID_CTRL_COMBOBOX_HOME = 1007,
		ID_CTRL_COMBOBOX_PAGEUP = 1008,
		ID_CTRL_BUTTON_DEFAULT = 1009
	};
	// Fields
protected:
	std::array<ZRef<CCtrlComboBox>, 11> m_pCBBtnSet;

protected:
	ZRef<CCtrlButton> m_pBtDefault;

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	CONFIG_JOYPAD m_joyPadOld;

protected:
	CONFIG_JOYPAD m_joyPadCur;
	// Methods
public:
	virtual ~CUIJoyPad();

public:
	void _dtor_0();

public:
	CUIJoyPad(const CUIJoyPad &arg0);

public:
	void _ctor_1(const CUIJoyPad &arg0);

public:
	CUIJoyPad();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void SetRet(long nRet);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Draw(const tagRECT *pRect);

protected:
	void SetCtrlFromJoyPad();

protected:
	void GetJoyPadFromCtrl();

protected:
	void SetDefault();

protected:
	int32_t CheckControls();

public:
	CUIJoyPad &operator=(const CUIJoyPad &arg0);

public:
	static CUIJoyPad &_op_assign_11(CUIJoyPad *pThis, const CUIJoyPad &arg0);
};
STATIC_ASSERT_SIZE(CUIJoyPad, 352);
class CUIStatChangeConfirm : public CDialog
{
	// Nested
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	unsigned long m_dwDec{};

protected:
	unsigned long m_dwInc{};
	// Methods
public:
	virtual ~CUIStatChangeConfirm();

public:
	void _dtor_0();

public:
	CUIStatChangeConfirm(const CUIStatChangeConfirm &arg0);

public:
	void _ctor_1(const CUIStatChangeConfirm &arg0);

public:
	CUIStatChangeConfirm();

public:
	void _ctor_0();

public:
	void SetOption(unsigned long dwDec, unsigned long dwInc);

public:
	void CreateStatChangeDlg();

public:
	void GetResult(unsigned long &dwDec, unsigned long &dwInc);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	CUIStatChangeConfirm &operator=(const CUIStatChangeConfirm &arg0);

public:
	static CUIStatChangeConfirm &_op_assign_9(CUIStatChangeConfirm *pThis, const CUIStatChangeConfirm &arg0);
};
STATIC_ASSERT_SIZE(CUIStatChangeConfirm, 176);
class CUIStatChange : public CDialog
{
	// Nested
public:
	enum kApUpNo
	{
		kApUpNo = 6
	};
	enum ID_CTRL_BT_AP_
	{
		ID_CTRL_BT_AP_MHP = 2000,
		ID_CTRL_BT_AP_MMP = 2001,
		ID_CTRL_BT_AP_STR = 2002,
		ID_CTRL_BT_AP_DEX = 2003,
		ID_CTRL_BT_AP_INT = 2004,
		ID_CTRL_BT_AP_LUK = 2005
	};
	// Fields
protected:
	std::array<ZRef<CCtrlButton>, 6> m_pBtAp;

protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	unsigned long m_dwDec{};

protected:
	unsigned long m_dwInc{};

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIStatChange();

public:
	void _dtor_0();

public:
	CUIStatChange(const CUIStatChange &arg0);

public:
	void _ctor_1(const CUIStatChange &arg0);

public:
	CUIStatChange();

public:
	void _ctor_0();

public:
	void SetOption(unsigned long dwDec, unsigned long dwInc);

public:
	void CreateStatChangeDlg();

public:
	void GetResult(unsigned long &dwDec, unsigned long &dwInc);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void SetRet(long nRet);

protected:
	void DrawDecStat(unsigned long dwDec);

protected:
	void SetButtons();

protected:
	int32_t IsUnderMinHP(long nHP);

protected:
	int32_t IsUnderMinMP(long nMP);

protected:
	int32_t IsOverMaxHP(long nHP);

protected:
	int32_t IsOverMaxMP(long nMP);

public:
	CUIStatChange &operator=(const CUIStatChange &arg0);

public:
	static CUIStatChange &_op_assign_17(CUIStatChange *pThis, const CUIStatChange &arg0);
};
STATIC_ASSERT_SIZE(CUIStatChange, 228);
class CUISkillInc : public CDialog
{
	// Nested
public:
	enum ID_CTRL_
	{
		ID_CTRL_SCR_ITEM = 2001,
		ID_CTRL_BT_UP0 = 2010
	};
	enum kS
	{
		kScrSkill_X = 150,
		kScrSkill_Y = 93,
		kScrSkill_Len = 155,
		kSkillInfo_X = 9,
		kSkillInfo_Y = 93
	};
	enum SKILL_PER_PAGE
	{
		SKILL_PER_PAGE = 4
	};
	// Fields
protected:
	ZArray<long> m_aSkillRoot;

protected:
	ZRef<CCtrlScrollBar> m_pSBSkill;

protected:
	std::array<ZRef<CCtrlButton>, 4> m_apBtUp;

protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	ZArray<SKILLROOT> m_aSkillRootVisible;

protected:
	long m_nSkillEntryCount{};

protected:
	long m_nIncSkillID{};

protected:
	long m_nDecSkillID{};

protected:
	long m_nTab{};

protected:
	int32_t m_bExtendSP{};
	// Methods
public:
	virtual ~CUISkillInc();

public:
	void _dtor_0();

public:
	CUISkillInc(const CUISkillInc &arg0);

public:
	void _ctor_1(const CUISkillInc &arg0);

public:
	CUISkillInc();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	void CreateSkillIncDlg();

public:
	virtual void OnDestroy();

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Draw(const tagRECT *arg0);

public:
	void DrawTab(long nTab);

public:
	void ResetInfo();

public:
	void GetResult(long &arg0);

public:
	void SetOption(long nDecSkillID, long nTab);

protected:
	void OnSkillIncButton(long nIdx);

protected:
	void SetSkillRootList();

protected:
	void SetScrollBar();

protected:
	void SetButtons();

protected:
	void ReloadSkillRootVisible();

protected:
	const SKILLENTRY *GetSkillEntry(long nIdx);

protected:
	long GetSkillEntryCount();

public:
	CUISkillInc &operator=(const CUISkillInc &arg0);

public:
	static CUISkillInc &_op_assign_21(CUISkillInc *pThis, const CUISkillInc &arg0);
};
STATIC_ASSERT_SIZE(CUISkillInc, 220);
class CUISkillChangeConfirm : public CDialog
{
	// Nested
public:
	enum k
	{
		kSkillInfo_X = 9,
		kSkillInfo_Y = 79,
		kYSpace = 64
	};
	// Fields
protected:
	ZArray<long> m_aSkillRoot;

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	long m_nIncSkillID{};

protected:
	long m_nDecSkillID{};

protected:
	int32_t m_bExtendSP{};

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUISkillChangeConfirm();

public:
	void _dtor_0();

public:
	CUISkillChangeConfirm(const CUISkillChangeConfirm &arg0);

public:
	void _ctor_1(const CUISkillChangeConfirm &arg0);

public:
	CUISkillChangeConfirm();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void OnButtonClicked(uint32_t nID);

public:
	virtual void Draw(const tagRECT *arg0);

public:
	void DrawTab(long nDecSkillID, long nIncSkillID);

public:
	void GetResult(long &nDecSkillID, long &nIncSkillID);

public:
	void SetOption(long nDecSkillID, long nIncSkillID);

public:
	void CreateSkillChangeConfirmDlg();

public:
	CUISkillChangeConfirm &operator=(const CUISkillChangeConfirm &arg0);

public:
	static CUISkillChangeConfirm &_op_assign_11(CUISkillChangeConfirm *pThis, const CUISkillChangeConfirm &arg0);
};
STATIC_ASSERT_SIZE(CUISkillChangeConfirm, 204);
class CWvsContext : public TSingleton<CWvsContext>
{
	// Nested
public:
	struct CFriend
	{
		// Nested
		// Fields
	public:
		ZArray<GW_Friend> m_aFriend;

	public:
		ZArray<int> m_aInShop;

	public:
		ZArray<int> m_aListenBlocked;

	public:
		ZArray<int> m_aTalkBlocked;
		// Methods
	public:
		~CFriend();

	public:
		void _dtor_0();

	public:
		CFriend(const CWvsContext::CFriend &arg0);

	public:
		void _ctor_1(const CWvsContext::CFriend &arg0);

	public:
		CFriend();

	public:
		void _ctor_0();

	public:
		int32_t IsDataTwisted();

	public:
		void Reset(CInPacket &iPacket);

	public:
		void Insert(CInPacket &iPacket);

	public:
		void UpdateFriend(CInPacket &iPacket, int32_t bUpdateBlockedFriend);

	public:
		void UpdateBlockedFriend(long nIdx);

	public:
		void Remove(unsigned long arg0);

	public:
		long GetCount() const;

	public:
		long FindIndex(ZXString<char> sFriendName);

		long FindIndex_0(ZXString<char> sFriendName)
		{
			return FindIndex(sFriendName);
		}

	public:
		long FindIndex(unsigned long dwFriendID);
		long FindIndex_1(unsigned long dwFriendID)
		{
			return FindIndex(dwFriendID);
		}

	public:
		CWvsContext::CFriend &operator=(const CWvsContext::CFriend &arg0);

	public:
		static CWvsContext::CFriend &_op_assign_12(CWvsContext::CFriend *pThis, const CWvsContext::CFriend &arg0);
	};

public:
	struct Massacre
	{
		// Nested
		// Fields
	public:
		long nHit{};

	public:
		long nMiss{};

	public:
		long nCool{};

	public:
		long nSkill{};
		// Methods
	public:
		Massacre();

	public:
		void _ctor_0();
	};

public:
	struct ITEMMSGINFO
	{
		// Nested
		// Fields
	public:
		uint16_t usQuestID{};

	public:
		long nQuestState{};

	public:
		ZArray<long> aFieldID;

	public:
		ZXString<char> sStateKeyword;

	public:
		long tInterval{};

	public:
		long tRand{};

	public:
		int32_t bRepeat{};

	public:
		unsigned long dwDuration{};

	public:
		ZArray<ZXString<char>> aMsg;

	public:
		long nEffect{};

	public:
		long nPriority{};
		// Methods
	public:
		~ITEMMSGINFO();

	public:
		void _dtor_0();

	public:
		ITEMMSGINFO(const CWvsContext::ITEMMSGINFO &arg0);

	public:
		void _ctor_1(const CWvsContext::ITEMMSGINFO &arg0);

	public:
		ITEMMSGINFO();

	public:
		void _ctor_0();

	public:
		CWvsContext::ITEMMSGINFO &operator=(const CWvsContext::ITEMMSGINFO &arg0);

	public:
		static CWvsContext::ITEMMSGINFO &_op_assign_3(CWvsContext::ITEMMSGINFO *pThis, const CWvsContext::ITEMMSGINFO &arg0);
	};

public:
	struct ITEMMSG
	{
		// Nested
		// Fields
	public:
		long nItemID{};

	public:
		long tNext{};

	public:
		long nCheckIdx{};

	public:
		ZList<CWvsContext::ITEMMSGINFO> lItemMsgInfo;
		// Methods
	public:
		~ITEMMSG();

	public:
		void _dtor_0();

	public:
		ITEMMSG(const CWvsContext::ITEMMSG &arg0);

	public:
		void _ctor_1(const CWvsContext::ITEMMSG &arg0);

	public:
		ITEMMSG();

	public:
		void _ctor_0();

	public:
		CWvsContext::ITEMMSG &operator=(const CWvsContext::ITEMMSG &arg0);

	public:
		static CWvsContext::ITEMMSG &_op_assign_3(CWvsContext::ITEMMSG *pThis, const CWvsContext::ITEMMSG &arg0);
	};

public:
	enum UnnamedEnum4920
	{
		EXCLREQUEST_CONSUMEHP = 0,
		EXCLREQUEST_CONSUMEMP = 1,
		MAX_EXCLREQUEST = 2
	};
	// Fields
public:
	static ZMap<unsigned long, long, unsigned long> ms_mAreaCode;

public:
	int32_t m_bFirstUserLoad{};

public:
	int32_t m_bAvatarMegaphone{};

public:
	long m_tAM_LastUpdate{};

public:
	long m_nTargetPosition_X{};

public:
	long m_nTargetPosition_Y{};

public:
	int32_t m_bChaseEnable{};

public:
	int32_t m_bPetHelpPopUpShown{};

protected:
	WEBCOOKIE m_Cookie;

protected:
	int32_t m_bIsCookieValid{};

protected:
	int32_t m_bCookieLoadedByArgString{};

protected:
	long m_nLoginBaseStep{};

protected:
	unsigned long m_dwAccountId{};

protected:
	long m_nGender{};

protected:
	TSecType<unsigned char> m_nGradeCode;

protected:
	TSecType<unsigned char> m_nSubGradeCode;

protected:
	ZXString<char> m_sEMailAccount;

protected:
	ZXString<char> m_sNexonClubID;

protected:
	unsigned char m_nCountryID{};

protected:
	unsigned char m_nPurchaseExp{};

protected:
	long m_nWorldID{};

protected:
	long m_nChannelID{};

protected:
	int32_t m_bPremium{};

protected:
	unsigned long m_ulPremiumArgument{};

protected:
	unsigned char m_nChatBlockReason{};

protected:
	_SYSTEMTIME m_dtChatUnblockDate;

protected:
	_SYSTEMTIME m_dtRegisterDate;

protected:
	long m_nNumOfCharacter{};

protected:
	int32_t m_bThisAccountJustCreatedCharacter{};

protected:
	int32_t m_bIsGuestAccount{};

protected:
	int32_t m_bManagerAccount{};

protected:
	long m_nCharacterCount{};

protected:
	long m_nSlotCount{};

protected:
	std::array<unsigned char, 8> m_aClientKey{};

protected:
	int32_t m_bTesterAccount{};

protected:
	unsigned long m_dwCharacterId{};

protected:
	int32_t m_bExclRequestSent{};

protected:
	long m_tExclRequestSent{};

protected:
	std::array<long, 2> m_tExclRequestSentQ{};

protected:
	ZRef<CharacterData> m_pCharacterData;

protected:
	BasicStat m_basicStat;

protected:
	SecondaryStat m_secondaryStat;

protected:
	ForcedStat m_forcedStat;

protected:
	CTemporaryStatView m_temporaryStatView;

protected:
	PARTYDATA::TOWNPORTAL m_townPortal;

protected:
	long m_nActiveEffectItemID{};

protected:
	long m_nPartyID{};

protected:
	PARTYDATA m_party;

protected:
	ZRef<CWvsContext::CFriend> m_pFriendArray;

protected:
	unsigned long m_dwMarriedPartnerCurFieldID{};

protected:
	long m_nMarriedPartnerID{};

protected:
	PARTYSERACH_SETTING m_PartySearch_Setting;

protected:
	long m_nPartySearch_State{};

protected:
	int32_t m_bKeep_PartySearch{};

protected:
	int32_t m_bWasRadioUICleared{};

protected:
	int32_t m_bWasMute{};

protected:
	ZRef<CPartySearch_RemoCon> m_pPartySearch_Remocon;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pPartySearchLayer_Searching;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pPartySearchLayer_Holding;

protected:
	GUILDDATA m_guild;

protected:
	ZXString16 m_sGuildBoardAuthkey;

protected:
	unsigned long m_dwGuildBoardAuthkeyLastUpdated{};

protected:
	ZXString16 m_sConsultAuthkey;

protected:
	unsigned long m_dwConsultAuthkeyLastUpdated{};

protected:
	ZXString16 m_sClassCompetitionAuthkey;

protected:
	unsigned long m_dwClassCompetitionAuthkeyLastUpdated{};

protected:
	std::array<ZXString16, 1> m_sWebBoardAuthKey{};

protected:
	std::array<unsigned long, 1> m_dwWebBoardAuthkeyLastUpdated{};

protected:
	ALLIANCEDATA m_alliance;

protected:
	ZArray<GUILDDATA> m_AllianceMember;

protected:
	int32_t m_bDirectionMode{};

protected:
	int32_t m_bStandAloneMode{};

protected:
	ZXString<char> m_sBattleTeamName;

protected:
	unsigned char m_nClaimSvrOpenTime{};

protected:
	unsigned char m_nClaimSvrCloseTime{};

protected:
	int32_t m_bClaimSvrConnected{};

protected:
	int32_t m_bPersonalShopOpen{};

protected:
	int32_t m_bADBoard{};

protected:
	ZXString<char> m_sADBoard;

protected:
	std::array<ZRef<GW_ItemSlotBase>, 60> m_aRealEquip{};

protected:
	std::array<ZRef<GW_ItemSlotBase>, 60> m_aRealEquip2{};

protected:
	std::array<ZRef<GW_ItemSlotBase>, 4> m_aRealDragonEquip{};

protected:
	std::array<ZRef<GW_ItemSlotBase>, 5> m_aRealMechanicEquip{};

protected:
	CalcDamage m_CalcDamage;

protected:
	TSecType<long> m_tRestForHPDuration;

protected:
	TSecType<long> m_tRestForMPDuration;

protected:
	TSecType<long> m_tRestForMPDurationOnPortableChair;

protected:
	TSecType<long> m_tRestForHPDurationOnPortableChair;

protected:
	TSecType<long> m_tRestForHPDurationItemOption;

protected:
	TSecType<long> m_tRestForMPDurationItemOption;

protected:
	long m_tReviveDialog{};

protected:
	long m_tLastGivePopularity{};

protected:
	long m_tLastEmotionChange{};

protected:
	long m_tLastEffectItemChange{};

protected:
	long m_tLastStatResetRequest{};

protected:
	long m_tLastFollowCharacterRequest{};

protected:
	unsigned long m_dwOldDriverID{};

protected:
	unsigned long m_dwFollowRequesterID{};

protected:
	CRand32 m_RndActionMan;

protected:
	ZXString<char> m_sWeekEventMessage;

protected:
	int32_t m_bWeekEventMessagePrinted{};

protected:
	long m_nPotionDiscountRate{};

protected:
	long m_tLastSueCharacter{};

protected:
	ZRef<CUserPool> m_pUserPool;

protected:
	ZRef<CSummonedPool> m_pSummonedPool;

protected:
	ZRef<CMobPool> m_pMobPool;

protected:
	ZRef<CNpcPool> m_pNpcPool;

protected:
	ZRef<CEmployeePool> m_pEmployeePool;

protected:
	ZRef<CDropPool> m_pDropPool;

protected:
	ZRef<CMessageBoxPool> m_pMessageBoxPool;

protected:
	ZRef<CAffectedAreaPool> m_pAffectedAreaPool;

protected:
	ZRef<CTownPortalPool> m_pTownPortalPool;

protected:
	ZRef<COpenGatePool> m_pOpenGatePool;

protected:
	ZRef<CReactorPool> m_pReactorPool;

protected:
	ZRef<CPortalList> m_pPortalList;

protected:
	ZRef<CUIItem> m_pUIItem;

protected:
	ZRef<CUIEquip> m_pUIEquip;

protected:
	ZRef<CUIStat> m_pUIStat;

protected:
	ZRef<CUISkill> m_pUISkill;

protected:
	ZRef<CUISkillEx> m_pUISkillEx;

protected:
	ZRef<CUIKeyConfig> m_pUIKeyConfig;

protected:
	ZRef<CUIUserList> m_pUIUserList;

protected:
	ZRef<CUIQuestInfo> m_pUIQuestInfo;

protected:
	ZRef<CUIMedalQuestInfo> m_pUIMedalQuestInfo;

protected:
	ZRef<CUIUserInfo> m_pUIUserInfo;

protected:
	ZRef<CUIQuestAlarm> m_pUIQuestAlarm;

protected:
	ZRef<CUIGuildBBS> m_pUIGuildBBS;

protected:
	ZRef<CAvatarMegaphone> m_pAvatarMegaphone;

protected:
	ZRef<CUIMonsterCarnival> m_pUIMonsterCarnival;

protected:
	ZRef<CUIEnergyBar> m_pUIEnergyBar;

protected:
	ZRef<CUIRaiseManager> m_pUIRaiseManager;

protected:
	ZRef<CUIMonsterBook> m_pUIMonsterBook;

protected:
	ZRef<CUIPartySearch> m_pUIPartySearch;

protected:
	ZRef<CUIItemMaker> m_pUIItemMaker;

protected:
	ZRef<CUIRanking> m_pUIRanking;

protected:
	ZRef<CUIFamily> m_pUIFamily;

protected:
	ZRef<CUIFamilyChart> m_pUIFamilyChart;

protected:
	ZRef<CUIOperatorBoard> m_pUIOperatorBoard;

protected:
	ZRef<CUIOpBoardState> m_pUIOperatorBoardState;

protected:
	ZRef<CUIDragonBox> m_pUIDragonBox;

protected:
	bool m_bIsOperatorBoardState{};

protected:
	int32_t m_nWebOpBoardIndex{};

protected:
	ZRef<CUIBattleRecord> m_pUIBattleRecord;

protected:
	ZXString<char> m_sWebOpBoardURL;

protected:
	ZRef<CUIAccountMoreInfo> m_pUIAccountMoreInfo;

protected:
	ZRef<CUIFindFriend> m_pUIFindFriend;

protected:
	ZArray<ZRef<CUIFadeYesNo>> m_apFadeWnd;

protected:
	ZRef<CNoticeQuestProgress> m_pNoticeQuestProgress;

protected:
	int32_t m_bShowUI{};

protected:
	ZList<GW_Memo> m_lReceivedMemo;

protected:
	int32_t m_bOnReadingMemo{};

protected:
	int32_t m_bIsExistMemo_NotLoaded{};

protected:
	ZList<ZRef<CUIQuestTimer>> m_lpUIQuestTimer;

protected:
	CTips m_tips;

protected:
	ZRef<CClock> m_pClock;

protected:
	long m_nLastMobBonusEventPercentage{};

protected:
	ZArray<ZXString<char>> m_aChannelName;

protected:
	ZArray<int> m_aAdultChannel;

protected:
	ZArray<ZRef<CS_COMMODITY>> m_aOriginalCommodity;

protected:
	ZArray<ZRef<CS_COMMODITY>> m_aCommodity;

protected:
	ZArray<CS_LIMITGOODS> m_aLimitGoods;

protected:
	int32_t m_bMigrateFromWishItem{};

protected:
	long m_nCommSN{};

protected:
	ZXString<char> m_sGiveTo;

protected:
	ZXString<char> m_sMapTransferTargetUserName;

protected:
	long m_nPreStartQuestCount{};

protected:
	long m_tRemainAntiMacroQuestion{};

protected:
	long m_tRemainInitialQuiz{};

protected:
	long m_nEmployeeItemPos{};

protected:
	long m_nEmployeeItemID{};

protected:
	long m_tNextNoticePlaytime{};

protected:
	long m_nPlaytimeHour{};

protected:
	ZMap<long, long, long> m_mSkillCooltimeOver;

protected:
	long m_nDarkForceDamage{};

protected:
	long m_nDarkForcePddr{};

protected:
	long m_nDragonFury{};

protected:
	ZMap<unsigned short, ZXString<char>, unsigned short> m_mQuestMatesName;

protected:
	int32_t m_bTvVisionRegion{};

protected:
	int32_t m_bCurTvView{};

protected:
	ZMap<unsigned short, int, unsigned short> m_mAutoStartQuestPreStart;

protected:
	ZMap<unsigned short, int, unsigned short> m_mAutoAcceptQuestRequest;

protected:
	ZMap<unsigned short, int, unsigned short> m_mAutoCompleteQuestInProgress;

protected:
	int32_t m_bNewPreStartQuest{};

protected:
	ZList<unsigned short> m_lNewPreStartQuestIDs;

protected:
	int32_t m_bLevelUpAutoQuestRequetSent{};

protected:
	unsigned long m_tAutoAcceptQuestRequest{};

protected:
	ZList<unsigned short> m_lAutoCompletionAlertQuest;

protected:
	int32_t m_bNewAutoCompletionAlertQuest{};

protected:
	long m_nQuestDeliveryItemPos{};

protected:
	uint16_t m_usDeliveryQuestID{};

protected:
	long m_nTamingMobLevel{};

protected:
	long m_nTamingMobExp{};

protected:
	long m_nTamingMobFatigue{};

private:
	int32_t m_bCommodityLoadedCompletely{};

private:
	_x_com_ptr<IWzProperty> m_pCommodity;

private:
	_x_com_ptr<IWzProperty> m_pCashPackage;

private:
	int32_t m_bShowMobInfoName{};

private:
	int32_t m_bShowMobInfoHP{};

private:
	ZArray<CUIWnd *> m_apStackForTab;

public:
	int32_t m_bPredictQuit{};

public:
	std::array<long, 3> m_anLogoutGiftCommoditySN{};

public:
	int32_t m_bIsFakeGMNotice{};

private:
	int32_t m_bRecentPickUpEntrance{};

private:
	int32_t m_bKillMobFromEnterField{};

private:
	int32_t m_bADSpaceON{};

protected:
	long m_tNextUrgingForLevelUp{};

private:
	int32_t m_bMiniMapOnOff{};

private:
	long m_nCashShopInitialItem{};

private:
	long m_nEnergy{};

private:
	ZArray<ZRef<PrivilegeItem>> m_apPrivilege;

private:
	Privilege m_privilege;

private:
	FamilyInfo m_FamilyInfo;

private:
	ZXString<char> m_sUnregisterCharacterName;

private:
	ZMap<unsigned long, ZRef<ZList<_FILETIME>>, unsigned long> m_mExpireProtectingCheckedItem;

private:
	long m_tExpireProtectingItemChecked{};

private:
	long m_nCookieHousePoint{};

private:
	int32_t m_bBuyEquipExt{};

private:
	ZMap<long, ZXString<char>, long> m_mCashPackageName;

private:
	long m_tLastUpdateFileTime{};

private:
	_FILETIME m_ftLastUpdate;

private:
	CWvsContext::Massacre m_Massacre;

private:
	PartyRaidTeam m_nTeamForPartyRaid;

private:
	long m_nPartyRaidStageMine{};

private:
	long m_nPartyRaidStageOther{};

private:
	long m_nPartyRaidPoint{};

protected:
	long m_nLastestGetItemID{};

protected:
	long m_nLastestGetItemPos{};

private:
	int32_t m_bBambooUsed{};

private:
	ZXString<char> m_strImpactNextBySessionValueKey;

private:
	ZXString<char> m_strImpactNextBySessionValue;

private:
	double m_dImpactNextBySessionValueVX{};

private:
	double m_dImpactNextBySessionValueVY{};

protected:
	int32_t m_nScreenWidth{};

protected:
	int32_t m_nScreenHeight{};

protected:
	int32_t m_nAdjustCenterY{};

protected:
	bool m_bIsLargeScreen{};

public:
	unsigned char m_nDoubleJumpChatCtrl{};

private:
	std::array<int32_t, 22> m_aPasssiveSkillBuffing{};

public:
	ZList<CWvsContext::ITEMMSG> m_lItemMsg;

public:
	long m_tNextCheckItemMsg{};

private:
	uint16_t m_usWorldMapQuestID{};

private:
	ZList<unsigned long> m_lWorldMapQuestMobList;

private:
	ZArray<WORLDMAPQUESTDEMANDITEM> m_aWorldMapQuestDemandItem;

private:
	int32_t m_bShowOnlyWorthyQuests{};
	// Methods
public:
	virtual ~CWvsContext();

public:
	void _dtor_0();

public:
	CWvsContext(const CWvsContext &arg0);

public:
	void _ctor_1(const CWvsContext &arg0);

public:
	CWvsContext();

public:
	void _ctor_0();

public:
	void IssueConnect(const ZInetAddr *pAddr);

public:
	void ReturnToTitle();

public:
	void OnEnterGame();

public:
	void OnPostEnterGame();

public:
	void OnEnterField();

public:
	void OnLeaveGame();

public:
	void OnGameStageChanged();

public:
	void ClearFieldUI();

public:
	void SendMigrateToShopRequest(int32_t bFromWishItem);

public:
	void SendMigrateToITCRequest();

public:
	long GetCurFieldID();

public:
	void UI_Toggle(int32_t nUIType, int32_t nDefaultTab);

public:
	void UI_Open(int32_t nUIType, int32_t nDefaultTab);

public:
	void UI_Close(int32_t nUIType);

public:
	void UI_OpenRevive();

public:
	void UI_CloseRevive();

public:
	void UI_Menu();

public:
	void UI_ShortCut();

public:
	void UI_Shop();

public:
	void GetInfoFromSharedMemory();

public:
	int32_t GetWebCookie(WEBCOOKIE *arg0);

public:
	void RemoveWebCookie();

public:
	void SetCookieString(const char *arg0);

public:
	long GetLoginBaseStep() const;

public:
	void SetLoginBaseStep(long arg0);

public:
	const char *GetEMailAccount();

public:
	void SetEMailAccount(const char *arg0);

public:
	unsigned char *GetClientKey();

public:
	void SetClientKey(const unsigned char *arg0, long arg1);

public:
	void RemoveQuestMateName(uint16_t usQuestID);

public:
	void SetQuestMateName(uint16_t nQuestID, ZXString<char> sMateName);

public:
	ZXString<char> GetQuestMateName(uint16_t nQuestID);

public:
	void SetAccountInfo(unsigned long dwAccountId, long nGender, unsigned char nGradeCode, unsigned char nCountryID, ZXString<char> sNexonClubID, unsigned char nPurchaseExp, unsigned char nChatBlockReason, _SYSTEMTIME dtChatUnblockDate, unsigned char nSubGradeCode, int32_t bTesterAccount, _SYSTEMTIME dtRegisterDate, long nNumOfCharacter, ZXString<char> sGuestIDRegistrationURL);

public:
	void SetSlotInfo(long arg0);

public:
	void SetCharacterCountInfo(long arg0);

public:
	void SetGender(unsigned char arg0);

public:
	void SetGender(long arg0);

public:
	unsigned long GetAccountId() const;

public:
	long GetGender() const;

public:
	const char *GetNexonClubID();

public:
	unsigned char GetCountryID() const;

public:
	long GetTotalCharacterCount() const;

public:
	long GetCurrentWorldCharacterCount();

public:
	long GetSlotCount() const;

public:
	void IncreaseCharCount();

public:
	void IncreaseSlotCount();

public:
	int32_t IsManagerAccount() const;

public:
	int32_t IsManagerJob();

public:
	int32_t IsTesterAccount();

public:
	unsigned char GetGradeCode();

public:
	int32_t IsSuperGM();

public:
	int32_t IsAdminAccount();

public:
	int32_t IsTradeBlockedUser();

public:
	int32_t CannotDropItem();

public:
	int32_t CannotUseCommunityFunction();

public:
	int32_t CanUseTestCommand();

public:
	int32_t CanUseAdminCommand();

public:
	int32_t CanUseCommonCommand();

public:
	int32_t IsGuestAccount();

public:
	int32_t IsSubGMAccount();

public:
	int32_t IsOutSourceSuperGM();

public:
	int32_t IsOutSourceGM();

public:
	int32_t IsUserGM();

public:
	long GetAdminLevel();

public:
	int32_t IsUnderCover();

public:
	int32_t IsTeleportPermissible();

public:
	int32_t IsChatBlocked();

public:
	_SYSTEMTIME GetChatUnblockDate();

public:
	unsigned char GetChatBlockReason();

public:
	_SYSTEMTIME GetRegisterDate();

public:
	int32_t IsNewAccount();

public:
	int32_t HasNoCharacter() const;

public:
	void SetJustCreatedCharacter(int32_t arg0);

public:
	int32_t GetJustCreatedCharacter() const;

public:
	void SetWorldInfo(long nWorldID, long nChannelID, ZArray<ZXString<char>> &aChannelName, ZArray<int> &aAdultChannel);

public:
	void SetChannelID(long arg0);

public:
	long GetWorldID() const;

public:
	long GetChannelID() const;

public:
	long GetChannelCount();

public:
	// TODO
	const char *GetChannelName(long nIdx);

public:
	const char *GetChannelName_();

public:
	int32_t GetAdultChannel(long arg0);

public:
	unsigned long GetCharacterId();

public:
	void SetCharacterId(unsigned long dwFlag);

public:
	void SetPremium(int32_t arg0);

public:
	void SetPremiumArgument(unsigned long dwFlag);

public:
	const char *GetCharacterName();

public:
	long GetCharacterLevel();

public:
	int32_t IsPremiumUser();

public:
	unsigned long GetPremiumArgument() const;

public:
	long GetFuncKeyMappedType(uint32_t arg0, uint32_t arg1);

public:
	int32_t ProcessBasicUIKey(uint32_t wParam, int32_t lParam);

public:
	int32_t UseFuncKeyMapped(int32_t lParam);

public:
	int32_t MonsterCarnivalDlgKeyHook(uint32_t wParam);

public:
	void ChannelShift();

public:
	void OnPacket(long nType, CInPacket &iPacket);

public:
	void OnMessage(CInPacket &arg0);

public:
	void OnOpenFullClientDownloadLink(CInPacket &arg0);

public:
	void OnMemoResult(CInPacket &arg0);

public:
	void OnWildHunterInfo(CInPacket &arg0);

public:
	ZRef<CharacterData> GetCharacterData();

public:
	void SetCharacterData(ZRef<CharacterData> pCharacter);

public:
	const BasicStat &GetBasicStat();

public:
	SecondaryStat &GetSecondaryStat();

public:
	const ForcedStat &GetForcedStat();

public:
	int32_t IsStatForced();

public:
	CTemporaryStatView &GetTempStatView();

public:
	ZRef<GW_ItemSlotBase> *GetRealEquip();

public:
	ZRef<GW_ItemSlotBase> GetRealEquipSlot(long nBodyPart);

public:
	ZRef<GW_ItemSlotBase> *GetRealEquip2();

public:
	ZRef<GW_ItemSlotBase> *GetRealDragonEquip();

public:
	ZRef<GW_ItemSlotBase> *GetRealMechanicEquip();

public:
	int32_t IsRealEquipItem(long arg0);

public:
	int32_t IsRealEquip2Item(long arg0);

public:
	int32_t IsEquipped(long nItem);

public:
	long GetBodypartToWear(GW_ItemSlotBase *arg0);

public:
	CalcDamage &GetCalcDamage();

public:
	void ValidateStat();

public:
	void CheckEquippedSetItem();

public:
	void UpdateAutoStartQuestOnLevelUp();

public:
	void ResetAutoQuest();

public:
	int32_t IsNeedToShowNewAutoQuestEffect();

public:
	void SetNewAutoQuestStartAlert(int32_t arg0);

public:
	void SetNewAutoCompletionAlertQuest(int32_t arg0);

public:
	const ZList<unsigned short> &GetNewAutoQuestStartList();

public:
	void ClearNewAutoQuestStartList();

public:
	ZXString16 GetAutoQuestIconUOL();

public:
	ZXString16 GetAutoQuestIconAppearUOL();

public:
	long GetSkillLevelUpState(const SKILLENTRY *p);

public:
	long GetPartyID();

public:
	void GetPartyMemberData(long nIdx, unsigned long &dwMemberID, ZXString<char> &sMemberName, unsigned long &dwFieldID, ZXString<char> &sMemberJob, long &nLevel, long &nChannelID, int32_t &bBoss);

public:
	unsigned long GetPartyMemberID(long arg0);

public:
	int32_t IsPartyMemberOnline(long arg0);

public:
	int32_t IsPartyMemberOnlineInSameChannel(long arg0);

public:
	long GetPartyMemberNumber();

public:
	void GetOnlinePartyMemberID(ZArray<unsigned long> &arg0);

public:
	int32_t GetPartyTownPortal(long nIdx, PARTYDATA::TOWNPORTAL &pt);

public:
	void GetMyTownPortal(PARTYDATA::TOWNPORTAL &pt);

public:
	unsigned long GetPartyMemberByName(ZXString<char> sName);

public:
	unsigned long FindUser(unsigned long dwMemberID);

public:
	int32_t IsPartyMemberID(unsigned long dwMemberID);

public:
	int32_t AmIPartyBoss();

public:
	unsigned long GetPartyBossID() const;

public:
	void SetPartySerachSetting(PARTYSERACH_SETTING arg0);

public:
	void SetPartySearchState(long arg0);

public:
	PARTYSERACH_SETTING GetPartySerachSetting();

public:
	long GetPartySearchState() const;

public:
	void ClearPartySearchSetting();

public:
	void SetKeepPartySearch();

public:
	void StartPartyMemberSearch();

public:
	void HoldPartyMemberSearch();

public:
	void StopPartySearch();

public:
	_x_com_ptr<IWzGr2DLayer> GetPartySearch_Remocon_Layer();

public:
	void LoadPartySearch_Remocon_Layer();

public:
	void ShowPartySearch_Remocon_Layer(long nState, int32_t bFade);

public:
	void ShowPartySearch_Remocon_Searching();

public:
	void ShowPartySearch_Remocon_Holding();

public:
	void ClosePartySearch_Remocon();

public:
	long GetGuildID() const;

public:
	ZXString<char> GetGuildName() const;

public:
	long GetGuildMaxMemberNum() const;

public:
	long GetGuildMemberNum() const;

public:
	void GetGuildMemberDataByIdx(long nIdx, long &nCharacterID, GUILDMEMBER &gm);

public:
	unsigned long GetGuildMemberIDByID(long charId);

public:
	int32_t GetGuildMemberNameByID(unsigned long dwCharacterID, ZXString<char> &sCharacterName);

public:
	void GetOnlineGuildMemberID(ZArray<unsigned long> &adwGuildMemberID);

public:
	unsigned long GetGuildMemberIDByName(ZXString<char> sName);

public:
	ZXString<char> GetGuildGradeName(long nIndex);

public:
	int32_t AmIGuildMaster();

public:
	long GetGuildMemberGrade(unsigned long dwCharacterID);

public:
	long GetGuildMaxGradeNum();

public:
	int32_t IsGuildMemberExist(long nPsdNo);

public:
	void GuildNPCSay(ZArray<ZXString<char>> &asSay, long dwGuildNpcTemplateID);

public:
	uint16_t GetGuildMark();

public:
	unsigned char GetGuildMarkColor();

public:
	uint16_t GetGuildMarkBg() const;

public:
	unsigned char GetGuildMarkBgColor() const;

public:
	long GetGuildSkillLevel(long skillId);

public:
	ZXString<char> GetGuildSkillBuyer(long nIndex);

public:
	ZArray<long> GetGuildSkillArray() const;

public:
	_x_com_ptr<IWzCanvas> GetGuildMarkCanvas(uint16_t arg0, unsigned char arg1, uint16_t arg2, unsigned char arg3);

public:
	ZXString<char> GetGuildNotice() const;

public:
	long GetGuildPoint() const;

public:
	ZXString<char> GetAllianceName() const;

public:
	ZXString<char> GetAllianceNotice() const;

public:
	ZXString16 GetGuildBoardAuthKey();

public:
	unsigned long GetGuildBoardAuthKeyLastUpdated() const;

public:
	long GetGuildAllianceID() const;

public:
	ZXString<char> GetAllianceGradeName(long nIndex);

public:
	long GetAllianceMemberNum();

public:
	long GetAllianceMemberNumMax() const;

public:
	GUILDDATA &GetAllianceMemberByIdx(long arg0);

public:
	void GetOnlineAllianceMemberID(ZArray<unsigned long> &adwAllianceMemberID);

public:
	int32_t AmIAllianceMaster();

public:
	int32_t AmIAllianceSubMaster();

public:
	long GetAllianceMemberGrade(unsigned long dwCharacterID);

public:
	int32_t IsAllianceMemberExist(long nPsdNo);

public:
	long GetAllianceMaxGradeNum();

public:
	void UpdateAllianceMemberInfo(GUILDDATA &gd);

public:
	void GetOnlineExpeditionMemberID(ZArray<unsigned long> &arg0);

public:
	ZXString16 GetConsultAuthKey();

public:
	unsigned long GetConsultAuthKeyLastUpdated();

public:
	ZXString16 GetClassCompetitionAuthKey();

public:
	unsigned long GetClassCompetitionAuthKeyLastUpdated();

public:
	ZXString16 GetWebBoardAuthKey(long nType);

public:
	unsigned long GetWebBoardAuthKeyLastUpdated(long arg0);

public:
	void SetDirectionMode(int32_t arg0);

public:
	int32_t GetDirectionMode();

public:
	void SetStandAloneMode(int32_t arg0);

public:
	int32_t GetStandAloneMode();

public:
	_x_com_ptr<IWzCanvas> GetBattleTeamMarkCanvas(long nTeamCategory);

public:
	void LoadFriend();

public:
	void CheckReqFriend();

public:
	long GetFriendCount();

public:
	void GetFriendByID(unsigned long dwFriendID, GW_Friend *f);

public:
	void GetFriendByName(ZXString<char> sFriendName, GW_Friend *f);

public:
	void GetOnlineFriendID(ZArray<unsigned long> &arg0);

public:
	void GetOnlineFriendIDByGroup(ZXString<char> sGroupName, ZArray<unsigned long> &adwFriendMemberID);

public:
	const GW_Friend &GetFriendByIdx(long arg0);

public:
	const GW_Friend &GetFriendByGroup(long arg0);

public:
	void GetFriendGroups(ZArray<ZXString<char>> &aGroups);

public:
	int32_t IsFriendInShop(long nPsdNo);

public:
	int32_t IsBlockedFriend(long nIdx, long nFlag);

public:
	int32_t ChangeBlockOption(unsigned long dwFriendID, long nFlag, int32_t bBlocked);

public:
	unsigned long GetMarriedPartnerCurFieldID();

public:
	long GetMarriedPartnerID();

public:
	void SetClaimSvrAvailableTime(unsigned char openTime, unsigned char closeTime);

public:
	int32_t IsClaimSvrConnected() const;

public:
	long IsExist(long nItemID);

public:
	void SetUserLoadCompleted();

public:
	int32_t IsFirstUserLoad();

public:
	int32_t LoadCommodity();

public:
	void SortCommodity();

public:
	void MakeOriginalSN(ZMap<long, long, long> &mSN_OriginalSN);

public:
	int32_t LoadPackageOriginalSN(const ZMap<long, long, long> &mSN_OriginalSN);

public:
	void SetSaleInfo(CInPacket &arg0);

public:
	const ZRef<CS_COMMODITY> GetCommodityBySN(long nCommSN);

public:
	const ZRef<CS_COMMODITY> GetCommodityByIndex(long nCommSN);

public:
	int32_t IsValidCommodity(long nItemId);

public:
	void LoadAreaCode();

public:
	ZArray<ZRef<CS_COMMODITY>> &GetCommodity();

public:
	ZArray<CS_LIMITGOODS> &GetLimitGoods();

public:
	void SetPresentInfo(long nCommSN, ZXString<char> sGiveTo);

public:
	void GetPresentInfo(long &arg0, ZXString<char> &arg1);

public:
	int32_t GetMigrateFromWishItem();

public:
	int32_t CanSendExclRequest(long tTimeInterval = 500, int32_t bIgnoreDeadState = false);

public:
	int32_t CanSendExclRequestQ(long arg0, int32_t arg1, int32_t arg2);

public:
	void SetExclRequestSent(int32_t arg0);

public:
	void SetExclRequestSentQ(int32_t arg0, int32_t arg1);

public:
	int32_t IsAbleToConsume(long nItemID, int32_t bShowChatLog);

public:
	void SetExclRequestSentTime(long arg0);

public:
	void SendGatherItemRequest(long nType);

public:
	void SendSortItemRequest(long nType);

public:
	void SendChangeSlotPositionRequest(long nType, long nOldPos, long nNewPos, long nCount);

public:
	void SendDropPickUpRequest(const tagPOINT &pt, unsigned long dwDropID, unsigned long dwCliCrc);

public:
	void SendItemReleaseRequest(long nUPOS, long nEPOS);

public:
	void SendUpgradeItemUseRequest(long nUPOS, long nEPOS, int32_t bWhiteScroll, int32_t bEnchantSkill);

public:
	void SendHyperUpgradeItemUseRequest(long nUPOS, long nEPOS, int32_t bEnchantSkill);

public:
	void SendItemOptionUpgradeItemUseRequest(long nUPOS, long nEPOS, int32_t bEnchantSkill);

public:
	void SendStatChangeItemUseRequest(long nPOS, long nItemID);

public:
	void SendStatChangeItemUseRequestByPetQ(_LARGE_INTEGER liPetSN, long nPOS, long nItemID, int32_t bConsumeMP, unsigned char bBuffSkill, int32_t nIndex);

public:
	void SendStatChangeItemCancelRequest(long nItemID);

public:
	void SendMobSummonItemUseRequest(long nPOS, long nItemID);

public:
	void SendPetFoodItemUseRequest(long nPOS, long nItemID);

public:
	void SendMapleTvItemUseRequest(long arg0, long arg1);

public:
	void SendTamingMobFoodItemUseRequest(long nPOS, long nItemID);

public:
	void SendScriptRunItemRequest(long nPOS, long nItemID);

public:
	void SendConsumeCashItemUseRequest(long nPOS, long nItemID, long nEPOS, ZXString<char> sDefaultValue);

public:
	void SendDragonBallBoxRequest();

public:
	void SendDragonBallSummonRequest();

public:
	void SendSitOnPortableChairRequest(long nPOS, long nItemID);

public:
	void SendGetUpFromChairRequest(long tTimeInterval);

public:
	void SendCreateMessageBoxRequest(long arg0, long arg1);

public:
	void SendCreateMiniGameRequest(long arg0, long arg1);

public:
	void SendEtcCashItemUseRequest(long arg0, long arg1);

public:
	void SendCashSlotItemUseRequest(long nPOS, long nItemID, _LARGE_INTEGER liCashItemSN);

public:
	void SendUIOpenItemRequest(long nPOS, long nItemID);

public:
	void SendOpenShopRequest(long arg0, long arg1, int32_t arg2);

public:
	void SendAbilityUpRequest(const ZArray<StatPair> &aStatUp);
	void SendAbilityUpRequest_1(const ZArray<StatPair> &aStatUp)
	{
		SendAbilityUpRequest(aStatUp);
	}

public:
	void SendAbilityUpRequest(unsigned long dwFlag);
	void SendAbilityUpRequest_0(unsigned long dwFlag)
	{
		SendAbilityUpRequest(dwFlag);
	}

public:
	void SendSkillUpRequest(long arg0);

public:
	void SendStatChangeRequest(long nHP, long nMP, long nOption);

public:
	void SendStatChangeRequestByItemOption(long arg0, long arg1);

public:
	void SendPortalScrollUseRequest(long arg0, long arg1);

public:
	void SendDropMoneyRequest(long arg0);

public:
	void SendGivePopularityRequest(const char *sName, int32_t bInc);

public:
	void SendCharacterInfoRequest(unsigned long dwCharacterID, int32_t bSelfInfoPossible, int32_t bPetInfo);

public:
	void SendActivatePetRequest(long arg0);

public:
	void SendEmotionChange(long nEmotion, int32_t bByItemOption, long nDuration);

public:
	void SendActiveEffectItemChange(long arg0);

public:
	void SendRemoteShopOpenRequest(long nPos);

public:
	void SendHPInfoRequest(int32_t arg0, unsigned long arg1);

public:
	void SendMapTransferRequest(long nType, unsigned long dwTargetField, int32_t bCanTransferContinent);

public:
	void SendAntiMacroItemUseRequest(long arg0, long arg1);

public:
	void SendClaimRequest(ZArray<ZXString<char>> &asChatLog, ZXString<char> sCharacterName);

public:
	void SendEntrustedShopCheckRequest(long nPOS, long nItemID, _LARGE_INTEGER liCashItemSN);

public:
	void SendSkillLearnItemUseRequest(long nPOS, long nItemID);

public:
	void SendSkillResetItemUseRequest(long nPOS, long nItemID);

public:
	void SendShopScannerItemUseRequest(long nPOS, long nItemID);

public:
	void SendMapTransferItemUseRequest(long nPOS, long nItemID);

public:
	void SendEngagementRequest(long nPOS, long nItemID);

public:
	void SendNewYearCardUseRequest(long nPOS, long nItemID);

public:
	void ShowNewYearCard(long nSN);

public:
	void SendRandomMorphOtherRequest(long nPos, long nItemID);

public:
	void SendSelectNpcItemUseRequest(long nPOS, long nItemID);

public:
	void SendSendInvitaionRequest(long nPos, long nItemID);

public:
	void SendInvitationQuery(long nPOS, long nItemID);

public:
	void SendRingDropRequest(long nItemID);

public:
	void SendWishListInput(ZXString<char> *asWishList, long nCount);

public:
	void SendPartyWanted(unsigned long dwMinLv, unsigned long dwMaxLv, unsigned long dwCount, unsigned long dwJobFlag);

public:
	void SendCancelPartyWanted();

public:
	void SendLotteryItemUseRequest(long nPos, long nItemID);

public:
	void SendRequestSessionValue(ZXString<char> sKey, int32_t bReset);

public:
	void SendWaterOfLife();

public:
	void SendFamilyInviteResult(ZXString<char> strInviterName, unsigned long dwInviterID, int32_t bResult);

public:
	void SendFamilyChartRequest(ZXString<char> sUserName);

public:
	void SendFamilyInfoRequest();

public:
	void SendRegisterJunior(ZXString<char> sUserName);

public:
	void SendUnregisterJunior(unsigned long dwFlag);

public:
	void SendUnregisterParent();

public:
	void SendUseFamilyPrivilege(long arg0);

public:
	void SendSetFamilyPrecept(ZXString<char> sUserName);

public:
	void SendFollowCharacterRequest(unsigned long dwDriverID, int32_t bAutoReq, int32_t bKeyInput);

public:
	void SetOldDriverID(unsigned long dwFlag);

public:
	unsigned long GetOldDriverID();

public:
	void SendFollowCharacterWithdraw();

public:
	void SendFollowRequestApply(int32_t arg0);

public:
	void ShowPartyInfo();

public:
	void ShowGuildInfo();

public:
	void OnInventoryOperation(CInPacket &pkt);

public:
	void OnInventoryGrow(CInPacket &arg0);

public:
	void OnStatChanged(CInPacket &pkt);

public:
	void OnTemporaryStatSet(CInPacket &pkt);

public:
	void OnTemporaryStatReset(CInPacket &pkt);

public:
	void OnForcedStatSet(CInPacket &arg0);

public:
	void OnForcedStatReset(CInPacket &arg0);

public:
	void OnChangeSkillRecordResult(CInPacket &arg0);

public:
	void OnSkillUseResult(CInPacket &arg0);

public:
	void OnGivePopularityResult(CInPacket &arg0);

public:
	void OnDropPickUpMessage(CInPacket &arg0);

public:
	void OnQuestRecordMessage(CInPacket &arg0);

public:
	void OnQuestRecordExMessage(CInPacket &arg0);

public:
	void OnCashItemExpireMessage(CInPacket &arg0);

public:
	void OnGeneralItemExpireMessage(CInPacket &arg0);

public:
	void OnItemProtectExpireMessage(CInPacket &arg0);

public:
	void OnItemExpireReplaceMessage(CInPacket &arg0);

public:
	void OnSkillExpireMessage(CInPacket &arg0);

public:
	void OnSystemMessage(CInPacket &arg0);

public:
	void OnIncEXPMessage(CInPacket &arg0);

public:
	void OnIncSPMessage(CInPacket &arg0);

public:
	void OnIncPOPMessage(CInPacket &arg0);

public:
	void OnIncMoneyMessage(CInPacket &arg0);

public:
	void OnIncGPMessage(CInPacket &arg0);

public:
	void OnGiveBuffMessage(CInPacket &arg0);

public:
	void OnUpgradeItemResult(CInPacket &arg0);

public:
	void OnCharacterInfo(CInPacket &arg0);

public:
	void OnPartyResult(CInPacket &arg0);

public:
	void OnExpedtionResult(CInPacket &arg0);

public:
	void OnGuildResult(CInPacket &arg0);

public:
	void OnAllianceResult(CInPacket &arg0);

public:
	void OnFriendResult(CInPacket &arg0);

public:
	void OnTownPortal(CInPacket &arg0);

public:
	void OnOpenGate(CInPacket &pkt);

public:
	void OnBroadcastMsg(CInPacket &arg0);

public:
	void OnRevive();

public:
	void OnAntiMacroResult(CInPacket &arg0);

public:
	void OnInitialQuiz(CInPacket &arg0);

public:
	void OnInitialSpeedQuiz(CInPacket &arg0);

public:
	void OnQuestClear(CInPacket &pkt);

public:
	void OnQuestProgressUpdated(uint16_t usQuestID, long nItemID, ZXString<char> sOldInfo);

public:
	void OnClaimResult(CInPacket &arg0);

public:
	void OnClaimSvrStatusChanged(CInPacket &arg0);

public:
	void OnSetClaimSvrAvailableTime(CInPacket &arg0);

public:
	void OnSetTamingMobInfo(CInPacket &arg0);

public:
	void OnShopPacket(CInPacket &arg0);

public:
	void OnEntrustedShopCheckResult(CInPacket &arg0);

public:
	void OnIncubatorResult(CInPacket &arg0);

public:
	void OnShopScannerResult(CInPacket &arg0);

public:
	void OnShopLinkResult(CInPacket &arg0);

public:
	void OnMarriageRequest(CInPacket &arg0);

public:
	void OnMarriageResult(CInPacket &arg0);

public:
	void OnWeddingGiftResult(CInPacket &arg0);

public:
	void OnCashPetFoodResult(CInPacket &arg0);

public:
	void OnSkillLearnItemResult(CInPacket &arg0);

public:
	void OnSkillResetItemResult(CInPacket &arg0);

public:
	void OnGatherItemResult(CInPacket &arg0);

public:
	void OnSortItemResult(CInPacket &arg0);

public:
	void OnTradeMoneyLimit(CInPacket &arg0);

public:
	void OnSetGender(CInPacket &arg0);

public:
	void OnSetWeekEventMessage(CInPacket &arg0);

public:
	void OnSetPotionDiscountRate(CInPacket &arg0);

public:
	void OnNotifyMarriedPartnerMapTransfer(CInPacket &iPacket);

public:
	void OnImitatedNPCResult(CInPacket &iPacket);

public:
	void OnImitatedNPCData(CInPacket &iPacket);

public:
	void OnLimitedNPCDisableInfo(CInPacket &iPacket);

public:
	void OnGuildBBSPacket(CInPacket &iPacket);

public:
	void OnMacroSysDataInit(CInPacket &arg0);

public:
	void OnBridleMobCatchFail(CInPacket &iPacket);

public:
	void OnMonsterBookSetCard(CInPacket &iPacket);

public:
	void OnMonsterBookSetCover(CInPacket &iPacket);

public:
	void OnHourChanged(CInPacket &iPacket);

public:
	void OnConsultAuthkeyUpdate(CInPacket &iPacket);

public:
	void OnClassCompetitionAuthkeyUpdate(CInPacket &iPacket);

public:
	void OnWebBoardAuthkeyUpdate(CInPacket &iPacket);

public:
	void OnSessionValue(CInPacket &iPacket);

public:
	void OnPartyValue(CInPacket &iPacket);

public:
	void OnFieldSetVariable(CInPacket &iPacket);

public:
	void OnBonusExpRateChanged(CInPacket &iPacket);

public:
	void OnPotionDiscountRateChanged(CInPacket &iPacket);

public:
	void OnFamilyChartResult(CInPacket &arg0);

public:
	void OnFamilyInfoResult(CInPacket &arg0);

public:
	void OnFamilyResult(CInPacket &arg0);

public:
	void OnFamilyJoinRequest(CInPacket &arg0);

public:
	void OnFamilyJoinRequestResult(CInPacket &arg0);

public:
	void OnFamilyJoinAccepted(CInPacket &arg0);

public:
	void OnFamilyPrivilegeList(CInPacket &arg0);

public:
	void OnFamilyFamousPointIncResult(CInPacket &arg0);

public:
	void OnFamilyNotifyLoginOrLogout(CInPacket &arg0);

public:
	void OnFamilySetPrivilege(CInPacket &arg0);

public:
	void OnFamilySummonRequest(CInPacket &arg0);

public:
	void OnNotifyLevelUp(CInPacket &iPacket);

public:
	void OnNotifyWedding(CInPacket &iPacket);

public:
	void OnNotifyJobChange(CInPacket &iPacket);

public:
	void OnSetBuyEquipExt(CInPacket &iPacket);

public:
	void OnScriptProgressMessage(CInPacket &iPacket);

public:
	void OnDataCRCCheckFailed(CInPacket &iPacket);

public:
	void OnShowSlotMessage(CInPacket &iPacket);

public:
	void OnCakePieEventResult(CInPacket &iPacket);

public:
	void OnStageChange(CInPacket &iPacket);

public:
	void OnDragonBallBox(CInPacket &iPacket);

public:
	void SetNewFadeWnd(CUIFadeYesNo *pWnd);

public:
	void ClearFadeWnd();

public:
	void DeleteFadeWnd(ZRef<CUIFadeYesNo> pWnd);
	void DeleteFadeWnd_0(ZRef<CUIFadeYesNo> pWnd)
	{
		DeleteFadeWnd(pWnd);
	}

public:
	void DeleteFadeWnd(long nType, long nFriendID, uint16_t nQuestID, ZXString<char> sSender, unsigned long dwNewYearCardSN);
	void DeleteFadeWnd_1(long nType, long nFriendID, uint16_t nQuestID, ZXString<char> sSender, unsigned long dwNewYearCardSN)
	{
		DeleteFadeWnd(nType, nFriendID, nQuestID, sSender, dwNewYearCardSN);
	}

public:
	int32_t IsFadeWndExist(long nType, unsigned long dwValue, ZXString<char> sName);

public:
	void SetTopFadeWnd(ZRef<CUIFadeYesNo> pWnd);

public:
	int32_t IsTopFadeWnd(ZRef<CUIFadeYesNo> pWnd);

public:
	long GetReceivedMemoCount();

public:
	void ExtractReceivedMemo(ZList<GW_Memo> &arg0);

public:
	void ShowUI(int32_t bShow);

public:
	int32_t GetShowUI();

public:
	int32_t IsTimerSet();

public:
	void SetEventTimer(long nDuration);

public:
	void OnEventTimer();

public:
	void Update();

public:
	void CheckTemporaryStatDuration();

public:
	void AddQuestTimer(uint16_t usQuestID, long tRemain, int32_t bTimeKeepQuestTimer);

public:
	void RemoveQuestTimer(uint16_t usQuestID, int32_t bNewAlertCheck);

public:
	void ResetQuestTimer(uint16_t usQuestID, int32_t bNewAlertCheck);

public:
	void ClearQuestTimer();

public:
	ZRef<CUIQuestTimer> GetQuestTimer(uint16_t usQuestID, int32_t bTimeKeepQuestTimer);

public:
	void OnMapTransferResult(CInPacket &arg0);

public:
	long GetActiveEffectItemID();

public:
	void SetActiveEffectItemID(long arg0);

public:
	void SetAntiMacroRemainTime(long arg0);

public:
	void ShowAntiMacroNotice(long arg0, long arg1);

public:
	void SaveAntiMacroScreenShot(ZXString<char> sUserName);

public:
	void SetInitialQuizRemainTime(long arg0);

public:
	void StartQuest(uint16_t usQuestID, unsigned long dwNpcTemplateID, int32_t bAutoStart);

public:
	void ResignQuest(uint16_t usQuestID);

public:
	void ShowQuestInfoDetail(long nTab, uint16_t usQuestID);

public:
	long GetItemCount(long nItemID);

public:
	ZXString<char> GetQuestMobCount(long nIndex);

public:
	void CheckQuestCompleteByItem(long arg0, long arg1);

public:
	void CheckQuestCompleteByMeso(long arg0);

public:
	ZXString<char> GetQuestMobName(uint16_t usQuestRecordKey);

public:
	ZXString<char> GetQuestBonusEXP(uint16_t arg0);

public:
	long GetQuestState(uint16_t usQuestID);

public:
	ZXString<char> GetQuestRecordValue(uint16_t usQuestID);

public:
	long GetQuestItemID(uint16_t usQuestID, long nNum);

public:
	void ShowPremiumArgument(unsigned long ulArgument, long nSessionCount);

public:
	void SetPurchaseExp(unsigned char arg0);

public:
	void PersonalShopOpen();

public:
	void PersonalShopClose();

public:
	int32_t IsPersonalShopOpen();

public:
	void SetADBoard(ZXString<char> sUserName);

public:
	ZXString<char> GetADBoard();

public:
	void ADBoardOpen();

public:
	void ADBoardClose();

public:
	int32_t IsADBoardOpen() const;

public:
	void OpenBook(long nItemID);

public:
	void CloseBook();

public:
	void OpenRaise(long nItemID);

public:
	void UseBoxGachaponItem(long nPos, long nItemID);

public:
	void SendUseBoxGachaponItemRequest(long nPos, long nItemID);

public:
	void SendUseGachaponRemoteRequest(long nItemID, unsigned long dwTownID);

public:
	void CloseShopScanner();

public:
	int32_t RunShopScanner(COutPacket &oPacket);

public:
	int32_t RunMapTransferItem(COutPacket &oPacket, int32_t bCanTransferContinent);

public:
	int32_t IsExistSkillCooltimeOver(long nPsdNo);

public:
	void ClearCooltimeAll();

public:
	long GetSkillCooltimeOver(long nItemID);

public:
	void SetSkillCooltimeOver(long nSkillID, long tTimeOver);

public:
	void RemoveSkillCooltimeOver(long nSkillID);

public:
	void CheckDarkForce(int32_t arg0);

public:
	long GetDarkForceDamage() const;

public:
	long GetDarkForcePddr() const;

public:
	void CheckDragonFury(int32_t arg0);

public:
	long GetDragonFuryDamage() const;

public:
	void OnMapleTVUseRes(CInPacket &arg0);

public:
	void OnAvatarMegaphoneRes(CInPacket &arg0);

public:
	void OnSetAvatarMegaphone(CInPacket &arg0);

public:
	void OnClearAvatarMegaphone(CInPacket &arg0);

public:
	void OnCancelNameChangeResult(CInPacket &arg0);

public:
	void OnCancelTransferWorldResult(CInPacket &arg0);

public:
	void OnDestroyShopResult(CInPacket &arg0);

public:
	void OnFakeGMNotice(CInPacket &arg0);

public:
	void OnSuccessInUsegachaponBox(CInPacket &arg0);

public:
	void OnNewYearCardRes(CInPacket &arg0);

public:
	void OnRandomMorphRes(CInPacket &arg0);

public:
	void SetActionRndSeed(uint32_t s1, uint32_t s2, uint32_t s3);

public:
	CRand32 &GetActionRndMan();

public:
	long GetPotionDiscountRate() const;

public:
	int32_t CheckEquipOnAutoStartQuest(long nItemID, int32_t bNewAlertCheck);

public:
	int32_t CheckInventoryOnAutoStartQuest(long nItemID, int32_t bNewAlertCheck);

public:
	int32_t CheckFieldOnAutoStartQuest(unsigned long dwCheckFieldID);

public:
	int32_t CheckNormalAutoStartQuest(int32_t bNewAlertCheck);

public:
	void CheckAutoCompletionAlertQuest();

public:
	void UpdateAutoQuestAlertIcon();

public:
	void UpdateAutoStartQuestPreStartList(ZArray<unsigned short> &aQuestList, int32_t bNewAlertCheck);

public:
	void TryRegisterAutoStartQuest(uint16_t usQuestID, int32_t bNewAlertCheck);

public:
	void TryRegisterAutoCompletionAlertQuest(uint16_t usQuestID);

public:
	ZMap<unsigned short, int, unsigned short> &GetAutoStartPreStart();

public:
	ZMap<unsigned short, int, unsigned short> &GetAutoCompleQuestInProgress();

public:
	ZList<unsigned short> &GetAutoCompletionAlertQuest();

public:
	void RemoveAtAutoQuestList(uint16_t usQuestID);

public:
	void OnSetPassenserRequest(CInPacket &arg0);

public:
	void CheckNewQuestAvailable(int32_t arg0);

public:
	void ReleaseRefs();

public:
	void SendSueCharacterRequest(unsigned long arg0, unsigned char arg1, ZXString<char> arg2);

public:
	void OnSueCharacterResult(CInPacket &arg0);

public:
	void SendExpUpItemUseRequest(long nPOS, long nItemID);

public:
	void SendTempExpUseRequest();

public:
	void OnCancelNameChangebyOther(CInPacket &arg0);

public:
	void GetLastestGetItemID(long &arg0, long &arg1);

public:
	void SetLastestGetItemID(long arg0, long arg1);

public:
	void ClearLastestGetItemID();

public:
	long GetSwallowBuffType();

public:
	long GetDiceBuffType();

public:
	long GetQuestDeliveryItemPos() const;

public:
	void SetQuestDeliveryItemPos(long arg0);

public:
	uint16_t GetDeliveryQuestID() const;

public:
	void SetDeliveryQuestID(uint16_t usQuestID);

protected:
	void TryRecovery();

public:
	void OnMemoNotify_Receive();

public:
	void SetOnReadingMemo(int32_t arg0);

public:
	static int32_t __cdecl IsConnected(unsigned long dwFrom, unsigned long dwTo);

public:
	void SendBridleItemUseRequest(long nPOS, long nItemID);

public:
	void SetTamingMobInfo(long nHP, long nMP, long nOption);

public:
	void GetTamingMobInfo(long &lvl, long &exp, long &fatigue);

public:
	long GetTamingMobLevel() const;

public:
	void ReleaseCommodityRes();

public:
	void SetCommodityReload();

private:
	int32_t TryCloseUI(CUIWnd *pUIWnd);

private:
	void CheckOpBoardHasNew();

public:
	void OnUpdateGMBoard(CInPacket &iPacket);

public:
	void OnAccountMoreInfo(CInPacket &iPacket);

public:
	void OnFindFirend(CInPacket &iPacket);

public:
	void OnSetLogoutGiftConfig(CInPacket &iPacket);

public:
	void OnLogoutGift(CInPacket &iPacket);

public:
	int32_t GetShowMobInfoName() const;

public:
	void SetShowMobInfoName(int32_t arg0);

public:
	int32_t GetShowMobInfoHP() const;

public:
	void SetShowMobInfoHP(int32_t arg0);

public:
	void PushStackForTab(CUIWnd *item);

public:
	CUIWnd *GetTopStackForTab();

public:
	void RemoveFromStackForTab(CUIWnd *item);

public:
	int32_t IsFakeGMNotice();

public:
	void SendBoobyTrapAlert(long trapType);

public:
	void CheckBoobyTrapPickUpRequest(const tagPOINT &pt);

public:
	int32_t IsPickUpRequestEntrance() const;

public:
	void ClearPickUpEntranceState();

public:
	int32_t IsKillMobFromEnterField();

public:
	void OnMobDead();

public:
	void SetADSpaceOnOff(int32_t arg0);

public:
	int32_t IsADSpaceOn();

public:
	int32_t IsMiniMapOnOff();

public:
	void OnMiniMapOnOff(CInPacket &iPacket);

public:
	long GetCashShopInitialItem();

public:
	void SetCashShopInitialItem(long arg0);

public:
	long GetEnergy() const;

public:
	long GetCurrentPrivilege() const;

public:
	ZXString<char> GetPrivilegeName(long nIndex);

public:
	ZRef<PrivilegeItem> GetPrivilegeItem(long nIndex);

public:
	int32_t CanRegisterFamilyChild();

public:
	void SetUnregisterCharacterName(ZXString<char> sUserName);

private:
	void _CheckExpiredProtectItem(GW_ItemSlotBase *pItem, const _FILETIME &ftNow);

private:
	void _CheckExpiredProtectItems();

public:
	long GetCookieHousePoint();

public:
	int32_t GetBuyEquipExt();

public:
	void AddChatMorphedMsg();

public:
	ZXString<char> GetCashPackageName(long nIndex);

public:
	CWvsContext::Massacre &GetMasscreInfo();

public:
	PartyRaidTeam GetTeamForPartyRaid();

public:
	long GetPartyRaceStageMine() const;

public:
	long GetPartyRaceStageOther() const;

public:
	long GetPartyRacePoint() const;

public:
	int32_t IsBambooUsed() const;

private:
	void ValidateAdditionalItemEffect();

public:
	void SetImpactNextBySessionValue(const ZXString<char> &strKey, const ZXString<char> &strValue, double vx, double vy);

public:
	int32_t GetScreenHeight() const;

public:
	int32_t GetScreenWidth() const;

public:
	int32_t GetAdjustCenterY() const;

public:
	void SetScreenResolution(bool bLargeScreen, bool bSave);

public:
	void ToggleScreenResolution();

public:
	bool IsLargeScreen();

private:
	void ClearPasssiveSkillBuffing();

public:
	void SetPasssiveSkillBuffing(const SecondaryStat &ss);

public:
	int32_t GetPasssiveSkillBuffing(long ix);

public:
	int32_t IsFamilyMember();

public:
	ZXString<char> GetGMBoardURL();

public:
	void LoadItemMsg(long arg0);

public:
	void InsertItemMsg(long arg0);

public:
	void RemoveItemMsg(long arg0);

public:
	void RestoreItemMsg();

public:
	void UpdateItemMsg(long arg0);

public:
	void OnTransferChannel(CInPacket &arg0);

public:
	void OnDisallowedDeliveryQuestList(CInPacket &arg0);

public:
	void OnAskWhetherUsePamsSong(CInPacket &iPacket);

public:
	static void AskWhetherUsePamsSong();

public:
	ZList<unsigned long> &GetWorldMapQuestMobList();

public:
	ZArray<WORLDMAPQUESTDEMANDITEM> &GetWorldMapQuestDemandItem();

public:
	uint16_t GetWorldMapQuestID() const;

public:
	void SetWorldMapQuestID(uint16_t usQuestID);

public:
	void ResetWorldMapQuestDemand();

public:
	void AddWorldMapQuestDemandMob(unsigned long dwFlag);

public:
	void AddWorldMapQuestDemandItem(unsigned long dwDemandItemID, unsigned long dwDemandMobID);

public:
	int32_t IsInWorldMapQuestDemand(unsigned long dwMobID);

public:
	int32_t IsWorthlessQuest(uint16_t usQuestID);

public:
	int32_t IsNearStartQuest(uint16_t usQuestID);

public:
	int32_t IsShowOnlyWorthyQuests() const;

public:
	void SetShowOnlyWorthyQuests(int32_t arg0);

public:
	void SetShowWorthlessQuestFromConfig();

public:
	CWvsContext &operator=(CWvsContext &arg0);

public:
	static CWvsContext &_op_assign_636(CWvsContext *pThis, CWvsContext &arg0);
};
STATIC_ASSERT_SIZE(CWvsContext, 16984);
class CUISkillDecEX : public CDialog
{
	// Nested
public:
	enum ID_CTRL_
	{
		ID_CTRL_TAB = 2000,
		ID_CTRL_SCR_ITEM = 2001,
		ID_CTRL_BT_UP0 = 2010
	};
	enum k
	{
		kTab_Y = 69,
		kScrSkill_X = 150,
		kScrSkill_Y = 95,
		kScrSkill_Len = 153,
		kSkillInfo_X = 9,
		kSkillInfo_Y = 95
	};
	enum SKILL_PER_PAGE
	{
		SKILL_PER_PAGE = 4
	};
	// Fields
protected:
	ZArray<long> m_aSkillRoot;

protected:
	ZRef<CCtrlTab> m_pTab;

protected:
	ZRef<CCtrlScrollBar> m_pSBSkill;

protected:
	std::array<ZRef<CCtrlButton>, 4> m_apBtDown;

protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	SKILLROOT m_SkillRootVisible;

protected:
	long m_nTabPos{};

protected:
	long m_nDecSkillID{};

protected:
	long m_nItemLevel{};
	// Methods
public:
	virtual ~CUISkillDecEX();

public:
	void _dtor_0();

public:
	CUISkillDecEX(const CUISkillDecEX &arg0);

public:
	void _ctor_1(const CUISkillDecEX &arg0);

public:
	CUISkillDecEX();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	void CreateSkillDecDlg();

public:
	virtual void OnDestroy();

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Draw(const tagRECT *arg0);

public:
	void ResetInfo();

public:
	void GetResult(long &arg0);

public:
	void SetOption(long arg0);

public:
	long GetCurTab();

protected:
	void OnTabChanged(long nTab);

protected:
	void OnSkillDecButton(long nIdx);

protected:
	void SetSkillRootList();

protected:
	void SetTabItems();

protected:
	void SetScrollBar();

protected:
	void SetButtons();

protected:
	int32_t IsEnableSkill(const SKILLENTRY *p);

protected:
	int32_t IsRequiredSkill(long nReqSkillID);

protected:
	long GetExcessSP(long arg0);

protected:
	const SKILLROOT *GetSkillRootVisible(int32_t bReload);

public:
	CUISkillDecEX &operator=(const CUISkillDecEX &arg0);

public:
	static CUISkillDecEX &_op_assign_24(CUISkillDecEX *pThis, const CUISkillDecEX &arg0);
};
STATIC_ASSERT_SIZE(CUISkillDecEX, 232);

// 86FD18 16984
extern CWvsContext g_context;


static long _anon__GetGuildSkillLevel(const CharacterData& cd, long itemid)
{
    return CWvsContext::ms_pInstance->GetGuildSkillLevel(itemid);
}

static int get_screen_height()
{
    return CWvsContext::GetInstance()->GetScreenHeight();
}

static int get_screen_width()
{
    return CWvsContext::GetInstance()->GetScreenWidth();
}

static int get_adjust_cy()
{
    return CWvsContext::GetInstance()->GetAdjustCenterY();
}

int32_t __cdecl _anon__IsGuildSupplyQuest(uint16_t usQuestID);
int32_t __cdecl TryToggleTab(CUIWnd *arg0);
