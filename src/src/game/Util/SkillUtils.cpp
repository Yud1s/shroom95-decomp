#include "SkillUtils.hpp"

#include <skills_ids.h>

#include "SkillInfo/SkillInfo.hpp"
#include "JobUtils.hpp"
#include "WvsStatics.h"

bool is_throw_bomb_skill(int skillId)
{
    return is_prepare_bomb_skill(skillId) || is_not_prepare_bomb_skill(skillId);
}

bool is_mob_body_bomb(int nSkillID)
{
    return is_throw_bomb_skill(nSkillID) && nSkillID == 0x423d0b;
}

int is_ignore_master_level_for_skillinfo(long param_1)
{
    bool bVar1{};

    if (param_1 < 0x2f9b8c)
    {
        if (0x2f9b89 < param_1)
        {
            return 1;
        }
        if (param_1 < 0x20594a)
        {
            if (param_1 == 0x205949)
            {
                return 1;
            }
            if (param_1 == 0x11170c)
            {
                return 1;
            }
            if (param_1 == 0x129dad)
            {
                return 1;
            }
            bVar1 = param_1 == 0x14244b;
        }
        else
        {
            if (param_1 == 0x21dfe9)
            {
                return 1;
            }
            bVar1 = param_1 == 0x23668a;
        }
    }
    else if (param_1 < 0x40646a)
    {
        if (param_1 == 0x406469)
        {
            return 1;
        }
        if (param_1 < 0x312229)
        {
            return 0;
        }
        if (param_1 < 0x31222b)
        {
            return 1;
        }
        bVar1 = param_1 == 0x3eddca;
    }
    else
    {
        if (param_1 == 0x004e200b)
        {
            return 1;
        }
        bVar1 = param_1 == 0x4fa6ac;
    }
    if (bVar1)
    {
        return 1;
    }
    return 0;
}

int is_able_to_map_macrosys_skill(long skillId)
{
    int iVar2;
    iVar2 = (skillId / 1000) % 10;
    if ((iVar2 != 0) && (iVar2 != 9))
    {
        if (((!is_keydown_skill(skillId)) &&
                (((skillId != 0x200f0a && (skillId != 0x2195aa)) && (skillId != 0x231c49)))) &&
            ((((skillId != 0x00b8a58b && (skillId != 0x1513c09)) &&
                    (skillId != 0x00404141)) &&
                (((skillId != 0x3eba9e && (skillId != 0x0040413e)) &&
                    (((skillId != 0x00a9634d &&
                            (((skillId != 0x00d72a0c && (skillId != 0x41eeeb)) && (skillId != 0x1f78e2a)))) &&
                        (skillId != 0x1e84bea))))))))
        {
            return 1;
        }
    }
    return 0;
}

int32_t __cdecl is_novice_skill(long nSkillID)
{
    int iVar1;

    iVar1 = nSkillID / 10000;
    if ((iVar1 != (iVar1 / 1000) * 1000) && (iVar1 != 2001))
    {
        return 0;
    }
    return 1;
}

int is_guild_skill(long skillId)
{
    if ((skillId != 0) && (-1 < skillId))
    {
        return skillId / 10000 == 9100;
    }
    return 0;
}

bool is_guided_bullet_skill(int nSkillID)
{
    return nSkillID == OUTLAW_HOMING_BEACON || nSkillID == CORSAIR_BULLSEYE || nSkillID == EVAN7_KILLER_WINGS;
}

int is_active_skill(long param_1)
{
    int iVar1;

    iVar1 = (param_1 / 1000) % 10;
    if ((iVar1 != 0) && (iVar1 != 9))
    {
        return 1;
    }
    return 0;
}

int is_keydown_skill(int nSkillID)
{
    if (nSkillID > WA3_HURRICANE)
    {
        if (nSkillID > WH2_JAGUAROSHI)
        {
            if (nSkillID == WH4_WILD_ARROW_BLAST || nSkillID == MECH1_FLAME_LAUNCHER)
                return 1;
            return nSkillID == MECH2_ENHANCED_FLAME_LAUNCHER;
        }
        else
        {
            if (nSkillID == WH2_JAGUAROSHI)
                return 1;
            if (nSkillID > EVAN4_ICE_BREATH)
            {
                return nSkillID == EVAN7_FIRE_BREATH;
            }
            else
            {
                if (nSkillID == EVAN4_ICE_BREATH || nSkillID == NW3_POISON_BOMB)
                    return 1;
                return nSkillID == TB2_CORKSCREW_BLOW;
            }
        }
    }
    if (nSkillID == WA3_HURRICANE)
        return 1;
    if (nSkillID <= MARKSMAN_PIERCING_ARROW)
    {
        if (nSkillID == MARKSMAN_PIERCING_ARROW)
            return 1;
        if (nSkillID > BISHOP_BIG_BANG)
        {
            return nSkillID == BOWMASTER_HURRICANE;
        }
        else
        {
            if (nSkillID == BISHOP_BIG_BANG || nSkillID == FP3_BIG_BANG)
                return 1;
            return nSkillID == IL3_BIG_BANG;
        }
    }
    if (nSkillID > GUNSLINGER_GRENADE)
        return nSkillID == CORSAIR_RAPID_FIRE;
    if (nSkillID != GUNSLINGER_GRENADE)
    {
        if (nSkillID < DB5_FINAL_CUT)
            return 0;
        if (nSkillID > DB5_MONSTER_BOMB)
            return nSkillID == BRAWLER_CORKSCREW_BLOW;
    }
    return 1;
}

int is_heros_will_skill(long param_1)
{
    bool bVar1{};

    if (param_1 < 0x406851)
    {
        if (param_1 == 0x406850)
        {
            return 1;
        }
        if (param_1 < 0x21e3d1)
        {
            if (param_1 == 0x21e3d0)
            {
                return 1;
            }
            if (param_1 < 0x142833)
            {
                if (param_1 == 0x142832)
                {
                    return 1;
                }
                if (param_1 == 0x111af3)
                {
                    return 1;
                }
                bVar1 = param_1 == 0x12a194;
            }
            else
            {
                bVar1 = param_1 == 0x205d30;
            }
        }
        else if (param_1 < 0x312611)
        {
            if (param_1 == 0x312610)
            {
                return 1;
            }
            if (param_1 == 0x236a71)
            {
                return 1;
            }
            bVar1 = param_1 == 0x2f9f71;
        }
        else
        {
            bVar1 = param_1 == 0x3ee1b1;
        }
    }
    else if (param_1 < 0x1524d7d)
    {
        if (param_1 == 0x1524d7c)
        {
            return 1;
        }
        if (param_1 < 0x4faa93)
        {
            if (param_1 == 0x4faa92)
            {
                return 1;
            }
            if (param_1 == 0x423d10)
            {
                return 1;
            }
            bVar1 = param_1 == 0x4e23f0;
        }
        else
        {
            bVar1 = param_1 == 0x14247f0;
        }
    }
    else
    {
        if (param_1 == 0x1ea20b0)
        {
            return 1;
        }
        if (param_1 == 0x1f962f0)
        {
            return 1;
        }
        bVar1 = param_1 == 0x217e770;
    }
    if (bVar1)
    {
        return 1;
    }
    return 0;
}

