// ItemMakerInfo.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"
#include "Quest/Quest.hpp"



struct GEM_EFFECT_INFO {
// Nested
// Fields
	public:  long nOption{};
	public:  long nNum{};
// Methods
};
STATIC_ASSERT_SIZE(GEM_EFFECT_INFO, 8);


struct MONSTER_CRYSTAL_LEVEL
{
    // Nested
    // Fields
public:
    long nLvMin{};

public:
    long nLvMax{};

public:
    long nItem{};
    // Methods
public:
	MONSTER_CRYSTAL_LEVEL() = default;

    MONSTER_CRYSTAL_LEVEL(long arg0, long arg1, long arg2)
    {
        this->nLvMin = arg0;
        this->nLvMax = arg1;
        this->nItem = arg2;
    }
};
STATIC_ASSERT_SIZE(MONSTER_CRYSTAL_LEVEL, 12);

struct RECIPE_INFO
{
	// Nested
	// Fields
public:
	long nItem{};

public:
	long nCount{};
	// Methods
public:
	RECIPE_INFO() = default;
	RECIPE_INFO(long arg0, long arg1) {
		nItem = arg0;
		nCount = arg1;
	}
};
STATIC_ASSERT_SIZE(RECIPE_INFO, 8);

struct RANDOM_REWARD_INFO
{
	// Nested
	// Fields
public:
	long nItem{};

public:
	long nItemNum{};

public:
	long nProb{};
	// Methods
public:
	RANDOM_REWARD_INFO() = default;
	RANDOM_REWARD_INFO(long arg0, long arg1, long arg2)
	{
		nItem = arg0;
		nItemNum = arg1;
		nProb = arg2;
	}
};
STATIC_ASSERT_SIZE(RANDOM_REWARD_INFO, 12);

// Level: 0 0x1111d
struct ITEM_MAKE_INFO;
// Level: 1 0x1301a
class CItemMakerInfo;

struct ITEM_MAKE_INFO
{
	// Nested
	// Fields
public:
	int32_t bHide{};

public:
	long nItemNum{};

public:
	long nReqLevel{};

public:
	long nReqSkillLevel{};

public:
	long nReqItem{};

public:
	long nReqEquip{};

public:
	long nTuc{};

public:
	long nCatalyst{};

public:
	long nMeso{};

public:
	ZList<QUEST_CONDITION> lQuestCondition;

public:
	ZList<RECIPE_INFO> lRecipe;

public:
	ZList<RANDOM_REWARD_INFO> lRandomReward;
	// Methods
public:
	~ITEM_MAKE_INFO();

public:
	void _dtor_0();

public:
	ITEM_MAKE_INFO(const ITEM_MAKE_INFO &arg0);

public:
	void _ctor_1( const ITEM_MAKE_INFO &arg0);

public:
	ITEM_MAKE_INFO();

public:
	void _ctor_0();

public:
	ITEM_MAKE_INFO &operator=(const ITEM_MAKE_INFO &arg0);

public:
	static ITEM_MAKE_INFO &_op_assign_3(ITEM_MAKE_INFO *pThis, const ITEM_MAKE_INFO &arg0);
};
STATIC_ASSERT_SIZE(ITEM_MAKE_INFO, 96);
class CItemMakerInfo : public TSingleton<CItemMakerInfo>
{
	// Nested
	// Fields
private:
	ZMap<long, ZRef<ITEM_MAKE_INFO>, long> m_mItem_MakeInfo;

private:
	ZMap<long, ZList<long>, long> m_mJob_ItemList;

private:
	ZMap<long, ZList<long>, long> m_mJob_ItemList_Hidden;

private:
	ZMap<long, GEM_EFFECT_INFO, long> m_mGem_Effect;

private:
	ZList<MONSTER_CRYSTAL_LEVEL> m_lMonsterCrystalLevel;

private:
	ZMap<long, long, long> m_mMonsterTrophyLevel;
	// Methods
public:
	~CItemMakerInfo();

public:
	void _dtor_0();

public:
	CItemMakerInfo(const CItemMakerInfo &arg0);

public:
	void _ctor_1( const CItemMakerInfo &arg0);

public:
	CItemMakerInfo();

public:
	void _ctor_0();

public:
	int32_t Load();

public:
	int32_t Load_ItemMakeInfo();

public:
	int32_t Load_GemEffect();

public:
	int32_t Load_MonsterCrystalLevel();

public:
	int32_t Load_MonsterTrophy();

public:
	void Unload();

public:
	ZRef<ITEM_MAKE_INFO> GetItemMakeInfo(long nTargetItem);

public:
	int32_t GetMakableItemList(long nJob, ZList<long> &lMakableItem);

public:
	int32_t GetMakableItemList_Hidden(long nJob, ZList<long> &lMakableItem);

public:
	int32_t GetGemEffect(long arg0, GEM_EFFECT_INFO &arg1);

public:
	long GetMonsterCrystal(long arg0);

public:
	int32_t GetMonsterTrophyLevel(long nMonsterTrophy, long &nLevel);

private:
	int32_t RegisterTargetItem(long arg0, long arg1, _x_com_ptr<IWzProperty> arg2);

private:
	void RegisterGemEffect(long nGem, _x_com_ptr<IWzProperty> pInfo);

public:
	CItemMakerInfo &operator=(const CItemMakerInfo &arg0);

public:
	static CItemMakerInfo &_op_assign_17(CItemMakerInfo *pThis, const CItemMakerInfo &arg0);
};
STATIC_ASSERT_SIZE(CItemMakerInfo, 140);
