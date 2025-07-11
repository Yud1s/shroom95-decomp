// UIAccountMoreInfo.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UIWnd/UIWnd.hpp"
#include "Packet/Packet.hpp"

class CCtrlComboBox;
class CCtrlCheckBox;

// Level: 1 0x1179d
class CUIAccountMoreInfo;

class CUIAccountMoreInfo : public CUIWnd, public TSingleton<CUIAccountMoreInfo>
{
	// Nested
public:enum  ID_CTRL_
{
	ID_CTRL_BT_OK = 1000,
	ID_CTRL_BT_CLOSE = 1001,
	ID_CTRL_BT_CANCEL = 1002,
	ID_CTRL_COMBOBOX_AREG_0 = 1003,
	ID_CTRL_COMBOBOX_AREG_1 = 1004,
	ID_CTRL_COMBOBOX_AREG_2 = 1005,
	ID_CTRL_COMBOBOX_BRITHDAY_0 = 1006,
	ID_CTRL_COMBOBOX_BRITHDAY_1 = 1007,
	ID_CTRL_COMBOBOX_BRITHDAY_2 = 1008,
	ID_CTRL_SCROLLBAR_CATEGORY0 = 1009,
	ID_CTRL_SCROLLBAR_CATEGORY1 = 1010,
	ID_CTRL_SCROLLBAR_CATEGORY2 = 1011,
	ID_CTRL_SCROLLBAR_CATEGORY3 = 1012,
	ID_CTRL_SCROLLBAR_CATEGORY4 = 1013,
	ID_CTRL_SCROLLBAR_CATEGORY5 = 1014,
	ID_CTRL_CHECKBOX_PLAYSTYLE_0 = 1015,
	ID_CTRL_CHECKBOX_PLAYSTYLE_1 = 1016,
	ID_CTRL_CHECKBOX_PLAYSTYLE_2 = 1017,
	ID_CTRL_CHECKBOX_PLAYSTYLE_3 = 1018,
	ID_CTRL_CHECKBOX_PLAYSTYLE_4 = 1019,
	ID_CTRL_CHECKBOX_ACTIVITYAREGS_0 = 1020,
	ID_CTRL_CHECKBOX_ACTIVITYAREGS_1 = 1021,
	ID_CTRL_CHECKBOX_ACTIVITYAREGS_2 = 1022,
	ID_CTRL_CHECKBOX_ACTIVITYAREGS_3 = 1023,
	ID_CTRL_CHECKBOX_ACTIVITYAREGS_4 = 1024,
	ID_CTRL_CHECKBOX_ACTIVITYAREGS_5 = 1025,
	ID_CTRL_CHECKBOX_ACTIVITYAREGS_6 = 1026,
	ID_CTRL_CHECKBOX_ACTIVITYAREGS_7 = 1027,
	ID_CTRL_CHECKBOX_ACTIVITYAREGS_8 = 1028,
	ID_CTRL_CHECKBOX_ACTIVITYAREGS_9 = 1029,
	ID_CTRL_CHECKBOX_ACTIVITYAREGS_10 = 1030,
	ID_CTRL_CHECKBOX_ACTIVITYAREGS_11 = 1031,
	ID_CTRL_CHECKBOX_ACTIVITYAREGS_12 = 1032,
	ID_CTRL_CHECKBOX_ACTIVITYAREGS_13 = 1033,
	ID_CTRL_CHECKBOX_ACTIVITYAREGS_14 = 1034,
	ID_CTRL_CHECKBOX_ACTIVITYAREGS_15 = 1035,
	ID_CTRL_CHECKBOX_ACTIVITYAREGS_16 = 1036,
	ID_CTRL_CHECKBOX_ACTIVITYAREGS_17 = 1037,
	ID_CTRL_CHECKBOX_ACTIVITYAREGS_18 = 1038
};
enum  UnnamedEnum66990
{
	kBtClose_X = 377,
	kBtClose_Y = 7,
	kWidth = 398,
	kHeight = 355,
	PlayStyle_CheckBox_Count = 5,
	ActivityAregs_CheckBox_Count = 19,
	AregList_Count = 18
};

	// Fields
private:
	ZRef<CCtrlComboBox> m_pCBAreg0;

private:
	ZRef<CCtrlComboBox> m_pCBAreg1;

private:
	ZRef<CCtrlComboBox> m_pCBBrithDay0;

private:
	ZRef<CCtrlComboBox> m_pCBBrithDay1;

private:
	ZRef<CCtrlComboBox> m_pCBBrithDay2;

private:
	std::array<ZRef<CCtrlCheckBox>, 5> m_pCbPlayStyle;

private:
	std::array<ZRef<CCtrlCheckBox>, 19> m_pCbActivityAregs;

private:
	ZRef<CCtrlButton> m_pBtOK;

private:
	ZRef<CCtrlButton> m_pBtCancel;

private:
	int32_t m_bMoreInfoFirst{};
	// Methods
public:
	virtual ~CUIAccountMoreInfo();

public:
	void _dtor_0();

public:
	CUIAccountMoreInfo(const CUIAccountMoreInfo &arg0);

public:
	void _ctor_1(const CUIAccountMoreInfo &arg0);

	CTOR_DEFAULT(CUIAccountMoreInfo);
public:
	CUIAccountMoreInfo();

public:
	void _ctor_0();

private:
	void LoadCountryName(ZXString<char> arg0, ZRef<CCtrlComboBox> arg1);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	void SetAregComboBox(long nAregIndex);

public:
	void SetBrithDayComboBox();

public:
	void SendLoadAccountMoreInfoRequest();

public:
	void SendSaveAccountMoreInfoRequest();

public:
	void OnLoadAccountMoreInfoResult(CInPacket &iPacket);

public:
	void OnSaveAccountMoreInfoResult(CInPacket &iPacket);

public:
	void SetMoreInfoFirst(int32_t arg0);

	CLASS_RTTI_(CUIAccountMoreInfo, CUIWnd);

public:
	CUIAccountMoreInfo &operator=(const CUIAccountMoreInfo &arg0);

public:
	static CUIAccountMoreInfo &_op_assign_20(CUIAccountMoreInfo *pThis, const CUIAccountMoreInfo &arg0);
};
STATIC_ASSERT_SIZE(CUIAccountMoreInfo, 3076);

