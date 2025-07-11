// ReactorPool.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "ReactorTemplate/ReactorTemplate.hpp"
#include "Packet/Packet.hpp"

// Level: 0 0x10b40
struct REACTOR;
// Level: 1 0x10a1d
class CReactorPool;

struct REACTOR
{
    // Nested
    // Fields
public:
    unsigned long dwID{};

public:
    unsigned long dwTemplateID{};

public:
    CReactorTemplate* pTemplate;

public:
    long nOldState{};

public:
    long nState{};

public:
    tagPOINT ptPos{};

public:
    tagPOINT ptPosPrev{};

public:
    long nProperEventIdx{};

public:
    long tHitStart{};

public:
    long tStateEnd{};

public:
    long nAniState{};

public:
    unsigned long dwHitOption{};

public:
    _x_com_ptr<IWzGr2DLayer> pLayer;

public:
    _x_com_ptr<IWzVector2D> pVec;

public:
    int32_t bFlip{};

public:
    ZXString<char> sName;

public:
    __POSITION* posList;
    // Methods
public:
    ~REACTOR();

public:
    void _dtor_0();

public:
    REACTOR(const REACTOR& arg0);

public:
    void _ctor_1(const REACTOR& arg0);

public:
    REACTOR();

public:
    void _ctor_0();

public:
    REACTOR& operator=(const REACTOR& arg0);

public:
    static REACTOR& _op_assign_3(REACTOR* pThis, const REACTOR& arg0);
};

STATIC_ASSERT_SIZE(REACTOR, 76);

class CReactorPool : public TSingleton<CReactorPool>
{
    // Nested
    // Fields
protected:
    ZMap<long, ZRef<REACTOR>, long> m_mReactor;

protected:
    ZList<ZRef<REACTOR>> m_lReactor;

protected:
    ZMap<ZXString<char>, ZRef<REACTOR>, ZXString<char>> m_mReactorName;
    // Methods
public:
    ~CReactorPool();

public:
    void _dtor_0();

public:
    CReactorPool(const CReactorPool& arg0);

public:
    void _ctor_1(const CReactorPool& arg0);

public:
    CReactorPool();

public:
    void _ctor_0();

public:
    void Update(long tCur);

public:
    void LoadReactorLayer(ZRef<REACTOR> p);

public:
    void OnPacket(long nType, CInPacket& iPacket);

public:
    void OnReactorChangeState(CInPacket& iPacket);

public:
    void OnReactorEnterField(CInPacket& iPacket);

public:
    void OnReactorLeaveField(CInPacket& iPacket);

public:
    void OnReactorMove(CInPacket& iPacket);

public:
    int32_t FindHitReactor();

public:
    void FindSkillReactor(long nSkillID);

public:
    void FindTouchReactorAroundLocalUser(ZMap<long, long, long>& m_reactorOnLocalUser);

public:
    long GetState(ZXString<char> arg0);

public:
    long GetAniState(ZXString<char> arg0);

public:
    int32_t GetStates(ZXString<char> sName, long* pState, long* pAniState);

protected:
    void AddReactor(ZRef<REACTOR> p);

protected:
    void RemoveReactor(ZRef<REACTOR> p);

public:
    CReactorPool& operator=(const CReactorPool& arg0);

public:
    static CReactorPool& _op_assign_18(CReactorPool* pThis, const CReactorPool& arg0);
};

STATIC_ASSERT_SIZE(CReactorPool, 68);


long __cdecl get_hittype_priority_level(unsigned long dwOption, long nType);
