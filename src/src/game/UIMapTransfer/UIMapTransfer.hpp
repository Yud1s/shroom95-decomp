// UIMapTransfer.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "LayoutMan/LayoutMan.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "Dialog/Dialog.hpp"

class CCtrlEdit;
class CCtrlScrollBar;

// Level: 1 0xf147
class CUIMapTransfer;

class CUIMapTransfer : public CDialog, public TSingleton<CUIMapTransfer>
{
	// Nested
	// Fields

	SINGLETON_PAD;

protected:
	ZRef<CCtrlButton> m_pBtRegister;

protected:
	ZRef<CCtrlButton> m_pBtDelete;

protected:
	ZRef<CCtrlButton> m_pBtMove;

protected:
	ZRef<CCtrlButton> m_pBtClose;

protected:
	ZRef<CCtrlEdit> m_pEditTarget;

protected:
	ZRef<CCtrlScrollBar> m_pSB;

protected:
	long m_nSelected{};

protected:
	long m_nListCount{};

protected:
	std::array<unsigned long, 10> m_adwFieldList;

protected:
	_x_com_ptr<IWzCanvas> m_pCanvasSelect;

protected:
	_x_com_ptr<IWzFont> m_pFontBlack;

protected:
	_x_com_ptr<IWzFont> m_pFontWhite;

protected:
	_x_com_ptr<IWzFont> m_pFontSmallWhite;

protected:
	_x_com_ptr<IWzFont> m_pFontSmallBlack;

protected:
	int32_t m_bCanTransferContinent{};

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CUIMapTransfer();

public:
	void _dtor_0();

public:
	CUIMapTransfer(const CUIMapTransfer &arg0);

public:
	void _ctor_1( const CUIMapTransfer &arg0);

public:
	CUIMapTransfer(int32_t bCanTransferContinent);

public:
	void _ctor_0( int32_t bCanTransferContinent);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void SetRet(long nRet);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual void Update();

public:
	virtual void OnChildNotify(uint32_t nId, uint32_t param1, uint32_t param2);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	void GetResult(ZXString<char> &sTarget, unsigned long &dwTargetField);

public:
	void UpdateFieldList(unsigned long *aFieldList, int32_t bCanTransferContinent);

protected:
	void OnRegister();

protected:
	void OnDelete();

protected:
	void DeleteSelectedField();

protected:
	int32_t GetMapIndexFromPoint(long rx, long ry);

public:
	CUIMapTransfer &operator=(const CUIMapTransfer &arg0);

public:
	static CUIMapTransfer &_op_assign_17(CUIMapTransfer *pThis, const CUIMapTransfer &arg0);
};
STATIC_ASSERT_SIZE(CUIMapTransfer, 288);
