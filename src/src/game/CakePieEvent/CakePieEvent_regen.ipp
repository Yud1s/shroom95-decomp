#include "regen.hpp"
// CakePieEvent.ipp
#include "CakePieEvent.hpp"

// CClock::SetTimer
__SUB_CLASS_THIS(000B0A80, __thiscall, 23866,  CClock, void, long) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x8C],0
	jne Block2

 Block1:
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0x94],eax
	mov dword ptr [esp+4],0
	jmp  CWnd::InvalidateRect

 Block2:
	ret 4
}
}
// CUICakePieEventItemInfo::Draw
_SUB_EXCEPTION_HANDLER(7A4E0)
__SUB_CLASS_THIS(0007A4E0, __thiscall, 71143,  CUICakePieEventItemInfo, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_7A4E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x84
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x98]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x18],edi
	mov eax,dword ptr [esp+0xA8]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	mov ebp,dword ptr [esp+0x40]
	mov eax,dword ptr [edi+0x28]
	mov ecx,dword ptr [edi+0x24]
	mov dword ptr [esp+0xA0],0
	test ebp,ebp
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov edx,dword ptr [ebp]
	push 0xFFFFFF
	push eax
	mov eax,dword ptr [edx+0x8C]
	push ecx
	push 0
	push 0
	push ebp
	call eax
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block4:
	mov ecx,3
	mov word ptr [esp+0x24],cx
	mov ecx,0xFF
	mov dword ptr [esp+0x2C],ecx
	mov edx,dword ptr [edi+0x90]
	mov ebx,dword ptr [esp+0x24]
	mov esi,dword ptr [ebp]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x38]
	push edx
	mov edx,dword ptr [esi+0x80]
	push 0
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x48]
	push 0
	push ebp
	mov byte ptr [esp+0xC0],1
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block6:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0xA0],0
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	xor ebx,ebx
	lea ecx,[edi+0xF0]
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x1C],ecx
	lea ebx,[ebx]

 Block11:
	and ebx,0x80000001
	jns Block13

 Block12:
	dec ebx
	or ebx,0xFFFFFFFE
	inc ebx

 Block13:
	mov dword ptr [esp+0x20],ebx
	jne Block39

 Block14:
	mov esi,dword ptr [ecx-0x40]
	mov eax,dword ptr [ecx]
	dec esi
	sub eax,0
	je Block60

 Block15:
	sub eax,1
	je Block46

 Block16:
	sub eax,1
	jne Block39

 Block17:
	cmp dword ptr [ecx+0x20],1
	mov ecx,offset _S_CAKETEAMHASTAKEN
	je Block19

 Block18:
	mov ecx,offset _S_PIETEAMHASTAKENO

 Block19:
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	test ecx,ecx
	je Block23

 Block20:
	mov eax,ecx
	lea edi,[eax+1]

 Block21:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block21

 Block22:
	sub eax,edi
	mov edi,eax
	push edi
	push ecx
	push 0
	push edi
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	mov edi,dword ptr [esp+0x14]

 Block23:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x78]
	push edx
	mov byte ptr [esp+0xA4],8
	call ebx
	lea eax,[esp+0x78]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block79

 Block24:
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0xA4],9
	call ebx
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block79

 Block25:
	lea eax,[esp+0x78]
	push eax
	lea ecx,[esp+0x4C]
	push ecx
	lea edx,[esp+0x4C]
	push 0x4C
	push edx
	mov byte ptr [esp+0xB0],0xA
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	push ecx
	mov dword ptr [esp+0x4C],esp
	mov ecx,esp
	push edi
	mov byte ptr [esp+0xB4],0xB
	call _xbstr_t::_ctor_0
	push esi
	mov byte ptr [esp+0xB4],0xC
	push 0x58
	mov ecx,ebp
	mov byte ptr [esp+0xB8],0xB
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0xA0],0xA
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block27:
	mov esi,8
	mov byte ptr [esp+0xA0],9
	cmp word ptr [esp+0x48],si
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov byte ptr [esp+0xA0],8
	cmp word ptr [esp+0x78],si
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x80]
	xor edx,edx
	mov word ptr [esp+0x78],dx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea eax,[esp+0x78]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov byte ptr [esp+0xA0],0
	test edi,edi
	je Block37

 Block36:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block37:
	mov ebx,dword ptr [esp+0x20]

 Block38:
	mov edi,dword ptr [esp+0x18]

 Block39:
	mov edx,dword ptr [esp+0x1C]
	cmp dword ptr [edx],0
	jne Block77

 Block40:
	lea eax,[edi+0x98]
	test ebx,ebx
	je Block42

 Block41:
	lea eax,[edi+0x9C]

 Block42:
	mov ebx,dword ptr [eax]
	mov dword ptr [esp+0x20],ebx
	test ebx,ebx
	je Block44

 Block43:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx

 Block44:
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [edx-0x20]
	test eax,eax
	jg Block64

 Block45:
	xor eax,eax
	jmp Block66

 Block46:
	push 0
	push 0x13
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],0
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_BATTLEINPROGRESS]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [_S_BATTLEINPROGRESS+4]
	mov dword ptr [eax+4],edx
	mov ecx,dword ptr [_S_BATTLEINPROGRESS+8]
	mov dword ptr [eax+8],ecx
	mov edx,dword ptr [_S_BATTLEINPROGRESS+12]
	mov dword ptr [eax+0xC],edx
	mov cx,word ptr [_S_BATTLEINPROGRESS+16]
	mov word ptr [eax+0x10],cx
	mov dl,byte ptr [_S_BATTLEINPROGRESS+18]
	push 0x13
	lea ecx,[esp+0x18]
	mov byte ptr [eax+0x12],dl
	call ZXString<char>::ReleaseBuffer
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x68]
	push eax
	mov byte ptr [esp+0xA4],3
	call edi
	lea ecx,[esp+0x68]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block79

 Block47:
	lea edx,[esp+0x58]
	push edx
	mov byte ptr [esp+0xA4],4
	call edi
	lea eax,[esp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block79

 Block48:
	lea ecx,[esp+0x68]
	push ecx
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x40]
	push 0x4C
	push eax
	mov byte ptr [esp+0xB0],5
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov dword ptr [esp+0x4C],esp
	mov ecx,esp
	push edi
	mov byte ptr [esp+0xB4],6
	call _xbstr_t::_ctor_0
	push esi
	mov byte ptr [esp+0xB4],7
	push 0x58
	mov ecx,ebp
	mov byte ptr [esp+0xB8],6
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0xA0],5
	test eax,eax
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block50:
	mov esi,8
	mov byte ptr [esp+0xA0],4
	cmp word ptr [esp+0x58],si
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov byte ptr [esp+0xA0],3
	cmp word ptr [esp+0x68],si
	jne Block57

 Block55:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov byte ptr [esp+0xA0],0
	test edi,edi
	je Block38

 Block59:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4
	jmp Block38

 Block60:
	mov ecx,3
	mov word ptr [esp+0x88],cx
	mov dword ptr [esp+0x90],0xFF
	mov eax,dword ptr [edi+0x94]
	lea edx,[esp+0x88]
	push edx
	push eax
	push esi
	push 0x58
	mov ecx,ebp
	mov byte ptr [esp+0xB0],2
	call IWzCanvas::Copy
	cmp word ptr [esp+0x88],8
	mov byte ptr [esp+0xA0],0
	jne Block63

 Block61:
	xor eax,eax
	mov word ptr [esp+0x88],ax
	mov eax,dword ptr [esp+0x90]
	test eax,eax
	je Block39

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block63:
	lea ecx,[esp+0x88]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block39

 Block64:
	cmp eax,0x64
	jl Block66

 Block65:
	mov eax,0x64

 Block66:
	imul eax,0x74
	mov ecx,eax
	mov eax,0x51EB851F
	imul ecx
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax-0x40]
	sar edx,5
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	xor esi,esi
	mov dword ptr [esp+0x14],ecx
	test edi,edi
	jle Block74

 Block67:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [esp+0x24],dx
	mov dword ptr [esp+0x2C],ecx
	mov ebx,dword ptr [esp+0x24]
	mov edx,dword ptr [ebp]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x24]
	push ebx
	push eax
	lea ecx,[esi+0x5A]
	push ecx
	push ebp
	mov byte ptr [esp+0xC0],0xE
	call edx
	test eax,eax
	jge Block69

 Block68:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block69:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0xA0],0xD
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	inc esi
	cmp esi,edi
	jl Block67

 Block74:
	mov byte ptr [esp+0xA0],0
	test ebx,ebx
	je Block76

 Block75:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block76:
	mov edi,dword ptr [esp+0x18]

 Block77:
	mov ebx,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x1C]
	inc ebx
	add ecx,4
	cmp ebx,8
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x1C],ecx
	jl Block11

 Block78:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov dword ptr [esp+0xA4],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x98]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x90
	ret 4

 Block79:
	push eax
	call _com_issue_error
}
}
// CCakePieEvent::GetEventItemInfo
__SUB_CLASS_THIS(00079170, __thiscall, 71162,  CCakePieEvent, ZRef<CAKEPIEEVENT_ITEMINFO>*, ZRef<CAKEPIEEVENT_ITEMINFO>*, long, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0xC]
	push esi
	mov esi,dword ptr [esp+0xC]
	push eax
	push edx
	push esi
	mov dword ptr [esp+0x10],0
	call CCakePieEvent::FindItemInfo
	mov eax,esi
	pop esi
	pop ecx
	ret 0xC
}
}
// CUICakePieEventItemInfo::OnCreate
_SUB_EXCEPTION_HANDLER(7A3C0)
__SUB_CLASS_THIS(0007A3C0, __thiscall, 71141,  CUICakePieEventItemInfo, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_7A3C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	push offset _S_UIUIWINDOWIMG5TH__4
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x34],ebx
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x30],1
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block12

 Block4:
	add eax,8
	cmp eax,ebx
	je Block12

 Block5:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block7

 Block6:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [esi+0xA4]
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esi+0xA4]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push 1
	push 0xE
	push 0xD4
	push 0x3E8
	push esi
	call edx
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret 4

 Block12:
	xor edi,edi
	jmp Block7
}
}
// CClock::CClock
__SUB_CLASS_THIS0(00079790, __thiscall, 23860,  CClock, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CWnd::_ctor_default
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CClock::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CClock::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CClock::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x88],eax
	mov dword ptr [esi+0x98],eax
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [esi+0xD8],eax
	mov eax,esi
	pop esi
	ret
}
}
// CUICakePieEventItemInfo::Update
_SUB_EXCEPTION_HANDLER(791C0)
__SUB_CLASS_THIS0(000791C0, __thiscall, 71140,  CUICakePieEventItemInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_791C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x5C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x70]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	call dword ptr [ZImports::_timeGetTime]
	mov ecx,eax
	sub ecx,dword ptr [esi+0xAC]
	mov dword ptr [esp+0x28],eax
	test ecx,ecx
	jle Block31

 Block1:
	add eax,0xC8
	xor ebx,ebx
	mov dword ptr [esi+0xAC],eax
	mov dword ptr [esp+0x1C],ebx
	lea ebp,[esi+0xD0]
	mov edi,edi

 Block2:
	mov eax,dword ptr [ebp]
	cmp eax,0x5F
	jl Block29

 Block3:
	cmp eax,0x64
	jge Block29

 Block4:
	mov eax,dword ptr [ebp+0x60]
	inc eax
	and eax,0x80000001
	jns Block6

 Block5:
	dec eax
	or eax,0xFFFFFFFE
	inc eax

 Block6:
	mov dword ptr [ebp+0x60],eax
	and eax,0x80000001
	jns Block8

 Block7:
	dec eax
	or eax,0xFFFFFFFE
	inc eax

 Block8:
	lea eax,[esi+0x98]
	je Block10

 Block9:
	lea eax,[esi+0x9C]

 Block10:
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block12:
	mov eax,dword ptr [ebp]
	cmp eax,ebx
	mov dword ptr [esp+0x78],ebx
	jge Block14

 Block13:
	mov dword ptr [ebp],ebx
	jmp Block16

 Block14:
	cmp eax,0x64
	jle Block16

 Block15:
	mov dword ptr [ebp],0x64

 Block16:
	mov ecx,dword ptr [ebp]
	imul ecx,0x74
	mov eax,0x51EB851F
	imul ecx
	mov ecx,dword ptr [ebp-0x20]
	sar edx,5
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	cmp edi,ebx
	mov dword ptr [esp+0x20],ecx
	jle Block27

 Block17:
	mov edx,3
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],0xFF
	lea eax,[esp+0x24]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x7C],1
	call CWnd::GetCanvas
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x78],2
	test esi,esi
	je Block41

 Block18:
	mov edx,dword ptr [esp+0x30]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x30]
	push eax
	push edx
	lea eax,[ebx+0x5A]
	push eax
	push esi
	call ecx
	test eax,eax
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x78],1
	test eax,eax
	je Block22

 Block21:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block22:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x78],0
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov esi,dword ptr [esp+0x14]
	inc ebx
	cmp ebx,edi
	jl Block17

 Block27:
	mov eax,dword ptr [esp+0x18]
	xor ebx,ebx
	mov dword ptr [esp+0x78],0xFFFFFFFF
	cmp eax,ebx
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block29:
	mov eax,dword ptr [esp+0x1C]
	inc eax
	add ebp,4
	cmp eax,8
	mov dword ptr [esp+0x1C],eax
	jl Block2

 Block30:
	mov eax,dword ptr [esp+0x28]

 Block31:
	mov ecx,dword ptr [esi+0xA8]
	add ecx,0x3E8
	cmp eax,ecx
	jle Block40

 Block32:
	mov dword ptr [esi+0xA8],eax
	mov eax,0x5F5E100
	mov dword ptr [esp+0x50],eax
	mov dword ptr [esp+0x54],eax
	mov eax,0xBEBC200
	mov dword ptr [esp+0x58],eax
	mov dword ptr [esp+0x5C],eax
	mov eax,0xE4E1C00
	mov dword ptr [esp+0x60],eax
	mov dword ptr [esp+0x64],eax
	mov eax,0xF8E8B40
	mov ecx,0x3D8892
	mov dword ptr [esp+0x68],eax
	mov dword ptr [esp+0x6C],eax
	mov eax,0x3D8893
	xor ebx,ebx
	mov dword ptr [esp+0x30],ecx
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x38],ecx
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x40],ecx
	mov dword ptr [esp+0x44],eax
	mov dword ptr [esp+0x48],ecx
	mov dword ptr [esp+0x4C],eax
	mov dword ptr [esp+0x1C],ebx
	lea edi,[esi+0xF0]
	lea ecx,[ecx]

 Block33:
	mov edx,dword ptr [esp+ebx+0x30]
	mov eax,dword ptr [esp+ebx+0x50]
	push edx
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [TSingleton<CCakePieEvent>::ms_pInstance]
	call CCakePieEvent::GetEventItemInfo
	mov esi,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	test esi,esi
	je Block37

 Block34:
	mov edx,dword ptr [esi+0x14]
	mov dword ptr [edi-0x20],edx
	mov eax,dword ptr [esi+0x18]
	mov dword ptr [edi],eax
	mov ecx,dword ptr [esi+0x1C]
	lea ebp,[esi+4]
	push ebp
	mov dword ptr [edi+0x20],ecx
	mov dword ptr [esp+0x20],1
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block36

 Block35:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block36:
	mov dword ptr [esp+0x2C],0

 Block37:
	add ebx,4
	add edi,4
	cmp ebx,0x20
	jl Block33

 Block38:
	cmp dword ptr [esp+0x1C],0
	je Block40

 Block39:
	mov ecx,dword ptr [esp+0x14]
	push 0
	call CWnd::InvalidateRect

 Block40:
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x68
	ret

 Block41:
	push 0x80004003
	call _com_issue_error
}
}
// CCakePieEvent::SetEventItemInfo
_SUB_EXCEPTION_HANDLER(7C8E0)
__SUB_CLASS_THIS(0007C8E0, __thiscall, 71164,  CCakePieEvent, void, long, long, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_7C8E0
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
	mov edi,ecx
	mov ebx,dword ptr [esp+0x30]
	mov ebp,dword ptr [esp+0x2C]
	push ebx
	push ebp
	lea eax,[esp+0x1C]
	push eax
	call CCakePieEvent::FindItemInfo
	mov esi,dword ptr [esp+0x18]
	mov dword ptr [esp+0x24],0
	test esi,esi
	jne Block2

 Block1:
	lea ecx,[esp+0x14]
	call ZRef<CAKEPIEEVENT_ITEMINFO>::_Alloc
	mov esi,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x38]
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esi+0xC],ebp
	mov dword ptr [esi+0x10],ebx
	mov dword ptr [esi+0x14],ecx
	mov dword ptr [esi+0x18],edx
	lea ecx,[edi+4]
	mov dword ptr [esi+0x1C],eax
	call ZList<ZRef<CAKEPIEEVENT_ITEMINFO>>::AddTail_
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,eax
	call ZRef<CAKEPIEEVENT_ITEMINFO>::op_assign_copy
	jmp Block3

 Block2:
	mov edx,dword ptr [esp+0x34]
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [esi+0x14],edx
	mov dword ptr [esi+0x18],eax
	mov dword ptr [esi+0x1C],ecx

 Block3:
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block4:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block5:
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
// CClock::~CClock
_SUB_EXCEPTION_HANDLER(797F0)
__SUB_CLASS_THIS0(000797F0, __thiscall, 23862,  CClock, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_797F0
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
	int 3// TODO: 	mov dword ptr [esi],offset CClock::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CClock::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CClock::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xD8]
	mov dword ptr [esp+0x14],3
	call ZArray<_x_com_ptr<IWzCanvas>>::RemoveAll
	mov eax,dword ptr [esi+0x9C]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0x98]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esi+0x88]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CWnd::~CWnd
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CClock::OnSetFocus
__SUB_CLASS_THIS(000797D0, __thiscall, 23865,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CClock::Draw
_SUB_EXCEPTION_HANDLER(B0C50)
__SUB_CLASS_THIS(000B0C50, __thiscall, 23864,  CClock, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B0C50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x5C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x70]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea eax,[esp+0x24]
	push eax
	call CWnd::GetCanvas
	mov edi,dword ptr [esp+0x24]
	xor ebp,ebp
	mov dword ptr [esp+0x78],ebp
	cmp edi,ebp
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x18]
	push edx
	push edi
	mov dword ptr [esp+0x20],ebp
	call eax
	cmp eax,ebp
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block4:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block6

 Block5:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block6:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [edi]
	mov ecx,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push edx
	push eax
	push ebp
	push ebp
	push edi
	call ecx
	cmp eax,ebp
	jge Block8

 Block7:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block8:
	cmp dword ptr [esi+0x80],ebp
	je Block98

 Block9:
	mov eax,dword ptr [esi+0x94]
	xor ebx,ebx
	cmp eax,ebp
	jle Block11

 Block10:
	mov ebx,eax
	cmp ebx,0xE10
	jge Block52

 Block11:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x40]
	push edx
	call ebp
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0x7C],1
	call ebp
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	push 0
	push 0
	lea eax,[esp+0x48]
	push eax
	mov eax,dword ptr [esi+0x98]
	lea ecx,[esp+0x3C]
	push ecx
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x90],2
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x8C],3
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea edx,[esp+0x74]
	mov byte ptr [esp+0x8C],2
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x80],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block20

 Block18:
	cmp eax,0x80004002
	je Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	mov ebp,8
	mov byte ptr [esp+0x78],6
	cmp word ptr [esp+0x60],bp
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov byte ptr [esp+0x78],7
	cmp word ptr [esp+0x30],bp
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov byte ptr [esp+0x78],8
	cmp word ptr [esp+0x40],bp
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov eax,3
	mov word ptr [esp+0x50],ax
	mov dword ptr [esp+0x58],0xFF
	mov edx,dword ptr [esp+0x14]
	lea ecx,[esp+0x50]
	push ecx
	push edx
	push 0
	push 0
	mov ecx,edi
	mov byte ptr [esp+0x88],9
	call IWzCanvas::Copy
	mov byte ptr [esp+0x78],8
	cmp word ptr [esp+0x50],bp
	jne Block35

 Block33:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov eax,0x88888889
	imul ebx
	add edx,ebx
	sar edx,5
	mov ebp,edx
	shr ebp,0x1F
	add ebp,edx
	mov edx,ebp
	shl edx,4
	sub edx,ebp
	add edx,edx
	add edx,edx
	sub ebx,edx
	mov eax,0x66666667
	imul ebp
	sar edx,2
	mov dword ptr [esp+0x20],ebx
	mov ebx,edx
	shr ebx,0x1F
	add ebx,edx
	mov eax,ebx
	cdq
	mov ecx,0xA
	idiv ecx
	test edx,edx
	je Block41

 Block37:
	mov eax,3
	mov word ptr [esp+0x50],ax
	mov dword ptr [esp+0x58],0xFF
	mov byte ptr [esp+0x78],cl
	mov ecx,dword ptr [esi+0xD8]
	lea eax,[ecx+edx*4]
	mov eax,dword ptr [eax]
	lea edx,[esp+0x50]
	push edx
	push eax
	mov eax,dword ptr [esi+0xA0]
	push 0xC
	push eax
	mov ecx,edi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x78],8
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov eax,3
	mov word ptr [esp+0x50],ax
	mov dword ptr [esp+0x58],0xFF
	mov edx,dword ptr [esi+0xD8]
	lea ecx,[ebx+ebx*4]
	add ecx,ecx
	sub ebp,ecx
	mov ecx,dword ptr [esi+0xA4]
	lea ebp,[edx+ebp*4]
	mov ebp,dword ptr [ebp]
	lea eax,[esp+0x50]
	push eax
	push ebp
	push 0xC
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x88],0xB
	call IWzCanvas::Copy
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x78],8
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov ecx,3
	mov word ptr [esp+0x50],cx
	mov dword ptr [esp+0x58],0xFF
	mov ebx,dword ptr [esp+0x20]
	mov eax,0x66666667
	imul ebx
	sar edx,2
	mov ebp,edx
	shr ebp,0x1F
	add ebp,edx
	mov edx,dword ptr [esi+0xD8]
	lea eax,[edx+ebp*4]
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esi+0xA8]
	lea ecx,[esp+0x50]
	push ecx
	push eax
	push 0xC
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x88],0xC
	call IWzCanvas::Copy
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x78],8
	jne Block48

 Block46:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	mov edx,3
	mov word ptr [esp+0x50],dx
	mov dword ptr [esp+0x58],0xFF
	mov ecx,dword ptr [esi+0xD8]
	lea eax,[ebp+ebp*4]
	add eax,eax
	sub ebx,eax
	lea eax,[ecx+ebx*4]
	mov eax,dword ptr [eax]
	lea edx,[esp+0x50]
	push edx
	push eax
	mov eax,dword ptr [esi+0xAC]
	push 0xC
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x88],0xD
	call IWzCanvas::Copy
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x78],8
	jne Block51

 Block50:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	jmp Block92

 Block51:
	lea edx,[esp+0x50]
	jmp Block95

 Block52:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x40]
	push eax
	call ebp
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	lea edx,[esp+0x50]
	push edx
	mov byte ptr [esp+0x7C],0xE
	call ebp
	lea eax,[esp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	push 0
	push 0
	lea ecx,[esp+0x48]
	push ecx
	lea edx,[esp+0x5C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0xEF3
	push eax
	mov byte ptr [esp+0x94],0xF
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x8C],0x10
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea ecx,[esp+0x74]
	push ecx
	mov byte ptr [esp+0x90],0xF
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x80],0x11
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block61

 Block59:
	cmp eax,0x80004002
	je Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	mov ebp,8
	mov byte ptr [esp+0x78],0x13
	cmp word ptr [esp+0x60],bp
	jne Block64

 Block62:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea eax,[esp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov byte ptr [esp+0x78],0x14
	cmp word ptr [esp+0x50],bp
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov byte ptr [esp+0x78],0x15
	cmp word ptr [esp+0x40],bp
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov edx,3
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],0xFF
	mov ecx,dword ptr [esp+0x14]
	lea eax,[esp+0x30]
	push eax
	push ecx
	push 0
	push 0
	mov ecx,edi
	mov byte ptr [esp+0x88],0x16
	call IWzCanvas::Copy
	mov byte ptr [esp+0x78],0x15
	cmp word ptr [esp+0x30],bp
	jne Block76

 Block74:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block77:
	mov eax,0x91A2B3C5
	imul ebx
	add edx,ebx
	sar edx,0xB
	mov ebp,edx
	shr ebp,0x1F
	add ebp,edx
	mov ecx,ebp
	imul ecx,0xE10
	sub ebx,ecx
	mov eax,0x88888889
	imul ebx
	add edx,ebx
	sar edx,5
	mov ebx,edx
	shr ebx,0x1F
	add ebx,edx
	mov eax,0x66666667
	imul ebp
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov dword ptr [esp+0x20],eax
	cdq
	mov ecx,0xA
	idiv ecx
	test edx,edx
	je Block82

 Block78:
	mov eax,3
	mov word ptr [esp+0x30],ax
	mov dword ptr [esp+0x38],0xFF
	mov ecx,dword ptr [esi+0xD8]
	lea eax,[ecx+edx*4]
	mov eax,dword ptr [eax]
	lea edx,[esp+0x30]
	push edx
	push eax
	mov eax,dword ptr [esi+0xA0]
	push 0xC
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x88],0x17
	call IWzCanvas::Copy
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x78],0x15
	jne Block81

 Block79:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block82:
	mov eax,3
	mov word ptr [esp+0x30],ax
	mov dword ptr [esp+0x38],0xFF
	mov eax,dword ptr [esp+0x20]
	mov edx,dword ptr [esi+0xD8]
	lea ecx,[eax+eax*4]
	add ecx,ecx
	sub ebp,ecx
	mov ecx,dword ptr [esi+0xA4]
	lea ebp,[edx+ebp*4]
	mov ebp,dword ptr [ebp]
	lea eax,[esp+0x30]
	push eax
	push ebp
	push 0xC
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x88],0x18
	call IWzCanvas::Copy
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x78],0x15
	jne Block85

 Block83:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block86:
	mov ecx,3
	mov word ptr [esp+0x30],cx
	mov dword ptr [esp+0x38],0xFF
	mov eax,0x66666667
	imul ebx
	sar edx,2
	mov ebp,edx
	shr ebp,0x1F
	add ebp,edx
	mov edx,dword ptr [esi+0xD8]
	lea eax,[edx+ebp*4]
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esi+0xA8]
	lea ecx,[esp+0x30]
	push ecx
	push eax
	push 0xC
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x88],0x19
	call IWzCanvas::Copy
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x78],0x15
	jne Block89

 Block87:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	mov edx,3
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],0xFF
	mov ecx,dword ptr [esi+0xD8]
	lea eax,[ebp+ebp*4]
	add eax,eax
	sub ebx,eax
	lea eax,[ecx+ebx*4]
	mov eax,dword ptr [eax]
	lea edx,[esp+0x30]
	push edx
	push eax
	mov eax,dword ptr [esi+0xAC]
	push 0xC
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x88],0x1A
	call IWzCanvas::Copy
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x78],0x15
	jne Block94

 Block91:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx

 Block92:
	test eax,eax
	je Block96

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block94:
	lea edx,[esp+0x30]

 Block95:
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x78],0
	test eax,eax
	je Block177

 Block97:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block177

 Block98:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x18]
	push ecx
	push edi
	mov dword ptr [esp+0x20],ebp
	call edx
	cmp eax,ebp
	jge Block100

 Block99:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block100:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	mov ebx,dword ptr [esp+0x18]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],ebp
	call edx
	cmp eax,ebp
	jge Block102

 Block101:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block102:
	mov eax,dword ptr [esi+0x84]
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edi]
	push eax
	mov eax,dword ptr [ecx+0x8C]
	push ebx
	push edx
	push ebp
	push ebp
	push edi
	call eax
	cmp eax,ebp
	jge Block104

 Block103:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block104:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x18]
	push edx
	push edi
	mov dword ptr [esp+0x20],ebp
	call eax
	cmp eax,ebp
	jge Block106

 Block105:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block106:
	mov eax,dword ptr [esi+0xD8]
	mov ebp,dword ptr [eax]
	mov ebx,dword ptr [esp+0x18]
	test ebp,ebp
	jne Block108

 Block107:
	push 0x80004003
	call _com_issue_error

 Block108:
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x14]
	push edx
	push ebp
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block110

 Block109:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block110:
	mov eax,dword ptr [esi+0xD8]
	mov ebp,dword ptr [eax+0x28]
	mov ecx,dword ptr [esp+0x14]
	add eax,0x28
	mov dword ptr [esp+0x2C],ecx
	test ebp,ebp
	jne Block112

 Block111:
	push 0x80004003
	call _com_issue_error

 Block112:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x1C]
	push eax
	push ebp
	mov dword ptr [esp+0x24],0
	call ecx
	test eax,eax
	jge Block114

 Block113:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block114:
	mov eax,dword ptr [esi+0xD8]
	mov ebp,dword ptr [eax+0x2C]
	mov edx,dword ptr [esp+0x1C]
	add eax,0x2C
	mov dword ptr [esp+0x28],edx
	test ebp,ebp
	jne Block116

 Block115:
	push 0x80004003
	call _com_issue_error

 Block116:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x20]
	push ecx
	push ebp
	mov dword ptr [esp+0x28],0
	call edx
	test eax,eax
	jge Block118

 Block117:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block118:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x2C]
	lea edx,[eax+ecx*2]
	mov eax,dword ptr [edi]
	add edx,edx
	sub ebx,edx
	sub ebx,dword ptr [esp+0x20]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x20]
	sub ebx,8
	push ecx
	shr ebx,1
	push edi
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x28],0
	call edx
	test eax,eax
	jge Block120

 Block119:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block120:
	mov eax,dword ptr [esi+0xD8]
	mov ebp,dword ptr [eax]
	mov ebx,dword ptr [esp+0x20]
	test ebp,ebp
	jne Block122

 Block121:
	push 0x80004003
	call _com_issue_error

 Block122:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x1C]
	push ecx
	push ebp
	mov dword ptr [esp+0x24],0
	call edx
	test eax,eax
	jge Block124

 Block123:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block124:
	sub ebx,dword ptr [esp+0x1C]
	mov eax,3
	shr ebx,1
	mov ebp,0xFF
	mov dword ptr [esp+0x14],ebx
	mov word ptr [esp+0x50],ax
	mov dword ptr [esp+0x58],ebp
	cmp dword ptr [esi+0xC4],0
	mov eax,dword ptr [esi+0xD8]
	mov byte ptr [esp+0x78],0x1B
	je Block126

 Block125:
	add eax,0x30
	jmp Block127

 Block126:
	add eax,0x2C

 Block127:
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x18]
	lea ecx,[esp+0x50]
	push ecx
	push eax
	push ebx
	push edx
	mov ecx,edi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x78],0
	jne Block130

 Block128:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block131:
	mov edx,3
	mov word ptr [esp+0x50],dx
	mov dword ptr [esp+0x58],ebp
	mov eax,dword ptr [esi+0xD8]
	mov ebx,dword ptr [eax+0x2C]
	add eax,0x2C
	mov byte ptr [esp+0x78],0x1C
	test ebx,ebx
	jne Block133

 Block132:
	push 0x80004003
	call _com_issue_error

 Block133:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x20]
	push ecx
	push ebx
	mov dword ptr [esp+0x28],0
	call edx
	test eax,eax
	jge Block135

 Block134:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block135:
	mov eax,dword ptr [esi+0xD8]
	mov ebx,dword ptr [eax+0x28]
	mov ebp,dword ptr [esp+0x20]
	add eax,0x28
	test ebx,ebx
	jne Block137

 Block136:
	push 0x80004003
	call _com_issue_error

 Block137:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x1C]
	push ecx
	push ebx
	mov dword ptr [esp+0x24],0
	call edx
	test eax,eax
	jge Block139

 Block138:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block139:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi+0xC8]
	lea ebx,[eax+ebp]
	add ebx,dword ptr [esp+0x18]
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov edx,dword ptr [esi+0xD8]
	lea eax,[edx+ecx*4]
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x14]
	lea ecx,[esp+0x50]
	push ecx
	push eax
	push edx
	push ebx
	mov ecx,edi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x78],0
	jne Block142

 Block140:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block143

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block143

 Block142:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block143:
	mov edx,3
	mov word ptr [esp+0x50],dx
	mov dword ptr [esp+0x58],0xFF
	mov eax,dword ptr [esi+0xD8]
	mov ebp,dword ptr [eax]
	mov byte ptr [esp+0x78],0x1D
	test ebp,ebp
	jne Block145

 Block144:
	push 0x80004003
	call _com_issue_error

 Block145:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x20]
	push ecx
	push ebp
	mov dword ptr [esp+0x28],0
	call edx
	test eax,eax
	jge Block147

 Block146:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block147:
	mov eax,dword ptr [esp+0x20]
	lea ebx,[ebx+eax+2]
	mov eax,dword ptr [esi+0xC8]
	cdq
	mov ecx,0xA
	idiv ecx
	mov eax,dword ptr [esi+0xD8]
	lea ecx,[esp+0x50]
	push ecx
	mov ecx,edi
	lea eax,[eax+edx*4]
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x18]
	push eax
	push edx
	push ebx
	call IWzCanvas::Copy
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x78],0
	jne Block150

 Block148:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block151:
	mov eax,dword ptr [esi+0xD0]
	and eax,0x80000001
	jns Block153

 Block152:
	dec eax
	or eax,0xFFFFFFFE
	inc eax

 Block153:
	neg eax
	sbb eax,eax
	and eax,0xFFFFFF41
	add eax,0xFF
	mov edx,3
	mov word ptr [esp+0x50],dx
	mov dword ptr [esp+0x58],eax
	mov eax,dword ptr [esi+0xD8]
	mov ebp,dword ptr [eax]
	mov byte ptr [esp+0x78],0x1E
	test ebp,ebp
	jne Block155

 Block154:
	push 0x80004003
	call _com_issue_error

 Block155:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x20]
	push ecx
	push ebp
	mov dword ptr [esp+0x28],0
	call edx
	test eax,eax
	jge Block157

 Block156:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block157:
	mov eax,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x14]
	lea ebx,[ebx+eax+2]
	mov eax,dword ptr [esi+0xD8]
	add eax,0x28
	mov eax,dword ptr [eax]
	lea ecx,[esp+0x50]
	push ecx
	push eax
	push edx
	push ebx
	mov ecx,edi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x78],0
	jne Block160

 Block158:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block161

 Block159:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block161

 Block160:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block161:
	mov edx,3
	mov word ptr [esp+0x50],dx
	mov dword ptr [esp+0x58],0xFF
	mov eax,dword ptr [esi+0xD8]
	mov ebp,dword ptr [eax+0x28]
	add eax,0x28
	mov byte ptr [esp+0x78],0x1F
	test ebp,ebp
	jne Block163

 Block162:
	push 0x80004003
	call _com_issue_error

 Block163:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x20]
	push ecx
	push ebp
	mov dword ptr [esp+0x28],0
	call edx
	test eax,eax
	jge Block165

 Block164:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block165:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esi+0xCC]
	lea ebx,[ebx+eax+2]
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	mov edx,dword ptr [esi+0xD8]
	lea eax,[edx+ecx*4]
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x14]
	lea ecx,[esp+0x50]
	push ecx
	push eax
	push edx
	push ebx
	mov ecx,edi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x78],0
	jne Block168

 Block166:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block169

 Block167:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block169

 Block168:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block169:
	mov edx,3
	mov word ptr [esp+0x50],dx
	mov dword ptr [esp+0x58],0xFF
	mov eax,dword ptr [esi+0xD8]
	mov ebp,dword ptr [eax]
	mov byte ptr [esp+0x78],0x20
	test ebp,ebp
	jne Block171

 Block170:
	push 0x80004003
	call _com_issue_error

 Block171:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x20]
	push ecx
	push ebp
	mov dword ptr [esp+0x28],0
	call edx
	test eax,eax
	jge Block173

 Block172:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block173:
	mov eax,dword ptr [esp+0x20]
	lea ebx,[ebx+eax+2]
	mov eax,dword ptr [esi+0xCC]
	cdq
	mov ecx,0xA
	idiv ecx
	mov eax,dword ptr [esi+0xD8]
	lea ecx,[esp+0x50]
	push ecx
	mov ecx,edi
	lea eax,[eax+edx*4]
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x18]
	push eax
	push edx
	push ebx
	call IWzCanvas::Copy
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x78],0
	jne Block176

 Block174:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block177

 Block175:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block177

 Block176:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block177:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov dword ptr [esp+0x7C],0xFFFFFFFF
	call eax
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x68
	ret 4
}
}
// CCakePieEvent::OpenUI_ItemInfo
_SUB_EXCEPTION_HANDLER(7C830)
__SUB_CLASS_THIS0(0007C830, __thiscall, 71159,  CCakePieEvent, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_7C830
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
	mov edi,ecx
	call CCakePieEvent::CloseUI_ItemInfo
	push 0x150
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x1C],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,eax
	call CUICakePieEventItemInfo::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block10

 Block4:
	add eax,8
	je Block10

 Block5:
	lea esi,[eax-8]
	test esi,esi
	je Block7

 Block6:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [edi+0x1C]
	mov dword ptr [edi+0x1C],esi
	mov dword ptr [esp+0x10],eax
	test eax,eax
	je Block9

 Block8:
	push 0
	lea ecx,[esp+0x10]
	call ZRef<CUICakePieEventItemInfo>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret

 Block10:
	xor esi,esi
	jmp Block7
}
}
// CUICakePieEventItemInfo::OnButtonClicked
__SUB_CLASS_THIS(000791A0, __thiscall, 71144,  CUICakePieEventItemInfo, void, uint32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x3E8
	jne Block2

 Block1:
	mov ecx,dword ptr [TSingleton<CCakePieEvent>::ms_pInstance]
	call CCakePieEvent::CloseUI_ItemInfo

 Block2:
	ret 4
}
}
// CClock::OnCreate
__SUB_CLASS_THIS(000B0BC0, __thiscall, 23863,  CClock, void, void*) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,ecx
	call CClock::Clear
	mov edi,dword ptr [esp+0xC]
	mov eax,dword ptr [edi]
	mov dword ptr [esi+0x80],eax
	mov ecx,dword ptr [edi+4]
	lea edx,[edi+0x14]
	mov dword ptr [esi+0x84],ecx
	push edx
	lea ecx,[esi+0x98]
	call ZXString<char>::op_assign
	lea eax,[edi+0x18]
	push eax
	lea ecx,[esi+0x9C]
	call ZXString<char>::op_assign
	mov ecx,dword ptr [edi+0x1C]
	mov dword ptr [esi+0xA0],ecx
	mov edx,dword ptr [edi+0x20]
	mov dword ptr [esi+0xA4],edx
	mov eax,dword ptr [edi+0x24]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x34]
	mov dword ptr [esi+0xA8],eax
	mov ecx,dword ptr [edi+0x28]
	push ecx
	mov eax,esp
	mov dword ptr [esi+0xAC],ecx
	mov dword ptr [esp+0x10],esp
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x38]
	lea ecx,[esi+0xD8]
	push ecx
	mov ecx,esi
	call edx
	pop edi
	pop esi
	ret 4
}
}
// CTimerboard_CakePieEvent::Draw
_SUB_EXCEPTION_HANDLER(7BAB0)
__SUB_CLASS_THIS(0007BAB0, __thiscall, 71390,  CTimerboard_CakePieEvent, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_7BAB0
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
	mov ebx,ecx
	lea eax,[esp+0x24]
	push eax
	call CWnd::GetCanvas
	mov esi,dword ptr [esp+0x24]
	xor ebp,ebp
	mov dword ptr [esp+0x68],ebp
	cmp esi,ebp
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x20]
	push edx
	push esi
	mov dword ptr [esp+0x28],ebp
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
	mov edi,dword ptr [esp+0x20]
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
	push edi
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
	mov word ptr [esp+0x30],cx
	mov ecx,0xFF
	mov dword ptr [esp+0x38],ecx
	mov edx,dword ptr [ebx+0xE8]
	mov ebp,dword ptr [esp+0x30]
	mov edi,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x44]
	push edx
	mov edx,dword ptr [edi+0x80]
	push 0
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x54]
	push 0
	push esi
	mov byte ptr [esp+0x88],1
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
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x68],0
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	cmp dword ptr [ebx+0xDC],0
	jne Block97

 Block15:
	mov edi,dword ptr [_D_G_PSTAGE+4]
	test edi,edi
	je Block18

 Block16:
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[edi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	je Block18

 Block17:
	mov eax,edi
	jmp Block19

 Block18:
	xor eax,eax

 Block19:
	lea ecx,[eax+0x16C]
	call TSecType<unsigned long>::GetData
	push 0x3D8892
	mov edi,eax
	push edi
	lea ecx,[esp+0x38]
	xor ebp,ebp
	push ecx
	mov ecx,dword ptr [TSingleton<CCakePieEvent>::ms_pInstance]
	mov dword ptr [esp+0x2C],ebp
	mov dword ptr [esp+0x24],ebp
	call CCakePieEvent::GetEventItemInfo
	mov ecx,dword ptr [TSingleton<CCakePieEvent>::ms_pInstance]
	push 0x3D8893
	push edi
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x74],2
	call CCakePieEvent::GetEventItemInfo
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x68],3
	test eax,eax
	je Block21

 Block20:
	mov ebp,dword ptr [eax+0x14]
	mov dword ptr [esp+0x20],ebp

 Block21:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block23

 Block22:
	mov edi,dword ptr [eax+0x14]
	mov dword ptr [esp+0x18],edi
	jmp Block24

 Block23:
	mov edi,dword ptr [esp+0x18]

 Block24:
	call dword ptr [ZImports::_timeGetTime]
	cmp eax,dword ptr [ebx+0xE4]
	jle Block32

 Block25:
	add eax,0xC8
	mov dword ptr [ebx+0xE4],eax
	mov eax,dword ptr [ebx+0xE0]
	inc eax
	and eax,0x80000001
	jns Block27

 Block26:
	dec eax
	or eax,0xFFFFFFFE
	inc eax

 Block27:
	mov dword ptr [ebx+0xE0],eax
	jne Block32

 Block28:
	cmp ebp,0x5A
	jle Block30

 Block29:
	mov eax,3
	mov word ptr [esp+0x50],ax
	mov dword ptr [esp+0x58],0xFF
	mov eax,dword ptr [ebx+0xEC]
	lea ecx,[esp+0x50]
	push ecx
	push eax
	push 0x1D
	push 0x45
	mov ecx,esi
	mov byte ptr [esp+0x78],4
	call IWzCanvas::Copy
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0x68],3
	call Ztl_variant_t::~Ztl_variant_t

 Block30:
	cmp edi,0x5A
	jle Block32

 Block31:
	mov edx,3
	mov word ptr [esp+0x50],dx
	mov dword ptr [esp+0x58],0xFF
	mov eax,dword ptr [ebx+0xEC]
	lea ecx,[esp+0x50]
	push ecx
	push eax
	push 0x31
	push 0x45
	mov ecx,esi
	mov byte ptr [esp+0x78],5
	call IWzCanvas::Copy
	lea ecx,[esp+0x50]
	mov byte ptr [esp+0x68],3
	call Ztl_variant_t::~Ztl_variant_t

 Block32:
	test ebp,ebp
	jle Block41

 Block33:
	cmp ebp,0x64
	mov eax,ebp
	jl Block35

 Block34:
	mov eax,0x64

 Block35:
	imul eax,0x8E
	mov ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x14],0
	test eax,eax
	jle Block45

 Block36:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [esp+0x40],dx
	mov dword ptr [esp+0x48],ecx
	mov edi,dword ptr [esp+0x40]
	mov edx,dword ptr [ebx+0xF0]
	mov ebp,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x54]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x24]
	push edx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x60]
	push 0x25
	lea edx,[edi+0x4E]
	push edx
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x80]
	push esi
	mov byte ptr [esp+0x88],6
	call eax
	test eax,eax
	jge Block38

 Block37:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block38:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x68],3
	jne Block42

 Block39:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block43

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block41:
	xor eax,eax
	jmp Block35

 Block42:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	inc edi
	cmp edi,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],edi
	jl Block36

 Block44:
	mov ebp,dword ptr [esp+0x20]
	mov edi,dword ptr [esp+0x18]

 Block45:
	test edi,edi
	jle Block54

 Block46:
	cmp edi,0x64
	mov eax,edi
	jl Block48

 Block47:
	mov eax,0x64

 Block48:
	imul eax,0x8E
	mov ecx,eax
	mov eax,0x51EB851F
	imul ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x14],0
	test eax,eax
	jle Block58

 Block49:
	mov eax,3
	mov ecx,0xFF
	mov word ptr [esp+0x40],ax
	mov dword ptr [esp+0x48],ecx
	mov edi,dword ptr [esp+0x40]
	mov edx,dword ptr [ebx+0xF4]
	mov ebp,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x54]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x24]
	push edx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x60]
	push 0x39
	lea edx,[edi+0x4E]
	push edx
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x80]
	push esi
	mov byte ptr [esp+0x88],7
	call eax
	test eax,eax
	jge Block51

 Block50:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block51:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x68],3
	jne Block55

 Block52:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block56

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block54:
	xor eax,eax
	jmp Block48

 Block55:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	inc edi
	cmp edi,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],edi
	jl Block49

 Block57:
	mov ebp,dword ptr [esp+0x20]

 Block58:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x50]
	push eax
	call edi
	lea ecx,[esp+0x50]
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
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x6C],8
	call edi
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	lea ecx,[esp+0x50]
	push ecx
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x24]
	push 0x38
	push eax
	mov byte ptr [esp+0x78],9
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x2C],0
	push ebp
	lea ecx,[esp+0x30]
	push offset _S_D__10
	mov bl,0xB
	push ecx
	mov byte ptr [esp+0x80],bl
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,8
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	push 0x22
	mov byte ptr [esp+0x7C],0xC
	push 0xE3
	mov ecx,esi
	mov byte ptr [esp+0x80],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x68],0xA
	test eax,eax
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block64:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x68],9
	test eax,eax
	je Block66

 Block65:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block66:
	mov ebx,8
	mov byte ptr [esp+0x68],8
	cmp word ptr [esp+0x40],bx
	jne Block73

 Block67:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block69

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block69:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block70:
	mov byte ptr [esp+0x68],3
	cmp word ptr [esp+0x50],bx
	jne Block74

 Block71:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block75

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block73:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x40]
	push edx
	call ebp
	jmp Block70

 Block74:
	lea ecx,[esp+0x50]
	push ecx
	call ebp

 Block75:
	lea edx,[esp+0x40]
	push edx
	call edi
	lea eax,[esp+0x40]
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
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0x6C],0xD
	call edi
	lea edx,[esp+0x50]
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
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x54]
	push ecx
	lea edx,[esp+0x24]
	push 0x38
	push edx
	mov byte ptr [esp+0x78],0xE
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x2C],0
	mov eax,dword ptr [esp+0x24]
	push eax
	lea ecx,[esp+0x30]
	push offset _S_D__10
	mov bl,0x10
	push ecx
	mov byte ptr [esp+0x80],bl
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,8
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	push 0x36
	mov byte ptr [esp+0x7C],0x11
	push 0xE3
	mov ecx,esi
	mov byte ptr [esp+0x80],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x68],0xF
	test eax,eax
	je Block81

 Block80:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block81:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x68],0xE
	test eax,eax
	je Block83

 Block82:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block83:
	mov edi,8
	mov byte ptr [esp+0x68],0xD
	cmp word ptr [esp+0x50],di
	jne Block86

 Block84:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea edx,[esp+0x50]
	push edx
	call ebp

 Block87:
	mov byte ptr [esp+0x68],3
	cmp word ptr [esp+0x40],di
	jne Block90

 Block88:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea ecx,[esp+0x40]
	push ecx
	call ebp

 Block91:
	cmp dword ptr [esp+0x2C],0
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	mov byte ptr [esp+0x68],2
	je Block94

 Block92:
	mov edi,dword ptr [esp+0x2C]
	add edi,4
	push edi
	call ebp
	test eax,eax
	jne Block94

 Block93:
	push edi
	call ebx
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block94:
	cmp dword ptr [esp+0x34],0
	mov byte ptr [esp+0x68],0
	je Block112

 Block95:
	mov edi,dword ptr [esp+0x34]
	add edi,4
	push edi
	call ebp
	test eax,eax
	jne Block112

 Block96:
	push edi
	call ebx
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax
	jmp Block112

 Block97:
	mov eax,dword ptr [ebx+0x94]
	xor ecx,ecx
	test eax,eax
	jle Block99

 Block98:
	mov ecx,eax

 Block99:
	mov eax,0x91A2B3C5
	imul ecx
	add edx,ecx
	sar edx,0xB
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	mov edx,edi
	imul edx,0xE10
	mov ebp,ecx
	sub ebp,edx
	mov eax,0x88888889
	imul ebp
	add edx,ebp
	sar edx,5
	mov ebp,edx
	shr ebp,0x1F
	add ebp,edx
	mov eax,0x88888889
	imul ecx
	add edx,ecx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edx,eax
	shl edx,4
	sub edx,eax
	add edx,edx
	add edx,edx
	sub ecx,edx
	mov dword ptr [esp+0x20],ecx
	mov dword ptr [esp+0x14],0
	mov eax,dword ptr [ebx+0xF8]
	push 2
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x70],0x12
	mov dword ptr [ecx],eax
	test edi,edi
	jle Block105

 Block100:
	mov dword ptr [esp+0x28],esp
	test eax,eax
	je Block102

 Block101:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block102:
	push edi
	lea eax,[esp+0x20]
	push offset _S_02D
	push eax
	mov byte ptr [esp+0x7C],0x13
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push 0x22
	push 0x111
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x34],esp
	push esi
	call edx
	mov byte ptr [esp+0x80],0x12
	call draw_text_by_image
	mov ebx,dword ptr [ebx+0xF8]
	add esp,0x18
	push 2
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block104

 Block103:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx

 Block104:
	push ebp
	lea edx,[esp+0x20]
	push offset _S_02D
	push edx
	mov byte ptr [esp+0x7C],0x14
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push 0x22
	push 0x14D
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x34],esp
	push esi
	call ecx
	jmp Block110

 Block105:
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block107

 Block106:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block107:
	push ebp
	lea ecx,[esp+0x20]
	push offset _S_02D
	push ecx
	mov byte ptr [esp+0x7C],0x15
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push 0x22
	push 0x111
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x30],esp
	push esi
	call eax
	mov byte ptr [esp+0x80],0x12
	call draw_text_by_image
	mov ebx,dword ptr [ebx+0xF8]
	add esp,0x18
	push 2
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block109

 Block108:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	push ebx
	call edx

 Block109:
	mov eax,dword ptr [esp+0x28]
	push eax
	lea ecx,[esp+0x20]
	push offset _S_02D
	push ecx
	mov byte ptr [esp+0x7C],0x16
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push 0x22
	push 0x14D
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x38],esp
	push esi
	call eax

 Block110:
	mov byte ptr [esp+0x80],0x12
	call draw_text_by_image
	mov eax,dword ptr [esp+0x2C]
	add esp,0x18
	mov byte ptr [esp+0x68],0
	test eax,eax
	je Block112

 Block111:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block112:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 4
}
}
// CCakePieEvent::Update
__SUB_CLASS_THIS0(00078A20, __thiscall, 71159,  CCakePieEvent, void) {
__asm {

 Block0:
	jmp dword ptr [ZImports::_timeGetTime]
}
}
// CTimerboard_CakePieEvent::OnCreate
_SUB_EXCEPTION_HANDLER(7ABC0)
__SUB_CLASS_THIS(0007ABC0, __thiscall, 71389,  CTimerboard_CakePieEvent, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_7ABC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x134
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x148]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x70],ebp
	lea ecx,[esp+0x118]
	call CClock::INITPARAM::_ctor_default
	push eax
	mov ecx,ebp
	mov dword ptr [esp+0x154],0
	call CClock::OnCreate
	or esi,0xFFFFFFFF
	lea ecx,[esp+0x118]
	mov dword ptr [esp+0x150],esi
	call CClock::INITPARAM::~INITPARAM
	lea eax,[esp+0x2C]
	push 0x3D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[ebp+0xE8]
	push edi
	push eax
	mov dword ptr [esp+0x15C],1
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x38]
	add esp,0xC
	mov dword ptr [esp+0x150],esi
	test eax,eax
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
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea eax,[esp+0x60]
	mov ebx,2
	push eax
	mov dword ptr [esp+0x154],ebx
	call esi
	lea ecx,[esp+0x60]
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
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x150],3
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[esp+0x30]
	push edx
	mov edx,dword ptr [ebp+0x28]
	lea eax,[esp+0x64]
	push eax
	mov eax,dword ptr [ebp+0x24]
	push edx
	push eax
	call IWzCanvas::Create
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x150],bl
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	cmp word ptr [esp+0x30],8
	mov dword ptr [esp+0x150],0xFFFFFFFF
	jne Block19

 Block13:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block15:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block16:
	cmp dword ptr [ebp+0xDC],0
	jne Block111

 Block17:
	lea edx,[esp+0x60]
	push edx
	call esi
	lea eax,[esp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block20

 Block18:
	push eax
	call _com_issue_error

 Block19:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x30]
	push ecx
	call ebx
	jmp Block16

 Block20:
	lea ecx,[esp+0x30]
	push ecx
	mov dword ptr [esp+0x154],4
	call esi
	lea edx,[esp+0x30]
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
	push 0
	push 0
	lea eax,[esp+0x68]
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,5
	push offset _S_MAPOBJETCIMG5THT__8
	mov byte ptr [esp+0x168],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x164],6
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea edx,[esp+0x8C]
	mov byte ptr [esp+0x164],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x158],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block27

 Block25:
	cmp eax,0x80004002
	je Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	cmp word ptr [esp+0x78],8
	mov byte ptr [esp+0x150],9
	jne Block34

 Block28:
	xor eax,eax
	mov word ptr [esp+0x78],ax
	mov eax,dword ptr [esp+0x80]
	test eax,eax
	je Block30

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block30:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block31:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x150],0xA
	jne Block35

 Block32:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block36

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block34:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x78]
	push ecx
	call ebx
	jmp Block31

 Block35:
	lea eax,[esp+0x30]
	push eax
	call ebx

 Block36:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x150],0xB
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea edx,[esp+0x60]
	push edx
	call ebx

 Block40:
	mov eax,3
	mov word ptr [esp+0x1C],ax
	mov dword ptr [esp+0x24],0xFF
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x150],0xC
	test ecx,ecx
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	mov eax,dword ptr [esp+0x14]
	lea edx,[esp+0x1C]
	push edx
	push eax
	push 0
	push 0
	call IWzCanvas::Copy
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x150],0xB
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
	call ebx

 Block46:
	lea eax,[esp+0x40]
	push eax
	call esi
	lea ecx,[esp+0x40]
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
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x154],0xD
	call esi
	lea eax,[esp+0x1C]
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
	push 0
	push 0
	lea ecx,[esp+0x48]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,0xE
	push offset _S_MAPOBJETCIMG5THT__7
	mov byte ptr [esp+0x168],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x164],0xF
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	lea eax,[esp+0x64]
	mov byte ptr [esp+0x164],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x158],0x10
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xEC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block55

 Block53:
	cmp eax,0x80004002
	je Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x150],bl
	jne Block62

 Block56:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block58

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block58:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block59:
	mov ebx,8
	mov byte ptr [esp+0x150],0xD
	cmp word ptr [esp+0x1C],bx
	jne Block63

 Block60:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block64

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block62:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x50]
	push edx
	call edi
	jmp Block59

 Block63:
	lea ecx,[esp+0x1C]
	push ecx
	call edi

 Block64:
	mov byte ptr [esp+0x150],0xB
	cmp word ptr [esp+0x40],bx
	jne Block67

 Block65:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea eax,[esp+0x40]
	push eax
	call edi

 Block68:
	lea ecx,[esp+0x1C]
	push ecx
	call esi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block70

 Block69:
	push eax
	call _com_issue_error

 Block70:
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x154],0x11
	call esi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	push 0
	push 0
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x4C]
	push eax
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,0x12
	push offset _S_MAPOBJETCIMG5THT__6
	mov byte ptr [esp+0x168],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x164],0x13
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	lea ecx,[esp+0x64]
	push ecx
	mov byte ptr [esp+0x168],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x158],0x14
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xF0]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block77

 Block75:
	cmp eax,0x80004002
	je Block77

 Block76:
	push eax
	call _com_issue_error

 Block77:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x150],bl
	jne Block80

 Block78:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea eax,[esp+0x50]
	push eax
	call edi

 Block81:
	mov ebx,8
	mov byte ptr [esp+0x150],0x11
	cmp word ptr [esp+0x40],bx
	jne Block84

 Block82:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea edx,[esp+0x40]
	push edx
	call edi

 Block85:
	mov byte ptr [esp+0x150],0xB
	cmp word ptr [esp+0x1C],bx
	jne Block88

 Block86:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea ecx,[esp+0x1C]
	push ecx
	call edi

 Block89:
	lea edx,[esp+0x1C]
	push edx
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block91

 Block90:
	push eax
	call _com_issue_error

 Block91:
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0x154],0x15
	call esi
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block93

 Block92:
	push eax
	call _com_issue_error

 Block93:
	push 0
	push 0
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x4C]
	push ecx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,0x16
	push offset _S_MAPOBJETCIMG5THT__5
	mov byte ptr [esp+0x168],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x164],0x17
	jne Block95

 Block94:
	push 0x80004003
	call _com_issue_error

 Block95:
	lea edx,[esp+0x64]
	mov byte ptr [esp+0x164],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x158],0x18
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xF4]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block98

 Block96:
	cmp eax,0x80004002
	je Block98

 Block97:
	push eax
	call _com_issue_error

 Block98:
	mov esi,8
	mov byte ptr [esp+0x150],bl
	cmp word ptr [esp+0x50],si
	jne Block101

 Block99:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea ecx,[esp+0x50]
	push ecx
	call edi

 Block102:
	mov byte ptr [esp+0x150],0x15
	cmp word ptr [esp+0x40],si
	jne Block105

 Block103:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea eax,[esp+0x40]
	push eax
	call edi

 Block106:
	mov byte ptr [esp+0x150],0xB
	cmp word ptr [esp+0x1C],si
	jne Block109

 Block107:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov eax,dword ptr [esp+0x14]
	jmp Block176

 Block109:
	lea edx,[esp+0x1C]
	push edx
	call edi

 Block110:
	mov eax,dword ptr [esp+0x14]
	jmp Block176

 Block111:
	lea eax,[esp+0x1C]
	push eax
	call esi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block113

 Block112:
	push eax
	call _com_issue_error

 Block113:
	lea edx,[esp+0x40]
	push edx
	mov dword ptr [esp+0x154],0x19
	call esi
	lea eax,[esp+0x40]
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
	push 0
	push 0
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x4C]
	push edx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push offset _S_MAPOBJETCIMG5THT__4
	mov byte ptr [esp+0x168],0x1A
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x164],0x1B
	jne Block117

 Block116:
	push 0x80004003
	call _com_issue_error

 Block117:
	lea eax,[esp+0x64]
	mov byte ptr [esp+0x164],0x1A
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x158],0x1C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x78]
	mov dword ptr [esp+0x78],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block120

 Block118:
	cmp eax,0x80004002
	je Block120

 Block119:
	push eax
	call _com_issue_error

 Block120:
	mov esi,8
	mov byte ptr [esp+0x150],0x1E
	cmp word ptr [esp+0x50],si
	jne Block123

 Block121:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea edx,[esp+0x50]
	push edx
	call ebx

 Block124:
	mov byte ptr [esp+0x150],0x1F
	cmp word ptr [esp+0x40],si
	jne Block127

 Block125:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea ecx,[esp+0x40]
	push ecx
	call ebx

 Block128:
	mov byte ptr [esp+0x150],0x20
	cmp word ptr [esp+0x1C],si
	jne Block131

 Block129:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block132

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block131:
	lea eax,[esp+0x1C]
	push eax
	call ebx

 Block132:
	mov ecx,3
	mov ebp,0xFF
	mov word ptr [esp+0x30],cx
	mov dword ptr [esp+0x38],ebp
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x150],0x21
	test ecx,ecx
	jne Block134

 Block133:
	push 0x80004003
	call _com_issue_error

 Block134:
	mov eax,dword ptr [esp+0x74]
	lea edx,[esp+0x30]
	push edx
	push eax
	push 0
	push 0
	call IWzCanvas::Copy
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x150],0x20
	jne Block137

 Block135:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block138

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block137:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block138:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	mov eax,dword ptr [esp+0x70]
	mov eax,dword ptr [eax+0xDC]
	dec eax
	mov byte ptr [esp+0x150],0x22
	cmp eax,3
	ja Block153

 Block139:
	cmp EAX, 0
