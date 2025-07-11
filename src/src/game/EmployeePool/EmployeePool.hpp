// EmployeePool.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

#include "Employee/Employee.hpp"
#include "IG/IG.hpp"
#include "Packet/Packet.hpp"

// Level: 1 0x10915
struct EMPLOYEEENTRY;
// Level: 1 0x108dd
class CEmployeePool;

struct EMPLOYEEENTRY: public ZRefCounted {
// Nested
// Fields
	public:  ZRef<CEmployee> pEmployee;
	public:  __POSITION* posList;
	public:  unsigned char bFlag{};
// Methods
	public:  virtual  ~EMPLOYEEENTRY();
		public: void _dtor_0();
	public:    EMPLOYEEENTRY(const EMPLOYEEENTRY& arg0);
		public: void _ctor_1( const EMPLOYEEENTRY& arg0);
	public:    EMPLOYEEENTRY();
		public: void _ctor_0();
	public:   EMPLOYEEENTRY& operator=(const EMPLOYEEENTRY& arg0);
		public: static EMPLOYEEENTRY& _op_assign_3(EMPLOYEEENTRY* pThis, const EMPLOYEEENTRY& arg0);
};
STATIC_ASSERT_SIZE(EMPLOYEEENTRY, 28);
class CEmployeePool: public IGObj, public TSingleton<CEmployeePool> {
// Nested
public: enum  UnnamedEnum67797 {
	VIEWSPLIT = 1,
	LOCALEMPLOYEE = 2
};
// Fields
	protected:  ZMap<unsigned long,__POSITION *,unsigned long> m_mEmployee;
	public:  ZList<EMPLOYEEENTRY> m_lEmployee;
// Methods
	public:  virtual  ~CEmployeePool();
		public: void _dtor_0();
	public:    CEmployeePool(const CEmployeePool& arg0);
		public: void _ctor_1( const CEmployeePool& arg0);
	public:    CEmployeePool();
		public: void _ctor_0();
	public:  virtual void Update();
		public:   void OnPacket(long nType, CInPacket& iPacket);
		public:   CEmployee* FindBalloon(const tagPOINT& pt);
		protected:   void OnEmployeeEnterField(CInPacket& iPacket);
		protected:   void OnEmployeeLeaveField(CInPacket& iPacket);
		protected:   void OnEmployeeMiniRoomBalloon(CInPacket& iPacket);
		protected:   void SetLocalEmployee(unsigned long arg0, ZXString<char> arg1, CInPacket& arg2);
		protected:   void SetRemoteEmployee(unsigned long arg0);
		protected:   void RemoveAllEmployee();
		protected:   CEmployee* GetEmployee(unsigned long arg0);
		protected:   EMPLOYEEENTRY* GetEmployeeEntry(unsigned long arg0);
		public:   CEmployeePool& operator=(const CEmployeePool& arg0);
		public: static CEmployeePool& _op_assign_14(CEmployeePool* pThis, const CEmployeePool& arg0);
};
STATIC_ASSERT_SIZE(CEmployeePool, 48);



