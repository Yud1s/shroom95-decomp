#include "regen.hpp"
// UtilPartyQuestDraw.ipp
#include "UtilPartyQuestDraw.hpp"

// GetFont
__SUB0(0058FDC0, __cdecl, 80195,  CFontContainer*) {
__asm {

 Block0:
	jmp  TSimpleSingleton<CFontContainer>::GetInstance
}
}
// DrawQuestUnit2
_SUB_EXCEPTION_HANDLER(58FDD0)
__SUB(0058FDD0, __cdecl, 80197,  void, const PartyQuestInfo*, NakedParam<_x_com_ptr<IWzCanvas>>, long, long, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_58FDD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,dword ptr [ebp+0x14]
	mov eax,dword ptr [ebp+0x10]
	push edi
	push eax
	push ecx
	mov esi,esp
	mov dword ptr [ebp-0x14],esp
	push 0x44
	push offset _S_UIUIWINDOW2IMGUS__1
	push 0
	push 0x22
	mov ecx,esi
	mov dword ptr [ebp-4],0
	mov dword ptr [esi],0
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0x22
	mov ecx,esi
	call ZXString16::ReleaseBuffer
	push ecx
	mov ecx,dword ptr [ebp+0xC]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-0x14],esp
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	call DrawImage
	mov ebx,dword ptr [ebp+8]
	add esp,0x10
	test ebx,ebx
	je Block28

 Block3:
	mov eax,dword ptr [ebx+8]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ecx,dword ptr [ebp+0x10]
	mov eax,dword ptr [ebx+8]
	mov esi,esp
	add edi,5
	push edi
	add ecx,4
	push ecx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov edi,esp
	mov dword ptr [ebp-0x14],esp
	mov dword ptr [edi],0
	test esi,esi
	je Block7

 Block4:
	mov eax,esi
	lea edx,[eax+2]
	lea ebx,[ebx]

 Block5:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block5

 Block6:
	sub eax,edx
	sar eax,1
	mov ebx,eax
	lea edx,[ebx+ebx]
	push edx
	push esi
	push 0
	push ebx
	mov ecx,edi
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebx
	mov ecx,edi
	call ZXString16::ReleaseBuffer
	mov ebx,dword ptr [ebp+8]

 Block7:
	push ecx
	mov ecx,dword ptr [ebp+0xC]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-0x14],esp
	test eax,eax
	je Block9

 Block8:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block9:
	call DrawImage
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0x10
	lea ecx,[ebp-0x34]
	push ecx
	call esi
	lea edx,[ebp-0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	lea eax,[ebp-0x24]
	push eax
	mov byte ptr [ebp-4],1
	call esi
	lea ecx,[ebp-0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	lea edx,[ebp-0x34]
	push edx
	lea eax,[ebp-0x24]
	push eax
	mov byte ptr [ebp-4],2
	call TSimpleSingleton<CFontContainer>::GetInstance
	add eax,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [ebx+4]
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],3
	test ecx,ecx
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	mov esi,dword ptr [ebp+0x14]
	mov edi,dword ptr [ebp+0x10]
	lea edx,[esi+6]
	push edx
	lea eax,[edi+0x2F]
	push eax
	mov byte ptr [ebp-4],2
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],1
	jne Block18

 Block16:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],0
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [ebp-0x34],ax
	mov eax,dword ptr [ebp-0x2C]
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[ebp-0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov edx,dword ptr [ebx+0xC]
	push 0
	push edx
	add esi,0x1D
	push esi
	lea eax,[edi+0x46]
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0xC]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-0x14],esp
	test eax,eax
	je Block25

 Block24:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block25:
	call DrawNumberForLevel
	mov ecx,dword ptr [ebx+0x10]
	mov edx,dword ptr [ebp+0xC]
	add esp,0x14
	push 0
	push ecx
	push esi
	add edi,0x74
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-0x14],esp
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block27:
	call DrawNumberForLevel
	add esp,0x14

 Block28:
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	lea esp,[ebp-0x44]
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
// CFontContainer::~CFontContainer
__SUB_CLASS_THIS0(0058F070, __thiscall, 80093,  CFontContainer, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x18]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x14]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x10]
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0xC]
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+8]
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov esi,dword ptr [esi]
	test esi,esi
	je Block14

 Block13:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block14:
	pop esi
	ret
}
}
// DoDraw
_SUB_EXCEPTION_HANDLER(590180)
__SUB(00590180, __cdecl, 80201,  void, const PartyQuestInfo*, NakedParam<_x_com_ptr<IWzCanvas>>, long, long, int32_t, NakedParam<ZXString16>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_590180
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp-4],1
	call GetLevel
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov edi,eax
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x40]
	call edx
	xor ebx,ebx
	cmp dword ptr [esi+0xC],edi
	mov ecx,eax
	setg bl
	cmp dword ptr [esi],0x7D4
	jne Block3

 Block1:
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,1
	je Block3

 Block2:
	cmp edi,0x8C
	jl Block4

 Block3:
	test ebx,ebx
	je Block27

 Block4:
	mov ebx,dword ptr [ebp+0x10]
	mov ecx,dword ptr [ebp+0xC]
	push 0xB4
	push ebx
	push ecx
	push ecx
	mov ecx,esp
	lea edx,[ebp+0x14]
	mov dword ptr [ebp-0x14],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	push ecx
	mov ecx,dword ptr [ebp+8]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-0x14],esp
	test eax,eax
	je Block6

 Block5:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block6:
	call DrawGrayImage
	mov eax,dword ptr [esi+8]
	add esp,0x14
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ecx,dword ptr [ebp+0xC]
	mov eax,dword ptr [esi+8]
	mov edi,esp
	push 0xB4
	add ebx,3
	push ebx
	add ecx,3
	push ecx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov ebx,esp
	mov dword ptr [ebp-0x14],esp
	mov dword ptr [ebx],0
	test edi,edi
	je Block10

 Block7:
	mov eax,edi
	lea edx,[eax+2]
	lea esp,[esp]

 Block8:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block8

 Block9:
	sub eax,edx
	sar eax,1
	lea edx,[eax+eax]
	push edx
	push edi
	push 0
	push eax
	mov ecx,ebx
	mov dword ptr [ebp-0x14],eax
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	mov eax,dword ptr [ebp-0x14]
	add esp,0xC
	push eax
	mov ecx,ebx
	call ZXString16::ReleaseBuffer

 Block10:
	push ecx
	mov ecx,dword ptr [ebp+8]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-0x14],esp
	test eax,eax
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block12:
	call DrawGrayImage
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [esi+0xC]
	mov eax,dword ptr [ebp+0x10]
	add esp,0x14
	push 1
	push ecx
	mov ecx,dword ptr [ebp+0xC]
	push edx
	mov edx,dword ptr [ebp+8]
	add eax,4
	push eax
	add ecx,0x2F
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-0x14],esp
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block14:
	call DrawLevelRange
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0x18
	lea eax,[ebp-0x34]
	push eax
	call edi
	lea ecx,[ebp-0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],2
	call edi
	lea eax,[ebp-0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	lea ecx,[ebp-0x34]
	push ecx
	lea edx,[ebp-0x24]
	mov bl,3
	push edx
	mov byte ptr [ebp-4],bl
	call TSimpleSingleton<CFontContainer>::GetInstance
	mov esi,dword ptr [esi+4]
	add eax,4
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],4
	test ecx,ecx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov eax,dword ptr [ebp+0x10]
	mov edx,dword ptr [ebp+0xC]
	add eax,0x1C
	push eax
	add edx,0x2E
	push edx
	mov byte ptr [ebp-4],bl
	call IWzCanvas::DrawTextA
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x24],si
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[ebp-0x24]
	push ecx
	call edi

 Block24:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x34],si
	jne Block26

 Block25:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	jmp Block49

 Block26:
	lea eax,[ebp-0x34]
	push eax
	jmp Block52

 Block27:
	mov ebx,dword ptr [ebp+0x10]
	mov ecx,dword ptr [ebp+0xC]
	push ebx
	push ecx
	push ecx
	mov ecx,esp
	lea edx,[ebp+0x14]
	mov dword ptr [ebp-0x14],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	push ecx
	mov ecx,dword ptr [ebp+8]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-0x14],esp
	test eax,eax
	je Block29

 Block28:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block29:
	call DrawImage
	mov eax,dword ptr [esi+8]
	add esp,0x10
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edx,dword ptr [ebp+0xC]
	mov eax,dword ptr [esi+8]
	mov edi,esp
	lea ecx,[ebx+3]
	push ecx
	add edx,3
	push edx
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x14],esp
	mov dword ptr [ebp-0x14],ecx
	mov dword ptr [ecx],0
	test edi,edi
	je Block33

 Block30:
	mov eax,edi
	lea ebx,[eax+2]
	lea esp,[esp]

 Block31:
	mov dx,word ptr [eax]
	add eax,2
	test dx,dx
	jne Block31

 Block32:
	sub eax,ebx
	sar eax,1
	mov ebx,eax
	lea eax,[ebx+ebx]
	push eax
	push edi
	push 0
	push ebx
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	mov ecx,dword ptr [ebp-0x14]
	add esp,0xC
	push ebx
	call ZXString16::ReleaseBuffer
	mov ebx,dword ptr [ebp+0x10]

 Block33:
	push ecx
	mov ecx,dword ptr [ebp+8]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-0x14],esp
	test eax,eax
	je Block35

 Block34:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block35:
	call DrawImage
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [esi+0xC]
	add esp,0x10
	push 0
	push ecx
	mov ecx,dword ptr [ebp+0xC]
	push edx
	mov edx,dword ptr [ebp+8]
	lea eax,[ebx+4]
	push eax
	add ecx,0x2F
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-0x14],esp
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block37:
	call DrawLevelRange
	mov edi,dword ptr [ZImports::_VariantInit]
	add esp,0x18
	lea eax,[ebp-0x24]
	push eax
	call edi
	lea ecx,[ebp-0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block39

 Block38:
	push eax
	call _com_issue_error

 Block39:
	lea edx,[ebp-0x34]
	push edx
	mov byte ptr [ebp-4],5
	call edi
	lea eax,[ebp-0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block41

 Block40:
	push eax
	call _com_issue_error

 Block41:
	lea ecx,[ebp-0x24]
	push ecx
	lea edx,[ebp-0x34]
	push edx
	mov byte ptr [ebp-4],6
	call TSimpleSingleton<CFontContainer>::GetInstance
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esi+4]
	push eax
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+8]
	mov byte ptr [ebp-4],7
	test ecx,ecx
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	mov eax,dword ptr [ebp+0xC]
	add ebx,0x1C
	push ebx
	add eax,0x2E
	push eax
	mov byte ptr [ebp-4],6
	call IWzCanvas::DrawTextA
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x34],si
	jne Block46

 Block44:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea edx,[ebp-0x34]
	push edx
	call edi

 Block47:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x24],si
	jne Block51

 Block48:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]

 Block49:
	test eax,eax
	je Block53

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block51:
	lea ecx,[ebp-0x24]
	push ecx

 Block52:
	call edi

 Block53:
	mov eax,dword ptr [ebp+8]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block55

 Block54:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block55:
	mov eax,dword ptr [ebp+0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block57

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block57:
	lea esp,[ebp-0x44]
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
// CFontContainer::CFontContainer
_SUB_EXCEPTION_HANDLER(58F430)
__SUB_CLASS_THIS0(0058F430, __thiscall, 80091,  CFontContainer, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_58F430
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
	mov dword ptr [esp+0x18],esi
	mov dword ptr [esi],0
	lea ebx,[esi+4]
	mov dword ptr [esp+0x34],0
	mov dword ptr [ebx],0
	lea edi,[esi+8]
	mov dword ptr [edi],0
	lea ebp,[esi+0xC]
	mov dword ptr [ebp],0
	mov dword ptr [esi+0x10],0
	mov dword ptr [esi+0x14],0
	mov dword ptr [esi+0x18],0
	lea eax,[esp+0x14]
	push 0x5AF
	push eax
	mov byte ptr [esp+0x3C],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push edi
	push eax
	mov byte ptr [esp+0x40],7
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x34],6
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	lea ecx,[esp+0x14]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov byte ptr [esp+0x40],8
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x34],6
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	lea edx,[esp+0x14]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push ebp
	push eax
	mov byte ptr [esp+0x40],9
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x34],6
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	lea eax,[esp+0x14]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push ebx
	push eax
	mov byte ptr [esp+0x40],0xA
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x34],6
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	lea ecx,[esp+0x14]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[esi+0x10]
	push ecx
	push eax
	mov byte ptr [esp+0x40],0xB
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x34],6
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	lea edx,[esp+0x14]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[esi+0x14]
	push ecx
	push eax
	mov byte ptr [esp+0x40],0xC
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x34],6
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block12:
	lea eax,[esp+0x14]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[esi+0x18]
	push ecx
	push eax
	mov byte ptr [esp+0x40],0xD
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x34],6
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block14:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	lea eax,[esp+0x1C]
	push eax
	push 0xFFFFFFFF
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	mov bl,0xE
	push ecx
	mov byte ptr [esp+0x4C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x44],0xF
	test ecx,ecx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov byte ptr [esp+0x44],bl
	call IWzFont::Create
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],6
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x1C]
	push ecx
	call edi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	lea eax,[esp+0x1C]
	push eax
	push 0xFF444444
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	mov bl,0x10
	push ecx
	mov byte ptr [esp+0x4C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x44],0x11
	test ecx,ecx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov byte ptr [esp+0x44],bl
	call IWzFont::Create
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],6
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block30:
	lea ecx,[esp+0x1C]
	push ecx
	call edi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	lea eax,[esp+0x1C]
	push eax
	push 0xFF555555
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	mov bl,0x12
	push ecx
	mov byte ptr [esp+0x4C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x44],0x13
	test ecx,ecx
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	mov byte ptr [esp+0x44],bl
	call IWzFont::Create
	mov ebp,8
	mov byte ptr [esp+0x34],6
	cmp word ptr [esp+0x1C],bp
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	lea ecx,[esp+0x1C]
	push ecx
	call edi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	lea eax,[esp+0x1C]
	push eax
	push 0xFF999999
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	mov bl,0x14
	push ecx
	mov byte ptr [esp+0x4C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+4]
	mov byte ptr [esp+0x44],0x15
	test ecx,ecx
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	mov byte ptr [esp+0x44],bl
	call IWzFont::Create
	mov byte ptr [esp+0x34],6
	cmp word ptr [esp+0x1C],bp
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	lea ecx,[esp+0x1C]
	push ecx
	call edi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	lea eax,[esp+0x1C]
	push eax
	push 0xFFCBCBCB
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	mov bl,0x16
	push ecx
	mov byte ptr [esp+0x4C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0x10]
	mov byte ptr [esp+0x44],0x17
	test ecx,ecx
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	mov byte ptr [esp+0x44],bl
	call IWzFont::Create
	mov byte ptr [esp+0x34],6
	cmp word ptr [esp+0x1C],bp
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block54:
	lea ecx,[esp+0x1C]
	push ecx
	call edi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	lea eax,[esp+0x1C]
	push eax
	push 0xFFD50036
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	mov bl,0x18
	push ecx
	mov byte ptr [esp+0x4C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0x14]
	mov byte ptr [esp+0x44],0x19
	test ecx,ecx
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	mov byte ptr [esp+0x44],bl
	call IWzFont::Create
	mov byte ptr [esp+0x34],6
	cmp word ptr [esp+0x1C],bp
	jne Block61

 Block59:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block62:
	lea ecx,[esp+0x1C]
	push ecx
	call edi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block64

 Block63:
	push eax
	call _com_issue_error

 Block64:
	lea eax,[esp+0x1C]
	push eax
	push 0xFFF2BA1A
	push 0xB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x1A25
	mov bl,0x1A
	push ecx
	mov byte ptr [esp+0x4C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0x18]
	mov byte ptr [esp+0x44],0x1B
	test ecx,ecx
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	mov byte ptr [esp+0x44],bl
	call IWzFont::Create
	mov byte ptr [esp+0x34],6
	cmp word ptr [esp+0x1C],bp
	jne Block69

 Block67:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov eax,esi
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
// DrawLevelRange
_SUB_EXCEPTION_HANDLER(5900B0)
__SUB(005900B0, __cdecl, 80199,  void, NakedParam<_x_com_ptr<IWzCanvas>>, long, long, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5900B0
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
	mov edi,dword ptr [esp+0x34]
	mov eax,dword ptr [esp+0x2C]
	mov esi,dword ptr [esp+0x28]
	mov ebx,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x20]
	push edi
	push eax
	add esi,3
	push esi
	lea ecx,[ebx+0x19]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x2C],0
	mov dword ptr [esp+0x48],esp
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	call DrawNumberForLevel
	mov eax,dword ptr [esp+0x44]
	add esp,0x14
	push edi
	push eax
	push esi
	add ebx,0x47
	push ebx
	push ecx
	mov ecx,dword ptr [esp+0x34]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x48],esp
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block4:
	call DrawNumberForLevel
	mov eax,dword ptr [esp+0x34]
	add esp,0x14
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret
}
}
// DrawDigitForLevel
_SUB_EXCEPTION_HANDLER(58FB00)
__SUB(0058FB00, __cdecl, 80192,  void, NakedParam<_x_com_ptr<IWzCanvas>>, long, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_58FB00
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x10],0
	cmp eax,9
	ja Block10

 Block1:
	mov dword ptr [esp+0x24],0
	push eax
	lea eax,[esp+0x28]
	push offset _S_UIUIWINDOW2IMGUS
	push eax
	mov byte ptr [esp+0x1C],1
	call ZXString16::Format
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [esp+0x28]
	add esp,0xC
	cmp dword ptr [esp+0x28],0
	lea eax,[esp+0x24]
	je Block5

 Block2:
	push 0xB4
	push ecx
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x14],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x18],esp
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block4:
	call DrawGrayImage
	add esp,0x14
	jmp Block8

 Block5:
	push ecx
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x10],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString16::op_assign
	push ecx
	mov ecx,dword ptr [esp+0x28]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x14],esp
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block7:
	call DrawImage
	add esp,0x10

 Block8:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x10],0
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x10
	ret
}
}
// GetLevel
_SUB_EXCEPTION_HANDLER(58F0E0)
__SUB0(0058F0E0, __cdecl, 80191,  long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_58F0E0
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
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x35]
	push ecx
	add eax,0x33
	push eax
	mov dword ptr [esp+0x28],0
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx ebx,al
	mov eax,dword ptr [esp+0x1C]
	add esp,8
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block4

 Block1:
	lea esi,[eax-0x10]
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
	mov eax,ebx
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret
}
}
