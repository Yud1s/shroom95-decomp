#include "BaseUtils.hpp"

#include <skills_ids.h>
#include <WvsStatics.h>
#include <ActionFrame/ActionFrame.hpp>
#include <QuestMan/QuestMan.hpp>
#include <StringDecoder/StringDecoder.hpp>

#include "WvsContext/WvsContext.hpp"

#include "asm_helper.h"
#include "SkillUtils.hpp"
#include "JobUtils.hpp"
#include "WvsApp/WvsApp.hpp"
#include "MonsterBookMan/MonsterBookMan.hpp"

const wchar_t*__cdecl _Int2StrW(int32_t n, wchar_t* s)
{
    return _itow(n, s, 10);
}

const char*__cdecl _Int2Str(int32_t n, char* s)
{
    return _itoa(n, s, 10);
}

_x_com_ptr<IUnknown> __cdecl get_unknown(Ztl_variant_t& v)
{
    const auto unk = v.GetUnknown(false, false);
    if (!unk)
    {
        return {};
        //_com_raise_error(E_POINTER);
    }


    _x_com_ptr<IWzUOL> uol;
    const auto hr = unk->QueryInterface(__uuidof(IWzUOL), reinterpret_cast<void**>(&uol));
    if (hr < 0 && hr != E_NOINTERFACE)
    {
        _com_issue_error(hr);
    }

    if (hr == E_NOINTERFACE)
    {
        return _x_com_ptr(unk);
    }

    const auto path = uol->GetfilePath();
    const auto obj = get_rm()->GetObjectA(path, vtMissing, vtMissing).GetUnknown();
    return _x_com_ptr(obj);

    /*
        _x_com_ptr<IWzUOL> uol(unk);
        auto path = uol->GetfilePath();

        Ztl_variant_t param;
        Ztl_variant_t aux;
        auto obj = _D_G_RM->GetObjectA(path, param, aux);
        return _x_com_ptr<IUnknown>(obj.GetUnknown(false, false));*/
}

const uint32_t g_anWeaponType[18] =
{
    0x00000000, 0x0000001e, 0x0000001f, 0x00000020,
    0x00000021, 0x00000025, 0x00000026, 0x00000028,
    0x00000029, 0x0000002a, 0x0000002b, 0x0000002c,
    0x0000002d, 0x0000002e, 0x0000002f, 0x00000030,
    0x00000031, 0x00000027
};

static std::array<IWzFont*, 0x61> spFontBasic{};

/*NAKED */
//TODO(NAKED)
int get_magic_attack_element_attribute(wchar_t const* s, int32_t* nElemAttr)
{
    int result; // eax

    switch (*s)
    {
    case 0u:
        *nElemAttr = 0;
        result = 1;
        break;
    case 0x46u:
    case 0x66u:
        *nElemAttr = 2;
        result = 1;
        break;
    case 0x49u:
    case 0x69u:
        *nElemAttr = 1;
        result = 1;
        break;
    case 0x4Cu:
    case 0x6Cu:
        *nElemAttr = 3;
        result = 1;
        break;
    case 0x53u:
    case 0x73u:
        *nElemAttr = 4;
        result = 1;
        break;
    default:
        result = 0;
        break;
    }
    return result;
}

void GetModuleFolderName(char* sDir)
{
    GetModuleFileNameA(nullptr, sDir, 0x104);
    // TODO strip file

    UNIMPLEMENTED;
}

long _anon_calc_evar(long nEVA, long nMobACC, long nTargetLevel, long nAttackLevel, long nEr)
{
    int v5; // eax
    long double v6; // st7
    int v7; // eax
    int result; // eax
    int v9; // ecx

    v5 = sqrt(nEVA);
    v6 = sqrt(nMobACC);
    v7 = v5 - v6 + nEr * (v5 - v6) / 100;
    result = v7 <= 0 ? 0 : v7;
    if (nAttackLevel > nTargetLevel)
    {
        v9 = 5 * (nAttackLevel - nTargetLevel);
        if (v9 >= result)
            v9 = result;
        result -= v9;
    }
    return result;
}