int is_ignore_mob_during_gauge_skill(long param_1)
{
    bool bVar1{};

    if (param_1 < 0x4f5c6b)
    {
        if (param_1 == 0x4f5c6a)
        {
            return 1;
        }
        if (param_1 < 0x31260a)
        {
            if (param_1 == 0x312609)
            {
                return 1;
            }
            if (param_1 == 0x205d29)
            {
                return 1;
            }
            if (param_1 == 0x21e3c9)
            {
                return 1;
            }
            bVar1 = param_1 == 0x236a69;
        }
        else
        {
            if (param_1 < 0x423d0a)
            {
                return 0;
            }
            if (param_1 < 0x423d0c)
            {
                return 1;
            }
            bVar1 = param_1 == 0x4dd5cc;
        }
    }
    else if (param_1 < 0x1518a29)
    {
        if (param_1 == 0x1518a28)
        {
            return 1;
        }
        if (param_1 == 0x00d7511e)
        {
            return 1;
        }
        bVar1 = param_1 == 0x00e66c4b;
    }
    else
    {
        if (param_1 == 0x151ff59)
        {
            return 1;
        }
        bVar1 = param_1 == 0x1f914cd;
    }
    if (bVar1)
    {
        return 1;
    }
    return 0;
}

int is_rect_attack_shoot_skill(long nSkillID)
{
    if ( nSkillID <= WA2_STORM_BREAK )
  {
    if ( nSkillID == WA2_STORM_BREAK )
      return 1;
    if ( nSkillID > MARKSMAN_DRAGONS_BREATH )
    {
      if ( nSkillID > GUNSLINGER_INVISIBLE_SHOT )
      {
        if ( nSkillID <= CORSAIR_BATTLESHIP_TORPEDO )
          return nSkillID == CORSAIR_BATTLESHIP_TORPEDO
              || nSkillID >= OUTLAW_FLAMETHROWER && nSkillID <= OUTLAW_ICE_SPLITTER;
        return nSkillID == DW2_SOUL_BLADE;
      }
      else
      {
        if ( nSkillID == GUNSLINGER_INVISIBLE_SHOT || nSkillID == HERMIT_AVENGER || nSkillID == NIGHTLORD_TAUNT )
          return 1;
        return nSkillID == SHADOWER_TAUNT;
      }
    }
    else
    {
      if ( nSkillID == MARKSMAN_DRAGONS_BREATH )
        return 1;
      if ( nSkillID > CROSSBOWMAN_POWER_KNOCKBACK )
      {
        if ( nSkillID == CROSSBOWMAN_IRON_ARROW_CROSSBOW || nSkillID == SNIPER_ARROW_ERUPTION )
          return 1;
        return nSkillID == MARKSMAN_PIERCING_ARROW;
      }
      else
      {
        if ( nSkillID == CROSSBOWMAN_POWER_KNOCKBACK
          || nSkillID == HUNTER_POWER_KNOCKBACK
          || nSkillID == RANGER_ARROW_RAIN )
        {
          return 1;
        }
        return nSkillID == BOWMASTER_DRAGONS_BREATH;
      }
    }
  }
  if ( nSkillID <= ARAN4_COMBO_TEMPEST )
  {
    if ( nSkillID == ARAN4_COMBO_TEMPEST )
      return 1;
    if ( nSkillID > NW3_AVENGER )
    {
      if ( nSkillID == TB3_SHARK_WAVE || nSkillID == ARAN2_COMBO_SMASH )
        return 1;
      return nSkillID == ARAN3_COMBO_FENRIR;
    }
    else
    {
      if ( nSkillID == NW3_AVENGER || nSkillID == WA3_ARROW_RAIN || nSkillID == WA3_WIND_PIERCING )
        return 1;
      return nSkillID == NW2_VAMPIRE;
    }
  }
  if ( nSkillID > MECH1_FLAME_LAUNCHER )
  {
    if ( nSkillID == MECH2_ENHANCED_FLAME_LAUNCHER || nSkillID == MECH3_PUNCH_LAUNCHER )
      return 1;
    return nSkillID == MECH4_LASER_BLAST;
  }
  if ( nSkillID == MECH1_FLAME_LAUNCHER )
    return 1;
  if ( nSkillID > WH4_EXPLODING_ARROWS )
    return nSkillID == WH4_STINK_BOMB_SHOT;
  if ( nSkillID == WH4_EXPLODING_ARROWS )
    return 1;
  if ( nSkillID >= WH2_RICOCHET )
    return nSkillID <= WH2_JAGUAR_RAWR;
  return 0;
}


int __cdecl is_rect_attack_magic_skill(long param_1)
{
    bool bVar1{};

    if (param_1 < 0x40684d)
    {
        if (param_1 == 0x40684c)
        {
            return 1;
        }
        if (param_1 < 0x21e3ca)
        {
            if (param_1 == 0x21e3c9)
            {
                return 1;
            }
            if (param_1 < 0x205d2c)
            {
                if (param_1 == 0x205d2b)
                {
                    return 1;
                }
                if (param_1 < 0x20361b)
                {
                    if (param_1 == 0x20361a)
                    {
                        return 1;
                    }
                    if (param_1 == 0x1e886d)
                    {
                        return 1;
                    }
                    bVar1 = param_1 == 0x200f0c;
                }
                else
                {
                    bVar1 = param_1 == 0x205d29;
                }
            }
            else
            {
                if (param_1 < 0x2195ae)
                {
                    if (param_1 == 0x2195ad)
                    {
                        return 1;
                    }
                    if (param_1 < 0x205d2e)
                    {
                        return 0;
                    }
                    if (0x205d2f < param_1)
                    {
                        return 0;
                    }
                    return 1;
                }
                bVar1 = param_1 == 0x21bcba;
            }
        }
        else if (param_1 < 0x23435d)
        {
            if (param_1 == 0x23435c)
            {
                return 1;
            }
            if (param_1 == 0x21e3cb)
            {
                return 1;
            }
            if (param_1 == 0x21e3cf)
            {
                return 1;
            }
            bVar1 = param_1 == 0x231c4a;
        }
        else
        {
            if (param_1 == 0x236a69)
            {
                return 1;
            }
            if (param_1 == 0x236a70)
            {
                return 1;
            }
            bVar1 = param_1 == 0x3ee1ac;
        }
    }
    else if (param_1 < 0x151ff5b)
    {
        if (0x151ff58 < param_1)
        {
            return 1;
        }
        if (param_1 < 12111007)
        {
            if (param_1 == 0xb8cc9e)
            {
                return 1;
            }
            if (param_1 == 0xb71eeb)
            {
                return 1;
            }
            if (param_1 == 0xb8a58e)
            {
                return 1;
            }
            bVar1 = param_1 == 0xb8cc9b;
        }
        else
        {
            if (param_1 == 0x1513c08)
            {
                return 1;
            }
            if (param_1 == 0x1518a28)
            {
                return 1;
            }
            bVar1 = param_1 == 0x151d849;
        }
    }
    else if (param_1 < 0x1e9d28a)
    {
        if (param_1 == 0x1e9d289)
        {
            return 1;
        }
        if (param_1 < 0x1524d7c)
        {
            if (0x1524d79 < param_1)
            {
                return 1;
            }
            bVar1 = param_1 == 0x1522669;
        }
        else
        {
            bVar1 = param_1 == 0x152748a;
        }
    }
    else
    {
        if (param_1 == 0x1e9f99b)
        {
            return 1;
        }
        if (param_1 == 0x1e9f9a3)
        {
            return 1;
        }
        bVar1 = param_1 == 0x1ea20ac;
    }
    if (bVar1)
    {
        return 1;
    }
    return 0;
}

