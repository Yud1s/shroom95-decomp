// ChatBalloon.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

// Level: 0 0x5bc0
class CChatBalloon;

class CChatBalloon
{
	// Nested
public:
	enum BUTTON_STATE_
	{
		BUTTON_STATE_NORMAL = 0,
		BUTTON_STATE_PRESSED = 1,
		BUTTON_STATE_DISABLED = 2,
		BUTTON_STATE_MOUSEOVER = 3,
		BUTTON_STATE_NO = 4
	};
	enum LAYER_ALPHA
	{
		LAYER_ALPHA = 253
	};
	// Fields
protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerChat;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerAD;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerGameState;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerShop;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerBack;

protected:
	_x_com_ptr<IWzGr2DLayer> m_pLayerEffect;

protected:
	std::array<_x_com_ptr<IWzCanvas>, 4> m_pButton{};

protected:
	long m_nADPosX{};

protected:
	long m_nADPosY{};

protected:
	long m_nADButtonPosX{};

protected:
	long m_nADButtonPosY{};

protected:
	int32_t m_bADButtonPressed{};

protected:
	long m_tChatBegin{};

protected:
	long m_tTimeOut{};

protected:
	long m_nPosX{};

protected:
	long m_nPosY{};

protected:
	long m_nHeight{};

protected:
	int32_t m_bMiniRoomBalloon{};

protected:
	int32_t m_bAbbreviated{};

protected:
	long m_nCanvasWidth{};

protected:
	long m_nCanvasHeight{};

protected:
	long m_tFadeDalay{};
	// Methods
public:
	virtual ~CChatBalloon();

public:
	void _dtor_0();

public:
	CChatBalloon(const CChatBalloon &arg0);

	CTOR_DEFAULT(CChatBalloon)
public:
	void _ctor_1(const CChatBalloon &arg0);

public:
	CChatBalloon();

public:
	void _ctor_0();

public:
	int32_t IsBalloonOn();

public:
	int32_t IsAbbreviated();

public:
	void MakeBalloon(Ztl_bstr_t arg0, _x_com_ptr<IWzGr2DLayer> arg1, _x_com_ptr<IWzVector2D> arg2, long arg3, long arg4, long arg5, int32_t arg6, long arg7, long arg8);

public:
	void MakeMobBalloon(Ztl_bstr_t bsText, _x_com_ptr<IWzGr2DLayer> pLayerOverlay, _x_com_ptr<IWzVector2D> pVectorOrigin, long tTimeOut, long nChatBalloon, long nFadeDelay, long nWidth);

public:
	void MakeScreenBalloon(_x_com_ptr<IWzProperty> pProp, Ztl_bstr_t bsText, long nChatBalloon, long tTimeOut, long nWidth);

public:
	void DestroyBalloon();

public:
	void MakeMiniRoomBalloon(long arg0, Ztl_bstr_t arg1, long arg2, _x_com_ptr<IWzVector2D> arg3, int32_t arg4, long arg5, long arg6, long arg7, int32_t arg8);

public:
	void DestroyMiniRoomBalloon();

public:
	void GetMiniRoomBalloonRect(tagRECT &rc);

public:
	void MakeADBoardBalloon(Ztl_bstr_t bsText, _x_com_ptr<IWzGr2DLayer> pLayerOveray, _x_com_ptr<IWzVector2D> pVectorOrigin, int32_t bCloseButton);

public:
	void DestoryADBoardBallon();

public:
	void ADBoardMouseMove(tagPOINT pt);

public:
	void ADBoardMouseDown(tagPOINT pt);

public:
	int32_t ADBoardMouseUp(tagPOINT pt);

public:
	int32_t MousePointCheck(tagPOINT pt);

public:
	void AdjustCoordY(long nHeight);

public:
	void CheckTimeOut(int32_t bOnRotating);

public:
	void SetFadeDelay(long nDelay);

protected:
	_x_com_ptr<IWzCanvas> CreateCanvas(Ztl_bstr_t bsText, uint32_t uFontColor, _x_com_ptr<IWzProperty> pProp, long nType, long nWidth);

public:
	CChatBalloon &operator=(const CChatBalloon &arg0);

public:
	static CChatBalloon &_op_assign_22(CChatBalloon *pThis, const CChatBalloon &arg0);
};
STATIC_ASSERT_SIZE(CChatBalloon, 104);
