// EmployeePool.cpp
#include "EmployeePool.hpp"
#include "EmployeePool_regen.ipp"

EMPLOYEEENTRY::~EMPLOYEEENTRY()
{
    UNIMPLEMENTED; // _dtor_0();
}

void EMPLOYEEENTRY::_dtor_0()
{
    return __sub_00118BC0(this, nullptr);
}

EMPLOYEEENTRY::EMPLOYEEENTRY(const EMPLOYEEENTRY& arg0)
{
    _ctor_1(arg0);
}

void EMPLOYEEENTRY::_ctor_1(const EMPLOYEEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

EMPLOYEEENTRY::EMPLOYEEENTRY()
{
    UNIMPLEMENTED; //_ctor_0();
}

void EMPLOYEEENTRY::_ctor_0()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

EMPLOYEEENTRY& EMPLOYEEENTRY::operator=(const EMPLOYEEENTRY& arg0)
{
    return _op_assign_3(this, arg0);
}

EMPLOYEEENTRY& EMPLOYEEENTRY::_op_assign_3(EMPLOYEEENTRY* pThis, const EMPLOYEEENTRY& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CEmployeePool::~CEmployeePool()
{
    ms_pInstance = nullptr;
}

void CEmployeePool::_dtor_0()
{
    return __sub_00118C90(this, nullptr);
}

CEmployeePool::CEmployeePool(const CEmployeePool& arg0)
{
    _ctor_1(arg0);
}

void CEmployeePool::_ctor_1(const CEmployeePool& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CEmployeePool::CEmployeePool()
{
}

void CEmployeePool::_ctor_0()
{
    return __sub_00118C30(this, nullptr);
}

void CEmployeePool::Update()
{
    __sub_001187A0(this, nullptr);
}

void CEmployeePool::OnPacket(long nType, CInPacket& iPacket)
{
    __sub_00119020(this, nullptr, nType, iPacket);
}

CEmployee* CEmployeePool::FindBalloon(const tagPOINT& pt)
{
    return __sub_00118820(this, nullptr, pt);
}

void CEmployeePool::OnEmployeeEnterField(CInPacket& iPacket)
{
    __sub_00118F70(this, nullptr, iPacket);
}

void CEmployeePool::OnEmployeeLeaveField(CInPacket& iPacket)
{
    __sub_00118D10(this, nullptr, iPacket);
}

void CEmployeePool::OnEmployeeMiniRoomBalloon(CInPacket& iPacket)
{
    __sub_001187D0(this, nullptr, iPacket);
}

void CEmployeePool::SetLocalEmployee(unsigned long arg0, ZXString<char> arg1, CInPacket& arg2)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CEmployeePool::SetRemoteEmployee(unsigned long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

void CEmployeePool::RemoveAllEmployee()
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CEmployee* CEmployeePool::GetEmployee(unsigned long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

EMPLOYEEENTRY* CEmployeePool::GetEmployeeEntry(unsigned long arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}

CEmployeePool& CEmployeePool::operator=(const CEmployeePool& arg0)
{
    return _op_assign_14(this, arg0);
}

CEmployeePool& CEmployeePool::_op_assign_14(CEmployeePool* pThis, const CEmployeePool& arg0)
{
    // TODO: No module found for method
    UNIMPLEMENTED;
}
