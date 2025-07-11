// AffectedAreaPool.cpp
#include "AffectedAreaPool.hpp"
#include "AffectedAreaPool_regen.ipp"

CAffectedAreaPool::~CAffectedAreaPool()
{
    ms_pInstance = nullptr;
}

void CAffectedAreaPool::_dtor_0()
{
    return __sub_00034200(this, nullptr);
}

CAffectedAreaPool::CAffectedAreaPool(const CAffectedAreaPool& arg0)
{
    _ctor_1(arg0);
}

void CAffectedAreaPool::_ctor_1(const CAffectedAreaPool& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CAffectedAreaPool::CAffectedAreaPool()
{
    ms_pInstance = this;
}

void CAffectedAreaPool::_ctor_0()
{
    return __sub_000341A0(this, nullptr);
}

void CAffectedAreaPool::Update(long tCur)
{
    __sub_000367F0(this, nullptr, tCur);
}

void CAffectedAreaPool::ShelterUpdate(long tCur, ZRef<AFFECTEDAREA> pa)
{
    __sub_00034280(this, nullptr, tCur, CreateNakedParam(pa));
}

ZRef<AFFECTEDAREA> CAffectedAreaPool::GetAffectedAreaByPoint(tagPOINT ptUser, unsigned long& dwDiseaseData, long nPhase)
{
    ZRef<AFFECTEDAREA> ret;
    return *__sub_00034CC0(this, nullptr, &ret, CreateNakedParam(ptUser), dwDiseaseData, nPhase);
}

ZRef<AFFECTEDAREA> CAffectedAreaPool::GetAffectedAreaByOwnerID(unsigned long arg0, long arg1)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

int32_t CAffectedAreaPool::IsSmokeAreaByPoint(unsigned long dwCharacterID, ZArray<unsigned long>& adwPartyMemberID,
                                              tagPOINT ptUser, long nPhase)
{
    return __sub_00034F40(this, nullptr, dwCharacterID, adwPartyMemberID, CreateNakedParam(ptUser), nPhase);
}

ZRef<AFFECTEDAREA> CAffectedAreaPool::GetAffectAreaByPoint(long nSkillID, unsigned long dwCharacterID,
                                                           ZArray<unsigned long>& adwPartyMemberID, tagPOINT ptUser,
                                                           long nPhase)
{
    ZRef<AFFECTEDAREA> ret;
    return *__sub_000350F0(this, nullptr, &ret, nSkillID, dwCharacterID, adwPartyMemberID, CreateNakedParam(ptUser),
                           nPhase);
}

int32_t CAffectedAreaPool::IsUsableAreaBuffItem(unsigned long dwCharacterID, long nItemID, tagPOINT ptUser)
{
    return __sub_00034E10(this, nullptr, dwCharacterID, nItemID, CreateNakedParam(ptUser));
}

int32_t CAffectedAreaPool::IsAbleToInsertExclusiveArea(const tagRECT& rcNewArea)
{
    return __sub_00035480(this, nullptr, rcNewArea);
}

void CAffectedAreaPool::OnPacket(long nType, CInPacket& iPacket)
{
    __sub_00038330(this, nullptr, nType, iPacket);
}

long CAffectedAreaPool::GetAr01AreaPAD(unsigned long dwCharacterID, ZArray<unsigned long>& adwPartyMemberID,
                                       tagPOINT ptUser, unsigned long& dwID, long nPhase)
{
    return __sub_000352A0(this, nullptr, dwCharacterID, adwPartyMemberID, CreateNakedParam(ptUser), dwID, nPhase);
}

long CAffectedAreaPool::GetAr01AreaMAD(unsigned long dwCharacterID, ZArray<unsigned long>& adwPartyMemberID,
                                       tagPOINT ptUser, unsigned long& dwID, long nPhase)
{
    return __sub_00035390(this, nullptr, dwCharacterID, adwPartyMemberID, CreateNakedParam(ptUser), dwID, nPhase);
}

void CAffectedAreaPool::RedrawForPhase(long nPhase)
{
    __sub_00037D50(this, nullptr, nPhase);
}

void CAffectedAreaPool::OnAffectedAreaCreated(CInPacket& iPacket)
{
    __sub_00037EC0(this, nullptr, iPacket);
}

void CAffectedAreaPool::OnAffectedAreaRemoved(CInPacket& iPacket)
{
    __sub_000360A0(this, nullptr, iPacket);
}

void CAffectedAreaPool::AffectedAreaAnimationCreated(ZRef<AFFECTEDAREA> pa, int32_t bResetEndTime)
{
    __sub_000372C0(this, nullptr, CreateNakedParam(pa), bResetEndTime);
}

void CAffectedAreaPool::MakeLayer_Fog(ZArray<_x_com_ptr<IWzGr2DLayer>>& apLayer, _x_com_ptr<IWzProperty> pProp,
                                      const tagRECT& rcArea)
{
    __sub_00036B50(this, nullptr, apLayer, CreateNakedParam(pProp), rcArea);
}

void CAffectedAreaPool::MakeLayer_Fog_OneTile(ZArray<_x_com_ptr<IWzGr2DLayer>>& apLayer, _x_com_ptr<IWzProperty> pProp,
                                              const tagRECT& rcArea)
{
    __sub_00036F20(this, nullptr, apLayer, CreateNakedParam(pProp), rcArea);
}

int32_t CAffectedAreaPool::CheckForTooManyClouds(const tagPOINT& pt, ZRef<AFFECTEDAREA> paExcept)
{
    return __sub_00034B20(this, nullptr, pt, CreateNakedParam(paExcept));
}

void CAffectedAreaPool::FindAndDraw(ZRef<AFFECTEDAREA> pa, long tCur)
{
    __sub_00035900(this, nullptr, CreateNakedParam(pa), tCur);
}

void CAffectedAreaPool::AddAffectedArea(ZRef<AFFECTEDAREA> pa)
{
    __sub_00037210(this, nullptr, CreateNakedParam(pa));
}

void CAffectedAreaPool::RemoveAffectedArea(ZRef<AFFECTEDAREA> pa)
{
    __sub_00034100(this, nullptr, CreateNakedParam(pa));
}

CAffectedAreaPool& CAffectedAreaPool::operator=(const CAffectedAreaPool& arg0)
{
    return _op_assign_24(this, arg0);
}

CAffectedAreaPool& CAffectedAreaPool::_op_assign_24(CAffectedAreaPool* pThis, const CAffectedAreaPool& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