ZXString<char> format_comma_integer(int32_t i)
{
    auto commaStr = StringPool::GetInstance().GetString(0x1a15);
    auto tmp = ZXString<char>::FromFmt(commaStr.c_str(), i);

    //TODO(game) commas

    return tmp;
}

int32_t get_mobspecies_code_from_name(Ztl_bstr_t sName)
{
    static Ztl_bstr_t MOB_SPECIES_NAME[4] = {
        _GetBSTR(0x4a8),
        _GetBSTR(0x4a9),
        _GetBSTR(0x1ae1),
        _GetBSTR(0x4aa),
    };

    auto code = 0;

    for (auto& name : MOB_SPECIES_NAME)
    {
        if (name == sName.op_ushort_str())
        {
            return code;
        }

        ++code;
    }

    return 3;
}

int is_fieldtype_upgradetomb_usable(long nFieldType, long nFieldID)
{
    switch (nFieldType)
    {
    case 1:
    case 3:
    case 4:
    case 5:
    case 7:
    case 10:
    case 0xb:
    case 0xf:
        break;
    default:
        if ((nFieldID / 100000000 != 9) && (nFieldID / 1000 != 0x30d9a))
        {
            return nFieldID / 1000000 != 0x186;
        }
    }
    return 0;
}

void make_SingleColor_alpha_blur_1(_x_com_ptr<IWzCanvas> pCanvas, uint16_t color, uint16_t radius)
{
    // TODO 0x95bc60
}

int GetPersonalShopTax(int32_t nMoney)
{
    int result; // eax

    result = 0;
    if (nMoney >= 100000000)
        return (nMoney * 0.03);
    if (nMoney >= 25000000)
        return (nMoney * 0.025);
    if (nMoney >= 0x989680)
        return (nMoney * 0.02);
    if (nMoney >= 0x4C4B40)
        return (nMoney * 0.015);
    if (nMoney >= 1000000)
        return (nMoney * 0.008999999999999999);
    if (nMoney >= 100000)
        return (nMoney * 0.004);
    return result;
}

bool isAllConditionsSatisfied(uint16_t questId)
{
    auto ctx = CWvsContext::GetInstance();
    auto qm = CQuestMan::GetInstance();
    auto itemInfo = CItemInfo::GetInstance();
    auto demand = qm->GetCompleteDemand(questId);


    for (auto& dem : demand->aDemandItem)
    {
        //auto name = itemInfo->GetItemName(dem.nItemID);
        if (dem.nCount > ctx->GetItemCount(dem.nItemID))
        {
            return false;
        }
    }
    auto cd = ctx->GetCharacterData();

    auto nTo = 3;

    ZXString<char> val;
    if (!cd->GetQuest(questId, val))
        return true;

    //TODO(game) parse quest str
    /*
    for (auto& dem: demand->aDemandMob)
    {


        //if (dem.nCount > mobCount)

        nTo += 3;
    }*/


    return true;
}

void make_SingleColor_alpha_blur_0(_x_com_ptr<IWzRawCanvas> pRawCanvas, uint16_t color, uint16_t radius)
{
    // TODO 0x95b790
}

int calculate_parbolic_motion_duration(int32_t y1, int32_t y2, int32_t bDropExplosiveNoOwn)
{
    double v3; // st7
    double v4; // st6
    double v6; // st7
    double t; // [esp+0h] [ebp-10h]
    double v8; // [esp+8h] [ebp-8h]

    v3 = 100.0;
    v4 = 1.0;
    t = 1.0;
    if (bDropExplosiveNoOwn)
    {
        v3 = 180.0;
        v4 = 1.8;
        t = 1.8;
    }
    if (y1 <= y2)
        return (v4 * 1000.0);
    v8 = v4 * 1000.0;
    v6 = (30 * (sqrt(1000.0 * (v3 + y2 - y1 + v3 + y2 - y1) / 800.0) + 1)) + t * 500.0;
    if (v8 >= v6)
        return v6;
    else
        return v8;
}

