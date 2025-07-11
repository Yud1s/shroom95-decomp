#pragma once

#include <cstdint>
#include <array>
#include "zcom.h"
#include "pcom/wz/IWzRawCanvas.h"
#include "pcom/xcom_ptr.h"
#include "zxstring.h"

struct SKILLENTRY;
class CharacterData;
struct GW_ItemSlotBase;
struct SecondaryStat;

const char *__cdecl _Int2Str(int32_t n, char *s);
const wchar_t *__cdecl _Int2StrW(int32_t n, wchar_t *s);

_x_com_ptr<IUnknown> __cdecl get_unknown(Ztl_variant_t &v);

int get_magic_attack_element_attribute(wchar_t const *s, int32_t *nElemAttr);

bool __cdecl isAllConditionsSatisfied(uint16_t questId);

void make_SingleColor_alpha_blur_0(_x_com_ptr<IWzRawCanvas> pRawCanvas, uint16_t color, uint16_t radius);

void make_SingleColor_alpha_blur_1(_x_com_ptr<IWzCanvas> pCanvas, uint16_t color, uint16_t radius);

int GetPersonalShopTax(int32_t nMoney);

int32_t get_mobspecies_code_from_name(Ztl_bstr_t sName);

int __cdecl is_fieldtype_upgradetomb_usable(long nFieldType, long nFieldID);

int calculate_parbolic_motion_duration(int32_t y1, int32_t y2, int32_t bDropExplosiveNoOwn);

long _anon_calc_evar(long nEVA, long nMobACC, long nTargetLevel, long nAttackLevel, long nEr);

void GetModuleFolderName(char *sDir);

ZXString<char> format_comma_integer(int32_t i);

int _anon_FindGrade_(int grade);

void __cdecl DecSpeed(double *v, double f, double m, double vMax, double tSec);

int DecMPVal(int nJob);

int DecHPVal(int nJob);

int IncHPVal(int nJob);

int IncMPVal(int nJob);

double get_damage_adjusted_by_elemAttr_0(double damage, SKILLENTRY const *pSkill,
                                       int32_t const *aDamagedElemAttr, int32_t nSLV,
                                       double dAdjustByBuff, double dBoost);

double get_damage_adjusted_by_elemAttr_1(double damage, int32_t nAttr, double dAdjust, double dBoost);

int get_next_level_exp(int level);

int32_t get_random_magic_attack_action(int32_t nAttackActionType, int32_t nWT, SKILLENTRY const *pSkill, int32_t nSLV,
                                       uint32_t nRandNumber);

long __cdecl get_weapon_typeindex_from_weapon_type(long param_1);

void clear_basic_font();

void ResetLSP();
void MSLoop_Remove();

bool __cdecl IsAbleTamingMobOneTimeAction(int32_t nAction, int32_t nVehicleID);

bool __cdecl IsAbleTamingMobAction(int32_t nAction, int32_t nVehicleID);

bool __cdecl is_shoot_morph_action(int action);

bool __cdecl is_alert_back_action(int action);


bool __cdecl is_pronestab_action(int action);

bool __cdecl is_shoot_action(int action);

bool __cdecl is_stand_action(int action);


int get_action_from_act_dir(int l);

bool __cdecl is_magic_attack_action(int action);


// Utils

bool __cdecl is_sticker_bodypart(int bodyPart);

double get_damage_adjusted_by_assist_charged_elemAttr(double damage, long const *aDamagedElemAttr,
                                                          SecondaryStat const *ss, CharacterData const *cd);

bool __cdecl is_correct_magic_attack(int32_t nAttackActionType, int32_t nWT, int32_t nAction,
                                    SKILLENTRY const *pSkill, int32_t nSLV);


bool __cdecl is_correct_siege_attack(int32_t nAction, int skillId);

bool __cdecl is_town_field_id(int fieldId);

ZXString<char> get_bodyaprt_name(int bodyPart);


int GetParcelTax(int money);

bool __cdecl is_final_action(int action);

int __cdecl get_shield_mastery(const CharacterData &cd);

int32_t
get_attack_speed_degree(int32_t nDegree, int32_t nSkillID, int32_t nWeaponBooster, int32_t nPartyBooster,
                        int32_t nAuraBooster, int32_t nFrozen);

ZXString<char> GetChannelName(int channel);



bool __cdecl is_treat_singly_1(GW_ItemSlotBase &item);
ZXString<char> get_labeled_string_0(_x_com_ptr<IWzProperty> param_1, long param_2, Ztl_bstr_t param_3);

ZXString<char> get_labeled_string_1(_x_com_ptr<IWzProperty> pProp, char* s, Ztl_bstr_t key);
