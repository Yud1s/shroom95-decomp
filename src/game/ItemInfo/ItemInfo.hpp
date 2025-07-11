// ItemInfo.hpp
#pragma once
#include "util/base.h"
#include "util/extra.h"
#include "pcom/wz.h"

#include "GW/GW.hpp"
#include "UInt128/UInt128.hpp"
#include "DBBasic/DBBasic.hpp"

// Level: 0 0x17efb
struct ItemOptionLevelData;
// Level: 1 0x1fed6
class CItemInfo;
// Level: 1 0x1a5bb
class CItemOptionInfo;

struct ItemOptionLevelData
{
	// Nested
	// Fields
public:
	long nProb{};

public:
	long nTime{};

public:
	long niSTR{};

public:
	long niDEX{};

public:
	long niINT{};

public:
	long niLUK{};

public:
	long niHP{};

public:
	long niMP{};

public:
	long niMaxHP{};

public:
	long niMaxMP{};

public:
	long niACC{};

public:
	long niEVA{};

public:
	long niSpeed{};

public:
	long niJump{};

public:
	long niPAD{};

public:
	long niMAD{};

public:
	long niPDD{};

public:
	long niMDD{};

public:
	long niSTRr{};

public:
	long niDEXr{};

public:
	long niINTr{};

public:
	long niLUKr{};

public:
	long niMaxHPr{};

public:
	long niMaxMPr{};

public:
	long niACCr{};

public:
	long niEVAr{};

public:
	long niPADr{};

public:
	long niMADr{};

public:
	long niPDDr{};

public:
	long niMDDr{};

public:
	long niCr{};

public:
	long niCDr{};

public:
	long niMAMr{};

public:
	long niSkill{};

public:
	long niAllSkill{};

public:
	long nRecoveryHP{};

public:
	long nRecoveryMP{};

public:
	long nRecoveryUP{};

public:
	long nMPConReduce{};

public:
	long nMPConRestore{};

public:
	long nIgnoreTargetDEF{};

public:
	long nIgnoreDAM{};

public:
	long nIgnoreDAMr{};

public:
	long niDAMr{};

public:
	long nDAMReflect{};

public:
	long nAttackType{};

public:
	long niMesoProb{};

public:
	long niRewardProb{};

public:
	long nLevel{};

public:
	long nBoss{};

public:
	int32_t bEmotion_angry{};

public:
	int32_t bEmotion_cheer{};

public:
	int32_t bEmotion_love{};

public:
	int32_t bEmotion_blaze{};

public:
	int32_t bEmotion_glitter{};

public:
	int32_t bEmotion{};
	// Methods
public:
	int32_t LoadLevelData(long nItemOptionID, _x_com_ptr<IWzProperty> pLevelData, long nOptionLevel);
};
STATIC_ASSERT_SIZE(ItemOptionLevelData, 224);

struct ItemOptionInfo
{
	// Nested
	// Fields
public:
	long nItemOptionID{};

public:
	long nReqLevel{};

public:
	long nOptionType{};

public:
	ZArray<ItemOptionLevelData> aLevelData;
	// Methods
};
STATIC_ASSERT_SIZE(ItemOptionInfo, 16);

class CItemInfo : public TSingleton<CItemInfo>
{
	// Nested
public:
	struct ItemSkill
	{
		// Nested
		// Fields
	public:
		long nSkillID{};

	public:
		long nSkillLevel{};
		// Methods
	public:
		ItemSkill();

	public:
		void _ctor_0();
	};

public:
	struct Recovery : public ZRefCounted
	{
		// Nested
		// Fields
	public:
		long nHP{};

	public:
		long nMP{};

	public:
		long tInterval{};
		// Methods
	public:
		virtual ~Recovery();

	public:
		void _dtor_0();

	public:
		Recovery(const CItemInfo::Recovery &arg0);

	public:
		void _ctor_1(const CItemInfo::Recovery &arg0);

	public:
		Recovery(long arg0, long arg1, long arg2);

	public:
		void _ctor_0(long arg0, long arg1, long arg2);

	public:
		Recovery();

	public:
		void _ctor_3();

	public:
		bool operator==(const CItemInfo::Recovery &arg0);

	public:
		static bool _op_eq_4(CItemInfo::Recovery *pThis, const CItemInfo::Recovery &arg0);

	public:
		CItemInfo::Recovery &operator=(const CItemInfo::Recovery &arg0);

	public:
		static CItemInfo::Recovery &_op_assign_5(CItemInfo::Recovery *pThis, const CItemInfo::Recovery &arg0);
	};

public:
	struct LevelInfo
	{
		// Nested
	public:
		struct Ability
		{
			// Nested
			// Fields
		public:
			ZXString<char> sDesc;

		public:
			ZRef<CItemInfo::Recovery> pRecovery;

		public:
			ZList<ZRef<CItemInfo::ItemSkill>> lpItemSkill;

		public:
			ZMap<long, long, long> mSkillLevelBonus;
			// Methods
		public:
			~Ability();

		public:
			void _dtor_0();

		public:
			Ability(const CItemInfo::LevelInfo::Ability &arg0);

		public:
			void _ctor_1(const CItemInfo::LevelInfo::Ability &arg0);

		public:
			Ability();

		public:
			void _ctor_0();

		public:
			CItemInfo::LevelInfo::Ability &operator=(const CItemInfo::LevelInfo::Ability &arg0);

		public:
			static CItemInfo::LevelInfo::Ability &_op_assign_3(CItemInfo::LevelInfo::Ability *pThis, const CItemInfo::LevelInfo::Ability &arg0);
		};

	public:
		struct RandomStat : public ZRefCounted
		{
			// Nested
		public:
			enum UnnamedEnum131231
			{
				MHP = 0,
				MMP = 1,
				STR = 2,
				DEX = 3,
				INT = 4,
				LUK = 5,
				PAD = 6,
				PDD = 7,
				MAD = 8,
				MDD = 9,
				ACC = 10,
				EVA = 11,
				Craft = 12,
				Speed = 13,
				Jump = 14,
				SMHP = 15,
				SMMP = 16,
				EMHP = 17,
				EMMP = 18,
				EPAD = 19,
				EPDD = 20,
				EMDD = 21
			};
			// Fields
		public:
			long nMin{};

		public:
			long nMax{};
			// Methods
		public:
			virtual ~RandomStat();

		public:
			void _dtor_0();

		public:
			RandomStat(const CItemInfo::LevelInfo::RandomStat &arg0);

		public:
			void _ctor_1(const CItemInfo::LevelInfo::RandomStat &arg0);

		public:
			RandomStat();

		public:
			void _ctor_0();

		public:
			long GetRandomValue();

		public:
			virtual long GetStatType();

		public:
			CItemInfo::LevelInfo::RandomStat &operator=(const CItemInfo::LevelInfo::RandomStat &arg0);

		public:
			static CItemInfo::LevelInfo::RandomStat &_op_assign_5(CItemInfo::LevelInfo::RandomStat *pThis, const CItemInfo::LevelInfo::RandomStat &arg0);
		};

	public:
		struct RandomMHP : public CItemInfo::LevelInfo::RandomStat
		{
			// Nested
			// Fields
			// Methods
		public:
			virtual ~RandomMHP();

		public:
			void _dtor_0();

		public:
			RandomMHP(const CItemInfo::LevelInfo::RandomMHP &arg0);

		public:
			void _ctor_1(const CItemInfo::LevelInfo::RandomMHP &arg0);

		public:
			RandomMHP();

		public:
			void _ctor_0();

		public:
			virtual long GetStatType();

		public:
			CItemInfo::LevelInfo::RandomMHP &operator=(const CItemInfo::LevelInfo::RandomMHP &arg0);

		public:
			static CItemInfo::LevelInfo::RandomMHP &_op_assign_4(CItemInfo::LevelInfo::RandomMHP *pThis, const CItemInfo::LevelInfo::RandomMHP &arg0);
		};

	public:
		struct RandomMMP : public CItemInfo::LevelInfo::RandomStat
		{
			// Nested
			// Fields
			// Methods
		public:
			virtual ~RandomMMP();

		public:
			void _dtor_0();

		public:
			RandomMMP(const CItemInfo::LevelInfo::RandomMMP &arg0);

		public:
			void _ctor_1(const CItemInfo::LevelInfo::RandomMMP &arg0);

		public:
			RandomMMP();

		public:
			void _ctor_0();

		public:
			virtual long GetStatType();

		public:
			CItemInfo::LevelInfo::RandomMMP &operator=(const CItemInfo::LevelInfo::RandomMMP &arg0);

		public:
			static CItemInfo::LevelInfo::RandomMMP &_op_assign_4(CItemInfo::LevelInfo::RandomMMP *pThis, const CItemInfo::LevelInfo::RandomMMP &arg0);
		};

	public:
		struct RandomSTR : public CItemInfo::LevelInfo::RandomStat
		{
			// Nested
			// Fields
			// Methods
		public:
			virtual ~RandomSTR();

		public:
			void _dtor_0();

		public:
			RandomSTR(const CItemInfo::LevelInfo::RandomSTR &arg0);

		public:
			void _ctor_1(const CItemInfo::LevelInfo::RandomSTR &arg0);

		public:
			RandomSTR();

		public:
			void _ctor_0();

		public:
			virtual long GetStatType();

		public:
			CItemInfo::LevelInfo::RandomSTR &operator=(const CItemInfo::LevelInfo::RandomSTR &arg0);

		public:
			static CItemInfo::LevelInfo::RandomSTR &_op_assign_4(CItemInfo::LevelInfo::RandomSTR *pThis, const CItemInfo::LevelInfo::RandomSTR &arg0);
		};

