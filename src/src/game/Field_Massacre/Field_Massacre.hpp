// Field_Massacre.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Packet/Packet.hpp"
#include "Field/Field.hpp"
#include "CakePieEvent/CakePieEvent.hpp"
#include "WvsContext/WvsContext.hpp"

class CBitmapNumber;

// Level: 1 0x230e1
class CField_MassacreResult;
// Level: 1 0x230a0
class CField_Massacre;
// Level: 1 0x230f2
class CTimerboard_Massacre;

class CField_MassacreResult : public CField
{
	// Nested
	// Fields
private:
	ZRef<CBitmapNumber> m_pBN;

private:
	ZRef<CBitmapNumber> m_pBNBig;
	// Methods
public:
	virtual ~CField_MassacreResult();

public:
	void _dtor_0();

public:
	CField_MassacreResult(const CField_MassacreResult &arg0);

public:
	void _ctor_1( const CField_MassacreResult &arg0);

public:
	CField_MassacreResult();

public:
	void _ctor_0();

public:
	virtual long GetFieldType();

public:
	virtual void Init(void *pParam);

public:
	virtual void OnPacket(long nType, CInPacket &iPacket);

private:
	void OnMassacreResult(CInPacket &iPacket);

public:
	CField_MassacreResult &operator=(CField_MassacreResult &arg0);

public:
	static CField_MassacreResult &_op_assign_7(CField_MassacreResult *pThis, CField_MassacreResult &arg0);
};
STATIC_ASSERT_SIZE(CField_MassacreResult, 3504);
class CField_Massacre : public CField
{
	// Nested
public:
	enum  KEY_STATE_
{
	KEY_STATE_NONE = 255,
	KEY_STATE_OPENNING = 0,
	KEY_STATE_SHOWING = 1,
	KEY_STATE_CLOSING = 2,
	KEY_STATE_NO = 3
};
	// Fields
private:
	ZRef<CBitmapNumber> m_pBN;

private:
	ZRef<CBitmapNumber> m_pBNSkill;

private:
	_x_com_ptr<IWzCanvas> m_pCanvasCountBg;

private:
	_x_com_ptr<IWzCanvas> m_pCanvasKeyBg;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerCount;

private:
	std::array<_x_com_ptr<IWzGr2DLayer>, 3> m_pLayerKey;

private:
	long m_nKeyState{};

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerGaugeBg;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerGauge;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerGaugeText;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerGaugeBgD;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerGaugeIconD;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerGaugeTextD;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerGaugeDanger;

private:
	int32_t m_bDisableSkill{};

private:
	int32_t m_bKeyAnimation{};

private:
	long m_nHit{};

private:
	long m_nMiss{};

private:
	long m_nCool{};

private:
	long m_nSkill{};

private:
	long m_nGaugeTotal{};

private:
	long m_nGaugeDec{};

private:
	long m_nTimer{};

private:
	long m_nIncGauge{};

private:
	ZRef<CTimerboard_Massacre> m_pTimerboard;

private:
	int32_t m_bShowedClearEffect{};
	// Methods
public:
	virtual ~CField_Massacre();

public:
	void _dtor_0();

public:
	CField_Massacre(const CField_Massacre &arg0);

public:
	void _ctor_1( const CField_Massacre &arg0);

public:
	CField_Massacre();

public:
	void _ctor_0();

public:
	virtual long GetFieldType();

public:
	virtual void Init(void *pParam);

public:
	virtual void Update();

public:
	virtual void OnPacket(long nType, CInPacket &iPacket);

protected:
	virtual void OnClock(CInPacket &iPacket);

protected:
	void OnMassacreIncGauge(CInPacket &iPacket);

public:
	virtual int32_t CanUseSpecialArts();

private:
	int32_t _SetMassacreInfo(const CWvsContext::Massacre &massacre_info);

private:
	void _UpdatePoint();

private:
	void _SetDecGauge(long nVal);

private:
	void UpdateKeyAnimation();

public:
	CField_Massacre &operator=(CField_Massacre &arg0);

public:
	static CField_Massacre &_op_assign_14(CField_Massacre *pThis, CField_Massacre &arg0);
};
STATIC_ASSERT_SIZE(CField_Massacre, 3616);
class CTimerboard_Massacre : public CClock
{
	// Nested
public:
	
enum  k
{
	kWidth = 192,
	kHeight = 61
};
	// Fields
private:
	_x_com_ptr<IWzCanvas> m_pSrcCanvas;

private:
	_x_com_ptr<IWzProperty> m_pTimerFont;
	// Methods
public:
	virtual ~CTimerboard_Massacre();

public:
	void _dtor_0();

public:
	CTimerboard_Massacre(const CTimerboard_Massacre &arg0);

public:
	void _ctor_1( const CTimerboard_Massacre &arg0);

public:
	CTimerboard_Massacre();

public:
	void _ctor_0();

public:
	virtual void OnCreate(void *pData);

public:
	virtual void Draw(const tagRECT *pRect);

public:
	long GetRemainSec();

protected:
	virtual _x_com_ptr<IWzProperty> GetFontTime();

protected:
	virtual void LoadClockCanvas(ZArray<_x_com_ptr<IWzCanvas>> &apClockCanvas, _x_com_ptr<IWzProperty> pClockDigit);

public:
	CTimerboard_Massacre &operator=(const CTimerboard_Massacre &arg0);

public:
	static CTimerboard_Massacre &_op_assign_8(CTimerboard_Massacre *pThis, const CTimerboard_Massacre &arg0);
};
STATIC_ASSERT_SIZE(CTimerboard_Massacre, 228);


