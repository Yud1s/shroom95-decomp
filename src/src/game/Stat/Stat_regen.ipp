#include "regen.hpp"
// Stat.ipp
#include "Stat.hpp"


// PassiveSkillData::PassiveSkillData
__SUB_CLASS_THIS0(00506BF0, __thiscall, 82387,  PassiveSkillData, void) {
__asm {

 Block0:
	xor eax,eax
	push esi
	mov esi,ecx
	lea ecx,[esi+0x74]
	mov dword ptr [esi],eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	mov dword ptr [esi+0xC],eax
	mov dword ptr [esi+0x10],eax
	mov dword ptr [esi+0x14],eax
	mov dword ptr [esi+0x18],eax
	mov dword ptr [esi+0x1C],eax
	mov dword ptr [esi+0x20],eax
	mov dword ptr [esi+0x24],eax
	mov dword ptr [esi+0x28],eax
	mov dword ptr [esi+0x2C],eax
	mov dword ptr [esi+0x30],eax
	mov dword ptr [esi+0x34],eax
	mov dword ptr [esi+0x38],eax
	mov dword ptr [esi+0x3C],eax
	mov dword ptr [esi+0x40],eax
	mov dword ptr [esi+0x44],eax
	mov dword ptr [esi+0x48],eax
	mov dword ptr [esi+0x4C],eax
	mov dword ptr [esi+0x50],eax
	mov dword ptr [esi+0x54],eax
	mov dword ptr [esi+0x58],eax
	mov dword ptr [esi+0x5C],eax
	mov dword ptr [esi+0x60],eax
	mov dword ptr [esi+0x64],eax
	mov dword ptr [esi+0x68],eax
	mov dword ptr [esi+0x6C],eax
	mov dword ptr [esi+0x70],eax
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<AdditionPsd>, long>::`vftable'
	mov dword ptr [ecx+4],eax
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],eax
	call ZMap<long, ZRef<AdditionPsd>, long>::_CalcAutoGrow
	mov eax,esi
	pop esi
	ret
}
}


// PassiveSkillData::~PassiveSkillData
__SUB_CLASS_THIS0(00505D30, __thiscall, 82376,  PassiveSkillData, void) {
__asm {

 Block0:
	xor eax,eax
	mov dword ptr [ecx],eax
	mov dword ptr [ecx+4],eax
	mov dword ptr [ecx+8],eax
	mov dword ptr [ecx+0xC],eax
	mov dword ptr [ecx+0x10],eax
	mov dword ptr [ecx+0x14],eax
	mov dword ptr [ecx+0x18],eax
	mov dword ptr [ecx+0x1C],eax
	mov dword ptr [ecx+0x20],eax
	mov dword ptr [ecx+0x24],eax
	mov dword ptr [ecx+0x28],eax
	mov dword ptr [ecx+0x2C],eax
	mov dword ptr [ecx+0x30],eax
	mov dword ptr [ecx+0x34],eax
	mov dword ptr [ecx+0x38],eax
	mov dword ptr [ecx+0x3C],eax
	mov dword ptr [ecx+0x40],eax
	mov dword ptr [ecx+0x44],eax
	mov dword ptr [ecx+0x48],eax
	mov dword ptr [ecx+0x4C],eax
	mov dword ptr [ecx+0x50],eax
	mov dword ptr [ecx+0x54],eax
	mov dword ptr [ecx+0x58],eax
	mov dword ptr [ecx+0x5C],eax
	mov dword ptr [ecx+0x60],eax
	mov dword ptr [ecx+0x64],eax
	mov dword ptr [ecx+0x68],eax
	mov dword ptr [ecx+0x6C],eax
	mov dword ptr [ecx+0x70],eax
	add ecx,0x74
	jmp  ZMap<long, ZRef<AdditionPsd>, long>::RemoveAll
}
}


// NoExpire::IsNoExpire
__SUB_CLASS_THIS0(003207D0, __thiscall, 7115, NoExpire, bool) {
__asm {

 Block0:
	mov al,1
	ret
}
}
// SecondaryStat::IsEventVehicle
__SUB_CLASS_THIS0(00461740, __thiscall, 7672, SecondaryStat, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call SecondaryStat::IsRidingSkillVehicle
	test eax,eax
	jne Block2

 Block1:
	pop esi
	ret

 Block2:
	push edi
	mov edi,dword ptr [esi+0x13D4]
	lea esi,[edi+0x18]
	mov ecx,esi
	call ZFatalSection::Lock
	test esi,esi
	je Block5

 Block3:
	add dword ptr [esi+4],0xFFFFFFFF
	jne Block5

 Block4:
	mov dword ptr [esi],0

 Block5:
	mov edi,dword ptr [edi+0xC]
	cmp edi,0x1D7AE1
	jl Block7

 Block6:
	cmp edi,0x1D7AE2
	jle Block8

 Block7:
	push edi
	call is_event_vehicle_type2
	add esp,4
	test eax,eax
	je Block9

 Block8:
	pop edi
	mov eax,1
	pop esi
	ret

 Block9:
	pop edi
	xor eax,eax
	pop esi
	ret
}
}
// SecondaryStat::DecodeForRemote
__SUB_CLASS_THIS(0032B7B0, __thiscall, 7680, SecondaryStat, MY_UINT128, CInPacket &) {
__asm {

 Block0:
	sub esp,0x40
	push ebx
	push esi
	mov esi,ecx
	push edi
	lea ecx,[esp+0xC]
	call MY_UINT128::_ctor_default
	mov edi,dword ptr [esp+0x54]
	push 0x10
	lea eax,[esp+0x10]
	push eax
	mov ecx,edi
	call CInPacket::DecodeBuffer
	push offset CTS_SPEED
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block2

 Block1:
	mov ecx,edi
	call CInPacket::Decode1
	movsx ecx,al
	lea edx,[esi+0x1A4]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1AC],eax

 Block2:
	push offset CTS_COMBO_COUNTER
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block4

 Block3:
	mov ecx,edi
	call CInPacket::Decode1
	movzx ecx,al
	lea edx,[esi+0x3E4]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3EC],eax

 Block4:
	push offset CTS_WEAPON_CHARGE
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block6

 Block5:
	lea edx,[esi+0x414]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x41C],eax
	call CInPacket::Decode4
	lea edx,[esi+0x420]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x428],eax

 Block6:
	push offset CTS_STUN
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block8

 Block7:
	lea edx,[esi+0x354]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x35C],eax
	call CInPacket::Decode4
	lea edx,[esi+0x360]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x368],eax

 Block8:
	push offset CTS_DARKNESS
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block10

 Block9:
	lea edx,[esi+0x3C0]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x3C8],eax
	call CInPacket::Decode4
	lea edx,[esi+0x3CC]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3D4],eax

 Block10:
	push offset CTS_SEAL
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block12

 Block11:
	lea edx,[esi+0x39C]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x3A4],eax
	call CInPacket::Decode4
	lea edx,[esi+0x3A8]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3B0],eax

 Block12:
	push offset CTS_WEAKNESS
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block14

 Block13:
	lea edx,[esi+0x534]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x53C],eax
	call CInPacket::Decode4
	lea edx,[esi+0x540]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x548],eax

 Block14:
	push offset CTS_CURSE
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block16

 Block15:
	lea edx,[esi+0x558]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x560],eax
	call CInPacket::Decode4
	lea edx,[esi+0x564]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x56C],eax

 Block16:
	push offset CTS_POISON
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block18

 Block17:
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x378]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x380],eax

 Block18:
	push offset CTS_POISON
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block20

 Block19:
	lea edx,[esi+0x378]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x380],eax
	call CInPacket::Decode4
	lea edx,[esi+0x384]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x38C],eax

 Block20:
	push offset CTS_SHADOW_PARTNER
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block22

 Block21:
	lea edx,[esi+0x4A4]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x4AC],eax
	call CInPacket::Decode4
	lea edx,[esi+0x4B0]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x4B8],eax

 Block22:
	push offset CTS_SHADOW_PARTNER
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block24

 Block23:
	lea edx,[esi+0x4A4]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x4AC],eax

 Block24:
	push offset CTS_DARK_SIGHT
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block26

 Block25:
	lea edx,[esi+0x21C]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x224],eax

 Block26:
	push offset CTS_SOUL_ARROW
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block28

 Block27:
	lea edx,[esi+0x330]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x338],eax

 Block28:
	push offset CTS_MORPH
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block30

 Block29:
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x5A0]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x5A8],eax

 Block30:
	push offset CTS_GHOST
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block32

 Block31:
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x5C4]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x5CC],eax

 Block32:
	push offset CTS_ATTRACT
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block34

 Block33:
	lea edx,[esi+0x6A8]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x6B0],eax
	call CInPacket::Decode4
	lea edx,[esi+0x6B4]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x6BC],eax

 Block34:
	push offset CTS_SPIRIT_JAVELIN
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block36

 Block35:
	mov ecx,edi
	call CInPacket::Decode4
	lea edx,[esi+0x6CC]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x6D4],eax

 Block36:
	push offset CTS_BAN_MAP
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block38

 Block37:
	lea edx,[esi+0x7BC]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x7C4],eax
	call CInPacket::Decode4
	lea edx,[esi+0x7C8]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x7D0],eax

 Block38:
	push offset CTS_BARRIER
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block40

 Block39:
	lea edx,[esi+0x8F4]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x8FC],eax
	call CInPacket::Decode4
	lea edx,[esi+0x90C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x914],eax

 Block40:
	push offset CTS_DOJANG_SHIELD
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block42

 Block41:
	lea edx,[esi+0x918]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x920],eax
	call CInPacket::Decode4
	lea edx,[esi+0x930]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x938],eax

 Block42:
	push offset CTS_REVERSE_INPUT
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block44

 Block43:
	lea edx,[esi+0x93C]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x944],eax
	call CInPacket::Decode4
	lea edx,[esi+0x948]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x950],eax

 Block44:
	push offset CTS_RESPECT_P_IMMUNE
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block46

 Block45:
	mov ecx,edi
	call CInPacket::Decode4
	lea edx,[esi+0xA20]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xA28],eax

 Block46:
	push offset CTS_RESPECT_M_IMMUNE
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block48

 Block47:
	mov ecx,edi
	call CInPacket::Decode4
	lea edx,[esi+0xA50]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xA58],eax

 Block48:
	push offset CTS_DEFENSE_ATT
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block50

 Block49:
	mov ecx,edi
	call CInPacket::Decode4
	lea edx,[esi+0xA7C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xA84],eax

 Block50:
	push offset CTS_DEFENSE_STATE
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block52

 Block51:
	mov ecx,edi
	call CInPacket::Decode4
	lea edx,[esi+0xAA8]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xAB0],eax

 Block52:
	push offset CTS_DOJANG_BERSERK
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block54

 Block53:
	lea edx,[esi+0x960]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x968],eax

 Block54:
	push offset CTS_DOJANG_INVINCIBLE
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block56

 Block55:
	lea edx,[esi+0x984]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x98C],eax

 Block56:
	push offset CTS_WIND_WALK
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block58

 Block57:
	lea edx,[esi+0xBBC]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xBC4],eax

 Block58:
	push offset CTS_REPEAT_EFFECT
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block60

 Block59:
	lea edx,[esi+0xCB8]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xCC0],eax
	call CInPacket::Decode4
	lea edx,[esi+0xCC4]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xCCC],eax

 Block60:
	push offset CTS_STOP_PORTION
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block62

 Block61:
	lea edx,[esi+0xD00]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xD08],eax
	call CInPacket::Decode4
	lea edx,[esi+0xD0C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xD14],eax

 Block62:
	push offset CTS_STOP_MOTION
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block64

 Block63:
	lea edx,[esi+0xD24]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xD2C],eax
	call CInPacket::Decode4
	lea edx,[esi+0xD30]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xD38],eax

 Block64:
	push offset CTS_FEAR
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block66

 Block65:
	lea edx,[esi+0xD48]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xD50],eax
	call CInPacket::Decode4
	lea edx,[esi+0xD54]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xD5C],eax

 Block66:
	push offset CTS_MAGIC_SHIELD
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block68

 Block67:
	mov ecx,edi
	call CInPacket::Decode4
	lea edx,[esi+0xD90]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xD98],eax

 Block68:
	push offset CTS_FLYING
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block70

 Block69:
	lea edx,[esi+0xE08]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xE10],eax

 Block70:
	push offset CTS_FROZEN
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block72

 Block71:
	lea edx,[esi+0xE2C]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xE34],eax
	call CInPacket::Decode4
	lea edx,[esi+0xE38]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xE40],eax

 Block72:
	push offset CTS_SUDDEN_DEATH
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block74

 Block73:
	lea edx,[esi+0xE98]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xEA0],eax
	call CInPacket::Decode4
	lea edx,[esi+0xEA4]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xEAC],eax

 Block74:
	push offset CTS_FINAL_CUT
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block76

 Block75:
	lea edx,[esi+0xEEC]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xEF4],eax
	call CInPacket::Decode4
	lea edx,[esi+0xEF8]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xF00],eax

 Block76:
	push offset CTS_CYCLONE
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block78

 Block77:
	mov ecx,edi
	call CInPacket::Decode1
	movzx ecx,al
	lea edx,[esi+0x10FC]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1104],eax

 Block78:
	push offset CTS_SNEAK
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block80

 Block79:
	lea edx,[esi+0x1204]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x120C],eax

 Block80:
	push offset CTS_MOREWILD_DAMAGE_UP
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block82

 Block81:
	lea edx,[esi+0xF58]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xF60],eax

 Block82:
	push offset CTS_MECHANIC
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block84

 Block83:
	lea edx,[esi+0x2A0]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x2A8],eax
	call CInPacket::Decode4
	lea edx,[esi+0x2AC]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2B4],eax

 Block84:
	push offset CTS_DARK_AURA
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block86

 Block85:
	lea edx,[esi+0x864]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x86C],eax
	call CInPacket::Decode4
	lea edx,[esi+0x870]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x878],eax

 Block86:
	push offset CTS_BLUE_AURA
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block88

 Block87:
	lea edx,[esi+0x894]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x89C],eax
	call CInPacket::Decode4
	lea edx,[esi+0x8A0]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x8A8],eax

 Block88:
	push offset CTS_YELLOW_AURA
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block90

 Block89:
	lea edx,[esi+0x8C4]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x8CC],eax
	call CInPacket::Decode4
	lea edx,[esi+0x8D0]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x8D8],eax

 Block90:
	push offset CTS_BLESSING_ARMOR
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block92

 Block91:
	lea edx,[esi+0x12C8]
	mov ecx,1
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x12D0],eax

 Block92:
	mov ecx,edi
	call CInPacket::Decode1
	lea edx,[esi+0xA74]
	mov cl,al
	call _ZtlSecureTearHelper<char>::call
	mov ecx,edi
	mov dword ptr [esi+0xA78],eax
	call CInPacket::Decode1
	lea edx,[esi+0xAA0]
	mov cl,al
	call _ZtlSecureTearHelper<char>::call
	mov dword ptr [esi+0xAA4],eax
	xor ebx,ebx
	add esi,0x13BC
	lea ecx,[ecx]

 Block93:
	push 0x80
	lea edx,[ebx+0x7A]
	push edx
	push 1
	lea ecx,[esp+0x38]
	call MY_UINT128::_ctor_1
	mov ecx,eax
	call MY_UINT128::shiftLeft
	push eax
	lea ecx,[esp+0x24]
	call MY_UINT128::_ctor_2
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x40]
	push ecx
	lea ecx,[esp+0x14]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block95

 Block94:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x18]
	push edi
	call eax

 Block95:
	inc ebx
	add esi,8
	cmp ebx,7
	jl Block93

 Block96:
	mov esi,dword ptr [esp+0x50]
	push 0x80
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,esi
	call MY_UINT128::_ctor_2
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	add esp,0x40
	ret 8
}
}
// NoExpire::Decode
__SUB_CLASS_THIS(00320820, __thiscall, 7120, NoExpire, void, CInPacket &) {
__asm {

 Block0:
	ret 4
}
}
// NoExpire::IsExpiredAt
__SUB_CLASS_THIS(003207E0, __thiscall, 7116, NoExpire, bool, unsigned long, unsigned long) {
__asm {

 Block0:
	xor al,al
	ret 8
}
}
// MobStat::~MobStat
__SUB_CLASS_THIS0(00240930, __thiscall, 7797, MobStat, void) {
__asm {

 Block0:
	add ecx,0x224
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<MobStat::BURNED_INFO>::`vftable'
	jmp  ZList<MobStat::BURNED_INFO>::RemoveAll
}
}
// BasicStat::Clear
__SUB_CLASS_THIS0(0007F6F0, __thiscall, 7626, BasicStat, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea edx,[esi+0x18]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xC]
	xor ecx,ecx
	mov dword ptr [esi+0x20],eax
	call _ZtlSecureTearHelper<long>::call
	mov edx,esi
	xor ecx,ecx
	mov dword ptr [esi+0x14],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x48]
	xor ecx,ecx
	mov dword ptr [esi+8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x3C]
	xor ecx,ecx
	mov dword ptr [esi+0x50],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x30]
	xor ecx,ecx
	mov dword ptr [esi+0x44],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x24]
	xor ecx,ecx
	mov dword ptr [esi+0x38],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x6C]
	xor ecx,ecx
	mov dword ptr [esi+0x2C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x60]
	xor ecx,ecx
	mov dword ptr [esi+0x74],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x54]
	xor ecx,ecx
	mov dword ptr [esi+0x68],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x5C],eax
	pop esi
	ret
}
}
// SecondaryStat::SetFrom
_SUB_EXCEPTION_HANDLER(333A70)
__SUB_CLASS_THIS(00333A70, __thiscall, 7683, SecondaryStat, void, const CharacterData &, const BasicStat &, const ForcedStat &, ZRef<GW_ItemSlotBase> *, ZRef<GW_ItemSlotBase> *, ZRef<GW_ItemSlotBase> *, ZRef<GW_ItemSlotBase> *) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_333A70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xE0
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0xC8],ecx
	mov dword ptr [ebp-0xB0],0
	mov ecx,dword ptr [ebp+0xC]
	call BasicStat::_ZtlSecureGet_nJob
	push eax
	call get_job_category
	add esp,4
	mov dword ptr [ebp-0x38],eax
	xor edx,edx
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nPAD
	xor edx,edx
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nPDD
	xor edx,edx
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nMAD
	xor edx,edx
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nMDD
	xor edx,edx
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nACC
	xor edx,edx
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nEVA
	xor edx,edx
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nItemPADR
	xor edx,edx
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nItemPDDR
	xor edx,edx
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nItemMADR
	xor edx,edx
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nItemMDDR
	xor edx,edx
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nItemACCR
	xor edx,edx
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nItemEVAR
	mov ecx,dword ptr [ebp+0xC]
	call BasicStat::_ZtlSecureGet_nINT
	mov esi,eax
	mov ecx,dword ptr [ebp+0xC]
	call BasicStat::_ZtlSecureGet_nDEX
	add esi,eax
	mov ecx,dword ptr [ebp+0xC]
	call BasicStat::_ZtlSecureGet_nLUK
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nCraft
	mov edx,0x64
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nSpeed
	mov edx,0x64
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nJump
	mov ecx,dword ptr [ebp+8]
	add ecx,0x521
	call ZMap<long, EQUIPPED_SETITEM, long>::GetHeadPosition
	mov dword ptr [ebp-0x4C],eax

 Block1:
	cmp dword ptr [ebp-0x4C],0
	je Block12

 Block2:
	lea ecx,[ebp-0x60]
	call EQUIPPED_SETITEM::_ctor_default
	mov dword ptr [ebp-4],0
	lea eax,[ebp-0x60]
	push eax
	lea ecx,[ebp-0x4C]
	push ecx
	mov ecx,dword ptr [ebp+8]
	add ecx,0x521
	call ZMap<long, EQUIPPED_SETITEM, long>::GetNext
	lea ecx,[ebp-0x54]
	call ZRef<CItemInfo::SETITEMINFO>::_ctor_default
	mov byte ptr [ebp-4],1
	lea edx,[ebp-0x54]
	push edx
	lea eax,[ebp-0x60]
	push eax
	call TSingleton<CItemInfo>::GetInstance
	mov ecx,eax
	call CItemInfo::GetSetItemInfo
	mov ecx,eax
	call ZMap<long, ZRef<CItemInfo::SETITEMINFO>, long>::GetAt
	test eax,eax
	je Block11

 Block3:
	mov dword ptr [ebp-0x64],0
	jmp Block5

 Block4:
	mov ecx,dword ptr [ebp-0x64]
	add ecx,1
	mov dword ptr [ebp-0x64],ecx

 Block5:
	mov edx,dword ptr [ebp-0x64]
	cmp edx,dword ptr [ebp-0x5C]
	jge Block11

 Block6:
	lea ecx,[ebp-0x54]
	call ZRef<CItemInfo::SETITEMINFO>::op_arrow
	mov ecx,dword ptr [ebp-0x64]
	lea ecx,[eax+ecx*8+8]
	call ZRef<CItemInfo::SETEFFECT>::op_star
	test eax,eax
	je Block10

 Block7:
	cmp dword ptr [ebp-0x64],0
	jl Block10

 Block8:
	cmp dword ptr [ebp-0x64],0x3C
	jg Block10

 Block9:
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nPAD
	mov esi,eax
	lea ecx,[ebp-0x54]
	call ZRef<CItemInfo::SETITEMINFO>::op_arrow
	mov edx,dword ptr [ebp-0x64]
	lea ecx,[eax+edx*8+8]
	call ZRef<CItemInfo::SETEFFECT>::op_arrow
	movsx eax,word ptr [eax+0xC]
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nPAD
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nPDD
	mov esi,eax
	lea ecx,[ebp-0x54]
	call ZRef<CItemInfo::SETITEMINFO>::op_arrow
	mov ecx,dword ptr [ebp-0x64]
	lea ecx,[eax+ecx*8+8]
	call ZRef<CItemInfo::SETEFFECT>::op_arrow
	movsx edx,word ptr [eax+0x10]
	add edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nPDD
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nMAD
	mov esi,eax
	lea ecx,[ebp-0x54]
	call ZRef<CItemInfo::SETITEMINFO>::op_arrow
	mov ecx,dword ptr [ebp-0x64]
	lea ecx,[eax+ecx*8+8]
	call ZRef<CItemInfo::SETEFFECT>::op_arrow
	movsx edx,word ptr [eax+0xE]
	add edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nMAD
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nMDD
	mov esi,eax
	lea ecx,[ebp-0x54]
	call ZRef<CItemInfo::SETITEMINFO>::op_arrow
	mov ecx,dword ptr [ebp-0x64]
	lea ecx,[eax+ecx*8+8]
	call ZRef<CItemInfo::SETEFFECT>::op_arrow
	movsx edx,word ptr [eax+0x12]
	add edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nMDD
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nACC
	mov esi,eax
	lea ecx,[ebp-0x54]
	call ZRef<CItemInfo::SETITEMINFO>::op_arrow
	mov ecx,dword ptr [ebp-0x64]
	lea ecx,[eax+ecx*8+8]
	call ZRef<CItemInfo::SETEFFECT>::op_arrow
	movsx edx,word ptr [eax+0x14]
	add edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nACC
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nEVA
	mov esi,eax
	lea ecx,[ebp-0x54]
	call ZRef<CItemInfo::SETITEMINFO>::op_arrow
	mov ecx,dword ptr [ebp-0x64]
	lea ecx,[eax+ecx*8+8]
	call ZRef<CItemInfo::SETEFFECT>::op_arrow
	movsx edx,word ptr [eax+0x16]
	add edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nEVA
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nJump
	mov esi,eax
	lea ecx,[ebp-0x54]
	call ZRef<CItemInfo::SETITEMINFO>::op_arrow
	mov ecx,dword ptr [ebp-0x64]
	lea ecx,[eax+ecx*8+8]
	call ZRef<CItemInfo::SETEFFECT>::op_arrow
	movsx edx,word ptr [eax+0x1C]
	add edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nJump
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nSpeed
	mov esi,eax
	lea ecx,[ebp-0x54]
	call ZRef<CItemInfo::SETITEMINFO>::op_arrow
	mov ecx,dword ptr [ebp-0x64]
	lea ecx,[eax+ecx*8+8]
	call ZRef<CItemInfo::SETEFFECT>::op_arrow
	movsx edx,word ptr [eax+0x1A]
	add edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nSpeed

 Block10:
	jmp Block4

 Block11:
	mov byte ptr [ebp-4],0
	lea ecx,[ebp-0x54]
	call ZRef<CItemInfo::SETITEMINFO>::~ZRef<CItemInfo::SETITEMINFO>
	mov dword ptr [ebp-4],0xFFFFFFFF
	lea ecx,[ebp-0x60]
	call EQUIPPED_SETITEM::~EQUIPPED_SETITEM
	jmp Block1

 Block12:
	lea ecx,[ebp-0x24]
	call SecondaryStatRateOption::_ctor_default
	mov dword ptr [ebp-0x68],0xFFFFFFFF
	jmp Block14

 Block13:
	mov eax,dword ptr [ebp-0x68]
	sub eax,1
	mov dword ptr [ebp-0x68],eax

 Block14:
	cmp dword ptr [ebp-0x68],0xFFFFFF8A
	jl Block43

 Block15:
	cmp dword ptr [ebp-0x68],0xFFFFFFC5
	jge Block17

 Block16:
	mov ecx,dword ptr [ebp-0x68]
	neg ecx
	mov edx,dword ptr [ebp+0x18]
	lea eax,[edx+ecx*8-0x1D8]
	mov dword ptr [ebp-0xCC],eax
	jmp Block18

 Block17:
	mov ecx,dword ptr [ebp-0x68]
	neg ecx
	mov edx,dword ptr [ebp+0x14]
	lea eax,[edx+ecx*8]
	mov dword ptr [ebp-0xCC],eax

 Block18:
	mov ecx,dword ptr [ebp-0xCC]
	mov dword ptr [ebp-0x9C],ecx
	mov edx,dword ptr [ebp-0x9C]
	mov dword ptr [ebp-0x6C],edx
	mov ecx,dword ptr [ebp-0x6C]
	call ZRef<GW_ItemSlotBase>::op_not
	test eax,eax
	je Block26

 Block19:
	cmp dword ptr [ebp-0x68],0xFFFFFFF5
	jne Block25

 Block20:
	mov ecx,dword ptr [ebp+0xC]
	call BasicStat::_ZtlSecureGet_nJob
	push eax
	call get_job_category
	add esp,4
	cmp eax,5
	jne Block25

 Block21:
	mov ecx,dword ptr [ebp+0xC]
	call BasicStat::_ZtlSecureGet_nLevel
	cmp eax,0x1E
	jg Block23

 Block22:
	mov ecx,dword ptr [ebp+0xC]
	call BasicStat::_ZtlSecureGet_nLevel
	mov dword ptr [ebp-0xD0],eax
	fild dword ptr [ebp-0xD0]
	fmul qword ptr [__real_3fe6666666666666]
	fadd qword ptr [__real_4024000000000000]
	fstp qword ptr [ebp-0xD8]
	jmp Block24

 Block23:
	fld qword ptr [__real_403f000000000000]
	fstp qword ptr [ebp-0xD8]

 Block24:
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nPAD
	mov dword ptr [ebp-0xDC],eax
	fild dword ptr [ebp-0xDC]
	fadd qword ptr [ebp-0xD8]
	call __ftol2_sse
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nPAD

 Block25:
	jmp Block13

 Block26:
	cmp dword ptr [ebp-0x68],0xFFFFFFE2
	je Block32

 Block27:
	cmp dword ptr [ebp-0x68],0xFFFFFFDA
	je Block32

 Block28:
	cmp dword ptr [ebp-0x68],0xFFFFFFE1
	je Block32

 Block29:
	cmp dword ptr [ebp-0x68],0xFFFFFFD9
	je Block32

 Block30:
	cmp dword ptr [ebp-0x68],0xFFFFFFE0
	je Block32

 Block31:
	cmp dword ptr [ebp-0x68],0xFFFFFFD8
	jne Block33

 Block32:
	jmp Block13

 Block33:
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::IsRidingTamedMob
	test eax,eax
	jne Block38

 Block34:
	cmp dword ptr [ebp-0x68],0xFFFFFFEE
	je Block37

 Block35:
	cmp dword ptr [ebp-0x68],0xFFFFFFED
	je Block37

 Block36:
	cmp dword ptr [ebp-0x68],0xFFFFFFEC
	jne Block38

 Block37:
	jmp Block13

 Block38:
	mov ecx,dword ptr [ebp-0x6C]
	call ZRef<GW_ItemSlotBase>::op_star_access
	push eax
	call rc_equip
	add esp,4
	mov dword ptr [ebp-0x74],eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nPAD
	mov esi,eax
	mov ecx,dword ptr [ebp-0x74]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niPAD
	cwde
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nPAD
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nPDD
	mov esi,eax
	mov ecx,dword ptr [ebp-0x74]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niPDD
	movsx ecx,ax
	add esi,ecx
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nPDD
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nMAD
	mov esi,eax
	mov ecx,dword ptr [ebp-0x74]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niMAD
	movsx edx,ax
	add edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nMAD
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nMDD
	mov esi,eax
	mov ecx,dword ptr [ebp-0x74]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niMDD
	cwde
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nMDD
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nACC
	mov esi,eax
	mov ecx,dword ptr [ebp-0x74]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niACC
	movsx ecx,ax
	add esi,ecx
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nACC
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nEVA
	mov esi,eax
	mov ecx,dword ptr [ebp-0x74]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niEVA
	movsx edx,ax
	add edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nEVA
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nCraft
	mov esi,eax
	mov ecx,dword ptr [ebp-0x74]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niCraft
	cwde
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nCraft
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nSpeed
	mov esi,eax
	mov ecx,dword ptr [ebp-0x74]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niSpeed
	movsx ecx,ax
	add esi,ecx
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nSpeed
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nJump
	mov esi,eax
	mov ecx,dword ptr [ebp-0x74]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niJump
	movsx edx,ax
	add edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nJump
	mov ecx,dword ptr [ebp-0x74]
	add ecx,0xC
	call TSecType<long>::op_t
	push eax
	call TSingleton<CItemInfo>::GetInstance
	mov ecx,eax
	call CItemInfo::GetEquipItem
	mov dword ptr [ebp-0x70],eax
	cmp dword ptr [ebp-0x70],0
	je Block42

 Block39:
	mov ecx,dword ptr [ebp-0x70]
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nrLevel
	sub eax,1
	cdq
	mov ecx,0xA
	idiv ecx
	mov dword ptr [ebp-0x78],eax
	mov edx,dword ptr [ebp-0x78]
	push edx
	mov ecx,dword ptr [ebp-0x74]
	add ecx,0x105
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nSocket1
	cwde
	push eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::ApplySocketOption
	mov ecx,dword ptr [ebp-0x78]
	push ecx
	mov ecx,dword ptr [ebp-0x74]
	add ecx,0x105
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nSocket2
	movsx edx,ax
	push edx
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::ApplySocketOption
	lea eax,[ebp-0x24]
	push eax
	mov ecx,dword ptr [ebp-0x78]
	push ecx
	mov ecx,dword ptr [ebp-0x74]
	add ecx,0x105
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nSocket1
	movsx edx,ax
	push edx
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::ApplySocketOptionR
	lea eax,[ebp-0x24]
	push eax
	mov ecx,dword ptr [ebp-0x78]
	push ecx
	mov ecx,dword ptr [ebp-0x74]
	add ecx,0x105
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nSocket2
	movsx edx,ax
	push edx
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::ApplySocketOptionR
	mov eax,dword ptr [ebp-0x74]
	mov edx,dword ptr [eax]
	mov ecx,dword ptr [ebp-0x74]
	mov eax,dword ptr [edx+0x78]
	call eax
	test eax,eax
	jne Block41

 Block40:
	jmp Block13

 Block41:
	mov ecx,dword ptr [ebp-0x78]
	push ecx
	mov ecx,dword ptr [ebp-0x74]
	add ecx,0x105
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption1
	movsx edx,ax
	push edx
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::ApplyItemOption
	mov eax,dword ptr [ebp-0x78]
	push eax
	mov ecx,dword ptr [ebp-0x74]
	add ecx,0x105
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption2
	movsx ecx,ax
	push ecx
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::ApplyItemOption
	mov edx,dword ptr [ebp-0x78]
	push edx
	mov ecx,dword ptr [ebp-0x74]
	add ecx,0x105
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption3
	cwde
	push eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::ApplyItemOption
	lea ecx,[ebp-0x24]
	push ecx
	mov edx,dword ptr [ebp-0x78]
	push edx
	mov ecx,dword ptr [ebp-0x74]
	add ecx,0x105
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption1
	cwde
	push eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::ApplyItemOptionR
	lea ecx,[ebp-0x24]
	push ecx
	mov edx,dword ptr [ebp-0x78]
	push edx
	mov ecx,dword ptr [ebp-0x74]
	add ecx,0x105
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption2
	cwde
	push eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::ApplyItemOptionR
	lea ecx,[ebp-0x24]
	push ecx
	mov edx,dword ptr [ebp-0x78]
	push edx
	mov ecx,dword ptr [ebp-0x74]
	add ecx,0x105
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption3
	cwde
	push eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::ApplyItemOptionR

 Block42:
	jmp Block13

 Block43:
	mov dword ptr [ebp-0x68],0
	jmp Block45

 Block44:
	mov ecx,dword ptr [ebp-0x68]
	add ecx,1
	mov dword ptr [ebp-0x68],ecx

 Block45:
	cmp dword ptr [ebp-0x68],4
	jge Block49

 Block46:
	mov edx,dword ptr [ebp-0x68]
	mov eax,dword ptr [ebp+0x1C]
	lea ecx,[eax+edx*8]
	mov dword ptr [ebp-0x7C],ecx
	mov ecx,dword ptr [ebp-0x7C]
	call ZRef<GW_ItemSlotBase>::op_not
	test eax,eax
	je Block48

 Block47:
	jmp Block44

 Block48:
	mov ecx,dword ptr [ebp-0x7C]
	call ZRef<GW_ItemSlotBase>::op_star_access
	push eax
	call rc_equip
	add esp,4
	mov dword ptr [ebp-0x80],eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nPAD
	mov esi,eax
	mov ecx,dword ptr [ebp-0x80]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niPAD
	movsx edx,ax
	add edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nPAD
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nPDD
	mov esi,eax
	mov ecx,dword ptr [ebp-0x80]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niPDD
	cwde
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nPDD
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nMAD
	mov esi,eax
	mov ecx,dword ptr [ebp-0x80]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niMAD
	movsx ecx,ax
	add esi,ecx
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nMAD
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nMDD
	mov esi,eax
	mov ecx,dword ptr [ebp-0x80]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niMDD
	movsx edx,ax
	add edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nMDD
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nACC
	mov esi,eax
	mov ecx,dword ptr [ebp-0x80]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niACC
	cwde
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nACC
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nEVA
	mov esi,eax
	mov ecx,dword ptr [ebp-0x80]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niEVA
	movsx ecx,ax
	add esi,ecx
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nEVA
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nCraft
	mov esi,eax
	mov ecx,dword ptr [ebp-0x80]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niCraft
	movsx edx,ax
	add edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nCraft
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nSpeed
	mov esi,eax
	mov ecx,dword ptr [ebp-0x80]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niSpeed
	cwde
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nSpeed
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nJump
	mov esi,eax
	mov ecx,dword ptr [ebp-0x80]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niJump
	movsx ecx,ax
	add esi,ecx
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nJump
	jmp Block44

 Block49:
	mov dword ptr [ebp-0x68],0
	jmp Block51

 Block50:
	mov edx,dword ptr [ebp-0x68]
	add edx,1
	mov dword ptr [ebp-0x68],edx

 Block51:
	cmp dword ptr [ebp-0x68],5
	jge Block55

 Block52:
	mov eax,dword ptr [ebp-0x68]
	mov ecx,dword ptr [ebp+0x20]
	lea edx,[ecx+eax*8]
	mov dword ptr [ebp-0x84],edx
	mov ecx,dword ptr [ebp-0x84]
	call ZRef<GW_ItemSlotBase>::op_not
	test eax,eax
	je Block54

 Block53:
	jmp Block50

 Block54:
	mov ecx,dword ptr [ebp-0x84]
	call ZRef<GW_ItemSlotBase>::op_star_access
	push eax
	call rc_equip
	add esp,4
	mov dword ptr [ebp-0x88],eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nPAD
	mov esi,eax
	mov ecx,dword ptr [ebp-0x88]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niPAD
	cwde
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nPAD
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nPDD
	mov esi,eax
	mov ecx,dword ptr [ebp-0x88]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niPDD
	movsx ecx,ax
	add esi,ecx
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nPDD
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nMAD
	mov esi,eax
	mov ecx,dword ptr [ebp-0x88]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niMAD
	movsx edx,ax
	add edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nMAD
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nMDD
	mov esi,eax
	mov ecx,dword ptr [ebp-0x88]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niMDD
	cwde
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nMDD
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nACC
	mov esi,eax
	mov ecx,dword ptr [ebp-0x88]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niACC
	movsx ecx,ax
	add esi,ecx
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nACC
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nEVA
	mov esi,eax
	mov ecx,dword ptr [ebp-0x88]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niEVA
	movsx edx,ax
	add edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nEVA
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nCraft
	mov esi,eax
	mov ecx,dword ptr [ebp-0x88]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niCraft
	cwde
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nCraft
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nSpeed
	mov esi,eax
	mov ecx,dword ptr [ebp-0x88]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niSpeed
	movsx ecx,ax
	add esi,ecx
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nSpeed
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nJump
	mov esi,eax
	mov ecx,dword ptr [ebp-0x88]
	add ecx,0x49
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niJump
	movsx edx,ax
	add edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nJump
	jmp Block50

 Block55:
	mov dword ptr [ebp-0x2C],0
	mov dword ptr [ebp-0x30],0
	push offset _D_S_PTHIEFNIMBLEBO
	push 0x3D0900
	mov eax,dword ptr [ebp+8]
	push eax
	call TSingleton<CSkillInfo>::GetInstance
	mov ecx,eax
	call CSkillInfo::GetSkillLevel_0
	mov dword ptr [ebp-0x44],eax
	cmp dword ptr [ebp-0x44],0
	je Block57

 Block56:
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nACC
	mov esi,eax
	mov ecx,dword ptr [ebp-0x44]
	push ecx
	mov ecx,dword ptr [_D_S_PTHIEFNIMBLEBO]
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nX
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nACC
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nEVA
	mov esi,eax
	mov edx,dword ptr [ebp-0x44]
	push edx
	mov ecx,dword ptr [_D_S_PTHIEFNIMBLEBO]
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nY
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nEVA

 Block57:
	push offset _D_S_PNIGHTWALKERNI
	push 0xD59F80
	mov eax,dword ptr [ebp+8]
	push eax
	call TSingleton<CSkillInfo>::GetInstance
	mov ecx,eax
	call CSkillInfo::GetSkillLevel_0
	mov dword ptr [ebp-0x44],eax
	cmp dword ptr [ebp-0x44],0
	je Block59

 Block58:
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nACC
	mov esi,eax
	mov ecx,dword ptr [ebp-0x44]
	push ecx
	mov ecx,dword ptr [_D_S_PNIGHTWALKERNI]
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nX
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nACC
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nEVA
	mov esi,eax
	mov edx,dword ptr [ebp-0x44]
	push edx
	mov ecx,dword ptr [_D_S_PNIGHTWALKERNI]
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nY
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nEVA

 Block59:
	push offset _D_S_PPIRATEQUICKMO
	push 0x4C4B40
	mov eax,dword ptr [ebp+8]
	push eax
	call TSingleton<CSkillInfo>::GetInstance
	mov ecx,eax
	call CSkillInfo::GetSkillLevel_0
	mov dword ptr [ebp-0x44],eax
	cmp dword ptr [ebp-0x44],0
	je Block61

 Block60:
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nACC
	mov esi,eax
	mov ecx,dword ptr [ebp-0x44]
	push ecx
	mov ecx,dword ptr [_D_S_PPIRATEQUICKMO]
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nX
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nACC
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nEVA
	mov esi,eax
	mov edx,dword ptr [ebp-0x44]
	push edx
	mov ecx,dword ptr [_D_S_PPIRATEQUICKMO]
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nY
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nEVA

 Block61:
	push offset _D_S_PSTRIKERQUICKM
	push 0xE4E1C0
	mov eax,dword ptr [ebp+8]
	push eax
	call TSingleton<CSkillInfo>::GetInstance
	mov ecx,eax
	call CSkillInfo::GetSkillLevel_0
	mov dword ptr [ebp-0x44],eax
	cmp dword ptr [ebp-0x44],0
	je Block63

 Block62:
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nACC
	mov esi,eax
	mov ecx,dword ptr [ebp-0x44]
	push ecx
	mov ecx,dword ptr [_D_S_PSTRIKERQUICKM]
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nX
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nACC
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nEVA
	mov esi,eax
	mov edx,dword ptr [ebp-0x44]
	push edx
	mov ecx,dword ptr [_D_S_PSTRIKERQUICKM]
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nY
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nEVA

 Block63:
	push offset _D_S_PEVANDRAGONSOU
	push 0x14FB180
	mov eax,dword ptr [ebp+8]
	push eax
	call TSingleton<CSkillInfo>::GetInstance
	mov ecx,eax
	call CSkillInfo::GetSkillLevel_0
	mov dword ptr [ebp-0x44],eax
	cmp dword ptr [ebp-0x44],0
	je Block65

 Block64:
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nMAD
	mov esi,eax
	mov ecx,dword ptr [ebp-0x44]
	push ecx
	mov ecx,dword ptr [_D_S_PEVANDRAGONSOU]
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nMAD
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nMAD

 Block65:
	lea edx,[ebp-0x30]
	push edx
	mov ecx,dword ptr [ebp+8]
	call GW_CharacterStat::_ZtlSecureGet_nJob
	cwde
	push eax
	push 0xC
	call get_novice_skill_as_race
	add esp,8
	push eax
	mov ecx,dword ptr [ebp+8]
	push ecx
	call TSingleton<CSkillInfo>::GetInstance
	mov ecx,eax
	call CSkillInfo::GetSkillLevel_0
	mov dword ptr [ebp-0x44],eax
	jmp Block67

 Block67:
	cmp dword ptr [ebp-0x44],0
	je Block74

 Block68:
	mov edx,dword ptr [ebp-0x44]
	push edx
	mov ecx,dword ptr [ebp-0x30]
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nZ
	cmp dword ptr [ebp-0x44],eax
	jne Block70

 Block69:
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nPAD
	mov esi,eax
	mov eax,dword ptr [ebp-0x44]
	push eax
	mov ecx,dword ptr [ebp-0x30]
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nX
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nPAD
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nMAD
	mov esi,eax
	mov ecx,dword ptr [ebp-0x44]
	push ecx
	mov ecx,dword ptr [ebp-0x30]
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nY
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nMAD
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nACC
	mov esi,eax
	mov edx,dword ptr [ebp-0x44]
	push edx
	mov ecx,dword ptr [ebp-0x30]
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nZ
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nACC
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nEVA
	mov esi,eax
	mov eax,dword ptr [ebp-0x44]
	push eax
	mov ecx,dword ptr [ebp-0x30]
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nZ
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nEVA
	jmp Block74

 Block70:
	xor ebx,ebx
	xor edx,edx
	xor esi,esi
	xor edi,edi
	xor ebp,ebp
	mov eax,dword ptr fs:[0x18]
	mov ecx,dword ptr [eax+8]
	mov eax,dword ptr [eax+4]

 Block71:
	cmp eax,ecx
	jbe Block73

 Block72:
	sub eax,4
	mov dword ptr [eax],ebx
	jmp Block71

 Block73:
	xor eax,eax
	xor ecx,ecx
	ret

 Block74:
	jmp Block76

 Block76:
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::IsWildhunterJaguarVehicle
	test eax,eax
	je Block79

 Block77:
	lea ecx,[ebp-0x2C]
	push ecx
	push 0x1F78E29
	mov edx,dword ptr [ebp+8]
	push edx
	call TSingleton<CSkillInfo>::GetInstance
	mov ecx,eax
	call CSkillInfo::GetSkillLevel_0
	mov dword ptr [ebp-0x44],eax
	cmp dword ptr [ebp-0x44],0
	je Block79

 Block78:
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nEVA
	mov esi,eax
	mov eax,dword ptr [ebp-0x44]
	push eax
	mov ecx,dword ptr [ebp-0x2C]
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nY
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nEVA

 Block79:
	mov ecx,dword ptr [ebp+0x14]
	add ecx,0x58
	call ZRef<GW_ItemSlotBase>::op_star_access
	test eax,eax
	je Block81

 Block80:
	mov ecx,dword ptr [ebp+0x14]
	add ecx,0x58
	call ZRef<GW_ItemSlotBase>::op_arrow
	add eax,0xC
	mov dword ptr [ebp-0xE0],eax
	jmp Block82

 Block81:
	push 0
	lea ecx,[ebp-0xAC]
	call TSecType<long>::_ctor_1
	mov dword ptr [ebp-0xE4],eax
	mov ecx,dword ptr [ebp-0xE4]
	mov dword ptr [ebp-0xE8],ecx
	mov dword ptr [ebp-4],2
	mov edx,dword ptr [ebp-0xB0]
	or edx,1
	mov dword ptr [ebp-0xB0],edx
	mov eax,dword ptr [ebp-0xE8]
	mov dword ptr [ebp-0xE0],eax

 Block82:
	mov ecx,dword ptr [ebp-0xE0]
	mov dword ptr [ebp-0xA0],ecx
	mov ecx,dword ptr [ebp-0xA0]
	call TSecType<long>::op_t
	mov dword ptr [ebp-0x34],eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	mov edx,dword ptr [ebp-0xB0]
	and edx,1
	je Block84

 Block83:
	and dword ptr [ebp-0xB0],0xFFFFFFFE
	lea ecx,[ebp-0xAC]
	call TSecType<long>::~TSecType<long>

 Block84:
	mov dword ptr [ebp-0x28],0
	mov dword ptr [ebp-0x48],0
	mov dword ptr [ebp-0x3C],0
	mov dword ptr [ebp-0x40],0
	mov ecx,dword ptr [ebp+0xC]
	call BasicStat::_ZtlSecureGet_nJob
	push eax
	call get_job_category
	add esp,4
	cmp eax,3
	je Block87

 Block85:
	mov ecx,dword ptr [ebp+0xC]
	call BasicStat::_ZtlSecureGet_nJob
	cdq
	mov ecx,0xA
	idiv ecx
	cmp eax,0x29
	je Block87

 Block86:
	mov ecx,dword ptr [ebp+0xC]
	call BasicStat::_ZtlSecureGet_nJob
	cdq
	mov ecx,0xA
	idiv ecx
	cmp eax,0x34
	jne Block88

 Block87:
	mov dword ptr [ebp-0x40],1

 Block88:
	mov ecx,dword ptr [ebp+0xC]
	call BasicStat::_ZtlSecureGet_nJob
	cdq
	mov ecx,0x64
	idiv ecx
	cmp eax,0xD
	je Block90

 Block89:
	mov ecx,dword ptr [ebp+0xC]
	call BasicStat::_ZtlSecureGet_nJob
	cdq
	mov ecx,0x64
	idiv ecx
	cmp eax,0xE
	jne Block91

 Block90:
	mov dword ptr [ebp-0x40],1

 Block91:
	lea edx,[ebp-0x48]
	push edx
	lea eax,[ebp-0x28]
	push eax
	push 0
	mov ecx,dword ptr [ebp-0x40]
	push ecx
	mov edx,dword ptr [ebp-0x34]
	push edx
	mov eax,dword ptr [ebp-0xC8]
	push eax
	mov ecx,dword ptr [ebp+8]
	push ecx
	call get_weapon_mastery
	add esp,0x1C
	test eax,eax
	je Block93

 Block92:
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nACC
	add eax,dword ptr [ebp-0x28]
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nACC
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nPAD
	add eax,dword ptr [ebp-0x48]
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nPAD

 Block93:
	mov edx,dword ptr [ebp-0x34]
	push edx
	lea eax,[ebp-0x3C]
	push eax
	mov ecx,dword ptr [ebp+8]
	push ecx
	call get_magic_mastery
	add esp,0xC
	test eax,eax
	je Block95

 Block94:
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nMAD
	add eax,dword ptr [ebp-0x3C]
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nMAD

 Block95:
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nSpeed
	mov esi,eax
	mov edx,dword ptr [ebp+8]
	push edx
	call get_increase_speed
	add esp,4
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nSpeed
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nYellowAura_
	test eax,eax
	jle Block100

 Block96:
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_rYellowAura_
	push eax
	call TSingleton<CSkillInfo>::GetInstance
	mov ecx,eax
	call CSkillInfo::GetSkill
	mov dword ptr [ebp-0x8C],eax
	cmp dword ptr [ebp-0x8C],0
	je Block100

 Block97:
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nYellowAura_
	push eax
	mov ecx,dword ptr [ebp-0x8C]
	call SKILLENTRY::GetLevelData
	mov dword ptr [ebp-0x90],eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nSpeed
	mov esi,eax
	mov ecx,dword ptr [ebp-0x90]
	call SKILLLEVELDATA::_ZtlSecureGet_nX
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nSpeed
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nSuperBody_
	test eax,eax
	jle Block100

 Block98:
	push 0x1E9F5B8
	call TSingleton<CSkillInfo>::GetInstance
	mov ecx,eax
	call CSkillInfo::GetSkill
	mov dword ptr [ebp-0x94],eax
	cmp dword ptr [ebp-0x94],0
	je Block100

 Block99:
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nSuperBody_
	push eax
	mov ecx,dword ptr [ebp-0x94]
	call SKILLENTRY::GetLevelData
	mov dword ptr [ebp-0x98],eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nSpeed
	mov esi,eax
	mov ecx,dword ptr [ebp-0x98]
	call SKILLLEVELDATA::_ZtlSecureGet_nX
	add esi,eax
	mov edx,esi
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nSpeed

 Block100:
	mov ecx,dword ptr [ebp+0x10]
	call ForcedStat::_ZtlSecureGet_nPAD
	test eax,eax
	jle Block102

 Block101:
	mov ecx,dword ptr [ebp+0x10]
	call ForcedStat::_ZtlSecureGet_nPAD
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nPAD

 Block102:
	mov ecx,dword ptr [ebp+0x10]
	call ForcedStat::_ZtlSecureGet_nPDD
	test eax,eax
	jle Block104

 Block103:
	mov ecx,dword ptr [ebp+0x10]
	call ForcedStat::_ZtlSecureGet_nPDD
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nPDD

 Block104:
	mov ecx,dword ptr [ebp+0x10]
	call ForcedStat::_ZtlSecureGet_nMAD
	test eax,eax
	jle Block106

 Block105:
	mov ecx,dword ptr [ebp+0x10]
	call ForcedStat::_ZtlSecureGet_nMAD
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nMAD

 Block106:
	mov ecx,dword ptr [ebp+0x10]
	call ForcedStat::_ZtlSecureGet_nMDD
	test eax,eax
	jle Block108

 Block107:
	mov ecx,dword ptr [ebp+0x10]
	call ForcedStat::_ZtlSecureGet_nMDD
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nMDD

 Block108:
	mov ecx,dword ptr [ebp+0x10]
	call ForcedStat::_ZtlSecureGet_nACC
	test eax,eax
	jle Block110

 Block109:
	mov ecx,dword ptr [ebp+0x10]
	call ForcedStat::_ZtlSecureGet_nACC
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nACC

 Block110:
	mov ecx,dword ptr [ebp+0x10]
	call ForcedStat::_ZtlSecureGet_nEVA
	test eax,eax
	jle Block112

 Block111:
	mov ecx,dword ptr [ebp+0x10]
	call ForcedStat::_ZtlSecureGet_nEVA
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nEVA

 Block112:
	mov ecx,dword ptr [ebp+0x10]
	call ForcedStat::_ZtlSecureGet_nSpeed
	test eax,eax
	jle Block114

 Block113:
	mov ecx,dword ptr [ebp+0x10]
	call ForcedStat::_ZtlSecureGet_nSpeed
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nSpeed

 Block114:
	mov ecx,dword ptr [ebp+0x10]
	call ForcedStat::_ZtlSecureGet_nJump
	test eax,eax
	jle Block116

 Block115:
	mov ecx,dword ptr [ebp+0x10]
	call ForcedStat::_ZtlSecureGet_nJump
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nJump

 Block116:
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nItemPADR
	add eax,dword ptr [ebp-0x24]
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nItemPADR
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nItemPDDR
	add eax,dword ptr [ebp-0x20]
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nItemPDDR
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nItemMADR
	add eax,dword ptr [ebp-0x1C]
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nItemMADR
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nItemMDDR
	add eax,dword ptr [ebp-0x18]
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nItemMDDR
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nItemACCR
	add eax,dword ptr [ebp-0x14]
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nItemACCR
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nItemEVAR
	add eax,dword ptr [ebp-0x10]
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nItemEVAR
	push 0x752F
	push 0
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nPAD
	push eax
	call _zmax_long
	add esp,8
	push eax
	call _zmin_long
	add esp,8
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nPAD
	push 0x7530
	push 0
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nPDD
	push eax
	call _zmax_long
	add esp,8
	push eax
	call _zmin_long
	add esp,8
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nPDD
	push 0x752F
	push 0
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nMAD
	push eax
	call _zmax_long
	add esp,8
	push eax
	call _zmin_long
	add esp,8
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nMAD
	push 0x7530
	push 0
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nMDD
	push eax
	call _zmax_long
	add esp,8
	push eax
	call _zmin_long
	add esp,8
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nMDD
	push 0x270F
	push 0
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nACC
	push eax
	call _zmax_long
	add esp,8
	push eax
	call _zmin_long
	add esp,8
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nACC
	push 0x270F
	push 0
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nEVA
	push eax
	call _zmax_long
	add esp,8
	push eax
	call _zmin_long
	add esp,8
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nEVA
	mov ecx,dword ptr [ebp+0x10]
	call ForcedStat::_ZtlSecureGet_nSpeedMax
	test eax,eax
	je Block118

 Block117:
	mov ecx,dword ptr [ebp+0x10]
	call ForcedStat::_ZtlSecureGet_nSpeedMax
	mov dword ptr [ebp-0xEC],eax
	jmp Block119

 Block118:
	mov dword ptr [ebp-0xEC],0x8C

 Block119:
	mov eax,dword ptr [ebp-0xEC]
	push eax
	push 0x64
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nSpeed
	push eax
	call _zmax_long
	add esp,8
	push eax
	call _zmin_long
	add esp,8
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nSpeed
	push 0x7B
	push 0x64
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecureGet_nJump
	push eax
	call _zmax_long
	add esp,8
	push eax
	call _zmin_long
	add esp,8
	mov edx,eax
	mov ecx,dword ptr [ebp-0xC8]
	call SecondaryStat::_ZtlSecurePut_nJump
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0x1C
}
}
// BasicStat::_ZtlSecurePut_nINT
__SUB_CLASS(0007F670, __fastcall, 7612, BasicStat, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x3C]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x44],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// MobStat::SetFrom
__SUB_CLASS_THIS(003249F0, __thiscall, 7773, MobStat, void, const CMobTemplate *) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	push edi
	push 0x238
	mov ebp,ecx
	push 0
	push ebp
	call _memset
	mov ebx,dword ptr [esp+0x20]
	mov eax,dword ptr [ebx+0x78]
	push eax
	lea ecx,[ebx+0x70]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [ebp],eax
	lea esi,[ebx+0x118]
	lea edi,[ebp+4]
	mov ecx,8
	rep movsd
	mov edx,dword ptr [ebx+0xC0]
	push edx
	lea eax,[ebx+0xB8]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [ebp+0x24],eax
	mov ecx,dword ptr [ebx+0xCC]
	push ecx
	lea edx,[ebx+0xC4]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [ebp+0x34],eax
	mov eax,dword ptr [ebx+0xD8]
	push eax
	lea ecx,[ebx+0xD0]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [ebp+0x44],eax
	mov edx,dword ptr [ebx+0xE4]
	push edx
	lea eax,[ebx+0xDC]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [ebp+0x54],eax
	mov ecx,dword ptr [ebx+0xF0]
	push ecx
	lea edx,[ebx+0xE8]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [ebp+0x64],eax
	mov eax,dword ptr [ebx+0xFC]
	push eax
	lea ecx,[ebx+0xF4]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [ebp+0x74],eax
	mov edx,dword ptr [ebx+0x48]
	add esp,0x44
	push edx
	lea eax,[ebx+0x40]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,4
	jne Block2

 Block1:
	mov ecx,dword ptr [ebx+0xA8]
	push ecx
	lea edx,[ebx+0xA0]
	push edx
	jmp Block3

 Block2:
	mov eax,dword ptr [ebx+0x9C]
	push eax
	lea ecx,[ebx+0x94]
	push ecx

 Block3:
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [ebp+0x84],eax
	fld qword ptr [ebx+0x150]
	fstp qword ptr [ebp+0x210]
	mov edx,dword ptr [ebx+0x190]
	add esp,8
	push edx
	lea eax,[ebx+0x188]
	push eax
	call _ZtlSecureFuseHelper<int>::call
	mov dword ptr [ebp+0x218],eax
	mov ecx,dword ptr [ebx+0x19C]
	push ecx
	lea edx,[ebx+0x194]
	push edx
	call _ZtlSecureFuseHelper<int>::call
	mov dword ptr [ebp+0x21C],eax
	mov eax,dword ptr [ebx+0x2BC]
	push eax
	add ebx,0x2B4
	push ebx
	call _ZtlSecureFuseHelper<int>::call
	add esp,0x18
	pop edi
	pop esi
	mov dword ptr [ebp+0x220],eax
	pop ebp
	pop ebx
	ret 4
}
}
// CalcDamage::MDamage
__SUB_CLASS_THIS(00326970, __thiscall, 7823, CalcDamage, long, const MobStat &, const MobStat &) {
__asm {

 Block0:
	push esi
	sub ecx,0xFFFFFF80
	call CRand32::Random
	mov esi,dword ptr [esp+0xC]
	mov ecx,dword ptr [esi]
	push ecx
	mov ecx,dword ptr [esp+0xC]
	mov edx,dword ptr [ecx]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x44]
	push eax
	call _anon_calc_mob_base_damamge
	add esp,0x10
	call __ftol2_sse
	mov dword ptr [esp+0xC],eax
	fild dword ptr [esp+0xC]
	fild dword ptr [esi+0x54]
	fld qword ptr [__real_4059000000000000]
	fld st(0)
	fsubrp st(2),st
	fdivp st(1),st(0)
	fmulp st(1),st(0)
	call __ftol2_sse
	pop esi
	ret 8
}
}
// SecondaryStat::_ZtlSecurePut_nSpeed
__SUB_CLASS(00327400, __fastcall, 7639, SecondaryStat, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x198]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x1A0],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// BasicStat::ApplyItemOptionR
_SUB_EXCEPTION_HANDLER(32FA90)
__SUB_CLASS_THIS(0032FA90, __thiscall, 7625, BasicStat, void, long, long, BasicStatRateOption &) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_32FA90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x24]
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemOptionInfo>::ms_pInstance]
	call CItemOptionInfo::GetItemOption
	mov edx,dword ptr [esp+0x10]
	test edx,edx
	je Block4

 Block1:
	mov ecx,dword ptr [esp+0x28]
	mov eax,dword ptr [esp+0x2C]
	imul ecx,0xE0
	add ecx,dword ptr [edx+0xC]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	mov esi,dword ptr [ecx+0x48]
	add dword ptr [eax],esi
	mov esi,dword ptr [ecx+0x50]
	add dword ptr [eax+8],esi
	mov esi,dword ptr [ecx+0x4C]
	add dword ptr [eax+4],esi
	mov esi,dword ptr [ecx+0x54]
	add dword ptr [eax+0xC],esi
	mov esi,dword ptr [ecx+0x58]
	add dword ptr [eax+0x10],esi
	mov ecx,dword ptr [ecx+0x5C]
	add dword ptr [eax+0x14],ecx
	lea esi,[edx-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 0xC
}
}
// SecondaryStat::GetMAD
__SUB_CLASS_THIS(00323700, __thiscall, 7662, SecondaryStat, long, long, long, long, long *) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x80]
	push edi
	push eax
	lea ecx,[esi+0x78]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x8C]
	mov edi,eax
	push edx
	lea eax,[esi+0x84]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x7F4]
	mov ebx,eax
	push ecx
	add ebx,edi
	add ebx,dword ptr [esp+0x28]
	lea ebp,[esi+0x7EC]
	push ebp
	xor edi,edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x18
	test eax,eax
	jg Block4

 Block1:
	mov edx,dword ptr [esi+0x86C]
	push edx
	lea eax,[esi+0x864]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jg Block4

 Block2:
	cmp dword ptr [esp+0x1C],edi
	jg Block4

 Block3:
	mov ecx,dword ptr [esi+0xF3C]
	push ecx
	lea edx,[esi+0xF34]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block5

 Block4:
	mov eax,dword ptr [esi+0x7F4]
	push eax
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x86C]
	push ecx
	lea edx,[esi+0x864]
	push edx
	mov ebp,eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x24],eax
	mov eax,dword ptr [esi+0xF3C]
	push eax
	lea ecx,[esi+0xF34]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edi,eax
	add edi,dword ptr [esp+0x2C]
	add esp,0x18
	add edi,ebp
	add edi,dword ptr [esp+0x1C]

 Block5:
	mov edx,dword ptr [esi+0xB0]
	push edx
	lea ebp,[esi+0xA8]
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add eax,dword ptr [esp+0x20]
	add esp,8
	add edi,eax
	cmp dword ptr [esp+0x20],0
	je Block7

 Block6:
	mov eax,dword ptr [esi+0xB0]
	push eax
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	add ecx,dword ptr [esp+0x20]
	mov eax,0x51EB851F
	imul ecx,ebx
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add esp,8
	add ecx,edx
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [edx],ecx

 Block7:
	test edi,edi
	jle Block9

 Block8:
	imul edi,ebx
	mov eax,0x51EB851F
	imul edi
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add ebx,eax

 Block9:
	test ebx,ebx
	jle Block13

 Block10:
	cmp ebx,0x752F
	mov eax,ebx
	jl Block12

 Block11:
	mov eax,0x752F

 Block12:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0x10

 Block13:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	ret 0x10
}
}
// SecondaryStat::_ZtlSecureGet_nDarkSight_
__SUB_CLASS0(000FFE60, __fastcall, 7637, SecondaryStat, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x224]
	push eax
	add ecx,0x21C
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// SecondaryStat::_ZtlSecureGet_nMorewildMaxHP_
__SUB_CLASS0(000FFF60, __fastcall, 7637, SecondaryStat, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x1230]
	push eax
	add ecx,0x1228
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// BasicStat::ApplyItemOption
_SUB_EXCEPTION_HANDLER(32F920)
__SUB_CLASS_THIS(0032F920, __thiscall, 7622, BasicStat, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_32F920
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x28]
	push eax
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemOptionInfo>::ms_pInstance]
	call CItemOptionInfo::GetItemOption
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0
	test eax,eax
	je Block5

 Block1:
	mov edi,dword ptr [esp+0x2C]
	mov edx,dword ptr [esi+0x2C]
	imul edi,0xE0
	add edi,dword ptr [eax+0xC]
	push edx
	lea ebx,[esi+0x24]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi+8]
	add esp,8
	add ecx,eax
	mov edx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2C],eax
	mov eax,dword ptr [esi+0x44]
	push eax
	lea ebx,[esi+0x3C]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi+0x10]
	add esp,8
	add ecx,eax
	mov edx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [esi+0x38]
	push ecx
	lea ebx,[esi+0x30]
	push ebx
	mov dword ptr [esi+0x44],eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi+0xC]
	add esp,8
	add ecx,eax
	mov edx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov edx,dword ptr [esi+0x50]
	push edx
	lea ebx,[esi+0x48]
	push ebx
	mov dword ptr [esi+0x38],eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi+0x14]
	add esp,8
	add ecx,eax
	mov edx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x50],eax
	mov eax,dword ptr [esi+0x68]
	push eax
	lea ebx,[esi+0x60]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi+0x20]
	add esp,8
	add ecx,eax
	mov edx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [esi+0x74]
	push ecx
	lea ebx,[esi+0x6C]
	push ebx
	mov dword ptr [esi+0x68],eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi+0x24]
	add esp,8
	add ecx,eax
	mov edx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x74],eax
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block5

 Block2:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block3:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block5

 Block4:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block5:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 8
}
}
// BasicStat::_ZtlSecureGet_nMHP
__SUB_CLASS0(00070690, __fastcall, 7610, BasicStat, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x68]
	push eax
	add ecx,0x60
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// SecondaryStat::GetEVA
__SUB_CLASS_THIS(003262A0, __thiscall, 7668, SecondaryStat, long, const CharacterData &, long, long, long *) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x134]
	push edi
	push eax
	lea ecx,[esi+0x12C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0x1C]
	add esp,8
	push edx
	mov ecx,esi
	mov ebx,eax
	call SecondaryStat::GetIncEVA
	mov edi,eax
	mov eax,dword ptr [esi+0x164]
	push eax
	lea ebp,[esi+0x15C]
	add edi,ebx
	add edi,dword ptr [esp+0x20]
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,eax
	add ebx,dword ptr [esp+0x20]
	add esp,8
	cmp dword ptr [esp+0x20],0
	je Block2

 Block1:
	mov ecx,dword ptr [esi+0x164]
	push ecx
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	add ecx,dword ptr [esp+0x20]
	mov eax,0x51EB851F
	imul ecx,edi
	imul ecx
	mov ecx,dword ptr [esp+0x28]
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add esp,8
	add eax,edx
	mov dword ptr [ecx],eax

 Block2:
	test ebx,ebx
	jle Block4

 Block3:
	imul ebx,edi
	mov eax,0x51EB851F
	imul ebx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add edi,eax

 Block4:
	test edi,edi
	jle Block8

 Block5:
	cmp edi,0x270F
	mov eax,edi
	jl Block7

 Block6:
	mov eax,0x270F

 Block7:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0x10

 Block8:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	ret 0x10
}
}
// CalcDamage::MDamage
_SUB_EXCEPTION_HANDLER(32EA20)
__SUB_CLASS_THIS(0032EA20, __thiscall, 7831, CalcDamage, long, const MobStat &, const CharacterData &, const BasicStat &, const SecondaryStat &, uint32_t, NakedParam<ZRef<PassiveSkillData>>, long *, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_32EA20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x1C],ecx
	mov eax,dword ptr [esp+0x50]
	xor ebx,ebx
	xor edx,edx
	xor esi,esi
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebx
	je Block2

 Block1:
	mov edx,dword ptr [eax+0x24]
	mov esi,dword ptr [eax+0x1C]
	mov dword ptr [esp+0x18],edx
	mov edx,dword ptr [eax+0x14]
	mov eax,dword ptr [eax+0x2C]
	mov dword ptr [esp+0x14],eax

 Block2:
	mov edi,dword ptr [esp+0x40]
	mov eax,dword ptr [esp+0x3C]
	mov ebp,dword ptr [esp+0x38]
	push esi
	mov esi,dword ptr [esp+0x48]
	push edx
	mov edx,dword ptr [esp+0x50]
	push edx
	push esi
	push edi
	push eax
	push ebp
	call CalcDamage::CheckMDamageMiss
	test eax,eax
	je Block8

 Block3:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block7

 Block4:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block7

 Block5:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block7

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block7:
	xor eax,eax
	jmp Block28

 Block8:
	mov eax,dword ptr [ebp+0x48]
	add eax,dword ptr [ebp+0x44]
	cmp eax,ebx
	jg Block10

 Block9:
	xor eax,eax
	mov dword ptr [esp+0x48],eax
	jmp Block13

 Block10:
	cmp eax,0x752F
	jge Block12

 Block11:
	mov dword ptr [esp+0x48],eax
	jmp Block13

 Block12:
	mov dword ptr [esp+0x48],0x752F

 Block13:
	mov ecx,dword ptr [edi+0x14]
	push ecx
	lea ebx,[edi+0xC]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [esp+0x24]
	add esp,8
	push eax
	push edx
	add ecx,0xA0
	call CRand32::Random
	push eax
	mov eax,dword ptr [esp+0x54]
	push eax
	call _anon_calc_mob_base_damamge
	fstp qword ptr [esp+0x30]
	mov ecx,dword ptr [edi+0x14]
	push ecx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x70]
	mov ebx,dword ptr [esp+0x54]
	add esp,0x18
	push edx
	mov edx,dword ptr [esp+0x1C]
	push eax
	mov eax,dword ptr [ebp]
	push eax
	push ecx
	push 0
	push edx
	push ebx
	mov ecx,edi
	call BasicStat::CalcBaseMDD
	push eax
	mov ecx,esi
	call SecondaryStat::GetMDD
	fld qword ptr [esp+0x2C]
	push eax
	sub esp,8
	fstp qword ptr [esp]
	call _anon_adjust_base_depense
	mov eax,dword ptr [esi+0x1170]
	fstp qword ptr [esp+0x38]
	push eax
	lea ecx,[esi+0x1168]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x5C],eax
	fild dword ptr [esp+0x5C]
	mov edx,dword ptr [esi+0x4F4]
	fld qword ptr [esp+0x40]
	push edx
	add esi,0x4EC
	fmul st(1),st
	push esi
	fxch
	fdiv qword ptr [__real_4059000000000000]
	fsubp st(1),st(0)
	fstp qword ptr [esp+0x48]
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x28
	test eax,eax
	je Block16

 Block14:
	mov esi,dword ptr [esp+0x54]
	test esi,esi
	je Block16

 Block15:
	fld qword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x1C]
	sub esp,8
	fstp qword ptr [esp]
	push ebx
	call CalcDamage::GetMesoGuardReduce
	mov dword ptr [esi],eax

 Block16:
	mov ebp,dword ptr [ebp+0xE0]
	mov dword ptr [esp+0x3C],ebp
	test ebp,ebp
	je Block18

 Block17:
	fild dword ptr [esp+0x3C]
	fmul qword ptr [esp+0x20]
	fdiv qword ptr [__real_4059000000000000]
	jmp Block19

 Block18:
	fld qword ptr [esp+0x20]

 Block19:
	fld1
	fcom
	fnstsw ax
	test ah,5
	jp Block21

 Block20:
	fstp st(0)
	fld st(0)
	fld qword ptr [__real_412e847e00000000]
	fcom st(2)
	fnstsw ax
	fstp st(2)
	test ah,0x41
	jne Block22

 Block21:
	fstp st(1)
	jmp Block23

 Block22:
	fstp st(0)

 Block23:
	call __ftol2_sse
	mov ebx,eax
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block27

 Block24:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block27

 Block25:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block27

 Block26:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block27:
	mov eax,ebx

 Block28:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 0x24
}
}
// _ZtlSecureTear_char_
__SUB(00326C20, __fastcall, 131960, uint32_t, char, char *) {
__asm {

 Block0:
	push ebx
	mov bl,cl
	push esi
	mov ecx,offset _D_G_RAND
	mov esi,edx
	call CRand32::Random
	mov byte ptr [esi],al
	movzx eax,al
	mov cl,al
	xor cl,bl
	mov byte ptr [esi+1],cl
	xor eax,0xBAADF00D
	movzx ecx,cl
	ror eax,5
	pop esi
	add eax,ecx
	pop ebx
	ret
}
}
// CalcDamage::PDamage
__SUB_CLASS_THIS(00326910, __thiscall, 7823, CalcDamage, long, const MobStat &, const MobStat &) {
__asm {

 Block0:
	push esi
	sub ecx,0xFFFFFF80
	call CRand32::Random
	mov esi,dword ptr [esp+0xC]
	mov ecx,dword ptr [esi]
	push ecx
	mov ecx,dword ptr [esp+0xC]
	mov edx,dword ptr [ecx]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x24]
	push eax
	call _anon_calc_mob_base_damamge
	add esp,0x10
	call __ftol2_sse
	mov dword ptr [esp+0xC],eax
	fild dword ptr [esp+0xC]
	fild dword ptr [esi+0x34]
	fld qword ptr [__real_4059000000000000]
	fld st(0)
	fsubrp st(2),st
	fdivp st(1),st(0)
	fmulp st(1),st(0)
	call __ftol2_sse
	pop esi
	test eax,eax
	jg Block2

 Block1:
	mov eax,1

 Block2:
	ret 8
}
}
// _anon_DecodeTime
__SUB(00325430, __cdecl, 45860, unsigned long, CInPacket &) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	call timeGetTime
	mov edi,dword ptr [esp+0x10]
	mov ecx,edi
	mov esi,eax
	call CInPacket::Decode1
	mov ecx,edi
	movzx ebx,al
	call CInPacket::Decode4
	test ebx,ebx
	je Block2

 Block1:
	sub esi,eax
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	ret

 Block2:
	pop edi
	add eax,esi
	pop esi
	pop ebx
	ret
}
}
// SecondaryStat::_ZtlSecurePut_nJump
__SUB_CLASS(00327420, __fastcall, 7639, SecondaryStat, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x1C8]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x1D0],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// SecondaryStat::_ZtlSecurePut_nEVA
__SUB_CLASS(003273A0, __fastcall, 7639, SecondaryStat, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x12C]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x134],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// BasicStat::_ZtlSecurePut_nLUK
__SUB_CLASS(0007F690, __fastcall, 7612, BasicStat, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x48]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x50],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// NEXTLEVEL::NEXTLEVEL
__SUB_CLASS_THIS0(00321360, __thiscall, 131706, NEXTLEVEL, void) {
__asm {

 Block0:
	fld qword ptr [__real_3ff3333333333333]
	push esi
	fld qword ptr [__real_3fe0000000000000]
	mov esi,ecx
	mov dword ptr [esi+8],0x22
	mov dword ptr [esi+0xC],0x39
	mov dword ptr [esi+0x10],0x5C
	mov dword ptr [esi+0x14],0x87
	push edi
	mov edi,0xF
	mov dword ptr [esi+4],edi
	mov dword ptr [esi+0x18],0x174
	mov dword ptr [esi+0x1C],0x230
	mov dword ptr [esi+0x20],0x348
	mov dword ptr [esi+0x24],0x4DA
	mov eax,dword ptr [esi+0x24]
	mov dword ptr [esi+0x28],eax
	mov dword ptr [esi+0x2C],eax
	mov dword ptr [esi+0x30],eax
	mov dword ptr [esi+0x34],eax
	mov dword ptr [esi+0x38],eax

 Block1:
	fild dword ptr [esi+edi*4-4]
	fmul st,st(2)
	fadd st,st(1)
	call __ftol2_sse
	mov dword ptr [esi+edi*4],eax
	inc edi
	cmp edi,0x1D
	jle Block1

 Block2:
	mov eax,dword ptr [esi+0x74]
	mov dword ptr [esi+0x78],eax
	mov dword ptr [esi+0x7C],eax
	mov dword ptr [esi+0x80],eax
	mov dword ptr [esi+0x84],eax
	mov dword ptr [esi+0x88],eax
	mov edi,0x23

 Block3:
	fild dword ptr [esi+edi*4-4]
	fmul st,st(2)
	fadd st,st(1)
	call __ftol2_sse
	mov dword ptr [esi+edi*4],eax
	inc edi
	cmp edi,0x27
	jle Block3

 Block4:
	fstp st(1)
	mov edi,0x28
	fld qword ptr [__real_3ff147ae147ae148]

 Block5:
	fild dword ptr [esi+edi*4-4]
	fmul st,st(1)
	fadd st,st(2)
	call __ftol2_sse
	mov dword ptr [esi+edi*4],eax
	inc edi
	cmp edi,0x45
	jle Block5

 Block6:
	mov eax,dword ptr [esi+0x114]
	fstp st(0)
	fld qword ptr [__real_3ff11eb851eb851f]
	mov dword ptr [esi+0x118],eax
	mov dword ptr [esi+0x11C],eax
	mov dword ptr [esi+0x120],eax
	mov dword ptr [esi+0x124],eax
	mov dword ptr [esi+0x128],eax
	mov edi,0x4B

 Block7:
	fild dword ptr [esi+edi*4-4]
	fmul st,st(1)
	fadd st,st(2)
	call __ftol2_sse
	mov dword ptr [esi+edi*4],eax
	inc edi
	cmp edi,0x77
	jle Block7

 Block8:
	mov eax,dword ptr [esi+0x1DC]
	mov dword ptr [esi+0x1E0],eax
	mov dword ptr [esi+0x1E4],eax
	mov dword ptr [esi+0x1E8],eax
	mov dword ptr [esi+0x1EC],eax
	mov dword ptr [esi+0x1F0],eax
	mov edi,0x7D

 Block9:
	fild dword ptr [esi+edi*4-4]
	fmul st,st(1)
	fadd st,st(2)
	call __ftol2_sse
	mov dword ptr [esi+edi*4],eax
	inc edi
	cmp edi,0x9F
	jle Block9

 Block10:
	fstp st(0)
	mov edi,0xA0
	fld qword ptr [__real_3ff0f5c28f5c28f6]

 Block11:
	fild dword ptr [esi+edi*4-4]
	fmul st,st(1)
	fadd st,st(2)
	call __ftol2_sse
	mov dword ptr [esi+edi*4],eax
	inc edi
	cmp edi,0xC7
	jle Block11

 Block12:
	fstp st(1)
	pop edi
	mov dword ptr [esi+0x320],0
	fstp st(0)
	mov eax,esi
	pop esi
	ret
}
}
// _anon_calc_mob_base_damamge
__SUB(003266F0, __cdecl, 131958, double, long, long, long, long) {
__asm {

 Block0:
	fild dword ptr [esp+4]
	mov eax,dword ptr [esp+8]
	fld qword ptr [__real_3feb333333333333]
	sub esp,0x10
	fmul st,st(1)
	fstp qword ptr [esp+8]
	fstp qword ptr [esp]
	push eax
	call get_rand_1
	add esp,0x14
	ret
}
}
// SecondaryStat::CheckByTime
__SUB_CLASS_THIS(00323870, __thiscall, 7688, SecondaryStat, MY_UINT128, long) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	push edi
	mov esi,ecx
	push 0
	lea ecx,[esp+0xC]
	call MY_UINT128::_ctor_1
	mov eax,dword ptr [esi+0x35C]
	push eax
	lea ecx,[esi+0x354]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edi,dword ptr [esp+0x28]
	add esp,8
	test eax,eax
	je Block7

 Block1:
	mov edx,dword ptr [esi+0x374]
	push edx
	lea eax,[esi+0x36C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,edi
	sub ecx,eax
	add esp,8
	cmp ecx,0xFFFFFF9C
	jle Block7

 Block2:
	push offset CTS_COMBO_ABILITY_BUFF
	mov ecx,offset CTS_STUN
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block7

 Block3:
	push offset CTS_FLYING
	mov ecx,offset CTS_STUN
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block7

 Block4:
	push offset CTS_WEAPON_CHARGE
	mov ecx,offset CTS_STUN
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block7

 Block5:
	push offset CTS_SUDDEN_DEATH
	mov ecx,offset CTS_STUN
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block7

 Block6:
	push offset CTS_STUN
	lea ecx,[esp+0xC]
	call MY_UINT128::operator|=

 Block7:
	mov edx,dword ptr [esi+0x380]
	push edx
	lea eax,[esi+0x378]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block14

 Block8:
	mov ecx,dword ptr [esi+0x398]
	push ecx
	lea edx,[esi+0x390]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,edi
	sub ecx,eax
	add esp,8
	cmp ecx,0xFFFFFF9C
	jle Block14

 Block9:
	push offset CTS_COMBO_ABILITY_BUFF
	mov ecx,offset CTS_POISON
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block14

 Block10:
	push offset CTS_FLYING
	mov ecx,offset CTS_POISON
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block14

 Block11:
	push offset CTS_WEAPON_CHARGE
	mov ecx,offset CTS_POISON
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block14

 Block12:
	push offset CTS_SUDDEN_DEATH
	mov ecx,offset CTS_POISON
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block14

 Block13:
	push offset CTS_POISON
	lea ecx,[esp+0xC]
	call MY_UINT128::operator|=

 Block14:
	mov edx,dword ptr [esi+0x3A4]
	push edx
	lea eax,[esi+0x39C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block21

 Block15:
	mov ecx,dword ptr [esi+0x3BC]
	push ecx
	lea edx,[esi+0x3B4]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,edi
	sub ecx,eax
	add esp,8
	cmp ecx,0xFFFFFF9C
	jle Block21

 Block16:
	push offset CTS_COMBO_ABILITY_BUFF
	mov ecx,offset CTS_SEAL
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block21

 Block17:
	push offset CTS_FLYING
	mov ecx,offset CTS_SEAL
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block21

 Block18:
	push offset CTS_WEAPON_CHARGE
	mov ecx,offset CTS_SEAL
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block21

 Block19:
	push offset CTS_SUDDEN_DEATH
	mov ecx,offset CTS_SEAL
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block21

 Block20:
	push offset CTS_SEAL
	lea ecx,[esp+0xC]
	call MY_UINT128::operator|=

 Block21:
	mov edx,dword ptr [esi+0x3C8]
	push edx
	lea eax,[esi+0x3C0]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block28

 Block22:
	mov ecx,dword ptr [esi+0x3E0]
	push ecx
	lea edx,[esi+0x3D8]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,edi
	sub ecx,eax
	add esp,8
	cmp ecx,0xFFFFFF9C
	jle Block28

 Block23:
	push offset CTS_COMBO_ABILITY_BUFF
	mov ecx,offset CTS_DARKNESS
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block28

 Block24:
	push offset CTS_FLYING
	mov ecx,offset CTS_DARKNESS
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block28

 Block25:
	push offset CTS_WEAPON_CHARGE
	mov ecx,offset CTS_DARKNESS
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block28

 Block26:
	push offset CTS_SUDDEN_DEATH
	mov ecx,offset CTS_DARKNESS
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block28

 Block27:
	push offset CTS_DARKNESS
	lea ecx,[esp+0xC]
	call MY_UINT128::operator|=

 Block28:
	mov edx,dword ptr [esi+0x53C]
	push edx
	lea eax,[esi+0x534]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block35

 Block29:
	mov ecx,dword ptr [esi+0x554]
	push ecx
	lea edx,[esi+0x54C]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,edi
	sub ecx,eax
	add esp,8
	cmp ecx,0xFFFFFF9C
	jle Block35

 Block30:
	push offset CTS_COMBO_ABILITY_BUFF
	mov ecx,offset CTS_WEAKNESS
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block35

 Block31:
	push offset CTS_FLYING
	mov ecx,offset CTS_WEAKNESS
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block35

 Block32:
	push offset CTS_WEAPON_CHARGE
	mov ecx,offset CTS_WEAKNESS
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block35

 Block33:
	push offset CTS_SUDDEN_DEATH
	mov ecx,offset CTS_WEAKNESS
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block35

 Block34:
	push offset CTS_WEAKNESS
	lea ecx,[esp+0xC]
	call MY_UINT128::operator|=

 Block35:
	mov edx,dword ptr [esi+0x560]
	push edx
	lea eax,[esi+0x558]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block42

 Block36:
	mov ecx,dword ptr [esi+0x578]
	push ecx
	lea edx,[esi+0x570]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,edi
	sub ecx,eax
	add esp,8
	cmp ecx,0xFFFFFF9C
	jle Block42

 Block37:
	push offset CTS_COMBO_ABILITY_BUFF
	mov ecx,offset CTS_CURSE
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block42

 Block38:
	push offset CTS_FLYING
	mov ecx,offset CTS_CURSE
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block42

 Block39:
	push offset CTS_WEAPON_CHARGE
	mov ecx,offset CTS_CURSE
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block42

 Block40:
	push offset CTS_SUDDEN_DEATH
	mov ecx,offset CTS_CURSE
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block42

 Block41:
	push offset CTS_CURSE
	lea ecx,[esp+0xC]
	call MY_UINT128::operator|=

 Block42:
	mov edx,dword ptr [esi+0x584]
	push edx
	lea eax,[esi+0x57C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block49

 Block43:
	mov ecx,dword ptr [esi+0x59C]
	push ecx
	lea edx,[esi+0x594]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,edi
	sub ecx,eax
	add esp,8
	cmp ecx,0xFFFFFF9C
	jle Block49

 Block44:
	push offset CTS_COMBO_ABILITY_BUFF
	mov ecx,offset CTS_SLOW
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block49

 Block45:
	push offset CTS_FLYING
	mov ecx,offset CTS_SLOW
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block49

 Block46:
	push offset CTS_WEAPON_CHARGE
	mov ecx,offset CTS_SLOW
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block49

 Block47:
	push offset CTS_SUDDEN_DEATH
	mov ecx,offset CTS_SLOW
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block49

 Block48:
	push offset CTS_SLOW
	lea ecx,[esp+0xC]
	call MY_UINT128::operator|=

 Block49:
	mov edx,dword ptr [esi+0x6B0]
	push edx
	lea eax,[esi+0x6A8]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block56

 Block50:
	mov ecx,dword ptr [esi+0x6C8]
	push ecx
	lea edx,[esi+0x6C0]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,edi
	sub ecx,eax
	add esp,8
	cmp ecx,0xFFFFFF9C
	jle Block56

 Block51:
	push offset CTS_COMBO_ABILITY_BUFF
	mov ecx,offset CTS_ATTRACT
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block56

 Block52:
	push offset CTS_FLYING
	mov ecx,offset CTS_ATTRACT
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block56

 Block53:
	push offset CTS_WEAPON_CHARGE
	mov ecx,offset CTS_ATTRACT
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block56

 Block54:
	push offset CTS_SUDDEN_DEATH
	mov ecx,offset CTS_ATTRACT
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block56

 Block55:
	push offset CTS_ATTRACT
	lea ecx,[esp+0xC]
	call MY_UINT128::operator|=

 Block56:
	mov edx,dword ptr [esi+0x944]
	push edx
	lea eax,[esi+0x93C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block63

 Block57:
	mov ecx,dword ptr [esi+0x95C]
	push ecx
	lea edx,[esi+0x954]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,edi
	sub ecx,eax
	add esp,8
	cmp ecx,0xFFFFFF9C
	jle Block63

 Block58:
	push offset CTS_COMBO_ABILITY_BUFF
	mov ecx,offset CTS_REVERSE_INPUT
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block63

 Block59:
	push offset CTS_FLYING
	mov ecx,offset CTS_REVERSE_INPUT
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block63

 Block60:
	push offset CTS_WEAPON_CHARGE
	mov ecx,offset CTS_REVERSE_INPUT
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block63

 Block61:
	push offset CTS_SUDDEN_DEATH
	mov ecx,offset CTS_REVERSE_INPUT
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block63

 Block62:
	push offset CTS_REVERSE_INPUT
	lea ecx,[esp+0xC]
	call MY_UINT128::operator|=

 Block63:
	mov edx,dword ptr [esi+0x7C4]
	push edx
	lea eax,[esi+0x7BC]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block70

 Block64:
	mov ecx,dword ptr [esi+0x7DC]
	push ecx
	lea edx,[esi+0x7D4]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,edi
	sub ecx,eax
	add esp,8
	cmp ecx,0xFFFFFF9C
	jle Block70

 Block65:
	push offset CTS_COMBO_ABILITY_BUFF
	mov ecx,offset CTS_BAN_MAP
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block70

 Block66:
	push offset CTS_FLYING
	mov ecx,offset CTS_BAN_MAP
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block70

 Block67:
	push offset CTS_WEAPON_CHARGE
	mov ecx,offset CTS_BAN_MAP
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block70

 Block68:
	push offset CTS_SUDDEN_DEATH
	mov ecx,offset CTS_BAN_MAP
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block70

 Block69:
	push offset CTS_BAN_MAP
	lea ecx,[esp+0xC]
	call MY_UINT128::operator|=

 Block70:
	mov edx,dword ptr [esi+0xD08]
	push edx
	lea eax,[esi+0xD00]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block77

 Block71:
	mov ecx,dword ptr [esi+0xD20]
	push ecx
	lea edx,[esi+0xD18]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,edi
	sub ecx,eax
	add esp,8
	cmp ecx,0xFFFFFF9C
	jle Block77

 Block72:
	push offset CTS_COMBO_ABILITY_BUFF
	mov ecx,offset CTS_STOP_PORTION
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block77

 Block73:
	push offset CTS_FLYING
	mov ecx,offset CTS_STOP_PORTION
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block77

 Block74:
	push offset CTS_WEAPON_CHARGE
	mov ecx,offset CTS_STOP_PORTION
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block77

 Block75:
	push offset CTS_SUDDEN_DEATH
	mov ecx,offset CTS_STOP_PORTION
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block77

 Block76:
	push offset CTS_STOP_PORTION
	lea ecx,[esp+0xC]
	call MY_UINT128::operator|=

 Block77:
	mov edx,dword ptr [esi+0xD2C]
	push edx
	lea eax,[esi+0xD24]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block84

 Block78:
	mov ecx,dword ptr [esi+0xD44]
	push ecx
	lea edx,[esi+0xD3C]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,edi
	sub ecx,eax
	add esp,8
	cmp ecx,0xFFFFFF9C
	jle Block84

 Block79:
	push offset CTS_COMBO_ABILITY_BUFF
	mov ecx,offset CTS_STOP_MOTION
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block84

 Block80:
	push offset CTS_FLYING
	mov ecx,offset CTS_STOP_MOTION
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block84

 Block81:
	push offset CTS_WEAPON_CHARGE
	mov ecx,offset CTS_STOP_MOTION
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block84

 Block82:
	push offset CTS_SUDDEN_DEATH
	mov ecx,offset CTS_STOP_MOTION
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block84

 Block83:
	push offset CTS_STOP_MOTION
	lea ecx,[esp+0xC]
	call MY_UINT128::operator|=

 Block84:
	mov edx,dword ptr [esi+0xD50]
	push edx
	lea eax,[esi+0xD48]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block91

 Block85:
	mov ecx,dword ptr [esi+0xD68]
	push ecx
	lea edx,[esi+0xD60]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,edi
	sub ecx,eax
	add esp,8
	cmp ecx,0xFFFFFF9C
	jle Block91

 Block86:
	push offset CTS_COMBO_ABILITY_BUFF
	mov ecx,offset CTS_FEAR
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block91

 Block87:
	push offset CTS_FLYING
	mov ecx,offset CTS_FEAR
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block91

 Block88:
	push offset CTS_WEAPON_CHARGE
	mov ecx,offset CTS_FEAR
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block91

 Block89:
	push offset CTS_SUDDEN_DEATH
	mov ecx,offset CTS_FEAR
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block91

 Block90:
	push offset CTS_FEAR
	lea ecx,[esp+0xC]
	call MY_UINT128::operator|=

 Block91:
	mov edx,dword ptr [esi+0xE34]
	push edx
	lea eax,[esi+0xE2C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block98

 Block92:
	mov ecx,dword ptr [esi+0xE4C]
	push ecx
	lea edx,[esi+0xE44]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,edi
	sub ecx,eax
	add esp,8
	cmp ecx,0xFFFFFF9C
	jle Block98

 Block93:
	push offset CTS_COMBO_ABILITY_BUFF
	mov ecx,offset CTS_FROZEN
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block98

 Block94:
	push offset CTS_FLYING
	mov ecx,offset CTS_FROZEN
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block98

 Block95:
	push offset CTS_WEAPON_CHARGE
	mov ecx,offset CTS_FROZEN
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block98

 Block96:
	push offset CTS_SUDDEN_DEATH
	mov ecx,offset CTS_FROZEN
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block98

 Block97:
	push offset CTS_FROZEN
	lea ecx,[esp+0xC]
	call MY_UINT128::operator|=

 Block98:
	mov edx,dword ptr [esi+0xED0]
	push edx
	lea eax,[esi+0xEC8]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block105

 Block99:
	mov ecx,dword ptr [esi+0xEE8]
	push ecx
	lea edx,[esi+0xEE0]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,edi
	sub ecx,eax
	add esp,8
	cmp ecx,0xFFFFFF9C
	jle Block105

 Block100:
	push offset CTS_COMBO_ABILITY_BUFF
	mov ecx,offset CTS_NOT_DAMAGED
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block105

 Block101:
	push offset CTS_FLYING
	mov ecx,offset CTS_NOT_DAMAGED
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block105

 Block102:
	push offset CTS_WEAPON_CHARGE
	mov ecx,offset CTS_NOT_DAMAGED
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block105

 Block103:
	push offset CTS_SUDDEN_DEATH
	mov ecx,offset CTS_NOT_DAMAGED
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block105

 Block104:
	push offset CTS_NOT_DAMAGED
	lea ecx,[esp+0xC]
	call MY_UINT128::operator|=

 Block105:
	mov edx,dword ptr [esi+0xEF4]
	push edx
	lea eax,[esi+0xEEC]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block112

 Block106:
	mov ecx,dword ptr [esi+0xF0C]
	push ecx
	lea edx,[esi+0xF04]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,edi
	sub ecx,eax
	add esp,8
	cmp ecx,0xFFFFFF9C
	jle Block112

 Block107:
	push offset CTS_COMBO_ABILITY_BUFF
	mov ecx,offset CTS_FINAL_CUT
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block112

 Block108:
	push offset CTS_FLYING
	mov ecx,offset CTS_FINAL_CUT
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block112

 Block109:
	push offset CTS_WEAPON_CHARGE
	mov ecx,offset CTS_FINAL_CUT
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block112

 Block110:
	push offset CTS_SUDDEN_DEATH
	mov ecx,offset CTS_FINAL_CUT
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block112

 Block111:
	push offset CTS_FINAL_CUT
	lea ecx,[esp+0xC]
	call MY_UINT128::operator|=

 Block112:
	mov edx,dword ptr [esi+0x1390]
	push edx
	lea eax,[esi+0x1388]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block119

 Block113:
	mov ecx,dword ptr [esi+0x13A8]
	push ecx
	add esi,0x13A0
	push esi
	call _ZtlSecureFuseHelper<long>::call
	sub edi,eax
	add esp,8
	cmp edi,0xFFFFFF9C
	jle Block119

 Block114:
	push offset CTS_COMBO_ABILITY_BUFF
	mov ecx,offset CTS_SUMMON_BOMB
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block119

 Block115:
	push offset CTS_FLYING
	mov ecx,offset CTS_SUMMON_BOMB
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block119

 Block116:
	push offset CTS_WEAPON_CHARGE
	mov ecx,offset CTS_SUMMON_BOMB
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block119

 Block117:
	push offset CTS_SUDDEN_DEATH
	mov ecx,offset CTS_SUMMON_BOMB
	call MY_UINT128::compareTo_0
	test eax,eax
	je Block119

 Block118:
	push offset CTS_SUMMON_BOMB
	lea ecx,[esp+0xC]
	call MY_UINT128::operator|=

 Block119:
	mov esi,dword ptr [esp+0x1C]
	push 0x80
	lea edx,[esp+0xC]
	push edx
	mov ecx,esi
	call MY_UINT128::_ctor_2
	pop edi
	mov eax,esi
	pop esi
	add esp,0x10
	ret 8
}
}
// BasicStat::_ZtlSecurePut_nSTR
__SUB_CLASS(0007F630, __fastcall, 7612, BasicStat, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x24]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x2C],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// SecondaryStat::GetMDD
__SUB_CLASS_THIS(00325F70, __thiscall, 7666, SecondaryStat, long, long, const CharacterData &, long, long *, int32_t) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xBC]
	push edi
	push eax
	lea ecx,[esi+0xB4]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0xC8]
	mov ebx,eax
	push edx
	lea eax,[esi+0xC0]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x1050]
	push ecx
	lea edx,[esi+0x1048]
	push edx
	mov ebp,eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0xC0C]
	mov edi,eax
	add edi,ebp
	lea eax,[esi+0xC04]
	push ecx
	add edi,ebx
	add edi,dword ptr [esp+0x30]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x20
	test eax,eax
	je Block6

 Block1:
	mov ebx,dword ptr [esp+0x18]
	mov edx,dword ptr [ebx+0x3D]
	push edx
	lea eax,[ebx+0x39]
	push eax
	mov dword ptr [esp+0x1C],0
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	movzx eax,ax
	lea ecx,[esp+0x14]
	push ecx
	xor ecx,ecx
	mov edx,0x7D0
	cmp ax,dx
	setne cl
	dec ecx
	and ecx,0xFFF0BDD1
	add ecx,0x1406F40
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push ebx
	call CSkillInfo::GetSkillLevel_0
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block6

 Block2:
	test eax,eax
	jle Block6

 Block3:
	push eax
	call SKILLENTRY::GetLevelData
	mov ebx,eax
	mov edx,dword ptr [ebx+0x168]
	push edx
	lea eax,[ebx+0x160]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0xC0C]
	mov ebp,eax
	push ecx
	lea eax,[esi+0xC04]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,0x10
	cmp eax,ebp
	jge Block5

 Block4:
	mov ebp,eax

 Block5:
	mov edx,dword ptr [ebx+0x180]
	push edx
	add ebx,0x178
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	imul eax,ebp
	add esp,8
	add edi,eax

 Block6:
	mov ecx,dword ptr [esi+0x89C]
	lea eax,[esi+0x894]
	push ecx
	push eax
	xor ebx,ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block10

 Block7:
	mov edx,dword ptr [esi+0x8A8]
	push edx
	lea ebp,[esi+0x8A0]
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x1E9F5B0
	jne Block10

 Block8:
	mov eax,dword ptr [esi+0x8A8]
	push eax
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	add esp,8
	push eax
	call CSkillInfo::GetSkill
	mov ebp,eax
	test ebp,ebp
	je Block10

 Block9:
	mov ecx,dword ptr [esi+0x89C]
	push ecx
	lea eax,[esi+0x894]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	mov ecx,ebp
	call SKILLENTRY::GetLevelData
	mov edx,dword ptr [eax+0x180]
	push edx
	add eax,0x178
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov ebx,eax

 Block10:
	cmp dword ptr [esp+0x24],0
	je Block12

 Block11:
	mov eax,dword ptr [esp+0x18]
	push eax
	call get_shield_mastery
	add esp,4
	add ebx,eax

 Block12:
	mov ecx,dword ptr [esi+0xEC]
	push ecx
	lea ebp,[esi+0xE4]
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add eax,dword ptr [esp+0x24]
	add esp,8
	add ebx,eax
	cmp dword ptr [esp+0x20],0
	je Block14

 Block13:
	mov edx,dword ptr [esi+0xEC]
	push edx
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	add ecx,dword ptr [esp+0x24]
	mov eax,0x51EB851F
	imul ecx,edi
	imul ecx
	mov ecx,dword ptr [esp+0x28]
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add esp,8
	add eax,edx
	mov dword ptr [ecx],eax

 Block14:
	test ebx,ebx
	jle Block16

 Block15:
	imul ebx,edi
	mov eax,0x51EB851F
	imul ebx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add edi,eax

 Block16:
	test edi,edi
	jle Block20

 Block17:
	cmp edi,0x7530
	mov eax,edi
	jl Block19

 Block18:
	mov eax,0x7530

 Block19:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0x14

 Block20:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	ret 0x14
}
}
// SecondaryStat::IsRidingVehicle
__SUB_CLASS_THIS0(004616F0, __thiscall, 7672, SecondaryStat, int32_t) {
__asm {

 Block0:
	push edi
	mov edi,dword ptr [ecx+0x13D4]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+4]
	mov ecx,edi
	call edx
	test al,al
	je Block6

 Block1:
	push esi
	lea esi,[edi+0x18]
	mov ecx,esi
	call ZFatalSection::Lock
	test esi,esi
	je Block4

 Block2:
	add dword ptr [esi+4],0xFFFFFFFF
	jne Block4

 Block3:
	mov dword ptr [esi],0

 Block4:
	mov eax,dword ptr [edi+0xC]
	push eax
	call is_vehicle
	add esp,4
	pop esi
	test eax,eax
	je Block6

 Block5:
	mov eax,1
	pop edi
	ret

 Block6:
	xor eax,eax
	pop edi
	ret
}
}
// BasicStat::_ZtlSecurePut_nMMP
__SUB_CLASS(0007F6D0, __fastcall, 7612, BasicStat, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x6C]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x74],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// ForcedStat::_ZtlSecureGet_nMAD
__SUB_CLASS0(00321920, __fastcall, 7198, ForcedStat, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x50]
	push eax
	add ecx,0x48
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// ForcedStat::_ZtlSecureGet_nACC
__SUB_CLASS0(00321960, __fastcall, 7198, ForcedStat, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x68]
	push eax
	add ecx,0x60
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// ForcedStat::Decode
__SUB_CLASS_THIS(00327600, __thiscall, 7205, ForcedStat, void, CInPacket &) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode4
	mov ebx,eax
	test bl,1
	je Block2

 Block1:
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	mov edx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+8],eax

 Block2:
	test bl,2
	je Block4

 Block3:
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0xC]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x14],eax

 Block4:
	test bl,4
	je Block6

 Block5:
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x18]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x20],eax

 Block6:
	test bl,8
	je Block8

 Block7:
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x24]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2C],eax

 Block8:
	test bl,0x10
	je Block10

 Block9:
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x30]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x38],eax

 Block10:
	test bl,0x20
	je Block12

 Block11:
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x3C]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x44],eax

 Block12:
	test bl,0x40
	je Block14

 Block13:
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x48]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x50],eax

 Block14:
	test bl,bl
	jns Block16

 Block15:
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x54]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x5C],eax

 Block16:
	test ebx,0x100
	je Block18

 Block17:
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x60]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x68],eax

 Block18:
	test ebx,0x200
	je Block20

 Block19:
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	lea edx,[esi+0x6C]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x74],eax

 Block20:
	test ebx,0x400
	je Block22

 Block21:
	mov ecx,edi
	call CInPacket::Decode1
	movzx ecx,al
	lea edx,[esi+0x78]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x80],eax

 Block22:
	test ebx,0x800
	je Block24

 Block23:
	mov ecx,edi
	call CInPacket::Decode1
	movzx ecx,al
	lea edx,[esi+0x84]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x8C],eax

 Block24:
	test ebx,0x1000
	je Block26

 Block25:
	mov ecx,edi
	call CInPacket::Decode1
	movzx ecx,al
	lea edx,[esi+0x90]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x98],eax

 Block26:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// get_damage_adjusted_by_elemAttr
__SUB(003231E0, __cdecl, 131944, double, double, long, double, double) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0xC]
	cmp eax,3
	ja Block10

 Block1:
	cmp EAX, 0
je Block10
cmp EAX, 1
je Block2
cmp EAX, 2
je Block3
cmp EAX, 3
je Block4


 Block2:
	fld1
	fsub qword ptr [esp+0x10]
	fmul qword ptr [esp+4]
	ret

 Block3:
	fld qword ptr [esp+0x10]
	fmul qword ptr [__real_3fe0000000000000]
	fadd qword ptr [esp+0x18]
	fld1
	fsubrp st(1),st(0)
	fmul qword ptr [esp+4]
	ret

 Block4:
	fld qword ptr [esp+0x10]
	fmul qword ptr [__real_3fe0000000000000]
	fadd qword ptr [esp+0x18]
	fadd qword ptr [__real_3ff0000000000000]
	fld qword ptr [esp+4]
	fmul st(1),st
	fcom
	fnstsw ax
	test ah,5
	jp Block6

 Block5:
	fstp st(0)
	jmp Block7

 Block6:
	fstp st(1)

 Block7:
	fld qword ptr [__real_412e847e00000000]
	fcom
	fnstsw ax
	test ah,0x41
	jne Block9

 Block8:
	fstp st(0)
	ret

 Block9:
	fstp st(1)
	ret

 Block10:
	fld qword ptr [esp+4]
	ret
}
}
// _anon_ApplyGuidedBulletDamage
__SUB(003265E0, __cdecl, 131955, void, const CharacterData &, const SecondaryStat &, const unsigned long, double &) {
__asm {

 Block0:
	push ecx
	mov ecx,dword ptr [esp+8]
	push ebx
	lea eax,[esp+4]
	push eax
	push 0x4FA6AB
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	mov dword ptr [esp+0x10],0
	call CSkillInfo::GetSkillLevel_0
	mov ebx,eax
	test ebx,ebx
	jle Block9

 Block1:
	mov edx,dword ptr [esp+0x10]
	push edi
	mov edi,dword ptr [edx+0x13E4]
	test edi,edi
	je Block8

 Block2:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+4]
	mov ecx,edi
	call edx
	test al,al
	je Block8

 Block3:
	push esi
	lea esi,[edi+0x18]
	mov ecx,esi
	call ZFatalSection::Lock
	mov edi,dword ptr [edi+0x24]
	test esi,esi
	je Block6

 Block4:
	add dword ptr [esi+4],0xFFFFFFFF
	jne Block6

 Block5:
	mov dword ptr [esi],0

 Block6:
	pop esi
	cmp edi,dword ptr [esp+0x18]
	jne Block8

 Block7:
	mov ecx,dword ptr [esp+8]
	push ebx
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x168]
	push ecx
	add eax,0x160
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	add eax,0x64
	mov dword ptr [esp+8],eax
	fild dword ptr [esp+8]
	mov eax,dword ptr [esp+0x1C]
	fmul qword ptr [eax]
	fdiv qword ptr [__real_4059000000000000]
	fstp qword ptr [eax]

 Block8:
	pop edi

 Block9:
	pop ebx
	pop ecx
	ret
}
}
// SecondaryStat::~SecondaryStat
__SUB_CLASS_THIS0(00327790, __thiscall, 7651, SecondaryStat, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push edi
	lea edx,[esi+0x30]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x24]
	xor ecx,ecx
	mov dword ptr [esi+0x38],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x18]
	xor ecx,ecx
	mov dword ptr [esi+0x2C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xC]
	xor ecx,ecx
	mov dword ptr [esi+0x20],eax
	call _ZtlSecureTearHelper<long>::call
	mov edx,esi
	xor ecx,ecx
	mov dword ptr [esi+0x14],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x6C]
	xor ecx,ecx
	mov dword ptr [esi+8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x60]
	xor ecx,ecx
	mov dword ptr [esi+0x74],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x54]
	xor ecx,ecx
	mov dword ptr [esi+0x68],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x48]
	xor ecx,ecx
	mov dword ptr [esi+0x5C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x3C]
	xor ecx,ecx
	mov dword ptr [esi+0x50],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xA8]
	xor ecx,ecx
	mov dword ptr [esi+0x44],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x9C]
	xor ecx,ecx
	mov dword ptr [esi+0xB0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x90]
	xor ecx,ecx
	mov dword ptr [esi+0xA4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x84]
	xor ecx,ecx
	mov dword ptr [esi+0x98],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x78]
	xor ecx,ecx
	mov dword ptr [esi+0x8C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xE4]
	xor ecx,ecx
	mov dword ptr [esi+0x80],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xD8]
	xor ecx,ecx
	mov dword ptr [esi+0xEC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xCC]
	xor ecx,ecx
	mov dword ptr [esi+0xE0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xC0]
	xor ecx,ecx
	mov dword ptr [esi+0xD4],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xC8],eax
	lea edx,[esi+0xB4]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x120]
	xor ecx,ecx
	mov dword ptr [esi+0xBC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x114]
	xor ecx,ecx
	mov dword ptr [esi+0x128],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x108]
	xor ecx,ecx
	mov dword ptr [esi+0x11C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xFC]
	xor ecx,ecx
	mov dword ptr [esi+0x110],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xF0]
	xor ecx,ecx
	mov dword ptr [esi+0x104],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x15C]
	xor ecx,ecx
	mov dword ptr [esi+0xF8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x150]
	xor ecx,ecx
	mov dword ptr [esi+0x164],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x144]
	xor ecx,ecx
	mov dword ptr [esi+0x158],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x138]
	xor ecx,ecx
	mov dword ptr [esi+0x14C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x12C]
	xor ecx,ecx
	mov dword ptr [esi+0x140],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x18C]
	xor ecx,ecx
	mov dword ptr [esi+0x134],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x180]
	xor ecx,ecx
	mov dword ptr [esi+0x194],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x174]
	xor ecx,ecx
	mov dword ptr [esi+0x188],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x168]
	xor ecx,ecx
	mov dword ptr [esi+0x17C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1BC]
	xor ecx,ecx
	mov dword ptr [esi+0x170],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1B0]
	xor ecx,ecx
	mov dword ptr [esi+0x1C4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1A4]
	xor ecx,ecx
	mov dword ptr [esi+0x1B8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x198]
	xor ecx,ecx
	mov dword ptr [esi+0x1AC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1EC]
	xor ecx,ecx
	mov dword ptr [esi+0x1A0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1E0]
	xor ecx,ecx
	mov dword ptr [esi+0x1F4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1D4]
	xor ecx,ecx
	mov dword ptr [esi+0x1E8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1C8]
	xor ecx,ecx
	mov dword ptr [esi+0x1DC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xFA0]
	xor ecx,ecx
	mov dword ptr [esi+0x1D0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xF94]
	xor ecx,ecx
	mov dword ptr [esi+0xFA8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xF88]
	xor ecx,ecx
	mov dword ptr [esi+0xF9C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xF7C]
	xor ecx,ecx
	mov dword ptr [esi+0xF90],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xFD0]
	xor ecx,ecx
	mov dword ptr [esi+0xF84],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xFC4]
	xor ecx,ecx
	mov dword ptr [esi+0xFD8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xFB8]
	xor ecx,ecx
	mov dword ptr [esi+0xFCC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xFAC]
	xor ecx,ecx
	mov dword ptr [esi+0xFC0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1000]
	xor ecx,ecx
	mov dword ptr [esi+0xFB4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xFF4]
	xor ecx,ecx
	mov dword ptr [esi+0x1008],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xFE8]
	xor ecx,ecx
	mov dword ptr [esi+0xFFC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xFDC]
	xor ecx,ecx
	mov dword ptr [esi+0xFF0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1030]
	xor ecx,ecx
	mov dword ptr [esi+0xFE4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1024]
	xor ecx,ecx
	mov dword ptr [esi+0x1038],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1018]
	xor ecx,ecx
	mov dword ptr [esi+0x102C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x100C]
	xor ecx,ecx
	mov dword ptr [esi+0x1020],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1060]
	xor ecx,ecx
	mov dword ptr [esi+0x1014],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1054]
	xor ecx,ecx
	mov dword ptr [esi+0x1068],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x105C],eax
	lea edx,[esi+0x1048]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x103C]
	xor ecx,ecx
	mov dword ptr [esi+0x1050],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x210]
	xor ecx,ecx
	mov dword ptr [esi+0x1044],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x204]
	xor ecx,ecx
	mov dword ptr [esi+0x218],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1F8]
	xor ecx,ecx
	mov dword ptr [esi+0x20C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x24C]
	xor ecx,ecx
	mov dword ptr [esi+0x200],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x240]
	xor ecx,ecx
	mov dword ptr [esi+0x254],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x234]
	xor ecx,ecx
	mov dword ptr [esi+0x248],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x228]
	xor ecx,ecx
	mov dword ptr [esi+0x23C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x21C]
	xor ecx,ecx
	mov dword ptr [esi+0x230],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x270]
	xor ecx,ecx
	mov dword ptr [esi+0x224],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x264]
	xor ecx,ecx
	mov dword ptr [esi+0x278],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x258]
	xor ecx,ecx
	mov dword ptr [esi+0x26C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x294]
	xor ecx,ecx
	mov dword ptr [esi+0x260],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x288]
	xor ecx,ecx
	mov dword ptr [esi+0x29C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x27C]
	xor ecx,ecx
	mov dword ptr [esi+0x290],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x2B8]
	xor ecx,ecx
	mov dword ptr [esi+0x284],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x2AC]
	xor ecx,ecx
	mov dword ptr [esi+0x2C0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x2A0]
	xor ecx,ecx
	mov dword ptr [esi+0x2B4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1084]
	xor ecx,ecx
	mov dword ptr [esi+0x2A8],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x108C],eax
	lea edx,[esi+0x1078]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x106C]
	xor ecx,ecx
	mov dword ptr [esi+0x1080],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x10CC]
	xor ecx,ecx
	mov dword ptr [esi+0x1074],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x10C0]
	xor ecx,ecx
	mov dword ptr [esi+0x10D4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x10B4]
	xor ecx,ecx
	mov dword ptr [esi+0x10C8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x10F0]
	xor ecx,ecx
	mov dword ptr [esi+0x10BC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x10E4]
	xor ecx,ecx
	mov dword ptr [esi+0x10F8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x10D8]
	xor ecx,ecx
	mov dword ptr [esi+0x10EC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x2DC]
	xor ecx,ecx
	mov dword ptr [esi+0x10E0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x2D0]
	xor ecx,ecx
	mov dword ptr [esi+0x2E4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x2C4]
	xor ecx,ecx
	mov dword ptr [esi+0x2D8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x300]
	xor ecx,ecx
	mov dword ptr [esi+0x2CC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x2F4]
	xor ecx,ecx
	mov dword ptr [esi+0x308],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x2E8]
	xor ecx,ecx
	mov dword ptr [esi+0x2FC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x324]
	xor ecx,ecx
	mov dword ptr [esi+0x2F0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x318]
	xor ecx,ecx
	mov dword ptr [esi+0x32C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x30C]
	xor ecx,ecx
	mov dword ptr [esi+0x320],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x348]
	xor ecx,ecx
	mov dword ptr [esi+0x314],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x33C]
	xor ecx,ecx
	mov dword ptr [esi+0x350],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x330]
	xor ecx,ecx
	mov dword ptr [esi+0x344],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x338],eax
	lea edx,[esi+0x36C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x360]
	xor ecx,ecx
	mov dword ptr [esi+0x374],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x354]
	xor ecx,ecx
	mov dword ptr [esi+0x368],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x390]
	xor ecx,ecx
	mov dword ptr [esi+0x35C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x384]
	xor ecx,ecx
	mov dword ptr [esi+0x398],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x378]
	xor ecx,ecx
	mov dword ptr [esi+0x38C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x3B4]
	xor ecx,ecx
	mov dword ptr [esi+0x380],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x3A8]
	xor ecx,ecx
	mov dword ptr [esi+0x3BC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x39C]
	xor ecx,ecx
	mov dword ptr [esi+0x3B0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x3D8]
	xor ecx,ecx
	mov dword ptr [esi+0x3A4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x3CC]
	xor ecx,ecx
	mov dword ptr [esi+0x3E0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x3C0]
	xor ecx,ecx
	mov dword ptr [esi+0x3D4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x408]
	xor ecx,ecx
	mov dword ptr [esi+0x3C8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x3FC]
	xor ecx,ecx
	mov dword ptr [esi+0x410],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x3F0]
	xor ecx,ecx
	mov dword ptr [esi+0x404],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x3E4]
	xor ecx,ecx
	mov dword ptr [esi+0x3F8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x42C]
	xor ecx,ecx
	mov dword ptr [esi+0x3EC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x420]
	xor ecx,ecx
	mov dword ptr [esi+0x434],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x414]
	xor ecx,ecx
	mov dword ptr [esi+0x428],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x450]
	xor ecx,ecx
	mov dword ptr [esi+0x41C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x444]
	xor ecx,ecx
	mov dword ptr [esi+0x458],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x438]
	xor ecx,ecx
	mov dword ptr [esi+0x44C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x474]
	xor ecx,ecx
	mov dword ptr [esi+0x440],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x468]
	xor ecx,ecx
	mov dword ptr [esi+0x47C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x45C]
	xor ecx,ecx
	mov dword ptr [esi+0x470],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x498]
	xor ecx,ecx
	mov dword ptr [esi+0x464],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x48C]
	xor ecx,ecx
	mov dword ptr [esi+0x4A0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x480]
	xor ecx,ecx
	mov dword ptr [esi+0x494],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x4BC]
	xor ecx,ecx
	mov dword ptr [esi+0x488],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x4B0]
	xor ecx,ecx
	mov dword ptr [esi+0x4C4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x4A4]
	xor ecx,ecx
	mov dword ptr [esi+0x4B8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x4E0]
	xor ecx,ecx
	mov dword ptr [esi+0x4AC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x4D4]
	xor ecx,ecx
	mov dword ptr [esi+0x4E8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x4C8]
	xor ecx,ecx
	mov dword ptr [esi+0x4DC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x504]
	xor ecx,ecx
	mov dword ptr [esi+0x4D0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x4F8]
	xor ecx,ecx
	mov dword ptr [esi+0x50C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x4EC]
	xor ecx,ecx
	mov dword ptr [esi+0x500],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x528]
	xor ecx,ecx
	mov dword ptr [esi+0x4F4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x51C]
	xor ecx,ecx
	mov dword ptr [esi+0x530],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x510]
	xor ecx,ecx
	mov dword ptr [esi+0x524],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x54C]
	xor ecx,ecx
	mov dword ptr [esi+0x518],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x554],eax
	lea edx,[esi+0x540]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x534]
	xor ecx,ecx
	mov dword ptr [esi+0x548],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x570]
	xor ecx,ecx
	mov dword ptr [esi+0x53C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x564]
	xor ecx,ecx
	mov dword ptr [esi+0x578],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x558]
	xor ecx,ecx
	mov dword ptr [esi+0x56C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x594]
	xor ecx,ecx
	mov dword ptr [esi+0x560],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x588]
	xor ecx,ecx
	mov dword ptr [esi+0x59C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x57C]
	xor ecx,ecx
	mov dword ptr [esi+0x590],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x5B8]
	xor ecx,ecx
	mov dword ptr [esi+0x584],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x5AC]
	xor ecx,ecx
	mov dword ptr [esi+0x5C0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x5A0]
	xor ecx,ecx
	mov dword ptr [esi+0x5B4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x5DC]
	xor ecx,ecx
	mov dword ptr [esi+0x5A8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x5D0]
	xor ecx,ecx
	mov dword ptr [esi+0x5E4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x5C4]
	xor ecx,ecx
	mov dword ptr [esi+0x5D8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x600]
	xor ecx,ecx
	mov dword ptr [esi+0x5CC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x5F4]
	xor ecx,ecx
	mov dword ptr [esi+0x608],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x5E8]
	xor ecx,ecx
	mov dword ptr [esi+0x5FC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x624]
	xor ecx,ecx
	mov dword ptr [esi+0x5F0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x618]
	xor ecx,ecx
	mov dword ptr [esi+0x62C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x60C]
	xor ecx,ecx
	mov dword ptr [esi+0x620],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x614],eax
	lea edx,[esi+0x648]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x63C]
	xor ecx,ecx
	mov dword ptr [esi+0x650],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x630]
	xor ecx,ecx
	mov dword ptr [esi+0x644],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x678]
	xor ecx,ecx
	mov dword ptr [esi+0x638],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x66C]
	xor ecx,ecx
	mov dword ptr [esi+0x680],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x660]
	xor ecx,ecx
	mov dword ptr [esi+0x674],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x654]
	xor ecx,ecx
	mov dword ptr [esi+0x668],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x69C]
	xor ecx,ecx
	mov dword ptr [esi+0x65C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x690]
	xor ecx,ecx
	mov dword ptr [esi+0x6A4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x684]
	xor ecx,ecx
	mov dword ptr [esi+0x698],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x6C0]
	xor ecx,ecx
	mov dword ptr [esi+0x68C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x6B4]
	xor ecx,ecx
	mov dword ptr [esi+0x6C8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x6A8]
	xor ecx,ecx
	mov dword ptr [esi+0x6BC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xD18]
	xor ecx,ecx
	mov dword ptr [esi+0x6B0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xD0C]
	xor ecx,ecx
	mov dword ptr [esi+0xD20],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xD00]
	xor ecx,ecx
	mov dword ptr [esi+0xD14],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xD3C]
	xor ecx,ecx
	mov dword ptr [esi+0xD08],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xD30]
	xor ecx,ecx
	mov dword ptr [esi+0xD44],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xD24]
	xor ecx,ecx
	mov dword ptr [esi+0xD38],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xD60]
	xor ecx,ecx
	mov dword ptr [esi+0xD2C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xD68],eax
	lea edx,[esi+0xD54]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xD48]
	xor ecx,ecx
	mov dword ptr [esi+0xD5C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x6F0]
	xor ecx,ecx
	mov dword ptr [esi+0xD50],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x6E4]
	xor ecx,ecx
	mov dword ptr [esi+0x6F8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x6D8]
	xor ecx,ecx
	mov dword ptr [esi+0x6EC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x6CC]
	xor ecx,ecx
	mov dword ptr [esi+0x6E0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x720]
	xor ecx,ecx
	mov dword ptr [esi+0x6D4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x714]
	xor ecx,ecx
	mov dword ptr [esi+0x728],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x708]
	xor ecx,ecx
	mov dword ptr [esi+0x71C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x6FC]
	xor ecx,ecx
	mov dword ptr [esi+0x710],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x744]
	xor ecx,ecx
	mov dword ptr [esi+0x704],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x738]
	xor ecx,ecx
	mov dword ptr [esi+0x74C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x72C]
	xor ecx,ecx
	mov dword ptr [esi+0x740],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x768]
	xor ecx,ecx
	mov dword ptr [esi+0x734],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x75C]
	xor ecx,ecx
	mov dword ptr [esi+0x770],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x750]
	xor ecx,ecx
	mov dword ptr [esi+0x764],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x78C]
	xor ecx,ecx
	mov dword ptr [esi+0x758],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x780]
	xor ecx,ecx
	mov dword ptr [esi+0x794],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x774]
	xor ecx,ecx
	mov dword ptr [esi+0x788],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x7B0]
	xor ecx,ecx
	mov dword ptr [esi+0x77C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x7A4]
	xor ecx,ecx
	mov dword ptr [esi+0x7B8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x798]
	xor ecx,ecx
	mov dword ptr [esi+0x7AC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x7E0]
	xor ecx,ecx
	mov dword ptr [esi+0x7A0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x7D4]
	xor ecx,ecx
	mov dword ptr [esi+0x7E8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x7C8]
	xor ecx,ecx
	mov dword ptr [esi+0x7DC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x7BC]
	xor ecx,ecx
	mov dword ptr [esi+0x7D0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x804]
	xor ecx,ecx
	mov dword ptr [esi+0x7C4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x7F8]
	xor ecx,ecx
	mov dword ptr [esi+0x80C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x7EC]
	xor ecx,ecx
	mov dword ptr [esi+0x800],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x834]
	xor ecx,ecx
	mov dword ptr [esi+0x7F4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x828]
	xor ecx,ecx
	mov dword ptr [esi+0x83C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x81C]
	xor ecx,ecx
	mov dword ptr [esi+0x830],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x810]
	xor ecx,ecx
	mov dword ptr [esi+0x824],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x858]
	xor ecx,ecx
	mov dword ptr [esi+0x818],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x84C]
	xor ecx,ecx
	mov dword ptr [esi+0x860],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x840]
	xor ecx,ecx
	mov dword ptr [esi+0x854],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x888]
	xor ecx,ecx
	mov dword ptr [esi+0x848],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x87C]
	xor ecx,ecx
	mov dword ptr [esi+0x890],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x870]
	xor ecx,ecx
	mov dword ptr [esi+0x884],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x864]
	xor ecx,ecx
	mov dword ptr [esi+0x878],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x8B8]
	xor ecx,ecx
	mov dword ptr [esi+0x86C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x8C0],eax
	lea edx,[esi+0x8AC]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x8A0]
	xor ecx,ecx
	mov dword ptr [esi+0x8B4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x894]
	xor ecx,ecx
	mov dword ptr [esi+0x8A8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x8E8]
	xor ecx,ecx
	mov dword ptr [esi+0x89C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x8DC]
	xor ecx,ecx
	mov dword ptr [esi+0x8F0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x8D0]
	xor ecx,ecx
	mov dword ptr [esi+0x8E4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x8C4]
	xor ecx,ecx
	mov dword ptr [esi+0x8D8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x900]
	xor ecx,ecx
	mov dword ptr [esi+0x8CC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x90C]
	xor ecx,ecx
	mov dword ptr [esi+0x908],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x8F4]
	xor ecx,ecx
	mov dword ptr [esi+0x914],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x924]
	xor ecx,ecx
	mov dword ptr [esi+0x8FC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x930]
	xor ecx,ecx
	mov dword ptr [esi+0x92C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x918]
	xor ecx,ecx
	mov dword ptr [esi+0x938],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x954]
	xor ecx,ecx
	mov dword ptr [esi+0x920],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x948]
	xor ecx,ecx
	mov dword ptr [esi+0x95C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x93C]
	xor ecx,ecx
	mov dword ptr [esi+0x950],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x978]
	xor ecx,ecx
	mov dword ptr [esi+0x944],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x96C]
	xor ecx,ecx
	mov dword ptr [esi+0x980],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x960]
	xor ecx,ecx
	mov dword ptr [esi+0x974],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x99C]
	xor ecx,ecx
	mov dword ptr [esi+0x968],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x9A4],eax
	lea edx,[esi+0x990]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x984]
	xor ecx,ecx
	mov dword ptr [esi+0x998],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x9CC]
	xor ecx,ecx
	mov dword ptr [esi+0x98C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x9C0]
	xor ecx,ecx
	mov dword ptr [esi+0x9D4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x9B4]
	xor ecx,ecx
	mov dword ptr [esi+0x9C8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x9A8]
	xor ecx,ecx
	mov dword ptr [esi+0x9BC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xA08]
	xor ecx,ecx
	mov dword ptr [esi+0x9B0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x9FC]
	xor ecx,ecx
	mov dword ptr [esi+0xA10],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x9F0]
	xor ecx,ecx
	mov dword ptr [esi+0xA04],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x9E4]
	xor ecx,ecx
	mov dword ptr [esi+0x9F8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x9D8]
	xor ecx,ecx
	mov dword ptr [esi+0x9EC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xA38]
	xor ecx,ecx
	mov dword ptr [esi+0x9E0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xA2C]
	xor ecx,ecx
	mov dword ptr [esi+0xA40],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xA20]
	xor ecx,ecx
	mov dword ptr [esi+0xA34],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xA14]
	xor ecx,ecx
	mov dword ptr [esi+0xA28],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xA68]
	xor ecx,ecx
	mov dword ptr [esi+0xA1C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xA5C]
	xor ecx,ecx
	mov dword ptr [esi+0xA70],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xA50]
	xor ecx,ecx
	mov dword ptr [esi+0xA64],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xA44]
	xor ecx,ecx
	mov dword ptr [esi+0xA58],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xA94]
	xor ecx,ecx
	mov dword ptr [esi+0xA4C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xA9C],eax
	lea edx,[esi+0xA88]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xA7C]
	xor ecx,ecx
	mov dword ptr [esi+0xA90],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xA74]
	xor cl,cl
	mov dword ptr [esi+0xA84],eax
	call _ZtlSecureTearHelper<char>::call
	lea edx,[esi+0xAC0]
	xor ecx,ecx
	mov dword ptr [esi+0xA78],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xAB4]
	xor ecx,ecx
	mov dword ptr [esi+0xAC8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xAA8]
	xor ecx,ecx
	mov dword ptr [esi+0xABC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xAA0]
	xor cl,cl
	mov dword ptr [esi+0xAB0],eax
	call _ZtlSecureTearHelper<char>::call
	lea edx,[esi+0xAF0]
	xor ecx,ecx
	mov dword ptr [esi+0xAA4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xAE4]
	xor ecx,ecx
	mov dword ptr [esi+0xAF8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xAD8]
	xor ecx,ecx
	mov dword ptr [esi+0xAEC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xACC]
	xor ecx,ecx
	mov dword ptr [esi+0xAE0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xB20]
	xor ecx,ecx
	mov dword ptr [esi+0xAD4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xB14]
	xor ecx,ecx
	mov dword ptr [esi+0xB28],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xB08]
	xor ecx,ecx
	mov dword ptr [esi+0xB1C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xAFC]
	xor ecx,ecx
	mov dword ptr [esi+0xB10],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xB44]
	xor ecx,ecx
	mov dword ptr [esi+0xB04],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xB38]
	xor ecx,ecx
	mov dword ptr [esi+0xB4C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xB2C]
	xor ecx,ecx
	mov dword ptr [esi+0xB40],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xB68]
	xor ecx,ecx
	mov dword ptr [esi+0xB34],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xB5C]
	xor ecx,ecx
	mov dword ptr [esi+0xB70],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xB50]
	xor ecx,ecx
	mov dword ptr [esi+0xB64],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xB8C]
	xor ecx,ecx
	mov dword ptr [esi+0xB58],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xB80]
	xor ecx,ecx
	mov dword ptr [esi+0xB94],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xB74]
	xor ecx,ecx
	mov dword ptr [esi+0xB88],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xBB0]
	xor ecx,ecx
	mov dword ptr [esi+0xB7C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xBA4]
	xor ecx,ecx
	mov dword ptr [esi+0xBB8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xB98]
	xor ecx,ecx
	mov dword ptr [esi+0xBAC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xBD4]
	xor ecx,ecx
	mov dword ptr [esi+0xBA0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xBC8]
	xor ecx,ecx
	mov dword ptr [esi+0xBDC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xBBC]
	xor ecx,ecx
	mov dword ptr [esi+0xBD0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xBF8]
	xor ecx,ecx
	mov dword ptr [esi+0xBC4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xBEC]
	xor ecx,ecx
	mov dword ptr [esi+0xC00],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xBE0]
	xor ecx,ecx
	mov dword ptr [esi+0xBF4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xC1C]
	xor ecx,ecx
	mov dword ptr [esi+0xBE8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xC10]
	xor ecx,ecx
	mov dword ptr [esi+0xC24],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xC04]
	xor ecx,ecx
	mov dword ptr [esi+0xC18],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xC40]
	xor ecx,ecx
	mov dword ptr [esi+0xC0C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xC34]
	xor ecx,ecx
	mov dword ptr [esi+0xC48],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xC28]
	xor ecx,ecx
	mov dword ptr [esi+0xC3C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xC64]
	xor ecx,ecx
	mov dword ptr [esi+0xC30],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xC58]
	xor ecx,ecx
	mov dword ptr [esi+0xC6C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xC60],eax
	lea edx,[esi+0xC4C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xC88]
	xor ecx,ecx
	mov dword ptr [esi+0xC54],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xC7C]
	xor ecx,ecx
	mov dword ptr [esi+0xC90],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xC70]
	xor ecx,ecx
	mov dword ptr [esi+0xC84],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xCAC]
	xor ecx,ecx
	mov dword ptr [esi+0xC78],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xCA0]
	xor ecx,ecx
	mov dword ptr [esi+0xCB4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xC94]
	xor ecx,ecx
	mov dword ptr [esi+0xCA8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xCD0]
	xor ecx,ecx
	mov dword ptr [esi+0xC9C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xCC4]
	xor ecx,ecx
	mov dword ptr [esi+0xCD8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xCB8]
	xor ecx,ecx
	mov dword ptr [esi+0xCCC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xCF4]
	xor ecx,ecx
	mov dword ptr [esi+0xCC0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xCE8]
	xor ecx,ecx
	mov dword ptr [esi+0xCFC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xCDC]
	xor ecx,ecx
	mov dword ptr [esi+0xCF0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xD84]
	xor ecx,ecx
	mov dword ptr [esi+0xCE4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xD78]
	xor ecx,ecx
	mov dword ptr [esi+0xD8C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xD6C]
	xor ecx,ecx
	mov dword ptr [esi+0xD80],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xDB4]
	xor ecx,ecx
	mov dword ptr [esi+0xD74],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xDA8]
	xor ecx,ecx
	mov dword ptr [esi+0xDBC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xD9C]
	xor ecx,ecx
	mov dword ptr [esi+0xDB0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xD90]
	xor ecx,ecx
	mov dword ptr [esi+0xDA4],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xD98],eax
	lea edx,[esi+0xDD8]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xDCC]
	xor ecx,ecx
	mov dword ptr [esi+0xDE0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xDC0]
	xor ecx,ecx
	mov dword ptr [esi+0xDD4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xDFC]
	xor ecx,ecx
	mov dword ptr [esi+0xDC8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xDF0]
	xor ecx,ecx
	mov dword ptr [esi+0xE04],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xDE4]
	xor ecx,ecx
	mov dword ptr [esi+0xDF8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xE20]
	xor ecx,ecx
	mov dword ptr [esi+0xDEC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xE14]
	xor ecx,ecx
	mov dword ptr [esi+0xE28],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xE08]
	xor ecx,ecx
	mov dword ptr [esi+0xE1C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xE44]
	xor ecx,ecx
	mov dword ptr [esi+0xE10],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xE38]
	xor ecx,ecx
	mov dword ptr [esi+0xE4C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xE2C]
	xor ecx,ecx
	mov dword ptr [esi+0xE40],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xE68]
	xor ecx,ecx
	mov dword ptr [esi+0xE34],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xE5C]
	xor ecx,ecx
	mov dword ptr [esi+0xE70],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xE50]
	xor ecx,ecx
	mov dword ptr [esi+0xE64],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xE8C]
	xor ecx,ecx
	mov dword ptr [esi+0xE58],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xE80]
	xor ecx,ecx
	mov dword ptr [esi+0xE94],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xE74]
	xor ecx,ecx
	mov dword ptr [esi+0xE88],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xEBC]
	xor ecx,ecx
	mov dword ptr [esi+0xE7C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xEB0]
	xor ecx,ecx
	mov dword ptr [esi+0xEC4],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xEB8],eax
	lea edx,[esi+0xEA4]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xE98]
	xor ecx,ecx
	mov dword ptr [esi+0xEAC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xEE0]
	xor ecx,ecx
	mov dword ptr [esi+0xEA0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xED4]
	xor ecx,ecx
	mov dword ptr [esi+0xEE8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xEC8]
	xor ecx,ecx
	mov dword ptr [esi+0xEDC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xF04]
	xor ecx,ecx
	mov dword ptr [esi+0xED0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xEF8]
	xor ecx,ecx
	mov dword ptr [esi+0xF0C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xEEC]
	xor ecx,ecx
	mov dword ptr [esi+0xF00],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xF28]
	xor ecx,ecx
	mov dword ptr [esi+0xEF4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xF1C]
	xor ecx,ecx
	mov dword ptr [esi+0xF30],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xF10]
	xor ecx,ecx
	mov dword ptr [esi+0xF24],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xF4C]
	xor ecx,ecx
	mov dword ptr [esi+0xF18],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xF40]
	xor ecx,ecx
	mov dword ptr [esi+0xF54],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xF34]
	xor ecx,ecx
	mov dword ptr [esi+0xF48],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xF70]
	xor ecx,ecx
	mov dword ptr [esi+0xF3C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xF64]
	xor ecx,ecx
	mov dword ptr [esi+0xF78],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xF58]
	xor ecx,ecx
	mov dword ptr [esi+0xF6C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x10A8]
	xor ecx,ecx
	mov dword ptr [esi+0xF60],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x109C]
	xor ecx,ecx
	mov dword ptr [esi+0x10B0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1090]
	xor ecx,ecx
	mov dword ptr [esi+0x10A4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1114]
	xor ecx,ecx
	mov dword ptr [esi+0x1098],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1108]
	xor ecx,ecx
	mov dword ptr [esi+0x111C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x10FC]
	xor ecx,ecx
	mov dword ptr [esi+0x1110],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1138]
	xor ecx,ecx
	mov dword ptr [esi+0x1104],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x112C]
	xor ecx,ecx
	mov dword ptr [esi+0x1140],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1120]
	xor ecx,ecx
	mov dword ptr [esi+0x1134],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x115C]
	xor ecx,ecx
	mov dword ptr [esi+0x1128],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1150]
	xor ecx,ecx
	mov dword ptr [esi+0x1164],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1144]
	xor ecx,ecx
	mov dword ptr [esi+0x1158],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1180]
	xor ecx,ecx
	mov dword ptr [esi+0x114C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1174]
	xor ecx,ecx
	mov dword ptr [esi+0x1188],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1168]
	xor ecx,ecx
	mov dword ptr [esi+0x117C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x11A4]
	xor ecx,ecx
	mov dword ptr [esi+0x1170],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1198]
	xor ecx,ecx
	mov dword ptr [esi+0x11AC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x118C]
	xor ecx,ecx
	mov dword ptr [esi+0x11A0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x11D4]
	xor ecx,ecx
	mov dword ptr [esi+0x1194],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x11C8]
	xor ecx,ecx
	mov dword ptr [esi+0x11DC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x11BC]
	xor ecx,ecx
	mov dword ptr [esi+0x11D0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x11F8]
	xor ecx,ecx
	mov dword ptr [esi+0x11C4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x11EC]
	xor ecx,ecx
	mov dword ptr [esi+0x1200],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x11E0]
	xor ecx,ecx
	mov dword ptr [esi+0x11F4],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x11E8],eax
	lea edx,[esi+0x121C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1210]
	xor ecx,ecx
	mov dword ptr [esi+0x1224],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1204]
	xor ecx,ecx
	mov dword ptr [esi+0x1218],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1240]
	xor ecx,ecx
	mov dword ptr [esi+0x120C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1234]
	xor ecx,ecx
	mov dword ptr [esi+0x1248],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1228]
	xor ecx,ecx
	mov dword ptr [esi+0x123C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x11B0]
	xor ecx,ecx
	mov dword ptr [esi+0x1230],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1264]
	xor ecx,ecx
	mov dword ptr [esi+0x11B8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1258]
	xor ecx,ecx
	mov dword ptr [esi+0x126C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x124C]
	xor ecx,ecx
	mov dword ptr [esi+0x1260],eax
	call _ZtlSecureTearHelper<long>::call
	push 0x58
	mov dword ptr [esi+0x1254],eax
	lea eax,[esi+0x1270]
	push 0
	push eax
	call _memset
	add esp,0xC
	lea edx,[esi+0x12EC]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x12E0]
	xor ecx,ecx
	mov dword ptr [esi+0x12F4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x12D4]
	xor ecx,ecx
	mov dword ptr [esi+0x12E8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x12C8]
	xor ecx,ecx
	mov dword ptr [esi+0x12DC],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1310]
	xor ecx,ecx
	mov dword ptr [esi+0x12D0],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1304]
	xor ecx,ecx
	mov dword ptr [esi+0x1318],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x12F8]
	xor ecx,ecx
	mov dword ptr [esi+0x130C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1334]
	xor ecx,ecx
	mov dword ptr [esi+0x1300],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1328]
	xor ecx,ecx
	mov dword ptr [esi+0x133C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x131C]
	xor ecx,ecx
	mov dword ptr [esi+0x1330],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1358]
	xor ecx,ecx
	mov dword ptr [esi+0x1324],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x134C]
	xor ecx,ecx
	mov dword ptr [esi+0x1360],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1340]
	xor ecx,ecx
	mov dword ptr [esi+0x1354],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x137C]
	xor ecx,ecx
	mov dword ptr [esi+0x1348],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1370]
	xor ecx,ecx
	mov dword ptr [esi+0x1384],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1364]
	xor ecx,ecx
	mov dword ptr [esi+0x1378],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x13AC]
	xor ecx,ecx
	mov dword ptr [esi+0x136C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x13A0]
	xor ecx,ecx
	mov dword ptr [esi+0x13B4],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1394]
	xor ecx,ecx
	mov dword ptr [esi+0x13A8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1388]
	xor ecx,ecx
	mov dword ptr [esi+0x139C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1390],eax
	add esi,0x13BC
	mov edi,7
	lea esp,[esp]

 Block1:
	mov ecx,dword ptr [esi]
	call TemporaryStatBase<long>::Reset
	add esi,8
	sub edi,1
	jne Block1

 Block2:
	pop edi
	pop esi
	ret
}
}
// BasicStat::_ZtlSecurePut_nDEX
__SUB_CLASS(0007F650, __fastcall, 7612, BasicStat, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x30]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x38],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// SecondaryStat::_ZtlSecurePut_nItemPADR
__SUB_CLASS(00327280, __fastcall, 7639, SecondaryStat, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x30]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x38],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// SecondaryStat::GetIncACC
__SUB_CLASS_THIS(00325850, __thiscall, 7671, SecondaryStat, long, const CharacterData &) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x104]
	push edi
	push eax
	lea ecx,[esi+0xFC]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x13BC]
	mov edx,dword ptr [ecx]
	mov edi,eax
	mov eax,dword ptr [edx+4]
	add esp,8
	call eax
	test al,al
	je Block3

 Block1:
	mov esi,dword ptr [esp+0x10]
	mov ecx,dword ptr [esi+0x3D]
	push ecx
	lea edx,[esi+0x39]
	push edx
	mov dword ptr [esp+0x10],0
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	add esp,8
	lea ecx,[esp+8]
	push ecx
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	dec eax
	neg eax
	sbb eax,eax
	and eax,0xFF67908D
	add eax,0xE66864
	push eax
	push esi
	call CSkillInfo::GetSkillLevel_0
	mov ecx,dword ptr [esp+8]
	test ecx,ecx
	je Block3

 Block2:
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x54]
	push ecx
	add eax,0x4C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp edi,eax
	jl Block4

 Block3:
	mov eax,edi

 Block4:
	pop edi
	pop esi
	pop ecx
	ret 4
}
}
// ForcedStat::_ZtlSecureGet_nMDD
__SUB_CLASS0(00321940, __fastcall, 7198, ForcedStat, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x5C]
	push eax
	add ecx,0x54
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// TemporaryStat_GuidedBullet::EncodeForClient
_SUB_EXCEPTION_HANDLER(332B20)
__SUB_CLASS_THIS(00332B20, __thiscall, 7167, TemporaryStat_GuidedBullet, void, COutPacket &) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_332B20
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	lea esi,[edi+0x18]
	mov ecx,esi
	mov dword ptr [esp+0x10],esi
	call ZFatalSection::Lock
	mov ebx,dword ptr [esp+0x24]
	push ebx
	mov ecx,edi
	mov dword ptr [esp+0x20],0
	call TwoStateTemporaryStat<long, not_equal<long, 0>, NoExpire, Nothing<long>, Nothing<long>>::EncodeForClient
	mov eax,dword ptr [edi+0x24]
	push eax
	mov ecx,ebx
	call COutPacket::Encode4
	test esi,esi
	je Block3

 Block1:
	add dword ptr [esi+4],0xFFFFFFFF
	jne Block3

 Block2:
	mov dword ptr [esi],0

 Block3:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 4
}
}
// SecondaryStat::_ZtlSecurePut_nPAD
__SUB_CLASS(00327260, __fastcall, 7639, SecondaryStat, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	mov edx,edi
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+8],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// NoExpire::GetExpireTerm
__SUB_CLASS_THIS0(003207F0, __thiscall, 7117, NoExpire, unsigned long) {
__asm {

 Block0:
	mov eax,0x7FFFFFFF
	ret
}
}
// CalcDamage::CalcDamage
__SUB_CLASS_THIS0(0032C490, __thiscall, 7813, CalcDamage, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CRand32::_ctor_default
	lea ecx,[esi+0x20]
	call CRand32::_ctor_default
	lea ecx,[esi+0x40]
	call CRand32::_ctor_default
	lea ecx,[esi+0x60]
	call CRand32::_ctor_default
	lea ecx,[esi+0x80]
	call CRand32::_ctor_default
	lea ecx,[esi+0xA0]
	call CRand32::_ctor_default
	mov eax,esi
	pop esi
	ret
}
}
// SecondaryStat::_ZtlSecurePut_nACC
__SUB_CLASS(00327360, __fastcall, 7639, SecondaryStat, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0xF0]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0xF8],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// SecondaryStat::_ZtlSecureGet_nConversion_
__SUB_CLASS0(000FFF20, __fastcall, 7637, SecondaryStat, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x11C4]
	push eax
	add ecx,0x11BC
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// BasicStat::_ZtlSecurePut_nMHP
__SUB_CLASS(0007F6B0, __fastcall, 7612, BasicStat, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x60]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x68],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// MobStat::Reset
__SUB_CLASS_THIS(0032CC90, __thiscall, 7783, MobStat, void, NakedParam<MY_UINT128>, CInPacket &) {
__asm {

 Block0:
	sub esp,0x18
	push ebx
	push ebp
	push esi
	push edi
	sub esp,0x10
	mov esi,ecx
	mov ecx,esp
	push 0x80
	lea eax,[esp+0x40]
	push eax
	mov dword ptr [esp+0x28],esi
	call MY_UINT128::_ctor_2
	mov ecx,esi
	call MobStat::Reset_0
	push offset MobStat::MS_Burned
	lea ecx,[esp+0x1C]
	push ecx
	lea ecx,[esp+0x34]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block10

 Block1:
	mov ebp,dword ptr [esp+0x3C]
	mov ecx,ebp
	call CInPacket::Decode4
	test eax,eax
	jle Block10

 Block2:
	mov dword ptr [esp+0x14],eax
	lea esp,[esp]

 Block3:
	mov ecx,ebp
	call CInPacket::Decode4
	mov ecx,ebp
	mov edi,eax
	call CInPacket::Decode4
	mov ebx,eax
	mov eax,dword ptr [esi+0x230]
	mov dword ptr [esp+0x3C],eax
	test eax,eax
	je Block9

 Block4:
	lea edx,[esp+0x3C]
	push edx
	mov esi,eax
	call ZList<MobStat::BURNED_INFO>::GetNext
	add esp,4
	cmp dword ptr [eax],edi
	jne Block7

 Block5:
	cmp dword ptr [eax+4],ebx
	jne Block7

 Block6:
	mov ecx,dword ptr [esp+0x10]
	push esi
	add ecx,0x224
	call ZList<MobStat::BURNED_INFO>::RemoveAt

 Block7:
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	jne Block4

 Block8:
	mov esi,dword ptr [esp+0x10]

 Block9:
	sub dword ptr [esp+0x14],1
	jne Block3

 Block10:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 0x14
}
}
// MobStat::AdjustDamagedElemAttr
__SUB_CLASS_THIS(003211F0, __thiscall, 7787, MobStat, void, long, const long *) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x205D2B
	jne Block7

 Block1:
	mov eax,dword ptr [esp+8]
	mov eax,dword ptr [eax+8]
	sub eax,0
	je Block6

 Block2:
	sub eax,1
	je Block5

 Block3:
	sub eax,1
	jne Block14

 Block4:
	mov dword ptr [ecx+0xC],eax
	ret 8

 Block5:
	mov dword ptr [ecx+0xC],2
	ret 8

 Block6:
	mov dword ptr [ecx+0xC],3
	ret 8

 Block7:
	cmp eax,0x21E3CB
	jne Block14

 Block8:
	mov edx,dword ptr [esp+8]
	mov eax,dword ptr [edx+4]
	sub eax,0
	je Block13

 Block9:
	sub eax,1
	je Block12

 Block10:
	sub eax,1
	jne Block14

 Block11:
	mov dword ptr [ecx+8],eax
	ret 8

 Block12:
	mov dword ptr [ecx+8],2
	ret 8

 Block13:
	mov dword ptr [ecx+8],3

 Block14:
	ret 8
}
}
// SecondaryStat::_ZtlSecurePut_nMDD
__SUB_CLASS(00327320, __fastcall, 7639, SecondaryStat, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0xB4]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0xBC],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// SecondaryStat::_ZtlSecurePut_nItemPDDR
__SUB_CLASS(003272C0, __fastcall, 7639, SecondaryStat, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x6C]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x74],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// ForcedStat::_ZtlSecureGet_nSpeedMax
__SUB_CLASS0(003219E0, __fastcall, 7198, ForcedStat, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x98]
	push eax
	add ecx,0x90
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// SecondaryStat::_ZtlSecurePut_nPDD
__SUB_CLASS(003272A0, __fastcall, 7639, SecondaryStat, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x3C]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x44],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CalcDamage::PDamageSummoned
_SUB_EXCEPTION_HANDLER(32EC90)
__SUB_CLASS_THIS(0032EC90, __thiscall, 7821, CalcDamage, long, const MobStat &, const CharacterData &, const BasicStat &, const SecondaryStat &, MobAttackInfo *, uint32_t, NakedParam<ZRef<PassiveSkillData>>, long *, unsigned long, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_32EC90
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x50]
	mov ecx,dword ptr [esp+0x4C]
	mov edx,dword ptr [esp+0x48]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	push eax
	mov eax,dword ptr [esp+0x48]
	push ecx
	mov ecx,dword ptr [esp+0x48]
	push edx
	push eax
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],ecx
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [esp+0x34],0
	mov dword ptr [esp+0x68],esp
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ebp

 Block2:
	mov edx,dword ptr [esp+0x50]
	mov eax,dword ptr [esp+0x4C]
	mov ecx,dword ptr [esp+0x48]
	push edx
	mov edx,dword ptr [esp+0x48]
	push eax
	mov eax,dword ptr [esp+0x48]
	push ecx
	mov ecx,dword ptr [esp+0x48]
	push edx
	push eax
	push ecx
	mov ecx,esi
	call CalcDamage::PDamage_2
	mov ebx,eax
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block6

 Block3:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	push edi
	call ebp
	test esi,esi
	je Block6

 Block5:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block6:
	mov eax,ebx
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 0x30
}
}
// SecondaryStat::_ZtlSecurePut_nCraft
__SUB_CLASS(003273E0, __fastcall, 7639, SecondaryStat, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x168]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x170],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// SecondaryStat::ApplySocketOptionR
_SUB_EXCEPTION_HANDLER(32FFA0)
__SUB_CLASS_THIS(0032FFA0, __thiscall, 7687, SecondaryStat, void, long, long, SecondaryStatRateOption &) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_32FFA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x24]
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemOptionInfo>::ms_pInstance]
	call CItemOptionInfo::GetSocketOption
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block4

 Block1:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 0xC
}
}
// CalcDamage::CalcMImmune
__SUB_CLASS_THIS(00323020, __thiscall, 7841, CalcDamage, int32_t, const MobStat &, const SecondaryStat &, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp dword ptr [eax+0x120],0
	je Block3

 Block1:
	mov eax,dword ptr [esp+8]
	mov ecx,dword ptr [eax+0xA28]
	push ecx
	add eax,0xA20
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp dword ptr [esp+0xC],eax
	jle Block3

 Block2:
	mov eax,1
	ret 0xC

 Block3:
	xor eax,eax
	ret 0xC
}
}
// NoExpire::SetExpireTerm
__SUB_CLASS_THIS(00320800, __thiscall, 7118, NoExpire, void, unsigned long) {
__asm {

 Block0:
	ret 4
}
}
// SecondaryStat::IsSetted
__SUB_CLASS_THIS(00324270, __thiscall, 7690, SecondaryStat, int32_t, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x20]
	push edi
	push eax
	lea ecx,[esi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edi,dword ptr [esp+0x14]
	add esp,8
	cmp eax,edi
	jne Block2

 Block1:
	pop edi
	mov eax,1
	pop esi
	ret 4

 Block2:
	mov edx,dword ptr [esi+0x5C]
	push edx
	lea eax,[esi+0x54]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,edi
	je Block1

 Block3:
	mov ecx,dword ptr [esi+0x98]
	push ecx
	lea edx,[esi+0x90]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,edi
	je Block1

 Block4:
	mov eax,dword ptr [esi+0xD4]
	push eax
	lea ecx,[esi+0xCC]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,edi
	je Block1

 Block5:
	mov edx,dword ptr [esi+0x110]
	push edx
	lea eax,[esi+0x108]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,edi
	je Block1

 Block6:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rEVA_
	cmp eax,edi
	je Block1

 Block7:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rCraft_
	cmp eax,edi
	je Block1

 Block8:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rSpeed_
	cmp eax,edi
	je Block1

 Block9:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rJump_
	cmp eax,edi
	je Block1

 Block10:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rEMHP_
	cmp eax,edi
	je Block1

 Block11:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rEMMP_
	cmp eax,edi
	je Block1

 Block12:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rEPAD_
	cmp eax,edi
	je Block1

 Block13:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rEPDD_
	cmp eax,edi
	je Block1

 Block14:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rEMDD_
	cmp eax,edi
	je Block1

 Block15:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rMagicGuard_
	cmp eax,edi
	je Block1

 Block16:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rDarkSight_
	cmp eax,edi
	je Block1

 Block17:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rBooster_
	cmp eax,edi
	je Block1

 Block18:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rPowerGuard_
	cmp eax,edi
	je Block1

 Block19:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rGuard_
	cmp eax,edi
	je Block1

 Block20:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rSafetyDamage_
	cmp eax,edi
	je Block1

 Block21:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rSafetyAbsorb_
	cmp eax,edi
	je Block1

 Block22:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rMaxHP_
	cmp eax,edi
	je Block1

 Block23:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rMaxMP_
	cmp eax,edi
	je Block1

 Block24:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rInvincible_
	cmp eax,edi
	je Block1

 Block25:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rSoulArrow_
	cmp eax,edi
	je Block1

 Block26:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rStun_
	cmp eax,edi
	je Block1

 Block27:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rPoison_
	cmp eax,edi
	je Block1

 Block28:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rSeal_
	cmp eax,edi
	je Block1

 Block29:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rDarkness_
	cmp eax,edi
	je Block1

 Block30:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rComboCounter_
	cmp eax,edi
	je Block1

 Block31:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rWeaponCharge_
	cmp eax,edi
	je Block1

 Block32:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rDragonBlood_
	cmp eax,edi
	je Block1

 Block33:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rHolySymbol_
	cmp eax,edi
	je Block1

 Block34:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rMesoUp_
	cmp eax,edi
	je Block1

 Block35:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rShadowPartner_
	cmp eax,edi
	je Block1

 Block36:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rPickPocket_
	cmp eax,edi
	je Block1

 Block37:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rMesoGuard_
	cmp eax,edi
	je Block1

 Block38:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rThaw_
	cmp eax,edi
	je Block1

 Block39:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rWeakness_
	cmp eax,edi
	je Block1

 Block40:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rCurse_
	cmp eax,edi
	je Block1

 Block41:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rSlow_
	cmp eax,edi
	je Block1

 Block42:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rMorph_
	cmp eax,edi
	je Block1

 Block43:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rGhost_
	cmp eax,edi
	je Block1

 Block44:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rRegen_
	cmp eax,edi
	je Block1

 Block45:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rBasicStatUp_
	cmp eax,edi
	je Block1

 Block46:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rStance_
	cmp eax,edi
	je Block1

 Block47:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rSharpEyes_
	cmp eax,edi
	je Block1

 Block48:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rManaReflection_
	cmp eax,edi
	je Block1

 Block49:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rAttract_
	cmp eax,edi
	je Block1

 Block50:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rSpiritJavelin_
	cmp eax,edi
	je Block1

 Block51:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rInfinity_
	cmp eax,edi
	je Block1

 Block52:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rHolyshield_
	cmp eax,edi
	je Block1

 Block53:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rHamString_
	cmp eax,edi
	je Block1

 Block54:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rBlind_
	cmp eax,edi
	je Block1

 Block55:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rConcentration_
	cmp eax,edi
	je Block1

 Block56:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rBanMap_
	cmp eax,edi
	je Block1

 Block57:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rMaxLevelBuff_
	cmp eax,edi
	je Block1

 Block58:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rBarrier_
	cmp eax,edi
	je Block1

 Block59:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rDojangShield_
	cmp eax,edi
	je Block1

 Block60:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rReverseInput_
	cmp eax,edi
	je Block1

 Block61:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rMesoUpByItem_
	cmp eax,edi
	je Block1

 Block62:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rItemUpByItem_
	cmp eax,edi
	je Block1

 Block63:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rRespectPImmune_
	cmp eax,edi
	je Block1

 Block64:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rRespectMImmune_
	cmp eax,edi
	je Block1

 Block65:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rDefenseAtt_
	cmp eax,edi
	je Block1

 Block66:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rDefenseState_
	cmp eax,edi
	je Block1

 Block67:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rDojangBerserk_
	cmp eax,edi
	je Block1

 Block68:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rDojangInvincible_
	cmp eax,edi
	je Block1

 Block69:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rSpark_
	cmp eax,edi
	je Block1

 Block70:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rSoulMasterFinal_
	cmp eax,edi
	je Block1

 Block71:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rWindBreakerFinal_
	cmp eax,edi
	je Block1

 Block72:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rElementalReset_
	cmp eax,edi
	je Block1

 Block73:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rWindWalk_
	cmp eax,edi
	je Block1

 Block74:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rEventRate_
	cmp eax,edi
	je Block1

 Block75:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rComboAbilityBuff_
	cmp eax,edi
	je Block1

 Block76:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rComboDrain_
	cmp eax,edi
	je Block1

 Block77:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rComboBarrier_
	cmp eax,edi
	je Block1

 Block78:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rBodyPressure_
	cmp eax,edi
	je Block1

 Block79:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rSmartKnockback_
	cmp eax,edi
	je Block1

 Block80:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rRepeatEffect_
	cmp eax,edi
	je Block1

 Block81:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rExpBuffRate_
	cmp eax,edi
	je Block1

 Block82:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rIncEffectHPPotion_
	cmp eax,edi
	je Block1

 Block83:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rIncEffectMPPotion_
	cmp eax,edi
	je Block1

 Block84:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rStopPortion_
	cmp eax,edi
	je Block1

 Block85:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rStopMotion_
	cmp eax,edi
	je Block1

 Block86:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rFear_
	cmp eax,edi
	je Block1

 Block87:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rEvanSlow_
	cmp eax,edi
	je Block1

 Block88:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rMagicShield_
	cmp eax,edi
	je Block1

 Block89:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rMagicResistance_
	cmp eax,edi
	je Block1

 Block90:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rSoulStone_
	cmp eax,edi
	je Block1

 Block91:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rFlying_
	cmp eax,edi
	je Block1

 Block92:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rFrozen_
	cmp eax,edi
	je Block1

 Block93:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rAssistCharge_
	cmp eax,edi
	je Block1

 Block94:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rEnrage_
	cmp eax,edi
	je Block1

 Block95:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rSuddenDeath_
	cmp eax,edi
	je Block1

 Block96:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rNotDamaged_
	cmp eax,edi
	je Block1

 Block97:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rFinalCut_
	cmp eax,edi
	je Block1

 Block98:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rThornsEffect_
	cmp eax,edi
	je Block1

 Block99:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rSwallowAttackDamage_
	cmp eax,edi
	je Block1

 Block100:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rMorewildDamageUp_
	cmp eax,edi
	je Block1

 Block101:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rMine_
	cmp eax,edi
	je Block1

 Block102:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rCyclone_
	cmp eax,edi
	je Block1

 Block103:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rSwallowCritical_
	cmp eax,edi
	je Block1

 Block104:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rSwallowMaxMP_
	cmp eax,edi
	je Block1

 Block105:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rSwallowDefence_
	cmp eax,edi
	je Block1

 Block106:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rSwallowEvasion_
	cmp eax,edi
	je Block1

 Block107:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rConversion_
	cmp eax,edi
	je Block1

 Block108:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rRevive_
	cmp eax,edi
	je Block1

 Block109:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rSneak_
	cmp eax,edi
	je Block1

 Block110:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rMechanic_
	cmp eax,edi
	je Block1

 Block111:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rAura_
	cmp eax,edi
	je Block1

 Block112:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rDarkAura_
	cmp eax,edi
	je Block1

 Block113:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rBlueAura_
	cmp eax,edi
	je Block1

 Block114:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rYellowAura_
	cmp eax,edi
	je Block1

 Block115:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rSuperBody_
	cmp eax,edi
	je Block1

 Block116:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rMorewildMaxHP_
	cmp eax,edi
	je Block1

 Block117:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rDice_
	cmp eax,edi
	je Block1

 Block118:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rBlessingArmor_
	cmp eax,edi
	je Block1

 Block119:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rDamR_
	cmp eax,edi
	je Block1

 Block120:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rTeleportMasteryOn_
	cmp eax,edi
	je Block1

 Block121:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rCombatOrders_
	cmp eax,edi
	je Block1

 Block122:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rBeholder_
	cmp eax,edi
	je Block1

 Block123:
	mov ecx,esi
	call SecondaryStat::_ZtlSecureGet_rSummonBomb_
	xor ecx,ecx
	cmp eax,edi
	sete cl
	pop edi
	pop esi
	mov eax,ecx
	ret 4
}
}
// SecondaryStat::SecondaryStat
_SUB_EXCEPTION_HANDLER(32F190)
__SUB_CLASS_THIS0(0032F190, __thiscall, 7649, SecondaryStat, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_32F190
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x18],ebp
	push offset ZRef<TemporaryStatBase<long>>::~ZRef<TemporaryStatBase<long>>
	push offset ZRef<TemporaryStatBase<long>>::_ctor_default
	push 7
	lea eax,[ebp+0x13B8]
	push 8
	push eax
	call __eh_vector_ctor_iterator
	xor ebx,ebx
	xor edi,edi
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x14],edi

 Block1:
	cmp edi,6
	ja Block28

 Block2:
	cmp EDI, 0
je Block3
cmp EDI, 1
je Block19
cmp EDI, 2
je Block19
cmp EDI, 3
je Block15
cmp EDI, 4
je Block7
cmp EDI, 5
je Block11
cmp EDI, 6
je Block19


 Block3:
	push 0x30
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x28],1
	cmp eax,ebx
	je Block5

 Block4:
	mov ecx,eax
	call TwoStateTemporaryStat<long, greater_equal<long, 10000>, Expire<BaseOnLastUpdatedTime, DynamicTermSet>, Decrease<long, 200, 10000>, Nothing<long>>::_ctor_default
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	push eax
	lea ecx,[ebp+0x13B8]
	mov byte ptr [esp+0x2C],bl
	call ZRef<TemporaryStatBase<long>>::op_assign_ptr
	jmp Block28

 Block7:
	push 0x34
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x14],esi
	mov byte ptr [esp+0x28],2
	cmp esi,ebx
	je Block9

 Block8:
	mov ecx,esi
	call TwoStateTemporaryStat<long, not_equal<long, 0>, Expire<BaseOnCurrentTime, DynamicTermSet>, Nothing<long>, Nothing<long>>::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset TemporaryStat_PartyBooster::`vftable'
	int 3// TODO: 	mov dword ptr [esi+0x20],offset TemporaryStat_PartyBooster::`vftable'{for `ExpireBase'}
	int 3// TODO: 	mov dword ptr [esi+0x24],offset TemporaryStat_PartyBooster::`vftable'{for `BaseOnCurrentTime'}
	int 3// TODO: 	mov dword ptr [esi+0x2C],offset TemporaryStat_PartyBooster::`vftable'{for `DynamicTermSet'}
	jmp Block10

 Block9:
	xor esi,esi

 Block10:
	push esi
	lea ecx,[ebp+0x13D8]
	mov byte ptr [esp+0x2C],bl
	call ZRef<TemporaryStatBase<long>>::op_assign_ptr
	jmp Block28

 Block11:
	push 0x28
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x14],esi
	mov byte ptr [esp+0x28],3
	cmp esi,ebx
	je Block13

 Block12:
	mov ecx,esi
	call TemporaryStatBase<long>::_ctor_default
	int 3// TODO: 	mov dword ptr [esi+0x20],offset NoExpire::`vftable'
	int 3// TODO: 	mov dword ptr [esi],offset TemporaryStat_GuidedBullet::`vftable'{for `TemporaryStatBase<long>'}
	int 3// TODO: 	mov dword ptr [esi+0x20],offset TemporaryStat_GuidedBullet::`vftable'{for `NoExpire'}
	mov dword ptr [esi+0x24],ebx
	jmp Block14

 Block13:
	xor esi,esi

 Block14:
	push esi
	lea ecx,[ebp+0x13E0]
	mov byte ptr [esp+0x2C],bl
	call ZRef<TemporaryStatBase<long>>::op_assign_ptr
	jmp Block28

 Block15:
	push 0x24
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x14],esi
	mov byte ptr [esp+0x28],4
	cmp esi,ebx
	je Block17

 Block16:
	mov ecx,esi
	call TemporaryStatBase<long>::_ctor_default
	int 3// TODO: 	mov dword ptr [esi+0x20],offset NoExpire::`vftable'
	int 3// TODO: 	mov dword ptr [esi],offset TwoStateTemporaryStat<long, not_equal<long, 0>, NoExpire, Nothing<long>, Nothing<long>>::`vftable'{for `TemporaryStatBase<long>'}
	int 3// TODO: 	mov dword ptr [esi+0x20],offset TwoStateTemporaryStat<long, not_equal<long, 0>, NoExpire, Nothing<long>, Nothing<long>>::`vftable'{for `NoExpire'}
	jmp Block18

 Block17:
	xor esi,esi

 Block18:
	push esi
	lea ecx,[ebp+0x13D0]
	mov byte ptr [esp+0x2C],bl
	call ZRef<TemporaryStatBase<long>>::op_assign_ptr
	jmp Block28

 Block19:
	push 0x30
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x28],5
	cmp eax,ebx
	je Block21

 Block20:
	mov ecx,eax
	call TwoStateTemporaryStat<long, not_equal<long, 0>, Expire<BaseOnLastUpdatedTime, DynamicTermSet>, Nothing<long>, Nothing<long>>::_ctor_default
	mov edi,eax
	jmp Block22

 Block21:
	xor edi,edi

 Block22:
	mov byte ptr [esp+0x28],bl
	cmp edi,ebx
	je Block24

 Block23:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block24:
	mov ecx,dword ptr [esp+0x14]
	mov esi,dword ptr [ebp+ecx*8+0x13BC]
	lea eax,[ebp+ecx*8+0x13BC]
	mov dword ptr [eax],edi
	cmp esi,ebx
	je Block27

 Block25:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block27

 Block26:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block27:
	mov edi,dword ptr [esp+0x14]

 Block28:
	inc edi
	cmp edi,7
	mov dword ptr [esp+0x14],edi
	jl Block1

 Block29:
	mov ecx,ebp
	call SecondaryStat::Clear
	mov eax,ebp
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret
}
}
// SecondaryStat::_ZtlSecureGet_nSwallowMaxMP_
__SUB_CLASS0(000FFF00, __fastcall, 7637, SecondaryStat, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x114C]
	push eax
	add ecx,0x1144
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// ForcedStat::_ZtlSecureGet_nJump
__SUB_CLASS0(003219C0, __fastcall, 7198, ForcedStat, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x8C]
	push eax
	add ecx,0x84
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CalcDamage::GetMsateryConstByWT
// 72157C
static uint8_t _SUB_321540_LOOKUP_TABLE_0[13] = {
0, 0, 2, 2, 2, 2, 2, 2, 1, 1, 1, 2, 1, 
};
__SUB(00321540, __cdecl, 7815, double, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	add eax,0xFFFFFFDB
	cmp eax,0xC
	ja Block4

 Block1:
	movzx eax,byte ptr [eax+_SUB_321540_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block2
cmp EAX, 2
je Block4


 Block2:
	fld qword ptr [__real_3fc3333333333333]
	ret

 Block3:
	fld qword ptr [__real_3fd0000000000000]
	ret

 Block4:
	fld qword ptr [__real_3fc999999999999a]
	ret
}
}
// CalcDamage::CheckMDamageMiss
__SUB_CLASS_THIS(00326830, __thiscall, 7838, CalcDamage, int32_t, const MobStat &, const CharacterData &, const BasicStat &, const SecondaryStat &, uint32_t, long, long) {
__asm {

 Block0:
	sub esp,8
	push edi
	mov edi,dword ptr [esp+0x10]
	cmp dword ptr [edi+0x220],0
	jne Block7

 Block1:
	push ebx
	push ebp
	push esi
	mov esi,dword ptr [esp+0x24]
	mov eax,dword ptr [esi+0x50]
	push eax
	lea ecx,[esi+0x48]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x38]
	mov ebx,eax
	push edx
	lea eax,[esi+0x30]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x30]
	add esp,0x10
	push 0
	lea eax,[eax+ebx*2]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x34]
	push edx
	call SecondaryStat::GetEVA
	mov ebp,eax
	mov eax,dword ptr [edi+0x68]
	add eax,dword ptr [edi+0x64]
	test eax,eax
	jle Block6

 Block2:
	cmp eax,0x270F
	mov ebx,eax
	jl Block4

 Block3:
	mov ebx,0x270F

 Block4:
	mov eax,dword ptr [esi+0x14]
	push eax
	add esi,0xC
	push esi
	call _ZtlSecureFuseHelper<long>::call
	fldz
	mov ecx,dword ptr [esp+0x34]
	fstp qword ptr [esp]
	fld qword ptr [__real_4059000000000000]
	sub esp,8
	fstp qword ptr [esp]
	mov esi,eax
	push ecx
	call get_rand_1
	fstp qword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x48]
	mov eax,dword ptr [edi]
	push edx
	push eax
	push esi
	push ebx
	push ebp
	call _anon_calc_evar
	mov dword ptr [esp+0x44],eax
	fild dword ptr [esp+0x44]
	add esp,0x28
	pop esi
	pop ebp
	fcomp qword ptr [esp+8]
	pop ebx
	fnstsw ax
	test ah,1
	jne Block7

 Block5:
	mov eax,1
	pop edi
	add esp,8
	ret 0x1C

 Block6:
	xor ebx,ebx
	jmp Block4

 Block7:
	xor eax,eax
	pop edi
	add esp,8
	ret 0x1C
}
}
// _anon_calc_base_damage
__SUB(00321500, __cdecl, 131938, long, long, long, long, long, double) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov ecx,dword ptr [esp+4]
	lea edx,[eax+ecx*4]
	add edx,dword ptr [esp+0xC]
	mov dword ptr [esp+8],edx
	fild dword ptr [esp+8]
	fdiv qword ptr [__real_4059000000000000]
	fild dword ptr [esp+0x10]
	fmul qword ptr [esp+0x14]
	fmulp st(1),st(0)
	fadd qword ptr [__real_3fe0000000000000]
	jmp  __ftol2_sse
}
}
// SecondaryStat::Reset
__SUB_CLASS_THIS(003296B0, __thiscall, 7675, SecondaryStat, void, NakedParam<MY_UINT128>) {
__asm {

 Block0:
	sub esp,0x30
	push esi
	push edi
	push offset CTS_PAD
	lea eax,[esp+0xC]
	mov esi,ecx
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block2

 Block1:
	lea edx,[esi+0xC]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x18]
	xor ecx,ecx
	mov dword ptr [esi+0x14],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x20],eax

 Block2:
	push offset CTS_PDD
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block4

 Block3:
	lea edx,[esi+0x48]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x54]
	xor ecx,ecx
	mov dword ptr [esi+0x50],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x5C],eax

 Block4:
	push offset CTS_MAD
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block6

 Block5:
	lea edx,[esi+0x84]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x90]
	xor ecx,ecx
	mov dword ptr [esi+0x8C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x98],eax

 Block6:
	push offset CTS_MDD
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block8

 Block7:
	lea edx,[esi+0xC0]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xCC]
	xor ecx,ecx
	mov dword ptr [esi+0xC8],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xD4],eax

 Block8:
	push offset CTS_ACC
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block10

 Block9:
	lea edx,[esi+0xFC]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x108]
	xor ecx,ecx
	mov dword ptr [esi+0x104],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x110],eax

 Block10:
	push offset CTS_EVA
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block12

 Block11:
	lea edx,[esi+0x138]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x144]
	xor ecx,ecx
	mov dword ptr [esi+0x140],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x14C],eax

 Block12:
	push offset CTS_CRAFT
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block14

 Block13:
	lea edx,[esi+0x174]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x180]
	xor ecx,ecx
	mov dword ptr [esi+0x17C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x188],eax

 Block14:
	push offset CTS_SPEED
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block16

 Block15:
	lea edx,[esi+0x1A4]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1B0]
	xor ecx,ecx
	mov dword ptr [esi+0x1AC],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1B8],eax

 Block16:
	push offset CTS_JUMP
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block18

 Block17:
	lea edx,[esi+0x1D4]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1E0]
	xor ecx,ecx
	mov dword ptr [esi+0x1DC],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1E8],eax

 Block18:
	push offset CTS_EMHP
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block20

 Block19:
	lea edx,[esi+0xF88]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xF94]
	xor ecx,ecx
	mov dword ptr [esi+0xF90],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xF9C],eax

 Block20:
	push offset CTS_EMMP
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block22

 Block21:
	lea edx,[esi+0xFB8]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xFC4]
	xor ecx,ecx
	mov dword ptr [esi+0xFC0],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xFCC],eax

 Block22:
	push offset CTS_EPAD
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block24

 Block23:
	lea edx,[esi+0xFE8]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xFF4]
	xor ecx,ecx
	mov dword ptr [esi+0xFF0],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xFFC],eax

 Block24:
	push offset CTS_EPDD
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block26

 Block25:
	lea edx,[esi+0x1018]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1024]
	xor ecx,ecx
	mov dword ptr [esi+0x1020],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x102C],eax

 Block26:
	push offset CTS_EMDD
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block28

 Block27:
	lea edx,[esi+0x1048]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1054]
	xor ecx,ecx
	mov dword ptr [esi+0x1050],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x105C],eax

 Block28:
	push offset CTS_MAGICGUARD
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block30

 Block29:
	lea edx,[esi+0x1F8]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x204]
	xor ecx,ecx
	mov dword ptr [esi+0x200],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x20C],eax

 Block30:
	push offset CTS_DARK_SIGHT
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block32

 Block31:
	lea edx,[esi+0x21C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x228]
	xor ecx,ecx
	mov dword ptr [esi+0x224],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x230],eax

 Block32:
	push offset CTS_BOOSTER
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block34

 Block33:
	lea edx,[esi+0x258]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x264]
	xor ecx,ecx
	mov dword ptr [esi+0x260],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x26C],eax

 Block34:
	push offset CTS_POWERGUARD
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block36

 Block35:
	lea edx,[esi+0x27C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x288]
	xor ecx,ecx
	mov dword ptr [esi+0x284],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x290],eax

 Block36:
	push offset CTS_GUARD
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block38

 Block37:
	lea edx,[esi+0x106C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1078]
	xor ecx,ecx
	mov dword ptr [esi+0x1074],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1080],eax

 Block38:
	push offset CTS_SAFETY_DAMAGE
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block40

 Block39:
	lea edx,[esi+0x10B4]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x10C0]
	xor ecx,ecx
	mov dword ptr [esi+0x10BC],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x10C8],eax

 Block40:
	push offset CTS_SAFETY_ABSORB
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block42

 Block41:
	lea edx,[esi+0x10D8]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x10E4]
	xor ecx,ecx
	mov dword ptr [esi+0x10E0],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x10EC],eax

 Block42:
	push offset CTS_MAXHP
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block44

 Block43:
	lea edx,[esi+0x2C4]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x2D0]
	xor ecx,ecx
	mov dword ptr [esi+0x2CC],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2D8],eax

 Block44:
	push offset CTS_MAXMP
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block46

 Block45:
	lea edx,[esi+0x2E8]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x2F4]
	xor ecx,ecx
	mov dword ptr [esi+0x2F0],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2FC],eax

 Block46:
	push offset CTS_INVINCIBLE
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block48

 Block47:
	lea edx,[esi+0x30C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x318]
	xor ecx,ecx
	mov dword ptr [esi+0x314],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x320],eax

 Block48:
	push offset CTS_SOUL_ARROW
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block50

 Block49:
	lea edx,[esi+0x330]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x33C]
	xor ecx,ecx
	mov dword ptr [esi+0x338],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x344],eax

 Block50:
	push offset CTS_STUN
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block52

 Block51:
	lea edx,[esi+0x354]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x360]
	xor ecx,ecx
	mov dword ptr [esi+0x35C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x368],eax

 Block52:
	push offset CTS_POISON
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block54

 Block53:
	lea edx,[esi+0x378]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x384]
	xor ecx,ecx
	mov dword ptr [esi+0x380],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x38C],eax

 Block54:
	push offset CTS_SEAL
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block56

 Block55:
	lea edx,[esi+0x39C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x3A8]
	xor ecx,ecx
	mov dword ptr [esi+0x3A4],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3B0],eax

 Block56:
	push offset CTS_DARKNESS
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block58

 Block57:
	lea edx,[esi+0x3C0]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x3CC]
	xor ecx,ecx
	mov dword ptr [esi+0x3C8],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3D4],eax

 Block58:
	push offset CTS_COMBO_COUNTER
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block60

 Block59:
	lea edx,[esi+0x3E4]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x3F0]
	xor ecx,ecx
	mov dword ptr [esi+0x3EC],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3F8],eax

 Block60:
	push offset CTS_WEAPON_CHARGE
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block62

 Block61:
	lea edx,[esi+0x414]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x420]
	xor ecx,ecx
	mov dword ptr [esi+0x41C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x428],eax

 Block62:
	push offset CTS_DRAGONBLOOD
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block64

 Block63:
	lea edx,[esi+0x438]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x444]
	xor ecx,ecx
	mov dword ptr [esi+0x440],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x44C],eax

 Block64:
	push offset CTS_HOLYSYMBOL
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block66

 Block65:
	lea edx,[esi+0x45C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x468]
	xor ecx,ecx
	mov dword ptr [esi+0x464],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x470],eax

 Block66:
	push offset CTS_MESOUP
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block68

 Block67:
	lea edx,[esi+0x480]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x48C]
	xor ecx,ecx
	mov dword ptr [esi+0x488],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x494],eax

 Block68:
	push offset CTS_SHADOW_PARTNER
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block70

 Block69:
	lea edx,[esi+0x4A4]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x4B0]
	xor ecx,ecx
	mov dword ptr [esi+0x4AC],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x4B8],eax

 Block70:
	push offset CTS_PICKPOCKET
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block72

 Block71:
	lea edx,[esi+0x4C8]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x4D4]
	xor ecx,ecx
	mov dword ptr [esi+0x4D0],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x4DC],eax

 Block72:
	push offset CTS_MESOGUARD
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block74

 Block73:
	lea edx,[esi+0x4EC]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x4F8]
	xor ecx,ecx
	mov dword ptr [esi+0x4F4],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x500],eax

 Block74:
	push offset CTS_THAW
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block76

 Block75:
	lea edx,[esi+0x510]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x51C]
	xor ecx,ecx
	mov dword ptr [esi+0x518],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x524],eax

 Block76:
	push offset CTS_WEAKNESS
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block78

 Block77:
	lea edx,[esi+0x534]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x540]
	xor ecx,ecx
	mov dword ptr [esi+0x53C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x548],eax

 Block78:
	push offset CTS_CURSE
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block80

 Block79:
	lea edx,[esi+0x558]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x564]
	xor ecx,ecx
	mov dword ptr [esi+0x560],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x56C],eax

 Block80:
	push offset CTS_SLOW
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block82

 Block81:
	lea edx,[esi+0x57C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x588]
	xor ecx,ecx
	mov dword ptr [esi+0x584],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x590],eax

 Block82:
	push offset CTS_MORPH
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block84

 Block83:
	lea edx,[esi+0x5A0]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x5AC]
	xor ecx,ecx
	mov dword ptr [esi+0x5A8],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x5B4],eax

 Block84:
	push offset CTS_GHOST
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block86

 Block85:
	lea edx,[esi+0x5C4]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x5D0]
	xor ecx,ecx
	mov dword ptr [esi+0x5CC],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x5D8],eax

 Block86:
	push offset CTS_REGEN
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block88

 Block87:
	lea edx,[esi+0x5E8]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x5F4]
	xor ecx,ecx
	mov dword ptr [esi+0x5F0],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x5FC],eax

 Block88:
	push offset CTS_BASICSTATUP
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block90

 Block89:
	lea edx,[esi+0x60C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x618]
	xor ecx,ecx
	mov dword ptr [esi+0x614],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x620],eax

 Block90:
	push offset CTS_STANCE
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block92

 Block91:
	lea edx,[esi+0x630]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x63C]
	xor ecx,ecx
	mov dword ptr [esi+0x638],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x644],eax

 Block92:
	push offset CTS_SHARPEYES
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block94

 Block93:
	lea edx,[esi+0x654]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x660]
	xor ecx,ecx
	mov dword ptr [esi+0x65C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x668],eax

 Block94:
	push offset CTS_MANA_REFLECTION
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block96

 Block95:
	lea edx,[esi+0x684]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x690]
	xor ecx,ecx
	mov dword ptr [esi+0x68C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x698],eax

 Block96:
	push offset CTS_ATTRACT
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block98

 Block97:
	lea edx,[esi+0x6A8]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x6B4]
	xor ecx,ecx
	mov dword ptr [esi+0x6B0],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x6BC],eax

 Block98:
	push offset CTS_SPIRIT_JAVELIN
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block100

 Block99:
	lea edx,[esi+0x6CC]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x6D8]
	xor ecx,ecx
	mov dword ptr [esi+0x6D4],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x6E0],eax

 Block100:
	push offset CTS_INFINITY
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block102

 Block101:
	lea edx,[esi+0x6FC]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x708]
	xor ecx,ecx
	mov dword ptr [esi+0x704],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x710],eax

 Block102:
	push offset CTS_HOLYSHIELD
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block104

 Block103:
	lea edx,[esi+0x72C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x738]
	xor ecx,ecx
	mov dword ptr [esi+0x734],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x740],eax

 Block104:
	push offset CTS_HAMSTRING
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block106

 Block105:
	lea edx,[esi+0x750]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x75C]
	xor ecx,ecx
	mov dword ptr [esi+0x758],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x764],eax

 Block106:
	push offset CTS_BLIND
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block108

 Block107:
	lea edx,[esi+0x774]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x780]
	xor ecx,ecx
	mov dword ptr [esi+0x77C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x788],eax

 Block108:
	push offset CTS_CONCENTRATION
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block110

 Block109:
	lea edx,[esi+0x798]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x7A4]
	xor ecx,ecx
	mov dword ptr [esi+0x7A0],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x7AC],eax

 Block110:
	push offset CTS_BAN_MAP
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block112

 Block111:
	lea edx,[esi+0x7BC]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x7C8]
	xor ecx,ecx
	mov dword ptr [esi+0x7C4],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x7D0],eax

 Block112:
	push offset CTS_MAXLEVELBUFF
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block114

 Block113:
	lea edx,[esi+0x7EC]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x7F8]
	xor ecx,ecx
	mov dword ptr [esi+0x7F4],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x800],eax

 Block114:
	push offset CTS_BARRIER
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block116

 Block115:
	lea edx,[esi+0x8F4]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x90C]
	xor ecx,ecx
	mov dword ptr [esi+0x8FC],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x914],eax

 Block116:
	push offset CTS_DOJANG_SHIELD
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block118

 Block117:
	lea edx,[esi+0x918]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x930]
	xor ecx,ecx
	mov dword ptr [esi+0x920],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x938],eax

 Block118:
	push offset CTS_REVERSE_INPUT
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block120

 Block119:
	lea edx,[esi+0x93C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x948]
	xor ecx,ecx
	mov dword ptr [esi+0x944],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x950],eax

 Block120:
	push offset CTS_MESOUPBYITEM
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block122

 Block121:
	lea edx,[esi+0x9B4]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x9C0]
	xor ecx,ecx
	mov dword ptr [esi+0x9BC],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x9C8],eax

 Block122:
	push offset CTS_ITEMUPBYITEM
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block124

 Block123:
	lea edx,[esi+0x9E4]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x9F0]
	xor ecx,ecx
	mov dword ptr [esi+0x9EC],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x9F8],eax

 Block124:
	push offset CTS_RESPECT_P_IMMUNE
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block126

 Block125:
	lea edx,[esi+0xA20]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xA2C]
	xor ecx,ecx
	mov dword ptr [esi+0xA28],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xA34],eax

 Block126:
	push offset CTS_RESPECT_M_IMMUNE
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block128

 Block127:
	lea edx,[esi+0xA50]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xA5C]
	xor ecx,ecx
	mov dword ptr [esi+0xA58],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xA64],eax

 Block128:
	push offset CTS_DEFENSE_ATT
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block130

 Block129:
	lea edx,[esi+0xA7C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xA88]
	xor ecx,ecx
	mov dword ptr [esi+0xA84],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xA90],eax

 Block130:
	push offset CTS_DEFENSE_STATE
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block132

 Block131:
	lea edx,[esi+0xAA8]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xAB4]
	xor ecx,ecx
	mov dword ptr [esi+0xAB0],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xABC],eax

 Block132:
	push offset CTS_DOJANG_BERSERK
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block134

 Block133:
	lea edx,[esi+0x960]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x96C]
	xor ecx,ecx
	mov dword ptr [esi+0x968],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x974],eax

 Block134:
	push offset CTS_DOJANG_INVINCIBLE
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block136

 Block135:
	lea edx,[esi+0x984]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x990]
	xor ecx,ecx
	mov dword ptr [esi+0x98C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x998],eax

 Block136:
	push offset CTS_SPARK
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block138

 Block137:
	lea edx,[esi+0xB2C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xB38]
	xor ecx,ecx
	mov dword ptr [esi+0xB34],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xB40],eax

 Block138:
	push offset CTS_SOUL_MASTER_FINAL
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block140

 Block139:
	lea edx,[esi+0xB50]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xB5C]
	xor ecx,ecx
	mov dword ptr [esi+0xB58],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xB64],eax

 Block140:
	push offset CTS_WIND_BREAKER_FINAL
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block142

 Block141:
	lea edx,[esi+0xB74]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xB80]
	xor ecx,ecx
	mov dword ptr [esi+0xB7C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xB88],eax

 Block142:
	push offset CTS_ELEMENTAL_RESET
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block144

 Block143:
	lea edx,[esi+0xB98]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xBA4]
	xor ecx,ecx
	mov dword ptr [esi+0xBA0],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xBAC],eax

 Block144:
	push offset CTS_WIND_WALK
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block146

 Block145:
	lea edx,[esi+0xBBC]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xBC8]
	xor ecx,ecx
	mov dword ptr [esi+0xBC4],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xBD0],eax

 Block146:
	push offset CTS_EVENTRATE
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block148

 Block147:
	lea edx,[esi+0xBE0]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xBEC]
	xor ecx,ecx
	mov dword ptr [esi+0xBE8],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xBF4],eax

 Block148:
	push offset CTS_COMBO_ABILITY_BUFF
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block150

 Block149:
	lea edx,[esi+0xC04]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xC10]
	xor ecx,ecx
	mov dword ptr [esi+0xC0C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xC18],eax

 Block150:
	push offset CTS_COMBODRAIN
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block152

 Block151:
	lea edx,[esi+0xC28]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xC34]
	xor ecx,ecx
	mov dword ptr [esi+0xC30],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xC3C],eax

 Block152:
	push offset CTS_COMBOBARRIER
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block154

 Block153:
	lea edx,[esi+0xC4C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xC58]
	xor ecx,ecx
	mov dword ptr [esi+0xC54],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xC60],eax

 Block154:
	push offset CTS_BODYPRESSURE
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block156

 Block155:
	lea edx,[esi+0xC70]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xC7C]
	xor ecx,ecx
	mov dword ptr [esi+0xC78],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xC84],eax

 Block156:
	push offset CTS_SMART_KNOCKBACK
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block158

 Block157:
	lea edx,[esi+0xC94]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xCA0]
	xor ecx,ecx
	mov dword ptr [esi+0xC9C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xCA8],eax

 Block158:
	push offset CTS_REPEAT_EFFECT
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block160

 Block159:
	lea edx,[esi+0xCB8]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xCC4]
	xor ecx,ecx
	mov dword ptr [esi+0xCC0],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xCCC],eax

 Block160:
	push offset CTS_EXPBUFFRATE
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block162

 Block161:
	lea edx,[esi+0xCDC]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xCE8]
	xor ecx,ecx
	mov dword ptr [esi+0xCE4],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xCF0],eax

 Block162:
	push offset CTS_INC_EFFECT_HP_POTION
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block164

 Block163:
	lea edx,[esi+0xAD8]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xAE4]
	xor ecx,ecx
	mov dword ptr [esi+0xAE0],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xAEC],eax

 Block164:
	push offset CTS_INC_EFFECT_MP_POTION
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block166

 Block165:
	lea edx,[esi+0xB08]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xB14]
	xor ecx,ecx
	mov dword ptr [esi+0xB10],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xB1C],eax

 Block166:
	push offset CTS_STOP_PORTION
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block168

 Block167:
	lea edx,[esi+0xD00]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xD0C]
	xor ecx,ecx
	mov dword ptr [esi+0xD08],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xD14],eax

 Block168:
	push offset CTS_STOP_MOTION
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block170

 Block169:
	lea edx,[esi+0xD24]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xD30]
	xor ecx,ecx
	mov dword ptr [esi+0xD2C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xD38],eax

 Block170:
	push offset CTS_FEAR
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block172

 Block171:
	lea edx,[esi+0xD48]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xD54]
	xor ecx,ecx
	mov dword ptr [esi+0xD50],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xD5C],eax

 Block172:
	push offset CTS_EVANSLOW
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block174

 Block173:
	lea edx,[esi+0xD6C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xD78]
	xor ecx,ecx
	mov dword ptr [esi+0xD74],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xD80],eax

 Block174:
	push offset CTS_MAGIC_SHIELD
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block176

 Block175:
	lea edx,[esi+0xD90]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xD9C]
	xor ecx,ecx
	mov dword ptr [esi+0xD98],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xDA4],eax

 Block176:
	push offset CTS_MAGIC_RESISTANCE
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block178

 Block177:
	lea edx,[esi+0xDC0]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xDCC]
	xor ecx,ecx
	mov dword ptr [esi+0xDC8],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xDD4],eax

 Block178:
	push offset CTS_SOULSTONE
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block180

 Block179:
	lea edx,[esi+0xDE4]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xDF0]
	xor ecx,ecx
	mov dword ptr [esi+0xDEC],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xDF8],eax

 Block180:
	push offset CTS_FLYING
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block182

 Block181:
	lea edx,[esi+0xE08]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xE14]
	xor ecx,ecx
	mov dword ptr [esi+0xE10],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xE1C],eax

 Block182:
	push offset CTS_FROZEN
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block184

 Block183:
	lea edx,[esi+0xE2C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xE38]
	xor ecx,ecx
	mov dword ptr [esi+0xE34],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xE40],eax

 Block184:
	push offset CTS_ASSISTCHARGE
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block186

 Block185:
	lea edx,[esi+0xE50]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xE5C]
	xor ecx,ecx
	mov dword ptr [esi+0xE58],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xE64],eax

 Block186:
	push offset CTS_ENRAGE
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block188

 Block187:
	lea edx,[esi+0xE74]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xE80]
	xor ecx,ecx
	mov dword ptr [esi+0xE7C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xE88],eax

 Block188:
	push offset CTS_SUDDEN_DEATH
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block190

 Block189:
	lea edx,[esi+0xE98]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xEA4]
	xor ecx,ecx
	mov dword ptr [esi+0xEA0],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xEAC],eax

 Block190:
	push offset CTS_NOT_DAMAGED
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block192

 Block191:
	lea edx,[esi+0xEC8]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xED4]
	xor ecx,ecx
	mov dword ptr [esi+0xED0],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xEDC],eax

 Block192:
	push offset CTS_FINAL_CUT
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block194

 Block193:
	lea edx,[esi+0xEEC]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xEF8]
	xor ecx,ecx
	mov dword ptr [esi+0xEF4],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xF00],eax

 Block194:
	push offset CTS_THORNSEFFECT
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block196

 Block195:
	lea edx,[esi+0xF10]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xF1C]
	xor ecx,ecx
	mov dword ptr [esi+0xF18],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xF24],eax

 Block196:
	push offset CTS_SWALLOW_ATTACK_DAMAGE
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block198

 Block197:
	lea edx,[esi+0xF34]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xF40]
	xor ecx,ecx
	mov dword ptr [esi+0xF3C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xF48],eax

 Block198:
	push offset CTS_MOREWILD_DAMAGE_UP
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block200

 Block199:
	lea edx,[esi+0xF58]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xF64]
	xor ecx,ecx
	mov dword ptr [esi+0xF60],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xF6C],eax

 Block200:
	push offset CTS_MINE
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block202

 Block201:
	lea edx,[esi+0x1090]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x109C]
	xor ecx,ecx
	mov dword ptr [esi+0x1098],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x10A4],eax

 Block202:
	push offset CTS_CYCLONE
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block204

 Block203:
	lea edx,[esi+0x10FC]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1108]
	xor ecx,ecx
	mov dword ptr [esi+0x1104],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1110],eax

 Block204:
	push offset CTS_SWALLOW_CRITICAL
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block206

 Block205:
	lea edx,[esi+0x1120]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x112C]
	xor ecx,ecx
	mov dword ptr [esi+0x1128],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1134],eax

 Block206:
	push offset CTS_SWALLOW_MAX_MP
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block208

 Block207:
	lea edx,[esi+0x1144]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1150]
	xor ecx,ecx
	mov dword ptr [esi+0x114C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1158],eax

 Block208:
	push offset CTS_SWALLOW_DEFENCE
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block210

 Block209:
	lea edx,[esi+0x1168]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1174]
	xor ecx,ecx
	mov dword ptr [esi+0x1170],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x117C],eax

 Block210:
	push offset CTS_SWALLOW_EVASION
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block212

 Block211:
	lea edx,[esi+0x118C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1198]
	xor ecx,ecx
	mov dword ptr [esi+0x1194],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x11A0],eax

 Block212:
	push offset CTS_CONVERSION
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block214

 Block213:
	lea edx,[esi+0x11BC]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x11C8]
	xor ecx,ecx
	mov dword ptr [esi+0x11C4],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x11D0],eax

 Block214:
	push offset CTS_REVIVE
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block216

 Block215:
	lea edx,[esi+0x11E0]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x11EC]
	xor ecx,ecx
	mov dword ptr [esi+0x11E8],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x11F4],eax

 Block216:
	push offset CTS_SNEAK
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block218

 Block217:
	lea edx,[esi+0x1204]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1210]
	xor ecx,ecx
	mov dword ptr [esi+0x120C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1218],eax

 Block218:
	push offset CTS_MECHANIC
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block220

 Block219:
	lea edx,[esi+0x2A0]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x2AC]
	xor ecx,ecx
	mov dword ptr [esi+0x2A8],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2B4],eax

 Block220:
	push offset CTS_AURA
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block222

 Block221:
	lea edx,[esi+0x810]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x81C]
	xor ecx,ecx
	mov dword ptr [esi+0x818],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x824],eax

 Block222:
	push offset CTS_DARK_AURA
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block224

 Block223:
	lea edx,[esi+0x864]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x870]
	xor ecx,ecx
	mov dword ptr [esi+0x86C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x878],eax

 Block224:
	push offset CTS_BLUE_AURA
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block226

 Block225:
	lea edx,[esi+0x894]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x8A0]
	xor ecx,ecx
	mov dword ptr [esi+0x89C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x8A8],eax

 Block226:
	push offset CTS_YELLOW_AURA
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block228

 Block227:
	lea edx,[esi+0x8C4]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x8D0]
	xor ecx,ecx
	mov dword ptr [esi+0x8CC],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x8D8],eax

 Block228:
	push offset CTS_SUPERBODY
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block230

 Block229:
	lea edx,[esi+0x840]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x84C]
	xor ecx,ecx
	mov dword ptr [esi+0x848],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x854],eax

 Block230:
	push offset CTS_MOREWILD_MAX_HP
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block232

 Block231:
	lea edx,[esi+0x1228]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1234]
	xor ecx,ecx
	mov dword ptr [esi+0x1230],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x123C],eax

 Block232:
	push offset CTS_DICE
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block234

 Block233:
	lea edx,[esi+0x124C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1258]
	xor ecx,ecx
	mov dword ptr [esi+0x1254],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1260],eax

 Block234:
	push offset CTS_BLESSING_ARMOR
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block236

 Block235:
	lea edx,[esi+0x12C8]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x12D4]
	xor ecx,ecx
	mov dword ptr [esi+0x12D0],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x12DC],eax

 Block236:
	push offset CTS_DAMR
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block238

 Block237:
	lea edx,[esi+0x12F8]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1304]
	xor ecx,ecx
	mov dword ptr [esi+0x1300],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x130C],eax

 Block238:
	push offset CTS_TELEPORT_MASTERY_ON
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block240

 Block239:
	lea edx,[esi+0x131C]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1328]
	xor ecx,ecx
	mov dword ptr [esi+0x1324],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1330],eax

 Block240:
	push offset CTS_COMBATORDERS
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block242

 Block241:
	lea edx,[esi+0x1340]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x134C]
	xor ecx,ecx
	mov dword ptr [esi+0x1348],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1354],eax

 Block242:
	push offset CTS_BEHOLDER
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block244

 Block243:
	lea edx,[esi+0x1364]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1370]
	xor ecx,ecx
	mov dword ptr [esi+0x136C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1378],eax

 Block244:
	push offset CTS_SUMMON_BOMB
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block246

 Block245:
	lea edx,[esi+0x1388]
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x1394]
	xor ecx,ecx
	mov dword ptr [esi+0x1390],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x139C],eax

 Block246:
	xor edi,edi
	add esi,0x13BC

 Block247:
	push 0x80
	lea eax,[edi+0x7A]
	push eax
	push 1
	lea ecx,[esp+0x24]
	call MY_UINT128::_ctor_1
	mov ecx,eax
	call MY_UINT128::shiftLeft
	push eax
	lea ecx,[esp+0x10]
	call MY_UINT128::_ctor_2
	lea ecx,[esp+8]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	lea ecx,[esp+0x44]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block249

 Block248:
	mov ecx,dword ptr [esi]
	call TemporaryStatBase<long>::Reset

 Block249:
	inc edi
	add esi,8
	cmp edi,7
	jl Block247

 Block250:
	pop edi
	pop esi
	add esp,0x30
	ret 0x10
}
}
// SecondaryStat::operator[]
__SUB_CLASS_THIS(0023A620, __thiscall, 7655, SecondaryStat, const TemporaryStatBase<long> *, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov eax,dword ptr [ecx+eax*8+0x13BC]
	ret 4
}
}
// ForcedStat::_ZtlSecureGet_nPAD
__SUB_CLASS0(003218E0, __fastcall, 7198, ForcedStat, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x38]
	push eax
	add ecx,0x30
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// SecondaryStat::GetPDD
__SUB_CLASS_THIS(00325D20, __thiscall, 7664, SecondaryStat, long, long, const CharacterData &, long, long *, int32_t, long) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x44]
	push edi
	push eax
	lea ecx,[esi+0x3C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x50]
	mov ebx,eax
	push edx
	lea eax,[esi+0x48]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x1020]
	push ecx
	lea edx,[esi+0x1018]
	push edx
	mov ebp,eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0xC0C]
	mov edi,eax
	add edi,ebp
	lea eax,[esi+0xC04]
	push ecx
	add edi,ebx
	add edi,dword ptr [esp+0x30]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x20
	test eax,eax
	je Block6

 Block1:
	mov ebx,dword ptr [esp+0x18]
	mov edx,dword ptr [ebx+0x3D]
	push edx
	lea eax,[ebx+0x39]
	push eax
	mov dword ptr [esp+0x1C],0
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	movzx eax,ax
	lea ecx,[esp+0x14]
	push ecx
	xor ecx,ecx
	mov edx,0x7D0
	cmp ax,dx
	setne cl
	dec ecx
	and ecx,0xFFF0BDD1
	add ecx,0x1406F40
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push ebx
	call CSkillInfo::GetSkillLevel_0
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block6

 Block2:
	test eax,eax
	jle Block6

 Block3:
	push eax
	call SKILLENTRY::GetLevelData
	mov ebx,eax
	mov edx,dword ptr [ebx+0x168]
	push edx
	lea eax,[ebx+0x160]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0xC0C]
	mov ebp,eax
	push ecx
	lea eax,[esi+0xC04]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,0x10
	cmp eax,ebp
	jge Block5

 Block4:
	mov ebp,eax

 Block5:
	mov edx,dword ptr [ebx+0x180]
	push edx
	add ebx,0x178
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	imul eax,ebp
	add esp,8
	add edi,eax

 Block6:
	mov ecx,dword ptr [esi+0x89C]
	lea eax,[esi+0x894]
	push ecx
	push eax
	xor ebx,ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block10

 Block7:
	mov edx,dword ptr [esi+0x8A8]
	push edx
	lea ebp,[esi+0x8A0]
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x1E9F5B0
	jne Block10

 Block8:
	mov eax,dword ptr [esi+0x8A8]
	push eax
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	add esp,8
	push eax
	call CSkillInfo::GetSkill
	mov ebp,eax
	test ebp,ebp
	je Block10

 Block9:
	mov ecx,dword ptr [esi+0x89C]
	push ecx
	lea eax,[esi+0x894]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	mov ecx,ebp
	call SKILLENTRY::GetLevelData
	mov edx,dword ptr [eax+0x180]
	push edx
	add eax,0x178
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov ebx,eax

 Block10:
	cmp dword ptr [esp+0x24],0
	je Block12

 Block11:
	mov eax,dword ptr [esp+0x18]
	push eax
	call get_shield_mastery
	add esp,4
	add ebx,eax

 Block12:
	mov ecx,dword ptr [esi+0x74]
	push ecx
	lea ebp,[esi+0x6C]
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add eax,dword ptr [esp+0x24]
	add esp,8
	add eax,dword ptr [esp+0x28]
	add ebx,eax
	cmp dword ptr [esp+0x20],0
	je Block14

 Block13:
	mov edx,dword ptr [esi+0x74]
	push edx
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	add ecx,dword ptr [esp+0x24]
	mov eax,0x51EB851F
	imul ecx,edi
	imul ecx
	mov ecx,dword ptr [esp+0x28]
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add esp,8
	add eax,edx
	mov dword ptr [ecx],eax

 Block14:
	test ebx,ebx
	je Block16

 Block15:
	imul ebx,edi
	mov eax,0x51EB851F
	imul ebx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add edi,eax

 Block16:
	test edi,edi
	jle Block20

 Block17:
	cmp edi,0x7530
	mov eax,edi
	jl Block19

 Block18:
	mov eax,0x7530

 Block19:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0x18

 Block20:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	ret 0x18
}
}
// SecondaryStat::_ZtlSecureGet_nWindWalk_
__SUB_CLASS0(000FFEA0, __fastcall, 7637, SecondaryStat, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xBC4]
	push eax
	add ecx,0xBBC
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// SecondaryStat::GetIncEPAD
__SUB_CLASS_THIS(003259B0, __thiscall, 7671, SecondaryStat, long, const CharacterData &) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xFF0]
	push edi
	push eax
	lea ecx,[esi+0xFE8]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x13BC]
	mov edx,dword ptr [ecx]
	mov edi,eax
	mov eax,dword ptr [edx+4]
	add esp,8
	call eax
	test al,al
	je Block3

 Block1:
	mov esi,dword ptr [esp+0x10]
	mov ecx,dword ptr [esi+0x3D]
	push ecx
	lea edx,[esi+0x39]
	push edx
	mov dword ptr [esp+0x10],0
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	add esp,8
	lea ecx,[esp+8]
	push ecx
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	dec eax
	neg eax
	sbb eax,eax
	and eax,0xFF67908D
	add eax,0xE66864
	push eax
	push esi
	call CSkillInfo::GetSkillLevel_0
	mov ecx,dword ptr [esp+8]
	test ecx,ecx
	je Block3

 Block2:
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x1B0]
	push ecx
	add eax,0x1A8
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp edi,eax
	jl Block4

 Block3:
	mov eax,edi

 Block4:
	pop edi
	pop esi
	pop ecx
	ret 4
}
}
// MobStat::IsMovementAffectingStat
_SUB_EXCEPTION_HANDLER(321290)
__SUB(00321290, __cdecl, 7790, int32_t, NakedParam<MY_UINT128>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_321290
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov eax,1
	test byte ptr [_D__S4__2],al
	jne Block2

 Block1:
	or dword ptr [_D__S4__2],eax
	push 0x80
	push offset MobStat::MS_RiseByToss
	lea eax,[esp+0xC]
	push eax
	push offset MobStat::MS_Doom
	lea ecx,[esp+0x24]
	push ecx
	push offset MobStat::MS_Freeze
	lea edx,[esp+0x3C]
	push edx
	push offset MobStat::MS_Stun
	lea eax,[esp+0x54]
	push eax
	mov ecx,offset MobStat::MS_Speed
	mov dword ptr [esp+0x70],0
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	push eax
	mov ecx,offset _D_S_UFILTER__1
	call MY_UINT128::_ctor_2
	mov dword ptr [esp+0x4C],0xFFFFFFFF

 Block2:
	push offset _D_S_UFILTER__1
	lea ecx,[esp+0x38]
	push ecx
	lea ecx,[esp+0x5C]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_neg
	xor edx,edx
	test al,al
	sete dl
	mov eax,edx
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x4C
	ret
}
}
// BasicStat::CalcBaseMDD
__SUB_CLASS_THIS0(00321AD0, __thiscall, 7613, BasicStat, long) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x44]
	push eax
	lea ecx,[esi+0x3C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x50]
	mov dword ptr [esp+0x10],eax
	push edx
	lea eax,[esi+0x48]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x38]
	push ecx
	lea edx,[esi+0x30]
	push edx
	mov dword ptr [esp+0x24],eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x28],eax
	mov eax,dword ptr [esi+0x2C]
	push eax
	add esi,0x24
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x24],eax
	fild dword ptr [esp+0x24]
	add esp,0x20
	pop esi
	fmul qword ptr [__real_3fd999999999999a]
	fild dword ptr [esp+4]
	fmul qword ptr [__real_3ff3333333333333]
	fild dword ptr [esp+8]
	fld qword ptr [__real_3fe0000000000000]
	fmul st(1),st
	fxch st(2)
	faddp st(1),st(0)
	fild dword ptr [esp+0xC]
	fmulp st(2),st
	faddp st(1),st(0)
	faddp st(1),st(0)
	add esp,0x10
	jmp  __ftol2_sse
}
}
// SecondaryStat::ApplyItemOption
_SUB_EXCEPTION_HANDLER(32FC70)
__SUB_CLASS_THIS(0032FC70, __thiscall, 7684, SecondaryStat, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_32FC70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x28]
	push eax
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemOptionInfo>::ms_pInstance]
	call CItemOptionInfo::GetItemOption
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0
	test eax,eax
	je Block5

 Block1:
	mov edi,dword ptr [esp+0x2C]
	mov edx,dword ptr [esi+0xF8]
	imul edi,0xE0
	add edi,dword ptr [eax+0xC]
	push edx
	lea ebx,[esi+0xF0]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi+0x28]
	add esp,8
	add ecx,eax
	mov edx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xF8],eax
	mov eax,dword ptr [esi+0x134]
	push eax
	lea ebx,[esi+0x12C]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi+0x2C]
	add esp,8
	add ecx,eax
	mov edx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [esi+8]
	push ecx
	push esi
	mov dword ptr [esi+0x134],eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi+0x38]
	add esp,8
	add ecx,eax
	mov edx,esi
	call _ZtlSecureTearHelper<long>::call
	mov edx,dword ptr [esi+0x80]
	push edx
	lea ebx,[esi+0x78]
	push ebx
	mov dword ptr [esi+8],eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi+0x3C]
	add esp,8
	add ecx,eax
	mov edx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x80],eax
	mov eax,dword ptr [esi+0x44]
	push eax
	lea ebx,[esi+0x3C]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi+0x40]
	add esp,8
	add ecx,eax
	mov edx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [esi+0xBC]
	push ecx
	lea ebx,[esi+0xB4]
	push ebx
	mov dword ptr [esi+0x44],eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi+0x44]
	add esp,8
	add ecx,eax
	mov edx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov edx,dword ptr [esi+0x1A0]
	push edx
	lea ebx,[esi+0x198]
	push ebx
	mov dword ptr [esi+0xBC],eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi+0x30]
	add esp,8
	add ecx,eax
	mov edx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1A0],eax
	mov eax,dword ptr [esi+0x1D0]
	lea ebx,[esi+0x1C8]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi+0x34]
	add esp,8
	add ecx,eax
	mov edx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1D0],eax
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block5

 Block2:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block3:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block5

 Block4:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block5:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 8
}
}
// SecondaryStat::GetJaguarRidingMaxHPUp
__SUB_CLASS_THIS(00329650, __thiscall, 7671, SecondaryStat, long, const CharacterData &) {
__asm {

 Block0:
	push ecx
	call SecondaryStat::IsWildhunterJaguarVehicle
	test eax,eax
	je Block3

 Block1:
	mov ecx,dword ptr [esp+8]
	lea eax,[esp]
	push eax
	push 0x1F78E29
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	mov dword ptr [esp+0xC],0
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [esp]
	push eax
	call SKILLENTRY::GetLevelData
	mov edx,dword ptr [eax+0x180]
	push edx
	add eax,0x178
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	pop ecx
	ret 4

 Block3:
	xor eax,eax
	pop ecx
	ret 4
}
}
// _anon_adjust_base_depense
__SUB(00324C20, __cdecl, 131950, double, double, long, long, long, long) {
__asm {

 Block0:
	fild dword ptr [esp+0xC]
	push esi
	push edi
	fmul qword ptr [__real_3fd0000000000000]
	fld qword ptr [__real_3fe0000000000000]
	fadd st,st(1)
	call __ftol2_sse
	mov edi,eax
	mov dword ptr [esp+0x14],edi
	call __CIsqrt
	call __ftol2_sse
	mov esi,eax
	mov ecx,esi
	imul ecx,dword ptr [esp+0x20]
	mov eax,0x51EB851F
	imul ecx
	mov ecx,dword ptr [esp+0x1C]
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esi,eax
	mov eax,dword ptr [esp+0x18]
	cmp ecx,eax
	jge Block6

 Block1:
	sub eax,ecx
	cdq
	xor eax,edx
	sub eax,edx
	lea ecx,[eax*4]
	cmp ecx,edi
	jl Block3

 Block2:
	mov ecx,edi

 Block3:
	sub edi,ecx
	add eax,eax
	cmp eax,esi
	mov dword ptr [esp+0x14],edi
	jl Block5

 Block4:
	mov eax,esi

 Block5:
	sub esi,eax

 Block6:
	fild dword ptr [esp+0x14]
	mov ecx,0x64
	fld qword ptr [esp+0xC]
	sub ecx,esi
	fld st(0)
	mov dword ptr [esp+0x14],ecx
	fsubrp st(2),st
	pop edi
	fild dword ptr [esp+0x10]
	pop esi
	fmulp st(1),st(0)
	fdiv qword ptr [__real_4059000000000000]
	fcom
	fnstsw ax
	test ah,0x41
	jne Block8

 Block7:
	fstp st(0)
	jmp Block9

 Block8:
	fstp st(1)

 Block9:
	fld1
	fcom
	fnstsw ax
	test ah,5
	jp Block11

 Block10:
	fstp st(0)
	ret

 Block11:
	fstp st(1)
	ret
}
}
// SecondaryStat::ApplyItemOptionR
_SUB_EXCEPTION_HANDLER(32FE50)
__SUB_CLASS_THIS(0032FE50, __thiscall, 7687, SecondaryStat, void, long, long, SecondaryStatRateOption &) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_32FE50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x24]
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemOptionInfo>::ms_pInstance]
	call CItemOptionInfo::GetItemOption
	mov edx,dword ptr [esp+0x10]
	test edx,edx
	je Block4

 Block1:
	mov ecx,dword ptr [esp+0x28]
	mov eax,dword ptr [esp+0x2C]
	imul ecx,0xE0
	add ecx,dword ptr [edx+0xC]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	mov esi,dword ptr [ecx+0x60]
	add dword ptr [eax+0x10],esi
	mov esi,dword ptr [ecx+0x64]
	add dword ptr [eax+0x14],esi
	mov esi,dword ptr [ecx+0x68]
	add dword ptr [eax],esi
	mov esi,dword ptr [ecx+0x6C]
	add dword ptr [eax+8],esi
	mov esi,dword ptr [ecx+0x70]
	add dword ptr [eax+4],esi
	mov ecx,dword ptr [ecx+0x74]
	add dword ptr [eax+0xC],ecx
	lea esi,[edx-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 0xC
}
}
// MobStat::Reset
__SUB_CLASS_THIS(00320B40, __thiscall, 7784, MobStat, void, NakedParam<MY_UINT128>) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	push edi
	push offset MobStat::MS_PAD
	lea eax,[esp+0xC]
	mov esi,ecx
	push eax
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	xor edi,edi
	test al,al
	je Block2

 Block1:
	mov dword ptr [esi+0x30],edi
	mov dword ptr [esi+0x2C],edi
	mov dword ptr [esi+0x28],edi

 Block2:
	push offset MobStat::MS_PDR
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block4

 Block3:
	mov dword ptr [esi+0x40],edi
	mov dword ptr [esi+0x3C],edi
	mov dword ptr [esi+0x38],edi

 Block4:
	push offset MobStat::MS_MAD
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block6

 Block5:
	mov dword ptr [esi+0x50],edi
	mov dword ptr [esi+0x4C],edi
	mov dword ptr [esi+0x48],edi

 Block6:
	push offset MobStat::MS_MDR
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block8

 Block7:
	mov dword ptr [esi+0x60],edi
	mov dword ptr [esi+0x5C],edi
	mov dword ptr [esi+0x58],edi

 Block8:
	push offset MobStat::MS_ACC
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block10

 Block9:
	mov dword ptr [esi+0x70],edi
	mov dword ptr [esi+0x6C],edi
	mov dword ptr [esi+0x68],edi

 Block10:
	push offset MobStat::MS_EVA
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block12

 Block11:
	mov dword ptr [esi+0x80],edi
	mov dword ptr [esi+0x7C],edi
	mov dword ptr [esi+0x78],edi

 Block12:
	push offset MobStat::MS_Speed
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block14

 Block13:
	mov dword ptr [esi+0x90],edi
	mov dword ptr [esi+0x8C],edi
	mov dword ptr [esi+0x88],edi

 Block14:
	push offset MobStat::MS_Stun
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block16

 Block15:
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0x94],edi

 Block16:
	push offset MobStat::MS_Freeze
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block18

 Block17:
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xA0],edi

 Block18:
	push offset MobStat::MS_Poison
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block20

 Block19:
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esi+0xAC],edi

 Block20:
	push offset MobStat::MS_Seal
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block22

 Block21:
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esi+0xBC],edi

 Block22:
	push offset MobStat::MS_Darkness
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block24

 Block23:
	mov dword ptr [esi+0xD0],edi
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esi+0xC8],edi

 Block24:
	push offset MobStat::MS_PowerUp
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block26

 Block25:
	mov dword ptr [esi+0xDC],edi
	mov dword ptr [esi+0xD8],edi
	mov dword ptr [esi+0xD4],edi

 Block26:
	push offset MobStat::MS_MagicUp
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block28

 Block27:
	mov dword ptr [esi+0xE8],edi
	mov dword ptr [esi+0xE4],edi
	mov dword ptr [esi+0xE0],edi

 Block28:
	push offset MobStat::MS_PGuardUp
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block30

 Block29:
	mov dword ptr [esi+0xF4],edi
	mov dword ptr [esi+0xF0],edi
	mov dword ptr [esi+0xEC],edi

 Block30:
	push offset MobStat::MS_MGuardUp
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block32

 Block31:
	mov dword ptr [esi+0x100],edi
	mov dword ptr [esi+0xFC],edi
	mov dword ptr [esi+0xF8],edi

 Block32:
	push offset MobStat::MS_PImmune
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block34

 Block33:
	mov dword ptr [esi+0x128],edi
	mov dword ptr [esi+0x124],edi
	mov dword ptr [esi+0x120],edi

 Block34:
	push offset MobStat::MS_MImmune
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block36

 Block35:
	mov dword ptr [esi+0x134],edi
	mov dword ptr [esi+0x130],edi
	mov dword ptr [esi+0x12C],edi

 Block36:
	push offset MobStat::MS_Doom
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block38

 Block37:
	mov dword ptr [esi+0x10C],edi
	mov dword ptr [esi+0x108],edi
	mov dword ptr [esi+0x104],edi

 Block38:
	push offset MobStat::MS_Web
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block40

 Block39:
	mov dword ptr [esi+0x118],edi
	mov dword ptr [esi+0x114],edi
	mov dword ptr [esi+0x110],edi

 Block40:
	push offset MobStat::MS_HardSkin
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block42

 Block41:
	mov dword ptr [esi+0x14C],edi
	mov dword ptr [esi+0x148],edi
	mov dword ptr [esi+0x144],edi

 Block42:
	push offset MobStat::MS_Ambush
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block44

 Block43:
	mov dword ptr [esi+0x158],edi
	mov dword ptr [esi+0x154],edi
	mov dword ptr [esi+0x150],edi

 Block44:
	push offset MobStat::MS_Venom
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block46

 Block45:
	mov dword ptr [esi+0x168],edi
	mov dword ptr [esi+0x164],edi
	mov dword ptr [esi+0x160],edi

 Block46:
	push offset MobStat::MS_Blind
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block48

 Block47:
	mov dword ptr [esi+0x178],edi
	mov dword ptr [esi+0x174],edi
	mov dword ptr [esi+0x170],edi

 Block48:
	push offset MobStat::MS_SealSkill
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block50

 Block49:
	mov dword ptr [esi+0x184],edi
	mov dword ptr [esi+0x180],edi
	mov dword ptr [esi+0x17C],edi

 Block50:
	push offset MobStat::MS_Dazzle
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block52

 Block51:
	mov dword ptr [esi+0x190],edi
	mov dword ptr [esi+0x18C],edi
	mov dword ptr [esi+0x188],edi

 Block52:
	push offset MobStat::MS_PCounter
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block54

 Block53:
	mov dword ptr [esi+0x1A8],edi
	mov dword ptr [esi+0x1A4],edi
	mov dword ptr [esi+0x1A0],edi

 Block54:
	push offset MobStat::MS_MCounter
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block56

 Block55:
	mov dword ptr [esi+0x1B8],edi
	mov dword ptr [esi+0x1B4],edi
	mov dword ptr [esi+0x1B0],edi

 Block56:
	push offset MobStat::MS_RiseByToss
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block58

 Block57:
	mov dword ptr [esi+0x19C],edi
	mov dword ptr [esi+0x198],edi
	mov dword ptr [esi+0x194],edi

 Block58:
	push offset MobStat::MS_BodyPressure
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block60

 Block59:
	mov dword ptr [esi+0x1CC],edi
	mov dword ptr [esi+0x1C8],edi
	mov dword ptr [esi+0x1C4],edi

 Block60:
	push offset MobStat::MS_Weakness
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block62

 Block61:
	mov dword ptr [esi+0x1D8],edi
	mov dword ptr [esi+0x1D4],edi
	mov dword ptr [esi+0x1D0],edi

 Block62:
	push offset MobStat::MS_TimeBomb
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block64

 Block63:
	mov dword ptr [esi+0x1E4],edi
	mov dword ptr [esi+0x1E0],edi
	mov dword ptr [esi+0x1DC],edi

 Block64:
	push offset MobStat::MS_Showdown
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block66

 Block65:
	mov dword ptr [esi+0x140],edi
	mov dword ptr [esi+0x13C],edi
	mov dword ptr [esi+0x138],edi

 Block66:
	push offset MobStat::MS_MagicCrash
	lea eax,[esp+0xC]
	push eax
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block68

 Block67:
	mov dword ptr [esi+0x1F4],edi
	mov dword ptr [esi+0x1F0],edi
	mov dword ptr [esi+0x1EC],edi

 Block68:
	push offset MobStat::MS_DamagedElemAttr
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block70

 Block69:
	mov dword ptr [esi+0x200],edi
	mov dword ptr [esi+0x1FC],edi
	mov dword ptr [esi+0x1F8],edi

 Block70:
	push offset MobStat::MS_HealByDamage
	lea edx,[esp+0xC]
	push edx
	lea ecx,[esp+0x24]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block72

 Block71:
	mov dword ptr [esi+0x20C],edi
	mov dword ptr [esi+0x208],edi
	mov dword ptr [esi+0x204],edi

 Block72:
	mov dword ptr [esi+0x1C0],edi
	mov dword ptr [esi+0x1BC],edi
	mov dword ptr [esi+0x1AC],edi
	pop edi
	pop esi
	add esp,0x10
	ret 0x10
}
}
// CalcDamage::SetSeed
__SUB_CLASS_THIS(00326470, __thiscall, 7814, CalcDamage, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	push esi
	mov esi,ecx
	push edi
	lea eax,[esi+0x18]
	push eax
	lea ecx,[esp+0x14]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	mov edi,dword ptr [esp+0x18]
	mov ebx,dword ptr [esp+0x1C]
	mov ebp,dword ptr [esp+0x20]
	mov eax,dword ptr [esp+0x10]
	or edi,0x100000
	or ebx,0x1000
	or ebp,0x10
	mov dword ptr [esi],edi
	mov dword ptr [esi+0xC],edi
	mov dword ptr [esi+4],ebx
	mov dword ptr [esi+0x10],ebx
	mov dword ptr [esi+8],ebp
	mov dword ptr [esi+0x14],ebp
	add dword ptr [eax+4],0xFFFFFFFF
	jne Block2

 Block1:
	mov dword ptr [eax],0

 Block2:
	lea ecx,[esi+0x38]
	push ecx
	lea ecx,[esp+0x1C]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esi+0x20],edi
	mov dword ptr [esi+0x2C],edi
	mov dword ptr [esi+0x24],ebx
	mov dword ptr [esi+0x30],ebx
	mov dword ptr [esi+0x28],ebp
	mov dword ptr [esi+0x34],ebp
	add dword ptr [eax+4],0xFFFFFFFF
	jne Block4

 Block3:
	mov dword ptr [eax],0

 Block4:
	lea edx,[esi+0x58]
	push edx
	lea ecx,[esp+0x1C]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esi+0x40],edi
	mov dword ptr [esi+0x4C],edi
	mov dword ptr [esi+0x44],ebx
	mov dword ptr [esi+0x50],ebx
	mov dword ptr [esi+0x48],ebp
	mov dword ptr [esi+0x54],ebp
	add dword ptr [eax+4],0xFFFFFFFF
	jne Block6

 Block5:
	mov dword ptr [eax],0

 Block6:
	lea eax,[esi+0x78]
	push eax
	lea ecx,[esp+0x1C]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esi+0x60],edi
	mov dword ptr [esi+0x6C],edi
	mov dword ptr [esi+0x64],ebx
	mov dword ptr [esi+0x70],ebx
	mov dword ptr [esi+0x68],ebp
	mov dword ptr [esi+0x74],ebp
	add dword ptr [eax+4],0xFFFFFFFF
	jne Block8

 Block7:
	mov dword ptr [eax],0

 Block8:
	lea ecx,[esi+0x98]
	push ecx
	lea ecx,[esp+0x1C]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esi+0x80],edi
	mov dword ptr [esi+0x8C],edi
	mov dword ptr [esi+0x84],ebx
	mov dword ptr [esi+0x90],ebx
	mov dword ptr [esi+0x88],ebp
	mov dword ptr [esi+0x94],ebp
	add dword ptr [eax+4],0xFFFFFFFF
	jne Block10

 Block9:
	mov dword ptr [eax],0

 Block10:
	lea edx,[esi+0xB8]
	push edx
	lea ecx,[esp+0x1C]
	call ZSynchronizedHelper<ZFatalSection>::_ctor_0
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xAC],edi
	pop edi
	mov dword ptr [esi+0xA4],ebx
	mov dword ptr [esi+0xB0],ebx
	mov dword ptr [esi+0xA8],ebp
	mov dword ptr [esi+0xB4],ebp
	add dword ptr [eax+4],0xFFFFFFFF
	pop esi
	pop ebp
	pop ebx
	jne Block12

 Block11:
	mov dword ptr [eax],0

 Block12:
	pop ecx
	ret 0xC
}
}
// ForcedStat::_ZtlSecureGet_nEVA
__SUB_CLASS0(00321980, __fastcall, 7198, ForcedStat, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x74]
	push eax
	add ecx,0x6C
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// ForcedStat::_ZtlSecureGet_nPDD
__SUB_CLASS0(00321900, __fastcall, 7198, ForcedStat, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x44]
	push eax
	add ecx,0x3C
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CalcDamage::PDamage
_SUB_EXCEPTION_HANDLER(32DDD0)
__SUB_CLASS_THIS(0032DDD0, __thiscall, 7825, CalcDamage, long, const unsigned long, const MobStat &, const CharacterData &, const BasicStat &, const SecondaryStat &, const SKILLENTRY *, long, NakedParam<ZRef<PassiveSkillData>>, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_32DDD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	xor ebp,ebp
	mov dword ptr [esp+0x48],ebp
	xor esi,esi
	lea ebx,[ecx+0x60]

 Block1:
	mov ecx,ebx
	call CRand32::Random
	mov dword ptr [esp+esi*4+0x24],eax
	inc esi
	cmp esi,7
	jl Block1

 Block2:
	mov eax,dword ptr [esp+0x70]
	xor edi,edi
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebp
	mov dword ptr [esp+0x18],ebp
	cmp eax,ebp
	je Block11

 Block3:
	mov ecx,dword ptr [eax+0x58]
	mov esi,dword ptr [eax+0x34]
	mov edi,dword ptr [eax+0x3C]
	mov ebx,dword ptr [eax+0x10]
	mov dword ptr [esp+0x18],ecx
	xor ecx,ecx
	mov dword ptr [esp+0x14],esi
	mov dword ptr [esp+0x20],ecx
	mov byte ptr [esp+0x48],1
	cmp dword ptr [eax+0x80],ebp
	je Block7

 Block4:
	mov edx,dword ptr [esp+0x64]
	cmp edx,ebp
	je Block7

 Block5:
	lea ecx,[esp+0x1C]
	push ecx
	push edx
	lea ecx,[eax+0x74]
	call ZMap<long, ZRef<AdditionPsd>, long>::GetAt
	mov ecx,dword ptr [esp+0x20]
	test eax,eax
	je Block7

 Block6:
	add esi,dword ptr [ecx+0x10]
	mov dword ptr [esp+0x14],esi

 Block7:
	mov byte ptr [esp+0x48],0
	cmp ecx,ebp
	je Block11

 Block8:
	lea esi,[ecx-0x10]
	lea ebp,[esi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block9:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block11

 Block10:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block11:
	mov ebp,dword ptr [esp+0x5C]
	mov ecx,dword ptr [ebp+0x38]
	push ecx
	lea edx,[ebp+0x30]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x24],eax
	mov eax,dword ptr [ebp+0x50]
	push eax
	lea ecx,[ebp+0x48]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x6C],eax
	fild dword ptr [esp+0x6C]
	add esp,0x10
	fild dword ptr [esp+0x1C]
	fmul qword ptr [__real_3ff3333333333333]
	faddp st(1),st(0)
	call __ftol2_sse
	mov esi,dword ptr [esp+0x60]
	push 0
	push eax
	push ebx
	mov ebx,dword ptr [esp+0x64]
	push ebx
	mov ecx,esi
	call SecondaryStat::GetACC
	mov edx,dword ptr [esi+0x12D0]
	mov dword ptr [esp+0x58],eax
	push edx
	lea eax,[esi+0x12C8]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block13

 Block12:
	mov ecx,dword ptr [esi+0x12F4]
	push ecx
	lea edx,[esi+0x12EC]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	jmp Block14

 Block13:
	xor eax,eax

 Block14:
	mov ecx,dword ptr [esp+0x7C]
	push 0
	push eax
	mov eax,dword ptr [esp+0x20]
	push edi
	push eax
	push ecx
	push ebx
	mov ecx,esi
	call SecondaryStat::GetPAD
	mov edi,dword ptr [esp+0x54]
	mov dword ptr [esp+0x60],eax
	mov eax,dword ptr [edi+0x78]
	add eax,dword ptr [edi+0x74]
	test eax,eax
	jg Block16

 Block15:
	xor eax,eax
	mov dword ptr [esp+0x5C],eax
	jmp Block19

 Block16:
	cmp eax,0x270F
	jge Block18

 Block17:
	mov dword ptr [esp+0x5C],eax
	jmp Block19

 Block18:
	mov dword ptr [esp+0x5C],0x270F

 Block19:
	mov edx,dword ptr [ebp+0x14]
	push edx
	lea eax,[ebp+0xC]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [esp+0x64]
	push 0
	push ecx
	push eax
	mov eax,dword ptr [esp+0x6C]
	push edx
	push eax
	call _anon_calc_accr
	fldz
	mov ecx,dword ptr [esp+0x40]
	fstp qword ptr [esp+0x14]
	fld qword ptr [__real_4059000000000000]
	add esp,0xC
	fstp qword ptr [esp]
	mov dword ptr [esp+0x6C],eax
	push ecx
	call get_rand_1
	fild dword ptr [esp+0x70]
	add esp,0x14
	fcompp
	fnstsw ax
	test ah,5
	jp Block25

 Block20:
	mov eax,dword ptr [esp+0x70]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block24

 Block21:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block24

 Block22:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block24

 Block23:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block24:
	xor eax,eax
	jmp Block47

 Block25:
	cmp dword ptr [edi+0x218],0
	jne Block20

 Block26:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov ecx,0x64
	div ecx
	cmp dword ptr [edi+0x120],0
	mov dword ptr [esp+0x5C],edx
	je Block33

 Block27:
	mov edx,dword ptr [esi+0xA28]
	push edx
	lea eax,[esi+0xA20]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp dword ptr [esp+0x5C],eax
	jle Block33

 Block28:
	mov eax,dword ptr [esp+0x70]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block32

 Block29:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block32

 Block30:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block32

 Block31:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block32:
	mov eax,1
	jmp Block47

 Block33:
	mov ecx,dword ptr [esp+0x78]
	push ecx
	call get_weapon_type
	mov edx,dword ptr [esp+0x64]
	push 0
	push edx
	push ebp
	push eax
	mov dword ptr [esp+0x70],eax
	call CalcDamage::CalcDamageByWT
	fimul dword ptr [esp+0x88]
	mov ebp,dword ptr [esp+0x78]
	add esp,0x14
	xor eax,eax
	fdiv qword ptr [__real_4059000000000000]
	fstp qword ptr [esp+0x1C]
	test ebp,ebp
	je Block40

 Block34:
	mov ecx,dword ptr [ebp]
	cmp ecx,0x4F8379
	je Block39

 Block35:
	cmp ecx,0x2F9F6E
	je Block39

 Block36:
	cmp ecx,0x31260D
	je Block39

 Block37:
	cmp ecx,0x4FA6A2
	je Block39

 Block38:
	cmp ecx,0x4F837A
	jne Block40

 Block39:
	mov eax,1

 Block40:
	push 0
	push 0
	push 0
	push eax
	mov eax,dword ptr [esp+0x88]
	push eax
	push esi
	push ebx
	call get_weapon_mastery
	mov ecx,dword ptr [esp+0x78]
	add esp,0x1C
	push eax
	push ecx
	call CalcDamage::GetMsateryConstByWT
	mov edx,dword ptr [esp+0x34]
	push ecx
	fstp qword ptr [esp]
	push edx
	fld qword ptr [esp+0x2C]
	sub esp,8
	fstp qword ptr [esp]
	call _anon_adjust_ramdom_damage
	fldz
	add esp,8
	fstp qword ptr [esp+8]
	mov eax,dword ptr [esp+0x78]
	fld1
	lea ecx,[edi+4]
	fstp qword ptr [esp]
	fild dword ptr [esp+0x24]
	push eax
	push ecx
	push ebp
	sub esp,8
	fmul st,st(1)
	fdiv qword ptr [__real_4059000000000000]
	faddp st(1),st(0)
	fstp qword ptr [esp]
	call get_damage_adjusted_by_elemAttr_1
	mov eax,dword ptr [esp+0x74]
	fstp qword ptr [esp+0x40]
	lea edx,[esp+0x40]
	push edx
	push eax
	push esi
	push ebx
	call _anon_ApplyGuidedBulletDamage
	push ebx
	call get_mechanic_mastery
	mov edi,dword ptr [edi+0x204]
	add eax,0x64
	mov dword ptr [esp+0x9C],eax
	fild dword ptr [esp+0x9C]
	add esp,0x38
	mov dword ptr [esp+0x64],edi
	fmul qword ptr [esp+0x1C]
	fdiv qword ptr [__real_4059000000000000]
	test edi,edi
	je Block42

 Block41:
	fimul dword ptr [esp+0x64]
	fdiv qword ptr [__real_c059000000000000]

 Block42:
	call __ftol2_sse
	mov esi,dword ptr [esp+0x70]
	mov ebx,eax
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test esi,esi
	je Block46

 Block43:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block46

 Block44:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block46

 Block45:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block46:
	mov eax,ebx

 Block47:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 0x30
}
}
// CalcDamage::MDamageSummoned
_SUB_EXCEPTION_HANDLER(32ED70)
__SUB_CLASS_THIS(0032ED70, __thiscall, 7831, CalcDamage, long, const MobStat &, const CharacterData &, const BasicStat &, const SecondaryStat &, uint32_t, NakedParam<ZRef<PassiveSkillData>>, long *, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_32ED70
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x44]
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	push eax
	push ecx
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],edx
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x2C],0
	mov dword ptr [esp+0x54],esp
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ebp

 Block2:
	mov eax,dword ptr [esp+0x44]
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	push eax
	mov eax,dword ptr [esp+0x3C]
	push ecx
	mov ecx,dword ptr [esp+0x3C]
	push edx
	push eax
	push ecx
	mov ecx,esi
	call CalcDamage::MDamage_3
	mov ebx,eax
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block6

 Block3:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	push edi
	call ebp
	test esi,esi
	je Block6

 Block5:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block6:
	mov eax,ebx
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 0x24
}
}
// ForcedStat::_ZtlSecureGet_nSpeed
__SUB_CLASS0(003219A0, __fastcall, 7198, ForcedStat, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x80]
	push eax
	add ecx,0x78
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// GetIdealStatUp
// 73E224
static uint8_t _SUB_33DDB0_LOOKUP_TABLE_0[23] = {
0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 2, 2, 2, 
2, 2, 2, 2, 1, 1, 1, 
};
__SUB(0033DDB0, __cdecl, 131968, int32_t, const BasicStat &, int32_t, ZArray<StatPair> &) {
__asm {

 Block0:
	sub esp,8
	push ebx
	mov ebx,dword ptr [esp+0x18]
	push ebp
	push esi
	push edi
	mov ecx,ebx
	call ZArray<StatPair>::RemoveAll
	mov esi,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi+0x20]
	lea eax,[esi+0x18]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	cdq
	mov ecx,0x3E8
	idiv ecx
	lea eax,[esi+0xC]
	mov ebp,edx
	mov edx,dword ptr [esi+0x14]
	push edx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov edi,eax
	mov eax,0x10624DD3
	imul ebp
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add edx,ecx
	imul edx,0x3E8
	mov ecx,ebp
	sub ecx,edx
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,0x10
	cmp eax,5
	ja Block43

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block5
cmp EAX, 2
je Block7
cmp EAX, 3
je Block8
cmp EAX, 4
je Block15
cmp EAX, 5
je Block18


 Block2:
	test ebp,ebp
	je Block4

 Block3:
	mov eax,dword ptr [esi+0x20]
	push eax
	lea eax,[esi+0x18]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x7D1
	jne Block43

 Block4:
	mov ecx,dword ptr [esi+0x38]
	push ecx
	lea edx,[esi+0x30]
	push edx
	lea ebp,[edi*4+0xC]
	call _ZtlSecureFuseHelper<long>::call
	sub edi,eax
	add esp,8
	xor eax,eax
	test edi,edi
	setle al
	push 0xFFFFFFFF
	mov ecx,ebx
	dec eax
	and edi,eax
	call ZArray<StatPair>::InsertBefore
	mov ecx,0x80
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],edi
	mov ecx,dword ptr [esi+0x2C]
	push ecx
	add esi,0x24
	push esi
	call _ZtlSecureFuseHelper<long>::call
	sub ebp,eax
	xor edx,edx
	add esp,8
	test ebp,ebp
	setle dl
	dec edx
	and edx,ebp
	mov esi,edx
	jmp Block41

 Block5:
	cmp edi,0x1E
	lea ebp,[edi+edi]
	jle Block40

 Block6:
	lea ebp,[edi+0x1E]
	jmp Block40

 Block7:
	mov edx,dword ptr [esi+0x50]
	lea ebp,[edi+3]
	lea edi,[edi+edi*4]
	push edx
	lea eax,[esi+0x48]
	sub edi,ebp
	push eax
	add edi,0xC
	call _ZtlSecureFuseHelper<long>::call
	sub ebp,eax
	xor ecx,ecx
	add esp,8
	test ebp,ebp
	setle cl
	push 0xFFFFFFFF
	dec ecx
	and ebp,ecx
	mov ecx,ebx
	call ZArray<StatPair>::InsertBefore
	mov ecx,0x200
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],ebp
	mov edx,dword ptr [esi+0x44]
	push edx
	add esi,0x3C
	push esi
	call _ZtlSecureFuseHelper<long>::call
	sub edi,eax
	xor eax,eax
	add esp,8
	test edi,edi
	setle al
	dec eax
	and eax,edi
	mov esi,eax
	mov edi,0x100
	jmp Block42

 Block8:
	lea eax,[ebp-0x12C]
	cmp eax,0x16
	ja Block43

 Block9:
	movzx ecx,byte ptr [eax+_SUB_33DDB0_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block10
cmp ECX, 1
je Block11
cmp ECX, 2
je Block43


 Block10:
	lea ebp,[edi+5]
	jmp Block12

 Block11:
	mov ebp,edi

 Block12:
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nJob
	push eax
	call is_wildhunter_job
	add esp,4
	test eax,eax
	je Block14

 Block13:
	mov ebp,edi

 Block14:
	lea edi,[edi+edi*4]
	sub edi,ebp
	mov ecx,esi
	add edi,0xC
	call BasicStat::_ZtlSecureGet_nSTR
	sub ebp,eax
	xor eax,eax
	test ebp,ebp
	setle al
	push 0xFFFFFFFF
	lea edx,[esp+0x14]
	push edx
	mov ecx,ebx
	mov dword ptr [esp+0x18],0x40
	dec eax
	and eax,ebp
	mov dword ptr [esp+0x1C],eax
	call ZArray<StatPair>::Insert
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nDEX
	sub edi,eax
	xor eax,eax
	test edi,edi
	setle al
	push 0xFFFFFFFF
	mov ecx,ebx
	mov dword ptr [esp+0x14],0x80
	dec eax
	and eax,edi
	mov dword ptr [esp+0x18],eax
	lea eax,[esp+0x14]
	push eax
	call ZArray<StatPair>::Insert
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,8
	ret

 Block15:
	cmp edi,0x28
	lea ebp,[edi+edi]
	jle Block17

 Block16:
	lea ebp,[edi+0x28]

 Block17:
	mov ecx,dword ptr [esi+0x38]
	lea edi,[edi+edi*4]
	push ecx
	lea edx,[esi+0x30]
	sub edi,ebp
	push edx
	add edi,0xC
	call _ZtlSecureFuseHelper<long>::call
	sub ebp,eax
	add esp,8
	xor eax,eax
	test ebp,ebp
	setle al
	push 0xFFFFFFFF
	mov ecx,ebx
	dec eax
	and ebp,eax
	call ZArray<StatPair>::InsertBefore
	mov ecx,0x80
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],ebp
	mov ecx,dword ptr [esi+0x50]
	push ecx
	add esi,0x48
	push esi
	call _ZtlSecureFuseHelper<long>::call
	sub edi,eax
	xor edx,edx
	add esp,8
	test edi,edi
	setle dl
	dec edx
	and edx,edi
	mov esi,edx
	mov edi,0x200
	jmp Block42

 Block18:
	mov eax,dword ptr [esi+0x20]
	push eax
	lea eax,[esi+0x18]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	xor eax,eax
	add ecx,edx
	add esp,8
	cmp ecx,0x23
	sete al
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	jne Block21

 Block19:
	cmp ebp,0x1F4
	jne Block21

 Block20:
	mov dword ptr [esp+0x10],1
	jmp Block22

 Block21:
	mov dword ptr [esp+0x10],0
	test eax,eax
	jne Block26

 Block22:
	mov eax,0x66666667
	imul ebp
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x33
	je Block24

 Block23:
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nJob
	cmp eax,0x5DC
	jne Block25

 Block24:
	mov ecx,1
	jmp Block27

 Block25:
	mov eax,dword ptr [esp+0x1C]

 Block26:
	xor ecx,ecx
	test eax,eax
	jne Block29

 Block27:
	mov eax,0x66666667
	imul ebp
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x34
	mov eax,dword ptr [esp+0x1C]
	jne Block29

 Block28:
	mov edx,1
	jmp Block30

 Block29:
	xor edx,edx

 Block30:
	test ecx,ecx
	jne Block38

 Block31:
	mov ecx,dword ptr [esp+0x10]
	mov ebp,dword ptr [esp+0x20]
	test ecx,ecx
	je Block33

 Block32:
	test ebp,ebp
	jne Block38

 Block33:
	test edx,edx
	jne Block37

 Block34:
	test ecx,ecx
	je Block36

 Block35:
	test ebp,ebp
	je Block37

 Block36:
	test eax,eax
	je Block43

 Block37:
	mov ecx,esi
	lea ebp,[edi*4+0xC]
	call BasicStat::_ZtlSecureGet_nSTR
	sub edi,eax
	xor eax,eax
	test edi,edi
	setle al
	push 0xFFFFFFFF
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,ebx
	mov dword ptr [esp+0x18],0x40
	dec eax
	and eax,edi
	mov dword ptr [esp+0x1C],eax
	call ZArray<StatPair>::Insert
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nDEX
	sub ebp,eax
	xor eax,eax
	test ebp,ebp
	setle al
	push 0xFFFFFFFF
	lea edx,[esp+0x14]
	push edx
	mov ecx,ebx
	mov dword ptr [esp+0x18],0x80
	dec eax
	and eax,ebp
	mov dword ptr [esp+0x1C],eax
	call ZArray<StatPair>::Insert
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,8
	ret

 Block38:
	cmp edi,0x14
	lea ebp,[edi+edi]
	jle Block40

 Block39:
	lea ebp,[edi+0x14]

 Block40:
	mov eax,dword ptr [esi+0x38]
	lea edi,[edi+edi*4]
	push eax
	lea ecx,[esi+0x30]
	sub edi,ebp
	push ecx
	add edi,0xC
	call _ZtlSecureFuseHelper<long>::call
	sub ebp,eax
	add esp,8
	xor edx,edx
	test ebp,ebp
	setle dl
	push 0xFFFFFFFF
	mov ecx,ebx
	dec edx
	and ebp,edx
	call ZArray<StatPair>::InsertBefore
	mov ecx,0x80
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],ebp
	mov eax,dword ptr [esi+0x2C]
	push eax
	add esi,0x24
	push esi
	call _ZtlSecureFuseHelper<long>::call
	xor ecx,ecx
	sub edi,eax
	add esp,8
	test edi,edi
	setle cl
	dec ecx
	and ecx,edi
	mov esi,ecx

 Block41:
	mov edi,0x40

 Block42:
	push 0xFFFFFFFF
	mov ecx,ebx
	call ZArray<StatPair>::InsertBefore
	mov dword ptr [eax+4],esi
	mov dword ptr [eax],edi
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,8
	ret

 Block43:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,8
	ret
}
}

// CalcDamage::GetCounterDamage
__SUB(0032C4D0, __cdecl, 7852, long, long, MobStat *, long, long, long, long, long) {
__asm {

 Block0:
	sub esp,0x20
	push esi
	mov esi,dword ptr [esp+0x2C]
	test esi,esi
	jne Block2

 Block1:
	xor eax,eax
	pop esi
	add esp,0x20
	ret

 Block2:
	cmp dword ptr [esi+0x1C0],0
	je Block4

 Block3:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x64
	div ecx
	cmp edx,dword ptr [esi+0x1C0]
	jae Block1

 Block4:
	cmp dword ptr [esp+0x28],2
	push edi
	jne Block6

 Block5:
	mov edi,dword ptr [esi+0x1B0]
	mov esi,dword ptr [esi+0x1BC]
	jmp Block7

 Block6:
	mov edi,dword ptr [esi+0x1A0]
	mov esi,dword ptr [esi+0x1AC]

 Block7:
	mov ecx,edi
	test esi,esi
	je Block9

 Block8:
	lea ecx,[esp+8]
	call CRand32::_ctor_default
	mov eax,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x3C]
	lea ecx,[eax+edx]
	mov edx,dword ptr [esp+0x44]
	lea ecx,[ecx+edx+0xA]
	mov edx,dword ptr [esp+0x38]
	push ecx
	lea ecx,[eax+edx]
	add ecx,dword ptr [esp+0x44]
	push ecx
	push eax
	lea ecx,[esp+0x14]
	call CRand32::SetSeed
	lea ecx,[esp+8]
	call CRand32::Random
	xor edx,edx
	div esi
	mov eax,esi
	mov ecx,edx
	cdq
	sub eax,edx
	sar eax,1
	sub ecx,eax
	add ecx,edi

 Block9:
	pop edi
	mov eax,ecx
	pop esi
	add esp,0x20
	ret
}
}
// _anon_calc_accr
__SUB(00324CE0, __cdecl, 131951, long, long, long, long, long, long) {
__asm {

 Block0:
	fild dword ptr [esp+4]
	push esi
	call __CIsqrt
	call __ftol2_sse
	fild dword ptr [esp+0xC]
	mov esi,eax
	call __CIsqrt
	call __ftol2_sse
	sub esi,eax
	add esi,0x64
	mov ecx,esi
	imul ecx,dword ptr [esp+0x18]
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add eax,esi
	cmp eax,0x64
	pop esi
	jl Block2

 Block1:
	mov eax,0x64

 Block2:
	mov ecx,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0xC]
	cmp ecx,edx
	jle Block6

 Block3:
	sub ecx,edx
	lea ecx,[ecx+ecx*4]
	cmp ecx,eax
	jl Block5

 Block4:
	mov ecx,eax

 Block5:
	sub eax,ecx

 Block6:
	ret
}
}
// zmax_double_
__SUB(00321840, __cdecl, 131940, double, double, double) {
__asm {

 Block0:
	fld qword ptr [esp+4]
	fld qword ptr [esp+0xC]
	fcom
	fnstsw ax
	test ah,5
	jp Block2

 Block1:
	fstp st(0)
	ret

 Block2:
	fstp st(1)
	ret
}
}
// ForcedStat::IsForced
__SUB_CLASS_THIS0(00323060, __thiscall, 7206, ForcedStat, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+8]
	push eax
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block14

 Block1:
	mov ecx,dword ptr [esi+0x14]
	push ecx
	lea edx,[esi+0xC]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block14

 Block2:
	mov eax,dword ptr [esi+0x20]
	push eax
	lea ecx,[esi+0x18]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block14

 Block3:
	mov edx,dword ptr [esi+0x2C]
	push edx
	lea eax,[esi+0x24]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block14

 Block4:
	mov ecx,dword ptr [esi+0x38]
	push ecx
	lea edx,[esi+0x30]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block14

 Block5:
	mov ecx,esi
	call ForcedStat::_ZtlSecureGet_nPDD
	test eax,eax
	jne Block14

 Block6:
	mov ecx,esi
	call ForcedStat::_ZtlSecureGet_nMAD
	test eax,eax
	jne Block14

 Block7:
	mov ecx,esi
	call ForcedStat::_ZtlSecureGet_nMDD
	test eax,eax
	jne Block14

 Block8:
	mov ecx,esi
	call ForcedStat::_ZtlSecureGet_nACC
	test eax,eax
	jne Block14

 Block9:
	mov ecx,esi
	call ForcedStat::_ZtlSecureGet_nEVA
	test eax,eax
	jne Block14

 Block10:
	mov ecx,esi
	call ForcedStat::_ZtlSecureGet_nSpeed
	test eax,eax
	jne Block14

 Block11:
	mov ecx,esi
	call ForcedStat::_ZtlSecureGet_nJump
	test eax,eax
	jne Block14

 Block12:
	mov ecx,esi
	call ForcedStat::_ZtlSecureGet_nSpeedMax
	test eax,eax
	jne Block14

 Block13:
	pop esi
	ret

 Block14:
	mov eax,1
	pop esi
	ret
}
}
// SecondaryStat::GetACC
__SUB_CLASS_THIS(003261D0, __thiscall, 7668, SecondaryStat, long, const CharacterData &, long, long, long *) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xF8]
	push edi
	push eax
	lea ecx,[esi+0xF0]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0x1C]
	add esp,8
	push edx
	mov ecx,esi
	mov ebx,eax
	call SecondaryStat::GetIncACC
	mov edi,eax
	mov eax,dword ptr [esi+0x128]
	push eax
	lea ebp,[esi+0x120]
	add edi,ebx
	add edi,dword ptr [esp+0x20]
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,eax
	add ebx,dword ptr [esp+0x20]
	add esp,8
	cmp dword ptr [esp+0x20],0
	je Block2

 Block1:
	mov ecx,dword ptr [esi+0x128]
	push ecx
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	add ecx,dword ptr [esp+0x20]
	mov eax,0x51EB851F
	imul ecx,edi
	imul ecx
	mov ecx,dword ptr [esp+0x28]
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add esp,8
	add eax,edx
	mov dword ptr [ecx],eax

 Block2:
	test ebx,ebx
	jle Block4

 Block3:
	imul ebx,edi
	mov eax,0x51EB851F
	imul ebx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add edi,eax

 Block4:
	test edi,edi
	jle Block8

 Block5:
	cmp edi,0x270F
	mov eax,edi
	jl Block7

 Block6:
	mov eax,0x270F

 Block7:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0x10

 Block8:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	ret 0x10
}
}
// SecondaryStat::_ZtlSecurePut_nItemACCR
__SUB_CLASS(00327380, __fastcall, 7639, SecondaryStat, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x120]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x128],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CalcDamage::GetMesoGuardReduce
__SUB_CLASS_THIS(003251D0, __thiscall, 7847, CalcDamage, long, const CharacterData &, double) {
__asm {

 Block0:
	sub esp,8
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push ebp
	mov ebp,dword ptr [esp+0x10]
	push esi
	push edi
	lea eax,[esp+0xC]
	push eax
	push 0x40413D
	xor edi,edi
	push ebp
	mov dword ptr [esp+0x18],edi
	call CSkillInfo::GetSkillLevel_0
	fld qword ptr [esp+0x1C]
	fld1
	mov esi,eax
	fcom
	fnstsw ax
	test ah,5
	jp Block2

 Block1:
	fstp st(0)
	fld st(0)
	fld qword ptr [__real_412e847e00000000]
	fcom st(2)
	fnstsw ax
	fstp st(2)
	test ah,0x41
	jne Block3

 Block2:
	fstp st(1)
	jmp Block4

 Block3:
	fstp st(0)

 Block4:
	call __ftol2_sse
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [esp+0x10],eax
	cmp ecx,edi
	je Block17

 Block5:
	cmp esi,edi
	je Block17

 Block6:
	push ebx
	push esi
	call SKILLENTRY::GetLevelData
	mov ebx,eax
	mov ecx,dword ptr [ebx+0x168]
	lea eax,[ebx+0x160]
	push ecx
	push eax
	mov esi,0x32
	mov dword ptr [esp+0x28],eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	add esp,8
	push offset _D_PGRIDSKILL
	push 0x406469
	push ebp
	mov edi,eax
	call CSkillInfo::GetSkillLevel_0
	mov ebp,eax
	test ebp,ebp
	jle Block13

 Block7:
	mov ecx,dword ptr [_D_PGRIDSKILL]
	test ecx,ecx
	je Block13

 Block8:
	push ebp
	call SKILLENTRY::GetLevelData
	mov edx,dword ptr [eax+0x3F0]
	push edx
	add eax,0x3E8
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add eax,esi
	add esp,8
	cmp eax,0x64
	jge Block15

 Block9:
	cmp eax,0x32
	mov esi,eax
	jg Block11

 Block10:
	mov esi,0x32

 Block11:
	mov ecx,dword ptr [_D_PGRIDSKILL]
	push ebp
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x3FC]
	push ecx
	add eax,0x3F4
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [ebx+0x168]
	sub edi,eax
	mov eax,dword ptr [esp+0x28]
	push edx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	xor ecx,ecx
	add esp,0x10
	test edi,edi
	setle cl
	dec ecx
	and edi,ecx
	cmp edi,eax
	jl Block13

 Block12:
	mov edi,eax

 Block13:
	imul esi,dword ptr [esp+0x14]
	mov ebp,dword ptr [esp+0x1C]
	mov eax,0x51EB851F
	imul esi
	sar edx,5
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	mov edx,dword ptr [ebp+0xBD]
	push edx
	lea ebx,[ebp+0xB5]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,edi
	imul ecx,esi
	mov dword ptr [esp+0x24],eax
	mov eax,0x51EB851F
	imul ecx
	mov ecx,dword ptr [esp+0x24]
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,8
	cmp ecx,eax
	jge Block16

 Block14:
	mov ecx,dword ptr [ebp+0xBD]
	push ecx
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	imul eax,0x64
	add esp,8
	cdq
	pop ebx
	idiv edi
	pop edi
	pop esi
	pop ebp
	add esp,8
	ret 0xC

 Block15:
	mov esi,0x64
	jmp Block11

 Block16:
	pop ebx
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	add esp,8
	ret 0xC

 Block17:
	mov eax,edi
	pop edi
	pop esi
	pop ebp
	add esp,8
	ret 0xC
}
}
// get_rand
__SUB(00326370, __cdecl, 131953, double, uint32_t, double, double) {
__asm {

 Block0:
	sub esp,8
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+4],eax
	fld qword ptr [esp+0x18]
	fld qword ptr [esp+0x10]
	fcom
	fnstsw ax
	test ah,0x41
	jne Block5

 Block1:
	mov edx,dword ptr [esp+0x18]
	fstp st(0)
	mov eax,dword ptr [esp+0x10]
	fstp st(0)
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x10],edx
	mov edx,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x1C],ecx
	fld qword ptr [esp+0x18]
	mov dword ptr [esp+0x14],edx
	fld qword ptr [esp+0x10]

 Block2:
	mov ecx,dword ptr [esp+0xC]
	mov eax,0x6B5FCA6B
	mul ecx
	shr edx,0x16
	imul edx,0x989680
	sub ecx,edx
	mov dword ptr [esp],ecx
	fild dword ptr [esp]
	test ecx,ecx
	jge Block4

 Block3:
	fadd qword ptr [__real_41f0000000000000]

 Block4:
	fxch st(2)
	fsub st,st(1)
	fmulp st(2),st
	fxch
	fdiv qword ptr [__real_416312cfe0000000]
	faddp st(1),st(0)
	mov ecx,dword ptr [esp+4]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,8
	ret

 Block5:
	fld st(1)
	fucomp
	fnstsw ax
	test ah,0x44
	jp Block2

 Block6:
	mov ecx,dword ptr [esp+4]
	fstp st(1)
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,8
	ret
}
}
// ExpireBase::IsNoExpire
__SUB_CLASS_THIS0(00320830, __thiscall, 7093, ExpireBase, bool) {
__asm {

 Block0:
	xor al,al
	ret
}
}
// SecondaryStat::GetSpeed
__SUB_CLASS_THIS(004615E0, __thiscall, 7669, SecondaryStat, long, long) {
__asm {

 Block0:
	push ebp
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x1AC]
	push edi
	push eax
	lea ebp,[esi+0x1A4]
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	mov ecx,dword ptr [esi+0x1AC]
	push ecx
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov edi,eax
	jmp Block7

 Block2:
	push ebx
	mov ebx,dword ptr [esi+0x13C4]
	lea edi,[ebx+0x18]
	mov ecx,edi
	call ZFatalSection::Lock
	test edi,edi
	je Block5

 Block3:
	add dword ptr [edi+4],0xFFFFFFFF
	jne Block5

 Block4:
	mov dword ptr [edi],0

 Block5:
	mov edx,dword ptr [esi+0x1AC]
	push edx
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [ebx+0xC]
	add esp,8
	cmp ecx,eax
	pop ebx
	mov edi,eax
	jl Block7

 Block6:
	mov edi,ecx

 Block7:
	mov eax,dword ptr [esi+0x1A0]
	push eax
	add esi,0x198
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	add eax,edi
	add eax,dword ptr [esp+0x10]
	pop edi
	pop esi
	pop ebp
	ret 4
}
}
// SecondaryStat::_ZtlSecureGet_nEMHP_
__SUB_CLASS0(000FFEC0, __fastcall, 7637, SecondaryStat, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xF90]
	push eax
	add ecx,0xF88
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// TemporaryStat_GuidedBullet::GetMobID
__SUB_CLASS_THIS0(0023C2E0, __thiscall, 7166, TemporaryStat_GuidedBullet, unsigned long) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	lea esi,[edi+0x18]
	mov ecx,esi
	call ZFatalSection::Lock
	mov eax,dword ptr [edi+0x24]
	test esi,esi
	je Block3

 Block1:
	add dword ptr [esi+4],0xFFFFFFFF
	jne Block3

 Block2:
	mov dword ptr [esi],0

 Block3:
	pop edi
	pop esi
	ret
}
}
// SecondaryStat::ApplySocketOption
_SUB_EXCEPTION_HANDLER(32FF10)
__SUB_CLASS_THIS(0032FF10, __thiscall, 7684, SecondaryStat, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_32FF10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x24]
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemOptionInfo>::ms_pInstance]
	call CItemOptionInfo::GetSocketOption
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block4

 Block1:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 8
}
}
// CalcDamage::IsCounterAttackHit
_SUB_EXCEPTION_HANDLER(32E600)
__SUB_CLASS_THIS(0032E600, __thiscall, 7843, CalcDamage, int32_t, const MobStat &, const CharacterData &, const BasicStat &, const SecondaryStat &, NakedParam<ZRef<PassiveSkillData>>, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_32E600
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0x1C],ebx
	cmp dword ptr [esp+0x3C],ebx
	je Block6

 Block1:
	mov esi,dword ptr [esp+0x38]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	cmp esi,ebx
	je Block5

 Block2:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block3:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block5

 Block4:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block5:
	xor eax,eax
	jmp Block14

 Block6:
	mov eax,dword ptr [esp+0x38]
	xor edi,edi
	mov dword ptr [esp+0x3C],ebx
	cmp eax,ebx
	je Block8

 Block7:
	mov edi,dword ptr [eax+0x10]
	mov eax,dword ptr [eax+0x18]
	mov dword ptr [esp+0x3C],eax

 Block8:
	mov esi,dword ptr [esp+0x2C]
	push ebx
	mov ecx,esi
	call BasicStat::CalcBasePACC
	mov ecx,dword ptr [esp+0x2C]
	push eax
	push edi
	push ecx
	mov ecx,dword ptr [esp+0x40]
	call SecondaryStat::GetACC
	mov edi,dword ptr [esp+0x24]
	mov ebp,eax
	mov eax,dword ptr [edi+0x78]
	add eax,dword ptr [edi+0x74]
	cmp eax,ebx
	jle Block11

 Block9:
	cmp eax,0x270F
	mov ebx,eax
	jl Block11

 Block10:
	mov ebx,0x270F

 Block11:
	mov edx,dword ptr [esi+0x14]
	push edx
	add esi,0xC
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0x44]
	mov edx,dword ptr [edi]
	push ecx
	push edx
	push eax
	push ebx
	push ebp
	call _anon_calc_accr
	add esp,0x1C
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	lea ecx,[esp+0x34]
	test eax,eax
	jne Block13

 Block12:
	call ZRef<PassiveSkillData>::~ZRef<PassiveSkillData>
	xor eax,eax
	jmp Block14

 Block13:
	call ZRef<PassiveSkillData>::~ZRef<PassiveSkillData>
	mov eax,1

 Block14:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 0x20
}
}
// ApplyItemOption
_SUB_EXCEPTION_HANDLER(32F3E0)
__SUB(0032F3E0, __cdecl, 131965, void, long, long, long &, long &, long &, long &) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_32F3E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x24]
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemOptionInfo>::ms_pInstance]
	call CItemOptionInfo::GetItemOption
	mov ecx,dword ptr [esp+0x10]
	test ecx,ecx
	je Block4

 Block1:
	mov eax,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x2C]
	imul eax,0xE0
	add eax,dword ptr [ecx+0xC]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	mov esi,dword ptr [eax+8]
	add dword ptr [edx],esi
	mov esi,dword ptr [eax+0x10]
	mov edx,dword ptr [esp+0x30]
	add dword ptr [edx],esi
	mov esi,dword ptr [eax+0xC]
	mov edx,dword ptr [esp+0x34]
	add dword ptr [edx],esi
	mov edx,dword ptr [eax+0x14]
	mov eax,dword ptr [esp+0x38]
	add dword ptr [eax],edx
	lea esi,[ecx-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block4:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret
}
}
// CalcDamage::MDamage
_SUB_EXCEPTION_HANDLER(32E200)
__SUB_CLASS_THIS(0032E200, __thiscall, 7825, CalcDamage, long, const unsigned long, const MobStat &, const CharacterData &, const BasicStat &, const SecondaryStat &, const SKILLENTRY *, long, NakedParam<ZRef<PassiveSkillData>>, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_32E200
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0x48],ebx
	xor esi,esi
	lea edi,[ecx+0x60]

 Block1:
	mov ecx,edi
	call CRand32::Random
	mov dword ptr [esp+esi*4+0x24],eax
	inc esi
	cmp esi,7
	jl Block1

 Block2:
	mov eax,dword ptr [esp+0x70]
	xor ebp,ebp
	xor edi,edi
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x18],ebx
	cmp eax,ebx
	je Block11

 Block3:
	mov ecx,dword ptr [eax+0x5C]
	mov esi,dword ptr [eax+0x38]
	mov ebp,dword ptr [eax+0x40]
	mov edi,dword ptr [eax+0x10]
	mov dword ptr [esp+0x18],ecx
	xor ecx,ecx
	mov dword ptr [esp+0x14],esi
	mov dword ptr [esp+0x20],ecx
	mov byte ptr [esp+0x48],1
	cmp dword ptr [eax+0x80],ebx
	je Block7

 Block4:
	mov edx,dword ptr [esp+0x64]
	cmp edx,ebx
	je Block7

 Block5:
	lea ecx,[esp+0x1C]
	push ecx
	push edx
	lea ecx,[eax+0x74]
	call ZMap<long, ZRef<AdditionPsd>, long>::GetAt
	mov ecx,dword ptr [esp+0x20]
	test eax,eax
	je Block7

 Block6:
	add esi,dword ptr [ecx+0x14]
	mov dword ptr [esp+0x14],esi

 Block7:
	mov byte ptr [esp+0x48],0
	cmp ecx,ebx
	je Block11

 Block8:
	lea esi,[ecx-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block9:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block11

 Block10:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block11:
	mov esi,dword ptr [esp+0x5C]
	mov ecx,dword ptr [esi+0x38]
	push ecx
	lea edx,[esi+0x30]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x24],eax
	mov eax,dword ptr [esi+0x50]
	push eax
	lea ecx,[esi+0x48]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x6C],eax
	fild dword ptr [esp+0x6C]
	add esp,0x10
	fild dword ptr [esp+0x1C]
	fmul qword ptr [__real_3ff3333333333333]
	faddp st(1),st(0)
	call __ftol2_sse
	mov ebx,dword ptr [esp+0x58]
	push 0
	push eax
	push edi
	mov edi,dword ptr [esp+0x6C]
	push ebx
	mov ecx,edi
	call SecondaryStat::GetACC
	mov edx,dword ptr [esp+0x7C]
	push 0
	push edx
	mov dword ptr [esp+0x60],eax
	mov eax,dword ptr [esp+0x20]
	push ebp
	push eax
	mov ecx,edi
	call SecondaryStat::GetMAD
	mov ebp,dword ptr [esp+0x54]
	mov dword ptr [esp+0x60],eax
	mov eax,dword ptr [ebp+0x78]
	add eax,dword ptr [ebp+0x74]
	test eax,eax
	jg Block13

 Block12:
	xor eax,eax
	mov dword ptr [esp+0x5C],eax
	jmp Block16

 Block13:
	cmp eax,0x270F
	jge Block15

 Block14:
	mov dword ptr [esp+0x5C],eax
	jmp Block16

 Block15:
	mov dword ptr [esp+0x5C],0x270F

 Block16:
	mov ecx,dword ptr [esi+0x14]
	push ecx
	lea edx,[esi+0xC]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [esp+0x64]
	push 0
	push ecx
	push eax
	mov eax,dword ptr [esp+0x6C]
	push edx
	push eax
	call _anon_calc_accr
	fldz
	mov ecx,dword ptr [esp+0x40]
	fstp qword ptr [esp+0x14]
	fld qword ptr [__real_4059000000000000]
	add esp,0xC
	fstp qword ptr [esp]
	mov dword ptr [esp+0x6C],eax
	push ecx
	call get_rand_1
	fild dword ptr [esp+0x70]
	add esp,0x14
	fcompp
	fnstsw ax
	test ah,5
	jp Block22

 Block17:
	mov eax,dword ptr [esp+0x70]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block21

 Block18:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block21

 Block19:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block21

 Block20:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block21:
	xor eax,eax
	jmp Block37

 Block22:
	cmp dword ptr [ebp+0x218],0
	jne Block17

 Block23:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov ecx,0x64
	div ecx
	cmp dword ptr [ebp+0x12C],0
	mov dword ptr [esp+0x5C],edx
	je Block30

 Block24:
	mov edx,dword ptr [edi+0xA58]
	push edx
	lea eax,[edi+0xA50]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp dword ptr [esp+0x5C],eax
	jle Block30

 Block25:
	mov eax,dword ptr [esp+0x70]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block29

 Block26:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block29

 Block27:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block29

 Block28:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block29:
	mov eax,1
	jmp Block37

 Block30:
	mov ecx,dword ptr [esp+0x78]
	push ecx
	call get_weapon_type
	mov edx,dword ptr [esp+0x64]
	push edx
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x70],eax
	call CalcDamage::CalcDamageByWT
	fimul dword ptr [esp+0x88]
	push 0
	push 0
	push ebx
	fdiv qword ptr [__real_4059000000000000]
	fstp qword ptr [esp+0x3C]
	call get_amplification
	mov dword ptr [esp+0x78],eax
	mov eax,dword ptr [esp+0x98]
	push eax
	push 0
	push ebx
	call get_magic_mastery
	mov ecx,dword ptr [esp+0x88]
	add esp,0x2C
	push eax
	push ecx
	call CalcDamage::GetMsateryConstByWT
	push ecx
	fstp qword ptr [esp]
	mov edx,dword ptr [esp+0x38]
	fild dword ptr [esp+0x64]
	push edx
	sub esp,8
	fmul qword ptr [esp+0x34]
	fdiv qword ptr [__real_4059000000000000]
	fstp qword ptr [esp]
	call _anon_adjust_ramdom_damage
	fstp qword ptr [esp+0x34]
	mov eax,dword ptr [edi+0xBA0]
	push eax
	lea ecx,[edi+0xB98]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	fldz
	fstp qword ptr [esp+0x18]
	add esp,0x10
	mov dword ptr [esp+0x88],eax
	fild dword ptr [esp+0x88]
	fld qword ptr [__real_4059000000000000]
	mov edx,dword ptr [esp+0x78]
	mov ecx,dword ptr [esp+0x74]
	lea eax,[ebp+4]
	fdiv st(1),st
	fld1
	fsubrp st(2),st
	fxch
	fstp qword ptr [esp]
	push edx
	fild dword ptr [esp+0x28]
	push eax
	fld qword ptr [esp+0x34]
	push ecx
	sub esp,8
	fmul st(1),st
	fxch
	fdivrp st(2),st
	faddp st(1),st(0)
	fstp qword ptr [esp]
	call get_damage_adjusted_by_elemAttr_1
	mov eax,dword ptr [esp+0x74]
	fstp qword ptr [esp+0x40]
	lea edx,[esp+0x40]
	push edx
	push eax
	push edi
	push ebx
	call _anon_ApplyGuidedBulletDamage
	push ebx
	call get_mechanic_mastery
	add esp,0x38
	mov ebp,dword ptr [ebp+0x204]
	add eax,0x64
	mov dword ptr [esp+0x78],eax
	fild dword ptr [esp+0x78]
	mov dword ptr [esp+0x78],ebp
	fmul qword ptr [esp+0x1C]
	fdiv qword ptr [__real_4059000000000000]
	test ebp,ebp
	je Block32

 Block31:
	fimul dword ptr [esp+0x78]
	fdiv qword ptr [__real_c059000000000000]

 Block32:
	call __ftol2_sse
	mov ebx,eax
	mov eax,dword ptr [esp+0x70]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block36

 Block33:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block36

 Block34:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block36

 Block35:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block36:
	mov eax,ebx

 Block37:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 0x30
}
}
// BasicStat::SetFrom
_SUB_EXCEPTION_HANDLER(332BA0)
__SUB_CLASS_THIS(00332BA0, __thiscall, 7621, BasicStat, void, const CharacterData &, const ForcedStat &, ZRef<GW_ItemSlotBase> *, ZRef<GW_ItemSlotBase> *, ZRef<GW_ItemSlotBase> *, ZRef<GW_ItemSlotBase> *, long, long, long, long, long, long, long, long, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_332BA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x60]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ebp,dword ptr [esp+0x70]
	movzx ecx,byte ptr [ebp+0x11]
	mov edx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+8],eax
	mov eax,dword ptr [ebp+0x35]
	push eax
	lea ecx,[ebp+0x33]
	push ecx
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx ecx,al
	add esp,8
	lea edx,[esi+0xC]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x14],eax
	mov edx,dword ptr [ebp+0x3D]
	push edx
	lea eax,[ebp+0x39]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add esp,8
	lea edx,[esi+0x18]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x20],eax
	mov ecx,dword ptr [ebp+0x45]
	lea eax,[ebp+0x41]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add esp,8
	lea edx,[esi+0x24]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2C],eax
	mov edx,dword ptr [ebp+0x55]
	lea eax,[ebp+0x51]
	push edx
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	lea ebx,[esi+0x3C]
	add esp,8
	mov edx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x44],eax
	mov ecx,dword ptr [ebp+0x4D]
	lea eax,[ebp+0x49]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add esp,8
	lea edx,[esi+0x30]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x38],eax
	mov edx,dword ptr [ebp+0x5D]
	lea eax,[ebp+0x59]
	push edx
	push eax
	mov dword ptr [esp+0x38],eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add esp,8
	lea edx,[esi+0x48]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x50],eax
	mov eax,dword ptr [ebp+0xB1]
	push eax
	lea ecx,[ebp+0xAD]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add esp,8
	lea edx,[esi+0x54]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x5C],eax
	mov edx,dword ptr [ebp+0x75]
	push edx
	lea eax,[ebp+0x6D]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea edx,[esi+0x60]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x68],eax
	mov ecx,dword ptr [ebp+0x8D]
	push ecx
	lea edx,[ebp+0x85]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea edx,[esi+0x6C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	xor edi,edi
	mov dword ptr [esi+0x74],eax
	mov dword ptr [esp+0x20],edi
	mov dword ptr [esp+0x24],edi
	mov dword ptr [esp+0x5C],edi
	mov dword ptr [esp+0x58],edi
	mov dword ptr [esp+0x54],edi
	mov dword ptr [esp+0x50],edi
	mov dword ptr [esp+0x4C],edi
	mov dword ptr [esp+0x48],edi
	call Util::FTGetNow
	mov dword ptr [esp+0x38],edx
	mov edx,dword ptr [esp+0x78]
	add edx,8
	mov dword ptr [esp+0x18],edx
	lea edx,[ebp+0x349]
	mov dword ptr [esp+0x1C],edx
	mov edx,dword ptr [esp+0x7C]
	mov dword ptr [esp+0x34],eax
	or eax,0xFFFFFFFF
	mov ecx,0xFFFFFFC6
	add edx,0xFFFFFE30
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x28],ecx
	mov dword ptr [esp+0x7C],edx

 Block1:
	cmp eax,0xFFFFFFC5
	mov edx,dword ptr [esp+0x7C]
	jl Block3

 Block2:
	mov edx,dword ptr [esp+0x18]

 Block3:
	mov dword ptr [esp+0x70],edx
	cmp dword ptr [edx+4],edi
	je Block17

 Block4:
	cmp ecx,edi
	ja Block6

 Block5:
	mov ecx,dword ptr [esp+0x1C]
	lea eax,[esp+0x34]
	push eax
	push ecx
	call dword ptr [ZImports::_CompareFileTime]
	test eax,eax
	mov eax,dword ptr [esp+0x14]
	jl Block17

 Block6:
	cmp eax,0xFFFFFFE2
	je Block17

 Block7:
	cmp eax,0xFFFFFFDA
	je Block17

 Block8:
	cmp eax,0xFFFFFFE1
	je Block17

 Block9:
	cmp eax,0xFFFFFFD9
	je Block17

 Block10:
	cmp eax,0xFFFFFFE0
	je Block17

 Block11:
	cmp eax,0xFFFFFFD8
	je Block17

 Block12:
	mov edx,dword ptr [esp+0x70]
	mov edi,dword ptr [edx+4]
	mov dword ptr [esp+0x78],edi
	add edi,0x49
	mov ecx,edi
	call GW_ItemSlotEquipBase::_ZtlSecureGet_nDurability
	test eax,eax
	je Block16

 Block13:
	mov ecx,edi
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niSTR
	cwde
	mov ecx,esi
	mov dword ptr [esp+0x70],eax
	call BasicStat::_ZtlSecureGet_nSTR
	mov edx,eax
	add edx,dword ptr [esp+0x70]
	mov ecx,esi
	call BasicStat::_ZtlSecurePut_nSTR
	mov ecx,edi
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niINT
	movsx ecx,ax
	mov dword ptr [esp+0x70],ecx
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nINT
	mov edx,eax
	add edx,dword ptr [esp+0x70]
	mov ecx,esi
	call BasicStat::_ZtlSecurePut_nINT
	mov ecx,edi
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niDEX
	movsx edx,ax
	mov ecx,esi
	mov dword ptr [esp+0x70],edx
	call BasicStat::_ZtlSecureGet_nDEX
	mov edx,eax
	add edx,dword ptr [esp+0x70]
	mov ecx,esi
	call BasicStat::_ZtlSecurePut_nDEX
	mov ecx,edi
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niLUK
	cwde
	mov ecx,esi
	mov dword ptr [esp+0x70],eax
	call BasicStat::_ZtlSecureGet_nLUK
	mov edx,eax
	add edx,dword ptr [esp+0x70]
	mov ecx,esi
	call BasicStat::_ZtlSecurePut_nLUK
	mov ecx,edi
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niMaxHP
	movsx ecx,ax
	mov dword ptr [esp+0x70],ecx
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nMHP
	mov edx,eax
	add edx,dword ptr [esp+0x70]
	mov ecx,esi
	call BasicStat::_ZtlSecurePut_nMHP
	mov ecx,edi
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niMaxMP
	mov ecx,esi
	movsx edi,ax
	call BasicStat::_ZtlSecureGet_nMMP
	mov edx,eax
	add edx,edi
	mov ecx,esi
	call BasicStat::_ZtlSecurePut_nMMP
	mov ecx,dword ptr [esp+0x78]
	add ecx,0xC
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	test eax,eax
	je Block16

 Block14:
	movsx ecx,word ptr [eax+0x9E]
	movsx edx,word ptr [eax+0x9C]
	add dword ptr [esp+0x24],ecx
	add dword ptr [esp+0x20],edx
	mov ecx,eax
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nrLevel
	mov ecx,eax
	dec ecx
	mov eax,0x66666667
	imul ecx
	mov ecx,dword ptr [esp+0x78]
	sar edx,2
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	add ecx,0x105
	push edi
	mov dword ptr [esp+0x74],ecx
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nSocket1
	movsx edx,ax
	push edx
	mov ecx,esi
	call BasicStat::ApplySocketOption
	mov ecx,dword ptr [esp+0x70]
	push edi
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nSocket2
	cwde
	push eax
	mov ecx,esi
	call BasicStat::ApplySocketOption
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,dword ptr [esp+0x74]
	push edi
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nSocket1
	movsx edx,ax
	push edx
	mov ecx,esi
	call BasicStat::ApplySocketOptionR
	mov ecx,dword ptr [esp+0x70]
	lea eax,[esp+0x48]
	push eax
	push edi
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nSocket2
	movsx ecx,ax
	push ecx
	mov ecx,esi
	call BasicStat::ApplySocketOptionR
	mov ecx,dword ptr [esp+0x78]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x78]
	call eax
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [esp+0x70]
	push edi
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption1
	movsx ecx,ax
	push ecx
	mov ecx,esi
	call BasicStat::ApplyItemOption
	mov ecx,dword ptr [esp+0x70]
	push edi
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption2
	movsx edx,ax
	push edx
	mov ecx,esi
	call BasicStat::ApplyItemOption
	mov ecx,dword ptr [esp+0x70]
	push edi
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption3
	cwde
	push eax
	mov ecx,esi
	call BasicStat::ApplyItemOption
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,dword ptr [esp+0x74]
	push edi
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption1
	movsx edx,ax
	push edx
	mov ecx,esi
	call BasicStat::ApplyItemOptionR
	mov ecx,dword ptr [esp+0x70]
	lea eax,[esp+0x48]
	push eax
	push edi
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption2
	movsx ecx,ax
	push ecx
	mov ecx,esi
	call BasicStat::ApplyItemOptionR
	mov ecx,dword ptr [esp+0x70]
	lea edx,[esp+0x48]
	push edx
	push edi
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption3
	cwde
	push eax
	mov ecx,esi
	call BasicStat::ApplyItemOptionR

 Block16:
	mov eax,dword ptr [esp+0x14]
	xor edi,edi

 Block17:
	add dword ptr [esp+0x1C],8
	mov ecx,8
	add dword ptr [esp+0x7C],ecx
	add dword ptr [esp+0x18],ecx
	mov ecx,dword ptr [esp+0x28]
	inc ecx
	dec eax
	cmp ecx,0x3B
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x28],ecx
	jle Block1

 Block18:
	mov ecx,dword ptr [esp+0x80]
	add ecx,4
	mov eax,0xFFFFFBDD
	lea edx,[ebp-0x1BFF]
	mov dword ptr [esp+0x70],ecx
	mov dword ptr [esp+0x7C],eax
	mov dword ptr [esp+0x78],edx
	lea ecx,[ecx]

 Block19:
	mov ecx,dword ptr [esp+0x70]
	cmp dword ptr [ecx],edi
	je Block25

 Block20:
	cmp eax,edi
	ja Block22

 Block21:
	mov eax,dword ptr [esp+0x78]
	lea edx,[esp+0x34]
	push edx
	push eax
	call dword ptr [ZImports::_CompareFileTime]
	test eax,eax
	jl Block25

 Block22:
	mov ecx,dword ptr [esp+0x70]
	mov edi,dword ptr [ecx]
	mov edx,dword ptr [edi+0xF5]
	push edx
	lea eax,[edi+0xED]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [esi+0x2C]
	push ecx
	lea eax,[esi+0x24]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [edi+0x59]
	mov dword ptr [esp+0x88],eax
	push edx
	lea eax,[edi+0x55]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add ecx,dword ptr [esp+0x90]
	add esp,0x10
	lea edx,[esi+0x24]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [esi+0x44]
	push ecx
	push ebx
	mov dword ptr [esi+0x2C],eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [edi+0x69]
	mov dword ptr [esp+0x88],eax
	push edx
	lea eax,[edi+0x65]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add ecx,dword ptr [esp+0x90]
	add esp,0x10
	mov edx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [esi+0x38]
	mov dword ptr [esi+0x44],eax
	push ecx
	lea eax,[esi+0x30]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [edi+0x61]
	mov dword ptr [esp+0x88],eax
	push edx
	lea eax,[edi+0x5D]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add ecx,dword ptr [esp+0x90]
	add esp,0x10
	lea edx,[esi+0x30]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [esi+0x50]
	mov dword ptr [esi+0x38],eax
	push ecx
	lea eax,[esi+0x48]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [edi+0x71]
	mov dword ptr [esp+0x88],eax
	push edx
	lea eax,[edi+0x6D]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add ecx,dword ptr [esp+0x90]
	add esp,0x10
	lea edx,[esi+0x48]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [esi+0x68]
	mov dword ptr [esi+0x50],eax
	push ecx
	lea eax,[esi+0x60]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [edi+0x79]
	mov dword ptr [esp+0x88],eax
	push edx
	lea eax,[edi+0x75]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add esp,0x10
	add ecx,dword ptr [esp+0x80]
	lea edx,[esi+0x60]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [esi+0x74]
	mov dword ptr [esi+0x68],eax
	push ecx
	lea eax,[esi+0x6C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [edi+0x81]
	push edx
	add edi,0x7D
	push edi
	mov dword ptr [esp+0x90],eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add ecx,dword ptr [esp+0x90]
	add esp,0x10
	lea edx,[esi+0x6C]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x74],eax

 Block24:
	xor edi,edi

 Block25:
	mov eax,8
	add dword ptr [esp+0x70],eax
	sub dword ptr [esp+0x78],eax
	mov eax,dword ptr [esp+0x7C]
	dec eax
	cmp eax,0xFFFFFBD9
	mov dword ptr [esp+0x7C],eax
	jg Block19

 Block26:
	mov eax,dword ptr [esp+0x84]
	add eax,4
	mov dword ptr [esp+0x70],eax
	mov eax,0xFFFFFB79
	lea ecx,[ebp-0x1F1F]
	mov dword ptr [esp+0x7C],eax
	mov dword ptr [esp+0x78],ecx
	jmp Block28

 Block28:
	mov edx,dword ptr [esp+0x70]
	cmp dword ptr [edx],edi
	je Block34

 Block29:
	cmp eax,edi
	ja Block31

 Block30:
	mov ecx,dword ptr [esp+0x78]
	lea eax,[esp+0x34]
	push eax
	push ecx
	call dword ptr [ZImports::_CompareFileTime]
	test eax,eax
	jl Block34

 Block31:
	mov edx,dword ptr [esp+0x70]
	mov edi,dword ptr [edx]
	mov eax,dword ptr [edi+0xF5]
	push eax
	lea ecx,[edi+0xED]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block33

 Block32:
	mov edx,dword ptr [esi+0x2C]
	push edx
	lea eax,[esi+0x24]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x88],eax
	mov eax,dword ptr [edi+0x59]
	push eax
	lea ecx,[edi+0x55]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add ecx,dword ptr [esp+0x90]
	add esp,0x10
	lea edx,[esi+0x24]
	call _ZtlSecureTearHelper<long>::call
	mov edx,dword ptr [esi+0x44]
	push edx
	push ebx
	mov dword ptr [esi+0x2C],eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x88],eax
	mov eax,dword ptr [edi+0x69]
	push eax
	lea ecx,[edi+0x65]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add ecx,dword ptr [esp+0x90]
	add esp,0x10
	mov edx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov edx,dword ptr [esi+0x38]
	mov dword ptr [esi+0x44],eax
	push edx
	lea eax,[esi+0x30]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x88],eax
	mov eax,dword ptr [edi+0x61]
	push eax
	lea ecx,[edi+0x5D]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add ecx,dword ptr [esp+0x90]
	add esp,0x10
	lea edx,[esi+0x30]
	call _ZtlSecureTearHelper<long>::call
	mov edx,dword ptr [esi+0x50]
	mov dword ptr [esi+0x38],eax
	push edx
	lea eax,[esi+0x48]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x88],eax
	mov eax,dword ptr [edi+0x71]
	push eax
	lea ecx,[edi+0x6D]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add ecx,dword ptr [esp+0x90]
	add esp,0x10
	lea edx,[esi+0x48]
	call _ZtlSecureTearHelper<long>::call
	mov edx,dword ptr [esi+0x68]
	mov dword ptr [esi+0x50],eax
	push edx
	lea eax,[esi+0x60]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x88],eax
	mov eax,dword ptr [edi+0x79]
	push eax
	lea ecx,[edi+0x75]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add esp,0x10
	add ecx,dword ptr [esp+0x80]
	lea edx,[esi+0x60]
	call _ZtlSecureTearHelper<long>::call
	mov edx,dword ptr [esi+0x74]
	mov dword ptr [esi+0x68],eax
	push edx
	lea eax,[esi+0x6C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x88],eax
	mov eax,dword ptr [edi+0x81]
	push eax
	add edi,0x7D
	push edi
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add ecx,dword ptr [esp+0x90]
	add esp,0x10
	lea edx,[esi+0x6C]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x74],eax

 Block33:
	xor edi,edi

 Block34:
	mov eax,8
	add dword ptr [esp+0x70],eax
	sub dword ptr [esp+0x78],eax
	mov eax,dword ptr [esp+0x7C]
	dec eax
	cmp eax,0xFFFFFB74
	mov dword ptr [esp+0x7C],eax
	jg Block28

 Block35:
	lea ecx,[ebp+0x521]
	call ZMap<long, EQUIPPED_SETITEM, long>::GetHeadPosition
	mov dword ptr [esp+0x78],eax
	cmp eax,edi
	je Block53

 Block36:
	jmp Block38

 Block38:
	mov dword ptr [esp+0x44],edi
	mov dword ptr [esp+0x3C],edi
	mov dword ptr [esp+0x40],edi
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x7C]
	push edx
	lea ecx,[ebp+0x521]
	mov dword ptr [esp+0x70],edi
	call ZMap<long, EQUIPPED_SETITEM, long>::GetNext
	mov dword ptr [esp+0x2C],edi
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	add ecx,0x9C
	mov byte ptr [esp+0x70],1
	call ZMap<long, ZRef<CItemInfo::SETITEMINFO>, long>::GetAt
	test eax,eax
	je Block47

 Block39:
	xor eax,eax
	cmp dword ptr [esp+0x40],edi
	mov dword ptr [esp+0x70],eax
	jle Block47

 Block40:
	mov edi,dword ptr [esp+0x2C]
	add edi,0xC
	jmp Block42

 Block42:
	cmp dword ptr [edi],0
	je Block45

 Block43:
	cmp eax,0x3C
	ja Block45

 Block44:
	mov edx,dword ptr [esi+0x2C]
	push edx
	lea eax,[esi+0x24]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi]
	movsx ecx,word ptr [ecx]
	add esp,8
	add ecx,eax
	lea edx,[esi+0x24]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2C],eax
	mov eax,dword ptr [esi+0x44]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi]
	movsx ecx,word ptr [ecx+4]
	add esp,8
	add ecx,eax
	mov edx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [esi+0x38]
	mov dword ptr [esi+0x44],eax
	push ecx
	lea eax,[esi+0x30]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi]
	movsx ecx,word ptr [ecx+2]
	add esp,8
	add ecx,eax
	lea edx,[esi+0x30]
	call _ZtlSecureTearHelper<long>::call
	mov edx,dword ptr [esi+0x50]
	mov dword ptr [esi+0x38],eax
	push edx
	lea eax,[esi+0x48]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi]
	movsx ecx,word ptr [ecx+6]
	add esp,8
	add ecx,eax
	lea edx,[esi+0x48]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x50],eax
	mov eax,dword ptr [esi+0x68]
	push eax
	lea eax,[esi+0x60]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi]
	movsx ecx,word ptr [ecx+8]
	add esp,8
	add ecx,eax
	lea edx,[esi+0x60]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [esi+0x74]
	mov dword ptr [esi+0x68],eax
	push ecx
	lea eax,[esi+0x6C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi]
	movsx ecx,word ptr [ecx+0xA]
	add esp,8
	add ecx,eax
	lea edx,[esi+0x6C]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x74],eax
	mov eax,dword ptr [esp+0x70]

 Block45:
	inc eax
	add edi,8
	cmp eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x70],eax
	jl Block42

 Block46:
	xor edi,edi

 Block47:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x68],0
	cmp eax,edi
	je Block52

 Block48:
	add eax,0xFFFFFFF0
	mov dword ptr [esp+0x70],eax
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block51

 Block49:
	mov eax,dword ptr [esp+0x70]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x70]
	cmp ecx,edi
	je Block51

 Block50:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block51:
	mov dword ptr [esp+0x2C],edi

 Block52:
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	call ZArray<long>::RemoveAll
	cmp dword ptr [esp+0x78],edi
	jne Block38

 Block53:
	mov ecx,dword ptr [esi+0x2C]
	push ecx
	lea edi,[esi+0x24]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [ebp+0x45]
	mov dword ptr [esp+0x78],eax
	push edx
	lea eax,[ebp+0x41]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	imul ecx,dword ptr [esp+0xA0]
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	add ecx,dword ptr [esp+0x80]
	add esp,0x10
	mov edx,edi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2C],eax
	mov eax,dword ptr [esi+0x44]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [ebp+0x55]
	mov edi,eax
	push ecx
	lea eax,[ebp+0x51]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	imul ecx,dword ptr [esp+0xA0]
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	add esp,0x10
	add ecx,edi
	mov edx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov edx,dword ptr [esi+0x38]
	push edx
	lea edi,[esi+0x30]
	push edi
	mov dword ptr [esi+0x44],eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x78],eax
	mov eax,dword ptr [ebp+0x4D]
	push eax
	lea eax,[ebp+0x49]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	imul ecx,dword ptr [esp+0xA0]
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	add ecx,dword ptr [esp+0x80]
	add esp,0x10
	mov edx,edi
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [esi+0x50]
	mov dword ptr [esi+0x38],eax
	push ecx
	lea eax,[esi+0x48]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [ebp+0x5D]
	mov dword ptr [esp+0x78],eax
	mov eax,dword ptr [esp+0x38]
	push edx
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	imul ecx,dword ptr [esp+0xA0]
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	add ecx,dword ptr [esp+0x80]
	add esp,0x10
	lea edx,[esi+0x48]
	call _ZtlSecureTearHelper<long>::call
	mov ebp,dword ptr [esp+0x74]
	mov dword ptr [esi+0x50],eax
	mov ecx,dword ptr [ebp+8]
	push ecx
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block55

 Block54:
	mov edx,dword ptr [ebp+8]
	push edx
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea edx,[esi+0x24]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2C],eax

 Block55:
	mov ecx,dword ptr [ebp+0x14]
	lea eax,[ebp+0xC]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block57

 Block56:
	mov edx,dword ptr [ebp+0x14]
	push edx
	lea eax,[ebp+0xC]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov edx,edi
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x38],eax

 Block57:
	mov ecx,dword ptr [ebp+0x20]
	lea eax,[ebp+0x18]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block59

 Block58:
	mov edx,dword ptr [ebp+0x20]
	push edx
	lea eax,[ebp+0x18]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov edx,ebx
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x44],eax

 Block59:
	mov ecx,dword ptr [ebp+0x2C]
	lea eax,[ebp+0x24]
	push ecx
	push eax
	mov dword ptr [esp+0x98],eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block61

 Block60:
	mov edx,dword ptr [ebp+0x2C]
	mov eax,dword ptr [esp+0x90]
	push edx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	lea edx,[esi+0x48]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x50],eax

 Block61:
	mov ecx,dword ptr [esi+0x68]
	push ecx
	lea ebp,[esi+0x60]
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add eax,dword ptr [esp+0x9C]
	add esp,8
	mov edx,ebp
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov edx,dword ptr [esi+0x74]
	mov dword ptr [esi+0x68],eax
	push edx
	lea eax,[esi+0x6C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add eax,dword ptr [esp+0xA0]
	add esp,8
	lea edx,[esi+0x6C]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x74],eax
	mov eax,dword ptr [esi+0x2C]
	push eax
	lea eax,[esi+0x24]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x2C]
	mov dword ptr [esp+0x98],eax
	push ecx
	lea eax,[esi+0x24]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	imul ecx,dword ptr [esp+0x58]
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	add ecx,dword ptr [esp+0xA0]
	add esp,0x10
	lea edx,[esi+0x24]
	call _ZtlSecureTearHelper<long>::call
	mov edx,dword ptr [esi+0x44]
	push edx
	push ebx
	mov dword ptr [esi+0x2C],eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x98],eax
	mov eax,dword ptr [esi+0x44]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	imul ecx,dword ptr [esp+0x60]
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	add ecx,dword ptr [esp+0xA0]
	add esp,0x10
	mov edx,ebx
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [esi+0x38]
	push ecx
	push edi
	mov dword ptr [esi+0x44],eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x38]
	push edx
	push edi
	mov ebx,eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	add esp,0x10
	imul ecx,dword ptr [esp+0x4C]
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	add ecx,ebx
	mov edx,edi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x38],eax
	mov eax,dword ptr [esi+0x50]
	push eax
	lea edi,[esi+0x48]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x50]
	push ecx
	push edi
	mov ebx,eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	imul ecx,dword ptr [esp+0x64]
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	add esp,0x10
	add ecx,ebx
	mov edx,edi
	call _ZtlSecureTearHelper<long>::call
	mov edx,dword ptr [esi+0x68]
	push edx
	push ebp
	mov dword ptr [esi+0x50],eax
	call _ZtlSecureFuseHelper<long>::call
	mov edi,eax
	mov eax,dword ptr [esi+0x68]
	push eax
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0xB0]
	mov edx,dword ptr [esp+0x98]
	add esp,0x10
	cmp ecx,edx
	jge Block63

 Block62:
	mov ecx,edx

 Block63:
	mov edx,dword ptr [esp+0xA4]
	cmp edx,ecx
	jl Block65

 Block64:
	mov ecx,edx

 Block65:
	mov edx,dword ptr [esp+0x58]
	add ecx,edx
	add ecx,dword ptr [esp+0x20]
	add ecx,dword ptr [esp+0xA8]
	add ecx,dword ptr [esp+0xB0]
	imul ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	add ecx,edi
	mov edx,ebp
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x68],eax
	mov eax,dword ptr [esi+0x74]
	push eax
	lea edi,[esi+0x6C]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x74]
	push ecx
	push edi
	mov ebx,eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0x6C]
	mov ecx,eax
	mov eax,dword ptr [esp+0x34]
	add edx,eax
	add edx,dword ptr [esp+0x9C]
	mov eax,0x51EB851F
	add edx,dword ptr [esp+0xAC]
	add esp,0x10
	add edx,dword ptr [esp+0xAC]
	imul ecx,edx
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	add ecx,ebx
	mov edx,edi
	call _ZtlSecureTearHelper<long>::call
	mov ecx,dword ptr [esi+0x68]
	push ecx
	push ebp
	mov dword ptr [esi+0x74],eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x1869F
	jle Block67

 Block66:
	mov edx,ebp
	mov ecx,0x1869F
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x68],eax

 Block67:
	mov edx,dword ptr [esi+0x74]
	push edx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,0x1869F
	jle Block69

 Block68:
	mov edx,edi
	mov ecx,0x1869F
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x74],eax

 Block69:
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 0x44
}
}
// MobStat::DecodeTemporary
__SUB_CLASS_THIS(003408C0, __thiscall, 7777, MobStat, void, NakedParam<MY_UINT128>, CInPacket &, long) {
__asm {

 Block0:
	sub esp,0x28
	push ebx
	push ebp
	push esi
	push offset MobStat::MS_PAD
	lea eax,[esp+0x18]
	mov ebp,ecx
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	mov esi,dword ptr [esp+0x4C]
	mov ebx,dword ptr [esp+0x48]
	test al,al
	je Block2

 Block1:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x28],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x2C],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x30],edx

 Block2:
	push offset MobStat::MS_PDR
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block4

 Block3:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x38],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x3C],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x40],edx

 Block4:
	push offset MobStat::MS_MAD
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block6

 Block5:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x48],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x4C],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x50],edx

 Block6:
	push offset MobStat::MS_MDR
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block8

 Block7:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x58],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x5C],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x60],edx

 Block8:
	push offset MobStat::MS_ACC
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block10

 Block9:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x68],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x6C],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x70],edx

 Block10:
	push offset MobStat::MS_EVA
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block12

 Block11:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x78],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x7C],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x80],edx

 Block12:
	push offset MobStat::MS_Speed
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block14

 Block13:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x88],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x8C],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x90],edx

 Block14:
	push offset MobStat::MS_Stun
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block16

 Block15:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x94],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x98],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x9C],edx

 Block16:
	push offset MobStat::MS_Freeze
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block18

 Block17:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0xA0],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0xA4],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0xA8],edx

 Block18:
	push offset MobStat::MS_Poison
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block20

 Block19:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0xAC],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0xB0],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0xB4],edx

 Block20:
	push offset MobStat::MS_Seal
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block22

 Block21:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0xBC],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0xC0],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0xC4],edx

 Block22:
	push offset MobStat::MS_Darkness
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block24

 Block23:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0xC8],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0xCC],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0xD0],edx

 Block24:
	push offset MobStat::MS_PowerUp
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block26

 Block25:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0xD4],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0xD8],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0xDC],edx

 Block26:
	push offset MobStat::MS_MagicUp
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block28

 Block27:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0xE0],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0xE4],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0xE8],edx

 Block28:
	push offset MobStat::MS_PGuardUp
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block30

 Block29:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0xEC],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0xF0],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0xF4],edx

 Block30:
	push offset MobStat::MS_MGuardUp
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block32

 Block31:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0xF8],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0xFC],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x100],edx

 Block32:
	push offset MobStat::MS_PImmune
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block34

 Block33:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x120],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x124],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x128],edx

 Block34:
	push offset MobStat::MS_MImmune
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block36

 Block35:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x12C],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x130],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x134],edx

 Block36:
	push offset MobStat::MS_Doom
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block38

 Block37:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x104],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x108],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x10C],edx

 Block38:
	push offset MobStat::MS_Web
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block40

 Block39:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x110],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x114],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x118],edx

 Block40:
	push offset MobStat::MS_HardSkin
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block42

 Block41:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x144],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x148],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x14C],edx

 Block42:
	push offset MobStat::MS_Ambush
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block44

 Block43:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x150],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x154],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x158],edx

 Block44:
	push offset MobStat::MS_Venom
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block46

 Block45:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x160],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x164],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x168],edx

 Block46:
	push offset MobStat::MS_Blind
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block48

 Block47:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x170],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x174],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x178],edx

 Block48:
	push offset MobStat::MS_SealSkill
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block50

 Block49:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x17C],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x180],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x184],edx

 Block50:
	push offset MobStat::MS_Dazzle
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block52

 Block51:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x188],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x18C],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x190],edx

 Block52:
	push offset MobStat::MS_PCounter
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block54

 Block53:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x1A0],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x1A4],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x1A8],edx

 Block54:
	push offset MobStat::MS_MCounter
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block56

 Block55:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x1B0],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x1B4],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x1B8],edx

 Block56:
	push offset MobStat::MS_RiseByToss
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block58

 Block57:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x194],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x198],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x19C],edx

 Block58:
	push offset MobStat::MS_BodyPressure
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block60

 Block59:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x1C4],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x1C8],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x1CC],edx

 Block60:
	push offset MobStat::MS_Weakness
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block62

 Block61:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x1D0],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x1D4],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x1D8],edx

 Block62:
	push offset MobStat::MS_TimeBomb
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block64

 Block63:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x1DC],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x1E0],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x1E4],edx

 Block64:
	push offset MobStat::MS_Showdown
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block66

 Block65:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x138],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x13C],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x140],edx

 Block66:
	push offset MobStat::MS_MagicCrash
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block68

 Block67:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x1EC],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x1F0],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x1F4],edx

 Block68:
	push offset MobStat::MS_DamagedElemAttr
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block70

 Block69:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x1F8],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x1FC],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x200],edx

 Block70:
	push offset MobStat::MS_HealByDamage
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block72

 Block71:
	mov ecx,ebx
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [ebp+0x204],ecx
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [ebp+0x208],eax
	call CInPacket::Decode2
	movsx edx,ax
	imul edx,0x1F4
	add edx,esi
	mov dword ptr [ebp+0x20C],edx

 Block72:
	push offset MobStat::MS_Burned
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block87

 Block73:
	push edi
	mov ecx,ebx
	call CInPacket::Decode4
	mov edi,eax
	mov eax,dword ptr [ebp+0x22C]
	cmp edi,eax
	mov dword ptr [esp+0x4C],edi
	mov dword ptr [esp+0x14],eax
	jge Block78

 Block74:
	lea ecx,[ebp+0x224]
	call ZList<MobStat::BURNED_INFO>::RemoveAll
	test edi,edi
	jle Block86

 Block75:
	mov ecx,edi
	mov dword ptr [esp+0x50],ecx

 Block76:
	lea ecx,[ebp+0x224]
	call ZList<MobStat::BURNED_INFO>::AddTail_
	mov ecx,ebx
	mov edi,eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [edi],eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [edi+4],eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [edi+8],eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [edi+0xC],eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [edi+0x10],eax
	call CInPacket::Decode4
	sub dword ptr [esp+0x50],1
	mov dword ptr [edi+0x1C],eax
	mov dword ptr [edi+0x14],esi
	jne Block76

 Block77:
	jmp Block86

 Block78:
	xor edi,edi
	cmp dword ptr [esp+0x4C],edi
	mov dword ptr [esp+0x10],edi
	jle Block82

 Block79:
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esp+0x18],eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esp+0x1C],eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esp+0x20],eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esp+0x24],eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esp+0x28],eax
	call CInPacket::Decode4
	cmp edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x2C],esi
	jl Block81

 Block80:
	lea ecx,[ebp+0x224]
	call ZList<MobStat::BURNED_INFO>::AddTail_
	mov ecx,8
	lea esi,[esp+0x18]
	mov edi,eax
	rep movsd
	mov esi,dword ptr [esp+0x50]
	mov edi,dword ptr [esp+0x10]

 Block81:
	inc edi
	cmp edi,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x10],edi
	jl Block79

 Block82:
	mov eax,dword ptr [ebp+0x230]
	mov dword ptr [esp+0x50],eax
	test eax,eax
	je Block86

 Block83:
	jmp Block85

 Block85:
	lea edx,[esp+0x50]
	push edx
	call ZList<MobStat::BURNED_INFO>::GetNext
	add esp,4
	cmp dword ptr [esp+0x50],0
	mov dword ptr [eax+0x14],esi
	jne Block85

 Block86:
	pop edi

 Block87:
	push offset MobStat::MS_PCounter
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block89

 Block88:
	mov ecx,ebx
	call CInPacket::Decode4
	mov dword ptr [ebp+0x1AC],eax

 Block89:
	push offset MobStat::MS_MCounter
	lea ecx,[esp+0x18]
	push ecx
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block91

 Block90:
	mov ecx,ebx
	call CInPacket::Decode4
	mov dword ptr [ebp+0x1BC],eax

 Block91:
	push offset MobStat::MS_PCounter
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	jne Block93

 Block92:
	push offset MobStat::MS_MCounter
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block94

 Block93:
	mov ecx,ebx
	call CInPacket::Decode4
	mov dword ptr [ebp+0x1C0],eax

 Block94:
	push offset MobStat::MS_Disable
	lea ecx,[esp+0x18]
	push ecx
	lea ecx,[esp+0x40]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block96

 Block95:
	mov ecx,ebx
	call CInPacket::Decode1
	movzx edx,al
	mov ecx,ebx
	mov dword ptr [ebp+0x218],edx
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [ebp+0x21C],eax

 Block96:
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 0x18
}
}
// SecondaryStat::_ZtlSecurePut_nItemMADR
__SUB_CLASS(00327300, __fastcall, 7639, SecondaryStat, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0xA8]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0xB0],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// get_real_equip
_SUB_EXCEPTION_HANDLER(33E390)
__SUB(0033E390, __cdecl, 131970, void, const CharacterData &, ZRef<GW_ItemSlotPet> *, ZRef<GW_ItemSlotBase> *, ZRef<GW_ItemSlotBase> *, ZRef<GW_ItemSlotBase> *, ZRef<GW_ItemSlotBase> *, long, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_33E390
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xB8
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC8]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [ebp+8]
	mov ecx,dword ptr [esi+0x35]
	movzx eax,byte ptr [esi+0x11]
	push ecx
	lea edx,[esi+0x33]
	push edx
	mov dword ptr [esp+0x70],eax
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	mov ecx,esi
	mov bl,al
	call CharacterData::GetIncLevel
	mov edx,dword ptr [esi+0x3D]
	movzx ecx,bl
	add eax,ecx
	mov dword ptr [esp+0x6C],eax
	push edx
	lea eax,[esi+0x39]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movsx edx,word ptr [esi+0xF7]
	movsx ecx,ax
	mov eax,dword ptr [esi+0x45]
	push eax
	lea edi,[esi+0x41]
	push edi
	mov dword ptr [esp+0x74],ecx
	mov dword ptr [esp+0x88],edx
	call _ZtlSecureFuseHelper<short>::call
	mov edx,dword ptr [esi+0x4D]
	movsx ecx,ax
	push edx
	lea ebx,[esi+0x49]
	push ebx
	mov dword ptr [esp+0x68],ecx
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esi+0x55]
	cwde
	mov dword ptr [esp+0x70],eax
	lea eax,[esi+0x51]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esi+0x5D]
	movsx edx,ax
	lea eax,[esi+0x59]
	push ecx
	push eax
	mov dword ptr [esp+0x7C],edx
	call _ZtlSecureFuseHelper<short>::call
	movsx edx,ax
	mov eax,dword ptr [esi+0xB1]
	push eax
	lea ecx,[esi+0xAD]
	push ecx
	mov dword ptr [esp+0x7C],edx
	call _ZtlSecureFuseHelper<short>::call
	movsx edx,ax
	mov eax,dword ptr [esi+0x45]
	push eax
	push edi
	mov dword ptr [esp+0xAC],edx
	call _ZtlSecureFuseHelper<short>::call
	mov edi,dword ptr [ebp+0x20]
	movsx ecx,ax
	imul ecx,edi
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov edx,dword ptr [esi+0x55]
	add dword ptr [esp+0x88],ecx
	push edx
	lea eax,[esi+0x51]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add esp,0x40
	imul ecx,edi
	mov eax,0x51EB851F
	imul ecx
	mov ecx,dword ptr [esi+0x4D]
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	push ecx
	add eax,edx
	add dword ptr [esp+0x58],eax
	push ebx
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	imul ecx,edi
	mov eax,0x51EB851F
	imul ecx
	mov ecx,dword ptr [esi+0x5D]
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add dword ptr [esp+0x60],eax
	push ecx
	lea eax,[esi+0x59]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	imul ecx,edi
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	xor ecx,ecx
	shr eax,0x1F
	add eax,edx
	add dword ptr [esp+0x5C],eax
	mov edx,dword ptr [ebp+0x14]
	mov eax,dword ptr [edx+4]
	add esp,0x10
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x10],ecx
	mov dword ptr [esp+0x14],ecx
	mov dword ptr [esp+0x1C],ecx
	mov dword ptr [esp+0x34],ecx
	mov dword ptr [esp+0x3C],ecx
	mov dword ptr [esp+0x2C],ecx
	mov dword ptr [esp+0x38],ecx
	cmp eax,ecx
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	mov edi,dword ptr [ebp+0x14]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [edi+4],0

 Block5:
	mov eax,dword ptr [ebp+0x14]
	mov edi,dword ptr [ebp+0x10]
	push eax
	mov ecx,edi
	call ZRef<GW_ItemSlotBase>::op_assign_copy
	call Util::FTGetNow
	lea ebx,[edi+0xC]
	mov dword ptr [esp+0xA0],eax
	mov dword ptr [esp+0xA4],edx
	mov dword ptr [esp+0x20],0xFFFFFFFF
	mov dword ptr [esp+0x30],1
	mov dword ptr [esp+0x70],ebx
	mov dword ptr [esp+0x5C],ebx
	mov edi,edi

 Block6:
	mov eax,dword ptr [esp+0x20]
	cmp eax,dword ptr [ebp+0x24]
	je Block29

 Block7:
	cmp eax,dword ptr [ebp+0x28]
	je Block29

 Block8:
	push eax
	push 1
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,esi
	call CharacterData::GetItem
	xor edi,edi
	push eax
	lea ecx,[ebx-4]
	mov dword ptr [esp+0xD4],edi
	call ZRef<GW_ItemSlotBase>::op_assign_copy
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0xD0],0xFFFFFFFF
	cmp eax,edi
	je Block13

 Block9:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block10:
	mov edx,dword ptr [esp+0x44]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x44]
	cmp ecx,edi
	je Block12

 Block11:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block12:
	mov dword ptr [esp+0x44],edi

 Block13:
	cmp dword ptr [ebx],edi
	je Block27

 Block14:
	cmp dword ptr [esp+0x20],0xFFFFFFE2
	je Block27

 Block15:
	cmp dword ptr [esp+0x20],0xFFFFFFDA
	je Block27

 Block16:
	cmp dword ptr [esp+0x20],0xFFFFFFF2
	je Block20

 Block17:
	cmp dword ptr [esp+0x30],0xE
	je Block27

 Block18:
	mov eax,dword ptr [esp+0x30]
	cmp eax,0x14
	jle Block21

 Block19:
	cmp eax,0x30
	jle Block27

 Block20:
	mov eax,dword ptr [esp+0x30]

 Block21:
	lea ecx,[esp+0xA0]
	push ecx
	push eax
	mov ecx,esi
	call CharacterData::IsEquipSlotExpired
	test eax,eax
	jne Block27

 Block22:
	mov edi,dword ptr [ebx]
	mov edx,dword ptr [edi+0xF5]
	mov dword ptr [esp+0x24],edi
	add edi,0x49
	push edx
	lea eax,[edi+0xA4]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block27

 Block23:
	mov ecx,edi
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niSTR
	movsx ecx,ax
	add dword ptr [esp+0x1C],ecx
	mov ecx,edi
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niDEX
	movsx edx,ax
	add dword ptr [esp+0x10],edx
	mov ecx,edi
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niINT
	cwde
	add dword ptr [esp+0x14],eax
	mov ecx,edi
	call GW_ItemSlotEquipBase::_ZtlSecureGet_niLUK
	movsx ecx,ax
	add dword ptr [esp+0x18],ecx
	mov ecx,dword ptr [esp+0x24]
	add ecx,0xC
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	test eax,eax
	je Block27

 Block24:
	mov ecx,eax
	call CItemInfo::EQUIPITEM::_ZtlSecureGet_nrLevel
	mov ecx,eax
	mov ebx,dword ptr [esp+0x24]
	dec ecx
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x28]
	push edx
	add ebx,0x105
	push edi
	mov ecx,ebx
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nSocket1
	cwde
	push eax
	call ApplySocketOption
	add esp,0x18
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	push edi
	mov ecx,ebx
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nSocket2
	movsx edx,ax
	push edx
	call ApplySocketOption
	add esp,0x18
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x44]
	push eax
	push edi
	mov ecx,ebx
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nSocket1
	movsx ecx,ax
	push ecx
	call ApplySocketOptionR
	add esp,0x18
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x44]
	push edx
	push edi
	mov ecx,ebx
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nSocket2
	cwde
	push eax
	call ApplySocketOptionR
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x78]
	add esp,0x18
	call eax
	test eax,eax
	je Block26

 Block25:
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	push edi
	mov ecx,ebx
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption1
	movsx edx,ax
	push edx
	call ApplyItemOption
	add esp,0x18
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x14]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x28]
	push eax
	push edi
	mov ecx,ebx
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption2
	movsx ecx,ax
	push ecx
	call ApplyItemOption
	add esp,0x18
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push edi
	mov ecx,ebx
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption3
	cwde
	push eax
	call ApplyItemOption
	add esp,0x18
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x44]
	push ecx
	push edi
	mov ecx,ebx
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption1
	movsx edx,ax
	push edx
	call ApplyItemOptionR
	add esp,0x18
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x44]
	push eax
	push edi
	mov ecx,ebx
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption2
	movsx ecx,ax
	push ecx
	call ApplyItemOptionR
	add esp,0x18
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x44]
	push edx
	push edi
	mov ecx,ebx
	call GW_ItemSlotEquipOpt::_ZtlSecureGet_nOption3
	cwde
	push eax
	call ApplyItemOptionR
	add esp,0x18

 Block26:
	mov ebx,dword ptr [esp+0x5C]

 Block27:
	mov eax,dword ptr [esp+0x30]
	dec dword ptr [esp+0x20]
	inc eax
	add ebx,8
	cmp eax,0x3B
	mov dword ptr [esp+0x5C],ebx
	mov dword ptr [esp+0x30],eax
	jle Block6

 Block28:
	mov ebx,dword ptr [ebp+0x14]
	mov eax,0xFFFFFF9B
	lea ecx,[esi+0x349]
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x30],1
	add ebx,0xC
	mov dword ptr [esp+0x24],ecx
	jmp Block36

 Block29:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block27

 Block30:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block33

 Block31:
	mov eax,dword ptr [ebx]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	je Block33

 Block32:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block33:
	mov dword ptr [ebx],0
	jmp Block27

 Block35:
	mov eax,dword ptr [esp+0x20]

 Block36:
	cmp eax,dword ptr [ebp+0x24]
	je Block62

 Block37:
	cmp eax,dword ptr [ebp+0x28]
	je Block62

 Block38:
	mov edx,dword ptr [esp+0x20]
	push edx
	push 1
	lea eax,[esp+0x48]
	push eax
	mov ecx,esi
	call CharacterData::GetItem
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov dword ptr [esp+0xD0],1
	test eax,eax
	je Block40

 Block39:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block40:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block45

 Block41:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block44

 Block42:
	mov eax,dword ptr [ebx]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	je Block44

 Block43:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block44:
	mov dword ptr [ebx],0

 Block45:
	mov eax,dword ptr [esp+0x44]
	mov ecx,dword ptr [edi+4]
	mov dword ptr [ebx],ecx
	mov dword ptr [esp+0xD0],0xFFFFFFFF
	test eax,eax
	je Block50

 Block46:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block49

 Block47:
	mov edx,dword ptr [esp+0x44]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x44]
	test ecx,ecx
	je Block49

 Block48:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block49:
	mov dword ptr [esp+0x44],0

 Block50:
	cmp dword ptr [ebx],0
	je Block67

 Block51:
	cmp dword ptr [esp+0x20],0xFFFFFF7E
	je Block67

 Block52:
	cmp dword ptr [esp+0x20],0xFFFFFF76
	je Block67

 Block53:
	cmp dword ptr [esp+0x20],0xFFFFFF8E
	je Block57

 Block54:
	cmp dword ptr [esp+0x30],0xE
	je Block67

 Block55:
	mov eax,dword ptr [esp+0x30]
	cmp eax,0x14
	jle Block58

 Block56:
	cmp eax,0x30
	jle Block67

 Block57:
	mov eax,dword ptr [esp+0x30]

 Block58:
	add eax,0xFFFFFFC5
	jne Block60

 Block59:
	mov ecx,dword ptr [esp+0x24]
	lea eax,[esp+0xA0]
	push eax
	push ecx
	call dword ptr [ZImports::_CompareFileTime]
	test eax,eax
	jl Block67

 Block60:
	mov edi,dword ptr [ebx]
	mov edx,dword ptr [edi+0xF5]
	push edx
	lea eax,[edi+0xED]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block67

 Block61:
	mov ecx,dword ptr [edi+0x59]
	push ecx
	lea edx,[edi+0x55]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [edi+0x61]
	movzx eax,ax
	cwde
	add dword ptr [esp+0x24],eax
	push ecx
	lea edx,[edi+0x5D]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [edi+0x69]
	movzx eax,ax
	cwde
	add dword ptr [esp+0x20],eax
	push ecx
	lea edx,[edi+0x65]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [edi+0x71]
	movzx eax,ax
	cwde
	add dword ptr [esp+0x2C],eax
	push ecx
	add edi,0x6D
	push edi
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx edx,ax
	add esp,0x20
	add dword ptr [esp+0x18],edx
	jmp Block67

 Block62:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block67

 Block63:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block66

 Block64:
	mov eax,dword ptr [ebx]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	je Block66

 Block65:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block66:
	mov dword ptr [ebx],0

 Block67:
	mov eax,dword ptr [esp+0x30]
	dec dword ptr [esp+0x20]
	add dword ptr [esp+0x24],8
	inc eax
	add ebx,8
	cmp eax,0x3B
	mov dword ptr [esp+0x30],eax
	jle Block35

 Block68:
	mov ebx,dword ptr [ebp+0x18]
	lea eax,[esi-0x1BFF]
	mov dword ptr [esp+0x28],0xFFFFFC18
	add ebx,4
	mov dword ptr [esp+0x24],eax

 Block69:
	mov ecx,dword ptr [esp+0x28]
	push ecx
	push 1
	lea edx,[esp+0x48]
	push edx
	mov ecx,esi
	call CharacterData::GetItem
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov dword ptr [esp+0xD0],2
	test eax,eax
	je Block71

 Block70:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block71:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block76

 Block72:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block75

 Block73:
	mov eax,dword ptr [ebx]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	je Block75

 Block74:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block75:
	mov dword ptr [ebx],0

 Block76:
	mov eax,dword ptr [edi+4]
	mov dword ptr [ebx],eax
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0xD0],0xFFFFFFFF
	test eax,eax
	je Block81

 Block77:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block80

 Block78:
	mov ecx,dword ptr [esp+0x44]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x44]
	test ecx,ecx
	je Block80

 Block79:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block80:
	mov dword ptr [esp+0x44],0

 Block81:
	cmp dword ptr [ebx],0
	je Block86

 Block82:
	mov ecx,dword ptr [esp+0x28]
	add ecx,0xFFFFFFC5
	jne Block84

 Block83:
	mov eax,dword ptr [esp+0x24]
	lea edx,[esp+0xA0]
	push edx
	push eax
	call dword ptr [ZImports::_CompareFileTime]
	test eax,eax
	jl Block86

 Block84:
	mov edi,dword ptr [ebx]
	mov ecx,dword ptr [edi+0xF5]
	push ecx
	lea edx,[edi+0xED]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block86

 Block85:
	mov eax,dword ptr [edi+0x59]
	push eax
	lea ecx,[edi+0x55]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx edx,ax
	mov eax,dword ptr [edi+0x61]
	add dword ptr [esp+0x24],edx
	push eax
	lea ecx,[edi+0x5D]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx edx,ax
	mov eax,dword ptr [edi+0x69]
	add dword ptr [esp+0x20],edx
	push eax
	lea ecx,[edi+0x65]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx edx,ax
	mov eax,dword ptr [edi+0x71]
	add dword ptr [esp+0x2C],edx
	push eax
	add edi,0x6D
	push edi
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	add esp,0x20
	add dword ptr [esp+0x18],ecx

 Block86:
	mov eax,dword ptr [esp+0x28]
	sub dword ptr [esp+0x24],8
	dec eax
	add ebx,8
	cmp eax,0xFFFFFC14
	mov dword ptr [esp+0x28],eax
	jg Block69

 Block87:
	mov ebx,dword ptr [ebp+0x1C]
	add ebx,4
	lea edx,[esi-0x1F1F]
	mov dword ptr [esp+0x28],0xFFFFFBB4
	mov dword ptr [esp+0xA8],ebx
	mov dword ptr [esp+0x24],edx
	lea esp,[esp]

 Block88:
	mov eax,dword ptr [esp+0x28]
	push eax
	push 1
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,esi
	call CharacterData::GetItem
	mov edi,eax
	mov eax,dword ptr [edi+4]
	mov dword ptr [esp+0xD0],3
	test eax,eax
	je Block90

 Block89:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block90:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block95

 Block91:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block94

 Block92:
	mov eax,dword ptr [ebx]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	je Block94

 Block93:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block94:
	mov dword ptr [ebx],0

 Block95:
	mov eax,dword ptr [esp+0x44]
	mov ecx,dword ptr [edi+4]
	mov dword ptr [ebx],ecx
	mov dword ptr [esp+0xD0],0xFFFFFFFF
	test eax,eax
	je Block100

 Block96:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block99

 Block97:
	mov edx,dword ptr [esp+0x44]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x44]
	test ecx,ecx
	je Block99

 Block98:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block99:
	mov dword ptr [esp+0x44],0

 Block100:
	cmp dword ptr [ebx],0
	je Block105

 Block101:
	mov eax,dword ptr [esp+0x28]
	add eax,0xFFFFFFC5
	jne Block103

 Block102:
	mov edx,dword ptr [esp+0x24]
	lea ecx,[esp+0xA0]
	push ecx
	push edx
	call dword ptr [ZImports::_CompareFileTime]
	test eax,eax
	jl Block105

 Block103:
	mov edi,dword ptr [ebx]
	mov eax,dword ptr [edi+0xF5]
	push eax
	lea ecx,[edi+0xED]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block105

 Block104:
	mov edx,dword ptr [edi+0x59]
	push edx
	lea eax,[edi+0x55]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	mov edx,dword ptr [edi+0x61]
	movzx eax,ax
	movsx ecx,ax
	add dword ptr [esp+0x24],ecx
	push edx
	lea eax,[edi+0x5D]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	mov edx,dword ptr [edi+0x69]
	movzx eax,ax
	movsx ecx,ax
	add dword ptr [esp+0x20],ecx
	push edx
	lea eax,[edi+0x65]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	mov edx,dword ptr [edi+0x71]
	movzx eax,ax
	movsx ecx,ax
	add dword ptr [esp+0x2C],ecx
	push edx
	add edi,0x6D
	push edi
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	cwde
	add esp,0x20
	add dword ptr [esp+0x18],eax

 Block105:
	mov eax,dword ptr [esp+0x28]
	sub dword ptr [esp+0x24],8
	dec eax
	add ebx,8
	cmp eax,0xFFFFFBAF
	mov dword ptr [esp+0x28],eax
	jg Block88

 Block106:
	xor ebx,ebx
	push 0x64
	lea ecx,[esp+0xB0]
	mov dword ptr [esp+0xB0],0
	mov dword ptr [esp+0xB4],ebx
	mov dword ptr [esp+0xB8],0x1F
	mov dword ptr [esp+0xBC],ebx
	call ZMap<long, EQUIPPED_SETITEM, long>::_CalcAutoGrow
	mov edi,dword ptr [esp+0x70]
	mov dword ptr [esp+0xD0],4
	mov dword ptr [esp+0x24],0x3B
	lea ebx,[ebx]

 Block107:
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block110

 Block108:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	mov eax,dword ptr [eax+0x218]
	cmp eax,ebx
	je Block110

 Block109:
	mov dword ptr [esp+0x48],ebx
	mov dword ptr [esp+0x44],ebx
	lea ecx,[esp+0x40]
	push ecx
	mov edx,ecx
	push edx
	lea ecx,[esp+0xB4]
	mov byte ptr [esp+0xD8],5
	mov dword ptr [esp+0x48],eax
	call ZMap<long, EQUIPPED_SETITEM, long>::GetAt
	mov eax,dword ptr [edi]
	inc dword ptr [esp+0x44]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push 0xFFFFFFFF
	lea ecx,[esp+0x4C]
	mov esi,eax
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],esi
	lea eax,[esp+0x40]
	mov ecx,eax
	push eax
	push ecx
	lea ecx,[esp+0xB4]
	call ZMap<long, EQUIPPED_SETITEM, long>::Insert
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0xD0],4
	call ZArray<long>::RemoveAll

 Block110:
	add edi,8
	sub dword ptr [esp+0x24],1
	jne Block107

 Block111:
	lea ecx,[esp+0xAC]
	call ZMap<long, EQUIPPED_SETITEM, long>::GetHeadPosition
	mov dword ptr [esp+0x24],eax
	cmp eax,ebx
	je Block128

 Block112:
	jmp Block114

 Block114:
	mov dword ptr [esp+0x84],ebx
	mov dword ptr [esp+0x7C],ebx
	mov dword ptr [esp+0x80],ebx
	lea edx,[esp+0x7C]
	push edx
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0xB4]
	mov byte ptr [esp+0xD8],6
	call ZMap<long, EQUIPPED_SETITEM, long>::GetNext
	mov dword ptr [esp+0x44],ebx
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[esp+0x80]
	push edx
	add ecx,0x9C
	mov byte ptr [esp+0xD8],7
	call ZMap<long, ZRef<CItemInfo::SETITEMINFO>, long>::GetAt
	mov edx,dword ptr [esp+0x44]
	test eax,eax
	je Block122

 Block115:
	mov edi,dword ptr [esp+0x80]
	xor ecx,ecx
	cmp edi,ebx
	jle Block122

 Block116:
	add edx,0xC

 Block117:
	mov eax,dword ptr [edx]
	cmp eax,ebx
	je Block120

 Block118:
	cmp ecx,0x3C
	ja Block120

 Block119:
	movsx esi,word ptr [eax]
	add dword ptr [esp+0x1C],esi
	movsx esi,word ptr [eax+4]
	add dword ptr [esp+0x10],esi
	movsx esi,word ptr [eax+2]
	movsx eax,word ptr [eax+6]
	add dword ptr [esp+0x14],esi
	add dword ptr [esp+0x18],eax
	xor ebx,ebx

 Block120:
	inc ecx
	add edx,8
	cmp ecx,edi
	jl Block117

 Block121:
	mov edx,dword ptr [esp+0x44]

 Block122:
	mov byte ptr [esp+0xD0],6
	cmp edx,ebx
	je Block127

 Block123:
	lea esi,[edx-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block126

 Block124:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block126

 Block125:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block126:
	mov dword ptr [esp+0x44],ebx

 Block127:
	lea ecx,[esp+0x84]
	mov byte ptr [esp+0xD0],4
	call ZArray<long>::RemoveAll
	cmp dword ptr [esp+0x24],ebx
	jne Block114

 Block128:
	mov ebx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x50]
	add ecx,ebx
	imul ecx,dword ptr [esp+0x38]
	mov eax,0x51EB851F
	imul ecx
	mov eax,dword ptr [esp+0x14]
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov edx,dword ptr [esp+0x54]
	add edx,eax
	imul edx,dword ptr [esp+0x2C]
	mov eax,0x51EB851F
	imul edx
	mov eax,dword ptr [esp+0x10]
	sar edx,5
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	mov edx,dword ptr [esp+0x58]
	add edx,eax
	imul edx,dword ptr [esp+0x3C]
	mov eax,0x51EB851F
	imul edx
	mov eax,dword ptr [esp+0x18]
	sar edx,5
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	mov edx,dword ptr [esp+0x4C]
	add edx,eax
	imul edx,dword ptr [esp+0x34]
	add dword ptr [esp+0x14],esi
	add dword ptr [esp+0x10],edi
	mov eax,0x51EB851F
	imul edx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add ebx,ecx
	add dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x90],ecx
	mov dword ptr [esp+0x94],esi
	mov dword ptr [esp+0x30],edi
	mov dword ptr [esp+0x5C],eax
	mov dword ptr [esp+0x1C],ebx

 Block129:
	mov ebx,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x24],0
	mov dword ptr [esp+0x20],1
	lea ebx,[ebx]

 Block130:
	mov eax,dword ptr [esp+0x20]
	mov edx,dword ptr [ebp+0x10]
	lea ecx,[eax*8]
	mov esi,dword ptr [ecx+edx+4]
	mov dword ptr [esp+0x28],ecx
	test esi,esi
	je Block147

 Block131:
	xor edi,edi
	mov dword ptr [esp+0x80],edi
	mov byte ptr [esp+0xD0],8
	cmp eax,0xE
	jne Block135

 Block132:
	mov edi,dword ptr [ebp+0xC]
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block134

 Block133:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block134:
	mov edi,dword ptr [edi+4]
	mov dword ptr [esp+0x80],edi
	jmp Block158

 Block135:
	cmp eax,0x1E
	jne Block152

 Block136:
	mov edi,dword ptr [ebp+0xC]
	mov eax,dword ptr [edi+0xC]
	test eax,eax
	je Block138

 Block137:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block138:
	mov edi,dword ptr [edi+0xC]

 Block139:
	mov dword ptr [esp+0x80],edi

 Block140:
	mov edx,dword ptr [ebp+0x10]
	mov eax,dword ptr [esi+0xF5]
	push edx
	push eax
	lea ecx,[esi+0xED]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	push eax
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x74],esp
	mov dword ptr [eax+4],edi
	test edi,edi
	je Block142

 Block141:
	add edi,4
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block142:
	mov edx,dword ptr [esp+0x88]
	mov ecx,dword ptr [esp+0x60]
	mov eax,dword ptr [esp+0x2C]
	push edx
	mov edx,dword ptr [esp+0x2C]
	add eax,ecx
	mov ecx,dword ptr [esp+0x28]
	push eax
	mov eax,dword ptr [esp+0x70]
	add edx,eax
	mov eax,dword ptr [esp+0x6C]
	push edx
	mov edx,dword ptr [esp+0x78]
	add ecx,edx
	mov edx,dword ptr [esp+0x98]
	push ecx
	lea ecx,[ebx+eax]
	mov eax,dword ptr [esp+0x88]
	push ecx
	mov ecx,dword ptr [esp+0x94]
	push edx
	mov edx,dword ptr [esp+0x94]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edx
	call CItemInfo::IsAbleToEquip
	test eax,eax
	je Block216

 Block143:
	mov edi,dword ptr [esp+0x80]
	mov byte ptr [esp+0xD0],4
	test edi,edi
	je Block147

 Block144:
	lea esi,[edi+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block146

 Block145:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block146:
	mov dword ptr [esp+0x80],0

 Block147:
	mov eax,dword ptr [ebp+0x14]
	mov ecx,dword ptr [esp+0x28]
	mov esi,dword ptr [ecx+eax+4]
	lea eax,[ecx+eax+4]
	mov dword ptr [esp+0x70],eax
	test esi,esi
	je Block186

 Block148:
	xor edi,edi
	mov dword ptr [esp+0x8C],edi
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xD0],0xA
	cmp eax,0xE
	jne Block174

 Block149:
	mov edi,dword ptr [ebp+0xC]
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block151

 Block150:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block151:
	mov edi,dword ptr [edi+4]
	mov dword ptr [esp+0x8C],edi
	jmp Block194

 Block152:
	cmp eax,0x26
	jne Block156

 Block153:
	mov edi,dword ptr [ebp+0xC]
	mov eax,dword ptr [edi+0x14]
	test eax,eax
	je Block155

 Block154:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block155:
	mov edi,dword ptr [edi+0x14]
	jmp Block139

 Block156:
	cmp eax,0x14
	jle Block158

 Block157:
	cmp eax,0x30
	jle Block140

 Block158:
	mov eax,dword ptr [ebp+0x10]
	mov ecx,dword ptr [esi+0xF5]
	push eax
	push ecx
	lea edx,[esi+0xED]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	push eax
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x74],esp
	mov dword ptr [eax+4],edi
	test edi,edi
	je Block160

 Block159:
	add edi,4
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block160:
	mov eax,dword ptr [esi+0x71]
	push eax
	lea ecx,[esi+0x6D]
	push ecx
	mov byte ptr [esp+0xEC],9
	call _ZtlSecureFuseHelper<short>::call
	mov edx,dword ptr [esi+0x69]
	movzx edi,ax
	push edx
	lea eax,[esi+0x65]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	mov edx,dword ptr [esi+0x61]
	movzx ecx,ax
	push edx
	lea eax,[esi+0x5D]
	push eax
	mov dword ptr [esp+0x9C],ecx
	call _ZtlSecureFuseHelper<short>::call
	mov edx,dword ptr [esi+0x59]
	movzx ecx,ax
	push edx
	lea eax,[esi+0x55]
	push eax
	mov dword ptr [esp+0xCC],ecx
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esp+0xA8]
	add esp,0x20
	push ecx
	mov ecx,dword ptr [esp+0x30]
	movsx edx,di
	sub ecx,edx
	add ecx,dword ptr [esp+0x64]
	movsx edx,word ptr [esp+0x88]
	push ecx
	mov ecx,dword ptr [esp+0x30]
	sub ecx,edx
	add ecx,dword ptr [esp+0x70]
	movsx edx,word ptr [esp+0xB4]
	push ecx
	mov ecx,dword ptr [esp+0x30]
	movzx eax,ax
	sub ecx,edx
	add ecx,dword ptr [esp+0x78]
	movsx edx,ax
	push ecx
	mov ecx,dword ptr [esp+0x9C]
	mov eax,ebx
	sub eax,edx
	add eax,dword ptr [esp+0x74]
	mov edx,dword ptr [esp+0x88]
	push eax
	mov eax,dword ptr [esp+0x94]
	push ecx
	mov ecx,dword ptr [esp+0x94]
	push edx
	push eax
	push ecx
	mov byte ptr [esp+0x108],8
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::IsAbleToEquip
	test eax,eax
	jne Block143

 Block161:
	mov ecx,dword ptr [esi+0x59]
	push ecx
	lea edx,[esi+0x55]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esi+0x69]
	movzx eax,ax
	cwde
	push ecx
	lea edx,[esi+0x65]
	sub ebx,eax
	push edx
	mov dword ptr [esp+0x2C],ebx
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esi+0x61]
	movzx eax,ax
	cwde
	sub dword ptr [esp+0x24],eax
	push ecx
	lea edx,[esi+0x5D]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esi+0x71]
	movzx eax,ax
	cwde
	sub dword ptr [esp+0x28],eax
	push ecx
	lea edx,[esi+0x6D]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	cwde
	sub dword ptr [esp+0x38],eax
	add esp,0x20
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	test eax,eax
	je Block165

 Block162:
	mov edx,dword ptr [esp+0x30]
	sub dword ptr [esp+0x10],edx
	mov edx,dword ptr [eax+0x68]
	mov ecx,dword ptr [esp+0x94]
	sub dword ptr [esp+0x14],ecx
	sub ebx,dword ptr [esp+0x90]
	mov ecx,dword ptr [esp+0x5C]
	sub dword ptr [esp+0x18],ecx
	push edx
	add eax,0x60
	push eax
	mov dword ptr [esp+0x24],ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	dec ecx
	mov eax,0x66666667
	imul ecx
	sar edx,2
	add esp,8
	mov edi,edx
	lea eax,[esp+0x18]
	push eax
	shr edi,0x1F
	add edi,edx
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [esi+0x12D]
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x28]
	push eax
	push edi
	push ecx
	lea edx,[esi+0x129]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	cwde
	add esp,8
	push eax
	call ClearSocketOption
	add esp,0x18
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x14]
	push edx
	mov edx,dword ptr [esi+0x135]
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	push edi
	push edx
	lea eax,[esi+0x131]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add esp,8
	push ecx
	call ClearSocketOption
	add esp,0x18
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x40]
	push eax
	mov eax,dword ptr [esi+0x12D]
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x44]
	push edx
	push edi
	push eax
	lea ecx,[esi+0x129]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movsx edx,ax
	add esp,8
	push edx
	call ClearSocketOptionR
	add esp,0x18
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,dword ptr [esi+0x135]
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x44]
	push eax
	push edi
	push ecx
	lea edx,[esi+0x131]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	cwde
	add esp,8
	push eax
	call ClearSocketOptionR
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x78]
	add esp,0x18
	mov ecx,esi
	call eax
	test eax,eax
	je Block164

 Block163:
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x14]
	push edx
	mov edx,dword ptr [esi+0x115]
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	push edi
	push edx
	lea eax,[esi+0x111]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add esp,8
	push ecx
	call ClearItemOption
	add esp,0x18
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x14]
	push eax
	mov eax,dword ptr [esi+0x11D]
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push edi
	push eax
	lea ecx,[esi+0x119]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movsx edx,ax
	add esp,8
	push edx
	call ClearItemOption
	add esp,0x18
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [esi+0x125]
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x28]
	push eax
	push edi
	push ecx
	lea edx,[esi+0x121]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	cwde
	add esp,8
	push eax
	call ClearItemOption
	add esp,0x18
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x40]
	push edx
	mov edx,dword ptr [esi+0x115]
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x44]
	push ecx
	push edi
	push edx
	lea eax,[esi+0x111]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add esp,8
	push ecx
	call ClearItemOptionR
	add esp,0x18
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x34]
	mov eax,dword ptr [esi+0x11D]
	push ecx
	lea edx,[esp+0x44]
	push edx
	push edi
	push eax
	lea ecx,[esi+0x119]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movsx edx,ax
	add esp,8
	push edx
	call ClearItemOptionR
	add esp,0x18
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,dword ptr [esi+0x125]
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x44]
	push eax
	push edi
	push ecx
	add esi,0x121
	push esi
	call _ZtlSecureFuseHelper<short>::call
	movsx edx,ax
	add esp,8
	push edx
	call ClearItemOptionR
	mov ebx,dword ptr [esp+0x34]
	add esp,0x18

 Block164:
	mov eax,dword ptr [esp+0x50]
	lea ecx,[ebx+eax]
	imul ecx,dword ptr [esp+0x38]
	mov eax,0x51EB851F
	imul ecx
	mov ecx,dword ptr [esp+0x54]
	sar edx,5
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	mov edx,dword ptr [esp+0x14]
	add ecx,edx
	imul ecx,dword ptr [esp+0x2C]
	mov eax,0x51EB851F
	imul ecx
	mov eax,dword ptr [esp+0x58]
	mov ecx,dword ptr [esp+0x10]
	add ecx,eax
	imul ecx,dword ptr [esp+0x3C]
	sar edx,5
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x30],eax
	mov eax,dword ptr [esp+0x18]
	lea ecx,[eax+edx]
	imul ecx,dword ptr [esp+0x34]
	add dword ptr [esp+0x14],edi
	mov eax,0x51EB851F
	imul ecx
	mov ecx,dword ptr [esp+0x30]
	add dword ptr [esp+0x10],ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add ebx,esi
	add dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x90],esi
	mov dword ptr [esp+0x94],edi
	mov dword ptr [esp+0x5C],eax
	mov dword ptr [esp+0x1C],ebx

 Block165:
	mov eax,dword ptr [ebp+0x10]
	mov edx,dword ptr [esp+0x28]
	lea esi,[edx+eax+4]
	mov eax,dword ptr [esi]
	test eax,eax
	je Block170

 Block166:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block169

 Block167:
	mov eax,dword ptr [esi]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block169

 Block168:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block169:
	mov dword ptr [esi],0

 Block170:
	mov esi,dword ptr [esp+0x80]
	mov dword ptr [esp+0x24],1
	mov byte ptr [esp+0xD0],4
	test esi,esi
	je Block234

 Block171:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block173

 Block172:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block173:
	mov dword ptr [esp+0x80],0
	jmp Block234

 Block174:
	cmp eax,0x1E
	jne Block188

 Block175:
	mov edi,dword ptr [ebp+0xC]
	mov eax,dword ptr [edi+0xC]
	test eax,eax
	je Block177

 Block176:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block177:
	mov edi,dword ptr [edi+0xC]

 Block178:
	mov dword ptr [esp+0x8C],edi

 Block179:
	mov ecx,dword ptr [ebp+0x10]
	mov edx,dword ptr [esi+0xF5]
	push ecx
	push edx
	lea eax,[esi+0xED]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	push eax
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0xB0],esp
	mov dword ptr [eax+4],edi
	test edi,edi
	je Block181

 Block180:
	add edi,4
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block181:
	mov ecx,dword ptr [esp+0x88]
	mov eax,dword ptr [esp+0x60]
	mov edx,dword ptr [esp+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	add edx,eax
	mov eax,dword ptr [esp+0x28]
	push edx
	mov edx,dword ptr [esp+0x70]
	add ecx,edx
	mov edx,dword ptr [esp+0x6C]
	push ecx
	mov ecx,dword ptr [esp+0x78]
	add eax,ecx
	mov ecx,dword ptr [esp+0x98]
	push eax
	lea eax,[ebx+edx]
	mov edx,dword ptr [esp+0x88]
	push eax
	mov eax,dword ptr [esp+0x94]
	push ecx
	mov ecx,dword ptr [esp+0x94]
	push edx
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::IsAbleToEquip
	test eax,eax
	je Block225

 Block182:
	mov edi,dword ptr [esp+0x8C]
	mov byte ptr [esp+0xD0],4
	test edi,edi
	je Block186

 Block183:
	lea esi,[edi+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block185

 Block184:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block185:
	mov dword ptr [esp+0x8C],0

 Block186:
	mov eax,dword ptr [esp+0x20]
	inc eax
	cmp eax,0x3B
	mov dword ptr [esp+0x20],eax
	jle Block130

 Block187:
	jmp Block234

 Block188:
	cmp eax,0x26
	jne Block192

 Block189:
	mov edi,dword ptr [ebp+0xC]
	mov eax,dword ptr [edi+0x14]
	test eax,eax
	je Block191

 Block190:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block191:
	mov edi,dword ptr [edi+0x14]
	jmp Block178

 Block192:
	cmp eax,0x14
	jle Block194

 Block193:
	cmp eax,0x30
	jle Block179

 Block194:
	mov edx,dword ptr [ebp+0x10]
	mov eax,dword ptr [esi+0xF5]
	push edx
	push eax
	lea ecx,[esi+0xED]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	push eax
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0xB0],esp
	mov dword ptr [eax+4],edi
	test edi,edi
	je Block196

 Block195:
	add edi,4
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block196:
	mov edx,dword ptr [esi+0x71]
	push edx
	lea eax,[esi+0x6D]
	push eax
	mov byte ptr [esp+0xEC],0xB
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esi+0x69]
	push ecx
	lea edx,[esi+0x65]
	push edx
	movzx edi,ax
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esi+0x61]
	movzx eax,ax
	push ecx
	lea edx,[esi+0x5D]
	push edx
	mov dword ptr [esp+0xC4],eax
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esi+0x59]
	movzx eax,ax
	push ecx
	lea edx,[esi+0x55]
	push edx
	mov dword ptr [esp+0x94],eax
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esp+0xA8]
	add esp,0x20
	push ecx
	mov ecx,dword ptr [esp+0x30]
	movsx edx,di
	sub ecx,edx
	add ecx,dword ptr [esp+0x64]
	movsx edx,word ptr [esp+0xB0]
	push ecx
	mov ecx,dword ptr [esp+0x30]
	sub ecx,edx
	add ecx,dword ptr [esp+0x70]
	movsx edx,word ptr [esp+0x7C]
	push ecx
	mov ecx,dword ptr [esp+0x30]
	movzx eax,ax
	sub ecx,edx
	add ecx,dword ptr [esp+0x78]
	movsx edx,ax
	push ecx
	mov ecx,dword ptr [esp+0x9C]
	mov eax,ebx
	sub eax,edx
	add eax,dword ptr [esp+0x74]
	mov edx,dword ptr [esp+0x88]
	push eax
	mov eax,dword ptr [esp+0x94]
	push ecx
	mov ecx,dword ptr [esp+0x94]
	push edx
	push eax
	push ecx
	mov byte ptr [esp+0x108],0xA
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::IsAbleToEquip
	test eax,eax
	je Block200

 Block197:
	mov eax,dword ptr [esp+0x20]
	cmp eax,0xB
	jne Block212

 Block198:
	mov edx,dword ptr [esp+0x70]
	mov eax,dword ptr [edx]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x14F8B589
	imul ecx
	sar edx,0xD
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x11
	jne Block182

 Block199:
	mov ecx,dword ptr [ebp+0x10]
	cmp dword ptr [ecx+0x5C],0
	jne Block182

 Block200:
	mov eax,dword ptr [esi+0x59]
	push eax
	lea ecx,[esi+0x55]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx edx,ax
	mov eax,dword ptr [esi+0x69]
	push eax
	lea ecx,[esi+0x65]
	sub ebx,edx
	push ecx
	mov dword ptr [esp+0x2C],ebx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx edx,ax
	mov eax,dword ptr [esi+0x61]
	sub dword ptr [esp+0x24],edx
	push eax
	lea ecx,[esi+0x5D]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx edx,ax
	mov eax,dword ptr [esi+0x71]
	sub dword ptr [esp+0x28],edx
	push eax
	lea ecx,[esi+0x6D]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx edx,ax
	sub dword ptr [esp+0x38],edx
	add esp,0x20
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	test eax,eax
	je Block204

 Block201:
	mov edx,dword ptr [esp+0x30]
	sub dword ptr [esp+0x10],edx
	mov edx,dword ptr [eax+0x68]
	mov ecx,dword ptr [esp+0x94]
	sub dword ptr [esp+0x14],ecx
	sub ebx,dword ptr [esp+0x90]
	mov ecx,dword ptr [esp+0x5C]
	sub dword ptr [esp+0x18],ecx
	push edx
	add eax,0x60
	push eax
	mov dword ptr [esp+0x24],ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	dec ecx
	mov eax,0x66666667
	imul ecx
	sar edx,2
	add esp,8
	mov edi,edx
	lea eax,[esp+0x18]
	push eax
	shr edi,0x1F
	add edi,edx
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [esi+0x12D]
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x28]
	push eax
	push edi
	push ecx
	lea edx,[esi+0x129]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	cwde
	add esp,8
	push eax
	call ClearSocketOption
	add esp,0x18
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x14]
	push edx
	mov edx,dword ptr [esi+0x135]
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	push edi
	push edx
	lea eax,[esi+0x131]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add esp,8
	push ecx
	call ClearSocketOption
	add esp,0x18
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x40]
	push eax
	mov eax,dword ptr [esi+0x12D]
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x44]
	push edx
	push edi
	push eax
	lea ecx,[esi+0x129]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movsx edx,ax
	add esp,8
	push edx
	call ClearSocketOptionR
	add esp,0x18
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,dword ptr [esi+0x135]
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x44]
	push eax
	push edi
	push ecx
	lea edx,[esi+0x131]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	cwde
	add esp,8
	push eax
	call ClearSocketOptionR
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x78]
	add esp,0x18
	mov ecx,esi
	call eax
	test eax,eax
	je Block203

 Block202:
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x14]
	push edx
	mov edx,dword ptr [esi+0x115]
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	push edi
	push edx
	lea eax,[esi+0x111]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add esp,8
	push ecx
	call ClearItemOption
	add esp,0x18
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x14]
	push eax
	mov eax,dword ptr [esi+0x11D]
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push edi
	push eax
	lea ecx,[esi+0x119]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movsx edx,ax
	add esp,8
	push edx
	call ClearItemOption
	add esp,0x18
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [esi+0x125]
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x28]
	push eax
	push edi
	push ecx
	lea edx,[esi+0x121]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	cwde
	add esp,8
	push eax
	call ClearItemOption
	add esp,0x18
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x40]
	push edx
	mov edx,dword ptr [esi+0x115]
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x44]
	push ecx
	push edi
	push edx
	lea eax,[esi+0x111]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	add esp,8
	push ecx
	call ClearItemOptionR
	add esp,0x18
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x34]
	mov eax,dword ptr [esi+0x11D]
	push ecx
	lea edx,[esp+0x44]
	push edx
	push edi
	push eax
	lea ecx,[esi+0x119]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	movsx edx,ax
	add esp,8
	push edx
	call ClearItemOptionR
	add esp,0x18
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,dword ptr [esi+0x125]
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x44]
	push eax
	push edi
	push ecx
	add esi,0x121
	push esi
	call _ZtlSecureFuseHelper<short>::call
	movsx edx,ax
	add esp,8
	push edx
	call ClearItemOptionR
	mov ebx,dword ptr [esp+0x34]
	add esp,0x18

 Block203:
	mov eax,dword ptr [esp+0x50]
	lea ecx,[ebx+eax]
	imul ecx,dword ptr [esp+0x38]
	mov eax,0x51EB851F
	imul ecx
	mov ecx,dword ptr [esp+0x54]
	sar edx,5
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	mov edx,dword ptr [esp+0x14]
	add ecx,edx
	imul ecx,dword ptr [esp+0x2C]
	mov eax,0x51EB851F
	imul ecx
	mov eax,dword ptr [esp+0x58]
	mov ecx,dword ptr [esp+0x10]
	add ecx,eax
	imul ecx,dword ptr [esp+0x3C]
	sar edx,5
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x30],eax
	mov eax,dword ptr [esp+0x18]
	lea ecx,[eax+edx]
	imul ecx,dword ptr [esp+0x34]
	add dword ptr [esp+0x14],edi
	mov eax,0x51EB851F
	imul ecx
	mov ecx,dword ptr [esp+0x30]
	add dword ptr [esp+0x10],ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add ebx,esi
	add dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x90],esi
	mov dword ptr [esp+0x94],edi
	mov dword ptr [esp+0x5C],eax
	mov dword ptr [esp+0x1C],ebx

 Block204:
	mov eax,dword ptr [ebp+0x14]
	mov edx,dword ptr [esp+0x28]
	lea esi,[edx+eax+4]
	mov eax,dword ptr [esi]
	test eax,eax
	je Block209

 Block205:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block208

 Block206:
	mov eax,dword ptr [esi]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block208

 Block207:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block208:
	mov dword ptr [esi],0

 Block209:
	cmp dword ptr [esp+0x8C],0
	mov dword ptr [esp+0x24],1
	mov byte ptr [esp+0xD0],4
	je Block234

 Block210:
	mov edi,dword ptr [esp+0x8C]
	lea esi,[edi+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block233

 Block211:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax
	jmp Block233

 Block212:
	cmp eax,0xA
	jne Block182

 Block213:
	mov edx,dword ptr [esp+0x70]
	mov eax,dword ptr [edx]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsCashItem_1
	test eax,eax
	je Block182

 Block214:
	mov eax,dword ptr [ebp+0x10]
	cmp dword ptr [eax+0x54],0
	je Block200

 Block215:
	jmp Block182

 Block216:
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [ebp+0x10]
	mov eax,dword ptr [ecx+edx+4]
	lea esi,[ecx+edx+4]
	test eax,eax
	je Block221

 Block217:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block220

 Block218:
	mov eax,dword ptr [esi]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block220

 Block219:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block220:
	mov dword ptr [esi],0

 Block221:
	mov esi,dword ptr [esp+0x80]
	mov byte ptr [esp+0xD0],4
	test esi,esi
	je Block234

 Block222:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block224

 Block223:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block224:
	mov dword ptr [esp+0x80],0
	jmp Block234

 Block225:
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [ebp+0x14]
	mov eax,dword ptr [ecx+edx+4]
	lea esi,[ecx+edx+4]
	test eax,eax
	je Block230

 Block226:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block229

 Block227:
	mov eax,dword ptr [esi]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block229

 Block228:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block229:
	mov dword ptr [esi],0

 Block230:
	mov esi,dword ptr [esp+0x8C]
	mov byte ptr [esp+0xD0],4
	test esi,esi
	je Block234

 Block231:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block233

 Block232:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block233:
	mov dword ptr [esp+0x8C],0

 Block234:
	mov edi,0x3E8
	mov dword ptr [esp+0x20],edi

 Block235:
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [esp+0x44],0
	mov byte ptr [esp+0xD0],0xC
	cmp edi,0xE
	je Block240

 Block236:
	cmp edi,0x1E
	jne Block238

 Block237:
	add eax,8
	jmp Block240

 Block238:
	cmp edi,0x26
	jne Block241

 Block239:
	add eax,0x10

 Block240:
	push eax
	lea ecx,[esp+0x44]
	call ZRef<GW_ItemSlotPet>::op_assign_copy

 Block241:
	mov eax,dword ptr [ebp+0x18]
	mov esi,dword ptr [eax+edi*8-0x1F3C]
	test esi,esi
	je Block244

 Block242:
	mov ecx,dword ptr [ebp+0x10]
	mov edx,dword ptr [esi+0xF5]
	push ecx
	push edx
	lea eax,[esi+0xED]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	push eax
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0xB0],esp
	mov dword ptr [eax+4],0
	mov ecx,dword ptr [esi+0x71]
	push ecx
	lea edx,[esi+0x6D]
	push edx
	mov byte ptr [esp+0xEC],0xD
	call _ZtlSecureFuseHelper<short>::call
	movzx edi,ax
	mov eax,dword ptr [esi+0x69]
	push eax
	lea ecx,[esi+0x65]
	push ecx
	call _ZtlSecureFuseHelper<short>::call
	mov edx,dword ptr [esi+0x61]
	movzx ebx,ax
	push edx
	lea eax,[esi+0x5D]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	mov edx,dword ptr [esi+0x59]
	movzx ecx,ax
	push edx
	lea eax,[esi+0x55]
	push eax
	mov dword ptr [esp+0x94],ecx
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esp+0xA8]
	add esp,0x20
	push ecx
	mov ecx,dword ptr [esp+0x30]
	movsx edx,di
	sub ecx,edx
	add ecx,dword ptr [esp+0x64]
	movsx edx,bx
	push ecx
	mov ecx,dword ptr [esp+0x30]
	sub ecx,edx
	add ecx,dword ptr [esp+0x70]
	movsx edx,word ptr [esp+0x7C]
	push ecx
	mov ecx,dword ptr [esp+0x30]
	movzx eax,ax
	sub ecx,edx
	add ecx,dword ptr [esp+0x78]
	movsx edx,ax
	mov eax,dword ptr [esp+0x3C]
	push ecx
	mov ecx,dword ptr [esp+0x9C]
	sub eax,edx
	add eax,dword ptr [esp+0x74]
	mov edx,dword ptr [esp+0x88]
	push eax
	mov eax,dword ptr [esp+0x94]
	push ecx
	mov ecx,dword ptr [esp+0x94]
	push edx
	push eax
	push ecx
	mov byte ptr [esp+0x108],0xC
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::IsAbleToEquip
	test eax,eax
	je Block250

 Block243:
	mov edi,dword ptr [esp+0x20]

 Block244:
	mov ebx,dword ptr [esp+0x44]
	mov byte ptr [esp+0xD0],4
	test ebx,ebx
	je Block248

 Block245:
	lea esi,[ebx+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block247

 Block246:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block247:
	mov dword ptr [esp+0x44],0

 Block248:
	inc edi
	cmp edi,0x3EC
	mov dword ptr [esp+0x20],edi
	jl Block235

 Block249:
	jmp Block259

 Block250:
	mov ecx,dword ptr [esi+0x59]
	push ecx
	lea edx,[esi+0x55]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esi+0x69]
	movzx eax,ax
	cwde
	sub dword ptr [esp+0x24],eax
	push ecx
	lea edx,[esi+0x65]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esi+0x61]
	movzx eax,ax
	cwde
	sub dword ptr [esp+0x24],eax
	push ecx
	lea edx,[esi+0x5D]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esi+0x71]
	movzx eax,ax
	cwde
	sub dword ptr [esp+0x28],eax
	push ecx
	add esi,0x6D
	push esi
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esp+0x40]
	movzx eax,ax
	movsx edx,ax
	mov eax,dword ptr [ebp+0x18]
	sub dword ptr [esp+0x38],edx
	lea esi,[eax+ecx*8-0x1F3C]
	mov eax,dword ptr [esi]
	add esp,0x20
	test eax,eax
	je Block255

 Block251:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block254

 Block252:
	mov eax,dword ptr [esi]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block254

 Block253:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block254:
	mov dword ptr [esi],0

 Block255:
	mov esi,dword ptr [esp+0x44]
	mov dword ptr [esp+0x24],1
	mov byte ptr [esp+0xD0],4
	test esi,esi
	je Block259

 Block256:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block258

 Block257:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block258:
	mov dword ptr [esp+0x44],0

 Block259:
	mov ecx,dword ptr [esp+0xA8]
	mov dword ptr [esp+0x20],0x44C
	mov dword ptr [esp+0x28],ecx

 Block260:
	mov edx,dword ptr [esp+0x28]
	mov esi,dword ptr [edx]
	test esi,esi
	je Block262

 Block261:
	mov eax,dword ptr [ebp+0x10]
	mov ecx,dword ptr [esi+0xF5]
	push eax
	push ecx
	lea edx,[esi+0xED]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	push eax
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0xB0],esp
	mov dword ptr [eax+4],0
	mov eax,dword ptr [esi+0x71]
	push eax
	lea ecx,[esi+0x6D]
	push ecx
	mov byte ptr [esp+0xEC],0xE
	call _ZtlSecureFuseHelper<short>::call
	mov edx,dword ptr [esi+0x69]
	movzx edi,ax
	push edx
	lea eax,[esi+0x65]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esi+0x61]
	push ecx
	lea edx,[esi+0x5D]
	push edx
	movzx ebx,ax
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esi+0x59]
	movzx eax,ax
	push ecx
	lea edx,[esi+0x55]
	push edx
	mov dword ptr [esp+0x94],eax
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [esp+0xA8]
	add esp,0x20
	push ecx
	mov ecx,dword ptr [esp+0x30]
	movsx edx,di
	sub ecx,edx
	add ecx,dword ptr [esp+0x64]
	movsx edx,bx
	push ecx
	mov ecx,dword ptr [esp+0x30]
	sub ecx,edx
	add ecx,dword ptr [esp+0x70]
	movsx edx,word ptr [esp+0x7C]
	push ecx
	mov ecx,dword ptr [esp+0x30]
	movzx eax,ax
	sub ecx,edx
	add ecx,dword ptr [esp+0x78]
	movsx edx,ax
	mov eax,dword ptr [esp+0x3C]
	push ecx
	mov ecx,dword ptr [esp+0x9C]
	sub eax,edx
	add eax,dword ptr [esp+0x74]
	mov edx,dword ptr [esp+0x88]
	push eax
	mov eax,dword ptr [esp+0x94]
	push ecx
	mov ecx,dword ptr [esp+0x94]
	push edx
	push eax
	push ecx
	mov byte ptr [esp+0x108],4
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::IsAbleToEquip
	test eax,eax
	je Block265

 Block262:
	mov eax,dword ptr [esp+0x20]
	add dword ptr [esp+0x28],8
	inc eax
	cmp eax,0x451
	mov dword ptr [esp+0x20],eax
	jl Block260

 Block263:
	cmp dword ptr [esp+0x24],0
	jne Block129

 Block264:
	lea ecx,[esp+0xAC]
	mov dword ptr [esp+0xD0],0xFFFFFFFF
	mov dword ptr [esp+0xAC],0
	call ZMap<long, EQUIPPED_SETITEM, long>::RemoveAll
	mov ecx,dword ptr [esp+0xC8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block265:
	mov edx,dword ptr [esi+0x59]
	push edx
	lea eax,[esi+0x55]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	mov edx,dword ptr [esi+0x69]
	movzx eax,ax
	movsx ecx,ax
	sub dword ptr [esp+0x24],ecx
	push edx
	lea eax,[esi+0x65]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	mov edx,dword ptr [esi+0x61]
	movzx eax,ax
	movsx ecx,ax
	sub dword ptr [esp+0x24],ecx
	push edx
	lea eax,[esi+0x5D]
	push eax
	call _ZtlSecureFuseHelper<short>::call
	mov edx,dword ptr [esi+0x71]
	movzx eax,ax
	movsx ecx,ax
	sub dword ptr [esp+0x28],ecx
	push edx
	add esi,0x6D
	push esi
	call _ZtlSecureFuseHelper<short>::call
	mov esi,dword ptr [esp+0x48]
	movzx eax,ax
	cwde
	sub dword ptr [esp+0x38],eax
	mov eax,dword ptr [esi]
	add esp,0x20
	test eax,eax
	je Block129

 Block266:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block269

 Block267:
	mov eax,dword ptr [esi]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block269

 Block268:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block269:
	mov dword ptr [esi],0
	jmp Block129
}
}
// MobStat::SetFromWhenDoom
__SUB_CLASS_THIS(00324B50, __thiscall, 7773, MobStat, void, const CMobTemplate *) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push ebp
	push esi
	mov ebp,ecx
	push edi
	lea esi,[ebx+0x118]
	lea edi,[ebp+4]
	mov ecx,8
	rep movsd
	mov eax,dword ptr [ebx+0xC0]
	push eax
	lea ecx,[ebx+0xB8]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [ebp+0x24],eax
	mov edx,dword ptr [ebx+0xD8]
	push edx
	lea eax,[ebx+0xD0]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [ebp+0x44],eax
	mov ecx,dword ptr [ebx+0xF0]
	push ecx
	lea edx,[ebx+0xE8]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [ebp+0x64],eax
	mov eax,dword ptr [ebx+0x9C]
	push eax
	lea ecx,[ebx+0x94]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [ebp+0x84],eax
	mov edx,dword ptr [ebx+0x2BC]
	push edx
	add ebx,0x2B4
	push ebx
	call _ZtlSecureFuseHelper<int>::call
	add esp,0x28
	pop edi
	pop esi
	mov dword ptr [ebp+0x220],eax
	pop ebp
	pop ebx
	ret 4
}
}
// ForcedStat::Clear
__SUB_CLASS_THIS0(00327540, __thiscall, 7202, ForcedStat, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov edx,esi
	xor ecx,ecx
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0xC]
	xor ecx,ecx
	mov dword ptr [esi+8],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x18]
	xor ecx,ecx
	mov dword ptr [esi+0x14],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x24]
	xor ecx,ecx
	mov dword ptr [esi+0x20],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x30]
	xor ecx,ecx
	mov dword ptr [esi+0x2C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x3C]
	xor ecx,ecx
	mov dword ptr [esi+0x38],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x48]
	xor ecx,ecx
	mov dword ptr [esi+0x44],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x54]
	xor ecx,ecx
	mov dword ptr [esi+0x50],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x60]
	xor ecx,ecx
	mov dword ptr [esi+0x5C],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x6C]
	xor ecx,ecx
	mov dword ptr [esi+0x68],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x78]
	xor ecx,ecx
	mov dword ptr [esi+0x74],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x84]
	xor ecx,ecx
	mov dword ptr [esi+0x80],eax
	call _ZtlSecureTearHelper<long>::call
	lea edx,[esi+0x90]
	xor ecx,ecx
	mov dword ptr [esi+0x8C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x98],eax
	pop esi
	ret
}
}
// SecondaryStat::GetIncPAD
__SUB_CLASS_THIS(003257A0, __thiscall, 7671, SecondaryStat, long, const CharacterData &) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x14]
	push edi
	push eax
	lea ecx,[esi+0xC]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x13BC]
	mov edx,dword ptr [ecx]
	mov edi,eax
	mov eax,dword ptr [edx+4]
	add esp,8
	call eax
	test al,al
	je Block3

 Block1:
	mov esi,dword ptr [esp+0x10]
	mov ecx,dword ptr [esi+0x3D]
	push ecx
	lea edx,[esi+0x39]
	push edx
	mov dword ptr [esp+0x10],0
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	add esp,8
	lea ecx,[esp+8]
	push ecx
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	dec eax
	neg eax
	sbb eax,eax
	and eax,0xFF67908D
	add eax,0xE66864
	push eax
	push esi
	call CSkillInfo::GetSkillLevel_0
	mov ecx,dword ptr [esp+8]
	test ecx,ecx
	je Block3

 Block2:
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x24]
	push ecx
	add eax,0x1C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp edi,eax
	jl Block4

 Block3:
	mov eax,edi

 Block4:
	pop edi
	pop esi
	pop ecx
	ret 4
}
}
// SecondaryStat::_ZtlSecureGet_nSneak_
__SUB_CLASS0(000FFF40, __fastcall, 7637, SecondaryStat, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x120C]
	push eax
	add ecx,0x1204
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// SecondaryStat::_ZtlSecureGet_nEMMP_
__SUB_CLASS0(000FFEE0, __fastcall, 7637, SecondaryStat, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xFC0]
	push eax
	add ecx,0xFB8
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// BasicStat::ApplySocketOptionR
_SUB_EXCEPTION_HANDLER(32FBE0)
__SUB_CLASS_THIS(0032FBE0, __thiscall, 7625, BasicStat, void, long, long, BasicStatRateOption &) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_32FBE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x24]
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemOptionInfo>::ms_pInstance]
	call CItemOptionInfo::GetSocketOption
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block4

 Block1:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 0xC
}
}
// SecondaryStatRateOption::SecondaryStatRateOption
__SUB_CLASS_THIS0(00320840, __thiscall, 7631, SecondaryStatRateOption, void) {
__asm {

 Block0:
	mov eax,ecx
	xor ecx,ecx
	mov dword ptr [eax+0x14],ecx
	mov dword ptr [eax+0x10],ecx
	mov dword ptr [eax+0xC],ecx
	mov dword ptr [eax+8],ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax],ecx
	ret
}
}
// SecondaryStat::GetPAD
__SUB_CLASS_THIS(00325A70, __thiscall, 7660, SecondaryStat, long, const CharacterData &, long, long, long, long, long *) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+8]
	push edi
	push eax
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,dword ptr [esp+0x1C]
	add esp,8
	push ebx
	mov ecx,esi
	mov ebp,eax
	call SecondaryStat::GetIncPAD
	push ebx
	mov ecx,esi
	mov dword ptr [esp+0x18],eax
	call SecondaryStat::GetIncEPAD
	mov ecx,dword ptr [ebx+0x3D]
	mov edi,eax
	mov eax,dword ptr [esp+0x14]
	add eax,ebp
	add edi,eax
	add edi,dword ptr [esp+0x1C]
	push ecx
	add edi,dword ptr [esp+0x28]
	lea ebp,[ebx+0x39]
	push ebp
	call _ZtlSecureFuseHelper<short>::call
	movsx ecx,ax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,8
	cmp eax,0x23
	je Block3

 Block1:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetBulletPAD
	add edi,eax

 Block3:
	mov ecx,dword ptr [esi+0xC0C]
	lea eax,[esi+0xC04]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block9

 Block4:
	mov edx,dword ptr [ebx+0x3D]
	push edx
	push ebp
	mov dword ptr [esp+0x1C],0
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	movzx eax,ax
	lea ecx,[esp+0x14]
	push ecx
	xor ecx,ecx
	mov edx,0x7D0
	cmp ax,dx
	setne cl
	dec ecx
	and ecx,0xFFF0BDD1
	add ecx,0x1406F40
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push ebx
	call CSkillInfo::GetSkillLevel_0
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block9

 Block5:
	test eax,eax
	jle Block9

 Block6:
	push eax
	call SKILLENTRY::GetLevelData
	mov ebx,eax
	mov edx,dword ptr [ebx+0x168]
	push edx
	lea eax,[ebx+0x160]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0xC0C]
	mov ebp,eax
	push ecx
	lea eax,[esi+0xC04]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,0x10
	cmp eax,ebp
	jge Block8

 Block7:
	mov ebp,eax

 Block8:
	mov edx,dword ptr [ebx+0x174]
	push edx
	add ebx,0x16C
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	imul eax,ebp
	add esp,8
	add edi,eax

 Block9:
	mov eax,dword ptr [esi+0x7F4]
	push eax
	lea ebp,[esi+0x7EC]
	push ebp
	xor ebx,ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jg Block13

 Block10:
	mov ecx,dword ptr [esi+0x86C]
	push ecx
	lea edx,[esi+0x864]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jg Block13

 Block11:
	mov eax,dword ptr [esi+0xF60]
	push eax
	lea ecx,[esi+0xF58]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jg Block13

 Block12:
	mov edx,dword ptr [esi+0xF3C]
	push edx
	lea eax,[esi+0xF34]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block14

 Block13:
	mov ecx,dword ptr [esi+0x7F4]
	push ecx
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x86C]
	mov ebp,eax
	push edx
	lea eax,[esi+0x864]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0xF60]
	push ecx
	lea edx,[esi+0xF58]
	push edx
	mov dword ptr [esp+0x34],eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x2C],eax
	mov eax,dword ptr [esi+0xF3C]
	push eax
	lea ecx,[esi+0xF34]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,eax
	add ebx,dword ptr [esp+0x34]
	add esp,0x20
	add ebx,dword ptr [esp+0x1C]
	add ebx,ebp

 Block14:
	mov edx,dword ptr [esi+0x38]
	push edx
	lea ebp,[esi+0x30]
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add eax,dword ptr [esp+0x28]
	add esp,8
	add ebx,eax
	cmp dword ptr [esp+0x28],0
	je Block16

 Block15:
	mov eax,dword ptr [esi+0x38]
	push eax
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	add ecx,dword ptr [esp+0x28]
	mov eax,0x51EB851F
	imul ecx,edi
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add esp,8
	add ecx,edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [edx],ecx

 Block16:
	test ebx,ebx
	jle Block18

 Block17:
	imul ebx,edi
	mov eax,0x51EB851F
	imul ebx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add edi,eax

 Block18:
	test edi,edi
	jle Block22

 Block19:
	cmp edi,0x752F
	mov eax,edi
	jl Block21

 Block20:
	mov eax,0x752F

 Block21:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0x18

 Block22:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	ret 0x18
}
}
// CalcDamage::CalcDamageByWT
__SUB(00324DB0, __cdecl, 7817, double, long, const BasicStat &, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	sub esp,0x38
	push esi
	mov esi,dword ptr [ebp+0xC]
	mov eax,dword ptr [esi+0x20]
	push edi
	push eax
	lea edi,[esi+0x18]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x3E8
	mov edx,ecx
	add esp,8
	sub edx,eax
	je Block2

 Block1:
	cmp ecx,0x7D1
	jne Block3

 Block2:
	mov eax,dword ptr [esi+0x38]
	push eax
	lea ecx,[esi+0x30]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	fld qword ptr [__real_3ff3333333333333]
	mov edx,dword ptr [ebp+0x10]
	fstp qword ptr [esp]
	push edx
	push 0
	push eax
	mov eax,dword ptr [esi+0x2C]
	push eax
	add esi,0x24
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	call _anon_calc_base_damage
	mov dword ptr [esp+0x54],eax
	fild dword ptr [esp+0x54]
	add esp,0x18
	pop edi
	pop esi
	mov esp,ebp
	pop ebp
	ret

 Block3:
	mov ecx,dword ptr [esi+0x20]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x3E8
	sub ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	push ecx
	call is_mage_job
	add esp,0xC
	test eax,eax
	je Block5

 Block4:
	mov edx,dword ptr [esi+0x50]
	push edx
	lea eax,[esi+0x48]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	fld1
	mov ecx,dword ptr [ebp+0x14]
	fstp qword ptr [esp]
	mov edx,dword ptr [esi+0x44]
	push ecx
	push 0
	push eax
	push edx
	add esi,0x3C
	push esi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	push eax
	call _anon_calc_base_damage
	mov dword ptr [esp+0x54],eax
	fild dword ptr [esp+0x54]
	add esp,0x18
	pop edi
	pop esi
	mov esp,ebp
	pop ebp
	ret

 Block5:
	mov eax,dword ptr [ebp+8]
	add eax,0xFFFFFFE2
	cmp eax,0x13
	ja Block19

 Block6:
	cmp EAX, 0
je Block14
cmp EAX, 1
je Block12
cmp EAX, 2
je Block12
cmp EAX, 3
je Block13
cmp EAX, 4
je Block19
cmp EAX, 5
je Block19
cmp EAX, 6
je Block19
cmp EAX, 7
je Block19
cmp EAX, 8
je Block19
cmp EAX, 9
je Block16
cmp EAX, 10
je Block11
cmp EAX, 11
je Block9
cmp EAX, 12
je Block9
cmp EAX, 13
je Block10
cmp EAX, 14
je Block10
cmp EAX, 15
je Block7
cmp EAX, 16
je Block8
cmp EAX, 17
je Block15
cmp EAX, 18
je Block17
cmp EAX, 19
je Block18


 Block7:
	fld qword ptr [__real_3ff3333333333333]
	mov eax,dword ptr [ebp+0x10]
	sub esp,8
	fstp qword ptr [esp]
	push eax
	push 0
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nSTR
	push eax
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nDEX
	push eax
	call _anon_calc_base_damage
	mov dword ptr [esp+0x54],eax
	fild dword ptr [esp+0x54]
	add esp,0x18
	pop edi
	pop esi
	mov esp,ebp
	pop ebp
	ret

 Block8:
	fld qword ptr [__real_3ff599999999999a]
	mov ecx,dword ptr [ebp+0x10]
	sub esp,8
	fstp qword ptr [esp]
	push ecx
	push 0
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nSTR
	push eax
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nDEX
	push eax
	call _anon_calc_base_damage
	mov dword ptr [esp+0x54],eax
	fild dword ptr [esp+0x54]
	add esp,0x18
	pop edi
	pop esi
	mov esp,ebp
	pop ebp
	ret

 Block9:
	fld qword ptr [__real_3ff51eb851eb851f]
	mov edx,dword ptr [ebp+0x10]
	sub esp,8
	fstp qword ptr [esp]
	push edx
	push 0
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nDEX
	push eax
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nSTR
	push eax
	call _anon_calc_base_damage
	mov dword ptr [esp+0x54],eax
	fild dword ptr [esp+0x54]
	add esp,0x18
	pop edi
	pop esi
	mov esp,ebp
	pop ebp
	ret

 Block10:
	fld qword ptr [__real_3ff7d70a3d70a3d7]
	mov eax,dword ptr [ebp+0x10]
	sub esp,8
	fstp qword ptr [esp]
	push eax
	push 0
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nDEX
	push eax
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nSTR
	push eax
	call _anon_calc_base_damage
	mov dword ptr [esp+0x54],eax
	fild dword ptr [esp+0x54]
	add esp,0x18
	pop edi
	pop esi
	mov esp,ebp
	pop ebp
	ret

 Block11:
	fld qword ptr [__real_3ff51eb851eb851f]
	mov ecx,dword ptr [ebp+0x10]
	sub esp,8
	fstp qword ptr [esp]
	push ecx
	push 0
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nDEX
	push eax
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nSTR
	push eax
	call _anon_calc_base_damage
	mov dword ptr [esp+0x54],eax
	fild dword ptr [esp+0x54]
	add esp,0x18
	pop edi
	pop esi
	mov esp,ebp
	pop ebp
	ret

 Block12:
	fld qword ptr [__real_3ff3333333333333]
	mov edx,dword ptr [ebp+0x10]
	sub esp,8
	fstp qword ptr [esp]
	push edx
	push 0
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nDEX
	push eax
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nSTR
	push eax
	call _anon_calc_base_damage
	mov dword ptr [esp+0x54],eax
	fild dword ptr [esp+0x54]
	add esp,0x18
	pop edi
	pop esi
	mov esp,ebp
	pop ebp
	ret

 Block13:
	fld qword ptr [__real_3ff4cccccccccccd]
	mov eax,dword ptr [ebp+0x10]
	sub esp,8
	fstp qword ptr [esp]
	push eax
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nSTR
	push eax
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nDEX
	push eax
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nLUK
	push eax
	call _anon_calc_base_damage
	mov dword ptr [esp+0x54],eax
	fild dword ptr [esp+0x54]
	add esp,0x18
	pop edi
	pop esi
	mov esp,ebp
	pop ebp
	ret

 Block14:
	fld qword ptr [__real_3ff3333333333333]
	mov ecx,dword ptr [ebp+0x10]
	sub esp,8
	fstp qword ptr [esp]
	push ecx
	push 0
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nDEX
	push eax
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nSTR
	push eax
	call _anon_calc_base_damage
	mov dword ptr [esp+0x54],eax
	fild dword ptr [esp+0x54]
	add esp,0x18
	pop edi
	pop esi
	mov esp,ebp
	pop ebp
	ret

 Block15:
	fld qword ptr [__real_3ffc000000000000]
	mov edx,dword ptr [ebp+0x10]
	sub esp,8
	fstp qword ptr [esp]
	push edx
	push 0
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nDEX
	push eax
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nLUK
	push eax
	call _anon_calc_base_damage
	mov dword ptr [esp+0x54],eax
	fild dword ptr [esp+0x54]
	add esp,0x18
	pop edi
	pop esi
	mov esp,ebp
	pop ebp
	ret

 Block16:
	fld qword ptr [__real_3ff6e147ae147ae1]
	sub esp,8
	fstp qword ptr [esp]
	push 1
	push 0
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nDEX
	push eax
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nSTR
	push eax
	call _anon_calc_base_damage
	mov dword ptr [esp+0x54],eax
	fild dword ptr [esp+0x54]
	add esp,0x18
	pop edi
	pop esi
	mov esp,ebp
	pop ebp
	ret

 Block17:
	fld qword ptr [__real_3ffb333333333333]
	mov eax,dword ptr [ebp+0x10]
	sub esp,8
	fstp qword ptr [esp]
	push eax
	push 0
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nDEX
	push eax
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nSTR
	push eax
	call _anon_calc_base_damage
	mov dword ptr [esp+0x54],eax
	fild dword ptr [esp+0x54]
	add esp,0x18
	pop edi
	pop esi
	mov esp,ebp
	pop ebp
	ret

 Block18:
	fld qword ptr [__real_3ff8000000000000]
	mov ecx,dword ptr [ebp+0x10]
	sub esp,8
	fstp qword ptr [esp]
	push ecx
	push 0
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nSTR
	push eax
	mov ecx,esi
	call BasicStat::_ZtlSecureGet_nDEX
	push eax
	call _anon_calc_base_damage
	mov dword ptr [esp+0x54],eax
	fild dword ptr [esp+0x54]
	add esp,0x18
	pop edi
	pop esi
	mov esp,ebp
	pop ebp
	ret

 Block19:
	fldz
	pop edi
	pop esi
	mov esp,ebp
	pop ebp
	ret
}
}
// CalcDamage::LoadStandardPDD
_SUB_EXCEPTION_HANDLER(340520)
__SUB0(00340520, __cdecl, 7844, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_340520
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x70
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	push 0x12D8
	xor edi,edi
	push edi
	push offset CalcDamage::ms_aanStandardPDD
	call _memset
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea eax,[ebp-0x38]
	push eax
	call esi
	lea ecx,[ebp-0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x48]
	push edx
	mov dword ptr [ebp-4],edi
	call esi
	lea eax,[ebp-0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push edi
	push edi
	lea ecx,[ebp-0x38]
	push ecx
	lea edx,[ebp-0x48]
	push edx
	push ecx
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push offset _S_STANDARDPDDIMG
	mov byte ptr [ebp-4],1
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[ebp-0x68]
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ebx,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x68],bx
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x60]
	xor ecx,ecx
	mov word ptr [ebp-0x68],cx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[ebp-0x68]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x48],bx
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [ebp-0x48],ax
	mov eax,dword ptr [ebp-0x40]
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[ebp-0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x38],bx
	jne Block20

 Block18:
	mov eax,dword ptr [ebp-0x30]
	xor edx,edx
	mov word ptr [ebp-0x38],dx
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp-0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov edi,dword ptr [ebp-0x14]
	xor ecx,ecx
	cmp edi,ecx
	sete al
	test al,al
	je Block24

 Block22:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp edi,ecx
	je Block48

 Block23:
	mov ecx,dword ptr [edi]
	push edi
	jmp Block47

 Block24:
	mov dword ptr [ebp-0x20],ecx
	mov dword ptr [ebp-0x1C],ecx
	jmp Block26

 Block25:
	mov edi,dword ptr [ebp-0x14]
	mov ebx,8

 Block26:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	mov eax,dword ptr [ebp-0x20]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],8
	test edi,edi
	je Block5

 Block27:
	lea ecx,[ebp-0x78]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp-0x18],esi
	test eax,eax
	je Block30

 Block28:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x28]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x28]
	mov esi,ecx
	mov dword ptr [ebp-0x18],esi
	test eax,eax
	jge Block30

 Block29:
	cmp eax,0x80004002
	jne Block1

 Block30:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x78],bx
	jne Block33

 Block31:
	mov eax,dword ptr [ebp-0x70]
	xor edx,edx
	mov word ptr [ebp-0x78],dx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[ebp-0x78]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block34:
	test esi,esi
	sete al
	test al,al
	jne Block49

 Block35:
	mov dword ptr [ebp-0x24],0
	xor edi,edi

 Block36:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x7C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0xC
	test esi,esi
	je Block5

 Block37:
	lea ecx,[ebp-0x58]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x58],8
	mov ebx,eax
	mov byte ptr [ebp-4],0xB
	jne Block40

 Block38:
	mov eax,dword ptr [ebp-0x50]
	xor edx,edx
	mov word ptr [ebp-0x58],dx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea eax,[ebp-0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block41:
	test ebx,ebx
	jle Block43

 Block42:
	mov dword ptr [ebp-0x24],ebx

 Block43:
	mov ecx,dword ptr [ebp-0x1C]
	mov edx,dword ptr [ebp-0x24]
	add ecx,edi
	inc edi
	cmp edi,0xC8
	mov dword ptr [ecx*4+CalcDamage::ms_aanStandardPDD],edx
	jle Block36

 Block44:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],7
	call ecx
	mov eax,dword ptr [ebp-0x1C]
	inc dword ptr [ebp-0x20]
	add eax,0xC9
	cmp eax,0x4B6
	mov dword ptr [ebp-0x1C],eax
	jl Block25

 Block45:
	mov eax,dword ptr [ebp-0x14]
	mov ecx,dword ptr [eax]
	push eax

 Block46:
	mov dword ptr [ebp-4],0xFFFFFFFF

 Block47:
	mov edx,dword ptr [ecx+8]
	call edx

 Block48:
	lea esp,[ebp-0x8C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp-0x10]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret

 Block49:
	mov byte ptr [ebp-4],7
	test esi,esi
	je Block51

 Block50:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block51:
	mov ecx,dword ptr [edi]
	push edi
	jmp Block46
}
}
// SecondaryStat::_ZtlSecurePut_nMAD
__SUB_CLASS(003272E0, __fastcall, 7639, SecondaryStat, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x78]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x80],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// SecondaryStat::_ZtlSecurePut_nItemEVAR
__SUB_CLASS(003273C0, __fastcall, 7639, SecondaryStat, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0x15C]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0x164],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// BasicStat::CalcBasePDD
__SUB_CLASS_THIS0(00321A40, __thiscall, 7613, BasicStat, long) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x2C]
	push eax
	lea ecx,[esi+0x24]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x38]
	mov dword ptr [esp+0x10],eax
	push edx
	lea eax,[esi+0x30]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x50]
	push ecx
	lea edx,[esi+0x48]
	push edx
	mov dword ptr [esp+0x24],eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x28],eax
	mov eax,dword ptr [esi+0x44]
	push eax
	add esi,0x3C
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x24],eax
	fild dword ptr [esp+0x24]
	add esp,0x20
	pop esi
	fmul qword ptr [__real_3fd999999999999a]
	fild dword ptr [esp+4]
	fmul qword ptr [__real_3ff3333333333333]
	fild dword ptr [esp+8]
	fld qword ptr [__real_3fe0000000000000]
	fmul st(1),st
	fxch st(2)
	faddp st(1),st(0)
	fild dword ptr [esp+0xC]
	fmulp st(2),st
	faddp st(1),st(0)
	faddp st(1),st(0)
	add esp,0x10
	jmp  __ftol2_sse
}
}
// CalcDamage::PDamage
_SUB_EXCEPTION_HANDLER(32E720)
__SUB_CLASS_THIS(0032E720, __thiscall, 7821, CalcDamage, long, const MobStat &, const CharacterData &, const BasicStat &, const SecondaryStat &, MobAttackInfo *, uint32_t, NakedParam<ZRef<PassiveSkillData>>, long *, unsigned long, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_32E720
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x1C],ecx
	mov eax,dword ptr [esp+0x54]
	xor ebp,ebp
	xor edx,edx
	xor esi,esi
	mov dword ptr [esp+0x30],ebp
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x14],ebp
	cmp eax,ebp
	je Block2

 Block1:
	mov edx,dword ptr [eax+0x20]
	mov esi,dword ptr [eax+0x1C]
	mov dword ptr [esp+0x18],edx
	mov edx,dword ptr [eax+0x14]
	mov eax,dword ptr [eax+0x28]
	mov dword ptr [esp+0x14],eax

 Block2:
	mov ebx,dword ptr [esp+0x40]
	mov eax,dword ptr [esp+0x3C]
	mov edi,dword ptr [esp+0x38]
	push esi
	mov esi,dword ptr [esp+0x48]
	push edx
	mov edx,dword ptr [esp+0x54]
	push edx
	push esi
	push ebx
	push eax
	push edi
	call CalcDamage::CheckPDamageMiss
	test eax,eax
	je Block8

 Block3:
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebp
	je Block7

 Block4:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block7

 Block5:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block7

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block7:
	xor eax,eax
	jmp Block36

 Block8:
	mov ecx,dword ptr [ebx+0x20]
	push ecx
	lea edx,[ebx+0x18]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	fld qword ptr [__real_4059000000000000]
	mov ecx,dword ptr [edi+0x28]
	fld1
	add esp,8
	mov dword ptr [esp+0x4C],ecx
	cmp ecx,ebp
	je Block14

 Block9:
	cmp dword ptr [edi+0x2C],0x12536E
	jne Block14

 Block10:
	mov eax,0xD1B71759
	mul dword ptr [esp+0x5C]
	shr edx,0xD
	cmp edx,0x372
	je Block14

 Block11:
	fild dword ptr [esp+0x4C]
	mov eax,dword ptr [esp+0x48]
	fdivrp st(2),st
	faddp st(1),st(0)
	cmp eax,ebp
	je Block13

 Block12:
	fimul dword ptr [eax+0x18]
	call __ftol2_sse
	jmp Block18

 Block13:
	fimul dword ptr [edi+0x24]
	call __ftol2_sse
	jmp Block18

 Block14:
	mov eax,dword ptr [esp+0x48]
	fstp st(1)
	fstp st(0)
	cmp eax,ebp
	je Block16

 Block15:
	mov eax,dword ptr [eax+0x18]
	jmp Block17

 Block16:
	mov eax,dword ptr [edi+0x24]

 Block17:
	add eax,ecx

 Block18:
	cmp eax,ebp
	jle Block21

 Block19:
	cmp eax,0x752F
	mov ebp,eax
	jl Block21

 Block20:
	mov ebp,0x752F

 Block21:
	mov eax,dword ptr [ebx+0x14]
	push eax
	lea edi,[ebx+0xC]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [ecx]
	mov ecx,dword ptr [esp+0x24]
	add esp,8
	push eax
	push edx
	add ecx,0xA0
	call CRand32::Random
	push eax
	push ebp
	call _anon_calc_mob_base_damamge
	fstp qword ptr [esp+0x30]
	mov eax,dword ptr [ebx+0x14]
	push eax
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0x2C]
	mov ebp,dword ptr [esp+0x50]
	mov edx,dword ptr [ebp]
	mov edi,dword ptr [esp+0x54]
	add esp,0x18
	push ecx
	mov ecx,dword ptr [esp+0x64]
	push eax
	mov eax,dword ptr [esp+0x6C]
	push edx
	mov edx,dword ptr [esp+0x24]
	push eax
	push ecx
	push 0
	push edx
	push edi
	mov ecx,ebx
	call BasicStat::CalcBasePDD
	push eax
	mov ecx,esi
	call SecondaryStat::GetPDD
	fld qword ptr [esp+0x2C]
	push eax
	sub esp,8
	fstp qword ptr [esp]
	call _anon_adjust_base_depense
	mov eax,dword ptr [esi+0x314]
	fstp qword ptr [esp+0x38]
	push eax
	lea ecx,[esi+0x30C]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x58],eax
	fild dword ptr [esp+0x58]
	mov edx,dword ptr [esi+0x1170]
	fld qword ptr [esp+0x40]
	push edx
	lea eax,[esi+0x1168]
	fmul st(1),st
	push eax
	fxch
	fdiv qword ptr [__real_4059000000000000]
	fsubp st(1),st(0)
	fstp qword ptr [esp+0x48]
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x60],eax
	fild dword ptr [esp+0x60]
	mov ecx,dword ptr [esi+0x4F4]
	fld qword ptr [esp+0x48]
	push ecx
	add esi,0x4EC
	fmul st(1),st
	push esi
	fxch
	fdiv qword ptr [__real_4059000000000000]
	fsubp st(1),st(0)
	fstp qword ptr [esp+0x50]
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x30
	test eax,eax
	je Block24

 Block22:
	mov esi,dword ptr [esp+0x58]
	test esi,esi
	je Block24

 Block23:
	fld qword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x1C]
	sub esp,8
	fstp qword ptr [esp]
	push edi
	call CalcDamage::GetMesoGuardReduce
	mov dword ptr [esi],eax

 Block24:
	mov ebp,dword ptr [ebp+0xD4]
	mov dword ptr [esp+0x38],ebp
	test ebp,ebp
	je Block26

 Block25:
	fild dword ptr [esp+0x38]
	fmul qword ptr [esp+0x20]
	fdiv qword ptr [__real_4059000000000000]
	jmp Block27

 Block26:
	fld qword ptr [esp+0x20]

 Block27:
	fld1
	fcom
	fnstsw ax
	test ah,5
	jp Block29

 Block28:
	fstp st(0)
	fld st(0)
	fld qword ptr [__real_412e847e00000000]
	fcom st(2)
	fnstsw ax
	fstp st(2)
	test ah,0x41
	jne Block30

 Block29:
	fstp st(1)
	jmp Block31

 Block30:
	fstp st(0)

 Block31:
	call __ftol2_sse
	mov esi,dword ptr [esp+0x54]
	mov ebx,eax
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test esi,esi
	je Block35

 Block32:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block35

 Block33:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block35

 Block34:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block35:
	mov eax,ebx

 Block36:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 0x30
}
}
// SecondaryStat::GetJump
__SUB_CLASS_THIS(00461680, __thiscall, 7669, SecondaryStat, long, long) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x1D0]
	push edi
	push eax
	lea ecx,[esi+0x1C8]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,dword ptr [esi+0x13CC]
	lea edi,[ebx+0x18]
	add esp,8
	mov ecx,edi
	mov ebp,eax
	call ZFatalSection::Lock
	test edi,edi
	je Block3

 Block1:
	add dword ptr [edi+4],0xFFFFFFFF
	jne Block3

 Block2:
	mov dword ptr [edi],0

 Block3:
	mov edx,dword ptr [esi+0x1DC]
	push edx
	add esi,0x1D4
	push esi
	call _ZtlSecureFuseHelper<long>::call
	mov ebx,dword ptr [ebx+0xC]
	add esp,8
	cmp ebx,eax
	jl Block5

 Block4:
	mov eax,ebx

 Block5:
	pop edi
	pop esi
	add eax,ebp
	add eax,dword ptr [esp+0xC]
	pop ebp
	pop ebx
	ret 4
}
}
// get_damage_adjusted_by_charged_elemAttr
__SUB(00323400, __cdecl, 131948, double, double, const long *, const SecondaryStat &, const CharacterData &) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push edi
	mov edi,dword ptr [esp+0x28]
	mov eax,dword ptr [edi+0x41C]
	push eax
	lea ecx,[edi+0x414]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block5

 Block1:
	mov edx,dword ptr [edi+0x428]
	push edx
	lea ebx,[edi+0x420]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	push eax
	call get_element_by_charged_skillid
	add esp,0xC
	test eax,eax
	je Block5

 Block2:
	mov eax,dword ptr [edi+0x428]
	push esi
	push eax
	push ebx
	mov dword ptr [esp+0x34],0
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0x38]
	add esp,8
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	push edx
	call CSkillInfo::GetSkillLevel_0
	mov esi,eax
	test esi,esi
	jne Block4

 Block3:
	fld qword ptr [esp+0x20]
	pop esi
	pop edi
	pop ebx
	add esp,0x10
	ret

 Block4:
	mov ecx,dword ptr [esp+0x2C]
	push esi
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x180]
	push ecx
	add eax,0x178
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x34]
	add esp,8
	push esi
	fdiv qword ptr [__real_4059000000000000]
	fstp qword ptr [esp+0x18]
	call SKILLENTRY::GetLevelData
	mov edx,dword ptr [eax+0xD8]
	push edx
	add eax,0xD0
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	mov eax,dword ptr [edi+0x428]
	push eax
	push ebx
	fdiv qword ptr [__real_4059000000000000]
	fstp qword ptr [esp+0x1C]
	call _ZtlSecureFuseHelper<long>::call
	fldz
	fstp qword ptr [esp+8]
	fld qword ptr [esp+0x24]
	fstp qword ptr [esp]
	push eax
	call get_element_by_charged_skillid
	fld qword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x3C]
	fmul qword ptr [esp+0x34]
	mov edx,dword ptr [ecx+eax*4]
	add esp,4
	push edx
	sub esp,8
	fstp qword ptr [esp]
	call get_damage_adjusted_by_elemAttr_0
	add esp,0x1C
	pop esi
	pop edi
	pop ebx
	add esp,0x10
	ret

 Block5:
	fld qword ptr [esp+0x1C]
	pop edi
	pop ebx
	add esp,0x10
	ret
}
}
// get_next_item_level_exp
_SUB_EXCEPTION_HANDLER(330030)
__SUB(00330030, __cdecl, 131966, long, NakedParam<ZRef<GW_ItemSlotBase>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_330030
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	xor esi,esi
	mov dword ptr [esp+0x10],esi
	cmp dword ptr [TSingleton<CItemInfo>::ms_pInstance],esi
	je Block6

 Block1:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,esi
	je Block7

 Block2:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsGrowthItem
	test eax,eax
	je Block6

 Block3:
	mov ecx,dword ptr [esp+0x1C]
	add ecx,0xC
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	cmp eax,esi
	je Block5

 Block4:
	mov ecx,dword ptr [eax+0x68]
	push ecx
	add eax,0x60
	push eax
	call _ZtlSecureFuseHelper<long>::call
	push eax
	call get_next_level_exp
	add esp,0xC
	mov esi,eax

 Block5:
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	mov eax,esi
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret

 Block6:
	mov eax,dword ptr [esp+0x1C]

 Block7:
	mov dword ptr [esp+0x10],0xFFFFFFFF
	cmp eax,esi
	je Block11

 Block8:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block9:
	mov edx,dword ptr [esp+0x1C]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,esi
	je Block11

 Block10:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block11:
	xor eax,eax
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret
}
}
// _anon_EncodeTime
__SUB(0032F150, __cdecl, 131964, void, COutPacket &, const unsigned long) {
__asm {

 Block0:
	push esi
	push edi
	call timeGetTime
	mov ecx,dword ptr [esp+0x10]
	cmp ecx,eax
	sbb edx,edx
	neg edx
	je Block2

 Block1:
	sub eax,ecx
	mov esi,eax
	jmp Block3

 Block2:
	sub ecx,eax
	mov esi,ecx

 Block3:
	mov edi,dword ptr [esp+0xC]
	push edx
	mov ecx,edi
	call COutPacket::Encode1
	push esi
	mov ecx,edi
	call COutPacket::Encode4
	pop edi
	pop esi
	ret
}
}
// NoExpire::Encode
__SUB_CLASS_THIS(00320810, __thiscall, 7119, NoExpire, void, COutPacket &) {
__asm {

 Block0:
	ret 4
}
}
// get_damage_adjusted_by_elemAttr
__SUB(00323270, __cdecl, 131946, double, double, const SKILLENTRY *, const long *, const long, double, double) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFC0
	sub esp,0x3C
	push esi
	mov esi,dword ptr [ebp+0x10]
	test esi,esi
	je Block12

 Block1:
	mov ecx,dword ptr [ebp+0x18]
	test ecx,ecx
	je Block12

 Block2:
	mov eax,dword ptr [esi]
	cmp eax,0x2F785B
	jg Block8

 Block3:
	je Block10

 Block4:
	cmp eax,0x20361E
	je Block7

 Block5:
	cmp eax,0x21BCBE
	jne Block9

 Block6:
	fld qword ptr [ebp+8]
	mov esi,dword ptr [ebp+0x14]
	fmul qword ptr [__real_3fe0000000000000]
	mov eax,dword ptr [esi+0xC]
	sub esp,0x10
	fst qword ptr [esp+0x40]
	fld qword ptr [ebp+0x24]
	fstp qword ptr [esp+8]
	fld1
	fstp qword ptr [esp]
	push eax
	sub esp,8
	fstp qword ptr [esp]
	call get_damage_adjusted_by_elemAttr_0
	mov ecx,dword ptr [esi+4]
	fstp qword ptr [esp+0x54]
	fldz
	add esp,0xC
	fstp qword ptr [esp+8]
	fld1
	fstp qword ptr [esp]
	fld qword ptr [esp+0x40]
	push ecx
	sub esp,8
	fstp qword ptr [esp]
	call get_damage_adjusted_by_elemAttr_0
	fadd qword ptr [esp+0x54]
	add esp,0x1C
	pop esi
	mov esp,ebp
	pop ebp
	ret

 Block7:
	fld qword ptr [ebp+8]
	mov esi,dword ptr [ebp+0x14]
	fmul qword ptr [__real_3fe0000000000000]
	mov edx,dword ptr [esi+0x10]
	sub esp,0x10
	fst qword ptr [esp+0x40]
	fld qword ptr [ebp+0x24]
	fstp qword ptr [esp+8]
	fld1
	fstp qword ptr [esp]
	push edx
	sub esp,8
	fstp qword ptr [esp]
	call get_damage_adjusted_by_elemAttr_0
	mov eax,dword ptr [esi+8]
	fstp qword ptr [esp+0x54]
	fldz
	add esp,0xC
	fstp qword ptr [esp+8]
	fld1
	fstp qword ptr [esp]
	fld qword ptr [esp+0x40]
	push eax
	sub esp,8
	fstp qword ptr [esp]
	call get_damage_adjusted_by_elemAttr_0
	fadd qword ptr [esp+0x54]
	add esp,0x1C
	pop esi
	mov esp,ebp
	pop ebp
	ret

 Block8:
	cmp eax,0x30FEFB
	je Block10

 Block9:
	fld qword ptr [ebp+0x24]
	mov ecx,dword ptr [esi+0x14]
	mov edx,dword ptr [ebp+0x14]
	mov eax,dword ptr [edx+ecx*4]
	sub esp,0x10
	fstp qword ptr [esp+8]
	fld qword ptr [ebp+0x1C]
	fstp qword ptr [esp]
	push eax
	jmp Block11

 Block10:
	push ecx
	mov ecx,esi
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x168]
	push ecx
	add eax,0x160
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x38],eax
	fild dword ptr [esp+0x38]
	mov edx,dword ptr [esi+0x14]
	mov eax,dword ptr [ebp+0x14]
	mov ecx,dword ptr [eax+edx*4]
	fdiv qword ptr [__real_4059000000000000]
	sub esp,8
	fld qword ptr [ebp+0x24]
	fstp qword ptr [esp+8]
	fstp qword ptr [esp]
	push ecx

 Block11:
	fld qword ptr [ebp+8]
	sub esp,8
	fstp qword ptr [esp]
	call get_damage_adjusted_by_elemAttr_0
	add esp,0x1C
	pop esi
	mov esp,ebp
	pop ebp
	ret

 Block12:
	fld qword ptr [ebp+8]
	pop esi
	mov esp,ebp
	pop ebp
	ret
}
}
// CalcDamage::CheckPDamageMiss
__SUB_CLASS_THIS(00326720, __thiscall, 7838, CalcDamage, int32_t, const MobStat &, const CharacterData &, const BasicStat &, const SecondaryStat &, uint32_t, long, long) {
__asm {

 Block0:
	sub esp,8
	push edi
	mov edi,dword ptr [esp+0x10]
	cmp dword ptr [edi+0x220],0
	je Block2

 Block1:
	xor eax,eax
	pop edi
	add esp,8
	ret 0x1C

 Block2:
	push ebp
	mov ebp,dword ptr [esp+0x20]
	mov eax,dword ptr [ebp+0x12D0]
	push eax
	lea ecx,[ebp+0x12C8]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jg Block7

 Block3:
	push ebx
	push esi
	mov esi,dword ptr [esp+0x24]
	mov edx,dword ptr [esi+0x50]
	push edx
	lea eax,[esi+0x48]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x38]
	push ecx
	lea edx,[esi+0x30]
	push edx
	mov ebx,eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0x30]
	add esp,0x10
	push 0
	lea eax,[eax+ebx*2]
	push eax
	mov eax,dword ptr [esp+0x38]
	push eax
	push ecx
	mov ecx,ebp
	call SecondaryStat::GetEVA
	mov ebp,eax
	mov eax,dword ptr [edi+0x68]
	add eax,dword ptr [edi+0x64]
	test eax,eax
	jle Block8

 Block4:
	cmp eax,0x270F
	mov ebx,eax
	jl Block6

 Block5:
	mov ebx,0x270F

 Block6:
	mov edx,dword ptr [esi+0x14]
	push edx
	add esi,0xC
	push esi
	call _ZtlSecureFuseHelper<long>::call
	fldz
	fstp qword ptr [esp]
	mov esi,eax
	fld qword ptr [__real_4059000000000000]
	mov eax,dword ptr [esp+0x34]
	sub esp,8
	fstp qword ptr [esp]
	push eax
	call get_rand_1
	fstp qword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x48]
	mov edx,dword ptr [edi]
	push ecx
	push edx
	push esi
	push ebx
	push ebp
	call _anon_calc_evar
	mov dword ptr [esp+0x44],eax
	fild dword ptr [esp+0x44]
	add esp,0x28
	pop esi
	pop ebx
	fcomp qword ptr [esp+8]
	fnstsw ax
	test ah,1
	jne Block9

 Block7:
	pop ebp
	mov eax,1
	pop edi
	add esp,8
	ret 0x1C

 Block8:
	xor ebx,ebx
	jmp Block6

 Block9:
	pop ebp
	xor eax,eax
	pop edi
	add esp,8
	ret 0x1C
}
}
// IsCalcDamageStat
__SUB(003215A0, __cdecl, 131939, int32_t, NakedParam<MY_UINT128>) {
__asm {

 Block0:
	sub esp,0x140
	push offset CTS_BLESSING_ARMOR
	lea eax,[esp+0xA4]
	push eax
	push offset CTS_DAMR
	lea ecx,[esp+0x2C]
	push ecx
	push offset CTS_DARK_AURA
	lea edx,[esp+0x134]
	push edx
	push offset CTS_EPAD
	lea eax,[esp+0x5C]
	push eax
	push offset CTS_THORNSEFFECT
	lea ecx,[esp+0xE4]
	push ecx
	push offset CTS_FINAL_CUT
	lea edx,[esp+0x8C]
	push edx
	push offset CTS_SUDDEN_DEATH
	lea eax,[esp+0x134]
	push eax
	push offset CTS_ASSISTCHARGE
	lea ecx,[esp+0xBC]
	push ecx
	push offset CTS_COMBO_ABILITY_BUFF
	lea edx,[esp+0x124]
	push edx
	push offset CTS_ENERGY_CHARGED
	lea eax,[esp+0x4C]
	push eax
	push offset CTS_MAXLEVELBUFF
	lea ecx,[esp+0x64]
	push ecx
	push offset CTS_SHARPEYES
	lea edx,[esp+0x8C]
	push edx
	push offset CTS_BASICSTATUP
	lea eax,[esp+0xB4]
	push eax
	push offset CTS_WEAPON_CHARGE
	lea ecx,[esp+0xDC]
	push ecx
	push offset CTS_COMBO_COUNTER
	lea edx,[esp+0x104]
	push edx
	push offset CTS_DARKNESS
	lea eax,[esp+0x12C]
	push eax
	push offset CTS_EVA
	lea ecx,[esp+0x154]
	push ecx
	push offset CTS_ACC
	lea edx,[esp+0x17C]
	push edx
	push offset CTS_MAD
	lea eax,[esp+0x1A4]
	push eax
	mov ecx,offset CTS_PAD
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	push eax
	lea ecx,[esp+0x134]
	push ecx
	lea ecx,[esp+0x14C]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	xor edx,edx
	test al,al
	setne dl
	mov eax,edx
	add esp,0x140
	ret
}
}
// TemporaryStat_GuidedBullet::DecodeForClient
_SUB_EXCEPTION_HANDLER(327180)
__SUB_CLASS_THIS(00327180, __thiscall, 7168, TemporaryStat_GuidedBullet, void, CInPacket &) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_327180
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	lea esi,[edi+0x18]
	mov ecx,esi
	mov dword ptr [esp+0x10],esi
	call ZFatalSection::Lock
	mov ebx,dword ptr [esp+0x24]
	push ebx
	mov ecx,edi
	mov dword ptr [esp+0x20],0
	call TwoStateTemporaryStat<long, not_equal<long, 0>, NoExpire, Nothing<long>, Nothing<long>>::DecodeForClient
	mov ecx,ebx
	call CInPacket::Decode4
	mov dword ptr [edi+0x24],eax
	test esi,esi
	je Block3

 Block1:
	add dword ptr [esi+4],0xFFFFFFFF
	jne Block3

 Block2:
	mov dword ptr [esi],0

 Block3:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 4
}
}
// BasicStat::CalcBasePACC
__SUB_CLASS_THIS0(00321B60, __thiscall, 7613, BasicStat, long) {
__asm {

 Block0:
	sub esp,8
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x38]
	push eax
	lea ecx,[esi+0x30]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esi+0x50]
	push edx
	add esi,0x48
	push esi
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	add esp,0x10
	fild dword ptr [esp+8]
	pop esi
	fmul qword ptr [__real_3ff3333333333333]
	faddp st(1),st(0)
	add esp,8
	jmp  __ftol2_sse
}
}
// CalcDamage::MDamage
_SUB_EXCEPTION_HANDLER(32CD60)
__SUB_CLASS_THIS(0032CD60, __thiscall, 7835, CalcDamage, void, const CharacterData &, const BasicStat &, const SecondaryStat &, const unsigned long, const MobStat &, const CMobTemplate *, NakedParam<ZRef<PassiveSkillData>>, int32_t &, long, long, long, const SKILLENTRY *, long, long *, int32_t *, long, long, long, long, long, long, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_32CD60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x6C]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x30],ecx
	mov ecx,dword ptr [esp+0xAC]
	xor ebx,ebx
	mov dword ptr [esp+0x74],ebx
	cmp ecx,ebx
	je Block2

 Block1:
	call SKILLENTRY::GetMaxLevel

 Block2:
	mov eax,dword ptr [esp+0x98]
	xor ebp,ebp
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebx
	je Block11

 Block3:
	mov ecx,dword ptr [eax+0xC]
	mov edx,dword ptr [eax+0x18]
	mov edi,dword ptr [eax+8]
	mov esi,dword ptr [eax+0x38]
	mov ebp,dword ptr [eax+0x40]
	mov ebx,dword ptr [eax+0x10]
	mov dword ptr [esp+0x20],ecx
	mov ecx,dword ptr [eax+0x30]
	mov dword ptr [esp+0x24],ecx
	mov ecx,dword ptr [eax+0x5C]
	mov dword ptr [esp+0x18],edx
	mov edx,dword ptr [eax+0x48]
	mov dword ptr [esp+0x14],ecx
	xor ecx,ecx
	mov dword ptr [esp+0x28],edi
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x1C],edx
	mov dword ptr [esp+0x4C],ecx
	mov byte ptr [esp+0x74],1
	cmp dword ptr [eax+0x80],ecx
	je Block7

 Block4:
	cmp dword ptr [esp+0xAC],ecx
	je Block7

 Block5:
	mov ecx,dword ptr [esp+0xAC]
	lea edx,[esp+0x48]
	push edx
	push ecx
	lea ecx,[eax+0x74]
	call ZMap<long, ZRef<AdditionPsd>, long>::GetAt
	mov ecx,dword ptr [esp+0x4C]
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [ecx+8]
	add dword ptr [esp+0x20],edx
	add edi,dword ptr [ecx]
	add dword ptr [esp+0x18],eax
	add esi,dword ptr [ecx+0x14]
	mov edx,dword ptr [ecx+0xC]
	mov eax,dword ptr [ecx+0x18]
	add dword ptr [esp+0x24],edx
	add dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x28],edi
	mov dword ptr [esp+0x2C],esi

 Block7:
	mov byte ptr [esp+0x74],0
	test ecx,ecx
	je Block11

 Block8:
	lea esi,[ecx-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block9:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block11

 Block10:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block11:
	xor esi,esi
	xor edi,edi
	lea ebx,[ebx]

 Block12:
	mov ecx,dword ptr [esp+0x30]
	call CRand32::Random
	mov dword ptr [esp+edi*4+0x50],eax
	inc edi
	cmp edi,7
	jl Block12

 Block13:
	mov edi,dword ptr [esp+0x80]
	mov ecx,dword ptr [edi+0x38]
	push ecx
	lea edx,[edi+0x30]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x3C],eax
	mov eax,dword ptr [esp+0x88]
	mov ecx,dword ptr [eax+0x50]
	push ecx
	add edi,0x48
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x40],eax
	fild dword ptr [esp+0x40]
	add esp,0x10
	fild dword ptr [esp+0x34]
	fmul qword ptr [__real_3ff3333333333333]
	faddp st(1),st(0)
	call __ftol2_sse
	mov edx,dword ptr [esp+0x7C]
	push 0
	push eax
	push ebx
	mov ebx,dword ptr [esp+0x90]
	push edx
	mov ecx,ebx
	call SecondaryStat::GetACC
	mov ecx,dword ptr [esp+0x14]
	push 0
	mov dword ptr [esp+0x3C],eax
	mov eax,dword ptr [esp+0xDC]
	push eax
	push ebp
	push ecx
	mov ecx,ebx
	call SecondaryStat::GetMAD
	mov ebp,dword ptr [esp+0xA4]
	push ebp
	mov dword ptr [esp+0x44],eax
	call get_weapon_type
	mov ebx,dword ptr [esp+0x84]
	mov edx,dword ptr [ebx+0x44]
	mov dword ptr [esp+0x40],eax
	push edx
	lea eax,[ebx+0x3C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [ebx+0x50]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [ebx+0x14]
	lea eax,[ebx+0xC]
	push edx
	push eax
	mov dword ptr [esp+0x50],eax
	call _ZtlSecureFuseHelper<long>::call
	mov eax,dword ptr [esp+0x98]
	push ebp
	push 0
	push eax
	call get_magic_mastery
	add esp,0x28
	mov dword ptr [esp+0x30],eax
	test eax,eax
	jne Block15

 Block14:
	mov ecx,dword ptr [esp+0xB0]
	push ecx
	mov ecx,dword ptr [esp+0xB0]
	call SKILLENTRY::GetLevelData
	mov edx,dword ptr [eax+0x150]
	push edx
	add eax,0x148
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov dword ptr [esp+0x30],eax

 Block15:
	mov edi,dword ptr [esp+0x7C]
	xor ebx,ebx
	push ebx
	push ebx
	push edi
	call get_amplification
	mov ecx,dword ptr [edi+0x3D]
	mov dword ptr [esp+0x50],eax
	lea eax,[edi+0x39]
	push ecx
	push eax
	mov dword ptr [esp+0xB8],5
	mov dword ptr [esp+0x28],ebx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,0x14
	cmp eax,0x16
	je Block17

 Block16:
	cmp ecx,0x7D1
	jne Block20

 Block17:
	lea ecx,[esp+0xD8]
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x151D460
	push edi
	mov dword ptr [esp+0xE4],ebx
	call CSkillInfo::GetSkillLevel_0
	cmp eax,ebx
	jle Block20

 Block18:
	mov ecx,dword ptr [esp+0xD8]
	cmp ecx,ebx
	je Block20

 Block19:
	push eax
	call SKILLENTRY::GetLevelData
	mov edi,eax
	mov edx,dword ptr [edi+0x114]
	push edx
	lea eax,[edi+0x10C]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [edi+0xD8]
	push ecx
	add eax,5
	add edi,0xD0
	push edi
	mov dword ptr [esp+0xB4],eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,0x10
	mov dword ptr [esp+0x14],eax

 Block20:
	mov ebp,dword ptr [esp+0x84]
	mov edx,dword ptr [ebp+0x65C]
	push edx
	lea edi,[ebp+0x654]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	sar eax,8
	add esp,8
	cmp eax,ebx
	jg Block22

 Block21:
	xor eax,eax
	mov dword ptr [esp+0xD8],eax
	jmp Block25

 Block22:
	cmp eax,0x64
	jge Block24

 Block23:
	mov dword ptr [esp+0xD8],eax
	jmp Block25

 Block24:
	mov dword ptr [esp+0xD8],0x64

 Block25:
	mov eax,dword ptr [ebp+0x65C]
	push eax
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [ebp+0xF18]
	and eax,0xFF
	setle bl
	push ecx
	lea edi,[ebp+0xF10]
	push edi
	dec ebx
	and ebx,eax
	call _ZtlSecureFuseHelper<long>::call
	sar eax,8
	add esp,0x10
	test eax,eax
	jg Block27

 Block26:
	xor eax,eax
	jmp Block28

 Block27:
	cmp eax,0x64
	jge Block30

 Block28:
	mov ebp,eax
	test eax,eax
	jle Block31

 Block29:
	mov edx,dword ptr [esp+0x84]
	mov eax,dword ptr [edx+0xF18]
	push eax
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	and eax,0xFF
	jmp Block32

 Block30:
	mov ebp,0x64
	jmp Block29

 Block31:
	xor eax,eax

 Block32:
	mov ecx,dword ptr [esp+0xD8]
	cmp ebp,ecx
	jl Block34

 Block33:
	mov ecx,ebp

 Block34:
	add dword ptr [esp+0xA4],ecx
	cmp eax,ebx
	jge Block36

 Block35:
	mov eax,ebx

 Block36:
	add dword ptr [esp+0x14],eax
	mov ecx,dword ptr [esp+0x7C]
	mov eax,dword ptr [ecx+0x76D]
	test eax,eax
	jg Block38

 Block37:
	xor eax,eax
	jmp Block40

 Block38:
	cmp eax,0x64
	jl Block40

 Block39:
	mov eax,0x64

 Block40:
	mov edi,dword ptr [esp+0x14]
	mov ebx,dword ptr [esp+0xA4]
	mov edx,ecx
	add edi,dword ptr [edx+0x771]
	add ebx,eax
	mov ecx,edi
	imul ecx,dword ptr [esp+0xC0]
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add edi,eax
	mov eax,dword ptr [esp+0xBC]
	mov dword ptr [esp+0x14],edi
	test eax,eax
	jg Block42

 Block41:
	xor eax,eax
	jmp Block44

 Block42:
	cmp eax,0x64
	jl Block44

 Block43:
	mov eax,0x64

 Block44:
	add ebx,eax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	jg Block46

 Block45:
	xor eax,eax
	jmp Block48

 Block46:
	cmp eax,0x64
	jl Block48

 Block47:
	mov eax,0x64

 Block48:
	add ebx,eax
	cmp dword ptr [esp+0xA0],0
	mov dword ptr [esp+0xA4],ebx
	mov dword ptr [esp+0xD8],0
	jle Block156

 Block49:
	mov ecx,dword ptr [esp+0xD8]
	mov edx,dword ptr [esp+0xB4]
	mov ebp,dword ptr [esp+0x8C]
	mov ebx,dword ptr [esp+0x80]
	mov dword ptr [edx+ecx*4],0
	cmp dword ptr [ebp+0x218],0
	jne Block155

 Block50:
	mov eax,0x92492493
	imul esi
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax*8]
	sub ecx,eax
	mov edx,esi
	sub edx,ecx
	mov eax,dword ptr [esp+edx*4+0x50]
	xor edx,edx
	mov ecx,0x64
	div ecx
	cmp dword ptr [ebp+0x12C],0
	mov edi,edx
	je Block53

 Block51:
	mov eax,dword ptr [esp+0x84]
	mov edx,dword ptr [eax+0xA58]
	push edx
	add eax,0xA50
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp edi,eax
	jle Block53

 Block52:
	mov eax,1
	jmp Block54

 Block53:
	xor eax,eax

 Block54:
	inc esi
	test eax,eax
	je Block56

 Block55:
	mov eax,dword ptr [esp+0xB4]
	mov ecx,dword ptr [esp+0xD8]
	mov dword ptr [eax+ecx*4],1
	jmp Block155

 Block56:
	mov eax,dword ptr [esp+0x84]
	mov edx,dword ptr [eax+0x3A4]
	push edx
	add eax,0x39C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block155

 Block57:
	mov eax,dword ptr [ebp+0x78]
	add eax,dword ptr [ebp+0x74]
	test eax,eax
	jg Block59

 Block58:
	xor eax,eax
	mov edi,eax
	jmp Block62

 Block59:
	cmp eax,0x270F
	jge Block61

 Block60:
	mov edi,eax
	jmp Block62

 Block61:
	mov edi,0x270F

 Block62:
	mov eax,dword ptr [ebx+0x14]
	mov ecx,dword ptr [esp+0x34]
	push eax
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0x20]
	mov ecx,dword ptr [ebp]
	push edx
	mov edx,dword ptr [esp+0x44]
	push ecx
	push eax
	push edi
	push edx
	call _anon_calc_accr
	fldz
	mov dword ptr [esp+0xDC],eax
	fstp qword ptr [esp+0x14]
	fld qword ptr [__real_4059000000000000]
	mov eax,0x92492493
	imul esi
	fstp qword ptr [esp+0xC]
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax*8]
	sub ecx,eax
	add esp,0xC
	mov edx,esi
	sub edx,ecx
	mov eax,dword ptr [esp+edx*4+0x60]
	push eax
	call get_rand_1
	add esp,0x14
	fild dword ptr [esp+0xC0]
	inc esi
	fcompp
	fnstsw ax
	test ah,5
	jnp Block155

 Block63:
	cmp dword ptr [esp+0xAC],0
	je Block69

 Block64:
	mov eax,dword ptr [esp+0xB0]
	mov ecx,dword ptr [esp+0xAC]
	push eax
	call SKILLENTRY::GetLevelData
	mov ebp,dword ptr [esp+0x7C]
	mov ecx,dword ptr [ebp+0x3D]
	push ecx
	add ebp,0x39
	push ebp
	mov edi,eax
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx edx,ax
	push edx
	push 0x42A
	call get_novice_skill_as_race
	mov ecx,dword ptr [esp+0xBC]
	add esp,0x10
	cmp dword ptr [ecx],eax
	je Block68

 Block65:
	mov edx,dword ptr [esp+0x7C]
	mov eax,dword ptr [edx+0x3D]
	push eax
	push ebp
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	push ecx
	push 0x42B
	call get_novice_skill_as_race
	mov edx,dword ptr [esp+0xBC]
	add esp,0x10
	cmp dword ptr [edx],eax
	je Block68

 Block66:
	mov eax,dword ptr [edi+0xE4]
	push eax
	lea ebp,[edi+0xDC]
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block69

 Block67:
	mov ecx,dword ptr [edi+0xE4]
	push ecx
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0xBC]
	mov ecx,dword ptr [esp+0xE0]
	add esp,8
	mov dword ptr [edx+ecx*4],eax
	jmp Block155

 Block68:
	mov edx,dword ptr [edi+0xE4]
	push edx
	add edi,0xDC
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	jmp Block154

 Block69:
	mov eax,0x92492493
	imul esi
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax*8]
	sub ecx,eax
	mov eax,dword ptr [esp+0x30]
	mov edx,esi
	sub edx,ecx
	mov ecx,dword ptr [esp+edx*4+0x50]
	mov edx,dword ptr [esp+0x3C]
	push eax
	push edx
	call CalcDamage::GetMsateryConstByWT
	push ecx
	fstp qword ptr [esp]
	push ecx
	mov ecx,dword ptr [esp+0x50]
	push ecx
	push 0
	push ebx
	push edx
	call CalcDamage::CalcDamageByWT
	fstp qword ptr [esp+8]
	add esp,8
	call _anon_adjust_ramdom_damage
	fild dword ptr [esp+0x44]
	add esp,0x18
	inc esi
	fmul st,st(1)
	fld qword ptr [__real_4059000000000000]
	fdiv st(1),st
	fxch
	faddp st(2),st
	fild dword ptr [esp+0x44]
	fmulp st(2),st
	fdivp st(1),st(0)
	fst qword ptr [esp+0x48]
	call __ftol2_sse
	mov edi,eax
	mov eax,dword ptr [esp+0xAC]
	mov dword ptr [esp+0x28],edi
	test eax,eax
	je Block71

 Block70:
	mov edx,dword ptr [eax+0x14]
	mov eax,dword ptr [esp+0x7C]
	mov ecx,dword ptr [eax+edx*4+0x74D]
	mov dword ptr [esp+0xC0],ecx
	jmp Block72

 Block71:
	mov dword ptr [esp+0xC0],0

 Block72:
	mov eax,dword ptr [esp+0x84]
	mov edx,dword ptr [eax+0xBA0]
	push edx
	add eax,0xB98
	push eax
	call _ZtlSecureFuseHelper<long>::call
	fild dword ptr [esp+0xC8]
	fld qword ptr [__real_4059000000000000]
	mov ebx,dword ptr [esp+0x94]
	mov edx,dword ptr [esp+0xB4]
	fdiv st(1),st
	mov dword ptr [esp+0xC4],eax
	mov eax,dword ptr [esp+0xB8]
	sub esp,8
	lea ecx,[ebx+4]
	fxch
	fstp qword ptr [esp+8]
	fidivr dword ptr [esp+0xCC]
	fld1
	fsubrp st(1),st(0)
	fstp qword ptr [esp]
	push eax
	fld qword ptr [esp+0x5C]
	push ecx
	push edx
	sub esp,8
	fstp qword ptr [esp]
	call get_damage_adjusted_by_elemAttr_1
	mov ebp,dword ptr [TSingleton<CBattleRecordMan>::ms_pInstance]
	fst qword ptr [esp+0x6C]
	add esp,0x24
	test ebp,ebp
	je Block77

 Block73:
	test edi,edi
	je Block75

 Block74:
	fild dword ptr [esp+0x28]
	fsub st(1),st
	fxch
	fmul qword ptr [__real_4059000000000000]
	fdivrp st(1),st(0)
	jmp Block76

 Block75:
	fstp st(0)
	fldz

 Block76:
	call __ftol2_sse
	push eax
	mov ecx,ebp
	call CBattleRecordMan::SetAttrDamageRateInfo
	fld qword ptr [esp+0x48]

 Block77:
	mov eax,dword ptr [ebx+0x58]
	add eax,dword ptr [ebx+0x54]
	test eax,eax
	jg Block79

 Block78:
	xor eax,eax
	mov edi,eax
	jmp Block82

 Block79:
	cmp eax,0x64
	jge Block81

 Block80:
	mov edi,eax
	jmp Block82

 Block81:
	mov edi,0x64

 Block82:
	mov eax,dword ptr [esp+0xCC]
	mov ecx,dword ptr [esp+0x1C]
	add eax,ecx
	cmp eax,0x64
	jl Block84

 Block83:
	mov eax,0x64

 Block84:
	imul eax,edi
	mov ecx,eax
	mov eax,0xAE147AE1
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add edi,eax
	mov dword ptr [esp+0xC0],edi
	mov eax,dword ptr [ebx+0xF8]
	fild dword ptr [esp+0xC0]
	mov dword ptr [esp+0xC0],eax
	fld qword ptr [__real_4059000000000000]
	fld st(0)
	fsubrp st(2),st
	fdiv st(1),st
	fxch
	fmulp st(2),st
	fxch
	fst qword ptr [esp+0x48]
	test eax,eax
	je Block86

 Block85:
	fimul dword ptr [esp+0xC0]
	fdiv st,st(1)
	fstp qword ptr [esp+0x48]
	jmp Block87

 Block86:
	fstp st(0)

 Block87:
	mov ecx,dword ptr [esp+0xAC]
	test ecx,ecx
	je Block91

 Block88:
	mov edx,dword ptr [esp+0xB0]
	fstp st(0)
	push edx
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0xD8]
	push ecx
	add eax,0xD0
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov dword ptr [esp+0xC0],eax
	test eax,eax
	jle Block90

 Block89:
	fild dword ptr [esp+0xC0]
	fld qword ptr [__real_4059000000000000]
	fdiv st(1),st
	fxch
	fmul qword ptr [esp+0x48]
	fstp qword ptr [esp+0x48]
	jmp Block91

 Block90:
	fld qword ptr [__real_4059000000000000]

 Block91:
	mov edx,dword ptr [esp+0x9C]
	cmp dword ptr [edx],0
	jne Block95

 Block92:
	cmp dword ptr [esp+0xA4],0
	jle Block99

 Block93:
	mov eax,0x92492493
	imul esi
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax*8]
	sub esp,0x10
	sub ecx,eax
	mov edx,esi
	fstp qword ptr [esp+8]
	sub edx,ecx
	fldz
	mov eax,dword ptr [esp+edx*4+0x60]
	fstp qword ptr [esp]
	push eax
	call get_rand_1
	add esp,0x14
	fild dword ptr [esp+0xA4]
	inc esi
	fcompp
	fnstsw ax
	test ah,0x41
	jne Block100

 Block94:
	jmp Block96

 Block95:
	fstp st(0)

 Block96:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x14]
	lea eax,[ecx+eax+0x14]
	cmp eax,0x32
	mov dword ptr [esp+0xC0],eax
	jl Block98

 Block97:
	mov dword ptr [esp+0xC0],0x32

 Block98:
	fld qword ptr [__real_4049000000000000]
	mov eax,0x92492493
	imul esi
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax*8]
	sub edx,eax
	sub esp,0x10
	mov eax,esi
	sub eax,edx
	mov eax,dword ptr [esp+eax*4+0x60]
	fstp qword ptr [esp+8]
	fild dword ptr [esp+0xD0]
	fstp qword ptr [esp]
	push eax
	call get_rand_1
	add esp,0x14
	call __ftol2_sse
	mov dword ptr [esp+0xC0],eax
	fild dword ptr [esp+0xC0]
	mov ecx,dword ptr [esp+0xD8]
	mov edx,dword ptr [esp+0xB8]
	inc esi
	fdiv qword ptr [__real_4059000000000000]
	mov dword ptr [edx+ecx*4],1
	fld qword ptr [esp+0x48]
	fmul st(1),st
	faddp st(1),st(0)
	fstp qword ptr [esp+0x48]
	jmp Block100

 Block99:
	fstp st(0)

 Block100:
	mov ebp,dword ptr [esp+0x7C]
	mov edi,0x2328
	xor ebx,ebx

 Block101:
	mov eax,dword ptr [ebp+0x3D]
	push eax
	lea eax,[ebp+0x39]
	push eax
	mov dword ptr [esp+0xC4],ebx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx ecx,ax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,8
	cmp eax,0x16
	je Block103

 Block102:
	cmp ecx,0x7D1
	jne Block104

 Block103:
	mov eax,0x7D1
	jmp Block105

 Block104:
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov eax,ecx
	imul eax,0x3E8

 Block105:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	imul eax,0x2710
	lea edx,[esp+0xBC]
	push edx
	add eax,edi
	push eax
	push ebp
	call CSkillInfo::GetSkillLevel_0
	cmp eax,ebx
	jle Block108

 Block106:
	mov ecx,dword ptr [esp+0xBC]
	mov edx,dword ptr [esp+0x88]
	cmp edx,dword ptr [ecx+0x4C]
	jne Block108

 Block107:
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0xD8]
	push ecx
	add eax,0xD0
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0xC8],eax
	fild dword ptr [esp+0xC8]
	add esp,8
	fdiv qword ptr [__real_4059000000000000]
	fmul qword ptr [esp+0x48]
	fstp qword ptr [esp+0x48]

 Block108:
	inc edi
	cmp edi,0x232A
	jle Block101

 Block109:
	mov ebx,dword ptr [esp+0x90]
	test ebx,ebx
	je Block113

 Block110:
	mov edx,dword ptr [ebx+0x2B0]
	push edx
	lea eax,[ebx+0x2A8]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [ebp+eax*4+0x729]
	add ecx,0x64
	mov dword ptr [esp+0xC8],ecx
	fild dword ptr [esp+0xC8]
	mov edx,dword ptr [ebx+0x6C]
	push edx
	lea eax,[ebx+0x64]
	fdiv qword ptr [__real_4059000000000000]
	push eax
	fmul qword ptr [esp+0x58]
	fstp qword ptr [esp+0x58]
	call _ZtlSecureFuseHelper<int>::call
	add esp,0x10
	test eax,eax
	je Block113

 Block111:
	fld qword ptr [__real_4059000000000000]
	mov eax,0x92492493
	imul esi
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax*8]
	sub esp,0x10
	sub ecx,eax
	mov edx,esi
	fstp qword ptr [esp+8]
	sub edx,ecx
	fldz
	mov eax,dword ptr [esp+edx*4+0x60]
	fstp qword ptr [esp]
	push eax
	call get_rand_1
	add esp,0x14
	fild dword ptr [ebp+0x775]
	inc esi
	fcompp
	fnstsw ax
	test ah,0x41
	jne Block113

 Block112:
	mov eax,dword ptr [ebp+0x779]
	add eax,0x64
	mov dword ptr [esp+0xC0],eax
	fild dword ptr [esp+0xC0]
	fdiv qword ptr [__real_4059000000000000]
	fmul qword ptr [esp+0x48]
	fstp qword ptr [esp+0x48]

 Block113:
	mov edi,dword ptr [esp+0xD4]
	test edi,edi
	je Block115

 Block114:
	mov ecx,dword ptr [esp+0xAC]
	mov edx,dword ptr [ecx]
	push edx
	call get_max_gauge_time
	mov ecx,eax
	mov eax,edi
	imul eax,0x5A
	cdq
	idiv ecx
	add esp,4
	add eax,0xA
	mov dword ptr [esp+0xC0],eax
	fild dword ptr [esp+0xC0]
	fdiv qword ptr [__real_4059000000000000]
	fmul qword ptr [esp+0x48]
	fstp qword ptr [esp+0x48]

 Block115:
	mov edx,dword ptr [esp+0x8C]
	cmp dword ptr [edx+0x144],0
	je Block118

 Block116:
	mov ecx,dword ptr [esp+0xB8]
	mov eax,dword ptr [esp+0xD8]
	cmp dword ptr [ecx+eax*4],0
	jne Block118

 Block117:
	mov edx,dword ptr [esp+0xB4]
	mov dword ptr [edx+eax*4],0
	jmp Block155

 Block118:
	mov ecx,dword ptr [esp+0x88]
	mov edi,dword ptr [esp+0x84]
	lea eax,[esp+0x48]
	push eax
	push ecx
	push edi
	push ebp
	call _anon_ApplyGuidedBulletDamage
	mov edx,dword ptr [edi+0x968]
	push edx
	add edi,0x960
	push edi
	call _ZtlSecureFuseHelper<long>::call
	fld qword ptr [esp+0x60]
	add esp,0x18
	test eax,eax
	je Block120

 Block119:
	fadd st(0),st
	fst qword ptr [esp+0x48]

 Block120:
	mov eax,dword ptr [esp+0x8C]
	mov eax,dword ptr [eax+0x1D0]
	test eax,eax
	je Block122

 Block121:
	add eax,0x64
	mov dword ptr [esp+0xC0],eax
	fild dword ptr [esp+0xC0]
	fmulp st(1),st(0)
	fdiv qword ptr [__real_4059000000000000]
	fst qword ptr [esp+0x48]

 Block122:
	mov eax,dword ptr [esp+0xDC]
	test eax,eax
	je Block124

 Block123:
	add eax,0x64
	mov dword ptr [esp+0xC0],eax
	fild dword ptr [esp+0xC0]
	fmulp st(1),st(0)
	fdiv qword ptr [__real_4059000000000000]
	fstp qword ptr [esp+0x48]
	jmp Block125

 Block124:
	fstp st(0)

 Block125:
	mov ecx,dword ptr [esp+0xAC]
	cmp dword ptr [ecx],0x205D2E
	jne Block128

 Block126:
	mov edi,dword ptr [esp+0xD0]
	cmp edi,1
	jle Block128

 Block127:
	mov edx,dword ptr [esp+0xB0]
	push edx
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x168]
	push ecx
	add eax,0x160
	push eax
	call _ZtlSecureFuseHelper<long>::call
	dec edi
	imul edi,eax
	mov edx,0x64
	add esp,8
	sub edx,edi
	mov dword ptr [esp+0xC0],edx
	fild dword ptr [esp+0xC0]
	fmul qword ptr [esp+0x48]
	fdiv qword ptr [__real_4059000000000000]
	fstp qword ptr [esp+0x48]

 Block128:
	mov ecx,dword ptr [ebx+0x6C]
	lea eax,[ebx+0x64]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block140

 Block129:
	mov ecx,ebx
	mov edx,dword ptr [ecx+0x84]
	lea eax,[ecx+0x7C]
	push edx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0xC8],eax
	fild dword ptr [esp+0xC8]
	add esp,8
	fcomp qword ptr [esp+0x48]
	fnstsw ax
	test ah,0x41
	jne Block140

 Block130:
	cmp dword ptr [esp+0xD8],0
	jne Block140

 Block131:
	xor ebx,ebx
	xor ebp,ebp
	lea ecx,[ecx]

 Block132:
	mov ecx,dword ptr [esp+0x7C]
	mov eax,dword ptr [ecx+0x725]
	test eax,eax
	je Block138

 Block133:
	cmp ebp,dword ptr [eax-4]
	jae Block138

 Block134:
	lea edi,[ebp*8]
	cmp dword ptr [edi+eax],0x55D4A80
	jne Block137

 Block135:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x55D4A80
	call CSkillInfo::GetSkill
	test eax,eax
	je Block137

 Block136:
	mov ecx,dword ptr [esp+0x7C]
	mov edx,dword ptr [ecx+0x725]
	add edx,edi
	mov edx,dword ptr [edx+4]
	push edx
	mov ecx,eax
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x114]
	push ecx
	add eax,0x10C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	add ebx,eax

 Block137:
	inc ebp
	jmp Block132

 Block138:
	fld qword ptr [__real_4059000000000000]
	mov eax,0x92492493
	imul esi
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax*8]
	sub edx,eax
	sub esp,0x10
	mov eax,esi
	sub eax,edx
	mov eax,dword ptr [esp+eax*4+0x60]
	fstp qword ptr [esp+8]
	fldz
	mov dword ptr [esp+0xD0],ebx
	fstp qword ptr [esp]
	push eax
	call get_rand_1
	add esp,0x14
	fild dword ptr [esp+0xC0]
	inc esi
	fcompp
	fnstsw ax
	test ah,0x41
	jne Block140

 Block139:
	mov eax,dword ptr [esp+0x90]
	mov ecx,dword ptr [eax+0x84]
	push ecx
	add eax,0x7C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0xC8],eax
	fild dword ptr [esp+0xC8]
	add esp,8
	fstp qword ptr [esp+0x48]

 Block140:
	mov eax,dword ptr [esp+0x90]
	mov edx,dword ptr [eax+0x6C]
	push edx
	add eax,0x64
	push eax
	xor edi,edi
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block143

 Block141:
	mov eax,dword ptr [esp+0xC8]
	test eax,eax
	je Block143

 Block142:
	mov edi,eax

 Block143:
	mov ebx,dword ptr [esp+0x84]
	mov ecx,dword ptr [esp+0xC4]
	mov eax,dword ptr [esp+0x24]
	mov edx,dword ptr [ebx+0x1300]
	add eax,ecx
	push edx
	add edi,eax
	lea ebp,[ebx+0x12F8]
	push ebp
	mov dword ptr [esp+0xC8],edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block145

 Block144:
	mov eax,dword ptr [ebx+0x1300]
	push eax
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	add edi,eax
	mov dword ptr [esp+0xC0],edi

 Block145:
	mov ecx,dword ptr [ebx+0x704]
	push ecx
	lea edi,[ebx+0x6FC]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block147

 Block146:
	mov edx,dword ptr [ebx+0x704]
	push edx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	dec eax
	mov dword ptr [esp+0x28],eax
	fild dword ptr [esp+0x28]
	fld qword ptr [esp+0x48]
	fmul st(1),st
	fxch
	fdiv qword ptr [__real_4059000000000000]
	faddp st(1),st(0)
	jmp Block148

 Block147:
	fld qword ptr [esp+0x48]

 Block148:
	fild dword ptr [esp+0xC0]
	fmul st,st(1)
	fdiv qword ptr [__real_4059000000000000]
	faddp st(1),st(0)
	fld1
	fcom
	fnstsw ax
	test ah,5
	jp Block150

 Block149:
	fstp st(0)
	fld st(0)
	fld qword ptr [__real_412e847e00000000]
	fcom st(2)
	fnstsw ax
	fstp st(2)
	test ah,0x41
	jne Block151

 Block150:
	fstp st(1)
	jmp Block152

 Block151:
	fstp st(0)

 Block152:
	call __ftol2_sse
	mov ecx,dword ptr [esp+0xB4]
	mov edx,dword ptr [esp+0xD8]
	mov dword ptr [ecx+edx*4],eax
	mov ecx,dword ptr [esp+0x8C]
	mov ecx,dword ptr [ecx+0x204]
	test ecx,ecx
	je Block155

 Block153:
	imul ecx,eax
	mov eax,0xAE147AE1
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx

 Block154:
	mov edx,dword ptr [esp+0xD8]
	mov ecx,dword ptr [esp+0xB4]
	mov dword ptr [ecx+edx*4],eax

 Block155:
	mov eax,dword ptr [esp+0xD8]
	inc eax
	cmp eax,dword ptr [esp+0xA0]
	mov dword ptr [esp+0xD8],eax
	jl Block49

 Block156:
	mov eax,dword ptr [esp+0x9C]
	mov dword ptr [eax],0
	mov eax,dword ptr [esp+0x98]
	mov dword ptr [esp+0x74],0xFFFFFFFF
	test eax,eax
	je Block160

 Block157:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block160

 Block158:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block160

 Block159:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block160:
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x64
	ret 0x64
}
}
// SecondaryStat::_ZtlSecureGet_nBasicStatUp_
__SUB_CLASS0(000FFE80, __fastcall, 7637, SecondaryStat, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x614]
	push eax
	add ecx,0x60C
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// SecondaryStat::GetIncEVA
__SUB_CLASS_THIS(00325900, __thiscall, 7671, SecondaryStat, long, const CharacterData &) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x140]
	push edi
	push eax
	lea ecx,[esi+0x138]
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esi+0x13BC]
	mov edx,dword ptr [ecx]
	mov edi,eax
	mov eax,dword ptr [edx+4]
	add esp,8
	call eax
	test al,al
	je Block3

 Block1:
	mov esi,dword ptr [esp+0x10]
	mov ecx,dword ptr [esi+0x3D]
	push ecx
	lea edx,[esi+0x39]
	push edx
	mov dword ptr [esp+0x10],0
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	add esp,8
	lea ecx,[esp+8]
	push ecx
	movsx ecx,ax
	mov eax,0x10624DD3
	imul ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	dec eax
	neg eax
	sbb eax,eax
	and eax,0xFF67908D
	add eax,0xE66864
	push eax
	push esi
	call CSkillInfo::GetSkillLevel_0
	mov ecx,dword ptr [esp+8]
	test ecx,ecx
	je Block3

 Block2:
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x60]
	push ecx
	add eax,0x58
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp edi,eax
	jl Block4

 Block3:
	mov eax,edi

 Block4:
	pop edi
	pop esi
	pop ecx
	ret 4
}
}
// SecondaryStat::VIEWELEM::VIEWELEM
_SUB_EXCEPTION_HANDLER(320860)
__SUB_CLASS_THIS0(00320860, __thiscall, 7744, SecondaryStat::VIEWELEM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_320860
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+8],esi
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	push eax
	lea ecx,[esi+0xC]
	mov dword ptr [esp+0x18],eax
	int 3// TODO: 	mov dword ptr [esi],offset SecondaryStat::VIEWELEM::`vftable'
	call MY_UINT128::_ctor_1
	mov dword ptr [esi+0x1C],0
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// SecondaryStat::_ZtlSecurePut_nItemMDDR
__SUB_CLASS(00327340, __fastcall, 7639, SecondaryStat, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,edx
	mov edi,ecx
	lea edx,[edi+0xE4]
	mov ecx,esi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [edi+0xEC],eax
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// BasicStat::_ZtlSecureGet_nMMP
__SUB_CLASS0(000706B0, __fastcall, 7610, BasicStat, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x74]
	push eax
	add ecx,0x6C
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// BasicStat::ApplySocketOption
_SUB_EXCEPTION_HANDLER(32FB50)
__SUB_CLASS_THIS(0032FB50, __thiscall, 7622, BasicStat, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_32FB50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x24]
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemOptionInfo>::ms_pInstance]
	call CItemOptionInfo::GetSocketOption
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block4

 Block1:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 8
}
}
// SecondaryStat::IsMovementAffectingStat
_SUB_EXCEPTION_HANDLER(3208C0)
__SUB(003208C0, __cdecl, 7653, int32_t, NakedParam<MY_UINT128>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3208C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xE0
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xE4]
	mov dword ptr fs:[0],eax
	mov eax,1
	test byte ptr [_D__S3__7],al
	jne Block2

 Block1:
	or dword ptr [_D__S3__7],eax
	push 0x80
	push offset CTS_YELLOW_AURA
	lea eax,[esp+0xAC]
	push eax
	push offset CTS_FROZEN
	lea ecx,[esp+0xE4]
	push ecx
	push offset CTS_FLYING
	lea edx,[esp+0x9C]
	push edx
	push offset CTS_DASH_JUMP
	lea eax,[esp+0x64]
	push eax
	push offset CTS_DASH_SPEED
	lea ecx,[esp+0xEC]
	push ecx
	push offset CTS_RIDE_VEHICLE
	lea edx,[esp+0x94]
	push edx
	push offset CTS_ATTRACT
	lea eax,[esp+0x4C]
	push eax
	push offset CTS_BASICSTATUP
	lea ecx,[esp+0x64]
	push ecx
	push offset CTS_GHOST
	lea edx,[esp+0x7C]
	push edx
	push offset CTS_MORPH
	lea eax,[esp+0xA4]
	push eax
	push offset CTS_SLOW
	lea ecx,[esp+0xCC]
	push ecx
	push offset CTS_WEAKNESS
	lea edx,[esp+0xF4]
	push edx
	push offset CTS_STUN
	lea eax,[esp+0x11C]
	push eax
	push offset CTS_JUMP
	lea ecx,[esp+0x74]
	push ecx
	mov ecx,offset CTS_SPEED
	mov dword ptr [esp+0x160],0
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	mov ecx,eax
	call MY_UINT128::operator|
	push eax
	mov ecx,offset _D_S_UFILTER
	call MY_UINT128::_ctor_2
	mov dword ptr [esp+0xEC],0xFFFFFFFF

 Block2:
	push offset _D_S_UFILTER
	lea edx,[esp+8]
	push edx
	lea ecx,[esp+0xFC]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_neg
	xor ecx,ecx
	test al,al
	sete cl
	mov eax,ecx
	mov ecx,dword ptr [esp+0xE4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xEC
	ret
}
}
// MobStat::ResetDamagedElemAttr
__SUB_CLASS_THIS(00321270, __thiscall, 7789, MobStat, void, const long *) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push edi
	lea edi,[ecx+4]
	mov ecx,8
	rep movsd
	pop edi
	pop esi
	ret 4
}
}

// SecondaryStat::DecodeForLocal
_SUB_EXCEPTION_HANDLER(3350E0)
__SUB_CLASS_THIS(003350E0, __thiscall, 7679, SecondaryStat, MY_UINT128*, MY_UINT128*, CInPacket &, ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long> &) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3350E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x878
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x888]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea ecx,[esp+0x28]
	call MY_UINT128::_ctor_default
	mov edi,dword ptr [ebp+0xC]
	push 0x10
	lea eax,[esp+0x2C]
	push eax
	mov ecx,edi
	call CInPacket::DecodeBuffer
	call dword ptr [ZImports::_timeGetTime]
	push offset CTS_PAD
	lea ecx,[esp+0x428]
	push ecx
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x2C],eax
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	mov ebx,dword ptr [ebp+0x10]
	test al,al
	je Block7

 Block1:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xC]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x14],eax
	call CInPacket::Decode4
	lea edx,[esi+0x18]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x20],eax
	call CInPacket::Decode4
	mov edx,dword ptr [esp+0x24]
	lea ecx,[edx+eax]
	lea edx,[esi+0x24]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2C],eax
	xor eax,eax
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x890],eax
	lea eax,[esp+0x10]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block6

 Block2:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],1
	test eax,eax
	je Block4

 Block3:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block6:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_PAD
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block7:
	push offset CTS_PDD
	lea edx,[esp+0x88]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block14

 Block8:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x48]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x50],eax
	call CInPacket::Decode4
	lea edx,[esi+0x54]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x5C],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x60]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x68],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],2
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block13

 Block9:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],3
	test eax,eax
	je Block11

 Block10:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block12

 Block11:
	xor eax,eax

 Block12:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],2
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block13:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_PDD
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block14:
	push offset CTS_MAD
	lea edx,[esp+0x488]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block21

 Block15:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x84]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x8C],eax
	call CInPacket::Decode4
	lea edx,[esi+0x90]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x98],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x9C]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xA4],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],4
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block20

 Block16:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],5
	test eax,eax
	je Block18

 Block17:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block19

 Block18:
	xor eax,eax

 Block19:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],4
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block20:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_MAD
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block21:
	push offset CTS_MDD
	lea edx,[esp+0xA8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block28

 Block22:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xC0]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xC8],eax
	call CInPacket::Decode4
	lea edx,[esi+0xCC]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xD4],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xD8]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xE0],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],6
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block27

 Block23:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],7
	test eax,eax
	je Block25

 Block24:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block26

 Block25:
	xor eax,eax

 Block26:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],6
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block27:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_MDD
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block28:
	push offset CTS_ACC
	lea edx,[esp+0x688]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block35

 Block29:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xFC]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x104],eax
	call CInPacket::Decode4
	lea edx,[esi+0x108]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x110],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x114]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x11C],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],8
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block34

 Block30:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],9
	test eax,eax
	je Block32

 Block31:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block33

 Block32:
	xor eax,eax

 Block33:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],8
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block34:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_ACC
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block35:
	push offset CTS_EVA
	lea edx,[esp+0xC8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block42

 Block36:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x138]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x140],eax
	call CInPacket::Decode4
	lea edx,[esi+0x144]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x14C],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x150]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x158],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xA
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block41

 Block37:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xB
	test eax,eax
	je Block39

 Block38:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block40

 Block39:
	xor eax,eax

 Block40:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xA
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block41:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_EVA
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block42:
	push offset CTS_CRAFT
	lea edx,[esp+0x4A8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block49

 Block43:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x174]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x17C],eax
	call CInPacket::Decode4
	lea edx,[esi+0x180]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x188],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x18C]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x194],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xC
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block48

 Block44:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xD
	test eax,eax
	je Block46

 Block45:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block47

 Block46:
	xor eax,eax

 Block47:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xC
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block48:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_CRAFT
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block49:
	push offset CTS_SPEED
	lea edx,[esp+0xE8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block56

 Block50:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x1A4]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1AC],eax
	call CInPacket::Decode4
	lea edx,[esi+0x1B0]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1B8],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x1BC]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1C4],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xE
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block55

 Block51:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xF
	test eax,eax
	je Block53

 Block52:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block54

 Block53:
	xor eax,eax

 Block54:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xE
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block55:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_SPEED
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block56:
	push offset CTS_JUMP
	lea edx,[esp+0x788]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block63

 Block57:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x1D4]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1DC],eax
	call CInPacket::Decode4
	lea edx,[esi+0x1E0]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1E8],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x1EC]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1F4],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x10
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block62

 Block58:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x11
	test eax,eax
	je Block60

 Block59:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block61

 Block60:
	xor eax,eax

 Block61:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x10
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block62:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_JUMP
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block63:
	push offset CTS_EMHP
	lea edx,[esp+0x108]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block70

 Block64:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xF88]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xF90],eax
	call CInPacket::Decode4
	lea edx,[esi+0xF94]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xF9C],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xFA0]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xFA8],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x12
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block69

 Block65:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x13
	test eax,eax
	je Block67

 Block66:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block68

 Block67:
	xor eax,eax

 Block68:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x12
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block69:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_EMHP
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block70:
	push offset CTS_EMMP
	lea edx,[esp+0x4C8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block77

 Block71:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xFB8]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xFC0],eax
	call CInPacket::Decode4
	lea edx,[esi+0xFC4]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xFCC],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xFD0]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xFD8],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x14
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block76

 Block72:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x15
	test eax,eax
	je Block74

 Block73:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block75

 Block74:
	xor eax,eax

 Block75:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x14
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block76:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_EMMP
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block77:
	push offset CTS_EPAD
	lea edx,[esp+0x128]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block84

 Block78:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xFE8]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xFF0],eax
	call CInPacket::Decode4
	lea edx,[esi+0xFF4]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xFFC],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x1000]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1008],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x16
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block83

 Block79:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x17
	test eax,eax
	je Block81

 Block80:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block82

 Block81:
	xor eax,eax

 Block82:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x16
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block83:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_EPAD
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block84:
	push offset CTS_EPDD
	lea edx,[esp+0x6A8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block91

 Block85:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x1018]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1020],eax
	call CInPacket::Decode4
	lea edx,[esi+0x1024]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x102C],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x1030]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1038],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x18
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block90

 Block86:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x19
	test eax,eax
	je Block88

 Block87:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block89

 Block88:
	xor eax,eax

 Block89:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x18
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block90:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_EPDD
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block91:
	push offset CTS_EMDD
	lea edx,[esp+0x148]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block98

 Block92:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x1048]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1050],eax
	call CInPacket::Decode4
	lea edx,[esi+0x1054]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x105C],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x1060]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1068],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x1A
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block97

 Block93:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x1B
	test eax,eax
	je Block95

 Block94:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block96

 Block95:
	xor eax,eax

 Block96:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x1A
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block97:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_EMDD
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block98:
	push offset CTS_MAGICGUARD
	lea edx,[esp+0x4E8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block105

 Block99:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x1F8]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x200],eax
	call CInPacket::Decode4
	lea edx,[esi+0x204]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x20C],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x210]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x218],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x1C
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block104

 Block100:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x1D
	test eax,eax
	je Block102

 Block101:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block103

 Block102:
	xor eax,eax

 Block103:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x1C
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block104:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_MAGICGUARD
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block105:
	push offset CTS_DARK_SIGHT
	lea edx,[esp+0x168]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block112

 Block106:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x21C]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x224],eax
	call CInPacket::Decode4
	lea edx,[esi+0x228]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x230],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x234]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x23C],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x1E
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block111

 Block107:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x1F
	test eax,eax
	je Block109

 Block108:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block110

 Block109:
	xor eax,eax

 Block110:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x1E
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block111:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_DARK_SIGHT
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block112:
	push offset CTS_BOOSTER
	lea edx,[esp+0x808]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block119

 Block113:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x258]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x260],eax
	call CInPacket::Decode4
	lea edx,[esi+0x264]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x26C],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x270]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x278],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x20
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block118

 Block114:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x21
	test eax,eax
	je Block116

 Block115:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block117

 Block116:
	xor eax,eax

 Block117:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x20
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block118:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_BOOSTER
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block119:
	push offset CTS_POWERGUARD
	lea edx,[esp+0x188]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block126

 Block120:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x27C]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x284],eax
	call CInPacket::Decode4
	lea edx,[esi+0x288]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x290],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x294]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x29C],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x22
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block125

 Block121:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x23
	test eax,eax
	je Block123

 Block122:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block124

 Block123:
	xor eax,eax

 Block124:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x22
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block125:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_POWERGUARD
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block126:
	push offset CTS_GUARD
	lea edx,[esp+0x508]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block133

 Block127:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x106C]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1074],eax
	call CInPacket::Decode4
	lea edx,[esi+0x1078]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1080],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x1084]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x108C],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x24
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block132

 Block128:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x25
	test eax,eax
	je Block130

 Block129:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block131

 Block130:
	xor eax,eax

 Block131:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x24
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block132:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_GUARD
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block133:
	push offset CTS_SAFETY_DAMAGE
	lea edx,[esp+0x1A8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block140

 Block134:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x10B4]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x10BC],eax
	call CInPacket::Decode4
	lea edx,[esi+0x10C0]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x10C8],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x10CC]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x10D4],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x26
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block139

 Block135:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x27
	test eax,eax
	je Block137

 Block136:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block138

 Block137:
	xor eax,eax

 Block138:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x26
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block139:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_SAFETY_DAMAGE
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block140:
	push offset CTS_SAFETY_ABSORB
	lea edx,[esp+0x6C8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block147

 Block141:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x10D8]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x10E0],eax
	call CInPacket::Decode4
	lea edx,[esi+0x10E4]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x10EC],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x10F0]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x10F8],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x28
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block146

 Block142:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x29
	test eax,eax
	je Block144

 Block143:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block145

 Block144:
	xor eax,eax

 Block145:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x28
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block146:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_SAFETY_ABSORB
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block147:
	push offset CTS_MAXHP
	lea edx,[esp+0x1C8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block154

 Block148:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x2C4]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x2CC],eax
	call CInPacket::Decode4
	lea edx,[esi+0x2D0]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x2D8],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x2DC]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2E4],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x2A
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block153

 Block149:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x2B
	test eax,eax
	je Block151

 Block150:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block152

 Block151:
	xor eax,eax

 Block152:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x2A
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block153:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_MAXHP
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block154:
	push offset CTS_MAXMP
	lea edx,[esp+0x528]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block161

 Block155:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x2E8]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x2F0],eax
	call CInPacket::Decode4
	lea edx,[esi+0x2F4]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x2FC],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x300]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x308],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x2C
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block160

 Block156:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x2D
	test eax,eax
	je Block158

 Block157:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block159

 Block158:
	xor eax,eax

 Block159:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x2C
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block160:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_MAXMP
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block161:
	push offset CTS_INVINCIBLE
	lea edx,[esp+0x1E8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block168

 Block162:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x30C]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x314],eax
	call CInPacket::Decode4
	lea edx,[esi+0x318]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x320],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x324]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x32C],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x2E
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block167

 Block163:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x2F
	test eax,eax
	je Block165

 Block164:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block166

 Block165:
	xor eax,eax

 Block166:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x2E
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block167:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_INVINCIBLE
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block168:
	push offset CTS_SOUL_ARROW
	lea edx,[esp+0x7A8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block175

 Block169:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x330]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x338],eax
	call CInPacket::Decode4
	lea edx,[esi+0x33C]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x344],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x348]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x350],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x30
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block174

 Block170:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x31
	test eax,eax
	je Block172

 Block171:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block173

 Block172:
	xor eax,eax

 Block173:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x30
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block174:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_SOUL_ARROW
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block175:
	push offset CTS_STUN
	lea edx,[esp+0x208]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block182

 Block176:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x354]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x35C],eax
	call CInPacket::Decode4
	lea edx,[esi+0x360]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x368],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x36C]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x374],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x32
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block181

 Block177:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x33
	test eax,eax
	je Block179

 Block178:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block180

 Block179:
	xor eax,eax

 Block180:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x32
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block181:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_STUN
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block182:
	push offset CTS_POISON
	lea edx,[esp+0x548]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block189

 Block183:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x378]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x380],eax
	call CInPacket::Decode4
	lea edx,[esi+0x384]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x38C],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x390]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x398],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x34
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block188

 Block184:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x35
	test eax,eax
	je Block186

 Block185:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block187

 Block186:
	xor eax,eax

 Block187:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x34
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block188:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_POISON
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block189:
	push offset CTS_SEAL
	lea edx,[esp+0x228]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block196

 Block190:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x39C]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x3A4],eax
	call CInPacket::Decode4
	lea edx,[esi+0x3A8]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x3B0],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x3B4]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3BC],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x36
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block195

 Block191:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x37
	test eax,eax
	je Block193

 Block192:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block194

 Block193:
	xor eax,eax

 Block194:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x36
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block195:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_SEAL
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block196:
	push offset CTS_DARKNESS
	lea edx,[esp+0x6E8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block203

 Block197:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x3C0]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x3C8],eax
	call CInPacket::Decode4
	lea edx,[esi+0x3CC]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x3D4],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x3D8]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x3E0],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x38
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block202

 Block198:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x39
	test eax,eax
	je Block200

 Block199:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block201

 Block200:
	xor eax,eax

 Block201:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x38
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block202:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_DARKNESS
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block203:
	push offset CTS_COMBO_COUNTER
	lea edx,[esp+0x248]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block210

 Block204:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x3E4]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x3EC],eax
	call CInPacket::Decode4
	lea edx,[esi+0x3F0]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x3F8],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x3FC]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x404],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x3A
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block209

 Block205:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x3B
	test eax,eax
	je Block207

 Block206:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block208

 Block207:
	xor eax,eax

 Block208:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x3A
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block209:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_COMBO_COUNTER
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block210:
	push offset CTS_WEAPON_CHARGE
	lea edx,[esp+0x568]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block217

 Block211:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x414]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x41C],eax
	call CInPacket::Decode4
	lea edx,[esi+0x420]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x428],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x42C]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x434],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x3C
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block216

 Block212:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x3D
	test eax,eax
	je Block214

 Block213:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block215

 Block214:
	xor eax,eax

 Block215:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x3C
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block216:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_WEAPON_CHARGE
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block217:
	push offset CTS_DRAGONBLOOD
	lea edx,[esp+0x268]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block224

 Block218:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x438]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x440],eax
	call CInPacket::Decode4
	lea edx,[esi+0x444]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x44C],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x450]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x458],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x3E
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block223

 Block219:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x3F
	test eax,eax
	je Block221

 Block220:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block222

 Block221:
	xor eax,eax

 Block222:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x3E
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block223:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_DRAGONBLOOD
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block224:
	push offset CTS_HOLYSYMBOL
	lea edx,[esp+0x848]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block231

 Block225:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x45C]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x464],eax
	call CInPacket::Decode4
	lea edx,[esi+0x468]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x470],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x474]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x47C],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x40
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block230

 Block226:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x41
	test eax,eax
	je Block228

 Block227:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block229

 Block228:
	xor eax,eax

 Block229:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x40
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block230:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_HOLYSYMBOL
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block231:
	push offset CTS_MESOUP
	lea edx,[esp+0x288]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block238

 Block232:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x480]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x488],eax
	call CInPacket::Decode4
	lea edx,[esi+0x48C]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x494],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x498]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x4A0],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x42
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block237

 Block233:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x43
	test eax,eax
	je Block235

 Block234:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block236

 Block235:
	xor eax,eax

 Block236:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x42
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block237:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_MESOUP
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block238:
	push offset CTS_SHADOW_PARTNER
	lea edx,[esp+0x588]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block245

 Block239:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x4A4]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x4AC],eax
	call CInPacket::Decode4
	lea edx,[esi+0x4B0]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x4B8],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x4BC]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x4C4],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x44
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block244

 Block240:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x45
	test eax,eax
	je Block242

 Block241:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block243

 Block242:
	xor eax,eax

 Block243:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x44
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block244:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_SHADOW_PARTNER
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block245:
	push offset CTS_PICKPOCKET
	lea edx,[esp+0x2A8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block252

 Block246:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x4C8]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x4D0],eax
	call CInPacket::Decode4
	lea edx,[esi+0x4D4]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x4DC],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x4E0]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x4E8],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x46
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block251

 Block247:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x47
	test eax,eax
	je Block249

 Block248:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block250

 Block249:
	xor eax,eax

 Block250:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x46
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block251:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_PICKPOCKET
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block252:
	push offset CTS_MESOGUARD
	lea edx,[esp+0x708]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block259

 Block253:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x4EC]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x4F4],eax
	call CInPacket::Decode4
	lea edx,[esi+0x4F8]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x500],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x504]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x50C],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x48
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block258

 Block254:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x49
	test eax,eax
	je Block256

 Block255:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block257

 Block256:
	xor eax,eax

 Block257:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x48
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block258:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_MESOGUARD
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block259:
	push offset CTS_THAW
	lea edx,[esp+0x2C8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block266

 Block260:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x510]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x518],eax
	call CInPacket::Decode4
	lea edx,[esi+0x51C]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x524],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x528]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x530],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x4A
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block265

 Block261:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x4B
	test eax,eax
	je Block263

 Block262:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block264

 Block263:
	xor eax,eax

 Block264:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x4A
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block265:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_THAW
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block266:
	push offset CTS_WEAKNESS
	lea edx,[esp+0x5A8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block273

 Block267:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x534]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x53C],eax
	call CInPacket::Decode4
	lea edx,[esi+0x540]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x548],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x54C]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x554],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x4C
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block272

 Block268:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x4D
	test eax,eax
	je Block270

 Block269:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block271

 Block270:
	xor eax,eax

 Block271:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x4C
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block272:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_WEAKNESS
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block273:
	push offset CTS_CURSE
	lea edx,[esp+0x2E8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block280

 Block274:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x558]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x560],eax
	call CInPacket::Decode4
	lea edx,[esi+0x564]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x56C],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x570]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x578],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x4E
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block279

 Block275:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x4F
	test eax,eax
	je Block277

 Block276:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block278

 Block277:
	xor eax,eax

 Block278:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x4E
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block279:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_CURSE
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block280:
	push offset CTS_SLOW
	lea edx,[esp+0x7C8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block287

 Block281:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x57C]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x584],eax
	call CInPacket::Decode4
	lea edx,[esi+0x588]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x590],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x594]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x59C],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x50
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block286

 Block282:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x51
	test eax,eax
	je Block284

 Block283:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block285

 Block284:
	xor eax,eax

 Block285:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x50
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block286:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_SLOW
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block287:
	push offset CTS_MORPH
	lea edx,[esp+0x308]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block294

 Block288:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x5A0]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x5A8],eax
	call CInPacket::Decode4
	lea edx,[esi+0x5AC]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x5B4],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x5B8]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x5C0],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x52
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block293

 Block289:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x53
	test eax,eax
	je Block291

 Block290:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block292

 Block291:
	xor eax,eax

 Block292:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x52
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block293:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_MORPH
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block294:
	push offset CTS_GHOST
	lea edx,[esp+0x5C8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block301

 Block295:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x5C4]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x5CC],eax
	call CInPacket::Decode4
	lea edx,[esi+0x5D0]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x5D8],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x5DC]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x5E4],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x54
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block300

 Block296:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x55
	test eax,eax
	je Block298

 Block297:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block299

 Block298:
	xor eax,eax

 Block299:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x54
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block300:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_GHOST
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block301:
	push offset CTS_REGEN
	lea edx,[esp+0x328]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block308

 Block302:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x5E8]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x5F0],eax
	call CInPacket::Decode4
	lea edx,[esi+0x5F4]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x5FC],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x600]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x608],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x56
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block307

 Block303:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x57
	test eax,eax
	je Block305

 Block304:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block306

 Block305:
	xor eax,eax

 Block306:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x56
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block307:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_REGEN
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block308:
	push offset CTS_BASICSTATUP
	lea edx,[esp+0x728]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block315

 Block309:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x60C]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x614],eax
	call CInPacket::Decode4
	lea edx,[esi+0x618]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x620],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x624]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x62C],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x58
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block314

 Block310:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x59
	test eax,eax
	je Block312

 Block311:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block313

 Block312:
	xor eax,eax

 Block313:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x58
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block314:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_BASICSTATUP
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block315:
	push offset CTS_STANCE
	lea edx,[esp+0x348]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block322

 Block316:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x630]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x638],eax
	call CInPacket::Decode4
	lea edx,[esi+0x63C]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x644],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x648]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x650],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x5A
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block321

 Block317:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x5B
	test eax,eax
	je Block319

 Block318:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block320

 Block319:
	xor eax,eax

 Block320:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x5A
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block321:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_STANCE
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block322:
	push offset CTS_SHARPEYES
	lea edx,[esp+0x5E8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block329

 Block323:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x654]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x65C],eax
	call CInPacket::Decode4
	lea edx,[esi+0x660]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x668],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x66C]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x674],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x5C
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block328

 Block324:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x5D
	test eax,eax
	je Block326

 Block325:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block327

 Block326:
	xor eax,eax

 Block327:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x5C
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block328:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_SHARPEYES
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block329:
	push offset CTS_MANA_REFLECTION
	lea edx,[esp+0x368]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block336

 Block330:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x684]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x68C],eax
	call CInPacket::Decode4
	lea edx,[esi+0x690]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x698],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x69C]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x6A4],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x5E
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block335

 Block331:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x5F
	test eax,eax
	je Block333

 Block332:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block334

 Block333:
	xor eax,eax

 Block334:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x5E
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block335:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_MANA_REFLECTION
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block336:
	push offset CTS_ATTRACT
	lea edx,[esp+0x828]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block343

 Block337:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x6A8]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x6B0],eax
	call CInPacket::Decode4
	lea edx,[esi+0x6B4]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x6BC],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x6C0]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x6C8],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x60
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block342

 Block338:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x61
	test eax,eax
	je Block340

 Block339:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block341

 Block340:
	xor eax,eax

 Block341:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x60
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block342:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_ATTRACT
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block343:
	push offset CTS_SPIRIT_JAVELIN
	lea edx,[esp+0x388]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block350

 Block344:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x6CC]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x6D4],eax
	call CInPacket::Decode4
	lea edx,[esi+0x6D8]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x6E0],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x6E4]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x6EC],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x62
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block349

 Block345:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x63
	test eax,eax
	je Block347

 Block346:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block348

 Block347:
	xor eax,eax

 Block348:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x62
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block349:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_SPIRIT_JAVELIN
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block350:
	push offset CTS_INFINITY
	lea edx,[esp+0x608]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block357

 Block351:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x6FC]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x704],eax
	call CInPacket::Decode4
	lea edx,[esi+0x708]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x710],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x714]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x71C],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x64
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block356

 Block352:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x65
	test eax,eax
	je Block354

 Block353:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block355

 Block354:
	xor eax,eax

 Block355:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x64
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block356:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_INFINITY
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block357:
	push offset CTS_HOLYSHIELD
	lea edx,[esp+0x3A8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block364

 Block358:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x72C]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x734],eax
	call CInPacket::Decode4
	lea edx,[esi+0x738]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x740],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x744]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x74C],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x66
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block363

 Block359:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x67
	test eax,eax
	je Block361

 Block360:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block362

 Block361:
	xor eax,eax

 Block362:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x66
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block363:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_HOLYSHIELD
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block364:
	push offset CTS_HAMSTRING
	lea edx,[esp+0x748]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block371

 Block365:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x750]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x758],eax
	call CInPacket::Decode4
	lea edx,[esi+0x75C]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x764],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x768]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x770],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x68
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block370

 Block366:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x69
	test eax,eax
	je Block368

 Block367:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block369

 Block368:
	xor eax,eax

 Block369:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x68
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block370:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_HAMSTRING
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block371:
	push offset CTS_BLIND
	lea edx,[esp+0x3C8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block378

 Block372:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x774]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x77C],eax
	call CInPacket::Decode4
	lea edx,[esi+0x780]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x788],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x78C]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x794],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x6A
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block377

 Block373:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x6B
	test eax,eax
	je Block375

 Block374:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block376

 Block375:
	xor eax,eax

 Block376:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x6A
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block377:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_BLIND
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block378:
	push offset CTS_CONCENTRATION
	lea edx,[esp+0x628]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block385

 Block379:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x798]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x7A0],eax
	call CInPacket::Decode4
	lea edx,[esi+0x7A4]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x7AC],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x7B0]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x7B8],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x6C
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block384

 Block380:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x6D
	test eax,eax
	je Block382

 Block381:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block383

 Block382:
	xor eax,eax

 Block383:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x6C
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block384:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_CONCENTRATION
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block385:
	push offset CTS_BAN_MAP
	lea edx,[esp+0x3E8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block392

 Block386:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x7BC]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x7C4],eax
	call CInPacket::Decode4
	lea edx,[esi+0x7C8]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x7D0],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x7D4]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x7DC],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x6E
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block391

 Block387:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x6F
	test eax,eax
	je Block389

 Block388:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block390

 Block389:
	xor eax,eax

 Block390:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x6E
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block391:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_BAN_MAP
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block392:
	push offset CTS_MAXLEVELBUFF
	lea edx,[esp+0x7E8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block399

 Block393:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x7EC]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x7F4],eax
	call CInPacket::Decode4
	lea edx,[esi+0x7F8]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x800],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x804]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x80C],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x70
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block398

 Block394:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x71
	test eax,eax
	je Block396

 Block395:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block397

 Block396:
	xor eax,eax

 Block397:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x70
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block398:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_MAXLEVELBUFF
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block399:
	push offset CTS_BARRIER
	lea edx,[esp+0x408]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block406

 Block400:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x8F4]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x8FC],eax
	call CInPacket::Decode4
	lea edx,[esi+0x90C]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x914],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x900]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x908],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x72
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block405

 Block401:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x73
	test eax,eax
	je Block403

 Block402:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block404

 Block403:
	xor eax,eax

 Block404:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x72
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block405:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_BARRIER
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block406:
	push offset CTS_DOJANG_SHIELD
	lea edx,[esp+0x648]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block413

 Block407:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x918]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x920],eax
	call CInPacket::Decode4
	lea edx,[esi+0x930]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x938],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x924]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x92C],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x74
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block412

 Block408:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x75
	test eax,eax
	je Block410

 Block409:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block411

 Block410:
	xor eax,eax

 Block411:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x74
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block412:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_DOJANG_SHIELD
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block413:
	push offset CTS_REVERSE_INPUT
	lea edx,[esp+0x68]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block420

 Block414:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x93C]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x944],eax
	call CInPacket::Decode4
	lea edx,[esi+0x948]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x950],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x954]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x95C],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x76
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block419

 Block415:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x77
	test eax,eax
	je Block417

 Block416:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block418

 Block417:
	xor eax,eax

 Block418:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x76
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block419:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_REVERSE_INPUT
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block420:
	push offset CTS_MESOUPBYITEM
	lea edx,[esp+0x768]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block427

 Block421:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x9B4]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x9BC],eax
	call CInPacket::Decode4
	lea edx,[esi+0x9C0]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x9C8],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x9CC]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x9D4],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x78
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block426

 Block422:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x79
	test eax,eax
	je Block424

 Block423:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block425

 Block424:
	xor eax,eax

 Block425:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x78
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block426:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_MESOUPBYITEM
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block427:
	push offset CTS_ITEMUPBYITEM
	lea edx,[esp+0x448]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block434

 Block428:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x9E4]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x9EC],eax
	call CInPacket::Decode4
	lea edx,[esi+0x9F0]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x9F8],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x9FC]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xA04],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x7A
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block433

 Block429:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x7B
	test eax,eax
	je Block431

 Block430:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block432

 Block431:
	xor eax,eax

 Block432:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x7A
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block433:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_ITEMUPBYITEM
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block434:
	push offset CTS_RESPECT_P_IMMUNE
	lea edx,[esp+0x668]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block441

 Block435:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xA20]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xA28],eax
	call CInPacket::Decode4
	lea edx,[esi+0xA2C]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xA34],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xA38]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xA40],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x7C
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block440

 Block436:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x7D
	test eax,eax
	je Block438

 Block437:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block439

 Block438:
	xor eax,eax

 Block439:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x7C
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block440:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_RESPECT_P_IMMUNE
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block441:
	push offset CTS_RESPECT_M_IMMUNE
	lea edx,[esp+0x468]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block448

 Block442:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xA50]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xA58],eax
	call CInPacket::Decode4
	lea edx,[esi+0xA5C]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xA64],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xA68]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xA70],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x7E
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block447

 Block443:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x7F
	test eax,eax
	je Block445

 Block444:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block446

 Block445:
	xor eax,eax

 Block446:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x7E
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block447:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_RESPECT_M_IMMUNE
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block448:
	push offset CTS_DEFENSE_ATT
	lea edx,[esp+0x868]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block455

 Block449:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xA7C]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xA84],eax
	call CInPacket::Decode4
	lea edx,[esi+0xA88]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xA90],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xA94]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xA9C],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x80
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block454

 Block450:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x81
	test eax,eax
	je Block452

 Block451:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block453

 Block452:
	xor eax,eax

 Block453:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x80
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block454:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_DEFENSE_ATT
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block455:
	push offset CTS_DEFENSE_STATE
	lea edx,[esp+0x78]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block462

 Block456:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xAA8]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xAB0],eax
	call CInPacket::Decode4
	lea edx,[esi+0xAB4]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xABC],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xAC0]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xAC8],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x82
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block461

 Block457:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x83
	test eax,eax
	je Block459

 Block458:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block460

 Block459:
	xor eax,eax

 Block460:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x82
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block461:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_DEFENSE_STATE
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block462:
	push offset CTS_DOJANG_BERSERK
	lea edx,[esp+0x98]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block469

 Block463:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x960]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x968],eax
	call CInPacket::Decode4
	lea edx,[esi+0x96C]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x974],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x978]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x980],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x84
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block468

 Block464:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x85
	test eax,eax
	je Block466

 Block465:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block467

 Block466:
	xor eax,eax

 Block467:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x84
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block468:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_DOJANG_BERSERK
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block469:
	push offset CTS_DOJANG_INVINCIBLE
	lea edx,[esp+0xB8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block476

 Block470:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x984]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x98C],eax
	call CInPacket::Decode4
	lea edx,[esi+0x990]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x998],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x99C]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x9A4],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x86
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block475

 Block471:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x87
	test eax,eax
	je Block473

 Block472:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block474

 Block473:
	xor eax,eax

 Block474:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x86
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block475:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_DOJANG_INVINCIBLE
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block476:
	push offset CTS_SPARK
	lea edx,[esp+0xD8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block483

 Block477:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xB2C]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xB34],eax
	call CInPacket::Decode4
	lea edx,[esi+0xB38]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xB40],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xB44]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xB4C],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x88
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block482

 Block478:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x89
	test eax,eax
	je Block480

 Block479:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block481

 Block480:
	xor eax,eax

 Block481:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x88
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block482:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_SPARK
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block483:
	push offset CTS_SOUL_MASTER_FINAL
	lea edx,[esp+0xF8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block490

 Block484:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xB50]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xB58],eax
	call CInPacket::Decode4
	lea edx,[esi+0xB5C]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xB64],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xB68]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xB70],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x8A
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block489

 Block485:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x8B
	test eax,eax
	je Block487

 Block486:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block488

 Block487:
	xor eax,eax

 Block488:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x8A
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block489:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_SOUL_MASTER_FINAL
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block490:
	push offset CTS_WIND_BREAKER_FINAL
	lea edx,[esp+0x118]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block497

 Block491:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xB74]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xB7C],eax
	call CInPacket::Decode4
	lea edx,[esi+0xB80]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xB88],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xB8C]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xB94],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x8C
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block496

 Block492:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x8D
	test eax,eax
	je Block494

 Block493:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block495

 Block494:
	xor eax,eax

 Block495:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x8C
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block496:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_WIND_BREAKER_FINAL
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block497:
	push offset CTS_ELEMENTAL_RESET
	lea edx,[esp+0x138]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block504

 Block498:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xB98]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xBA0],eax
	call CInPacket::Decode4
	lea edx,[esi+0xBA4]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xBAC],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xBB0]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xBB8],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x8E
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block503

 Block499:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x8F
	test eax,eax
	je Block501

 Block500:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block502

 Block501:
	xor eax,eax

 Block502:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x8E
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block503:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_ELEMENTAL_RESET
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block504:
	push offset CTS_WIND_WALK
	lea edx,[esp+0x158]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block511

 Block505:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xBBC]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xBC4],eax
	call CInPacket::Decode4
	lea edx,[esi+0xBC8]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xBD0],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xBD4]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xBDC],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x90
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block510

 Block506:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x91
	test eax,eax
	je Block508

 Block507:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block509

 Block508:
	xor eax,eax

 Block509:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x90
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block510:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_WIND_WALK
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block511:
	push offset CTS_EVENTRATE
	lea edx,[esp+0x178]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block518

 Block512:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xBE0]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xBE8],eax
	call CInPacket::Decode4
	lea edx,[esi+0xBEC]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xBF4],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xBF8]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xC00],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x92
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block517

 Block513:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x93
	test eax,eax
	je Block515

 Block514:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block516

 Block515:
	xor eax,eax

 Block516:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x92
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block517:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_EVENTRATE
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block518:
	push offset CTS_COMBO_ABILITY_BUFF
	lea edx,[esp+0x198]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block525

 Block519:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xC04]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xC0C],eax
	call CInPacket::Decode4
	lea edx,[esi+0xC10]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xC18],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xC1C]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xC24],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x94
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block524

 Block520:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x95
	test eax,eax
	je Block522

 Block521:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block523

 Block522:
	xor eax,eax

 Block523:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x94
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block524:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_COMBO_ABILITY_BUFF
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block525:
	push offset CTS_COMBODRAIN
	lea edx,[esp+0x1B8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block532

 Block526:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xC28]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xC30],eax
	call CInPacket::Decode4
	lea edx,[esi+0xC34]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xC3C],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xC40]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xC48],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x96
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block531

 Block527:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x97
	test eax,eax
	je Block529

 Block528:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block530

 Block529:
	xor eax,eax

 Block530:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x96
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block531:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_COMBODRAIN
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block532:
	push offset CTS_COMBOBARRIER
	lea edx,[esp+0x1D8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block539

 Block533:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xC4C]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xC54],eax
	call CInPacket::Decode4
	lea edx,[esi+0xC58]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xC60],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xC64]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xC6C],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x98
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block538

 Block534:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x99
	test eax,eax
	je Block536

 Block535:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block537

 Block536:
	xor eax,eax

 Block537:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x98
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block538:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_COMBOBARRIER
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block539:
	push offset CTS_BODYPRESSURE
	lea edx,[esp+0x1F8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block546

 Block540:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xC70]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xC78],eax
	call CInPacket::Decode4
	lea edx,[esi+0xC7C]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xC84],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xC88]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xC90],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x9A
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block545

 Block541:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x9B
	test eax,eax
	je Block543

 Block542:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block544

 Block543:
	xor eax,eax

 Block544:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x9A
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block545:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_BODYPRESSURE
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block546:
	push offset CTS_SMART_KNOCKBACK
	lea edx,[esp+0x218]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block553

 Block547:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xC94]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xC9C],eax
	call CInPacket::Decode4
	lea edx,[esi+0xCA0]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xCA8],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xCAC]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xCB4],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x9C
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block552

 Block548:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x9D
	test eax,eax
	je Block550

 Block549:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block551

 Block550:
	xor eax,eax

 Block551:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x9C
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block552:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_SMART_KNOCKBACK
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block553:
	push offset CTS_REPEAT_EFFECT
	lea edx,[esp+0x238]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block560

 Block554:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xCB8]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xCC0],eax
	call CInPacket::Decode4
	lea edx,[esi+0xCC4]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xCCC],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xCD0]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xCD8],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0x9E
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block559

 Block555:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0x9F
	test eax,eax
	je Block557

 Block556:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block558

 Block557:
	xor eax,eax

 Block558:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0x9E
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block559:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_REPEAT_EFFECT
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block560:
	push offset CTS_EXPBUFFRATE
	lea edx,[esp+0x258]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block567

 Block561:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xCDC]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xCE4],eax
	call CInPacket::Decode4
	lea edx,[esi+0xCE8]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xCF0],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xCF4]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xCFC],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xA0
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block566

 Block562:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xA1
	test eax,eax
	je Block564

 Block563:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block565

 Block564:
	xor eax,eax

 Block565:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xA0
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block566:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_EXPBUFFRATE
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block567:
	push offset CTS_INC_EFFECT_HP_POTION
	lea edx,[esp+0x278]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block574

 Block568:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xAD8]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xAE0],eax
	call CInPacket::Decode4
	lea edx,[esi+0xAE4]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xAEC],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xAF0]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xAF8],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xA2
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block573

 Block569:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xA3
	test eax,eax
	je Block571

 Block570:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block572

 Block571:
	xor eax,eax

 Block572:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xA2
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block573:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_INC_EFFECT_HP_POTION
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block574:
	push offset CTS_INC_EFFECT_MP_POTION
	lea edx,[esp+0x298]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block581

 Block575:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xB08]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xB10],eax
	call CInPacket::Decode4
	lea edx,[esi+0xB14]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xB1C],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xB20]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xB28],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xA4
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block580

 Block576:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xA5
	test eax,eax
	je Block578

 Block577:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block579

 Block578:
	xor eax,eax

 Block579:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xA4
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block580:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_INC_EFFECT_MP_POTION
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block581:
	push offset CTS_STOP_PORTION
	lea edx,[esp+0x2B8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block588

 Block582:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xD00]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xD08],eax
	call CInPacket::Decode4
	lea edx,[esi+0xD0C]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xD14],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xD18]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xD20],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xA6
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block587

 Block583:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xA7
	test eax,eax
	je Block585

 Block584:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block586

 Block585:
	xor eax,eax

 Block586:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xA6
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block587:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_STOP_PORTION
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block588:
	push offset CTS_STOP_MOTION
	lea edx,[esp+0x2D8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block595

 Block589:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xD24]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xD2C],eax
	call CInPacket::Decode4
	lea edx,[esi+0xD30]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xD38],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xD3C]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xD44],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xA8
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block594

 Block590:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xA9
	test eax,eax
	je Block592

 Block591:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block593

 Block592:
	xor eax,eax

 Block593:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xA8
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block594:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_STOP_MOTION
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block595:
	push offset CTS_FEAR
	lea edx,[esp+0x2F8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block602

 Block596:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xD48]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xD50],eax
	call CInPacket::Decode4
	lea edx,[esi+0xD54]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xD5C],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xD60]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xD68],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xAA
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block601

 Block597:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xAB
	test eax,eax
	je Block599

 Block598:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block600

 Block599:
	xor eax,eax

 Block600:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xAA
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block601:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_FEAR
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block602:
	push offset CTS_EVANSLOW
	lea edx,[esp+0x318]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block609

 Block603:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xD6C]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xD74],eax
	call CInPacket::Decode4
	lea edx,[esi+0xD78]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xD80],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xD84]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xD8C],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xAC
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block608

 Block604:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xAD
	test eax,eax
	je Block606

 Block605:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block607

 Block606:
	xor eax,eax

 Block607:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xAC
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block608:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_EVANSLOW
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block609:
	push offset CTS_MAGIC_SHIELD
	lea edx,[esp+0x338]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block616

 Block610:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xD90]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xD98],eax
	call CInPacket::Decode4
	lea edx,[esi+0xD9C]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xDA4],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xDA8]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xDB0],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xAE
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block615

 Block611:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xAF
	test eax,eax
	je Block613

 Block612:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block614

 Block613:
	xor eax,eax

 Block614:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xAE
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block615:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_MAGIC_SHIELD
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block616:
	push offset CTS_MAGIC_RESISTANCE
	lea edx,[esp+0x358]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block623

 Block617:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xDC0]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xDC8],eax
	call CInPacket::Decode4
	lea edx,[esi+0xDCC]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xDD4],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xDD8]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xDE0],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xB0
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block622

 Block618:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xB1
	test eax,eax
	je Block620

 Block619:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block621

 Block620:
	xor eax,eax

 Block621:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xB0
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block622:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_MAGIC_RESISTANCE
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block623:
	push offset CTS_SOULSTONE
	lea edx,[esp+0x378]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block630

 Block624:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xDE4]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xDEC],eax
	call CInPacket::Decode4
	lea edx,[esi+0xDF0]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xDF8],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xDFC]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xE04],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xB2
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block629

 Block625:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xB3
	test eax,eax
	je Block627

 Block626:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block628

 Block627:
	xor eax,eax

 Block628:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xB2
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block629:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_SOULSTONE
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block630:
	push offset CTS_FLYING
	lea edx,[esp+0x398]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block637

 Block631:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xE08]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xE10],eax
	call CInPacket::Decode4
	lea edx,[esi+0xE14]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xE1C],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xE20]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xE28],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xB4
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block636

 Block632:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xB5
	test eax,eax
	je Block634

 Block633:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block635

 Block634:
	xor eax,eax

 Block635:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xB4
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block636:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_FLYING
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block637:
	push offset CTS_FROZEN
	lea edx,[esp+0x3B8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block644

 Block638:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xE2C]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xE34],eax
	call CInPacket::Decode4
	lea edx,[esi+0xE38]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xE40],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xE44]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xE4C],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xB6
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block643

 Block639:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xB7
	test eax,eax
	je Block641

 Block640:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block642

 Block641:
	xor eax,eax

 Block642:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xB6
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block643:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_FROZEN
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block644:
	push offset CTS_ASSISTCHARGE
	lea edx,[esp+0x3D8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block651

 Block645:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xE50]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xE58],eax
	call CInPacket::Decode4
	lea edx,[esi+0xE5C]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xE64],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xE68]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xE70],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xB8
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block650

 Block646:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xB9
	test eax,eax
	je Block648

 Block647:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block649

 Block648:
	xor eax,eax

 Block649:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xB8
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block650:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_ASSISTCHARGE
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block651:
	push offset CTS_ENRAGE
	lea edx,[esp+0x3F8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block658

 Block652:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xE74]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xE7C],eax
	call CInPacket::Decode4
	lea edx,[esi+0xE80]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xE88],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xE8C]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xE94],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xBA
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block657

 Block653:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xBB
	test eax,eax
	je Block655

 Block654:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block656

 Block655:
	xor eax,eax

 Block656:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xBA
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block657:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_ENRAGE
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block658:
	push offset CTS_SUDDEN_DEATH
	lea edx,[esp+0x418]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block665

 Block659:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xE98]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xEA0],eax
	call CInPacket::Decode4
	lea edx,[esi+0xEA4]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xEAC],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xEB0]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xEB8],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xBC
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block664

 Block660:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xBD
	test eax,eax
	je Block662

 Block661:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block663

 Block662:
	xor eax,eax

 Block663:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xBC
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block664:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_SUDDEN_DEATH
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block665:
	push offset CTS_NOT_DAMAGED
	lea edx,[esp+0x438]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block672

 Block666:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xEC8]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xED0],eax
	call CInPacket::Decode4
	lea edx,[esi+0xED4]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xEDC],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xEE0]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xEE8],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xBE
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block671

 Block667:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xBF
	test eax,eax
	je Block669

 Block668:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block670

 Block669:
	xor eax,eax

 Block670:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xBE
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block671:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_NOT_DAMAGED
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block672:
	push offset CTS_FINAL_CUT
	lea edx,[esp+0x458]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block679

 Block673:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xEEC]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xEF4],eax
	call CInPacket::Decode4
	lea edx,[esi+0xEF8]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xF00],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xF04]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xF0C],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xC0
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block678

 Block674:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xC1
	test eax,eax
	je Block676

 Block675:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block677

 Block676:
	xor eax,eax

 Block677:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xC0
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block678:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_FINAL_CUT
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block679:
	push offset CTS_THORNSEFFECT
	lea edx,[esp+0x478]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block686

 Block680:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xF10]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xF18],eax
	call CInPacket::Decode4
	lea edx,[esi+0xF1C]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xF24],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xF28]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xF30],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xC2
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block685

 Block681:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xC3
	test eax,eax
	je Block683

 Block682:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block684

 Block683:
	xor eax,eax

 Block684:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xC2
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block685:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_THORNSEFFECT
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block686:
	push offset CTS_SWALLOW_ATTACK_DAMAGE
	lea edx,[esp+0x498]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block693

 Block687:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xF34]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xF3C],eax
	call CInPacket::Decode4
	lea edx,[esi+0xF40]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xF48],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xF4C]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xF54],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xC4
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block692

 Block688:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xC5
	test eax,eax
	je Block690

 Block689:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block691

 Block690:
	xor eax,eax

 Block691:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xC4
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block692:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_SWALLOW_ATTACK_DAMAGE
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block693:
	push offset CTS_MOREWILD_DAMAGE_UP
	lea edx,[esp+0x4B8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block700

 Block694:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0xF58]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xF60],eax
	call CInPacket::Decode4
	lea edx,[esi+0xF64]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0xF6C],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0xF70]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0xF78],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xC6
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block699

 Block695:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xC7
	test eax,eax
	je Block697

 Block696:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block698

 Block697:
	xor eax,eax

 Block698:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xC6
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block699:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_MOREWILD_DAMAGE_UP
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block700:
	push offset CTS_MINE
	lea edx,[esp+0x4D8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block707

 Block701:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x1090]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1098],eax
	call CInPacket::Decode4
	lea edx,[esi+0x109C]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x10A4],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x10A8]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x10B0],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xC8
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block706

 Block702:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xC9
	test eax,eax
	je Block704

 Block703:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block705

 Block704:
	xor eax,eax

 Block705:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xC8
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block706:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_MINE
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block707:
	push offset CTS_CYCLONE
	lea edx,[esp+0x4F8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block714

 Block708:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x10FC]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1104],eax
	call CInPacket::Decode4
	lea edx,[esi+0x1108]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1110],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x1114]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x111C],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xCA
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block713

 Block709:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xCB
	test eax,eax
	je Block711

 Block710:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block712

 Block711:
	xor eax,eax

 Block712:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xCA
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block713:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_CYCLONE
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block714:
	push offset CTS_SWALLOW_CRITICAL
	lea edx,[esp+0x518]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block721

 Block715:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x1120]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1128],eax
	call CInPacket::Decode4
	lea edx,[esi+0x112C]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1134],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x1138]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1140],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xCC
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block720

 Block716:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xCD
	test eax,eax
	je Block718

 Block717:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block719

 Block718:
	xor eax,eax

 Block719:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xCC
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block720:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_SWALLOW_CRITICAL
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block721:
	push offset CTS_SWALLOW_MAX_MP
	lea edx,[esp+0x538]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block728

 Block722:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x1144]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x114C],eax
	call CInPacket::Decode4
	lea edx,[esi+0x1150]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1158],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x115C]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1164],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xCE
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block727

 Block723:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xCF
	test eax,eax
	je Block725

 Block724:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block726

 Block725:
	xor eax,eax

 Block726:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xCE
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block727:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_SWALLOW_MAX_MP
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block728:
	push offset CTS_SWALLOW_DEFENCE
	lea edx,[esp+0x558]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block735

 Block729:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x1168]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1170],eax
	call CInPacket::Decode4
	lea edx,[esi+0x1174]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x117C],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x1180]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1188],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xD0
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block734

 Block730:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xD1
	test eax,eax
	je Block732

 Block731:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block733

 Block732:
	xor eax,eax

 Block733:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xD0
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block734:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_SWALLOW_DEFENCE
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block735:
	push offset CTS_SWALLOW_EVASION
	lea edx,[esp+0x578]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block742

 Block736:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x118C]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1194],eax
	call CInPacket::Decode4
	lea edx,[esi+0x1198]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x11A0],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x11A4]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x11AC],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xD2
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block741

 Block737:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xD3
	test eax,eax
	je Block739

 Block738:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block740

 Block739:
	xor eax,eax

 Block740:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xD2
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block741:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_SWALLOW_EVASION
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block742:
	push offset CTS_CONVERSION
	lea edx,[esp+0x598]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block749

 Block743:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x11BC]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x11C4],eax
	call CInPacket::Decode4
	lea edx,[esi+0x11C8]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x11D0],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x11D4]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x11DC],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xD4
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block748

 Block744:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xD5
	test eax,eax
	je Block746

 Block745:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block747

 Block746:
	xor eax,eax

 Block747:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xD4
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block748:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_CONVERSION
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block749:
	push offset CTS_REVIVE
	lea edx,[esp+0x5B8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block756

 Block750:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x11E0]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x11E8],eax
	call CInPacket::Decode4
	lea edx,[esi+0x11EC]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x11F4],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x11F8]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1200],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xD6
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block755

 Block751:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xD7
	test eax,eax
	je Block753

 Block752:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block754

 Block753:
	xor eax,eax

 Block754:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xD6
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block755:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_REVIVE
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block756:
	push offset CTS_SNEAK
	lea edx,[esp+0x5D8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block763

 Block757:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x1204]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x120C],eax
	call CInPacket::Decode4
	lea edx,[esi+0x1210]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1218],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x121C]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1224],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xD8
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block762

 Block758:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xD9
	test eax,eax
	je Block760

 Block759:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block761

 Block760:
	xor eax,eax

 Block761:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xD8
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block762:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_SNEAK
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block763:
	push offset CTS_MECHANIC
	lea edx,[esp+0x5F8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block770

 Block764:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x2A0]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x2A8],eax
	call CInPacket::Decode4
	lea edx,[esi+0x2AC]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x2B4],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x2B8]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x2C0],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xDA
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block769

 Block765:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xDB
	test eax,eax
	je Block767

 Block766:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block768

 Block767:
	xor eax,eax

 Block768:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xDA
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block769:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_MECHANIC
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block770:
	push offset CTS_AURA
	lea edx,[esp+0x618]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block777

 Block771:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x810]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x818],eax
	call CInPacket::Decode4
	lea edx,[esi+0x81C]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x824],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x828]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x830],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xDC
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block776

 Block772:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xDD
	test eax,eax
	je Block774

 Block773:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block775

 Block774:
	xor eax,eax

 Block775:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xDC
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block776:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_AURA
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block777:
	push offset CTS_DARK_AURA
	lea edx,[esp+0x638]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block784

 Block778:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x864]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x86C],eax
	call CInPacket::Decode4
	lea edx,[esi+0x870]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x878],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x87C]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x884],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xDE
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block783

 Block779:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xDF
	test eax,eax
	je Block781

 Block780:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block782

 Block781:
	xor eax,eax

 Block782:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xDE
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block783:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_DARK_AURA
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block784:
	push offset CTS_BLUE_AURA
	lea edx,[esp+0x658]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block791

 Block785:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x894]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x89C],eax
	call CInPacket::Decode4
	lea edx,[esi+0x8A0]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x8A8],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x8AC]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x8B4],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xE0
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block790

 Block786:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xE1
	test eax,eax
	je Block788

 Block787:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block789

 Block788:
	xor eax,eax

 Block789:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xE0
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block790:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_BLUE_AURA
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block791:
	push offset CTS_YELLOW_AURA
	lea edx,[esp+0x678]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block798

 Block792:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x8C4]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x8CC],eax
	call CInPacket::Decode4
	lea edx,[esi+0x8D0]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x8D8],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x8DC]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x8E4],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xE2
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block797

 Block793:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xE3
	test eax,eax
	je Block795

 Block794:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block796

 Block795:
	xor eax,eax

 Block796:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xE2
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block797:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_YELLOW_AURA
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block798:
	push offset CTS_SUPERBODY
	lea edx,[esp+0x698]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block805

 Block799:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x840]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x848],eax
	call CInPacket::Decode4
	lea edx,[esi+0x84C]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x854],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x858]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x860],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xE4
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block804

 Block800:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xE5
	test eax,eax
	je Block802

 Block801:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block803

 Block802:
	xor eax,eax

 Block803:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xE4
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block804:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_SUPERBODY
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block805:
	push offset CTS_MOREWILD_MAX_HP
	lea edx,[esp+0x6B8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block812

 Block806:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x1228]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1230],eax
	call CInPacket::Decode4
	lea edx,[esi+0x1234]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x123C],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x1240]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1248],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xE6
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block811

 Block807:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xE7
	test eax,eax
	je Block809

 Block808:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block810

 Block809:
	xor eax,eax

 Block810:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xE6
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block811:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_MOREWILD_MAX_HP
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block812:
	push offset CTS_DICE
	lea edx,[esp+0x6D8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block819

 Block813:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x124C]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1254],eax
	call CInPacket::Decode4
	lea edx,[esi+0x1258]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1260],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x1264]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x126C],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xE8
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block818

 Block814:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xE9
	test eax,eax
	je Block816

 Block815:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block817

 Block816:
	xor eax,eax

 Block817:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xE8
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block818:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_DICE
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block819:
	push offset CTS_BLESSING_ARMOR
	lea edx,[esp+0x6F8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block826

 Block820:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x12C8]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x12D0],eax
	call CInPacket::Decode4
	lea edx,[esi+0x12D4]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x12DC],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x12E0]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x12E8],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xEA
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block825

 Block821:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xEB
	test eax,eax
	je Block823

 Block822:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block824

 Block823:
	xor eax,eax

 Block824:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xEA
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block825:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_BLESSING_ARMOR
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block826:
	push offset CTS_DAMR
	lea edx,[esp+0x718]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block833

 Block827:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x12F8]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1300],eax
	call CInPacket::Decode4
	lea edx,[esi+0x1304]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x130C],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x1310]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1318],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xEC
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block832

 Block828:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xED
	test eax,eax
	je Block830

 Block829:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block831

 Block830:
	xor eax,eax

 Block831:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xEC
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block832:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_DAMR
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block833:
	push offset CTS_TELEPORT_MASTERY_ON
	lea edx,[esp+0x738]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block840

 Block834:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x131C]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1324],eax
	call CInPacket::Decode4
	lea edx,[esi+0x1328]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1330],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x1334]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x133C],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xEE
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block839

 Block835:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xEF
	test eax,eax
	je Block837

 Block836:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block838

 Block837:
	xor eax,eax

 Block838:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xEE
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block839:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_TELEPORT_MASTERY_ON
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block840:
	push offset CTS_COMBATORDERS
	lea edx,[esp+0x758]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block847

 Block841:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x1340]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1348],eax
	call CInPacket::Decode4
	lea edx,[esi+0x134C]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1354],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x1358]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1360],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xF0
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block846

 Block842:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xF1
	test eax,eax
	je Block844

 Block843:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block845

 Block844:
	xor eax,eax

 Block845:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xF0
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block846:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_COMBATORDERS
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block847:
	push offset CTS_BEHOLDER
	lea edx,[esp+0x778]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block854

 Block848:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x1364]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x136C],eax
	call CInPacket::Decode4
	lea edx,[esi+0x1370]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1378],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x137C]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x1384],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xF2
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block853

 Block849:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xF3
	test eax,eax
	je Block851

 Block850:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block852

 Block851:
	xor eax,eax

 Block852:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xF2
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block853:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_BEHOLDER
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block854:
	push offset CTS_SUMMON_BOMB
	lea edx,[esp+0x798]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	jz Block861

 Block855:
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	lea edx,[esi+0x1388]
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x1390],eax
	call CInPacket::Decode4
	lea edx,[esi+0x1394]
	mov ecx,eax
	mov dword ptr [esp+0x18],eax
	call _ZtlSecureTearHelper<long>::call
	mov ecx,edi
	mov dword ptr [esi+0x139C],eax
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x24]
	add ecx,eax
	lea edx,[esi+0x13A0]
	mov dword ptr [esp+0x1C],eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x13A8],eax
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x10]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xF4
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block860

 Block856:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x890],0xF5
	test eax,eax
	je Block858

 Block857:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block859

 Block858:
	xor eax,eax

 Block859:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xF4
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block860:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [eax+0x1C],ecx
	push offset CTS_SUMMON_BOMB
	lea ecx,[eax+0xC]
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block861:
	mov ecx,edi
	call CInPacket::Decode1
	lea edx,[esi+0xA74]
	mov cl,al
	call _ZtlSecureTearHelper<char>::call
	mov ecx,edi
	mov dword ptr [esi+0xA78],eax
	call CInPacket::Decode1
	lea edx,[esi+0xAA0]
	mov cl,al
	call _ZtlSecureTearHelper<char>::call
	push offset CTS_SWALLOWBUFF
	lea edx,[esp+0x7B8]
	push edx
	lea ecx,[esp+0x30]
	mov dword ptr [esi+0xAA4],eax
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block863

 Block862:
	mov ecx,edi
	call CInPacket::Decode1
	movzx ecx,al
	lea edx,[esi+0x11B0]
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x11B8],eax

 Block863:
	push offset CTS_DICE
	lea eax,[esp+0x7D8]
	push eax
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block866

 Block864:
	lea ecx,[esi+0x1270]
	mov dword ptr [esp+0x3C],ecx
	mov dword ptr [esp+0x38],0x16
	lea esp,[esp]

 Block865:
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [ecx],eax
	add ecx,4
	sub dword ptr [esp+0x38],1
	mov dword ptr [esp+0x3C],ecx
	jne Block865

 Block866:
	push offset CTS_BLESSING_ARMOR
	lea edx,[esp+0x7F8]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block868

 Block867:
	mov ecx,edi
	call CInPacket::Decode4
	lea edx,[esi+0x12EC]
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x12F4],eax

 Block868:
	lea eax,[esi+0x13BC]
	mov dword ptr [esp+0x38],0x7A
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x20],7

 Block869:
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [ecx]
	push 0x80
	push eax
	push 1
	lea ecx,[esp+0x820]
	mov dword ptr [esp+0x28],edx
	call MY_UINT128::_ctor_1
	mov ecx,eax
	call MY_UINT128::shiftLeft
	push eax
	lea ecx,[esp+0x4C]
	call MY_UINT128::_ctor_2
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x838]
	push edx
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block879

 Block870:
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x18]
	push edi
	call edx
	mov ecx,dword ptr [esp+0x1C]
	add ecx,0x18
	call ZFatalSection::Lock
	mov eax,dword ptr [esp+0x1C]
	add eax,0x18
	je Block873

 Block871:
	mov eax,dword ptr [esp+0x1C]
	add eax,0x18
	add dword ptr [eax+4],0xFFFFFFFF
	jne Block873

 Block872:
	mov dword ptr [eax],0

 Block873:
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [ecx+0x10]
	mov edx,dword ptr [ecx]
	mov dword ptr [esp+0x18],eax
	mov eax,dword ptr [edx+0x10]
	call eax
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x14],0
	lea ecx,[esp+0x10]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	mov dword ptr [esp+0x898],0xF6
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::GetAt
	test eax,eax
	jne Block878

 Block874:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x40],eax
	mov byte ptr [esp+0x890],0xF7
	test eax,eax
	je Block876

 Block875:
	mov ecx,eax
	call SecondaryStat::VIEWELEM::_ctor_default
	jmp Block877

 Block876:
	xor eax,eax

 Block877:
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x894],0xF6
	call ZRef<SecondaryStat::VIEWELEM>::op_assign_ptr
	lea eax,[esp+0x10]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebx
	call ZMap<long, ZRef<SecondaryStat::VIEWELEM>, long>::Insert

 Block878:
	mov ecx,dword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [esp+0x14]
	push 0x80
	push ecx
	push 1
	lea ecx,[esp+0x860]
	mov dword ptr [eax+0x1C],edx
	call MY_UINT128::_ctor_1
	mov ecx,eax
	call MY_UINT128::shiftLeft
	push eax
	lea ecx,[esp+0x5C]
	call MY_UINT128::_ctor_2
	mov ecx,dword ptr [esp+0x14]
	lea edx,[esp+0x54]
	push edx
	add ecx,0xC
	call MY_UINT128::operator|=
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x890],0xFFFFFFFF
	call ZRef<SecondaryStat::VIEWELEM>::~ZRef<SecondaryStat::VIEWELEM>

 Block879:
	add dword ptr [esp+0x3C],8
	mov eax,1
	add dword ptr [esp+0x38],eax
	sub dword ptr [esp+0x20],eax
	jne Block869

 Block880:
	push offset CTS_DARK_SIGHT
	lea eax,[esp+0x878]
	push eax
	lea ecx,[esp+0x30]
	call MY_UINT128::operator&
	mov ecx,eax
	call MY_UINT128::op_bool
	test al,al
	je Block883

 Block881:
	mov ecx,dword ptr [esp+0x24]
	lea edi,[esi+0x240]
	mov edx,edi
	call _ZtlSecureTearHelper<long>::call
	push eax
	push edi
	mov dword ptr [esi+0x248],eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block883

 Block882:
	mov ecx,dword ptr [esi+0x248]
	push ecx
	push edi
	call _ZtlSecureFuseHelper<long>::call
	inc eax
	add esp,8
	mov edx,edi
	mov ecx,eax
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x248],eax

 Block883:
	mov esi,dword ptr [ebp+8]
	push 0x80
	lea edx,[esp+0x2C]
	push edx
	mov ecx,esi
	call MY_UINT128::_ctor_2
	mov eax,esi
	mov ecx,dword ptr [esp+0x888]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC
}
}
// _anon_adjust_ramdom_damage
__SUB(00326690, __cdecl, 131957, double, double, long, double, long) {
__asm {

 Block0:
	fild dword ptr [esp+0x18]
	fdiv qword ptr [__real_4059000000000000]
	fadd qword ptr [esp+0x10]
	fld qword ptr [__real_3fee666666666666]
	fcom
	fnstsw ax
	test ah,0x41
	jne Block2

 Block1:
	fstp st(0)
	jmp Block3

 Block2:
	fstp st(1)

 Block3:
	fld qword ptr [esp+4]
	fmul st(1),st
	fxch
	fadd qword ptr [__real_3fe0000000000000]
	call __ftol2_sse
	mov dword ptr [esp+0x18],eax
	fild dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0xC]
	sub esp,0x10
	fstp qword ptr [esp+8]
	fstp qword ptr [esp]
	push eax
	call get_rand_1
	add esp,0x14
	ret
}
}
// CalcDamage::PDamage
_SUB_EXCEPTION_HANDLER(330130)
__SUB_CLASS_THIS(00330130, __thiscall, 7828, CalcDamage, void, const CharacterData &, const BasicStat &, const SecondaryStat &, const unsigned long, const MobStat &, const CMobTemplate *, const NakedParam<ZRef<PassiveSkillData>>, int32_t &, long, long, long, long, long, long, int32_t, const SKILLENTRY *, long, long *, int32_t *, long, long, long, long, long, long, long, long, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_330130
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x9C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB0]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x78],ecx
	mov esi,dword ptr [esp+0xC0]
	mov ecx,dword ptr [esi+0x3D]
	xor edi,edi
	lea eax,[esi+0x39]
	push ecx
	push eax
	mov dword ptr [esp+0xC0],edi
	mov dword ptr [esp+0x50],edi
	mov dword ptr [esp+0x5C],edi
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx edx,ax
	push edx
	call get_shadow_parter_skillid
	add esp,0xC
	cmp eax,0x4215FA
	jg Block7

 Block1:
	je Block6

 Block2:
	cmp eax,0x3EBA9A
	je Block5

 Block3:
	cmp eax,0x404140
	jne Block10

 Block4:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push offset _D_S_PTHIEFMASTERSH
	push eax
	push esi
	call CSkillInfo::GetSkillLevel_0
	mov dword ptr [esp+0x54],eax
	mov eax,dword ptr [_D_S_PTHIEFMASTERSH]
	jmp Block9

 Block5:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push offset _D_S_PHERMITSHADOWP
	push 0x3EBA9A
	push esi
	call CSkillInfo::GetSkillLevel_0
	mov ecx,dword ptr [_D_S_PHERMITSHADOWP]
	mov dword ptr [esp+0x54],eax
	mov dword ptr [esp+0x48],ecx
	jmp Block10

 Block6:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push offset _D_S_PMIRRORIMAING
	push 0x4215FA
	push esi
	call CSkillInfo::GetSkillLevel_0
	mov edx,dword ptr [_D_S_PMIRRORIMAING]
	mov dword ptr [esp+0x54],eax
	mov dword ptr [esp+0x48],edx
	jmp Block10

 Block7:
	cmp eax,0xD75118
	jne Block10

 Block8:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push offset _D_S_PNIGHTWALKERSH
	push eax
	push esi
	call CSkillInfo::GetSkillLevel_0
	mov dword ptr [esp+0x54],eax
	mov eax,dword ptr [_D_S_PNIGHTWALKERSH]

 Block9:
	mov dword ptr [esp+0x48],eax

 Block10:
	mov ecx,dword ptr [esp+0x100]
	cmp ecx,edi
	je Block12

 Block11:
	call SKILLENTRY::GetMaxLevel

 Block12:
	mov eax,dword ptr [esp+0xDC]
	xor ebp,ebp
	xor ebx,ebx
	mov dword ptr [esp+0x34],edi
	mov dword ptr [esp+0x4C],edi
	mov dword ptr [esp+0x6C],edi
	mov dword ptr [esp+0x70],edi
	mov dword ptr [esp+0x5C],edi
	mov dword ptr [esp+0x64],edi
	mov dword ptr [esp+0x60],edi
	mov dword ptr [esp+0x2C],edi
	mov dword ptr [esp+0x38],edi
	cmp eax,edi
	je Block21

 Block13:
	mov ecx,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+8]
	mov esi,dword ptr [eax+0x34]
	mov ebp,dword ptr [eax+0x3C]
	mov ebx,dword ptr [eax+0x40]
	mov dword ptr [esp+0x4C],ecx
	mov ecx,dword ptr [eax+0x18]
	mov dword ptr [esp+0x34],edx
	mov edx,dword ptr [eax+0x30]
	mov dword ptr [esp+0x6C],ecx
	mov ecx,dword ptr [eax+0xC]
	mov dword ptr [esp+0x5C],edx
	mov edx,dword ptr [eax+0x48]
	mov dword ptr [esp+0x64],ecx
	mov ecx,dword ptr [eax+0x58]
	mov dword ptr [esp+0x60],edx
	mov edx,dword ptr [eax+0x5C]
	mov dword ptr [esp+0x2C],ecx
	xor ecx,ecx
	mov dword ptr [esp+0x70],esi
	mov dword ptr [esp+0x38],edx
	mov dword ptr [esp+0x20],ecx
	mov byte ptr [esp+0xB8],1
	cmp dword ptr [eax+0x80],edi
	je Block17

 Block14:
	cmp dword ptr [esp+0x100],edi
	je Block17

 Block15:
	mov edx,dword ptr [esp+0x100]
	lea ecx,[esp+0x1C]
	push ecx
	push edx
	lea ecx,[eax+0x74]
	call ZMap<long, ZRef<AdditionPsd>, long>::GetAt
	mov ecx,dword ptr [esp+0x20]
	test eax,eax
	je Block17

 Block16:
	mov eax,dword ptr [ecx]
	add dword ptr [esp+0x34],eax
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [ecx+8]
	add dword ptr [esp+0x64],edx
	add dword ptr [esp+0x6C],eax
	add esi,dword ptr [ecx+0x10]
	mov edx,dword ptr [ecx+0xC]
	mov eax,dword ptr [ecx+0x18]
	add dword ptr [esp+0x5C],edx
	add dword ptr [esp+0x60],eax
	mov dword ptr [esp+0x70],esi

 Block17:
	mov byte ptr [esp+0xB8],0
	cmp ecx,edi
	je Block21

 Block18:
	lea esi,[ecx-0x10]
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block21

 Block19:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,edi
	je Block21

 Block20:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block21:
	xor esi,esi
	xor edi,edi
	lea esp,[esp]

 Block22:
	mov ecx,dword ptr [esp+0x78]
	call CRand32::Random
	mov dword ptr [esp+edi*4+0x88],eax
	inc edi
	cmp edi,7
	jl Block22

 Block23:
	mov eax,dword ptr [esp+0x100]
	test eax,eax
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x28],ecx
	jmp Block26

 Block25:
	mov dword ptr [esp+0x28],0

 Block26:
	mov edi,dword ptr [esp+0xEC]
	push edi
	call get_weapon_type
	mov dword ptr [esp+0x6C],eax
	mov eax,dword ptr [esp+0xC8]
	mov edx,dword ptr [eax+0x38]
	push edx
	add eax,0x30
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x5C],eax
	mov eax,dword ptr [esp+0xD0]
	mov ecx,dword ptr [eax+0x50]
	push ecx
	add eax,0x48
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x6C],eax
	fild dword ptr [esp+0x6C]
	fild dword ptr [esp+0x64]
	add esp,0x14
	fmul qword ptr [__real_3ff3333333333333]
	faddp st(1),st(0)
	call __ftol2_sse
	mov edx,dword ptr [esp+0x4C]
	mov ecx,dword ptr [esp+0xC8]
	push 0
	push eax
	mov eax,dword ptr [esp+0xC8]
	push edx
	push eax
	call SecondaryStat::GetACC
	mov dword ptr [esp+0xA8],eax
	mov eax,dword ptr [esp+0xC8]
	mov ecx,dword ptr [eax+0x12D0]
	push ecx
	add eax,0x12C8
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block28

 Block27:
	mov eax,dword ptr [esp+0xC8]
	mov edx,dword ptr [eax+0x12F4]
	push edx
	add eax,0x12EC
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	jmp Block29

 Block28:
	xor eax,eax

 Block29:
	mov ecx,dword ptr [esp+0xF0]
	mov edx,dword ptr [esp+0xC0]
	push 0
	push eax
	mov eax,dword ptr [esp+0x34]
	push ebp
	push eax
	push ecx
	mov ecx,dword ptr [esp+0xDC]
	push edx
	call SecondaryStat::GetPAD
	mov ecx,dword ptr [esp+0x38]
	mov ebp,dword ptr [esp+0xC8]
	push 0
	mov dword ptr [esp+0x50],eax
	mov eax,dword ptr [esp+0x128]
	push eax
	push ebx
	push ecx
	mov ecx,ebp
	call SecondaryStat::GetMAD
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0xC0]
	push 0
	push 0
	push edx
	mov dword ptr [esp+0xB0],eax
	mov eax,dword ptr [esp+0x100]
	push eax
	push edi
	push ebp
	push ecx
	call get_weapon_mastery
	add esp,0x1C
	cmp dword ptr [esp+0xF8],0x4F
	mov dword ptr [esp+0xAC],eax
	je Block31

 Block30:
	mov ecx,dword ptr [esp+0xF4]
	lea edx,[esp+0x50]
	push edx
	mov edx,dword ptr [esp+0xC4]
	lea eax,[esp+0x5C]
	push eax
	push ecx
	push edi
	push edx
	call get_critical_skill_level
	mov eax,dword ptr [esp+0x6C]
	mov ecx,dword ptr [esp+0x64]
	add esp,0x14
	add eax,5
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x38],ecx
	jmp Block32

 Block31:
	mov ebx,dword ptr [esp+0x104]
	mov edi,dword ptr [esp+0x100]
	push ebx
	mov ecx,edi
	call SKILLENTRY::GetLevelData
	mov edx,dword ptr [eax+0x114]
	push edx
	add eax,0x10C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	add eax,5
	push ebx
	mov ecx,edi
	mov dword ptr [esp+0x34],eax
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x24C]
	push ecx
	add eax,0x244
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov dword ptr [esp+0x38],eax

 Block32:
	mov edx,dword ptr [ebp+0x65C]
	push edx
	lea edi,[ebp+0x654]
	push edi
	call _ZtlSecureFuseHelper<long>::call
	sar eax,8
	add esp,8
	test eax,eax
	jg Block34

 Block33:
	xor eax,eax
	mov dword ptr [esp+0x2C],eax
	jmp Block37

 Block34:
	cmp eax,0x64
	jge Block36

 Block35:
	mov dword ptr [esp+0x2C],eax
	jmp Block37

 Block36:
	mov dword ptr [esp+0x2C],0x64

 Block37:
	mov eax,dword ptr [ebp+0x65C]
	push eax
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [ebp+0xF18]
	and eax,0xFF
	mov ecx,0
	setle cl
	push edx
	lea edi,[ebp+0xF10]
	push edi
	dec ecx
	and ecx,eax
	mov dword ptr [esp+0x60],ecx
	call _ZtlSecureFuseHelper<long>::call
	sar eax,8
	add esp,0x10
	test eax,eax
	jg Block39

 Block38:
	xor eax,eax
	jmp Block40

 Block39:
	cmp eax,0x64
	jge Block42

 Block40:
	mov ebx,eax
	test eax,eax
	jle Block43

 Block41:
	mov eax,dword ptr [ebp+0xF18]
	push eax
	push edi
	call _ZtlSecureFuseHelper<long>::call
	mov edi,eax
	add esp,8
	and edi,0xFF
	jmp Block44

 Block42:
	mov ebx,0x64
	jmp Block41

 Block43:
	xor edi,edi

 Block44:
	mov ecx,dword ptr [ebp+0x1128]
	push ecx
	lea edx,[ebp+0x1120]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [esp+0x34]
	add esp,8
	cmp ebx,dword ptr [esp+0x2C]
	jl Block46

 Block45:
	mov ecx,ebx

 Block46:
	mov ebx,dword ptr [esp+0x38]
	add ecx,eax
	add dword ptr [esp+0x30],ecx
	mov ecx,dword ptr [esp+0xC0]
	mov eax,dword ptr [ecx+0x76D]
	add ebx,edi
	test eax,eax
	jg Block48

 Block47:
	xor eax,eax
	jmp Block50

 Block48:
	cmp eax,0x64
	jl Block50

 Block49:
	mov eax,0x64

 Block50:
	add dword ptr [esp+0x30],eax
	add ebx,dword ptr [ecx+0x771]
	mov eax,dword ptr [esp+0xD0]
	cmp dword ptr [eax+0x94],0
	mov dword ptr [esp+0x38],ebx
	je Block57

 Block51:
	lea edx,[esp+0x2C]
	push edx
	push offset CCtrlEdit::GetRTTI
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	mov dword ptr [esp+0x38],0
	call CSkillInfo::GetSkillLevel_0
	mov edi,eax
	xor eax,eax
	test edi,edi
	setg al
	test eax,eax
	je Block57

 Block52:
	mov ecx,dword ptr [esp+0x2C]
	push edi
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x114]
	push ecx
	add eax,0x10C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jg Block54

 Block53:
	xor eax,eax
	jmp Block56

 Block54:
	cmp eax,0x64
	jl Block56

 Block55:
	mov eax,0x64

 Block56:
	mov ecx,dword ptr [esp+0x2C]
	add dword ptr [esp+0x30],eax
	push edi
	call SKILLENTRY::GetLevelData
	mov edx,dword ptr [eax+0xD8]
	push edx
	add eax,0xD0
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	add ebx,eax
	mov dword ptr [esp+0x38],ebx

 Block57:
	mov eax,dword ptr [ebp+0xC0C]
	push eax
	lea ebx,[ebp+0xC04]
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block66

 Block58:
	mov edi,dword ptr [esp+0xC0]
	mov ecx,dword ptr [edi+0x3D]
	push ecx
	lea eax,[edi+0x39]
	push eax
	mov dword ptr [esp+0x34],0
	call _ZtlSecureFuseHelper<short>::call
	add esp,8
	movzx eax,ax
	lea edx,[esp+0x2C]
	push edx
	xor edx,edx
	mov ecx,0x7D0
	cmp ax,cx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	setne dl
	dec edx
	and edx,0xFFEF1022
	add edx,0x1421CF0
	push edx
	push edi
	call CSkillInfo::GetSkillLevel_0
	mov edi,eax
	test edi,edi
	je Block66

 Block59:
	mov ecx,dword ptr [esp+0x2C]
	push edi
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x168]
	push ecx
	add eax,0x160
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov edx,dword ptr [esp+0xD0]
	mov ebp,eax
	mov eax,dword ptr [edx+0xC0C]
	push eax
	push ebx
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,eax
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add esp,0x10
	cmp eax,ebp
	jge Block61

 Block60:
	mov ebp,eax

 Block61:
	mov ecx,dword ptr [esp+0x2C]
	push edi
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x174]
	push ecx
	add eax,0x16C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	imul eax,ebp
	add esp,8
	test eax,eax
	jg Block63

 Block62:
	xor eax,eax
	jmp Block65

 Block63:
	cmp eax,0x64
	jl Block65

 Block64:
	mov eax,0x64

 Block65:
	mov ecx,dword ptr [esp+0x2C]
	add dword ptr [esp+0x30],eax
	push edi
	call SKILLENTRY::GetLevelData
	mov edx,dword ptr [eax+0xD8]
	push edx
	add eax,0xD0
	push eax
	call _ZtlSecureFuseHelper<long>::call
	imul eax,ebp
	add esp,8
	add dword ptr [esp+0x38],eax

 Block66:
	mov edi,dword ptr [esp+0x38]
	mov ecx,edi
	imul ecx,dword ptr [esp+0x114]
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add edi,eax
	mov eax,dword ptr [esp+0x110]
	mov dword ptr [esp+0x38],edi
	test eax,eax
	jg Block68

 Block67:
	xor eax,eax
	jmp Block70

 Block68:
	cmp eax,0x64
	jl Block70

 Block69:
	mov eax,0x64

 Block70:
	add dword ptr [esp+0x30],eax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	jg Block72

 Block71:
	xor eax,eax
	jmp Block74

 Block72:
	cmp eax,0x64
	jl Block74

 Block73:
	mov eax,0x64

 Block74:
	mov ecx,dword ptr [esp+0xC8]
	mov ebp,dword ptr [ecx+0x13D4]
	mov edx,dword ptr [ebp]
	add dword ptr [esp+0x30],eax
	mov eax,dword ptr [edx+4]
	mov ecx,ebp
	call eax
	test al,al
	je Block95

 Block75:
	lea edi,[ebp+0x18]
	mov ecx,edi
	call dword ptr [ZFatalSection::_s_pfnTry]
	mov ebx,dword ptr [ZImports::_Sleep]
	test eax,eax
	je Block78

 Block76:
	mov ecx,edi
	call dword ptr [ZFatalSection::_s_pfnTry]
	test eax,eax
	je Block78

 Block77:
	push 0
	call ebx
	mov ecx,edi
	call dword ptr [ZFatalSection::_s_pfnTry]
	test eax,eax
	jne Block77

 Block78:
	test edi,edi
	je Block81

 Block79:
	add dword ptr [edi+4],0xFFFFFFFF
	jne Block81

 Block80:
	mov dword ptr [edi],0

 Block81:
	mov ebp,dword ptr [ebp+0xC]
	mov eax,0x68DB8BAD
	imul ebp
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0xC1
	jne Block95

 Block82:
	mov edx,dword ptr [esp+0xC8]
	mov ebp,dword ptr [edx+0x13D4]
	lea edi,[ebp+0x18]
	mov ecx,edi
	call dword ptr [ZFatalSection::_s_pfnTry]
	test eax,eax
	je Block86

 Block83:
	mov ecx,edi
	call dword ptr [ZFatalSection::_s_pfnTry]
	test eax,eax
	je Block86

 Block84:
	lea esp,[esp]

 Block85:
	push 0
	call ebx
	mov ecx,edi
	call dword ptr [ZFatalSection::_s_pfnTry]
	test eax,eax
	jne Block85

 Block86:
	test edi,edi
	je Block89

 Block87:
	add dword ptr [edi+4],0xFFFFFFFF
	jne Block89

 Block88:
	mov dword ptr [edi],0

 Block89:
	mov ecx,dword ptr [ebp+0xC]
	mov eax,offset _D_RIDING_WILDHUNTE__109+4

 Block90:
	cmp dword ptr [eax],ecx
	je Block93

 Block91:
	add eax,4
	// TODO: 	cmp eax,offset DynamicTermSet::`vftable'
	jl Block90

 Block92:
	jmp Block95

 Block93:
	mov ecx,dword ptr [esp+0xC0]
	lea eax,[esp+0x2C]
	push eax
	push 0x1F78E29
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	mov dword ptr [esp+0x38],0
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	je Block95

 Block94:
	mov ecx,dword ptr [esp+0x2C]
	push eax
	call SKILLENTRY::GetLevelData
	mov edx,dword ptr [eax+0x3FC]
	push edx
	add eax,0x3F4
	push eax
	call _ZtlSecureFuseHelper<long>::call
	xor ecx,ecx
	add esp,8
	test eax,eax
	setle cl
	dec ecx
	and eax,ecx
	add dword ptr [esp+0x30],eax

 Block95:
	mov edi,dword ptr [esp+0x28]
	mov dword ptr [esp+0x80],0
	cmp edi,0x3EE1B0
	jne Block97

 Block96:
	mov edx,dword ptr [esp+0x104]
	mov ecx,dword ptr [esp+0x100]
	push edx
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x114]
	push ecx
	add eax,0x10C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov dword ptr [esp+0x80],eax

 Block97:
	mov dword ptr [esp+0x84],0
	cmp edi,0x1421CF6
	jne Block99

 Block98:
	mov edx,dword ptr [esp+0x104]
	mov ecx,dword ptr [esp+0x100]
	push edx
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x114]
	push ecx
	add eax,0x10C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	mov dword ptr [esp+0x84],eax

 Block99:
	mov dword ptr [esp+0x2C],0
	cmp dword ptr [esp+0xFC],0
	mov ebx,dword ptr [esp+0xE8]
	mov byte ptr [esp+0xB8],2
	je Block102

 Block100:
	lea edx,[esp+0x77]
	push edx
	push ebx
	lea ecx,[esp+0x34]
	call ZArray<long>::_Alloc
	test ebx,ebx
	jle Block102

 Block101:
	mov edi,dword ptr [esp+0x2C]
	mov ecx,ebx
	xor eax,eax
	rep stosd

 Block102:
	mov dword ptr [esp+0x24],0
	test ebx,ebx
	jle Block429

 Block103:
	jmp Block105

 Block105:
	mov edi,dword ptr [esp+0x28]
	mov ebx,dword ptr [esp+0x108]
	mov ecx,dword ptr [esp+0x24]
	mov ebp,dword ptr [esp+0xD4]
	mov eax,dword ptr [esp+0xD0]
	mov dword ptr [ebx+ecx*4],0
	cmp edi,0x3F1
	je Block424

 Block106:
	cmp edi,0x989A71
	je Block424

 Block107:
	cmp edi,0x13130F1
	je Block424

 Block108:
	cmp edi,0x1315801
	je Block424

 Block109:
	cmp edi,0x1C9C771
	je Block424

 Block110:
	cmp edi,0x3FC
	je Block426

 Block111:
	cmp edi,0x989A7C
	je Block426

 Block112:
	cmp edi,0x13130FC
	je Block426

 Block113:
	cmp edi,0x131580C
	je Block426

 Block114:
	cmp edi,0x1C9C77C
	je Block426

 Block115:
	cmp dword ptr [esp+0x138],0
	jne Block117

 Block116:
	cmp dword ptr [eax+0x218],0
	jne Block428

 Block117:
	cmp dword ptr [eax+0xA0],0
	je Block119

 Block118:
	cmp dword ptr [eax+0xA4],0x1424406
	je Block136

 Block119:
	mov eax,0x92492493
	imul esi
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax*8]
	sub edx,eax
	mov eax,esi
	sub eax,edx
	mov eax,dword ptr [esp+eax*4+0x88]
	xor edx,edx
	mov ecx,0x64
	div ecx
	mov eax,dword ptr [esp+0xD0]
	mov ecx,dword ptr [esp+0x78]
	push edx
	mov edx,dword ptr [esp+0xCC]
	push edx
	push eax
	call CalcDamage::CalcPImmune
	inc esi
	test eax,eax
	je Block121

 Block120:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [ebx+ecx*4],1
	jmp Block428

 Block121:
	cmp edi,0x1424406
	jne Block124

 Block122:
	mov ecx,ebp
	call CMobTemplate::_ZtlSecureGet_bBoss
	test eax,eax
	jne Block136

 Block123:
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [ebx+edx*4],1
	jmp Block428

 Block124:
	cmp edi,0x31260F
	je Block126

 Block125:
	cmp edi,0x1F962EB
	jne Block130

 Block126:
	cmp dword ptr [esp+0xF4],1
	jne Block130

 Block127:
	mov ecx,ebp
	call CMobTemplate::_ZtlSecureGet_bBoss
	test eax,eax
	je Block129

 Block128:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [ebx+eax*4],0x7A120
	jmp Block428

 Block129:
	fldz
	mov eax,0x92492493
	imul esi
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax*8]
	sub ecx,eax
	sub esp,0x10
	mov edx,esi
	sub edx,ecx
	mov eax,dword ptr [esp+edx*4+0x98]
	fstp qword ptr [esp+8]
	fld qword ptr [__real_40c3880000000000]
	fstp qword ptr [esp]
	push eax
	call get_rand_1
	fsubr qword ptr [__real_412e847e00000000]
	add esp,0x14
	call __ftol2_sse
	inc esi
	jmp Block427

 Block130:
	cmp edi,0x3EE1B0
	jne Block134

 Block131:
	fldz
	mov eax,0x92492493
	imul esi
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax*8]
	sub edx,eax
	sub esp,0x10
	mov eax,esi
	sub eax,edx
	mov eax,dword ptr [esp+eax*4+0x98]
	fstp qword ptr [esp+8]
	fld qword ptr [__real_4059000000000000]
	fstp qword ptr [esp]
	push eax
	call get_rand_1
	fild dword ptr [esp+0x94]

 Block132:
	fcompp
	add esp,0x14
	inc esi
	fnstsw ax
	test ah,0x41
	jp Block136

 Block133:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [ebx+ecx*4],0
	jmp Block428

 Block134:
	cmp edi,0x1421CF6
	jne Block136

 Block135:
	fldz
	mov eax,0x92492493
	imul esi
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax*8]
	sub edx,eax
	sub esp,0x10
	mov eax,esi
	sub eax,edx
	mov eax,dword ptr [esp+eax*4+0x98]
	fstp qword ptr [esp+8]
	fld qword ptr [__real_4059000000000000]
	fstp qword ptr [esp]
	push eax
	call get_rand_1
	fild dword ptr [esp+0x98]
	jmp Block132

 Block136:
	mov edx,dword ptr [esp+0xD0]
	cmp dword ptr [edx+0xA0],0
	je Block143

 Block137:
	cmp edi,0x30FEFE
	jne Block143

 Block138:
	cmp dword ptr [esp+0xF4],1
	jne Block148

 Block139:
	cmp dword ptr [esp+0x24],0
	jne Block150

 Block140:
	mov ecx,ebp
	call CMobTemplate::_ZtlSecureGet_bBoss
	test eax,eax
	jne Block150

 Block141:
	fld qword ptr [__real_4059000000000000]
	mov eax,0x92492493
	imul esi
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax*8]
	sub esp,0x10
	sub ecx,eax
	mov edx,esi
	fstp qword ptr [esp+8]
	sub edx,ecx
	fldz
	mov eax,dword ptr [esp+edx*4+0x98]
	fstp qword ptr [esp]
	push eax
	call get_rand_1
	mov eax,dword ptr [esp+0x118]
	mov ecx,dword ptr [esp+0x114]
	fstp qword ptr [esp+0x30]
	add esp,0x14
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nProp
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	fld qword ptr [esp+0x1C]
	inc esi
	fcompp
	fnstsw ax
	test ah,5
	jp Block150

 Block142:
	mov ecx,ebp
	call CMobTemplate::_ZtlSecureGet_nMaxHP
	mov dword ptr [ebx],eax
	jmp Block428

 Block143:
	cmp edi,0x4215FB
	jne Block148

 Block144:
	cmp dword ptr [esp+0x24],0
	jne Block148

 Block145:
	mov ecx,ebp
	call CMobTemplate::_ZtlSecureGet_bBoss
	test eax,eax
	jne Block148

 Block146:
	fld qword ptr [__real_4059000000000000]
	mov eax,0x92492493
	imul esi
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax*8]
	sub esp,0x10
	sub ecx,eax
	mov edx,esi
	fstp qword ptr [esp+8]
	sub edx,ecx
	fldz
	mov eax,dword ptr [esp+edx*4+0x98]
	fstp qword ptr [esp]
	push eax
	call get_rand_1
	mov eax,dword ptr [esp+0x118]
	mov ecx,dword ptr [esp+0x114]
	fstp qword ptr [esp+0x30]
	add esp,0x14
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nProp
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	fld qword ptr [esp+0x1C]
	inc esi
	fcompp
	fnstsw ax
	test ah,5
	jp Block148

 Block147:
	mov ecx,ebp
	call CMobTemplate::_ZtlSecureGet_nMaxHP
	mov dword ptr [ebx],eax
	jmp Block428

 Block148:
	cmp dword ptr [esp+0xF4],3
	je Block151

 Block149:
	test edi,edi
	je Block151

 Block150:
	mov ecx,dword ptr [esp+0xC8]
	call SecondaryStat::_ZtlSecureGet_nSeal_
	test eax,eax
	jne Block428

 Block151:
	mov ecx,dword ptr [esp+0xD0]
	mov eax,dword ptr [ecx+0x78]
	add eax,dword ptr [ecx+0x74]
	test eax,eax
	jg Block153

 Block152:
	xor eax,eax
	mov edi,eax
	jmp Block156

 Block153:
	cmp eax,0x270F
	jge Block155

 Block154:
	mov edi,eax
	jmp Block156

 Block155:
	mov edi,0x270F

 Block156:
	mov ecx,dword ptr [esp+0x6C]
	mov edx,dword ptr [esp+0xD0]
	mov eax,dword ptr [edx]
	push ecx
	mov ecx,dword ptr [esp+0xC8]
	push eax
	call BasicStat::_ZtlSecureGet_nLevel
	mov ecx,dword ptr [esp+0xB0]
	push eax
	push edi
	push ecx
	call _anon_calc_accr
	add esp,0x14
	cmp dword ptr [esp+0x138],0
	mov dword ptr [esp+0x14],eax
	jne Block158

 Block157:
	fldz
	mov eax,0x92492493
	imul esi
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax*8]
	sub edx,eax
	sub esp,0x10
	mov eax,esi
	sub eax,edx
	mov eax,dword ptr [esp+eax*4+0x98]
	fstp qword ptr [esp+8]
	fld qword ptr [__real_4059000000000000]
	fstp qword ptr [esp]
	push eax
	call get_rand_1
	fild dword ptr [esp+0x28]
	add esp,0x14
	inc esi
	fcompp
	fnstsw ax
	test ah,5
	jnp Block428

 Block158:
	mov eax,dword ptr [esp+0x100]
	test eax,eax
	je Block166

 Block159:
	cmp dword ptr [eax],0x12A193
	jne Block161

 Block160:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [ebx+ecx*4],1
	jmp Block428

 Block161:
	mov edx,dword ptr [esp+0x104]
	push edx
	mov ecx,eax
	call SKILLENTRY::GetLevelData
	mov ebp,dword ptr [esp+0xC0]
	mov ecx,ebp
	mov edi,eax
	call GW_CharacterStat::_ZtlSecureGet_nJob
	cwde
	push eax
	push 0x42A
	call get_novice_skill_as_race
	mov ecx,dword ptr [esp+0x108]
	add esp,8
	cmp dword ptr [ecx],eax
	je Block165

 Block162:
	mov ecx,ebp
	call GW_CharacterStat::_ZtlSecureGet_nJob
	movsx edx,ax
	push edx
	push 0x42B
	call get_novice_skill_as_race
	mov ecx,dword ptr [esp+0x108]
	add esp,8
	cmp dword ptr [ecx],eax
	je Block165

 Block163:
	mov ecx,edi
	call SKILLLEVELDATA::_ZtlSecureGet_nFixDamage
	test eax,eax
	je Block167

 Block164:
	mov ecx,edi
	call SKILLLEVELDATA::_ZtlSecureGet_nFixDamage
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [ebx+edx*4],eax
	jmp Block428

 Block165:
	mov ecx,edi
	call SKILLLEVELDATA::_ZtlSecureGet_nFixDamage
	jmp Block427

 Block166:
	mov ebp,dword ptr [esp+0xC0]

 Block167:
	mov ecx,dword ptr [esp+0xC8]
	call SecondaryStat::_ZtlSecureGet_nDarkness_
	test eax,eax
	je Block170

 Block168:
	fldz
	mov eax,0x92492493
	imul esi
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax*8]
	sub edx,eax
	sub esp,0x10
	mov eax,esi
	sub eax,edx
	mov eax,dword ptr [esp+eax*4+0x98]
	fstp qword ptr [esp+8]
	fld qword ptr [__real_4059000000000000]
	fstp qword ptr [esp]
	push eax
	call get_rand_1
	fcomp qword ptr [__real_4034000000000000]
	add esp,0x14
	inc esi
	fnstsw ax
	test ah,0x41
	jne Block170

 Block169:
	fld qword ptr [__real_4014000000000000]
	mov eax,0x92492493
	imul esi
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax*8]
	sub esp,0x10
	sub ecx,eax
	mov edx,esi
	fstp qword ptr [esp+8]
	sub edx,ecx
	fldz
	mov eax,dword ptr [esp+edx*4+0x98]
	fstp qword ptr [esp]
	push eax
	call get_rand_1
	add esp,0x14
	call __ftol2_sse
	lea esi,[esi+eax+1]
	jmp Block428

 Block170:
	mov eax,dword ptr [esp+0xD0]
	cmp dword ptr [eax+0xA0],0
	je Block173

 Block171:
	cmp dword ptr [eax+0xA4],0x1424406
	jne Block173

 Block172:
	mov ecx,dword ptr [esp+0xD4]
	call CMobTemplate::_ZtlSecureGet_nMaxHP
	jmp Block427

 Block173:
	mov edi,dword ptr [esp+0x28]
	cmp edi,0x111AEE
	je Block181

 Block174:
	cmp edi,0x12A18F
	je Block181

 Block175:
	cmp edi,0x14282B
	je Block181

 Block176:
	cmp edi,0x41EEE9
	je Block181

 Block177:
	cmp edi,0x12A191
	je Block181

 Block178:
	cmp edi,0x4215FD
	je Block181

 Block179:
	cmp edi,0x41C7DB
	je Block181

 Block180:
	cmp edi,0x4215F8
	jne Block182

 Block181:
	inc esi

 Block182:
	mov ecx,ebp
	call GW_CharacterStat::_ZtlSecureGet_nJob
	movsx edx,ax
	push edx
	call is_aran_job
	add esp,4
	test eax,eax
	je Block184

 Block183:
	mov ecx,ebp
	call GW_CharacterStat::_ZtlSecureGet_nJob

 Block184:
	cmp edi,0x3D0E40
	je Block187

 Block185:
	cmp edi,0xD5A36C
	je Block187

 Block186:
	xor ebx,ebx
	jmp Block188

 Block187:
	mov ebx,1

 Block188:
	cmp edi,0x3EE1AF
	je Block191

 Block189:
	cmp edi,0xD7511D
	je Block191

 Block190:
	xor ebp,ebp
	jmp Block192

 Block191:
	mov ebp,1

 Block192:
	mov eax,dword ptr [esp+0xA4]
	mov ecx,dword ptr [esp+0x4C]
	mov edx,dword ptr [esp+0xC4]
	push eax
	mov eax,dword ptr [esp+0x6C]
	push ecx
	push edx
	push eax
	call CalcDamage::CalcDamageByWT
	fst qword ptr [esp+0x2C]
	add esp,0x10
	test ebx,ebx
	je Block194

 Block193:
	mov eax,0x92492493
	fstp st(0)
	imul esi
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax*8]
	sub ecx,eax
	mov edx,esi
	sub edx,ecx
	mov ecx,dword ptr [esp+0xC4]
	mov edi,dword ptr [esp+edx*4+0x88]
	call BasicStat::_ZtlSecureGet_nLUK
	mov ecx,dword ptr [esp+0xC4]
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	sub esp,8
	fstp qword ptr [esp]
	call BasicStat::_ZtlSecureGet_nLUK
	mov dword ptr [esp+0x1C],eax
	fild dword ptr [esp+0x1C]
	sub esp,8
	fmul qword ptr [__real_3ff6666666666666]
	fstp qword ptr [esp]
	push edi
	call get_rand_1
	fmul qword ptr [__real_4016000000000000]
	jmp Block196

 Block194:
	test ebp,ebp
	je Block197

 Block195:
	mov eax,0x92492493
	fstp st(0)
	imul esi
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax*8]
	sub ecx,eax
	mov edx,esi
	sub edx,ecx
	mov ecx,dword ptr [esp+0xC4]
	mov edi,dword ptr [esp+edx*4+0x88]
	call BasicStat::_ZtlSecureGet_nLUK
	mov ecx,dword ptr [esp+0xC4]
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	sub esp,8
	fstp qword ptr [esp]
	call BasicStat::_ZtlSecureGet_nLUK
	mov dword ptr [esp+0x1C],eax
	fild dword ptr [esp+0x1C]
	sub esp,8
	fmul qword ptr [__real_3ff6666666666666]
	fstp qword ptr [esp]
	push edi
	call get_rand_1
	fmul qword ptr [__real_4018000000000000]

 Block196:
	fimul dword ptr [esp+0x60]
	add esp,0x14
	inc esi
	fdiv qword ptr [__real_4059000000000000]
	fst qword ptr [esp+0x1C]

 Block197:
	mov eax,dword ptr [esp+0x68]
	cmp eax,0x25
	je Block199

 Block198:
	cmp eax,0x26
	jne Block200

 Block199:
	fmul qword ptr [__real_3fc999999999999a]
	fstp qword ptr [esp+0x1C]
	jmp Block201

 Block200:
	fstp st(0)

 Block201:
	mov eax,dword ptr [esp+0xF8]
	push eax
	call is_shoot_action
	add esp,4
	test eax,eax
	jne Block227

 Block202:
	mov edi,dword ptr [esp+0x28]
	push edi
	call is_jaguar_melee_attack_skill
	add esp,4
	test eax,eax
	jne Block227

 Block203:
	cmp edi,0x1F962E9
	je Block227

 Block204:
	mov ecx,dword ptr [esp+0xC8]
	call SecondaryStat::IsMechanicVehicle
	test eax,eax
	jne Block227

 Block205:
	mov eax,dword ptr [esp+0x68]
	cmp eax,0x2D
	je Block207

 Block206:
	cmp eax,0x2E
	jne Block208

 Block207:
	fld qword ptr [esp+0x1C]
	fmul qword ptr [__real_3fe3333333333333]
	fst qword ptr [esp+0x1C]
	jmp Block209

 Block208:
	fld qword ptr [esp+0x1C]

 Block209:
	cmp eax,0x2F
	jne Block215

 Block210:
	cmp edi,0x406849
	je Block226

 Block211:
	cmp edi,0x3EE1B0
	je Block226

 Block212:
	cmp edi,0xD72A0E
	je Block226

 Block213:
	cmp edi,0xD7511E
	je Block226

 Block214:
	fmul qword ptr [__real_3fd999999999999a]
	fstp qword ptr [esp+0x1C]
	jmp Block227

 Block215:
	cmp eax,0x31
	jne Block226

 Block216:
	cmp dword ptr [esp+0xF8],0x76
	je Block226

 Block217:
	cmp dword ptr [esp+0xF8],0x77
	je Block226

 Block218:
	cmp edi,0x4F5C6A
	je Block226

 Block219:
	cmp edi,0x4FAA8B
	je Block226

 Block220:
	cmp edi,0x4FAA8F
	je Block226

 Block221:
	cmp edi,0x4FAA90
	je Block226

 Block222:
	cmp edi,0x423D0B
	je Block226

 Block223:
	fmul qword ptr [__real_3fd999999999999a]
	mov eax,dword ptr [esp+0xF8]
	fst qword ptr [esp+0x1C]
	cmp eax,0x66
	je Block225

 Block224:
	cmp eax,0x65
	jne Block226

 Block225:
	fmul qword ptr [__real_3ffccccccccccccd]
	fstp qword ptr [esp+0x1C]
	jmp Block227

 Block226:
	fstp st(0)

 Block227:
	mov ecx,dword ptr [esp+0xF8]
	push ecx
	call is_pronestab_action
	fld qword ptr [esp+0x20]
	add esp,4
	test eax,eax
	je Block229

 Block228:
	fmul qword ptr [__real_3fb999999999999a]
	fst qword ptr [esp+0x1C]

 Block229:
	test ebx,ebx
	jne Block232

 Block230:
	test ebp,ebp
	jne Block232

 Block231:
	mov eax,0x92492493
	fstp st(0)
	imul esi
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax*8]
	sub edx,eax
	mov eax,esi
	sub eax,edx
	mov ecx,dword ptr [esp+eax*4+0x88]
	mov edx,dword ptr [esp+0xAC]
	mov eax,dword ptr [esp+0x68]
	push edx
	push eax
	call CalcDamage::GetMsateryConstByWT
	push ecx
	fstp qword ptr [esp]
	push ecx
	fld qword ptr [esp+0x2C]
	sub esp,8
	fstp qword ptr [esp]
	call _anon_adjust_ramdom_damage
	add esp,0x18
	inc esi

 Block232:
	cmp dword ptr [esp+0x138],0
	fild dword ptr [esp+0x70]
	fmul st,st(1)
	fld qword ptr [__real_4059000000000000]
	fdiv st(1),st
	fxch
	faddp st(2),st
	fxch
	fst qword ptr [esp+0x1C]
	jne Block236

 Block233:
	mov ebx,dword ptr [esp+0xC4]
	fstp st(1)
	mov ecx,ebx
	fstp st(0)
	call BasicStat::_ZtlSecureGet_nLevel
	mov edi,dword ptr [esp+0xD0]
	cmp eax,dword ptr [edi]
	jge Block235

 Block234:
	mov ecx,ebx
	call BasicStat::_ZtlSecureGet_nLevel
	mov ecx,dword ptr [edi]
	sub ecx,eax
	mov dword ptr [esp+0x14],ecx
	fild dword ptr [esp+0x14]
	fld qword ptr [__real_4059000000000000]
	fld st(0)
	fsubrp st(2),st
	fdiv st(1),st
	fxch
	fmul qword ptr [esp+0x1C]
	jmp Block236

 Block235:
	fld qword ptr [__real_4059000000000000]
	fld qword ptr [esp+0x1C]

 Block236:
	fld st(0)
	call __ftol2_sse
	mov ebx,eax
	mov eax,dword ptr [esp+0x100]
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block238

 Block237:
	mov edx,dword ptr [eax+0x14]
	mov eax,dword ptr [esp+0xC0]
	mov ecx,dword ptr [eax+edx*4+0x74D]
	mov dword ptr [esp+0x3C],ecx
	jmp Block239

 Block238:
	mov dword ptr [esp+0x3C],0

 Block239:
	fild dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x104]
	mov edi,dword ptr [esp+0xD0]
	mov eax,dword ptr [esp+0x100]
	fdivrp st(2),st
	sub esp,0x10
	add edi,4
	fxch
	fstp qword ptr [esp+8]
	fld1
	fstp qword ptr [esp]
	push edx
	push edi
	push eax
	sub esp,8
	fstp qword ptr [esp]
	call get_damage_adjusted_by_elemAttr_1
	mov ebp,dword ptr [TSingleton<CBattleRecordMan>::ms_pInstance]
	fst qword ptr [esp+0x40]
	add esp,0x24
	test ebp,ebp
	je Block244

 Block240:
	test ebx,ebx
	je Block242

 Block241:
	fild dword ptr [esp+0x14]
	fsub st(1),st
	fxch
	fmul qword ptr [__real_4059000000000000]
	fdivrp st(1),st(0)
	jmp Block243

 Block242:
	fstp st(0)
	fldz

 Block243:
	call __ftol2_sse
	push eax
	mov ecx,ebp
	call CBattleRecordMan::SetAttrDamageRateInfo
	fld qword ptr [esp+0x1C]

 Block244:
	mov ebx,dword ptr [esp+0xC0]
	fst qword ptr [esp+0x14]
	mov ebp,dword ptr [esp+0xC8]
	push ebx
	push ebp
	push edi
	sub esp,8
	fstp qword ptr [esp]
	call get_damage_adjusted_by_charged_elemAttr
	add esp,0x14
	fstp qword ptr [esp+0x1C]
	fld qword ptr [esp+0x14]
	push ebx
	push ebp
	push edi
	sub esp,8
	fstp qword ptr [esp]
	call get_damage_adjusted_by_assist_charged_elemAttr
	fadd qword ptr [esp+0x30]
	mov eax,dword ptr [esp+0x3C]
	add esp,0x14
	fstp qword ptr [esp+0x1C]
	cmp eax,0x14011D
	je Block260

 Block245:
	cmp eax,0x40413A
	je Block260

 Block246:
	cmp eax,0x4E23EC
	je Block260

 Block247:
	mov edi,dword ptr [esp+0xD0]
	cmp dword ptr [edi+0x34],0
	lea ebx,[edi+0x34]
	je Block251

 Block248:
	cmp dword ptr [edi+0x3C],0x12536E
	jne Block251

 Block249:
	mov ecx,dword ptr [esp+0xD4]
	call CMobTemplate::_ZtlSecureGet_dwTemplateID
	mov ecx,eax
	mov eax,0xD1B71759
	mul ecx
	shr edx,0xD
	cmp edx,0x372
	je Block251

 Block250:
	fild dword ptr [edi+0x38]
	fdiv qword ptr [__real_4059000000000000]
	fadd qword ptr [__real_3ff0000000000000]
	fimul dword ptr [ebx]
	call __ftol2_sse
	jmp Block252

 Block251:
	mov eax,dword ptr [edi+0x38]
	add eax,dword ptr [ebx]

 Block252:
	test eax,eax
	jg Block254

 Block253:
	xor eax,eax
	mov edi,eax
	jmp Block257

 Block254:
	cmp eax,0x64
	jge Block256

 Block255:
	mov edi,eax
	jmp Block257

 Block256:
	mov edi,0x64

 Block257:
	mov ecx,dword ptr [esp+0x60]
	mov edx,dword ptr [esp+0x120]
	lea eax,[ecx+edx]
	cmp eax,0x64
	jl Block259

 Block258:
	mov eax,0x64

 Block259:
	mov ecx,edi
	imul ecx,eax
	mov eax,0xAE147AE1
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	add edi,eax
	mov dword ptr [esp+0x14],edi
	fild dword ptr [esp+0x14]
	fld qword ptr [__real_4059000000000000]
	fld st(0)
	fsubrp st(2),st
	fdivp st(1),st(0)
	fmul qword ptr [esp+0x1C]
	fstp qword ptr [esp+0x1C]

 Block260:
	mov edi,dword ptr [esp+0x100]
	test edi,edi
	je Block274

 Block261:
	mov ebx,dword ptr [esp+0x104]
	push ebx
	mov ecx,edi
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nDamage
	cmp dword ptr [edi],0x217E76B
	mov ebp,eax
	mov dword ptr [esp+0x3C],ebp
	jne Block263

 Block262:
	push ebx
	mov ecx,edi
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nY
	mov ebp,eax
	mov dword ptr [esp+0x3C],eax

 Block263:
	mov eax,dword ptr [esp+0x28]
	cmp eax,0x30FEFE
	jne Block275

 Block264:
	mov edx,dword ptr [esp+0xC0]
	lea ecx,[esp+0x44]
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x31222A
	push edx
	mov dword ptr [esp+0x50],0
	call CSkillInfo::GetSkillLevel_0
	mov ecx,dword ptr [esp+0x44]
	test ecx,ecx
	je Block267

 Block265:
	test eax,eax
	je Block267

 Block266:
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nDamage
	mov ebp,eax
	mov dword ptr [esp+0x3C],ebp

 Block267:
	mov ebx,dword ptr [esp+0x24]

 Block268:
	mov eax,dword ptr [esp+0xC0]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	lea edx,[esp+0x7C]
	push edx
	push 0x4DF8F8
	push eax
	mov dword ptr [esp+0x88],0
	call CSkillInfo::GetSkillLevel_0
	mov ecx,dword ptr [esp+0x7C]
	test ecx,ecx
	je Block280

 Block269:
	test eax,eax
	je Block280

 Block270:
	mov edi,dword ptr [esp+0x28]
	mov edx,edi
	sub edx,0x4DD5CA
	je Block279

 Block271:
	sub edx,1
	je Block278

 Block272:
	sub edx,1
	jne Block281

 Block273:
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nZ
	add ebp,eax
	mov dword ptr [esp+0x3C],ebp
	jmp Block281

 Block274:
	xor ebp,ebp
	mov dword ptr [esp+0x3C],ebp
	jmp Block263

 Block275:
	cmp eax,0x1F962E9
	jne Block267

 Block276:
	mov eax,dword ptr [esp+0xE8]
	mov ebx,dword ptr [esp+0x24]
	dec eax
	cmp ebx,eax
	jne Block268

 Block277:
	mov ecx,dword ptr [esp+0x104]
	push ecx
	mov ecx,edi
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nX
	mov ebp,eax
	mov dword ptr [esp+0x3C],ebp
	jmp Block268

 Block278:
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nY
	add ebp,eax
	mov dword ptr [esp+0x3C],ebp
	jmp Block281

 Block279:
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nX
	add ebp,eax
	mov dword ptr [esp+0x3C],ebp
	jmp Block281

 Block280:
	mov edi,dword ptr [esp+0x28]

 Block281:
	mov ecx,dword ptr [esp+0xC8]
	call SecondaryStat::_ZtlSecureGet_nComboCounter_
	mov ecx,dword ptr [esp+0xC0]
	dec eax
	push eax
	push edi
	push ecx
	call get_combo_damage_param
	add esp,0xC
	mov dword ptr [esp+0x14],eax
	cmp edi,0x4F837C
	je Block283

 Block282:
	cmp edi,0x4F837D
	jne Block286

 Block283:
	mov eax,dword ptr [esp+0xC0]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	lea edx,[esp+0x44]
	push edx
	push 0x4FA6A1
	push eax
	mov dword ptr [esp+0x50],0
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	je Block286

 Block284:
	mov ecx,dword ptr [esp+0x44]
	test ecx,ecx
	je Block286

 Block285:
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nDamage
	add ebp,eax
	mov dword ptr [esp+0x3C],ebp

 Block286:
	test ebp,ebp
	jle Block288

 Block287:
	mov ecx,dword ptr [esp+0xD0]
	add ebp,dword ptr [ecx+0x194]
	mov dword ptr [esp+0x3C],ebp

 Block288:
	mov eax,dword ptr [esp+0x28]
	xor edi,edi
	mov dword ptr [esp+0x34],edi
	cmp eax,0xF462C
	je Block298

 Block289:
	cmp eax,0xF462D
	je Block298

 Block290:
	cmp eax,0x2DCAAC
	je Block292

 Block291:
	cmp eax,0x2DCAAD
	jne Block310

 Block292:
	mov eax,dword ptr [esp+0xC0]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	lea edx,[esp+0x34]
	push edx
	push 0x2F4D66
	push eax
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jg Block294

 Block293:
	mov edx,dword ptr [esp+0xC0]
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x30D406
	push edx
	mov dword ptr [esp+0x40],0
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block310

 Block294:
	mov ecx,dword ptr [esp+0x34]
	test ecx,ecx
	je Block310

 Block295:
	mov edx,dword ptr [esp+0x28]
	cmp edx,0x2DCAAC
	jne Block297

 Block296:
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nX
	jmp Block307

 Block297:
	cmp edx,0x2DCAAD
	jmp Block305

 Block298:
	mov ecx,dword ptr [esp+0xC0]
	lea eax,[esp+0x34]
	push eax
	push 0x10C8E9
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jg Block301

 Block299:
	mov eax,dword ptr [esp+0xC0]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	lea edx,[esp+0x34]
	push edx
	push 0x124F89
	push eax
	mov dword ptr [esp+0x40],0
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jg Block301

 Block300:
	mov edx,dword ptr [esp+0xC0]
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x13D629
	push edx
	mov dword ptr [esp+0x40],0
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block310

 Block301:
	mov ecx,dword ptr [esp+0x34]
	test ecx,ecx
	je Block310

 Block302:
	mov edx,dword ptr [esp+0x28]
	cmp edx,0xF462C
	jne Block304

 Block303:
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nX
	jmp Block307

 Block304:
	cmp edx,0xF462D

 Block305:
	jne Block308

 Block306:
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nY

 Block307:
	mov edi,eax

 Block308:
	test ebp,ebp
	jle Block310

 Block309:
	add ebp,edi
	mov dword ptr [esp+0x3C],ebp

 Block310:
	cmp dword ptr [esp+0x28],0x40413E
	jne Block315

 Block311:
	mov edi,dword ptr [esp+0xC0]
	push 0x1A6
	mov ecx,edi
	call GW_CharacterStat::_ZtlSecureGet_nJob
	cwde
	push eax
	call is_correct_job_for_skill_root
	add esp,8
	test eax,eax
	je Block315

 Block312:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push offset _D_S_PGRIDSKILL
	push 0x406469
	push edi
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block315

 Block313:
	mov ecx,dword ptr [_D_S_PGRIDSKILL]
	test ecx,ecx
	je Block315

 Block314:
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nX
	add ebp,eax
	mov dword ptr [esp+0x3C],ebp

 Block315:
	cmp dword ptr [esp+0x134],0
	je Block318

 Block316:
	cmp dword ptr [esp+0x28],0x127A7A
	jne Block318

 Block317:
	fild dword ptr [esp+0x134]
	fdiv qword ptr [__real_4059000000000000]
	fmul qword ptr [esp+0x1C]
	fst qword ptr [esp+0x1C]
	jmp Block321

 Block318:
	test ebp,ebp
	jle Block320

 Block319:
	fild dword ptr [esp+0x3C]
	fdiv qword ptr [__real_4059000000000000]
	fmul qword ptr [esp+0x1C]
	fst qword ptr [esp+0x1C]
	jmp Block321

 Block320:
	fld qword ptr [esp+0x1C]

 Block321:
	fld st(0)
	call __ftol2_sse
	mov edi,dword ptr [esp+0xFC]
	mov dword ptr [esp+0x44],eax
	test edi,edi
	je Block323

 Block322:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [ecx+ebx*4],eax

 Block323:
	cmp dword ptr [esp+0x14],0
	jle Block325

 Block324:
	fild dword ptr [esp+0x14]
	fdiv qword ptr [__real_4059000000000000]
	fmulp st(1),st(0)
	fstp qword ptr [esp+0x1C]
	jmp Block326

 Block325:
	fstp st(0)

 Block326:
	mov ebp,dword ptr [esp+0xC8]
	mov ecx,ebp
	call SecondaryStat::_ZtlSecureGet_nEnrage_
	mov ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	test eax,eax
	jle Block328

 Block327:
	mov ecx,ebp
	call SecondaryStat::_ZtlSecureGet_nEnrage_
	mov ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov ecx,edx
	shr ecx,0x1F
	lea edx,[edx+ecx+0x64]
	mov dword ptr [esp+0x14],edx
	fild dword ptr [esp+0x14]
	fdiv qword ptr [__real_4059000000000000]
	fmul qword ptr [esp+0x1C]
	fstp qword ptr [esp+0x1C]

 Block328:
	cmp dword ptr [esp+0x28],0x406849
	jne Block330

 Block329:
	cmp dword ptr [esp+0xF8],0x4F
	jne Block337

 Block330:
	mov eax,dword ptr [esp+0xE0]
	cmp dword ptr [eax],0
	jne Block333

 Block331:
	cmp dword ptr [esp+0x30],0
	jle Block336

 Block332:
	fld qword ptr [__real_4059000000000000]
	mov eax,0x92492493
	imul esi
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax*8]
	sub esp,0x10
	sub ecx,eax
	mov edx,esi
	fstp qword ptr [esp+8]
	sub edx,ecx
	fldz
	mov eax,dword ptr [esp+edx*4+0x98]
	fstp qword ptr [esp]
	push eax
	call get_rand_1
	add esp,0x14
	fild dword ptr [esp+0x30]
	inc esi
	fcompp
	fnstsw ax
	test ah,0x41
	jne Block336

 Block333:
	mov eax,dword ptr [esp+0x50]
	mov ecx,dword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x64]
	lea ecx,[ecx+edx+0x14]
	add eax,0x32
	cmp ecx,eax
	mov dword ptr [esp+0x14],ecx
	jl Block335

 Block334:
	mov dword ptr [esp+0x14],eax

 Block335:
	fild dword ptr [esp+0x50]
	mov eax,0x92492493
	imul esi
	fadd qword ptr [__real_4049000000000000]
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax*8]
	sub esp,0x10
	sub ecx,eax
	mov edx,esi
	fstp qword ptr [esp+8]
	sub edx,ecx
	fild dword ptr [esp+0x24]
	mov eax,dword ptr [esp+edx*4+0x98]
	fstp qword ptr [esp]
	push eax
	call get_rand_1
	add esp,0x14
	call __ftol2_sse
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	mov eax,dword ptr [esp+0x10C]
	inc esi
	fdiv qword ptr [__real_4059000000000000]
	mov dword ptr [eax+ebx*4],1
	fimul dword ptr [esp+0x44]
	fadd qword ptr [esp+0x1C]
	fstp qword ptr [esp+0x1C]

 Block336:
	cmp dword ptr [esp+0x28],0x14011D
	je Block339

 Block337:
	mov ecx,dword ptr [esp+0xD0]
	mov eax,dword ptr [ecx+0xEC]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block339

 Block338:
	fild dword ptr [esp+0x14]
	fmul qword ptr [esp+0x1C]
	fdiv qword ptr [__real_4059000000000000]
	fstp qword ptr [esp+0x1C]

 Block339:
	mov ecx,ebp
	call SecondaryStat::_ZtlSecureGet_nShadowPartner_
	test eax,eax
	je Block354

 Block340:
	test edi,edi
	je Block354

 Block341:
	mov ecx,ebp
	call SecondaryStat::_ZtlSecureGet_rShadowPartner_
	cmp eax,0x4215FA
	jne Block347

 Block342:
	mov edi,dword ptr [esp+0xE4]
	cmp ebx,edi
	jl Block354

 Block343:
	mov edx,dword ptr [esp+0x28]
	push edx
	call is_mirror_excepted_skill
	add esp,4
	test eax,eax
	jne Block354

 Block344:
	mov eax,dword ptr [esp+0xC0]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push offset _D_S_PMIRRORIMAGING
	push 0x4215FA
	push eax
	call CSkillInfo::GetSkillLevel_0
	mov edx,dword ptr [esp+0x2C]
	mov ecx,ebx
	sub ecx,edi
	lea ecx,[edx+ecx*4]
	mov ecx,dword ptr [ecx]
	cmp ecx,1
	mov edi,ecx
	jg Block346

 Block345:
	mov edi,1

 Block346:
	mov ecx,dword ptr [esp+0x48]
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nX
	mov ecx,eax
	imul ecx,edi
	mov eax,0x51EB851F
	imul ecx
	mov ecx,dword ptr [esp+0x108]
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edx,dword ptr [esp+0x10C]
	mov dword ptr [ecx+ebx*4],eax
	mov dword ptr [edx+ebx*4],0
	jmp Block428

 Block347:
	cmp dword ptr [esp+0x28],0x3EE1AB
	je Block354

 Block348:
	cmp dword ptr [esp+0x28],0x40684B
	je Block354

 Block349:
	mov eax,dword ptr [esp+0xE8]
	cdq
	sub eax,edx
	sar eax,1
	cmp ebx,eax
	jl Block354

 Block350:
	mov edi,ebx
	sub edi,eax
	add edi,edi
	add edi,edi
	cmp dword ptr [esp+0x100],0
	je Block352

 Block351:
	mov eax,dword ptr [esp+0x54]
	mov ecx,dword ptr [esp+0x48]
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nY
	mov edx,dword ptr [esp+0x108]
	mov ecx,eax
	imul ecx,dword ptr [edi+edx]
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	jmp Block353

 Block352:
	mov ecx,dword ptr [esp+0x54]
	push ecx
	mov ecx,dword ptr [esp+0x4C]
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nX
	mov edx,dword ptr [esp+0x108]
	mov ecx,eax
	imul ecx,dword ptr [edi+edx]
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]

 Block353:
	mov eax,dword ptr [esp+0x10C]
	fstp qword ptr [esp+0x1C]
	mov ecx,dword ptr [edi+eax]
	mov dword ptr [eax+ebx*4],ecx

 Block354:
	cmp dword ptr [esp+0x28],0x406849
	jne Block361

 Block355:
	mov ecx,ebp
	call SecondaryStat::_ZtlSecureGet_mDarkSight_
	test eax,eax
	jne Block357

 Block356:
	fldz
	jmp Block360

 Block357:
	mov edx,dword ptr [esp+0x104]
	mov ecx,dword ptr [esp+0x100]
	push edx
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_tTime
	mov ecx,ebp
	mov edi,eax
	call SecondaryStat::_ZtlSecureGet_mDarkSight_
	mov ebx,eax
	call dword ptr [ZImports::_timeGetTime]
	mov ecx,eax
	sub ecx,ebx
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,edi
	jl Block359

 Block358:
	mov eax,edi

 Block359:
	cdq
	sub eax,edx
	sar eax,1
	inc eax
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	fmul qword ptr [esp+0x1C]

 Block360:
	fstp qword ptr [esp+0x1C]

 Block361:
	mov ecx,ebp
	call SecondaryStat::_ZtlSecureGet_nWindWalk_
	mov edi,dword ptr [esp+0xC0]
	test eax,eax
	jle Block363

 Block362:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push offset _D_S_PWINDWALK
	push 0xC7E7CE
	push edi
	call CSkillInfo::GetSkillLevel_0
	mov ecx,dword ptr [_D_S_PWINDWALK]
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nDamage
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	fdiv qword ptr [__real_4059000000000000]
	fmul qword ptr [esp+0x1C]
	fstp qword ptr [esp+0x1C]

 Block363:
	mov ecx,ebp
	call SecondaryStat::_ZtlSecureGet_nDarkSight_
	test eax,eax
	jle Block366

 Block364:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push offset _D_S_PVANISH
	push 0xD72625
	push edi
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block366

 Block365:
	mov ecx,dword ptr [_D_S_PVANISH]
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nDamage
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	fdiv qword ptr [__real_4059000000000000]
	fmul qword ptr [esp+0x1C]
	fstp qword ptr [esp+0x1C]

 Block366:
	mov eax,dword ptr [esp+0xD0]
	cmp dword ptr [eax+0x94],0
	jg Block368

 Block367:
	cmp dword ptr [eax+0x170],0
	jle Block370

 Block368:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push offset _D_S_PCHANCEATTACK
	push 0x10EFF9
	push edi
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block370

 Block369:
	mov ecx,dword ptr [_D_S_PCHANCEATTACK]
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nDamage
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	fdiv qword ptr [__real_4059000000000000]
	fmul qword ptr [esp+0x1C]
	fstp qword ptr [esp+0x1C]

 Block370:
	mov ebx,dword ptr [esp+0xCC]
	mov edi,0x2328
	jmp Block372

 Block372:
	mov ecx,dword ptr [esp+0xC0]
	mov ebp,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	lea eax,[esp+0x14]
	push eax
	mov dword ptr [esp+0x18],0
	call GW_CharacterStat::_ZtlSecureGet_nJob
	movsx ecx,ax
	push ecx
	push edi
	call get_novice_skill_as_race
	mov edx,dword ptr [esp+0xCC]
	add esp,8
	push eax
	push edx
	mov ecx,ebp
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block375

 Block373:
	mov ecx,dword ptr [esp+0x14]
	cmp ebx,dword ptr [ecx+0x4C]
	jne Block375

 Block374:
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nDamage
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	fdiv qword ptr [__real_4059000000000000]
	fmul qword ptr [esp+0x1C]
	fstp qword ptr [esp+0x1C]

 Block375:
	inc edi
	cmp edi,0x232A
	jle Block372

 Block376:
	mov edi,dword ptr [esp+0xD4]
	mov ecx,edi
	call CMobTemplate::_ZtlSecureGet_nCategory
	mov ebp,dword ptr [esp+0xC0]
	mov eax,dword ptr [ebp+eax*4+0x729]
	add eax,0x64
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	mov ecx,edi
	fdiv qword ptr [__real_4059000000000000]
	fmul qword ptr [esp+0x1C]
	fstp qword ptr [esp+0x1C]
	call CMobTemplate::_ZtlSecureGet_bBoss
	test eax,eax
	je Block379

 Block377:
	fld qword ptr [__real_4059000000000000]
	mov eax,0x92492493
	imul esi
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax*8]
	sub esp,0x10
	sub ecx,eax
	mov edx,esi
	fstp qword ptr [esp+8]
	sub edx,ecx
	fldz
	mov eax,dword ptr [esp+edx*4+0x98]
	fstp qword ptr [esp]
	push eax
	call get_rand_1
	add esp,0x14
	fild dword ptr [ebp+0x775]
	inc esi
	fcompp
	fnstsw ax
	test ah,0x41
	jne Block379

 Block378:
	mov eax,dword ptr [ebp+0x779]
	add eax,0x64
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	fld qword ptr [__real_4059000000000000]
	fdiv st(1),st
	fxch
	fmul qword ptr [esp+0x1C]
	fstp qword ptr [esp+0x1C]
	jmp Block380

 Block379:
	fld qword ptr [__real_4059000000000000]

 Block380:
	mov edi,dword ptr [esp+0x12C]
	test edi,edi
	je Block382

 Block381:
	mov ecx,dword ptr [esp+0x28]
	fstp st(0)
	push ecx
	call get_max_gauge_time
	mov ecx,eax
	mov eax,edi
	imul eax,0x5A
	cdq
	idiv ecx
	add esp,4
	add eax,0xA
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	fld qword ptr [__real_4059000000000000]
	fdiv st(1),st
	fxch
	fmul qword ptr [esp+0x1C]
	fstp qword ptr [esp+0x1C]

 Block382:
	mov edx,dword ptr [esp+0xD0]
	cmp dword ptr [edx+0x144],0
	je Block385

 Block383:
	mov ecx,dword ptr [esp+0x10C]
	mov eax,dword ptr [esp+0x24]
	cmp dword ptr [ecx+eax*4],0
	jne Block385

 Block384:
	mov edx,dword ptr [esp+0x108]
	fstp st(0)
	mov dword ptr [edx+eax*4],0
	jmp Block428

 Block385:
	cmp dword ptr [esp+0x130],0
	je Block387

 Block386:
	fild dword ptr [esp+0x130]
	fadd st,st(1)
	fdivrp st(1),st(0)
	fmul qword ptr [esp+0x1C]
	fstp qword ptr [esp+0x1C]
	jmp Block388

 Block387:
	fstp st(0)

 Block388:
	mov edi,dword ptr [esp+0xC8]
	lea eax,[esp+0x1C]
	push eax
	push ebx
	push edi
	push ebp
	call _anon_ApplyGuidedBulletDamage
	add esp,0x10
	mov ecx,edi
	call SecondaryStat::_ZtlSecureGet_nDojangBerserk_
	test eax,eax
	je Block390

 Block389:
	mov ecx,edi
	call SecondaryStat::_ZtlSecureGet_nDojangBerserk_
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	fmul qword ptr [esp+0x1C]
	fdiv qword ptr [__real_4059000000000000]
	fstp qword ptr [esp+0x1C]

 Block390:
	mov ecx,edi
	call SecondaryStat::_ZtlSecureGet_nSuddenDeath_
	mov ebx,dword ptr [esp+0x28]
	test eax,eax
	je Block393

 Block391:
	push ebx
	call is_dual_add_damage_except_skill
	add esp,4
	test eax,eax
	jne Block393

 Block392:
	mov ecx,edi
	call SecondaryStat::_ZtlSecureGet_nSuddenDeath_
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	fmul qword ptr [esp+0x1C]
	fdiv qword ptr [__real_4059000000000000]
	fstp qword ptr [esp+0x1C]

 Block393:
	mov ecx,edi
	call SecondaryStat::_ZtlSecureGet_nFinalCut_
	test eax,eax
	je Block396

 Block394:
	push ebx
	call is_dual_add_damage_except_skill
	add esp,4
	test eax,eax
	jne Block396

 Block395:
	mov ecx,edi
	call SecondaryStat::_ZtlSecureGet_nFinalCut_
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	fmul qword ptr [esp+0x1C]
	fdiv qword ptr [__real_4059000000000000]
	fstp qword ptr [esp+0x1C]

 Block396:
	mov eax,dword ptr [esp+0x128]
	test eax,eax
	je Block398

 Block397:
	add eax,0x64
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	fmul qword ptr [esp+0x1C]
	fdiv qword ptr [__real_4059000000000000]
	fstp qword ptr [esp+0x1C]

 Block398:
	push ebx
	call is_jaguar_melee_attack_skill
	add esp,4
	test eax,eax
	je Block401

 Block399:
	lea ecx,[esp+0x58]
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x1F937F0
	push ebp
	mov dword ptr [esp+0x64],0
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block401

 Block400:
	mov ecx,dword ptr [esp+0x58]
	push eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nDamage
	add eax,0x64
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	fmul qword ptr [esp+0x1C]
	fdiv qword ptr [__real_4059000000000000]
	fstp qword ptr [esp+0x1C]

 Block401:
	cmp ebx,0x3EBA9C
	jne Block405

 Block402:
	mov edx,dword ptr [esp+0x104]
	mov ecx,dword ptr [esp+0x100]
	push edx
	call SKILLENTRY::GetLevelData
	mov edi,eax
	mov eax,0x92492493
	imul esi
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax*8]
	sub ecx,eax
	mov edx,esi
	sub edx,ecx
	mov ebp,dword ptr [esp+edx*4+0x88]
	mov ecx,edi
	inc esi
	call SKILLLEVELDATA::_ZtlSecureGet_nMoneyCon
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	sub esp,8
	mov ecx,edi
	fmul qword ptr [__real_3ff8000000000000]
	fstp qword ptr [esp]
	call SKILLLEVELDATA::_ZtlSecureGet_nMoneyCon
	mov dword ptr [esp+0x1C],eax
	fild dword ptr [esp+0x1C]
	sub esp,8
	fmul qword ptr [__real_3fe0000000000000]
	fstp qword ptr [esp]
	push ebp
	call get_rand_1
	call __ftol2_sse
	fld qword ptr [__real_4059000000000000]
	lea ecx,[eax+eax*4]
	fstp qword ptr [esp+0xC]
	add ecx,ecx
	fldz
	add ecx,ecx
	fstp qword ptr [esp+4]
	add ecx,ecx
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov ebp,edx
	shr ebp,0x1F
	add ebp,edx
	mov eax,0x92492493
	imul esi
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea ecx,[eax*8]
	add esp,4
	sub ecx,eax
	mov edx,esi
	sub edx,ecx
	mov eax,dword ptr [esp+edx*4+0x98]
	push eax
	mov dword ptr [esp+0x28],ebp
	call get_rand_1
	add esp,0x14
	mov ecx,edi
	fstp qword ptr [esp+0x3C]
	call SKILLLEVELDATA::_ZtlSecureGet_nProp
	mov dword ptr [esp+0x44],eax
	fild dword ptr [esp+0x44]
	fld qword ptr [esp+0x3C]
	inc esi
	fcompp
	fnstsw ax
	test ah,5
	jp Block404

 Block403:
	mov ecx,edi
	call SKILLLEVELDATA::_ZtlSecureGet_nX
	mov ecx,eax
	add ecx,0x64
	imul ecx,ebp
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov dword ptr [esp+0x14],eax

 Block404:
	fild dword ptr [esp+0x14]
	fmul qword ptr [esp+0x1C]
	fdiv qword ptr [__real_4059000000000000]
	fstp qword ptr [esp+0x1C]

 Block405:
	mov ecx,dword ptr [esp+0xD4]
	call CMobTemplate::_ZtlSecureGet_bBoss
	test eax,eax
	jne Block417

 Block406:
	mov ecx,dword ptr [esp+0xD4]
	call CMobTemplate::_ZtlSecureGet_nMaxHP
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	fcomp qword ptr [esp+0x1C]
	fnstsw ax
	test ah,0x41
	jne Block417

 Block407:
	cmp dword ptr [esp+0x24],0
	jne Block417

 Block408:
	xor ebx,ebx
	xor ebp,ebp
	lea ecx,[ecx]

 Block409:
	mov ecx,dword ptr [esp+0xC0]
	mov eax,dword ptr [ecx+0x725]
	test eax,eax
	je Block415

 Block410:
	cmp ebp,dword ptr [eax-4]
	jae Block415

 Block411:
	lea edi,[ebp*8]
	mov ecx,eax
	cmp dword ptr [edi+ecx],0x55D4A80
	jne Block414

 Block412:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x55D4A80
	call CSkillInfo::GetSkill
	test eax,eax
	je Block414

 Block413:
	mov edx,dword ptr [esp+0xC0]
	mov edx,dword ptr [edx+0x725]
	mov ecx,dword ptr [edx+edi+4]
	add edx,edi
	push ecx
	mov ecx,eax
	call SKILLENTRY::GetLevelData
	mov ecx,eax
	call SKILLLEVELDATA::_ZtlSecureGet_nProp
	add ebx,eax

 Block414:
	inc ebp
	jmp Block409

 Block415:
	fld qword ptr [__real_4059000000000000]
	mov eax,0x92492493
	imul esi
	add edx,esi
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax*8]
	sub edx,eax
	sub esp,0x10
	mov eax,esi
	sub eax,edx
	mov eax,dword ptr [esp+eax*4+0x98]
	fstp qword ptr [esp+8]
	fldz
	mov dword ptr [esp+0x4C],ebx
	fstp qword ptr [esp]
	push eax
	call get_rand_1
	add esp,0x14
	fild dword ptr [esp+0x3C]
	inc esi
	fcompp
	fnstsw ax
	test ah,0x41
	jne Block417

 Block416:
	mov ecx,dword ptr [esp+0xD4]
	call CMobTemplate::_ZtlSecureGet_nMaxHP
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	fstp qword ptr [esp+0x1C]

 Block417:
	mov ecx,dword ptr [esp+0xD4]
	xor edi,edi
	call CMobTemplate::_ZtlSecureGet_bBoss
	test eax,eax
	je Block420

 Block418:
	mov eax,dword ptr [esp+0x11C]
	test eax,eax
	je Block420

 Block419:
	mov edi,eax

 Block420:
	mov edx,dword ptr [esp+0x118]
	mov ecx,dword ptr [esp+0x5C]
	mov ebx,dword ptr [esp+0xC8]
	add ecx,edx
	add edi,ecx
	mov ecx,ebx
	mov dword ptr [esp+0x14],edi
	call SecondaryStat::_ZtlSecureGet_nDamR_
	test eax,eax
	jle Block422

 Block421:
	mov ecx,ebx
	call SecondaryStat::_ZtlSecureGet_nDamR_
	add edi,eax
	mov dword ptr [esp+0x14],edi

 Block422:
	fild dword ptr [esp+0x14]
	sub esp,0x18
	fld qword ptr [esp+0x34]
	fmul st(1),st
	fxch
	fdiv qword ptr [__real_4059000000000000]
	faddp st(1),st(0)
	fld qword ptr [__real_412e847e00000000]
	fstp qword ptr [esp+0x10]
	fld1
	fstp qword ptr [esp+8]
	fstp qword ptr [esp]
	call zmaxHelper<double>::call
	add esp,8
	fstp qword ptr [esp]
	call zminHelper<double>::call
	add esp,0x10
	call __ftol2_sse
	mov ecx,dword ptr [esp+0x108]
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [ecx+edx*4],eax
	mov ecx,dword ptr [esp+0xD0]
	mov ecx,dword ptr [ecx+0x204]
	test ecx,ecx
	je Block428

 Block423:
	imul ecx,eax
	mov eax,0xAE147AE1
	imul ecx
	mov ecx,dword ptr [esp+0x108]
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [ecx+edx*4],eax
	jmp Block428

 Block424:
	mov edx,dword ptr [ebp+0x6C]
	push edx
	lea eax,[ebp+0x64]
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block426

 Block425:
	mov ecx,dword ptr [ebp+0x84]
	push ecx
	add ebp,0x7C
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	mov dword ptr [esp+0x1C],eax
	fild dword ptr [esp+0x1C]
	add esp,8
	fmul qword ptr [__real_3fd3333333333333]
	call __ftol2_sse
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [ebx+edx*4],eax
	jmp Block428

 Block426:
	mov eax,dword ptr [ebp+0x84]
	push eax
	add ebp,0x7C
	push ebp
	call _ZtlSecureFuseHelper<long>::call
	add esp,8

 Block427:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [ebx+ecx*4],eax

 Block428:
	mov eax,dword ptr [esp+0x24]
	inc eax
	cmp eax,dword ptr [esp+0xE8]
	mov dword ptr [esp+0x24],eax
	jl Block105

 Block429:
	mov edx,dword ptr [esp+0xE0]
	lea ecx,[esp+0x2C]
	mov dword ptr [edx],0
	mov byte ptr [esp+0xB8],0
	call ZArray<long>::RemoveAll
	mov esi,dword ptr [esp+0xDC]
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	test esi,esi
	je Block433

 Block430:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block433

 Block431:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block433

 Block432:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block433:
	mov ecx,dword ptr [esp+0xB0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA8
	ret 0x7C
}
}
