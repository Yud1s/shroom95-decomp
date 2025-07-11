// Field_Witchtower.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"
#include "Wnd/Wnd.hpp"
#include "Field/Field.hpp"

// Level: 1 0x22daf
class CScoreboard_Witchtower;
// Level: 1 0x22dc2
class CField_Witchtower;

class CScoreboard_Witchtower: public CWnd {
// Nested
public: enum  k {
	kWidth = 115,
	kHeight = 36
};

// Fields
	protected:  _x_com_ptr<IWzCanvas> m_pBackgrnd;
	protected:  _x_com_ptr<IWzCanvas> m_pKey;
	protected:  _x_com_ptr<IWzProperty> m_pScoreFont;
	private:  long m_nScore{};
// Methods
	public:  virtual  ~CScoreboard_Witchtower();
		public: void _dtor_0();
	public:    CScoreboard_Witchtower(const CScoreboard_Witchtower& arg0);
		public: void _ctor_1( const CScoreboard_Witchtower& arg0);
	public:    CScoreboard_Witchtower();
		public: void _ctor_0();
	public:  virtual void OnCreate(void* pData);
		public:  virtual void Draw(const tagRECT* pRect);
		public:  virtual int32_t OnSetFocus(int32_t bFocus);
		public:   void SetScore(long arg0);
		public:   CScoreboard_Witchtower& operator=(const CScoreboard_Witchtower& arg0);
		public: static CScoreboard_Witchtower& _op_assign_7(CScoreboard_Witchtower* pThis, const CScoreboard_Witchtower& arg0);
};
STATIC_ASSERT_SIZE(CScoreboard_Witchtower, 144);
class CField_Witchtower: public CField {
// Nested
// Fields
	private:  ZRef<CScoreboard_Witchtower> m_pScoreboard;
// Methods
	public:  virtual  ~CField_Witchtower();
		public: void _dtor_0();
	public:    CField_Witchtower(const CField_Witchtower& arg0);
		public: void _ctor_1( const CField_Witchtower& arg0);
	public:    CField_Witchtower();
		public: void _ctor_0();
	public:  virtual void Close();
		public:  virtual long GetFieldType();
		public:  virtual void OnPacket(long nType, CInPacket& iPacket);
		private:   void OnScoreUpdate(CInPacket& iPacket);
		public:   CField_Witchtower& operator=(CField_Witchtower& arg0);
		public: static CField_Witchtower& _op_assign_7(CField_Witchtower* pThis, CField_Witchtower& arg0);
};
STATIC_ASSERT_SIZE(CField_Witchtower, 3496);


