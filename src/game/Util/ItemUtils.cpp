#include "macros.h"
#include "ItemUtils.hpp"

#include <ActionFrame/ActionFrame.hpp>
#include <BasicSystem/BasicSystem.hpp>
#include <ItemInfo/ItemInfo.hpp>
#include <StringDecoder/StringDecoder.hpp>

#include "asm_helper.h"

int GetWeaponType(int nItemId)
{
    if (nItemId / 100000 == 13)
        return 1;
    else
        return nItemId / 100000 != 14 ? 0 : 2;
}

bool is_wildhunter_jaguar_vehicle(int nVehicleID)
{
    std::array<int, 6> RIDING_WILDHUNTER_JAGUAR = {
        1932015,
        1932030,
        1932031,
        1932032,
        1932033,
        1932036

    };

    return std::find(RIDING_WILDHUNTER_JAGUAR.begin(), RIDING_WILDHUNTER_JAGUAR.end(), nVehicleID) !=
        RIDING_WILDHUNTER_JAGUAR.end();
}

bool is_wildhunter_jaguar_vehicle_0(int nVehicleID)
{
    std::array RIDING_WILDHUNTER_JAGUAR_0 = {
        0,
        1932015,
        1932030,
        1932031,
        1932032,
        1932033,
        1932036

    };

    return std::find(RIDING_WILDHUNTER_JAGUAR_0.begin(), RIDING_WILDHUNTER_JAGUAR_0.end(), nVehicleID) !=
        RIDING_WILDHUNTER_JAGUAR_0.end();
}

bool is_random_box_item(int itemId)
{
    if ((((itemId != 0x4fae70) && (itemId != 0x4fa6b0)) && (itemId != 0x4fa6b1)) &&
        (itemId != 0x4fa6b2))
    {
        return false;
    }
    return true;
}

bool is_changemaplepoint_item(int nItemID)
{
    return nItemID == 5200009 || nItemID == 5200010;
}

bool is_event_vehicle_type1(long nItemID)
{
    return nItemID >= 1932001 && nItemID <= 1932002;
}

bool is_entrustedshop_item(int itemId)
{
    return itemId / 10000 == 514 || itemId / 10000 == 503;
}

bool is_pigmy_egg(int itemId)
{
    return itemId / 10000 == 0x1a1;
}

bool is_wedding_ring_item(int nItemID)
{
    return nItemID == 1112803 || nItemID == 1112806 || nItemID == 1112807 || nItemID == 1112809;
}

bool is_wedding_receipt_item(int nItemID)
{
    return nItemID == 4031481 || nItemID == 4031376 || nItemID == 4031480 || nItemID == 4031375;
}

bool is_treat_singly_0(int nItemID)
{
    auto v1 = nItemID / 1000000;
    return nItemID / 1000000 != 2 && v1 != 3 && v1 != 4 || nItemID / 10000 == 207 || nItemID / 10000 == 233;
}

bool is_skill_effect_weapon(int itemId)
{
    return itemId / 100000 == 0x10;
}

bool is_wedding_cantdrop_item(int nItemID)
{
    return nItemID == 4031373 || nItemID == 4031374;
}

bool is_itemoption_upgrade_item(int itemId)
{
    return itemId / 100 == 0x500e;
}

bool is_shield(int itemId)
{
    return itemId / 10000 == 0x6d;
}

bool is_hyper_upgrade_item(int itemId)
{
    return itemId / 100 == 0x500d;
}

bool is_invitation_guest_item(int nItemID)
{
    return nItemID == 4031406 || nItemID == 4031407;
}

bool is_mobsummon_item(int itemId)
{
    return itemId / 10000 == 0xd2;
}

bool is_ui_open_item(int itemId)
{
    return itemId / 10000 == 0x1b0;
}

