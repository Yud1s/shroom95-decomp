// RandomMorphDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "AdminShopDlg/AdminShopDlg.hpp"

// Level: 1 0x1590
class CUIRandomMorphDlg;

class CUIRandomMorphDlg : public CUniqueModeless
{
	// Nested
public:
enum  ID_CTRL_
{
	ID_CTRL_BT_OK = 0,
	ID_CTRL_BT_CANCEL = 1,
	ID_CTRL_EDIT_TARGET = 2
};
	// Fields
protected:
	ZXString<char> m_sTarget;

protected:
	ZRef<CCtrlButton> m_pBtOK;

protected:
	ZRef<CCtrlButton> m_pBtCancel;

protected:
	ZRef<CCtrlEdit> m_pEditTarget;

protected:
	long m_nInvenPOS{};

protected:
	long m_nItemID{};
	// Methods
public:
	virtual ~CUIRandomMorphDlg();

public:
	void _dtor_0();

public:
	CUIRandomMorphDlg(const CUIRandomMorphDlg &arg0);

public:
	void _ctor_1( const CUIRandomMorphDlg &arg0);

public:
	CUIRandomMorphDlg(long nPOS, long nItemID);

public:
	void _ctor_0( long nPOS, long nItemID);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	static void __cdecl ShowDlg(long nPOS, long nItemID);

public:
	ZXString<char> &GetTargetName();

protected:
	void SetSearchName(ZXString<char> arg0);

protected:
	int32_t _SendMorphRequest();

protected:
	void _CloseDlg(int32_t nRetCode);
	CLASS_RTTI_(CUIRandomMorphDlg, CUniqueModeless);

public:
	CUIRandomMorphDlg &operator=(const CUIRandomMorphDlg &arg0);

public:
	static CUIRandomMorphDlg &_op_assign_15(CUIRandomMorphDlg *pThis, const CUIRandomMorphDlg &arg0);
};
STATIC_ASSERT_SIZE(CUIRandomMorphDlg, 184);

