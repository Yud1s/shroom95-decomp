// BookDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UIToolTip/UIToolTip.hpp"
#include "Wnd/Wnd.hpp"
#include "CtrlWnd/CtrlWnd.hpp"

// Level: 0 0xada7
struct CT_INFO;
// Level: 1 0x1062d
class CBookDlg;

struct CT_INFO
{
	// Nested
	// Fields
public:
	long nType{};

public:
	long nItemNo{};

public:
	long nLine{};

public:
	_x_com_ptr<IWzFont> pFont;

public:
	ZXString<char> sText;

public:
	_x_com_ptr<IWzCanvas> pIcon;

public:
	long nLeft{};

public:
	long nTop{};

public:
	long nWidth{};

public:
	long nHeight{};

public:
	long nSelect{};

public:
	long nUnderLine{};

public:
	int32_t bLineChange{};

public:
	long nFuncCode{};

public:
	int32_t bReward{};

public:
	long nNpcNo{};

public:
	long nMapNo{};
	// Methods
public:
	~CT_INFO();

public:
	void _dtor_0();

public:
	CT_INFO(const CT_INFO &arg0);

public:
	void _ctor_1(const CT_INFO &arg0);

public:
	CT_INFO();

public:
	void _ctor_0();

public:
	CT_INFO &operator=(const CT_INFO &__that);

public:
	static CT_INFO &_op_assign_3(CT_INFO *pThis, const CT_INFO &__that);
};
STATIC_ASSERT_SIZE(CT_INFO, 68);
class CBookDlg : public CWnd, public TSingleton<CBookDlg>
{
	// Nested
public:
	enum ID_CTRL_BT_
{
	ID_CTRL_BT_PREV = 1000,
	ID_CTRL_BT_NEXT = 1001
};
	// Fields
protected:
	long m_nItemID{};

protected:
	long m_nCurPage{};

protected:
	long m_nLastPage{};

protected:
	long m_nSelect{};

protected:
	CUIToolTip m_uiToolTip;

protected:
	std::array<ZArray<ZArray<CT_INFO>>, 2> m_aaCT;

protected:
	ZArray<_x_com_ptr<IWzFont>> m_apFont;

protected:
	_x_com_ptr<IWzProperty> m_pBook;

protected:
	std::array<_x_com_ptr<IWzCanvas>, 2> m_apDot;

protected:
	ZRef<CCtrlButton> m_pBtPrev;

protected:
	ZRef<CCtrlButton> m_pBtNext;

protected:
	ZRef<CCtrlButton> m_pBtClose;
	// Methods
public:
	virtual ~CBookDlg();

public:
	void _dtor_0();

public:
	CBookDlg(const CBookDlg &arg0);

public:
	void _ctor_1(const CBookDlg &arg0);

public:
	CBookDlg();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual int32_t OnSetFocus(int32_t bFocus);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void ClearToolTip();

public:
	void SetBookItem(long nItemID);

protected:
	void SetPage(long arg0);

protected:
	void SetCtrlEnabled();

protected:
	void CheckMousePoint(long rx, long ry);

public:
	CBookDlg &operator=(const CBookDlg &arg0);

public:
	static CBookDlg &_op_assign_16(CBookDlg *pThis, const CBookDlg &arg0);
};
STATIC_ASSERT_SIZE(CBookDlg, 2824);



void __cdecl PcCreateObject__com_ptr_t__com_IIID_IWzFont___GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac___(const wchar_t *sUOL, _x_com_ptr<IWzFont> &pObj, IUnknown *pUnkOuter);