int to_pet_ring_bodypart(int idx, int itemId)
{
    //004ff098 TODO(game)
    /*
    if ( nItemID == 1832000 )
    return g_anPetRingBodyPart[ 1+ 2 * nIdx];
  else
    return g_anPetRingBodyPart[2 * nIdx];
     */

    return 0; // TODO
}

bool is_pet_equip_item_idx(int nIdx)
{
    return nIdx == 14 || nIdx > 20 && nIdx <= 48;
}

bool is_pet_equip_item(int itemId)
{
    return itemId / 100000 == 0x12;
}

bool is_engagement_ring_item(int nItemID)
{
    return nItemID == 4031357
        || nItemID == 4031358
        || nItemID == 4031359
        || nItemID == 4031360
        || nItemID == 4031361
        || nItemID == 4031362
        || nItemID == 4031363
        || nItemID == 4031364;
}

bool is_weapon_ti(int nTI)
{
    return nTI == 4 || nTI == 5;
}

int get_cashslot_item_type(int itemId)
{
    switch (itemId / 10000)
    {
    case 500:
        return 8;
    case 0x1f5:
        return 9;
    case 0x1f6:
        return 10;
    case 0x1f7:
        return 0xb;
    case 0x1f8:
        return 0x16;
    case 0x1f9:
        if (itemId % 10 == 0)
        {
            return 0x17;
        }
        return (-(8 < itemId % 10 - 1U) & 0xffffffe8) + 0x18;
    case 0x1fa:
        if (itemId / 1000 == 0x13c5)
        {
            return 0x41;
        }
        if (itemId / 1000 == 0x13c6)
        {
            return 0x4a;
        }
        switch (itemId % 10)
        {
        case 0:
            return 0x19;
        case 1:
            return 0x1a;
        case 2:
        case 3:
            return 0x1b;
        }
        break;
    case 0x1fb:
        switch ((itemId % 10000) / 1000)
        {
        case 1:
            return 0xc;
        case 2:
            return 0xd;
        case 4:
            return 0x2d;
        case 5:
            switch (itemId % 10)
            {
            case 0:
                return 0x2f;
            case 1:
                return 0x30;
            case 2:
                return 0x31;
            case 3:
                return 0x32;
            case 4:
                return 0x33;
            case 5:
                return 0x34;
            }
        case 6:
            return 0xe;
        case 7:
            return 0x3d;
        case 8:
            return 0xf;
        }
        break;
    case 0x1fc:
        return 0x12;
    case 0x1fd:
        return 0x15;
    case 0x1fe:
        return 0x14;
    case 0x200:
        return 0x10;
    case 0x201:
        return 7;
    case 0x202:
        return 4;
    case 0x203:
        switch (itemId / 1000)
        {
        case 0x141e:
        case 0x141f:
        case 0x1422:
            return 1;
        case 0x1420:
            if (itemId / 100 == 0xc940)
            {
                return 2;
            }
            if (itemId / 100 == 0xc941)
            {
                return 0x23;
            }
            break;
        case 0x1421:
            return 3;
        }
        break;
    case 0x204:
        return 6;
    case 0x205:
        return (-(itemId % 10000 != 0) & 0xffffffef) + 0x11;
    case 0x206:
        return 5;
    case 0x207:
        return 0x1c;
    case 0x208:
        return 0x13;
    case 0x20a:
        return 0x28;
    case 0x20b:
        return 0x1d;
    case 0x20c:
        return 0x1e;
    case 0x20d:
        return 0x25 - (itemId % 0x501fb8 != 100);
    case 0x210:
        if (itemId / 1000 == 0x14a0)
        {
            return 0x21;
        }
        if (itemId / 1000 == 0x14a1)
        {
            return 0x22;
        }
        break;
    case 0x212:
        return 0x29;
    case 0x215:
        return 0x1f;
    case 0x219:
        return 0x20;
    case 0x21a:
        return 0x2a;
    case 0x21b:
        return 0x2b;
    case 0x21c:
        if (itemId / 1000 == 0x1518)
        {
            return 0x35;
        }
        if (itemId / 1000 == 0x1519)
        {
            return 0x36;
        }
    case 0x21e:
        if (itemId / 1000 == 0x152c)
        {
            return 0x37;
        }
    case 0x21f:
        if (1 < itemId / 1000 - 0x1537U)
        {
            return 0x3a;
        }
        return 0x42;
    case 0x221:
        return (-(itemId / 1000 != 0x154b) & 0xffffffea) + 0x3c;
    case 0x222:
        return 0x3a;
    case 0x223:
        return 0x27;
    case 0x225:
        return 0x3b;
    case 0x226:
        return 0x3e;
    case 0x227:
        return 0x3f;
    case 0x228:
        return 0x40;
    case 0x229:
        return 0x48;
    case 0x22d:
        return 0x43;
    case 0x231:
        return 0x47;
    case 0x232:
        return 0x49;
    case 0x234:
        return 0x4d;
    case 0x236:
        return 0x4e;
    }
    return 0;
}

