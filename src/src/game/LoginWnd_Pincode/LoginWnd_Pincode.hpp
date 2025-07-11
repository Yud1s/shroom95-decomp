// LoginWnd_Pincode.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CtrlWnd/CtrlWnd.hpp"
#include "FadeWnd/FadeWnd.hpp"

class CCtrlEdit;

// Level: 0 0x22148
struct CPinCodeDlg_MODAL_OWNER;
// Level: 1 0x220d0
class CPinCodeDlg;

struct CPinCodeDlg_MODAL_OWNER
{
	// Nested
	// Fields
public:
	CPinCodeDlg *m_pDlg{};
	// Methods
public:
	~CPinCodeDlg_MODAL_OWNER();

public:
	void _dtor_0();

public:
	CPinCodeDlg_MODAL_OWNER(CPinCodeDlg *arg0);

public:
	void _ctor_1( CPinCodeDlg *arg0);
};
STATIC_ASSERT_SIZE(CPinCodeDlg_MODAL_OWNER, 4);
class CPinCodeDlg : public CFadeWnd
{

public:
	struct MODAL_OWNER
	{
	public:
		MODAL_OWNER()
		{
		}
		void _ctor_0() { }
		~MODAL_OWNER()
		{
		}
	};
	// Nested
public:
enum  ID_CTRL_
{
	ID_CTRL_BT_OK = 1000,
	ID_CTRL_BT_CANCEL = 1001,
	ID_CTRL_BT_CHGPIN = 1002,
	ID_CTRL_EDIT_PINCODE = 1003
};
enum  PU_
{
	PU_YESNO = 0,
	PU_CREATION = 1,
	PU_NOTICE = 2,
	PU_PINCODE = 3
};
	// Fields
protected:
	long m_nRet{};

protected:
	int32_t m_bTerminate{};

protected:
	long m_nType{};

protected:
	long m_nMsg{};

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasText;

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlEdit> m_pEditBirthDate;

protected:
	ZRef<CCtrlEdit> m_pEditPinCode;

protected:
	ZRef<CPinCodeDlg> m_pDlg;

protected:
	int32_t m_bCheck{};

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerScroll;

protected:
	ZXString16 m_sScrollNotice;
	// Methods
public:
	virtual ~CPinCodeDlg();

public:
	void _dtor_0();

public:
	CPinCodeDlg(const CPinCodeDlg &arg0);

public:
	void _ctor_1( const CPinCodeDlg &arg0);

public:
	CPinCodeDlg();

public:
	void _ctor_0();

public:
	static int32_t __cdecl YesNo(long nMsg, ZRef<CDialog> *ppDialog);

public:
	static void __cdecl Notice(long nMsg);

public:
	static long __cdecl CreatePinCode(ZRef<CDialog> *ppDialog);

public:
	static long __cdecl ConfirmPinCode(ZRef<CDialog> *ppDialog);

public:
	static long __cdecl AssignPinCode(ZRef<CDialog> *ppDialog, long nMsg);

public:
	static long __cdecl EnterPinCode(ZRef<CDialog> *ppDialog, long nMsg, long *nPinCode);

public:
	static void __cdecl ScrollNotice(ZXString16 arg0);

public:
	void Init_(long arg0, ZXString16 arg1);

public:
	void Init(long nType, long nMsg);

public:
	virtual void SetRet(long nRet);

public:
	long DoModal();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void Delete();

public:
	virtual void OnPreFadeIn();

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	CPinCodeDlg &operator=(const CPinCodeDlg &arg0);

public:
	static CPinCodeDlg &_op_assign_21(CPinCodeDlg *pThis, const CPinCodeDlg &arg0);
};
STATIC_ASSERT_SIZE(CPinCodeDlg, 316);


