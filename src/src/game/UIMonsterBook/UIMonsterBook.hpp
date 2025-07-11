// UIMonsterBook.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Dialog/Dialog.hpp"
#include "ActionMan/ActionMan.hpp"
#include "UIToolTip/UIToolTip.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "Wnd/Wnd.hpp"
#include "UIWnd/UIWnd.hpp"

struct CT_INFO;
class CCtrlEdit;

// Level: 1 0x10d3b
class CUIMonsterBook;

class CUIMonsterBook : public CUIWnd, public TSingleton<CUIMonsterBook>
{
	// Nested
public:
	class CUIContextMenu : public CDialog
	{
		// Nested
	public:
		enum ID_CTRL_BT_RE
		{
			ID_CTRL_BT_REGISTER = 2000,
			ID_CTRL_BT_RELEASE = 2001
		};
		enum BT_
		{
			BT_REGISTER = 0,
			BT_RELEASE = 1,
			BT_NO = 2
		};
		// Fields
	protected:
		std::array<ZRef<CCtrlButton>, 2> m_apButton;

	protected:
		long m_nResult{};
		// Methods
	public:
		virtual ~CUIContextMenu();

	public:
		void _dtor_0();

	public:
		CUIContextMenu(const CUIMonsterBook::CUIContextMenu &arg0);

	public:
		void _ctor_1(const CUIMonsterBook::CUIContextMenu &arg0);

	public:
		CUIContextMenu(tagPOINT arg0);

	public:
		void _ctor_0(tagPOINT arg0);

	public:
		virtual void OnCreate(void *arg0);

	public:
		virtual void OnDestroy();

	public:
		virtual void Draw(const tagRECT *arg0);

	public:
		virtual void OnButtonClicked(uint32_t arg0);

	public:
		virtual void OnMouseButton(uint32_t arg0, uint32_t arg1, long arg2, long arg3);

	public:
		virtual int32_t HitTest(long arg0, long arg1, CCtrlWnd **arg2);

	public:
		void SetBtEnable(long arg0, int32_t arg1);

	public:
		long GetResult();

	public:
		CUIMonsterBook::CUIContextMenu &operator=(const CUIMonsterBook::CUIContextMenu &arg0);

	public:
		static CUIMonsterBook::CUIContextMenu &_op_assign_11(CUIMonsterBook::CUIContextMenu *pThis, const CUIMonsterBook::CUIContextMenu &arg0);
	};

public:
	class CCtrlTab : public CCtrlWnd
	{
		// Nested
	public:
		struct Info : public ZRefCounted
		{
			// Nested
			// Fields
		public:
			int32_t bEnable{};

		public:
			int32_t bInvalidate{};

		public:
			std::array<tagRECT, 4> aRect{};

		public:
			std::array<_x_com_ptr<IWzCanvas>, 4> apCanvas;

		public:
			_x_com_ptr<IWzGr2DLayer> pAniLayer;

		public:
			std::array<_x_com_ptr<IWzProperty>, 4> pBlinkProp;
			// Methods
		public:
			virtual ~Info();

		public:
			void _dtor_0();

		public:
			Info(const CUIMonsterBook::CCtrlTab::Info &arg0);

		public:
			void _ctor_1(const CUIMonsterBook::CCtrlTab::Info &arg0);

		public:
			Info();

		public:
			void _ctor_0();

		public:
			CUIMonsterBook::CCtrlTab::Info &operator=(const CUIMonsterBook::CCtrlTab::Info &arg0);

		public:
			static CUIMonsterBook::CCtrlTab::Info &_op_assign_3(CUIMonsterBook::CCtrlTab::Info *pThis, const CUIMonsterBook::CCtrlTab::Info &arg0);
		};

	public:
		enum STATE
		{
			NORMAL = 0,
			SELECTED = 1,
			MOUSEOVER = 2,
			DISABLED = 3,
			STATE_NO = 4
		};
		// Fields
	protected:
		long m_nTab{};

	protected:
		long m_nTabMouseOver{};

	protected:
		_x_com_ptr<IWzGr2DLayer> m_pLayer;

	protected:
		_x_com_ptr<IWzCanvas> m_pEmptyCanvas;

	protected:
		ZArray<ZRef<CUIMonsterBook::CCtrlTab::Info>> m_apInfo;
		// Methods
	public:
		virtual ~CCtrlTab();

	public:
		void _dtor_0();

	public:
		CCtrlTab(const CUIMonsterBook::CCtrlTab &arg0);

	public:
		void _ctor_1(const CUIMonsterBook::CCtrlTab &arg0);