int _anon_FindGrade_(int grade)
{
    static std::array<int, 4> grades{
        0x5a,
        0xa0,
        0xe6,
        0x153
    };

    for (int i = 0; i < grades.size(); ++i)
    {
        if (grade < grades[i])
        {
            return i;
        }
    }
    return grades.size();
}

void DecSpeed(double* v, double f, double m, double vMax, double tSec)
{
    // st6

    long double v5 = vMax;
    long double v7 = 0.;
    if (vMax >= 0.0)
    {
        if (vMax < *v)
        {
            long double v6 = *v - f / m * tSec;
            *v = v6;
            if (v6 >= vMax)
                return;
            goto LABEL_4;
        }
        v5 = -vMax;
        if (-vMax > *v)
        {
            v7 = f / m * tSec + *v;
            *v = v7;
            if (v7 > v5)
            LABEL_4:
                *v = v5;
        }
    }
}

int DecMPVal(int nJob)
{
    long lVar1{};
    auto ctx = CWvsContext::GetInstance();

    switch ((nJob % 1000) / 100)
    {
    case 0:
        return 8;
    case 1:
        return 4;
    case 2:
        lVar1 = ctx->GetBasicStat()._ZtlSecureGet_nINT();
        return (lVar1 * 3) / 0x28 + 0x1e;
    case 3:
    case 4:
        return 0xc;
    case 5:
        return 0x10;
    default:
        return 0;
    }
}

int DecHPVal(int nJob)
{
    int iVar1;

    switch ((nJob % 1000) / 100)
    {
    case 0:
        return 0xc;
    case 1:
        return 0x36;
    case 2:
        break;
    case 3:
    case 4:
        return 0x14;
    case 5:
        return 0x2a;
    default:
        return 0;
    }
    if (nJob / 100 != 0x20)
    {
        iVar1 = is_evan_job(nJob);
        return (-(iVar1 != 0) & 6) + 10;
    }
    return 0x18;
}

int IncHPVal(int nJob)
{
    int iVar1;

    switch ((nJob % 1000) / 100)
    {
    case 0:
        return 8;
    case 1:
        return 0x14;
    case 2:
        if (nJob / 100 != 0x20)
        {
            iVar1 = is_evan_job(nJob);
            return (-(iVar1 != 0) & 6) + 6;
        }
        return 0x14;
    case 3:
    case 4:
        return 0x10;
    case 5:
        return 0x12;
    default:
        return 0;
    }
}

int IncMPVal(int nJob)
{
    switch ((nJob % 1000) / 100)
    {
    case 0:
        return 6;
    case 1:
        return 2;
    case 2:
        return 0x12;
    case 3:
    case 4:
        return 10;
    case 5:
        return 0xe;
    default:
        return 0;
    }
}

double get_damage_adjusted_by_elemAttr_0(double damage, const SKILLENTRY* pSkill, const int32_t* aDamagedElemAttr,
                                         const int32_t nSLV, double dAdjustByBuff, double dBoost)
{
    if (!pSkill || !nSLV)
        return damage;
    const int nSkillID = pSkill->nSkillID;
    if (pSkill->nSkillID > 3111003)
    {
        if (nSkillID != 3211003)
            return get_damage_adjusted_by_elemAttr_1(damage, aDamagedElemAttr[pSkill->nAttackElemAttr], dAdjustByBuff,
                                                     dBoost);
    }
    else if (pSkill->nSkillID != 3111003)
    {
        if (nSkillID == 2111006)
        {
            const auto damage_adjusted_by_elemAttr = get_damage_adjusted_by_elemAttr_1(
                damage * 0.5, aDamagedElemAttr[4], 1.0, dBoost);
            return get_damage_adjusted_by_elemAttr_1(damage * 0.5, aDamagedElemAttr[2], 1.0, 0.0) +
                damage_adjusted_by_elemAttr;
        }
        if (nSkillID == 2211006)
        {
            const auto adj = get_damage_adjusted_by_elemAttr(damage * 0.5, aDamagedElemAttr[3], 1.0, dBoost);
            return get_damage_adjusted_by_elemAttr_1(damage * 0.5, aDamagedElemAttr[1], 1.0, 0.0) + adj;
        }
        return get_damage_adjusted_by_elemAttr(damage, aDamagedElemAttr[pSkill->nAttackElemAttr], dAdjustByBuff,
                                               dBoost);
    }
    auto& lvlData = pSkill->GetLevelData(nSLV);
    auto x = lvlData._ZtlSecureGet_nX();
    return get_damage_adjusted_by_elemAttr_1(damage, aDamagedElemAttr[pSkill->nAttackElemAttr], x / 100.0, dBoost);
}

