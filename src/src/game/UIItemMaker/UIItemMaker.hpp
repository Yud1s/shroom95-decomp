// UIItemMaker.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"
#include "ItemMakerInfo/ItemMakerInfo.hpp"

#include "UIToolTip/UIToolTip.hpp"
#include "GW/GW.hpp"
#include "UIWnd/UIWnd.hpp"
#include "LayoutMan/LayoutMan.hpp"

struct ITEM_MAKE_INFO;
class CCtrlComboBox;

// Level: 1 0x11069
class CUIItemMaker;

class CUIItemMaker : public CUIWnd, public TSingleton<CUIItemMaker>
{
	// Nested
public:
	struct RECIPE_SLOT
	{
		// Nested
		// Fields
	public:
		ZRef<GW_ItemSlotBase> pItem;

	public:
		tagRECT rect{};

	public:
		_x_com_ptr<IWzCanvas> pCanvas;

	public:
		_x_com_ptr<IWzCanvas> pCanvas_Gray;

	public:
		long nRequired{};

	public:
		long nMounted{};

	public:
		int32_t bSufficient{};
		// Methods
		CTOR_DEFAULT(RECIPE_SLOT)
	public:
		~RECIPE_SLOT();

	public:
		void _dtor_0();

	public:
		RECIPE_SLOT(const CUIItemMaker::RECIPE_SLOT &arg0);

	public:
		void _ctor_1(const CUIItemMaker::RECIPE_SLOT &arg0);

	public:
		RECIPE_SLOT();

	public:
		void _ctor_0();

	public:
		void Clear();

	public:
		CUIItemMaker::RECIPE_SLOT &operator=(const CUIItemMaker::RECIPE_SLOT &arg0);

	public:
		static CUIItemMaker::RECIPE_SLOT &_op_assign_4(CUIItemMaker::RECIPE_SLOT *pThis, const CUIItemMaker::RECIPE_SLOT &arg0);
	};

public:
	struct GEM_SLOT
	{
		// Nested
		// Fields
	public:
		ZRef<GW_ItemSlotBase> pItem;

	public:
		tagRECT rect{};

	public:
		_x_com_ptr<IWzCanvas> pCanvas;

	public:
		_x_com_ptr<IWzCanvas> pCanvas_Gray;
		// Methods
		CTOR_DEFAULT(GEM_SLOT)
	public:
		~GEM_SLOT();

	public:
		void _dtor_0();

	public:
		GEM_SLOT(const CUIItemMaker::GEM_SLOT &arg0);

	public:
		void _ctor_1(const CUIItemMaker::GEM_SLOT &arg0);

	public:
		GEM_SLOT();

	public:
		void _ctor_0();

	public:
		void Clear();

	public:
		CUIItemMaker::GEM_SLOT &operator=(const CUIItemMaker::GEM_SLOT &arg0);

	public:
		static CUIItemMaker::GEM_SLOT &_op_assign_4(CUIItemMaker::GEM_SLOT *pThis, const CUIItemMaker::GEM_SLOT &arg0);
	};

public:
	struct CATALYST_SLOT
	{
		// Nested
		// Fields
	public:
		ZRef<GW_ItemSlotBase> pItem;

	public:
		tagRECT rect{};

	public:
		_x_com_ptr<IWzCanvas> pCanvas;

	public:
		_x_com_ptr<IWzCanvas> pCanvas_Gray;

	public:
		int32_t bMounted{};
		// Methods
	public:
		~CATALYST_SLOT();

	public:
		void _dtor_0();

	public:
		CATALYST_SLOT(const CUIItemMaker::CATALYST_SLOT &arg0);

	public:
		void _ctor_1(const CUIItemMaker::CATALYST_SLOT &arg0);

	public:
		CATALYST_SLOT();

	public:
		void _ctor_0();

	public:
		void Clear();

	public:
		CUIItemMaker::CATALYST_SLOT &operator=(const CUIItemMaker::CATALYST_SLOT &arg0);

	public:
		static CUIItemMaker::CATALYST_SLOT &_op_assign_4(CUIItemMaker::CATALYST_SLOT *pThis, const CUIItemMaker::CATALYST_SLOT &arg0);
	};

public:
	enum ID_CTRL_
	{
		ID_CTRL_BT_START = 20000,
		ID_CTRL_BT_CANCEL = 20001,
		ID_CTRL_COMBOBOX_CATEGORY = 30000,
		ID_CTRL_SCROLLBAR_CATEGORY = 30001,
		ID_CTRL_COMBOBOX_ITEM = 40000,
		ID_CTRL_SCROLLBAR_ITEM = 40001
	};
	enum STATE_
	{
		STATE_NORMAL = 0,
		STATE_READY_TO_MAKE_ITEM = 1,
		STATE_MAKING_ITEM = 2,
		STATE_WAITING_RESULT_FROM_SERVER = 3
	};