long get_vertical_adjust_of_attack_range(long nSkillID)
{
    if ( nSkillID <= DW2_SOUL_BLADE )
    {
        if ( nSkillID != DW2_SOUL_BLADE )
        {
            if ( nSkillID <= MARKSMAN_DRAGONS_BREATH )
            {
                if ( nSkillID != MARKSMAN_DRAGONS_BREATH )
                {
                    if ( nSkillID <= CROSSBOWMAN_IRON_ARROW_CROSSBOW )
                    {
                        if ( nSkillID != CROSSBOWMAN_IRON_ARROW_CROSSBOW )
                        {
                            if ( nSkillID == BOWMAN_ARROW_BLOW || nSkillID == BOWMASTER_DRAGONS_BREATH )
                                return 20;
                            return 0;
                        }
                        return 10;
                    }
                    if ( nSkillID != MARKSMAN_PIERCING_ARROW )
                        return 0;
                }
                return 20;
            }
            if ( nSkillID != HERMIT_AVENGER )
            {
                if ( nSkillID == NIGHTLORD_TAUNT || nSkillID == SHADOWER_TAUNT )
                    return 10;
                return 0;
            }
            return 36;
        }
        return 60;
    }
    if ( nSkillID <= ARAN2_COMBO_SMASH )
    {
        if ( nSkillID == ARAN2_COMBO_SMASH )
            return 60;
        if ( nSkillID > TB3_SPARK )
        {
            if ( nSkillID != TB3_SHARK_WAVE )
                return 0;
            return 60;
        }
        switch ( nSkillID )
        {
        case TB3_SPARK:
            return 150;
        case WA3_WIND_PIERCING:
            return 10;
        case NW3_AVENGER:
            return 36;
        default:
                return 0;
        }
    }
    if ( nSkillID == ARAN3_COMBO_FENRIR )
        return 60;
    if ( nSkillID == WH2_RICOCHET )
        return 20;
    if ( nSkillID != WH4_STINK_BOMB_SHOT )
        return 0;
    return 12;
}

int is_attack_area_set_by_data(long nSkillID)
{
    if ( nSkillID > WA3_ARROW_RAIN )
    {
        if ( nSkillID > MECH1_FLAME_LAUNCHER )
        {
            if ( nSkillID == MECH2_ENHANCED_FLAME_LAUNCHER || nSkillID == MECH3_PUNCH_LAUNCHER )
                return 1;
            return nSkillID == MECH4_LASER_BLAST;
        }
        if ( nSkillID != MECH1_FLAME_LAUNCHER )
        {
            if ( nSkillID > WH2_JAGUAR_RAWR )
            {
                return nSkillID == WH4_EXPLODING_ARROWS;
            }
            else
            {
                if ( nSkillID == WH2_JAGUAR_RAWR || nSkillID == NW2_VAMPIRE )
                    return 1;
                return nSkillID == ARAN4_COMBO_TEMPEST;
            }
        }
        return 1;
    }
    if ( nSkillID == WA3_ARROW_RAIN )
        return 1;
    if ( nSkillID > GUNSLINGER_INVISIBLE_SHOT )
    {
        if ( nSkillID > CORSAIR_BATTLESHIP_TORPEDO )
            return nSkillID == WA2_STORM_BREAK;
        return nSkillID == CORSAIR_BATTLESHIP_TORPEDO || nSkillID >= OUTLAW_FLAMETHROWER && nSkillID <= OUTLAW_ICE_SPLITTER;
    }
    if ( nSkillID == GUNSLINGER_INVISIBLE_SHOT )
        return 1;
    if ( nSkillID > CROSSBOWMAN_POWER_KNOCKBACK )
    {
        return nSkillID == SNIPER_ARROW_ERUPTION;
    }
    else
    {
        if ( nSkillID == CROSSBOWMAN_POWER_KNOCKBACK || nSkillID == HUNTER_POWER_KNOCKBACK )
            return 1;
        return nSkillID == RANGER_ARROW_RAIN;
    }
}

int is_position_up_skill_on_riding(long nSkillID, long nJob)
{
    if (nSkillID > WH4_STINK_BOMB_SHOT)
    {
        if (nSkillID > MECH3_MECH_SIEGE_MODE)
        {
            if (nSkillID == MECH3_PUNCH_LAUNCHER || nSkillID == MECH4_MECH_MISSILE_TANK)
                return 1;
            return nSkillID == MECH4_MECH_SIEGE_MODE;
        }
        else
        {
            if (nSkillID == MECH3_MECH_SIEGE_MODE || nSkillID == WH4_WILD_ARROW_BLAST || nSkillID == MECH1_GATLING_GUN)
                return 1;
            return nSkillID == MECH2_ENHANCED_GATLING_GUN;
        }
    }
    if (nSkillID == WH4_STINK_BOMB_SHOT)
        return 1;
    if (nSkillID > WH2_RICOCHET)
    {
        if (nSkillID == WH3_ENDURING_FIRE || nSkillID == WH4_EXPLODING_ARROWS)
            return 1;
        return nSkillID == (WH4_SONIC_ROAR | 0x1);
    }
    if (nSkillID == WH2_RICOCHET)
        return 1;
    if (nSkillID)
    {
        if (nSkillID != WH1_TRIPLE_SHOT)
            return nSkillID == WH2_FINAL_ATTACK;
        return 1;
    }
    if (is_wildhunter_job(nJob))
        return 1;
    return is_mechanic_job(nJob);
}

int get_skill_class(int skillId)
{
    return skillId / 10000;
}

bool is_smoothing_movingshoot(long nSkillID, long nJob)
{
    if (nSkillID > WH2_RICOCHET)
    {
        if (nSkillID == WH3_ENDURING_FIRE)
            return 1;
        return nSkillID == WH4_STINK_BOMB_SHOT;
    }
    else
    {
        if (nSkillID == WH2_RICOCHET)
            return true;
        if (!nSkillID)
            return nJob / 100 == 33;
        return nSkillID == WH1_TRIPLE_SHOT;
    }
}

int get_element_from_mobskillid(int nSkillID)
{
    switch (nSkillID)
    {
    case 0x7d:
        return 4;
    case 0x82:
        return 2;
    default:
        return -1;
    }
}

bool is_skill_need_master_level(long nSkillID)
{
    int v2; // ecx
    int job_level; // eax

    if (is_ignore_master_level_for_common(nSkillID))
        return false;
    v2 = nSkillID / 10000;
    if (nSkillID / 10000 / 100 == 22 || v2 == 2001)
    {
        job_level = get_job_level(nSkillID / 10000);
        return job_level == 9
            || job_level == 10
            || nSkillID == EVAN3_MAGIC_GUARD
            || nSkillID == EVAN6_MAGIC_BOOSTER
            || nSkillID == EVAN6_CRITICAL_MAGIC;
    }
    if (v2 / 10 == 43)
        return get_job_level(nSkillID / 10000) == 4
            || nSkillID == DB2_SLASH_STORM
            || nSkillID == DB3_TORNADO_SPIN
            || nSkillID == DB4_MIRROR_IMAGE
            || nSkillID == DB4_FLYING_ASSAULTER;
    if (v2 == 100 * (nSkillID / 10000 / 100))
        return false;
    return v2 % 10 == 2;
}

