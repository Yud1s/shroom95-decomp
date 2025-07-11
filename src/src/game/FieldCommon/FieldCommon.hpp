// FieldCommon.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

// #include "User/User.hpp"

class CUser;

namespace Field
{
	// Level: 1 0x40b0
	struct UserCond;
	// Level: 2 0x4206
	struct TargetCond;
	// Level: 2 0x41e2
	struct JobCategoryCond;
	// Level: 2 0x41c0
	struct LevelCond;
	// Level: 2 0x4217
	struct GenderCond;
	// Level: 2 0x41d1
	struct JobCond;
	// Level: 2 0x41f3
	struct BattlefieldTeamCond;
	// Level: 2 0x4228
	struct ItemCond;

	struct UserCond : public ZRefCounted
	{
		// Nested
		// Fields
		// Methods
	public:
		virtual ~UserCond();

	public:
		void _dtor_0();

	public:
		UserCond(const UserCond &arg0);

	public:
		void _ctor_1(const UserCond &arg0);

	public:
		UserCond();

	public:
		void _ctor_0();

	public:
		virtual int32_t IsTrue(CUser *arg0);

	public:
		static int32_t __cdecl Parse(_x_com_ptr<IWzProperty> pPropCond, ZList<ZRef<UserCond>> &lpCond);

	public:
		UserCond &operator=(const UserCond &arg0);

	public:
		static UserCond &_op_assign_5(UserCond *pThis, const UserCond &arg0);
	};
	STATIC_ASSERT_SIZE(UserCond, 12);

	struct TargetCond : public UserCond
	{
		// Nested
	public:
		enum TARGET_
		{
			TARGET_LOCAL = 1,
			TARGET_REMOTE = 2
		};
		// Fields
	public:
		unsigned long dwTarget{};
		// Methods
	public:
		virtual ~TargetCond();

	public:
		void _dtor_0();

	public:
		TargetCond(const TargetCond &arg0);

	public:
		void _ctor_1(const TargetCond &arg0);

	public:
		TargetCond();

	public:
		void _ctor_0();

	public:
		virtual int32_t IsTrue(CUser *pUser);

	public:
		static int32_t __cdecl Parse(_x_com_ptr<IWzProperty> pPropCond, ZList<ZRef<UserCond>> &lpCond);

	public:
		TargetCond &operator=(const TargetCond &arg0);

	public:
		static TargetCond &_op_assign_5(TargetCond *pThis, const TargetCond &arg0);
	};
	STATIC_ASSERT_SIZE(TargetCond, 16);
	struct JobCategoryCond : public UserCond
	{
		// Nested
		// Fields
	public:
		long nJobCategory{};
		// Methods
	public:
		virtual ~JobCategoryCond();

	public:
		void _dtor_0();

	public:
		JobCategoryCond(const JobCategoryCond &arg0);

	public:
		void _ctor_1(const JobCategoryCond &arg0);

	public:
		JobCategoryCond();

	public:
		void _ctor_0();

	public:
		virtual int32_t IsTrue(CUser *pUser);

	public:
		static int32_t __cdecl Parse(_x_com_ptr<IWzProperty> pPropCond, ZList<ZRef<UserCond>> &lpCond);

	public:
		JobCategoryCond &operator=(const JobCategoryCond &arg0);

	public:
		static JobCategoryCond &_op_assign_5(JobCategoryCond *pThis, const JobCategoryCond &arg0);
	};
	STATIC_ASSERT_SIZE(JobCategoryCond, 16);
	struct LevelCond : public UserCond
	{
		// Nested
	public:
		enum UnnamedEnum16429
		{
			LESSTHAN = 255,
			EQUAL = 0,
			MORETHAN = 1
		};
		// Fields
	public:
		long nLevel{};

	public:
		long nComp{};
		// Methods
	public:
		virtual ~LevelCond();

	public:
		void _dtor_0();

	public:
		LevelCond(const LevelCond &arg0);

	public:
		void _ctor_1(const LevelCond &arg0);

	public:
		LevelCond();

	public:
		void _ctor_0();

	public:
		virtual int32_t IsTrue(CUser *pUser);

