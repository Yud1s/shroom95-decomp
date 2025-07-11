#include "additional.hpp"

#include "DBBasic/DBBasic.hpp"
#include "ItemInfo/ItemInfo.hpp"
#include "Stat/Stat.hpp"

void Additional::SKILL::Init(_x_com_ptr<IWzProperty>) {
    UNIMPLEMENTED;
}

ZXString<char> Additional::SKILL::GetDesc() {
    UNIMPLEMENTED;
}

void Additional::MOBCATEGORY::Init(_x_com_ptr<IWzProperty>) {
    UNIMPLEMENTED;
}

ZXString<char> Additional::MOBCATEGORY::GetDesc() {
    UNIMPLEMENTED;
}

void Additional::BOSS::Init(_x_com_ptr<IWzProperty>) {
    UNIMPLEMENTED;
}

ZXString<char> Additional::BOSS::GetDesc() {
    UNIMPLEMENTED;
}

void Additional::ELEMBOOST::Init(_x_com_ptr<IWzProperty>) {
    UNIMPLEMENTED;
}

ZXString<char> Additional::ELEMBOOST::GetDesc() {
    UNIMPLEMENTED;
}

void Additional::HPMPCHANGE::Init(_x_com_ptr<IWzProperty>) {
    UNIMPLEMENTED;
}

ZXString<char> Additional::HPMPCHANGE::GetDesc() {
    UNIMPLEMENTED;
}

void Additional::CRITICAL::Init(_x_com_ptr<IWzProperty>) {
    UNIMPLEMENTED;
}

ZXString<char> Additional::CRITICAL::GetDesc() {
    UNIMPLEMENTED;
}

ZXString<char> Additional::CONDITION::GetDesc() const
{
    UNIMPLEMENTED;
}

bool Additional::CONDITION::CheckCondition(const CharacterData &charData, const SecondaryStat &secondaryStat, GW_ItemSlotEquip *itemEquip) const
{
    const auto& cd = const_cast<CharacterData&>(charData);
    const GW_CharacterStat & stats = cd.characterStat;
    const auto& ss = const_cast<SecondaryStat&>(secondaryStat);

    if(nLevel != 0) {
       if(nLevel > stats._ZtlSecureGet_nLevel()) {
           return false;
       }
    }

    if(nJob != 0) {
        if(nJob != stats._ZtlSecureGet_nJob()) {
            return false;
        }
    }

    if(nSTR != 0) {
        if(nSTR > stats._ZtlSecureGet_nSTR()) {
            return false;
        }
    }

    if(nDEX != 0) {
        if(nDEX > stats._ZtlSecureGet_nDEX()) {
            return false;
        }
    }

    if(nINT != 0) {
        if(nINT > stats._ZtlSecureGet_nINT()) {
            return false;
        }
    }

    if(nLUK != 0) {
        if(nLUK > stats._ZtlSecureGet_nLUK()) {
            return false;
        }
    }

    if(nCraft != 0) {
        if(nCraft > ss._ZtlSecureGet_nCraft()) {
            return false;
        }
    }

    if(nItemQuality >= -1) {
        ZRef itemEquipRef((GW_ItemSlotBase*)itemEquip, true);//TODO
        //TODO
       /* auto q = CItemInfo::GetInstance()->CalcEquipItemQuality(itemEquipRef);
        if(nItemQuality > q) {
            return false;
        }*/
    }

    return true;
}

ZRef<Additional::CONDITION> Additional::CONDITION::Load(_x_com_ptr<IWzProperty> pProp)
{
    UNIMPLEMENTED;
}