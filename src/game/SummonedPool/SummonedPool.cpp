// SummonedPool.cpp
#include "SummonedPool.hpp"

static ZRef<CSummoned> FAKE_ZRef_CSummoned{};
static ZRef<ZList<ZRef<CSummoned>>> FAKE_ZRef_ZList_ZRef_CSummoned{};

#include "SummonedPool_regen.ipp"

CSummonedPool::~CSummonedPool()
{
    ms_pInstance = nullptr;
}

void CSummonedPool::_dtor_0()
{
    return __sub_0035A2B0(this, nullptr);
}

CSummonedPool::CSummonedPool(const CSummonedPool& arg0)
{
    _ctor_1(arg0);
}

void CSummonedPool::_ctor_1(const CSummonedPool& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CSummonedPool::CSummonedPool()
{
    ms_pInstance = this;
}

void CSummonedPool::_ctor_0()
{
    return __sub_0035A270(this, nullptr);
}

void CSummonedPool::Update(long tCur)
{
    __sub_0035A310(this, nullptr, tCur);
}

void CSummonedPool::OnPacket(long nType, CInPacket& iPacket)
{
    __sub_0035AC70(this, nullptr, nType, iPacket);
}

void CSummonedPool::OnCreated(unsigned long dwCharacterID, CInPacket& iPacket)
{
    __sub_0035A9A0(this, nullptr, dwCharacterID, iPacket);
}

void CSummonedPool::OnRemoved(unsigned long dwSummonedID, CInPacket& pSummonedList)
{
    __sub_0035A470(this, nullptr, dwSummonedID, pSummonedList);
}

void CSummonedPool::OnMove(unsigned long dwCharacterID, CInPacket& iPacket)
{
    __sub_00359830(this, nullptr, dwCharacterID, iPacket);
}

void CSummonedPool::OnAttack(unsigned long dwCharacterID, CInPacket& iPacket)
{
    __sub_00359860(this, nullptr, dwCharacterID, iPacket);
}

void CSummonedPool::OnSkill(unsigned long dwCharacterID, CInPacket& iPacket)
{
    __sub_00359890(this, nullptr, dwCharacterID, iPacket);
}

void CSummonedPool::OnHit(unsigned long dwCharacterID, CInPacket& iPacket)
{
    __sub_003598C0(this, nullptr, dwCharacterID, iPacket);
}

CSummonedPool& CSummonedPool::operator=(const CSummonedPool& arg0)
{
    return _op_assign_11(this, arg0);
}

CSummonedPool& CSummonedPool::_op_assign_11(CSummonedPool* pThis, const CSummonedPool& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
