// Field_HuntingAdballoon.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Field/Field.hpp"
#include "CakePieEvent/CakePieEvent.hpp"

// Level: 1 0x2313c
class CField_HuntingAdballoon;

class CField_HuntingAdballoon: public CField {
// Nested
public: enum  BG_ {
	BG_END = 0,
	BG_MIDDLE = 1,
	BG_TOP = 2,
	BG_MAX = 3
};

// Fields
	protected:  long m_nRedDamage{};
	protected:  long m_nBlueDamage{};
	protected:  _x_com_ptr<IWzGr2DLayer> m_pLayerGauge;
	protected:  _x_com_ptr<IWzCanvas> m_pCanvasGaugeBg;
	protected:  _x_com_ptr<IWzCanvas> m_pCanvasGaugeText;
	protected:  _x_com_ptr<IWzCanvas> m_pCanvasGaugeIcon;
	protected:  _x_com_ptr<IWzCanvas> m_pCanvasGaugeInversePixel;
	protected:  std::array<_x_com_ptr<IWzGr2DLayer>, 2> m_pLayerCharge;
	protected:  std::array<long, 2> m_nCharge{};
	protected:  std::array<_x_com_ptr<IWzCanvas>, 3> m_pCanvasBatteryBg;
	protected:  _x_com_ptr<IWzCanvas> m_pCanvasBatteryCharge;
// Methods
	public:  virtual  ~CField_HuntingAdballoon();
		public: void _dtor_0();
	public:    CField_HuntingAdballoon(const CField_HuntingAdballoon& arg0);
		public: void _ctor_1( const CField_HuntingAdballoon& arg0);
	public:    CField_HuntingAdballoon();
		public: void _ctor_0();
	public:  virtual long GetFieldType();
		public:  virtual void Init(void* pParam);
		public:  virtual void OnMakeTimerParam(CClock::INITPARAM& param, long& nX, long& nY);
		public:  virtual void OnFieldSetVariable(ZXString<char> sKey, ZXString<char> sVal);
		public:   CField_HuntingAdballoon& operator=(CField_HuntingAdballoon& arg0);
		public: static CField_HuntingAdballoon& _op_assign_7(CField_HuntingAdballoon* pThis, CField_HuntingAdballoon& arg0);
};
STATIC_ASSERT_SIZE(CField_HuntingAdballoon, 3552);


