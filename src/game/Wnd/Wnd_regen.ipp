#include "regen.hpp"
// Wnd.ipp
#include "Wnd.hpp"

// CWnd::Update
__SUB_CLASS_THIS0(005AE7C0, __thiscall, 4954,  CWnd, void) {
__asm {

 Block0:
	push ecx
	mov ecx,dword ptr [ecx+0x6C]
	mov dword ptr [esp],ecx
	test ecx,ecx
	je Block7

 Block1:
	push esi
	lea esp,[esp]

 Block2:
	lea eax,[esp+4]
	push eax
	call ZList<ZRef<CCtrlWnd>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	test esi,esi
	je Block5

 Block3:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x20]
	lea ecx,[esi+4]
	call eax
	test eax,eax
	je Block5

 Block4:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	mov ecx,esi
	call eax

 Block5:
	cmp dword ptr [esp+4],0
	jne Block2

 Block6:
	pop esi

 Block7:
	pop ecx
	ret
}
}
// CWnd::OnMouseMove
__SUB_CLASS_THIS(000299E0, __thiscall, 4960,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	xor eax,eax
	ret 8
}
}
// CWnd::OnDragDrop
__SUB_CLASS_THIS(000299F0, __thiscall, 4967,  CWnd, int32_t, long, DRAGCTX&, long, long) {
__asm {

 Block0:
	xor eax,eax
	ret 0x10
}
}
// CWnd::SetBackgrndV
_SUB_EXCEPTION_HANDLER(5B0530)
__SUB_CLASS_THIS(005B0530, __thiscall, 5020,  CWnd, void, NakedParam<Ztl_bstr_t>, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B0530
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xA8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xBC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x38],edi
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x6C]
	xor ebp,ebp
	push eax
	mov dword ptr [esp+0xC8],ebp
	call esi
	lea ecx,[esp+0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x4C]
	push edx
	mov byte ptr [esp+0xC8],1
	call esi
	lea eax,[esp+0x4C]
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
	lea ecx,[esp+0x74]
	push ecx
	lea edx,[esp+0x58]
	push edx
	push ecx
	mov ecx,dword ptr [esp+0xE0]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xE0]
	mov dword ptr [esp+0x3C],esp
	cmp eax,ebp
	je Block6

 Block5:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov byte ptr [esp+0xD8],3
	cmp dword ptr [_D_G_RM],ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[esp+0x90]
	mov byte ptr [esp+0xD8],2
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xCC],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x38],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0xC4],6
	cmp word ptr [esp+0x7C],si
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x7C],ax
	mov eax,dword ptr [esp+0x84]
	cmp eax,ebp
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x7C]
	push ecx
	call ebx

 Block15:
	mov byte ptr [esp+0xC4],7
	cmp word ptr [esp+0x4C],si
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	cmp eax,ebp
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[esp+0x4C]
	push eax
	call ebx

 Block19:
	mov byte ptr [esp+0xC4],8
	cmp word ptr [esp+0x6C],si
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x74]
	xor ecx,ecx
	mov word ptr [esp+0x6C],cx
	cmp eax,ebp
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[esp+0x6C]
	push edx
	call ebx

 Block23:
	mov esi,dword ptr [esp+0x34]
	cmp esi,ebp
	sete al
	test al,al
	sete al
	test al,al
	je Block102

 Block24:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push offset _S_0
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xD0],9
	cmp esi,ebp
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea eax,[esp+0xA8]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xD4],8
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xCC],0xA
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x30],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block29

 Block27:
	cmp eax,0x80004002
	je Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	cmp word ptr [esp+0x9C],8
	mov byte ptr [esp+0xC4],0xC
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0xA4]
	xor ecx,ecx
	mov word ptr [esp+0x9C],cx
	cmp eax,ebp
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea edx,[esp+0x9C]
	push edx
	call ebx

 Block33:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push offset _S_1
	call _xbstr_t::_ctor_1
	lea eax,[esp+0x98]
	mov byte ptr [esp+0xD0],0xD
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xD4],0xC
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xCC],0xE
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x40],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block36

 Block34:
	cmp eax,0x80004002
	je Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	cmp word ptr [esp+0x8C],8
	mov byte ptr [esp+0xC4],0x10
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x94]
	xor ecx,ecx
	mov word ptr [esp+0x8C],cx
	cmp eax,ebp
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea edx,[esp+0x8C]
	push edx
	call ebx

 Block40:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push offset _S_2
	call _xbstr_t::_ctor_1
	lea eax,[esp+0xB8]
	mov byte ptr [esp+0xD0],0x11
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xD4],0x10
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xCC],0x12
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0x44],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block43

 Block41:
	cmp eax,0x80004002
	je Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	cmp word ptr [esp+0xAC],8
	mov byte ptr [esp+0xC4],0x14
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0xB4]
	xor ecx,ecx
	mov word ptr [esp+0xAC],cx
	cmp eax,ebp
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea edx,[esp+0xAC]
	push edx
	call ebx

 Block47:
	lea eax,[esp+0x14]
	push 0x3D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	add edi,0x78
	push edi
	push eax
	mov byte ptr [esp+0xD0],0x15
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0xC4],0x14
	cmp eax,ebp
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block49:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	lea eax,[esp+0x5C]
	mov bl,0x16
	push eax
	mov byte ptr [esp+0xC8],bl
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x5C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block53

 Block52:
	push eax
	call _com_issue_error

 Block53:
	mov esi,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xC4],0x17
	cmp esi,ebp
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x30]
	push eax
	push esi
	mov dword ptr [esp+0x38],ebp
	call ecx
	cmp eax,ebp
	jge Block57

 Block56:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block57:
	mov ecx,dword ptr [edi]
	cmp ecx,ebp
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [esp+0xD4]
	lea eax,[esp+0x60]
	push eax
	mov eax,dword ptr [esp+0x38]
	push edx
	push eax
	call IWzCanvas::Create
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0xC4],bl
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	cmp eax,ebp
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[esp+0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov ebx,8
	mov byte ptr [esp+0xC4],0x14
	cmp word ptr [esp+0x18],bx
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov edx,3
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],0xFF
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0xC4],0x18
	cmp ecx,ebp
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea eax,[esp+0x18]
	push eax
	push esi
	push ebp
	push ebp
	call IWzCanvas::Copy
	mov byte ptr [esp+0xC4],0x14
	cmp word ptr [esp+0x18],bx
	jne Block72

 Block70:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x30]
	push eax
	push esi
	mov byte ptr [esp+0xCC],0x19
	mov dword ptr [esp+0x38],ebp
	call ecx
	cmp eax,ebp
	jge Block77

 Block76:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block77:
	mov esi,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],edx
	cmp esi,ebp
	jne Block79

 Block78:
	push 0x80004003
	call _com_issue_error

 Block79:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x44]
	push ecx
	push esi
	mov dword ptr [esp+0x4C],ebp
	call edx
	cmp eax,ebp
	jge Block81

 Block80:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block81:
	mov edi,dword ptr [esp+0x3C]
	mov ebx,dword ptr [esp+0x44]
	cmp edi,ebp
	jne Block83

 Block82:
	push 0x80004003
	call _com_issue_error

 Block83:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x48]
	push ecx
	push edi
	mov dword ptr [esp+0x50],ebp
	call edx
	cmp eax,ebp
	jge Block85

 Block84:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block85:
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [eax]
	mov ebp,dword ptr [esp+0x48]
	lea edx,[esp+0x14]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x48]
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block87

 Block86:
	mov ecx,dword ptr [esp+0x2C]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block87:
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [eax+0x78]
	add eax,0x78
	test ecx,ecx
	jne Block89

 Block88:
	push 0x80004003
	call _com_issue_error

 Block89:
	mov eax,dword ptr [esp+0xD0]
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [esp+0x18]
	push 0
	push 0
	push 0
	push 0
	sub eax,ebx
	sub eax,dword ptr [esp+0x3C]
	push eax
	push ebp
	push 0xFF
	push edi
	push edx
	push 0
	call IWzCanvas::CopyEx
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xC4],0x14
	jne Block92

 Block90:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	mov edx,3
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],0xFF
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov byte ptr [esp+0xCC],0x1A
	mov dword ptr [esp+0x1C],0
	call edx
	test eax,eax
	jge Block95

 Block94:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block95:
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [eax+0x78]
	add eax,0x78
	test ecx,ecx
	jne Block97

 Block96:
	push 0x80004003
	call _com_issue_error

 Block97:
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [esp+0xD4]
	sub eax,dword ptr [esp+0x18]
	push esi
	push eax
	push 0
	call IWzCanvas::Copy
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xC4],0x14
	jne Block100

 Block98:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block101:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0xC8],0x10
	call ecx
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0xC8],0xC
	call eax
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xC8],8
	call edx
	mov edi,dword ptr [esp+0x38]
	mov esi,dword ptr [esp+0x34]
	xor ebp,ebp
	jmp Block104

 Block102:
	mov eax,dword ptr [edi+0x78]
	cmp eax,ebp
	je Block104

 Block103:
	mov dword ptr [edi+0x78],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block104:
	mov eax,dword ptr [esp+0xD4]
	mov ecx,dword ptr [esp+0xD8]
	mov dword ptr [edi+0x40],eax
	mov dword ptr [edi+0x44],ecx
	mov byte ptr [esp+0xC4],0
	cmp esi,ebp
	je Block106

 Block105:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block106:
	mov ecx,dword ptr [esp+0xCC]
	cmp ecx,ebp
	je Block108

 Block107:
	call _xbstr_t::Data_t::Release

 Block108:
	mov ecx,dword ptr [esp+0xBC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xB4
	ret 0x10
}
}
// CWnd::Destroy
_SUB_EXCEPTION_HANDLER(5B0E50)
__SUB_CLASS_THIS0(005B0E50, __thiscall, 4954,  CWnd, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B0E50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor edi,edi
	cmp dword ptr [esi+0x14],edi
	je Block13

 Block1:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	call edx
	lea ecx,[esp+0x1C]
	int 3// TODO: 	mov dword ptr [esp+0x1C],offset ZList<ZRef<CCtrlWnd>>::`vftable'
	mov dword ptr [esp+0x24],edi
	mov dword ptr [esp+0x28],edi
	mov dword ptr [esp+0x2C],edi
	call ZList<ZRef<CCtrlWnd>>::RemoveAll
	lea ebx,[esi+0x60]
	push ebx
	lea ecx,[esp+0x20]
	call ZList<ZRef<CCtrlWnd>>::AddTail_List
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x38],edi
	mov dword ptr [esp+0x10],eax
	cmp eax,edi
	je Block3

 Block2:
	lea eax,[esp+0x10]
	push eax
	call ZList<ZRef<CCtrlWnd>>::GetNext
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	add esp,4
	call eax
	cmp dword ptr [esp+0x10],edi
	jne Block2

 Block3:
	lea ecx,[esp+0x1C]
	call ZList<ZRef<CCtrlWnd>>::RemoveAll
	mov ecx,ebx
	call ZList<ZRef<CCtrlWnd>>::RemoveAll
	mov dword ptr [esi+0x74],edi
	mov eax,dword ptr [esi+0x18]
	cmp eax,edi
	je Block5

 Block4:
	mov dword ptr [esi+0x18],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block5:
	mov eax,dword ptr [esi+0x1C]
	cmp eax,edi
	je Block7

 Block6:
	mov dword ptr [esi+0x1C],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov eax,dword ptr [esi+0x20]
	cmp eax,edi
	je Block9

 Block8:
	mov dword ptr [esi+0x20],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	push esi
	mov dword ptr [esi+0x14],edi
	call CWndMan::RemoveWindow
	push esi
	call CWndMan::RemoveUpdateWindow
	push esi
	call CWndMan::RemoveInvalidatedWindow
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	add esp,0xC
	lea eax,[esi+4]
	push eax
	call CWndMan::Unlink
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push edi
	lea eax,[esp+0x18]
	push eax
	call CWndMan::GetCursorPos
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push edx
	call CWndMan::GetHandlerFromPoint
	mov esi,eax
	cmp esi,edi
	je Block12

 Block10:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	mov ecx,esi
	call edx
	test eax,eax
	je Block12

 Block11:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	push 1
	mov ecx,esi
	call edx

 Block12:
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x1C],offset ZList<ZRef<CCtrlWnd>>::`vftable'
	call ZList<ZRef<CCtrlWnd>>::RemoveAll

 Block13:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x2C
	ret
}
}
// CWnd::OnButtonClicked
__SUB_CLASS_THIS(00029280, __thiscall, 4979,  CWnd, void, uint32_t) {
__asm {

 Block0:
	ret 4
}
}
// CWnd::SetAnimationBackgrnd
_SUB_EXCEPTION_HANDLER(5AFA00)
__SUB_CLASS_THIS(005AFA00, __thiscall, 5016,  CWnd, void, NakedParam<Ztl_bstr_t>, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5AFA00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor edx,edx
	cmp dword ptr [esi+0x78],edx
	mov dword ptr [esp+0x48],edx
	sete al
	test al,al
	sete al
	test al,al
	je Block2

 Block1:
	mov ecx,dword ptr [esp+0x50]
	cmp ecx,edx
	jmp Block76

 Block2:
	cmp dword ptr [esi+0x18],edx
	lea eax,[esi+0x18]
	mov dword ptr [esp+0x14],eax
	sete al
	test al,al
	je Block4

 Block3:
	mov ecx,dword ptr [esp+0x50]
	cmp ecx,edx
	jmp Block76

 Block4:
	mov ebp,dword ptr [esp+0x54]
	mov edi,dword ptr [esp+0x58]
	mov dword ptr [esi+0x40],ebp
	mov dword ptr [esi+0x44],edi
	mov eax,dword ptr [esi+0x1C]
	cmp eax,edx
	je Block6

 Block5:
	mov dword ptr [esi+0x1C],edx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0x20]
	lea ecx,[esi+0x20]
	mov dword ptr [esp+0x58],ecx
	test eax,eax
	je Block8

 Block7:
	mov dword ptr [ecx],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esp+0x14]
	mov ebx,dword ptr [eax]
	push 0
	push 0xFF
	test ebx,ebx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0xB0]
	lea edx,[esp+0x5C]
	push edx
	push ebx
	mov dword ptr [esp+0x64],0
	call eax
	test eax,eax
	jge Block12

 Block11:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block12:
	mov ecx,dword ptr [esp+0x5C]
	mov ebx,dword ptr [esp+0x1C]
	mov eax,dword ptr [ebx]
	inc ecx
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x64],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block14

 Block13:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block14:
	push edi
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push ebx
	mov byte ptr [esp+0x68],1
	call _x_com_ptr<IWzVector2D>::CreateFromWzGr2DLayerComPtr
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block16

 Block15:
	mov eax,dword ptr [eax]
	jmp Block17

 Block16:
	xor eax,eax

 Block17:
	push 0
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0x70],0
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov ebx,dword ptr [esi+0x1C]
	add esp,0x28
	cmp ebx,eax
	je Block22

 Block18:
	mov dword ptr [esi+0x1C],eax
	test eax,eax
	je Block20

 Block19:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block20:
	test ebx,ebx
	je Block22

 Block21:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block22:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	cmp dword ptr [esi+0x1C],0
	sete al
	test al,al
	jne Block75

 Block25:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	call ebx
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x4C],2
	call ebx
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	mov ecx,dword ptr [esi+0x1C]
	mov byte ptr [esp+0x48],3
	test ecx,ecx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov ebp,8
	mov byte ptr [esp+0x48],2
	cmp word ptr [esp+0x20],bp
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x30],bp
	jne Block38

 Block36:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov ecx,dword ptr [esp+0x58]
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block41

 Block40:
	mov dword ptr [ecx],0
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block41:
	lea ecx,[esp+0x20]
	push ecx
	call ebx
	lea edx,[esp+0x20]
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
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0x4C],4
	call ebx
	lea ecx,[esp+0x30]
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
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edx]
	mov byte ptr [esp+0x48],5
	test ecx,ecx
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	mov ebx,dword ptr [esi+0x1C]
	test ebx,ebx
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	mov ebp,ebx
	test ebp,ebp
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	mov eax,dword ptr [_D_G_GR]
	test eax,eax
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	mov edi,eax
	lea eax,[esp+0x20]
	push eax
	lea edx,[esp+0x34]
	push edx
	call IWzGr2DLayer::Getz
	add eax,2
	push eax
	mov ecx,ebx
	call IWzGr2DLayer::Getheight
	push eax
	mov ecx,ebp
	call IWzGr2DLayer::Getwidth
	mov ecx,dword ptr [esi+0x40]
	push eax
	mov eax,dword ptr [esi+0x44]
	push eax
	push ecx
	lea edx,[esp+0x70]
	push edx
	mov ecx,edi
	call IWzGr2D::CreateLayer
	mov esi,dword ptr [esp+0x58]
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block55:
	mov edi,8
	mov byte ptr [esp+0x48],4
	cmp word ptr [esp+0x30],di
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x20],di
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block63:
	cmp dword ptr [esi],0
	sete al
	test al,al
	jne Block75

 Block64:
	mov edi,dword ptr [esp+0x14]
	mov eax,dword ptr [edi]
	mov ecx,0xD
	mov word ptr [esp+0x30],cx
	mov dword ptr [esp+0x38],eax
	test eax,eax
	je Block66

 Block65:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block66:
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x48],6
	test ecx,ecx
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	lea edx,[esp+0x30]
	push edx
	call IWzVector2D::Putorigin
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x48],0
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [edi]
	mov ecx,0xD
	mov word ptr [esp+0x30],cx
	mov dword ptr [esp+0x38],eax
	test eax,eax
	je Block70

 Block69:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block70:
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x48],7
	test ecx,ecx
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	lea edx,[esp+0x30]
	push edx
	call IWzGr2DLayer::Putoverlay
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x48],0
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [esi]
	test ecx,ecx
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	push 0xFFFFFFFF
	call IWzGr2DLayer::Putcolor

 Block75:
	mov ecx,dword ptr [esp+0x50]
	test ecx,ecx

 Block76:
	je Block78

 Block77:
	call _xbstr_t::Data_t::Release

 Block78:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 0xC
}
}
// CWnd::CreateWnd
_SUB_EXCEPTION_HANDLER(5AD8F0)
__SUB_CLASS_THIS(005AD8F0, __thiscall, 4972,  CWnd, void, long, long, long, long, long, int32_t, void*, int32_t, CWnd::UIOrigin) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5AD8F0
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
	mov eax,dword ptr [CWnd::ms_dwKeyCounter]
	inc eax
	mov dword ptr [CWnd::ms_dwKeyCounter],eax
	mov dword ptr [esi+0x14],eax
	lea eax,[esi+0x2C]
	push eax
	call SetRectEmpty
	mov ecx,dword ptr [esp+0x8C]
	mov eax,dword ptr [esp+0x84]
	mov edi,dword ptr [esp+0x78]
	mov ebp,dword ptr [esp+0x74]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+8]
	push eax
	mov eax,dword ptr [esp+0x80]
	mov dword ptr [esi+0x7C],ecx
	mov ecx,dword ptr [esp+0x84]
	push ecx
	mov ecx,dword ptr [esp+0x78]
	push eax
	mov eax,dword ptr [esp+0x78]
	push edi
	push ebp
	push ecx
	push eax
	mov ecx,esi
	call edx
	xor ebx,ebx
	cmp dword ptr [esi+0x18],ebx
	sete al
	test al,al
	je Block62

 Block1:
	lea eax,[esp+0x2C]
	mov dword ptr [esi+0x24],ebp
	mov ebp,dword ptr [ZImports::_VariantInit]
	push eax
	mov dword ptr [esi+0x28],edi
	call ebp
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	mov edx,3
	mov dword ptr [esp+0x64],ebx
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x64],1
	cmp ecx,ebx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea eax,[esp+0x2C]
	push eax
	lea edx,[esp+0x20]
	push edx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea eax,[esp+0xA8]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x18]
	cmp edi,eax
	je Block10

 Block6:
	mov dword ptr [esi+0x18],eax
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	cmp edi,ebx
	je Block10

 Block9:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block10:
	mov eax,dword ptr [esp+0x8C]
	cmp eax,ebx
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block12:
	mov edi,8
	mov byte ptr [esp+0x64],0
	cmp word ptr [esp+0x1C],di
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov dword ptr [esp+0x64],0xFFFFFFFF
	cmp word ptr [esp+0x2C],di
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebx
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov edx,dword ptr [esi+0x7C]
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push edx
	lea eax,[esp+0x84]
	push eax
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov ebx,2
	mov ecx,0xD
	mov dword ptr [esp+0x64],ebx
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block22

 Block21:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block22:
	mov ecx,dword ptr [esi+0x18]
	mov byte ptr [esp+0x64],3
	test ecx,ecx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea edx,[esp+0x8C]
	push edx
	call IWzGr2DLayer::Getlt
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x64],4
	test edi,edi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
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
	jge Block28

 Block27:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block28:
	mov eax,dword ptr [esp+0x8C]
	mov byte ptr [esp+0x64],3
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x64],bl
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov eax,dword ptr [esp+0x80]
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0x64],edi
	test eax,eax
	je Block36

 Block35:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block36:
	lea ecx,[esp+0x4C]
	push ecx
	call ebp
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	lea eax,[esp+0x3C]
	push eax
	mov dword ptr [esp+0x68],5
	call ebp
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	mov ecx,dword ptr [esi+0x18]
	mov bl,6
	mov byte ptr [esp+0x64],bl
	test ecx,ecx
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	lea edx,[esp+0x78]
	push edx
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x64],7
	test ecx,ecx
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	lea eax,[esp+0x4C]
	push eax
	mov eax,dword ptr [esp+0x74]
	lea edx,[esp+0x40]
	push edx
	mov edx,dword ptr [esp+0x74]
	push eax
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x64],bl
	test eax,eax
	je Block46

 Block45:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block46:
	mov ebx,8
	mov byte ptr [esp+0x64],5
	cmp word ptr [esp+0x3C],bx
	jne Block49

 Block47:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov dword ptr [esp+0x64],edi
	cmp word ptr [esp+0x4C],bx
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov edi,dword ptr [esi+0x18]
	test edi,edi
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	mov edx,dword ptr [esp+0x7C]
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0xB4]
	push edx
	push edi
	call eax
	test eax,eax
	jge Block58

 Block57:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block58:
	mov edi,dword ptr [esi+0x18]
	test edi,edi
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push edi
	call edx
	test eax,eax
	jge Block62

 Block61:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block62:
	mov ecx,dword ptr [esp+0x84]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xC]
	push ecx
	mov ecx,esi
	call edx
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	push esi
	call CWndMan::InsertWindow
	add esp,4
	cmp dword ptr [esp+0x88],0
	je Block64

 Block63:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	lea eax,[esi+4]
	push eax
	call CWndMan::SetFocus

 Block64:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 0
	lea eax,[esp+0x18]
	push eax
	call CWndMan::GetCursorPos
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push edx
	call CWndMan::GetHandlerFromPoint
	mov esi,eax
	test esi,esi
	je Block67

 Block65:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	mov ecx,esi
	call edx
	test eax,eax
	je Block67

 Block66:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	push 1
	mov ecx,esi
	call edx

 Block67:
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret 0x24
}
}
// CWnd::RemoveChild
__SUB_CLASS_THIS(005AECC0, __thiscall, 4995,  CWnd, void, CCtrlWnd*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	cmp eax,dword ptr [esi+0x74]
	jne Block2

 Block1:
	mov dword ptr [esi+0x74],0

 Block2:
	push eax
	call CWnd::FindChild
	push eax
	lea ecx,[esi+0x60]
	call ZList<ZRef<CCtrlWnd>>::RemoveAt
	pop esi
	ret 4
}
}
// CWnd::OnCreate
__SUB_CLASS_THIS(00029A00, __thiscall, 4975,  CWnd, void, void*) {
__asm {

 Block0:
	ret 4
}
}
// CWnd::ClipRect
_SUB_EXCEPTION_HANDLER(5AE850)
__SUB_CLASS_THIS(005AE850, __thiscall, 4993,  CWnd, Ztl_variant_t, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5AE850
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebx
	push ebp
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	lea eax,[esp+0x14]
	xor ebx,ebx
	push eax
	mov dword ptr [esp+0x14],ebx
	call CWnd::GetCanvas
	mov ebp,dword ptr [esp+0x14]
	mov dword ptr [esp+0x40],ebx
	cmp ebp,ebx
	je Block2

 Block1:
	mov ecx,3
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],1
	mov eax,dword ptr [esp+0x4C]
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [eax]
	lea esi,[esp+0x18]
	push esi
	mov esi,dword ptr [eax+0xC]
	mov eax,dword ptr [eax+8]
	sub esi,ecx
	push esi
	sub eax,edx
	push eax
	push ecx
	push edx
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x58],1
	mov dword ptr [esp+0x28],1
	call IWzCanvas::SetClipRect
	mov esi,eax
	mov ebx,3
	mov dword ptr [esp+0x40],2
	mov dword ptr [esp+0x10],ebx
	jmp Block3

 Block2:
	mov esi,offset _D_VTEMPTY

 Block3:
	mov edx,dword ptr [esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantInit]
	mov eax,dword ptr [esp+0x48]
	push esi
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov esi,dword ptr [ZImports::_VariantClear]
	or ebx,4
	mov dword ptr [esp+0x40],1
	test bl,2
	je Block10

 Block6:
	and ebx,0xFFFFFFFD
	cmp word ptr [esp+0x28],8
	mov dword ptr [esp+0x10],ebx
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x28]
	push edx
	call esi

 Block10:
	mov dword ptr [esp+0x40],0
	test bl,1
	je Block15

 Block11:
	cmp word ptr [esp+0x18],8
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x18]
	push ecx
	call esi

 Block15:
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test ebp,ebp
	je Block17

 Block16:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block17:
	mov eax,dword ptr [esp+0x48]
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret 8
}
}
// CWnd::OnChildNotify
__SUB_CLASS_THIS(00029260, __thiscall, 4978,  CWnd, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+8],0x64
	jne Block2

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [eax+0x20]
	push edx
	call eax

 Block2:
	ret 0xC
}
}
// CWnd::GetCanvas
_SUB_EXCEPTION_HANDLER(2B170)
__SUB_CLASS_THIS0(0002B170, __thiscall, 4991,  CWnd, _x_com_ptr<IWzCanvas>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2B170
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	cmp dword ptr [ecx+0x20],ebx
	mov dword ptr [esp+0xC],ebx
	sete al
	cmp al,bl
	je Block6

 Block1:
	mov eax,3
	mov word ptr [esp+0x10],ax
	mov dword ptr [esp+0x18],ebx
	mov ecx,dword ptr [ecx+0x18]
	mov dword ptr [esp+0x38],ebx
	cmp ecx,ebx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov esi,dword ptr [esp+0x40]
	lea edx,[esp+0x10]
	push edx
	push esi
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x10],8
	mov dword ptr [esp+0x38],0xFFFFFFFF
	jne Block5

 Block4:
	xor eax,eax
	mov word ptr [esp+0x10],ax
	mov eax,dword ptr [esp+0x18]
	jmp Block10

 Block5:
	lea ecx,[esp+0x10]
	push ecx
	jmp Block13

 Block6:
	mov edx,3
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],ebx
	mov ecx,dword ptr [ecx+0x20]
	mov dword ptr [esp+0x38],1
	cmp ecx,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov esi,dword ptr [esp+0x40]
	lea eax,[esp+0x20]
	push eax
	push esi
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x20],8
	mov dword ptr [esp+0x38],0xFFFFFFFF
	jne Block12

 Block9:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx

 Block10:
	cmp eax,ebx
	je Block14

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block12:
	lea edx,[esp+0x20]
	push edx

 Block13:
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov eax,esi
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x30
	ret 4
}
}
// CWnd::SetFocusChild
__SUB_CLASS_THIS(005AECF0, __thiscall, 4995,  CWnd, void, CCtrlWnd*) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push edi
	push esi
	mov edi,ecx
	call CWnd::FindChild
	test eax,eax
	je Block4

 Block1:
	test esi,esi
	je Block3

 Block2:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CCtrlComboBoxSelect::ms_RTTI_CCtrlComboBoxSelect
	call edx
	test eax,eax
	jne Block4

 Block3:
	mov dword ptr [edi+0x74],esi

 Block4:
	pop edi
	pop esi
	ret 4
}
}
// CWnd::OnMouseWheel
__SUB_CLASS_THIS(005AE4D0, __thiscall, 4962,  IUIMsgHandler, int32_t, long, long, long) {
__asm {

 Block0:
	sub esp,0xC
	mov ecx,dword ptr [ecx+0x68]
	push ebx
	push ebp
	push esi
	push edi
	mov dword ptr [esp+0x18],ecx
	test ecx,ecx
	je Block11

 Block1:
	lea eax,[esp+0x18]
	push eax
	call ZList<ZRef<CCtrlWnd>>::GetNext
	mov edi,dword ptr [eax+4]
	add esp,4
	test edi,edi
	je Block10

 Block2:
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x48]
	lea ebx,[edi+4]
	push offset CCtrlScrollBar::ms_RTTI_CCtrlScrollBar
	mov ecx,ebx
	call eax
	test eax,eax
	je Block10

 Block3:
	mov esi,dword ptr [edi+0x18]
	test esi,esi
	je Block12

 Block4:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0x10]
	push edx
	push esi
	mov dword ptr [esp+0x18],0
	call eax
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov esi,dword ptr [edi+0x18]
	mov ebp,dword ptr [esp+0x10]
	test esi,esi
	je Block12

 Block7:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x68]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block9:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [ebx]
	mov edx,dword ptr [edx+0x10]
	push eax
	mov eax,dword ptr [esp+0x24]
	sub eax,dword ptr [esp+0x18]
	sub ecx,ebp
	push ecx
	push eax
	mov ecx,ebx
	call edx
	test eax,eax
	jne Block11

 Block10:
	cmp dword ptr [esp+0x18],0
	jne Block1

 Block11:
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,0xC
	ret 0xC

 Block12:
	push 0x80004003
	call _com_issue_error
}
}
// CWnd::OnSetFocus
__SUB_CLASS_THIS(005AD3A0, __thiscall, 4956,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	push esi
	mov esi,ecx
	je Block5

 Block1:
	mov eax,dword ptr [esi+0x70]
	test eax,eax
	je Block5

 Block2:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	add eax,4
	push eax
	call CWndMan::SetFocus
	mov eax,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	cmp dword ptr [eax+0xA0],0
	je Block4

 Block3:
	xor eax,eax
	pop esi
	ret 4

 Block4:
	mov dword ptr [esi+0x70],0

 Block5:
	mov eax,1
	pop esi
	ret 4
}
}
// CWnd::OnMouseEnter
__SUB_CLASS_THIS(005AD370, __thiscall, 4963,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	je Block3

 Block1:
	cmp dword ptr [ecx+0x9C4],0
	je Block3

 Block2:
	mov dword ptr [esp+4],0
	jmp  CInputSystem::SetCursorState

 Block3:
	ret 4
}
}
// CWnd::GetAbsTop
_SUB_EXCEPTION_HANDLER(5AD570)
__SUB_CLASS_THIS0(005AD570, __thiscall, 4968,  IUIMsgHandler, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5AD570
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 0
	lea eax,[esp+0x1C]
	push eax
	call CWndMan::GetOrgWindow
	mov ebx,eax
	mov esi,dword ptr [esi+0x14]
	mov dword ptr [esp+0x24],0
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[esp+0x10]
	push edx
	push esi
	mov dword ptr [esp+0x18],0
	call eax
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov esi,dword ptr [ebx]
	mov edi,dword ptr [esp+0x10]
	test esi,esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov eax,dword ptr [esp+0x18]
	sub edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,edi
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x18
	ret
}
}
// CWnd::PreCreateWnd
_SUB_EXCEPTION_HANDLER(5ADDC0)
__SUB_CLASS_THIS(005ADDC0, __thiscall, 4974,  CWnd, void, long, long, long, long, long, int32_t, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5ADDC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x70
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x84]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x18],ecx
	mov esi,dword ptr [esp+0x9C]
	mov eax,dword ptr [esp+0xA8]
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov dword ptr [ecx+0x3C],eax
	cmp esi,ebp
	je Block9

 Block1:
	cmp dword ptr [esp+0xA0],ebp
	je Block9

 Block2:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x54]
	push ecx
	call ebx
	lea edx,[esp+0x54]
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
	lea eax,[esp+0x44]
	mov edi,1
	push eax
	mov dword ptr [esp+0x90],ebp
	mov dword ptr [esp+0x18],edi
	call ebx
	lea ecx,[esp+0x44]
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
	mov ecx,dword ptr [_D_G_GR]
	mov dword ptr [esp+0x8C],edi
	mov dword ptr [esp+0x14],3
	cmp ecx,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[esp+0x54]
	push edx
	mov edx,dword ptr [esp+0xA4]
	lea eax,[esp+0x48]
	push eax
	push ebp
	push edx
	push esi
	push ebp
	push ebp
	lea eax,[esp+0x3C]
	push eax
	call IWzGr2D::CreateLayer
	mov dword ptr [esp+0x8C],2
	mov ebx,7
	jmp Block14

 Block9:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov eax,3
	mov word ptr [esp+0x24],ax
	mov dword ptr [esp+0x2C],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov dword ptr [esp+0x8C],4
	mov dword ptr [esp+0x14],0x18
	cmp ecx,ebp
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	lea edx,[esp+0x38]
	push edx
	call IWzGr2D::CreateLayer
	mov ebx,0x38
	lea edi,[ebx-0x37]

 Block14:
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ecx+0x18]
	mov dword ptr [esp+0x14],ebx
	cmp esi,eax
	je Block19

 Block15:
	mov edx,ecx
	mov dword ptr [edx+0x18],eax
	cmp eax,ebp
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block17:
	cmp esi,ebp
	je Block19

 Block18:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block19:
	test bl,0x20
	je Block22

 Block20:
	mov eax,dword ptr [esp+0x1C]
	and ebx,0xFFFFFFDF
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block22

 Block21:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block22:
	mov dword ptr [esp+0x8C],3
	mov esi,8
	test bl,0x10
	je Block27

 Block23:
	and ebx,0xFFFFFFEF
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x24],si
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,ebp
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov dword ptr [esp+0x8C],2
	test bl,8
	je Block32

 Block28:
	and ebx,0xFFFFFFF7
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x34],si
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebp
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov dword ptr [esp+0x8C],edi
	test bl,4
	je Block35

 Block33:
	mov eax,dword ptr [esp+0x20]
	and ebx,0xFFFFFFFB
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block35

 Block34:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block35:
	mov dword ptr [esp+0x8C],ebp
	test bl,2
	je Block40

 Block36:
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x44],si
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,ebp
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0x8C],edi
	test bl,1
	je Block45

 Block41:
	cmp word ptr [esp+0x54],si
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebp
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	cmp dword ptr [esp+0xA8],ebp
	je Block63

 Block46:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [edx+0x7C]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov edx,0xD
	mov dword ptr [esp+0x8C],5
	mov word ptr [esp+0x24],dx
	mov dword ptr [esp+0x2C],eax
	cmp eax,ebp
	je Block48

 Block47:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block48:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0x18]
	mov bl,6
	mov byte ptr [esp+0x8C],bl
	cmp ecx,ebp
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea edx,[esp+0x20]
	push edx
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x8C],7
	cmp esi,ebp
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebp
	jge Block54

 Block53:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block54:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x8C],bl
	cmp eax,ebp
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block56:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x8C],5
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebp
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x8C],edi
	cmp eax,ebp
	je Block62

 Block61:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block62:
	mov esi,8

 Block63:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x74]
	push ecx
	call ebx
	lea edx,[esp+0x74]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	lea eax,[esp+0x64]
	push eax
	mov dword ptr [esp+0x90],esi
	call ebx
	lea ecx,[esp+0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	mov edi,dword ptr [esp+0x18]
	mov ecx,dword ptr [edi+0x18]
	mov bl,9
	mov byte ptr [esp+0x8C],bl
	cmp ecx,ebp
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea edx,[esp+0x14]
	push edx
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x8C],0xA
	cmp ecx,ebp
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	lea eax,[esp+0x74]
	push eax
	mov eax,dword ptr [esp+0x9C]
	lea edx,[esp+0x68]
	push edx
	mov edx,dword ptr [esp+0x9C]
	push eax
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x8C],bl
	cmp eax,ebp
	je Block73

 Block72:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block73:
	mov byte ptr [esp+0x8C],8
	cmp word ptr [esp+0x64],si
	jne Block76

 Block74:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	cmp eax,ebp
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block77:
	mov dword ptr [esp+0x8C],0xFFFFFFFF
	cmp word ptr [esp+0x74],si
	jne Block80

 Block78:
	mov eax,dword ptr [esp+0x7C]
	xor edx,edx
	mov word ptr [esp+0x74],dx
	cmp eax,ebp
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea eax,[esp+0x74]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov esi,dword ptr [edi+0x18]
	cmp esi,ebp
	jne Block83

 Block82:
	push 0x80004003
	call _com_issue_error

 Block83:
	mov edx,dword ptr [esp+0xA4]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xB4]
	push edx
	push esi
	call eax
	cmp eax,ebp
	jge Block85

 Block84:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block85:
	mov esi,dword ptr [edi+0x18]
	cmp esi,ebp
	jne Block87

 Block86:
	push 0x80004003
	call _com_issue_error

 Block87:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push esi
	call edx
	cmp eax,ebp
	jge Block89

 Block88:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block89:
	mov eax,dword ptr [esp+0x9C]
	mov ecx,dword ptr [esp+0xA0]
	mov dword ptr [edi+0x24],eax
	mov dword ptr [edi+0x28],ecx
	mov ecx,dword ptr [esp+0x84]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x7C
	ret 0x1C
}
}
// CWnd::OnActivate
__SUB_CLASS_THIS(005AD350, __thiscall, 4985,  CWnd, int32_t, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	je Block2

 Block1:
	push ecx
	call CWndMan::UpdateWindowPosition
	add esp,4

 Block2:
	mov eax,1
	ret 4
}
}
// CWnd::OnMouseButton
__SUB_CLASS_THIS(00029250, __thiscall, 4958,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	ret 0x10
}
}
// CWnd::SetBackgrnd
_SUB_EXCEPTION_HANDLER(5AFEB0)
__SUB_CLASS_THIS(005AFEB0, __thiscall, 5018,  CWnd, void, NakedParam<Ztl_bstr_t>, long, long, int32_t, long, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x5C]
	sub esp,0x5C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5AFEB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x58],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x54],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x10]
	xor ebx,ebx
	push eax
	mov dword ptr [ebp-4],ebx
	call esi
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp]
	push edx
	mov byte ptr [ebp-4],1
	call esi
	lea eax,[ebp]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push ebx
	push ebx
	lea ecx,[ebp+0x10]
	push ecx
	lea edx,[ebp]
	push edx
	push ecx
	mov ecx,dword ptr [ebp+0x64]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x64]
	mov dword ptr [ebp+0x4C],esp
	cmp eax,ebx
	je Block6

 Block5:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov byte ptr [ebp-4],3
	cmp dword ptr [_D_G_RM],ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[ebp-0x3C]
	mov byte ptr [ebp-4],2
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x34]
	mov dword ptr [ebp+0x34],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x3C],di
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	cmp eax,ebx
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[ebp-0x3C]
	push ecx
	call esi

 Block15:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp],di
	jne Block18

 Block16:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	cmp eax,ebx
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[ebp]
	push eax
	call esi

 Block19:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp+0x10],di
	jne Block22

 Block20:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	cmp eax,ebx
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[ebp+0x10]
	push edx
	call esi

 Block23:
	mov esi,dword ptr [ebp+0x34]
	cmp esi,ebx
	sete al
	cmp al,bl
	sete al
	cmp al,bl
	je Block90

 Block24:
	lea eax,[ebp+0x4C]
	push 0x3D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp+0x54]
	mov eax,dword ptr [eax]
	add ecx,0x78
	push ebx
	push ecx
	push eax
	mov byte ptr [ebp-4],9
	call PcCreate_IWzCanvas
	mov eax,dword ptr [ebp+0x4C]
	add esp,0xC
	mov byte ptr [ebp-4],8
	cmp eax,ebx
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block26:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x38]
	push ecx
	call edi
	lea edx,[ebp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	lea eax,[ebp+0x24]
	push eax
	mov byte ptr [ebp-4],0xA
	call edi
	lea ecx,[ebp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov byte ptr [ebp-4],0xB
	cmp esi,ebx
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[ebp+0x50]
	push eax
	push esi
	mov dword ptr [ebp+0x50],ebx
	call ecx
	cmp eax,ebx
	jge Block34

 Block33:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block34:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	mov edi,dword ptr [ebp+0x50]
	lea eax,[ebp+0x48]
	push eax
	push esi
	mov dword ptr [ebp+0x48],ebx
	call ecx
	cmp eax,ebx
	jge Block36

 Block35:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block36:
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [eax+0x78]
	add eax,0x78
	cmp ecx,ebx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea edx,[ebp+0x38]
	push edx
	mov edx,dword ptr [ebp+0x78]
	lea eax,[ebp+0x24]
	push eax
	mov eax,dword ptr [ebp+0x74]
	add edi,edx
	mov edx,dword ptr [ebp+0x48]
	push edi
	add edx,eax
	push edx
	call IWzCanvas::Create
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0xA
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	cmp eax,ebx
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov edi,8
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp+0x38],di
	jne Block45

 Block43:
	mov eax,dword ptr [ebp+0x40]
	xor edx,edx
	mov word ptr [ebp+0x38],dx
	cmp eax,ebx
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[ebp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	lea ecx,[ebp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [eax+0x78]
	add eax,0x78
	mov byte ptr [ebp-4],0xC
	cmp ecx,ebx
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea eax,[ebp+0x38]
	push eax
	push esi
	push ebx
	push ebx
	call IWzCanvas::Copy
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp+0x38],di
	jne Block53

 Block51:
	mov eax,dword ptr [ebp+0x40]
	xor ecx,ecx
	mov word ptr [ebp+0x38],cx
	cmp eax,ebx
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[ebp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	cmp dword ptr [ebp+0x70],ebx
	je Block92

 Block55:
	mov dword ptr [ebp+0x50],2

 Block56:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x24]
	push eax
	call esi
	lea ecx,[ebp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block1

 Block57:
	lea edx,[ebp+0x38]
	push edx
	mov byte ptr [ebp-4],0xD
	call esi
	lea eax,[ebp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block1

 Block58:
	mov eax,0x20
	mov byte ptr [ebp-4],0xE
	call __chkstk
	mov eax,esp
	push ebx
	push ebx
	lea ecx,[ebp+0x24]
	push ecx
	lea edx,[ebp+0x38]
	push edx
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x50]
	push eax
	call __itow
	add esp,0xC
	push eax
	lea ecx,[ebp+0x48]
	push ecx
	lea ecx,[ebp+0x64]
	call Ztl_bstr_t::op_add_1
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x40],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block60

 Block59:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block60:
	mov byte ptr [ebp-4],0x10
	cmp dword ptr [_D_G_RM],ebx
	je Block7

 Block61:
	lea edx,[ebp-0x2C]
	mov byte ptr [ebp-4],0xF
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x11
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x34]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block63

 Block62:
	cmp eax,0x80004002
	jne Block1

 Block63:
	mov esi,8
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x2C],si
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	cmp eax,ebx
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov ecx,dword ptr [ebp+0x48]
	cmp ecx,ebx
	je Block69

 Block68:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp+0x48],ebx

 Block69:
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp+0x38],si
	jne Block72

 Block70:
	mov eax,dword ptr [ebp+0x40]
	xor edx,edx
	mov word ptr [ebp+0x38],dx
	cmp eax,ebx
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea eax,[ebp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp+0x24],si
	jne Block76

 Block74:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	cmp eax,ebx
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block77:
	mov esi,dword ptr [ebp+0x34]
	cmp esi,ebx
	sete al
	cmp al,bl
	jne Block92

 Block78:
	mov eax,3
	mov word ptr [ebp-0x1C],ax
	mov dword ptr [ebp-0x14],0xFF
	mov byte ptr [ebp-4],0x12
	cmp esi,ebx
	je Block7

 Block79:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x74]
	lea edx,[ebp+0x20]
	push edx
	push esi
	mov dword ptr [ebp+0x20],ebx
	call eax
	cmp eax,ebx
	jge Block81

 Block80:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block81:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x6C]
	mov edi,dword ptr [ebp+0x20]
	lea edx,[ebp+0x4C]
	push edx
	push esi
	mov dword ptr [ebp+0x4C],ebx
	call eax
	cmp eax,ebx
	jge Block83

 Block82:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block83:
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [eax+0x78]
	add eax,0x78
	cmp ecx,ebx
	je Block7

 Block84:
	mov eax,dword ptr [ebp+0x4C]
	lea edx,[ebp-0x1C]
	push edx
	push esi
	neg edi
	push edi
	neg eax
	push eax
	call IWzCanvas::Copy
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],8
	jne Block87

 Block85:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,ebx
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block88:
	mov eax,dword ptr [ebp+0x50]
	inc eax
	cmp eax,5
	mov dword ptr [ebp+0x50],eax
	jl Block56

 Block89:
	jmp Block92

 Block90:
	mov ecx,dword ptr [ebp+0x54]
	mov eax,dword ptr [ecx+0x78]
	cmp eax,ebx
	je Block92

 Block91:
	mov dword ptr [ecx+0x78],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block92:
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [ebp+0x68]
	mov edx,dword ptr [ebp+0x6C]
	mov dword ptr [eax+0x40],ecx
	mov dword ptr [eax+0x44],edx
	mov byte ptr [ebp-4],bl
	cmp esi,ebx
	je Block94

 Block93:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block94:
	mov esi,dword ptr [ebp+0x64]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp esi,ebx
	je Block102

 Block95:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block102

 Block96:
	cmp esi,ebx
	je Block102

 Block97:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block99

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block99:
	mov eax,dword ptr [esi+4]
	cmp eax,ebx
	je Block101

 Block100:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block101:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block102:
	lea esp,[ebp-0x50]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x58]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x5C
	mov esp,ebp
	pop ebp
	ret 0x18
}
}
// CWnd::InvalidateRect
__SUB_CLASS_THIS(005AD3F0, __thiscall, 4998,  CWnd, void, const tagRECT*) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	test ecx,ecx
	jne Block2

 Block1:
	mov eax,dword ptr [esi+0x28]
	mov ecx,dword ptr [esi+0x24]
	push eax
	push ecx
	push 0
	push 0
	lea edx,[esi+0x2C]
	push edx
	call SetRect
	push esi
	call CWndMan::InsertInvalidatedWindow
	add esp,4
	pop esi
	ret 4

 Block2:
	lea eax,[esi+0x2C]
	push ecx
	push eax
	push eax
	call UnionRect
	push esi
	call CWndMan::InsertInvalidatedWindow
	add esp,4
	pop esi
	ret 4
}
}
// CWnd::GetAbsLeft
_SUB_EXCEPTION_HANDLER(5AD480)
__SUB_CLASS_THIS0(005AD480, __thiscall, 4968,  IUIMsgHandler, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5AD480
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 0
	lea eax,[esp+0x1C]
	push eax
	call CWndMan::GetOrgWindow
	mov ebx,eax
	mov esi,dword ptr [esi+0x14]
	mov dword ptr [esp+0x24],0
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x10]
	push edx
	push esi
	mov dword ptr [esp+0x18],0
	call eax
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov esi,dword ptr [ebx]
	mov edi,dword ptr [esp+0x10]
	test esi,esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov eax,dword ptr [esp+0x18]
	sub edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,edi
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x18
	ret
}
}
// CWnd::Draw
_SUB_EXCEPTION_HANDLER(5AE5C0)
__SUB_CLASS_THIS(005AE5C0, __thiscall, 4998,  CWnd, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5AE5C0
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
	xor ebx,ebx
	cmp dword ptr [esi+0x78],ebx
	je Block11

 Block1:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x40],ebx
	call CWnd::GetCanvas
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [esi+0x78]
	mov byte ptr [esp+0x3C],1
	cmp ecx,ebx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea eax,[esp+0x24]
	push eax
	mov eax,dword ptr [esi+0x40]
	push edx
	mov edx,dword ptr [esi+0x44]
	push edx
	push eax
	call IWzCanvas::Copy
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x3C],bl
	cmp eax,ebx
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	cmp word ptr [esp+0x24],8
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	jne Block10

 Block8:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebx
	je Block26

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block10:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block26

 Block11:
	cmp dword ptr [esi+0x20],ebx
	sete al
	cmp al,bl
	sete al
	cmp al,bl
	je Block26

 Block12:
	lea edx,[esp+0x20]
	push edx
	call CWnd::GetCanvas
	mov dword ptr [esp+0x1C],eax
	mov edi,dword ptr [esi+0x20]
	mov dword ptr [esp+0x3C],2
	cmp edi,ebx
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xC0]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block16

 Block15:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block16:
	mov edi,dword ptr [esi+0x20]
	mov ebp,dword ptr [esp+0x14]
	cmp edi,ebx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xB8]
	lea ecx,[esp+0x18]
	push ecx
	push edi
	mov dword ptr [esp+0x20],ebx
	call edx
	cmp eax,ebx
	jge Block20

 Block19:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block20:
	mov eax,dword ptr [esp+0x1C]
	mov edi,dword ptr [eax]
	cmp edi,ebx
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	mov eax,dword ptr [esi+0x44]
	mov edx,dword ptr [esp+0x18]
	mov esi,dword ptr [esi+0x40]
	mov ecx,dword ptr [edi]
	push 0xFFFFFF
	push ebp
	push edx
	push eax
	mov eax,dword ptr [ecx+0x8C]
	push esi
	push edi
	call eax
	cmp eax,ebx
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block24:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp eax,ebx
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 4
}
}
// CWnd::OnEndMoveWnd
__SUB_CLASS_THIS0(005AECA0, __thiscall, 4954,  CWnd, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push 0xFFFFFFFF
	lea ecx,[esi+0x54]
	call TSecType<long>::SetData
	push 0xFFFFFFFF
	lea ecx,[esi+0x48]
	call TSecType<long>::SetData
	pop esi
	ret
}
}
// CWnd::IsKindOf
__SUB_CLASS_THIS(0006DB80, __thiscall, 5022,  CWnd, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CWnd::ms_RTTI_CWnd
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
// CWnd::OnMoveWnd
_SUB_EXCEPTION_HANDLER(5AEE10)
__SUB_CLASS_THIS(005AEE10, __thiscall, 4976,  CWnd, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5AEE10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x9C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xB0]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],0
	je Block106

 Block1:
	mov eax,0x80000000
	cmp dword ptr [esp+0xC0],eax
	jne Block3

 Block2:
	cmp dword ptr [esp+0xC4],eax
	je Block106

 Block3:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 0
	lea eax,[esp+0x2C]
	push eax
	call CWndMan::GetCursorPos
	mov edx,dword ptr [ebp+4]
	mov eax,dword ptr [edx+0x2C]
	lea edi,[ebp+4]
	mov ecx,edi
	call eax
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [edi]
	sub ecx,eax
	mov eax,dword ptr [edx+0x30]
	mov dword ptr [esp+0x6C],ecx
	mov ecx,edi
	call eax
	mov ecx,dword ptr [esp+0x2C]
	sub ecx,eax
	mov dword ptr [esp+0x70],ecx
	lea esi,[ebp+0x54]
	mov ecx,esi
	call TSecType<long>::GetData
	cmp eax,0xFFFFFFFF
	jne Block6

 Block4:
	lea ebx,[ebp+0x48]
	mov ecx,ebx
	call TSecType<long>::GetData
	cmp eax,0xFFFFFFFF
	jne Block6

 Block5:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	mov ecx,dword ptr [esp+0x28]
	sub ecx,eax
	push ecx
	mov ecx,esi
	call TSecType<long>::SetData
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x30]
	mov ecx,edi
	call eax
	mov ecx,dword ptr [esp+0x2C]
	sub ecx,eax
	push ecx
	mov ecx,ebx
	call TSecType<long>::SetData

 Block6:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,ebp
	call CWnd::GetLayer
	mov esi,eax
	lea edx,[esp+0x1C]
	xor ebx,ebx
	push edx
	mov ecx,ebp
	mov dword ptr [esp+0xBC],ebx
	call CWnd::GetLayer
	mov dword ptr [esp+0x24],eax
	mov esi,dword ptr [esi]
	mov byte ptr [esp+0xB8],1
	cmp esi,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xB8]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],ebx
	call edx
	cmp eax,ebx
	jge Block10

 Block9:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov eax,dword ptr [esp+0x24]
	mov esi,dword ptr [eax]
	mov ebx,dword ptr [esp+0x18]
	test esi,esi
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xB8]
	lea edx,[esp+0x24]
	push edx
	push esi
	mov dword ptr [esp+0x2C],0
	call eax
	test eax,eax
	jge Block14

 Block13:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x30]
	mov esi,dword ptr [esp+0x24]
	mov ecx,edi
	call eax
	mov edx,dword ptr [edi]
	add eax,ebx
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	mov edx,dword ptr [edi]
	add eax,esi
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,edi
	call eax
	mov edx,dword ptr [edi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	push eax
	lea ecx,[esp+0xA0]
	push ecx
	call SetRect
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB8],0
	test eax,eax
	je Block16

 Block15:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block16:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov eax,dword ptr [CWndMan::ms_lpWindow+12]
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block84

 Block19:
	lea eax,[esp+0x24]
	push eax
	call ZList<CWnd *>::GetNext
	mov esi,dword ptr [eax]
	add esp,4
	mov dword ptr [esp+0x18],esi
	test esi,esi
	je Block83

 Block20:
	cmp esi,ebp
	je Block83

 Block21:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+0x30]
	push esi
	mov ecx,ebp
	call eax
	test eax,eax
	jne Block83

 Block22:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],esi
	je Block83

 Block23:
	mov eax,dword ptr [TSingleton<CUIEquip>::ms_pInstance]
	test eax,eax
	je Block27

 Block24:
	cmp eax,ebp
	jne Block27

 Block25:
	mov eax,dword ptr [TSingleton<CUIPetEquip>::ms_pInstance]
	test eax,eax
	je Block27

 Block26:
	cmp eax,esi
	je Block83

 Block27:
	lea ecx,[esp+0x88]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov ebx,eax
	lea edx,[esp+0x50]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0xBC],2
	call CWnd::GetLayer
	mov ebx,dword ptr [ebx]
	mov byte ptr [esp+0xB8],3
	test ebx,ebx
	je Block7

 Block28:
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block7

 Block29:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x30]
	add esi,4
	mov ecx,esi
	call edx
	mov ecx,ebx
	mov dword ptr [esp+0x14],eax
	call IWzGr2DLayer::Getheight
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esi]
	lea eax,[ecx+eax+0xA]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x20]
	mov ebx,eax
	call IWzGr2DLayer::Getwidth
	mov edx,dword ptr [esi]
	lea ecx,[ebx+eax+0xA]
	mov eax,dword ptr [edx+0x30]
	push ecx
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	sub eax,0xA
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	sub eax,0xA
	push eax
	lea ecx,[esp+0x88]
	push ecx
	call SetRect
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0xB8],2
	test eax,eax
	je Block31

 Block30:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block31:
	mov eax,dword ptr [esp+0x88]
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block33:
	lea eax,[esp+0x78]
	push eax
	lea ecx,[esp+0x94]
	push ecx
	lea edx,[esp+0xA8]
	push edx
	call IntersectRect
	test eax,eax
	je Block83

 Block34:
	mov ecx,dword ptr [esp+0x18]
	lea eax,[esp+0x64]
	push eax
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0xB8],4
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block7

 Block35:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	mov edx,dword ptr [esi]
	mov ebx,eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x14]
	sub ebx,eax
	call IWzGr2DLayer::Getwidth
	sub ebx,eax
	mov eax,ebx
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,0xA
	mov eax,dword ptr [esp+0x64]
	setle bl
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	test bl,bl
	je Block40

 Block38:
	mov ecx,dword ptr [esp+0x18]
	lea eax,[esp+0x38]
	push eax
	call CWnd::GetLayer
	mov ebx,dword ptr [eax]
	mov dword ptr [esp+0xB8],5
	test ebx,ebx
	je Block7

 Block39:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x30]
	mov ecx,edi
	call eax
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	mov ecx,ebx
	mov dword ptr [esp+0x18],eax
	call IWzGr2DLayer::Getwidth
	mov ecx,dword ptr [esp+0x18]
	add ecx,eax
	push ecx
	mov ecx,ebp
	call CWnd::MoveWndToAbsPos
	mov eax,dword ptr [esp+0x38]
	jmp Block45

 Block40:
	lea eax,[esp+0x60]
	push eax
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0xB8],6
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block7

 Block41:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	mov edx,dword ptr [esi]
	mov ebx,eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x14]
	sub ebx,eax
	call IWzGr2DLayer::Getwidth
	add eax,ebx
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,0xA
	mov eax,dword ptr [esp+0x60]
	setle bl
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	test eax,eax
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block43:
	test bl,bl
	je Block47

 Block44:
	lea eax,[esp+0x40]
	push eax
	mov ecx,ebp
	call CWnd::GetLayer
	mov ebx,eax
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x30]
	mov ecx,edi
	mov dword ptr [esp+0xB8],7
	call eax
	push eax
	mov ecx,ebx
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getwidth
	mov edx,dword ptr [esi]
	mov ebx,eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	sub eax,ebx
	push eax
	mov ecx,ebp
	call CWnd::MoveWndToAbsPos
	mov eax,dword ptr [esp+0x40]

 Block45:
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	test eax,eax
	je Block47

 Block46:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block47:
	mov ecx,dword ptr [esp+0x18]
	lea eax,[esp+0x8C]
	push eax
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0xB8],8
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block7

 Block48:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x30]
	mov ecx,edi
	call eax
	mov edx,dword ptr [esi]
	mov ebx,eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x14]
	sub ebx,eax
	call IWzGr2DLayer::Getheight
	sub ebx,eax
	mov eax,ebx
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,0xA
	mov eax,dword ptr [esp+0x8C]
	setle bl
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	test eax,eax
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block50:
	test bl,bl
	je Block53

 Block51:
	mov ecx,dword ptr [esp+0x18]
	lea eax,[esp+0x48]
	push eax
	call CWnd::GetLayer
	mov ebx,dword ptr [eax]
	mov dword ptr [esp+0xB8],9
	test ebx,ebx
	je Block7

 Block52:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov ecx,ebx
	mov dword ptr [esp+0x14],eax
	call IWzGr2DLayer::Getheight
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [edi]
	add ecx,eax
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,edi
	call eax
	push eax
	mov ecx,ebp
	call CWnd::MoveWndToAbsPos
	mov eax,dword ptr [esp+0x48]
	jmp Block58

 Block53:
	lea eax,[esp+0x68]
	push eax
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0xB8],0xA
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block7

 Block54:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x30]
	mov ecx,edi
	call eax
	mov edx,dword ptr [esi]
	mov ebx,eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x14]
	sub ebx,eax
	call IWzGr2DLayer::Getheight
	add eax,ebx
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,0xA
	mov eax,dword ptr [esp+0x68]
	setle bl
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	test eax,eax
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block56:
	test bl,bl
	je Block60

 Block57:
	lea eax,[esp+0x30]
	push eax
	mov ecx,ebp
	call CWnd::GetLayer
	mov ecx,eax
	mov dword ptr [esp+0xB8],0xB
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getheight
	mov edx,dword ptr [esi]
	mov ebx,eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov edx,dword ptr [edi]
	sub eax,ebx
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	push eax
	mov ecx,ebp
	call CWnd::MoveWndToAbsPos
	mov eax,dword ptr [esp+0x30]

 Block58:
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	test eax,eax
	je Block60

 Block59:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block60:
	mov eax,dword ptr [esp+0x84]
	mov ecx,dword ptr [esp+0x80]
	mov edx,dword ptr [esp+0x7C]
	add eax,0xFFFFFFF1
	push eax
	mov eax,dword ptr [esp+0x7C]
	add ecx,0xFFFFFFF1
	push ecx
	add edx,0xF
	push edx
	add eax,0xF
	push eax
	lea ecx,[esp+0x88]
	push ecx
	call SetRect
	lea edx,[esp+0x78]
	push edx
	lea eax,[esp+0x94]
	push eax
	lea ecx,[esp+0xA8]
	push ecx
	call IntersectRect
	test eax,eax
	jne Block83

 Block61:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	mov edx,dword ptr [esi]
	mov ebx,eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	sub ebx,eax
	mov eax,ebx
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,0xA
	jg Block63

 Block62:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x30]
	mov ecx,edi
	call eax
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	push eax
	mov ecx,ebp
	call CWnd::MoveWndToAbsPos
	jmp Block72

 Block63:
	lea ecx,[esp+0x74]
	push ecx
	mov ecx,ebp
	call CWnd::GetLayer
	mov dword ptr [esp+0x20],eax
	mov ecx,dword ptr [esp+0x18]
	lea edx,[esp+0x58]
	push edx
	mov dword ptr [esp+0xBC],0xC
	call CWnd::GetLayer
	mov ecx,eax
	mov byte ptr [esp+0xB8],0xD
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getwidth
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x2C]
	mov ecx,edi
	mov dword ptr [esp+0x1C],eax
	call edx
	mov dword ptr [esp+0x14],eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ebx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x20]
	sub ebx,eax
	mov eax,dword ptr [esp+0x1C]
	sub ebx,eax
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getwidth
	add eax,ebx
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,0xA
	mov eax,dword ptr [esp+0x58]
	setle bl
	mov byte ptr [esp+0xB8],0xC
	test eax,eax
	je Block65

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block65:
	mov eax,dword ptr [esp+0x74]
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	test eax,eax
	je Block67

 Block66:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block67:
	test bl,bl
	je Block72

 Block68:
	mov ecx,dword ptr [esp+0x18]
	lea eax,[esp+0x3C]
	push eax
	call CWnd::GetLayer
	mov dword ptr [esp+0x14],eax
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0xBC],0xE
	call CWnd::GetLayer
	mov ecx,eax
	mov byte ptr [esp+0xB8],0xF
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getwidth
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x2C]
	mov ecx,esi
	mov dword ptr [esp+0x20],eax
	call edx
	mov ebx,eax
	mov eax,dword ptr [esp+0x20]
	sub ebx,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,edi
	call edx
	mov ecx,dword ptr [esp+0x14]
	push eax
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getwidth
	add eax,ebx
	push eax
	mov ecx,ebp
	call CWnd::MoveWndToAbsPos
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0xB8],0xE
	test eax,eax
	je Block70

 Block69:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block70:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	test eax,eax
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block72:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,edi
	call edx
	mov ebx,eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,esi
	call edx
	sub ebx,eax
	mov eax,ebx
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,0xA
	jg Block74

 Block73:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,esi
	call edx
	push eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	push eax
	mov ecx,ebp
	call CWnd::MoveWndToAbsPos
	jmp Block83

 Block74:
	lea eax,[esp+0x4C]
	push eax
	mov ecx,ebp
	call CWnd::GetLayer
	mov dword ptr [esp+0x1C],eax
	lea ecx,[esp+0x44]
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [esp+0xBC],0x10
	call CWnd::GetLayer
	mov ecx,eax
	mov byte ptr [esp+0xB8],0x11
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getheight
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x30]
	mov ecx,edi
	mov dword ptr [esp+0x14],eax
	call edx
	mov dword ptr [esp+0x20],eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,esi
	call edx
	mov ebx,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x1C]
	sub ebx,eax
	mov eax,dword ptr [esp+0x14]
	sub ebx,eax
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getheight
	add eax,ebx
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,0xA
	mov eax,dword ptr [esp+0x44]
	setle bl
	mov byte ptr [esp+0xB8],0x10
	test eax,eax
	je Block76

 Block75:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block76:
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	test eax,eax
	je Block78

 Block77:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block78:
	test bl,bl
	je Block83

 Block79:
	mov ecx,dword ptr [esp+0x18]
	lea eax,[esp+0x5C]
	push eax
	call CWnd::GetLayer
	mov ebx,eax
	lea ecx,[esp+0x54]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0xBC],0x12
	call CWnd::GetLayer
	mov ecx,eax
	mov byte ptr [esp+0xB8],0x13
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getheight
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x30]
	mov ecx,esi
	mov dword ptr [esp+0x20],eax
	call edx
	mov esi,eax
	mov eax,dword ptr [esp+0x20]
	mov ecx,ebx
	sub esi,eax
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getheight
	add eax,esi
	push eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	push eax
	mov ecx,ebp
	call CWnd::MoveWndToAbsPos
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0xB8],0x12
	test eax,eax
	je Block81

 Block80:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block81:
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	test eax,eax
	je Block83

 Block82:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block83:
	cmp dword ptr [esp+0x24],0
	jne Block19

 Block84:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,0xA
	jg Block86

 Block85:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,edi
	call edx
	push eax
	push 0
	jmp Block92

 Block86:
	mov ebx,dword ptr [ebp+0x18]
	test ebx,ebx
	jne Block88

 Block87:
	push 0x80004003
	call _com_issue_error

 Block88:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	mov esi,eax
	call get_screen_width
	mov ecx,ebx
	sub esi,eax
	call IWzGr2DLayer::Getwidth
	add eax,esi
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,0xA
	jg Block93

 Block89:
	mov esi,dword ptr [ebp+0x18]
	test esi,esi
	jne Block91

 Block90:
	push 0x80004003
	call _com_issue_error

 Block91:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,edi
	call edx
	push eax
	mov ecx,esi
	call IWzGr2DLayer::Getwidth
	mov esi,eax
	call get_screen_width
	sub eax,esi
	push eax

 Block92:
	mov ecx,ebp
	call CWnd::MoveWndToAbsPos

 Block93:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,edi
	call edx
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,0xA
	jg Block95

 Block94:
	push 0
	jmp Block101

 Block95:
	mov ebx,dword ptr [ebp+0x18]
	test ebx,ebx
	jne Block97

 Block96:
	push 0x80004003
	call _com_issue_error

 Block97:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,edi
	call edx
	mov esi,eax
	call get_screen_height
	mov ecx,ebx
	sub esi,eax
	call IWzGr2DLayer::Getheight
	add eax,esi
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,0xA
	jg Block102

 Block98:
	mov ecx,dword ptr [ebp+0x18]
	test ecx,ecx
	jne Block100

 Block99:
	push 0x80004003
	call _com_issue_error

 Block100:
	call IWzGr2DLayer::Getheight
	mov esi,eax
	call get_screen_height
	sub eax,esi
	push eax

 Block101:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	push eax
	mov ecx,ebp
	call CWnd::MoveWndToAbsPos

 Block102:
	lea esi,[ebp+0x54]
	mov ecx,esi
	call TSecType<long>::GetData
	sub eax,dword ptr [esp+0x6C]
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,0xF
	jle Block104

 Block103:
	mov ecx,esi
	call TSecType<long>::GetData
	mov esi,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,edi
	call edx
	push eax
	mov eax,dword ptr [esp+0x2C]
	sub eax,esi
	push eax
	mov ecx,ebp
	call CWnd::MoveWndToAbsPos

 Block104:
	lea esi,[ebp+0x48]
	mov ecx,esi
	call TSecType<long>::GetData
	sub eax,dword ptr [esp+0x70]
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,0xF
	jle Block106

 Block105:
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [edi]
	sub ecx,eax
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,edi
	call eax
	push eax
	mov ecx,ebp
	call CWnd::MoveWndToAbsPos

 Block106:
	mov ecx,dword ptr [esp+0xB0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA8
	ret 8
}
}
// CWnd::GetRTTI
__SUB_CLASS_THIS0(0006DB60, __thiscall, 5021,  CWnd, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CWnd::ms_RTTI_CWnd
	ret
}
}
// CWnd::OnKey
__SUB_CLASS_THIS(000712C0, __thiscall, 4955,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	ret 8
}
}
// CWnd::HitTest
__SUB_CLASS_THIS(005AE3B0, __thiscall, 4984,  CWnd, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	sub esp,0x10
	mov eax,dword ptr [esp+0x1C]
	push ebx
	push ebp
	push esi
	xor ebp,ebp
	mov esi,ecx
	push edi
	mov dword ptr [esp+0x1C],esi
	cmp eax,ebp
	je Block2

 Block1:
	mov dword ptr [eax],ebp

 Block2:
	mov eax,dword ptr [esi+0x70]
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block15

 Block3:
	jmp Block5

 Block5:
	lea eax,[esp+0x18]
	push eax
	call ZList<ZRef<CCtrlWnd>>::GetPrev
	mov edi,dword ptr [eax+4]
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x28]
	lea ecx,[edi+4]
	add esp,4
	call eax
	test eax,eax
	je Block14

 Block6:
	mov esi,dword ptr [edi+0x18]
	cmp esi,ebp
	je Block20

 Block7:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0x10]
	push edx
	push esi
	mov dword ptr [esp+0x18],ebp
	call eax
	cmp eax,ebp
	jge Block9

 Block8:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block9:
	mov esi,dword ptr [edi+0x18]
	mov ebx,dword ptr [esp+0x10]
	cmp esi,ebp
	je Block20

 Block10:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x68]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block12

 Block11:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block12:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x24]
	sub ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x18]
	sub eax,ebx
	push eax
	push ecx
	mov ecx,edi
	call edx
	test eax,eax
	jne Block21

 Block13:
	mov esi,dword ptr [esp+0x1C]

 Block14:
	cmp dword ptr [esp+0x18],ebp
	jne Block5

 Block15:
	mov ecx,dword ptr [esp+0x24]
	cmp ecx,ebp
	jl Block19

 Block16:
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	jl Block19

 Block17:
	cmp ecx,dword ptr [esi+0x24]
	jge Block19

 Block18:
	cmp eax,dword ptr [esi+0x28]
	jl Block23

 Block19:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 0xC

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebp
	je Block23

 Block22:
	mov dword ptr [eax],edi

 Block23:
	pop edi
	pop esi
	pop ebp
	mov eax,2
	pop ebx
	add esp,0x10
	ret 0xC
}
}
// CWnd::GetChildItem
__SUB_CLASS_THIS(005AE810, __thiscall, 5003,  CWnd, CCtrlWnd*, uint32_t) {
__asm {

 Block0:
	push ecx
	mov ecx,dword ptr [ecx+0x6C]
	push esi
	mov dword ptr [esp+4],ecx
	test ecx,ecx
	je Block4

 Block1:
	mov esi,dword ptr [esp+0xC]

 Block2:
	lea eax,[esp+4]
	push eax
	call ZList<ZRef<CCtrlWnd>>::GetNext
	mov eax,dword ptr [eax+4]
	add esp,4
	cmp dword ptr [eax+0x14],esi
	je Block5

 Block3:
	cmp dword ptr [esp+4],0
	jne Block2

 Block4:
	xor eax,eax

 Block5:
	pop esi
	pop ecx
	ret 4
}
}
// CWnd::IsMyAddon
__SUB_CLASS_THIS(00029A20, __thiscall, 5001,  CWnd, int32_t, CWnd*) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CWnd::MoveWndToAbsPos
_SUB_EXCEPTION_HANDLER(5AD660)
__SUB_CLASS_THIS(005AD660, __thiscall, 4976,  CWnd, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5AD660
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
	mov edi,ecx
	mov dword ptr [esp+0x1C],edi
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	xor ebx,ebx
	push ebx
	lea eax,[esp+0x28]
	push eax
	call CWndMan::GetOrgWindow
	mov esi,eax
	mov ecx,dword ptr [edi+0x7C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	lea edx,[esp+0x24]
	push edx
	mov dword ptr [esp+0x44],ebx
	call CWndMan::GetOrgWindow
	mov ebp,eax
	mov esi,dword ptr [esi]
	mov byte ptr [esp+0x3C],1
	cmp esi,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block4

 Block3:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov esi,dword ptr [ebp]
	mov edi,dword ptr [esp+0x14]
	cmp esi,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],ebx
	call edx
	cmp eax,ebx
	jge Block8

 Block7:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	sub edi,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x30],edi
	mov byte ptr [esp+0x3C],bl
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push ebx
	lea eax,[esp+0x30]
	push eax
	call CWndMan::GetOrgWindow
	mov esi,eax
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [ecx+0x7C]
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push edx
	lea eax,[esp+0x2C]
	push eax
	mov dword ptr [esp+0x44],2
	call CWndMan::GetOrgWindow
	mov ebp,eax
	mov esi,dword ptr [esi]
	mov byte ptr [esp+0x3C],3
	cmp esi,ebx
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],ebx
	call eax
	cmp eax,ebx
	jge Block16

 Block15:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block16:
	mov esi,dword ptr [ebp]
	mov edi,dword ptr [esp+0x18]
	cmp esi,ebx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call eax
	cmp eax,ebx
	jge Block20

 Block19:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	mov eax,dword ptr [esp+0x28]
	sub edi,dword ptr [esp+0x14]
	mov byte ptr [esp+0x3C],2
	cmp eax,ebx
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block22:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp eax,ebx
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	mov eax,dword ptr [esp+0x48]
	mov ecx,dword ptr [esp+0x44]
	mov edx,dword ptr [esp+0x30]
	add edi,eax
	add edx,ecx
	mov ecx,dword ptr [esp+0x1C]
	push edi
	push edx
	call CWnd::MoveWnd
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
// CWnd::IsFocused
__SUB_CLASS_THIS0(005AD440, __thiscall, 4996,  CWnd, int32_t) {
__asm {

 Block0:
	test ecx,ecx
	je Block2

 Block1:
	mov edx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	lea eax,[ecx+4]
	xor ecx,ecx
	cmp dword ptr [edx+0xA0],eax
	sete cl
	mov eax,ecx
	ret

 Block2:
	mov edx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	xor eax,eax
	xor ecx,ecx
	cmp dword ptr [edx+0xA0],eax
	sete cl
	mov eax,ecx
	ret
}
}
// CWnd::FindChild
__SUB_CLASS_THIS(000F0380, __thiscall, 5011,  CWnd, __POSITION*, CCtrlWnd*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub esp,8
	push esi
	push edi
	mov edi,ecx
	test eax,eax
	je Block7

 Block1:
	add eax,8
	je Block7

 Block2:
	lea esi,[eax-8]
	mov dword ptr [esp+0xC],esi
	test esi,esi
	je Block4

 Block3:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	push 0
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[edi+0x60]
	call ZList<ZRef<CCtrlWnd>>::Find
	mov edi,eax
	test esi,esi
	je Block6

 Block5:
	push 0
	lea ecx,[esp+0xC]
	call ZRef<CCtrlWnd>::_ReleaseRaw

 Block6:
	mov eax,edi
	pop edi
	pop esi
	add esp,8
	ret 4

 Block7:
	xor esi,esi
	mov dword ptr [esp+0xC],esi
	jmp Block4
}
}
// CWnd::InsertChildAfter
_SUB_EXCEPTION_HANDLER(F06E0)
__SUB_CLASS_THIS(000F06E0, __thiscall, 5013,  CWnd, void, CCtrlWnd*, __POSITION*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F06E0
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
	mov ebx,ecx
	mov edi,dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x28]
	test edi,edi
	jne Block8

 Block1:
	test eax,eax
	je Block7

 Block2:
	add eax,8
	je Block7

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	lea ecx,[ebx+0x60]
	mov dword ptr [esp+0x20],0
	call ZList<ZRef<CCtrlWnd>>::AddTail_
	mov edi,eax
	test esi,esi
	je Block15

 Block6:
	lea ecx,[esi+0xC]
	push ecx
	jmp Block14

 Block7:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	jmp Block5

 Block8:
	test eax,eax
	je Block20

 Block9:
	add eax,8
	je Block20

 Block10:
	lea esi,[eax-8]
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block12

 Block11:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block12:
	push edi
	lea ecx,[ebx+0x60]
	mov dword ptr [esp+0x24],1
	call ZList<ZRef<CCtrlWnd>>::InsertAfter
	mov edi,eax
	test esi,esi
	je Block15

 Block13:
	lea eax,[esi+0xC]
	push eax

 Block14:
	call dword ptr [ZImports::_InterlockedIncrement]

 Block15:
	cmp dword ptr [edi+4],0
	je Block17

 Block16:
	push 0
	mov ecx,edi
	call ZRef<CCtrlWnd>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block17:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	mov dword ptr [edi+4],esi
	test esi,esi
	je Block19

 Block18:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CCtrlWnd>::_ReleaseRaw

 Block19:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 8

 Block20:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	jmp Block12
}
}
// CWnd::~CWnd
_SUB_EXCEPTION_HANDLER(5AEBC0)
__SUB_CLASS_THIS0(005AEBC0, __thiscall, 4954,  CWnd, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5AEBC0
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
	int 3// TODO: 	mov dword ptr [esi],offset CWnd::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CWnd::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CWnd::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x78]
	mov dword ptr [esp+0x14],4
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	lea ecx,[esi+0x60]
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<CCtrlWnd>>::`vftable'
	call ZList<ZRef<CCtrlWnd>>::RemoveAll
	lea ecx,[esi+0x48]
	mov byte ptr [esp+0x14],3
	call SECPOINT::~SECPOINT
	mov eax,dword ptr [esi+0x20]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x1C]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0x18]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	int 3// TODO: 	mov dword ptr [esi+8],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CWnd::GetLayer