int get_etc_cash_item_type(int itemId)
{
    long lVar1{};

    lVar1 = get_cashslot_item_type(itemId);
    switch (lVar1)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 0x24:
    case 0x25:
    case 0x28:
    case 0x2a:
    case 0x2e:
    case 0x37:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3f:
    case 0x4d:
        break;
    default:
        lVar1 = 0;
    }
    return lVar1;
}

bool is_non_cash_effect_item(int itemId)
{
    return (itemId / 0x2710) == 0x1ad;
}

bool is_only_for_prepaid_card_cash_items(int nItemID)
{
    return nItemID == 0x5265C0
        || nItemID == 0x5269A8
        || nItemID / 10 == 520000 && nItemID != 0x4F5889 && nItemID != 0x4F5888 + 2
        || nItemID / 10000 == 549
        || nItemID == 5221001;
}

bool is_rechargeable_item(int itemId)
{
    if ((itemId / 10000 != 0xcf) && (itemId / 10000 != 0xe9))
    {
        return false;
    }
    return true;
}

ZXString<char> get_weapon_attack_speed(int itemId)
{
    auto& sp = StringPool::GetInstance();
    auto wt = get_weapon_type(itemId);
    if (wt)
    {
        auto eq_path = get_equip_data_path(itemId);
        if (!eq_path.IsEmpty())
        {
            auto prop = get_rm()->GetObjectT<IWzProperty>((const wchar_t*)eq_path.c_str());
            auto itemSub = prop->GetItemT<IWzProperty>(sp.GetBSTR(981));
            auto vSpeed = itemSub->Getitem(sp.GetBSTR(1182));
            auto speed = get_int32(vSpeed, 6);

            auto code = 0;
            switch (speed)
            {
            case 0:
            case 1:
                code = 661;
                break;
            case 2:
            case 3:
                code = 662;
                break;
            case 4:
            case 5:
                code = 663;
                break;
            case 6:
                code = 664;
                break;
            case 7:
            case 8:
                code = 665;
                break;
            case 9:
            case 10:
                code = 666;
                break;
            case 11:
            case 12:
                code = 667;
                break;
            default:
                return {};
            }

            return sp.GetString(code);
        }
    }

    return {};
}

int get_tab_from_item_typeindex(int typeIndex)
{
    if (4 < typeIndex - 1U)
    {
        return -1;
    }
    if (typeIndex == 3)
    {
        return 3;
    }
    if (typeIndex == 4)
    {
        typeIndex = 3;
    }
    return typeIndex - 1;
}

bool is_long_coat(int nItemID)
{
    return nItemID / 10000 == 105;
}

