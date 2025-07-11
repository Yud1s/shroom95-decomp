#include "regen.hpp"
// Logo.ipp
#include "Logo.hpp"

// CLogo::UpdateLogo
__SUB_CLASS_THIS0(0020E330, __thiscall, 71533,  CLogo, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x40],0
	jne Block18

 Block1:
	cmp dword ptr [esi+0x28],0
	jne Block3

 Block2:
	call timeGetTime
	mov dword ptr [esi+0x28],eax

 Block3:
	push edi
	call timeGetTime
	mov edi,eax
	mov eax,dword ptr [esi+0x2C]
	test eax,eax
	je Block6

 Block4:
	sub edi,eax
	cmp edi,0x5DC
	jbe Block17

 Block5:
	pop edi
	mov dword ptr [esi+0x40],1
	pop esi
	ret

 Block6:
	cmp dword ptr [esi+0x1C],0
	je Block17

 Block7:
	mov eax,edi
	sub eax,dword ptr [esi+0x28]
	cmp eax,0x5DC
	jb Block17

 Block8:
	cmp eax,0x215E
	jae Block11

 Block9:
	lea ecx,[eax+eax*2-0x1194]
	add ecx,ecx
	add ecx,ecx
	add ecx,ecx
	mov eax,0x10624DD3
	mul ecx
	shr edx,6
	inc edx
	cmp edx,dword ptr [esi+0x24]
	jge Block17

 Block10:
	push edx
	mov ecx,esi
	call CLogo::DrawNXLogo
	pop edi
	pop esi
	ret

 Block11:
	cmp dword ptr [esi+0x34],0
	jne Block13

 Block12:
	mov ecx,esi
	mov dword ptr [esi+0x34],1
	call CLogo::InitWZLogo

 Block13:
	sub edi,dword ptr [esi+0x28]
	mov eax,0x10624DD3
	sub edi,0x215E
	lea edx,[edi+edi*2]
	add edx,edx
	add edx,edx
	add edx,edx
	mul edx
	mov edi,edx
	shr edi,6
	inc edi
	cmp edi,dword ptr [esi+0x24]
	mov ecx,esi
	jge Block15

 Block14:
	push edi
	call CLogo::DrawWZLogo
	pop edi
	pop esi
	ret

 Block15:
	push 0xFFFFFFFF
	call CLogo::DrawWZLogo
	mov eax,dword ptr [esi+0x24]
	add eax,0xA
	cmp edi,eax
	jl Block17

 Block16:
	mov ecx,esi
	call CLogo::ForcedEnd
	mov dword ptr [esi+0x40],1

 Block17:
	pop edi

 Block18:
	pop esi
	ret
}
}
// CLogo::Close
__SUB_CLASS_THIS0(0020BF50, __thiscall, 71533,  CLogo, void) {
__asm {

 Block0:
	push esi
	push 0
	push 0x3E8
	push 0
	push 0
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0
	call CSoundMan::PlayBGM
	mov ecx,esi
	pop esi
	jmp  CStage::Close
}
}
// CLogo::InitNXLogo
_SUB_EXCEPTION_HANDLER(20DAE0)
__SUB_CLASS_THIS0(0020DAE0, __thiscall, 71533,  CLogo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_20DAE0
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
	mov ebp,ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	call esi
	lea ecx,[esp+0x30]
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
	lea edx,[esp+0x20]
	push edx
	mov dword ptr [esp+0x5C],0
	call esi
	lea eax,[esp+0x20]
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
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0x596
	mov bl,1
	push eax
	mov byte ptr [esp+0x74],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x6C],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x54]
	push ecx
	mov byte ptr [esp+0x70],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x60],3
	call Ztl_variant_t::GetUnknown
	lea edi,[ebp+0x20]
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
	mov esi,8
	mov byte ptr [esp+0x58],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x40],si
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x40]
	push eax
	call ebx

 Block13:
	mov byte ptr [esp+0x58],0
	cmp word ptr [esp+0x20],si
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x20]
	push edx
	call ebx

 Block17:
	mov dword ptr [esp+0x58],0xFFFFFFFF
	cmp word ptr [esp+0x30],si
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x30]
	push ecx
	call ebx

 Block21:
	mov esi,dword ptr [edi]
	xor ebx,ebx
	cmp esi,ebx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],ebx
	call ecx
	cmp eax,ebx
	jge Block25

 Block24:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	mov edx,dword ptr [esp+0x14]
	push ebx
	push ebx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_0
	mov dword ptr [ebp+0x24],edx
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [edi]
	mov dword ptr [esp+0x64],4
	cmp ecx,ebx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[esp+0x4C]
	push eax
	mov dword ptr [esp+0x68],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [esp+0x60],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block30

 Block28:
	cmp eax,0x80004002
	je Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov edi,8
	mov byte ptr [esp+0x58],7
	cmp word ptr [esp+0x40],di
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	cmp eax,ebx
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	mov eax,dword ptr [esp+0x14]
	mov edx,0xD
	mov byte ptr [esp+0x58],8
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],eax
	cmp eax,ebx
	je Block38

 Block37:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block38:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x58],9
	cmp ecx,ebx
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea eax,[esp+0x20]
	push eax
	lea edx,[esp+0x34]
	push edx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea eax,[esp+0x34]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x1C]
	cmp esi,eax
	je Block45

 Block41:
	mov dword ptr [ebp+0x1C],eax
	cmp eax,ebx
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block43:
	cmp esi,ebx
	je Block45

 Block44:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block45:
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebx
	je Block47

 Block46:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block47:
	mov byte ptr [esp+0x58],8
	cmp word ptr [esp+0x30],di
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,ebx
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov byte ptr [esp+0x58],7
	cmp word ptr [esp+0x20],di
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebx
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov edx,3
	xor edi,edi
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],edi
	mov ecx,dword ptr [ebp+0x1C]
	mov bl,0xA
	mov byte ptr [esp+0x58],bl
	cmp ecx,edi
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	lea eax,[esp+0x30]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x58],0xB
	cmp esi,edi
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x8C]
	push 0xFFFFFFFF
	push 0x258
	push 0x320
	push edi
	push edi
	push esi
	call ecx
	cmp eax,edi
	jge Block61

 Block60:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block61:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x58],bl
	cmp eax,edi
	je Block63

 Block62:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block63:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x58],7
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,edi
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x20]
	push eax
	call ebx
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block69

 Block68:
	push eax
	call _com_issue_error

 Block69:
	mov edx,3
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],edi
	mov ecx,dword ptr [ebp+0x1C]
	mov byte ptr [esp+0x58],0xD
	cmp ecx,edi
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	lea eax,[esp+0x30]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x58],0xE
	cmp esi,edi
	jne Block73

 Block72:
	push 0x80004003
	call _com_issue_error

 Block73:
	mov edx,dword ptr [esp+0x20]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x24]
	push eax
	push edi
	push edi
	push esi
	call ecx
	cmp eax,edi
	jge Block75

 Block74:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block75:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x58],0xD
	cmp eax,edi
	je Block77

 Block76:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block77:
	mov esi,8
	mov byte ptr [esp+0x58],0xC
	cmp word ptr [esp+0x30],si
	jne Block80

 Block78:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,edi
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov byte ptr [esp+0x58],7
	cmp word ptr [esp+0x20],si
	jne Block84

 Block82:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block85:
	mov esi,dword ptr [ebp+0x1C]
	cmp esi,edi
	jne Block87

 Block86:
	push 0x80004003
	call _com_issue_error

 Block87:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFF
	push esi
	call eax
	cmp eax,edi
	jge Block89

 Block88:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block89:
	lea ecx,[esp+0x20]
	push ecx
	call ebx
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block91

 Block90:
	push eax
	call _com_issue_error

 Block91:
	mov esi,dword ptr [ebp+0x1C]
	mov byte ptr [esp+0x58],0xF
	cmp esi,edi
	jne Block93

 Block92:
	push 0x80004003
	call _com_issue_error

 Block93:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x58]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],edi
	call edx
	cmp eax,edi
	jge Block95

 Block94:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block95:
	mov eax,dword ptr [esp+0x18]
	add eax,0x1F4
	mov ecx,3
	mov word ptr [esp+0x30],cx
	mov dword ptr [esp+0x38],eax
	mov ecx,dword ptr [ebp+0x1C]
	mov bl,0x10
	mov byte ptr [esp+0x58],bl
	cmp ecx,edi
	jne Block97

 Block96:
	push 0x80004003
	call _com_issue_error

 Block97:
	lea edx,[esp+0x1C]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x58],0x11
	cmp ecx,edi
	jne Block99

 Block98:
	push 0x80004003
	call _com_issue_error

 Block99:
	lea eax,[esp+0x20]
	push eax
	lea edx,[esp+0x34]
	push edx
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x58],bl
	cmp eax,edi
	je Block101

 Block100:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block101:
	mov esi,8
	mov byte ptr [esp+0x58],0xF
	cmp word ptr [esp+0x30],si
	jne Block104

 Block102:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,edi
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block105:
	mov byte ptr [esp+0x58],7
	cmp word ptr [esp+0x20],si
	jne Block108

 Block106:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	cmp eax,edi
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block109:
	lea ecx,[esp+0x1C]
	push 0x50B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push edi
	push edi
	push edi
	push edi
	push eax
	mov byte ptr [esp+0x6C],0x12
	call CSoundMan::PlayBGM
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x58],7
	cmp eax,edi
	je Block111

 Block110:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block111:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	cmp eax,edi
	je Block113

 Block112:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block113:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret
}
}
// CLogo::DrawWZLogo
_SUB_EXCEPTION_HANDLER(20D530)
__SUB_CLASS_THIS(0020D530, __thiscall, 71540,  CLogo, void, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_20D530
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
	xor edi,edi
	cmp dword ptr [ebx+0x1C],edi
	lea ecx,[ebx+0x1C]
	sete al
	test al,al
	sete al
	mov dword ptr [ebp-0x2C],ecx
	test al,al
	je Block33

 Block1:
	mov eax,3
	mov word ptr [ebp-0x24],ax
	mov dword ptr [ebp-0x1C],edi
	mov ecx,dword ptr [ecx]
	mov dword ptr [ebp-4],edi
	cmp ecx,edi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea edx,[ebp-0x24]
	push edx
	lea eax,[ebp-0x14]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],1
	cmp esi,edi
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFFFF
	push 0x258
	push 0x320
	push edi
	push edi
	push esi
	call edx
	cmp eax,edi
	jge Block7

 Block6:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block7:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	cmp word ptr [ebp-0x24],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov edi,dword ptr [ebp+8]
	test edi,edi
	jl Block33

 Block14:
	mov ecx,dword ptr [ebx+0x20]
	lea esi,[ebx+0x20]
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	call IWzProperty::Getcount
	cmp edi,eax
	jae Block33

 Block17:
	cmp dword ptr [ebx+0x30],0
	jne Block21

 Block18:
	lea edx,[ebp-0x14]
	push 0x50C
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0
	push 0
	push 0
	push 0
	push eax
	mov dword ptr [ebp-4],2
	call CSoundMan::PlayBGM
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block20:
	mov dword ptr [ebx+0x30],1

 Block21:
	cmp edi,0x24
	jl Block23

 Block22:
	mov ecx,esi
	call _x_com_ptr<IWzProperty>::op_arrow
	mov ecx,eax
	call IWzProperty::Getcount

 Block23:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi]
	mov dword ptr [ebp-4],3
	test ecx,ecx
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea eax,[ebp-0x24]
	or ebx,0xFFFFFFFF
	push eax
	mov dword ptr [ebp-4],ebx
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	call _x_com_ptr<IWzCanvas>::CreateFromUnknown
	lea ecx,[ebp-0x24]
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::~Ztl_variant_t
	mov esi,dword ptr [ebp-0x14]
	test esi,esi
	sete al
	test al,al
	sete al
	test al,al
	je Block31

 Block26:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x4C]
	call Ztl_variant_t::_ctor_1
	mov ecx,3
	mov word ptr [ebp-0x3C],cx
	mov dword ptr [ebp-0x34],0
	mov ecx,dword ptr [ebp-0x2C]
	lea edx,[ebp-0x3C]
	push edx
	lea eax,[ebp-0x28]
	push eax
	mov byte ptr [ebp-4],8
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getcanvas
	mov edi,eax
	mov byte ptr [ebp-4],9
	test esi,esi
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea ecx,[ebp-0x4C]
	push ecx
	push esi
	mov ecx,esi
	call IWzCanvas::Getcy
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	mov ecx,esi
	call IWzCanvas::Getcx
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzCanvas>::op_arrow
	mov ecx,eax
	call IWzCanvas::Copy
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block30

 Block29:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block30:
	lea ecx,[ebp-0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x4C]
	call Ztl_variant_t::~Ztl_variant_t

 Block31:
	mov dword ptr [ebp-4],ebx
	test esi,esi
	je Block33

 Block32:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block33:
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
	ret 4
}
}
// CLogo::ForcedEnd
_SUB_EXCEPTION_HANDLER(20BF80)
__SUB_CLASS_THIS0(0020BF80, __thiscall, 71533,  CLogo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_20BF80
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
	mov dword ptr [esp+0x18],esi
	xor ebp,ebp
	cmp dword ptr [esi+0x40],ebp
	jne Block80

 Block1:
	cmp dword ptr [esi+0x2C],ebp
	jne Block81

 Block2:
	call timeGetTime
	mov edi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esi+0x2C],eax
	lea eax,[esp+0x30]
	push eax
	call edi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea edx,[esp+0x20]
	push edx
	mov dword ptr [esp+0x7C],ebp
	call edi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [esi+0x1C]
	mov bl,1
	mov byte ptr [esp+0x78],bl
	cmp ecx,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[esp+0x14]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x78],2
	cmp ecx,ebp
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea eax,[esp+0x30]
	push eax
	lea edx,[esp+0x24]
	push edx
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x78],bl
	cmp eax,ebp
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov ebx,8
	mov byte ptr [esp+0x78],0
	cmp word ptr [esp+0x20],bx
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov dword ptr [esp+0x78],0xFFFFFFFF
	cmp word ptr [esp+0x30],bx
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,ebp
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block20:
	lea ecx,[esp+0x20]
	push ecx
	call edi
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	lea eax,[esp+0x30]
	push eax
	mov dword ptr [esp+0x7C],3
	call edi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	push ebp
	push ebp
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 0x595
	mov bl,4
	push ecx
	mov byte ptr [esp+0x94],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x8C],5
	cmp dword ptr [_D_G_RM],ebp
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[esp+0x74]
	mov byte ptr [esp+0x8C],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x80],6
	call Ztl_variant_t::GetUnknown
	lea edi,[esi+0x20]
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block29

 Block27:
	cmp eax,0x80004002
	je Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	mov byte ptr [esp+0x78],bl
	mov ebx,8
	cmp word ptr [esp+0x60],bx
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	cmp eax,ebp
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov byte ptr [esp+0x78],3
	cmp word ptr [esp+0x30],bx
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,ebp
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov dword ptr [esp+0x78],0xFFFFFFFF
	cmp word ptr [esp+0x20],bx
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov eax,3
	mov word ptr [esp+0x30],ax
	mov dword ptr [esp+0x38],ebp
	mov ecx,dword ptr [esi+0x1C]
	mov ebx,7
	mov dword ptr [esp+0x78],ebx
	cmp ecx,ebp
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x78],8
	cmp esi,ebp
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFFFF
	push 0x258
	push 0x320
	push ebp
	push ebp
	push esi
	call edx
	cmp eax,ebp
	jge Block47

 Block46:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block47:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x78],bl
	cmp eax,ebp
	je Block49

 Block48:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block49:
	or esi,0xFFFFFFFF
	mov ebx,8
	mov dword ptr [esp+0x78],esi
	cmp word ptr [esp+0x30],bx
	jne Block52

 Block50:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebp
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block53:
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_40
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [edi]
	mov dword ptr [esp+0x84],9
	cmp ecx,ebp
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	lea edx,[esp+0x6C]
	push edx
	mov dword ptr [esp+0x88],esi
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [esp+0x80],0xA
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block58

 Block56:
	cmp eax,0x80004002
	je Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	mov byte ptr [esp+0x78],0xC
	cmp word ptr [esp+0x60],bx
	jne Block61

 Block59:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	cmp eax,ebp
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x50]
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
	mov ecx,3
	mov word ptr [esp+0x40],cx
	mov dword ptr [esp+0x48],ebp
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [edx+0x1C]
	mov bl,0xE
	mov byte ptr [esp+0x78],bl
	cmp ecx,ebp
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	lea eax,[esp+0x40]
	push eax
	lea edx,[esp+0x20]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x78],0xF
	cmp ecx,ebp
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	mov esi,dword ptr [esp+0x14]
	lea eax,[esp+0x50]
	push eax
	push esi
	push ebp
	push ebp
	call IWzCanvas::Copy
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x78],bl
	cmp eax,ebp
	je Block70

 Block69:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block70:
	mov edi,8
	mov byte ptr [esp+0x78],0xD
	cmp word ptr [esp+0x40],di
	jne Block73

 Block71:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,ebp
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block74:
	mov byte ptr [esp+0x78],0xC
	cmp word ptr [esp+0x50],di
	jne Block77

 Block75:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	cmp eax,ebp
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block78:
	mov dword ptr [esp+0x78],0xFFFFFFFF
	cmp esi,ebp
	je Block81

 Block79:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x68
	ret

 Block80:
	mov dword ptr [esi+0x44],4

 Block81:
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x68
	ret
}
}
// CLogo::~CLogo
__SUB_CLASS_THIS0(0020BC80, __thiscall, 71533,  CLogo, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	int 3// TODO: 	mov dword ptr [esi],offset CLogo::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CLogo::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CLogo::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CLogo::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x20]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x1C]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x18]
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov ecx,esi
	pop esi
	jmp  CStage::~CStage
}
}
// CLogo::OnSetFocus
__SUB_CLASS_THIS(0020BC20, __thiscall, 71536,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	mov eax,1
	ret 4
}
}
// CLogo::UpdateVideo
_SUB_EXCEPTION_HANDLER(20BDB0)
__SUB_CLASS_THIS0(0020BDB0, __thiscall, 71533,  CLogo, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_20BDB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x10],esp
	mov esi,ecx
	mov dword ptr [ebp-0x14],esi
	cmp dword ptr [esi+0x40],0
	je Block6

 Block1:
	mov eax,dword ptr [esi+0x44]
	test eax,eax
	je Block5

 Block2:
	add eax,0xFFFFFFFC
	cmp eax,1
	ja Block7

 Block3:
	call CStage::FadeOut

 Block4:
	mov ecx,esi

 Block5:
	call CLogo::LogoEnd

 Block6:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block7:
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	call IWzGr2D::GetvideoStatus
	dec eax
	cmp eax,4
	ja Block4

 Block10:
	cmp EAX, 0