bool is_ignore_master_level_for_common(long nSkillID)
{
    if (nSkillID > MARKSMAN_ULTIMATE_STRAFE)
    {
        if (nSkillID <= CORSAIR_PIRATES_REVENGE)
        {
            if (nSkillID == CORSAIR_PIRATES_REVENGE
                || nSkillID == NIGHTLORD_EXPERT_THROWING_STAR_HANDLING
                || nSkillID == SHADOWER_MESO_MASTERY)
            {
                return true;
            }
            return nSkillID == BUCCANEER_PIRATES_REVENGE;
        }
        if (nSkillID != ENERGIZE)
            return nSkillID == WH4_WILD_INSTINCT;
        return true;
    }
    if (nSkillID >= MARKSMAN_MARKSMANSHIP)
        return true;
    if (nSkillID > FP3_BUFF_MASTERY)
    {
        if (nSkillID > BISHOP_BUFF_MASTERY)
        {
            if (nSkillID < BOWMASTER_VENGEANCE || nSkillID > BOWMASTER_MARKSMANSHIP)
                return false;
        }
        else if (nSkillID != BISHOP_BUFF_MASTERY)
        {
            return nSkillID == IL3_BUFF_MASTERY;
        }
        return 1;
    }
    if (nSkillID == FP3_BUFF_MASTERY || nSkillID == HERO_COMBAT_MASTERY || nSkillID == PALADIN_DIVINE_SHIELD)
        return true;
    return nSkillID == DRK_HEX_OF_THE_BEHOLDER_1;
}

bool is_teleport_mastery_skill(int nSkillID)
{
    if (nSkillID > PRIEST_TELEPORT_MASTERY)
        return nSkillID == TELEPORT_MASTERY;
    if (nSkillID == PRIEST_TELEPORT_MASTERY || nSkillID == FP2_TELEPORT_MASTERY)
        return true;
    return nSkillID == IL2_TELEPORT_MASTERY;
}

int get_novice_skill_as_race(int skillId, int job)
{
    if (is_evan_job(job))
    {
        return skillId + 20010000;
    }

    return (job / 1000) * 10000000 + skillId;
}

bool is_shoot_skill_not_switched_to_melee_attack(int nSkillID)
{
    if (nSkillID > CORSAIR_RAPID_FIRE)
    {
        if (nSkillID > ARAN4_COMBO_TEMPEST)
        {
            if (nSkillID <= MECH1_FLAME_LAUNCHER)
            {
                if (nSkillID != MECH1_FLAME_LAUNCHER)
                {
                    if (nSkillID > WH3_ENDURING_FIRE)
                    {
                        if (nSkillID != WH4_EXPLODING_ARROWS && nSkillID != WH4_STINK_BOMB_SHOT && nSkillID !=
                            WH4_WILD_ARROW_BLAST)
                            return 0;
                    }
                    else if (nSkillID != WH3_ENDURING_FIRE)
                    {
                        if (nSkillID > WH2_JAGUAR_RAWR)
                        {
                            if (nSkillID != WH2_JAGUAROSHI_2)
                                return 0;
                        }
                        else if (nSkillID < WH2_RICOCHET && nSkillID != WH1_TRIPLE_SHOT)
                        {
                            return 0;
                        }
                    }
                }
                return 1;
            }
            if (nSkillID <= MECH3_PUNCH_LAUNCHER)
            {
                if (nSkillID != MECH3_PUNCH_LAUNCHER)
                {
                    if (nSkillID > MECH2_ENHANCED_GATLING_GUN)
                    {
                        if (nSkillID != MECH3_MECH_SIEGE_MODE)
                            return 0;
                    }
                    else if (nSkillID < MECH2_ENHANCED_FLAME_LAUNCHER && nSkillID != MECH1_GATLING_GUN)
                    {
                        return 0;
                    }
                }
                return 1;
            }
            if (nSkillID == MECH4_MECH_MISSILE_TANK)
                return 1;
            if (nSkillID <= (MECH4_AMPLIFIER_ROBOT_AF11 | 0x1))
                return 0;
            return nSkillID <= MECH4_MECH_SIEGE_MODE;
        }
        else
        {
            if (nSkillID == ARAN4_COMBO_TEMPEST)
                return 1;
            if (nSkillID > NW1_LUCKY_SEVEN)
            {
                if (nSkillID > TB3_SHARK_WAVE)
                    return nSkillID == ARAN2_COMBO_SMASH || nSkillID == ARAN3_COMBO_FENRIR;
                if (nSkillID >= TB3_SPARK)
                    return 1;
                if (nSkillID <= NW3_AVENGER)
                    return nSkillID == NW3_AVENGER || nSkillID == NW2_VAMPIRE;
                if (nSkillID < NW3_TRIPLE_THROW)
                    return 0;
                return nSkillID <= NW3_POISON_BOMB;
            }
            else
            {
                if (nSkillID == NW1_LUCKY_SEVEN)
                    return 1;
                if (nSkillID > WA2_FINAL_ATTACK)
                {
                    if (nSkillID <= WA3_HURRICANE)
                        return nSkillID >= WA3_ARROW_RAIN || nSkillID == WA2_STORM_BREAK;
                    if (nSkillID < WA3_WIND_PIERCING)
                        return 0;
                    return nSkillID <= WA3_WIND_SHOT;
                }
                else
                {
                    if (nSkillID == WA2_FINAL_ATTACK)
                        return 1;
                    if (nSkillID > DW2_SOUL_BLADE)
                        return nSkillID == WA1_DOUBLE_SHOT;
                    if (nSkillID == DW2_SOUL_BLADE)
                        return 1;
                    if (nSkillID < CORSAIR_BATTLESHIP_CANNON)
                        return 0;
                    return nSkillID <= CORSAIR_BATTLESHIP_TORPEDO;
                }
            }
        }
    }
    if (nSkillID == CORSAIR_RAPID_FIRE)
        return 1;
    if (nSkillID > MARKSMAN_DRAGONS_BREATH)
    {
        if (nSkillID <= PIRATE_DOUBLE_SHOT)
        {
            if (nSkillID != PIRATE_DOUBLE_SHOT)
            {
                if (nSkillID > HERMIT_AVENGER)
                {
                    if (nSkillID != NIGHTLORD_TAUNT && nSkillID != NIGHTLORD_TRIPLE_THROW && nSkillID != SHADOWER_TAUNT)
                        return 0;
                }
                else if (nSkillID < HERMIT_SHADOW_MESO
                    && nSkillID != MARKSMAN_SNIPE
                    && nSkillID != THIEF_LUCKY_SEVEN
                    && nSkillID != ASSASSIN_DRAIN)
                {
                    return 0;
                }
            }
            return 1;
        }
        if (nSkillID <= OUTLAW_BURST_FIRE)
            return nSkillID == OUTLAW_BURST_FIRE
                || nSkillID == BUCCANEER_ENERGY_ORB
                || nSkillID == GUNSLINGER_INVISIBLE_SHOT
                || nSkillID == GUNSLINGER_RECOIL_SHOT;
        if (nSkillID >= OUTLAW_FLAMETHROWER)
            return nSkillID <= OUTLAW_HOMING_BEACON || nSkillID == CORSAIR_BULLSEYE;
        return 0;
    }
    if (nSkillID == MARKSMAN_DRAGONS_BREATH)
        return 1;
    if (nSkillID > BOWMASTER_HURRICANE)
    {
        if (nSkillID <= SNIPER_MORTAL_BLOW)
            return nSkillID == SNIPER_MORTAL_BLOW
                || nSkillID == CROSSBOWMAN_FINAL_ATTACK_CROSSBOW
                || nSkillID == CROSSBOWMAN_POWER_KNOCKBACK
                || nSkillID == CROSSBOWMAN_IRON_ARROW_CROSSBOW;
        if (nSkillID > SNIPER_STRAFE)
            return nSkillID == MARKSMAN_PIERCING_ARROW;
        if (nSkillID == SNIPER_STRAFE)
            return 1;
        if (nSkillID < SNIPER_BLIZZARD)
            return 0;
        return nSkillID <= SNIPER_ARROW_ERUPTION;
    }
    if (nSkillID >= BOWMASTER_DRAGONS_BREATH)
        return 1;
    if (nSkillID > HUNTER_ARROW_BOMB_BOW)
    {
        if (nSkillID > RANGER_ARROW_RAIN)
        {
            if (nSkillID != RANGER_STRAFE)
                return 0;
        }
        else if (nSkillID < RANGER_INFERNO && nSkillID != RANGER_MORTAL_BLOW)
        {
            return 0;
        }
        return 1;
    }
    if (nSkillID == HUNTER_ARROW_BOMB_BOW)
        return 1;
    if (nSkillID > HUNTER_FINAL_ATTACK_BOW)
    {
        if (nSkillID == HUNTER_POWER_KNOCKBACK)
            return 1;
    }
    else
    {
        if (nSkillID == HUNTER_FINAL_ATTACK_BOW)
            return 1;
        if (nSkillID >= BOWMAN_ARROW_BLOW)
            return nSkillID <= BOWMAN_DOUBLE_SHOT;
    }
    return 0;
}

