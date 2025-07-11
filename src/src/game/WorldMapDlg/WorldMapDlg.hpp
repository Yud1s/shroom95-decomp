// WorldMapDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UIToolTip/UIToolTip.hpp"
#include "Dialog/Dialog.hpp"
#include "CtrlButton/CtrlButton.hpp"
#include "CtrlWnd/CtrlWnd.hpp"

// Level: 0 0xb885
struct WORLDMAP_ITEM;
// Level: 1 0x13503
class CCtrlButtonQuestToggle;
// Level: 1 0xe911
class CWorldMapDlg;

struct WORLDMAP_USERINFO {
  /* 0x0000 */ public: uint32_t dwFieldID{};
  /* 0x0004 */ public: ZXString<char> sCharacterName;
  /* 0x0008 */ public: int32_t bMarriageCouple{};
  
  /*public: WORLDMAP_USERINFO(const WORLDMAP_USERINFO&);
  public: WORLDMAP_USERINFO();
  public: ~WORLDMAP_USERINFO();
  public: WORLDMAP_USERINFO& operator=(const WORLDMAP_USERINFO&);
  public: void* __vecDelDtor(uint32_t);*/
};

struct WORLDMAP_ITEM
{
	// Nested
public:
	enum PosType
	{
		NONE = 0,
		USER_LOCAL = 1,
		USER_PARTY = 2,
		USER_MARRIAGECOUPLE = 3
	};
	// Fields
public:
	long nX{};

public:
	long nY{};

public:
	long nType{};

public:
	int32_t bNoToolTip{};

public:
	ZXString<char> sStreetName;

public:
	ZXString<char> sMapName;

public:
	ZXString<char> sMapDesc;

public:
	WORLDMAP_ITEM::PosType ePosType;

public:
	_x_com_ptr<IWzGr2DLayer> pLayer;

public:
	int32_t bHasQuestNpc{};

public:
	_x_com_ptr<IWzGr2DLayer> pLayer_NpcMark;

public:
	int32_t bHasQuestMob{};

public:
	ZList<unsigned long> lQuestMobTemplateID;

public:
	ZArray<unsigned short> aStartQuest;

public:
	_x_com_ptr<IWzGr2DLayer> pLayer_QuestMark;

public:
	_x_com_ptr<IWzCanvas> pPathImg;

public:
	ZArray<unsigned long> adwField;

public:
	ZList<long> lUserIdx;

public:
	ZList<unsigned long> lNpcTemplateID;

public:
	ZList<unsigned long> lMobTemplateID;
	// Methods
public:
	~WORLDMAP_ITEM();

public:
	void _dtor_0();

public:
	WORLDMAP_ITEM(const WORLDMAP_ITEM &arg0);

public:
	void _ctor_1(const WORLDMAP_ITEM &arg0);

public:
	WORLDMAP_ITEM();

public:
	void _ctor_0();

public:
	void ResetLayer();

public:
	WORLDMAP_ITEM &operator=(const WORLDMAP_ITEM &arg0);

public:
	static WORLDMAP_ITEM &_op_assign_4(WORLDMAP_ITEM *pThis, const WORLDMAP_ITEM &arg0);
};
STATIC_ASSERT_SIZE(WORLDMAP_ITEM, 144);
class CCtrlButtonQuestToggle : public CCtrlButton
{
	// Nested
	// Fields
public:
	int32_t m_bQuestToggle{};
	// Methods
public:
	virtual ~CCtrlButtonQuestToggle();

public:
	void _dtor_0();

public:
	CCtrlButtonQuestToggle(const CCtrlButtonQuestToggle &arg0);

public:
	void _ctor_1(const CCtrlButtonQuestToggle &arg0);

public:
	CCtrlButtonQuestToggle();

public:
	void _ctor_0();

public:
	virtual void SetEnable(int32_t bEnable);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

	CLASS_RTTI_(CCtrlButtonQuestToggle, CCtrlButton);

public:
	CCtrlButtonQuestToggle &operator=(const CCtrlButtonQuestToggle &arg0);

public:
	static CCtrlButtonQuestToggle &_op_assign_9(CCtrlButtonQuestToggle *pThis, const CCtrlButtonQuestToggle &arg0);
};
STATIC_ASSERT_SIZE(CCtrlButtonQuestToggle, 2784);
class CWorldMapDlg : public CDialog
{
	// Nested
public:
	struct WORLDMAP_LINK
	{
		// Nested
		// Fields
	public:
		ZXString<char> sToolTip;

	public:
		ZXString16 sLinkMap;

	public:
		_x_com_ptr<IWzCanvas> pLinkImg;
		// Methods
	public:
		~WORLDMAP_LINK();