	public:
		CCtrlTab();

	public:
		void _ctor_0();

	public:
		virtual void CreateCtrl(CWnd *arg0, uint32_t arg1, const tagRECT *arg2, void *arg3);

	public:
		virtual void Draw(long arg0, long arg1, const tagRECT *arg2);

	public:
		virtual void OnMouseButton(uint32_t arg0, uint32_t arg1, long arg2, long arg3);

	public:
		virtual void OnMouseEnter(int32_t arg0);

	public:
		virtual int32_t OnMouseMove(long arg0, long arg1);

	public:
		virtual int32_t OnSetFocus(int32_t arg0);

	public:
		long GetCurTab();

	public:
		long GetTabCount();

	public:
		void SetTab(long arg0);

	public:
		void SetEnable(long nSel, int32_t bEnable);

	public:
		virtual void SetBlink(long nSel, int32_t bEnable);

	public:
		int32_t IsEnable(long arg0);

	protected:
		long GetState(long arg0);

	public:
		CUIMonsterBook::CCtrlTab &operator=(const CUIMonsterBook::CCtrlTab &arg0);

	public:
		static CUIMonsterBook::CCtrlTab &_op_assign_16(CUIMonsterBook::CCtrlTab *pThis, const CUIMonsterBook::CCtrlTab &arg0);
	};

public:
	class CCtrlLPTab : public CUIMonsterBook::CCtrlTab
	{
		// Nested
	public:
		enum BOOK_INFO
		{
			BOOK_INFO = 9
		};
		// Fields
		// Methods
	public:
		virtual ~CCtrlLPTab();

	public:
		void _dtor_0();

	public:
		CCtrlLPTab(const CUIMonsterBook::CCtrlLPTab &arg0);

	public:
		void _ctor_1(const CUIMonsterBook::CCtrlLPTab &arg0);

	public:
		CCtrlLPTab();

	public:
		void _ctor_0();

	public:
		virtual void CreateCtrl(CWnd *arg0, uint32_t arg1, const tagRECT *arg2, void *arg3);

	public:
		virtual void SetBlink(long arg0, int32_t arg1);

	public:
		CUIMonsterBook::CCtrlLPTab &operator=(const CUIMonsterBook::CCtrlLPTab &arg0);

	public:
		static CUIMonsterBook::CCtrlLPTab &_op_assign_5(CUIMonsterBook::CCtrlLPTab *pThis, const CUIMonsterBook::CCtrlLPTab &arg0);
	};

public:
	class CCtrlRPTab : public CUIMonsterBook::CCtrlTab
	{
		// Nested
	public:
		enum INFO_
		{
			INFO_DEFAULT = 0,
			INFO_EPISODE = 1,
			INFO_REWARD = 2,
			INFO_AREA = 3,
			INFO_FIGHT = 4
		};
		// Fields
		// Methods
	public:
		virtual ~CCtrlRPTab();

	public:
		void _dtor_0();

	public:
		CCtrlRPTab(const CUIMonsterBook::CCtrlRPTab &arg0);

	public:
		void _ctor_1(const CUIMonsterBook::CCtrlRPTab &arg0);

	public:
		CCtrlRPTab();

	public:
		void _ctor_0();

	public:
		virtual void CreateCtrl(CWnd *arg0, uint32_t arg1, const tagRECT *arg2, void *arg3);

	public:
		virtual void SetBlink(long arg0, int32_t arg1);

	public:
		CUIMonsterBook::CCtrlRPTab &operator=(const CUIMonsterBook::CCtrlRPTab &arg0);

	public:
		static CUIMonsterBook::CCtrlRPTab &_op_assign_5(CUIMonsterBook::CCtrlRPTab *pThis, const CUIMonsterBook::CCtrlRPTab &arg0);
	};

public:
	struct LAYER
	{
		// Nested
		// Fields
	public:
		int32_t bInvalidate{};

	public:
		_x_com_ptr<IWzGr2DLayer> pLayer;
		// Methods
	public:
		~LAYER();

	public:
		void _dtor_0();

	public:
		LAYER(const CUIMonsterBook::LAYER &arg0);

	public:
		void _ctor_1(const CUIMonsterBook::LAYER &arg0);

	public:
		LAYER();

	public:
		void _ctor_0();

	public:
		CUIMonsterBook::LAYER &operator=(const CUIMonsterBook::LAYER &arg0);

	public:
		static CUIMonsterBook::LAYER &_op_assign_3(CUIMonsterBook::LAYER *pThis, const CUIMonsterBook::LAYER &arg0);
	};

public:
	struct REWARD : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		TSecType<long> nID;

