// MorphTemplate.cpp
#include "MorphTemplate.hpp"
static ZMap<unsigned long, ZRef<CMorphTemplate>, unsigned long> FAKE_ZMap_unsigned_long_ZRef_CMorphTemplate_unsigned_long{};
static ZRef<CMorphTemplate> FAKE_ZRef_CMorphTemplate{};

#include "MorphTemplate_regen.ipp"

ZMap<unsigned long, ZRef<CMorphTemplate>, unsigned long> CMorphTemplate::ms_mMorphTemplate{};

CMorphTemplate::~CMorphTemplate()
{
}
void CMorphTemplate::_dtor_0() {
	return __sub_002652C0(this, nullptr);
}
 CMorphTemplate::CMorphTemplate(const CMorphTemplate& arg0) {
	_ctor_1( arg0);
}
void CMorphTemplate::_ctor_1( const CMorphTemplate& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CMorphTemplate::CMorphTemplate() {
}
void CMorphTemplate::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void __cdecl CMorphTemplate::Load() {
	__sub_00265D80();
}
void __cdecl CMorphTemplate::Unload() {
	__sub_00265D80();
}
CMorphTemplate* __cdecl CMorphTemplate::GetMorphTemplate(unsigned long dwTemplateID) {
	return __sub_00265050(dwTemplateID);
}
int32_t CMorphTemplate::IsSuperMan_() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t __cdecl CMorphTemplate::IsSuperMan(unsigned long dwTemplateID) {
	return __sub_002650E0(dwTemplateID);
}
int32_t __cdecl CMorphTemplate::IsHideMorphed(unsigned long dwTemplateID) {
	return __sub_00265180(dwTemplateID);
}
int32_t __cdecl CMorphTemplate::IsMonsterMorphed(unsigned long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CMorphTemplate::IsHide() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t __cdecl CMorphTemplate::IsAttackableMorphed(unsigned long dwTemplateID) {
	return __sub_00265220(dwTemplateID);
}
int32_t CMorphTemplate::IsAttackable() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t __cdecl CMorphTemplate::RegisterMorph(unsigned long dwTemplateID, _x_com_ptr<IWzProperty> pProp) {
	return __sub_00265440(dwTemplateID, CreateNakedParam(pProp));
}
CMorphTemplate& CMorphTemplate::operator=(const CMorphTemplate& arg0) {
	return _op_assign_14(this, arg0);
}
CMorphTemplate& CMorphTemplate::_op_assign_14(CMorphTemplate* pThis, const CMorphTemplate& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