	public:
		struct RandomDEX : public CItemInfo::LevelInfo::RandomStat
		{
			// Nested
			// Fields
			// Methods
		public:
			virtual ~RandomDEX();

		public:
			void _dtor_0();

		public:
			RandomDEX(const CItemInfo::LevelInfo::RandomDEX &arg0);

		public:
			void _ctor_1(const CItemInfo::LevelInfo::RandomDEX &arg0);

		public:
			RandomDEX();

		public:
			void _ctor_0();

		public:
			virtual long GetStatType();

		public:
			CItemInfo::LevelInfo::RandomDEX &operator=(const CItemInfo::LevelInfo::RandomDEX &arg0);

		public:
			static CItemInfo::LevelInfo::RandomDEX &_op_assign_4(CItemInfo::LevelInfo::RandomDEX *pThis, const CItemInfo::LevelInfo::RandomDEX &arg0);
		};

	public:
		struct RandomINT : public CItemInfo::LevelInfo::RandomStat
		{
			// Nested
			// Fields
			// Methods
		public:
			virtual ~RandomINT();

		public:
			void _dtor_0();

		public:
			RandomINT(const CItemInfo::LevelInfo::RandomINT &arg0);

		public:
			void _ctor_1(const CItemInfo::LevelInfo::RandomINT &arg0);

		public:
			RandomINT();

		public:
			void _ctor_0();

		public:
			virtual long GetStatType();

		public:
			CItemInfo::LevelInfo::RandomINT &operator=(const CItemInfo::LevelInfo::RandomINT &arg0);

		public:
			static CItemInfo::LevelInfo::RandomINT &_op_assign_4(CItemInfo::LevelInfo::RandomINT *pThis, const CItemInfo::LevelInfo::RandomINT &arg0);
		};

	public:
		struct RandomLUK : public CItemInfo::LevelInfo::RandomStat
		{
			// Nested
			// Fields
			// Methods
		public:
			virtual ~RandomLUK();

		public:
			void _dtor_0();

		public:
			RandomLUK(const CItemInfo::LevelInfo::RandomLUK &arg0);

		public:
			void _ctor_1(const CItemInfo::LevelInfo::RandomLUK &arg0);

		public:
			RandomLUK();

		public:
			void _ctor_0();

		public:
			virtual long GetStatType();

		public:
			CItemInfo::LevelInfo::RandomLUK &operator=(const CItemInfo::LevelInfo::RandomLUK &arg0);

		public:
			static CItemInfo::LevelInfo::RandomLUK &_op_assign_4(CItemInfo::LevelInfo::RandomLUK *pThis, const CItemInfo::LevelInfo::RandomLUK &arg0);
		};

	public:
		struct RandomPAD : public CItemInfo::LevelInfo::RandomStat
		{
			// Nested
			// Fields
			// Methods
		public:
			virtual ~RandomPAD();

		public:
			void _dtor_0();

		public:
			RandomPAD(const CItemInfo::LevelInfo::RandomPAD &arg0);

		public:
			void _ctor_1(const CItemInfo::LevelInfo::RandomPAD &arg0);

		public:
			RandomPAD();

		public:
			void _ctor_0();

		public:
			virtual long GetStatType();

		public:
			CItemInfo::LevelInfo::RandomPAD &operator=(const CItemInfo::LevelInfo::RandomPAD &arg0);

		public:
			static CItemInfo::LevelInfo::RandomPAD &_op_assign_4(CItemInfo::LevelInfo::RandomPAD *pThis, const CItemInfo::LevelInfo::RandomPAD &arg0);
		};

	public:
		struct RandomPDD : public CItemInfo::LevelInfo::RandomStat
		{
			// Nested
			// Fields
			// Methods
		public:
			virtual ~RandomPDD();

		public:
			void _dtor_0();

		public:
			RandomPDD(const CItemInfo::LevelInfo::RandomPDD &arg0);

		public:
			void _ctor_1(const CItemInfo::LevelInfo::RandomPDD &arg0);

		public:
			RandomPDD();

		public:
			void _ctor_0();

		public:
			virtual long GetStatType();

		public:
			CItemInfo::LevelInfo::RandomPDD &operator=(const CItemInfo::LevelInfo::RandomPDD &arg0);

		public:
			static CItemInfo::LevelInfo::RandomPDD &_op_assign_4(CItemInfo::LevelInfo::RandomPDD *pThis, const CItemInfo::LevelInfo::RandomPDD &arg0);
		};

	public:
		struct RandomMAD : public CItemInfo::LevelInfo::RandomStat
		{
			// Nested
			// Fields
			// Methods
		public:
			virtual ~RandomMAD();

		public:
			void _dtor_0();

		public:
			RandomMAD(const CItemInfo::LevelInfo::RandomMAD &arg0);

		public:
			void _ctor_1(const CItemInfo::LevelInfo::RandomMAD &arg0);

		public:
			RandomMAD();

		public:
			void _ctor_0();

		public:
			virtual long GetStatType();

		public:
			CItemInfo::LevelInfo::RandomMAD &operator=(const CItemInfo::LevelInfo::RandomMAD &arg0);

		public:
			static CItemInfo::LevelInfo::RandomMAD &_op_assign_4(CItemInfo::LevelInfo::RandomMAD *pThis, const CItemInfo::LevelInfo::RandomMAD &arg0);
		};

	public:
		struct RandomMDD : public CItemInfo::LevelInfo::RandomStat
		{
			// Nested
			// Fields
			// Methods
		public:
			virtual ~RandomMDD();

		public:
			void _dtor_0();

		public:
			RandomMDD(const CItemInfo::LevelInfo::RandomMDD &arg0);

		public:
			void _ctor_1(const CItemInfo::LevelInfo::RandomMDD &arg0);

		public:
			RandomMDD();

		public:
			void _ctor_0();

		public:
			virtual long GetStatType();

		public:
			CItemInfo::LevelInfo::RandomMDD &operator=(const CItemInfo::LevelInfo::RandomMDD &arg0);

		public:
			static CItemInfo::LevelInfo::RandomMDD &_op_assign_4(CItemInfo::LevelInfo::RandomMDD *pThis, const CItemInfo::LevelInfo::RandomMDD &arg0);
		};

	public:
		struct RandomACC : public CItemInfo::LevelInfo::RandomStat
		{
			// Nested
			// Fields
			// Methods
		public:
			virtual ~RandomACC();

		public:
			void _dtor_0();

		public:
			RandomACC(const CItemInfo::LevelInfo::RandomACC &arg0);

		public:
			void _ctor_1(const CItemInfo::LevelInfo::RandomACC &arg0);

		public:
			RandomACC();

		public:
			void _ctor_0();

		public:
			virtual long GetStatType();

		public:
			CItemInfo::LevelInfo::RandomACC &operator=(const CItemInfo::LevelInfo::RandomACC &arg0);

		public:
			static CItemInfo::LevelInfo::RandomACC &_op_assign_4(CItemInfo::LevelInfo::RandomACC *pThis, const CItemInfo::LevelInfo::RandomACC &arg0);
		};

	public:
		struct RandomEVA : public CItemInfo::LevelInfo::RandomStat
		{
			// Nested
			// Fields
			// Methods
		public:
			virtual ~RandomEVA();

		public:
			void _dtor_0();

		public:
			RandomEVA(const CItemInfo::LevelInfo::RandomEVA &arg0);

		public:
			void _ctor_1(const CItemInfo::LevelInfo::RandomEVA &arg0);

		public:
			RandomEVA();

		public:
			void _ctor_0();

		public:
			virtual long GetStatType();

		public:
			CItemInfo::LevelInfo::RandomEVA &operator=(const CItemInfo::LevelInfo::RandomEVA &arg0);

		public:
			static CItemInfo::LevelInfo::RandomEVA &_op_assign_4(CItemInfo::LevelInfo::RandomEVA *pThis, const CItemInfo::LevelInfo::RandomEVA &arg0);
		};

	public:
		struct RandomCraft : public CItemInfo::LevelInfo::RandomStat
		{
			// Nested
			// Fields
			// Methods
		public:
			virtual ~RandomCraft();

		public:
			void _dtor_0();

		public:
			RandomCraft(const CItemInfo::LevelInfo::RandomCraft &arg0);

		public:
			void _ctor_1(const CItemInfo::LevelInfo::RandomCraft &arg0);

		public:
			RandomCraft();

		public:
			void _ctor_0();

		public:
			virtual long GetStatType();

		public:
			CItemInfo::LevelInfo::RandomCraft &operator=(const CItemInfo::LevelInfo::RandomCraft &arg0);

		public:
			static CItemInfo::LevelInfo::RandomCraft &_op_assign_4(CItemInfo::LevelInfo::RandomCraft *pThis, const CItemInfo::LevelInfo::RandomCraft &arg0);
		};

	public:
		struct RandomSpeed : public CItemInfo::LevelInfo::RandomStat
		{
			// Nested
			// Fields
			// Methods
		public:
			virtual ~RandomSpeed();

		public:
			void _dtor_0();

		public:
			RandomSpeed(const CItemInfo::LevelInfo::RandomSpeed &arg0);

		public:
			void _ctor_1(const CItemInfo::LevelInfo::RandomSpeed &arg0);

		public:
			RandomSpeed();

		public:
			void _ctor_0();

		public:
			virtual long GetStatType();

		public:
			CItemInfo::LevelInfo::RandomSpeed &operator=(const CItemInfo::LevelInfo::RandomSpeed &arg0);

		public:
			static CItemInfo::LevelInfo::RandomSpeed &_op_assign_4(CItemInfo::LevelInfo::RandomSpeed *pThis, const CItemInfo::LevelInfo::RandomSpeed &arg0);
		};

