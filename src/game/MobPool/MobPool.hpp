// MobPool.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Mob/Mob.hpp"
#include "Life/Life.hpp"
#include "Packet/Packet.hpp"

// Level: 1 0xc146
class CMobPool;

class CMobPool : public TSingleton<CMobPool>
{
	// Nested
	// Fields
protected:
	ZMap<unsigned long, __POSITION *, unsigned long> m_mMob;

protected:
	ZList<ZRef<CMob>> m_lMob;

protected:
	ZList<ZRef<CMob>> m_lMobDelayedDead;

protected:
	ZList<ZRef<CMob>> m_lMobDeadProcess;

protected:
	ZRef<CMob> m_pMobDamagedByMob;

protected:
	long m_tLastHitMobDamagedByMob{};

protected:
	ZRef<CMob> m_pGuidedMob;

protected:
	unsigned long m_dwMobCrcKey{};
	// Methods
public:
	virtual ~CMobPool();

public:
	void _dtor_0();

public:
	CMobPool(const CMobPool &arg0);

public:
	void _ctor_1(const CMobPool &arg0);

public:
	CMobPool();

public:
	void _ctor_0();

public:
	long FindHitMobInRect(const tagRECT &rc, CMob **apMob, long nMaxCount, CMob *pExcept, long nWishMobID, long rPoison, unsigned long dwWishTemplateID, int32_t bIncludeDazzledMob, int32_t bIncludeEscortMob);

public:
	long FindHitMobInManyRects(const ZArray<tagRECT> &arc, CMob **apMob, unsigned long *adwDropFlag, long nMaxCount, long &nMaxAttackCount);

public:
	long FindHitUndeadMobInRect(const tagRECT &rc, CMob **apMob, long nMaxCount);

public:
	long FindHitMobByChainlightning(CMob *nCount, CMob **apMobNear, long nMobCount, int32_t pt, long rc);

public:
	long FindHitMobInTrapezoid_Plural(long pos1, long pMob, long nInsertIndex, long nSquareDistance, long pos2, ZArray<ZRef<CMob>> &arg5, long arg6, int32_t arg7);

public:
	long FindHitMobInTriangle(ZRef<Triangle> pTriangle, CMob **apMob, long nMaxCount, int32_t bIncludeDazzledMob, int32_t bIncludeEscortMob);

public:
	long FindHitDazzledMobInRect(const tagRECT &rc, CMob **apMob, long nMaxCount);

public:
	CMob *FindHitMobInTrapezoid(long x0, long x1, long x2, long y, long r, int32_t bGuidedMob);

public:
	CMob *FindBodyAttackMob(const tagRECT &rc, int32_t bUserIsDarkSight);

public:
	CMob *FindNearestMob(tagPOINT pt, int32_t bDazzled);

public:
	CMob *FindMob(tagPOINT pt);

public:
	CMob *FindBossMob();

public:
	int32_t CheckMobInTrapezoid(long x0, long x1, long x2, long y, long r, CMob *pMob);

public:
	CMob *GetMob(unsigned long dwMobID);

public:
	CMob *GetMobDamagedByMob();

public:
	long GetTimeLastHitMobDamagedByMob();

public:
	void SetTimeLastHitMobDamagedByMob(long arg0);

public:
	void ResetGuidedMob(long nSkillID, unsigned long dwGuidedMobID);

public:
	void Update();

public:
	void OnPacket(long nType, CInPacket &iPacket);

public:
	void LetMobChasePuppet(int32_t bChase, IVecCtrlOwner *pTarget);

public:
	void CancelChaseTarget(CMob *pTarget);

public:
	unsigned long GetMobCrcKey();

protected:
	void OnMobPacket(long nType, CInPacket &iPacket);

protected:
	void OnMobEnterField(CInPacket &iPacket);

protected:
	void OnMobLeaveField(CInPacket &pkt);

protected:
	void OnMobChangeController(CInPacket &iPacket);

protected:
	void OnMobCrcKeyChanged(CInPacket &iPacket);

protected:
	void SetLocalMob(long nLevel, unsigned long dwMobId, long nCalcDamageIndex, CInPacket &iPacket);

protected:
	void SetRemoteMob(unsigned long dwMobId);

protected:
	void RemoveAllMob();

public:
	CMobPool &operator=(const CMobPool &arg0);

public:
	static CMobPool &_op_assign_34(CMobPool *pThis, const CMobPool &arg0);
};
STATIC_ASSERT_SIZE(CMobPool, 112);

int32_t __cdecl in_triangle_1(tagPOINT &p, ZRef<Triangle> pTriangle);
int32_t __cdecl in_triangle_0(struct tagPOINT *p, struct tagPOINT *a, struct tagPOINT *b, struct tagPOINT *c);
