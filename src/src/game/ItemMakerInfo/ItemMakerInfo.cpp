// ItemMakerInfo.cpp
#include "ItemMakerInfo.hpp"
#include "ItemMakerInfo_regen.ipp"

 ITEM_MAKE_INFO::~ITEM_MAKE_INFO() {
}
void ITEM_MAKE_INFO::_dtor_0() {
	return __sub_001C5990(this, nullptr);
}
 ITEM_MAKE_INFO::ITEM_MAKE_INFO(const ITEM_MAKE_INFO& arg0) {
	_ctor_1( arg0);
}
void ITEM_MAKE_INFO::_ctor_1( const ITEM_MAKE_INFO& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 ITEM_MAKE_INFO::ITEM_MAKE_INFO() {
	//UNIMPLEMENTED; //_ctor_0();
}
void ITEM_MAKE_INFO::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ITEM_MAKE_INFO& ITEM_MAKE_INFO::operator=(const ITEM_MAKE_INFO& arg0) {
	return _op_assign_3(this, arg0);
}
ITEM_MAKE_INFO& ITEM_MAKE_INFO::_op_assign_3(ITEM_MAKE_INFO* pThis, const ITEM_MAKE_INFO& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CItemMakerInfo::~CItemMakerInfo() {
}
void CItemMakerInfo::_dtor_0() {
	return __sub_005C5C20(this, nullptr);
}
 CItemMakerInfo::CItemMakerInfo(const CItemMakerInfo& arg0) {
	_ctor_1( arg0);
}
void CItemMakerInfo::_ctor_1( const CItemMakerInfo& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CItemMakerInfo::CItemMakerInfo() {
	//UNIMPLEMENTED; //_ctor_0();
}
void CItemMakerInfo::_ctor_0() {
	return __sub_005C5B70(this, nullptr);
}
int32_t CItemMakerInfo::Load() {
	return __sub_001C9A70(this, nullptr);
}
int32_t CItemMakerInfo::Load_ItemMakeInfo() {
	return __sub_001C9170(this, nullptr);
}
int32_t CItemMakerInfo::Load_GemEffect() {
	return __sub_001C7A50(this, nullptr);
}
int32_t CItemMakerInfo::Load_MonsterCrystalLevel() {
	return __sub_001C65A0(this, nullptr);
}
int32_t CItemMakerInfo::Load_MonsterTrophy() {
	return __sub_001C6CC0(this, nullptr);
}
void CItemMakerInfo::Unload() {
	__sub_005C5C20(this, nullptr);
}
ZRef<ITEM_MAKE_INFO> CItemMakerInfo::GetItemMakeInfo(long nTargetItem) {
	ZRef<ITEM_MAKE_INFO> ret;
	m_mItem_MakeInfo.GetAt(nTargetItem, &ret);
	return ret;
	//return __sub_001C6190(this, nullptr, nTargetItem);
}
int32_t CItemMakerInfo::GetMakableItemList(long nJob, ZList<long>& lMakableItem) {
	return __sub_001C8160(this, nullptr, nJob, lMakableItem);
}
int32_t CItemMakerInfo::GetMakableItemList_Hidden(long nJob, ZList<long>& lMakableItem) {
	return __sub_001C8180(this, nullptr, nJob, lMakableItem);
}
int32_t CItemMakerInfo::GetGemEffect(long arg0, GEM_EFFECT_INFO& arg1) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CItemMakerInfo::GetMonsterCrystal(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CItemMakerInfo::GetMonsterTrophyLevel(long nMonsterTrophy, long& nLevel) {
	return __sub_001C4DB0(this, nullptr, nMonsterTrophy, nLevel);
}
int32_t CItemMakerInfo::RegisterTargetItem(long arg0, long arg1, _x_com_ptr<IWzProperty> arg2) {
	return __sub_001C81A0(this, nullptr, arg0, arg1, CreateNakedParam(arg2));
}
void CItemMakerInfo::RegisterGemEffect(long nGem, _x_com_ptr<IWzProperty> pInfo) {
	__sub_001C7360(this, nullptr, nGem, CreateNakedParam(pInfo));
}
CItemMakerInfo& CItemMakerInfo::operator=(const CItemMakerInfo& arg0) {
	return _op_assign_17(this, arg0);
}
CItemMakerInfo& CItemMakerInfo::_op_assign_17(CItemMakerInfo* pThis, const CItemMakerInfo& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

