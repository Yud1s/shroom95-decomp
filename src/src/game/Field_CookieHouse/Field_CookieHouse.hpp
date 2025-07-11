// Field_CookieHouse.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Field/Field.hpp"

// Level: 1 0x9385
class CBitmapNumber;
// Level: 1 0x231bf
class CField_CookieHouse;

class CBitmapNumber : public ZRefCounted
{
	// Nested
public:
	enum kNumber_Count
	{
		kNumber_Count = 10
	};
	// Fields
private:
	std::array<_x_com_ptr<IWzCanvas>, 10> m_pCanvasDigit;

private:
	_x_com_ptr<IWzCanvas> m_pCanvasSignPlus;

private:
	_x_com_ptr<IWzCanvas> m_pCanvasSignMinus;

private:
	long m_nDigitCount{};

private:
	long m_nDigitWidth{};

private:
	int32_t m_bAvailable{};
	// Methods
public:
	virtual ~CBitmapNumber();

public:
	void _dtor_0();

public:
	CBitmapNumber(const CBitmapNumber &arg0);

public:
	void _ctor_1(const CBitmapNumber &arg0);

public:
	CBitmapNumber(_x_com_ptr<IWzProperty> pProp, long nDigitCount, long nDigitWith);

public:
	void _ctor_0(_x_com_ptr<IWzProperty> pProp, long nDigitCount, long nDigitWith);

public:
	void Draw(_x_com_ptr<IWzCanvas> pCanvas, long x, long y, long nNumber);

public:
	CBitmapNumber &operator=(const CBitmapNumber &arg0);

public:
	static CBitmapNumber &_op_assign_4(CBitmapNumber *pThis, const CBitmapNumber &arg0);
};
STATIC_ASSERT_SIZE(CBitmapNumber, 72);
class CField_CookieHouse : public CField
{
	// Nested
public:
	enum kFont_Count
	{
		kFont_Count = 5
	};
	// Fields
private:
	std::array<ZRef<CBitmapNumber>, 5> m_pBN;

private:
	long m_nPoint{};

private:
	_x_com_ptr<IWzCanvas> m_pCanvasBg;

private:
	_x_com_ptr<IWzGr2DLayer> m_pLayerPoint;
	// Methods
public:
	virtual ~CField_CookieHouse();

public:
	void _dtor_0();

public:
	CField_CookieHouse(const CField_CookieHouse &arg0);

public:
	void _ctor_1(const CField_CookieHouse &arg0);

public:
	CField_CookieHouse();

public:
	void _ctor_0();

public:
	virtual void Init(void *pParam);

public:
	virtual long GetFieldType();

public:
	virtual void Update();

private:
	void _UpdatePoint();

public:
	CField_CookieHouse &operator=(CField_CookieHouse &arg0);

public:
	static CField_CookieHouse &_op_assign_7(CField_CookieHouse *pThis, CField_CookieHouse &arg0);
};
STATIC_ASSERT_SIZE(CField_CookieHouse, 3544);
