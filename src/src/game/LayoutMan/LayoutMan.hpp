// LayoutMan.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Wnd/Wnd.hpp"
#include "CtrlButton/CtrlButton.hpp"

class CCtrlOriginButton;

// Level: 0 0x3213
class CLayoutMan;

// class CCtrlButton;
// struct CCtrlButton::CREATEPARAM;

class CLayoutMan
{
	// Nested
	// Fields
private:
	CWnd *m_pWnd{};

private:
	long m_nOffsetX{};

private:
	long m_nOffsetY{};

private:
	ZArray<_x_com_ptr<IWzGr2DLayer>> m_aLayer;

private:
	ZArray<ZRef<CCtrlOriginButton>> m_aButton;
	// Methods
public:
	~CLayoutMan();

public:
	void _dtor_0();

public:
	CLayoutMan(const CLayoutMan &arg0);

public:
	void _ctor_1( const CLayoutMan &arg0);

public:
	CLayoutMan();

public:
	void _ctor_0();

public:
	void Init(CWnd *pWnd, long nOffsetX, long nOffsetY);

public:
	_x_com_ptr<IWzGr2DLayer> AddLayer(const wchar_t *sLayerUOL, long z, int32_t bManaged);

public:
	_x_com_ptr<IWzGr2DLayer> AddSingleLayer(const wchar_t *sLayerUOL, long z, int32_t bManaged);

public:
	_x_com_ptr<IWzGr2DLayer> AddSingleLayerRemoveOrigin(const wchar_t *sLayerUOL, long z, int32_t bManaged);

public:
	ZRef<CCtrlOriginButton> AddButton(const wchar_t *sButtonUOL, uint32_t nID, long nOffsetX, long nOffsetY, CCtrlButton::CREATEPARAM *pParam);

public:
	int32_t CopyToCanvas(_x_com_ptr<IWzCanvas> pCanvas, const wchar_t *sSrcUOL, long nOffsetX, long nOffsetY);
	int32_t CopyToCanvas_1(_x_com_ptr<IWzCanvas> pCanvas, const wchar_t *sSrcUOL, long nOffsetX, long nOffsetY) {
		return this->CopyToCanvas(pCanvas, sSrcUOL, nOffsetX, nOffsetY);
	}

public:
	int32_t CopyToCanvas(_x_com_ptr<IWzCanvas> pCanvas, _x_com_ptr<IWzCanvas> pSrcCanvas, long nOffsetX, long nOffsetY);
	int32_t CopyToCanvas_0(_x_com_ptr<IWzCanvas> pCanvas, _x_com_ptr<IWzCanvas> pSrcCanvas, long nOffsetX, long nOffsetY) {
		return this->CopyToCanvas(pCanvas, pSrcCanvas, nOffsetX, nOffsetY);
	}
	

public:
	static _x_com_ptr<IWzGr2DLayer> __cdecl CopyToEmptyLayer(_x_com_ptr<IWzGr2DLayer> pSrcLayer);

public:
	static _x_com_ptr<IWzGr2DLayer> __cdecl CopyToEmptyLayerOverlay(_x_com_ptr<IWzGr2DLayer> pSrcLayer, long z);

public:
	CLayoutMan &operator=(const CLayoutMan &arg0);

public:
	static CLayoutMan &_op_assign_12(CLayoutMan *pThis, const CLayoutMan &arg0);
};
STATIC_ASSERT_SIZE(CLayoutMan, 20);
