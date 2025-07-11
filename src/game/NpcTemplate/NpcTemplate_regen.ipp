#include "regen.hpp"
// NpcTemplate.ipp
#include "NpcTemplate.hpp"

// CNpcTemplate::CNpcTemplate
_SUB_EXCEPTION_HANDLER(27BC10)
__SUB_CLASS_THIS0(0027BC10, __thiscall, 50582,  CNpcTemplate, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_27BC10
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
	mov esi,ecx
	mov dword ptr [esp+0xC],esi
	xor edi,edi
	mov dword ptr [esi+4],edi
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+8],edi
	mov dword ptr [esi+0x60],edi
	int 3// TODO: 	mov dword ptr [esi+0x64],offset ZList<CNpcTemplate::SPEAK_CONDITION>::`vftable'
	mov dword ptr [esi+0x6C],edi
	mov dword ptr [esi+0x70],edi
	mov dword ptr [esi+0x74],edi
	mov dword ptr [esi+0x78],edi
	int 3// TODO: 	mov dword ptr [esi+0x80],offset ZList<CNpcTemplate::CLIENT_ACTION_SET>::`vftable'
	mov dword ptr [esi+0x88],edi
	mov dword ptr [esi+0x8C],edi
	mov dword ptr [esi+0x90],edi
	int 3// TODO: 	mov dword ptr [esi+0x9C],offset ZList<SCRIPTINFO>::`vftable'
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB0],edi
	push offset ZXString<char>::~ZXString<char>
	push offset ZXString<char>::_ctor_default
	push 2
	push 4
	lea eax,[esi+0xB4]
	push eax
	mov byte ptr [esp+0x2C],7
	call __eh_vector_ctor_iterator
	int 3// TODO: 	mov dword ptr [esi+0xBC],offset ZList<CNpcTemplate::QuestLine>::`vftable'
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esi+0xCC],edi
	int 3// TODO: 	mov dword ptr [esi+0xD0],offset ZList<long>::`vftable'
	mov dword ptr [esi+0xD8],edi
	mov dword ptr [esi+0xDC],edi
	mov dword ptr [esi+0xE0],edi
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CNpcTemplate::GetChatMessageList
__SUB_CLASS_THIS(00277FE0, __thiscall, 50557,  CNpcTemplate, ZArray<Ztl_bstr_t>, const CharacterData&, long&) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx]
	push esi
	mov esi,dword ptr [esp+0xC]
	push eax
	mov eax,dword ptr [esp+0x18]
	lea edx,[ecx+0x64]
	push edx
	add ecx,0x60
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	push eax
	push ecx
	push esi
	mov dword ptr [esp+0x1C],0
	call CNpcTemplate::GetChatMessageList_1
	add esp,0x18
	mov eax,esi
	pop esi
	pop ecx
	ret 0xC
}
}
// CNpcTemplate::IsHideToLocalUser
__SUB_CLASS_THIS(0027AC90, __thiscall, 50566,  CNpcTemplate, int32_t, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call get_update_time
	mov ecx,dword ptr [esp+8]
	test ecx,ecx
	jle Block4

 Block1:
	mov edx,eax
	sub edx,dword ptr [esi+0x94]
	cmp edx,ecx
	jge Block4

 Block2:
	mov ecx,dword ptr [esi+0x98]
	test ecx,ecx
	jl Block4

 Block3:
	xor eax,eax
	test ecx,ecx
	sete al
	pop esi
	ret 4

 Block4:
	push 1
	mov ecx,esi
	mov dword ptr [esi+0x94],eax
	call CNpcTemplate::CalcClientActionSetIdx
	test eax,eax
	jl Block7

 Block5:
	push eax
	lea ecx,[esi+0x80]
	call ZList<CNpcTemplate::CLIENT_ACTION_SET>::FindIndex
	cmp dword ptr [eax+0x1C],0
	jne Block8

 Block6:
	xor eax,eax
	mov dword ptr [esi+0x98],1
	cmp dword ptr [esi+0x98],eax
	pop esi
	sete al
	ret 4

 Block7:
	cmp dword ptr [esi+0x18],0
	je Block6

 Block8:
	xor eax,eax
	mov dword ptr [esi+0x98],0
	cmp dword ptr [esi+0x98],eax
	pop esi
	sete al
	ret 4
}
}
// CNpcTemplate::~CNpcTemplate
_SUB_EXCEPTION_HANDLER(27BD10)
__SUB_CLASS_THIS0(0027BD10, __thiscall, 50584,  CNpcTemplate, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_27BD10
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
	lea ecx,[esi+0xD0]
	mov dword ptr [esp+0x14],9
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<long>::`vftable'
	call ZList<long>::RemoveAll
	lea ecx,[esi+0xBC]
	mov byte ptr [esp+0x14],8
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CNpcTemplate::QuestLine>::`vftable'
	call ZList<CNpcTemplate::QuestLine>::RemoveAll
	push offset ZXString<char>::~ZXString<char>
	push 2
	push 4
	lea eax,[esi+0xB4]
	push eax
	mov byte ptr [esp+0x24],7
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0xB0]
	mov byte ptr [esp+0x14],6
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea ecx,[esi+0x9C]
	mov byte ptr [esp+0x14],5
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<SCRIPTINFO>::`vftable'
	call ZList<SCRIPTINFO>::RemoveAll
	lea ecx,[esi+0x80]
	mov byte ptr [esp+0x14],4
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CNpcTemplate::CLIENT_ACTION_SET>::`vftable'
	call ZList<CNpcTemplate::CLIENT_ACTION_SET>::RemoveAll
	lea ecx,[esi+0x78]
	mov byte ptr [esp+0x14],3
	call ZArray<CNpcTemplate::ACT>::RemoveAll
	lea ecx,[esi+0x64]
	mov byte ptr [esp+0x14],2
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CNpcTemplate::SPEAK_CONDITION>::`vftable'
	call ZList<CNpcTemplate::SPEAK_CONDITION>::RemoveAll
	lea ecx,[esi+0x60]
	mov byte ptr [esp+0x14],1
	call ZArray<Ztl_bstr_t>::RemoveAll
	mov eax,dword ptr [esi+8]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov esi,dword ptr [esi+4]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block6

 Block5:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CNpcTemplate::RegisterNpc
_SUB_EXCEPTION_HANDLER(27C190)
__SUB(0027C190, __cdecl, 50575,  int32_t, unsigned long, NakedParam<_x_com_ptr<IWzProperty>>, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_27C190
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x184
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	xor edi,edi
	mov dword ptr [ebp+0x5C],edi
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x3D5
	push eax
	mov dword ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],2
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x150]
	push edx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x20]
	mov dword ptr [ebp+0x20],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov esi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x150],si
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp-0x150],ax
	mov eax,dword ptr [ebp-0x148]
	cmp eax,edi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp-0x150]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov eax,dword ptr [ebp+0x78]
	mov dword ptr [ebp+0x14],eax
	cmp eax,edi
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block11:
	lea ecx,[ebp+0x28]
	mov byte ptr [ebp-4],6
	mov dword ptr [ebp+0x2C],edi
	call ZRef<CNpcTemplate>::_Alloc
	mov ecx,dword ptr [ebp+0x74]
	mov ebx,dword ptr [ebp+0x2C]
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x3D6
	push edx
	mov byte ptr [ebp-4],7
	mov dword ptr [ebx],ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],8
	cmp ecx,edi
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea eax,[ebp-0x74]
	push eax
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x74],si
	jne Block64

 Block14:
	mov dword ptr [ebp+0x18],edi
	lea ecx,[ebp+0x44]
	push 0x6AE
	push ecx
	mov byte ptr [ebp-4],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [ebp-0x6C]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp+0x18]
	push eax
	mov byte ptr [ebp-4],0xB
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x44]
	add esp,0xC
	mov byte ptr [ebp-4],0xA
	cmp eax,edi
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block16:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x3C]
	push ecx
	call esi
	lea edx,[ebp-0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	lea eax,[ebp+0x4C]
	push eax
	mov byte ptr [ebp-4],0xC
	call esi
	lea ecx,[ebp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	mov edi,dword ptr [ebp+0x18]
	push 0
	push 0
	lea edx,[ebp-0x3C]
	push edx
	lea eax,[ebp+0x4C]
	push eax
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push edi
	mov byte ptr [ebp-4],0xD
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xE
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],0xD
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x40]
	mov dword ptr [ebp+0x40],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block25

 Block23:
	cmp eax,0x80004002
	je Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	mov esi,8
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp],si
	jne Block28

 Block26:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp+0x4C],si
	jne Block32

 Block30:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x3C],si
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov esi,dword ptr [ebp+0x40]
	test esi,esi
	sete al
	test al,al
	je Block55

 Block38:
	mov byte ptr [ebp-4],0xA
	test esi,esi
	je Block40

 Block39:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block40:
	mov byte ptr [ebp-4],9
	test edi,edi
	je Block42

 Block41:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block42:
	cmp word ptr [ebp-0x74],8
	mov byte ptr [ebp-4],7
	jne Block45

 Block43:
	mov eax,dword ptr [ebp-0x6C]
	xor ecx,ecx
	mov word ptr [ebp-0x74],cx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea edx,[ebp-0x74]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	lea ecx,[ebp+0x28]
	mov byte ptr [ebp-4],6
	call ZRef<CNpcTemplate>::~ZRef<CNpcTemplate>

 Block47:
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],5
	test eax,eax
	je Block49

 Block48:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block49:
	mov eax,dword ptr [ebp+0x20]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],1
	call edx
	mov eax,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block51

 Block50:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block51:
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	xor eax,eax

 Block54:
	lea esp,[ebp-0x1A0]
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
	ret

 Block55:
	cmp dword ptr [ebp+0x14],esi
	je Block60

 Block56:
	mov edi,dword ptr [ebp+0x14]
	mov dword ptr [ebp+0x14],esi
	test esi,esi
	je Block58

 Block57:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block58:
	test edi,edi
	je Block60

 Block59:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block60:
	mov byte ptr [ebp-4],0xA
	test esi,esi
	je Block62

 Block61:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block62:
	cmp dword ptr [ebp+0x18],0
	mov byte ptr [ebp-4],9
	je Block64

 Block63:
	mov eax,dword ptr [ebp+0x18]
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block64:
	mov edi,dword ptr [ebp+0x20]
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_IMITATE
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x4C]
	push ecx
	mov byte ptr [ebp-4],0x14
	mov ecx,edi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x15
	call get_int32
	mov esi,8
	add esp,8
	mov dword ptr [ebx+0xE4],eax
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x4C],si
	jne Block67

 Block65:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block68:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_HIDE__1
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x4C]
	push ecx
	mov byte ptr [ebp-4],0x16
	mov ecx,edi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x17
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x18],eax
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x4C],si
	jne Block71

 Block69:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block72:
	call get_update_time
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x671
	mov dword ptr [ebx+0x94],eax
	push ecx
	mov dword ptr [ebx+0x98],0xFFFFFFFF
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x74]
	mov edx,dword ptr [ebp+0x7C]
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+0x64],esp
	test eax,eax
	je Block74

 Block73:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block74:
	lea eax,[ebp+0x44]
	push eax
	call get_labeled_string_0
	add esp,0x10
	push eax
	lea ecx,[ebx+4]
	mov byte ptr [ebp-4],0x18
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block76

 Block75:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block76:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x672
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edx,dword ptr [ebp+0x7C]
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+0x64],esp
	test eax,eax
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block78:
	lea eax,[ebp+0x44]
	push eax
	call get_labeled_string_0
	add esp,0x10
	push eax
	lea ecx,[ebx+8]
	mov byte ptr [ebp-4],0x19
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block80

 Block79:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block80:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x67A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x4C]
	mov byte ptr [ebp-4],0x1A
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1B
	call get_int32
	add esp,8
	add eax,0x46
	jns Block82

 Block81:
	xor eax,eax
	jmp Block84

 Block82:
	cmp eax,0x8C
	jl Block84

 Block83:
	mov eax,0x8C

 Block84:
	mov esi,8
	mov dword ptr [ebx+0x14],eax
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x4C],si
	jne Block87

 Block85:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block88:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AB6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x4C]
	mov byte ptr [ebp-4],0x1C
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1D
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x1C],eax
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x4C],si
	jne Block91

 Block89:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block92:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AC2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0x1E
	test ecx,ecx
	jne Block94

 Block93:
	push 0x80004003
	call _com_issue_error

 Block94:
	lea edx,[ebp+0x4C]
	push edx
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	xor ecx,ecx
	cmp word ptr [eax],cx
	setne cl
	mov dword ptr [ebx+0xC],ecx
	cmp word ptr [ebp+0x4C],si
	jne Block97

 Block95:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block98:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1AB0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x4C]
	mov byte ptr [ebp-4],0x1F
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x20
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x10],eax
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x4C],si
	jne Block101

 Block99:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block102:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x6AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x4C]
	mov byte ptr [ebp-4],0x21
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x22
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x20],eax
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x4C],si
	jne Block105

 Block103:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x826
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x4C]
	push ecx
	mov byte ptr [ebp-4],0x23
	mov ecx,edi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x24
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [ebx+0x44],eax
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x4C],si
	jne Block109

 Block107:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block110:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x6B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x180]
	mov byte ptr [ebp-4],0x25
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x26
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x18]
	mov dword ptr [ebp+0x18],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block113

 Block111:
	cmp eax,0x80004002
	je Block113

 Block112:
	push eax
	call _com_issue_error

 Block113:
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp-0x180],si
	jne Block116

 Block114:
	xor eax,eax
	mov word ptr [ebp-0x180],ax
	mov eax,dword ptr [ebp-0x178]
	test eax,eax
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea ecx,[ebp-0x180]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block117:
	mov esi,dword ptr [ebp+0x18]
	test esi,esi
	je Block149

 Block118:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp-0x18]
	push eax
	push esi
	mov dword ptr [ebp-0x18],0
	call ecx
	test eax,eax
	jge Block120

 Block119:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block120:
	xor ebx,ebx
	cmp dword ptr [ebp-0x18],ebx
	jle Block148

 Block121:
	lea esp,[esp]

 Block122:
	mov eax,0x20
	call __chkstk
	mov dword ptr [ebp-0x10],esp
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
	mov ecx,dword ptr [ebp+0x18]
	lea edx,[ebp]
	mov byte ptr [ebp-4],0x29
	push edx
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	push ecx
	lea eax,[ebp]
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x2A
	call _xbstr_t::_ctor_3
	mov ecx,dword ptr [ebp+0x74]
	mov edx,dword ptr [ebp+0x7C]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+0x64],esp
	test eax,eax
	je Block124

 Block123:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block124:
	lea eax,[ebp+0x40]
	push eax
	call get_labeled_string_0
	add esp,0x10
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0x2B
	test eax,eax
	je Block142

 Block125:
	cmp byte ptr [eax],0
	je Block142

 Block126:
	push eax
	lea ecx,[ebp+0x60]
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x2C]
	push 0xFFFFFFFF
	add ecx,0x60
	mov byte ptr [ebp-4],0x2C
	call ZArray<Ztl_bstr_t>::InsertBefore
	mov esi,eax
	lea ecx,[ebp+0x60]
	cmp esi,ecx
	je Block131

 Block127:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block129

 Block128:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block129:
	mov edi,dword ptr [ebp+0x60]
	mov dword ptr [esi],edi
	test edi,edi
	je Block134

 Block130:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block132

 Block131:
	mov edi,dword ptr [ebp+0x60]

 Block132:
	test edi,edi
	je Block134

 Block133:
	mov ecx,edi
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x60],0

 Block134:
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0x2A
	test eax,eax
	je Block136

 Block135:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block136:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x28
	jne Block139

 Block137:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block140

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block139:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block140:
	inc ebx
	cmp ebx,dword ptr [ebp-0x18]
	jl Block122

 Block141:
	jmp Block148

 Block142:
	mov byte ptr [ebp-4],0x2A
	test eax,eax
	je Block144

 Block143:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block144:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x28
	jne Block147

 Block145:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block148

 Block146:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block148

 Block147:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block148:
	mov ecx,dword ptr [ebp+0x2C]
	add ecx,0x64
	push ecx
	push ecx
	mov ecx,dword ptr [ebp+0x18]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	mov dword ptr [ebp+0x64],esp
	push ecx
	call eax
	call CNpcTemplate::LoadSpeakCondition
	mov ebx,dword ptr [ebp+0x2C]
	mov edi,dword ptr [ebp+0x20]
	add esp,8

 Block149:
	push 0xFFFFFFEA
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x6B1
	push ecx
	mov esi,8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x4C]
	mov byte ptr [ebp-4],0x2D
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x2E
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x24],eax
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp+0x4C],si
	jne Block152

 Block150:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block153

 Block151:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block153

 Block152:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block153:
	push 0xFFFFFFBF
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x6B2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x4C]
	mov byte ptr [ebp-4],0x2F
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x30
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x28],eax
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp+0x4C],si
	jne Block156

 Block154:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block157

 Block155:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block157

 Block156:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block157:
	push 0x16
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x6B3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x4C]
	push ecx
	mov byte ptr [ebp-4],0x31
	mov ecx,edi
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x32
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x2C],eax
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp+0x4C],si
	jne Block160

 Block158:
	mov eax,dword ptr [ebp+0x54]
	xor edx,edx
	mov word ptr [ebp+0x4C],dx
	test eax,eax
	je Block161

 Block159:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block161

 Block160:
	lea eax,[ebp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block161:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x6B4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x4C]
	mov byte ptr [ebp-4],0x33
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x34
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x30],eax
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp+0x4C],si
	jne Block164

 Block162:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block165

 Block163:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block165

 Block164:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block165:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x6B5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x4C]
	mov byte ptr [ebp-4],0x35
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x28
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x36
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x48],eax
	mov byte ptr [ebp-4],0x28
	cmp word ptr [ebp+0x4C],si
	jne Block168

 Block166:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	xor esi,esi
	mov word ptr [ebp+0x4C],cx
	cmp eax,esi
	je Block169

 Block167:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block169

 Block168:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]
	xor esi,esi

 Block169:
	mov ecx,dword ptr [ebp+0x14]
	lea eax,[ebp-0xE4]
	push eax
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],0x37
	mov dword ptr [ebp-0x18],esi
	mov dword ptr [ebp+0x64],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block171

 Block170:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block171:
	lea ecx,[ebp-0x18]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,esi
	jge Block174

 Block172:
	cmp eax,0x80004002
	je Block174

 Block173:
	push eax
	call _com_issue_error

 Block174:
	mov eax,dword ptr [ebp-0xE4]
	mov byte ptr [ebp-4],0x39
	cmp eax,esi
	je Block176

 Block175:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block176:
	lea eax,[ebp-0x60]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov dword ptr [ebx+0x34],0xFFFFFFFF
	mov byte ptr [ebp-4],0x3A
	mov dword ptr [ebx+0x7C],esi
	mov dword ptr [ebp-0x64],esi
	mov dword ptr [ebp-0xF0],esi
	nop

 Block177:
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block1

 Block178:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0xF0]
	push edx
	lea edx,[ebp-0x60]
	push edx
	push 1
	push eax
	mov eax,dword ptr [ecx+0xC]
	call eax
	test eax,eax
	jne Block461

 Block179:
	mov esi,dword ptr [ebp-0x58]
	lea ecx,[ebp-0xEC]
	push 0x3D5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	or dword ptr [ebp+0x5C],1
	push eax
	push esi
	mov byte ptr [ebp-4],0x3B
	call __wcsicmp
	add esp,8
	test eax,eax
	je Block183

 Block180:
	lea edx,[ebp-0x100]
	push 0x42B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	or dword ptr [ebp+0x5C],2
	push eax
	push esi
	mov dword ptr [ebp-4],0x3C
	call __wcsicmp
	add esp,8
	test eax,eax
	je Block183

 Block181:
	lea eax,[ebp-0xF8]
	push 0x1AC2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	or dword ptr [ebp+0x5C],4
	push eax
	push esi
	call __wcsicmp
	add esp,8
	test eax,eax
	je Block183

 Block182:
	xor bl,bl
	jmp Block184

 Block183:
	mov bl,1

 Block184:
	test byte ptr [ebp+0x5C],4
	je Block187

 Block185:
	mov eax,dword ptr [ebp-0xF8]
	and dword ptr [ebp+0x5C],0xFFFFFFFB
	test eax,eax
	je Block187

 Block186:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block187:
	test byte ptr [ebp+0x5C],2
	mov dword ptr [ebp-4],0x3B
	je Block190

 Block188:
	mov eax,dword ptr [ebp-0x100]
	and dword ptr [ebp+0x5C],0xFFFFFFFD
	test eax,eax
	je Block190

 Block189:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block190:
	test byte ptr [ebp+0x5C],1
	mov dword ptr [ebp-4],0x3A
	je Block193

 Block191:
	mov eax,dword ptr [ebp-0xEC]
	and dword ptr [ebp+0x5C],0xFFFFFFFE
	test eax,eax
	je Block193

 Block192:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block193:
	test bl,bl
	jne Block455

 Block194:
	push 9
	push offset _S_CONDITION
	push esi
	call _wcsnicmp
	mov ecx,dword ptr [ebp+0x2C]
	add esp,0xC
	test eax,eax
	jne Block373

 Block195:
	sub ecx,0xFFFFFF80
	call ZList<CNpcTemplate::CLIENT_ACTION_SET>::AddTail_
	push 0
	push 0
	push ecx
	mov edi,eax
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push esi
	mov dword ptr [ebp-0x7C],edi
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x120]
	push ecx
	mov ecx,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0x3D
	mov byte ptr [ebp-4],0x3A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x3E
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block203

 Block196:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0xD8]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ebx,ebx
	mov esi,eax
	mov eax,dword ptr [edi]
	test esi,esi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp-0xD8]
	test eax,eax
	je Block198

 Block197:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block198:
	mov dword ptr [edi],ebx
	test esi,esi
	jge Block200

 Block199:
	cmp esi,0x80004002
	jne Block460

 Block200:
	mov esi,8
	mov byte ptr [ebp-4],0x3A
	cmp word ptr [ebp-0x120],si
	jne Block205

 Block201:
	xor eax,eax
	mov word ptr [ebp-0x120],ax
	mov eax,dword ptr [ebp-0x118]
	test eax,eax
	je Block206

 Block202:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block206

 Block203:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block200

 Block204:
	mov dword ptr [edi],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block200

 Block205:
	lea ecx,[ebp-0x120]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block206:
	xor ebx,ebx
	push ebx
	push ecx
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push offset _S_HIDE
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi]
	mov byte ptr [ebp-4],0x3F
	cmp ecx,ebx
	je Block1

 Block207:
	lea edx,[ebp-0x130]
	push edx
	mov byte ptr [ebp-4],0x3A
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x40
	call get_int32
	add esp,8
	mov dword ptr [edi+0x1C],eax
	mov byte ptr [ebp-4],0x3A
	cmp word ptr [ebp-0x130],si
	jne Block210

 Block208:
	xor eax,eax
	mov word ptr [ebp-0x130],ax
	mov eax,dword ptr [ebp-0x128]
	cmp eax,ebx
	je Block211

 Block209:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block211

 Block210:
	lea ecx,[ebp-0x130]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block211:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x48],esp
	push 0x1AB2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [ebp-4],0x41
	cmp ecx,ebx
	je Block1

 Block212:
	lea eax,[ebp-0x110]
	push eax
	mov byte ptr [ebp-4],0x3A
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x42
	call get_int32
	add esp,8
	mov byte ptr [edi+0x20],al
	mov byte ptr [ebp-4],0x3A
	cmp word ptr [ebp-0x110],si
	jne Block215

 Block213:
	mov eax,dword ptr [ebp-0x108]
	xor ecx,ecx
	mov word ptr [ebp-0x110],cx
	cmp eax,ebx
	je Block216

 Block214:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block216

 Block215:
	lea edx,[ebp-0x110]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block216:
	mov edi,dword ptr [edi]
	cmp edi,ebx
	je Block1

 Block217:
	lea eax,[ebp-0xDC]
	push eax
	mov ecx,edi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],0x43
	mov dword ptr [ebp+0x40],ebx
	mov dword ptr [ebp+0x48],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block219

 Block218:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block219:
	lea ecx,[ebp+0x40]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block221

 Block220:
	cmp eax,0x80004002
	jne Block4

 Block221:
	mov eax,dword ptr [ebp-0xDC]
	mov byte ptr [ebp-4],0x45
	cmp eax,ebx
	je Block223

 Block222:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block223:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0x46
	mov dword ptr [ebp-0xFC],ebx
	jmp Block225

 Block225:
	mov esi,dword ptr [ebp+0x40]
	test esi,esi
	je Block1

 Block226:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp-0xFC]
	push edx
	lea eax,[ebp]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block368

 Block227:
	cmp word ptr [ebp],8
	mov edi,dword ptr [ebp+8]
	je Block229

 Block228:
	mov edi,offset _S___3

 Block229:
	mov dword ptr [ebp+0x60],0
	test edi,edi
	je Block231

 Block230:
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	mov esi,eax
	push 0
	dec esi
	push esi
	lea ecx,[ebp+0x60]
	call ZXString<char>::GetBuffer
	push 0
	push 0
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	push esi
	lea ecx,[ebp+0x60]
	call ZXString<char>::ReleaseBuffer

 Block231:
	lea edx,[ebp]
	push 0
	push edx
	mov byte ptr [ebp-4],0x47
	call get_int32
	mov edi,eax
	add esp,8
	test edi,edi
	jle Block260

 Block232:
	mov ebx,dword ptr [ebp-0x7C]
	lea ecx,[ebx+4]
	call ZList<CNpcTemplate::QUEST_CONDITION>::AddTail_
	push 0
	push 0
	push ecx
	mov esi,eax
	mov eax,dword ptr [ebp+0x60]
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push eax
	mov dword ptr [esi],edi
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebx]
	mov byte ptr [ebp-4],0x48
	test ecx,ecx
	je Block1

 Block233:
	lea edx,[ebp-0x170]
	push edx
	mov byte ptr [ebp-4],0x47
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x49
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x24],edi
	test eax,eax
	je Block236

 Block234:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0xD0]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0xD0]
	mov edi,ecx
	mov dword ptr [ebp+0x24],edi
	test eax,eax
	jge Block236

 Block235:
	cmp eax,0x80004002
	jne Block4

 Block236:
	cmp word ptr [ebp-0x170],8
	mov byte ptr [ebp-4],0x4B
	jne Block239

 Block237:
	mov eax,dword ptr [ebp-0x168]
	xor edx,edx
	mov word ptr [ebp-0x170],dx
	test eax,eax
	je Block240

 Block238:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block240

 Block239:
	lea eax,[ebp-0x170]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block240:
	test edi,edi
	je Block251

 Block241:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push offset _S_STATE
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x190]
	push ecx
	mov byte ptr [ebp-4],0x4C
	mov ecx,edi
	mov byte ptr [ebp-4],0x4B
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x4D
	call get_int32
	mov ebx,8
	add esp,8
	mov dword ptr [esi+4],eax
	mov byte ptr [ebp-4],0x4B
	cmp word ptr [ebp-0x190],bx
	jne Block244

 Block242:
	mov eax,dword ptr [ebp-0x188]
	xor edx,edx
	mov word ptr [ebp-0x190],dx
	test eax,eax
	je Block245

 Block243:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block245

 Block244:
	lea eax,[ebp-0x190]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block245:
	push ecx
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push offset _S_VALUE
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x160]
	push ecx
	mov byte ptr [ebp-4],0x4E
	mov ecx,edi
	mov byte ptr [ebp-4],0x4B
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0x4F
	cmp word ptr [eax],bx
	jne Block247

 Block246:
	mov eax,dword ptr [eax+8]
	jmp Block248

 Block247:
	mov eax,offset _S___3

 Block248:
	push 0xFFFFFFFF
	lea ecx,[esi+8]
	push eax
	call ZXString<char>::AssignWideStr
	mov byte ptr [ebp-4],0x4B
	cmp word ptr [ebp-0x160],bx
	jne Block250

 Block249:
	mov eax,dword ptr [ebp-0x158]
	xor edx,edx
	mov word ptr [ebp-0x160],dx
	jmp Block254

 Block250:
	lea eax,[ebp-0x160]
	push eax
	jmp Block257

 Block251:
	mov edx,dword ptr [ebp+0x60]
	push 0
	push ecx
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push edx
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebx]
	mov byte ptr [ebp-4],0x50
	test ecx,ecx
	je Block1

 Block252:
	lea eax,[ebp-0x140]
	push eax
	mov byte ptr [ebp-4],0x4B
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x51
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x140],8
	mov dword ptr [esi+4],eax
	mov byte ptr [ebp-4],0x4B
	jne Block256

 Block253:
	mov eax,dword ptr [ebp-0x138]
	xor ecx,ecx
	mov word ptr [ebp-0x140],cx

 Block254:
	test eax,eax
	je Block258

 Block255:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block258

 Block256:
	lea edx,[ebp-0x140]
	push edx

 Block257:
	call dword ptr [ZImports::_VariantClear]

 Block258:
	mov byte ptr [ebp-4],0x47
	test edi,edi
	je Block360

 Block259:
	mov eax,dword ptr [edi]
	push edi
	jmp Block359

 Block260:
	lea edx,[ebp-0xE8]
	push 0x3D5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [eax]
	or ebx,8
	push eax
	lea ecx,[ebp+0x60]
	mov byte ptr [ebp-4],0x52
	mov dword ptr [ebp+0x5C],ebx
	call ZXString<char>::CompareNoCase
	test eax,eax
	je Block265

 Block261:
	lea eax,[ebp-0xE0]
	push 0x42B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	or ebx,0x10
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp-4],0x53
	mov dword ptr [ebp+0x5C],ebx
	call ZXString<char>::CompareNoCase
	test eax,eax
	je Block265

 Block262:
	lea ecx,[ebp-0xD4]
	push 0x1AC2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	or ebx,0x20
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp-4],0x54
	mov dword ptr [ebp+0x5C],ebx
	call ZXString<char>::CompareNoCase
	test eax,eax
	je Block265

 Block263:
	push offset _S_HIDE
	lea ecx,[ebp+0x60]
	call ZXString<char>::CompareNoCase
	test eax,eax
	je Block265

 Block264:
	lea edx,[ebp-0xF4]
	push 0x1AB2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	or ebx,0x40
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x5C],ebx
	call ZXString<char>::CompareNoCase
	mov byte ptr [ebp+0x1F],1
	test eax,eax
	jne Block266

 Block265:
	mov byte ptr [ebp+0x1F],0

 Block266:
	test bl,0x40
	je Block269

 Block267:
	mov eax,dword ptr [ebp-0xF4]
	and ebx,0xFFFFFFBF
	mov dword ptr [ebp+0x5C],ebx
	test eax,eax
	je Block269

 Block268:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block269:
	mov dword ptr [ebp-4],0x53
	test bl,0x20
	je Block272

 Block270:
	mov eax,dword ptr [ebp-0xD4]
	and ebx,0xFFFFFFDF
	mov dword ptr [ebp+0x5C],ebx
	test eax,eax
	je Block272

 Block271:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block272:
	mov dword ptr [ebp-4],0x52
	test bl,0x10
	je Block275

 Block273:
	mov eax,dword ptr [ebp-0xE0]
	and ebx,0xFFFFFFEF
	mov dword ptr [ebp+0x5C],ebx
	test eax,eax
	je Block275

 Block274:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block275:
	mov dword ptr [ebp-4],0x47
	test bl,8
	je Block278

 Block276:
	mov eax,dword ptr [ebp-0xE8]
	and ebx,0xFFFFFFF7
	mov dword ptr [ebp+0x5C],ebx
	test eax,eax
	je Block278

 Block277:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block278:
	cmp byte ptr [ebp+0x1F],0
	je Block360

 Block279:
	mov ebx,dword ptr [ebp-0x7C]
	push 0xFFFFFFFF
	lea ecx,[ebx+0x18]
	call ZArray<CNpcTemplate::ACT>::InsertBefore
	mov edi,eax
	mov eax,dword ptr [ebp+0x60]
	push eax
	lea ecx,[ebp-0x44]
	mov dword ptr [ebp+0x24],edi
	call _xbstr_t::_ctor_0
	lea ecx,[ebp-0x44]
	cmp edi,ecx
	je Block291

 Block280:
	mov esi,dword ptr [edi]
	test esi,esi
	je Block289

 Block281:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block288

 Block282:
	test esi,esi
	je Block288

 Block283:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block285

 Block284:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block285:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block287

 Block286:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block287:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block288:
	mov dword ptr [edi],0

 Block289:
	mov esi,dword ptr [ebp-0x44]
	mov dword ptr [edi],esi
	test esi,esi
	je Block300

 Block290:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block292

 Block291:
	mov esi,dword ptr [ebp-0x44]

 Block292:
	test esi,esi
	je Block300

 Block293:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block299

 Block294:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block296

 Block295:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block296:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block298

 Block297:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block298:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block299:
	mov dword ptr [ebp-0x44],0

 Block300:
	push 0
	push 0
	push offset _S_SPEAK
	lea edx,[ebp+0x10]
	push edx
	lea ecx,[ebp+0x60]
	call ZXString<char>::op_add_0
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x55
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebx]
	mov byte ptr [ebp-4],0x56
	test ecx,ecx
	je Block1

 Block301:
	lea eax,[ebp-0xCC]
	push eax
	mov byte ptr [ebp-4],0x55
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x57
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [ebp+0x48],ebx
	test eax,eax
	je Block304

 Block302:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x20]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [ebp-0x20]
	mov dword ptr [ebp+0x48],ebx
	test eax,eax
	jge Block304

 Block303:
	cmp eax,0x80004002
	jne Block4

 Block304:
	cmp word ptr [ebp-0xCC],8
	mov byte ptr [ebp-4],0x59
	jne Block307

 Block305:
	mov eax,dword ptr [ebp-0xC4]
	xor ecx,ecx
	mov word ptr [ebp-0xCC],cx
	test eax,eax
	je Block308

 Block306:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block308

 Block307:
	lea edx,[ebp-0xCC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block308:
	mov eax,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x5A
	test eax,eax
	je Block310

 Block309:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block310:
	test ebx,ebx
	sete al
	test al,al
	je Block315

 Block311:
	mov byte ptr [ebp-4],0x47
	test ebx,ebx
	je Block313

 Block312:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block313:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x46
	test eax,eax
	je Block363

 Block314:
	add eax,0xFFFFFFF4
	push eax
	jmp Block362

 Block315:
	xor esi,esi
	mov dword ptr [ebp-0x1C],esi
	lea esp,[esp]

 Block316:
	test ebx,ebx
	je Block1

 Block317:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp-0x40]
	push eax
	push ebx
	mov dword ptr [ebp-0x40],0
	call ecx
	test eax,eax
	jge Block319

 Block318:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block319:
	cmp esi,dword ptr [ebp-0x40]
	jae Block358

 Block320:
	mov eax,0x20
	call __chkstk
	mov dword ptr [ebp-0x10],esp
	mov eax,esp
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x40],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x3C]
	mov byte ptr [ebp-4],0x5B
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x5A
	call IWzProperty::Getitem
	push ecx
	lea eax,[ebp-0x3C]
	mov dword ptr [ebp-0x40],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0x5C
	call _xbstr_t::_ctor_3
	mov ecx,dword ptr [ebp+0x74]
	mov edx,dword ptr [ebp+0x7C]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-0x40],esp
	test eax,eax
	je Block322

 Block321:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block322:
	lea eax,[ebp-0x78]
	push eax
	call get_labeled_string_0
	add esp,0x10
	mov eax,dword ptr [ebp-0x78]
	mov byte ptr [ebp-4],0x5D
	test eax,eax
	je Block352

 Block323:
	cmp byte ptr [eax],0
	je Block352

 Block324:
	push eax
	lea ecx,[ebp-0x48]
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x24]
	push 0xFFFFFFFF
	add ecx,4
	mov byte ptr [ebp-4],0x5E
	call ZArray<Ztl_bstr_t>::InsertBefore
	mov edi,eax
	lea ecx,[ebp-0x48]
	cmp edi,ecx
	je Block336

 Block325:
	mov esi,dword ptr [edi]
	test esi,esi
	je Block334

 Block326:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block333

 Block327:
	test esi,esi
	je Block333

 Block328:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block330

 Block329:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block330:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block332

 Block331:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block332:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block333:
	mov dword ptr [edi],0

 Block334:
	mov esi,dword ptr [ebp-0x48]
	mov dword ptr [edi],esi
	test esi,esi
	je Block337

 Block335:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block337

 Block336:
	mov esi,dword ptr [ebp-0x48]

 Block337:
	mov byte ptr [ebp-4],0x5D
	test esi,esi
	je Block345

 Block338:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block344

 Block339:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block341

 Block340:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block341:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block343

 Block342:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block343:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block344:
	mov dword ptr [ebp-0x48],0

 Block345:
	mov eax,dword ptr [ebp-0x78]
	mov byte ptr [ebp-4],0x5C
	test eax,eax
	je Block347

 Block346:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block347:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0x5A
	jne Block350

 Block348:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block351

 Block349:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [ebp-0x1C]
	mov esi,dword ptr [ebp-0x1C]
	jmp Block316

 Block350:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block351:
	inc dword ptr [ebp-0x1C]
	mov esi,dword ptr [ebp-0x1C]
	jmp Block316

 Block352:
	mov byte ptr [ebp-4],0x5C
	test eax,eax
	je Block354

 Block353:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block354:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0x5A
	jne Block357

 Block355:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	test eax,eax
	je Block358

 Block356:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block358

 Block357:
	lea edx,[ebp-0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block358:
	mov eax,dword ptr [ebp+0x24]
	add eax,0x10
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [ebp+0x24],esp
	push ebx
	call edx
	call CNpcTemplate::LoadSpeakCondition
	mov eax,dword ptr [ebx]
	add esp,8
	mov byte ptr [ebp-4],0x47
	push ebx

 Block359:
	mov ecx,dword ptr [eax+8]
	call ecx

 Block360:
	cmp dword ptr [ebp+0x60],0
	mov byte ptr [ebp-4],0x46
	je Block363

 Block361:
	mov edx,dword ptr [ebp+0x60]
	add edx,0xFFFFFFF4
	push edx

 Block362:
	call ZXString<char>::_Release
	add esp,4

 Block363:
	cmp word ptr [ebp],8
	jne Block366

 Block364:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block225

 Block365:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block225

 Block366:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block225

 Block367:
	jmp Block4

 Block368:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x45
	jne Block371

 Block369:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block372

 Block370:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],0x3A
	call edx
	jmp Block455

 Block371:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block372:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],0x3A
	call edx
	jmp Block455

 Block373:
	push 0xFFFFFFFF
	add ecx,0x78
	call ZArray<CNpcTemplate::ACT>::InsertBefore
	mov edi,eax
	lea eax,[ebp+0x64]
	push 0x6B6
	push eax
	mov dword ptr [ebp+0x24],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push esi
	call __wcsicmp
	add esp,8
	test eax,eax
	mov eax,dword ptr [ebp+0x64]
	sete bl
	test eax,eax
	je Block375

 Block374:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block375:
	test bl,bl
	je Block377

 Block376:
	mov ecx,dword ptr [ebp+0x2C]
	mov edx,dword ptr [ebp-0x64]
	mov dword ptr [ecx+0x34],edx

 Block377:
	inc dword ptr [ebp-0x64]
	lea eax,[ebp-0x60]
	push eax
	lea ecx,[ebp-0x14]
	push ecx
	call DetachBSTR
	mov ebx,eax
	add esp,8
	cmp edi,ebx
	je Block389

 Block378:
	mov esi,dword ptr [edi]
	test esi,esi
	je Block387

 Block379:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block386

 Block380:
	test esi,esi
	je Block386

 Block381:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block383

 Block382:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block383:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block385

 Block384:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block385:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block386:
	mov dword ptr [edi],0

 Block387:
	mov eax,dword ptr [ebx]
	mov dword ptr [edi],eax
	test eax,eax
	je Block389

 Block388:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block389:
	mov ecx,dword ptr [ebp-0x14]
	xor esi,esi
	cmp ecx,esi
	je Block391

 Block390:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp-0x14],esi

 Block391:
	mov eax,dword ptr [edi]
	push esi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x48],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block393

 Block392:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block393:
	mov ecx,dword ptr [ebp+0x14]
	lea eax,[ebp-0x8C]
	mov byte ptr [ebp-4],0x5F
	push eax
	mov byte ptr [ebp-4],0x3A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x60
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x40]
	mov dword ptr [ebp+0x40],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block395

 Block394:
	cmp eax,0x80004002
	jne Block4

 Block395:
	cmp word ptr [ebp-0x8C],8
	mov byte ptr [ebp-4],0x62
	jne Block398

 Block396:
	mov eax,dword ptr [ebp-0x84]
	xor ecx,ecx
	mov word ptr [ebp-0x8C],cx
	cmp eax,esi
	je Block399

 Block397:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block399

 Block398:
	lea edx,[ebp-0x8C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block399:
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x48],esp
	push 0x1AB6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0x63
	cmp ebx,esi
	je Block1

 Block400:
	lea ecx,[ebp-0x9C]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x62
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x64
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	cmp word ptr [ebp-0x9C],8
	mov dword ptr [edi+8],eax
	mov byte ptr [ebp-4],0x62
	jne Block403

 Block401:
	mov eax,dword ptr [ebp-0x94]
	xor edx,edx
	mov word ptr [ebp-0x9C],dx
	cmp eax,esi
	je Block404

 Block402:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block404

 Block403:
	lea eax,[ebp-0x9C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block404:
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x48],esp
	push 0x1787
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0xAC]
	mov byte ptr [ebp-4],0x65
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x62
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x66
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	cmp word ptr [ebp-0xAC],8
	mov dword ptr [edi+0xC],eax
	mov byte ptr [ebp-4],0x62
	jne Block407

 Block405:
	xor eax,eax
	mov word ptr [ebp-0xAC],ax
	mov eax,dword ptr [ebp-0xA4]
	cmp eax,esi
	je Block408

 Block406:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block408

 Block407:
	lea ecx,[ebp-0xAC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block408:
	push esi
	push esi
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x48],esp
	push 0x6B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0xBC]
	mov byte ptr [ebp-4],0x67
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x62
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x68
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block410

 Block409:
	cmp eax,0x80004002
	jne Block4

 Block410:
	cmp word ptr [ebp-0xBC],8
	mov byte ptr [ebp-4],0x6A
	jne Block413

 Block411:
	mov eax,dword ptr [ebp-0xB4]
	xor ecx,ecx
	mov word ptr [ebp-0xBC],cx
	cmp eax,esi
	je Block414

 Block412:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block414

 Block413:
	lea edx,[ebp-0xBC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block414:
	mov esi,dword ptr [ebp+0x60]
	test esi,esi
	je Block446

 Block415:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp-0x1C]
	push ecx
	push esi
	mov dword ptr [ebp-0x1C],0
	call edx
	test eax,eax
	jge Block417

 Block416:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block417:
	xor ebx,ebx
	cmp dword ptr [ebp-0x1C],ebx
	jle Block445

 Block418:
	lea esp,[esp]

 Block419:
	mov eax,0x20
	call __chkstk
	mov dword ptr [ebp-0x10],esp
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp+0x4C]
	mov byte ptr [ebp-4],0x6B
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x6A
	call IWzProperty::Getitem
	push ecx
	lea edx,[ebp+0x4C]
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x6C
	call _xbstr_t::_ctor_3
	mov eax,dword ptr [ebp+0x74]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x7C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+0x48],esp
	test eax,eax
	je Block421

 Block420:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block421:
	lea ecx,[ebp+0x44]
	push ecx
	call get_labeled_string_0
	add esp,0x10
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x6D
	test eax,eax
	je Block439

 Block422:
	cmp byte ptr [eax],0
	je Block439

 Block423:
	push eax
	lea ecx,[ebp-0x50]
	call _xbstr_t::_ctor_0
	push 0xFFFFFFFF
	lea ecx,[edi+4]
	mov byte ptr [ebp-4],0x6E
	call ZArray<Ztl_bstr_t>::InsertBefore
	mov esi,eax
	lea edx,[ebp-0x50]
	cmp esi,edx
	je Block428

 Block424:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block426

 Block425:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block426:
	mov edi,dword ptr [ebp-0x50]
	mov dword ptr [esi],edi
	test edi,edi
	je Block431

 Block427:
	lea eax,[edi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block429

 Block428:
	mov edi,dword ptr [ebp-0x50]

 Block429:
	test edi,edi
	je Block431

 Block430:
	mov ecx,edi
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp-0x50],0

 Block431:
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x6C
	test eax,eax
	je Block433

 Block432:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block433:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0x6A
	jne Block436

 Block434:
	mov eax,dword ptr [ebp+0x54]
	xor ecx,ecx
	mov word ptr [ebp+0x4C],cx
	test eax,eax
	je Block437

 Block435:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block437

 Block436:
	lea edx,[ebp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block437:
	inc ebx
	cmp ebx,dword ptr [ebp-0x1C]
	jge Block445

 Block438:
	mov edi,dword ptr [ebp+0x24]
	mov esi,dword ptr [ebp+0x60]
	jmp Block419

 Block439:
	mov byte ptr [ebp-4],0x6C
	test eax,eax
	je Block441

 Block440:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block441:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],0x6A
	jne Block444

 Block442:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block445

 Block443:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block445

 Block444:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block445:
	mov edx,dword ptr [ebp+0x24]
	mov esi,dword ptr [ebp+0x60]
	add edx,0x10
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [ebp+0x48],esp
	push esi
	call ecx
	call CNpcTemplate::LoadSpeakCondition
	mov ebx,dword ptr [ebp+0x40]
	add esp,8

 Block446:
	mov byte ptr [ebp-4],0x62
	test esi,esi
	je Block448

 Block447:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block448:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x48],esp
	push 0x9E6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x30]
	mov byte ptr [ebp-4],0x6F
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x62
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x70
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x30],8
	mov esi,eax
	mov byte ptr [ebp-4],0x62
	jne Block451

 Block449:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block452

 Block450:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block452

 Block451:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block452:
	test esi,esi
	je Block454

 Block453:
	mov eax,dword ptr [ebp+0x2C]
	inc dword ptr [eax+0x7C]

 Block454:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov byte ptr [ebp-4],0x3A
	call eax

 Block455:
	cmp word ptr [ebp-0x60],8
	jne Block458

 Block456:
	mov eax,dword ptr [ebp-0x58]
	xor ecx,ecx
	mov word ptr [ebp-0x60],cx
	test eax,eax
	je Block177

 Block457:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block177

 Block458:
	lea edx,[ebp-0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block177

 Block459:
	jmp Block4

 Block460:
	push esi
	call _com_issue_error

 Block461:
	mov ebx,dword ptr [ebp+0x2C]
	mov eax,dword ptr [ebx+0x34]
	test eax,eax
	jge Block463

 Block462:
	xor eax,eax
	jmp Block464

 Block463:
	add eax,2

 Block464:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [ebx+0x34],eax
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x6B8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x20]
	lea ecx,[ebp+0x30]
	push ecx
	mov byte ptr [ebp-4],0x71
	mov ecx,esi
	mov byte ptr [ebp-4],0x3A
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x72
	call get_int32
	mov edi,8
	add esp,8
	mov dword ptr [ebx+0x38],eax
	mov byte ptr [ebp-4],0x3A
	cmp word ptr [ebp+0x30],di
	jne Block467

 Block465:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block468

 Block466:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block468

 Block467:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block468:
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x6B9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x30]
	mov byte ptr [ebp-4],0x73
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x3A
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x74
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x3C],eax
	mov byte ptr [ebp-4],0x3A
	cmp word ptr [ebp+0x30],di
	jne Block471

 Block469:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block472

 Block470:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block472

 Block471:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block472:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x6BA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x30]
	mov byte ptr [ebp-4],0x75
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x3A
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x76
	call get_int32
	add esp,8
	mov dword ptr [ebx+0x40],eax
	mov byte ptr [ebp-4],0x3A
	cmp word ptr [ebp+0x30],di
	jne Block475

 Block473:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	test eax,eax
	je Block476

 Block474:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block476

 Block475:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block476:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0xEE1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x30]
	push ecx
	mov byte ptr [ebp-4],0x77
	mov ecx,esi
	mov byte ptr [ebp-4],0x3A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x78
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block479

 Block477:
	cmp eax,0x80004002
	je Block479

 Block478:
	push eax
	call _com_issue_error

 Block479:
	mov byte ptr [ebp-4],0x7A
	cmp word ptr [ebp+0x30],di
	jne Block482

 Block480:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block483

 Block481:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block483

 Block482:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block483:
	mov edi,dword ptr [ebp+0x60]
	test edi,edi
	sete al
	test al,al
	je Block486

 Block484:
	mov byte ptr [ebp-4],0x3A
	test edi,edi
	je Block500

 Block485:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx
	jmp Block500

 Block486:
	lea eax,[ebp-0xCC]
	push eax
	or ebx,0xFFFFFFFF
	call GetLocalTime
	movzx esi,word ptr [ebp-0xCC]
	movzx ecx,word ptr [ebp-0xCA]
	imul esi,0x64
	movzx edx,word ptr [ebp-0xC6]
	add esi,ecx
	imul esi,0x64
	add esi,edx

 Block487:
	inc ebx
	mov eax,0x20
	mov dword ptr [ebp+0x64],ebx
	call __chkstk
	mov dword ptr [ebp-0x10],esp
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x10],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x7B
	test edi,edi
	jne Block489

 Block488:
	push 0x80004003
	call _com_issue_error

 Block489:
	lea eax,[ebp-0xBC]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x7A
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x7C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+0x44],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block492

 Block490:
	cmp eax,0x80004002
	je Block492

 Block491:
	push eax
	call _com_issue_error

 Block492:
	cmp word ptr [ebp-0xBC],8
	mov byte ptr [ebp-4],0x7E
	jne Block495

 Block493:
	mov eax,dword ptr [ebp-0xB4]
	xor ecx,ecx
	mov word ptr [ebp-0xBC],cx
	test eax,eax
	je Block496

 Block494:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block496

 Block495:
	lea edx,[ebp-0xBC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block496:
	mov edi,dword ptr [ebp+0x44]
	test edi,edi
	sete al
	test al,al
	je Block660

 Block497:
	mov byte ptr [ebp-4],0x7A
	test edi,edi
	je Block499

 Block498:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block499:
	mov eax,dword ptr [ebp+0x60]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],0x3A
	call eax
	mov ebx,dword ptr [ebp+0x2C]

 Block500:
	xor esi,esi
	add ebx,0xB4
	mov dword ptr [ebp+0x40],ebx
	mov bl,0x86
	jmp Block502

 Block502:
	mov dword ptr [ebp+0x44],0
	lea ecx,[ebp+0x64]
	push 0xCA6
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea edx,[ebp+0x44]
	push edx
	mov byte ptr [ebp-4],0x87
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x64]
	add esp,0xC
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block504

 Block503:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block504:
	mov edi,dword ptr [ebp+0x44]
	push ecx
	mov dword ptr [ebp+0x10],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov eax,dword ptr [ebp+0x74]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x7C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+0x10],esp
	test eax,eax
	je Block506

 Block505:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block506:
	lea ecx,[ebp-0x14]
	push ecx
	call get_labeled_string_0
	add esp,0x10
	mov ecx,dword ptr [ebp+0x40]
	lea edx,[ebp-0x14]
	push edx
	mov byte ptr [ebp-4],0x88
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block508

 Block507:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block508:
	mov byte ptr [ebp-4],0x3A
	test edi,edi
	je Block510

 Block509:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block510:
	add dword ptr [ebp+0x40],4
	inc esi
	cmp esi,2
	jl Block502

 Block511:
	mov eax,dword ptr [ebp+0x74]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x7C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp+0x64],esp
	test eax,eax
	je Block513

 Block512:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block513:
	lea ecx,[ebp-0x4C]
	push ecx
	call get_labeled_sub_0
	add esp,8
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0xFFFFFFFF
	xor ebx,ebx
	push offset _S_DIALOGUE
	mov byte ptr [ebp-4],0x89
	mov dword ptr [ecx],ebx
	call ZXString<char>::AssignWideStr
	mov edx,dword ptr [ebp-0x4C]
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp-0x4C]
	mov dword ptr [ebp+0x64],esp
	cmp eax,ebx
	je Block515

 Block514:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block515:
	lea eax,[ebp-0x2C]
	push eax
	call get_labeled_sub_1
	add esp,0xC
	mov ecx,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],0x8A
	cmp ecx,ebx
	je Block546

 Block516:
	lea edx,[ebp+0x64]
	push edx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],0x8B
	mov dword ptr [ebp+0x44],ebx
	mov dword ptr [ebp+0x10],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block518

 Block517:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block518:
	lea ecx,[ebp+0x44]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block521

 Block519:
	cmp eax,0x80004002
	je Block521

 Block520:
	push eax
	call _com_issue_error

 Block521:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x8D
	cmp eax,ebx
	je Block523

 Block522:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block523:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [ebp-4],0x8E
	mov dword ptr [ebp+0x10],ebx

 Block524:
	mov esi,dword ptr [ebp+0x44]
	cmp esi,ebx
	je Block1

 Block525:
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp+0x10]
	push edx
	lea eax,[ebp]
	push eax
	push 1
	push esi
	call ecx
	test eax,eax
	jne Block541

 Block526:
	lea edx,[ebp]
	push ebx
	push edx
	call get_int32
	add esp,8
	cmp word ptr [ebp],8
	movzx edi,ax
	mov eax,dword ptr [ebp+8]
	je Block528

 Block527:
	mov eax,offset _S___3

 Block528:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],ebx
	call ZXString16::Assign
	mov esi,dword ptr [ebp-0x14]
	push ecx
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push esi
	mov byte ptr [ebp-4],0x8F
	call _xbstr_t::_ctor_1
	push ecx
	mov ecx,dword ptr [ebp-0x2C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp-0x2C]
	mov dword ptr [ebp+0x48],esp
	cmp eax,ebx
	je Block530

 Block529:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block530:
	lea ecx,[ebp+0x24]
	push ecx
	call get_stringByKey
	add esp,0xC
	mov dword ptr [ebp-0x20],ebx
	lea edx,[ebp+0x24]
	push edx
	lea ecx,[ebp-0x20]
	mov byte ptr [ebp-4],0x91
	mov word ptr [ebp-0x24],di
	call ZXString<char>::op_assign
	mov ecx,dword ptr [ebp+0x2C]
	add ecx,0xBC
	call ZList<CNpcTemplate::QuestLine>::AddTail_
	mov cx,word ptr [ebp-0x24]
	lea edx,[ebp-0x20]
	mov word ptr [eax],cx
	push edx
	lea ecx,[eax+4]
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],0x90
	cmp eax,ebx
	je Block532

 Block531:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block532:
	mov eax,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],0x8F
	cmp eax,ebx
	je Block534

 Block533:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block534:
	mov byte ptr [ebp-4],0x8E
	cmp esi,ebx
	je Block536

 Block535:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block536:
	cmp word ptr [ebp],8
	jne Block539

 Block537:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	cmp eax,ebx
	je Block524

 Block538:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block524

 Block539:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	cmp eax,ebx
	jge Block524

 Block540:
	jmp Block4

 Block541:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x8D
	jne Block544

 Block542:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	cmp eax,ebx
	je Block545

 Block543:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block545

 Block544:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block545:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],0x8A
	call edx

 Block546:
	push 0xFFFFFFFF
	push offset _S_ETCNPCLOCATIONIM
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp+0x5C],ebx
	call ZXString16::AssignCharStr
	mov eax,0x20
	mov byte ptr [ebp-4],0x92
	call __chkstk
	mov dword ptr [ebp-0x10],esp
	mov eax,esp
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x74]
	push eax
	call __itow
	mov ecx,eax
	add esp,0xC
	lea esi,[ecx+2]
	jmp Block548

 Block548:
	mov dx,word ptr [ecx]
	add ecx,2
	cmp dx,bx
	jne Block548

 Block549:
	sub ecx,esi
	sar ecx,1
	push ecx
	push eax
	lea ecx,[ebp+0x5C]
	call ZXString16::_Cat
	mov dword ptr [ebp+0x60],ebx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x3C]
	push ecx
	mov byte ptr [ebp-4],0x94
	call esi
	lea edx,[ebp-0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block551

 Block550:
	push eax
	call _com_issue_error

 Block551:
	lea eax,[ebp+0x4C]
	push eax
	mov byte ptr [ebp-4],0x95
	call esi
	lea ecx,[ebp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block553

 Block552:
	push eax
	call _com_issue_error

 Block553:
	push 0
	push 0
	lea edx,[ebp-0x3C]
	push edx
	mov edx,dword ptr [ebp+0x5C]
	lea eax,[ebp+0x4C]
	push eax
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	mov bl,0x96
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x97
	jne Block555

 Block554:
	push 0x80004003
	call _com_issue_error

 Block555:
	lea eax,[ebp+0x30]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x98
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x60]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block558

 Block556:
	cmp eax,0x80004002
	je Block558

 Block557:
	push eax
	call _com_issue_error

 Block558:
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x30],si
	jne Block561

 Block559:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	test eax,eax
	je Block562

 Block560:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block562

 Block561:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block562:
	mov byte ptr [ebp-4],0x95
	cmp word ptr [ebp+0x4C],si
	jne Block565

 Block563:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block566

 Block564:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block566

 Block565:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block566:
	mov byte ptr [ebp-4],0x94
	cmp word ptr [ebp-0x3C],si
	jne Block569

 Block567:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block570

 Block568:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ebx,0x93
	mov dword ptr [ebp-4],ebx
	jmp Block573

 Block569:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block570:
	mov ebx,0x93
	mov dword ptr [ebp-4],ebx
	jmp Block573

 Block573:
	mov esi,dword ptr [ebp+0x60]
	test esi,esi
	je Block583

 Block574:
	xor edi,edi

 Block575:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x44]
	push edx
	push esi
	mov dword ptr [ebp+0x44],0
	call eax
	test eax,eax
	jge Block577

 Block576:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block577:
	cmp edi,dword ptr [ebp+0x44]
	jae Block584

 Block578:
	mov eax,0x20
	call __chkstk
	mov dword ptr [ebp-0x10],esp
	mov eax,esp
	push 0
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x30]
	push ecx
	mov ecx,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x9A
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x9B
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x30],8
	mov esi,eax
	mov byte ptr [ebp-4],bl
	jne Block581

 Block579:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block582

 Block580:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block582

 Block581:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block582:
	mov ecx,dword ptr [ebp+0x2C]
	add ecx,0xD0
	call ZList<long>::AddTail_
	mov dword ptr [eax],esi
	mov esi,dword ptr [ebp+0x60]
	inc edi
	jmp Block575

 Block583:
	mov ecx,dword ptr [ebp+0x2C]
	add ecx,0xD0
	call ZList<long>::AddTail_
	mov dword ptr [eax],0xFFFFFFFF

 Block584:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_MAPLETV
	call _xbstr_t::_ctor_1
	mov edi,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x9C
	test edi,edi
	jne Block586

 Block585:
	push 0x80004003
	call _com_issue_error

 Block586:
	lea ecx,[ebp+0x30]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x9D
	call get_int32
	mov edx,dword ptr [ebp+0x2C]
	add esp,8
	mov dword ptr [edx+0x4C],eax
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],bl
	jne Block589

 Block587:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block590

 Block588:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block590

 Block589:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block590:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_MAPLETVMSGX
	call _xbstr_t::_ctor_1
	lea edx,[ebp+0x30]
	mov byte ptr [ebp-4],0x9E
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x9F
	call get_int32
	mov ecx,dword ptr [ebp+0x2C]
	add esp,8
	mov dword ptr [ecx+0x50],eax
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],bl
	jne Block593

 Block591:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block594

 Block592:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block594

 Block593:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block594:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_MAPLETVMSGY
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x30]
	push ecx
	mov byte ptr [ebp-4],0xA0
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xA1
	call get_int32
	mov edx,dword ptr [ebp+0x2C]
	add esp,8
	mov dword ptr [edx+0x54],eax
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],bl
	jne Block597

 Block595:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block598

 Block596:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block598

 Block597:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block598:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_MAPLETVADX
	call _xbstr_t::_ctor_1
	lea edx,[ebp+0x30]
	mov byte ptr [ebp-4],0xA2
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xA3
	call get_int32
	mov ecx,dword ptr [ebp+0x2C]
	add esp,8
	mov dword ptr [ecx+0x58],eax
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],bl
	jne Block601

 Block599:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block602

 Block600:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block602

 Block601:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block602:
	push 0
	push ecx
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push offset _S_MAPLETVADY
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x30]
	push ecx
	mov byte ptr [ebp-4],0xA4
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xA5
	call get_int32
	mov edx,dword ptr [ebp+0x2C]
	add esp,8
	mov dword ptr [edx+0x5C],eax
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],bl
	jne Block605

 Block603:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block606

 Block604:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block606

 Block605:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block606:
	mov edi,dword ptr [ebp+0x74]
	push 0
	lea edx,[ebp+0x64]
	push edx
	mov ecx,offset CNpcTemplate::ms_mNpcTemplate
	mov dword ptr [ebp+0x64],edi
	call ZMap<long, ZRef<CNpcTemplate>, long>::GetAt
	test eax,eax
	je Block630

 Block607:
	mov byte ptr [ebp-4],0x92
	test esi,esi
	je Block609

 Block608:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block609:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x8A
	test eax,eax
	je Block611

 Block610:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block611:
	mov eax,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],0x89
	test eax,eax
	je Block613

 Block612:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block613:
	mov eax,dword ptr [ebp-0x4C]
	mov byte ptr [ebp-4],0x3A
	test eax,eax
	je Block615

 Block614:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block615:
	mov esi,8
	mov byte ptr [ebp-4],0x39
	cmp word ptr [ebp-0x60],si
	jne Block618

 Block616:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	test eax,eax
	je Block619

 Block617:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block619

 Block618:
	lea ecx,[ebp-0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block619:
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0x28
	test eax,eax
	je Block621

 Block620:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block621:
	mov eax,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block623

 Block622:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block623:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x74],si
	jne Block626

 Block624:
	xor eax,eax
	mov word ptr [ebp-0x74],ax
	mov eax,dword ptr [ebp-0x6C]
	test eax,eax
	je Block627

 Block625:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block627

 Block626:
	lea ecx,[ebp-0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block627:
	mov edi,dword ptr [ebp+0x2C]
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	mov byte ptr [ebp-4],6
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block47

 Block628:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block47

 Block629:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax
	jmp Block47

 Block630:
	lea eax,[ebp+0x28]
	push eax
	lea ecx,[ebp+0x64]
	push ecx
	mov ecx,offset CNpcTemplate::ms_mNpcTemplate
	mov dword ptr [ebp+0x64],edi
	call ZMap<long, ZRef<CNpcTemplate>, long>::Insert
	mov byte ptr [ebp-4],0x92
	test esi,esi
	je Block632

 Block631:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block632:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x8A
	test eax,eax
	je Block634

 Block633:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block634:
	mov eax,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],0x89
	test eax,eax
	je Block636

 Block635:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block636:
	mov eax,dword ptr [ebp-0x4C]
	mov byte ptr [ebp-4],0x3A
	test eax,eax
	je Block638

 Block637:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block638:
	mov esi,8
	mov byte ptr [ebp-4],0x39
	cmp word ptr [ebp-0x60],si
	jne Block641

 Block639:
	xor eax,eax
	mov word ptr [ebp-0x60],ax
	mov eax,dword ptr [ebp-0x58]
	test eax,eax
	je Block642

 Block640:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block642

 Block641:
	lea ecx,[ebp-0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block642:
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0x28
	test eax,eax
	je Block644

 Block643:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block644:
	mov eax,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block646

 Block645:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block646:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x74],si
	jne Block649

 Block647:
	xor eax,eax
	mov word ptr [ebp-0x74],ax
	mov eax,dword ptr [ebp-0x6C]
	test eax,eax
	je Block650

 Block648:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block650

 Block649:
	lea ecx,[ebp-0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block650:
	mov edi,dword ptr [ebp+0x2C]
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	mov byte ptr [ebp-4],6
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block653

 Block651:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block653

 Block652:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block653:
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],5
	test eax,eax
	je Block655

 Block654:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block655:
	mov eax,dword ptr [ebp+0x20]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],1
	call edx
	mov eax,dword ptr [ebp+0x78]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block657

 Block656:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block657:
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block659

 Block658:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block659:
	mov eax,1
	jmp Block54

 Block660:
	mov dword ptr [ebp-0x28],0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x10],esp
	push 0xEE1
	push eax
	mov byte ptr [ebp-4],0x7F
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x80
	test edi,edi
	jne Block662

 Block661:
	push 0x80004003
	call _com_issue_error

 Block662:
	lea ecx,[ebp-0xAC]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0x7F
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x81
	jne Block664

 Block663:
	mov eax,dword ptr [eax+8]
	jmp Block665

 Block664:
	mov eax,offset _S___3

 Block665:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp-0x28]
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0xAC],8
	mov byte ptr [ebp-4],0x7F
	jne Block668

 Block666:
	mov eax,dword ptr [ebp-0xA4]
	xor edx,edx
	mov word ptr [ebp-0xAC],dx
	test eax,eax
	je Block669

 Block667:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block669

 Block668:
	lea eax,[ebp-0xAC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block669:
	mov eax,dword ptr [ebp-0x28]
	test eax,eax
	je Block671

 Block670:
	cmp byte ptr [eax],0
	jne Block674

 Block671:
	mov byte ptr [ebp-4],0x7E
	test eax,eax
	je Block673

 Block672:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block673:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],0x7A
	call edx
	mov edi,dword ptr [ebp+0x60]
	jmp Block487

 Block674:
	push 0x121EB25
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x10],esp
	push 0x1ADB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp-0x9C]
	push ecx
	mov byte ptr [ebp-4],0x82
	mov ecx,edi
	mov byte ptr [ebp-4],0x7F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x83
	call get_int32
	mov ebx,8
	add esp,8
	mov dword ptr [ebp-0x24],eax
	mov byte ptr [ebp-4],0x7F
	cmp word ptr [ebp-0x9C],bx
	jne Block677

 Block675:
	mov eax,dword ptr [ebp-0x94]
	xor edx,edx
	mov word ptr [ebp-0x9C],dx
	test eax,eax
	je Block678

 Block676:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block678

 Block677:
	lea eax,[ebp-0x9C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block678:
	push 0x13D3B55
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x10],esp
	push 0x7A1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x8C]
	mov byte ptr [ebp-4],0x84
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x7F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x85
	call get_int32
	add esp,8
	mov dword ptr [ebp-0x20],eax
	mov byte ptr [ebp-4],0x7F
	cmp word ptr [ebp-0x8C],bx
	jne Block681

 Block679:
	xor eax,eax
	mov word ptr [ebp-0x8C],ax
	mov eax,dword ptr [ebp-0x84]
	test eax,eax
	je Block682

 Block680:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block682

 Block681:
	lea ecx,[ebp-0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block682:
	mov ecx,dword ptr [ebp+0x2C]
	add ecx,0x9C
	call ZList<SCRIPTINFO>::AddTail_
	mov ebx,eax
	lea edx,[ebp-0x28]
	push edx
	mov ecx,ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x24]
	cmp eax,esi
	mov ecx,dword ptr [ebp-0x20]
	mov dword ptr [ebx+4],eax
	mov dword ptr [ebx+8],ecx
	jg Block685

 Block683:
	cmp esi,ecx
	jg Block685

 Block684:
	mov ecx,dword ptr [ebp+0x2C]
	lea edx,[ebp-0x28]
	push edx
	add ecx,0xB0
	call ZXString<char>::op_assign

 Block685:
	mov eax,dword ptr [ebp-0x28]
	add eax,0xFFFFFFF4
	push eax
	mov byte ptr [ebp-4],0x7E
	call ZXString<char>::_Release
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	add esp,4
	push edi
	mov byte ptr [ebp-4],0x7A
	call edx
	mov ebx,dword ptr [ebp+0x64]
	mov edi,dword ptr [ebp+0x60]
	jmp Block487
}
}
// CNpcTemplate::UpdateScript
_SUB_EXCEPTION_HANDLER(27B400)
__SUB_CLASS_THIS(0027B400, __thiscall, 50573,  CNpcTemplate, void, NakedParam<_SYSTEMTIME>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_27B400
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
	mov edi,ecx
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x38]
	mov esi,eax
	movzx eax,ax
	imul eax,0x64
	shr esi,0x10
	add esi,eax
	imul esi,0x64
	shr ecx,0x10
	add esi,ecx
	lea ebp,[edi+0xB0]
	push offset _S_
	mov ecx,ebp
	call ZXString<char>::AssignCStr
	mov edi,dword ptr [edi+0xAC]
	xor ebx,ebx
	mov dword ptr [esp+0x14],edi
	cmp edi,ebx
	je Block10

 Block1:
	lea esp,[esp]

 Block2:
	lea edx,[esp+0x14]
	push edx
	call ZList<SCRIPTINFO>::GetPrev
	add esp,4
	mov edi,eax
	push edi
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [edi+4]
	mov edi,dword ptr [edi+8]
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x20],edi
	cmp eax,esi
	mov dword ptr [esp+0x2C],ebx
	jg Block4

 Block3:
	cmp esi,edi
	jle Block8

 Block4:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	cmp dword ptr [esp+0x14],ebx
	jne Block2

 Block7:
	jmp Block10

 Block8:
	lea eax,[esp+0x18]
	push eax
	mov ecx,ebp
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 0x10
}
}
// CNpcTemplate::ACT::~ACT
_SUB_EXCEPTION_HANDLER(27B5D0)
__SUB_CLASS_THIS0(0027B5D0, __thiscall, 50679,  CNpcTemplate::ACT, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_27B5D0
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
	lea ecx,[esi+0x10]
	mov dword ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CNpcTemplate::SPEAK_CONDITION>::`vftable'
	call ZList<CNpcTemplate::SPEAK_CONDITION>::RemoveAll
	lea ecx,[esi+4]
	mov byte ptr [esp+0x14],0
	call ZArray<Ztl_bstr_t>::RemoveAll
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block2

 Block1:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block2:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CNpcTemplate::OnSetNpcScript
