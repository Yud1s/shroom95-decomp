// UIPartySearchTab.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "LayoutMan/LayoutMan.hpp"
#include "UIExpeditionTab/UIExpeditionTab.hpp"
#include "Wnd/Wnd.hpp"
#include "WvsContext_UserList/WvsContext_UserList.hpp"

// Level: 1 0x14ea7
class TabPartySearch;

class TabPartySearch: public TabDlgInterface {
// Nested
// Fields
	public:  ZMap<long,ZRef<CCtrlButton>,long> m_pBt;
	public:  ZMap<long,ZRef<CCtrlCheckBox>,long> m_pCB;
	public:  ZMap<long,ZRef<CCtrlEdit>,long> m_pEdit;
	private:  CLayoutMan m_lm;
// Methods
	public:  virtual  ~TabPartySearch();
		public: void _dtor_0();
	public:    TabPartySearch(const TabPartySearch& arg0);
		public: void _ctor_1( const TabPartySearch& arg0);
	public:    TabPartySearch(CWnd* pParent);
		public: void _ctor_0( CWnd* pParent);
	public:  virtual void OnCreate(void* nCharacterGrade);
		public:  virtual void Draw(_x_com_ptr<IWzCanvas> pCanvas);
		public:  virtual void OnButtonClicked(uint32_t nId);
		public:  virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);
		public:  virtual void ActivateControls();
		public:  virtual void HideControls();
		public:   void StartSearch();
		public:   void HoldSearch();
		public:   void StopSearch();
		public:   void SetControl_As_Setting();
		private:   unsigned long GetSearchingJob_From_CheckBox();
		private:   int32_t IsValidSetting(PARTYSERACH_SETTING Setting, long nCharacterLevel);
		private:   void SetControl_As_Default();
		public:   TabPartySearch& operator=(const TabPartySearch& arg0);
		public: static TabPartySearch& _op_assign_16(TabPartySearch* pThis, const TabPartySearch& arg0);
};
STATIC_ASSERT_SIZE(TabPartySearch, 108);


