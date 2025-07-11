#pragma once

#include <cstdint>
#include "zcom.h"

struct SKILLENTRY;


int32_t __cdecl is_novice_skill(long nSkillID);

int __cdecl is_guild_skill(long skillId);

bool __cdecl is_guided_bullet_skill(int skillId);

int __cdecl is_active_skill(long param_1);

int __cdecl is_keydown_skill(int skillId);

int __cdecl is_able_to_map_macrosys_skill(long skillId);

int __cdecl is_ignore_master_level_for_skillinfo(long param_1);

int __cdecl is_heros_will_skill(long param_1);

int __cdecl is_ignore_mob_during_gauge_skill(long param_1);

int __cdecl is_rect_attack_shoot_skill(long param_1);

int __cdecl is_rect_attack_magic_skill(long param_1);

long __cdecl get_vertical_adjust_of_attack_range(long param_1);

int __cdecl is_attack_area_set_by_data(long param_1);

int __cdecl is_position_up_skill_on_riding(long param_1,long param_2);

bool __cdecl is_able_notweapon_skill(int skillId);

bool __cdecl is_prepare_bomb_skill(int skillId);

bool __cdecl is_damage_shared_skill(int nSkillID);

bool __cdecl is_mirror_excepted_skill(int skillId);

bool __cdecl is_not_prepare_bomb_skill(int skillId);

bool __cdecl is_shoot_skill_not_using_shooting_weapon(int skillId);

bool __cdecl is_throw_bomb_skill(int skillId);

bool __cdecl is_mob_body_bomb(int nSkillID);

bool __cdecl is_unregisterd_skill(int skillId);

int get_skill_id_from_vehicle_id(int nVehicleID);

int get_cool_time(int skillId);

int get_dragon_action_code_from_name(Ztl_bstr_t bsName);

int32_t get_random_shoot_attack_action(int32_t nAttackActionType,
                                              int32_t nWT,
                                              SKILLENTRY const *pSkill,
                                              int32_t nSLV,
                                              uint32_t nRandNumber);


bool __cdecl is_command_skill(long param_1);

int __cdecl is_antirepeat_buff_skill(long param_1);

int get_max_gauge_time(int skillId);

bool __cdecl is_able_to_jumpshoot(int skillId, int job);

int get_required_height_jump_rush(int skillId);

bool __cdecl is_upgrade_skill(int nSkillId);

bool __cdecl is_bmage_aura_skill(int skillId);

int __cdecl get_element_by_charged_skillid(int32_t nChargeSkillID);

int __cdecl get_required_combo_count(int nSkillId);

bool __cdecl is_jaguar_melee_attack_skill(int skillId);


bool __cdecl is_delayed_hit_sfx_needed_skill(int skillId);

int get_skill_degree_from_skill_root(int skillId);

bool __cdecl is_summon_octopus_skill(int skillId);

int __cdecl is_invulnerable_summon_skill(long moveAbility,long skillId);

long __cdecl get_summoned_attack_delay(long param_1,long param_2);

long __cdecl get_summon_idx_from_skill_id(long param_1);

int __cdecl is_self_destruct_summon_skill(long param_1);

bool __cdecl is_teleport_skill(int skillId);

bool __cdecl is_dual_add_damage_except_skill(int nSkillID);


bool __cdecl is_jump_rush_skill(int skillId);

bool __cdecl is_event_vehicle_skill(int skillId);

bool __cdecl is_vehicle_skill(int skillId);

bool __cdecl is_shoot_skill_not_consuming_bullet(int skillId);

int get_skill_root_from_skill(int skillId);


int get_novice_skill_as_race(int skillId, int job);

bool __cdecl is_teleport_mastery_skill(int skillId);

bool __cdecl is_ignore_master_level_for_common(long skillid);


bool __cdecl is_skill_need_master_level(long skillId);

int __cdecl get_element_from_mobskillid(int nSkillID);

bool __cdecl is_shoot_skill_not_switched_to_melee_attack(int nSkillId);

bool __cdecl is_smoothing_movingshoot(long param_1, long param_2);

int get_skill_class(int skillId);

bool __cdecl is_nonslot_skill(long skillId);