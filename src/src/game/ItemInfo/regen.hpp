#pragma once
#include "RegenBase.hpp"
#include "ztl/ztl.h"

#include "Crc32/Crc32.hpp"
#include "UserLocal/UserLocal.hpp"
#include "GW/GW.hpp"

static ZRef<CUserLocal> _FAKE_ZREF_CUSERLOCAL{};
static ZRef<GW_ItemSlotEquip> _FAKE_ZREF_GW_ITEMSLOTEQ{};
static ZRef<CItemInfo::QUESTDELIVERYITEM> __ZREF_QUESTDELIVERYITEM_{};
