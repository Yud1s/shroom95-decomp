// Scoreboard_Battlefield.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CakePieEvent/CakePieEvent.hpp"

// Level: 1 0x14317
class CScoreboard_Battlefield;

class CScoreboard_Battlefield: public CClock {
// Nested
public:
enum k
{
	kWidth = 215,
	kHeight = 73
};

// Fields
	protected:  _x_com_ptr<IWzCanvas> m_pSrcCanvas;
	protected:  _x_com_ptr<IWzProperty> m_pScoreFontLeft;
	protected:  _x_com_ptr<IWzProperty> m_pScoreFontRight;
	protected:  _x_com_ptr<IWzProperty> m_pTimerFont;
	protected:  long m_nSheep{};
	protected:  long m_nWolves{};
// Methods
	public:  virtual  ~CScoreboard_Battlefield();
		public: void _dtor_0();
	public:    CScoreboard_Battlefield(const CScoreboard_Battlefield& arg0);
		public: void _ctor_1( const CScoreboard_Battlefield& arg0);
	public:    CScoreboard_Battlefield();
		public: void _ctor_0();
	public:  virtual void OnCreate(void* pData);
		public:  virtual void Draw(const tagRECT* pRect);
		public:   void SetScore(long arg0, long arg1);
		protected:  virtual _x_com_ptr<IWzProperty> GetFontTime();
		protected:  virtual void LoadClockCanvas(ZArray<_x_com_ptr<IWzCanvas> >& apClockCanvas, _x_com_ptr<IWzProperty> pClockDigit);
		public:   CScoreboard_Battlefield& operator=(const CScoreboard_Battlefield& arg0);
		public: static CScoreboard_Battlefield& _op_assign_8(CScoreboard_Battlefield* pThis, const CScoreboard_Battlefield& arg0);
};
STATIC_ASSERT_SIZE(CScoreboard_Battlefield, 244);
