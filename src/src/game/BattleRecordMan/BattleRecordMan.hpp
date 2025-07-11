// BattleRecordMan.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"

// Level: 1 0x1d99
class CBattleRecordMan;

class CBattleRecordMan: public TSingleton<CBattleRecordMan> {
// Nested
public: struct DamageInfo {
// Nested
// Fields
	public:  long m_nAverageDamagePerHit{};
	public:  long m_nMaxdamage{};
	public:  long m_nMinDamage{};
	public:  long m_nMaxCriticalDamage{};
	public:  long m_nMinCriticalDamage{};
	public:  int64_t m_nTotalDamage;
	public:  long m_nTotalAttackNum{};
	public:  double m_dTotalAttackTime{};
	public:  long m_nCriticalNum{};
	public:  long m_nMissNum{};
	public:  unsigned long m_tBeforeAttackTime{};
	public:  double m_dAverageHitPerSec{};
	public:  long m_nAverageDamagePerSec{};
	public:  long m_nTotalAttrRate{};
	public:  long m_nAverageAttrRate{};
// Methods
	public:    DamageInfo();
		public: void _ctor_0();
	public:   void CalcAverageDamage();
		public:   void CalcAverageAttrRate();
		public:   void CalcAverageDamagePerSec(long nDamage, int32_t bDot, int32_t bSummon);
		public:   void ChoiceMaxOrMinDamage(int32_t bMax, long nCurDamage);
		public:   void ChoiceCriMaxOrMinDamage(int32_t bMax, long nCurDamage);
		public:   void IncTotalDamage(long nCurDamage);
		public:   void IncTotalAttrRate(long nCurRate);
		public:   void IncTotalAttackNum();
		public:   void IncCriticalNum();
		public:   void IncMissNum();
		public:   void ClearAllValue();
	};
public: struct RecoveryItemInfo {
// Nested
// Fields
	public:  int64_t m_nTotalHPIncApply;
	public:  int64_t m_nTotalMPIncApply;
	public:  int64_t m_nTotalHPIncReq;
	public:  int64_t m_nTotalMPIncReq;
	public:  long m_nMeritRateHP{};
	public:  long m_nMeritRateMP{};
	public:  long m_nMeriteRateHPforAverage{};
	public:  long m_nMeriteRateMPforAverage{};
	public:  long m_nTotalUseItem{};
	public:  long m_nTotalUseHPItem{};
	public:  long m_nTotalUseMPItem{};
	public:  long m_nTotalUseHMPItem{};
	public:  long m_nAverageHPIncApply{};
	public:  long m_nAverageMPIncApply{};
	public:  long m_nAverageHPIncReq{};
	public:  long m_nAverageMPIncReq{};
	public:  unsigned long m_tLastUseItemTime{};
	public:  double m_dTotalUseItemSec{};
	public:  long m_nForeCastUsePerHour{};
// Methods
	public:    RecoveryItemInfo();
		public: void _ctor_0();
	public:   void IncTotalHPIncApply(long nIncHP);
		public:   void IncTotalMPIncApply(long nIncMP);
		public:   void IncTotalHPIncReq(long nHPIncOpt);
		public:   void IncTotalMPIncReq(long nMPIncOpt);
		public:   void CalcMeritRate();
		public:   void IncTotalUseItem(long nItemType);
		public:   void CalcAverageHPInc();
		public:   void CalcAverageMPInc();
		public:   void CalcForeCastUsePerHour();
		public:   void ClearAllValue();
	};
// Fields
	private:  int32_t m_bOnCalc{};
	private:  int32_t m_bServerOnCalc{};
	private:  int32_t m_bDot{};
	private:  int32_t m_bSummon{};
	private:  CBattleRecordMan::DamageInfo m_DamageInfo;
	private:  CBattleRecordMan::RecoveryItemInfo m_RecoveryItemInfo;
// Methods
	public:  virtual  ~CBattleRecordMan();
		public: void _dtor_0();
	public:    CBattleRecordMan(const CBattleRecordMan& arg0);
		public: void _ctor_1( const CBattleRecordMan& arg0);
	public:    CBattleRecordMan();
		public: void _ctor_0();
	public:   void OnPacket(long nType, CInPacket& iPacket);
		public:   void RequestOnCalc(int32_t bOn);
		public:   void ClearInfo(long nInfo);
		public:   void SetAdditionDamageInclude(int32_t bSet, long nOpt);
		public:   void SetBattleDamageInfo(long nDamage, int32_t bCritical, int32_t bSummon);
		public:   void SetAttrDamageRateInfo(long nCurRate);
		public:   void SetBattleRecoveryInfo(long nHPRecovery, long nMPRecovery, long nBeforeHP, long nBeforeMP);
		public:   int32_t GetOnCalc();
		public:   ZXString<char> GetDamageInfoView(long nSelectInfo);
		public:   ZXString<char> GetRecoveryInfoView(long nSelectInfo);
		public:   void SetForcedOffCalc();
		private:   void CheckTotalDamageOverflow();
		private:   void CheckTotalRecoveryOverflow();
		private:   void OnDotDamageInfo(CInPacket& iPacket);
		private:   void OnServerOnCalcRequestResult(CInPacket& iPacket);
		public:   CBattleRecordMan& operator=(const CBattleRecordMan& arg0);
		public: static CBattleRecordMan& _op_assign_18(CBattleRecordMan* pThis, const CBattleRecordMan& arg0);
};
STATIC_ASSERT_SIZE(CBattleRecordMan, 216);


