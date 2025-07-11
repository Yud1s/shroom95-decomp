#include "ext_field.h"

#include <skills_ids.h>
#include <pcom/xcom_ptr.h>
#include <Util/SkillUtils.hpp>

void Field::SkillInfo::SetFieldType(long _nFieldType)
{
    nFieldType = _nFieldType;
}

void Field::SkillInfo::Parse(_x_com_ptr<IWzProperty> pPropSkill)
{
    if (!pPropSkill)
        return;

    auto classProp = pPropSkill->GetItemT<IWzProperty>(L"class");
    auto count = classProp->Getcount();
    for (auto i = 0; i < count; ++i)
    {
        wchar_t sKey[32]{};
        _itow_s(i, sKey, 10);
        this->lnClass.Insert(classProp->Getitem(sKey).GetInt32(-1));
    }

    auto skillProp = pPropSkill->GetItemT<IWzProperty>(L"skill");
    count = classProp->Getcount();
    for (auto i = 0; i < count; ++i)
    {
        wchar_t sKey[32]{};
        _itow_s(i, sKey, 10);
        this->lnID.Insert(skillProp->Getitem(sKey).GetInt32(0));
    }
}

bool Field::SkillInfo::IsSkill(long nSkillID)
{
    if (nFieldType != 14
        && nFieldType != 18
        && (nSkillID == BEGINNER_BAMBOO_RAIN
            || nSkillID == NOBLESSE_BAMBOO_THRUST
            || nSkillID == LEGEND_BAMBOO_THRUST
            || nSkillID == EVANBEGINNER_BAMBOO_THRUST
            || nSkillID == CITIZEN_BAMBOO_RAIN
            || nSkillID == BEGINNER_INVINCIBILITY
            || nSkillID == NOBLESSE_INVINCIBLE_BARRIER
            || nSkillID == LEGEND_INVINCIBLE_BARRIER
            || nSkillID == EVANBEGINNER_INVINCIBLE_BARRIER
            || nSkillID == CITIZEN_INVINCIBILITY
            || nSkillID == BEGINNER_POWER_EXPLOSION
            || nSkillID == NOBLESSE_METEO_SHOWER
            || nSkillID == LEGEND_METEO_SHOWER
            || nSkillID == EVANBEGINNER_METEO_SHOWER
            || nSkillID == CITIZEN_POWER_EXPLOSION)
        || nFieldType != 23
        && (nSkillID == BEGINNER_RAGE_OF_PHARAOH
            || nSkillID == NOBLESSE_RAGE_OF_PHARAOH
            || nSkillID == LEGEND_RAGE_OF_PHARAOH
            || nSkillID == EVANBEGINNER_RAGE_OF_PHARAOH
            || nSkillID == CITIZEN_RAGE_OF_PHARAOH))
    {
        return true;
    }

    auto skill_class = get_skill_class(nSkillID);
    auto sub = nSkillID / 10000;
    for (auto& n : lnClass)
    {
        auto v9 = 0;
        if (sub / 100 == 22 || sub == 2001)
        {
            switch (n)
            {
            case 1:
                if (skill_class >= 1 && skill_class <= 2)
                    return true;
                break;
            case 2:
                if (skill_class < 3 || skill_class > 6)
                    break;
                return true;
            case 3:
                if (skill_class < 7 || skill_class > 8)
                    break;
                return true;
            case 4:
                if (skill_class < 9 || skill_class > 10)
                    break;
                return true;
            default:
                break;
            }
        }
        else if (sub / 10 == 43)
        {
            auto v8 = sub % 430;
            switch (n)
            {
            case 1:
                if (v8 == 0)
                    return true;
                break;
            case 2:
                if (v8 < 1 || v8 > 2)
                    break;
                return true;
            case 3:
                if (v8 == 3)
                    return true;
                break;
            case 4:
                if (v8 == 4)
                    return true;
                break;
            default:
                break;
            }
        }
        else if (n == skill_class)
        {
            return true;
        }
        if (!nSkillID)
        {
            break;
        }
    }

    for (auto& id : lnID)
    {
        if (id == nSkillID)
            return true;
    }

    return false;
}
