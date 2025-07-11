// MY_UInt128.hpp
#pragma once
#include <array>
#include <stdint.h>

#include "uint128.h"
//#include "util/base.h"
//#include "pcom/wz.h"


class MY_UINT128
{
	// Nested
	// Fields
private:
	//std::array<unsigned long, 4> m_data{};
	UIntN<128> m_inner;
	// Methods
public:
	MY_UINT128(size_t value, size_t shiftLeft);;
	MY_UINT128(const MY_UINT128 &value, uint32_t numBits);

public:
	void _ctor_0( const MY_UINT128 &value, uint32_t numBits);

	void _ctor_default()
	{
		new(this) MY_UINT128();
	}


	bool op_bool()
	{
		return static_cast<bool>(m_inner);
	}

	bool op_neg() const
	{
		return !m_inner;
	}

public:
	MY_UINT128(unsigned long value);

public:
	void _ctor_1( unsigned long value);

public:
	MY_UINT128(MY_UINT128& value, uint32_t numBits);

public:
	void _ctor_2(MY_UINT128& value, uint32_t numBits);

public:
	MY_UINT128();

public:
	void _ctor_0();

	int compareTo_0(const MY_UINT128& other);

	int compareTo_1(const uint32_t value) const
	{
		return compareTo(value);
	}

public:
	bool checkFlag(MY_UINT128& other);


	uint32_t getBitNumber(uint32_t bit) const;

public:
	MY_UINT128 &setBitNumber(uint32_t bit, uint32_t value);

public:
	MY_UINT128 &setValue(uint64_t arg0);

public:
	MY_UINT128 &setValue(unsigned long value);

public:
	MY_UINT128 &setValue(const MY_UINT128 &value);

	MY_UINT128 &setValue_0(const MY_UINT128 &value)
	{
		setValue(value);
		return *this;
	}

	MY_UINT128& setValue_1(unsigned long value)
	{
		setValue(value);
		return *this;
	}

