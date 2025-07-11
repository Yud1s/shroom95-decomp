#pragma once
#include <pcom/xcom_ptr.h>

#include "base.h"

namespace Field
{

    struct Effect : public ZRefCounted
    {
        // Nested
    public:
        enum BACK
        {
            BACK = 0
        };
        // Fields
    public:
        long nType{};

    public:
        long nEffect{};

    public:
        long nFieldID{};
        // Methods
    public:
        virtual ~Effect()
        {
        }
        /*public: static void _dtor_0(Field::Effect* pThis);
    public:    Effect(const Field::Effect& arg0);
        public: static void _ctor_1(Field::Effect* pThis, const Field::Effect& arg0);
    public:    Effect(long arg0);
        public: static void _ctor_0(Field::Effect* pThis, long arg0);
    public:  virtual void Encode(COutPacket& arg0);
        public:  virtual void Decode(CInPacket& arg0);
        public:  virtual long GetPageID();
        public:  static void __cdecl InsertToList(Field::Effect* arg0, ZList<ZRef<Field::Effect> >& arg1);
        public:   Field::Effect& operator=(const Field::Effect& arg0);
        public: static Field::Effect& _op_assign_7(Field::Effect* pThis, const Field::Effect& arg0);*/
    };
    STATIC_ASSERT_SIZE(Field::Effect, 24);

    struct BackEffect : public Effect
    {
        // Nested
    public:
        enum UnnamedEnum16478
        {
            SHOW_LAYER = 0,
            HIDE_LAYER = 1,
            EFFECT_NO = 2
        };
        // Fields
    public:
        long nPageID{};

    public:
        long tDuration{};
        // Methods
    public:
        virtual ~BackEffect()
        {
        }

        void Decode()
        {
        }

        /* public:
             static void _dtor_0(Field::BackEffect *pThis);

         public:
             BackEffect(const Field::BackEffect &arg0);

         public:
             static void _ctor_1(Field::BackEffect *pThis, const Field::BackEffect &arg0);

         public:
             BackEffect();

         public:
             static void _ctor_0(Field::BackEffect *pThis);

         public:
             virtual void Encode(COutPacket &oPacket);

         public:
             virtual void Decode(CInPacket &iPacket);

         public:
             virtual void Init(long nEffect, long nFieldID, long nPageID, long tDuration);

         public:
             virtual long GetPageID();

         public:
             static void __cdecl InsertToList(Field::BackEffect *arg0, ZList<ZRef<Field::Effect>> &arg1);

         public:
             Field::BackEffect &operator=(const Field::BackEffect &arg0);

         public:
             static Field::BackEffect &_op_assign_8(Field::BackEffect *pThis, const Field::BackEffect &arg0);*/
    };

    struct SkillInfo
    {
        // Nested
        // Fields
    public:
        ZList<long> lnClass;

    public:
        ZList<long> lnID;

    public:
        long nFieldType{};

        ~SkillInfo()
        {
        }

        // TODO

        void SetFieldType(long _nFieldType);

        void Parse(_x_com_ptr<IWzProperty> pPropSkill);

        bool IsSkill(long nSkillID);

        // Methods
        /*
        TODO
        public:
            ~SkillInfo();

        public:
            static void _dtor_0(Field::SkillInfo *pThis);

        public:
            SkillInfo(const Field::SkillInfo &arg0);

        public:
            static void _ctor_1(Field::SkillInfo *pThis, const Field::SkillInfo &arg0);

        public:
            SkillInfo();

        public:
            static void _ctor_0(Field::SkillInfo *pThis);

        public:
            void SetFieldType(long _nFieldType);

        public:
            int32_t IsSkill(long nSkillID);

        public:
            int32_t Parse(_x_com_ptr<IWzProperty> pPropSkill);

        public:
            Field::SkillInfo &operator=(const Field::SkillInfo &arg0);

        public:
            static Field::SkillInfo &_op_assign_6(Field::SkillInfo *pThis, const Field::SkillInfo &arg0);*/
    };
    STATIC_ASSERT_SIZE(Field::SkillInfo, 44);

}