	public:
		static int32_t __cdecl Parse(_x_com_ptr<IWzProperty> pPropCond, ZList<ZRef<UserCond>> &lpCond);

	public:
		LevelCond &operator=(const LevelCond &arg0);

	public:
		static LevelCond &_op_assign_5(LevelCond *pThis, const LevelCond &arg0);
	};
	STATIC_ASSERT_SIZE(LevelCond, 20);
	struct GenderCond : public UserCond
	{
		// Nested
		// Fields
	public:
		long nGender{};
		// Methods
	public:
		virtual ~GenderCond();

	public:
		void _dtor_0();

	public:
		GenderCond(const GenderCond &arg0);

	public:
		void _ctor_1(const GenderCond &arg0);

	public:
		GenderCond();

	public:
		void _ctor_0();

	public:
		virtual int32_t IsTrue(CUser *pUser);

	public:
		static int32_t __cdecl Parse(_x_com_ptr<IWzProperty> pPropCond, ZList<ZRef<UserCond>> &lpCond);

	public:
		GenderCond &operator=(const GenderCond &arg0);

	public:
		static GenderCond &_op_assign_5(GenderCond *pThis, const GenderCond &arg0);
	};
	STATIC_ASSERT_SIZE(GenderCond, 16);
	struct JobCond : public UserCond
	{
		// Nested
		// Fields
	public:
		long nJob{};
		// Methods
	public:
		virtual ~JobCond();

	public:
		void _dtor_0();

	public:
		JobCond(const JobCond &arg0);

	public:
		void _ctor_1(const JobCond &arg0);

	public:
		JobCond();

	public:
		void _ctor_0();

	public:
		virtual int32_t IsTrue(CUser *pUser);

	public:
		static int32_t __cdecl Parse(_x_com_ptr<IWzProperty> pPropCond, ZList<ZRef<UserCond>> &lpCond);

	public:
		JobCond &operator=(const JobCond &arg0);

	public:
		static JobCond &_op_assign_5(JobCond *pThis, const JobCond &arg0);
	};
	STATIC_ASSERT_SIZE(JobCond, 16);
	struct BattlefieldTeamCond : public UserCond
	{
		// Nested
		// Fields
	public:
		long nBattlefieldTeam{};
		// Methods
	public:
		virtual ~BattlefieldTeamCond();

	public:
		void _dtor_0();

	public:
		BattlefieldTeamCond(const BattlefieldTeamCond &arg0);

	public:
		void _ctor_1(const BattlefieldTeamCond &arg0);

	public:
		BattlefieldTeamCond();

	public:
		void _ctor_0();

	public:
		virtual int32_t IsTrue(CUser *pUser);

	public:
		static int32_t __cdecl Parse(_x_com_ptr<IWzProperty> pPropCond, ZList<ZRef<UserCond>> &lpCond);

	public:
		BattlefieldTeamCond &operator=(const BattlefieldTeamCond &arg0);

	public:
		static BattlefieldTeamCond &_op_assign_5(BattlefieldTeamCond *pThis, const BattlefieldTeamCond &arg0);
	};
	STATIC_ASSERT_SIZE(BattlefieldTeamCond, 16);
	struct ItemCond : public UserCond
	{
		// Nested
		// Fields
	public:
		long nItemID{};

	public:
		long nItemCount{};
		// Methods
	public:
		virtual ~ItemCond();

	public:
		void _dtor_0();

	public:
		ItemCond(const ItemCond &arg0);

	public:
		void _ctor_1(const ItemCond &arg0);

	public:
		ItemCond();

	public:
		void _ctor_0();

	public:
		virtual int32_t IsTrue(CUser *pUser);

	public:
		static int32_t __cdecl Parse(_x_com_ptr<IWzProperty> pPropCond, ZList<ZRef<UserCond>> &lpCond);

	public:
		ItemCond &operator=(const ItemCond &arg0);

	public:
		static ItemCond &_op_assign_5(ItemCond *pThis, const ItemCond &arg0);
	};
	STATIC_ASSERT_SIZE(ItemCond, 20);

}
