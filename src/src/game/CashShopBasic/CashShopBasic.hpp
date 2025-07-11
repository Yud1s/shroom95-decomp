// CashShopBasic.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

struct CS_COMMODITY;
struct CS_CATEGORY;

int32_t __cdecl load_commodity(_x_com_ptr<IWzProperty> p, ZArray<ZRef<CS_COMMODITY> >& a, _x_com_ptr<IWzProperty> pCashPackage, int32_t bCheckValid);
int32_t __cdecl load_category(_x_com_ptr<IWzProperty> p, ZArray<CS_CATEGORY>& a);
long __cdecl read_commodity_entity(_x_com_ptr<IWzProperty> pIter, ZRef<CS_COMMODITY> pCommodity, _x_com_ptr<IWzProperty> pCashPackage, int32_t bCheckValid);
