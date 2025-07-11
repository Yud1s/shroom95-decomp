// EmployeeTemplate.hpp
#pragma once
#include "util/base.h"
#include "pcom/wz.h"

// Level: 0 0x109a0
class CEmployeeTemplate;

class CEmployeeTemplate
{
	static ZMap<long,ZRef<CEmployeeTemplate>,long> ms_mEmployeeTemplate;
	// Nested
	// Fields
protected:
	unsigned long dwTemplateID{};

public:
	ZArray<Ztl_bstr_t> absAction;
	// Methods
public:
	~CEmployeeTemplate();

public:
	void _dtor_0();

public:
	CEmployeeTemplate(const CEmployeeTemplate &arg0);

public:
	void _ctor_1( const CEmployeeTemplate &arg0);

public:
	CEmployeeTemplate();

public:
	void _ctor_0();

public:
	long GetTemplateID();

public:
	static void __cdecl Load();

public:
	static void __cdecl Unload();

public:
	static CEmployeeTemplate *__cdecl GetEmployeeTemplate(unsigned long dwTemplateID);

protected:
	static int32_t __cdecl RegisterEmployee(unsigned long dwTemplateID, _x_com_ptr<IWzProperty> pProp);

public:
	CEmployeeTemplate &operator=(const CEmployeeTemplate &arg0);

public:
	static CEmployeeTemplate &_op_assign_8(CEmployeeTemplate *pThis, const CEmployeeTemplate &arg0);
};
STATIC_ASSERT_SIZE(CEmployeeTemplate, 8);
