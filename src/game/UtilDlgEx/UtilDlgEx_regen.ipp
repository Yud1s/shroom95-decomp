#include "regen.hpp"
// UtilDlgEx.ipp
#include "UtilDlgEx.hpp"

// ask_guildname
_SUB_EXCEPTION_HANDLER(58EC10)
__SUB(0058EC10, __cdecl, 80513,  int32_t, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_58EC10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+0x1C],0
	test eax,eax
	je Block11

 Block1:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	test eax,eax
	je Block11

 Block2:
	add eax,8
	je Block11

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x10],esi
	test esi,esi
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	push 0
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x14],esp
	push 0x347
	push ecx
	mov dword ptr [esp+0x30],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push 0
	push 3
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	push 0
	push 0
	push 0xE
	push 4
	push offset _S_
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_INPUT_STR
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	cmp eax,1
	jne Block12

 Block6:
	lea edx,[esp+8]
	push edx
	mov ecx,esi
	call CUtilDlgEx::GetInputStr_Result
	mov ecx,dword ptr [esp+0x24]
	push eax
	mov byte ptr [esp+0x20],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+8]
	mov byte ptr [esp+0x1C],1
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test esi,esi
	je Block10

 Block9:
	push 0
	lea ecx,[esp+0x10]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block10:
	mov eax,1
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x18
	ret

 Block11:
	xor esi,esi
	mov dword ptr [esp+0x10],esi
	jmp Block5

 Block12:
	mov ecx,dword ptr [esp+0x24]
	push offset _S_
	call ZXString<char>::AssignCStr
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test esi,esi
	je Block14

 Block13:
	push 0
	lea ecx,[esp+0x10]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block14:
	xor eax,eax
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x18
	ret
}
}
// CUtilDlgEx::Layout_GEN
__SUB_CLASS_THIS(0057B060, __thiscall, 44629,  CUtilDlgEx, void, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [ecx+0xA4]
	push edi
	call CUtilDlgEx::GetCTHeight_Max
	cmp esi,eax
	jle Block3

 Block1:
	call CUtilDlgEx::GetCTHeight_Max
	mov edx,esi
	sub edx,eax
	mov eax,edx
	cdq
	and edx,7
	add eax,edx
	sar eax,3
	cmp eax,1
	jle Block3

 Block2:
	call CUtilDlgEx::GetCTHeight_Max
	mov dword ptr [ecx+0xA8],eax
	mov dword ptr [ecx+0xB0],1
	jmp Block7

 Block3:
	call CUtilDlgEx::GetCTHeight_Min
	cmp esi,eax
	jge Block5

 Block4:
	call CUtilDlgEx::GetCTHeight_Min
	mov dword ptr [ecx+0xA8],eax
	jmp Block6

 Block5:
	mov dword ptr [ecx+0xA8],esi

 Block6:
	mov dword ptr [ecx+0xB0],0

 Block7:
	mov edi,dword ptr [esp+0xC]
	test edi,edi
	je Block12

 Block8:
	call CUtilDlgEx::GetCTHeight_Max
	mov edx,eax
	cmp esi,edx
	mov dword ptr [ecx+0xA8],edx
	jle Block11

 Block9:
	mov eax,esi
	sub eax,edx
	cdq
	and edx,7
	add eax,edx
	sar eax,3
	cmp eax,0xFFFFFFFF
	jle Block11

 Block10:
	mov eax,1
	mov dword ptr [ecx+0xB0],eax
	mov eax,0x5F
	jmp Block13

 Block11:
	xor eax,eax
	mov dword ptr [ecx+0xB0],eax
	mov eax,0x5F
	jmp Block13

 Block12:
	mov eax,dword ptr [ecx+0xC38]
	neg eax
	sbb eax,eax
	and eax,0xFFFFFF79
	add eax,0x9E

 Block13:
	mov edx,dword ptr [ecx+0xB0]
	neg edx
	sbb edx,edx
	and edx,0xFFFFFFFC
	add edx,eax
	mov dword ptr [ecx+0x9C],edx
	test edi,edi
	je Block15

 Block14:
	mov eax,0x1E
	jmp Block19

 Block15:
	mov eax,dword ptr [ecx+0xA8]
	cmp esi,eax
	jle Block17

 Block16:
	mov eax,0xFFFFFFFA
	jmp Block18

 Block17:
	sub eax,esi
	add eax,6
	cdq
	sub eax,edx
	sar eax,1

 Block18:
	add eax,0x16

 Block19:
	mov dword ptr [ecx+0xA0],eax
	call CUtilDlgEx::GetWndWidth
	test edi,edi
	pop edi
	mov dword ptr [ecx+0xB4],eax
	pop esi
	je Block21

 Block20:
	call CUtilDlgEx::GetWndHeight
	mov dword ptr [ecx+0xB8],eax
	ret 4

 Block21:
	mov eax,dword ptr [ecx+0xA8]
	add eax,0x50
	mov dword ptr [ecx+0xB8],eax
	ret 4
}
}
// CUtilDlgEx::OnCreate_LIST
_SUB_EXCEPTION_HANDLER(5816F0)
__SUB_CLASS_THIS0(005816F0, __thiscall, 44605,  CUtilDlgEx, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5816F0
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
	mov esi,ecx
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push eax
	call edi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebp,ebp
	add esp,8
	cmp eax,ebp
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x2C]
	push edx
	mov dword ptr [esp+0x68],ebp
	call edi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push ebp
	push ebp
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov ebx,1
	push offset _S_UIUIWINDOW2IMGUT__9
	mov byte ptr [esp+0x7C],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x78],2
	cmp dword ptr [_D_G_RM],ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x60]
	mov byte ptr [esp+0x78],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x130]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov edi,8
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x4C],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	cmp eax,ebp
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0x64],0
	cmp word ptr [esp+0x2C],di
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov dword ptr [esp+0x64],0xFFFFFFFF
	cmp word ptr [esp+0x3C],di
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov dword ptr [esp+0x28],ebp
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebp
	mov dword ptr [esp+0x24],ebp
	mov dword ptr [esp+0x64],4
	test byte ptr [esi+0xC34],bl
	jne Block28

 Block22:
	lea ecx,[esp+0x14]
	push 0x8FF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push offset _S_UIUIWINDOW2IMGUT
	lea edx,[esp+0x30]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x70],5
	call CUtilDlgEx::MakeUOLByUIType
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],4
	cmp eax,ebp
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block24:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x64],6
	cmp eax,ebp
	je Block26

 Block25:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block27

 Block26:
	xor eax,eax

 Block27:
	push eax
	lea ecx,[esi+0xBDC]
	mov byte ptr [esp+0x68],4
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xBE0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	mov edx,dword ptr [esi+0x28]
	push ebp
	sub edx,0x18
	push edx
	push 0xA
	push 2
	push esi
	call eax

 Block28:
	mov ecx,dword ptr [esi+0xC38]
	mov ebp,dword ptr [esi+0x24]
	neg ecx
	sbb ecx,ecx
	and ecx,0x82
	add ecx,0xA
	sub ebp,ecx
	sub ebp,0x3E
	cmp dword ptr [esi+0xB0],0
	je Block30

 Block29:
	sub ebp,5

 Block30:
	lea edx,[esp+0x14]
	push 0x8FC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push offset _S_UIUIWINDOW2IMGUT
	lea eax,[esp+0x30]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x70],7
	call CUtilDlgEx::MakeUOLByUIType
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],4
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block32:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x64],8
	test eax,eax
	je Block34

 Block33:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block35

 Block34:
	xor eax,eax

 Block35:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x64],4
	test eax,eax
	je Block48

 Block36:
	add eax,8
	je Block48

 Block37:
	lea edi,[eax-8]
	test edi,edi
	je Block39

 Block38:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block39:
	mov eax,dword ptr [esi+0xBE8]
	mov dword ptr [esi+0xBE8],edi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block41

 Block40:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block41:
	mov ecx,dword ptr [esi+0xBE8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [esi+0x28]
	push 0
	sub eax,0x39
	push eax
	push ebp
	push 0x2001
	push esi
	call edx
	push 0xFFFFFFFF
	lea ecx,[esi+0xC14]
	call ZArray<ZRef<CCtrlButton>>::InsertBefore
	mov edi,eax
	mov eax,dword ptr [esi+0xBE8]
	test eax,eax
	je Block43

 Block42:
	add eax,0xC
	push eax
	call ebx

 Block43:
	cmp dword ptr [edi+4],0
	je Block45

 Block44:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block45:
	mov eax,dword ptr [esi+0xBE8]
	mov dword ptr [edi+4],eax
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x64],0xFFFFFFFF
	test eax,eax
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block47:
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret

 Block48:
	xor edi,edi
	jmp Block39
}
}
// CUtilDlgEx::Update
__SUB_CLASS_THIS0(0057B3C0, __thiscall, 44605,  CUtilDlgEx, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xBC]
	test eax,eax
	je Block5

 Block1:
	push eax
	call CNpcTemplate::GetNpcTemplate
	add esp,4
	test eax,eax
	je Block5

 Block2:
	cmp dword ptr [eax+0xE4],0
	je Block5

 Block3:
	mov ecx,dword ptr [esi+0x14C]
	test ecx,ecx
	je Block5

 Block4:
	call CAvatar::Update

 Block5:
	cmp dword ptr [esi+0xC0],0
	jne Block8

 Block6:
	cmp dword ptr [esi+0xC2C],0
	jne Block8

 Block7:
	inc dword ptr [esi+0xC28]
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block8:
	pop esi
	ret
}
}
// CUtilDlgEx::GetWndHeight
__SUB_CLASS_THIS0(0057ADA0, __thiscall, 44636,  CUtilDlgEx, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x98]
	cmp eax,5
	jl Block5

 Block1:
	cmp eax,6
	jle Block4

 Block2:
	cmp eax,9
	jne Block5

 Block3:
	mov eax,0x15C
	ret

 Block4:
	mov eax,0x103
	ret

 Block5:
	xor eax,eax
	ret
}
}
// CUtilDlgEx::MakeImage
_SUB_EXCEPTION_HANDLER(582280)
__SUB_CLASS_THIS0(00582280, __thiscall, 44605,  CUtilDlgEx, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_582280
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
	mov edi,ecx
	mov eax,dword ptr [edi+0xD8]
	xor esi,esi
	cmp eax,esi
	je Block90

 Block1:
	cmp dword ptr [eax-4],esi
	je Block90

 Block2:
	movzx eax,word ptr [edi+0xDC]
	mov ecx,dword ptr [edi+0xD8]
	lea eax,[ecx+eax*4]
	push eax
	lea ecx,[ebp-0x28]
	mov dword ptr [ebp-0x28],esi
	call ZXString<char>::op_assign
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x5C]
	push edx
	mov dword ptr [ebp-4],esi
	call ebx
	lea eax,[ebp-0x5C]
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
	lea ecx,[ebp-0x4C]
	push ecx
	mov byte ptr [ebp-4],1
	call ebx
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
	mov eax,dword ptr [ebp-0x28]
	push esi
	push esi
	push 0xFFFFFFFF
	push eax
	push esi
	mov bl,2
	push esi
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [ebp-0x28]
	mov esi,esp
	push 0
	push 0
	lea ecx,[ebp-0x5C]
	push ecx
	lea edx,[ebp-0x4C]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x24],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],3
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea ecx,[ebp-0x6C]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x2C]
	mov dword ptr [ebp-0x2C],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov esi,8
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x6C],si
	jne Block14

 Block12:
	mov eax,dword ptr [ebp-0x64]
	xor edx,edx
	mov word ptr [ebp-0x6C],dx
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea eax,[ebp-0x6C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x4C],si
	jne Block18

 Block16:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[ebp-0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x5C],si
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[ebp-0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	lea edx,[ebp-0x3C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	mov eax,dword ptr [ebp-0x2C]
	mov ebx,9
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp-0x20],cx
	mov dword ptr [ebp-0x18],eax
	test eax,eax
	je Block27

 Block26:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block27:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0xA
	test ecx,ecx
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea edx,[ebp-0x3C]
	push edx
	lea eax,[ebp-0x20]
	push eax
	push 0
	push 0
	push 0
	push ebx
	push ebx
	lea edx,[ebp-0x24]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xE0]
	cmp esi,eax
	je Block34

 Block30:
	mov dword ptr [edi+0xE0],eax
	test eax,eax
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block32:
	test esi,esi
	je Block34

 Block33:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block34:
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block36

 Block35:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block36:
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x20],si
	jne Block39

 Block37:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x3C],si
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	lea edx,[ebp-0x24]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0xB
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp-0x20],cx
	mov dword ptr [ebp-0x18],eax
	test eax,eax
	je Block46

 Block45:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block46:
	mov esi,dword ptr [edi+0xE0]
	mov byte ptr [ebp-4],0xC
	test esi,esi
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	mov edx,dword ptr [ebp-0x20]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x1C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x18]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x14]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block50

 Block49:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block50:
	mov byte ptr [ebp-4],bl
	mov ebx,8
	cmp word ptr [ebp-0x20],bx
	jne Block53

 Block51:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block56:
	lea eax,[ebp-0x24]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [ebp-4],0xD
	mov word ptr [ebp-0x20],cx
	mov dword ptr [ebp-0x18],eax
	test eax,eax
	je Block58

 Block57:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block58:
	mov esi,dword ptr [edi+0xE0]
	mov byte ptr [ebp-4],0xE
	test esi,esi
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	mov edx,dword ptr [ebp-0x20]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x1C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x18]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x14]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block62

 Block61:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block62:
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x20],bx
	jne Block65

 Block63:
	mov eax,dword ptr [ebp-0x18]
	xor ecx,ecx
	mov word ptr [ebp-0x20],cx
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea edx,[ebp-0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block68:
	mov esi,dword ptr [edi+0xE0]
	test esi,esi
	jne Block70

 Block69:
	push 0x80004003
	call _com_issue_error

 Block70:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block72

 Block71:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block72:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x20]
	push edx
	call esi
	lea eax,[ebp-0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block74

 Block73:
	push eax
	call _com_issue_error

 Block74:
	lea ecx,[ebp-0x3C]
	mov bl,0xF
	push ecx
	mov byte ptr [ebp-4],bl
	call esi
	lea edx,[ebp-0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block76

 Block75:
	push eax
	call _com_issue_error

 Block76:
	mov ecx,dword ptr [edi+0xE0]
	mov byte ptr [ebp-4],0x10
	test ecx,ecx
	jne Block78

 Block77:
	push 0x80004003
	call _com_issue_error

 Block78:
	lea eax,[ebp-0x20]
	push eax
	lea edx,[ebp-0x3C]
	push edx
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x3C],si
	jne Block81

 Block79:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block82:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x20],si
	jne Block85

 Block83:
	mov eax,dword ptr [ebp-0x18]
	xor edx,edx
	mov word ptr [ebp-0x20],dx
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea eax,[ebp-0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block86:
	mov eax,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block88

 Block87:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block88:
	mov eax,dword ptr [ebp-0x28]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block90

 Block89:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block90:
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
}
}
// CUtilDlgEx::OnCreate_IMAGE
_SUB_EXCEPTION_HANDLER(584F70)
__SUB_CLASS_THIS0(00584F70, __thiscall, 44605,  CUtilDlgEx, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_584F70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea ecx,[esi+0xC14]
	call ZArray<ZRef<CCtrlButton>>::RemoveAll
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	lea eax,[esp+0x14]
	push 0x8FB
	push eax
	mov dword ptr [esp+0x3C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push offset _S_UIUIWINDOW2IMGUT
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x40],1
	call CUtilDlgEx::MakeUOLByUIType
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block15

 Block6:
	add eax,8
	cmp eax,ebx
	je Block15

 Block7:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block9

 Block8:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block9:
	mov eax,dword ptr [esi+0xBE0]
	mov dword ptr [esi+0xBE0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0xBE0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	mov edx,dword ptr [esi+0x28]
	push ebx
	sub edx,0x39
	push edx
	push 8
	push 0x2000
	push esi
	call eax
	mov ecx,dword ptr [esi+0xBE0]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [esi+0xD0]
	mov edx,dword ptr [edx+0x1C]
	add ecx,4
	push eax
	call edx
	lea eax,[esp+0x14]
	push 0x8FC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push offset _S_UIUIWINDOW2IMGUT
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x40],3
	call CUtilDlgEx::MakeUOLByUIType
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],4
	cmp eax,ebx
	je Block16

 Block14:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block17

 Block15:
	xor edi,edi
	jmp Block9

 Block16:
	xor eax,eax

 Block17:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block27

 Block18:
	add eax,8
	cmp eax,ebx
	je Block27

 Block19:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block21

 Block20:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block21:
	mov eax,dword ptr [esi+0xBE8]
	mov dword ptr [esi+0xBE8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block23

 Block22:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [esi+0xBE8]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	mov edx,dword ptr [esi+0x28]
	push ebx
	sub edx,0x39
	push edx
	push 0x31
	push 0x2001
	push esi
	call eax
	mov ecx,dword ptr [esi+0xBE8]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [esi+0xD4]
	mov edx,dword ptr [edx+0x1C]
	add ecx,4
	push eax
	call edx
	lea eax,[esp+0x14]
	push 0x8FD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push offset _S_UIUIWINDOW2IMGUT
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x40],5
	call CUtilDlgEx::MakeUOLByUIType
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],6
	cmp eax,ebx
	je Block28

 Block26:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block29

 Block27:
	xor edi,edi
	jmp Block21

 Block28:
	xor eax,eax

 Block29:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block38

 Block30:
	add eax,8
	cmp eax,ebx
	je Block38

 Block31:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block33

 Block32:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block33:
	mov eax,dword ptr [esi+0xBF0]
	mov dword ptr [esi+0xBF0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block35

 Block34:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block35:
	mov ecx,dword ptr [esi+0xBF0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	mov edx,dword ptr [esi+0x28]
	push ebx
	sub edx,0x39
	push edx
	mov edx,dword ptr [esi+0x24]
	sub edx,0x30
	push edx
	push 1
	push esi
	call eax
	mov ecx,dword ptr [esi+0xBF0]
	mov edx,dword ptr [ecx+4]
	mov edx,dword ptr [edx+0x1C]
	xor eax,eax
	add ecx,4
	cmp dword ptr [esi+0xD4],ebx
	sete al
	push eax
	call edx
	mov ecx,esi
	call CUtilDlgEx::MakeImage
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block37:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret

 Block38:
	xor edi,edi
	jmp Block33
}
}
// CUtilDlgEx::UpdateImage
__SUB_CLASS_THIS0(005852E0, __thiscall, 44605,  CUtilDlgEx, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea ecx,[esi+0xC14]
	call ZArray<ZRef<CCtrlButton>>::RemoveAll
	mov eax,dword ptr [esi+0xBE0]
	mov edx,dword ptr [esi+0xD0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x1C]
	push edx
	call eax
	mov eax,dword ptr [esi+0xBE8]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x1C]
	lea ecx,[eax+4]
	mov eax,dword ptr [esi+0xD4]
	push eax
	call edx
	mov eax,dword ptr [esi+0xBF0]
	xor edx,edx
	cmp dword ptr [esi+0xD4],edx
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x1C]
	sete dl
	push edx
	call eax
	mov ecx,esi
	call CUtilDlgEx::MakeImage
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret
}
}
// CUtilDlgEx::SetUtilDlgEx_COMBOBOX
_SUB_EXCEPTION_HANDLER(583150)
__SUB_CLASS_THIS(00583150, __thiscall, 44628,  CUtilDlgEx, void, ZList<ZXString<char> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_583150
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
	mov ebx,ecx
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [eax+8]
	xor ebp,ebp
	cmp ecx,ebp
	je Block6

 Block1:
	mov eax,dword ptr [eax+0xC]
	xor edi,edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebp
	je Block5

 Block2:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZXString<char>>::GetNext
	add esp,4
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],ebp
	call ZXString<char>::op_assign
	mov esi,dword ptr [esp+0x28]
	mov ecx,dword ptr [ebx+0xBD8]
	push edi
	push esi
	mov dword ptr [esp+0x28],ebp
	call CCtrlComboBox::AddItem
	inc edi
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp esi,ebp
	je Block4

 Block3:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block4:
	cmp dword ptr [esp+0x14],ebp
	jne Block2

 Block5:
	mov ecx,dword ptr [ebx+0xBD8]
	mov dword ptr [ecx+0x68],ebp
	mov ecx,dword ptr [ebx+0xBD8]
	call CCtrlWnd::InvalidateRect

 Block6:
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
// CUtilDlgEx::SetUtilDlgEx_IMAGE
__SUB_CLASS_THIS(0057B450, __thiscall, 44622,  CUtilDlgEx, void, int32_t, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	mov dword ptr [ecx+0xD0],eax
	mov dword ptr [ecx+0xD4],edx
	test eax,eax
	jne Block2

 Block1:
	test edx,edx
	je Block3

 Block2:
	add dword ptr [ecx+0xA4],0x12

 Block3:
	push 0
	call CUtilDlgEx::Layout_GEN
	ret 8
}
}
// CUtilDlgEx::SetBackground
_SUB_EXCEPTION_HANDLER(57F180)
// 9813B4
static uint8_t _SUB_57F180_LOOKUP_TABLE_0[10] = {
0, 0, 0, 0, 0, 1, 2, 0, 0, 3, 
};
__SUB_CLASS_THIS0(0057F180, __thiscall, 44605,  CUtilDlgEx, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_57F180
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x424
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x438]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esp+0x440],ebp
	cmp eax,9
	ja Block346

 Block1:
	movzx eax,byte ptr [eax+_SUB_57F180_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block330
cmp EAX, 2
je Block331
cmp EAX, 3
je Block332


 Block2:
	push 0x3D0
	cmp dword ptr [esi+0xC0],ebp
	je Block207

 Block3:
	lea ecx,[esp+0x78]
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea edi,[esi+0x78]
	push edi
	push eax
	mov byte ptr [esp+0x44C],1
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x80]
	add esp,0xC
	mov byte ptr [esp+0x440],0
	cmp eax,ebp
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	push offset _D_VTMISSING
	lea ecx,[esp+0x39C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x33C]
	mov byte ptr [esp+0x444],2
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x440],3
	cmp ecx,ebp
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea edx,[esp+0x398]
	push edx
	mov edx,dword ptr [esi+0x28]
	lea eax,[esp+0x33C]
	push eax
	mov eax,dword ptr [esi+0x24]
	push edx
	push eax
	call IWzCanvas::Create
	lea ecx,[esp+0x338]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x398]
	mov byte ptr [esp+0x440],0
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [edi]
	cmp ecx,ebp
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov edx,dword ptr [esi+0x28]
	mov eax,dword ptr [esi+0x24]
	push 0xFFFFFF
	push edx
	push eax
	push ebp
	push ebp
	call IWzCanvas::DrawRectangle
	push offset _D_VTMISSING
	lea ecx,[esp+0x3CC]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x31C]
	mov byte ptr [esp+0x444],4
	call Ztl_variant_t::_ctor_1
	push ebp
	push ebp
	lea ecx,[esp+0x3D0]
	push ecx
	lea edx,[esp+0x324]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0x196F
	mov bl,5
	push eax
	mov byte ptr [esp+0x45C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x454],6
	cmp dword ptr [_D_G_RM],ebp
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea ecx,[esp+0x40C]
	push ecx
	mov byte ptr [esp+0x458],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x448],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block14

 Block12:
	cmp eax,0x80004002
	je Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	lea ecx,[esp+0x3F8]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x318]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x3C8]
	mov byte ptr [esp+0x440],0
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x2EC]
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x440],8
	cmp ecx,ebp
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov eax,dword ptr [esp+0x14]
	lea edx,[esp+0x2E8]
	push edx
	push eax
	push 0
	push 0
	call IWzCanvas::Copy
	lea ecx,[esp+0x2E8]
	mov byte ptr [esp+0x440],0
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [esi+0xB8]
	mov ebp,dword ptr [ZImports::_VariantInit]
	mov edi,0x14
	sub ecx,0x4F
	cmp ecx,edi
	jle Block43

 Block17:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x98]
	push edx
	call esi
	lea eax,[esp+0x98]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block13

 Block18:
	lea ecx,[esp+0x1C8]
	push ecx
	mov byte ptr [esp+0x444],9
	call esi
	lea edx,[esp+0x1C8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block13

 Block19:
	push 0
	push 0
	lea eax,[esp+0xA0]
	push eax
	lea ecx,[esp+0x1D4]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push 0x1966
	push edx
	mov byte ptr [esp+0x45C],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x454],0xB
	je Block6

 Block20:
	lea eax,[esp+0x27C]
	mov byte ptr [esp+0x454],0xA
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x448],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block22

 Block21:
	cmp eax,0x80004002
	jne Block13

 Block22:
	mov esi,8
	mov byte ptr [esp+0x440],0xA
	cmp word ptr [esp+0x268],si
	jne Block29

 Block23:
	mov eax,dword ptr [esp+0x270]
	xor ecx,ecx
	mov word ptr [esp+0x268],cx
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block25:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block26:
	mov byte ptr [esp+0x440],9
	cmp word ptr [esp+0x1C8],si
	jne Block30

 Block27:
	xor eax,eax
	mov word ptr [esp+0x1C8],ax
	mov eax,dword ptr [esp+0x1D0]
	test eax,eax
	je Block31

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block29:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x268]
	push edx
	call ebx
	jmp Block26

 Block30:
	lea ecx,[esp+0x1C8]
	push ecx
	call ebx

 Block31:
	mov byte ptr [esp+0x440],0
	cmp word ptr [esp+0x98],si
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0xA0]
	xor edx,edx
	mov word ptr [esp+0x98],dx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea eax,[esp+0x98]
	push eax
	call ebx

 Block35:
	lea ecx,[esp+0x158]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x158]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block13

 Block36:
	mov ebp,dword ptr [esp+0x18]
	mov ecx,dword ptr [ebp+0x78]
	mov byte ptr [esp+0x440],0xD
	test ecx,ecx
	je Block6

 Block37:
	mov edx,dword ptr [esp+0x14]
	lea eax,[esp+0x158]
	push eax
	push edx
	push edi
	push 0
	call IWzCanvas::Copy
	mov byte ptr [esp+0x440],0
	cmp word ptr [esp+0x158],si
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [esp+0x158],ax
	mov eax,dword ptr [esp+0x160]
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[esp+0x158]
	push ecx
	call ebx

 Block41:
	mov edx,dword ptr [ebp+0xB8]
	add edi,0x10
	sub edx,0x4F
	cmp edi,edx
	jl Block17

 Block42:
	mov esi,ebp
	mov ebp,dword ptr [ZImports::_VariantInit]

 Block43:
	lea eax,[esp+0x1B8]
	push eax
	call ebp
	lea ecx,[esp+0x1B8]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	lea edx,[esp+0xB8]
	mov bl,0xE
	push edx
	mov byte ptr [esp+0x444],bl
	call ebp
	lea eax,[esp+0xB8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	push 0
	push 0
	lea ecx,[esp+0x1C0]
	push ecx
	lea edx,[esp+0xC4]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0x1967
	push eax
	mov byte ptr [esp+0x45C],0xF
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x454],0x10
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	lea ecx,[esp+0x29C]
	push ecx
	mov byte ptr [esp+0x458],0xF
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x448],0x11
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block52

 Block50:
	cmp eax,0x80004002
	je Block52

 Block51:
	push eax
	call _com_issue_error

 Block52:
	mov edi,8
	mov byte ptr [esp+0x440],0xF
	cmp word ptr [esp+0x288],di
	jne Block55

 Block53:
	mov eax,dword ptr [esp+0x290]
	xor edx,edx
	mov word ptr [esp+0x288],dx
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea eax,[esp+0x288]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov byte ptr [esp+0x440],bl
	cmp word ptr [esp+0xB8],di
	jne Block59

 Block57:
	mov eax,dword ptr [esp+0xC0]
	xor ecx,ecx
	mov word ptr [esp+0xB8],cx
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea edx,[esp+0xB8]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov byte ptr [esp+0x440],0
	cmp word ptr [esp+0x1B8],di
	jne Block63

 Block61:
	xor eax,eax
	mov word ptr [esp+0x1B8],ax
	mov eax,dword ptr [esp+0x1C0]
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea ecx,[esp+0x1B8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	lea edx,[esp+0xD8]
	push edx
	call ebp
	lea eax,[esp+0xD8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block66

 Block65:
	push eax
	call _com_issue_error

 Block66:
	mov ecx,dword ptr [esi+0x78]
	mov byte ptr [esp+0x440],0x12
	test ecx,ecx
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	mov eax,dword ptr [esi+0xB8]
	mov ebp,dword ptr [esp+0x14]
	lea edx,[esp+0xD8]
	push edx
	push ebp
	sub eax,0x4F
	push eax
	push 0
	call IWzCanvas::Copy
	mov byte ptr [esp+0x440],0
	cmp word ptr [esp+0xD8],di
	jne Block71

 Block69:
	mov eax,dword ptr [esp+0xE0]
	xor ecx,ecx
	mov word ptr [esp+0xD8],cx
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea edx,[esp+0xD8]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	mov eax,dword ptr [esi+0xB8]
	lea ecx,[eax-0x3F]
	add eax,0xFFFFFFF1
	cmp ecx,eax
	mov dword ptr [esp+0x20],ecx
	jge Block104

 Block73:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0xF8]
	push eax
	mov bl,0x13
	call esi
	lea ecx,[esp+0xF8]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block13

 Block74:
	lea edx,[esp+0x178]
	push edx
	mov byte ptr [esp+0x444],bl
	call esi
	lea eax,[esp+0x178]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block13

 Block75:
	push 0
	push 0
	lea ecx,[esp+0x100]
	push ecx
	lea edx,[esp+0x184]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x1964
	push eax
	mov byte ptr [esp+0x45C],0x14
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x454],0x15
	je Block6

 Block76:
	lea ecx,[esp+0x25C]
	push ecx
	mov byte ptr [esp+0x458],0x14
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x448],0x16
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block84

 Block77:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x24]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov esi,eax
	xor eax,eax
	test esi,esi
	setl al
	dec eax
	and eax,dword ptr [esp+0x24]
	mov edi,eax
	test ebp,ebp
	je Block79

 Block78:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block79:
	mov ebp,edi
	mov dword ptr [esp+0x14],ebp
	test esi,esi
	jge Block81

 Block80:
	cmp esi,0x80004002
	jne Block115

 Block81:
	mov esi,8
	mov byte ptr [esp+0x440],0x14
	cmp word ptr [esp+0x248],si
	jne Block87

 Block82:
	xor eax,eax
	mov word ptr [esp+0x248],ax
	mov eax,dword ptr [esp+0x250]
	test eax,eax
	je Block88

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block84:
	test ebp,ebp
	je Block81

 Block85:
	mov eax,ebp
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	test eax,eax
	je Block81

 Block86:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block81

 Block87:
	lea ecx,[esp+0x248]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block88:
	mov byte ptr [esp+0x440],bl
	cmp word ptr [esp+0x178],si
	jne Block91

 Block89:
	mov eax,dword ptr [esp+0x180]
	xor edx,edx
	mov word ptr [esp+0x178],dx
	test eax,eax
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea eax,[esp+0x178]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block92:
	mov byte ptr [esp+0x440],0
	cmp word ptr [esp+0xF8],si
	jne Block95

 Block93:
	mov eax,dword ptr [esp+0x100]
	xor ecx,ecx
	mov word ptr [esp+0xF8],cx
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea edx,[esp+0xF8]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov eax,3
	mov ecx,0xFF
	mov word ptr [esp+0x58],ax
	mov dword ptr [esp+0x60],ecx
	mov edi,dword ptr [esp+0x18]
	mov esi,dword ptr [edi+0x78]
	mov byte ptr [esp+0x440],0x17
	test esi,esi
	je Block6

 Block97:
	mov ebx,dword ptr [esp+0x58]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x6C]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x30]
	push ebp
	push ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x7C]
	push 0
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block99

 Block98:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block99:
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x440],0
	jne Block102

 Block100:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block103:
	mov edx,dword ptr [edi+0xB8]
	add ebx,0x10
	sub edx,0xF
	cmp ebx,edx
	mov dword ptr [esp+0x20],ebx
	jl Block73

 Block104:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x118]
	push eax
	call esi
	lea ecx,[esp+0x118]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block106

 Block105:
	push eax
	call _com_issue_error

 Block106:
	lea edx,[esp+0x1F8]
	push edx
	mov byte ptr [esp+0x444],0x18
	call esi
	lea eax,[esp+0x1F8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block108

 Block107:
	push eax
	call _com_issue_error

 Block108:
	push 0
	push 0
	lea ecx,[esp+0x120]
	push ecx
	lea edx,[esp+0x204]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x196E
	mov bl,0x19
	push eax
	mov byte ptr [esp+0x45C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x454],0x1A
	jne Block110

 Block109:
	push 0x80004003
	call _com_issue_error

 Block110:
	lea ecx,[esp+0x2BC]
	push ecx
	mov byte ptr [esp+0x458],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x448],0x1B
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block116

 Block111:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x24]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov esi,eax
	xor eax,eax
	test esi,esi
	setl al
	dec eax
	and eax,dword ptr [esp+0x24]
	mov edi,eax
	test ebp,ebp
	je Block113

 Block112:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block113:
	mov ebp,edi
	mov dword ptr [esp+0x14],ebp
	test esi,esi
	jge Block119

 Block114:
	cmp esi,0x80004002
	je Block119

 Block115:
	push esi
	call _com_issue_error

 Block116:
	test ebp,ebp
	je Block119

 Block117:
	mov eax,ebp
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	test eax,eax
	je Block119

 Block118:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block119:
	cmp word ptr [esp+0x2A8],8
	mov byte ptr [esp+0x440],bl
	jne Block122

 Block120:
	xor eax,eax
	mov word ptr [esp+0x2A8],ax
	mov eax,dword ptr [esp+0x2B0]
	test eax,eax
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea ecx,[esp+0x2A8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block123:
	mov esi,8
	mov byte ptr [esp+0x440],0x18
	cmp word ptr [esp+0x1F8],si
	jne Block126

 Block124:
	mov eax,dword ptr [esp+0x200]
	xor edx,edx
	mov word ptr [esp+0x1F8],dx
	test eax,eax
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea eax,[esp+0x1F8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block127:
	mov byte ptr [esp+0x440],0
	cmp word ptr [esp+0x118],si
	jne Block130

 Block128:
	mov eax,dword ptr [esp+0x120]
	xor ecx,ecx
	mov word ptr [esp+0x118],cx
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea edx,[esp+0x118]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block131:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block133

 Block132:
	push eax
	call _com_issue_error

 Block133:
	mov edi,dword ptr [esp+0x18]
	mov esi,dword ptr [edi+0x78]
	mov byte ptr [esp+0x440],0x1C
	test esi,esi
	jne Block135

 Block134:
	push 0x80004003
	call _com_issue_error

 Block135:
	mov ebx,dword ptr [esp+0x38]
	mov ecx,dword ptr [edi+0xB8]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x4C]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x50]
	push ebp
	sub ecx,0xF
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x58]
	push ecx
	push 0
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [edx+0x80]
	push esi
	call eax
	test eax,eax
	jge Block137

 Block136:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block137:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x440],0
	jne Block140

 Block138:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block141:
	cmp dword ptr [edi+0x90],0
	je Block175

 Block142:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x138]
	push eax
	call esi
	lea ecx,[esp+0x138]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block144

 Block143:
	push eax
	call _com_issue_error

 Block144:
	lea edx,[esp+0x198]
	push edx
	mov byte ptr [esp+0x444],0x1D
	call esi
	lea eax,[esp+0x198]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block146

 Block145:
	push eax
	call _com_issue_error

 Block146:
	push 0
	push 0
	lea ecx,[esp+0x140]
	push ecx
	lea edx,[esp+0x1A4]
	push edx
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [ecx+0x94]
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push edx
	mov bl,0x1E
	push eax
	mov byte ptr [esp+0x45C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x454],0x1F
	jne Block148

 Block147:
	push 0x80004003
	call _com_issue_error

 Block148:
	lea eax,[esp+0x22C]
	mov byte ptr [esp+0x454],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x448],0x20
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x24],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block151

 Block149:
	cmp eax,0x80004002
	je Block151

 Block150:
	push eax
	call _com_issue_error

 Block151:
	mov edi,8
	mov byte ptr [esp+0x440],0x22
	cmp word ptr [esp+0x218],di
	jne Block154

 Block152:
	mov eax,dword ptr [esp+0x220]
	xor ecx,ecx
	mov word ptr [esp+0x218],cx
	test eax,eax
	je Block155

 Block153:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block155

 Block154:
	lea edx,[esp+0x218]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block155:
	mov byte ptr [esp+0x440],0x23
	cmp word ptr [esp+0x198],di
	jne Block158

 Block156:
	xor eax,eax
	mov word ptr [esp+0x198],ax
	mov eax,dword ptr [esp+0x1A0]
	test eax,eax
	je Block159

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block158:
	lea ecx,[esp+0x198]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block159:
	mov bl,0x24
	mov byte ptr [esp+0x440],bl
	cmp word ptr [esp+0x138],di
	jne Block162

 Block160:
	mov eax,dword ptr [esp+0x140]
	xor edx,edx
	mov word ptr [esp+0x138],dx
	test eax,eax
	je Block163

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block162:
	lea eax,[esp+0x138]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block163:
	lea ecx,[esp+0x48]
	push ecx
	call esi
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block165

 Block164:
	push eax
	call _com_issue_error

 Block165:
	mov eax,dword ptr [esp+0x18]
	mov esi,dword ptr [eax+0x78]
	add eax,0x78
	mov byte ptr [esp+0x440],0x25
	test esi,esi
	jne Block167

 Block166:
	push 0x80004003
	call _com_issue_error

 Block167:
	mov edx,dword ptr [esp+0x48]
	mov edi,dword ptr [esp+0x20]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x5C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x60]
	push edi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x68]
	push 0x14
	push 0
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push esi
	call eax
	test eax,eax
	jge Block169

 Block168:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block169:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x440],bl
	jne Block172

 Block170:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block173

 Block171:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block173

 Block172:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block173:
	mov byte ptr [esp+0x440],0
	test edi,edi
	je Block175

 Block174:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block175:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [edx+0x98]
	cmp eax,3
	je Block177

 Block176:
	cmp eax,2
	jne Block346

 Block177:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x88]
	push eax
	call esi
	lea ecx,[esp+0x88]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block179

 Block178:
	push eax
	call _com_issue_error

 Block179:
	lea edx,[esp+0x1D8]
	push edx
	mov byte ptr [esp+0x444],0x26
	call esi
	lea eax,[esp+0x1D8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block181

 Block180:
	push eax
	call _com_issue_error

 Block181:
	push 0
	push 0
	lea ecx,[esp+0x90]
	push ecx
	lea edx,[esp+0x1E4]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x1965
	mov bl,0x27
	push eax
	mov byte ptr [esp+0x45C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x454],0x28
	jne Block183

 Block182:
	push 0x80004003
	call _com_issue_error

 Block183:
	lea ecx,[esp+0x2AC]
	push ecx
	mov byte ptr [esp+0x458],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x448],0x29
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block186

 Block184:
	cmp eax,0x80004002
	je Block186

 Block185:
	push eax
	call _com_issue_error

 Block186:
	mov edi,8
	mov byte ptr [esp+0x440],bl
	cmp word ptr [esp+0x298],di
	jne Block189

 Block187:
	mov eax,dword ptr [esp+0x2A0]
	xor edx,edx
	mov word ptr [esp+0x298],dx
	test eax,eax
	je Block190

 Block188:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block190

 Block189:
	lea eax,[esp+0x298]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block190:
	mov byte ptr [esp+0x440],0x26
	cmp word ptr [esp+0x1D8],di
	jne Block193

 Block191:
	mov eax,dword ptr [esp+0x1E0]
	xor ecx,ecx
	mov word ptr [esp+0x1D8],cx
	test eax,eax
	je Block194

 Block192:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block194

 Block193:
	lea edx,[esp+0x1D8]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block194:
	mov byte ptr [esp+0x440],0
	cmp word ptr [esp+0x88],di
	jne Block197

 Block195:
	xor eax,eax
	mov word ptr [esp+0x88],ax
	mov eax,dword ptr [esp+0x90]
	test eax,eax
	je Block198

 Block196:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block198

 Block197:
	lea ecx,[esp+0x88]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block198:
	lea edx,[esp+0x28]
	push edx
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block200

 Block199:
	push eax
	call _com_issue_error

 Block200:
	mov eax,dword ptr [esp+0x18]
	mov esi,dword ptr [eax+0x78]
	mov byte ptr [esp+0x440],0x2A
	test esi,esi
	jne Block202

 Block201:
	push 0x80004003
	call _com_issue_error

 Block202:
	mov ecx,dword ptr [eax+0xB8]
	mov edi,dword ptr [esp+0x28]
	mov ebp,dword ptr [esp+0x14]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x40]
	push ebp
	sub ecx,0x40
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x48]
	push ecx
	push 0
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x80]
	push esi
	call eax
	test eax,eax
	jge Block204

 Block203:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block204:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x440],0
	jne Block206

 Block205:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	jmp Block327

 Block206:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]
	jmp Block346

 Block207:
	test byte ptr [esi+0xC34],6
	jne Block266

 Block208:
	lea eax,[esp+0x70]
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	push 0
	lea ebp,[esi+0x78]
	push ebp
	push eax
	mov byte ptr [esp+0x44C],0x3D
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x78]
	add esp,0xC
	mov byte ptr [esp+0x440],0
	test eax,eax
	je Block210

 Block209:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block210:
	push offset _D_VTMISSING
	lea ecx,[esp+0x35C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x3BC]
	mov byte ptr [esp+0x444],0x3E
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [esi+0x28]
	lea ecx,[esp+0x358]
	push ecx
	mov ecx,dword ptr [esi+0x24]
	lea edx,[esp+0x3BC]
	push edx
	push eax
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x450],0x3F
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Create
	lea ecx,[esp+0x3B8]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x358]
	mov byte ptr [esp+0x440],0
	call Ztl_variant_t::~Ztl_variant_t
	mov edx,dword ptr [esi+0x28]
	mov eax,dword ptr [esi+0x24]
	push 0xFFFFFF
	push edx
	push eax
	push 0
	push 0
	mov ecx,ebp
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::DrawRectangle
	push offset _D_VTMISSING
	lea ecx,[esp+0x37C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x3EC]
	mov byte ptr [esp+0x444],0x40
	call Ztl_variant_t::_ctor_1
	push 0
	push 0
	lea ecx,[esp+0x380]
	push ecx
	lea edx,[esp+0x3F4]
	push edx
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,0x41
	push offset _S_UIUIWINDOW2IMGUT__8
	mov byte ptr [esp+0x458],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x454],0x42
	jne Block212

 Block211:
	push 0x80004003
	call _com_issue_error

 Block212:
	lea eax,[esp+0x42C]
	mov byte ptr [esp+0x454],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x448],0x43
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[esp+0x418]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x3E8]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x378]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,3
	mov word ptr [esp+0x2B8],cx
	mov dword ptr [esp+0x2C0],0xFF
	mov eax,dword ptr [esp+0x14]
	lea edx,[esp+0x2B8]
	push edx
	push eax
	push 0
	push 0
	mov ecx,ebp
	mov byte ptr [esp+0x450],0x44
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Copy
	lea ecx,[esp+0x2B8]
	mov byte ptr [esp+0x440],0
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [esi+0xB8]
	mov edi,0x1C
	sub ecx,0x2C
	cmp ecx,edi
	jle Block239

 Block213:
	jmp Block215

 Block215:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xC8]
	push edx
	call esi
	lea eax,[esp+0xC8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block13

 Block216:
	lea ecx,[esp+0xA8]
	push ecx
	mov byte ptr [esp+0x444],0x45
	call esi
	lea edx,[esp+0xA8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block13

 Block217:
	push 0
	push 0
	lea eax,[esp+0xD0]
	push eax
	lea ecx,[esp+0xB4]
	push ecx
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGUT__7
	mov byte ptr [esp+0x458],0x46
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x454],0x47
	je Block6

 Block218:
	lea edx,[esp+0x23C]
	mov byte ptr [esp+0x454],0x46
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x448],0x48
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block220

 Block219:
	cmp eax,0x80004002
	jne Block13

 Block220:
	mov esi,8
	mov byte ptr [esp+0x440],0x46
	cmp word ptr [esp+0x228],si
	jne Block227

 Block221:
	xor eax,eax
	mov word ptr [esp+0x228],ax
	mov eax,dword ptr [esp+0x230]
	test eax,eax
	je Block223

 Block222:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block223:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block224:
	mov byte ptr [esp+0x440],0x45
	cmp word ptr [esp+0xA8],si
	jne Block228

 Block225:
	mov eax,dword ptr [esp+0xB0]
	xor edx,edx
	mov word ptr [esp+0xA8],dx
	test eax,eax
	je Block229

 Block226:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block229

 Block227:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x228]
	push ecx
	call ebx
	jmp Block224

 Block228:
	lea eax,[esp+0xA8]
	push eax
	call ebx

 Block229:
	mov byte ptr [esp+0x440],0
	cmp word ptr [esp+0xC8],si
	jne Block232

 Block230:
	mov eax,dword ptr [esp+0xD0]
	xor ecx,ecx
	mov word ptr [esp+0xC8],cx
	test eax,eax
	je Block233

 Block231:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block233

 Block232:
	lea edx,[esp+0xC8]
	push edx
	call ebx

 Block233:
	mov eax,3
	mov word ptr [esp+0xE8],ax
	mov dword ptr [esp+0xF0],0xFF
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x440],0x49
	test ecx,ecx
	je Block6

 Block234:
	mov eax,dword ptr [esp+0x14]
	lea edx,[esp+0xE8]
	push edx
	push eax
	push edi
	push 0
	call IWzCanvas::Copy
	mov byte ptr [esp+0x440],0
	cmp word ptr [esp+0xE8],si
	jne Block237

 Block235:
	mov eax,dword ptr [esp+0xF0]
	xor ecx,ecx
	mov word ptr [esp+0xE8],cx
	test eax,eax
	je Block238

 Block236:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block238

 Block237:
	lea edx,[esp+0xE8]
	push edx
	call ebx

 Block238:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0xB8]
	add edi,0xD
	sub ecx,0x2C
	cmp edi,ecx
	jl Block215

 Block239:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x128]
	push edx
	call esi
	lea eax,[esp+0x128]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block241

 Block240:
	push eax
	call _com_issue_error

 Block241:
	lea ecx,[esp+0x108]
	push ecx
	mov byte ptr [esp+0x444],0x4A
	call esi
	lea edx,[esp+0x108]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block243

 Block242:
	push eax
	call _com_issue_error

 Block243:
	push 0
	push 0
	lea eax,[esp+0x130]
	push eax
	lea ecx,[esp+0x114]
	push ecx
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,0x4B
	push offset _S_UIUIWINDOW2IMGUT__6
	mov byte ptr [esp+0x458],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x454],0x4C
	jne Block245

 Block244:
	push 0x80004003
	call _com_issue_error

 Block245:
	lea edx,[esp+0x24C]
	mov byte ptr [esp+0x454],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x448],0x4D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block248

 Block246:
	cmp eax,0x80004002
	je Block248

 Block247:
	push eax
	call _com_issue_error

 Block248:
	mov esi,8
	mov byte ptr [esp+0x440],bl
	cmp word ptr [esp+0x238],si
	jne Block255

 Block249:
	xor eax,eax
	mov word ptr [esp+0x238],ax
	mov eax,dword ptr [esp+0x240]
	test eax,eax
	je Block251

 Block250:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block251:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block252:
	mov byte ptr [esp+0x440],0x4A
	cmp word ptr [esp+0x108],si
	jne Block256

 Block253:
	mov eax,dword ptr [esp+0x110]
	xor edx,edx
	mov word ptr [esp+0x108],dx
	test eax,eax
	je Block257

 Block254:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block257

 Block255:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x238]
	push ecx
	call edi
	jmp Block252

 Block256:
	lea eax,[esp+0x108]
	push eax
	call edi

 Block257:
	mov byte ptr [esp+0x440],0
	cmp word ptr [esp+0x128],si
	jne Block260

 Block258:
	mov eax,dword ptr [esp+0x130]
	xor ecx,ecx
	mov word ptr [esp+0x128],cx
	test eax,eax
	je Block261

 Block259:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block261

 Block260:
	lea edx,[esp+0x128]
	push edx
	call edi

 Block261:
	mov eax,3
	mov word ptr [esp+0x148],ax
	mov dword ptr [esp+0x150],0xFF
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x440],0x4E
	test ecx,ecx
	jne Block263

 Block262:
	push 0x80004003
	call _com_issue_error

 Block263:
	mov eax,dword ptr [esp+0x18]
	mov ebp,dword ptr [esp+0x14]
	lea edx,[esp+0x148]
	push edx
	mov edx,dword ptr [eax+0xB8]
	push ebp
	sub edx,0x2C
	push edx
	push 0
	call IWzCanvas::Copy
	mov byte ptr [esp+0x440],0
	cmp word ptr [esp+0x148],si
	jne Block265

 Block264:
	xor eax,eax
	mov word ptr [esp+0x148],ax
	mov eax,dword ptr [esp+0x150]
	jmp Block327

 Block265:
	lea ecx,[esp+0x148]
	push ecx
	call edi
	jmp Block346

 Block266:
	lea edx,[esp+0x6C]
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea edi,[esi+0x78]
	push ebp
	push edi
	push eax
	mov byte ptr [esp+0x44C],0x2B
	mov dword ptr [esp+0x2C],edi
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x74]
	add esp,0xC
	mov byte ptr [esp+0x440],0
	cmp eax,ebp
	je Block268

 Block267:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block268:
	push offset _D_VTMISSING
	lea ecx,[esp+0x2FC]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x3DC]
	mov byte ptr [esp+0x444],0x2C
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x440],0x2D
	cmp ecx,ebp
	jne Block270

 Block269:
	push 0x80004003
	call _com_issue_error

 Block270:
	lea eax,[esp+0x2F8]
	push eax
	mov eax,dword ptr [esi+0x28]
	lea edx,[esp+0x3DC]
	push edx
	mov edx,dword ptr [esi+0x24]
	push eax
	push edx
	call IWzCanvas::Create
	lea ecx,[esp+0x3D8]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x2F8]
	mov byte ptr [esp+0x440],0
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [edi]
	cmp ecx,ebp
	jne Block272

 Block271:
	push 0x80004003
	call _com_issue_error

 Block272:
	mov eax,dword ptr [esi+0x28]
	mov edx,dword ptr [esi+0x24]
	push 0xFFFFFF
	push eax
	push edx
	push ebp
	push ebp
	call IWzCanvas::DrawRectangle
	push offset _D_VTMISSING
	lea ecx,[esp+0x32C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x30C]
	mov byte ptr [esp+0x444],0x2E
	call Ztl_variant_t::_ctor_1
	push ebp
	push ebp
	lea eax,[esp+0x330]
	push eax
	lea ecx,[esp+0x314]
	push ecx
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,0x2F
	push offset _S_UIUIWINDOW2IMGUT__5
	mov byte ptr [esp+0x458],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x454],0x30
	cmp dword ptr [_D_G_RM],ebp
	jne Block274

 Block273:
	push 0x80004003
	call _com_issue_error

 Block274:
	lea edx,[esp+0x41C]
	mov byte ptr [esp+0x454],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x448],0x31
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[esp+0x408]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x308]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x328]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,3
	mov word ptr [esp+0x2C8],ax
	mov dword ptr [esp+0x2D0],0xFF
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x440],0x32
	cmp ecx,ebp
	jne Block276

 Block275:
	push 0x80004003
	call _com_issue_error

 Block276:
	mov eax,dword ptr [esp+0x14]
	lea edx,[esp+0x2C8]
	push edx
	push eax
	push 0
	push 0
	call IWzCanvas::Copy
	lea ecx,[esp+0x2C8]
	mov byte ptr [esp+0x440],0
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [esi+0xB8]
	mov ebx,dword ptr [ZImports::_VariantInit]
	mov edi,0x1C
	sub ecx,0x2C
	cmp ecx,edi
	jle Block301

 Block277:
	lea edx,[esp+0x188]
	push edx
	call ebx
	lea eax,[esp+0x188]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block13

 Block278:
	lea ecx,[esp+0x168]
	push ecx
	mov byte ptr [esp+0x444],0x33
	call ebx
	lea edx,[esp+0x168]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block13

 Block279:
	push 0
	push 0
	lea eax,[esp+0x190]
	push eax
	lea ecx,[esp+0x174]
	push ecx
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGUT__4
	mov byte ptr [esp+0x458],0x34
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x454],0x35
	je Block6

 Block280:
	lea edx,[esp+0x26C]
	mov byte ptr [esp+0x454],0x34
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x448],0x36
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block282

 Block281:
	cmp eax,0x80004002
	jne Block13

 Block282:
	mov esi,8
	mov byte ptr [esp+0x440],0x34
	cmp word ptr [esp+0x258],si
	jne Block289

 Block283:
	xor eax,eax
	mov word ptr [esp+0x258],ax
	mov eax,dword ptr [esp+0x260]
	test eax,eax
	je Block285

 Block284:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block285:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block286:
	mov byte ptr [esp+0x440],0x33
	cmp word ptr [esp+0x168],si
	jne Block290

 Block287:
	mov eax,dword ptr [esp+0x170]
	xor edx,edx
	mov word ptr [esp+0x168],dx
	test eax,eax
	je Block291

 Block288:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block291

 Block289:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x258]
	push ecx
	call ebp
	jmp Block286

 Block290:
	lea eax,[esp+0x168]
	push eax
	call ebp

 Block291:
	mov byte ptr [esp+0x440],0
	cmp word ptr [esp+0x188],si
	jne Block294

 Block292:
	mov eax,dword ptr [esp+0x190]
	xor ecx,ecx
	mov word ptr [esp+0x188],cx
	test eax,eax
	je Block295

 Block293:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block295

 Block294:
	lea edx,[esp+0x188]
	push edx
	call ebp

 Block295:
	mov eax,3
	mov word ptr [esp+0x1A8],ax
	mov dword ptr [esp+0x1B0],0xFF
	mov ecx,dword ptr [esp+0x20]
	mov ecx,dword ptr [ecx]
	mov byte ptr [esp+0x440],0x37
	test ecx,ecx
	je Block6

 Block296:
	mov eax,dword ptr [esp+0x14]
	lea edx,[esp+0x1A8]
	push edx
	push eax
	push edi
	push 0
	call IWzCanvas::Copy
	mov byte ptr [esp+0x440],0
	cmp word ptr [esp+0x1A8],si
	jne Block299

 Block297:
	mov eax,dword ptr [esp+0x1B0]
	xor ecx,ecx
	mov word ptr [esp+0x1A8],cx
	test eax,eax
	je Block300

 Block298:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block300

 Block299:
	lea edx,[esp+0x1A8]
	push edx
	call ebp

 Block300:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0xB8]
	add edi,0xD
	sub ecx,0x2C
	cmp edi,ecx
	jl Block277

 Block301:
	lea edx,[esp+0x1E8]
	push edx
	call ebx
	lea eax,[esp+0x1E8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block303

 Block302:
	push eax
	call _com_issue_error

 Block303:
	lea ecx,[esp+0x78]
	push ecx
	mov byte ptr [esp+0x444],0x38
	call ebx
	lea edx,[esp+0x78]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block305

 Block304:
	push eax
	call _com_issue_error

 Block305:
	push 0
	push 0
	lea eax,[esp+0x1F0]
	push eax
	lea ecx,[esp+0x84]
	push ecx
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,0x39
	push offset _S_UIUIWINDOW2IMGUT__3
	mov byte ptr [esp+0x458],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x454],0x3A
	jne Block307

 Block306:
	push 0x80004003
	call _com_issue_error

 Block307:
	lea edx,[esp+0x28C]
	mov byte ptr [esp+0x454],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x448],0x3B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block310

 Block308:
	cmp eax,0x80004002
	je Block310

 Block309:
	push eax
	call _com_issue_error

 Block310:
	mov esi,8
	mov byte ptr [esp+0x440],bl
	cmp word ptr [esp+0x278],si
	jne Block317

 Block311:
	xor eax,eax
	mov word ptr [esp+0x278],ax
	mov eax,dword ptr [esp+0x280]
	test eax,eax
	je Block313

 Block312:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block313:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block314:
	mov byte ptr [esp+0x440],0x38
	cmp word ptr [esp+0x78],si
	jne Block318

 Block315:
	mov eax,dword ptr [esp+0x80]
	xor edx,edx
	mov word ptr [esp+0x78],dx
	test eax,eax
	je Block319

 Block316:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block319

 Block317:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x278]
	push ecx
	call edi
	jmp Block314

 Block318:
	lea eax,[esp+0x78]
	push eax
	call edi

 Block319:
	mov byte ptr [esp+0x440],0
	cmp word ptr [esp+0x1E8],si
	jne Block322

 Block320:
	mov eax,dword ptr [esp+0x1F0]
	xor ecx,ecx
	mov word ptr [esp+0x1E8],cx
	test eax,eax
	je Block323

 Block321:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block323

 Block322:
	lea edx,[esp+0x1E8]
	push edx
	call edi

 Block323:
	mov eax,3
	mov word ptr [esp+0x208],ax
	mov dword ptr [esp+0x210],0xFF
	mov ecx,dword ptr [esp+0x20]
	mov ecx,dword ptr [ecx]
	mov byte ptr [esp+0x440],0x3C
	test ecx,ecx
	jne Block325

 Block324:
	push 0x80004003
	call _com_issue_error

 Block325:
	mov eax,dword ptr [esp+0x18]
	mov ebp,dword ptr [esp+0x14]
	lea edx,[esp+0x208]
	push edx
	mov edx,dword ptr [eax+0xB8]
	push ebp
	sub edx,0x2C
	push edx
	push 0
	call IWzCanvas::Copy
	mov byte ptr [esp+0x440],0
	cmp word ptr [esp+0x208],si
	jne Block329

 Block326:
	xor eax,eax
	mov word ptr [esp+0x208],ax
	mov eax,dword ptr [esp+0x210]

 Block327:
	test eax,eax
	je Block346

 Block328:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block346

 Block329:
	lea ecx,[esp+0x208]
	push ecx
	call edi
	jmp Block346

 Block330:
	push ebp
	push ebp
	push 1
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGUT__2
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	jmp Block346

 Block331:
	push ebp
	push ebp
	push 1
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGUT__1
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	jmp Block346

 Block332:
	lea edx,[esp+0x70]
	push 0x3D0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edi,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	push 0
	lea esi,[edi+0x78]
	push esi
	push eax
	mov byte ptr [esp+0x44C],0x4F
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x7C]
	add esp,0xC
	mov byte ptr [esp+0x440],0
	test eax,eax
	je Block334

 Block333:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block334:
	push offset _D_VTMISSING
	lea ecx,[esp+0x36C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x34C]
	mov byte ptr [esp+0x444],0x50
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x440],0x51
	test ecx,ecx
	jne Block336

 Block335:
	push 0x80004003
	call _com_issue_error

 Block336:
	lea eax,[esp+0x368]
	push eax
	mov eax,dword ptr [edi+0x28]
	lea edx,[esp+0x34C]
	push edx
	mov edx,dword ptr [edi+0x24]
	push eax
	push edx
	call IWzCanvas::Create
	lea ecx,[esp+0x348]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x368]
	mov byte ptr [esp+0x440],0
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [esi]
	test ecx,ecx
	jne Block338

 Block337:
	push 0x80004003
	call _com_issue_error

 Block338:
	mov eax,dword ptr [edi+0x28]
	mov edx,dword ptr [edi+0x24]
	push 0xFFFFFF
	push eax
	push edx
	push 0
	push 0
	call IWzCanvas::DrawRectangle
	push offset _D_VTMISSING
	lea ecx,[esp+0x3AC]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x38C]
	mov byte ptr [esp+0x444],0x52
	call Ztl_variant_t::_ctor_1
	push 0
	push 0
	lea eax,[esp+0x3B0]
	push eax
	lea ecx,[esp+0x394]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 0x15BA
	mov bl,0x53
	push edx
	mov byte ptr [esp+0x45C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x454],0x54
	jne Block340

 Block339:
	push 0x80004003
	call _com_issue_error

 Block340:
	lea eax,[esp+0x43C]
	mov byte ptr [esp+0x454],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x448],0x55
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block343

 Block341:
	cmp eax,0x80004002
	je Block343

 Block342:
	push eax
	call _com_issue_error

 Block343:
	lea ecx,[esp+0x428]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x388]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x3A8]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,3
	mov word ptr [esp+0x2D8],cx
	mov dword ptr [esp+0x2E0],0xFF
	mov esi,dword ptr [esi]
	mov byte ptr [esp+0x440],0x56
	test esi,esi
	jne Block345

 Block344:
	push 0x80004003
	call _com_issue_error

 Block345:
	mov ebp,dword ptr [esp+0x14]
	lea edx,[esp+0x2D8]
	push edx
	push ebp
	push 0
	push 0
	mov ecx,esi
	call IWzCanvas::Copy
	lea ecx,[esp+0x2D8]
	call Ztl_variant_t::~Ztl_variant_t

 Block346:
	mov dword ptr [esp+0x440],0xFFFFFFFF
	test ebp,ebp
	je Block348

 Block347:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block348:
	mov ecx,dword ptr [esp+0x438]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x430
	ret
}
}
// CTextAnalyzer::GetPhrase
_SUB_EXCEPTION_HANDLER(585850)
__SUB_CLASS_THIS(00585850, __thiscall, 44473,  CTextAnalyzer, void, ZXString<char>&, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_585850
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
	mov ebx,ecx
	mov ebp,dword ptr [esp+0x2C]
	push offset _S_
	mov ecx,ebp
	call ZXString<char>::AssignCStr
	xor eax,eax
	mov dword ptr [esp+0x2C],eax
	mov edi,dword ptr [esp+0x28]
	push eax
	mov dword ptr [esp+0x24],eax
	lea eax,[esp+0x30]
	push eax
	push edi
	mov ecx,ebx
	call CTextAnalyzer::GetCharacter
	mov esi,dword ptr [esp+0x2C]
	test esi,esi
	je Block16

 Block1:
	cmp byte ptr [esi],0
	je Block15

 Block2:
	mov al,byte ptr [esi]
	cmp al,0xD
	je Block9

 Block3:
	cmp al,0x23
	je Block6

 Block4:
	cmp al,0x5C
	je Block9

 Block5:
	push ebp
	push edi
	mov ecx,ebx
	call CTextAnalyzer::GetPhrase_Gen
	jmp Block15

 Block6:
	mov ecx,dword ptr [esi-4]
	push ecx
	push esi
	mov ecx,ebp
	call ZXString<char>::_Cat
	mov edx,dword ptr [esi-4]
	push 0xFFFFFFFF
	push edx
	lea eax,[esp+0x30]
	push eax
	mov ecx,edi
	call ZXString<char>::Mid
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x24],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	push ebp
	push edi
	mov ecx,ebx
	call CTextAnalyzer::GetPhrase_Sharp
	jmp Block15

 Block9:
	mov ecx,dword ptr [esi-4]
	push ecx
	push esi
	mov ecx,ebp
	call ZXString<char>::_Cat
	mov edx,dword ptr [esi-4]
	push 0xFFFFFFFF
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call ZXString<char>::Mid
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x24],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	push 1
	lea ecx,[esp+0x30]
	push ecx
	push edi
	mov ecx,ebx
	call CTextAnalyzer::GetCharacter
	mov esi,dword ptr [esp+0x2C]
	test esi,esi
	je Block13

 Block12:
	mov eax,dword ptr [esi-4]
	jmp Block14

 Block13:
	xor eax,eax

 Block14:
	push eax
	push esi
	mov ecx,ebp
	call ZXString<char>::_Cat

 Block15:
	test esi,esi

 Block16:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	je Block18

 Block17:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8
}
}
// CUtilDlgEx::CUtilDlgEx
_SUB_EXCEPTION_HANDLER(5859C0)
__SUB_CLASS_THIS0(005859C0, __thiscall, 44603,  CUtilDlgEx, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5859C0
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
	mov ebp,ecx
	mov dword ptr [esp+0x20],ebp
	call CDialog::_ctor_default
	xor esi,esi
	int 3// TODO: 	mov dword ptr [ebp],offset CUtilDlgEx::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [ebp+4],offset CUtilDlgEx::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [ebp+8],offset CUtilDlgEx::`vftable'{for `ZRefCounted'}
	mov dword ptr [ebp+0x90],esi
	mov dword ptr [esp+0x3C],esi
	mov dword ptr [ebp+0xD8],esi
	mov dword ptr [ebp+0xE0],esi
	mov dword ptr [ebp+0xE4],esi
	mov dword ptr [ebp+0x104],esi
	mov dword ptr [ebp+0x108],esi
	mov dword ptr [ebp+0x11C],esi
	mov dword ptr [ebp+0x120],esi
	mov dword ptr [ebp+0x12C],esi
	mov dword ptr [ebp+0x130],esi
	mov dword ptr [ebp+0x134],esi
	mov dword ptr [ebp+0x138],esi
	mov dword ptr [ebp+0x13C],esi
	mov dword ptr [ebp+0x144],esi
	mov dword ptr [ebp+0x14C],esi
	mov dword ptr [ebp+0x154],esi
	mov dword ptr [ebp+0x158],esi
	mov dword ptr [ebp+0x15C],esi
	mov dword ptr [ebp+0x164],esi
	mov dword ptr [ebp+0x168],esi
	lea ecx,[ebp+0x16C]
	mov byte ptr [esp+0x3C],0x11
	call CUIToolTip::_ctor_default
	mov dword ptr [ebp+0xBB8],esi
	mov dword ptr [ebp+0xBC0],esi
	mov dword ptr [ebp+0xBC8],esi
	mov dword ptr [ebp+0xBD0],esi
	mov dword ptr [ebp+0xBD8],esi
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 7
	push 8
	lea eax,[ebp+0xBDC]
	push eax
	mov byte ptr [esp+0x50],0x17
	call __eh_vector_ctor_iterator
	mov dword ptr [ebp+0xC14],esi
	mov dword ptr [ebp+0xC18],esi
	lea ebx,[ebp+0xC1C]
	mov dword ptr [ebx],esi
	mov dword ptr [ebp+0xC20],esi
	mov dword ptr [ebp+0xC24],esi
	mov dword ptr [ebp+0xC28],esi
	mov dword ptr [ebp+0xC2C],esi
	mov dword ptr [ebp+0xC34],esi
	mov dword ptr [ebp+0xC38],esi
	lea ecx,[ebp+0xC3C]
	mov dword ptr [ecx],esi
	mov dword ptr [ecx+4],esi
	mov dword ptr [ecx+8],esi
	mov dword ptr [ecx+0xC],esi
	mov dword ptr [ecx+0x10],esi
	push esi
	push esi
	push ebp
	mov byte ptr [esp+0x48],0x1D
	call CLayoutMan::Init
	lea ecx,[esp+0x17]
	push ecx
	push 0xC
	mov ecx,ebx
	call ZArray<_x_com_ptr<IWzFont>>::_Alloc
	xor edi,edi
	jmp Block2

 Block2:
	lea edx,[esp+0x18]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [eax]
	push esi
	add ecx,edi
	push ecx
	push eax
	mov byte ptr [esp+0x48],0x1E
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x3C],0x1D
	cmp eax,esi
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	add edi,4
	cmp edi,0x30
	jl Block2

 Block5:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea ecx,[esp+0x24]
	push ecx
	push 0xFF555555
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1A25
	push edx
	mov byte ptr [esp+0x54],0x1F
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x4C],0x20
	cmp ecx,esi
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	mov byte ptr [esp+0x4C],0x1F
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],0x1D
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,esi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	lea edx,[esp+0x1C]
	push 0x5B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x3C],0x21
	cmp eax,esi
	je Block15

 Block14:
	mov eax,dword ptr [eax]
	jmp Block16

 Block15:
	xor eax,eax

 Block16:
	mov ecx,8
	mov dword ptr [esp+0x18],eax
	mov word ptr [esp+0x24],cx
	cmp eax,esi
	jne Block18

 Block17:
	xor edi,edi
	jmp Block24

 Block18:
	lea edx,[eax+2]

 Block19:
	mov cx,word ptr [eax]
	add eax,2
	cmp cx,si
	jne Block19

 Block20:
	sub eax,edx
	sar eax,1
	mov ebx,eax
	lea edx,[ebx+ebx+6]
	push edx
	call CoTaskMemAlloc
	mov edi,eax
	cmp edi,esi
	jne Block22

 Block21:
	xor edi,edi
	jmp Block23

 Block22:
	lea eax,[ebx+ebx]
	mov dword ptr [edi],eax
	add eax,2
	push eax
	mov eax,dword ptr [esp+0x1C]
	push eax
	add edi,4
	push edi
	call _memcpy
	add esp,0xC

 Block23:
	mov eax,dword ptr [esp+0x18]

 Block24:
	mov dword ptr [esp+0x2C],edi
	cmp edi,esi
	jne Block27

 Block25:
	cmp eax,esi
	je Block27

 Block26:
	push 0x8007000E
	call _com_issue_error

 Block27:
	lea ecx,[esp+0x24]
	push ecx
	push 0xFF555555
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1A25
	mov bl,0x22
	push edx
	mov byte ptr [esp+0x54],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [ebp+0xC1C]
	add eax,4
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],0x23
	cmp eax,esi
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],0x21
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,esi
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x3C],0x1D
	cmp eax,esi
	je Block41

 Block34:
	mov edi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,esi
	jne Block41

 Block35:
	cmp edi,esi
	je Block41

 Block36:
	mov eax,dword ptr [edi]
	cmp eax,esi
	je Block38

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block38:
	mov eax,dword ptr [edi+4]
	cmp eax,esi
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
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	lea ecx,[esp+0x24]
	push ecx
	push 0xFFFF0000
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1A25
	push edx
	mov byte ptr [esp+0x54],0x24
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [ebp+0xC1C]
	add eax,8
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],0x25
	cmp eax,esi
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	mov ecx,eax
	mov byte ptr [esp+0x4C],0x24
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],0x1D
	jne Block48

 Block46:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,esi
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	lea edx,[esp+0x1C]
	push 0x5B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x3C],0x26
	cmp eax,esi
	je Block51

 Block50:
	mov eax,dword ptr [eax]
	jmp Block52

 Block51:
	xor eax,eax

 Block52:
	mov ecx,8
	mov dword ptr [esp+0x18],eax
	mov word ptr [esp+0x24],cx
	cmp eax,esi
	jne Block54

 Block53:
	xor edi,edi
	jmp Block60

 Block54:
	lea edx,[eax+2]
	nop

 Block55:
	mov cx,word ptr [eax]
	add eax,2
	cmp cx,si
	jne Block55

 Block56:
	sub eax,edx
	sar eax,1
	mov ebx,eax
	lea edx,[ebx+ebx+6]
	push edx
	call CoTaskMemAlloc
	mov edi,eax
	cmp edi,esi
	jne Block58

 Block57:
	xor edi,edi
	jmp Block59

 Block58:
	lea eax,[ebx+ebx]
	mov dword ptr [edi],eax
	add eax,2
	push eax
	mov eax,dword ptr [esp+0x1C]
	push eax
	add edi,4
	push edi
	call _memcpy
	add esp,0xC

 Block59:
	mov eax,dword ptr [esp+0x18]

 Block60:
	mov dword ptr [esp+0x2C],edi
	cmp edi,esi
	jne Block63

 Block61:
	cmp eax,esi
	je Block63

 Block62:
	push 0x8007000E
	call _com_issue_error

 Block63:
	lea ecx,[esp+0x24]
	push ecx
	push 0xFFFF0000
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1A25
	mov bl,0x27
	push edx
	mov byte ptr [esp+0x54],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [ebp+0xC1C]
	add eax,0xC
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],0x28
	cmp eax,esi
	jne Block65

 Block64:
	push 0x80004003
	call _com_issue_error

 Block65:
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],0x26
	jne Block68

 Block66:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,esi
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov edi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x3C],0x1D
	cmp edi,esi
	je Block77

 Block70:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,esi
	jne Block77

 Block71:
	cmp edi,esi
	je Block77

 Block72:
	mov eax,dword ptr [edi]
	cmp eax,esi
	je Block74

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block74:
	mov eax,dword ptr [edi+4]
	cmp eax,esi
	je Block76

 Block75:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block76:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block77:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block79

 Block78:
	push eax
	call _com_issue_error

 Block79:
	lea edx,[esp+0x24]
	push edx
	push 0xFF00FF00
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1A25
	mov bl,0x29
	push eax
	mov byte ptr [esp+0x54],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [ebp+0xC1C]
	add eax,0x10
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],0x2A
	cmp eax,esi
	jne Block81

 Block80:
	push 0x80004003
	call _com_issue_error

 Block81:
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],0x1D
	jne Block84

 Block82:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,esi
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block85:
	lea eax,[esp+0x1C]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x3C],0x2B
	cmp eax,esi
	je Block87

 Block86:
	mov eax,dword ptr [eax]
	jmp Block88

 Block87:
	xor eax,eax

 Block88:
	mov ecx,8
	mov dword ptr [esp+0x18],eax
	mov word ptr [esp+0x24],cx
	cmp eax,esi
	jne Block90

 Block89:
	xor edi,edi
	jmp Block97

 Block90:
	lea edx,[eax+2]
	jmp Block92

 Block92:
	mov cx,word ptr [eax]
	add eax,2
	cmp cx,si
	jne Block92

 Block93:
	sub eax,edx
	sar eax,1
	mov ebx,eax
	lea edx,[ebx+ebx+6]
	push edx
	call CoTaskMemAlloc
	mov edi,eax
	cmp edi,esi
	jne Block95

 Block94:
	xor edi,edi
	jmp Block96

 Block95:
	lea eax,[ebx+ebx]
	mov dword ptr [edi],eax
	add eax,2
	push eax
	mov eax,dword ptr [esp+0x1C]
	push eax
	add edi,4
	push edi
	call _memcpy
	add esp,0xC

 Block96:
	mov eax,dword ptr [esp+0x18]

 Block97:
	mov dword ptr [esp+0x2C],edi
	cmp edi,esi
	jne Block100

 Block98:
	cmp eax,esi
	je Block100

 Block99:
	push 0x8007000E
	call _com_issue_error

 Block100:
	lea ecx,[esp+0x24]
	push ecx
	push 0xFF00FF00
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1A25
	push edx
	mov byte ptr [esp+0x54],0x2C
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [ebp+0xC1C]
	add eax,0x14
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],0x2D
	cmp eax,esi
	jne Block102

 Block101:
	push 0x80004003
	call _com_issue_error

 Block102:
	mov ecx,eax
	mov byte ptr [esp+0x4C],0x2C
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],0x2B
	jne Block105

 Block103:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,esi
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	mov edi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x3C],0x1D
	cmp edi,esi
	je Block114

 Block107:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,esi
	jne Block114

 Block108:
	cmp edi,esi
	je Block114

 Block109:
	mov eax,dword ptr [edi]
	cmp eax,esi
	je Block111

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block111:
	mov eax,dword ptr [edi+4]
	cmp eax,esi
	je Block113

 Block112:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block113:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block114:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block116

 Block115:
	push eax
	call _com_issue_error

 Block116:
	lea edx,[esp+0x24]
	push edx
	push 0xFF0000FF
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1A25
	mov bl,0x2E
	push eax
	mov byte ptr [esp+0x54],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [ebp+0xC1C]
	add eax,0x18
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],0x2F
	cmp eax,esi
	jne Block118

 Block117:
	push 0x80004003
	call _com_issue_error

 Block118:
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],0x1D
	jne Block121

 Block119:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,esi
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block122:
	lea eax,[esp+0x1C]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x3C],0x30
	cmp eax,esi
	je Block124

 Block123:
	mov eax,dword ptr [eax]
	jmp Block125

 Block124:
	xor eax,eax

 Block125:
	mov ecx,8
	mov dword ptr [esp+0x18],eax
	mov word ptr [esp+0x24],cx
	cmp eax,esi
	jne Block127

 Block126:
	xor edi,edi
	jmp Block134

 Block127:
	lea edx,[eax+2]
	jmp Block129

 Block129:
	mov cx,word ptr [eax]
	add eax,2
	cmp cx,si
	jne Block129

 Block130:
	sub eax,edx
	sar eax,1
	mov ebx,eax
	lea edx,[ebx+ebx+6]
	push edx
	call CoTaskMemAlloc
	mov edi,eax
	cmp edi,esi
	jne Block132

 Block131:
	xor edi,edi
	jmp Block133

 Block132:
	lea eax,[ebx+ebx]
	mov dword ptr [edi],eax
	add eax,2
	push eax
	mov eax,dword ptr [esp+0x1C]
	push eax
	add edi,4
	push edi
	call _memcpy
	add esp,0xC

 Block133:
	mov eax,dword ptr [esp+0x18]

 Block134:
	mov dword ptr [esp+0x2C],edi
	cmp edi,esi
	jne Block137

 Block135:
	cmp eax,esi
	je Block137

 Block136:
	push 0x8007000E
	call _com_issue_error

 Block137:
	lea ecx,[esp+0x24]
	push ecx
	push 0xFF0000FF
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1A25
	mov bl,0x31
	push edx
	mov byte ptr [esp+0x54],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [ebp+0xC1C]
	add eax,0x1C
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],0x32
	cmp eax,esi
	jne Block139

 Block138:
	push 0x80004003
	call _com_issue_error

 Block139:
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],0x30
	jne Block142

 Block140:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,esi
	je Block143

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block143

 Block142:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block143:
	mov edi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x3C],0x1D
	cmp edi,esi
	je Block151

 Block144:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,esi
	jne Block151

 Block145:
	cmp edi,esi
	je Block151

 Block146:
	mov eax,dword ptr [edi]
	cmp eax,esi
	je Block148

 Block147:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block148:
	mov eax,dword ptr [edi+4]
	cmp eax,esi
	je Block150

 Block149:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block150:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block151:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block153

 Block152:
	push eax
	call _com_issue_error

 Block153:
	lea edx,[esp+0x24]
	push edx
	push 0xFFFFFFFF
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1A25
	mov bl,0x33
	push eax
	mov byte ptr [esp+0x54],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [ebp+0xC1C]
	add eax,0x20
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],0x34
	cmp eax,esi
	jne Block155

 Block154:
	push 0x80004003
	call _com_issue_error

 Block155:
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],0x1D
	jne Block158

 Block156:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,esi
	je Block159

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block158:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block159:
	lea eax,[esp+0x1C]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x3C],0x35
	cmp eax,esi
	je Block161

 Block160:
	mov eax,dword ptr [eax]
	jmp Block162

 Block161:
	xor eax,eax

 Block162:
	mov ecx,8
	mov dword ptr [esp+0x18],eax
	mov word ptr [esp+0x24],cx
	cmp eax,esi
	jne Block164

 Block163:
	xor edi,edi
	jmp Block171

 Block164:
	lea edx,[eax+2]
	jmp Block166

 Block166:
	mov cx,word ptr [eax]
	add eax,2
	cmp cx,si
	jne Block166

 Block167:
	sub eax,edx
	sar eax,1
	mov ebx,eax
	lea edx,[ebx+ebx+6]
	push edx
	call CoTaskMemAlloc
	mov edi,eax
	cmp edi,esi
	jne Block169

 Block168:
	xor edi,edi
	jmp Block170

 Block169:
	lea eax,[ebx+ebx]
	mov dword ptr [edi],eax
	add eax,2
	push eax
	mov eax,dword ptr [esp+0x1C]
	push eax
	add edi,4
	push edi
	call _memcpy
	add esp,0xC

 Block170:
	mov eax,dword ptr [esp+0x18]

 Block171:
	mov dword ptr [esp+0x2C],edi
	cmp edi,esi
	jne Block174

 Block172:
	cmp eax,esi
	je Block174

 Block173:
	push 0x8007000E
	call _com_issue_error

 Block174:
	lea ecx,[esp+0x24]
	push ecx
	push 0xFFFFFFFF
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1A25
	mov bl,0x36
	push edx
	mov byte ptr [esp+0x54],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [ebp+0xC1C]
	add eax,0x24
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],0x37
	cmp eax,esi
	jne Block176

 Block175:
	push 0x80004003
	call _com_issue_error

 Block176:
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],0x35
	jne Block179

 Block177:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,esi
	je Block180

 Block178:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block180

 Block179:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block180:
	mov edi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x3C],0x1D
	cmp edi,esi
	je Block188

 Block181:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,esi
	jne Block188

 Block182:
	cmp edi,esi
	je Block188

 Block183:
	mov eax,dword ptr [edi]
	cmp eax,esi
	je Block185

 Block184:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block185:
	mov eax,dword ptr [edi+4]
	cmp eax,esi
	je Block187

 Block186:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block187:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block188:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block190

 Block189:
	push eax
	call _com_issue_error

 Block190:
	lea edx,[esp+0x24]
	push edx
	push 0xFF51378C
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x1A25
	mov bl,0x38
	push eax
	mov byte ptr [esp+0x54],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [ebp+0xC1C]
	add eax,0x28
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],0x39
	cmp eax,esi
	jne Block192

 Block191:
	push 0x80004003
	call _com_issue_error

 Block192:
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],0x1D
	jne Block195

 Block193:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,esi
	je Block196

 Block194:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block196

 Block195:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block196:
	lea eax,[esp+0x1C]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x3C],0x3A
	cmp eax,esi
	je Block198

 Block197:
	mov eax,dword ptr [eax]
	jmp Block199

 Block198:
	xor eax,eax

 Block199:
	mov ecx,8
	mov dword ptr [esp+0x18],eax
	mov word ptr [esp+0x24],cx
	cmp eax,esi
	jne Block201

 Block200:
	xor edi,edi
	jmp Block208

 Block201:
	lea edx,[eax+2]
	jmp Block203

 Block203:
	mov cx,word ptr [eax]
	add eax,2
	cmp cx,si
	jne Block203

 Block204:
	sub eax,edx
	sar eax,1
	mov ebx,eax
	lea edx,[ebx+ebx+6]
	push edx
	call CoTaskMemAlloc
	mov edi,eax
	cmp edi,esi
	jne Block206

 Block205:
	xor edi,edi
	jmp Block207

 Block206:
	lea eax,[ebx+ebx]
	mov dword ptr [edi],eax
	add eax,2
	push eax
	mov eax,dword ptr [esp+0x1C]
	push eax
	add edi,4
	push edi
	call _memcpy
	add esp,0xC

 Block207:
	mov eax,dword ptr [esp+0x18]

 Block208:
	mov dword ptr [esp+0x2C],edi
	cmp edi,esi
	jne Block211

 Block209:
	cmp eax,esi
	je Block211

 Block210:
	push 0x8007000E
	call _com_issue_error

 Block211:
	lea ecx,[esp+0x24]
	push ecx
	push 0xFF51378C
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1A25
	mov bl,0x3B
	push edx
	mov byte ptr [esp+0x54],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [ebp+0xC1C]
	add eax,0x2C
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x4C],0x3C
	cmp eax,esi
	jne Block213

 Block212:
	push 0x80004003
	call _com_issue_error

 Block213:
	mov ecx,eax
	mov byte ptr [esp+0x4C],bl
	call IWzFont::Create
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],0x3A
	jne Block216

 Block214:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,esi
	je Block217

 Block215:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block217

 Block216:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block217:
	mov edi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x3C],0x1D
	cmp edi,esi
	je Block225

 Block218:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block225

 Block219:
	cmp edi,esi
	je Block225

 Block220:
	mov eax,dword ptr [edi]
	cmp eax,esi
	je Block222

 Block221:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block222:
	mov eax,dword ptr [edi+4]
	cmp eax,esi
	je Block224

 Block223:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block224:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block225:
	mov eax,ebp
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret
}
}
// CUtilDlgEx::SetUtilDlgEx
_SUB_EXCEPTION_HANDLER(58E9F0)
__SUB_CLASS_THIS(0058E9F0, __thiscall, 44618,  CUtilDlgEx, void, long, long, NakedParam<ZXString<char>>, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_58E9F0
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
	mov esi,ecx
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x30]
	mov ebp,dword ptr [esp+0x38]
	xor ebx,ebx
	mov dword ptr [esi+0x98],eax
	or eax,0xFFFFFFFF
	mov dword ptr [esi+0x110],eax
	mov dword ptr [esi+0x114],eax
	mov dword ptr [esi+0x118],eax
	mov dword ptr [esi+0xC30],eax
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esi+0xBC],ecx
	xor edx,edx
	lea ecx,[esi+0x11C]
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esi+0xA4],ebx
	mov dword ptr [esi+0xA8],ebx
	mov dword ptr [esi+0xAC],ebx
	mov dword ptr [esi+0xB0],ebx
	mov dword ptr [esi+0x128],ebx
	mov dword ptr [esi+0x160],ebx
	mov word ptr [esi+0xDC],dx
	mov dword ptr [esi+0xC0],ebp
	mov dword ptr [esi+0xC4],eax
	call ZArray<CT_INFO *>::RemoveAll
	push 0x14
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov edx,eax
	cmp edx,ebx
	je Block2

 Block1:
	mov ecx,esi
	call CUtilDlgEx::GetBasicCTMargin
	mov edi,eax
	call CUtilDlgEx::GetBasicCTWidth
	xor ecx,ecx
	mov dword ptr [edx+4],ecx
	mov dword ptr [edx+8],ecx
	mov dword ptr [edx+0xC],edi
	int 3// TODO: 	mov dword ptr [edx],offset CTextAnalyzer::`vftable'
	mov dword ptr [edx+0x10],eax
	mov edi,edx
	jmp Block3

 Block2:
	xor edi,edi

 Block3:
	mov dword ptr [esp+0x18],edi
	cmp edi,ebx
	je Block5

 Block4:
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	push ebx
	push ebx
	push ebp
	lea ebp,[esi+0xC1C]
	push ebp
	lea ebx,[esi+0xC18]
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x4C]
	mov dword ptr [esp+0x48],esp
	push edx
	mov byte ptr [esp+0x40],1
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,edi
	call CTextAnalyzer::AnalyzeText
	cmp dword ptr [esi+0x98],4
	mov dword ptr [esi+0xA4],eax
	jne Block11

 Block6:
	test byte ptr [esi+0xC34],2
	je Block10

 Block7:
	mov eax,dword ptr [esi+0x11C]
	test eax,eax
	je Block10

 Block8:
	cmp dword ptr [eax-4],1
	jne Block10

 Block9:
	mov eax,dword ptr [esp+0x38]
	push 1
	push 0
	push eax
	push ebp
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x4C]
	mov dword ptr [esp+0x50],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,edi
	call CTextAnalyzer::AnalyzeText
	push 1
	mov ecx,esi
	mov dword ptr [esi+0xA4],eax
	call CUtilDlgEx::SetUtilDlgEx_LIST

 Block10:
	push 0
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_LIST
	add dword ptr [esi+0xA4],5
	push 0
	mov ecx,esi
	call CUtilDlgEx::Layout_GEN

 Block11:
	cmp dword ptr [esi+0x98],7
	jne Block13

 Block12:
	mov ecx,esi
	call CUtilDlgEx::Layout_INPUT

 Block13:
	cmp dword ptr [esp+0x2C],0
	jne Block15

 Block14:
	mov ecx,offset CUtilDlgEx::ms_lDialog
	call ZList<CUtilDlgEx *>::AddTail_
	mov dword ptr [eax],esi

 Block15:
	mov byte ptr [esp+0x24],0
	test edi,edi
	je Block18

 Block16:
	lea esi,[edi+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block18

 Block17:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block18:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 0x14
}
}
// CUtilDlgEx::MakePet
_SUB_EXCEPTION_HANDLER(57C330)
__SUB_CLASS_THIS0(0057C330, __thiscall, 44605,  CUtilDlgEx, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_57C330
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC0
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xD4]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [ebx+0x160]
	mov ecx,dword ptr [ebx+0x15C]
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x40]
	lea eax,[eax+eax*4]
	push edx
	lea ebp,[ecx+eax*4]
	call edi
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	xor edx,edx
	add esp,8
	cmp eax,edx
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	mov ecx,3
	mov dword ptr [esp+0xDC],edx
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],edx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xDC],1
	cmp ecx,edx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea eax,[esp+0x40]
	push eax
	lea eax,[esp+0x1C]
	push eax
	push edx
	push edx
	push edx
	push edx
	push edx
	lea edx,[esp+0x48]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x164]
	cmp esi,eax
	je Block9

 Block5:
	mov dword ptr [ebx+0x164],eax
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block7:
	test esi,esi
	je Block9

 Block8:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block9:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block11:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0xDC],0
	cmp word ptr [esp+0x18],si
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block15:
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	cmp word ptr [esp+0x40],si
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x40]
	push ecx
	call ebx

 Block19:
	mov ecx,dword ptr [esp+0x14]
	lea edx,[esp+0x2C]
	push edx
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,2
	mov ecx,0xD
	mov dword ptr [esp+0xDC],ebx
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block21

 Block20:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block21:
	mov ecx,dword ptr [esp+0x14]
	mov esi,dword ptr [ecx+0x164]
	mov byte ptr [esp+0xDC],3
	test esi,esi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x64]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x34]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block25

 Block24:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xDC],bl
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	test eax,eax
	je Block31

 Block30:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block31:
	mov ecx,dword ptr [esp+0x14]
	mov esi,dword ptr [ecx+0x164]
	test esi,esi
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block35

 Block34:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block35:
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0x18]
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,4
	mov edx,0xD
	mov dword ptr [esp+0xDC],ebx
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block37:
	mov eax,dword ptr [esp+0x14]
	mov esi,dword ptr [eax+0x164]
	mov byte ptr [esp+0xDC],5
	test esi,esi
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block41

 Block40:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block41:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xDC],bl
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	test eax,eax
	je Block47

 Block46:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block47:
	mov ebx,dword ptr [esp+0x14]
	mov esi,dword ptr [ebx+0x164]
	test esi,esi
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 1
	push esi
	call ecx
	test eax,eax
	jge Block51

 Block50:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block51:
	mov esi,dword ptr [ebx+0x164]
	test esi,esi
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xD8]
	push 1
	push esi
	call eax
	test eax,eax
	jge Block55

 Block54:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block55:
	cmp dword ptr [ebp+0x10],0
	jne Block119

 Block56:
	lea ecx,[esp+0x18]
	push ecx
	call edi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	lea eax,[esp+0x40]
	mov ebx,6
	push eax
	mov dword ptr [esp+0xE0],ebx
	call edi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block60

 Block59:
	push eax
	call _com_issue_error

 Block60:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edx+0x164]
	mov byte ptr [esp+0xDC],7
	test ecx,ecx
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	lea eax,[esp+0x18]
	push eax
	lea edx,[esp+0x44]
	push edx
	push 0xB4
	push 0xBB
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0xDC],bl
	cmp word ptr [esp+0x40],si
	jne Block65

 Block63:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	cmp word ptr [esp+0x18],si
	jne Block69

 Block67:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block70:
	xor ebx,ebx
	int 3// TODO: 	mov dword ptr [esp+0xB0],offset ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>::`vftable'
	mov dword ptr [esp+0xB8],ebx
	mov dword ptr [esp+0xBC],ebx
	mov dword ptr [esp+0xC0],ebx
	mov edx,dword ptr [ebp]
	mov esi,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	lea ecx,[esp+0xB0]
	push ecx
	push ebx
	push 1
	push edx
	mov dword ptr [esp+0xEC],8
	call CPetTemplate::GetPetTemplate
	add esp,4
	push eax
	mov ecx,esi
	call CActionMan::LoadPetAction
	mov eax,dword ptr [esp+0xBC]
	mov dword ptr [esp+0x28],eax
	cmp eax,ebx
	je Block104

 Block71:
	mov ebp,dword ptr [esp+0x14]
	mov bl,0xB
	nop

 Block72:
	lea eax,[esp+0x28]
	push eax
	call ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	lea ecx,[esp+0x50]
	push ecx
	call edi
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block73:
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0xE0],9
	call edi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block74:
	lea edx,[esp+0x60]
	push edx
	mov byte ptr [esp+0xE0],0xA
	call edi
	lea eax,[esp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block75:
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0xE0],bl
	call edi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block76:
	mov eax,dword ptr [esi+0x40]
	mov ecx,3
	mov word ptr [esp+0x40],cx
	mov dword ptr [esp+0x48],eax
	mov ecx,dword ptr [ebp+0x164]
	mov esi,dword ptr [esi+0xC]
	mov byte ptr [esp+0xDC],0xD
	test ecx,ecx
	je Block3

 Block77:
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x34]
	push eax
	lea edx,[esp+0x68]
	push edx
	lea eax,[esp+0x24]
	push eax
	lea edx,[esp+0x50]
	push edx
	push esi
	lea eax,[esp+0x88]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x70],8
	jne Block80

 Block78:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea edx,[esp+0x70]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0xDC],0xC
	jne Block88

 Block82:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block84

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block84:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block85:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xDC],bl
	jne Block89

 Block86:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block90

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block88:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x40]
	push ecx
	call esi
	jmp Block85

 Block89:
	lea eax,[esp+0x18]
	push eax
	call esi

 Block90:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0xDC],0xA
	jne Block93

 Block91:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea edx,[esp+0x60]
	push edx
	call esi

 Block94:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0xDC],9
	jne Block97

 Block95:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea ecx,[esp+0x30]
	push ecx
	call esi

 Block98:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0xDC],8
	jne Block101

 Block99:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea eax,[esp+0x50]
	push eax
	call esi

 Block102:
	cmp dword ptr [esp+0x28],0
	jne Block72

 Block103:
	xor ebx,ebx

 Block104:
	lea ecx,[esp+0x30]
	push ecx
	call edi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block106

 Block105:
	push eax
	call _com_issue_error

 Block106:
	lea eax,[esp+0x50]
	mov bl,0xE
	push eax
	mov byte ptr [esp+0xE0],bl
	call edi
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block108

 Block107:
	push eax
	call _com_issue_error

 Block108:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edx+0x164]
	mov byte ptr [esp+0xDC],0xF
	test ecx,ecx
	jne Block110

 Block109:
	push 0x80004003
	call _com_issue_error

 Block110:
	lea eax,[esp+0x30]
	push eax
	lea edx,[esp+0x54]
	push edx
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0xDC],bl
	cmp word ptr [esp+0x50],si
	jne Block113

 Block111:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block114:
	mov byte ptr [esp+0xDC],8
	cmp word ptr [esp+0x30],si
	jne Block117

 Block115:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block118:
	lea ecx,[esp+0xB0]
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0xB0],offset ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>::RemoveAll
	jmp Block172

 Block119:
	lea ecx,[esp+0x30]
	push ecx
	call edi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block121

 Block120:
	push eax
	call _com_issue_error

 Block121:
	lea eax,[esp+0x50]
	mov ebx,0x10
	push eax
	mov dword ptr [esp+0xE0],ebx
	call edi
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block123

 Block122:
	push eax
	call _com_issue_error

 Block123:
	mov esi,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi+0x164]
	mov byte ptr [esp+0xDC],0x11
	test ecx,ecx
	jne Block125

 Block124:
	push 0x80004003
	call _com_issue_error

 Block125:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x54]
	push eax
	push 0xB4
	push 0xCC
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0xDC],bl
	jne Block128

 Block126:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block129

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block128:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block129:
	cmp word ptr [esp+0x30],8
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	jne Block132

 Block130:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block133

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block133

 Block132:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block133:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push 1
	push 1
	push edx
	lea eax,[esp+0x34]
	push eax
	call CItemInfo::GetItemIcon
	lea ecx,[esp+0x70]
	push ecx
	mov dword ptr [esp+0xE0],0x12
	call edi
	lea edx,[esp+0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block135

 Block134:
	push eax
	call _com_issue_error

 Block135:
	lea eax,[esp+0xA0]
	push eax
	mov byte ptr [esp+0xE0],0x13
	call edi
	lea ecx,[esp+0xA0]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block137

 Block136:
	push eax
	call _com_issue_error

 Block137:
	lea edx,[esp+0x80]
	push edx
	mov byte ptr [esp+0xE0],0x14
	call edi
	lea eax,[esp+0x80]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block139

 Block138:
	push eax
	call _com_issue_error

 Block139:
	lea ecx,[esp+0x90]
	push ecx
	mov byte ptr [esp+0xE0],0x15
	call edi
	lea edx,[esp+0x90]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block141

 Block140:
	push eax
	call _com_issue_error

 Block141:
	lea eax,[esp+0x60]
	mov bl,0x16
	push eax
	mov byte ptr [esp+0xE0],bl
	call edi
	lea ecx,[esp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block143

 Block142:
	push eax
	call _com_issue_error

 Block143:
	mov ecx,dword ptr [esi+0x164]
	mov byte ptr [esp+0xDC],0x17
	test ecx,ecx
	jne Block145

 Block144:
	push 0x80004003
	call _com_issue_error

 Block145:
	lea edx,[esp+0x70]
	push edx
	lea eax,[esp+0xA4]
	push eax
	lea edx,[esp+0x88]
	push edx
	lea eax,[esp+0x9C]
	push eax
	mov eax,dword ptr [esp+0x38]
	lea edx,[esp+0x70]
	push edx
	push eax
	lea edx,[esp+0xDC]
	push edx
	call IWzGr2DLayer::InsertCanvas
	mov edi,8
	cmp word ptr [esp+0xC4],di
	jne Block152

 Block146:
	xor eax,eax
	mov word ptr [esp+0xC4],ax
	mov eax,dword ptr [esp+0xCC]
	test eax,eax
	je Block148

 Block147:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block148:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block149:
	mov byte ptr [esp+0xDC],bl
	cmp word ptr [esp+0x60],di
	jne Block153

 Block150:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	test eax,eax
	je Block154

 Block151:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block154

 Block152:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0xC4]
	push ecx
	call esi
	jmp Block149

 Block153:
	lea eax,[esp+0x60]
	push eax
	call esi

 Block154:
	mov byte ptr [esp+0xDC],0x15
	cmp word ptr [esp+0x90],di
	jne Block157

 Block155:
	mov eax,dword ptr [esp+0x98]
	xor ecx,ecx
	mov word ptr [esp+0x90],cx
	test eax,eax
	je Block158

 Block156:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block158

 Block157:
	lea edx,[esp+0x90]
	push edx
	call esi

 Block158:
	mov byte ptr [esp+0xDC],0x14
	cmp word ptr [esp+0x80],di
	jne Block161

 Block159:
	xor eax,eax
	mov word ptr [esp+0x80],ax
	mov eax,dword ptr [esp+0x88]
	test eax,eax
	je Block162

 Block160:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block162

 Block161:
	lea ecx,[esp+0x80]
	push ecx
	call esi

 Block162:
	mov byte ptr [esp+0xDC],0x13
	cmp word ptr [esp+0xA0],di
	jne Block165

 Block163:
	mov eax,dword ptr [esp+0xA8]
	xor edx,edx
	mov word ptr [esp+0xA0],dx
	test eax,eax
	je Block166

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block166

 Block165:
	lea eax,[esp+0xA0]
	push eax
	call esi

 Block166:
	mov byte ptr [esp+0xDC],0x12
	cmp word ptr [esp+0x70],di
	jne Block169

 Block167:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	test eax,eax
	je Block170

 Block168:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block170

 Block169:
	lea edx,[esp+0x70]
	push edx
	call esi

 Block170:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	test eax,eax
	je Block172

 Block171:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block172:
	mov ecx,dword ptr [esp+0xD4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xCC
	ret
}
}
// CUtilDlgEx::OnCreate_TEXT
_SUB_EXCEPTION_HANDLER(57DDC0)
__SUB_CLASS_THIS0(0057DDC0, __thiscall, 44605,  CUtilDlgEx, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_57DDC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea ecx,[esi+0xC14]
	call ZArray<ZRef<CCtrlButton>>::RemoveAll
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x34],ebx
	cmp dword ptr [esi+0xC8],ebx
	je Block13

 Block1:
	lea eax,[esp+0x14]
	push 0x8FB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push offset _S_UIUIWINDOW2IMGUT
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x40],1
	call CUtilDlgEx::MakeUOLByUIType
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block3:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],2
	cmp eax,ebx
	je Block5

 Block4:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	lea edi,[esi+0xBDC]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x38],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov edx,dword ptr [esi+0xC38]
	mov eax,dword ptr [esi+0x24]
	neg edx
	sbb edx,edx
	and edx,0x82
	add edx,0xA
	sub eax,edx
	sub eax,0x6A
	cmp dword ptr [esi+0xB0],ebx
	je Block8

 Block7:
	sub eax,5

 Block8:
	mov ecx,dword ptr [esi+0xBE0]
	mov edx,dword ptr [ecx]
	lea ebp,[esp+0x1C]
	push ebp
	mov ebp,dword ptr [esi+0x28]
	push ebx
	sub ebp,0x39
	push ebp
	push eax
	mov eax,dword ptr [edx+0x28]
	push 0x2000
	push esi
	call eax
	push 0xFFFFFFFF
	lea ecx,[esi+0xC14]
	call ZArray<ZRef<CCtrlButton>>::InsertBefore
	mov ebp,eax
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	cmp dword ptr [ebp+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,ebp
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [ebp+4],ebx

 Block12:
	mov ecx,dword ptr [edi+4]
	mov dword ptr [ebp+4],ecx

 Block13:
	lea edx,[esp+0x14]
	cmp dword ptr [esi+0xCC],ebx
	je Block26

 Block14:
	push 0x8FC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push offset _S_UIUIWINDOW2IMGUT
	lea eax,[esp+0x30]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x40],3
	call CUtilDlgEx::MakeUOLByUIType
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block16:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],4
	cmp eax,ebx
	je Block18

 Block17:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block19

 Block18:
	xor eax,eax

 Block19:
	lea edi,[esi+0xBE4]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x38],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xC38]
	mov eax,dword ptr [esi+0x24]
	neg ecx
	sbb ecx,ecx
	and ecx,0x82
	add ecx,0xA
	sub eax,ecx
	sub eax,0x3A
	cmp dword ptr [esi+0xB0],ebx
	je Block21

 Block20:
	sub eax,5

 Block21:
	mov ecx,dword ptr [esi+0xBE8]
	mov edx,dword ptr [ecx]
	lea ebp,[esp+0x1C]
	push ebp
	mov ebp,dword ptr [esi+0x28]
	push ebx
	sub ebp,0x39
	push ebp
	push eax
	mov eax,dword ptr [edx+0x28]
	push 0x2001
	push esi
	call eax
	push 0xFFFFFFFF
	lea ecx,[esi+0xC14]
	call ZArray<ZRef<CCtrlButton>>::InsertBefore
	mov ebp,eax
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block23:
	cmp dword ptr [ebp+4],ebx
	je Block25

 Block24:
	push ebx
	mov ecx,ebp
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [ebp+4],ebx

 Block25:
	mov ecx,dword ptr [edi+4]
	mov dword ptr [ebp+4],ecx
	jmp Block32

 Block26:
	push 0x8FD
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push offset _S_UIUIWINDOW2IMGUT
	lea eax,[esp+0x30]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x40],5
	call CUtilDlgEx::MakeUOLByUIType
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block28:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],6
	cmp eax,ebx
	je Block30

 Block29:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block31

 Block30:
	xor eax,eax

 Block31:
	push eax
	lea ecx,[esi+0xBE4]
	mov byte ptr [esp+0x38],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xBE8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [esi+0x28]
	push ebx
	sub eax,0x18
	push eax
	mov eax,dword ptr [esi+0x24]
	sub eax,0x30
	push eax
	push 1
	push esi
	call edx

 Block32:
	test byte ptr [esi+0xC34],1
	jne Block39

 Block33:
	lea eax,[esp+0x14]
	push 0x8FF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push offset _S_UIUIWINDOW2IMGUT
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x40],7
	call CUtilDlgEx::MakeUOLByUIType
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block35:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x34],8
	cmp eax,ebx
	je Block37

 Block36:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block38

 Block37:
	xor eax,eax

 Block38:
	push eax
	lea ecx,[esi+0xBEC]
	mov byte ptr [esp+0x38],bl
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xBF0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [esi+0x28]
	push ebx
	sub eax,0x18
	push eax
	push 9
	push 2
	push esi
	call edx

 Block39:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block41:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret
}
}
// CUtilDlgEx::OnCreate_INPUT1
_SUB_EXCEPTION_HANDLER(5813C0)
__SUB_CLASS_THIS0(005813C0, __thiscall, 44605,  CUtilDlgEx, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5813C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x64]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea ecx,[esp+0x28]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	xor ebx,ebx
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x70],ebx
	mov dword ptr [esp+0x50],0xFFFFFFFF
	mov dword ptr [esp+0x48],0xFF000000
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x6C],1
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov byte ptr [esp+0x6C],bl
	cmp eax,ebx
	je Block13

 Block4:
	add eax,8
	cmp eax,ebx
	je Block13

 Block5:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block7

 Block6:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [esi+0xBC0]
	mov dword ptr [esi+0xBC0],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block9:
	lea ecx,[esi+0xE4]
	push ecx
	lea ecx,[esp+0x2C]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esi+0x108]
	mov edx,dword ptr [esi+0xE8]
	mov ecx,dword ptr [esi+0xBC0]
	mov dword ptr [esp+0x50],eax
	lea eax,[esp+0x28]
	push eax
	mov eax,dword ptr [esi+0x28]
	push 0xF
	push 0xD8
	sub eax,0x3E
	push eax
	push 0x16
	mov dword ptr [esp+0x6C],edx
	mov dword ptr [esp+0x40],2
	mov dword ptr [esp+0x44],ebx
	mov dword ptr [esp+0x48],2
	mov dword ptr [esp+0x4C],2
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	push 0x3E8
	push esi
	call edx
	mov eax,dword ptr [esi+0xBC0]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	lea eax,[esp+0x10]
	push 0x1963
	push eax
	mov byte ptr [esp+0x74],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x70],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x6C],2
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x6C],4
	cmp eax,ebx
	je Block14

 Block12:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block15

 Block13:
	xor edi,edi
	jmp Block7

 Block14:
	xor eax,eax

 Block15:
	mov byte ptr [esp+0x6C],2
	cmp eax,ebx
	je Block25

 Block16:
	add eax,8
	cmp eax,ebx
	je Block25

 Block17:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block19

 Block18:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block19:
	mov eax,dword ptr [esi+0xBE0]
	mov dword ptr [esi+0xBE0],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block21

 Block20:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block21:
	mov ecx,dword ptr [esi+0xBE0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [esi+0x28]
	push ebx
	sub eax,0x1F
	push eax
	push 0x9C
	push 1
	push esi
	call edx
	lea eax,[esp+0x10]
	push 0x1961
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x70],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x6C],2
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block23:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x6C],6
	cmp eax,ebx
	je Block26

 Block24:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block27

 Block25:
	xor edi,edi
	jmp Block19

 Block26:
	xor eax,eax

 Block27:
	mov byte ptr [esp+0x6C],2
	cmp eax,ebx
	je Block36

 Block28:
	add eax,8
	cmp eax,ebx
	je Block36

 Block29:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block31

 Block30:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block31:
	mov eax,dword ptr [esi+0xBE8]
	mov dword ptr [esi+0xBE8],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block33

 Block32:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block33:
	mov ecx,dword ptr [esi+0xBE8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [esi+0x28]
	push ebx
	sub eax,0x1F
	push eax
	push 0xC6
	push 2
	push esi
	call edx
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x6C],bl
	cmp eax,ebx
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block35:
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x60
	ret

 Block36:
	xor edi,edi
	jmp Block31
}
}
// CUtilDlgEx::SetUtilDlgEx_Pet
__SUB_CLASS_THIS(00587B60, __thiscall, 44635,  CUtilDlgEx, void, ZArray<ZRef<GW_ItemSlotPet> >&) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push ebp
	push esi
	push edi
	mov edi,dword ptr [esp+0x1C]
	mov eax,dword ptr [edi]
	mov ebx,ecx
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	lea ecx,[esp+0x1C]
	push ecx
	lea ebp,[ebx+0x15C]
	push eax
	mov ecx,ebp
	call ZArray<CUtilDlgEx::PET_INFO>::_Alloc
	mov ecx,edi
	xor esi,esi
	call ZArray<ZRef<GW_ItemSlotPet>>::GetCount
	test eax,eax
	jbe Block12

 Block3:
	xor ebx,ebx

 Block4:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+esi*8+4]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [ebp]
	mov dword ptr [ebx+ecx],eax
	mov edx,dword ptr [edi]
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [edx+esi*8+4]
	add edx,0x28
	lea eax,[eax+ebx+4]
	mov dword ptr [esp+0x1C],eax
	jne Block7

 Block5:
	mov eax,dword ptr [eax]
	test eax,eax
	je Block10

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	mov ecx,dword ptr [esp+0x20]
	add esp,4
	mov dword ptr [ecx],0
	jmp Block10

 Block7:
	mov eax,edx
	lea ecx,[eax+1]
	mov dword ptr [esp+0x10],ecx

 Block8:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block8

 Block9:
	sub eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [esp+0x1C]
	push eax
	push edx
	push 0
	push eax
	mov dword ptr [esp+0x20],eax
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x28]
	add esp,0xC
	push edx
	call ZXString<char>::ReleaseBuffer

 Block10:
	mov eax,dword ptr [edi]
	mov eax,dword ptr [eax+esi*8+4]
	mov ecx,dword ptr [eax+0x37]
	push ecx
	add eax,0x35
	push eax
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx edx,al
	mov eax,dword ptr [ebp]
	mov dword ptr [eax+ebx+8],edx
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+esi*8+4]
	mov edx,dword ptr [eax+0x3F]
	push edx
	add eax,0x3B
	push eax
	call _ZtlSecureFuseHelper<short>::call
	mov ecx,dword ptr [ebp]
	movzx eax,ax
	cwde
	mov dword ptr [ecx+ebx+0xC],eax
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+esi*8+4]
	add eax,ebx
	add esp,0x10
	mov dword ptr [esp+0x1C],eax
	call GW_ItemSlotPet::IsDead
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [ecx+0x10],eax
	mov ecx,edi
	inc esi
	add ebx,0x14
	call ZArray<ZRef<GW_ItemSlotPet>>::GetCount
	cmp esi,eax
	jb Block4

 Block11:
	mov ebx,dword ptr [esp+0x14]

 Block12:
	push 1
	mov ecx,ebx
	mov dword ptr [ebx+0x160],0
	call CUtilDlgEx::Layout_GEN
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 4
}
}
// CUtilDlgEx::GetBasicCTWidth
// 97AE34
static uint8_t _SUB_57ADD0_LOOKUP_TABLE_0[10] = {
0, 0, 1, 1, 0, 2, 2, 1, 4, 3, 
};
__SUB_CLASS_THIS0(0057ADD0, __thiscall, 44636,  CUtilDlgEx, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x98]
	cmp eax,9
	ja Block6

 Block1:
	movzx eax,byte ptr [eax+_SUB_57ADD0_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block5
cmp EAX, 4
je Block6


 Block2:
	mov eax,dword ptr [ecx+0xC0]
	neg eax
	sbb eax,eax
	and eax,0xFFFFFF7D
	add eax,0x155
	ret

 Block3:
	mov eax,dword ptr [ecx+0xC0]
	neg eax
	sbb eax,eax
	and eax,0xFFFFFF98
	add eax,0x154
	ret

 Block4:
	mov eax,0xFA
	ret

 Block5:
	mov eax,0x190
	ret

 Block6:
	xor eax,eax
	ret
}
}
// CUtilDlgEx::AddImageList
_SUB_EXCEPTION_HANDLER(2DC0A0)
__SUB_CLASS_THIS(002DC0A0, __thiscall, 44638,  CUtilDlgEx, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DC0A0
	mov eax,dword ptr fs:[0]
	push eax
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+4]
	mov dword ptr fs:[0],eax
	lea eax,[esp+0x14]
	push eax
	push 0xFFFFFFFF
	add ecx,0xD8
	mov dword ptr [esp+0x14],0
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0xC],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 4
}
}
// CUtilDlgEx::GetCTHeight_Min
// 97AED0
static uint8_t _SUB_57AE90_LOOKUP_TABLE_0[10] = {
0, 0, 0, 0, 0, 1, 1, 0, 0, 2, 
};
__SUB_CLASS_THIS0(0057AE90, __thiscall, 44636,  CUtilDlgEx, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x98]
	cmp eax,9
	ja Block4

 Block1:
	movzx eax,byte ptr [eax+_SUB_57AE90_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block4
cmp EAX, 2
je Block3


 Block2:
	mov eax,dword ptr [ecx+0xC0]
	neg eax
	sbb eax,eax
	and eax,0xFFFFFF92
	add eax,0x6E
	ret

 Block3:
	mov eax,0x12C
	ret

 Block4:
	xor eax,eax
	ret
}
}
// CUtilDlgEx::MakeUOLByUIType
__SUB_CLASS_THIS(0057DD70, __thiscall, 44652,  CUtilDlgEx, const wchar_t*, ZXString16&, const wchar_t*, const wchar_t*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push ebx
	push edi
	mov edi,dword ptr [esp+0xC]
	push eax
	mov ecx,edi
	call ZXString16::AssignCStr
	mov ebx,dword ptr [esp+0x14]
	test ebx,ebx
	je Block4

 Block1:
	push 1
	push offset _S___9
	mov ecx,edi
	call ZXString16::_Cat
	mov edx,ebx
	lea ecx,[edx+2]
	push esi
	mov edi,edi

 Block2:
	mov si,word ptr [edx]
	add edx,2
	test si,si
	jne Block2

 Block3:
	sub edx,ecx
	sar edx,1
	push edx
	push ebx
	mov ecx,eax
	call ZXString16::_Cat
	pop esi

 Block4:
	mov eax,dword ptr [edi]
	pop edi
	pop ebx
	ret 0xC
}
}
// CUtilDlgEx::OnCreate_COMBOBOX_EDITABLE
_SUB_EXCEPTION_HANDLER(584380)
__SUB_CLASS_THIS0(00584380, __thiscall, 44605,  CUtilDlgEx, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_584380
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x6C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x7C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea ecx,[esp+0x28]
	call CCtrlComboBox::CREATEPARAM::_ctor_default
	xor ebx,ebx
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x88],ebx
	mov dword ptr [esp+0x2C],0xFFEEEEEE
	mov dword ptr [esp+0x30],0xFFA5A198
	mov dword ptr [esp+0x34],0xFF999999
	mov dword ptr [esp+0x48],2
	mov dword ptr [esp+0x6C],1
	mov dword ptr [esp+0x70],1
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x84],1
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov byte ptr [esp+0x84],bl
	cmp eax,ebx
	je Block13

 Block4:
	add eax,8
	cmp eax,ebx
	je Block13

 Block5:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block7

 Block6:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [esi+0xBD8]
	mov dword ptr [esi+0xBD8],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlComboBox>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esi+0xBD8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	mov eax,dword ptr [esi+0x28]
	push 0x12
	push 0xDE
	sub eax,0x3F
	push eax
	push 0x15
	push ebx
	push 0x3EA
	push esi
	call edx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	lea eax,[esp+0x10]
	push 0x1963
	push eax
	mov byte ptr [esp+0x8C],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x88],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x84],2
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x84],4
	cmp eax,ebx
	je Block14

 Block12:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block15

 Block13:
	xor edi,edi
	jmp Block7

 Block14:
	xor eax,eax

 Block15:
	mov byte ptr [esp+0x84],2
	cmp eax,ebx
	je Block25

 Block16:
	add eax,8
	cmp eax,ebx
	je Block25

 Block17:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block19

 Block18:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block19:
	mov eax,dword ptr [esi+0xBE0]
	mov dword ptr [esi+0xBE0],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block21

 Block20:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block21:
	mov ecx,dword ptr [esi+0xBE0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [esi+0x28]
	push ebx
	sub eax,0x1F
	push eax
	push 0x9D
	push 1
	push esi
	call edx
	lea eax,[esp+0x10]
	push 0x1961
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x88],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x84],2
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block23:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x84],6
	cmp eax,ebx
	je Block26

 Block24:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block27

 Block25:
	xor edi,edi
	jmp Block19

 Block26:
	xor eax,eax

 Block27:
	mov byte ptr [esp+0x84],2
	cmp eax,ebx
	je Block38

 Block28:
	add eax,8
	cmp eax,ebx
	je Block38

 Block29:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block31

 Block30:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block31:
	mov eax,dword ptr [esi+0xBE8]
	mov dword ptr [esi+0xBE8],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block33

 Block32:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block33:
	mov ecx,dword ptr [esi+0xBE8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [esi+0x28]
	push ebx
	sub eax,0x1F
	push eax
	push 0xC6
	push 2
	push esi
	call edx
	mov eax,dword ptr [esi+0xBD8]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x84],bl
	cmp eax,ebx
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block35:
	mov ecx,dword ptr [esp+0x74]
	cmp ecx,ebx
	je Block37

 Block36:
	call _xbstr_t::Data_t::Release

 Block37:
	mov ecx,dword ptr [esp+0x7C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x78
	ret

 Block38:
	xor edi,edi
	jmp Block31
}
}
// CUtilDlgEx::OnMouseButton
__SUB_CLASS_THIS(00582F30, __thiscall, 44607,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub esp,0x10
	sub eax,0x201
	push esi
	push edi
	mov esi,ecx
	je Block13

 Block1:
	sub eax,1
	jne Block21

 Block2:
	cmp dword ptr [esi+0x94],4
	jne Block21

 Block3:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x24]
	push eax
	lea edi,[esi-4]
	push ecx
	mov ecx,edi
	call CUtilDlgEx::CheckMousePoint
	mov edx,dword ptr [esi+0x10C]
	cmp edx,0xFFFFFFFF
	je Block12

 Block4:
	cmp edx,dword ptr [esi+0x110]
	jne Block12

 Block5:
	xor ecx,ecx

 Block6:
	mov eax,dword ptr [esi+0x118]
	test eax,eax
	je Block11

 Block7:
	cmp ecx,dword ptr [eax-4]
	jae Block11

 Block8:
	mov eax,dword ptr [eax+ecx*4]
	cmp dword ptr [eax+0x28],edx
	je Block10

 Block9:
	inc ecx
	jmp Block6

 Block10:
	mov dword ptr [esi+0x114],ecx

 Block11:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x34]
	push 1
	mov ecx,edi
	call eax
	pop edi
	pop esi
	add esp,0x10
	ret 0x10

 Block12:
	pop edi
	mov dword ptr [esi+0x110],0xFFFFFFFF
	pop esi
	add esp,0x10
	ret 0x10

 Block13:
	cmp dword ptr [esi+0xBC],0
	mov edi,dword ptr [esp+0x28]
	push ebx
	mov ebx,dword ptr [esp+0x28]
	jne Block18

 Block14:
	mov ecx,dword ptr [esi+0xB4]
	push ecx
	lea ecx,[esi-4]
	call CUtilDlgEx::GetWndWidth
	push eax
	push 0
	push 0
	lea edx,[esp+0x1C]
	push edx
	call SetRect
	push edi
	push ebx
	lea eax,[esp+0x14]
	push eax
	call PtInRect
	test eax,eax
	je Block18

 Block15:
	mov eax,dword ptr [esi+0xC14]
	test eax,eax
	je Block17

 Block16:
	mov eax,dword ptr [eax-4]

 Block17:
	mov dword ptr [esi+0xC20],eax

 Block18:
	cmp dword ptr [esi+0x94],4
	jne Block20

 Block19:
	push edi
	push ebx
	lea ecx,[esi-4]
	call CUtilDlgEx::CheckMousePoint
	mov ecx,dword ptr [esi+0x10C]
	mov dword ptr [esi+0x110],ecx

 Block20:
	lea ecx,[esi+0x168]
	call CUIToolTip::ClearToolTip
	pop ebx

 Block21:
	pop edi
	pop esi
	add esp,0x10
	ret 0x10
}
}
// CUtilDlgEx::SetKeyFocus
__SUB_CLASS_THIS(0057B7C0, __thiscall, 44613,  CUtilDlgEx, void, long) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	xor esi,esi

 Block1:
	mov eax,dword ptr [edi+0xC14]
	test eax,eax
	je Block4

 Block2:
	cmp esi,dword ptr [eax-4]
	jae Block4

 Block3:
	mov ecx,dword ptr [eax+esi*8+4]
	push 0
	call CCtrlButton::SetKeyFocus
	inc esi
	jmp Block1

 Block4:
	mov ecx,dword ptr [esp+0xC]
	test ecx,ecx
	jl Block8

 Block5:
	test eax,eax
	je Block8

 Block6:
	cmp ecx,dword ptr [eax-4]
	jae Block8

 Block7:
	mov edx,eax
	mov ecx,dword ptr [edx+ecx*8+4]
	push 1
	call CCtrlButton::SetKeyFocus

 Block8:
	pop edi
	pop esi
	ret 4
}
}
// CTextAnalyzer::AnalyzeText
_SUB_EXCEPTION_HANDLER(587CC0)
// 98C950
static uint8_t _SUB_587CC0_LOOKUP_TABLE_0[59] = {
0, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 1, 16, 16, 
16, 2, 3, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
16, 4, 16, 5, 16, 6, 16, 16, 7, 16, 16, 16, 16, 8, 16, 9, 
10, 11, 16, 16, 6, 12, 16, 16, 13, 14, 15, 
};
__SUB_CLASS_THIS(00587CC0, __thiscall, 44470,  CTextAnalyzer, long, NakedParam<ZXString<char>>, ZArray<CT_INFO>&, ZArray<_x_com_ptr<IWzFont> >&, int32_t, uint16_t, int32_t) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x60]
	sub esp,0x60
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_587CC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x750
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x5C],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [ebp+0x30],edi
	xor esi,esi
	mov dword ptr [ebp+0x48],esi
	mov ecx,dword ptr [ebp+0x6C]
	mov dword ptr [ebp-4],esi
	call ZArray<CT_INFO>::RemoveAll
	mov eax,dword ptr [ebp+0x74]
	mov ebx,dword ptr [ZImports::_VariantInit]
	neg eax
	sbb eax,eax
	and eax,4
	mov dword ptr [ebp-0x190],eax
	mov dword ptr [ebp+0x14],eax
	lea eax,[ebp-0x27C]
	push eax
	mov dword ptr [ebp+0x38],esi
	mov dword ptr [ebp+0x24],esi
	mov dword ptr [ebp-0x1C],esi
	mov dword ptr [ebp-0x68],0xFFFFFFFF
	call ebx
	lea ecx,[ebp-0x27C]
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
	lea edx,[ebp-0x23C]
	push edx
	mov byte ptr [ebp-4],1
	call ebx
	lea eax,[ebp-0x23C]
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
	lea ecx,[ebp-0x27C]
	push ecx
	lea edx,[ebp-0x23C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x28],esp
	push 0x8E6
	push eax
	mov byte ptr [ebp-4],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],3
	cmp dword ptr [_D_G_RM],esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0x2BC]
	push ecx
	mov byte ptr [ebp-4],2
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x38]
	mov dword ptr [ebp-0x38],esi
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
	cmp word ptr [ebp-0x2BC],8
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],6
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x2B4]
	xor edx,edx
	mov word ptr [ebp-0x2BC],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0x2BC]
	push eax
	call esi

 Block13:
	cmp word ptr [ebp-0x23C],8
	mov byte ptr [ebp-4],7
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x234]
	xor ecx,ecx
	mov word ptr [ebp-0x23C],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp-0x23C]
	push edx
	call esi

 Block17:
	cmp word ptr [ebp-0x27C],8
	mov byte ptr [ebp-4],8
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp-0x27C],ax
	mov eax,dword ptr [ebp-0x274]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp-0x27C]
	push ecx
	call esi

 Block21:
	lea edx,[ebp-0x22C]
	push edx
	call ebx
	lea eax,[ebp-0x22C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea ecx,[ebp-0x25C]
	push ecx
	mov byte ptr [ebp-4],9
	call ebx
	lea edx,[ebp-0x25C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	push 0
	push 0
	lea eax,[ebp-0x22C]
	push eax
	lea ecx,[ebp-0x25C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x28],esp
	push 0x6AC
	push edx
	mov byte ptr [ebp-4],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xB
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[ebp-0x2EC]
	mov byte ptr [ebp-4],0xA
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x24]
	mov dword ptr [ebp-0x24],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block30

 Block28:
	cmp eax,0x80004002
	je Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	cmp word ptr [ebp-0x2EC],8
	mov byte ptr [ebp-4],0xE
	jne Block33

 Block31:
	mov eax,dword ptr [ebp-0x2E4]
	xor ecx,ecx
	mov word ptr [ebp-0x2EC],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[ebp-0x2EC]
	push edx
	call esi

 Block34:
	cmp word ptr [ebp-0x25C],8
	mov byte ptr [ebp-4],0xF
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [ebp-0x25C],ax
	mov eax,dword ptr [ebp-0x254]
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[ebp-0x25C]
	push ecx
	call esi

 Block38:
	cmp word ptr [ebp-0x22C],8
	mov byte ptr [ebp-4],0x10
	jne Block41

 Block39:
	mov eax,dword ptr [ebp-0x224]
	xor edx,edx
	mov word ptr [ebp-0x22C],dx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea eax,[ebp-0x22C]
	push eax
	call esi

 Block42:
	lea ecx,[ebp-0x26C]
	push ecx
	call ebx
	lea edx,[ebp-0x26C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	lea eax,[ebp-0x24C]
	push eax
	mov byte ptr [ebp-4],0x11
	call ebx
	lea ecx,[ebp-0x24C]
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
	push 0
	push 0
	lea edx,[ebp-0x26C]
	push edx
	lea eax,[ebp-0x24C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x28],esp
	push 0x8E7
	push ecx
	mov byte ptr [ebp-4],0x12
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x13
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	lea edx,[ebp-0x2DC]
	mov byte ptr [ebp-4],0x12
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x14
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x3C]
	mov dword ptr [ebp-0x3C],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block51

 Block49:
	cmp eax,0x80004002
	je Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	cmp word ptr [ebp-0x2DC],8
	mov byte ptr [ebp-4],0x16
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [ebp-0x2DC],ax
	mov eax,dword ptr [ebp-0x2D4]
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[ebp-0x2DC]
	push ecx
	call esi

 Block55:
	cmp word ptr [ebp-0x24C],8
	mov byte ptr [ebp-4],0x17
	jne Block58

 Block56:
	mov eax,dword ptr [ebp-0x244]
	xor edx,edx
	mov word ptr [ebp-0x24C],dx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea eax,[ebp-0x24C]
	push eax
	call esi

 Block59:
	cmp word ptr [ebp-0x26C],8
	mov byte ptr [ebp-4],0x18
	jne Block62

 Block60:
	mov eax,dword ptr [ebp-0x264]
	xor ecx,ecx
	mov word ptr [ebp-0x26C],cx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[ebp-0x26C]
	push edx
	call esi

 Block63:
	lea eax,[ebp-0x21C]
	push eax
	call ebx
	lea ecx,[ebp-0x21C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	lea edx,[ebp-0x28C]
	push edx
	mov byte ptr [ebp-4],0x19
	call ebx
	lea eax,[ebp-0x28C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	push 0
	push 0
	lea ecx,[ebp-0x21C]
	push ecx
	lea edx,[ebp-0x28C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x28],esp
	push 0xCC1
	push eax
	mov byte ptr [ebp-4],0x1A
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x1B
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea ecx,[ebp-0x2CC]
	push ecx
	mov byte ptr [ebp-4],0x1A
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x1C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x34]
	mov dword ptr [ebp-0x34],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block72

 Block70:
	cmp eax,0x80004002
	je Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	mov ebx,8
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp-0x2CC],bx
	jne Block75

 Block73:
	mov eax,dword ptr [ebp-0x2C4]
	xor edx,edx
	mov word ptr [ebp-0x2CC],dx
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea eax,[ebp-0x2CC]
	push eax
	call esi

 Block76:
	mov byte ptr [ebp-4],0x1F
	cmp word ptr [ebp-0x28C],bx
	jne Block79

 Block77:
	mov eax,dword ptr [ebp-0x284]
	xor ecx,ecx
	mov word ptr [ebp-0x28C],cx
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea edx,[ebp-0x28C]
	push edx
	call esi

 Block80:
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp-0x21C],bx
	jne Block83

 Block81:
	xor eax,eax
	mov word ptr [ebp-0x21C],ax
	mov eax,dword ptr [ebp-0x214]
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea ecx,[ebp-0x21C]
	push ecx
	call esi

 Block84:
	mov dword ptr [ebp+0x58],0
	lea edx,[ebp+0x58]
	push edx
	lea eax,[ebp+0x68]
	mov byte ptr [ebp-4],0x21
	push eax

 Block85:
	mov ecx,edi
	call CTextAnalyzer::GetPhrase
	mov edx,dword ptr [ebp+0x58]
	test edx,edx
	je Block534

 Block86:
	mov al,byte ptr [edx]
	test al,al
	je Block534

 Block87:
	cmp al,0xD
	je Block531

 Block88:
	cmp al,0x5C
	je Block531

 Block89:
	lea ecx,[ebp-0x110]
	push 0x8EA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	mov ebx,eax
	mov eax,dword ptr [ebp-0x110]
	test eax,eax
	je Block91

 Block90:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block91:
	test ebx,ebx
	je Block93

 Block92:
	mov edx,dword ptr [ebp-0x190]
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+0x68]
	mov dword ptr [ebp+0x14],edx
	push ecx
	jmp Block85

 Block93:
	lea edx,[ebp-0x198]
	push 0x8EB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	mov ebx,eax
	mov eax,dword ptr [ebp-0x198]
	test eax,eax
	je Block95

 Block94:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block95:
	test ebx,ebx
	je Block97

 Block96:
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+0x68]
	mov dword ptr [ebp+0x14],1
	push ecx
	jmp Block85

 Block97:
	lea edx,[ebp-0x1A0]
	push 0x8EC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	mov ebx,eax
	mov eax,dword ptr [ebp-0x1A0]
	test eax,eax
	je Block99

 Block98:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block99:
	test ebx,ebx
	je Block101

 Block100:
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+0x68]
	mov dword ptr [ebp+0x14],2
	push ecx
	jmp Block85

 Block101:
	lea edx,[ebp-0x1A8]
	push 0x8ED
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	mov ebx,eax
	mov eax,dword ptr [ebp-0x1A8]
	test eax,eax
	je Block103

 Block102:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block103:
	test ebx,ebx
	je Block105

 Block104:
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+0x68]
	mov dword ptr [ebp+0x14],3
	push ecx
	jmp Block85

 Block105:
	lea edx,[ebp-0x1B0]
	push 0x8F1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	mov ebx,eax
	mov eax,dword ptr [ebp-0x1B0]
	test eax,eax
	je Block107

 Block106:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block107:
	test ebx,ebx
	je Block109

 Block108:
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+0x68]
	mov dword ptr [ebp+0x14],5
	push ecx
	jmp Block85

 Block109:
	lea edx,[ebp-0x1B8]
	push 0x8EE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	mov ebx,eax
	mov eax,dword ptr [ebp-0x1B8]
	test eax,eax
	je Block111

 Block110:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block111:
	test ebx,ebx
	je Block113

 Block112:
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+0x68]
	mov dword ptr [ebp-0x1C],1
	push ecx
	jmp Block85

 Block113:
	lea edx,[ebp-0x20C]
	push 0x8EF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	mov ebx,eax
	mov eax,dword ptr [ebp-0x20C]
	test eax,eax
	je Block115

 Block114:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block115:
	test ebx,ebx
	je Block117

 Block116:
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+0x68]
	mov dword ptr [ebp-0x1C],0
	push ecx
	jmp Block85

 Block117:
	lea edx,[ebp-0xD4]
	push 0x8F0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	mov ebx,eax
	mov eax,dword ptr [ebp-0xD4]
	test eax,eax
	je Block119

 Block118:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block119:
	test ebx,ebx
	je Block121

 Block120:
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+0x68]
	mov dword ptr [ebp-0x68],0xFFFFFFFF
	push ecx
	jmp Block85

 Block121:
	push ecx
	lea edx,[ebp+0x58]
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push edx
	call ZXString<char>::_ctor_copy
	mov ecx,edi
	call CTextAnalyzer::GetPhraseType
	mov ebx,eax
	cmp ebx,6
	jne Block123

 Block122:
	xor eax,eax
	cmp dword ptr [ebp+0x38],1
	lea ecx,[ebp+0x58]
	setne al
	push ecx
	lea edx,[ebp+0x68]
	push edx
	mov dword ptr [ebp+0x38],eax
	jmp Block85

 Block123:
	mov esi,dword ptr [ebp+0x6C]
	mov ecx,esi
	call ZArray<CT_INFO>::GetCount
	lea ecx,[ebp+0x53]
	push ecx
	inc eax
	push 0
	push eax
	mov ecx,esi
	call ZArray<CT_INFO>::_Realloc
	mov ecx,esi
	call ZArray<CT_INFO>::GetCount
	mov ecx,dword ptr [ebp+0x24]
	mov edx,eax
	shl edx,4
	add edx,eax
	mov eax,dword ptr [esi]
	lea esi,[eax+edx*4-0x44]
	mov edx,dword ptr [ebp-0x68]
	mov dword ptr [esi+8],ecx
	mov dword ptr [esi+0x28],edx
	mov dword ptr [esi+0x30],0
	cmp ebx,0x12
	ja Block530

 Block124:
	cmp EBX, 0
je Block490
cmp EBX, 1
je Block125
cmp EBX, 2
je Block128
cmp EBX, 3
je Block129
cmp EBX, 4
je Block130
cmp EBX, 5
je Block131
cmp EBX, 6
je Block530
cmp EBX, 7
je Block132
cmp EBX, 8
je Block132
cmp EBX, 9
je Block132
cmp EBX, 10
je Block143
cmp EBX, 11
je Block144
cmp EBX, 12
je Block144
cmp EBX, 13
je Block150
cmp EBX, 14
je Block178
cmp EBX, 15
je Block437
cmp EBX, 16
je Block452
cmp EBX, 17
je Block482
cmp EBX, 18
je Block490


 Block125:
	cmp dword ptr [ebp+0x7C],0
	mov dword ptr [esi],4
	jne Block127

 Block126:
	mov dword ptr [esi+0x20],0x12

 Block127:
	mov eax,dword ptr [ebp+0x70]
	mov ecx,dword ptr [eax]
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	call IWzFont::Getheight
	push ecx
	lea edx,[ebp+0x58]
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push edx
	mov dword ptr [esi+0x24],eax
	call ZXString<char>::_ctor_copy
	mov ecx,edi
	call CTextAnalyzer::GetParameterNo
	mov edi,dword ptr [ebp+0x30]
	mov dword ptr [ebp-0x68],eax
	mov dword ptr [esi+0x28],eax
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+0x68]
	push ecx
	jmp Block85

 Block128:
	mov edi,dword ptr [ebp+0x30]
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+0x68]
	mov dword ptr [esi],3
	mov dword ptr [esi+0x34],0
	push ecx
	jmp Block85

 Block129:
	mov edi,dword ptr [ebp+0x30]
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+0x68]
	mov dword ptr [esi],3
	mov dword ptr [esi+0x34],1
	push ecx
	jmp Block85

 Block130:
	mov edi,dword ptr [ebp+0x30]
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+0x68]
	mov dword ptr [esi],3
	mov dword ptr [esi+0x34],2
	push ecx
	jmp Block85

 Block131:
	mov edi,dword ptr [ebp+0x30]
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+0x68]
	mov dword ptr [esi],3
	mov dword ptr [esi+0x34],3
	push ecx
	jmp Block85

 Block132:
	push ecx
	lea eax,[ebp+0x58]
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push eax
	mov dword ptr [esi],1
	call ZXString<char>::_ctor_copy
	mov ecx,dword ptr [ebp+0x30]
	call CTextAnalyzer::GetParameterNo
	mov edi,eax
	cmp ebx,9
	jne Block134

 Block133:
	mov ecx,dword ptr [ebp+0x30]
	push edi
	call CTextAnalyzer::CheckSecretItemID
	mov edi,eax

 Block134:
	push 0
	push 0x3A
	lea ecx,[ebp+0x58]
	call ZXString<char>::Find__1
	xor ecx,ecx
	test eax,eax
	setl cl
	push edi
	lea edx,[ebp-0x18C]
	push edx
	dec ecx
	and ecx,edi
	mov dword ptr [esi+4],ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esi+0x10]
	mov byte ptr [ebp-4],0x22
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x18C]
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block136

 Block135:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block136:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push 0
	push 1
	push edi
	lea eax,[ebp-0x6C]
	push eax
	call CItemInfo::GetItemIcon
	mov byte ptr [ebp-4],0x23
	cmp ebx,7
	jne Block138

 Block137:
	lea ecx,[ebp-0x6C]
	lea edi,[esi+0x14]
	push ecx
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	jmp Block140

 Block138:
	push ecx
	lea edx,[ebp-0x6C]
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push edx
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	mov ecx,dword ptr [ebp+0x30]
	lea eax,[ebp-0xDC]
	push eax
	call CTextAnalyzer::GetOutlineCanvas
	lea edi,[esi+0x14]
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov eax,dword ptr [ebp-0xDC]
	test eax,eax
	je Block140

 Block139:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block140:
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getwidth
	mov ecx,edi
	mov dword ptr [esi+0x20],eax
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getheight
	mov dword ptr [esi+0x24],eax
	mov eax,dword ptr [ebp+0x38]
	mov dword ptr [esi+0x38],eax
	mov eax,dword ptr [ebp-0x6C]

 Block141:
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block530

 Block142:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov edi,dword ptr [ebp+0x30]
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+0x68]
	push ecx
	jmp Block85

 Block143:
	push ecx
	lea eax,[ebp+0x58]
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push eax
	call ZXString<char>::_ctor_copy
	mov ecx,edi
	call CTextAnalyzer::GetParameterNo
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetSkill
	mov ebx,eax
	lea ecx,[ebx+4]
	push ecx
	lea ecx,[esi+0x10]
	mov dword ptr [esi],1
	call ZXString<char>::op_assign
	lea edi,[esi+0x14]
	add ebx,0x25C
	push ebx
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getwidth
	mov ecx,edi
	mov dword ptr [esi+0x20],eax
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getheight
	mov edi,dword ptr [ebp+0x30]
	mov dword ptr [esi+0x24],eax
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+0x68]
	push ecx
	jmp Block85

 Block144:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x59C]
	mov dword ptr [esi],2
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x4CC]
	mov byte ptr [ebp-4],0x24
	call Ztl_variant_t::_ctor_1
	mov edx,dword ptr [ebp+0x58]
	push 0xFFFFFFFF
	add edx,2
	push 0
	push edx
	mov byte ptr [ebp-4],0x25
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov eax,esp
	push 0
	push 0
	lea ecx,[ebp-0x59C]
	push ecx
	lea edx,[ebp-0x4CC]
	push edx
	push 0xFFFFFFFF
	push eax
	mov eax,dword ptr [ebp+0x58]
	add eax,2
	push eax
	call ZStrUtil::_Conv_0
	add esp,8
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x26
	je Block5

 Block145:
	lea ecx,[ebp-0x6FC]
	push ecx
	mov byte ptr [ebp-4],0x25
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x27
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x78]
	call _x_com_ptr<IWzCanvas>::CreateFromUnknown
	lea ecx,[ebp-0x6FC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x4CC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x59C]
	mov byte ptr [ebp-4],0x2B
	call Ztl_variant_t::~Ztl_variant_t
	cmp ebx,0xB
	jne Block147

 Block146:
	lea edx,[ebp-0x78]
	lea ebx,[esi+0x14]
	push edx
	mov ecx,ebx
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	jmp Block149

 Block147:
	push ecx
	lea eax,[ebp-0x78]
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push eax
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	lea ecx,[ebp-0x1C4]
	push ecx
	mov ecx,edi
	call CTextAnalyzer::GetOutlineCanvas
	lea ebx,[esi+0x14]
	push eax
	mov ecx,ebx
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov eax,dword ptr [ebp-0x1C4]
	test eax,eax
	je Block149

 Block148:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block149:
	mov ecx,ebx
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getwidth
	mov ecx,ebx
	mov dword ptr [esi+0x20],eax
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getheight
	mov dword ptr [esi+0x24],eax
	mov eax,dword ptr [ebp-0x78]
	jmp Block141

 Block150:
	push ecx
	lea eax,[ebp+0x58]
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push eax
	mov dword ptr [esi],2
	call ZXString<char>::_ctor_copy
	mov ecx,edi
	call CTextAnalyzer::GetParameterNo
	mov ebx,eax
	cmp ebx,0xA
	jge Block152

 Block151:
	mov ebx,0xA
	jmp Block154

 Block152:
	cmp ebx,0x64
	jle Block154

 Block153:
	mov ebx,0x64

 Block154:
	lea ecx,[ebp-0xE4]
	push 0x58C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov dword ptr [ebp-0xB8],0
	mov eax,dword ptr [eax]
	push 0xA
	push eax
	lea edx,[ebp-0xB8]
	push edx
	mov byte ptr [ebp-4],0x2D
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[ebp-0x2C]
	call ZXString<char>::_ctor_copy
	mov eax,dword ptr [ebp-0xB8]
	mov byte ptr [ebp-4],0x2F
	test eax,eax
	je Block156

 Block155:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block156:
	mov eax,dword ptr [ebp-0xE4]
	mov byte ptr [ebp-4],0x30
	test eax,eax
	je Block158

 Block157:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block158:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x66C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x57C]
	mov byte ptr [ebp-4],0x31
	call Ztl_variant_t::_ctor_1
	mov edx,dword ptr [ebp-0x2C]
	push 0
	push 0
	lea eax,[ebp-0x66C]
	push eax
	lea ecx,[ebp-0x57C]
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push edx
	mov byte ptr [ebp-4],0x32
	call Ztl_bstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x33
	je Block5

 Block159:
	lea eax,[ebp-0x6DC]
	mov byte ptr [ebp-4],0x32
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x34
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0xA8]
	call _x_com_ptr<IWzCanvas>::CreateFromUnknown
	lea ecx,[ebp-0x6DC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x57C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x66C]
	mov byte ptr [ebp-4],0x38
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,0x66666667
	imul ebx
	sar edx,2
	mov ecx,edx
	shr ecx,0x1F
	lea edi,[edx+ecx-1]
	lea edx,[ebp-0x194]
	push 0x58C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	xor ebx,ebx
	mov dword ptr [ebp-0xAC],ebx
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea eax,[ebp-0xAC]
	push eax
	mov byte ptr [ebp-4],0x3A
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[ebp-0x2C]
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0xAC]
	mov byte ptr [ebp-4],0x39
	cmp eax,ebx
	je Block161

 Block160:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block161:
	mov eax,dword ptr [ebp-0x194]
	mov byte ptr [ebp-4],0x38
	cmp eax,ebx
	je Block163

 Block162:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block163:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x5EC]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x52C]
	mov byte ptr [ebp-4],0x3B
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [ebp-0x2C]
	push ebx
	push ebx
	lea ecx,[ebp-0x5EC]
	push ecx
	lea edx,[ebp-0x52C]
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push eax
	mov byte ptr [ebp-4],0x3C
	call Ztl_bstr_t::_ctor_1
	mov byte ptr [ebp-4],0x3D
	cmp dword ptr [_D_G_RM],ebx
	je Block5

 Block164:
	lea ecx,[ebp-0x71C]
	push ecx
	mov byte ptr [ebp-4],0x3C
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x3E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x1C8]
	call _x_com_ptr<IWzCanvas>::CreateFromUnknown
	lea ecx,[ebp-0x71C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x52C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x5EC]
	call Ztl_variant_t::~Ztl_variant_t
	mov dword ptr [ebp+0xC],ebx
	lea edx,[ebp-0xEC]
	push 0x3D0
	push edx
	mov byte ptr [ebp-4],0x43
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[ebp+0xC]
	push ecx
	push eax
	mov byte ptr [ebp-4],0x44
	call PcCreate_IWzCanvas
	mov eax,dword ptr [ebp-0xEC]
	add esp,0xC
	mov byte ptr [ebp-4],0x43
	cmp eax,ebx
	je Block166

 Block165:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block166:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x64C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x54C]
	mov byte ptr [ebp-4],0x45
	call Ztl_variant_t::_ctor_1
	mov edi,dword ptr [ebp-0x1C8]
	mov byte ptr [ebp-4],0x46
	cmp edi,ebx
	je Block5

 Block167:
	mov eax,dword ptr [ebp+0xC]
	cmp eax,ebx
	je Block5

 Block168:
	lea edx,[ebp-0x64C]
	mov ebx,eax
	push edx
	lea eax,[ebp-0x54C]
	push eax
	mov ecx,edi
	call IWzCanvas::Getheight
	push eax
	mov ecx,edi
	call IWzCanvas::Getwidth
	push eax
	mov ecx,ebx
	call IWzCanvas::Create
	lea ecx,[ebp-0x54C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x64C]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,3
	mov ebx,0xFF
	mov word ptr [ebp-0x3C4],cx
	mov dword ptr [ebp-0x3BC],ebx
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0x47
	test ecx,ecx
	je Block5

 Block169:
	mov eax,dword ptr [ebp-0xA8]
	lea edx,[ebp-0x3C4]
	push edx
	push eax
	push 0
	push 0
	call IWzCanvas::Copy
	lea ecx,[ebp-0x3C4]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,3
	mov word ptr [ebp-0x3DC],cx
	mov dword ptr [ebp-0x3D4],ebx
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0x48
	test ecx,ecx
	je Block5

 Block170:
	lea edx,[ebp-0x3DC]
	push edx
	push edi
	push 0
	push 0
	call IWzCanvas::Copy
	lea ecx,[ebp-0x3DC]
	mov byte ptr [ebp-4],0x43
	call Ztl_variant_t::~Ztl_variant_t
	lea eax,[ebp+0xC]
	push eax
	lea ecx,[esi+0x14]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov ecx,dword ptr [ebp+0xC]
	test ecx,ecx
	je Block5

 Block171:
	call IWzCanvas::Getwidth
	mov ecx,dword ptr [ebp+0xC]
	mov dword ptr [esi+0x20],eax
	test ecx,ecx
	je Block5

 Block172:
	call IWzCanvas::Getheight
	mov dword ptr [esi+0x24],eax
	mov eax,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0x42
	test eax,eax
	je Block174

 Block173:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block174:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],0x38
	call ecx
	mov eax,dword ptr [ebp-0xA8]
	mov byte ptr [ebp-4],0x30
	test eax,eax
	je Block176

 Block175:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block176:
	mov eax,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block530

 Block177:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	mov edi,dword ptr [ebp+0x30]
	add esp,4
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+0x68]
	push ecx
	jmp Block85

 Block178:
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block180

 Block179:
	mov eax,dword ptr [eax-4]
	jmp Block181

 Block180:
	xor eax,eax

 Block181:
	dec eax
	push eax
	push 2
	lea ecx,[ebp-0x10]
	push ecx
	lea ecx,[ebp+0x58]
	call ZXString<char>::Mid
	mov ebx,dword ptr [ebp+0x78]
	movzx edx,bx
	push 0xFFFFFFFF
	push offset _S___13
	lea ecx,[ebp-0xC4]
	mov byte ptr [ebp-4],0x49
	mov dword ptr [ebp+0x54],edx
	call ZXString<char>::CreateFromCharStr
	mov eax,dword ptr [ebp-0xC4]
	push 0
	push 0
	push eax
	lea ecx,[ebp+0x58]
	mov byte ptr [ebp-4],0x4A
	call ZXString<char>::Find__0
	mov edi,eax
	test edi,edi
	jle Block196

 Block182:
	push edi
	push 2
	lea ecx,[ebp-0xF4]
	push ecx
	lea ecx,[ebp+0x58]
	call ZXString<char>::Mid
	push eax
	lea ecx,[ebp-0x10]
	mov byte ptr [ebp-4],0x4B
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0xF4]
	mov byte ptr [ebp-4],0x4A
	test eax,eax
	je Block184

 Block183:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block184:
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block186

 Block185:
	mov eax,dword ptr [eax-4]
	jmp Block187

 Block186:
	xor eax,eax

 Block187:
	dec eax
	push eax
	lea edx,[edi+1]
	push edx
	lea eax,[ebp+0x2C]
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::Mid
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x4C
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block190

 Block188:
	mov ecx,dword ptr [ebp+0x2C]
	push ecx
	call _atoi
	add esp,4
	test eax,eax
	je Block190

 Block189:
	mov edx,dword ptr [ebp+0x2C]
	push edx
	call _atoi
	movzx eax,ax
	add esp,4
	mov dword ptr [ebp+0x54],eax

 Block190:
	push edi
	lea ecx,[ebp-0xFC]
	push ecx
	lea ecx,[ebp+0x58]
	call ZXString<char>::Left
	push offset _S___12
	lea edx,[ebp-0x19C]
	push edx
	mov ecx,eax
	mov byte ptr [ebp-4],0x4D
	call ZXString<char>::op_add_0
	push eax
	lea ecx,[ebp+0x58]
	mov byte ptr [ebp-4],0x4E
	call ZXString<char>::op_assign
	mov eax,dword ptr [ebp-0x19C]
	mov byte ptr [ebp-4],0x4D
	test eax,eax
	je Block192

 Block191:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block192:
	mov eax,dword ptr [ebp-0xFC]
	mov byte ptr [ebp-4],0x4C
	test eax,eax
	je Block194

 Block193:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block194:
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0x4A
	test eax,eax
	je Block196

 Block195:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block196:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp-0x35C]
	push eax
	call CWvsContext::GetCharacterData
	mov edx,dword ptr [ebp+0x54]
	mov eax,dword ptr [eax+4]
	lea ecx,[ebp-0x10]
	push ecx
	push edx
	lea ecx,[ebp+0x4C]
	push ecx
	mov ecx,eax
	mov byte ptr [ebp-4],0x4F
	call CharacterData::GetQuestEx
	lea ecx,[ebp-0x35C]
	mov byte ptr [ebp-4],0x51
	call ZRef<CharacterData>::~ZRef<CharacterData>
	push offset _D_VTMISSING
	lea ecx,[ebp-0x60C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x56C]
	mov byte ptr [ebp-4],0x52
	call Ztl_variant_t::_ctor_1
	push 0
	push 0
	lea edx,[ebp-0x60C]
	push edx
	lea eax,[ebp-0x56C]
	push eax
	push ecx
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMGQUE__1
	mov byte ptr [ebp-4],0x53
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x54
	je Block5

 Block197:
	lea ecx,[ebp-0x6BC]
	push ecx
	mov byte ptr [ebp-4],0x53
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x55
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	call _x_com_ptr<IWzCanvas>::CreateFromUnknown
	lea ecx,[ebp-0x6BC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x56C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x60C]
	mov byte ptr [ebp-4],0x59
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[ebp-0x68C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x58C]
	mov byte ptr [ebp-4],0x5A
	call Ztl_variant_t::_ctor_1
	push 0
	push 0
	lea edx,[ebp-0x68C]
	push edx
	lea eax,[ebp-0x58C]
	push eax
	push ecx
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMGQUE
	mov byte ptr [ebp-4],0x5B
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x5C
	je Block5

 Block198:
	lea ecx,[ebp-0x6CC]
	push ecx
	mov byte ptr [ebp-4],0x5B
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x5D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	call _x_com_ptr<IWzCanvas>::CreateFromUnknown
	lea ecx,[ebp-0x6CC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x58C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x68C]
	mov byte ptr [ebp-4],0x61
	call Ztl_variant_t::~Ztl_variant_t
	lea edx,[ebp-0x1D0]
	push 0x1193
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	mov edi,eax
	mov eax,dword ptr [ebp-0x1D0]
	test eax,eax
	je Block200

 Block199:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block200:
	test edi,edi
	je Block219

 Block201:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp-0x3A4]
	push eax
	call CWvsContext::GetCharacterData
	mov edi,eax
	push 0xFFFFFFFF
	push offset _S_S
	lea ecx,[ebp-0x104]
	mov byte ptr [ebp-4],0x62
	call ZXString<char>::CreateFromCharStr
	mov edi,dword ptr [edi+4]
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push edi
	push eax
	mov byte ptr [ebp-4],0x63
	call CQuestMan::GetPartyQuestRankCount
	mov edi,eax
	mov eax,dword ptr [ebp-0x104]
	mov byte ptr [ebp-4],0x62
	test eax,eax
	je Block203

 Block202:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block203:
	lea ecx,[ebp-0x3A4]
	mov byte ptr [ebp-4],0x61
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push ebx
	call CQuestMan::GetCompleteDemand
	mov ecx,dword ptr [eax+0xDC]
	mov eax,edi
	imul eax,0x4B
	cdq
	idiv ecx
	cmp eax,0x4B
	jle Block205

 Block204:
	mov eax,0x4B
	mov dword ptr [ebp+0x54],eax
	jmp Block208

 Block205:
	test eax,eax
	jle Block207

 Block206:
	mov dword ptr [ebp+0x54],eax
	jmp Block208

 Block207:
	mov dword ptr [ebp+0x54],0

 Block208:
	xor edi,edi
	mov dword ptr [esi],1
	mov dword ptr [ebp+8],edi
	lea ecx,[ebp-0x1A4]
	push 0x3D0
	push ecx
	mov byte ptr [ebp-4],0x64
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea edx,[ebp+8]
	push edx
	push eax
	mov byte ptr [ebp-4],0x65
	call PcCreate_IWzCanvas
	mov eax,dword ptr [ebp-0x1A4]
	add esp,0xC
	mov byte ptr [ebp-4],0x64
	cmp eax,edi
	je Block210

 Block209:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block210:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x62C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x5AC]
	mov byte ptr [ebp-4],0x66
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0x67
	cmp ecx,edi
	je Block5

 Block211:
	lea eax,[ebp-0x62C]
	push eax
	lea edx,[ebp-0x5AC]
	push edx
	push 8
	push 0x4F
	call IWzCanvas::Create
	lea ecx,[ebp-0x5AC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x62C]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,3
	mov word ptr [ebp-0x3F4],ax
	mov dword ptr [ebp-0x3EC],0xFF
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0x68
	cmp ecx,edi
	je Block5

 Block212:
	mov eax,dword ptr [ebp-0x14]
	lea edx,[ebp-0x3F4]
	push edx
	push eax
	push edi
	push edi
	call IWzCanvas::Copy
	lea ecx,[ebp-0x3F4]
	mov byte ptr [ebp-4],0x64
	call Ztl_variant_t::~Ztl_variant_t
	cmp dword ptr [ebp+0x54],edi
	jle Block216

 Block213:
	mov ebx,dword ptr [ebp-0x18]
	lea esp,[esp]

 Block214:
	mov ecx,3
	mov word ptr [ebp-0x40C],cx
	mov dword ptr [ebp-0x404],0xFF
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0x69
	test ecx,ecx
	je Block5

 Block215:
	lea edx,[ebp-0x40C]
	push edx
	push ebx
	push 2
	lea eax,[edi+2]
	push eax
	call IWzCanvas::Copy
	lea ecx,[ebp-0x40C]
	mov byte ptr [ebp-4],0x64
	call Ztl_variant_t::~Ztl_variant_t
	inc edi
	cmp edi,dword ptr [ebp+0x54]
	jl Block214

 Block216:
	lea ecx,[ebp+8]
	push ecx
	lea ecx,[esi+0x14]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov ecx,dword ptr [ebp+8]
	test ecx,ecx
	je Block5

 Block217:
	call IWzCanvas::Getwidth
	mov ecx,dword ptr [ebp+8]
	mov dword ptr [esi+0x20],eax
	test ecx,ecx
	je Block5

 Block218:
	call IWzCanvas::Getheight
	mov dword ptr [esi+0x24],eax
	mov eax,dword ptr [ebp+8]
	jmp Block328

 Block219:
	lea ecx,[ebp-0x10C]
	push 0x1194
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	mov edi,eax
	mov eax,dword ptr [ebp-0x10C]
	test eax,eax
	je Block221

 Block220:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block221:
	test edi,edi
	je Block238

 Block222:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[ebp-0x4A4]
	push edx
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push 1
	push eax
	mov byte ptr [ebp-4],0x6A
	call CQuestMan::GetCompletedQuestCnt
	lea ecx,[ebp-0x4A4]
	mov edi,eax
	mov byte ptr [ebp-4],0x61
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push ebx
	call CQuestMan::GetCompleteDemand
	mov ecx,dword ptr [eax+0xE4]
	mov eax,edi
	imul eax,0x4B
	cdq
	idiv ecx
	cmp eax,0x4B
	jle Block224

 Block223:
	mov eax,0x4B
	mov dword ptr [ebp+0x54],eax
	jmp Block227

 Block224:
	test eax,eax
	jle Block226

 Block225:
	mov dword ptr [ebp+0x54],eax
	jmp Block227

 Block226:
	mov dword ptr [ebp+0x54],0

 Block227:
	xor edi,edi
	mov dword ptr [esi],1
	mov dword ptr [ebp+0x10],edi
	lea eax,[ebp-0x1D8]
	push 0x3D0
	push eax
	mov byte ptr [ebp-4],0x6B
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[ebp+0x10]
	push ecx
	push eax
	mov byte ptr [ebp-4],0x6C
	call PcCreate_IWzCanvas
	mov eax,dword ptr [ebp-0x1D8]
	add esp,0xC
	mov byte ptr [ebp-4],0x6B
	cmp eax,edi
	je Block229

 Block228:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block229:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x4FC]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x5CC]
	mov byte ptr [ebp-4],0x6D
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x6E
	cmp ecx,edi
	je Block5

 Block230:
	lea edx,[ebp-0x4FC]
	push edx
	lea eax,[ebp-0x5CC]
	push eax
	push 8
	push 0x4F
	call IWzCanvas::Create
	lea ecx,[ebp-0x5CC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x4FC]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,3
	mov word ptr [ebp-0x424],cx
	mov dword ptr [ebp-0x41C],0xFF
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x6F
	cmp ecx,edi
	je Block5

 Block231:
	mov eax,dword ptr [ebp-0x14]
	lea edx,[ebp-0x424]
	push edx
	push eax
	push edi
	push edi
	call IWzCanvas::Copy
	lea ecx,[ebp-0x424]
	mov byte ptr [ebp-4],0x6B
	call Ztl_variant_t::~Ztl_variant_t
	cmp dword ptr [ebp+0x54],edi
	jle Block235

 Block232:
	mov ebx,dword ptr [ebp-0x18]
	lea esp,[esp]

 Block233:
	mov ecx,3
	mov word ptr [ebp-0x43C],cx
	mov dword ptr [ebp-0x434],0xFF
	mov ecx,dword ptr [ebp+0x10]
	mov byte ptr [ebp-4],0x70
	test ecx,ecx
	je Block5

 Block234:
	lea edx,[ebp-0x43C]
	push edx
	push ebx
	push 2
	lea eax,[edi+2]
	push eax
	call IWzCanvas::Copy
	lea ecx,[ebp-0x43C]
	mov byte ptr [ebp-4],0x6B
	call Ztl_variant_t::~Ztl_variant_t
	inc edi
	cmp edi,dword ptr [ebp+0x54]
	jl Block233

 Block235:
	lea ecx,[ebp+0x10]
	push ecx
	lea ecx,[esi+0x14]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov ecx,dword ptr [ebp+0x10]
	test ecx,ecx
	je Block5

 Block236:
	call IWzCanvas::Getwidth
	mov ecx,dword ptr [ebp+0x10]
	mov dword ptr [esi+0x20],eax
	test ecx,ecx
	je Block5

 Block237:
	call IWzCanvas::Getheight
	mov dword ptr [esi+0x24],eax
	mov eax,dword ptr [ebp+0x10]
	jmp Block328

 Block238:
	lea ecx,[ebp-0x114]
	push 0x1196
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	mov edi,eax
	mov eax,dword ptr [ebp-0x114]
	test eax,eax
	je Block240

 Block239:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block240:
	test edi,edi
	je Block272

 Block241:
	push 0xFFFFFFFF
	push offset _S_POPS
	lea ecx,[ebp-0x1AC]
	call ZXString<char>::CreateFromCharStr
	mov edi,eax
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[ebp-0x3B4]
	push edx
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	push edi
	push ebx
	lea ecx,[ebp-0x54]
	push ecx
	mov ecx,eax
	mov byte ptr [ebp-4],0x72
	call CharacterData::GetQuestEx
	lea ecx,[ebp-0x3B4]
	mov byte ptr [ebp-4],0x74
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov eax,dword ptr [ebp-0x1AC]
	mov byte ptr [ebp-4],0x75
	test eax,eax
	je Block243

 Block242:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block243:
	lea ecx,[ebp-0x54]
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block245

 Block244:
	mov edx,dword ptr [ebp-0x54]
	push edx
	call _atoi
	add esp,4
	mov ebx,eax
	jmp Block246

 Block245:
	xor ebx,ebx

 Block246:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp-0x444]
	push eax
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [eax+4]
	mov byte ptr [ebp-4],0x76
	call GW_CharacterStat::_ZtlSecureGet_nPOP
	movsx edi,ax
	lea ecx,[ebp-0x444]
	sub edi,ebx
	mov byte ptr [ebp-4],0x75
	call ZRef<CharacterData>::~ZRef<CharacterData>
	push 0xFFFFFFFF
	push offset _S_POPG
	lea ecx,[ebp-0x11C]
	call ZXString<char>::CreateFromCharStr
	mov ebx,eax
	lea ecx,[ebp-0x3CC]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov edx,dword ptr [ebp+0x78]
	mov eax,dword ptr [eax+4]
	push ebx
	push edx
	lea ecx,[ebp-0x44]
	push ecx
	mov ecx,eax
	mov byte ptr [ebp-4],0x78
	call CharacterData::GetQuestEx
	lea ecx,[ebp-0x3CC]
	mov byte ptr [ebp-4],0x7A
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov eax,dword ptr [ebp-0x11C]
	mov byte ptr [ebp-4],0x7B
	test eax,eax
	je Block248

 Block247:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block248:
	lea ecx,[ebp-0x44]
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block250

 Block249:
	mov edx,dword ptr [ebp-0x44]
	push edx
	call _atoi
	mov ecx,eax
	add esp,4
	test ecx,ecx
	jne Block251

 Block250:
	mov ecx,1

 Block251:
	mov eax,edi
	imul eax,0x4B
	cdq
	idiv ecx
	cmp eax,0x4B
	jle Block253

 Block252:
	mov eax,0x4B
	mov ebx,eax
	mov dword ptr [ebp+0x54],eax
	jmp Block256

 Block253:
	test eax,eax
	jle Block255

 Block254:
	mov ebx,eax
	mov dword ptr [ebp+0x54],eax
	jmp Block256

 Block255:
	xor ebx,ebx
	mov dword ptr [ebp+0x54],ebx

 Block256:
	xor edi,edi
	mov dword ptr [esi],1
	mov dword ptr [ebp+4],edi
	lea eax,[ebp-0x1C0]
	push 0x3D0
	push eax
	mov byte ptr [ebp-4],0x7C
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[ebp+4]
	push ecx
	push eax
	mov byte ptr [ebp-4],0x7D
	call PcCreate_IWzCanvas
	mov eax,dword ptr [ebp-0x1C0]
	add esp,0xC
	mov byte ptr [ebp-4],0x7C
	cmp eax,edi
	je Block258

 Block257:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block258:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x53C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x51C]
	mov byte ptr [ebp-4],0x7E
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [ebp+4]
	mov byte ptr [ebp-4],0x7F
	cmp ecx,edi
	je Block5

 Block259:
	lea edx,[ebp-0x53C]
	push edx
	lea eax,[ebp-0x51C]
	push eax
	push 8
	push 0x4F
	call IWzCanvas::Create
	lea ecx,[ebp-0x51C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x53C]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,3
	mov word ptr [ebp-0x454],cx
	mov dword ptr [ebp-0x44C],0xFF
	mov ecx,dword ptr [ebp+4]
	mov byte ptr [ebp-4],0x80
	cmp ecx,edi
	je Block5

 Block260:
	mov eax,dword ptr [ebp-0x14]
	lea edx,[ebp-0x454]
	push edx
	push eax
	push edi
	push edi
	call IWzCanvas::Copy
	lea ecx,[ebp-0x454]
	mov byte ptr [ebp-4],0x7C
	call Ztl_variant_t::~Ztl_variant_t
	cmp ebx,edi
	jle Block264

 Block261:
	mov ebx,dword ptr [ebp-0x18]
	nop

 Block262:
	mov ecx,3
	mov word ptr [ebp-0x46C],cx
	mov dword ptr [ebp-0x464],0xFF
	mov ecx,dword ptr [ebp+4]
	mov byte ptr [ebp-4],0x81
	test ecx,ecx
	je Block5

 Block263:
	lea edx,[ebp-0x46C]
	push edx
	push ebx
	push 2
	lea eax,[edi+2]
	push eax
	call IWzCanvas::Copy
	lea ecx,[ebp-0x46C]
	mov byte ptr [ebp-4],0x7C
	call Ztl_variant_t::~Ztl_variant_t
	inc edi
	cmp edi,dword ptr [ebp+0x54]
	jl Block262

 Block264:
	lea ecx,[ebp+4]
	push ecx
	lea ecx,[esi+0x14]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov ecx,dword ptr [ebp+4]
	test ecx,ecx
	je Block5

 Block265:
	call IWzCanvas::Getwidth
	mov ecx,dword ptr [ebp+4]
	mov dword ptr [esi+0x20],eax
	test ecx,ecx
	je Block5

 Block266:
	call IWzCanvas::Getheight
	mov dword ptr [esi+0x24],eax
	mov eax,dword ptr [ebp+4]
	mov byte ptr [ebp-4],0x7B
	test eax,eax
	je Block268

 Block267:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block268:
	mov eax,dword ptr [ebp-0x44]
	mov byte ptr [ebp-4],0x75
	test eax,eax
	je Block270

 Block269:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block270:
	mov eax,dword ptr [ebp-0x54]
	mov byte ptr [ebp-4],0x61
	test eax,eax
	je Block436

 Block271:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block436

 Block272:
	lea ecx,[ebp-0x124]
	push 0x1197
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	mov edi,eax
	mov eax,dword ptr [ebp-0x124]
	test eax,eax
	je Block274

 Block273:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block274:
	test edi,edi
	je Block306

 Block275:
	push 0xFFFFFFFF
	push offset _S_MON
	lea ecx,[ebp-0x1B4]
	call ZXString<char>::CreateFromCharStr
	mov edi,eax
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[ebp-0x48C]
	push edx
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	push edi
	push ebx
	lea ecx,[ebp-0x64]
	push ecx
	mov ecx,eax
	mov byte ptr [ebp-4],0x83
	call CharacterData::GetQuestEx
	lea ecx,[ebp-0x48C]
	mov byte ptr [ebp-4],0x85
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov eax,dword ptr [ebp-0x1B4]
	mov byte ptr [ebp-4],0x86
	test eax,eax
	je Block277

 Block276:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block277:
	lea ecx,[ebp-0x64]
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block279

 Block278:
	mov edx,dword ptr [ebp-0x64]
	push edx
	call _atoi
	add esp,4
	mov dword ptr [ebp+0x54],eax
	jmp Block280

 Block279:
	mov dword ptr [ebp+0x54],0

 Block280:
	push 0xFFFFFFFF
	push offset _S_MG
	lea ecx,[ebp-0x12C]
	call ZXString<char>::CreateFromCharStr
	mov edi,eax
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp-0x3E4]
	push eax
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	push edi
	push ebx
	lea ecx,[ebp-0x5C]
	push ecx
	mov ecx,eax
	mov byte ptr [ebp-4],0x88
	call CharacterData::GetQuestEx
	lea ecx,[ebp-0x3E4]
	mov byte ptr [ebp-4],0x8A
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov eax,dword ptr [ebp-0x12C]
	mov byte ptr [ebp-4],0x8B
	test eax,eax
	je Block282

 Block281:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block282:
	lea ecx,[ebp-0x5C]
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block284

 Block283:
	mov edx,dword ptr [ebp-0x5C]
	push edx
	call _atoi
	mov ecx,eax
	add esp,4
	test ecx,ecx
	jne Block285

 Block284:
	mov ecx,1

 Block285:
	mov eax,dword ptr [ebp+0x54]
	imul eax,0x4B
	cdq
	idiv ecx
	cmp eax,0x4B
	jle Block287

 Block286:
	mov eax,0x4B
	mov ebx,eax
	mov dword ptr [ebp+0x54],eax
	jmp Block290

 Block287:
	test eax,eax
	jle Block289

 Block288:
	mov ebx,eax
	mov dword ptr [ebp+0x54],eax
	jmp Block290

 Block289:
	xor ebx,ebx
	mov dword ptr [ebp+0x54],ebx

 Block290:
	xor edi,edi
	mov dword ptr [esi],1
	mov dword ptr [ebp],edi
	lea eax,[ebp-0x1F4]
	push 0x3D0
	push eax
	mov byte ptr [ebp-4],0x8C
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[ebp]
	push ecx
	push eax
	mov byte ptr [ebp-4],0x8D
	call PcCreate_IWzCanvas
	mov eax,dword ptr [ebp-0x1F4]
	add esp,0xC
	mov byte ptr [ebp-4],0x8C
	cmp eax,edi
	je Block292

 Block291:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block292:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x4EC]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x55C]
	mov byte ptr [ebp-4],0x8E
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [ebp]
	mov byte ptr [ebp-4],0x8F
	cmp ecx,edi
	je Block5

 Block293:
	lea edx,[ebp-0x4EC]
	push edx
	lea eax,[ebp-0x55C]
	push eax
	push 8
	push 0x4F
	call IWzCanvas::Create
	lea ecx,[ebp-0x55C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x4EC]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,3
	mov word ptr [ebp-0x484],cx
	mov dword ptr [ebp-0x47C],0xFF
	mov ecx,dword ptr [ebp]
	mov byte ptr [ebp-4],0x90
	cmp ecx,edi
	je Block5

 Block294:
	mov eax,dword ptr [ebp-0x14]
	lea edx,[ebp-0x484]
	push edx
	push eax
	push edi
	push edi
	call IWzCanvas::Copy
	lea ecx,[ebp-0x484]
	mov byte ptr [ebp-4],0x8C
	call Ztl_variant_t::~Ztl_variant_t
	cmp ebx,edi
	jle Block298

 Block295:
	mov ebx,dword ptr [ebp-0x18]

 Block296:
	mov ecx,3
	mov word ptr [ebp-0x49C],cx
	mov dword ptr [ebp-0x494],0xFF
	mov ecx,dword ptr [ebp]
	mov byte ptr [ebp-4],0x91
	test ecx,ecx
	je Block5

 Block297:
	lea edx,[ebp-0x49C]
	push edx
	push ebx
	push 2
	lea eax,[edi+2]
	push eax
	call IWzCanvas::Copy
	lea ecx,[ebp-0x49C]
	mov byte ptr [ebp-4],0x8C
	call Ztl_variant_t::~Ztl_variant_t
	inc edi
	cmp edi,dword ptr [ebp+0x54]
	jl Block296

 Block298:
	lea ecx,[ebp]
	push ecx
	lea ecx,[esi+0x14]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov ecx,dword ptr [ebp]
	test ecx,ecx
	je Block5

 Block299:
	call IWzCanvas::Getwidth
	mov ecx,dword ptr [ebp]
	mov dword ptr [esi+0x20],eax
	test ecx,ecx
	je Block5

 Block300:
	call IWzCanvas::Getheight
	mov dword ptr [esi+0x24],eax
	mov eax,dword ptr [ebp]
	mov byte ptr [ebp-4],0x8B
	test eax,eax
	je Block302

 Block301:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block302:
	mov eax,dword ptr [ebp-0x5C]
	mov byte ptr [ebp-4],0x86
	test eax,eax
	je Block304

 Block303:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block304:
	mov eax,dword ptr [ebp-0x64]
	mov byte ptr [ebp-4],0x61
	test eax,eax
	je Block436

 Block305:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block436

 Block306:
	lea ecx,[ebp-0x134]
	push 0x1195
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	mov edi,eax
	mov eax,dword ptr [ebp-0x134]
	test eax,eax
	je Block308

 Block307:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block308:
	test edi,edi
	je Block330

 Block309:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[ebp-0x33C]
	push edx
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	push ebx
	lea ecx,[ebp-0x739]
	push ecx
	mov ecx,eax
	mov byte ptr [ebp-4],0x92
	call CharacterData::GetQuestPlayTimeRecord
	movzx edi,word ptr [eax+0xB]
	lea ecx,[ebp-0x33C]
	mov byte ptr [ebp-4],0x61
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push ebx
	call CQuestMan::GetQuestTimeLimit2
	mov edx,eax
	mov eax,0xAAAAAAAB
	mul edx
	shr edx,4
	mov eax,0x88888889
	mul edx
	shr edx,5
	mov eax,0x88888889
	mul edx
	shr edx,5
	mov dword ptr [ebp+0x40],edx
	fild dword ptr [ebp+0x40]
	test edx,edx
	jge Block311

 Block310:
	fadd qword ptr [__real_41f0000000000000]

 Block311:
	fmul qword ptr [__real_3feccccccccccccd]
	call __ftol2_sse
	mov ecx,eax
	mov eax,edi
	imul eax,0x4B
	cdq
	idiv ecx
	cmp eax,0x4B
	jle Block313

 Block312:
	mov eax,0x4B
	mov dword ptr [ebp+0x54],eax
	jmp Block316

 Block313:
	test eax,eax
	jle Block315

 Block314:
	mov dword ptr [ebp+0x54],eax
	jmp Block316

 Block315:
	mov dword ptr [ebp+0x54],0

 Block316:
	xor edi,edi
	mov dword ptr [esi],1
	mov dword ptr [ebp+0x34],edi
	lea eax,[ebp-0x1BC]
	push 0x3D0
	push eax
	mov byte ptr [ebp-4],0x93
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[ebp+0x34]
	push ecx
	push eax
	mov byte ptr [ebp-4],0x94
	call PcCreate_IWzCanvas
	mov eax,dword ptr [ebp-0x1BC]
	add esp,0xC
	mov byte ptr [ebp-4],0x93
	cmp eax,edi
	je Block318

 Block317:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block318:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x5BC]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x4DC]
	mov byte ptr [ebp-4],0x95
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x96
	cmp ecx,edi
	je Block5

 Block319:
	lea edx,[ebp-0x5BC]
	push edx
	lea eax,[ebp-0x4DC]
	push eax
	push 8
	push 0x4F
	call IWzCanvas::Create
	lea ecx,[ebp-0x4DC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x5BC]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,3
	mov word ptr [ebp-0x314],cx
	mov dword ptr [ebp-0x30C],0xFF
	mov ecx,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x97
	cmp ecx,edi
	je Block5

 Block320:
	mov eax,dword ptr [ebp-0x14]
	lea edx,[ebp-0x314]
	push edx
	push eax
	push edi
	push edi
	call IWzCanvas::Copy
	lea ecx,[ebp-0x314]
	mov byte ptr [ebp-4],0x93
	call Ztl_variant_t::~Ztl_variant_t
	cmp dword ptr [ebp+0x54],edi
	jle Block325

 Block321:
	mov ebx,dword ptr [ebp-0x18]
	jmp Block323

 Block323:
	mov ecx,3
	mov word ptr [ebp-0x32C],cx
	mov dword ptr [ebp-0x324],0xFF
	mov ecx,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x98
	test ecx,ecx
	je Block5

 Block324:
	lea edx,[ebp-0x32C]
	push edx
	push ebx
	push 2
	lea eax,[edi+2]
	push eax
	call IWzCanvas::Copy
	lea ecx,[ebp-0x32C]
	mov byte ptr [ebp-4],0x93
	call Ztl_variant_t::~Ztl_variant_t
	inc edi
	cmp edi,dword ptr [ebp+0x54]
	jl Block323

 Block325:
	lea ecx,[ebp+0x34]
	push ecx
	lea ecx,[esi+0x14]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov ecx,dword ptr [ebp+0x34]
	test ecx,ecx
	je Block5

 Block326:
	call IWzCanvas::Getwidth
	mov ecx,dword ptr [ebp+0x34]
	mov dword ptr [esi+0x20],eax
	test ecx,ecx
	je Block5

 Block327:
	call IWzCanvas::Getheight
	mov dword ptr [esi+0x24],eax
	mov eax,dword ptr [ebp+0x34]

 Block328:
	mov byte ptr [ebp-4],0x61
	test eax,eax
	je Block436

 Block329:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block436

 Block330:
	lea ecx,[ebp-0x13C]
	push 0x1184
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	mov edi,eax
	mov eax,dword ptr [ebp-0x13C]
	test eax,eax
	je Block332

 Block331:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block332:
	test edi,edi
	je Block340

 Block333:
	lea ecx,[ebp+0x4C]
	call ZXString<char>::IsEmpty
	test eax,eax
	je Block335

 Block334:
	push offset _S_F__1
	lea ecx,[ebp+0x4C]
	call ZXString<char>::AssignCStr

 Block335:
	mov dword ptr [esi],1
	mov dword ptr [ebp+0x54],0
	mov edx,dword ptr [ebp+0x4C]
	push 0xFFFFFFFF
	push 0
	push edx
	mov byte ptr [ebp-4],0x99
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov edi,esp
	lea eax,[ebp-0x1FC]
	push 0x119F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp+0x4C]
	mov ebx,dword ptr [eax]
	push 0xFFFFFFFF
	push edi
	push ecx
	mov byte ptr [ebp-4],0x9A
	call ZStrUtil::_Conv_0
	push eax
	lea edx,[ebp+0x54]
	push ebx
	push edx
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x1FC]
	add esp,0x18
	mov byte ptr [ebp-4],0x99
	test eax,eax
	je Block337

 Block336:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block337:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x5FC]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x5DC]
	mov byte ptr [ebp-4],0x9B
	call Ztl_variant_t::_ctor_1
	mov edx,dword ptr [ebp+0x54]
	push 0
	push 0
	lea eax,[ebp-0x5FC]
	push eax
	lea ecx,[ebp-0x5DC]
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push edx
	mov byte ptr [ebp-4],0x9C
	call Ztl_bstr_t::_ctor_2
	lea eax,[ebp-0x6EC]
	push eax
	mov ecx,offset _D_G_RM
	mov byte ptr [ebp-4],0x9D
	call _x_com_ptr<IWzResMan>::op_arrow
	mov ecx,eax
	mov byte ptr [ebp-4],0x9C
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x9E
	lea edi,[esi+0x14]
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[ebp-0x6EC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x5DC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x5FC]
	mov byte ptr [ebp-4],0x99
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getwidth
	mov ecx,edi
	mov dword ptr [esi+0x20],eax
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getheight
	mov ecx,dword ptr [ebp+0x38]
	mov edi,dword ptr [ebp+0x78]
	mov dword ptr [esi+0x24],eax
	mov dword ptr [esi+0x38],ecx
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push edi
	call CQuestMan::IsPartyQuest
	test eax,eax
	je Block339

 Block338:
	push ecx
	lea edx,[ebp+0x4C]
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push edx
	call ZXString<char>::_ctor_copy
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push edi
	lea eax,[ebp-0x144]
	push eax
	call CQuestMan::GetPartyQuestRankString
	push eax
	lea ecx,[esi+0x10]
	mov byte ptr [ebp-4],0x9F
	call ZXString<char>::op_assign
	lea ecx,[ebp-0x144]
	mov byte ptr [ebp-4],0x99
	call ZXString<char>::~ZXString<char>

 Block339:
	lea ecx,[ebp+0x54]
	mov byte ptr [ebp-4],0x61
	call ZXString16::~ZXString<wchar_t>
	jmp Block436

 Block340:
	lea ecx,[ebp-0x15C]
	push 0x1185
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,dword ptr [ebp+0x48]
	or ebx,1
	push eax
	lea ecx,[ebp+0x58]
	mov byte ptr [ebp-4],0xA0
	mov dword ptr [ebp+0x48],ebx
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block346

 Block341:
	lea edx,[ebp-0x1CC]
	push 0x1186
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	or ebx,2
	push eax
	lea ecx,[ebp+0x58]
	mov dword ptr [ebp-4],0xA1
	mov dword ptr [ebp+0x48],ebx
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block346

 Block342:
	lea eax,[ebp-0x154]
	push 0x1187
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	or ebx,4
	push eax
	lea ecx,[ebp+0x58]
	mov dword ptr [ebp-4],0xA2
	mov dword ptr [ebp+0x48],ebx
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block346

 Block343:
	lea ecx,[ebp-0x1E0]
	push 0x1188
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	or ebx,8
	push eax
	lea ecx,[ebp+0x58]
	mov dword ptr [ebp-4],0xA3
	mov dword ptr [ebp+0x48],ebx
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block346

 Block344:
	lea edx,[ebp-0x14C]
	push 0x1189
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	or ebx,0x10
	push eax
	lea ecx,[ebp+0x58]
	mov dword ptr [ebp-4],0xA4
	mov dword ptr [ebp+0x48],ebx
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block346

 Block345:
	lea eax,[ebp-0x204]
	push 0x118A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	or ebx,0x20
	push eax
	lea ecx,[ebp+0x58]
	mov dword ptr [ebp+0x48],ebx
	call ZXString<char>::op_eq_0
	mov byte ptr [ebp+0x53],0
	test eax,eax
	je Block347

 Block346:
	mov byte ptr [ebp+0x53],1

 Block347:
	test bl,0x20
	je Block349

 Block348:
	and ebx,0xFFFFFFDF
	lea ecx,[ebp-0x204]
	mov dword ptr [ebp+0x48],ebx
	call ZXString<char>::~ZXString<char>

 Block349:
	mov dword ptr [ebp-4],0xA3
	test bl,0x10
	je Block351

 Block350:
	and ebx,0xFFFFFFEF
	lea ecx,[ebp-0x14C]
	mov dword ptr [ebp+0x48],ebx
	call ZXString<char>::~ZXString<char>

 Block351:
	mov dword ptr [ebp-4],0xA2
	test bl,8
	je Block353

 Block352:
	and ebx,0xFFFFFFF7
	lea ecx,[ebp-0x1E0]
	mov dword ptr [ebp+0x48],ebx
	call ZXString<char>::~ZXString<char>

 Block353:
	mov dword ptr [ebp-4],0xA1
	test bl,4
	je Block355

 Block354:
	and ebx,0xFFFFFFFB
	lea ecx,[ebp-0x154]
	mov dword ptr [ebp+0x48],ebx
	call ZXString<char>::~ZXString<char>

 Block355:
	mov dword ptr [ebp-4],0xA0
	test bl,2
	je Block357

 Block356:
	and ebx,0xFFFFFFFD
	lea ecx,[ebp-0x1CC]
	mov dword ptr [ebp+0x48],ebx
	call ZXString<char>::~ZXString<char>

 Block357:
	mov dword ptr [ebp-4],0x61
	test bl,1
	je Block359

 Block358:
	and ebx,0xFFFFFFFE
	lea ecx,[ebp-0x15C]
	mov dword ptr [ebp+0x48],ebx
	call ZXString<char>::~ZXString<char>

 Block359:
	cmp byte ptr [ebp+0x53],0
	je Block364

 Block360:
	lea ecx,[ebp+0x4C]
	call ZXString<char>::IsEmpty
	test eax,eax
	je Block362

 Block361:
	xor eax,eax
	jmp Block363

 Block362:
	mov ecx,dword ptr [ebp+0x4C]
	push ecx
	call _atoi
	add esp,4

 Block363:
	push eax
	lea edi,[esi+0x10]
	push offset _S_4D
	push edi
	call ZXString<char>::Format
	add esp,0xC
	jmp Block435

 Block364:
	lea edx,[ebp-0x200]
	push 0x118B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	lea ecx,[ebp-0x200]
	mov edi,eax
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block378

 Block365:
	push 0xFFFFFFFF
	push offset _S_TRY
	lea ecx,[ebp-0x90]
	call ZXString<char>::CreateFromCharStr
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp-0x34C]
	push eax
	call CWvsContext::GetCharacterData
	mov edx,dword ptr [ebp+0x78]
	mov eax,dword ptr [eax+4]
	lea ecx,[ebp-0x90]
	push ecx
	push edx
	lea ecx,[ebp-0x88]
	push ecx
	mov ecx,eax
	mov byte ptr [ebp-4],0xA6
	call CharacterData::GetQuestEx
	lea ecx,[ebp-0x34C]
	mov byte ptr [ebp-4],0xA8
	call ZRef<CharacterData>::~ZRef<CharacterData>
	lea ecx,[ebp-0x88]
	call ZXString<char>::IsEmpty
	test eax,eax
	je Block367

 Block366:
	xor ebx,ebx
	jmp Block368

 Block367:
	mov edx,dword ptr [ebp-0x88]
	push edx
	call _atoi
	add esp,4
	mov ebx,eax

 Block368:
	push 0xFFFFFFFF
	push offset _S_DRAW
	lea ecx,[ebp-0xA4]
	call ZXString<char>::CreateFromCharStr
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp-0x304]
	push eax
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [ebp+0x78]
	mov eax,dword ptr [eax+4]
	lea ecx,[ebp-0xA4]
	push ecx
	push edi
	lea edx,[ebp-0x4C]
	push edx
	mov ecx,eax
	mov byte ptr [ebp-4],0xAA
	call CharacterData::GetQuestEx
	lea ecx,[ebp-0x304]
	mov byte ptr [ebp-4],0xAC
	call ZRef<CharacterData>::~ZRef<CharacterData>
	lea ecx,[ebp-0x4C]
	call ZXString<char>::IsEmpty
	test eax,eax
	je Block370

 Block369:
	mov dword ptr [ebp+0x54],0
	jmp Block371

 Block370:
	mov eax,dword ptr [ebp-0x4C]
	push eax
	call _atoi
	add esp,4
	mov dword ptr [ebp+0x54],eax

 Block371:
	push 0xFFFFFFFF
	push offset _S_VIC
	lea ecx,[ebp-0x9C]
	call ZXString<char>::CreateFromCharStr
	lea ecx,[ebp-0x36C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	lea edx,[ebp-0x9C]
	push edx
	push edi
	lea ecx,[ebp-0x74]
	push ecx
	mov ecx,eax
	mov byte ptr [ebp-4],0xAE
	call CharacterData::GetQuestEx
	lea ecx,[ebp-0x36C]
	mov byte ptr [ebp-4],0xB0
	call ZRef<CharacterData>::~ZRef<CharacterData>
	lea ecx,[ebp-0x74]
	call ZXString<char>::IsEmpty
	test eax,eax
	je Block373

 Block372:
	mov dword ptr [ebp+0x40],0
	jmp Block374

 Block373:
	mov edx,dword ptr [ebp-0x74]
	push edx
	call _atoi
	add esp,4
	mov dword ptr [ebp+0x40],eax

 Block374:
	push 0xFFFFFFFF
	push offset _S_LOSE
	lea ecx,[ebp-0x94]
	call ZXString<char>::CreateFromCharStr
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp-0x37C]
	push eax
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	lea ecx,[ebp-0x94]
	push ecx
	push edi
	lea edx,[ebp-0x40]
	push edx
	mov ecx,eax
	mov byte ptr [ebp-4],0xB2
	call CharacterData::GetQuestEx
	lea ecx,[ebp-0x37C]
	mov byte ptr [ebp-4],0xB4
	call ZRef<CharacterData>::~ZRef<CharacterData>
	lea ecx,[ebp-0x40]
	call ZXString<char>::IsEmpty
	test eax,eax
	je Block376

 Block375:
	xor eax,eax
	jmp Block377

 Block376:
	mov eax,dword ptr [ebp-0x40]
	push eax
	call _atoi
	add esp,4

 Block377:
	sub ebx,dword ptr [ebp+0x54]
	lea edi,[esi+0x10]
	sub ebx,eax
	sub ebx,dword ptr [ebp+0x40]
	push ebx
	push offset _S_D__1
	push edi
	call ZXString<char>::Format
	add esp,0xC
	lea ecx,[ebp-0x40]
	mov byte ptr [ebp-4],0xB1
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp-0x94]
	mov byte ptr [ebp-4],0xB0
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp-0x74]
	mov byte ptr [ebp-4],0xAD
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp-0x9C]
	mov byte ptr [ebp-4],0xAC
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp-0x4C]
	mov byte ptr [ebp-4],0xA9
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp-0xA4]
	mov byte ptr [ebp-4],0xA8
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp-0x88]
	mov byte ptr [ebp-4],0xA5
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp-0x90]
	mov byte ptr [ebp-4],0x61
	call ZXString<char>::~ZXString<char>
	jmp Block435

 Block378:
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block381

 Block379:
	cmp dword ptr [eax-4],6
	jl Block381

 Block380:
	lea ecx,[ebp-0x1D4]
	push 0x118C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edi,eax
	push 6
	lea edx,[ebp-0x164]
	or ebx,0x40
	push edx
	lea ecx,[ebp+0x58]
	mov byte ptr [ebp-4],0xB5
	mov dword ptr [ebp+0x48],ebx
	call ZXString<char>::Left
	or ebx,0x80
	push edi
	mov ecx,eax
	mov dword ptr [ebp+0x48],ebx
	call ZXString<char>::op_eq_0
	mov byte ptr [ebp+0x53],1
	test eax,eax
	jne Block382

 Block381:
	mov byte ptr [ebp+0x53],0

 Block382:
	test bl,bl
	jns Block384

 Block383:
	and ebx,0xFFFFFF7F
	lea ecx,[ebp-0x164]
	mov dword ptr [ebp+0x48],ebx
	call ZXString<char>::~ZXString<char>

 Block384:
	mov dword ptr [ebp-4],0x61
	test bl,0x40
	je Block386

 Block385:
	and ebx,0xFFFFFFBF
	lea ecx,[ebp-0x1D4]
	mov dword ptr [ebp+0x48],ebx
	call ZXString<char>::~ZXString<char>

 Block386:
	cmp byte ptr [ebp+0x53],0
	je Block391

 Block387:
	lea ecx,[ebp+0x4C]
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block390

 Block388:
	mov eax,dword ptr [ebp+0x4C]
	push eax
	call _atoi
	add esp,4
	test eax,eax
	jle Block390

 Block389:
	lea ecx,[ebp-0x16C]
	push 0x119D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	lea edi,[esi+0x10]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xB6
	call ZXString<char>::op_assign
	lea ecx,[ebp-0x16C]
	mov byte ptr [ebp-4],0x61
	call ZXString<char>::~ZXString<char>
	jmp Block435

 Block390:
	lea edx,[ebp-0x1F8]
	push 0x119E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	lea edi,[esi+0x10]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xB7
	call ZXString<char>::op_assign
	lea ecx,[ebp-0x1F8]
	mov byte ptr [ebp-4],0x61
	call ZXString<char>::~ZXString<char>
	jmp Block435

 Block391:
	lea eax,[ebp-0x174]
	push 0x118D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	lea ecx,[ebp-0x174]
	mov edi,eax
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block396

 Block392:
	lea ecx,[ebp+0x4C]
	call ZXString<char>::IsEmpty
	test eax,eax
	je Block394

 Block393:
	xor eax,eax
	jmp Block395

 Block394:
	mov ecx,dword ptr [ebp+0x4C]
	push ecx
	call _atoi
	add esp,4

 Block395:
	push eax
	lea edi,[esi+0x10]
	push offset _S_2D
	push edi
	call ZXString<char>::Format
	add esp,0xC
	jmp Block435

 Block396:
	lea edx,[ebp-0x1DC]
	push 0x118E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	lea ecx,[ebp-0x1DC]
	mov edi,eax
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block398

 Block397:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp-0x38C]
	push eax
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,eax
	mov byte ptr [ebp-4],0xB8
	lea edi,[esi+0x10]
	call GW_CharacterStat::_ZtlSecureGet_nPOP
	movsx ecx,ax
	push ecx
	push offset _S_D__1
	push edi
	call ZXString<char>::Format
	add esp,0xC
	lea ecx,[ebp-0x38C]
	mov byte ptr [ebp-4],0x61
	call ZRef<CharacterData>::~ZRef<CharacterData>
	jmp Block435

 Block398:
	lea edx,[ebp-0x17C]
	push 0x118F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	lea ecx,[ebp-0x17C]
	mov edi,eax
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block403

 Block399:
	push 0xFFFFFFFF
	push offset _S_POPS
	lea ecx,[ebp-0x208]
	call ZXString<char>::CreateFromCharStr
	mov edi,eax
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp-0x39C]
	push eax
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [ebp+0x78]
	mov eax,dword ptr [eax+4]
	push edi
	push ecx
	lea edx,[ebp-0x50]
	push edx
	mov ecx,eax
	mov byte ptr [ebp-4],0xBA
	call CharacterData::GetQuestEx
	lea ecx,[ebp-0x39C]
	mov byte ptr [ebp-4],0xBC
	call ZRef<CharacterData>::~ZRef<CharacterData>
	lea ecx,[ebp-0x208]
	mov byte ptr [ebp-4],0xBD
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp-0x50]
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block401

 Block400:
	mov eax,dword ptr [ebp-0x50]
	push eax
	call _atoi
	add esp,4
	mov ebx,eax
	jmp Block402

 Block401:
	xor ebx,ebx

 Block402:
	lea ecx,[ebp-0x3AC]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,eax
	mov byte ptr [ebp-4],0xBE
	lea edi,[esi+0x10]
	call GW_CharacterStat::_ZtlSecureGet_nPOP
	movsx edx,ax
	sub edx,ebx
	push edx
	push offset _S_D__1
	push edi
	call ZXString<char>::Format
	add esp,0xC
	lea ecx,[ebp-0x3AC]
	mov byte ptr [ebp-4],0xBD
	call ZRef<CharacterData>::~ZRef<CharacterData>
	lea ecx,[ebp-0x50]
	mov byte ptr [ebp-4],0x61
	call ZXString<char>::~ZXString<char>
	jmp Block435

 Block403:
	lea eax,[ebp-0x184]
	push 0x1190
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	lea ecx,[ebp-0x184]
	mov edi,eax
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block405

 Block404:
	lea ecx,[ebp-0x31C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,eax
	mov byte ptr [ebp-4],0xBF
	lea edi,[esi+0x10]
	call GW_CharacterStat::_ZtlSecureGet_nLevel
	movzx edx,al
	push edx
	push offset _S_D__1
	push edi
	call ZXString<char>::Format
	add esp,0xC
	lea ecx,[ebp-0x31C]
	mov byte ptr [ebp-4],0x61
	call ZRef<CharacterData>::~ZRef<CharacterData>
	jmp Block435

 Block405:
	lea eax,[ebp-0xCC]
	push 0x1191
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	lea ecx,[ebp-0xCC]
	mov edi,eax
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block407

 Block406:
	lea ecx,[ebp-0x4AC]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov edi,eax
	push 0xFFFFFFFF
	push offset _S_S
	lea ecx,[ebp-0xD0]
	mov byte ptr [ebp-4],0xC0
	call ZXString<char>::CreateFromCharStr
	mov ecx,dword ptr [edi+4]
	push ecx
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push eax
	mov byte ptr [ebp-4],0xC1
	lea edi,[esi+0x10]
	call CQuestMan::GetPartyQuestRankCount
	push eax
	push offset _S_D__1
	push edi
	call ZXString<char>::Format
	add esp,0xC
	lea ecx,[ebp-0xD0]
	mov byte ptr [ebp-4],0xC0
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp-0x4AC]
	mov byte ptr [ebp-4],0x61
	call ZRef<CharacterData>::~ZRef<CharacterData>
	jmp Block435

 Block407:
	lea edx,[ebp-0xD8]
	push 0x1192
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	lea ecx,[ebp-0xD8]
	mov edi,eax
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block409

 Block408:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp-0x334]
	push eax
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push 1
	push eax
	mov byte ptr [ebp-4],0xC2
	lea edi,[esi+0x10]
	call CQuestMan::GetCompletedQuestCnt
	push eax
	push offset _S_D__1
	push edi
	call ZXString<char>::Format
	add esp,0xC
	lea ecx,[ebp-0x334]
	mov byte ptr [ebp-4],0x61
	call ZRef<CharacterData>::~ZRef<CharacterData>
	jmp Block435

 Block409:
	lea ecx,[ebp-0xE0]
	push 0x1198
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	lea ecx,[ebp-0xE0]
	mov edi,eax
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block411

 Block410:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[ebp-0x4BC]
	push edx
	call CWvsContext::GetCharacterData
	mov edi,eax
	push 0xFFFFFFFF
	push offset _S_S
	lea ecx,[ebp-0xE8]
	mov byte ptr [ebp-4],0xC3
	call ZXString<char>::CreateFromCharStr
	mov edi,dword ptr [edi+4]
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push edi
	push eax
	mov byte ptr [ebp-4],0xC4
	call CQuestMan::GetPartyQuestRankCount
	lea ecx,[ebp-0xE8]
	mov edi,eax
	mov byte ptr [ebp-4],0xC3
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp-0x4BC]
	mov byte ptr [ebp-4],0x61
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov eax,dword ptr [ebp+0x78]
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push eax
	call CQuestMan::GetCompleteDemand
	mov ecx,dword ptr [eax+0xDC]
	jmp Block433

 Block411:
	lea ecx,[ebp-0xF0]
	push 0x1199
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	lea ecx,[ebp-0xF0]
	mov edi,eax
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block413

 Block412:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[ebp-0x344]
	push edx
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push 1
	push eax
	mov byte ptr [ebp-4],0xC5
	call CQuestMan::GetCompletedQuestCnt
	lea ecx,[ebp-0x344]
	mov edi,eax
	mov byte ptr [ebp-4],0x61
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov eax,dword ptr [ebp+0x78]
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push eax
	call CQuestMan::GetCompleteDemand
	mov ecx,dword ptr [eax+0xE4]
	jmp Block433

 Block413:
	lea ecx,[ebp-0xF8]
	push 0x119B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	lea ecx,[ebp-0xF8]
	mov edi,eax
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block421

 Block414:
	push 0xFFFFFFFF
	push offset _S_POPS
	lea ecx,[ebp-0x100]
	call ZXString<char>::CreateFromCharStr
	mov edi,eax
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[ebp-0x45C]
	push edx
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [ebp+0x78]
	mov eax,dword ptr [eax+4]
	push edi
	push ecx
	lea edx,[ebp-0x58]
	push edx
	mov ecx,eax
	mov byte ptr [ebp-4],0xC7
	call CharacterData::GetQuestEx
	lea ecx,[ebp-0x45C]
	mov byte ptr [ebp-4],0xC9
	call ZRef<CharacterData>::~ZRef<CharacterData>
	lea ecx,[ebp-0x100]
	mov byte ptr [ebp-4],0xCA
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp-0x58]
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block416

 Block415:
	mov eax,dword ptr [ebp-0x58]
	push eax
	call _atoi
	add esp,4
	mov ebx,eax
	jmp Block417

 Block416:
	xor ebx,ebx

 Block417:
	lea ecx,[ebp-0x354]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [eax+4]
	mov byte ptr [ebp-4],0xCB
	call GW_CharacterStat::_ZtlSecureGet_nPOP
	movsx edi,ax
	lea ecx,[ebp-0x354]
	sub edi,ebx
	mov byte ptr [ebp-4],0xCA
	call ZRef<CharacterData>::~ZRef<CharacterData>
	push 0xFFFFFFFF
	push offset _S_POPG
	lea ecx,[ebp-0x108]
	call ZXString<char>::CreateFromCharStr
	mov ebx,eax
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[ebp-0x3FC]
	push edx
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [ebp+0x78]
	mov eax,dword ptr [eax+4]
	push ebx
	push ecx
	lea edx,[ebp-0x70]
	push edx
	mov ecx,eax
	mov byte ptr [ebp-4],0xCD
	call CharacterData::GetQuestEx
	lea ecx,[ebp-0x3FC]
	mov byte ptr [ebp-4],0xCF
	call ZRef<CharacterData>::~ZRef<CharacterData>
	lea ecx,[ebp-0x108]
	mov byte ptr [ebp-4],0xD0
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp-0x70]
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block419

 Block418:
	mov eax,dword ptr [ebp-0x70]
	push eax
	call _atoi
	add esp,4
	mov ecx,eax
	jmp Block420

 Block419:
	mov ecx,1

 Block420:
	mov eax,edi
	imul eax,0x64
	cdq
	idiv ecx
	push 0
	push eax
	push 0x64
	call _zmin_long
	add esp,8
	push eax
	call _zmax_long
	push eax
	lea edi,[esi+0x10]
	push offset _S_D__1
	push edi
	call ZXString<char>::Format
	add esp,0x14
	lea ecx,[ebp-0x70]
	mov byte ptr [ebp-4],0xCA
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp-0x58]
	mov byte ptr [ebp-4],0x61
	call ZXString<char>::~ZXString<char>
	jmp Block435

 Block421:
	lea ecx,[ebp-0xC8]
	push 0x119C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	lea ecx,[ebp-0xC8]
	mov edi,eax
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block429

 Block422:
	push 0xFFFFFFFF
	push offset _S_MON
	lea ecx,[ebp-0xBC]
	call ZXString<char>::CreateFromCharStr
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[ebp-0x364]
	push edx
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [ebp+0x78]
	mov eax,dword ptr [eax+4]
	lea ecx,[ebp-0xBC]
	push ecx
	push ebx
	lea edx,[ebp-0x60]
	push edx
	mov ecx,eax
	mov byte ptr [ebp-4],0xD2
	call CharacterData::GetQuestEx
	lea ecx,[ebp-0x364]
	mov byte ptr [ebp-4],0xD4
	call ZRef<CharacterData>::~ZRef<CharacterData>
	lea ecx,[ebp-0x60]
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block424

 Block423:
	mov eax,dword ptr [ebp-0x60]
	push eax
	call _atoi
	add esp,4
	mov edi,eax
	jmp Block425

 Block424:
	xor edi,edi

 Block425:
	push 0xFFFFFFFF
	push offset _S_MG
	lea ecx,[ebp-0xB4]
	call ZXString<char>::CreateFromCharStr
	lea ecx,[ebp-0x4B4]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	lea edx,[ebp-0xB4]
	push edx
	push ebx
	lea ecx,[ebp-0x80]
	push ecx
	mov ecx,eax
	mov byte ptr [ebp-4],0xD6
	call CharacterData::GetQuestEx
	lea ecx,[ebp-0x4B4]
	mov byte ptr [ebp-4],0xD8
	call ZRef<CharacterData>::~ZRef<CharacterData>
	lea ecx,[ebp-0x80]
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block427

 Block426:
	mov edx,dword ptr [ebp-0x80]
	push edx
	call _atoi
	mov ecx,eax
	add esp,4
	test ecx,ecx
	jne Block428

 Block427:
	mov ecx,1

 Block428:
	mov eax,edi
	imul eax,0x64
	cdq
	idiv ecx
	push 0
	push eax
	push 0x64
	call _zmin_long
	add esp,8
	push eax
	call _zmax_long
	push eax
	lea edi,[esi+0x10]
	push offset _S_D__1
	push edi
	call ZXString<char>::Format
	add esp,0x14
	lea ecx,[ebp-0x80]
	mov byte ptr [ebp-4],0xD5
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp-0xB4]
	mov byte ptr [ebp-4],0xD4
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp-0x60]
	mov byte ptr [ebp-4],0xD1
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp-0xBC]
	mov byte ptr [ebp-4],0x61
	call ZXString<char>::~ZXString<char>
	jmp Block435

 Block429:
	lea eax,[ebp-0x118]
	push 0x119A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[ebp+0x58]
	call ZXString<char>::op_eq_0
	lea ecx,[ebp-0x118]
	mov edi,eax
	call ZXString<char>::~ZXString<char>
	test edi,edi
	je Block434

 Block430:
	lea ecx,[ebp-0x374]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [ebp+0x78]
	mov eax,dword ptr [eax+4]
	push ebx
	lea edx,[ebp-0x1ED]
	push edx
	mov ecx,eax
	mov byte ptr [ebp-4],0xD9
	call CharacterData::GetQuestPlayTimeRecord
	movzx edi,word ptr [eax+0xB]
	lea ecx,[ebp-0x374]
	mov byte ptr [ebp-4],0x61
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push ebx
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
	mov dword ptr [ebp+0x40],edx
	fild dword ptr [ebp+0x40]
	test edx,edx
	jge Block432

 Block431:
	fadd qword ptr [__real_41f0000000000000]

 Block432:
	fmul qword ptr [__real_3feccccccccccccd]
	call __ftol2_sse
	mov ecx,eax

 Block433:
	mov eax,edi
	imul eax,0x64
	cdq
	idiv ecx
	push 0
	push eax
	push 0x64
	call _zmin_long
	add esp,8
	push eax
	call _zmax_long
	push eax
	lea edi,[esi+0x10]
	push offset _S_D__1
	push edi
	call ZXString<char>::Format
	add esp,0x14
	jmp Block435

 Block434:
	lea edx,[ebp+0x4C]
	lea edi,[esi+0x10]
	push edx
	mov ecx,edi
	call ZXString<char>::op_assign

 Block435:
	mov eax,dword ptr [ebp-0x1C]
	mov ecx,dword ptr [ebp+0x14]
	lea edx,[eax+ecx*2]
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [esi],0
	mov ecx,dword ptr [eax]
	lea edx,[ecx+edx*4]
	lea ebx,[esi+0xC]
	push edx
	mov ecx,ebx
	call _x_com_ptr<IWzFont>::op_assign_copy
	push offset _D_VTMISSING
	lea ecx,[ebp-0x61C]
	call Ztl_variant_t::_ctor_1
	mov edi,dword ptr [edi]
	lea eax,[ebp-0x61C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push edi
	mov byte ptr [ebp-4],0xDA
	call Ztl_bstr_t::_ctor_1
	mov ecx,ebx
	mov byte ptr [ebp-4],0xDB
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [ebp-4],0xDA
	call IWzFont::CalcTextWidth
	lea ecx,[ebp-0x61C]
	mov dword ptr [esi+0x20],eax
	mov byte ptr [ebp-4],0x61
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,ebx
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	call IWzFont::Getheight
	mov ecx,dword ptr [ebp+0x38]
	mov dword ptr [esi+0x24],eax
	mov dword ptr [esi+0x38],ecx

 Block436:
	lea ecx,[ebp-0x18]
	call _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	lea ecx,[ebp-0x14]
	call _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	lea ecx,[ebp+0x4C]
	mov byte ptr [ebp-4],0x4A
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp-0xC4]
	mov byte ptr [ebp-4],0x49
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp-0x10]
	mov byte ptr [ebp-4],0x21
	call ZXString<char>::~ZXString<char>
	mov edi,dword ptr [ebp+0x30]
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+0x68]
	push ecx
	jmp Block85

 Block437:
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block439

 Block438:
	mov eax,dword ptr [eax-4]
	jmp Block440

 Block439:
	xor eax,eax

 Block440:
	dec eax
	push eax
	push 2
	lea edx,[ebp+0x18]
	push edx
	lea ecx,[ebp+0x58]
	call ZXString<char>::Mid
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp-0x414]
	push eax
	mov byte ptr [ebp-4],0xDC
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	lea ecx,[ebp-0x414]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [ebp+0x78]
	push ecx
	lea edx,[ebp-0x294]
	push edx
	mov ecx,edi
	call CharacterData::GetQuestExpireTimeFromStringDate
	call get_field
	test eax,eax
	jne Block442

 Block441:
	lea eax,[ebp-0x2A4]
	push eax
	call GetLocalTime
	jmp Block443

 Block442:
	lea ecx,[ebp-0x74A]
	push ecx
	call get_field
	mov ecx,eax
	call CField::GetCorrectTime
	mov edx,dword ptr [eax]
	mov dword ptr [ebp-0x2A4],edx
	mov ecx,dword ptr [eax+4]
	mov dword ptr [ebp-0x2A0],ecx
	mov edx,dword ptr [eax+8]
	mov dword ptr [ebp-0x29C],edx
	mov eax,dword ptr [eax+0xC]
	mov dword ptr [ebp-0x298],eax

 Block443:
	lea ecx,[ebp-0x384]
	push ecx
	lea edx,[ebp-0x2A4]
	push edx
	call dword ptr [ZImports::_SystemTimeToFileTime]
	lea eax,[ebp-0x75C]
	push eax
	lea ecx,[ebp-0x294]
	push ecx
	call dword ptr [ZImports::_FileTimeToSystemTime]
	lea edx,[ebp-0x384]
	push edx
	lea eax,[ebp-0x294]
	push eax
	call SubTime
	add esp,8
	mov dword ptr [ebp-0x2AC],eax
	mov dword ptr [ebp-0x2A8],edx
	fild qword ptr [ebp-0x2AC]
	push 0
	push 7
	sub esp,8
	fstp qword ptr [ebp+0x3C]
	fld qword ptr [__real_4024000000000000]
	fstp qword ptr [esp]
	call _pow
	fdivr qword ptr [ebp+0x3C]
	add esp,0xC
	call __ftol2_sse
	push eax
	call _zmax_long
	add esp,8
	push offset _S_DAYLIMIT
	lea ecx,[ebp+0x18]
	mov edi,eax
	xor ebx,ebx
	call ZXString<char>::Compare
	test eax,eax
	jne Block445

 Block444:
	mov eax,0xC22E4507
	imul edi
	add edx,edi
	sar edx,0x10
	mov ebx,edx
	shr ebx,0x1F
	add ebx,edx
	jmp Block451

 Block445:
	push offset _S_HOURLIMIT
	lea ecx,[ebp+0x18]
	call ZXString<char>::Compare
	test eax,eax
	jne Block447

 Block446:
	mov eax,0x91A2B3C5
	imul edi
	add edx,edi
	sar edx,0xB
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cdq
	mov ecx,0x18
	idiv ecx
	mov ebx,edx
	jmp Block451

 Block447:
	push offset _S_MINLIMIT
	lea ecx,[ebp+0x18]
	call ZXString<char>::Compare
	test eax,eax
	jne Block449

 Block448:
	mov eax,0x88888889
	imul edi
	add edx,edi
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cdq
	mov ecx,0x3C
	idiv ecx
	mov ebx,edx
	jmp Block451

 Block449:
	push offset _S_SECLIMIT
	lea ecx,[ebp+0x18]
	call ZXString<char>::Compare
	test eax,eax
	jne Block451

 Block450:
	mov eax,0x88888889
	imul edi
	add edx,edi
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edx,eax
	shl edx,4
	sub edx,eax
	add edx,edx
	add edx,edx
	sub edi,edx
	mov ebx,edi

 Block451:
	push ebx
	lea eax,[esi+0x10]
	push offset _S_D__1
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x1C]
	mov ecx,dword ptr [ebp+0x14]
	lea edx,[eax+ecx*2]
	mov eax,dword ptr [ebp+0x70]
	mov dword ptr [esi],0
	mov ecx,dword ptr [eax]
	lea edx,[ecx+edx*4]
	add esp,0xC
	lea edi,[esi+0xC]
	push edx
	mov ecx,edi
	call _x_com_ptr<IWzFont>::op_assign_copy
	push offset _D_VTMISSING
	lea ecx,[ebp-0x63C]
	call Ztl_variant_t::_ctor_1
	lea eax,[ebp-0x63C]
	push eax
	mov eax,dword ptr [esi+0x10]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push eax
	mov byte ptr [ebp-4],0xDD
	call Ztl_bstr_t::_ctor_1
	mov ecx,edi
	mov byte ptr [ebp-4],0xDE
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [ebp-4],0xDD
	call IWzFont::CalcTextWidth
	lea ecx,[ebp-0x63C]
	mov dword ptr [esi+0x20],eax
	mov byte ptr [ebp-4],0xDC
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,edi
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	call IWzFont::Getheight
	mov ecx,dword ptr [ebp+0x38]
	mov dword ptr [esi+0x38],ecx
	lea ecx,[ebp+0x18]
	mov dword ptr [esi+0x24],eax
	mov byte ptr [ebp-4],0x21
	call ZXString<char>::~ZXString<char>
	mov edi,dword ptr [ebp+0x30]
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+0x68]
	push ecx
	jmp Block85

 Block452:
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block454

 Block453:
	mov eax,dword ptr [eax-4]
	jmp Block455

 Block454:
	xor eax,eax

 Block455:
	dec eax
	push eax
	push 2
	lea edx,[ebp+0x44]
	push edx
	lea ecx,[ebp+0x58]
	call ZXString<char>::Mid
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp-0x474]
	push eax
	mov byte ptr [ebp-4],0xDF
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	lea ecx,[ebp-0x474]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [ebp+0x78]
	push ecx
	lea edx,[ebp-0x2FC]
	push edx
	mov ecx,edi
	call CharacterData::GetQuestPlayTimeRecord
	mov eax,dword ptr [ebp+0x44]
	movzx edi,word ptr [ebp-0x2F3]
	test eax,eax
	je Block459

 Block456:
	cmp dword ptr [eax-4],3
	jle Block459

 Block457:
	push 3
	lea eax,[ebp-0x120]
	push eax
	lea ecx,[ebp+0x44]
	call ZXString<char>::Left
	or dword ptr [ebp+0x48],0x100
	push offset _S_MIN
	mov ecx,eax
	call ZXString<char>::Compare
	test eax,eax
	jne Block459

 Block458:
	mov bl,1
	jmp Block460

 Block459:
	xor bl,bl

 Block460:
	test dword ptr [ebp+0x48],0x100
	je Block462

 Block461:
	and dword ptr [ebp+0x48],0xFFFFFEFF
	lea ecx,[ebp-0x120]
	call ZXString<char>::~ZXString<char>

 Block462:
	test bl,bl
	je Block464

 Block463:
	push 0xFFFFFFFF
	push 3
	lea ecx,[ebp-0x128]
	push ecx
	lea ecx,[ebp+0x44]
	call ZXString<char>::Mid
	push eax
	lea ecx,[ebp+0x44]
	mov byte ptr [ebp-4],0xE0
	call ZXString<char>::op_assign
	lea ecx,[ebp-0x128]
	mov byte ptr [ebp-4],0xDF
	call ZXString<char>::~ZXString<char>
	mov edx,dword ptr [ebp+0x78]
	push edx
	jmp Block466

 Block464:
	cmp byte ptr [ebp-0x2F4],0
	je Block467

 Block465:
	mov eax,dword ptr [ebp+0x78]
	push eax

 Block466:
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	call CQuestMan::GetQuestDailyPlayMinTime
	mov edi,eax

 Block467:
	push offset _S_DAY
	lea ecx,[ebp+0x44]
	xor ebx,ebx
	call ZXString<char>::Compare
	test eax,eax
	jne Block469

 Block468:
	mov eax,0xC22E4507
	imul edi
	add edx,edi
	sar edx,0x10
	mov ebx,edx
	shr ebx,0x1F
	add ebx,edx
	jmp Block481

 Block469:
	push offset _S_HOUR
	lea ecx,[ebp+0x44]
	call ZXString<char>::Compare
	test eax,eax
	jne Block471

 Block470:
	mov eax,0x91A2B3C5
	imul edi
	add edx,edi
	sar edx,0xB
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cdq
	mov ecx,0x18
	idiv ecx
	mov ebx,edx
	jmp Block481

 Block471:
	push offset _S_MIN
	lea ecx,[ebp+0x44]
	call ZXString<char>::Compare
	test eax,eax
	jne Block473

 Block472:
	mov eax,0x88888889
	imul edi
	add edx,edi
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cdq
	mov ecx,0x3C
	idiv ecx
	mov ebx,edx
	jmp Block481

 Block473:
	push offset _S_SEC
	lea ecx,[ebp+0x44]
	call ZXString<char>::Compare
	test eax,eax
	jne Block475

 Block474:
	mov eax,0x88888889
	imul edi
	add edx,edi
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edx,eax
	shl edx,4
	sub edx,eax
	add edx,edx
	add edx,edx
	sub edi,edx
	mov ebx,edi
	jmp Block481

 Block475:
	push offset _S_DAYLIMIT
	lea ecx,[ebp+0x44]
	call ZXString<char>::Compare
	test eax,eax
	jne Block479

 Block476:
	mov eax,dword ptr [ebp+0x78]
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push eax
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
	mov dword ptr [ebp+0x40],edx
	fild dword ptr [ebp+0x40]
	test edx,edx
	jge Block478

 Block477:
	fadd qword ptr [__real_41f0000000000000]

 Block478:
	fmul qword ptr [__real_3feccccccccccccd]
	call __ftol2_sse
	mov ebx,eax
	jmp Block481

 Block479:
	push offset _S_COUNT
	lea ecx,[ebp+0x44]
	call ZXString<char>::Compare
	test eax,eax
	jne Block481

 Block480:
	movzx ebx,word ptr [ebp-0x2F1]

 Block481:
	push ebx
	lea eax,[esi+0x10]
	push offset _S_D__1
	push eax
	call ZXString<char>::Format
	mov edx,dword ptr [ebp-0x1C]
	mov eax,dword ptr [ebp+0x14]
	lea ecx,[edx+eax*2]
	mov edx,dword ptr [ebp+0x70]
	mov dword ptr [esi],0
	mov eax,dword ptr [edx]
	lea ecx,[eax+ecx*4]
	add esp,0xC
	lea edi,[esi+0xC]
	push ecx
	mov ecx,edi
	call _x_com_ptr<IWzFont>::op_assign_copy
	push offset _D_VTMISSING
	lea ecx,[ebp-0x65C]
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [esi+0x10]
	lea edx,[ebp-0x65C]
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push eax
	mov byte ptr [ebp-4],0xE1
	call Ztl_bstr_t::_ctor_1
	mov ecx,edi
	mov byte ptr [ebp-4],0xE2
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [ebp-4],0xE1
	call IWzFont::CalcTextWidth
	lea ecx,[ebp-0x65C]
	mov dword ptr [esi+0x20],eax
	mov byte ptr [ebp-4],0xDF
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,edi
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	call IWzFont::Getheight
	mov dword ptr [esi+0x24],eax
	mov eax,dword ptr [ebp+0x38]
	lea ecx,[ebp+0x44]
	mov dword ptr [esi+0x38],eax
	mov byte ptr [ebp-4],0x21
	call ZXString<char>::~ZXString<char>
	mov edi,dword ptr [ebp+0x30]
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+0x68]
	push ecx
	jmp Block85

 Block482:
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block484

 Block483:
	mov eax,dword ptr [eax-4]
	jmp Block485

 Block484:
	xor eax,eax

 Block485:
	dec eax
	push eax
	push 2
	lea ecx,[ebp-0x98]
	push ecx
	lea ecx,[ebp+0x58]
	call ZXString<char>::Mid
	lea edx,[ebp-0x98]
	push edx
	lea ecx,[ebp+0x1C]
	mov byte ptr [ebp-4],0xE3
	call ZXString<char>::_ctor_copy
	lea ecx,[ebp+0x1C]
	call ZXString<char>::IsEmpty
	test eax,eax
	jne Block489

 Block486:
	mov dword ptr [esi],1
	mov dword ptr [ebp+0x54],eax
	mov edi,dword ptr [ebp+0x1C]
	push 0xFFFFFFFF
	push eax
	push edi
	mov byte ptr [ebp-4],0xE5
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov eax,esp
	push 0xFFFFFFFF
	push eax
	push edi
	call ZStrUtil::_Conv_0
	push eax
	lea eax,[ebp+0x54]
	push offset _S_UIUIWINDOW2IMGQU__2
	push eax
	call ZXString16::Format
	add esp,0x18
	push offset _D_VTMISSING
	lea ecx,[ebp-0x69C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x67C]
	mov byte ptr [ebp-4],0xE6
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [ebp+0x54]
	push 0
	push 0
	lea ecx,[ebp-0x69C]
	push ecx
	lea edx,[ebp-0x67C]
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push eax
	mov byte ptr [ebp-4],0xE7
	call Ztl_bstr_t::_ctor_2
	lea ecx,[ebp-0x70C]
	push ecx
	mov ecx,offset _D_G_RM
	mov byte ptr [ebp-4],0xE8
	call _x_com_ptr<IWzResMan>::op_arrow
	mov ecx,eax
	mov byte ptr [ebp-4],0xE7
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xE9
	lea edi,[esi+0x14]
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[ebp-0x70C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x67C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x69C]
	mov byte ptr [ebp-4],0xE5
	call Ztl_variant_t::~Ztl_variant_t
	cmp dword ptr [edi],0
	je Block488

 Block487:
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getwidth
	mov ecx,edi
	mov dword ptr [esi+0x20],eax
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Getheight
	mov edx,dword ptr [ebp+0x38]
	mov dword ptr [esi+0x24],eax
	mov dword ptr [esi+0x38],edx

 Block488:
	lea ecx,[ebp+0x54]
	mov byte ptr [ebp-4],0xE4
	call ZXString16::~ZXString<wchar_t>

 Block489:
	lea ecx,[ebp+0x1C]
	mov byte ptr [ebp-4],0xE3
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp-0x98]
	mov byte ptr [ebp-4],0x21
	call ZXString<char>::~ZXString<char>
	mov edi,dword ptr [ebp+0x30]
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+0x68]
	push ecx
	jmp Block85

 Block490:
	lea eax,[ebp+0x58]
	cmp ebx,0x12
	jne Block528

 Block491:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push eax
	call ZXString<char>::_ctor_copy
	mov ebx,dword ptr [ebp+0x30]
	mov ecx,ebx
	call CTextAnalyzer::GetParameterNo
	mov ecx,dword ptr [ebp+0x58]
	mov edi,eax
	mov al,byte ptr [ecx+1]
	movsx ecx,al
	add ecx,0xFFFFFFC0
	cmp ecx,0x3A
	ja Block529

 Block492:
	movzx edx,byte ptr [ecx+_SUB_587CC0_LOOKUP_TABLE_0]
	cmp EDX, 0
je Block507
cmp EDX, 1
je Block513
cmp EDX, 2
je Block512
cmp EDX, 3
je Block525
cmp EDX, 4
je Block511
cmp EDX, 5
je Block510
cmp EDX, 6
je Block502
cmp EDX, 7
je Block493
cmp EDX, 8
je Block508
cmp EDX, 9
je Block501
cmp EDX, 10
je Block506
cmp EDX, 11
je Block509
cmp EDX, 12
je Block516
cmp EDX, 13
je Block514
cmp EDX, 14
je Block515
cmp EDX, 15
je Block505
cmp EDX, 16
je Block529


 Block493:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edi,[esi+0x10]
	call CWvsContext::GetCharacterName
	push eax
	mov ecx,edi
	call ZXString<char>::AssignCStr
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block529

 Block494:
	cmp dword ptr [eax-4],3
	jl Block529

 Block495:
	movsx eax,byte ptr [eax+2]
	sub eax,0x31
	je Block500

 Block496:
	sub eax,1
	je Block499

 Block497:
	sub eax,1
	jne Block529

 Block498:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push edi
	call ZXString<char>::_ctor_copy
	lea eax,[ebp-0x130]
	push eax
	call Util::AddJosa_EUL
	add esp,8
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xEC
	call ZXString<char>::op_assign
	lea ecx,[ebp-0x130]
	mov byte ptr [ebp-4],0x21
	call ZXString<char>::~ZXString<char>
	jmp Block529

 Block499:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push edi
	call ZXString<char>::_ctor_copy
	lea ecx,[ebp-0x138]
	push ecx
	call Util::AddJosa_I
	add esp,8
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xEB
	call ZXString<char>::op_assign
	lea ecx,[ebp-0x138]
	mov byte ptr [ebp-4],0x21
	call ZXString<char>::~ZXString<char>
	jmp Block529

 Block500:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push edi
	call ZXString<char>::_ctor_copy
	lea edx,[ebp-0x140]
	push edx
	call Util::AddJosa_EUN
	add esp,8
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xEA
	call ZXString<char>::op_assign
	lea ecx,[ebp-0x140]
	mov byte ptr [ebp-4],0x21
	call ZXString<char>::~ZXString<char>
	jmp Block529

 Block501:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	push 0x671
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push edi
	push ecx
	lea edx,[ebp-0x38]
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push edx
	call _x_com_ptr<IWzProperty>::_ctor_copy
	lea eax,[ebp-0x148]
	push eax
	call get_labeled_string_0
	add esp,0x10
	push eax
	lea ecx,[esi+0x10]
	mov byte ptr [ebp-4],0xED
	call ZXString<char>::op_assign
	lea ecx,[ebp-0x148]
	mov byte ptr [ebp-4],0x21
	call ZXString<char>::~ZXString<char>
	jmp Block529

 Block502:
	cmp al,0x65
	jne Block504

 Block503:
	push edi
	mov ecx,ebx
	call CTextAnalyzer::CheckSecretItemID
	mov edi,eax

 Block504:
	push edi
	lea ecx,[ebp-0x150]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esi+0x10]
	mov byte ptr [ebp-4],0xEE
	call ZXString<char>::op_assign
	lea ecx,[ebp-0x150]
	mov byte ptr [ebp-4],0x21
	call ZXString<char>::~ZXString<char>
	push 0
	push 0
	push offset _S___5
	lea ecx,[ebp+0x58]
	call ZXString<char>::Find__0
	xor edx,edx
	test eax,eax
	setl dl
	dec edx
	and edx,edi
	mov dword ptr [esi+4],edx
	jmp Block529

 Block505:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edi
	lea eax,[ebp-0x158]
	push eax
	call CItemInfo::GetItemName
	lea ebx,[esi+0x10]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0xEF
	call ZXString<char>::op_assign
	push eax
	mov ecx,ebx
	call ZXString<char>::op_assign
	lea ecx,[ebp-0x158]
	mov byte ptr [ebp-4],0x21
	call ZXString<char>::~ZXString<char>
	mov dword ptr [esi+4],edi
	jmp Block529

 Block506:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push 0x671
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push edi
	push ecx
	lea edx,[ebp-0x24]
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push edx
	call _x_com_ptr<IWzProperty>::_ctor_copy
	lea eax,[ebp-0x160]
	push eax
	call get_labeled_string_0
	add esp,0x10
	push eax
	lea ecx,[esi+0x10]
	mov byte ptr [ebp-4],0xF0
	call ZXString<char>::op_assign
	lea ecx,[ebp-0x160]
	mov byte ptr [ebp-4],0x21
	call ZXString<char>::~ZXString<char>
	jmp Block529

 Block507:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push 0x671
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push edi
	push ecx
	lea edx,[ebp-0x24]
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push edx
	call _x_com_ptr<IWzProperty>::_ctor_copy
	lea eax,[ebp-0x168]
	push eax
	call get_labeled_string_0
	add esp,0x10
	push eax
	lea ecx,[esi+0x10]
	mov byte ptr [ebp-4],0xF1
	call ZXString<char>::op_assign
	lea ecx,[ebp-0x168]
	mov byte ptr [ebp-4],0x21
	call ZXString<char>::~ZXString<char>
	mov dword ptr [esi+0x3C],edi
	jmp Block529

 Block508:
	lea ecx,[ebp-0x178]
	push 0x6EC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	push edi
	lea edx,[ebp-0x170]
	push edx
	mov byte ptr [ebp-4],0xF2
	call CItemInfo::GetMapString
	push eax
	lea ecx,[esi+0x10]
	mov byte ptr [ebp-4],0xF3
	call ZXString<char>::op_assign
	lea ecx,[ebp-0x170]
	mov byte ptr [ebp-4],0xF2
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp-0x178]
	mov byte ptr [ebp-4],0x21
	call ZXString<char>::~ZXString<char>
	mov dword ptr [esi+0x40],edi
	jmp Block529

 Block509:
	mov dword ptr [ebp-0xB0],0
	push edi
	lea eax,[ebp-0xB0]
	push offset _S_07D
	push eax
	mov byte ptr [ebp-4],0xF4
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[ebp-0xA0]
	call ZXString<char>::_ctor_copy
	lea ecx,[ebp-0xB0]
	mov byte ptr [ebp-4],0xF6
	call ZXString<char>::~ZXString<char>
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push 0x671
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push ecx
	lea edx,[ebp-0xA0]
	mov ecx,esp
	mov dword ptr [ebp+0x54],esp
	push edx
	mov byte ptr [ebp-4],0xF7
	call ZXString<char>::_ctor_copy
	push ecx
	lea eax,[ebp-0x3C]
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push eax
	call _x_com_ptr<IWzProperty>::_ctor_copy
	lea ecx,[ebp-0x180]
	push ecx
	mov byte ptr [ebp-4],0xF6
	call get_labeled_string_1
	add esp,0x10
	push eax
	lea ecx,[esi+0x10]
	mov byte ptr [ebp-4],0xF8
	call ZXString<char>::op_assign
	lea ecx,[ebp-0x180]
	mov byte ptr [ebp-4],0xF6
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp-0xA0]
	mov byte ptr [ebp-4],0x21
	call ZXString<char>::~ZXString<char>
	jmp Block529

 Block510:
	mov eax,0x20
	call __alloca_probe_8
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,esp
	push eax
	push edi
	call CWvsContext::GetItemCount
	push eax
	call _Int2Str
	add esp,8
	push eax
	lea ecx,[esi+0x10]
	call ZXString<char>::AssignCStr
	jmp Block529

 Block511:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edi
	lea edx,[ebp-0x188]
	push edx
	call CWvsContext::GetQuestMobCount
	push eax
	lea ecx,[esi+0x10]
	mov byte ptr [ebp-4],0xF9
	call ZXString<char>::op_assign
	lea ecx,[ebp-0x188]
	mov byte ptr [ebp-4],0x21
	call ZXString<char>::~ZXString<char>
	jmp Block529

 Block512:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edi
	lea eax,[ebp-0x30]
	push eax
	call CWvsContext::GetQuestMateName
	push eax
	lea ecx,[esi+0x10]
	mov byte ptr [ebp-4],0xFA
	call ZXString<char>::op_assign
	lea ecx,[ebp-0x30]
	mov byte ptr [ebp-4],0x21
	call ZXString<char>::~ZXString<char>
	jmp Block529

 Block513:
	push edi
	lea ecx,[ebp-0x7C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetQuestMobName
	push eax
	lea ecx,[esi+0x10]
	mov byte ptr [ebp-4],0xFB
	call ZXString<char>::op_assign
	lea ecx,[ebp-0x7C]
	mov byte ptr [ebp-4],0x21
	call ZXString<char>::~ZXString<char>
	jmp Block529

 Block514:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edi
	lea edx,[ebp-0x84]
	push edx
	call CWvsContext::GetQuestBonusEXP
	push eax
	lea ecx,[esi+0x10]
	mov byte ptr [ebp-4],0xFC
	call ZXString<char>::op_assign
	lea ecx,[ebp-0x84]
	mov byte ptr [ebp-4],0x21
	call ZXString<char>::~ZXString<char>
	jmp Block529

 Block515:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push 0
	push 0
	push eax
	push edi
	call _Int2StrW
	add esp,4
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	lea eax,[ebp-0x72C]
	push eax
	lea ecx,[ebp-0x34]
	mov byte ptr [ebp-4],0xFD
	call _x_com_ptr<IWzProperty>::op_arrow
	mov ecx,eax
	mov byte ptr [ebp-4],0x21
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xFE
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0xC0]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp-0x72C]
	mov dword ptr [ebp-4],0x100
	call Ztl_variant_t::~Ztl_variant_t
	push offset _S___3
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push 0x671
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp-0x6AC]
	push edx
	lea ecx,[ebp-0xC0]
	mov byte ptr [ebp-4],1
	call _x_com_ptr<IWzProperty>::op_arrow
	mov ecx,eax
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],2
	call get_string
	add esp,8
	push eax
	lea ecx,[esi+0x10]
	call ZXString<char>::AssignCStr
	lea ecx,[ebp-0x6AC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0xC0]
	mov dword ptr [ebp-4],0x21
	call _x_com_ptr<IWzProperty>::~_x_com_ptr<IWzProperty>
	jmp Block529

 Block516:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp-0x394]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	lea ecx,[ebp-0x394]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	push edi
	mov ecx,ebx
	call CharacterData::IsQuestInProgress
	test eax,eax
	je Block518

 Block517:
	mov eax,1
	jmp Block519

 Block518:
	movzx ecx,di
	push 0
	lea edx,[ebp+0x40]
	mov dword ptr [ebp+0x40],ecx
	push edx
	lea ecx,[ebx+0x5B5]
	call ZMap<unsigned short, _FILETIME, unsigned short>::GetAt
	neg eax
	sbb eax,eax
	and eax,2

 Block519:
	xor edi,edi
	sub eax,edi
	je Block524

 Block520:
	sub eax,1
	je Block523

 Block521:
	sub eax,1
	jne Block529

 Block522:
	lea eax,[ebp-0x8C]
	push 0x1A30
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [ebp-4],0x107
	mov dword ptr [ebp-0x28],edi
	mov ecx,eax
	mov byte ptr [ebp-4],8
	call _xbstr_t::op_char_str
	push eax
	lea ecx,[ebp-0x28]
	push ecx
	call ZXString<char>::Format
	add esp,8
	push eax
	lea ecx,[esi+0x10]
	call ZXString<char>::op_assign
	lea ecx,[ebp-0x28]
	mov byte ptr [ebp-4],7
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp-0x8C]
	mov dword ptr [ebp-4],0x21
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block529

 Block523:
	lea edx,[ebp-0x48]
	push 0x10DB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [ebp-4],0x105
	mov dword ptr [ebp-0x20],edi
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call _xbstr_t::op_char_str
	push eax
	lea eax,[ebp-0x20]
	push eax
	call ZXString<char>::Format
	add esp,8
	push eax
	lea ecx,[esi+0x10]
	call ZXString<char>::op_assign
	lea ecx,[ebp-0x20]
	mov byte ptr [ebp-4],5
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp-0x48]
	mov dword ptr [ebp-4],0x21
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block529

 Block524:
	lea ecx,[ebp+0x28]
	push 0x10DA
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [ebp-4],0x103
	mov dword ptr [ebp+0x20],edi
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call _xbstr_t::op_char_str
	push eax
	lea edx,[ebp+0x20]
	push edx
	call ZXString<char>::Format
	add esp,8
	push eax
	lea ecx,[esi+0x10]
	call ZXString<char>::op_assign
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],3
	call ZXString<char>::~ZXString<char>
	lea ecx,[ebp+0x28]
	mov dword ptr [ebp-4],0x21
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block529

 Block525:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[ebp-0x42C]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	lea ecx,[ebp-0x42C]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov dword ptr [ebp+0x54],0
	lea ecx,[ebp+0x54]
	push ecx
	push edi
	mov ecx,ebx
	mov dword ptr [ebp-4],0x109
	call CharacterData::GetQuest
	lea ecx,[esi+0x10]
	test eax,eax
	je Block527

 Block526:
	lea edx,[ebp+0x54]
	push edx
	call ZXString<char>::op_assign
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp-4],0x21
	call ZXString<char>::~ZXString<char>
	jmp Block529

 Block527:
	push offset _S_EMPTY
	call ZXString<char>::AssignCStr
	lea ecx,[ebp+0x54]
	mov dword ptr [ebp-4],0x21
	call ZXString<char>::~ZXString<char>
	jmp Block529

 Block528:
	push eax
	lea ecx,[esi+0x10]
	call ZXString<char>::op_assign

 Block529:
	mov ecx,dword ptr [ebp-0x1C]
	mov edx,dword ptr [ebp+0x14]
	lea eax,[ecx+edx*2]
	mov ecx,dword ptr [ebp+0x70]
	mov dword ptr [esi],0
	mov edx,dword ptr [ecx]
	lea eax,[edx+eax*4]
	lea edi,[esi+0xC]
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzFont>::op_assign_copy
	push offset _D_VTMISSING
	lea ecx,[ebp-0x50C]
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [esi+0x10]
	lea ecx,[ebp-0x50C]
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push eax
	mov dword ptr [ebp-4],0x10A
	call Ztl_bstr_t::_ctor_1
	mov ecx,edi
	mov byte ptr [ebp-4],0xB
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	mov byte ptr [ebp-4],0xA
	call IWzFont::CalcTextWidth
	lea ecx,[ebp-0x50C]
	mov dword ptr [esi+0x20],eax
	mov dword ptr [ebp-4],0x21
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,edi
	call _x_com_ptr<IWzFont>::op_arrow
	mov ecx,eax
	call IWzFont::Getheight
	mov edx,dword ptr [ebp+0x38]
	mov dword ptr [esi+0x38],edx
	mov dword ptr [esi+0x24],eax

 Block530:
	mov edi,dword ptr [ebp+0x30]
	lea eax,[ebp+0x58]
	push eax
	lea ecx,[ebp+0x68]
	push ecx
	jmp Block85

 Block531:
	mov esi,dword ptr [ebp+0x6C]
	mov ecx,esi
	call ZArray<CT_INFO>::GetCount
	test eax,eax
	je Block533

 Block532:
	mov ecx,esi
	call ZArray<CT_INFO>::GetCount
	mov edx,eax
	shl edx,4
	add edx,eax
	mov eax,dword ptr [esi]
	mov dword ptr [eax+edx*4-0x14],1

 Block533:
	inc dword ptr [ebp+0x24]
	lea ecx,[ebp+0x58]
	push ecx
	lea edx,[ebp+0x68]
	push edx
	jmp Block85

 Block534:
	mov esi,dword ptr [ebp+0x6C]
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block539

 Block535:
	mov eax,dword ptr [ecx-4]
	test eax,eax
	je Block537

 Block536:
	mov edx,eax
	shl edx,4
	add edx,eax
	mov dword ptr [ecx+edx*4-0x14],1
	mov edx,dword ptr [ebp+0x58]

 Block537:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block539

 Block538:
	cmp dword ptr [eax-4],0
	jne Block552

 Block539:
	mov byte ptr [ebp-4],0x20
	test edx,edx
	je Block541

 Block540:
	add edx,0xFFFFFFF4
	push edx
	call ZXString<char>::_Release
	add esp,4

 Block541:
	mov eax,dword ptr [ebp-0x34]
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block543

 Block542:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block543:
	mov eax,dword ptr [ebp-0x3C]
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block545

 Block544:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block545:
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block547

 Block546:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block547:
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block549

 Block548:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block549:
	mov eax,dword ptr [ebp+0x68]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block551

 Block550:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block551:
	xor eax,eax
	jmp Block662

 Block552:
	mov ecx,dword ptr [edi+0xC]
	mov edx,dword ptr [eax+8]
	mov dword ptr [ebp+0x4C],ecx
	mov ecx,esi
	mov dword ptr [ebp+0x38],0
	mov dword ptr [ebp+0x24],edx
	call ZArray<CT_INFO>::GetCount
	test eax,eax
	jbe Block639

 Block553:
	mov dword ptr [ebp+0x44],0
	lea esp,[esp]

 Block554:
	mov ecx,dword ptr [ebp+0x44]
	mov eax,dword ptr [esi]
	add eax,ecx
	mov ecx,dword ptr [eax+8]
	cmp dword ptr [ebp+0x24],ecx
	je Block556

 Block555:
	mov ebx,dword ptr [edi+0xC]
	mov dword ptr [ebp+0x4C],ebx
	mov dword ptr [ebp+0x24],ecx
	jmp Block557

 Block556:
	mov ebx,dword ptr [ebp+0x4C]

 Block557:
	mov ecx,dword ptr [eax]
	cmp ecx,1
	je Block560

 Block558:
	cmp ecx,2
	je Block560

 Block559:
	cmp ecx,4
	jne Block564

 Block560:
	mov edx,dword ptr [edi+0xC]
	mov esi,dword ptr [eax+0x20]
	lea ecx,[esi+edx]
	mov edx,dword ptr [edi+0x10]
	cmp ecx,edx
	jg Block563

 Block561:
	add ecx,ebx
	cmp ecx,edx
	jle Block563

 Block562:
	mov edx,dword ptr [ebp+0x6C]
	mov eax,dword ptr [ebp+0x38]
	push edx
	push eax
	mov ecx,edi
	call CTextAnalyzer::SeparateLineIcon
	jmp Block638

 Block563:
	mov dword ptr [eax+0x18],ebx
	add ebx,esi
	mov dword ptr [ebp+0x4C],ebx

 Block564:
	cmp dword ptr [ebp+0x38],0
	jle Block592

 Block565:
	mov ecx,dword ptr [ebp+0x30]
	mov edx,dword ptr [ebp+0x4C]
	cmp edx,dword ptr [ecx+0xC]
	jne Block592

 Block566:
	mov ebx,dword ptr [ebp+0x6C]
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [ebp+0x44]
	lea esi,[eax+ecx]
	push ecx
	mov ecx,esp
	lea edx,[esi+0x10]
	mov dword ptr [ebp+0x28],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [ebp+0x30]
	call CTextAnalyzer::IsSuffix
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x30],esp
	lea edi,[esi-0x34]
	push edi
	mov dword ptr [ebp+0x28],eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [ebp+0x30]
	call CTextAnalyzer::IsDilimiter
	cmp dword ptr [ebp+0x28],0
	mov dword ptr [ebp+0x20],eax
	je Block592

 Block567:
	cmp dword ptr [esi-0x44],0
	jne Block592

 Block568:
	test eax,eax
	jle Block591

 Block569:
	mov edi,dword ptr [edi]
	push 0xFFFFFFFF
	xor esi,esi
	push edi
	lea ecx,[ebp+0x2C]
	mov dword ptr [ebp+0x2C],esi
	call ZXString16::AssignCharStr
	mov dword ptr [ebp-4],0x10C
	mov dword ptr [ebp+0x1C],esi
	mov dword ptr [ebp-0x10],esi
	mov dword ptr [ebp+0x18],esi
	mov eax,dword ptr [ebp+0x20]
	push eax
	lea ecx,[ebp-0x48]
	push ecx
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0xF
	call ZXString16::Left
	push eax
	lea ecx,[ebp+0x1C]
	mov byte ptr [ebp-4],0x10
	call ZXString16::op_assign
	mov eax,dword ptr [ebp-0x48]
	mov byte ptr [ebp-4],0xF
	cmp eax,esi
	je Block571

 Block570:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block571:
	mov edi,dword ptr [ebp+0x1C]
	push 0xFFFFFFFF
	push edi
	lea ecx,[ebp-0x10]
	call ZXString<char>::AssignWideStr
	cmp edi,esi
	je Block573

 Block572:
	mov eax,dword ptr [edi-4]
	shr eax,1
	jmp Block574

 Block573:
	xor eax,eax

 Block574:
	push 0xFFFFFFFF
	push eax
	lea edx,[ebp-0x8C]
	push edx
	lea ecx,[ebp+0x2C]
	call ZXString16::Mid
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x18]
	mov byte ptr [ebp-4],0x11
	call ZXString<char>::AssignWideStr
	mov eax,dword ptr [ebp-0x8C]
	mov byte ptr [ebp-4],0xF
	cmp eax,esi
	je Block576

 Block575:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block576:
	push esi
	lea ecx,[ebp+0x18]
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [ebp+0x18]
	cmp eax,esi
	je Block583

 Block577:
	cmp byte ptr [eax],0
	je Block583

 Block578:
	push ebx
	push ecx
	mov ecx,esp
	lea eax,[ebp+0x18]
	mov dword ptr [ebp+0x28],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push ecx
	mov ecx,esp
	lea edx,[ebp-0x10]
	mov dword ptr [ebp-0x30],esp
	push edx
	mov byte ptr [ebp-4],0x12
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov esi,dword ptr [ebp+0x38]
	mov edi,dword ptr [ebp+0x30]
	lea eax,[esi-1]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xF
	call CTextAnalyzer::SeparateLineText
	mov eax,dword ptr [ebx]
	add eax,dword ptr [ebp+0x44]
	mov ecx,dword ptr [edi+0xC]
	mov edx,dword ptr [eax+0x20]
	inc dword ptr [eax+8]
	add dword ptr [ebp+0x4C],edx
	mov dword ptr [eax+0x18],ecx
	mov ecx,ebx
	call ZArray<CT_INFO>::GetCount
	cmp esi,eax
	jae Block582

 Block579:
	mov edi,dword ptr [ebp+0x44]

 Block580:
	mov eax,dword ptr [ebx]
	dec dword ptr [eax+edi+8]
	lea eax,[eax+edi+8]
	mov ecx,ebx
	inc esi
	add edi,0x44
	call ZArray<CT_INFO>::GetCount
	cmp esi,eax
	jb Block580

 Block581:
	mov esi,dword ptr [ebp+0x38]

 Block582:
	add dword ptr [ebp+0x44],0x44
	mov eax,dword ptr [ebp+0x18]
	mov edi,dword ptr [ebp+0x1C]
	inc esi
	mov dword ptr [ebp+0x38],esi
	xor esi,esi

 Block583:
	mov byte ptr [ebp-4],0xE
	cmp eax,esi
	je Block585

 Block584:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block585:
	mov eax,dword ptr [ebp-0x10]
	mov byte ptr [ebp-4],0xD
	cmp eax,esi
	je Block587

 Block586:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block587:
	mov byte ptr [ebp-4],0xC
	cmp edi,esi
	je Block589

 Block588:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block589:
	mov eax,dword ptr [ebp+0x2C]
	mov dword ptr [ebp-4],0x21
	cmp eax,esi
	je Block592

 Block590:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block592

 Block591:
	inc dword ptr [esi-0x3C]
	mov eax,dword ptr [esi-0x3C]
	mov ecx,dword ptr [ebp+0x30]
	mov dword ptr [esi+8],eax
	mov edx,dword ptr [ecx+0xC]
	mov dword ptr [ebp+0x24],eax
	mov eax,dword ptr [esi-0x24]
	add dword ptr [ebp+0x4C],eax
	mov dword ptr [esi-0x2C],edx

 Block592:
	mov ecx,dword ptr [ebp+0x6C]
	mov esi,dword ptr [ecx]
	add esi,dword ptr [ebp+0x44]
	xor edi,edi
	cmp dword ptr [esi],edi
	jne Block637

 Block593:
	mov ecx,dword ptr [esi+0x20]
	mov eax,dword ptr [ebp+0x4C]
	mov ebx,dword ptr [ebp+0x30]
	lea edx,[eax+ecx]
	add edx,dword ptr [ebx+0xC]
	cmp edx,dword ptr [ebx+0x10]
	jg Block595

 Block594:
	mov dword ptr [esi+0x18],eax
	add eax,ecx
	mov dword ptr [ebp+0x4C],eax
	jmp Block637

 Block595:
	mov eax,dword ptr [esi+0x10]
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x34]
	mov dword ptr [ebp+0x34],edi
	call ZXString16::AssignCharStr
	mov dword ptr [ebp-4],0x113
	mov dword ptr [ebp+0x20],edi
	mov dword ptr [ebp+0x1C],edi
	mov dword ptr [ebp+0x2C],edi
	lea eax,[ebp-0x1F0]
	push eax
	mov byte ptr [ebp-4],0x16
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x1F0]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block596:
	mov eax,dword ptr [ebx+0x10]
	mov edi,dword ptr [ebp+0x4C]
	sub eax,edi
	sub eax,dword ptr [ebx+0xC]
	mov ebx,dword ptr [ebp+0x34]
	lea edx,[ebp-0x1F0]
	push edx
	sub eax,0xA
	push eax
	push ecx
	mov dword ptr [ebp+0x28],esp
	mov ecx,esp
	push ebx
	mov byte ptr [ebp-4],0x17
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [esi+0xC]
	mov byte ptr [ebp-4],0x18
	test esi,esi
	je Block5

 Block597:
	mov ecx,esi
	mov byte ptr [ebp-4],0x17
	call IWzFont::CalcLongestTextForGlobal
	cmp word ptr [ebp-0x1F0],8
	mov esi,eax
	mov byte ptr [ebp-4],0x16
	jne Block600

 Block598:
	mov eax,dword ptr [ebp-0x1E8]
	xor ecx,ecx
	mov word ptr [ebp-0x1F0],cx
	test eax,eax
	je Block601

 Block599:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block601

 Block600:
	lea edx,[ebp-0x1F0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block601:
	mov eax,esi
	test ebx,ebx
	je Block603

 Block602:
	mov ecx,dword ptr [ebx-4]
	shr ecx,1
	jmp Block604

 Block603:
	xor ecx,ecx

 Block604:
	cmp ecx,esi
	jle Block614

 Block605:
	test esi,esi
	jle Block610

 Block606:
	mov edi,edi

 Block607:
	movzx ecx,word ptr [ebx+eax*2-2]
	cmp cl,0x20
	je Block610

 Block608:
	movzx ecx,word ptr [ebx+eax*2]
	cmp cl,0x20
	je Block610

 Block609:
	dec eax
	test eax,eax
	jg Block607

 Block610:
	test eax,eax
	jne Block613

 Block611:
	mov ecx,dword ptr [ebp+0x30]
	cmp edi,dword ptr [ecx+0xC]
	jne Block613

 Block612:
	mov eax,esi

 Block613:
	mov esi,eax

 Block614:
	push esi
	lea edx,[ebp-0x84]
	push edx
	lea ecx,[ebp+0x34]
	call ZXString16::Left
	push eax
	lea ecx,[ebp+0x20]
	mov byte ptr [ebp-4],0x19
	call ZXString16::op_assign
	mov eax,dword ptr [ebp-0x84]
	mov byte ptr [ebp-4],0x16
	test eax,eax
	je Block616

 Block615:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block616:
	mov ebx,dword ptr [ebp+0x20]
	push 0xFFFFFFFF
	push ebx
	lea ecx,[ebp+0x1C]
	call ZXString<char>::AssignWideStr
	test ebx,ebx
	je Block618

 Block617:
	mov eax,dword ptr [ebx-4]
	shr eax,1
	jmp Block619

 Block618:
	xor eax,eax

 Block619:
	push 0xFFFFFFFF
	push eax
	lea eax,[ebp-0x7C]
	push eax
	lea ecx,[ebp+0x34]
	call ZXString16::Mid
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x1A
	call ZXString<char>::AssignWideStr
	mov eax,dword ptr [ebp-0x7C]
	mov byte ptr [ebp-4],0x16
	test eax,eax
	je Block621

 Block620:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block621:
	mov esi,dword ptr [ebp+0x6C]
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebp+0x2C]
	mov dword ptr [ebp+0x28],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push ecx
	mov ecx,esp
	lea eax,[ebp+0x1C]
	mov dword ptr [ebp-0x30],esp
	push eax
	mov byte ptr [ebp-4],0x1B
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [ebp+0x38]
	push ecx
	mov ecx,dword ptr [ebp+0x30]
	mov byte ptr [ebp-4],0x16
	call CTextAnalyzer::SeparateLineText
	mov eax,dword ptr [esi]
	add eax,dword ptr [ebp+0x44]
	mov esi,dword ptr [ebp+0x1C]
	mov dword ptr [eax+0x18],edi
	add edi,dword ptr [eax+0x20]
	mov dword ptr [ebp+0x4C],edi
	test esi,esi
	je Block623

 Block622:
	cmp byte ptr [esi],0
	jne Block631

 Block623:
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0x15
	test eax,eax
	je Block625

 Block624:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block625:
	mov byte ptr [ebp-4],0x14
	test esi,esi
	je Block627

 Block626:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block627:
	mov byte ptr [ebp-4],0x13
	test ebx,ebx
	je Block629

 Block628:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString16::_Release
	add esp,4

 Block629:
	mov eax,dword ptr [ebp+0x34]
	mov dword ptr [ebp-4],0x21
	test eax,eax
	je Block638

 Block630:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block638

 Block631:
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0x15
	test eax,eax
	je Block633

 Block632:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block633:
	add esi,0xFFFFFFF4
	push esi
	mov byte ptr [ebp-4],0x14
	call ZXString<char>::_Release
	add esp,4
	mov byte ptr [ebp-4],0x13
	test ebx,ebx
	je Block635

 Block634:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString16::_Release
	add esp,4

 Block635:
	cmp dword ptr [ebp+0x34],0
	mov dword ptr [ebp-4],0x21
	je Block637

 Block636:
	mov edx,dword ptr [ebp+0x34]
	add edx,0xFFFFFFF4
	push edx
	call ZXString16::_Release
	add esp,4

 Block637:
	inc dword ptr [ebp+0x38]
	add dword ptr [ebp+0x44],0x44

 Block638:
	mov esi,dword ptr [ebp+0x6C]
	mov ecx,esi
	call ZArray<CT_INFO>::GetCount
	mov edi,dword ptr [ebp+0x30]
	cmp dword ptr [ebp+0x38],eax
	jb Block554

 Block639:
	mov ebx,dword ptr [edi+0xC]
	mov dword ptr [ebp+0x24],0

 Block640:
	mov eax,dword ptr [ebp+0x6C]
	push eax
	lea ecx,[ebp+0x20]
	push ecx
	mov ecx,dword ptr [ebp+0x24]
	lea edx,[ebp-0x28]
	push edx
	lea eax,[ebp+0x28]
	push eax
	push ecx
	mov ecx,edi
	call CTextAnalyzer::GetLine
	mov eax,dword ptr [ebp+0x28]
	mov esi,dword ptr [ebp-0x28]
	cmp eax,0xFFFFFFFF
	je Block643

 Block641:
	cmp esi,0xFFFFFFFF
	je Block643

 Block642:
	mov edx,dword ptr [ebp+0x6C]
	mov ecx,dword ptr [ebp+0x20]
	push edx
	push ecx
	push ebx
	push esi
	push eax
	mov ecx,edi
	call CTextAnalyzer::AdjustHeight
	mov edx,dword ptr [ebp+0x20]
	lea ebx,[ebx+edx+2]
	jmp Block647

 Block643:
	mov eax,dword ptr [ebp+0x70]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [eax]
	test esi,esi
	je Block5

 Block644:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x14]
	lea edx,[ebp-0x20]
	push edx
	push esi
	mov dword ptr [ebp-0x20],0
	call eax
	test eax,eax
	jge Block646

 Block645:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push esi
	push eax
	call _com_issue_errorex

 Block646:
	mov ecx,dword ptr [ebp-0x20]
	mov esi,dword ptr [ebp-0x28]
	lea ebx,[ebx+ecx+2]

 Block647:
	inc dword ptr [ebp+0x24]
	cmp esi,0xFFFFFFFF
	je Block640

 Block648:
	mov ecx,dword ptr [ebp+0x6C]
	call ZArray<CT_INFO>::GetCount
	dec eax
	cmp esi,eax
	jb Block640

 Block649:
	mov edi,dword ptr [edi+0xC]
	mov eax,dword ptr [ebp+0x58]
	add edi,ebx
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block651

 Block650:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block651:
	mov eax,dword ptr [ebp-0x34]
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block653

 Block652:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block653:
	mov eax,dword ptr [ebp-0x3C]
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block655

 Block654:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block655:
	mov eax,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block657

 Block656:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block657:
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block659

 Block658:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block659:
	mov eax,dword ptr [ebp+0x68]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block661

 Block660:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block661:
	mov eax,edi

 Block662:
	lea esp,[ebp-0x76C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x5C]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x60
	mov esp,ebp
	pop ebp
	ret 0x18
}
}
// CUtilDlgEx::ForcedRet
__SUB0(0057B990, __cdecl, 44639,  void) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [CUtilDlgEx::ms_lDialog+12]
	mov dword ptr [esp],eax
	test eax,eax
	je Block3

 Block1:
	lea ecx,[ecx]

 Block2:
	lea eax,[esp]
	push eax
	call ZList<CUtilDlgEx *>::GetNext
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x34]
	add esp,4
	push 2
	call eax
	cmp dword ptr [esp],0
	jne Block2

 Block3:
	pop ecx
	ret
}
}
// CTextAnalyzer::IsSuffix
_SUB_EXCEPTION_HANDLER(57D320)
// 97D568
static uint8_t _SUB_57D320_LOOKUP_TABLE_0[84] = {
0, 4, 4, 4, 4, 4, 1, 4, 4, 4, 4, 0, 0, 0, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 4, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 3, 144, 
};
// 97D5C8
static uint8_t _SUB_57D320_LOOKUP_TABLE_1[32] = {
0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 2, 
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 
};
// 97D5F4
static uint8_t _SUB_57D320_LOOKUP_TABLE_2[32] = {
0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 2, 
2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 
};
__SUB_CLASS_THIS(0057D320, __thiscall, 44484,  CTextAnalyzer, int32_t, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_57D320
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax-4]
	cmp ecx,1
	jge Block4

 Block2:
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block33

 Block3:
	jmp Block32

 Block4:
	movsx edx,byte ptr [eax]
	add edx,0xFFFFFFDF
	cmp edx,0x52
	ja Block31

 Block5:
	movzx edx,byte ptr [edx+_SUB_57D320_LOOKUP_TABLE_0]
	cmp EDX, 0
je Block27
cmp EDX, 1
je Block16
cmp EDX, 2
je Block6
cmp EDX, 3
je Block19
cmp EDX, 4
je Block31


 Block6:
	cmp ecx,1
	jle Block31

 Block7:
	cmp byte ptr [eax+1],0x73
	jne Block31

 Block8:
	cmp ecx,3
	jl Block26

 Block9:
	movsx edx,byte ptr [eax+2]
	add edx,0xFFFFFFE0
	cmp edx,0x1F
	ja Block31

 Block10:
	movzx edx,byte ptr [edx+_SUB_57D320_LOOKUP_TABLE_1]
	cmp EDX, 0
je Block15
cmp EDX, 1
je Block11
cmp EDX, 2
je Block31


 Block11:
	cmp ecx,3
	je Block14

 Block12:
	jle Block31

 Block13:
	cmp byte ptr [eax+3],0x20
	jne Block31

 Block14:
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call ZXString<char>::_Release
	add esp,4
	mov eax,3
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4

 Block15:
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call ZXString<char>::_Release
	mov eax,2
	add esp,4
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4

 Block16:
	push 0
	push 0x20
	lea ecx,[esp+0x20]
	call ZXString<char>::Find__1
	mov esi,eax
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov eax,esi
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4

 Block19:
	cmp ecx,2
	jge Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call ZXString<char>::_Release
	add esp,4
	mov eax,1
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4

 Block21:
	movsx edx,byte ptr [eax+1]
	add edx,0xFFFFFFE0
	cmp edx,0x1F
	ja Block31

 Block22:
	movzx edx,byte ptr [edx+_SUB_57D320_LOOKUP_TABLE_2]
	cmp EDX, 0
je Block30
cmp EDX, 1
je Block23
cmp EDX, 2
je Block31


 Block23:
	cmp ecx,2
	je Block26

 Block24:
	jle Block31

 Block25:
	cmp byte ptr [eax+2],0x20
	jne Block31

 Block26:
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call ZXString<char>::_Release
	add esp,4
	mov eax,2
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4

 Block27:
	cmp ecx,1
	je Block30

 Block28:
	jle Block31

 Block29:
	cmp byte ptr [eax+1],0x20
	jne Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call ZXString<char>::_Release
	mov eax,1
	add esp,4
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4

 Block31:
	mov dword ptr [esp+0x10],0xFFFFFFFF

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block33:
	xor eax,eax
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4
}
}
// CUtilDlgEx::SetUtilDlgEx_LIST
__SUB_CLASS_THIS(0057E830, __thiscall, 44629,  CUtilDlgEx, void, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	push ebx
	push ebp
	push esi
	push edi
	mov edi,ecx
	je Block2

 Block1:
	lea ecx,[edi+0x11C]
	call ZArray<CT_INFO *>::RemoveAll

 Block2:
	xor ebp,ebp
	xor ebx,ebx
	lea esp,[esp]

 Block3:
	mov eax,dword ptr [edi+0xC18]
	test eax,eax
	je Block8

 Block4:
	cmp ebp,dword ptr [eax-4]
	jae Block8

 Block5:
	mov esi,eax
	add esi,ebx
	cmp dword ptr [esi],4
	jne Block7

 Block6:
	push 0xFFFFFFFF
	lea ecx,[edi+0x11C]
	call ZArray<CT_INFO *>::InsertBefore
	mov dword ptr [eax],esi

 Block7:
	inc ebp
	add ebx,0x44
	jmp Block3

 Block8:
	mov dword ptr [edi+0x118],0
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// CUtilDlgEx::Layout_MLINPUT
__SUB_CLASS_THIS0(0057B230, __thiscall, 44605,  CUtilDlgEx, void) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [ecx+0xA4]
	call CUtilDlgEx::GetCTHeight_Min
	cmp edi,eax
	jge Block2

 Block1:
	call CUtilDlgEx::GetCTHeight_Min
	mov dword ptr [ecx+0xA8],eax
	jmp Block3

 Block2:
	mov dword ptr [ecx+0xA8],edi

 Block3:
	mov eax,dword ptr [ecx+0x100]
	cmp eax,1
	mov dword ptr [ecx+0xB0],0
	jg Block5

 Block4:
	xor edx,edx
	jmp Block6

 Block5:
	lea edx,[eax+eax*2]
	add edx,edx
	add edx,edx

 Block6:
	mov esi,dword ptr [ecx+0xC0]
	mov eax,esi
	neg eax
	sbb eax,eax
	and eax,0xFFFFFF6E
	add eax,0x9E
	mov dword ptr [ecx+0x9C],eax
	test esi,esi
	je Block8

 Block7:
	mov eax,0xFFFFFFFA
	jmp Block9

 Block8:
	mov eax,dword ptr [ecx+0xA8]
	sub eax,edi
	sub eax,edx
	sub eax,0x14
	cdq
	sub eax,edx
	sar eax,1

 Block9:
	add eax,0x16
	mov dword ptr [ecx+0xA0],eax
	call CUtilDlgEx::GetWndWidth
	neg esi
	sbb esi,esi
	and esi,0x1B
	add esi,0x42
	add esi,dword ptr [ecx+0xA8]
	pop edi
	mov dword ptr [ecx+0xB8],esi
	mov dword ptr [ecx+0xB4],eax
	pop esi
	ret
}
}
// CUtilDlgEx::OnCreate_PET
_SUB_EXCEPTION_HANDLER(581AC0)
__SUB_CLASS_THIS0(00581AC0, __thiscall, 44605,  CUtilDlgEx, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_581AC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	push 0
	push 0
	push 0
	push 0x2000
	push offset _S_UIUIWINDOW2IMGUT__13
	lea eax,[esp+0x28]
	lea ebx,[edi+0xC3C]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x34],0
	test eax,eax
	je Block36

 Block1:
	add eax,8
	je Block36

 Block2:
	lea esi,[eax-8]
	test esi,esi
	je Block4

 Block3:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov eax,dword ptr [edi+0xBE0]
	mov dword ptr [edi+0xBE0],esi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block6

 Block5:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block6:
	or ebp,0xFFFFFFFF
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x34],ebp
	je Block8

 Block7:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block8:
	push 0
	push 0
	push 0
	push 0x2001
	push offset _S_UIUIWINDOW2IMGUT__12
	lea edx,[esp+0x28]
	push edx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x34],1
	test eax,eax
	je Block37

 Block9:
	add eax,8
	je Block37

 Block10:
	lea esi,[eax-8]
	test esi,esi
	je Block12

 Block11:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block12:
	mov eax,dword ptr [edi+0xBE8]
	mov dword ptr [edi+0xBE8],esi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block14

 Block13:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block14:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x34],ebp
	je Block16

 Block15:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block16:
	push 0
	push 0
	push 0
	push 1
	push offset _S_UIUIWINDOW2IMGUT__11
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x34],2
	test eax,eax
	je Block38

 Block17:
	add eax,8
	je Block38

 Block18:
	lea esi,[eax-8]
	test esi,esi
	je Block20

 Block19:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block20:
	mov eax,dword ptr [edi+0xBF0]
	mov dword ptr [edi+0xBF0],esi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block22

 Block21:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block22:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x34],ebp
	je Block24

 Block23:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block24:
	push 0
	push 0
	push 0
	push 2
	push offset _S_UIUIWINDOW2IMGUT__10
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x34],3
	test eax,eax
	je Block39

 Block25:
	add eax,8
	je Block39

 Block26:
	lea esi,[eax-8]
	test esi,esi
	je Block28

 Block27:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block28:
	mov eax,dword ptr [edi+0xBF8]
	mov dword ptr [edi+0xBF8],esi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block30

 Block29:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block30:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x34],ebp
	je Block32

 Block31:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block32:
	lea edx,[esp+0x14]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea esi,[edi+0xC20]
	push esi
	push eax
	mov dword ptr [esp+0x40],4
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0x34],ebp
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block34:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block40

 Block35:
	push eax
	call _com_issue_error

 Block36:
	xor esi,esi
	jmp Block4

 Block37:
	xor esi,esi
	jmp Block12

 Block38:
	xor esi,esi
	jmp Block20

 Block39:
	xor esi,esi
	jmp Block28

 Block40:
	lea edx,[esp+0x1C]
	push edx
	push 0xFF000000
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	mov ebx,5
	push eax
	mov dword ptr [esp+0x4C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x44],6
	test ecx,ecx
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	mov byte ptr [esp+0x44],bl
	call IWzFont::Create
	cmp word ptr [esp+0x1C],8
	mov dword ptr [esp+0x34],ebp
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov ecx,edi
	call CUtilDlgEx::MakePet
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret
}
}
// CUtilDlgEx::SetUtilDlgEx_INPUT_STR
__SUB_CLASS_THIS(0057DA50, __thiscall, 44626,  CUtilDlgEx, void, const char*, long, long, int32_t, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	push eax
	lea ecx,[esi+0xE4]
	call ZXString<char>::AssignCStr
	mov ecx,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0xC]
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esi+0xE8],ecx
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [esi+0x10C],ecx
	mov ecx,esi
	mov dword ptr [esi+0xF8],edx
	mov dword ptr [esi+0x108],eax
	call CUtilDlgEx::Layout_INPUT
	pop esi
	ret 0x14
}
}
// CTextAnalyzer::GetCharacter
_SUB_EXCEPTION_HANDLER(583590)
__SUB_CLASS_THIS(00583590, __thiscall, 44475,  CTextAnalyzer, void, ZXString<char>&, ZXString<char>&, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_583590
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x88
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x84],eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x9C]
	mov dword ptr fs:[0],eax
	mov ebp,dword ptr [esp+0xB0]
	mov ebx,dword ptr [esp+0xAC]
	push offset _S_
	mov ecx,ebp
	call ZXString<char>::AssignCStr
	mov esi,dword ptr [ebx]
	test esi,esi
	je Block9

 Block1:
	cmp byte ptr [esi],0
	je Block9

 Block2:
	push esi
	call CharNextA
	cmp eax,esi
	je Block9

 Block3:
	mov edi,eax
	sub edi,esi
	push edi
	lea eax,[esp+0x1C]
	push esi
	push eax
	call _memcpy
	add esp,0xC
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+edi+0x1C],0
	call ZXString<char>::AssignCStr
	cmp dword ptr [esp+0xB4],0
	je Block9

 Block4:
	mov ebp,dword ptr [ebp]
	test ebp,ebp
	je Block6

 Block5:
	mov eax,dword ptr [ebp-4]
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	push 0xFFFFFFFF
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebx
	call ZXString<char>::Mid
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0xA8],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0xA4],0xFFFFFFFF
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov ecx,dword ptr [esp+0x9C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov ecx,dword ptr [esp+0x84]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x94
	ret 0xC
}
}
// CUtilDlgEx::GetWndWidth
// 97AD8C
static uint8_t _SUB_57AD40_LOOKUP_TABLE_0[10] = {
0, 0, 0, 0, 0, 1, 1, 0, 0, 2, 
};
__SUB_CLASS_THIS0(0057AD40, __thiscall, 44636,  CUtilDlgEx, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x98]
	cmp eax,9
	ja Block5

 Block1:
	movzx eax,byte ptr [eax+_SUB_57AD40_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4


 Block2:
	mov eax,dword ptr [ecx+0xC0]
	neg eax
	sbb eax,eax
	and eax,0xFFFFFEFD
	add eax,0x207
	ret

 Block3:
	mov eax,0x16F
	ret

 Block4:
	mov eax,0x1A2
	ret

 Block5:
	xor eax,eax
	ret
}
}
// CUtilDlgEx::ClearToolTip
__SUB_CLASS_THIS0(00586860, __thiscall, 44616,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0x168
	jmp  CUIToolTip::ClearToolTip
}
}
// CUtilDlgEx::GetCTHeight_Max
// 97AE84
static uint8_t _SUB_57AE40_LOOKUP_TABLE_0[10] = {
0, 0, 1, 1, 0, 2, 2, 1, 1, 3, 
};
__SUB_CLASS_THIS0(0057AE40, __thiscall, 44636,  CUtilDlgEx, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x98]
	cmp eax,9
	ja Block6

 Block1:
	movzx eax,byte ptr [eax+_SUB_57AE40_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block5


 Block2:
	mov eax,0xF0
	ret

 Block3:
	mov eax,0x7FFFFFFF
	ret

 Block4:
	mov eax,0x46
	ret

 Block5:
	mov eax,0x12C
	ret

 Block6:
	xor eax,eax
	ret
}
}
// CUtilDlgEx::OnDestroy
__SUB_CLASS_THIS0(0057AF40, __thiscall, 44605,  CUtilDlgEx, void) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x2C]
	lea esi,[edi+4]
	mov ecx,esi
	call edx
	mov ecx,eax
	mov eax,dword ptr [edi+0x24]
	cdq
	sub eax,edx
	sar eax,1
	add ecx,eax
	mov dword ptr [_D_SRECTQUESTDLG],ecx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov ecx,eax
	mov eax,dword ptr [edi+0x28]
	cdq
	sub eax,edx
	sar eax,1
	add ecx,eax
	pop edi
	mov dword ptr [_D_SRECTQUESTDLG+4],ecx
	pop esi
	ret
}
}
// CTextAnalyzer::AdjustHeight
__SUB_CLASS_THIS(0057B310, __thiscall, 44483,  CTextAnalyzer, void, long, long, long, long, ZArray<CT_INFO>&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [esp+0xC]
	cmp eax,esi
	jg Block4

 Block1:
	mov edx,eax
	shl edx,4
	add edx,eax
	add edx,edx
	push ebx
	sub esi,eax
	push edi
	mov edi,dword ptr [esp+0x20]
	add edx,edx
	inc esi

 Block2:
	mov eax,dword ptr [edi]
	mov ebx,dword ptr [eax+edx+0x28]
	mov ecx,dword ptr [eax+edx+0x24]
	add eax,edx
	inc ebx
	neg ebx
	sbb ebx,ebx
	and ebx,0xA
	sub ebx,ecx
	add ebx,dword ptr [esp+0x18]
	inc ecx
	add ebx,dword ptr [esp+0x1C]
	add edx,0x44
	sub esi,1
	mov dword ptr [eax+0x1C],ebx
	mov dword ptr [eax+0x2C],ecx
	jne Block2

 Block3:
	pop edi
	pop ebx

 Block4:
	pop esi
	ret 0x14
}
}
// CUtilDlgEx::OnMouseEnter
__SUB_CLASS_THIS(0057AF90, __thiscall, 44609,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::OnMouseEnter
	lea ecx,[esi+0x168]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 4
}
}
// CTextAnalyzer::IsDilimiter
_SUB_EXCEPTION_HANDLER(57D1F0)
__SUB_CLASS_THIS(0057D1F0, __thiscall, 44484,  CTextAnalyzer, int32_t, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_57D1F0
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block2

 Block1:
	mov esi,dword ptr [eax-4]
	jmp Block3

 Block2:
	xor esi,esi

 Block3:
	push 0x20
	lea ecx,[esp+0x1C]
	call ZXString<char>::FindReverse
	test eax,eax
	jle Block6

 Block4:
	push 0x20
	lea ecx,[esp+0x1C]
	call ZXString<char>::FindReverse
	cmp esi,eax
	jle Block6

 Block5:
	push 0x20
	lea ecx,[esp+0x1C]
	call ZXString<char>::FindReverse
	mov esi,eax

 Block6:
	push 0x2D
	lea ecx,[esp+0x1C]
	call ZXString<char>::FindReverse
	test eax,eax
	jle Block9

 Block7:
	push 0x2D
	lea ecx,[esp+0x1C]
	call ZXString<char>::FindReverse
	cmp esi,eax
	jle Block9

 Block8:
	push 0x2D
	lea ecx,[esp+0x1C]
	call ZXString<char>::FindReverse
	mov esi,eax

 Block9:
	push 0x28
	lea ecx,[esp+0x1C]
	call ZXString<char>::FindReverse
	test eax,eax
	jle Block12

 Block10:
	push 0x28
	lea ecx,[esp+0x1C]
	call ZXString<char>::FindReverse
	cmp esi,eax
	jle Block12

 Block11:
	push 0x28
	lea ecx,[esp+0x1C]
	call ZXString<char>::FindReverse
	mov esi,eax

 Block12:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax-4]
	jmp Block15

 Block14:
	xor ecx,ecx

 Block15:
	cmp esi,ecx
	jge Block20

 Block16:
	test esi,esi
	jle Block20

 Block17:
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov eax,esi
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4

 Block20:
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	xor eax,eax
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4
}
}
// CTextAnalyzer::SeparateLineText
_SUB_EXCEPTION_HANDLER(57E990)
__SUB_CLASS_THIS(0057E990, __thiscall, 44477,  CTextAnalyzer, void, long, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>, ZArray<CT_INFO>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_57E990
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
	mov esi,dword ptr [esp+0x38]
	mov dword ptr [esp+0x2C],1
	test esi,esi
	je Block2

 Block1:
	cmp byte ptr [esi],0
	jne Block8

 Block2:
	mov ebp,dword ptr [esp+0x40]
	mov edi,dword ptr [esp+0x34]
	mov ecx,ebp
	call ZArray<CT_INFO>::GetCount
	cmp edi,eax
	jae Block6

 Block3:
	mov esi,edi
	shl esi,4
	add esi,edi
	add esi,esi
	add esi,esi
	lea ebx,[ebx]

 Block4:
	mov eax,dword ptr [ebp]
	inc dword ptr [esi+eax+8]
	lea eax,[esi+eax+8]
	mov ecx,ebp
	inc edi
	add esi,0x44
	call ZArray<CT_INFO>::GetCount
	cmp edi,eax
	jb Block4

 Block5:
	mov esi,dword ptr [esp+0x38]

 Block6:
	mov byte ptr [esp+0x2C],0
	test esi,esi
	je Block42

 Block7:
	add esi,0xFFFFFFF4
	push esi
	jmp Block41

 Block8:
	mov eax,dword ptr [esp+0x34]
	mov ebx,dword ptr [esp+0x40]
	mov esi,dword ptr [ebx]
	mov edi,eax
	shl edi,4
	add edi,eax
	add edi,edi
	add edi,edi
	add esi,edi
	lea ecx,[esp+0x38]
	lea ebp,[esi+0x10]
	push ecx
	mov ecx,ebp
	call ZXString<char>::op_assign
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov ebp,dword ptr [ebp]
	lea ecx,[esp+0x14]
	push ecx
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x38],2
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0xC]
	mov byte ptr [esp+0x34],3
	test ecx,ecx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov byte ptr [esp+0x34],2
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x14],8
	mov dword ptr [esi+0x20],eax
	mov byte ptr [esp+0x2C],1
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block16:
	push 0
	lea ecx,[esp+0x40]
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block36

 Block17:
	cmp byte ptr [eax],0
	je Block36

 Block18:
	mov ecx,dword ptr [esp+0x34]
	inc ecx
	push ecx
	mov ecx,ebx
	call ZArray<CT_INFO>::InsertBefore
	mov ebp,dword ptr [ebx]
	mov esi,eax
	add ebp,edi
	mov dword ptr [esi],0
	mov edx,dword ptr [ebp+8]
	mov dword ptr [esi+8],edx
	mov eax,dword ptr [ebp+0xC]
	mov edi,dword ptr [esi+0xC]
	cmp edi,eax
	je Block23

 Block19:
	mov dword ptr [esi+0xC],eax
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block21:
	test edi,edi
	je Block23

 Block22:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block23:
	lea edx,[esp+0x3C]
	lea edi,[esi+0x10]
	push edx
	mov ecx,edi
	call ZXString<char>::op_assign
	xor eax,eax
	mov dword ptr [esi+0x18],eax
	mov dword ptr [esi+0x1C],eax
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	mov edi,dword ptr [edi]
	lea edx,[esp+0x14]
	push edx
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push edi
	mov byte ptr [esp+0x38],4
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [esp+0x34],5
	test ecx,ecx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov byte ptr [esp+0x34],4
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x14],8
	mov dword ptr [esi+0x20],eax
	mov byte ptr [esp+0x2C],1
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov edi,dword ptr [ebp+0xC]
	test edi,edi
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x14]
	lea eax,[esp+0x40]
	push eax
	push edi
	mov dword ptr [esp+0x48],0
	call ecx
	test eax,eax
	jge Block35

 Block34:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push edi
	push eax
	call _com_issue_errorex

 Block35:
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [esi+0x24],edx
	mov eax,dword ptr [ebp+0x28]
	mov dword ptr [esi+0x28],eax
	mov dword ptr [esi+0x2C],0
	mov ecx,dword ptr [ebp+0x30]
	mov dword ptr [esi+0x30],ecx

 Block36:
	mov esi,dword ptr [esp+0x34]
	mov ecx,ebx
	inc esi
	call ZArray<CT_INFO>::GetCount
	cmp esi,eax
	jae Block39

 Block37:
	mov edi,esi
	shl edi,4
	add edi,esi
	add edi,edi
	add edi,edi
	lea ecx,[ecx]

 Block38:
	mov edx,dword ptr [ebx]
	inc dword ptr [edi+edx+8]
	lea eax,[edi+edx+8]
	mov ecx,ebx
	inc esi
	add edi,0x44
	call ZArray<CT_INFO>::GetCount
	cmp esi,eax
	jb Block38

 Block39:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x2C],0
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFF4
	push eax

 Block41:
	call ZXString<char>::_Release
	add esp,4

 Block42:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block44:
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
// CUtilDlgEx::OnCreate_INPUT
_SUB_EXCEPTION_HANDLER(5839A0)
__SUB_CLASS_THIS0(005839A0, __thiscall, 44605,  CUtilDlgEx, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5839A0
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
	mov esi,ecx
	lea ecx,[esp+0x30]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	xor ebx,ebx
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x78],ebx
	mov dword ptr [esp+0x58],0xFFFFFFFF
	mov dword ptr [esp+0x50],0xFF000000
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x74],1
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov byte ptr [esp+0x74],bl
	cmp eax,ebx
	je Block13

 Block4:
	add eax,8
	cmp eax,ebx
	je Block13

 Block5:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block7

 Block6:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [esi+0xBC0]
	mov dword ptr [esi+0xBC0],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block9:
	lea ecx,[esi+0xE4]
	push ecx
	lea ecx,[esp+0x34]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esi+0x108]
	mov ebp,dword ptr [esi+0x24]
	mov edx,dword ptr [esi+0xE8]
	mov ecx,dword ptr [esi+0xBC0]
	mov dword ptr [esp+0x58],eax
	mov eax,dword ptr [esi+0x9C]
	lea edi,[esp+0x30]
	push edi
	lea edi,[eax+eax+2]
	push 0xE
	sub ebp,edi
	mov edi,dword ptr [esi+0xA4]
	push ebp
	mov ebp,dword ptr [esi+0xA0]
	lea edi,[edi+ebp+5]
	push edi
	add eax,2
	push eax
	mov dword ptr [esp+0x74],edx
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push 0x3E8
	push esi
	call eax
	mov eax,dword ptr [esi+0xBC0]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x20],1
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x28],ebx
	lea ecx,[esp+0x14]
	push 0x8FD
	push ecx
	mov byte ptr [esp+0x7C],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push offset _S_UIUIWINDOW2IMGUT
	lea edx,[esp+0x34]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x80],3
	call CUtilDlgEx::MakeUOLByUIType
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x74],2
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x74],4
	cmp eax,ebx
	je Block14

 Block12:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block15

 Block13:
	xor edi,edi
	jmp Block7

 Block14:
	xor eax,eax

 Block15:
	mov byte ptr [esp+0x74],2
	cmp eax,ebx
	je Block26

 Block16:
	add eax,8
	cmp eax,ebx
	je Block26

 Block17:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block19

 Block18:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block19:
	mov eax,dword ptr [esi+0xBE0]
	mov dword ptr [esi+0xBE0],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block21

 Block20:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block21:
	mov ecx,dword ptr [esi+0xBE0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [esi+0x28]
	push ebx
	sub eax,0x18
	push eax
	mov eax,dword ptr [esi+0x24]
	sub eax,0x30
	push eax
	push 1
	push esi
	call edx
	test byte ptr [esi+0xC34],1
	jne Block29

 Block22:
	lea eax,[esp+0x14]
	push 0x8FF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push offset _S_UIUIWINDOW2IMGUT
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x80],5
	call CUtilDlgEx::MakeUOLByUIType
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x74],2
	cmp eax,ebx
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block24:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x74],6
	cmp eax,ebx
	je Block27

 Block25:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block28

 Block26:
	xor edi,edi
	jmp Block19

 Block27:
	xor eax,eax

 Block28:
	push eax
	lea ecx,[esi+0xBE4]
	mov byte ptr [esp+0x78],2
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xBE8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [esi+0x28]
	push ebx
	sub eax,0x18
	push eax
	push 9
	push 2
	push esi
	call edx

 Block29:
	mov edi,dword ptr [esi+0x78]
	cmp edi,ebx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	mov ecx,dword ptr [esi+0x9C]
	mov ebp,dword ptr [esi+0xA0]
	lea eax,[ecx+ecx]
	mov edx,eax
	mov eax,dword ptr [esi+0x24]
	push 0xFF000000
	sub eax,edx
	mov edx,dword ptr [esi+0xA4]
	push 0x12
	add eax,3
	push eax
	lea edx,[edx+ebp+2]
	mov ebp,dword ptr [edi]
	mov eax,dword ptr [ebp+0x8C]
	push edx
	dec ecx
	push ecx
	push edi
	call eax
	cmp eax,ebx
	jge Block33

 Block32:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block33:
	mov edi,dword ptr [esi+0x78]
	cmp edi,ebx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	mov ecx,dword ptr [esi+0x9C]
	mov eax,dword ptr [esi+0x24]
	push 0xFFFFFFFF
	lea edx,[ecx+ecx]
	sub eax,edx
	mov edx,dword ptr [esi+0xA4]
	mov esi,dword ptr [esi+0xA0]
	push 0x10
	inc eax
	push eax
	lea edx,[edx+esi+3]
	mov esi,dword ptr [edi]
	mov eax,dword ptr [esi+0x8C]
	push edx
	push ecx
	push edi
	call eax
	cmp eax,ebx
	jge Block37

 Block36:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block37:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x74],bl
	cmp eax,ebx
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block39:
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x74],0xFFFFFFFF
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x64
	ret
}
}
// CUtilDlgEx::OnChildNotify
__SUB_CLASS_THIS(0057AFB0, __thiscall, 44612,  CUtilDlgEx, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	cmp edi,0x3E9
	jne Block4

 Block1:
	cmp ebx,0x12C
	jb Block4

 Block2:
	cmp ebx,0x130
	ja Block4

 Block3:
	mov eax,dword ptr [esp+0x18]
	lea ecx,[eax*8]
	mov dword ptr [esi+0xAC],ecx
	lea ecx,[esi+0x16C]
	call CUIToolTip::ClearToolTip
	push 0
	mov ecx,esi
	mov dword ptr [esi+0x110],0xFFFFFFFF
	call CWnd::InvalidateRect

 Block4:
	cmp ebx,0x64
	jne Block6

 Block5:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x20]
	push edi
	mov ecx,esi
	call eax

 Block6:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CTextAnalyzer::GetOutlineCanvas
_SUB_EXCEPTION_HANDLER(57ECD0)
__SUB_CLASS_THIS(0057ECD0, __thiscall, 44485,  CTextAnalyzer, _x_com_ptr<IWzCanvas>*, _x_com_ptr<IWzCanvas>*, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_57ECD0
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
	xor ebp,ebp
	mov dword ptr [esp+0x1C],ebp
	mov edi,dword ptr [esp+0x70]
	mov eax,1
	mov dword ptr [esp+0x68],eax
	mov dword ptr [edi],ebp
	mov dword ptr [esp+0x1C],eax
	lea eax,[esp+0x18]
	push 0x3D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	push edi
	push eax
	mov byte ptr [esp+0x74],2
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x68],1
	cmp eax,ebp
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
	push ecx
	call esi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x6C],3
	call esi
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x68],4
	cmp ecx,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push 0x20
	push 0x20
	call IWzCanvas::Create
	mov ebx,8
	mov byte ptr [esp+0x68],3
	cmp word ptr [esp+0x20],bx
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov byte ptr [esp+0x68],1
	cmp word ptr [esp+0x30],bx
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebp
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov edx,3
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],0xFF
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x6C],5
	call esi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x6C],6
	call esi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	push ebp
	push ebp
	lea ecx,[esp+0x48]
	push ecx
	lea edx,[esp+0x3C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0xB8D
	mov bl,7
	push eax
	mov byte ptr [esp+0x84],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x7C],8
	cmp dword ptr [_D_G_RM],ebp
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea ecx,[esp+0x64]
	push ecx
	mov byte ptr [esp+0x80],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov esi,dword ptr [edi]
	mov byte ptr [esp+0x70],9
	cmp esi,ebp
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov ecx,eax
	call Ztl_variant_t::GetUnknown
	mov edi,dword ptr [esp+0x20]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],edi
	mov edi,dword ptr [esp+0x34]
	push eax
	mov eax,dword ptr [edx+0x80]
	mov dword ptr [ecx+4],edi
	mov edi,dword ptr [esp+0x3C]
	push ebp
	mov dword ptr [ecx+8],edi
	mov edi,dword ptr [esp+0x44]
	push ebp
	push esi
	mov dword ptr [ecx+0xC],edi
	call eax
	cmp eax,ebp
	jge Block26

 Block25:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block26:
	mov edi,8
	mov byte ptr [esp+0x68],bl
	cmp word ptr [esp+0x50],di
	jne Block33

 Block27:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,ebp
	je Block29

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block29:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block30:
	mov byte ptr [esp+0x68],6
	cmp word ptr [esp+0x30],di
	jne Block34

 Block31:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebp
	je Block35

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block33:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x50]
	push edx
	call esi
	jmp Block30

 Block34:
	lea ecx,[esp+0x30]
	push ecx
	call esi

 Block35:
	mov byte ptr [esp+0x68],5
	cmp word ptr [esp+0x40],di
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	cmp eax,ebp
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea eax,[esp+0x40]
	push eax
	call esi

 Block39:
	mov byte ptr [esp+0x68],1
	cmp word ptr [esp+0x20],di
	jne Block42

 Block40:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea edx,[esp+0x20]
	push edx
	call esi

 Block43:
	mov eax,3
	mov word ptr [esp+0x20],ax
	mov dword ptr [esp+0x28],0xFF
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0x68],0xA
	mov ebx,eax
	cmp eax,ebp
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x14]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x48]
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block47

 Block46:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block47:
	mov eax,0x20
	sub eax,dword ptr [esp+0x14]
	mov ecx,0
	cdq
	sub eax,edx
	sar eax,1
	sets cl
	dec ecx
	and ecx,eax
	mov eax,dword ptr [esp+0x74]
	mov edi,ecx
	cmp eax,ebp
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x40]
	lea ecx,[esp+0x18]
	push ecx
	push eax
	mov esi,eax
	mov dword ptr [esp+0x20],ebp
	call edx
	cmp eax,ebp
	jge Block51

 Block50:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block51:
	mov eax,0x20
	sub eax,dword ptr [esp+0x18]
	mov ecx,0
	cdq
	sub eax,edx
	sar eax,1
	sets cl
	dec ecx
	and ecx,eax
	mov eax,dword ptr [esp+0x70]
	mov esi,dword ptr [eax]
	cmp esi,ebp
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	mov ebp,dword ptr [esp+0x20]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x34]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x38]
	push ebx
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x40]
	push edi
	push ecx
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [edx+0x80]
	push esi
	call eax
	test eax,eax
	jge Block55

 Block54:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block55:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x68],1
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0x68],0
	test eax,eax
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	mov eax,dword ptr [esp+0x70]
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 8
}
}
// CTextAnalyzer::SeparateLineIcon
__SUB_CLASS_THIS(0057B560, __thiscall, 44479,  CTextAnalyzer, void, long, ZArray<CT_INFO>&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push edi
	mov edi,dword ptr [esp+0xC]
	mov ecx,ebx
	call ZArray<CT_INFO>::GetCount
	cmp edi,eax
	jae Block4

 Block1:
	push esi
	mov esi,edi
	shl esi,4
	add esi,edi
	add esi,esi
	add esi,esi

 Block2:
	mov eax,dword ptr [ebx]
	inc dword ptr [eax+esi+8]
	lea eax,[eax+esi+8]
	mov ecx,ebx
	inc edi
	add esi,0x44
	call ZArray<CT_INFO>::GetCount
	cmp edi,eax
	jb Block2

 Block3:
	pop esi

 Block4:
	pop edi
	pop ebx
	ret 8
}
}
// CUtilDlgEx::SetRet
_SUB_EXCEPTION_HANDLER(582830)
__SUB_CLASS_THIS(00582830, __thiscall, 44613,  CUtilDlgEx, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_582830
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
	mov esi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	cmp dword ptr [esp+0x30],1
	mov dword ptr [esp+0x28],ebp
	jne Block96

 Block1:
	mov ebx,2
	cmp dword ptr [esi+0x98],ebx
	jne Block62

 Block2:
	mov ecx,dword ptr [esi+0xBC0]
	lea eax,[esp+0x18]
	push eax
	call CCtrlEdit::GetText
	mov byte ptr [esp+0x28],1
	xor ecx,ecx

 Block3:
	mov edi,dword ptr [esp+0x18]
	cmp edi,ebp
	je Block5

 Block4:
	mov eax,dword ptr [edi-4]
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	cmp ecx,eax
	jge Block15

 Block7:
	mov al,byte ptr [ecx+edi]
	cmp al,0x30
	jl Block10

 Block8:
	cmp al,0x39
	jg Block10

 Block9:
	inc ecx
	jmp Block3

 Block10:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push 0x341
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov esi,dword ptr [esi+0xBC0]
	add esp,0x14
	cmp esi,ebp
	je Block12

 Block11:
	lea eax,[esi+4]
	jmp Block13

 Block12:
	xor eax,eax

 Block13:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov byte ptr [esp+0x28],0
	cmp edi,ebp
	je Block99

 Block14:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4
	jmp Block99

 Block15:
	push edi
	call __atoi64
	add esp,4
	cmp edx,ebp
	jne Block67

 Block16:
	cmp eax,ebp
	jl Block67

 Block17:
	cmp eax,dword ptr [esi+0xEC]
	mov dword ptr [esi+0xF4],eax
	jge Block31

 Block18:
	lea edx,[esp+0x30]
	push 0x342
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xEC]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x34],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov byte ptr [esp+0x28],1
	cmp eax,ebp
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov ebx,dword ptr [esp+0x14]
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ebp,esp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [ebp],0
	test ebx,ebx
	je Block24

 Block21:
	mov eax,ebx
	lea edx,[eax+1]
	lea esp,[esp]

 Block22:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block22

 Block23:
	sub eax,edx
	mov edi,eax
	push edi
	push ebx
	push 0
	push edi
	mov ecx,ebp
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	mov ecx,ebp
	call ZXString<char>::ReleaseBuffer
	mov edi,dword ptr [esp+0x2C]

 Block24:
	call CUtilDlg::Notice
	mov esi,dword ptr [esi+0xBC0]
	add esp,0x14
	test esi,esi
	je Block26

 Block25:
	lea eax,[esi+4]
	jmp Block27

 Block26:
	xor eax,eax

 Block27:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov byte ptr [esp+0x28],0
	test edi,edi
	je Block29

 Block28:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test ebx,ebx
	je Block99

 Block30:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4
	jmp Block99

 Block31:
	cmp eax,dword ptr [esi+0xF0]
	jle Block45

 Block32:
	lea eax,[esp+0x30]
	push 0x343
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xF0]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x34],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov byte ptr [esp+0x28],1
	cmp eax,ebp
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	mov ebx,dword ptr [esp+0x14]
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ebp,esp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [ebp],0
	test ebx,ebx
	je Block38

 Block35:
	mov eax,ebx
	lea edx,[eax+1]
	lea ecx,[ecx]

 Block36:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block36

 Block37:
	sub eax,edx
	mov edi,eax
	push edi
	push ebx
	push 0
	push edi
	mov ecx,ebp
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	mov ecx,ebp
	call ZXString<char>::ReleaseBuffer
	mov edi,dword ptr [esp+0x2C]

 Block38:
	call CUtilDlg::Notice
	mov esi,dword ptr [esi+0xBC0]
	add esp,0x14
	test esi,esi
	je Block40

 Block39:
	lea eax,[esi+4]
	jmp Block41

 Block40:
	xor eax,eax

 Block41:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov byte ptr [esp+0x28],0
	test edi,edi
	je Block43

 Block42:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block43:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test ebx,ebx
	je Block99

 Block44:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4
	jmp Block99

 Block45:
	mov ecx,dword ptr [esi+0xBC0]
	lea eax,[esp+0x1C]
	push eax
	call CCtrlEdit::GetText
	lea edi,[esi+0x104]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x2C],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x28],1
	cmp eax,ebp
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	mov edi,dword ptr [edi]
	cmp edi,ebp
	je Block49

 Block48:
	mov edi,dword ptr [edi-4]
	jmp Block50

 Block49:
	xor edi,edi

 Block50:
	cmp edi,dword ptr [esi+0xF8]
	jge Block60

 Block51:
	lea ecx,[esp+0x30]
	push 0x344
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi+0xF8]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x34],6
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov byte ptr [esp+0x28],1
	cmp eax,ebp
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	mov edi,dword ptr [esp+0x14]
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push 0xFFFFFFFF
	push edi
	call ZXString<char>::CreateFromCharStr
	call CUtilDlg::Notice
	mov esi,dword ptr [esi+0xBC0]
	add esp,0x14
	cmp esi,ebp
	je Block55

 Block54:
	add esi,4
	jmp Block56

 Block55:
	xor esi,esi

 Block56:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push esi
	call CWndMan::SetFocus
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x28],0
	cmp eax,ebp
	je Block58

 Block57:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block58:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp edi,ebp
	je Block99

 Block59:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4
	jmp Block99

 Block60:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x28],0
	cmp eax,ebp
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block62:
	cmp dword ptr [esi+0x98],3
	jne Block93

 Block63:
	mov ecx,dword ptr [esi+0xBC0]
	lea edx,[esp+0x1C]
	push edx
	call CCtrlEdit::GetText
	lea edi,[esi+0x104]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x2C],7
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x28],0
	cmp eax,ebp
	je Block65

 Block64:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block65:
	push ebp
	push ebp
	mov ecx,edi
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov eax,dword ptr [eax]
	cmp eax,ebp
	je Block80

 Block66:
	mov eax,dword ptr [eax-4]
	jmp Block81

 Block67:
	lea ecx,[esp+0x30]
	push 0x343
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi+0xF0]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x34],bl
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov byte ptr [esp+0x28],1
	cmp eax,ebp
	je Block69

 Block68:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block69:
	mov ebx,dword ptr [esp+0x14]
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ebp,esp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [ebp],0
	test ebx,ebx
	je Block73

 Block70:
	mov eax,ebx
	lea edx,[eax+1]
	lea ebx,[ebx]

 Block71:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block71

 Block72:
	sub eax,edx
	mov edi,eax
	push edi
	push ebx
	push 0
	push edi
	mov ecx,ebp
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	mov ecx,ebp
	call ZXString<char>::ReleaseBuffer
	mov edi,dword ptr [esp+0x2C]

 Block73:
	call CUtilDlg::Notice
	mov esi,dword ptr [esi+0xBC0]
	add esp,0x14
	test esi,esi
	je Block75

 Block74:
	lea eax,[esi+4]
	jmp Block76

 Block75:
	xor eax,eax

 Block76:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov byte ptr [esp+0x28],0
	test edi,edi
	je Block78

 Block77:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block78:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test ebx,ebx
	je Block99

 Block79:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4
	jmp Block99

 Block80:
	xor eax,eax

 Block81:
	cmp eax,dword ptr [esi+0xF8]
	jge Block93

 Block82:
	lea eax,[esp+0x30]
	push 0x345
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xF8]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x34],8
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov byte ptr [esp+0x28],0
	cmp eax,ebp
	je Block84

 Block83:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block84:
	mov ebx,dword ptr [esp+0x14]
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov ebp,esp
	mov dword ptr [esp+0x44],esp
	mov dword ptr [ebp],0
	test ebx,ebx
	je Block88

 Block85:
	mov eax,ebx
	lea edx,[eax+1]
	nop

 Block86:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block86

 Block87:
	sub eax,edx
	mov edi,eax
	push edi
	push ebx
	push 0
	push edi
	mov ecx,ebp
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	mov ecx,ebp
	call ZXString<char>::ReleaseBuffer

 Block88:
	call CUtilDlg::Notice
	mov esi,dword ptr [esi+0xBC0]
	add esp,0x14
	test esi,esi
	je Block90

 Block89:
	lea eax,[esi+4]
	jmp Block91

 Block90:
	xor eax,eax

 Block91:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetFocus
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test ebx,ebx
	je Block99

 Block92:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4
	jmp Block99

 Block93:
	cmp dword ptr [esi+0x98],8
	jne Block96

 Block94:
	mov ecx,dword ptr [esi+0xBC8]
	lea eax,[esp+0x1C]
	push eax
	call CCtrlMLEdit::GetText
	push eax
	lea ecx,[esi+0x104]
	mov byte ptr [esp+0x2C],9
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x28],0
	cmp eax,ebp
	je Block96

 Block95:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block96:
	cmp dword ptr [esi+0x84],ebp
	jne Block99

 Block97:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [esi+0x80],ecx
	mov dword ptr [esi+0x84],1
	cmp dword ptr [esi+0x14],ebp
	je Block99

 Block98:
	mov ecx,esi
	call CWnd::Destroy

 Block99:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 4
}
}
// CUtilDlgEx::OnCreate_MLINPUT
_SUB_EXCEPTION_HANDLER(583D70)
__SUB_CLASS_THIS0(00583D70, __thiscall, 44605,  CUtilDlgEx, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_583D70
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
	mov esi,ecx
	lea ecx,[esp+0x40]
	call CCtrlMLEdit::CREATEPARAM::_ctor_default
	mov eax,dword ptr [esi+0xFC]
	lea ebp,[eax+eax*2]
	mov eax,dword ptr [esi+0x100]
	lea eax,[eax+eax*2]
	lea ecx,[eax*4+2]
	mov dword ptr [esp+0x14],ecx
	xor ebx,ebx
	lea ebp,[ebp+ebp+4]
	push 0xCC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x84],ebx
	mov dword ptr [esp+0x60],0xFFFFFFFF
	mov dword ptr [esp+0x58],0xFF000000
	mov dword ptr [esp+0x1C],ebp
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x80],1
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlMLEdit::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov byte ptr [esp+0x80],bl
	cmp eax,ebx
	je Block21

 Block4:
	add eax,8
	cmp eax,ebx
	je Block21

 Block5:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block7

 Block6:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [esi+0xBC8]
	mov dword ptr [esi+0xBC8],edi
	mov dword ptr [esp+0x24],eax
	cmp eax,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x24]
	call ZRef<CCtrlMLEdit>::_ReleaseRaw

 Block9:
	lea eax,[esi+0xE4]
	push eax
	lea ecx,[esp+0x44]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esi+0xFC]
	mov ecx,dword ptr [esi+0x100]
	mov edx,eax
	imul edx,ecx
	lea eax,[eax+eax*2]
	mov dword ptr [esp+0x68],edx
	lea edx,[eax+eax+2]
	lea eax,[esp+0x1C]
	push 0x1A25
	push eax
	mov dword ptr [esp+0x74],edx
	mov dword ptr [esp+0x78],ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea ecx,[esp+0x4C]
	cmp ecx,edi
	je Block14

 Block10:
	mov ecx,dword ptr [esp+0x4C]
	cmp ecx,ebx
	je Block12

 Block11:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x4C],ebx

 Block12:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x4C],edi
	cmp edi,ebx
	je Block14

 Block13:
	add edi,8
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,ebx
	je Block16

 Block15:
	call _xbstr_t::Data_t::Release

 Block16:
	mov ecx,dword ptr [esi+0xBC8]
	mov dword ptr [esp+0x64],ebx
	cmp dword ptr [esi+0xC0],ebx
	je Block29

 Block17:
	lea eax,[esp+0x40]
	push eax
	mov eax,dword ptr [esp+0x18]
	push eax
	mov eax,dword ptr [esi+0x28]
	push ebp
	sub eax,0x49
	push eax
	mov edi,2
	push 0x13
	mov dword ptr [esp+0x58],edi
	mov dword ptr [esp+0x5C],edi
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	push 0x3EB
	push esi
	call edx
	mov eax,dword ptr [esi+0xBC8]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x20],1
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x28],ebx
	lea eax,[esp+0x1C]
	push 0x512
	push eax
	mov byte ptr [esp+0x88],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x84],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x80],2
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x80],4
	cmp eax,ebx
	je Block22

 Block20:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block23

 Block21:
	xor edi,edi
	jmp Block7

 Block22:
	xor eax,eax

 Block23:
	push eax
	lea ecx,[esi+0xBDC]
	mov byte ptr [esp+0x84],2
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xBE0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [esi+0x28]
	push ebx
	sub eax,0x1E
	push eax
	push 0xB0
	push 1
	push esi
	call edx
	lea eax,[esp+0x1C]
	push 0x513
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x84],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x80],2
	cmp eax,ebx
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x80],6
	cmp eax,ebx
	je Block27

 Block26:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block28

 Block27:
	xor eax,eax

 Block28:
	push eax
	lea ecx,[esi+0xBE4]
	mov byte ptr [esp+0x84],2
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xBE8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [esi+0x28]
	push ebx
	sub eax,0x1E
	push eax
	push 0xDA
	push edi
	push esi
	call edx
	mov eax,dword ptr [esp+0x2C]
	jmp Block50

 Block29:
	mov edi,dword ptr [esi+0xA4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x40]
	push edx
	mov edx,dword ptr [esp+0x18]
	push edx
	mov edx,dword ptr [esi+0xA0]
	lea edx,[edx+edi+5]
	add ebp,0xFFFFFFFE
	push ebp
	push edx
	mov edx,dword ptr [esi+0x9C]
	add edx,2
	push edx
	push 0x3EB
	push esi
	call eax
	mov eax,dword ptr [esi+0xBC8]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	mov dword ptr [esp+0x3C],ebx
	mov dword ptr [esp+0x30],1
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x38],ebx
	lea ecx,[esp+0x1C]
	push 0x8FD
	push ecx
	mov byte ptr [esp+0x88],7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push offset _S_UIUIWINDOW2IMGUT
	lea edx,[esp+0x44]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x8C],8
	call CUtilDlgEx::MakeUOLByUIType
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x80],7
	cmp eax,ebx
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block31:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x80],9
	cmp eax,ebx
	je Block33

 Block32:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block34

 Block33:
	xor eax,eax

 Block34:
	push eax
	lea ecx,[esi+0xBDC]
	mov byte ptr [esp+0x84],7
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xBE0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x30]
	push edx
	mov edx,dword ptr [esi+0x28]
	push ebx
	sub edx,0x18
	push edx
	mov edx,dword ptr [esi+0x24]
	sub edx,0x30
	push edx
	push 1
	push esi
	call eax
	test byte ptr [esi+0xC34],1
	jne Block41

 Block35:
	lea ecx,[esp+0x1C]
	push 0x8FF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push offset _S_UIUIWINDOW2IMGUT
	lea edx,[esp+0x44]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x8C],0xA
	call CUtilDlgEx::MakeUOLByUIType
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x80],7
	cmp eax,ebx
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block37:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x80],0xB
	cmp eax,ebx
	je Block39

 Block38:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block40

 Block39:
	xor eax,eax

 Block40:
	push eax
	lea ecx,[esi+0xBE4]
	mov byte ptr [esp+0x84],7
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xBE8]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x30]
	push edx
	mov edx,dword ptr [esi+0x28]
	push ebx
	sub edx,0x18
	push edx
	push 9
	push 2
	push esi
	call eax

 Block41:
	mov edi,dword ptr [esi+0x78]
	cmp edi,ebx
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	mov ebp,dword ptr [esp+0x14]
	mov edx,dword ptr [esi+0xA4]
	mov ecx,dword ptr [esi+0xA0]
	mov eax,dword ptr [esi+0x9C]
	push 0xFF000000
	add ebp,4
	push ebp
	mov ebp,dword ptr [esp+0x20]
	lea ecx,[ecx+edx+2]
	mov edx,dword ptr [edi]
	add ebp,3
	push ebp
	dec eax
	push ecx
	push eax
	mov eax,dword ptr [edx+0x8C]
	push edi
	call eax
	cmp eax,ebx
	jge Block45

 Block44:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block45:
	mov edi,dword ptr [esi+0x78]
	cmp edi,ebx
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	mov ecx,dword ptr [esi+0xA0]
	mov edx,dword ptr [esi+0xA4]
	mov esi,dword ptr [esi+0x9C]
	lea eax,[ecx+edx+3]
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edi]
	push 0xFFFFFFFF
	add edx,2
	push edx
	mov edx,dword ptr [esp+0x20]
	inc edx
	push edx
	push eax
	mov eax,dword ptr [ecx+0x8C]
	push esi
	push edi
	call eax
	cmp eax,ebx
	jge Block49

 Block48:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block49:
	mov eax,dword ptr [esp+0x3C]

 Block50:
	mov byte ptr [esp+0x80],bl
	cmp eax,ebx
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block52:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp ecx,ebx
	je Block54

 Block53:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x4C],ebx

 Block54:
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	je Block56

 Block55:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block56:
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret
}
}
// CUtilDlgEx::ApplyComboBoxItemList
_SUB_EXCEPTION_HANDLER(58EFC0)
__SUB_CLASS_THIS(0058EFC0, __thiscall, 44628,  CUtilDlgEx, void, ZList<ZXString<char> >&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_58EFC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x30]
	mov ecx,edi
	call ZList<ZXString<char>>::RemoveAll
	mov ecx,dword ptr [esi+0xBD8]
	lea eax,[esp+0xC]
	push eax
	call CCtrlComboBox::GetItemList
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],0
	mov dword ptr [esp+0x30],eax
	test eax,eax
	je Block2

 Block1:
	lea ecx,[esp+0x30]
	push ecx
	call ZList<CCtrlComboBox::ITEM_INFO>::GetNext
	add esp,4
	mov ecx,edi
	mov esi,eax
	call ZList<ZXString<char>>::AddTail_
	push esi
	mov ecx,eax
	call ZXString<char>::op_assign
	cmp dword ptr [esp+0x30],0
	jne Block1

 Block2:
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0xC],offset ZList<CCtrlComboBox::ITEM_INFO>::`vftable'
	call ZList<CCtrlComboBox::ITEM_INFO>::RemoveAll
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 4
}
}
// CTextAnalyzer::GetLine
__SUB_CLASS_THIS(0057B5A0, __thiscall, 44481,  CTextAnalyzer, void, long, long&, long&, long&, ZArray<CT_INFO>&) {
__asm {

 Block0:
	push ecx
	push ebp
	mov ebp,dword ptr [esp+0x18]
	push esi
	push edi
	mov edi,dword ptr [esp+0x24]
	mov ecx,edi
	mov dword ptr [ebp],0
	mov dword ptr [esp+0x20],0x7FFFFFFF
	mov dword ptr [esp+0xC],0x80000000
	xor esi,esi
	call ZArray<CT_INFO>::GetCount
	test eax,eax
	jbe Block14

 Block1:
	push ebx
	xor ebx,ebx

 Block2:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [esp+0x18]
	add eax,ebx
	cmp dword ptr [eax+8],ecx
	jne Block9

 Block3:
	cmp dword ptr [esp+0x24],esi
	jl Block5

 Block4:
	mov dword ptr [esp+0x24],esi

 Block5:
	cmp dword ptr [esp+0x10],esi
	jg Block7

 Block6:
	mov dword ptr [esp+0x10],esi

 Block7:
	mov eax,dword ptr [eax+0x24]
	cmp eax,dword ptr [ebp]
	jle Block9

 Block8:
	mov dword ptr [ebp],eax

 Block9:
	mov ecx,edi
	inc esi
	add ebx,0x44
	call ZArray<CT_INFO>::GetCount
	cmp esi,eax
	jb Block2

 Block10:
	mov ecx,dword ptr [esp+0x24]
	pop ebx
	cmp ecx,0x7FFFFFFF
	je Block14

 Block11:
	mov eax,dword ptr [esp+0xC]
	cmp eax,0x80000000
	je Block14

 Block12:
	mov edx,dword ptr [esp+0x18]
	mov dword ptr [edx],ecx
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [ecx],eax
	cmp dword ptr [ebp],0x10
	jge Block15

 Block13:
	pop edi
	pop esi
	mov dword ptr [ebp],0x10
	pop ebp
	pop ecx
	ret 0x14

 Block14:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [edx],0xFFFFFFFF
	mov dword ptr [eax],0xFFFFFFFF

 Block15:
	pop edi
	pop esi
	pop ebp
	pop ecx
	ret 0x14
}
}
// CUtilDlgEx::CheckMousePoint
_SUB_EXCEPTION_HANDLER(57E5D0)
__SUB_CLASS_THIS(0057E5D0, __thiscall, 44640,  CUtilDlgEx, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_57E5D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x28],0xFFFFFFFF
	mov dword ptr [esp+0x1C],ebp
	mov dword ptr [esp+0x34],ebp
	mov dword ptr [esp+0x20],ebp
	mov dword ptr [esp+0x14],ebp
	mov dword ptr [esp+0x18],ebp
	jmp Block2

 Block2:
	mov eax,dword ptr [edi+0xC18]
	cmp eax,ebp
	je Block20

 Block3:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,dword ptr [eax-4]
	jae Block20

 Block4:
	mov ebx,dword ptr [edi+0xAC]
	mov esi,eax
	add esi,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi+0x1C]
	mov eax,ecx
	sub eax,ebx
	cmp eax,0xFFFFFFD0
	jl Block19

 Block5:
	mov edx,dword ptr [edi+0xA8]
	add edx,0x18
	cmp eax,edx
	jge Block19

 Block6:
	mov eax,dword ptr [edi+0x9C]
	mov edx,dword ptr [esi+0x18]
	lea ebp,[edx+eax]
	cmp ebp,dword ptr [esp+0x3C]
	jge Block19

 Block7:
	mov ebp,dword ptr [esi+0x20]
	add ebp,edx
	lea eax,[eax+ebp+8]
	cmp dword ptr [esp+0x3C],eax
	jge Block19

 Block8:
	mov eax,dword ptr [edi+0xA0]
	mov edx,dword ptr [esp+0x40]
	sub eax,ebx
	lea ebx,[eax+ecx]
	cmp ebx,edx
	jge Block19

 Block9:
	mov ebx,dword ptr [esi+0x24]
	add ebx,eax
	add ebx,ecx
	cmp edx,ebx
	jge Block19

 Block10:
	mov eax,dword ptr [esi+4]
	test eax,eax
	jne Block12

 Block11:
	cmp dword ptr [esi],1
	jne Block17

 Block12:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,dword ptr [edi+0xC24]
	jle Block14

 Block13:
	cmp dword ptr [esi+0x28],0xFFFFFFFF
	je Block17

 Block14:
	test eax,eax
	je Block16

 Block15:
	mov dword ptr [esp+0x20],eax
	jmp Block17

 Block16:
	lea edx,[esi+0x10]
	push edx
	lea ecx,[esp+0x20]
	call ZXString<char>::op_assign

 Block17:
	mov esi,dword ptr [esi+0x28]
	cmp esi,0xFFFFFFFF
	je Block19

 Block18:
	mov dword ptr [esp+0x28],esi

 Block19:
	inc dword ptr [esp+0x14]
	add dword ptr [esp+0x18],0x44
	xor ebp,ebp
	jmp Block2

 Block20:
	mov ebx,dword ptr [esp+0x1C]
	cmp ebx,ebp
	je Block22

 Block21:
	cmp byte ptr [ebx],0
	jne Block29

 Block22:
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block28

 Block23:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[esp+0x24]
	push eax
	call CItemInfo::GetItemSlot
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x30]
	push ebp
	push ebp
	push ebp
	push ebp
	lea esi,[edi+4]
	push ebp
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x4C],1
	call eax
	mov ecx,dword ptr [esp+0x58]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x58]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[edi+0x16C]
	call CUIToolTip::ShowItemToolTip
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x34],0
	cmp eax,ebp
	je Block30

 Block24:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x24]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x24]
	cmp ecx,ebp
	je Block27

 Block26:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block27:
	mov dword ptr [esp+0x24],ebp
	jmp Block30

 Block28:
	lea ecx,[edi+0x16C]
	call CUIToolTip::ClearToolTip
	jmp Block30

 Block29:
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x30]
	lea esi,[edi+4]
	push ebx
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x44]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x44]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[edi+0x16C]
	call CUIToolTip::SetToolTip_String

 Block30:
	mov eax,dword ptr [esp+0x28]
	cmp dword ptr [edi+0x110],eax
	je Block32

 Block31:
	push ebp
	mov ecx,edi
	mov dword ptr [edi+0x110],eax
	call CWnd::InvalidateRect

 Block32:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp ebx,ebp
	je Block34

 Block33:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block34:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 8
}
}
// CUtilDlgEx::SetUtilDlgEx_YESNO
__SUB_CLASS_THIS0(0057B480, __thiscall, 44605,  CUtilDlgEx, void) {
__asm {

 Block0:
	push 0
	call CUtilDlgEx::Layout_GEN
	ret
}
}
// ask_SPW
_SUB_EXCEPTION_HANDLER(583210)
__SUB0(00583210, __cdecl, 80495,  ZXString<char>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_583210
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
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x24],ebx
	push 0xC74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x34],1
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x30],2
	cmp eax,ebx
	je Block17

 Block1:
	push 0x10
	push 6
	mov ecx,eax
	call CSoftKeyboardDlg::_ctor_0
	cmp eax,ebx
	je Block17

 Block2:
	add eax,8
	cmp eax,ebx
	je Block17

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x1C],esi
	cmp esi,ebx
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call ebp

 Block5:
	mov byte ptr [esp+0x30],3
	cmp esi,ebx
	je Block18

 Block6:
	lea eax,[esi+8]
	cmp eax,ebx
	je Block18

 Block7:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block9

 Block8:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block9:
	mov ebp,edi
	mov ecx,esi
	mov dword ptr [esp+0x24],ebp
	call CDialog::DoModal
	cmp eax,1
	je Block19

 Block10:
	cmp edi,ebx
	je Block12

 Block11:
	push ebx
	lea ecx,[esp+0x24]
	call ZRef<CDialog>::_ReleaseRaw
	xor ebp,ebp
	mov dword ptr [esp+0x24],ebp

 Block12:
	mov edi,dword ptr [esp+0x38]
	push ebx
	push offset _S_
	push ebx
	push ebx
	mov ecx,edi
	mov dword ptr [edi],ebx
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer
	mov dword ptr [esp+0x14],1
	mov byte ptr [esp+0x30],1
	cmp esi,ebx
	je Block14

 Block13:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CSoftKeyboardDlg>::_ReleaseRaw

 Block14:
	mov byte ptr [esp+0x30],bl
	cmp ebp,ebx
	je Block16

 Block15:
	push ebx
	lea ecx,[esp+0x24]
	call ZRef<CDialog>::_ReleaseRaw

 Block16:
	mov eax,edi
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret

 Block17:
	xor esi,esi
	mov dword ptr [esp+0x1C],esi
	jmp Block5

 Block18:
	xor edi,edi
	jmp Block9

 Block19:
	mov ebp,dword ptr [esp+0x38]
	push ebp
	mov ecx,esi
	call CSoftKeyboardDlg::GetResult
	mov dword ptr [esp+0x14],1
	mov byte ptr [esp+0x30],1
	cmp esi,ebx
	je Block21

 Block20:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CSoftKeyboardDlg>::_ReleaseRaw

 Block21:
	mov byte ptr [esp+0x30],bl
	cmp edi,ebx
	je Block23

 Block22:
	push ebx
	lea ecx,[esp+0x24]
	call ZRef<CDialog>::_ReleaseRaw

 Block23:
	mov eax,ebp
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret
}
}
// CUtilDlgEx::CreateUtilDlgEx
__SUB_CLASS_THIS0(0057AF20, __thiscall, 44605,  CUtilDlgEx, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xB8]
	mov edx,dword ptr [ecx+0xB4]
	push 0
	push 1
	push eax
	push edx
	call CDialog::CreateDlg_1
	ret
}
}
// CUtilDlgEx::Draw
_SUB_EXCEPTION_HANDLER(586C20)
__SUB_CLASS_THIS(00586C20, __thiscall, 44614,  CUtilDlgEx, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_586C20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC0
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [ebp+0x70]
	push eax
	call CWnd::Draw
	lea ecx,[ebp+0x5C]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov edx,3
	mov ebx,1
	mov dword ptr [ebp-4],0
	mov word ptr [ebp],dx
	mov dword ptr [ebp+8],ebx
	mov edx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],bl
	test edx,edx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [esi+0xA8]
	lea eax,[ebp]
	push eax
	push ecx
	mov ecx,esi
	call CUtilDlgEx::GetBasicCTWidth
	mov ecx,dword ptr [esi+0x9C]
	sub eax,2
	push eax
	mov eax,dword ptr [esi+0xA0]
	add eax,ebx
	push eax
	add ecx,ebx
	push ecx
	lea eax,[ebp-0x2C]
	push eax
	mov ecx,edx
	call IWzCanvas::SetClipRect
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],3
	jne Block5

 Block3:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	test eax,eax
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block6:
	xor ecx,ecx

 Block7:
	mov eax,dword ptr [esi+0xC18]
	mov dword ptr [ebp+0x40],ecx
	test eax,eax
	je Block99

 Block8:
	cmp ecx,dword ptr [eax-4]
	jae Block99

 Block9:
	mov eax,ecx
	shl eax,4
	add eax,ecx
	test byte ptr [esi+0xC34],2
	mov ecx,dword ptr [esi+0xC18]
	lea edi,[ecx+eax*4]
	je Block12

 Block10:
	mov eax,dword ptr [esi+0x11C]
	test eax,eax
	je Block12

 Block11:
	mov dword ptr [ebp+0x54],ebx
	cmp dword ptr [eax-4],ebx
	je Block13

 Block12:
	mov dword ptr [ebp+0x54],0

 Block13:
	mov eax,dword ptr [edi+0x1C]
	mov ecx,dword ptr [esi+0xAC]
	mov edx,eax
	sub edx,ecx
	cmp edx,0xFFFFFFD0
	jl Block98

 Block14:
	mov ebx,dword ptr [esi+0xA8]
	add ebx,0x18
	cmp edx,ebx
	jge Block98

 Block15:
	mov edx,dword ptr [edi]
	cmp edx,4
	ja Block92

 Block16:
	cmp EDX, 0
je Block17
cmp EDX, 1
je Block62
cmp EDX, 2
je Block66
cmp EDX, 3
je Block69
cmp EDX, 4
je Block80


 Block17:
	mov eax,dword ptr [edi+0x28]
	cmp eax,0xFFFFFFFF
	jne Block40

 Block18:
	cmp dword ptr [edi+0x38],0
	jne Block39

 Block19:
	mov eax,dword ptr [esi+0xC0]
	test eax,eax
	jne Block38

 Block20:
	mov edx,dword ptr [ebp+0x40]
	cmp edx,dword ptr [esi+0xC24]
	jg Block92

 Block21:
	test eax,eax
	jne Block38

 Block22:
	mov eax,edx
	cmp eax,dword ptr [esi+0xC24]
	jne Block38

 Block23:
	lea ebx,[edi+0x10]
	mov ecx,ebx
	call ZXString<char>::IsEmpty
	test eax,eax
	je Block25

 Block24:
	mov eax,offset _S___3
	jmp Block26

 Block25:
	mov eax,dword ptr [ebx]
	push 0xFFFFFFFF
	push 0
	push eax
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov ebx,dword ptr [ebx]
	mov eax,esp
	push 0xFFFFFFFF
	push eax
	push ebx
	call ZStrUtil::_Conv_0
	add esp,0xC

 Block26:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x60]
	call ZXString16::CreateFromCStr
	mov ecx,dword ptr [ebp+0x60]
	mov ebx,dword ptr [esi+0xC28]
	mov byte ptr [ebp-4],8
	test ecx,ecx
	je Block28

 Block27:
	mov eax,dword ptr [ecx-4]
	shr eax,1
	jmp Block29

 Block28:
	xor eax,eax

 Block29:
	cmp ebx,eax
	jle Block32

 Block30:
	inc dword ptr [esi+0xC24]
	xor ebx,ebx
	mov dword ptr [esi+0xC28],ebx
	cmp ecx,ebx
	je Block32

 Block31:
	mov ebx,dword ptr [ecx-4]
	shr ebx,1

 Block32:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x7C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x9C]
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::_ctor_1
	push ebx
	lea ecx,[ebp+0x24]
	push ecx
	lea ecx,[ebp+0x60]
	mov byte ptr [ebp-4],0xA
	call ZXString16::Left
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push 0
	push eax
	mov byte ptr [ebp-4],0xB
	call ZStrUtil::_ConvReqSize_1
	add esp,0xC
	call __alloca_probe_16
	mov dword ptr [ebp+0x54],esp
	lea edx,[ebp-0x7C]
	push edx
	lea eax,[ebp-0x9C]
	push eax
	mov eax,dword ptr [edi+0xC]
	push eax
	push ebx
	lea ecx,[ebp+0x20]
	push ecx
	lea ecx,[ebp+0x60]
	call ZXString16::Left
	mov edx,dword ptr [ebp+0x54]
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push edx
	push eax
	mov byte ptr [ebp-4],0xC
	call ZStrUtil::_Conv_1
	add esp,8
	mov ecx,esp
	mov dword ptr [ebp+0x54],esp
	push eax
	call Ztl_bstr_t::_ctor_1
	mov eax,dword ptr [edi+0x1C]
	sub eax,dword ptr [esi+0xAC]
	mov ecx,dword ptr [edi+0x18]
	add eax,dword ptr [esi+0xA0]
	add ecx,dword ptr [esi+0x9C]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0xD
	mov byte ptr [ebp-4],0xC
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block34:
	mov eax,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],0xA
	test eax,eax
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block36:
	lea ecx,[ebp-0x9C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x7C]
	call Ztl_variant_t::~Ztl_variant_t
	cmp dword ptr [ebp+0x60],0
	mov byte ptr [ebp-4],3
	je Block92

 Block37:
	mov edx,dword ptr [ebp+0x60]
	add edx,0xFFFFFFF4
	push edx
	call ZXString16::_Release
	add esp,4
	jmp Block92

 Block38:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x5C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0xBC]
	mov byte ptr [ebp-4],0xE
	call Ztl_variant_t::_ctor_1
	lea eax,[ebp-0x5C]
	push eax
	mov eax,dword ptr [edi+0xC]
	lea ecx,[ebp-0xBC]
	push ecx
	push eax
	mov eax,dword ptr [edi+0x10]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x54],esp
	push eax
	mov byte ptr [ebp-4],0xF
	call Ztl_bstr_t::_ctor_1
	mov edx,dword ptr [edi+0x1C]
	sub edx,dword ptr [esi+0xAC]
	mov eax,dword ptr [edi+0x18]
	add edx,dword ptr [esi+0xA0]
	add eax,dword ptr [esi+0x9C]
	mov ecx,dword ptr [ebp+0x5C]
	push edx
	mov byte ptr [ebp-4],0x10
	push eax
	mov byte ptr [ebp-4],0xF
	call IWzCanvas::DrawTextA
	lea ecx,[ebp-0xBC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x5C]
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block92

 Block39:
	cmp eax,0xFFFFFFFF
	je Block45

 Block40:
	mov ecx,dword ptr [esi+0x118]
	mov edx,dword ptr [esi+0x11C]
	mov ecx,dword ptr [edx+ecx*4]
	cmp eax,dword ptr [ecx+0x28]
	jne Block45

 Block41:
	cmp dword ptr [ebp+0x54],0
	jne Block45

 Block42:
	mov ecx,dword ptr [edi+0x20]
	add ecx,8
	mov eax,0x55555556
	imul ecx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	test eax,eax
	jle Block45

 Block43:
	dec eax
	shr eax,1
	xor ebx,ebx
	inc eax
	mov dword ptr [ebp+0x54],eax
	lea ebx,[ebx]

 Block44:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x6C]
	call Ztl_variant_t::_ctor_1
	mov edx,dword ptr [edi+0x1C]
	sub edx,dword ptr [esi+0xAC]
	mov eax,dword ptr [edi+0x2C]
	add edx,dword ptr [esi+0xA0]
	mov ecx,dword ptr [edi+0x18]
	add eax,edx
	mov edx,dword ptr [esi+0x9C]
	add ecx,ebx
	add ecx,edx
	lea edx,[ebp-0x6C]
	push edx
	push 0xFF919191
	push eax
	lea edx,[ecx+3]
	push edx
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],4
	call IWzCanvas::DrawLine
	lea ecx,[ebp-0x6C]
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::~Ztl_variant_t
	add ebx,6
	sub dword ptr [ebp+0x54],1
	jne Block44

 Block45:
	mov eax,dword ptr [edi+0x28]
	cmp eax,0xFFFFFFFF
	je Block48

 Block46:
	cmp eax,dword ptr [esi+0x110]
	jne Block48

 Block47:
	mov ecx,dword ptr [edi+0x2C]
	sub ecx,dword ptr [esi+0xAC]
	mov eax,dword ptr [edi+0x20]
	add ecx,dword ptr [edi+0x1C]
	mov edx,dword ptr [edi+0x18]
	add ecx,dword ptr [esi+0xA0]
	add edx,dword ptr [esi+0x9C]
	push 0xFF000000
	push 1
	add eax,8
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x5C]
	push edx
	call IWzCanvas::DrawRectangle

 Block48:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x10]
	push eax
	call ebx
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block109

 Block49:
	lea edx,[ebp-0x1C]
	push edx
	mov byte ptr [ebp-4],5
	call ebx
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block109

 Block50:
	mov eax,dword ptr [edi+0xC]
	lea ecx,[ebp+0x10]
	push ecx
	lea edx,[ebp-0x1C]
	push edx
	push eax
	mov eax,dword ptr [edi+0x10]
	push ecx
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],6
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [edi+0x1C]
	sub eax,dword ptr [esi+0xAC]
	mov ecx,dword ptr [edi+0x18]
	add eax,dword ptr [esi+0xA0]
	add ecx,dword ptr [esi+0x9C]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],7
	mov byte ptr [ebp-4],6
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x1C],bx
	jne Block53

 Block51:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp+0x10],bx
	jne Block58

 Block55:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx

 Block56:
	test eax,eax
	je Block60

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block58:
	lea edx,[ebp+0x10]

 Block59:
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov eax,dword ptr [esi+0xC24]
	cmp eax,dword ptr [ebp+0x40]
	jne Block92

 Block61:
	inc eax
	mov dword ptr [esi+0xC24],eax
	mov dword ptr [esi+0xC28],0
	jmp Block92

 Block62:
	cmp dword ptr [edi+0x28],0xFFFFFFFF
	jne Block65

 Block63:
	cmp dword ptr [edi+0x38],0
	jne Block65

 Block64:
	mov edx,dword ptr [ebp+0x40]
	cmp edx,dword ptr [esi+0xC24]
	jg Block60

 Block65:
	mov edx,3
	mov word ptr [ebp-0x4C],dx
	mov dword ptr [ebp-0x44],0xFF
	mov edx,dword ptr [edi+0x14]
	lea ebx,[ebp-0x4C]
	push ebx
	push edx
	mov edx,dword ptr [esi+0xA0]
	sub edx,ecx
	mov ecx,dword ptr [ebp+0x5C]
	add edx,eax
	mov eax,dword ptr [edi+0x18]
	add eax,dword ptr [esi+0x9C]
	push edx
	push eax
	mov byte ptr [ebp-4],0x11
	call IWzCanvas::Copy
	mov ecx,ebx
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block60

 Block66:
	mov edx,3
	mov word ptr [ebp+0x2C],dx
	mov dword ptr [ebp+0x34],0xFF
	mov edx,dword ptr [edi+0x14]
	lea ebx,[ebp+0x2C]
	push ebx
	push edx
	mov edx,dword ptr [esi+0xA0]
	sub edx,ecx
	mov ecx,dword ptr [ebp+0x5C]
	add edx,eax
	mov eax,dword ptr [edi+0x18]
	add eax,dword ptr [esi+0x9C]
	push edx
	push eax
	mov byte ptr [ebp-4],0x12
	call IWzCanvas::Copy
	cmp word ptr [ebp+0x2C],8
	mov byte ptr [ebp-4],3
	jne Block68

 Block67:
	mov eax,dword ptr [ebp+0x34]
	xor ecx,ecx
	mov word ptr [ebp+0x2C],cx
	jmp Block56

 Block68:
	lea edx,[ebp+0x2C]
	jmp Block59

 Block69:
	mov ecx,dword ptr [esi+0xC24]
	mov ebx,dword ptr [ebp+0x40]
	cmp ebx,ecx
	je Block73

 Block70:
	mov eax,dword ptr [esi+0xC18]
	test eax,eax
	je Block72

 Block71:
	mov eax,dword ptr [eax-4]

 Block72:
	cmp ecx,eax
	jne Block92

 Block73:
	mov eax,dword ptr [edi+0x34]
	test eax,eax
	jl Block76

 Block74:
	cmp eax,4
	jge Block76

 Block75:
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 1
	push eax
	call CUIStatusBar::SetButtonBlink

 Block76:
	mov eax,dword ptr [esi+0xC18]
	test eax,eax
	je Block78

 Block77:
	mov eax,dword ptr [eax-4]

 Block78:
	cmp ebx,eax
	je Block92

 Block79:
	inc dword ptr [esi+0xC24]
	mov dword ptr [esi+0xC28],0
	jmp Block92

 Block80:
	cmp dword ptr [ebp+0x54],0
	jne Block92

 Block81:
	push offset _S_UIUIWINDOW2IMGUT__22
	lea ecx,[ebp+0x28]
	call _xbstr_t::_ctor_1
	mov eax,dword ptr [edi+0x28]
	mov byte ptr [ebp-4],0x13
	cmp eax,dword ptr [esi+0x110]
	je Block83

 Block82:
	mov ecx,dword ptr [esi+0x118]
	mov edx,dword ptr [esi+0x11C]
	mov ecx,dword ptr [edx+ecx*4]
	cmp eax,dword ptr [ecx+0x28]
	jne Block85

 Block83:
	push offset _S_UIUIWINDOW2IMGUT__21
	lea ecx,[ebp+0x3C]
	call _xbstr_t::_ctor_1
	lea edx,[ebp+0x3C]
	push edx
	lea ecx,[ebp+0x28]
	call Ztl_bstr_t::op_assign
	mov ecx,dword ptr [ebp+0x3C]
	test ecx,ecx
	je Block85

 Block84:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x3C],0

 Block85:
	push offset _D_VTMISSING
	lea ecx,[ebp-0xAC]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x8C]
	mov byte ptr [ebp-4],0x14
	call Ztl_variant_t::_ctor_1
	push 0
	push 0
	lea eax,[ebp-0xAC]
	push eax
	lea ecx,[ebp-0x8C]
	push ecx
	push ecx
	lea edx,[ebp+0x28]
	mov ecx,esp
	mov dword ptr [ebp+0x54],esp
	push edx
	call Ztl_bstr_t::_ctor_copy
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x16
	je Block1

 Block86:
	lea eax,[ebp-0xCC]
	mov byte ptr [ebp-4],0x15
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x17
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	call _x_com_ptr<IWzCanvas>::CreateFromUnknown
	lea ecx,[ebp-0xCC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x8C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0xAC]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,3
	mov word ptr [ebp-0x3C],cx
	mov dword ptr [ebp-0x34],0xFF
	mov eax,dword ptr [edi+0x1C]
	sub eax,dword ptr [esi+0xAC]
	mov ecx,dword ptr [esi+0xA0]
	mov ebx,dword ptr [ebp+0x58]
	lea edx,[ebp-0x3C]
	push edx
	lea edx,[eax+ecx+2]
	mov ecx,dword ptr [esi+0x9C]
	mov eax,dword ptr [edi+0x18]
	push ebx
	push edx
	lea edx,[eax+ecx+0xA]
	mov ecx,dword ptr [ebp+0x5C]
	push edx
	mov byte ptr [ebp-4],0x1C
	call IWzCanvas::Copy
	lea ecx,[ebp-0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esi+0xC24]
	cmp eax,dword ptr [ebp+0x40]
	jne Block88

 Block87:
	inc eax
	mov dword ptr [esi+0xC24],eax
	mov dword ptr [esi+0xC28],0

 Block88:
	mov byte ptr [ebp-4],0x13
	test ebx,ebx
	je Block90

 Block89:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block90:
	mov ecx,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],3
	test ecx,ecx
	je Block92

 Block91:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x28],0

 Block92:
	cmp dword ptr [edi+0x28],0
	jne Block98

 Block93:
	cmp dword ptr [edi+8],0
	jne Block98

 Block94:
	mov edx,3
	mov word ptr [ebp+0x44],dx
	mov dword ptr [ebp+0x4C],0xFF
	mov eax,dword ptr [esi+0x130]
	mov edx,dword ptr [edi+0x1C]
	sub edx,dword ptr [esi+0xAC]
	lea ecx,[ebp+0x44]
	push ecx
	push eax
	mov eax,dword ptr [esi+0xA0]
	lea ecx,[edx+eax-0xA]
	mov edx,dword ptr [esi+0x9C]
	push ecx
	mov ecx,dword ptr [ebp+0x5C]
	push edx
	mov byte ptr [ebp-4],0x1D
	call IWzCanvas::Copy
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],3
	jne Block97

 Block95:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [ebp+0x40]
	mov ebx,1
	add ecx,ebx
	jmp Block7

 Block97:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	mov ecx,dword ptr [ebp+0x40]
	mov ebx,1
	add ecx,ebx
	jmp Block7

 Block99:
	mov eax,dword ptr [esi+0xC18]
	test eax,eax
	je Block101

 Block100:
	mov eax,dword ptr [eax-4]

 Block101:
	cmp dword ptr [esi+0xC24],eax
	jb Block103

 Block102:
	mov dword ptr [esi+0xC2C],ebx

 Block103:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0
	jne Block106

 Block104:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block107:
	cmp dword ptr [esi+0x98],6
	jne Block178

 Block108:
	mov dword ptr [ebp+0x60],0
	mov eax,dword ptr [esi+0x160]
	mov edx,dword ptr [esi+0x15C]
	lea ecx,[eax+eax*4]
	lea eax,[ebp+0x44]
	lea edi,[edx+ecx*4]
	push eax
	mov byte ptr [ebp-4],0x1E
	mov dword ptr [ebp+0x3C],edi
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x44]
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
	mov eax,dword ptr [edi+4]
	lea edx,[ebp+0x44]
	push edx
	push ecx
	mov dword ptr [ebp+0x24],esp
	mov ecx,esp
	mov bl,0x1F
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	lea eax,[ebp+0x58]
	push 0x16
	push eax
	mov byte ptr [ebp-4],0x20
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x21
	test ecx,ecx
	jne Block112

 Block111:
	push 0x80004003
	call _com_issue_error

 Block112:
	mov byte ptr [ebp-4],0x22
	call IWzFont::CalcTextWidth
	mov edi,eax
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block114

 Block113:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block114:
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0x1E
	jne Block117

 Block115:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block118:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x2C]
	push edx
	call ebx
	lea eax,[ebp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block120

 Block119:
	push eax
	call _com_issue_error

 Block120:
	lea ecx,[ebp+0x44]
	push ecx
	mov byte ptr [ebp-4],0x23
	call ebx
	lea edx,[ebp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block122

 Block121:
	push eax
	call _com_issue_error

 Block122:
	lea eax,[ebp+0x2C]
	push eax
	lea ecx,[ebp+0x44]
	push ecx
	lea edx,[ebp+0x58]
	push 0x16
	push edx
	mov byte ptr [ebp-4],0x24
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [ebp+0x3C]
	mov eax,dword ptr [eax+4]
	push ecx
	mov dword ptr [ebp+0x24],esp
	mov ecx,esp
	mov bl,0x25
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov eax,edi
	cdq
	sub eax,edx
	sar eax,1
	mov ecx,0xBC
	sub ecx,eax
	push 0xC3
	push ecx
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x26
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x24
	test eax,eax
	je Block124

 Block123:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block124:
	mov edi,8
	mov byte ptr [ebp-4],0x23
	cmp word ptr [ebp+0x44],di
	jne Block127

 Block125:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	test eax,eax
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block128:
	mov byte ptr [ebp-4],0x1E
	cmp word ptr [ebp+0x2C],di
	jne Block131

 Block129:
	xor eax,eax
	mov word ptr [ebp+0x2C],ax
	mov eax,dword ptr [ebp+0x34]
	test eax,eax
	je Block132

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block131:
	lea ecx,[ebp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block132:
	lea edx,[ebp+0x58]
	push 0x1A15
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x3C]
	mov edx,dword ptr [ecx+8]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp+0x60]
	push eax
	mov byte ptr [ebp-4],0x27
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x58]
	add esp,0xC
	mov byte ptr [ebp-4],0x1E
	test eax,eax
	je Block134

 Block133:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block134:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block136

 Block135:
	push eax
	call _com_issue_error

 Block136:
	mov edx,dword ptr [ebp+0x60]
	lea eax,[ebp+0x44]
	push eax
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	mov bl,0x28
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0xC20]
	mov byte ptr [ebp-4],0x29
	test ecx,ecx
	jne Block138

 Block137:
	push 0x80004003
	call _com_issue_error

 Block138:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+0x44],8
	mov edi,eax
	mov byte ptr [ebp-4],0x1E
	jne Block141

 Block139:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block142

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block142

 Block141:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block142:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x2C]
	push edx
	call ebx
	lea eax,[ebp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block144

 Block143:
	push eax
	call _com_issue_error

 Block144:
	lea ecx,[ebp+0x44]
	push ecx
	mov byte ptr [ebp-4],0x2A
	call ebx
	lea edx,[ebp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block146

 Block145:
	push eax
	call _com_issue_error

 Block146:
	mov edx,dword ptr [ebp+0x60]
	lea eax,[ebp+0x2C]
	push eax
	mov eax,dword ptr [esi+0xC20]
	lea ecx,[ebp+0x44]
	push ecx
	push eax
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	mov bl,0x2B
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov eax,edi
	cdq
	sub eax,edx
	sar eax,1
	mov ecx,0xA6
	sub ecx,eax
	push 0xD4
	push ecx
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x2C
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0x2A
	jne Block149

 Block147:
	mov eax,dword ptr [ebp+0x4C]
	xor edx,edx
	mov word ptr [ebp+0x44],dx
	test eax,eax
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea eax,[ebp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block150:
	cmp word ptr [ebp+0x2C],8
	mov byte ptr [ebp-4],0x1E
	jne Block153

 Block151:
	mov eax,dword ptr [ebp+0x34]
	xor ecx,ecx
	mov word ptr [ebp+0x2C],cx
	test eax,eax
	je Block154

 Block152:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block154

 Block153:
	lea edx,[ebp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block154:
	lea eax,[ebp+0x58]
	push 0x1A15
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x3C]
	mov edx,dword ptr [ecx+0xC]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp+0x60]
	push eax
	mov byte ptr [ebp-4],0x2D
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x58]
	add esp,0xC
	mov byte ptr [ebp-4],0x1E
	test eax,eax
	je Block156

 Block155:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block156:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block158

 Block157:
	push eax
	call _com_issue_error

 Block158:
	mov edx,dword ptr [ebp+0x60]
	lea eax,[ebp+0x44]
	push eax
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	mov bl,0x2E
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0xC20]
	mov byte ptr [ebp-4],0x2F
	test ecx,ecx
	jne Block160

 Block159:
	push 0x80004003
	call _com_issue_error

 Block160:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+0x44],8
	mov edi,eax
	mov byte ptr [ebp-4],0x1E
	jne Block163

 Block161:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block164

 Block162:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block164

 Block163:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block164:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x2C]
	push edx
	call ebx
	lea eax,[ebp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block166

 Block165:
	push eax
	call _com_issue_error

 Block166:
	lea ecx,[ebp+0x44]
	push ecx
	mov byte ptr [ebp-4],0x30
	call ebx
	lea edx,[ebp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block168

 Block167:
	push eax
	call _com_issue_error

 Block168:
	mov esi,dword ptr [esi+0xC20]
	mov edx,dword ptr [ebp+0x60]
	lea eax,[ebp+0x2C]
	push eax
	lea ecx,[ebp+0x44]
	push ecx
	push esi
	push ecx
	mov dword ptr [ebp+0x58],esp
	mov ecx,esp
	mov bl,0x31
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov eax,edi
	cdq
	sub eax,edx
	sar eax,1
	mov ecx,0xFC
	sub ecx,eax
	push 0xD4
	push ecx
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x32
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0x30
	jne Block171

 Block169:
	mov eax,dword ptr [ebp+0x4C]
	xor edx,edx
	mov word ptr [ebp+0x44],dx
	test eax,eax
	je Block172

 Block170:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block172

 Block171:
	lea eax,[ebp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block172:
	cmp word ptr [ebp+0x2C],8
	mov byte ptr [ebp-4],0x1E
	jne Block175

 Block173:
	mov eax,dword ptr [ebp+0x34]
	xor ecx,ecx
	mov word ptr [ebp+0x2C],cx
	test eax,eax
	je Block176

 Block174:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block176

 Block175:
	lea edx,[ebp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block176:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block178

 Block177:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block178:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0xDC]
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
	ret 4
}
}
// CUtilDlgEx::SetUtilDlgEx_INPUT_MLSTR
__SUB_CLASS_THIS(0057DAA0, __thiscall, 44627,  CUtilDlgEx, void, const char*, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	push eax
	lea ecx,[esi+0xE4]
	call ZXString<char>::AssignCStr
	mov ecx,dword ptr [esp+0xC]
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [esi+0xFC],ecx
	mov ecx,esi
	mov dword ptr [esi+0x100],edx
	call CUtilDlgEx::Layout_MLINPUT
	pop esi
	ret 0xC
}
}
// CTextAnalyzer::GetPhrase_Sharp
_SUB_EXCEPTION_HANDLER(5836B0)
// 983858
static uint8_t _SUB_5836B0_LOOKUP_TABLE_0[88] = {
0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 3, 1, 
3, 2, 3, 1, 3, 3, 3, 3, 3, 1, 1, 3, 3, 3, 2, 2, 
3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 1, 3, 1, 3, 
1, 3, 3, 1, 3, 1, 1, 2, 3, 3, 1, 3, 1, 1, 1, 3, 
1, 1, 1, 1, 3, 1, 1, 1, 
};
__SUB_CLASS_THIS(005836B0, __thiscall, 44473,  CTextAnalyzer, void, ZXString<char>&, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5836B0
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
	mov ebp,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov esi,dword ptr [esp+0x28]
	push 1
	lea eax,[esp+0x18]
	push eax
	push esi
	mov dword ptr [esp+0x2C],ebx
	call CTextAnalyzer::GetCharacter
	mov edi,dword ptr [esp+0x14]
	movsx eax,byte ptr [edi]
	add eax,0xFFFFFFDD
	cmp eax,0x57
	ja Block16

 Block1:
	movzx ecx,byte ptr [eax+_SUB_5836B0_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block17
cmp ECX, 1
je Block2
cmp ECX, 2
je Block11
cmp ECX, 3
je Block16


 Block2:
	mov edx,dword ptr [edi-4]
	push edx
	push edi
	mov edi,dword ptr [esp+0x34]
	mov ecx,edi
	call ZXString<char>::_Cat
	push 1
	lea eax,[esp+0x18]
	push eax

 Block3:
	push esi
	mov ecx,ebp
	call CTextAnalyzer::GetCharacter
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block9

 Block4:
	mov cl,byte ptr [eax]
	test cl,cl
	je Block9

 Block5:
	cmp cl,0xD
	je Block9

 Block6:
	cmp cl,0x23
	je Block9

 Block7:
	cmp cl,0x5C
	je Block9

 Block8:
	mov ecx,dword ptr [eax-4]
	push ecx
	push eax
	mov ecx,edi
	call ZXString<char>::_Cat
	push 1
	lea edx,[esp+0x18]
	push edx
	jmp Block3

 Block9:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp eax,ebx
	je Block19

 Block10:
	add eax,0xFFFFFFF4
	push eax
	jmp Block18

 Block11:
	mov eax,dword ptr [edi-4]
	mov ebx,dword ptr [esp+0x2C]
	push eax
	push edi
	mov ecx,ebx
	call ZXString<char>::_Cat
	push 0
	push 0
	push offset _S___12
	mov ecx,esi
	call ZXString<char>::Find__0
	test eax,eax
	jl Block17

 Block12:
	lea ebp,[eax+1]
	push ebp
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,esi
	call ZXString<char>::Left
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x24],1
	call ZXString<char>::op_add_assign_other_0
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	push 0xFFFFFFFF
	push ebp
	lea edx,[esp+0x30]
	push edx
	mov ecx,esi
	call ZXString<char>::Mid
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x24],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block17

 Block16:
	mov eax,dword ptr [edi-4]
	mov ecx,dword ptr [esp+0x2C]
	push eax
	push edi
	call ZXString<char>::_Cat

 Block17:
	add edi,0xFFFFFFF4
	mov dword ptr [esp+0x20],0xFFFFFFFF
	push edi

 Block18:
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8
}
}
// CTextAnalyzer::GetParameterNo
__SUB_CLASS_THIS(0057D620, __thiscall, 44471,  CTextAnalyzer, long, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	add eax,2
	push esi
	push eax
	call _atoi
	mov esi,eax
	mov eax,dword ptr [esp+0xC]
	add esp,4
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,esi
	pop esi
	ret 4
}
}
// CUtilDlgEx::SetUtilDlgEx
__SUB_CLASS_THIS(0057BE40, __thiscall, 44619,  CUtilDlgEx, void, long, long, int32_t, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	mov dword ptr [ecx+0x98],eax
	xor eax,eax
	mov dword ptr [ecx+0xBC],edx
	or edx,0xFFFFFFFF
	mov dword ptr [ecx+0xA8],eax
	mov dword ptr [ecx+0xAC],eax
	mov dword ptr [ecx+0xB0],eax
	mov dword ptr [ecx+0x110],edx
	mov dword ptr [ecx+0x114],edx
	mov dword ptr [ecx+0x118],edx
	mov dword ptr [ecx+0xC30],edx
	mov edx,dword ptr [esp+0xC]
	mov dword ptr [ecx+0x128],eax
	mov dword ptr [ecx+0x160],eax
	mov word ptr [ecx+0xDC],ax
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [ecx+0xA4],0x1B
	mov dword ptr [ecx+0xC0],edx
	mov dword ptr [ecx+0xC4],eax
	add ecx,0x11C
	call ZArray<CT_INFO *>::RemoveAll
	ret 0x10
}
}
// CUtilDlgEx::OnCreate_YESNO
_SUB_EXCEPTION_HANDLER(57E1A0)
__SUB_CLASS_THIS0(0057E1A0, __thiscall, 44605,  CUtilDlgEx, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_57E1A0
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
	mov esi,ecx
	xor ebp,ebp
	lea ecx,[esi+0xC14]
	mov dword ptr [esp+0x14],ebp
	call ZArray<ZRef<CCtrlButton>>::RemoveAll
	mov edi,1
	mov dword ptr [esp+0x30],ebp
	mov dword ptr [esp+0x24],edi
	mov dword ptr [esp+0x28],ebp
	mov dword ptr [esp+0x2C],ebp
	mov dword ptr [esp+0x3C],ebp
	cmp dword ptr [esi+0xC4],ebp
	je Block2

 Block1:
	lea eax,[esp+0x1C]
	push 0xCD7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x3C],1
	mov ebx,edi
	jmp Block3

 Block2:
	lea ecx,[esp+0x18]
	push 0x900
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ebx,2
	mov dword ptr [esp+0x3C],ebx

 Block3:
	mov eax,dword ptr [eax]
	push eax
	push offset _S_UIUIWINDOW2IMGUT
	lea edx,[esp+0x38]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x20],ebx
	call CUtilDlgEx::MakeUOLByUIType
	mov dword ptr [esp+0x3C],edi
	test bl,2
	je Block6

 Block4:
	mov eax,dword ptr [esp+0x18]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	mov dword ptr [esp+0x3C],ebp
	test bl,1
	je Block9

 Block7:
	mov eax,dword ptr [esp+0x1C]
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block9:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x3C],3
	cmp eax,ebp
	je Block11

 Block10:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block12

 Block11:
	xor eax,eax

 Block12:
	mov byte ptr [esp+0x3C],0
	cmp eax,ebp
	je Block24

 Block13:
	add eax,8
	cmp eax,ebp
	je Block24

 Block14:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block16

 Block15:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block16:
	mov eax,dword ptr [esi+0xBE0]
	mov dword ptr [esi+0xBE0],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block18

 Block17:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block18:
	mov ecx,dword ptr [esi+0xBE0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x24]
	push eax
	mov eax,dword ptr [esi+0x28]
	push ebp
	sub eax,0x18
	push eax
	mov eax,dword ptr [esi+0x24]
	sub eax,0x82
	push eax
	push 6
	push esi
	call edx
	push 0xFFFFFFFF
	lea ecx,[esi+0xC14]
	call ZArray<ZRef<CCtrlButton>>::InsertBefore
	mov edi,eax
	mov eax,dword ptr [esi+0xBE0]
	cmp eax,ebp
	je Block20

 Block19:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block20:
	cmp dword ptr [edi+4],ebp
	je Block22

 Block21:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block22:
	mov eax,dword ptr [esi+0xBE0]
	mov dword ptr [edi+4],eax
	cmp dword ptr [esi+0xC4],ebp
	je Block25

 Block23:
	lea ecx,[esp+0x18]
	push 0xCD8
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x3C],4
	or ebx,4
	jmp Block26

 Block24:
	xor edi,edi
	jmp Block16

 Block25:
	lea edx,[esp+0x1C]
	push 0x901
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0x3C],5
	or ebx,8

 Block26:
	mov eax,dword ptr [eax]
	push eax
	push offset _S_UIUIWINDOW2IMGUT
	lea eax,[esp+0x38]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x20],ebx
	call CUtilDlgEx::MakeUOLByUIType
	mov dword ptr [esp+0x3C],4
	test bl,8
	je Block29

 Block27:
	mov eax,dword ptr [esp+0x1C]
	and ebx,0xFFFFFFF7
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block29:
	mov dword ptr [esp+0x3C],ebp
	test bl,4
	je Block32

 Block30:
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebp
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block32:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x3C],6
	cmp eax,ebp
	je Block34

 Block33:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block35

 Block34:
	xor eax,eax

 Block35:
	mov byte ptr [esp+0x3C],0
	cmp eax,ebp
	je Block50

 Block36:
	add eax,8
	cmp eax,ebp
	je Block50

 Block37:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block39

 Block38:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block39:
	mov eax,dword ptr [esi+0xBE8]
	mov dword ptr [esi+0xBE8],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block41

 Block40:
	push ebp
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block41:
	mov ecx,dword ptr [esi+0xBE8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x24]
	push eax
	mov eax,dword ptr [esi+0x28]
	push ebp
	sub eax,0x18
	push eax
	mov eax,dword ptr [esi+0x24]
	sub eax,0x41
	push eax
	push 7
	push esi
	call edx
	push 0xFFFFFFFF
	lea ecx,[esi+0xC14]
	call ZArray<ZRef<CCtrlButton>>::InsertBefore
	mov edi,eax
	mov eax,dword ptr [esi+0xBE8]
	cmp eax,ebp
	je Block43

 Block42:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block43:
	cmp dword ptr [edi+4],ebp
	je Block45

 Block44:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block45:
	mov eax,dword ptr [esi+0xBE8]
	mov dword ptr [edi+4],eax
	test byte ptr [esi+0xC34],1
	jne Block53

 Block46:
	lea ecx,[esp+0x1C]
	push 0x8FF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	push offset _S_UIUIWINDOW2IMGUT
	lea edx,[esp+0x38]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x48],7
	call CUtilDlgEx::MakeUOLByUIType
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x3C],0
	cmp eax,ebp
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block48:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x3C],8
	cmp eax,ebp
	je Block51

 Block49:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block52

 Block50:
	xor edi,edi
	jmp Block39

 Block51:
	xor eax,eax

 Block52:
	push eax
	lea ecx,[esi+0xBEC]
	mov byte ptr [esp+0x40],0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xBF0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x24]
	push edx
	mov edx,dword ptr [esi+0x28]
	push ebp
	sub edx,0x18
	push edx
	push 9
	push 2
	push esi
	call eax

 Block53:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp eax,ebp
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block55:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret
}
}
// CUtilDlgEx::OnCreate_AVATAR
_SUB_EXCEPTION_HANDLER(5846C0)
__SUB_CLASS_THIS0(005846C0, __thiscall, 44605,  CUtilDlgEx, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5846C0
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
	push 0
	push 0
	push 0
	push 0x2000
	push offset _S_UIUIWINDOW2IMGUT__20
	lea eax,[esp+0x28]
	lea ebx,[esi+0xC3C]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x68],0
	test eax,eax
	je Block59

 Block1:
	add eax,8
	je Block59

 Block2:
	lea edi,[eax-8]
	test edi,edi
	je Block4

 Block3:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov eax,dword ptr [esi+0xBE0]
	mov dword ptr [esi+0xBE0],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block6

 Block5:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block6:
	or ebp,0xFFFFFFFF
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x68],ebp
	je Block8

 Block7:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block8:
	push 0
	push 0
	push 0
	push 0x2001
	push offset _S_UIUIWINDOW2IMGUT__19
	lea edx,[esp+0x28]
	push edx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x68],1
	test eax,eax
	je Block60

 Block9:
	add eax,8
	je Block60

 Block10:
	lea edi,[eax-8]
	test edi,edi
	je Block12

 Block11:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block12:
	mov eax,dword ptr [esi+0xBE8]
	mov dword ptr [esi+0xBE8],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block14

 Block13:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block14:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x68],ebp
	je Block16

 Block15:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block16:
	push 0
	push 0
	push 0
	push 1
	push offset _S_UIUIWINDOW2IMGUT__18
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov ebp,2
	mov dword ptr [esp+0x68],ebp
	test eax,eax
	je Block61

 Block17:
	add eax,8
	je Block61

 Block18:
	lea edi,[eax-8]
	test edi,edi
	je Block20

 Block19:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block20:
	mov eax,dword ptr [esi+0xBF0]
	mov dword ptr [esi+0xBF0],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block22

 Block21:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block22:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x68],0xFFFFFFFF
	je Block24

 Block23:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block24:
	push 0
	push 0
	push 0
	push ebp
	push offset _S_UIUIWINDOW2IMGUT__17
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x68],3
	test eax,eax
	je Block62

 Block25:
	add eax,8
	je Block62

 Block26:
	lea edi,[eax-8]
	test edi,edi
	je Block28

 Block27:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block28:
	mov eax,dword ptr [esi+0xBF8]
	mov dword ptr [esi+0xBF8],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block30

 Block29:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block30:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x68],0xFFFFFFFF
	je Block32

 Block31:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block32:
	push 0
	push 0
	push 0
	push ebp
	push offset _S_UIUIWINDOW2IMGUT__16
	lea edx,[esp+0x28]
	push edx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x68],4
	test eax,eax
	je Block63

 Block33:
	add eax,8
	je Block63

 Block34:
	lea edi,[eax-8]
	test edi,edi
	je Block36

 Block35:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block36:
	mov eax,dword ptr [esi+0xC00]
	mov dword ptr [esi+0xC00],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block38

 Block37:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block38:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x68],0xFFFFFFFF
	je Block40

 Block39:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block40:
	push 0
	push 0
	push 0
	push 0x2002
	push offset _S_UIUIWINDOW2IMGUT__15
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x68],5
	test eax,eax
	je Block64

 Block41:
	add eax,8
	je Block64

 Block42:
	lea edi,[eax-8]
	test edi,edi
	je Block44

 Block43:
	lea edx,[edi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block44:
	mov eax,dword ptr [esi+0xC08]
	mov dword ptr [esi+0xC08],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block46

 Block45:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block46:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x68],0xFFFFFFFF
	je Block48

 Block47:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block48:
	push 0
	push 0
	push 0
	push 0x2003
	push offset _S_UIUIWINDOW2IMGUT__14
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov dword ptr [esp+0x68],6
	test eax,eax
	je Block65

 Block49:
	add eax,8
	je Block65

 Block50:
	lea edi,[eax-8]
	test edi,edi
	je Block52

 Block51:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block52:
	mov eax,dword ptr [esi+0xC10]
	mov dword ptr [esi+0xC10],edi
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block54

 Block53:
	push 0
	lea ecx,[esp+0x20]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block54:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x68],0xFFFFFFFF
	je Block56

 Block55:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block56:
	mov eax,dword ptr [esi+0xC08]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x24]
	lea ecx,[eax+4]
	mov eax,dword ptr [esi+0x12C]
	push eax
	call edx
	mov eax,dword ptr [esi+0xC08]
	mov edx,dword ptr [esi+0x12C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x1C]
	push edx
	call eax
	mov eax,dword ptr [esi+0xC10]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x24]
	lea ecx,[eax+4]
	xor eax,eax
	cmp dword ptr [esi+0x12C],eax
	sete al
	push eax
	call edx
	mov eax,dword ptr [esi+0xC10]
	xor edx,edx
	cmp dword ptr [esi+0x12C],edx
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x1C]
	sete dl
	push edx
	call eax
	mov eax,dword ptr [esi+0x12C]
	mov ecx,eax
	neg ecx
	sbb ecx,ecx
	xor edx,edx
	add ecx,6
	mov ecx,dword ptr [esi+ecx*8+0xBE0]
	test eax,eax
	setne dl
	mov eax,dword ptr [esi+edx*8+0xC08]
	push eax
	add edx,5
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	cmp dword ptr [esi+0x124],ebp
	je Block127

 Block57:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call ebp
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block66

 Block58:
	push eax
	call _com_issue_error

 Block59:
	xor edi,edi
	jmp Block4

 Block60:
	xor edi,edi
	jmp Block12

 Block61:
	xor edi,edi
	jmp Block20

 Block62:
	xor edi,edi
	jmp Block28

 Block63:
	xor edi,edi
	jmp Block36

 Block64:
	xor edi,edi
	jmp Block44

 Block65:
	xor edi,edi
	jmp Block52

 Block66:
	lea eax,[esp+0x1C]
	mov ebx,7
	push eax
	mov dword ptr [esp+0x6C],ebx
	call ebp
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block68

 Block67:
	push eax
	call _com_issue_error

 Block68:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x68],8
	test ecx,ecx
	jne Block70

 Block69:
	push 0x80004003
	call _com_issue_error

 Block70:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x20]
	push eax
	push 5
	push 0x10
	push 0xAC
	push 0
	push 0
	lea edx,[esp+0x30]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x138]
	cmp edi,eax
	je Block75

 Block71:
	mov dword ptr [esi+0x138],eax
	test eax,eax
	je Block73

 Block72:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block73:
	test edi,edi
	je Block75

 Block74:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block75:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block77

 Block76:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block77:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x68],bl
	jne Block80

 Block78:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	cmp word ptr [esp+0x2C],8
	mov dword ptr [esp+0x68],0xFFFFFFFF
	jne Block84

 Block82:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block85:
	lea edx,[esp+0x14]
	push edx
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,9
	mov ecx,0xD
	mov dword ptr [esp+0x68],ebx
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block87

 Block86:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block87:
	mov edi,dword ptr [esi+0x138]
	mov byte ptr [esp+0x68],0xA
	test edi,edi
	jne Block89

 Block88:
	push 0x80004003
	call _com_issue_error

 Block89:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push edi
	call eax
	test eax,eax
	jge Block91

 Block90:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block91:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x68],bl
	jne Block94

 Block92:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block95:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	test eax,eax
	je Block97

 Block96:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block97:
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,0xB
	mov ecx,0xD
	mov dword ptr [esp+0x68],ebx
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block99

 Block98:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block99:
	mov edi,dword ptr [esi+0x138]
	mov byte ptr [esp+0x68],0xC
	test edi,edi
	jne Block101

 Block100:
	push 0x80004003
	call _com_issue_error

 Block101:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push edi
	call eax
	test eax,eax
	jge Block103

 Block102:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block103:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x68],bl
	jne Block106

 Block104:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block107:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	test eax,eax
	je Block109

 Block108:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block109:
	mov edi,dword ptr [esi+0x138]
	test edi,edi
	jne Block111

 Block110:
	push 0x80004003
	call _com_issue_error

 Block111:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push edi
	call ecx
	test eax,eax
	jge Block113

 Block112:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block113:
	lea edx,[esp+0x4C]
	push edx
	call ebp
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block115

 Block114:
	push eax
	call _com_issue_error

 Block115:
	lea ecx,[esp+0x3C]
	push ecx
	mov dword ptr [esp+0x6C],0xD
	call ebp
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block117

 Block116:
	push eax
	call _com_issue_error

 Block117:
	mov ecx,dword ptr [esi+0x138]
	mov byte ptr [esp+0x68],0xE
	test ecx,ecx
	jne Block119

 Block118:
	push 0x80004003
	call _com_issue_error

 Block119:
	lea eax,[esp+0x4C]
	push eax
	lea edx,[esp+0x40]
	push edx
	push 0xD0
	push 0x62
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x68],0xD
	cmp word ptr [esp+0x3C],di
	jne Block122

 Block120:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block123:
	mov dword ptr [esp+0x68],0xFFFFFFFF
	cmp word ptr [esp+0x4C],di
	jne Block126

 Block124:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block127:
	mov eax,dword ptr [esi+0x144]
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block129

 Block128:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block129:
	mov ecx,esi
	call CUtilDlgEx::MakeAvatar
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CUtilDlgEx::OnCreate
_SUB_EXCEPTION_HANDLER(58EDD0)
__SUB_CLASS_THIS(0058EDD0, __thiscall, 44606,  CUtilDlgEx, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_58EDD0
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
	call CUtilDlgEx::SetBackground
	mov eax,dword ptr [esi+0x98]
	cmp eax,9
	ja Block13

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block4
cmp EAX, 4
je Block8
cmp EAX, 5
je Block9
cmp EAX, 6
je Block10
cmp EAX, 7
je Block11
cmp EAX, 8
je Block7
cmp EAX, 9
je Block12


 Block2:
	mov ecx,esi
	call CUtilDlgEx::OnCreate_TEXT
	jmp Block13

 Block3:
	mov ecx,esi
	call CUtilDlgEx::OnCreate_YESNO
	jmp Block13

 Block4:
	cmp dword ptr [esi+0xC0],0
	mov ecx,esi
	je Block6

 Block5:
	call CUtilDlgEx::OnCreate_INPUT1
	jmp Block13

 Block6:
	call CUtilDlgEx::OnCreate_INPUT
	jmp Block13

 Block7:
	mov ecx,esi
	call CUtilDlgEx::OnCreate_MLINPUT
	jmp Block13

 Block8:
	mov ecx,esi
	call CUtilDlgEx::OnCreate_LIST
	jmp Block13

 Block9:
	mov ecx,esi
	call CUtilDlgEx::OnCreate_AVATAR
	jmp Block13

 Block10:
	mov ecx,esi
	call CUtilDlgEx::OnCreate_PET
	jmp Block13

 Block11:
	mov ecx,esi
	call CUtilDlgEx::OnCreate_COMBOBOX_EDITABLE
	jmp Block13

 Block12:
	mov ecx,esi
	call CUtilDlgEx::OnCreate_IMAGE

 Block13:
	cmp dword ptr [esi+0xB0],0
	je Block18

 Block14:
	mov eax,dword ptr [esi+0xA4]
	sub eax,dword ptr [esi+0xA8]
	push 0x74
	cdq
	and edx,7
	add eax,edx
	mov edi,eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	sar edi,3
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x1C],0
	test eax,eax
	je Block16

 Block15:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block17

 Block16:
	xor eax,eax

 Block17:
	push eax
	lea ecx,[esi+0xBCC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZRef<CCtrlScrollBar>::op_assign_ptr
	mov eax,dword ptr [esi+0xA8]
	mov ecx,dword ptr [esi+0xA0]
	mov edx,dword ptr [esi+0xBD0]
	mov ebx,dword ptr [edx]
	push 0
	push eax
	add ecx,5
	push ecx
	mov ecx,esi
	call CUtilDlgEx::GetBasicCTWidth
	mov ecx,dword ptr [esi+0x9C]
	lea eax,[eax+ecx-2]
	push eax
	push 8
	push 1
	push 0x3E9
	mov ecx,edx
	mov edx,dword ptr [ebx+0x28]
	push esi
	call edx
	mov ecx,dword ptr [esi+0xBD0]
	xor eax,eax
	cmp edi,1
	setl al
	inc eax
	add eax,edi
	push eax
	call CCtrlScrollBar::SetScrollRange
	mov ecx,esi
	call CUtilDlgEx::GetBasicCTWidth
	mov ecx,dword ptr [esi+0xBD0]
	mov dword ptr [ecx+0x34],eax

 Block18:
	cmp dword ptr [esi+0xC0],0
	jne Block20

 Block19:
	mov ecx,esi
	call CUtilDlgEx::SetNPC

 Block20:
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
// CUtilDlgEx::SetAvatar
__SUB_CLASS_THIS(0057C290, __thiscall, 44645,  CUtilDlgEx, void, NakedParam<ZRef<AvatarLook>>) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x124]
	sub eax,0
	je Block5

 Block1:
	sub eax,1
	je Block4

 Block2:
	sub eax,1
	jne Block6

 Block3:
	mov eax,dword ptr [ecx+0x128]
	mov ecx,dword ptr [ecx+0x120]
	mov edx,dword ptr [ecx+eax*4]
	mov eax,dword ptr [esp+8]
	mov dword ptr [eax+0xD],edx
	jmp Block6

 Block4:
	mov edx,dword ptr [ecx+0x128]
	mov eax,dword ptr [ecx+0x120]
	mov ecx,dword ptr [eax+edx*4]
	mov edx,dword ptr [esp+8]
	mov dword ptr [edx+0x19],ecx
	jmp Block6

 Block5:
	mov eax,dword ptr [ecx+0x128]
	mov ecx,dword ptr [ecx+0x120]
	mov edx,dword ptr [ecx+eax*4]
	mov eax,dword ptr [esp+8]
	mov dword ptr [eax+0x11],edx

 Block6:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block10

 Block7:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block8:
	mov ecx,dword ptr [esp+8]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+8]
	test ecx,ecx
	je Block10

 Block9:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block10:
	ret 8
}
}
// CUtilDlgEx::OnButtonClicked
__SUB_CLASS_THIS(00585350, __thiscall, 44611,  CUtilDlgEx, void, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov esi,ecx
	cmp ebx,2
	jne Block2

 Block1:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push ebx
	call edx
	pop edi
	pop esi
	pop ebx
	ret 4

 Block2:
	mov eax,dword ptr [esi+0x98]
	cmp eax,9
	ja Block78

 Block3:
	cmp EAX, 0
je Block4
cmp EAX, 1
je Block29
cmp EAX, 2
je Block32
cmp EAX, 3
je Block32
cmp EAX, 4
je Block34
cmp EAX, 5
je Block36
cmp EAX, 6
je Block62
cmp EAX, 7
je Block78
cmp EAX, 8
je Block32
cmp EAX, 9
je Block9


 Block4:
	cmp ebx,0x2000
	je Block8

 Block5:
	cmp ebx,0x2001
	je Block8

 Block6:
	cmp ebx,1
	jne Block78

 Block7:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 0x2001
	call edx
	pop edi
	pop esi
	pop ebx
	ret 4

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push ebx
	call edx
	pop edi
	pop esi
	pop ebx
	ret 4

 Block9:
	mov edx,1
	cmp ebx,edx
	je Block33

 Block10:
	cmp ebx,0x2000
	jne Block12

 Block11:
	mov eax,0xFFFF
	add word ptr [esi+0xDC],ax
	jmp Block14

 Block12:
	cmp ebx,0x2001
	jne Block78

 Block13:
	add word ptr [esi+0xDC],dx

 Block14:
	movzx ecx,word ptr [esi+0xDC]
	xor edi,edi
	cmp cx,di
	jne Block16

 Block15:
	mov dword ptr [esi+0xD0],edi

 Block16:
	jbe Block18

 Block17:
	mov dword ptr [esi+0xD0],edx

 Block18:
	mov eax,dword ptr [esi+0xD8]
	cmp eax,edi
	jne Block20

 Block19:
	xor eax,eax
	jmp Block21

 Block20:
	mov eax,dword ptr [eax-4]

 Block21:
	movzx ecx,cx
	dec eax
	cmp ecx,eax
	jne Block23

 Block22:
	mov dword ptr [esi+0xD4],edi

 Block23:
	mov eax,dword ptr [esi+0xD8]
	cmp eax,edi
	jne Block25

 Block24:
	xor eax,eax
	jmp Block26

 Block25:
	mov eax,dword ptr [eax-4]

 Block26:
	dec eax
	cmp ecx,eax
	jae Block28

 Block27:
	mov dword ptr [esi+0xD4],edx

 Block28:
	mov ecx,esi
	call CUtilDlgEx::UpdateImage
	push ebx
	mov ecx,esi
	call CDialog::OnButtonClicked
	pop edi
	pop esi
	pop ebx
	ret 4

 Block29:
	cmp ebx,6
	je Block31

 Block30:
	cmp ebx,7
	jne Block78

 Block31:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push ebx
	call eax
	pop edi
	pop esi
	pop ebx
	ret 4

 Block32:
	mov edx,1
	cmp ebx,edx
	jne Block78

 Block33:
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x34]
	call edx
	pop edi
	pop esi
	pop ebx
	ret 4

 Block34:
	cmp ebx,0x2001
	jne Block36

 Block35:
	mov eax,dword ptr [esi+0x118]
	mov ecx,dword ptr [esi+0x11C]
	mov edx,dword ptr [ecx+eax*4]
	mov eax,dword ptr [edx+0x28]
	mov edx,dword ptr [esi]
	mov dword ptr [esi+0x110],eax
	mov eax,dword ptr [edx+0x34]
	push ebx
	mov ecx,esi
	call eax
	pop edi
	pop esi
	pop ebx
	ret 4

 Block36:
	mov edx,1
	cmp ebx,edx
	je Block33

 Block37:
	cmp ebx,0x2000
	jne Block42

 Block38:
	dec dword ptr [esi+0x128]

 Block39:
	xor edi,edi
	cmp dword ptr [esi+0x128],edi
	jge Block56

 Block40:
	mov eax,dword ptr [esi+0x120]
	cmp eax,edi
	jne Block54

 Block41:
	xor eax,eax
	jmp Block55

 Block42:
	cmp ebx,0x2001
	jne Block44

 Block43:
	add dword ptr [esi+0x128],edx
	jmp Block39

 Block44:
	cmp ebx,0x2002
	jne Block49

 Block45:
	mov eax,dword ptr [esi+0xC08]
	xor edi,edi
	lea ecx,[eax+4]
	mov dword ptr [esi+0x12C],edi
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push edi
	call edx
	mov eax,dword ptr [esi+0xC08]
	mov edx,dword ptr [esi+0x12C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x1C]
	push edx
	call eax
	mov eax,dword ptr [esi+0xC10]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x24]
	lea ecx,[eax+4]
	xor eax,eax
	cmp dword ptr [esi+0x12C],edi
	sete al
	push eax
	call edx
	mov eax,dword ptr [esi+0xC10]
	xor edx,edx
	cmp dword ptr [esi+0x12C],edi
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x1C]
	sete dl
	push edx
	call eax
	mov ecx,dword ptr [esi+0xC10]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [esi+0xC08]
	mov edx,dword ptr [edx+0x20]
	push eax
	call edx
	push 0x205
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,edi
	je Block47

 Block46:
	mov ecx,eax
	call AvatarLook::_ctor_default
	jmp Block48

 Block47:
	xor eax,eax

 Block48:
	lea edi,[esi+0x140]
	push eax
	mov ecx,edi
	call ZRef<AvatarLook>::op_assign_ptr
	mov eax,dword ptr [esi+0x154]
	mov edx,dword ptr [eax+0x13]
	mov ecx,dword ptr [esi+0x144]
	mov dword ptr [ecx+0x11],edx
	mov eax,dword ptr [esi+0x154]
	mov dl,byte ptr [eax+0x11]
	mov ecx,dword ptr [esi+0x144]
	mov byte ptr [ecx+0xC],dl
	mov eax,dword ptr [esi+0x154]
	movzx ecx,byte ptr [eax+0x12]
	mov edx,dword ptr [esi+0x144]
	mov dword ptr [edx+0xD],ecx
	mov eax,dword ptr [esi+0x154]
	mov ecx,dword ptr [esi+0x144]
	mov edx,dword ptr [eax+0x17]
	sub esp,8
	mov dword ptr [ecx+0x19],edx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push edi
	call ZRef<AvatarLook>::_ctor_copy
	mov ecx,esi
	call CUtilDlgEx::MakeAvatar
	push ebx
	mov ecx,esi
	call CDialog::OnButtonClicked
	pop edi
	pop esi
	pop ebx
	ret 4

 Block49:
	cmp ebx,0x2003
	jne Block78

 Block50:
	mov eax,dword ptr [esi+0xC08]
	lea ecx,[eax+4]
	mov dword ptr [esi+0x12C],edx
	mov eax,dword ptr [ecx]
	push edx
	mov edx,dword ptr [eax+0x24]
	call edx
	mov eax,dword ptr [esi+0xC08]
	mov edx,dword ptr [esi+0x12C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x1C]
	push edx
	call eax
	mov eax,dword ptr [esi+0xC10]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x24]
	lea ecx,[eax+4]
	xor eax,eax
	xor edi,edi
	cmp dword ptr [esi+0x12C],edi
	sete al
	push eax
	call edx
	mov eax,dword ptr [esi+0xC10]
	xor edx,edx
	cmp dword ptr [esi+0x12C],edi
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x1C]
	sete dl
	push edx
	call eax
	mov ecx,dword ptr [esi+0xC08]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [esi+0xC10]
	mov edx,dword ptr [edx+0x20]
	push eax
	call edx
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp eax,edi
	jne Block52

 Block51:
	mov eax,dword ptr [esi+0x154]
	mov ecx,dword ptr [esi+0x144]
	push eax
	call AvatarLook::Load_0
	jmp Block53

 Block52:
	mov edx,dword ptr [esi+0x154]
	lea ecx,[eax+0x3A50]
	push ecx
	mov ecx,dword ptr [esi+0x144]
	add eax,0x3870
	push eax
	push edx
	call AvatarLook::Load_1

 Block53:
	mov eax,dword ptr [esi+0x144]
	mov dword ptr [eax+0x15],edi
	mov ecx,dword ptr [esi+0x144]
	sub esp,8
	mov dword ptr [ecx+0x45],edi
	mov edx,dword ptr [esi+0x144]
	lea eax,[esi+0x140]
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push eax
	mov dword ptr [edx+0x135],edi
	call ZRef<AvatarLook>::_ctor_copy
	mov ecx,esi
	call CUtilDlgEx::MakeAvatar
	push ebx
	mov ecx,esi
	call CDialog::OnButtonClicked
	pop edi
	pop esi
	pop ebx
	ret 4

 Block54:
	mov eax,dword ptr [eax-4]

 Block55:
	dec eax
	mov dword ptr [esi+0x128],eax

 Block56:
	mov eax,dword ptr [esi+0x120]
	cmp eax,edi
	jne Block58

 Block57:
	xor eax,eax
	jmp Block59

 Block58:
	mov eax,dword ptr [eax-4]

 Block59:
	cmp dword ptr [esi+0x128],eax
	jb Block61

 Block60:
	mov dword ptr [esi+0x128],edi

 Block61:
	sub esp,8
	lea edx,[esi+0x140]
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push edx
	call ZRef<AvatarLook>::_ctor_copy
	mov ecx,esi
	call CUtilDlgEx::MakeAvatar
	push ebx
	mov ecx,esi
	call CDialog::OnButtonClicked
	pop edi
	pop esi
	pop ebx
	ret 4

 Block62:
	mov edx,1
	cmp ebx,edx
	je Block33

 Block63:
	cmp ebx,0x2000
	jne Block65

 Block64:
	dec dword ptr [esi+0x160]
	jmp Block67

 Block65:
	cmp ebx,0x2001
	jne Block78

 Block66:
	add dword ptr [esi+0x160],edx

 Block67:
	xor edi,edi
	cmp dword ptr [esi+0x160],edi
	jge Block72

 Block68:
	mov eax,dword ptr [esi+0x15C]
	cmp eax,edi
	jne Block70

 Block69:
	xor eax,eax
	jmp Block71

 Block70:
	mov eax,dword ptr [eax-4]

 Block71:
	dec eax
	mov dword ptr [esi+0x160],eax

 Block72:
	mov eax,dword ptr [esi+0x15C]
	cmp eax,edi
	jne Block74

 Block73:
	xor eax,eax
	jmp Block75

 Block74:
	mov eax,dword ptr [eax-4]

 Block75:
	cmp dword ptr [esi+0x160],eax
	jb Block77

 Block76:
	mov dword ptr [esi+0x160],edi

 Block77:
	call CUtilDlgEx::MakePet
	push edi
	mov ecx,esi
	call CWnd::InvalidateRect

 Block78:
	push ebx
	mov ecx,esi
	call CDialog::OnButtonClicked
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CUtilDlgEx::SetUtilDlgEx_TEXT
__SUB_CLASS_THIS(0057B420, __thiscall, 44622,  CUtilDlgEx, void, int32_t, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	mov dword ptr [ecx+0xC8],eax
	mov dword ptr [ecx+0xCC],edx
	test eax,eax
	jne Block2

 Block1:
	test edx,edx
	je Block3

 Block2:
	add dword ptr [ecx+0xA4],0x12

 Block3:
	push 0
	call CUtilDlgEx::Layout_GEN
	ret 8
}
}
// CUtilDlgEx::GetInputStr_Result
__SUB_CLASS_THIS0(0011E680, __thiscall, 44637,  CUtilDlgEx, ZXString<char>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	add ecx,0x104
	push ecx
	mov ecx,esi
	mov dword ptr [esp+8],0
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CUtilDlgEx::OnKey
// 97BD80
static uint8_t _SUB_57B9C0_LOOKUP_TABLE_0[80] = {
0, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 1, 8, 
8, 8, 8, 8, 8, 8, 8, 8, 2, 3, 4, 5, 8, 8, 8, 8, 
8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
8, 6, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 141, 73, 0, 
};
// 97BE00
static uint8_t _SUB_57B9C0_LOOKUP_TABLE_1[12] = {
0, 0, 1, 1, 0, 1, 1, 1, 1, 0, 139, 255, 
};
// 97BE30
static uint8_t _SUB_57B9C0_LOOKUP_TABLE_3[10] = {
0, 0, 3, 3, 1, 3, 3, 3, 2, 0, 
};
// 97BE14
static uint8_t _SUB_57B9C0_LOOKUP_TABLE_2[12] = {
0, 0, 1, 1, 0, 1, 1, 1, 1, 0, 139, 255, 
};
__SUB_CLASS_THIS(0057B9C0, __thiscall, 44610,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov esi,ecx
	test edi,edi
	js Block68

 Block1:
	lea eax,[ebx-0xD]
	cmp eax,0x4C
	ja Block61

 Block2:
	movzx eax,byte ptr [eax+_SUB_57B9C0_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block5
cmp EAX, 1
je Block3
cmp EAX, 2
je Block32
cmp EAX, 3
je Block45
cmp EAX, 4
je Block39
cmp EAX, 5
je Block51
cmp EAX, 6
je Block59
cmp EAX, 7
je Block57
cmp EAX, 8
je Block61


 Block3:
	test byte ptr [esi+0xC30],1
	jne Block69

 Block4:
	mov edx,dword ptr [esi-4]
	mov eax,dword ptr [edx+0x34]
	lea ecx,[esi-4]
	push 2
	call eax
	pop edi
	pop esi
	pop ebx
	ret 8

 Block5:
	mov edx,dword ptr [esi+0xC30]
	and edx,1
	je Block8

 Block6:
	mov eax,dword ptr [esi+0x94]
	test eax,eax
	je Block8

 Block7:
	cmp eax,1
	jne Block69

 Block8:
	mov eax,dword ptr [esi+0x94]
	cmp eax,9
	ja Block61

 Block9:
	cmp EAX, 0
je Block10
cmp EAX, 1
je Block16
cmp EAX, 2
je Block61
cmp EAX, 3
je Block61
cmp EAX, 4
je Block31
cmp EAX, 5
je Block61
cmp EAX, 6
je Block61
cmp EAX, 7
je Block61
cmp EAX, 8
je Block69
cmp EAX, 9
je Block22


 Block10:
	mov eax,dword ptr [esi+0xC2C]
	test eax,eax
	jl Block21

 Block11:
	mov ecx,dword ptr [esi+0xC10]
	test ecx,ecx
	je Block13

 Block12:
	mov ecx,dword ptr [ecx-4]

 Block13:
	cmp eax,ecx
	jae Block21

 Block14:
	mov ecx,dword ptr [esi+0xC10]
	mov eax,dword ptr [ecx+eax*8+4]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x20]
	call eax
	test eax,eax
	je Block69

 Block15:
	mov eax,dword ptr [esi+0xC2C]
	mov edx,dword ptr [esi-4]
	mov edx,dword ptr [edx+0x34]
	lea ecx,[esi-4]
	mov esi,dword ptr [esi+0xC10]
	mov eax,dword ptr [esi+eax*8+4]
	mov eax,dword ptr [eax+0x14]
	push eax
	call edx
	pop edi
	pop esi
	pop ebx
	ret 8

 Block16:
	mov eax,dword ptr [esi+0xC2C]
	test eax,eax
	jl Block20

 Block17:
	mov ecx,dword ptr [esi+0xC10]
	test ecx,ecx
	je Block19

 Block18:
	mov ecx,dword ptr [ecx-4]

 Block19:
	cmp eax,ecx
	jb Block14

 Block20:
	test edx,edx
	jne Block69

 Block21:
	mov eax,dword ptr [esi-4]
	mov edx,dword ptr [eax+0x34]
	lea ecx,[esi-4]
	push 0x2001
	call edx
	pop edi
	pop esi
	pop ebx
	ret 8

 Block22:
	mov eax,dword ptr [esi+0xC2C]
	test eax,eax
	jl Block26

 Block23:
	mov ecx,dword ptr [esi+0xC10]
	test ecx,ecx
	je Block25

 Block24:
	mov ecx,dword ptr [ecx-4]

 Block25:
	cmp eax,ecx
	jb Block14

 Block26:
	mov eax,dword ptr [esi+0xD4]
	test eax,eax
	je Block28

 Block27:
	mov eax,dword ptr [eax-4]

 Block28:
	movzx ecx,word ptr [esi+0xD8]
	mov edx,dword ptr [esi-4]
	dec eax
	cmp ecx,eax
	mov eax,dword ptr [edx+0x34]
	lea ecx,[esi-4]
	jne Block30

 Block29:
	push 1
	call eax
	pop edi
	pop esi
	pop ebx
	ret 8

 Block30:
	push 0x2001
	call eax
	pop edi
	pop esi
	pop ebx
	ret 8

 Block31:
	mov ecx,dword ptr [esi+0x114]
	mov edx,dword ptr [esi+0x118]
	mov eax,dword ptr [edx+ecx*4]
	mov ecx,dword ptr [eax+0x28]
	mov edx,dword ptr [esi-4]
	mov eax,dword ptr [edx+0x34]
	mov dword ptr [esi+0x10C],ecx
	lea ecx,[esi-4]
	push 1
	call eax
	pop edi
	pop esi
	pop ebx
	ret 8

 Block32:
	mov eax,dword ptr [esi+0x94]
	cmp eax,9
	ja Block61

 Block33:
	movzx ecx,byte ptr [eax+_SUB_57B9C0_LOOKUP_TABLE_1]
	cmp ECX, 0
je Block34
cmp ECX, 1
je Block61


 Block34:
	add dword ptr [esi+0xC2C],0xFFFFFFFF
	jns Block38

 Block35:
	mov eax,dword ptr [esi+0xC10]
	test eax,eax
	je Block37

 Block36:
	mov eax,dword ptr [eax-4]

 Block37:
	dec eax
	mov dword ptr [esi+0xC2C],eax

 Block38:
	mov edx,dword ptr [esi+0xC2C]
	push edx
	lea ecx,[esi-4]
	call CUtilDlgEx::SetKeyFocus
	pop edi
	pop esi
	pop ebx
	ret 8

 Block39:
	mov eax,dword ptr [esi+0x94]
	cmp eax,9
	ja Block61

 Block40:
	movzx eax,byte ptr [eax+_SUB_57B9C0_LOOKUP_TABLE_2]
	cmp EAX, 0
je Block41
cmp EAX, 1
je Block61


 Block41:
	inc dword ptr [esi+0xC2C]
	mov eax,dword ptr [esi+0xC10]
	mov ecx,dword ptr [esi+0xC2C]
	test eax,eax
	je Block43

 Block42:
	cmp ecx,dword ptr [eax-4]
	jb Block44

 Block43:
	mov dword ptr [esi+0xC2C],0

 Block44:
	mov ecx,dword ptr [esi+0xC2C]
	push ecx
	lea ecx,[esi-4]
	call CUtilDlgEx::SetKeyFocus
	pop edi
	pop esi
	pop ebx
	ret 8

 Block45:
	cmp dword ptr [esi+0x94],4
	jne Block61

 Block46:
	add dword ptr [esi+0x114],0xFFFFFFFF
	jns Block48

 Block47:
	mov dword ptr [esi+0x114],0

 Block48:
	cmp dword ptr [esi+0xAC],0
	je Block50

 Block49:
	mov edx,dword ptr [esi+0x114]
	mov eax,dword ptr [esi+0x118]
	mov ecx,dword ptr [eax+edx*4]
	push ecx
	lea ecx,[esi-4]
	call CUtilDlgEx::ValidateScroll

 Block50:
	push 0
	lea ecx,[esi-4]
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebx
	ret 8

 Block51:
	cmp dword ptr [esi+0x94],4
	jne Block61

 Block52:
	inc dword ptr [esi+0x114]
	mov eax,dword ptr [esi+0x118]
	mov ecx,dword ptr [esi+0x114]
	test eax,eax
	je Block54

 Block53:
	cmp ecx,dword ptr [eax-4]
	jb Block48

 Block54:
	mov eax,dword ptr [esi+0x118]
	test eax,eax
	jne Block56

 Block55:
	dec eax
	mov dword ptr [esi+0x114],eax
	jmp Block48

 Block56:
	mov eax,dword ptr [eax-4]
	dec eax
	mov dword ptr [esi+0x114],eax
	jmp Block48

 Block57:
	mov eax,dword ptr [esi+0x94]
	sub eax,1
	jne Block61

 Block58:
	mov edx,dword ptr [esi-4]
	mov eax,dword ptr [edx+0x34]
	lea ecx,[esi-4]
	push 6
	call eax
	pop edi
	pop esi
	pop ebx
	ret 8

 Block59:
	mov eax,dword ptr [esi+0x94]
	sub eax,1
	jne Block61

 Block60:
	mov edx,dword ptr [esi-4]
	mov eax,dword ptr [edx+0x34]
	lea ecx,[esi-4]
	push 7
	call eax
	pop edi
	pop esi
	pop ebx
	ret 8

 Block61:
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	mov edx,edi
	shr edx,0x10
	and edx,0xFF
	push edx
	call CFuncKeyMappedMan::FuncKeyMapped
	cmp byte ptr [eax],5
	jne Block68

 Block62:
	cmp dword ptr [eax+1],0x36
	jne Block68

 Block63:
	test byte ptr [esi+0xC30],1
	je Block65

 Block64:
	cmp dword ptr [esi+0x94],0
	jne Block69

 Block65:
	mov eax,dword ptr [esi+0x94]
	cmp eax,9
	ja Block68

 Block66:
	movzx eax,byte ptr [eax+_SUB_57B9C0_LOOKUP_TABLE_3]
	cmp EAX, 0
je Block10
cmp EAX, 1
je Block67
cmp EAX, 2
je Block69
cmp EAX, 3
je Block68


 Block67:
	mov eax,dword ptr [esi+0x114]
	mov ecx,dword ptr [esi+0x118]
	mov edx,dword ptr [ecx+eax*4]
	mov eax,dword ptr [edx+0x28]
	mov edx,dword ptr [esi-4]
	lea ecx,[esi-4]
	mov dword ptr [esi+0x10C],eax
	mov eax,dword ptr [edx+0x34]
	push 1
	call eax
	pop edi
	pop esi
	pop ebx
	ret 8

 Block68:
	push edi
	push ebx
	mov ecx,esi
	call CDialog::OnKey

 Block69:
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CUtilDlgEx::SetNPC
_SUB_EXCEPTION_HANDLER(58C9B0)
__SUB_CLASS_THIS0(0058C9B0, __thiscall, 44605,  CUtilDlgEx, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x78]
	sub esp,0x78
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_58C9B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xBC
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x74],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [ebp+0x5C],ebx
	xor edi,edi
	test byte ptr [ebx+0xC34],2
	je Block2

 Block1:
	cmp dword ptr [TSingleton<CUserLocal>::ms_pInstance],edi
	je Block506

 Block2:
	mov eax,dword ptr [ebx+0x98]
	cmp eax,5
	je Block4

 Block3:
	mov dword ptr [ebp-0x34],edi
	cmp eax,6
	jne Block5

 Block4:
	mov dword ptr [ebp-0x34],1

 Block5:
	lea eax,[ebp-0x64]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	mov edx,3
	mov dword ptr [ebp-4],edi
	mov word ptr [ebp+0x60],dx
	mov dword ptr [ebp+0x68],edi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],1
	cmp ecx,edi
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea eax,[ebp-0x64]
	push eax
	lea edx,[ebp+0x60]
	push edx
	push edi
	push edi
	push edi
	push edi
	push edi
	lea eax,[ebp+0x4C]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x134]
	cmp esi,eax
	je Block14

 Block10:
	mov dword ptr [ebx+0x134],eax
	cmp eax,edi
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block12:
	cmp esi,edi
	je Block14

 Block13:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block14:
	mov eax,dword ptr [ebp+0x4C]
	cmp eax,edi
	je Block16

 Block15:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block16:
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0
	jne Block19

 Block17:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	cmp eax,edi
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	cmp word ptr [ebp-0x64],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [ebp-0x64],ax
	mov eax,dword ptr [ebp-0x5C]
	cmp eax,edi
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[ebp-0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	lea edx,[ebp+0x4C]
	push edx
	mov ecx,ebx
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [ebp-4],2
	mov word ptr [ebp+0x60],cx
	mov dword ptr [ebp+0x68],eax
	cmp eax,edi
	je Block26

 Block25:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block26:
	mov esi,dword ptr [ebx+0x134]
	mov byte ptr [ebp-4],3
	cmp esi,edi
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	mov edx,dword ptr [ebp+0x60]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x64]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x68]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x6C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	cmp eax,edi
	jge Block30

 Block29:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block30:
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],2
	jne Block33

 Block31:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	cmp eax,edi
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov eax,dword ptr [ebp+0x4C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,edi
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	lea eax,[ebp+0x4C]
	push eax
	mov ecx,ebx
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [ebp-4],4
	mov word ptr [ebp+0x60],cx
	mov dword ptr [ebp+0x68],eax
	cmp eax,edi
	je Block38

 Block37:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block38:
	mov esi,dword ptr [ebx+0x134]
	mov byte ptr [ebp-4],5
	cmp esi,edi
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	mov edx,dword ptr [ebp+0x60]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x64]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x68]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x6C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,edi
	jge Block42

 Block41:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block42:
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],4
	jne Block45

 Block43:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	cmp eax,edi
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov eax,dword ptr [ebp+0x4C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,edi
	je Block48

 Block47:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block48:
	mov esi,dword ptr [ebx+0x134]
	cmp esi,edi
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,edi
	jge Block52

 Block51:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block52:
	mov esi,dword ptr [ebx+0x134]
	cmp esi,edi
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	mov eax,dword ptr [ebx+0xC34]
	mov edx,dword ptr [esi]
	and eax,8
	push eax
	mov eax,dword ptr [edx+0xD8]
	push esi
	call eax
	cmp eax,edi
	jge Block56

 Block55:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block56:
	mov dword ptr [ebp-0x3C],edi
	lea ecx,[ebp+0x4C]
	push 0xAB8
	push ecx
	mov dword ptr [ebp-4],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [ebx+0xBC]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp-0x3C]
	push eax
	mov byte ptr [ebp-4],7
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x4C]
	add esp,0xC
	mov byte ptr [ebp-4],6
	cmp eax,edi
	je Block58

 Block57:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block58:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x88]
	push ecx
	call esi
	lea edx,[ebp-0x88]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block60

 Block59:
	push eax
	call _com_issue_error

 Block60:
	lea eax,[ebp-0x64]
	push eax
	mov byte ptr [ebp-4],8
	call esi
	lea ecx,[ebp-0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	mov ebx,dword ptr [ebp-0x3C]
	push edi
	push edi
	push 0xFFFFFFFF
	push ebx
	push edi
	push edi
	mov byte ptr [ebp-4],9
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push edi
	push edi
	lea edx,[ebp-0x88]
	push edx
	lea eax,[ebp-0x64]
	push eax
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push ebx
	push edi
	push edi
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0xA
	cmp dword ptr [_D_G_RM],edi
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	lea ecx,[ebp-0xC8]
	push ecx
	mov byte ptr [ebp-4],9
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x40]
	mov dword ptr [ebp-0x40],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block67

 Block65:
	cmp eax,0x80004002
	je Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	mov esi,8
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0xC8],si
	jne Block70

 Block68:
	mov eax,dword ptr [ebp-0xC0]
	xor edx,edx
	mov word ptr [ebp-0xC8],dx
	cmp eax,edi
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea eax,[ebp-0xC8]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block71:
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x64],si
	jne Block74

 Block72:
	mov eax,dword ptr [ebp-0x5C]
	xor ecx,ecx
	mov word ptr [ebp-0x64],cx
	cmp eax,edi
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea edx,[ebp-0x64]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x88],si
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [ebp-0x88],ax
	mov eax,dword ptr [ebp-0x80]
	cmp eax,edi
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[ebp-0x88]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov ebx,dword ptr [ebp+0x5C]
	mov edx,dword ptr [ebx+0xBC]
	push edx
	call CNpcTemplate::GetNpcTemplate
	mov ecx,dword ptr [TSingleton<CNpcPool>::ms_pInstance]
	mov dword ptr [ebp+0x20],eax
	mov eax,dword ptr [ebx+0xBC]
	add esp,4
	push eax
	call CNpcPool::FindNpcByTemplateID
	test byte ptr [ebx+0xC34],2
	mov edi,dword ptr [ebp-0x40]
	mov esi,eax
	mov dword ptr [ebp+0x4C],esi
	je Block92

 Block80:
	mov esi,ebx
	lea ecx,[esi+0x148]
	call ZRef<CAvatar>::_Alloc
	push 0
	push 0x64
	push 0
	push 0
	push 0
	lea ecx,[ebp+0x54]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x70],esp
	mov bl,0x10
	push eax
	mov byte ptr [ebp-4],bl
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzGr2DLayer>::_QueryUnknown
	test eax,eax
	jge Block83

 Block81:
	cmp eax,0x80004002
	je Block83

 Block82:
	push eax
	call _com_issue_error

 Block83:
	lea edx,[ebp+0x50]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x11
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x44],esp
	push eax
	mov byte ptr [ebp-4],0x12
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	test eax,eax
	jge Block86

 Block84:
	cmp eax,0x80004002
	je Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	mov ecx,dword ptr [esi+0x14C]
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	push 5
	add eax,0x8C
	push eax
	mov byte ptr [ebp-4],0x13
	call CAvatar::Init_1
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block88

 Block87:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block88:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block90

 Block89:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block90:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	cmp dword ptr [eax+0x588],0
	je Block191

 Block91:
	mov ecx,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [ecx+0x14C]
	add eax,0x498
	push eax
	push 1
	call CAvatar::ForcingAppearance
	jmp Block191

 Block92:
	xor edx,edx
	cmp edi,edx
	sete al
	test al,al
	je Block154

 Block93:
	mov ecx,dword ptr [ebp+0x20]
	cmp ecx,edx
	jne Block95

 Block94:
	push 0x897B50
	mov dword ptr [ebx+0xBC],0x897B50
	call CNpcTemplate::GetNpcTemplate
	mov ecx,dword ptr [ebp+0x20]
	add esp,4
	xor edx,edx

 Block95:
	cmp dword ptr [ecx+0xE4],edx
	jbe Block101

 Block96:
	cmp esi,edx
	je Block191

 Block97:
	mov edi,ebx
	lea ecx,[edi+0x148]
	call ZRef<CAvatar>::_Alloc
	push 0
	push 0x64
	push 0
	push 0
	push 0
	lea edx,[ebp+0x54]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x70],esp
	mov bl,0x14
	push eax
	mov byte ptr [ebp-4],bl
	call _x_com_ptr<IWzGr2DLayer>::CreateFromUnknown
	lea eax,[ebp+0x50]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x15
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x44],esp
	push eax
	mov byte ptr [ebp-4],0x16
	call _x_com_ptr<IWzVector2D>::CreateFromUnknown
	mov eax,dword ptr [esi+0x8C]
	mov ecx,dword ptr [edi+0x14C]
	push 4
	add eax,4
	push eax
	mov byte ptr [ebp-4],0x17
	call CAvatar::Init_1
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block99

 Block98:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block99:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block191

 Block100:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block191

 Block101:
	int 3// TODO: 	mov dword ptr [ebp-0x78],offset ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::`vftable'
	mov dword ptr [ebp-0x70],edx
	mov dword ptr [ebp-0x6C],edx
	mov dword ptr [ebp-0x68],edx
	mov eax,dword ptr [ecx+0x78]
	mov byte ptr [ebp-4],0x18
	cmp eax,edx
	jne Block103

 Block102:
	xor eax,eax
	jmp Block104

 Block103:
	mov eax,dword ptr [eax-4]

 Block104:
	mov esi,2
	cmp esi,eax
	sbb esi,esi
	neg esi
	inc esi
	cmp dword ptr [ebx+0xBC],0xF7508
	jne Block111

 Block105:
	mov dword ptr [ebp+0x58],edx
	mov eax,dword ptr [ecx+0x78]
	mov byte ptr [ebp-4],0x19
	cmp eax,edx
	jne Block107

 Block106:
	xor eax,eax
	jmp Block108

 Block107:
	mov eax,dword ptr [eax-4]

 Block108:
	lea ecx,[ebp-0x41]
	push ecx
	add eax,2
	push eax
	lea ecx,[ebp+0x58]
	call ZArray<ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>>::_Alloc
	mov eax,dword ptr [ebp+0x58]
	lea edx,[esi+esi*4]
	lea ecx,[ebp-0x78]
	lea ebx,[eax+edx*4]
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::RemoveAll
	push ebx
	lea ecx,[ebp-0x78]
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::AddTail_List
	cmp dword ptr [ebp-0x70],0
	jne Block110

 Block109:
	mov edi,dword ptr [ebp+0x20]
	mov ebx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push 1
	mov ecx,edi
	call CNpcTemplate::CalcClientActionSetIdx
	push eax
	lea ecx,[ebp-0x78]
	push ecx
	push esi
	push edi
	mov ecx,ebx
	call CActionMan::LoadNpcAction

 Block110:
	lea ecx,[ebp+0x58]
	mov byte ptr [ebp-4],0x18
	call ZArray<ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>>::RemoveAll
	jmp Block112

 Block111:
	mov edi,dword ptr [ebp+0x20]
	mov ebx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push 1
	mov ecx,edi
	call CNpcTemplate::CalcClientActionSetIdx
	push eax
	lea edx,[ebp-0x78]
	push edx
	push esi
	push edi
	mov ecx,ebx
	call CActionMan::LoadNpcAction

 Block112:
	mov eax,3
	mov word ptr [ebp+0x60],ax
	mov dword ptr [ebp+0x68],0xFFFFFFFE
	mov ebx,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [ebx+0x134]
	mov byte ptr [ebp-4],0x1A
	test ecx,ecx
	jne Block114

 Block113:
	push 0x80004003
	call _com_issue_error

 Block114:
	lea edx,[ebp+0x60]
	push edx
	lea eax,[ebp+0x50]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block116

 Block115:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block116:
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0x18
	jne Block119

 Block117:
	xor eax,eax
	mov word ptr [ebp+0x60],ax
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea ecx,[ebp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block120:
	mov eax,dword ptr [ebp-0x6C]
	mov dword ptr [ebp+0x44],eax
	test eax,eax
	je Block153

 Block121:
	mov edi,dword ptr [ZImports::_VariantInit]
	nop

 Block122:
	lea edx,[ebp+0x44]
	push edx
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	lea eax,[ebp]
	push eax
	call edi
	lea ecx,[ebp]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block123:
	lea edx,[ebp-0x1C]
	push edx
	mov byte ptr [ebp-4],0x1B
	call edi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block124:
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],0x1C
	call edi
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block125:
	lea eax,[ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0x1D
	call edi
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block6

 Block126:
	mov eax,dword ptr [esi+0x10]
	mov edx,3
	mov word ptr [ebp+0x60],dx
	mov dword ptr [ebp+0x68],eax
	mov ecx,dword ptr [ebx+0x134]
	mov esi,dword ptr [esi+0xC]
	mov byte ptr [ebp-4],0x1F
	test ecx,ecx
	je Block8

 Block127:
	lea eax,[ebp]
	push eax
	lea edx,[ebp-0x1C]
	push edx
	lea eax,[ebp-0x2C]
	push eax
	lea edx,[ebp+0x10]
	push edx
	lea eax,[ebp+0x60]
	push eax
	push esi
	lea edx,[ebp+0x34]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp+0x34],8
	jne Block130

 Block128:
	xor eax,eax
	mov word ptr [ebp+0x34],ax
	mov eax,dword ptr [ebp+0x3C]
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea ecx,[ebp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block131:
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0x1E
	jne Block138

 Block132:
	mov eax,dword ptr [ebp+0x68]
	xor edx,edx
	mov word ptr [ebp+0x60],dx
	test eax,eax
	je Block134

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block134:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block135:
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],0x1D
	jne Block139

 Block136:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	test eax,eax
	je Block140

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block138:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp+0x60]
	push eax
	call esi
	jmp Block135

 Block139:
	lea edx,[ebp+0x10]
	push edx
	call esi

 Block140:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0x1C
	jne Block143

 Block141:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block144

 Block142:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block144

 Block143:
	lea ecx,[ebp-0x2C]
	push ecx
	call esi

 Block144:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x1B
	jne Block147

 Block145:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block148

 Block146:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block148

 Block147:
	lea eax,[ebp-0x1C]
	push eax
	call esi

 Block148:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x18
	jne Block151

 Block149:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	test eax,eax
	je Block152

 Block150:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block152

 Block151:
	lea edx,[ebp]
	push edx
	call esi

 Block152:
	cmp dword ptr [ebp+0x44],0
	jne Block122

 Block153:
	lea ecx,[ebp-0x78]
	mov byte ptr [ebp-4],0xF
	int 3// TODO: 	mov dword ptr [ebp-0x78],offset ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::RemoveAll
	jmp Block191

 Block154:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x60]
	push eax
	call esi
	lea ecx,[ebp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block156

 Block155:
	push eax
	call _com_issue_error

 Block156:
	lea edx,[ebp+0x10]
	push edx
	mov byte ptr [ebp-4],0x20
	call esi
	lea eax,[ebp+0x10]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block158

 Block157:
	push eax
	call _com_issue_error

 Block158:
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],0x21
	call esi
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block160

 Block159:
	push eax
	call _com_issue_error

 Block160:
	lea eax,[ebp-0x1C]
	push eax
	mov byte ptr [ebp-4],0x22
	call esi
	lea ecx,[ebp-0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block162

 Block161:
	push eax
	call _com_issue_error

 Block162:
	lea edx,[ebp]
	mov bl,0x23
	push edx
	mov byte ptr [ebp-4],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block164

 Block163:
	push eax
	call _com_issue_error

 Block164:
	mov ecx,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [ecx+0x134]
	mov byte ptr [ebp-4],0x24
	test ecx,ecx
	jne Block166

 Block165:
	push 0x80004003
	call _com_issue_error

 Block166:
	lea edx,[ebp+0x60]
	push edx
	lea eax,[ebp+0x10]
	push eax
	lea edx,[ebp-0x2C]
	push edx
	lea eax,[ebp-0x1C]
	push eax
	lea edx,[ebp]
	push edx
	push edi
	lea eax,[ebp+0x34]
	push eax
	call IWzGr2DLayer::InsertCanvas
	mov edi,8
	cmp word ptr [ebp+0x34],di
	jne Block173

 Block167:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	test eax,eax
	je Block169

 Block168:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block169:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block170:
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp],di
	jne Block174

 Block171:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block175

 Block172:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block175

 Block173:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp+0x34]
	push edx
	call esi
	jmp Block170

 Block174:
	lea ecx,[ebp]
	push ecx
	call esi

 Block175:
	mov byte ptr [ebp-4],0x22
	cmp word ptr [ebp-0x1C],di
	jne Block178

 Block176:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block179

 Block177:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block179

 Block178:
	lea eax,[ebp-0x1C]
	push eax
	call esi

 Block179:
	mov byte ptr [ebp-4],0x21
	cmp word ptr [ebp-0x2C],di
	jne Block182

 Block180:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block183

 Block181:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block183

 Block182:
	lea edx,[ebp-0x2C]
	push edx
	call esi

 Block183:
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp+0x10],di
	jne Block186

 Block184:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	test eax,eax
	je Block187

 Block185:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block187

 Block186:
	lea ecx,[ebp+0x10]
	push ecx
	call esi

 Block187:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp+0x60],di
	jne Block190

 Block188:
	mov eax,dword ptr [ebp+0x68]
	xor edx,edx
	mov word ptr [ebp+0x60],dx
	test eax,eax
	je Block191

 Block189:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block191

 Block190:
	lea eax,[ebp+0x60]
	push eax
	call esi

 Block191:
	xor eax,eax
	mov dword ptr [ebp+0x54],eax
	mov dword ptr [ebp+0x50],eax
	cmp dword ptr [ebp-0x34],eax
	jne Block386

 Block192:
	lea ecx,[ebp-0x1C]
	push ecx
	mov dword ptr [ebp+0x54],0x79
	mov dword ptr [ebp+0x50],0x17
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block194

 Block193:
	push eax
	call _com_issue_error

 Block194:
	mov eax,3
	mov word ptr [ebp],ax
	mov dword ptr [ebp+8],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x26
	test ecx,ecx
	jne Block196

 Block195:
	push 0x80004003
	call _com_issue_error

 Block196:
	lea edx,[ebp-0x1C]
	push edx
	lea eax,[ebp]
	push eax
	push 0
	push 0
	push 0
	push 0
	push 0
	lea edx,[ebp+0x70]
	push edx
	call IWzGr2D::CreateLayer
	mov edi,dword ptr [ebp+0x5C]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x13C]
	cmp esi,eax
	je Block201

 Block197:
	mov dword ptr [edi+0x13C],eax
	test eax,eax
	je Block199

 Block198:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block199:
	test esi,esi
	je Block201

 Block200:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block201:
	mov eax,dword ptr [ebp+0x70]
	test eax,eax
	je Block203

 Block202:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block203:
	mov esi,8
	mov byte ptr [ebp-4],0x25
	cmp word ptr [ebp],si
	jne Block206

 Block204:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	test eax,eax
	je Block207

 Block205:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block207

 Block206:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block207:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x1C],si
	jne Block210

 Block208:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	je Block211

 Block209:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block211

 Block210:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block211:
	lea edx,[ebp+0x70]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x27
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp+0x60],cx
	mov dword ptr [ebp+0x68],eax
	test eax,eax
	je Block213

 Block212:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block213:
	mov esi,dword ptr [edi+0x13C]
	mov byte ptr [ebp-4],0x28
	test esi,esi
	jne Block215

 Block214:
	push 0x80004003
	call _com_issue_error

 Block215:
	mov edx,dword ptr [ebp+0x60]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x64]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x68]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x6C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block217

 Block216:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block217:
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],bl
	jne Block220

 Block218:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block221

 Block219:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block221

 Block220:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block221:
	mov eax,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block223

 Block222:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block223:
	lea eax,[ebp+0x70]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x29
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp+0x60],cx
	mov dword ptr [ebp+0x68],eax
	test eax,eax
	je Block225

 Block224:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block225:
	mov esi,dword ptr [edi+0x13C]
	mov byte ptr [ebp-4],0x2A
	test esi,esi
	jne Block227

 Block226:
	push 0x80004003
	call _com_issue_error

 Block227:
	mov edx,dword ptr [ebp+0x60]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x64]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x68]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x6C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block229

 Block228:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block229:
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],bl
	jne Block232

 Block230:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block233

 Block231:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block233

 Block232:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block233:
	mov eax,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block235

 Block234:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block235:
	mov esi,dword ptr [edi+0x13C]
	test esi,esi
	jne Block237

 Block236:
	push 0x80004003
	call _com_issue_error

 Block237:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block239

 Block238:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block239:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x1C]
	push edx
	call edi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	xor esi,esi
	add esp,8
	cmp eax,esi
	jge Block241

 Block240:
	push eax
	call _com_issue_error

 Block241:
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],0x2B
	call edi
	lea edx,[ebp]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block243

 Block242:
	push eax
	call _com_issue_error

 Block243:
	push esi
	push esi
	lea eax,[ebp-0x1C]
	push eax
	lea ecx,[ebp]
	push ecx
	push ecx
	mov dword ptr [ebp+0x70],esp
	mov ecx,esp
	mov bl,0x2C
	push offset _S_UIUIWINDOW2IMGUT__24
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x2D
	cmp dword ptr [_D_G_RM],esi
	jne Block245

 Block244:
	push 0x80004003
	call _com_issue_error

 Block245:
	lea edx,[ebp-0xA8]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x2E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+0x44],esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block248

 Block246:
	cmp eax,0x80004002
	je Block248

 Block247:
	push eax
	call _com_issue_error

 Block248:
	mov ebx,8
	mov byte ptr [ebp-4],0x30
	cmp word ptr [ebp-0xA8],bx
	jne Block251

 Block249:
	xor eax,eax
	mov word ptr [ebp-0xA8],ax
	mov eax,dword ptr [ebp-0xA0]
	cmp eax,esi
	je Block252

 Block250:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block252

 Block251:
	lea ecx,[ebp-0xA8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block252:
	mov byte ptr [ebp-4],0x31
	cmp word ptr [ebp],bx
	jne Block255

 Block253:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	cmp eax,esi
	je Block256

 Block254:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block256

 Block255:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block256:
	mov byte ptr [ebp-4],0x32
	cmp word ptr [ebp-0x1C],bx
	jne Block259

 Block257:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,esi
	je Block260

 Block258:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block260

 Block259:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block260:
	mov dword ptr [ebp+0x48],esi
	lea eax,[ebp+0x58]
	push 0x16
	push eax
	mov byte ptr [ebp-4],0x33
	call get_basic_font
	add esp,8
	lea ecx,[ebp+0x70]
	push 0x3D0
	push ecx
	mov byte ptr [ebp-4],0x34
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	lea edx,[ebp+0x48]
	push edx
	push eax
	mov byte ptr [ebp-4],0x35
	call PcCreate_IWzCanvas
	mov eax,dword ptr [ebp+0x70]
	add esp,0xC
	mov byte ptr [ebp-4],0x34
	cmp eax,esi
	je Block262

 Block261:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block262:
	lea eax,[ebp+0x10]
	push eax
	call edi
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block264

 Block263:
	push eax
	call _com_issue_error

 Block264:
	lea edx,[ebp-0x2C]
	mov bl,0x36
	push edx
	mov byte ptr [ebp-4],bl
	call edi
	lea eax,[ebp-0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block266

 Block265:
	push eax
	call _com_issue_error

 Block266:
	mov ecx,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x37
	cmp ecx,esi
	jne Block268

 Block267:
	push 0x80004003
	call _com_issue_error

 Block268:
	lea edx,[ebp+0x10]
	push edx
	lea eax,[ebp-0x2C]
	push eax
	push 0x17
	push 0x79
	call IWzCanvas::Create
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],bl
	jne Block271

 Block269:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	cmp eax,esi
	je Block272

 Block270:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block272

 Block271:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block272:
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],0x34
	jne Block275

 Block273:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	cmp eax,esi
	je Block276

 Block274:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block276

 Block275:
	lea ecx,[ebp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block276:
	lea edx,[ebp+0x10]
	push edx
	call edi
	lea eax,[ebp+0x10]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block278

 Block277:
	push eax
	call _com_issue_error

 Block278:
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],0x38
	call edi
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block280

 Block279:
	push eax
	call _com_issue_error

 Block280:
	push esi
	push esi
	lea eax,[ebp+0x10]
	push eax
	lea ecx,[ebp-0x2C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x70],esp
	push 0x6AC
	mov bl,0x39
	push edx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x3A
	cmp dword ptr [_D_G_RM],esi
	jne Block282

 Block281:
	push 0x80004003
	call _com_issue_error

 Block282:
	lea eax,[ebp-0xB8]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x3B
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x38]
	mov dword ptr [ebp-0x38],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block285

 Block283:
	cmp eax,0x80004002
	je Block285

 Block284:
	push eax
	call _com_issue_error

 Block285:
	mov ebx,8
	mov byte ptr [ebp-4],0x3D
	cmp word ptr [ebp-0xB8],bx
	jne Block288

 Block286:
	mov eax,dword ptr [ebp-0xB0]
	xor ecx,ecx
	mov word ptr [ebp-0xB8],cx
	cmp eax,esi
	je Block289

 Block287:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block289

 Block288:
	lea edx,[ebp-0xB8]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block289:
	mov byte ptr [ebp-4],0x3E
	cmp word ptr [ebp-0x2C],bx
	jne Block292

 Block290:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	cmp eax,esi
	je Block293

 Block291:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block293

 Block292:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block293:
	mov byte ptr [ebp-4],0x3F
	cmp word ptr [ebp+0x10],bx
	jne Block296

 Block294:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	cmp eax,esi
	je Block297

 Block295:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block297

 Block296:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block297:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x70],esp
	push 0x671
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,dword ptr [ebp+0x5C]
	mov edx,dword ptr [ebx+0xBC]
	push edx
	push ecx
	mov ecx,dword ptr [ebp-0x38]
	mov eax,esp
	mov dword ptr [ebp+0x70],esp
	mov dword ptr [eax],ecx
	cmp ecx,esi
	je Block299

 Block298:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+4]
	call ecx

 Block299:
	lea edx,[ebp-0x30]
	push edx
	call get_labeled_string_0
	add esp,0x10
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x40
	cmp eax,esi
	je Block302

 Block300:
	cmp dword ptr [eax+0xE4],esi
	je Block302

 Block301:
	add eax,4
	push eax
	lea ecx,[ebp-0x30]
	call ZXString<char>::op_assign

 Block302:
	test byte ptr [ebx+0xC34],2
	je Block304

 Block303:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [eax+0x19EC]
	push eax
	lea ecx,[ebp-0x30]
	call ZXString<char>::AssignCStr

 Block304:
	mov ecx,3
	mov word ptr [ebp+0x60],cx
	mov dword ptr [ebp+0x68],0xFF
	mov ebx,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],0x41
	cmp ebx,esi
	jne Block306

 Block305:
	push 0x80004003
	call _com_issue_error

 Block306:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[ebp+0x70]
	push eax
	push ebx
	mov dword ptr [ebp+0x70],esi
	call ecx
	cmp eax,esi
	jge Block308

 Block307:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block308:
	mov ecx,dword ptr [ebp+0x48]
	cmp ecx,esi
	jne Block310

 Block309:
	push 0x80004003
	call _com_issue_error

 Block310:
	lea edx,[ebp+0x60]
	push edx
	mov eax,0x79
	sub eax,dword ptr [ebp+0x70]
	push ebx
	push 3
	shr eax,1
	push eax
	call IWzCanvas::Copy
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0x40
	jne Block313

 Block311:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	cmp eax,esi
	je Block314

 Block312:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block314

 Block313:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block314:
	lea eax,[ebp+0x60]
	push eax
	call edi
	lea ecx,[ebp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jge Block316

 Block315:
	push eax
	call _com_issue_error

 Block316:
	mov eax,dword ptr [ebp-0x30]
	lea edx,[ebp+0x60]
	push edx
	push ecx
	mov dword ptr [ebp+0x70],esp
	mov ecx,esp
	mov bl,0x42
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x43
	cmp ecx,esi
	jne Block318

 Block317:
	push 0x80004003
	call _com_issue_error

 Block318:
	mov byte ptr [ebp-4],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+0x60],8
	mov esi,eax
	mov byte ptr [ebp-4],0x40
	jne Block321

 Block319:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block322

 Block320:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block322

 Block321:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block322:
	cmp esi,0x79
	jle Block326

 Block323:
	push 0x79
	push ecx
	mov ecx,dword ptr [ebp+0x58]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x58]
	mov dword ptr [ebp+0x70],esp
	test eax,eax
	je Block325

 Block324:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block325:
	lea ecx,[ebp-0x30]
	push ecx
	call format_string_1
	add esp,0xC

 Block326:
	lea edx,[ebp-0x54]
	push edx
	call edi
	lea eax,[ebp-0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block328

 Block327:
	push eax
	call _com_issue_error

 Block328:
	lea ecx,[ebp+0x60]
	push ecx
	mov byte ptr [ebp-4],0x44
	call edi
	lea edx,[ebp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block330

 Block329:
	push eax
	call _com_issue_error

 Block330:
	mov edx,dword ptr [ebp+0x58]
	lea eax,[ebp-0x54]
	push eax
	mov eax,dword ptr [ebp-0x30]
	lea ecx,[ebp+0x60]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp+0x70],esp
	mov ecx,esp
	mov bl,0x45
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x46
	test ecx,ecx
	jne Block332

 Block331:
	push 0x80004003
	call _com_issue_error

 Block332:
	mov eax,0x79
	sub eax,esi
	cdq
	sub eax,edx
	push 5
	sar eax,1
	push eax
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp+0x60],8
	mov byte ptr [ebp-4],0x44
	jne Block335

 Block333:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block336

 Block334:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block336

 Block335:
	lea edx,[ebp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block336:
	cmp word ptr [ebp-0x54],8
	mov byte ptr [ebp-4],0x40
	jne Block342

 Block337:
	xor eax,eax
	mov word ptr [ebp-0x54],ax
	mov eax,dword ptr [ebp-0x4C]
	test eax,eax
	je Block339

 Block338:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block339:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block340:
	lea edx,[ebp+0x34]
	push edx
	call edi
	lea eax,[ebp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block343

 Block341:
	push eax
	call _com_issue_error

 Block342:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x54]
	push ecx
	call esi
	jmp Block340

 Block343:
	lea ecx,[ebp+0x24]
	push ecx
	mov byte ptr [ebp-4],0x47
	call edi
	lea edx,[ebp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block345

 Block344:
	push eax
	call _com_issue_error

 Block345:
	lea eax,[ebp-0x98]
	push eax
	mov byte ptr [ebp-4],0x48
	call edi
	lea ecx,[ebp-0x98]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block347

 Block346:
	push eax
	call _com_issue_error

 Block347:
	lea edx,[ebp+0x60]
	push edx
	mov byte ptr [ebp-4],0x49
	call edi
	lea eax,[ebp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block349

 Block348:
	push eax
	call _com_issue_error

 Block349:
	lea ecx,[ebp-0x54]
	mov bl,0x4A
	push ecx
	mov byte ptr [ebp-4],bl
	call edi
	lea edx,[ebp-0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block351

 Block350:
	push eax
	call _com_issue_error

 Block351:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax+0x13C]
	mov byte ptr [ebp-4],0x4B
	test ecx,ecx
	jne Block353

 Block352:
	push 0x80004003
	call _com_issue_error

 Block353:
	lea edx,[ebp+0x34]
	push edx
	lea eax,[ebp+0x24]
	push eax
	lea edx,[ebp-0x98]
	push edx
	lea eax,[ebp+0x60]
	push eax
	mov eax,dword ptr [ebp+0x48]
	lea edx,[ebp-0x54]
	push edx
	push eax
	lea edx,[ebp-0x74]
	push edx
	call IWzGr2DLayer::InsertCanvas
	mov edi,8
	cmp word ptr [ebp-0x74],di
	jne Block356

 Block354:
	xor eax,eax
	mov word ptr [ebp-0x74],ax
	mov eax,dword ptr [ebp-0x6C]
	test eax,eax
	je Block357

 Block355:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block357

 Block356:
	lea ecx,[ebp-0x74]
	push ecx
	call esi

 Block357:
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x54],di
	jne Block360

 Block358:
	mov eax,dword ptr [ebp-0x4C]
	xor edx,edx
	mov word ptr [ebp-0x54],dx
	test eax,eax
	je Block361

 Block359:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block361

 Block360:
	lea eax,[ebp-0x54]
	push eax
	call esi

 Block361:
	mov byte ptr [ebp-4],0x49
	cmp word ptr [ebp+0x60],di
	jne Block364

 Block362:
	mov eax,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov word ptr [ebp+0x60],cx
	test eax,eax
	je Block365

 Block363:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block365

 Block364:
	lea edx,[ebp+0x60]
	push edx
	call esi

 Block365:
	mov byte ptr [ebp-4],0x48
	cmp word ptr [ebp-0x98],di
	jne Block368

 Block366:
	xor eax,eax
	mov word ptr [ebp-0x98],ax
	mov eax,dword ptr [ebp-0x90]
	test eax,eax
	je Block369

 Block367:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block369

 Block368:
	lea ecx,[ebp-0x98]
	push ecx
	call esi

 Block369:
	mov byte ptr [ebp-4],0x47
	cmp word ptr [ebp+0x24],di
	jne Block372

 Block370:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block373

 Block371:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block373

 Block372:
	lea eax,[ebp+0x24]
	push eax
	call esi

 Block373:
	mov byte ptr [ebp-4],0x40
	cmp word ptr [ebp+0x34],di
	jne Block376

 Block374:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	test eax,eax
	je Block377

 Block375:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block377

 Block376:
	lea edx,[ebp+0x34]
	push edx
	call esi

 Block377:
	mov eax,dword ptr [ebp-0x30]
	mov byte ptr [ebp-4],0x3F
	test eax,eax
	je Block379

 Block378:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block379:
	mov eax,dword ptr [ebp-0x38]
	mov byte ptr [ebp-4],0x34
	test eax,eax
	je Block381

 Block380:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block381:
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x33
	test eax,eax
	je Block383

 Block382:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block383:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x32
	test eax,eax
	je Block385

 Block384:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block385:
	mov eax,dword ptr [ebp+0x44]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0xF
	call edx

 Block386:
	mov edi,dword ptr [ebp+0x5C]
	mov esi,dword ptr [edi+0x134]
	xor ebx,ebx
	cmp esi,ebx
	jne Block388

 Block387:
	push 0x80004003
	call _com_issue_error

 Block388:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xB8]
	lea ecx,[ebp+0x44]
	push ecx
	push esi
	mov dword ptr [ebp+0x44],ebx
	call edx
	cmp eax,ebx
	jge Block390

 Block389:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block390:
	mov esi,dword ptr [edi+0x134]
	cmp esi,ebx
	jne Block392

 Block391:
	push 0x80004003
	call _com_issue_error

 Block392:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xC0]
	lea ecx,[ebp+0x70]
	push ecx
	push esi
	mov dword ptr [ebp+0x70],ebx
	call edx
	cmp eax,ebx
	jge Block394

 Block393:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block394:
	mov eax,dword ptr [ebp+0x20]
	mov edi,dword ptr [ebp+0x70]
	mov dword ptr [ebp+0x58],edi
	test eax,eax
	je Block396

 Block395:
	cmp dword ptr [eax+0xE4],0
	jne Block397

 Block396:
	mov eax,dword ptr [ebp+0x5C]
	test byte ptr [eax+0xC34],2
	je Block398

 Block397:
	mov ecx,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [ecx+0x14C]
	call CAvatar::GetHeight
	mov edi,eax
	mov dword ptr [ebp+0x58],eax

 Block398:
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block400

 Block399:
	mov edx,dword ptr [ebp+0x44]
	mov dword ptr [ebp+0x54],edx
	jmp Block401

 Block400:
	mov ecx,dword ptr [ebp+0x54]
	mov dword ptr [ebp+0x54],ecx

 Block401:
	mov edx,dword ptr [ebp+0x50]
	lea ebx,[edi+edx]
	mov dword ptr [ebp+0x48],ebx
	test eax,eax
	je Block403

 Block402:
	mov esi,0x34
	jmp Block449

 Block403:
	mov eax,dword ptr [ebp+0x5C]
	mov esi,dword ptr [eax+0xC38]
	neg esi
	sbb esi,esi
	lea ecx,[ebp+0x24]
	and esi,0x16E
	push ecx
	add esi,0x4C
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block405

 Block404:
	push eax
	call _com_issue_error

 Block405:
	lea eax,[ebp+0x34]
	push eax
	mov byte ptr [ebp-4],0x4C
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block407

 Block406:
	push eax
	call _com_issue_error

 Block407:
	mov edx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [edx+0xA8]
	cmp ebx,eax
	mov byte ptr [ebp-4],0x4D
	jle Block409

 Block408:
	mov eax,dword ptr [edx+0x28]
	sub eax,ebx
	lea ecx,[eax+edi-0x34]
	jmp Block410

 Block409:
	sub eax,ebx
	cdq
	sub eax,edx
	mov edx,dword ptr [ebp+0x5C]
	sar eax,1
	lea ecx,[eax+edi+0x16]

 Block410:
	mov edi,dword ptr [edx+0x13C]
	test edi,edi
	jne Block412

 Block411:
	push 0x80004003
	call _com_issue_error

 Block412:
	mov eax,dword ptr [ebp+0x54]
	cdq
	sub eax,edx
	sar eax,1
	mov ebx,esi
	sub ebx,eax
	lea edx,[ebp+0x24]
	push edx
	lea eax,[ebp+0x34]
	push eax
	push ecx
	push ebx
	mov ecx,edi
	call IWzVector2D::RelMove
	cmp word ptr [ebp+0x34],8
	mov byte ptr [ebp-4],0x4C
	jne Block415

 Block413:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	test eax,eax
	je Block416

 Block414:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block416

 Block415:
	lea edx,[ebp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block416:
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0xF
	jne Block419

 Block417:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block420

 Block418:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block420

 Block419:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block420:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [edx+0x4078],0
	jle Block449

 Block421:
	mov eax,dword ptr [ebp+0x5C]
	mov eax,dword ptr [eax+0xA8]
	cmp dword ptr [ebp+0x48],eax
	jle Block423

 Block422:
	mov ecx,dword ptr [ebp+0x5C]
	mov edx,dword ptr [ecx+0x28]
	sub edx,dword ptr [ebp+0x48]
	mov eax,dword ptr [ebp+0x58]
	lea edi,[edx+eax-0x34]
	jmp Block424

 Block423:
	sub eax,dword ptr [ebp+0x48]
	mov ecx,dword ptr [ebp+0x58]
	cdq
	sub eax,edx
	sar eax,1
	lea edi,[eax+ecx+0x16]

 Block424:
	push 0
	push 0xFF
	push 0
	push ecx
	mov ecx,dword ptr [ebp+0x5C]
	mov edx,esp
	mov dword ptr [ebp+0x70],esp
	push edx
	call CWnd::GetLayer
	mov ecx,dword ptr [ebp+0x5C]
	push edi
	add ebx,0x1A
	push ebx
	lea eax,[ebp+0x54]
	push eax
	mov byte ptr [ebp-4],0x4E
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x4F
	test ecx,ecx
	jne Block426

 Block425:
	push 0x80004003
	call _com_issue_error

 Block426:
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x38],esp
	push edx
	call IWzGr2DLayer::Getlt
	push 0
	lea eax,[ebp+0x50]
	push offset _S_UIUIWINDOW2IMGUT__23
	push eax
	mov byte ptr [ebp-4],0x50
	call CAnimationDisplayer::LoadLayer_1
	mov ecx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [eax]
	mov edi,dword ptr [ecx+0x158]
	add esp,0x28
	cmp edi,eax
	je Block431

 Block427:
	mov dword ptr [ecx+0x158],eax
	test eax,eax
	je Block429

 Block428:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block429:
	test edi,edi
	je Block431

 Block430:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block431:
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block433

 Block432:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block433:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block435

 Block434:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block435:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x24]
	push eax
	call edi
	lea ecx,[ebp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block437

 Block436:
	push eax
	call _com_issue_error

 Block437:
	lea edx,[ebp+0x34]
	mov bl,0x51
	push edx
	mov byte ptr [ebp-4],bl
	call edi
	lea eax,[ebp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block439

 Block438:
	push eax
	call _com_issue_error

 Block439:
	mov ecx,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [ecx+0x158]
	mov byte ptr [ebp-4],0x52
	test ecx,ecx
	jne Block441

 Block440:
	push 0x80004003
	call _com_issue_error

 Block441:
	lea edx,[ebp+0x24]
	push edx
	lea eax,[ebp+0x34]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x34],di
	jne Block444

 Block442:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	test eax,eax
	je Block445

 Block443:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block445

 Block444:
	lea edx,[ebp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block445:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp+0x24],di
	jne Block448

 Block446:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block449

 Block447:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block449

 Block448:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block449:
	mov edi,dword ptr [ebp+0x5C]
	test byte ptr [edi+0xC34],2
	je Block462

 Block450:
	lea ecx,[edi+0x148]
	call ZRef<CAvatar>::_Alloc
	mov eax,dword ptr [edi+0xA8]
	sub eax,dword ptr [ebp+0x48]
	push 0
	cdq
	sub eax,edx
	mov edx,dword ptr [ebp+0x58]
	push 0x64
	sar eax,1
	lea eax,[eax+edx+0x19]
	push eax
	push esi
	push 0
	lea ecx,[ebp+0x50]
	push ecx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x54],esp
	mov bl,0x53
	push eax
	mov byte ptr [ebp-4],bl
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzGr2DLayer>::_QueryUnknown
	test eax,eax
	jge Block453

 Block451:
	cmp eax,0x80004002
	je Block453

 Block452:
	push eax
	call _com_issue_error

 Block453:
	lea edx,[ebp+0x4C]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x54
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x70],esp
	push eax
	mov byte ptr [ebp-4],0x55
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	test eax,eax
	jge Block456

 Block454:
	cmp eax,0x80004002
	je Block456

 Block455:
	push eax
	call _com_issue_error

 Block456:
	mov ecx,dword ptr [edi+0x14C]
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	push 5
	add eax,0x8C
	push eax
	mov byte ptr [ebp-4],0x56
	call CAvatar::Init_1
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block458

 Block457:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block458:
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block460

 Block459:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block460:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	cmp dword ptr [eax+0x588],0
	je Block502

 Block461:
	mov ecx,dword ptr [edi+0x14C]
	add eax,0x498
	push eax
	push 1
	call CAvatar::ForcingAppearance
	jmp Block502

 Block462:
	mov eax,dword ptr [ebp+0x20]
	test eax,eax
	je Block469

 Block463:
	cmp dword ptr [eax+0xE4],0
	je Block469

 Block464:
	cmp dword ptr [ebp+0x4C],0
	je Block469

 Block465:
	lea ecx,[edi+0x148]
	call ZRef<CAvatar>::_Alloc
	mov eax,dword ptr [edi+0xA8]
	sub eax,dword ptr [ebp+0x48]
	push 0
	cdq
	sub eax,edx
	mov ecx,eax
	mov eax,dword ptr [ebp-0x34]
	sar ecx,1
	neg eax
	sbb eax,eax
	add ecx,dword ptr [ebp+0x58]
	and eax,0xFFFFFFFC
	push 0x64
	add eax,4
	lea edx,[eax+ecx+0x16]
	push edx
	add esi,0xFFFFFFF9
	push esi
	push 0
	lea eax,[ebp+0x54]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x70],esp
	mov bl,0x57
	push eax
	mov byte ptr [ebp-4],bl
	call _x_com_ptr<IWzGr2DLayer>::CreateFromUnknown
	lea ecx,[ebp+0x50]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0x58
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x44],esp
	push eax
	mov byte ptr [ebp-4],0x59
	call _x_com_ptr<IWzVector2D>::CreateFromUnknown
	mov edx,dword ptr [ebp+0x4C]
	mov eax,dword ptr [edx+0x8C]
	mov ecx,dword ptr [edi+0x14C]
	push 4
	add eax,4
	push eax
	mov byte ptr [ebp-4],0x5A
	call CAvatar::Init_1
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block467

 Block466:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block467:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block502

 Block468:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block502

 Block469:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block471

 Block470:
	push eax
	call _com_issue_error

 Block471:
	lea edx,[ebp+0x34]
	mov bl,0x5B
	push edx
	mov byte ptr [ebp-4],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block473

 Block472:
	push eax
	call _com_issue_error

 Block473:
	mov eax,dword ptr [edi+0xA8]
	mov edx,dword ptr [ebp+0x48]
	cmp edx,eax
	mov byte ptr [ebp-4],0x5C
	jle Block476

 Block474:
	cmp dword ptr [edi+0x13C],0
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block476

 Block475:
	mov eax,dword ptr [edi+0x28]
	sub eax,edx
	sub eax,0x37
	jmp Block477

 Block476:
	sub eax,edx
	cdq
	sub eax,edx
	sar eax,1
	add eax,0x16

 Block477:
	mov ecx,dword ptr [edi+0x134]
	test ecx,ecx
	jne Block479

 Block478:
	push 0x80004003
	call _com_issue_error

 Block479:
	lea edx,[ebp+0x24]
	push edx
	lea edx,[ebp+0x34]
	push edx
	mov edx,dword ptr [ebp-0x34]
	neg edx
	sbb edx,edx
	and edx,7
	add edx,7
	add edx,eax
	mov eax,dword ptr [ebp+0x44]
	push edx
	cdq
	sub eax,edx
	sar eax,1
	sub esi,eax
	push esi
	call IWzVector2D::RelMove
	mov byte ptr [ebp-4],bl
	mov ebx,8
	cmp word ptr [ebp+0x34],bx
	jne Block486

 Block480:
	xor eax,eax
	mov word ptr [ebp+0x34],ax
	mov eax,dword ptr [ebp+0x3C]
	test eax,eax
	je Block482

 Block481:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block482:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block483:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp+0x24],bx
	jne Block487

 Block484:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block488

 Block485:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block488

 Block486:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp+0x34]
	push ecx
	call esi
	jmp Block483

 Block487:
	lea eax,[ebp+0x24]
	push eax
	call esi

 Block488:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block490

 Block489:
	push eax
	call _com_issue_error

 Block490:
	lea eax,[ebp+0x34]
	mov bl,0x5D
	push eax
	mov byte ptr [ebp-4],bl
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block492

 Block491:
	push eax
	call _com_issue_error

 Block492:
	mov edi,dword ptr [edi+0x134]
	mov byte ptr [ebp-4],0x5E
	test edi,edi
	jne Block494

 Block493:
	push 0x80004003
	call _com_issue_error

 Block494:
	lea edx,[ebp+0x24]
	push edx
	lea eax,[ebp+0x34]
	push eax
	push 0x20
	mov ecx,edi
	call IWzGr2DLayer::Animate
	mov edi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x34],di
	jne Block497

 Block495:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	test eax,eax
	je Block498

 Block496:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block498

 Block497:
	lea edx,[ebp+0x34]
	push edx
	call esi

 Block498:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp+0x24],di
	jne Block501

 Block499:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block502

 Block500:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block502

 Block501:
	lea ecx,[ebp+0x24]
	push ecx
	call esi

 Block502:
	mov eax,dword ptr [ebp-0x40]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block504

 Block503:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block504:
	mov eax,dword ptr [ebp-0x3C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block506

 Block505:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block506:
	lea esp,[ebp-0xD8]
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
// CUtilDlgEx::GetBasicCTMargin
// 97AF10
static uint8_t _SUB_57AEE0_LOOKUP_TABLE_0[10] = {
0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 
};
__SUB_CLASS_THIS0(0057AEE0, __thiscall, 44636,  CUtilDlgEx, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x98]
	cmp eax,9
	ja Block4

 Block1:
	movzx eax,byte ptr [eax+_SUB_57AEE0_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3


 Block2:
	mov eax,8
	ret

 Block3:
	mov eax,2
	ret

 Block4:
	xor eax,eax
	ret
}
}
// CTextAnalyzer::GetPhraseType
_SUB_EXCEPTION_HANDLER(57D650)
// 97D9AC
static uint8_t _SUB_57D650_LOOKUP_TABLE_0[52] = {
0, 5, 5, 5, 1, 5, 2, 5, 5, 5, 5, 5, 5, 5, 3, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 
5, 5, 4, 144, 
};
// 97DA0C
static uint8_t _SUB_57D650_LOOKUP_TABLE_1[53] = {
0, 10, 1, 10, 2, 10, 10, 10, 10, 10, 3, 10, 10, 10, 10, 4, 
10, 10, 10, 10, 10, 5, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 
10, 10, 10, 6, 2, 10, 10, 7, 8, 10, 10, 10, 10, 10, 10, 10, 
10, 9, 10, 10, 7, 
};
__SUB_CLASS_THIS(0057D650, __thiscall, 44471,  CTextAnalyzer, long, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_57D650
	mov eax,dword ptr fs:[0]
	push eax
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+4]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x14]
	cmp byte ptr [eax],0x23
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x10],0xFFFFFFFF
	call ZXString<char>::_Release
	add esp,4
	xor eax,eax
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 4

 Block2:
	movsx ecx,byte ptr [eax+1]
	lea edx,[ecx-0x45]
	cmp edx,0x32
	ja Block9

 Block3:
	movzx edx,byte ptr [edx+_SUB_57D650_LOOKUP_TABLE_0]
	cmp EDX, 0
je Block4
cmp EDX, 1
je Block5
cmp EDX, 2
je Block7
cmp EDX, 3
je Block6
cmp EDX, 4
je Block8
cmp EDX, 5
je Block9


 Block4:
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x10],0xFFFFFFFF
	call ZXString<char>::_Release
	mov eax,2
	add esp,4
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 4

 Block5:
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x10],0xFFFFFFFF
	call ZXString<char>::_Release
	mov eax,3
	add esp,4
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 4

 Block6:
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x10],0xFFFFFFFF
	call ZXString<char>::_Release
	mov eax,4
	add esp,4
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 4

 Block7:
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x10],0xFFFFFFFF
	call ZXString<char>::_Release
	mov eax,5
	add esp,4
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 4

 Block8:
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x10],0xFFFFFFFF
	call ZXString<char>::_Release
	mov eax,6
	add esp,4
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 4

 Block9:
	cmp dword ptr [eax-4],2
	jle Block1

 Block10:
	add ecx,0xFFFFFFBE
	cmp ecx,0x34
	ja Block22

 Block11:
	movzx ecx,byte ptr [ecx+_SUB_57D650_LOOKUP_TABLE_1]
	cmp ECX, 0
je Block17
cmp ECX, 1
je Block20
cmp ECX, 2
je Block16
cmp ECX, 3
je Block12
cmp ECX, 4
je Block19
cmp ECX, 5
je Block21
cmp ECX, 6
je Block14
cmp ECX, 7
je Block13
cmp ECX, 8
je Block18
cmp ECX, 9
je Block15
cmp ECX, 10
je Block22


 Block12:
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x10],0xFFFFFFFF
	call ZXString<char>::_Release
	mov eax,1
	add esp,4
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 4

 Block13:
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x10],0xFFFFFFFF
	call ZXString<char>::_Release
	mov eax,7
	add esp,4
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 4

 Block14:
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x10],0xFFFFFFFF
	call ZXString<char>::_Release
	mov eax,9
	add esp,4
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 4

 Block15:
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x10],0xFFFFFFFF
	call ZXString<char>::_Release
	mov eax,0xA
	add esp,4
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 4

 Block16:
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x10],0xFFFFFFFF
	call ZXString<char>::_Release
	mov eax,0xB
	add esp,4
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 4

 Block17:
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x10],0xFFFFFFFF
	call ZXString<char>::_Release
	mov eax,0xD
	add esp,4
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 4

 Block18:
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x10],0xFFFFFFFF
	call ZXString<char>::_Release
	mov eax,0xE
	add esp,4
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 4

 Block19:
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x10],0xFFFFFFFF
	call ZXString<char>::_Release
	mov eax,0xF
	add esp,4
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 4

 Block20:
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x10],0xFFFFFFFF
	call ZXString<char>::_Release
	mov eax,0x10
	add esp,4
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 4

 Block21:
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x10],0xFFFFFFFF
	call ZXString<char>::_Release
	mov eax,0x11
	add esp,4
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 4

 Block22:
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x10],0xFFFFFFFF
	call ZXString<char>::_Release
	mov eax,0x12
	add esp,4
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 4
}
}
// CUtilDlgEx::~CUtilDlgEx
_SUB_EXCEPTION_HANDLER(586880)
__SUB_CLASS_THIS0(00586880, __thiscall, 44605,  CUtilDlgEx, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_586880
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
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	int 3// TODO: 	mov dword ptr [esi],offset CUtilDlgEx::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUtilDlgEx::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUtilDlgEx::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [CUtilDlgEx::ms_lDialog+12]
	xor ebp,ebp
	mov dword ptr [esp+0x24],0x1D
	mov dword ptr [esp+0x14],eax
	cmp eax,ebp
	je Block4

 Block1:
	mov edi,eax
	lea eax,[esp+0x14]
	push eax
	call ZList<CUtilDlgEx *>::GetNext
	add esp,4
	cmp dword ptr [eax],esi
	jne Block3

 Block2:
	push edi
	mov ecx,offset CUtilDlgEx::ms_lDialog
	call ZList<CUtilDlgEx *>::RemoveAt

 Block3:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	jne Block1

 Block4:
	lea ecx,[esi+0xC3C]
	mov byte ptr [esp+0x24],0x1C
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0xC20]
	mov byte ptr [esp+0x24],0x1B
	cmp eax,ebp
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	lea ecx,[esi+0xC1C]
	mov byte ptr [esp+0x24],0x1A
	call ZArray<_x_com_ptr<IWzFont>>::RemoveAll
	lea ecx,[esi+0xC18]
	mov byte ptr [esp+0x24],0x19
	call ZArray<CT_INFO>::RemoveAll
	lea ecx,[esi+0xC14]
	mov byte ptr [esp+0x24],0x18
	call ZArray<ZRef<CCtrlButton>>::RemoveAll
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 7
	push 8
	lea eax,[esi+0xBDC]
	push eax
	mov byte ptr [esp+0x34],0x17
	call __eh_vector_dtor_iterator
	lea edi,[esi+0xBD4]
	mov byte ptr [esp+0x24],0x16
	cmp dword ptr [edi+4],ebp
	je Block8

 Block7:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlComboBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block8:
	lea edi,[esi+0xBCC]
	mov byte ptr [esp+0x24],0x15
	cmp dword ptr [edi+4],ebp
	je Block10

 Block9:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block10:
	lea edi,[esi+0xBC4]
	mov byte ptr [esp+0x24],0x14
	cmp dword ptr [edi+4],ebp
	je Block12

 Block11:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlMLEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block12:
	lea edi,[esi+0xBBC]
	mov byte ptr [esp+0x24],0x13
	cmp dword ptr [edi+4],ebp
	je Block14

 Block13:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block14:
	lea edi,[esi+0xBB4]
	mov byte ptr [esp+0x24],0x12
	cmp dword ptr [edi+4],ebp
	je Block16

 Block15:
	push ebp
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block16:
	lea ecx,[esi+0x16C]
	mov byte ptr [esp+0x24],0x11
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+0x168]
	mov byte ptr [esp+0x24],0x10
	cmp eax,ebp
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov eax,dword ptr [esi+0x164]
	mov byte ptr [esp+0x24],0xF
	cmp eax,ebp
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	lea ecx,[esi+0x15C]
	mov byte ptr [esp+0x24],0xE
	call ZArray<CUtilDlgEx::PET_INFO>::RemoveAll
	mov eax,dword ptr [esi+0x158]
	mov byte ptr [esp+0x24],0xD
	cmp eax,ebp
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block22:
	mov eax,dword ptr [esi+0x154]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x24],0xC
	cmp eax,ebp
	je Block27

 Block23:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block26

 Block24:
	push ebp
	call ebx
	test edi,edi
	je Block26

 Block25:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block26:
	mov dword ptr [esi+0x154],0
	xor ebp,ebp

 Block27:
	mov eax,dword ptr [esi+0x14C]
	mov byte ptr [esp+0x24],0xB
	cmp eax,ebp
	je Block32

 Block28:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block31

 Block29:
	push ebp
	call ebx
	test edi,edi
	je Block31

 Block30:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block31:
	mov dword ptr [esi+0x14C],0
	xor ebp,ebp

 Block32:
	mov eax,dword ptr [esi+0x144]
	mov byte ptr [esp+0x24],0xA
	cmp eax,ebp
	je Block37

 Block33:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block36

 Block34:
	mov eax,dword ptr [esi+0x144]
	add eax,4
	push eax
	call ebx
	mov ecx,dword ptr [esi+0x144]
	cmp ecx,ebp
	je Block36

 Block35:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block36:
	mov dword ptr [esi+0x144],ebp

 Block37:
	mov eax,dword ptr [esi+0x13C]
	mov byte ptr [esp+0x24],9
	cmp eax,ebp
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	mov eax,dword ptr [esi+0x138]
	mov byte ptr [esp+0x24],8
	cmp eax,ebp
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block41:
	mov eax,dword ptr [esi+0x134]
	mov byte ptr [esp+0x24],7
	cmp eax,ebp
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block43:
	mov eax,dword ptr [esi+0x130]
	mov byte ptr [esp+0x24],6
	cmp eax,ebp
	je Block45

 Block44:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block45:
	lea ecx,[esi+0x120]
	mov byte ptr [esp+0x24],5
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0x11C]
	mov byte ptr [esp+0x24],4
	call ZArray<CT_INFO *>::RemoveAll
	mov eax,dword ptr [esi+0x104]
	mov byte ptr [esp+0x24],3
	cmp eax,ebp
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block47:
	mov eax,dword ptr [esi+0xE4]
	mov byte ptr [esp+0x24],2
	cmp eax,ebp
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block49:
	mov eax,dword ptr [esi+0xE0]
	mov byte ptr [esp+0x24],1
	cmp eax,ebp
	je Block51

 Block50:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block51:
	lea ecx,[esi+0xD8]
	mov byte ptr [esp+0x24],0
	call ZArray<ZXString<char>>::RemoveAll
	mov ecx,esi
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret
}
}
// CUtilDlgEx::Layout_INPUT
__SUB_CLASS_THIS0(0057B1A0, __thiscall, 44605,  CUtilDlgEx, void) {
__asm {

 Block0:
	mov edx,dword ptr [ecx+0xA4]
	call CUtilDlgEx::GetCTHeight_Min
	cmp edx,eax
	jge Block2

 Block1:
	call CUtilDlgEx::GetCTHeight_Min
	mov dword ptr [ecx+0xA8],eax
	jmp Block3

 Block2:
	mov dword ptr [ecx+0xA8],edx

 Block3:
	push esi
	mov esi,dword ptr [ecx+0xC0]
	mov eax,esi
	neg eax
	sbb eax,eax
	and eax,0xFFFFFF6E
	add eax,0x9E
	mov dword ptr [ecx+0xB0],0
	mov dword ptr [ecx+0x9C],eax
	test esi,esi
	je Block5

 Block4:
	mov eax,0xFFFFFFFA
	jmp Block6

 Block5:
	mov eax,dword ptr [ecx+0xA8]
	sub eax,edx
	sub eax,0x14
	cdq
	sub eax,edx
	sar eax,1

 Block6:
	add eax,0x16
	mov dword ptr [ecx+0xA0],eax
	call CUtilDlgEx::GetWndWidth
	neg esi
	sbb esi,esi
	and esi,0x1B
	add esi,0x42
	add esi,dword ptr [ecx+0xA8]
	mov dword ptr [ecx+0xB4],eax
	mov dword ptr [ecx+0xB8],esi
	pop esi
	ret
}
}
// CUtilDlgEx::SetUtilDlgEx_AVATAR
_SUB_EXCEPTION_HANDLER(57DAE0)
__SUB_CLASS_THIS(0057DAE0, __thiscall, 44631,  CUtilDlgEx, void, ZArray<long>&, NakedParam<ZRef<CharacterData>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_57DAE0
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
	mov esi,ecx
	lea eax,[esp+0x2C]
	xor edi,edi
	push eax
	lea ecx,[esi+0x150]
	mov dword ptr [esp+0x24],edi
	call ZRef<CharacterData>::op_assign_copy
	push 0x205
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	cmp dword ptr [TSingleton<CWvsContext>::ms_pInstance],edi
	jne Block3

 Block1:
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x20],1
	cmp eax,edi
	je Block5

 Block2:
	mov ecx,dword ptr [esi+0x154]
	push ecx
	mov ecx,eax
	call AvatarLook::_ctor_0
	jmp Block6

 Block3:
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x20],2
	cmp eax,edi
	je Block5

 Block4:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,dword ptr [esi+0x154]
	lea ebx,[edx+0x3A50]
	push ebx
	add edx,0x3870
	push edx
	push ecx
	mov ecx,eax
	call AvatarLook::_ctor_4
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	push eax
	lea ecx,[esi+0x140]
	mov byte ptr [esp+0x24],0
	call ZRef<AvatarLook>::op_assign_ptr
	mov eax,dword ptr [esi+0x144]
	mov ebp,dword ptr [esp+0x28]
	mov dword ptr [eax+0x15],edi
	mov eax,dword ptr [esi+0x144]
	mov dword ptr [eax+0x45],edi
	mov eax,dword ptr [esi+0x144]
	mov dword ptr [eax+0x135],edi
	mov dword ptr [esi+0x12C],1
	mov eax,dword ptr [ebp]
	cmp eax,edi
	jne Block8

 Block7:
	xor eax,eax
	jmp Block9

 Block8:
	mov eax,dword ptr [eax-4]

 Block9:
	lea ecx,[esp+0x28]
	push ecx
	lea ebx,[esi+0x120]
	push eax
	mov ecx,ebx
	call ZArray<long>::_Alloc
	mov ecx,ebp
	call ZArray<long>::GetCount
	test eax,eax
	jbe Block11

 Block10:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+edi*4]
	mov eax,dword ptr [ebx]
	mov dword ptr [eax+edi*4],ecx
	mov ecx,ebp
	inc edi
	call ZArray<long>::GetCount
	cmp edi,eax
	jb Block10

 Block11:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx]
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,2
	jne Block13

 Block12:
	xor eax,eax
	jmp Block14

 Block13:
	xor ecx,ecx
	cmp eax,3
	setne cl
	inc ecx
	mov eax,ecx

 Block14:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	sub esp,8
	mov dword ptr [esi+0x124],eax
	mov eax,dword ptr [esi+0x144]
	mov ecx,esp
	mov dword ptr [esi+0x128],0
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block16

 Block15:
	add eax,4
	push eax
	call ebx

 Block16:
	mov ecx,esi
	call CUtilDlgEx::SetAvatar
	push 1
	mov ecx,esi
	call CUtilDlgEx::Layout_GEN
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block20

 Block17:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block20

 Block18:
	push edi
	call ebx
	test esi,esi
	je Block20

 Block19:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block20:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 0xC
}
}
// CUtilDlgEx::OnMouseMove
__SUB_CLASS_THIS(00583060, __thiscall, 44608,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	push eax
	push edx
	add ecx,0xFFFFFFFC
	call CUtilDlgEx::CheckMousePoint
	xor eax,eax
	ret 8
}
}
// CUtilDlgEx::MakeAvatar
_SUB_EXCEPTION_HANDLER(581E10)
__SUB_CLASS_THIS(00581E10, __thiscall, 44645,  CUtilDlgEx, void, NakedParam<ZRef<AvatarLook>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_581E10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x68]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esp+0x7C]
	sub esp,8
	mov eax,esp
	xor ebp,ebp
	mov dword ptr [eax+4],ecx
	mov eax,dword ptr [esp+0x84]
	mov dword ptr [esp+0x78],ebp
	mov dword ptr [esp+0x2C],esp
	cmp eax,ebp
	je Block2

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov ecx,esi
	call CUtilDlgEx::SetAvatar
	lea ecx,[esi+0x148]
	call ZRef<CAvatar>::_Alloc
	push ebp
	push 0x64
	push 0xCA
	push 0xBD
	push 1
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x3C],esp
	push edx
	mov ecx,esi
	call CWnd::GetLayer
	lea eax,[esp+0x38]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x8C],1
	call CWnd::GetLayer
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [edi],ebp
	mov eax,dword ptr [eax]
	push ecx
	mov ebx,2
	mov ecx,esp
	mov byte ptr [esp+0x90],bl
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	mov ecx,edi
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	cmp eax,ebp
	jge Block7

 Block5:
	cmp eax,0x80004002
	je Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	mov ecx,dword ptr [esi+0x14C]
	mov eax,dword ptr [esp+0x98]
	push 5
	push eax
	mov byte ptr [esp+0x94],3
	call CAvatar::Init_1
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x70],0
	cmp eax,ebp
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	cmp dword ptr [esi+0x124],ebx
	je Block49

 Block10:
	mov eax,3
	mov word ptr [esp+0x28],ax
	mov dword ptr [esp+0x30],ebp
	mov ecx,dword ptr [esi+0x138]
	mov byte ptr [esp+0x70],4
	cmp ecx,ebp
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x28]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x70],6
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov edi,dword ptr [esp+0x24]
	cmp edi,ebp
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x1C]
	push ecx
	push edi
	mov dword ptr [esp+0x24],ebp
	call edx
	cmp eax,ebp
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block20:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	mov ebx,dword ptr [esp+0x1C]
	lea ecx,[esp+0x20]
	push ecx
	push edi
	mov dword ptr [esp+0x28],ebp
	call edx
	cmp eax,ebp
	jge Block22

 Block21:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block22:
	mov ecx,dword ptr [esp+0x20]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x8C]
	push 0xFFFFFF
	push ebx
	push ecx
	push ebp
	push ebp
	push edi
	call edx
	cmp eax,ebp
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block24:
	mov ecx,dword ptr [esi+0x120]
	mov eax,dword ptr [esi+0x128]
	mov eax,dword ptr [ecx+eax*4]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call CItemInfo::GetItemName
	lea eax,[esp+0x14]
	push 0x16
	push eax
	mov byte ptr [esp+0x78],7
	call get_basic_font
	add esp,8
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x58]
	push ecx
	mov byte ptr [esp+0x74],8
	call esi
	lea edx,[esp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	lea eax,[esp+0x48]
	push eax
	mov byte ptr [esp+0x74],9
	call esi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x74],0xA
	call esi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov eax,dword ptr [esp+0x14]
	lea ecx,[esp+0x58]
	push ecx
	lea edx,[esp+0x4C]
	push edx
	mov edx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x84],0xB
	call _xbstr_t::_ctor_0
	mov edx,dword ptr [esp+0x28]
	push 4
	lea eax,[esp+0x4C]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov bl,0xC
	push edx
	mov byte ptr [esp+0x90],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x30]
	mov byte ptr [esp+0x8C],0xD
	cmp ecx,ebp
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	mov byte ptr [esp+0x8C],bl
	call IWzFont::CalcTextWidth
	shr eax,1
	mov ecx,0x56
	sub ecx,eax
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x88],0xB
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x70],0xA
	cmp word ptr [esp+0x38],si
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,ebp
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov byte ptr [esp+0x70],9
	cmp word ptr [esp+0x48],si
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	cmp eax,ebp
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov byte ptr [esp+0x70],8
	cmp word ptr [esp+0x58],si
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	cmp eax,ebp
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],7
	cmp eax,ebp
	je Block46

 Block45:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block46:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x70],6
	cmp eax,ebp
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [esp+0x74],0
	call edx

 Block49:
	mov eax,dword ptr [esp+0x7C]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp eax,ebp
	je Block53

 Block50:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x7C]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x7C]
	cmp ecx,ebp
	je Block53

 Block52:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block53:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret 8
}
}
// CUtilDlgEx::HitTest
__SUB_CLASS_THIS(0057B020, __thiscall, 44615,  CUtilDlgEx, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x18]
	push edi
	push ebx
	push eax
	mov esi,ecx
	call CWnd::HitTest
	test eax,eax
	je Block4

 Block1:
	test edi,edi
	je Block3

 Block2:
	cmp dword ptr [edi],0
	jne Block4

 Block3:
	xor eax,eax
	cmp ebx,dword ptr [esi+0xA0]
	setge al
	inc eax

 Block4:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CUtilDlgEx::SetUtilDlgEx_INPUT_NO
_SUB_EXCEPTION_HANDLER(583080)
__SUB_CLASS_THIS(00583080, __thiscall, 44624,  CUtilDlgEx, void, long, long, long, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_583080
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x20]
	test edi,edi
	jge Block2

 Block1:
	xor edi,edi

 Block2:
	mov ebx,dword ptr [esp+0x34]
	test ebx,ebx
	jne Block5

 Block3:
	lea eax,[esp+0x20]
	push 0x1A15
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea ecx,[esi+0xE4]
	push ecx
	mov dword ptr [esp+0x24],ebx
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esi+0xF8],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [esi+0xEC],ecx
	mov ecx,esi
	mov dword ptr [esi+0xE8],eax
	mov dword ptr [esi+0xF0],edx
	mov dword ptr [esi+0x108],ebx
	call CUtilDlgEx::Layout_INPUT
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 0x18
}
}
// CTextAnalyzer::GetPhrase_Gen
_SUB_EXCEPTION_HANDLER(5838B0)
__SUB_CLASS_THIS(005838B0, __thiscall, 44473,  CTextAnalyzer, void, ZXString<char>&, ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5838B0
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
	mov dword ptr [esp+0x18],ecx
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov edi,dword ptr [esp+0x2C]
	push ebx
	lea eax,[esp+0x18]
	push eax
	push edi
	mov dword ptr [esp+0x30],ebx
	call CTextAnalyzer::GetCharacter
	mov ebp,dword ptr [esp+0x30]
	lea esp,[esp]

 Block1:
	mov esi,dword ptr [esp+0x14]
	cmp esi,ebx
	je Block9

 Block2:
	mov al,byte ptr [esi]
	cmp al,bl
	je Block9

 Block3:
	cmp al,0xD
	je Block9

 Block4:
	cmp al,0x23
	je Block9

 Block5:
	cmp al,0x5C
	je Block9

 Block6:
	mov ecx,dword ptr [esi-4]
	push ecx
	push esi
	mov ecx,ebp
	call ZXString<char>::_Cat
	mov edx,dword ptr [esi-4]
	push 0xFFFFFFFF
	push edx
	lea eax,[esp+0x34]
	push eax
	mov ecx,edi
	call ZXString<char>::Mid
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x28],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	push ebx
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	push edi
	call CTextAnalyzer::GetCharacter
	jmp Block1

 Block9:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp esi,ebx
	je Block11

 Block10:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block11:
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
// CTextAnalyzer::CheckSecretItemID
__SUB_CLASS_THIS(0057B370, __thiscall, 44486,  CTextAnalyzer, long, long) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+eax*4]
	add edx,edx
	push esi
	sub ecx,edx
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetQuestItemID
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov esi,eax
	push esi
	call CWvsContext::IsExist
	test eax,eax
	mov eax,esi
	jne Block2

 Block1:
	mov eax,0x39FC18

 Block2:
	pop esi
	ret 4
}
}
// CUtilDlgEx::ValidateScroll
__SUB_CLASS_THIS(0057B670, __thiscall, 44642,  CUtilDlgEx, void, CT_INFO*) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	push edi
	mov edi,ecx
	je Block28

 Block1:
	cmp dword ptr [edi+0xBD0],0
	je Block28

 Block2:
	mov eax,dword ptr [edi+0x11C]
	mov edx,dword ptr [edi+0xAC]
	push ebx
	push esi
	mov esi,dword ptr [edi+0xA8]
	lea ebx,[esi+edx+3]
	test eax,eax
	je Block12

 Block3:
	mov ecx,dword ptr [eax-4]
	test ecx,ecx
	je Block12

 Block4:
	push ebp
	mov ebp,eax
	cmp dword ptr [ebp],0
	je Block8

 Block5:
	mov eax,dword ptr [ebp]
	mov eax,dword ptr [eax+0x1C]
	cmp eax,esi
	jle Block7

 Block6:
	mov eax,0x32

 Block7:
	add edx,eax

 Block8:
	cmp dword ptr [ebp+ecx*4-4],0
	pop ebp
	je Block12

 Block9:
	mov eax,dword ptr [edi+0x11C]
	mov esi,dword ptr [eax+ecx*4-4]
	mov eax,dword ptr [edi+0xA4]
	sub eax,dword ptr [esi+0x24]
	sub eax,dword ptr [esi+0x1C]
	cmp eax,0x32
	jle Block11

 Block10:
	sub ebx,0x32
	jmp Block12

 Block11:
	sub ebx,eax

 Block12:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [eax+0x1C]
	cmp ecx,edx
	jge Block19

 Block13:
	mov eax,dword ptr [edi+0xBD0]
	mov esi,dword ptr [eax+0x38]
	dec esi
	sub edx,8
	test esi,esi
	jl Block17

 Block14:
	mov edi,edi

 Block15:
	cmp ecx,edx
	jge Block18

 Block16:
	dec esi
	sub edx,8
	test esi,esi
	jge Block15

 Block17:
	push 0
	mov ecx,eax
	call CCtrlScrollBar::SetCurPos
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x1C]
	push esi
	push 0x12C
	push 0x3E9
	mov ecx,edi
	call eax
	pop esi
	pop ebx
	pop edi
	ret 4

 Block18:
	push esi
	mov ecx,eax
	call CCtrlScrollBar::SetCurPos
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x1C]
	push esi
	push 0x12C
	push 0x3E9
	mov ecx,edi
	call eax
	pop esi
	pop ebx
	pop edi
	ret 4

 Block19:
	mov edx,dword ptr [eax+0x24]
	add ecx,edx
	cmp ecx,ebx
	jle Block27

 Block20:
	mov eax,dword ptr [edi+0xBD0]
	mov esi,dword ptr [eax+0x38]
	mov eax,dword ptr [eax+0x3C]
	inc esi
	add ebx,8
	cmp esi,eax
	jge Block24

 Block21:
	mov edi,edi

 Block22:
	cmp ecx,ebx
	jle Block25

 Block23:
	inc esi
	add ebx,8
	cmp esi,eax
	jl Block22

 Block24:
	mov ecx,dword ptr [edi+0xBD0]
	mov eax,dword ptr [ecx+0x3C]
	dec eax
	push eax
	jmp Block26

 Block25:
	mov ecx,dword ptr [edi+0xBD0]
	push esi

 Block26:
	call CCtrlScrollBar::SetCurPos
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x1C]
	push esi
	push 0x12D
	push 0x3E9
	mov ecx,edi
	call eax

 Block27:
	pop esi
	pop ebx

 Block28:
	pop edi
	ret 4
}
}