	public:
		struct RandomJump : public CItemInfo::LevelInfo::RandomStat
		{
			// Nested
			// Fields
			// Methods
		public:
			virtual ~RandomJump();

		public:
			void _dtor_0();

		public:
			RandomJump(const CItemInfo::LevelInfo::RandomJump &arg0);

		public:
			void _ctor_1(const CItemInfo::LevelInfo::RandomJump &arg0);

		public:
			RandomJump();

		public:
			void _ctor_0();

		public:
			virtual long GetStatType();

		public:
			CItemInfo::LevelInfo::RandomJump &operator=(const CItemInfo::LevelInfo::RandomJump &arg0);

		public:
			static CItemInfo::LevelInfo::RandomJump &_op_assign_4(CItemInfo::LevelInfo::RandomJump *pThis, const CItemInfo::LevelInfo::RandomJump &arg0);
		};

	public:
		struct RandomSMHP : public CItemInfo::LevelInfo::RandomStat
		{
			// Nested
			// Fields
			// Methods
		public:
			virtual ~RandomSMHP();

		public:
			void _dtor_0();

		public:
			RandomSMHP(const CItemInfo::LevelInfo::RandomSMHP &arg0);

		public:
			void _ctor_1(const CItemInfo::LevelInfo::RandomSMHP &arg0);

		public:
			RandomSMHP();

		public:
			void _ctor_0();

		public:
			virtual long GetStatType();

		public:
			CItemInfo::LevelInfo::RandomSMHP &operator=(const CItemInfo::LevelInfo::RandomSMHP &arg0);

		public:
			static CItemInfo::LevelInfo::RandomSMHP &_op_assign_4(CItemInfo::LevelInfo::RandomSMHP *pThis, const CItemInfo::LevelInfo::RandomSMHP &arg0);
		};

	public:
		struct RandomSMMP : public CItemInfo::LevelInfo::RandomStat
		{
			// Nested
			// Fields
			// Methods
		public:
			virtual ~RandomSMMP();

		public:
			void _dtor_0();

		public:
			RandomSMMP(const CItemInfo::LevelInfo::RandomSMMP &arg0);

		public:
			void _ctor_1(const CItemInfo::LevelInfo::RandomSMMP &arg0);

		public:
			RandomSMMP();

		public:
			void _ctor_0();

		public:
			virtual long GetStatType();

		public:
			CItemInfo::LevelInfo::RandomSMMP &operator=(const CItemInfo::LevelInfo::RandomSMMP &arg0);

		public:
			static CItemInfo::LevelInfo::RandomSMMP &_op_assign_4(CItemInfo::LevelInfo::RandomSMMP *pThis, const CItemInfo::LevelInfo::RandomSMMP &arg0);
		};
		// Fields
	public:
		long nExpRate{};

	public:
		ZList<ZRef<CItemInfo::LevelInfo::RandomStat>> lpIncStat;

	public:
		ZMap<long, ZRef<CItemInfo::LevelInfo::Ability>, long> mpAbility;
		// Methods
	public:
		~LevelInfo();

	public:
		void _dtor_0();

	public:
		LevelInfo(const CItemInfo::LevelInfo &arg0);

	public:
		void _ctor_1(const CItemInfo::LevelInfo &arg0);

	public:
		LevelInfo();

	public:
		void _ctor_0();

	public:
		CItemInfo::LevelInfo &operator=(const CItemInfo::LevelInfo &arg0);

	public:
		static CItemInfo::LevelInfo &_op_assign_3(CItemInfo::LevelInfo *pThis, const CItemInfo::LevelInfo &arg0);
	};

public:
	struct EQUIPITEM
	{
		// Nested
	public:
		struct ADDITION
		{
			// Nested
			// Fields
		public:
			ZRef<Additional::TCond<Additional::SKILL>> pSkill;

		public:
			ZRef<Additional::TCond<Additional::MOBCATEGORY>> pMobCategory;

		public:
			ZRef<Additional::TCond<Additional::ELEMBOOST>> pElemBoost;

		public:
			ZRef<Additional::TCond<Additional::CRITICAL>> pCritical;

		public:
			ZRef<Additional::TCond<Additional::BOSS>> pBoss;

		public:
			ZRef<Additional::TCond<Additional::MOBDIE>> pMobDie;

		public:
			ZRef<Additional::TCond<Additional::HPMPCHANGE>> pHpMpChange;
			// Methods
		public:
			~ADDITION();

		public:
			void _dtor_0();

		public:
			ADDITION(const CItemInfo::EQUIPITEM::ADDITION &arg0);

		public:
			void _ctor_1(const CItemInfo::EQUIPITEM::ADDITION &arg0);

		public:
			ADDITION();

		public:
			void _ctor_0();

		public:
			static ZRef<CItemInfo::EQUIPITEM::ADDITION> __cdecl Load(_x_com_ptr<IWzProperty> pAddition);

		public:
			ZXString<char> GetDesc();

		public:
			CItemInfo::EQUIPITEM::ADDITION &operator=(const CItemInfo::EQUIPITEM::ADDITION &arg0);

		public:
			static CItemInfo::EQUIPITEM::ADDITION &_op_assign_5(CItemInfo::EQUIPITEM::ADDITION *pThis, const CItemInfo::EQUIPITEM::ADDITION &arg0);
		};

	public:
		enum GRADE_
		{
			GRADE_NORMAL = 0,
			GRADE_RARE = 1,
			GRADE_EPIC = 2,
			GRADE_UNIQUE = 3
		};
		// Fields
	public:
		std::array<long, 2> _ZtlSecureTear_nItemID{};

	public:
		uint32_t _ZtlSecureTear_nItemID_CS{};

	public:
		int32_t bTimeLimited{};

	public:
		ZXString<char> sItemName;

	public:
		Ztl_bstr_t bsUOL;

	public:
		std::array<long, 2> _ZtlSecureTear_nrSTR{};

	public:
		uint32_t _ZtlSecureTear_nrSTR_CS{};

	public:
		std::array<long, 2> _ZtlSecureTear_nrINT{};

	public:
		uint32_t _ZtlSecureTear_nrINT_CS{};

	public:
		std::array<long, 2> _ZtlSecureTear_nrDEX{};

	public:
		uint32_t _ZtlSecureTear_nrDEX_CS{};

	public:
		std::array<long, 2> _ZtlSecureTear_nrLUK{};

	public:
		uint32_t _ZtlSecureTear_nrLUK_CS{};

	public:
		std::array<long, 2> _ZtlSecureTear_nrPOP{};

	public:
		uint32_t _ZtlSecureTear_nrPOP_CS{};

	public:
		std::array<long, 2> _ZtlSecureTear_nrJob{};

	public:
		uint32_t _ZtlSecureTear_nrJob_CS{};

	public:
		std::array<long, 2> _ZtlSecureTear_nrLevel{};

	public:
		uint32_t _ZtlSecureTear_nrLevel_CS{};

	public:
		std::array<long, 2> _ZtlSecureTear_nrMobLevel{};

	public:
		uint32_t _ZtlSecureTear_nrMobLevel_CS{};

	public:
		long nReplaceItemID{};

	public:
		ZXString<char> sReplaceMsg;

	public:
		long nReplacePeriod{};

	public:
		std::array<long, 2> _ZtlSecureTear_nSellPrice{};

	public:
		uint32_t _ZtlSecureTear_nSellPrice_CS{};

	public:
		std::array<int32_t, 2> _ZtlSecureTear_bCash{};

	public:
		uint32_t _ZtlSecureTear_bCash_CS{};

	public:
		short niMaxHPr{};

	public:
		short niMaxMPr{};

	public:
		std::array<unsigned char, 2> _ZtlSecureTear_nRUC;

	public:
		uint32_t _ZtlSecureTear_nRUC_CS{};

	public:
		std::array<unsigned char, 2> _ZtlSecureTear_nTUC;

	public:
		uint32_t _ZtlSecureTear_nTUC_CS{};

	public:
		std::array<short, 2> _ZtlSecureTear_niSTR{};

	public:
		uint32_t _ZtlSecureTear_niSTR_CS{};

	public:
		std::array<short, 2> _ZtlSecureTear_niDEX{};

	public:
		uint32_t _ZtlSecureTear_niDEX_CS{};

	public:
		std::array<short, 2> _ZtlSecureTear_niINT{};

	public:
		uint32_t _ZtlSecureTear_niINT_CS{};

	public:
		std::array<short, 2> _ZtlSecureTear_niLUK{};

	public:
		uint32_t _ZtlSecureTear_niLUK_CS{};

	public:
		std::array<short, 2> _ZtlSecureTear_niMaxHP{};

	public:
		uint32_t _ZtlSecureTear_niMaxHP_CS{};

	public:
		std::array<short, 2> _ZtlSecureTear_niMaxMP{};

	public:
		uint32_t _ZtlSecureTear_niMaxMP_CS{};

	public:
		std::array<short, 2> _ZtlSecureTear_niPAD{};

	public:
		uint32_t _ZtlSecureTear_niPAD_CS{};

	public:
		std::array<short, 2> _ZtlSecureTear_niMAD{};

	public:
		uint32_t _ZtlSecureTear_niMAD_CS{};

	public:
		std::array<short, 2> _ZtlSecureTear_niPDD{};

	public:
		uint32_t _ZtlSecureTear_niPDD_CS{};

	public:
		std::array<short, 2> _ZtlSecureTear_niMDD{};

	public:
		uint32_t _ZtlSecureTear_niMDD_CS{};

	public:
		std::array<short, 2> _ZtlSecureTear_niACC{};

	public:
		uint32_t _ZtlSecureTear_niACC_CS{};

