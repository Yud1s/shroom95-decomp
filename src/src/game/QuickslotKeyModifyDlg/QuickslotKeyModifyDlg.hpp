// QuickslotKeyModifyDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "CtrlButton/CtrlButton.hpp"
#include "Dialog/Dialog.hpp"

// Level: 1 0xda57
class CQuickslotKeyModifyDlg;

class CQuickslotKeyModifyDlg : public CDialog
{
	// Nested
public:
	class CCtrlButtonDisableSpaceKey : public CCtrlButton
	{
		// Nested
		// Fields
		// Methods
	public:
		virtual ~CCtrlButtonDisableSpaceKey();

	public:
		void _dtor_0();

	public:
		CCtrlButtonDisableSpaceKey(const CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey &arg0);

	public:
		void _ctor_1( const CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey &arg0);

	public:
		CCtrlButtonDisableSpaceKey();

	public:
		void _ctor_0();

	public:
		virtual void OnKey(uint32_t wParam, int32_t lParam);

	public:
		CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey &operator=(const CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey &arg0);

	public:
		static CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey &_op_assign_4(CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey *pThis, const CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey &arg0);
	};
	// Fields
protected:
	std::array<long, 8> m_anCurrentQuickslotInfo{};

protected:
	long m_nCurrentCtrlFocus{};

protected:
	long m_nCurrentSlotFocus{};

protected:
	long m_nCurrentOkCancleFocus{};

protected:
	std::array<ZRef<CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey>, 8> m_apBtQuickslotKeyInvisible;

protected:
	ZRef<CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey> m_pBtQuickslotKeyOk;

protected:
	ZRef<CQuickslotKeyModifyDlg::CCtrlButtonDisableSpaceKey> m_pBtQuickslotKeyCancle;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pKeyLayer;
	// Methods
public:
	virtual ~CQuickslotKeyModifyDlg();

public:
	void _dtor_0();

public:
	CQuickslotKeyModifyDlg(const CQuickslotKeyModifyDlg &arg0);

public:
	void _ctor_1( const CQuickslotKeyModifyDlg &arg0);

public:
	CQuickslotKeyModifyDlg();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void Draw(const tagRECT *arg0);

public:
	long *GetChangeInfo();

protected:
	void SetCtrlFocus();

protected:
	void SetSlotFocus(long nChangeslot);

protected:
	void SetOkCancleFocus(uint32_t InputKey);

protected:
	void ClearAllFocus();

protected:
	void GetSlotPos(long nIdx, long &nleft, long &nTop);

protected:
	void ModifyQuickslotKeyMap(uint32_t wParam, int32_t lParam);

protected:
	int32_t CheckAbaliableKey(long nKeyIdx);

protected:
	int32_t IsUsedKey(long nKeyIdx);
	CLASS_RTTI_(CQuickslotKeyModifyDlg, CDialog);

public:
	CQuickslotKeyModifyDlg &operator=(const CQuickslotKeyModifyDlg &arg0);

public:
	static CQuickslotKeyModifyDlg &_op_assign_20(CQuickslotKeyModifyDlg *pThis, const CQuickslotKeyModifyDlg &arg0);
};
STATIC_ASSERT_SIZE(CQuickslotKeyModifyDlg, 272);
