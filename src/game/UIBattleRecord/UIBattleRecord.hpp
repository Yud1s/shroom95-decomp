// UIBattleRecord.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UIWnd/UIWnd.hpp"
#include "Dialog/Dialog.hpp"
#include "UIToolTip/UIToolTip.hpp"

class CCtrlEdit;
class CCtrlTab;
class CCtrlCheckBox;
class CCtrlTab;

// Level: 1 0x11748
class CUIBattleRecord;

class CUIBattleRecord : public CUIWnd, public TSingleton<CUIBattleRecord>
{
	// Nested
public:
	class CInputDlg : public CDialog
	{
		// Nested
	public: enum  ID_CTRL_INPUT_EDIT
{
	ID_CTRL_INPUT_EDIT = 3000
};
		// Fields
	private:
		long m_nSetNum{};

	private:
		ZXString<char> m_sSetText;

	private:
		int32_t m_bNum{};

	private:
		ZRef<CCtrlEdit> m_pEditTime;
		// Methods
	public:
		virtual ~CInputDlg();

	public:
		void _dtor_0();

	public:
		CInputDlg(const CUIBattleRecord::CInputDlg &arg0);

	public:
		void _ctor_1( const CUIBattleRecord::CInputDlg &arg0);

	public:
		CInputDlg(long nX, long nY, int32_t bNum);

	public:
		void _ctor_0( long nX, long nY, int32_t bNum);

	public:
		virtual void OnCreate(void *pData);

	public:
		virtual void OnKey(uint32_t wParam, int32_t lParam);

	public:
		long GetSetNum();

	public:
		ZXString<char> GetComment();

	public:
		CUIBattleRecord::CInputDlg &operator=(const CUIBattleRecord::CInputDlg &arg0);

	public:
		static CUIBattleRecord::CInputDlg &_op_assign_7(CUIBattleRecord::CInputDlg *pThis, const CUIBattleRecord::CInputDlg &arg0);
	};

public:
	enum  k
{
	kWidth = 200,
	kHeight = 250,
	kWidthExpanded = 450,
	kBtClose_X = 170,
	kBtClose_Y = 6,
	kBtFold_X = 155,
	kBtFold_Y = 6,
	kBtToggle_X = 155,
	kBtToggle_Y = 6,
	kBtOnOff_X = 140,
	kBtOnOff_Y = 6,
	kTab_X = 3,
	kTab_Y = 23,
	kTab_Width = 120,
	kTab_Count = 4,
	kBtTabClear_X = 10,
	kBtTabClear_Y = 233,
	kBtAllClear_X = 30,
	kBtAllClear_Y = 233,
	kBtTimeSet_X = 170,
	kBtTimeSet_Y = 210,
	kBtTimerStop_X = 155,
	kBtTimerStop_Y = 210,
	kBtSave_X = 170,
	kBtSave_Y = 233
};
enum  ID_CTRL_
{
	ID_CTRL_UIBATTLERECORD_TAB = 2000,
	ID_CTRL_UIBATTLERECORD_BT_TABCLEAR = 2001,
	ID_CTRL_UIBATTLERECORD_BT_ALLCLEAR = 2002,
	ID_CTRL_UIBATTLERECORD_BT_TIMERSET = 2003,
	ID_CTRL_CHECKBOX_INCLUDE_DOT_PERATTACK = 2004,
	ID_CTRL_CHECKBOX_INCLUDE_SUMMON_PERATTACK = 2005,
	ID_CTRL_UIBATTLERECORD_BT_FOLD = 2006,
	ID_CTRL_UIBATTLERECORD_BT_ONOFF = 2007,
	ID_CTRL_UIBATTLERECORD_BT_TIMERSTOP = 2008
};

	// Fields
protected:
	unsigned long m_tNextUpdate{};

protected:
	int32_t m_bExtended{};

protected:
	ZRef<CCtrlTab> m_pTab;

protected:
	ZRef<CCtrlButton> m_pBtTabClear;

protected:
	ZRef<CCtrlButton> m_pBtAllClear;

protected:
	ZRef<CCtrlButton> m_pBtTimerSet;

protected:
	ZRef<CCtrlButton> m_pBtSave;

protected:
	ZRef<CCtrlButton> m_pBtRecentSaveView;

protected:
	ZRef<CCtrlButton> m_pBtRecentSaveSel;

protected:
	ZRef<CCtrlButton> m_pBtFold;

protected:
	ZRef<CCtrlButton> m_pBtOnOff;

protected:
	ZRef<CCtrlButton> m_pBtTimerStop;

protected:
	ZRef<CCtrlCheckBox> m_pCBIncludeDot;

protected:
	ZRef<CCtrlCheckBox> m_pCBIncludeSummon;

protected:
	CUIToolTip m_uiBtToolTip;

protected:
	long m_nCurSelRecentSave{};

protected:
	unsigned long m_tSetTime{};

protected:
	unsigned long m_tStopRemainTime{};

protected:
	int32_t m_bToggle{};
	// Methods
public:
	virtual ~CUIBattleRecord();

public:
	void _dtor_0();

public:
	CUIBattleRecord(const CUIBattleRecord &arg0);

public:
	void _ctor_1( const CUIBattleRecord &arg0);
	CTOR_DEFAULT(CUIBattleRecord);
public:
	CUIBattleRecord();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *arg0);

public:
	virtual void OnDestroy();

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void Update();

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	void SetNextUpdateTime();

public:
	void SetBtToolTip(ZRef<CCtrlButton> pCurrentBt, const char *sDesc);

protected:
	void OnTabChanged(long nTab);

protected:
	void Toggle();

	CLASS_RTTI_(CUIBattleRecord, CUIWnd);

public:
	CUIBattleRecord &operator=(const CUIBattleRecord &arg0);

public:
	static CUIBattleRecord &_op_assign_16(CUIBattleRecord *pThis, const CUIBattleRecord &arg0);
};
STATIC_ASSERT_SIZE(CUIBattleRecord, 5576);