je Block140
cmp EAX, 1
je Block143
cmp EAX, 2
je Block146
cmp EAX, 3
je Block149


 Block140:
	push offset _D_VTMISSING
	lea ecx,[esp+0x34]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x7C]
	mov byte ptr [esp+0x154],0x23
	call Ztl_variant_t::_ctor_1
	push 0
	push 0
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[esp+0x84]
	push edx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,0x24
	push offset _S_MAPOBJETCIMG5THT__3
	mov byte ptr [esp+0x168],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x164],0x25
	jne Block142

 Block141:
	push 0x80004003
	call _com_issue_error

 Block142:
	lea eax,[esp+0xEC]
	mov byte ptr [esp+0x164],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x158],0x26
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[esp+0xD8]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x78]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x30]
	jmp Block152

 Block143:
	push offset _D_VTMISSING
	lea ecx,[esp+0x9C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x64]
	mov byte ptr [esp+0x154],0x27
	call Ztl_variant_t::_ctor_1
	push 0
	push 0
	lea ecx,[esp+0xA0]
	push ecx
	lea edx,[esp+0x6C]
	push edx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push offset _S_MAPOBJETCIMG5THT__2
	mov byte ptr [esp+0x168],0x28
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x164],0x29
	jne Block145

 Block144:
	push 0x80004003
	call _com_issue_error

 Block145:
	lea eax,[esp+0x11C]
	mov byte ptr [esp+0x164],0x28
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x158],0x2A
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[esp+0x108]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x60]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x98]
	jmp Block152

 Block146:
	push offset _D_VTMISSING
	lea ecx,[esp+0x8C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0xBC]
	mov byte ptr [esp+0x154],0x2B
	call Ztl_variant_t::_ctor_1
	push 0
	push 0
	lea ecx,[esp+0x90]
	push ecx
	lea edx,[esp+0xC4]
	push edx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,0x2C
	push offset _S_MAPOBJETCIMG5THT__1
	mov byte ptr [esp+0x168],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x164],0x2D
	jne Block148

 Block147:
	push 0x80004003
	call _com_issue_error

 Block148:
	lea eax,[esp+0xFC]
	mov byte ptr [esp+0x164],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x158],0x2E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[esp+0xE8]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xB8]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x88]
	jmp Block152

 Block149:
	push offset _D_VTMISSING
	lea ecx,[esp+0xCC]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0xAC]
	mov byte ptr [esp+0x154],0x2F
	call Ztl_variant_t::_ctor_1
	push 0
	push 0
	lea ecx,[esp+0xD0]
	push ecx
	lea edx,[esp+0xB4]
	push edx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,0x30
	push offset _S_MAPOBJETCIMG5THT
	mov byte ptr [esp+0x168],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x164],0x31
	jne Block151

 Block150:
	push 0x80004003
	call _com_issue_error

 Block151:
	lea eax,[esp+0x10C]
	mov byte ptr [esp+0x164],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x158],0x32
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[esp+0xF8]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xA8]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xC8]

 Block152:
	mov byte ptr [esp+0x150],0x22
	call Ztl_variant_t::~Ztl_variant_t
	mov esi,dword ptr [esp+0x14]

 Block153:
	test esi,esi
	sete al
	test al,al
	sete al
	test al,al
	je Block166

 Block154:
	test esi,esi
	jne Block156

 Block155:
	push 0x80004003
	call _com_issue_error

 Block156:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x2C]
	push edx
	push esi
	mov dword ptr [esp+0x34],0
	call eax
	test eax,eax
	jge Block158

 Block157:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block158:
	mov ecx,dword ptr [esi]
	mov eax,0xF0
	sub eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x2C],0
	cdq
	sub eax,edx
	mov edi,eax
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x2C]
	push edx
	sar edi,1
	push esi
	add edi,0x1E
	call eax
	test eax,eax
	jge Block160

 Block159:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block160:
	mov eax,0x28
	sub eax,dword ptr [esp+0x2C]
	mov ecx,3
	cdq
	sub eax,edx
	sar eax,1
	add eax,0x1A
	mov word ptr [esp+0x30],cx
	mov dword ptr [esp+0x38],ebp
	mov ecx,dword ptr [esp+0x70]
	add ecx,0xE8
	mov ecx,dword ptr [ecx]
	mov byte ptr [esp+0x150],0x33
	test ecx,ecx
	jne Block162

 Block161:
	push 0x80004003
	call _com_issue_error

 Block162:
	lea edx,[esp+0x30]
	push edx
	push esi
	push eax
	push edi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x150],0x22
	jne Block165

 Block163:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block166

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block166

 Block165:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block166:
	mov ebx,dword ptr [esp+0x70]
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x34]
	lea eax,[esp+0x18]
	push eax
	mov ecx,ebx
	call edx
	mov eax,dword ptr [eax]
	mov edi,dword ptr [ebx+0xF8]
	cmp edi,eax
	je Block171

 Block167:
	mov dword ptr [ebx+0xF8],eax
	test eax,eax
	je Block169

 Block168:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block169:
	test edi,edi
	je Block171

 Block170:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block171:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block173

 Block172:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block173:
	mov byte ptr [esp+0x150],0x20
	test esi,esi
	je Block175

 Block174:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block175:
	mov eax,dword ptr [esp+0x74]

 Block176:
	mov dword ptr [esp+0x150],0xFFFFFFFF
	test eax,eax
	je Block178

 Block177:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block178:
	mov ecx,dword ptr [esp+0x148]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x140
	ret 4
}
}
// CClock::SetClock
__SUB_CLASS_THIS(000B0AB0, __thiscall, 23867,  CClock, void, long, long, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	mov eax,0x2AAAAAAB
	imul ecx
	sar edx,1
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edx,0
	setne dl
	lea eax,[eax+eax*2]
	add eax,eax
	add eax,eax
	sub ecx,eax
	test edx,edx
	je Block3

 Block1:
	test ecx,ecx
	jne Block3

 Block2:
	mov ecx,0xC

 Block3:
	mov dword ptr [esi+0xB4],edx
	mov edx,dword ptr [esp+0x10]
	mov dword ptr [esi+0xB8],ecx
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [esi+0xBC],ecx
	mov dword ptr [esi+0xC0],edx
	call timeGetTime
	push 0
	mov ecx,esi
	mov dword ptr [esi+0xD4],eax
	mov dword ptr [esi+0xB0],eax
	call CWnd::InvalidateRect
	pop esi
	ret 0xC
}
}
// CTimerboard_CakePieEvent::CTimerboard_CakePieEvent
__SUB_CLASS_THIS(000798D0, __thiscall, 71386,  CTimerboard_CakePieEvent, void, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CWnd::_ctor_default
	mov ecx,dword ptr [esp+8]
	xor eax,eax
	mov dword ptr [esi+0x88],eax
	mov dword ptr [esi+0x98],eax
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [esi+0xD8],eax
	int 3// TODO: 	mov dword ptr [esi],offset CTimerboard_CakePieEvent::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CTimerboard_CakePieEvent::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CTimerboard_CakePieEvent::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xE8],eax
	mov dword ptr [esi+0xEC],eax
	mov dword ptr [esi+0xF0],eax
	mov dword ptr [esi+0xF4],eax
	mov dword ptr [esi+0xF8],eax
	mov dword ptr [esi+0xE4],eax
	mov dword ptr [esi+0xE0],eax
	mov dword ptr [esi+0xDC],ecx
	mov eax,esi
	pop esi
	ret 4
}
}
// CUICakePieEventItemInfo::OnKey
__SUB_CLASS_THIS(00078A30, __thiscall, 71142,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	ret 8
}
}
// CClock::INITPARAM::INITPARAM
_SUB_EXCEPTION_HANDLER(79670)
__SUB_CLASS_THIS0(00079670, __thiscall, 24782,  CClock::INITPARAM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_79670
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
	lea edi,[esi+0x14]
	mov dword ptr [edi],0
	lea ebp,[esi+0x18]
	mov dword ptr [esp+0x24],0
	mov dword ptr [ebp],0
	mov ebx,1
	lea eax,[esp+0x14]
	push 0xB68
	push eax
	mov byte ptr [esp+0x2C],bl
	mov dword ptr [esi],ebx
	mov dword ptr [esi+4],0xFFFFFF
	mov dword ptr [esi+8],0xFFFFFFFF
	mov dword ptr [esi+0xC],0xE
	mov dword ptr [esi+0x10],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x28],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],bl
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea ecx,[esp+0x14]
	push 0xB0B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x28],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],bl
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov dword ptr [esi+0x2C],0
	mov dword ptr [esi+0x1C],0x56
	mov dword ptr [esi+0x20],0x70
	mov dword ptr [esi+0x24],0xB3
	mov dword ptr [esi+0x28],0xCD
	mov eax,esi
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
// CCakePieEvent::CCakePieEvent
__SUB_CLASS_THIS0(005C4AC0, __thiscall, 71157,  CCakePieEvent, void) {
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
	mov dword ptr [TSingleton<CCakePieEvent>::ms_pInstance],esi
	pop esi
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CCakePieEvent>::ms_pInstance],ecx

 Block3:
	int 3// TODO: 	mov dword ptr [eax],offset CCakePieEvent::`vftable'
	int 3// TODO: 	mov dword ptr [edx],offset ZList<ZRef<CAKEPIEEVENT_ITEMINFO>>::`vftable'
	mov dword ptr [edx+8],ecx
	mov dword ptr [edx+0xC],ecx
	mov dword ptr [edx+0x10],ecx
	mov dword ptr [eax+0x1C],ecx
	ret
}
}
// CUICakePieEventItemInfo::CUICakePieEventItemInfo
_SUB_EXCEPTION_HANDLER(79A30)
__SUB_CLASS_THIS0(00079A30, __thiscall, 71138,  CUICakePieEventItemInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_79A30
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
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	call CDialog::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CUICakePieEventItemInfo::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUICakePieEventItemInfo::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUICakePieEventItemInfo::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x54],edi
	mov dword ptr [esi+0x90],edi
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA4],edi
	push edi
	push edi
	push 1
	push offset _S_UIUIWINDOWIMG5TH__3
	mov ecx,esi
	mov byte ptr [esp+0x64],5
	call CDialog::CreateDlg_2
	mov ebx,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xB0],0x24
	mov dword ptr [esi+0xB4],0x29
	mov dword ptr [esi+0xB8],0x36
	mov dword ptr [esi+0xBC],0x3B
	mov dword ptr [esi+0xC0],0x48
	mov dword ptr [esi+0xC4],0x4D
	mov dword ptr [esi+0xC8],0x5A
	mov dword ptr [esi+0xCC],0x5F
	lea eax,[esp+0x2C]
	push eax
	mov dword ptr [esi+0xD0],edi
	mov dword ptr [esi+0xF0],edi
	mov dword ptr [esi+0x130],edi
	mov dword ptr [esi+0xD4],edi
	mov dword ptr [esi+0xF4],edi
	mov dword ptr [esi+0x134],edi
	mov dword ptr [esi+0xD8],edi
	mov dword ptr [esi+0xF8],edi
	mov dword ptr [esi+0x138],edi
	mov dword ptr [esi+0xDC],edi
	mov dword ptr [esi+0xFC],edi
	mov dword ptr [esi+0x13C],edi
	mov dword ptr [esi+0xE0],edi
	mov dword ptr [esi+0x100],edi
	mov dword ptr [esi+0x140],edi
	mov dword ptr [esi+0xE4],edi
	mov dword ptr [esi+0x104],edi
	mov dword ptr [esi+0x144],edi
	mov dword ptr [esi+0xE8],edi
	mov dword ptr [esi+0x108],edi
	mov dword ptr [esi+0x148],edi
	mov dword ptr [esi+0xEC],edi
	mov dword ptr [esi+0x10C],edi
	mov dword ptr [esi+0x14C],edi
	call ebx
	lea ecx,[esp+0x2C]
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
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x58],6
	call ebx
	lea eax,[esp+0x1C]
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
	lea ecx,[esp+0x34]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMG5TH__3
	mov byte ptr [esp+0x6C],7
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x68],8
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x50]
	mov byte ptr [esp+0x68],7
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],9
	call Ztl_variant_t::GetUnknown
	cmp eax,edi
	je Block12

 Block7:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x14]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov ebp,eax
	mov eax,dword ptr [esi+0x90]
	cmp ebp,edi
	setl bl
	dec ebx
	and ebx,dword ptr [esp+0x14]
	cmp eax,edi
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	cmp ebp,edi
	mov dword ptr [esi+0x90],ebx
	jge Block14

 Block10:
	cmp ebp,0x80004002
	je Block14

 Block11:
	push ebp
	call _com_issue_error

 Block12:
	mov eax,dword ptr [esi+0x90]
	cmp eax,edi
	je Block14

 Block13:
	mov dword ptr [esi+0x90],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	cmp word ptr [esp+0x3C],8
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x54],7
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,edi
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[esp+0x3C]
	push ecx
	call ebp

 Block18:
	mov ebx,8
	mov byte ptr [esp+0x54],6
	cmp word ptr [esp+0x1C],bx
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,edi
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea eax,[esp+0x1C]
	push eax
	call ebp

 Block22:
	mov byte ptr [esp+0x54],5
	cmp word ptr [esp+0x2C],bx
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,edi
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[esp+0x2C]
	push edx
	call ebp

 Block26:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push eax
	call ebx
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x58],0xA
	call ebx
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	push edi
	push edi
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMG5TH__2
	mov byte ptr [esp+0x6C],0xB
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x68],0xC
	cmp dword ptr [_D_G_RM],edi
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea eax,[esp+0x50]
	mov byte ptr [esp+0x68],0xB
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],0xD
	call Ztl_variant_t::GetUnknown
	cmp eax,edi
	je Block38

 Block33:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x14]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov ebp,eax
	mov eax,dword ptr [esi+0x94]
	cmp ebp,edi
	setl bl
	dec ebx
	and ebx,dword ptr [esp+0x14]
	cmp eax,edi
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block35:
	cmp ebp,edi
	mov dword ptr [esi+0x94],ebx
	jge Block40

 Block36:
	cmp ebp,0x80004002
	je Block40

 Block37:
	push ebp
	call _com_issue_error

 Block38:
	mov eax,dword ptr [esi+0x94]
	cmp eax,edi
	je Block40

 Block39:
	mov dword ptr [esi+0x94],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block40:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x54],0xB
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,edi
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov ebx,8
	mov byte ptr [esp+0x54],0xA
	cmp word ptr [esp+0x2C],bx
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,edi
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov byte ptr [esp+0x54],5
	cmp word ptr [esp+0x1C],bx
	jne Block51

 Block49:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,edi
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push eax
	call ebx
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x58],0xE
	call ebx
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	push edi
	push edi
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMG5TH__1
	mov byte ptr [esp+0x6C],0xF
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x68],0x10
	cmp dword ptr [_D_G_RM],edi
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea eax,[esp+0x50]
	mov byte ptr [esp+0x68],0xF
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],0x11
	call Ztl_variant_t::GetUnknown
	cmp eax,edi
	je Block64

 Block59:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x14]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov ebp,eax
	mov eax,dword ptr [esi+0x98]
	cmp ebp,edi
	setl bl
	dec ebx
	and ebx,dword ptr [esp+0x14]
	cmp eax,edi
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	cmp ebp,edi
	mov dword ptr [esi+0x98],ebx
	jge Block66

 Block62:
	cmp ebp,0x80004002
	je Block66

 Block63:
	push ebp
	call _com_issue_error

 Block64:
	mov eax,dword ptr [esi+0x98]
	cmp eax,edi
	je Block66

 Block65:
	mov dword ptr [esi+0x98],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block66:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x54],0xF
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,edi
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov ebx,8
	mov byte ptr [esp+0x54],0xE
	cmp word ptr [esp+0x2C],bx
	jne Block73

 Block71:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,edi
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block74:
	mov byte ptr [esp+0x54],5
	cmp word ptr [esp+0x1C],bx
	jne Block77

 Block75:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,edi
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block78:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push eax
	call ebx
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block80

 Block79:
	push eax
	call _com_issue_error

 Block80:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x58],0x12
	call ebx
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block82

 Block81:
	push eax
	call _com_issue_error

 Block82:
	push edi
	push edi
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMG5TH
	mov byte ptr [esp+0x6C],0x13
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x68],0x14
	cmp dword ptr [_D_G_RM],edi
	jne Block84

 Block83:
	push 0x80004003
	call _com_issue_error

 Block84:
	lea eax,[esp+0x50]
	mov byte ptr [esp+0x68],0x13
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],0x15
	call Ztl_variant_t::GetUnknown
	cmp eax,edi
	je Block90

 Block85:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x14]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov ebp,eax
	mov eax,dword ptr [esi+0x9C]
	cmp ebp,edi
	setl bl
	dec ebx
	and ebx,dword ptr [esp+0x14]
	cmp eax,edi
	je Block87

 Block86:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block87:
	cmp ebp,edi
	mov dword ptr [esi+0x9C],ebx
	jge Block92

 Block88:
	cmp ebp,0x80004002
	je Block92

 Block89:
	push ebp
	call _com_issue_error

 Block90:
	mov eax,dword ptr [esi+0x9C]
	cmp eax,edi
	je Block92

 Block91:
	mov dword ptr [esi+0x9C],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block92:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x54],0x13
	jne Block95

 Block93:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,edi
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov ebx,8
	mov byte ptr [esp+0x54],0x12
	cmp word ptr [esp+0x2C],bx
	jne Block99

 Block97:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,edi
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block100:
	mov byte ptr [esp+0x54],5
	cmp word ptr [esp+0x1C],bx
	jne Block103

 Block101:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,edi
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block104:
	mov eax,esi
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret
}
}
// CTimerboard_CakePieEvent::~CTimerboard_CakePieEvent
__SUB_CLASS_THIS0(00079950, __thiscall, 71388,  CTimerboard_CakePieEvent, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	int 3// TODO: 	mov dword ptr [esi],offset CTimerboard_CakePieEvent::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CTimerboard_CakePieEvent::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CTimerboard_CakePieEvent::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xF8]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xF4]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xF0]
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0xEC]
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0xE8]
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov ecx,esi
	pop esi
	jmp  CClock::~CClock
}
}
// CCakePieEvent::FindItemInfo
_SUB_EXCEPTION_HANDLER(79070)
__SUB_CLASS_THIS(00079070, __thiscall, 71162,  CCakePieEvent, ZRef<CAKEPIEEVENT_ITEMINFO>*, ZRef<CAKEPIEEVENT_ITEMINFO>*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_79070
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
	mov dword ptr [esp+0x1C],0
	mov ecx,dword ptr [ecx+0x10]
	mov dword ptr [esp+0x1C],ecx
	test ecx,ecx
	je Block11

 Block1:
	mov ebp,dword ptr [esp+0x38]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	lea eax,[esp+0x1C]
	push eax
	call ZList<ZRef<CAKEPIEEVENT_ITEMINFO>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	test esi,esi
	je Block4

 Block3:
	lea ecx,[esi+4]
	push ecx
	call ebx

 Block4:
	test esi,esi
	jne Block6

 Block5:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	jmp Block10

 Block6:
	mov edx,dword ptr [esp+0x34]
	cmp dword ptr [esi+0xC],edx
	jne Block8

 Block7:
	cmp dword ptr [esi+0x10],ebp
	je Block13

 Block8:
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block9:
	push edi
	call ebx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block10:
	cmp dword ptr [esp+0x1C],0
	jne Block2

 Block11:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [eax+4],0

 Block12:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 0xC

 Block13:
	mov ebp,dword ptr [esp+0x30]
	lea edi,[esi+4]
	push edi
	mov dword ptr [ebp+4],esi
	call ebx
	push edi
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block15

 Block14:
	push edi
	call ebx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block15:
	mov eax,ebp
	jmp Block12
}
}
// CCakePieEvent::CloseUI_ItemInfo
__SUB_CLASS_THIS0(00079040, __thiscall, 71159,  CCakePieEvent, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x1C]
	test ecx,ecx
	je Block3

 Block1:
	call CWnd::Destroy
	add esi,0x18
	cmp dword ptr [esi+4],0
	je Block3

 Block2:
	push 0
	mov ecx,esi
	call ZRef<CUICakePieEventItemInfo>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block3:
	pop esi
	ret
}
}
// CTimerboard_CakePieEvent::GetFontTime
_SUB_EXCEPTION_HANDLER(7C670)
__SUB_CLASS_THIS0(0007C670, __thiscall, 71391,  CTimerboard_CakePieEvent, _x_com_ptr<IWzProperty>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_7C670
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
	push 0x1630
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
// CUICakePieEventItemInfo::~CUICakePieEventItemInfo
_SUB_EXCEPTION_HANDLER(7A2B0)
__SUB_CLASS_THIS0(0007A2B0, __thiscall, 71140,  CUICakePieEventItemInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_7A2B0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUICakePieEventItemInfo::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUICakePieEventItemInfo::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUICakePieEventItemInfo::`vftable'{for `ZRefCounted'}
	cmp dword ptr [esi+0xA4],0
	lea edi,[esi+0xA0]
	mov dword ptr [esp+0x18],4
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	mov eax,dword ptr [esi+0x9C]
	mov byte ptr [esp+0x18],3
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x98]
	mov byte ptr [esp+0x18],2
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0x94]
	mov byte ptr [esp+0x18],1
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x90]
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov ecx,esi
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CClock::GetFontTime
_SUB_EXCEPTION_HANDLER(7C4B0)
__SUB_CLASS_THIS0(0007C4B0, __thiscall, 23870,  CClock, _x_com_ptr<IWzProperty>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_7C4B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov edi,ecx
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
	mov eax,dword ptr [edi+0x9C]
	push 0
	push 0
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x20]
	push edx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	mov bl,1
	push eax
	mov byte ptr [esp+0x64],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x60],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x48]
	mov byte ptr [esp+0x60],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
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
	mov edi,8
	mov byte ptr [esp+0x4C],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x34],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x34]
	push edx
	call ebx

 Block13:
	mov byte ptr [esp+0x4C],0
	cmp word ptr [esp+0x14],di
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x14]
	push ecx
	call ebx

 Block17:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp word ptr [esp+0x24],di
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x24]
	push eax
	call ebx

 Block21:
	mov eax,esi
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x40
	ret 4
}
}
// CClock::LoadClockCanvas
_SUB_EXCEPTION_HANDLER(B1BE0)
__SUB_CLASS_THIS(000B1BE0, __thiscall, 23874,  CClock, void, ZArray<_x_com_ptr<IWzCanvas> >&, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_B1BE0
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
	mov ecx,dword ptr [ebp+8]
	lea eax,[ebp-0x25]
	push eax
	xor ebx,ebx
	push 0xD
	mov dword ptr [ebp-4],ebx
	call ZArray<_x_com_ptr<IWzCanvas>>::_Alloc

 Block1:
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
	je Block15

 Block2:
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,dword ptr [ebp+8]
	mov edx,dword ptr [ecx]
	mov ecx,eax
	mov byte ptr [ebp-4],2
	lea esi,[edx+ebx*4]
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block10

 Block3:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x2C]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov edi,eax
	mov eax,dword ptr [esi]
	test edi,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x2C]
	mov dword ptr [ebp-0x14],ecx
	test eax,eax
	je Block5

 Block4:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block5:
	mov ecx,dword ptr [ebp-0x14]
	mov dword ptr [esi],ecx
	test edi,edi
	jge Block7

 Block6:
	cmp edi,0x80004002
	jne Block21

 Block7:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0
	jne Block12

 Block8:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block13

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block10:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block7

 Block11:
	mov dword ptr [esi],0
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block7

 Block12:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	inc ebx
	cmp ebx,0xA
	jl Block1

 Block14:
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0x5C3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],3
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea edx,[ebp-0x24]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,dword ptr [ebp+8]
	mov esi,dword ptr [ecx]
	mov ecx,eax
	mov byte ptr [ebp-4],4
	add esi,0x28
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block22

 Block17:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x14]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [esi]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp-0x14]
	test eax,eax
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block24

 Block20:
	cmp edi,0x80004002
	je Block24

 Block21:
	push edi
	call _com_issue_error

 Block22:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block24

 Block23:
	mov dword ptr [esi],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0
	jne Block27

 Block25:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x1A9C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],5
	test ecx,ecx
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea eax,[ebp-0x24]
	push eax
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,dword ptr [ebp+8]
	mov esi,dword ptr [ecx]
	mov ecx,eax
	mov byte ptr [ebp-4],6
	add esi,0x2C
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block36

 Block31:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x14]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [esi]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp-0x14]
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block33:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block38

 Block34:
	cmp edi,0x80004002
	je Block38

 Block35:
	push edi
	call _com_issue_error

 Block36:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block38

 Block37:
	mov dword ptr [esi],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block38:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x1AC7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],7
	test ecx,ecx
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	lea eax,[ebp-0x24]
	push eax
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,dword ptr [ebp+8]
	mov esi,dword ptr [ecx]
	mov ecx,eax
	mov byte ptr [ebp-4],8
	add esi,0x30
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block50

 Block45:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x14]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [esi]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp-0x14]
	test eax,eax
	je Block47

 Block46:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block47:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block52

 Block48:
	cmp edi,0x80004002
	je Block52

 Block49:
	push edi
	call _com_issue_error

 Block50:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block52

 Block51:
	mov dword ptr [esi],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block52:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0
	jne Block55

 Block53:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block58

 Block57:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block58:
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
// CClock::CLOCKITEM::Elapse
__SUB_CLASS_THIS(000B08E0, __thiscall, 24846,  CClock::CLOCKITEM, void, long) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,0x10624DD3
	imul edx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edx,dword ptr [ecx+0xC]
	add eax,edx
	cdq
	push esi
	mov esi,0x3C
	idiv esi
	add dword ptr [ecx+8],eax
	mov eax,dword ptr [ecx+8]
	mov dword ptr [ecx+0xC],edx
	cdq
	idiv esi
	mov esi,0x18
	add dword ptr [ecx+4],eax
	mov eax,dword ptr [ecx+4]
	mov dword ptr [ecx+8],edx
	cdq
	idiv esi
	pop esi
	mov dword ptr [ecx+4],edx
	ret 4
}
}
// CClock::INITPARAM::~INITPARAM
_SUB_EXCEPTION_HANDLER(795C0)
__SUB_CLASS_THIS0(000795C0, __thiscall, 24784,  CClock::INITPARAM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_795C0
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
	mov eax,dword ptr [esi+0x18]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [esi+0x14]
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
