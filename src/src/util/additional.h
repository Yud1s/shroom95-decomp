#pragma once
#include "base.h"
#include "pcom/wz.h"

struct SecondaryStat;
struct GW_ItemSlotEquip;
class CharacterData;

namespace Additional
{
    class ITEM
    {
    };

    class SKILL
    {

        /* 0x0000 */ public:
        int32_t nSkillID{};
        /* 0x0004 */ public:
        int32_t nSLV{};

        /*public: void Init(_com_ptr_t<_com_IIID<IWzProperty,&_GUID_986515d9_0a0b_4929_8b4f_718682177b92> >);
        public: ZXString<char> GetDesc();*/
    };

    class CRITICAL
    {

        /* 0x0000 */ public:
        int32_t nProb{};
        /* 0x0004 */ public:
        int32_t nDamage{};

        // TODO
    };

    class MOBCATEGORY
    {

        /* 0x0000 */ public:
        int32_t nCategory{};
        /* 0x0004 */ public:
        int32_t nDamage{};

        /*todo public: void Init(_com_ptr_t<_com_IIID<IWzProperty,&_GUID_986515d9_0a0b_4929_8b4f_718682177b92> >);
        public: ZXString<char> GetDesc();*/
    };

    class BOSS
    {

        /* 0x0000 */ public:
        int32_t nProb{};
        /* 0x0004 */ public:
        int32_t nDamage{};

        // TODO
    };

    class ELEMBOOST
    {

        /* 0x0000 */ public:
        int32_t nElem{};
        /* 0x0004 */ public:
        int32_t nVolume{};

        /*public: void Init(_com_ptr_t<_com_IIID<IWzProperty,&_GUID_986515d9_0a0b_4929_8b4f_718682177b92> >);
        public: ZXString<char> GetDesc();*/
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

        /* todo public: void Init(_com_ptr_t<_com_IIID<IWzProperty,&_GUID_986515d9_0a0b_4929_8b4f_718682177b92> >);
        public: ZXString<char> GetDesc();*/
    };

    class HPMPCHANGE
    {

        /* 0x0000 */ public:
        int32_t nHPchangePerTime{};
        /* 0x0004 */ public:
        int32_t nMPchangePerTime{};

    public:
        ZXString<char> GetDesc()
        {
            /*ZXString<char> desc;
            //TODO concat MP %d + string pool str
            if(this->nHPchangePerTime > 0) {
                desc.Format("HP %d", this->nHPchangePerTime);
            }*/

            // return desc;
            UNIMPLEMENTED;
        }

    public:
        static ZRef<Additional::HPMPCHANGE> Load(_x_com_ptr<IWzProperty> pProp)
        {
            UNIMPLEMENTED;
        }
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
        ZXString<char> GetDesc()
        {
            UNIMPLEMENTED;
        }

    public:
        static ZRef<Additional::CONDITION> Load(_x_com_ptr<IWzProperty> pProp)
        {
            UNIMPLEMENTED;
        }
    };

    template <typename T>
    class TCond : T
    {
    public:
        int32_t CheckCondition(const CharacterData &charData, const SecondaryStat &secondaryStat, GW_ItemSlotEquip *itemEquip)
        {
            return 0;
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