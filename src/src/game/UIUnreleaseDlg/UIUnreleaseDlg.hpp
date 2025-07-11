// UIUnreleaseDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "LayoutMan/LayoutMan.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"

// Level: 1 0x1172e
class CUIUnreleaseDlg;

class CUIUnreleaseDlg: public CUniqueModeless {
// Nested
// Fields
	protected:  long m_nUItemPos{};
	protected:  long m_nEItemPos{};
	protected:  _x_com_ptr<IWzGr2DLayer> m_pLayerEffect;
	protected:  _x_com_ptr<IWzGr2DLayer> m_pLayerItem;
	private:  CLayoutMan m_lm;
// Methods
	public:  virtual  ~CUIUnreleaseDlg();
		public: void _dtor_0();
	public:    CUIUnreleaseDlg(const CUIUnreleaseDlg& arg0);
		public: void _ctor_1( const CUIUnreleaseDlg& arg0);
	public:    CUIUnreleaseDlg(long nUItemPos);
		public: void _ctor_0( long nUItemPos);
	public:  virtual void OnCreate(void* pData);
		public:  virtual int32_t HitTest(long rx, long ry, CCtrlWnd** ppCtrl);
		public:  virtual void Draw(const tagRECT* pRect);
		public:  virtual void OnButtonClicked(uint32_t nId);
		public:  virtual void OnKey(uint32_t wParam, int32_t lParam);
		public:   void SetEItemPos(long arg0);
		public:   long GetEItemPos();
		public:   int32_t UnreleaseEquipItem();
		CLASS_RTTI_(CUIUnreleaseDlg, CUniqueModeless);
		public:   CUIUnreleaseDlg& operator=(const CUIUnreleaseDlg& arg0);
		public: static CUIUnreleaseDlg& _op_assign_14(CUIUnreleaseDlg* pThis, const CUIUnreleaseDlg& arg0);
};
STATIC_ASSERT_SIZE(CUIUnreleaseDlg, 184);


