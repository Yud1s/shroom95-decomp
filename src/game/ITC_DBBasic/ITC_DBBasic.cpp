// ITC_DBBasic.cpp
#include "ITC_DBBasic.hpp"

#include "ItemInfo/ItemInfo.hpp"

static ZRef<SocketOptionInfo> FAKE_ZRef_SocketOptionInfo{};
static ZRef<ItemOptionInfo> FAKE_ZRef_ItemOptionInfo{};

#include "ITC_DBBasic_regen.ipp"

ITCITEM::~ITCITEM()
{
}

void ITCITEM::_dtor_0()
{
    return __sub_00175310(this, nullptr);
}

ITCITEM::ITCITEM(const ITCITEM& arg0)
{
    _ctor_1(arg0);
}

void ITCITEM::_ctor_1(const ITCITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ITCITEM::ITCITEM()
{
    ftITCDateExpired = _D_DB_DATE_19000101;
}

void ITCITEM::_ctor_0()
{
    new(this) ITCITEM();
}

ZRef<ITCITEM> __cdecl ITCITEM::Decode(CInPacket& iPacket)
{
    return __sub_00175710(iPacket);
}

void ITCITEM::Encode(COutPacket& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

ITCITEM& ITCITEM::operator=(const ITCITEM& arg0)
{
    return _op_assign_5(this, arg0);
}

ITCITEM& ITCITEM::_op_assign_5(ITCITEM* pThis, const ITCITEM& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t __cdecl IsITCTradeLimitItem(const GW_ItemSlotBase* pSocket)
{
    return __sub_001753D0(pSocket);
}
