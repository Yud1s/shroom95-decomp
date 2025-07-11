// Field_GuildBoss.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"


// Level: 1 0x2314f
class CPulley;

class CPulley: public ZRefCounted {
// Nested
// Fields
	public:  long m_nHP{};
	protected:  tagRECT m_rcArea{};
	protected:  _x_com_ptr<IWzGr2DLayer> m_pLayer;
// Methods
	public:  virtual  ~CPulley();
		public: void _dtor_0();
	public:    CPulley(const CPulley& arg0);
		public: void _ctor_1( const CPulley& arg0);
	public:    CPulley();
		public: void _ctor_0();
	public:   void Init(long x, long y, const wchar_t* sUOL);
		public:   void Hit();
		public:   const tagRECT& GetRect();
		public:   CPulley& operator=(const CPulley& arg0);
		public: static CPulley& _op_assign_6(CPulley* pThis, const CPulley& arg0);
};
STATIC_ASSERT_SIZE(CPulley, 36);


