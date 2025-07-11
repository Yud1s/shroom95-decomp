// ItemEffect.cpp
#include "ItemEffect.hpp"

#include "additional.hpp"

static Additional::TCond<Additional::SKILL> FAKE_Additional_TCondAdditionalSKILL_{};

#include "ItemEffect_regen.ipp"

CItemEffectManager::~CItemEffectManager()
{
}

void CItemEffectManager::_dtor_0()
{
    return __sub_004EAFF0(this, nullptr);
}

CItemEffectManager::CItemEffectManager(const CItemEffectManager& arg0)
{
    _ctor_1(arg0);
}

void CItemEffectManager::_ctor_1(const CItemEffectManager& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CItemEffectManager::CItemEffectManager()
{
}

void CItemEffectManager::_ctor_0()
{
    new(this) CItemEffectManager();
    //return __sub_0018F8F0(this, nullptr);
}

void CItemEffectManager::Init(_x_com_ptr<IWzVector2D> pFaceOrigin, _x_com_ptr<IWzVector2D> pBodyOrigin,
                              _x_com_ptr<IWzGr2DLayer> pLayerUnderFace)
{
    __sub_0018F030(this, nullptr, CreateNakedParam(pFaceOrigin), CreateNakedParam(pBodyOrigin),
                   CreateNakedParam(pLayerUnderFace));
}

void CItemEffectManager::UpdateFlip(int32_t bFlip)
{
    //__sub_0018EEB0(this, nullptr, bFlip);
    for (auto& eff: m_aItemEffects)
    {
        if (eff)
            eff->OnFlip(bFlip);
    }
}

void CItemEffectManager::ChangeAction(long nAction)
{
    __sub_0018EEF0(this, nullptr, nAction);
}

void CItemEffectManager::UpdateEffects(const long* anHairEquip)
{
    __sub_00190A20(this, nullptr, anHairEquip);
}

ZRef<IItemEffect> CItemEffectManager::LoadItemEffect(long arg0, long arg1)
{
    ZRef<IItemEffect> ret;
    return *__sub_0018F950(this, nullptr, &ret, arg0, arg1);
}

CItemEffectManager& CItemEffectManager::operator=(const CItemEffectManager& arg0)
{
    return _op_assign_8(this, arg0);
}

CItemEffectManager& CItemEffectManager::_op_assign_8(CItemEffectManager* pThis, const CItemEffectManager& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

IItemEffect::~IItemEffect()
{
    UNIMPLEMENTED; // _dtor_0();
}

void IItemEffect::_dtor_0()
{
    return __sub_0018EE50(this, nullptr);
}

IItemEffect::IItemEffect(const IItemEffect& arg0)
{
    _ctor_1(arg0);
}

void IItemEffect::_ctor_1(const IItemEffect& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

IItemEffect::IItemEffect()
{
    UNIMPLEMENTED; //_ctor_0();
}

void IItemEffect::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void IItemEffect::OnChangeAction(long nAction)
{
    __sub_0018EE60(this, nullptr, nAction);
}

void IItemEffect::OnFlip(int32_t bFlip)
{
    __sub_0018EE70(this, nullptr, bFlip);
}

long IItemEffect::GetItemID()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

IItemEffect& IItemEffect::operator=(const IItemEffect& arg0)
{
    return _op_assign_6(this, arg0);
}

IItemEffect& IItemEffect::_op_assign_6(IItemEffect* pThis, const IItemEffect& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CParticleEffect::~CParticleEffect()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CParticleEffect::_dtor_0()
{
    return __sub_0018F710(this, nullptr);
}

CParticleEffect::CParticleEffect(const CParticleEffect& arg0)
{
    _ctor_1(arg0);
}

void CParticleEffect::_ctor_1(const CParticleEffect& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CParticleEffect::CParticleEffect(long nItemID, const CAnimationDisplayer::FOLLOWINFO& fi, int32_t bGenOnMove)
{
    _ctor_0(nItemID, fi, bGenOnMove);
}

void CParticleEffect::_ctor_0(long nItemID, const CAnimationDisplayer::FOLLOWINFO& fi, int32_t bGenOnMove)
{
    return __sub_0018F5A0(this, nullptr, nItemID, fi, bGenOnMove);
}

CParticleEffect::CParticleEffect()
{
    UNIMPLEMENTED; //_ctor_3();
}

void CParticleEffect::_ctor_3()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CParticleEffect::OnChangeAction(long nAction)
{
    __sub_0018F690(this, nullptr, nAction);
}

void CParticleEffect::OnFlip(int32_t bFlip)
{
    __sub_0018F700(this, nullptr, bFlip);
}

long CParticleEffect::GetItemID()
{
    return __sub_0018F680(this, nullptr);
}

CParticleEffect& CParticleEffect::operator=(const CParticleEffect& arg0)
{
    return _op_assign_7(this, arg0);
}

CParticleEffect& CParticleEffect::_op_assign_7(CParticleEffect* pThis, const CParticleEffect& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimateEffect::~CAnimateEffect()
{
    UNIMPLEMENTED; // _dtor_0();
}

void CAnimateEffect::_dtor_0()
{
    return __sub_0018F420(this, nullptr);
}

CAnimateEffect::CAnimateEffect(const CAnimateEffect& arg0)
{
    _ctor_1(arg0);
}

void CAnimateEffect::_ctor_1(const CAnimateEffect& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAnimateEffect::CAnimateEffect(long nItemID, _x_com_ptr<IWzProperty> pProp, _x_com_ptr<IWzVector2D> pOrigin,
                               _x_com_ptr<IWzVector2D> pLayerUnderFace)
{
    _ctor_0(nItemID, pProp, pOrigin, pLayerUnderFace);
}

void CAnimateEffect::_ctor_0(long nItemID, _x_com_ptr<IWzProperty> pProp, _x_com_ptr<IWzVector2D> pOrigin,
                             _x_com_ptr<IWzVector2D> pLayerUnderFace)
{
    return __sub_0018F1A0(this, nullptr, nItemID, CreateNakedParam(pProp), CreateNakedParam(pOrigin),
                          CreateNakedParam(pLayerUnderFace));
}

CAnimateEffect::CAnimateEffect()
{
    UNIMPLEMENTED; //_ctor_3();
}

void CAnimateEffect::_ctor_3()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

long CAnimateEffect::GetItemID()
{
    return __sub_0018F410(this, nullptr);
}

CAnimateEffect& CAnimateEffect::operator=(const CAnimateEffect& arg0)
{
    return _op_assign_5(this, arg0);
}

CAnimateEffect& CAnimateEffect::_op_assign_5(CAnimateEffect* pThis, const CAnimateEffect& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