int get_skill_root_from_skill(int skillId)
{
    return skillId / 10000;
}

bool is_shoot_skill_not_consuming_bullet(int skillId)
{
    if (!is_shoot_skill_not_using_shooting_weapon(skillId))
    {
        if (skillId < 0x21612aa)
        {
            if (skillId != 0x21612a9)
            {
                if (skillId < 0xc7e7ce)
                {
                    if ((((skillId != 0xc7e7cd) && (skillId != 0x2f514b)) && (skillId != 0x30d7eb)) &&
                        (skillId != 0x3eba9c))
                    {
                        return false;
                    }
                }
                else if ((skillId != 0xd72a0e) && (skillId != 0x1f914ca))
                {
                    return false;
                }
            }
        }
        else if (skillId < 0x217c068)
        {
            if (skillId != 0x217c067)
            {
                if (skillId < 0x2179953)
                {
                    if ((skillId < 0x2179951) && (skillId != 0x21612ac))
                    {
                        return false;
                    }
                }
                else if (skillId != 0x217c05c)
                {
                    return false;
                }
            }
        }
        else if ((skillId != 0x217e76d) && ((skillId < 0x217e774 || (0x217e775 < skillId))))
        {
            return false;
        }
    }
    return true;
}

bool is_vehicle_skill(int skillId)
{
    bool bVar1{};

    if (skillId < 0x13157fd)
    {
        if (skillId == 0x13157fc)
        {
            return true;
        }
        if (skillId < 0x989a6d)
        {
            if (skillId == 0x989a6c)
            {
                return true;
            }
            if (skillId == 0x3ec)
            {
                return true;
            }
            bVar1 = skillId == 0x4faa8e;
        }
        else
        {
            bVar1 = skillId == 0x13130ec;
        }
    }
    else
    {
        if (skillId == 0x1c9c76c)
        {
            return true;
        }
        if (skillId == 0x1f78e29)
        {
            return true;
        }
        bVar1 = skillId == 0x21612aa;
    }
    if (bVar1)
    {
        return true;
    }
    return false;
}

bool is_event_vehicle_skill(int skillId)
{
    switch (skillId % 10000)
    {
    case 0x401:
    case 0x403:
    case 0x404:
    case 0x405:
    case 0x406:
    case 0x407:
    case 0x409:
    case 0x40a:
    case 0x40b:
    case 0x40c:
    case 0x40d:
    case 0x40e:
    case 0x40f:
    case 0x410:
    case 0x412:
    case 0x414:
    case 0x419:
    case 0x41a:
    case 0x41b:
    case 0x41c:
    case 0x41d:
    case 0x41e:
    case 0x427:
    case 0x428:
    case 0x429:
    case 0x42d:
    case 0x42e:
    case 0x42f:
        return true;
    default:
        return false;
    }
}

bool is_jump_rush_skill(int skillId)
{
    return skillId == 4331005;
}

bool is_dual_add_damage_except_skill(int nSkillID)
{
    return (nSkillID >= 4341002 && nSkillID <= 4341004);
}

bool is_teleport_skill(int param_1)
{
    if (((((param_1 != 0x200f0a) && (param_1 != 0x2195aa)) && (param_1 != 0x231c49)) &&
            ((param_1 != 0x89582a && (param_1 != 0x7a15e9)))) &&
        ((param_1 != 0xb8a58b &&
            ((param_1 != 0x1513c09 && (param_1 != 0x1e84bea))))))
    {
        return false;
    }
    return true;
}

int is_self_destruct_summon_skill(long param_1)
{
    if (param_1 < 0x217c05e)
    {
        if ((((param_1 != 0x217c05d) && (param_1 != 0x1f914d0)) && (param_1 != 0x2179949)) &&
            (param_1 != 0x217c05a))
        {
            return 0;
        }
    }
    else if (param_1 != 0x217c063)
    {
        if (param_1 < 0x217e771)
        {
            return 0;
        }
        if (0x217e773 < param_1)
        {
            return 0;
        }
    }
    return 1;
}

long get_summon_idx_from_skill_id(long param_1)
{
    if (param_1 < 0x30fefe)
    {
        if (param_1 == 0x30fefd)
        {
            return 2;
        }
        if (param_1 < 0x2f785e)
        {
            if (param_1 == 0x2f785d)
            {
                return 2;
            }
            if (param_1 == 0x23435e)
            {
                return 1;
            }
            if (param_1 == 0x2f785a)
            {
                return 1;
            }
        }
        else if (param_1 == 0x30fefa)
        {
            return 1;
        }
    }
    else if (param_1 < 0x1f93bdc)
    {
        if ((param_1 == 0x1f93bdb) || (param_1 == 0x423d0e))
        {
            return 1;
        }
        if (param_1 == 0xc80edc)
        {
            return 1;
        }
    }
    else if (param_1 == 0x1f93bdd)
    {
        return 2;
    }
    return 0;
}

long get_summoned_attack_delay(long param_1, long param_2)
{
    if (param_1 < 0x217c05b)
    {
        if (param_1 != 0x217c05a)
        {
            if ((param_1 == 0x4f837a) || (param_1 == 0x4fa6a2))
            {
                return 0x5dc;
            }
            if (param_1 != 0x1f914d0)
            {
                return 3000;
            }
        }
    }
    else if (param_1 != 0x217e771)
    {
        if (param_1 != 0x217e773)
        {
            return 3000;
        }
        return 300;
    }

    auto skill = CSkillInfo::GetInstance()->GetSkill(param_1);
    if (skill && (0 < param_2))
    {
        auto skillData = skill->GetLevelData(param_2);
        auto x = skillData._ZtlSecureGet_nX();
        return x * 1000;
    }
    return 3000;
}

