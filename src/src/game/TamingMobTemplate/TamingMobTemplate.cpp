// TamingMobTemplate.cpp
#include "TamingMobTemplate.hpp"

static ZRef<CTamingMobTemplate> FAKE_ZRef_TamingMobTemplate{};
static ZMap<unsigned long, ZRef<CTamingMobTemplate>, unsigned long> FAKE_ZMap_TamingMobTmpl{};

ZMap<unsigned long, ZRef<CTamingMobTemplate>, unsigned long> CTamingMobTemplate::ms_mTamingMobTemplate{};

#include "TamingMobTemplate_regen.ipp"

 CTamingMobTemplate::~CTamingMobTemplate() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CTamingMobTemplate::_dtor_0() {
	return __sub_0035B2B0(this, nullptr);
}
 CTamingMobTemplate::CTamingMobTemplate(const CTamingMobTemplate& arg0) {
	_ctor_1( arg0);
}
void CTamingMobTemplate::_ctor_1( const CTamingMobTemplate& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CTamingMobTemplate::CTamingMobTemplate() {
	//UNIMPLEMENTED; //_ctor_0();
}
void CTamingMobTemplate::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void __cdecl CTamingMobTemplate::Load() {
	__sub_0035B910();
}
void __cdecl CTamingMobTemplate::Unload() {
	__sub_0035B910();
}
CTamingMobTemplate* __cdecl CTamingMobTemplate::GetTamingMobTemplate(unsigned long dwTemplateID) {
	return __sub_0035B150(dwTemplateID);
}
int32_t __cdecl CTamingMobTemplate::RegisterTamingMob(unsigned long dwTemplateID, _x_com_ptr<IWzProperty> pProp) {
	return __sub_0035B3F0(dwTemplateID, CreateNakedParam(pProp));
}
CTamingMobTemplate& CTamingMobTemplate::operator=(const CTamingMobTemplate& arg0) {
	return _op_assign_7(this, arg0);
}
CTamingMobTemplate& CTamingMobTemplate::_op_assign_7(CTamingMobTemplate* pThis, const CTamingMobTemplate& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