	public:
		std::array<short, 2> _ZtlSecureTear_niEVA{};

	public:
		uint32_t _ZtlSecureTear_niEVA_CS{};

	public:
		std::array<short, 2> _ZtlSecureTear_niCraft{};

	public:
		uint32_t _ZtlSecureTear_niCraft_CS{};

	public:
		std::array<short, 2> _ZtlSecureTear_niSpeed{};

	public:
		uint32_t _ZtlSecureTear_niSpeed_CS{};

	public:
		std::array<short, 2> _ZtlSecureTear_niJump{};

	public:
		uint32_t _ZtlSecureTear_niJump_CS{};

	public:
		std::array<short, 2> _ZtlSecureTear_niSwim{};

	public:
		uint32_t _ZtlSecureTear_niSwim_CS{};

	public:
		std::array<short, 2> _ZtlSecureTear_niFatigue{};

	public:
		uint32_t _ZtlSecureTear_niFatigue_CS{};

	public:
		std::array<long, 2> _ZtlSecureTear_nKnockback{};

	public:
		uint32_t _ZtlSecureTear_nKnockback_CS{};

	public:
		std::array<double, 2> _ZtlSecureTear_dRecovery{};

	public:
		uint32_t _ZtlSecureTear_dRecovery_CS{};

	public:
		std::array<double, 2> _ZtlSecureTear_dFs{};

	public:
		uint32_t _ZtlSecureTear_dFs_CS{};

	public:
		std::array<long, 2> _ZtlSecureTear_nSwim{};

	public:
		uint32_t _ZtlSecureTear_nSwim_CS{};

	public:
		std::array<long, 2> _ZtlSecureTear_nTamingMob{};

	public:
		uint32_t _ZtlSecureTear_nTamingMob_CS{};

	public:
		std::array<long, 2> _ZtlSecureTear_nIUC{};

	public:
		uint32_t _ZtlSecureTear_nIUC_CS{};

	public:
		unsigned char nMinGrade{};

	public:
		int32_t bQuest{};

	public:
		int32_t bPartyQuest{};

	public:
		int32_t bOnly{};

	public:
		int32_t bOnlyEquip{};

	public:
		int32_t bTradeBlock{};

	public:
		long nAppliableKarmaType{};

	public:
		int32_t bNotSale{};

	public:
		int32_t bBigSize{};

	public:
		int32_t bExpireOnLogout{};

	public:
		short nirPoison{};

	public:
		short nirIce{};

	public:
		short nirFire{};

	public:
		short nirLight{};

	public:
		short nirHoly{};

	public:
		int32_t bBindedWhenEquiped{};

	public:
		unsigned long dwSpecialID{};

	public:
		int32_t bNotExtend{};

	public:
		int32_t bAccountSharable{};

	public:
		int32_t bSharableOnce{};

	public:
		unsigned long dwAfterimageFlag{};

	public:
		long nUserInfoScale{};

	public:
		tagPOINT ptUserInfoDiff{};

	public:
		MY_UINT128 uPetTemplateFlag;

	public:
		unsigned long dwPetAbilityFlag{};

	public:
		long nNameTag{};

	public:
		long nChatBalloon{};

	public:
		ZArray<long> anLevelUpTypePool;

	public:
		ZArray<ZRef<CItemInfo::LevelInfo>> apLevelInfo;

	public:
		int32_t bEpic{};

	public:
		long nSetItemID{};

	public:
		ZXString<char> sDesc;

	public:
		ZList<ZRef<CItemInfo::ItemSkill>> lpItemSkill;

	public:
		ZMap<long, long, long> mSkillLevelBonus;

	public:
		ZArray<ZPair<long, long>> aBonusExpRate;

	public:
		ZArray<ZPair<long, long>> aPotionDiscountRate;

	public:
		ZArray<long> aTamingMobItem;

	public:
		ZRef<CItemInfo::EQUIPITEM::ADDITION> pAddition;

	public:
		long nDurability{};

	public:
		long nEnchantCategory{};

	public:
		int32_t bTransform{};

	public:
		long nIUCMax{};
		// Methods
	public:
		~EQUIPITEM();

	public:
		void _dtor_0();

	public:
		EQUIPITEM(const CItemInfo::EQUIPITEM &arg0);

	public:
		void _ctor_1(const CItemInfo::EQUIPITEM &arg0);

	public:
		EQUIPITEM();

	public:
		void _ctor_0();

	public:
		long __fastcall _ZtlSecureGet_nItemID() const;

	public:
		long __fastcall _ZtlSecurePut_nItemID(long arg0);

	public:
		long __fastcall _ZtlSecureGet_nrSTR() const;

	public:
		long __fastcall _ZtlSecurePut_nrSTR(long arg0);

	public:
		long __fastcall _ZtlSecureGet_nrINT() const;

	public:
		long __fastcall _ZtlSecurePut_nrINT(long arg0);

	public:
		long __fastcall _ZtlSecureGet_nrDEX() const;

	public:
		long __fastcall _ZtlSecurePut_nrDEX(long arg0);

	public:
		long __fastcall _ZtlSecureGet_nrLUK() const;

	public:
		long __fastcall _ZtlSecurePut_nrLUK(long arg0);

	public:
		long __fastcall _ZtlSecureGet_nrPOP() const;

	public:
		long __fastcall _ZtlSecurePut_nrPOP(long arg0);

	public:
		long __fastcall _ZtlSecureGet_nrJob() const;

	public:
		long __fastcall _ZtlSecurePut_nrJob(long arg0);

	public:
		long __fastcall _ZtlSecureGet_nrLevel() const;

	public:
		long __fastcall _ZtlSecurePut_nrLevel(long arg0);

	public:
		long __fastcall _ZtlSecureGet_nrMobLevel() const;

	public:
		long __fastcall _ZtlSecurePut_nrMobLevel(long arg0);

	public:
		long __fastcall _ZtlSecureGet_nSellPrice() const;

	public:
		long __fastcall _ZtlSecurePut_nSellPrice(long arg0);

	public:
		int32_t __fastcall _ZtlSecureGet_bCash() const;

	public:
		int32_t __fastcall _ZtlSecurePut_bCash(int32_t arg0);

	public:
		unsigned char __fastcall _ZtlSecureGet_nRUC() const;

	public:
		unsigned char __fastcall _ZtlSecurePut_nRUC(unsigned char arg0);

	public:
		unsigned char __fastcall _ZtlSecureGet_nTUC() const;

	public:
		unsigned char __fastcall _ZtlSecurePut_nTUC(unsigned char arg0);

	public:
		short __fastcall _ZtlSecureGet_niSTR() const;

	public:
		short __fastcall _ZtlSecurePut_niSTR(short arg0);

	public:
		short __fastcall _ZtlSecureGet_niDEX() const;

	public:
		short __fastcall _ZtlSecurePut_niDEX(short arg0);

	public:
		short __fastcall _ZtlSecureGet_niINT() const;

	public:
		short __fastcall _ZtlSecurePut_niINT(short arg0);

	public:
		short __fastcall _ZtlSecureGet_niLUK() const;

	public:
		short __fastcall _ZtlSecurePut_niLUK(short arg0);

	public:
		short __fastcall _ZtlSecureGet_niMaxHP() const;

	public:
		short __fastcall _ZtlSecurePut_niMaxHP(short arg0);

	public:
		short __fastcall _ZtlSecureGet_niMaxMP() const;

	public:
		short __fastcall _ZtlSecurePut_niMaxMP(short arg0);

	public:
		short __fastcall _ZtlSecureGet_niPAD() const;

	public:
		short __fastcall _ZtlSecurePut_niPAD(short arg0);

	public:
		short __fastcall _ZtlSecureGet_niMAD() const;

	public:
		short __fastcall _ZtlSecurePut_niMAD(short arg0);

	public:
		short __fastcall _ZtlSecureGet_niPDD() const;

	public:
		short __fastcall _ZtlSecurePut_niPDD(short arg0);

	public:
		short __fastcall _ZtlSecureGet_niMDD() const;

	public:
		short __fastcall _ZtlSecurePut_niMDD(short arg0);

	public:
		short __fastcall _ZtlSecureGet_niACC() const;

	public:
		short __fastcall _ZtlSecurePut_niACC(short arg0);

	public:
		short __fastcall _ZtlSecureGet_niEVA() const;

	public:
		short __fastcall _ZtlSecurePut_niEVA(short arg0);

	public:
		short __fastcall _ZtlSecureGet_niCraft() const;

	public:
		short __fastcall _ZtlSecurePut_niCraft(short arg0);

	public:
		short __fastcall _ZtlSecureGet_niSpeed() const;

	public:
		short __fastcall _ZtlSecurePut_niSpeed(short arg0);

	public:
		short __fastcall _ZtlSecureGet_niJump() const;

	public:
		short __fastcall _ZtlSecurePut_niJump(short arg0);

	public:
		short __fastcall _ZtlSecureGet_niSwim() const;

	public:
		short __fastcall _ZtlSecurePut_niSwim(short arg0);

	public:
		short __fastcall _ZtlSecureGet_niFatigue() const;

	public:
		short __fastcall _ZtlSecurePut_niFatigue(short arg0);

	public:
		long __fastcall _ZtlSecureGet_nKnockback() const;

	public:
		long __fastcall _ZtlSecurePut_nKnockback(long arg0);

	public:
		double __fastcall _ZtlSecureGet_dRecovery() const;

	public:
		double __fastcall _ZtlSecurePut_dRecovery(double arg0);

	public:
		double __fastcall _ZtlSecureGet_dFs() const;

	public:
		double __fastcall _ZtlSecurePut_dFs(double arg0);

	public:
		long __fastcall _ZtlSecureGet_nSwim() const;