ZXString<char> get_item_category_name(int nItemID)
{
    auto& sp = StringPool::GetInstance();
    long nBodyPart = 0;
    if (get_bodypart_from_item(nItemID, 2, &nBodyPart, 0))
    {
        auto v15 = 0;
        if (nBodyPart > 1000)
        {
            switch (nBodyPart)
            {
            case 1001:
                v15 = 5473;
                goto LABEL_6;
            case 1002:
                v15 = 5474;
                goto LABEL_6;
            case 1003:
                v15 = 5475;
                goto LABEL_6;
            case 1100:
                v15 = 6286;
                goto LABEL_6;
            case 1101:
                v15 = 6288;
                goto LABEL_6;
            case 1102:
                v15 = 6287;
                goto LABEL_6;
            case 1103:
                v15 = 6290;
                goto LABEL_6;
            case 1104:
                v15 = 6289;
                goto LABEL_6;
            default:
                goto LABEL_53;
            }
        }
        if (nBodyPart == 1000)
        {
            v15 = 5472;
        LABEL_6:
            return sp.GetString(v15);
        }
        else
        {
            switch (nBodyPart)
            {
            case 1:
                v15 = 634;
                goto LABEL_6;
            case 2:
                v15 = 635;
                goto LABEL_6;
            case 3:
                v15 = 636;
                goto LABEL_6;
            case 4:
                v15 = 637;
                goto LABEL_6;
            case 5:
                if (is_long_coat(nItemID))
                {
                    return sp.GetString(0x27E);
                }
                else
                {
                    return sp.GetString(0x27F);
                }
                break;
            case 6:
                v15 = 640;
                goto LABEL_6;
            case 7:
                v15 = 641;
                goto LABEL_6;
            case 8:
                v15 = 642;
                goto LABEL_6;
            case 9:
                v15 = 643;
                goto LABEL_6;
            case 10:
                if (is_blade(nItemID))
                {
                    return sp.GetString(0x1712u);
                }
                else
                {
                    return sp.GetString(0x284u);
                }
                break;
            case 12:
                v15 = 645;
                goto LABEL_6;
            case 14:
            case 22:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 30:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 41:
            case 42:
            case 43:
            case 44:
            case 45:
            case 46:
            case 47:
            case 48:
                v15 = 3853;
                goto LABEL_6;
            case 17:
                v15 = 646;
                goto LABEL_6;
            case 18:
                v15 = 3848;
                goto LABEL_6;
            case 19:
                v15 = 3849;
                goto LABEL_6;
            case 20:
                v15 = 3852;
                goto LABEL_6;
            case 21:
            case 29:
            case 31:
            case 32:
            case 39:
            case 40:
                v15 = 3854;
                goto LABEL_6;
            case 49:
                v15 = 647;
                goto LABEL_6;
            case 50:
                v15 = 648;
                goto LABEL_6;
            case 51:
                v15 = 5717;
                goto LABEL_6;
            default:
                goto LABEL_53;
            }
        }
    }
    else
    {
    LABEL_53:
        return {};
    }

    return {};
}

bool is_petabil_item(int itemId)
{
    return itemId / 10000 == 0xb5;
}

bool is_charslot_inc_item(int itemId)
{
    return itemId / 1000 == 0x1536;
}

int to_pet_index_from_pet_ability_item_index(int nPetAbilityItemIdx)
{
    int result; // eax

    switch (nPetAbilityItemIdx)
    {
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 47:
        result = 1;
        break;
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 48:
        result = 2;
        break;
    default:
        result = 0;
        break;
    }
    return result;
}

bool is_dual_masterybook_item(int nItemID)
{
    return nItemID / 10000 == 562 && nItemID != 0x55C126 && nItemID != 5620007 && nItemID != 5620008;
}

int get_gender_from_id(int nItemID)
{
    int result; // eax

    if (nItemID / 1000000 != 1)
        return 2;
    switch (nItemID / 1000 % 10)
    {
    case 0:
        result = 0;
        break;
    case 1:
        result = 1;
        break;
    default:
        return 2;
    }
    return result;
}

