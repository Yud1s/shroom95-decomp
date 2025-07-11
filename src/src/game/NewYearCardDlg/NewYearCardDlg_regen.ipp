#include "regen.hpp"
// NewYearCardDlg.ipp
#include "NewYearCardDlg.hpp"

// CUINewYearCardDlg::Draw
_SUB_EXCEPTION_HANDLER(61C390)
__SUB_CLASS_THIS(0061C390, __thiscall, 15573,  CUINewYearCardDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61C390
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
	mov esi,ecx
	mov eax,dword ptr [esp+0x48]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push edx
	mov dword ptr [esp+0x44],0
	call ebp
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x44],1
	call ebp
	lea edx,[esp+0x18]
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
	lea eax,[esp+0x28]
	push eax
	mov eax,dword ptr [esi+0xAC]
	lea ecx,[esp+0x1C]
	push ecx
	push eax
	mov eax,dword ptr [esi+0x94]
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	mov bl,2
	push eax
	mov byte ptr [esp+0x54],bl
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [esp+0x58]
	mov byte ptr [esp+0x50],3
	test edi,edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	push 0x8E
	push 0x6E
	mov ecx,edi
	mov byte ptr [esp+0x58],bl
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],bx
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov byte ptr [esp+0x40],0
	cmp word ptr [esp+0x28],bx
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	lea eax,[esp+0x18]
	push eax
	call ebp
	lea ecx,[esp+0x18]
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
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x44],4
	call ebp
	lea eax,[esp+0x28]
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
	mov eax,dword ptr [esi+0xAC]
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	push eax
	mov eax,dword ptr [esi+0x98]
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	mov bl,5
	push eax
	mov byte ptr [esp+0x54],bl
	call _xbstr_t::_ctor_0
	push 0x21
	mov byte ptr [esp+0x54],6
	push 0x1C
	mov ecx,edi
	mov byte ptr [esp+0x58],bl
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [esp+0x40],4
	cmp word ptr [esp+0x28],bx
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov byte ptr [esp+0x40],0
	cmp word ptr [esp+0x18],bx
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	xor ebp,ebp
	lea ebx,[ebp+0x3D]
	jmp Block28

 Block28:
	mov eax,dword ptr [esi+0xA8]
	test eax,eax
	je Block42

 Block29:
	cmp ebp,dword ptr [eax-4]
	jae Block42

 Block30:
	cmp ebx,0x8B
	jge Block42

 Block31:
	lea edx,[esp+0x18]
	mov ecx,eax
	push edx
	lea edi,[ecx+ebp*4]
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block32:
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0x44],7
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block33:
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [esi+0xAC]
	lea ecx,[esp+0x2C]
	push ecx
	push eax
	mov eax,dword ptr [edi]
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x54],8
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x58]
	push ebx
	mov byte ptr [esp+0x54],9
	push 0x3D
	mov byte ptr [esp+0x58],8
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0x40],7
	cmp word ptr [esp+0x28],di
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov byte ptr [esp+0x40],0
	cmp word ptr [esp+0x18],di
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov edi,dword ptr [esp+0x48]
	inc ebp
	add ebx,0xD
	jmp Block28

 Block40:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov edi,dword ptr [esp+0x48]
	inc ebp
	add ebx,0xD
	jmp Block28

 Block42:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [esp+0x44],0xFFFFFFFF
	call ecx
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
// CUINewYearCardDlg::GetRTTI
__SUB_CLASS_THIS0(0061C340, __thiscall, 15577,  CUINewYearCardDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUINewYearCardDlg::ms_RTTI_CUINewYearCardDlg
	ret
}
}
// CUINewYearCardDlg::IsKindOf
__SUB_CLASS_THIS(0061C360, __thiscall, 15578,  CUINewYearCardDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUINewYearCardDlg::ms_RTTI_CUINewYearCardDlg
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
// CUINewYearCardDlg::OnKey
__SUB_CLASS_THIS(0061C070, __thiscall, 15572,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	test eax,eax
	js Block5

 Block1:
	cmp edx,0xD
	je Block4

 Block2:
	cmp edx,0x1B
	jne Block5

 Block3:
	push 2
	add ecx,0xFFFFFFFC
	call CUINewYearCardDlg::CloseDlg

 Block4:
	ret 8

 Block5:
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+4],edx
	jmp  CDialog::OnKey
}
}
// CUINewYearCardDlg::OnCreate
_SUB_EXCEPTION_HANDLER(61C110)
__SUB_CLASS_THIS(0061C110, __thiscall, 15570,  CUINewYearCardDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61C110
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
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	push offset _S_UIUIWINDOWIMGNEW__5
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x1C],ebx
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
	push 0xE7
	push 0x5B
	push ebx
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
// CUINewYearCardDlg::CUINewYearCardDlg
_SUB_EXCEPTION_HANDLER(61C740)
__SUB_CLASS_THIS(0061C740, __thiscall, 15567,  CUINewYearCardDlg, void, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61C740
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
	mov dword ptr [esp+0x20],esi
	mov dword ptr [esp+0x3C],2
	call CUniqueModeless::_ctor_default
	lea edi,[esi+0x94]
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CUINewYearCardDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewYearCardDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewYearCardDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [edi],eax
	lea ebp,[esi+0x98]
	mov dword ptr [ebp],eax
	lea ebx,[esi+0x9C]
	mov dword ptr [ebx],eax
	mov dword ptr [esi+0xA4],eax
	mov dword ptr [esi+0xA8],eax
	mov dword ptr [esi+0xAC],eax
	push eax
	push 6
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x44],9
	mov dword ptr [esp+0x20],eax
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_FROM]
	mov dword ptr [eax],ecx
	mov dx,word ptr [_S_FROM+4]
	push 6
	lea ecx,[esp+0x1C]
	mov word ptr [eax+4],dx
	call ZXString<char>::ReleaseBuffer
	push 0
	push 4
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x44],0xA
	mov dword ptr [esp+0x1C],0
	call ZXString<char>::GetBuffer
	mov ecx,dword ptr [_S_TO]
	mov dword ptr [eax],ecx
	push 4
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x44],0xB
	call ZXString<char>::op_add_1
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x40],0xC
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x3C],0xB
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea ecx,[esp+0x48]
	push ecx
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_add_1
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x40],0xD
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x3C],0xB
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	lea eax,[esp+0x4C]
	push eax
	mov ecx,ebx
	call ZXString<char>::op_assign
	push 0
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMGNEW__6
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	push 0
	push 1
	push 0
	push 1
	push 0xA
	push 0x107
	push 0xE3
	push 0xA8
	push 0x11E
	mov ecx,esi
	call CWnd::CreateWnd
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	lea ecx,[esp+0x1C]
	push 1
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xAC]
	add esp,8
	cmp edi,eax
	je Block9

 Block5:
	mov dword ptr [esi+0xAC],eax
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block7:
	test edi,edi
	je Block9

 Block8:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block9:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	push 0x10
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	test eax,eax
	je Block13

 Block12:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CTextLineBreaker::`vftable'
	mov dword ptr [eax+0xC],0x96
	mov edi,eax
	jmp Block14

 Block13:
	xor edi,edi

 Block14:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x30],edi
	test edi,edi
	je Block16

 Block15:
	lea eax,[edi+4]
	push eax
	call ebp

 Block16:
	mov eax,dword ptr [esi+0xAC]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x40],0xE
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block18:
	lea eax,[esi+0xA8]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push ebx
	mov byte ptr [esp+0x4C],0xF
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,edi
	mov byte ptr [esp+0x48],0xE
	call CTextLineBreaker::LineBreakText
	mov byte ptr [esp+0x3C],0xB
	test edi,edi
	je Block21

 Block19:
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block21

 Block20:
	push ebx
	call ebp
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block21:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x3C],0xA
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x3C],9
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x3C],1
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],0
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block31:
	mov eax,esi
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 0xC
}
}
// CUINewYearCardDlg::CloseDlg
__SUB_CLASS_THIS(0061BFC0, __thiscall, 15575,  CUINewYearCardDlg, void, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x84],0
	jne Block3

 Block1:
	cmp dword ptr [esi+0x14],0
	mov eax,dword ptr [esp+8]
	mov dword ptr [esi+0x80],eax
	mov dword ptr [esi+0x84],1
	je Block3

 Block2:
	call CWnd::Destroy

 Block3:
	mov ecx,esi
	call CWnd::Destroy
	mov edx,dword ptr [esi+8]
	lea ecx,[esi+8]
	pop esi
	mov dword ptr [esp+4],1
	mov eax,dword ptr [edx]
	jmp eax
}
}
// CUINewYearCardDlg::OnButtonClicked
__SUB_CLASS_THIS(0061C010, __thiscall, 15571,  CUINewYearCardDlg, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block7

 Block1:
	cmp eax,1
	jne Block3

 Block2:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],1
	jmp edx

 Block3:
	cmp eax,2
	jne Block5

 Block4:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],2
	jmp edx

 Block5:
	cmp eax,8
	jne Block8

 Block6:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],8
	jmp edx

 Block7:
	mov dword ptr [esp+4],1
	jmp  CUINewYearCardDlg::CloseDlg

 Block8:
	ret 4
}
}
// CUINewYearCardDlg::~CUINewYearCardDlg
_SUB_EXCEPTION_HANDLER(61C220)
__SUB_CLASS_THIS0(0061C220, __thiscall, 15569,  CUINewYearCardDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61C220
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
	int 3// TODO: 	mov dword ptr [esi],offset CUINewYearCardDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUINewYearCardDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUINewYearCardDlg::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xAC]
	mov dword ptr [esp+0x18],4
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	lea ecx,[esi+0xA8]
	call ZArray<ZXString<char>>::RemoveAll
	cmp dword ptr [esi+0xA4],0
	lea edi,[esi+0xA0]
	mov byte ptr [esp+0x18],3
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	mov eax,dword ptr [esi+0x9C]
	mov byte ptr [esp+0x18],2
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esi+0x98]
	mov byte ptr [esp+0x18],1
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esi+0x94]
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	int 3// TODO: 	mov dword ptr [esi],offset CUniqueModeless::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUniqueModeless::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUniqueModeless::`vftable'{for `ZRefCounted'}
	mov ecx,esi
	mov dword ptr [esp+0x18],0xFFFFFFFF
	mov dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
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
// CUINewYearCardDlg::ShowDlg
_SUB_EXCEPTION_HANDLER(61CAA0)
__SUB(0061CAA0, __cdecl, 15574,  void, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_61CAA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	mov dword ptr [esp+0x20],2
	jne Block3

 Block1:
	push 0xB0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+8],esi
	mov byte ptr [esp+0x20],3
	test esi,esi
	je Block3

 Block2:
	push ecx
	mov ecx,esp
	lea eax,[esp+0x34]
	mov dword ptr [esp+0x10],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push ecx
	mov ecx,esp
	lea edx,[esp+0x34]
	mov dword ptr [esp+0x18],esp
	push edx
	mov byte ptr [esp+0x2C],4
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push ecx
	mov ecx,esp
	lea eax,[esp+0x34]
	mov dword ptr [esp+0x20],esp
	push eax
	mov byte ptr [esp+0x30],5
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	mov byte ptr [esp+0x2C],3
	call CUINewYearCardDlg::_ctor_0

 Block3:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x20],1
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret
}
}
