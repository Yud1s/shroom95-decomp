// UIItemMaker.cpp
#include "UIItemMaker.hpp"
#include "UIItemMaker_regen.ipp"

 CUIItemMaker::~CUIItemMaker() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIItemMaker::_dtor_0() {
	return __sub_003D2130(this, nullptr);
}
 CUIItemMaker::CUIItemMaker(const CUIItemMaker& arg0) {
	_ctor_1( arg0);
}
void CUIItemMaker::_ctor_1( const CUIItemMaker& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIItemMaker::CUIItemMaker() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUIItemMaker::_ctor_0() {
	return __sub_003D1E50(this, nullptr);
}
void CUIItemMaker::OnCreate(void* pData) {
	__sub_003D6340(this, nullptr, pData);
}
void CUIItemMaker::OnDestroy() {
	__sub_003CFF10(this, nullptr);
}
void CUIItemMaker::Draw(const tagRECT* pRect) {
	__sub_003D4980(this, nullptr, pRect);
}
void CUIItemMaker::Update() {
	__sub_003D5D20(this, nullptr);
}
int32_t CUIItemMaker::OnSetFocus(int32_t bFocus) {
	return __sub_003CF5E0(this, nullptr, bFocus);
}
void CUIItemMaker::OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2) {
	__sub_003D5E90(this, nullptr, nId, param1, param2);
}
void CUIItemMaker::OnMouseEnter(int32_t bEnter) {
	__sub_003D20B0(this, nullptr, bEnter);
}
void CUIItemMaker::OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry) {
	__sub_003D5770(this, nullptr, msg, wParam, rx, ry);
}
int32_t CUIItemMaker::OnMouseMove(long rx, long ry) {
	return __sub_003D37F0(this, nullptr, rx, ry);
}
void CUIItemMaker::OnButtonClicked(uint32_t nId) {
	__sub_003D5DC0(this, nullptr, nId);
}
void CUIItemMaker::OnItemMakeResult(long nResult, long nTargetItem, long nItemNum, long nDisassembedItemID) {
	__sub_003D51F0(this, nullptr, nResult, nTargetItem, nItemNum, nDisassembedItemID);
}
int32_t CUIItemMaker::PutItem(GW_ItemSlotBase* pItem, long nTI, long nSlotPosition, long x, long y) {
	return __sub_003D56A0(this, nullptr, pItem, nTI, nSlotPosition, x, y);
}
int32_t CUIItemMaker::PutRecipe(GW_ItemSlotBase* pItem, long nTI, long nSlotPosition) {
	return __sub_003D4AA0(this, nullptr, pItem, nTI, nSlotPosition);
}
int32_t CUIItemMaker::PutCatalyst(GW_ItemSlotBase* pItem) {
	return __sub_003D18B0(this, nullptr, pItem);
}
int32_t CUIItemMaker::PutGem(GW_ItemSlotBase* pItem) {
	return __sub_003D15F0(this, nullptr, pItem);
}
void CUIItemMaker::EraseDisassembleInfo() {
	__sub_003D0680(this, nullptr);
}
void CUIItemMaker::ClearItemSlot() {
	__sub_003D04E0(this, nullptr);
}
void CUIItemMaker::SetItemSlot() {
	__sub_003D4190(this, nullptr);
}
int32_t CUIItemMaker::DoesSatisfyPreCondition(long nItem) {
	return __sub_003D0240(this, nullptr, nItem);
}
int32_t CUIItemMaker::IsAbleToMake() {
	return __sub_003D0450(this, nullptr);
}
int32_t CUIItemMaker::IsEnoughMeso() {
	return __sub_003D1D30(this, nullptr);
}
int32_t CUIItemMaker::ConfirmMake() {
	return __sub_003D3820(this, nullptr);
}
int32_t CUIItemMaker::StartItemMake() {
	return __sub_003D5830(this, nullptr);
}
int32_t CUIItemMaker::RequestItemMake() {
	return __sub_003D58D0(this, nullptr);
}
int32_t CUIItemMaker::IsExistMakableItem() {
	return __sub_003D2380(this, nullptr);
}
int32_t CUIItemMaker::IsMatched_WithCurrentSetting(long nTargetItem) {
	return __sub_003D0A90(this, nullptr, nTargetItem);
}
int32_t CUIItemMaker::IsMatched_WithCurrentRecipe(RECIPE_INFO Recipe_Info) {
	return __sub_003D07C0(this, nullptr, CreateNakedParam(Recipe_Info));
}
int32_t CUIItemMaker::IsExistEmptySlot() {
	return __sub_003D54F0(this, nullptr);
}
void CUIItemMaker::Notice_NoEmptySlot(long nTI) {
	__sub_003D3A40(this, nullptr, nTI);
}
void CUIItemMaker::GetMakableItem_ForJob(ZList<long>& lMakableItem) {
	__sub_003D3E60(this, nullptr, lMakableItem);
}
int32_t CUIItemMaker::IsPossibleToDisassemble(long nItemID) {
	return __sub_003D3C70(this, nullptr, nItemID);
}
void CUIItemMaker::SetComboBox_Category() {
	__sub_003D5EE0(this, nullptr);
}
void CUIItemMaker::SetComboBox_Item() {
	__sub_003D5AF0(this, nullptr);
}
void CUIItemMaker::SetItemSlotRect() {
	__sub_003CF4D0(this, nullptr);
}
void CUIItemMaker::SetRecipe_Normal() {
	__sub_003D0C60(this, nullptr);
}
void CUIItemMaker::SetRecipe_Hidden() {
	__sub_003D2A30(this, nullptr);
}
void CUIItemMaker::SetRecipe_MonsterCrystal() {
	__sub_003D2690(this, nullptr);
}
void CUIItemMaker::SetRecipe_EquipDisassemble() {
	__sub_003D2860(this, nullptr);
}
void CUIItemMaker::SetCatalyst_Normal() {
	__sub_003D10C0(this, nullptr);
}
void CUIItemMaker::SetCatalyst_Hidden() {
	__sub_003D1390(this, nullptr);
}
int32_t CUIItemMaker::RemoveItem_byMouseClick(tagPOINT& pt) {
	return __sub_003D5130(this, nullptr, pt);
}
int32_t CUIItemMaker::RemoveRecipe(long idx) {
	return __sub_003D35B0(this, nullptr, idx);
}
int32_t CUIItemMaker::RemoveGem(long idx) {
	return __sub_003D06E0(this, nullptr, idx);
}
int32_t CUIItemMaker::RemoveCatalyst() {
	return __sub_003D0770(this, nullptr);
}
void CUIItemMaker::DrawTargetItem(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_003CF610(this, nullptr, CreateNakedParam(pCanvas));
}
void CUIItemMaker::DrawMeso(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_003D2C70(this, nullptr, CreateNakedParam(pCanvas));
}
void CUIItemMaker::DrawRecipe(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_003D2DA0(this, nullptr, CreateNakedParam(pCanvas));
}
void CUIItemMaker::DrawGem(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_003CF780(this, nullptr, CreateNakedParam(pCanvas));
}
void CUIItemMaker::DrawCatalyst(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_003CFA60(this, nullptr, CreateNakedParam(pCanvas));
}
void CUIItemMaker::DrawGaugeBar(_x_com_ptr<IWzCanvas> pCanvas) {
	__sub_003CFC90(this, nullptr, CreateNakedParam(pCanvas));
}
void CUIItemMaker::SetToolTip(const tagPOINT& pt) {
	__sub_003D1A70(this, nullptr, pt);
}
void CUIItemMaker::UpdateItemCount() {
	__sub_003D47A0(this, nullptr);
}
ZXString<char> CUIItemMaker::GetItemCategoryName(long nItem) {
	ZXString<char> ret;
	return *__sub_003D24E0(this, nullptr, &ret, nItem);
}
long CUIItemMaker::GetTotalCostToMake(long nCost) {
	return __sub_003D0820(this, nullptr, nCost);
}
long CUIItemMaker::GetTotalCostToDisassemble() {
	return __sub_003D0990(this, nullptr);
}
CUIItemMaker& CUIItemMaker::operator=(const CUIItemMaker& arg0) {
	return _op_assign_61(this, arg0);
}
CUIItemMaker& CUIItemMaker::_op_assign_61(CUIItemMaker* pThis, const CUIItemMaker& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIItemMaker::RECIPE_SLOT::~RECIPE_SLOT() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIItemMaker::RECIPE_SLOT::_dtor_0() {
	return __sub_003D0100(this, nullptr);
}
 CUIItemMaker::RECIPE_SLOT::RECIPE_SLOT(const CUIItemMaker::RECIPE_SLOT& arg0) {
	_ctor_1( arg0);
}
void CUIItemMaker::RECIPE_SLOT::_ctor_1( const CUIItemMaker::RECIPE_SLOT& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIItemMaker::RECIPE_SLOT::RECIPE_SLOT() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUIItemMaker::RECIPE_SLOT::_ctor_0() {
	return __sub_003D0220(this, nullptr);
}
void CUIItemMaker::RECIPE_SLOT::Clear() {
	__sub_003D0090(this, nullptr);
}
CUIItemMaker::RECIPE_SLOT& CUIItemMaker::RECIPE_SLOT::operator=(const CUIItemMaker::RECIPE_SLOT& arg0) {
	return _op_assign_4(this, arg0);
}
CUIItemMaker::RECIPE_SLOT& CUIItemMaker::RECIPE_SLOT::_op_assign_4(CUIItemMaker::RECIPE_SLOT* pThis, const CUIItemMaker::RECIPE_SLOT& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIItemMaker::GEM_SLOT::~GEM_SLOT() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIItemMaker::GEM_SLOT::_dtor_0() {
	return __sub_003D0160(this, nullptr);
}
 CUIItemMaker::GEM_SLOT::GEM_SLOT(const CUIItemMaker::GEM_SLOT& arg0) {
	_ctor_1( arg0);
}
void CUIItemMaker::GEM_SLOT::_ctor_1( const CUIItemMaker::GEM_SLOT& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIItemMaker::GEM_SLOT::GEM_SLOT() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUIItemMaker::GEM_SLOT::_ctor_0() {
	return __sub_003D0230(this, nullptr);
}
void CUIItemMaker::GEM_SLOT::Clear() {
	__sub_003D0160(this, nullptr);
}
CUIItemMaker::GEM_SLOT& CUIItemMaker::GEM_SLOT::operator=(const CUIItemMaker::GEM_SLOT& arg0) {
	return _op_assign_4(this, arg0);
}
CUIItemMaker::GEM_SLOT& CUIItemMaker::GEM_SLOT::_op_assign_4(CUIItemMaker::GEM_SLOT* pThis, const CUIItemMaker::GEM_SLOT& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIItemMaker::CATALYST_SLOT::~CATALYST_SLOT() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CUIItemMaker::CATALYST_SLOT::_dtor_0() {
	return __sub_003D01C0(this, nullptr);
}
 CUIItemMaker::CATALYST_SLOT::CATALYST_SLOT(const CUIItemMaker::CATALYST_SLOT& arg0) {
	_ctor_1( arg0);
}
void CUIItemMaker::CATALYST_SLOT::_ctor_1( const CUIItemMaker::CATALYST_SLOT& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CUIItemMaker::CATALYST_SLOT::CATALYST_SLOT() {
	UNIMPLEMENTED; //_ctor_0();
}
void CUIItemMaker::CATALYST_SLOT::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CUIItemMaker::CATALYST_SLOT::Clear() {
	__sub_003D01C0(this, nullptr);
}
CUIItemMaker::CATALYST_SLOT& CUIItemMaker::CATALYST_SLOT::operator=(const CUIItemMaker::CATALYST_SLOT& arg0) {
	return _op_assign_4(this, arg0);
}
CUIItemMaker::CATALYST_SLOT& CUIItemMaker::CATALYST_SLOT::_op_assign_4(CUIItemMaker::CATALYST_SLOT* pThis, const CUIItemMaker::CATALYST_SLOT& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