bool is_slot_inc_item(int nItemID)
{
    return nItemID / 10000 == 911
        || nItemID / 1000 == 5430
        || nItemID == 0x52DED6 + 2
        || nItemID == 0x52E2BF + 1;
}

bool is_matched_itemid_gender(int itemId, int charGender)
{
    auto gender = get_gender_from_id(itemId);
    return gender == 2 || gender == charGender;
}

bool is_equipslot_ext_item(int itemId)
{
    return (itemId / 0x2710) == 0x22b;
}

bool is_cash_package_item(int itemId)
{
    return (itemId / 0x2710) == 0x38e;
}

int get_item_slottype_from_id(int itemId)
{
    switch (itemId / 1000000)
    {
    case 1:
        return 1;
    case 2:
    case 3:
    case 4:
        return 2;
    case 5:
        return 3 - (itemId / 10000 != 500);
    default:
        return 0;
    }
}

bool is_petring_item(int itemId)
{
    return itemId == 1822000 || itemId == 1832000;
}

bool is_antimacro_item(int itemId)
{
    return itemId / 10000 == 219;
}

int is_new_year_card_item_etc(int itemId)
{
    return itemId / 10000 == 0x1ae;
}

bool is_pet_ability_item(int itemId)
{
    return itemId / 10000 == 0xb5;
}

int get_bundle_cash_item_type(int nItemID)
{
    int result = get_cashslot_item_type(nItemID);
    if (result < 8 || result > 11 && result != 39)
        return 0;
    return result;
}

bool is_evan_dragon_riding_item(int itemId)
{
    return itemId == 1902040 || itemId == 1902041 || itemId == 1902042;
}

bool is_gachapon_box_item(int itemId)
{
    return itemId / 10000 == 0x1ac;
}

bool is_new_year_card_item_con(int itemId)
{
    return itemId / 10000 == 0xd8;
}

bool is_portal_scroll_item(int itemId)
{
    return itemId / 10000 == 0xcb;
}

bool is_engagement_ring_box_item(int itemId)
{
    return itemId / 10000 == 0xe0;
}

bool is_script_run_item(int nItemID)
{
    return nItemID / 10000 == 243 || nItemID == 3994225;
}

bool is_skill_reset_item(int itemId)
{
    return itemId / 10000 == 0xfa;
}

bool is_release_item(int itemId)
{
    return itemId / 10000 == 0xf6;
}

bool is_maptransfer_item(int itemId)
{
    return itemId / 10000 == 0xe8;
}

bool is_shopscanner_item(int itemId)
{
    return itemId / 10000 == 0xe7;
}

bool is_select_npc_item(int nItemID)
{
    return nItemID / 10000 == 545 || nItemID / 10000 == 239;
}

bool is_minigame_item(int itemId)
{
    return itemId / 10000 == 0x198;
}

bool is_book_item(int itemId)
{
    return itemId / 10000 == 0x1a0;
}

bool is_exp_up_item(int itemId)
{
    return itemId / 10000 == 0xed;
}

bool is_raise_item(int itemId)
{
    return itemId / 1000 == 0x107c;
}

bool is_invitation_bundle_item(int itemId)
{
    return itemId == 4031377 || itemId == 4031395;
}

bool is_couple_equip_item(int nItemID)
{
    return nItemID / 100 == 11120 && nItemID != 1112000;
}

bool is_friendship_equip_item(int nItemID)
{
    return nItemID / 100 == 11128 && nItemID % 10 <= 2;
}

bool is_adventure_ring_item(int nItemID)
{
    return nItemID == 1112427 || nItemID == 1112428 || nItemID == 1112429 || nItemID == 1112405 || nItemID == 1112445;
}

bool is_javelin_item(int itemId)
{
    return itemId / 10000 == 0xcf;
}

bool is_weapon_sticker(int itemId)
{
    return itemId / 100000 == 0x11;
}