	public:
		long __fastcall _ZtlSecurePut_nSwim(long arg0);

	public:
		long __fastcall _ZtlSecureGet_nTamingMob() const;

	public:
		long __fastcall _ZtlSecurePut_nTamingMob(long arg0);

	public:
		long __fastcall _ZtlSecureGet_nIUC() const;

	public:
		long __fastcall _ZtlSecurePut_nIUC(long arg0);

	public:
		int32_t IsSetItem();

	public:
		long GetSetItemID();

	public:
		int32_t IsBonusExpItem();

	public:
		long GetBonusExpRate(long nCurDurability);

	public:
		int32_t IsPotionDiscount();

	public:
		long GetPotionDiscountRate(long nCurDurability);

	public:
		int32_t IsItemSuitedForTamingMob(long nTamingMobID);

	public:
		int32_t IsAbleToStickWithWeapon(long nTamingMobID);

	public:
		int32_t IsItemSuitedForPet(long nPetTemplateID);

	public:
		long PickLevelUpType();

	public:
		long CalcRepairDurabilityPay(long nCurDurability);

	public:
		CItemInfo::EQUIPITEM &operator=(const CItemInfo::EQUIPITEM &arg0);

	public:
		static CItemInfo::EQUIPITEM &_op_assign_86(CItemInfo::EQUIPITEM *pThis, const CItemInfo::EQUIPITEM &arg0);
	};

public:
	struct SETEFFECT
	{
		// Nested
		// Fields
	public:
		short niSTR{};

	public:
		short niDEX{};

	public:
		short niINT{};

	public:
		short niLUK{};

	public:
		short niMaxHP{};

	public:
		short niMaxMP{};

	public:
		short niPAD{};

	public:
		short niMAD{};

	public:
		short niPDD{};

	public:
		short niMDD{};

	public:
		short niACC{};

	public:
		short niEVA{};

	public:
		short niCraft{};

	public:
		short niSpeed{};

	public:
		short niJump{};

	public:
		long nKnockback{};

	public:
		long lSetKey{};

	public:
		ZList<ZRef<CItemInfo::ItemSkill>> lpItemSkill;

	public:
		ZMap<long, long, long> mSkillLevelBonus;
		// Methods
	public:
		~SETEFFECT();

	public:
		void _dtor_0();

	public:
		SETEFFECT(const CItemInfo::SETEFFECT &arg0);

	public:
		void _ctor_1(const CItemInfo::SETEFFECT &arg0);

	public:
		SETEFFECT();

	public:
		void _ctor_0();

	public:
		CItemInfo::SETEFFECT &operator=(const CItemInfo::SETEFFECT &arg0);

	public:
		static CItemInfo::SETEFFECT &_op_assign_3(CItemInfo::SETEFFECT *pThis, const CItemInfo::SETEFFECT &arg0);
	};

public:
	struct SETITEMINFO
	{
		// Nested
	public:
		enum SETITEM_PARTS_NUM_MAX
		{
			SETITEM_PARTS_NUM_MAX = 60
		};
		// Fields
	public:
		long nSetItemID{};

	public:
		ZArray<long> nItemID;

	public:
		std::array<ZRef<CItemInfo::SETEFFECT>, 60> pEffect{};

	public:
		ZXString<char> sSetItemName;

	public:
		long nSetCompleteCount{};

	public:
		ZXString16 sCompleteEffectLink;

	public:
		ZMap<long, ZXString<char>, long> mCategoryName;
		// Methods
	public:
		~SETITEMINFO();

	public:
		void _dtor_0();

	public:
		SETITEMINFO(const CItemInfo::SETITEMINFO &arg0);

	public:
		void _ctor_1(const CItemInfo::SETITEMINFO &arg0);

	public:
		SETITEMINFO();

	public:
		void _ctor_0();

	public:
		CItemInfo::SETITEMINFO &operator=(const CItemInfo::SETITEMINFO &arg0);

	public:
		static CItemInfo::SETITEMINFO &_op_assign_3(CItemInfo::SETITEMINFO *pThis, const CItemInfo::SETITEMINFO &arg0);
	};

public:
	struct GACHAPONAGGSCOPE
	{
		// Nested
		// Fields
	public:
		long nMinType{};

	public:
		long nMaxType{};
		// Methods
	public:
		GACHAPONAGGSCOPE();

	public:
		void _ctor_0();
	};

public:
	struct GACHAPONITEMINFO
	{
		// Nested
		// Fields
	public:
		ZArray<CItemInfo::GACHAPONAGGSCOPE> aAbleUsingAggScope;

	public:
		int32_t bBonus{};

	public:
		int32_t bNoGradeResult{};

	public:
		long nSucessNpcID{};

	public:
		ZArray<ZXString<char>> aMsg;

	public:
		std::array<long, 4> aFinalconfirmInfo{};
		// Methods
	public:
		~GACHAPONITEMINFO();

	public:
		void _dtor_0();

	public:
		GACHAPONITEMINFO(const CItemInfo::GACHAPONITEMINFO &arg0);

	public:
		void _ctor_1(const CItemInfo::GACHAPONITEMINFO &arg0);

	public:
		GACHAPONITEMINFO();

	public:
		void _ctor_0();

	public:
		CItemInfo::GACHAPONITEMINFO &operator=(const CItemInfo::GACHAPONITEMINFO &arg0);

	public:
		static CItemInfo::GACHAPONITEMINFO &_op_assign_3(CItemInfo::GACHAPONITEMINFO *pThis, const CItemInfo::GACHAPONITEMINFO &arg0);
	};

public:
	struct BUNDLEITEM
	{
		// Nested
		// Fields
	public:
		ZXString<char> sItemName;

	public:
		long nItemID{};

	public:
		int32_t bTimeLimited{};

	public:
		int32_t bOnly{};

	public:
		int32_t bTradeBlock{};

	public:
		long nAppliableKarmaType{};

	public:
		int32_t bNotSale{};

	public:
		int32_t bBigSize{};

	public:
		int32_t bExpireOnLogout{};

	public:
		int32_t bNoCancelMouse{};

	public:
		long nPAD{};

	public:
		long nRequiredLEV{};

	public:
		ZList<unsigned long> lReqField;

	public:
		long nSellPrice{};

	public:
		double dSellUnitPrice{};

	public:
		int32_t bCash{};

	public:
		int32_t bQuest{};

	public:
		int32_t bPartyQuest{};

	public:
		short nMaxPerSlot{};

	public:
		short nMax{};

	public:
		uint16_t usReqQuestOnProgress{};

	public:
		long nMCType{};

	public:
		int32_t bMonsterBookCard{};

	public:
		long nReplaceItemID{};

	public:
		ZXString<char> sReplaceMsg;

	public:
		long nReplacePeriod{};

	public:
		int32_t bAccountSharable{};
		// Methods
	public:
		~BUNDLEITEM();

	public:
		void _dtor_0();

	public:
		BUNDLEITEM(const CItemInfo::BUNDLEITEM &arg0);

	public:
		void _ctor_1(const CItemInfo::BUNDLEITEM &arg0);

	public:
		BUNDLEITEM();

	public:
		void _ctor_0();

	public:
		CItemInfo::BUNDLEITEM &operator=(const CItemInfo::BUNDLEITEM &arg0);

	public:
		static CItemInfo::BUNDLEITEM &_op_assign_3(CItemInfo::BUNDLEITEM *pThis, const CItemInfo::BUNDLEITEM &arg0);
	};

public:
	struct PETFOODITEM
	{
		// Nested
		// Fields
	public:
		long nItemID{};

	public:
		long niRepleteness{};

	public:
		ZList<unsigned long> ldwPet;
		// Methods
	public:
		~PETFOODITEM();

	public:
		void _dtor_0();

	public:
		PETFOODITEM(const CItemInfo::PETFOODITEM &arg0);

	public:
		void _ctor_1(const CItemInfo::PETFOODITEM &arg0);

	public:
		PETFOODITEM();

	public:
		void _ctor_0();

	public:
		CItemInfo::PETFOODITEM &operator=(const CItemInfo::PETFOODITEM &arg0);

	public:
		static CItemInfo::PETFOODITEM &_op_assign_3(CItemInfo::PETFOODITEM *pThis, const CItemInfo::PETFOODITEM &arg0);
	};

public:
	struct AREABUFFITEM
	{
		// Nested
		// Fields
	public:
		long nItemID{};

	public:
		long nStateChageItemID{};

	public:
		long tTime{};

	public:
		tagRECT rcAffectedArea{};

	public:
		long nTotalProp{};

	public:
		std::array<long, 24> aEmotionProp{};
		// Methods
	};

public:
	struct BRIDLEITEM
	{
		// Nested
		// Fields
	public:
		unsigned long dwTargetMobID{};

	public:
		long nItemID{};

	public:
		tagRECT rc{};

	public:
		long nCreateItemID{};

	public:
		long nCreateItemPeriod{};

	public:
		long nCatchPercentageHP{};

	public:
		long nBridleMsgType{};

	public:
		float fBridleProb{};

	public:
		float fBridleProbAdj{};

	public:
		unsigned long tUseDelay{};

	public:
		ZXString<char> sDeleyMsg;

	public:
		ZXString<char> sNoMobMsg;
		// Methods
	public:
		~BRIDLEITEM();

	public:
		void _dtor_0();

	public:
		BRIDLEITEM(const CItemInfo::BRIDLEITEM &arg0);

	public:
		void _ctor_1(const CItemInfo::BRIDLEITEM &arg0);

	public:
		BRIDLEITEM();

	public:
		void _ctor_0();

	public:
		CItemInfo::BRIDLEITEM &operator=(const CItemInfo::BRIDLEITEM &arg0);

