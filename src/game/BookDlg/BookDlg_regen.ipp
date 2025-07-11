#include "regen.hpp"
// BookDlg.ipp
#include "BookDlg.hpp"

// CBookDlg::Draw
_SUB_EXCEPTION_HANDLER(73360)
__SUB_CLASS_THIS(00073360, __thiscall, 67103,  CBookDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_73360
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
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	mov eax,dword ptr [esp+0xBC]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x58]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov edi,dword ptr [esp+0x58]
	xor ebx,ebx
	lea ebp,[esi+0xAD8]
	mov dword ptr [esp+0xB4],ebx
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x30],ebp
	jmp Block3

 Block2:
	mov esi,dword ptr [esp+0x18]

 Block3:
	xor ecx,ecx
	mov dword ptr [esp+0x1C],ecx
	lea ebx,[ebx]

 Block4:
	mov eax,dword ptr [ebp]
	cmp eax,ebx
	je Block47

 Block5:
	cmp ecx,dword ptr [eax-4]
	jae Block47

 Block6:
	mov edx,eax
	lea esi,[edx+ecx*4]
	mov ecx,esi
	mov dword ptr [esp+0x34],esi
	mov dword ptr [esp+0x20],ebx
	call ZArray<CT_INFO>::GetCount
	test eax,eax
	jbe Block46

 Block7:
	mov dword ptr [esp+0x28],ebx

 Block8:
	mov esi,dword ptr [esi]
	add esi,dword ptr [esp+0x28]
	mov eax,dword ptr [esi]
	sub eax,ebx
	je Block16

 Block9:
	sub eax,1
	jne Block44

 Block10:
	mov eax,3
	mov ebp,0xFF
	mov word ptr [esp+0x48],ax
	mov dword ptr [esp+0x50],ebp
	mov ecx,dword ptr [esi+0x14]
	mov byte ptr [esp+0xB4],5
	mov dword ptr [esp+0x24],ecx
	cmp edi,ebx
	je Block72

 Block11:
	mov edx,dword ptr [esi+0x18]
	mov eax,dword ptr [esp+0x14]
	mov ebx,dword ptr [esp+0x48]
	mov ecx,dword ptr [esi+0x1C]
	mov esi,dword ptr [edi]
	sub esp,0x10
	lea edx,[edx+eax+0x23]
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x5C]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x64]
	mov dword ptr [eax+8],ebp
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [esp+0x34]
	push eax
	add ecx,0x1E
	push ecx
	mov ecx,dword ptr [esi+0x80]
	push edx
	push edi
	call ecx
	xor ebx,ebx
	cmp eax,ebx
	jge Block13

 Block12:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block13:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0xB4],bl
	jne Block15

 Block14:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	jmp Block40

 Block15:
	lea eax,[esp+0x48]
	push eax
	jmp Block43

 Block16:
	mov eax,dword ptr [esi+0x28]
	cmp eax,0xFFFFFFFF
	je Block31

 Block17:
	mov ecx,dword ptr [esp+0x18]
	cmp eax,dword ptr [ecx+0x8C]
	jne Block21

 Block18:
	cmp edi,ebx
	je Block72

 Block19:
	mov eax,dword ptr [esi+0x20]
	mov edx,dword ptr [esi+0x24]
	mov ecx,dword ptr [esi+0x1C]
	mov ebp,dword ptr [esp+0x14]
	push 0xFF000000
	push 1
	add eax,8
	lea ecx,[edx+ecx+0x1E]
	mov edx,dword ptr [esi+0x18]
	push eax
	lea edx,[edx+ebp+0x1B]
	mov ebp,dword ptr [edi]
	mov eax,dword ptr [ebp+0x8C]
	push ecx
	push edx
	push edi
	call eax
	cmp eax,ebx
	jge Block21

 Block20:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block21:
	mov ecx,3
	mov word ptr [esp+0x38],cx
	mov dword ptr [esp+0x40],0xFF
	mov edx,dword ptr [esi+0x28]
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xB4],1
	cmp edx,dword ptr [eax+0x8C]
	jne Block23

 Block22:
	add eax,0xAEC
	jmp Block24

 Block23:
	add eax,0xAE8

 Block24:
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x24],eax
	cmp edi,ebx
	je Block72

 Block25:
	mov edx,dword ptr [esi+0x18]
	mov eax,dword ptr [esp+0x14]
	mov ebp,dword ptr [esp+0x38]
	mov ecx,dword ptr [esi+0x1C]
	mov ebx,dword ptr [edi]
	sub esp,0x10
	lea edx,[edx+eax+0x1B]
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x4C]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x50]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x54]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esp+0x34]
	push eax
	add ecx,0x20
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	push edx
	push edi
	call ecx
	xor ebx,ebx
	cmp eax,ebx
	jge Block27

 Block26:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block27:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0xB4],bl
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,ebx
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x5C]
	push ecx
	call ebp
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block73

 Block32:
	lea eax,[esp+0x8C]
	push eax
	mov byte ptr [esp+0xB8],2
	call ebp
	lea ecx,[esp+0x8C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block73

 Block33:
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x90]
	push eax
	mov eax,dword ptr [esi+0xC]
	push eax
	mov eax,dword ptr [esi+0x10]
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xC8],3
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xC4],4
	cmp edi,ebx
	je Block72

 Block34:
	mov ecx,dword ptr [esi+0x1C]
	mov edx,dword ptr [esi+0x18]
	mov eax,dword ptr [esp+0x24]
	add ecx,0x1E
	push ecx
	lea ecx,[edx+eax+0x23]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0xCC],3
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0xB4],2
	cmp word ptr [esp+0x8C],si
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x94]
	xor edx,edx
	mov word ptr [esp+0x8C],dx
	cmp eax,ebx
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[esp+0x8C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov byte ptr [esp+0xB4],bl
	cmp word ptr [esp+0x5C],si
	jne Block42

 Block39:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx

 Block40:
	cmp eax,ebx
	je Block44

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block42:
	lea edx,[esp+0x5C]
	push edx

 Block43:
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov ebp,dword ptr [esp+0x20]
	mov esi,dword ptr [esp+0x34]
	add dword ptr [esp+0x28],0x44
	inc ebp
	mov ecx,esi
	mov dword ptr [esp+0x20],ebp
	call ZArray<CT_INFO>::GetCount
	cmp ebp,eax
	jb Block8

 Block45:
	mov ebp,dword ptr [esp+0x30]

 Block46:
	inc dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x1C]
	mov esi,dword ptr [esp+0x18]
	jmp Block4

 Block47:
	mov ecx,dword ptr [esp+0x2C]
	mov eax,dword ptr [esi+0x84]
	add eax,ecx
	mov ecx,dword ptr [esi+0x88]
	cmp eax,ecx
	jg Block68

 Block48:
	mov dword ptr [esp+0x20],ebx
	inc ecx
	push ecx
	inc eax
	push eax
	lea edx,[esp+0x28]
	push offset _S_DD__6
	push edx
	mov byte ptr [esp+0xC4],6
	call ZXString16::Format
	add esp,0x10
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebx
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xB4],8
	cmp eax,ebx
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block50:
	lea eax,[esp+0x6C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block73

 Block51:
	mov esi,dword ptr [esp+0x1C]
	lea edx,[esp+0x6C]
	push edx
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push esi
	mov byte ptr [esp+0xC0],9
	call _xbstr_t::_ctor_1
	mov eax,dword ptr [esp+0x20]
	mov eax,dword ptr [eax+0xAE0]
	add eax,4
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xBC],0xA
	cmp eax,ebx
	je Block72

 Block52:
	mov ecx,eax
	mov byte ptr [esp+0xBC],9
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x6C],8
	mov ebp,eax
	mov byte ptr [esp+0xB4],8
	jne Block55

 Block53:
	mov eax,dword ptr [esp+0x74]
	xor ecx,ecx
	mov word ptr [esp+0x6C],cx
	cmp eax,ebx
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea edx,[esp+0x6C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	lea eax,[esp+0x9C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x9C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block73

 Block57:
	mov edx,3
	mov word ptr [esp+0x7C],dx
	mov dword ptr [esp+0x84],0xFF
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x9C]
	push eax
	mov eax,dword ptr [edx+0xAE0]
	mov eax,dword ptr [eax]
	lea ecx,[esp+0x80]
	push ecx
	push eax
	push ecx
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	push esi
	mov byte ptr [esp+0xC8],0xC
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xC4],0xD
	cmp edi,ebx
	je Block72

 Block58:
	mov ecx,dword ptr [esp+0x24]
	mov eax,0xBE
	sub eax,ebp
	cdq
	sub eax,edx
	sar eax,1
	lea edx,[eax+ecx+0x23]
	push 0x125
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xCC],0xC
	call IWzCanvas::DrawTextA
	mov ebp,8
	mov byte ptr [esp+0xB4],0xB
	cmp word ptr [esp+0x7C],bp
	jne Block61

 Block59:
	xor eax,eax
	mov word ptr [esp+0x7C],ax
	mov eax,dword ptr [esp+0x84]
	cmp eax,ebx
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea ecx,[esp+0x7C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov byte ptr [esp+0xB4],8
	cmp word ptr [esp+0x9C],bp
	jne Block65

 Block63:
	mov eax,dword ptr [esp+0xA4]
	xor edx,edx
	mov word ptr [esp+0x9C],dx
	cmp eax,ebx
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea eax,[esp+0x9C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block66:
	mov byte ptr [esp+0xB4],bl
	cmp esi,ebx
	je Block68

 Block67:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block68:
	mov eax,dword ptr [esp+0x14]
	mov ebp,dword ptr [esp+0x30]
	inc dword ptr [esp+0x2C]
	add eax,0xDC
	add ebp,4
	cmp eax,0x1B8
	mov dword ptr [esp+0x30],ebp
	mov dword ptr [esp+0x14],eax
	jl Block2

 Block69:
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	cmp edi,ebx
	je Block71

 Block70:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block71:
	mov ecx,dword ptr [esp+0xAC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA4
	ret 4

 Block72:
	push 0x80004003
	call _com_issue_error

 Block73:
	push eax
	call _com_issue_error
}
}
// CBookDlg::SetCtrlEnabled
__SUB_CLASS_THIS0(00071390, __thiscall, 67100,  CBookDlg, void) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xAF4]
	xor edx,edx
	cmp dword ptr [esi+0x84],2
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x1C]
	setge dl
	push edx
	call eax
	mov eax,dword ptr [esi+0xAFC]
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x1C]
	lea ecx,[eax+4]
	mov eax,dword ptr [esi+0x88]
	mov esi,dword ptr [esi+0x84]
	sub eax,2
	xor ebx,ebx
	and esi,0xFFFFFFFE
	cmp esi,eax
	setle bl
	push ebx
	call edx
	pop esi
	pop ebx
	ret
}
}
// PcCreateObject__com_ptr_t__com_IIID_IWzFont___GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac___
__SUB(00071480, __cdecl, 146077,  void, const wchar_t*, _x_com_ptr<IWzFont>&, IUnknown*) {
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
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
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
	int 3// TODO: 	mov dword ptr [esp+0xC],offset _com_error::`vftable'
	mov dword ptr [esp+0x14],0
	mov dword ptr [esp+0x18],0
	call _CxxThrowException

 Block7:
	pop esi
	add esp,0x10
	ret
}
}
// CBookDlg::OnMouseMove
__SUB_CLASS_THIS(00071E80, __thiscall, 67107,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	push eax
	push edx
	add ecx,0xFFFFFFFC
	call CBookDlg::CheckMousePoint
	xor eax,eax
	ret 8
}
}
// CT_INFO::operator=
__SUB_CLASS_THIS(00409720, __thiscall, 44452,  CT_INFO, CT_INFO&, const CT_INFO&) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	push edi
	mov edi,dword ptr [esp+0x10]
	mov eax,dword ptr [edi]
	mov dword ptr [esi],eax
	mov ecx,dword ptr [edi+4]
	mov dword ptr [esi+4],ecx
	mov edx,dword ptr [edi+8]
	mov dword ptr [esi+8],edx
	mov eax,dword ptr [edi+0xC]
	mov ebx,dword ptr [esi+0xC]
	cmp ebx,eax
	je Block5

 Block1:
	mov dword ptr [esi+0xC],eax
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	test ebx,ebx
	je Block5

 Block4:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block5:
	lea edx,[edi+0x10]
	push edx
	lea ecx,[esi+0x10]
	call ZXString<char>::op_assign
	mov eax,dword ptr [edi+0x14]
	mov ebx,dword ptr [esi+0x14]
	cmp ebx,eax
	je Block10

 Block6:
	mov dword ptr [esi+0x14],eax
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	test ebx,ebx
	je Block10

 Block9:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block10:
	mov edx,dword ptr [edi+0x18]
	mov dword ptr [esi+0x18],edx
	mov eax,dword ptr [edi+0x1C]
	mov dword ptr [esi+0x1C],eax
	mov ecx,dword ptr [edi+0x20]
	mov dword ptr [esi+0x20],ecx
	mov edx,dword ptr [edi+0x24]
	mov dword ptr [esi+0x24],edx
	mov eax,dword ptr [edi+0x28]
	mov dword ptr [esi+0x28],eax
	mov ecx,dword ptr [edi+0x2C]
	mov dword ptr [esi+0x2C],ecx
	mov edx,dword ptr [edi+0x30]
	mov dword ptr [esi+0x30],edx
	mov eax,dword ptr [edi+0x34]
	mov dword ptr [esi+0x34],eax
	mov ecx,dword ptr [edi+0x38]
	mov dword ptr [esi+0x38],ecx
	mov edx,dword ptr [edi+0x3C]
	mov dword ptr [esi+0x3C],edx
	mov eax,dword ptr [edi+0x40]
	mov dword ptr [esi+0x40],eax
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	ret 4
}
}
// CBookDlg::ClearToolTip
__SUB_CLASS_THIS0(00074190, __thiscall, 67109,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0x8C
	jmp  CUIToolTip::ClearToolTip
}
}
// CBookDlg::OnCreate
_SUB_EXCEPTION_HANDLER(71F00)
__SUB_CLASS_THIS(00071F00, __thiscall, 67101,  CBookDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_71F00
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
	mov dword ptr [esp+0x18],ecx
	lea eax,[esp+0x17]
	lea edi,[ecx+0xAE0]
	push eax
	push 0xC
	mov ecx,edi
	call ZArray<_x_com_ptr<IWzFont>>::_Alloc
	xor ebx,ebx
	xor esi,esi
	or ebp,0xFFFFFFFF

 Block1:
	lea ecx,[esp+0x1C]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [edi]
	mov eax,dword ptr [eax]
	push ebx
	add edx,esi
	push edx
	push eax
	mov dword ptr [esp+0x7C],ebx
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov dword ptr [esp+0x70],ebp
	cmp eax,ebx
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block3:
	add esi,4
	cmp esi,0x30
	jl Block1

 Block4:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea edx,[esp+0x38]
	push edx
	push 0xFF000000
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0x1A25
	push eax
	mov dword ptr [esp+0x88],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x80],2
	cmp ecx,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov byte ptr [esp+0x80],1
	call IWzFont::Create
	cmp word ptr [esp+0x38],8
	mov dword ptr [esp+0x70],ebp
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,ebx
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	lea eax,[esp+0x1C]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x70],3
	cmp eax,ebx
	je Block14

 Block13:
	mov ebp,dword ptr [eax]
	jmp Block15

 Block14:
	xor ebp,ebp

 Block15:
	mov ecx,8
	mov word ptr [esp+0x38],cx
	cmp ebp,ebx
	jne Block17

 Block16:
	xor esi,esi
	jmp Block22

 Block17:
	mov eax,ebp
	lea edx,[eax+2]

 Block18:
	mov cx,word ptr [eax]
	add eax,2
	cmp cx,bx
	jne Block18

 Block19:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea edx,[edi+edi+6]
	push edx
	call CoTaskMemAlloc
	mov esi,eax
	cmp esi,ebx
	jne Block21

 Block20:
	xor esi,esi
	jmp Block22

 Block21:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC

 Block22:
	mov dword ptr [esp+0x40],esi
	cmp esi,ebx
	jne Block25

 Block23:
	cmp ebp,ebx
	je Block25

 Block24:
	push 0x8007000E
	call _com_issue_error

 Block25:
	lea eax,[esp+0x38]
	push eax
	push 0xFF000000
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0x1A25
	push ecx
	mov byte ptr [esp+0x88],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x28]
	mov eax,dword ptr [edi+0xAE0]
	add edi,0xAE0
	add eax,4
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x80],5
	cmp eax,ebx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov ecx,eax
	mov byte ptr [esp+0x80],4
	call IWzFont::Create
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x70],3
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,ebx
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp eax,ebx
	je Block39

 Block32:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebx
	jne Block39

 Block33:
	cmp esi,ebx
	je Block39

 Block34:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block36

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block36:
	mov eax,dword ptr [esi+4]
	cmp eax,ebx
	je Block38

 Block37:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block38:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block39:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block41

 Block40:
	push eax
	call _com_issue_error

 Block41:
	lea eax,[esp+0x38]
	push eax
	push 0xFFFF0000
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0x1A25
	mov ebx,6
	push ecx
	mov dword ptr [esp+0x88],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	mov esi,8
	add eax,esi
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x80],7
	test eax,eax
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	mov ecx,eax
	mov byte ptr [esp+0x80],bl
	call IWzFont::Create
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp word ptr [esp+0x38],si
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block47:
	lea ecx,[esp+0x1C]
	push 0x5B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x70],esi
	test eax,eax
	je Block49

 Block48:
	mov ebp,dword ptr [eax]
	jmp Block50

 Block49:
	xor ebp,ebp

 Block50:
	mov word ptr [esp+0x38],si
	test ebp,ebp
	jne Block52

 Block51:
	xor esi,esi
	jmp Block56

 Block52:
	mov eax,ebp
	lea edx,[eax+2]

 Block53:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block53

 Block54:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea edx,[edi+edi+6]
	push edx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block56

 Block55:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC

 Block56:
	mov dword ptr [esp+0x40],esi
	test esi,esi
	jne Block59

 Block57:
	test ebp,ebp
	je Block59

 Block58:
	push 0x8007000E
	call _com_issue_error

 Block59:
	lea eax,[esp+0x38]
	push eax
	push 0xFFFF0000
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0x1A25
	mov bl,9
	push ecx
	mov byte ptr [esp+0x88],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x28]
	mov eax,dword ptr [edi+0xAE0]
	add edi,0xAE0
	add eax,0xC
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x80],0xA
	test eax,eax
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	mov ecx,eax
	mov byte ptr [esp+0x80],bl
	call IWzFont::Create
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x70],8
	jne Block64

 Block62:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov esi,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	test esi,esi
	je Block73

 Block66:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block73

 Block67:
	test esi,esi
	je Block73

 Block68:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block70

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block70:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block72

 Block71:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block72:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block73:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	lea ecx,[esp+0x38]
	push ecx
	push 0xFF00FF00
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 0x1A25
	mov ebx,0xB
	push edx
	mov dword ptr [esp+0x88],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,0x10
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x80],0xC
	test eax,eax
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	mov ecx,eax
	mov byte ptr [esp+0x80],bl
	call IWzFont::Create
	cmp word ptr [esp+0x38],8
	mov dword ptr [esp+0x70],0xFFFFFFFF
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	lea edx,[esp+0x1C]
	push 0x5B0
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x70],0xD
	test eax,eax
	je Block83

 Block82:
	mov ebp,dword ptr [eax]
	jmp Block84

 Block83:
	xor ebp,ebp

 Block84:
	mov eax,8
	mov word ptr [esp+0x38],ax
	test ebp,ebp
	jne Block86

 Block85:
	xor esi,esi
	jmp Block90

 Block86:
	mov eax,ebp
	lea edx,[eax+2]

 Block87:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block87

 Block88:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea ecx,[edi+edi+6]
	push ecx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block90

 Block89:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC

 Block90:
	mov dword ptr [esp+0x40],esi
	test esi,esi
	jne Block93

 Block91:
	test ebp,ebp
	je Block93

 Block92:
	push 0x8007000E
	call _com_issue_error

 Block93:
	lea edx,[esp+0x38]
	push edx
	push 0xFF00FF00
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0x1A25
	mov bl,0xE
	push eax
	mov byte ptr [esp+0x88],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x28]
	mov eax,dword ptr [edi+0xAE0]
	add edi,0xAE0
	add eax,0x14
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x80],0xF
	test eax,eax
	jne Block95

 Block94:
	push 0x80004003
	call _com_issue_error

 Block95:
	mov ecx,eax
	mov byte ptr [esp+0x80],bl
	call IWzFont::Create
	mov ebp,8
	mov byte ptr [esp+0x70],0xD
	cmp word ptr [esp+0x38],bp
	jne Block98

 Block96:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block99:
	mov esi,dword ptr [esp+0x1C]
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x70],ebx
	test esi,esi
	je Block107

 Block100:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block107

 Block101:
	test esi,esi
	je Block107

 Block102:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block104

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block104:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block106

 Block105:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block106:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block107:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block109

 Block108:
	push eax
	call _com_issue_error

 Block109:
	lea eax,[esp+0x38]
	push eax
	push 0xFF0000FF
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0x1A25
	push ecx
	mov dword ptr [esp+0x88],0x10
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [edi]
	add eax,0x18
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x80],0x11
	test eax,eax
	jne Block111

 Block110:
	push 0x80004003
	call _com_issue_error

 Block111:
	mov ecx,eax
	mov byte ptr [esp+0x80],0x10
	call IWzFont::Create
	mov dword ptr [esp+0x70],ebx
	cmp word ptr [esp+0x38],bp
	jne Block114

 Block112:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block115:
	lea ecx,[esp+0x20]
	push 0x5B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x70],0x12
	test eax,eax
	je Block117

 Block116:
	mov ebp,dword ptr [eax]
	jmp Block118

 Block117:
	xor ebp,ebp

 Block118:
	mov edx,8
	mov word ptr [esp+0x38],dx
	test ebp,ebp
	jne Block120

 Block119:
	xor esi,esi
	jmp Block124

 Block120:
	mov eax,ebp
	lea edx,[eax+2]

 Block121:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block121

 Block122:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea eax,[edi+edi+6]
	push eax
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block124

 Block123:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC

 Block124:
	mov dword ptr [esp+0x40],esi
	test esi,esi
	jne Block127

 Block125:
	test ebp,ebp
	je Block127

 Block126:
	push 0x8007000E
	call _com_issue_error

 Block127:
	lea ecx,[esp+0x38]
	push ecx
	push 0xFF0000FF
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 0x1A25
	mov bl,0x13
	push edx
	mov byte ptr [esp+0x88],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [esp+0x28]
	add eax,0xAE0
	mov dword ptr [esp+0x2C],eax
	mov eax,dword ptr [eax]
	add eax,0x1C
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x80],0x14
	test eax,eax
	jne Block129

 Block128:
	push 0x80004003
	call _com_issue_error

 Block129:
	mov ecx,eax
	mov byte ptr [esp+0x80],bl
	call IWzFont::Create
	mov edi,8
	mov byte ptr [esp+0x70],0x12
	cmp word ptr [esp+0x38],di
	jne Block132

 Block130:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block133

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block133

 Block132:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block133:
	mov esi,dword ptr [esp+0x20]
	or ebp,0xFFFFFFFF
	mov dword ptr [esp+0x70],ebp
	test esi,esi
	je Block141

 Block134:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block141

 Block135:
	test esi,esi
	je Block141

 Block136:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block138

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block138:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block140

 Block139:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block140:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block141:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
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
	lea edx,[esp+0x38]
	push edx
	push ebp
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0x1A25
	mov ebx,0x15
	push eax
	mov dword ptr [esp+0x88],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x2C]
	mov eax,dword ptr [ecx]
	add eax,0x20
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x80],0x16
	test eax,eax
	jne Block145

 Block144:
	push 0x80004003
	call _com_issue_error

 Block145:
	mov ecx,eax
	mov byte ptr [esp+0x80],bl
	call IWzFont::Create
	mov dword ptr [esp+0x70],ebp
	cmp word ptr [esp+0x38],di
	jne Block148

 Block146:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block149

 Block147:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block149

 Block148:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block149:
	lea ecx,[esp+0x20]
	push 0x5B0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov ebx,0x17
	mov dword ptr [esp+0x70],ebx
	test eax,eax
	je Block151

 Block150:
	mov ebp,dword ptr [eax]
	jmp Block152

 Block151:
	xor ebp,ebp

 Block152:
	mov word ptr [esp+0x38],di
	test ebp,ebp
	jne Block154

 Block153:
	xor esi,esi
	jmp Block158

 Block154:
	mov eax,ebp
	lea edx,[eax+2]
	lea ecx,[ecx]

 Block155:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block155

 Block156:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea edx,[edi+edi+6]
	push edx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block158

 Block157:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC

 Block158:
	mov dword ptr [esp+0x40],esi
	test esi,esi
	jne Block161

 Block159:
	test ebp,ebp
	je Block161

 Block160:
	push 0x8007000E
	call _com_issue_error

 Block161:
	lea eax,[esp+0x38]
	push eax
	or ebp,0xFFFFFFFF
	push ebp
	push 0xC
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0x1A25
	push ecx
	mov byte ptr [esp+0x88],0x18
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [esp+0x28]
	add eax,0xAE0
	mov dword ptr [esp+0x2C],eax
	mov eax,dword ptr [eax]
	add eax,0x24
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x80],0x19
	test eax,eax
	jne Block163

 Block162:
	push 0x80004003
	call _com_issue_error

 Block163:
	mov ecx,eax
	mov byte ptr [esp+0x80],0x18
	call IWzFont::Create
	mov edi,8
	mov byte ptr [esp+0x70],bl
	cmp word ptr [esp+0x38],di
	jne Block166

 Block164:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block167

 Block165:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block167

 Block166:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block167:
	mov esi,dword ptr [esp+0x20]
	mov dword ptr [esp+0x70],ebp
	test esi,esi
	je Block175

 Block168:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block175

 Block169:
	test esi,esi
	je Block175

 Block170:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block172

 Block171:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block172:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block174

 Block173:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block174:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block175:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block177

 Block176:
	push eax
	call _com_issue_error

 Block177:
	lea ecx,[esp+0x38]
	push ecx
	push 0xFF51378C
	push 0xC
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 0x1A25
	mov ebx,0x1A
	push edx
	mov dword ptr [esp+0x88],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [esp+0x2C]
	mov eax,dword ptr [eax]
	add eax,0x28
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x80],0x1B
	test eax,eax
	jne Block179

 Block178:
	push 0x80004003
	call _com_issue_error

 Block179:
	mov ecx,eax
	mov byte ptr [esp+0x80],bl
	call IWzFont::Create
	mov dword ptr [esp+0x70],ebp
	cmp word ptr [esp+0x38],di
	jne Block182

 Block180:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block183

 Block181:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block183

 Block182:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block183:
	lea eax,[esp+0x20]
	push 0x5B0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x70],0x1C
	test eax,eax
	je Block185

 Block184:
	mov ebp,dword ptr [eax]
	jmp Block186

 Block185:
	xor ebp,ebp

 Block186:
	mov word ptr [esp+0x38],di
	test ebp,ebp
	jne Block188

 Block187:
	xor esi,esi
	jmp Block193

 Block188:
	mov eax,ebp
	lea edx,[eax+2]
	jmp Block190

 Block190:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block190

 Block191:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea ecx,[edi+edi+6]
	push ecx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block193

 Block192:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC

 Block193:
	mov dword ptr [esp+0x40],esi
	test esi,esi
	jne Block196

 Block194:
	test ebp,ebp
	je Block196

 Block195:
	push 0x8007000E
	call _com_issue_error

 Block196:
	lea edx,[esp+0x38]
	push edx
	push 0xFF51378C
	push 0xC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0x1A25
	mov bl,0x1D
	push eax
	mov byte ptr [esp+0x88],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [esp+0x28]
	add eax,0xAE0
	mov eax,dword ptr [eax]
	add eax,0x2C
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x80],0x1E
	test eax,eax
	jne Block198

 Block197:
	push 0x80004003
	call _com_issue_error

 Block198:
	mov ecx,eax
	mov byte ptr [esp+0x80],bl
	call IWzFont::Create
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x70],0x1C
	jne Block201

 Block199:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block202

 Block200:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block202

 Block201:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block202:
	mov esi,dword ptr [esp+0x20]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	test esi,esi
	je Block210

 Block203:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block210

 Block204:
	test esi,esi
	je Block210

 Block205:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block207

 Block206:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block207:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block209

 Block208:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block209:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block210:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x48]
	push ecx
	call esi
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block212

 Block211:
	push eax
	call _com_issue_error

 Block212:
	lea eax,[esp+0x38]
	mov ebx,0x1F
	push eax
	mov dword ptr [esp+0x74],ebx
	call esi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block214

 Block213:
	push eax
	call _com_issue_error

 Block214:
	push 0
	push 0
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x44]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0xB95
	push ecx
	mov byte ptr [esp+0x8C],0x20
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x84],0x21
	jne Block216

 Block215:
	push 0x80004003
	call _com_issue_error

 Block216:
	lea edx,[esp+0x6C]
	mov byte ptr [esp+0x84],0x20
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x78],0x22
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	test eax,eax
	je Block220

 Block217:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x20]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x20]
	mov esi,ecx
	test eax,eax
	jge Block220

 Block218:
	cmp eax,0x80004002
	je Block220

 Block219:
	push eax
	call _com_issue_error

 Block220:
	mov ebp,dword ptr [esp+0x18]
	mov edi,dword ptr [ebp+0xAE8]
	cmp edi,esi
	je Block225

 Block221:
	mov dword ptr [ebp+0xAE8],esi
	test esi,esi
	je Block223

 Block222:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block223:
	test edi,edi
	je Block225

 Block224:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block225:
	test esi,esi
	je Block227

 Block226:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block227:
	mov esi,8
	mov byte ptr [esp+0x70],0x20
	cmp word ptr [esp+0x58],si
	jne Block230

 Block228:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block231

 Block229:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block231

 Block230:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block231:
	mov byte ptr [esp+0x70],bl
	cmp word ptr [esp+0x38],si
	jne Block234

 Block232:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block235

 Block233:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block235

 Block234:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block235:
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp word ptr [esp+0x48],si
	jne Block238

 Block236:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block239

 Block237:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block239

 Block238:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block239:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	push edx
	call esi
	lea eax,[esp+0x38]
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
	lea ecx,[esp+0x48]
	mov ebx,0x23
	push ecx
	mov dword ptr [esp+0x74],ebx
	call esi
	lea edx,[esp+0x48]
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
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x54]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push 0xB96
	push edx
	mov byte ptr [esp+0x8C],0x24
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x84],0x25
	jne Block245

 Block244:
	push 0x80004003
	call _com_issue_error

 Block245:
	lea eax,[esp+0x6C]
	mov byte ptr [esp+0x84],0x24
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x78],0x26
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	test eax,eax
	je Block249

 Block246:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x20]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x20]
	mov esi,ecx
	test eax,eax
	jge Block249

 Block247:
	cmp eax,0x80004002
	je Block249

 Block248:
	push eax
	call _com_issue_error

 Block249:
	mov edi,dword ptr [ebp+0xAEC]
	cmp edi,esi
	je Block254

 Block250:
	mov dword ptr [ebp+0xAEC],esi
	test esi,esi
	je Block252

 Block251:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block252:
	test edi,edi
	je Block254

 Block253:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block254:
	test esi,esi
	je Block256

 Block255:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block256:
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x70],0x24
	jne Block259

 Block257:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block260

 Block258:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block260

 Block259:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block260:
	mov esi,8
	mov byte ptr [esp+0x70],bl
	cmp word ptr [esp+0x48],si
	jne Block263

 Block261:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	xor edi,edi
	mov word ptr [esp+0x48],cx
	cmp eax,edi
	je Block264

 Block262:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block264

 Block263:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]
	xor edi,edi

 Block264:
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp word ptr [esp+0x38],si
	jne Block267

 Block265:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,edi
	je Block268

 Block266:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block268

 Block267:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block268:
	mov dword ptr [esp+0x34],edi
	mov dword ptr [esp+0x28],1
	mov dword ptr [esp+0x2C],edi
	mov dword ptr [esp+0x30],edi
	lea edx,[esp+0x20]
	push 0xD99
	mov ebx,0x27
	push edx
	mov dword ptr [esp+0x78],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x74],0x28
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x70],bl
	cmp eax,edi
	je Block270

 Block269:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block270:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov byte ptr [esp+0x70],0x29
	cmp eax,edi
	je Block272

 Block271:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block273

 Block272:
	xor eax,eax

 Block273:
	mov byte ptr [esp+0x70],bl
	cmp eax,edi
	je Block285

 Block274:
	add eax,8
	cmp eax,edi
	je Block285

 Block275:
	lea esi,[eax-8]
	cmp esi,edi
	je Block277

 Block276:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block277:
	mov eax,dword ptr [ebp+0xAF4]
	mov dword ptr [ebp+0xAF4],esi
	cmp eax,edi
	je Block281

 Block278:
	lea esi,[eax+8]
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block281

 Block279:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,edi
	je Block281

 Block280:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block281:
	mov ecx,dword ptr [ebp+0xAF4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x28]
	push edx
	push edi
	push 0x11F
	push 0x22
	push 0x3E8
	push ebp
	call eax
	lea ecx,[esp+0x20]
	push 0xD9A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x74],0x2A
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x70],bl
	cmp eax,edi
	je Block283

 Block282:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block283:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x24],eax
	mov byte ptr [esp+0x70],0x2B
	cmp eax,edi
	je Block286

 Block284:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block287

 Block285:
	xor esi,esi
	jmp Block277

 Block286:
	xor eax,eax

 Block287:
	mov byte ptr [esp+0x70],bl
	cmp eax,edi
	je Block299

 Block288:
	add eax,8
	cmp eax,edi
	je Block299

 Block289:
	lea esi,[eax-8]
	cmp esi,edi
	je Block291

 Block290:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block291:
	mov eax,dword ptr [ebp+0xAFC]
	mov dword ptr [ebp+0xAFC],esi
	cmp eax,edi
	je Block295

 Block292:
	lea esi,[eax+8]
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block295

 Block293:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,edi
	je Block295

 Block294:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block295:
	mov ecx,dword ptr [ebp+0xAFC]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push edi
	push 0x11F
	push 0x193
	push 0x3E9
	push ebp
	call edx
	lea eax,[esp+0x24]
	push 0xD9B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x74],0x2C
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x70],bl
	cmp eax,edi
	je Block297

 Block296:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block297:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x70],0x2D
	cmp eax,edi
	je Block300

 Block298:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block301

 Block299:
	xor esi,esi
	jmp Block291

 Block300:
	xor eax,eax

 Block301:
	mov byte ptr [esp+0x70],bl
	cmp eax,edi
	je Block312

 Block302:
	add eax,8
	cmp eax,edi
	je Block312

 Block303:
	lea esi,[eax-8]
	cmp esi,edi
	je Block305

 Block304:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block305:
	mov eax,dword ptr [ebp+0xB04]
	mov dword ptr [ebp+0xB04],esi
	cmp eax,edi
	je Block309

 Block306:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block309

 Block307:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,edi
	je Block309

 Block308:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block309:
	mov ecx,dword ptr [ebp+0xB04]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push edi
	push 0xA
	push 0x1AE
	push 2
	push ebp
	call edx
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp eax,edi
	je Block311

 Block310:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block311:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret 4

 Block312:
	xor esi,esi
	jmp Block305
}
}
// CBookDlg::OnButtonClicked
__SUB_CLASS_THIS(00074300, __thiscall, 67102,  CBookDlg, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,2
	je Block7

 Block1:
	sub eax,0x3E6
	je Block5

 Block2:
	sub eax,1
	jne Block8

 Block3:
	mov eax,dword ptr [ecx+0x84]
	and eax,0xFFFFFFFE
	add eax,2
	cmp eax,dword ptr [ecx+0x88]
	jg Block8

 Block4:
	mov dword ptr [esp+4],eax
	jmp  CBookDlg::SetPage

 Block5:
	mov eax,dword ptr [ecx+0x84]
	and eax,0xFFFFFFFE
	sub eax,2
	js Block8

 Block6:
	mov dword ptr [esp+4],eax
	jmp  CBookDlg::SetPage

 Block7:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::CloseBook

 Block8:
	ret 4
}
}
// CBookDlg::OnMouseButton
__SUB_CLASS_THIS(00074360, __thiscall, 67106,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x201
	push edi
	mov edi,ecx
	jne Block4

 Block1:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x10]
	push esi
	push eax
	lea esi,[edi-4]
	push ecx
	mov ecx,esi
	call CBookDlg::CheckMousePoint
	mov eax,dword ptr [edi+0x88]
	test eax,eax
	jl Block3

 Block2:
	and eax,0xFFFFFFFE
	push eax
	mov ecx,esi
	call CBookDlg::SetPage
	pop esi
	pop edi
	ret 0x10

 Block3:
	lea ecx,[edi+0x8C]
	call CUIToolTip::ClearToolTip
	pop esi

 Block4:
	pop edi
	ret 0x10
}
}
// CT_INFO::~CT_INFO
_SUB_EXCEPTION_HANDLER(71AB0)
__SUB_CLASS_THIS0(00071AB0, __thiscall, 44450,  CT_INFO, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_71AB0
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
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x10]
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov esi,dword ptr [esi+0xC]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block6

 Block5:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block6:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CBookDlg::~CBookDlg
