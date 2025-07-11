// FieldCommon.cpp
#include "FieldCommon.hpp"

static ZRef<Field::JobCategoryCond> FAKE_ZREF_JOB_CATEGORY_COND;
static ZRef<Field::UserCond> FAKE_ZREF_USER_COND;
static ZRef<Field::GenderCond> FAKE_ZREF_GENDER_COND{};
static ZRef<Field::JobCond> FAKE_ZREF_JOB_COND{};
static ZRef<Field::LevelCond> FAKE_ZREF_LEVEL_COND{};
static ZRef<Field::ItemCond> FAKE_ZREF_ITEM_COND{};
static ZRef<Field::TargetCond> FAKE_ZREF_TARGET_COND{};
static ZRef<Field::BattlefieldTeamCond> FAKE_ZREF_BATTLEFIELD_TEAM_COND{};

#include "FieldCommon_regen.ipp"

Field::UserCond::~UserCond()
{
    UNIMPLEMENTED; // _dtor_0();
}

void Field::UserCond::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Field::UserCond::UserCond(const Field::UserCond& arg0)
{
    _ctor_1(arg0);
}

void Field::UserCond::_ctor_1(const Field::UserCond& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Field::UserCond::UserCond()
{
    UNIMPLEMENTED; //_ctor_0();
}

void Field::UserCond::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t Field::UserCond::IsTrue(CUser* arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t __cdecl Field::UserCond::Parse(_x_com_ptr<IWzProperty> pPropCond, ZList<ZRef<Field::UserCond>>& lpCond)
{
    return __sub_00166EB0(CreateNakedParam(pPropCond), lpCond);
}

Field::UserCond& Field::UserCond::operator=(const Field::UserCond& arg0)
{
    return _op_assign_5(this, arg0);
}

Field::UserCond& Field::UserCond::_op_assign_5(Field::UserCond* pThis, const Field::UserCond& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Field::TargetCond::~TargetCond()
{
    UNIMPLEMENTED; // _dtor_0();
}

void Field::TargetCond::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Field::TargetCond::TargetCond(const Field::TargetCond& arg0)
{
    _ctor_1(arg0);
}

void Field::TargetCond::_ctor_1(const Field::TargetCond& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Field::TargetCond::TargetCond()
{
    UNIMPLEMENTED; //_ctor_0();
}

void Field::TargetCond::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t Field::TargetCond::IsTrue(CUser* pUser)
{
    return __sub_00165450(this, nullptr, pUser);
}

int32_t __cdecl Field::TargetCond::Parse(_x_com_ptr<IWzProperty> pPropCond, ZList<ZRef<Field::UserCond>>& lpCond)
{
    return __sub_001669E0(CreateNakedParam(pPropCond), lpCond);
}

Field::TargetCond& Field::TargetCond::operator=(const Field::TargetCond& arg0)
{
    return _op_assign_5(this, arg0);
}

Field::TargetCond& Field::TargetCond::_op_assign_5(Field::TargetCond* pThis, const Field::TargetCond& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Field::JobCategoryCond::~JobCategoryCond()
{
    UNIMPLEMENTED; // _dtor_0();
}

void Field::JobCategoryCond::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Field::JobCategoryCond::JobCategoryCond(const Field::JobCategoryCond& arg0)
{
    _ctor_1(arg0);
}

void Field::JobCategoryCond::_ctor_1(const Field::JobCategoryCond& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Field::JobCategoryCond::JobCategoryCond()
{
    UNIMPLEMENTED; //_ctor_0();
}

void Field::JobCategoryCond::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t Field::JobCategoryCond::IsTrue(CUser* pUser)
{
    return __sub_001653D0(this, nullptr, pUser);
}

int32_t __cdecl Field::JobCategoryCond::Parse(_x_com_ptr<IWzProperty> pPropCond, ZList<ZRef<Field::UserCond>>& lpCond)
{
    return __sub_001666A0(CreateNakedParam(pPropCond), lpCond);
}

Field::JobCategoryCond& Field::JobCategoryCond::operator=(const Field::JobCategoryCond& arg0)
{
    return _op_assign_5(this, arg0);
}

Field::JobCategoryCond& Field::JobCategoryCond::_op_assign_5(Field::JobCategoryCond* pThis,
                                                             const Field::JobCategoryCond& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Field::LevelCond::~LevelCond()
{
    UNIMPLEMENTED; // _dtor_0();
}

void Field::LevelCond::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Field::LevelCond::LevelCond(const Field::LevelCond& arg0)
{
    _ctor_1(arg0);
}

void Field::LevelCond::_ctor_1(const Field::LevelCond& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Field::LevelCond::LevelCond()
{
    UNIMPLEMENTED; //_ctor_0();
}

void Field::LevelCond::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t Field::LevelCond::IsTrue(CUser* pUser)
{
    return __sub_00165390(this, nullptr, pUser);
}

int32_t __cdecl Field::LevelCond::Parse(_x_com_ptr<IWzProperty> pPropCond, ZList<ZRef<Field::UserCond>>& lpCond)
{
    return __sub_00166270(CreateNakedParam(pPropCond), lpCond);
}

Field::LevelCond& Field::LevelCond::operator=(const Field::LevelCond& arg0)
{
    return _op_assign_5(this, arg0);
}

Field::LevelCond& Field::LevelCond::_op_assign_5(Field::LevelCond* pThis, const Field::LevelCond& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Field::GenderCond::~GenderCond()
{
    UNIMPLEMENTED; // _dtor_0();
}

void Field::GenderCond::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Field::GenderCond::GenderCond(const Field::GenderCond& arg0)
{
    _ctor_1(arg0);
}

void Field::GenderCond::_ctor_1(const Field::GenderCond& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Field::GenderCond::GenderCond()
{
    UNIMPLEMENTED; //_ctor_0();
}

void Field::GenderCond::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t Field::GenderCond::IsTrue(CUser* pUser)
{
    return __sub_00165430(this, nullptr, pUser);
}

int32_t __cdecl Field::GenderCond::Parse(_x_com_ptr<IWzProperty> pPropCond, ZList<ZRef<Field::UserCond>>& lpCond)
{
    return __sub_00166B50(CreateNakedParam(pPropCond), lpCond);
}

Field::GenderCond& Field::GenderCond::operator=(const Field::GenderCond& arg0)
{
    return _op_assign_5(this, arg0);
}

Field::GenderCond& Field::GenderCond::_op_assign_5(Field::GenderCond* pThis, const Field::GenderCond& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Field::JobCond::~JobCond()
{
    UNIMPLEMENTED; // _dtor_0();
}

void Field::JobCond::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Field::JobCond::JobCond(const Field::JobCond& arg0)
{
    _ctor_1(arg0);
}

void Field::JobCond::_ctor_1(const Field::JobCond& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Field::JobCond::JobCond()
{
    UNIMPLEMENTED; //_ctor_0();
}

void Field::JobCond::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t Field::JobCond::IsTrue(CUser* pUser)
{
    return __sub_001653A0(this, nullptr, pUser);
}

int32_t __cdecl Field::JobCond::Parse(_x_com_ptr<IWzProperty> pPropCond, ZList<ZRef<Field::UserCond>>& lpCond)
{
    return __sub_001664A0(CreateNakedParam(pPropCond), lpCond);
}

Field::JobCond& Field::JobCond::operator=(const Field::JobCond& arg0)
{
    return _op_assign_5(this, arg0);
}

Field::JobCond& Field::JobCond::_op_assign_5(Field::JobCond* pThis, const Field::JobCond& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Field::BattlefieldTeamCond::~BattlefieldTeamCond()
{
    UNIMPLEMENTED; // _dtor_0();
}

void Field::BattlefieldTeamCond::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Field::BattlefieldTeamCond::BattlefieldTeamCond(const Field::BattlefieldTeamCond& arg0)
{
    _ctor_1(arg0);
}

void Field::BattlefieldTeamCond::_ctor_1(const Field::BattlefieldTeamCond& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Field::BattlefieldTeamCond::BattlefieldTeamCond()
{
    UNIMPLEMENTED; //_ctor_0();
}

void Field::BattlefieldTeamCond::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t Field::BattlefieldTeamCond::IsTrue(CUser* pUser)
{
    return __sub_00165410(this, nullptr, pUser);
}

int32_t __cdecl Field::BattlefieldTeamCond::Parse(_x_com_ptr<IWzProperty> pPropCond,
                                                  ZList<ZRef<Field::UserCond>>& lpCond)
{
    return __sub_00166840(CreateNakedParam(pPropCond), lpCond);
}

Field::BattlefieldTeamCond& Field::BattlefieldTeamCond::operator=(const Field::BattlefieldTeamCond& arg0)
{
    return _op_assign_5(this, arg0);
}

Field::BattlefieldTeamCond& Field::BattlefieldTeamCond::_op_assign_5(Field::BattlefieldTeamCond* pThis,
                                                                     const Field::BattlefieldTeamCond& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Field::ItemCond::~ItemCond()
{
    UNIMPLEMENTED; // _dtor_0();
}

void Field::ItemCond::_dtor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Field::ItemCond::ItemCond(const Field::ItemCond& arg0)
{
    _ctor_1(arg0);
}

void Field::ItemCond::_ctor_1(const Field::ItemCond& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

Field::ItemCond::ItemCond()
{
    UNIMPLEMENTED; //_ctor_0();
}

void Field::ItemCond::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t Field::ItemCond::IsTrue(CUser* pUser)
{
    return __sub_001654A0(this, nullptr, pUser);
}

int32_t __cdecl Field::ItemCond::Parse(_x_com_ptr<IWzProperty> pPropCond, ZList<ZRef<Field::UserCond>>& lpCond)
{
    return __sub_00166CC0(CreateNakedParam(pPropCond), lpCond);
}

Field::ItemCond& Field::ItemCond::operator=(const Field::ItemCond& arg0)
{
    return _op_assign_5(this, arg0);
}

Field::ItemCond& Field::ItemCond::_op_assign_5(Field::ItemCond* pThis, const Field::ItemCond& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
