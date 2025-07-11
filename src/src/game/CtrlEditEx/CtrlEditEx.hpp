// CtrlEditEx.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CtrlEdit/CtrlEdit.hpp"

// Level: 1 0x1399c
class CCtrlEditEx;

class CCtrlEditEx: public CCtrlEdit {
// Nested
// Fields
	protected:  int32_t m_bSwitchingMode{};
	protected:  long m_tShowSwitchingChar{};
// Methods
	public:  virtual  ~CCtrlEditEx();
		public: void _dtor_0();
	public:    CCtrlEditEx(const CCtrlEditEx& arg0);
		public: void _ctor_1( const CCtrlEditEx& arg0);
	public:    CCtrlEditEx();
		public: void _ctor_0();
	public:  virtual void Update();
		public:  virtual void OnKey(uint32_t wParam, int32_t lParam);
		public:  virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);
		public:  virtual void OnIMEResult(const char* sComp);
		public:  virtual ZXString<char> FilterString(ZXString<char> sInput);
		public:   void SetSwitchingChar(char cChar);
		public:   char GetSwitchingChar();
		public:   void EndSwitching();
		public:   void SetReadOnly(int32_t arg0);
		public:   void DeleteString();
		CLASS_RTTI_(CCtrlEditEx, CCtrlEdit);
		public:   CCtrlEditEx& operator=(const CCtrlEditEx& arg0);
		public: static CCtrlEditEx& _op_assign_16(CCtrlEditEx* pThis, const CCtrlEditEx& arg0);
};
STATIC_ASSERT_SIZE(CCtrlEditEx, 196);


