// CashShopBasic.cpp
#include "CashShopBasic.hpp"

static  ZRefCounted_AllocHelper<CS_COMMODITY> FAKE_ZRefCounted_AllocHelper_CS_COMMODITY{};

#include "CashShopBasic_regen.ipp"


int32_t __cdecl load_commodity(_x_com_ptr<IWzProperty> p, ZArray<ZRef<CS_COMMODITY> >& a, _x_com_ptr<IWzProperty> pCashPackage, int32_t bCheckValid) {
	return __sub_0009BCD0(CreateNakedParam(p), a, CreateNakedParam(pCashPackage), bCheckValid);
}
int32_t __cdecl load_category(_x_com_ptr<IWzProperty> p, ZArray<CS_CATEGORY>& a) {
	return __sub_0009C1C0(CreateNakedParam(p), a);
}
long __cdecl read_commodity_entity(_x_com_ptr<IWzProperty> pIter, ZRef<CS_COMMODITY> pCommodity, _x_com_ptr<IWzProperty> pCashPackage, int32_t bCheckValid) {
	return __sub_0009AC30(CreateNakedParam(pIter), CreateNakedParam(pCommodity), CreateNakedParam(pCashPackage), bCheckValid);
}