int is_morph_item(long param_1)
{
    return param_1 / 10000 == 0xdd;
}

int is_ghost_item(long param_1)
{
    return param_1 / 10000 == 0xec;
}

int is_pet_food_item(long param_1)
{
    return param_1 / 10000 == 0xd4;
}

int is_portable_chair_item(long param_1)
{
    return param_1 / 10000 == 0x12d;
}

int is_immediate_mobsummon_item(long nItemID)
{
    return nItemID / 1000 == 2109 || nItemID == 2100067;
}

int is_tamingmob_food_item(long param_1)
{
    return param_1 / 10000 == 0xe2;
}

int is_bridle_item(long param_1)
{
    return param_1 / 10000 == 0xe3;
}

int is_tamedmob(long param_1)
{
    return param_1 / 10000 == 0xbe;
}

int is_saddle(long param_1)
{
    return param_1 / 10000 == 0xbf;
}

int is_character_sale_item(long nItemID)
{
    return nItemID == 0x52DED8 || nItemID == 0x52E2BF + 1;
}

int is_random_moneybag_item(long nItemID)
{
    return get_cashslot_item_type(nItemID) == 19 && nItemID / 1000 == 5202;
}

long get_consume_cash_item_type(long param_1)
{
    long lVar1{};

    lVar1 = get_cashslot_item_type(param_1);
    switch (lVar1)
    {
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x22:
    case 0x23:
    case 0x26:
    case 0x29:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x3d:
    case 0x3e:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4e:
        break;
    default:
        lVar1 = 0;
    }
    return lVar1;
}

int is_cash_pet_food_item(long param_1)
{
    return param_1 / 10000 == 0x20c;
}

int is_cash_morph_item(long param_1)
{
    return param_1 / 10000 == 0x212;
}

int is_random_morph_item_other(long nItemID)
{
    return nItemID / 10000 == 221 && (nItemID - 2210000) / 1000 == 2;
}

int is_state_change_item(long nItemID)
{
    auto v1 = nItemID / 10000;
    return nItemID / 10000 == 200
        || v1 == 201
        || v1 == 202
        || v1 == 205
        || v1 == 221
        || v1 == 236
        || v1 == 238
        || v1 == 245;
}

bool is_blade(int itemId)
{
    return itemId / 10000 == 134;
}

bool is_meso_protect_item(int itemId)
{
    return itemId / 100 == 0x57e4;
}

int is_black_upgrade_item(long param_1)
{
    return param_1 / 100 == 0x500b;
}

int is_acc_upgrade_item(long param_1)
{
    return param_1 / 100 == 0x500c;
}

int is_new_upgrade_item(long param_1)
{
    return param_1 / 1000 == 0x7fe;
}

int is_durability_upgrade_item(long param_1)
{
    return param_1 / 1000 == 0x7ff;
}

int is_correct_upgrade_equip(long nUItemID, long nEItemID)
{
    int v2 = nUItemID / 10000;
    if (nUItemID / 10000 == 249 || v2 == 247)
        return 1;
    if (v2 != 204 || nEItemID / 1000000 != 1)
        return 0;
    if ((nUItemID / 100 == 20490 || is_black_upgrade_item(nUItemID)) && !is_pet_equip_item(nEItemID)
        || is_hyper_upgrade_item(nUItemID)
        || is_itemoption_upgrade_item(nUItemID))
    {
        return 1;
    }
    int v4 = (nUItemID - 2040000) / 100;
    int v5 = nEItemID / 10000 % 100;
    if (is_acc_upgrade_item(nUItemID))
    {
        return v5 >= 11 && v5 <= 13;
    }
    else
    {
        if (is_new_upgrade_item(nUItemID) || is_durability_upgrade_item(nUItemID))
        {
            switch (v4 % 10)
            {
            case 0:
                return (v5 - 30) <= 9;
            case 1:
                return (v5 - 40) <= 9;
            case 2:
                return !v5 || v5 > 3 && v5 <= 10;
            case 3:
                switch (v5)
                {
                case 1:
                case 2:
                case 3:
                case 11:
                case 12:
                case 13:
                case 14:
                    return 1;
                default:
                    return 0;
                }
            default:
                return 1;
            }
        }
        return v4 == v5;
    }
}