int is_invulnerable_summon_skill(long moveAbility, long skillId)
{
    int iVar1;
    bool bVar2{};

    if (moveAbility == 0)
    {
        if (skillId < 35101002)
        {
            if (skillId == 35101001)
            {
                return 1;
            }
            if (skillId < 32111007)
            {
                if (skillId == 32111006)
                {
                    return 1;
                }
                if (skillId == 4111007)
                {
                    return 1;
                }
                bVar2 = skillId == 0x0040413f;
            }
            else
            {
                bVar2 = skillId == 33101008;
            }
        }
        else
        {
            if (35111011 < skillId)
            {
                if ((0x217e770 < skillId) && (skillId < 35121012))
                {
                    return 1;
                }
                return is_summon_octopus_skill(skillId);
            }
            if (skillId == 35111011)
            {
                return 1;
            }
            if (skillId == 0x217c05a)
            {
                return 1;
            }
            bVar2 = skillId == 35111005;
        }
        if (!bVar2)
        {
            return is_summon_octopus_skill(skillId);
        }
    }
    return 1;
}

bool is_summon_octopus_skill(int skillId)
{
    return (skillId == 5211001) && (skillId == 5220002); // TODO
}

int get_skill_degree_from_skill_root(int skillId)
{
    if (skillId == 0)
    {
        return 0;
    }
    if (skillId == (skillId / 100) * 100)
    {
        return 1;
    }
    //TODO
    return (-(skillId % 10 != 0) & 0xfffffffe) + 2;
}

bool is_delayed_hit_sfx_needed_skill(int skillId)
{
    return skillId == 0x30fefb;
}

bool is_jaguar_melee_attack_skill(int skillId)
{
    bool bVar1 = false;
    if (skillId < 33111003)
    {
        if (skillId == 33111002)
        {
            return true;
        }
        if (skillId == 33101002)
        {
            return true;
        }
        bVar1 = skillId == 33101007;
    }
    else
    {
        if (skillId == 33111006)
        {
            return true;
        }
        bVar1 = skillId == 33121002;
    }
    if (bVar1)
    {
        return true;
    }
    return false;
}

int get_required_combo_count(int nSkillId)
{
    switch (nSkillId)
    {
    case 21110004:
        return 100;
    case 21100004:
    case 21100005:
        return 30;
    case 21120006:
    case 21120007:
        return 200;
    default:
        return 0;
    }
}

int get_element_by_charged_skillid(int32_t nChargeSkillID)
{
    if (nChargeSkillID > PALADIN_DIVINE_CHARGE)
    {
        if (nChargeSkillID != DW3_SOUL_CHARGE)
        {
            if (nChargeSkillID == TB2_LIGHTNING_CHARGE)
                return 3;
            return nChargeSkillID == ARAN3_SNOW_CHARGE;
        }
    }
    else if (nChargeSkillID != PALADIN_DIVINE_CHARGE)
    {
        if (nChargeSkillID == WK_FIRE_CHARGE)
            return 2;
        if (nChargeSkillID != WK_ICE_CHARGE)
        {
            if (nChargeSkillID == WK_LIGHTNING_CHARGE)
                return 3;
            return 0;
        }
        return 1;
    }
    return 5;
}

bool is_bmage_aura_skill(int skillId)
{
    if (skillId < 0x1e9f5b1)
    {
        if (((skillId == 0x1e9f5b0) || (skillId == 0x1e84beb)) ||
            ((0x1e9d289 < skillId && (skillId < 0x1e9d28c))))
        {
            return true;
        }
    }
    else if ((0x1ea1cbf < skillId) && (skillId < 0x1ea1cc2))
    {
        return true;
    }
    return false;
}

bool is_upgrade_skill(int nSkillID)
{
    return nSkillID == OUTLAW_BURST_FIRE || nSkillID == CORSAIR_WRATH_OF_THE_OCTOPI || nSkillID == CORSAIR_BULLSEYE;
}

int get_required_height_jump_rush(int skillId)
{
    int result = skillId == 4331005 ? -106 : 0;
    return result + 0x69;
}

bool is_able_to_jumpshoot(int skillId, int job)
{
    bool bVar1{};

    if (skillId < 0x1f914ca)
    {
        if (skillId == 0x1f914c9)
        {
            return true;
        }
        if (skillId == 0)
        {
            return job / 100 == 0x21;
        }
        bVar1 = skillId == 0x1f78e28;
    }
    else
    {
        if (skillId == 0x1f962e9)
        {
            return true;
        }
        bVar1 = skillId == 0x1f962f1;
    }
    if (bVar1)
    {
        return true;
    }
    return false;
}

int get_max_gauge_time(int skillId)
{
    if (!is_keydown_skill(skillId))
    {
        return 0;
    }
    if (skillId < 0x4dd5cd)
    {
        if (skillId != 0x4dd5cc)
        {
            if (0x312609 < skillId)
            {
                if (skillId == 0x423d0a)
                {
                    return 600;
                }
                if (skillId != 0x423d0b)
                {
                    return 2000;
                }
                return 0x4b0;
            }
            if (skillId == 0x312609)
            {
                return 900;
            }
            if (((skillId != 0x205d29) && (skillId != 0x21e3c9)) && (skillId != 0x236a69))
            {
                return 2000;
            }
        }
        return 1000;
    }
    if (skillId < 0x1518a29)
    {
        if (skillId == 0x1518a28)
        {
            return 500;
        }
        if (skillId == 0x4f5c6a)
        {
            return 1000;
        }
        if (skillId == 0x00d7511e)
        {
            return 1000;
        }
        if (skillId == 0x00e66c4b)
        {
            return 1000;
        }
    }
    else
    {
        if (skillId == 0x151ff59)
        {
            return 500;
        }
        if (skillId == 0x1f914cd)
        {
            return 900;
        }
    }
    return 2000;
}

