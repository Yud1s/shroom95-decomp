#include "regen.hpp"
// ActionFrame.ipp
#include "ActionFrame.hpp"

// get_rm
__SUB0(00001D80, __cdecl, 146690,  _x_com_ptr<IWzResMan>&) {
__asm {

 Block0:
	mov eax,offset _D_G_RM
	ret
}
}
// CActionFrame::FindGroup
__SUB_CLASS_THIS(00002D10, __thiscall, 20658,  CActionFrame, __POSITION*, ZList<CActionFrame::MAPINFO>*) {
__asm {

 Block0:
	sub esp,0xC
	push ebx
	mov ebx,dword ptr [ecx+0x48]
	push ebp
	push esi
	push edi
	mov dword ptr [esp+0x14],ebx
	test ebx,ebx
	je Block20

 Block1:
	mov ebp,dword ptr [esp+0x20]
	lea ebx,[ebx]

 Block2:
	mov eax,dword ptr [ebx+4]
	cmp eax,ebp
	je Block19

 Block3:
	mov eax,dword ptr [eax+0xC]
	mov dword ptr [esp+0x10],eax
	test eax,eax
	je Block19

 Block4:
	mov edi,dword ptr [ebp+0xC]

 Block5:
	lea eax,[esp+0x10]
	push eax
	call ZList<CActionFrame::MAPINFO>::GetNext
	mov ecx,edi
	add esp,4
	mov dword ptr [esp+0x20],ecx
	test ecx,ecx
	je Block18

 Block6:
	mov esi,dword ptr [eax]
	mov edi,edi

 Block7:
	lea ecx,[esp+0x20]
	push ecx
	call ZList<CActionFrame::MAPINFO>::GetNext
	mov ecx,dword ptr [eax]
	add esp,4
	cmp ecx,esi
	je Block21

 Block8:
	test ecx,ecx
	jne Block12

 Block9:
	test esi,esi
	je Block21

 Block10:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block21

 Block11:
	mov edx,dword ptr [eax-4]
	shr edx,1
	jmp Block16

 Block12:
	test esi,esi
	jne Block15

 Block13:
	mov ecx,dword ptr [ecx]
	test ecx,ecx
	je Block21

 Block14:
	mov eax,dword ptr [ecx-4]
	shr eax,1
	jmp Block16

 Block15:
	push esi
	call _xbstr_t::Data_t::Compare
	test eax,eax

 Block16:
	je Block21

 Block17:
	cmp dword ptr [esp+0x20],0
	jne Block7

 Block18:
	cmp dword ptr [esp+0x10],0
	jne Block5

 Block19:
	lea ecx,[esp+0x14]
	push ecx
	call ZList<ZRef<ZList<CActionFrame::MAPINFO>>>::GetNext
	mov ebx,dword ptr [esp+0x18]
	add esp,4
	test ebx,ebx
	jne Block2

 Block20:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0xC
	ret 4

 Block21:
	pop edi
	pop esi
	pop ebp
	mov eax,ebx
	pop ebx
	add esp,0xC
	ret 4
}
}
// operatornew_146691
__SUB(000023F0, __cdecl, 146691,  void*, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	ret
}
}
// CActionFrame::UnlinkMappers
_SUB_EXCEPTION_HANDLER(4DA0)
__SUB0(00004DA0, __cdecl, 20648,  void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4DA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x60
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
	mov dword ptr [ebp-4],esi
	mov dword ptr [ebp-0x18],esi
	mov dword ptr [ebp-0x28],esi
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x5C]
	push eax
	mov byte ptr [ebp-4],2
	call edi
	lea ecx,[ebp-0x5C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x4C]
	push edx
	mov byte ptr [ebp-4],3
	call edi
	lea eax,[ebp-0x4C]
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
	lea ecx,[ebp-0x5C]
	push ecx
	lea edx,[ebp-0x4C]
	push edx
	push ecx
	mov ecx,dword ptr [_D_S_SZMAPIMG]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [_D_S_SZMAPIMG]
	mov dword ptr [ebp-0x24],esp
	cmp eax,esi
	je Block6

 Block5:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov byte ptr [ebp-4],5
	cmp dword ptr [_D_G_RM],esi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[ebp-0x6C]
	mov bl,4
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x6C],di
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	cmp eax,esi
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x4C],di
	jne Block18

 Block16:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	cmp eax,esi
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x5C],di
	jne Block22

 Block20:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	cmp eax,esi
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[ebp-0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov edi,dword ptr [ebp-0x18]
	cmp edi,esi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea eax,[ebp-0x1C]
	push eax
	mov ecx,edi
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [ebp-4],7
	mov dword ptr [ebp-0x14],esi
	mov dword ptr [ebp-0x24],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block27:
	lea ecx,[ebp-0x14]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,esi
	jge Block30

 Block28:
	cmp eax,0x80004002
	je Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],9
	cmp eax,esi
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block32:
	lea eax,[ebp-0x3C]
	push eax
	xor esi,esi
	call dword ptr [ZImports::_VariantInit]
	mov ebx,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0xA
	mov dword ptr [ebp-0x20],esi

 Block33:
	test ebx,ebx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	mov ecx,dword ptr [ebx]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[ebp-0x20]
	push edx
	lea eax,[ebp-0x3C]
	push eax
	push 1
	push ebx
	call ecx
	test eax,eax
	jne Block60

 Block36:
	mov edx,dword ptr [ebp-0x34]
	push ecx
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	push edx
	call _xbstr_t::_ctor_1
	lea eax,[ebp-0x4C]
	mov byte ptr [ebp-4],0xB
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	mov ax,word ptr [ebp-0x4C]
	mov byte ptr [ebp-4],0xC
	test ax,ax
	je Block41

 Block37:
	cmp ax,8
	jne Block39

 Block38:
	mov ecx,dword ptr [ebp-0x44]
	cmp word ptr [ecx],0
	je Block41

 Block39:
	push 3
	lea edx,[ebp-0x4C]
	push 0
	push edx
	mov eax,edx
	push eax
	call ZComAPI::ZComVariantChangeType
	add esp,0x10
	test eax,eax
	jl Block41

 Block40:
	mov esi,dword ptr [ebp-0x44]
	jmp Block51

 Block41:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x6C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	dec esi
	mov eax,3
	mov word ptr [ebp-0x5C],ax
	mov dword ptr [ebp-0x54],esi
	mov eax,dword ptr [ebp-0x34]
	lea ecx,[ebp-0x6C]
	push ecx
	lea edx,[ebp-0x5C]
	push edx
	push ecx
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0xE
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0xF
	mov ecx,edi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Add
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],0xD
	jne Block46

 Block44:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea edx,[ebp-0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0xC
	jne Block50

 Block48:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],0xA
	jne Block54

 Block52:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block55:
	cmp word ptr [ebp-0x3C],8
	jne Block58

 Block56:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	test eax,eax
	je Block33

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block58:
	lea edx,[ebp-0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block33

 Block59:
	push eax
	call _com_issue_error

 Block60:
	mov esi,dword ptr [CActionFrame::s_pZMapper]
	cmp esi,edi
	je Block63

 Block61:
	mov dword ptr [CActionFrame::s_pZMapper],edi
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx
	test esi,esi
	je Block63

 Block62:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block63:
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x24],esp
	push 0x45A
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x6C]
	mov byte ptr [ebp-4],0x10
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x11
	call _xvariant_t::op_long
	mov esi,8
	mov dword ptr [CActionFrame::s_nFaceZ],eax
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x6C],si
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	call StringPool::GetInstance
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x24],esp
	push 0xF06
	push edx
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x6C]
	mov byte ptr [ebp-4],0x12
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x13
	call _xvariant_t::op_long
	mov dword ptr [CActionFrame::s_nCharacterStartZ],eax
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x6C],si
	jne Block70

 Block68:
	mov eax,dword ptr [ebp-0x64]
	xor ecx,ecx
	mov word ptr [ebp-0x6C],cx
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea edx,[ebp-0x6C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	call StringPool::GetInstance
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x24],esp
	push 0xF07
	push ecx
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x6C]
	mov byte ptr [ebp-4],0x14
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x15
	call _xvariant_t::op_long
	mov dword ptr [CActionFrame::s_nCharacterEndZ],eax
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x6C],si
	jne Block74

 Block72:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x5C]
	push edx
	call esi
	lea eax,[ebp-0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block77

 Block76:
	push eax
	call _com_issue_error

 Block77:
	lea ecx,[ebp-0x6C]
	push ecx
	mov byte ptr [ebp-4],0x16
	call esi
	lea edx,[ebp-0x6C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block79

 Block78:
	push eax
	call _com_issue_error

 Block79:
	mov edx,dword ptr [_D_S_SSMAPIMG]
	push 0
	push 0
	lea eax,[ebp-0x5C]
	push eax
	lea ecx,[ebp-0x6C]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [_D_S_SSMAPIMG]
	mov dword ptr [ebp-0x24],esp
	test eax,eax
	je Block81

 Block80:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block81:
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x18
	jne Block83

 Block82:
	push 0x80004003
	call _com_issue_error

 Block83:
	lea eax,[ebp-0x4C]
	mov bl,0x17
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x19
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block89

 Block84:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x24]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [CActionFrame::s_pSMapper]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x24]
	mov edi,ecx
	test eax,eax
	je Block86

 Block85:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block86:
	mov dword ptr [CActionFrame::s_pSMapper],edi
	test esi,esi
	jge Block91

 Block87:
	cmp esi,0x80004002
	je Block91

 Block88:
	push esi
	call _com_issue_error

 Block89:
	mov eax,dword ptr [CActionFrame::s_pSMapper]
	test eax,eax
	je Block91

 Block90:
	mov dword ptr [CActionFrame::s_pSMapper],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block91:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],bl
	jne Block94

 Block92:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	test eax,eax
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea ecx,[ebp-0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block95:
	mov esi,8
	mov byte ptr [ebp-4],0x16
	cmp word ptr [ebp-0x6C],si
	jne Block98

 Block96:
	mov eax,dword ptr [ebp-0x64]
	xor edx,edx
	mov word ptr [ebp-0x6C],dx
	test eax,eax
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea eax,[ebp-0x6C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block99:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x5C],si
	jne Block102

 Block100:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	test eax,eax
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea edx,[ebp-0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block103:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x3C],si
	jne Block106

 Block104:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block107:
	mov eax,dword ptr [ebp-0x14]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],2
	call eax
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block109

 Block108:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block109:
	mov eax,dword ptr [ebp-0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0
	call edx
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
// PcCreateObject__com_ptr_t__com_IIID_IWzCanvas___GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e___
__SUB(000030F0, __cdecl, 146696,  void, const wchar_t*, _x_com_ptr<IWzCanvas>&, IUnknown*) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	mov esi,dword ptr [esp+0x1C]
	mov eax,dword ptr [esi]
	test eax,eax
	je Block3

 Block1:
	mov dword ptr [esi],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov eax,dword ptr [esi]
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	mov dword ptr [esi],0
	mov eax,dword ptr [_D__G_APFNPCOMAPIS]
	test eax,eax
	jne Block5

 Block4:
	mov eax,0x800401F0
	jmp Block6

 Block5:
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x18]
	push ecx
	push esi
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edx
	call eax
	add esp,0x10
	test eax,eax
	jge Block7

 Block6:
	mov dword ptr [esp+8],eax
	push offset _COM_ERROR_THROW_INFO
	lea eax,[esp+8]
	push eax
	int 3 // TODO: 		mov dword ptr [esp+0xC],offset _com_error::`vftable'
	mov dword ptr [esp+0x14],0
	mov dword ptr [esp+0x18],0
	call _CxxThrowException

 Block7:
	pop esi
	add esp,0x10
	ret
}
}
// CActionFrame::ExtractMap
_SUB_EXCEPTION_HANDLER(5710)
__SUB(00005710, __cdecl, 20655,  ZRef<ZList<CActionFrame::MAPINFO> >, IWzCanvas*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5710
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
	xor ebp,ebp
	mov dword ptr [esp+0x1C],ebp
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x40],ebp
	call ZRef<ZList<CActionFrame::MAPINFO>>::_Alloc
	mov ecx,dword ptr [esp+0x78]
	lea eax,[esp+0x18]
	mov ebx,1
	push eax
	mov dword ptr [esp+0x70],ebx
	call IWzCanvas::Getproperty
	mov edi,dword ptr [esp+0x18]
	cmp edi,ebp
	sete al
	test al,al
	je Block10

 Block1:
	mov esi,dword ptr [esp+0x40]
	mov ebx,dword ptr [esp+0x74]
	cmp esi,ebp
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [ebx+4],esi
	je Block3

 Block2:
	lea ecx,[esi-0xC]
	push ecx
	call ebp

 Block3:
	mov dword ptr [esp+0x1C],1
	mov byte ptr [esp+0x6C],1
	test edi,edi
	je Block5

 Block4:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block5:
	mov byte ptr [esp+0x6C],0
	test esi,esi
	je Block9

 Block6:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	push edi
	call ebp
	test esi,esi
	je Block9

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block9:
	mov eax,ebx
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret

 Block10:
	push ebp
	push ebp
	push ecx
	mov ecx,dword ptr [_D_S_SMAP]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [_D_S_SMAP]
	mov dword ptr [esp+0x44],esp
	cmp eax,ebp
	je Block12

 Block11:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block12:
	mov byte ptr [esp+0x78],3
	cmp edi,ebp
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea edx,[esp+0x60]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x7C],2
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x74],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block17

 Block15:
	cmp eax,0x80004002
	je Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	cmp word ptr [esp+0x54],8
	mov byte ptr [esp+0x6C],2
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov edi,dword ptr [esp+0x18]
	cmp edi,ebp
	sete al
	test al,al
	je Block26

 Block22:
	mov eax,dword ptr [esp+0x40]
	mov esi,dword ptr [esp+0x74]
	mov dword ptr [esi+4],eax
	cmp eax,ebp
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block24:
	mov dword ptr [esp+0x1C],ebx
	mov byte ptr [esp+0x6C],1
	cmp edi,ebp
	je Block73

 Block25:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax
	jmp Block73

 Block26:
	cmp edi,ebp
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,edi
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x70],5
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x6C],7
	cmp eax,ebp
	je Block30

 Block29:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block30:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0x6C],8
	mov dword ptr [esp+0x30],ebp
	cmp dword ptr [esp+0x20],ebp
	je Block13

 Block31:
	jmp Block35

 Block34:
	mov edi,dword ptr [esp+0x18]
	xor ebp,ebp

 Block35:
	mov eax,dword ptr [esp+0x20]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0xC]
	lea ecx,[esp+0x30]
	push ecx
	lea ecx,[esp+0x48]
	push ecx
	push 1
	push eax
	call edx
	test eax,eax
	jne Block66

 Block36:
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	call DetachBSTR
	add esp,8
	mov ebx,dword ptr [esp+0x14]
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [eax],ebx
	cmp ebx,ebp
	je Block38

 Block37:
	lea edx,[ebx+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block38:
	lea eax,[esp+0x60]
	mov byte ptr [esp+0x78],0xA
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x7C],9
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x74],0xB
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [esp+0x38],esi
	cmp eax,ebp
	je Block41

 Block39:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x34]
	push edx
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebp
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x34]
	cmp eax,ebp
	mov esi,ecx
	mov dword ptr [esp+0x38],esi
	jge Block41

 Block40:
	cmp eax,0x80004002
	jne Block16

 Block41:
	cmp word ptr [esp+0x54],8
	mov byte ptr [esp+0x6C],0xD
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	cmp eax,ebp
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block45:
	cmp esi,ebp
	sete al
	test al,al
	je Block50

 Block46:
	mov byte ptr [esp+0x6C],9
	cmp esi,ebp
	je Block48

 Block47:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block48:
	mov byte ptr [esp+0x6C],8
	cmp ebx,ebp
	je Block35

 Block49:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x14],ebp
	jmp Block35

 Block50:
	mov ecx,dword ptr [esp+0x40]
	call ZList<CActionFrame::MAPINFO>::AddTail_
	mov edi,eax
	lea eax,[esp+0x14]
	cmp edi,eax
	je Block55

 Block51:
	mov ecx,dword ptr [edi]
	cmp ecx,ebp
	je Block53

 Block52:
	call _xbstr_t::Data_t::Release
	mov dword ptr [edi],ebp

 Block53:
	mov dword ptr [edi],ebx
	cmp ebx,ebp
	je Block55

 Block54:
	add ebx,8
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block55:
	cmp esi,ebp
	je Block13

 Block56:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x24]
	push edx
	push esi
	mov dword ptr [esp+0x2C],ebp
	call eax
	cmp eax,ebp
	jge Block58

 Block57:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block58:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x30]
	mov ebp,dword ptr [esp+0x24]
	lea edx,[esp+0x28]
	push edx
	xor ebx,ebx
	push esi
	mov dword ptr [esp+0x30],ebx
	call eax
	cmp eax,ebx
	jge Block60

 Block59:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block60:
	mov ecx,dword ptr [esp+0x28]
	lea eax,[ecx+ebp]
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [edi+4],eax
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push esi
	mov dword ptr [esp+0x30],ebx
	call ecx
	cmp eax,ebx
	jge Block62

 Block61:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block62:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x38]
	mov ebp,dword ptr [esp+0x28]
	lea eax,[esp+0x24]
	push eax
	push esi
	mov dword ptr [esp+0x2C],ebx
	call ecx
	cmp eax,ebx
	jge Block64

 Block63:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block64:
	mov edx,dword ptr [esp+0x24]
	lea eax,[edx+ebp]
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [edi+8],eax
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0x70],9
	call ecx
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x6C],8
	cmp ecx,ebx
	je Block34

 Block65:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x14],0
	jmp Block34

 Block66:
	mov eax,dword ptr [esp+0x40]
	mov esi,dword ptr [esp+0x74]
	mov dword ptr [esi+4],eax
	cmp eax,ebp
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block68:
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0x1C],1
	mov byte ptr [esp+0x6C],7
	jne Block71

 Block69:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	cmp eax,ebp
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block72:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x70],2
	call edx
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0x70],1
	call ecx

 Block73:
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x6C],0
	call ZRef<ZList<CActionFrame::MAPINFO>>::~ZRef<ZList<CActionFrame::MAPINFO>>
	mov eax,esi
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret
}
}
// CActionFrame::~CActionFrame
_SUB_EXCEPTION_HANDLER(17000)
__SUB_CLASS_THIS0(00017000, __thiscall, 20645,  CActionFrame, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_17000
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
	int 3 // TODO: 		mov dword ptr [esi],offset CActionFrame::`vftable'
	lea ecx,[esi+0x3C]
	mov dword ptr [esp+0x14],2
	int 3 // TODO: 		mov dword ptr [ecx],offset ZList<ZRef<ZList<CActionFrame::MAPINFO>>>::`vftable'
	call ZList<ZRef<ZList<CActionFrame::MAPINFO>>>::RemoveAll
	mov ecx,dword ptr [esi+0x38]
	test ecx,ecx
	je Block2

 Block1:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x38],0

 Block2:
	mov eax,dword ptr [esi+0x30]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block7

 Block3:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	mov eax,dword ptr [esi+0x30]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0x30]
	test ecx,ecx
	je Block6

 Block5:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block6:
	mov dword ptr [esi+0x30],0

 Block7:
	lea ecx,[esi+4]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	int 3 // TODO: 		mov dword ptr [ecx],offset ZList<ZRef<CSpriteInstance>>::`vftable'
	call ZList<ZRef<CSpriteInstance>>::RemoveAll
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CActionFrame::Draw
_SUB_EXCEPTION_HANDLER(3D60)
__SUB_CLASS_THIS(00003D60, __thiscall, 20665,  CActionFrame, void, _x_com_ptr<IWzCanvas>&, _x_com_ptr<IWzCanvas>&, tagPOINT&, tagPOINT&, tagPOINT&, tagPOINT&, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x5C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	call CActionFrame::UpdateMBR
	mov ecx,edi
	call CActionFrame::UpdateVisiblity
	mov esi,dword ptr [edi+0x20]
	mov ebp,dword ptr [edi+0x24]
	sub esi,dword ptr [edi+0x18]
	sub ebp,dword ptr [edi+0x1C]
	lea eax,[esp+0x14]
	push 0x3D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ebx,dword ptr [esp+0x6C]
	mov eax,dword ptr [eax]
	push 0
	push ebx
	push eax
	mov dword ptr [esp+0x70],0
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0x64],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea eax,[esp+0x3C]
	push eax
	mov dword ptr [esp+0x68],1
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [ebx]
	mov byte ptr [esp+0x64],2
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x40]
	push eax
	push ebp
	push esi
	call IWzCanvas::Create
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x64],1
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	or ebx,0xFFFFFFFF
	cmp word ptr [esp+0x2C],8
	mov dword ptr [esp+0x64],ebx
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	lea edx,[esp+0x14]
	push 0x3D0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x70]
	mov eax,dword ptr [eax]
	push 0
	push ecx
	push eax
	mov dword ptr [esp+0x70],3
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0x64],ebx
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block18:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	lea ecx,[esp+0x3C]
	mov ebx,4
	push ecx
	mov dword ptr [esp+0x68],ebx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	mov eax,dword ptr [esp+0x70]
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x64],5
	test ecx,ecx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x40]
	push eax
	push ebp
	push esi
	call IWzCanvas::Create
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x64],bl
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	or ebx,0xFFFFFFFF
	mov esi,8
	mov dword ptr [esp+0x64],ebx
	cmp word ptr [esp+0x2C],si
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov eax,dword ptr [edi+0x10]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block64

 Block33:
	lea edx,[esp+0x14]
	push edx
	mov ebp,0xFF
	call ZList<ZRef<CSpriteInstance>>::GetNext
	mov eax,dword ptr [eax+4]
	add esp,4
	cmp dword ptr [eax+0x14],0
	je Block63

 Block34:
	cmp dword ptr [esp+0x84],0
	mov ecx,dword ptr [eax+0x20]
	mov edx,dword ptr [ecx+0x24]
	jne Block48

 Block35:
	cmp edx,dword ptr [CActionFrame::s_nFaceZ]
	mov edx,3
	jge Block42

 Block36:
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],ebp
	mov edx,dword ptr [esp+0x6C]
	mov esi,dword ptr [edx]
	mov ecx,dword ptr [ecx+0x30]
	mov dword ptr [esp+0x64],6
	mov dword ptr [esp+0x18],ecx
	test esi,esi
	je Block7

 Block37:
	mov ebp,dword ptr [esp+0x1C]
	mov edx,dword ptr [eax+0x10]
	sub edx,dword ptr [edi+0x1C]
	mov eax,dword ptr [eax+0xC]
	sub eax,dword ptr [edi+0x18]
	mov ebx,dword ptr [esi]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],ebp
	mov ebp,dword ptr [esp+0x30]
	mov dword ptr [ecx+4],ebp
	mov ebp,dword ptr [esp+0x34]
	mov dword ptr [ecx+8],ebp
	mov ebp,dword ptr [esp+0x38]
	mov dword ptr [ecx+0xC],ebp
	mov ecx,dword ptr [esp+0x28]
	push ecx
	push edx
	mov edx,dword ptr [ebx+0x80]
	push eax
	push esi
	call edx
	test eax,eax
	jge Block39

 Block38:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block39:
	or ebx,0xFFFFFFFF
	mov esi,8
	mov dword ptr [esp+0x64],ebx
	cmp word ptr [esp+0x1C],si
	jne Block41

 Block40:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	jmp Block59

 Block41:
	lea ecx,[esp+0x1C]
	push ecx
	jmp Block62

 Block42:
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],ebp
	mov edx,dword ptr [esp+0x70]
	mov esi,dword ptr [edx]
	mov ecx,dword ptr [ecx+0x30]
	mov dword ptr [esp+0x64],7
	mov dword ptr [esp+0x18],ecx
	test esi,esi
	je Block7

 Block43:
	mov ebp,dword ptr [esp+0x2C]
	mov edx,dword ptr [eax+0x10]
	sub edx,dword ptr [edi+0x1C]
	mov eax,dword ptr [eax+0xC]
	sub eax,dword ptr [edi+0x18]
	mov ebx,dword ptr [esi]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],ebp
	mov ebp,dword ptr [esp+0x40]
	mov dword ptr [ecx+4],ebp
	mov ebp,dword ptr [esp+0x44]
	mov dword ptr [ecx+8],ebp
	mov ebp,dword ptr [esp+0x48]
	mov dword ptr [ecx+0xC],ebp
	mov ecx,dword ptr [esp+0x28]
	push ecx
	push edx
	mov edx,dword ptr [ebx+0x80]
	push eax
	push esi
	call edx
	test eax,eax
	jge Block45

 Block44:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block45:
	or ebx,0xFFFFFFFF
	mov esi,8
	mov dword ptr [esp+0x64],ebx
	cmp word ptr [esp+0x2C],si
	jne Block47

 Block46:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	jmp Block59

 Block47:
	lea ecx,[esp+0x2C]
	push ecx
	jmp Block62

 Block48:
	cmp edx,dword ptr [CActionFrame::s_nCharacterStartZ]
	jge Block55

 Block49:
	mov edx,3
	mov word ptr [esp+0x3C],dx
	mov dword ptr [esp+0x44],ebp
	mov edx,dword ptr [esp+0x6C]
	mov ecx,dword ptr [ecx+0x30]
	mov dword ptr [esp+0x64],esi
	mov esi,dword ptr [edx]
	mov dword ptr [esp+0x18],ecx
	test esi,esi
	je Block7

 Block50:
	mov ebp,dword ptr [esp+0x3C]
	mov edx,dword ptr [eax+0x10]
	sub edx,dword ptr [edi+0x1C]
	mov eax,dword ptr [eax+0xC]
	sub eax,dword ptr [edi+0x18]
	mov ebx,dword ptr [esi]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],ebp
	mov ebp,dword ptr [esp+0x50]
	mov dword ptr [ecx+4],ebp
	mov ebp,dword ptr [esp+0x54]
	mov dword ptr [ecx+8],ebp
	mov ebp,dword ptr [esp+0x58]
	mov dword ptr [ecx+0xC],ebp
	mov ecx,dword ptr [esp+0x28]
	push ecx
	push edx
	mov edx,dword ptr [ebx+0x80]
	push eax
	push esi
	call edx
	test eax,eax
	jge Block52

 Block51:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block52:
	or ebx,0xFFFFFFFF
	mov esi,8
	mov dword ptr [esp+0x64],ebx
	cmp word ptr [esp+0x3C],si
	jne Block54

 Block53:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	jmp Block59

 Block54:
	lea ecx,[esp+0x3C]
	push ecx
	jmp Block62

 Block55:
	cmp edx,dword ptr [CActionFrame::s_nCharacterEndZ]
	jle Block63

 Block56:
	mov edx,3
	mov word ptr [esp+0x4C],dx
	mov dword ptr [esp+0x54],ebp
	mov edx,dword ptr [ecx+0x30]
	mov ecx,dword ptr [esp+0x70]
	mov ecx,dword ptr [ecx]
	mov dword ptr [esp+0x64],9
	test ecx,ecx
	je Block7

 Block57:
	lea ebp,[esp+0x4C]
	push ebp
	push edx
	mov edx,dword ptr [eax+0x10]
	sub edx,dword ptr [edi+0x1C]
	mov eax,dword ptr [eax+0xC]
	sub eax,dword ptr [edi+0x18]
	push edx
	push eax
	call IWzCanvas::Copy
	mov dword ptr [esp+0x64],ebx
	cmp word ptr [esp+0x4C],si
	jne Block61

 Block58:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx

 Block59:
	test eax,eax
	je Block63

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block61:
	lea edx,[esp+0x4C]
	push edx

 Block62:
	call dword ptr [ZImports::_VariantClear]

 Block63:
	cmp dword ptr [esp+0x14],0
	jne Block33

 Block64:
	mov eax,dword ptr [edi+0x30]
	mov ecx,dword ptr [eax+0x20]
	mov ebx,dword ptr [ecx+0x28]
	add ebx,dword ptr [eax+0xC]
	mov ebp,dword ptr [ecx+0x2C]
	add ebp,dword ptr [eax+0x10]
	mov eax,dword ptr [esp+0x6C]
	mov esi,dword ptr [eax]
	sub ebx,dword ptr [edi+0x18]
	sub ebp,dword ptr [edi+0x1C]
	test esi,esi
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x70]
	push ebx
	push esi
	call edx
	test eax,eax
	jge Block68

 Block67:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block68:
	mov eax,dword ptr [esp+0x6C]
	mov esi,dword ptr [eax]
	test esi,esi
	jne Block70

 Block69:
	push 0x80004003
	call _com_issue_error

 Block70:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x78]
	push ebp
	push esi
	call edx
	test eax,eax
	jge Block72

 Block71:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block72:
	mov eax,dword ptr [esp+0x70]
	mov esi,dword ptr [eax]
	test esi,esi
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x70]
	push ebx
	push esi
	call edx
	test eax,eax
	jge Block76

 Block75:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block76:
	mov eax,dword ptr [esp+0x70]
	mov esi,dword ptr [eax]
	test esi,esi
	jne Block78

 Block77:
	push 0x80004003
	call _com_issue_error

 Block78:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x78]
	push ebp
	push esi
	call edx
	test eax,eax
	jge Block80

 Block79:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block80:
	mov eax,dword ptr [edi+0x48]
	mov dword ptr [esp+0x70],3
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block135

 Block81:
	cmp dword ptr [esp+0x70],0
	je Block135

 Block82:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<ZList<CActionFrame::MAPINFO>>>::GetNext
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [ecx+0xC]
	add esp,4
	mov dword ptr [esp+0x6C],eax
	test eax,eax
	je Block134

 Block83:
	lea edx,[esp+0x6C]
	push edx
	call ZList<CActionFrame::MAPINFO>::GetNext
	mov esi,eax
	mov ecx,dword ptr [esi]
	add esp,4
	cmp ecx,dword ptr [_D_S_SNAVEL]
	je Block94

 Block84:
	test ecx,ecx
	jne Block89

 Block85:
	mov eax,dword ptr [_D_S_SNAVEL]
	test eax,eax
	je Block94

 Block86:
	cmp dword ptr [eax],ecx
	je Block94

 Block87:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block94

 Block88:
	mov eax,dword ptr [eax-4]
	shr eax,1
	jmp Block93

 Block89:
	cmp dword ptr [_D_S_SNAVEL],0
	jne Block92

 Block90:
	mov ecx,dword ptr [ecx]
	test ecx,ecx
	je Block94

 Block91:
	mov eax,dword ptr [ecx-4]
	shr eax,1
	jmp Block93

 Block92:
	mov eax,dword ptr [_D_S_SNAVEL]
	push eax
	call _xbstr_t::Data_t::Compare
	test eax,eax

 Block93:
	jne Block95

 Block94:
	mov ecx,dword ptr [esi+4]
	sub ecx,dword ptr [edi+0x18]
	mov eax,dword ptr [esp+0x74]
	sub ecx,ebx
	mov dword ptr [eax],ecx
	mov edx,dword ptr [esi+8]
	sub edx,ebp
	sub edx,dword ptr [edi+0x1C]
	sub dword ptr [esp+0x70],1
	mov dword ptr [eax+4],edx
	je Block134

 Block95:
	cmp dword ptr [esp+0x84],0
	mov eax,dword ptr [_D_S_SHEAD]
	mov edx,dword ptr [_D_S_SBROW]
	mov ecx,dword ptr [esi]
	je Block108

 Block96:
	cmp ecx,eax
	je Block107

 Block97:
	test ecx,ecx
	jne Block102

 Block98:
	test eax,eax
	je Block107

 Block99:
	cmp dword ptr [eax],ecx
	je Block107

 Block100:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block107

 Block101:
	mov eax,dword ptr [eax-4]
	shr eax,1
	jmp Block106

 Block102:
	test eax,eax
	jne Block105

 Block103:
	mov ecx,dword ptr [ecx]
	test ecx,ecx
	je Block107

 Block104:
	mov eax,dword ptr [ecx-4]
	shr eax,1
	jmp Block106

 Block105:
	mov eax,dword ptr [_D_S_SHEAD]
	push eax
	call _xbstr_t::Data_t::Compare
	test eax,eax

 Block106:
	jne Block121

 Block107:
	mov eax,dword ptr [esp+0x78]
	jmp Block120

 Block108:
	cmp ecx,edx
	je Block119

 Block109:
	test ecx,ecx
	jne Block114

 Block110:
	test edx,edx
	je Block119

 Block111:
	cmp dword ptr [edx],ecx
	je Block119

 Block112:
	mov eax,dword ptr [edx]
	test eax,eax
	je Block119

 Block113:
	mov eax,dword ptr [eax-4]
	shr eax,1
	jmp Block118

 Block114:
	test edx,edx
	jne Block117

 Block115:
	mov ecx,dword ptr [ecx]
	test ecx,ecx
	je Block119

 Block116:
	mov eax,dword ptr [ecx-4]
	shr eax,1
	jmp Block118

 Block117:
	mov eax,dword ptr [_D_S_SBROW]
	push eax
	call _xbstr_t::Data_t::Compare
	test eax,eax

 Block118:
	jne Block121

 Block119:
	mov eax,dword ptr [esp+0x7C]

 Block120:
	mov ecx,dword ptr [esi+4]
	sub ecx,dword ptr [edi+0x18]
	sub ecx,ebx
	mov dword ptr [eax],ecx
	mov edx,dword ptr [esi+8]
	sub edx,ebp
	sub edx,dword ptr [edi+0x1C]
	sub dword ptr [esp+0x70],1
	mov dword ptr [eax+4],edx
	je Block134

 Block121:
	mov ecx,dword ptr [esi]
	cmp ecx,dword ptr [_D_S_SMUZZLE]
	je Block132

 Block122:
	test ecx,ecx
	jne Block127

 Block123:
	cmp dword ptr [_D_S_SMUZZLE],ecx
	je Block132

 Block124:
	mov eax,dword ptr [_D_S_SMUZZLE]
	cmp dword ptr [eax],ecx
	je Block132

 Block125:
	mov ecx,eax
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block132

 Block126:
	mov eax,dword ptr [eax-4]
	shr eax,1
	jmp Block131

 Block127:
	cmp dword ptr [_D_S_SMUZZLE],0
	jne Block130

 Block128:
	mov ecx,dword ptr [ecx]
	test ecx,ecx
	je Block132

 Block129:
	mov eax,dword ptr [ecx-4]
	shr eax,1
	jmp Block131

 Block130:
	mov edx,dword ptr [_D_S_SMUZZLE]
	push edx
	call _xbstr_t::Data_t::Compare
	test eax,eax

 Block131:
	jne Block133

 Block132:
	mov ecx,dword ptr [esi+4]
	sub ecx,dword ptr [edi+0x18]
	mov eax,dword ptr [esp+0x80]
	sub ecx,ebx
	mov dword ptr [eax],ecx
	mov edx,dword ptr [esi+8]
	sub edx,ebp
	sub edx,dword ptr [edi+0x1C]
	sub dword ptr [esp+0x70],1
	mov dword ptr [eax+4],edx
	je Block134

 Block133:
	cmp dword ptr [esp+0x6C],0
	jne Block83

 Block134:
	cmp dword ptr [esp+0x14],0
	jne Block81

 Block135:
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret 0x1C
}
}
// CSpriteInstance::~CSpriteInstance
_SUB_EXCEPTION_HANDLER(3940)
__SUB_CLASS_THIS0(00003940, __thiscall, 20555,  CSpriteInstance, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3940
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
	mov eax,dword ptr [esi+0x20]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0x20]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0x20]
	test ecx,ecx
	je Block4

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block4:
	mov dword ptr [esi+0x20],0

 Block5:
	int 3 // TODO: 		mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CTerminateException::CTerminateException