	public:
		ZRef<GW_ItemSlotBase> pItem;
		// Methods
	public:
		virtual ~REWARD();

	public:
		void _dtor_0();

	public:
		REWARD(const CUIMonsterBook::REWARD &arg0);

	public:
		void _ctor_1(const CUIMonsterBook::REWARD &arg0);

	public:
		REWARD();

	public:
		void _ctor_0();

	public:
		CUIMonsterBook::REWARD &operator=(CUIMonsterBook::REWARD &arg0);

	public:
		static CUIMonsterBook::REWARD &_op_assign_3(CUIMonsterBook::REWARD *pThis, CUIMonsterBook::REWARD &arg0);
	};

public:
	struct AREA : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		int32_t bShowStreet{};

	public:
		ZXString<char> sStreet;

	public:
		ZXString<char> sMap;
		// Methods
	public:
		virtual ~AREA();

	public:
		void _dtor_0();

	public:
		AREA(const CUIMonsterBook::AREA &arg0);

	public:
		void _ctor_1(const CUIMonsterBook::AREA &arg0);

	public:
		AREA();

	public:
		void _ctor_0();

	public:
		CUIMonsterBook::AREA &operator=(const CUIMonsterBook::AREA &arg0);

	public:
		static CUIMonsterBook::AREA &_op_assign_3(CUIMonsterBook::AREA *pThis, const CUIMonsterBook::AREA &arg0);
	};

public:
	struct MOBINFO
	{
		// Nested
		// Fields
	public:
		long nCardCount{};

	public:
		ZXString<char> sName;

	public:
		ZXString<char> sHP;

	public:
		ZXString<char> sMP;

	public:
		ZArray<ZArray<ZRef<CT_INFO>>> aapEpisode;

	public:
		ZArray<ZArray<ZRef<CUIMonsterBook::AREA>>> aapArea;

	public:
		ZArray<ZArray<ZRef<CUIMonsterBook::REWARD>>> aapReward;

	public:
		_x_com_ptr<IWzGr2DLayer> pAniLayer;

	public:
		ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>> lpFrame;
		// Methods
	public:
		~MOBINFO();

	public:
		void _dtor_0();

	public:
		MOBINFO(const CUIMonsterBook::MOBINFO &arg0);

	public:
		void _ctor_1(const CUIMonsterBook::MOBINFO &arg0);

	public:
		MOBINFO();

	public:
		void _ctor_0();

	public:
		void Clear();

	public:
		CUIMonsterBook::MOBINFO &operator=(const CUIMonsterBook::MOBINFO &arg0);

	public:
		static CUIMonsterBook::MOBINFO &_op_assign_4(CUIMonsterBook::MOBINFO *pThis, const CUIMonsterBook::MOBINFO &arg0);
	};

public:
	enum k
	{
		kWidth = 475,
		kHeight = 349,
		kBtClose_X = 429,
		kBtClose_Y = 8,
		kBtSearch_X = 175,
		kBtSearch_Y = 29,
		kBtPrevList_X = 48,
		kBtNextList_X = 185,
		kBtListArrow_Y = 285,
		kBtPrevPage_X = 270,
		kBtNextPage_X = 407,
		kBtPageArrow_Y = 285,
		kEditSearch_X = 49,
		kEditSearch_Y = 30,
		kEditSearch_W = 120,
		kEditSearch_H = 15,
		kTabLeft_l = 249,
		kTabLeft_t = 25,
		kTabLeft_r = 50,
		kTabLeft_b = 305,
		kTabRight_l = 439,
		kTabRight_t = 25,
		kTabRight_r = 506,
		kTabRight_b = 220,
		kLeftLayer_X = 40,
		kLeftLayer_Y = 25,
		kLeftLayer_W = 174,
		kLeftLayer_H = 256,
		kRightLayer_X = 240,
		kRightLayer_Y = 20,
		kRightLayer_W = 220,
		kRightLayer_H = 290
	};
	enum ID_CTRL_
	{
		ID_CTRL_BT_SEARCH = 2000,
		ID_CTRL_BT_PREV_MOBLIST = 2001,
		ID_CTRL_BT_NEXT_MOBLIST = 2002,
		ID_CTRL_BT_PREV_MOBPAGE = 2003,
		ID_CTRL_BT_NEXT_MOBPAGE = 2004,
		ID_CTRL_EDIT_SEARCH = 2005,
		ID_CTRL_TAB_LEFTPAGE = 2006,
		ID_CTRL_TAB_RIGHTPAGE = 2007
	};
	enum BT_
	{
		BT_SEARCH = 0,
		BT_PREV_MOBLIST = 1,
		BT_NEXT_MOBLIST = 2,
		BT_PREV_MOBPAGE = 3,
		BT_NEXT_MOBPAGE = 4,
		BT_NO = 5
	};
	enum LAYER_
	{
		LAYER_LEFT = 0,
		LAYER_RIGHT = 1,
		LAYER_SELECT = 2,
		LAYER_NO = 3
	};
	enum UnnamedEnum66971
	{
		CARD_SLOT_NO = 25,
		REWARD_SLOT_NO = 20,
		LINE_PER_PAGE = 11,
		HEIGHT_PER_PAGE = 220
	};
	// Fields
