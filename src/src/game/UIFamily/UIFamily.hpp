// UIFamily.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "WvsContext/WvsContext.hpp"
#include "Packet/Packet.hpp"
#include "LayoutMan/LayoutMan.hpp"
#include "UIWnd/UIWnd.hpp"
#include "UIToolTip/UIToolTip.hpp"

// Level: 1 0xb212
class CUIFamilyChart;
// Level: 1 0xb1e0
class CUIFamily;

class CUIFamilyChart : public CUIWnd, public TSingleton<CUIFamilyChart>
{
	// Nested
public:
	struct FamilyItem : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		unsigned long dwCharacterID{};

	public:
		short nJob{};

	public:
		unsigned char nLevel{};

	public:
		int32_t bOnline{};

	public:
		long nFamousPoint{};

	public:
		long nTotalFamousPoint{};

	public:
		long nTodayParentPoint{};

	public:
		long nTodayGrandParentPoint{};

	public:
		long nChannelID{};

	public:
		long nLoginMin{};

	public:
		ZXString<char> strCharacterName;

	public:
		ZRef<CUIFamilyChart::FamilyItem> pParent;

	public:
		ZArray<ZRef<CUIFamilyChart::FamilyItem>> apChild;
		// Methods
	public:
		virtual ~FamilyItem();

	public:
		void _dtor_0();

	public:
		FamilyItem(const CUIFamilyChart::FamilyItem &arg0);

	public:
		void _ctor_1(const CUIFamilyChart::FamilyItem &arg0);

		CTOR_DEFAULT(FamilyItem)
	public:
		FamilyItem();

	public:
		void _ctor_0();

	public:
		CUIFamilyChart::FamilyItem &operator=(const CUIFamilyChart::FamilyItem &arg0);

	public:
		static CUIFamilyChart::FamilyItem &_op_assign_3(CUIFamilyChart::FamilyItem *pThis, const CUIFamilyChart::FamilyItem &arg0);
	};

public:
	enum kShowChildCount
	{
		kShowChildCount = 2
	};
	enum ID_CTRL_BT_
	{
		ID_CTRL_BT_REGISTER = 2000,
		ID_CTRL_BT_UNREGISTER = 2001
	};
	enum NODE_
	{
		NODE_BOSS = 0,
		NODE_GRANDFATHER = 1,
		NODE_FATHER = 2,
		NODE_ME = 3,
		NODE_BROTHER = 4,
		NODE_CHILD_0 = 5,
		NODE_CHILD_1 = 6,
		NODE_GRANDCHILD_0 = 7,
		NODE_GRANDCHILD_1 = 8,
		NODE_GRANDCHILD_2 = 9,
		NODE_GRANDCHILD_3 = 10,
		NODE_COUNT = 11
	};
	enum k
	{
		kWidth = 578,
		kHeight = 386
	};
	// Fields
private:
	std::array<ZRef<CUIFamilyChart::FamilyItem>, 11> m_apItem;

private:
	ZMap<unsigned long, unsigned long, unsigned long> m_mStatistic;

private:
	ZMap<long, long, long> m_mPrivilege;

private:
	int32_t m_bMine{};

private:
	long m_nSelectedIndex{};

private:
	long m_nOverIndex{};

private:
	ZRef<CCtrlOriginButton> m_pBtRegister;

private:
	ZRef<CCtrlOriginButton> m_pBtUnregister;

private:
	CUIToolTip m_uiToolTip;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIFamilyChart();

public:
	void _dtor_0();

public:
	CUIFamilyChart(const CUIFamilyChart &arg0);

public:
	void _ctor_1(const CUIFamilyChart &arg0);

	CTOR_DEFAULT(CUIFamilyChart)
public:
	CUIFamilyChart();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	int32_t IsMine();

public:
	void DecodeLocalChart(CInPacket &iPacket);

public:
	void SetLoginOrLogout(ZXString<char> strCharacterName, int32_t bLogin);

private:
	long _FindItemByPoint(long rx, long ry);

private:
	void _DrawChartItem(long nIndex);

private:
	int32_t _IsChildNode(long nIndex);

private:
	void _UnregisterCharacter();

private:
	ZXString<char> _GetMineToolTip();

private:
	ZXString<char> _GetOtherToolTip(long nIndex);

	CLASS_RTTI_(CUIFamilyChart, CUIWnd);

public:
	CUIFamilyChart &operator=(const CUIFamilyChart &arg0);

public:
	static CUIFamilyChart &_op_assign_22(CUIFamilyChart *pThis, const CUIFamilyChart &arg0);
};
STATIC_ASSERT_SIZE(CUIFamilyChart, 5640);
class CUIFamily : public CUIWnd, public TSingleton<CUIFamily>
{
	// Nested
public:
enum k
{
	kWidth = 214,
	kHeight = 392,
	kBtClose_X = 192,
	kBtClose_Y = 6
};
enum ID_CTRL_BT_
{
	ID_CTRL_BT_SHOWCHART = 2000,
	ID_CTRL_BT_LEFT = 2001,
	ID_CTRL_BT_RIGHT = 2002,
	ID_CTRL_BT_PRECEPT = 2003,
	ID_CTRL_BT_SPECIAL = 2004,
	ID_CTRL_BT_REGISTER = 2005
};
	// Fields
private:
	ZRef<CCtrlOriginButton> m_pBtRegister;

private:
	ZRef<CCtrlOriginButton> m_pBtPrecept;

private:
	ZRef<CCtrlOriginButton> m_pBtSpecial;

private:
	CUIToolTip m_uiToolTip;

private:
	FamilyInfo &m_FamilyInfo;

private:
	ZArray<ZRef<PrivilegeItem>> &m_apPrivilege;

private:
	long m_nPrivilegeIndex{};

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerPrecept;

private:
	long m_nPreceptPos{};

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIFamily();

public:
	void _dtor_0();

public:
	CUIFamily(const CUIFamily &arg0);

public:
	void _ctor_1(const CUIFamily &arg0);

public:
	CUIFamily(ZArray<ZRef<PrivilegeItem>> &apPrivilege, FamilyInfo &familyInfo);

public:
	void _ctor_0(ZArray<ZRef<PrivilegeItem>> &apPrivilege, FamilyInfo &familyInfo);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Update();

public:
	void ResetFamilyInfo();

private:
	void _MakePreceptLayer();

	CLASS_RTTI_(CUIFamily, CUIWnd);
};
STATIC_ASSERT_SIZE(CUIFamily, 5520);

void _anon_UnregisterParent_(ZRef<CUIFamilyChart::FamilyItem> arg0, ZRef<CUIFamilyChart::FamilyItem> arg2);
void _anon_RegisterJunior_();



void __cdecl _anon_CopyChild_(ZRef<CUIFamilyChart::FamilyItem> *target, ZArray<ZRef<CUIFamilyChart::FamilyItem>> &src, long nCount);
void __cdecl _anon_UnregisterChild_(ZRef<CUIFamilyChart::FamilyItem> pMine, ZRef<CUIFamilyChart::FamilyItem> pChild);
void __cdecl _anon_DrawTextAlign_(_x_com_ptr<IWzCanvas> pCanvas, _x_com_ptr<IWzFont> pFont, long x, long y, long width, const char *str, _anon_Align align);
