// MY_UINT128.cpp
#include "UInt128.hpp"
#include "UInt128.ipp"

MY_UINT128::MY_UINT128(size_t value, size_t shiftLeft):
    MY_UINT128(1)
{
    //this->shiftLeft(shiftLeft);
    m_inner.shiftLeft(shiftLeft);
}

MY_UINT128::MY_UINT128(const MY_UINT128& value, uint32_t numBits)
{
    UNIMPLEMENTED;
}

void MY_UINT128::_ctor_0(const MY_UINT128& value, uint32_t numBits)
{
    //UNIMPLEMENTED;//return __sub_00410660(this, nullptr, value, numBits);
    new(this) MY_UINT128(value, numBits);
}

MY_UINT128::MY_UINT128(unsigned long value)
{
    m_inner.setValue((uint32_t)value);
}

void MY_UINT128::_ctor_1(unsigned long value)
{
    //UNIMPLEMENTED;//return __sub_00410640(this, nullptr, value);
    new(this) MY_UINT128(value);
}

MY_UINT128::MY_UINT128(MY_UINT128& value, uint32_t numBits): MY_UINT128(value)
{
}

void MY_UINT128::_ctor_2(MY_UINT128& value, uint32_t numBits)
{
    new(this) MY_UINT128(value, numBits);
}

MY_UINT128::MY_UINT128()
{
}

void MY_UINT128::_ctor_0()
{
    //UNIMPLEMENTED;//return __sub_00410630(this, nullptr);
    new(this) MY_UINT128();
}

int MY_UINT128::compareTo_0(const MY_UINT128& other)
{
    return m_inner.compareTo(other.m_inner);
}

bool MY_UINT128::checkFlag(MY_UINT128& other)
{
    auto flag = this->m_inner & other.m_inner;
    return static_cast<bool>(flag);
}

uint32_t MY_UINT128::getBitNumber(uint32_t bit) const
{
    return m_inner.getBitNumber(bit);
}

MY_UINT128& MY_UINT128::setBitNumber(uint32_t bit, uint32_t value)
{
    m_inner.setBitNumber(bit, value);
    return *this;
}

MY_UINT128& MY_UINT128::setValue(uint64_t arg0)

{
    m_inner.setValue(arg0);
    return *this;
}

MY_UINT128& MY_UINT128::setValue(unsigned long value)
{
    m_inner.setValue((uint32_t)value);
    return *this;
}

MY_UINT128& MY_UINT128::setValue(const MY_UINT128& value)
{
    //UNIMPLEMENTED;//return __sub_00410480(this, nullptr, value);
    m_inner = value.m_inner;
    return *this;
}

MY_UINT128 MY_UINT128::operator~()
{
    MY_UINT128 result;
    result.m_inner = ~m_inner;
    return result;
}

int32_t MY_UINT128::compareTo(unsigned long value) const
{
    return m_inner.compareTo(value);
}

int32_t MY_UINT128::compareTo(const MY_UINT128& other) const
{
    return m_inner.compareTo(other.m_inner);
}

MY_UINT128& MY_UINT128::shiftLeft(uint32_t bits)
{
    m_inner.shiftLeft(bits);
    return *this;
}

void MY_UINT128::operator=(unsigned long arg0)
{
    _op_assign_11(this, arg0);
}

void MY_UINT128::_op_assign_11(MY_UINT128* pThis, unsigned long arg0)
{
    pThis->m_inner = (uint32_t)arg0;
}

void MY_UINT128::operator=(const MY_UINT128& arg0)
{
    _op_assign_12(this, arg0);
}

void MY_UINT128::_op_assign_12(MY_UINT128* pThis, const MY_UINT128& arg0)
{
    pThis->m_inner = arg0.m_inner;
}

MY_UINT128& MY_UINT128::operator+=(unsigned long value)
{
    return _op_addassign_13(this, value);
}

MY_UINT128& MY_UINT128::_op_addassign_13(MY_UINT128* pThis, unsigned long value)
{
    //UNIMPLEMENTED;//return __sub_004104A0(pThis, nullptr, value);
    UNIMPLEMENTED;

}

