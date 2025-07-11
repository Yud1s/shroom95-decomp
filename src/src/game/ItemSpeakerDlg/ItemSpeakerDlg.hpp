// ItemSpeakerDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "UIToolTip/UIToolTip.hpp"
#include "CtrlWnd/CtrlWnd.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"
#include "LayoutMan/LayoutMan.hpp"

// Level: 1 0x112af
class CItemSpeakerDlg;

class CItemSpeakerDlg : public CUniqueModeless
{
	// Nested
public:
	enum ID_CTRL_
	{
		ID_CTRL_CHECKBOX_WHISPER = 1000,
		ID_CTRL_EDIT_INPUT = 1001
	};

	// Fields
private:
	long _nPOS{};

private:
	long _nItemID{};

private:
	long _nTargetTI{};

private:
	long _nTargetPOS{};

private:
	ZRef<GW_ItemSlotBase> _pItem;

private:
	CUIToolTip _uiTooltip;

private:
	ZRef<CCtrlCheckBox> _pCheckBoxWhisper;

private:
	ZRef<CCtrlEdit> _pEditInput;

private:
	ZRef<CCtrlButton> _pBtOK;

private:
	ZRef<CCtrlButton> _pBtCancel;

private:
	ZRef<CCtrlButton> _pBtClose;

private:
	_x_com_ptr<IWzGr2DLayer> _pItemLayer;

private:
	_x_com_ptr<IWzGr2DLayer> _pTextLayer;

private:
	CLayoutMan m_lm;
	// Methods
public:
	virtual ~CItemSpeakerDlg();

public:
	void _dtor_0();

public:
	CItemSpeakerDlg(const CItemSpeakerDlg &arg0);

public:
	void _ctor_1(const CItemSpeakerDlg &arg0);

public:
	CItemSpeakerDlg(long nPOS, long nItemID);

public:
	void _ctor_0(long nPOS, long nItemID);

public:
	virtual void OnCreate(void *pData);

public:
	virtual void OnMouseButton(uint32_t msg, uint32_t wParam, long rx, long ry);

public:
	virtual int32_t OnMouseMove(long rx, long ry);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

public:
	int32_t PutItem(long nTI, long nPOS);

private:
	int32_t _InItemRect(long rx, long ry);

private:
	int32_t _SendConsumeCashItemUseRequest();
	CLASS_RTTI_(CItemSpeakerDlg, CUniqueModeless);

public:
	CItemSpeakerDlg &operator=(const CItemSpeakerDlg &arg0);

public:
	static CItemSpeakerDlg &_op_assign_15(CItemSpeakerDlg *pThis, const CItemSpeakerDlg &arg0);
};
STATIC_ASSERT_SIZE(CItemSpeakerDlg, 2872);
