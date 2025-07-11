// PartyCommon.cpp
#include "PartyCommon.hpp"
#include "PartyCommon_regen.ipp"

void EXPEDITION::Encode(COutPacket& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void EXPEDITION::Decode(CInPacket& iPacket) {
	__sub_00294FC0(this, nullptr, iPacket);
}
ZXString<char> EXPEDITION::GetMasterName() {
	return __sub_00295710(this, nullptr);
}
unsigned long EXPEDITION::GetMasterID() {
	return __sub_002957B0(this, nullptr);
}
long EXPEDITION::GetMemberCount() {
	return __sub_00294EE0(this, nullptr);
}
long EXPEDITION::GetMemberLimit() {
	return __sub_002953F0(this, nullptr);
}
long EXPEDITION::GetPartyIndex_1(ZXString<char> sCharacterName) {
	return __sub_00295860(this, nullptr, CreateNakedParam(sCharacterName));
}
long EXPEDITION::GetPartyIndex_0(unsigned long dwCharacterID) {
	return __sub_00295800(this, nullptr, dwCharacterID);
}
long EXPEDITION::GetMaxPartyIndex() {
	return __sub_002954B0(this, nullptr);
}
long EXPEDITION::GetPartyCount() {
	return __sub_002954E0(this, nullptr);
}
unsigned long EXPEDITION::GetCharacterID(ZXString<char> sCharacterName) {
	return __sub_00295AA0(this, nullptr, CreateNakedParam(sCharacterName));
}
int32_t EXPEDITION::IsMember(ZXString<char> sCharacterName) {
	return __sub_00295B70(this, nullptr, CreateNakedParam(sCharacterName));
}
int32_t EXPEDITION::IsMember_(unsigned long arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 ADVER_COMMON::~ADVER_COMMON() {
	 UNIMPLEMENTED; // _dtor_0();
}
void ADVER_COMMON::_dtor_0() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 ADVER_COMMON::ADVER_COMMON(const ADVER_COMMON& arg0) {
	_ctor_1( arg0);
}
void ADVER_COMMON::_ctor_1( const ADVER_COMMON& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 ADVER_COMMON::ADVER_COMMON() {
	UNIMPLEMENTED; //_ctor_0();
}
void ADVER_COMMON::_ctor_0() {
	return __sub_00294F90(this, nullptr);
}
void ADVER_COMMON::Encode(COutPacket& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
void ADVER_COMMON::Decode(CInPacket& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
int32_t ADVER_COMMON::IsBossOnline() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ZXString<char> ADVER_COMMON::GetBossName() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
long ADVER_COMMON::GetMemberCount() {
	return __sub_00294ED0(this, nullptr);
}
long ADVER_COMMON::GetMemberMax() {
	return __sub_00294ED0(this, nullptr);
}
long ADVER_COMMON::GetGroupID() {
	return __sub_00294ED0(this, nullptr);
}
unsigned long ADVER_COMMON::GetBossID() {
	return __sub_00294FB0(this, nullptr);
}
unsigned long ADVER_COMMON::GetMasterID() {
	return __sub_00294FB0(this, nullptr);
}
ZArray<PARTYMEMBER> ADVER_COMMON::GetPartyMember() {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
ZRef<ADVER_COMMON> __cdecl ADVER_COMMON::CreateAdver(long nPartyQuestID) {
	return __sub_002959E0(nPartyQuestID);
}
ADVER_COMMON& ADVER_COMMON::operator=(const ADVER_COMMON& arg0) {
	return _op_assign_14(this, arg0);
}
ADVER_COMMON& ADVER_COMMON::_op_assign_14(ADVER_COMMON* pThis, const ADVER_COMMON& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 PARTYADVER::~PARTYADVER() {
	 UNIMPLEMENTED; // _dtor_0();
}
void PARTYADVER::_dtor_0() {
	return __sub_00294FE0(this, nullptr);
}
 PARTYADVER::PARTYADVER(const PARTYADVER& arg0) {
	_ctor_1( arg0);
}
void PARTYADVER::_ctor_1( const PARTYADVER& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 PARTYADVER::PARTYADVER() {
	UNIMPLEMENTED; //_ctor_0();
}
void PARTYADVER::_ctor_0() {
	return __sub_00294FF0(this, nullptr);
}
void PARTYADVER::Encode(COutPacket& oPacket) {
	__sub_00295530(this, nullptr, oPacket);
}
void PARTYADVER::Decode(CInPacket& iPacket) {
	__sub_00295100(this, nullptr, iPacket);
}
int32_t PARTYADVER::IsBossOnline() {
	return __sub_00294F10(this, nullptr);
}
ZXString<char> PARTYADVER::GetBossName() {
	return __sub_00295550(this, nullptr);
}
long PARTYADVER::GetMemberCount() {
	return __sub_00294F20(this, nullptr);
}
long PARTYADVER::GetMemberMax() {
	return __sub_00294F30(this, nullptr);
}
unsigned long PARTYADVER::GetBossID() {
	return __sub_00294F40(this, nullptr);
}
ZArray<PARTYMEMBER> PARTYADVER::GetPartyMember() {
	return __sub_00295570(this, nullptr);
}
PARTYADVER& PARTYADVER::operator=(const PARTYADVER& arg0) {
	return _op_assign_11(this, arg0);
}
PARTYADVER& PARTYADVER::_op_assign_11(PARTYADVER* pThis, const PARTYADVER& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 EXPEDITION_ADVER::~EXPEDITION_ADVER() {
	 UNIMPLEMENTED; // _dtor_0();
}
void EXPEDITION_ADVER::_dtor_0() {
	return __sub_00294F80(this, nullptr);
}
 EXPEDITION_ADVER::EXPEDITION_ADVER(const EXPEDITION_ADVER& arg0) {
	_ctor_1( arg0);
}
void EXPEDITION_ADVER::_ctor_1( const EXPEDITION_ADVER& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}
 EXPEDITION_ADVER::EXPEDITION_ADVER() {
	UNIMPLEMENTED; //_ctor_0();
}
void EXPEDITION_ADVER::_ctor_0() {
	return __sub_00295020(this, nullptr);
}
void EXPEDITION_ADVER::Encode(COutPacket& oPacket) {
	__sub_002955E0(this, nullptr, oPacket);
}
void EXPEDITION_ADVER::Decode(CInPacket& iPacket) {
	__sub_002951F0(this, nullptr, iPacket);
}
int32_t EXPEDITION_ADVER::IsBossOnline() {
	return __sub_00294F50(this, nullptr);
}
ZXString<char> EXPEDITION_ADVER::GetBossName() {
	return __sub_002959A0(this, nullptr);
}
long EXPEDITION_ADVER::GetMemberCount() {
	return __sub_00294F70(this, nullptr);
}
long EXPEDITION_ADVER::GetMemberMax() {
	return __sub_00295600(this, nullptr);
}
unsigned long EXPEDITION_ADVER::GetBossID() {
	return __sub_002959C0(this, nullptr);
}
ZArray<PARTYMEMBER> EXPEDITION_ADVER::GetPartyMember() {
	return __sub_00295610(this, nullptr);
}
unsigned long EXPEDITION_ADVER::GetMasterID() {
	return __sub_002959D0(this, nullptr);
}
EXPEDITION_ADVER& EXPEDITION_ADVER::operator=(const EXPEDITION_ADVER& arg0) {
	return _op_assign_12(this, arg0);
}
EXPEDITION_ADVER& EXPEDITION_ADVER::_op_assign_12(EXPEDITION_ADVER* pThis, const EXPEDITION_ADVER& arg0) {
	// TODO: No module found for method
	UNIMPLEMENTED;
}

CInPacket& __op_shift_right_1(CInPacket& iPacket,  EXPEDITION& val) {
    val.Decode(iPacket);
    return iPacket;
}