	public:
		static CItemInfo::BRIDLEITEM &_op_assign_3(CItemInfo::BRIDLEITEM *pThis, const CItemInfo::BRIDLEITEM &arg0);
	};

public:
	struct KARMASCISSORSITEM
	{
		// Nested
		// Fields
	public:
		long nItemID{};

	public:
		long nKarmaKey{};
		// Methods
	};

public:
	struct LOTTERY_ENTITY
	{
		// Nested
		// Fields
	public:
		long nItemID{};

	public:
		long nProb{};

	public:
		long nQuantity{};

	public:
		ZXString<char> sEffect;

	public:
		ZXString<char> sWorldMsg;

	public:
		long nPeriod{};

	public:
		ZXString<char> sDateExpire;
		// Methods
	public:
		~LOTTERY_ENTITY();

	public:
		void _dtor_0();

	public:
		LOTTERY_ENTITY(const CItemInfo::LOTTERY_ENTITY &arg0);

	public:
		void _ctor_1(const CItemInfo::LOTTERY_ENTITY &arg0);

	public:
		LOTTERY_ENTITY();

	public:
		void _ctor_0();

	public:
		CItemInfo::LOTTERY_ENTITY &operator=(const CItemInfo::LOTTERY_ENTITY &arg0);

	public:
		static CItemInfo::LOTTERY_ENTITY &_op_assign_3(CItemInfo::LOTTERY_ENTITY *pThis, const CItemInfo::LOTTERY_ENTITY &arg0);
	};

public:
	struct LOTTERYITEM
	{
		// Nested
		// Fields
	public:
		ZArray<CItemInfo::LOTTERY_ENTITY> aEntity;

	public:
		long nTotalProb{};
		// Methods
	public:
		~LOTTERYITEM();

	public:
		void _dtor_0();

	public:
		LOTTERYITEM(const CItemInfo::LOTTERYITEM &arg0);

	public:
		void _ctor_1(const CItemInfo::LOTTERYITEM &arg0);

	public:
		LOTTERYITEM();

	public:
		void _ctor_0();

	public:
		CItemInfo::LOTTERYITEM &operator=(const CItemInfo::LOTTERYITEM &arg0);

	public:
		static CItemInfo::LOTTERYITEM &_op_assign_3(CItemInfo::LOTTERYITEM *pThis, const CItemInfo::LOTTERYITEM &arg0);
	};

public:
	struct EXTENDEXPIREDATEITEM
	{
		// Nested
		// Fields
	public:
		long nItemID{};

	public:
		long nExtendSeconds{};

	public:
		long nMaxExtendDays{};
		// Methods
	};

public:
	struct EXPIREDPROTECTINGITEM
	{
		// Nested
		// Fields
	public:
		long nItemID{};

	public:
		long nProtectDays{};
		// Methods
	};

public:
	struct PROTECTONDIEITEM
	{
		// Nested
		// Fields
	public:
		long nItemID{};

	public:
		long nRecoveryRate{};
		// Methods
	};

public:
	struct EQUIPEXTITEM
	{
		// Nested
		// Fields
	public:
		long nItemID{};

	public:
		long nSlotIndex{};

	public:
		long nAddDay{};
		// Methods
	};

public:
	struct INCLEVELITEM
	{
		// Nested
		// Fields
	public:
		long nItemID{};

	public:
		long nIncLEV{};
		// Methods
	};

public:
	struct QUESTDELIVERYITEM
	{
		// Nested
		// Fields
	public:
		long nItemID{};

	public:
		long nType{};

	public:
		ZXString<char> sEffect;

	public:
		ZList<unsigned short> lDisallowComplete;

	public:
		ZList<unsigned short> lDisallowAccept;
		// Methods
	public:
		~QUESTDELIVERYITEM();

	public:
		void _dtor_0();

	public:
		QUESTDELIVERYITEM(const CItemInfo::QUESTDELIVERYITEM &arg0);

	public:
		void _ctor_1(const CItemInfo::QUESTDELIVERYITEM &arg0);

	public:
		QUESTDELIVERYITEM();

	public:
		void _ctor_0();

	public:
		long GetType();

	public:
		int32_t IsAllowedDeliveryQuest(uint16_t usQuestID);

	public:
		CItemInfo::QUESTDELIVERYITEM &operator=(const CItemInfo::QUESTDELIVERYITEM &arg0);

	public:
		static CItemInfo::QUESTDELIVERYITEM &_op_assign_5(CItemInfo::QUESTDELIVERYITEM *pThis, const CItemInfo::QUESTDELIVERYITEM &arg0);
	};

public:
	struct SET_EFFECT
	{
		// Nested
		// Fields
	public:
		long nCash{};

	public:
		std::array<ZList<long>, 60> alItemList{};

	public:
		std::array<ZList<long>, 5> alMechanicItemList{};

	public:
		ZList<long> lMultipetList;
		// Methods
		CTOR_DEFAULT(SET_EFFECT)
	public:
		~SET_EFFECT();

	public:
		void _dtor_0();

	public:
		SET_EFFECT(const CItemInfo::SET_EFFECT &arg0);

	public:
		void _ctor_1(const CItemInfo::SET_EFFECT &arg0);

	public:
		SET_EFFECT();

	public:
		void _ctor_0();

	public:
		CItemInfo::SET_EFFECT &operator=(const CItemInfo::SET_EFFECT &__that);

	public:
		static CItemInfo::SET_EFFECT &_op_assign_3(CItemInfo::SET_EFFECT *pThis, const CItemInfo::SET_EFFECT &__that);
	};

public:
	struct COUPLECHAIRITEM
	{
		// Nested
		// Fields
	public:
		long nItemID{};

	public:
		long nDistanceX{};

	public:
		long nDistanceY{};

	public:
		long nMaxDiff{};

	public:
		long nDirection{};
		// Methods
	};
	// Fields
public:
	ZMap<long, unsigned long, long> m_mItemCRC;

protected:
	ZMap<long, ZRef<CItemInfo::QUESTDELIVERYITEM>, long> m_mQuestDeliveryItem;

protected:
	ZFatalSection m_lock;

protected:
	ZMap<long, ZRef<CItemInfo::EQUIPITEM>, long> m_mEquipItem;

protected:
	ZMap<long, ZRef<CItemInfo::BUNDLEITEM>, long> m_mBundleItem;

protected:
	ZMap<long, ZMap<char const *, ZXString<char>, ZXString<char>>, long> m_mItemString;

protected:
	ZMap<unsigned long, ZMap<char const *, ZXString<char>, ZXString<char>>, unsigned long> m_mMapString;

protected:
	ZMap<long, ZRef<CItemInfo::SETITEMINFO>, long> m_mSetItemInfo;

protected:
	ZMap<long, ZRef<CItemInfo::PETFOODITEM>, long> m_mPetFoodItem;

protected:
	ZMap<long, ZRef<CItemInfo::BRIDLEITEM>, long> m_mBridleItem;

protected:
	ZMap<long, ZRef<CItemInfo::LOTTERYITEM>, long> m_mLotteryItem;

protected:
	ZMap<long, ZRef<CItemInfo::EXTENDEXPIREDATEITEM>, long> m_mExtendExpireDateItem;

protected:
	ZMap<long, ZRef<CItemInfo::EXPIREDPROTECTINGITEM>, long> m_mExpiredProtectingItem;

protected:
	ZMap<long, ZRef<CItemInfo::PROTECTONDIEITEM>, long> m_mProtectOnDieItem;

protected:
	ZMap<long, ZRef<CItemInfo::KARMASCISSORSITEM>, long> m_mKarmaScissorsItem;

protected:
	ZList<long> m_lHalloweenItem;

protected:
	ZMap<long, ZRef<CItemInfo::AREABUFFITEM>, long> m_mAreaBuffItem;

protected:
	ZMap<long, ZRef<CItemInfo::INCLEVELITEM>, long> m_mIncLevelItem;

protected:
	ZMap<long, ZRef<CItemInfo::GACHAPONITEMINFO>, long> m_mGachaponItemInfo;

protected:
	_x_com_ptr<IWzCanvas> m_pItemShadow;

protected:
	_x_com_ptr<IWzCanvas> m_pCashIcon;

protected:
	_x_com_ptr<IWzCanvas> m_pCashIconForPrepaidCashItems;

protected:
	_x_com_ptr<IWzCanvas> m_pProtectedIcon;

protected:
	_x_com_ptr<IWzCanvas> m_pQualityIcon_bad;

protected:
	_x_com_ptr<IWzCanvas> m_pQualityIcon_good;

protected:
	_x_com_ptr<IWzCanvas> m_pQualityIcon_veryGood;

protected:
	_x_com_ptr<IWzCanvas> m_pQualityIcon_premium;

protected:
	_x_com_ptr<IWzCanvas> m_pQualityIcon_excellent;

protected:
	_x_com_ptr<IWzCanvas> m_pQualityIcon_special;

protected:
	ZMap<long, long, long> m_mNPTItemException;

protected:
	ZMap<long, ZRef<CItemInfo::COUPLECHAIRITEM>, long> m_mCoupleChairItem;

protected:
	ZList<CItemInfo::SET_EFFECT> m_lSetItemEffect;

protected:
	ZMap<long, int, long> m_mNoScanItem;

protected:
	ZList<ZRef<ITEMNAME>> m_lItemNameforScanner;

protected:
	ZMap<ZXString<char>, ZRef<DamageModifiedInfo>, ZXString<char>> m_mDamageModifiedByUpgrade;

protected:
	ZMap<long, ZRef<ZArray<ZXString<char>>>, long> m_mEquipAffectDamageModifier;

protected:
	ZMap<long, ZXString<char>, long> m_mMonsterAffectDamageModifier;
	// Methods
public:
	virtual ~CItemInfo();

public:
	void _dtor_0();

public:
	CItemInfo(const CItemInfo &arg0);

public:
	void _ctor_1(const CItemInfo &arg0);

public:
	CItemInfo();

public:
	void _ctor_0();

public:
	int32_t IterateItemInfo();

public:
	const CItemInfo::EQUIPITEM *GetEquipItem(long nItemId);

public:
	int32_t IsEquipItem(long nItemId);

public:
	long GetKnockbockProp(long nItemId);

public:
	int32_t IsScannableItem(long nItemID, int32_t IsFromItemIgnore);

public:
	int32_t IsCashItem(GW_ItemSlotBase *pItem);
	int32_t IsCashItem_0(GW_ItemSlotBase *pItem)
	{
		return IsCashItem(pItem->nItemID);
	}

public:
	int32_t IsCashItem(long nItemId);
	int32_t IsCashItem_1(long nItemId)
	{
		return IsCashItem(nItemId);
	}

public:
	int32_t IsMovableToLocker(long nItemId);

public:
	int32_t IsLimitedLifePet(long nItemId);

public:
	int32_t IsQuestItem(long nItemId);

public:
	int32_t IsPartyQuestItem(long nItemId);

public:
	int32_t IsOnlyItem(long nItemId);

public:
	int32_t IsOnlyEquipItem(long nItemId);

public:
	int32_t IsTradeBlockItem(GW_ItemSlotBase *pItem);
	// TODO
	int32_t IsTradeBlockItem_1(GW_ItemSlotBase *pItem)
	{
		return IsTradeBlockItem(pItem->nItemID);
	}

public:
	int32_t IsTradeBlockItem(long nItemId);

