// UIMonsterBook.cpp
#include "UIMonsterBook.hpp"
#include "CtrlEdit/CtrlEdit.hpp"

static ZArray<ZRef<CUIMonsterBook::AREA>> FAKE_ZArray_ZRef_CUIMonsterBook_AREA{};
static ZArray<ZRef<CUIMonsterBook::REWARD>> FAKE_ZArray_ZRef_CUIMonsterBook_REWARD{};
static  ZArray<ZRef<CT_INFO>> FAKE_ZArray_ZRef_CT_INFO{};

static ZRef<CActionMan::MOBACTIONFRAMEENTRY> FAKE_ZRef_CActionMan_MOBACTIONFRAMEENTRY{};

static ZRefCounted_AllocHelper<CUIMonsterBook::REWARD> FAKE_ZRefCounted_AllocHelper_CUIMonsterBook_REWARD{};
static ZRefCounted_AllocHelper<CUIMonsterBook::AREA> FAKE_ZRefCounted_AllocHelper_CUIMonsterBook_AREA{};
static ZRefCounted_AllocHelper<ZRefCountedDummy<CT_INFO>> FAKE_ZRefCounted_AllocHelper_ZRefCountedDummy_CT_INFO{};

#include "UIMonsterBook_regen.ipp"

CUIMonsterBook::~CUIMonsterBook()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIMonsterBook::_dtor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::CUIMonsterBook(const CUIMonsterBook &arg0)
{
	_ctor_1( arg0);
}
void CUIMonsterBook::_ctor_1( const CUIMonsterBook &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::CUIMonsterBook()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CUIMonsterBook::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::Update()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::Draw(const tagRECT *arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::OnCreate(void *arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::OnDestroy()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::OnChildNotify(uint32_t arg0, uint32_t arg1, uint32_t arg2)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::OnButtonClicked(uint32_t arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::OnKey(uint32_t arg0, uint32_t arg1)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::OnMouseButton(uint32_t arg0, uint32_t arg1, long arg2, long arg3)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CUIMonsterBook::OnMouseMove(long arg0, long arg1)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CUIMonsterBook::OnSetFocus(int32_t arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::UpdateUI()
{
	__sub_0040ABC0(this, nullptr);
}
ZRef<MonsterBookCard> CUIMonsterBook::SearchCard(ZXString<char> &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CUIMonsterBook::SelectCard()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CUIMonsterBook::SelectCard(const ZRef<MonsterBookCard> arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::CreateCtrl()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::CreateLayer()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::CreateRect()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::CreateCardTable()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::CreateFontArray()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::ShowButton()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::DrawLeftLayer()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::DrawSelectLayer()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::DrawRightLayer()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::DrawLayer(long nCardCount)
{
	__sub_00408790(this, nullptr, nCardCount);
}
void CUIMonsterBook::SetLeftPage(long nCardCount)
{
	__sub_00408790(this, nullptr, nCardCount);
}
void CUIMonsterBook::SetRightPage(long nCardCount)
{
	__sub_00408790(this, nullptr, nCardCount);
}
void CUIMonsterBook::SetCardSlot(long nCardCount)
{
	__sub_00408790(this, nullptr, nCardCount);
}
void CUIMonsterBook::SetRightTab(long nCardCount)
{
	__sub_00408790(this, nullptr, nCardCount);
}
void CUIMonsterBook::SetBookCover(const ZRef<MonsterBookCard> arg0)
{
	__sub_00409CE0(this, nullptr, CreateNakedParam(arg0));
}
void CUIMonsterBook::LoadMobInfo(const ZRef<MonsterBookCard> arg0)
{
	__sub_00409CE0(this, nullptr, CreateNakedParam(arg0));
}
void CUIMonsterBook::LoadMobAction(unsigned long dwTemplateID, long nCount, ZList<ZRef<CActionMan::MOBACTIONFRAMEENTRY>> &lpFrame)
{
	__sub_004099F0(this, nullptr, dwTemplateID, nCount, lpFrame);
}
ZRef<MonsterBookCard> CUIMonsterBook::GetCard_0(long nGrade, long nList, long nSlot)
{
	ZRef<MonsterBookCard> ret;
	return *__sub_00408FB0(this, nullptr, &ret, nGrade, nList, nSlot);
}
ZRef<MonsterBookCard> CUIMonsterBook::GetCard_1()
{
	return __sub_00409460(this, nullptr);
}
ZRef<MonsterBookCard> CUIMonsterBook::GetCardByPoint(tagPOINT arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CUIMonsterBook::IsBookInfo()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::UpdateCheckList()
{
	__sub_004085E0(this, nullptr);
}
CUIMonsterBook &CUIMonsterBook::operator=(const CUIMonsterBook &arg0)
{
	return _op_assign_42(this, arg0);
}
CUIMonsterBook &CUIMonsterBook::_op_assign_42(CUIMonsterBook *pThis, const CUIMonsterBook &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::CUIContextMenu::~CUIContextMenu()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIMonsterBook::CUIContextMenu::_dtor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::CUIContextMenu::CUIContextMenu(const CUIMonsterBook::CUIContextMenu &arg0)
{
	_ctor_1( arg0);
}
void CUIMonsterBook::CUIContextMenu::_ctor_1( const CUIMonsterBook::CUIContextMenu &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::CUIContextMenu::CUIContextMenu(tagPOINT arg0)
{
	_ctor_0( arg0);
}
void CUIMonsterBook::CUIContextMenu::_ctor_0( tagPOINT arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::CUIContextMenu::OnCreate(void *arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::CUIContextMenu::OnDestroy()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::CUIContextMenu::Draw(const tagRECT *arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::CUIContextMenu::OnButtonClicked(uint32_t arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::CUIContextMenu::OnMouseButton(uint32_t arg0, uint32_t arg1, long arg2, long arg3)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CUIMonsterBook::CUIContextMenu::HitTest(long arg0, long arg1, CCtrlWnd **arg2)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::CUIContextMenu::SetBtEnable(long arg0, int32_t arg1)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CUIMonsterBook::CUIContextMenu::GetResult()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::CUIContextMenu &CUIMonsterBook::CUIContextMenu::operator=(const CUIMonsterBook::CUIContextMenu &arg0)
{
	return _op_assign_11(this, arg0);
}
CUIMonsterBook::CUIContextMenu &CUIMonsterBook::CUIContextMenu::_op_assign_11(CUIMonsterBook::CUIContextMenu *pThis, const CUIMonsterBook::CUIContextMenu &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::CCtrlTab::~CCtrlTab()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIMonsterBook::CCtrlTab::_dtor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::CCtrlTab::CCtrlTab(const CUIMonsterBook::CCtrlTab &arg0)
{
	_ctor_1( arg0);
}
void CUIMonsterBook::CCtrlTab::_ctor_1( const CUIMonsterBook::CCtrlTab &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::CCtrlTab::CCtrlTab()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CUIMonsterBook::CCtrlTab::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::CCtrlTab::CreateCtrl(CWnd *arg0, uint32_t arg1, const tagRECT *arg2, void *arg3)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::CCtrlTab::Draw(long arg0, long arg1, const tagRECT *arg2)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::CCtrlTab::OnMouseButton(uint32_t arg0, uint32_t arg1, long arg2, long arg3)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::CCtrlTab::OnMouseEnter(int32_t arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CUIMonsterBook::CCtrlTab::OnMouseMove(long arg0, long arg1)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CUIMonsterBook::CCtrlTab::OnSetFocus(int32_t arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CUIMonsterBook::CCtrlTab::GetCurTab()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CUIMonsterBook::CCtrlTab::GetTabCount()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::CCtrlTab::SetTab(long arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::CCtrlTab::SetEnable(long nSel, int32_t bEnable)
{
	__sub_00408740(this, nullptr, nSel, bEnable);
}
void CUIMonsterBook::CCtrlTab::SetBlink(long nSel, int32_t bEnable)
{
	__sub_00408740(this, nullptr, nSel, bEnable);
}
int32_t CUIMonsterBook::CCtrlTab::IsEnable(long arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CUIMonsterBook::CCtrlTab::GetState(long arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::CCtrlTab &CUIMonsterBook::CCtrlTab::operator=(const CUIMonsterBook::CCtrlTab &arg0)
{
	return _op_assign_16(this, arg0);
}
CUIMonsterBook::CCtrlTab &CUIMonsterBook::CCtrlTab::_op_assign_16(CUIMonsterBook::CCtrlTab *pThis, const CUIMonsterBook::CCtrlTab &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::CCtrlTab::Info::~Info()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIMonsterBook::CCtrlTab::Info::_dtor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::CCtrlTab::Info::Info(const CUIMonsterBook::CCtrlTab::Info &arg0)
{
	_ctor_1( arg0);
}
void CUIMonsterBook::CCtrlTab::Info::_ctor_1( const CUIMonsterBook::CCtrlTab::Info &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::CCtrlTab::Info::Info()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CUIMonsterBook::CCtrlTab::Info::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::CCtrlTab::Info &CUIMonsterBook::CCtrlTab::Info::operator=(const CUIMonsterBook::CCtrlTab::Info &arg0)
{
	return _op_assign_3(this, arg0);
}
CUIMonsterBook::CCtrlTab::Info &CUIMonsterBook::CCtrlTab::Info::_op_assign_3(CUIMonsterBook::CCtrlTab::Info *pThis, const CUIMonsterBook::CCtrlTab::Info &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::CCtrlLPTab::~CCtrlLPTab()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIMonsterBook::CCtrlLPTab::_dtor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::CCtrlLPTab::CCtrlLPTab(const CUIMonsterBook::CCtrlLPTab &arg0)
{
	_ctor_1( arg0);
}
void CUIMonsterBook::CCtrlLPTab::_ctor_1( const CUIMonsterBook::CCtrlLPTab &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::CCtrlLPTab::CCtrlLPTab()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CUIMonsterBook::CCtrlLPTab::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::CCtrlLPTab::CreateCtrl(CWnd *arg0, uint32_t arg1, const tagRECT *arg2, void *arg3)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::CCtrlLPTab::SetBlink(long arg0, int32_t arg1)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::CCtrlLPTab &CUIMonsterBook::CCtrlLPTab::operator=(const CUIMonsterBook::CCtrlLPTab &arg0)
{
	return _op_assign_5(this, arg0);
}
CUIMonsterBook::CCtrlLPTab &CUIMonsterBook::CCtrlLPTab::_op_assign_5(CUIMonsterBook::CCtrlLPTab *pThis, const CUIMonsterBook::CCtrlLPTab &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::CCtrlRPTab::~CCtrlRPTab()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIMonsterBook::CCtrlRPTab::_dtor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::CCtrlRPTab::CCtrlRPTab(const CUIMonsterBook::CCtrlRPTab &arg0)
{
	_ctor_1( arg0);
}
void CUIMonsterBook::CCtrlRPTab::_ctor_1( const CUIMonsterBook::CCtrlRPTab &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::CCtrlRPTab::CCtrlRPTab()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CUIMonsterBook::CCtrlRPTab::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::CCtrlRPTab::CreateCtrl(CWnd *arg0, uint32_t arg1, const tagRECT *arg2, void *arg3)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::CCtrlRPTab::SetBlink(long arg0, int32_t arg1)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::CCtrlRPTab &CUIMonsterBook::CCtrlRPTab::operator=(const CUIMonsterBook::CCtrlRPTab &arg0)
{
	return _op_assign_5(this, arg0);
}
CUIMonsterBook::CCtrlRPTab &CUIMonsterBook::CCtrlRPTab::_op_assign_5(CUIMonsterBook::CCtrlRPTab *pThis, const CUIMonsterBook::CCtrlRPTab &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::LAYER::~LAYER()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIMonsterBook::LAYER::_dtor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::LAYER::LAYER(const CUIMonsterBook::LAYER &arg0)
{
	_ctor_1( arg0);
}
void CUIMonsterBook::LAYER::_ctor_1( const CUIMonsterBook::LAYER &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::LAYER::LAYER()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CUIMonsterBook::LAYER::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::LAYER &CUIMonsterBook::LAYER::operator=(const CUIMonsterBook::LAYER &arg0)
{
	return _op_assign_3(this, arg0);
}
CUIMonsterBook::LAYER &CUIMonsterBook::LAYER::_op_assign_3(CUIMonsterBook::LAYER *pThis, const CUIMonsterBook::LAYER &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::REWARD::~REWARD()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIMonsterBook::REWARD::_dtor_0()
{
	return __sub_00408D00(this, nullptr);
}
CUIMonsterBook::REWARD::REWARD(const CUIMonsterBook::REWARD &arg0)
{
	_ctor_1( arg0);
}
void CUIMonsterBook::REWARD::_ctor_1( const CUIMonsterBook::REWARD &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::REWARD::REWARD()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CUIMonsterBook::REWARD::_ctor_0()
{
	return __sub_00408C60(this, nullptr);
}
CUIMonsterBook::REWARD &CUIMonsterBook::REWARD::operator=(CUIMonsterBook::REWARD &arg0)
{
	return _op_assign_3(this, arg0);
}
CUIMonsterBook::REWARD &CUIMonsterBook::REWARD::_op_assign_3(CUIMonsterBook::REWARD *pThis, CUIMonsterBook::REWARD &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::AREA::~AREA()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIMonsterBook::AREA::_dtor_0()
{
	return __sub_00409260(this, nullptr);
}
CUIMonsterBook::AREA::AREA(const CUIMonsterBook::AREA &arg0)
{
	_ctor_1( arg0);
}
void CUIMonsterBook::AREA::_ctor_1( const CUIMonsterBook::AREA &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::AREA::AREA()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CUIMonsterBook::AREA::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::AREA &CUIMonsterBook::AREA::operator=(const CUIMonsterBook::AREA &arg0)
{
	return _op_assign_3(this, arg0);
}
CUIMonsterBook::AREA &CUIMonsterBook::AREA::_op_assign_3(CUIMonsterBook::AREA *pThis, const CUIMonsterBook::AREA &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::MOBINFO::~MOBINFO()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIMonsterBook::MOBINFO::_dtor_0()
{
	return __sub_00409C60(this, nullptr);
}
CUIMonsterBook::MOBINFO::MOBINFO(const CUIMonsterBook::MOBINFO &arg0)
{
	_ctor_1( arg0);
}
void CUIMonsterBook::MOBINFO::_ctor_1( const CUIMonsterBook::MOBINFO &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CUIMonsterBook::MOBINFO::MOBINFO()
{
	UNIMPLEMENTED; //_ctor_0();
}
void CUIMonsterBook::MOBINFO::_ctor_0()
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIMonsterBook::MOBINFO::Clear()
{
	__sub_00409C60(this, nullptr);
}
CUIMonsterBook::MOBINFO &CUIMonsterBook::MOBINFO::operator=(const CUIMonsterBook::MOBINFO &arg0)
{
	return _op_assign_4(this, arg0);
}
CUIMonsterBook::MOBINFO &CUIMonsterBook::MOBINFO::_op_assign_4(CUIMonsterBook::MOBINFO *pThis, const CUIMonsterBook::MOBINFO &arg0)
{
	// TODO: No module found for method
	UNIMPLEMENTED;
}