	// Fields
protected:
	long m_nState{};

protected:
	ZMap<long, ZList<long>, long> m_mItemCategory_ItemList;

protected:
	long m_nTargetItem{};

protected:
	ZRef<ITEM_MAKE_INFO> m_pRequirement;

protected:
	tagRECT m_rcTargetItem{};

protected:
	ZList<long> m_lMakableItem_Hidden;

protected:
	std::array<CUIItemMaker::RECIPE_SLOT, 6> m_aRecipeSlot;

protected:
	long m_nRecipeClass{};

protected:
	long m_nNumRecipeSlot{};

protected:
	long m_nNumRecipe_Mounted{};

protected:
	std::array<CUIItemMaker::GEM_SLOT, 4> m_aGemSlot;

protected:
	long m_nNumGemSlot{};

protected:
	long m_nNumGem_Mounted{};

protected:
	CUIItemMaker::CATALYST_SLOT m_CatalystSlot;

protected:
	long m_nTI_DisassbleItem{};

protected:
	long m_nSlotPosition_DisassbleItem{};

protected:
	CUIToolTip m_uiToolTip;

protected:
	tagRECT m_rcRecipe_Drop{};

protected:
	tagRECT m_rcCatalyst_Drop{};

protected:
	tagRECT m_rcGem_Drop{};

protected:
	long m_tStart{};

protected:
	long m_nGaugeBarSpeed{};

protected:
	ZRef<CCtrlComboBox> m_pCombobox_Category;

protected:
	ZRef<CCtrlComboBox> m_pCombobox_Item;

protected:
	ZRef<CCtrlButton> m_pBt_Start;

protected:
	ZRef<CCtrlButton> m_pBt_Cancel;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvas_TargetItem;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvas_DisabledSlot;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvas_GaugeBar;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvas_GaugeBarBack;

protected:
	_x_com_ptr<IWzFont> m_pFont_Recipe;

protected:
	_x_com_ptr<IWzFont> m_pFont_Meso;

protected:
	uint32_t m_uMakeSoundCookie{};

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIItemMaker();

public:
	void _dtor_0();

public:
	CUIItemMaker(const CUIItemMaker &arg0);

public:
	void _ctor_1(const CUIItemMaker &arg0);
	CTOR_DEFAULT(CUIItemMaker);

public:
	CUIItemMaker();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void Update();

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	void OnItemMakeResult(long nResult, long nTargetItem, long nItemNum, long nDisassembedItemID);

	CLASS_RTTI_(CUIItemMaker, CUIWnd);

public:
	int32_t PutItem(GW_ItemSlotBase *pItem, long nTI, long nSlotPosition, long x, long y);

public:
	int32_t PutRecipe(GW_ItemSlotBase *pItem, long nTI, long nSlotPosition);

public:
	int32_t PutCatalyst(GW_ItemSlotBase *pItem);

public:
	int32_t PutGem(GW_ItemSlotBase *pItem);

public:
	void EraseDisassembleInfo();

public:
	void ClearItemSlot();

public:
	void SetItemSlot();

protected:
	int32_t DoesSatisfyPreCondition(long nItem);

protected:
	int32_t IsAbleToMake();

protected:
	int32_t IsEnoughMeso();

protected:
	int32_t ConfirmMake();

protected:
	int32_t StartItemMake();

protected:
	int32_t RequestItemMake();

protected:
	int32_t IsExistMakableItem();

protected:
	int32_t IsMatched_WithCurrentSetting(long nTargetItem);

protected:
	int32_t IsMatched_WithCurrentRecipe(RECIPE_INFO Recipe_Info);

protected:
	int32_t IsExistEmptySlot();

protected:
	void Notice_NoEmptySlot(long nTI);

protected:
	void GetMakableItem_ForJob(ZList<long> &lMakableItem);

protected:
	int32_t IsPossibleToDisassemble(long nItemID);

protected:
	void SetComboBox_Category();

protected:
	void SetComboBox_Item();

protected:
	void SetItemSlotRect();

protected:
	void SetRecipe_Normal();

protected:
	void SetRecipe_Hidden();

protected:
	void SetRecipe_MonsterCrystal();

protected:
	void SetRecipe_EquipDisassemble();

protected:
	void SetCatalyst_Normal();

protected:
	void SetCatalyst_Hidden();

protected:
	int32_t RemoveItem_byMouseClick(tagPOINT &pt);

protected:
	int32_t RemoveRecipe(long idx);

protected:
	int32_t RemoveGem(long idx);

protected:
	int32_t RemoveCatalyst();

protected:
	void DrawTargetItem(_x_com_ptr<IWzCanvas> pCanvas);

protected:
	void DrawMeso(_x_com_ptr<IWzCanvas> pCanvas);

protected:
	void DrawRecipe(_x_com_ptr<IWzCanvas> pCanvas);

protected:
	void DrawGem(_x_com_ptr<IWzCanvas> pCanvas);

protected:
	void DrawCatalyst(_x_com_ptr<IWzCanvas> pCanvas);

protected:
	void DrawGaugeBar(_x_com_ptr<IWzCanvas> pCanvas);

protected:
	void SetToolTip(const tagPOINT &pt);

protected:
	void UpdateItemCount();

protected:
	ZXString<char> GetItemCategoryName(long nItem);

protected:
	long GetTotalCostToMake(long nCost);

protected:
	long GetTotalCostToDisassemble();

public:
	CUIItemMaker &operator=(const CUIItemMaker &arg0);

public:
	static CUIItemMaker &_op_assign_61(CUIItemMaker *pThis, const CUIItemMaker &arg0);
};
STATIC_ASSERT_SIZE(CUIItemMaker, 6124);