	int32_t IsTradeBlockItem_0(long nItemId)
	{
		return IsTradeBlockItem(nItemId);
	}

public:
	int32_t IsNoRollbackItem(long nItemId);

public:
	long GetAppliableKarmaType(long nItemID);

public:
	int32_t IsNotSaleItem(long nItemId);

public:
	int32_t IsNoCancelMouse(long nItemId);

public:
	int32_t IsPickUpBlockItem(long nItemId);

public:
	int32_t IsAccountSharableItem(GW_ItemSlotBase *pItem);
	int32_t IsAccountSharableItem_1(GW_ItemSlotBase *pItem)
	{
		return IsAccountSharableItem(pItem);
	}

public:
	int32_t IsAccountSharableItem(long nItemId);
	int32_t IsAccountSharableItem_0(long nItemId)
	{
		return IsAccountSharableItem(nItemId);
	}

public:
	int32_t IsSharableOnceItem_1(GW_ItemSlotBase *pItem);

public:
	int32_t IsSharableOnceItem_0(long nItemId);

public:
	int32_t ExpireOnLogout(long nItemId);

public:
	int32_t ConsumeOnPickup(long nItemId);

public:
	int32_t OnlyPickup(long nItemId);

public:
	long GetBulletPAD(long nItemID);

public:
	long GetRequiredLEV(long nItemID);

public:
	long GetPortableChairRecoveryRate(long nItemID, int32_t bHP);

public:
	int32_t IsTherePortableChairStatUp(long nItemId);

public:
	int32_t IsBigSizeItem(long nItemId);

public:
	int32_t IsMonsterBookCardItem(long nItemId);

public:
	uint16_t LoadPetSkillChangeInfo(_x_com_ptr<IWzProperty> arg0, int32_t &arg1);

public:
	long GetIncRateByElemAttr(long arg0, long arg1);

public:
	int32_t IsBindedWhenEquiped(long nItemId);

public:
	int32_t IsNotExtendItem(long nItemId);

public:
	int32_t IsGrowthItem(long nItemId);

public:
	int32_t IsEpicItem(long nItemId);

public:
	long GetSetItemID(long arg0);

public:
	long GetMaxLevel(long nItemID);

public:
	ZRef<CItemInfo::LevelInfo> GetLevelInfo(long nItemID, long nLevel);

public:
	ZRef<CItemInfo::LevelInfo::Ability> GetLevelAbilityInfo(long nItemID, long nLevel, long nLevelUpType);

public:
	void LoadItemSkill(_x_com_ptr<IWzProperty> pProp, ZList<ZRef<CItemInfo::ItemSkill>> &lpItemSkill);

public:
	void LoadSkillBonus(_x_com_ptr<IWzProperty> pProp, ZMap<long, long, long> &mSkillLevelBonus);

public:
	ZRef<CItemInfo::Recovery> LoadRecovery(_x_com_ptr<IWzProperty> pProp);

public:
	long GetItemGrade(unsigned char arg0, int32_t arg1);

public:
	long GetItemGradePA();

public:
	void GetItemPotentialOptionPool(long arg0, ZArray<long> &arg1, long *arg2, long arg3);

public:
	void GetItemPotentialOption(long arg0, unsigned char arg1, short &arg2);

public:
	Ztl_bstr_t GetEquipItemUOL(long arg0);

public:
	long CalcEquipItemQuality(ZRef<GW_ItemSlotBase> pItem);

public:
	long CalcMakerSkillDisassembleCost(ZRef<GW_ItemSlotBase> pItem, long nMakeCost);

public:
	long GetExclusiveEquipItemBodyPart(ZRef<GW_ItemSlotBase> *a, long nItemId);

public:
	long GetExclusiveWeaponShieldBodyPart(ZRef<GW_ItemSlotBase> *a, long nItemId);

public:
	long GetExclusiveClothesBodyPart(ZRef<GW_ItemSlotBase> *a, long nItemId);

public:
	int32_t IsAbleToEquip(long nGender, long nLevel, long nJob, short nSubJob, long nSTR, long nDEX, long nINT, long nLUK, long nPOP, ZRef<GW_ItemSlotPet> pPetItem, long nItemID, long CanUseBareHand, ZRef<GW_ItemSlotBase> *aRealEquip);

public:
	ZXString<char> GetItemName(long nItemID);

public:
	ZXString<char> GetItemDesc(long nItemID);

public:
	ZXString<char> GetItemString(long nItemID, const char *sKey);

public:
	ZXString<char> GetMapString(unsigned long dwFieldID, const char *sKey);

public:
	ZXString<char> GetItemTypeName(long nItemID);

public:
	const CItemInfo::BUNDLEITEM *GetBundleItem(long nItemID);

public:
	ZRef<CItemInfo::BUNDLEITEM> GetBundleItemInfoData(long nItemID, _x_com_ptr<IWzProperty> pInfo);

public:
	_x_com_ptr<IWzProperty> GetItemProp(long nItemID);

public:
	_x_com_ptr<IWzProperty> GetItemInfo(long nItemID);

public:
	_x_com_ptr<IWzCanvas> GetItemIcon(long nItemId, int32_t bWithShadow, int32_t bPetDead);

public:
	unsigned long GetItemIconCRC(long nItemID);

public:
	unsigned long GetItemCommonCRC(long nItemID);

public:
	unsigned long GetBundleItemCRC(ZRef<CItemInfo::BUNDLEITEM> p);

public:
	unsigned long GetItemCRC(long nItemID);

public:
	long CheckUseRequirement(long nItemID, unsigned long dwCharacterID);

public:
	ZList<ZPair<unsigned long, ZXString<char>>> FindMapByName(ZXString<char> sMapName);

public:
	const CItemInfo::PETFOODITEM *GetPetFoodItem(long nItemID);

public:
	const CItemInfo::AREABUFFITEM *GetAreaBuffItem(long nItemID);

public:
	const CItemInfo::BRIDLEITEM *GetBridleItem(long nItemID);

public:
	const CItemInfo::KARMASCISSORSITEM *GetKarmaScissorsItem(long nItemID);

public:
	ZXString<char> GetKarmaScissorsName(long karmaType);

public:
	const CItemInfo::LOTTERYITEM *GetLotteryItem(long nItemID);

public:
	const CItemInfo::LOTTERY_ENTITY *GetLotteryEntityUseRandom(long arg0);

public:
	const CItemInfo::EXTENDEXPIREDATEITEM *GetExtendExpireDateItem(long nItemID);

public:
	const CItemInfo::EXPIREDPROTECTINGITEM *GetExpiredProtectingItem(long arg0);

public:
	const CItemInfo::PROTECTONDIEITEM *GetProtectOnDieItem(long arg0);

public:
	ZRef<CItemInfo::EQUIPEXTITEM> GetEquipExtItem(long nItemID);

public:
	_x_com_ptr<IWzProperty> GetSpecialProp(long nItemId);

public:
	long GetSlotIncDelta(long nItemId);

public:
	void GetHalloweenItem(ZList<long> &lHalloweenItem);

public:
	long GetIncLevel(long arg0);

public:
	const ZRef<CItemInfo::QUESTDELIVERYITEM> GetQuestDeliveryItem(long nItemID);

protected:
	void RegisterQuestDeliveryItem(long nItemID, _x_com_ptr<IWzProperty> pItem);

public:
	ZMap<long, ZRef<CItemInfo::SETITEMINFO>, long> &GetSetItemInfo();

protected:
	void RegisterSetItemInfo();

protected:
	ZRef<CItemInfo::EQUIPITEM> RegisterEquipItemInfo(long arg0, const wchar_t *arg1);

protected:
	void IterateItemString_0(_x_com_ptr<IWzProperty> pProp);

protected:
	void IterateItemString_1();

protected:
	void IterateMapString_0(_x_com_ptr<IWzProperty> pProp);

protected:
	void IterateMapString_1();

protected:
	void RegisterPetFoodItem(long nItemID, _x_com_ptr<IWzProperty> pItem);

protected:
	void RegisterBridleItem(long nItemID, _x_com_ptr<IWzProperty> pItem);

protected:
	void RegisterLotteryItem(long arg0, _x_com_ptr<IWzProperty> arg1);

protected:
	void RegisterExtendExpireDateItem(long nItemID, _x_com_ptr<IWzProperty> pItem);

protected:
	void RegisterExpiredProtectingItem(long arg0, _x_com_ptr<IWzProperty> arg1);

protected:
	void RegisterProtectDieItem(long arg0, _x_com_ptr<IWzProperty> arg1);

protected:
	void RegisterKarmaScissorsItem(long nItemID, _x_com_ptr<IWzProperty> pItem);

protected:
	void RegisterSetHalloweenItem();

protected:
	void RegisterAreaBuffItem(long nItemID, _x_com_ptr<IWzProperty> pItem);

protected:
	void RegisterIncLevelItem(long nItemID, _x_com_ptr<IWzProperty> pItem);

protected:
	void RegisterGachaponItemInfo();

public:
	void GetGachaponItemIDByAggID(long nAggID, ZArray<long> &aGachaponItemID);

public:
	void GetGachaponItemTypeByAggType(long nAggID, ZArray<long> &aGachaponItemID);

public:
	ZXString<char> GetGachaponMsg(long nGachponItemID, long nType);

public:
	int32_t IsGachaponNoGradeResult(long nItemId);

public:
	void GetGachaponItemRequireInven(long arg0, unsigned char &arg1, unsigned char &arg2, unsigned char &arg3, unsigned char &arg4);

public:
	int32_t IsBonusGachapon(long nItemId);

public:
	long GetGachaponSucessNpc(long nGachaponItemID);

public:
	int32_t GetItemPrice(long nItemID, long &nPrice, double &dUnitPrice);

public:
	int32_t IsMsgItem(long nItemId);

public:
	void IterateItemNameforScanner_0(_x_com_ptr<IWzProperty> pProp);

public:
	void IterateItemNameforScanner_1();

public:
	void LoadNoScanItem(_x_com_ptr<IWzProperty> pProp);

public:
	int32_t IsNoScanItem(long nItemId);

public:
	int32_t IsNoRevive(long nItemId);

public:
	ZRef<GW_ItemSlotBase> GetItemSlot(long nItemID);

public:
	void DrawGradeFrame(_x_com_ptr<IWzCanvas> pCanvas, GW_ItemSlotEquip *pItem, long left, long top, long right, long bottom);

public:
	void DrawItemIconForSlot(_x_com_ptr<IWzCanvas> pCanvas, long nItemID, long x, long y, int32_t bProtectedItem, int32_t bMag2, int32_t bPetDead, int32_t bHideCashIcon, long nEquipItemQuality, int32_t bHideQualityIcon, long nMagSize);

public:
	_x_com_ptr<IWzCanvas> GetSpecialIcon(long nItemId);

public:
	ZXString<char> GetSpecialName(long nItemId);

public:
	ZXString<char> GetSpecialDesc(long nItemId);

public:
	void DrawSpecialIconForSlot(_x_com_ptr<IWzCanvas> pCanvas, long nItemID, long x, long y, int32_t bMag2, int32_t bHideCashIcon);

public:
	long GetMechanicSetItemEffect(CharacterData &arg0);

public:
	long GetSetItemEffect(long *aAvatarHairEquip, long nWeaponStickerID, long *anPetID);

public:
	void GetSetItemArray(ZArray<long> &aSetItemArray);

public:
	ZList<ZRef<ITEMNAME>> &GetScannerItemName();

public:
	int32_t GetItemIDArrayByName(long nTI, const ZXString<char> &sWord, ZArray<long> &anResult);

public:
	int32_t LoadNPTExceptionItem();

public:
	int32_t IsNPTExceptionItem(long nItemId);

public:
	long GetMaxLEV(long nItemID);

public:
	const CItemInfo::COUPLECHAIRITEM *GetCoupleChairItem(long nItemID);

protected:
	void RegisterSetItemEffect();

protected:
	void IterateCashBundleItem();

protected:
	void IterateBridleItem();

protected:
	void IterateLotteryItem();

protected:
	void IterateExtendExpireDateItem();

public:
	void RegisterCoupleChairItem(long nItemID, _x_com_ptr<IWzProperty> pInfo);

public:
	ZRef<ZArray<ZXString<char>>> GetItemAffectDamageTheme(long nItemID);

public:
	ZRef<DamageModifiedInfo> GetItemAffectDamageInfo(ZXString<char> sDamageTheme);

public:
	ZXString<char> GetMonsterAffectDamageInfo(long nMonsterID);

public:
	static int32_t __cdecl IsDamageModifiedByEquipUpgrade(unsigned long arg0);

public:
	static int32_t __cdecl CheckDamageModifiedByEquipUpgrade(const CharacterData &cd, unsigned long dwMobTemplateID, int32_t bUserAttack, long &nFinalDamage, long nMaxHP);

protected:
	void IterateDamageByEquipUpgrade();

private:
	int32_t GetIntItemProp(int itemId, int spCode, int defaultValue = 0);

public:
	CItemInfo &operator=(const CItemInfo &arg0);

public:
	static CItemInfo &_op_assign_153(CItemInfo *pThis, const CItemInfo &arg0);
};
STATIC_ASSERT_SIZE(CItemInfo, 664);
class CItemOptionInfo : public TSingleton<CItemOptionInfo>
{
	// Nested
	// Fields
protected:
	ZMap<long, ZRef<ItemOptionInfo>, long> m_mItemOption;

protected:
	ZMap<long, ZRef<SocketOptionInfo>, long> m_mSocketOption;
	// Methods
public:
	virtual ~CItemOptionInfo();

public:
	void _dtor_0();

public:
	CItemOptionInfo(const CItemOptionInfo &arg0);

public:
	void _ctor_1(const CItemOptionInfo &arg0);

public:
	CItemOptionInfo();

public:
	void _ctor_0();

public:
	int32_t IterateItemOptionInfo();

public:
	ZRef<ItemOptionInfo> GetItemOption(long nItemOptionID);

public:
	ZRef<SocketOptionInfo> GetSocketOption(long nSocketOptionID);

public:
	int32_t IsValidOptionType(long arg0, long arg1);

protected:
	void IterateItemOption();

protected:
	void IterateSocketOption();

protected:
	ZRef<ItemOptionInfo> LoadItemOption(long nItemOptionID, _x_com_ptr<IWzProperty> pItemOption);

protected:
	ZRef<SocketOptionInfo> LoadSocketOption(long arg0, _x_com_ptr<IWzProperty> arg1);

protected:
	int32_t LoadItemOptionLevelData(long nItemOptionID, ZArray<ItemOptionLevelData> &a, _x_com_ptr<IWzProperty> p);

protected:
	int32_t LoadSocketOptionLevelData(long arg0, ZArray<SocketOptionLevelData> &arg1, _x_com_ptr<IWzProperty> arg2);

public:
	CItemOptionInfo &operator=(const CItemOptionInfo &arg0);

public:
	static CItemOptionInfo &_op_assign_13(CItemOptionInfo *pThis, const CItemOptionInfo &arg0);
};
STATIC_ASSERT_SIZE(CItemOptionInfo, 52);

