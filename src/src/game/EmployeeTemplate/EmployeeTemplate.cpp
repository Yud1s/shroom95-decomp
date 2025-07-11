// EmployeeTemplate.cpp
#include "EmployeeTemplate.hpp"

static ZRef<CEmployeeTemplate> FAKE_ZRef_CEmployeeTemplate{};

static ZMap<long, ZRef<CEmployeeTemplate>, long> FAKE_ZMap_long_ZRef_CEmployeeTemplate_long{};

#include "EmployeeTemplate_regen.ipp"

ZMap<long, ZRef<CEmployeeTemplate>, long> CEmployeeTemplate::ms_mEmployeeTemplate{};

CEmployeeTemplate::~CEmployeeTemplate()
{
}
void CEmployeeTemplate::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CEmployeeTemplate::CEmployeeTemplate(const CEmployeeTemplate& arg0) {
	_ctor_1( arg0);
}
void CEmployeeTemplate::_ctor_1( const CEmployeeTemplate& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CEmployeeTemplate::CEmployeeTemplate() {
	//UNIMPLEMENTED; //_ctor_0();
}
void CEmployeeTemplate::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CEmployeeTemplate::GetTemplateID() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void __cdecl CEmployeeTemplate::Load() {
	__sub_00119F00();
}
void __cdecl CEmployeeTemplate::Unload() {
	__sub_001193F0();
}
CEmployeeTemplate* __cdecl CEmployeeTemplate::GetEmployeeTemplate(unsigned long dwTemplateID) {
	return __sub_001195D0(dwTemplateID);
}
int32_t __cdecl CEmployeeTemplate::RegisterEmployee(unsigned long dwTemplateID, _x_com_ptr<IWzProperty> pProp) {
	return __sub_00119AC0(dwTemplateID, CreateNakedParam(pProp));
}
CEmployeeTemplate& CEmployeeTemplate::operator=(const CEmployeeTemplate& arg0) {
	return _op_assign_8(this, arg0);
}
CEmployeeTemplate& CEmployeeTemplate::_op_assign_8(CEmployeeTemplate* pThis, const CEmployeeTemplate& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

