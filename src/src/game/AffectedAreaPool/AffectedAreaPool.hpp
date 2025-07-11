// AffectedAreaPool.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"
#include "util/extra.h"

#include "Packet/Packet.hpp"

// Level: 1 0xc8f6
class CAffectedAreaPool;

class CAffectedAreaPool: public TSingleton<CAffectedAreaPool> {
// Nested
// Fields
	protected:  ZList<ZRef<AFFECTEDAREA> > m_lAffectedArea;
	protected:  ZMap<unsigned long,ZRef<AFFECTEDAREA>,unsigned long> m_mAffectedArea;
// Methods
	public:  virtual  ~CAffectedAreaPool();
		public: void _dtor_0();
	public:    CAffectedAreaPool(const CAffectedAreaPool& arg0);
		public: void _ctor_1( const CAffectedAreaPool& arg0);
	public:    CAffectedAreaPool();
		public: void _ctor_0();
	public:   void Update(long tCur);
		public:   void ShelterUpdate(long tCur, ZRef<AFFECTEDAREA> pa);
		public:   ZRef<AFFECTEDAREA> GetAffectedAreaByPoint(tagPOINT ptUser, unsigned long& dwDiseaseData, long nPhase);
		public:   ZRef<AFFECTEDAREA> GetAffectedAreaByOwnerID(unsigned long arg0, long arg1);
		public:   int32_t IsSmokeAreaByPoint(unsigned long dwCharacterID, ZArray<unsigned long>& adwPartyMemberID, tagPOINT ptUser, long nPhase);
		public:   ZRef<AFFECTEDAREA> GetAffectAreaByPoint(long nSkillID, unsigned long dwCharacterID, ZArray<unsigned long>& adwPartyMemberID, tagPOINT ptUser, long nPhase);
		public:   int32_t IsUsableAreaBuffItem(unsigned long dwCharacterID, long nItemID, tagPOINT ptUser);
		public:   int32_t IsAbleToInsertExclusiveArea(const tagRECT& rcNewArea);
		public:   void OnPacket(long nType, CInPacket& iPacket);
		public:   long GetAr01AreaPAD(unsigned long dwCharacterID, ZArray<unsigned long>& adwPartyMemberID, tagPOINT ptUser, unsigned long& dwID, long nPhase);
		public:   long GetAr01AreaMAD(unsigned long dwCharacterID, ZArray<unsigned long>& adwPartyMemberID, tagPOINT ptUser, unsigned long& dwID, long nPhase);
		public:   void RedrawForPhase(long nPhase);
		protected:   void OnAffectedAreaCreated(CInPacket& iPacket);
		protected:   void OnAffectedAreaRemoved(CInPacket& iPacket);
		protected:   void AffectedAreaAnimationCreated(ZRef<AFFECTEDAREA> pa, int32_t bResetEndTime);
		protected:   void MakeLayer_Fog(ZArray<_x_com_ptr<IWzGr2DLayer> >& apLayer, _x_com_ptr<IWzProperty> pProp, const tagRECT& rcArea);
		protected:   void MakeLayer_Fog_OneTile(ZArray<_x_com_ptr<IWzGr2DLayer> >& apLayer, _x_com_ptr<IWzProperty> pProp, const tagRECT& rcArea);
		protected:   int32_t CheckForTooManyClouds(const tagPOINT& pt, ZRef<AFFECTEDAREA> paExcept);
		protected:   void FindAndDraw(ZRef<AFFECTEDAREA> pa, long tCur);
		protected:   void AddAffectedArea(ZRef<AFFECTEDAREA> pa);
		protected:   void RemoveAffectedArea(ZRef<AFFECTEDAREA> pa);
		public:   CAffectedAreaPool& operator=(const CAffectedAreaPool& arg0);
		public: static CAffectedAreaPool& _op_assign_24(CAffectedAreaPool* pThis, const CAffectedAreaPool& arg0);
};
STATIC_ASSERT_SIZE(CAffectedAreaPool, 48);


