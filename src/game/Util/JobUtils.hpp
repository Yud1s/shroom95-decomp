#pragma once

class CharacterData;

long __cdecl get_dualjob_change_level(long param_1);

int get_shadow_parter_skillid(int job);

long __cdecl pronstab_action_convert_for_jaguar(long action, long ridingVehicle);

bool __cdecl is_extendsp_job(long param_1);


bool is_beginner_job(int job);

int get_mechanic_mastery(CharacterData *cd);

long __cdecl get_increase_speed(const CharacterData &cd);

long __cdecl get_job_level(long param_1);

bool is_third_job(int job);

bool is_mage_job(int job);

bool is_bmage_job(int jobId);

bool is_wildhunter_job(int jobId);

bool is_cygnus_job(int jobId);

bool is_aran_job(int jobId);

bool is_mechanic_job(int jobId);

int get_job_category(int job);

bool is_resistance_job(int job);

int __fastcall GetJobCategory(int job);

int __fastcall  __get_dragon_idx(int job);

bool is_correct_job_for_skill_root(int job, int skillRoot);

bool is_admin_job(int nJob);

bool is_manager_job(int nJob);

bool is_evan_job(int job);

bool is_dual_job(int job);
