// RPSGameDlg.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"
#include "AdminShopDlg/AdminShopDlg.hpp"
#include "CtrlWnd/CtrlWnd.hpp"

// Level: 1 0x20a51
class CRPSGameDlg;

class CRPSGameDlg : public CUniqueModeless
{
	// Nested
public:
	enum  ID_CTRL_BT_
{
	ID_CTRL_BT_ROCK = 2000,
	ID_CTRL_BT_PAPER = 2001,
	ID_CTRL_BT_SCISSOR = 2002,
	ID_CTRL_BT_START = 3000,
	ID_CTRL_BT_CONTINUE = 3001,
	ID_CTRL_BT_RETRY = 3002,
	ID_CTRL_BT_EXIT = 3003
};
	// Fields
protected:
	int32_t m_bRequestSent{};

protected:
	unsigned long m_dwNpcTemplateID{};

protected:
	long m_tShowResult{};

protected:
	long m_nUserSelect{};

protected:
	long m_nNpcSelect{};

protected:
	long m_nNpcCurShown{};

protected:
	long m_tLastSwitched{};

protected:
	long m_tSwitchingTerm{};

protected:
	long m_tLimit{};

protected:
	long m_nCntStraightVictories{};

protected:
	long m_bReceiveCompensation{};

protected:
	long m_tShowResultLayer{};

protected:
	long m_tEndResult{};

protected:
	uint32_t m_nLastTipOption{};

protected:
	long m_nCurTipLength{};

protected:
	long m_nTipPos{};

protected:
	ZXString<char> m_sTip;

protected:
	ZRef<CCtrlButton> m_pBtMain;

protected:
	std::array<ZRef<CCtrlButton>, 3> m_pBtRPS;

protected:
	ZRef<CCtrlButton> m_pBtExit;

protected:
	ZRef<CAvatar> m_pAvatar;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerNpc;

protected:
	std::array<std::array<_x_com_ptr<IWzCanvas>, 3>, 2> m_pCanvasRPS;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerResult;

protected:
	std::array<_x_com_ptr<IWzCanvas>, 4> m_pCanvasResult;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerTip;
	// Methods
public:
	virtual ~CRPSGameDlg();

public:
	void _dtor_0();

public:
	CRPSGameDlg(const CRPSGameDlg &arg0);

public:
	void _ctor_1( const CRPSGameDlg &arg0);

public:
	CRPSGameDlg(unsigned long dwNpcTemplateID);

public:
	void _ctor_0( unsigned long dwNpcTemplateID);

public:
	virtual void OnCreate(void *pData);

public:
	virtual int32_t HitTest(long rx, long ry, CCtrlWnd **ppCtrl);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	virtual void OnButtonClicked(uint32_t nId);

public:
	virtual void Update();

public:
	virtual void OnKey(uint32_t wParam, int32_t lParam);

protected:
	void ShowResult();

protected:
	void SetMainButton(long nType);

protected:
	void SetUserAvatar();

protected:
	void SetNpc();

protected:
	void OnBtStart();

protected:
	void OnBtContinue();

protected:
	void OnBtRetry();

protected:
	void OnBtExit();

protected:
	void SendSelection(long nRPS);

protected:
	void ProcessPacket(long nType, CInPacket &iPacket);

public:
	static void __cdecl OnPacket(CInPacket &iPacket);
	CLASS_RTTI_(CRPSGameDlg, CUniqueModeless);

public:
	CRPSGameDlg &operator=(const CRPSGameDlg &arg0);

public:
	static CRPSGameDlg &_op_assign_23(CRPSGameDlg *pThis, const CRPSGameDlg &arg0);
};
STATIC_ASSERT_SIZE(CRPSGameDlg, 316);