void __cdecl DownHeap_ZPair_long_long__PairFirstLess_(ZArray<ZPair<long, long>> &a, int32_t nIdx, int32_t nLen, int32_t nFrom, none &comp);
void __cdecl InsertionSort_ZPair_long_long__PairFirstLess_(ZArray<ZPair<long, long>> &a, int32_t nFrom, int32_t nTo, none &comp);
void __cdecl ZSort_ZPair_long_long__PairFirstLess_(ZArray<ZPair<long, long>> &a, __POSITION *posFrom, __POSITION *posTo, none comp);
float __cdecl get_float(Ztl_variant_t &v, float fDefault);
int32_t __cdecl Partition_ZPair_long_long__PairFirstLess_(ZArray<ZPair<long, long>> &a, int32_t nFrom, int32_t nTo, const ZPair<long, long> &pivot, none &comp);
void __cdecl InsertionSort_ZPair_long_long__PairSecondLess_(ZArray<ZPair<long, long>> &a, int32_t nFrom, int32_t nTo, none &comp);
int32_t __cdecl GETCRC32_long_long_(const long &a);
_x_com_ptr<IWzNameSpace> &__cdecl get_root();
void __cdecl ZSort_ZPair_long_long__PairSecondLess_(ZArray<ZPair<long, long>> &a, none comp);
void __cdecl ZSort_ZPair_long_long__PairSecondLess_(ZArray<ZPair<long, long>> &a, __POSITION *posFrom, __POSITION *posTo, none comp);
ZXString<char> __cdecl get_weapon_category_name(long nItemID);
void __cdecl DownHeap_ZPair_long_long__PairSecondLess_(ZArray<ZPair<long, long>> &a, int32_t nIdx, int32_t nLen, int32_t nFrom, none &comp);
ZXString16 __cdecl get_weekly_data_path(long nItemID, uint16_t wDayOfWeek);
uint32_t __fastcall _ZtlSecureTear_int_(int32_t arg0, int32_t *arg1);
int32_t __cdecl Partition_ZPair_long_long__PairSecondLess_(ZArray<ZPair<long, long>> &a, int32_t nFrom, int32_t nTo, const ZPair<long, long> &pivot, none &comp);
ZXString16 __cdecl get_equip_data_path(long nItemID);
void __cdecl ZSort_ZPair_long_long__PairFirstLess_(ZArray<ZPair<long, long>> &a, none comp);
