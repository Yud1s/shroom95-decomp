#include "regen.hpp"
// DBBasic.ipp
#include "DBBasic.hpp"

// CharacterData::SetItem
_SUB_EXCEPTION_HANDLER(946C0)
__SUB_CLASS_THIS(000946C0, __thiscall, 125115,  CharacterData, int32_t, long, long, NakedParam<ZRef<GW_ItemSlotBase>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_946C0
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov ecx,dword ptr [esp+0x1C]
	lea eax,[ecx-1]
	mov dword ptr [esp+0x14],0
	cmp eax,4
	ja Block26

 Block1:
	cmp ecx,1
	jne Block19

 Block2:
	mov esi,dword ptr [esp+0x20]
	test esi,esi
	jge Block8

 Block3:
	mov eax,esi
	neg eax
	lea ecx,[eax-0x3E8]
	cmp ecx,3
	ja Block5

 Block4:
	lea eax,[esi*8]
	mov ecx,edi
	lea edx,[esp+0x24]
	sub ecx,eax
	push edx
	sub ecx,0x1A87
	jmp Block25

 Block5:
	add eax,0xFFFFFBB4
	cmp eax,4
	ja Block7

 Block6:
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esi*8]
	mov ecx,edi
	sub ecx,edx
	sub ecx,0x1D87
	jmp Block25

 Block7:
	test esi,esi

 Block8:
	je Block18

 Block9:
	cmp esi,0xFFFFFFC5
	jge Block11

 Block10:
	cmp esi,0xFFFFFF9C
	jge Block18

 Block11:
	push 1
	mov ecx,edi
	call CharacterData::GetItemSlotCount
	cmp esi,eax
	jg Block18

 Block12:
	cmp esi,0xFFFFFF61
	jl Block18

 Block13:
	cmp esi,0xFFFFFF9C
	jge Block15

 Block14:
	lea ecx,[esi*8]
	mov edx,ecx
	mov ecx,edi
	sub ecx,edx
	sub ecx,0x47
	jmp Block24

 Block15:
	lea eax,[esp+0x24]
	push eax
	test esi,esi
	jge Block17

 Block16:
	lea ecx,[esi*8]
	mov edx,ecx
	mov ecx,edi
	sub ecx,edx
	add ecx,0xF9
	jmp Block25

 Block17:
	mov ecx,dword ptr [edi+0x505]
	lea ecx,[ecx+esi*8]
	jmp Block25

 Block18:
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	jmp Block30

 Block19:
	mov edx,dword ptr [esp+0x20]
	test edx,edx
	jle Block18

 Block20:
	mov eax,dword ptr [edi+ecx*4+0x501]
	test eax,eax
	je Block22

 Block21:
	mov eax,dword ptr [eax-4]

 Block22:
	dec eax
	cmp edx,eax
	jg Block18

 Block23:
	mov ecx,dword ptr [edi+ecx*4+0x501]
	lea ecx,[ecx+edx*8]

 Block24:
	lea eax,[esp+0x24]
	push eax

 Block25:
	call ZRef<GW_ItemSlotBase>::op_assign_copy
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	mov eax,1
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 0x10

 Block26:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block30

 Block27:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block30

 Block28:
	mov edx,dword ptr [esp+0x28]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x28]
	test ecx,ecx
	je Block30

 Block29:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block30:
	xor eax,eax
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 0x10
}
}
// SubTime
__SUB(000F1CA0, __cdecl, 144647,  int64_t, const _FILETIME&, const _FILETIME&) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	mov eax,dword ptr [ecx]
	mov ecx,dword ptr [ecx+4]
	push esi
	mov esi,dword ptr [edx]
	push edi
	mov edi,dword ptr [edx+4]
	sub eax,esi
	mov edx,ecx
	sbb edx,edi
	pop edi
	pop esi
	ret
}
}
// CSimpleStrMap::~CSimpleStrMap
__SUB_CLASS_THIS0(000F58A0, __thiscall, 114586,  CSimpleStrMap, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::`vftable'
	jmp  ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::RemoveAll
}
}
// CharacterData::InitQuestExFromRawStr
__SUB_CLASS_THIS(000FCCB0, __thiscall, 125103,  CharacterData, int32_t, const uint16_t, ZXString<char>&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	mov esi,dword ptr [eax]
	push 0
	lea edx,[esp+0xC]
	push edx
	add ecx,0x70D
	call ZMap<unsigned short, CSimpleStrMap, unsigned short>::Insert
	push esi
	lea ecx,[eax+0xA]
	call CSimpleStrMap::InitFromRawString
	pop esi
	ret 8
}
}
// CharacterData::IsEquiped
__SUB_CLASS_THIS(00101040, __thiscall, 125131,  CharacterData, int32_t, long) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0xC]
	push esi
	mov ebx,ecx
	push edi
	mov esi,1
	lea edi,[ebx+0x105]

 Block1:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block3

 Block2:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	cmp eax,ebp
	je Block14

 Block3:
	inc esi
	add edi,8
	cmp esi,0x3B
	jle Block1

 Block4:
	xor esi,esi
	lea edi,[ebx+0x4BD]

 Block5:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block7

 Block6:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	cmp eax,ebp
	je Block14

 Block7:
	inc esi
	add edi,8
	cmp esi,4
	jl Block5

 Block8:
	xor esi,esi
	lea edi,[ebx+0x4DD]
	jmp Block10

 Block10:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block12

 Block11:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	cmp eax,ebp
	je Block14

 Block12:
	inc esi
	add edi,8
	cmp esi,5
	jl Block10

 Block13:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	ret 4

 Block14:
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	ret 4
}
}
// SINGLEMACRO::Encode
__SUB_CLASS_THIS(000F9710, __thiscall, 92028,  SINGLEMACRO, void, COutPacket&) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push ebp
	mov ebp,ecx
	push esi
	push edi
	lea ecx,[ebp+0xC]
	push ecx
	mov edi,esp
	mov byte ptr [ebp+0x18],0
	mov dword ptr [esp+0x14],ebp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [edi],0
	test ecx,ecx
	je Block4

 Block1:
	mov eax,ecx
	lea esi,[eax+1]
	lea ebx,[ebx]

 Block2:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block2

 Block3:
	sub eax,esi
	mov esi,eax
	push esi
	push ecx
	push 0
	push esi
	mov ecx,edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer

 Block4:
	mov esi,dword ptr [esp+0x20]
	mov ecx,esi
	call COutPacket::EncodeStr
	cmp dword ptr [ebp+0x19],0
	setne al
	movzx ecx,al
	push ecx
	mov ecx,esi
	call COutPacket::Encode1
	xor ebx,ebx
	lea edi,[esi+4]
	jmp Block7

 Block6:
	mov ebp,dword ptr [esp+0x10]

 Block7:
	mov eax,dword ptr [edi]
	mov ebp,dword ptr [ebp+ebx*4]
	test eax,eax
	je Block9

 Block8:
	mov eax,dword ptr [eax-4]

 Block9:
	mov ecx,dword ptr [esi+8]
	add ecx,4
	cmp ecx,eax
	jbe Block14

 Block10:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block12

 Block11:
	mov eax,dword ptr [eax-4]

 Block12:
	add eax,eax
	cmp ecx,eax
	ja Block12

 Block13:
	lea edx,[esp+0x1C]
	push edx
	push 0
	push eax
	mov ecx,edi
	call ZArray<unsigned char>::_Realloc

 Block14:
	mov ecx,dword ptr [esi+8]
	mov eax,dword ptr [edi]
	mov dword ptr [eax+ecx],ebp
	add dword ptr [esi+8],4
	inc ebx
	cmp ebx,3
	jl Block6

 Block15:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 4
}
}
// CharacterData::GetWildHunterInfo
__SUB_CLASS_THIS0(000F9C70, __thiscall, 125087,  CharacterData, ZRef<GW_WildHunterInfo>) {
__asm {

 Block0:
	push ecx
	cmp dword ptr [ecx+0x6CD],0
	push esi
	mov dword ptr [esp+4],0
	lea esi,[ecx+0x6C9]
	jne Block2

 Block1:
	mov ecx,esi
	call ZRef<GW_WildHunterInfo>::_Alloc

 Block2:
	mov eax,dword ptr [esi+4]
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esi+4],eax
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CharacterData::GetActiveItemSlotPet
__SUB_CLASS_THIS(0007F780, __thiscall, 125116,  CharacterData, GW_ItemSlotPet*, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+eax*8+0x1F]
	mov edx,dword ptr [esi+eax*8+0x1B]
	push ecx
	push edx
	push 5
	mov ecx,esi
	call CharacterData::FindCashItemSlotPosition_0
	test eax,eax
	jg Block2

 Block1:
	xor eax,eax
	pop esi
	ret 4

 Block2:
	mov ecx,dword ptr [esi+0x515]
	mov eax,dword ptr [ecx+eax*8+4]
	pop esi
	ret 4
}
}
// CharacterData::Decode
_SUB_EXCEPTION_HANDLER(FCCE0)
__SUB_CLASS_THIS(000FCCE0, __thiscall, 125117,  CharacterData, uint64_t, CInPacket&, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_FCCE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x64
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x78]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x14],ebx
	mov edi,dword ptr [esp+0x88]
	push 8
	lea eax,[esp+0x3C]
	push eax
	mov ecx,edi
	call CInPacket::DecodeBuffer
	mov ecx,edi
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [ebx+0x539],ecx
	mov ecx,edi
	call CInPacket::Decode1
	xor ebp,ebp
	movzx eax,al
	mov dword ptr [esp+0x28],ebp
	mov dword ptr [esp+0x80],ebp
	cmp eax,ebp
	je Block7

 Block1:
	mov ecx,edi
	call CInPacket::Decode1
	mov ecx,edi
	call CInPacket::Decode4
	cmp eax,ebp
	jle Block4

 Block2:
	mov esi,eax

 Block3:
	push 8
	lea edx,[esp+0x44]
	push edx
	mov ecx,edi
	call CInPacket::DecodeBuffer
	push 0xFFFFFFFF
	lea ecx,[esp+0x2C]
	call ZArray<_LARGE_INTEGER>::InsertBefore
	sub esi,1
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],edx
	jne Block3

 Block4:
	mov ecx,edi
	call CInPacket::Decode4
	cmp eax,ebp
	jle Block7

 Block5:
	mov esi,eax
	lea esp,[esp]

 Block6:
	push 8
	lea eax,[esp+0x44]
	push eax
	mov ecx,edi
	call CInPacket::DecodeBuffer
	sub esi,1
	jne Block6

 Block7:
	mov esi,dword ptr [esp+0x38]
	mov ebp,dword ptr [esp+0x8C]
	mov eax,esi
	and eax,1
	xor ecx,ecx
	or eax,ecx
	je Block11

 Block8:
	push ebp
	push edi
	mov ecx,ebx
	call GW_CharacterStat::Decode
	mov ecx,edi
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [ebx+0x5FD],ecx
	mov ecx,edi
	call CInPacket::Decode1
	test al,al
	je Block11

 Block9:
	lea edx,[esp+0x24]
	push edx
	mov ecx,edi
	call CInPacket::DecodeStr
	push eax
	lea ecx,[ebx+0x6C5]
	mov byte ptr [esp+0x84],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov eax,esi
	and eax,2
	xor ecx,ecx
	or eax,ecx
	je Block13

 Block12:
	push edi
	mov ecx,ebx
	call GW_CharacterStat::DecodeMoney

 Block13:
	push offset ZArray<CashItemEntry>::~ZArray<CashItemEntry>
	push offset ZArray<CashItemEntry>::_ctor_default
	push 6
	push 4
	lea eax,[esp+0x58]
	push eax
	call __eh_vector_ctor_iterator
	push offset ZArray<CashItemEntry>::~ZArray<CashItemEntry>
	push offset ZArray<CashItemEntry>::_ctor_default
	push 6
	push 4
	lea ecx,[esp+0x70]
	push ecx
	mov byte ptr [esp+0x94],2
	call __eh_vector_ctor_iterator
	mov byte ptr [esp+0x80],3
	test ebp,ebp
	je Block49

 Block14:
	mov eax,dword ptr [esp+0x38]
	mov ebp,dword ptr [esp+0x14]
	and eax,4
	xor ecx,ecx
	or eax,ecx
	je Block27

 Block15:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	or esi,0xFFFFFFFF
	lea edi,[ebp+0x2E5]

 Block16:
	mov eax,dword ptr [edi-0x1E0]
	test eax,eax
	je Block21

 Block17:
	mov edx,dword ptr [eax+0x18]
	or edx,dword ptr [eax+0x1C]
	je Block21

 Block18:
	push esi
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block20

 Block19:
	add eax,4
	push eax
	call ebx

 Block20:
	push 0xFFFFFFFF
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x90],4
	call ZArray<CashItemEntry>::InsertBefore
	mov ecx,eax
	mov byte ptr [esp+0x8C],3
	call CashItemEntry::Set

 Block21:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block26

 Block22:
	mov ecx,dword ptr [eax+0x18]
	or ecx,dword ptr [eax+0x1C]
	je Block26

 Block23:
	lea edx,[esi-0x64]
	push edx
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block25

 Block24:
	add eax,4
	push eax
	call ebx

 Block25:
	push 0xFFFFFFFF
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x90],5
	call ZArray<CashItemEntry>::InsertBefore
	mov ecx,eax
	mov byte ptr [esp+0x8C],3
	call CashItemEntry::Set

 Block26:
	dec esi
	add edi,8
	cmp esi,0xFFFFFFC5
	jge Block16

 Block27:
	mov eax,0xFFFFFAFF
	sub eax,ebp
	mov dword ptr [esp+0x24],0
	lea ebx,[ebp+0x505]
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x1C],5
	jmp Block29

 Block29:
	mov eax,dword ptr [esp+0x24]
	cmp eax,4
	ja Block36

 Block30:
	cmp EAX, 0
je Block31
cmp EAX, 1
je Block32
cmp EAX, 2
je Block33
cmp EAX, 3
je Block34
cmp EAX, 4
je Block35


 Block31:
	mov eax,4
	jmp Block37

 Block32:
	mov eax,8
	jmp Block37

 Block33:
	mov eax,0x10
	jmp Block37

 Block34:
	mov eax,0x20
	jmp Block37

 Block35:
	mov eax,0x40
	jmp Block37

 Block36:
	xor eax,eax

 Block37:
	and eax,dword ptr [esp+0x38]
	xor ecx,ecx
	and ecx,dword ptr [esp+0x3C]
	or eax,ecx
	je Block48

 Block38:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block40

 Block39:
	mov eax,dword ptr [eax-4]

 Block40:
	lea edi,[eax-1]
	mov esi,1
	cmp edi,esi
	jl Block48

 Block41:
	mov eax,dword ptr [esp+0x20]
	lea ebp,[eax+ebx]
	nop

 Block42:
	mov ecx,dword ptr [ebx]
	lea eax,[ecx+esi*8]
	mov ecx,dword ptr [eax+4]
	test ecx,ecx
	je Block47

 Block43:
	mov edx,dword ptr [ecx+0x18]
	or edx,dword ptr [ecx+0x1C]
	je Block47

 Block44:
	mov eax,dword ptr [eax+4]
	push esi
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block46

 Block45:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block46:
	push 0xFFFFFFFF
	lea ecx,[esp+ebp+0x58]
	mov byte ptr [esp+0x90],6
	call ZArray<CashItemEntry>::InsertBefore
	mov ecx,eax
	mov byte ptr [esp+0x8C],3
	call CashItemEntry::Set

 Block47:
	inc esi
	cmp esi,edi
	jle Block42

 Block48:
	mov eax,1
	add dword ptr [esp+0x24],eax
	add ebx,4
	sub dword ptr [esp+0x1C],eax
	jne Block29

 Block49:
	mov eax,dword ptr [esp+0x38]
	mov ebx,dword ptr [esp+0x14]
	and eax,0x80
	add ebx,0x505
	mov dword ptr [esp+0x40],eax
	mov dword ptr [esp+0x24],0
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],5

 Block50:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block52

 Block51:
	mov eax,dword ptr [eax-4]

 Block52:
	mov ecx,dword ptr [esp+0x40]
	lea ebp,[eax-1]
	xor eax,eax
	or ecx,eax
	je Block54

 Block53:
	mov ecx,dword ptr [esp+0x88]
	call CInPacket::Decode1
	movzx ebp,al

 Block54:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block56

 Block55:
	mov eax,dword ptr [eax-4]

 Block56:
	dec eax
	cmp ebp,eax
	je Block58

 Block57:
	lea edx,[esp+0x88]
	push edx
	push 0
	lea eax,[ebp+1]
	push eax
	mov ecx,ebx
	call ZArray<ZRef<GW_ItemSlotBase>>::_Realloc

 Block58:
	mov eax,dword ptr [esp+0x24]
	cmp eax,4
	ja Block65

 Block59:
	cmp EAX, 0
je Block60
cmp EAX, 1
je Block61
cmp EAX, 2
je Block62
cmp EAX, 3
je Block63
cmp EAX, 4
je Block64


 Block60:
	mov eax,4
	jmp Block66

 Block61:
	mov eax,8
	jmp Block66

 Block62:
	mov eax,0x10
	jmp Block66

 Block63:
	mov eax,0x20
	jmp Block66

 Block64:
	mov eax,0x40
	jmp Block66

 Block65:
	xor eax,eax

 Block66:
	and eax,dword ptr [esp+0x38]
	xor ecx,ecx
	and ecx,dword ptr [esp+0x3C]
	or eax,ecx
	je Block74

 Block67:
	xor edi,edi
	test ebp,ebp
	jl Block74

 Block68:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+edi*8+4]
	lea esi,[ecx+edi*8]
	test eax,eax
	je Block73

 Block69:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block72

 Block70:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block72

 Block71:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block72:
	mov dword ptr [esi+4],0

 Block73:
	inc edi
	cmp edi,ebp
	jle Block68

 Block74:
	mov eax,1
	add dword ptr [esp+0x24],eax
	add ebx,4
	sub dword ptr [esp+0x20],eax
	jne Block50

 Block75:
	mov eax,dword ptr [esp+0x38]
	and eax,0x100000
	xor ecx,ecx
	or eax,ecx
	je Block77

 Block76:
	mov edi,dword ptr [esp+0x88]
	mov ecx,edi
	call CInPacket::Decode4
	mov esi,dword ptr [esp+0x14]
	mov ecx,edi
	mov dword ptr [esi+0x519],eax
	call CInPacket::Decode4
	mov dword ptr [esi+0x51D],eax

 Block77:
	mov eax,dword ptr [esp+0x38]
	and eax,4
	xor ecx,ecx
	or eax,ecx
	je Block225

 Block78:
	mov esi,dword ptr [esp+0x14]
	add esi,0xFD
	lea edi,[ecx+0x3C]

 Block79:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block84

 Block80:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block83

 Block81:
	mov eax,dword ptr [esi]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block83

 Block82:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block83:
	mov dword ptr [esi],0

 Block84:
	add esi,8
	sub edi,1
	jne Block79

 Block85:
	mov ecx,dword ptr [esp+0x88]
	call CInPacket::Decode2
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	movzx esi,ax
	test esi,esi
	je Block111

 Block86:
	mov bl,7

 Block87:
	mov ecx,dword ptr [esp+0x88]
	push ecx
	lea edx,[esp+0x34]
	push edx
	call GW_ItemSlotBase::Decode
	add esp,8
	lea eax,[esi-1]
	cmp eax,0x3A
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x80],bl
	ja Block104

 Block88:
	cmp dword ptr [esp+0x8C],edi
	je Block93

 Block89:
	mov ecx,dword ptr [eax+0x18]
	or ecx,dword ptr [eax+0x1C]
	je Block93

 Block90:
	neg esi
	push esi
	sub esp,8
	mov ecx,esp
	mov dword ptr [ecx+4],eax
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x38],esp
	cmp eax,edi
	je Block92

 Block91:
	add eax,4
	push eax
	call ebp

 Block92:
	push 0xFFFFFFFF
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0x90],8
	call ZArray<CashItemEntry>::InsertBefore
	mov ecx,eax
	mov byte ptr [esp+0x8C],bl
	call CashItemEntry::Set
	mov eax,dword ptr [esp+0x34]
	jmp Block101

 Block93:
	cmp eax,edi
	je Block95

 Block94:
	add eax,4
	push eax
	call ebp
	mov eax,dword ptr [esp+0x34]

 Block95:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edx+esi*8+0xFD]
	lea esi,[edx+esi*8+0xFD]
	cmp ecx,edi
	je Block100

 Block96:
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block99

 Block97:
	mov eax,dword ptr [esi]
	add eax,4
	push eax
	call ebp
	mov ecx,dword ptr [esi]
	cmp ecx,edi
	je Block99

 Block98:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block99:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esi],edi

 Block100:
	mov dword ptr [esi],eax

 Block101:
	mov byte ptr [esp+0x80],3
	cmp eax,edi
	je Block110

 Block102:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block109

 Block103:
	mov eax,dword ptr [esp+0x34]
	add eax,4
	push eax
	jmp Block107

 Block104:
	mov byte ptr [esp+0x80],3
	cmp eax,edi
	je Block110

 Block105:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block109

 Block106:
	mov ecx,dword ptr [esp+0x34]
	add ecx,4
	push ecx

 Block107:
	call ebp
	mov ecx,dword ptr [esp+0x34]
	cmp ecx,edi
	je Block109

 Block108:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block109:
	mov dword ptr [esp+0x34],edi

 Block110:
	mov ecx,dword ptr [esp+0x88]
	call CInPacket::Decode2
	movzx esi,ax
	cmp esi,edi
	jne Block87

 Block111:
	mov esi,dword ptr [esp+0x14]
	add esi,0x2DD
	mov edi,0x3C

 Block112:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block117

 Block113:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block116

 Block114:
	mov eax,dword ptr [esi]
	add eax,4
	push eax
	call ebp
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block116

 Block115:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block116:
	mov dword ptr [esi],0

 Block117:
	add esi,8
	sub edi,1
	jne Block112

 Block118:
	mov ecx,dword ptr [esp+0x88]
	call CInPacket::Decode2
	movzx esi,ax
	test esi,esi
	je Block141

 Block119:
	mov bl,9
	jmp Block121

 Block121:
	mov ecx,dword ptr [esp+0x88]
	push ecx
	lea edx,[esp+0x34]
	push edx
	call GW_ItemSlotBase::Decode
	add esp,8
	lea eax,[esi-1]
	cmp eax,0x3A
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x80],bl
	ja Block135

 Block122:
	cmp dword ptr [esp+0x8C],edi
	je Block127

 Block123:
	mov ecx,dword ptr [eax+0x18]
	or ecx,dword ptr [eax+0x1C]
	je Block127

 Block124:
	mov edx,0xFFFFFF9C
	sub edx,esi
	push edx
	sub esp,8
	mov ecx,esp
	mov dword ptr [ecx+4],eax
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x38],esp
	cmp eax,edi
	je Block126

 Block125:
	add eax,4
	push eax
	call ebp

 Block126:
	push 0xFFFFFFFF
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0x90],0xA
	call ZArray<CashItemEntry>::InsertBefore
	mov ecx,eax
	mov byte ptr [esp+0x8C],bl
	call CashItemEntry::Set
	mov eax,dword ptr [esp+0x34]
	jmp Block135

 Block127:
	cmp eax,edi
	je Block129

 Block128:
	add eax,4
	push eax
	call ebp
	mov eax,dword ptr [esp+0x34]

 Block129:
	mov ecx,dword ptr [esp+0x14]
	lea esi,[ecx+esi*8+0x2DD]
	mov ecx,dword ptr [esi]
	cmp ecx,edi
	je Block134

 Block130:
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block133

 Block131:
	mov eax,dword ptr [esi]
	add eax,4
	push eax
	call ebp
	mov ecx,dword ptr [esi]
	cmp ecx,edi
	je Block133

 Block132:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block133:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esi],edi

 Block134:
	mov dword ptr [esi],eax

 Block135:
	mov byte ptr [esp+0x80],3
	cmp eax,edi
	je Block140

 Block136:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block139

 Block137:
	mov ecx,dword ptr [esp+0x34]
	add ecx,4
	push ecx
	call ebp
	mov ecx,dword ptr [esp+0x34]
	cmp ecx,edi
	je Block139

 Block138:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block139:
	mov dword ptr [esp+0x34],edi

 Block140:
	mov ecx,dword ptr [esp+0x88]
	call CInPacket::Decode2
	movzx esi,ax
	cmp esi,edi
	jne Block121

 Block141:
	mov edi,dword ptr [esp+0x1C]
	mov eax,dword ptr [edi]
	test eax,eax
	je Block143

 Block142:
	mov eax,dword ptr [eax-4]

 Block143:
	mov ecx,dword ptr [esp+0x88]
	lea ebp,[eax-1]
	call CInPacket::Decode2
	movzx esi,ax
	test esi,esi
	je Block170

 Block144:
	mov bl,0xB
	lea esp,[esp]

 Block145:
	mov ecx,dword ptr [esp+0x88]
	push ecx
	lea edx,[esp+0x34]
	push edx
	call GW_ItemSlotBase::Decode
	add esp,8
	cmp esi,1
	mov byte ptr [esp+0x80],bl
	jl Block163

 Block146:
	cmp esi,ebp
	jg Block163

 Block147:
	cmp dword ptr [esp+0x8C],0
	mov eax,dword ptr [esp+0x34]
	je Block152

 Block148:
	mov ecx,dword ptr [eax+0x18]
	or ecx,dword ptr [eax+0x1C]
	je Block152

 Block149:
	push esi
	sub esp,8
	mov ecx,esp
	mov dword ptr [ecx+4],eax
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x38],esp
	test eax,eax
	je Block151

 Block150:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block151:
	push 0xFFFFFFFF
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0x90],0xC
	call ZArray<CashItemEntry>::InsertBefore
	mov ecx,eax
	mov byte ptr [esp+0x8C],bl
	call CashItemEntry::Set
	jmp Block160

 Block152:
	mov edx,dword ptr [edi]
	lea esi,[edx+esi*8]
	test eax,eax
	je Block154

 Block153:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esp+0x34]

 Block154:
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block159

 Block155:
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block158

 Block156:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block158

 Block157:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block158:
	mov dword ptr [esi+4],0
	mov eax,dword ptr [esp+0x34]

 Block159:
	mov dword ptr [esi+4],eax

 Block160:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x80],3
	test eax,eax
	je Block169

 Block161:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block168

 Block162:
	mov eax,dword ptr [esp+0x34]
	add eax,4
	push eax
	jmp Block166

 Block163:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x80],3
	test eax,eax
	je Block169

 Block164:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block168

 Block165:
	mov ecx,dword ptr [esp+0x34]
	add ecx,4
	push ecx

 Block166:
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x34]
	test ecx,ecx
	je Block168

 Block167:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block168:
	mov dword ptr [esp+0x34],0

 Block169:
	mov ecx,dword ptr [esp+0x88]
	call CInPacket::Decode2
	movzx esi,ax
	test esi,esi
	jne Block145

 Block170:
	mov esi,dword ptr [esp+0x14]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	add esi,0x4BD
	mov edi,4
	lea esp,[esp]

 Block171:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block176

 Block172:
	add eax,4
	push eax
	call ebx
	test eax,eax
	jne Block175

 Block173:
	mov eax,dword ptr [esi]
	add eax,4
	push eax
	call ebp
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block175

 Block174:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block175:
	mov dword ptr [esi],0

 Block176:
	add esi,8
	sub edi,1
	jne Block171

 Block177:
	mov ecx,dword ptr [esp+0x88]
	call CInPacket::Decode2
	movzx esi,ax
	test esi,esi
	je Block198

 Block178:
	mov bl,0xD
	lea ecx,[ecx]

 Block179:
	mov ecx,dword ptr [esp+0x88]
	push ecx
	lea edx,[esp+0x44]
	push edx
	call GW_ItemSlotBase::Decode
	add esp,8
	lea eax,[esi-0x3E8]
	mov byte ptr [esp+0x80],bl
	cmp eax,3
	jbe Block183

 Block180:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x80],3
	cmp eax,edi
	je Block196

 Block181:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block195

 Block182:
	mov ecx,dword ptr [esp+0x44]
	add ecx,4
	push ecx
	jmp Block193

 Block183:
	mov ecx,dword ptr [esp+0x44]
	cmp ecx,edi
	je Block185

 Block184:
	add ecx,4
	push ecx
	call ebp
	mov ecx,dword ptr [esp+0x44]

 Block185:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx+esi*8-0x1A83]
	lea esi,[edx+esi*8-0x1A83]
	cmp eax,edi
	je Block190

 Block186:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block189

 Block187:
	mov eax,dword ptr [esi]
	add eax,4
	push eax
	call ebp
	mov ecx,dword ptr [esi]
	cmp ecx,edi
	je Block189

 Block188:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block189:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [esi],edi

 Block190:
	mov dword ptr [esi],ecx
	mov byte ptr [esp+0x80],3
	cmp ecx,edi
	je Block196

 Block191:
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block195

 Block192:
	mov eax,dword ptr [esp+0x44]
	add eax,4
	push eax

 Block193:
	call ebp
	mov ecx,dword ptr [esp+0x44]
	cmp ecx,edi
	je Block195

 Block194:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block195:
	mov dword ptr [esp+0x44],edi

 Block196:
	mov ecx,dword ptr [esp+0x88]
	call CInPacket::Decode2
	movzx esi,ax
	cmp esi,edi
	jne Block179

 Block197:
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]

 Block198:
	mov esi,dword ptr [esp+0x14]
	add esi,0x4DD
	mov edi,5
	nop

 Block199:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block204

 Block200:
	add eax,4
	push eax
	call ebx
	test eax,eax
	jne Block203

 Block201:
	mov eax,dword ptr [esi]
	add eax,4
	push eax
	call ebp
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block203

 Block202:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block203:
	mov dword ptr [esi],0

 Block204:
	add esi,8
	sub edi,1
	jne Block199

 Block205:
	mov ecx,dword ptr [esp+0x88]
	call CInPacket::Decode2
	movzx esi,ax
	test esi,esi
	je Block225

 Block206:
	mov bl,0xE
	lea ecx,[ecx]

 Block207:
	mov ecx,dword ptr [esp+0x88]
	push ecx
	lea edx,[esp+0x44]
	push edx
	call GW_ItemSlotBase::Decode
	add esp,8
	lea eax,[esi-0x44C]
	mov byte ptr [esp+0x80],bl
	cmp eax,4
	jbe Block211

 Block208:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x80],3
	cmp eax,edi
	je Block224

 Block209:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block223

 Block210:
	mov ecx,dword ptr [esp+0x44]
	add ecx,4
	push ecx
	jmp Block221

 Block211:
	mov ecx,dword ptr [esp+0x44]
	cmp ecx,edi
	je Block213

 Block212:
	add ecx,4
	push ecx
	call ebp
	mov ecx,dword ptr [esp+0x44]

 Block213:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx+esi*8-0x1D83]
	lea esi,[edx+esi*8-0x1D83]
	cmp eax,edi
	je Block218

 Block214:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block217

 Block215:
	mov eax,dword ptr [esi]
	add eax,4
	push eax
	call ebp
	mov ecx,dword ptr [esi]
	cmp ecx,edi
	je Block217

 Block216:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block217:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [esi],edi

 Block218:
	mov dword ptr [esi],ecx
	mov byte ptr [esp+0x80],3
	cmp ecx,edi
	je Block224

 Block219:
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block223

 Block220:
	mov eax,dword ptr [esp+0x44]
	add eax,4
	push eax

 Block221:
	call ebp
	mov ecx,dword ptr [esp+0x44]
	cmp ecx,edi
	je Block223

 Block222:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block223:
	mov dword ptr [esp+0x44],edi

 Block224:
	mov ecx,dword ptr [esp+0x88]
	call CInPacket::Decode2
	movzx esi,ax
	cmp esi,edi
	jne Block207

 Block225:
	mov eax,dword ptr [esp+0x14]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	lea ecx,[eax+0x509]
	mov dword ptr [esp+0x1C],ecx
	mov ecx,0xFFFFFAFF
	sub ecx,eax
	mov dword ptr [esp+0x24],1
	mov dword ptr [esp+0x20],ecx
	mov dword ptr [esp+0x18],4
	xor edi,edi
	jmp Block227

 Block227:
	mov eax,dword ptr [esp+0x24]
	cmp eax,4
	ja Block234

 Block228:
	cmp EAX, 0
je Block229
cmp EAX, 1
je Block230
cmp EAX, 2
je Block231
cmp EAX, 3
je Block232
cmp EAX, 4
je Block233


 Block229:
	mov eax,4
	jmp Block235

 Block230:
	mov eax,8
	jmp Block235

 Block231:
	mov eax,0x10
	jmp Block235

 Block232:
	mov eax,0x20
	jmp Block235

 Block233:
	mov eax,0x40
	jmp Block235

 Block234:
	xor eax,eax

 Block235:
	and eax,dword ptr [esp+0x38]
	xor ecx,ecx
	and ecx,dword ptr [esp+0x3C]
	or eax,ecx
	je Block262

 Block236:
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [edx]
	cmp eax,edi
	jne Block238

 Block237:
	xor eax,eax
	jmp Block239

 Block238:
	mov eax,dword ptr [eax-4]

 Block239:
	mov ecx,dword ptr [esp+0x88]
	dec eax
	mov dword ptr [esp+0x2C],eax
	call CInPacket::Decode1
	movzx esi,al
	cmp esi,edi
	je Block262

 Block240:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x1C]
	lea ebx,[eax+ecx]
	nop

 Block241:
	mov edx,dword ptr [esp+0x88]
	push edx
	lea eax,[esp+0x44]
	push eax
	call GW_ItemSlotBase::Decode
	add esp,8
	cmp esi,1
	mov byte ptr [esp+0x80],0xF
	jl Block256

 Block242:
	cmp esi,dword ptr [esp+0x2C]
	jg Block256

 Block243:
	mov eax,dword ptr [esp+0x44]
	cmp dword ptr [esp+0x8C],edi
	je Block248

 Block244:
	mov ecx,dword ptr [eax+0x18]
	or ecx,dword ptr [eax+0x1C]
	je Block248

 Block245:
	push esi
	sub esp,8
	mov ecx,esp
	mov dword ptr [ecx+4],eax
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x3C],esp
	cmp eax,edi
	je Block247

 Block246:
	add eax,4
	push eax
	call ebp

 Block247:
	push 0xFFFFFFFF
	lea ecx,[esp+ebx+0x70]
	mov byte ptr [esp+0x90],0x10
	call ZArray<CashItemEntry>::InsertBefore
	mov ecx,eax
	mov byte ptr [esp+0x8C],0xF
	call CashItemEntry::Set
	jmp Block256

 Block248:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [edx]
	lea esi,[ecx+esi*8]
	cmp eax,edi
	je Block250

 Block249:
	add eax,4
	push eax
	call ebp
	mov eax,dword ptr [esp+0x44]

 Block250:
	mov ecx,dword ptr [esi+4]
	cmp ecx,edi
	je Block255

 Block251:
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block254

 Block252:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call ebp
	mov ecx,dword ptr [esi+4]
	cmp ecx,edi
	je Block254

 Block253:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block254:
	mov dword ptr [esi+4],edi
	mov eax,dword ptr [esp+0x44]

 Block255:
	mov dword ptr [esi+4],eax

 Block256:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x80],3
	cmp eax,edi
	je Block261

 Block257:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block260

 Block258:
	mov ecx,dword ptr [esp+0x44]
	add ecx,4
	push ecx
	call ebp
	mov ecx,dword ptr [esp+0x44]
	cmp ecx,edi
	je Block260

 Block259:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block260:
	mov dword ptr [esp+0x44],edi

 Block261:
	mov ecx,dword ptr [esp+0x88]
	call CInPacket::Decode1
	movzx esi,al
	cmp esi,edi
	jne Block241

 Block262:
	add dword ptr [esp+0x1C],4
	mov eax,1
	add dword ptr [esp+0x24],eax
	sub dword ptr [esp+0x18],eax
	jne Block227

 Block263:
	mov eax,dword ptr [esp+0x38]
	and eax,0x100
	xor ecx,ecx
	or eax,ecx
	je Block270

 Block264:
	mov ecx,dword ptr [esp+0x88]
	call CInPacket::Decode2
	movzx edi,ax
	test edi,edi
	je Block270

 Block265:
	mov ecx,dword ptr [esp+0x14]
	add ecx,0x53D
	call ZMap<long, long, long>::RemoveAll
	test edi,edi
	jle Block270

 Block266:
	mov ebx,dword ptr [esp+0x14]
	lea ebp,[ebx+0x53D]
	add ebx,0x585
	mov edi,edi

 Block267:
	mov ecx,dword ptr [esp+0x88]
	call CInPacket::Decode4
	mov ecx,dword ptr [esp+0x88]
	mov esi,eax
	mov dword ptr [esp+0x24],esi
	call CInPacket::Decode4
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x28]
	push edx
	mov ecx,ebp
	mov dword ptr [esp+0x34],eax
	call ZMap<long, long, long>::Insert
	mov ecx,dword ptr [esp+0x88]
	push 8
	lea eax,[esp+0x44]
	push eax
	call CInPacket::DecodeBuffer
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x28]
	push edx
	mov ecx,ebx
	call ZMap<long, _FILETIME, long>::Insert
	push esi
	call is_skill_need_master_level
	add esp,4
	test eax,eax
	je Block269

 Block268:
	mov ecx,dword ptr [esp+0x88]
	call CInPacket::Decode4
	mov dword ptr [esp+0x2C],eax
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	add ecx,0x56D
	call ZMap<long, long, long>::Insert

 Block269:
	dec edi
	test edi,edi
	jg Block267

 Block270:
	mov eax,dword ptr [esp+0x38]
	and eax,0x8000
	xor ecx,ecx
	or eax,ecx
	je Block276

 Block271:
	mov edi,dword ptr [esp+0x14]
	add edi,0x59D
	mov ecx,edi
	call ZMap<long, unsigned short, long>::RemoveAll
	mov ebx,dword ptr [esp+0x88]
	mov ecx,ebx
	call CInPacket::Decode2
	movzx esi,ax
	test esi,esi
	jle Block277

 Block272:
	jmp Block274

 Block274:
	mov ecx,ebx
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esp+0x24],eax
	call CInPacket::Decode2
	movzx edx,ax
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0x34],edx
	call ZMap<long, unsigned short, long>::Insert
	dec esi
	test esi,esi
	jg Block274

 Block275:
	jmp Block277

 Block276:
	mov ebx,dword ptr [esp+0x88]

 Block277:
	mov eax,dword ptr [esp+0x38]
	mov ebp,dword ptr [esp+0x14]
	and eax,0x200
	xor ecx,ecx
	or eax,ecx
	je Block282

 Block278:
	mov ecx,ebx
	call CInPacket::Decode2
	mov ecx,ebp
	movzx edi,ax
	call CharacterData::RemoveAllQuest
	test edi,edi
	jle Block282

 Block279:
	mov ecx,ebx
	call CInPacket::Decode2
	lea edx,[esp+0x24]
	push edx
	mov ecx,ebx
	movzx esi,ax
	call CInPacket::DecodeStr
	lea eax,[esp+0x24]
	push eax
	push esi
	mov ecx,ebp
	mov byte ptr [esp+0x88],0x11
	call CharacterData::SetQuest
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x80],3
	test eax,eax
	je Block281

 Block280:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block281:
	dec edi
	test edi,edi
	jg Block279

 Block282:
	mov eax,dword ptr [esp+0x38]
	and eax,0x4000
	xor ecx,ecx
	or eax,ecx
	je Block285

 Block283:
	mov ecx,ebx
	call CInPacket::Decode2
	lea edi,[ebp+0x5B5]
	mov ecx,edi
	movzx esi,ax
	call ZMap<unsigned short, _FILETIME, unsigned short>::RemoveAll
	test esi,esi
	jle Block285

 Block284:
	mov ecx,ebx
	call CInPacket::Decode2
	movzx ecx,ax
	push 8
	lea edx,[esp+0x44]
	mov dword ptr [esp+0x30],ecx
	push edx
	mov ecx,ebx
	call CInPacket::DecodeBuffer
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,edi
	call ZMap<unsigned short, _FILETIME, unsigned short>::Insert
	dec esi
	test esi,esi
	jg Block284

 Block285:
	mov eax,dword ptr [esp+0x38]
	and eax,0x400
	xor ecx,ecx
	or eax,ecx
	je Block293

 Block286:
	mov ecx,ebx
	call CInPacket::Decode2
	movzx eax,ax
	mov dword ptr [esp+0x24],eax
	test eax,eax
	jle Block293

 Block287:
	mov ebp,dword ptr [esp+0x14]
	add ebp,0x5E5
	jmp Block289

 Block289:
	mov dword ptr [esp+0x44],0
	push 0
	mov byte ptr [esp+0x84],0x12
	call ZRefCounted_AllocHelper<ZRefCountedDummy<GW_MiniGameRecord>>::call
	lea esi,[eax+0x10]
	add esp,4
	mov ecx,ebx
	mov dword ptr [eax+4],1
	mov dword ptr [esp+0x44],esi
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esi],eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esi+4],eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esi+8],eax
	call CInPacket::Decode4
	mov ecx,ebx
	mov dword ptr [esi+0xC],eax
	call CInPacket::Decode4
	lea edx,[esp+0x40]
	push edx
	push esi
	mov ecx,ebp
	mov dword ptr [esi+0x10],eax
	call ZMap<long, ZRef<GW_MiniGameRecord>, long>::Insert
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x84],3
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block292

 Block290:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block292

 Block291:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block292:
	mov eax,dword ptr [esp+0x24]
	dec eax
	mov dword ptr [esp+0x44],0
	mov dword ptr [esp+0x24],eax
	test eax,eax
	jg Block289

 Block293:
	mov eax,dword ptr [esp+0x38]
	and eax,0x800
	xor ecx,ecx
	or eax,ecx
	je Block304

 Block294:
	mov dword ptr [esp+0x30],ecx
	mov ecx,ebx
	mov byte ptr [esp+0x80],0x13
	call CInPacket::Decode2
	mov ebp,dword ptr [esp+0x14]
	movzx esi,ax
	test esi,esi
	jle Block297

 Block295:
	lea edi,[ebp+0x601]

 Block296:
	mov ecx,edi
	call ZList<GW_CoupleRecord>::AddTail_
	push ebx
	mov ecx,eax
	call GW_CoupleRecord::Decode
	dec esi
	test esi,esi
	jg Block296

 Block297:
	mov ecx,ebx
	call CInPacket::Decode2
	movzx esi,ax
	test esi,esi
	jle Block300

 Block298:
	lea edi,[ebp+0x615]
	lea esp,[esp]

 Block299:
	mov ecx,edi
	call ZList<GW_FriendRecord>::AddTail_
	push ebx
	mov ecx,eax
	call GW_FriendRecord::Decode
	dec esi
	test esi,esi
	jg Block299

 Block300:
	mov ecx,ebx
	call CInPacket::Decode2
	movzx esi,ax
	test esi,esi
	jle Block303

 Block301:
	lea edi,[ebp+0x63D]

 Block302:
	mov ecx,edi
	call ZList<GW_MarriageRecord>::AddTail_
	push ebx
	mov ecx,eax
	call GW_MarriageRecord::Decode
	dec esi
	test esi,esi
	jg Block302

 Block303:
	mov byte ptr [esp+0x80],3

 Block304:
	mov eax,dword ptr [esp+0x38]
	and eax,0x1000
	xor ecx,ecx
	or eax,ecx
	je Block309

 Block305:
	mov ebp,dword ptr [esp+0x14]
	lea esi,[ebp+0x651]
	lea edi,[ecx+5]

 Block306:
	mov ecx,ebx
	call CInPacket::Decode4
	mov dword ptr [esi],eax
	add esi,4
	sub edi,1
	jne Block306

 Block307:
	lea esi,[ebp+0x665]
	mov edi,0xA
	lea esp,[esp]

 Block308:
	mov ecx,ebx
	call CInPacket::Decode4
	mov dword ptr [esi],eax
	add esi,4
	sub edi,1
	jne Block308

 Block309:
	cmp dword ptr [esp+0x8C],0
	je Block378

 Block310:
	mov dword ptr [esp+0x18],1
	jmp Block312

 Block312:
	mov ebx,dword ptr [esp+0x18]
	lea ebx,[esp+ebx*4+0x60]
	xor edi,edi
	mov ecx,ebx
	mov dword ptr [esp+0x8C],edi
	call ZArray<CashItemEntry>::GetCount
	test eax,eax
	jle Block338

 Block313:
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esp+0x20],1
	mov dword ptr [esp+0x24],0xC

 Block314:
	mov ebp,dword ptr [esp+0x20]
	mov ecx,ebx
	call ZArray<CashItemEntry>::GetCount
	cmp ebp,eax
	jge Block319

 Block315:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+edi+4]
	mov edx,dword ptr [ecx+0x18]
	mov ecx,dword ptr [ecx+0x1C]
	mov dword ptr [esp+0x40],edx
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [esp+0x44],ecx
	lea esi,[eax+edx+4]

 Block316:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [esp+0x40]
	cmp ecx,dword ptr [eax+0x18]
	jne Block318

 Block317:
	mov edx,dword ptr [esp+0x44]
	cmp edx,dword ptr [eax+0x1C]
	je Block319

 Block318:
	mov ecx,ebx
	inc ebp
	add esi,0xC
	call ZArray<CashItemEntry>::GetCount
	cmp ebp,eax
	jl Block316

 Block319:
	mov ecx,ebx
	call ZArray<CashItemEntry>::GetCount
	cmp ebp,eax
	jge Block321

 Block320:
	mov eax,dword ptr [ebx]
	add eax,edi
	push eax
	mov ecx,ebx
	call ZArray<CashItemEntry>::RemoveAt
	sub dword ptr [esp+0x24],0xC
	mov eax,1
	sub dword ptr [esp+0x8C],eax
	sub dword ptr [esp+0x20],eax
	sub edi,0xC
	jmp Block336

 Block321:
	mov ebp,dword ptr [esp+0x18]
	lea ebp,[esp+ebp*4+0x48]
	mov ecx,ebp
	xor esi,esi
	call ZArray<CashItemEntry>::GetCount
	test eax,eax
	jle Block327

 Block322:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [ecx+edx+4]
	mov ecx,dword ptr [eax+0x18]
	mov edx,dword ptr [eax+0x1C]
	mov edi,dword ptr [ebp]
	mov dword ptr [esp+0x30],ecx
	mov dword ptr [esp+0x34],edx
	add edi,4

 Block323:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [esp+0x30]
	cmp ecx,dword ptr [eax+0x18]
	jne Block325

 Block324:
	mov edx,dword ptr [esp+0x34]
	cmp edx,dword ptr [eax+0x1C]
	je Block326

 Block325:
	mov ecx,ebp
	inc esi
	add edi,0xC
	call ZArray<CashItemEntry>::GetCount
	cmp esi,eax
	jl Block323

 Block326:
	mov edi,dword ptr [esp+0x1C]

 Block327:
	mov ecx,ebp
	call ZArray<CashItemEntry>::GetCount
	cmp esi,eax
	jge Block336

 Block328:
	mov edi,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+edi*4+0x48]
	mov edx,dword ptr [ebx]
	lea esi,[esi+esi*2]
	add esi,esi
	lea edi,[esp+edi*4+0x48]
	add esi,esi
	mov ecx,dword ptr [esi+eax+4]
	mov eax,dword ptr [esp+0x1C]
	mov eax,dword ptr [edx+eax+4]
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x68]
	call eax
	mov ebp,dword ptr [edi]
	mov edi,dword ptr [ebx]
	mov eax,dword ptr [ebp+esi+4]
	add edi,dword ptr [esp+0x1C]
	add ebp,esi
	test eax,eax
	je Block330

 Block329:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block330:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block335

 Block331:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block334

 Block332:
	mov eax,dword ptr [edi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [edi+4]
	test ecx,ecx
	je Block334

 Block333:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block334:
	mov dword ptr [edi+4],0

 Block335:
	mov ecx,dword ptr [ebp+4]
	mov dword ptr [edi+4],ecx
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+ecx*4+0x48]
	lea ecx,[esp+ecx*4+0x48]
	add edx,esi
	push edx
	call ZArray<CashItemEntry>::RemoveAt
	mov edi,dword ptr [esp+0x1C]

 Block336:
	mov esi,dword ptr [esp+0x8C]
	inc dword ptr [esp+0x20]
	add dword ptr [esp+0x24],0xC
	inc esi
	add edi,0xC
	mov ecx,ebx
	mov dword ptr [esp+0x8C],esi
	mov dword ptr [esp+0x1C],edi
	call ZArray<CashItemEntry>::GetCount
	cmp esi,eax
	jl Block314

 Block337:
	xor edi,edi

 Block338:
	mov ebp,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+ebp*4+0x48]
	lea ebp,[esp+ebp*4+0x48]
	cmp eax,edi
	je Block353

 Block339:
	cmp dword ptr [eax-4],edi
	je Block353

 Block340:
	mov ecx,ebp
	mov dword ptr [esp+0x8C],edi
	call ZArray<CashItemEntry>::GetCount
	test eax,eax
	jle Block353

 Block341:
	mov dword ptr [esp+0x24],edi

 Block342:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [esp+0x24]
	lea edi,[eax+ecx]
	mov eax,dword ptr [edi+4]
	add eax,0x18
	push eax
	lea edx,[esp+0x2C]
	push edx
	call _anon_IsExist_
	add esp,8
	test eax,eax
	jne Block351

 Block343:
	push 0xFFFFFFFF
	mov ecx,ebx
	call ZArray<CashItemEntry>::InsertBefore
	mov esi,eax
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block345

 Block344:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block345:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block350

 Block346:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block349

 Block347:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block349

 Block348:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block349:
	mov dword ptr [esi+4],0

 Block350:
	mov eax,dword ptr [edi+4]
	mov dword ptr [esi+4],eax
	mov ecx,dword ptr [edi+8]
	mov dword ptr [esi+8],ecx

 Block351:
	mov esi,dword ptr [esp+0x8C]
	add dword ptr [esp+0x24],0xC
	inc esi
	mov ecx,ebp
	mov dword ptr [esp+0x8C],esi
	call ZArray<CashItemEntry>::GetCount
	cmp esi,eax
	jl Block342

 Block352:
	xor edi,edi

 Block353:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [esp+0x18]
	lea ecx,[edx+eax*4+0x501]
	mov dword ptr [esp+0x24],ecx
	mov ecx,ebx
	mov dword ptr [esp+0x8C],edi
	call ZArray<CashItemEntry>::GetCount
	test eax,eax
	jle Block377

 Block354:
	mov edi,dword ptr [esp+0x18]
	mov dword ptr [esp+0x20],0

 Block355:
	mov ebp,dword ptr [ebx]
	mov ecx,dword ptr [esp+0x14]
	add ebp,dword ptr [esp+0x20]
	push edi
	call CharacterData::GetItemSlotCount
	cmp edi,1
	jne Block359

 Block356:
	mov ecx,dword ptr [ebp+8]
	cmp ecx,0xFFFFFF9B
	jg Block359

 Block357:
	cmp ecx,0xFFFFFF61
	jl Block359

 Block358:
	mov esi,dword ptr [esp+0x14]
	lea edx,[ecx*8]
	sub esi,edx
	sub esi,0x47
	jmp Block362

 Block359:
	mov ecx,dword ptr [ebp+8]
	cmp ecx,1
	jl Block372

 Block360:
	cmp ecx,eax
	jg Block372

 Block361:
	mov eax,dword ptr [esp+0x24]
	mov edx,dword ptr [eax]
	lea esi,[edx+ecx*8]

 Block362:
	test esi,esi
	je Block372

 Block363:
	cmp dword ptr [esi+4],0
	jne Block372

 Block364:
	mov eax,dword ptr [ebp+4]
	test eax,eax
	je Block366

 Block365:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block366:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block371

 Block367:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block370

 Block368:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block370

 Block369:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block370:
	mov dword ptr [esi+4],0

 Block371:
	mov eax,dword ptr [ebp+4]
	mov dword ptr [esi+4],eax
	jmp Block376

 Block372:
	mov ecx,dword ptr [esp+0x14]
	push edi
	call CharacterData::FindEmptySlotPosition
	mov ecx,dword ptr [esp+0x24]
	push ebp
	test eax,eax
	jle Block374

 Block373:
	mov edx,dword ptr [ecx]
	lea ecx,[edx+eax*8]
	jmp Block375

 Block374:
	push 0xFFFFFFFF
	call ZArray<ZRef<GW_ItemSlotBase>>::InsertBefore
	mov ecx,eax

 Block375:
	call ZRef<GW_ItemSlotBase>::op_assign_copy

 Block376:
	mov esi,dword ptr [esp+0x8C]
	add dword ptr [esp+0x20],0xC
	inc esi
	mov ecx,ebx
	mov dword ptr [esp+0x8C],esi
	call ZArray<CashItemEntry>::GetCount
	cmp esi,eax
	jl Block355

 Block377:
	mov eax,dword ptr [esp+0x18]
	inc eax
	cmp eax,5
	mov dword ptr [esp+0x18],eax
	jle Block312

 Block378:
	mov eax,dword ptr [esp+0x38]
	mov edi,dword ptr [esp+0x88]
	and eax,0x40000
	xor ecx,ecx
	or eax,ecx
	je Block390

 Block379:
	mov ecx,edi
	call CInPacket::Decode2
	mov ebp,dword ptr [esp+0x14]
	movzx eax,ax
	mov dword ptr [esp+0x8C],eax
	test eax,eax
	jle Block391

 Block380:
	lea ecx,[ebp+0x629]
	call ZList<GW_NewYearCardRecord>::AddTail_
	mov esi,eax
	push edi
	mov ecx,esi
	call GW_NewYearCardRecord::Decode
	mov dword ptr [esp+0x88],0
	cmp dword ptr [esi+0x32],0
	mov byte ptr [esp+0x80],0x14
	mov edx,offset _S_O
	jne Block382

 Block381:
	mov edx,offset _S_X__1

 Block382:
	cmp dword ptr [esi+0x15],0
	mov ecx,offset _S_O
	jne Block384

 Block383:
	mov ecx,offset _S_X__1

 Block384:
	cmp dword ptr [esi+0x36],0
	mov eax,offset _S_DELIVERED
	jne Block386

 Block385:
	mov eax,offset _S_GOING

 Block386:
	lea ebx,[esi+0x42]
	push ebx
	push edx
	lea edx,[esi+0x25]
	push edx
	mov edx,dword ptr [esi]
	push ecx
	lea ecx,[esi+8]
	push ecx
	push eax
	push edx
	lea eax,[esp+0xA4]
	push offset _S_DSSSSSS
	push eax
	call ZXString<char>::Format
	mov esi,dword ptr [esp+0xAC]
	add esp,0x24
	push esi
	call OutputDebugStringA
	mov byte ptr [esp+0x80],3
	test esi,esi
	je Block388

 Block387:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block388:
	mov eax,dword ptr [esp+0x8C]
	dec eax
	mov dword ptr [esp+0x8C],eax
	test eax,eax
	jg Block380

 Block389:
	jmp Block391

 Block390:
	mov ebp,dword ptr [esp+0x14]

 Block391:
	mov eax,dword ptr [esp+0x38]
	and eax,0x80000
	xor ecx,ecx
	or eax,ecx
	je Block396

 Block392:
	mov ecx,edi
	call CInPacket::Decode2
	movzx ebx,ax
	test ebx,ebx
	jle Block396

 Block393:
	mov ecx,edi
	call CInPacket::Decode2
	lea ecx,[esp+0x88]
	push ecx
	mov ecx,edi
	movzx esi,ax
	call CInPacket::DecodeStr
	lea edx,[esp+0x88]
	push edx
	push esi
	mov ecx,ebp
	mov byte ptr [esp+0x88],0x15
	call CharacterData::InitQuestExFromRawStr
	mov eax,dword ptr [esp+0x88]
	mov byte ptr [esp+0x80],3
	test eax,eax
	je Block395

 Block394:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block395:
	dec ebx
	test ebx,ebx
	jg Block393

 Block396:
	mov eax,dword ptr [esp+0x38]
	and eax,0x200000
	xor ecx,ecx
	or eax,ecx
	je Block402

 Block397:
	mov eax,dword ptr [ebp+0x3D]
	push eax
	lea ecx,[ebp+0x39]
	push ecx
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
	cmp eax,0x21
	jne Block402

 Block398:
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,ebp
	call CharacterData::GetWildHunterInfo
	mov eax,dword ptr [eax+4]
	push edi
	mov ecx,eax
	mov byte ptr [esp+0x84],0x16
	call GW_WildHunterInfo::Decode
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x80],3
	test eax,eax
	je Block402

 Block399:
	lea esi,[eax-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block402

 Block400:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block402

 Block401:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block402:
	mov eax,dword ptr [esp+0x38]
	and eax,0x400000
	xor ecx,ecx
	or eax,ecx
	je Block406

 Block403:
	mov ecx,edi
	call CInPacket::Decode2
	lea ebx,[ebp+0x5CD]
	mov ecx,ebx
	movzx esi,ax
	call ZMap<unsigned short, _FILETIME, unsigned short>::RemoveAll
	test esi,esi
	jle Block406

 Block404:
	lea ebx,[ebx]

 Block405:
	mov ecx,edi
	call CInPacket::Decode2
	movzx ecx,ax
	push 8
	lea edx,[esp+0x44]
	mov dword ptr [esp+0x8C],ecx
	push edx
	mov ecx,edi
	call CInPacket::DecodeBuffer
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x8C]
	push ecx
	mov ecx,ebx
	call ZMap<unsigned short, _FILETIME, unsigned short>::Insert
	dec esi
	test esi,esi
	jg Block405

 Block406:
	mov ecx,ebp
	call CharacterData::InitAdditionalItemEffect
	mov eax,dword ptr [esp+0x38]
	and eax,0x800000
	xor ecx,ecx
	or eax,ecx
	je Block411

 Block407:
	lea esi,[ebp+0x795]
	mov ecx,esi
	call ZMap<long, long, long>::RemoveAll
	mov ecx,edi
	call CInPacket::Decode2
	movzx eax,ax
	test eax,eax
	jle Block411

 Block408:
	mov ebx,eax
	jmp Block410

 Block410:
	mov ecx,edi
	call CInPacket::Decode2
	movzx edx,ax
	mov ecx,edi
	mov dword ptr [esp+0x8C],edx
	call CInPacket::Decode2
	lea ecx,[esp+0x88]
	movzx eax,ax
	push ecx
	lea edx,[esp+0x90]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x90],eax
	call ZMap<long, long, long>::Insert
	sub ebx,1
	jne Block410

 Block411:
	push offset ZArray<CashItemEntry>::~ZArray<CashItemEntry>
	push 6
	push 4
	lea eax,[esp+0x6C]
	push eax
	mov byte ptr [esp+0x90],2
	call __eh_vector_dtor_iterator
	push offset ZArray<CashItemEntry>::~ZArray<CashItemEntry>
	push 6
	push 4
	lea ecx,[esp+0x54]
	push ecx
	mov byte ptr [esp+0x90],0
	call __eh_vector_dtor_iterator
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZArray<_LARGE_INTEGER>::RemoveAll
	mov eax,dword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret 8
}
}
// CharacterData::GetIncLevel
__SUB_CLASS_THIS0(000F7010, __thiscall, 125132,  CharacterData, long) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov ebp,ecx
	mov eax,dword ptr [ebp+0x515]
	push edi
	xor edi,edi
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	lea ebx,[eax-1]
	mov esi,1
	cmp ebx,esi
	jl Block8

 Block3:
	mov eax,dword ptr [ebp+0x515]
	cmp dword ptr [eax+esi*8+4],0
	lea eax,[eax+esi*8+4]
	je Block7

 Block4:
	mov eax,dword ptr [eax]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x22F
	jne Block7

 Block5:
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetIncLevel
	cmp edi,eax
	jge Block7

 Block6:
	mov edi,eax

 Block7:
	inc esi
	cmp esi,ebx
	jle Block3

 Block8:
	mov eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret
}
}
// PARTYMEMBER::GetBossName
__SUB_CLASS_THIS0(000F7830, __thiscall, 87311,  PARTYMEMBER, ZXString<char>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [ecx+0xAE]
	or edx,0xFFFFFFFF
	mov dword ptr [esp+4],0
	xor eax,eax

 Block1:
	cmp dword ptr [ecx+eax*4],esi
	jne Block3

 Block2:
	mov edx,eax

 Block3:
	inc eax
	cmp eax,6
	jl Block1

 Block4:
	cmp edx,5
	ja Block10

 Block5:
	imul edx,0xD
	push edi
	mov edi,dword ptr [esp+0x10]
	lea ecx,[edx+ecx+0x18]
	mov dword ptr [edi],0
	test ecx,ecx
	je Block9

 Block6:
	mov eax,ecx
	lea esi,[eax+1]

 Block7:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block7

 Block8:
	sub eax,esi
	mov esi,eax
	push esi
	push ecx
	push 0
	push esi
	mov ecx,edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer

 Block9:
	mov eax,edi
	pop edi
	pop esi
	pop ecx
	ret 4

 Block10:
	mov esi,dword ptr [esp+0xC]
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// _ZtlSecureTear_unsignedlong_
__SUB(000F3F90, __fastcall, 144657,  uint32_t, unsigned long, unsigned long*) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	mov ecx,offset _D_G_RAND
	mov esi,edx
	call CRand32::Random
	mov ecx,eax
	mov dword ptr [esi],eax
	xor ecx,edi
	ror ecx,5
	xor eax,0xBAADF00D
	ror eax,5
	pop edi
	mov dword ptr [esi+4],ecx
	add eax,ecx
	pop esi
	ret
}
}
// CharacterData::RemoveAllQuest
__SUB_CLASS_THIS0(000F4550, __thiscall, 125099,  CharacterData, void) {
__asm {

 Block0:
	add ecx,0x6F5
	jmp  ZMap<unsigned short, ZXString<char>, unsigned short>::RemoveAll
}
}
// CharacterData::GetQuest
__SUB_CLASS_THIS(000F1270, __thiscall, 125091,  CharacterData, const ZXString<char>*, uint16_t, ZXString<char>&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push eax
	lea edx,[esp+8]
	push edx
	add ecx,0x6F5
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetAt
	ret 8
}
}
// CharacterData::GetQuestPlayTimeRecord
_SUB_EXCEPTION_HANDLER(FC8C0)
__SUB_CLASS_THIS(000FC8C0, __thiscall, 125107,  CharacterData, PlayTimeRecord*, PlayTimeRecord*, uint16_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_FC8C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	xor ecx,ecx
	xor eax,eax
	push ebx
	mov word ptr [esp+0x43],cx
	push 2
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x44],bl
	mov word ptr [esp+0x45],ax
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x40],eax
	mov dword ptr [esp+0x2C],ebx
	call ZXString<char>::GetBuffer
	movzx edx,word ptr [_S_LT__1]
	push 2
	lea ecx,[esp+0x28]
	mov word ptr [eax],dx
	call ZXString<char>::ReleaseBuffer
	push ebx
	push 4
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x54],ebx
	mov dword ptr [esp+0x28],ebx
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_DONE]
	mov dword ptr [eax],ecx
	push 4
	lea ecx,[esp+0x24]
	call ZXString<char>::ReleaseBuffer
	push ebx
	push 2
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x54],1
	mov dword ptr [esp+0x24],ebx
	call ZXString<char>::GetBuffer
	movzx edx,word ptr [_S_PT]
	push 2
	lea ecx,[esp+0x20]
	mov word ptr [eax],dx
	call ZXString<char>::ReleaseBuffer
	push ebx
	push 3
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x54],2
	mov dword ptr [esp+0x20],ebx
	call ZXString<char>::GetBuffer
	mov cx,word ptr [_S_CNT]
	mov word ptr [eax],cx
	mov dl,byte ptr [_S_CNT+2]
	push 3
	lea ecx,[esp+0x1C]
	mov byte ptr [eax+2],dl
	call ZXString<char>::ReleaseBuffer
	mov edi,dword ptr [esp+0x58]
	lea eax,[esp+0x24]
	push eax
	push edi
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x58],3
	call CharacterData::GetQuestEx
	lea edx,[esp+0x20]
	push edx
	push edi
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x58],4
	call CharacterData::GetQuestEx
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x50],5
	push edi
	lea edx,[esp+0x30]
	push edx
	mov ecx,esi
	call CharacterData::GetQuestEx
	lea eax,[esp+0x18]
	push eax
	push edi
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x58],6
	call CharacterData::GetQuestEx
	mov eax,dword ptr [esp+0x2C]
	mov edi,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x30]
	mov byte ptr [esp+0x4C],7
	cmp eax,ebx
	je Block14

 Block1:
	cmp byte ptr [eax],bl
	je Block14

 Block2:
	cmp edi,ebx
	je Block14

 Block3:
	cmp byte ptr [edi],bl
	je Block14

 Block4:
	cmp edx,ebx
	je Block14

 Block5:
	cmp byte ptr [edx],bl
	je Block14

 Block6:
	cmp ecx,ebx
	je Block14

 Block7:
	cmp byte ptr [ecx],bl
	je Block14

 Block8:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x30]
	mov dword ptr [esp+0x5C],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call Util::GetFileTimeFromStringDate
	mov edi,eax
	mov eax,dword ptr [esp+0x18]
	push eax
	mov ebp,edx
	call _atoi
	mov ecx,dword ptr [esp+0x30]
	push ecx
	mov byte ptr [esp+0x48],al
	call _atoi
	mov edx,dword ptr [esp+0x3C]
	push edx
	mov word ptr [esp+0x4D],ax
	call _atoi
	mov esi,dword ptr [esp+0x64]
	mov word ptr [esp+0x4F],ax
	mov eax,dword ptr [esp+0x4C]
	mov cl,byte ptr [esp+0x50]
	mov dword ptr [esi],edi
	mov dword ptr [esi+4],ebp
	mov dword ptr [esi+8],eax
	mov eax,dword ptr [esp+0x40]
	add esp,0x10
	mov byte ptr [esi+0xC],cl
	mov byte ptr [esp+0x4C],6
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x4C],5
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x4C],4
	cmp eax,ebx
	je Block21

 Block13:
	add eax,0xFFFFFFF4
	push eax
	jmp Block20

 Block14:
	mov esi,dword ptr [esp+0x54]
	xor eax,eax
	mov byte ptr [esi+8],bl
	mov word ptr [esi+9],ax
	mov word ptr [esi+0xB],ax
	mov dword ptr [esi],eax
	mov dword ptr [esi+4],eax
	mov byte ptr [esp+0x4C],6
	cmp ecx,ebx
	je Block16

 Block15:
	add ecx,0xFFFFFFF4
	push ecx
	call ZXString<char>::_Release
	mov edi,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x2C]
	add esp,4

 Block16:
	mov byte ptr [esp+0x4C],5
	cmp edx,ebx
	je Block18

 Block17:
	add edx,0xFFFFFFF4
	push edx
	call ZXString<char>::_Release
	mov edi,dword ptr [esp+0x18]
	add esp,4

 Block18:
	mov byte ptr [esp+0x4C],4
	cmp edi,ebx
	je Block21

 Block19:
	add edi,0xFFFFFFF4
	push edi

 Block20:
	call ZXString<char>::_Release
	add esp,4

 Block21:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x4C],3
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],2
	cmp eax,ebx
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x4C],1
	cmp eax,ebx
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp eax,ebx
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	mov eax,esi
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 8
}
}
// PARCEL::Decode
_SUB_EXCEPTION_HANDLER(F88A0)
__SUB_CLASS_THIS(000F88A0, __thiscall, 111226,  PARCEL, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F88A0
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
	mov esi,ecx
	mov edi,dword ptr [esp+0x24]
	push 0xEA
	push esi
	mov ecx,edi
	call CInPacket::DecodeBuffer
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	test eax,eax
	je Block5

 Block1:
	lea eax,[esp+0xC]
	push edi
	push eax
	call GW_ItemSlotBase::Decode
	add esp,8
	push eax
	lea ecx,[esi+0xEA]
	mov dword ptr [esp+0x20],0
	call ZRef<GW_ItemSlotBase>::op_assign_copy
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block5

 Block2:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block3:
	mov ecx,dword ptr [esp+0x10]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x10]
	test ecx,ecx
	je Block5

 Block4:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block5:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4
}
}
// CharacterData::IsQuestInProgress
__SUB_CLASS_THIS(000FCC10, __thiscall, 125090,  CharacterData, int32_t, uint16_t) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push esi
	mov esi,dword ptr [esp+0x1C]
	push edi
	mov edi,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	mov ebx,ecx
	push esi
	mov ecx,edi
	call CQuestMan::IsDailyPlayQuest
	test eax,eax
	jne Block2

 Block1:
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 4

 Block2:
	push esi
	mov ecx,edi
	call CQuestMan::GetQuestTimeLimit2
	mov ecx,eax
	mov eax,0xAAAAAAAB
	mul ecx
	shr edx,4
	mov eax,0x88888889
	mul edx
	shr edx,5
	mov eax,0x88888889
	mul edx
	shr edx,5
	mov dword ptr [esp+0x20],edx
	fild dword ptr [esp+0x20]
	test edx,edx
	jge Block4

 Block3:
	fadd qword ptr [__real_41f0000000000000]

 Block4:
	fmul qword ptr [__real_3feccccccccccccd]
	call __ftol2_sse
	push esi
	lea edx,[esp+0x10]
	push edx
	mov ecx,ebx
	mov edi,eax
	call CharacterData::GetQuestPlayTimeRecord
	movzx eax,word ptr [esp+0x17]
	xor ecx,ecx
	cmp eax,edi
	setge cl
	pop edi
	pop esi
	pop ebx
	mov eax,ecx
	add esp,0x10
	ret 4
}
}
// SINGLEMACRO::Decode
__SUB_CLASS_THIS(000F97F0, __thiscall, 92029,  SINGLEMACRO, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	lea eax,[esp+0x10]
	mov edi,ecx
	push eax
	mov ecx,ebx
	call CInPacket::DecodeStr
	mov ecx,dword ptr [eax]
	push 0xD
	push ecx
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_lstrcpynA]
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,ebx
	mov byte ptr [edi+0x18],0
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [edi+0x19],eax
	xor esi,esi
	jmp Block4

 Block4:
	mov ecx,ebx
	call CInPacket::Decode4
	mov dword ptr [edi+esi*4],eax
	inc esi
	cmp esi,3
	jl Block4

 Block5:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CharacterData::InitAdditionalItemEffect
__SUB_CLASS_THIS0(000F4DB0, __thiscall, 125099,  CharacterData, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea ecx,[esi+0x725]
	call ZArray<Additional::SKILL>::RemoveAll
	xor eax,eax
	mov dword ptr [esi+0x729],eax
	mov dword ptr [esi+0x72D],eax
	mov dword ptr [esi+0x731],eax
	mov dword ptr [esi+0x735],eax
	mov dword ptr [esi+0x739],eax
	mov dword ptr [esi+0x73D],eax
	mov dword ptr [esi+0x741],eax
	mov dword ptr [esi+0x745],eax
	mov dword ptr [esi+0x749],eax
	mov dword ptr [esi+0x74D],eax
	mov dword ptr [esi+0x751],eax
	mov dword ptr [esi+0x755],eax
	mov dword ptr [esi+0x759],eax
	mov dword ptr [esi+0x75D],eax
	mov dword ptr [esi+0x761],eax
	mov dword ptr [esi+0x765],eax
	mov dword ptr [esi+0x769],eax
	mov dword ptr [esi+0x76D],eax
	mov dword ptr [esi+0x771],eax
	mov dword ptr [esi+0x775],eax
	mov dword ptr [esi+0x779],eax
	lea ecx,[esi+0x77D]
	pop esi
	jmp  ZMap<ZXString<char>, ZPair<long, long>, ZXString<char>>::RemoveAll
}
}
// CharacterData::RemoveQuest
__SUB_CLASS_THIS(000F2020, __thiscall, 125098,  CharacterData, int32_t, uint16_t) {
__asm {

 Block0:
	lea eax,[esp+4]
	push eax
	add ecx,0x6F5
	call ZMap<unsigned short, ZXString<char>, unsigned short>::RemoveKey
	ret 4
}
}
// CharacterData::CharacterData
_SUB_EXCEPTION_HANDLER(87540)
__SUB_CLASS_THIS0(00087540, __thiscall, 125135,  CharacterData, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_87540
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
	mov esi,ecx
	mov dword ptr [esp+0x10],esi
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi+0xCD],offset ZList<SPSet>::`vftable'
	mov dword ptr [esi+0xD5],edi
	mov dword ptr [esi+0xD9],edi
	mov dword ptr [esi+0xDD],edi
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push offset ZRef<GW_ItemSlotBase>::_ctor_default
	push 0x3C
	push 8
	lea eax,[esi+0xF9]
	push eax
	mov dword ptr [esp+0x30],edi
	call __eh_vector_ctor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push offset ZRef<GW_ItemSlotBase>::_ctor_default
	push 0x3C
	push 8
	lea ecx,[esi+0x2D9]
	push ecx
	mov byte ptr [esp+0x30],1
	call __eh_vector_ctor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push offset ZRef<GW_ItemSlotBase>::_ctor_default
	push 4
	push 8
	lea edx,[esi+0x4B9]
	push edx
	mov byte ptr [esp+0x30],2
	call __eh_vector_ctor_iterator
	push offset ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	push offset ZRef<GW_ItemSlotBase>::_ctor_default
	push 5
	push 8
	lea eax,[esi+0x4D9]
	push eax
	mov byte ptr [esp+0x30],3
	call __eh_vector_ctor_iterator
	push offset ZArray<ZRef<GW_ItemSlotBase>>::~ZArray<ZRef<GW_ItemSlotBase>>
	push offset ZArray<ZRef<GW_ItemSlotBase>>::_ctor_default
	push 6
	push 4
	lea ecx,[esi+0x501]
	push ecx
	mov byte ptr [esp+0x30],4
	call __eh_vector_ctor_iterator
	lea ecx,[esi+0x521]
	mov ebx,0x1F
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, EQUIPPED_SETITEM, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, EQUIPPED_SETITEM, long>::_CalcAutoGrow
	lea ecx,[esi+0x53D]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, long, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, long, long>::_CalcAutoGrow
	lea ecx,[esi+0x555]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, long, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, long, long>::_CalcAutoGrow
	lea ecx,[esi+0x56D]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, long, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, long, long>::_CalcAutoGrow
	lea ecx,[esi+0x585]
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, _FILETIME, long>::`vftable'
	push 0x64
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, _FILETIME, long>::_CalcAutoGrow
	lea ecx,[esi+0x59D]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, unsigned short, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, unsigned short, long>::_CalcAutoGrow
	lea ecx,[esi+0x5B5]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, _FILETIME, unsigned short>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, _FILETIME, unsigned short>::_CalcAutoGrow
	lea ecx,[esi+0x5CD]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, _FILETIME, unsigned short>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, _FILETIME, unsigned short>::_CalcAutoGrow
	lea ecx,[esi+0x5E5]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<GW_MiniGameRecord>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<GW_MiniGameRecord>, long>::_CalcAutoGrow
	int 3// TODO: 	mov dword ptr [esi+0x601],offset ZList<GW_CoupleRecord>::`vftable'
	mov dword ptr [esi+0x609],edi
	mov dword ptr [esi+0x60D],edi
	mov dword ptr [esi+0x611],edi
	int 3// TODO: 	mov dword ptr [esi+0x615],offset ZList<GW_FriendRecord>::`vftable'
	mov dword ptr [esi+0x61D],edi
	mov dword ptr [esi+0x621],edi
	mov dword ptr [esi+0x625],edi
	int 3// TODO: 	mov dword ptr [esi+0x629],offset ZList<GW_NewYearCardRecord>::`vftable'
	mov dword ptr [esi+0x631],edi
	mov dword ptr [esi+0x635],edi
	mov dword ptr [esi+0x639],edi
	lea ecx,[esi+0x6AD]
	int 3// TODO: 	mov dword ptr [esi+0x63D],offset ZList<GW_MarriageRecord>::`vftable'
	mov dword ptr [esi+0x645],edi
	mov dword ptr [esi+0x649],edi
	mov dword ptr [esi+0x64D],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, long, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, long, long>::_CalcAutoGrow
	mov dword ptr [esi+0x6C5],edi
	lea ecx,[esi+0x6D1]
	mov dword ptr [esi+0x6CD],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<GW_MonsterBookCard>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<GW_MonsterBookCard>, long>::_CalcAutoGrow
	lea ecx,[esi+0x6F5]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, ZXString<char>, unsigned short>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, ZXString<char>, unsigned short>::_CalcAutoGrow
	lea ecx,[esi+0x70D]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, CSimpleStrMap, unsigned short>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, CSimpleStrMap, unsigned short>::_CalcAutoGrow
	mov dword ptr [esi+0x725],edi
	lea ecx,[esi+0x77D]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, ZPair<long, long>, ZXString<char>>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<ZXString<char>, ZPair<long, long>, ZXString<char>>::_CalcAutoGrow
	lea ecx,[esi+0x795]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, long, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, long, long>::_CalcAutoGrow
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret
}
}
// PARTYMEMBER::GetMemberCount
__SUB_CLASS_THIS0(000F1C00, __thiscall, 87312,  PARTYMEMBER, long) {
__asm {

 Block0:
	xor eax,eax
	cmp dword ptr [ecx],eax
	je Block2

 Block1:
	mov eax,1

 Block2:
	cmp dword ptr [ecx+4],0
	je Block4

 Block3:
	inc eax

 Block4:
	cmp dword ptr [ecx+8],0
	je Block6

 Block5:
	inc eax

 Block6:
	cmp dword ptr [ecx+0xC],0
	je Block8

 Block7:
	inc eax

 Block8:
	cmp dword ptr [ecx+0x10],0
	je Block10

 Block9:
	inc eax

 Block10:
	cmp dword ptr [ecx+0x14],0
	je Block12

 Block11:
	inc eax

 Block12:
	ret
}
}
// GUILDMEMBER::Decode
__SUB_CLASS_THIS(000F2B40, __thiscall, 15509,  GUILDMEMBER, void, CInPacket&) {
__asm {

 Block0:
	push 0x25
	push ecx
	mov ecx,dword ptr [esp+0xC]
	call CInPacket::DecodeBuffer
	ret 4
}
}
// CharacterData::GetItem
__SUB_CLASS_THIS(0002B990, __thiscall, 125112,  CharacterData, ZRef<GW_ItemSlotBase>*, ZRef<GW_ItemSlotBase>*, long, long) {
__asm {

 Block0:
	push ecx
	push ebx
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x14]
	xor ebx,ebx
	lea eax,[ecx-1]
	mov dword ptr [esp+8],ebx
	cmp eax,4
	ja Block25

 Block1:
	cmp ecx,1
	jne Block19

 Block2:
	push edi
	mov edi,dword ptr [esp+0x1C]
	cmp edi,ebx
	jge Block8

 Block3:
	mov eax,edi
	neg eax
	lea ecx,[eax-0x3E8]
	cmp ecx,3
	ja Block5

 Block4:
	lea edx,[edi*8]
	sub esi,edx
	sub esi,0x1A87
	push esi
	mov esi,dword ptr [esp+0x18]
	mov ecx,esi
	call ZRef<GW_ItemSlotBase>::_ctor_copy
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	pop ecx
	ret 0xC

 Block5:
	add eax,0xFFFFFBB4
	cmp eax,4
	ja Block7

 Block6:
	lea eax,[edi*8]
	sub esi,eax
	sub esi,0x1D87
	push esi
	mov esi,dword ptr [esp+0x18]
	mov ecx,esi
	call ZRef<GW_ItemSlotBase>::_ctor_copy
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	pop ecx
	ret 0xC

 Block7:
	cmp edi,ebx

 Block8:
	je Block18

 Block9:
	cmp edi,0xFFFFFFC5
	jge Block11

 Block10:
	cmp edi,0xFFFFFF9C
	jge Block18

 Block11:
	push 1
	mov ecx,esi
	call CharacterData::GetItemSlotCount
	cmp edi,eax
	jg Block18

 Block12:
	cmp edi,0xFFFFFF61
	jl Block18

 Block13:
	cmp edi,0xFFFFFF9C
	jge Block15

 Block14:
	lea ecx,[edi*8]
	sub esi,ecx
	sub esi,0x47
	push esi
	mov esi,dword ptr [esp+0x18]
	mov ecx,esi
	call ZRef<GW_ItemSlotBase>::_ctor_copy
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	pop ecx
	ret 0xC

 Block15:
	cmp edi,ebx
	jge Block17

 Block16:
	lea edx,[edi*8]
	sub esi,edx
	add esi,0xF9
	push esi
	mov esi,dword ptr [esp+0x18]
	mov ecx,esi
	call ZRef<GW_ItemSlotBase>::_ctor_copy
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	pop ecx
	ret 0xC

 Block17:
	mov eax,dword ptr [esi+0x505]
	mov esi,dword ptr [esp+0x14]
	lea ecx,[eax+edi*8]
	push ecx
	mov ecx,esi
	call ZRef<GW_ItemSlotBase>::_ctor_copy
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	pop ecx
	ret 0xC

 Block18:
	mov eax,dword ptr [esp+0x14]
	pop edi
	pop esi
	mov dword ptr [eax+4],ebx
	pop ebx
	pop ecx
	ret 0xC

 Block19:
	mov edx,dword ptr [esp+0x18]
	cmp edx,ebx
	jle Block25

 Block20:
	mov eax,dword ptr [esi+ecx*4+0x501]
	cmp eax,ebx
	jne Block22

 Block21:
	xor eax,eax
	jmp Block23

 Block22:
	mov eax,dword ptr [eax-4]

 Block23:
	dec eax
	cmp edx,eax
	jg Block25

 Block24:
	mov eax,dword ptr [esi+ecx*4+0x501]
	mov esi,dword ptr [esp+0x10]
	lea ecx,[eax+edx*8]
	push ecx
	mov ecx,esi
	call ZRef<GW_ItemSlotBase>::_ctor_copy
	mov eax,esi
	pop esi
	pop ebx
	pop ecx
	ret 0xC

 Block25:
	mov eax,dword ptr [esp+0x10]
	pop esi
	mov dword ptr [eax+4],ebx
	pop ebx
	pop ecx
	ret 0xC
}
}
// PARTYDATA::Decode
__SUB_CLASS_THIS(000F2B00, __thiscall, 44414,  PARTYDATA, void, CInPacket&) {
__asm {

 Block0:
	push 0x17A
	push ecx
	mov ecx,dword ptr [esp+0xC]
	call CInPacket::DecodeBuffer
	ret 4
}
}
// PARTYDATA::TOWNPORTAL::Set
__SUB_CLASS_THIS(005CC690, __thiscall, 76481,  PARTYDATA::TOWNPORTAL, void, unsigned long, unsigned long, long, NakedParam<tagPOINT>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	mov dword ptr [ecx],eax
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [ecx+4],edx
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [ecx+8],eax
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [ecx+0xC],edx
	mov dword ptr [ecx+0x10],eax
	ret 0x14
}
}
// MACROSYSDATA::Encode
__SUB_CLASS_THIS(000F9860, __thiscall, 127129,  MACROSYSDATA, void, COutPacket&) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,ecx
	mov eax,dword ptr [ebp]
	push edi
	test eax,eax
	jne Block2

 Block1:
	xor edi,edi
	jmp Block4

 Block2:
	mov edi,dword ptr [eax-4]
	cmp edi,5
	jle Block4

 Block3:
	mov edi,5

 Block4:
	mov ebx,dword ptr [esp+0x10]
	push edi
	mov ecx,ebx
	call COutPacket::Encode1
	test edi,edi
	jle Block8

 Block5:
	push esi
	xor esi,esi

 Block6:
	mov ecx,dword ptr [ebp]
	push ebx
	add ecx,esi
	call SINGLEMACRO::Encode
	add esi,0x1D
	sub edi,1
	jne Block6

 Block7:
	pop esi

 Block8:
	pop edi
	pop ebp
	pop ebx
	ret 4
}
}
// CSimpleStrMap::GetValue
_SUB_EXCEPTION_HANDLER(F9900)
__SUB_CLASS_THIS(000F9900, __thiscall, 114576,  CSimpleStrMap, ZXString<char>*, ZXString<char>*, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F9900
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	xor eax,eax
	mov dword ptr [esp+8],eax
	mov esi,dword ptr [esp+0x1C]
	mov dword ptr [esi],eax
	mov dword ptr [esp+0x14],eax
	mov eax,dword ptr [esp+0x20]
	push esi
	push eax
	mov dword ptr [esp+0x10],1
	call ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::GetAt
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 8
}
}
// CharacterData::GetItemCount
__SUB_CLASS_THIS(00422F70, __thiscall, 85518,  CharacterData, long, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,dword ptr [esp+8]
	lea eax,[ebp-1]
	push edi
	mov edi,ecx
	cmp eax,4
	ja Block15

 Block1:
	mov eax,dword ptr [edi+ebp*4+0x501]
	test eax,eax
	je Block3

 Block2:
	mov eax,dword ptr [eax-4]

 Block3:
	push ebx
	push esi
	lea ebx,[eax-1]
	mov esi,1
	cmp ebx,esi
	jl Block7

 Block4:
	mov ecx,dword ptr [edi+ebp*4+0x501]
	mov eax,dword ptr [ecx+esi*8+4]
	test eax,eax
	je Block6

 Block5:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	cmp eax,dword ptr [esp+0x18]
	je Block13

 Block6:
	inc esi
	cmp esi,ebx
	jle Block4

 Block7:
	cmp ebp,1
	jne Block12

 Block8:
	mov esi,ebp
	add edi,0x2E5
	nop

 Block9:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block11

 Block10:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	cmp eax,dword ptr [esp+0x18]
	je Block14

 Block11:
	inc esi
	add edi,8
	cmp esi,0x3B
	jle Block9

 Block12:
	pop esi
	pop ebx
	pop edi
	xor eax,eax
	pop ebp
	ret 8

 Block13:
	mov eax,esi
	pop esi
	pop ebx
	pop edi
	pop ebp
	ret 8

 Block14:
	mov eax,0xFFFFFF9C
	sub eax,esi
	pop esi
	pop ebx
	pop edi
	pop ebp
	ret 8

 Block15:
	pop edi
	xor eax,eax
	pop ebp
	ret 8
}
}
// _ZtlSecureFuse_unsignedlong_
__SUB(000F1ED0, __cdecl, 144649,  unsigned long, const unsigned long*, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [eax+4]
	mov ecx,dword ptr [eax]
	mov eax,edx
	rol eax,5
	xor eax,ecx
	xor ecx,0xBAADF00D
	ror ecx,5
	add ecx,edx
	cmp ecx,dword ptr [esp+8]
	je Block2

 Block1:
	push offset ZException::THROW_INFO
	lea eax,[esp+8]
	push eax
	mov dword ptr [esp+0xC],5
	call _CxxThrowException

 Block2:
	ret
}
}
// get_equiped_from_item
_SUB_EXCEPTION_HANDLER(F7090)
__SUB(000F7090, __cdecl, 144668,  ZRef<GW_ItemSlotBase>, long, const CharacterData&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F7090
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xFC
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x110]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [esp+0x128]
	movzx edx,byte ptr [ecx+0x11]
	push 1
	lea eax,[esp+0x24]
	push eax
	mov eax,dword ptr [esp+0x12C]
	push edx
	xor ebx,ebx
	push eax
	mov dword ptr [esp+0x24],ebx
	call get_bodypart_from_item
	mov edi,eax
	add esp,0x10
	cmp edi,ebx
	mov dword ptr [esp+0x14],edi
	jle Block9

 Block1:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov ecx,dword ptr [esp+ebx*4+0x20]
	neg ecx
	push ecx
	mov ecx,dword ptr [esp+0x12C]
	push 1
	lea edx,[esp+0x20]
	push edx
	call CharacterData::GetItem
	mov esi,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x118],0
	test esi,esi
	je Block4

 Block3:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	cmp eax,dword ptr [esp+0x124]
	je Block11

 Block4:
	mov dword ptr [esp+0x118],0xFFFFFFFF
	test esi,esi
	je Block8

 Block5:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block7

 Block6:
	push edi
	call ebp
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block7:
	mov edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x1C],0

 Block8:
	inc ebx
	cmp ebx,edi
	jl Block2

 Block9:
	mov eax,dword ptr [esp+0x120]
	mov dword ptr [eax+4],0

 Block10:
	mov ecx,dword ptr [esp+0x110]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x108
	ret

 Block11:
	mov ebx,dword ptr [esp+0x120]
	lea edi,[esi+4]
	push edi
	mov dword ptr [ebx+4],esi
	call ebp
	push edi
	mov dword ptr [esp+0x11C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block12:
	push edi
	call ebp
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block13:
	mov eax,ebx
	jmp Block10
}
}
// CharacterData::GetQuestEx
_SUB_EXCEPTION_HANDLER(FC7E0)
__SUB_CLASS_THIS(000FC7E0, __thiscall, 125094,  CharacterData, ZXString<char>*, ZXString<char>*, uint16_t, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_FC7E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0xC],ebx
	push 0x64
	lea ecx,[esp+0x14]
	int 3// TODO: 	mov dword ptr [esp+0x14],offset ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::`vftable'
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x1C],0x1F
	mov dword ptr [esp+0x20],ebx
	call ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::_CalcAutoGrow
	lea eax,[esp+0x10]
	push eax
	lea ecx,[esp+0x40]
	push ecx
	lea ecx,[esi+0x70D]
	mov dword ptr [esp+0x38],1
	call ZMap<unsigned short, CSimpleStrMap, unsigned short>::GetAt
	mov esi,dword ptr [esp+0x38]
	test eax,eax
	jne Block2

 Block1:
	push ebx
	push offset _S_
	push ebx
	push ebx
	mov ecx,esi
	mov dword ptr [esi],ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	jmp Block3

 Block2:
	mov edx,dword ptr [esp+0x40]
	push edx
	push esi
	lea ecx,[esp+0x18]
	call CSimpleStrMap::GetValue

 Block3:
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0xC],1
	mov byte ptr [esp+0x30],bl
	int 3// TODO: 	mov dword ptr [esp+0x10],offset ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::`vftable'
	call ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::RemoveAll
	mov eax,esi
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x28
	ret 0xC
}
}
// CharacterData::GetItemSlotCount
__SUB_CLASS_THIS(0002A480, __thiscall, 125122,  CharacterData, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov eax,dword ptr [ecx+eax*4+0x501]
	test eax,eax
	jne Block2

 Block1:
	dec eax
	ret 4

 Block2:
	mov eax,dword ptr [eax-4]
	dec eax
	ret 4
}
}
// CharacterData::FindCashItemSlotPosition
__SUB_CLASS_THIS(0007E2C0, __thiscall, 125127,  CharacterData, long, long, _LARGE_INTEGER) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	lea eax,[ebx-1]
	push ebp
	push esi
	cmp eax,4
	ja Block20

 Block1:
	mov esi,dword ptr [esp+0x14]
	mov ebp,dword ptr [esp+0x18]
	mov edx,esi
	or edx,ebp
	je Block20

 Block2:
	mov eax,dword ptr [ecx+ebx*4+0x501]
	test eax,eax
	je Block4

 Block3:
	mov eax,dword ptr [eax-4]

 Block4:
	push edi
	lea edi,[eax-1]
	mov eax,1
	cmp edi,eax
	jl Block11

 Block5:
	mov edx,dword ptr [ecx+ebx*4+0x501]
	add edx,0xC
	lea ebx,[ebx]

 Block6:
	mov esi,dword ptr [edx]
	test esi,esi
	je Block9

 Block7:
	mov ebp,dword ptr [esi+0x18]
	cmp ebp,dword ptr [esp+0x18]
	jne Block9

 Block8:
	mov esi,dword ptr [esi+0x1C]
	cmp esi,dword ptr [esp+0x1C]
	je Block18

 Block9:
	inc eax
	add edx,8
	cmp eax,edi
	jle Block6

 Block10:
	mov esi,dword ptr [esp+0x18]
	mov ebp,dword ptr [esp+0x1C]

 Block11:
	cmp ebx,1
	jne Block17

 Block12:
	mov edx,ebx
	add ecx,0x2E5

 Block13:
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block16

 Block14:
	mov edi,dword ptr [eax+0x18]
	cmp edi,esi
	jne Block16

 Block15:
	mov eax,dword ptr [eax+0x1C]
	cmp eax,ebp
	je Block19

 Block16:
	inc edx
	add ecx,8
	cmp edx,0x3B
	jle Block13

 Block17:
	xor eax,eax

 Block18:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0xC

 Block19:
	pop edi
	pop esi
	mov eax,0xFFFFFF9C
	pop ebp
	sub eax,edx
	pop ebx
	ret 0xC

 Block20:
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	ret 0xC
}
}
// PARTYMEMBER::Decode
__SUB_CLASS_THIS(000F2AE0, __thiscall, 87305,  PARTYMEMBER, void, CInPacket&) {
__asm {

 Block0:
	push 0xB2
	push ecx
	mov ecx,dword ptr [esp+0xC]
	call CInPacket::DecodeBuffer
	ret 4
}
}
// PARTYMEMBER::GetCharacterID
_SUB_EXCEPTION_HANDLER(F8960)
__SUB_CLASS_THIS(000F8960, __thiscall, 87310,  PARTYMEMBER, unsigned long, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F8960
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
	push ecx
	mov ecx,esp
	lea eax,[esp+0x20]
	mov dword ptr [esp+0xC],esp
	push eax
	mov dword ptr [esp+0x1C],0
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call PARTYMEMBER::FindIndex
	or ecx,0xFFFFFFFF
	mov dword ptr [esp+0x14],ecx
	cmp eax,ecx
	jne Block4

 Block1:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	xor eax,eax
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4

 Block4:
	mov esi,dword ptr [esi+eax*4]
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// CharacterData::GetQuestExpireTime
_SUB_EXCEPTION_HANDLER(FB3A0)
__SUB_CLASS_THIS(000FB3A0, __thiscall, 125106,  CharacterData, _FILETIME, uint16_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_FB3A0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0xC],0
	movzx eax,word ptr [esp+0x24]
	lea edx,[esp+0xC]
	mov dword ptr [esp+0x24],eax
	push edx
	lea eax,[esp+0x28]
	push eax
	add ecx,0x6F5
	mov dword ptr [esp+0x20],0
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetAt
	mov edi,dword ptr [esp+0xC]
	test eax,eax
	je Block6

 Block1:
	test edi,edi
	je Block6

 Block2:
	cmp byte ptr [edi],0
	je Block6

 Block3:
	cmp dword ptr [edi-4],0xE
	je Block5

 Block4:
	mov esi,dword ptr [esp+0x20]
	mov ecx,dword ptr [_D_DB_DATE_20790101__35]
	mov edx,dword ptr [_D_DB_DATE_20790101__35+4]
	mov dword ptr [esi],ecx
	mov dword ptr [esi+4],edx
	mov dword ptr [esp+0x18],0xFFFFFFFF
	jmp Block7

 Block5:
	push ecx
	mov ecx,esp
	lea eax,[esp+0x10]
	mov dword ptr [esp+0x28],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call Util::GetFileTimeFromStringDate
	mov esi,dword ptr [esp+0x24]
	add edi,0xFFFFFFF4
	push edi
	mov dword ptr [esi],eax
	mov dword ptr [esi+4],edx
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZXString<char>::_Release
	add esp,8
	jmp Block8

 Block6:
	mov esi,dword ptr [esp+0x20]
	mov ecx,dword ptr [_D_DB_DATE_20790101__35]
	mov edx,dword ptr [_D_DB_DATE_20790101__35+4]
	mov dword ptr [esi],ecx
	mov dword ptr [esi+4],edx
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test edi,edi
	je Block8

 Block7:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 8
}
}
// _ZtlSecureTear_unsignedshort_
__SUB(000F3FC0, __fastcall, 144659,  uint32_t, uint16_t, uint16_t*) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	lea eax,[esp+8]
	push esi
	mov word ptr [esp+0xC],cx
	mov ebx,edx
	lea ebp,[edx+2]
	mov ecx,eax
	push edi
	xor esi,esi
	sub ebx,eax
	mov edi,0xBAADF00D
	sub ebp,ecx

 Block1:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	mov dl,byte ptr [esp+esi+0x10]
	lea ecx,[esp+esi+0x10]
	mov byte ptr [ebx+ecx],al
	movzx eax,al
	xor dl,al
	xor eax,edi
	mov byte ptr [ecx+ebp],dl
	movzx edx,dl
	ror eax,5
	add eax,edx
	inc esi
	mov edi,eax
	cmp esi,2
	jb Block1

 Block2:
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret
}
}
// CharacterData::_GetQuestValue
_SUB_EXCEPTION_HANDLER(FC2D0)
__SUB_CLASS_THIS(000FC2D0, __thiscall, 125108,  CharacterData, CharacterData::SELECTEDMOB*, CharacterData::SELECTEDMOB*, uint16_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_FC2D0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	xor edi,edi
	mov dword ptr [esp+0xC],edi
	movzx eax,word ptr [esp+0x24]
	lea edx,[esp+0xC]
	mov dword ptr [esp+0x24],eax
	push edx
	lea eax,[esp+0x28]
	push eax
	add ecx,0x6F5
	mov dword ptr [esp+0x20],edi
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetAt
	mov esi,dword ptr [esp+0x20]
	mov dword ptr [esi],edi
	mov dword ptr [esi+4],edi
	mov dword ptr [esi+8],edi
	test eax,eax
	je Block2

 Block1:
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,esi
	call CharacterData::SELECTEDMOB::Decode

 Block2:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	cmp eax,edi
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 8
}
}
// CharacterData::SELECTEDMOB::Decode
__SUB_CLASS_THIS(000FB4B0, __thiscall, 125149,  CharacterData::SELECTEDMOB, bool, const ZXString<char>&) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x1C]
	xor eax,eax
	push esi
	xor ebx,ebx
	push edi
	mov dword ptr [esp+0x10],ecx
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x1C],eax
	xor esi,esi

 Block1:
	push ebx
	push 0x2F
	mov ecx,ebp
	call ZXString<char>::Find__1
	cmp esi,2
	mov edi,eax
	jge Block3

 Block2:
	test edi,edi
	jl Block7

 Block3:
	push edi
	push ebx
	lea eax,[esp+0x2C]
	push eax
	mov ecx,ebp
	call ZXString<char>::Substring
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov dword ptr [esp+esi*4+0x18],eax
	mov eax,dword ptr [esp+0x28]
	add esp,4
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	inc esi
	cmp esi,3
	lea ebx,[edi+1]
	jl Block1

 Block6:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x18]
	pop edi
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x18]
	pop esi
	pop ebp
	mov dword ptr [eax+4],edx
	mov dword ptr [eax+8],ecx
	mov al,1
	pop ebx
	add esp,0x10
	ret 4

 Block7:
	pop edi
	pop esi
	pop ebp
	xor al,al
	pop ebx
	add esp,0x10
	ret 4
}
}
// CharacterData::GetEmptySlotCount
__SUB_CLASS_THIS(00100170, __thiscall, 125123,  CharacterData, long, long) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	lea edx,[esi-1]
	xor eax,eax
	cmp edx,4
	ja Block9

 Block1:
	mov edx,dword ptr [ecx+esi*4+0x501]
	test edx,edx
	je Block3

 Block2:
	mov edx,dword ptr [edx-4]

 Block3:
	dec edx
	cmp edx,1
	jl Block10

 Block4:
	mov ecx,dword ptr [ecx+esi*4+0x501]
	add ecx,0xC
	lea ecx,[ecx]

 Block5:
	cmp dword ptr [ecx],0
	jne Block7

 Block6:
	inc eax

 Block7:
	add ecx,8
	sub edx,1
	jne Block5

 Block8:
	pop esi
	ret 4

 Block9:
	xor eax,eax

 Block10:
	pop esi
	ret 4
}
}
// CharacterData::HasWhiteScroll
__SUB_CLASS_THIS0(000FF0F0, __thiscall, 125085,  CharacterData, int32_t) {
__asm {

 Block0:
	push 0x23B4A0
	push 2
	call CharacterData::GetItemCount
	neg eax
	sbb eax,eax
	neg eax
	ret
}
}
// CharacterData::GetQuestExRawStr
_SUB_EXCEPTION_HANDLER(FC370)
__SUB_CLASS_THIS(000FC370, __thiscall, 125095,  CharacterData, ZXString<char>*, ZXString<char>*, uint16_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_FC370
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+8],0
	mov eax,dword ptr [esp+0x30]
	push eax
	lea edx,[esp+0x14]
	push edx
	call CharacterData::_GetQuestValue
	xor eax,eax
	cmp dword ptr [esp+0x14],eax
	lea ecx,[esp+0xC]
	setne al
	add eax,0x7BD
	push eax
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [esp+0x24],1
	mov dword ptr [esp+0x30],0
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x30],2
	call ZXString<char>::Format
	mov esi,dword ptr [esp+0x38]
	add esp,0xC
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+8],1
	mov byte ptr [esp+0x24],1
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,esi
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret 8
}
}
// _ZtlSecureTear_unsignedchar_
__SUB(000F3ED0, __fastcall, 144654,  uint32_t, unsigned char, unsigned char*) {
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
// PARTYMEMBER::FindIndex
_SUB_EXCEPTION_HANDLER(F7720)
__SUB_CLASS_THIS(000F7720, __thiscall, 87306,  PARTYMEMBER, long, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F7720
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0x20],ebx
	xor ebp,ebp
	lea edi,[ecx+0x18]

 Block1:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	cmp edi,ebx
	je Block5

 Block2:
	mov eax,edi
	lea edx,[eax+1]
	nop

 Block3:
	mov cl,byte ptr [eax]
	inc eax
	cmp cl,bl
	jne Block3

 Block4:
	sub eax,edx
	mov esi,eax
	push esi
	push edi
	push ebx
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [esp+0x14]

 Block5:
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::op_eq_0
	mov byte ptr [esp+0x20],bl
	test eax,eax
	jne Block13

 Block6:
	cmp esi,ebx
	je Block8

 Block7:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block8:
	inc ebp
	add edi,0xD
	cmp ebp,6
	jl Block1

 Block9:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	or eax,0xFFFFFFFF

 Block12:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 4

 Block13:
	cmp esi,ebx
	je Block15

 Block14:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov eax,ebp
	jmp Block12
}
}
// CSimpleStrMap::InitFromRawString
_SUB_EXCEPTION_HANDLER(FC580)
__SUB_CLASS_THIS(000FC580, __thiscall, 114578,  CSimpleStrMap, int32_t, const char*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_FC580
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
	mov ebp,ecx
	call ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::RemoveAll
	mov edx,dword ptr [esp+0x38]
	xor ebx,ebx
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	cmp edx,ebx
	je Block4

 Block1:
	mov eax,edx
	lea esi,[eax+1]

 Block2:
	mov cl,byte ptr [eax]
	inc eax
	cmp cl,bl
	jne Block2

 Block3:
	sub eax,esi
	mov esi,eax
	push esi
	push edx
	push ebx
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	mov edi,dword ptr [esp+0x14]

 Block4:
	mov dword ptr [esp+0x30],ebx
	jmp Block8

 Block7:
	mov edi,dword ptr [esp+0x14]

 Block8:
	cmp edi,ebx
	je Block28

 Block9:
	cmp dword ptr [edi-4],ebx
	je Block28

 Block10:
	push ebx
	push ebx
	push offset _S___48
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__0
	mov esi,eax
	cmp esi,ebx
	jl Block28

 Block11:
	push esi
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::Left
	push 0xFFFFFFFF
	inc esi
	push esi
	lea ecx,[esp+0x24]
	push ecx
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x3C],1
	call ZXString<char>::Mid
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x34],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x30],1
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov dword ptr [esp+0x38],ebx
	push ebx
	push ebx
	push offset _S___37
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x3C],3
	call ZXString<char>::Find__0
	mov esi,eax
	cmp esi,ebx
	lea ecx,[esp+0x14]
	jl Block18

 Block14:
	push esi
	lea edx,[esp+0x24]
	push edx
	call ZXString<char>::Left
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x34],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x30],3
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	push 0xFFFFFFFF
	inc esi
	push esi
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::Mid
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x34],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x30],3
	cmp eax,ebx
	je Block19

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block19

 Block18:
	push ecx
	lea ecx,[esp+0x3C]
	call ZXString<char>::op_assign
	push ebx
	push offset _S_
	push ebx
	push ebx
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer

 Block19:
	mov eax,dword ptr [esp+0x18]
	mov esi,dword ptr [esp+0x38]
	cmp eax,ebx
	je Block24

 Block20:
	cmp byte ptr [eax],bl
	je Block24

 Block21:
	cmp esi,ebx
	je Block24

 Block22:
	cmp byte ptr [esi],bl
	je Block24

 Block23:
	push ebx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebp
	call ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::Insert
	lea ecx,[esp+0x38]
	push ecx
	lea ecx,[eax+0xC]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]

 Block24:
	mov byte ptr [esp+0x30],1
	cmp esi,ebx
	je Block26

 Block25:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	mov eax,dword ptr [esp+0x1C]
	add esp,4

 Block26:
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block7

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block7

 Block28:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp edi,ebx
	je Block30

 Block29:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block30:
	mov eax,1
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 4
}
}
// MACROSYSDATA::Decode
__SUB_CLASS_THIS(000F98B0, __thiscall, 127130,  MACROSYSDATA, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0xC]
	mov ebx,ecx
	push edi
	mov ecx,ebp
	call CInPacket::Decode1
	movzx edi,al
	cmp edi,5
	jle Block2

 Block1:
	mov edi,5

 Block2:
	lea eax,[esp+0x10]
	push eax
	push 1
	push edi
	mov ecx,ebx
	call ZArray<SINGLEMACRO>::_Realloc
	test edi,edi
	jle Block6

 Block3:
	push esi
	xor esi,esi

 Block4:
	mov ecx,dword ptr [ebx]
	push ebp
	add ecx,esi
	call SINGLEMACRO::Decode
	add esi,0x1D
	sub edi,1
	jne Block4

 Block5:
	pop esi

 Block6:
	pop edi
	pop ebp
	pop ebx
	ret 4
}
}
// _anon_IsExist_
__SUB(000F2B80, __cdecl, 144653,  int32_t, ZArray<_LARGE_INTEGER>&, _LARGE_INTEGER&) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov ecx,edi
	xor esi,esi
	call ZArray<_LARGE_INTEGER>::GetCount
	test eax,eax
	jbe Block5

 Block1:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [ecx]
	mov ebx,dword ptr [ecx+4]
	mov ecx,dword ptr [edi]
	nop

 Block2:
	cmp edx,dword ptr [ecx]
	jne Block4

 Block3:
	cmp ebx,dword ptr [ecx+4]
	je Block6

 Block4:
	inc esi
	add ecx,8
	cmp esi,eax
	jb Block2

 Block5:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret

 Block6:
	pop edi
	pop esi
	mov eax,1
	pop ebx
	ret
}
}
// CashItemEntry::Set
_SUB_EXCEPTION_HANDLER(F5810)
__SUB_CLASS_THIS(000F5810, __thiscall, 144533,  CashItemEntry, void, NakedParam<ZRef<GW_ItemSlotBase>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F5810
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea eax,[esp+0x18]
	push eax
	mov dword ptr [esp+0x14],0
	call ZRef<GW_ItemSlotBase>::op_assign_copy
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [esi+8],ecx
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block4

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov edx,dword ptr [esp+0x1C]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x1C]
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 0xC
}
}
// _ZtlSecureTear_short_
__SUB(000F3F30, __fastcall, 144656,  uint32_t, short, short*) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	lea eax,[esp+8]
	push esi
	mov word ptr [esp+0xC],cx
	mov ebx,edx
	lea ebp,[edx+2]
	mov ecx,eax
	push edi
	xor esi,esi
	sub ebx,eax
	mov edi,0xBAADF00D
	sub ebp,ecx

 Block1:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	mov dl,byte ptr [esp+esi+0x10]
	lea ecx,[esp+esi+0x10]
	mov byte ptr [ebx+ecx],al
	movzx eax,al
	xor dl,al
	xor eax,edi
	mov byte ptr [ecx+ebp],dl
	movzx edx,dl
	ror eax,5
	add eax,edx
	inc esi
	mov edi,eax
	cmp esi,2
	jb Block1

 Block2:
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret
}
}
// _ZtlSecureFuse_unsignedshort_
__SUB(000F1F10, __cdecl, 144651,  uint16_t, const uint16_t*, uint32_t) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	push esi
	push edi
	mov edi,dword ptr [esp+0x18]
	lea ecx,[edi+2]
	lea ebp,[esp+0x18]
	sub edi,ecx
	mov esi,0xBAADF00D
	sub ebp,ecx
	mov dword ptr [esp+0x10],2

 Block1:
	movzx edx,byte ptr [ecx]
	movzx eax,byte ptr [edi+ecx]
	mov bl,dl
	xor bl,al
	xor eax,esi
	ror eax,5
	mov byte ptr [ecx+ebp],bl
	add eax,edx
	inc ecx
	sub dword ptr [esp+0x10],1
	mov esi,eax
	jne Block1

 Block2:
	cmp esi,dword ptr [esp+0x1C]
	pop edi
	pop esi
	pop ebp
	pop ebx
	je Block4

 Block3:
	push offset ZException::THROW_INFO
	lea eax,[esp+0xC]
	push eax
	mov dword ptr [esp+0x10],5
	call _CxxThrowException

 Block4:
	mov ax,word ptr [esp+8]
	pop ecx
	ret
}
}
// CharacterData::IsEquipSlotExpired
__SUB_CLASS_THIS(0007CE20, __thiscall, 125130,  CharacterData, int32_t, long, const _FILETIME&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	lea edx,[eax-0x3B]
	test edx,edx
	ja Block3

 Block1:
	mov edx,dword ptr [esp+8]
	push edx
	lea eax,[ecx+eax*8+0x341]
	push eax
	call dword ptr [ZImports::_CompareFileTime]
	test eax,eax
	jge Block3

 Block2:
	mov eax,1
	ret 8

 Block3:
	xor eax,eax
	ret 8
}
}
// CharacterData::SetQuest
__SUB_CLASS_THIS(000FB380, __thiscall, 125097,  CharacterData, ZXString<char>*, uint16_t, const ZXString<char>&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push eax
	lea edx,[esp+8]
	push edx
	add ecx,0x6F5
	call ZMap<unsigned short, ZXString<char>, unsigned short>::Insert
	add eax,0xC
	ret 8
}
}
// PARTYMEMBER::IsFull
__SUB_CLASS_THIS0(000F1C30, __thiscall, 87313,  PARTYMEMBER, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xAE]
	or edx,0xFFFFFFFF
	cmp dword ptr [ecx],eax
	jne Block2

 Block1:
	xor edx,edx

 Block2:
	cmp dword ptr [ecx+4],eax
	jne Block4

 Block3:
	mov edx,1

 Block4:
	cmp dword ptr [ecx+8],eax
	jne Block6

 Block5:
	mov edx,2

 Block6:
	cmp dword ptr [ecx+0xC],eax
	jne Block8

 Block7:
	mov edx,3

 Block8:
	cmp dword ptr [ecx+0x10],eax
	jne Block10

 Block9:
	mov edx,4

 Block10:
	cmp dword ptr [ecx+0x14],eax
	jne Block12

 Block11:
	xor eax,eax
	mov edx,5
	cmp dword ptr [ecx+edx*4+0x96],eax
	setge al
	ret

 Block12:
	test edx,edx
	jl Block15

 Block13:
	cmp edx,6
	jge Block15

 Block14:
	xor eax,eax
	cmp dword ptr [ecx+edx*4+0x96],eax
	setge al
	ret

 Block15:
	xor eax,eax
	ret
}
}

// EQUIPPED_SETITEM::~EQUIPPED_SETITEM
__SUB_CLASS_THIS0(0032CC70, __thiscall, 76639, EQUIPPED_SETITEM, void) {
__asm {

 Block0:
	add ecx,8
	jmp  ZArray<long>::RemoveAll
}
}

// EQUIPPED_SETITEM::EQUIPPED_SETITEM
__SUB_CLASS_THIS0(0032CC80, __thiscall, 76637, EQUIPPED_SETITEM, void) {
__asm {

 Block0:
	mov eax,ecx
	xor ecx,ecx
	mov dword ptr [eax+8],ecx
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],ecx
	ret
}
}