je Block6
cmp EAX, 1
je Block11
cmp EAX, 2
je Block6
cmp EAX, 3
je Block4
cmp EAX, 4
je Block27


 Block11:
	mov ecx,dword ptr [_D_G_GR]
	mov dword ptr [ebp-4],0
	test ecx,ecx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	call IWzGr2D::PlayVideo
	mov eax,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	mov ecx,dword ptr [eax+8]
	imul ecx,0xFF
	mov eax,0x51EB851F
	mul ecx
	shr edx,5
	test edx,edx
	jle Block18

 Block14:
	cmp edx,0xFF
	mov eax,edx
	jl Block16

 Block15:
	mov eax,0xFF

 Block16:
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block19

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	xor eax,eax
	jmp Block16

 Block19:
	push eax
	call IWzGr2D::PutvideoVolume
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	push 1
	call IWzGr2D::SetVideoMode
	mov dword ptr [esi+0x44],3
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block27:
	mov dword ptr [esi+0x44],5
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CLogo::OnKey
__SUB_CLASS_THIS(0020C510, __thiscall, 71535,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push esi
	lea esi,[ecx-4]
	mov ecx,esi
	call CLogo::CanSkip
	test al,al
	je Block6

 Block1:
	test dword ptr [esp+0xC],0x80000000
	jne Block6

 Block2:
	mov eax,dword ptr [esp+8]
	cmp eax,0xD
	je Block5

 Block3:
	cmp eax,0x1B
	je Block5

 Block4:
	cmp eax,0x20
	jne Block6

 Block5:
	mov ecx,esi
	call CLogo::ForcedEnd

 Block6:
	pop esi
	ret 8
}
}
// CLogo::CanSkip
__SUB_CLASS_THIS0(0020BAB0, __thiscall, 71539,  CLogo, bool) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x28],0
	jne Block2

 Block1:
	xor al,al
	pop esi
	ret

 Block2:
	call timeGetTime
	sub eax,dword ptr [esi+0x28]
	pop esi
	lea ecx,[eax+eax*2]
	add ecx,ecx
	add ecx,ecx
	add ecx,ecx
	mov eax,0x10624DD3
	mul ecx
	shr edx,6
	xor eax,eax
	test edx,edx
	setge al
	ret
}
}
// CLogo::Update
__SUB_CLASS_THIS0(0020E430, __thiscall, 71533,  CLogo, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CLogo::UpdateLogo
	mov ecx,esi
	pop esi
	jmp  CLogo::UpdateVideo
}
}
// CLogo::DrawNXLogo
_SUB_EXCEPTION_HANDLER(20D820)
__SUB_CLASS_THIS(0020D820, __thiscall, 71540,  CLogo, void, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_20D820
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
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
	mov esi,dword ptr [ebp+8]
	xor ebx,ebx
	cmp esi,ebx
	jge Block13

 Block1:
	mov eax,3
	mov word ptr [ebp-0x24],ax
	mov dword ptr [ebp-0x1C],ebx
	mov ecx,dword ptr [edi+0x1C]
	mov dword ptr [ebp-4],ebx
	cmp ecx,ebx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea edx,[ebp-0x24]
	push edx
	lea eax,[ebp-0x14]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],1
	cmp esi,ebx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFFFF
	push 0x258
	push 0x320
	push ebx
	push ebx
	push esi
	call edx
	cmp eax,ebx
	jge Block7

 Block6:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block7:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	cmp word ptr [ebp-0x24],8
	mov dword ptr [ebp-4],0xFFFFFFFF
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	cmp eax,ebx
	je Block40

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block12:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block40

 Block13:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push ebx
	push ebx
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [edi+0x20]
	mov dword ptr [ebp-4],2
	cmp ecx,ebx
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea edx,[ebp-0x24]
	push edx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],ebx
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block18

 Block16:
	cmp eax,0x80004002
	je Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],5
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [ebp-0x24],ax
	mov eax,dword ptr [ebp-0x1C]
	cmp eax,ebx
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[ebp-0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	lea edx,[ebp-0x48]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	mov ecx,3
	mov word ptr [ebp-0x38],cx
	mov dword ptr [ebp-0x30],ebx
	mov ecx,dword ptr [edi+0x1C]
	mov bl,7
	mov byte ptr [ebp-4],bl
	test ecx,ecx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[ebp-0x38]
	push edx
	lea eax,[ebp-0x28]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],8
	test ecx,ecx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	mov esi,dword ptr [ebp-0x14]
	lea edx,[ebp-0x48]
	push edx
	push esi
	push 0x3C
	push 0x28
	call IWzCanvas::Copy
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	mov edi,8
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x38],di
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[ebp-0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x48],di
	jne Block37

 Block35:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[ebp-0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test esi,esi
	je Block40

 Block39:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block40:
	lea esp,[ebp-0x58]
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
	ret 4
}
}
// CLogo::Init
_SUB_EXCEPTION_HANDLER(20E240)
__SUB_CLASS_THIS(0020E240, __thiscall, 71534,  CLogo, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_20E240
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
	mov edi,ecx
	call CLogo::InitNXLogo
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	xor ebx,ebx
	push ebx
	call CInputSystem::ShowCursor
	mov dword ptr [esp+0x10],ebx
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov eax,dword ptr [ecx+0x38]
	mov dword ptr [esp+0x20],ebx
	cmp eax,1
	jne Block2

 Block1:
	push 5
	lea eax,[esp+0x18]
	push eax
	call CWvsApp::GetCmdLine
	mov byte ptr [esp+0x20],1
	jmp Block3

 Block2:
	push 3
	lea edx,[esp+0x18]
	push edx
	call CWvsApp::GetCmdLine
	mov byte ptr [esp+0x20],2

 Block3:
	push eax
	lea ecx,[esp+0x14]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	mov esi,dword ptr [esp+0x10]
	cmp esi,ebx
	je Block9

 Block6:
	cmp byte ptr [esi],bl
	je Block9

 Block7:
	mov eax,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	cmp dword ptr [eax+0x3C],ebx
	je Block9

 Block8:
	mov ecx,edi
	call CLogo::LogoEnd

 Block9:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp esi,ebx
	je Block11

 Block10:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4
}
}
// CLogo::OnMouseButton
__SUB_CLASS_THIS(0020C550, __thiscall, 71537,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push esi
	lea esi,[ecx-4]
	mov ecx,esi
	call CLogo::CanSkip
	test al,al
	je Block3

 Block1:
	cmp dword ptr [esp+8],0x202
	jne Block3

 Block2:
	mov ecx,esi
	call CLogo::ForcedEnd

 Block3:
	pop esi
	ret 0x10
}
}
// CLogo::InitWZLogo
_SUB_EXCEPTION_HANDLER(20C580)
__SUB_CLASS_THIS0(0020C580, __thiscall, 71533,  CLogo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_20C580
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x80
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x94]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x14],ebx
	lea eax,[esp+0x84]
	push eax
	call GetLocalTime
	mov esi,dword ptr [_D_G_GR]
	xor edi,edi
	cmp esi,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea ecx,[esp+0x1C]
	push 0x192F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x9C],edi
	cmp eax,edi
	je Block4

 Block3:
	mov eax,dword ptr [eax]
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov edx,dword ptr [esi]
	push 1
	push edi
	push eax
	mov eax,dword ptr [edx+0x78]
	push esi
	call eax
	mov ecx,dword ptr [esp+0x1C]
	mov esi,eax
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	cmp ecx,edi
	je Block7

 Block6:
	call _xbstr_t::Data_t::Release

 Block7:
	mov ebp,dword ptr [ZImports::_VariantInit]
	xor ecx,ecx
	cmp esi,edi
	setge cl
	lea edx,[esp+0x34]
	push edx
	mov dword ptr [ebx+0x44],ecx
	call ebp
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	lea ecx,[esp+0x24]
	push ecx
	mov dword ptr [esp+0xA0],1
	call ebp
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	push edi
	push edi
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 0x595
	mov bl,2
	push edx
	mov byte ptr [esp+0xB8],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xB0],3
	cmp dword ptr [_D_G_RM],edi
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea eax,[esp+0x58]
	mov byte ptr [esp+0xB0],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA4],4
	call Ztl_variant_t::GetUnknown
	mov ecx,dword ptr [esp+0x14]
	add ecx,0x20
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block16

 Block14:
	cmp eax,0x80004002
	je Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x9C],bl
	mov ebx,8
	cmp word ptr [esp+0x44],bx
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,edi
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea edx,[esp+0x44]
	push edx
	call esi

 Block20:
	mov byte ptr [esp+0x9C],1
	cmp word ptr [esp+0x24],bx
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,edi
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[esp+0x24]
	push ecx
	call esi

 Block24:
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	cmp word ptr [esp+0x34],bx
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	cmp eax,edi
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea eax,[esp+0x34]
	push eax
	call esi

 Block28:
	mov ebx,dword ptr [esp+0x14]
	mov esi,dword ptr [ebx+0x20]
	cmp esi,edi
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x1C]
	push edx
	push esi
	mov dword ptr [esp+0x24],edi
	call eax
	cmp eax,edi
	jge Block32

 Block31:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block32:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [ebx+0x24],ecx
	mov dword ptr [esp+0x18],edi
	lea edx,[esp+0x1C]
	push 0x3D0
	push edx
	mov dword ptr [esp+0xA4],5
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[esp+0x1C]
	push ecx
	push eax
	mov byte ptr [esp+0xA8],6
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x9C],5
	cmp eax,edi
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block34:
	lea edx,[esp+0x24]
	push edx
	call ebp
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	lea ecx,[esp+0x34]
	mov bl,7
	push ecx
	mov byte ptr [esp+0xA0],bl
	call ebp
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	mov ecx,dword ptr [esp+0x18]
	mov byte ptr [esp+0x9C],8
	cmp ecx,edi
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea eax,[esp+0x24]
	push eax
	lea edx,[esp+0x38]
	push edx
	push 0x258
	push 0x320
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0x9C],bl
	cmp word ptr [esp+0x34],si
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,edi
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov byte ptr [esp+0x9C],5
	cmp word ptr [esp+0x24],si
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	cmp eax,edi
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block48:
	lea ecx,[esp+0x24]
	push ecx
	call ebp
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	mov eax,3
	mov word ptr [esp+0x34],ax
	mov dword ptr [esp+0x3C],edi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x9C],0xA
	cmp ecx,edi
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x38]
	push eax
	push edi
	push edi
	push edi
	push edi
	push edi
	lea edx,[esp+0x38]
	push edx
	call IWzGr2D::CreateLayer
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ecx+0x18]
	cmp esi,eax
	je Block57

 Block53:
	mov dword ptr [ecx+0x18],eax
	cmp eax,edi
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block55:
	cmp esi,edi
	je Block57

 Block56:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block57:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,edi
	je Block59

 Block58:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block59:
	mov esi,8
	mov byte ptr [esp+0x9C],9
	cmp word ptr [esp+0x34],si
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,edi
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov byte ptr [esp+0x9C],5
	cmp word ptr [esp+0x24],si
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,edi
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	lea edx,[esp+0x64]
	push edx
	call ebp
	lea eax,[esp+0x64]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block69

 Block68:
	push eax
	call _com_issue_error

 Block69:
	lea ecx,[esp+0x54]
	push ecx
	mov byte ptr [esp+0xA0],0xB
	call ebp
	lea edx,[esp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block71

 Block70:
	push eax
	call _com_issue_error

 Block71:
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0xA0],0xC
	call ebp
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block73

 Block72:
	push eax
	call _com_issue_error

 Block73:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0xA0],0xD
	call ebp
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	lea ecx,[esp+0x34]
	mov bl,0xE
	push ecx
	mov byte ptr [esp+0xA0],bl
	call ebp
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block77

 Block76:
	push eax
	call _com_issue_error

 Block77:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax+0x18]
	mov byte ptr [esp+0x9C],0xF
	cmp ecx,edi
	jne Block79

 Block78:
	push 0x80004003
	call _com_issue_error

 Block79:
	lea edx,[esp+0x64]
	push edx
	lea eax,[esp+0x58]
	push eax
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x30]
	push eax
	mov eax,dword ptr [esp+0x28]
	lea edx,[esp+0x44]
	push edx
	push eax
	lea edx,[esp+0x8C]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x74],8
	jne Block86

 Block80:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,edi
	je Block82

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block82:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block83:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x9C],bl
	jne Block87

 Block84:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	cmp eax,edi
	je Block88

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block86:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x74]
	push ecx
	call esi
	jmp Block83

 Block87:
	lea eax,[esp+0x34]
	push eax
	call esi

 Block88:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x9C],0xD
	jne Block91

 Block89:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,edi
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea edx,[esp+0x24]
	push edx
	call esi

 Block92:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x9C],0xC
	jne Block95

 Block93:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	cmp eax,edi
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea ecx,[esp+0x44]
	push ecx
	call esi

 Block96:
	cmp word ptr [esp+0x54],8
	mov byte ptr [esp+0x9C],0xB
	jne Block99

 Block97:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	cmp eax,edi
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea eax,[esp+0x54]
	push eax
	call esi

 Block100:
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0x9C],5
	jne Block103

 Block101:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	cmp eax,edi
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea edx,[esp+0x64]
	push edx
	call esi

 Block104:
	mov eax,3
	mov word ptr [esp+0x64],ax
	mov dword ptr [esp+0x6C],edi
	mov ecx,dword ptr [esp+0x14]
	mov ecx,dword ptr [ecx+0x18]
	mov bl,0x10
	mov byte ptr [esp+0x9C],bl
	cmp ecx,edi
	jne Block106

 Block105:
	push 0x80004003
	call _com_issue_error

 Block106:
	lea edx,[esp+0x64]
	push edx
	lea eax,[esp+0x20]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x9C],0x11
	cmp esi,edi
	jne Block108

 Block107:
	push 0x80004003
	call _com_issue_error

 Block108:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFFFF
	push 0x258
	push 0x320
	push edi
	push edi
	push esi
	call edx
	cmp eax,edi
	jge Block110

 Block109:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block110:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x9C],bl
	cmp eax,edi
	je Block112

 Block111:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block112:
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0x9C],5
	jne Block115

 Block113:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	cmp eax,edi
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block116:
	mov edx,dword ptr [esp+0x14]
	mov esi,dword ptr [edx+0x18]
	cmp esi,edi
	jne Block118

 Block117:
	push 0x80004003
	call _com_issue_error

 Block118:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,edi
	jge Block120

 Block119:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block120:
	lea edx,[esp+0x54]
	push edx
	call ebp
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block122

 Block121:
	push eax
	call _com_issue_error

 Block122:
	lea ecx,[esp+0x64]
	push ecx
	mov byte ptr [esp+0xA0],0x12
	call ebp
	lea edx,[esp+0x64]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block124

 Block123:
	push eax
	call _com_issue_error

 Block124:
	mov esi,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi+0x18]
	mov bl,0x13
	mov byte ptr [esp+0x9C],bl
	cmp ecx,edi
	jne Block126

 Block125:
	push 0x80004003
	call _com_issue_error

 Block126:
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x9C],0x14
	cmp ecx,edi
	jne Block128

 Block127:
	push 0x80004003
	call _com_issue_error

 Block128:
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x68]
	push eax
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x9C],bl
	cmp eax,edi
	je Block130

 Block129:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block130:
	mov ebx,8
	mov byte ptr [esp+0x9C],0x12
	cmp word ptr [esp+0x64],bx
	jne Block133

 Block131:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	cmp eax,edi
	je Block134

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block134

 Block133:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block134:
	mov byte ptr [esp+0x9C],5
	cmp word ptr [esp+0x54],bx
	jne Block137

 Block135:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	cmp eax,edi
	je Block138

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block137:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block138:
	push edi
	push edi
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push offset _S_0
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esi+0x20]
	lea eax,[esi+0x20]
	mov byte ptr [esp+0xA8],0x15
	cmp ecx,edi
	jne Block140

 Block139:
	push 0x80004003
	call _com_issue_error

 Block140:
	lea edx,[esp+0x80]
	push edx
	mov byte ptr [esp+0xAC],5
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xA4],0x16
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block143

 Block141:
	cmp eax,0x80004002
	je Block143

 Block142:
	push eax
	call _com_issue_error

 Block143:
	mov byte ptr [esp+0x9C],5
	cmp word ptr [esp+0x74],bx
	jne Block146

 Block144:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,edi
	je Block147

 Block145:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block146:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block147:
	lea edx,[esp+0x54]
	push edx
	call ebp
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block149

 Block148:
	push eax
	call _com_issue_error

 Block149:
	mov eax,dword ptr [esp+0x18]
	mov bl,0x17
	mov ecx,0xD
	mov byte ptr [esp+0x9C],bl
	mov word ptr [esp+0x64],cx
	mov dword ptr [esp+0x6C],eax
	cmp eax,edi
	je Block151

 Block150:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block151:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x9C],0x18
	cmp ecx,edi
	jne Block153

 Block152:
	push 0x80004003
	call _com_issue_error

 Block153:
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x68]
	push eax
	push edi
	push edi
	push edi
	push edi
	push edi
	lea edx,[esp+0x38]
	push edx
	call IWzGr2D::CreateLayer
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ecx+0x1C]
	cmp esi,eax
	je Block158

 Block154:
	mov edx,ecx
	mov dword ptr [edx+0x1C],eax
	cmp eax,edi
	je Block156

 Block155:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block156:
	cmp esi,edi
	je Block158

 Block157:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block158:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,edi
	je Block160

 Block159:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block160:
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0x9C],bl
	jne Block163

 Block161:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	cmp eax,edi
	je Block164

 Block162:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block164

 Block163:
	lea edx,[esp+0x64]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block164:
	cmp word ptr [esp+0x54],8
	mov byte ptr [esp+0x9C],5
	jne Block167

 Block165:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,edi
	je Block168

 Block166:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block168

 Block167:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block168:
	lea edx,[esp+0x24]
	push edx
	call ebp
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block170

 Block169:
	push eax
	call _com_issue_error

 Block170:
	lea ecx,[esp+0x34]
	push ecx
	mov byte ptr [esp+0xA0],0x19
	call ebp
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block172

 Block171:
	push eax
	call _com_issue_error

 Block172:
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0xA0],0x1A
	call ebp
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block174

 Block173:
	push eax
	call _com_issue_error

 Block174:
	lea edx,[esp+0x54]
	push edx
	mov byte ptr [esp+0xA0],0x1B
	call ebp
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block176

 Block175:
	push eax
	call _com_issue_error

 Block176:
	lea ecx,[esp+0x64]
	mov bl,0x1C
	push ecx
	mov byte ptr [esp+0xA0],bl
	call ebp
	lea edx,[esp+0x64]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block178

 Block177:
	push eax
	call _com_issue_error

 Block178:
	mov esi,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi+0x1C]
	mov byte ptr [esp+0x9C],0x1D
	cmp ecx,edi
	jne Block180

 Block179:
	push 0x80004003
	call _com_issue_error

 Block180:
	lea eax,[esp+0x24]
	push eax
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x4C]
	push eax
	lea edx,[esp+0x60]
	push edx
	mov edx,dword ptr [esp+0x28]
	lea eax,[esp+0x74]
	push eax
	push edx
	lea eax,[esp+0x8C]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x74],8
	jne Block183

 Block181:
	mov eax,dword ptr [esp+0x7C]
	xor ecx,ecx
	mov word ptr [esp+0x74],cx
	cmp eax,edi
	je Block184

 Block182:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block184

 Block183:
	lea edx,[esp+0x74]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block184:
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0x9C],bl
	jne Block191

 Block185:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	cmp eax,edi
	je Block187

 Block186:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block187:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block188:
	cmp word ptr [esp+0x54],8
	mov byte ptr [esp+0x9C],0x1B
	jne Block192

 Block189:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	cmp eax,edi
	je Block193

 Block190:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block193

 Block191:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x64]
	push ecx
	call ebx
	jmp Block188

 Block192:
	lea eax,[esp+0x54]
	push eax
	call ebx

 Block193:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0x9C],0x1A
	jne Block196

 Block194:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,edi
	je Block197

 Block195:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block197

 Block196:
	lea edx,[esp+0x44]
	push edx
	call ebx

 Block197:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x9C],0x19
	jne Block200

 Block198:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,edi
	je Block201

 Block199:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block201

 Block200:
	lea ecx,[esp+0x34]
	push ecx
	call ebx

 Block201:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x9C],5
	jne Block204

 Block202:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	cmp eax,edi
	je Block205

 Block203:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block205

 Block204:
	lea eax,[esp+0x24]
	push eax
	call ebx

 Block205:
	mov ecx,3
	mov word ptr [esp+0x64],cx
	mov dword ptr [esp+0x6C],edi
	mov ecx,dword ptr [esi+0x1C]
	mov bl,0x1E
	mov byte ptr [esp+0x9C],bl
	cmp ecx,edi
	jne Block207

 Block206:
	push 0x80004003
	call _com_issue_error

 Block207:
	lea edx,[esp+0x64]
	push edx
	lea eax,[esp+0x20]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x9C],0x1F
	cmp esi,edi
	jne Block209

 Block208:
	push 0x80004003
	call _com_issue_error

 Block209:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push 0x258
	push 0x320
	push edi
	push edi
	push esi
	call edx
	cmp eax,edi
	jge Block211

 Block210:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block211:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x9C],bl
	cmp eax,edi
	je Block213

 Block212:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block213:
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0x9C],5
	jne Block216

 Block214:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	cmp eax,edi
	je Block217

 Block215:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block217

 Block216:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block217:
	mov edx,dword ptr [esp+0x14]
	mov esi,dword ptr [edx+0x1C]
	cmp esi,edi
	jne Block219

 Block218:
	push 0x80004003
	call _com_issue_error

 Block219:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFF
	push esi
	call ecx
	cmp eax,edi
	jge Block221

 Block220:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block221:
	lea edx,[esp+0x54]
	push edx
	call ebp
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block223

 Block222:
	push eax
	call _com_issue_error

 Block223:
	lea ecx,[esp+0x64]
	push ecx
	mov byte ptr [esp+0xA0],0x20
	call ebp
	lea edx,[esp+0x64]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block225

 Block224:
	push eax
	call _com_issue_error

 Block225:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax+0x1C]
	mov bl,0x21
	mov byte ptr [esp+0x9C],bl
	cmp ecx,edi
	jne Block227

 Block226:
	push 0x80004003
	call _com_issue_error

 Block227:
	lea edx,[esp+0x20]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x9C],0x22
	cmp ecx,edi
	jne Block229

 Block228:
	push 0x80004003
	call _com_issue_error

 Block229:
	lea eax,[esp+0x54]
	push eax
	lea edx,[esp+0x68]
	push edx
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x9C],bl
	cmp eax,edi
	je Block231

 Block230:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block231:
	mov esi,8
	mov byte ptr [esp+0x9C],0x20
	cmp word ptr [esp+0x64],si
	jne Block234

 Block232:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	cmp eax,edi
	je Block235

 Block233:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block235

 Block234:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block235:
	mov byte ptr [esp+0x9C],5
	cmp word ptr [esp+0x54],si
	jne Block238

 Block236:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	cmp eax,edi
	je Block239

 Block237:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block239

 Block238:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block239:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	cmp eax,edi
	je Block241

 Block240:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block241:
	mov ecx,dword ptr [esp+0x94]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x8C
	ret
}
}
// CLogo::GetRTTI
__SUB_CLASS_THIS0(0020BC30, __thiscall, 71543,  CLogo, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CLogo::ms_RTTI_CLogo
	ret
}
}
// CLogo::LogoEnd
_SUB_EXCEPTION_HANDLER(20BD00)
__SUB_CLASS_THIS0(0020BD00, __thiscall, 71533,  CLogo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_20BD00
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [_D_G_GR]
	test eax,eax
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x84]
	push eax
	call edx
	mov eax,dword ptr [_D_G_GR]
	test eax,eax
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x74]
	push 0
	push eax
	call edx
	push 0x2C8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+4],eax
	mov dword ptr [esp+0x10],0
	test eax,eax
	je Block6

 Block5:
	mov ecx,eax
	call CLogin::_ctor_default
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	push 0
	push eax
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call set_stage
	add esp,8
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x10
	ret
}
}
// CLogo::IsKindOf
__SUB_CLASS_THIS(0020BC50, __thiscall, 71544,  CLogo, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CLogo::ms_RTTI_CLogo
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
// CLogo::CLogo
__SUB_CLASS_THIS0(0020BBC0, __thiscall, 71531,  CLogo, void) {
__asm {

 Block0:
	mov eax,ecx
	int 3// TODO: 	mov dword ptr [eax+4],offset IUIMsgHandler::`vftable'
	int 3// TODO: 	mov dword ptr [eax+8],offset INetMsgHandler::`vftable'
	int 3// TODO: 	mov dword ptr [eax+0xC],offset ZRefCounted::`vftable'
	xor ecx,ecx
	mov dword ptr [eax+0x10],ecx
	mov dword ptr [eax+0x14],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CLogo::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [eax+4],offset CLogo::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [eax+8],offset CLogo::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [eax+0xC],offset CLogo::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+0x18],ecx
	mov dword ptr [eax+0x1C],ecx
	mov dword ptr [eax+0x20],ecx
	mov dword ptr [eax+0x28],ecx
	mov dword ptr [eax+0x2C],ecx
	mov dword ptr [eax+0x30],ecx
	mov dword ptr [eax+0x34],ecx
	mov dword ptr [eax+0x38],ecx
	mov dword ptr [eax+0x3C],ecx
	mov dword ptr [eax+0x40],ecx
	mov dword ptr [eax+0x44],ecx
	ret
}
}
