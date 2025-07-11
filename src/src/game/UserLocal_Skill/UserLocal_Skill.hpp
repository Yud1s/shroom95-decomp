// UserLocal_Skill.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Dialog/Dialog.hpp"
#include "LayoutMan/LayoutMan.hpp"

class CCtrlEdit;

// Level: 1 0xd432
class CUIAntiMacroCharacterName;

class CUIAntiMacroCharacterName: public CDialog {
// Nested
public: enum  ID_CTRL_EDIT_INPUT {
	ID_CTRL_EDIT_INPUT = 1000
};
// Fields
	protected:  ZRef<CCtrlEdit> m_pEditInput;
	protected:  ZRef<CCtrlButton> m_pBtOK;
	protected:  ZRef<CCtrlButton> m_pBtCancel;
	private:  CLayoutMan m_lm;
// Methods
	public:  virtual  ~CUIAntiMacroCharacterName();
		public: void _dtor_0();
	public:    CUIAntiMacroCharacterName(const CUIAntiMacroCharacterName& arg0);
		public: void _ctor_1( const CUIAntiMacroCharacterName& arg0);
	public:    CUIAntiMacroCharacterName();
		public: void _ctor_0();
	public:  virtual void OnCreate(void* pData);
		public:   void GetResult(ZXString<char>& sResult);
		public:   CUIAntiMacroCharacterName& operator=(const CUIAntiMacroCharacterName& arg0);
		public: static CUIAntiMacroCharacterName& _op_assign_5(CUIAntiMacroCharacterName* pThis, const CUIAntiMacroCharacterName& arg0);
};
STATIC_ASSERT_SIZE(CUIAntiMacroCharacterName, 188);



