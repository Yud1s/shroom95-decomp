#pragma once

#include "zxstring.h"

int GetWeaponType(int itemId);

bool is_random_box_item(int itemId);

bool is_changemaplepoint_item(int itemId);

bool __cdecl is_event_vehicle_type1(long itemId);

bool is_entrustedshop_item(int itemId);

bool is_pigmy_egg(int itemId);

bool is_wedding_ring_item(int itemId);

bool is_wedding_receipt_item(int itemId);


bool is_treat_singly_0(int itemId);

bool is_skill_effect_weapon(int itemId);

bool is_shield(int itemId);

bool is_wedding_cantdrop_item(int itemId);

bool is_itemoption_upgrade_item(int itemId);

bool is_hyper_upgrade_item(int itemId);

bool is_invitation_guest_item(int itemId);

bool is_mobsummon_item(int itemId);

bool is_ui_open_item(int itemId);

int to_pet_ring_bodypart(int idx, int itemId);

bool is_pet_equip_item_idx(int idx);

bool is_pet_equip_item(int itemId);

bool is_engagement_ring_item(int itemId);

bool is_weapon_ti(int wt);

bool is_non_cash_effect_item(int itemId);

int get_cashslot_item_type(int itemId);


int get_etc_cash_item_type(int itemId);

bool is_only_for_prepaid_card_cash_items(int itemId);

bool is_rechargeable_item(int itemId);

ZXString<char> get_weapon_attack_speed(int itemId);

ZXString<char> get_item_category_name(int itemId);

int get_tab_from_item_typeindex(int typeIndex);

bool is_petabil_item(int itemId);

bool is_charslot_inc_item(int itemId);

int to_pet_index_from_pet_ability_item_index(int itemId);

bool is_dual_masterybook_item(int itemId);

int get_gender_from_id(int itemId);

bool is_matched_itemid_gender(int itemId, int charGender);

bool is_slot_inc_item(int itemId);

bool is_equipslot_ext_item(int itemId);

bool is_cash_package_item(int itemId);

int get_item_slottype_from_id(int itemId);

bool is_petring_item(int itemId);

bool is_antimacro_item(int itemId);

int is_new_year_card_item_etc(int itemId);

bool is_pet_ability_item(int itemId);


int get_bundle_cash_item_type(int itemId);

bool is_evan_dragon_riding_item(int itemId);

bool is_gachapon_box_item(int itemId);

bool is_new_year_card_item_con(int itemId);

bool is_portal_scroll_item(int itemId);

bool is_engagement_ring_box_item(int itemId);

bool is_skill_reset_item(int itemId);

bool is_script_run_item(int itemId);

bool is_release_item(int itemId);

bool is_maptransfer_item(int itemId);

bool is_shopscanner_item(int itemId);

bool is_select_npc_item(int itemId);

bool is_minigame_item(int itemId);

bool is_book_item(int itemId);

bool is_exp_up_item(int itemId);

bool is_raise_item(int itemId);

bool is_invitation_bundle_item(int itemId);

bool is_couple_equip_item(int itemId);

bool is_friendship_equip_item(int itemId);

bool is_adventure_ring_item(int itemId);

bool is_javelin_item(int itemId);

bool is_weapon_sticker(int itemId);

int __cdecl is_morph_item(long param_1);

int __cdecl is_ghost_item(long param_1);

int __cdecl is_pet_food_item(long param_1);

int __cdecl is_portable_chair_item(long param_1);

int __cdecl is_immediate_mobsummon_item(long param_1);

int __cdecl is_tamingmob_food_item(long param_1);

int __cdecl is_bridle_item(long param_1);

int __cdecl is_tamedmob(long param_1);

int __cdecl is_saddle(long param_1);


int __cdecl is_character_sale_item(long param_1);

int __cdecl is_random_moneybag_item(long param_1);

long __cdecl get_consume_cash_item_type(long param_1);

int __cdecl is_cash_pet_food_item(long param_1);

int __cdecl is_cash_morph_item(long param_1);

int __cdecl is_random_morph_item_other(long param_1);

int __cdecl is_state_change_item(long param_1);


bool is_blade(int itemId);

bool is_meso_protect_item(int itemId);

int __cdecl is_black_upgrade_item(long param_1);

int __cdecl is_acc_upgrade_item(long param_1);

int __cdecl is_new_upgrade_item(long param_1);

int __cdecl is_durability_upgrade_item(long param_1);

int __cdecl is_correct_upgrade_equip(long upgradeItemid, long equipItemId);

bool is_monsterbook_card_item(int itemId);

bool is_masterybook_item(int itemId);

bool is_skill_learn_item(int itemId);

bool is_pellet_item(int itemId);

bool is_pellet_ice_item(int itemId);

bool is_pellet_fire_item(int itemId);

int get_weapon_type(int nWeaponItemid);

bool is_correct_bullet_item(int nWeaponItemid, int itemId);

int get_different_height_chair_type(int itemId);

bool is_shooting_weapon(int nWeaponItemid);

bool is_vehicle(int itemId);

int __cdecl is_event_vehicle_type2(long nItemID);

bool is_wildhunter_jaguar_vehicle(int nVehicleID);
bool is_wildhunter_jaguar_vehicle_0(int nVehicleID);

bool __cdecl is_matched_itemid_job(long itemId, short jobId);