// CashShopAdvanced.cpp
#include "CashShopAdvanced.hpp"

static ZMap<__int64, ZRef<CS_COMMODITY_EX>, __int64> FAKE_ZMap___int64_ZRef_CS_COMMODITY_EX___int64{};

#include "CashShopAdvanced_regen.ipp"

 CS_COMMODITY_EX::~CS_COMMODITY_EX() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CS_COMMODITY_EX::_dtor_0() {
	return __sub_0009A390(this, nullptr);
}
 CS_COMMODITY_EX::CS_COMMODITY_EX(const CS_COMMODITY_EX& arg0) {
	_ctor_1( arg0);
}
void CS_COMMODITY_EX::_ctor_1( const CS_COMMODITY_EX& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CS_COMMODITY_EX::CS_COMMODITY_EX() {
	UNIMPLEMENTED; //_ctor_0();
}
void CS_COMMODITY_EX::_ctor_0() {
	return __sub_0009A370(this, nullptr);
}
ZRef<CS_COMMODITY> CS_COMMODITY_EX::ToOldData() {
	return __sub_00099DF0(this, nullptr);
}
int32_t CS_COMMODITY_EX::IsMulti() {
	return __sub_00099910(this, nullptr);
}
uint32_t CS_COMMODITY_EX::GetPackedCount() {
	return __sub_000999C0(this, nullptr);
}
void CS_COMMODITY_EX::Encode(COutPacket& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CS_COMMODITY_EX::Decode(CInPacket& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CS_COMMODITY_EX::EncodeModifiedData(COutPacket& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CS_COMMODITY_EX::DecodeModifiedData(CInPacket& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CS_COMMODITY_EX& CS_COMMODITY_EX::operator=(CS_COMMODITY_EX& arg0) {
	return _op_assign_10(this, arg0);
}
CS_COMMODITY_EX& CS_COMMODITY_EX::_op_assign_10(CS_COMMODITY_EX* pThis, CS_COMMODITY_EX& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CS_COMMODITY_EX& CS_COMMODITY_EX::operator=(CS_COMMODITY& arg0) {
	return _op_assign_11(this, arg0);
}
CS_COMMODITY_EX& CS_COMMODITY_EX::_op_assign_11(CS_COMMODITY_EX* pThis, CS_COMMODITY& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CS_COMMODITY_EX::GetMinPrice() {
	return __sub_000C67C0(this, nullptr);
}
long CS_COMMODITY_EX::GetMaxPrice() {
	return __sub_000C67C0(this, nullptr);
}
 CWvsCommodityEx::~CWvsCommodityEx() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CWvsCommodityEx::_dtor_0() {
	return __sub_0009A480(this, nullptr);
}
 CWvsCommodityEx::CWvsCommodityEx(const CWvsCommodityEx& arg0) {
	_ctor_1( arg0);
}
void CWvsCommodityEx::_ctor_1( const CWvsCommodityEx& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CWvsCommodityEx::CWvsCommodityEx() {
	UNIMPLEMENTED; //_ctor_0();
}
void CWvsCommodityEx::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void CWvsCommodityEx::LoadCommodityEx() {
	__sub_0009A480(this, nullptr);
}
ZArray<ZRef<CS_COMMODITY_EX> >& CWvsCommodityEx::GetCommodityEx() {
	return __sub_00099920(this, nullptr);
}
const ZRef<CS_COMMODITY_EX> CWvsCommodityEx::GetCommodityExByIndex(long nIdx) {
	return __sub_00099E20(this, nullptr, nIdx);
}
long CWvsCommodityEx::GetCommodityExIndexBySN(long nSN) {
	return __sub_000999D0(this, nullptr, nSN);
}
const ZRef<CS_COMMODITY_EX> CWvsCommodityEx::GetCommodityExBySN(long nSN) {
	return __sub_0009A960(this, nullptr, nSN);
}
void __cdecl CWvsCommodityEx::_SortByPrice(ZArray<ZRef<CS_COMMODITY_EX> >& array, uint32_t start, uint32_t count, int32_t bAscending) {
	__sub_00099E50(array, start, count, bAscending);
}
void __cdecl CWvsCommodityEx::_SortBySN(ZArray<ZRef<CS_COMMODITY_EX> >& array, uint32_t start, uint32_t count, int32_t bAscending) {
	__sub_0009A040(array, start, count, bAscending);
}
void __cdecl CWvsCommodityEx::_SortByCategory(ZArray<ZRef<CS_COMMODITY_EX> >& arg0, uint32_t arg1, uint32_t arg2, int32_t arg3) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void __cdecl CWvsCommodityEx::_UnpackByCategory(ZArray<ZRef<CS_COMMODITY_EX> >& arg0, long arg1, long arg2) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void __cdecl CWvsCommodityEx::_ProcessItemsInMultipleCategory(ZArray<ZRef<CS_COMMODITY_EX> >& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void __cdecl CWvsCommodityEx::__MakeShowOnOtherCategory(CWvsCommodityEx::_CommItem& arg0, CWvsCommodityEx::_CommItem& arg1) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void __cdecl CWvsCommodityEx::__TryAddToPackedListIfDifferent(ZRef<CS_COMMODITY_EX>& arg0, ZRef<CS_COMMODITY_EX>& arg1) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CWvsCommodityEx& CWvsCommodityEx::operator=(const CWvsCommodityEx& arg0) {
	return _op_assign_15(this, arg0);
}
CWvsCommodityEx& CWvsCommodityEx::_op_assign_15(CWvsCommodityEx* pThis, const CWvsCommodityEx& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CWvsCommodityEx::_CommItem::~_CommItem() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CWvsCommodityEx::_CommItem::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CWvsCommodityEx::_CommItem::_CommItem(const CWvsCommodityEx::_CommItem& arg0) {
	_ctor_1( arg0);
}
void CWvsCommodityEx::_CommItem::_ctor_1( const CWvsCommodityEx::_CommItem& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CWvsCommodityEx::_CommItem::_CommItem() {
	UNIMPLEMENTED; //_ctor_0();
}
void CWvsCommodityEx::_CommItem::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CWvsCommodityEx::_CommItem& CWvsCommodityEx::_CommItem::operator=(const CWvsCommodityEx::_CommItem& arg0) {
	return _op_assign_3(this, arg0);
}
CWvsCommodityEx::_CommItem& CWvsCommodityEx::_CommItem::_op_assign_3(CWvsCommodityEx::_CommItem* pThis, const CWvsCommodityEx::_CommItem& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

