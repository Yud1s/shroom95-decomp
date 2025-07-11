// CtrlSlider.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CtrlWnd/CtrlWnd.hpp"
#include "Wnd/Wnd.hpp"

// Level: 1 0x31ee
class CCtrlSlider;

class CCtrlSlider: public CCtrlWnd {
// Nested
public: struct CREATEPARAM {
// Nested
// Fields
	public:  int32_t bAcceptFocus{};
	public:  long nBackColor{};
// Methods
	public:    CREATEPARAM();
		public: void _ctor_0();
};
// Fields
	protected:  long m_nCurPos{};
	protected:  long m_nSliderRange{};
	protected:  long m_nLength{};
	protected:  long m_nThumbWidth{};
	protected:  int32_t m_bCapture{};
	protected:  int32_t m_bMouseOver{};
	protected:  long m_nLastMouseCoord{};
	protected:  _x_com_ptr<IWzCanvas> m_pCanvasBase;
	protected:  std::array<_x_com_ptr<IWzCanvas>, 4> m_pCanvasThumb;
// Methods
	public:  virtual  ~CCtrlSlider();
		public: void _dtor_0();
	public:    CCtrlSlider(const CCtrlSlider& arg0);
		public: void _ctor_1( const CCtrlSlider& arg0);
	public:    CCtrlSlider();
		public: void _ctor_0();
	public:  virtual void CreateCtrl(CWnd* pParent, uint32_t nId, long l, long t, long length, void* pData);
		public:  virtual int32_t OnMouseMove(long rx, long ry);
		public:  virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);
		public:  virtual void OnKey(uint32_t wParam, int32_t lParam);
		public:  virtual void OnMouseEnter(int32_t bEnter);
		public:  virtual void Draw(long rx, long ry, const tagRECT* pRect);
		public:   long GetCurPos();
		public:   long GetSliderRange();
		public:   void SetCurPos(long nPos);
		public:   void SetSliderRange(long nRange);
		public:   int32_t IsEnabled();
		public:  static long __cdecl GetSliderHeight();
		protected:   void MouseDown(long rx, long ry);
		protected:   void MouseUp(long rx, long ry);
		protected:   long GetPosByCoord(long rx);
		protected:   long GetCoordByPos(long nPos);
		protected:   void SetToNewPos(long nPos, int32_t bRedraw);
		CLASS_RTTI_(CCtrlSlider, CCtrlWnd);
		public:   CCtrlSlider& operator=(const CCtrlSlider& arg0);
		public: static CCtrlSlider& _op_assign_23(CCtrlSlider* pThis, const CCtrlSlider& arg0);
};
STATIC_ASSERT_SIZE(CCtrlSlider, 100);


