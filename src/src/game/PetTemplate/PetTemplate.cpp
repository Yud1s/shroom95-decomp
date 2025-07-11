// PetTemplate.cpp
#include "PetTemplate.hpp"

ZMap<long, ZRef<CPetTemplate>, long> CPetTemplate::ms_mPetTemplate{};

static ZRef<CPetTemplate> FAKE_ZRef_CPetTemplate{};

#include "PetTemplate_regen.ipp"


CPetTemplate::~CPetTemplate()
{
	 UNIMPLEMENTED; // _dtor_0();
}
void CPetTemplate::_dtor_0() {
	return __sub_002A6B10(this, nullptr);
}
 CPetTemplate::CPetTemplate(const CPetTemplate& arg0) {
	_ctor_1( arg0);
}
void CPetTemplate::_ctor_1( const CPetTemplate& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPetTemplate::CPetTemplate() {
	UNIMPLEMENTED; //_ctor_0();
}
void CPetTemplate::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CPetTemplate::GetTemplateID() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CPetTemplate::GetInteractions() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CPetTemplate::GetFoodReactions() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CPetTemplate::GetSlangReactions() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long CPetTemplate::GetRandomReactions() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
Ztl_bstr_t CPetTemplate::GetActionName(long nAction) {
	Ztl_bstr_t ret;
	return *__sub_002A6280(this, nullptr, &ret, nAction);
}
long CPetTemplate::GetActionNo(Ztl_bstr_t sAction) {
	return __sub_002A62B0(this, nullptr, CreateNakedParam(sAction));
}
const CPetTemplate::INTERACTION& CPetTemplate::GetInteraction(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
const CPetTemplate::FOODREACTION& CPetTemplate::GetFoodReaction(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
const CPetTemplate::SLANGREACTION& CPetTemplate::GetSlangReaction(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
const CPetTemplate::RANDOMACTION& CPetTemplate::GetRandomReaction(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t CPetTemplate::IsAutoReact() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ZXString<char> __cdecl CPetTemplate::GetSkillName(long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ZXString<char> CPetTemplate::GetAutoSpeakingByEvent(long nEvent) {
	ZXString<char> ret;
	return *__sub_002A0F00(this, nullptr, &ret, nEvent);
}
ZXString<char> CPetTemplate::GetAutoSpeakingByRandom() {
	ZXString<char> ret;
	return *__sub_002A0F70(this, nullptr, &ret);
}
const ZArray<long>& CPetTemplate::GetFavoriteItems() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
const ZArray<long>& CPetTemplate::GetUnfavoriteItems() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void __cdecl CPetTemplate::Load() {
	__sub_002AA940();
}
void __cdecl CPetTemplate::Unload() {
	__sub_002A5B70();
}
CPetTemplate* __cdecl CPetTemplate::GetPetTemplate(unsigned long dwTemplateID) {
	return __sub_002A5F90(dwTemplateID);
}
int32_t __cdecl CPetTemplate::RegisterPet(unsigned long arg0, _x_com_ptr<IWzProperty> arg1, _x_com_ptr<IWzProperty> arg2) {
	return __sub_002A6D30(arg0, CreateNakedParam(arg1), CreateNakedParam(arg2));
}
CPetTemplate& CPetTemplate::operator=(const CPetTemplate& arg0) {
	return _op_assign_24(this, arg0);
}
CPetTemplate& CPetTemplate::_op_assign_24(CPetTemplate* pThis, const CPetTemplate& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPetTemplate::ACTION::~ACTION() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CPetTemplate::ACTION::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPetTemplate::ACTION::ACTION(const CPetTemplate::ACTION& arg0) {
	_ctor_1( arg0);
}
void CPetTemplate::ACTION::_ctor_1( const CPetTemplate::ACTION& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPetTemplate::ACTION::ACTION() {
	UNIMPLEMENTED; //_ctor_0();
}
void CPetTemplate::ACTION::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CPetTemplate::ACTION& CPetTemplate::ACTION::operator=(const CPetTemplate::ACTION& arg0) {
	return _op_assign_3(this, arg0);
}
CPetTemplate::ACTION& CPetTemplate::ACTION::_op_assign_3(CPetTemplate::ACTION* pThis, const CPetTemplate::ACTION& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPetTemplate::INTERACTION::~INTERACTION() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CPetTemplate::INTERACTION::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPetTemplate::INTERACTION::INTERACTION(const CPetTemplate::INTERACTION& arg0) {
	_ctor_1( arg0);
}
void CPetTemplate::INTERACTION::_ctor_1( const CPetTemplate::INTERACTION& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPetTemplate::INTERACTION::INTERACTION() {
	UNIMPLEMENTED; //_ctor_0();
}
void CPetTemplate::INTERACTION::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CPetTemplate::INTERACTION& CPetTemplate::INTERACTION::operator=(const CPetTemplate::INTERACTION& arg0) {
	return _op_assign_3(this, arg0);
}
CPetTemplate::INTERACTION& CPetTemplate::INTERACTION::_op_assign_3(CPetTemplate::INTERACTION* pThis, const CPetTemplate::INTERACTION& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPetTemplate::FOODREACTION::~FOODREACTION() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CPetTemplate::FOODREACTION::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPetTemplate::FOODREACTION::FOODREACTION(const CPetTemplate::FOODREACTION& arg0) {
	_ctor_1( arg0);
}
void CPetTemplate::FOODREACTION::_ctor_1( const CPetTemplate::FOODREACTION& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPetTemplate::FOODREACTION::FOODREACTION() {
	UNIMPLEMENTED; //_ctor_0();
}
void CPetTemplate::FOODREACTION::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CPetTemplate::FOODREACTION& CPetTemplate::FOODREACTION::operator=(const CPetTemplate::FOODREACTION& arg0) {
	return _op_assign_3(this, arg0);
}
CPetTemplate::FOODREACTION& CPetTemplate::FOODREACTION::_op_assign_3(CPetTemplate::FOODREACTION* pThis, const CPetTemplate::FOODREACTION& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPetTemplate::SLANGREACTION::~SLANGREACTION() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CPetTemplate::SLANGREACTION::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPetTemplate::SLANGREACTION::SLANGREACTION(const CPetTemplate::SLANGREACTION& arg0) {
	_ctor_1( arg0);
}
void CPetTemplate::SLANGREACTION::_ctor_1( const CPetTemplate::SLANGREACTION& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPetTemplate::SLANGREACTION::SLANGREACTION() {
	UNIMPLEMENTED; //_ctor_0();
}
void CPetTemplate::SLANGREACTION::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CPetTemplate::SLANGREACTION& CPetTemplate::SLANGREACTION::operator=(const CPetTemplate::SLANGREACTION& arg0) {
	return _op_assign_3(this, arg0);
}
CPetTemplate::SLANGREACTION& CPetTemplate::SLANGREACTION::_op_assign_3(CPetTemplate::SLANGREACTION* pThis, const CPetTemplate::SLANGREACTION& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPetTemplate::RANDOMACTION::~RANDOMACTION() {
	 UNIMPLEMENTED; // _dtor_0();
}
void CPetTemplate::RANDOMACTION::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPetTemplate::RANDOMACTION::RANDOMACTION(const CPetTemplate::RANDOMACTION& arg0) {
	_ctor_1( arg0);
}
void CPetTemplate::RANDOMACTION::_ctor_1( const CPetTemplate::RANDOMACTION& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 CPetTemplate::RANDOMACTION::RANDOMACTION() {
	UNIMPLEMENTED; //_ctor_0();
}
void CPetTemplate::RANDOMACTION::_ctor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
CPetTemplate::RANDOMACTION& CPetTemplate::RANDOMACTION::operator=(const CPetTemplate::RANDOMACTION& arg0) {
	return _op_assign_3(this, arg0);
}
CPetTemplate::RANDOMACTION& CPetTemplate::RANDOMACTION::_op_assign_3(CPetTemplate::RANDOMACTION* pThis, const CPetTemplate::RANDOMACTION& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