	public:
		void _dtor_0();

	public:
		WORLDMAP_LINK(const CWorldMapDlg::WORLDMAP_LINK &arg0);

	public:
		void _ctor_1(const CWorldMapDlg::WORLDMAP_LINK &arg0);

	public:
		WORLDMAP_LINK();

	public:
		void _ctor_0();


	public:
		CWorldMapDlg::WORLDMAP_LINK &operator=(const CWorldMapDlg::WORLDMAP_LINK &arg0);

	public:
		static CWorldMapDlg::WORLDMAP_LINK &_op_assign_3(CWorldMapDlg::WORLDMAP_LINK *pThis, const CWorldMapDlg::WORLDMAP_LINK &arg0);
	};

public:
	enum ID_CTRL_BT_QUEST_TOGGLE
	{
		ID_CTRL_BT_QUEST_TOGGLE = 2000
	};
	// Fields
protected:
	ZXString16 m_sShallowerWorldMap;

protected:
	ZRef<CCtrlButton> m_pBtUIClose;

protected:
	CUIToolTip m_uiToolTip;

protected:
	unsigned long m_dwField{};

protected:
	ZArray<WORLDMAP_USERINFO> m_aUser;

protected:
	long m_nSelectedLink{};

protected:
	long m_nSelectedWMI{};

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasWM;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasTitle;

protected:
	ZArray<_x_com_ptr<IWzCanvas>> m_apCanvasMI;

protected:
	ZArray<WORLDMAP_ITEM> m_aWMItem;

protected:
	ZArray<CWorldMapDlg::WORLDMAP_LINK> m_aWMLink;

protected:
	unsigned long m_dwNpcTemplate{};

protected:
	_x_com_ptr<IWzProperty> m_pCurrentWorldMap;

protected:
	_x_com_ptr<IWzProperty> m_pQuestGuideHighScoreWorldMap;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerTip;

protected:
	ZRef<CCtrlButton> m_pBtQuestToggle;

protected:
	int32_t m_bFoundQuestMob{};

protected:
	int32_t m_bQuestToggle{};

protected:
	long m_nQuestGuideHighScore{};

protected:
	ZList<unsigned long> m_lCurrentMobList;
	// Methods
public:
	virtual ~CWorldMapDlg();

public:
	void _dtor_0();

public:
	CWorldMapDlg(const CWorldMapDlg &arg0);

public:
	void _ctor_1(const CWorldMapDlg &arg0);

public:
	CWorldMapDlg();

public:
	void _ctor_0();
	void _ctor_default()
	{
		_ctor_0();
	}

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnDestroy();

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void ClearToolTip();

public:
	int32_t CreateWorldMapDlg(unsigned long dwField, unsigned long dwNpcTemplate, int32_t bMobMark);

protected:
	int32_t SetWorldMap(_x_com_ptr<IWzProperty> arg0);

protected:
	void SetWorldMapDeeper();

protected:
	void SetWorldMapShallower();

protected:
	int32_t LoadInfo(_x_com_ptr<IWzProperty> pWorldMap);

protected:
	int32_t LoadMapList(_x_com_ptr<IWzProperty> arg0);

protected:
	int32_t LoadMapLink(_x_com_ptr<IWzProperty> arg0);

protected:
	int32_t IsHavingFieldNo(_x_com_ptr<IWzProperty> pWorldMap, unsigned long dwFindFieldID);

protected:
	_x_com_ptr<IWzProperty> GetDeepestWorldMap(unsigned long dwFieldID);

protected:
	_x_com_ptr<IWzProperty> GetDeepestWorldMap_For_NpcMark();

protected:
	void MakeBorder();

protected:
	int32_t CheckSpotInfo(long rx, long ry);

protected:
	int32_t CheckLinkInfo(long rx, long ry);

protected:
	virtual void OnButtonClicked(uint32_t nId);

protected:
	long MakeCurrentMobList(_x_com_ptr<IWzProperty> arg0);

protected:
	void ScoreLinkMap(_x_com_ptr<IWzProperty> arg0);

protected:
	_x_com_ptr<IWzProperty> GetDeepestWorldMap_For_MobMark();

protected:
	void CreateQuestGuideTip();

public:
	int32_t DidFindQuestMob();

public:
	void ClearQuestGuide();

public:
	CWorldMapDlg &operator=(const CWorldMapDlg &arg0);

public:
	static CWorldMapDlg &_op_assign_32(CWorldMapDlg *pThis, const CWorldMapDlg &arg0);
};
STATIC_ASSERT_SIZE(CWorldMapDlg, 2880);
