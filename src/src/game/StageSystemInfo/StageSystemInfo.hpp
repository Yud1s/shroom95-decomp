// StageSystemInfo.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

// Level: 1 0x2044c
struct StageBackImg;
// Level: 1 0xfa04
struct StageTheme;
// Level: 1 0xf436
class CStageSystem;
// Level: 1 0xf9b0
struct StagePeriodInfo;
// Level: 1 0xfa58
struct StageUnitEnable;

struct StageBackImg : public ZRefCounted
{
	// Nested
public:
	struct StageBackObj
	{
		// Nested
		// Fields
	public:
		tagPOINT pt{};

	public:
		long nAbsRX{};

	public:
		long nAbsRY{};
		// Methods
	};
	// Fields
public:
	_x_com_ptr<IWzProperty> pBackImgInfo;

public:
	ZMap<ZXString<char>, ZRef<ZMap<long, StageBackImg::StageBackObj, long>>, ZXString<char>> mBack;

public:
	ZMap<ZXString<char>, ZRef<ZMap<long, StageBackImg::StageBackObj, long>>, ZXString<char>> mFront;
	// Methods
public:
	virtual ~StageBackImg();

public:
	void _dtor_0();

public:
	StageBackImg(const StageBackImg &arg0);

public:
	void _ctor_1(const StageBackImg &arg0);

public:
	StageBackImg();

public:
	void _ctor_0();

public:
	StageBackImg &operator=(const StageBackImg &arg0);

public:
	static StageBackImg &_op_assign_3(StageBackImg *pThis, const StageBackImg &arg0);
};
STATIC_ASSERT_SIZE(StageBackImg, 64);
struct StageTheme : public ZRefCounted
{
	// Nested
	// Fields
public:
	ZArray<ZXString<char>> aKeyword;

public:
	ZMap<long, ZRef<StagePeriodInfo>, long> mStagePeriodInfo;
	// Methods
public:
	virtual ~StageTheme();

public:
	void _dtor_0();

public:
	StageTheme(const StageTheme &arg0);

public:
	void _ctor_1(const StageTheme &arg0);

public:
	StageTheme();

public:
	void _ctor_0();

public:
	StageTheme &operator=(const StageTheme &arg0);

public:
	static StageTheme &_op_assign_3(StageTheme *pThis, const StageTheme &arg0);
};
STATIC_ASSERT_SIZE(StageTheme, 40);
class CStageSystem : public TSingleton<CStageSystem>
{
	// Nested
	// Fields
public:
	ZFatalSection m_lock;

private:
	ZMap<ZXString<char>, ZRef<StageTheme>, ZXString<char>> m_mStageThemeMap;

private:
	ZMap<ZXString<char>, long, ZXString<char>> m_mStagePeriodCache;

private:
	ZMap<ZXString<char>, ZRef<StageUnitEnable>, ZXString<char>> m_mStageKeywordCache;

private:
	ZMap<long, ZRef<StageUnitEnable>, long> m_mStageQuestCache;

private:
	unsigned long m_ulBackColor{};

private:
	ZArray<ZRef<StageBackImg>> *m_aCurStageBackImg;
	// Methods
public:
	virtual ~CStageSystem();

public:
	void _dtor_0();

public:
	CStageSystem(const CStageSystem &arg0);

public:
	void _ctor_1(const CStageSystem &arg0);

public:
	CStageSystem();

public:
	void _ctor_0();

	CTOR_DEFAULT(CStageSystem)

public:
	int32_t IterateStageSystem();

public:
	int32_t CleanUp();

public:
	int32_t SetStagePeriod(ZXString<char> sStageTheme, long nStagePeriod, int32_t &bErrorOccur);

public:
	ZMap<ZXString<char>, long, ZXString<char>> &GetStagePeriodCache();

private:
	void CleanStage(ZXString<char> sStageTheme, long nStagePeriod);

private:
	int32_t BuildCacheData(ZXString<char> sStageTheme, long nStagePeriod, int32_t bReload);

private:
	int32_t IterateStageSystemClient();

public:
	int32_t CheckKeywordEnable(ZXString<char> sKeyword, int32_t &bEnable);

public:
	int32_t CheckQuestEnable(long nQuestID, int32_t &bEnable);

public:
	unsigned long GetBackColor();

public:
	long GetBackImgCount();

public:
	int32_t GetBackImgIdxList(_x_com_ptr<IWzProperty> arg0, ZArray<ZPair<long, _x_com_ptr<IWzProperty>>> &arg1, ZArray<tagPOINT> &arg2, ZArray<tagPOINT> &arg3);

public:
	void BuildFileTime(long arg0, long arg1, _FILETIME *arg2);

public:
	void GetDateTimeFromFileTime(long &arg0, long &arg1, _FILETIME *arg2);

public:
	ZXString<char> GetCurrentStagePeriod(ZXString<char> arg0);

public:
	CStageSystem &operator=(const CStageSystem &arg0);

public:
	static CStageSystem &_op_assign_18(CStageSystem *pThis, const CStageSystem &arg0);
};
STATIC_ASSERT_SIZE(CStageSystem, 116);
struct StagePeriodInfo : public ZRefCounted
{
	// Nested
	// Fields
public:
	ZArray<ZXString<char>> aKeyword;

public:
	ZArray<long> aEnabledQuest;

public:
	ZArray<ZRef<StageBackImg>> aStageBackImg;

public:
	unsigned long ulBackColor{};
	// Methods
public:
	virtual ~StagePeriodInfo();

public:
	void _dtor_0();

public:
	StagePeriodInfo(const StagePeriodInfo &arg0);

public:
	void _ctor_1(const StagePeriodInfo &arg0);

public:
	StagePeriodInfo();

public:
	void _ctor_0();

public:
	StagePeriodInfo &operator=(const StagePeriodInfo &arg0);

public:
	static StagePeriodInfo &_op_assign_3(StagePeriodInfo *pThis, const StagePeriodInfo &arg0);
};
STATIC_ASSERT_SIZE(StagePeriodInfo, 28);
struct StageUnitEnable : public ZRefCounted
{
	// Nested
	// Fields
public:
	int32_t bEnable{};

public:
	ZXString<char> sStageTheme;
	// Methods
public:
	virtual ~StageUnitEnable();

public:
	void _dtor_0();

public:
	StageUnitEnable(const StageUnitEnable &arg0);

public:
	void _ctor_1(const StageUnitEnable &arg0);

public:
	StageUnitEnable();

public:
	void _ctor_0();

public:
	StageUnitEnable &operator=(const StageUnitEnable &arg0);

public:
	static StageUnitEnable &_op_assign_3(StageUnitEnable *pThis, const StageUnitEnable &arg0);
};
STATIC_ASSERT_SIZE(StageUnitEnable, 20);

void __cdecl LoadStageBackImgInfo(_x_com_ptr<IWzProperty> pProp, ZMap<ZXString<char>, ZRef<ZMap<long, StageBackImg::StageBackObj, long>>, ZXString<char>> &SBIL);