double get_damage_adjusted_by_elemAttr_1(double damage, int32_t nAttr, double dAdjust, double dBoost)
{
    long double result; // st7

    switch (nAttr)
    {
    case 1:
        result = (1.0 - dAdjust) * damage;
        break;
    case 2:
        result = (1.0 - (dAdjust * 0.5 + dBoost)) * damage;
        break;
    case 3:
        result = (dAdjust * 0.5 + dBoost + 1.0) * damage;
        if (damage >= result)
            result = damage;
        if (result >= 999999.0)
            result = 999999.0;
        break;
    default:
        result = damage;
        break;
    }
    return result;
}

int get_next_level_exp(int level)
{
    static NEXTLEVEL nextlevel;
    if (level > 200)
    {
        return -1;
    }
    level = level < 1 ? 1 : level;

    return nextlevel.GetNextLevelExp(level);
}

int32_t get_random_magic_attack_action(int32_t nAttackActionType, int32_t nWT, const SKILLENTRY* pSkill, int32_t nSLV,
                                       uint32_t nRandNumber)
{
    int v6; // ecx
    int v7; // esi

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

    auto n = _D_AMAGICATTACKACTI[v6][0];
    if (n <= 0)
        return -1;
    auto randIx = nRandNumber % n;
    return _D_AMAGICATTACKACTI[v6][randIx + 1];
}

long __cdecl get_weapon_typeindex_from_weapon_type(long param_1)
{
    int iVar1;

    iVar1 = 1;
    do
    {
        if (g_anWeaponType[iVar1] == param_1)
        {
            return iVar1;
        }
        iVar1 = iVar1 + 1;
    }
    while (iVar1 < 0x12);
    return 0;
}

void clear_basic_font()
{
    for (auto& font : spFontBasic)
    {
        if (font)
        {
            font->Release();
            font = nullptr;
        }
    }
}

void ResetLSP()
{
    UNIMPLEMENTED;
}

void MSLoop_Remove()
{
    // UNIMPLEMENTED;
    return; // TODO
}

ZXString<char> get_labeled_string_1(_x_com_ptr<IWzProperty> pProp, char* str, Ztl_bstr_t key)
{
    auto sub = pProp->GetItemT<IWzProperty>(Ztl_bstr_t(str));
    if (sub)
    {
        auto label = sub->Getitem(key);
        if (label.vt == VT_BSTR)
        {
            ZXString<char> result;
            result.AssignWideStr(static_cast<const wchar_t*>(label.bstrVal));
            return result;
        }
    }
    return {};
}

ZXString<char> get_labeled_string_0(_x_com_ptr<IWzProperty> pProp, long id, Ztl_bstr_t sKey)
{
    wchar_t buf[16]{};
    _itow_s(id, buf, 10);


    auto sub = pProp->GetItemT<IWzProperty>(buf);
    if (sub)
    {
        auto label = sub->Getitem(sKey);
        if (label.vt == VT_BSTR)
        {
            ZXString<char> result;
            result.AssignWideStr(static_cast<const wchar_t*>(label.bstrVal));
            return result;
        }
    }
    return {};
}

bool is_treat_singly_1(GW_ItemSlotBase& item)
{
    auto id = item.nItemID.GetData();
    auto v1 = id / 1000000;
    if (v1 == 2 || v1 == 3 || v1 == 4)
    {
        auto v2 = id / 10000;
        if (v2 != 207 && v2 != 233 && CompareFileTime(&item.dateExpire, &_D_DB_DATE_20790101__3) >= 0)
            return false;
    }
    return true;
}

