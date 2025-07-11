// VecCtrlGrenade.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "VecCtrl/VecCtrl.hpp"

// Level: 1 0x138ab
class CVecCtrlGrenade;

class CVecCtrlGrenade: public CVecCtrl {
// Nested
// Fields
	public:  int32_t m_bGravityFree{};
	protected:  int32_t m_bBomb{};
	private:  long m_nDragX{};
	private:  long m_nDragY{};
// Methods
	public:  virtual  ~CVecCtrlGrenade();
		public: void _dtor_0();
	public:    CVecCtrlGrenade(const CVecCtrlGrenade& arg0);
		public: void _ctor_1( const CVecCtrlGrenade& arg0);
	public:    CVecCtrlGrenade();
		public: void _ctor_0();
	public:  static CVecCtrlGrenade* __cdecl CreateInstance();
		public:   int32_t IsBomb();
		public:   void SetDragValue(long arg0, long arg1);
		protected:  virtual int32_t WorkUpdateActive(long tElapse);
		protected:  virtual void CalcFloat(long tSec);
		public:   CVecCtrlGrenade& operator=(const CVecCtrlGrenade& arg0);
		public: static CVecCtrlGrenade& _op_assign_8(CVecCtrlGrenade* pThis, const CVecCtrlGrenade& arg0);
};
STATIC_ASSERT_SIZE(CVecCtrlGrenade, 776);