__SUB_CLASS_THIS(00001D50, __thiscall, 117805,  CTerminateException, void, HRESULT) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CMSException::_ctor_0
	mov eax,esi
	pop esi
	ret 4
}
}
// CActionFrame::GetZMapper
__SUB0(003180E0, __cdecl, 20646,  _x_com_ptr<IWzProperty>) {
__asm {

 Block0:
	push ecx
	cmp dword ptr [CActionFrame::s_pZMapper],0
	mov dword ptr [esp],0
	jne Block2

 Block1:
	call CActionFrame::LoadMappers

 Block2:
	mov eax,dword ptr [CActionFrame::s_pZMapper]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esi],eax
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	mov eax,esi
	pop esi
	pop ecx
	ret
}
}
// ZComAPI__ZComSysAllocString
__SUB(00001230, __cdecl, 146677,  wchar_t*, const wchar_t*) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	test ebx,ebx
	jne Block2

 Block1:
	xor eax,eax
	pop ebx
	ret

 Block2:
	mov eax,ebx
	lea edx,[eax+2]

 Block3:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block3

 Block4:
	sub eax,edx
	push esi
	sar eax,1
	push edi
	mov edi,eax
	lea eax,[edi+edi+6]
	push eax
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	jne Block6

 Block5:
	pop edi
	pop esi
	pop ebx
	ret

 Block6:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebx
	push esi
	call _memcpy
	add esp,0xC
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	ret
}
}
// ZComAPI__ZComVarBstrFromVariant
// 401658
static uint8_t _SUB_1340_LOOKUP_TABLE_0[18] = {
0, 1, 2, 3, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 5, 
6, 7, 
};
__SUB(00001340, __cdecl, 146682,  HRESULT, tagVARIANT*, tagVARIANT*) {
__asm {

 Block0:
	sub esp,0x104
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x100],eax
	push ebx
	push esi
	mov esi,dword ptr [esp+0x110]
	push edi
	mov edi,dword ptr [esp+0x118]
	movzx ebx,word ptr [edi]
	cmp bx,8
	jne Block10

 Block1:
	cmp esi,edi
	je Block9

 Block2:
	cmp word ptr [esi],bx
	jne Block5

 Block3:
	xor eax,eax
	mov word ptr [esi],ax
	mov eax,dword ptr [esi+8]
	test eax,eax
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	push esi
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jl Block34

 Block6:
	mov ecx,8
	mov word ptr [esi],cx
	mov edi,dword ptr [edi+8]
	test edi,edi
	jne Block8

 Block7:
	xor eax,eax
	push eax
	push edi
	call ZComAPI::ZComSysAllocStringLen
	add esp,8
	pop edi
	mov dword ptr [esi+8],eax
	pop esi
	xor eax,eax
	pop ebx
	mov ecx,dword ptr [esp+0x100]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x104
	ret

 Block8:
	mov eax,dword ptr [edi-4]
	shr eax,1
	push eax
	push edi
	call ZComAPI::ZComSysAllocStringLen
	add esp,8
	mov dword ptr [esi+8],eax

 Block9:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	mov ecx,dword ptr [esp+0x100]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x104
	ret

 Block10:
	test bx,bx
	jne Block18

 Block11:
	cmp word ptr [esi],8
	jne Block14

 Block12:
	mov eax,dword ptr [esi+8]
	xor edx,edx
	mov word ptr [esi],dx
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	push esi
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jl Block34

 Block15:
	mov eax,8
	push 6
	mov word ptr [esi],ax
	call CoTaskMemAlloc
	test eax,eax
	jne Block17

 Block16:
	pop edi
	mov dword ptr [esi+8],eax
	pop esi
	pop ebx
	mov ecx,dword ptr [esp+0x100]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x104
	ret

 Block17:
	mov dword ptr [eax],0
	add eax,4
	xor ecx,ecx
	mov word ptr [eax],cx
	pop edi
	mov dword ptr [esi+8],eax
	pop esi
	xor eax,eax
	pop ebx
	mov ecx,dword ptr [esp+0x100]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x104
	ret

 Block18:
	push 0xFF
	lea edx,[esp+0x11]
	push 0
	push edx
	mov byte ptr [esp+0x18],0
	call _memset
	movzx eax,bx
	add eax,0xFFFFFFFE
	add esp,0xC
	cmp eax,0x11
	ja Block33

 Block19:
	movzx eax,byte ptr [eax+_SUB_1340_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block21
cmp EAX, 1
je Block22
cmp EAX, 2
je Block26
cmp EAX, 3
je Block27
cmp EAX, 4
je Block20
cmp EAX, 5
je Block23
cmp EAX, 6
je Block24
cmp EAX, 7
je Block25
cmp EAX, 8
je Block33


 Block20:
	movsx ecx,byte ptr [edi+8]
	push ecx
	lea edx,[esp+0x10]
	push offset _S_LI
	push edx
	call wsprintfA
	add esp,0xC
	jmp Block29

 Block21:
	movsx eax,word ptr [edi+8]
	push eax
	lea ecx,[esp+0x10]
	push offset _S_LI
	push ecx
	call wsprintfA
	add esp,0xC
	jmp Block29

 Block22:
	mov edx,dword ptr [edi+8]
	push edx
	lea eax,[esp+0x10]
	push offset _S_LI
	push eax
	call wsprintfA
	add esp,0xC
	jmp Block29

 Block23:
	movzx ecx,byte ptr [edi+8]
	push ecx
	lea edx,[esp+0x10]
	push offset _S_LU
	push edx
	call wsprintfA
	add esp,0xC
	jmp Block29

 Block24:
	movzx eax,word ptr [edi+8]
	push eax
	lea ecx,[esp+0x10]
	push offset _S_LU
	push ecx
	call wsprintfA
	add esp,0xC
	jmp Block29

 Block25:
	mov edx,dword ptr [edi+8]
	push edx
	lea eax,[esp+0x10]
	push offset _S_LU
	push eax
	call wsprintfA
	add esp,0xC
	jmp Block29

 Block26:
	fld dword ptr [edi+8]
	sub esp,8
	fstp qword ptr [esp]
	push offset _S_F
	lea ecx,[esp+0x18]
	push ecx
	jmp Block28

 Block27:
	fld qword ptr [edi+8]
	sub esp,8
	fstp qword ptr [esp]
	push offset _S_LF
	lea edx,[esp+0x18]
	push edx

 Block28:
	call _sprintf
	add esp,0x10

 Block29:
	push esi
	call ZComAPI::ZComVariantClear
	add esp,4
	test eax,eax
	jl Block34

 Block30:
	push 0
	push 0
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	push ecx
	push 0
	mov eax,8
	push 0
	mov word ptr [esi],ax
	call MultiByteToWideChar
	add eax,eax
	mov edi,eax
	shr edi,1
	dec edi
	lea edx,[edi+edi+6]
	push edx
	call CoTaskMemAlloc
	test eax,eax
	je Block32

 Block31:
	lea ecx,[edi+edi]
	mov dword ptr [eax],ecx
	add eax,4
	xor edx,edx
	mov word ptr [ecx+eax],dx

 Block32:
	push 0xFFFFFFFF
	push eax
	lea eax,[esp+0x14]
	push eax
	call ZStrUtil::_Conv_0
	add esp,0xC
	pop edi
	mov dword ptr [esi+8],eax
	pop esi
	xor eax,eax
	pop ebx
	mov ecx,dword ptr [esp+0x100]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x104
	ret

 Block33:
	mov eax,0x80020005

 Block34:
	mov ecx,dword ptr [esp+0x10C]
	pop edi
	pop esi
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x104
	ret
}
}
// CActionFrame::Merge
_SUB_EXCEPTION_HANDLER(5F10)
__SUB_CLASS_THIS(00005F10, __thiscall, 20667,  CActionFrame, void, wchar_t*, wchar_t*, IWzCanvas*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5F10
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
	xor esi,esi
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x24],esi
	call ZRef<CSpriteInstance>::_Alloc
	mov eax,dword ptr [esp+0x3C]
	push 1
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x38],esi
	call _xbstr_t::_ctor_2
	mov ecx,dword ptr [esp+0x38]
	push 1
	push ecx
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0x38],1
	call _xbstr_t::_ctor_2
	mov ebx,dword ptr [esp+0x24]
	lea esi,[ebx+0x1C]
	mov ecx,esi
	mov byte ptr [esp+0x30],2
	call ZRef<CSpriteSource>::_Alloc
	mov edi,dword ptr [esp+0x40]
	mov esi,dword ptr [esi+4]
	push edi
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x44]
	push eax
	mov ecx,esi
	call CSpriteSource::Init
	mov ecx,dword ptr [esp+0x3C]
	xor esi,esi
	cmp ecx,esi
	je Block2

 Block1:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x3C],esi

 Block2:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x30],0
	cmp ecx,esi
	je Block4

 Block3:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x14],esi

 Block4:
	mov eax,dword ptr [ebx+0x20]
	mov ecx,dword ptr [eax+0x28]
	neg ecx
	mov dword ptr [ebx+0xC],ecx
	mov eax,dword ptr [ebx+0x20]
	mov edx,dword ptr [eax+0x2C]
	neg edx
	mov dword ptr [ebx+0x10],edx
	mov eax,dword ptr [ebx+0x20]
	mov esi,dword ptr [eax+0x24]
	cmp esi,dword ptr [CActionFrame::s_nFaceZ]
	jne Block7

 Block5:
	lea esi,[ebx+4]
	push esi
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block37

 Block6:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,ebx
	call edx
	jmp Block37

 Block7:
	cmp dword ptr [ebp+0x34],0
	je Block9

 Block8:
	lea eax,[esp+0x20]
	push eax
	lea ecx,[ebp+0x2C]
	call ZRef<CSpriteInstance>::op_assign_copy
	mov dword ptr [ebp+0x34],0

 Block9:
	lea ecx,[esp+0x18]
	push edi
	push ecx
	call CActionFrame::ExtractMap
	add esp,8
	mov edx,dword ptr [esp+0x1C]
	mov dword ptr [ebx+0x18],edx
	mov eax,dword ptr [ebp+0x10]
	mov byte ptr [esp+0x30],3
	mov dword ptr [ebp+0x28],0
	mov dword ptr [esp+0x38],eax
	test eax,eax
	je Block12

 Block10:
	mov ecx,dword ptr [eax+4]
	mov ecx,dword ptr [ecx+0x20]
	cmp dword ptr [ecx+0x24],esi
	jg Block38

 Block11:
	lea eax,[esp+0x38]
	push eax
	call ZList<ZRef<CSpriteInstance>>::GetNext
	mov eax,dword ptr [esp+0x3C]
	add esp,4
	test eax,eax
	jne Block10

 Block12:
	lea ecx,[ebp+4]
	call ZList<ZRef<CSpriteInstance>>::AddTail_
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	lea edx,[ebx+4]
	push edx
	mov esi,eax
	call edi
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block17

 Block13:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block16

 Block14:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [esi+4]
	test ecx,ecx
	je Block16

 Block15:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block16:
	mov dword ptr [esi+4],0

 Block17:
	mov dword ptr [esi+4],ebx

 Block18:
	lea ecx,[ebp+0x3C]
	call ZList<ZRef<ZList<CActionFrame::MAPINFO>>>::AddTail_
	mov edi,eax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block20:
	mov esi,dword ptr [edi+4]
	test esi,esi
	je Block25

 Block21:
	add esi,0xFFFFFFF0
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block24

 Block22:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block24

 Block23:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block24:
	mov dword ptr [edi+4],0

 Block25:
	mov eax,dword ptr [esp+0x1C]
	push eax
	mov ecx,ebp
	mov dword ptr [edi+4],eax
	call CActionFrame::FindGroup
	mov esi,eax
	test esi,esi
	je Block30

 Block26:
	lea esp,[esp]

 Block27:
	cmp dword ptr [ebp+0x48],edi
	jne Block29

 Block28:
	mov eax,esi
	mov esi,edi
	mov edi,eax

 Block29:
	push edi
	push esi
	mov ecx,ebp
	call CActionFrame::MergeGroup
	mov edi,esi
	mov esi,dword ptr [esi+4]
	push esi
	mov ecx,ebp
	call CActionFrame::FindGroup
	mov esi,eax
	test esi,esi
	jne Block27

 Block30:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x30],0
	test eax,eax
	je Block35

 Block31:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block34

 Block32:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block34

 Block33:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block34:
	mov dword ptr [esp+0x1C],0

 Block35:
	lea esi,[ebx+4]
	push esi
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block37

 Block36:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebx
	call eax

 Block37:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 0xC

 Block38:
	push eax
	lea ecx,[ebp+4]
	call ZList<ZRef<CSpriteInstance>>::InsertBefore
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,eax
	call ZRef<CSpriteInstance>::op_assign_copy
	jmp Block18
}
}
// ZComAPI__ZComSysAllocStringByteLen
__SUB(00001290, __cdecl, 146678,  wchar_t*, const char*, uint32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	lea eax,[edi+6]
	push eax
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	jne Block2

 Block1:
	pop edi
	pop esi
	ret

 Block2:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esi],edi
	add esi,4
	test eax,eax
	je Block4

 Block3:
	push edi
	push eax
	push esi
	call _memcpy
	add esp,0xC

 Block4:
	shr edi,1
	xor ecx,ecx
	mov word ptr [esi+edi*2],cx
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// ZComAPI__ZComVariantClear
__SUB(00001310, __cdecl, 146680,  HRESULT, tagVARIANT*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp word ptr [eax],8
	jne Block4

 Block1:
	xor ecx,ecx
	mov word ptr [eax],cx
	mov eax,dword ptr [eax+8]
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block3:
	xor eax,eax
	ret

 Block4:
	push eax
	call dword ptr [ZImports::_VariantClear]
	ret
}
}
// ZComAPI__ZComSysAllocStringLen
__SUB(000012D0, __cdecl, 146679,  wchar_t*, const wchar_t*, uint32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	lea eax,[edi+edi+6]
	push eax
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	jne Block2

 Block1:
	pop edi
	pop esi
	ret

 Block2:
	mov eax,dword ptr [esp+0xC]
	add edi,edi
	mov dword ptr [esi],edi
	add esi,4
	test eax,eax
	je Block4

 Block3:
	push edi
	push eax
	push esi
	call _memcpy
	add esp,0xC

 Block4:
	xor ecx,ecx
	mov word ptr [edi+esi],cx
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// DetachBSTR
_SUB_EXCEPTION_HANDLER(4C40)
__SUB(00004C40, __cdecl, 146702,  Ztl_bstr_t*, Ztl_bstr_t*, tagVARIANT&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4C40
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
	mov esi,dword ptr [esp+0x40]
	xor edi,edi
	cmp word ptr [esi],8
	mov dword ptr [esp+0x18],edi
	jne Block7

 Block1:
	mov ebx,dword ptr [esi+8]
	xor eax,eax
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esi+8],edi
	mov word ptr [esi],ax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,edi
	je Block3

 Block2:
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],1
	mov dword ptr [eax],ebx
	jmp Block4

 Block3:
	xor eax,eax

 Block4:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	mov dword ptr [ecx],eax
	cmp eax,edi
	jne Block6

 Block5:
	push 0x8007000E
	call _com_issue_error

 Block6:
	mov eax,ecx
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x28
	ret

 Block7:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x1C]
	push esi
	mov ebx,1
	push edx
	mov dword ptr [esp+0x3C],ebx
	call ZComAPI::ZComVarBstrFromVariant
	add esp,8
	cmp eax,edi
	jge Block9

 Block8:
	push edi
	push eax
	call _com_raise_error

 Block9:
	mov esi,dword ptr [esp+0x24]
	xor eax,eax
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x28],edi
	mov word ptr [esp+0x20],ax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,edi
	je Block11

 Block10:
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ebx
	mov dword ptr [eax],esi
	jmp Block12

 Block11:
	xor eax,eax

 Block12:
	mov esi,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],bl
	mov dword ptr [esi],eax
	cmp eax,edi
	jne Block14

 Block13:
	push 0x8007000E
	call _com_issue_error

 Block14:
	cmp word ptr [esp+0x1C],8
	mov dword ptr [esp+0x34],0xFFFFFFFF
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
	mov eax,esi
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x28
	ret

 Block17:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block18:
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
// _com_util__ZtlConvertStringToBSTR
__SUB(000017D0, __stdcall, 146689,  wchar_t*, const char*) {
__asm {

 Block0:
	push edi
	mov edi,dword ptr [esp+8]
	test edi,edi
	jne Block2

 Block1:
	xor eax,eax
	pop edi
	ret 4

 Block2:
	push esi
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	mov esi,eax
	shr esi,1
	dec esi
	lea eax,[esi+esi+6]
	push eax
	call CoTaskMemAlloc
	test eax,eax
	jne Block4

 Block3:
	xor esi,esi
	jmp Block5

 Block4:
	lea ecx,[esi+esi]
	mov dword ptr [eax],ecx
	add eax,4
	xor edx,edx
	mov word ptr [ecx+eax],dx
	mov esi,eax

 Block5:
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	mov eax,esi
	pop esi
	pop edi
	ret 4
}
}
// ZComAPI__ZComVariantChangeType
__SUB(00001670, __cdecl, 146684,  HRESULT, tagVARIANT*, tagVARIANT*, uint16_t, uint16_t) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,dword ptr [esp+0x24]
	cmp bx,8
	jne Block2

 Block1:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x18]
	push eax
	push ecx
	call ZComAPI::ZComVarBstrFromVariant
	add esp,8
	pop ebx
	add esp,0x10
	ret

 Block2:
	push esi
	mov esi,dword ptr [esp+0x1C]
	push edi
	mov edi,dword ptr [esp+0x24]
	cmp esi,edi
	jne Block7

 Block3:
	cmp word ptr [edi],8
	jne Block7

 Block4:
	mov eax,dword ptr [esp+0x28]
	push ebx
	push eax
	push edi
	lea ecx,[esp+0x18]
	xor edx,edx
	push ecx
	mov word ptr [esp+0x1C],dx
	call dword ptr [ZImports::_VariantChangeType]
	mov edi,eax
	test edi,edi
	jl Block6

 Block5:
	push esi
	call ZComAPI::ZComVariantClear
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [esi],edx
	mov edx,dword ptr [esp+0x1C]
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],ecx
	add esp,4
	mov dword ptr [esi+0xC],edx

 Block6:
	mov eax,edi
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret

 Block7:
	cmp word ptr [esi],8
	jne Block10

 Block8:
	xor eax,eax
	mov word ptr [esi],ax
	mov eax,dword ptr [esi+8]
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block10:
	mov ecx,dword ptr [esp+0x28]
	push ebx
	push ecx
	push edi
	push esi
	call dword ptr [ZImports::_VariantChangeType]
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret
}
}
// CSpriteSource::~CSpriteSource
__SUB_CLASS_THIS0(000054F0, __thiscall, 20625,  CSpriteSource, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x30]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov ecx,dword ptr [esi+0x14]
	test ecx,ecx
	je Block4

 Block3:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x14],0

 Block4:
	mov ecx,dword ptr [esi+0x10]
	test ecx,ecx
	je Block6

 Block5:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x10],0

 Block6:
	mov ecx,dword ptr [esi+0xC]
	test ecx,ecx
	je Block8

 Block7:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0xC],0

 Block8:
	int 3 // TODO: 		mov dword ptr [esi],offset ZRefCounted::`vftable'
	pop esi
	ret
}
}
// CTerminateException::~CTerminateException
__SUB_CLASS_THIS0(00001D70, __thiscall, 117806,  CTerminateException, void) {
__asm {

 Block0:
	ret
}
}
// CActionFrame::GetSMapper
__SUB0(00318120, __cdecl, 20646,  _x_com_ptr<IWzProperty>) {
__asm {

 Block0:
	push ecx
	cmp dword ptr [CActionFrame::s_pSMapper],0
	mov dword ptr [esp],0
	jne Block2

 Block1:
	call CActionFrame::LoadMappers

 Block2:
	mov eax,dword ptr [CActionFrame::s_pSMapper]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esi],eax
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	mov eax,esi
	pop esi
	pop ecx
	ret
}
}
// ZStrUtil___ConvReqSize
__SUB(00001150, __cdecl, 146675,  int32_t, const char*, wchar_t*, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [esp+4]
	push 0
	push 0
	push eax
	push ecx
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	ret
}
}
// CSpriteSource::QueryZ
_SUB_EXCEPTION_HANDLER(3182E0)
__SUB(003182E0, __cdecl, 20618,  long, NakedParam<_x_com_ptr<IWzProperty>>, const Ztl_bstr_t*, Ztl_bstr_t*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3182E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x60]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	sete cl
	mov dword ptr [esp+0x68],0
	test cl,cl
	je Block4

 Block1:
	mov dword ptr [esp+0x68],0xFFFFFFFF
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	xor eax,eax
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x5C
	ret

 Block4:
	lea eax,[esp+0x10]
	push eax
	call CActionFrame::GetZMapper
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x3E7
	push ecx
	mov byte ptr [esp+0x74],1
	mov dword ptr [esp+0x20],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x74]
	mov byte ptr [esp+0x6C],2
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x70],1
	call IWzProperty::Getitem
	cmp word ptr [esp+0x20],0
	mov byte ptr [esp+0x68],3
	je Block37

 Block7:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x44]
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	push 3
	push 0
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x4C]
	push ecx
	mov byte ptr [esp+0x78],4
	call ZComAPI::ZComVariantChangeType
	add esp,0x10
	test eax,eax
	jge Block11

 Block10:
	mov dword ptr [esp+0x14],0x80000000
	jmp Block12

 Block11:
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [esp+0x14],edx

 Block12:
	lea eax,[esp+0x20]
	push eax
	mov ecx,eax
	push ecx
	call ZComAPI::ZComVarBstrFromVariant
	add esp,8
	test eax,eax
	jl Block32

 Block13:
	mov edx,dword ptr [esp+0x28]
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push edx
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [esp+0x14]
	mov byte ptr [esp+0x6C],5
	test esi,esi
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea eax,[esp+0x34]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x70],4
	call IWzProperty::Getitem
	cmp word ptr [esp+0x30],0
	mov byte ptr [esp+0x68],6
	je Block18

 Block16:
	push 3
	lea ecx,[esp+0x34]
	push 0
	push ecx
	mov edx,ecx
	push edx
	call ZComAPI::ZComVariantChangeType
	add esp,0x10
	test eax,eax
	jl Block18

 Block17:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x14],eax

 Block18:
	mov edi,dword ptr [esp+0x74]
	test edi,edi
	je Block28

 Block19:
	mov ebp,dword ptr [esp+0x78]
	test ebp,ebp
	je Block28

 Block20:
	lea ecx,[esp+0x18]
	push ecx
	call CActionFrame::GetSMapper
	lea edx,[esp+0x24]
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x70],7
	call _xbstr_t::_ctor_3
	mov esi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x6C],8
	test esi,esi
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea eax,[esp+0x54]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x70],7
	call IWzProperty::Getitem
	lea ecx,[esp+0x50]
	push ecx
	mov edx,ecx
	push edx
	mov byte ptr [esp+0x70],9
	call ZComAPI::ZComVarBstrFromVariant
	add esp,8
	test eax,eax
	jl Block27

 Block23:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block25

 Block24:
	mov eax,dword ptr [eax]
	jmp Block26

 Block25:
	xor eax,eax

 Block26:
	mov ecx,dword ptr [esp+0x58]
	push ecx
	push eax
	lea edx,[esp+0x24]
	push edx
	call CommonSlot
	add esp,0xC
	push eax
	mov ecx,ebp
	call Ztl_bstr_t::op_assign
	lea ecx,[esp+0x1C]
	call Ztl_bstr_t::~Ztl_bstr_t

 Block27:
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0x6C],6
	call ecx
	mov esi,dword ptr [esp+0x10]

 Block28:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x68],4
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block33

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block31:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]
	jmp Block33

 Block32:
	mov esi,dword ptr [esp+0x10]

 Block33:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x68],3
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block38

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block36:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]
	jmp Block38

 Block37:
	mov esi,dword ptr [esp+0x10]

 Block38:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x68],1
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov byte ptr [esp+0x68],0
	test esi,esi
	je Block44

 Block43:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block44:
	mov eax,dword ptr [esp+0x70]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	test eax,eax
	je Block46

 Block45:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block46:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x5C
	ret
}
}
// CSpriteSource::Init
_SUB_EXCEPTION_HANDLER(318630)
__SUB_CLASS_THIS(00318630, __thiscall, 20614,  CSpriteSource, void, const Ztl_bstr_t&, const Ztl_bstr_t&, IWzCanvas*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_318630
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x18],ebp
	mov edi,dword ptr [esp+0x40]
	mov eax,dword ptr [edi]
	test eax,eax
	je Block3

 Block1:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block3

 Block2:
	mov eax,dword ptr [eax-4]
	shr eax,1
	jne Block7

 Block3:
	mov ebx,dword ptr [esp+0x44]
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block8

 Block4:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block8

 Block5:
	mov eax,dword ptr [eax-4]
	shr eax,1
	je Block8

 Block6:
	push 0x22000006
	lea ecx,[esp+0x48]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+0x44]
	push offset CTerminateException::THROW_INFO
	lea ecx,[esp+0x4C]
	push ecx
	mov dword ptr [esp+0x50],eax
	call _CxxThrowException

 Block7:
	mov ebx,dword ptr [esp+0x44]

 Block8:
	lea esi,[ebp+0x10]
	cmp esi,edi
	je Block13

 Block9:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block11

 Block10:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block11:
	mov eax,dword ptr [edi]
	mov dword ptr [esi],eax
	test eax,eax
	je Block13

 Block12:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block13:
	lea esi,[ebp+0xC]
	cmp esi,ebx
	je Block18

 Block14:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block16

 Block15:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block16:
	mov eax,dword ptr [ebx]
	mov dword ptr [esi],eax
	test eax,eax
	je Block18

 Block17:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block18:
	mov esi,dword ptr [ebp+0x30]
	mov ebx,dword ptr [esp+0x48]
	cmp esi,ebx
	je Block23

 Block19:
	mov dword ptr [ebp+0x30],ebx
	test ebx,ebx
	je Block21

 Block20:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push ebx
	call eax

 Block21:
	test esi,esi
	je Block23

 Block22:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block23:
	lea eax,[esp+0x48]
	push eax
	call CActionFrame::GetZMapper
	add esp,4
	xor edi,edi
	push 0xA
	mov dword ptr [esp+0x3C],edi
	mov dword ptr [ebp+0x18],0x80000001
	call CoTaskMemAlloc
	cmp eax,edi
	je Block25

 Block24:
	mov dword ptr [eax],4
	add eax,4
	xor ecx,ecx
	mov word ptr [eax+4],cx
	mov edi,eax

 Block25:
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	xor ebp,ebp
	cmp eax,ebp
	je Block27

 Block26:
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],1
	mov dword ptr [eax],edi
	mov ebp,eax

 Block27:
	mov byte ptr [esp+0x38],0
	mov dword ptr [esp+0x1C],ebp
	test ebp,ebp
	jne Block29

 Block28:
	push 0x8007000E
	call _com_issue_error

 Block29:
	mov edx,dword ptr [esp+0x40]
	mov eax,dword ptr [edx]
	test eax,eax
	je Block31

 Block30:
	mov esi,dword ptr [eax]
	jmp Block32

 Block31:
	xor esi,esi

 Block32:
	movzx eax,word ptr [esi]
	test ax,ax
	je Block45

 Block33:
	mov word ptr [edi],ax
	mov ax,word ptr [esi+2]
	push ecx
	mov word ptr [edi+2],ax
	mov eax,esp
	mov dword ptr [eax],ebp
	lea eax,[ebp+8]
	mov dword ptr [esp+0x44],esp
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x3C],3
	test ecx,ecx
	je Block64

 Block34:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x40],2
	call IWzProperty::Getitem
	mov ax,word ptr [esp+0x20]
	mov byte ptr [esp+0x38],4
	test ax,ax
	je Block65

 Block35:
	mov ecx,3
	cmp cx,ax
	je Block38

 Block36:
	push ecx
	lea edx,[esp+0x24]
	push 0
	push edx
	mov eax,edx
	push eax
	call ZComAPI::ZComVariantChangeType
	add esp,0x10
	test eax,eax
	jl Block66

 Block37:
	mov ax,word ptr [esp+0x20]

 Block38:
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x18]
	cmp dword ptr [edx+0x18],ecx
	jge Block40

 Block39:
	mov dword ptr [edx+0x18],ecx

 Block40:
	add esi,4
	mov byte ptr [esp+0x38],2
	cmp ax,8
	jne Block43

 Block41:
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test ecx,ecx
	je Block44

 Block42:
	lea eax,[ecx-4]
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block44:
	movzx eax,word ptr [esi]
	test ax,ax
	jne Block33

 Block45:
	mov ecx,ebp
	mov byte ptr [esp+0x38],0
	call _xbstr_t::Data_t::Release
	mov edi,dword ptr [esp+0x18]
	lea esi,[edi+0x14]
	lea eax,[esp+0x40]
	xor ebp,ebp
	cmp esi,eax
	je Block49

 Block46:
	mov ecx,dword ptr [esi]
	cmp ecx,ebp
	je Block48

 Block47:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],ebp

 Block48:
	mov dword ptr [esi],ebp

 Block49:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x40]
	push edx
	push ebx
	mov dword ptr [esp+0x48],ebp
	call eax
	cmp eax,ebp
	jge Block51

 Block50:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block51:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr [edi+0x1C],ecx
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x40]
	push eax
	push ebx
	mov dword ptr [esp+0x48],ebp
	call ecx
	cmp eax,ebp
	jge Block53

 Block52:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block53:
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [edi+0x20],edx
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x6C]
	lea ecx,[esp+0x40]
	push ecx
	push ebx
	mov dword ptr [esp+0x48],ebp
	call edx
	cmp eax,ebp
	jge Block55

 Block54:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block55:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [edi+0x28],eax
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x74]
	lea edx,[esp+0x40]
	push edx
	push ebx
	mov dword ptr [esp+0x48],ebp
	call eax
	cmp eax,ebp
	jge Block57

 Block56:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block57:
	mov ecx,dword ptr [esp+0x40]
	lea edx,[esp+0x18]
	mov dword ptr [edi+0x2C],ecx
	push edx
	mov ecx,ebx
	call IWzCanvas::Getproperty
	mov eax,dword ptr [esp+0x44]
	push esi
	mov esi,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov eax,esp
	mov byte ptr [esp+0x44],5
	mov dword ptr [esp+0x50],esp
	mov dword ptr [eax],esi
	cmp esi,ebp
	je Block59

 Block58:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block59:
	call CSpriteSource::QueryZ
	add esp,0xC
	mov dword ptr [edi+0x24],eax
	mov byte ptr [esp+0x38],0
	cmp esi,ebp
	je Block61

 Block60:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block61:
	mov eax,dword ptr [esp+0x48]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebp
	je Block63

 Block62:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block63:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 0xC

 Block64:
	push 0x80004003
	call _com_issue_error

 Block65:
	push 0x22000006
	lea ecx,[esp+0x48]
	call CMSException::_ctor_0
	mov ecx,dword ptr [esp+0x44]
	push offset CTerminateException::THROW_INFO
	lea edx,[esp+0x44]
	push edx
	mov dword ptr [esp+0x48],ecx
	call _CxxThrowException

 Block66:
	push eax
	call _com_issue_error
}
}
// ZStrUtil___Conv
__SUB(00001170, __cdecl, 146676,  wchar_t*, const char*, wchar_t*, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [esp+0xC]
	push 0x3FFFFFFF
	push esi
	push eax
	push ecx
	push 0
	push 0
	call MultiByteToWideChar
	mov eax,esi
	pop esi
	ret
}
}
// CActionFrame::MergeGroup
_SUB_EXCEPTION_HANDLER(5C00)
__SUB_CLASS_THIS(00005C00, __thiscall, 20660,  CActionFrame, void, __POSITION*, __POSITION*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5C00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x20],ecx
	mov eax,dword ptr [esp+0x5C]
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [esp+0x60]
	mov esi,dword ptr [edx+4]
	xor edi,edi
	mov dword ptr [esp+0x14],ecx
	xor ecx,ecx
	mov dword ptr [esp+0x1C],esi
	xor ebx,ebx
	mov dword ptr [esp+0x30],edi
	mov dword ptr [esp+0x34],edi
	mov dword ptr [esp+0x28],edi
	mov dword ptr [esp+0x2C],edi
	mov dword ptr [esp+0x38],0
	mov dword ptr [esp+0x40],edi
	mov dword ptr [esp+0x44],ecx
	mov dword ptr [esp+0x48],edi
	mov eax,dword ptr [esi+0xC]
	mov dword ptr [esp+0x54],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,edi
	je Block31

 Block1:
	jmp Block3

 Block2:
	xor edi,edi

 Block3:
	lea eax,[esp+0x18]
	push eax
	call ZList<CActionFrame::MAPINFO>::GetNext
	mov ecx,dword ptr [esp+0x18]
	mov ebp,eax
	mov eax,dword ptr [ecx+0xC]
	add esp,4
	mov dword ptr [esp+0x5C],eax
	cmp eax,edi
	je Block16

 Block4:
	mov esi,dword ptr [ebp]

 Block5:
	lea edx,[esp+0x5C]
	push edx
	call ZList<CActionFrame::MAPINFO>::GetNext
	mov edi,eax
	mov eax,dword ptr [edi]
	add esp,4
	cmp esi,eax
	je Block53

 Block6:
	test esi,esi
	jne Block10

 Block7:
	test eax,eax
	je Block53

 Block8:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block53

 Block9:
	mov eax,dword ptr [eax-4]
	shr eax,1
	jmp Block14

 Block10:
	test eax,eax
	jne Block13

 Block11:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block53

 Block12:
	mov ecx,dword ptr [eax-4]
	shr ecx,1
	jmp Block14

 Block13:
	push eax
	mov ecx,esi
	call _xbstr_t::Data_t::Compare
	test eax,eax

 Block14:
	je Block53

 Block15:
	cmp dword ptr [esp+0x5C],0
	jne Block5

 Block16:
	lea ecx,[esp+0x38]
	call ZList<CActionFrame::MAPINFO>::AddTail_
	mov edi,eax
	cmp edi,ebp
	je Block28

 Block17:
	mov esi,dword ptr [edi]
	test esi,esi
	je Block26

 Block18:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block25

 Block19:
	test esi,esi
	je Block25

 Block20:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block22:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block24

 Block23:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block24:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block25:
	mov dword ptr [edi],0

 Block26:
	mov eax,dword ptr [ebp]
	mov dword ptr [edi],eax
	test eax,eax
	je Block28

 Block27:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block28:
	mov ecx,dword ptr [ebp+4]
	mov dword ptr [edi+4],ecx
	mov edx,dword ptr [ebp+8]
	mov dword ptr [edi+8],edx

 Block29:
	cmp dword ptr [esp+0x18],0
	jne Block2

 Block30:
	mov ecx,dword ptr [esp+0x44]
	mov esi,dword ptr [esp+0x1C]

 Block31:
	mov eax,dword ptr [esp+0x28]
	cdq
	idiv ebx
	mov edi,eax
	mov eax,dword ptr [esp+0x30]
	cdq
	idiv ebx
	mov ebp,eax
	mov eax,dword ptr [esp+0x2C]
	cdq
	idiv ebx
	sub ebp,edi
	mov dword ptr [esp+0x5C],eax
	mov eax,dword ptr [esp+0x34]
	cdq
	idiv ebx
	mov edi,eax
	mov eax,dword ptr [esp+0x5C]
	sub edi,eax
	mov dword ptr [esp+0x34],edi
	mov dword ptr [esp+0x5C],ecx
	test ecx,ecx
	je Block47

 Block32:
	lea eax,[esp+0x5C]
	push eax
	call ZList<CActionFrame::MAPINFO>::GetNext
	mov ecx,dword ptr [esp+0x18]
	add esp,4
	mov ebx,eax
	call ZList<CActionFrame::MAPINFO>::AddTail_
	mov esi,eax
	cmp esi,ebx
	je Block45

 Block33:
	mov edi,dword ptr [esi]
	test edi,edi
	je Block42

 Block34:
	lea ecx,[edi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block41

 Block35:
	test edi,edi
	je Block41

 Block36:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block38

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block38:
	mov eax,dword ptr [edi+4]
	test eax,eax
	je Block40

 Block39:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block40:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block41:
	mov dword ptr [esi],0

 Block42:
	mov eax,dword ptr [ebx]
	mov dword ptr [esi],eax
	test eax,eax
	je Block44

 Block43:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block44:
	mov edi,dword ptr [esp+0x34]

 Block45:
	mov edx,dword ptr [ebx+4]
	mov dword ptr [esi+4],edx
	mov eax,dword ptr [ebx+8]
	add dword ptr [esi+4],ebp
	mov dword ptr [esi+8],eax
	add dword ptr [esi+8],edi
	cmp dword ptr [esp+0x5C],0
	jne Block32

 Block46:
	mov esi,dword ptr [esp+0x1C]

 Block47:
	mov ebx,dword ptr [esp+0x20]
	mov eax,dword ptr [ebx+0x10]
	mov dword ptr [esp+0x5C],eax
	test eax,eax
	je Block52

 Block48:
	mov edi,edi

 Block49:
	lea ecx,[esp+0x5C]
	push ecx
	call ZList<ZRef<CSpriteInstance>>::GetNext
	mov eax,dword ptr [eax+4]
	add esp,4
	cmp dword ptr [eax+0x18],esi
	jne Block51

 Block50:
	mov edx,dword ptr [esp+0x14]
	add dword ptr [eax+0xC],ebp
	add dword ptr [eax+0x10],edi
	mov dword ptr [eax+0x18],edx

 Block51:
	cmp dword ptr [esp+0x5C],0
	jne Block49

 Block52:
	mov eax,dword ptr [esp+0x60]
	push eax
	lea ecx,[ebx+0x3C]
	call ZList<ZRef<ZList<CActionFrame::MAPINFO>>>::RemoveAt
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	mov dword ptr [esp+0x38],0
	call ZList<CActionFrame::MAPINFO>::RemoveAll
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret 8

 Block53:
	mov edx,dword ptr [edi+4]
	add dword ptr [esp+0x30],edx
	mov eax,dword ptr [edi+8]
	mov ecx,dword ptr [ebp+4]
	mov edx,dword ptr [ebp+8]
	add dword ptr [esp+0x34],eax
	add dword ptr [esp+0x28],ecx
	inc ebx
	add dword ptr [esp+0x2C],edx
	jmp Block29
}
}