_SUB_EXCEPTION_HANDLER(27F700)
__SUB(0027F700, __cdecl, 50572,  void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_27F700
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x18],0
	mov ebx,dword ptr [esp+0x44]
	mov ecx,ebx
	mov dword ptr [esp+0x3C],0
	call CInPacket::Decode1
	movzx eax,al
	test eax,eax
	jle Block9

 Block1:
	mov dword ptr [esp+0x10],eax

 Block2:
	push ebx
	lea ecx,[esp+0x18]
	call MODSCRIPT::Decode
	mov eax,dword ptr [esp+0x14]
	push eax
	call CNpcTemplate::GetNpcTemplate
	mov edi,eax
	add esp,4
	test edi,edi
	je Block8

 Block3:
	lea ecx,[edi+0x9C]
	call ZList<SCRIPTINFO>::AddTail_
	lea ecx,[esp+0x18]
	mov esi,eax
	push ecx
	mov ecx,esi
	call ZXString<char>::op_assign
	mov edx,dword ptr [esp+0x1C]
	mov dword ptr [esi+4],edx
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esi+8],eax
	mov esi,dword ptr [_D_G_PSTAGE+4]
	test esi,esi
	je Block6

 Block4:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block6

 Block5:
	mov ecx,esi
	jmp Block7

 Block6:
	xor ecx,ecx

 Block7:
	lea edx,[esp+0x24]
	push edx
	call CField::GetCorrectTime
	mov edx,dword ptr [eax]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],edx
	mov edx,dword ptr [eax+4]
	mov dword ptr [ecx+4],edx
	mov edx,dword ptr [eax+8]
	mov eax,dword ptr [eax+0xC]
	mov dword ptr [ecx+8],edx
	mov dword ptr [ecx+0xC],eax
	mov ecx,edi
	call CNpcTemplate::UpdateScript

 Block8:
	sub dword ptr [esp+0x10],1
	jne Block2

 Block9:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x30
	ret
}
}
// MODSCRIPT::~MODSCRIPT
__SUB_CLASS_THIS0(0027AB00, __thiscall, 129177,  MODSCRIPT, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+4]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	pop ecx

 Block2:
	ret
}
}
// MODSCRIPT::Decode
__SUB_CLASS_THIS(000F96F0, __thiscall, 129170,  MODSCRIPT, void, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode4
	push edi
	lea ecx,[esi+4]
	mov dword ptr [esi],eax
	call SCRIPTINFO::Decode
	pop edi
	pop esi
	ret 4
}
}
// CNpcTemplate::CalcClientActionSetIdx
__SUB_CLASS_THIS(0027AB20, __thiscall, 50565,  CNpcTemplate, long, int32_t) {
__asm {

 Block0:
	sub esp,0x14
	push ebx
	push ebp
	mov dword ptr [esp+0x14],ecx
	mov ecx,dword ptr [ecx+0x8C]
	push esi
	push edi
	mov dword ptr [esp+0x10],0
	mov dword ptr [esp+0x14],ecx
	test ecx,ecx
	je Block28

 Block1:
	mov al,byte ptr [ecx+0x20]
	xor ebx,ebx
	mov ebp,1
	test al,al
	je Block3

 Block2:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	movzx eax,al
	dec eax
	cmp eax,dword ptr [edx+0x2034]
	jne Block5

 Block3:
	cmp dword ptr [esp+0x28],0
	jne Block7

 Block4:
	cmp dword ptr [ecx+0xC],0
	je Block27

 Block5:
	lea eax,[esp+0x14]
	push eax
	call ZList<CNpcTemplate::CLIENT_ACTION_SET>::GetNext
	add esp,4
	cmp dword ptr [esp+0x14],0
	je Block28

 Block6:
	mov ecx,dword ptr [esp+0x14]
	jmp Block1

 Block7:
	mov esi,dword ptr [ecx+0x10]
	mov dword ptr [esp+0x18],esi
	test esi,esi
	je Block27

 Block8:
	movzx eax,word ptr [esi]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetQuestState
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	jl Block15

 Block9:
	mov ebx,1
	cmp ecx,3
	je Block11

 Block10:
	xor edx,edx
	cmp eax,ecx
	sete dl
	mov ebp,edx
	jmp Block15

 Block11:
	cmp eax,1
	je Block14

 Block12:
	cmp eax,2
	je Block14

 Block13:
	xor ebp,ebp
	jmp Block15

 Block14:
	mov ebp,ebx

 Block15:
	mov eax,dword ptr [esi+8]
	lea edi,[esi+8]
	test eax,eax
	je Block23

 Block16:
	cmp byte ptr [eax],0
	je Block23

 Block17:
	mov ebx,1
	test ebp,ebp
	je Block19

 Block18:
	movzx eax,word ptr [esi]
	push eax
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetQuestRecordValue
	mov ebp,ebx
	or dword ptr [esp+0x10],ebp
	push eax
	mov ecx,edi
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block20

 Block19:
	xor ebp,ebp

 Block20:
	test byte ptr [esp+0x10],bl
	je Block23

 Block21:
	mov eax,dword ptr [esp+0x20]
	and dword ptr [esp+0x10],0xFFFFFFFE
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	test ebp,ebp
	je Block5

 Block24:
	test ebx,ebx
	je Block26

 Block25:
	lea edx,[esp+0x18]
	push edx
	call ZList<CNpcTemplate::QUEST_CONDITION>::GetNext
	mov esi,dword ptr [esp+0x1C]
	add esp,4
	test esi,esi
	jne Block8

 Block26:
	mov ecx,dword ptr [esp+0x14]

 Block27:
	push ecx
	mov ecx,dword ptr [esp+0x20]
	sub ecx,0xFFFFFF80
	call ZList<CNpcTemplate::CLIENT_ACTION_SET>::IndexOf
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 4

 Block28:
	pop edi
	pop esi
	pop ebp
	or eax,0xFFFFFFFF
	pop ebx
	add esp,0x14
	ret 4
}
}
// CNpcTemplate::Unload
__SUB0(0027A4C0, __cdecl, 50570,  void) {
__asm {

 Block0:
	mov ecx,offset CNpcTemplate::ms_mNpcTemplate
	jmp  ZMap<long, ZRef<CNpcTemplate>, long>::RemoveAll
}
}
// CNpcTemplate::GetNpcTemplate
_SUB_EXCEPTION_HANDLER(27F1C0)
__SUB(0027F1C0, __cdecl, 50571,  CNpcTemplate*, unsigned long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_27F1C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x88
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	xor esi,esi
	mov dword ptr [ebp-0x28],esi
	mov edi,dword ptr [ebp+8]
	lea eax,[ebp-0x2C]
	push eax
	lea ecx,[ebp-0x1C]
	push ecx
	mov ecx,offset CNpcTemplate::ms_mNpcTemplate
	mov dword ptr [ebp-4],esi
	mov dword ptr [ebp-0x1C],edi
	call ZMap<long, ZRef<CNpcTemplate>, long>::GetAt
	cmp edi,esi
	je Block60

 Block1:
	cmp dword ptr [ebp-0x28],esi
	jne Block60

 Block2:
	mov dword ptr [ebp-0x14],esi
	lea edx,[ebp-0x1C]
	push 0x3CF
	push edx
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea eax,[ebp-0x14]
	push eax
	mov byte ptr [ebp-4],2
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x1C]
	add esp,0xC
	mov byte ptr [ebp-4],1
	cmp eax,esi
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x4C]
	push ecx
	mov byte ptr [ebp-4],3
	call edi
	lea edx,[ebp-0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea eax,[ebp-0x3C]
	push eax
	mov byte ptr [ebp-4],4
	call edi
	lea ecx,[ebp-0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	push esi
	push esi
	lea edx,[ebp-0x4C]
	push edx
	lea eax,[ebp-0x3C]
	mov bl,5
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x20],esp
	push 0x6AC
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],6
	cmp dword ptr [_D_G_RM],esi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea edx,[ebp-0x7C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block13

 Block11:
	cmp eax,0x80004002
	je Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	cmp word ptr [ebp-0x7C],8
	mov byte ptr [ebp-4],9
	jne Block20

 Block14:
	xor eax,eax
	mov word ptr [ebp-0x7C],ax
	mov eax,dword ptr [ebp-0x74]
	cmp eax,esi
	je Block16

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block16:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block17:
	mov ebx,8
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x3C],bx
	jne Block21

 Block18:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block22

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block20:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x7C]
	push ecx
	call esi
	jmp Block17

 Block21:
	lea eax,[ebp-0x3C]
	push eax
	call esi

 Block22:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x4C],bx
	jne Block25

 Block23:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[ebp-0x4C]
	push edx
	call esi

 Block26:
	lea eax,[ebp-0x6C]
	push eax
	call edi
	lea ecx,[ebp-0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	lea edx,[ebp-0x5C]
	push edx
	mov byte ptr [ebp-4],0xC
	call edi
	lea eax,[ebp-0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov eax,dword ptr [ebp-0x14]
	push 0
	push 0
	lea ecx,[ebp-0x6C]
	push ecx
	lea edx,[ebp-0x5C]
	push edx
	push ecx
	mov dword ptr [ebp-0x20],esp
	mov ecx,esp
	mov bl,0xD
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xE
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea ecx,[ebp-0x8C]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x1C]
	mov dword ptr [ebp-0x1C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block35

 Block33:
	cmp eax,0x80004002
	je Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	mov edi,8
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x8C],di
	jne Block38

 Block36:
	mov eax,dword ptr [ebp-0x84]
	xor edx,edx
	mov word ptr [ebp-0x8C],dx
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea eax,[ebp-0x8C]
	push eax
	call esi

 Block39:
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp-0x5C],di
	jne Block42

 Block40:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea edx,[ebp-0x5C]
	push edx
	call esi

 Block43:
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp-0x6C],di
	jne Block46

 Block44:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea ecx,[ebp-0x6C]
	push ecx
	call esi

 Block47:
	mov edi,dword ptr [ebp-0x18]
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x20],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block49

 Block48:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block49:
	mov esi,dword ptr [ebp-0x1C]
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x20],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block51

 Block50:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block51:
	mov ebx,dword ptr [ebp+8]
	push ebx
	call CNpcTemplate::RegisterNpc
	add esp,0xC
	test eax,eax
	jne Block53

 Block52:
	push 0x22000006
	lea ecx,[ebp-0x20]
	call CMSException::_ctor_0
	mov eax,dword ptr [ebp-0x20]
	push offset CTerminateException::THROW_INFO
	lea ecx,[ebp-0x24]
	push ecx
	mov dword ptr [ebp-0x24],eax
	call _CxxThrowException

 Block53:
	lea edx,[ebp-0x2C]
	push edx
	lea eax,[ebp-0x20]
	push eax
	mov ecx,offset CNpcTemplate::ms_mNpcTemplate
	mov dword ptr [ebp-0x20],ebx
	call ZMap<long, ZRef<CNpcTemplate>, long>::GetAt
	mov byte ptr [ebp-4],0xB
	test esi,esi
	je Block55

 Block54:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block55:
	mov byte ptr [ebp-4],3
	test edi,edi
	je Block57

 Block56:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block57:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],0
	test eax,eax
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block59:
	xor esi,esi

 Block60:
	mov ebx,dword ptr [ebp-0x28]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp ebx,esi
	je Block64

 Block61:
	lea esi,[ebx-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block64

 Block62:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block64

 Block63:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block64:
	mov eax,ebx
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CNpcTemplate::LoadSpeakCondition
_SUB_EXCEPTION_HANDLER(27B030)
__SUB(0027B030, __cdecl, 50577,  void, NakedParam<_x_com_ptr<IWzProperty>>, ZList<CNpcTemplate::SPEAK_CONDITION>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_27B030
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x58]
	mov dword ptr fs:[0],eax
	xor ebp,ebp
	mov dword ptr [esp+0x60],ebp
	mov dword ptr [esp+0x1C],1
	mov bl,4

 Block1:
	mov dword ptr [esp+0x20],ebp
	mov eax,dword ptr [esp+0x1C]
	push eax
	lea ecx,[esp+0x24]
	push offset _S_CONDITIOND
	push ecx
	mov byte ptr [esp+0x6C],1
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebp
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x60],3
	cmp eax,ebp
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x1C]
	mov dword ptr [esp+0x28],esp
	push edx
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	push ecx
	mov ecx,dword ptr [esp+0x70]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x70]
	mov dword ptr [esp+0x2C],esp
	cmp eax,ebp
	je Block5

 Block4:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block5:
	lea ecx,[esp+0x1C]
	push ecx
	call get_labeled_sub_1
	add esp,0xC
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebp
	sete al
	mov byte ptr [esp+0x60],bl
	test al,al
	jne Block30

 Block6:
	mov ecx,dword ptr [esp+0x6C]
	call ZList<CNpcTemplate::SPEAK_CONDITION>::AddTail_
	mov esi,eax
	mov edi,dword ptr [esi]
	mov eax,dword ptr [esp+0x14]
	cmp edi,eax
	je Block11

 Block7:
	mov dword ptr [esi],eax
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	je Block9

 Block8:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block9:
	cmp edi,ebp
	je Block11

 Block10:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block11:
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0xCAA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x68],5
	cmp ecx,ebp
	je Block37

 Block12:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x6C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x68],6
	call get_int32
	mov edi,8
	add esp,8
	mov dword ptr [esi+8],eax
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x28],di
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	push 0xFFFFFFFF
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push offset _S_JOBCATEGORY
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x68],7
	cmp ecx,ebp
	je Block37

 Block17:
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x6C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x68],8
	call get_int32
	add esp,8
	mov dword ptr [esi+4],eax
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x38],di
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	push ebp
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1A60
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x68],9
	cmp ecx,ebp
	je Block37

 Block22:
	lea eax,[esp+0x50]
	push eax
	mov byte ptr [esp+0x6C],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x68],0xA
	call get_int32
	add esp,8
	mov word ptr [esi+0xC],ax
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x48],di
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	cmp eax,ebp
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov eax,dword ptr [esp+0x14]
	inc dword ptr [esp+0x1C]
	mov byte ptr [esp+0x60],3
	cmp eax,ebp
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block28:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x60],0
	cmp eax,ebp
	je Block1

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block1

 Block30:
	mov byte ptr [esp+0x60],3
	cmp ecx,ebp
	je Block32

 Block31:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx

 Block32:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x60],0
	cmp eax,ebp
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp eax,ebp
	je Block36

 Block35:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block36:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret

 Block37:
	push 0x80004003
	call _com_issue_error
}
}
// CNpcTemplate::QuestLine::~QuestLine
__SUB_CLASS_THIS0(0027AAE0, __thiscall, 50754,  CNpcTemplate::QuestLine, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+4]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	pop ecx

 Block2:
	ret
}
}
// CNpcTemplate::CLIENT_ACTION_SET::~CLIENT_ACTION_SET
_SUB_EXCEPTION_HANDLER(27BB90)
__SUB_CLASS_THIS0(0027BB90, __thiscall, 50768,  CNpcTemplate::CLIENT_ACTION_SET, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_27BB90
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
	lea ecx,[esi+0x18]
	mov dword ptr [esp+0x14],1
	call ZArray<CNpcTemplate::ACT>::RemoveAll
	lea ecx,[esi+4]
	mov byte ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CNpcTemplate::QUEST_CONDITION>::`vftable'
	call ZList<CNpcTemplate::QUEST_CONDITION>::RemoveAll
	mov esi,dword ptr [esi]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block2

 Block1:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block2:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CNpcTemplate::ACT::GetChatMessageList
__SUB_CLASS_THIS(00278020, __thiscall, 50672,  CNpcTemplate::ACT, ZArray<Ztl_bstr_t>, const CharacterData&, long&, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0x14]
	push esi
	mov esi,dword ptr [esp+0xC]
	push eax
	mov eax,dword ptr [esp+0x18]
	lea edx,[ecx+0x10]
	push edx
	add ecx,4
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	push eax
	push ecx
	push esi
	mov dword ptr [esp+0x1C],0
	call CNpcTemplate::GetChatMessageList_1
	add esp,0x18
	mov eax,esi
	pop esi
	pop ecx
	ret 0x10
}
}
// CNpcTemplate::SPEAK_CONDITION::CheckCondition
__SUB_CLASS_THIS(00279EF0, __thiscall, 50592,  CNpcTemplate::SPEAK_CONDITION, int32_t, long, const CharacterData&) {
__asm {

 Block0:
	cmp dword ptr [ecx],0
	jne Block2

 Block1:
	xor eax,eax
	ret 8

 Block2:
	push esi
	mov esi,dword ptr [ecx+4]
	push edi
	mov edi,dword ptr [esp+0xC]
	cmp esi,0xFFFFFFFF
	je Block4

 Block3:
	mov eax,0x51EB851F
	imul edi
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp esi,eax
	jne Block8

 Block4:
	mov eax,dword ptr [ecx+8]
	cmp eax,0xFFFFFFFF
	je Block6

 Block5:
	cmp eax,edi
	jne Block8

 Block6:
	movzx eax,word ptr [ecx+0xC]
	test ax,ax
	je Block9

 Block7:
	movzx ecx,ax
	mov dword ptr [esp+0xC],ecx
	mov ecx,dword ptr [esp+0x10]
	lea edx,[esp+0xC]
	push edx
	add ecx,0x6F5
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetPos
	test eax,eax
	jne Block9

 Block8:
	pop edi
	xor eax,eax
	pop esi
	ret 8

 Block9:
	pop edi
	mov eax,1
	pop esi
	ret 8
}
}
// CNpcTemplate::Load
_SUB_EXCEPTION_HANDLER(27F190)
__SUB0(0027F190, __cdecl, 50570,  void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_27F190
	mov eax,dword ptr fs:[0]
	push eax
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+4]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret
}
}
// CNpcTemplate::GetChatMessageList
_SUB_EXCEPTION_HANDLER(27B670)
__SUB(0027B670, __cdecl, 50554,  ZArray<Ztl_bstr_t>, const CharacterData&, long&, ZArray<Ztl_bstr_t>&, ZList<CNpcTemplate::SPEAK_CONDITION>&, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_27B670
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
	mov eax,dword ptr [ebp+0x18]
	mov eax,dword ptr [eax+0xC]
	mov dword ptr [ebp-0x28],0
	mov dword ptr [ebp-0x14],eax
	test eax,eax
	je Block4

 Block1:
	mov esi,dword ptr [ebp+0xC]
	lea edi,[esi+0x39]

 Block2:
	lea ecx,[ebp-0x14]
	push ecx
	call ZList<CNpcTemplate::SPEAK_CONDITION>::GetNext
	mov edx,dword ptr [esi+0x3D]
	push edx
	mov ebx,eax
	push edi
	mov dword ptr [ebp-0x28],ebx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	add esp,0xC
	cwde
	push esi
	push eax
	mov ecx,ebx
	call CNpcTemplate::SPEAK_CONDITION::CheckCondition
	test eax,eax
	jne Block6

 Block3:
	cmp dword ptr [ebp-0x14],eax
	jne Block2

 Block4:
	mov ecx,dword ptr [ebp+0x14]
	mov esi,dword ptr [ebp+8]
	push ecx
	mov ecx,esi
	mov dword ptr [esi],0
	call ZArray<Ztl_bstr_t>::operator=

 Block5:
	mov eax,esi
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
	ret

 Block6:
	mov esi,dword ptr [ebx]
	xor edi,edi
	cmp esi,edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp-0x14]
	push edx
	push esi
	mov dword ptr [ebp-0x14],edi
	call eax
	cmp eax,edi
	jge Block10

 Block9:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov dword ptr [ebp-0x18],edi
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x5C]
	push ecx
	mov dword ptr [ebp-4],edi
	call esi
	lea edx,[ebp-0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	lea eax,[ebp-0x4C]
	push eax
	mov byte ptr [ebp-4],1
	call esi
	lea ecx,[ebp-0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	push 0
	push 0
	lea edx,[ebp-0x5C]
	push edx
	lea eax,[ebp-0x4C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x24],esp
	push 0x6AC
	mov bl,2
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],3
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea edx,[ebp-0x6C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x1C]
	mov dword ptr [ebp-0x1C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block19

 Block17:
	cmp eax,0x80004002
	je Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	mov esi,8
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x6C],si
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x4C],si
	jne Block26

 Block24:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x5C],si
	jne Block30

 Block28:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[ebp-0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	xor ebx,ebx
	cmp dword ptr [ebp-0x14],ebx
	jle Block62

 Block32:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x2C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov eax,dword ptr [ebp-0x28]
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],9
	test ecx,ecx
	je Block7

 Block33:
	lea edx,[ebp-0x3C]
	push edx
	mov byte ptr [ebp-4],8
	call IWzProperty::Getitem
	push ecx
	lea eax,[ebp-0x3C]
	mov dword ptr [ebp-0x2C],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0xA
	call _xbstr_t::_ctor_3
	mov ecx,dword ptr [ebp+0x1C]
	mov edi,dword ptr [ebp-0x1C]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x2C],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block35

 Block34:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block35:
	lea ecx,[ebp-0x24]
	push ecx
	call get_labeled_string_0
	add esp,0x10
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block52

 Block36:
	cmp byte ptr [eax],0
	je Block52

 Block37:
	push eax
	lea ecx,[ebp-0x20]
	call _xbstr_t::_ctor_0
	push 0xFFFFFFFF
	lea ecx,[ebp-0x18]
	mov byte ptr [ebp-4],0xC
	call ZArray<Ztl_bstr_t>::InsertBefore
	mov edi,dword ptr [ebp-0x20]
	mov esi,eax
	lea edx,[ebp-0x20]
	cmp esi,edx
	je Block42

 Block38:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block40

 Block39:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block40:
	mov dword ptr [esi],edi
	test edi,edi
	je Block44

 Block41:
	lea eax,[edi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block42:
	test edi,edi
	je Block44

 Block43:
	mov ecx,edi
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp-0x20],0

 Block44:
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],8
	jne Block49

 Block47:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea edx,[ebp-0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	inc ebx
	cmp ebx,dword ptr [ebp-0x14]
	jge Block58

 Block51:
	mov esi,8
	jmp Block32

 Block52:
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block54

 Block53:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block54:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x3C],si
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block59

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block57:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block59

 Block58:
	mov edi,dword ptr [ebp-0x1C]

 Block59:
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block63

 Block60:
	mov esi,dword ptr [eax-4]
	test esi,esi
	je Block63

 Block61:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	div esi
	jmp Block64

 Block62:
	mov edi,dword ptr [ebp-0x1C]

 Block63:
	xor edx,edx

 Block64:
	mov eax,dword ptr [ebp+0x10]
	mov esi,dword ptr [ebp+8]
	lea ecx,[ebp-0x18]
	push ecx
	mov dword ptr [eax],edx
	mov ecx,esi
	mov dword ptr [esi],0
	call ZArray<Ztl_bstr_t>::operator=
	mov byte ptr [ebp-4],0
	test edi,edi
	je Block66

 Block65:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block66:
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZArray<Ztl_bstr_t>::RemoveAll
	jmp Block5
}
}
