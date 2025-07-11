#include "regen.hpp"
// PortalList.ipp
#include "PortalList.hpp"

// CPortalList::FindPortal
__SUB_CLASS_THIS(002AB230, __thiscall, 52785,  CPortalList, const PORTAL*, long, long, long) {
__asm {

 Block0:
	sub esp,0x14
	mov eax,dword ptr [ecx+4]
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x20]
	push esi
	push edi
	mov dword ptr [esp+0x10],ecx
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	lea ebx,[eax-1]
	test ebx,ebx
	jl Block8

 Block3:
	mov edi,dword ptr [esp+0x30]

 Block4:
	mov eax,dword ptr [ecx+4]
	mov esi,dword ptr [eax+ebx*8+4]
	cmp dword ptr [esi+8],0
	je Block7

 Block5:
	mov ecx,dword ptr [esi+0x10]
	mov eax,dword ptr [esi+0xC]
	lea edx,[ecx+0x32]
	push edx
	lea edx,[eax+edi]
	push edx
	add ecx,0xFFFFFFCE
	push ecx
	sub eax,edi
	push eax
	lea eax,[esp+0x24]
	push eax
	call SetRect
	mov eax,dword ptr [esp+0x2C]
	push eax
	push ebp
	lea ecx,[esp+0x1C]
	push ecx
	call PtInRect
	test eax,eax
	jne Block9

 Block6:
	mov ecx,dword ptr [esp+0x10]

 Block7:
	sub ebx,1
	jns Block4

 Block8:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x14
	ret 0xC

 Block9:
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 0xC
}
}
// CPortalList::GetPropPSH
_SUB_EXCEPTION_HANDLER(2AC470)
__SUB_CLASS_THIS0(002AC470, __thiscall, 52795,  CPortalList, _x_com_ptr<IWzProperty>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2AC470
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x5C]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],ecx
	mov dword ptr [esp+0x10],0
	cmp dword ptr [ecx+0x28],0
	sete al
	test al,al
	je Block56

 Block1:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call esi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0x68],0
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	push 0
	push 0
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x6DA
	mov bl,1
	push eax
	mov byte ptr [esp+0x80],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],2
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0x7C],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x14],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block10

 Block8:
	cmp eax,0x80004002
	je Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x64],5
	cmp word ptr [esp+0x3C],si
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea eax,[esp+0x3C]
	push eax
	call edi

 Block14:
	mov byte ptr [esp+0x64],6
	cmp word ptr [esp+0x1C],si
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[esp+0x1C]
	push edx
	call edi

 Block18:
	mov bl,7
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x2C],si
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block22:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x5EE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x70],8
	test ecx,ecx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea eax,[esp+0x58]
	push eax
	mov byte ptr [esp+0x74],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x6C],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block27

 Block25:
	cmp eax,0x80004002
	je Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x4C],si
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x4C]
	push edx
	call edi

 Block31:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x6DB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x70],0xA
	test ecx,ecx
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	lea edx,[esp+0x58]
	push edx
	mov byte ptr [esp+0x74],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x6C],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block36

 Block34:
	cmp eax,0x80004002
	je Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x4C],si
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[esp+0x4C]
	push ecx
	call edi

 Block40:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1134
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x70],0xC
	test ecx,ecx
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	lea eax,[esp+0x58]
	push eax
	mov byte ptr [esp+0x74],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x6C],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block45

 Block43:
	cmp eax,0x80004002
	je Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x4C],si
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea edx,[esp+0x4C]
	push edx
	call edi

 Block49:
	mov eax,dword ptr [esp+0x14]
	mov edi,dword ptr [eax+0x28]
	mov esi,dword ptr [esp+0x10]
	cmp edi,esi
	je Block54

 Block50:
	mov ecx,eax
	mov dword ptr [ecx+0x28],esi
	test esi,esi
	je Block52

 Block51:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block52:
	test edi,edi
	je Block54

 Block53:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block54:
	mov dword ptr [esp+0x64],0xFFFFFFFF
	test esi,esi
	je Block56

 Block55:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block56:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx+0x28]
	mov esi,dword ptr [esp+0x6C]
	mov dword ptr [esi],eax
	test eax,eax
	je Block58

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block58:
	mov eax,esi
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x58
	ret 4
}
}
// CPortalList::GetPropPV
_SUB_EXCEPTION_HANDLER(2ABC90)
__SUB_CLASS_THIS0(002ABC90, __thiscall, 52795,  CPortalList, _x_com_ptr<IWzProperty>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2ABC90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x5C]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],ecx
	mov dword ptr [esp+0x10],0
	cmp dword ptr [ecx+0x24],0
	sete al
	test al,al
	je Block56

 Block1:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call esi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0x68],0
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	push 0
	push 0
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x6DA
	mov bl,1
	push eax
	mov byte ptr [esp+0x80],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],2
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0x7C],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x14],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block10

 Block8:
	cmp eax,0x80004002
	je Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x64],5
	cmp word ptr [esp+0x3C],si
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea eax,[esp+0x3C]
	push eax
	call edi

 Block14:
	mov byte ptr [esp+0x64],6
	cmp word ptr [esp+0x1C],si
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[esp+0x1C]
	push edx
	call edi

 Block18:
	mov bl,7
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x2C],si
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block22:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x5EE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x70],8
	test ecx,ecx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea eax,[esp+0x58]
	push eax
	mov byte ptr [esp+0x74],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x6C],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block27

 Block25:
	cmp eax,0x80004002
	je Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x4C],si
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x4C]
	push edx
	call edi

 Block31:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x6DB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x70],0xA
	test ecx,ecx
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	lea edx,[esp+0x58]
	push edx
	mov byte ptr [esp+0x74],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x6C],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block36

 Block34:
	cmp eax,0x80004002
	je Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x4C],si
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[esp+0x4C]
	push ecx
	call edi

 Block40:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x6D9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x70],0xC
	test ecx,ecx
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	lea eax,[esp+0x58]
	push eax
	mov byte ptr [esp+0x74],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x6C],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block45

 Block43:
	cmp eax,0x80004002
	je Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x4C],si
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea edx,[esp+0x4C]
	push edx
	call edi

 Block49:
	mov eax,dword ptr [esp+0x14]
	mov edi,dword ptr [eax+0x24]
	mov esi,dword ptr [esp+0x10]
	cmp edi,esi
	je Block54

 Block50:
	mov ecx,eax
	mov dword ptr [ecx+0x24],esi
	test esi,esi
	je Block52

 Block51:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block52:
	test edi,edi
	je Block54

 Block53:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block54:
	mov dword ptr [esp+0x64],0xFFFFFFFF
	test esi,esi
	je Block56

 Block55:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block56:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx+0x24]
	mov esi,dword ptr [esp+0x6C]
	mov dword ptr [esi],eax
	test eax,eax
	je Block58

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block58:
	mov eax,esi
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x58
	ret 4
}
}
// CPortalList::SetHiddenPortal
_SUB_EXCEPTION_HANDLER(2AC860)
__SUB_CLASS_THIS(002AC860, __thiscall, 52793,  CPortalList, void, NakedParam<ZRef<PORTAL>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2AC860
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	xor ecx,ecx
	mov dword ptr [esp+0x14],ecx
	mov eax,dword ptr [esp+0x64]
	mov dword ptr [esp+0x58],ecx
	cmp eax,ecx
	je Block4

 Block1:
	mov ecx,dword ptr [eax+8]
	cmp ecx,0xA
	je Block4

 Block2:
	cmp ecx,0xB
	je Block4

 Block3:
	lea ecx,[esp+0x60]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call ZRef<PORTAL>::~ZRef<PORTAL>
	jmp Block127

 Block4:
	mov esi,dword ptr [ebp+0x30]
	cmp esi,eax
	je Block123

 Block5:
	mov dword ptr [ebp+0x30],eax
	test esi,esi
	je Block65

 Block6:
	cmp dword ptr [esi+8],0xA
	jne Block8

 Block7:
	lea eax,[esp+0x20]
	push eax
	mov ecx,ebp
	call CPortalList::GetPropPH
	mov ebx,1
	mov byte ptr [esp+0x58],1
	mov dword ptr [esp+0x14],ebx
	jmp Block9

 Block8:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebp
	call CPortalList::GetPropPSH
	mov dword ptr [esp+0x14],2
	mov ebx,dword ptr [esp+0x14]

 Block9:
	mov edi,dword ptr [eax]
	mov dword ptr [esp+0x18],edi
	test edi,edi
	je Block11

 Block10:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block11:
	mov dword ptr [esp+0x58],2
	test bl,2
	je Block14

 Block12:
	mov eax,dword ptr [esp+0x1C]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov byte ptr [esp+0x58],3
	test bl,1
	je Block17

 Block15:
	mov eax,dword ptr [esp+0x20]
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	mov eax,dword ptr [esi+0x30]
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x64],4
	test edi,edi
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea eax,[esp+0x4C]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x68],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x60],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block22

 Block20:
	cmp eax,0x80004002
	je Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	mov edi,8
	mov byte ptr [esp+0x58],3
	cmp word ptr [esp+0x40],di
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x1137
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x64],6
	test ecx,ecx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea edx,[esp+0x4C]
	push edx
	mov byte ptr [esp+0x68],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x60],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block31

 Block29:
	cmp eax,0x80004002
	je Block31

 Block30:
	push eax
	call _com_issue_error

 Block31:
	mov byte ptr [esp+0x58],3
	cmp word ptr [esp+0x40],di
	jne Block34

 Block32:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	push 0
	push 0xFF
	push 0xC0041F78
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [eax],0
	mov edx,dword ptr [esi+0x10]
	mov eax,dword ptr [esi+0xC]
	push edx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [eax],0
	mov eax,esp
	mov byte ptr [esp+0x7C],8
	mov dword ptr [esp+0x50],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block37

 Block36:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ecx
	call eax

 Block37:
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x80],3
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x3C]
	add esp,0x28
	cmp esi,eax
	je Block42

 Block38:
	mov dword ptr [ebp+0x3C],eax
	test eax,eax
	je Block40

 Block39:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block40:
	test esi,esi
	je Block42

 Block41:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block42:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block44:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	lea edx,[esp+0x30]
	mov bl,9
	push edx
	mov byte ptr [esp+0x5C],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	xor edi,edi
	add esp,8
	cmp eax,edi
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	mov ecx,dword ptr [ebp+0x3C]
	mov byte ptr [esp+0x58],0xA
	cmp ecx,edi
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x34]
	push eax
	push edi
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x30],si
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,edi
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov byte ptr [esp+0x58],3
	cmp word ptr [esp+0x40],si
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,edi
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov eax,dword ptr [ebp+0x38]
	cmp eax,edi
	je Block60

 Block59:
	mov dword ptr [ebp+0x38],edi
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block60:
	mov eax,dword ptr [ebp+0x34]
	cmp eax,edi
	je Block62

 Block61:
	mov dword ptr [ebp+0x34],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block62:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x58],0
	cmp eax,edi
	je Block64

 Block63:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block64:
	mov eax,dword ptr [esp+0x64]

 Block65:
	cmp dword ptr [ebp+0x30],0
	je Block123

 Block66:
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block68

 Block67:
	mov dword ptr [ebp+0x38],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block68:
	mov eax,dword ptr [ebp+0x30]
	cmp dword ptr [eax+8],0xA
	jne Block70

 Block69:
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,ebp
	call CPortalList::GetPropPH
	or dword ptr [esp+0x14],4
	mov byte ptr [esp+0x58],0xB
	mov edi,8
	jmp Block71

 Block70:
	lea edx,[esp+0x24]
	push edx
	mov ecx,ebp
	call CPortalList::GetPropPSH
	mov edi,8
	or dword ptr [esp+0x14],edi

 Block71:
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x18],esi
	test esi,esi
	je Block73

 Block72:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block73:
	test byte ptr [esp+0x14],8
	mov dword ptr [esp+0x58],0xC
	je Block76

 Block74:
	mov eax,dword ptr [esp+0x24]
	and dword ptr [esp+0x14],0xFFFFFFF7
	test eax,eax
	je Block76

 Block75:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block76:
	test byte ptr [esp+0x14],4
	mov byte ptr [esp+0x58],0xD
	je Block79

 Block77:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block79

 Block78:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block79:
	mov eax,dword ptr [ebp+0x30]
	mov eax,dword ptr [eax+0x30]
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x64],0xE
	test esi,esi
	jne Block81

 Block80:
	push 0x80004003
	call _com_issue_error

 Block81:
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x68],0xD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x60],0xF
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block84

 Block82:
	cmp eax,0x80004002
	je Block84

 Block83:
	push eax
	call _com_issue_error

 Block84:
	mov byte ptr [esp+0x58],0xD
	cmp word ptr [esp+0x40],di
	jne Block87

 Block85:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block88:
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x1135
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x64],0x10
	test ecx,ecx
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	lea edx,[esp+0x4C]
	push edx
	mov byte ptr [esp+0x68],0xD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x60],0x11
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block93

 Block91:
	cmp eax,0x80004002
	je Block93

 Block92:
	push eax
	call _com_issue_error

 Block93:
	mov byte ptr [esp+0x58],0xD
	cmp word ptr [esp+0x40],di
	jne Block96

 Block94:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block97:
	push 0
	push 0xFF
	push 0xC0041F78
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [eax],0
	mov eax,dword ptr [ebp+0x30]
	mov edx,dword ptr [eax+0x10]
	mov eax,dword ptr [eax+0xC]
	mov edi,dword ptr [esp+0x28]
	push edx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	push 0
	push ecx
	mov dword ptr [eax],0
	mov eax,esp
	mov byte ptr [esp+0x7C],0x12
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block99

 Block98:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block99:
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x80],0xD
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x34]
	add esp,0x28
	cmp esi,eax
	je Block104

 Block100:
	mov dword ptr [ebp+0x34],eax
	test eax,eax
	je Block102

 Block101:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block102:
	test esi,esi
	je Block104

 Block103:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block104:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block106

 Block105:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block106:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block108

 Block107:
	push eax
	call _com_issue_error

 Block108:
	lea eax,[esp+0x40]
	mov bl,0x13
	push eax
	mov byte ptr [esp+0x5C],bl
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block110

 Block109:
	push eax
	call _com_issue_error

 Block110:
	mov ecx,dword ptr [ebp+0x34]
	mov byte ptr [esp+0x58],0x14
	test ecx,ecx
	jne Block112

 Block111:
	push 0x80004003
	call _com_issue_error

 Block112:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x44]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x40],si
	jne Block115

 Block113:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block116:
	mov byte ptr [esp+0x58],0xD
	cmp word ptr [esp+0x30],si
	jne Block119

 Block117:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block120:
	mov byte ptr [esp+0x58],0
	test edi,edi
	je Block122

 Block121:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block122:
	mov eax,dword ptr [esp+0x64]

 Block123:
	mov dword ptr [esp+0x58],0xFFFFFFFF
	test eax,eax
	je Block127

 Block124:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block127

 Block125:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block127

 Block126:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block127:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret 8
}
}
// CPortalList::~CPortalList
_SUB_EXCEPTION_HANDLER(2ABB40)
__SUB_CLASS_THIS0(002ABB40, __thiscall, 52779,  CPortalList, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2ABB40
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
	int 3// TODO: 	mov dword ptr [esi],offset CPortalList::`vftable'
	mov eax,dword ptr [esi+0x3C]
	mov dword ptr [esp+0x14],3
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x38]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x34]
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0x2C]
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x28]
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0x24]
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	lea ecx,[esi+0x10]
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<_x_com_ptr<IWzGr2DLayer>>::`vftable'
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	lea ecx,[esi+0xC]
	mov byte ptr [esp+0x14],2
	call ZArray<ZRef<PORTAL>>::RemoveAll
	lea ecx,[esi+8]
	mov byte ptr [esp+0x14],1
	call ZArray<ZRef<PORTAL>>::RemoveAll
	lea ecx,[esi+4]
	mov byte ptr [esp+0x14],0
	call ZArray<ZRef<PORTAL>>::RemoveAll
	mov dword ptr [TSingleton<CPortalList>::ms_pInstance],0
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CPortalList::FindPortalByName
__SUB_CLASS_THIS(002AB2C0, __thiscall, 52786,  CPortalList, const PORTAL*, const char*) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebx,ecx
	mov eax,dword ptr [ebx+4]
	push esi
	push edi
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	lea edi,[eax-1]
	test edi,edi
	jl Block7

 Block3:
	mov ebp,dword ptr [esp+0x14]
	jmp Block5

 Block5:
	mov eax,dword ptr [ebx+4]
	mov esi,dword ptr [eax+edi*8+4]
	mov eax,dword ptr [esi+4]
	push eax
	push ebp
	call lstrcmpiA
	test eax,eax
	je Block8

 Block6:
	sub edi,1
	jns Block5

 Block7:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	ret 4

 Block8:
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// GETCRC32String
_SUB_EXCEPTION_HANDLER(2AB880)
__SUB(002AB880, __cdecl, 134040,  unsigned long, NakedParam<ZXString<char>>, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2AB880
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x10],0
	test eax,eax
	je Block2

 Block1:
	mov esi,dword ptr [eax-4]
	jmp Block3

 Block2:
	xor esi,esi

 Block3:
	push 1
	push 0
	lea ecx,[esp+0x20]
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [esp+0x1C]
	push 0
	push 0
	push 0
	push ecx
	push esi
	push eax
	call CCrc32::GetCrc32
	add esp,0x18
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov esi,eax
	call ZXString<char>::ReleaseBuffer
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov eax,esi
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret
}
}
// CPortalList::FindPortal_Visible
__SUB_CLASS_THIS(002AB3B0, __thiscall, 52785,  CPortalList, const PORTAL*, long, long, long) {
__asm {

 Block0:
	sub esp,0x14
	mov eax,dword ptr [ecx+4]
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x20]
	push esi
	push edi
	mov dword ptr [esp+0x10],ecx
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	lea ebx,[eax-1]
	test ebx,ebx
	jl Block8

 Block3:
	mov edi,dword ptr [esp+0x30]

 Block4:
	mov eax,dword ptr [ecx+4]
	mov esi,dword ptr [eax+ebx*8+4]
	cmp dword ptr [esi+8],2
	jne Block7

 Block5:
	mov ecx,dword ptr [esi+0x10]
	mov eax,dword ptr [esi+0xC]
	lea edx,[ecx+0x32]
	push edx
	lea edx,[eax+edi]
	push edx
	add ecx,0xFFFFFFCE
	push ecx
	sub eax,edi
	push eax
	lea eax,[esp+0x24]
	push eax
	call SetRect
	mov eax,dword ptr [esp+0x2C]
	push eax
	push ebp
	lea ecx,[esp+0x1C]
	push ecx
	call PtInRect
	test eax,eax
	jne Block9

 Block6:
	mov ecx,dword ptr [esp+0x10]

 Block7:
	sub ebx,1
	jns Block4

 Block8:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x14
	ret 0xC

 Block9:
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 0xC
}
}
// CPortalList::RestorePortal
_SUB_EXCEPTION_HANDLER(2AD3C0)
// 6AE818
static uint8_t _SUB_2AD3C0_LOOKUP_TABLE_0[12] = {
0, 1, 0, 3, 3, 0, 3, 1, 2, 2, 1, 1, 
};
__SUB_CLASS_THIS(002AD3C0, __thiscall, 52782,  CPortalList, void, CField*, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2AD3C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1B0
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C4]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x1D8]
	xor edi,edi
	cmp eax,edi
	sete cl
	mov dword ptr [esp+0x1CC],edi
	test cl,cl
	je Block2

 Block1:
	cmp eax,edi
	jmp Block213

 Block2:
	mov ecx,dword ptr [esp+0x1D4]
	add ecx,0x16C
	call TSecType<unsigned long>::GetData
	push edi
	push edi
	push edi
	push edi
	mov dword ptr [esp+0x38],eax
	lea eax,[esp+0x38]
	push 4
	push eax
	call CCrc32::GetCrc32
	mov ecx,dword ptr [esp+0x1F0]
	add esp,0x18
	mov dword ptr [esi+0x40],eax
	cmp ecx,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[esp+0x70]
	push edx
	call IWzProperty::Get_NewEnum
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x1D0],1
	mov dword ptr [esp+0x50],edi
	mov dword ptr [esp+0x44],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	lea ecx,[esp+0x50]
	call _x_com_ptr<IEnumVARIANT>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0x1CC],3
	cmp eax,edi
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0x1CC],4
	mov dword ptr [esp+0x68],edi
	jmp Block13

 Block13:
	mov edi,dword ptr [esp+0x4C]
	test edi,edi
	je Block3

 Block14:
	mov ecx,dword ptr [edi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x68]
	push edx
	lea eax,[esp+0x58]
	push eax
	push 1
	push edi
	call ecx
	test eax,eax
	jne Block208

 Block15:
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x24]
	push eax
	call DetachBSTR
	add esp,8
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block17

 Block16:
	add ecx,8
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block17:
	mov ecx,dword ptr [esp+0x1E4]
	mov byte ptr [esp+0x1D8],6
	test ecx,ecx
	je Block3

 Block18:
	lea edx,[esp+0x130]
	push edx
	mov byte ptr [esp+0x1DC],5
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x1D4],7
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	test eax,eax
	je Block21

 Block19:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x64]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [esp+0x64]
	mov dword ptr [esp+0x18],ebx
	test eax,eax
	jge Block21

 Block20:
	cmp eax,0x80004002
	jne Block8

 Block21:
	mov ebp,8
	mov byte ptr [esp+0x1CC],9
	cmp word ptr [esp+0x124],bp
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x12C]
	xor ecx,ecx
	mov word ptr [esp+0x124],cx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[esp+0x124]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	push 0
	call AllocPortal //TODO(game) ZRefCounted_AllocHelper<ZRefCountedDummy<PORTAL>>::call
	lea edi,[eax+0x10]
	add esp,4
	mov dword ptr [eax+4],1
	mov dword ptr [esp+0x3C],edi
	mov eax,dword ptr [esi+4]
	mov byte ptr [esp+0x1CC],0xA
	test eax,eax
	je Block27

 Block26:
	mov eax,dword ptr [eax-4]

 Block27:
	push ecx
	mov dword ptr [edi],eax
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x6D5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x1D0],0xB
	test ebx,ebx
	je Block3

 Block28:
	lea ecx,[esp+0x1A8]
	push ecx
	mov ecx,ebx
	mov byte ptr [esp+0x1D4],0xA
	call IWzProperty::Getitem
	push eax
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x1D4],0xC
	call DetachBSTR
	add esp,8
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x1CC],0xD
	test eax,eax
	je Block30

 Block29:
	mov eax,dword ptr [eax]
	jmp Block31

 Block30:
	xor eax,eax

 Block31:
	push 0xFFFFFFFF
	lea ecx,[edi+4]
	push eax
	call ZXString<char>::AssignWideStr
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x1CC],0xC
	test eax,eax
	je Block40

 Block32:
	mov ebp,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block39

 Block33:
	test ebp,ebp
	je Block39

 Block34:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block36:
	mov eax,dword ptr [ebp+4]
	test eax,eax
	je Block38

 Block37:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block38:
	push ebp
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block39:
	mov dword ptr [esp+0x44],0
	mov ebp,8

 Block40:
	mov byte ptr [esp+0x1CC],0xA
	cmp word ptr [esp+0x1A4],bp
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [esp+0x1A4],ax
	mov eax,dword ptr [esp+0x1AC]
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea ecx,[esp+0x1A4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x6D6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0xC8]
	mov byte ptr [esp+0x1D0],0xE
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x1D4],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x1CC],0xF
	call _xvariant_t::op_long
	mov dword ptr [edi+8],eax
	mov byte ptr [esp+0x1CC],0xA
	cmp word ptr [esp+0xC4],bp
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0xCC]
	xor ecx,ecx
	mov word ptr [esp+0xC4],cx
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[esp+0xC4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x3E5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x148]
	push ecx
	mov byte ptr [esp+0x1D4],0x10
	mov ecx,ebx
	mov byte ptr [esp+0x1D4],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x1CC],0x11
	call _xvariant_t::op_long
	mov dword ptr [edi+0xC],eax
	mov byte ptr [esp+0x1CC],0xA
	cmp word ptr [esp+0x144],bp
	jne Block51

 Block49:
	mov eax,dword ptr [esp+0x14C]
	xor edx,edx
	mov word ptr [esp+0x144],dx
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea eax,[esp+0x144]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block52:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x3E6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0xE8]
	mov byte ptr [esp+0x1D0],0x12
	push edx
	mov ecx,ebx
	mov byte ptr [esp+0x1D4],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x1CC],0x13
	call _xvariant_t::op_long
	mov dword ptr [edi+0x10],eax
	mov byte ptr [esp+0x1CC],0xA
	cmp word ptr [esp+0xE4],bp
	jne Block55

 Block53:
	xor eax,eax
	mov word ptr [esp+0xE4],ax
	mov eax,dword ptr [esp+0xEC]
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea ecx,[esp+0xE4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	push 0x64
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1402
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x18C]
	mov byte ptr [esp+0x1D4],0x14
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x1D8],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x1D4],0x15
	call get_int32
	add esp,8
	mov dword ptr [edi+0x14],eax
	mov byte ptr [esp+0x1CC],0xA
	cmp word ptr [esp+0x184],bp
	jne Block59

 Block57:
	mov eax,dword ptr [esp+0x18C]
	xor ecx,ecx
	mov word ptr [esp+0x184],cx
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea edx,[esp+0x184]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	push 0x64
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x145F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x10C]
	push ecx
	mov byte ptr [esp+0x1D8],0x16
	mov ecx,ebx
	mov byte ptr [esp+0x1D8],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x1D4],0x17
	call get_int32
	add esp,8
	mov dword ptr [edi+0x18],eax
	mov byte ptr [esp+0x1CC],0xA
	cmp word ptr [esp+0x104],bp
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0x10C]
	xor edx,edx
	mov word ptr [esp+0x104],dx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea eax,[esp+0x104]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block64:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x6D7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x168]
	mov byte ptr [esp+0x1D0],0x18
	push edx
	mov ecx,ebx
	mov byte ptr [esp+0x1D4],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x1CC],0x19
	call _xvariant_t::op_long
	mov dword ptr [edi+0x1C],eax
	mov byte ptr [esp+0x1CC],0xA
	cmp word ptr [esp+0x164],bp
	jne Block67

 Block65:
	xor eax,eax
	mov word ptr [esp+0x164],ax
	mov eax,dword ptr [esp+0x16C]
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea ecx,[esp+0x164]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x6D8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x98]
	mov byte ptr [esp+0x1D0],0x1A
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x1D4],0xA
	call IWzProperty::Getitem
	push eax
	lea ecx,[esp+0x4C]
	push ecx
	mov byte ptr [esp+0x1D4],0x1B
	call DetachBSTR
	add esp,8
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x1CC],0x1C
	test eax,eax
	je Block70

 Block69:
	mov eax,dword ptr [eax]
	jmp Block71

 Block70:
	xor eax,eax

 Block71:
	push 0xFFFFFFFF
	lea ecx,[edi+0x20]
	push eax
	call ZXString<char>::AssignWideStr
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x1CC],0x1B
	test eax,eax
	je Block80

 Block72:
	mov ebp,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block79

 Block73:
	test ebp,ebp
	je Block79

 Block74:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block76

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block76:
	mov eax,dword ptr [ebp+4]
	test eax,eax
	je Block78

 Block77:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block78:
	push ebp
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block79:
	mov dword ptr [esp+0x48],0
	mov ebp,8

 Block80:
	mov byte ptr [esp+0x1CC],0xA
	cmp word ptr [esp+0x94],bp
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0x9C]
	xor edx,edx
	mov word ptr [esp+0x94],dx
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea eax,[esp+0x94]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block84:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x17F0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0xAC]
	mov byte ptr [esp+0x1D4],0x1D
	push edx
	mov ecx,ebx
	mov byte ptr [esp+0x1D8],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x1D4],0x1E
	call get_int32
	add esp,8
	cmp word ptr [esp+0xA4],8
	mov ebp,eax
	mov byte ptr [esp+0x1CC],0xA
	jne Block87

 Block85:
	xor eax,eax
	mov word ptr [esp+0xA4],ax
	mov eax,dword ptr [esp+0xAC]
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea ecx,[esp+0xA4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block88:
	test ebp,ebp
	je Block90

 Block89:
	mov ecx,dword ptr [esp+0x1D4]
	add ecx,0x16C
	call TSecType<unsigned long>::GetData
	mov dword ptr [edi+0x1C],eax

 Block90:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0xEE2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0xBC]
	mov byte ptr [esp+0x1D4],0x1F
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x1D8],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x1D4],0x20
	call get_int32
	mov ebp,8
	add esp,8
	mov dword ptr [edi+0x24],eax
	mov byte ptr [esp+0x1CC],0xA
	cmp word ptr [esp+0xB4],bp
	jne Block93

 Block91:
	mov eax,dword ptr [esp+0xBC]
	xor ecx,ecx
	mov word ptr [esp+0xB4],cx
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea edx,[esp+0xB4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block94:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1AA9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0xDC]
	push ecx
	mov byte ptr [esp+0x1D8],0x21
	mov ecx,ebx
	mov byte ptr [esp+0x1D8],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x1D4],0x22
	call get_int32
	add esp,8
	mov dword ptr [edi+0x2C],eax
	mov byte ptr [esp+0x1CC],0xA
	cmp word ptr [esp+0xD4],bp
	jne Block97

 Block95:
	mov eax,dword ptr [esp+0xDC]
	xor edx,edx
	mov word ptr [esp+0xD4],dx
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea eax,[esp+0xD4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block98:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1105
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0xFC]
	mov byte ptr [esp+0x1D4],0x23
	push edx
	mov ecx,ebx
	mov byte ptr [esp+0x1D8],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x1D4],0x24
	call get_int32
	add esp,8
	mov dword ptr [edi+0x28],eax
	mov byte ptr [esp+0x1CC],0xA
	cmp word ptr [esp+0xF4],bp
	jne Block101

 Block99:
	xor eax,eax
	mov word ptr [esp+0xF4],ax
	mov eax,dword ptr [esp+0xFC]
	test eax,eax
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea ecx,[esp+0xF4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block102:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x145E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x11C]
	mov byte ptr [esp+0x1D4],0x25
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x1D8],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x1D4],0x26
	call get_int32
	add esp,8
	mov dword ptr [edi+0x34],eax
	mov byte ptr [esp+0x1CC],0xA
	cmp word ptr [esp+0x114],bp
	jne Block105

 Block103:
	mov eax,dword ptr [esp+0x11C]
	xor ecx,ecx
	mov word ptr [esp+0x114],cx
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea edx,[esp+0x114]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1400
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [esp+0x20]
	lea ecx,[esp+0x13C]
	push ecx
	mov byte ptr [esp+0x1D8],0x27
	mov ecx,ebp
	mov byte ptr [esp+0x1D8],0xA
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x1D4],0x28
	lea ebx,[edi+0x38]
	call get_int32
	add esp,8
	mov dword ptr [ebx],eax
	cmp word ptr [esp+0x134],8
	mov byte ptr [esp+0x1CC],0xA
	jne Block109

 Block107:
	mov eax,dword ptr [esp+0x13C]
	xor edx,edx
	mov word ptr [esp+0x134],dx
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea eax,[esp+0x134]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block110:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push 0x1401
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x158]
	mov byte ptr [esp+0x1D0],0x29
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x1D4],0xA
	call IWzProperty::Getitem
	push eax
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x1D4],0x2A
	call DetachBSTR
	add esp,8
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x1CC],0x2B
	test eax,eax
	je Block112

 Block111:
	mov eax,dword ptr [eax]
	jmp Block113

 Block112:
	xor eax,eax

 Block113:
	push 0xFFFFFFFF
	lea ecx,[edi+0x3C]
	push eax
	call ZXString<char>::AssignWideStr
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x1CC],0x2A
	test eax,eax
	je Block122

 Block114:
	mov ebp,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block121

 Block115:
	test ebp,ebp
	je Block121

 Block116:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block118

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block118:
	mov eax,dword ptr [ebp+4]
	test eax,eax
	je Block120

 Block119:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block120:
	push ebp
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block121:
	mov ebp,dword ptr [esp+0x18]
	mov dword ptr [esp+0x30],0

 Block122:
	cmp word ptr [esp+0x154],8
	mov byte ptr [esp+0x1CC],0xA
	jne Block125

 Block123:
	mov eax,dword ptr [esp+0x15C]
	xor ecx,ecx
	mov word ptr [esp+0x154],cx
	test eax,eax
	je Block126

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block126

 Block125:
	lea edx,[esp+0x154]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block126:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x174A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x178]
	push ecx
	mov byte ptr [esp+0x1D4],0x2C
	mov ecx,ebp
	mov byte ptr [esp+0x1D4],0xA
	call IWzProperty::Getitem
	push eax
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x1D4],0x2D
	call DetachBSTR
	add esp,8
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x1CC],0x2E
	test eax,eax
	je Block128

 Block127:
	mov eax,dword ptr [eax]
	jmp Block129

 Block128:
	xor eax,eax

 Block129:
	push 0xFFFFFFFF
	lea ecx,[edi+0x40]
	push eax
	call ZXString<char>::AssignWideStr
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x1CC],0x2D
	test eax,eax
	je Block138

 Block130:
	mov ebp,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block137

 Block131:
	test ebp,ebp
	je Block137

 Block132:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block134

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block134:
	mov eax,dword ptr [ebp+4]
	test eax,eax
	je Block136

 Block135:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block136:
	push ebp
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block137:
	mov ebp,dword ptr [esp+0x18]
	mov dword ptr [esp+0x34],0

 Block138:
	cmp word ptr [esp+0x174],8
	mov byte ptr [esp+0x1CC],0xA
	jne Block141

 Block139:
	xor eax,eax
	mov word ptr [esp+0x174],ax
	mov eax,dword ptr [esp+0x17C]
	test eax,eax
	je Block142

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block142

 Block141:
	lea ecx,[esp+0x174]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block142:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x18],esp
	push 0x174B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x198]
	mov byte ptr [esp+0x1D0],0x2F
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x1D4],0xA
	call IWzProperty::Getitem
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0x1D4],0x30
	call DetachBSTR
	add esp,8
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x1CC],0x31
	test eax,eax
	je Block144

 Block143:
	mov eax,dword ptr [eax]
	jmp Block145

 Block144:
	xor eax,eax

 Block145:
	push 0xFFFFFFFF
	lea ecx,[edi+0x44]
	push eax
	call ZXString<char>::AssignWideStr
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x1CC],0x30
	test eax,eax
	je Block154

 Block146:
	mov ebp,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block153

 Block147:
	test ebp,ebp
	je Block153

 Block148:
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block150

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block150:
	mov eax,dword ptr [ebp+4]
	test eax,eax
	je Block152

 Block151:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block152:
	push ebp
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block153:
	mov dword ptr [esp+0x2C],0

 Block154:
	cmp word ptr [esp+0x194],8
	mov byte ptr [esp+0x1CC],0xA
	jne Block157

 Block155:
	mov eax,dword ptr [esp+0x19C]
	xor edx,edx
	mov word ptr [esp+0x194],dx
	test eax,eax
	je Block158

 Block156:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block158

 Block157:
	lea eax,[esp+0x194]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block158:
	mov ecx,dword ptr [esi+0x40]
	push ecx
	push ecx
	mov ecx,esp
	lea eax,[edi+4]
	mov dword ptr [esp+0x1C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call GETCRC32HelperString::call
	push 0
	push 0
	push 0
	push eax
	push 4
	lea ebp,[edi+8]
	push ebp
	mov dword ptr [esi+0x40],eax
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push eax
	mov dword ptr [esi+0x40],eax
	lea eax,[edi+0xC]
	push 8
	push eax
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push eax
	mov dword ptr [esi+0x40],eax
	lea eax,[edi+0x14]
	push 4
	push eax
	call CCrc32::GetCrc32
	add esp,0x50
	push 0
	push 0
	push 0
	push eax
	mov dword ptr [esi+0x40],eax
	lea eax,[edi+0x18]
	push 4
	push eax
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push eax
	mov dword ptr [esi+0x40],eax
	lea eax,[edi+0x1C]
	push 4
	push eax
	call CCrc32::GetCrc32
	add esp,0x30
	push eax
	push ecx
	mov dword ptr [esi+0x40],eax
	mov ecx,esp
	lea eax,[edi+0x20]
	mov dword ptr [esp+0x1C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call GETCRC32HelperString::call
	push 0
	push 0
	push 0
	push eax
	mov dword ptr [esi+0x40],eax
	lea eax,[edi+0x2C]
	push 4
	push eax
	call CCrc32::GetCrc32
	mov dword ptr [esi+0x40],eax
	cmp dword ptr [edi+0x28],0
	push 0
	setne dl
	mov byte ptr [esp+0x43],dl
	push 0
	push 0
	push eax
	lea eax,[esp+0x4F]
	push 1
	push eax
	call CCrc32::GetCrc32
	push 0
	push 0
	push 0
	push eax
	mov dword ptr [esi+0x40],eax
	lea eax,[edi+0x34]
	push 4
	push eax
	call CCrc32::GetCrc32
	add esp,0x50
	push 0
	push 0
	push 0
	push eax
	push 4
	push ebx
	mov dword ptr [esi+0x40],eax
	call CCrc32::GetCrc32
	add esp,0x18
	mov dword ptr [esi+0x40],eax
	cmp dword ptr [ebp],6
	jne Block164

 Block159:
	mov ecx,dword ptr [edi+0x10]
	mov edx,dword ptr [edi+0xC]
	push ecx
	mov ecx,dword ptr [esp+0x1D8]
	push edx
	call CField::RestoreTownPortal
	add edi,0xFFFFFFF0
	lea ebp,[edi+4]
	push ebp
	mov byte ptr [esp+0x1D0],9
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block162

 Block160:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block162

 Block161:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block162:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	xor edi,edi
	push eax
	mov dword ptr [esp+0x40],edi
	mov byte ptr [esp+0x1D0],5
	call edx
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x1CC],4
	cmp ecx,edi
	je Block203

 Block163:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x20],edi
	jmp Block203

 Block164:
	lea eax,[esp+0x38]
	push eax
	push 0xFFFFFFFF
	lea ecx,[esi+4]
	call ZArray<ZRef<PORTAL>>::InsertBefore
	mov ecx,eax
	call ZRef<PORTAL>::op_assign_copy
	mov eax,dword ptr [ebp]
	add eax,0xFFFFFFFE
	cmp eax,0xB
	ja Block198

 Block165:
	movzx ecx,byte ptr [eax+_SUB_2AD3C0_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block167
cmp ECX, 1
je Block166
cmp ECX, 2
je Block189
cmp ECX, 3
je Block198


 Block166:
	lea edx,[esp+0x38]
	push edx
	push 0xFFFFFFFF
	lea ecx,[esi+8]
	call ZArray<ZRef<PORTAL>>::InsertBefore
	mov ecx,eax
	call ZRef<PORTAL>::op_assign_copy
	jmp Block198

 Block167:
	lea eax,[esp+0x6C]
	push eax
	mov ecx,esi
	call CPortalList::GetPropPV
	push 0
	push 0xFF
	push 0xC0041F78
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [eax],0
	mov ecx,dword ptr [edi+0x10]
	mov edx,dword ptr [edi+0xC]
	mov ebx,dword ptr [esp+0x7C]
	push ecx
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x6C],esp
	push 0
	push ecx
	mov dword ptr [eax],0
	mov eax,esp
	mov byte ptr [esp+0x1F0],0x33
	mov dword ptr [esp+0x74],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block169

 Block168:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx

 Block169:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x1F4],0x32
	call CAnimationDisplayer::LoadLayer_0
	add esp,0x28
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x84]
	push eax
	mov byte ptr [esp+0x1D0],0x34
	call ebp
	lea ecx,[esp+0x84]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block8

 Block170:
	lea edx,[esp+0x74]
	push edx
	mov byte ptr [esp+0x1D0],0x35
	call ebp
	lea eax,[esp+0x74]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block8

 Block171:
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x1CC],0x36
	test ecx,ecx
	je Block3

 Block172:
	lea edx,[esp+0x84]
	push edx
	lea eax,[esp+0x78]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov ebp,8
	mov byte ptr [esp+0x1CC],0x35
	cmp word ptr [esp+0x74],bp
	jne Block175

 Block173:
	mov eax,dword ptr [esp+0x7C]
	xor ecx,ecx
	mov word ptr [esp+0x74],cx
	test eax,eax
	je Block176

 Block174:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block176

 Block175:
	lea edx,[esp+0x74]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block176:
	mov byte ptr [esp+0x1CC],0x34
	cmp word ptr [esp+0x84],bp
	jne Block179

 Block177:
	xor eax,eax
	mov word ptr [esp+0x84],ax
	mov eax,dword ptr [esp+0x8C]
	test eax,eax
	je Block180

 Block178:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block180

 Block179:
	lea ecx,[esp+0x84]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block180:
	lea ecx,[esi+0x10]
	call ZList<_x_com_ptr<IWzGr2DLayer>>::AddTail_
	mov ebp,dword ptr [eax]
	mov ecx,dword ptr [esp+0x24]
	cmp ebp,ecx
	je Block185

 Block181:
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x24]
	test ecx,ecx
	je Block183

 Block182:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ecx
	call eax
	mov ecx,dword ptr [esp+0x24]

 Block183:
	test ebp,ebp
	je Block185

 Block184:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx
	mov ecx,dword ptr [esp+0x24]

 Block185:
	mov byte ptr [esp+0x1CC],0x32
	test ecx,ecx
	je Block187

 Block186:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx

 Block187:
	mov byte ptr [esp+0x1CC],0xA
	test ebx,ebx
	je Block198

 Block188:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax
	jmp Block198

 Block189:
	lea ecx,[esp+0x38]
	push ecx
	push 0xFFFFFFFF
	lea ecx,[esi+0xC]
	call ZArray<ZRef<PORTAL>>::InsertBefore
	mov ecx,eax
	call ZRef<PORTAL>::op_assign_copy
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x54],esp
	push 0x1132
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C]
	lea eax,[esp+0x1B8]
	mov byte ptr [esp+0x1D0],0x37
	push eax
	mov byte ptr [esp+0x1D4],0xA
	call IWzProperty::Getitem
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0x1D4],0x38
	call DetachBSTR
	add esp,8
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x1CC],0x39
	test eax,eax
	je Block191

 Block190:
	mov eax,dword ptr [eax]
	jmp Block192

 Block191:
	xor eax,eax

 Block192:
	push 0xFFFFFFFF
	lea ebp,[edi+0x30]
	push eax
	mov ecx,ebp
	call ZXString<char>::AssignWideStr
	mov ecx,dword ptr [esp+0x28]
	test ecx,ecx
	je Block194

 Block193:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x28],0

 Block194:
	lea ecx,[esp+0x1B4]
	mov byte ptr [esp+0x1CC],0xA
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp]
	test eax,eax
	je Block196

 Block195:
	cmp byte ptr [eax],0
	jne Block198

 Block196:
	lea edx,[esp+0x40]
	push 0x3D4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x1D0],0x3A
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x1CC],0xA
	test eax,eax
	je Block198

 Block197:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block198:
	add edi,0xFFFFFFF0
	lea ebp,[edi+4]
	push ebp
	mov byte ptr [esp+0x1D0],9
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block201

 Block199:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block201

 Block200:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block201:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [esp+0x40],0
	mov byte ptr [esp+0x1D0],5
	call edx
	cmp dword ptr [esp+0x20],0
	mov byte ptr [esp+0x1CC],4
	je Block203

 Block202:
	mov ecx,dword ptr [esp+0x20]
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x20],0

 Block203:
	cmp word ptr [esp+0x54],8
	jne Block206

 Block204:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block13

 Block205:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block206:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	test eax,eax
	jge Block13

 Block207:
	jmp Block8

 Block208:
	cmp word ptr [esp+0x54],8
	mov byte ptr [esp+0x1CC],3
	jne Block211

 Block209:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	test eax,eax
	je Block212

 Block210:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block212

 Block211:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block212:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [esp+0x1D0],0
	call edx
	mov eax,dword ptr [esp+0x1D8]
	test eax,eax

 Block213:
	mov dword ptr [esp+0x1CC],0xFFFFFFFF
	je Block215

 Block214:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block215:
	mov ecx,dword ptr [esp+0x1C4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1BC
	ret 8
}
}
// CPortalList::CPortalList
__SUB_CLASS_THIS0(002ABAE0, __thiscall, 52777,  CPortalList, void) {
__asm {

 Block0:
	mov eax,ecx
	lea edx,[eax+4]
	xor ecx,ecx
	cmp edx,ecx
	je Block2

 Block1:
	push esi
	lea esi,[edx-4]
	mov dword ptr [TSingleton<CPortalList>::ms_pInstance],esi
	pop esi
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CPortalList>::ms_pInstance],ecx

 Block3:
	int 3// TODO: 	mov dword ptr [eax],offset CPortalList::`vftable'
	mov dword ptr [edx],ecx
	mov dword ptr [eax+8],ecx
	mov dword ptr [eax+0xC],ecx
	int 3// TODO: 	mov dword ptr [eax+0x10],offset ZList<_x_com_ptr<IWzGr2DLayer>>::`vftable'
	mov dword ptr [eax+0x18],ecx
	mov dword ptr [eax+0x1C],ecx
	mov dword ptr [eax+0x20],ecx
	mov dword ptr [eax+0x24],ecx
	mov dword ptr [eax+0x28],ecx
	mov dword ptr [eax+0x2C],ecx
	mov dword ptr [eax+0x30],ecx
	mov dword ptr [eax+0x34],ecx
	mov dword ptr [eax+0x38],ecx
	mov dword ptr [eax+0x3C],ecx
	mov dword ptr [eax+0x40],ecx
	ret
}
}
// PORTAL::IsChangable
__SUB_CLASS_THIS0(00503430, __thiscall, 52758,  PORTAL, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+8]
	cmp eax,4
	je Block3

 Block1:
	cmp eax,5
	je Block3

 Block2:
	xor eax,eax
	ret

 Block3:
	mov eax,1
	ret
}
}
// CPortalList::FindPortal_Collision
__SUB_CLASS_THIS(002AB310, __thiscall, 52787,  CPortalList, const PORTAL*, long, long) {
__asm {

 Block0:
	sub esp,0x14
	mov eax,dword ptr [ecx+8]
	mov dword ptr [esp],ecx
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	push ebx
	push ebp
	lea ebx,[eax-1]
	push esi
	push edi
	test ebx,ebx
	jge Block7

 Block3:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x14
	ret 8

 Block6:
	mov ecx,dword ptr [esp+0x10]

 Block7:
	mov eax,dword ptr [ecx+8]
	mov esi,dword ptr [eax+ebx*8+4]
	mov eax,dword ptr [esi+0x14]
	mov edi,dword ptr [esi+0xC]
	cdq
	sub eax,edx
	mov ecx,eax
	mov eax,dword ptr [esi+0x18]
	cdq
	sub eax,edx
	mov edx,dword ptr [esi+0x10]
	sar eax,1
	lea ebp,[edx+eax]
	push ebp
	sar ecx,1
	lea ebp,[edi+ecx]
	push ebp
	sub edx,eax
	push edx
	sub edi,ecx
	push edi
	lea ecx,[esp+0x24]
	push ecx
	call SetRect
	mov eax,dword ptr [esp+0x2C]
	push eax
	mov eax,dword ptr [esp+0x2C]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call PtInRect
	test eax,eax
	jne Block10

 Block8:
	sub ebx,1
	jns Block6

 Block9:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 8

 Block10:
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 8
}
}
// PORTAL::~PORTAL
_SUB_EXCEPTION_HANDLER(2AB960)
__SUB_CLASS_THIS0(002AB960, __thiscall, 52765,  PORTAL, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2AB960
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
	mov eax,dword ptr [esi+0x44]
	mov dword ptr [esp+0x14],4
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0x40]
	mov byte ptr [esp+0x14],3
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esi+0x3C]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esi+0x30]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esi+0x20]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov esi,dword ptr [esi+4]
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
// CPortalList::UpdateHiddenPortal
_SUB_EXCEPTION_HANDLER(2AD010)
__SUB_CLASS_THIS0(002AD010, __thiscall, 52779,  CPortalList, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2AD010
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
	mov edi,ecx
	xor ebx,ebx
	cmp dword ptr [edi+0x30],ebx
	je Block47

 Block1:
	cmp dword ptr [edi+0x34],ebx
	sete al
	cmp al,bl
	sete al
	cmp al,bl
	je Block47

 Block2:
	mov esi,dword ptr [edi+0x34]
	cmp esi,ebx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x114]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block6

 Block5:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	cmp dword ptr [esp+0x14],ebx
	jne Block47

 Block7:
	mov eax,dword ptr [edi+0x34]
	cmp eax,ebx
	je Block9

 Block8:
	mov dword ptr [edi+0x34],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call CPortalList::GetPropPH
	mov ecx,dword ptr [edi+0x30]
	mov eax,dword ptr [ecx+0x30]
	push ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push eax
	mov dword ptr [esp+0x5C],ebx
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x58],1
	cmp ecx,ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x5C],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x54],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block14

 Block12:
	cmp eax,0x80004002
	je Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov esi,8
	mov byte ptr [esp+0x4C],bl
	cmp word ptr [esp+0x34],si
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebx
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1136
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x58],3
	cmp ecx,ebx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x5C],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x54],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block23

 Block21:
	cmp eax,0x80004002
	je Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	mov byte ptr [esp+0x4C],bl
	cmp word ptr [esp+0x34],si
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,ebx
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	push ebx
	push 0xFF
	push 0xC0041F78
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [eax],ebx
	mov eax,dword ptr [edi+0x30]
	mov ecx,dword ptr [eax+0x10]
	mov edx,dword ptr [eax+0xC]
	push ecx
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push ebx
	push ecx
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr [eax],ebx
	mov eax,esp
	mov byte ptr [esp+0x70],5
	mov dword ptr [esp+0x44],esp
	mov dword ptr [eax],ecx
	cmp ecx,ebx
	je Block29

 Block28:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+4]
	call ecx

 Block29:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x74],bl
	call CAnimationDisplayer::LoadLayer_0
	add esp,0x28
	lea ebp,[edi+0x38]
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebx
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push eax
	call esi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x50],6
	call esi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x4C],7
	cmp ecx,ebx
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x4C],6
	cmp word ptr [esp+0x24],si
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,ebx
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov byte ptr [esp+0x4C],bl
	cmp word ptr [esp+0x34],si
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebx
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp eax,ebx
	je Block47

 Block46:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block47:
	cmp dword ptr [edi+0x3C],ebx
	je Block55

 Block48:
	mov esi,dword ptr [edi+0x3C]
	cmp esi,ebx
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x114]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],ebx
	call eax
	cmp eax,ebx
	jge Block52

 Block51:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block52:
	cmp dword ptr [esp+0x18],ebx
	jne Block55

 Block53:
	mov eax,dword ptr [edi+0x3C]
	cmp eax,ebx
	je Block55

 Block54:
	mov dword ptr [edi+0x3C],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block55:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret
}
}
// CPortalList::GetPropPH
_SUB_EXCEPTION_HANDLER(2AC080)
__SUB_CLASS_THIS0(002AC080, __thiscall, 52795,  CPortalList, _x_com_ptr<IWzProperty>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2AC080
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x5C]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],ecx
	mov dword ptr [esp+0x10],0
	cmp dword ptr [ecx+0x28],0
	sete al
	test al,al
	je Block56

 Block1:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call esi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0x68],0
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	push 0
	push 0
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x6DA
	mov bl,1
	push eax
	mov byte ptr [esp+0x80],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],2
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0x7C],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x14],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block10

 Block8:
	cmp eax,0x80004002
	je Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x64],5
	cmp word ptr [esp+0x3C],si
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea eax,[esp+0x3C]
	push eax
	call edi

 Block14:
	mov byte ptr [esp+0x64],6
	cmp word ptr [esp+0x1C],si
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[esp+0x1C]
	push edx
	call edi

 Block18:
	mov bl,7
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x2C],si
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block22:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x5EE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x70],8
	test ecx,ecx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea eax,[esp+0x58]
	push eax
	mov byte ptr [esp+0x74],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x6C],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block27

 Block25:
	cmp eax,0x80004002
	je Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x4C],si
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x4C]
	push edx
	call edi

 Block31:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x6DB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x70],0xA
	test ecx,ecx
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	lea edx,[esp+0x58]
	push edx
	mov byte ptr [esp+0x74],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x6C],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block36

 Block34:
	cmp eax,0x80004002
	je Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x4C],si
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[esp+0x4C]
	push ecx
	call edi

 Block40:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1133
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x70],0xC
	test ecx,ecx
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	lea eax,[esp+0x58]
	push eax
	mov byte ptr [esp+0x74],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x6C],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x14]
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block45

 Block43:
	cmp eax,0x80004002
	je Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x4C],si
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea edx,[esp+0x4C]
	push edx
	call edi

 Block49:
	mov eax,dword ptr [esp+0x14]
	mov edi,dword ptr [eax+0x28]
	mov esi,dword ptr [esp+0x10]
	cmp edi,esi
	je Block54

 Block50:
	mov ecx,eax
	mov dword ptr [ecx+0x28],esi
	test esi,esi
	je Block52

 Block51:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block52:
	test edi,edi
	je Block54

 Block53:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block54:
	mov dword ptr [esp+0x64],0xFFFFFFFF
	test esi,esi
	je Block56

 Block55:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block56:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx+0x28]
	mov esi,dword ptr [esp+0x6C]
	mov dword ptr [esi],eax
	test eax,eax
	je Block58

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block58:
	mov eax,esi
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x58
	ret 4
}
}
// CPortalList::FindPortal_Hidden
_SUB_EXCEPTION_HANDLER(2AB5D0)
__SUB_CLASS_THIS(002AB5D0, __thiscall, 52789,  CPortalList, ZRef<PORTAL>*, ZRef<PORTAL>*, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2AB5D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x18],ecx
	mov eax,dword ptr [ecx+0xC]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	add eax,0xFFFFFFFF
	mov dword ptr [esp+0x14],eax
	js Block18

 Block3:
	mov ebx,dword ptr [esp+0x50]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	jmp Block7

 Block6:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x18]

 Block7:
	mov ecx,dword ptr [ecx+0xC]
	mov esi,dword ptr [ecx+eax*8+4]
	lea eax,[ecx+eax*8]
	mov dword ptr [esp+0x20],esi
	test esi,esi
	je Block9

 Block8:
	lea edx,[esi-0xC]
	push edx
	call ebp

 Block9:
	cmp dword ptr [esi+8],0
	mov dword ptr [esp+0x3C],0
	jne Block13

 Block10:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x40],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block17

 Block11:
	push edi
	call ebp
	test esi,esi
	je Block17

 Block12:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx
	jmp Block17

 Block13:
	mov ecx,dword ptr [esi+0x10]
	mov eax,dword ptr [esi+0xC]
	lea edx,[ecx+0x32]
	push edx
	lea edx,[eax+ebx]
	push edx
	add ecx,0xFFFFFFCE
	push ecx
	sub eax,ebx
	push eax
	lea eax,[esp+0x34]
	push eax
	call SetRect
	mov eax,dword ptr [esp+0x4C]
	push eax
	mov eax,dword ptr [esp+0x4C]
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	call PtInRect
	test eax,eax
	jne Block20

 Block14:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x40],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block17

 Block15:
	push edi
	call ebp
	test esi,esi
	je Block17

 Block16:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block17:
	sub dword ptr [esp+0x14],1
	mov dword ptr [esp+0x20],0
	jns Block6

 Block18:
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [eax+4],0

 Block19:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 0x10

 Block20:
	mov ebx,dword ptr [esp+0x44]
	mov dword ptr [ebx+4],esi
	add esi,0xFFFFFFF0
	lea ecx,[esi+4]
	push ecx
	call ebp
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x40],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block23

 Block21:
	push edi
	call ebp
	test esi,esi
	je Block23

 Block22:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block23:
	mov eax,ebx
	jmp Block19
}
}
