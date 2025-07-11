// Field_Dojang.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Field/Field.hpp"
#include "Packet/Packet.hpp"

// Level: 1 0x231ab
class CField_Dojang;

class CField_Dojang : public CField
{
	// Nested
public:
	enum kDigit_Count
	{
		kDigit_Count = 10
	};
	// Fields
private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerPlayer;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerClock;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerMonster;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerEnergy;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerEnergyFull;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerPlayerGage;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerMonsterGage;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerEnergyGage;

private:
	long m_nPlayerHP{};

private:
	long m_nPlayerMHP{};

private:
	long m_nMonsterHPPercentage{};

private:
	long m_nEnergy{};

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerTimer;

private:
	std::array<_x_com_ptr<IWzCanvas>, 10> m_pCanvasDigit;

private:
	unsigned long m_tTimeOver{};

private:
	long m_tDurationSec{};
	// Methods
public:
	virtual ~CField_Dojang();

public:
	void _dtor_0();

public:
	CField_Dojang(const CField_Dojang &arg0);

public:
	void _ctor_1(const CField_Dojang &arg0);

public:
	CField_Dojang();

public:
	void _ctor_0();

public:
	virtual void Init(void *pParam);

public:
	virtual long GetFieldType();

public:
	virtual void Update();

public:
	virtual int32_t CanUseSpecialArts();

protected:
	virtual void OnClock(CInPacket &iPacket);

private:
	void UpdateTimer();

private:
	void DrawDigit(long x, long y, unsigned long dwNumber);

public:
	CField_Dojang &operator=(CField_Dojang &arg0);

public:
	static CField_Dojang &_op_assign_10(CField_Dojang *pThis, CField_Dojang &arg0);
};
STATIC_ASSERT_SIZE(CField_Dojang, 3592);
