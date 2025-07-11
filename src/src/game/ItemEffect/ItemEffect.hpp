// ItemEffect.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "AnimationDisplayer/AnimationDisplayer.hpp"

// Level: 0 0x6088
class CItemEffectManager;
// Level: 1 0x5d58
class IItemEffect;
// Level: 2 0x228c8
class CParticleEffect;
// Level: 2 0x228d9
class CAnimateEffect;

class CItemEffectManager
{
	// Nested
	// Fields
private:
	ZArray<ZRef<IItemEffect>> m_aItemEffects;

private:
	_x_com_ptr<IWzVector2D> m_pFaceOrigin;

private:
	_x_com_ptr<IWzVector2D> m_pBodyOrigin;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerUnderFace;
	// Methods
	CTOR_DEFAULT(CItemEffectManager)
public:
	~CItemEffectManager();

public:
	void _dtor_0();

public:
	CItemEffectManager(const CItemEffectManager &arg0);

public:
	void _ctor_1(const CItemEffectManager &arg0);

public:
	CItemEffectManager();

public:
	void _ctor_0();

public:
	void Init(_x_com_ptr<IWzVector2D> pFaceOrigin, _x_com_ptr<IWzVector2D> pBodyOrigin, _x_com_ptr<IWzGr2DLayer> pLayerUnderFace);

public:
	void UpdateFlip(int32_t bFlip);

public:
	void ChangeAction(long nAction);

public:
	void UpdateEffects(const long *anHairEquip);

private:
	ZRef<IItemEffect> LoadItemEffect(long arg0, long arg1);

public:
	CItemEffectManager &operator=(const CItemEffectManager &arg0);

public:
	static CItemEffectManager &_op_assign_8(CItemEffectManager *pThis, const CItemEffectManager &arg0);
};
STATIC_ASSERT_SIZE(CItemEffectManager, 16);
class IItemEffect : public ZRefCounted
{
	// Nested
	// Fields
	// Methods
public:
	virtual ~IItemEffect();

public:
	void _dtor_0();

public:
	IItemEffect(const IItemEffect &arg0);

public:
	void _ctor_1(const IItemEffect &arg0);

public:
	IItemEffect();

public:
	void _ctor_0();

public:
	virtual void OnChangeAction(long nAction);

public:
	virtual void OnFlip(int32_t bFlip);

public:
	virtual long GetItemID();

public:
	IItemEffect &operator=(const IItemEffect &arg0);

public:
	static IItemEffect &_op_assign_6(IItemEffect *pThis, const IItemEffect &arg0);
};
STATIC_ASSERT_SIZE(IItemEffect, 12);
class CParticleEffect : public IItemEffect
{
	// Nested
	// Fields
private:
	long m_nItemID{};

private:
	int32_t m_bNoFilp{};

private:
	int32_t m_bGenOnMove{};

private:
	ZRef<AnimationState> m_pAniState;
	// Methods
public:
	virtual ~CParticleEffect();

public:
	void _dtor_0();

public:
	CParticleEffect(const CParticleEffect &arg0);

public:
	void _ctor_1(const CParticleEffect &arg0);

public:
	CParticleEffect(long nItemID, const CAnimationDisplayer::FOLLOWINFO &fi, int32_t bGenOnMove);

public:
	void _ctor_0(long nItemID, const CAnimationDisplayer::FOLLOWINFO &fi, int32_t bGenOnMove);

private:
	CParticleEffect();

public:
	void _ctor_3();

public:
	virtual void OnChangeAction(long nAction);

public:
	virtual void OnFlip(int32_t bFlip);

public:
	virtual long GetItemID();

public:
	CParticleEffect &operator=(const CParticleEffect &arg0);

public:
	static CParticleEffect &_op_assign_7(CParticleEffect *pThis, const CParticleEffect &arg0);
};
STATIC_ASSERT_SIZE(CParticleEffect, 32);
class CAnimateEffect : public IItemEffect
{
	// Nested
	// Fields
private:
	long m_nItemID{};

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayer;
	// Methods
public:
	virtual ~CAnimateEffect();

public:
	void _dtor_0();

public:
	CAnimateEffect(const CAnimateEffect &arg0);

public:
	void _ctor_1(const CAnimateEffect &arg0);

public:
	CAnimateEffect(long nItemID, _x_com_ptr<IWzProperty> pProp, _x_com_ptr<IWzVector2D> pOrigin, _x_com_ptr<IWzVector2D> pLayerUnderFace);

public:
	void _ctor_0(long nItemID, _x_com_ptr<IWzProperty> pProp, _x_com_ptr<IWzVector2D> pOrigin, _x_com_ptr<IWzVector2D> pLayerUnderFace);

private:
	CAnimateEffect();

public:
	void _ctor_3();

public:
	virtual long GetItemID();

public:
	CAnimateEffect &operator=(const CAnimateEffect &arg0);

public:
	static CAnimateEffect &_op_assign_5(CAnimateEffect *pThis, const CAnimateEffect &arg0);
};
STATIC_ASSERT_SIZE(CAnimateEffect, 20);