bool is_monsterbook_card_item(int itemId)
{
    return itemId / 10000 == 0xee;
}

bool is_masterybook_item(int nItemID)
{
    return nItemID / 10000 == 229
        || nItemID / 10000 == 562 && (nItemID == 0x55C126 || nItemID != 5620007 && nItemID != 5620008)
        || nItemID == 0x55C126
        || nItemID == 5620007
        || nItemID == 5620008;
}

bool is_skill_learn_item(int itemId)
{
    if (itemId / 10000 != 0xe4)
    {
        return is_masterybook_item(itemId);
    }
    return true;
}

bool is_pellet_item(int itemId)
{
    return itemId / 1000 == 233;
}

bool is_pellet_ice_item(int itemId)
{
    return (itemId / 1000) == 2332;
}

bool is_pellet_fire_item(int itemId)
{
    return (itemId / 1000) == 2331;
}

int get_weapon_type(int nWeaponItemid)
{
    if (nWeaponItemid / 1000000 != 1)
    {
        return 0;
    }

    auto wt = (nWeaponItemid / 10000) % 100;

    switch (wt)
    {
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
        return wt;
    default:
        return 0;
    }
}

bool is_correct_bullet_item(int nWeaponItemid, int itemId)
{
    auto wt = get_weapon_type(nWeaponItemid);

    if (wt == 0x2d && itemId == 1472063)
    {
        return itemId / 1000 == 2060;
    }

    if (wt == 0x2e)
    {
        return itemId / 1000 == 2061;
    }
    if (wt == 0x2f)
    {
        return itemId / 10000 == 207;
    }
    if (wt == 0x31)
    {
        return is_pellet_item(itemId);
    }
    return false;
}

int get_different_height_chair_type(int nItemID)
{
    if (nItemID == 3010125)
        return 1;
    if (nItemID == 3010117 || nItemID == 3010118 || nItemID == 3010075)
        return 5;
    return nItemID != 3010177 ? 0 : 6;
}

bool is_shooting_weapon(int nWeaponItemid)
{
    auto wt = get_weapon_type(nWeaponItemid);
    return wt == 0x2d || wt == 0x2e || wt == 0x2f || wt == 0x31;
}

bool is_vehicle(int nItemID)
{
    return nItemID / 10000 == 190
        || nItemID / 10000 == 193
        || nItemID == 1902040
        || nItemID == 1902041
        || nItemID == 1902042
        || nItemID / 1000 == 1983;
}

int is_event_vehicle_type2(long nItemID)
{
    switch (nItemID)
    {
    case 1932004:
    case 1932006:
    case 1932007:
    case 1932008:
    case 1932009:
    case 1932010:
    case 1932011:
    case 1932012:
    case 1932013:
    case 1932014:
    case 1932017:
    case 1932018:
    case 1932019:
    case 1932020:
    case 1932021:
    case 1932022:
    case 1932023:
    case 1932025:
    case 1932026:
    case 1932027:
    case 1932028:
    case 1932029:
    case 1932034:
    case 1932035:
    case 1932037:
    case 1932038:
    case 1932039:
    case 1932040:
        return true;
    default:
        return false;
    }
}

bool __cdecl is_matched_itemid_job(long nItemID, short nCharacterJob)

{
    if (nCharacterJob / 100 == 22 || nCharacterJob == 2001)
    {
        if ((nItemID - 5050001) <= 3)
            return false;
    }
    else if ((nItemID - 5050005) <= 4)
    {
        return false;
    }
    return true;
}