int is_antirepeat_buff_skill(long param_1)
{
    bool bVar1{};

    if (param_1 < 0x3eba9a)
    {
        if (param_1 == 0x3eba99)
        {
            return 1;
        }
        if (param_1 < 0x205d29)
        {
            if (param_1 == 0x205d28)
            {
                return 1;
            }
            if (param_1 < 0x12a189)
            {
                if (param_1 == 0x12a188)
                {
                    return 1;
                }
                if (0x111ae8 < param_1)
                {
                    if (param_1 == 0x12536e)
                    {
                        return 1;
                    }
                    if (param_1 < 0x127a81)
                    {
                        return 0;
                    }
                    if (0x127a82 < param_1)
                    {
                        return 0;
                    }
                    return 1;
                }
                if (param_1 == 0x111ae8)
                {
                    return 1;
                }
                if (param_1 == 0xf462b)
                {
                    return 1;
                }
                if (param_1 == 0x10ccce)
                {
                    return 1;
                }
                bVar1 = param_1 == 0x10f3df;
            }
            else if (param_1 < 0x142829)
            {
                if (param_1 == 0x142828)
                {
                    return 1;
                }
                if (param_1 < 0x13da0e)
                {
                    return 0;
                }
                if (param_1 < 0x13da10)
                {
                    return 1;
                }
                bVar1 = param_1 == 0x14011f;
            }
            else
            {
                if (param_1 == 0x200f09)
                {
                    return 1;
                }
                bVar1 = param_1 == 0x200f0b;
            }
        }
        else if (param_1 < 0x236a69)
        {
            if (param_1 == 0x236a68)
            {
                return 1;
            }
            if (param_1 < 0x231c4d)
            {
                if (param_1 == 0x231c4c)
                {
                    return 1;
                }
                if (param_1 == 0x2195a9)
                {
                    return 1;
                }
                if (param_1 == 0x2195ab)
                {
                    return 1;
                }
                bVar1 = param_1 == 0x21e3c8;
            }
            else
            {
                if (param_1 == 0x234359)
                {
                    return 1;
                }
                bVar1 = param_1 == 0x23435b;
            }
        }
        else if (param_1 < 0x2f9f6b)
        {
            if (param_1 == 0x2f9f6a)
            {
                return 1;
            }
            if (param_1 == 0x236a6d)
            {
                return 1;
            }
            bVar1 = param_1 == 0x2f9f68;
        }
        else
        {
            if (param_1 == 0x312608)
            {
                return 1;
            }
            bVar1 = param_1 == 0x3e938c;
        }
    }
    else if (param_1 < 0xa9634c)
    {
        if (param_1 == 0x00a9634b)
        {
            return 1;
        }
        if (param_1 < 0x4dfce0)
        {
            if (param_1 == 0x4dfcdf)
            {
                return 1;
            }
            if (param_1 < 0x41c7da)
            {
                if (param_1 == 0x41c7d9)
                {
                    return 1;
                }
                if (param_1 == 0x3ee1a8)
                {
                    return 1;
                }
                if (param_1 == 0x00401a2b)
                {
                    return 1;
                }
                bVar1 = param_1 == 0x406848;
            }
            else
            {
                if (param_1 == 0x423d08)
                {
                    return 1;
                }
                bVar1 = param_1 == 0x423d0f;
            }
        }
        else if (param_1 < 0x4f8380)
        {
            if (param_1 == 0x4f837f)
            {
                return 1;
            }
            if (param_1 == 0x4e23e8)
            {
                return 1;
            }
            bVar1 = param_1 == 0x4e23f1;
        }
        else
        {
            if (param_1 == 0x4faa88)
            {
                return 1;
            }
            bVar1 = param_1 == 0xa7dca9;
        }
    }
    else if (param_1 < 0x1524d79)
    {
        if (param_1 == 0x1524d78)
        {
            return 1;
        }
        if (param_1 < 0xe6935e)
        {
            if (param_1 == 0x00e6935d)
            {
                return 1;
            }
            if (param_1 < 0xb8a588)
            {
                return 0;
            }
            if (param_1 < 0xb8a58a)
            {
                return 1;
            }
            bVar1 = param_1 == 0x00d72a0b;
        }
        else
        {
            if (param_1 == 0x14247e8)
            {
                return 1;
            }
            bVar1 = param_1 == 0x151d84b;
        }
    }
    else if (param_1 < 0x1ea20b0)
    {
        if (param_1 == 0x1ea20af)
        {
            return 1;
        }
        if (param_1 == 0x1527488)
        {
            return 1;
        }
        bVar1 = param_1 == 0x1e9f99c;
    }
    else
    {
        if (param_1 == 0x1f962ef)
        {
            return 1;
        }
        bVar1 = param_1 == 0x217c065;
    }
    if (bVar1)
    {
        return 1;
    }
    return 0;
}

bool is_command_skill(long param_1)
{
    bool bVar1{};

    if (param_1 < 0x1421cf9)
    {
        if (0x1421cf5 < param_1)
        {
            return true;
        }
        if (0x141f5e2 < param_1)
        {
            if (0x1421cf4 < param_1)
            {
                return false;
            }
            if (0x1421cf2 < param_1)
            {
                return true;
            }
            if (param_1 < 0x141f5e4)
            {
                return false;
            }
            if (param_1 < 0x141f5e6)
            {
                return true;
            }
            return false;
        }
        if (21100000 < param_1)
        {
            return true;
        }
        if (param_1 < 0x1312d11)
        {
            if (0x1312d0d < param_1)
            {
                return true;
            }
            bVar1 = param_1 == 0x4215fd;
        }
        else
        {
            bVar1 = param_1 == 0x1406f42;
        }
    }
    else
    {
        if (param_1 < 0x1e9d289)
        {
            if (param_1 == 0x1e9d288)
            {
                return true;
            }
            if (param_1 < 0x142440b)
            {
                if (0x1424408 < param_1)
                {
                    return true;
                }
                if (0x1424404 < param_1)
                {
                    if (param_1 < 0x1424408)
                    {
                        return true;
                    }
                    return false;
                }
                return false;
            }
            if (param_1 < 0x1e84be8)
            {
                return false;
            }
            if (param_1 < 0x1e84bea)
            {
                return true;
            }
            return false;
        }
        if (param_1 == 0x1e9f99a)
        {
            return true;
        }
        bVar1 = param_1 == 0x1ea20aa;
    }
    if (!bVar1)
    {
        return false;
    }
    return true;
}

bool is_able_notweapon_skill(int skillId)
{
    return 4321002 == skillId;
}

bool is_prepare_bomb_skill(int skillId)
{
    switch (skillId)
    {
    case 4341003:
    case 5201002:
    case 14111006:
        return true;
    default:
        return false;
    }
}

bool is_mirror_excepted_skill(int skillId)
{
    switch (skillId)
    {
    case 4321002:
    case 4331003:
    case 4341003:
    case 4341004:
        return true;
    default:
        return false;
    }
}

bool is_damage_shared_skill(int nSkillID)
{
    bool check{};
    if (nSkillID > 0x1421cf3)
    {
        if (nSkillID > 0x1424405)
        {
            if (nSkillID < 0x1424409)
            {
            label_90314a:
                return false;
            }
            if (nSkillID <= 0x142440a)
            {
                goto label_903183;
            }
            goto label_90314a;
        }
        if (nSkillID == 0x1424405)
        {
            goto label_903183;
        }
        if (nSkillID < 0x1421cf6)
        {
            goto label_90314a;
        }
        check = nSkillID <= 0x1421cf8;
    }
    else
    {
        if (nSkillID == 0x1421cf3)
        {
        label_903183:
            return true;
        }
        if (nSkillID > 0x1406f42)
        {
            if (nSkillID < 0x141f5e1)
            {
                goto label_90314a;
            }
            check = nSkillID <= 0x141f5e2;
        }
        else
        {
            if (nSkillID == 0x1406f42)
            {
                goto label_903183;
            }
            if (nSkillID == 0)
            {
                goto label_903183;
            }
            if (nSkillID <= 0x1312d0d)
            {
                goto label_90314a;
            }
            check = nSkillID <= 0x1312d10;
        }
    }
    if (check)
    {
        goto label_903183;
    }
    goto label_90314a;
}

bool is_not_prepare_bomb_skill(int skillId)
{
    return skillId == 4321002;
}

