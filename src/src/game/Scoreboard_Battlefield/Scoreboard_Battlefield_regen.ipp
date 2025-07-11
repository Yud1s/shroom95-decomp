#include "regen.hpp"
// Scoreboard_Battlefield.ipp
#include "Scoreboard_Battlefield.hpp"

// CScoreboard_Battlefield::LoadClockCanvas
_SUB_EXCEPTION_HANDLER(2DAE70)
__SUB_CLASS_THIS(002DAE70, __thiscall, 82706,  CScoreboard_Battlefield, void, ZArray<_x_com_ptr<IWzCanvas> >&, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DAE70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ebp+0xC]
	xor ebx,ebx
	mov dword ptr [ebp-4],ebx
	cmp eax,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x18]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x20]
	mov dword ptr [ebp-0x18],ebx
	call eax
	cmp eax,ebx
	jge Block4

 Block3:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov edx,dword ptr [ebp-0x18]
	mov edi,dword ptr [ebp+8]
	lea ecx,[ebp-0x19]
	push ecx
	push edx
	mov ecx,edi
	call ZArray<_x_com_ptr<IWzCanvas>>::_Alloc

 Block5:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],1
	test ecx,ecx
	je Block1

 Block6:
	lea eax,[ebp-0x2C]
	push eax
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,dword ptr [edi]
	lea esi,[ecx+ebx*4]
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block15

 Block7:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x18]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov edi,eax
	xor eax,eax
	test edi,edi
	setl al
	dec eax
	and eax,dword ptr [ebp-0x18]
	mov dword ptr [ebp-0x14],eax
	mov eax,dword ptr [esi]
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [esi],eax
	test edi,edi
	jge Block11

 Block10:
	cmp edi,0x80004002
	jne Block26

 Block11:
	mov edi,dword ptr [ebp+8]

 Block12:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0
	jne Block17

 Block13:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block18

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block15:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block12

 Block16:
	mov dword ptr [esi],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block12

 Block17:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	inc ebx
	cmp ebx,0xA
	jl Block5

 Block19:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x5C3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],3
	test ecx,ecx
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	lea eax,[ebp-0x2C]
	push eax
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov esi,dword ptr [edi]
	mov ecx,eax
	mov byte ptr [ebp-4],4
	add esi,0x28
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block27

 Block22:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x14]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [esi]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp-0x14]
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block29

 Block25:
	cmp edi,0x80004002
	je Block29

 Block26:
	push edi
	call _com_issue_error

 Block27:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block29

 Block28:
	mov dword ptr [esi],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block29:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block35

 Block34:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block35:
	lea esp,[ebp-0x3C]
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
	ret 8
}
}
// CScoreboard_Battlefield::CScoreboard_Battlefield
__SUB_CLASS_THIS0(002DA0D0, __thiscall, 82699,  CScoreboard_Battlefield, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CWnd::_ctor_default
	xor eax,eax
	mov dword ptr [esi+0x88],eax
	mov dword ptr [esi+0x98],eax
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [esi+0xD8],eax
	int 3// TODO: 	mov dword ptr [esi],offset CScoreboard_Battlefield::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CScoreboard_Battlefield::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CScoreboard_Battlefield::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xDC],eax
	mov dword ptr [esi+0xE0],eax
	mov dword ptr [esi+0xE4],eax
	mov dword ptr [esi+0xE8],eax
	mov dword ptr [esi+0xEC],eax
	mov dword ptr [esi+0xF0],eax
	mov eax,esi
	pop esi
	ret
}
}
// CScoreboard_Battlefield::Draw
_SUB_EXCEPTION_HANDLER(2DA1D0)
__SUB_CLASS_THIS(002DA1D0, __thiscall, 82703,  CScoreboard_Battlefield, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DA1D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	lea eax,[esp+0x20]
	push eax
	mov dword ptr [esp+0x44],ebp
	call CWnd::GetCanvas
	mov esi,dword ptr [esp+0x20]
	mov byte ptr [esp+0x40],1
	cmp esi,ebp
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],ebp
	call eax
	cmp eax,ebp
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	mov ebx,dword ptr [esp+0x18]
	lea edx,[esp+0x1C]
	push edx
	push esi
	mov dword ptr [esp+0x24],ebp
	call eax
	cmp eax,ebp
	jge Block6

 Block5:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push ebx
	push edx
	push ebp
	push ebp
	push esi
	call eax
	cmp eax,ebp
	jge Block8

 Block7:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov ecx,0xFF
	mov dword ptr [esp+0x30],ecx
	mov edx,dword ptr [edi+0xDC]
	mov ebp,dword ptr [esp+0x28]
	mov ebx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x3C]
	push edx
	mov edx,dword ptr [ebx+0x80]
	push 0
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x4C]
	push 0
	push esi
	mov byte ptr [esp+0x60],2
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block10

 Block9:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x40],1
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov eax,dword ptr [edi+0x94]
	xor ecx,ecx
	test eax,eax
	jle Block16

 Block15:
	mov ecx,eax

 Block16:
	mov eax,0x88888889
	imul ecx
	mov eax,dword ptr [edi+0xE8]
	add edx,ecx
	sar edx,5
	mov ebx,edx
	shr ebx,0x1F
	add ebx,edx
	mov edx,ebx
	shl edx,4
	sub edx,ebx
	add edx,edx
	add edx,edx
	sub ecx,edx
	push 3
	push ecx
	mov dword ptr [esp+0x20],ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block18:
	push ecx
	mov ebp,esp
	mov dword ptr [esp+0x30],esp
	push 0
	push 2
	mov ecx,ebp
	mov byte ptr [esp+0x54],3
	mov dword ptr [ebp],0
	call ZXString<char>::GetBuffer
	mov cx,word ptr [_S_00]
	mov word ptr [eax],cx
	push 2
	mov ecx,ebp
	call ZXString<char>::ReleaseBuffer
	push 0x3E
	push 0x69
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x3C],esp
	push esi
	call eax
	mov byte ptr [esp+0x58],1
	call draw_text_by_image
	mov ecx,3
	mov word ptr [esp+0x40],cx
	mov ecx,0xFF
	mov dword ptr [esp+0x48],ecx
	mov eax,dword ptr [edi+0xD8]
	mov edx,dword ptr [eax+0x28]
	mov ebp,dword ptr [esp+0x40]
	add esp,8
	add eax,0x28
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [esp+0x2C],edx
	mov edx,dword ptr [esi]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [edx+0x80]
	push eax
	push 0x40
	push 0x7B
	push esi
	mov byte ptr [esp+0x60],4
	call ecx
	test eax,eax
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x40],1
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov eax,dword ptr [edi+0xE8]
	push 3
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block26:
	push ebx
	lea eax,[esp+0x20]
	push offset _S_02D
	push eax
	mov byte ptr [esp+0x54],5
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push 0x3E
	push 0x7F
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x34],esp
	push esi
	call edx
	mov byte ptr [esp+0x58],1
	call draw_text_by_image
	mov eax,3
	mov ecx,0xFF
	mov word ptr [esp+0x40],ax
	mov dword ptr [esp+0x48],ecx
	mov eax,dword ptr [edi+0xD8]
	mov edx,dword ptr [eax+0x28]
	mov ebp,dword ptr [esp+0x40]
	mov ebx,dword ptr [esi]
	add esp,8
	add eax,0x28
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x3C]
	push edx
	mov edx,dword ptr [ebx+0x80]
	push 0x40
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x4C]
	push 0x91
	push esi
	mov byte ptr [esp+0x60],6
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block28

 Block27:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block28:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x40],1
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov eax,dword ptr [edi+0xE8]
	push 3
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block34

 Block33:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block34:
	mov ecx,dword ptr [esp+0x20]
	push ecx
	lea edx,[esp+0x20]
	push offset _S_02D
	push edx
	mov byte ptr [esp+0x54],7
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push 0x3E
	push 0x94
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x34],esp
	push esi
	call ecx
	mov byte ptr [esp+0x58],1
	call draw_text_by_image
	mov eax,dword ptr [edi+0xE0]
	add esp,0x18
	push 4
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block36

 Block35:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block36:
	mov ecx,dword ptr [edi+0xEC]
	push ecx
	lea edx,[esp+0x20]
	push offset _S_02D
	push edx
	mov byte ptr [esp+0x54],8
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push 0xE
	push 0x37
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x34],esp
	push esi
	call ecx
	mov byte ptr [esp+0x58],1
	call draw_text_by_image
	mov eax,dword ptr [edi+0xE4]
	add esp,0x18
	push 4
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block38

 Block37:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block38:
	mov ecx,dword ptr [edi+0xF0]
	push ecx
	lea edx,[esp+0x20]
	push offset _S_02D
	push edx
	mov byte ptr [esp+0x54],9
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push 0xE
	push 0x73
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x34],esp
	push esi
	call ecx
	mov byte ptr [esp+0x58],1
	call draw_text_by_image
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	add esp,0x18
	push esi
	mov byte ptr [esp+0x44],0
	call eax
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test eax,eax
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block40:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 4
}
}
// CScoreboard_Battlefield::OnCreate
_SUB_EXCEPTION_HANDLER(2DA8B0)
__SUB_CLASS_THIS(002DA8B0, __thiscall, 82702,  CScoreboard_Battlefield, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DA8B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x68
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x7C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	lea ecx,[esp+0x4C]
	call CClock::INITPARAM::_ctor_default
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x88],0
	call CClock::OnCreate
	or esi,0xFFFFFFFF
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0x84],esi
	call CClock::INITPARAM::~INITPARAM
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call ebp
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0x88],1
	call ebp
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push 0
	push 0
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x13F6
	mov bl,2
	push eax
	mov byte ptr [esp+0xA0],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x98],3
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0x9C],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x8C],4
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xDC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov byte ptr [esp+0x84],bl
	mov ebx,8
	cmp word ptr [esp+0x3C],bx
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0x84],1
	cmp word ptr [esp+0x1C],bx
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov dword ptr [esp+0x84],esi
	cmp word ptr [esp+0x2C],bx
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea edx,[esp+0x1C]
	push edx
	call ebp
	lea eax,[esp+0x1C]
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
	lea ecx,[esp+0x2C]
	push ecx
	mov dword ptr [esp+0x88],5
	call ebp
	lea edx,[esp+0x2C]
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
	lea eax,[esp+0x1C]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x13F7
	mov bl,6
	push edx
	mov byte ptr [esp+0x98],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x90],7
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[esp+0x48]
	mov byte ptr [esp+0x90],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x8C],8
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [esp+0x88],9
	lea esi,[edi+0xE0]
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block29

 Block28:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block29:
	mov ecx,esi
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	test eax,eax
	jge Block32

 Block30:
	cmp eax,0x80004002
	je Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x84],8
	test eax,eax
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	mov esi,8
	mov byte ptr [esp+0x84],bl
	cmp word ptr [esp+0x3C],si
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov byte ptr [esp+0x84],5
	cmp word ptr [esp+0x2C],si
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov dword ptr [esp+0x84],0xFFFFFFFF
	cmp word ptr [esp+0x1C],si
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
	lea eax,[esp+0x1C]
	push eax
	call ebp
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	lea edx,[esp+0x2C]
	push edx
	mov dword ptr [esp+0x88],0xA
	call ebp
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x30]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x13F8
	push eax
	mov byte ptr [esp+0x98],0xB
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x90],0xC
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x94],0xB
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	push eax
	lea edx,[esp+0x18]
	mov bl,0xD
	push edx
	mov byte ptr [esp+0x8C],bl
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [esp+0x88],0xE
	lea esi,[edi+0xE4]
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block54:
	mov ecx,esi
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	test eax,eax
	jge Block57

 Block55:
	cmp eax,0x80004002
	je Block57

 Block56:
	push eax
	call _com_issue_error

 Block57:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x84],bl
	test eax,eax
	je Block59

 Block58:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block59:
	mov esi,8
	mov byte ptr [esp+0x84],0xB
	cmp word ptr [esp+0x3C],si
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov byte ptr [esp+0x84],0xA
	cmp word ptr [esp+0x2C],si
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov dword ptr [esp+0x84],0xFFFFFFFF
	cmp word ptr [esp+0x1C],si
	jne Block70

 Block68:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x34]
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xE8]
	cmp esi,eax
	je Block76

 Block72:
	mov dword ptr [edi+0xE8],eax
	test eax,eax
	je Block74

 Block73:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block74:
	test esi,esi
	je Block76

 Block75:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block76:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block78

 Block77:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block78:
	mov ecx,dword ptr [esp+0x7C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x74
	ret 4
}
}
// CScoreboard_Battlefield::GetFontTime
_SUB_EXCEPTION_HANDLER(2DA6F0)
__SUB_CLASS_THIS0(002DA6F0, __thiscall, 82705,  CScoreboard_Battlefield, _x_com_ptr<IWzProperty>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2DA6F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebx
	push ebp
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	lea eax,[esp+0x24]
	mov dword ptr [esp+0x10],0
	mov esi,dword ptr [ZImports::_VariantInit]
	push eax
	call esi
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x14]
	push edx
	mov dword ptr [esp+0x50],0
	call esi
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push 0
	push 0
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x20]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x13F9
	mov bl,1
	push eax
	mov byte ptr [esp+0x68],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x60],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x64],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x54],3
	call Ztl_variant_t::GetUnknown
	mov esi,dword ptr [esp+0x54]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x4C],bl
	mov ebx,8
	cmp word ptr [esp+0x34],bx
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x34]
	push eax
	call ebp

 Block13:
	mov byte ptr [esp+0x4C],0
	cmp word ptr [esp+0x14],bx
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x14]
	push edx
	call ebp

 Block17:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp word ptr [esp+0x24],bx
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x24]
	push ecx
	call ebp

 Block21:
	mov eax,esi
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 4
}
}
// CScoreboard_Battlefield::~CScoreboard_Battlefield
__SUB_CLASS_THIS0(002DA140, __thiscall, 82701,  CScoreboard_Battlefield, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	int 3// TODO: 	mov dword ptr [esi],offset CScoreboard_Battlefield::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CScoreboard_Battlefield::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CScoreboard_Battlefield::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xE8]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xE4]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xE0]
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0xDC]
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov ecx,esi
	pop esi
	jmp  CClock::~CClock
}
}