ZXString<char> GetChannelName(int channel)
{
    ZXString<char> result;
    switch (channel)
    {
    case -1:
        result = "CashShop";
        break;
    case -2:
        result = "Offline";
        break;
    default:
        result.Format("Channel %d", channel);
        break;
    }

    return result;
}

int32_t get_attack_speed_degree(int32_t nDegree, int32_t nSkillID, int32_t nWeaponBooster, int32_t nPartyBooster,
                                int32_t nAuraBooster, int32_t nFrozen)
{
    int v6; // esi
    // esi
    // eax

    if (nSkillID > DB4_BLOODY_STORM)
    {
        if (nSkillID != DB4_FLYING_ASSAULTER && (nSkillID <= (DB5_MAPLE_WARRIOR | 0x1) || nSkillID > DB5_MONSTER_BOMB))
            goto LABEL_12;
        goto LABEL_11;
    }
    if (nSkillID == DB4_BLOODY_STORM)
    {
    LABEL_11:
        nWeaponBooster = 0;
        nPartyBooster = 0;
        nFrozen = 0;
    LABEL_12:
        v6 = nDegree;
        goto LABEL_13;
    }
    if (nSkillID != THIEF_DOUBLE_STAB)
    {
        if (nSkillID != DB2_SLASH_STORM && nSkillID != DB3_TORNADO_SPIN_ATTACK)
            goto LABEL_12;
        goto LABEL_11;
    }
    v6 = nDegree - 2;
LABEL_13:
    int v7 = nAuraBooster + nPartyBooster + nWeaponBooster + v6;
    if (nFrozen && v7 < 10)
        v7 += ((nFrozen * (10 - v7)) / 100.0);
    if (v7 <= 2)
        return 2;
    int result = v7;
    if (v7 >= 10)
        return 10;
    return result;
}

int get_shield_mastery(const CharacterData& cd)
{
    static const SKILLENTRY* s_pThiefMaster_ShieldMastery = nullptr;
    static const SKILLENTRY* s_pKnight_ShieldMastery = nullptr;

    auto job = cd.characterStat._ZtlSecureGet_nJob();
    auto skillInfo = CSkillInfo::GetInstance();
    if (is_correct_job_for_skill_root(job, 121))
    {
        auto slvl = skillInfo->GetSkillLevel(cd, 1210001, &s_pKnight_ShieldMastery);
        if (slvl)
        {
            auto& lvlData = s_pKnight_ShieldMastery->GetLevelData(slvl);
            return lvlData._ZtlSecureGet_nX();
        }
    }
    else
    {
        if (is_correct_job_for_skill_root(job, 421))
        {
            auto slvl = skillInfo->GetSkillLevel(
                cd,
                0x403D50,
                &s_pThiefMaster_ShieldMastery);
            if (slvl)
            {
                auto& lvlData = s_pThiefMaster_ShieldMastery->GetLevelData(slvl);
                return lvlData._ZtlSecureGet_nX();
            }
        }
    }
    return 0;
}

bool IsAbleTamingMobOneTimeAction(int32_t nAction, int32_t nVehicleID)
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
    //TODO(game) verify
    for (const auto id : RIDING_WILDHUNTER_JAGUAR_0)
    {
        if (id != nVehicleID)
            continue;

        switch (nAction)
        {
        case 57:
        case 142:
        case 207:
        case 208:
        case 212:
        case 214:
        case 229:
        case 247:
        case 248:
        case 249:
        case 250:
        case 251:
        case 253:
        case 255:
        case 256:
            return true;
        default:
            goto LABEL_4;
        }
    }
LABEL_4:
    if (nVehicleID != 1932016)
        return false;
    if (nAction > 222)
    {
        switch (nAction)
        {
        case 224:
        case 225:
        case 226:
        case 228:
        case 233:
        case 235:
        case 236:
        case 238:
        case 239:
        case 240:
        case 241:
        case 242:
        case 243:
        case 244:
        case 245:
        case 246:
        case 257:
        case 258:
        case 259:
        case 260:
        case 261:
        case 262:
        case 263:
        case 264:
            return true;
        default:
            return false;
        }
    }
    if (nAction != 222)
    {
        switch (nAction)
        {
        case 9:
        case 10:
        case 64:
        case 65:
        case 116:
        case 209:
        case 211:
        case 215:
        case 216:
        case 218:
        case 219:
        case 220:
            return true;
        default:
            return false;
        }
    }
    return true;
}

