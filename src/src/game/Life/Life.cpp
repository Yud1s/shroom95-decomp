// Life.cpp
#include "Life.hpp"
#include "Life_regen.ipp"

IVecCtrlOwner::IVecCtrlOwner(const IVecCtrlOwner& arg0)
{
    _ctor_0(arg0);
}

void IVecCtrlOwner::_ctor_0(const IVecCtrlOwner& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

IVecCtrlOwner::IVecCtrlOwner()
{
}

void IVecCtrlOwner::_ctor_1()
{
    new(this) IVecCtrlOwner();
}

long IVecCtrlOwner::GetType()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long IVecCtrlOwner::OnResolveMoveAction(long arg0, long arg1, long arg2, const CVecCtrl* arg3)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void IVecCtrlOwner::OnLayerZChanged(const CVecCtrl* arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const ZRef<CAttrShoe> IVecCtrlOwner::GetShoeAttr()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const tagPOINT IVecCtrlOwner::GetPos()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

const tagPOINT IVecCtrlOwner::GetPosPrev()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long IVecCtrlOwner::GetZMass()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

IVecCtrlOwner& IVecCtrlOwner::operator=(const IVecCtrlOwner& arg0)
{
    return _op_assign_12(this, arg0);
}

IVecCtrlOwner& IVecCtrlOwner::_op_assign_12(IVecCtrlOwner* pThis, const IVecCtrlOwner& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CLife::~CLife()
{
}

void CLife::_dtor_0()
{
    return __sub_001CF430(this, nullptr);
}

CLife::CLife(const CLife& arg0)
{
    _ctor_1(arg0);
}

void CLife::_ctor_1(const CLife& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CLife::CLife()
{
}

void CLife::_ctor_0()
{
    new(this) CLife();
    //return __sub_001CF500(this, nullptr);
}

long CLife::MakeNameTag(const char* sName, _x_com_ptr<IWzGr2DLayer> pOverlay, _x_com_ptr<IWzVector2D> pvc, long nType,
                        long nIdx, uint16_t nGuildMarkBg, unsigned char nGuildMarkBgColor, uint16_t nGuildMark,
                        unsigned char nGuildMarkColor)
{
    return __sub_001CF5E0(this, nullptr, sName, CreateNakedParam(pOverlay), CreateNakedParam(pvc), nType, nIdx,
                          nGuildMarkBg, nGuildMarkBgColor, nGuildMark, nGuildMarkColor);
}

void CLife::ShowNameTag(int32_t bShow)
{
    //__sub_001CF3E0(this, nullptr, bShow);
    auto color = bShow ? 0xFFFFFFFF : 0;
    for (auto& nameTag : m_pLayerNameTag)
    {
        if (nameTag)
        {
            nameTag->Putcolor(color);
        }
    }
}

CLife& CLife::operator=(const CLife& arg0)
{
    return _op_assign_8(this, arg0);
}

CLife& CLife::_op_assign_8(CLife* pThis, const CLife& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
