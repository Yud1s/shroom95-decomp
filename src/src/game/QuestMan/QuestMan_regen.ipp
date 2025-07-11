#include "regen.hpp"
// QuestMan.ipp
#include "QuestMan.hpp"

static void *ZMAP_US_LONG_VTABLE = get_vtable<ZMap<unsigned short, long, unsigned short>>();

// CQuestMan::IsFieldOnAutoStartQuest
__SUB_CLASS_THIS(002B57D0, __thiscall, 57115,  CQuestMan, int32_t, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+8]
	lea edx,[esp]
	mov dword ptr [esp+8],eax
	push edx
	lea eax,[esp+0xC]
	push eax
	add ecx,0x278
	call ZMap<unsigned long, int, unsigned long>::GetAt
	neg eax
	sbb eax,eax
	neg eax
	pop ecx
	ret 4
}
}
// GradeEntity::~GradeEntity
_SUB_EXCEPTION_HANDLER(2B8520)
__SUB_CLASS_THIS0(002B8520, __thiscall, 58371,  GradeEntity, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2B8520
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
	lea ecx,[esi+0x34]
	mov dword ptr [esp+0x14],2
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::`vftable'
	call ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::RemoveAll
	lea ecx,[esi+0x1C]
	mov byte ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, long, ZXString<char>>::`vftable'
	call ZMap<ZXString<char>, long, ZXString<char>>::RemoveAll
	lea ecx,[esi+4]
	mov byte ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, long, ZXString<char>>::`vftable'
	call ZMap<ZXString<char>, long, ZXString<char>>::RemoveAll
	mov esi,dword ptr [esi]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block2

 Block1:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// GradeEntity::GradeEntity
_SUB_EXCEPTION_HANDLER(2BFD90)
__SUB_CLASS_THIS(002BFD90, __thiscall, 58368,  GradeEntity, void, const GradeEntity&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2BFD90
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
	mov edi,ecx
	mov dword ptr [esp+0x14],edi
	mov ebp,dword ptr [esp+0x28]
	xor ebx,ebx
	push ebp
	mov dword ptr [edi],ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [edi+0x14]
	lea esi,[edi+4]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x24],ebx
	int 3// TODO: 	mov dword ptr [esi],offset ZMap<ZXString<char>, long, ZXString<char>>::`vftable'
	mov dword ptr [esi+4],ebx
	mov dword ptr [esi+8],ebx
	mov dword ptr [esi+0xC],ebx
	call ZMap<ZXString<char>, long, ZXString<char>>::_CalcAutoGrow
	lea ecx,[ebp+4]
	push ecx
	mov ecx,esi
	call ZMap<ZXString<char>, long, ZXString<char>>::operator=
	mov edx,dword ptr [edi+0x2C]
	lea esi,[edi+0x1C]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x24],1
	int 3// TODO: 	mov dword ptr [esi],offset ZMap<ZXString<char>, long, ZXString<char>>::`vftable'
	mov dword ptr [esi+4],ebx
	mov dword ptr [esi+8],ebx
	mov dword ptr [esi+0xC],ebx
	call ZMap<ZXString<char>, long, ZXString<char>>::_CalcAutoGrow
	lea eax,[ebp+0x1C]
	push eax
	mov ecx,esi
	call ZMap<ZXString<char>, long, ZXString<char>>::operator=
	mov ecx,dword ptr [edi+0x44]
	lea esi,[edi+0x34]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x24],2
	int 3// TODO: 	mov dword ptr [esi],offset ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::`vftable'
	mov dword ptr [esi+4],ebx
	mov dword ptr [esi+8],ebx
	mov dword ptr [esi+0xC],ebx
	call ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::_CalcAutoGrow
	add ebp,0x34
	push ebp
	mov ecx,esi
	call ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::operator=
	mov eax,edi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 4
}
}
// CQuestMan::IsCompleteScriptLinkedQuest
_SUB_EXCEPTION_HANDLER(2B7A70)
__SUB_CLASS_THIS(002B7A70, __thiscall, 57112,  CQuestMan, int32_t, uint16_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2B7A70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	cmp word ptr [esp+0x1C],0
	je Block3

 Block1:
	mov dword ptr [esp+8],0
	lea eax,[esp+4]
	push eax
	lea edx,[esp+0x20]
	push edx
	sub ecx,0xFFFFFF80
	mov dword ptr [esp+0x1C],0
	call ZMap<unsigned short, ZRef<QuestDemand>, unsigned short>::GetAt
	test eax,eax
	jne Block4

 Block2:
	lea ecx,[esp+4]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>

 Block3:
	xor eax,eax
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x14
	ret 4

 Block4:
	mov eax,dword ptr [esp+8]
	mov eax,dword ptr [eax+0x9C]
	test eax,eax
	je Block2

 Block5:
	cmp byte ptr [eax],0
	je Block2

 Block6:
	lea ecx,[esp+4]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,1
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x14
	ret 4
}
}
// CQuestMan::SetRecentlyUpdatedQuest
__SUB_CLASS_THIS(002B9370, __thiscall, 57165,  CQuestMan, void, uint16_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	push edi
	mov esi,ecx
	call CQuestMan::RemoveRecentlyUpdatedQuest
	lea ecx,[esi+0x2D4]
	call ZList<unsigned short>::AddHead_
	mov word ptr [eax],di
	pop edi
	pop esi
	ret 4
}
}
// CQuestMan::LoadPartyQuestRank
_SUB_EXCEPTION_HANDLER(2C4720)
__SUB_CLASS_THIS(002C4720, __thiscall, 57166,  CQuestMan, void, uint16_t, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x70]
	sub esp,0x70
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2C4720
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xB4
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x6C],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	xor edi,edi
	push edi
	lea eax,[ebp+0x78]
	push eax
	add ecx,0x2EC
	mov dword ptr [ebp-4],edi
	call ZMap<unsigned short, ZArray<CQuestMan::Rank>, unsigned short>::Insert
	push 0xFFFFFFFF
	lea ecx,[eax+0xC]
	call ZArray<CQuestMan::Rank>::InsertBefore
	push edi
	push ecx
	mov esi,eax
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_MINLEVEL
	mov dword ptr [ebp+0x24],esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],1
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp+0x48]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],2
	call get_int32
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov dword ptr [esi],eax
	mov esi,8
	add esp,8
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp+0x48],si
	jne Block5

 Block3:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	cmp eax,edi
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea ecx,[ebp+0x48]
	push ecx
	call ebx

 Block6:
	push edi
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_MAXLEVEL
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],3
	cmp ecx,edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[ebp+0x48]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],4
	call get_int32
	mov ecx,dword ptr [ebp+0x24]
	add esp,8
	mov dword ptr [ecx+4],eax
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp+0x48],si
	jne Block11

 Block9:
	mov eax,dword ptr [ebp+0x50]
	xor edx,edx
	mov word ptr [ebp+0x48],dx
	cmp eax,edi
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea eax,[ebp+0x48]
	push eax
	call ebx

 Block12:
	mov ecx,dword ptr [ebp+0x7C]
	cmp ecx,edi
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea edx,[ebp+0xC]
	push edx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],5
	mov dword ptr [ebp+0x58],edi
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block16:
	lea ecx,[ebp+0x58]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block19

 Block17:
	cmp eax,0x80004002
	je Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],7
	cmp eax,edi
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov ebx,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],8
	mov dword ptr [ebp-0x14],edi
	cmp ebx,edi
	je Block1

 Block22:
	jmp Block25

 Block24:
	mov ebx,dword ptr [ebp+0x58]

 Block25:
	mov ecx,dword ptr [ebx]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp-0x14]
	push edx
	lea eax,[ebp-0x4C]
	push eax
	push 1
	push ebx
	call ecx
	test eax,eax
	jne Block218

 Block26:
	lea edx,[ebp-0x4C]
	push edx
	lea eax,[ebp+0x5C]
	push eax
	call DetachBSTR
	add esp,8
	mov esi,dword ptr [ebp+0x5C]
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x30],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block28

 Block27:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block28:
	mov ecx,dword ptr [ebp+0x7C]
	mov byte ptr [ebp-4],0xA
	test ecx,ecx
	je Block1

 Block29:
	lea edx,[ebp-0x7C]
	push edx
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x60],edi
	test eax,eax
	je Block32

 Block30:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x18]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x18]
	mov edi,ecx
	mov dword ptr [ebp+0x60],edi
	test eax,eax
	jge Block32

 Block31:
	cmp eax,0x80004002
	jne Block18

 Block32:
	cmp word ptr [ebp-0x7C],8
	mov byte ptr [ebp-4],0xD
	jne Block35

 Block33:
	mov eax,dword ptr [ebp-0x74]
	xor edx,edx
	mov word ptr [ebp-0x7C],dx
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea eax,[ebp-0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block36:
	test edi,edi
	sete al
	test al,al
	je Block47

 Block37:
	mov byte ptr [ebp-4],9
	test edi,edi
	je Block39

 Block38:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block39:
	mov byte ptr [ebp-4],8
	test esi,esi
	je Block25

 Block40:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block46

 Block41:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block43

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block43:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block45

 Block44:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block45:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block46:
	mov dword ptr [ebp+0x5C],0
	jmp Block25

 Block47:
	mov ecx,dword ptr [ebp+0x24]
	push 0xFFFFFFFF
	add ecx,8
	call ZArray<GradeEntity>::InsertBefore
	mov ebx,eax
	mov dword ptr [ebp+0x2C],ebx
	test esi,esi
	je Block49

 Block48:
	mov eax,dword ptr [esi]
	jmp Block50

 Block49:
	xor eax,eax

 Block50:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call WideCharToMultiByte
	call __alloca_probe_16
	mov edi,esp
	test esi,esi
	je Block52

 Block51:
	mov esi,dword ptr [esi]
	jmp Block53

 Block52:
	xor esi,esi

 Block53:
	push 0
	push 0
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push esi
	push 0
	push 0
	call WideCharToMultiByte
	test edi,edi
	jne Block56

 Block54:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block60

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [ebx],edi
	jmp Block60

 Block56:
	mov eax,edi
	lea edx,[eax+1]
	jmp Block58

 Block58:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block58

 Block59:
	sub eax,edx
	mov esi,eax
	push esi
	push edi
	push 0
	push esi
	mov ecx,ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,ebx
	call ZXString<char>::ReleaseBuffer

 Block60:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_MORE
	call _xbstr_t::_ctor_1
	cmp dword ptr [ebp+0x60],0
	mov byte ptr [ebp-4],0xE
	je Block1

 Block61:
	lea ecx,[ebp-0x5C]
	push ecx
	mov ecx,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	xor esi,esi
	mov dword ptr [ebp+0x40],esi
	cmp eax,edi
	je Block64

 Block62:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x1C]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	cmp eax,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x1C]
	cmp eax,edi
	mov esi,ecx
	mov dword ptr [ebp+0x40],esi
	jge Block64

 Block63:
	cmp eax,0x80004002
	jne Block18

 Block64:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],0x11
	jne Block67

 Block65:
	mov eax,dword ptr [ebp-0x54]
	xor edx,edx
	mov word ptr [ebp-0x5C],dx
	cmp eax,edi
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea eax,[ebp-0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block68:
	cmp esi,edi
	je Block1

 Block69:
	lea ecx,[ebp+0x18]
	push ecx
	mov ecx,esi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],0x12
	mov dword ptr [ebp+0x34],edi
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block71

 Block70:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block71:
	lea ecx,[ebp+0x34]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block73

 Block72:
	cmp eax,0x80004002
	jne Block18

 Block73:
	mov eax,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],0x14
	cmp eax,edi
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block75:
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0x15
	mov dword ptr [ebp-0x10],edi
	jmp Block77

 Block77:
	mov eax,dword ptr [ebp+0x34]
	test eax,eax
	je Block1

 Block78:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x10]
	push edx
	lea edx,[ebp+0x48]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block105

 Block79:
	lea ecx,[ebp+0x48]
	push ecx
	lea edx,[ebp+0x1C]
	push edx
	call DetachBSTR
	add esp,8
	mov ebx,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0x16
	test ebx,ebx
	je Block81

 Block80:
	mov eax,dword ptr [ebx]
	jmp Block82

 Block81:
	xor eax,eax

 Block82:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call WideCharToMultiByte
	call __alloca_probe_16
	mov edi,esp
	test ebx,ebx
	je Block84

 Block83:
	mov eax,dword ptr [ebx]
	jmp Block85

 Block84:
	xor eax,eax

 Block85:
	push 0
	push 0
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call WideCharToMultiByte
	mov dword ptr [ebp+0x68],0
	test edi,edi
	je Block89

 Block86:
	mov eax,edi
	lea edx,[eax+1]

 Block87:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block87

 Block88:
	sub eax,edx
	mov esi,eax
	push esi
	push edi
	push 0
	push esi
	lea ecx,[ebp+0x68]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[ebp+0x68]
	call ZXString<char>::ReleaseBuffer

 Block89:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block91

 Block90:
	lea eax,[ebx+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block91:
	lea ecx,[ebp-0x9C]
	push ecx
	mov ecx,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0x18
	mov byte ptr [ebp-4],0x17
	call IWzProperty::Getitem
	mov esi,eax
	mov ecx,dword ptr [ebp+0x2C]
	push 0
	lea edx,[ebp+0x68]
	push edx
	add ecx,4
	mov byte ptr [ebp-4],0x19
	call ZMap<ZXString<char>, long, ZXString<char>>::Insert
	push esi
	mov edi,eax
	call get_int32
	add esp,8
	mov dword ptr [edi+0xC],eax
	cmp word ptr [ebp-0x9C],8
	mov byte ptr [ebp-4],0x17
	jne Block94

 Block92:
	xor eax,eax
	mov word ptr [ebp-0x9C],ax
	mov eax,dword ptr [ebp-0x94]
	test eax,eax
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea ecx,[ebp-0x9C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block95:
	mov eax,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0x16
	test eax,eax
	je Block97

 Block96:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block97:
	mov byte ptr [ebp-4],0x15
	test ebx,ebx
	je Block77

 Block98:
	lea edx,[ebx+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block104

 Block99:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block101

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block101:
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block103

 Block102:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block103:
	push ebx
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block104:
	mov dword ptr [ebp+0x1C],0
	jmp Block77

 Block105:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_LESS
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x60]
	lea eax,[ebp-0x6C]
	mov byte ptr [ebp-4],0x1A
	push eax
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1B
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x44],esi
	test eax,eax
	je Block108

 Block106:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+4]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+4]
	mov esi,ecx
	mov dword ptr [ebp+0x44],esi
	test eax,eax
	jge Block108

 Block107:
	cmp eax,0x80004002
	jne Block18

 Block108:
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0x1D
	jne Block111

 Block109:
	mov eax,dword ptr [ebp-0x64]
	xor edx,edx
	mov word ptr [ebp-0x6C],dx
	test eax,eax
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea eax,[ebp-0x6C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block112:
	test esi,esi
	je Block1

 Block113:
	lea ecx,[ebp+0x14]
	push ecx
	mov ecx,esi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],0x1E
	mov dword ptr [ebp+0x38],0
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block115

 Block114:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block115:
	lea ecx,[ebp+0x38]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	test eax,eax
	jge Block117

 Block116:
	cmp eax,0x80004002
	jne Block18

 Block117:
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block119

 Block118:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block119:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0x21
	mov dword ptr [ebp+0x10],0

 Block120:
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block1

 Block121:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x10]
	push edx
	lea edx,[ebp-0x3C]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block148

 Block122:
	lea ecx,[ebp-0x3C]
	push ecx
	lea edx,[ebp+0x20]
	push edx
	call DetachBSTR
	add esp,8
	mov ebx,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x22
	test ebx,ebx
	je Block124

 Block123:
	mov eax,dword ptr [ebx]
	jmp Block125

 Block124:
	xor eax,eax

 Block125:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call WideCharToMultiByte
	call __alloca_probe_16
	mov edi,esp
	test ebx,ebx
	je Block127

 Block126:
	mov eax,dword ptr [ebx]
	jmp Block128

 Block127:
	xor eax,eax

 Block128:
	push 0
	push 0
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call WideCharToMultiByte
	mov dword ptr [ebp+0x68],0
	test edi,edi
	je Block132

 Block129:
	mov eax,edi
	lea edx,[eax+1]

 Block130:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block130

 Block131:
	sub eax,edx
	mov esi,eax
	push esi
	push edi
	push 0
	push esi
	lea ecx,[ebp+0x68]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[ebp+0x68]
	call ZXString<char>::ReleaseBuffer

 Block132:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block134

 Block133:
	lea eax,[ebx+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block134:
	lea ecx,[ebp-0x8C]
	push ecx
	mov ecx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x24
	mov byte ptr [ebp-4],0x23
	call IWzProperty::Getitem
	mov esi,eax
	mov ecx,dword ptr [ebp+0x2C]
	push 0
	lea edx,[ebp+0x68]
	push edx
	add ecx,0x1C
	mov byte ptr [ebp-4],0x25
	call ZMap<ZXString<char>, long, ZXString<char>>::Insert
	push esi
	mov edi,eax
	call get_int32
	add esp,8
	mov dword ptr [edi+0xC],eax
	cmp word ptr [ebp-0x8C],8
	mov byte ptr [ebp-4],0x23
	jne Block137

 Block135:
	xor eax,eax
	mov word ptr [ebp-0x8C],ax
	mov eax,dword ptr [ebp-0x84]
	test eax,eax
	je Block138

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block137:
	lea ecx,[ebp-0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block138:
	mov eax,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0x22
	test eax,eax
	je Block140

 Block139:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block140:
	mov byte ptr [ebp-4],0x21
	test ebx,ebx
	je Block120

 Block141:
	lea edx,[ebx+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block147

 Block142:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block144

 Block143:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block144:
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block146

 Block145:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block146:
	push ebx
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block147:
	mov dword ptr [ebp+0x20],0
	jmp Block120

 Block148:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_EQUAL
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x60]
	lea eax,[ebp-0xAC]
	mov byte ptr [ebp-4],0x26
	push eax
	mov byte ptr [ebp-4],0x21
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x27
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x3C],esi
	test eax,eax
	je Block151

 Block149:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+8]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+8]
	mov esi,ecx
	mov dword ptr [ebp+0x3C],esi
	test eax,eax
	jge Block151

 Block150:
	cmp eax,0x80004002
	jne Block18

 Block151:
	cmp word ptr [ebp-0xAC],8
	mov byte ptr [ebp-4],0x29
	jne Block154

 Block152:
	mov eax,dword ptr [ebp-0xA4]
	xor edx,edx
	mov word ptr [ebp-0xAC],dx
	test eax,eax
	je Block155

 Block153:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block155

 Block154:
	lea eax,[ebp-0xAC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block155:
	test esi,esi
	je Block1

 Block156:
	lea ecx,[ebp]
	push ecx
	mov ecx,esi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],0x2A
	mov dword ptr [ebp+0x30],0
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block158

 Block157:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block158:
	lea ecx,[ebp+0x30]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	test eax,eax
	jge Block160

 Block159:
	cmp eax,0x80004002
	jne Block18

 Block160:
	mov eax,dword ptr [ebp]
	mov byte ptr [ebp-4],0x2C
	test eax,eax
	je Block162

 Block161:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block162:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0x2D
	mov dword ptr [ebp+0x64],0

 Block163:
	mov edi,dword ptr [ebp+0x30]
	xor esi,esi
	cmp edi,esi
	je Block1

 Block164:
	mov ecx,dword ptr [edi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp+0x64]
	push edx
	lea eax,[ebp-0x2C]
	push eax
	push 1
	push edi
	call ecx
	test eax,eax
	jne Block198

 Block165:
	lea edx,[ebp-0x2C]
	push edx
	lea eax,[ebp+0x28]
	push eax
	call DetachBSTR
	add esp,8
	mov ebx,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x2E
	cmp ebx,esi
	je Block167

 Block166:
	mov eax,dword ptr [ebx]
	jmp Block168

 Block167:
	xor eax,eax

 Block168:
	push esi
	push esi
	push esi
	push esi
	push 0xFFFFFFFF
	push eax
	push esi
	push esi
	call WideCharToMultiByte
	call __alloca_probe_16
	mov edi,esp
	cmp ebx,esi
	je Block170

 Block169:
	mov eax,dword ptr [ebx]
	jmp Block171

 Block170:
	xor eax,eax

 Block171:
	push esi
	push esi
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push esi
	push esi
	call WideCharToMultiByte
	mov dword ptr [ebp+0x68],esi
	cmp edi,esi
	je Block175

 Block172:
	mov eax,edi
	lea edx,[eax+1]

 Block173:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block173

 Block174:
	sub eax,edx
	mov esi,eax
	push esi
	push edi
	push 0
	push esi
	lea ecx,[ebp+0x68]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[ebp+0x68]
	call ZXString<char>::ReleaseBuffer

 Block175:
	mov eax,0x20
	call __chkstk
	mov esi,esp
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0xC0],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block177

 Block176:
	lea ecx,[ebx+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block177:
	mov ecx,dword ptr [ebp+0x3C]
	lea edx,[ebp-0xBC]
	mov byte ptr [ebp-4],0x30
	push edx
	mov byte ptr [ebp-4],0x2F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x31
	call get_int32
	push 0xA
	push esi
	push eax
	call _itoa
	mov ecx,dword ptr [ebp+0x2C]
	add esp,0x14
	mov esi,eax
	push 0
	lea eax,[ebp+0x68]
	push eax
	add ecx,0x34
	call ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::Insert
	lea edi,[eax+0xC]
	test esi,esi
	jne Block180

 Block178:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block184

 Block179:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [edi],esi
	jmp Block184

 Block180:
	mov eax,esi
	lea edx,[eax+1]
	jmp Block182

 Block182:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block182

 Block183:
	sub eax,edx
	mov ebx,eax
	push ebx
	push esi
	push 0
	push ebx
	mov ecx,edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer
	mov ebx,dword ptr [ebp+0x28]

 Block184:
	cmp word ptr [ebp-0xBC],8
	mov byte ptr [ebp-4],0x2F
	jne Block187

 Block185:
	mov eax,dword ptr [ebp-0xB4]
	xor ecx,ecx
	mov word ptr [ebp-0xBC],cx
	test eax,eax
	je Block188

 Block186:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block188

 Block187:
	lea edx,[ebp-0xBC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block188:
	mov eax,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0x2E
	test eax,eax
	je Block190

 Block189:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block190:
	mov byte ptr [ebp-4],0x2D
	test ebx,ebx
	je Block163

 Block191:
	lea eax,[ebx+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block197

 Block192:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block194

 Block193:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block194:
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block196

 Block195:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block196:
	push ebx
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block197:
	mov dword ptr [ebp+0x28],0
	jmp Block163

 Block198:
	mov ebx,8
	mov byte ptr [ebp-4],0x2C
	cmp word ptr [ebp-0x2C],bx
	jne Block201

 Block199:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	cmp eax,esi
	je Block202

 Block200:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block202

 Block201:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block202:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],0x29
	call ecx
	mov eax,dword ptr [ebp+0x3C]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0x21
	call eax
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp-0x3C],bx
	jne Block205

 Block203:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	cmp eax,esi
	je Block206

 Block204:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block206

 Block205:
	lea edx,[ebp-0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block206:
	mov eax,dword ptr [ebp+0x38]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x1D
	call edx
	mov eax,dword ptr [ebp+0x44]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x15
	call edx
	mov byte ptr [ebp-4],0x14
	cmp word ptr [ebp+0x48],bx
	jne Block209

 Block207:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	cmp eax,esi
	je Block210

 Block208:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block210

 Block209:
	lea ecx,[ebp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block210:
	mov eax,dword ptr [ebp+0x34]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0x11
	call eax
	mov eax,dword ptr [ebp+0x40]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xD
	call edx
	mov eax,dword ptr [ebp+0x60]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],9
	call edx
	mov edi,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],bl
	cmp edi,esi
	je Block24

 Block211:
	lea eax,[edi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block217

 Block212:
	mov eax,dword ptr [edi]
	cmp eax,esi
	je Block214

 Block213:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block214:
	mov eax,dword ptr [edi+4]
	cmp eax,esi
	je Block216

 Block215:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block216:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block217:
	mov dword ptr [ebp+0x5C],esi
	jmp Block24

 Block218:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],7
	jne Block221

 Block219:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	test eax,eax
	je Block222

 Block220:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block222

 Block221:
	lea edx,[ebp-0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block222:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [ebp-4],0
	call ecx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block224

 Block223:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block224:
	lea esp,[ebp-0xD0]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x6C]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x70
	mov esp,ebp
	pop ebp
	ret 8
}
}
// CQuestMan::CQuestMan
__SUB_CLASS_THIS0(002BAC30, __thiscall, 57098,  CQuestMan, void) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	push edi
	lea ecx,[esi+4]
	xor edi,edi
	cmp ecx,edi
	je Block2

 Block1:
	lea eax,[ecx-4]
	mov dword ptr [TSingleton<CQuestMan>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CQuestMan>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CQuestMan::`vftable'
	mov ebx,0x1F
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, ZArray<unsigned short>, ZXString<char>>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<ZXString<char>, ZArray<unsigned short>, ZXString<char>>::_CalcAutoGrow
	lea ecx,[esi+0x1C]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, ZXString<char>, unsigned short>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, ZXString<char>, unsigned short>::_CalcAutoGrow
	lea ecx,[esi+0x34]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, ZXString<char>, unsigned short>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, ZXString<char>, unsigned short>::_CalcAutoGrow
	lea ecx,[esi+0x4C]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, int, unsigned short>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, int, unsigned short>::_CalcAutoGrow
	lea ecx,[esi+0x68]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, ZRef<QuestDemand>, unsigned short>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, ZRef<QuestDemand>, unsigned short>::_CalcAutoGrow
	lea ecx,[esi+0x80]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, ZRef<QuestDemand>, unsigned short>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, ZRef<QuestDemand>, unsigned short>::_CalcAutoGrow
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0x9C],edi
	lea ecx,[esi+0xA4]
	mov dword ptr [esi+0xA0],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZArray<unsigned short>, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, ZArray<unsigned short>, unsigned long>::_CalcAutoGrow
	lea ecx,[esi+0xBC]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZArray<unsigned short>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZArray<unsigned short>, long>::_CalcAutoGrow
	lea ecx,[esi+0xD4]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZArray<unsigned short>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZArray<unsigned short>, long>::_CalcAutoGrow
	mov dword ptr [esi+0xEC],edi
	lea ecx,[esi+0xF4]
	mov dword ptr [esi+0xF0],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, ZXString<char>, unsigned short>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, ZXString<char>, unsigned short>::_CalcAutoGrow
	lea ecx,[esi+0x10C]
	int 3// TODO: 	mov dword ptr [ecx],offset ZMAP_US_LONG_VTABLE
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	push 0x64
	call ZMap<unsigned short, long, unsigned short>::_CalcAutoGrow
	lea ecx,[esi+0x124]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, unsigned short, ZXString<char>>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<ZXString<char>, unsigned short, ZXString<char>>::_CalcAutoGrow
	lea ecx,[esi+0x13C]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, ZXString<char>, unsigned short>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, ZXString<char>, unsigned short>::_CalcAutoGrow
	lea ecx,[esi+0x158]
	mov dword ptr [esi+0x154],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, ZArray<unsigned short>, unsigned short>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, ZArray<unsigned short>, unsigned short>::_CalcAutoGrow
	lea ecx,[esi+0x170]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, int, unsigned short>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, int, unsigned short>::_CalcAutoGrow
	lea ecx,[esi+0x188]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, int, unsigned short>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, int, unsigned short>::_CalcAutoGrow
	lea ecx,[esi+0x1A0]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, int, unsigned short>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, int, unsigned short>::_CalcAutoGrow
	lea ecx,[esi+0x1B8]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, int, unsigned short>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, int, unsigned short>::_CalcAutoGrow
	lea ecx,[esi+0x1D0]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, int, unsigned short>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, int, unsigned short>::_CalcAutoGrow
	lea ecx,[esi+0x1E8]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMAP_US_LONG_VTABLE
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, long, unsigned short>::_CalcAutoGrow
	lea ecx,[esi+0x200]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMAP_US_LONG_VTABLE
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, long, unsigned short>::_CalcAutoGrow
	lea ecx,[esi+0x218]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMAP_US_LONG_VTABLE
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, long, unsigned short>::_CalcAutoGrow
	lea ecx,[esi+0x230]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZArray<unsigned short>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZArray<unsigned short>, long>::_CalcAutoGrow
	lea ecx,[esi+0x248]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZArray<unsigned short>, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, ZArray<unsigned short>, unsigned long>::_CalcAutoGrow
	lea ecx,[esi+0x260]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, int, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, int, long>::_CalcAutoGrow
	lea ecx,[esi+0x278]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, int, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, int, unsigned long>::_CalcAutoGrow
	mov dword ptr [esi+0x290],edi
	int 3// TODO: 	mov dword ptr [esi+0x294],offset ZList<unsigned short>::`vftable'
	mov dword ptr [esi+0x29C],edi
	mov dword ptr [esi+0x2A0],edi
	mov dword ptr [esi+0x2A4],edi
	lea ecx,[esi+0x2BC]
	int 3// TODO: 	mov dword ptr [esi+0x2A8],offset ZList<unsigned short>::`vftable'
	mov dword ptr [esi+0x2B0],edi
	mov dword ptr [esi+0x2B4],edi
	mov dword ptr [esi+0x2B8],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMAP_US_LONG_VTABLE
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, long, unsigned short>::_CalcAutoGrow
	int 3// TODO: 	mov dword ptr [esi+0x2D4],offset ZList<unsigned short>::`vftable'
	mov dword ptr [esi+0x2DC],edi
	mov dword ptr [esi+0x2E0],edi
	mov dword ptr [esi+0x2E4],edi
	xor ecx,ecx
	mov word ptr [esi+0x2E8],cx
	lea ecx,[esi+0x2EC]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, ZArray<CQuestMan::Rank>, unsigned short>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, ZArray<CQuestMan::Rank>, unsigned short>::_CalcAutoGrow
	lea ecx,[esi+0x304]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMAP_US_LONG_VTABLE
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, long, unsigned short>::_CalcAutoGrow
	lea ecx,[esi+0x31C]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMAP_US_LONG_VTABLE
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, long, unsigned short>::_CalcAutoGrow
	lea ecx,[esi+0x334]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, CQuestMan::RankString, unsigned short>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned short, CQuestMan::RankString, unsigned short>::_CalcAutoGrow
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	ret
}
}
// CQuestMan::SetQuestTime
__SUB_CLASS_THIS(002B8AC0, __thiscall, 57111,  CQuestMan, void, long, NakedParam<_FILETIME>, NakedParam<_FILETIME>) {
__asm {

 Block0:
	sub esp,0x14
	mov eax,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x20]
	push ebx
	mov ebx,dword ptr [esp+0x2C]
	push ebp
	mov ebp,dword ptr [esp+0x20]
	push esi
	mov dword ptr [esp+0x10],eax
	push edi
	mov edi,dword ptr [esp+0x34]
	mov dword ptr [esp+0x18],edx
	xor eax,eax
	add ecx,0x154
	xor edx,edx
	lea ecx,[ecx]

 Block1:
	mov esi,dword ptr [ecx]
	test esi,esi
	je Block6

 Block2:
	cmp eax,dword ptr [esi-4]
	jae Block6

 Block3:
	cmp dword ptr [edx+esi],ebp
	je Block5

 Block4:
	inc eax
	add edx,0x14
	jmp Block1

 Block5:
	mov edx,esi
	mov esi,dword ptr [esp+0x34]
	lea eax,[eax+eax*4]
	add eax,eax
	add eax,eax
	mov dword ptr [eax+edx+0xC],esi
	mov esi,dword ptr [esp+0x38]
	mov dword ptr [eax+edx+0x10],esi
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [ecx]
	pop edi
	pop esi
	mov dword ptr [eax+ecx+4],edx
	mov edx,dword ptr [esp+0x28]
	pop ebp
	mov dword ptr [eax+ecx+8],edx
	pop ebx
	add esp,0x14
	ret 0x14

 Block6:
	push 0xFFFFFFFF
	call ZArray<MODQUESTTIME>::InsertBefore
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x18]
	mov dword ptr [eax],ebp
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],edx
	mov dword ptr [eax+0xC],edi
	pop edi
	pop esi
	pop ebp
	mov dword ptr [eax+0x10],ebx
	pop ebx
	add esp,0x14
	ret 0x14
}
}
// CQuestMan::GetQuestByLevel
__SUB_CLASS_THIS(002B7940, __thiscall, 57136,  CQuestMan, int32_t, ZArray<unsigned short>&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	mov ecx,edi
	call ZArray<unsigned short>::RemoveAll
	mov eax,dword ptr [esi+0xF0]
	lea ecx,[esi+0xF0]
	test eax,eax
	je Block3

 Block1:
	cmp dword ptr [eax-4],0
	je Block3

 Block2:
	push ecx
	mov ecx,edi
	call ZArray<unsigned short>::operator=
	pop edi
	mov eax,1
	pop esi
	ret 4

 Block3:
	pop edi
	xor eax,eax
	pop esi
	ret 4
}
}
// CQuestMan::GetQuestArray
__SUB_CLASS_THIS0(005D83C0, __thiscall, 57137,  CQuestMan, ZArray<unsigned short>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	add ecx,0x290
	push ecx
	mov ecx,esi
	mov dword ptr [esp+8],0
	mov dword ptr [esi],0
	call ZArray<unsigned short>::operator=
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CQuestMan::IsAutoAlertQuest
__SUB_CLASS_THIS(002B6890, __thiscall, 57112,  CQuestMan, int32_t, uint16_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	push edi
	mov esi,ecx
	call CQuestMan::IsAutoStartQuest
	test eax,eax
	jne Block3

 Block1:
	push edi
	mov ecx,esi
	call CQuestMan::IsAutoCompletionAlertQuest
	test eax,eax
	jne Block3

 Block2:
	pop edi
	pop esi
	ret 4

 Block3:
	pop edi
	mov eax,1
	pop esi
	ret 4
}
}
// CQuestMan::IsPartyQuest
__SUB_CLASS_THIS(00122C20, __thiscall, 57114,  CQuestMan, int32_t, uint16_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push eax
	call CQuestMan::GetQuestCategory
	xor ecx,ecx
	cmp eax,0x33
	sete cl
	mov eax,ecx
	ret 4
}
}
// CQuestMan::GetStartDemand
_SUB_EXCEPTION_HANDLER(270B50)
__SUB_CLASS_THIS(00270B50, __thiscall, 57104,  CQuestMan, QuestDemand*, uint16_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_270B50
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
	xor ebx,ebx
	xor edi,edi
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x18],edi
	lea eax,[esp+0x14]
	push eax
	lea edx,[esp+0x38]
	push edx
	add ecx,0x68
	mov dword ptr [esp+0x34],edi
	call ZMap<unsigned short, ZRef<QuestDemand>, unsigned short>::GetAt
	test eax,eax
	je Block2

 Block1:
	mov esi,dword ptr [esp+0x20]
	lea eax,[esp+0x14]
	jmp Block3

 Block2:
	xor esi,esi
	mov dword ptr [esp+0x20],esi
	lea eax,[esp+0x1C]
	mov ebx,1

 Block3:
	mov ebp,dword ptr [eax+4]
	test bl,1
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	je Block8

 Block4:
	cmp esi,edi
	je Block8

 Block5:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block8

 Block6:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block8

 Block7:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block8:
	mov esi,dword ptr [esp+0x18]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test esi,esi
	je Block12

 Block9:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block12

 Block10:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block12

 Block11:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block12:
	mov eax,ebp
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 4
}
}
// CQuestMan::GetQuestDisplayMedal
_SUB_EXCEPTION_HANDLER(2BB400)
__SUB_CLASS_THIS(002BB400, __thiscall, 57144,  CQuestMan, long, uint16_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2BB400
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x60
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x38]
	push eax
	call esi
	lea ecx,[ebp-0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor edi,edi
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x28]
	push edx
	mov dword ptr [ebp-4],edi
	call esi
	lea eax,[ebp-0x28]
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
	lea edx,[ebp-0x28]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0xCC1
	mov bl,1
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0x48]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],edi
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
	cmp word ptr [ebp-0x48],bx
	jne Block16

 Block10:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	cmp eax,edi
	je Block12

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block12:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x28],bx
	jne Block17

 Block14:
	mov eax,dword ptr [ebp-0x20]
	xor ecx,ecx
	mov word ptr [ebp-0x28],cx
	cmp eax,edi
	je Block18

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block16:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x48]
	push eax
	call esi
	jmp Block13

 Block17:
	lea edx,[ebp-0x28]
	push edx
	call esi

 Block18:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x38],bx
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	cmp eax,edi
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[ebp-0x38]
	push ecx
	call esi

 Block22:
	mov edi,dword ptr [ebp-0x18]
	test edi,edi
	je Block36

 Block23:
	mov eax,0x20
	call __chkstk
	movzx edx,word ptr [ebp+8]
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x58]
	mov byte ptr [ebp-4],8
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block26

 Block24:
	cmp eax,0x80004002
	je Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x58],bx
	jne Block29

 Block27:
	mov eax,dword ptr [ebp-0x50]
	xor ecx,ecx
	mov word ptr [ebp-0x58],cx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[ebp-0x58]
	push edx
	call esi

 Block30:
	mov esi,dword ptr [ebp-0x14]
	test esi,esi
	je Block36

 Block31:
	push 0
	push ecx
	mov dword ptr [ebp-0x6C],esp
	mov ecx,esp
	push offset _S_VIEWMEDALITEM
	call _xbstr_t::_ctor_0
	lea eax,[ebp-0x68]
	mov byte ptr [ebp-4],0xC
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x68],8
	mov ebx,eax
	mov byte ptr [ebp-4],0xB
	jne Block34

 Block32:
	mov eax,dword ptr [ebp-0x60]
	xor ecx,ecx
	mov word ptr [ebp-0x68],cx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[ebp-0x68]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],7
	call ecx
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call eax
	mov eax,ebx
	jmp Block39

 Block36:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test edi,edi
	je Block38

 Block37:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block38:
	xor eax,eax

 Block39:
	lea esp,[ebp-0x7C]
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
	ret 4
}
}
// CQuestMan::CheckStartDemand
_SUB_EXCEPTION_HANDLER(2BB6E0)
__SUB_CLASS_THIS(002BB6E0, __thiscall, 57106,  CQuestMan, int32_t, uint16_t, unsigned long, const CharacterData&, const SecondaryStat&, long, long, int32_t, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2BB6E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x88
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x98]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x20],esi
	mov ebx,dword ptr [ebp+8]
	xor edi,edi
	cmp bx,di
	je Block55

 Block1:
	push edi
	lea eax,[ebp+8]
	push eax
	lea ecx,[esi+0x4C]
	call ZMap<unsigned short, int, unsigned short>::GetAt
	test eax,eax
	jne Block55

 Block2:
	mov dword ptr [esp+0x48],edi
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[ebp+8]
	push edx
	lea ecx,[esi+0x68]
	mov dword ptr [esp+0xA8],edi
	call ZMap<unsigned short, ZRef<QuestDemand>, unsigned short>::GetAt
	test eax,eax
	je Block54

 Block3:
	mov ecx,dword ptr [ebp+0x10]
	movzx eax,bx
	lea edx,[esp+0x28]
	add ecx,0x6F5
	push edx
	mov dword ptr [esp+0x2C],eax
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetPos
	test eax,eax
	jne Block54

 Block4:
	mov edi,dword ptr [esp+0x48]
	mov eax,dword ptr [edi+4]
	test eax,eax
	jl Block6

 Block5:
	cmp eax,dword ptr [esi+0x64]
	jl Block54

 Block6:
	mov eax,dword ptr [edi]
	test eax,eax
	jl Block8

 Block7:
	cmp eax,dword ptr [esi+0x64]
	jg Block54

 Block8:
	mov eax,dword ptr [edi+0x18]
	test eax,eax
	je Block10

 Block9:
	cmp eax,dword ptr [ebp+0xC]
	jne Block54

 Block10:
	mov eax,dword ptr [ebp+0x10]
	push eax
	push ebx
	mov ecx,esi
	call CQuestMan::CheckExclusive
	test eax,eax
	je Block54

 Block11:
	cmp dword ptr [edi+0xD8],1
	jne Block13

 Block12:
	cmp dword ptr [ebp+0x20],0
	je Block54

 Block13:
	movzx eax,bx
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [TSingleton<CStageSystem>::ms_pInstance]
	push eax
	mov dword ptr [esp+0x2C],0
	mov dword ptr [esp+0x30],eax
	call CStageSystem::CheckQuestEnable
	test eax,eax
	je Block15

 Block14:
	cmp dword ptr [esp+0x24],0
	je Block54

 Block15:
	mov ecx,dword ptr [ebp+0x14]
	call SecondaryStat::IsRidingTamedMob
	lea edx,[esp+0x84]
	push edx
	call GetLocalTime
	call Util::FTGetNow
	mov esi,dword ptr [ZImports::_FileTimeToSystemTime]
	mov dword ptr [esp+0x54],eax
	lea eax,[esp+0x64]
	push eax
	lea ecx,[esp+0x58]
	push ecx
	mov dword ptr [esp+0x60],edx
	call esi
	mov cl,byte ptr [esp+0x68]
	mov edx,1
	shl edx,cl
	test dword ptr [edi+0xC8],edx
	je Block54

 Block16:
	mov ecx,dword ptr [ebp+0x10]
	lea eax,[esp+0x4C]
	push eax
	lea edx,[ebp+8]
	add ecx,0x5B5
	push edx
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetAt
	test eax,eax
	je Block57

 Block17:
	cmp dword ptr [edi+0x30],0
	jge Block31

 Block18:
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x50]
	push ecx
	call esi
	cmp dword ptr [edi+0xAC],0
	je Block25

 Block19:
	mov ax,word ptr [esp+0x64]
	mov cx,word ptr [esp+0x34]
	cmp ax,cx
	jb Block54

 Block20:
	jne Block31

 Block21:
	mov ax,word ptr [esp+0x66]
	mov cx,word ptr [esp+0x36]
	cmp ax,cx
	jb Block54

 Block22:
	jne Block31

 Block23:
	mov dx,word ptr [esp+0x6A]
	cmp dx,word ptr [esp+0x3A]
	ja Block31

 Block24:
	jmp Block54

 Block25:
	cmp dword ptr [edi+0xB0],0
	je Block54

 Block26:
	mov ax,word ptr [esp+0x38]
	test ax,ax
	jne Block28

 Block27:
	mov esi,1
	jmp Block29

 Block28:
	movzx eax,ax
	mov esi,8
	sub esi,eax

 Block29:
	mov ecx,dword ptr [esp+0x50]
	mov edx,dword ptr [esp+0x4C]
	push ecx
	push edx
	call Util::FT2DAY
	mov ecx,dword ptr [esp+0x5C]
	mov ebx,eax
	mov eax,dword ptr [esp+0x60]
	push eax
	push ecx
	add ebx,esi
	call Util::FT2DAY
	add esp,0x10
	cmp eax,ebx
	jl Block54

 Block30:
	mov esi,dword ptr [ZImports::_FileTimeToSystemTime]

 Block31:
	mov ecx,dword ptr [esp+0x20]
	lea edx,[esp+0x1C]
	push edx
	lea eax,[ebp+8]
	push eax
	add ecx,0x31C
	mov dword ptr [esp+0x24],0
	call ZMap<unsigned short, long, unsigned short>::GetAt
	test eax,eax
	je Block56

 Block32:
	cmp dword ptr [esp+0x1C],0
	jle Block56

 Block33:
	lea ecx,[esp+0x74]
	push ecx
	lea edx,[esp+0x58]
	push edx
	call esi
	lea eax,[esp+0x2C]
	push 0x17EE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+8]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x10]
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xAC],1
	call CharacterData::GetQuestEx
	mov eax,dword ptr [esp+0x2C]
	mov bl,3
	mov byte ptr [esp+0xA0],bl
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	lea ecx,[esp+0x14]
	call ZXString<char>::IsEmpty
	test eax,eax
	je Block37

 Block36:
	push offset _S_19000101
	lea ecx,[esp+0x18]
	call ZXString<char>::AssignCStr

 Block37:
	mov eax,dword ptr [esp+0x14]
	push eax
	call _atoi
	movzx ecx,word ptr [esp+0x78]
	movzx edx,word ptr [esp+0x7A]
	imul ecx,0x64
	add ecx,edx
	movzx edx,word ptr [esp+0x7E]
	imul ecx,0x64
	add ecx,edx
	add esp,4
	cmp eax,ecx
	je Block40

 Block38:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0
	test eax,eax
	je Block57

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block57

 Block40:
	lea eax,[esp+0x34]
	push 0x17EF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+8]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x10]
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0xAC],4
	call CharacterData::GetQuestEx
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0xA0],6
	test eax,eax
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block42:
	lea ecx,[esp+0x18]
	call ZXString<char>::IsEmpty
	test eax,eax
	je Block44

 Block43:
	push offset _S_0__1
	lea ecx,[esp+0x1C]
	call ZXString<char>::AssignCStr

 Block44:
	mov eax,dword ptr [esp+0x18]
	push eax
	call _atoi
	add esp,4
	cmp eax,dword ptr [esp+0x1C]
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xA0],bl
	jge Block49

 Block45:
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0
	test eax,eax
	je Block57

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block57

 Block49:
	test eax,eax
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFF4
	push eax

 Block53:
	call ZXString<char>::_Release
	add esp,4

 Block54:
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0xA0],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>

 Block55:
	xor eax,eax
	mov ecx,dword ptr [esp+0x98]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0x20

 Block56:
	mov eax,dword ptr [edi+0x30]
	push 0
	cdq
	push 0x23C34600
	push edx
	push eax
	call __allmul
	add dword ptr [esp+0x4C],eax
	lea ecx,[esp+0x54]
	push ecx
	adc dword ptr [esp+0x54],edx
	lea edx,[esp+0x50]
	push edx
	call CompareFileTime
	test eax,eax
	jg Block54

 Block57:
	cmp dword ptr [edi+0x20],0
	je Block59

 Block58:
	mov ecx,dword ptr [ebp+0x10]
	call GW_CharacterStat::_ZtlSecureGet_nLevel
	movzx eax,al
	cmp dword ptr [edi+0x20],eax
	jb Block54

 Block59:
	mov ecx,dword ptr [ebp+8]
	add ecx,0xFFFFFB50
	mov edx,0xC7
	cmp cx,dx
	ja Block63

 Block60:
	cmp dword ptr [edi+0x1C],0
	je Block70

 Block61:
	mov ecx,dword ptr [ebp+0x10]
	call GW_CharacterStat::_ZtlSecureGet_nLevel
	movzx eax,al
	cmp dword ptr [edi+0x1C],eax
	jbe Block70

 Block62:
	jmp Block54

 Block63:
	mov eax,dword ptr [edi+0x1C]
	test eax,eax
	je Block70

 Block64:
	mov esi,dword ptr [ebp+0x24]
	test esi,esi
	jle Block68

 Block65:
	mov ecx,dword ptr [ebp+0x10]
	call GW_CharacterStat::_ZtlSecureGet_nLevel
	movzx ecx,al
	cmp dword ptr [edi+0x1C],ecx
	jbe Block70

 Block66:
	mov ecx,dword ptr [ebp+0x10]
	call GW_CharacterStat::_ZtlSecureGet_nLevel
	movzx edx,al
	add edx,esi
	cmp dword ptr [edi+0x1C],edx
	jbe Block70

 Block67:
	jmp Block54

 Block68:
	test eax,eax
	je Block70

 Block69:
	mov ecx,dword ptr [ebp+0x10]
	call GW_CharacterStat::_ZtlSecureGet_nLevel
	movzx eax,al
	cmp dword ptr [edi+0x1C],eax
	ja Block54

 Block70:
	cmp dword ptr [edi+0x24],0
	je Block72

 Block71:
	mov ecx,dword ptr [ebp+0x10]
	call GW_CharacterStat::_ZtlSecureGet_nPOP
	movsx ecx,ax
	cmp dword ptr [edi+0x24],ecx
	ja Block54

 Block72:
	mov edx,dword ptr [edi+0x38]
	mov esi,dword ptr [esp+0x20]
	mov ebx,dword ptr [esp+0x28]
	mov dword ptr [esp+0x5C],edx
	mov eax,dword ptr [edi+0x3C]
	mov dword ptr [esp+0x60],eax
	mov ecx,dword ptr [edi+0x40]
	mov dword ptr [esp+0x4C],ecx
	mov edx,dword ptr [edi+0x44]
	mov dword ptr [esp+0x50],edx
	xor ecx,ecx
	xor edx,edx
	lea esp,[esp]

 Block73:
	mov eax,dword ptr [esi+0x154]
	test eax,eax
	je Block78

 Block74:
	cmp ecx,dword ptr [eax-4]
	jae Block78

 Block75:
	cmp dword ptr [edx+eax],ebx
	je Block77

 Block76:
	inc ecx
	add edx,0x14
	jmp Block73

 Block77:
	lea ecx,[ecx+ecx*4]
	mov edx,eax
	lea eax,[edx+ecx*4]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x5C],ecx
	mov edx,dword ptr [eax+8]
	mov dword ptr [esp+0x60],edx
	mov ecx,dword ptr [eax+0xC]
	mov dword ptr [esp+0x4C],ecx
	mov edx,dword ptr [eax+0x10]
	mov dword ptr [esp+0x50],edx

 Block78:
	lea eax,[esp+0x54]
	push eax
	lea ecx,[esp+0x60]
	push ecx
	call CompareFileTime
	test eax,eax
	jg Block54

 Block79:
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x50]
	push eax
	call CompareFileTime
	test eax,eax
	jl Block54

 Block80:
	lea ecx,[edi+0x68]
	call ZArray<long>::IsEmpty
	test eax,eax
	jne Block87

 Block81:
	mov ecx,dword ptr [ebp+0x10]
	call GW_CharacterStat::_ZtlSecureGet_nJob
	movsx ecx,ax
	push ecx
	call get_job_category
	add esp,4
	cmp eax,9
	je Block87

 Block82:
	xor esi,esi

 Block83:
	mov eax,dword ptr [edi+0x68]
	test eax,eax
	je Block54

 Block84:
	cmp esi,dword ptr [eax-4]
	jae Block54

 Block85:
	mov ecx,dword ptr [ebp+0x10]
	mov edx,eax
	lea ebx,[edx+esi*4]
	call GW_CharacterStat::_ZtlSecureGet_nJob
	cwde
	cmp eax,dword ptr [ebx]
	je Block87

 Block86:
	inc esi
	jmp Block83

 Block87:
	xor eax,eax
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x20],eax

 Block88:
	mov eax,dword ptr [edi+0x74]
	xor ebx,ebx
	cmp eax,ebx
	je Block107

 Block89:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,dword ptr [eax-4]
	jae Block107

 Block90:
	mov edi,eax
	add edi,dword ptr [esp+0x20]
	mov eax,0x431BDE83
	mov ecx,dword ptr [edi]
	imul ecx
	mov ecx,dword ptr [ebp+0x10]
	sar edx,0x12
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	push esi
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],1
	call CharacterData::GetItemSlotCount
	cmp eax,1
	jl Block95

 Block91:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [ebp+0x10]
	push edx
	push esi
	lea eax,[esp+0x3C]
	push eax
	call CharacterData::GetItem
	mov ebx,dword ptr [eax+4]
	lea ecx,[esp+0x34]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test ebx,ebx
	je Block94

 Block92:
	lea ecx,[ebx+0xC]
	call TSecType<long>::GetData
	cmp eax,dword ptr [edi]
	jne Block94

 Block93:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+0x20]
	mov ecx,ebx
	call eax
	add dword ptr [esp+0x18],eax

 Block94:
	mov ebx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [ebp+0x10]
	inc ebx
	push esi
	mov dword ptr [esp+0x20],ebx
	call CharacterData::GetItemSlotCount
	cmp ebx,eax
	jle Block91

 Block95:
	mov ecx,dword ptr [edi]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::IsEquipItem
	test eax,eax
	je Block98

 Block96:
	mov edx,dword ptr [ebp+0x10]
	mov eax,dword ptr [edi]
	push edx
	push eax
	lea ecx,[esp+0x34]
	push ecx
	call get_equiped_from_item
	mov esi,dword ptr [eax+4]
	add esp,0xC
	lea ecx,[esp+0x2C]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	mov eax,dword ptr [esp+0x18]
	test esi,esi
	je Block99

 Block97:
	inc eax
	jmp Block99

 Block98:
	mov eax,dword ptr [esp+0x18]

 Block99:
	mov edi,dword ptr [edi+4]
	test edi,edi
	jle Block102

 Block100:
	cmp eax,edi
	jl Block54

 Block101:
	test edi,edi

 Block102:
	jge Block104

 Block103:
	lea edx,[edi+eax]
	test edx,edx
	jg Block54

 Block104:
	test edi,edi
	jne Block106

 Block105:
	test eax,eax
	jne Block54

 Block106:
	inc dword ptr [esp+0x14]
	add dword ptr [esp+0x20],0xC
	mov edi,dword ptr [esp+0x48]
	jmp Block88

 Block107:
	mov dword ptr [esp+0x14],ebx
	jmp Block109

 Block109:
	mov eax,dword ptr [edi+0xA0]
	test eax,eax
	je Block125

 Block110:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,dword ptr [eax-4]
	jae Block125

 Block111:
	mov esi,dword ptr [ebp+0x10]
	mov edx,eax
	mov eax,ecx
	mov ecx,dword ptr [edx+eax*4]
	xor ebx,ebx
	mov dword ptr [esp+0x18],ecx
	add esi,0x2DD

 Block112:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [esi-0x1E0]
	push edx
	push eax
	call _anon__CheckEquippedItemByIndex
	add esp,8
	test eax,eax
	jne Block124

 Block113:
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [esi]
	push ecx
	push eax
	call _anon__CheckEquippedItemByIndex
	add esp,8
	test eax,eax
	jne Block124

 Block114:
	inc ebx
	add esi,8
	cmp ebx,0x3B
	jle Block112

 Block115:
	mov ebx,dword ptr [ebp+0x10]
	xor esi,esi
	add ebx,0x4BD

 Block116:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [ebx]
	push edx
	push eax
	call _anon__CheckEquippedItemByIndex
	add esp,8
	test eax,eax
	jne Block124

 Block117:
	inc esi
	add ebx,8
	cmp esi,4
	jl Block116

 Block118:
	mov ebx,dword ptr [ebp+0x10]
	xor esi,esi
	add ebx,0x4DD

 Block119:
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [ebx]
	push ecx
	push eax
	call _anon__CheckEquippedItemByIndex
	add esp,8
	test eax,eax
	jne Block124

 Block120:
	inc esi
	add ebx,8
	cmp esi,5
	jl Block119

 Block121:
	add edi,0xFFFFFFF0
	lea esi,[edi+4]
	push esi
	mov dword ptr [esp+0xA4],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block55

 Block122:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block55

 Block123:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax
	jmp Block55

 Block124:
	inc dword ptr [esp+0x14]
	jmp Block109

 Block125:
	cmp dword ptr [edi+0x8C],0
	je Block130

 Block126:
	mov ecx,dword ptr [ebp+0x10]
	push 0
	call CharacterData::GetActiveItemSlotPet
	mov esi,eax
	test esi,esi
	je Block54

 Block127:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	push 0
	lea ecx,[esp+0x38]
	push ecx
	lea ecx,[edi+0x80]
	mov dword ptr [esp+0x3C],eax
	call ZMap<long, int, long>::GetAt
	test eax,eax
	je Block54

 Block128:
	mov ecx,esi
	call GW_ItemSlotPet::_ZtlSecureGet_nTameness
	movsx edx,ax
	cmp dword ptr [edi+0x10],edx
	jg Block54

 Block129:
	mov ecx,esi
	call GW_ItemSlotPet::_ZtlSecureGet_nTameness
	cwde
	cmp dword ptr [edi+0x14],eax
	jl Block54

 Block130:
	mov ebx,dword ptr [edi+0xC0]
	test ebx,ebx
	jne Block132

 Block131:
	cmp dword ptr [edi+0xC4],ebx
	je Block137

 Block132:
	mov ecx,dword ptr [ebp+0x10]
	push 0
	call CharacterData::GetActiveItemSlotPet
	mov esi,eax
	test esi,esi
	je Block54

 Block133:
	test ebx,ebx
	je Block135

 Block134:
	push 0x80
	mov ecx,esi
	call GW_ItemSlotPet::IsPetSkillExist
	test eax,eax
	jne Block54

 Block135:
	cmp dword ptr [edi+0xC4],0
	je Block137

 Block136:
	push 0x100
	mov ecx,esi
	call GW_ItemSlotPet::IsPetSkillExist
	test eax,eax
	jne Block54

 Block137:
	mov eax,dword ptr [ebp+0x18]
	cmp dword ptr [edi+8],eax
	jg Block54

 Block138:
	cmp dword ptr [edi+0xC],eax
	jl Block54

 Block139:
	xor eax,eax
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x20],eax
	jmp Block141

 Block141:
	mov eax,dword ptr [edi+0x7C]
	test eax,eax
	je Block153

 Block142:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,dword ptr [eax-4]
	jae Block153

 Block143:
	mov edx,dword ptr [ebp+0x10]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	mov esi,eax
	add esi,dword ptr [esp+0x20]
	push 0
	cmp dword ptr [esi+8],0
	mov ebx,dword ptr [esi]
	push ebx
	push edx
	je Block151

 Block144:
	call CSkillInfo::IsSkillVisible
	test eax,eax
	je Block54

 Block145:
	push ebx
	call is_guild_skill
	add esp,4
	test eax,eax
	je Block147

 Block146:
	mov eax,dword ptr [ebp+0x10]
	push ebx
	push eax
	call _anon__GetGuildSkillLevel
	add esp,8
	jmp Block148

 Block147:
	mov ecx,dword ptr [ebp+0x10]
	push 0
	push ebx
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	call CSkillInfo::GetSkillLevel_0

 Block148:
	mov esi,dword ptr [esi+4]
	test esi,esi
	jg Block54

 Block149:
	cmp eax,esi
	jl Block54

 Block150:
	inc dword ptr [esp+0x14]
	add dword ptr [esp+0x20],0xC
	jmp Block141

 Block151:
	call CSkillInfo::IsSkillVisible
	test eax,eax
	jne Block54

 Block152:
	inc dword ptr [esp+0x14]
	add dword ptr [esp+0x20],0xC
	jmp Block141

 Block153:
	mov dword ptr [esp+0x14],0

 Block154:
	mov eax,dword ptr [edi+0x70]
	test eax,eax
	je Block164

 Block155:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,dword ptr [eax-4]
	jae Block164

 Block156:
	mov edx,eax
	mov eax,ecx
	mov ebx,dword ptr [edx+eax*8+4]
	lea esi,[edx+eax*8]
	test ebx,ebx
	jne Block159

 Block157:
	movzx ecx,word ptr [esi]
	mov dword ptr [esp+0x34],ecx
	mov ecx,dword ptr [ebp+0x10]
	lea edx,[esp+0x34]
	push edx
	add ecx,0x6F5
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetPos
	test eax,eax
	jne Block54

 Block158:
	mov ecx,dword ptr [ebp+0x10]
	push esi
	add ecx,0x5B5
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetPos
	test eax,eax
	jne Block54

 Block159:
	cmp ebx,1
	jne Block161

 Block160:
	movzx eax,word ptr [esi]
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,dword ptr [ebp+0x10]
	add ecx,0x6F5
	mov dword ptr [esp+0x38],eax
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetPos
	test eax,eax
	je Block54

 Block161:
	cmp ebx,2
	jne Block163

 Block162:
	mov ecx,dword ptr [ebp+0x10]
	push esi
	add ecx,0x5B5
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetPos
	test eax,eax
	je Block54

 Block163:
	inc dword ptr [esp+0x14]
	jmp Block154

 Block164:
	mov eax,dword ptr [edi+0x5C]
	test eax,eax
	je Block189

 Block165:
	cmp dword ptr [eax-4],0
	je Block189

 Block166:
	mov eax,dword ptr [edi+0x64]
	test eax,eax
	jne Block168

 Block167:
	mov eax,dword ptr [esp+0x28]

 Block168:
	mov dword ptr [esp+0x14],0
	mov ecx,dword ptr [ebp+0x10]
	lea edx,[esp+0x14]
	push edx
	push eax
	mov byte ptr [esp+0xA8],7
	call CharacterData::GetQuest
	test eax,eax
	je Block51

 Block169:
	mov eax,dword ptr [edi+0x60]
	test eax,eax
	je Block171

 Block170:
	mov eax,dword ptr [eax-4]

 Block171:
	xor ecx,ecx
	test eax,eax
	setne cl
	xor ebx,ebx
	mov dword ptr [esp+0x34],ecx

 Block172:
	mov eax,dword ptr [edi+0x5C]
	mov esi,dword ptr [esp+0x14]
	test eax,eax
	je Block201

 Block173:
	cmp ebx,dword ptr [eax-4]
	jae Block201

 Block174:
	cmp dword ptr [esp+0x34],0
	lea ecx,[esp+0x14]
	je Block186

 Block175:
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block177

 Block176:
	push esi
	call _atoi
	add esp,4
	mov dword ptr [esp+0x20],eax
	jmp Block178

 Block177:
	mov dword ptr [esp+0x20],0

 Block178:
	mov eax,dword ptr [edi+0x5C]
	lea esi,[ebx*4]
	add eax,esi
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov edx,dword ptr [edi+0x60]
	mov ecx,dword ptr [esi+edx]
	add esp,4
	sub ecx,0
	je Block185

 Block179:
	sub ecx,1
	je Block184

 Block180:
	sub ecx,1
	jne Block51

 Block181:
	cmp eax,dword ptr [esp+0x20]
	setge cl
	mov eax,ecx

 Block182:
	test eax,eax
	jne Block187

 Block183:
	inc ebx
	jmp Block172

 Block184:
	xor edx,edx
	cmp eax,dword ptr [esp+0x20]
	setle dl
	mov eax,edx
	jmp Block182

 Block185:
	mov eax,dword ptr [edi+0x5C]
	add eax,esi
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::CompareNoCase
	neg eax
	sbb eax,eax
	inc eax
	jmp Block182

 Block186:
	lea eax,[eax+ebx*4]
	mov eax,dword ptr [eax]
	push eax
	call ZXString<char>::CompareNoCase
	test eax,eax
	jne Block183

 Block187:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],0
	test eax,eax
	je Block189

 Block188:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block189:
	cmp dword ptr [edi+0xB4],0
	jg Block54

 Block190:
	cmp dword ptr [edi+0xB8],0
	jg Block54

 Block191:
	mov eax,dword ptr [edi+0xBC]
	test eax,eax
	je Block193

 Block192:
	cmp dword ptr [eax-4],0
	ja Block54

 Block193:
	cmp dword ptr [edi+0xCC],0
	je Block195

 Block194:
	mov ecx,dword ptr [ebp+0x14]
	call SecondaryStat::_ZtlSecureGet_nMorph_
	cmp dword ptr [edi+0xCC],eax
	jne Block54

 Block195:
	mov ebx,dword ptr [ebp+0x14]
	xor esi,esi

 Block196:
	mov eax,dword ptr [edi+0xD0]
	test eax,eax
	je Block203

 Block197:
	cmp esi,dword ptr [eax-4]
	jae Block203

 Block198:
	mov ecx,eax
	cmp dword ptr [ecx+esi*4],0
	lea eax,[ecx+esi*4]
	je Block200

 Block199:
	mov edx,dword ptr [eax]
	neg edx
	push edx
	mov ecx,ebx
	call SecondaryStat::IsSetted
	test eax,eax
	je Block54

 Block200:
	inc esi
	jmp Block196

 Block201:
	mov byte ptr [esp+0xA0],0
	test esi,esi
	je Block54

 Block202:
	add esi,0xFFFFFFF4
	push esi
	jmp Block53

 Block203:
	xor esi,esi

 Block204:
	mov eax,dword ptr [edi+0xD4]
	test eax,eax
	je Block209

 Block205:
	cmp esi,dword ptr [eax-4]
	jae Block209

 Block206:
	cmp dword ptr [eax+esi*4],0
	lea eax,[eax+esi*4]
	je Block208

 Block207:
	mov ecx,dword ptr [eax]
	neg ecx
	push ecx
	mov ecx,ebx
	call SecondaryStat::IsSetted
	test eax,eax
	jne Block54

 Block208:
	inc esi
	jmp Block204

 Block209:
	mov edi,dword ptr [edi+0x6C]
	test edi,edi
	je Block211

 Block210:
	mov eax,dword ptr [ebp+0x10]
	mov cl,byte ptr [eax+0xF7]
	mov edx,1
	shl edx,cl
	test edi,edx
	je Block54

 Block211:
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0xA0],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,1
	mov ecx,dword ptr [esp+0x98]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0x20
}
}
// CQuestMan::GetQuestByItemDemand
__SUB_CLASS_THIS(002B78D0, __thiscall, 57135,  CQuestMan, int32_t, long, ZArray<unsigned short>&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	mov ecx,edi
	call ZArray<unsigned short>::RemoveAll
	push edi
	lea eax,[esp+0x10]
	push eax
	lea ecx,[esi+0xD4]
	call ZMap<long, ZArray<unsigned short>, long>::GetAt
	neg eax
	sbb eax,eax
	pop edi
	neg eax
	pop esi
	ret 8
}
}
// CQuestMan::GetQuestByMeso
__SUB_CLASS_THIS(002B7900, __thiscall, 57136,  CQuestMan, int32_t, ZArray<unsigned short>&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	mov ecx,edi
	call ZArray<unsigned short>::RemoveAll
	mov eax,dword ptr [esi+0xEC]
	lea ecx,[esi+0xEC]
	test eax,eax
	je Block3

 Block1:
	cmp dword ptr [eax-4],0
	je Block3

 Block2:
	push ecx
	mov ecx,edi
	call ZArray<unsigned short>::operator=
	pop edi
	mov eax,1
	pop esi
	ret 4

 Block3:
	pop edi
	xor eax,eax
	pop esi
	ret 4
}
}
// CQuestMan::LoadQuestPerformByDayInfo
_SUB_EXCEPTION_HANDLER(2BA0F0)
__SUB_CLASS_THIS0(002BA0F0, __thiscall, 57100,  CQuestMan, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2BA0F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x74
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x28],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x40]
	push eax
	call esi
	lea ecx,[ebp-0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor edi,edi
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x60]
	push edx
	mov dword ptr [ebp-4],edi
	call esi
	lea eax,[ebp-0x60]
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
	lea ecx,[ebp-0x40]
	push ecx
	lea edx,[ebp-0x60]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0x17E9
	push eax
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0x70]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x24]
	mov dword ptr [ebp-0x24],edi
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
	cmp word ptr [ebp-0x70],bx
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x68]
	xor edx,edx
	mov word ptr [ebp-0x70],dx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0x70]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x60],bx
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x58]
	xor ecx,ecx
	mov word ptr [ebp-0x60],cx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp-0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x40],bx
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp-0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea edx,[ebp-0x50]
	push edx
	call esi
	mov ebx,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],8
	cmp ebx,edi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea eax,[ebp-0x30]
	push eax
	mov ecx,ebx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],9
	mov dword ptr [ebp-0x18],edi
	mov dword ptr [ebp-0x14],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block25:
	lea ecx,[ebp-0x18]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block28

 Block26:
	cmp eax,0x80004002
	je Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov eax,dword ptr [ebp-0x30]
	mov byte ptr [ebp-4],0xB
	cmp eax,edi
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	mov esi,dword ptr [ebp-0x18]
	mov dword ptr [ebp-0x2C],edi
	cmp esi,edi
	je Block5

 Block31:
	jmp Block33

 Block33:
	mov eax,dword ptr [esi]
	mov eax,dword ptr [eax+0xC]
	lea ecx,[ebp-0x2C]
	push ecx
	lea edx,[ebp-0x50]
	push edx
	push 1
	push esi
	call eax
	test eax,eax
	jne Block51

 Block34:
	lea ecx,[ebp-0x50]
	push ecx
	lea edx,[ebp-0x20]
	push edx
	call DetachBSTR
	mov eax,dword ptr [eax]
	add esp,8
	cmp eax,edi
	je Block36

 Block35:
	mov eax,dword ptr [eax]
	jmp Block37

 Block36:
	xor eax,eax

 Block37:
	push eax
	call __wtoi
	movzx edi,ax
	mov eax,dword ptr [ebp-0x20]
	add esp,4
	mov dword ptr [ebp-0x14],edi
	test eax,eax
	je Block46

 Block38:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block45

 Block39:
	test esi,esi
	je Block45

 Block40:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block42

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block42:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block44

 Block43:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block44:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block45:
	mov esi,dword ptr [ebp-0x18]
	mov dword ptr [ebp-0x20],0

 Block46:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	movzx ecx,di
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x1C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x80]
	mov byte ptr [ebp-4],0xC
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x80],8
	mov dword ptr [ebp-0x1C],eax
	mov byte ptr [ebp-4],0xB
	jne Block49

 Block47:
	mov eax,dword ptr [ebp-0x78]
	xor ecx,ecx
	mov word ptr [ebp-0x80],cx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea edx,[ebp-0x80]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	lea eax,[ebp-0x1C]
	push eax
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,dword ptr [ebp-0x28]
	add ecx,0x31C
	call ZMap<unsigned short, long, unsigned short>::Insert
	xor edi,edi
	jmp Block33

 Block51:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],8
	call eax
	cmp word ptr [ebp-0x50],8
	mov byte ptr [ebp-4],7
	jne Block54

 Block52:
	mov eax,dword ptr [ebp-0x48]
	xor ecx,ecx
	mov word ptr [ebp-0x50],cx
	cmp eax,edi
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea edx,[ebp-0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ecx
	lea esp,[ebp-0x90]
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
}
}
// CQuestMan::GetQuestDailyPlayMinTime
__SUB_CLASS_THIS(002B6900, __thiscall, 57150,  CQuestMan, unsigned long, uint16_t) {
__asm {

 Block0:
	push ecx
	lea eax,[esp]
	push eax
	lea edx,[esp+0xC]
	push edx
	add ecx,0x218
	call ZMap<unsigned short, long, unsigned short>::GetAt
	neg eax
	sbb eax,eax
	and eax,dword ptr [esp]
	pop ecx
	ret 4
}
}
// CQuestMan::IsAutoCompletionAlertQuest
__SUB_CLASS_THIS(002B6870, __thiscall, 57112,  CQuestMan, int32_t, uint16_t) {
__asm {

 Block0:
	push 0
	lea eax,[esp+8]
	push eax
	add ecx,0x294
	call ZList<unsigned short>::Find
	neg eax
	sbb eax,eax
	neg eax
	ret 4
}
}
// CQuestMan::IsTimeLimitQuest
__SUB_CLASS_THIS(002B5860, __thiscall, 57112,  CQuestMan, int32_t, uint16_t) {
__asm {

 Block0:
	push ecx
	lea eax,[esp]
	push eax
	lea edx,[esp+0xC]
	push edx
	add ecx,0x1E8
	call ZMap<unsigned short, long, unsigned short>::GetAt
	neg eax
	sbb eax,eax
	neg eax
	pop ecx
	ret 4
}
}
// CQuestMan::IsEquipOnAutoStartQuest
__SUB_CLASS_THIS(002B57B0, __thiscall, 57115,  CQuestMan, int32_t, long) {
__asm {

 Block0:
	push ecx
	lea eax,[esp]
	push eax
	lea edx,[esp+0xC]
	push edx
	add ecx,0x260
	call ZMap<long, int, long>::GetAt
	neg eax
	sbb eax,eax
	neg eax
	pop ecx
	ret 4
}
}
// CQuestMan::LoadPartyQuestInfo
_SUB_EXCEPTION_HANDLER(2C5540)
__SUB_CLASS_THIS0(002C5540, __thiscall, 57100,  CQuestMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2C5540
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x104
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x118]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x24],ecx
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x68]
	push eax
	call ebp
	lea ecx,[esp+0x68]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor esi,esi
	add esp,8
	cmp eax,esi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x88]
	push edx
	mov dword ptr [esp+0x124],esi
	call ebp
	lea eax,[esp+0x88]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push esi
	push esi
	lea ecx,[esp+0x70]
	push ecx
	lea edx,[esp+0x94]
	push edx
	push ecx
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	push offset _S_QUESTPQUESTIMG
	mov byte ptr [esp+0x138],1
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x134],2
	cmp dword ptr [_D_G_RM],esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x10C]
	mov byte ptr [esp+0x134],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x128],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x120],5
	cmp word ptr [esp+0xF8],bx
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x100]
	xor ecx,ecx
	mov word ptr [esp+0xF8],cx
	cmp eax,esi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0xF8]
	push edx
	call edi

 Block13:
	mov byte ptr [esp+0x120],6
	cmp word ptr [esp+0x88],bx
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x88],ax
	mov eax,dword ptr [esp+0x90]
	cmp eax,esi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x88]
	push ecx
	call edi

 Block17:
	mov byte ptr [esp+0x120],7
	cmp word ptr [esp+0x68],bx
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	cmp eax,esi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x68]
	push eax
	call edi

 Block21:
	mov ecx,dword ptr [esp+0x20]
	cmp ecx,esi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea edx,[esp+0x60]
	push edx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x124],8
	mov dword ptr [esp+0x30],esi
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block25:
	lea ecx,[esp+0x30]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,esi
	jge Block28

 Block26:
	cmp eax,0x80004002
	je Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x120],0xA
	cmp eax,esi
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	lea eax,[esp+0x98]
	push eax
	call ebp
	mov byte ptr [esp+0x120],0xB
	mov dword ptr [esp+0x54],esi
	cmp dword ptr [esp+0x2C],esi
	je Block5

 Block31:
	mov edi,edi

 Block32:
	mov esi,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x9C]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block133

 Block33:
	lea edx,[esp+0x98]
	push edx
	lea eax,[esp+0x20]
	push eax
	call DetachBSTR
	add esp,8
	mov esi,dword ptr [esp+0x1C]
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block35

 Block34:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block35:
	mov ecx,dword ptr [esp+0x2C]
	lea edx,[esp+0xB4]
	mov byte ptr [esp+0x12C],0xD
	push edx
	mov byte ptr [esp+0x130],0xC
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x128],0xE
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	test eax,eax
	je Block39

 Block36:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x5C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x18],ecx
	test eax,eax
	jge Block38

 Block37:
	cmp eax,0x80004002
	jne Block1

 Block38:
	mov ebx,dword ptr [esp+0x18]

 Block39:
	mov ebp,8
	mov byte ptr [esp+0x120],0x10
	cmp word ptr [esp+0xA8],bp
	jne Block42

 Block40:
	mov eax,dword ptr [esp+0xB0]
	xor edx,edx
	mov word ptr [esp+0xA8],dx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea eax,[esp+0xA8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block43:
	test esi,esi
	je Block45

 Block44:
	mov eax,dword ptr [esi]
	jmp Block46

 Block45:
	xor eax,eax

 Block46:
	push eax
	call __wtoi
	add esp,4
	push 0
	push 0
	push ecx
	movzx edi,ax
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_RANK__1
	mov dword ptr [esp+0x38],edi
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x12C],0x11
	test ebx,ebx
	je Block5

 Block47:
	lea ecx,[esp+0xE4]
	push ecx
	mov ecx,ebx
	mov byte ptr [esp+0x130],0x10
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x128],0x12
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x38],esi
	test eax,eax
	je Block50

 Block48:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x64]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x64]
	mov esi,ecx
	mov dword ptr [esp+0x38],esi
	test eax,eax
	jge Block50

 Block49:
	cmp eax,0x80004002
	jne Block1

 Block50:
	mov byte ptr [esp+0x120],0x14
	cmp word ptr [esp+0xD8],bp
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0xE0]
	xor edx,edx
	mov word ptr [esp+0xD8],dx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea eax,[esp+0xD8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block54:
	test esi,esi
	je Block56

 Block55:
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x18],esp
	push esi
	call edx
	mov ecx,dword ptr [esp+0x28]
	push edi
	call CQuestMan::LoadPartyQuestRank
	jmp Block101

 Block56:
	xor esi,esi
	push esi
	push esi
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_RANKS
	call _xbstr_t::_ctor_1
	lea eax,[esp+0xC4]
	mov byte ptr [esp+0x12C],0x15
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x130],0x14
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x128],0x16
	call Ztl_variant_t::GetUnknown
	xor ebp,ebp
	mov dword ptr [esp+0x50],ebp
	cmp eax,esi
	je Block59

 Block57:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x58]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,esi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x58]
	cmp eax,esi
	mov ebp,ecx
	mov dword ptr [esp+0x50],ebp
	jge Block59

 Block58:
	cmp eax,0x80004002
	jne Block1

 Block59:
	cmp word ptr [esp+0xB8],8
	mov byte ptr [esp+0x120],0x18
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0xC0]
	xor edx,edx
	mov word ptr [esp+0xB8],dx
	cmp eax,esi
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[esp+0xB8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block63:
	cmp ebp,esi
	je Block99

 Block64:
	lea ecx,[esp+0x44]
	push ecx
	mov ecx,ebp
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x124],0x19
	mov dword ptr [esp+0x40],esi
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block66

 Block65:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block66:
	lea ecx,[esp+0x40]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,esi
	jge Block68

 Block67:
	cmp eax,0x80004002
	jne Block1

 Block68:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x120],0x1B
	cmp eax,esi
	je Block70

 Block69:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block70:
	lea eax,[esp+0x78]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov ebx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x120],0x1C
	mov dword ptr [esp+0x48],esi

 Block71:
	test ebx,ebx
	je Block5

 Block72:
	mov ecx,dword ptr [ebx]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x7C]
	push eax
	push 1
	push ebx
	call ecx
	test eax,eax
	jne Block94

 Block73:
	lea edx,[esp+0x78]
	push edx
	lea eax,[esp+0x44]
	push eax
	call DetachBSTR
	add esp,8
	mov edi,dword ptr [esp+0x40]
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block75

 Block74:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block75:
	lea edx,[esp+0xD4]
	mov byte ptr [esp+0x12C],0x1E
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x130],0x1D
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x128],0x1F
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	test eax,eax
	je Block78

 Block76:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x4C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x4C]
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	test eax,eax
	jge Block78

 Block77:
	cmp eax,0x80004002
	jne Block1

 Block78:
	cmp word ptr [esp+0xC8],8
	mov byte ptr [esp+0x120],0x21
	jne Block81

 Block79:
	mov eax,dword ptr [esp+0xD0]
	xor edx,edx
	mov word ptr [esp+0xC8],dx
	test eax,eax
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea eax,[esp+0xC8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block82:
	test esi,esi
	je Block84

 Block83:
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x38],esp
	push esi
	call edx
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x28]
	push eax
	call CQuestMan::LoadPartyQuestRank

 Block84:
	mov byte ptr [esp+0x120],0x1D
	test esi,esi
	je Block86

 Block85:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block86:
	mov byte ptr [esp+0x120],0x1C
	test edi,edi
	je Block71

 Block87:
	lea eax,[edi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block93

 Block88:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block90

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block90:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block92

 Block91:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block92:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block93:
	mov dword ptr [esp+0x40],0
	jmp Block71

 Block94:
	cmp word ptr [esp+0x78],8
	mov byte ptr [esp+0x120],0x1B
	jne Block97

 Block95:
	mov eax,dword ptr [esp+0x80]
	xor ecx,ecx
	mov word ptr [esp+0x78],cx
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea edx,[esp+0x78]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [esp+0x124],0x18
	call ecx
	mov ebx,dword ptr [esp+0x18]

 Block99:
	mov byte ptr [esp+0x120],0x14
	test ebp,ebp
	je Block101

 Block100:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block101:
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push offset _S_MARK
	call _xbstr_t::_ctor_1
	lea ecx,[esp+0xEC]
	push ecx
	mov byte ptr [esp+0x128],0x22
	mov ecx,ebx
	mov byte ptr [esp+0x128],0x14
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [esp+0x120],0x23
	jne Block103

 Block102:
	mov ebp,dword ptr [eax+8]
	jmp Block104

 Block103:
	mov ebp,offset _S___3

 Block104:
	mov ecx,dword ptr [esp+0x24]
	push 0
	lea edx,[esp+0x2C]
	push edx
	add ecx,0xF4
	call ZMap<unsigned short, ZXString<char>, unsigned short>::Insert
	lea edi,[eax+0xC]
	test ebp,ebp
	jne Block107

 Block105:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block108

 Block106:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [edi],ebp
	jmp Block108

 Block107:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push ebp
	push 0
	push 0
	call WideCharToMultiByte
	mov esi,eax
	push 0
	dec esi
	push esi
	mov ecx,edi
	call ZXString<char>::GetBuffer
	push 0
	push 0
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push ebp
	push 0
	push 0
	call WideCharToMultiByte
	push esi
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer

 Block108:
	cmp word ptr [esp+0xE8],8
	mov byte ptr [esp+0x120],0x14
	jne Block111

 Block109:
	xor eax,eax
	mov word ptr [esp+0xE8],ax
	mov eax,dword ptr [esp+0xF0]
	test eax,eax
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea ecx,[esp+0xE8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block112:
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push offset _S_STRING__1
	call _xbstr_t::_ctor_1
	mov edi,dword ptr [esp+0x24]
	lea edx,[esp+0x114]
	mov byte ptr [esp+0x12C],0x24
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x130],0x14
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x128],0x25
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	test eax,eax
	je Block115

 Block113:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x30]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x30]
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	test eax,eax
	jge Block115

 Block114:
	cmp eax,0x80004002
	jne Block1

 Block115:
	cmp word ptr [esp+0x108],8
	mov byte ptr [esp+0x120],0x27
	jne Block118

 Block116:
	mov eax,dword ptr [esp+0x110]
	xor edx,edx
	mov word ptr [esp+0x108],dx
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea eax,[esp+0x108]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block119:
	test esi,esi
	je Block121

 Block120:
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x38],esp
	push esi
	call edx
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x28]
	push eax
	call CQuestMan::LoadPartyQuestRankString

 Block121:
	mov byte ptr [esp+0x120],0x14
	test esi,esi
	je Block123

 Block122:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block123:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x120],0x10
	test eax,eax
	je Block125

 Block124:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block125:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0x124],0xC
	call ecx
	cmp dword ptr [esp+0x1C],0
	mov byte ptr [esp+0x120],0xB
	je Block32

 Block126:
	mov esi,dword ptr [esp+0x1C]
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block132

 Block127:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block129

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block129:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block131

 Block130:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block131:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block132:
	mov dword ptr [esp+0x1C],0
	jmp Block32

 Block133:
	cmp word ptr [esp+0x98],8
	mov byte ptr [esp+0x120],0xA
	jne Block136

 Block134:
	xor eax,eax
	mov word ptr [esp+0x98],ax
	mov eax,dword ptr [esp+0xA0]
	test eax,eax
	je Block137

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block137

 Block136:
	lea ecx,[esp+0x98]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block137:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0x124],7
	call eax
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [esp+0x124],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x118]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x110
	ret
}
}
// CQuestMan::GetTimeKeepInfo
_SUB_EXCEPTION_HANDLER(2B8740)
__SUB_CLASS_THIS(002B8740, __thiscall, 57154,  CQuestMan, ZRef<TimeKeepInfo>*, ZRef<TimeKeepInfo>*, uint16_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2B8740
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
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x1C],ebx
	lea eax,[esp+0x18]
	push eax
	lea edx,[esp+0x38]
	mov edi,1
	push edx
	sub ecx,0xFFFFFF80
	mov dword ptr [esp+0x30],edi
	call ZMap<unsigned short, ZRef<QuestDemand>, unsigned short>::GetAt
	test eax,eax
	jne Block6

 Block1:
	mov ebp,dword ptr [esp+0x30]
	mov dword ptr [ebp+4],ebx
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],edi
	mov byte ptr [esp+0x28],bl
	cmp eax,ebx
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
	cmp esi,ebx
	je Block5

 Block4:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block5:
	mov eax,ebp
	jmp Block11

 Block6:
	mov eax,dword ptr [esp+0x1C]
	mov esi,dword ptr [esp+0x30]
	cmp eax,ebx
	je Block9

 Block7:
	mov eax,dword ptr [eax+0xF0]
	mov dword ptr [esi+4],eax
	cmp eax,ebx
	je Block10

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block10

 Block9:
	mov dword ptr [esi+4],ebx

 Block10:
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x14],edi
	mov byte ptr [esp+0x28],bl
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,esi

 Block11:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 8
}
}
// CQuestMan::RankString::~RankString
_SUB_EXCEPTION_HANDLER(2B8830)
__SUB_CLASS_THIS0(002B8830, __thiscall, 57698,  CQuestMan::RankString, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2B8830
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
	mov eax,dword ptr [esi+0x14]
	mov dword ptr [esp+0x14],4
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0x10]
	mov byte ptr [esp+0x14],3
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esi+0xC]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esi+8]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esi+4]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov esi,dword ptr [esi]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block12

 Block11:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CQuestMan::RegisterDemandItem
