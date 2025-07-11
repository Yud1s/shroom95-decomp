#include "regen.hpp"
// CtrlSlider.ipp
#include "CtrlSlider.hpp"

// CCtrlSlider::MouseDown
_SUB_EXCEPTION_HANDLER(ED230)
__SUB_CLASS_THIS(000ED230, __thiscall, 12771,  CCtrlSlider, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_ED230
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0x38],1
	jle Block5

 Block1:
	cmp dword ptr [esi+0x44],0
	jne Block5

 Block2:
	mov eax,dword ptr [esp+0x18]
	push 0
	push eax
	call CCtrlSlider::GetPosByCoord
	push eax
	mov ecx,esi
	call CCtrlSlider::SetToNewPos
	lea eax,[esi+4]
	mov dword ptr [esi+0x44],1
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetCaptureWnd
	lea ecx,[esp+0x18]
	push 0x5D0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x14],0
	call play_ui_sound
	mov eax,dword ptr [esp+0x1C]
	add esp,4
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov ecx,esi
	call CCtrlWnd::InvalidateRect

 Block5:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 8
}
}
// CCtrlSlider::OnMouseMove
__SUB_CLASS_THIS(000ECF60, __thiscall, 12762,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x34],1
	mov dword ptr [esi+0x48],eax
	jle Block4

 Block1:
	cmp dword ptr [esi+0x40],0
	je Block3

 Block2:
	push edi
	push 0
	lea edi,[esi-4]
	push eax
	mov ecx,edi
	call CCtrlSlider::GetPosByCoord
	push eax
	mov ecx,edi
	call CCtrlSlider::SetToNewPos
	pop edi

 Block3:
	lea ecx,[esi-4]
	call CCtrlWnd::InvalidateRect

 Block4:
	xor eax,eax
	pop esi
	ret 8
}
}
// CCtrlSlider::CreateCtrl
_SUB_EXCEPTION_HANDLER(ED5E0)
__SUB_CLASS_THIS(000ED5E0, __thiscall, 12761,  CCtrlSlider, void, CWnd*, uint32_t, long, long, long, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_ED5E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [esp+0x6C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [esp+0x68]
	lea eax,[esp+0x14]
	push 0x3D0
	push eax
	mov dword ptr [edi+0x28],ecx
	mov dword ptr [edi+0x3C],edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ebp,[edi+0x50]
	push ebp
	push eax
	mov dword ptr [esp+0x5C],0
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push ecx
	call esi
	lea edx,[esp+0x28]
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
	lea eax,[esp+0x18]
	mov ebx,1
	push eax
	mov dword ptr [esp+0x54],ebx
	call esi
	lea ecx,[esp+0x18]
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
	mov esi,dword ptr [ebp]
	mov byte ptr [esp+0x50],2
	test esi,esi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call CCtrlSlider::GetSliderHeight
	mov ecx,dword ptr [edi+0x3C]
	push eax
	push ecx
	mov ecx,esi
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0x50],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x18],si
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea eax,[esp+0x18]
	push eax
	call ebx

 Block12:
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp word ptr [esp+0x28],si
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea edx,[esp+0x28]
	push edx
	call ebx

 Block16:
	mov esi,dword ptr [ebp]
	test esi,esi
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov eax,dword ptr [esp+0x6C]
	mov ebp,dword ptr [eax+4]
	call CCtrlSlider::GetSliderHeight
	mov ecx,dword ptr [edi+0x3C]
	mov edx,dword ptr [esi]
	push ebp
	push eax
	mov eax,dword ptr [edx+0x8C]
	push ecx
	push 0
	push 0
	push esi
	call eax
	test eax,eax
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push ecx
	call esi
	lea edx,[esp+0x18]
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
	lea eax,[esp+0x28]
	push eax
	mov dword ptr [esp+0x54],3
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	xor ebp,ebp
	push ebp
	push ebp
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x34]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x7C],esp
	push 0x19A0
	mov bl,4
	push ecx
	mov byte ptr [esp+0x6C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x64],5
	cmp dword ptr [_D_G_RM],ebp
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[esp+0x4C]
	mov byte ptr [esp+0x64],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x58],6
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0x54]
	push eax
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
	mov esi,8
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x38],si
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov byte ptr [esp+0x50],3
	cmp word ptr [esp+0x28],si
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebp
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
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp word ptr [esp+0x18],si
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x18]
	push eax
	call esi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	lea edx,[esp+0x28]
	mov ebx,7
	push edx
	mov dword ptr [esp+0x54],ebx
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	push ebp
	push ebp
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x34]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x7C],esp
	push 0x19A1
	push eax
	mov byte ptr [esp+0x6C],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x64],9
	cmp dword ptr [_D_G_RM],ebp
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	lea ecx,[esp+0x4C]
	push ecx
	mov byte ptr [esp+0x68],8
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x58],0xA
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0x58]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block50

 Block48:
	cmp eax,0x80004002
	je Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x50],8
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,ebp
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block54:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x50],bl
	jne Block57

 Block55:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	cmp word ptr [esp+0x18],8
	mov dword ptr [esp+0x50],0xFFFFFFFF
	jne Block61

 Block59:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	lea edx,[esp+0x18]
	push edx
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block64

 Block63:
	push eax
	call _com_issue_error

 Block64:
	lea ecx,[esp+0x28]
	push ecx
	mov dword ptr [esp+0x54],0xB
	call esi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block66

 Block65:
	push eax
	call _com_issue_error

 Block66:
	push ebp
	push ebp
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x7C],esp
	push 0x19A2
	mov bl,0xC
	push edx
	mov byte ptr [esp+0x6C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x64],0xD
	cmp dword ptr [_D_G_RM],ebp
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	lea eax,[esp+0x4C]
	mov byte ptr [esp+0x64],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x58],0xE
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0x5C]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block71

 Block69:
	cmp eax,0x80004002
	je Block71

 Block70:
	push eax
	call _com_issue_error

 Block71:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x50],bl
	jne Block74

 Block72:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,ebp
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov ebx,8
	mov byte ptr [esp+0x50],0xB
	cmp word ptr [esp+0x28],bx
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp word ptr [esp+0x18],bx
	jne Block82

 Block80:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	cmp eax,ebp
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block83:
	lea ecx,[esp+0x18]
	push ecx
	call esi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block85

 Block84:
	push eax
	call _com_issue_error

 Block85:
	lea eax,[esp+0x28]
	push eax
	mov dword ptr [esp+0x54],0xF
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block87

 Block86:
	push eax
	call _com_issue_error

 Block87:
	push ebp
	push ebp
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x34]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x7C],esp
	push 0x19A3
	mov bl,0x10
	push ecx
	mov byte ptr [esp+0x6C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x64],0x11
	cmp dword ptr [_D_G_RM],ebp
	jne Block89

 Block88:
	push 0x80004003
	call _com_issue_error

 Block89:
	lea edx,[esp+0x4C]
	mov byte ptr [esp+0x64],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x58],0x12
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0x60]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block92

 Block90:
	cmp eax,0x80004002
	je Block92

 Block91:
	push eax
	call _com_issue_error

 Block92:
	mov esi,8
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x38],si
	jne Block95

 Block93:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov byte ptr [esp+0x50],0xF
	cmp word ptr [esp+0x28],si
	jne Block99

 Block97:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebp
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block100:
	mov dword ptr [esp+0x50],0xFFFFFFFF
	cmp word ptr [esp+0x18],si
	jne Block103

 Block101:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block104:
	mov esi,dword ptr [edi+0x54]
	cmp esi,ebp
	jne Block106

 Block105:
	push 0x80004003
	call _com_issue_error

 Block106:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x68]
	push ecx
	push esi
	mov dword ptr [esp+0x70],ebp
	call edx
	cmp eax,ebp
	jge Block108

 Block107:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block108:
	mov ecx,dword ptr [esp+0x6C]
	mov eax,dword ptr [esp+0x68]
	push ecx
	mov dword ptr [edi+0x40],eax
	mov dword ptr [edi+0x34],ebp
	mov dword ptr [edi+0x38],ebp
	mov dword ptr [edi+0x44],ebp
	mov dword ptr [edi+0x4C],0xFFFFFFFF
	mov dword ptr [edi+0x48],ebp
	call CCtrlSlider::GetSliderHeight
	mov edx,dword ptr [edi+0x3C]
	mov ecx,dword ptr [esp+0x64]
	push eax
	mov eax,dword ptr [esp+0x6C]
	push edx
	mov edx,dword ptr [esp+0x68]
	push eax
	mov eax,dword ptr [esp+0x68]
	push ecx
	push edx
	push eax
	mov ecx,edi
	call CCtrlWnd::CreateCtrl
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 0x18
}
}
// CCtrlSlider::OnKey
__SUB_CLASS_THIS(000ECEE0, __thiscall, 12764,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov esi,ecx
	test edi,edi
	js Block10

 Block1:
	lea eax,[ebx-0x21]
	cmp eax,6
	ja Block10

 Block2:
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block4
cmp EAX, 2
je Block6
cmp EAX, 3
je Block5
cmp EAX, 4
je Block3
cmp EAX, 5
je Block10
cmp EAX, 6
je Block4


 Block3:
	mov eax,dword ptr [esi+0x30]
	jmp Block7

 Block4:
	mov eax,dword ptr [esi+0x30]
	inc eax
	jmp Block8

 Block5:
	xor eax,eax
	jmp Block9

 Block6:
	mov eax,dword ptr [esi+0x34]

 Block7:
	dec eax

 Block8:
	cmp eax,0xFFFFFFFE
	je Block10

 Block9:
	push 1
	push eax
	lea ecx,[esi-4]
	call CCtrlSlider::SetToNewPos

 Block10:
	mov esi,dword ptr [esi+0x20]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax]
	lea ecx,[esi+4]
	push edi
	push ebx
	call edx
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CCtrlSlider::OnMouseButton
__SUB_CLASS_THIS(000ED3A0, __thiscall, 12763,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x201
	je Block3

 Block1:
	sub eax,1
	jne Block4

 Block2:
	mov eax,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0xC]
	push eax
	push edx
	add ecx,0xFFFFFFFC
	call CCtrlSlider::MouseUp
	ret 0x10

 Block3:
	mov eax,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0xC]
	push eax
	push edx
	add ecx,0xFFFFFFFC
	call CCtrlSlider::MouseDown

 Block4:
	ret 0x10
}
}
// CCtrlSlider::Draw
_SUB_EXCEPTION_HANDLER(ECFC0)
__SUB_CLASS_THIS(000ECFC0, __thiscall, 12766,  CCtrlSlider, void, long, long, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_ECFC0
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
	push 0
	lea eax,[esp+0x18]
	push eax
	call CCtrlWnd::GetCanvas
	mov ecx,3
	mov word ptr [esp+0x1C],cx
	mov ecx,0xFF
	mov dword ptr [esp+0x34],0
	mov dword ptr [esp+0x24],ecx
	mov ebp,dword ptr [esp+0x14]
	mov edx,dword ptr [esi+0x50]
	mov byte ptr [esp+0x34],1
	test ebp,ebp
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov edi,dword ptr [esp+0x1C]
	mov ebx,dword ptr [esp+0x40]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x30]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x4C]
	push edx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x3C]
	push ebx
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x80]
	push edi
	push ebp
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block4:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],0
	jne Block7

 Block5:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	cmp dword ptr [esi+0x38],1
	jg Block10

 Block9:
	mov edx,3
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],0xFF
	mov eax,dword ptr [esi+0x5C]
	lea ecx,[esp+0x1C]
	push ecx
	push eax
	mov eax,dword ptr [esi+0x3C]
	sub eax,dword ptr [esi+0x40]
	push ebx
	cdq
	sub eax,edx
	sar eax,1
	add eax,edi
	mov byte ptr [esp+0x40],2
	push eax
	jmp Block21

 Block10:
	cmp dword ptr [esi+0x4C],0
	mov dword ptr [esp+0x3C],0
	jl Block17

 Block11:
	mov eax,dword ptr [esi+0x40]
	mov ecx,dword ptr [esi+0x34]
	cdq
	sub eax,edx
	mov ebx,eax
	push ecx
	mov ecx,esi
	sar ebx,1
	call CCtrlSlider::GetCoordByPos
	sub eax,ebx
	cmp eax,dword ptr [esi+0x4C]
	jg Block17

 Block12:
	mov eax,dword ptr [esi+0x34]
	push eax
	mov ecx,esi
	call CCtrlSlider::GetCoordByPos
	add eax,ebx
	cmp dword ptr [esi+0x4C],eax
	jg Block17

 Block13:
	cmp dword ptr [esi+0x48],0
	jne Block16

 Block14:
	lea eax,[esp+0x3C]
	push 0x5D1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0x38],3
	call play_ui_sound
	mov eax,dword ptr [esp+0x40]
	add esp,4
	mov byte ptr [esp+0x34],0
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block16:
	mov dword ptr [esi+0x48],1
	mov dword ptr [esp+0x3C],3
	jmp Block18

 Block17:
	mov dword ptr [esi+0x48],0

 Block18:
	cmp dword ptr [esi+0x44],0
	je Block20

 Block19:
	mov dword ptr [esp+0x3C],1

 Block20:
	mov ecx,3
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],0xFF
	mov edx,dword ptr [esp+0x3C]
	mov eax,dword ptr [esi+edx*4+0x54]
	mov edx,dword ptr [esp+0x40]
	lea ecx,[esp+0x1C]
	push ecx
	push eax
	mov eax,dword ptr [esi+0x34]
	push edx
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x44],4
	call CCtrlSlider::GetCoordByPos
	mov ecx,eax
	mov eax,dword ptr [esi+0x40]
	cdq
	sub eax,edx
	sar eax,1
	sub edi,eax
	add ecx,edi
	push ecx

 Block21:
	mov ecx,ebp
	call IWzCanvas::Copy
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],0
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 0xC
}
}
// CCtrlSlider::SetCurPos
__SUB_CLASS_THIS(000ECC30, __thiscall, 12768,  CCtrlSlider, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x44],0
	mov dword ptr [esi+0x34],eax
	je Block2

 Block1:
	lea eax,[esi+4]
	mov dword ptr [esi+0x44],0
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::ReleaseCaptureWnd

 Block2:
	mov ecx,esi
	call CCtrlWnd::InvalidateRect
	pop esi
	ret 4
}
}
// CCtrlSlider::CCtrlSlider
_SUB_EXCEPTION_HANDLER(ECD80)
__SUB_CLASS_THIS0(000ECD80, __thiscall, 12758,  CCtrlSlider, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_ECD80
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
	call CCtrlWnd::_ctor_default
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlSlider::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlSlider::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlSlider::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esi+0x50],eax
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 4
	push 4
	lea eax,[esi+0x54]
	push eax
	mov byte ptr [esp+0x28],1
	call __eh_vector_ctor_iterator
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CCtrlSlider::GetSliderHeight
_SUB_EXCEPTION_HANDLER(ED3E0)
__SUB0(000ED3E0, __cdecl, 12770,  long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_ED3E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
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
	push 0x51B
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
	push eax
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x10],0
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
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x4C],5
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
	call esi

 Block13:
	mov byte ptr [esp+0x4C],6
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
	call esi

 Block17:
	mov byte ptr [esp+0x4C],7
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
	call esi

 Block21:
	mov esi,dword ptr [esp+0xC]
	test esi,esi
	je Block25

 Block22:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x10]
	push eax
	push esi
	mov dword ptr [esp+0x18],0
	call ecx
	test eax,eax
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block24:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [esp+0x50],0xFFFFFFFF
	call eax
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x44
	ret

 Block25:
	mov eax,0x10
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x44
	ret
}
}
// CCtrlSlider::MouseUp
_SUB_EXCEPTION_HANDLER(ED2F0)
__SUB_CLASS_THIS(000ED2F0, __thiscall, 12771,  CCtrlSlider, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_ED2F0
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
	cmp dword ptr [esi+0x38],1
	jle Block5

 Block1:
	cmp dword ptr [esi+0x44],0
	je Block5

 Block2:
	lea eax,[esi+4]
	mov dword ptr [esi+0x44],0
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::ReleaseCaptureWnd
	lea eax,[esp+8]
	push 0x5D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x18],0
	call play_ui_sound
	mov eax,dword ptr [esp+0xC]
	add esp,4
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov ecx,esi
	call CCtrlWnd::InvalidateRect

 Block5:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 8
}
}
// CCtrlSlider::GetCoordByPos
__SUB_CLASS_THIS(000ECC00, __thiscall, 12772,  CCtrlSlider, long, long) {
__asm {

 Block0:
	mov edx,dword ptr [ecx+0x38]
	cmp edx,1
	jg Block2

 Block1:
	xor eax,eax
	ret 4

 Block2:
	mov eax,dword ptr [ecx+0x3C]
	sub eax,0x1B
	imul eax,dword ptr [esp+4]
	lea ecx,[edx-1]
	cdq
	idiv ecx
	add eax,0xD
	ret 4
}
}
// CCtrlSlider::IsKindOf
__SUB_CLASS_THIS(000ECE20, __thiscall, 12776,  CCtrlSlider, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CCtrlSlider::ms_RTTI_CCtrlSlider
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
// CCtrlSlider::~CCtrlSlider
_SUB_EXCEPTION_HANDLER(ECE50)
__SUB_CLASS_THIS0(000ECE50, __thiscall, 12760,  CCtrlSlider, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_ECE50
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
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlSlider::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlSlider::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlSlider::`vftable'{for `ZRefCounted'}
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 4
	push 4
	lea eax,[esi+0x54]
	push eax
	mov dword ptr [esp+0x24],1
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0x50]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
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
// CCtrlSlider::GetRTTI
__SUB_CLASS_THIS0(000ECE00, __thiscall, 12775,  CCtrlSlider, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CCtrlSlider::ms_RTTI_CCtrlSlider
	ret
}
}
// CCtrlSlider::OnMouseEnter
__SUB_CLASS_THIS(000ECD00, __thiscall, 12765,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	push edi
	mov esi,ecx
	call CCtrlWnd::OnMouseEnter
	mov dword ptr [esi+0x44],0
	test edi,edi
	jne Block3

 Block1:
	mov dword ptr [esi+0x48],0xFFFFFFFF

 Block2:
	pop edi
	pop esi
	ret 4

 Block3:
	cmp dword ptr [esi+0x34],1
	jle Block2

 Block4:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	pop edi
	pop esi
	mov dword ptr [esp+4],8
	jmp  CInputSystem::SetCursorState
}
}
// CCtrlSlider::SetSliderRange
__SUB_CLASS_THIS(000ECC70, __thiscall, 12768,  CCtrlSlider, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x34]
	mov dword ptr [esi+0x38],eax
	dec eax
	cmp ecx,eax
	jge Block2

 Block1:
	mov eax,ecx

 Block2:
	cmp dword ptr [esi+0x44],0
	mov dword ptr [esi+0x34],eax
	je Block4

 Block3:
	lea eax,[esi+4]
	mov dword ptr [esi+0x44],0
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::ReleaseCaptureWnd

 Block4:
	mov ecx,esi
	call CCtrlWnd::InvalidateRect
	pop esi
	ret 4
}
}
// CCtrlSlider::SetToNewPos
__SUB_CLASS_THIS(000ECD40, __thiscall, 12773,  CCtrlSlider, void, long, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	test eax,eax
	jg Block2

 Block1:
	xor eax,eax

 Block2:
	mov ecx,dword ptr [esi+0x38]
	dec ecx
	cmp eax,ecx
	jl Block4

 Block3:
	mov eax,ecx

 Block4:
	mov ecx,dword ptr [esi+0x24]
	push eax
	mov dword ptr [esi+0x34],eax
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [esi+0x14]
	mov edx,dword ptr [edx+0x1C]
	push 0x2BC
	push eax
	call edx
	cmp dword ptr [esp+0xC],0
	je Block6

 Block5:
	mov ecx,esi
	call CCtrlWnd::InvalidateRect

 Block6:
	pop esi
	ret 8
}
}
// CCtrlSlider::GetPosByCoord
__SUB_CLASS_THIS(000ECCB0, __thiscall, 12772,  CCtrlSlider, long, long) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	mov ebx,ecx
	mov ebp,dword ptr [ebx+0x38]
	push esi
	xor eax,eax
	xor esi,esi
	push edi
	mov dword ptr [esp+0x10],eax
	mov edi,0x7FFFFFFF
	test ebp,ebp
	jle Block7

 Block1:
	jmp Block3

 Block3:
	push esi
	mov ecx,ebx
	call CCtrlSlider::GetCoordByPos
	sub eax,dword ptr [esp+0x18]
	cdq
	xor eax,edx
	sub eax,edx
	cmp eax,edi
	jge Block5

 Block4:
	mov dword ptr [esp+0x10],esi
	mov edi,eax

 Block5:
	inc esi
	cmp esi,ebp
	jl Block3

 Block6:
	mov eax,dword ptr [esp+0x10]

 Block7:
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 4
}
}
