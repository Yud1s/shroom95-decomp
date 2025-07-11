// UISoftKeyboard.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "util/extra.h"

#include "Dialog/Dialog.hpp"
#include "CtrlWnd/CtrlWnd.hpp"

class CCtrlEdit;

// Level: 1 0x14cc1
class CUISoftKeyboard;

class CUISoftKeyboard: public CDialog {
// Nested
// Fields
	protected:  ZRef<CCtrlButton> m_pBtClose;
	protected:  ZRef<CCtrlButton> m_pBtBackSpace;
	protected:  ZRef<CCtrlButton> m_pBtEnter;
	protected:  ZRef<CCtrlEdit> m_pEditParent;
	protected:  long m_nLastKeyIndex{};
	protected:  long m_nMinLength{};
	protected:  long m_nMaxLength{};
	protected:  long m_nKeyboardType{};
	protected:  ZArray<KEYMAP> m_aKeyMap;
	protected:  std::array<std::array<_x_com_ptr<IWzCanvas>, 4>, 36> m_pCanvasKey;
	protected:  _x_com_ptr<IWzCanvas> m_pCanvasDefaultKey;
// Methods
	public:  virtual  ~CUISoftKeyboard();
		public: void _dtor_0();
	public:    CUISoftKeyboard(const CUISoftKeyboard& arg0);
		public: void _ctor_1( const CUISoftKeyboard& arg0);
	public:    CUISoftKeyboard();
		public: void _ctor_0();
	public:  virtual void OnCreate(void* pData);
		public:  virtual int32_t OnSetFocus(int32_t bFocus);
		public:  virtual void Draw(const tagRECT* pRect);
		public:  virtual int32_t OnMouseMove(long rx, long ry);
		public:  virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);
		public:  virtual void OnButtonClicked(uint32_t nId);
		public:  virtual void OnDestroy();
		public:  virtual int32_t HitTest(long rx, long ry, CCtrlWnd** ppCtrl);
		public:   void SetSoftKeyboard(CCtrlWnd* pCtrl, SOFTKEYBOARDPARAM* param);
		public:   const int32_t IsSoftKeyboardSet();
		protected:   void ResetRandomKeyMap();
		protected:   void SetRandomKeyMap(long nDefaultOver);
		protected:   void SetKeyMode(long nModeID);
		protected:   void UpdateKeyConstraint(long nLength);
		protected:   long GetKeyIndexFromPoint(long rx, long ry);
		protected:   ZXString<char> GetCharacterFromKeyIndex(long nIndex);
		public:   CUISoftKeyboard& operator=(const CUISoftKeyboard& arg0);
		public: static CUISoftKeyboard& _op_assign_19(CUISoftKeyboard* pThis, const CUISoftKeyboard& arg0);
};
STATIC_ASSERT_SIZE(CUISoftKeyboard, 776);


