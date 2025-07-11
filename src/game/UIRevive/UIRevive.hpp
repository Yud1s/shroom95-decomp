// UIRevive.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "LayoutMan/LayoutMan.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "Wnd/Wnd.hpp"

// Level: 1 0xe795
class CUIRevive;

class CUIRevive: public CWnd, public TSingleton<CUIRevive> {
// Nested
// Fields
	protected:  ZRef<CCtrlButton> m_pBtOK;
	protected:  ZRef<CCtrlButton> m_pBtYes;
	protected:  ZRef<CCtrlButton> m_pBtNo;
	protected:  ZArray<ZXString<char> > m_aMsg;
	protected:  long m_tWaitRevive{};
	private:  CLayoutMan m_lm;
// Methods
	public:  virtual  ~CUIRevive();
		public: void _dtor_0();
	public:    CUIRevive(const CUIRevive& arg0);
		public: void _ctor_1( const CUIRevive& arg0);
	public:    CUIRevive();
		public: void _ctor_0();
	public:  virtual void OnCreate(void* pData);
		public:  virtual void OnDestroy();
		public:  virtual int32_t OnSetFocus(int32_t bFocus);
		public:  virtual void OnButtonClicked(uint32_t nId);
		public:  virtual void OnKey(uint32_t wParam, int32_t lParam);
		public:  virtual int32_t HitTest(long rx, long ry, CCtrlWnd** ppCtrl);
		protected:   void Revive(int32_t bPremium);
		protected:  virtual void Update();
		public:   CUIRevive& operator=(const CUIRevive& arg0);
		public: static CUIRevive& _op_assign_11(CUIRevive* pThis, const CUIRevive& arg0);
};
STATIC_ASSERT_SIZE(CUIRevive, 180);