_SUB_EXCEPTION_HANDLER(741B0)
__SUB_CLASS_THIS0(000741B0, __thiscall, 67100,  CBookDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_741B0
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
	mov dword ptr [esp+0x10],esi
	int 3// TODO: 	mov dword ptr [esi],offset CBookDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CBookDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CBookDlg::`vftable'{for `ZRefCounted'}
	lea edi,[esi+0xB00]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],8
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0xAF8]
	mov byte ptr [esp+0x1C],7
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0xAF0]
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 2
	push 4
	lea eax,[esi+0xAE8]
	push eax
	mov byte ptr [esp+0x2C],5
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0xAE4]
	mov byte ptr [esp+0x1C],4
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	lea ecx,[esi+0xAE0]
	mov byte ptr [esp+0x1C],3
	call ZArray<_x_com_ptr<IWzFont>>::RemoveAll
	push offset ZArray<ZArray<CT_INFO>>::~ZArray<ZArray<CT_INFO>>
	push 2
	push 4
	lea eax,[esi+0xAD8]
	push eax
	mov byte ptr [esp+0x2C],2
	call __eh_vector_dtor_iterator
	lea ecx,[esi+0x90]
	mov byte ptr [esp+0x1C],1
	call CUIToolTip::~CUIToolTip
	mov ecx,esi
	mov dword ptr [TSingleton<CBookDlg>::ms_pInstance],ebx
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CWnd::~CWnd
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret
}
}
// CBookDlg::HitTest
__SUB_CLASS_THIS(00071EA0, __thiscall, 67108,  CBookDlg, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x10]
	push esi
	push edi
	mov edi,dword ptr [esp+0x1C]
	push edi
	push ebp
	push eax
	mov esi,ecx
	call CWnd::HitTest
	mov ebx,eax
	test ebx,ebx
	je Block6

 Block1:
	test edi,edi
	je Block3

 Block2:
	cmp dword ptr [edi],0
	jne Block6

 Block3:
	mov ecx,dword ptr [esp+0x14]
	push ebp
	push ecx
	mov ecx,esi
	call CBookDlg::CheckMousePoint
	cmp dword ptr [esi+0x9C],0
	jne Block5

 Block4:
	cmp dword ptr [esi+0x8C],0xFFFFFFFF
	mov eax,1
	je Block6

 Block5:
	mov eax,ebx

 Block6:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0xC
}
}
// CBookDlg::CBookDlg
_SUB_EXCEPTION_HANDLER(74030)
__SUB_CLASS_THIS0(00074030, __thiscall, 67098,  CBookDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_74030
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
	mov esi,ecx
	mov dword ptr [esp+0xC],esi
	call CWnd::_ctor_default
	xor edi,edi
	lea eax,[esi+0x80]
	mov dword ptr [esp+0x1C],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0x80]
	mov dword ptr [TSingleton<CBookDlg>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CBookDlg>::ms_pInstance],edi

 Block3:
	mov dword ptr [eax],edi
	or eax,0xFFFFFFFF
	lea ecx,[esi+0x90]
	mov byte ptr [esp+0x1C],1
	int 3// TODO: 	mov dword ptr [esi],offset CBookDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CBookDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CBookDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x84],eax
	mov dword ptr [esi+0x88],edi
	mov dword ptr [esi+0x8C],eax
	call CUIToolTip::_ctor_default
	push offset ZArray<ZArray<CT_INFO>>::~ZArray<ZArray<CT_INFO>>
	push offset ZArray<ZArray<CT_INFO>>::_ctor_default
	push 2
	push 4
	lea edx,[esi+0xAD8]
	push edx
	mov byte ptr [esp+0x30],2
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xAE0],edi
	mov dword ptr [esi+0xAE4],edi
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 2
	push 4
	lea eax,[esi+0xAE8]
	push eax
	mov byte ptr [esp+0x30],5
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xAF4],edi
	mov dword ptr [esi+0xAFC],edi
	mov dword ptr [esi+0xB04],edi
	push edi
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMGBOO
	mov byte ptr [esp+0x38],9
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	push edi
	push 1
	push edi
	push 1
	push 0xA
	push 0x161
	push 0x1DE
	push 0x94
	push 0xBE
	mov ecx,esi
	call CWnd::CreateWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret
}
}
// CBookDlg::SetBookItem
_SUB_EXCEPTION_HANDLER(743B0)
__SUB_CLASS_THIS(000743B0, __thiscall, 67110,  CBookDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_743B0
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
	mov eax,dword ptr [esp+0x30]
	cmp dword ptr [esi+0x80],eax
	je Block20

 Block1:
	mov dword ptr [esi+0x80],eax
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[esp+0x34]
	push eax
	call CItemInfo::GetItemProp
	mov ecx,dword ptr [esp+0x30]
	test ecx,ecx
	sete al
	mov dword ptr [esp+0x28],0
	test al,al
	je Block4

 Block2:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test ecx,ecx
	je Block20

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 4

 Block4:
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	push offset _S_BOOK
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],1
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x38],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x30],2
	call Ztl_variant_t::GetUnknown
	lea edi,[esi+0xAE4]
	push eax
	mov ecx,edi
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
	cmp word ptr [esp+0x10],8
	mov byte ptr [esp+0x28],0
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x10],ax
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	cmp dword ptr [edi],0
	sete al
	test al,al
	je Block16

 Block14:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block20

 Block15:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 4

 Block16:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	call IWzProperty::Getcount
	dec eax
	push 0
	mov ecx,esi
	mov dword ptr [esi+0x88],eax
	call CBookDlg::SetPage
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 4
}
}
// CBookDlg::SetPage
_SUB_EXCEPTION_HANDLER(73AC0)
__SUB_CLASS_THIS(00073AC0, __thiscall, 67110,  CBookDlg, void, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_73AC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x70],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [ebp+0x54],edi
	mov ebx,dword ptr [ebp+0x7C]
	cmp dword ptr [edi+0x84],ebx
	je Block71

 Block1:
	xor esi,esi
	cmp ebx,esi
	jl Block71

 Block2:
	cmp ebx,dword ptr [edi+0x88]
	jg Block71

 Block3:
	push 0x14
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,esi
	je Block5

 Block4:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CTextAnalyzer::`vftable'
	mov dword ptr [eax+0x10],0xBE
	mov dword ptr [eax+0xC],1
	mov dword ptr [ebp+0x68],eax
	jmp Block6

 Block5:
	mov dword ptr [ebp+0x68],esi
	mov eax,esi

 Block6:
	mov dword ptr [ebp-0x20],eax
	cmp eax,esi
	je Block8

 Block7:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	lea eax,[edi+0xAD8]
	mov dword ptr [ebp-4],esi
	mov dword ptr [ebp+0x44],esi
	mov dword ptr [ebp+0x64],eax
	jmp Block10

 Block9:
	mov edi,dword ptr [ebp+0x54]

 Block10:
	mov ecx,dword ptr [ebp+0x64]
	call ZArray<ZArray<CT_INFO>>::RemoveAll
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	lea ecx,[esi+ebx]
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [edi+0xAE4]
	mov byte ptr [ebp-4],1
	test ecx,ecx
	je Block72

 Block11:
	lea edx,[ebp+0x30]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	mov dword ptr [ebp+0x58],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block13

 Block12:
	cmp eax,0x80004002
	jne Block73

 Block13:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],4
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov edi,dword ptr [ebp+0x58]
	xor ecx,ecx
	cmp edi,ecx
	sete al
	test al,al
	je Block20

 Block18:
	mov byte ptr [ebp-4],cl
	cmp edi,ecx
	je Block67

 Block19:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax
	jmp Block67

 Block20:
	mov dword ptr [ebp+0x48],ecx
	mov dword ptr [ebp+0x50],ecx
	lea ebx,[ebx]

 Block21:
	mov eax,0x20
	call __chkstk
	mov ecx,dword ptr [ebp+0x50]
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],5
	test edi,edi
	je Block72

 Block22:
	lea edx,[ebp+0x10]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],4
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x4C],esi
	test eax,eax
	je Block26

 Block23:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x40]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x40]
	mov dword ptr [ebp+0x4C],ecx
	test eax,eax
	jge Block25

 Block24:
	cmp eax,0x80004002
	jne Block73

 Block25:
	mov esi,dword ptr [ebp+0x4C]

 Block26:
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],8
	jne Block29

 Block27:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block30:
	test esi,esi
	sete al
	test al,al
	jne Block64

 Block31:
	push ecx
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push offset _S_TEXT
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],9
	test esi,esi
	je Block72

 Block32:
	lea ecx,[ebp-0x1C]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],8
	call IWzProperty::Getitem
	mov ebx,8
	mov byte ptr [ebp-4],0xA
	cmp word ptr [eax],bx
	jne Block34

 Block33:
	mov eax,dword ptr [eax+8]
	jmp Block35

 Block34:
	mov eax,offset _S___3

 Block35:
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
	push ecx
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push offset _S_TEXT
	call _xbstr_t::_ctor_1
	lea edx,[ebp+0x20]
	mov byte ptr [ebp-4],0xB
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],0xC
	cmp word ptr [eax],bx
	jne Block37

 Block36:
	mov eax,dword ptr [eax+8]
	jmp Block38

 Block37:
	mov eax,offset _S___3

 Block38:
	push 0
	push 0
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call WideCharToMultiByte
	push 0xFFFFFFFF
	push edi
	lea ecx,[ebp+0x5C]
	mov dword ptr [ebp+0x5C],0
	call ZXString<char>::Assign
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp+0x20],bx
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x1C],bx
	jne Block45

 Block43:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	push 0
	push ecx
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push offset _S_ALIGN
	call _xbstr_t::_ctor_1
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],0x10
	mov ecx,esi
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x11
	call get_int32
	add esp,8
	mov dword ptr [ebp+0x6C],eax
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp],bx
	jne Block49

 Block47:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov ecx,dword ptr [ebp+0x64]
	push 0xFFFFFFFF
	call ZArray<ZArray<CT_INFO>>::InsertBefore
	mov ecx,dword ptr [ebp+0x54]
	push 0
	push 0
	push 0
	add ecx,0xAE0
	push ecx
	mov edi,eax
	push edi
	push ecx
	mov ecx,esp
	lea edx,[ebp+0x5C]
	mov dword ptr [ebp+0x60],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [ebp+0x68]
	call CTextAnalyzer::AnalyzeText
	mov ecx,edi
	xor ebx,ebx
	call ZArray<CT_INFO>::GetCount
	test eax,eax
	jbe Block61

 Block51:
	mov dword ptr [ebp+0x60],ebx

 Block52:
	mov esi,dword ptr [edi]
	add esi,dword ptr [ebp+0x60]
	mov eax,dword ptr [ebp+0x48]
	add dword ptr [esi+0x1C],eax
	mov ecx,edi
	call ZArray<CT_INFO>::GetCount
	dec eax
	cmp ebx,eax
	jne Block54

 Block53:
	mov ecx,dword ptr [esi+0x24]
	mov eax,dword ptr [esi+0x1C]
	lea edx,[ecx+eax+0xA]
	mov dword ptr [ebp+0x48],edx

 Block54:
	mov eax,dword ptr [ebp+0x6C]
	cmp eax,1
	jne Block56

 Block55:
	mov eax,0xBE
	sub eax,dword ptr [esi+0x20]
	cdq
	sub eax,edx
	sar eax,1
	jmp Block58

 Block56:
	cmp eax,2
	jne Block59

 Block57:
	mov eax,0xBE
	sub eax,dword ptr [esi+0x20]

 Block58:
	mov dword ptr [esi+0x18],eax

 Block59:
	add dword ptr [ebp+0x60],0x44
	mov ecx,edi
	inc ebx
	call ZArray<CT_INFO>::GetCount
	cmp ebx,eax
	jb Block52

 Block60:
	mov esi,dword ptr [ebp+0x4C]

 Block61:
	mov eax,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block63:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],4
	call edx
	inc dword ptr [ebp+0x50]
	mov edi,dword ptr [ebp+0x58]
	mov ebx,dword ptr [ebp+0x7C]
	jmp Block21

 Block64:
	mov byte ptr [ebp-4],4
	test esi,esi
	je Block66

 Block65:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block66:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [ebp-4],0
	call eax
	mov esi,dword ptr [ebp+0x44]

 Block67:
	add dword ptr [ebp+0x64],4
	inc esi
	cmp esi,2
	mov dword ptr [ebp+0x44],esi
	jl Block9

 Block68:
	mov esi,dword ptr [ebp+0x54]
	mov ecx,esi
	mov dword ptr [esi+0x84],ebx
	call CBookDlg::SetCtrlEnabled
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov esi,dword ptr [ebp+0x68]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test esi,esi
	je Block71

 Block69:
	add esi,4
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block71

 Block70:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0x68]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block71:
	lea esp,[ebp-0x34]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x70]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x74
	mov esp,ebp
	pop ebp
	ret 4

 Block72:
	push 0x80004003
	call _com_issue_error

 Block73:
	push eax
	call _com_issue_error
}
}
// CBookDlg::CheckMousePoint
_SUB_EXCEPTION_HANDLER(71B30)
__SUB_CLASS_THIS(00071B30, __thiscall, 67111,  CBookDlg, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_71B30
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
	mov dword ptr [esp+0x14],ecx
	mov dword ptr [esp+0x30],0xFFFFFFFF
	mov dword ptr [esp+0x24],0
	lea esi,[ecx+0xAD8]
	mov dword ptr [esp+0x3C],0
	mov dword ptr [esp+0x28],0
	mov dword ptr [esp+0x18],0
	mov dword ptr [esp+0x20],esi
	lea ecx,[ecx]

 Block1:
	xor ebp,ebp

 Block2:
	mov eax,dword ptr [esi]
	mov dword ptr [esp+0x1C],ebp
	test eax,eax
	je Block20

 Block3:
	cmp ebp,dword ptr [eax-4]
	jae Block20

 Block4:
	lea edi,[eax+ebp*4]
	mov ecx,edi
	xor ebx,ebx
	call ZArray<CT_INFO>::GetCount
	test eax,eax
	jbe Block19

 Block5:
	xor ebp,ebp
	nop

 Block6:
	mov esi,dword ptr [edi]
	mov eax,dword ptr [esi+ebp+0x18]
	mov ecx,dword ptr [esp+0x18]
	add esi,ebp
	lea edx,[ecx+eax+0x23]
	cmp edx,dword ptr [esp+0x44]
	jge Block17

 Block7:
	mov ecx,dword ptr [esi+0x20]
	add ecx,dword ptr [esp+0x18]
	lea edx,[ecx+eax+0x2B]
	cmp dword ptr [esp+0x44],edx
	jge Block17

 Block8:
	mov eax,dword ptr [esi+0x1C]
	mov ecx,dword ptr [esp+0x48]
	lea edx,[eax+0x1E]
	cmp edx,ecx
	jge Block17

 Block9:
	mov edx,dword ptr [esi+0x24]
	lea eax,[edx+eax+0x1E]
	cmp ecx,eax
	jge Block17

 Block10:
	mov eax,dword ptr [esi+4]
	test eax,eax
	jne Block13

 Block11:
	cmp dword ptr [esi],1
	jne Block15

 Block12:
	test eax,eax
	je Block14

 Block13:
	mov dword ptr [esp+0x28],eax
	jmp Block15

 Block14:
	lea ecx,[esi+0x10]
	push ecx
	lea ecx,[esp+0x28]
	call ZXString<char>::op_assign

 Block15:
	mov esi,dword ptr [esi+0x28]
	test esi,esi
	jl Block17

 Block16:
	mov dword ptr [esp+0x30],esi

 Block17:
	mov ecx,edi
	inc ebx
	add ebp,0x44
	call ZArray<CT_INFO>::GetCount
	cmp ebx,eax
	jb Block6

 Block18:
	mov ebp,dword ptr [esp+0x1C]
	mov esi,dword ptr [esp+0x20]

 Block19:
	inc ebp
	jmp Block2

 Block20:
	mov eax,dword ptr [esp+0x18]
	add eax,0xDC
	add esi,4
	cmp eax,0x1B8
	mov dword ptr [esp+0x20],esi
	mov dword ptr [esp+0x18],eax
	jl Block1

 Block21:
	mov edi,dword ptr [esp+0x24]
	test edi,edi
	je Block23

 Block22:
	cmp byte ptr [edi],0
	jne Block30

 Block23:
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block29

 Block24:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea edx,[esp+0x2C]
	push edx
	call CItemInfo::GetItemSlot
	mov esi,dword ptr [esp+0x14]
	mov eax,dword ptr [esp+0x2C]
	mov edx,dword ptr [esi+4]
	push 0
	push 0
	push 0
	push 0
	add esi,4
	push 0
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	mov byte ptr [esp+0x54],1
	call eax
	mov ecx,dword ptr [esp+0x60]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x60]
	lea edx,[eax+ecx+0x14]
	mov ecx,dword ptr [esp+0x30]
	push edx
	add ecx,0x90
	call CUIToolTip::ShowItemToolTip
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x3C],0
	test eax,eax
	je Block31

 Block25:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block28

 Block26:
	mov eax,dword ptr [esp+0x2C]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x2C]
	test ecx,ecx
	je Block28

 Block27:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block28:
	mov dword ptr [esp+0x2C],0
	jmp Block31

 Block29:
	mov ecx,dword ptr [esp+0x14]
	add ecx,0x90
	call CUIToolTip::ClearToolTip
	jmp Block31

 Block30:
	mov esi,dword ptr [esp+0x14]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	add esi,4
	push edi
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x4C]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x4C]
	lea edx,[eax+ecx+0x14]
	mov ecx,dword ptr [esp+0x1C]
	push edx
	add ecx,0x90
	call CUIToolTip::SetToolTip_String

 Block31:
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+0x14]
	cmp dword ptr [ecx+0x8C],eax
	je Block33

 Block32:
	push 0
	mov dword ptr [ecx+0x8C],eax
	call CWnd::InvalidateRect

 Block33:
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test edi,edi
	je Block35

 Block34:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block35:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 8
}
}
// CBookDlg::OnSetFocus
__SUB_CLASS_THIS(00074180, __thiscall, 67104,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CBookDlg::OnKey
__SUB_CLASS_THIS(00071360, __thiscall, 67105,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	test dword ptr [esp+8],0x80000000
	jne Block4

 Block1:
	mov eax,dword ptr [esp+4]
	cmp eax,0xD
	je Block3

 Block2:
	cmp eax,0x1B
	jne Block4

 Block3:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::CloseBook

 Block4:
	ret 8
}
}
