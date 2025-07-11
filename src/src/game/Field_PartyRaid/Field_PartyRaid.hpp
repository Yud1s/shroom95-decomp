// Field_PartyRaid.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Field/Field.hpp"
#include "CakePieEvent/CakePieEvent.hpp"

class CBitmapNumber;

// Level: 1 0x22fe1
class CField_PartyRaidResult;
// Level: 1 0x22fcf
class CField_PartyRaidBoss;
// Level: 1 0x22fbc
class CField_PartyRaid;

class CField_PartyRaidResult: public CField {
// Nested
// Fields
	private:  long m_nPoint{};
	private:  long m_nBonus{};
	private:  long m_nTotal{};
	private:  ZRef<CBitmapNumber> m_pBN;
	private:  ZRef<CBitmapNumber> m_pBNBig;
// Methods
	public:  virtual  ~CField_PartyRaidResult();
		public: void _dtor_0();
	public:    CField_PartyRaidResult(const CField_PartyRaidResult& arg0);
		public: void _ctor_1( const CField_PartyRaidResult& arg0);
	public:    CField_PartyRaidResult();
		public: void _ctor_0();
	public:  virtual long GetFieldType();
		public:  virtual void Init(void* pParam);
		public:  virtual void OnSessionValue(ZXString<char> sKey, ZXString<char> sVal);
		public:   CField_PartyRaidResult& operator=(CField_PartyRaidResult& arg0);
		public: static CField_PartyRaidResult& _op_assign_6(CField_PartyRaidResult* pThis, CField_PartyRaidResult& arg0);
};
STATIC_ASSERT_SIZE(CField_PartyRaidResult, 3520);
class CField_PartyRaidBoss: public CField {
// Nested
// Fields
	protected:  long m_nRedDamage{};
	protected:  long m_nBlueDamage{};
	protected:  _x_com_ptr<IWzGr2DLayer> m_pLayerGauge;
	protected:  _x_com_ptr<IWzCanvas> m_pCanvasGaugeBg;
	protected:  _x_com_ptr<IWzCanvas> m_pCanvasGaugeText;
	protected:  _x_com_ptr<IWzCanvas> m_pCanvasGaugeIcon;
	protected:  _x_com_ptr<IWzCanvas> m_pCanvasGaugeInversePixel;
	protected:  _x_com_ptr<IWzGr2DLayer> m_pLayerPoint;
	protected:  _x_com_ptr<IWzCanvas> m_pCanvasPointBg;
	protected:  ZRef<CBitmapNumber> m_pBNPoint;
// Methods
	public:  virtual  ~CField_PartyRaidBoss();
		public: void _dtor_0();
	public:    CField_PartyRaidBoss(const CField_PartyRaidBoss& arg0);
		public: void _ctor_1( const CField_PartyRaidBoss& arg0);
	public:    CField_PartyRaidBoss();
		public: void _ctor_0();
	public:  virtual long GetFieldType();
		public:  virtual void Init(void* pParam);
		public:  virtual void OnMakeTimerParam(CClock::INITPARAM& param, long& nX, long& nY);
		public:  virtual void OnFieldSetVariable(ZXString<char> sKey, ZXString<char> sVal);
		public:  virtual void OnPartyValue(ZXString<char> sKey, ZXString<char> sVal);
		public:   CField_PartyRaidBoss& operator=(CField_PartyRaidBoss& arg0);
		public: static CField_PartyRaidBoss& _op_assign_8(CField_PartyRaidBoss* pThis, CField_PartyRaidBoss& arg0);
};
STATIC_ASSERT_SIZE(CField_PartyRaidBoss, 3536);
class CField_PartyRaid: public CField {
// Nested
// Fields
	private:  _x_com_ptr<IWzGr2DLayer> m_pLayerStateBg;
	private:  _x_com_ptr<IWzGr2DLayer> m_pLayerStateMine;
	private:  _x_com_ptr<IWzGr2DLayer> m_pLayerStateOther;
	private:  _x_com_ptr<IWzGr2DLayer> m_pLayerPoint;
	private:  _x_com_ptr<IWzCanvas> m_pCanvasPointBg;
	private:  ZRef<CBitmapNumber> m_pBNStage;
	private:  ZRef<CBitmapNumber> m_pBNPoint;
	private:  long m_nStageMine{};
	private:  long m_nStageOther{};
	private:  long m_nPoint{};
// Methods
	public:  virtual  ~CField_PartyRaid();
		public: void _dtor_0();
	public:    CField_PartyRaid(const CField_PartyRaid& arg0);
		public: void _ctor_1( const CField_PartyRaid& arg0);
	public:    CField_PartyRaid();
		public: void _ctor_0();
	public:  virtual long GetFieldType();
		public:  virtual void Init(void* pParam);
		public:  virtual void OnMakeTimerParam(CClock::INITPARAM& param, long& nX, long& nY);
		public:  virtual void Update();
		private:   void _UpdatePoint();
		public:   CField_PartyRaid& operator=(CField_PartyRaid& arg0);
		public: static CField_PartyRaid& _op_assign_8(CField_PartyRaid* pThis, CField_PartyRaid& arg0);
};
STATIC_ASSERT_SIZE(CField_PartyRaid, 3536);