MY_UINT128& MY_UINT128::operator+=(const MY_UINT128& arg0)
{
    return _op_addassign_14(this, arg0);
}

MY_UINT128& MY_UINT128::_op_addassign_14(MY_UINT128* pThis, const MY_UINT128& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

MY_UINT128& MY_UINT128::operator-=(unsigned long value)
{
    return _op_subassign_15(this, value);
}

MY_UINT128& MY_UINT128::_op_subassign_15(MY_UINT128* pThis, unsigned long value)
{
    UNIMPLEMENTED;//return __sub_004104A0(pThis, nullptr, value);
}

MY_UINT128& MY_UINT128::operator-=(const MY_UINT128& arg0)
{
    return _op_subassign_16(this, arg0);
}

MY_UINT128& MY_UINT128::_op_subassign_16(MY_UINT128* pThis, const MY_UINT128& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

/*MY_UINT128& MY_UINT128::operator|=(unsigned long value)
{
    return _op_orassign_17(this, value);
}

MY_UINT128& MY_UINT128::_op_orassign_17(MY_UINT128* pThis, unsigned long value)
{
    UNIMPLEMENTED;//return __sub_004104A0(pThis, nullptr, value);
}*/

MY_UINT128& MY_UINT128::operator|=(const MY_UINT128& value)
{
    //return _op_orassign_18(this, value);
    this->m_inner |= value.m_inner;
    return *this;
}

MY_UINT128& MY_UINT128::_op_orassign_18(MY_UINT128* pThis, const MY_UINT128& value)
{
    UNIMPLEMENTED;//return __sub_004106F0(pThis, nullptr, value);
}

/*MY_UINT128& MY_UINT128::operator&=(unsigned long value)
{
    return _op_andassign_19(this, value);
}

MY_UINT128& MY_UINT128::_op_andassign_19(MY_UINT128* pThis, unsigned long value)
{
    UNIMPLEMENTED;//return __sub_004104A0(pThis, nullptr, value);
}*/

MY_UINT128& MY_UINT128::operator&=(const MY_UINT128& value)
{
    m_inner &= value.m_inner;
    return *this;
}

MY_UINT128& MY_UINT128::_op_andassign_20(MY_UINT128* pThis, const MY_UINT128& value)
{
    *pThis = *pThis & value;
    return *pThis;
}

MY_UINT128 MY_UINT128::operator+(const unsigned long arg0)
{
    return _op_add_21(this, arg0);
}

MY_UINT128 MY_UINT128::_op_add_21(MY_UINT128* pThis, const unsigned long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

MY_UINT128 MY_UINT128::operator+(const MY_UINT128& arg0)
{
    return _op_add_22(this, arg0);
}

MY_UINT128 MY_UINT128::_op_add_22(MY_UINT128* pThis, const MY_UINT128& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

MY_UINT128 MY_UINT128::operator-(const unsigned long arg0)
{
    return _op_sub_23(this, arg0);
}

MY_UINT128 MY_UINT128::_op_sub_23(MY_UINT128* pThis, const unsigned long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

MY_UINT128 MY_UINT128::operator-(const MY_UINT128& arg0)
{
    return _op_sub_24(this, arg0);
}

MY_UINT128 MY_UINT128::_op_sub_24(MY_UINT128* pThis, const MY_UINT128& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

/*MY_UINT128 MY_UINT128::operator|(const unsigned long arg0)
{
    return _op_bitor_25(this, arg0);
}

MY_UINT128 MY_UINT128::_op_bitor_25(MY_UINT128* pThis, const unsigned long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}*/

MY_UINT128 MY_UINT128::operator|(const MY_UINT128& value)
{
    MY_UINT128 res;
    res.m_inner = this->m_inner | value.m_inner;
    return res;
}

MY_UINT128 MY_UINT128::_op_bitor_26(MY_UINT128* pThis, const MY_UINT128& value)
{
    //MY_UINT128 ret;
    //return *__sub_00410720(pThis, nullptr, &ret, value);
    return *pThis | value;
}

/*MY_UINT128 MY_UINT128::operator&(const unsigned long arg0)
{
    return _op_bitand_27(this, arg0);
}

MY_UINT128 MY_UINT128::_op_bitand_27(MY_UINT128* pThis, const unsigned long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}*/

MY_UINT128 MY_UINT128::operator&(const MY_UINT128& value)
{
    MY_UINT128 res;
    res.m_inner = this->m_inner & value.m_inner;
    return res;
}

MY_UINT128 MY_UINT128::_op_bitand_28(MY_UINT128* pThis, const MY_UINT128& value)
{
    /*MY_UINT128 ret;
    return *__sub_004107B0(pThis, nullptr, &ret, value);*/

    return *pThis & value;
}

bool MY_UINT128::operator==(unsigned long arg0)
{
    return _op_eq_29(this, arg0);
}

bool MY_UINT128::_op_eq_29(MY_UINT128* pThis, unsigned long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

bool MY_UINT128::operator==(const MY_UINT128& arg0)
{
    return _op_eq_30(this, arg0);
}

bool MY_UINT128::_op_eq_30(MY_UINT128* pThis, const MY_UINT128& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

bool MY_UINT128::operator!=(unsigned long arg0)
{
    return _op_neq_31(this, arg0);
}

bool MY_UINT128::_op_neq_31(MY_UINT128* pThis, unsigned long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

bool MY_UINT128::operator!=(const MY_UINT128& arg0)
{
    return _op_neq_32(this, arg0);
}

bool MY_UINT128::_op_neq_32(MY_UINT128* pThis, const MY_UINT128& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

bool MY_UINT128::operator>(unsigned long arg0)
{
    return _op_gt_33(this, arg0);
}

bool MY_UINT128::_op_gt_33(MY_UINT128* pThis, unsigned long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

bool MY_UINT128::operator>(const MY_UINT128& arg0)
{
    return _op_gt_34(this, arg0);
}

bool MY_UINT128::_op_gt_34(MY_UINT128* pThis, const MY_UINT128& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

bool MY_UINT128::operator<(unsigned long arg0)
{
    return _op_lt_35(this, arg0);
}

bool MY_UINT128::_op_lt_35(MY_UINT128* pThis, unsigned long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

bool MY_UINT128::operator<(const MY_UINT128& arg0)
{
    return _op_lt_36(this, arg0);
}

bool MY_UINT128::_op_lt_36(MY_UINT128* pThis, const MY_UINT128& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

bool MY_UINT128::operator>=(unsigned long arg0)
{
    return _op_geq_37(this, arg0);
}

bool MY_UINT128::_op_geq_37(MY_UINT128* pThis, unsigned long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

bool MY_UINT128::operator>=(const MY_UINT128& arg0)
{
    return _op_geq_38(this, arg0);
}

bool MY_UINT128::_op_geq_38(MY_UINT128* pThis, const MY_UINT128& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

bool MY_UINT128::operator<=(unsigned long arg0)
{
    return _op_leq_39(this, arg0);
}

bool MY_UINT128::_op_leq_39(MY_UINT128* pThis, unsigned long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

bool MY_UINT128::operator<=(const MY_UINT128& arg0)
{
    return _op_leq_40(this, arg0);
}

bool MY_UINT128::_op_leq_40(MY_UINT128* pThis, const MY_UINT128& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

bool MY_UINT128::operator!()
{
    return _op_not_41(this);
}

bool MY_UINT128::_op_not_41(MY_UINT128* pThis)
{
    UNIMPLEMENTED;//return __sub_00410610(pThis, nullptr);
}

MY_UINT128::operator bool() const
{
    return static_cast<bool>(m_inner);
}

bool MY_UINT128::_op_42(MY_UINT128* pThis)
{
    return static_cast<bool>(pThis->m_inner);
}

const MY_UINT128 __cdecl operator__86150(const MY_UINT128 value)
{
    UNIMPLEMENTED;//return __sub_00410820(value);
}
