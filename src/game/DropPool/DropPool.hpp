// DropPool.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "WvsPhysicalSpace2D/WvsPhysicalSpace2D.hpp"
#include "Packet/Packet.hpp"
#include "Pet/Pet.hpp"
#include "Mob/Mob.hpp"

// Level: 0 0xb42d
struct DROP;
// Level: 1 0xb34d
class CDropPool;

struct DROP
{
    // Nested
    // Fields
public:
    SECPOINT pt1;

public:
    __POSITION* posList{};

public:
    unsigned char nEnterType{};

public:
    unsigned char bReal{};

public:
    unsigned long dwId{};

public:
    unsigned long dwOwnerID{};

public:
    unsigned long dwSourceID{};

public:
    long nOwnType{};

public:
    int32_t bIsMoney{};

public:
    long nInfo{};

public:
    _x_com_ptr<IWzGr2DLayer> pLayer;

public:
    _x_com_ptr<IWzVector2D> pvec;

public:
    long tCreateTime{};

public:
    long tLeaveTime{};

public:
    long nState{};

public:
    long tTickTime{};

public:
    long tEndParabolicMotion{};

public:
    long tLastTryPickUp{};

public:
    unsigned long dwPickupID{};

public:
    double fAngle{};

public:
    SECPOINT pt2;

public:
    _FILETIME m_dateExpire{};

public:
    int32_t bByPet{};
    // Methods
public:
    ~DROP();

public:
    void _dtor_0();

public:
    DROP(const DROP& arg0);

public:
    void _ctor_1(const DROP& arg0);

public:
    DROP();

public:
    void _ctor_0();

public:
    DROP& operator=(const DROP& arg0);

public:
    static DROP& _op_assign_3(DROP* pThis, const DROP& arg0);
};

STATIC_ASSERT_SIZE(DROP, 144);

class CDropPool : public TSingleton<CDropPool>
{
    // Nested
    // Fields
protected:
    long m_tLastExplodeSound{};

protected:
    ZMap<unsigned long, ZRef<DROP>, unsigned long> m_mDrop;

protected:
    ZList<ZRef<DROP>> m_lDrop;

protected:
    ZMap<unsigned long, tagPOINT, unsigned long> m_mDropPt;

protected:
    _x_com_ptr<IWzProperty> m_pPropMoneyIcon;

protected:
    const CAttrField* m_pAttrField{};

protected:
    ZList<tagPOINT> m_lpRecentPickupedItem;

protected:
    int32_t m_bRecentPickupedItemCheck{};
    // Methods
public:
    virtual ~CDropPool();

public:
    void _dtor_0();

public:
    CDropPool(const CDropPool& arg0);

public:
    void _ctor_1(const CDropPool& arg0);

public:
    CDropPool();

public:
    void _ctor_0();

public:
    void Update(long tCur);

public:
    long IsThereDropNear(const tagPOINT& arg0, const tagPOINT& arg1, uint16_t arg2, CPet* arg3);

public:
    void TryPickUpDrop(const tagPOINT& pt);

public:
    void TryPickUpDropByMob(CMob* pMob, const tagPOINT& pt);

public:
    void TryPickUpDropByPet(CPet* pPet, const tagPOINT& ptPos, const SECPOINT& ptPosCheck);

public:
    void OnPacket(long nType, CInPacket& iPacket);

public:
    void GetExplosiveDropInRect(const tagRECT& rc, ZArray<DROP*>& aDrop, long nMaxCount);

public:
    void SetFieldAttr(const CAttrField* arg0);

public:
    void RecordRecentPickupItem(unsigned long dwItemID);

public:
    void BoobyTrapCheckPickupItem(const tagPOINT& pt);

protected:
    void OnDropEnterField(CInPacket& iPacket);

protected:
    void OnDropLeaveField(CInPacket& iPacket);

protected:
    void UpdateChasingDropForPet();

protected:
    int32_t IsInExceptionList(long nItemID);

protected:
    void Add(ZRef<DROP> pr);

protected:
    void Remove(ZRef<DROP> pr);

protected:
    long GetMoneyIconType(long nMoney);

protected:
    _x_com_ptr<IWzCanvas> GetMoneyIcon(long nMoney, long nCanvasNo);

protected:
    void MakeMoneyAnimation(ZRef<DROP> pr);

public:
    CDropPool& operator=(const CDropPool& arg0);

public:
    static CDropPool& _op_assign_22(CDropPool* pThis, const CDropPool& arg0);
};

STATIC_ASSERT_SIZE(CDropPool, 108);


long __cdecl tolong(double d);
