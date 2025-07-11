// VecCtrlUserPreview.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "VecCtrl/VecCtrl.hpp"

// Level: 1 0x137a1
class CVecCtrlUserPreview;

class CVecCtrlUserPreview: public CVecCtrl {
// Nested
public: struct MOVEMENTINFO {
// Nested
// Fields
	public:  long tSecondaryStatChanged{};
	public:  short nSpeed{};
	public:  short nJump{};
	public:  unsigned char bSpec{};
	public:  double fs{};
	public:  unsigned char bSN{};
// Methods
};
// Fields
// Methods
	public:  virtual  ~CVecCtrlUserPreview();
		public: void _dtor_0();
	public:    CVecCtrlUserPreview(const CVecCtrlUserPreview& arg0);
		public: void _ctor_1( const CVecCtrlUserPreview& arg0);
	public:    CVecCtrlUserPreview();
		public: void _ctor_0();
	public:  static CVecCtrlUserPreview* __cdecl CreateInstance();
		protected:  virtual long BeginUpdateActive();
		protected:  virtual int32_t WorkUpdateActive(long arg0);
		protected:   void WorkUpdateActiveLadderOrRope();
		protected:  virtual void EndUpdateActive();
		protected:   int32_t IsAbleToClimbLadderOrRope();
		protected:   int32_t IsStun();
		public:   CVecCtrlUserPreview& operator=(const CVecCtrlUserPreview& arg0);
		public: static CVecCtrlUserPreview& _op_assign_10(CVecCtrlUserPreview* pThis, const CVecCtrlUserPreview& arg0);
};
STATIC_ASSERT_SIZE(CVecCtrlUserPreview, 760);


