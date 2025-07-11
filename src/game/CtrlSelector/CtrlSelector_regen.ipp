#include "regen.hpp"
// CtrlSelector.ipp
#include "CtrlSelector.hpp"

// CCtrlSelector::CreateCtrl
__SUB_CLASS_THIS(000EB610, __thiscall, 48448,  CCtrlSelector, void, CWnd*, uint32_t, long, long, long, void*) {
__asm {

 Block0:
	mov edx,dword ptr [esp+0x14]
	xor eax,eax
	mov dword ptr [ecx+0x38],eax
	mov dword ptr [ecx+0x3C],eax
	mov dword ptr [ecx+0x40],eax
	mov dword ptr [ecx+0x44],eax
	mov dword ptr [ecx+0x4C],eax
	mov eax,dword ptr [esp+0x18]
	push eax
	mov eax,dword ptr [esp+0x14]
	push 0xE
	push edx
	mov edx,dword ptr [esp+0x18]
	push eax
	mov eax,dword ptr [esp+0x18]
	push edx
	mov edx,dword ptr [esp+0x18]
	push eax
	push edx
	mov dword ptr [ecx+0x48],0xFFFFFFFF
	call CCtrlWnd::CreateCtrl
	ret 0x18
}
}
// CCtrlSelector::IsKindOf
__SUB_CLASS_THIS(000EC820, __thiscall, 48462,  CCtrlSelector, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CCtrlSelector::ms_RTTI_CCtrlSelector
	lea esp,[esp]

 Block1:
	cmp eax,ecx
	je Block4

 Block2:
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block1

 Block3:
	ret 4

 Block4:
	mov eax,1
	ret 4
}
}
// CCtrlSelector::Draw
_SUB_EXCEPTION_HANDLER(EBC50)
__SUB_CLASS_THIS(000EBC50, __thiscall, 48455,  CCtrlSelector, void, long, long, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_EBC50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x90
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xA4]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	xor esi,esi
	push esi
	lea eax,[esp+0x24]
	push eax
	call CCtrlWnd::GetCanvas
	mov ebp,dword ptr [esp+0x20]
	mov dword ptr [esp+0xAC],esi
	cmp ebp,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [edi+0x54]
	mov ecx,dword ptr [edi+0x20]
	mov edx,dword ptr [edi+0x1C]
	mov ebx,dword ptr [esp+0xB8]
	push eax
	mov eax,dword ptr [ebp]
	push ecx
	mov ecx,dword ptr [esp+0xBC]
	push edx
	mov edx,dword ptr [eax+0x8C]
	push ebx
	push ecx
	push ebp
	call edx
	cmp eax,esi
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block4:
	cmp dword ptr [edi+0x38],esi
	jne Block6

 Block5:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov dword ptr [esp+0xB0],0xFFFFFFFF
	call ecx
	jmp Block59

 Block6:
	mov dword ptr [esp+0x18],esi
	mov dword ptr [esp+0x14],esi

 Block7:
	mov eax,dword ptr [edi+0x5C]
	test eax,eax
	je Block58

 Block8:
	mov edx,dword ptr [esp+0x18]
	cmp edx,dword ptr [eax-4]
	jae Block58

 Block9:
	mov esi,eax
	add esi,dword ptr [esp+0x14]
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block57

 Block10:
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0xB0],1
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block57

 Block11:
	mov ecx,dword ptr [esp+0x18]
	mov byte ptr [esp+0xAC],2
	lea eax,[edi+0x64]
	cmp dword ptr [edi+0x48],ecx
	je Block13

 Block12:
	lea eax,[edi+0x60]

 Block13:
	mov eax,dword ptr [eax]
	lea edx,[esp+0x24]
	push edx
	lea ecx,[esp+0x48]
	push ecx
	push eax
	mov eax,dword ptr [esi+4]
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov edx,dword ptr [esi+0xC]
	mov ecx,dword ptr [esi+8]
	add ecx,dword ptr [esp+0xC4]
	lea eax,[edx+ebx-1]
	push eax
	push ecx
	mov byte ptr [esp+0xC4],3
	mov ecx,ebp
	mov byte ptr [esp+0xC4],2
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0xAC],1
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block17:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0xAC],0
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov eax,dword ptr [esi]
	test eax,eax
	jl Block43

 Block22:
	cmp dword ptr [edi+0x34],eax
	jne Block43

 Block23:
	lea eax,[esp+0x64]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block57

 Block24:
	lea edx,[esp+0x84]
	push edx
	mov byte ptr [esp+0xB0],4
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x84]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block57

 Block25:
	mov eax,dword ptr [edi+0x60]
	lea ecx,[esp+0x64]
	push ecx
	lea edx,[esp+0x88]
	push edx
	push eax
	mov eax,dword ptr [esi+4]
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xC0],5
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esi+0xC]
	mov edx,dword ptr [esi+8]
	add edx,dword ptr [esp+0xC4]
	lea ecx,[eax+ebx-1]
	push ecx
	mov byte ptr [esp+0xC0],6
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0xC4],5
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x84],8
	mov byte ptr [esp+0xAC],4
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0x84],ax
	mov eax,dword ptr [esp+0x8C]
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0x84]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0xAC],0
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea eax,[esp+0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block33:
	cmp dword ptr [edi+0x50],0
	je Block56

 Block34:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block57

 Block35:
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0xB0],7
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block57

 Block36:
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x38]
	push eax
	mov eax,dword ptr [edi+0x60]
	push eax
	mov eax,dword ptr [esi+4]
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xC0],8
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0xC]
	mov eax,dword ptr [esi+8]
	lea edx,[ecx+ebx-1]
	mov ecx,dword ptr [esp+0xC4]
	push edx
	lea edx,[ecx+eax+1]
	mov byte ptr [esp+0xC0],9
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0xC4],8
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0xAC],7
	cmp word ptr [esp+0x34],si
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov byte ptr [esp+0xAC],0
	cmp word ptr [esp+0x54],si
	jne Block42

 Block41:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	jmp Block53

 Block42:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]
	inc dword ptr [esp+0x18]
	add dword ptr [esp+0x14],0x18
	jmp Block7

 Block43:
	lea ecx,[esp+0x94]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x94]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block57

 Block44:
	lea eax,[esp+0x74]
	push eax
	mov byte ptr [esp+0xB0],0xA
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x74]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block57

 Block45:
	mov edx,dword ptr [esp+0x18]
	mov byte ptr [esp+0xAC],0xB
	lea eax,[edi+0x64]
	cmp dword ptr [edi+0x48],edx
	je Block47

 Block46:
	lea eax,[edi+0x60]

 Block47:
	mov eax,dword ptr [eax]
	lea ecx,[esp+0x94]
	push ecx
	lea edx,[esp+0x78]
	push edx
	push eax
	mov eax,dword ptr [esi+4]
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esi+0xC]
	mov edx,dword ptr [esi+8]
	add edx,dword ptr [esp+0xC4]
	lea ecx,[eax+ebx-1]
	push ecx
	mov byte ptr [esp+0xC0],0xC
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0xC4],0xB
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0xAC],0xA
	cmp word ptr [esp+0x74],si
	jne Block50

 Block48:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov byte ptr [esp+0xAC],0
	cmp word ptr [esp+0x94],si
	jne Block55

 Block52:
	mov eax,dword ptr [esp+0x9C]
	xor edx,edx
	mov word ptr [esp+0x94],dx

 Block53:
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [esp+0x18]
	add dword ptr [esp+0x14],0x18
	jmp Block7

 Block55:
	lea eax,[esp+0x94]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block56:
	inc dword ptr [esp+0x18]
	add dword ptr [esp+0x14],0x18
	jmp Block7

 Block57:
	push eax
	call _com_issue_error

 Block58:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov dword ptr [esp+0xB0],0xFFFFFFFF
	call edx

 Block59:
	mov ecx,dword ptr [esp+0xA4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x9C
	ret 0xC
}
}
// CCtrlSelector::VISIBLE_ITEM::~VISIBLE_ITEM
__SUB_CLASS_THIS0(000EB7D0, __thiscall, 48476,  CCtrlSelector::VISIBLE_ITEM, void) {
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
// CCtrlSelector::OnMouseEnter
__SUB_CLASS_THIS(000EB650, __thiscall, 48454,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CCtrlWnd::OnMouseEnter
	cmp dword ptr [esi+0x34],0
	je Block2

 Block1:
	lea ecx,[esi-4]
	mov dword ptr [esi+0x44],0xFFFFFFFF
	call CCtrlWnd::InvalidateRect

 Block2:
	pop esi
	ret 4
}
}
// CCtrlSelector::ResetVisible
_SUB_EXCEPTION_HANDLER(EC220)
__SUB_CLASS_THIS0(000EC220, __thiscall, 48447,  CCtrlSelector, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_EC220
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
	mov ebp,ecx
	mov dword ptr [esp+0x24],ebp
	xor edi,edi
	cmp dword ptr [ebp+0x38],edi
	je Block61

 Block1:
	lea esi,[ebp+0x5C]
	mov ecx,esi
	mov dword ptr [esp+0x18],esi
	call ZArray<CCtrlSelector::VISIBLE_ITEM>::RemoveAll
	cmp dword ptr [ebp+0x44],edi
	mov dword ptr [esp+0x14],edi
	jle Block14

 Block2:
	mov dword ptr [esp+0x54],edi
	lea eax,[esp+0x20]
	push 0xAFE
	push eax
	mov dword ptr [esp+0x78],edi
	mov dword ptr [esp+0x58],0xFFFFFFFE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x58]
	mov byte ptr [esp+0x74],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x70],0
	cmp eax,edi
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov ebx,dword ptr [esp+0x54]
	lea eax,[esp+0x30]
	push eax
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push ebx
	mov byte ptr [esp+0x7C],2
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x60]
	mov byte ptr [esp+0x78],3
	cmp ecx,edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov byte ptr [esp+0x78],2
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x30],8
	mov dword ptr [esp+0x60],eax
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x70],0
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,edi
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	push 0xFFFFFFFF
	lea eax,[esp+0x54]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x64],edi
	mov dword ptr [esp+0x6C],0xE
	call ZArray<CCtrlSelector::VISIBLE_ITEM>::Insert
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp ebx,edi
	je Block14

 Block13:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov edx,dword ptr [ebp+0x44]
	mov eax,dword ptr [ebp+0x3C]
	mov ebx,dword ptr [ebp+0x38]
	lea ecx,[edx+1]
	imul ecx,eax
	cmp ecx,ebx
	mov dword ptr [esp+0x20],ecx
	jl Block16

 Block15:
	mov dword ptr [esp+0x20],ebx

 Block16:
	imul eax,edx
	cmp eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x1C],eax
	jge Block40

 Block17:
	jmp Block20

 Block19:
	mov eax,dword ptr [esp+0x1C]

 Block20:
	mov dword ptr [esp+0x54],edi
	mov ecx,dword ptr [ebp+0x58]
	lea edx,[ecx+eax*4]
	push edx
	lea ecx,[esp+0x58]
	mov dword ptr [esp+0x74],4
	mov dword ptr [esp+0x54],eax
	call ZXString<char>::op_assign
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block5

 Block21:
	mov eax,dword ptr [esp+0x54]
	lea edx,[esp+0x30]
	push edx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x7C],5
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x60]
	mov byte ptr [esp+0x78],6
	cmp ecx,edi
	je Block7

 Block22:
	mov byte ptr [esp+0x78],5
	call IWzFont::CalcTextWidth
	mov ebx,eax
	add dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x30],8
	mov dword ptr [esp+0x60],ebx
	mov byte ptr [esp+0x70],4
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,edi
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
	mov ebp,0xE
	push 0xFFFFFFFF
	mov ecx,esi
	mov dword ptr [esp+0x60],edi
	mov dword ptr [esp+0x68],ebp
	call ZArray<CCtrlSelector::VISIBLE_ITEM>::InsertBefore
	mov esi,eax
	mov eax,dword ptr [esp+0x50]
	lea ecx,[esp+0x54]
	push ecx
	lea ecx,[esi+4]
	mov dword ptr [esi],eax
	call ZXString<char>::op_assign
	mov edx,dword ptr [esp+0x58]
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esi+8],edx
	mov dword ptr [esi+0xC],edi
	mov dword ptr [esi+0x10],ebx
	mov dword ptr [esi+0x14],ebp
	mov esi,dword ptr [esp+0x1C]
	dec eax
	cmp esi,eax
	je Block37

 Block27:
	cmp esi,0xA
	je Block37

 Block28:
	lea ecx,[esp+0x28]
	push 0xAFF
	push ecx
	mov dword ptr [esp+0x58],0xFFFFFFFD
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x58]
	mov byte ptr [esp+0x74],7
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x70],4
	test eax,eax
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block5

 Block31:
	mov edx,dword ptr [esp+0x54]
	lea ecx,[esp+0x40]
	push ecx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x7C],8
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [eax+0x60]
	mov byte ptr [esp+0x78],9
	test ecx,ecx
	je Block7

 Block32:
	mov byte ptr [esp+0x78],8
	call IWzFont::CalcTextWidth
	mov ebp,eax
	add dword ptr [esp+0x14],ebp
	cmp word ptr [esp+0x40],8
	mov dword ptr [esp+0x60],ebp
	mov byte ptr [esp+0x70],4
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov ecx,dword ptr [esp+0x18]
	xor edi,edi
	mov ebx,0xE
	push 0xFFFFFFFF
	mov dword ptr [esp+0x60],edi
	mov dword ptr [esp+0x68],ebx
	call ZArray<CCtrlSelector::VISIBLE_ITEM>::InsertBefore
	mov esi,eax
	mov eax,dword ptr [esp+0x50]
	lea ecx,[esp+0x54]
	push ecx
	lea ecx,[esi+4]
	mov dword ptr [esi],eax
	call ZXString<char>::op_assign
	mov edx,dword ptr [esp+0x58]
	mov dword ptr [esi+8],edx
	mov dword ptr [esi+0xC],edi
	mov dword ptr [esi+0x10],ebp
	mov dword ptr [esi+0x14],ebx
	mov esi,dword ptr [esp+0x1C]

 Block37:
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	test eax,eax
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	mov ebp,dword ptr [esp+0x24]
	inc esi
	xor edi,edi
	cmp esi,dword ptr [esp+0x20]
	mov dword ptr [esp+0x1C],esi
	mov esi,dword ptr [esp+0x18]
	jl Block19

 Block40:
	mov eax,dword ptr [ebp+0x40]
	dec eax
	cmp dword ptr [ebp+0x44],eax
	jge Block54

 Block41:
	mov dword ptr [esp+0x54],edi
	lea ecx,[esp+0x28]
	push 0xB00
	push ecx
	mov dword ptr [esp+0x78],0xA
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x58]
	mov byte ptr [esp+0x74],0xB
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x70],0xA
	cmp eax,edi
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block43:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	mov edx,dword ptr [esp+0x54]
	lea ecx,[esp+0x40]
	push ecx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,0xC
	push edx
	mov byte ptr [esp+0x7C],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x60]
	mov byte ptr [esp+0x78],0xD
	cmp ecx,edi
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	mov byte ptr [esp+0x78],bl
	call IWzFont::CalcTextWidth
	mov ebx,eax
	add dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x40],8
	mov dword ptr [esp+0x60],ebx
	mov byte ptr [esp+0x70],0xA
	jne Block50

 Block48:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,edi
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	push 0xFFFFFFFF
	mov ecx,esi
	mov dword ptr [esp+0x60],edi
	mov dword ptr [esp+0x68],0xE
	call ZArray<CCtrlSelector::VISIBLE_ITEM>::InsertBefore
	mov edx,dword ptr [esp+0x50]
	mov esi,eax
	lea eax,[esp+0x54]
	push eax
	lea ecx,[esi+4]
	mov dword ptr [esi],edx
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x58]
	mov eax,dword ptr [esp+0x54]
	mov edx,dword ptr [esp+0x64]
	mov dword ptr [esi+8],ecx
	mov dword ptr [esi+0xC],edi
	xor edi,edi
	mov dword ptr [esi+0x10],ebx
	mov dword ptr [esi+0x14],edx
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp eax,edi
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	mov esi,dword ptr [esp+0x18]

 Block54:
	cmp dword ptr [ebp+0x4C],edi
	je Block56

 Block55:
	mov eax,dword ptr [ebp+0x1C]
	sub eax,dword ptr [esp+0x14]
	cdq
	sub eax,edx
	sar eax,1
	jmp Block57

 Block56:
	xor eax,eax

 Block57:
	xor ebx,ebx
	xor ecx,ecx

 Block58:
	mov edx,dword ptr [esi]
	cmp edx,edi
	je Block61

 Block59:
	cmp ebx,dword ptr [edx-4]
	jae Block61

 Block60:
	mov dword ptr [ecx+edx+8],eax
	mov edx,dword ptr [esi]
	add eax,dword ptr [ecx+edx+0x10]
	inc ebx
	add ecx,0x18
	jmp Block58

 Block61:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret
}
}
// CCtrlSelector::SetSelector
_SUB_EXCEPTION_HANDLER(EB810)
__SUB_CLASS_THIS(000EB810, __thiscall, 48450,  CCtrlSelector, void, long, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_EB810
	mov eax,dword ptr fs:[0]
	push eax
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+4]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0xC],0
	test eax,eax
	jge Block2

 Block1:
	cmp eax,dword ptr [ecx+0x38]
	jge Block3

 Block2:
	mov ecx,dword ptr [ecx+0x58]
	lea edx,[esp+0x18]
	push edx
	lea ecx,[ecx+eax*4]
	call ZXString<char>::op_assign

 Block3:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0xC],0xFFFFFFFF
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov ecx,dword ptr [esp+4]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0xC
	ret 8
}
}
// CCtrlSelector::SetSelectorEnd
__SUB_CLASS_THIS0(000EC980, __thiscall, 48447,  CCtrlSelector, void) {
__asm {

 Block0:
	jmp  CCtrlSelector::ResetVisible
}
}
// CCtrlSelector::OnMouseButton
_SUB_EXCEPTION_HANDLER(EC990)
__SUB_CLASS_THIS(000EC990, __thiscall, 48453,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_EC990
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
	mov esi,ecx
	xor eax,eax
	cmp dword ptr [esi+0x34],eax
	je Block21

 Block1:
	cmp dword ptr [esp+0x34],0x202
	jne Block21

 Block2:
	mov ebx,dword ptr [esp+0x3C]
	mov ebp,dword ptr [esp+0x40]
	mov dword ptr [esi+0x44],0xFFFFFFFF
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x3C],eax
	lea esp,[esp]

 Block3:
	mov eax,dword ptr [esi+0x58]
	test eax,eax
	je Block9

 Block4:
	mov ecx,dword ptr [esp+0x34]
	cmp ecx,dword ptr [eax-4]
	jae Block9

 Block5:
	mov edi,eax
	add edi,dword ptr [esp+0x3C]
	cmp dword ptr [edi],0xFFFFFFFD
	je Block7

 Block6:
	mov eax,dword ptr [edi+0xC]
	mov edx,dword ptr [edi+0x14]
	mov ecx,dword ptr [edi+8]
	add edx,eax
	push edx
	mov edx,dword ptr [edi+0x10]
	add edx,ecx
	push edx
	push eax
	push ecx
	lea eax,[esp+0x24]
	push eax
	call SetRect
	xor ecx,ecx
	cmp dword ptr [edi],ecx
	push 1
	setge cl
	lea edx,[esp+0x18]
	dec ecx
	and ecx,0xFFFFFFFD
	add ecx,4
	push ecx
	push edx
	call InflateRect
	push ebp
	push ebx
	lea eax,[esp+0x1C]
	push eax
	call PtInRect
	test eax,eax
	jne Block8

 Block7:
	inc dword ptr [esp+0x34]
	add dword ptr [esp+0x3C],0x18
	jmp Block3

 Block8:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [esi+0x44],ecx

 Block9:
	mov eax,dword ptr [esi+0x44]
	cmp eax,0xFFFFFFFF
	je Block20

 Block10:
	lea edx,[eax+eax*2]
	mov eax,dword ptr [esi+0x58]
	lea eax,[eax+edx*8]
	mov eax,dword ptr [eax]
	cmp eax,dword ptr [esi+0x30]
	je Block20

 Block11:
	cmp eax,0xFFFFFFFE
	jne Block13

 Block12:
	mov eax,dword ptr [esi+0x40]
	dec eax
	xor ecx,ecx
	test eax,eax
	setle cl
	lea edi,[esi-4]
	dec ecx
	and eax,ecx
	inc eax
	imul eax,dword ptr [esi+0x38]
	dec eax
	push eax
	mov ecx,edi
	call CCtrlSelector::SetCurSel
	mov eax,dword ptr [esi+0x30]
	mov ecx,dword ptr [edi+0x24]
	mov edi,dword ptr [edi+0x14]
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x1C]
	push 0x320
	push edi
	call eax
	lea ecx,[esp+0x34]
	push 0x5D0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x30],0
	call play_ui_sound
	mov eax,dword ptr [esp+0x38]
	jmp Block18

 Block13:
	cmp eax,0xFFFFFFFF
	jne Block17

 Block14:
	mov eax,dword ptr [esi+0x3C]
	mov ecx,dword ptr [esi+0x40]
	dec eax
	inc ecx
	cmp ecx,eax
	jge Block16

 Block15:
	mov eax,ecx

 Block16:
	mov edx,dword ptr [esi+0x38]
	imul edx,eax
	lea edi,[esi-4]
	push edx
	mov ecx,edi
	call CCtrlSelector::SetCurSel
	mov eax,dword ptr [esi+0x30]
	mov ecx,dword ptr [edi+0x24]
	mov edi,dword ptr [edi+0x14]
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x1C]
	push 0x320
	push edi
	call eax
	lea ecx,[esp+0x34]
	push 0x5D0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x30],1
	call play_ui_sound
	mov eax,dword ptr [esp+0x38]
	jmp Block18

 Block17:
	lea edi,[esi-4]
	push eax
	mov ecx,edi
	call CCtrlSelector::SetCurSel
	mov eax,dword ptr [esi+0x30]
	mov ecx,dword ptr [edi+0x24]
	mov edi,dword ptr [edi+0x14]
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x1C]
	push 0x320
	push edi
	call eax
	lea ecx,[esp+0x3C]
	push 0x5D0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x30],2
	call play_ui_sound
	mov eax,dword ptr [esp+0x40]

 Block18:
	add esp,4
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block20:
	lea ecx,[esi-4]
	call CCtrlWnd::InvalidateRect

 Block21:
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
// CCtrlSelector::SetSelectorAttr
_SUB_EXCEPTION_HANDLER(EB9F0)
__SUB_CLASS_THIS(000EB9F0, __thiscall, 48451,  CCtrlSelector, void, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_EB9F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [esp+0x40]
	lea esi,[edi+0x60]
	mov dword ptr [edi+0x54],eax
	mov eax,dword ptr [esi]
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [esi],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	lea eax,[esp+0x40]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x44],0
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x4C]
	or ebp,0xFFFFFFFF
	add esp,0xC
	mov dword ptr [esp+0x38],ebp
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	lea ecx,[esp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x10]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [esp+0x44]
	lea eax,[esp+0x10]
	push eax
	push ecx
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x50],esp
	push 0x1A25
	push edx
	mov dword ptr [esp+0x50],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x48],2
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov byte ptr [esp+0x48],1
	call IWzFont::Create
	cmp word ptr [esp+0x10],8
	mov dword ptr [esp+0x38],ebp
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x10],ax
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov eax,dword ptr [edi+0x64]
	lea esi,[edi+0x64]
	test eax,eax
	je Block14

 Block13:
	mov dword ptr [esi],0
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block14:
	lea ecx,[esp+0x40]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push esi
	push eax
	mov dword ptr [esp+0x44],3
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x4C]
	add esp,0xC
	mov dword ptr [esp+0x38],ebp
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block16:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x20]
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
	mov edx,dword ptr [esp+0x48]
	lea ecx,[esp+0x20]
	push ecx
	push edx
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x50],esp
	push 0x1A25
	push eax
	mov dword ptr [esp+0x50],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x48],5
	test ecx,ecx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov byte ptr [esp+0x48],4
	call IWzFont::Create
	cmp word ptr [esp+0x20],8
	mov dword ptr [esp+0x38],ebp
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x2C
	ret 0xC

 Block23:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x2C
	ret 0xC
}
}
// CCtrlSelector::GetRTTI
__SUB_CLASS_THIS0(000EC800, __thiscall, 48461,  CCtrlSelector, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CCtrlSelector::ms_RTTI_CCtrlSelector
	ret
}
}
// CCtrlSelector::SetCurSel
__SUB_CLASS_THIS(000EC8F0, __thiscall, 48456,  CCtrlSelector, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov dword ptr [esi+0x34],eax
	cdq
	idiv dword ptr [esi+0x3C]
	mov dword ptr [esi+0x44],eax
	call CCtrlSelector::ResetVisible
	mov ecx,esi
	call CCtrlWnd::InvalidateRect
	pop esi
	ret 4
}
}
// CCtrlSelector::~CCtrlSelector
_SUB_EXCEPTION_HANDLER(EC850)
__SUB_CLASS_THIS0(000EC850, __thiscall, 48447,  CCtrlSelector, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_EC850
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
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlSelector::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlSelector::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlSelector::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x64]
	mov dword ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x60]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea ecx,[esi+0x5C]
	call ZArray<CCtrlSelector::VISIBLE_ITEM>::RemoveAll
	lea ecx,[esi+0x58]
	mov byte ptr [esp+0x14],0
	call ZArray<ZXString<char>>::RemoveAll
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CCtrlWnd::~CCtrlWnd
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CCtrlSelector::CCtrlSelector
__SUB_CLASS_THIS0(000EC7D0, __thiscall, 48445,  CCtrlSelector, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CCtrlWnd::_ctor_default
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlSelector::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlSelector::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlSelector::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x58],eax
	mov dword ptr [esi+0x5C],eax
	mov dword ptr [esi+0x60],eax
	mov dword ptr [esi+0x64],eax
	mov eax,esi
	pop esi
	ret
}
}
// CCtrlSelector::SetSelectorStart
__SUB_CLASS_THIS(000EC920, __thiscall, 48449,  CCtrlSelector, void, long, long, int32_t, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+0xC]
	push edi
	mov edi,dword ptr [esp+0xC]
	mov dword ptr [ecx+0x34],0
	mov dword ptr [ecx+0x38],edi
	mov dword ptr [ecx+0x3C],esi
	test esi,esi
	jle Block2

 Block1:
	lea eax,[edi+esi-1]
	cdq
	idiv esi
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov edx,dword ptr [esp+0x18]
	mov dword ptr [ecx+0x40],eax
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [ecx+0x4C],eax
	lea eax,[esp+0xC]
	push eax
	mov dword ptr [ecx+0x44],0
	mov dword ptr [ecx+0x50],edx
	push edi
	add ecx,0x58
	call ZArray<ZXString<char>>::_Alloc
	pop edi
	pop esi
	ret 0x10
}
}
// CCtrlSelector::OnMouseMove
__SUB_CLASS_THIS(000EB680, __thiscall, 48452,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push edi
	mov edi,ecx
	xor eax,eax
	cmp dword ptr [edi+0x34],eax
	je Block10

 Block1:
	push ebx
	mov ebx,dword ptr [esp+0x1C]
	push ebp
	mov ebp,dword ptr [esp+0x24]
	push esi
	mov dword ptr [edi+0x44],0xFFFFFFFF
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x28],eax
	jmp Block3

 Block3:
	mov eax,dword ptr [edi+0x58]
	test eax,eax
	je Block9

 Block4:
	mov ecx,dword ptr [esp+0x24]
	cmp ecx,dword ptr [eax-4]
	jae Block9

 Block5:
	mov esi,eax
	add esi,dword ptr [esp+0x28]
	cmp dword ptr [esi],0xFFFFFFFD
	je Block7

 Block6:
	mov eax,dword ptr [esi+0xC]
	mov edx,dword ptr [esi+0x14]
	mov ecx,dword ptr [esi+8]
	add edx,eax
	push edx
	mov edx,dword ptr [esi+0x10]
	add edx,ecx
	push edx
	push eax
	push ecx
	lea eax,[esp+0x20]
	push eax
	call SetRect
	xor ecx,ecx
	cmp dword ptr [esi],ecx
	push 1
	setge cl
	lea edx,[esp+0x14]
	dec ecx
	and ecx,0xFFFFFFFD
	add ecx,4
	push ecx
	push edx
	call InflateRect
	push ebp
	push ebx
	lea eax,[esp+0x18]
	push eax
	call PtInRect
	test eax,eax
	jne Block8

 Block7:
	inc dword ptr [esp+0x24]
	add dword ptr [esp+0x28],0x18
	jmp Block3

 Block8:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [edi+0x44],ecx

 Block9:
	lea ecx,[edi-4]
	call CCtrlWnd::InvalidateRect
	pop esi
	pop ebp
	pop ebx

 Block10:
	xor eax,eax
	pop edi
	add esp,0x10
	ret 8
}
}
