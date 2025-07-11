#include "regen.hpp"
// RadioManager.ipp
#include "RadioManager.hpp"

// CUIRadio::~CUIRadio
_SUB_EXCEPTION_HANDLER(2C8270)
__SUB_CLASS_THIS0(002C8270, __thiscall, 70788,  CUIRadio, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2C8270
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIRadio::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIRadio::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIRadio::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xAC8]
	mov dword ptr [esp+0x14],3
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [esi+0xAC8],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xACC]
	test eax,eax
	je Block4

 Block3:
	mov dword ptr [esi+0xACC],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xACC]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0xAC8]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	lea ecx,[esi+0x80]
	mov byte ptr [esp+0x14],0
	call CUIToolTip::~CUIToolTip
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
// CRadioManager::SetVolume
__SUB_CLASS_THIS(002C8190, __thiscall, 70813,  CRadioManager, void, uint32_t) {
__asm {

 Block0:
	cmp dword ptr [ecx+8],0
	je Block5

 Block1:
	cmp dword ptr [ecx+0xC],0
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0x10],eax
	jne Block5

 Block2:
	mov dword ptr [esp+4],eax
	fild dword ptr [esp+4]
	test eax,eax
	jge Block4

 Block3:
	fadd dword ptr [__real_4f800000]

 Block4:
	fdiv qword ptr [__real_4059000000000000]
	push ecx
	fstp dword ptr [esp+8]
	fld dword ptr [esp+8]
	fstp dword ptr [esp]
	call CRadioManager::MMS_SetVolume

 Block5:
	ret 4
}
}
// CRadioManager::MMS_Startup
__SUB_CLASS_THIS0(002C8100, __thiscall, 70808,  CRadioManager, void) {
__asm {

 Block0:
	push offset _S_REDIST
	call dword ptr [ZImports::_AIL_set_redist_directory]
	push 1
	push 8
	push 0xAC44
	push 1
	push 1
	call dword ptr [ZImports::_AIL_quick_startup]
	ret
}
}
// CUIRadio::OnSetFocus
__SUB_CLASS_THIS(002C8350, __thiscall, 70789,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CRadioManager::~CRadioManager
_SUB_EXCEPTION_HANDLER(2CBE60)
__SUB_CLASS_THIS0(002CBE60, __thiscall, 70808,  CRadioManager, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2CBE60
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
	int 3// TODO: 	mov dword ptr [esi],offset CRadioManager::`vftable'
	xor ebx,ebx
	push ebx
	mov dword ptr [esp+0x20],4
	call CRadioManager::Stop
	mov ecx,esi
	call CRadioManager::MMS_Shutdown
	lea edi,[esi+0x24]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CUIRadio>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	mov eax,dword ptr [esi+0x1C]
	mov byte ptr [esp+0x1C],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x18]
	mov byte ptr [esp+0x1C],1
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov esi,dword ptr [esi+0x14]
	mov byte ptr [esp+0x1C],bl
	cmp esi,ebx
	je Block8

 Block7:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov dword ptr [TSingleton<CRadioManager>::ms_pInstance],ebx
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
// CRadioManager::ShowUI
_SUB_EXCEPTION_HANDLER(2CB870)
__SUB_CLASS_THIS(002CB870, __thiscall, 70811,  CRadioManager, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2CB870
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+8]
	test eax,eax
	je Block10

 Block1:
	cmp dword ptr [esp+0x18],0
	je Block7

 Block2:
	cmp dword ptr [esi+0x28],0
	jne Block10

 Block3:
	push 0xAD0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x10],0
	test eax,eax
	je Block5

 Block4:
	mov edx,dword ptr [esi+0xC]
	push edx
	mov ecx,eax
	call CUIRadio::_ctor_0
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	push eax
	lea ecx,[esi+0x24]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call ZRef<CUIRadio>::op_assign_ptr
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4

 Block7:
	mov ecx,dword ptr [esi+0x28]
	test ecx,ecx
	je Block10

 Block8:
	call CWnd::Destroy
	add esi,0x24
	cmp dword ptr [esi+4],0
	je Block10

 Block9:
	push 0
	mov ecx,esi
	call ZRef<CUIRadio>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block10:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 4
}
}
// CUIRadio::SetMute
_SUB_EXCEPTION_HANDLER(2C8370)
__SUB_CLASS_THIS(002C8370, __thiscall, 70793,  CUIRadio, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2C8370
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	push ebx
	push ebp
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x58]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x10],ebp
	cmp dword ptr [esp+0x68],0
	mov esi,dword ptr [ZImports::_VariantInit]
	je Block34

 Block1:
	lea eax,[esp+0x28]
	push eax
	call esi
	lea ecx,[esp+0x28]
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
	mov edx,3
	mov dword ptr [esp+0x60],0
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],0
	mov ecx,dword ptr [ebp+0xACC]
	mov bl,1
	mov byte ptr [esp+0x60],bl
	test ecx,ecx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea eax,[esp+0x68]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x60],2
	test ecx,ecx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push 0
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0x60],bl
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov ebx,8
	mov byte ptr [esp+0x60],0
	cmp word ptr [esp+0x18],bx
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp word ptr [esp+0x28],bx
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block17:
	lea ecx,[esp+0x18]
	push ecx
	call esi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	lea eax,[esp+0x28]
	push eax
	mov dword ptr [esp+0x64],3
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	mov ecx,dword ptr [ebp+0xAC8]
	mov bl,4
	mov byte ptr [esp+0x60],bl
	test ecx,ecx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea edx,[esp+0x68]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x60],5
	test ecx,ecx
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea eax,[esp+0x18]
	push eax
	lea edx,[esp+0x2C]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0x60],bl
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block27:
	mov esi,8
	mov byte ptr [esp+0x60],3
	cmp word ptr [esp+0x28],si
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp word ptr [esp+0x18],si
	jne Block33

 Block32:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	jmp Block66

 Block33:
	lea eax,[esp+0x18]
	jmp Block69

 Block34:
	lea ecx,[esp+0x18]
	push ecx
	call esi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	mov eax,3
	mov dword ptr [esp+0x60],6
	mov word ptr [esp+0x28],ax
	mov dword ptr [esp+0x30],0
	mov ecx,dword ptr [ebp+0xAC8]
	mov bl,7
	mov byte ptr [esp+0x60],bl
	test ecx,ecx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea edx,[esp+0x68]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x60],8
	test ecx,ecx
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea eax,[esp+0x18]
	push eax
	lea edx,[esp+0x2C]
	push edx
	push 0
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0x60],bl
	test eax,eax
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block42:
	mov ebp,8
	mov byte ptr [esp+0x60],6
	cmp word ptr [esp+0x28],bp
	jne Block45

 Block43:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp word ptr [esp+0x18],bp
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block50:
	lea ecx,[esp+0x48]
	push ecx
	call esi
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block52

 Block51:
	push eax
	call _com_issue_error

 Block52:
	lea eax,[esp+0x38]
	push eax
	mov dword ptr [esp+0x64],9
	call esi
	lea ecx,[esp+0x38]
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
	mov edx,dword ptr [esp+0x10]
	mov ecx,dword ptr [edx+0xACC]
	mov bl,0xA
	mov byte ptr [esp+0x60],bl
	test ecx,ecx
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	lea eax,[esp+0x14]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x60],0xB
	test ecx,ecx
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x60],bl
	test eax,eax
	je Block60

 Block59:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block60:
	mov byte ptr [esp+0x60],9
	cmp word ptr [esp+0x38],bp
	jne Block63

 Block61:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp word ptr [esp+0x48],bp
	jne Block68

 Block65:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx

 Block66:
	test eax,eax
	je Block70

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret 4

 Block68:
	lea eax,[esp+0x48]

 Block69:
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret 4
}
}
// CRadioManager::GetTrackName
__SUB_CLASS_THIS0(002C8A20, __thiscall, 70815,  CRadioManager, ZXString<char>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	add ecx,0x14
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
// CRadioManager::MMS_SetVolume
__SUB_CLASS_THIS(002C8130, __thiscall, 70817,  CRadioManager, void, float) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x20]
	test eax,eax
	je Block2

 Block1:
	fldz
	sub esp,8
	fstp dword ptr [esp+4]
	fld dword ptr [esp+0xC]
	fstp dword ptr [esp]
	push eax
	call dword ptr [ZImports::_AIL_quick_set_volume]

 Block2:
	ret 4
}
}
// CUIRadio::CreateLayer
_SUB_EXCEPTION_HANDLER(2C8E60)
__SUB_CLASS_THIS(002C8E60, __thiscall, 70793,  CUIRadio, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2C8E60
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
	mov dword ptr [esp+0x18],ebx
	mov eax,dword ptr [esp+0xE4]
	neg eax
	sbb eax,eax
	and eax,0x28
	mov dword ptr [esp+0xB0],eax
	mov eax,dword ptr [ebx+0xAC8]
	xor edi,edi
	cmp eax,edi
	je Block2

 Block1:
	mov dword ptr [ebx+0xAC8],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x50]
	push eax
	call ebp
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov edx,3
	mov dword ptr [esp+0xDC],edi
	mov word ptr [esp+0x40],dx
	mov dword ptr [esp+0x48],edi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xDC],1
	cmp ecx,edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[esp+0x50]
	push eax
	lea edx,[esp+0x44]
	push edx
	push 0xC006156C
	push edi
	push edi
	push edi
	push edi
	lea eax,[esp+0x30]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0xAC8]
	cmp esi,eax
	je Block11

 Block7:
	mov dword ptr [ebx+0xAC8],eax
	cmp eax,edi
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block9:
	cmp esi,edi
	je Block11

 Block10:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block11:
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block13:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0xDC],0
	cmp word ptr [esp+0x40],si
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x40]
	push edx
	call ebx

 Block17:
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	cmp word ptr [esp+0x50],si
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x50]
	push ecx
	call ebx

 Block21:
	lea edx,[esp+0x2C]
	push edx
	call ebp
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea ecx,[esp+0x1C]
	push ecx
	mov dword ptr [esp+0xE0],2
	call ebp
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	lea eax,[esp+0x80]
	push eax
	mov byte ptr [esp+0xE0],3
	call ebp
	lea ecx,[esp+0x80]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	lea edx,[esp+0x60]
	push edx
	mov byte ptr [esp+0xE0],4
	call ebp
	lea eax,[esp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	mov ecx,3
	mov word ptr [esp+0x70],cx
	mov dword ptr [esp+0x78],0x96
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0xE0],6
	call ebp
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block31

 Block30:
	push eax
	call _com_issue_error

 Block31:
	lea ecx,[esp+0x50]
	push ecx
	mov byte ptr [esp+0xE0],7
	call ebp
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x88]
	push edx
	lea eax,[esp+0x6C]
	push eax
	lea ecx,[esp+0x80]
	push ecx
	push edi
	push edi
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x70]
	push eax
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMGRAD__5
	mov byte ptr [esp+0x108],8
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x104],9
	cmp dword ptr [_D_G_RM],edi
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea ecx,[esp+0xB8]
	push ecx
	mov byte ptr [esp+0x108],8
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov bl,0xA
	mov ecx,eax
	mov byte ptr [esp+0xF8],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x54],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block38

 Block36:
	cmp eax,0x80004002
	je Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [edx+0xAC8]
	mov byte ptr [esp+0xF0],0xB
	cmp ecx,edi
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	mov esi,dword ptr [esp+0x50]
	push esi
	lea eax,[esp+0xB8]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0xA0],8
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0xA8]
	xor ecx,ecx
	mov word ptr [esp+0xA0],cx
	cmp eax,edi
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea edx,[esp+0xA0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov byte ptr [esp+0xDC],bl
	cmp esi,edi
	je Block46

 Block45:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block46:
	cmp word ptr [esp+0x90],8
	mov byte ptr [esp+0xDC],8
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x98]
	xor edx,edx
	mov word ptr [esp+0x90],dx
	cmp eax,edi
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea eax,[esp+0x90]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov ebx,8
	mov byte ptr [esp+0xDC],7
	cmp word ptr [esp+0x50],bx
	jne Block57

 Block51:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,edi
	je Block53

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block53:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block54:
	mov byte ptr [esp+0xDC],6
	cmp word ptr [esp+0x40],bx
	jne Block58

 Block55:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,edi
	je Block59

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block57:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x50]
	push edx
	call esi
	jmp Block54

 Block58:
	lea ecx,[esp+0x40]
	push ecx
	call esi

 Block59:
	mov byte ptr [esp+0xDC],5
	cmp word ptr [esp+0x70],bx
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x78]
	xor edx,edx
	mov word ptr [esp+0x70],dx
	cmp eax,edi
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[esp+0x70]
	push eax
	call esi

 Block63:
	mov byte ptr [esp+0xDC],4
	cmp word ptr [esp+0x60],bx
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	cmp eax,edi
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea edx,[esp+0x60]
	push edx
	call esi

 Block67:
	mov byte ptr [esp+0xDC],3
	cmp word ptr [esp+0x80],bx
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [esp+0x80],ax
	mov eax,dword ptr [esp+0x88]
	cmp eax,edi
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea ecx,[esp+0x80]
	push ecx
	call esi

 Block71:
	mov byte ptr [esp+0xDC],2
	cmp word ptr [esp+0x1C],bx
	jne Block74

 Block72:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,edi
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea eax,[esp+0x1C]
	push eax
	call esi

 Block75:
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	cmp word ptr [esp+0x2C],bx
	jne Block78

 Block76:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,edi
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea edx,[esp+0x2C]
	push edx
	call esi

 Block79:
	lea eax,[esp+0x40]
	push eax
	call ebp
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block81

 Block80:
	push eax
	call _com_issue_error

 Block81:
	lea edx,[esp+0x50]
	push edx
	mov dword ptr [esp+0xE0],0xC
	call ebp
	lea eax,[esp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block83

 Block82:
	push eax
	call _com_issue_error

 Block83:
	lea ecx,[esp+0x70]
	push ecx
	mov byte ptr [esp+0xE0],0xD
	call ebp
	lea edx,[esp+0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block85

 Block84:
	push eax
	call _com_issue_error

 Block85:
	lea eax,[esp+0x60]
	push eax
	mov byte ptr [esp+0xE0],0xE
	call ebp
	lea ecx,[esp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block87

 Block86:
	push eax
	call _com_issue_error

 Block87:
	mov edx,3
	mov word ptr [esp+0x80],dx
	mov dword ptr [esp+0x88],0x96
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xE0],0x10
	call ebp
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block89

 Block88:
	push eax
	call _com_issue_error

 Block89:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0xE0],0x11
	call ebp
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block91

 Block90:
	push eax
	call _com_issue_error

 Block91:
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x78]
	push eax
	lea ecx,[esp+0x6C]
	push ecx
	lea edx,[esp+0x90]
	push edx
	push edi
	push edi
	lea eax,[esp+0x38]
	push eax
	lea ecx,[esp+0x4C]
	push ecx
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMGRAD__4
	mov byte ptr [esp+0x108],0x12
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x104],0x13
	cmp dword ptr [_D_G_RM],edi
	jne Block93

 Block92:
	push 0x80004003
	call _com_issue_error

 Block93:
	lea edx,[esp+0xC8]
	mov byte ptr [esp+0x104],0x12
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov bl,0x14
	mov ecx,eax
	mov byte ptr [esp+0xF8],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x54],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block96

 Block94:
	cmp eax,0x80004002
	je Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [eax+0xAC8]
	mov byte ptr [esp+0xF0],0x15
	cmp ecx,edi
	jne Block98

 Block97:
	push 0x80004003
	call _com_issue_error

 Block98:
	mov esi,dword ptr [esp+0x50]
	push esi
	lea edx,[esp+0xA8]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x90],8
	jne Block101

 Block99:
	xor eax,eax
	mov word ptr [esp+0x90],ax
	mov eax,dword ptr [esp+0x98]
	cmp eax,edi
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea ecx,[esp+0x90]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block102:
	mov byte ptr [esp+0xDC],bl
	cmp esi,edi
	je Block104

 Block103:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block104:
	cmp word ptr [esp+0xA0],8
	mov byte ptr [esp+0xDC],0x12
	jne Block107

 Block105:
	mov eax,dword ptr [esp+0xA8]
	xor ecx,ecx
	mov word ptr [esp+0xA0],cx
	cmp eax,edi
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea edx,[esp+0xA0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block108:
	mov ebx,8
	mov byte ptr [esp+0xDC],0x11
	cmp word ptr [esp+0x2C],bx
	jne Block115

 Block109:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,edi
	je Block111

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block111:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block112:
	mov byte ptr [esp+0xDC],0x10
	cmp word ptr [esp+0x1C],bx
	jne Block116

 Block113:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,edi
	je Block117

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block115:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	jmp Block112

 Block116:
	lea eax,[esp+0x1C]
	push eax
	call esi

 Block117:
	mov byte ptr [esp+0xDC],0xF
	cmp word ptr [esp+0x80],bx
	jne Block120

 Block118:
	mov eax,dword ptr [esp+0x88]
	xor ecx,ecx
	mov word ptr [esp+0x80],cx
	cmp eax,edi
	je Block121

 Block119:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block120:
	lea edx,[esp+0x80]
	push edx
	call esi

 Block121:
	mov byte ptr [esp+0xDC],0xE
	cmp word ptr [esp+0x60],bx
	jne Block124

 Block122:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	cmp eax,edi
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea ecx,[esp+0x60]
	push ecx
	call esi

 Block125:
	mov byte ptr [esp+0xDC],0xD
	cmp word ptr [esp+0x70],bx
	jne Block128

 Block126:
	mov eax,dword ptr [esp+0x78]
	xor edx,edx
	mov word ptr [esp+0x70],dx
	cmp eax,edi
	je Block129

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block128:
	lea eax,[esp+0x70]
	push eax
	call esi

 Block129:
	mov byte ptr [esp+0xDC],0xC
	cmp word ptr [esp+0x50],bx
	jne Block132

 Block130:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,edi
	je Block133

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block133

 Block132:
	lea edx,[esp+0x50]
	push edx
	call esi

 Block133:
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	cmp word ptr [esp+0x40],bx
	jne Block136

 Block134:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,edi
	je Block137

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block137

 Block136:
	lea ecx,[esp+0x40]
	push ecx
	call esi

 Block137:
	lea edx,[esp+0x40]
	push edx
	call ebp
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block139

 Block138:
	push eax
	call _com_issue_error

 Block139:
	lea ecx,[esp+0x50]
	push ecx
	mov dword ptr [esp+0xE0],0x16
	call ebp
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block141

 Block140:
	push eax
	call _com_issue_error

 Block141:
	lea eax,[esp+0x70]
	push eax
	mov byte ptr [esp+0xE0],0x17
	call ebp
	lea ecx,[esp+0x70]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block143

 Block142:
	push eax
	call _com_issue_error

 Block143:
	lea edx,[esp+0x60]
	push edx
	mov byte ptr [esp+0xE0],0x18
	call ebp
	lea eax,[esp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block145

 Block144:
	push eax
	call _com_issue_error

 Block145:
	mov ecx,3
	mov word ptr [esp+0x80],cx
	mov dword ptr [esp+0x88],0x96
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xE0],0x1A
	call ebp
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block147

 Block146:
	push eax
	call _com_issue_error

 Block147:
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0xE0],0x1B
	call ebp
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block149

 Block148:
	push eax
	call _com_issue_error

 Block149:
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x54]
	push ecx
	lea edx,[esp+0x78]
	push edx
	lea eax,[esp+0x6C]
	push eax
	lea ecx,[esp+0x90]
	push ecx
	push edi
	push edi
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x4C]
	push eax
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMGRAD__3
	mov byte ptr [esp+0x108],0x1C
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x104],0x1D
	cmp dword ptr [_D_G_RM],edi
	jne Block151

 Block150:
	push 0x80004003
	call _com_issue_error

 Block151:
	lea ecx,[esp+0xC8]
	push ecx
	mov byte ptr [esp+0x108],0x1C
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov bl,0x1E
	mov ecx,eax
	mov byte ptr [esp+0xF8],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x54],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block154

 Block152:
	cmp eax,0x80004002
	je Block154

 Block153:
	push eax
	call _com_issue_error

 Block154:
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [edx+0xAC8]
	mov byte ptr [esp+0xF0],0x1F
	cmp ecx,edi
	jne Block156

 Block155:
	push 0x80004003
	call _com_issue_error

 Block156:
	mov esi,dword ptr [esp+0x50]
	push esi
	lea eax,[esp+0xA8]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x90],8
	jne Block159

 Block157:
	mov eax,dword ptr [esp+0x98]
	xor ecx,ecx
	mov word ptr [esp+0x90],cx
	cmp eax,edi
	je Block160

 Block158:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block160

 Block159:
	lea edx,[esp+0x90]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block160:
	mov byte ptr [esp+0xDC],bl
	cmp esi,edi
	je Block162

 Block161:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block162:
	cmp word ptr [esp+0xA0],8
	mov byte ptr [esp+0xDC],0x1C
	jne Block165

 Block163:
	mov eax,dword ptr [esp+0xA8]
	xor edx,edx
	mov word ptr [esp+0xA0],dx
	cmp eax,edi
	je Block166

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block166

 Block165:
	lea eax,[esp+0xA0]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block166:
	mov ebx,8
	mov byte ptr [esp+0xDC],0x1B
	cmp word ptr [esp+0x2C],bx
	jne Block173

 Block167:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,edi
	je Block169

 Block168:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block169:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block170:
	mov byte ptr [esp+0xDC],0x1A
	cmp word ptr [esp+0x1C],bx
	jne Block174

 Block171:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,edi
	je Block175

 Block172:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block175

 Block173:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x2C]
	push edx
	call esi
	jmp Block170

 Block174:
	lea ecx,[esp+0x1C]
	push ecx
	call esi

 Block175:
	mov byte ptr [esp+0xDC],0x19
	cmp word ptr [esp+0x80],bx
	jne Block178

 Block176:
	mov eax,dword ptr [esp+0x88]
	xor edx,edx
	mov word ptr [esp+0x80],dx
	cmp eax,edi
	je Block179

 Block177:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block179

 Block178:
	lea eax,[esp+0x80]
	push eax
	call esi

 Block179:
	mov byte ptr [esp+0xDC],0x18
	cmp word ptr [esp+0x60],bx
	jne Block182

 Block180:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	cmp eax,edi
	je Block183

 Block181:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block183

 Block182:
	lea edx,[esp+0x60]
	push edx
	call esi

 Block183:
	mov byte ptr [esp+0xDC],0x17
	cmp word ptr [esp+0x70],bx
	jne Block186

 Block184:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	cmp eax,edi
	je Block187

 Block185:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block187

 Block186:
	lea ecx,[esp+0x70]
	push ecx
	call esi

 Block187:
	mov byte ptr [esp+0xDC],0x16
	cmp word ptr [esp+0x50],bx
	jne Block190

 Block188:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	cmp eax,edi
	je Block191

 Block189:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block191

 Block190:
	lea eax,[esp+0x50]
	push eax
	call esi

 Block191:
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	cmp word ptr [esp+0x40],bx
	jne Block194

 Block192:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	cmp eax,edi
	je Block195

 Block193:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block195

 Block194:
	lea edx,[esp+0x40]
	push edx
	call esi

 Block195:
	lea eax,[esp+0x40]
	push eax
	call ebp
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block197

 Block196:
	push eax
	call _com_issue_error

 Block197:
	lea edx,[esp+0x50]
	push edx
	mov dword ptr [esp+0xE0],0x20
	call ebp
	lea eax,[esp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block199

 Block198:
	push eax
	call _com_issue_error

 Block199:
	lea ecx,[esp+0x70]
	push ecx
	mov byte ptr [esp+0xE0],0x21
	call ebp
	lea edx,[esp+0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block201

 Block200:
	push eax
	call _com_issue_error

 Block201:
	lea eax,[esp+0x60]
	push eax
	mov byte ptr [esp+0xE0],0x22
	call ebp
	lea ecx,[esp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block203

 Block202:
	push eax
	call _com_issue_error

 Block203:
	mov edx,3
	mov word ptr [esp+0x80],dx
	mov dword ptr [esp+0x88],0x96
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xE0],0x24
	call ebp
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block205

 Block204:
	push eax
	call _com_issue_error

 Block205:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0xE0],0x25
	call ebp
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block207

 Block206:
	push eax
	call _com_issue_error

 Block207:
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x78]
	push eax
	lea ecx,[esp+0x6C]
	push ecx
	lea edx,[esp+0x90]
	push edx
	push edi
	push edi
	lea eax,[esp+0x38]
	push eax
	lea ecx,[esp+0x4C]
	push ecx
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	mov bl,0x26
	push offset _S_UIUIWINDOWIMGRAD__2
	mov byte ptr [esp+0x108],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x104],0x27
	cmp dword ptr [_D_G_RM],edi
	jne Block209

 Block208:
	push 0x80004003
	call _com_issue_error

 Block209:
	lea edx,[esp+0xC8]
	mov byte ptr [esp+0x104],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xF8],0x28
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x54],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block212

 Block210:
	cmp eax,0x80004002
	je Block212

 Block211:
	push eax
	call _com_issue_error

 Block212:
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [eax+0xAC8]
	mov byte ptr [esp+0xF0],0x29
	cmp ecx,edi
	jne Block214

 Block213:
	push 0x80004003
	call _com_issue_error

 Block214:
	mov esi,dword ptr [esp+0x50]
	push esi
	lea edx,[esp+0xA8]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x90],8
	jne Block217

 Block215:
	xor eax,eax
	mov word ptr [esp+0x90],ax
	mov eax,dword ptr [esp+0x98]
	cmp eax,edi
	je Block218

 Block216:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block218

 Block217:
	lea ecx,[esp+0x90]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block218:
	mov byte ptr [esp+0xDC],0x28
	cmp esi,edi
	je Block220

 Block219:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block220:
	cmp word ptr [esp+0xA0],8
	mov byte ptr [esp+0xDC],bl
	jne Block223

 Block221:
	mov eax,dword ptr [esp+0xA8]
	xor ecx,ecx
	mov word ptr [esp+0xA0],cx
	cmp eax,edi
	je Block224

 Block222:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block224

 Block223:
	lea edx,[esp+0xA0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block224:
	mov ebx,8
	mov byte ptr [esp+0xDC],0x25
	cmp word ptr [esp+0x2C],bx
	jne Block231

 Block225:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,edi
	je Block227

 Block226:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block227:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block228:
	mov byte ptr [esp+0xDC],0x24
	cmp word ptr [esp+0x1C],bx
	jne Block232

 Block229:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,edi
	je Block233

 Block230:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block233

 Block231:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	jmp Block228

 Block232:
	lea eax,[esp+0x1C]
	push eax
	call esi

 Block233:
	mov byte ptr [esp+0xDC],0x23
	cmp word ptr [esp+0x80],bx
	jne Block236

 Block234:
	mov eax,dword ptr [esp+0x88]
	xor ecx,ecx
	mov word ptr [esp+0x80],cx
	cmp eax,edi
	je Block237

 Block235:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block237

 Block236:
	lea edx,[esp+0x80]
	push edx
	call esi

 Block237:
	mov byte ptr [esp+0xDC],0x22
	cmp word ptr [esp+0x60],bx
	jne Block240

 Block238:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	cmp eax,edi
	je Block241

 Block239:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block241

 Block240:
	lea ecx,[esp+0x60]
	push ecx
	call esi

 Block241:
	mov byte ptr [esp+0xDC],0x21
	cmp word ptr [esp+0x70],bx
	jne Block244

 Block242:
	mov eax,dword ptr [esp+0x78]
	xor edx,edx
	mov word ptr [esp+0x70],dx
	cmp eax,edi
	je Block245

 Block243:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block245

 Block244:
	lea eax,[esp+0x70]
	push eax
	call esi

 Block245:
	mov byte ptr [esp+0xDC],0x20
	cmp word ptr [esp+0x50],bx
	jne Block248

 Block246:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,edi
	je Block249

 Block247:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block249

 Block248:
	lea edx,[esp+0x50]
	push edx
	call esi

 Block249:
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	cmp word ptr [esp+0x40],bx
	jne Block252

 Block250:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,edi
	je Block253

 Block251:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block253

 Block252:
	lea ecx,[esp+0x40]
	push ecx
	call esi

 Block253:
	lea edx,[esp+0x40]
	push edx
	call ebp
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block255

 Block254:
	push eax
	call _com_issue_error

 Block255:
	lea ecx,[esp+0x50]
	push ecx
	mov dword ptr [esp+0xE0],0x2A
	call ebp
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block257

 Block256:
	push eax
	call _com_issue_error

 Block257:
	lea eax,[esp+0x70]
	push eax
	mov byte ptr [esp+0xE0],0x2B
	call ebp
	lea ecx,[esp+0x70]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block259

 Block258:
	push eax
	call _com_issue_error

 Block259:
	lea edx,[esp+0x60]
	push edx
	mov byte ptr [esp+0xE0],0x2C
	call ebp
	lea eax,[esp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block261

 Block260:
	push eax
	call _com_issue_error

 Block261:
	mov ecx,3
	mov word ptr [esp+0x80],cx
	mov dword ptr [esp+0x88],0x96
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xE0],0x2E
	call ebp
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block263

 Block262:
	push eax
	call _com_issue_error

 Block263:
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0xE0],0x2F
	call ebp
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block265

 Block264:
	push eax
	call _com_issue_error

 Block265:
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x54]
	push ecx
	lea edx,[esp+0x78]
	push edx
	lea eax,[esp+0x6C]
	push eax
	lea ecx,[esp+0x90]
	push ecx
	push edi
	push edi
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x4C]
	push eax
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMGRAD__1
	mov byte ptr [esp+0x108],0x30
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x104],0x31
	cmp dword ptr [_D_G_RM],edi
	jne Block267

 Block266:
	push 0x80004003
	call _com_issue_error

 Block267:
	lea ecx,[esp+0xC8]
	push ecx
	mov byte ptr [esp+0x108],0x30
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov bl,0x32
	mov ecx,eax
	mov byte ptr [esp+0xF8],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x54],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block270

 Block268:
	cmp eax,0x80004002
	je Block270

 Block269:
	push eax
	call _com_issue_error

 Block270:
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [edx+0xAC8]
	mov byte ptr [esp+0xF0],0x33
	cmp ecx,edi
	jne Block272

 Block271:
	push 0x80004003
	call _com_issue_error

 Block272:
	mov esi,dword ptr [esp+0x50]
	push esi
	lea eax,[esp+0xA8]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x90],8
	jne Block275

 Block273:
	mov eax,dword ptr [esp+0x98]
	xor ecx,ecx
	mov word ptr [esp+0x90],cx
	cmp eax,edi
	je Block276

 Block274:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block276

 Block275:
	lea edx,[esp+0x90]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block276:
	mov byte ptr [esp+0xDC],bl
	cmp esi,edi
	je Block278

 Block277:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block278:
	cmp word ptr [esp+0xA0],8
	mov byte ptr [esp+0xDC],0x30
	jne Block281

 Block279:
	mov eax,dword ptr [esp+0xA8]
	xor edx,edx
	mov word ptr [esp+0xA0],dx
	cmp eax,edi
	je Block282

 Block280:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block282

 Block281:
	lea eax,[esp+0xA0]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block282:
	mov ebx,8
	mov byte ptr [esp+0xDC],0x2F
	cmp word ptr [esp+0x2C],bx
	jne Block289

 Block283:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,edi
	je Block285

 Block284:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block285:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block286:
	mov byte ptr [esp+0xDC],0x2E
	cmp word ptr [esp+0x1C],bx
	jne Block290

 Block287:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,edi
	je Block291

 Block288:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block291

 Block289:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x2C]
	push edx
	call esi
	jmp Block286

 Block290:
	lea ecx,[esp+0x1C]
	push ecx
	call esi

 Block291:
	mov byte ptr [esp+0xDC],0x2D
	cmp word ptr [esp+0x80],bx
	jne Block294

 Block292:
	mov eax,dword ptr [esp+0x88]
	xor edx,edx
	mov word ptr [esp+0x80],dx
	cmp eax,edi
	je Block295

 Block293:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block295

 Block294:
	lea eax,[esp+0x80]
	push eax
	call esi

 Block295:
	mov byte ptr [esp+0xDC],0x2C
	cmp word ptr [esp+0x60],bx
	jne Block298

 Block296:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	cmp eax,edi
	je Block299

 Block297:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block299

 Block298:
	lea edx,[esp+0x60]
	push edx
	call esi

 Block299:
	mov byte ptr [esp+0xDC],0x2B
	cmp word ptr [esp+0x70],bx
	jne Block302

 Block300:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	cmp eax,edi
	je Block303

 Block301:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block303

 Block302:
	lea ecx,[esp+0x70]
	push ecx
	call esi

 Block303:
	mov byte ptr [esp+0xDC],0x2A
	cmp word ptr [esp+0x50],bx
	jne Block306

 Block304:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	cmp eax,edi
	je Block307

 Block305:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block307

 Block306:
	lea eax,[esp+0x50]
	push eax
	call esi

 Block307:
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	cmp word ptr [esp+0x40],bx
	jne Block310

 Block308:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	cmp eax,edi
	je Block311

 Block309:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block311

 Block310:
	lea edx,[esp+0x40]
	push edx
	call esi

 Block311:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 2
	lea eax,[esp+0x18]
	push eax
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov ebx,0x34
	mov ecx,0xD
	mov dword ptr [esp+0xDC],ebx
	mov word ptr [esp+0x40],cx
	mov dword ptr [esp+0x48],eax
	cmp eax,edi
	je Block313

 Block312:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block313:
	mov ecx,dword ptr [esp+0x18]
	mov esi,dword ptr [ecx+0xAC8]
	mov byte ptr [esp+0xDC],0x35
	cmp esi,edi
	jne Block315

 Block314:
	push 0x80004003
	call _com_issue_error

 Block315:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x64]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x5C]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,edi
	jge Block317

 Block316:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block317:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0xDC],bl
	jne Block320

 Block318:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,edi
	je Block321

 Block319:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block321

 Block320:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block321:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	cmp eax,edi
	je Block323

 Block322:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block323:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block325

 Block324:
	push eax
	call _com_issue_error

 Block325:
	lea eax,[esp+0x2C]
	mov ebx,0x36
	push eax
	mov dword ptr [esp+0xE0],ebx
	call ebp
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block327

 Block326:
	push eax
	call _com_issue_error

 Block327:
	mov edx,dword ptr [esp+0x18]
	mov esi,dword ptr [edx+0xAC8]
	mov byte ptr [esp+0xDC],0x37
	cmp esi,edi
	jne Block329

 Block328:
	push 0x80004003
	call _com_issue_error

 Block329:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xC0]
	lea ecx,[esp+0x3C]
	push ecx
	push esi
	mov dword ptr [esp+0x44],edi
	call edx
	cmp eax,edi
	jge Block331

 Block330:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block331:
	mov eax,dword ptr [esp+0x18]
	mov esi,dword ptr [eax+0xAC8]
	mov edi,dword ptr [esp+0x3C]
	test esi,esi
	jne Block333

 Block332:
	push 0x80004003
	call _com_issue_error

 Block333:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xB8]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block335

 Block334:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block335:
	mov ecx,dword ptr [esp+0x18]
	mov ecx,dword ptr [ecx+0xAC8]
	test ecx,ecx
	jne Block337

 Block336:
	push 0x80004003
	call _com_issue_error

 Block337:
	lea edx,[esp+0x1C]
	push edx
	mov edx,0xFFFFFFFD
	sub edx,dword ptr [esp+0x18]
	lea eax,[esp+0x30]
	sub edx,dword ptr [esp+0xB4]
	push eax
	add edi,3
	push edi
	push edx
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0xDC],bl
	cmp word ptr [esp+0x2C],si
	jne Block340

 Block338:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block341

 Block339:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block341

 Block340:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block341:
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	cmp word ptr [esp+0x1C],si
	jne Block344

 Block342:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block345

 Block343:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block345

 Block344:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block345:
	mov ecx,dword ptr [esp+0x18]
	mov esi,dword ptr [ecx+0xAC8]
	xor edi,edi
	cmp esi,edi
	jne Block347

 Block346:
	push 0x80004003
	call _com_issue_error

 Block347:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	cmp eax,edi
	jge Block349

 Block348:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block349:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block351

 Block350:
	push eax
	call _com_issue_error

 Block351:
	lea eax,[esp+0x2C]
	push eax
	mov dword ptr [esp+0xE0],0x38
	call ebp
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block353

 Block352:
	push eax
	call _com_issue_error

 Block353:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [edx+0xAC8]
	mov bl,0x39
	mov byte ptr [esp+0xDC],bl
	cmp ecx,edi
	jne Block355

 Block354:
	push 0x80004003
	call _com_issue_error

 Block355:
	lea eax,[esp+0x14]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xDC],0x3A
	cmp ecx,edi
	jne Block357

 Block356:
	push 0x80004003
	call _com_issue_error

 Block357:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push edi
	push edi
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xDC],bl
	cmp eax,edi
	je Block359

 Block358:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block359:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xDC],0x38
	jne Block366

 Block360:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,edi
	je Block362

 Block361:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block362:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block363:
	cmp word ptr [esp+0x1C],8
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	jne Block367

 Block364:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,edi
	je Block368

 Block365:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block368

 Block366:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	jmp Block363

 Block367:
	lea eax,[esp+0x1C]
	push eax
	call esi

 Block368:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block370

 Block369:
	push eax
	call _com_issue_error

 Block370:
	lea eax,[esp+0x2C]
	mov ebx,0x3B
	push eax
	mov dword ptr [esp+0xE0],ebx
	call ebp
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block372

 Block371:
	push eax
	call _com_issue_error

 Block372:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [edx+0xAC8]
	mov byte ptr [esp+0xDC],0x3C
	cmp ecx,edi
	jne Block374

 Block373:
	push 0x80004003
	call _com_issue_error

 Block374:
	lea eax,[esp+0x1C]
	push eax
	lea edx,[esp+0x30]
	push edx
	push 0x20
	call IWzGr2DLayer::Animate
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xDC],bl
	jne Block377

 Block375:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,edi
	je Block378

 Block376:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block378

 Block377:
	lea ecx,[esp+0x2C]
	push ecx
	call esi

 Block378:
	cmp word ptr [esp+0x1C],8
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	jne Block381

 Block379:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,edi
	je Block382

 Block380:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block382

 Block381:
	lea eax,[esp+0x1C]
	push eax
	call esi

 Block382:
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [ecx+0xACC]
	cmp eax,edi
	je Block384

 Block383:
	mov dword ptr [ecx+0xACC],edi
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block384:
	lea eax,[esp+0x1C]
	push eax
	call ebp
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block386

 Block385:
	push eax
	call _com_issue_error

 Block386:
	mov ebx,0x3D
	mov edx,3
	mov dword ptr [esp+0xDC],ebx
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],edi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xDC],0x3E
	cmp ecx,edi
	jne Block388

 Block387:
	push 0x80004003
	call _com_issue_error

 Block388:
	lea eax,[esp+0x1C]
	push eax
	lea edx,[esp+0x30]
	push edx
	push 0xC006156C
	push edi
	push edi
	push edi
	push edi
	lea eax,[esp+0x30]
	push eax
	call IWzGr2D::CreateLayer
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ecx+0xACC]
	cmp esi,eax
	je Block393

 Block389:
	mov edx,ecx
	mov dword ptr [edx+0xACC],eax
	cmp eax,edi
	je Block391

 Block390:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block391:
	cmp esi,edi
	je Block393

 Block392:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block393:
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	je Block395

 Block394:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block395:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xDC],bl
	jne Block398

 Block396:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,edi
	je Block399

 Block397:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block399

 Block398:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block399:
	cmp word ptr [esp+0x1C],8
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	jne Block402

 Block400:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,edi
	je Block403

 Block401:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block403

 Block402:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block403:
	lea edx,[esp+0x40]
	push edx
	call ebp
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block405

 Block404:
	push eax
	call _com_issue_error

 Block405:
	lea ecx,[esp+0x50]
	push ecx
	mov dword ptr [esp+0xE0],0x3F
	call ebp
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block407

 Block406:
	push eax
	call _com_issue_error

 Block407:
	lea eax,[esp+0x70]
	push eax
	mov byte ptr [esp+0xE0],0x40
	call ebp
	lea ecx,[esp+0x70]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block409

 Block408:
	push eax
	call _com_issue_error

 Block409:
	lea edx,[esp+0x60]
	push edx
	mov byte ptr [esp+0xE0],0x41
	call ebp
	lea eax,[esp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block411

 Block410:
	push eax
	call _com_issue_error

 Block411:
	lea ecx,[esp+0x80]
	push ecx
	mov byte ptr [esp+0xE0],0x42
	call ebp
	lea edx,[esp+0x80]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block413

 Block412:
	push eax
	call _com_issue_error

 Block413:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xE0],0x43
	call ebp
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block415

 Block414:
	push eax
	call _com_issue_error

 Block415:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0xE0],0x44
	call ebp
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block417

 Block416:
	push eax
	call _com_issue_error

 Block417:
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x78]
	push eax
	lea ecx,[esp+0x6C]
	push ecx
	lea edx,[esp+0x90]
	push edx
	push edi
	push edi
	lea eax,[esp+0x38]
	push eax
	lea ecx,[esp+0x4C]
	push ecx
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMGRAD
	mov byte ptr [esp+0x108],0x45
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x104],0x46
	cmp dword ptr [_D_G_RM],edi
	jne Block419

 Block418:
	push 0x80004003
	call _com_issue_error

 Block419:
	lea edx,[esp+0xC8]
	mov byte ptr [esp+0x104],0x45
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov bl,0x47
	mov ecx,eax
	mov byte ptr [esp+0xF8],bl
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x2C],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block422

 Block420:
	cmp eax,0x80004002
	je Block422

 Block421:
	push eax
	call _com_issue_error

 Block422:
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [eax+0xACC]
	mov byte ptr [esp+0xF0],0x48
	cmp ecx,edi
	jne Block424

 Block423:
	push 0x80004003
	call _com_issue_error

 Block424:
	mov esi,dword ptr [esp+0x28]
	push esi
	lea edx,[esp+0xA8]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x90],8
	jne Block427

 Block425:
	xor eax,eax
	mov word ptr [esp+0x90],ax
	mov eax,dword ptr [esp+0x98]
	cmp eax,edi
	je Block428

 Block426:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block428

 Block427:
	lea ecx,[esp+0x90]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block428:
	mov byte ptr [esp+0xDC],bl
	cmp esi,edi
	je Block430

 Block429:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block430:
	cmp word ptr [esp+0xA0],8
	mov byte ptr [esp+0xDC],0x45
	jne Block433

 Block431:
	mov eax,dword ptr [esp+0xA8]
	xor ecx,ecx
	mov word ptr [esp+0xA0],cx
	cmp eax,edi
	je Block434

 Block432:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block434

 Block433:
	lea edx,[esp+0xA0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block434:
	mov ebx,8
	mov byte ptr [esp+0xDC],0x44
	cmp word ptr [esp+0x2C],bx
	jne Block441

 Block435:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,edi
	je Block437

 Block436:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block437:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block438:
	mov byte ptr [esp+0xDC],0x43
	cmp word ptr [esp+0x1C],bx
	jne Block442

 Block439:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,edi
	je Block443

 Block440:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block443

 Block441:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	jmp Block438

 Block442:
	lea eax,[esp+0x1C]
	push eax
	call esi

 Block443:
	mov byte ptr [esp+0xDC],0x42
	cmp word ptr [esp+0x80],bx
	jne Block446

 Block444:
	mov eax,dword ptr [esp+0x88]
	xor ecx,ecx
	mov word ptr [esp+0x80],cx
	cmp eax,edi
	je Block447

 Block445:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block447

 Block446:
	lea edx,[esp+0x80]
	push edx
	call esi

 Block447:
	mov byte ptr [esp+0xDC],0x41
	cmp word ptr [esp+0x60],bx
	jne Block450

 Block448:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	cmp eax,edi
	je Block451

 Block449:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block451

 Block450:
	lea ecx,[esp+0x60]
	push ecx
	call esi

 Block451:
	mov byte ptr [esp+0xDC],0x40
	cmp word ptr [esp+0x70],bx
	jne Block454

 Block452:
	mov eax,dword ptr [esp+0x78]
	xor edx,edx
	mov word ptr [esp+0x70],dx
	cmp eax,edi
	je Block455

 Block453:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block455

 Block454:
	lea eax,[esp+0x70]
	push eax
	call esi

 Block455:
	mov byte ptr [esp+0xDC],0x3F
	cmp word ptr [esp+0x50],bx
	jne Block458

 Block456:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,edi
	je Block459

 Block457:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block459

 Block458:
	lea edx,[esp+0x50]
	push edx
	call esi

 Block459:
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	cmp word ptr [esp+0x40],bx
	jne Block462

 Block460:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,edi
	je Block463

 Block461:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block463

 Block462:
	lea ecx,[esp+0x40]
	push ecx
	call esi

 Block463:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 2
	lea edx,[esp+0x18]
	push edx
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov ebx,0x49
	mov ecx,0xD
	mov dword ptr [esp+0xDC],ebx
	mov word ptr [esp+0x40],cx
	mov dword ptr [esp+0x48],eax
	cmp eax,edi
	je Block465

 Block464:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block465:
	mov ecx,dword ptr [esp+0x18]
	mov esi,dword ptr [ecx+0xACC]
	mov byte ptr [esp+0xDC],0x4A
	cmp esi,edi
	jne Block467

 Block466:
	push 0x80004003
	call _com_issue_error

 Block467:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x64]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x5C]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,edi
	jge Block469

 Block468:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block469:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0xDC],bl
	jne Block472

 Block470:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,edi
	je Block473

 Block471:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block473

 Block472:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block473:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	cmp eax,edi
	je Block475

 Block474:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block475:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block477

 Block476:
	push eax
	call _com_issue_error

 Block477:
	lea eax,[esp+0x2C]
	mov ebx,0x4B
	push eax
	mov dword ptr [esp+0xE0],ebx
	call ebp
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block479

 Block478:
	push eax
	call _com_issue_error

 Block479:
	mov edx,dword ptr [esp+0x18]
	mov esi,dword ptr [edx+0xACC]
	mov byte ptr [esp+0xDC],0x4C
	cmp esi,edi
	jne Block481

 Block480:
	push 0x80004003
	call _com_issue_error

 Block481:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xC0]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],edi
	call edx
	cmp eax,edi
	jge Block483

 Block482:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block483:
	mov eax,dword ptr [esp+0x18]
	mov esi,dword ptr [eax+0xACC]
	mov edi,dword ptr [esp+0x14]
	test esi,esi
	jne Block485

 Block484:
	push 0x80004003
	call _com_issue_error

 Block485:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xB8]
	lea edx,[esp+0x3C]
	push edx
	push esi
	mov dword ptr [esp+0x44],0
	call eax
	test eax,eax
	jge Block487

 Block486:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block487:
	mov ecx,dword ptr [esp+0x18]
	mov ecx,dword ptr [ecx+0xACC]
	test ecx,ecx
	jne Block489

 Block488:
	push 0x80004003
	call _com_issue_error

 Block489:
	lea edx,[esp+0x1C]
	push edx
	mov edx,0xFFFFFFFD
	sub edx,dword ptr [esp+0x40]
	lea eax,[esp+0x30]
	sub edx,dword ptr [esp+0xB4]
	push eax
	add edi,3
	push edi
	push edx
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0xDC],bl
	cmp word ptr [esp+0x2C],si
	jne Block492

 Block490:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block493

 Block491:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block493

 Block492:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block493:
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	cmp word ptr [esp+0x1C],si
	jne Block496

 Block494:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block497

 Block495:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block497

 Block496:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block497:
	mov edi,dword ptr [esp+0x18]
	mov esi,dword ptr [edi+0xACC]
	test esi,esi
	jne Block499

 Block498:
	push 0x80004003
	call _com_issue_error

 Block499:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push esi
	call edx
	test eax,eax
	jge Block501

 Block500:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block501:
	lea eax,[esp+0x1C]
	push eax
	call ebp
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block503

 Block502:
	push eax
	call _com_issue_error

 Block503:
	lea edx,[esp+0x2C]
	push edx
	mov dword ptr [esp+0xE0],0x4D
	call ebp
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block505

 Block504:
	push eax
	call _com_issue_error

 Block505:
	mov ecx,dword ptr [edi+0xACC]
	mov bl,0x4E
	mov byte ptr [esp+0xDC],bl
	test ecx,ecx
	jne Block507

 Block506:
	push 0x80004003
	call _com_issue_error

 Block507:
	lea edx,[esp+0xB0]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xDC],0x4F
	test ecx,ecx
	jne Block509

 Block508:
	push 0x80004003
	call _com_issue_error

 Block509:
	lea eax,[esp+0x1C]
	push eax
	lea edx,[esp+0x30]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0xB0]
	mov byte ptr [esp+0xDC],bl
	test eax,eax
	je Block511

 Block510:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block511:
	mov edi,8
	mov byte ptr [esp+0xDC],0x4D
	cmp word ptr [esp+0x2C],di
	jne Block518

 Block512:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block514

 Block513:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block514:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block515:
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	cmp word ptr [esp+0x1C],di
	jne Block519

 Block516:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block520

 Block517:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block520

 Block518:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	jmp Block515

 Block519:
	lea eax,[esp+0x1C]
	push eax
	call esi

 Block520:
	lea ecx,[esp+0xC4]
	push ecx
	call ebp
	lea edx,[esp+0xC4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block522

 Block521:
	push eax
	call _com_issue_error

 Block522:
	lea eax,[esp+0xB4]
	mov ebx,0x50
	push eax
	mov dword ptr [esp+0xE0],ebx
	call ebp
	lea ecx,[esp+0xB4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block524

 Block523:
	push eax
	call _com_issue_error

 Block524:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [edx+0xACC]
	mov byte ptr [esp+0xDC],0x51
	test ecx,ecx
	jne Block526

 Block525:
	push 0x80004003
	call _com_issue_error

 Block526:
	lea eax,[esp+0xC4]
	push eax
	lea edx,[esp+0xB8]
	push edx
	push 0
	call IWzGr2DLayer::Animate
	mov byte ptr [esp+0xDC],bl
	cmp word ptr [esp+0xB4],di
	jne Block529

 Block527:
	xor eax,eax
	mov word ptr [esp+0xB4],ax
	mov eax,dword ptr [esp+0xBC]
	test eax,eax
	je Block530

 Block528:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block530

 Block529:
	lea ecx,[esp+0xB4]
	push ecx
	call esi

 Block530:
	mov dword ptr [esp+0xDC],0xFFFFFFFF
	cmp word ptr [esp+0xC4],di
	jne Block533

 Block531:
	mov eax,dword ptr [esp+0xCC]
	xor edx,edx
	mov word ptr [esp+0xC4],dx
	test eax,eax
	je Block534

 Block532:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block534

 Block533:
	lea eax,[esp+0xC4]
	push eax
	call esi

 Block534:
	mov ecx,dword ptr [esp+0xD4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xCC
	ret 4
}
}
// CUIRadio::OnMouseEnter
__SUB_CLASS_THIS(002C8160, __thiscall, 70792,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	jne Block2

 Block1:
	add ecx,0x7C
	call CUIToolTip::ClearToolTip

 Block2:
	ret 4
}
}
// CRadioManager::MMS_Play
_SUB_EXCEPTION_HANDLER(2C8B10)
__SUB_CLASS_THIS(002C8B10, __thiscall, 70816,  CRadioManager, int32_t, NakedParam<ZXString<char>>, unsigned long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2C8B10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
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
	xor eax,eax
	mov dword ptr [ebp-4],eax
	mov dword ptr [ebp-0x14],eax
	mov ecx,dword ptr [ebp+8]
	push eax
	push eax
	push 0xFFFFFFFF
	push ecx
	push eax
	push eax
	mov byte ptr [ebp-4],1
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edi,esp
	lea edx,[ebp-0x18]
	push 0x1502
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ebx,eax
	mov eax,dword ptr [ebp+8]
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],2
	call MultiByteToWideChar
	mov ebx,dword ptr [ebx]
	push edi
	lea ecx,[ebp-0x14]
	push ebx
	push ecx
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x18]
	add esp,0xC
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x40]
	push edx
	call edi
	lea eax,[ebp-0x40]
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
	lea ecx,[ebp-0x30]
	push ecx
	mov byte ptr [ebp-4],3
	call edi
	lea edx,[ebp-0x30]
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
	mov edx,dword ptr [ebp-0x14]
	push 0
	push 0
	lea eax,[ebp-0x40]
	push eax
	lea ecx,[ebp-0x30]
	push ecx
	push ecx
	mov dword ptr [ebp-0x1C],esp
	mov ecx,esp
	mov bl,4
	push edx
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],5
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[ebp-0x50]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	lea edi,[esi+0x1C]
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzSound>::_QueryUnknown
	test eax,eax
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov byte ptr [ebp-4],bl
	mov ebx,8
	cmp word ptr [ebp-0x50],bx
	jne Block14

 Block12:
	mov eax,dword ptr [ebp-0x48]
	xor ecx,ecx
	mov word ptr [ebp-0x50],cx
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[ebp-0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x30],bx
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [ebp-0x30],ax
	mov eax,dword ptr [ebp-0x28]
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[ebp-0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x40],bx
	jne Block22

 Block20:
	mov eax,dword ptr [ebp-0x38]
	xor edx,edx
	mov word ptr [ebp-0x40],dx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea eax,[ebp-0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block23:
	xor ecx,ecx
	cmp dword ptr [edi],ecx
	sete al
	test al,al
	je Block30

 Block24:
	mov eax,dword ptr [ebp-0x14]
	cmp eax,ecx

 Block25:
	mov byte ptr [ebp-4],0
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block27:
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	xor eax,eax
	jmp Block45

 Block30:
	mov edi,dword ptr [edi]
	mov dword ptr [ebp-0x20],ecx
	cmp edi,ecx
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea edx,[ebp-0x18]
	push edx
	mov dword ptr [ebp-0x18],ecx
	mov ecx,dword ptr [edi]
	mov ecx,dword ptr [ecx+0x40]
	lea eax,[ebp-0x20]
	push eax
	push edi
	call ecx
	test eax,eax
	jge Block34

 Block33:
	push offset __GUID_1c923939_1338_4f8b_92cf_38935cee1fef
	push edi
	push eax
	call _com_issue_errorex

 Block34:
	mov eax,dword ptr [ebp-0x20]
	test eax,eax
	jne Block36

 Block35:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	jmp Block25

 Block36:
	mov edx,dword ptr [ebp-0x18]
	push edx
	push eax
	call dword ptr [ZImports::_AIL_quick_load_mem]
	mov dword ptr [esi+0x20],eax
	test eax,eax
	jne Block38

 Block37:
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	jmp Block25

 Block38:
	mov edi,dword ptr [ebp+0xC]
	mov ebx,dword ptr [ZImports::_AIL_quick_ms_length]
	imul edi,0x3E8
	push eax
	call ebx
	cmp eax,edi
	jae Block40

 Block39:
	mov eax,dword ptr [esi+0x20]
	push eax
	call dword ptr [ZImports::_AIL_quick_unload]
	mov eax,dword ptr [ebp-0x14]
	test eax,eax
	jmp Block25

 Block40:
	mov ecx,dword ptr [esi+0x20]
	push edi
	push ecx
	call dword ptr [ZImports::_AIL_quick_set_ms_position]
	mov edx,dword ptr [esi+0x20]
	push edx
	call dword ptr [ZImports::_AIL_quick_ms_position]
	mov dword ptr [ebp-0x1C],eax
	call get_update_time
	mov edi,eax
	mov eax,dword ptr [ebp-0x1C]
	sub edi,eax
	mov eax,dword ptr [esi+0x20]
	push eax
	call ebx
	mov ecx,dword ptr [esi+0x20]
	push 1
	add eax,edi
	push ecx
	mov dword ptr [esi+4],eax
	call dword ptr [ZImports::_AIL_quick_play]
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block42:
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block44:
	mov eax,1

 Block45:
	lea esp,[ebp-0x60]
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
// CRadioManager::Stop
__SUB_CLASS_THIS0(002C8230, __thiscall, 70808,  CRadioManager, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x20]
	test eax,eax
	je Block2

 Block1:
	push eax
	call dword ptr [ZImports::_AIL_quick_halt]

 Block2:
	mov eax,dword ptr [esi+0x20]
	test eax,eax
	je Block4

 Block3:
	push eax
	call dword ptr [ZImports::_AIL_quick_unload]

 Block4:
	mov dword ptr [esi+0x20],0
	mov eax,dword ptr [esi+0x1C]
	test eax,eax
	je Block6

 Block5:
	mov dword ptr [esi+0x1C],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	pop esi
	ret
}
}
// CRadioManager::CRadioManager
_SUB_EXCEPTION_HANDLER(2C8990)
__SUB_CLASS_THIS0(002C8990, __thiscall, 70806,  CRadioManager, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2C8990
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
	lea ebx,[esi+4]
	xor edi,edi
	cmp ebx,edi
	je Block2

 Block1:
	lea eax,[ebx-4]
	mov dword ptr [TSingleton<CRadioManager>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CRadioManager>::ms_pInstance],edi

 Block3:
	mov dword ptr [esp+0x1C],edi
	int 3// TODO: 	mov dword ptr [esi],offset CRadioManager::`vftable'
	call get_update_time
	mov dword ptr [ebx],eax
	mov dword ptr [esi+8],edi
	mov dword ptr [esi+0xC],1
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esi+0x14],edi
	mov dword ptr [esi+0x18],edi
	mov dword ptr [esi+0x1C],edi
	mov dword ptr [esi+0x20],edi
	mov ecx,esi
	mov dword ptr [esi+0x28],edi
	call CRadioManager::MMS_Startup
	mov eax,esi
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
// CRadioManager::MMS_Shutdown
__SUB_CLASS_THIS0(002C8120, __thiscall, 70808,  CRadioManager, void) {
__asm {

 Block0:
	jmp dword ptr [ZImports::_AIL_quick_shutdown]
}
}
// CUIRadio::CUIRadio
_SUB_EXCEPTION_HANDLER(2CB2B0)
__SUB_CLASS_THIS(002CB2B0, __thiscall, 70786,  CUIRadio, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2CB2B0
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
	mov esi,ecx
	mov dword ptr [esp+0x2C],esi
	call CWnd::_ctor_default
	xor ebx,ebx
	lea ecx,[esi+0x80]
	mov dword ptr [esp+0x58],ebx
	int 3// TODO: 	mov dword ptr [esi],offset CUIRadio::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIRadio::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIRadio::`vftable'{for `ZRefCounted'}
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xAC8],ebx
	mov dword ptr [esi+0xACC],ebx
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x37A8]
	xor ecx,ecx
	cmp eax,ebx
	setne cl
	mov byte ptr [esp+0x58],3
	mov eax,ecx
	push eax
	mov ecx,esi
	call CUIRadio::CreateLayer
	mov edi,dword ptr [esi+0xAC8]
	cmp edi,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0xC0]
	lea eax,[esp+0x14]
	push eax
	push edi
	mov dword ptr [esp+0x1C],ebx
	call ecx
	cmp eax,ebx
	jge Block4

 Block3:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block4:
	mov edi,dword ptr [esi+0xAC8]
	mov edx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],edx
	cmp edi,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xB8]
	lea ecx,[esp+0x18]
	push ecx
	push edi
	mov dword ptr [esp+0x20],ebx
	call edx
	cmp eax,ebx
	jge Block8

 Block7:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block8:
	mov edi,dword ptr [esi+0xAC8]
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],eax
	cmp edi,ebx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0x1C]
	push edx
	push edi
	mov dword ptr [esp+0x24],ebx
	call eax
	cmp eax,ebx
	jge Block12

 Block11:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block12:
	mov edi,dword ptr [esi+0xAC8]
	mov ebp,dword ptr [esp+0x1C]
	cmp edi,ebx
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x68]
	lea edx,[esp+0x20]
	push edx
	push edi
	mov dword ptr [esp+0x28],ebx
	call eax
	cmp eax,ebx
	jge Block16

 Block15:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block16:
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x28]
	mov eax,dword ptr [esp+0x20]
	push ebx
	push ebx
	push ebx
	push 1
	push ebx
	push ecx
	push edx
	push ebp
	push eax
	mov ecx,esi
	call CWnd::CreateWnd
	mov edi,dword ptr [ZImports::_VariantInit]
	cmp dword ptr [esp+0x60],ebx
	je Block46

 Block17:
	lea ecx,[esp+0x40]
	push ecx
	call edi
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	mov byte ptr [esp+0x58],4
	call get_update_time
	add eax,0x64
	mov ecx,3
	mov word ptr [esp+0x30],cx
	mov dword ptr [esp+0x38],eax
	mov ecx,dword ptr [esi+0xACC]
	mov bl,5
	mov byte ptr [esp+0x58],bl
	test ecx,ecx
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	lea edx,[esp+0x60]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x58],6
	test ecx,ecx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea eax,[esp+0x40]
	push eax
	lea edx,[esp+0x34]
	push edx
	push 0
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x58],bl
	test eax,eax
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block25:
	mov ebp,8
	mov byte ptr [esp+0x58],4
	cmp word ptr [esp+0x30],bp
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov byte ptr [esp+0x58],3
	cmp word ptr [esp+0x40],bp
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block33:
	lea ecx,[esp+0x30]
	push ecx
	call edi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	lea eax,[esp+0x40]
	mov bl,7
	push eax
	mov byte ptr [esp+0x5C],bl
	call edi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	mov ecx,dword ptr [esi+0xAC8]
	mov byte ptr [esp+0x58],8
	test ecx,ecx
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea edx,[esp+0x60]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x58],9
	test ecx,ecx
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	lea eax,[esp+0x30]
	push eax
	lea edx,[esp+0x44]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x58],8
	test eax,eax
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block43:
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x40],bp
	jne Block75

 Block44:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block76

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block46:
	lea ecx,[esp+0x30]
	push ecx
	call edi
	lea edx,[esp+0x30]
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
	mov byte ptr [esp+0x58],0xA
	call get_update_time
	add eax,0x64
	mov ecx,3
	mov word ptr [esp+0x40],cx
	mov dword ptr [esp+0x48],eax
	mov ecx,dword ptr [esi+0xAC8]
	mov bl,0xB
	mov byte ptr [esp+0x58],bl
	test ecx,ecx
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea edx,[esp+0x60]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x58],0xC
	test ecx,ecx
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	lea eax,[esp+0x30]
	push eax
	lea edx,[esp+0x44]
	push edx
	push 0
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x58],bl
	test eax,eax
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block54:
	mov ebp,8
	mov byte ptr [esp+0x58],0xA
	cmp word ptr [esp+0x40],bp
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
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
	mov byte ptr [esp+0x58],3
	cmp word ptr [esp+0x30],bp
	jne Block61

 Block59:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block62:
	lea ecx,[esp+0x30]
	push ecx
	call edi
	lea edx,[esp+0x30]
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
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x5C],0xD
	call edi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block66

 Block65:
	push eax
	call _com_issue_error

 Block66:
	mov ecx,dword ptr [esi+0xACC]
	mov bl,0xE
	mov byte ptr [esp+0x58],bl
	test ecx,ecx
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	lea edx,[esp+0x60]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x58],0xF
	test ecx,ecx
	jne Block70

 Block69:
	push 0x80004003
	call _com_issue_error

 Block70:
	lea eax,[esp+0x30]
	push eax
	lea edx,[esp+0x44]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0x58],bl
	test eax,eax
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block72:
	mov byte ptr [esp+0x58],0xD
	cmp word ptr [esp+0x40],bp
	jne Block75

 Block73:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov byte ptr [esp+0x58],3
	cmp word ptr [esp+0x30],bp
	jne Block79

 Block77:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov eax,esi
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret 4
}
}
// CRadioManager::IsPlaying
__SUB_CLASS_THIS0(000B2000, __thiscall, 70814,  CRadioManager, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+8]
	ret
}
}
// CUIRadio::OnMouseMove
_SUB_EXCEPTION_HANDLER(2C8A50)
__SUB_CLASS_THIS(002C8A50, __thiscall, 70790,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2C8A50
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
	mov ecx,dword ptr [TSingleton<CRadioManager>::ms_pInstance]
	test ecx,ecx
	je Block6

 Block1:
	lea eax,[esp+0x14]
	push eax
	call CRadioManager::GetTrackName
	mov edi,dword ptr [esp+0x2C]
	mov edx,dword ptr [esi-4]
	mov ebx,dword ptr [esp+0x28]
	mov eax,dword ptr [edx+0x24]
	push 0
	lea ecx,[esi-4]
	push edi
	push ebx
	mov dword ptr [esp+0x2C],0
	call eax
	mov ebp,dword ptr [esp+0x14]
	test eax,eax
	je Block3

 Block2:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x30]
	push ebp
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	lea ecx,[eax+edi+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	add eax,ebx
	push eax
	lea ecx,[esi+0x7C]
	call CUIToolTip::SetToolTip_String
	jmp Block4

 Block3:
	lea ecx,[esi+0x7C]
	call CUIToolTip::ClearToolTip

 Block4:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test ebp,ebp
	je Block6

 Block5:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block6:
	xor eax,eax
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
// CUIRadio::OnMouseButton
__SUB_CLASS_THIS(002C8910, __thiscall, 70791,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CRadioManager>::ms_pInstance]
	test ecx,ecx
	je Block4

 Block1:
	cmp dword ptr [ecx+8],0
	je Block4

 Block2:
	cmp dword ptr [esp+4],0x202
	jne Block4

 Block3:
	xor eax,eax
	cmp dword ptr [ecx+0xC],eax
	sete al
	push eax
	call CRadioManager::Mute

 Block4:
	ret 0x10
}
}
// CRadioManager::Play
_SUB_EXCEPTION_HANDLER(2CB940)
__SUB_CLASS_THIS(002CB940, __thiscall, 70810,  CRadioManager, void, NakedParam<ZXString<char>>, unsigned long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2CB940
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	xor eax,eax
	mov dword ptr [ebp-4],eax
	cmp dword ptr [ebx+8],eax
	je Block3

 Block1:
	mov ecx,dword ptr [ebp+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp ecx,eax
	je Block57

 Block2:
	add ecx,0xFFFFFFF4
	push ecx
	jmp Block56

 Block3:
	mov dword ptr [ebp-0x1C],eax
	mov ecx,dword ptr [ebp+8]
	push eax
	push eax
	push 0xFFFFFFFF
	push ecx
	push eax
	push eax
	mov byte ptr [ebp-4],1
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	lea edx,[ebp-0x14]
	push 0x1501
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edi,eax
	mov eax,dword ptr [ebp+8]
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],2
	call MultiByteToWideChar
	mov edi,dword ptr [edi]
	push esi
	lea ecx,[ebp-0x1C]
	push edi
	push ecx
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x14]
	add esp,0xC
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x4C]
	push edx
	call esi
	lea eax,[ebp-0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea ecx,[ebp-0x3C]
	push ecx
	mov byte ptr [ebp-4],3
	call esi
	lea edx,[ebp-0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov esi,dword ptr [ebp-0x1C]
	push 0
	push 0
	lea eax,[ebp-0x4C]
	push eax
	lea ecx,[ebp-0x3C]
	push ecx
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push esi
	mov byte ptr [ebp-4],4
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],5
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea edx,[ebp-0x2C]
	mov byte ptr [ebp-4],4
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	lea edi,[ebx+0x18]
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block14

 Block12:
	cmp eax,0x80004002
	je Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],4
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],3
	jne Block21

 Block19:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea eax,[ebp-0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block22:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],1
	jne Block25

 Block23:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[ebp-0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	cmp dword ptr [edi],0
	sete al
	test al,al
	je Block29

 Block27:
	mov byte ptr [ebp-4],0
	test esi,esi
	je Block54

 Block28:
	add esi,0xFFFFFFF4
	push esi
	jmp Block53

 Block29:
	mov eax,dword ptr [ebp+0xC]
	push eax
	push ecx
	mov ecx,esp
	lea edx,[ebp+8]
	mov dword ptr [ebp-0x14],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,ebx
	call CRadioManager::MMS_Play
	test eax,eax
	je Block27

 Block30:
	mov dword ptr [ebx+8],1
	mov eax,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	test eax,eax
	je Block32

 Block31:
	mov eax,dword ptr [eax+8]
	jmp Block33

 Block32:
	xor eax,eax

 Block33:
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push offset _S_NAME
	mov dword ptr [ebx+0x10],eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [edi]
	mov byte ptr [ebp-4],7
	test ecx,ecx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea eax,[ebp-0x2C]
	push eax
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],8
	jne Block37

 Block36:
	mov eax,dword ptr [eax+8]
	jmp Block38

 Block37:
	mov eax,offset _S___3

 Block38:
	push 0xFFFFFFFF
	lea edi,[ebx+0x14]
	push eax
	mov ecx,edi
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],1
	jne Block41

 Block39:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	push 0
	mov ecx,ebx
	call CRadioManager::Mute
	push 1
	mov ecx,ebx
	call CRadioManager::ShowUI
	mov dword ptr [ebp-0x18],0
	lea eax,[ebp-0x14]
	push 0x14CF
	mov bl,9
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0xA
	test esi,esi
	je Block46

 Block43:
	cmp dword ptr [esi+4],0
	jne Block45

 Block44:
	mov ecx,dword ptr [esi]
	push ecx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block45:
	mov esi,dword ptr [esi+4]
	jmp Block47

 Block46:
	xor esi,esi

 Block47:
	mov edx,dword ptr [edi]
	push edx
	lea eax,[ebp-0x18]
	push esi
	push eax
	call ZXString<char>::Format
	mov ecx,dword ptr [ebp-0x14]
	add esp,0xC
	mov byte ptr [ebp-4],bl
	test ecx,ecx
	je Block49

 Block48:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp-0x14],0

 Block49:
	lea ecx,[ebp-0x18]
	push 0xC
	push ecx
	call CHATLOG_ADD
	mov eax,dword ptr [ebp-0x18]
	add esp,8
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFF4
	push eax

 Block53:
	call ZXString16::_Release
	add esp,4

 Block54:
	mov eax,dword ptr [ebp+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFF4
	push eax

 Block56:
	call ZXString<char>::_Release
	add esp,4

 Block57:
	lea esp,[ebp-0x5C]
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
// CRadioManager::Stop
_SUB_EXCEPTION_HANDLER(2CBD20)
__SUB_CLASS_THIS(002CBD20, __thiscall, 70811,  CRadioManager, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2CBD20
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
	mov eax,dword ptr [esi+8]
	xor ebx,ebx
	cmp eax,ebx
	je Block16

 Block1:
	cmp dword ptr [esi+0x18],ebx
	sete al
	cmp al,bl
	jne Block16

 Block2:
	call CRadioManager::MMS_Stop
	push ebx
	mov ecx,esi
	call CRadioManager::ShowUI
	push 1
	mov ecx,esi
	call CRadioManager::Mute
	mov eax,dword ptr [esi+0x18]
	cmp eax,ebx
	je Block4

 Block3:
	mov dword ptr [esi+0x18],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov dword ptr [esi+8],ebx
	cmp dword ptr [esp+0x24],ebx
	je Block14

 Block5:
	mov dword ptr [esp+0x24],ebx
	lea eax,[esp+0x10]
	push 0x14D0
	push eax
	mov dword ptr [esp+0x24],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x1C],1
	cmp edi,ebx
	je Block9

 Block6:
	cmp dword ptr [edi+4],ebx
	jne Block8

 Block7:
	mov ecx,dword ptr [edi]
	push ecx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [edi+4],eax

 Block8:
	mov edi,dword ptr [edi+4]
	jmp Block10

 Block9:
	xor edi,edi

 Block10:
	mov edx,dword ptr [esi+0x14]
	push edx
	lea eax,[esp+0x28]
	push edi
	push eax
	call ZXString<char>::Format
	mov ecx,dword ptr [esp+0x1C]
	add esp,0xC
	mov byte ptr [esp+0x1C],bl
	cmp ecx,ebx
	je Block12

 Block11:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x10],ebx

 Block12:
	lea ecx,[esp+0x24]
	push 0xC
	push ecx
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x2C]
	add esp,8
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov eax,dword ptr [esi+0x14]
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esi+0x14],ebx

 Block16:
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
// CRadioManager::Update
__SUB_CLASS_THIS(002CBF20, __thiscall, 70809,  CRadioManager, void, unsigned long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+8],0
	je Block6

 Block1:
	push edi
	mov edi,dword ptr [esp+0xC]
	mov eax,edi
	sub eax,dword ptr [esi+4]
	cmp eax,0x7D0
	jbe Block5

 Block2:
	mov ecx,dword ptr [esi+0x20]
	push ecx
	call dword ptr [ZImports::_AIL_quick_status]
	cmp eax,1
	jne Block4

 Block3:
	push eax
	mov ecx,esi
	call CRadioManager::Stop

 Block4:
	mov dword ptr [esi+4],edi

 Block5:
	pop edi

 Block6:
	pop esi
	ret 4
}
}
// CRadioManager::Mute
__SUB_CLASS_THIS(002C8840, __thiscall, 70811,  CRadioManager, void, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+8],0
	je Block12

 Block1:
	mov eax,dword ptr [esp+8]
	cmp eax,dword ptr [esi+0xC]
	je Block12

 Block2:
	test eax,eax
	je Block5

 Block3:
	fldz
	push ecx
	fstp dword ptr [esp]
	mov dword ptr [esi+0xC],eax
	call CRadioManager::MMS_SetVolume
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	test ecx,ecx
	je Block10

 Block4:
	mov eax,dword ptr [esi+0x10]
	push 0x1F4
	push eax
	call CSoundMan::SetBGMVolume
	jmp Block10

 Block5:
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	test ecx,ecx
	je Block7

 Block6:
	push 0x1F4
	push 0
	call CSoundMan::SetBGMVolume

 Block7:
	mov ecx,dword ptr [esi+0x10]
	fild dword ptr [esi+0x10]
	test ecx,ecx
	jge Block9

 Block8:
	fadd dword ptr [__real_4f800000]

 Block9:
	fdiv qword ptr [__real_4059000000000000]
	push ecx
	mov ecx,esi
	fstp dword ptr [esp+0xC]
	fld dword ptr [esp+0xC]
	fstp dword ptr [esp]
	call CRadioManager::MMS_SetVolume
	mov dword ptr [esi+0xC],0

 Block10:
	mov ecx,dword ptr [esi+0x28]
	test ecx,ecx
	je Block12

 Block11:
	mov edx,dword ptr [esi+0xC]
	pop esi
	mov dword ptr [esp+4],edx
	jmp  CUIRadio::SetMute

 Block12:
	pop esi
	ret 4
}
}