bool IsAbleTamingMobAction(int32_t nAction, int32_t nVehicleID)
{
    if (nVehicleID == 1932016)
    {
        switch (nAction)
        {
        case 0x38:
        case 0xd2:
        case 0xd9:
        case 0xdd:
        case 0xdf:
        case 0xe3:
        case 0xea:
        case 0xed:
            return true;
        default:
            break;
        }
    }

    switch (nAction)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
        return true;
    default:
        return false;
    }
}

bool is_shoot_morph_action(int action)
{
    if ((action != 0x12) && (action != 0x13))
    {
        return false;
    }
    return true;
}

bool is_alert_back_action(int action)
{
    return action == 0x40 || action == 0x41;
}

bool is_pronestab_action(int action)
{
    return action == 0x29 || action == 0x39;
}

bool is_shoot_action(int nAction)
{
    return nAction >= 31 && nAction <= 36
        || nAction == 75
        || nAction == 116
        || nAction == 111
        || nAction == 100
        || nAction == 109
        || nAction == 110
        || nAction == 122
        || nAction == 115
        || nAction == 123
        || nAction == 142
        || nAction == 268
        || nAction == 269
        || nAction == 200
        || nAction == 203;
}

bool is_stand_action(int nAction)
{
    return nAction >= 2 && nAction <= 3
        || nAction == 48
        || nAction == 49
        || nAction == 50
        || nAction == 51
        || nAction == 52
        || nAction == 53
        || nAction == 54
        || nAction == 125;
}

int get_action_from_act_dir(int l)
{
    return l / 2;
}

bool is_magic_attack_action(int action)
{
    return (action - 37) < 3;
}

bool is_sticker_bodypart(int nBodyPart)
{
    return nBodyPart == 1
        || nBodyPart == 5
        || nBodyPart == 6
        || nBodyPart == 7
        || nBodyPart == 8
        || nBodyPart == 11
        || nBodyPart == 3
        || nBodyPart == 2
        || nBodyPart == 12
        || nBodyPart == 13
        || nBodyPart == 15
        || nBodyPart == 16
        || nBodyPart == 9
        || nBodyPart == 4
        || nBodyPart == 10
        || nBodyPart == 18
        || nBodyPart == 19;
}

double get_damage_adjusted_by_assist_charged_elemAttr(double damage, long const* aDamagedElemAttr,
                                                      SecondaryStat const* ss, CharacterData const* cd)
{
    auto assistCharge = ss->_ZtlSecureGet_nAssistCharge_();
    if (!assistCharge)
    {
        return 0.;
    }

    auto rCharge = ss->_ZtlSecureGet_rAssistCharge_();
    auto elem = get_element_by_charged_skillid(rCharge);
    if (!elem)
    {
        return 0.;
    }

    const SKILLENTRY* se{};
    auto lvl = CSkillInfo::GetInstance()->GetSkillLevel(
        *cd,
        *ss,
        rCharge,
        &se);
    if (!lvl)
    {
        return 0.;
    }

    auto lvlData = se->GetLevelData(lvl);
    auto z = lvlData._ZtlSecureGet_nZ();
    auto nDmg = lvlData._ZtlSecureGet_nDamage();

    return get_damage_adjusted_by_elemAttr(
        (nDmg - 1.0) * damage * 0.5,
        aDamagedElemAttr[elem],
        z,
        0.0);
}

