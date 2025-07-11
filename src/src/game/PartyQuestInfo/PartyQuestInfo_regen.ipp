#include "regen.hpp"
// PartyQuestInfo.ipp
#include "PartyQuestInfo.hpp"

// CPartyQuestInfoManager::GetByName
_SUB_EXCEPTION_HANDLER(296310)
__SUB_CLASS_THIS(00296310, __thiscall, 77282,  CPartyQuestInfoManager, const ZRef<PartyQuestInfo>, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_296310
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x2C],1
	call ZMap<long, ZRef<PartyQuestInfo>, long>::GetHeadPosition
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block8

 Block1:
	mov dword ptr [esp+0x20],ebx
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x34],2
	call ZMap<long, ZRef<PartyQuestInfo>, long>::GetNext
	mov esi,dword ptr [esp+0x20]
	lea edx,[esp+0x38]
	push edx
	lea ecx,[esi+4]
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block12

 Block2:
	mov byte ptr [esp+0x2C],1
	cmp esi,ebx
	je Block7

 Block3:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block6

 Block5:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block6:
	mov dword ptr [esp+0x20],ebx

 Block7:
	cmp dword ptr [esp+0x14],ebx
	jne Block1

 Block8:
	mov eax,dword ptr [esp+0x38]
	mov esi,dword ptr [esp+0x34]
	mov dword ptr [esi+4],ebx
	mov dword ptr [esp+0x18],1
	mov byte ptr [esp+0x2C],bl
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov eax,esi

 Block11:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 8

 Block12:
	mov ebp,dword ptr [esp+0x34]
	mov dword ptr [ebp+4],esi
	cmp esi,ebx
	je Block14

 Block13:
	lea eax,[esi-0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov dword ptr [esp+0x18],1
	mov byte ptr [esp+0x2C],1
	cmp esi,ebx
	je Block18

 Block15:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block18

 Block16:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block18

 Block17:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block18:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x2C],bl
	cmp eax,ebx
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov eax,ebp
	jmp Block11
}
}
// CPartyQuestInfoManager::IsPartyQuestID
__SUB(00295C00, __cdecl, 77287,  int32_t, long) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x3E8
	xor ecx,ecx
	cmp eax,0x3E8
	sete cl
	mov eax,ecx
	ret
}
}
// PartyQuestInfo::~PartyQuestInfo
_SUB_EXCEPTION_HANDLER(296540)
__SUB_CLASS_THIS0(00296540, __thiscall, 78273,  PartyQuestInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_296540
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
	lea ecx,[esi+0x24]
	mov dword ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZXString<char>>::`vftable'
	call ZList<ZXString<char>>::RemoveAll
	mov eax,dword ptr [esi+8]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [esi+4]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block4

 Block3:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CPartyQuestInfoManager::Get
_SUB_EXCEPTION_HANDLER(296670)
__SUB_CLASS_THIS(00296670, __thiscall, 77281,  CPartyQuestInfoManager, const ZRef<PartyQuestInfo>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_296670
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	push ebx
	lea eax,[esp+0x34]
	push eax
	mov dword ptr [esp+0x1C],ebx
	call ZMap<long, ZRef<PartyQuestInfo>, long>::GetAt
	test eax,eax
	je Block2

 Block1:
	mov esi,dword ptr [esp+0x18]
	jmp Block3

 Block2:
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	lea eax,[esp+0x14]
	lea ebx,[esi+1]

 Block3:
	mov eax,dword ptr [eax+4]
	mov ebp,dword ptr [esp+0x2C]
	mov dword ptr [ebp+4],eax
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	or ebx,2
	mov dword ptr [esp+0x24],0
	test bl,1
	je Block10

 Block6:
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x14],ebx
	test esi,esi
	je Block10

 Block7:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block8:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block10

 Block9:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block10:
	mov eax,ebp
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 8
}
}
// CPartyQuestInfoManager::Load
__SUB_CLASS_THIS0(00297880, __thiscall, 77277,  CPartyQuestInfoManager, int32_t) {
__asm {

 Block0:
	push ecx
	push ebx
	push esi
	push edi
	push 0x3E8
	mov esi,ecx
	lea ebx,[esi+0x18]
	push ebx
	push esi
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1C
	push offset _S_QUESTPQUESTSEARC__1
	push 0
	push 0x1C
	mov ecx,edi
	mov dword ptr [edi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x1C
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer
	call LoadData
	add esp,0x10
	test eax,eax
	jne Block2

 Block1:
	pop edi
	pop esi
	pop ebx
	pop ecx
	ret

 Block2:
	push 0x7D0
	push ebx
	push esi
	push ecx
	mov esi,esp
	mov dword ptr [esp+0x1C],esp
	push 0x21
	push offset _S_QUESTPQUESTSEARC
	push 0
	push 0x21
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x21
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	call LoadData
	add esp,0x10
	xor ecx,ecx
	test eax,eax
	setne cl
	pop edi
	pop esi
	pop ebx
	mov eax,ecx
	pop ecx
	ret
}
}
// PartyQuestInfo::IsPartyQuest
__SUB_CLASS_THIS0(00295C60, __thiscall, 78265,  PartyQuestInfo, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx]
	push eax
	call CPartyQuestInfoManager::IsPartyQuestID
	add esp,4
	ret
}
}
// PartyQuestInfo::IsExpeditionQuest
__SUB_CLASS_THIS0(00295C70, __thiscall, 78265,  PartyQuestInfo, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx]
	push eax
	call CPartyQuestInfoManager::IsExpeditionQuestID
	add esp,4
	ret
}
}
// CPartyQuestInfoManager::IsExpeditionQuestID
__SUB(00295C30, __cdecl, 77287,  int32_t, long) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	imul eax,0x3E8
	xor ecx,ecx
	cmp eax,0x7D0
	sete cl
	mov eax,ecx
	ret
}
}
// CPartyQuestInfoManager::CPartyQuestInfoManager
__SUB_CLASS_THIS0(005C4050, __thiscall, 77292,  CPartyQuestInfoManager, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push edi
	mov dword ptr [TSingleton<CPartyQuestInfoManager>::ms_pInstance],esi
	xor edi,edi
	push 0x64
	int 3// TODO: 	mov dword ptr [esi],offset ZMap<long, ZRef<PartyQuestInfo>, long>::`vftable'
	mov dword ptr [esi+4],edi
	mov dword ptr [esi+8],0x1F
	mov dword ptr [esi+0xC],edi
	call ZMap<long, ZRef<PartyQuestInfo>, long>::_CalcAutoGrow
	mov dword ptr [esi+0x20],edi
	mov dword ptr [esi+0x24],edi
	mov dword ptr [esi+0x28],edi
	pop edi
	int 3// TODO: 	mov dword ptr [esi+0x18],offset ZList<ZRef<PartyQuestInfo>>::`vftable'
	mov eax,esi
	pop esi
	ret
}
}
// LoadData
_SUB_EXCEPTION_HANDLER(2972A0)
__SUB(002972A0, __cdecl, 134184,  int32_t, NakedParam<ZXString<char>>, ZMap<long,ZRef<PartyQuestInfo>,long>&, ZList<ZRef<PartyQuestInfo> >&, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2972A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x80
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x94]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x64]
	xor edi,edi
	push eax
	mov dword ptr [esp+0xA0],edi
	call esi
	lea ecx,[esp+0x64]
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
	lea edx,[esp+0x54]
	push edx
	mov byte ptr [esp+0xA0],1
	call esi
	lea eax,[esp+0x54]
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
	mov eax,dword ptr [esp+0xA4]
	push edi
	push edi
	lea ecx,[esp+0x6C]
	push ecx
	lea edx,[esp+0x60]
	push edx
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	mov bl,2
	push eax
	mov byte ptr [esp+0xB4],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xB0],3
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x88]
	push ecx
	mov byte ptr [esp+0xB4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],edi
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
	mov byte ptr [esp+0x9C],6
	cmp word ptr [esp+0x74],bx
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x7C]
	xor edx,edx
	mov word ptr [esp+0x74],dx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x74]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0x9C],7
	cmp word ptr [esp+0x54],bx
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [esp+0x9C],8
	cmp word ptr [esp+0x64],bx
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov ebp,dword ptr [esp+0x14]
	cmp ebp,edi
	sete al
	test al,al
	je Block27

 Block22:
	mov byte ptr [esp+0x9C],0
	cmp ebp,edi
	je Block24

 Block23:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block24:
	mov eax,dword ptr [esp+0xA4]
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	cmp eax,edi
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	xor eax,eax
	jmp Block79

 Block27:
	cmp ebp,edi
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,ebp
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xA0],9
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block31

 Block30:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block31:
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block34

 Block32:
	cmp eax,0x80004002
	je Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x9C],0xB
	cmp eax,edi
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	lea eax,[esp+0x44]
	push eax
	call esi
	mov byte ptr [esp+0x9C],0xC
	mov dword ptr [esp+0x28],edi
	jmp Block40

 Block39:
	mov ebp,dword ptr [esp+0x14]
	xor edi,edi

 Block40:
	mov esi,dword ptr [esp+0x18]
	cmp esi,edi
	je Block5

 Block41:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x48]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block72

 Block42:
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x20]
	push eax
	call DetachBSTR
	add esp,8
	mov ecx,eax
	mov byte ptr [esp+0x9C],0xD
	call _xbstr_t::GetBSTR
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],edi
	call ZXString<char>::AssignWideStr
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x9C],0xF
	cmp eax,edi
	je Block51

 Block43:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,edi
	jne Block50

 Block44:
	cmp esi,edi
	je Block50

 Block45:
	mov eax,dword ptr [esi]
	cmp eax,edi
	je Block47

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block47:
	mov eax,dword ptr [esi+4]
	cmp eax,edi
	je Block49

 Block48:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block49:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block50:
	mov dword ptr [esp+0x1C],edi

 Block51:
	mov ebx,dword ptr [esp+0x20]
	push ebx
	call _atoi
	add esp,4
	push 0
	push 0
	push ecx
	mov edi,eax
	add edi,dword ptr [esp+0xBC]
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push ebx
	mov dword ptr [esp+0x44],edi
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0x90]
	push ecx
	mov byte ptr [esp+0xAC],0x10
	mov ecx,ebp
	mov byte ptr [esp+0xAC],0xF
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xA4],0x11
	call Ztl_variant_t::GetUnknown
	xor ebp,ebp
	mov dword ptr [esp+0x30],ebp
	test eax,eax
	je Block54

 Block52:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x2C]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x2C]
	mov ebp,ecx
	mov dword ptr [esp+0x30],ebp
	test eax,eax
	jge Block54

 Block53:
	cmp eax,0x80004002
	jne Block1

 Block54:
	cmp word ptr [esp+0x84],8
	mov byte ptr [esp+0x9C],0x13
	jne Block57

 Block55:
	mov eax,dword ptr [esp+0x8C]
	xor edx,edx
	mov word ptr [esp+0x84],dx
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea eax,[esp+0x84]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block58:
	push 0
	call ZRefCounted_AllocHelper<ZRefCountedDummy<PartyQuestInfo>>::call
	lea esi,[eax+0x10]
	mov dword ptr [eax+4],1
	mov dword ptr [esp+0x44],esi
	mov eax,esp
	mov byte ptr [esp+0xA0],0x14
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [eax],ebp
	test ebp,ebp
	je Block60

 Block59:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+4]
	push ebp
	call edx

 Block60:
	mov ecx,esi
	call PartyQuestInfo::LoadData
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,dword ptr [esp+0xB0]
	mov dword ptr [esi],edi
	call ZMap<long, ZRef<PartyQuestInfo>, long>::Insert
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],esi
	add esi,0xFFFFFFF0
	lea edx,[esi+4]
	mov dword ptr [esp+0x40],esp
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esp+0xB4]
	push eax
	call AddToListByMinLevel
	add esp,0xC
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0xA0],0x13
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block63

 Block61:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block63

 Block62:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block63:
	mov dword ptr [esp+0x40],0
	mov byte ptr [esp+0x9C],0xF
	test ebp,ebp
	je Block65

 Block64:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block65:
	mov byte ptr [esp+0x9C],0xC
	test ebx,ebx
	je Block67

 Block66:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block67:
	cmp word ptr [esp+0x44],8
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block39

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block70:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jl Block1

 Block71:
	jmp Block39

 Block72:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x9C],0xB
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	cmp eax,edi
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0xA0],8
	call edx
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0xA0],0
	call ecx
	mov eax,dword ptr [esp+0xA4]
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	cmp eax,edi
	je Block78

 Block77:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block78:
	mov eax,1

 Block79:
	mov ecx,dword ptr [esp+0x94]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x8C
	ret
}
}
// AddToListByMinLevel
_SUB_EXCEPTION_HANDLER(296980)
__SUB(00296980, __cdecl, 134182,  void, ZList<ZRef<PartyQuestInfo> >&, NakedParam<ZRef<PartyQuestInfo>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_296980
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
	mov ecx,dword ptr [esp+0x30]
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebx
	cmp dword ptr [ecx+8],ebx
	jne Block5

 Block1:
	call ZList<ZRef<PartyQuestInfo>>::AddTail_
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,eax
	call ZRef<PartyQuestInfo>::op_assign_copy
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebx
	je Block17

 Block2:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block17

 Block3:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block17

 Block4:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret

 Block5:
	mov eax,dword ptr [ecx+0xC]
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block15

 Block6:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov edi,edi

 Block7:
	lea ecx,[esp+0x14]
	push ecx
	mov edi,eax
	call ZList<ZRef<PartyQuestInfo>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x1C],esi
	cmp esi,ebx
	je Block9

 Block8:
	lea edx,[esi-0xC]
	push edx
	call ebp

 Block9:
	mov eax,dword ptr [esi+0xC]
	mov ecx,dword ptr [esp+0x38]
	cmp eax,dword ptr [ecx+0xC]
	mov byte ptr [esp+0x28],1
	jg Block18

 Block10:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x2C],bl
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	push edi
	call ebp
	cmp esi,ebx
	je Block13

 Block12:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block13:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x1C],ebx
	cmp eax,ebx
	jne Block7

 Block14:
	mov ecx,dword ptr [esp+0x30]

 Block15:
	call ZList<ZRef<PartyQuestInfo>>::AddTail_
	lea edx,[esp+0x34]
	push edx
	mov ecx,eax
	call ZRef<PartyQuestInfo>::op_assign_copy

 Block16:
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZRef<PartyQuestInfo>::~ZRef<PartyQuestInfo>

 Block17:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret

 Block18:
	mov ecx,dword ptr [esp+0x30]
	push edi
	call ZList<ZRef<PartyQuestInfo>>::InsertBefore
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,eax
	call ZRef<PartyQuestInfo>::op_assign_copy
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x28],bl
	call ZRef<PartyQuestInfo>::~ZRef<PartyQuestInfo>
	jmp Block16
}
}
// PartyQuestInfo::LoadData
_SUB_EXCEPTION_HANDLER(296B00)
__SUB_CLASS_THIS(00296B00, __thiscall, 78262,  PartyQuestInfo, void, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_296B00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x64]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x30],edi
	xor ebx,ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push offset _S_LEVELMIN
	mov dword ptr [esp+0x78],ebx
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x74],1
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0x78],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x74],2
	call get_int32
	mov esi,8
	add esp,8
	mov dword ptr [edi+0xC],eax
	mov byte ptr [esp+0x6C],bl
	cmp word ptr [esp+0x44],si
	jne Block8

 Block3:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,ebx
	je Block5

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block5:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block6:
	push ebx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push offset _S_LEVELMAX
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x74],3
	cmp ecx,ebx
	jne Block9

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x44]
	push edx
	call ebp
	jmp Block6

 Block9:
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0x78],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x74],4
	call get_int32
	add esp,8
	mov dword ptr [edi+0x10],eax
	mov byte ptr [esp+0x6C],bl
	cmp word ptr [esp+0x44],si
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,ebx
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x44]
	push edx
	call ebp

 Block13:
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push offset _S_NAME
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x78]
	mov byte ptr [esp+0x70],5
	cmp ecx,ebx
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea eax,[esp+0x48]
	push eax
	mov byte ptr [esp+0x74],bl
	call IWzProperty::Getitem
	mov byte ptr [esp+0x6C],6
	cmp word ptr [eax],si
	jne Block17

 Block16:
	mov eax,dword ptr [eax+8]
	jmp Block18

 Block17:
	mov eax,offset _S___3

 Block18:
	push 0xFFFFFFFF
	lea ecx,[edi+4]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x6C],bl
	cmp word ptr [esp+0x44],si
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,ebx
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[esp+0x44]
	push edx
	call ebp

 Block22:
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push offset _S_MARK
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x78]
	mov byte ptr [esp+0x70],7
	cmp ecx,ebx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea eax,[esp+0x48]
	push eax
	mov byte ptr [esp+0x74],bl
	call IWzProperty::Getitem
	mov byte ptr [esp+0x6C],8
	cmp word ptr [eax],si
	jne Block26

 Block25:
	mov eax,dword ptr [eax+8]
	jmp Block27

 Block26:
	mov eax,offset _S___3

 Block27:
	push 0xFFFFFFFF
	lea ecx,[edi+8]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x6C],bl
	cmp word ptr [esp+0x44],si
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,ebx
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x44]
	push edx
	call ebp

 Block31:
	push ebx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push offset _S_COUNT__1
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x74],9
	cmp ecx,ebx
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0x78],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x74],0xA
	call get_int32
	add esp,8
	mov dword ptr [edi+0x14],eax
	mov byte ptr [esp+0x6C],bl
	cmp word ptr [esp+0x44],si
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,ebx
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea edx,[esp+0x44]
	push edx
	call ebp

 Block37:
	push ebx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push offset _S_PRICE
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x74],0xB
	cmp ecx,ebx
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0x78],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x74],0xC
	call get_int32
	add esp,8
	mov dword ptr [edi+0x18],eax
	mov byte ptr [esp+0x6C],bl
	cmp word ptr [esp+0x44],si
	jne Block42

 Block40:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,ebx
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea edx,[esp+0x44]
	push edx
	call ebp

 Block43:
	push 5
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push offset _S_PERIODMIN
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x74],0xD
	cmp ecx,ebx
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0x78],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x74],0xE
	call get_int32
	add esp,8
	mov dword ptr [edi+0x1C],eax
	mov byte ptr [esp+0x6C],bl
	cmp word ptr [esp+0x44],si
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,ebx
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea edx,[esp+0x44]
	push edx
	call ebp

 Block49:
	push ebx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push offset _S_USERCOUNT
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x74],0xF
	cmp ecx,ebx
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0x78],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x74],0x10
	call get_int32
	add esp,8
	mov dword ptr [edi+0x20],eax
	mov byte ptr [esp+0x6C],bl
	cmp word ptr [esp+0x44],si
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,ebx
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea edx,[esp+0x44]
	push edx
	call ebp

 Block55:
	push ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push offset _S_TITLE
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x80]
	mov byte ptr [esp+0x78],0x11
	cmp ecx,ebx
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	lea eax,[esp+0x50]
	push eax
	mov byte ptr [esp+0x7C],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x74],0x12
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block60

 Block58:
	cmp eax,0x80004002
	je Block60

 Block59:
	push eax
	call _com_issue_error

 Block60:
	mov byte ptr [esp+0x6C],0x14
	cmp word ptr [esp+0x44],si
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,ebx
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea edx,[esp+0x44]
	push edx
	call ebp

 Block64:
	mov edi,dword ptr [esp+0x18]
	cmp edi,ebx
	sete al
	cmp al,bl
	je Block69

 Block65:
	mov byte ptr [esp+0x6C],bl
	cmp edi,ebx
	je Block67

 Block66:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block67:
	mov eax,dword ptr [esp+0x74]
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp eax,ebx
	je Block114

 Block68:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block114

 Block69:
	cmp edi,ebx
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x70],0x15
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block73

 Block72:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block73:
	lea ecx,[esp+0x20]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block76

 Block74:
	cmp eax,0x80004002
	je Block76

 Block75:
	push eax
	call _com_issue_error

 Block76:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x6C],0x17
	cmp eax,ebx
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block78:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov ebp,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x6C],0x18
	mov dword ptr [esp+0x2C],ebx
	jmp Block81

 Block80:
	mov esi,8

 Block81:
	cmp ebp,ebx
	je Block1

 Block82:
	mov ecx,dword ptr [ebp]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x38]
	push eax
	push 1
	push ebp
	call ecx
	test eax,eax
	jne Block108

 Block83:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x24]
	push eax
	call DetachBSTR
	add esp,8
	mov ecx,eax
	mov byte ptr [esp+0x6C],0x19
	call _xbstr_t::GetBSTR
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],ebx
	call ZXString<char>::AssignWideStr
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x6C],0x1B
	cmp eax,ebx
	je Block92

 Block84:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebx
	jne Block91

 Block85:
	cmp esi,ebx
	je Block91

 Block86:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block88

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block88:
	mov eax,dword ptr [esi+4]
	cmp eax,ebx
	je Block90

 Block89:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block90:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block91:
	mov dword ptr [esp+0x20],ebx

 Block92:
	mov esi,dword ptr [esp+0x24]
	push ecx
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0x58]
	push ecx
	mov byte ptr [esp+0x74],0x1C
	mov ecx,edi
	mov byte ptr [esp+0x74],0x1B
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [esp+0x6C],0x1D
	jne Block94

 Block93:
	mov eax,dword ptr [eax+8]
	jmp Block95

 Block94:
	mov eax,offset _S___3

 Block95:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::AssignWideStr
	mov ecx,dword ptr [esp+0x30]
	add ecx,0x24
	mov byte ptr [esp+0x6C],0x1E
	call ZList<ZXString<char>>::AddTail_
	lea edx,[esp+0x14]
	push edx
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x6C],0x1D
	cmp eax,ebx
	je Block97

 Block96:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block97:
	cmp word ptr [esp+0x54],8
	mov byte ptr [esp+0x6C],0x1B
	jne Block100

 Block98:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebx
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block101:
	mov byte ptr [esp+0x6C],0x18
	cmp esi,ebx
	je Block103

 Block102:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block103:
	cmp word ptr [esp+0x34],8
	jne Block106

 Block104:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	cmp eax,ebx
	je Block80

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block106:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]
	cmp eax,ebx
	jl Block59

 Block107:
	jmp Block80

 Block108:
	mov byte ptr [esp+0x6C],0x17
	cmp word ptr [esp+0x34],si
	jne Block111

 Block109:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,ebx
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block112:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0x70],0x14
	call ecx
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0x70],bl
	call eax
	mov eax,dword ptr [esp+0x74]
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	cmp eax,ebx
	je Block114

 Block113:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block114:
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret 4
}
}
