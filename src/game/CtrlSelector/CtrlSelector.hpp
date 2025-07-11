// CtrlSelector.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Wnd/Wnd.hpp"
#include "CtrlWnd/CtrlWnd.hpp"

// Level: 1 0xbd54
class CCtrlSelector;

class CCtrlSelector : public CCtrlWnd
{
	// Nested
public:
	struct VISIBLE_ITEM
	{
		// Nested
		// Fields
	public:
		long nIdx{};

	public:
		ZXString<char> sText;

	public:
		tagRECT rect{};
		// Methods
	public:
		~VISIBLE_ITEM();

	public:
		void _dtor_0();

	public:
		VISIBLE_ITEM(const CCtrlSelector::VISIBLE_ITEM &arg0);

	public:
		void _ctor_1( const CCtrlSelector::VISIBLE_ITEM &arg0);

	public:
		VISIBLE_ITEM();

	public:
		void _ctor_0();

	public:
		CCtrlSelector::VISIBLE_ITEM &operator=(const CCtrlSelector::VISIBLE_ITEM &arg0);

	public:
		static CCtrlSelector::VISIBLE_ITEM &_op_assign_3(CCtrlSelector::VISIBLE_ITEM *pThis, const CCtrlSelector::VISIBLE_ITEM &arg0);
	};
	// Fields
protected:
	long m_nCurSel{};

protected:
	long m_nNo{};

protected:
	long m_nNoPerPage{};

protected:
	long m_nPageNo{};

protected:
	long m_nCurPage{};

protected:
	long m_nCurMouseOver{};

protected:
	int32_t m_bCenterAlign{};

protected:
	int32_t m_bEmphasize{};

protected:
	long m_clrBackgrnd{};

protected:
	ZArray<ZXString<char>> m_aText;

protected:
	ZArray<CCtrlSelector::VISIBLE_ITEM> m_aVisibleSelector;

protected:
	_x_com_ptr<IWzFont> m_pFontBasic;

protected:
	_x_com_ptr<IWzFont> m_pFontMouseOver;
	// Methods
public:
	virtual ~CCtrlSelector();

public:
	void _dtor_0();

public:
	CCtrlSelector(const CCtrlSelector &arg0);

public:
	void _ctor_1( const CCtrlSelector &arg0);

public:
	CCtrlSelector();

public:
	void _ctor_0();

public:
	virtual void CreateCtrl(CWnd *pParent, uint32_t nId, long l, long t, long w, void *pData);

public:
	void SetSelectorStart(long nNo, long nNoPerPage, int32_t bCenterAlign, int32_t bEmphasize);

public:
	void SetSelector(long nIdx, ZXString<char> sText);

public:
	void SetSelectorEnd();

public:
	void SetSelectorAttr(long clrBackgrnd, long clrBasic, long clrMouseOver);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void OnMouseEnter(int32_t bEnter);

public:
	virtual void Draw(long rx, long ry, const tagRECT *pRect);

public:
	void SetCurSel(long nCurSel);

public:
	long GetCurSel() const;

public:
	long GetCount() const;

protected:
	void ResetVisible();
	CLASS_RTTI_(CCtrlSelector, CCtrlWnd);

public:
	CCtrlSelector &operator=(const CCtrlSelector &arg0);

public:
	static CCtrlSelector &_op_assign_19(CCtrlSelector *pThis, const CCtrlSelector &arg0);
};
STATIC_ASSERT_SIZE(CCtrlSelector, 104);
