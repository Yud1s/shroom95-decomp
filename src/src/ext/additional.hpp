#pragma once
#include "base.h"
#include "pcom/wz.h"

struct SecondaryStat;
struct GW_ItemSlotEquip;
class CharacterData;

namespace Additional
{

    class SKILL
    {

    public:
        int32_t nSkillID{};

    public:
        int32_t nSLV{};

    public:
        void Init(_x_com_ptr<IWzProperty>);

    public:
        ZXString<char> GetDesc();
    };

    class CRITICAL
    {

        /* 0x0000 */ public:
        int32_t nProb{};
        /* 0x0004 */ public:
        int32_t nDamage{};

    public:
        void Init(_x_com_ptr<IWzProperty>);

    public:
        ZXString<char> GetDesc();
    };

    class MOBCATEGORY
    {

        /* 0x0000 */ public:
        int32_t nCategory{};
        /* 0x0004 */ public:
        int32_t nDamage{};

    public:
        void Init(_x_com_ptr<IWzProperty>);

    public:
        ZXString<char> GetDesc();
    };

    class BOSS
    {

        /* 0x0000 */ public:
        int32_t nProb{};
        /* 0x0004 */ public:
        int32_t nDamage{};

    public:
        void Init(_x_com_ptr<IWzProperty>);

    public:
        ZXString<char> GetDesc();
    };

    class ELEMBOOST
    {

        /* 0x0000 */ public:
        int32_t nElem{};
        /* 0x0004 */ public:
        int32_t nVolume{};

    public:
        void Init(_x_com_ptr<IWzProperty>);

    public:
        ZXString<char> GetDesc();
    };

    class MOBDIE
    {

        /* 0x0000 */ public:
        int32_t nHPincOnMobDie{};
        /* 0x0004 */ public:
        int32_t nMPincOnMobDie{};
        /* 0x0008 */ public:
        int32_t nHPprop{};
        /* 0x000c */ public:
        int32_t nMPprop{};
        /* 0x0010 */ public:
        int32_t nHPincRatioOnMobDie{};
        /* 0x0014 */ public:
        int32_t nMPincRatioOnMobDie{};
        /* 0x0018 */ public:
        int32_t nHPratioProp{};
        /* 0x001c */ public:
        int32_t nMPratioProp{};

    public:
        void Init(_x_com_ptr<IWzProperty>);

    public:
        ZXString<char> GetDesc();
    };

    class HPMPCHANGE
    {

        /* 0x0000 */ public:
        int32_t nHPchangePerTime{};
        /* 0x0004 */ public:
        int32_t nMPchangePerTime{};

    public:
        void Init(_x_com_ptr<IWzProperty>);

    public:
        ZXString<char> GetDesc();
    };

    struct CONDITION
    { /* Size=0x20 */
        /* 0x0000 */ public:
        int32_t nLevel{};
        /* 0x0004 */ public:
        int32_t nJob{};
        /* 0x0008 */ public:
        int32_t nSTR{};
        /* 0x000c */ public:
        int32_t nDEX{};
        /* 0x0010 */ public:
        int32_t nINT{};
        /* 0x0014 */ public:
        int32_t nLUK{};
        /* 0x0018 */ public:
        int32_t nCraft{};
        /* 0x001c */ public:
        int32_t nItemQuality{};

    public:
        ZXString<char> GetDesc() const;
        static ZRef<Additional::CONDITION> Load(_x_com_ptr<IWzProperty> pProp);
        bool CheckCondition(const CharacterData &charData, const SecondaryStat &secondaryStat, GW_ItemSlotEquip *itemEquip) const;
    };

    template <typename T>
    class TCond : T
    {

    public:
        ZRef<Additional::CONDITION> pCon;

    public:
        int32_t CheckCondition(const CharacterData &charData, const SecondaryStat &secondaryStat, GW_ItemSlotEquip *itemEquip)
        {
            UNIMPLEMENTED;
        }

    public:
        ZXString<char> GetDesc()
        {
            UNIMPLEMENTED;
        }

    public:
        TCond()
        {
        }

    public:
        ~TCond()
        {
        }

    public:
        static ZRef<Additional::TCond<T>> Load(_x_com_ptr<IWzProperty> pProp)
        {
            UNIMPLEMENTED;
        }
    };
}