_SUB_EXCEPTION_HANDLER(2B8B70)
__SUB_CLASS_THIS(002B8B70, __thiscall, 57158,  CQuestMan, int32_t, uint16_t, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2B8B70
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	cmp eax,1
	jne Block4

 Block1:
	mov dword ptr [esp+0x1C],edx
	lea esi,[ecx+0xBC]
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x18],edx
	call ZMap<long, ZArray<unsigned short>, long>::GetAt
	push 0xFFFFFFFF
	lea ecx,[esp+0x20]
	test eax,eax
	je Block3

 Block2:
	call ZArray<unsigned short>::InsertBefore
	mov dx,word ptr [esp+0x18]
	mov word ptr [eax],dx
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x24]
	push eax
	jmp Block9

 Block3:
	call ZArray<unsigned short>::InsertBefore
	mov cx,word ptr [esp+0x18]
	lea edx,[esp+0x1C]
	mov word ptr [eax],cx
	push edx
	lea eax,[esp+0x24]
	push eax
	jmp Block9

 Block4:
	cmp eax,edx
	jne Block10

 Block5:
	mov dword ptr [esp+0x1C],edx
	lea esi,[ecx+0xD4]
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x24]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x18],1
	call ZMap<long, ZArray<unsigned short>, long>::GetAt
	push 0xFFFFFFFF
	lea ecx,[esp+0x20]
	test eax,eax
	je Block7

 Block6:
	call ZArray<unsigned short>::InsertBefore
	mov cx,word ptr [esp+0x18]
	mov word ptr [eax],cx
	jmp Block8

 Block7:
	call ZArray<unsigned short>::InsertBefore
	mov dx,word ptr [esp+0x18]
	mov word ptr [eax],dx

 Block8:
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x24]
	push ecx

 Block9:
	mov ecx,esi
	call ZMap<long, ZArray<unsigned short>, long>::Insert
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	call ZArray<unsigned short>::RemoveAll

 Block10:
	mov eax,1
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 0x10
}
}
// CQuestMan::~CQuestMan
_SUB_EXCEPTION_HANDLER(2BB040)
__SUB_CLASS_THIS0(002BB040, __thiscall, 57100,  CQuestMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2BB040
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
	int 3// TODO: 	mov dword ptr [esi],offset CQuestMan::`vftable'
	lea ecx,[esi+0x334]
	mov dword ptr [esp+0x14],0x28
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, CQuestMan::RankString, unsigned short>::`vftable'
	call ZMap<unsigned short, CQuestMan::RankString, unsigned short>::RemoveAll
	lea ecx,[esi+0x31C]
	mov byte ptr [esp+0x14],0x27
	int 3// TODO: 	mov dword ptr [ecx],offset ZMAP_US_LONG_VTABLE
	call ZMap<unsigned short, long, unsigned short>::RemoveAll
	lea ecx,[esi+0x304]
	mov byte ptr [esp+0x14],0x26
	int 3// TODO: 	mov dword ptr [ecx],offset ZMAP_US_LONG_VTABLE
	call ZMap<unsigned short, long, unsigned short>::RemoveAll
	lea ecx,[esi+0x2EC]
	mov byte ptr [esp+0x14],0x25
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, ZArray<CQuestMan::Rank>, unsigned short>::`vftable'
	call ZMap<unsigned short, ZArray<CQuestMan::Rank>, unsigned short>::RemoveAll
	lea ecx,[esi+0x2D4]
	mov byte ptr [esp+0x14],0x24
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<unsigned short>::`vftable'
	call ZList<unsigned short>::RemoveAll
	lea ecx,[esi+0x2BC]
	mov byte ptr [esp+0x14],0x23
	int 3// TODO: 	mov dword ptr [ecx],offset ZMAP_US_LONG_VTABLE
	call ZMap<unsigned short, long, unsigned short>::RemoveAll
	lea ecx,[esi+0x2A8]
	mov byte ptr [esp+0x14],0x22
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<unsigned short>::`vftable'
	call ZList<unsigned short>::RemoveAll
	lea ecx,[esi+0x294]
	mov byte ptr [esp+0x14],0x21
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<unsigned short>::`vftable'
	call ZList<unsigned short>::RemoveAll
	lea ecx,[esi+0x290]
	mov byte ptr [esp+0x14],0x20
	call ZArray<unsigned short>::RemoveAll
	lea ecx,[esi+0x278]
	mov byte ptr [esp+0x14],0x1F
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, int, unsigned long>::`vftable'
	call ZMap<unsigned long, int, unsigned long>::RemoveAll
	lea ecx,[esi+0x260]
	mov byte ptr [esp+0x14],0x1E
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, int, long>::`vftable'
	call ZMap<long, int, long>::RemoveAll
	lea ecx,[esi+0x248]
	mov byte ptr [esp+0x14],0x1D
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZArray<unsigned short>, unsigned long>::`vftable'
	call ZMap<unsigned long, ZArray<unsigned short>, unsigned long>::RemoveAll
	lea ecx,[esi+0x230]
	mov byte ptr [esp+0x14],0x1C
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZArray<unsigned short>, long>::`vftable'
	call ZMap<long, ZArray<unsigned short>, long>::RemoveAll
	lea ecx,[esi+0x218]
	mov byte ptr [esp+0x14],0x1B
	int 3// TODO: 	mov dword ptr [ecx],offset ZMAP_US_LONG_VTABLE
	call ZMap<unsigned short, long, unsigned short>::RemoveAll
	lea ecx,[esi+0x200]
	mov byte ptr [esp+0x14],0x1A
	int 3// TODO: 	mov dword ptr [ecx],offset ZMAP_US_LONG_VTABLE
	call ZMap<unsigned short, long, unsigned short>::RemoveAll
	lea ecx,[esi+0x1E8]
	mov byte ptr [esp+0x14],0x19
	int 3// TODO: 	mov dword ptr [ecx],offset ZMAP_US_LONG_VTABLE
	call ZMap<unsigned short, long, unsigned short>::RemoveAll
	lea ecx,[esi+0x1D0]
	mov byte ptr [esp+0x14],0x18
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, int, unsigned short>::`vftable'
	call ZMap<unsigned short, int, unsigned short>::RemoveAll
	lea ecx,[esi+0x1B8]
	mov byte ptr [esp+0x14],0x17
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, int, unsigned short>::`vftable'
	call ZMap<unsigned short, int, unsigned short>::RemoveAll
	lea ecx,[esi+0x1A0]
	mov byte ptr [esp+0x14],0x16
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, int, unsigned short>::`vftable'
	call ZMap<unsigned short, int, unsigned short>::RemoveAll
	lea ecx,[esi+0x188]
	mov byte ptr [esp+0x14],0x15
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, int, unsigned short>::`vftable'
	call ZMap<unsigned short, int, unsigned short>::RemoveAll
	lea ecx,[esi+0x170]
	mov byte ptr [esp+0x14],0x14
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, int, unsigned short>::`vftable'
	call ZMap<unsigned short, int, unsigned short>::RemoveAll
	lea ecx,[esi+0x158]
	mov byte ptr [esp+0x14],0x13
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, ZArray<unsigned short>, unsigned short>::`vftable'
	call ZMap<unsigned short, ZArray<unsigned short>, unsigned short>::RemoveAll
	lea ecx,[esi+0x154]
	mov byte ptr [esp+0x14],0x12
	call ZArray<MODQUESTTIME>::RemoveAll
	lea ecx,[esi+0x13C]
	mov byte ptr [esp+0x14],0x11
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, ZXString<char>, unsigned short>::`vftable'
	call ZMap<unsigned short, ZXString<char>, unsigned short>::RemoveAll
	lea ecx,[esi+0x124]
	mov byte ptr [esp+0x14],0x10
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, unsigned short, ZXString<char>>::`vftable'
	call ZMap<ZXString<char>, unsigned short, ZXString<char>>::RemoveAll
	lea ecx,[esi+0x10C]
	mov byte ptr [esp+0x14],0xF
	int 3// TODO: 	mov dword ptr [ecx],offset ZMAP_US_LONG_VTABLE
	call ZMap<unsigned short, long, unsigned short>::RemoveAll
	lea ecx,[esi+0xF4]
	mov byte ptr [esp+0x14],0xE
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, ZXString<char>, unsigned short>::`vftable'
	call ZMap<unsigned short, ZXString<char>, unsigned short>::RemoveAll
	lea ecx,[esi+0xF0]
	mov byte ptr [esp+0x14],0xD
	call ZArray<unsigned short>::RemoveAll
	lea ecx,[esi+0xEC]
	mov byte ptr [esp+0x14],0xC
	call ZArray<unsigned short>::RemoveAll
	lea ecx,[esi+0xD4]
	mov byte ptr [esp+0x14],0xB
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZArray<unsigned short>, long>::`vftable'
	call ZMap<long, ZArray<unsigned short>, long>::RemoveAll
	lea ecx,[esi+0xBC]
	mov byte ptr [esp+0x14],0xA
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZArray<unsigned short>, long>::`vftable'
	call ZMap<long, ZArray<unsigned short>, long>::RemoveAll
	lea ecx,[esi+0xA4]
	mov byte ptr [esp+0x14],9
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZArray<unsigned short>, unsigned long>::`vftable'
	call ZMap<unsigned long, ZArray<unsigned short>, unsigned long>::RemoveAll
	lea ecx,[esi+0xA0]
	mov byte ptr [esp+0x14],8
	call ZArray<unsigned short>::RemoveAll
	lea ecx,[esi+0x9C]
	mov byte ptr [esp+0x14],7
	call ZArray<ZXString<char>>::RemoveAll
	lea ecx,[esi+0x98]
	mov byte ptr [esp+0x14],6
	call ZArray<unsigned short>::RemoveAll
	lea ecx,[esi+0x80]
	mov byte ptr [esp+0x14],5
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, ZRef<QuestDemand>, unsigned short>::`vftable'
	call ZMap<unsigned short, ZRef<QuestDemand>, unsigned short>::RemoveAll
	lea ecx,[esi+0x68]
	mov byte ptr [esp+0x14],4
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, ZRef<QuestDemand>, unsigned short>::`vftable'
	call ZMap<unsigned short, ZRef<QuestDemand>, unsigned short>::RemoveAll
	lea ecx,[esi+0x4C]
	mov byte ptr [esp+0x14],3
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, int, unsigned short>::`vftable'
	call ZMap<unsigned short, int, unsigned short>::RemoveAll
	lea ecx,[esi+0x34]
	mov byte ptr [esp+0x14],2
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, ZXString<char>, unsigned short>::`vftable'
	call ZMap<unsigned short, ZXString<char>, unsigned short>::RemoveAll
	lea ecx,[esi+0x1C]
	mov byte ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned short, ZXString<char>, unsigned short>::`vftable'
	call ZMap<unsigned short, ZXString<char>, unsigned short>::RemoveAll
	lea ecx,[esi+4]
	mov byte ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, ZArray<unsigned short>, ZXString<char>>::`vftable'
	call ZMap<ZXString<char>, ZArray<unsigned short>, ZXString<char>>::RemoveAll
	mov dword ptr [TSingleton<CQuestMan>::ms_pInstance],0
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CQuestMan::LoadDemand
_SUB_EXCEPTION_HANDLER(2C3D60)
__SUB_CLASS_THIS0(002C3D60, __thiscall, 57101,  CQuestMan, int32_t) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x78]
	sub esp,0x78
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2C3D60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x74],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x68],ecx
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x10]
	push eax
	call edi
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor esi,esi
	add esp,8
	cmp eax,esi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp+0x20]
	push edx
	mov dword ptr [ebp-4],esi
	call edi
	lea eax,[ebp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push esi
	push esi
	lea ecx,[ebp+0x10]
	push ecx
	lea edx,[ebp+0x20]
	push edx
	push ecx
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push offset _S_ETCQUESTCATEGORY
	mov byte ptr [ebp-4],1
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[ebp-0x2C]
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x64]
	mov dword ptr [ebp+0x64],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov edi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x2C],di
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	cmp eax,esi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp+0x20],di
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	cmp eax,esi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x10],di
	jne Block20

 Block18:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	cmp eax,esi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov ebx,dword ptr [ebp+0x64]
	cmp ebx,esi
	sete al
	test al,al
	je Block25

 Block22:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp ebx,esi
	je Block24

 Block23:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block24:
	xor eax,eax
	jmp Block128

 Block25:
	xor edi,edi

 Block26:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],8
	cmp ebx,esi
	je Block5

 Block27:
	lea eax,[ebp+0x3C]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],9
	jne Block29

 Block28:
	mov eax,dword ptr [eax+8]
	jmp Block30

 Block29:
	mov eax,offset _S___3

 Block30:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x70]
	mov dword ptr [ebp+0x70],esi
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp+0x3C],8
	mov byte ptr [ebp-4],0xB
	jne Block33

 Block31:
	mov eax,dword ptr [ebp+0x44]
	xor ecx,ecx
	mov word ptr [ebp+0x3C],cx
	cmp eax,esi
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[ebp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov esi,dword ptr [ebp+0x70]
	test esi,esi
	je Block37

 Block35:
	cmp byte ptr [esi],0
	je Block37

 Block36:
	mov ecx,dword ptr [ebp+0x68]
	lea eax,[ebp+0x70]
	push eax
	push 0xFFFFFFFF
	add ecx,0x9C
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	add esi,0xFFFFFFF4
	push esi
	mov byte ptr [ebp-4],7
	call ZXString<char>::_Release
	add esp,4
	inc edi
	xor esi,esi
	jmp Block26

 Block37:
	mov byte ptr [ebp-4],7
	test esi,esi
	je Block39

 Block38:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block39:
	mov ecx,dword ptr [ebp+0x68]
	mov eax,dword ptr [ecx+0x9C]
	test eax,eax
	je Block41

 Block40:
	cmp dword ptr [eax-4],0
	jne Block42

 Block41:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call eax
	xor eax,eax
	jmp Block128

 Block42:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x3C]
	push ecx
	call edi
	lea edx,[ebp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	xor esi,esi
	add esp,8
	cmp eax,esi
	jge Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	lea eax,[ebp]
	push eax
	mov byte ptr [ebp-4],0xC
	call edi
	lea ecx,[ebp]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	push esi
	push esi
	lea edx,[ebp+0x3C]
	push edx
	lea eax,[ebp]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x6C],esp
	push 0xCB7
	mov bl,0xD
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0xE
	cmp dword ptr [_D_G_RM],esi
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	lea edx,[ebp-0x3C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x70]
	mov dword ptr [ebp+0x70],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block51

 Block49:
	cmp eax,0x80004002
	je Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	mov ebx,8
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x3C],bx
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	cmp eax,esi
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp],bx
	jne Block58

 Block56:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	cmp eax,esi
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp+0x3C],bx
	jne Block62

 Block60:
	mov eax,dword ptr [ebp+0x44]
	xor ecx,ecx
	mov word ptr [ebp+0x3C],cx
	cmp eax,esi
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[ebp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov ecx,dword ptr [ebp+0x70]
	cmp ecx,esi
	jne Block65

 Block64:
	push 0x80004003
	call _com_issue_error

 Block65:
	lea eax,[ebp+0x38]
	push eax
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],0x14
	mov dword ptr [ebp+0x60],esi
	mov dword ptr [ebp+0x6C],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block67

 Block66:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block67:
	lea ecx,[ebp+0x60]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,esi
	jge Block70

 Block68:
	cmp eax,0x80004002
	je Block70

 Block69:
	push eax
	call _com_issue_error

 Block70:
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x16
	cmp eax,esi
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block72:
	lea eax,[ebp+0x50]
	push eax
	call edi
	mov byte ptr [ebp-4],0x17
	mov dword ptr [ebp+0x30],esi
	mov edi,edi

 Block73:
	mov esi,dword ptr [ebp+0x60]
	test esi,esi
	je Block5

 Block74:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp+0x30]
	push edx
	lea eax,[ebp+0x50]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block123

 Block75:
	lea edx,[ebp+0x50]
	push edx
	lea eax,[ebp+0x4C]
	push eax
	call DetachBSTR
	add esp,8
	mov edi,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x18
	test edi,edi
	je Block81

 Block76:
	cmp dword ptr [edi+4],0
	jne Block80

 Block77:
	mov ebx,dword ptr [edi]
	test ebx,ebx
	jne Block79

 Block78:
	xor esi,esi
	mov dword ptr [edi+4],esi
	mov eax,esi
	jmp Block82

 Block79:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call WideCharToMultiByte
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	push 0
	push 0
	push 0x3FFFFFFF
	mov esi,eax
	push esi
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call WideCharToMultiByte
	mov dword ptr [edi+4],esi

 Block80:
	mov eax,dword ptr [edi+4]
	jmp Block82

 Block81:
	xor eax,eax

 Block82:
	push eax
	call _atoi
	mov ecx,dword ptr [ebp+0x68]
	add esp,4
	push 0xFFFFFFFF
	add ecx,0xA0
	movzx ebx,ax
	call ZArray<unsigned short>::InsertBefore
	push 0
	push 0
	push ecx
	mov word ptr [eax],bx
	mov eax,esp
	mov dword ptr [ebp+0x6C],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block84

 Block83:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block84:
	mov ecx,dword ptr [ebp+0x70]
	lea edx,[ebp-0x1C]
	mov byte ptr [ebp-4],0x19
	push edx
	mov byte ptr [ebp-4],0x18
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1A
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x6C],esi
	test eax,eax
	je Block87

 Block85:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x34]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x34]
	mov esi,ecx
	mov dword ptr [ebp+0x6C],esi
	test eax,eax
	jge Block87

 Block86:
	cmp eax,0x80004002
	jne Block1

 Block87:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x1C
	jne Block90

 Block88:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block91:
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x40],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block93

 Block92:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block93:
	mov ecx,dword ptr [ebp+0x68]
	push ebx
	call CQuestMan::RegisterDemand
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block109

 Block94:
	test esi,esi
	je Block96

 Block95:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block96:
	mov byte ptr [ebp-4],0x17
	test edi,edi
	je Block104

 Block97:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block103

 Block98:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block100

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block100:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block102

 Block101:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block102:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block103:
	mov dword ptr [ebp+0x4C],0

 Block104:
	cmp word ptr [ebp+0x50],8
	jne Block107

 Block105:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block73

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block107:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block73

 Block108:
	jmp Block1

 Block109:
	test esi,esi
	je Block111

 Block110:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block111:
	mov byte ptr [ebp-4],0x17
	test edi,edi
	je Block118

 Block112:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block118

 Block113:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block115

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block115:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block117

 Block116:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block117:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block118:
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x16
	jne Block121

 Block119:
	mov eax,dword ptr [ebp+0x58]
	xor edx,edx
	mov word ptr [ebp+0x50],dx
	test eax,eax
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block122:
	mov eax,dword ptr [ebp+0x60]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0x13
	call edx
	mov eax,dword ptr [ebp+0x70]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],7
	call edx
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	xor eax,eax
	jmp Block128

 Block123:
	mov edi,dword ptr [ebp+0x68]
	mov ecx,edi
	call CQuestMan::LoadQuestInfo
	mov ecx,edi
	call CQuestMan::LoadQuestExpByLevelInfo
	mov ecx,edi
	call CQuestMan::LoadQuestPerformByDayInfo
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x16
	jne Block126

 Block124:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block127:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0x13
	call eax
	mov eax,dword ptr [ebp+0x70]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],7
	call edx
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	mov eax,1

 Block128:
	lea esp,[ebp-0x50]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x74]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x78
	mov esp,ebp
	pop ebp
	ret
}
}
// CQuestMan::RegisterDemand
_SUB_EXCEPTION_HANDLER(2C0020)
__SUB_CLASS_THIS(002C0020, __thiscall, 57160,  CQuestMan, int32_t, uint16_t, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2C0020
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x590
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x34],ecx
	xor eax,eax
	mov dword ptr [ebp-4],eax
	mov dword ptr [ebp+0x2C],eax
	mov edi,edi

 Block1:
	push 0
	call ZRefCounted_AllocHelper<ZRefCountedDummy<QuestDemand>>::call
	lea esi,[eax+0x10]
	add esp,4
	mov dword ptr [eax+4],1
	mov dword ptr [ebp+0x44],esi
	mov eax,0x20
	mov byte ptr [ebp-4],1
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x2C]
	push eax
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],2
	test ecx,ecx
	je Block641

 Block2:
	lea edx,[ebp-0x5C]
	push edx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp+0x58],ebx
	test eax,eax
	je Block5

 Block3:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x18]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x18]
	mov dword ptr [ebp+0x58],ebx
	test eax,eax
	jge Block5

 Block4:
	cmp eax,0x80004002
	jne Block642

 Block5:
	mov edi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x5C],di
	jne Block8

 Block6:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea edx,[ebp-0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	test ebx,ebx
	sete al
	test al,al
	jne Block643

 Block10:
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0xCBB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],6
	test ebx,ebx
	je Block641

 Block11:
	lea ecx,[ebp-0x52C]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],7
	call get_int32
	add esp,8
	mov dword ptr [esi],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x52C],di
	jne Block14

 Block12:
	mov eax,dword ptr [ebp-0x524]
	xor edx,edx
	mov word ptr [ebp-0x52C],dx
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea eax,[ebp-0x52C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block15:
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xCBC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x7C]
	mov byte ptr [ebp-4],8
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],9
	call get_int32
	add esp,8
	mov dword ptr [esi+4],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x7C],di
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [ebp-0x7C],ax
	mov eax,dword ptr [ebp-0x74]
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[ebp-0x7C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xDD0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x30C]
	mov byte ptr [ebp-4],0xA
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xB
	call get_int32
	add esp,8
	mov dword ptr [esi+8],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x30C],di
	jne Block22

 Block20:
	mov eax,dword ptr [ebp-0x304]
	xor ecx,ecx
	mov word ptr [ebp-0x30C],cx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[ebp-0x30C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	push 0x1E
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0xDD1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x9C]
	push ecx
	mov byte ptr [ebp-4],0xC
	mov ecx,ebx
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD
	call get_int32
	add esp,8
	mov dword ptr [esi+0xC],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x9C],di
	jne Block26

 Block24:
	mov eax,dword ptr [ebp-0x94]
	xor edx,edx
	mov word ptr [ebp-0x9C],dx
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[ebp-0x9C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block27:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xDCE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x44C]
	mov byte ptr [ebp-4],0xE
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xF
	call get_int32
	add esp,8
	mov dword ptr [esi+0x10],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x44C],di
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [ebp-0x44C],ax
	mov eax,dword ptr [ebp-0x444]
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[ebp-0x44C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	push 0x7530
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xDCF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0xBC]
	mov byte ptr [ebp-4],0x10
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x11
	call get_int32
	add esp,8
	mov dword ptr [esi+0x14],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0xBC],di
	jne Block34

 Block32:
	mov eax,dword ptr [ebp-0xB4]
	xor ecx,ecx
	mov word ptr [ebp-0xBC],cx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[ebp-0xBC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_PETAUTOSPEAKINGL
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x32C]
	mov byte ptr [ebp-4],0x12
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x13
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esi+0xC4],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x32C],di
	jne Block38

 Block36:
	mov eax,dword ptr [ebp-0x324]
	xor ecx,ecx
	mov word ptr [ebp-0x32C],cx
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea edx,[ebp-0x32C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block39:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_PETRECALLLIMIT
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0xDC]
	mov byte ptr [ebp-4],0x14
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x15
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esi+0xC0],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0xDC],di
	jne Block42

 Block40:
	mov eax,dword ptr [ebp-0xD4]
	xor ecx,ecx
	mov word ptr [ebp-0xDC],cx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea edx,[ebp-0xDC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x59B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x4EC]
	push ecx
	mov byte ptr [ebp-4],0x16
	mov ecx,ebx
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x17
	call get_int32
	add esp,8
	mov dword ptr [esi+0x18],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x4EC],di
	jne Block46

 Block44:
	mov eax,dword ptr [ebp-0x4E4]
	xor edx,edx
	mov word ptr [ebp-0x4EC],dx
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea eax,[ebp-0x4EC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block47:
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_STARTSCRIPT
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0xFC]
	push ecx
	mov byte ptr [ebp-4],0x18
	mov ecx,ebx
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0x19
	cmp word ptr [eax],di
	jne Block49

 Block48:
	mov eax,dword ptr [eax+8]
	jmp Block50

 Block49:
	mov eax,offset _S___3

 Block50:
	push 0xFFFFFFFF
	lea ecx,[esi+0x98]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0xFC],di
	jne Block53

 Block51:
	mov eax,dword ptr [ebp-0xF4]
	xor edx,edx
	mov word ptr [ebp-0xFC],dx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea eax,[ebp-0xFC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block54:
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_ENDSCRIPT
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x34C]
	push ecx
	mov byte ptr [ebp-4],0x1A
	mov ecx,ebx
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [eax],di
	jne Block56

 Block55:
	mov eax,dword ptr [eax+8]
	jmp Block57

 Block56:
	mov eax,offset _S___3

 Block57:
	push 0xFFFFFFFF
	lea ecx,[esi+0x9C]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x34C],di
	jne Block60

 Block58:
	mov eax,dword ptr [ebp-0x344]
	xor edx,edx
	mov word ptr [ebp-0x34C],dx
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea eax,[ebp-0x34C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block61:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x105B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x11C]
	mov byte ptr [ebp-4],0x1C
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1D
	call get_int32
	add esp,8
	mov dword ptr [esi+0xCC],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x11C],di
	jne Block64

 Block62:
	xor eax,eax
	mov word ptr [ebp-0x11C],ax
	mov eax,dword ptr [ebp-0x114]
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea ecx,[ebp-0x11C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_SUBJOBFLAGS
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x46C]
	mov byte ptr [ebp-4],0x1E
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1F
	call get_int32
	add esp,8
	mov dword ptr [esi+0x6C],eax
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x46C],di
	jne Block68

 Block66:
	xor eax,eax
	mov word ptr [ebp-0x46C],ax
	mov eax,dword ptr [ebp-0x464]
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea ecx,[ebp-0x46C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x105C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x13C]
	mov byte ptr [ebp-4],0x20
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0x21
	cmp word ptr [eax],di
	jne Block71

 Block70:
	mov eax,dword ptr [eax+8]
	jmp Block72

 Block71:
	mov eax,offset _S___3

 Block72:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x20]
	mov dword ptr [ebp+0x20],0
	call ZXString<char>::AssignWideStr
	mov byte ptr [ebp-4],0x23
	cmp word ptr [ebp-0x13C],di
	jne Block75

 Block73:
	mov eax,dword ptr [ebp-0x134]
	xor ecx,ecx
	mov word ptr [ebp-0x13C],cx
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea edx,[ebp-0x13C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov eax,dword ptr [ebp+0x20]
	test eax,eax
	je Block83

 Block77:
	cmp byte ptr [eax],0
	je Block83

 Block78:
	xor edi,edi
	mov dword ptr [ebp+0x38],edi
	lea ecx,[ebp+0x38]
	push ecx
	push offset _S___37
	push eax
	mov byte ptr [ebp-4],0x24
	call Util::StrSplit
	add esp,0xC
	lea ecx,[ecx]

 Block79:
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block82

 Block80:
	cmp edi,dword ptr [eax-4]
	jae Block82

 Block81:
	mov eax,dword ptr [eax+edi*4]
	push eax
	call _atoi
	add esp,4
	push 0xFFFFFFFF
	lea ecx,[esi+0xD0]
	mov ebx,eax
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp+0x58]
	inc edi
	jmp Block79

 Block82:
	lea ecx,[ebp+0x38]
	mov byte ptr [ebp-4],0x23
	call ZArray<ZXString<char>>::RemoveAll
	mov edi,8

 Block83:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x105D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x36C]
	mov byte ptr [ebp-4],0x25
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x23
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0x26
	cmp word ptr [eax],di
	jne Block85

 Block84:
	mov ebx,dword ptr [eax+8]
	jmp Block86

 Block85:
	mov ebx,offset _S___3

 Block86:
	xor edi,edi
	mov dword ptr [ebp+0x24],edi
	test ebx,ebx
	je Block88

 Block87:
	push edi
	push edi
	push edi
	push edi
	push 0xFFFFFFFF
	push ebx
	push edi
	push edi
	call WideCharToMultiByte
	mov edi,eax
	push 0
	dec edi
	push edi
	lea ecx,[ebp+0x24]
	call ZXString<char>::GetBuffer
	push 0
	push 0
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call WideCharToMultiByte
	push edi
	lea ecx,[ebp+0x24]
	call ZXString<char>::ReleaseBuffer
	mov edi,dword ptr [ebp+0x24]

 Block88:
	mov ebx,8
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp-0x36C],bx
	jne Block91

 Block89:
	mov eax,dword ptr [ebp-0x364]
	xor ecx,ecx
	mov word ptr [ebp-0x36C],cx
	test eax,eax
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea edx,[ebp-0x36C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block92:
	test edi,edi
	je Block99

 Block93:
	cmp byte ptr [edi],0
	je Block99

 Block94:
	mov dword ptr [ebp+0x38],0
	lea eax,[ebp+0x38]
	push eax
	push offset _S___37
	push edi
	mov byte ptr [ebp-4],0x29
	call Util::StrSplit
	add esp,0xC
	xor edi,edi

 Block95:
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block98

 Block96:
	cmp edi,dword ptr [eax-4]
	jae Block98

 Block97:
	mov eax,dword ptr [eax+edi*4]
	push eax
	call _atoi
	add esp,4
	push 0xFFFFFFFF
	lea ecx,[esi+0xD4]
	mov ebx,eax
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],ebx
	inc edi
	jmp Block95

 Block98:
	lea ecx,[ebp+0x38]
	mov byte ptr [ebp-4],0x28
	call ZArray<ZXString<char>>::RemoveAll
	mov ebx,8

 Block99:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xB16
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x58]
	lea edx,[ebp-0x15C]
	mov byte ptr [ebp-4],0x2A
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2B
	call get_int32
	add esp,8
	mov dword ptr [esi+0xD8],eax
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp-0x15C],bx
	jne Block102

 Block100:
	xor eax,eax
	mov word ptr [ebp-0x15C],ax
	mov eax,dword ptr [ebp-0x154]
	test eax,eax
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea ecx,[ebp-0x15C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block103:
	cmp dword ptr [esi+0x18],0
	lea eax,[esi+0x18]
	je Block113

 Block104:
	mov dword ptr [ebp+0x48],0
	mov ecx,dword ptr [ebp+0x34]
	lea edx,[ebp+0x48]
	push edx
	add ecx,0xA4
	push eax
	mov byte ptr [ebp-4],0x2C
	mov dword ptr [ebp+0x64],ecx
	call ZMap<unsigned long, ZArray<unsigned short>, unsigned long>::GetAt
	lea ecx,[ebp+0x48]
	test eax,eax
	je Block111

 Block105:
	xor edi,edi
	call ZArray<unsigned short>::GetCount
	mov ecx,dword ptr [ebp+0x48]
	mov ebx,dword ptr [ebp+0x74]
	test eax,eax
	jbe Block108

 Block106:
	cmp word ptr [ecx+edi*2],bx
	je Block108

 Block107:
	inc edi
	cmp edi,eax
	jb Block106

 Block108:
	test ecx,ecx
	je Block110

 Block109:
	cmp edi,dword ptr [ecx-4]
	jb Block112

 Block110:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x48]
	call ZArray<unsigned short>::InsertBefore
	mov word ptr [eax],bx
	jmp Block112

 Block111:
	push 0xFFFFFFFF
	call ZArray<unsigned short>::InsertBefore
	mov cx,word ptr [ebp+0x74]
	mov word ptr [eax],cx

 Block112:
	mov ecx,dword ptr [ebp+0x64]
	lea edx,[ebp+0x48]
	push edx
	lea eax,[esi+0x18]
	push eax
	call ZMap<unsigned long, ZArray<unsigned short>, unsigned long>::Insert
	lea ecx,[ebp+0x48]
	mov byte ptr [ebp-4],0x28
	call ZArray<unsigned short>::RemoveAll
	mov edi,dword ptr [ebp+0x58]
	mov ebx,8

 Block113:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0xCB9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x56C]
	push ecx
	mov byte ptr [ebp-4],0x2D
	mov ecx,edi
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2E
	call get_int32
	add esp,8
	mov dword ptr [esi+0x1C],eax
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp-0x56C],bx
	jne Block116

 Block114:
	mov eax,dword ptr [ebp-0x564]
	xor edx,edx
	mov word ptr [ebp-0x56C],dx
	test eax,eax
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea eax,[ebp-0x56C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block117:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xCBA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x17C]
	mov byte ptr [ebp-4],0x2F
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x30
	call get_int32
	add esp,8
	mov dword ptr [esi+0x20],eax
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp-0x17C],bx
	jne Block120

 Block118:
	xor eax,eax
	mov word ptr [ebp-0x17C],ax
	mov eax,dword ptr [ebp-0x174]
	test eax,eax
	je Block121

 Block119:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block120:
	lea ecx,[ebp-0x17C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block121:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xCBD
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x38C]
	mov byte ptr [ebp-4],0x31
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x32
	call get_int32
	add esp,8
	mov dword ptr [esi+0x24],eax
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp-0x38C],bx
	jne Block124

 Block122:
	mov eax,dword ptr [ebp-0x384]
	xor ecx,ecx
	mov word ptr [ebp-0x38C],cx
	test eax,eax
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea edx,[ebp-0x38C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block125:
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1ABA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x19C]
	push ecx
	mov byte ptr [ebp-4],0x33
	mov ecx,edi
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x34
	call get_int32
	add esp,8
	mov dword ptr [esi+0x30],eax
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp-0x19C],bx
	jne Block128

 Block126:
	mov eax,dword ptr [ebp-0x194]
	xor edx,edx
	mov word ptr [ebp-0x19C],dx
	test eax,eax
	je Block129

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block128:
	lea eax,[ebp-0x19C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block129:
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1ADB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x48C]
	mov byte ptr [ebp-4],0x35
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0x36
	cmp word ptr [eax],bx
	jne Block131

 Block130:
	mov ebx,dword ptr [eax+8]
	jmp Block132

 Block131:
	mov ebx,offset _S___3

 Block132:
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [esi],0
	test ebx,ebx
	je Block134

 Block133:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call WideCharToMultiByte
	mov edi,eax
	push 0
	dec edi
	push edi
	mov ecx,esi
	call ZXString<char>::GetBuffer
	push 0
	push 0
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call WideCharToMultiByte
	push edi
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer

 Block134:
	call GetStringToFileTime
	mov ecx,dword ptr [ebp+0x44]
	add esp,8
	mov dword ptr [ecx+0x38],eax
	mov dword ptr [ecx+0x3C],edx
	cmp word ptr [ebp-0x48C],8
	mov byte ptr [ebp-4],0x28
	jne Block137

 Block135:
	xor eax,eax
	mov word ptr [ebp-0x48C],ax
	mov eax,dword ptr [ebp-0x484]
	test eax,eax
	je Block138

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block137:
	lea ecx,[ebp-0x48C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block138:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x7A1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x58]
	lea eax,[ebp-0x1BC]
	mov byte ptr [ebp-4],0x37
	push eax
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x38
	jne Block140

 Block139:
	mov ebx,dword ptr [eax+8]
	jmp Block141

 Block140:
	mov ebx,offset _S___3

 Block141:
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [esi],0
	test ebx,ebx
	je Block143

 Block142:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call WideCharToMultiByte
	mov edi,eax
	push 0
	dec edi
	push edi
	mov ecx,esi
	call ZXString<char>::GetBuffer
	push 0
	push 0
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call WideCharToMultiByte
	push edi
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer

 Block143:
	call GetStringToFileTime
	mov esi,dword ptr [ebp+0x44]
	mov ebx,8
	add esp,8
	mov dword ptr [esi+0x40],eax
	mov dword ptr [esi+0x44],edx
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp-0x1BC],bx
	jne Block146

 Block144:
	mov eax,dword ptr [ebp-0x1B4]
	xor ecx,ecx
	mov word ptr [ebp-0x1BC],cx
	test eax,eax
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea edx,[ebp-0x1BC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block147:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x73D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x58]
	lea ecx,[ebp-0x3AC]
	push ecx
	mov byte ptr [ebp-4],0x39
	mov ecx,edi
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x3A
	call get_int32
	add esp,8
	mov dword ptr [esi+0xAC],eax
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp-0x3AC],bx
	jne Block150

 Block148:
	mov eax,dword ptr [ebp-0x3A4]
	xor edx,edx
	mov word ptr [ebp-0x3AC],dx
	test eax,eax
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea eax,[ebp-0x3AC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block151:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_WEEKLYREPEAT
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x1DC]
	push ecx
	mov byte ptr [ebp-4],0x3B
	mov ecx,edi
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x3C
	call get_int32
	add esp,8
	mov dword ptr [esi+0xB0],eax
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp-0x1DC],bx
	jne Block154

 Block152:
	mov eax,dword ptr [ebp-0x1D4]
	xor edx,edx
	mov word ptr [ebp-0x1DC],dx
	test eax,eax
	je Block155

 Block153:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block155

 Block154:
	lea eax,[ebp-0x1DC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block155:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x10DD
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x50C]
	mov byte ptr [ebp-4],0x3D
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x3E
	call get_int32
	add esp,8
	mov dword ptr [esi+0x64],eax
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp-0x50C],bx
	jne Block158

 Block156:
	xor eax,eax
	mov word ptr [ebp-0x50C],ax
	mov eax,dword ptr [ebp-0x504]
	test eax,eax
	je Block159

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block158:
	lea ecx,[ebp-0x50C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block159:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xCB8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x1FC]
	mov byte ptr [ebp-4],0x3F
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x40
	call get_int32
	add esp,8
	mov dword ptr [esi+0x34],eax
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp-0x1FC],bx
	jne Block162

 Block160:
	mov eax,dword ptr [ebp-0x1F4]
	xor ecx,ecx
	mov word ptr [ebp-0x1FC],cx
	test eax,eax
	je Block163

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block162:
	lea edx,[ebp-0x1FC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block163:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_DAYOFWEEK
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x58]
	lea eax,[ebp-0x3CC]
	mov byte ptr [ebp-4],0x41
	push eax
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x42
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x38],edi
	test eax,eax
	je Block166

 Block164:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x14]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x14]
	mov edi,ecx
	mov dword ptr [ebp+0x38],edi
	test eax,eax
	jge Block166

 Block165:
	cmp eax,0x80004002
	jne Block642

 Block166:
	mov ebx,8
	mov byte ptr [ebp-4],0x44
	cmp word ptr [ebp-0x3CC],bx
	jne Block169

 Block167:
	mov eax,dword ptr [ebp-0x3C4]
	xor edx,edx
	mov word ptr [ebp-0x3CC],dx
	test eax,eax
	je Block170

 Block168:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block170

 Block169:
	lea eax,[ebp-0x3CC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block170:
	test edi,edi
	je Block199

 Block171:
	mov esi,dword ptr [ebp+0x44]
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_SUN
	mov dword ptr [esi+0xC8],0
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x21C]
	push ecx
	mov byte ptr [ebp-4],0x45
	mov ecx,edi
	mov byte ptr [ebp-4],0x44
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x46
	call get_int32
	or dword ptr [esi+0xC8],eax
	add esp,8
	mov byte ptr [ebp-4],0x44
	cmp word ptr [ebp-0x21C],bx
	jne Block174

 Block172:
	mov eax,dword ptr [ebp-0x214]
	xor edx,edx
	mov word ptr [ebp-0x21C],dx
	test eax,eax
	je Block175

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block175

 Block174:
	lea eax,[ebp-0x21C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block175:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_MON__1
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x4AC]
	push ecx
	mov byte ptr [ebp-4],0x47
	mov ecx,edi
	mov byte ptr [ebp-4],0x44
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x48
	call get_int32
	add eax,eax
	or dword ptr [esi+0xC8],eax
	add esp,8
	mov byte ptr [ebp-4],0x44
	cmp word ptr [ebp-0x4AC],bx
	jne Block178

 Block176:
	mov eax,dword ptr [ebp-0x4A4]
	xor edx,edx
	mov word ptr [ebp-0x4AC],dx
	test eax,eax
	je Block179

 Block177:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block179

 Block178:
	lea eax,[ebp-0x4AC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block179:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_TUE
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x1C]
	push ecx
	mov byte ptr [ebp-4],0x49
	mov ecx,edi
	mov byte ptr [ebp-4],0x44
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x4A
	call get_int32
	add eax,eax
	add eax,eax
	or dword ptr [esi+0xC8],eax
	add esp,8
	mov byte ptr [ebp-4],0x44
	cmp word ptr [ebp-0x1C],bx
	jne Block182

 Block180:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block183

 Block181:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block183

 Block182:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block183:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_WED
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x23C]
	push ecx
	mov byte ptr [ebp-4],0x4B
	mov ecx,edi
	mov byte ptr [ebp-4],0x44
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x4C
	call get_int32
	add eax,eax
	add eax,eax
	add eax,eax
	or dword ptr [esi+0xC8],eax
	add esp,8
	mov byte ptr [ebp-4],0x44
	cmp word ptr [ebp-0x23C],bx
	jne Block186

 Block184:
	mov eax,dword ptr [ebp-0x234]
	xor edx,edx
	mov word ptr [ebp-0x23C],dx
	test eax,eax
	je Block187

 Block185:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block187

 Block186:
	lea eax,[ebp-0x23C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block187:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_THU
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x3EC]
	push ecx
	mov byte ptr [ebp-4],0x4D
	mov ecx,edi
	mov byte ptr [ebp-4],0x44
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x4E
	call get_int32
	shl eax,4
	or dword ptr [esi+0xC8],eax
	add esp,8
	mov byte ptr [ebp-4],0x44
	cmp word ptr [ebp-0x3EC],bx
	jne Block190

 Block188:
	mov eax,dword ptr [ebp-0x3E4]
	xor edx,edx
	mov word ptr [ebp-0x3EC],dx
	test eax,eax
	je Block191

 Block189:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block191

 Block190:
	lea eax,[ebp-0x3EC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block191:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_FRI
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x26C]
	push ecx
	mov byte ptr [ebp-4],0x4F
	mov ecx,edi
	mov byte ptr [ebp-4],0x44
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x50
	call get_int32
	shl eax,5
	or dword ptr [esi+0xC8],eax
	add esp,8
	mov byte ptr [ebp-4],0x44
	cmp word ptr [ebp-0x26C],bx
	jne Block194

 Block192:
	mov eax,dword ptr [ebp-0x264]
	xor edx,edx
	mov word ptr [ebp-0x26C],dx
	test eax,eax
	je Block195

 Block193:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block195

 Block194:
	lea eax,[ebp-0x26C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block195:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_SAT
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x54C]
	push ecx
	mov byte ptr [ebp-4],0x51
	mov ecx,edi
	mov byte ptr [ebp-4],0x44
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x52
	call get_int32
	shl eax,6
	or dword ptr [esi+0xC8],eax
	add esp,8
	mov byte ptr [ebp-4],0x44
	cmp word ptr [ebp-0x54C],bx
	jne Block198

 Block196:
	mov eax,dword ptr [ebp-0x544]
	xor edx,edx
	mov word ptr [ebp-0x54C],dx
	test eax,eax
	je Block200

 Block197:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block200

 Block198:
	lea eax,[ebp-0x54C]
	push eax
	call dword ptr [ZImports::_VariantClear]
	jmp Block200

 Block199:
	mov ecx,dword ptr [ebp+0x44]
	mov dword ptr [ecx+0xC8],0xFF

 Block200:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1403
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x58]
	lea eax,[ebp-0x28C]
	mov byte ptr [ebp-4],0x53
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x44
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x54
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x1C],edi
	test eax,eax
	je Block203

 Block201:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x10]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x10]
	mov edi,ecx
	mov dword ptr [ebp+0x1C],edi
	test eax,eax
	jge Block203

 Block202:
	cmp eax,0x80004002
	jne Block642

 Block203:
	mov byte ptr [ebp-4],0x56
	cmp word ptr [ebp-0x28C],bx
	jne Block206

 Block204:
	mov eax,dword ptr [ebp-0x284]
	xor edx,edx
	mov word ptr [ebp-0x28C],dx
	test eax,eax
	je Block207

 Block205:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block207

 Block206:
	lea eax,[ebp-0x28C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block207:
	test edi,edi
	je Block238

 Block208:
	mov dword ptr [ebp+0x54],0

 Block209:
	mov eax,0x20
	call __chkstk
	mov ecx,dword ptr [ebp+0x54]
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x40C]
	mov byte ptr [ebp-4],0x57
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x56
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x58
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x64],edi
	test eax,eax
	je Block212

 Block210:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0xC]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0xC]
	mov edi,ecx
	mov dword ptr [ebp+0x64],edi
	test eax,eax
	jge Block212

 Block211:
	cmp eax,0x80004002
	jne Block642

 Block212:
	mov byte ptr [ebp-4],0x5A
	cmp word ptr [ebp-0x40C],bx
	jne Block215

 Block213:
	mov eax,dword ptr [ebp-0x404]
	xor edx,edx
	mov word ptr [ebp-0x40C],dx
	test eax,eax
	je Block216

 Block214:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block216

 Block215:
	lea eax,[ebp-0x40C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block216:
	test edi,edi
	je Block237

 Block217:
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_VALUE
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x2AC]
	push ecx
	mov byte ptr [ebp-4],0x5B
	mov ecx,edi
	mov byte ptr [ebp-4],0x5A
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0x5C
	cmp word ptr [eax],bx
	jne Block219

 Block218:
	mov ebx,dword ptr [eax+8]
	jmp Block220

 Block219:
	mov ebx,offset _S___3

 Block220:
	xor esi,esi
	mov dword ptr [ebp+0x5C],esi
	test ebx,ebx
	je Block222

 Block221:
	push esi
	push esi
	push esi
	push esi
	push 0xFFFFFFFF
	push ebx
	push esi
	push esi
	call WideCharToMultiByte
	mov esi,eax
	push 0
	dec esi
	push esi
	lea ecx,[ebp+0x5C]
	call ZXString<char>::GetBuffer
	push 0
	push 0
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call WideCharToMultiByte
	push esi
	lea ecx,[ebp+0x5C]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [ebp+0x5C]

 Block222:
	cmp word ptr [ebp-0x2AC],8
	mov byte ptr [ebp-4],0x5E
	jne Block225

 Block223:
	mov eax,dword ptr [ebp-0x2A4]
	xor edx,edx
	mov word ptr [ebp-0x2AC],dx
	test eax,eax
	je Block226

 Block224:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block226

 Block225:
	lea eax,[ebp-0x2AC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block226:
	test esi,esi
	je Block228

 Block227:
	cmp byte ptr [esi],0
	jne Block230

 Block228:
	mov byte ptr [ebp-4],0x5A
	test esi,esi
	je Block236

 Block229:
	jmp Block235

 Block230:
	push 0
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_COND
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x4CC]
	mov byte ptr [ebp-4],0x5F
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x5E
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x60
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x4CC],8
	mov ebx,eax
	mov byte ptr [ebp-4],0x5E
	jne Block233

 Block231:
	mov eax,dword ptr [ebp-0x4C4]
	xor ecx,ecx
	mov word ptr [ebp-0x4CC],cx
	test eax,eax
	je Block234

 Block232:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block234

 Block233:
	lea edx,[ebp-0x4CC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block234:
	mov ecx,dword ptr [ebp+0x44]
	lea eax,[ebp+0x5C]
	push eax
	push 0xFFFFFFFF
	add ecx,0x5C
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov ecx,dword ptr [ebp+0x44]
	push 0xFFFFFFFF
	add ecx,0x60
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],ebx
	mov byte ptr [ebp-4],0x5A

 Block235:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block236:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],0x56
	call edx
	inc dword ptr [ebp+0x54]
	mov edi,dword ptr [ebp+0x1C]
	mov ebx,8
	jmp Block209

 Block237:
	mov byte ptr [ebp-4],0x56
	jmp Block260

 Block238:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x3D5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x2CC]
	push ecx
	mov byte ptr [ebp-4],0x61
	mov ecx,esi
	mov byte ptr [ebp-4],0x56
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x62
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block240

 Block239:
	cmp eax,0x80004002
	jne Block642

 Block240:
	mov byte ptr [ebp-4],0x64
	cmp word ptr [ebp-0x2CC],bx
	jne Block243

 Block241:
	mov eax,dword ptr [ebp-0x2C4]
	xor edx,edx
	mov word ptr [ebp-0x2CC],dx
	test eax,eax
	je Block244

 Block242:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block244

 Block243:
	lea eax,[ebp-0x2CC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block244:
	mov esi,dword ptr [ebp+0x60]
	test esi,esi
	je Block258

 Block245:
	xor ebx,ebx
	nop

 Block246:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x42C]
	push ecx
	mov byte ptr [ebp-4],0x65
	mov ecx,esi
	mov byte ptr [ebp-4],0x64
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x66
	jne Block248

 Block247:
	mov eax,dword ptr [eax+8]
	jmp Block249

 Block248:
	mov eax,offset _S___3

 Block249:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp+0x5C],0
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x42C],8
	mov byte ptr [ebp-4],0x68
	jne Block252

 Block250:
	mov eax,dword ptr [ebp-0x424]
	xor edx,edx
	mov word ptr [ebp-0x42C],dx
	test eax,eax
	je Block253

 Block251:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block253

 Block252:
	lea eax,[ebp-0x42C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block253:
	mov edi,dword ptr [ebp+0x5C]
	test edi,edi
	je Block256

 Block254:
	cmp byte ptr [edi],0
	je Block256

 Block255:
	lea ecx,[ebp+0x5C]
	push ecx
	mov ecx,dword ptr [ebp+0x44]
	push 0xFFFFFFFF
	add ecx,0x5C
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	add edi,0xFFFFFFF4
	push edi
	mov byte ptr [ebp-4],0x64
	call ZXString<char>::_Release
	add esp,4
	inc ebx
	jmp Block246

 Block256:
	mov byte ptr [ebp-4],0x64
	test edi,edi
	je Block258

 Block257:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block258:
	mov byte ptr [ebp-4],0x56
	test esi,esi
	je Block260

 Block259:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block260:
	cmp dword ptr [ebp+0x2C],1
	jne Block269

 Block261:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AE2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x58]
	lea edx,[ebp-0x3C]
	mov byte ptr [ebp-4],0x69
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x56
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x6A
	call get_int32
	mov ebx,dword ptr [ebp+0x44]
	mov edi,8
	add esp,8
	mov dword ptr [ebx+0x28],eax
	mov byte ptr [ebp-4],0x56
	cmp word ptr [ebp-0x3C],di
	jne Block264

 Block262:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block265

 Block263:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block265

 Block264:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block265:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AAE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x2C]
	mov byte ptr [ebp-4],0x6B
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x56
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x6C
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x2C],eax
	mov byte ptr [ebp-4],0x56
	cmp word ptr [ebp-0x2C],di
	jne Block268

 Block266:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block270

 Block267:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block270

 Block268:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]
	jmp Block270

 Block269:
	mov esi,dword ptr [ebp+0x58]
	mov ebx,dword ptr [ebp+0x44]
	mov edi,8

 Block270:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0xCB8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x4C]
	push ecx
	mov byte ptr [ebp-4],0x6D
	mov ecx,esi
	mov byte ptr [ebp-4],0x56
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x6E
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x34],eax
	mov byte ptr [ebp-4],0x56
	cmp word ptr [ebp-0x4C],di
	jne Block273

 Block271:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	test eax,eax
	je Block274

 Block272:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block274

 Block273:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block274:
	cmp dword ptr [ebx+0x34],0
	jbe Block284

 Block275:
	cmp dword ptr [ebp+0x2C],1
	jne Block284

 Block276:
	mov ecx,dword ptr [ebp+0x34]
	mov edi,dword ptr [ebp+0x74]
	xor esi,esi
	xor edx,edx
	add ecx,0xEC

 Block277:
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block282

 Block278:
	cmp edx,dword ptr [eax-4]
	jae Block282

 Block279:
	cmp word ptr [eax+edx*2],di
	jne Block281

 Block280:
	mov esi,1

 Block281:
	inc edx
	jmp Block277

 Block282:
	test esi,esi
	jne Block285

 Block283:
	push 0xFFFFFFFF
	call ZArray<unsigned short>::InsertBefore
	mov word ptr [eax],di
	jmp Block285

 Block284:
	mov edi,dword ptr [ebp+0x74]

 Block285:
	cmp dword ptr [ebx+0x1C],0
	jbe Block295

 Block286:
	cmp dword ptr [ebp+0x2C],1
	jne Block295

 Block287:
	mov ecx,dword ptr [ebp+0x34]
	xor esi,esi
	xor edx,edx
	add ecx,0xF0

 Block288:
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block293

 Block289:
	cmp edx,dword ptr [eax-4]
	jae Block293

 Block290:
	cmp word ptr [eax+edx*2],di
	jne Block292

 Block291:
	mov esi,1

 Block292:
	inc edx
	jmp Block288

 Block293:
	test esi,esi
	jne Block295

 Block294:
	push 0xFFFFFFFF
	call ZArray<unsigned short>::InsertBefore
	mov word ptr [eax],di

 Block295:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1009
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,dword ptr [ebp+0x58]
	lea edx,[ebp-0x6C]
	mov byte ptr [ebp-4],0x6F
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x56
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x70
	call get_int32
	add esp,8
	mov esi,eax
	neg esi
	sbb esi,esi
	neg esi
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0x56
	jne Block298

 Block296:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block299

 Block297:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block299

 Block298:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block299:
	mov edi,dword ptr [ebp+0x74]
	mov edx,0x2904
	cmp di,dx
	je Block302

 Block300:
	test esi,esi
	je Block302

 Block301:
	mov ecx,dword ptr [ebp+0x34]
	push 0xFFFFFFFF
	add ecx,0x290
	call ZArray<unsigned short>::InsertBefore
	mov word ptr [eax],di
	jmp Block351

 Block302:
	xor edi,edi
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0xFE1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x8C]
	push ecx
	mov byte ptr [ebp-4],0x71
	mov ecx,ebx
	mov byte ptr [ebp-4],0x56
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x72
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x30]
	mov dword ptr [ebp+0x30],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block304

 Block303:
	cmp eax,0x80004002
	jne Block642

 Block304:
	cmp word ptr [ebp-0x8C],8
	mov byte ptr [ebp-4],0x74
	jne Block307

 Block305:
	mov eax,dword ptr [ebp-0x84]
	xor edx,edx
	mov word ptr [ebp-0x8C],dx
	cmp eax,edi
	je Block308

 Block306:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block308

 Block307:
	lea eax,[ebp-0x8C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block308:
	mov ebx,dword ptr [ebp+0x34]
	cmp dword ptr [ebp+0x30],edi
	je Block316

 Block309:
	lea esp,[esp]

 Block310:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xFFFFFFFF
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0xAC]
	push ecx
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x75
	mov byte ptr [ebp-4],0x74
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x76
	call get_int32
	add esp,8
	cmp word ptr [ebp-0xAC],8
	mov esi,eax
	mov dword ptr [ebp+0x54],esi
	mov byte ptr [ebp-4],0x74
	jne Block313

 Block311:
	mov eax,dword ptr [ebp-0xA4]
	xor edx,edx
	mov word ptr [ebp-0xAC],dx
	test eax,eax
	je Block314

 Block312:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block314

 Block313:
	lea eax,[ebp-0xAC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block314:
	test esi,esi
	jle Block316

 Block315:
	mov ecx,dword ptr [ebp+0x44]
	push 0xFFFFFFFF
	add ecx,0xA0
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],esi
	mov dword ptr [ebp+0x5C],0
	lea ecx,[ebp+0x5C]
	push ecx
	lea edx,[ebp+0x54]
	lea esi,[ebx+0x230]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x77
	call ZMap<long, ZArray<unsigned short>, long>::GetAt
	push 0xFFFFFFFF
	lea ecx,[ebp+0x5C]
	call ZArray<unsigned short>::InsertBefore
	mov cx,word ptr [ebp+0x74]
	mov word ptr [eax],cx
	lea edx,[ebp+0x5C]
	push edx
	lea eax,[ebp+0x54]
	push eax
	mov ecx,esi
	call ZMap<long, ZArray<unsigned short>, long>::Insert
	lea ecx,[ebp+0x64]
	push ecx
	lea edx,[ebp+0x54]
	push edx
	lea ecx,[ebx+0x260]
	mov dword ptr [ebp+0x64],1
	call ZMap<long, int, long>::Insert
	lea ecx,[ebp+0x5C]
	mov byte ptr [ebp-4],0x74
	call ZArray<unsigned short>::RemoveAll
	inc edi
	jmp Block310

 Block316:
	xor edi,edi
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0xFE2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0xCC]
	push ecx
	mov ecx,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x78
	mov byte ptr [ebp-4],0x74
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x79
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x4C],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block318

 Block317:
	cmp eax,0x80004002
	jne Block642

 Block318:
	cmp word ptr [ebp-0xCC],8
	mov byte ptr [ebp-4],0x7B
	jne Block321

 Block319:
	mov eax,dword ptr [ebp-0xC4]
	xor edx,edx
	mov word ptr [ebp-0xCC],dx
	cmp eax,edi
	je Block322

 Block320:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block322

 Block321:
	lea eax,[ebp-0xCC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block322:
	cmp dword ptr [ebp+0x4C],edi
	je Block329

 Block323:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xFFFFFFFF
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0xEC]
	push ecx
	mov ecx,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x7C
	mov byte ptr [ebp-4],0x7B
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x7D
	call get_int32
	add esp,8
	cmp word ptr [ebp-0xEC],8
	mov esi,eax
	mov dword ptr [ebp+0x54],esi
	mov byte ptr [ebp-4],0x7B
	jne Block326

 Block324:
	mov eax,dword ptr [ebp-0xE4]
	xor edx,edx
	mov word ptr [ebp-0xEC],dx
	test eax,eax
	je Block327

 Block325:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block327

 Block326:
	lea eax,[ebp-0xEC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block327:
	test esi,esi
	jle Block329

 Block328:
	mov ecx,dword ptr [ebp+0x44]
	push 0xFFFFFFFF
	add ecx,0xA4
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],esi
	mov dword ptr [ebp+0x5C],0
	lea ecx,[ebp+0x5C]
	push ecx
	lea edx,[ebp+0x54]
	lea esi,[ebx+0x230]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x7E
	call ZMap<long, ZArray<unsigned short>, long>::GetAt
	push 0xFFFFFFFF
	lea ecx,[ebp+0x5C]
	call ZArray<unsigned short>::InsertBefore
	mov cx,word ptr [ebp+0x74]
	mov word ptr [eax],cx
	lea edx,[ebp+0x5C]
	push edx
	lea eax,[ebp+0x54]
	push eax
	mov ecx,esi
	call ZMap<long, ZArray<unsigned short>, long>::Insert
	lea ecx,[ebp+0x64]
	push ecx
	lea edx,[ebp+0x54]
	push edx
	lea ecx,[ebx+0x260]
	mov dword ptr [ebp+0x64],1
	call ZMap<long, int, long>::Insert
	lea ecx,[ebp+0x5C]
	mov byte ptr [ebp-4],0x7B
	call ZArray<unsigned short>::RemoveAll
	inc edi
	jmp Block323

 Block329:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0xFE3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x10C]
	push ecx
	mov ecx,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x7F
	mov byte ptr [ebp-4],0x7B
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x80
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block331

 Block330:
	cmp eax,0x80004002
	jne Block642

 Block331:
	cmp word ptr [ebp-0x10C],8
	mov byte ptr [ebp-4],0x82
	jne Block334

 Block332:
	mov eax,dword ptr [ebp-0x104]
	xor edx,edx
	mov word ptr [ebp-0x10C],dx
	test eax,eax
	je Block335

 Block333:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block335

 Block334:
	lea eax,[ebp-0x10C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block335:
	cmp dword ptr [ebp+0x54],0
	je Block344

 Block336:
	xor ebx,ebx
	jmp Block338

 Block338:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xFFFFFFFF
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov edi,dword ptr [ebp+0x54]
	lea ecx,[ebp-0x12C]
	push ecx
	mov byte ptr [ebp-4],0x83
	mov ecx,edi
	mov byte ptr [ebp-4],0x82
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x84
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x12C],8
	mov esi,eax
	mov byte ptr [ebp-4],0x82
	jne Block341

 Block339:
	mov eax,dword ptr [ebp-0x124]
	xor edx,edx
	mov word ptr [ebp-0x12C],dx
	test eax,eax
	je Block342

 Block340:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block342

 Block341:
	lea eax,[ebp-0x12C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block342:
	test esi,esi
	jle Block345

 Block343:
	mov ecx,dword ptr [ebp+0x44]
	push 0xFFFFFFFF
	add ecx,0xA8
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],esi
	mov dword ptr [ebp+0x5C],0
	mov edi,dword ptr [ebp+0x34]
	lea ecx,[ebp+0x5C]
	push ecx
	lea edx,[ebp+0x64]
	add edi,0x248
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x85
	mov dword ptr [ebp+0x64],esi
	call ZMap<unsigned long, ZArray<unsigned short>, unsigned long>::GetAt
	push 0xFFFFFFFF
	lea ecx,[ebp+0x5C]
	call ZArray<unsigned short>::InsertBefore
	mov cx,word ptr [ebp+0x74]
	mov word ptr [eax],cx
	lea edx,[ebp+0x5C]
	push edx
	lea eax,[ebp+0x64]
	push eax
	mov ecx,edi
	mov dword ptr [ebp+0x64],esi
	call ZMap<unsigned long, ZArray<unsigned short>, unsigned long>::Insert
	lea ecx,[ebp+0x64]
	push ecx
	mov ecx,dword ptr [ebp+0x34]
	lea edx,[ebp+0x60]
	push edx
	add ecx,0x278
	mov dword ptr [ebp+0x64],1
	mov dword ptr [ebp+0x60],esi
	call ZMap<unsigned long, int, unsigned long>::Insert
	lea ecx,[ebp+0x5C]
	mov byte ptr [ebp-4],0x82
	call ZArray<unsigned short>::RemoveAll
	inc ebx
	jmp Block338

 Block344:
	mov edi,dword ptr [ebp+0x54]

 Block345:
	mov byte ptr [ebp-4],0x7B
	test edi,edi
	je Block347

 Block346:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block347:
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x74
	test eax,eax
	je Block349

 Block348:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block349:
	mov eax,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x56
	test eax,eax
	je Block351

 Block350:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block351:
	xor edi,edi
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0xCAA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x14C]
	push ecx
	mov ecx,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x86
	mov byte ptr [ebp-4],0x56
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x87
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x30]
	mov dword ptr [ebp+0x30],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block353

 Block352:
	cmp eax,0x80004002
	jne Block642

 Block353:
	mov esi,8
	mov byte ptr [ebp-4],0x89
	cmp word ptr [ebp-0x14C],si
	jne Block356

 Block354:
	mov eax,dword ptr [ebp-0x144]
	xor edx,edx
	mov word ptr [ebp-0x14C],dx
	cmp eax,edi
	je Block357

 Block355:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block357

 Block356:
	lea eax,[ebp-0x14C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block357:
	cmp dword ptr [ebp+0x30],edi
	je Block366

 Block358:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xFFFFFFFF
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x16C]
	push ecx
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x8A
	mov byte ptr [ebp-4],0x89
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x8B
	call get_int32
	mov esi,8
	add esp,8
	mov ebx,eax
	mov byte ptr [ebp-4],0x89
	cmp word ptr [ebp-0x16C],si
	jne Block361

 Block359:
	mov eax,dword ptr [ebp-0x164]
	xor edx,edx
	mov word ptr [ebp-0x16C],dx
	test eax,eax
	je Block362

 Block360:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block362

 Block361:
	lea eax,[ebp-0x16C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block362:
	test ebx,ebx
	jl Block366

 Block363:
	mov esi,dword ptr [ebp+0x44]
	add esi,0x68
	push 0xFFFFFFFF
	mov ecx,esi
	call ZArray<long>::InsertBefore
	mov ecx,0x2A41
	mov dword ptr [eax],ebx
	cmp word ptr [ebp+0x74],cx
	jne Block365

 Block364:
	push 0xFFFFFFFF
	mov ecx,esi
	call ZArray<long>::InsertBefore
	push 0xFFFFFFFF
	mov ecx,esi
	mov dword ptr [eax],0xDAC
	call ZArray<long>::InsertBefore
	push 0xFFFFFFFF
	mov ecx,esi
	mov dword ptr [eax],0xDB6
	call ZArray<long>::InsertBefore
	push 0xFFFFFFFF
	mov ecx,esi
	mov dword ptr [eax],0xDB7
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],0xDB8

 Block365:
	inc edi
	jmp Block358

 Block366:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xBC8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x58]
	lea eax,[ebp-0x18C]
	mov byte ptr [ebp-4],0x8C
	push eax
	mov byte ptr [ebp-4],0x89
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x8D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x28]
	mov dword ptr [ebp+0x28],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block368

 Block367:
	cmp eax,0x80004002
	jne Block642

 Block368:
	mov byte ptr [ebp-4],0x8F
	cmp word ptr [ebp-0x18C],si
	jne Block371

 Block369:
	mov eax,dword ptr [ebp-0x184]
	xor ecx,ecx
	mov word ptr [ebp-0x18C],cx
	test eax,eax
	je Block372

 Block370:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block372

 Block371:
	lea edx,[ebp-0x18C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block372:
	mov esi,dword ptr [ebp+0x28]
	xor ebx,ebx
	cmp esi,ebx
	je Block393

 Block373:
	xor edi,edi

 Block374:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x60]
	push ecx
	push esi
	mov dword ptr [ebp+0x60],ebx
	call edx
	cmp eax,ebx
	jge Block376

 Block375:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block376:
	cmp edi,dword ptr [ebp+0x60]
	jae Block393

 Block377:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push ebx
	push ebx
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x1AC]
	mov byte ptr [ebp-4],0x90
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x8F
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x91
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block379

 Block378:
	cmp eax,0x80004002
	jne Block642

 Block379:
	cmp word ptr [ebp-0x1AC],8
	mov byte ptr [ebp-4],0x93
	jne Block382

 Block380:
	mov eax,dword ptr [ebp-0x1A4]
	xor ecx,ecx
	mov word ptr [ebp-0x1AC],cx
	cmp eax,ebx
	je Block383

 Block381:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block383

 Block382:
	lea edx,[ebp-0x1AC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block383:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x965
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x94
	test esi,esi
	je Block641

 Block384:
	lea ecx,[ebp-0x1CC]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x93
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x95
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x1CC],8
	mov word ptr [ebp-0x584],ax
	mov byte ptr [ebp-4],0x93
	jne Block387

 Block385:
	mov eax,dword ptr [ebp-0x1C4]
	xor edx,edx
	mov word ptr [ebp-0x1CC],dx
	test eax,eax
	je Block388

 Block386:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block388

 Block387:
	lea eax,[ebp-0x1CC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block388:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xCBE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x1EC]
	mov byte ptr [ebp-4],0x96
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x93
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x97
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x1EC],8
	mov ebx,eax
	mov byte ptr [ebp-4],0x93
	jne Block391

 Block389:
	xor eax,eax
	mov word ptr [ebp-0x1EC],ax
	mov eax,dword ptr [ebp-0x1E4]
	test eax,eax
	je Block392

 Block390:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block392

 Block391:
	lea ecx,[ebp-0x1EC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block392:
	mov ecx,dword ptr [ebp+0x44]
	push 0xFFFFFFFF
	add ecx,0x70
	call ZArray<QuestRecord>::InsertBefore
	mov edx,dword ptr [ebp-0x584]
	mov dword ptr [eax],edx
	mov dword ptr [eax+4],ebx
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0x8F
	call ecx
	mov esi,dword ptr [ebp+0x28]
	inc edi
	xor ebx,ebx
	jmp Block374

 Block393:
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xCB4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x58]
	lea eax,[ebp-0x20C]
	mov byte ptr [ebp-4],0x98
	push eax
	mov byte ptr [ebp-4],0x8F
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x99
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x48]
	mov dword ptr [ebp+0x48],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block395

 Block394:
	cmp eax,0x80004002
	jne Block642

 Block395:
	cmp word ptr [ebp-0x20C],8
	mov byte ptr [ebp-4],0x9B
	jne Block398

 Block396:
	mov eax,dword ptr [ebp-0x204]
	xor ecx,ecx
	mov word ptr [ebp-0x20C],cx
	cmp eax,ebx
	je Block399

 Block397:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block399

 Block398:
	lea edx,[ebp-0x20C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block399:
	mov edi,dword ptr [ebp+0x48]
	cmp edi,ebx
	je Block425

 Block400:
	xor esi,esi

 Block401:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x60]
	push ecx
	push edi
	mov dword ptr [ebp+0x50],esi
	mov dword ptr [ebp+0x60],0
	call edx
	test eax,eax
	jge Block403

 Block402:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block403:
	cmp esi,dword ptr [ebp+0x60]
	jae Block425

 Block404:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x22C]
	mov byte ptr [ebp-4],0x9C
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x9B
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x9D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block406

 Block405:
	cmp eax,0x80004002
	jne Block642

 Block406:
	mov edi,8
	mov byte ptr [ebp-4],0x9F
	cmp word ptr [ebp-0x22C],di
	jne Block409

 Block407:
	mov eax,dword ptr [ebp-0x224]
	xor ecx,ecx
	mov word ptr [ebp-0x22C],cx
	test eax,eax
	je Block410

 Block408:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block410

 Block409:
	lea edx,[ebp-0x22C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block410:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x965
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0xA0
	test esi,esi
	je Block641

 Block411:
	lea ecx,[ebp-0x25C]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x9F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xA1
	call get_int32
	add esp,8
	mov dword ptr [ebp-0x590],eax
	mov byte ptr [ebp-4],0x9F
	cmp word ptr [ebp-0x25C],di
	jne Block414

 Block412:
	mov eax,dword ptr [ebp-0x254]
	xor edx,edx
	mov word ptr [ebp-0x25C],dx
	test eax,eax
	je Block415

 Block413:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block415

 Block414:
	lea eax,[ebp-0x25C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block415:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AA6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x27C]
	mov byte ptr [ebp-4],0xA2
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x9F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xA3
	call get_int32
	add esp,8
	mov ebx,eax
	mov byte ptr [ebp-4],0x9F
	cmp word ptr [ebp-0x27C],di
	jne Block418

 Block416:
	xor eax,eax
	mov word ptr [ebp-0x27C],ax
	mov eax,dword ptr [ebp-0x274]
	test eax,eax
	je Block419

 Block417:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block419

 Block418:
	lea ecx,[ebp-0x27C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block419:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1940
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x29C]
	mov byte ptr [ebp-4],0xA4
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x9F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xA5
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x29C],8
	mov edi,eax
	mov byte ptr [ebp-4],0x9F
	jne Block422

 Block420:
	mov eax,dword ptr [ebp-0x294]
	xor ecx,ecx
	mov word ptr [ebp-0x29C],cx
	test eax,eax
	je Block423

 Block421:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block423

 Block422:
	lea edx,[ebp-0x29C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block423:
	mov ecx,dword ptr [ebp+0x44]
	push 0xFFFFFFFF
	add ecx,0x74
	call ZArray<ItemInfo>::InsertBefore
	mov ecx,dword ptr [ebp-0x590]
	mov dword ptr [eax],ecx
	push ebx
	mov dword ptr [eax+4],ebx
	push ecx
	mov ecx,dword ptr [ebp+0x74]
	mov dword ptr [eax+8],edi
	mov eax,dword ptr [ebp+0x2C]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x34]
	call CQuestMan::RegisterDemandItem
	mov byte ptr [ebp-4],0x9B
	push esi
	test eax,eax
	je Block652

 Block424:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	call eax
	mov esi,dword ptr [ebp+0x50]
	mov edi,dword ptr [ebp+0x48]
	inc esi
	jmp Block401

 Block425:
	xor esi,esi
	push esi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AC6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x58]
	lea edx,[ebp-0x2BC]
	mov byte ptr [ebp-4],0xA6
	push edx
	mov byte ptr [ebp-4],0x9B
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xA7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp+0x5C],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block427

 Block426:
	cmp eax,0x80004002
	jne Block642

 Block427:
	cmp word ptr [ebp-0x2BC],8
	mov byte ptr [ebp-4],0xA9
	jne Block430

 Block428:
	xor eax,eax
	mov word ptr [ebp-0x2BC],ax
	mov eax,dword ptr [ebp-0x2B4]
	cmp eax,esi
	je Block431

 Block429:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block431

 Block430:
	lea ecx,[ebp-0x2BC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block431:
	mov edi,dword ptr [ebp+0x5C]
	cmp edi,esi
	je Block448

 Block432:
	xor ebx,ebx

 Block433:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x60]
	push eax
	push edi
	mov dword ptr [ebp+0x60],esi
	call ecx
	cmp eax,esi
	jge Block435

 Block434:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block435:
	cmp ebx,dword ptr [ebp+0x60]
	jae Block448

 Block436:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push esi
	push esi
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x2DC]
	mov byte ptr [ebp-4],0xAA
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0xA9
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xAB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block438

 Block437:
	cmp eax,0x80004002
	jne Block642

 Block438:
	cmp word ptr [ebp-0x2DC],8
	mov byte ptr [ebp-4],0xAD
	jne Block441

 Block439:
	xor eax,eax
	mov word ptr [ebp-0x2DC],ax
	mov eax,dword ptr [ebp-0x2D4]
	cmp eax,esi
	je Block442

 Block440:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block442

 Block441:
	lea ecx,[ebp-0x2DC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block442:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x965
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0xAE
	test esi,esi
	je Block641

 Block443:
	lea eax,[ebp-0x2FC]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xAD
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xAF
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x2FC],8
	mov dword ptr [ebp+0x50],eax
	mov byte ptr [ebp-4],0xAD
	jne Block446

 Block444:
	mov eax,dword ptr [ebp-0x2F4]
	xor ecx,ecx
	mov word ptr [ebp-0x2FC],cx
	test eax,eax
	je Block447

 Block445:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block447

 Block446:
	lea edx,[ebp-0x2FC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block447:
	lea eax,[ebp+0x64]
	push eax
	lea ecx,[ebp+0x50]
	push ecx
	mov ecx,dword ptr [ebp+0x44]
	sub ecx,0xFFFFFF80
	mov dword ptr [ebp+0x64],1
	call ZMap<long, int, long>::Insert
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0xA9
	call eax
	inc ebx
	xor esi,esi
	jmp Block433

 Block448:
	push esi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AD8
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x58]
	lea edx,[ebp-0x31C]
	mov byte ptr [ebp-4],0xB0
	push edx
	mov byte ptr [ebp-4],0xA9
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xB1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp+0x54],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block450

 Block449:
	cmp eax,0x80004002
	jne Block642

 Block450:
	cmp word ptr [ebp-0x31C],8
	mov byte ptr [ebp-4],0xB3
	jne Block453

 Block451:
	xor eax,eax
	mov word ptr [ebp-0x31C],ax
	mov eax,dword ptr [ebp-0x314]
	cmp eax,esi
	je Block454

 Block452:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block454

 Block453:
	lea ecx,[ebp-0x31C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block454:
	mov ebx,dword ptr [ebp+0x54]
	cmp ebx,esi
	je Block479

 Block455:
	xor esi,esi
	mov dword ptr [ebp+0x4C],esi

 Block456:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x60]
	push eax
	push ebx
	mov dword ptr [ebp+0x60],0
	call ecx
	test eax,eax
	jge Block458

 Block457:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block458:
	cmp esi,dword ptr [ebp+0x60]
	jae Block479

 Block459:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x33C]
	mov byte ptr [ebp-4],0xB4
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0xB3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xB5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block461

 Block460:
	cmp eax,0x80004002
	jne Block642

 Block461:
	cmp word ptr [ebp-0x33C],8
	mov byte ptr [ebp-4],0xB7
	jne Block464

 Block462:
	xor eax,eax
	mov word ptr [ebp-0x33C],ax
	mov eax,dword ptr [ebp-0x334]
	test eax,eax
	je Block465

 Block463:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block465

 Block464:
	lea ecx,[ebp-0x33C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block465:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x965
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0xB8
	test edi,edi
	je Block641

 Block466:
	lea eax,[ebp-0x35C]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xB7
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xB9
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x35C],8
	mov dword ptr [ebp-0x59C],eax
	mov byte ptr [ebp-4],0xB7
	jne Block469

 Block467:
	mov eax,dword ptr [ebp-0x354]
	xor ecx,ecx
	mov word ptr [ebp-0x35C],cx
	test eax,eax
	je Block470

 Block468:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block470

 Block469:
	lea edx,[ebp-0x35C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block470:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x677
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x37C]
	push ecx
	mov byte ptr [ebp-4],0xBA
	mov ecx,edi
	mov byte ptr [ebp-4],0xB7
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xBB
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x37C],8
	mov ebx,eax
	mov byte ptr [ebp-4],0xB7
	jne Block473

 Block471:
	mov eax,dword ptr [ebp-0x374]
	xor edx,edx
	mov word ptr [ebp-0x37C],dx
	test eax,eax
	je Block474

 Block472:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block474

 Block473:
	lea eax,[ebp-0x37C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block474:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x966
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x39C]
	mov byte ptr [ebp-4],0xBC
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0xB7
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xBD
	call get_int32
	add esp,8
	mov esi,eax
	neg esi
	sbb esi,esi
	neg esi
	cmp word ptr [ebp-0x39C],8
	mov byte ptr [ebp-4],0xB7
	jne Block477

 Block475:
	xor eax,eax
	mov word ptr [ebp-0x39C],ax
	mov eax,dword ptr [ebp-0x394]
	test eax,eax
	je Block478

 Block476:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block478

 Block477:
	lea ecx,[ebp-0x39C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block478:
	mov ecx,dword ptr [ebp+0x44]
	push 0xFFFFFFFF
	add ecx,0x7C
	call ZArray<SkillInfo>::InsertBefore
	mov edx,dword ptr [ebp-0x59C]
	mov dword ptr [eax],edx
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],esi
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],0xB3
	call ecx
	inc dword ptr [ebp+0x4C]
	mov esi,dword ptr [ebp+0x4C]
	mov ebx,dword ptr [ebp+0x54]
	jmp Block456

 Block479:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x666
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x58]
	lea eax,[ebp-0x3BC]
	mov byte ptr [ebp-4],0xBE
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xB3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xBF
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x4C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block481

 Block480:
	cmp eax,0x80004002
	jne Block642

 Block481:
	cmp word ptr [ebp-0x3BC],8
	mov byte ptr [ebp-4],0xC1
	jne Block484

 Block482:
	mov eax,dword ptr [ebp-0x3B4]
	xor ecx,ecx
	mov word ptr [ebp-0x3BC],cx
	test eax,eax
	je Block485

 Block483:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block485

 Block484:
	lea edx,[ebp-0x3BC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block485:
	mov ebx,dword ptr [ebp+0x4C]
	test ebx,ebx
	je Block507

 Block486:
	xor esi,esi
	mov dword ptr [ebp+0x64],esi
	mov byte ptr [ebp-4],0xC2
	mov dword ptr [ebp+0x50],esi
	lea esp,[esp]

 Block487:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x60]
	push ecx
	push ebx
	mov dword ptr [ebp+0x60],0
	call edx
	test eax,eax
	jge Block489

 Block488:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block489:
	cmp esi,dword ptr [ebp+0x60]
	jae Block506

 Block490:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x3DC]
	mov byte ptr [ebp-4],0xC3
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0xC2
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xC4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block492

 Block491:
	cmp eax,0x80004002
	jne Block642

 Block492:
	cmp word ptr [ebp-0x3DC],8
	mov byte ptr [ebp-4],0xC6
	jne Block495

 Block493:
	mov eax,dword ptr [ebp-0x3D4]
	xor ecx,ecx
	mov word ptr [ebp-0x3DC],cx
	test eax,eax
	je Block496

 Block494:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block496

 Block495:
	lea edx,[ebp-0x3DC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block496:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x3C],esp
	push 0x965
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0xC7
	test esi,esi
	je Block641

 Block497:
	lea ecx,[ebp-0x3FC]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0xC6
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xC8
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x3FC],8
	mov edi,eax
	mov byte ptr [ebp-4],0xC6
	jne Block500

 Block498:
	mov eax,dword ptr [ebp-0x3F4]
	xor edx,edx
	mov word ptr [ebp-0x3FC],dx
	test eax,eax
	je Block501

 Block499:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block501

 Block500:
	lea eax,[ebp-0x3FC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block501:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x3C],esp
	push 0x1AA6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x41C]
	mov byte ptr [ebp-4],0xC9
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xC6
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xCA
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x41C],8
	mov ebx,eax
	mov byte ptr [ebp-4],0xC6
	jne Block504

 Block502:
	xor eax,eax
	mov word ptr [ebp-0x41C],ax
	mov eax,dword ptr [ebp-0x414]
	test eax,eax
	je Block505

 Block503:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block505

 Block504:
	lea ecx,[ebp-0x41C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block505:
	mov ecx,dword ptr [ebp+0x44]
	push 0xFFFFFFFF
	add ecx,0x78
	call ZArray<MobInfo>::InsertBefore
	mov dword ptr [eax],edi
	mov dword ptr [eax+4],ebx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0xC2
	call eax
	inc dword ptr [ebp+0x50]
	mov esi,dword ptr [ebp+0x50]
	mov ebx,dword ptr [ebp+0x4C]
	mov edi,dword ptr [ebp+0x58]
	jmp Block487

 Block506:
	lea ecx,[ebp+0x64]
	mov byte ptr [ebp-4],0xC1
	call ZArray<MobInfo>::RemoveAll

 Block507:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push offset _S_MBMIN
	mov ebx,8
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x43C]
	push ecx
	mov byte ptr [ebp-4],0xCB
	mov ecx,edi
	mov byte ptr [ebp-4],0xC1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xCC
	call get_int32
	mov esi,dword ptr [ebp+0x44]
	add esp,8
	mov dword ptr [esi+0xB4],eax
	mov byte ptr [ebp-4],0xC1
	cmp word ptr [ebp-0x43C],bx
	jne Block510

 Block508:
	mov eax,dword ptr [ebp-0x434]
	xor edx,edx
	mov word ptr [ebp-0x43C],dx
	test eax,eax
	je Block511

 Block509:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block511

 Block510:
	lea eax,[ebp-0x43C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block511:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push offset _S_MBMAX
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x45C]
	push ecx
	mov byte ptr [ebp-4],0xCD
	mov ecx,edi
	mov byte ptr [ebp-4],0xC1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xCE
	call get_int32
	add esp,8
	mov dword ptr [esi+0xB8],eax
	mov byte ptr [ebp-4],0xC1
	cmp word ptr [ebp-0x45C],bx
	jne Block514

 Block512:
	mov eax,dword ptr [ebp-0x454]
	xor edx,edx
	mov word ptr [ebp-0x45C],dx
	test eax,eax
	je Block515

 Block513:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block515

 Block514:
	lea eax,[ebp-0x45C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block515:
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push offset _S_MBCARD
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x47C]
	push ecx
	mov byte ptr [ebp-4],0xCF
	mov ecx,edi
	mov byte ptr [ebp-4],0xC1
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xD0
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block517

 Block516:
	cmp eax,0x80004002
	jne Block642

 Block517:
	mov byte ptr [ebp-4],0xD2
	cmp word ptr [ebp-0x47C],bx
	jne Block520

 Block518:
	mov eax,dword ptr [ebp-0x474]
	xor edx,edx
	mov word ptr [ebp-0x47C],dx
	test eax,eax
	je Block521

 Block519:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block521

 Block520:
	lea eax,[ebp-0x47C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block521:
	mov ebx,dword ptr [ebp+0x60]
	test ebx,ebx
	je Block547

 Block522:
	xor esi,esi
	mov dword ptr [ebp+0x50],esi

 Block523:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x64]
	push edx
	push ebx
	mov dword ptr [ebp+0x64],0
	call eax
	test eax,eax
	jge Block525

 Block524:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block525:
	cmp esi,dword ptr [ebp+0x64]
	jae Block546

 Block526:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	xor edi,edi
	push edi
	push edi
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x49C]
	push ecx
	mov byte ptr [ebp-4],0xD3
	mov ecx,ebx
	mov byte ptr [ebp-4],0xD2
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xD4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x64]
	mov dword ptr [ebp+0x64],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block528

 Block527:
	cmp eax,0x80004002
	jne Block642

 Block528:
	mov ebx,8
	mov byte ptr [ebp-4],0xD6
	cmp word ptr [ebp-0x49C],bx
	jne Block531

 Block529:
	mov eax,dword ptr [ebp-0x494]
	xor edx,edx
	mov word ptr [ebp-0x49C],dx
	cmp eax,edi
	je Block532

 Block530:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block532

 Block531:
	lea eax,[ebp-0x49C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block532:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x3C],esp
	or eax,0xFFFFFFFF
	push 0x965
	push ecx
	mov dword ptr [ebp],edi
	mov dword ptr [ebp+4],eax
	mov dword ptr [ebp+8],eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0xD7
	cmp esi,edi
	je Block641

 Block533:
	lea edx,[ebp-0x4BC]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xD6
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD8
	call get_int32
	add esp,8
	mov dword ptr [ebp],eax
	mov byte ptr [ebp-4],0xD6
	cmp word ptr [ebp-0x4BC],bx
	jne Block536

 Block534:
	xor eax,eax
	mov word ptr [ebp-0x4BC],ax
	mov eax,dword ptr [ebp-0x4B4]
	cmp eax,edi
	je Block537

 Block535:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block537

 Block536:
	lea ecx,[ebp-0x4BC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block537:
	push 0xFFFFFFFF
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x3C],esp
	push 0x5D6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x4DC]
	mov byte ptr [ebp-4],0xD9
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0xD6
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xDA
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x4DC],8
	mov edi,eax
	mov byte ptr [ebp-4],0xD6
	jne Block540

 Block538:
	mov eax,dword ptr [ebp-0x4D4]
	xor ecx,ecx
	mov word ptr [ebp-0x4DC],cx
	test eax,eax
	je Block541

 Block539:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block541

 Block540:
	lea edx,[ebp-0x4DC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block541:
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x3C],esp
	push 0x5D7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x4FC]
	push ecx
	mov byte ptr [ebp-4],0xDB
	mov ecx,esi
	mov byte ptr [ebp-4],0xD6
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xDC
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x4FC],8
	mov ebx,eax
	mov byte ptr [ebp-4],0xD6
	jne Block544

 Block542:
	mov eax,dword ptr [ebp-0x4F4]
	xor edx,edx
	mov word ptr [ebp-0x4FC],dx
	test eax,eax
	je Block545

 Block543:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block545

 Block544:
	lea eax,[ebp-0x4FC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block545:
	mov ecx,dword ptr [ebp+0x44]
	push 0xFFFFFFFF
	add ecx,0xBC
	call ZArray<MBCardInfo>::InsertBefore
	mov ecx,dword ptr [ebp]
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ebx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0xD2
	call eax
	inc dword ptr [ebp+0x50]
	mov esi,dword ptr [ebp+0x50]
	mov ebx,dword ptr [ebp+0x60]
	mov edi,dword ptr [ebp+0x58]
	jmp Block523

 Block546:
	mov esi,dword ptr [ebp+0x44]

 Block547:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push offset _S_PARTYQUESTS
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x51C]
	push ecx
	mov byte ptr [ebp-4],0xDD
	mov ecx,edi
	mov byte ptr [ebp-4],0xD2
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xDE
	call get_int32
	add esp,8
	mov dword ptr [esi+0xDC],eax
	cmp word ptr [ebp-0x51C],8
	mov byte ptr [ebp-4],0xD2
	jne Block550

 Block548:
	mov eax,dword ptr [ebp-0x514]
	xor edx,edx
	mov word ptr [ebp-0x51C],dx
	test eax,eax
	je Block551

 Block549:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block551

 Block550:
	lea eax,[ebp-0x51C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block551:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push offset _S_POP
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x53C]
	push ecx
	mov byte ptr [ebp-4],0xDF
	mov ecx,edi
	mov byte ptr [ebp-4],0xD2
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xE0
	call get_int32
	add esp,8
	mov dword ptr [esi+0xE0],eax
	cmp word ptr [ebp-0x53C],8
	mov byte ptr [ebp-4],0xD2
	jne Block554

 Block552:
	mov eax,dword ptr [ebp-0x534]
	xor edx,edx
	mov word ptr [ebp-0x53C],dx
	test eax,eax
	je Block555

 Block553:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block555

 Block554:
	lea eax,[ebp-0x53C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block555:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push offset _S_QUESTCOMPLETE
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x55C]
	push ecx
	mov byte ptr [ebp-4],0xE1
	mov ecx,edi
	mov byte ptr [ebp-4],0xD2
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xE2
	call get_int32
	add esp,8
	mov dword ptr [esi+0xE4],eax
	cmp word ptr [ebp-0x55C],8
	mov byte ptr [ebp-4],0xD2
	jne Block558

 Block556:
	mov eax,dword ptr [ebp-0x554]
	xor edx,edx
	mov word ptr [ebp-0x55C],dx
	test eax,eax
	je Block559

 Block557:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block559

 Block558:
	lea eax,[ebp-0x55C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block559:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push offset _S_LEVEL__1
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x57C]
	push ecx
	mov byte ptr [ebp-4],0xE3
	mov ecx,edi
	mov byte ptr [ebp-4],0xD2
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xE4
	call get_int32
	add esp,8
	mov dword ptr [esi+0xE8],eax
	cmp word ptr [ebp-0x57C],8
	mov byte ptr [ebp-4],0xD2
	jne Block562

 Block560:
	mov eax,dword ptr [ebp-0x574]
	xor edx,edx
	mov word ptr [ebp-0x57C],dx
	test eax,eax
	je Block563

 Block561:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block563

 Block562:
	lea eax,[ebp-0x57C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block563:
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push offset _S_FIELDSET
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x24C]
	push ecx
	mov byte ptr [ebp-4],0xE5
	mov ecx,edi
	mov byte ptr [ebp-4],0xD2
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0xE6
	jne Block565

 Block564:
	mov eax,dword ptr [eax+8]
	jmp Block566

 Block565:
	mov eax,offset _S___3

 Block566:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x50]
	mov dword ptr [ebp+0x50],0
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x24C],8
	mov byte ptr [ebp-4],0xE8
	jne Block569

 Block567:
	mov eax,dword ptr [ebp-0x244]
	xor edx,edx
	mov word ptr [ebp-0x24C],dx
	test eax,eax
	je Block570

 Block568:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block570

 Block569:
	lea eax,[ebp-0x24C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block570:
	mov edi,dword ptr [ebp+0x50]
	test edi,edi
	je Block577

 Block571:
	cmp byte ptr [edi],0
	je Block577

 Block572:
	mov esi,dword ptr [ebp+0x44]
	lea ecx,[esi+0xEC]
	call ZRef<TimeKeepInfo>::_Alloc
	mov ecx,dword ptr [esi+0xF0]
	lea edx,[ebp+0x50]
	push edx
	call ZXString<char>::op_assign
	push 0
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push offset _S_FIELDSETKEEPTIME
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x58]
	lea eax,[ebp-0x2EC]
	mov byte ptr [ebp-4],0xE9
	push eax
	mov byte ptr [ebp-4],0xE8
	call IWzProperty::Getitem
	mov esi,dword ptr [esi+0xF0]
	push eax
	mov byte ptr [ebp-4],0xEA
	call get_int32
	imul eax,0xEA60
	add esp,8
	mov dword ptr [esi+4],eax
	cmp word ptr [ebp-0x2EC],8
	mov byte ptr [ebp-4],0xE8
	jne Block575

 Block573:
	mov eax,dword ptr [ebp-0x2E4]
	xor ecx,ecx
	mov word ptr [ebp-0x2EC],cx
	test eax,eax
	je Block576

 Block574:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block576

 Block575:
	lea edx,[ebp-0x2EC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block576:
	mov ecx,dword ptr [ebp+0x34]
	add ecx,0x2A8
	call ZList<unsigned short>::AddTail_
	mov cx,word ptr [ebp+0x74]
	mov word ptr [eax],cx

 Block577:
	cmp dword ptr [ebp+0x2C],0
	mov esi,dword ptr [ebp+0x34]
	push 0
	lea edx,[ebp+0x74]
	push edx
	jne Block608

 Block578:
	add esi,0x68
	mov ecx,esi
	call ZMap<unsigned short, ZRef<QuestDemand>, unsigned short>::GetAt
	test eax,eax
	je Block609

 Block579:
	mov byte ptr [ebp-4],0xD2
	test edi,edi
	je Block581

 Block580:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block581:
	mov byte ptr [ebp-4],0xC1
	test ebx,ebx
	je Block583

 Block582:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block583:
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0xB3
	test eax,eax
	je Block585

 Block584:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block585:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0xA9
	test eax,eax
	je Block587

 Block586:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block587:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x9B
	test eax,eax
	je Block589

 Block588:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block589:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x8F
	test eax,eax
	je Block591

 Block590:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block591:
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x89
	test eax,eax
	je Block593

 Block592:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block593:
	mov eax,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x56
	test eax,eax
	je Block595

 Block594:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block595:
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0x44
	test eax,eax
	je Block597

 Block596:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block597:
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x28
	test eax,eax
	je Block599

 Block598:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block599:
	mov eax,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],0x23
	test eax,eax
	je Block601

 Block600:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block601:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],5
	test eax,eax
	je Block603

 Block602:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block603:
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],1
	call edx
	mov esi,dword ptr [ebp+0x44]
	add esi,0xFFFFFFF0
	lea ebx,[esi+4]
	push ebx
	mov byte ptr [ebp-4],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block606

 Block604:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block606

 Block605:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block606:
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block651

 Block607:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	xor eax,eax
	jmp Block640

 Block608:
	sub esi,0xFFFFFF80
	mov ecx,esi
	call ZMap<unsigned short, ZRef<QuestDemand>, unsigned short>::GetAt
	test eax,eax
	jne Block669

 Block609:
	lea eax,[ebp+0x40]
	push eax
	lea ecx,[ebp+0x74]
	push ecx
	mov ecx,esi
	call ZMap<unsigned short, ZRef<QuestDemand>, unsigned short>::Insert
	mov byte ptr [ebp-4],0xD2
	test edi,edi
	je Block611

 Block610:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block611:
	mov byte ptr [ebp-4],0xC1
	test ebx,ebx
	je Block613

 Block612:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block613:
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0xB3
	test eax,eax
	je Block615

 Block614:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block615:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0xA9
	test eax,eax
	je Block617

 Block616:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block617:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x9B
	test eax,eax
	je Block619

 Block618:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block619:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x8F
	test eax,eax
	je Block621

 Block620:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block621:
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x89
	test eax,eax
	je Block623

 Block622:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block623:
	mov eax,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x56
	test eax,eax
	je Block625

 Block624:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block625:
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0x44
	test eax,eax
	je Block627

 Block626:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block627:
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x28
	test eax,eax
	je Block629

 Block628:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block629:
	mov eax,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],0x23
	test eax,eax
	je Block631

 Block630:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block631:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],5
	test eax,eax
	je Block633

 Block632:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block633:
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],1
	call edx
	mov esi,dword ptr [ebp+0x44]
	add esi,0xFFFFFFF0
	lea ebx,[esi+4]
	push ebx
	mov byte ptr [ebp-4],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block636

 Block634:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block636

 Block635:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block636:
	mov eax,dword ptr [ebp+0x2C]
	inc eax
	cmp eax,2
	mov dword ptr [ebp+0x44],0
	mov dword ptr [ebp+0x2C],eax
	jl Block1

 Block637:
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block639

 Block638:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block639:
	mov eax,1

 Block640:
	lea esp,[ebp-0x5AC]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x68]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x6C
	mov esp,ebp
	pop ebp
	ret 8

 Block641:
	push 0x80004003
	call _com_issue_error

 Block642:
	push eax
	call _com_issue_error

 Block643:
	mov byte ptr [ebp-4],1
	test ebx,ebx
	je Block645

 Block644:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block645:
	mov byte ptr [ebp-4],0
	test esi,esi
	je Block649

 Block646:
	add esi,0xFFFFFFF0
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block649

 Block647:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block649

 Block648:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block649:
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block651

 Block650:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block651:
	xor eax,eax
	jmp Block640

 Block652:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	call ecx
	mov eax,dword ptr [ebp+0x48]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0x8F
	call eax
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x89
	test eax,eax
	je Block654

 Block653:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block654:
	mov eax,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x56
	test eax,eax
	je Block656

 Block655:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block656:
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0x44
	test eax,eax
	je Block658

 Block657:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block658:
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x28
	test eax,eax
	je Block660

 Block659:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block660:
	mov eax,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],0x23
	test eax,eax
	je Block662

 Block661:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block662:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],5
	test eax,eax
	je Block664

 Block663:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block664:
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],1
	call edx
	mov esi,dword ptr [ebp+0x44]
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [ebp-4],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block667

 Block665:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block667

 Block666:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block667:
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block651

 Block668:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	xor eax,eax
	jmp Block640

 Block669:
	mov byte ptr [ebp-4],0xD2
	test edi,edi
	je Block671

 Block670:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block671:
	mov byte ptr [ebp-4],0xC1
	test ebx,ebx
	je Block673

 Block672:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block673:
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0xB3
	test eax,eax
	je Block675

 Block674:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block675:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0xA9
	test eax,eax
	je Block677

 Block676:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block677:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x9B
	test eax,eax
	je Block679

 Block678:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block679:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x8F
	test eax,eax
	je Block681

 Block680:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block681:
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0x89
	test eax,eax
	je Block683

 Block682:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block683:
	mov eax,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x56
	test eax,eax
	je Block685

 Block684:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block685:
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0x44
	test eax,eax
	je Block687

 Block686:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block687:
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x28
	test eax,eax
	je Block689

 Block688:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block689:
	mov eax,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],0x23
	test eax,eax
	je Block691

 Block690:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block691:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],5
	test eax,eax
	je Block693

 Block692:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block693:
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],1
	call edx
	mov esi,dword ptr [ebp+0x44]
	add esi,0xFFFFFFF0
	lea ebx,[esi+4]
	push ebx
	mov byte ptr [ebp-4],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block696

 Block694:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block696

 Block695:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block696:
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block651

 Block697:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	xor eax,eax
	jmp Block640
}
}
// CQuestMan::GetCompletedQuestCnt
__SUB_CLASS_THIS(002B7C90, __thiscall, 57125,  CQuestMan, long, const CharacterData&, int32_t) {
__asm {

 Block0:
	push ecx
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push ebp
	push esi
	mov ebp,ecx
	lea esi,[ebx+0x5B5]
	push edi
	mov ecx,esi
	mov dword ptr [esp+0x10],0
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetHeadPosition
	mov edi,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block7

 Block1:
	lea esp,[esp]

 Block2:
	push 0
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetNext
	movzx eax,word ptr [eax]
	test edi,edi
	je Block5

 Block3:
	lea ecx,[eax-0x2328]
	mov edx,0x7CF
	cmp cx,dx
	jbe Block6

 Block4:
	push eax
	mov ecx,ebp
	call CQuestMan::GetQuestCategory
	cmp eax,0x33
	je Block6

 Block5:
	inc dword ptr [esp+0x10]

 Block6:
	cmp dword ptr [esp+0x18],0
	jne Block2

 Block7:
	lea esi,[ebx+0x5CD]
	mov ecx,esi
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetHeadPosition
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block13

 Block8:
	push 0
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetNext
	movzx eax,word ptr [eax]
	test edi,edi
	je Block11

 Block9:
	lea ecx,[eax-0x2328]
	mov edx,0x7CF
	cmp cx,dx
	jbe Block12

 Block10:
	push eax
	mov ecx,ebp
	call CQuestMan::GetQuestCategory
	cmp eax,0x33
	je Block12

 Block11:
	inc dword ptr [esp+0x10]

 Block12:
	cmp dword ptr [esp+0x18],0
	jne Block8

 Block13:
	mov eax,dword ptr [esp+0x10]
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 8
}
}
// CQuestMan::GetSeriesQuest
_SUB_EXCEPTION_HANDLER(3E2EB0)
__SUB_CLASS_THIS(003E2EB0, __thiscall, 57149,  CQuestMan, ZArray<unsigned short>, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3E2EB0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+8],0
	mov esi,dword ptr [esp+0x1C]
	mov eax,1
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esi],0
	mov dword ptr [esp+8],eax
	push esi
	lea eax,[esp+0x24]
	push eax
	add ecx,4
	call ZMap<ZXString<char>, ZArray<unsigned short>, ZXString<char>>::GetAt
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 8
}
}
// CQuestMan::GetExpRateByLevel
__SUB_CLASS_THIS(002B5940, __thiscall, 57170,  CQuestMan, int32_t, uint16_t, long&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push eax
	mov dword ptr [eax],0
	lea eax,[esp+8]
	push eax
	add ecx,0x304
	call ZMap<unsigned short, long, unsigned short>::GetAt
	neg eax
	sbb eax,eax
	neg eax
	ret 8
}
}
// GetStringToFileTime
_SUB_EXCEPTION_HANDLER(2BAA30)
__SUB(002BAA30, __cdecl, 134024,  _FILETIME, NakedParam<ZXString<char>>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2BAA30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0x10],ebx
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x34],ebx
	test eax,eax
	je Block2

 Block1:
	cmp byte ptr [eax],bl
	jne Block5

 Block2:
	cmp dword ptr [esp+0x40],0
	je Block4

 Block3:
	mov esi,dword ptr [_D_DB_DATE_19000101__127]
	mov edi,dword ptr [_D_DB_DATE_19000101__127+4]
	jmp Block21

 Block4:
	mov esi,dword ptr [_D_DB_DATE_20790101__22]
	mov edi,dword ptr [_D_DB_DATE_20790101__22+4]
	jmp Block21

 Block5:
	push 4
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x44]
	call ZXString<char>::Left
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x14]
	add esp,4
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	push 6
	push 4
	lea ecx,[esp+0x18]
	push ecx
	lea ecx,[esp+0x48]
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov word ptr [esp+0x22],ax
	mov eax,dword ptr [esp+0x14]
	add esp,4
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	push 8
	push 6
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esp+0x48]
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov word ptr [esp+0x26],ax
	mov eax,dword ptr [esp+0x14]
	add esp,4
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	push 0xA
	push 8
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x14]
	add esp,4
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block16

 Block14:
	mov eax,dword ptr [eax-4]
	cmp eax,0xC
	jne Block16

 Block15:
	push eax
	push 0xA
	lea ecx,[esp+0x18]
	push ecx
	lea ecx,[esp+0x48]
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push eax
	mov ebx,1
	call _atoi
	add esp,4
	mov word ptr [esp+0x26],ax
	jmp Block17

 Block16:
	xor edx,edx
	mov word ptr [esp+0x26],dx

 Block17:
	test bl,1
	je Block20

 Block18:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	xor eax,eax
	xor ecx,ecx
	mov word ptr [esp+0x2A],ax
	lea eax,[esp+0x14]
	mov word ptr [esp+0x28],cx
	push eax
	lea ecx,[esp+0x20]
	xor edx,edx
	push ecx
	mov word ptr [esp+0x28],dx
	call dword ptr [ZImports::_SystemTimeToFileTime]
	mov esi,dword ptr [esp+0x14]
	mov edi,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x3C]

 Block21:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov edx,edi
	mov eax,esi
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x28
	ret
}
}
// GradeEntity::GradeEntity
__SUB_CLASS_THIS0(002B85B0, __thiscall, 58369,  GradeEntity, void) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,ecx
	lea ecx,[esi+4]
	xor edi,edi
	mov dword ptr [esi],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, long, ZXString<char>>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<ZXString<char>, long, ZXString<char>>::_CalcAutoGrow
	lea ecx,[esi+0x1C]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, long, ZXString<char>>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<ZXString<char>, long, ZXString<char>>::_CalcAutoGrow
	lea ecx,[esi+0x34]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<ZXString<char>, ZXString<char>, ZXString<char>>::_CalcAutoGrow
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CQuestMan::GetPartyQuestRankCount
_SUB_EXCEPTION_HANDLER(2B8D20)
__SUB_CLASS_THIS(002B8D20, __thiscall, 57129,  CQuestMan, long, ZXString<char>&, const CharacterData&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2B8D20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov edi,dword ptr [esp+0x2C]
	xor ebp,ebp
	mov dword ptr [esp+0x10],ebp
	mov esi,0x4B0

 Block1:
	push ebp
	push 4
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x34],ebp
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_RANK]
	mov dword ptr [eax],ecx
	push 4
	lea ecx,[esp+0x30]
	call ZXString<char>::ReleaseBuffer
	lea edx,[esp+0x2C]
	push edx
	push esi
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x2C],ebp
	call CharacterData::GetQuestEx
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x20],2
	cmp eax,ebp
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	mov ecx,dword ptr [esp+0x28]
	push ecx
	lea ecx,[esp+0x18]
	call ZXString<char>::op_eq_0
	test eax,eax
	je Block5

 Block4:
	inc dword ptr [esp+0x10]

 Block5:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp eax,ebp
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	inc esi
	mov edx,0x578
	cmp si,dx
	jb Block1

 Block8:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x14
	ret 8
}
}
// CQuestMan::IsDeliveryCompleteQuest
__SUB_CLASS_THIS(002B7BE0, __thiscall, 57112,  CQuestMan, int32_t, uint16_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	push edi
	mov esi,ecx
	call CQuestMan::IsCompleteScriptLinkedQuest
	test eax,eax
	je Block2

 Block1:
	pop edi
	xor eax,eax
	pop esi
	ret 4

 Block2:
	lea eax,[edi-0x4B0]
	mov ecx,0xC7
	cmp ax,cx
	jbe Block1

 Block3:
	push edi
	mov ecx,esi
	call CQuestMan::IsAutoAlertQuest
	test eax,eax
	jne Block1

 Block4:
	push edi
	mov ecx,esi
	call CQuestMan::IsTimeLimitQuest
	test eax,eax
	jne Block1

 Block5:
	push edi
	mov ecx,esi
	call CQuestMan::IsDisallowedDeliveryQuest
	test eax,eax
	jne Block1

 Block6:
	push ebx
	push edi
	mov ecx,esi
	call CQuestMan::GetCompleteDemand
	mov ebx,eax
	test ebx,ebx
	je Block15

 Block7:
	push edi
	mov ecx,esi
	call CQuestMan::GetStartDemand
	test eax,eax
	je Block15

 Block8:
	mov ecx,dword ptr [ebx+0x18]
	test ecx,ecx
	je Block15

 Block9:
	cmp ecx,0xF7508
	je Block15

 Block10:
	mov eax,dword ptr [eax+0x30]
	test eax,eax
	jl Block14

 Block11:
	cmp eax,0x5A0
	jge Block14

 Block12:
	lea ecx,[ebx+0x74]
	call ZArray<ItemInfo>::IsEmpty
	test eax,eax
	je Block14

 Block13:
	lea ecx,[ebx+0x78]
	call ZArray<MobInfo>::IsEmpty
	test eax,eax
	jne Block15

 Block14:
	pop ebx
	pop edi
	mov eax,1
	pop esi
	ret 4

 Block15:
	pop ebx
	pop edi
	xor eax,eax
	pop esi
	ret 4
}
}
// CQuestMan::GetQuestTimeLimit
__SUB_CLASS_THIS(002B5920, __thiscall, 57144,  CQuestMan, long, uint16_t) {
__asm {

 Block0:
	push ecx
	lea eax,[esp]
	push eax
	lea edx,[esp+0xC]
	push edx
	add ecx,0x1E8
	call ZMap<unsigned short, long, unsigned short>::GetAt
	neg eax
	sbb eax,eax
	and eax,dword ptr [esp]
	pop ecx
	ret 4
}
}
// CQuestMan::IsStartScriptLinkedQuest
_SUB_EXCEPTION_HANDLER(2B79B0)
__SUB_CLASS_THIS(002B79B0, __thiscall, 57112,  CQuestMan, int32_t, uint16_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2B79B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	cmp word ptr [esp+0x1C],0
	je Block3

 Block1:
	mov dword ptr [esp+8],0
	lea eax,[esp+4]
	push eax
	lea edx,[esp+0x20]
	push edx
	add ecx,0x68
	mov dword ptr [esp+0x1C],0
	call ZMap<unsigned short, ZRef<QuestDemand>, unsigned short>::GetAt
	test eax,eax
	jne Block4

 Block2:
	lea ecx,[esp+4]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>

 Block3:
	xor eax,eax
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x14
	ret 4

 Block4:
	mov eax,dword ptr [esp+8]
	mov eax,dword ptr [eax+0x98]
	test eax,eax
	je Block2

 Block5:
	cmp byte ptr [eax],0
	je Block2

 Block6:
	lea ecx,[esp+4]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,1
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x14
	ret 4
}
}
// CQuestMan::IsTimeLimitQuest2
__SUB_CLASS_THIS(002B5880, __thiscall, 57112,  CQuestMan, int32_t, uint16_t) {
__asm {

 Block0:
	push ecx
	lea eax,[esp]
	push eax
	lea edx,[esp+0xC]
	push edx
	add ecx,0x200
	call ZMap<unsigned short, long, unsigned short>::GetAt
	neg eax
	sbb eax,eax
	neg eax
	pop ecx
	ret 4
}
}
// operator__unsignedshort_char__134022
_SUB_EXCEPTION_HANDLER(2B8FF0)
__SUB(002B8FF0, __cdecl, 134022,  ZXString<char>, const uint16_t*, const ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2B8FF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x24]
	push 0xFFFFFFFF
	mov dword ptr [esp+0x10],0
	push eax
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x10],0
	call ZXString<char>::AssignWideStr
	mov ecx,dword ptr [esp+0x28]
	mov eax,dword ptr [ecx]
	mov dword ptr [esp+0x18],1
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax-4]
	jmp Block3

 Block2:
	xor ecx,ecx

 Block3:
	push ecx
	push eax
	lea ecx,[esp+0x10]
	call ZXString<char>::_Cat
	mov esi,dword ptr [esp+0x20]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0xC],1
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret
}
}
// CQuestMan::CheckCompleteDemand
_SUB_EXCEPTION_HANDLER(2BC3D0)
// 6BDD50
static uint8_t _SUB_2BC3D0_LOOKUP_TABLE_0[103] = {
0, 1, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 3, 3, 3, 
};
__SUB_CLASS_THIS(002BC3D0, __thiscall, 57108,  CQuestMan, long, uint16_t, unsigned long, const CharacterData&, const SecondaryStat&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2BC3D0
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
	mov dword ptr [esp+0x24],ecx
	mov esi,dword ptr [esp+0x88]
	lea eax,[esi-0x4B0]
	mov edx,0xC7
	cmp ax,dx
	jbe Block7

 Block1:
	xor ebp,ebp
	cmp si,bp
	je Block7

 Block2:
	mov dword ptr [esp+0x3C],ebp
	lea eax,[esp+0x38]
	push eax
	lea edx,[esp+0x8C]
	push edx
	sub ecx,0xFFFFFF80
	mov dword ptr [esp+0x88],ebp
	call ZMap<unsigned short, ZRef<QuestDemand>, unsigned short>::GetAt
	test eax,eax
	je Block6

 Block3:
	mov dword ptr [esp+0x14],ebp
	mov edi,dword ptr [esp+0x90]
	movzx eax,si
	lea edx,[esp+0x14]
	mov dword ptr [esp+0x20],eax
	push edx
	lea eax,[esp+0x24]
	lea ecx,[edi+0x6F5]
	push eax
	mov byte ptr [esp+0x88],1
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetAt
	test eax,eax
	jne Block8

 Block4:
	mov byte ptr [esp+0x80],al
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>

 Block7:
	mov eax,0xC
	jmp Block397

 Block8:
	mov ebx,dword ptr [esp+0x3C]
	mov eax,dword ptr [ebx+0x18]
	cmp eax,ebp
	je Block13

 Block9:
	cmp eax,dword ptr [esp+0x8C]
	je Block13

 Block10:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	cmp eax,ebp
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,1
	jmp Block397

 Block13:
	mov dword ptr [esp+0x8C],ebp
	mov dword ptr [esp+0x20],ebp
	lea ebx,[ebx]

 Block14:
	mov eax,dword ptr [ebx+0x74]
	cmp eax,ebp
	je Block69

 Block15:
	mov ecx,dword ptr [esp+0x8C]
	cmp ecx,dword ptr [eax-4]
	jae Block69

 Block16:
	mov ebp,eax
	add ebp,dword ptr [esp+0x20]
	mov eax,0x431BDE83
	mov ecx,dword ptr [ebp]
	imul ecx
	sar edx,0x12
	mov esi,edx
	shr esi,0x1F
	xor eax,eax
	add esi,edx
	push esi
	mov ecx,edi
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x1C],eax
	lea ebx,[eax+1]
	call CharacterData::GetItemSlotCount
	cmp eax,ebx
	jl Block28

 Block17:
	mov ecx,dword ptr [esp+0x90]
	push ebx
	push esi
	lea edx,[esp+0x50]
	push edx
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block22

 Block18:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x4C]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x4C]
	test ecx,ecx
	je Block21

 Block20:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block21:
	mov dword ptr [esp+0x4C],0

 Block22:
	test edi,edi
	je Block27

 Block23:
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	cmp eax,dword ptr [ebp]
	jne Block27

 Block24:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov ecx,edi
	call eax
	mov edx,dword ptr [edi]
	test eax,eax
	mov eax,dword ptr [edx+0x20]
	mov ecx,edi
	jne Block26

 Block25:
	call eax
	add dword ptr [esp+0x1C],eax
	jmp Block27

 Block26:
	call eax
	add dword ptr [esp+0x18],eax

 Block27:
	mov ecx,dword ptr [esp+0x90]
	push esi
	inc ebx
	call CharacterData::GetItemSlotCount
	cmp ebx,eax
	jle Block17

 Block28:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	test eax,eax
	je Block39

 Block29:
	mov ecx,dword ptr [esp+0x90]
	mov edx,dword ptr [ebp]
	push ecx
	push edx
	lea eax,[esp+0x30]
	push eax
	call get_equiped_from_item
	add esp,0xC
	mov ecx,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x80],2
	test ecx,ecx
	je Block33

 Block30:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	call eax
	mov esi,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x2C]
	test eax,eax
	jne Block32

 Block31:
	inc esi
	jmp Block34

 Block32:
	inc dword ptr [esp+0x18]
	jmp Block34

 Block33:
	mov esi,dword ptr [esp+0x1C]

 Block34:
	mov byte ptr [esp+0x80],1
	test ecx,ecx
	je Block40

 Block35:
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block38

 Block36:
	mov ecx,dword ptr [esp+0x2C]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x2C]
	test ecx,ecx
	je Block38

 Block37:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block38:
	mov dword ptr [esp+0x2C],0
	jmp Block40

 Block39:
	mov esi,dword ptr [esp+0x1C]

 Block40:
	mov eax,dword ptr [ebp+4]
	test eax,eax
	jle Block43

 Block41:
	cmp esi,eax
	jl Block49

 Block42:
	test eax,eax

 Block43:
	jge Block45

 Block44:
	lea ecx,[eax+esi]
	test ecx,ecx
	jg Block56

 Block45:
	test eax,eax
	jne Block48

 Block46:
	test esi,esi
	jne Block63

 Block47:
	cmp dword ptr [esp+0x18],esi
	jne Block66

 Block48:
	inc dword ptr [esp+0x8C]
	add dword ptr [esp+0x20],0xC
	mov edi,dword ptr [esp+0x90]
	mov ebx,dword ptr [esp+0x3C]
	xor ebp,ebp
	jmp Block14

 Block49:
	mov edx,dword ptr [esp+0x18]
	add edx,esi
	cmp edx,eax
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	jge Block53

 Block50:
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block52:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,2
	jmp Block397

 Block53:
	test eax,eax
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block55:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,7
	jmp Block397

 Block56:
	add eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x80],0
	add eax,esi
	test eax,eax
	mov eax,dword ptr [esp+0x14]
	jle Block60

 Block57:
	test eax,eax
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block59:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,2
	jmp Block397

 Block60:
	test eax,eax
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block62:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,7
	jmp Block397

 Block63:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block65

 Block64:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block65:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,2
	jmp Block397

 Block66:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block68:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,7
	jmp Block397

 Block69:
	mov dword ptr [esp+0x8C],ebp

 Block70:
	mov eax,dword ptr [ebx+0x70]
	cmp eax,ebp
	je Block92

 Block71:
	mov ecx,dword ptr [esp+0x8C]
	cmp ecx,dword ptr [eax-4]
	jae Block92

 Block72:
	mov edx,eax
	mov eax,ecx
	mov ebp,dword ptr [edx+eax*8+4]
	lea esi,[edx+eax*8]
	test ebp,ebp
	jne Block75

 Block73:
	movzx ecx,word ptr [esi]
	lea edx,[esp+0x20]
	mov dword ptr [esp+0x20],ecx
	push edx
	lea ecx,[edi+0x6F5]
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetPos
	test eax,eax
	jne Block80

 Block74:
	push esi
	lea ecx,[edi+0x5B5]
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetPos
	test eax,eax
	jne Block80

 Block75:
	cmp ebp,1
	jne Block77

 Block76:
	movzx eax,word ptr [esi]
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[edi+0x6F5]
	mov dword ptr [esp+0x24],eax
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetPos
	test eax,eax
	je Block86

 Block77:
	cmp ebp,2
	jne Block79

 Block78:
	push esi
	lea ecx,[edi+0x5B5]
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetPos
	test eax,eax
	je Block89

 Block79:
	inc dword ptr [esp+0x8C]
	xor ebp,ebp
	jmp Block70

 Block80:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block82

 Block81:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block82:
	add ebx,0xFFFFFFF0
	lea esi,[ebx+4]
	push esi
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block85

 Block83:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebx,ebx
	je Block85

 Block84:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block85:
	mov eax,3
	jmp Block397

 Block86:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block88

 Block87:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block88:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,3
	jmp Block397

 Block89:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block91

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block91:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,3
	jmp Block397

 Block92:
	mov ebx,dword ptr [ebx+0x5C]
	cmp ebx,ebp
	je Block132

 Block93:
	cmp dword ptr [ebx-4],0
	je Block132

 Block94:
	mov dword ptr [esp+0x1C],0
	mov edi,dword ptr [esp+0x3C]
	cmp dword ptr [edi+0x64],0
	mov byte ptr [esp+0x80],3
	jne Block98

 Block95:
	lea ecx,[esp+0x14]
	push ecx
	lea ecx,[esp+0x20]
	call ZXString<char>::op_assign

 Block96:
	mov eax,dword ptr [edi+0x60]
	test eax,eax
	jne Block104

 Block97:
	jmp Block105

 Block98:
	movzx edx,word ptr [edi+0x64]
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x90]
	push ecx
	mov ecx,dword ptr [esp+0x98]
	add ecx,0x6F5
	mov dword ptr [esp+0x94],edx
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetAt
	test eax,eax
	jne Block96

 Block99:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x80],1
	test eax,eax
	je Block101

 Block100:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block101:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block103

 Block102:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block103:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,5
	jmp Block397

 Block104:
	mov eax,dword ptr [eax-4]

 Block105:
	mov esi,dword ptr [esp+0x1C]
	xor edx,edx
	test eax,eax
	setne dl
	xor ecx,ecx
	mov dword ptr [esp+0x8C],ecx
	mov dword ptr [esp+0x28],edx

 Block106:
	mov eax,dword ptr [edi+0x5C]
	test eax,eax
	je Block166

 Block107:
	cmp ecx,dword ptr [eax-4]
	jae Block166

 Block108:
	cmp dword ptr [esp+0x28],0
	je Block129

 Block109:
	test esi,esi
	je Block112

 Block110:
	cmp byte ptr [esi],0
	je Block112

 Block111:
	push esi
	call _atoi
	add esp,4
	mov dword ptr [esp+0x20],eax
	jmp Block113

 Block112:
	mov dword ptr [esp+0x20],0

 Block113:
	mov edi,dword ptr [esp+0x8C]
	mov ebx,dword ptr [esp+0x3C]
	mov eax,dword ptr [ebx+0x5C]
	add edi,edi
	add edi,edi
	add eax,edi
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov ebp,eax
	mov eax,dword ptr [ebx+0x60]
	mov eax,dword ptr [edi+eax]
	add esp,4
	cmp eax,0x66
	ja Block147

 Block114:
	movzx ecx,byte ptr [eax+_SUB_2BC3D0_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block115
cmp ECX, 1
je Block116
cmp ECX, 2
je Block120
cmp ECX, 3
je Block121
cmp ECX, 4
je Block147


 Block115:
	mov ebx,dword ptr [ebx+0x5C]
	add ebx,edi
	mov ebx,dword ptr [ebx]
	push ebx
	lea ecx,[esp+0x20]
	call ZXString<char>::CompareNoCase
	neg eax
	sbb eax,eax
	inc eax
	jmp Block118

 Block116:
	xor eax,eax
	cmp ebp,dword ptr [esp+0x20]

 Block117:
	setle al

 Block118:
	test eax,eax
	jne Block130

 Block119:
	inc dword ptr [esp+0x8C]
	mov edi,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esp+0x8C]
	jmp Block106

 Block120:
	xor eax,eax
	cmp ebp,dword ptr [esp+0x20]
	setge al
	jmp Block118

 Block121:
	xor eax,eax
	mov dword ptr [esp+0x5A],eax
	mov dword ptr [esp+0x5E],eax
	mov dword ptr [esp+0x62],eax
	mov word ptr [esp+0x66],ax
	mov dword ptr [esp+0x48],eax
	mov dword ptr [esp+0x4C],eax
	lea eax,[esp+0x68]
	xor edx,edx
	push eax
	mov word ptr [esp+0x5C],dx
	call dword ptr [ZImports::_GetLocalTime]
	lea ecx,[esp+0x50]
	push ecx
	lea edx,[esp+0x6C]
	push edx
	call dword ptr [ZImports::_SystemTimeToFileTime]
	test esi,esi
	je Block136

 Block122:
	push esi
	call dword ptr [ZImports::_lstrlenA]
	cmp eax,0xE
	jne Block136

 Block123:
	movsx ax,byte ptr [esi]
	movsx ecx,byte ptr [esi+1]
	sub ax,0x30
	imul ax,0xA
	add ax,cx
	sub ax,0x30
	cmp ax,0x32
	sbb edx,edx
	and edx,0x64
	add edx,0x76C
	add ax,dx
	mov word ptr [esp+0x58],ax
	movsx eax,byte ptr [esi+3]
	movsx ecx,byte ptr [esi+4]
	sub ax,0x30
	imul ax,0xA
	add ax,cx
	sub ax,0x30
	mov word ptr [esp+0x5A],ax
	movsx dx,byte ptr [esi+6]
	movsx eax,byte ptr [esi+7]
	sub dx,0x30
	imul dx,0xA
	add dx,ax
	sub dx,0x30
	xor ecx,ecx
	mov word ptr [esp+0x5E],dx
	xor edx,edx
	mov word ptr [esp+0x60],cx
	lea ecx,[esp+0x48]
	mov word ptr [esp+0x62],dx
	push ecx
	lea edx,[esp+0x5C]
	xor eax,eax
	push edx
	mov word ptr [esp+0x6C],ax
	call dword ptr [ZImports::_SystemTimeToFileTime]
	push 0
	push 0
	push 0
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x58]
	push ecx
	lea edx,[esp+0x64]
	push edx
	mov dword ptr [esp+0x30],0xFFFFFFFF
	call Util::FTSubtract
	mov eax,dword ptr [ebx+0x60]
	mov edi,dword ptr [edi+eax]
	add esp,0x18
	cmp edi,0x64
	jne Block125

 Block124:
	xor eax,eax
	cmp dword ptr [esp+0x18],ebp
	sete al
	jmp Block118

 Block125:
	cmp edi,0x65
	jne Block127

 Block126:
	xor eax,eax
	cmp dword ptr [esp+0x18],ebp
	setge al
	jmp Block118

 Block127:
	cmp edi,0x66
	jne Block119

 Block128:
	xor eax,eax
	cmp dword ptr [esp+0x18],ebp
	jmp Block117

 Block129:
	mov edx,eax
	lea eax,[edx+ecx*4]
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::CompareNoCase
	test eax,eax
	jne Block119

 Block130:
	mov byte ptr [esp+0x80],1
	test esi,esi
	je Block132

 Block131:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block132:
	mov edi,dword ptr [esp+0x3C]
	mov eax,dword ptr [edi+0x78]
	mov esi,dword ptr [esp+0x14]
	test eax,eax
	je Block202

 Block133:
	cmp dword ptr [eax-4],0
	jbe Block202

 Block134:
	test esi,esi
	je Block177

 Block135:
	mov ecx,dword ptr [esi-4]
	jmp Block178

 Block136:
	cmp dword ptr [ebx+0x64],0
	mov byte ptr [esp+0x80],1
	jne Block142

 Block137:
	test esi,esi
	je Block139

 Block138:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block139:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block141

 Block140:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block141:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,4
	jmp Block397

 Block142:
	test esi,esi
	je Block144

 Block143:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block144:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block146

 Block145:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block146:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,5
	jmp Block397

 Block147:
	cmp dword ptr [ebx+0x64],0
	mov byte ptr [esp+0x80],1
	jne Block157

 Block148:
	test esi,esi
	je Block150

 Block149:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block150:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block152

 Block151:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block152:
	lea esi,[ebx-0x10]

 Block153:
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block156

 Block154:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block156

 Block155:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block156:
	mov eax,4
	jmp Block397

 Block157:
	test esi,esi
	je Block159

 Block158:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block159:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block161

 Block160:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block161:
	lea esi,[ebx-0x10]

 Block162:
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block165

 Block163:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block165

 Block164:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block165:
	mov eax,5
	jmp Block397

 Block166:
	cmp dword ptr [edi+0x64],0
	mov byte ptr [esp+0x80],1
	jne Block172

 Block167:
	test esi,esi
	je Block169

 Block168:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block169:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block171

 Block170:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block171:
	lea esi,[edi-0x10]
	jmp Block153

 Block172:
	test esi,esi
	je Block174

 Block173:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block174:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block176

 Block175:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block176:
	lea esi,[edi-0x10]
	jmp Block162

 Block177:
	xor ecx,ecx

 Block178:
	mov eax,0x55555556
	imul ecx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea eax,[eax+eax*2]
	sub ecx,eax
	jne Block195

 Block179:
	test esi,esi
	je Block181

 Block180:
	mov edx,dword ptr [esi-4]
	jmp Block182

 Block181:
	xor edx,edx

 Block182:
	mov eax,dword ptr [edi+0x78]
	test eax,eax
	jne Block184

 Block183:
	xor ecx,ecx
	jmp Block185

 Block184:
	mov ecx,dword ptr [eax-4]

 Block185:
	mov eax,0x55555556
	imul edx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,ecx
	jb Block195

 Block186:
	xor ebp,ebp
	xor esi,esi
	lea ecx,[ecx]

 Block187:
	mov eax,dword ptr [edi+0x78]
	test eax,eax
	je Block202

 Block188:
	cmp ebp,dword ptr [eax-4]
	jae Block202

 Block189:
	lea ecx,[esi+3]
	push ecx
	push esi
	lea edx,[esp+0x94]
	push edx
	lea ecx,[esp+0x20]
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov ebx,eax
	mov eax,dword ptr [esp+0x90]
	add esp,4
	test eax,eax
	je Block191

 Block190:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block191:
	mov eax,dword ptr [edi+0x78]
	cmp ebx,dword ptr [eax+ebp*8+4]
	jl Block193

 Block192:
	inc ebp
	add esi,3
	jmp Block187

 Block193:
	cmp dword ptr [esp+0x14],0
	mov byte ptr [esp+0x80],0
	je Block198

 Block194:
	mov ecx,dword ptr [esp+0x14]
	add ecx,0xFFFFFFF4
	push ecx
	jmp Block197

 Block195:
	mov byte ptr [esp+0x80],0
	test esi,esi
	je Block198

 Block196:
	add esi,0xFFFFFFF4
	push esi

 Block197:
	call ZXString<char>::_Release
	add esp,4

 Block198:
	lea esi,[edi-0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block201

 Block199:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block201

 Block200:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block201:
	mov eax,6
	jmp Block397

 Block202:
	mov eax,dword ptr [edi+0x8C]
	mov ebx,dword ptr [esp+0x90]
	test eax,eax
	je Block220

 Block203:
	mov ecx,dword ptr [ebx+0x1F]
	mov edx,dword ptr [ebx+0x1B]
	push ecx
	push edx
	push 5
	mov ecx,ebx
	call CharacterData::FindCashItemSlotPosition_0
	test eax,eax
	jle Block205

 Block204:
	mov ecx,dword ptr [ebx+0x515]
	mov esi,dword ptr [ecx+eax*8+4]
	test esi,esi
	jne Block211

 Block205:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block207

 Block206:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block207:
	lea esi,[edi-0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block210

 Block208:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block210

 Block209:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block210:
	mov eax,8
	jmp Block397

 Block211:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	push 0
	lea ecx,[esp+0x94]
	push ecx
	lea ecx,[edi+0x80]
	mov dword ptr [esp+0x98],eax
	call ZMap<long, int, long>::GetAt
	test eax,eax
	jne Block215

 Block212:
	mov byte ptr [esp+0x80],al
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block214

 Block213:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block214:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,9
	jmp Block397

 Block215:
	mov edx,dword ptr [esi+0x3F]
	push edx
	lea ebp,[esi+0x3B]
	push ebp
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	cwde
	add esp,8
	cmp dword ptr [edi+0x10],eax
	jg Block217

 Block216:
	mov ecx,dword ptr [esi+0x3F]
	push ecx
	push ebp
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	movsx edx,ax
	add esp,8
	cmp dword ptr [edi+0x14],edx
	jge Block220

 Block217:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block219

 Block218:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block219:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,9
	jmp Block397

 Block220:
	cmp dword ptr [edi+0xC4],0
	jne Block222

 Block221:
	cmp dword ptr [edi+0xC0],0
	je Block240

 Block222:
	mov eax,dword ptr [ebx+0x1F]
	mov ecx,dword ptr [ebx+0x1B]
	push eax
	push ecx
	push 5
	mov ecx,ebx
	call CharacterData::FindCashItemSlotPosition_0
	test eax,eax
	jle Block224

 Block223:
	mov edx,dword ptr [ebx+0x515]
	mov esi,dword ptr [edx+eax*8+4]
	test esi,esi
	jne Block230

 Block224:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block226

 Block225:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block226:
	lea esi,[edi-0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block229

 Block227:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block229

 Block228:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block229:
	mov eax,8
	jmp Block397

 Block230:
	cmp dword ptr [edi+0xC0],0
	je Block235

 Block231:
	mov eax,dword ptr [esi+0x55]
	push eax
	lea ecx,[esi+0x51]
	push ecx
	call _ZtlSecureFuseHelper<unsigned short>::call
	add esp,8
	test al,al
	jns Block235

 Block232:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block234

 Block233:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block234:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,9
	jmp Block397

 Block235:
	cmp dword ptr [edi+0xC4],0
	je Block240

 Block236:
	mov edx,dword ptr [esi+0x55]
	push edx
	add esi,0x51
	push esi
	call _ZtlSecureFuseHelper<unsigned short>::call
	mov ecx,0x100
	add esp,8
	test cx,ax
	je Block240

 Block237:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block239

 Block238:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block239:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,9
	jmp Block397

 Block240:
	cmp dword ptr [edi+0x34],0
	jbe Block245

 Block241:
	mov edx,dword ptr [ebx+0xBD]
	push edx
	lea eax,[ebx+0xB5]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp dword ptr [edi+0x34],eax
	jbe Block245

 Block242:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block244

 Block243:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block244:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,0xA
	jmp Block397

 Block245:
	cmp dword ptr [edi+0x1C],0
	je Block250

 Block246:
	mov ecx,dword ptr [ebx+0x35]
	push ecx
	lea edx,[ebx+0x33]
	push edx
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx eax,al
	add esp,8
	cmp dword ptr [edi+0x1C],eax
	jbe Block250

 Block247:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block249

 Block248:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block249:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,0x10
	jmp Block397

 Block250:
	lea ecx,[esp+0x40]
	push ebx
	push ecx
	call CMonsterBookAccessor::GetInfo
	add esp,8
	mov eax,dword ptr [edi+0xB4]
	mov ecx,dword ptr [esp+0x44]
	mov byte ptr [esp+0x80],4
	test eax,eax
	jl Block256

 Block251:
	test ecx,ecx
	je Block256

 Block252:
	cmp eax,dword ptr [ecx+0x18]
	jle Block256

 Block253:
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x80],1
	call ZRef<MonsterBookInfo>::~ZRef<MonsterBookInfo>
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block255

 Block254:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block255:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,2
	jmp Block397

 Block256:
	mov eax,dword ptr [edi+0xB8]
	test eax,eax
	jl Block262

 Block257:
	test ecx,ecx
	je Block262

 Block258:
	cmp eax,dword ptr [ecx+0x18]
	jge Block262

 Block259:
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x80],1
	call ZRef<MonsterBookInfo>::~ZRef<MonsterBookInfo>
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block261

 Block260:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block261:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,2
	jmp Block397

 Block262:
	xor ebp,ebp
	mov dword ptr [esp+0x8C],ebp
	lea ebx,[ebx]

 Block263:
	mov eax,dword ptr [edi+0xBC]
	test eax,eax
	je Block284

 Block264:
	mov edx,dword ptr [esp+0x8C]
	cmp edx,dword ptr [eax-4]
	jae Block284

 Block265:
	mov esi,eax
	mov eax,dword ptr [esi+ebp]
	add esi,ebp
	push eax
	push ebx
	call CMonsterBookAccessor::GetCount
	mov ecx,dword ptr [esi+4]
	add esp,8
	test ecx,ecx
	jl Block267

 Block266:
	cmp ecx,eax
	jg Block270

 Block267:
	mov esi,dword ptr [esi+8]
	test esi,esi
	jl Block269

 Block268:
	cmp esi,eax
	jl Block281

 Block269:
	inc dword ptr [esp+0x8C]
	add ebp,0xC
	jmp Block263

 Block270:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x80],1
	test eax,eax
	je Block275

 Block271:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block274

 Block272:
	mov ecx,dword ptr [esp+0x44]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x44]
	test ecx,ecx
	je Block274

 Block273:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block274:
	mov dword ptr [esp+0x44],0

 Block275:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block277

 Block276:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block277:
	lea esi,[edi-0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block280

 Block278:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block280

 Block279:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block280:
	mov eax,2
	jmp Block397

 Block281:
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x80],1
	call ZRef<MonsterBookInfo>::~ZRef<MonsterBookInfo>
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block283

 Block282:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block283:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,2
	jmp Block397

 Block284:
	cmp dword ptr [edi+0xDC],0
	jl Block299

 Block285:
	push 0
	push 1
	lea ecx,[esp+0x94]
	mov dword ptr [esp+0x94],0
	call ZXString<char>::GetBuffer
	mov cl,byte ptr [_S_S]
	mov byte ptr [eax],cl
	push 1
	lea ecx,[esp+0x90]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [esp+0x24]
	push ebx
	lea edx,[esp+0x90]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x88],5
	call CQuestMan::GetPartyQuestRankCount
	cmp dword ptr [edi+0xDC],eax
	mov eax,dword ptr [esp+0x8C]
	setg byte ptr [esp+0x90]
	mov byte ptr [esp+0x80],4
	test eax,eax
	je Block287

 Block286:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block287:
	cmp byte ptr [esp+0x90],0
	je Block300

 Block288:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x80],1
	test eax,eax
	je Block293

 Block289:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block292

 Block290:
	mov eax,dword ptr [esp+0x44]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x44]
	test ecx,ecx
	je Block292

 Block291:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block292:
	mov dword ptr [esp+0x44],0

 Block293:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block295

 Block294:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block295:
	lea esi,[edi-0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block298

 Block296:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block298

 Block297:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block298:
	mov eax,0xC
	jmp Block397

 Block299:
	mov esi,dword ptr [esp+0x24]

 Block300:
	cmp dword ptr [edi+0xE4],0
	jl Block305

 Block301:
	push 1
	push ebx
	mov ecx,esi
	call CQuestMan::GetCompletedQuestCnt
	cmp eax,dword ptr [edi+0xE4]
	jge Block305

 Block302:
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x80],1
	call ZRef<MonsterBookInfo>::~ZRef<MonsterBookInfo>
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block304

 Block303:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block304:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,0xC
	jmp Block397

 Block305:
	cmp dword ptr [edi+0xE0],0
	jl Block310

 Block306:
	mov ecx,dword ptr [ebx+0xB1]
	push ecx
	lea edx,[ebx+0xAD]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	cwde
	add esp,8
	cmp eax,dword ptr [edi+0xE0]
	jge Block310

 Block307:
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x80],1
	call ZRef<MonsterBookInfo>::~ZRef<MonsterBookInfo>
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block309

 Block308:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block309:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,0xC
	jmp Block397

 Block310:
	cmp dword ptr [edi+0xE8],0
	jl Block315

 Block311:
	mov ecx,dword ptr [ebx+0x35]
	push ecx
	lea edx,[ebx+0x33]
	push edx
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx eax,al
	add esp,8
	cmp eax,dword ptr [edi+0xE8]
	jge Block315

 Block312:
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x80],1
	call ZRef<MonsterBookInfo>::~ZRef<MonsterBookInfo>
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block314

 Block313:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block314:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,0xC
	jmp Block397

 Block315:
	mov ebp,dword ptr [esp+0x88]
	push ebp
	mov ecx,esi
	call CQuestMan::IsDailyPlayQuest
	test eax,eax
	je Block320

 Block316:
	push ebp
	mov ecx,ebx
	call CharacterData::IsSuccessPlayTimeQuest
	test eax,eax
	jne Block320

 Block317:
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x80],1
	call ZRef<MonsterBookInfo>::~ZRef<MonsterBookInfo>
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block319

 Block318:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block319:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,0xC
	jmp Block397

 Block320:
	cmp dword ptr [edi+0xCC],0
	mov ebp,dword ptr [esp+0x94]
	je Block325

 Block321:
	mov ecx,dword ptr [ebp+0x5A8]
	push ecx
	lea edx,[ebp+0x5A0]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp dword ptr [edi+0xCC],eax
	je Block325

 Block322:
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x80],1
	call ZRef<MonsterBookInfo>::~ZRef<MonsterBookInfo>
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block324

 Block323:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block324:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,0xD
	jmp Block397

 Block325:
	xor esi,esi
	nop

 Block326:
	mov eax,dword ptr [edi+0xD0]
	test eax,eax
	je Block334

 Block327:
	cmp esi,dword ptr [eax-4]
	jae Block334

 Block328:
	cmp dword ptr [eax+esi*4],0
	lea eax,[eax+esi*4]
	je Block330

 Block329:
	mov ecx,dword ptr [eax]
	neg ecx
	push ecx
	mov ecx,ebp
	call SecondaryStat::IsSetted
	test eax,eax
	je Block331

 Block330:
	inc esi
	jmp Block326

 Block331:
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x80],1
	call ZRef<MonsterBookInfo>::~ZRef<MonsterBookInfo>
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block333

 Block332:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block333:
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	call ZRef<QuestDemand>::~ZRef<QuestDemand>
	mov eax,0xE
	jmp Block397

 Block334:
	xor esi,esi
	jmp Block336

 Block336:
	mov eax,dword ptr [edi+0xD4]
	test eax,eax
	je Block352

 Block337:
	cmp esi,dword ptr [eax-4]
	jae Block352

 Block338:
	mov edx,eax
	cmp dword ptr [edx+esi*4],0
	lea eax,[edx+esi*4]
	je Block340

 Block339:
	mov eax,dword ptr [eax]
	neg eax
	push eax
	mov ecx,ebp
	call SecondaryStat::IsSetted
	test eax,eax
	jne Block341

 Block340:
	inc esi
	jmp Block336

 Block341:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x80],1
	test eax,eax
	je Block346

 Block342:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block345

 Block343:
	mov ecx,dword ptr [esp+0x44]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x44]
	test ecx,ecx
	je Block345

 Block344:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block345:
	mov dword ptr [esp+0x44],0

 Block346:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block348

 Block347:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block348:
	lea esi,[edi-0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block351

 Block349:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block351

 Block350:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block351:
	mov eax,0xF
	jmp Block397

 Block352:
	mov eax,dword ptr [edi+0xF0]
	test eax,eax
	je Block374

 Block353:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block374

 Block354:
	cmp byte ptr [eax],0
	je Block374

 Block355:
	xor ebp,ebp
	push ebp
	push 4
	lea ecx,[esp+0x98]
	mov dword ptr [esp+0x98],ebp
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_KEPT]
	mov dword ptr [eax],ecx
	push 4
	lea ecx,[esp+0x94]
	call ZXString<char>::ReleaseBuffer
	mov eax,dword ptr [esp+0x88]
	lea edx,[esp+0x90]
	push edx
	push eax
	lea ecx,[esp+0x94]
	push ecx
	mov ecx,ebx
	mov byte ptr [esp+0x8C],6
	call CharacterData::GetQuestEx
	mov eax,dword ptr [esp+0x8C]
	cmp eax,ebp
	je Block357

 Block356:
	cmp byte ptr [eax],0
	jne Block372

 Block357:
	mov byte ptr [esp+0x80],6
	cmp eax,ebp
	je Block359

 Block358:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block359:
	mov eax,dword ptr [esp+0x90]
	mov byte ptr [esp+0x80],4
	cmp eax,ebp
	je Block361

 Block360:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block361:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x80],1
	cmp eax,ebp
	je Block366

 Block362:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block365

 Block363:
	mov edx,dword ptr [esp+0x44]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x44]
	cmp ecx,ebp
	je Block365

 Block364:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block365:
	mov dword ptr [esp+0x44],ebp

 Block366:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	cmp eax,ebp
	je Block368

 Block367:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block368:
	lea esi,[edi-0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block371

 Block369:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block371

 Block370:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block371:
	mov eax,0x11
	jmp Block397

 Block372:
	add eax,0xFFFFFFF4
	push eax
	mov byte ptr [esp+0x84],6
	call ZXString<char>::_Release
	mov eax,dword ptr [esp+0x94]
	add esp,4
	mov byte ptr [esp+0x80],4
	cmp eax,ebp
	je Block374

 Block373:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block374:
	lea eax,[esp+0x28]
	push eax
	call Util::STGetNow
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [eax+8]
	mov dword ptr [esp+0x64],edx
	mov dword ptr [esp+0x5C],ecx
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [eax+0xC]
	mov edx,1
	shl edx,cl
	add esp,4
	mov dword ptr [esp+0x64],eax
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x80],1
	test dword ptr [edi+0xC8],edx
	jne Block386

 Block375:
	test eax,eax
	je Block380

 Block376:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block379

 Block377:
	mov eax,dword ptr [esp+0x44]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x44]
	test ecx,ecx
	je Block379

 Block378:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block379:
	mov dword ptr [esp+0x44],0

 Block380:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block382

 Block381:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block382:
	lea esi,[edi-0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block385

 Block383:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block385

 Block384:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block385:
	mov eax,0x12
	jmp Block397

 Block386:
	test eax,eax
	je Block391

 Block387:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block390

 Block388:
	mov ecx,dword ptr [esp+0x44]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x44]
	test ecx,ecx
	je Block390

 Block389:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block390:
	mov dword ptr [esp+0x44],0

 Block391:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x80],0
	test eax,eax
	je Block393

 Block392:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block393:
	lea esi,[edi-0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block396

 Block394:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block396

 Block395:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block396:
	xor eax,eax

 Block397:
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret 0x10
}
}
// CQuestMan::IsDailyPlayQuest
__SUB_CLASS_THIS(002B58A0, __thiscall, 57112,  CQuestMan, int32_t, uint16_t) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+8]
	push esi
	push eax
	mov esi,ecx
	call CQuestMan::IsTimeLimitQuest2
	test eax,eax
	jne Block2

 Block1:
	pop esi
	pop ecx
	ret 4

 Block2:
	lea ecx,[esp+4]
	push ecx
	lea edx,[esp+0x10]
	push edx
	lea ecx,[esi+0x218]
	call ZMap<unsigned short, long, unsigned short>::GetAt
	neg eax
	sbb eax,eax
	neg eax
	pop esi
	pop ecx
	ret 4
}
}
// CQuestMan::GetKeepTime
_SUB_EXCEPTION_HANDLER(2B8C80)
__SUB_CLASS_THIS(002B8C80, __thiscall, 57123,  CQuestMan, long, uint16_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2B8C80
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
	mov eax,dword ptr [esp+0x28]
	push eax
	lea edx,[esp+0x14]
	push edx
	call CQuestMan::GetTimeKeepInfo
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block5

 Block1:
	mov ebx,dword ptr [eax+4]
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x24],0xFFFFFFFF
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
	mov eax,ebx
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4

 Block5:
	xor eax,eax
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4
}
}
// CQuestMan::DecodeDisallowedDeliveryList
__SUB_CLASS_THIS(002B86D0, __thiscall, 57148,  CQuestMan, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push edi
	lea edi,[ecx+0x98]
	mov ecx,edi
	call ZArray<unsigned short>::RemoveAll
	mov ebx,dword ptr [esp+0xC]
	mov ecx,ebx
	call CInPacket::Decode4
	test eax,eax
	jle Block4

 Block1:
	push ebp
	push esi
	mov ebp,eax

 Block2:
	mov ecx,ebx
	call CInPacket::Decode4
	push 0xFFFFFFFF
	mov ecx,edi
	movzx esi,ax
	call ZArray<unsigned short>::InsertBefore
	sub ebp,1
	mov word ptr [eax],si
	jne Block2

 Block3:
	pop esi
	pop ebp

 Block4:
	pop edi
	pop ebx
	ret 4
}
}
// CQuestMan::GetQuestCategoryName
__SUB_CLASS_THIS(002B9320, __thiscall, 57139,  CQuestMan, ZXString<char>*, ZXString<char>*, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp],0
	test eax,eax
	jl Block4

 Block1:
	mov edx,dword ptr [ecx+0x9C]
	test edx,edx
	je Block4

 Block2:
	cmp eax,dword ptr [edx-4]
	jae Block4

 Block3:
	mov ecx,edx
	push esi
	mov esi,dword ptr [esp+0xC]
	lea eax,[ecx+eax*4]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,esi
	pop esi
	pop ecx
	ret 8

 Block4:
	mov eax,dword ptr [esp+8]
	mov dword ptr [eax],0
	pop ecx
	ret 8
}
}
// _anon__CheckEquippedItemByIndex
__SUB(002B8720, __cdecl, 134018,  int32_t, GW_ItemSlotBase*, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	jne Block2

 Block1:
	ret

 Block2:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	xor ecx,ecx
	cmp eax,dword ptr [esp+8]
	sete cl
	mov eax,ecx
	ret
}
}
// CQuestMan::LoadExclusive
_SUB_EXCEPTION_HANDLER(2B9670)
__SUB_CLASS_THIS0(002B9670, __thiscall, 57100,  CQuestMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2B9670
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x98
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xAC]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x48],ecx
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x6C]
	push eax
	call ebp
	lea ecx,[esp+0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebx,ebx
	add esp,8
	cmp eax,ebx
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x4C]
	push edx
	mov dword ptr [esp+0xB8],ebx
	call ebp
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push ebx
	push ebx
	lea ecx,[esp+0x74]
	push ecx
	lea edx,[esp+0x58]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_QUESTEXCLUSIVEIM
	mov byte ptr [esp+0xCC],1
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xC8],2
	cmp dword ptr [_D_G_RM],ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0xA0]
	mov byte ptr [esp+0xC8],1
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xBC],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0xB4],5
	cmp word ptr [esp+0x8C],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x94]
	xor ecx,ecx
	mov word ptr [esp+0x8C],cx
	cmp eax,ebx
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x8C]
	push edx
	call esi

 Block13:
	mov byte ptr [esp+0xB4],6
	cmp word ptr [esp+0x4C],di
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x4C]
	push ecx
	call esi

 Block17:
	mov byte ptr [esp+0xB4],7
	cmp word ptr [esp+0x6C],di
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x74]
	xor edx,edx
	mov word ptr [esp+0x6C],dx
	cmp eax,ebx
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x6C]
	push eax
	call esi

 Block21:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,ebx
	sete al
	cmp al,bl
	je Block24

 Block22:
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	cmp ecx,ebx
	je Block94

 Block23:
	mov edx,dword ptr [ecx]
	push ecx
	jmp Block93

 Block24:
	cmp ecx,ebx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[esp+0x3C]
	push edx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xB8],8
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block28:
	lea ecx,[esp+0x28]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block31

 Block29:
	cmp eax,0x80004002
	je Block31

 Block30:
	push eax
	call _com_issue_error

 Block31:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0xB4],0xA
	cmp eax,ebx
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block33:
	lea eax,[esp+0x5C]
	push eax
	call ebp
	mov byte ptr [esp+0xB4],0xB
	mov dword ptr [esp+0x40],ebx
	cmp dword ptr [esp+0x24],ebx
	je Block5

 Block34:
	lea ebx,[ebx]

 Block35:
	mov esi,dword ptr [esp+0x24]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x60]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block88

 Block36:
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x20]
	push eax
	call DetachBSTR
	add esp,8
	push ebx
	push ebx
	push ecx
	mov ecx,dword ptr [esp+0x28]
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],ecx
	cmp ecx,ebx
	je Block38

 Block37:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block38:
	lea ecx,[esp+0xA8]
	push ecx
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0xC4],0xD
	mov byte ptr [esp+0xC4],0xC
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xBC],0xE
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x30],esi
	cmp eax,ebx
	je Block41

 Block39:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x34]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x34]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [esp+0x30],esi
	jge Block41

 Block40:
	cmp eax,0x80004002
	jne Block1

 Block41:
	cmp word ptr [esp+0x9C],8
	mov byte ptr [esp+0xB4],0x10
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0xA4]
	xor edx,edx
	mov word ptr [esp+0x9C],dx
	cmp eax,ebx
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea eax,[esp+0x9C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov dword ptr [esp+0x28],ebx
	mov byte ptr [esp+0xB4],0x11
	cmp esi,ebx
	je Block5

 Block46:
	lea ecx,[esp+0x44]
	push ecx
	mov ecx,esi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0xB8],0x12
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block48

 Block47:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block48:
	lea ecx,[esp+0x24]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block50

 Block49:
	cmp eax,0x80004002
	jne Block1

 Block50:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0xB4],0x14
	cmp eax,ebx
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block52:
	lea eax,[esp+0x7C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov ebp,dword ptr [esp+0x20]
	mov byte ptr [esp+0xB4],0x15
	mov dword ptr [esp+0x38],ebx

 Block53:
	cmp ebp,ebx
	je Block5

 Block54:
	mov ecx,dword ptr [ebp]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x80]
	push eax
	push 1
	push ebp
	call ecx
	test eax,eax
	jne Block66

 Block55:
	lea edx,[esp+0x7C]
	push edx
	lea eax,[esp+0x30]
	push eax
	call DetachBSTR
	add esp,8
	mov esi,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xB4],0x16
	cmp esi,ebx
	je Block57

 Block56:
	mov eax,dword ptr [esi]
	jmp Block58

 Block57:
	xor eax,eax

 Block58:
	push eax
	call __wtoi
	add esp,4
	push 0xFFFFFFFF
	lea ecx,[esp+0x2C]
	movzx edi,ax
	call ZArray<unsigned short>::InsertBefore
	mov word ptr [eax],di
	mov byte ptr [esp+0xB4],0x15
	cmp esi,ebx
	je Block53

 Block59:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block65

 Block60:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block62

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block62:
	mov eax,dword ptr [esi+4]
	cmp eax,ebx
	je Block64

 Block63:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block64:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block65:
	mov dword ptr [esp+0x2C],ebx
	jmp Block53

 Block66:
	mov edi,dword ptr [esp+0x28]
	xor ebp,ebp
	jmp Block68

 Block68:
	cmp edi,ebx
	je Block76

 Block69:
	cmp ebp,dword ptr [edi-4]
	jae Block76

 Block70:
	movzx edx,word ptr [edi+ebp*2]
	mov dword ptr [esp+0x14],edx
	xor esi,esi

 Block71:
	cmp esi,dword ptr [edi-4]
	jae Block75

 Block72:
	cmp ebp,esi
	je Block74

 Block73:
	mov ecx,dword ptr [esp+0x48]
	push ebx
	lea eax,[esp+0x18]
	push eax
	add ecx,0x158
	call ZMap<unsigned short, ZArray<unsigned short>, unsigned short>::Insert
	push 0xFFFFFFFF
	lea ecx,[eax+0xC]
	call ZArray<unsigned short>::InsertBefore
	mov cx,word ptr [edi+esi*2]
	mov word ptr [eax],cx

 Block74:
	inc esi
	jmp Block71

 Block75:
	inc ebp
	jmp Block68

 Block76:
	cmp word ptr [esp+0x7C],8
	mov byte ptr [esp+0xB4],0x14
	jne Block79

 Block77:
	mov eax,dword ptr [esp+0x84]
	xor edx,edx
	mov word ptr [esp+0x7C],dx
	cmp eax,ebx
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea eax,[esp+0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xB8],0x11
	call edx
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0xB4],0x10
	call ZArray<unsigned short>::RemoveAll
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xB8],0xC
	call edx
	mov byte ptr [esp+0xB4],0xB
	cmp dword ptr [esp+0x1C],ebx
	je Block35

 Block81:
	mov esi,dword ptr [esp+0x1C]
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block87

 Block82:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block84

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block84:
	mov eax,dword ptr [esi+4]
	cmp eax,ebx
	je Block86

 Block85:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block86:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block87:
	mov dword ptr [esp+0x1C],ebx
	jmp Block35

 Block88:
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0xB4],0xA
	jne Block91

 Block89:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	cmp eax,ebx
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea edx,[esp+0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block92:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0xB8],7
	call ecx
	mov eax,dword ptr [esp+0x18]
	mov edx,dword ptr [eax]
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	push eax

 Block93:
	mov eax,dword ptr [edx+8]
	call eax

 Block94:
	mov ecx,dword ptr [esp+0xAC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA4
	ret
}
}
// CQuestMan::GetQuestByNpc
__SUB_CLASS_THIS(002B7870, __thiscall, 57133,  CQuestMan, int32_t, unsigned long, ZArray<unsigned short>&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	mov ecx,edi
	call ZArray<unsigned short>::RemoveAll
	push edi
	lea eax,[esp+0x10]
	push eax
	lea ecx,[esi+0xA4]
	call ZMap<unsigned long, ZArray<unsigned short>, unsigned long>::GetAt
	neg eax
	sbb eax,eax
	pop edi
	neg eax
	pop esi
	ret 8
}
}
// CQuestMan::IsAutoAutoAcceptQuest
__SUB_CLASS_THIS(002B5820, __thiscall, 57112,  CQuestMan, int32_t, uint16_t) {
__asm {

 Block0:
	push ecx
	lea eax,[esp]
	push eax
	lea edx,[esp+0xC]
	push edx
	add ecx,0x188
	call ZMap<unsigned short, int, unsigned short>::GetAt
	neg eax
	sbb eax,eax
	neg eax
	pop ecx
	ret 4
}
}
// CQuestMan::LoadQuestInfo
_SUB_EXCEPTION_HANDLER(2BEC10)
__SUB_CLASS_THIS0(002BEC10, __thiscall, 57100,  CQuestMan, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2BEC10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x148
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x54],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x10]
	push eax
	call esi
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebx,ebx
	add esp,8
	cmp eax,ebx
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp+0x20]
	push edx
	mov dword ptr [ebp-4],ebx
	call esi
	lea eax,[ebp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push ebx
	push ebx
	lea ecx,[ebp+0x10]
	push ecx
	lea edx,[ebp+0x20]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x48],esp
	push 0xCC1
	push eax
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0x154]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x3C]
	mov dword ptr [ebp+0x3C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	cmp word ptr [ebp-0x154],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],5
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x14C]
	xor edx,edx
	mov word ptr [ebp-0x154],dx
	cmp eax,ebx
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0x154]
	push eax
	call edi

 Block13:
	cmp word ptr [ebp+0x20],8
	mov byte ptr [ebp-4],6
	jne Block16

 Block14:
	mov eax,dword ptr [ebp+0x28]
	xor ecx,ecx
	mov word ptr [ebp+0x20],cx
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp+0x20]
	push edx
	call edi

 Block17:
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],7
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	cmp eax,ebx
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp+0x10]
	push ecx
	call edi

 Block21:
	lea edx,[ebp]
	push edx
	call esi
	mov ecx,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],8
	cmp ecx,ebx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea eax,[ebp+0x34]
	push eax
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],9
	mov dword ptr [ebp+0x40],ebx
	mov dword ptr [ebp+0x48],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block25:
	lea ecx,[ebp+0x40]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block28

 Block26:
	cmp eax,0x80004002
	je Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov eax,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0xB
	cmp eax,ebx
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	push 0x64
	lea ecx,[ebp-0x24]
	mov dword ptr [ebp-0x24],offset ZMAP_US_LONG_VTABLE
	mov dword ptr [ebp-0x20],ebx
	mov dword ptr [ebp-0x1C],0x1F
	mov dword ptr [ebp-0x18],ebx
	call ZMap<unsigned short, long, unsigned short>::_CalcAutoGrow
	mov byte ptr [ebp-4],0xC
	mov dword ptr [ebp+0x30],ebx
	cmp dword ptr [ebp+0x40],ebx
	je Block5

 Block31:
	mov eax,dword ptr [ebp+0x40]
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x30]
	push edx
	lea edx,[ebp]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block187

 Block32:
	lea ecx,[ebp]
	push ecx
	lea edx,[ebp+0x44]
	push edx
	call DetachBSTR
	mov eax,dword ptr [eax]
	add esp,8
	cmp eax,ebx
	je Block34

 Block33:
	mov eax,dword ptr [eax]
	jmp Block35

 Block34:
	xor eax,eax

 Block35:
	push eax
	call __wtoi
	movzx esi,ax
	mov eax,dword ptr [ebp+0x44]
	add esp,4
	mov dword ptr [ebp+0x5C],esi
	cmp eax,ebx
	je Block44

 Block36:
	mov edi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebx
	jne Block43

 Block37:
	cmp edi,ebx
	je Block43

 Block38:
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block40

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block40:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block42

 Block41:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block42:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block43:
	mov dword ptr [ebp+0x44],ebx

 Block44:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push ebx
	push ebx
	movzx ecx,si
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x3C]
	lea eax,[ebp-0x34]
	mov byte ptr [ebp-4],0xD
	push eax
	mov byte ptr [ebp-4],0xC
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xE
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x48],edi
	cmp eax,ebx
	je Block47

 Block45:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x38]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x38]
	cmp eax,ebx
	mov edi,ecx
	mov dword ptr [ebp+0x48],edi
	jge Block47

 Block46:
	cmp eax,0x80004002
	jne Block1

 Block47:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],0x10
	jne Block50

 Block48:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	cmp eax,ebx
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block51:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x671
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x11
	cmp edi,ebx
	je Block5

 Block52:
	lea edx,[ebp-0x144]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x12
	jne Block54

 Block53:
	mov ebx,dword ptr [eax+8]
	jmp Block55

 Block54:
	mov ebx,offset _S___3

 Block55:
	xor esi,esi
	mov dword ptr [ebp+0x58],esi
	test ebx,ebx
	je Block57

 Block56:
	push esi
	push esi
	push esi
	push esi
	push 0xFFFFFFFF
	push ebx
	push esi
	push esi
	call WideCharToMultiByte
	mov esi,eax
	push 0
	dec esi
	push esi
	lea ecx,[ebp+0x58]
	call ZXString<char>::GetBuffer
	push 0
	push 0
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call WideCharToMultiByte
	push esi
	lea ecx,[ebp+0x58]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [ebp+0x58]

 Block57:
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+0x5C]
	push ecx
	mov ecx,dword ptr [ebp+0x54]
	add ecx,0x34
	mov byte ptr [ebp-4],0x13
	call ZMap<unsigned short, ZXString<char>, unsigned short>::Insert
	mov byte ptr [ebp-4],0x12
	test esi,esi
	je Block59

 Block58:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block59:
	cmp word ptr [ebp-0x144],8
	mov byte ptr [ebp-4],0x10
	jne Block62

 Block60:
	mov eax,dword ptr [ebp-0x13C]
	xor edx,edx
	mov word ptr [ebp-0x144],dx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[ebp-0x144]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block63:
	push 0
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_BLOCKED
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x64]
	push ecx
	mov byte ptr [ebp-4],0x14
	mov ecx,edi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x15
	call get_int32
	add esp,8
	mov esi,eax
	neg esi
	sbb esi,esi
	neg esi
	cmp word ptr [ebp-0x64],8
	mov byte ptr [ebp-4],0x10
	jne Block66

 Block64:
	mov eax,dword ptr [ebp-0x5C]
	xor edx,edx
	mov word ptr [ebp-0x64],dx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea eax,[ebp-0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block67:
	test esi,esi
	je Block69

 Block68:
	lea ecx,[ebp+0x60]
	push ecx
	mov ecx,dword ptr [ebp+0x54]
	lea edx,[ebp+0x5C]
	push edx
	add ecx,0x4C
	mov dword ptr [ebp+0x60],1
	call ZMap<unsigned short, int, unsigned short>::Insert

 Block69:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1008
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0xE4]
	push ecx
	mov byte ptr [ebp-4],0x16
	mov ecx,edi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x17
	call get_int32
	add esp,8
	mov ebx,eax
	neg ebx
	sbb ebx,ebx
	neg ebx
	cmp word ptr [ebp-0xE4],8
	mov byte ptr [ebp-4],0x10
	jne Block72

 Block70:
	mov eax,dword ptr [ebp-0xDC]
	xor edx,edx
	mov word ptr [ebp-0xE4],dx
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea eax,[ebp-0xE4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov ecx,0x2904
	cmp word ptr [ebp+0x5C],cx
	jne Block75

 Block74:
	xor ebx,ebx
	jmp Block77

 Block75:
	test ebx,ebx
	je Block77

 Block76:
	mov ecx,dword ptr [ebp+0x54]
	lea edx,[ebp+0x60]
	push edx
	lea eax,[ebp+0x5C]
	push eax
	add ecx,0x170
	mov dword ptr [ebp+0x60],1
	call ZMap<unsigned short, int, unsigned short>::Insert

 Block77:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x140A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x84]
	mov byte ptr [ebp-4],0x18
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x19
	call get_int32
	add esp,8
	mov esi,eax
	neg esi
	sbb esi,esi
	neg esi
	cmp word ptr [ebp-0x84],8
	mov byte ptr [ebp-4],0x10
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [ebp-0x84],ax
	mov eax,dword ptr [ebp-0x7C]
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[ebp-0x84]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov edx,0x2A4E
	cmp word ptr [ebp+0x5C],dx
	je Block84

 Block82:
	test esi,esi
	je Block84

 Block83:
	lea eax,[ebp+0x60]
	push eax
	lea ecx,[ebp+0x5C]
	push ecx
	mov ecx,dword ptr [ebp+0x54]
	add ecx,0x188
	mov dword ptr [ebp+0x60],1
	call ZMap<unsigned short, int, unsigned short>::Insert

 Block84:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x100B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x124]
	mov byte ptr [ebp-4],0x1A
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1B
	call get_int32
	add esp,8
	mov esi,eax
	neg esi
	sbb esi,esi
	neg esi
	cmp word ptr [ebp-0x124],8
	mov byte ptr [ebp-4],0x10
	jne Block87

 Block85:
	mov eax,dword ptr [ebp-0x11C]
	xor ecx,ecx
	mov word ptr [ebp-0x124],cx
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea edx,[ebp-0x124]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block88:
	test esi,esi
	je Block90

 Block89:
	lea eax,[ebp+0x60]
	push eax
	lea ecx,[ebp+0x5C]
	push ecx
	mov ecx,dword ptr [ebp+0x54]
	add ecx,0x1D0
	mov dword ptr [ebp+0x60],1
	call ZMap<unsigned short, int, unsigned short>::Insert

 Block90:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x100C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0xA4]
	mov byte ptr [ebp-4],0x1C
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1D
	call get_int32
	mov esi,eax
	imul esi,0x3E8
	add esp,8
	cmp word ptr [ebp-0xA4],8
	mov dword ptr [ebp+0x60],esi
	mov byte ptr [ebp-4],0x10
	jne Block93

 Block91:
	mov eax,dword ptr [ebp-0x9C]
	xor ecx,ecx
	mov word ptr [ebp-0xA4],cx
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea edx,[ebp-0xA4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block94:
	test esi,esi
	je Block96

 Block95:
	lea eax,[ebp+0x60]
	push eax
	lea ecx,[ebp+0x5C]
	push ecx
	mov ecx,dword ptr [ebp+0x54]
	add ecx,0x1E8
	call ZMap<unsigned short, long, unsigned short>::Insert

 Block96:
	push 0
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_TIMELIMIT2
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x104]
	mov byte ptr [ebp-4],0x1E
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1F
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x104],8
	mov esi,eax
	mov dword ptr [ebp+0x60],esi
	mov byte ptr [ebp-4],0x10
	jne Block99

 Block97:
	xor eax,eax
	mov word ptr [ebp-0x104],ax
	mov eax,dword ptr [ebp-0xFC]
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea ecx,[ebp-0x104]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block100:
	test esi,esi
	je Block102

 Block101:
	mov ecx,dword ptr [ebp+0x54]
	lea edx,[ebp+0x60]
	push edx
	lea eax,[ebp+0x5C]
	push eax
	add ecx,0x200
	call ZMap<unsigned short, long, unsigned short>::Insert

 Block102:
	push 0
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_DAILYPLAYTIME
	call _xbstr_t::_ctor_0
	lea ecx,[ebp-0xC4]
	push ecx
	mov byte ptr [ebp-4],0x20
	mov ecx,edi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x21
	call get_int32
	add esp,8
	cmp word ptr [ebp-0xC4],8
	mov esi,eax
	mov dword ptr [ebp+0x60],esi
	mov byte ptr [ebp-4],0x10
	jne Block105

 Block103:
	mov eax,dword ptr [ebp-0xBC]
	xor edx,edx
	mov word ptr [ebp-0xC4],dx
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea eax,[ebp-0xC4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block106:
	test esi,esi
	je Block108

 Block107:
	lea ecx,[ebp+0x60]
	push ecx
	mov ecx,dword ptr [ebp+0x54]
	lea edx,[ebp+0x5C]
	push edx
	add ecx,0x218
	call ZMap<unsigned short, long, unsigned short>::Insert

 Block108:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x106E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x44]
	push ecx
	mov byte ptr [ebp-4],0x22
	mov ecx,edi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x23
	call get_int32
	add esp,8
	mov esi,eax
	neg esi
	sbb esi,esi
	neg esi
	cmp word ptr [ebp-0x44],8
	mov byte ptr [ebp-4],0x10
	jne Block111

 Block109:
	mov eax,dword ptr [ebp-0x3C]
	xor edx,edx
	mov word ptr [ebp-0x44],dx
	test eax,eax
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea eax,[ebp-0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block112:
	test ebx,ebx
	je Block115

 Block113:
	test esi,esi
	je Block115

 Block114:
	lea ecx,[ebp+0x60]
	push ecx
	mov ecx,dword ptr [ebp+0x54]
	lea edx,[ebp+0x5C]
	push edx
	add ecx,0x1A0
	mov dword ptr [ebp+0x60],1
	call ZMap<unsigned short, int, unsigned short>::Insert

 Block115:
	push 0
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_AUTOCANCEL
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x54]
	mov byte ptr [ebp-4],0x24
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x25
	call get_int32
	add esp,8
	test eax,eax
	setne bl
	cmp word ptr [ebp-0x54],8
	mov byte ptr [ebp-4],0x10
	jne Block118

 Block116:
	mov eax,dword ptr [ebp-0x4C]
	xor ecx,ecx
	mov word ptr [ebp-0x54],cx
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea edx,[ebp-0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block119:
	test bl,bl
	je Block121

 Block120:
	lea eax,[ebp+0x60]
	push eax
	lea ecx,[ebp+0x5C]
	push ecx
	mov ecx,dword ptr [ebp+0x54]
	add ecx,0x1B8
	mov dword ptr [ebp+0x60],1
	call ZMap<unsigned short, int, unsigned short>::Insert

 Block121:
	push 0
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_AUTOCOMPLETE
	call _xbstr_t::_ctor_0
	lea edx,[ebp-0x74]
	mov byte ptr [ebp-4],0x26
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x27
	call get_int32
	add esp,8
	mov esi,eax
	neg esi
	sbb esi,esi
	neg esi
	cmp word ptr [ebp-0x74],8
	mov byte ptr [ebp-4],0x10
	jne Block124

 Block122:
	xor eax,eax
	mov word ptr [ebp-0x74],ax
	mov eax,dword ptr [ebp-0x6C]
	test eax,eax
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea ecx,[ebp-0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block125:
	mov ebx,dword ptr [ebp+0x54]
	test esi,esi
	je Block128

 Block126:
	push 0
	lea edx,[ebp+0x5C]
	lea esi,[ebx+0x294]
	push edx
	mov ecx,esi
	call ZList<unsigned short>::Find
	test eax,eax
	jne Block128

 Block127:
	mov ecx,esi
	call ZList<unsigned short>::AddTail_
	mov cx,word ptr [ebp+0x5C]
	mov word ptr [eax],cx

 Block128:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x6F0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x94]
	mov byte ptr [ebp-4],0x28
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x29
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x94],8
	mov dword ptr [ebp+0x60],eax
	mov byte ptr [ebp-4],0x10
	jne Block131

 Block129:
	mov eax,dword ptr [ebp-0x8C]
	xor ecx,ecx
	mov word ptr [ebp-0x94],cx
	test eax,eax
	je Block132

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block131:
	lea edx,[ebp-0x94]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block132:
	lea eax,[ebp+0x60]
	push eax
	lea ecx,[ebp+0x5C]
	push ecx
	lea ecx,[ebx+0x2BC]
	call ZMap<unsigned short, long, unsigned short>::Insert
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x11C2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0xB4]
	mov byte ptr [ebp-4],0x2A
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2B
	call get_int32
	add esp,8
	cmp word ptr [ebp-0xB4],8
	mov esi,eax
	mov byte ptr [ebp-4],0x10
	jne Block135

 Block133:
	mov eax,dword ptr [ebp-0xAC]
	xor ecx,ecx
	mov word ptr [ebp-0xB4],cx
	test eax,eax
	je Block136

 Block134:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block136

 Block135:
	lea edx,[ebp-0xB4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block136:
	push 0
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebx+0x10C]
	call ZMap<unsigned short, long, unsigned short>::Insert
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x14FE
	push ecx
	mov dword ptr [eax+0xC],esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0xD4]
	mov byte ptr [ebp-4],0x2C
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x2D
	jne Block138

 Block137:
	mov ebx,dword ptr [eax+8]
	jmp Block139

 Block138:
	mov ebx,offset _S___3

 Block139:
	xor esi,esi
	mov dword ptr [ebp+0x58],esi
	test ebx,ebx
	je Block141

 Block140:
	push esi
	push esi
	push esi
	push esi
	push 0xFFFFFFFF
	push ebx
	push esi
	push esi
	call WideCharToMultiByte
	mov esi,eax
	push 0
	dec esi
	push esi
	lea ecx,[ebp+0x58]
	call ZXString<char>::GetBuffer
	push 0
	push 0
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call WideCharToMultiByte
	push esi
	lea ecx,[ebp+0x58]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [ebp+0x58]

 Block141:
	cmp word ptr [ebp-0xD4],8
	mov byte ptr [ebp-4],0x2F
	jne Block144

 Block142:
	xor eax,eax
	mov word ptr [ebp-0xD4],ax
	mov eax,dword ptr [ebp-0xCC]
	test eax,eax
	je Block145

 Block143:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block145

 Block144:
	lea ecx,[ebp-0xD4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block145:
	test esi,esi
	je Block148

 Block146:
	cmp byte ptr [esi],0
	je Block148

 Block147:
	mov ecx,dword ptr [ebp+0x54]
	lea edx,[ebp+0x5C]
	push edx
	lea eax,[ebp+0x58]
	push eax
	add ecx,0x124
	call ZMap<ZXString<char>, unsigned short, ZXString<char>>::Insert

 Block148:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1788
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0xF4]
	mov byte ptr [ebp-4],0x30
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x2F
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x31
	jne Block150

 Block149:
	mov ebx,dword ptr [eax+8]
	jmp Block151

 Block150:
	mov ebx,offset _S___3

 Block151:
	xor esi,esi
	mov dword ptr [ebp+0x4C],esi
	test ebx,ebx
	je Block153

 Block152:
	push esi
	push esi
	push esi
	push esi
	push 0xFFFFFFFF
	push ebx
	push esi
	push esi
	call WideCharToMultiByte
	mov esi,eax
	push 0
	dec esi
	push esi
	lea ecx,[ebp+0x4C]
	call ZXString<char>::GetBuffer
	push 0
	push 0
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call WideCharToMultiByte
	push esi
	lea ecx,[ebp+0x4C]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [ebp+0x4C]

 Block153:
	cmp word ptr [ebp-0xF4],8
	mov byte ptr [ebp-4],0x33
	jne Block156

 Block154:
	xor eax,eax
	mov word ptr [ebp-0xF4],ax
	mov eax,dword ptr [ebp-0xEC]
	test eax,eax
	je Block157

 Block155:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block157

 Block156:
	lea ecx,[ebp-0xF4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block157:
	test esi,esi
	je Block160

 Block158:
	cmp byte ptr [esi],0
	je Block160

 Block159:
	mov ecx,dword ptr [ebp+0x54]
	lea edx,[ebp+0x4C]
	push edx
	lea eax,[ebp+0x5C]
	push eax
	add ecx,0x13C
	call ZMap<unsigned short, ZXString<char>, unsigned short>::Insert

 Block160:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0xCC5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x114]
	mov byte ptr [ebp-4],0x34
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x33
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x35
	jne Block162

 Block161:
	mov ebx,dword ptr [eax+8]
	jmp Block163

 Block162:
	mov ebx,offset _S___3

 Block163:
	xor esi,esi
	mov dword ptr [ebp+0x50],esi
	test ebx,ebx
	je Block165

 Block164:
	push esi
	push esi
	push esi
	push esi
	push 0xFFFFFFFF
	push ebx
	push esi
	push esi
	call WideCharToMultiByte
	mov esi,eax
	push 0
	dec esi
	push esi
	lea ecx,[ebp+0x50]
	call ZXString<char>::GetBuffer
	push 0
	push 0
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push ebx
	push 0
	push 0
	call WideCharToMultiByte
	push esi
	lea ecx,[ebp+0x50]
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [ebp+0x50]

 Block165:
	mov ebx,8
	mov byte ptr [ebp-4],0x37
	cmp word ptr [ebp-0x114],bx
	jne Block168

 Block166:
	xor eax,eax
	mov word ptr [ebp-0x114],ax
	mov eax,dword ptr [ebp-0x10C]
	test eax,eax
	je Block169

 Block167:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block169

 Block168:
	lea ecx,[ebp-0x114]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block169:
	test esi,esi
	je Block180

 Block170:
	cmp byte ptr [esi],0
	je Block180

 Block171:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0xCB3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x134]
	mov byte ptr [ebp-4],0x38
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x37
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x39
	call get_int32
	add esp,8
	mov dword ptr [ebp+0x60],eax
	mov byte ptr [ebp-4],0x37
	cmp word ptr [ebp-0x134],bx
	jne Block174

 Block172:
	mov eax,dword ptr [ebp-0x12C]
	xor ecx,ecx
	mov word ptr [ebp-0x134],cx
	test eax,eax
	je Block175

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block175

 Block174:
	lea edx,[ebp-0x134]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block175:
	lea eax,[ebp+0x60]
	push eax
	lea ecx,[ebp+0x5C]
	push ecx
	lea ecx,[ebp-0x24]
	call ZMap<unsigned short, long, unsigned short>::Insert
	mov dword ptr [ebp+0x60],0
	mov ebx,dword ptr [ebp+0x54]
	lea edx,[ebp+0x60]
	push edx
	lea eax,[ebp+0x50]
	lea esi,[ebx+4]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x3A
	call ZMap<ZXString<char>, ZArray<unsigned short>, ZXString<char>>::GetAt
	push 0xFFFFFFFF
	lea ecx,[ebp+0x60]
	call ZArray<unsigned short>::InsertBefore
	mov cx,word ptr [ebp+0x5C]
	mov word ptr [eax],cx
	lea edx,[ebp+0x50]
	push edx
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebx+0x1C]
	call ZMap<unsigned short, ZXString<char>, unsigned short>::Insert
	lea ecx,[ebp+0x60]
	push ecx
	lea edx,[ebp+0x50]
	push edx
	mov ecx,esi
	call ZMap<ZXString<char>, ZArray<unsigned short>, ZXString<char>>::Insert
	lea ecx,[ebp+0x60]
	mov byte ptr [ebp-4],0x37
	call ZArray<unsigned short>::RemoveAll
	mov eax,dword ptr [ebp+0x50]
	add eax,0xFFFFFFF4
	push eax
	mov byte ptr [ebp-4],0x33
	call ZXString<char>::_Release
	mov eax,dword ptr [ebp+0x4C]
	add esp,4
	mov byte ptr [ebp-4],0x2F
	test eax,eax
	je Block177

 Block176:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block177:
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block179

 Block178:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block179:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],0xC
	call edx
	xor ebx,ebx
	jmp Block31

 Block180:
	mov byte ptr [ebp-4],0x33
	test esi,esi
	je Block182

 Block181:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block182:
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x2F
	test eax,eax
	je Block184

 Block183:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block184:
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block186

 Block185:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block186:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],0xC
	call ecx
	xor ebx,ebx
	jmp Block31

 Block187:
	mov esi,dword ptr [ebp+0x54]
	add esi,4
	mov ecx,esi
	mov dword ptr [ebp+0x50],esi
	call ZMap<ZXString<char>, ZArray<unsigned short>, ZXString<char>>::GetHeadPosition
	mov dword ptr [ebp+0x44],eax
	cmp eax,ebx
	je Block206

 Block188:
	lea esp,[esp]

 Block189:
	mov dword ptr [ebp+0x58],ebx
	lea edx,[ebp+0x58]
	push edx
	lea eax,[ebp+0x44]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x3B
	call ZMap<ZXString<char>, ZArray<unsigned short>, ZXString<char>>::GetNext
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],ebx
	call ZXString<char>::op_assign
	mov ecx,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x3C
	xor eax,eax
	mov edi,ecx
	lea ecx,[ecx]

 Block190:
	cmp ecx,ebx
	jne Block192

 Block191:
	xor ecx,ecx
	jmp Block193

 Block192:
	mov ecx,dword ptr [ecx-4]

 Block193:
	dec ecx
	cmp eax,ecx
	jae Block203

 Block194:
	inc eax
	mov dword ptr [ebp+0x4C],eax
	mov ebx,eax
	lea esi,[edi+2]
	lea esp,[esp]

 Block195:
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block202

 Block196:
	cmp ebx,dword ptr [eax-4]
	jae Block202

 Block197:
	lea ecx,[ebp+0x48]
	push ecx
	push edi
	lea ecx,[ebp-0x24]
	call ZMap<unsigned short, long, unsigned short>::GetAt
	test eax,eax
	je Block201

 Block198:
	lea edx,[ebp+0x38]
	push edx
	push esi
	lea ecx,[ebp-0x24]
	call ZMap<unsigned short, long, unsigned short>::GetAt
	test eax,eax
	je Block201

 Block199:
	mov eax,dword ptr [ebp+0x48]
	cmp eax,dword ptr [ebp+0x38]
	jle Block201

 Block200:
	movzx eax,word ptr [edi]
	mov cx,word ptr [esi]
	mov word ptr [edi],cx
	mov word ptr [esi],ax

 Block201:
	inc ebx
	add esi,2
	jmp Block195

 Block202:
	mov eax,dword ptr [ebp+0x4C]
	mov esi,dword ptr [ebp+0x50]
	mov ecx,dword ptr [ebp+0x58]
	add edi,2
	xor ebx,ebx
	jmp Block190

 Block203:
	lea edx,[ebp+0x58]
	push edx
	lea eax,[ebp+0x60]
	push eax
	mov ecx,esi
	call ZMap<ZXString<char>, ZArray<unsigned short>, ZXString<char>>::Insert
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x3B
	cmp eax,ebx
	je Block205

 Block204:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block205:
	lea ecx,[ebp+0x58]
	mov byte ptr [ebp-4],0xC
	call ZArray<unsigned short>::RemoveAll
	cmp dword ptr [ebp+0x44],ebx
	jne Block189

 Block206:
	lea ecx,[ebp-0x24]
	mov byte ptr [ebp-4],0xB
	mov dword ptr [ebp-0x24],offset ZMAP_US_LONG_VTABLE
	call ZMap<unsigned short, long, unsigned short>::RemoveAll
	mov eax,dword ptr [ebp+0x40]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],8
	call edx
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],7
	jne Block209

 Block207:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	cmp eax,ebx
	je Block210

 Block208:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block210

 Block209:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block210:
	mov eax,dword ptr [ebp+0x3C]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call eax
	lea esp,[ebp-0x164]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x64]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x68
	mov esp,ebp
	pop ebp
	ret
}
}
// QuestDemand::~QuestDemand
_SUB_EXCEPTION_HANDLER(2BA770)
__SUB_CLASS_THIS0(002BA770, __thiscall, 57200,  QuestDemand, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2BA770
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x10],esi
	mov eax,dword ptr [esi+0xF0]
	mov dword ptr [esp+0x1C],0x10
	test eax,eax
	je Block5

 Block1:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block4

 Block3:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block4:
	mov dword ptr [esi+0xF0],0

 Block5:
	lea ecx,[esi+0xD4]
	mov byte ptr [esp+0x1C],0xF
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0xD0]
	mov byte ptr [esp+0x1C],0xE
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0xBC]
	mov byte ptr [esp+0x1C],0xD
	call ZArray<MBCardInfo>::RemoveAll
	lea ecx,[esi+0xA8]
	mov byte ptr [esp+0x1C],0xC
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0xA4]
	mov byte ptr [esp+0x1C],0xB
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0xA0]
	mov byte ptr [esp+0x1C],0xA
	call ZArray<long>::RemoveAll
	mov eax,dword ptr [esi+0x9C]
	mov byte ptr [esp+0x1C],9
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov eax,dword ptr [esi+0x98]
	mov byte ptr [esp+0x1C],8
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	lea ecx,[esi+0x80]
	mov byte ptr [esp+0x1C],7
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, int, long>::`vftable'
	call ZMap<long, int, long>::RemoveAll
	lea ecx,[esi+0x7C]
	mov byte ptr [esp+0x1C],6
	call ZArray<SkillInfo>::RemoveAll
	lea ecx,[esi+0x78]
	mov byte ptr [esp+0x1C],5
	call ZArray<MobInfo>::RemoveAll
	lea ecx,[esi+0x74]
	mov byte ptr [esp+0x1C],4
	call ZArray<ItemInfo>::RemoveAll
	lea ecx,[esi+0x70]
	mov byte ptr [esp+0x1C],3
	call ZArray<QuestRecord>::RemoveAll
	lea ecx,[esi+0x68]
	mov byte ptr [esp+0x1C],2
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0x60]
	mov byte ptr [esp+0x1C],1
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0x5C]
	mov byte ptr [esp+0x1C],0
	call ZArray<ZXString<char>>::RemoveAll
	lea ecx,[esi+0x48]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x10
	ret
}
}
// CQuestMan::LoadQuestExpByLevelInfo
_SUB_EXCEPTION_HANDLER(2B9D50)
__SUB_CLASS_THIS0(002B9D50, __thiscall, 57100,  CQuestMan, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2B9D50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x74
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x28],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x40]
	push eax
	call esi
	lea ecx,[ebp-0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor edi,edi
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x60]
	push edx
	mov dword ptr [ebp-4],edi
	call esi
	lea eax,[ebp-0x60]
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
	lea ecx,[ebp-0x40]
	push ecx
	lea edx,[ebp-0x60]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0x17E8
	push eax
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0x70]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x24]
	mov dword ptr [ebp-0x24],edi
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
	cmp word ptr [ebp-0x70],bx
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x68]
	xor edx,edx
	mov word ptr [ebp-0x70],dx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0x70]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x60],bx
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x58]
	xor ecx,ecx
	mov word ptr [ebp-0x60],cx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp-0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x40],bx
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp-0x40],ax
	mov eax,dword ptr [ebp-0x38]
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp-0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea edx,[ebp-0x50]
	push edx
	call esi
	mov ebx,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],8
	cmp ebx,edi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea eax,[ebp-0x30]
	push eax
	mov ecx,ebx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],9
	mov dword ptr [ebp-0x18],edi
	mov dword ptr [ebp-0x14],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block25:
	lea ecx,[ebp-0x18]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block28

 Block26:
	cmp eax,0x80004002
	je Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov eax,dword ptr [ebp-0x30]
	mov byte ptr [ebp-4],0xB
	cmp eax,edi
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	mov esi,dword ptr [ebp-0x18]
	mov dword ptr [ebp-0x2C],edi
	cmp esi,edi
	je Block5

 Block31:
	jmp Block33

 Block33:
	mov eax,dword ptr [esi]
	mov eax,dword ptr [eax+0xC]
	lea ecx,[ebp-0x2C]
	push ecx
	lea edx,[ebp-0x50]
	push edx
	push 1
	push esi
	call eax
	test eax,eax
	jne Block51

 Block34:
	lea ecx,[ebp-0x50]
	push ecx
	lea edx,[ebp-0x20]
	push edx
	call DetachBSTR
	mov eax,dword ptr [eax]
	add esp,8
	cmp eax,edi
	je Block36

 Block35:
	mov eax,dword ptr [eax]
	jmp Block37

 Block36:
	xor eax,eax

 Block37:
	push eax
	call __wtoi
	movzx edi,ax
	mov eax,dword ptr [ebp-0x20]
	add esp,4
	mov dword ptr [ebp-0x14],edi
	test eax,eax
	je Block46

 Block38:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block45

 Block39:
	test esi,esi
	je Block45

 Block40:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block42

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block42:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block44

 Block43:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block44:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block45:
	mov esi,dword ptr [ebp-0x18]
	mov dword ptr [ebp-0x20],0

 Block46:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	movzx ecx,di
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x1C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x80]
	mov byte ptr [ebp-4],0xC
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x80],8
	mov dword ptr [ebp-0x1C],eax
	mov byte ptr [ebp-4],0xB
	jne Block49

 Block47:
	mov eax,dword ptr [ebp-0x78]
	xor ecx,ecx
	mov word ptr [ebp-0x80],cx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea edx,[ebp-0x80]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	lea eax,[ebp-0x1C]
	push eax
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,dword ptr [ebp-0x28]
	add ecx,0x304
	call ZMap<unsigned short, long, unsigned short>::Insert
	xor edi,edi
	jmp Block33

 Block51:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],8
	call eax
	cmp word ptr [ebp-0x50],8
	mov byte ptr [ebp-4],7
	jne Block54

 Block52:
	mov eax,dword ptr [ebp-0x48]
	xor ecx,ecx
	mov word ptr [ebp-0x50],cx
	cmp eax,edi
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea edx,[ebp-0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ecx
	lea esp,[ebp-0x90]
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
}
}
// AddQuestList
_SUB_EXCEPTION_HANDLER(2BE190)
__SUB(002BE190, __cdecl, 134026,  void, ZArray<unsigned short>&, ZXString<char>&, const ZArray<unsigned short>&, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2BE190
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xBC]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x6C]
	push eax
	call esi
	lea ecx,[esp+0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebx,ebx
	add esp,8
	cmp eax,ebx
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x5C]
	push edx
	mov dword ptr [esp+0xC8],ebx
	call esi
	lea eax,[esp+0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push ebx
	push ebx
	lea ecx,[esp+0x74]
	push ecx
	lea edx,[esp+0x68]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push 0xCC1
	push eax
	mov byte ptr [esp+0xE0],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xD8],2
	cmp dword ptr [_D_G_RM],ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0xB0]
	push ecx
	mov byte ptr [esp+0xDC],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xCC],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0xC4],5
	cmp word ptr [esp+0x9C],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0xA4]
	xor edx,edx
	mov word ptr [esp+0x9C],dx
	cmp eax,ebx
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x9C]
	push eax
	call esi

 Block13:
	mov byte ptr [esp+0xC4],6
	cmp word ptr [esp+0x5C],di
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x5C]
	push edx
	call esi

 Block17:
	mov byte ptr [esp+0xC4],7
	cmp word ptr [esp+0x6C],di
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	cmp eax,ebx
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x6C]
	push ecx
	call esi

 Block21:
	mov ecx,dword ptr [esp+0xD4]
	xor esi,esi
	mov dword ptr [esp+0x24],esi
	call ZArray<unsigned short>::GetCount
	mov edi,dword ptr [esp+0x20]
	test eax,eax
	jbe Block110

 Block22:
	lea ebx,[ebx]

 Block23:
	mov dword ptr [esp+0x1C],0
	lea edx,[esp+0x44]
	push 0x1A14
	push edx
	mov byte ptr [esp+0xCC],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0xD4]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [eax]
	lea ebp,[esi+esi]
	movzx ecx,word ptr [edx+ebp]
	push ecx
	push eax
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0xD0],9
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x50]
	add esp,0xC
	mov byte ptr [esp+0xC4],8
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov ebx,dword ptr [esp+0x1C]
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push ebx
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xD0],0xA
	test edi,edi
	je Block5

 Block26:
	lea eax,[esp+0x88]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xD4],8
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xCC],0xB
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x28],esi
	test eax,eax
	je Block29

 Block27:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x40]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x40]
	mov esi,ecx
	mov dword ptr [esp+0x28],esi
	test eax,eax
	jge Block29

 Block28:
	cmp eax,0x80004002
	jne Block1

 Block29:
	mov edi,8
	mov byte ptr [esp+0xC4],0xD
	cmp word ptr [esp+0x7C],di
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x84]
	xor edx,edx
	mov word ptr [esp+0x7C],dx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea eax,[esp+0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block33:
	test esi,esi
	sete al
	test al,al
	je Block38

 Block34:
	mov byte ptr [esp+0xC4],8
	test esi,esi
	je Block36

 Block35:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block36:
	mov byte ptr [esp+0xC4],7
	test ebx,ebx
	je Block109

 Block37:
	add ebx,0xFFFFFFF4
	push ebx
	jmp Block108

 Block38:
	mov dword ptr [esp+0x30],0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x671
	push eax
	mov byte ptr [esp+0xD0],0xE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	xor ebx,ebx
	mov byte ptr [esp+0xC8],0xF
	cmp esi,ebx
	je Block5

 Block39:
	lea ecx,[esp+0x90]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0xCC],0xE
	call IWzProperty::Getitem
	mov byte ptr [esp+0xC4],0x10
	cmp word ptr [eax],di
	jne Block41

 Block40:
	mov eax,dword ptr [eax+8]
	jmp Block42

 Block41:
	mov eax,offset _S___3

 Block42:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0xC4],0x12
	cmp word ptr [esp+0x8C],di
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0x94]
	xor edx,edx
	mov word ptr [esp+0x8C],dx
	cmp eax,ebx
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[esp+0x8C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_TYPE
	call _xbstr_t::_ctor_1
	lea ecx,[esp+0xB0]
	push ecx
	mov byte ptr [esp+0xCC],0x13
	mov ecx,esi
	mov byte ptr [esp+0xCC],0x12
	call IWzProperty::Getitem
	mov byte ptr [esp+0xC4],0x14
	cmp word ptr [eax],di
	jne Block48

 Block47:
	mov eax,dword ptr [eax+8]
	jmp Block49

 Block48:
	mov eax,offset _S___3

 Block49:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x34],ebx
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0xC4],0x16
	cmp word ptr [esp+0xAC],di
	jne Block52

 Block50:
	mov eax,dword ptr [esp+0xB4]
	xor edx,edx
	mov word ptr [esp+0xAC],dx
	cmp eax,ebx
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea eax,[esp+0xAC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block53:
	mov esi,dword ptr [esp+0xD8]
	cmp esi,1
	je Block55

 Block54:
	cmp esi,2
	jne Block67

 Block55:
	push 2
	push offset _S___18
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	cmp esi,1
	jne Block59

 Block56:
	lea ecx,[esp+0x50]
	push 0x10DB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xC4],0x17
	cmp eax,ebx
	je Block58

 Block57:
	mov ecx,dword ptr [eax-4]
	push ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x50]
	jmp Block64

 Block58:
	xor ecx,ecx
	push ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x50]
	jmp Block64

 Block59:
	cmp esi,2
	jne Block66

 Block60:
	lea edx,[esp+0x38]
	push 0x10DC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xC4],0x18
	cmp eax,ebx
	je Block62

 Block61:
	mov ecx,dword ptr [eax-4]
	jmp Block63

 Block62:
	xor ecx,ecx

 Block63:
	push ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x38]

 Block64:
	mov byte ptr [esp+0xC4],0x16
	cmp eax,ebx
	je Block66

 Block65:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block66:
	push 1
	push offset _S___17
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat

 Block67:
	cmp esi,ebx
	jne Block85

 Block68:
	mov eax,dword ptr [esp+0xD4]
	mov eax,dword ptr [eax]
	movzx ecx,word ptr [eax+ebp]
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	add eax,ebp
	push ecx
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	call CQuestMan::GetStartDemand
	mov edi,eax
	test esi,esi
	je Block85

 Block69:
	test edi,edi
	je Block85

 Block70:
	mov ebx,dword ptr [esp+0xD4]
	mov eax,dword ptr [ebx]
	movzx edx,word ptr [eax+ebp]
	add eax,ebp
	push edx
	mov ecx,esi
	call CWvsContext::IsWorthlessQuest
	test eax,eax
	je Block77

 Block71:
	push 2
	push offset _S___18
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	lea eax,[esp+0x58]
	push 0x19F1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xC4],0x19
	test eax,eax
	je Block73

 Block72:
	mov ecx,dword ptr [eax-4]
	jmp Block74

 Block73:
	xor ecx,ecx

 Block74:
	push ecx
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0xC4],0x16
	test eax,eax
	je Block76

 Block75:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block76:
	push 1
	push offset _S___17
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	jmp Block85

 Block77:
	mov eax,dword ptr [ebx]
	movzx ecx,word ptr [eax+ebp]
	add eax,ebp
	push ecx
	mov ecx,esi
	call CWvsContext::IsNearStartQuest
	test eax,eax
	je Block85

 Block78:
	mov dword ptr [esp+0x18],0
	lea edx,[esp+0x4C]
	push 0x1A4B
	push edx
	mov byte ptr [esp+0xCC],0x1A
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [edi+0x1C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0xD0],0x1B
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x58]
	add esp,0xC
	mov byte ptr [esp+0xC4],0x1A
	test eax,eax
	je Block80

 Block79:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block80:
	push 2
	push offset _S___18
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov esi,dword ptr [esp+0x18]
	test esi,esi
	je Block82

 Block81:
	mov eax,dword ptr [esi-4]
	jmp Block83

 Block82:
	xor eax,eax

 Block83:
	push eax
	push esi
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	push 1
	push offset _S___17
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov byte ptr [esp+0xC4],0x16
	test esi,esi
	je Block85

 Block84:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block85:
	mov ebx,dword ptr [esp+0x2C]
	test ebx,ebx
	je Block95

 Block86:
	cmp byte ptr [ebx],0
	je Block95

 Block87:
	push 0xFFFFFFFF
	push offset _S_DN
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],0
	call ZXString<char>::AssignWideStr
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x40]
	push offset _S_RE
	push ecx
	mov byte ptr [esp+0xD0],0x1C
	call __op_add_ushort_char
	add esp,0xC
	lea edx,[esp+0x18]
	push edx
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,eax
	mov byte ptr [esp+0xCC],0x1D
	call ZXString<char>::op_add_1
	lea edx,[esp+0x14]
	push edx
	lea ecx,[esp+0x58]
	push ecx
	mov ecx,eax
	mov byte ptr [esp+0xCC],0x1E
	call ZXString<char>::op_add_1
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0xC8],0x1F
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0xC4],0x1E
	test eax,eax
	je Block89

 Block88:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block89:
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0xC4],0x1D
	test eax,eax
	je Block91

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block91:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0xC4],0x1C
	test eax,eax
	je Block93

 Block92:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block93:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xC4],0x16
	test eax,eax
	je Block95

 Block94:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block95:
	lea edx,[esp+0x34]
	push 0xCA4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebp,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0xCC]
	mov esi,dword ptr [eax]
	push ebp
	mov byte ptr [esp+0xC8],0x20
	call ZArray<unsigned short>::GetCount
	push eax
	lea eax,[esp+0x38]
	push esi
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x44]
	add esp,0x10
	mov byte ptr [esp+0xC4],0x16
	test eax,eax
	je Block97

 Block96:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block97:
	mov edi,dword ptr [esp+0x30]
	test edi,edi
	je Block99

 Block98:
	mov eax,dword ptr [edi-4]
	jmp Block100

 Block99:
	xor eax,eax

 Block100:
	mov ecx,dword ptr [esp+0xD0]
	push eax
	push edi
	call ZXString<char>::_Cat
	mov ecx,dword ptr [esp+0xD4]
	mov esi,dword ptr [ecx]
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0xCC]
	add eax,eax
	push 0xFFFFFFFF
	add esi,eax
	call ZArray<unsigned short>::InsertBefore
	mov dx,word ptr [esi]
	mov word ptr [eax],dx
	mov byte ptr [esp+0xC4],0x12
	test ebx,ebx
	je Block102

 Block101:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block102:
	mov byte ptr [esp+0xC4],0xE
	test ebp,ebp
	je Block104

 Block103:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block104:
	mov byte ptr [esp+0xC4],0xD
	test edi,edi
	je Block106

 Block105:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block106:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xC8],8
	call edx
	cmp dword ptr [esp+0x1C],0
	mov byte ptr [esp+0xC4],7
	je Block109

 Block107:
	mov eax,dword ptr [esp+0x1C]
	add eax,0xFFFFFFF4
	push eax

 Block108:
	call ZXString<char>::_Release
	add esp,4

 Block109:
	mov esi,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0xD4]
	inc esi
	mov dword ptr [esp+0x24],esi
	call ZArray<unsigned short>::GetCount
	mov edi,dword ptr [esp+0x20]
	cmp esi,eax
	jb Block23

 Block110:
	mov dword ptr [esp+0xC4],0xFFFFFFFF
	test edi,edi
	je Block112

 Block111:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block112:
	mov ecx,dword ptr [esp+0xBC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xB4
	ret
}
}
// CQuestMan::GetAutoStartQuestIDOnLevelUp
__SUB_CLASS_THIS0(002B4DB0, __thiscall, 57116,  CQuestMan, uint16_t) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x2DC],0
	je Block2

 Block1:
	mov eax,dword ptr [ecx+0x2E0]
	mov ax,word ptr [eax]
	ret

 Block2:
	xor eax,eax
	ret
}
}
// CQuestMan::GetQuestTimeLimit2
__SUB_CLASS_THIS(002B68E0, __thiscall, 57150,  CQuestMan, unsigned long, uint16_t) {
__asm {

 Block0:
	push ecx
	lea eax,[esp]
	push eax
	lea edx,[esp+0xC]
	push edx
	add ecx,0x200
	call ZMap<unsigned short, long, unsigned short>::GetAt
	neg eax
	sbb eax,eax
	and eax,dword ptr [esp]
	pop ecx
	ret 4
}
}
// CQuestMan::GetQuestCategory
__SUB_CLASS_THIS(002B68C0, __thiscall, 57123,  CQuestMan, long, uint16_t) {
__asm {

 Block0:
	push ecx
	lea eax,[esp]
	push eax
	lea edx,[esp+0xC]
	push edx
	add ecx,0x2BC
	call ZMap<unsigned short, long, unsigned short>::GetAt
	neg eax
	sbb eax,eax
	and eax,dword ptr [esp]
	pop ecx
	ret 4
}
}
// CQuestMan::GetPartyQuestRankString
_SUB_EXCEPTION_HANDLER(2B93A0)
__SUB_CLASS_THIS(002B93A0, __thiscall, 57140,  CQuestMan, ZXString<char>*, ZXString<char>*, uint16_t, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2B93A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0x10],ebx
	mov edi,1
	mov dword ptr [esp+0x34],edi
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x28],ebx
	lea eax,[esp+0x14]
	push eax
	lea edx,[esp+0x44]
	push edx
	add ecx,0x334
	mov byte ptr [esp+0x3C],2
	call ZMap<unsigned short, CQuestMan::RankString, unsigned short>::GetAt
	test eax,eax
	jne Block2

 Block1:
	mov esi,dword ptr [esp+0x3C]
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
	jmp Block27

 Block2:
	push 0xFFFFFFFF
	push offset _S_S__7
	lea ecx,[esp+0x48]
	mov dword ptr [esp+0x48],ebx
	call ZXString<char>::AssignWideStr
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::op_eq_0
	mov esi,eax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	cmp esi,ebx
	je Block6

 Block5:
	mov esi,dword ptr [esp+0x3C]
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	mov dword ptr [esi],ebx
	call ZXString<char>::op_assign
	jmp Block27

 Block6:
	push 0xFFFFFFFF
	push offset _S_A
	lea ecx,[esp+0x48]
	mov dword ptr [esp+0x48],ebx
	call ZXString<char>::AssignWideStr
	lea edx,[esp+0x40]
	push edx
	lea ecx,[esp+0x48]
	call ZXString<char>::op_eq_0
	mov esi,eax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	cmp esi,ebx
	je Block10

 Block9:
	mov esi,dword ptr [esp+0x3C]
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	mov dword ptr [esi],ebx
	call ZXString<char>::op_assign
	jmp Block27

 Block10:
	push 0xFFFFFFFF
	push offset _S_B__1
	lea ecx,[esp+0x48]
	mov dword ptr [esp+0x48],ebx
	call ZXString<char>::AssignWideStr
	lea ecx,[esp+0x40]
	push ecx
	lea ecx,[esp+0x48]
	call ZXString<char>::op_eq_0
	mov esi,eax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	cmp esi,ebx
	je Block14

 Block13:
	mov esi,dword ptr [esp+0x3C]
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	mov dword ptr [esi],ebx
	call ZXString<char>::op_assign
	jmp Block27

 Block14:
	push 0xFFFFFFFF
	push offset _S_C__4
	lea ecx,[esp+0x48]
	mov dword ptr [esp+0x48],ebx
	call ZXString<char>::AssignWideStr
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::op_eq_0
	mov esi,eax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	cmp esi,ebx
	je Block18

 Block17:
	mov esi,dword ptr [esp+0x3C]
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	jmp Block27

 Block18:
	push 0xFFFFFFFF
	push offset _S_D__11
	lea ecx,[esp+0x48]
	call ZXString<char>::CreateFromCStr
	lea edx,[esp+0x40]
	push edx
	lea ecx,[esp+0x48]
	call ZXString<char>::op_eq_0
	mov esi,eax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	cmp esi,ebx
	je Block22

 Block21:
	mov esi,dword ptr [esp+0x3C]
	lea eax,[esp+0x24]
	push eax
	mov ecx,esi
	call ZXString<char>::_ctor_copy
	jmp Block27

 Block22:
	push 0xFFFFFFFF
	push offset _S_F__2
	lea ecx,[esp+0x48]
	call ZXString<char>::CreateFromCStr
	lea ecx,[esp+0x40]
	push ecx
	lea ecx,[esp+0x48]
	call ZXString<char>::op_eq_0
	mov esi,eax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	cmp esi,ebx
	mov esi,dword ptr [esp+0x3C]
	mov ecx,esi
	je Block26

 Block25:
	lea edx,[esp+0x28]
	push edx
	call ZXString<char>::_ctor_copy
	jmp Block27

 Block26:
	push 0xFFFFFFFF
	push offset _S_
	call ZXString<char>::CreateFromCharStr

 Block27:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x10],edi
	mov byte ptr [esp+0x34],1
	call CQuestMan::RankString::~RankString
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov eax,esi
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x28
	ret 0xC
}
}
// CQuestMan::RankString::operator=
__SUB_CLASS_THIS(002B8950, __thiscall, 57700,  CQuestMan::RankString, CQuestMan::RankString&, const CQuestMan::RankString&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	push edi
	mov esi,ecx
	call ZXString<char>::op_assign
	lea eax,[edi+4]
	push eax
	lea ecx,[esi+4]
	call ZXString<char>::op_assign
	lea ecx,[edi+8]
	push ecx
	lea ecx,[esi+8]
	call ZXString<char>::op_assign
	lea edx,[edi+0xC]
	push edx
	lea ecx,[esi+0xC]
	call ZXString<char>::op_assign
	lea eax,[edi+0x10]
	push eax
	lea ecx,[esi+0x10]
	call ZXString<char>::op_assign
	add edi,0x14
	push edi
	lea ecx,[esi+0x14]
	call ZXString<char>::op_assign
	pop edi
	mov eax,esi
	pop esi
	ret 4
}
}
// CQuestMan::GetPartyQuestIconPath
_SUB_EXCEPTION_HANDLER(5F79E0)
__SUB_CLASS_THIS(005F79E0, __thiscall, 57143,  CQuestMan, ZXString<char>*, ZXString<char>*, uint16_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5F79E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0xC],ebx
	mov dword ptr [esp+0x10],ebx
	lea eax,[esp+0x10]
	push eax
	lea edx,[esp+0x2C]
	push edx
	add ecx,0x1C
	mov dword ptr [esp+0x24],1
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetAt
	test eax,eax
	je Block2

 Block1:
	lea eax,[esp+0x10]
	jmp Block3

 Block2:
	push 0
	push offset _S_
	push 0
	push 0
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x38],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	lea ecx,[esp+0x2C]
	call ZXString<char>::ReleaseBuffer
	mov ebx,1
	lea eax,[esp+0x28]
	mov byte ptr [esp+0x1C],2
	mov dword ptr [esp+0xC],ebx

 Block3:
	mov esi,dword ptr [esp+0x24]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	or ebx,2
	mov dword ptr [esp+0xC],ebx
	mov dword ptr [esp+0x1C],1
	test bl,1
	je Block6

 Block4:
	mov eax,dword ptr [esp+0x28]
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0xC],ebx
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x14
	ret 8
}
}
// CQuestMan::CheckExclusive
__SUB_CLASS_THIS(002B9CC0, __thiscall, 57131,  CQuestMan, int32_t, uint16_t, const CharacterData&) {
__asm {

 Block0:
	push esi
	lea esi,[ecx+0x158]
	push 0
	lea eax,[esp+0xC]
	push eax
	mov ecx,esi
	call ZMap<unsigned short, ZArray<unsigned short>, unsigned short>::GetAt
	test eax,eax
	jne Block2

 Block1:
	mov eax,1
	pop esi
	ret 8

 Block2:
	push ebx
	push ebp
	push edi
	push 0
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call ZMap<unsigned short, ZArray<unsigned short>, unsigned short>::Insert
	mov esi,eax
	add esi,0xC
	mov ecx,esi
	xor edi,edi
	call ZArray<unsigned short>::GetCount
	mov ebx,eax
	test ebx,ebx
	jbe Block6

 Block3:
	mov ebp,dword ptr [esp+0x18]
	mov esi,dword ptr [esi]
	add ebp,0x6F5

 Block4:
	movzx edx,word ptr [esi]
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebp
	mov dword ptr [esp+0x18],edx
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetPos
	test eax,eax
	jne Block7

 Block5:
	inc edi
	add esi,2
	cmp edi,ebx
	jb Block4

 Block6:
	pop edi
	pop ebp
	pop ebx
	mov eax,1
	pop esi
	ret 8

 Block7:
	pop edi
	pop ebp
	pop ebx
	xor eax,eax
	pop esi
	ret 8
}
}
// CQuestMan::IsDeliveryAcceptQuest
__SUB_CLASS_THIS(002B7B30, __thiscall, 57112,  CQuestMan, int32_t, uint16_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	push edi
	mov esi,ecx
	call CQuestMan::IsStartScriptLinkedQuest
	test eax,eax
	je Block2

 Block1:
	pop edi
	xor eax,eax
	pop esi
	ret 4

 Block2:
	lea eax,[edi-0x4B0]
	mov ecx,0xC7
	cmp ax,cx
	jbe Block1

 Block3:
	push edi
	mov ecx,esi
	call CQuestMan::IsAutoAutoAcceptQuest
	test eax,eax
	jne Block1

 Block4:
	push ebx
	movzx ebx,di
	push ebx
	mov ecx,esi
	call CQuestMan::IsEquipOnAutoStartQuest
	test eax,eax
	jne Block14

 Block5:
	push ebx
	mov ecx,esi
	call CQuestMan::IsFieldOnAutoStartQuest
	test eax,eax
	jne Block14

 Block6:
	mov edx,0x289A
	cmp di,dx
	je Block14

 Block7:
	push edi
	mov ecx,esi
	call CQuestMan::IsAutoAlertQuest
	test eax,eax
	jne Block14

 Block8:
	push edi
	mov ecx,esi
	call CQuestMan::IsTimeLimitQuest
	test eax,eax
	jne Block14

 Block9:
	push edi
	mov ecx,esi
	call CQuestMan::IsDisallowedDeliveryQuest
	test eax,eax
	jne Block14

 Block10:
	push edi
	mov ecx,esi
	call CQuestMan::GetStartDemand
	test eax,eax
	je Block14

 Block11:
	mov eax,dword ptr [eax+0x18]
	test eax,eax
	je Block14

 Block12:
	cmp eax,0xF7508
	je Block14

 Block13:
	pop ebx
	pop edi
	mov eax,1
	pop esi
	ret 4

 Block14:
	pop ebx
	pop edi
	xor eax,eax
	pop esi
	ret 4
}
}
// CQuestMan::LoadPartyQuestRankString
_SUB_EXCEPTION_HANDLER(2BDDC0)
__SUB_CLASS_THIS(002BDDC0, __thiscall, 57166,  CQuestMan, void, uint16_t, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2BDDC0
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
	mov dword ptr [esp+0x14],ecx
	xor edi,edi
	mov dword ptr [esp+0x4C],edi
	mov dword ptr [esp+0x2C],edi
	mov dword ptr [esp+0x30],edi
	mov dword ptr [esp+0x34],edi
	mov dword ptr [esp+0x38],edi
	mov dword ptr [esp+0x3C],edi
	mov dword ptr [esp+0x40],edi
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	mov bl,1
	push offset _S_S__7
	mov byte ptr [esp+0x54],bl
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x50],2
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x54],bl
	call IWzProperty::Getitem
	mov esi,8
	mov byte ptr [esp+0x4C],3
	cmp word ptr [eax],si
	jne Block4

 Block3:
	mov eax,dword ptr [eax+8]
	jmp Block5

 Block4:
	mov eax,offset _S___3

 Block5:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x34]
	call ZXString<char>::AssignWideStr
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x4C],bl
	cmp word ptr [esp+0x1C],si
	jne Block8

 Block6:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,edi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block9:
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_A
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x50],4
	cmp ecx,edi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x54],bl
	call IWzProperty::Getitem
	mov byte ptr [esp+0x4C],5
	cmp word ptr [eax],si
	jne Block13

 Block12:
	mov eax,dword ptr [eax+8]
	jmp Block14

 Block13:
	mov eax,offset _S___3

 Block14:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x38]
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x4C],bl
	cmp word ptr [esp+0x1C],si
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,edi
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block18:
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_B__1
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x50],6
	cmp ecx,edi
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x54],bl
	call IWzProperty::Getitem
	mov byte ptr [esp+0x4C],7
	cmp word ptr [eax],si
	jne Block22

 Block21:
	mov eax,dword ptr [eax+8]
	jmp Block23

 Block22:
	mov eax,offset _S___3

 Block23:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x3C]
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x4C],bl
	cmp word ptr [esp+0x1C],si
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,edi
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block27:
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_C__4
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x50],8
	cmp ecx,edi
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x54],bl
	call IWzProperty::Getitem
	mov byte ptr [esp+0x4C],9
	cmp word ptr [eax],si
	jne Block31

 Block30:
	mov eax,dword ptr [eax+8]
	jmp Block32

 Block31:
	mov eax,offset _S___3

 Block32:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x40]
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x4C],bl
	cmp word ptr [esp+0x1C],si
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,edi
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block36:
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_D__11
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x50],0xA
	cmp ecx,edi
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x54],bl
	call IWzProperty::Getitem
	mov byte ptr [esp+0x4C],0xB
	cmp word ptr [eax],si
	jne Block40

 Block39:
	mov eax,dword ptr [eax+8]
	jmp Block41

 Block40:
	mov eax,offset _S___3

 Block41:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x44]
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x4C],bl
	cmp word ptr [esp+0x1C],si
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,edi
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block45:
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push offset _S_F__2
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x50],0xC
	cmp ecx,edi
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x54],bl
	call IWzProperty::Getitem
	mov byte ptr [esp+0x4C],0xD
	cmp word ptr [eax],si
	jne Block49

 Block48:
	mov eax,dword ptr [eax+8]
	jmp Block50

 Block49:
	mov eax,offset _S___3

 Block50:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x48]
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x4C],bl
	cmp word ptr [esp+0x1C],si
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,edi
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[esp+0x1C]
	push edx
	call ebp

 Block54:
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x58]
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	add ecx,0x334
	call ZMap<unsigned short, CQuestMan::RankString, unsigned short>::Insert
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x4C],0
	call CQuestMan::RankString::~RankString
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp eax,edi
	je Block56

 Block55:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block56:
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
// CQuestMan::GetQuestByItem
__SUB_CLASS_THIS(002B78A0, __thiscall, 57135,  CQuestMan, int32_t, long, ZArray<unsigned short>&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	mov ecx,edi
	call ZArray<unsigned short>::RemoveAll
	push edi
	lea eax,[esp+0x10]
	push eax
	lea ecx,[esi+0xBC]
	call ZMap<long, ZArray<unsigned short>, long>::GetAt
	neg eax
	sbb eax,eax
	pop edi
	neg eax
	pop esi
	ret 8
}
}
// CQuestMan::IsDisallowedDeliveryQuest
__SUB_CLASS_THIS(002B58E0, __thiscall, 57112,  CQuestMan, int32_t, uint16_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x98]
	test eax,eax
	jne Block2

 Block1:
	xor edx,edx
	jmp Block3

 Block2:
	mov edx,dword ptr [eax-4]

 Block3:
	xor eax,eax
	push esi
	test edx,edx
	jle Block7

 Block4:
	mov ecx,dword ptr [ecx+0x98]
	mov si,word ptr [esp+8]

 Block5:
	cmp word ptr [ecx],si
	je Block8

 Block6:
	inc eax
	add ecx,2
	cmp eax,edx
	jl Block5

 Block7:
	xor eax,eax
	pop esi
	ret 4

 Block8:
	mov eax,1
	pop esi
	ret 4
}
}
// CQuestMan::IsAutoCompleteQuest
__SUB_CLASS_THIS(002B5840, __thiscall, 57112,  CQuestMan, int32_t, uint16_t) {
__asm {

 Block0:
	push ecx
	lea eax,[esp]
	push eax
	lea edx,[esp+0xC]
	push edx
	add ecx,0x1A0
	call ZMap<unsigned short, int, unsigned short>::GetAt
	neg eax
	sbb eax,eax
	neg eax
	pop ecx
	ret 4
}
}
// QuestDemand::QuestDemand
__SUB_CLASS_THIS0(002BA6E0, __thiscall, 57198,  QuestDemand, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	int 3// TODO: 	mov dword ptr [esi+0x48],offset ZList<long>::`vftable'
	push edi
	xor edi,edi
	mov dword ptr [esi+0x50],edi
	mov dword ptr [esi+0x54],edi
	mov dword ptr [esi+0x58],edi
	mov dword ptr [esi+0x5C],edi
	mov dword ptr [esi+0x60],edi
	mov dword ptr [esi+0x68],edi
	mov dword ptr [esi+0x70],edi
	mov dword ptr [esi+0x74],edi
	mov dword ptr [esi+0x78],edi
	lea ecx,[esi+0x80]
	mov dword ptr [esi+0x7C],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, int, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, int, long>::_CalcAutoGrow
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xBC],edi
	mov dword ptr [esi+0xD0],edi
	mov dword ptr [esi+0xD4],edi
	mov dword ptr [esi+0xF0],edi
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CQuestMan::RemoveRecentlyUpdatedQuest
__SUB_CLASS_THIS(002B7980, __thiscall, 57165,  CQuestMan, void, uint16_t) {
__asm {

 Block0:
	push esi
	lea esi,[ecx+0x2D4]
	push 0
	lea eax,[esp+0xC]
	push eax
	mov ecx,esi
	call ZList<unsigned short>::Find
	test eax,eax
	je Block2

 Block1:
	push eax
	mov ecx,esi
	call ZList<unsigned short>::RemoveAt

 Block2:
	pop esi
	ret 4
}
}
// CQuestMan::IsAutoStartQuest
__SUB_CLASS_THIS(002B5800, __thiscall, 57112,  CQuestMan, int32_t, uint16_t) {
__asm {

 Block0:
	push ecx
	lea eax,[esp]
	push eax
	lea edx,[esp+0xC]
	push edx
	add ecx,0x170
	call ZMap<unsigned short, int, unsigned short>::GetAt
	neg eax
	sbb eax,eax
	neg eax
	pop ecx
	ret 4
}
}