__SUB_CLASS_THIS0(0002A270, __thiscall, 4989,  CWnd, _x_com_ptr<IWzGr2DLayer>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x18]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [esi],eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CWnd::CoverBackgrnd
_SUB_EXCEPTION_HANDLER(5B0FD0)
__SUB_CLASS_THIS(005B0FD0, __thiscall, 5006,  CWnd, void, NakedParam<ZXString16>, long, long, int32_t) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5B0FD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x24
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x54],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp]
	xor edi,edi
	push eax
	mov dword ptr [ebp-4],edi
	call esi
	lea ecx,[ebp]
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
	lea edx,[ebp+0x30]
	push edx
	mov byte ptr [ebp-4],1
	call esi
	lea eax,[ebp+0x30]
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
	mov eax,dword ptr [ebp+0x70]
	push edi
	push edi
	lea ecx,[ebp]
	push ecx
	lea edx,[ebp+0x30]
	push edx
	push ecx
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	mov ebx,2
	push eax
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],3
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	mov dword ptr [ebp+0x58],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov esi,8
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x2C],si
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x30],si
	jne Block16

 Block14:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp],si
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov esi,dword ptr [ebp+0x58]
	cmp esi,edi
	sete al
	test al,al
	jne Block75

 Block22:
	mov edx,dword ptr [ebp+0x54]
	cmp dword ptr [edx+0x78],edi
	sete al
	test al,al
	jne Block75

 Block23:
	mov eax,3
	mov word ptr [ebp+0x44],ax
	mov dword ptr [ebp+0x4C],0xFF
	mov byte ptr [ebp-4],9
	cmp esi,edi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x74]
	lea edx,[ebp+0x60]
	push edx
	push esi
	mov dword ptr [ebp+0x60],edi
	call eax
	cmp eax,edi
	jge Block27

 Block26:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x6C]
	mov edi,dword ptr [ebp+0x60]
	lea edx,[ebp+0x5C]
	push edx
	push esi
	mov dword ptr [ebp+0x5C],0
	call eax
	test eax,eax
	jge Block29

 Block28:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block29:
	mov ecx,dword ptr [ebp+0x54]
	mov ecx,dword ptr [ecx+0x78]
	test ecx,ecx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	mov eax,dword ptr [ebp+0x78]
	lea edx,[ebp+0x44]
	push edx
	mov edx,dword ptr [ebp+0x74]
	sub edx,dword ptr [ebp+0x5C]
	push esi
	sub eax,edi
	push eax
	push edx
	call IWzCanvas::Copy
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],8
	jne Block37

 Block32:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block34

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block34:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block35:
	cmp dword ptr [ebp+0x7C],0
	je Block72

 Block36:
	jmp Block41

 Block37:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp+0x44]
	push ecx
	call edi
	jmp Block35

 Block40:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block41:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x20]
	push edx
	call esi
	lea eax,[ebp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block42:
	lea ecx,[ebp+0x44]
	push ecx
	mov byte ptr [ebp-4],0xA
	call esi
	lea edx,[ebp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block43:
	mov eax,0x20
	mov byte ptr [ebp-4],0xB
	call __chkstk
	mov eax,esp
	push 0
	push 0
	lea ecx,[ebp+0x20]
	push ecx
	lea edx,[ebp+0x44]
	push edx
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,0xC
	push eax
	lea eax,[ebp+0x40]
	push eax
	lea ecx,[ebp+0x70]
	call ZXString16::op_add_0
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [ebp-0x30],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],0xC
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0xD
	je Block5

 Block44:
	lea ecx,[ebp-0x1C]
	push ecx
	mov byte ptr [ebp-4],0xC
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xE
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block46

 Block45:
	cmp eax,0x80004002
	jne Block1

 Block46:
	mov esi,8
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x1C],si
	jne Block49

 Block47:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea eax,[ebp-0x1C]
	push eax
	call edi

 Block50:
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block52:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp+0x44],si
	jne Block55

 Block53:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea edx,[ebp+0x44]
	push edx
	call edi

 Block56:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp+0x20],si
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[ebp+0x20]
	push ecx
	call edi

 Block60:
	mov esi,dword ptr [ebp+0x58]
	test esi,esi
	sete al
	test al,al
	jne Block72

 Block61:
	mov edx,3
	mov word ptr [ebp+0x10],dx
	mov dword ptr [ebp+0x18],0xFF
	mov byte ptr [ebp-4],0xF
	test esi,esi
	je Block5

 Block62:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[ebp+0x5C]
	push ecx
	push esi
	mov dword ptr [ebp+0x5C],0
	call edx
	test eax,eax
	jge Block64

 Block63:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block64:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x6C]
	mov edi,dword ptr [ebp+0x5C]
	lea ecx,[ebp+0x60]
	push ecx
	push esi
	mov dword ptr [ebp+0x60],0
	call edx
	test eax,eax
	jge Block66

 Block65:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block66:
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [eax+0x78]
	test ecx,ecx
	je Block5

 Block67:
	mov eax,dword ptr [ebp+0x78]
	lea edx,[ebp+0x10]
	push edx
	mov edx,dword ptr [ebp+0x74]
	sub edx,dword ptr [ebp+0x60]
	push esi
	sub eax,edi
	push eax
	push edx
	call IWzCanvas::Copy
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],8
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea ecx,[ebp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	inc ebx
	cmp ebx,5
	jl Block40

 Block72:
	mov byte ptr [ebp-4],0
	test esi,esi
	je Block74

 Block73:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block74:
	mov eax,dword ptr [ebp+0x70]
	test eax,eax
	jmp Block78

 Block75:
	mov byte ptr [ebp-4],0
	cmp esi,edi
	je Block77

 Block76:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block77:
	mov eax,dword ptr [ebp+0x70]
	cmp eax,edi

 Block78:
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block80

 Block79:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block80:
	lea esp,[ebp-0x40]
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
	ret 0x10
}
}
// CWnd::InsertChildBefore
_SUB_EXCEPTION_HANDLER(F07F0)
__SUB_CLASS_THIS(000F07F0, __thiscall, 5013,  CWnd, void, CCtrlWnd*, __POSITION*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F07F0
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
	mov ebx,ecx
	mov edi,dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x28]
	test edi,edi
	jne Block8

 Block1:
	test eax,eax
	je Block7

 Block2:
	add eax,8
	je Block7

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	lea ecx,[ebx+0x60]
	mov dword ptr [esp+0x20],0
	call ZList<ZRef<CCtrlWnd>>::AddHead_
	mov edi,eax
	test esi,esi
	je Block15

 Block6:
	lea ecx,[esi+0xC]
	push ecx
	jmp Block14

 Block7:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	jmp Block5

 Block8:
	test eax,eax
	je Block20

 Block9:
	add eax,8
	je Block20

 Block10:
	lea esi,[eax-8]
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block12

 Block11:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block12:
	push edi
	lea ecx,[ebx+0x60]
	mov dword ptr [esp+0x24],1
	call ZList<ZRef<CCtrlWnd>>::InsertBefore
	mov edi,eax
	test esi,esi
	je Block15

 Block13:
	lea eax,[esi+0xC]
	push eax

 Block14:
	call dword ptr [ZImports::_InterlockedIncrement]

 Block15:
	cmp dword ptr [edi+4],0
	je Block17

 Block16:
	push 0
	mov ecx,edi
	call ZRef<CCtrlWnd>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block17:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	mov dword ptr [edi+4],esi
	test esi,esi
	je Block19

 Block18:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CCtrlWnd>::_ReleaseRaw

 Block19:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 8

 Block20:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	jmp Block12
}
}
// CWnd::CWnd
_SUB_EXCEPTION_HANDLER(5AED30)
__SUB_CLASS_THIS0(005AED30, __thiscall, 4952,  CWnd, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5AED30
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
	int 3// TODO: 	mov dword ptr [esi+4],offset IUIMsgHandler::`vftable'
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi+8],offset ZRefCounted::`vftable'
	mov dword ptr [esi+0xC],eax
	xor edi,edi
	mov dword ptr [esi+0x10],eax
	int 3// TODO: 	mov dword ptr [esi],offset CWnd::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CWnd::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CWnd::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x14],edi
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x18],edi
	mov dword ptr [esi+0x1C],edi
	mov dword ptr [esi+0x20],edi
	lea ecx,[esi+0x48]
	mov byte ptr [esp+0x18],3
	mov dword ptr [esi+0x40],edi
	mov dword ptr [esi+0x44],edi
	call SECPOINT::_ctor_default
	int 3// TODO: 	mov dword ptr [esi+0x60],offset ZList<ZRef<CCtrlWnd>>::`vftable'
	mov dword ptr [esi+0x68],edi
	mov dword ptr [esi+0x6C],edi
	mov dword ptr [esi+0x70],edi
	mov dword ptr [esi+0x74],edi
	mov dword ptr [esi+0x78],edi
	mov ecx,esi
	mov byte ptr [esp+0x18],6
	mov dword ptr [esi+0x7C],edi
	call CWnd::OnEndMoveWnd
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
