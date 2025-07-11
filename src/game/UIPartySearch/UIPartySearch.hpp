// UIPartySearch.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UIWnd/UIWnd.hpp"
#include "UIPartyAdverTab/UIPartyAdverTab.hpp"
#include "Wnd/Wnd.hpp"
#include "UIExpeditionTab/UIExpeditionTab.hpp"
#include "Packet/Packet.hpp"
#include "UIPartySearchTab/UIPartySearchTab.hpp"

// Level: 1 0xa0b6
class CUIPartySearch;
// Level: 1 0xa090
class CPartySearch_RemoCon;

class CUIPartySearch : public CUIWnd, public TSingleton<CUIPartySearch>
{
	// Nested
	// Fields
protected:
	ZRef<CCtrlTab> m_pTabButton;

protected:
	ZArray<ZRef<TabDlgInterface>> m_tabDialogs;

protected:
	TabPartyAdver *m_tabAdver{};

protected:
	TabPartySearch *m_tabSearch{};
	// Methods
public:
	virtual ~CUIPartySearch();

public:
	void _dtor_0();

public:
	CUIPartySearch(const CUIPartySearch &arg0);

public:
	void _ctor_3( const CUIPartySearch &arg0);

public:
	CUIPartySearch(long nDefaultTab);

public:
	void _ctor_0( long nDefaultTab);

public:
	CUIPartySearch(long nLeft, long nTop, long nDefaultTab);

public:
	void _ctor_1(long nLeft, long nTop, long nDefaultTab);

public:
	virtual void OnCreate(void *arg0);

public:
	virtual void OnDestroy();

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnMoveWnd(long l, long t);

public:
	void OnPacket(long nRetCode, CInPacket &iPacket);

public:
	void ToggleTab();

public:
	TabPartyAdver *GetTabAdver();

public:
	TabPartySearch *GetTabSearch();

public:
	void StartSearch();

public:
	void HoldSearch();

public:
	void StopSearch();

public:
	void RequestPartyAdverSearch(long nPartyQuestID);

	CLASS_RTTI_(CUIPartySearch, CUIWnd);

protected:
	long GetIdx_Of_FocusedEdit();

protected:
	void OnTabChanged(long nTab);

protected:
	TabDlgInterface *GetCurTabDlg();

public:
	CUIPartySearch &operator=(const CUIPartySearch &arg0);

public:
	static CUIPartySearch &_op_assign_27(CUIPartySearch *pThis, const CUIPartySearch &arg0);
};
STATIC_ASSERT_SIZE(CUIPartySearch, 2844);
class CPartySearch_RemoCon : public CWnd
{
	// Nested
	// Fields
	// Methods
public:
	virtual ~CPartySearch_RemoCon();

public:
	void _dtor_0();

public:
	CPartySearch_RemoCon(const CPartySearch_RemoCon &arg0);

public:
	void _ctor_1( const CPartySearch_RemoCon &arg0);

public:
	CPartySearch_RemoCon();

public:
	void _ctor_0();

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	CPartySearch_RemoCon &operator=(const CPartySearch_RemoCon &arg0);

public:
	static CPartySearch_RemoCon &_op_assign_5(CPartySearch_RemoCon *pThis, const CPartySearch_RemoCon &arg0);
};
STATIC_ASSERT_SIZE(CPartySearch_RemoCon, 128);
