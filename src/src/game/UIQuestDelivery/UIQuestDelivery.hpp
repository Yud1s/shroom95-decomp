// UIQuestDelivery.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "AdminShopDlg/AdminShopDlg.hpp"
#include "LayoutMan/LayoutMan.hpp"

struct QuestDeliveryInfo
{
	// Nested
	// Fields
public:
	uint16_t usQuestID{};

public:
	uint16_t usShowQuestID{};

public:
	unsigned long dwNpcTemplateID{};

public:
	long nState{};
};
STATIC_ASSERT_SIZE(QuestDeliveryInfo, 12);

// Level: 1 0x11955
class CUIQuestDelivery;

class CUIQuestDelivery : public CUniqueModeless
{
	// Nested
public:
	enum  ID_CTRL_
{
	ID_CTRL_UIQUESTDELIVERY_SCR_LIST = 2000,
	ID_CTRL_BT_OK = 3000,
	ID_CTRL_BT_CANCEL = 3001
};
enum  UnnamedEnum71993
{
	kWidth = 180,
	kList_Margin_X = 14,
	kList_Margin_Y = 128,
	KList_Width = 202,
	KList_Text_Width = 188,
	KList_Text_Gap = 3,
	kScrList_X = 217,
	kScrList_Y = 123,
	kScrList_Len = 77,
	kScrList_Unit = 17,
	kItems_Per_Page = 4
};
	// Fields
protected:
	ZRef<CCtrlButton> m_pBtOk;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	long m_nSelect{};

protected:
	ZRef<CCtrlScrollBar> m_pSBList;

protected:
	long m_nScrollPos{};

protected:
	_x_com_ptr<IWzProperty> m_pProp;

protected:
	ZArray<ZRef<QuestDeliveryInfo>> m_aQuestInfo;

protected:
	uint16_t m_usQUISelected{};

protected:
	int32_t m_bShowOnlyWorthyQuests{};

protected:
	ZRef<CCtrlButton> m_pBtShowOnlyWorthyQuests;

protected:
	ZRef<CCtrlButton> m_pBtShowAllQuests;

protected:
	long m_nItemPos{};

protected:
	ZRef<CItemInfo::QUESTDELIVERYITEM> m_pItem;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIQuestDelivery();

public:
	void _dtor_0();

public:
	CUIQuestDelivery(const CUIQuestDelivery &arg0);

public:
	void _ctor_1( const CUIQuestDelivery &arg0);

public:
	CUIQuestDelivery(long nItemPos, long nItemID);

public:
	void _ctor_0( long nItemPos, long nItemID);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void ResetInfo();

public:
	void LoadData();

protected:
	void SyncScrollBarWithSelected();

protected:
	long GetQuestIdxFromMousePos(long rx, long ry);

protected:
	int32_t IsOpenFromQUI();

protected:
	int32_t IsShowOnlyWorthyQuests();

protected:
	void ResetShowOnlyWorthyQuests();

protected:
	int32_t IsWorthlessQuest(uint16_t usQuestID);

protected:
	void SetScrollBar();

	CLASS_RTTI_(CUIQuestDelivery, CUniqueModeless);

public:
	CUIQuestDelivery &operator=(const CUIQuestDelivery &arg0);

public:
	static CUIQuestDelivery &_op_assign_21(CUIQuestDelivery *pThis, const CUIQuestDelivery &arg0);
};
STATIC_ASSERT_SIZE(CUIQuestDelivery, 244);