bool is_correct_magic_attack(int32_t nAttackActionType, int32_t nWT, int32_t nAction, const SKILLENTRY* pSkill,
                             int32_t nSLV)
{
    if (nAttackActionType - 1 > 9)
        return false;
    auto act = 2 * nAttackActionType - 2;

    if (pSkill)
    {
        if (!pSkill->IsCorrectWeaponType(nWT, -1))
            return false;

        if (pSkill->IsActionAppointed(nSLV) && pSkill->nSkillType != 3)
        {
            return pSkill->IsCorrectAppointedAction(nSLV, nAction);
        }
        if (pSkill->nSkillType == 3)
        {
            act = 2 * nAttackActionType - 1;
        }
    }

    auto n = _D_AMAGICATTACKACTI[act][0];
    for (auto i = 0; i < n; ++i)
    {
        if (_D_AMAGICATTACKACTI[act][i + 1] == nAction)
            return true;
    }

    return false;
}

bool is_correct_siege_attack(int32_t nAction, int nSkillID)
{
    if (nSkillID == MECH4_MECH_SIEGE_MODE && nAction == 226)
        return true;
    if (nSkillID == MECH4_LASER_BLAST && nAction == 224)
    {
        return true;
    }

    if (nSkillID == MECH3_MECH_SIEGE_MODE && nAction == 216)
    {
        return true;
    }
    if (nSkillID == MECH4_MECH_MISSILE_TANK && nAction == 220)
    {
        return true;
    }
    return false;
}

bool is_town_field_id(int dwFieldId)
{
    return dwFieldId == 100000000
        || dwFieldId == 101000000
        || dwFieldId == 102000000
        || dwFieldId == 103000000
        || dwFieldId == 104000000
        || dwFieldId == 105040300
        || dwFieldId == 120000000
        || dwFieldId == 200000000
        || dwFieldId == 211000000
        || dwFieldId == 220000000
        || dwFieldId == 221000000
        || dwFieldId == 222000000
        || dwFieldId == 230000000
        || dwFieldId == 240000000
        || dwFieldId == 250000000
        || dwFieldId == 251000000
        || dwFieldId == 260000000
        || dwFieldId == 261000000
        || dwFieldId == 500000000
        || dwFieldId == 600000000
        || dwFieldId == 680000000
        || dwFieldId == 701000000
        || dwFieldId == 701000200
        || dwFieldId == 702000000
        || dwFieldId == 702100000
        || dwFieldId == 740000000
        || dwFieldId == 741000000
        || dwFieldId == 742000000
        || dwFieldId == 800000000
        || dwFieldId == 801000000;
}

ZXString<char> get_bodyaprt_name(int nBodyPart)
{
    auto v4 = 0;
    switch (nBodyPart)
    {
    case 1:
        v4 = 634;
        break;
    case 2:
        v4 = 635;
        break;
    case 3:
        v4 = 636;
        break;
    case 4:
        v4 = 637;
        break;
    case 5:
        v4 = 639;
        break;
    case 6:
        v4 = 640;
        break;
    case 7:
        v4 = 641;
        break;
    case 8:
        v4 = 642;
        break;
    case 9:
        v4 = 643;
        break;
    case 10:
        v4 = 644;
        break;
    case 12:
    case 13:
    case 15:
    case 16:
        v4 = 645;
        break;
    case 17:
    case 59:
        v4 = 646;
        break;
    case 18:
        v4 = 3848;
        break;
    case 19:
        v4 = 3849;
        break;
    case 20:
        v4 = 3852;
        break;
    case 49:
        v4 = 647;
        break;
    case 50:
        v4 = 648;
        break;
    case 51:
        v4 = 5717;
        break;
    default:
        return {};
    }
    return StringPool::GetInstance().GetString(v4);
}

int GetParcelTax(int nMoney)
{
    auto result = 0;
    if (nMoney >= 100000000)
        return (nMoney * 0.06);
    if (nMoney >= 25000000)
        return (nMoney * 0.05);
    if (nMoney >= 0x989680)
        return (nMoney * 0.04);
    if (nMoney >= 0x4C4B40)
        return (nMoney * 0.03);
    if (nMoney >= 1000000)
        return (nMoney * 0.018);
    if (nMoney >= 100000)
        return (nMoney * 0.008);
    return result;
}

bool is_final_action(int nAction)
{
    return nAction == 8
        || nAction == 12
        || nAction == 15
        || nAction == 18
        || nAction == 21
        || nAction == 36
        || nAction == 39;
}
