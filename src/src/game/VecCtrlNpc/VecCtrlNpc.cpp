// VecCtrlNpc.cpp
#include "VecCtrlNpc.hpp"
#include "VecCtrlNpc_regen.ipp"

CVecCtrlNpc::~CVecCtrlNpc()
{
}

void CVecCtrlNpc::_dtor_0()
{
    return __sub_0059DD60(this, nullptr);
}

CVecCtrlNpc::CVecCtrlNpc(const CVecCtrlNpc& arg0)
{
    _ctor_1(arg0);
}

void CVecCtrlNpc::_ctor_1(const CVecCtrlNpc& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CVecCtrlNpc::CVecCtrlNpc()
{
}

void CVecCtrlNpc::_ctor_0()
{
    return __sub_0059DD40(this, nullptr);
}

void CVecCtrlNpc::Init(IVecCtrlOwner* pOwner, long nMoveAbility, RANGE* prgHorz)
{
    // __sub_0059DD80(this, nullptr, pOwner, nMoveAbility, prgHorz);
    CVecCtrl::Init(pOwner);
    m_bMove = nMoveAbility == 1;
    m_rcBound.left = prgHorz->low;
    m_rcBound.right = prgHorz->high;

}

void CVecCtrlNpc::SetActive(int32_t bActive, long x, long y, long vx, long vy, long nMoveAction, CStaticFoothold* pfh)
{
    //__sub_0059DDC0(this, nullptr, bActive, x, y, vx, vy, nMoveAction, pfh);
    CVecCtrl::SetActive(bActive, x, y, vx, vy, nMoveAction, pfh);
    m_moveCtx.lInputX = 0;
    m_moveCtx.nCount = 0;
    m_tUpdateActiveAccumulated = 0;
}

void CVecCtrlNpc::UpdateActiveInterrupted(long rpl, long tSlice)
{
    __sub_0059E020(this, nullptr, rpl, tSlice);
}

CVecCtrlNpc* __cdecl CVecCtrlNpc::CreateInstance()
{
    //return __sub_0059DE70();
    return new CVecCtrlNpc();
}

long CVecCtrlNpc::BeginUpdateActive()
{
    return __sub_0059DE10(this, nullptr);
}

int32_t CVecCtrlNpc::WorkUpdateActive(long tElapse)
{
    return __sub_0059DEF0(this, nullptr, tElapse);
}

void CVecCtrlNpc::ClearMoveContext()
{
    __sub_0059DD60(this, nullptr);
}

CVecCtrlNpc& CVecCtrlNpc::operator=(const CVecCtrlNpc& arg0)
{
    return _op_assign_10(this, arg0);
}

CVecCtrlNpc& CVecCtrlNpc::_op_assign_10(CVecCtrlNpc* pThis, const CVecCtrlNpc& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