	//operator~
	static MY_UINT128 __cdecl op_negate(MY_UINT128 value)
	{
		MY_UINT128 result;
		result.m_inner = ~value.m_inner;
		return result;
	}


public:
	MY_UINT128 operator~();
	int32_t compareTo(unsigned long value) const;

public:
	int32_t compareTo(const MY_UINT128 &other) const;

public:
	MY_UINT128 &shiftLeft(uint32_t bits);

//TODO
public:
	void operator=(unsigned long arg0);

public:
	static void _op_assign_11(MY_UINT128 *pThis, unsigned long arg0);

public:
	void operator=(const MY_UINT128 &arg0);

public:
	static void _op_assign_12(MY_UINT128 *pThis, const MY_UINT128 &arg0);

public:
	MY_UINT128 &operator+=(unsigned long value);

public:
	static MY_UINT128 &_op_addassign_13(MY_UINT128 *pThis, unsigned long value);

public:
	MY_UINT128 &operator+=(const MY_UINT128 &arg0);

public:
	static MY_UINT128 &_op_addassign_14(MY_UINT128 *pThis, const MY_UINT128 &arg0);

public:
	MY_UINT128 &operator-=(unsigned long value);

public:
	static MY_UINT128 &_op_subassign_15(MY_UINT128 *pThis, unsigned long value);

public:
	MY_UINT128 &operator-=(const MY_UINT128 &arg0);

public:
	static MY_UINT128 &_op_subassign_16(MY_UINT128 *pThis, const MY_UINT128 &arg0);

/*public:
	MY_UINT128 &operator|=(unsigned long value);

public:
	static MY_UINT128 &_op_orassign_17(MY_UINT128 *pThis, unsigned long value);*/

public:
	MY_UINT128 &operator|=(const MY_UINT128 &value);

public:
	static MY_UINT128 &_op_orassign_18(MY_UINT128 *pThis, const MY_UINT128 &value);

/*public:
	MY_UINT128 &operator&=(unsigned long value);

public:
	static MY_UINT128 &_op_andassign_19(MY_UINT128 *pThis, unsigned long value);*/

public:
	MY_UINT128 &operator&=(const MY_UINT128 &value);

public:
	static MY_UINT128 &_op_andassign_20(MY_UINT128 *pThis, const MY_UINT128 &value);

public:
	MY_UINT128 operator+(const unsigned long arg0);

public:
	static MY_UINT128 _op_add_21(MY_UINT128 *pThis, const unsigned long arg0);

public:
	MY_UINT128 operator+(const MY_UINT128 &arg0);

public:
	static MY_UINT128 _op_add_22(MY_UINT128 *pThis, const MY_UINT128 &arg0);

public:
	MY_UINT128 operator-(const unsigned long arg0);

public:
	static MY_UINT128 _op_sub_23(MY_UINT128 *pThis, const unsigned long arg0);

public:
	MY_UINT128 operator-(const MY_UINT128 &arg0);

public:
	static MY_UINT128 _op_sub_24(MY_UINT128 *pThis, const MY_UINT128 &arg0);

/*public:
	MY_UINT128 operator|(const unsigned long arg0);

public:
	static MY_UINT128 _op_bitor_25(MY_UINT128 *pThis, const unsigned long arg0);*/

public:
	MY_UINT128 operator|(const MY_UINT128 &value);

public:
	static MY_UINT128 _op_bitor_26(MY_UINT128 *pThis, const MY_UINT128 &value);

/*public:
	MY_UINT128 operator&(const unsigned long arg0);

public:
	static MY_UINT128 _op_bitand_27(MY_UINT128 *pThis, const unsigned long arg0);*/

public:
	MY_UINT128 operator&(const MY_UINT128 &value);

public:
	static MY_UINT128 _op_bitand_28(MY_UINT128 *pThis, const MY_UINT128 &value);

public:
	bool operator==(unsigned long arg0);

public:
	static bool _op_eq_29(MY_UINT128 *pThis, unsigned long arg0);

public:
	bool operator==(const MY_UINT128 &arg0);

public:
	static bool _op_eq_30(MY_UINT128 *pThis, const MY_UINT128 &arg0);

public:
	bool operator!=(unsigned long arg0);

public:
	static bool _op_neq_31(MY_UINT128 *pThis, unsigned long arg0);

public:
	bool operator!=(const MY_UINT128 &arg0);

public:
	static bool _op_neq_32(MY_UINT128 *pThis, const MY_UINT128 &arg0);

public:
	bool operator>(unsigned long arg0);

public:
	static bool _op_gt_33(MY_UINT128 *pThis, unsigned long arg0);

public:
	bool operator>(const MY_UINT128 &arg0);

public:
	static bool _op_gt_34(MY_UINT128 *pThis, const MY_UINT128 &arg0);

public:
	bool operator<(unsigned long arg0);

public:
	static bool _op_lt_35(MY_UINT128 *pThis, unsigned long arg0);

public:
	bool operator<(const MY_UINT128 &arg0);

public:
	static bool _op_lt_36(MY_UINT128 *pThis, const MY_UINT128 &arg0);

public:
	bool operator>=(unsigned long arg0);

public:
	static bool _op_geq_37(MY_UINT128 *pThis, unsigned long arg0);

public:
	bool operator>=(const MY_UINT128 &arg0);

public:
	static bool _op_geq_38(MY_UINT128 *pThis, const MY_UINT128 &arg0);

public:
	bool operator<=(unsigned long arg0);

public:
	static bool _op_leq_39(MY_UINT128 *pThis, unsigned long arg0);

public:
	bool operator<=(const MY_UINT128 &arg0);

public:
	static bool _op_leq_40(MY_UINT128 *pThis, const MY_UINT128 &arg0);

public:
	bool operator!();

public:
	static bool _op_not_41(MY_UINT128 *pThis);

public:
	operator bool() const;

public:
	static bool _op_42(MY_UINT128 *pThis);
};
//STATIC_ASSERT_SIZE(MY_UINT128, 16);

const MY_UINT128 __cdecl operator__86150(const MY_UINT128 value);