protected:
	long m_nLeftPage{};

protected:
	long m_nRightPage{};

protected:
	long m_nCardSlot{};

protected:
	ZArray<_x_com_ptr<IWzFont>> m_apFont;

protected:
	CUIToolTip m_uiToolTip;

protected:
	ZRef<CUIMonsterBook::CCtrlLPTab> m_pLeftTab;

protected:
	ZRef<CUIMonsterBook::CCtrlRPTab> m_pRightTab;

protected:
	ZRef<CCtrlEdit> m_pEditSearch;

protected:
	std::array<ZRef<CCtrlButton>, 5> m_apButton;

protected:
	std::array<CUIMonsterBook::LAYER, 3> m_aLayer;

protected:
	std::array<tagRECT, 25> m_aCardRect{};

protected:
	std::array<tagRECT, 20> m_aRewardRect{};

protected:
	std::array<ZArray<ZArray<ZRef<MonsterBookCard>>>, 9> m_aCardTable;

protected:
	CUIMonsterBook::MOBINFO m_mobInfo;
	// Methods
public:
	virtual ~CUIMonsterBook();

public:
	void _dtor_0();

public:
	CUIMonsterBook(const CUIMonsterBook &arg0);

public:
	void _ctor_1(const CUIMonsterBook &arg0);

public:
	CUIMonsterBook();

public:
	void _ctor_0();

public:
	virtual void Update();

public:
	virtual void Draw(const tagRECT *arg0);

public:
	virtual void OnCreate(void *arg0);

public:
	virtual void OnDestroy();

public:
	virtual void OnChildNotify(uint32_t arg0, uint32_t arg1, uint32_t arg2);

public:
	virtual void OnButtonClicked(uint32_t arg0);

public:
	virtual void OnKey(uint32_t arg0, uint32_t arg1);

public:
	virtual void OnMouseButton(uint32_t arg0, uint32_t arg1, long arg2, long arg3);

public:
	virtual int32_t OnMouseMove(long arg0, long arg1);

public:
	virtual int32_t OnSetFocus(int32_t arg0);

public:
	void UpdateUI();

public:
	ZRef<MonsterBookCard> SearchCard(ZXString<char> &arg0);

protected:
	long SelectCard();

public:
	long SelectCard(const ZRef<MonsterBookCard> arg0);

	CLASS_RTTI_(CUIMonsterBook, CUIWnd);

protected:
	void CreateCtrl();

protected:
	void CreateLayer();

protected:
	void CreateRect();

protected:
	void CreateCardTable();

protected:
	void CreateFontArray();

protected:
	void ShowButton();

protected:
	void DrawLeftLayer();

protected:
	void DrawSelectLayer();

protected:
	void DrawRightLayer();

protected:
	void DrawLayer(long nCardCount);

protected:
	void SetLeftPage(long nCardCount);

protected:
	void SetRightPage(long nCardCount);

protected:
	void SetCardSlot(long nCardCount);

protected:
	void SetRightTab(long nCardCount);

protected:
	void SetBookCover(const ZRef<MonsterBookCard> arg0);

protected:
	void LoadMobInfo(const ZRef<MonsterBookCard> arg0);

protected:
	void LoadMobAction(unsigned long dwTemplateID, long nCount, ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>> &lpFrame);

protected:
	ZRef<MonsterBookCard> GetCard_0(long nGrade, long nList, long nSlot);

protected:
	ZRef<MonsterBookCard> GetCard_1();

protected:
	ZRef<MonsterBookCard> GetCardByPoint(tagPOINT arg0);

protected:
	int32_t IsBookInfo();

protected:
	void UpdateCheckList();

public:
	CUIMonsterBook &operator=(const CUIMonsterBook &arg0);

public:
	static CUIMonsterBook &_op_assign_42(CUIMonsterBook *pThis, const CUIMonsterBook &arg0);
};
STATIC_ASSERT_SIZE(CUIMonsterBook, 6368);