bool is_shoot_skill_not_using_shooting_weapon(int skillId)
{
    bool bVar1{};

    if (skillId < 0xe69360)
    {
        if (0xe6935d < skillId)
        {
            return true;
        }
        if (skillId < 0x4e23eb)
        {
            if (skillId == 0x4e23ea)
            {
                return true;
            }
            if (skillId == 0x3ee1ab)
            {
                return true;
            }
            bVar1 = skillId == 0x40684b;
        }
        else
        {
            bVar1 = skillId == 0x00a9634c;
        }
    }
    else if (skillId < 0x1424407)
    {
        if (skillId == 0x1424406)
        {
            return true;
        }
        if (skillId == 0x141f5e4)
        {
            return true;
        }
        bVar1 = skillId == 0x1421cf4;
    }
    else
    {
        bVar1 = skillId == 0x1f914cf;
    }
    if (bVar1)
    {
        return true;
    }
    return false;
}

bool is_unregisterd_skill(int skillId)
{
    return skillId / 10000000 == 9;
}

int get_skill_id_from_vehicle_id(int nVehicleID)
{
    switch (nVehicleID)
    {
    case 0x1d7ae4:
        return 0x41a;
    default:
        return 0;
    case 0x1d7ae6:
        return 0x401;
    case 0x1d7ae7:
        return 0x403;
    case 0x1d7ae8:
        return 0x404;
    case 0x1d7ae9:
        return 0x405;
    case 0x1d7aea:
        return 0x407;
    case 0x1d7aeb:
        return 0x406;
    case 0x1d7aec:
        return 0x40b;
    case 0x1d7aed:
        return 0x409;
    case 0x1d7aee:
        return 0x40a;
    case 0x1d7af1:
        return 0x40c;
    case 0x1d7af2:
        return 0x40d;
    case 0x1d7af3:
        return 0x40e;
    case 0x1d7af4:
        return 0x40f;
    case 0x1d7af5:
        return 0x410;
    case 0x1d7af6:
        return 0x412;
    case 0x1d7af7:
        return 0x414;
    case 0x1d7af9:
        return 0x419;
    case 0x1d7afa:
        return 0x41b;
    case 0x1d7afb:
        return 0x41c;
    case 0x1d7afc:
        return 0x41d;
    case 0x1d7afd:
        return 0x41e;
    case 0x1d7b02:
        return 0x427;
    case 0x1d7b03:
        return 0x428;
    case 0x1d7b05:
        return 0x429;
    case 0x1d7b06:
        return 0x42d;
    case 0x1d7b07:
        return 0x42e;
    case 0x1d7b08:
        return 0x42f;
    }
}

int get_cool_time(int skillId)
{
    bool bVar1{};

    if (skillId < 0x4f837e)
    {
        if (0x4f837b < skillId)
        {
            return 0x1c2;
        }
        if (skillId < 0x406850)
        {
            if (skillId == 0x40684f)
            {
                return 200;
            }
            if (skillId < 0x2f9b8b)
            {
                if (skillId == 0x2f9b8a)
                {
                    return 0x5dc;
                }
                if (skillId == 0x111ae9)
                {
                    return 500;
                }
                if (skillId == 0x142829)
                {
                    return 500;
                }
                if (skillId != 0x2f514b)
                {
                    return 0;
                }
            }
            else if (skillId != 0x30d7eb)
            {
                if (skillId == 0x3d0ceb)
                {
                    return 1000;
                }
                if (skillId == 0x3ee1b0)
                {
                    return 500;
                }
                return 0;
            }
            return 400;
        }
        if (skillId < 0x4e23f0)
        {
            if (skillId == 0x4e23ef)
            {
                return 200;
            }
            if (skillId == 0x41eeea)
            {
                return 1000;
            }
            if (skillId == 0x423d0b)
            {
                return 2000;
            }
            if (skillId == 0x4e23ed)
            {
                return 500;
            }
            return 0;
        }
        if (skillId == 0x4f5c6a)
        {
            return 1000;
        }
        bVar1 = skillId == 0x4f5c6e;
    }
    else if (skillId < 0x1c9c7ad)
    {
        if (skillId == 0x1c9c7ac)
        {
            return 1000;
        }
        if (skillId < 0xe6935d)
        {
            if (skillId == 0xe6935c)
            {
                return 200;
            }
            if (skillId == 0xa9634d)
            {
                return 0x5dc;
            }
            if (skillId == 0xc7e7cd)
            {
                return 400;
            }
            if (skillId == 0x00d7511e)
            {
                return 0x5dc;
            }
            return 0;
        }
        if (skillId == 0x1407329)
        {
            return 1000;
        }
        bVar1 = skillId == 0x151d849;
    }
    else
    {
        if (skillId < 0x1f962ee)
        {
            if (skillId == 0x1f962ed)
            {
                return 1000;
            }
            if (skillId == 0x1e9d289)
            {
                return 500;
            }
            if (skillId == 0x1e9f9a3)
            {
                return 500;
            }
            if (skillId != 0x1f914ca)
            {
                return 0;
            }
            return 400;
        }
        if (skillId == 0x21612a9)
        {
            return 1000;
        }
        bVar1 = skillId == 0x2179951;
    }
    if (!bVar1)
    {
        return 0;
    }
    return 1000;
}

int get_dragon_action_code_from_name(Ztl_bstr_t bsName)
{
    //TODO 004baaf0
    UNIMPLEMENTED;
}

int32_t get_random_shoot_attack_action(int32_t nAttackActionType, int32_t nWT, const SKILLENTRY* pSkill, int32_t nSLV,
                                       uint32_t nRandNumber)
{
    auto v6 = 0;
    if ((nAttackActionType - 1) > 9)
        return -1;
    if (!pSkill)
        goto LABEL_9;
    if (!pSkill->IsCorrectWeaponType(nWT, -1))
        return -1;
    if (pSkill->IsActionAppointed(nSLV))
    {
        if (pSkill->nSkillType != 3)
            return pSkill->GetRandomAppointedAction(nSLV, nRandNumber);
        goto LABEL_8;
    }
    if (pSkill->nSkillType != 3)
    {
    LABEL_9:
        v6 = 2 * nAttackActionType - 2;
        goto LABEL_10;
    }
LABEL_8:
    v6 = 2 * nAttackActionType - 1;
LABEL_10:
    auto n = _D_ASHOOTATTACKACTI[v6][0];
    if (n <= 0)
        return -1;
    auto i = nRandNumber % n;
    return _D_ASHOOTATTACKACTI[v6][i + 1];
}


bool __cdecl is_nonslot_skill(long skillId)
{
    if (skillId < 0x131312c)
    {
        if (skillId < 0x131312a)
        {
            if (skillId < 0x41eee9)
            {
                if ((skillId != 0x41eee8) && ((skillId < 0x42a || (0x42b < skillId))))
                {
                    return false;
                }
            }
            else
            {
                if (skillId < 0x989aaa)
                {
                    return false;
                }
                if (0x989aab < skillId)
                {
                    return false;
                }
            }
        }
    }
    else if (skillId < 0x1c9c7ac)
    {
        if (skillId < 0x1c9c7aa)
        {
            if (skillId < 0x131583a)
            {
                return false;
            }
            if (0x131583b < skillId)
            {
                return false;
            }
        }
    }
    else if (skillId != 0x1f78e2a)
    {
        return false;
    }
    return true;
}
