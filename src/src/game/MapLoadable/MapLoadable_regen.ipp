#include "regen.hpp"
// MapLoadable.ipp
#include "MapLoadable.hpp"

#include "ext/ext_field.h"
#include "Config/Config.hpp"

// CMapLoadable::MakeObjLayer
_SUB_EXCEPTION_HANDLER(21F6C0)
__SUB_CLASS_THIS(0021F6C0, __thiscall, 19674,  CMapLoadable, _x_com_ptr<IWzGr2DLayer>*, _x_com_ptr<IWzGr2DLayer>*, NakedParam<_x_com_ptr<IWzProperty>>, long, long, long, long, int32_t, long, long, long, long, long&, const ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_21F6C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x18],ecx
	xor ebx,ebx
	mov dword ptr [esp+0x20],ebx
	mov esi,1
	mov dword ptr [esp+0x4C],esi
	mov dword ptr [esp+0x14],ebx
	lea eax,[esp+0x1C]
	push 0x3D2
	push eax
	mov byte ptr [esp+0x54],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[esp+0x18]
	push ecx
	push eax
	mov byte ptr [esp+0x58],3
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x4C],2
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x5C]
	mov edx,dword ptr [esp+0x7C]
	imul eax,0x7530
	mov ecx,dword ptr [esp+0x68]
	push edx
	push 0xFF
	lea edx,[eax+ecx-0x3FFFF830]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x8C],esp
	push ebx
	mov dword ptr [eax],ebx
	push ebx
	push ecx
	mov ecx,dword ptr [esp+0x30]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x98],esp
	cmp eax,ebx
	je Block4

 Block3:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block4:
	mov ecx,dword ptr [esp+0x88]
	mov edx,dword ptr [esp+0x74]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x7C]
	mov dword ptr [esp+0xA0],esp
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	mov ebp,dword ptr [esp+0x78]
	push ebp
	call CAnimationDisplayer::LoadLayer_0
	add esp,0x28
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x84],esp
	push 0x1AD0
	push eax
	mov dword ptr [esp+0x30],esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x60]
	mov byte ptr [esp+0x54],4
	cmp ecx,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x58],2
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x54],5
	call get_int32
	mov ecx,dword ptr [esp+0x88]
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	add esp,8
	mov dword ptr [ecx],eax
	mov byte ptr [esp+0x4C],2
	cmp word ptr [esp+0x34],si
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	cmp eax,ebx
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea eax,[esp+0x34]
	push eax
	call edi

 Block12:
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x84],esp
	push 0x609
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x60]
	mov byte ptr [esp+0x54],6
	cmp ecx,ebx
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x58],2
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x54],7
	call get_int32
	add esp,8
	cmp eax,1
	sete bl
	mov byte ptr [esp+0x4C],2
	cmp word ptr [esp+0x34],si
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[esp+0x34]
	push ecx
	call edi

 Block18:
	test bl,bl
	je Block23

 Block19:
	mov esi,dword ptr [ebp]
	test esi,esi
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xF4]
	push 1
	push esi
	call eax
	test eax,eax
	jge Block23

 Block22:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block23:
	push ecx
	mov ecx,dword ptr [esp+0x18]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x80],esp
	test eax,eax
	je Block25

 Block24:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block25:
	mov eax,dword ptr [ebp]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x84],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block27:
	mov ecx,dword ptr [esp+0x20]
	call CMapLoadable::MakeVectorAnimate
	mov esi,dword ptr [esp+0x78]
	test esi,esi
	je Block77

 Block28:
	mov ecx,dword ptr [esp+0x14]
	xor ebp,ebp
	cmp ecx,ebp
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov ebx,dword ptr [_D_VTEMPTY]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [_D_VTEMPTY+4]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [_D_VTEMPTY+8]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [_D_VTEMPTY+12]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [edx+0x64]
	push ecx
	mov edi,ecx
	call eax
	cmp eax,ebp
	jge Block32

 Block31:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block32:
	cmp esi,1
	je Block34

 Block33:
	mov edi,dword ptr [esp+0x74]
	cmp esi,3
	jne Block35

 Block34:
	mov edi,dword ptr [esp+0x70]

 Block35:
	mov ebx,0x64
	cmp esi,1
	je Block37

 Block36:
	mov dword ptr [esp+0x7C],ebp
	cmp esi,3
	jne Block38

 Block37:
	mov dword ptr [esp+0x7C],ebx

 Block38:
	cmp esi,2
	je Block41

 Block39:
	cmp esi,3
	je Block41

 Block40:
	xor ebx,ebx

 Block41:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x5C]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x58]
	mov dword ptr [esp+0x64],ebp
	call eax
	cmp eax,ebp
	jge Block45

 Block44:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block45:
	mov esi,dword ptr [esp+0x5C]
	mov ebp,esi
	test edi,edi
	je Block51

 Block46:
	mov ecx,edi
	jg Block48

 Block47:
	neg ecx

 Block48:
	mov eax,0x4E20
	cdq
	idiv ecx
	mov ebp,eax
	add ebp,esi
	test edi,edi
	jle Block50

 Block49:
	mov ecx,dword ptr [esp+0x7C]
	neg ecx
	mov dword ptr [esp+0x7C],ecx
	neg ebx
	jmp Block52

 Block50:
	jne Block52

 Block51:
	mov dword ptr [esp+0x7C],0
	xor ebx,ebx

 Block52:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x34]
	push edx
	call esi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	lea ecx,[esp+0x24]
	push ecx
	mov byte ptr [esp+0x50],8
	call esi
	lea edx,[esp+0x24]
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
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x4C],9
	test ecx,ecx
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	mov esi,dword ptr [esp+0x64]
	mov edi,dword ptr [esp+0x60]
	lea eax,[esp+0x34]
	push eax
	mov eax,dword ptr [esp+0x80]
	lea edx,[esp+0x28]
	push edx
	add ebx,esi
	push ebx
	add eax,edi
	push eax
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x4C],8
	jne Block65

 Block59:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block61

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block61:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block62:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x4C],2
	jne Block66

 Block63:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block67

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block65:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x24]
	push edx
	call ebx
	jmp Block62

 Block66:
	lea ecx,[esp+0x34]
	push ecx
	call ebx

 Block67:
	mov edx,3
	mov word ptr [esp+0x24],dx
	mov dword ptr [esp+0x2C],0x10000000
	mov eax,edx
	mov word ptr [esp+0x34],ax
	mov dword ptr [esp+0x3C],ebp
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x4C],0xB
	test ecx,ecx
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x38]
	push eax
	push esi
	push edi
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x4C],0xA
	cmp word ptr [esp+0x34],si
	jne Block72

 Block70:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea edx,[esp+0x34]
	push edx
	call ebx

 Block73:
	mov byte ptr [esp+0x4C],2
	cmp word ptr [esp+0x24],si
	jne Block76

 Block74:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea ecx,[esp+0x24]
	push ecx
	call ebx

 Block77:
	mov edx,dword ptr [esp+0x84]
	mov eax,dword ptr [esp+0x6C]
	mov edi,dword ptr [esp+0x54]
	push edx
	push eax
	mov eax,dword ptr [edi]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x78],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block79

 Block78:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block79:
	push ecx
	mov ecx,dword ptr [esp+0x68]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x7C],esp
	test eax,eax
	je Block81

 Block80:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block81:
	mov ecx,dword ptr [esp+0x28]
	call CMapLoadable::MakeObstacles
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push ecx
	call esi
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block83

 Block82:
	push eax
	call _com_issue_error

 Block83:
	lea eax,[esp+0x34]
	mov bl,0xC
	push eax
	mov byte ptr [esp+0x50],bl
	call esi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block85

 Block84:
	push eax
	call _com_issue_error

 Block85:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x4C],0xD
	test ecx,ecx
	jne Block87

 Block86:
	push 0x80004003
	call _com_issue_error

 Block87:
	lea edx,[esp+0x24]
	push edx
	mov edx,dword ptr [esp+0x68]
	lea eax,[esp+0x38]
	push eax
	mov eax,dword ptr [esp+0x68]
	push edx
	push eax
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x4C],bl
	cmp word ptr [esp+0x34],si
	jne Block90

 Block88:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block91:
	mov byte ptr [esp+0x4C],2
	cmp word ptr [esp+0x24],si
	jne Block94

 Block92:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block95:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x4C],1
	test eax,eax
	je Block97

 Block96:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block97:
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x4C],0
	test eax,eax
	je Block99

 Block98:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block99:
	mov eax,edi
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 0x34
}
}
// CONFIG_SYSOPT::GetVideo_MagLevel
__SUB_CLASS_THIS(0020FE70, __thiscall, 12307,  CONFIG_SYSOPT, void, long&, long&) {
__asm {

 Block0:
	mov eax,dword ptr [ecx]
	sub eax,0
	je Block6

 Block1:
	sub eax,1
	je Block5

 Block2:
	sub eax,1
	je Block4

 Block3:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [esp+8]
	mov dword ptr [eax],0
	mov dword ptr [ecx],0
	ret 8

 Block4:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [esp+8]
	mov dword ptr [edx],0
	mov dword ptr [eax],1
	ret 8

 Block5:
	mov ecx,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	mov dword ptr [ecx],1
	mov dword ptr [edx],2
	ret 8

 Block6:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [esp+8]
	mov dword ptr [eax],2
	mov dword ptr [ecx],2
	ret 8
}
}
// CMapLoadable::MakeTile
_SUB_EXCEPTION_HANDLER(21B500)
__SUB_CLASS_THIS(0021B500, __thiscall, 19670,  CMapLoadable, void, int32_t, NakedParam<_x_com_ptr<IWzProperty>>, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_21B500
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x6C]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x24],ecx
	xor edi,edi
	mov dword ptr [esp+0x74],edi
	mov dword ptr [esp+0x14],edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x601
	push eax
	mov byte ptr [esp+0x80],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x88]
	mov byte ptr [esp+0x78],3
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x7C],2
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x74],4
	call _xvariant_t::op_long
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x600
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x8C]
	mov byte ptr [esp+0x7C],5
	cmp ecx,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0x80],4
	call IWzProperty::Getitem
	mov esi,eax
	lea eax,[esp+0x1C]
	push 0x1A1C
	mov bl,6
	push eax
	mov byte ptr [esp+0x80],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x78],7
	mov ecx,esi
	cmp esi,edi
	je Block10

 Block5:
	lea ecx,[ecx]

 Block6:
	mov edx,0x400C
	cmp word ptr [ecx],dx
	jne Block9

 Block7:
	mov ecx,dword ptr [ecx+8]
	cmp ecx,edi
	jne Block6

 Block8:
	jmp Block10

 Block9:
	cmp ecx,edi
	jne Block21

 Block10:
	mov esi,8

 Block11:
	xor ecx,ecx

 Block12:
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea eax,[esp+0x20]
	push eax
	call ZXString16::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0x10
	mov byte ptr [esp+0x74],bl
	cmp eax,edi
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block14:
	mov byte ptr [esp+0x74],4
	cmp word ptr [esp+0x3C],si
	jne Block26

 Block15:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,edi
	je Block17

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block17:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block18:
	mov byte ptr [esp+0x74],2
	cmp word ptr [esp+0x2C],si
	jne Block27

 Block19:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,edi
	je Block28

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block21:
	movzx edx,word ptr [ecx]
	mov esi,8
	cmp dx,si
	jne Block23

 Block22:
	mov ecx,dword ptr [ecx+8]
	jmp Block12

 Block23:
	mov ebp,0x4008
	cmp dx,bp
	jne Block11

 Block24:
	mov ecx,dword ptr [ecx+8]
	cmp ecx,edi
	je Block11

 Block25:
	mov ecx,dword ptr [ecx]
	jmp Block12

 Block26:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x3C]
	push edx
	call ebp
	jmp Block18

 Block27:
	lea ecx,[esp+0x2C]
	push ecx
	call ebp

 Block28:
	mov edx,dword ptr [esp+0x14]
	push edi
	push edi
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push edx
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [esp+0x8C]
	mov byte ptr [esp+0x80],8
	cmp ecx,edi
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea eax,[esp+0x58]
	push eax
	mov byte ptr [esp+0x84],2
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x7C],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block33

 Block31:
	cmp eax,0x80004002
	je Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	mov byte ptr [esp+0x74],0xB
	cmp word ptr [esp+0x4C],si
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	cmp eax,edi
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea edx,[esp+0x4C]
	push edx
	call ebp

 Block37:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x3E5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x88]
	mov byte ptr [esp+0x78],0xC
	cmp ecx,edi
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x7C],0xB
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x74],0xD
	call _xvariant_t::op_long
	mov ebx,eax
	mov byte ptr [esp+0x74],0xB
	cmp word ptr [esp+0x3C],si
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,edi
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea ecx,[esp+0x3C]
	push ecx
	call ebp

 Block43:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x3E6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x88]
	mov byte ptr [esp+0x78],0xE
	cmp ecx,edi
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x7C],0xB
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x74],0xF
	call _xvariant_t::op_long
	cmp word ptr [esp+0x3C],8
	mov esi,eax
	mov byte ptr [esp+0x74],0xB
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,edi
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea edx,[esp+0x3C]
	push edx
	call ebp

 Block49:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x602
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x88]
	mov byte ptr [esp+0x78],0x10
	cmp ecx,edi
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x7C],0xB
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x74],0x11
	call _xvariant_t::op_long
	cmp word ptr [esp+0x3C],8
	mov edi,eax
	mov byte ptr [esp+0x74],0xB
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[esp+0x3C]
	push ecx
	call ebp

 Block55:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block57

 Block56:
	push eax
	call _com_issue_error

 Block57:
	mov ebp,dword ptr [esp+0x18]
	mov ecx,0xD
	mov byte ptr [esp+0x74],0x12
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],ebp
	test ebp,ebp
	je Block59

 Block58:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+4]
	push ebp
	call eax

 Block59:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x74],0x13
	test ecx,ecx
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push 0
	push 0
	push 0
	push esi
	push ebx
	lea edx,[esp+0x38]
	push edx
	call IWzGr2D::CreateLayer
	mov esi,8
	mov byte ptr [esp+0x74],0x15
	cmp word ptr [esp+0x2C],si
	jne Block64

 Block62:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov byte ptr [esp+0x74],0x16
	cmp word ptr [esp+0x3C],si
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block69:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x3E7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x78],0x17
	test ebp,ebp
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	lea edx,[esp+0x24]
	push edx
	mov ecx,ebp
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x78],0x18
	test ecx,ecx
	jne Block73

 Block72:
	push 0x80004003
	call _com_issue_error

 Block73:
	lea eax,[esp+0x60]
	mov bl,0x19
	push eax
	mov byte ptr [esp+0x7C],bl
	call IWzProperty::Getitem
	mov esi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x74],0x1A
	test esi,esi
	jne Block75

 Block74:
	push 0x80004003
	call _com_issue_error

 Block75:
	mov ecx,eax
	call _xvariant_t::op_long
	mov ecx,dword ptr [esp+0x7C]
	mov edx,dword ptr [esi]
	imul ecx,0xBB8
	sub ecx,edi
	lea ecx,[ecx+ecx*4]
	lea eax,[eax+ecx*2-0x3FFFB1EA]
	push eax
	mov eax,dword ptr [edx+0xB4]
	push esi
	call eax
	test eax,eax
	jge Block77

 Block76:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block77:
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0x74],bl
	jne Block80

 Block78:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea edx,[esp+0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x74],0x16
	test eax,eax
	je Block83

 Block82:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block83:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	test eax,eax
	jge Block85

 Block84:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block85:
	mov ecx,dword ptr [esp+0x24]
	add ecx,0x40
	call ZList<_x_com_ptr<IWzGr2DLayer>>::AddTail_
	mov edi,dword ptr [eax]
	cmp edi,esi
	je Block88

 Block86:
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax
	test edi,edi
	je Block88

 Block87:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block88:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0x78],0xB
	call ecx
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	mov byte ptr [esp+0x78],2
	call eax
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x74],1
	test eax,eax
	je Block90

 Block89:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block90:
	mov eax,dword ptr [esp+0x80]
	mov byte ptr [esp+0x74],0
	test eax,eax
	je Block92

 Block91:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block92:
	mov eax,dword ptr [esp+0x84]
	mov dword ptr [esp+0x74],0xFFFFFFFF
	test eax,eax
	je Block94

 Block93:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block94:
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x64
	ret 0xC
}
}
// CMapLoadable::MakeVectorAnimate
_SUB_EXCEPTION_HANDLER(216460)
__SUB_CLASS_THIS(00216460, __thiscall, 19684,  CMapLoadable, void, NakedParam<_x_com_ptr<IWzGr2DLayer>>, NakedParam<_x_com_ptr<IWzVector2D>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_216460
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
	xor esi,esi
	mov dword ptr [esp+0x64],esi
	mov ecx,dword ptr [esp+0x6C]
	cmp ecx,esi
	sete al
	test al,al
	je Block5

 Block1:
	mov byte ptr [esp+0x64],0
	cmp ecx,esi
	je Block3

 Block2:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx

 Block3:
	mov eax,dword ptr [esp+0x70]
	mov dword ptr [esp+0x64],0xFFFFFFFF
	cmp eax,esi
	je Block121

 Block4:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block121

 Block5:
	mov edx,3
	mov word ptr [esp+0x3C],dx
	mov dword ptr [esp+0x44],esi
	mov byte ptr [esp+0x64],2
	cmp ecx,esi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea eax,[esp+0x3C]
	push eax
	lea edx,[esp+0x28]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov edi,8
	mov byte ptr [esp+0x64],4
	cmp word ptr [esp+0x3C],di
	jne Block10

 Block8:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,esi
	je Block11

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block11

 Block10:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block11:
	mov ebp,dword ptr [esp+0x24]
	cmp ebp,esi
	sete al
	test al,al
	je Block17

 Block12:
	mov byte ptr [esp+0x64],1
	cmp ebp,esi
	je Block14

 Block13:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block14:
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x64],0
	cmp eax,esi
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov eax,dword ptr [esp+0x70]
	cmp eax,esi
	jmp Block119

 Block17:
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x61D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x6C],5
	cmp ebp,esi
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebp
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x6C],6
	cmp ecx,esi
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	lea edx,[esp+0x54]
	mov bl,7
	push edx
	mov byte ptr [esp+0x70],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x6C],8
	call get_int32
	add esp,8
	mov esi,eax
	mov dword ptr [esp+0x2C],esi
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x4C],di
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x64],4
	test eax,eax
	je Block27

 Block26:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block27:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x61E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x28]
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x70],9
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x6C],0xA
	test ecx,ecx
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea eax,[esp+0x54]
	mov bl,0xB
	push eax
	mov byte ptr [esp+0x70],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x6C],0xC
	call get_int32
	add esp,8
	cmp word ptr [esp+0x4C],8
	mov edi,eax
	mov dword ptr [esp+0x18],edi
	mov byte ptr [esp+0x64],bl
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x64],4
	test eax,eax
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block35:
	test esi,esi
	jne Block46

 Block36:
	test edi,edi
	jne Block46

 Block37:
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block45

 Block38:
	mov ebx,0xD
	mov ecx,ebx
	mov word ptr [esp+0x4C],cx
	mov dword ptr [esp+0x54],eax
	test eax,eax
	je Block40

 Block39:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block40:
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x64],bl
	test ecx,ecx
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	lea edx,[esp+0x20]
	push edx
	call IWzGr2DLayer::Getlt
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,eax
	mov byte ptr [esp+0x68],0xE
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Putorigin
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x64],bl
	test eax,eax
	je Block44

 Block43:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block44:
	lea ecx,[esp+0x4C]
	call Ztl_variant_t::~Ztl_variant_t

 Block45:
	mov ecx,dword ptr [ebp]
	push ebp
	jmp Block116

 Block46:
	push 0x64
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x61F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x70],0xF
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x6C],0x10
	test ecx,ecx
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	lea edx,[esp+0x54]
	mov bl,0x11
	push edx
	mov byte ptr [esp+0x70],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x6C],0x12
	call get_int32
	mov esi,8
	add esp,8
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x4C],si
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x64],4
	test eax,eax
	je Block54

 Block53:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block54:
	push 0x64
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x620
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x70],0x13
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x6C],0x14
	test ecx,ecx
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	lea eax,[esp+0x54]
	mov bl,0x15
	push eax
	mov byte ptr [esp+0x70],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x6C],0x16
	call get_int32
	add esp,8
	mov dword ptr [esp+0x1C],eax
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x4C],si
	jne Block59

 Block57:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],4
	test eax,eax
	je Block62

 Block61:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block62:
	push 0x1388
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x621
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x70],0x17
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x6C],0x18
	test ecx,ecx
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	lea edx,[esp+0x54]
	mov bl,0x19
	push edx
	mov byte ptr [esp+0x70],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x6C],0x1A
	call get_int32
	add esp,8
	mov edi,eax
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x4C],si
	jne Block67

 Block65:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],4
	test eax,eax
	je Block70

 Block69:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block70:
	push 0
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push offset _S_CENTERSTART
	call _xbstr_t::_ctor_1
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x70],0x1B
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x6C],0x1C
	test ecx,ecx
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	lea edx,[esp+0x54]
	mov bl,0x1D
	push edx
	mov byte ptr [esp+0x70],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x6C],0x1E
	call get_int32
	add esp,8
	mov ebp,eax
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x4C],si
	jne Block75

 Block73:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],4
	test eax,eax
	je Block78

 Block77:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block78:
	mov dword ptr [esp+0x14],0
	cmp dword ptr [esp+0x70],0
	mov esi,dword ptr [TSingleton<CVecProcess>::ms_pInstance]
	sete al
	mov byte ptr [esp+0x64],0x1F
	test al,al
	je Block81

 Block79:
	lea ecx,[esp+0x28]
	push 0x3D2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edx,[esp+0x74]
	push edx
	push eax
	mov byte ptr [esp+0x70],0x20
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x64],0x1F
	test eax,eax
	je Block81

 Block80:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block81:
	mov eax,dword ptr [esp+0x2C]
	cmp eax,3
	ja Block101

 Block82:
	cmp EAX, 0
je Block83
cmp EAX, 1
je Block85
cmp EAX, 2
je Block89
cmp EAX, 3
je Block93


 Block83:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block101

 Block84:
	push 0
	push 0
	push eax
	push ecx
	lea eax,[esp+0x80]
	mov ecx,esp
	mov dword ptr [esp+0x48],esp
	push eax
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	lea ecx,[esp+0x3C]
	push ecx
	mov ecx,esi
	call CVecProcess::MakeRotate
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzVector2D>::op_assign_copy
	mov eax,dword ptr [esp+0x2C]
	jmp Block99

 Block85:
	mov ecx,dword ptr [esp+0x20]
	push ebp
	push 0
	push edi
	push ecx
	push ecx
	lea edx,[esp+0x84]
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push edx
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	lea eax,[esp+0x3C]
	push eax
	mov ecx,esi
	call CVecProcess::MakeOscilate
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzVector2D>::op_assign_copy
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block87

 Block86:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block87:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block101

 Block88:
	push 0
	push 0
	push eax
	push ecx
	lea eax,[esp+0x24]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push eax
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,esi
	call CVecProcess::MakeRotate
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzVector2D>::op_assign_copy
	mov eax,dword ptr [esp+0x20]
	jmp Block99

 Block89:
	mov ecx,dword ptr [esp+0x1C]
	push ebp
	push 1
	push edi
	push ecx
	push ecx
	lea edx,[esp+0x84]
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push edx
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	lea eax,[esp+0x30]
	push eax
	mov ecx,esi
	call CVecProcess::MakeOscilate
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzVector2D>::op_assign_copy
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block91

 Block90:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block91:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block101

 Block92:
	push 0
	push 0
	push eax
	push ecx
	lea eax,[esp+0x24]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push eax
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	lea ecx,[esp+0x40]
	push ecx
	mov ecx,esi
	call CVecProcess::MakeRotate
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzVector2D>::op_assign_copy
	mov eax,dword ptr [esp+0x30]
	jmp Block99

 Block93:
	mov eax,edi
	test edi,edi
	jg Block95

 Block94:
	neg eax

 Block95:
	mov edx,dword ptr [esp+0x1C]
	xor ecx,ecx
	test edi,edi
	setg cl
	push 0
	push ecx
	push eax
	mov eax,dword ptr [esp+0x2C]
	push edx
	push eax
	push ecx
	lea edx,[esp+0x88]
	mov ecx,esp
	mov dword ptr [esp+0x50],esp
	push edx
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	lea eax,[esp+0x4C]
	push eax
	mov ecx,esi
	call CVecProcess::MakeElipticalMove
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzVector2D>::op_assign_copy
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block97

 Block96:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block97:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block101

 Block98:
	push 0
	push 0
	push eax
	push ecx
	lea eax,[esp+0x24]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push eax
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,esi
	call CVecProcess::MakeRotate
	push eax
	lea ecx,[esp+0x18]
	call _x_com_ptr<IWzVector2D>::op_assign_copy
	mov eax,dword ptr [esp+0x38]

 Block99:
	test eax,eax
	je Block101

 Block100:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block101:
	mov eax,dword ptr [esp+0x14]
	mov ecx,0xD
	mov word ptr [esp+0x4C],cx
	mov dword ptr [esp+0x54],eax
	test eax,eax
	je Block103

 Block102:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block103:
	mov ecx,dword ptr [esp+0x6C]
	mov bl,0x21
	mov byte ptr [esp+0x64],bl
	test ecx,ecx
	jne Block105

 Block104:
	push 0x80004003
	call _com_issue_error

 Block105:
	lea edx,[esp+0x38]
	push edx
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x64],0x22
	test ecx,ecx
	jne Block107

 Block106:
	push 0x80004003
	call _com_issue_error

 Block107:
	lea eax,[esp+0x4C]
	push eax
	call IWzVector2D::Putorigin
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x64],bl
	test eax,eax
	je Block109

 Block108:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block109:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x64],0x1F
	jne Block112

 Block110:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block113

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block112:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block113:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],4
	test eax,eax
	je Block115

 Block114:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block115:
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [eax]
	push eax

 Block116:
	mov edx,dword ptr [ecx+8]
	mov byte ptr [esp+0x68],1
	call edx
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x64],0
	test eax,eax
	je Block118

 Block117:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block118:
	mov eax,dword ptr [esp+0x70]
	test eax,eax

 Block119:
	mov dword ptr [esp+0x64],0xFFFFFFFF
	je Block121

 Block120:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block121:
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret 8
}
}
// CMapLoadable::TransientLayer_Exist
__SUB_CLASS_THIS0(005CF8F0, __thiscall, 19659,  CMapLoadable, int32_t) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x70],0
	jne Block4

 Block1:
	mov eax,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	cmp dword ptr [eax+0xEC],0
	jne Block4

 Block2:
	cmp dword ptr [eax+0x100],0
	jne Block4

 Block3:
	xor eax,eax
	ret

 Block4:
	mov eax,1
	ret
}
}
// Field::BackEffect::Encode
__SUB_CLASS_THIS(00165E70, __thiscall, 16488,  Field::BackEffect, void, COutPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	push 0x90
	mov ecx,edi
	call COutPacket::Init_1
	movzx eax,byte ptr [esi+0x10]
	push eax
	mov ecx,edi
	call COutPacket::Encode1
	mov ecx,dword ptr [esi+0x14]
	push ecx
	mov ecx,edi
	call COutPacket::Encode4
	movzx edx,byte ptr [esi+0x18]
	push edx
	mov ecx,edi
	call COutPacket::Encode1
	mov eax,dword ptr [esi+0x1C]
	push eax
	mov ecx,edi
	call COutPacket::Encode4
	pop edi
	pop esi
	ret 4
}
}
// CMapLoadable::MakeBack
_SUB_EXCEPTION_HANDLER(21BBA0)
__SUB_CLASS_THIS(0021BBA0, __thiscall, 19679,  CMapLoadable, void, int32_t, NakedParam<_x_com_ptr<IWzProperty>>, unsigned long, int32_t, long, long, long, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x58]
	sub esp,0x58
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_21BBA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x54],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x10],ecx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	push 0x610
	xor edi,edi
	push eax
	mov dword ptr [ebp-4],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],1
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x88]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp]
	push eax
	mov byte ptr [ebp-4],2
	call DetachBSTR
	add esp,8
	mov ebx,8
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x88],bx
	jne Block5

 Block3:
	mov eax,dword ptr [ebp-0x80]
	xor ecx,ecx
	mov word ptr [ebp-0x88],cx
	cmp eax,edi
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea edx,[ebp-0x88]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block6:
	mov esi,dword ptr [ebp]
	cmp esi,edi
	je Block11

 Block7:
	cmp dword ptr [esi],edi
	je Block10

 Block8:
	mov eax,dword ptr [esi]
	cmp eax,edi
	je Block10

 Block9:
	mov eax,dword ptr [eax-4]
	shr eax,1
	cmp eax,edi
	jne Block12

 Block10:
	mov ecx,esi
	call _xbstr_t::Data_t::Release

 Block11:
	mov eax,dword ptr [ebp+0x64]
	cmp eax,edi
	jmp Block432

 Block12:
	lea eax,[ebp+8]
	push 0x611
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esi]
	mov eax,edx
	mov byte ptr [ebp-4],5
	lea esi,[eax+2]
	lea esp,[esp]

 Block13:
	mov cx,word ptr [eax]
	add eax,2
	cmp cx,di
	jne Block13

 Block14:
	sub eax,esi
	sar eax,1
	push eax
	push edx
	lea ecx,[ebp+8]
	call ZXString16::_Cat
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x58]
	push ecx
	call esi
	lea edx,[ebp-0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	lea eax,[ebp-0x68]
	push eax
	mov byte ptr [ebp-4],6
	call esi
	lea ecx,[ebp-0x68]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	push edi
	push edi
	lea edx,[ebp-0x58]
	push edx
	mov edx,dword ptr [ebp+8]
	lea eax,[ebp-0x68]
	push eax
	push ecx
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],7
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],8
	cmp dword ptr [_D_G_RM],edi
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea eax,[ebp-0x78]
	mov byte ptr [ebp-4],7
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0xC]
	mov dword ptr [ebp+0xC],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block23

 Block21:
	cmp eax,0x80004002
	je Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x78],bx
	jne Block30

 Block24:
	mov eax,dword ptr [ebp-0x70]
	xor ecx,ecx
	mov word ptr [ebp-0x78],cx
	cmp eax,edi
	je Block26

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block26:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block27:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x68],bx
	jne Block31

 Block28:
	xor eax,eax
	mov word ptr [ebp-0x68],ax
	mov eax,dword ptr [ebp-0x60]
	cmp eax,edi
	je Block32

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block30:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x78]
	push edx
	call esi
	jmp Block27

 Block31:
	lea ecx,[ebp-0x68]
	push ecx
	call esi

 Block32:
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x58],bx
	jne Block35

 Block33:
	mov eax,dword ptr [ebp-0x50]
	xor edx,edx
	mov word ptr [ebp-0x58],dx
	cmp eax,edi
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea eax,[ebp-0x58]
	push eax
	call esi

 Block36:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push 0x3E5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0xE
	cmp ecx,edi
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea edx,[ebp+0x44]
	push edx
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call _xvariant_t::op_long
	mov dword ptr [ebp-0x34],eax
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp+0x44],bx
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	cmp eax,edi
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[ebp+0x44]
	push ecx
	call esi

 Block42:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x40],esp
	push 0x3E6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x10
	cmp ecx,edi
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	lea eax,[ebp+0x44]
	push eax
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x11
	call _xvariant_t::op_long
	mov dword ptr [ebp-0x38],eax
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp+0x44],bx
	jne Block47

 Block45:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	cmp eax,edi
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[ebp+0x44]
	push edx
	call esi

 Block48:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	push 0x612
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x12
	cmp ecx,edi
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea edx,[ebp+0x44]
	push edx
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x13
	call _xvariant_t::op_long
	mov dword ptr [ebp-0x18],eax
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp+0x44],bx
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	cmp eax,edi
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea ecx,[ebp+0x44]
	push ecx
	call esi

 Block54:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x40],esp
	push 0x613
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x14
	cmp ecx,edi
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	lea eax,[ebp+0x44]
	push eax
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x15
	call _xvariant_t::op_long
	mov dword ptr [ebp-0x14],eax
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp+0x44],bx
	jne Block59

 Block57:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	cmp eax,edi
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea edx,[ebp+0x44]
	push edx
	call esi

 Block60:
	cmp dword ptr [ebp+0x6C],edi
	je Block62

 Block61:
	mov eax,dword ptr [ebp+0x70]
	mov ecx,dword ptr [ebp+0x74]
	mov edx,dword ptr [ebp+0x78]
	mov dword ptr [ebp-0x34],eax
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-0x38],ecx
	mov dword ptr [ebp-0x18],edx
	mov dword ptr [ebp-0x14],eax

 Block62:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push 0x618
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x16
	cmp ecx,edi
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	lea edx,[ebp+0x44]
	push edx
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x17
	call _xvariant_t::op_long
	mov dword ptr [ebp-0x44],eax
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp+0x44],bx
	jne Block67

 Block65:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	cmp eax,edi
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea ecx,[ebp+0x44]
	push ecx
	call esi

 Block68:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x40],esp
	push 0x614
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x18
	cmp ecx,edi
	jne Block70

 Block69:
	push 0x80004003
	call _com_issue_error

 Block70:
	lea eax,[ebp+0x44]
	push eax
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x19
	call _xvariant_t::op_long
	mov dword ptr [ebp-0x48],eax
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp+0x44],bx
	jne Block73

 Block71:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	cmp eax,edi
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea edx,[ebp+0x44]
	push edx
	call esi

 Block74:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	push 0x615
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x1A
	cmp ecx,edi
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	lea edx,[ebp+0x44]
	push edx
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1B
	call _xvariant_t::op_long
	mov dword ptr [ebp-0x40],eax
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp+0x44],bx
	jne Block79

 Block77:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	cmp eax,edi
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea ecx,[ebp+0x44]
	push ecx
	call esi

 Block80:
	push 0xFF
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x40],esp
	push 0x617
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x1C
	cmp ecx,edi
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	lea eax,[ebp+0x44]
	push eax
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1D
	call get_int32
	add esp,8
	mov dword ptr [ebp-0x10],eax
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp+0x44],bx
	jne Block85

 Block83:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	cmp eax,edi
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea edx,[ebp+0x44]
	push edx
	call esi

 Block86:
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	push 0x616
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x1E
	cmp ecx,edi
	jne Block88

 Block87:
	push 0x80004003
	call _com_issue_error

 Block88:
	lea edx,[ebp+0x44]
	push edx
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1F
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [ebp-0x3C],eax
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp+0x44],bx
	jne Block91

 Block89:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	cmp eax,edi
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea ecx,[ebp+0x44]
	push ecx
	call esi

 Block92:
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x40],esp
	push 0x5E5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x20
	cmp ecx,edi
	jne Block94

 Block93:
	push 0x80004003
	call _com_issue_error

 Block94:
	lea eax,[ebp+0x44]
	push eax
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x21
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [ebp+0x40],eax
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp+0x44],bx
	jne Block97

 Block95:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	cmp eax,edi
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea edx,[ebp+0x44]
	push edx
	call esi

 Block98:
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x3C],esp
	push 0x619
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x22
	cmp ecx,edi
	jne Block100

 Block99:
	push 0x80004003
	call _com_issue_error

 Block100:
	lea edx,[ebp+0x44]
	push edx
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x23
	call get_int32
	add esp,8
	mov esi,eax
	neg esi
	sbb esi,esi
	neg esi
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp+0x44],bx
	jne Block103

 Block101:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	cmp eax,edi
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block104:
	cmp esi,edi
	mov esi,dword ptr [ebp+0x60]
	mov eax,esi
	je Block106

 Block105:
	imul eax,0x3E8
	sub eax,0x3FFBDCA0
	jmp Block107

 Block106:
	imul eax,0x3E8
	sub eax,0x4001F400

 Block107:
	mov dword ptr [ebp+0x1C],eax
	mov dword ptr [ebp+0x14],edi
	mov dword ptr [ebp+4],edi
	lea ecx,[ebp-0x30]
	mov byte ptr [ebp-4],0x25
	mov dword ptr [ebp-0x2C],edi
	call ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>::_Alloc
	mov ecx,dword ptr [ebp+0x10]
	lea edx,[ebp-0x30]
	push edx
	lea eax,[ebp+0x3C]
	push eax
	add ecx,0xE8
	mov byte ptr [ebp-4],0x26
	mov dword ptr [ebp+0x3C],esi
	call ZMap<long, ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>, long>::Insert
	mov dword ptr [ebp+0x38],edi
	lea ecx,[ebp+0x3C]
	push 0x3D2
	push ecx
	mov byte ptr [ebp-4],0x27
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea edx,[ebp+0x38]
	push edx
	push eax
	mov byte ptr [ebp-4],0x28
	call PcCreate_IWzVector2D
	mov eax,dword ptr [ebp+0x3C]
	add esp,0xC
	mov byte ptr [ebp-4],0x27
	cmp eax,edi
	je Block109

 Block108:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block109:
	mov ecx,dword ptr [_D_G_GR]
	cmp ecx,edi
	jne Block111

 Block110:
	push 0x80004003
	call _com_issue_error

 Block111:
	lea eax,[ebp+0x3C]
	push eax
	call IWzGr2D::Getcenter
	mov eax,dword ptr [eax]
	mov bl,0x29
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp+0x24],cx
	mov dword ptr [ebp+0x2C],eax
	cmp eax,edi
	je Block113

 Block112:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block113:
	mov ecx,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x2A
	cmp ecx,edi
	jne Block115

 Block114:
	push 0x80004003
	call _com_issue_error

 Block115:
	mov edi,dword ptr [ebp+0x24]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x28]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp+0x2C]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [ebp+0x30]
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x64]
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block117

 Block116:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block117:
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],bl
	jne Block120

 Block118:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block121

 Block119:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block120:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block121:
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x27
	test eax,eax
	je Block123

 Block122:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block123:
	cmp dword ptr [ebp-0x3C],0
	push ecx
	mov dword ptr [ebp+0x34],esp
	jne Block203

 Block124:
	mov eax,esp
	push 0x601
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x2B
	test ecx,ecx
	jne Block126

 Block125:
	push 0x80004003
	call _com_issue_error

 Block126:
	lea edx,[ebp+0x44]
	push edx
	mov byte ptr [ebp-4],0x27
	call IWzProperty::Getitem
	mov esi,eax
	lea eax,[ebp+0x3C]
	push 0x61B
	mov bl,0x2C
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edi,dword ptr [eax]
	mov ecx,esi
	mov byte ptr [ebp-4],0x2D
	call _xvariant_t::op_long
	push eax
	lea ecx,[ebp+0x14]
	push edi
	push ecx
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x3C]
	add esp,0xC
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block128

 Block127:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block128:
	mov esi,8
	mov byte ptr [ebp-4],0x27
	cmp word ptr [ebp+0x44],si
	jne Block131

 Block129:
	mov eax,dword ptr [ebp+0x4C]
	xor edx,edx
	mov word ptr [ebp+0x44],dx
	test eax,eax
	je Block132

 Block130:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block132

 Block131:
	lea eax,[ebp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block132:
	mov edx,dword ptr [ebp+0x14]
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push edx
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0x2E
	test ecx,ecx
	jne Block134

 Block133:
	push 0x80004003
	call _com_issue_error

 Block134:
	lea eax,[ebp-0x28]
	push eax
	mov byte ptr [ebp-4],0x27
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x2F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x34]
	mov dword ptr [ebp+0x34],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block137

 Block135:
	cmp eax,0x80004002
	je Block137

 Block136:
	push eax
	call _com_issue_error

 Block137:
	mov byte ptr [ebp-4],0x31
	cmp word ptr [ebp-0x28],si
	jne Block140

 Block138:
	mov eax,dword ptr [ebp-0x20]
	xor ecx,ecx
	mov word ptr [ebp-0x28],cx
	test eax,eax
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea edx,[ebp-0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block141:
	mov edi,dword ptr [ebp+0x10]
	mov eax,dword ptr [edi+0x118]
	mov ebx,dword ptr [ebp+0x34]
	test eax,eax
	jle Block146

 Block142:
	test ebx,ebx
	jne Block144

 Block143:
	push 0x80004003
	call _com_issue_error

 Block144:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+0x5C]
	push eax
	push ebx
	call edx
	test eax,eax
	jge Block146

 Block145:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block146:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x44]
	push eax
	call esi
	lea ecx,[ebp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block148

 Block147:
	push eax
	call _com_issue_error

 Block148:
	mov edx,0xD
	mov byte ptr [ebp-4],0x32
	mov word ptr [ebp+0x24],dx
	mov dword ptr [ebp+0x2C],ebx
	test ebx,ebx
	je Block150

 Block149:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx

 Block150:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x33
	test ecx,ecx
	jne Block152

 Block151:
	push 0x80004003
	call _com_issue_error

 Block152:
	lea edx,[ebp+0x44]
	push edx
	mov edx,dword ptr [ebp+0x1C]
	lea eax,[ebp+0x24]
	push eax
	push edx
	push 0
	push 0
	push 0
	push 0
	lea eax,[ebp+0x3C]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	test eax,eax
	je Block154

 Block153:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov ebx,eax
	push eax
	mov dword ptr [ebp+4],ebx
	call edx
	jmp Block155

 Block154:
	mov ebx,dword ptr [ebp+4]

 Block155:
	mov eax,dword ptr [ebp+0x3C]
	test eax,eax
	je Block157

 Block156:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block157:
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0x32
	jne Block160

 Block158:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block161

 Block159:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block161

 Block160:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block161:
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0x31
	jne Block164

 Block162:
	mov eax,dword ptr [ebp+0x4C]
	xor edx,edx
	mov word ptr [ebp+0x44],dx
	test eax,eax
	je Block165

 Block163:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block165

 Block164:
	lea eax,[ebp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block165:
	push ecx
	mov ecx,dword ptr [ebp+0x38]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x38]
	mov dword ptr [ebp+0x3C],esp
	test eax,eax
	je Block167

 Block166:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block167:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x3C],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block169

 Block168:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	push ebx
	call edx

 Block169:
	mov ecx,edi
	call CMapLoadable::MakeVectorAnimate
	test ebx,ebx
	jne Block171

 Block170:
	push 0x80004003
	call _com_issue_error

 Block171:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push ebx
	call ecx
	xor edi,edi
	cmp eax,edi
	jge Block173

 Block172:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block173:
	lea edx,[ebp+0x24]
	push edx
	call esi
	lea eax,[ebp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block175

 Block174:
	push eax
	call _com_issue_error

 Block175:
	lea ecx,[ebp+0x44]
	push ecx
	mov byte ptr [ebp-4],0x34
	call esi
	lea edx,[ebp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block177

 Block176:
	push eax
	call _com_issue_error

 Block177:
	lea eax,[ebp+0x3C]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x35
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x36
	cmp ecx,edi
	jne Block179

 Block178:
	push 0x80004003
	call _com_issue_error

 Block179:
	lea edx,[ebp+0x24]
	push edx
	mov edx,dword ptr [ebp-0x10]
	lea eax,[ebp+0x44]
	push eax
	push 0xFF
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x35
	cmp eax,edi
	je Block181

 Block180:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block181:
	mov esi,8
	mov byte ptr [ebp-4],0x34
	cmp word ptr [ebp+0x44],si
	jne Block184

 Block182:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	cmp eax,edi
	je Block185

 Block183:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block185

 Block184:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block185:
	mov byte ptr [ebp-4],0x31
	cmp word ptr [ebp+0x24],si
	jne Block188

 Block186:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	cmp eax,edi
	je Block189

 Block187:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block189

 Block188:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block189:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x1C],esp
	push 0x609
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x34]
	mov byte ptr [ebp-4],0x37
	cmp esi,edi
	jne Block191

 Block190:
	push 0x80004003
	call _com_issue_error

 Block191:
	lea edx,[ebp+0x3C]
	push edx
	mov ecx,esi
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x38
	cmp ecx,edi
	jne Block193

 Block192:
	push 0x80004003
	call _com_issue_error

 Block193:
	lea eax,[ebp+0x44]
	push eax
	mov byte ptr [ebp-4],0x39
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x3A
	call get_int32
	add esp,8
	cmp eax,1
	sete byte ptr [ebp+0x1B]
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0x39
	jne Block196

 Block194:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	cmp eax,edi
	je Block197

 Block195:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block197

 Block196:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block197:
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x31
	cmp eax,edi
	je Block199

 Block198:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block199:
	cmp byte ptr [ebp+0x1B],0
	je Block202

 Block200:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+0xF4]
	push 1
	push ebx
	call ecx
	cmp eax,edi
	jge Block202

 Block201:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block202:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0x27
	call eax
	jmp Block285

 Block203:
	mov ecx,esp
	push 0x601
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x3B
	test ecx,ecx
	jne Block205

 Block204:
	push 0x80004003
	call _com_issue_error

 Block205:
	lea edx,[ebp-0x28]
	push edx
	mov byte ptr [ebp-4],0x27
	call IWzProperty::Getitem
	mov esi,eax
	lea eax,[ebp+0x3C]
	push 0x61C
	mov bl,0x3C
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edi,dword ptr [eax]
	mov ecx,esi
	mov byte ptr [ebp-4],0x3D
	call _xvariant_t::op_long
	push eax
	lea ecx,[ebp+0x14]
	push edi
	push ecx
	call ZXString16::Format
	mov eax,dword ptr [ebp+0x3C]
	add esp,0xC
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block207

 Block206:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block207:
	mov edi,8
	mov byte ptr [ebp-4],0x27
	cmp word ptr [ebp-0x28],di
	jne Block210

 Block208:
	mov eax,dword ptr [ebp-0x20]
	xor edx,edx
	mov word ptr [ebp-0x28],dx
	test eax,eax
	je Block211

 Block209:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block211

 Block210:
	lea eax,[ebp-0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block211:
	mov ebx,dword ptr [ebp+0x14]
	push 0
	push 0
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push ebx
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],0x3E
	test esi,esi
	jne Block213

 Block212:
	push 0x80004003
	call _com_issue_error

 Block213:
	lea ecx,[ebp-0x28]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x27
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x3F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x34]
	mov dword ptr [ebp+0x34],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block216

 Block214:
	cmp eax,0x80004002
	je Block216

 Block215:
	push eax
	call _com_issue_error

 Block216:
	mov byte ptr [ebp-4],0x41
	cmp word ptr [ebp-0x28],di
	jne Block219

 Block217:
	mov eax,dword ptr [ebp-0x20]
	xor edx,edx
	mov word ptr [ebp-0x28],dx
	test eax,eax
	je Block220

 Block218:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block220

 Block219:
	lea eax,[ebp-0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block220:
	mov edi,dword ptr [ebp+0x34]
	test edi,edi
	sete al
	test al,al
	je Block231

 Block221:
	mov byte ptr [ebp-4],0x27
	test edi,edi
	je Block223

 Block222:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block223:
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x26
	test eax,eax
	je Block225

 Block224:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block225:
	lea ecx,[ebp-0x30]
	mov byte ptr [ebp-4],0x25
	call ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>::~ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>
	mov byte ptr [ebp-4],0xD
	test ebx,ebx
	je Block227

 Block226:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString16::_Release
	add esp,4

 Block227:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],5
	call ecx
	mov eax,dword ptr [ebp+8]
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block229

 Block228:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block229:
	mov ecx,dword ptr [ebp]
	call _xbstr_t::Data_t::Release
	mov eax,dword ptr [ebp+0x64]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block434

 Block230:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block434

 Block231:
	test edi,edi
	jne Block233

 Block232:
	push 0x80004003
	call _com_issue_error

 Block233:
	mov ecx,edi
	call IWzProperty::Getcount
	xor esi,esi
	mov dword ptr [ebp+0x3C],eax
	test eax,eax
	jle Block241

 Block234:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x20],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x44]
	push ecx
	mov byte ptr [ebp-4],0x42
	mov ecx,edi
	mov byte ptr [ebp-4],0x41
	call IWzProperty::Getitem
	cmp word ptr [eax],0
	sete bl
	cmp word ptr [ebp+0x44],8
	jne Block237

 Block235:
	mov eax,dword ptr [ebp+0x4C]
	xor edx,edx
	mov word ptr [ebp+0x44],dx
	test eax,eax
	je Block238

 Block236:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block238

 Block237:
	lea eax,[ebp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block238:
	test bl,bl
	jne Block240

 Block239:
	inc esi
	cmp esi,dword ptr [ebp+0x3C]
	jl Block234

 Block240:
	test esi,esi
	jne Block250

 Block241:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],0x27
	call edx
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x26
	test eax,eax
	je Block243

 Block242:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block243:
	mov eax,dword ptr [ebp-0x2C]
	mov byte ptr [ebp-4],0x25
	test eax,eax
	je Block247

 Block244:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block247

 Block245:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block247

 Block246:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block247:
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block249

 Block248:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block249:
	mov eax,dword ptr [ebp+0xC]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],5
	call edx
	jmp Block429

 Block250:
	mov eax,dword ptr [ebp+0x10]
	mov ecx,dword ptr [eax+0x118]
	mov edx,dword ptr [ebp-0x10]
	mov eax,dword ptr [ebp+0x1C]
	push ecx
	push edx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x20],esp
	push 0
	mov dword ptr [eax],0
	push 0
	push ecx
	mov ecx,dword ptr [ebp+0x38]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x38]
	mov dword ptr [ebp+0x20],esp
	test eax,eax
	je Block252

 Block251:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block252:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [ebp+0x20],esp
	push edi
	call edx
	lea eax,[ebp+0x3C]
	push eax
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	add esp,0x28
	test eax,eax
	je Block254

 Block253:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov esi,eax
	push eax
	mov dword ptr [ebp+4],esi
	call edx
	jmp Block255

 Block254:
	mov esi,dword ptr [ebp+4]

 Block255:
	mov eax,dword ptr [ebp+0x3C]
	test eax,eax
	je Block257

 Block256:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block257:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x20],esp
	push 0x609
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x44]
	push ecx
	mov byte ptr [ebp-4],0x43
	mov ecx,edi
	mov byte ptr [ebp-4],0x41
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x44
	call get_int32
	add esp,8
	cmp eax,1
	sete bl
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0x41
	jne Block260

 Block258:
	mov eax,dword ptr [ebp+0x4C]
	xor edx,edx
	mov word ptr [ebp+0x44],dx
	test eax,eax
	je Block261

 Block259:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block261

 Block260:
	lea eax,[ebp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block261:
	test bl,bl
	je Block266

 Block262:
	test esi,esi
	jne Block264

 Block263:
	push 0x80004003
	call _com_issue_error

 Block264:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xF4]
	push 1
	push esi
	call edx
	test eax,eax
	jge Block266

 Block265:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block266:
	push ecx
	mov ecx,dword ptr [ebp+0x38]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x38]
	mov dword ptr [ebp+0x20],esp
	test eax,eax
	je Block268

 Block267:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block268:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x20],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block270

 Block269:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block270:
	mov ecx,dword ptr [ebp+0x10]
	call CMapLoadable::MakeVectorAnimate
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x24]
	push eax
	call ebx
	lea ecx,[ebp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block272

 Block271:
	push eax
	call _com_issue_error

 Block272:
	lea edx,[ebp+0x44]
	push edx
	mov byte ptr [ebp-4],0x45
	call ebx
	lea eax,[ebp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block274

 Block273:
	push eax
	call _com_issue_error

 Block274:
	mov byte ptr [ebp-4],0x46
	test esi,esi
	jne Block276

 Block275:
	push 0x80004003
	call _com_issue_error

 Block276:
	lea ecx,[ebp+0x24]
	push ecx
	lea edx,[ebp+0x44]
	push edx
	push 0x20
	mov ecx,esi
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [ebp-4],0x45
	cmp word ptr [ebp+0x44],si
	jne Block279

 Block277:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block280

 Block278:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block280

 Block279:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block280:
	mov byte ptr [ebp-4],0x41
	cmp word ptr [ebp+0x24],si
	jne Block283

 Block281:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block284

 Block282:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block284

 Block283:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block284:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],0x27
	call edx
	mov ebx,dword ptr [ebp+4]
	xor edi,edi

 Block285:
	mov ecx,dword ptr [ebp-0x2C]
	call ZList<_x_com_ptr<IWzGr2DLayer>>::AddTail_
	mov esi,dword ptr [eax]
	cmp esi,ebx
	je Block288

 Block286:
	mov dword ptr [eax],ebx
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx
	cmp esi,edi
	je Block288

 Block287:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block288:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0xD8]
	xor edx,edx
	cmp dword ptr [ebp+0x40],edi
	setne dl
	push edx
	push ebx
	call eax
	cmp eax,edi
	jge Block290

 Block289:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block290:
	mov ecx,3
	mov word ptr [ebp+0x44],cx
	mov dword ptr [ebp+0x4C],edi
	lea edx,[ebp+0x44]
	push edx
	lea eax,[ebp+0x3C]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x47
	call IWzGr2DLayer::Getcanvas
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x48
	cmp esi,edi
	jne Block292

 Block291:
	push 0x80004003
	call _com_issue_error

 Block292:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x6C]
	lea edx,[ebp+0x40]
	push edx
	push esi
	mov dword ptr [ebp+0x40],edi
	call eax
	cmp eax,edi
	jge Block294

 Block293:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block294:
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x47
	cmp eax,edi
	je Block296

 Block295:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block296:
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0x27
	jne Block299

 Block297:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	cmp eax,edi
	je Block300

 Block298:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block300

 Block299:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block300:
	mov edx,3
	mov word ptr [ebp+0x44],dx
	mov dword ptr [ebp+0x4C],edi
	lea eax,[ebp+0x44]
	push eax
	lea ecx,[ebp+0x3C]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x49
	call IWzGr2DLayer::Getcanvas
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x4A
	cmp esi,edi
	jne Block302

 Block301:
	push 0x80004003
	call _com_issue_error

 Block302:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[ebp+0x40]
	push eax
	push esi
	mov dword ptr [ebp+0x40],edi
	call ecx
	cmp eax,edi
	jge Block304

 Block303:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block304:
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x49
	cmp eax,edi
	je Block306

 Block305:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block306:
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0x27
	jne Block309

 Block307:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	cmp eax,edi
	je Block310

 Block308:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block310

 Block309:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block310:
	mov esi,dword ptr [ebp-0x44]
	cmp esi,4
	je Block313

 Block311:
	cmp esi,6
	je Block313

 Block312:
	xor eax,eax
	jmp Block314

 Block313:
	mov eax,1

 Block314:
	mov dword ptr [ebp+0x34],eax
	cmp esi,5
	je Block317

 Block315:
	cmp esi,7
	je Block317

 Block316:
	xor edi,edi
	jmp Block318

 Block317:
	mov edi,1

 Block318:
	test eax,eax
	jne Block351

 Block319:
	test edi,edi
	jne Block351

 Block320:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x24]
	push eax
	call edi
	lea ecx,[ebp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block322

 Block321:
	push eax
	call _com_issue_error

 Block322:
	lea edx,[ebp+0x44]
	push edx
	mov byte ptr [ebp-4],0x52
	call edi
	lea eax,[ebp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block324

 Block323:
	push eax
	call _com_issue_error

 Block324:
	mov ecx,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x53
	test ecx,ecx
	jne Block326

 Block325:
	push 0x80004003
	call _com_issue_error

 Block326:
	lea edx,[ebp+0x24]
	push edx
	mov edx,dword ptr [ebp-0x38]
	lea eax,[ebp+0x44]
	push eax
	mov eax,dword ptr [ebp-0x34]
	push edx
	push eax
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [ebp-4],0x52
	cmp word ptr [ebp+0x44],di
	jne Block329

 Block327:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	test eax,eax
	je Block330

 Block328:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block330

 Block329:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block330:
	mov byte ptr [ebp-4],0x27
	cmp word ptr [ebp+0x24],di
	jne Block333

 Block331:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block334

 Block332:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block334

 Block333:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block334:
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block336

 Block335:
	push 0x80004003
	call _com_issue_error

 Block336:
	lea edx,[ebp+0x40]
	push edx
	call IWzGr2D::Getcenter
	mov ecx,dword ptr [ebp+0x38]
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0x54
	test ecx,ecx
	jne Block338

 Block337:
	push 0x80004003
	call _com_issue_error

 Block338:
	mov edx,dword ptr [ebp-0x14]
	push edx
	mov edx,dword ptr [ebp-0x18]
	push edx
	push 0x64
	push 0x64
	push eax
	call IWzVector2D::Ratio
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0x27
	test eax,eax
	je Block340

 Block339:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block340:
	mov edi,dword ptr [ebp+0x68]
	test esi,esi
	je Block346

 Block341:
	mov ecx,dword ptr [ebp-0x2C]
	push edi
	sub esp,8
	mov eax,esp
	mov dword ptr [ebp+0x20],esp
	mov dword ptr [eax+4],ecx
	test ecx,ecx
	je Block343

 Block342:
	add ecx,0xFFFFFFF4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block343:
	mov eax,dword ptr [ebp-0x3C]
	mov ecx,dword ptr [ebp-0x10]
	mov edx,dword ptr [ebp-0x40]
	push 0
	push eax
	mov eax,dword ptr [ebp-0x48]
	push ecx
	push edx
	push eax
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [ebp+0x20],esp
	push ebx
	call edx
	mov ecx,dword ptr [ebp+0x10]
	call CMapLoadable::MakeGrid
	mov eax,3
	mov word ptr [ebp-0x28],ax
	mov dword ptr [ebp-0x20],0xFFFFFFFE
	lea ecx,[ebp-0x28]
	push ecx
	lea edx,[ebp+0x40]
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x55
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block345

 Block344:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block345:
	lea ecx,[ebp-0x28]
	mov byte ptr [ebp-4],0x27
	call Ztl_variant_t::~Ztl_variant_t

 Block346:
	mov eax,dword ptr [ebp+0x10]
	cmp dword ptr [eax+0x34],0
	je Block348

 Block347:
	push edi
	mov ecx,ebx
	call IWzGr2DLayer::Putcolor

 Block348:
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x26
	test eax,eax
	je Block350

 Block349:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block350:
	lea ecx,[ebp-0x30]
	mov byte ptr [ebp-4],0x25
	call ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>::~ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>
	mov eax,dword ptr [ebx]
	push ebx
	jmp Block426

 Block351:
	mov ecx,dword ptr [ebp+0x38]
	test ecx,ecx
	jne Block353

 Block352:
	push 0x80004003
	call _com_issue_error

 Block353:
	mov ebx,dword ptr [_D_VTEMPTY]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [_D_VTEMPTY+4]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [_D_VTEMPTY+8]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [_D_VTEMPTY+12]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [edx+0x64]
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block355

 Block354:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block355:
	cmp dword ptr [ebp+0x34],0
	mov ebx,dword ptr [ebp-0x18]
	jne Block357

 Block356:
	mov ebx,dword ptr [ebp-0x14]

 Block357:
	mov esi,dword ptr [ebp+0x34]
	neg esi
	sbb esi,esi
	and esi,0x64
	neg edi
	sbb edi,edi
	and edi,0x64
	mov dword ptr [ebp+0x1C],edi
	mov edi,ebx
	test ebx,ebx
	jg Block359

 Block358:
	neg edi

 Block359:
	mov eax,dword ptr [ebp+0x38]
	test eax,eax
	jne Block361

 Block360:
	push 0x80004003
	call _com_issue_error

 Block361:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x3C]
	push edx
	mov dword ptr [ebp+0x40],eax
	push eax
	mov eax,dword ptr [ecx+0x58]
	mov dword ptr [ebp+0x3C],0
	call eax
	test eax,eax
	jge Block363

 Block362:
	mov ecx,dword ptr [ebp+0x40]
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push ecx
	push eax
	call _com_issue_errorex

 Block363:
	mov eax,0x4E20
	cdq
	idiv edi
	add eax,dword ptr [ebp+0x3C]
	mov dword ptr [ebp+0x40],eax
	test ebx,ebx
	jle Block365

 Block364:
	mov edx,dword ptr [ebp+0x1C]
	neg esi
	neg edx
	mov dword ptr [ebp+0x1C],edx
	jmp Block367

 Block365:
	jne Block367

 Block366:
	xor esi,esi
	mov dword ptr [ebp+0x1C],esi

 Block367:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x24]
	push eax
	call ebx
	lea ecx,[ebp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block369

 Block368:
	push eax
	call _com_issue_error

 Block369:
	lea edx,[ebp+0x44]
	push edx
	mov byte ptr [ebp-4],0x4B
	call ebx
	lea eax,[ebp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block371

 Block370:
	push eax
	call _com_issue_error

 Block371:
	mov ecx,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x4C
	test ecx,ecx
	jne Block373

 Block372:
	push 0x80004003
	call _com_issue_error

 Block373:
	mov ebx,dword ptr [ebp-0x38]
	mov edi,dword ptr [ebp-0x34]
	lea edx,[ebp+0x24]
	push edx
	mov edx,dword ptr [ebp+0x1C]
	lea eax,[ebp+0x44]
	push eax
	add edx,ebx
	push edx
	add esi,edi
	push esi
	call IWzVector2D::RelMove
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0x4B
	jne Block376

 Block374:
	xor eax,eax
	mov word ptr [ebp+0x44],ax
	mov eax,dword ptr [ebp+0x4C]
	test eax,eax
	je Block377

 Block375:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block377

 Block376:
	lea ecx,[ebp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block377:
	mov esi,8
	mov byte ptr [ebp-4],0x27
	cmp word ptr [ebp+0x24],si
	jne Block380

 Block378:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block381

 Block379:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block381

 Block380:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block381:
	mov ecx,3
	mov word ptr [ebp+0x24],cx
	mov dword ptr [ebp+0x2C],0x10000000
	mov eax,dword ptr [ebp+0x40]
	mov edx,ecx
	mov word ptr [ebp+0x44],dx
	mov dword ptr [ebp+0x4C],eax
	mov ecx,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x4E
	test ecx,ecx
	jne Block383

 Block382:
	push 0x80004003
	call _com_issue_error

 Block383:
	lea edx,[ebp+0x24]
	push edx
	lea eax,[ebp+0x44]
	push eax
	push ebx
	push edi
	call IWzVector2D::RelMove
	mov byte ptr [ebp-4],0x4D
	cmp word ptr [ebp+0x44],si
	jne Block386

 Block384:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	test eax,eax
	je Block387

 Block385:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block387

 Block386:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block387:
	mov byte ptr [ebp-4],0x27
	cmp word ptr [ebp+0x24],si
	jne Block390

 Block388:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block391

 Block389:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block391

 Block390:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block391:
	cmp dword ptr [ebp+0x34],0
	mov ecx,dword ptr [_D_G_GR]
	je Block397

 Block392:
	test ecx,ecx
	jne Block394

 Block393:
	push 0x80004003
	call _com_issue_error

 Block394:
	lea edx,[ebp+0x40]
	push edx
	call IWzGr2D::Getcenter
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x4F
	test eax,eax
	jne Block396

 Block395:
	push 0x80004003
	call _com_issue_error

 Block396:
	mov edi,dword ptr [ebp-0x14]
	add edi,0x64
	push edi
	push 0
	jmp Block402

 Block397:
	test ecx,ecx
	jne Block399

 Block398:
	push 0x80004003
	call _com_issue_error

 Block399:
	lea eax,[ebp+0x40]
	push eax
	call IWzGr2D::Getcenter
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x50
	test eax,eax
	jne Block401

 Block400:
	push 0x80004003
	call _com_issue_error

 Block401:
	mov edi,dword ptr [ebp-0x18]
	push 0
	add edi,0x64
	push edi

 Block402:
	mov edx,dword ptr [eax]
	push 0x64
	push 0x64
	push ecx
	mov esi,eax
	push eax
	mov eax,dword ptr [edx+0x98]
	call eax
	test eax,eax
	jge Block404

 Block403:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block404:
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0x27
	test eax,eax
	je Block406

 Block405:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block406:
	mov eax,dword ptr [ebp-0x44]
	add eax,0xFFFFFFFC
	xor esi,esi
	cmp eax,3
	ja Block411

 Block407:
	cmp EAX, 0
je Block408
cmp EAX, 1
je Block409
cmp EAX, 2
je Block410
cmp EAX, 3
je Block410


 Block408:
	mov esi,1
	jmp Block411

 Block409:
	mov esi,2
	jmp Block411

 Block410:
	mov esi,3

 Block411:
	mov eax,dword ptr [ebp+0x68]
	mov edi,dword ptr [ebp-0x2C]
	push eax
	sub esp,8
	mov eax,esp
	mov dword ptr [ebp+0x20],esp
	mov dword ptr [eax+4],edi
	test edi,edi
	je Block413

 Block412:
	lea ecx,[edi-0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block413:
	mov edx,dword ptr [ebp-0x3C]
	mov eax,dword ptr [ebp-0x10]
	mov ecx,dword ptr [ebp-0x40]
	push 0
	push edx
	mov edx,dword ptr [ebp-0x48]
	push eax
	push ecx
	push edx
	push esi
	mov esi,dword ptr [ebp+4]
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [ebp+0x20],esp
	push esi
	call ecx
	mov ecx,dword ptr [ebp+0x10]
	call CMapLoadable::MakeGrid
	mov edx,3
	mov word ptr [ebp+0x44],dx
	mov dword ptr [ebp+0x4C],0xFFFFFFFE
	lea eax,[ebp+0x44]
	push eax
	lea ecx,[ebp+0x40]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x51
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [ebp+0x40]
	test eax,eax
	je Block415

 Block414:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block415:
	cmp word ptr [ebp+0x44],8
	mov byte ptr [ebp-4],0x27
	jne Block418

 Block416:
	mov eax,dword ptr [ebp+0x4C]
	xor ecx,ecx
	mov word ptr [ebp+0x44],cx
	test eax,eax
	je Block419

 Block417:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block419

 Block418:
	lea edx,[ebp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block419:
	mov eax,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0x26
	test eax,eax
	je Block421

 Block420:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block421:
	mov byte ptr [ebp-4],0x25
	test edi,edi
	je Block425

 Block422:
	add edi,0xFFFFFFF0
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block425

 Block423:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block425

 Block424:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block425:
	mov eax,dword ptr [esi]
	push esi

 Block426:
	mov ecx,dword ptr [eax+8]
	mov byte ptr [ebp-4],0x24
	call ecx
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block428

 Block427:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block428:
	mov eax,dword ptr [ebp+0xC]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [ebp-4],5
	call eax

 Block429:
	mov eax,dword ptr [ebp+8]
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block431

 Block430:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block431:
	mov ecx,dword ptr [ebp]
	call _xbstr_t::Data_t::Release
	mov eax,dword ptr [ebp+0x64]
	test eax,eax

 Block432:
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block434

 Block433:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block434:
	lea esp,[ebp-0x98]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x54]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x58
	mov esp,ebp
	pop ebp
	ret 0x20
}
}
// CMapLoadable::CMapLoadable
_SUB_EXCEPTION_HANDLER(214950)
__SUB_CLASS_THIS0(00214950, __thiscall, 19647,  CMapLoadable, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_214950
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
	int 3// TODO: 	mov dword ptr [esi+4],offset IUIMsgHandler::`vftable'
	int 3// TODO: 	mov dword ptr [esi+8],offset INetMsgHandler::`vftable'
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi+0xC],offset ZRefCounted::`vftable'
	mov dword ptr [esi+0x10],eax
	xor edi,edi
	mov dword ptr [esi+0x14],eax
	push edi
	push offset _S___3
	lea ebx,[esi+0x28]
	push edi
	int 3// TODO: 	mov dword ptr [esi],offset CMapLoadable::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CMapLoadable::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CMapLoadable::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CMapLoadable::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x18],edi
	mov dword ptr [esi+0x20],edi
	mov dword ptr [esi+0x24],edi
	push edi
	mov ecx,ebx
	mov dword ptr [esp+0x2C],edi
	mov dword ptr [ebx],edi
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push edi
	mov ecx,ebx
	call ZXString16::ReleaseBuffer
	mov dword ptr [esi+0x2C],edi
	mov dword ptr [esi+0x30],edi
	mov dword ptr [esi+0x34],edi
	mov dword ptr [esi+0x3C],edi
	mov dword ptr [esi+0x48],edi
	mov dword ptr [esi+0x4C],edi
	mov dword ptr [esi+0x50],edi
	int 3// TODO: 	mov ebx,offset ZList<_x_com_ptr<IWzGr2DLayer>>::`vftable'
	mov dword ptr [esi+0x40],ebx
	mov dword ptr [esi+0x54],ebx
	mov dword ptr [esi+0x5C],edi
	mov dword ptr [esi+0x60],edi
	mov dword ptr [esi+0x64],edi
	mov dword ptr [esi+0x68],ebx
	mov dword ptr [esi+0x70],edi
	mov dword ptr [esi+0x74],edi
	mov dword ptr [esi+0x78],edi
	int 3// TODO: 	mov dword ptr [esi+0x7C],offset ZList<ZRef<CMapLoadable::OBSTACLE>>::`vftable'
	mov dword ptr [esi+0x84],edi
	mov dword ptr [esi+0x88],edi
	mov dword ptr [esi+0x8C],edi
	int 3// TODO: 	mov dword ptr [esi+0x90],offset ZList<ZRef<CMapLoadable::REFLECTION_INFO>>::`vftable'
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA0],edi
	lea ecx,[esi+0xB8]
	int 3// TODO: 	mov dword ptr [esi+0xA4],offset ZList<CMapLoadable::VISIBLE_BY_QUEST>::`vftable'
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esi+0xB4],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<char const *, CMapLoadable::CHANGING_OBJECT, ZXString<char>>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<char const *, CMapLoadable::CHANGING_OBJECT, ZXString<char>>::_CalcAutoGrow
	lea ecx,[esi+0xD0]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<char const *, ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>, ZXString<char>>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<char const *, ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>, ZXString<char>>::_CalcAutoGrow
	lea ecx,[esi+0xE8]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>, long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<long, ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>, long>::_CalcAutoGrow
	mov dword ptr [esi+0x100],ebx
	mov dword ptr [esi+0x108],edi
	mov dword ptr [esi+0x10C],edi
	mov dword ptr [esi+0x110],edi
	mov dword ptr [esi+0x114],edi
	mov dword ptr [esi+0x118],edi
	mov dword ptr [esi+0x130],edi
	mov dword ptr [esi+0x134],edi
	mov dword ptr [esi+0x138],edi
	mov dword ptr [esi+0x13C],edi
	mov dword ptr [esi+0x140],edi
	mov dword ptr [esi+0x144],edi
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
// CMapLoadable::MakeObstacles
_SUB_EXCEPTION_HANDLER(21E810)
__SUB_CLASS_THIS(0021E810, __thiscall, 19676,  CMapLoadable, void, NakedParam<_x_com_ptr<IWzProperty>>, NakedParam<_x_com_ptr<IWzGr2DLayer>>, int32_t, const ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_21E810
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],ecx
	xor edi,edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x60B
	push eax
	mov dword ptr [esp+0x48],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],2
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x44],1
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],3
	call get_int32
	add esp,8
	mov esi,eax
	neg esi
	sbb esi,esi
	mov ebp,8
	neg esi
	mov byte ptr [esp+0x38],1
	cmp word ptr [esp+0x20],bp
	jne Block5

 Block3:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block6:
	cmp esi,edi
	jne Block10

 Block7:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x38],0
	cmp eax,edi
	je Block9

 Block8:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block9:
	mov eax,dword ptr [esp+0x44]
	cmp eax,edi
	jmp Block74

 Block10:
	push 0x38
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,edi
	je Block12

 Block11:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CMapLoadable::OBSTACLE::`vftable'
	mov dword ptr [eax+0xC],edi
	mov dword ptr [eax+0x2C],edi
	mov esi,eax
	jmp Block13

 Block12:
	xor esi,esi

 Block13:
	mov dword ptr [esp+0x1C],esi
	cmp esi,edi
	je Block15

 Block14:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block15:
	mov edi,dword ptr [esi+0xC]
	mov eax,dword ptr [esp+0x44]
	mov bl,4
	mov byte ptr [esp+0x38],bl
	cmp edi,eax
	je Block20

 Block16:
	mov dword ptr [esi+0xC],eax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block18:
	test edi,edi
	je Block20

 Block19:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block20:
	mov edx,dword ptr [esp+0x48]
	push 0xA
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x50],esp
	push 0x60C
	push eax
	mov dword ptr [esi+0x10],edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],5
	test ecx,ecx
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x44],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],6
	call get_int32
	add esp,8
	mov dword ptr [esi+0x14],eax
	mov byte ptr [esp+0x38],bl
	cmp word ptr [esp+0x20],bp
	jne Block28

 Block23:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block25:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block26:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x50],esp
	push 0x60E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],7
	test ecx,ecx
	jne Block29

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x20]
	push ecx
	call edi
	jmp Block26

 Block29:
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0x44],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],8
	call get_int32
	add esp,8
	mov dword ptr [esi+0x1C],eax
	mov byte ptr [esp+0x38],bl
	cmp word ptr [esp+0x20],bp
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea edx,[esp+0x20]
	push edx
	call edi

 Block33:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x50],esp
	push 0xB64
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],9
	test ecx,ecx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x44],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],0xA
	call get_int32
	add esp,8
	mov dword ptr [esi+0x20],eax
	mov byte ptr [esp+0x38],bl
	cmp word ptr [esp+0x20],bp
	jne Block38

 Block36:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea ecx,[esp+0x20]
	push ecx
	call edi

 Block39:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x50],esp
	push 0x677
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],0xB
	test ecx,ecx
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0x44],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],0xC
	call get_int32
	add esp,8
	mov dword ptr [esi+0x24],eax
	mov byte ptr [esp+0x38],bl
	cmp word ptr [esp+0x20],bp
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea edx,[esp+0x20]
	push edx
	call edi

 Block45:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x50],esp
	push 0x60D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],0xD
	test ecx,ecx
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x44],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],0xE
	call get_int32
	add esp,8
	mov dword ptr [esi+0x18],eax
	mov byte ptr [esp+0x38],bl
	cmp word ptr [esp+0x20],bp
	jne Block50

 Block48:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea ecx,[esp+0x20]
	push ecx
	call edi

 Block51:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x50],esp
	push 0x140F
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],0xF
	test ecx,ecx
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0x44],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],0x10
	call get_int32
	add esp,8
	mov dword ptr [esi+0x30],eax
	mov byte ptr [esp+0x38],bl
	cmp word ptr [esp+0x20],bp
	jne Block56

 Block54:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea edx,[esp+0x20]
	push edx
	call edi

 Block57:
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x50],esp
	push 0x132C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],0x11
	test ecx,ecx
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x44],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],0x12
	call get_int32
	add esp,8
	mov dword ptr [esi+0x28],eax
	mov byte ptr [esp+0x38],bl
	cmp word ptr [esp+0x20],bp
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[esp+0x20]
	push ecx
	call edi

 Block63:
	mov edx,dword ptr [esp+0x4C]
	push edx
	lea ecx,[esi+0x2C]
	call ZXString<char>::op_assign
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x50],esp
	push 0x17C2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],0x13
	test ecx,ecx
	jne Block65

 Block64:
	push 0x80004003
	call _com_issue_error

 Block65:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x44],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],0x14
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esi+0x34],eax
	mov byte ptr [esp+0x38],bl
	cmp word ptr [esp+0x20],bp
	jne Block68

 Block66:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea ecx,[esp+0x20]
	push ecx
	call edi

 Block69:
	mov ecx,dword ptr [esp+0x14]
	add ecx,0x7C
	call ZList<ZRef<CMapLoadable::OBSTACLE>>::AddTail_
	lea edx,[esp+0x18]
	push edx
	mov ecx,eax
	call ZRef<CMapLoadable::OBSTACLE>::op_assign_copy
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x3C],1
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block71

 Block70:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block71:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x38],0
	test eax,eax
	je Block73

 Block72:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block73:
	mov eax,dword ptr [esp+0x44]
	test eax,eax

 Block74:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	je Block76

 Block75:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block76:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 0x10
}
}
// Field::BackEffect::GetPageID
__SUB_CLASS_THIS0(0020FE60, __thiscall, 16491,  Field::BackEffect, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x18]
	ret
}
}
// CMapLoadable::RestoreViewRange
_SUB_EXCEPTION_HANDLER(21A010)
__SUB_CLASS_THIS0(0021A010, __thiscall, 19649,  CMapLoadable, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_21A010
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esi+0x2C]
	xor ebx,ebx
	mov dword ptr [esp+0x18],edi
	cmp edi,ebx
	je Block2

 Block1:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block2:
	mov eax,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov edx,dword ptr [eax+0x24]
	sub edx,0x14
	push edx
	push ecx
	mov dword ptr [esp+0x1C],eax
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x625
	push eax
	mov dword ptr [esp+0x48],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x40],1
	cmp edi,ebx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x44],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],2
	call get_int32
	add esp,8
	mov ebp,eax
	call get_screen_width
	cdq
	sub eax,edx
	sar eax,1
	add ebp,eax
	cmp word ptr [esp+0x20],8
	mov dword ptr [esi+0x11C],ebp
	mov byte ptr [esp+0x38],bl
	jne Block7

 Block5:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	cmp eax,ebx
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [ecx+0x28]
	sub edx,0x3C
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x627
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0x44],3
	mov ecx,edi
	mov byte ptr [esp+0x44],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],4
	call get_int32
	add esp,8
	mov ebp,eax
	call get_screen_height
	cdq
	sub eax,edx
	sar eax,1
	add ebp,eax
	cmp word ptr [esp+0x20],8
	mov dword ptr [esi+0x120],ebp
	mov byte ptr [esp+0x38],bl
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	cmp eax,ebx
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [ecx+0x2C]
	add edx,0x14
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x626
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0x44],5
	mov ecx,edi
	mov byte ptr [esp+0x44],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],6
	call get_int32
	add esp,8
	mov ebp,eax
	call get_screen_width
	cdq
	sub eax,edx
	sar eax,1
	sub ebp,eax
	cmp word ptr [esp+0x20],8
	mov dword ptr [esi+0x124],ebp
	mov byte ptr [esp+0x38],bl
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	cmp eax,ebx
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [ecx+0x30]
	add edx,0xBE
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x628
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0x44],7
	mov ecx,edi
	mov byte ptr [esp+0x44],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x40],8
	call get_int32
	add esp,8
	mov ebp,eax
	call get_screen_height
	cdq
	sub eax,edx
	sar eax,1
	sub ebp,eax
	cmp word ptr [esp+0x20],8
	mov dword ptr [esi+0x128],ebp
	mov byte ptr [esp+0x38],bl
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	cmp eax,ebx
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov eax,dword ptr [esi+0x124]
	mov ecx,dword ptr [esi+0x11C]
	mov edx,eax
	sub edx,ecx
	test edx,edx
	jg Block22

 Block21:
	add eax,ecx
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [esi+0x11C],eax
	mov dword ptr [esi+0x124],eax

 Block22:
	mov eax,dword ptr [esi+0x128]
	mov ecx,dword ptr [esi+0x120]
	mov edx,eax
	sub edx,ecx
	test edx,edx
	jg Block24

 Block23:
	add eax,ecx
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [esi+0x120],eax
	mov dword ptr [esi+0x128],eax

 Block24:
	call get_adjust_cy
	add dword ptr [esi+0x120],eax
	call get_adjust_cy
	add dword ptr [esi+0x128],eax
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call ecx
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret
}
}
// CMapLoadable::OnPacket
__SUB_CLASS_THIS(0021FD80, __thiscall, 19667,  CMapLoadable, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x90
	je Block5

 Block1:
	sub eax,1
	je Block4

 Block2:
	sub eax,1
	jne Block6

 Block3:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CMapLoadable::OnClearBackEffect
	ret 8

 Block4:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CMapLoadable::OnSetMapObjectVisible
	ret 8

 Block5:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CMapLoadable::OnSetBackEffect

 Block6:
	ret 8
}
}
// CMapLoadable::AnimateObjLayer
_SUB_EXCEPTION_HANDLER(2107B0)
__SUB(002107B0, __cdecl, 19677,  void, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2107B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x34],0
	test eax,eax
	jl Block14

 Block1:
	mov ecx,3
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	lea edx,[esp+0xC]
	push edx
	mov byte ptr [esp+0x38],1
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0xC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],2
	test ecx,ecx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x10]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x34],1
	cmp word ptr [esp+0xC],si
	jne Block8

 Block6:
	mov eax,dword ptr [esp+0x14]
	xor ecx,ecx
	mov word ptr [esp+0xC],cx
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea edx,[esp+0xC]
	push edx
	call edi

 Block9:
	mov byte ptr [esp+0x34],0
	cmp word ptr [esp+0x1C],si
	jne Block13

 Block10:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]

 Block11:
	test eax,eax
	je Block35

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block13:
	lea ecx,[esp+0x1C]
	push ecx
	call edi
	jmp Block35

 Block14:
	cmp eax,0xFFFFFFFF
	jne Block28

 Block15:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xC]
	push edx
	call esi
	lea eax,[esp+0xC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x38],3
	call esi
	lea edx,[esp+0x1C]
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
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],4
	test ecx,ecx
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	lea eax,[esp+0xC]
	push eax
	lea edx,[esp+0x20]
	push edx
	push 0
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x34],3
	cmp word ptr [esp+0x1C],si
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[esp+0x1C]
	push ecx
	call edi

 Block25:
	mov byte ptr [esp+0x34],0
	cmp word ptr [esp+0xC],si
	jne Block27

 Block26:
	mov eax,dword ptr [esp+0x14]
	xor edx,edx
	mov word ptr [esp+0xC],dx
	jmp Block11

 Block27:
	lea eax,[esp+0xC]
	push eax
	call edi
	jmp Block35

 Block28:
	cmp eax,0xFFFFFFFE
	jne Block35

 Block29:
	mov ecx,dword ptr [esp+0x3C]
	test ecx,ecx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	call IWzGr2DLayer::GetanimationState
	test eax,eax
	jne Block35

 Block32:
	push offset _D_VTMISSING
	lea ecx,[esp+0x10]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x38],5
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],6
	test ecx,ecx
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea edx,[esp+0xC]
	push edx
	lea eax,[esp+0x20]
	push eax
	push 0x10
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x1C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xC]
	call Ztl_variant_t::~Ztl_variant_t

 Block35:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x2C
	ret
}
}
// CMapLoadable::MakeCloud
_SUB_EXCEPTION_HANDLER(216DA0)
__SUB_CLASS_THIS0(00216DA0, __thiscall, 19649,  CMapLoadable, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_216DA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xD0
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x34],ecx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0xBC]
	push eax
	call esi
	lea ecx,[ebp-0xBC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor edi,edi
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x7C]
	push edx
	mov dword ptr [ebp-4],edi
	call esi
	lea eax,[ebp-0x7C]
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
	lea ecx,[ebp-0xBC]
	push ecx
	lea edx,[ebp-0x7C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x44],esp
	push 0x623
	mov bl,1
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0xCC]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
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
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0xCC],bx
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0xC4]
	xor edx,edx
	mov word ptr [ebp-0xCC],dx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0xCC]
	push eax
	call esi

 Block13:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x7C],bx
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x74]
	xor ecx,ecx
	mov word ptr [ebp-0x7C],cx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp-0x7C]
	push edx
	call esi

 Block17:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0xBC],bx
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp-0xBC],ax
	mov eax,dword ptr [ebp-0xB4]
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp-0xBC]
	push ecx
	call esi

 Block21:
	mov edi,dword ptr [ebp+0x60]
	xor ebx,ebx
	cmp edi,ebx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x40]
	push eax
	push edi
	mov dword ptr [ebp+0x40],ebx
	call ecx
	cmp eax,ebx
	jge Block25

 Block24:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block25:
	mov edx,dword ptr [ebp+0x34]
	mov eax,dword ptr [edx+0x3C]
	mov edx,dword ptr [eax+0x24]
	mov esi,dword ptr [eax+0x28]
	lea ecx,[edx-0xC8]
	mov dword ptr [ebp+0x30],ecx
	lea ecx,[esi-0xC8]
	mov dword ptr [ebp+0x38],ecx
	mov ecx,dword ptr [eax+0x2C]
	mov eax,dword ptr [eax+0x30]
	sub eax,esi
	add eax,0x190
	sub ecx,edx
	mov dword ptr [ebp+0x58],eax
	fild dword ptr [ebp+0x58]
	add ecx,0x190
	mov dword ptr [ebp+0x50],ecx
	fimul dword ptr [ebp+0x50]
	fdiv qword ptr [__real_41612a8800000000]
	fstp dword ptr [ebp+0x64]
	fld1
	fcom dword ptr [ebp+0x64]
	fnstsw ax
	test ah,5
	jp Block27

 Block26:
	fstp dword ptr [ebp+0x64]
	jmp Block28

 Block27:
	fstp st(0)

 Block28:
	call _rand
	fld dword ptr [ebp+0x64]
	cdq
	fmul qword ptr [__real_c03e000000000000]
	mov ecx,0x14
	idiv ecx
	mov esi,edx
	call __ftol2_sse
	sub esi,eax
	add esi,0xA
	cmp esi,ebx
	mov dword ptr [ebp+0x44],esi
	mov dword ptr [ebp+0x3C],ebx
	jle Block119

 Block29:
	mov bl,0xB

 Block30:
	mov eax,0x20
	call __alloca_probe_8
	mov esi,esp
	push 0
	push 0
	call _rand
	cdq
	idiv dword ptr [ebp+0x40]
	push 0xA
	push esi
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0xDC]
	mov byte ptr [ebp-4],8
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp+0x54],0
	test eax,eax
	je Block33

 Block31:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x60]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x60]
	mov dword ptr [ebp+0x54],ecx
	test eax,eax
	jge Block33

 Block32:
	cmp eax,0x80004002
	jne Block1

 Block33:
	cmp word ptr [ebp-0xDC],8
	mov byte ptr [ebp-4],bl
	jne Block36

 Block34:
	mov eax,dword ptr [ebp-0xD4]
	xor edx,edx
	mov word ptr [ebp-0xDC],dx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea eax,[ebp-0xDC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block37:
	call _rand
	cdq
	mov ecx,0x64
	idiv ecx
	mov esi,edx
	add esi,0x32
	call _rand
	cdq
	mov ecx,0x50
	idiv ecx
	add edx,0x8C
	mov dword ptr [ebp-0x6C],edx
	call _rand
	cdq
	idiv dword ptr [ebp+0x50]
	mov edi,edx
	add edi,dword ptr [ebp+0x30]
	mov dword ptr [ebp+0x48],edi
	call _rand
	cdq
	idiv dword ptr [ebp+0x58]
	lea eax,[esi+esi*4]
	add eax,eax
	mov dword ptr [ebp-0x5C],eax
	lea eax,[esi-0x6E]
	mov ebx,edx
	add ebx,dword ptr [ebp+0x38]
	cdq
	and edx,3
	add eax,edx
	lea edx,[ebp-0x8C]
	sar eax,2
	push edx
	mov dword ptr [ebp-0x58],ebx
	mov dword ptr [ebp-0x50],eax
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x8C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block38:
	mov eax,dword ptr [ebp+0x54]
	xor esi,esi
	mov ecx,0xD
	mov byte ptr [ebp-4],0xC
	mov word ptr [ebp-0xAC],cx
	mov dword ptr [ebp-0xA4],eax
	cmp eax,esi
	je Block40

 Block39:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block40:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0xD
	cmp ecx,esi
	je Block5

 Block41:
	lea edx,[ebp-0x8C]
	push edx
	lea eax,[ebp-0xAC]
	push eax
	push 0xC0061508
	push esi
	push esi
	push esi
	push esi
	lea edx,[ebp+0x4C]
	push edx
	call IWzGr2D::CreateLayer
	cmp word ptr [ebp-0xAC],8
	mov byte ptr [ebp-4],0xF
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [ebp-0xAC],ax
	mov eax,dword ptr [ebp-0xA4]
	cmp eax,esi
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[ebp-0xAC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	cmp word ptr [ebp-0x8C],8
	mov byte ptr [ebp-4],0x10
	jne Block48

 Block46:
	mov eax,dword ptr [ebp-0x84]
	xor edx,edx
	mov word ptr [ebp-0x8C],dx
	cmp eax,esi
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea eax,[ebp-0x8C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block49:
	mov dword ptr [ebp+0x64],esi
	lea ecx,[ebp-0x64]
	push 0x3D2
	push ecx
	mov byte ptr [ebp-4],0x11
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	lea edx,[ebp+0x64]
	push edx
	push eax
	mov byte ptr [ebp-4],0x12
	call PcCreate_IWzVector2D
	mov eax,dword ptr [ebp-0x64]
	add esp,0xC
	mov byte ptr [ebp-4],0x11
	cmp eax,esi
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block51:
	mov eax,3
	mov word ptr [ebp-0x9C],ax
	mov dword ptr [ebp-0x94],esi
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x13
	cmp ecx,esi
	je Block5

 Block52:
	mov eax,dword ptr [ebp+0x58]
	lea edx,[ebp-0x9C]
	push edx
	mov edx,dword ptr [ebp+0x50]
	push eax
	mov eax,dword ptr [ebp+0x38]
	push edx
	mov edx,dword ptr [ebp+0x30]
	push eax
	push edx
	push offset _D_VTEMPTY
	call IWzVector2D::WrapClip
	cmp word ptr [ebp-0x9C],8
	mov byte ptr [ebp-4],0x11
	jne Block55

 Block53:
	xor eax,eax
	mov word ptr [ebp-0x9C],ax
	mov eax,dword ptr [ebp-0x94]
	cmp eax,esi
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea ecx,[ebp-0x9C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x1C]
	push edx
	call esi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block57:
	lea ecx,[ebp+0x20]
	push ecx
	mov byte ptr [ebp-4],0x14
	call esi
	lea edx,[ebp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block58:
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x15
	test ecx,ecx
	je Block5

 Block59:
	mov esi,dword ptr [ebp-0x1C]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [ebp-0x18]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [ebp-0x14]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [ebp-0x10]
	mov dword ptr [eax+0xC],esi
	mov esi,dword ptr [ebp+0x20]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [ebp+0x24]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [ebp+0x28]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [ebp+0x2C]
	push ebx
	push edi
	mov dword ptr [eax+0xC],esi
	mov eax,dword ptr [edx+0x90]
	push ecx
	mov dword ptr [ebp+0x5C],ecx
	call eax
	test eax,eax
	jge Block61

 Block60:
	mov ecx,dword ptr [ebp+0x5C]
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push ecx
	push eax
	call _com_issue_errorex

 Block61:
	mov esi,8
	mov byte ptr [ebp-4],0x14
	cmp word ptr [ebp+0x20],si
	jne Block64

 Block62:
	mov eax,dword ptr [ebp+0x28]
	xor edx,edx
	mov word ptr [ebp+0x20],dx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea eax,[ebp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x1C],si
	jne Block68

 Block66:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov eax,0xD
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x64]
	mov dword ptr [ebp+0x18],eax
	test eax,eax
	je Block71

 Block70:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block71:
	mov edi,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x16
	test edi,edi
	je Block5

 Block72:
	lea eax,[ebp-0x54]
	push eax
	mov ecx,edi
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x17
	test esi,esi
	je Block5

 Block73:
	mov edx,dword ptr [ebp+0x10]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x14]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x18]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x1C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block75

 Block74:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block75:
	mov eax,dword ptr [ebp-0x54]
	mov byte ptr [ebp-4],0x16
	test eax,eax
	je Block77

 Block76:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block77:
	mov ebx,8
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp+0x10],bx
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[ebp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFF
	push edi
	call eax
	test eax,eax
	jge Block83

 Block82:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block83:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block84:
	mov eax,3
	mov word ptr [ebp],ax
	mov dword ptr [ebp+8],0xBB8
	lea ecx,[ebp-0x68]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0x19
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x1A
	test esi,esi
	je Block5

 Block85:
	mov ecx,dword ptr [ebp-0x2C]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x28]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0x24]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x20]
	mov dword ptr [eax+0xC],ecx
	mov ecx,dword ptr [ebp]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+4]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+8]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0xC]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp-0x6C]
	mov ecx,dword ptr [edx+0x90]
	push 0xFF
	push eax
	push esi
	call ecx
	test eax,eax
	jge Block87

 Block86:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block87:
	mov eax,dword ptr [ebp-0x68]
	mov byte ptr [ebp-4],0x19
	test eax,eax
	je Block89

 Block88:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block89:
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp],bx
	jne Block92

 Block90:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x2C],bx
	jne Block96

 Block94:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block97:
	mov edx,3
	mov word ptr [ebp-0x3C],dx
	mov dword ptr [ebp-0x34],0x10000000
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x1B
	test eax,eax
	je Block5

 Block98:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x5C]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x58]
	mov dword ptr [ebp+0x5C],0
	call eax
	test eax,eax
	jge Block100

 Block99:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block100:
	mov edx,dword ptr [ebp+0x5C]
	add edx,0x7530
	mov ecx,3
	mov word ptr [ebp-0x4C],cx
	mov dword ptr [ebp-0x44],edx
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x1C
	test ecx,ecx
	je Block5

 Block101:
	mov ebx,dword ptr [ebp-0x3C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x38]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp-0x34]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp-0x30]
	mov edi,dword ptr [ecx]
	mov dword ptr [eax+0xC],ebx
	mov ebx,dword ptr [ebp-0x4C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x48]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x40]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [ebp-0x58]
	mov eax,dword ptr [ebp-0x50]
	add eax,edx
	mov edx,dword ptr [ebp+0x48]
	push eax
	mov eax,dword ptr [ebp-0x5C]
	add eax,edx
	push eax
	mov eax,dword ptr [edi+0x90]
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block103

 Block102:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block103:
	mov esi,8
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp-0x4C],si
	jne Block106

 Block104:
	mov eax,dword ptr [ebp-0x44]
	xor ecx,ecx
	mov word ptr [ebp-0x4C],cx
	test eax,eax
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea edx,[ebp-0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block107:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp-0x3C],si
	jne Block110

 Block108:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block111:
	mov ecx,dword ptr [ebp+0x34]
	add ecx,0x40
	call ZList<_x_com_ptr<IWzGr2DLayer>>::AddTail_
	mov esi,dword ptr [eax]
	mov edi,dword ptr [ebp+0x4C]
	cmp esi,edi
	je Block114

 Block112:
	mov dword ptr [eax],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax
	test esi,esi
	je Block114

 Block113:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block114:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block116

 Block115:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block116:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	mov bl,0xB
	push edi
	mov byte ptr [ebp-4],bl
	call ecx
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block118

 Block117:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block118:
	mov eax,dword ptr [ebp+0x3C]
	mov edi,dword ptr [ebp+0x60]
	inc eax
	cmp eax,dword ptr [ebp+0x44]
	mov dword ptr [ebp+0x3C],eax
	jl Block30

 Block119:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0xEC]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x68]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x6C
	mov esp,ebp
	pop ebp
	ret
}
}
// CMapLoadable::RestoreWeather
_SUB_EXCEPTION_HANDLER(21D6C0)
__SUB_CLASS_THIS0(0021D6C0, __thiscall, 19649,  CMapLoadable, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_21D6C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov esi,dword ptr [ebp+0x2C]
	mov dword ptr [esp+0x10],esi
	test esi,esi
	je Block2

 Block1:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block2:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x622
	push edx
	mov dword ptr [esp+0x40],0
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x38],1
	test esi,esi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x3C],0
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x38],2
	call get_int32
	add esp,8
	cmp word ptr [esp+0x18],8
	mov edi,eax
	mov byte ptr [esp+0x30],0
	jne Block7

 Block5:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	test edi,edi
	je Block10

 Block9:
	mov ecx,ebp
	call CMapLoadable::MakeCloud

 Block10:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ecx
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x24
	ret
}
}
// CMapLoadable::RestoreObj
_SUB_EXCEPTION_HANDLER(2233D0)
__SUB_CLASS_THIS0(002233D0, __thiscall, 19649,  CMapLoadable, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2233D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x70
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x28],ecx
	xor ebx,ebx
	mov dword ptr [ebp-0x24],ebx

 Block1:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	xor edi,edi
	push edi
	push edi
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov eax,dword ptr [ebp-0x28]
	mov ecx,dword ptr [eax+0x30]
	mov dword ptr [ebp-4],edi
	cmp ecx,edi
	je Block41

 Block2:
	lea edx,[ebp-0x4C]
	push edx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],1
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp-0x14],esi
	cmp eax,edi
	je Block6

 Block3:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x3C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x3C]
	cmp eax,edi
	mov dword ptr [ebp-0x14],ecx
	jge Block5

 Block4:
	cmp eax,0x80004002
	jne Block42

 Block5:
	mov esi,dword ptr [ebp-0x14]

 Block6:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],3
	jne Block9

 Block7:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	cmp eax,edi
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block10:
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x18],esp
	push 0x603
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],4
	cmp esi,edi
	je Block41

 Block11:
	lea edx,[ebp-0x6C]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp-0x2C],edi
	test eax,eax
	je Block14

 Block12:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x34]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x34]
	mov edi,ecx
	mov dword ptr [ebp-0x2C],edi
	test eax,eax
	jge Block14

 Block13:
	cmp eax,0x80004002
	jne Block42

 Block14:
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],7
	jne Block17

 Block15:
	mov eax,dword ptr [ebp-0x64]
	xor edx,edx
	mov word ptr [ebp-0x6C],dx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[ebp-0x6C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block18:
	test edi,edi
	je Block41

 Block19:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp-0x1C]
	push edx
	push edi
	mov dword ptr [ebp-0x1C],0
	call eax
	test eax,eax
	jge Block21

 Block20:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push edi
	push eax
	call _com_issue_errorex

 Block21:
	cmp dword ptr [ebp-0x1C],0
	mov dword ptr [ebp-0x20],0
	jle Block39

 Block22:
	mov eax,0x20
	call __chkstk
	mov ecx,dword ptr [ebp-0x20]
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x5C]
	mov byte ptr [ebp-4],8
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp-0x18],esi
	test eax,eax
	je Block25

 Block23:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x38]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x38]
	mov esi,ecx
	mov dword ptr [ebp-0x18],esi
	test eax,eax
	jge Block25

 Block24:
	cmp eax,0x80004002
	jne Block42

 Block25:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],0xB
	jne Block28

 Block26:
	mov eax,dword ptr [ebp-0x54]
	xor edx,edx
	mov word ptr [ebp-0x5C],dx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea eax,[ebp-0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block29:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x30],esp
	push 0xBCF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0xC
	test esi,esi
	je Block41

 Block30:
	lea edx,[ebp-0x7C]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x7C],8
	mov ebx,eax
	mov byte ptr [ebp-4],0xB
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [ebp-0x7C],ax
	mov eax,dword ptr [ebp-0x74]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[ebp-0x7C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	test ebx,ebx
	je Block36

 Block35:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],7
	call eax
	jmp Block37

 Block36:
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [ebp-0x30],esp
	push esi
	call edx
	mov eax,dword ptr [ebp-0x24]
	mov ecx,dword ptr [ebp-0x28]
	push eax
	call CMapLoadable::MakeObj
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],7
	call edx

 Block37:
	mov eax,dword ptr [ebp-0x20]
	inc eax
	cmp eax,dword ptr [ebp-0x1C]
	mov dword ptr [ebp-0x20],eax
	jl Block22

 Block38:
	mov ebx,dword ptr [ebp-0x24]
	mov esi,dword ptr [ebp-0x14]

 Block39:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],3
	call ecx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call eax
	inc ebx
	cmp ebx,8
	mov dword ptr [ebp-0x24],ebx
	jl Block1

 Block40:
	lea esp,[ebp-0x8C]
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

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	push eax
	call _com_issue_error
}
}
// CMapLoadable::OnClearBackEffect
__SUB_CLASS_THIS(0021F230, __thiscall, 19694,  CMapLoadable, void, CInPacket&) {
__asm {

 Block0:
	call CMapLoadable::ReloadBack
	ret 4
}
}
// CMapLoadable::LoadMap
_SUB_EXCEPTION_HANDLER(223980)
__SUB_CLASS_THIS0(00223980, __thiscall, 19649,  CMapLoadable, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_223980
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x68],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [ebp+0x58],edi
	xor ebx,ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x40],esp
	push 0x5FB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi+0x30]
	mov dword ptr [ebp-4],ebx
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp]
	push edx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x48]
	mov dword ptr [ebp+0x48],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	cmp word ptr [ebp],8
	mov esi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [ebp-4],3
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	cmp eax,ebx
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp]
	push ecx
	call esi

 Block9:
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x40],esp
	push 0x5FC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi+0x30]
	mov byte ptr [ebp-4],4
	cmp ecx,ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[ebp-0x2C]
	push eax
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x44]
	mov dword ptr [ebp+0x44],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block14

 Block12:
	cmp eax,0x80004002
	je Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],7
	jne Block17

 Block15:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	cmp eax,ebx
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[ebp-0x2C]
	push edx
	call esi

 Block18:
	mov esi,dword ptr [edi+0x2C]
	mov dword ptr [ebp+0x40],esi
	cmp esi,ebx
	je Block20

 Block19:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block20:
	push ecx
	mov eax,esp
	mov byte ptr [ebp-4],8
	mov dword ptr [ebp+0x54],esp
	mov dword ptr [eax],esi
	cmp esi,ebx
	je Block22

 Block21:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block22:
	mov eax,dword ptr [ebp+0x44]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x54],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block24:
	mov eax,dword ptr [ebp+0x48]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x54],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block26:
	mov ecx,dword ptr [edi+0x3C]
	call CWvsPhysicalSpace2D::Load
	mov ecx,edi
	call CMapLoadable::RestoreTile
	mov ecx,edi
	call CMapLoadable::RestoreObj
	mov ecx,edi
	call CMapLoadable::RestoreBack
	mov ecx,edi
	call CMapLoadable::RestoreWeather
	mov ecx,edi
	call CMapLoadable::RestoreViewRange
	mov ecx,edi
	call CMapLoadable::RestoreLetterBox
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x54],esp
	push 0x77D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi+0x30]
	mov byte ptr [ebp-4],9
	cmp ecx,ebx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea edx,[ebp-0x1C]
	push edx
	mov byte ptr [ebp-4],8
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xA
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x4C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block31

 Block29:
	cmp eax,0x80004002
	je Block31

 Block30:
	push eax
	call _com_issue_error

 Block31:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0xC
	jne Block34

 Block32:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,ebx
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	cmp dword ptr [ebp+0x4C],ebx
	je Block71

 Block36:
	mov dword ptr [ebp+0x64],ebx

 Block37:
	mov eax,0x20
	call __chkstk
	mov edx,dword ptr [ebp+0x64]
	mov eax,esp
	push 0xA
	push eax
	push edx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x4C]
	lea eax,[ebp+0x30]
	mov byte ptr [ebp-4],0xD
	push eax
	mov byte ptr [ebp-4],0xC
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp+0x54]
	push ecx
	mov byte ptr [ebp-4],0xE
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0xF
	mov dword ptr [ebp+0x5C],ebx
	mov dword ptr [ebp+0x60],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block39

 Block38:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block39:
	lea ecx,[ebp+0x5C]
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	cmp eax,ebx
	jge Block41

 Block40:
	cmp eax,0x80004002
	jne Block4

 Block41:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x11
	cmp eax,ebx
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block43:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],0x12
	jne Block46

 Block44:
	xor eax,eax
	mov word ptr [ebp+0x30],ax
	mov eax,dword ptr [ebp+0x38]
	cmp eax,ebx
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea ecx,[ebp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	mov esi,dword ptr [ebp+0x5C]
	cmp esi,ebx
	sete al
	test al,al
	jne Block69

 Block48:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x618
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x13
	cmp esi,ebx
	je Block1

 Block49:
	lea eax,[ebp+0x10]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x12
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x14
	jne Block51

 Block50:
	mov eax,dword ptr [eax+8]
	jmp Block52

 Block51:
	mov eax,offset _S___3

 Block52:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x60]
	mov dword ptr [ebp+0x60],ebx
	call ZXString16::Assign
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],0x16
	jne Block55

 Block53:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	cmp eax,ebx
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x50],esp
	push 0x965
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x20]
	push ecx
	mov byte ptr [ebp-4],0x17
	mov ecx,esi
	mov byte ptr [ebp-4],0x16
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x18
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x20],8
	mov edi,eax
	mov byte ptr [ebp-4],0x16
	jne Block59

 Block57:
	mov eax,dword ptr [ebp+0x28]
	xor edx,edx
	mov word ptr [ebp+0x20],dx
	cmp eax,ebx
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea eax,[ebp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block60:
	push offset _S_N__1
	lea ecx,[ebp+0x60]
	call ZXString16::Compare
	test eax,eax
	jne Block64

 Block61:
	push edi
	call CNpcTemplate::GetNpcTemplate
	mov eax,dword ptr [ebp+0x60]
	add esp,4
	mov byte ptr [ebp-4],0x12
	cmp eax,ebx
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block63:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],0xC
	call edx
	inc dword ptr [ebp+0x64]
	mov edi,dword ptr [ebp+0x58]
	jmp Block37

 Block64:
	push offset _S_M__1
	lea ecx,[ebp+0x60]
	call ZXString16::Compare
	test eax,eax
	jne Block66

 Block65:
	push edi
	call CMobTemplate::GetMobTemplate
	add esp,4

 Block66:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x12
	cmp eax,ebx
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block68:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0xC
	call ecx
	inc dword ptr [ebp+0x64]
	mov edi,dword ptr [ebp+0x58]
	jmp Block37

 Block69:
	mov byte ptr [ebp-4],0xC
	cmp esi,ebx
	je Block71

 Block70:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block71:
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push 0xBCF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi+0x30]
	mov byte ptr [ebp-4],0x19
	cmp ecx,ebx
	jne Block73

 Block72:
	push 0x80004003
	call _com_issue_error

 Block73:
	lea edx,[ebp+0x20]
	push edx
	mov byte ptr [ebp-4],0xC
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1A
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x64],esi
	cmp eax,ebx
	je Block77

 Block74:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x58]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x58]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [ebp+0x64],esi
	jge Block77

 Block75:
	cmp eax,0x80004002
	je Block77

 Block76:
	push eax
	call _com_issue_error

 Block77:
	cmp word ptr [ebp+0x20],8
	mov byte ptr [ebp-4],0x1C
	jne Block80

 Block78:
	mov eax,dword ptr [ebp+0x28]
	xor edx,edx
	mov word ptr [ebp+0x20],dx
	cmp eax,ebx
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea eax,[ebp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block81:
	cmp esi,ebx
	je Block102

 Block82:
	xor ebx,ebx
	lea ebx,[ebx]

 Block83:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x50],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov edi,dword ptr [ebp+0x64]
	lea ecx,[ebp+0x10]
	push ecx
	mov byte ptr [ebp-4],0x1D
	mov ecx,edi
	mov byte ptr [ebp-4],0x1C
	call IWzProperty::Getitem
	push eax
	lea edx,[ebp+0x58]
	push edx
	mov byte ptr [ebp-4],0x1E
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x1F
	mov dword ptr [ebp+0x5C],0
	mov dword ptr [ebp+0x50],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block85

 Block84:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block85:
	lea ecx,[ebp+0x5C]
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	test eax,eax
	jge Block87

 Block86:
	cmp eax,0x80004002
	jne Block4

 Block87:
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x21
	test eax,eax
	je Block89

 Block88:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block89:
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],0x22
	jne Block92

 Block90:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea ecx,[ebp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	mov esi,dword ptr [ebp+0x5C]
	test esi,esi
	sete al
	test al,al
	jne Block100

 Block94:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x50],esp
	push 0x965
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x23
	test esi,esi
	je Block1

 Block95:
	lea eax,[ebp+0x30]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x22
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x24
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x30],8
	mov edi,eax
	mov byte ptr [ebp-4],0x22
	jne Block98

 Block96:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	test eax,eax
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block99:
	push edi
	call CReactorTemplate::GetReactorTemplate
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	add esp,4
	push esi
	mov byte ptr [ebp-4],0x1C
	call ecx
	inc ebx
	jmp Block83

 Block100:
	mov byte ptr [ebp-4],0x1C
	test esi,esi
	je Block103

 Block101:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax
	jmp Block103

 Block102:
	mov edi,dword ptr [ebp+0x64]

 Block103:
	mov byte ptr [ebp-4],0xC
	test edi,edi
	je Block105

 Block104:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block105:
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],8
	test eax,eax
	je Block107

 Block106:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block107:
	mov eax,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block109

 Block108:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block109:
	mov eax,dword ptr [ebp+0x44]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block111

 Block110:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block111:
	mov eax,dword ptr [ebp+0x48]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block113

 Block112:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block113:
	lea esp,[ebp-0x3C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x68]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x6C
	mov esp,ebp
	pop ebp
	ret
}
}
// CMapLoadable::ReloadBack
_SUB_EXCEPTION_HANDLER(21F0C0)
__SUB_CLASS_THIS0(0021F0C0, __thiscall, 19649,  CMapLoadable, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_21F0C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	lea ecx,[ebx+0xE8]
	call ZMap<long, ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>, long>::RemoveAll
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[esp+0xC]
	push eax
	call IWzGr2D::Getcenter
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x1C],0
	test esi,esi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov edx,dword ptr [_D_VTEMPTY]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [_D_VTEMPTY+4]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [_D_VTEMPTY+8]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [_D_VTEMPTY+12]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea eax,[esp+0x10]
	push eax
	call IWzGr2D::Getcenter
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x1C],1
	test esi,esi
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x40]
	push 0
	push 0
	push esi
	call edx
	test eax,eax
	jge Block14

 Block13:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov ecx,ebx
	call CMapLoadable::RestoreBack
	push ecx
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,esp
	mov dword ptr [esp+0x10],esp
	push eax
	call CUser::GetVecCtrl_0
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::SetCenterOrigin
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x14
	ret
}
}
// CMapLoadable::TransientLayer_NewYear
_SUB_EXCEPTION_HANDLER(21D930)
__SUB_CLASS_THIS(0021D930, __thiscall, 19689,  CMapLoadable, void, NakedParam<ZXString16>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_21D930
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0x34],ebx
	call CMapLoadable::WeatherLayer_RemoveAll
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x24],0x320
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x28],0x258
	mov dword ptr [esp+0x10],ebx
	lea eax,[esp+0xC]
	push 0x1A1C
	push eax
	mov byte ptr [esp+0x3C],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x3C]
	mov eax,dword ptr [eax]
	push ebx
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x44],2
	call ZXString16::Format
	mov eax,dword ptr [esp+0x1C]
	add esp,0x10
	mov byte ptr [esp+0x34],1
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov dword ptr [esp+0xC],ebx
	lea eax,[esp+0x14]
	push 0x125C
	push eax
	mov byte ptr [esp+0x3C],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x3C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0x40],4
	call ZXString16::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x34],3
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	push 0x7530
	push 0x64
	push 3
	push 0x7D0
	lea eax,[esp+0x2C]
	push eax
	push ecx
	mov ecx,esp
	lea edx,[esp+0x24]
	mov dword ptr [esp+0x30],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString16::op_assign
	mov esi,dword ptr [esp+0x28]
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push esi
	call CAnimationDisplayer::RegisterNewYearAnimation
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x34],1
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	mov byte ptr [esp+0x34],bl
	cmp esi,ebx
	je Block8

 Block7:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x2C
	ret 4
}
}
// CMapLoadable::PrepareNextBGM
__SUB_CLASS_THIS0(00210040, __thiscall, 19649,  CMapLoadable, void) {
__asm {

 Block0:
	push esi
	push 0x5DC
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0
	call CSoundMan::SetBGMVolume
	call timeGetTime
	add eax,0x9C4
	mov dword ptr [esi+0x1C],eax
	pop esi
	ret
}
}
// CMapLoadable::OnEventChangeScreenResolution
__SUB_CLASS_THIS0(0021F550, __thiscall, 19649,  CMapLoadable, void) {
__asm {

 Block0:
	push edi
	mov edi,ecx
	cmp dword ptr [edi+0x30],0
	je Block6

 Block1:
	mov eax,dword ptr [_D_G_GR]
	test eax,eax
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x20]
	push esi
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block5

 Block4:
	push offset __GUID_e576ea33_d465_4f08_aab1_e78df73ee6d9
	push esi
	push eax
	call _com_issue_errorex

 Block5:
	mov ecx,edi
	call CMapLoadable::RestoreViewRange
	mov ecx,edi
	call CMapLoadable::ReloadBack
	lea ecx,[edi+0x100]
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	pop esi
	mov ecx,edi
	pop edi
	jmp  CMapLoadable::RestoreLetterBox

 Block6:
	pop edi
	ret
}
}
// CMapLoadable::FootHoldMove
_SUB_EXCEPTION_HANDLER(220020)
__SUB_CLASS_THIS(00220020, __thiscall, 19665,  CMapLoadable, void, const char*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_220020
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
	xor ebx,ebx
	push ebx
	lea eax,[esp+0x4C]
	push eax
	add ecx,0xB8
	call ZMap<char const *, CMapLoadable::CHANGING_OBJECT, ZXString<char>>::GetAt
	mov ecx,eax
	mov dword ptr [esp+0x20],ecx
	cmp ecx,ebx
	je Block26

 Block1:
	mov dword ptr [esp+0x14],ebx
	xor ebp,ebp
	mov edi,edi

 Block2:
	mov eax,dword ptr [ecx+8]
	cmp eax,ebx
	je Block26

 Block3:
	mov edx,dword ptr [esp+0x14]
	cmp edx,dword ptr [eax-4]
	jae Block26

 Block4:
	mov edi,eax
	add edi,ebp
	mov dword ptr [esp+0x48],ebx
	lea eax,[esp+0x18]
	push 0x3D2
	push eax
	mov dword ptr [esp+0x48],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[esp+0x4C]
	push ecx
	push eax
	mov byte ptr [esp+0x4C],1
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x40],bl
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esp+0x48]
	cmp eax,ebx
	je Block25

 Block7:
	mov ecx,dword ptr [esp+0x4C]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x24]
	push ecx
	push eax
	call edx
	mov eax,dword ptr [esp+0x48]
	cmp eax,ebx
	je Block25

 Block8:
	mov edx,dword ptr [esp+0x50]
	mov ecx,dword ptr [eax]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x2C]
	call eax
	mov eax,dword ptr [esp+0x48]
	mov ecx,0xD
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],eax
	cmp eax,ebx
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block10:
	mov ecx,dword ptr [edi+8]
	mov byte ptr [esp+0x40],2
	cmp ecx,ebx
	je Block25

 Block11:
	lea edx,[esp+0x1C]
	push edx
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x40],3
	cmp esi,ebx
	je Block25

 Block12:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,ebx
	jge Block14

 Block13:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x40],2
	cmp eax,ebx
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x40],bl
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebx
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov edx,dword ptr [edi]
	mov edi,dword ptr [edi+8]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [eax],edi
	cmp edi,ebx
	je Block22

 Block21:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block22:
	call CMapLoadable::AnimateObjLayer
	mov eax,dword ptr [esp+0x50]
	add esp,8
	mov dword ptr [esp+0x40],0xFFFFFFFF
	cmp eax,ebx
	je Block24

 Block23:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block24:
	inc dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x20]
	add ebp,0x10
	jmp Block2

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 0xC
}
}
// CMapLoadable::PlayBGMFromMapInfo
_SUB_EXCEPTION_HANDLER(21A330)
__SUB_CLASS_THIS0(0021A330, __thiscall, 19649,  CMapLoadable, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_21A330
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov eax,dword ptr [eax+0x88]
	xor edi,edi
	cmp eax,edi
	jne Block2

 Block1:
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push edi
	push 0x3E8
	push edi
	push edi
	push edi
	call CSoundMan::PlayBGM
	mov dword ptr [esi+0x140],1
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x28
	ret

 Block2:
	mov ebp,dword ptr [esi+0x2C]
	mov dword ptr [esi+0x140],edi
	mov dword ptr [esp+0x14],ebp
	cmp ebp,edi
	je Block4

 Block3:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+4]
	push ebp
	call edx

 Block4:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x62A
	push eax
	mov dword ptr [esp+0x40],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x38],1
	cmp ebp,edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x3C],0
	call IWzProperty::Getitem
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],2
	jne Block14

 Block7:
	lea edx,[esp+0x10]
	push 0x62B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edx,dword ptr [esp+0x24]
	mov eax,edx
	mov byte ptr [esp+0x34],3
	lea edi,[eax+2]
	lea ebx,[ebx]

 Block8:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block8

 Block9:
	sub eax,edi
	sar eax,1
	push eax
	push edx
	lea ecx,[esp+0x18]
	call ZXString16::_Cat
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0
	push 0
	push 0x258
	push 1
	push eax
	call CSoundMan::PlayBGM
	push offset _S___3
	lea ecx,[esi+0x28]
	call ZXString16::AssignCStr
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x34],2
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block11:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],0
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call ecx
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x28
	ret
}
}
// CMapLoadable::SetMapObjectVisible
_SUB_EXCEPTION_HANDLER(214700)
__SUB_CLASS_THIS(00214700, __thiscall, 19695,  CMapLoadable, void, const ZXString<char>&, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_214700
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
	mov dword ptr [esp+0x14],0
	mov eax,dword ptr [esp+0x28]
	mov edx,dword ptr [eax]
	lea eax,[esp+0x10]
	mov dword ptr [esp+0x28],edx
	push eax
	lea edx,[esp+0x2C]
	push edx
	add ecx,0xD0
	mov dword ptr [esp+0x28],0
	call ZMap<char const *, ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>, ZXString<char>>::GetAt
	mov esi,dword ptr [esp+0x14]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	test eax,eax
	je Block4

 Block1:
	mov eax,dword ptr [esp+0x2C]
	push eax
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [eax+4],esi
	test esi,esi
	je Block3

 Block2:
	lea ecx,[esi-0xC]
	push ecx
	call ebx

 Block3:
	call CMapLoadable::SetLayerListVisible
	add esp,0xC

 Block4:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test esi,esi
	je Block8

 Block5:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	push edi
	call ebx
	test esi,esi
	je Block8

 Block7:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block8:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 8
}
}
// CMapLoadable::RestoreBack
_SUB_EXCEPTION_HANDLER(21EE00)
__SUB_CLASS_THIS0(0021EE00, __thiscall, 19649,  CMapLoadable, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_21EE00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
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
	mov dword ptr [ebp-0x28],esi
	xor edi,edi
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x1C],esp
	push 0x60F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0x30]
	mov dword ptr [ebp-4],edi
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x3C]
	push edx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x18]
	mov dword ptr [ebp-0x18],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],3
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	cmp eax,edi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov esi,dword ptr [ebp-0x18]
	cmp esi,edi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp-0x20]
	push eax
	push esi
	mov dword ptr [ebp-0x20],edi
	call ecx
	cmp eax,edi
	jge Block13

 Block12:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block13:
	cmp dword ptr [ebp-0x20],edi
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov al,byte ptr [edx+0x41C4]
	mov byte ptr [ebp-0x11],al
	jle Block30

 Block14:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp-0x1C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x4C]
	push ecx
	mov byte ptr [ebp-4],4
	mov ecx,esi
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp-0x1C],esi
	test eax,eax
	je Block17

 Block15:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x2C]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x2C]
	mov esi,ecx
	mov dword ptr [ebp-0x1C],esi
	test eax,eax
	jge Block17

 Block16:
	cmp eax,0x80004002
	jne Block4

 Block17:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],7
	jne Block20

 Block18:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp-0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x24],esp
	push 0x193F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],8
	test esi,esi
	je Block1

 Block22:
	lea edx,[ebp-0x5C]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],9
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x5C],8
	mov ebx,eax
	mov byte ptr [ebp-4],7
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea ecx,[ebp-0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	cmp ebx,1
	jne Block31

 Block27:
	cmp byte ptr [ebp-0x11],0
	jne Block33

 Block28:
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [ebp-0x24],esp
	push esi
	call edx
	mov ecx,dword ptr [ebp-0x28]
	push edi
	call CMapLoadable::MakeBack
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],3
	call ecx

 Block29:
	mov esi,dword ptr [ebp-0x18]
	inc edi
	cmp edi,dword ptr [ebp-0x20]
	jl Block14

 Block30:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call eax
	lea esp,[ebp-0x6C]
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

 Block31:
	cmp ebx,2
	jne Block28

 Block32:
	cmp byte ptr [ebp-0x11],0
	jne Block28

 Block33:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],3
	call eax
	jmp Block29
}
}
// CMapLoadable::ProcessReflection
_SUB_EXCEPTION_HANDLER(213FE0)
__SUB_CLASS_THIS0(00213FE0, __thiscall, 19649,  CMapLoadable, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_213FE0
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
	mov dword ptr [esp+0x24],ecx
	mov ecx,dword ptr [ecx+0x9C]
	xor esi,esi
	mov dword ptr [esp+0x28],ecx
	cmp ecx,esi
	je Block90

 Block1:
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov ebx,dword ptr [ZImports::_VariantInit]
	jmp Block3

 Block2:
	xor esi,esi

 Block3:
	lea eax,[esp+0x28]
	push eax
	call ZList<ZRef<CMapLoadable::REFLECTION_INFO>>::GetNext
	mov ebp,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x90],ebp
	cmp ebp,esi
	je Block5

 Block4:
	lea ecx,[ebp-0xC]
	push ecx
	call edi

 Block5:
	mov edx,3
	mov dword ptr [esp+0xDC],esi
	mov word ptr [esp+0x7C],dx
	mov dword ptr [esp+0x84],esi
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0xDC],1
	cmp ecx,esi
	je Block91

 Block6:
	lea eax,[esp+0x7C]
	push eax
	lea edx,[esp+0x1C]
	push edx
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x7C],8
	mov byte ptr [esp+0xDC],3
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x7C],ax
	mov eax,dword ptr [esp+0x84]
	cmp eax,esi
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x7C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov eax,dword ptr [esp+0x18]
	cmp eax,esi
	sete cl
	test cl,cl
	je Block16

 Block11:
	mov byte ptr [esp+0xDC],0
	cmp eax,esi
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block13:
	add ebp,0xFFFFFFF0
	lea esi,[ebp+4]
	push esi
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block89

 Block14:
	push esi
	call edi
	test ebp,ebp
	je Block89

 Block15:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax
	jmp Block89

 Block16:
	lea ecx,[esp+0x2C]
	push ecx
	mov dword ptr [esp+0x20],esi
	call ebx
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jl Block92

 Block17:
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0xE0],4
	call ebx
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jl Block92

 Block18:
	mov esi,dword ptr [ebp+4]
	xor ebx,ebx
	mov byte ptr [esp+0xDC],5
	cmp esi,ebx
	je Block91

 Block19:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x20]
	push eax
	push esi
	mov dword ptr [esp+0x28],ebx
	call ecx
	cmp eax,ebx
	jge Block21

 Block20:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block21:
	mov esi,dword ptr [ebp+4]
	mov edi,dword ptr [esp+0x20]
	cmp esi,ebx
	je Block91

 Block22:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],ebx
	call ecx
	cmp eax,ebx
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block24:
	mov esi,dword ptr [ebp+8]
	cmp esi,ebx
	je Block91

 Block25:
	mov ecx,dword ptr [esp+0x2C]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],ecx
	mov ecx,dword ptr [esp+0x4C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [edx+0x2C]
	push edi
	push eax
	push esi
	call ecx
	cmp eax,ebx
	jge Block27

 Block26:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	mov esi,8
	mov byte ptr [esp+0xDC],4
	cmp word ptr [esp+0x3C],si
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebx
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov byte ptr [esp+0xDC],3
	cmp word ptr [esp+0x2C],si
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebx
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov eax,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	mov eax,dword ptr [eax+0x30]
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block47

 Block36:
	lea ecx,[esp+0x14]
	push ecx
	call ZList<ZRef<USERREMOTE_ENTRY>>::GetNext
	mov eax,dword ptr [eax+4]
	mov esi,dword ptr [eax+0x10]
	add esp,4
	push 1
	lea edx,[esp+0xA8]
	lea edi,[esi+0x88]
	push edx
	mov ecx,edi
	call CAvatar::GetBodyRect
	mov ecx,edi
	call CAvatar::GetOneTimeAction
	cmp eax,0x65
	je Block46

 Block37:
	mov ecx,edi
	call CAvatar::GetOneTimeAction
	cmp eax,0x52
	je Block46

 Block38:
	mov ecx,edi
	call CAvatar::GetOneTimeAction
	cmp eax,0x72
	je Block46

 Block39:
	mov ecx,edi
	call CAvatar::GetOneTimeAction
	cmp eax,0x95
	je Block46

 Block40:
	mov ecx,edi
	call CAvatar::GetOneTimeAction
	cmp eax,0x97
	je Block46

 Block41:
	mov ecx,edi
	call CAvatar::GetOneTimeAction
	cmp eax,0xC1
	je Block46

 Block42:
	lea ebx,[ebp+0x10]
	push ebx
	lea eax,[esp+0xA8]
	push eax
	lea ecx,[esp+0xBC]
	push ecx
	call IntersectRect
	test eax,eax
	je Block46

 Block43:
	mov eax,dword ptr [ebp+8]
	neg esi
	sbb esi,esi
	and esi,edi
	push ebx
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block45

 Block44:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block45:
	mov ecx,dword ptr [esp+0x30]
	call CMapLoadable::RenderAvatar
	mov dword ptr [esp+0x1C],1

 Block46:
	cmp dword ptr [esp+0x14],0
	jne Block36

 Block47:
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	mov esi,dword ptr [ecx+8]
	push 1
	lea edx,[esp+0x98]
	lea edi,[esi+0x88]
	push edx
	mov ecx,edi
	call CAvatar::GetBodyRect
	mov ecx,edi
	call CAvatar::GetOneTimeAction
	cmp eax,0x65
	je Block57

 Block48:
	mov ecx,edi
	call CAvatar::GetOneTimeAction
	cmp eax,0x52
	je Block57

 Block49:
	mov ecx,edi
	call CAvatar::GetOneTimeAction
	cmp eax,0x72
	je Block57

 Block50:
	mov ecx,edi
	call CAvatar::GetOneTimeAction
	cmp eax,0x95
	je Block57

 Block51:
	mov ecx,edi
	call CAvatar::GetOneTimeAction
	cmp eax,0x97
	je Block57

 Block52:
	mov ecx,edi
	call CAvatar::GetOneTimeAction
	cmp eax,0xC1
	je Block57

 Block53:
	lea ebx,[ebp+0x10]
	push ebx
	lea eax,[esp+0x98]
	push eax
	lea ecx,[esp+0xCC]
	push ecx
	call IntersectRect
	test eax,eax
	je Block57

 Block54:
	mov eax,dword ptr [ebp+8]
	neg esi
	sbb esi,esi
	and esi,edi
	push ebx
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block56

 Block55:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block56:
	mov ecx,dword ptr [esp+0x30]
	call CMapLoadable::RenderAvatar
	mov dword ptr [esp+0x1C],1

 Block57:
	cmp dword ptr [ebp+0x24],0
	jne Block59

 Block58:
	cmp dword ptr [esp+0x1C],0
	je Block81

 Block59:
	mov ecx,3
	mov word ptr [esp+0x5C],cx
	or ecx,0xFFFFFFFF
	mov dword ptr [esp+0x64],ecx
	mov esi,dword ptr [esp+0x18]
	mov edx,dword ptr [ebp+4]
	mov byte ptr [esp+0xDC],6
	test esi,esi
	je Block91

 Block60:
	mov ebx,dword ptr [esp+0x5C]
	mov edi,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x70]
	push edx
	mov edx,dword ptr [edi+0x80]
	push 0
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x80]
	push 0
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block62

 Block61:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block62:
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0xDC],3
	jne Block65

 Block63:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	cmp dword ptr [esp+0x1C],0
	je Block82

 Block67:
	mov edx,3
	mov ecx,0xFFFFFFFE
	mov word ptr [esp+0x6C],dx
	mov dword ptr [esp+0x74],ecx
	mov esi,dword ptr [ebp+8]
	mov edx,dword ptr [ebp+0xC]
	mov byte ptr [esp+0xDC],7
	test esi,esi
	je Block91

 Block68:
	mov ebx,dword ptr [esp+0x6C]
	mov edi,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x80]
	push edx
	mov edx,dword ptr [edi+0x80]
	push 0
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x90]
	push 0
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block70

 Block69:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block70:
	cmp word ptr [esp+0x6C],8
	mov byte ptr [esp+0xDC],3
	jne Block73

 Block71:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block74:
	mov eax,dword ptr [ebp+0x20]
	mov edx,3
	mov ecx,eax
	mov word ptr [esp+0x4C],dx
	mov dword ptr [esp+0x54],ecx
	mov edx,dword ptr [ebp+8]
	mov ebx,dword ptr [esp+0x4C]
	mov esi,dword ptr [esp+0x18]
	mov edi,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x60]
	push edx
	mov edx,dword ptr [edi+0x80]
	push 0
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x70]
	push 0
	push esi
	mov byte ptr [esp+0xFC],8
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block76

 Block75:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block76:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0xDC],3
	jne Block79

 Block77:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov dword ptr [ebp+0x24],1
	jmp Block83

 Block79:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov dword ptr [ebp+0x24],1
	jmp Block83

 Block81:
	mov esi,dword ptr [esp+0x18]

 Block82:
	mov dword ptr [ebp+0x24],0

 Block83:
	mov byte ptr [esp+0xDC],0
	test esi,esi
	je Block85

 Block84:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block85:
	add ebp,0xFFFFFFF0
	lea esi,[ebp+4]
	push esi
	mov dword ptr [esp+0xE0],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block88

 Block86:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	test ebp,ebp
	je Block88

 Block87:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax

 Block88:
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov ebx,dword ptr [ZImports::_VariantInit]

 Block89:
	cmp dword ptr [esp+0x28],0
	mov dword ptr [esp+0x90],0
	jne Block2

 Block90:
	mov ecx,dword ptr [esp+0xD4]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xCC
	ret

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	push eax
	call _com_issue_error
}
}
// CMapLoadable::PlaySoundWithMuteBgm
_SUB_EXCEPTION_HANDLER(21F240)
__SUB_CLASS_THIS(0021F240, __thiscall, 19706,  CMapLoadable, void, const ZXString<char>&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_21F240
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
	mov dword ptr [ebp-0x20],ecx
	lea eax,[ebp-0x14]
	push 0x62B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+8]
	mov eax,dword ptr [ecx]
	xor edi,edi
	mov dword ptr [ebp-4],edi
	cmp eax,edi
	je Block2

 Block1:
	mov ecx,dword ptr [eax-4]
	jmp Block3

 Block2:
	xor ecx,ecx

 Block3:
	push ecx
	push eax
	lea ecx,[ebp-0x14]
	call ZXString<char>::_Cat
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x30]
	push edx
	call esi
	lea eax,[ebp-0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	lea ecx,[ebp-0x40]
	push ecx
	mov byte ptr [ebp-4],1
	call esi
	lea edx,[ebp-0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	mov eax,dword ptr [ebp-0x14]
	push edi
	push edi
	push 0xFFFFFFFF
	push eax
	push edi
	mov bl,2
	push edi
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [ebp-0x14]
	mov esi,esp
	push edi
	push edi
	lea ecx,[ebp-0x30]
	push ecx
	lea edx,[ebp-0x40]
	push edx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push edi
	push edi
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],3
	cmp dword ptr [_D_G_RM],edi
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea ecx,[ebp-0x50]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x1C]
	mov dword ptr [ebp-0x1C],edi
	call _x_com_ptr<IWzSound>::_QueryUnknown
	cmp eax,edi
	jge Block12

 Block10:
	cmp eax,0x80004002
	je Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x50],bx
	jne Block15

 Block13:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	cmp eax,edi
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea eax,[ebp-0x50]
	push eax
	call esi

 Block16:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x40],bx
	jne Block19

 Block17:
	mov eax,dword ptr [ebp-0x38]
	xor ecx,ecx
	mov word ptr [ebp-0x40],cx
	cmp eax,edi
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea edx,[ebp-0x40]
	push edx
	call esi

 Block20:
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x30],bx
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [ebp-0x30],ax
	mov eax,dword ptr [ebp-0x28]
	cmp eax,edi
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[ebp-0x30]
	push ecx
	call esi

 Block24:
	mov esi,dword ptr [ebp-0x1C]
	cmp esi,edi
	sete al
	test al,al
	je Block28

 Block25:
	mov byte ptr [ebp-4],0
	cmp esi,edi
	je Block27

 Block26:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block27:
	mov eax,dword ptr [ebp-0x14]
	cmp eax,edi
	jmp Block36

 Block28:
	cmp esi,edi
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x38]
	lea edx,[ebp-0x18]
	push edx
	push esi
	mov dword ptr [ebp-0x18],edi
	call eax
	cmp eax,edi
	jge Block32

 Block31:
	push offset __GUID_1c923939_1338_4f8b_92cf_38935cee1fef
	push esi
	push eax
	call _com_issue_errorex

 Block32:
	mov edi,dword ptr [ebp-0x18]
	call timeGetTime
	lea ecx,[eax+edi+0x1F4]
	mov edi,dword ptr [ebp-0x20]
	mov dword ptr [edi+0x138],ecx
	mov eax,dword ptr [TSingleton<CConfig>::ms_pInstance]
	cmp dword ptr [eax+0x74],0
	je Block34

 Block33:
	xor eax,eax
	jmp Block35

 Block34:
	mov ecx,dword ptr [eax+0x70]
	inc ecx
	imul ecx,0x64
	mov eax,0x66666667
	imul ecx
	sar edx,3
	mov eax,edx
	shr eax,0x1F
	add eax,edx

 Block35:
	push 0
	mov dword ptr [edi+0x13C],eax
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0
	call CSoundMan::StopSE
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0
	push 0
	call CSoundMan::SetBGMVolume
	mov edx,dword ptr [ebp-0x14]
	push 0
	push 0
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [ebp-0x14]
	mov edi,esp
	push 0x3FFFFFFF
	push edi
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0
	push 0x64
	push edi
	call CSoundMan::PlaySE
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp-0x14]
	test eax,eax

 Block36:
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
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
	ret 4
}
}
// CMapLoadable::OnSetBackEffect
_SUB_EXCEPTION_HANDLER(212850)
__SUB_CLASS_THIS(00212850, __thiscall, 19694,  CMapLoadable, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_212850
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
	mov esi,ecx
	xor eax,eax
	mov dword ptr [esp+0x74],eax
	mov dword ptr [esp+0x78],eax
	mov dword ptr [esp+0x7C],eax
	or eax,0xFFFFFFFF
	xor edi,edi
	mov dword ptr [esp+0x80],edi
	mov dword ptr [esp+0x84],eax
	mov dword ptr [esp+0x88],eax
	int 3// TODO: 	mov dword ptr [esp+0x74],offset Field::BackEffect::`vftable'
	mov dword ptr [esp+0x8C],eax
	mov dword ptr [esp+0x90],eax
	mov eax,dword ptr [esp+0xA4]
	push eax
	lea ecx,[esp+0x78]
	mov dword ptr [esp+0xA0],edi
	call Field::BackEffect::Decode
	mov eax,dword ptr [esp+0x84]
	sub eax,edi
	je Block25

 Block1:
	sub eax,1
	jne Block24

 Block2:
	mov dword ptr [esp+0x28],edi
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x90]
	push edx
	lea ecx,[esi+0xE8]
	mov byte ptr [esp+0xA4],6
	call ZMap<long, ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>, long>::GetAt
	mov esi,dword ptr [esp+0x28]
	cmp esi,edi
	je Block23

 Block3:
	call get_update_time
	mov ebp,eax
	mov eax,dword ptr [esi+0xC]
	add ebp,dword ptr [esp+0x90]
	mov dword ptr [esp+0x14],eax
	cmp eax,edi
	je Block23

 Block4:
	mov bl,9

 Block5:
	lea eax,[esp+0x14]
	push eax
	call ZList<_x_com_ptr<IWzGr2DLayer>>::GetNext
	mov esi,dword ptr [eax]
	add esp,4
	mov dword ptr [esp+0x20],esi
	test esi,esi
	je Block7

 Block6:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block7:
	mov byte ptr [esp+0x9C],7
	test esi,esi
	je Block47

 Block8:
	mov eax,dword ptr [esi]
	fldz
	mov edx,dword ptr [eax+0x78]
	fstp qword ptr [esp+0x2C]
	lea ecx,[esp+0x2C]
	push ecx
	push esi
	call edx
	test eax,eax
	jge Block10

 Block9:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	fld qword ptr [esp+0x2C]
	call __ftol2_sse
	mov edi,eax
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block48

 Block11:
	mov edx,3
	mov word ptr [esp+0x34],dx
	mov dword ptr [esp+0x3C],ebp
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x9C],0xA
	test ecx,ecx
	je Block47

 Block12:
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x38]
	push eax
	push edi
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x9C],bl
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov edi,8
	mov byte ptr [esp+0x9C],8
	cmp word ptr [esp+0x34],di
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov byte ptr [esp+0x9C],7
	cmp word ptr [esp+0x44],di
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0xA0],6
	call edx
	cmp dword ptr [esp+0x14],0
	jne Block5

 Block23:
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x9C],0
	call ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>::~ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>

 Block24:
	mov ecx,dword ptr [esp+0x94]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x8C
	ret 4

 Block25:
	mov dword ptr [esp+0x28],edi
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x90]
	push ecx
	lea ecx,[esi+0xE8]
	mov byte ptr [esp+0xA4],1
	call ZMap<long, ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>, long>::GetAt
	mov esi,dword ptr [esp+0x28]
	cmp esi,edi
	je Block23

 Block26:
	call get_update_time
	mov ebp,eax
	mov eax,dword ptr [esi+0xC]
	add ebp,dword ptr [esp+0x90]
	mov dword ptr [esp+0x14],eax
	cmp eax,edi
	je Block23

 Block27:
	mov bl,4

 Block28:
	lea edx,[esp+0x14]
	push edx
	call ZList<_x_com_ptr<IWzGr2DLayer>>::GetNext
	mov esi,dword ptr [eax]
	add esp,4
	mov dword ptr [esp+0x20],esi
	test esi,esi
	je Block30

 Block29:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block30:
	mov byte ptr [esp+0x9C],2
	test esi,esi
	je Block47

 Block31:
	mov edx,dword ptr [esi]
	fldz
	mov ecx,dword ptr [edx+0x78]
	fstp qword ptr [esp+0x2C]
	lea eax,[esp+0x2C]
	push eax
	push esi
	call ecx
	test eax,eax
	jge Block33

 Block32:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block33:
	fld qword ptr [esp+0x2C]
	call __ftol2_sse
	lea edx,[esp+0x64]
	push edx
	mov edi,eax
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x64]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block48

 Block34:
	mov ecx,3
	mov word ptr [esp+0x54],cx
	mov dword ptr [esp+0x5C],ebp
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xA0],bl
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x9C],5
	test ecx,ecx
	je Block47

 Block35:
	lea eax,[esp+0x64]
	push eax
	lea edx,[esp+0x58]
	push edx
	push edi
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x9C],bl
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	mov edi,8
	mov byte ptr [esp+0x9C],3
	cmp word ptr [esp+0x54],di
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov byte ptr [esp+0x9C],2
	cmp word ptr [esp+0x64],di
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea eax,[esp+0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0xA0],1
	call edx
	cmp dword ptr [esp+0x14],0
	jne Block28

 Block46:
	jmp Block23

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	push eax
	call _com_issue_error
}
}
// CMapLoadable::SetLayerListVisible
_SUB_EXCEPTION_HANDLER(212CA0)
__SUB(00212CA0, __cdecl, 19697,  void, NakedParam<ZRef<ZList<_x_com_ptr<IWzGr2DLayer> > >>, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_212CA0
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
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x1C],0
	test eax,eax
	je Block15

 Block1:
	mov ecx,dword ptr [eax+0xC]
	mov dword ptr [esp+0xC],ecx
	test ecx,ecx
	je Block11

 Block2:
	mov edi,dword ptr [esp+0x2C]
	jmp Block4

 Block4:
	lea eax,[esp+0xC]
	push eax
	call ZList<_x_com_ptr<IWzGr2DLayer>>::GetNext
	mov esi,dword ptr [eax]
	add esp,4
	mov dword ptr [esp+0x10],esi
	test esi,esi
	je Block6

 Block5:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block6:
	mov byte ptr [esp+0x1C],1
	test esi,esi
	je Block16

 Block7:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x11C]
	push edi
	push esi
	call ecx
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block9:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0x20],0
	call eax
	cmp dword ptr [esp+0xC],0
	jne Block4

 Block10:
	mov eax,dword ptr [esp+0x28]

 Block11:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block15

 Block12:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block15

 Block13:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block15

 Block14:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block15:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret

 Block16:
	push 0x80004003
	call _com_issue_error
}
}
// CMapLoadable::OBSTACLE::~OBSTACLE
_SUB_EXCEPTION_HANDLER(2135A0)
__SUB_CLASS_THIS0(002135A0, __thiscall, 19798,  CMapLoadable::OBSTACLE, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2135A0
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
	mov eax,dword ptr [esi+0x2C]
	mov dword ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0xC]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CMapLoadable::~CMapLoadable
_SUB_EXCEPTION_HANDLER(213170)
__SUB_CLASS_THIS0(00213170, __thiscall, 19649,  CMapLoadable, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_213170
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x10],esi
	int 3// TODO: 	mov dword ptr [esi],offset CMapLoadable::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CMapLoadable::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CMapLoadable::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CMapLoadable::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov eax,dword ptr [eax+0x18]
	cmp eax,6
	mov dword ptr [esp+0x1C],0xF
	jl Block5

 Block1:
	mov eax,dword ptr [_D_G_RM]
	test eax,eax
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x24]
	push 0
	push eax
	mov edi,eax
	call edx
	test eax,eax
	jge Block5

 Block4:
	push offset __GUID_57dfe40b_3e20_4dbc_97e8_805a50f381bf
	push edi
	push eax
	call _com_issue_errorex

 Block5:
	lea ecx,[esi+0x134]
	mov byte ptr [esp+0x1C],0xE
	call ZArray<CMapLoadable::OBSTACLE_INFO>::RemoveAll
	lea ecx,[esi+0x100]
	mov byte ptr [esp+0x1C],0xD
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<_x_com_ptr<IWzGr2DLayer>>::`vftable'
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	lea ecx,[esi+0xE8]
	mov byte ptr [esp+0x1C],0xC
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<long, ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>, long>::`vftable'
	call ZMap<long, ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>, long>::RemoveAll
	lea ecx,[esi+0xD0]
	mov byte ptr [esp+0x1C],0xB
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<char const *, ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>, ZXString<char>>::`vftable'
	call ZMap<char const *, ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>, ZXString<char>>::RemoveAll
	lea ecx,[esi+0xB8]
	mov byte ptr [esp+0x1C],0xA
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<char const *, CMapLoadable::CHANGING_OBJECT, ZXString<char>>::`vftable'
	call ZMap<char const *, CMapLoadable::CHANGING_OBJECT, ZXString<char>>::RemoveAll
	lea ecx,[esi+0xA4]
	mov byte ptr [esp+0x1C],9
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<CMapLoadable::VISIBLE_BY_QUEST>::`vftable'
	call ZList<CMapLoadable::VISIBLE_BY_QUEST>::RemoveAll
	lea ecx,[esi+0x90]
	mov byte ptr [esp+0x1C],8
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<CMapLoadable::REFLECTION_INFO>>::`vftable'
	call ZList<ZRef<CMapLoadable::REFLECTION_INFO>>::RemoveAll
	lea ecx,[esi+0x7C]
	mov byte ptr [esp+0x1C],7
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<CMapLoadable::OBSTACLE>>::`vftable'
	call ZList<ZRef<CMapLoadable::OBSTACLE>>::RemoveAll
	lea ecx,[esi+0x68]
	mov byte ptr [esp+0x1C],6
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<_x_com_ptr<IWzGr2DLayer>>::`vftable'
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	lea ecx,[esi+0x54]
	mov byte ptr [esp+0x1C],5
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<_x_com_ptr<IWzGr2DLayer>>::`vftable'
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	lea ecx,[esi+0x40]
	mov byte ptr [esp+0x1C],4
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<_x_com_ptr<IWzGr2DLayer>>::`vftable'
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	mov eax,dword ptr [esi+0x3C]
	mov byte ptr [esp+0x1C],3
	test eax,eax
	je Block10

 Block6:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block9

 Block8:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block9:
	mov dword ptr [esi+0x3C],0

 Block10:
	mov eax,dword ptr [esi+0x30]
	mov byte ptr [esp+0x1C],2
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esi+0x2C]
	mov byte ptr [esp+0x1C],1
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov eax,dword ptr [esi+0x28]
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block16:
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CStage::~CStage
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x10
	ret
}
}
// CMapLoadable::Update
_SUB_EXCEPTION_HANDLER(21DFC0)
__SUB_CLASS_THIS0(0021DFC0, __thiscall, 19649,  CMapLoadable, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_21DFC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov eax,dword ptr [_D_NCOUNTER__2]
	inc eax
	mov dword ptr [_D_NCOUNTER__2],eax
	and eax,0x80000003
	jns Block2

 Block1:
	dec eax
	or eax,0xFFFFFFFC
	inc eax

 Block2:
	jne Block17

 Block3:
	mov eax,dword ptr [ebp+0x74]
	xor ebx,ebx
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block18

 Block4:
	mov dword ptr [esp+0x20],eax
	lea eax,[esp+0x18]
	push eax
	call ZList<_x_com_ptr<IWzGr2DLayer>>::GetNext
	mov esi,dword ptr [eax]
	add esp,4
	mov dword ptr [esp+0x24],esi
	cmp esi,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block6:
	mov dword ptr [esp+0x30],ebx
	cmp esi,ebx
	je Block16

 Block7:
	lea eax,[esp+0x1C]
	push eax
	mov ecx,esi
	call IWzGr2DLayer::Getalpha
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x30],1
	cmp edi,ebx
	je Block16

 Block8:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],ebx
	call eax
	cmp eax,ebx
	jge Block10

 Block9:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block10:
	cmp dword ptr [esp+0x14],ebx
	mov eax,dword ptr [esp+0x1C]
	sete bl
	mov byte ptr [esp+0x30],0
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	test bl,bl
	je Block14

 Block13:
	mov eax,dword ptr [esp+0x20]
	push eax
	lea ecx,[ebp+0x68]
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAt

 Block14:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call edx
	mov eax,dword ptr [esp+0x18]
	xor ebx,ebx
	test eax,eax
	jne Block4

 Block15:
	jmp Block18

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	xor ebx,ebx

 Block18:
	call timeGetTime
	mov esi,eax
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [eax+0x3850],ebx
	jne Block22

 Block19:
	cmp dword ptr [ebp+0x18],ebx
	je Block22

 Block20:
	mov ecx,esi
	sub ecx,dword ptr [ebp+0x1C]
	test ecx,ecx
	jle Block22

 Block21:
	mov ecx,ebp
	call CMapLoadable::PlayNextMusic

 Block22:
	mov eax,dword ptr [ebp+0x13C]
	cmp eax,ebx
	je Block25

 Block23:
	cmp dword ptr [ebp+0x138],esi
	jge Block25

 Block24:
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0x1F4
	push eax
	call CSoundMan::SetBGMVolume
	mov dword ptr [ebp+0x138],ebx
	mov dword ptr [ebp+0x13C],ebx

 Block25:
	mov edx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	cmp dword ptr [edx+0x88],ebx
	je Block28

 Block26:
	cmp dword ptr [ebp+0x140],ebx
	je Block28

 Block27:
	mov dword ptr [ebp+0x140],ebx
	call timeGetTime
	add eax,0x3E8
	mov dword ptr [ebp+0x144],eax

 Block28:
	mov eax,dword ptr [ebp+0x144]
	cmp eax,ebx
	je Block31

 Block29:
	cmp eax,esi
	jge Block31

 Block30:
	mov ecx,ebp
	call CMapLoadable::RestoreBGM
	mov dword ptr [ebp+0x144],ebx

 Block31:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret
}
}
// CMapLoadable::SetObjectState
_SUB_EXCEPTION_HANDLER(2203B0)
__SUB_CLASS_THIS(002203B0, __thiscall, 19662,  CMapLoadable, int32_t, const char*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2203B0
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
	mov dword ptr [esp+0x18],ecx
	xor ebp,ebp
	push ebp
	lea eax,[esp+0x60]
	push eax
	add ecx,0xB8
	call ZMap<char const *, CMapLoadable::CHANGING_OBJECT, ZXString<char>>::GetAt
	mov esi,eax
	cmp esi,ebp
	jne Block2

 Block1:
	xor eax,eax
	jmp Block101

 Block2:
	mov ebx,dword ptr [esp+0x60]
	cmp ebx,0xFFFFFFFF
	je Block20

 Block3:
	mov eax,dword ptr [esi+8]
	cmp eax,ebp
	je Block1

 Block4:
	cmp dword ptr [eax-4],ebx
	jbe Block1

 Block5:
	mov eax,dword ptr [esi]
	shl eax,4
	add eax,dword ptr [esi+8]
	mov eax,dword ptr [eax+8]
	cmp eax,ebp
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov ecx,eax
	call IWzGr2DLayer::GetanimationState
	test eax,eax
	je Block11

 Block8:
	mov ecx,3
	or edi,0xFFFFFFFF
	mov word ptr [esp+0x3C],cx
	mov dword ptr [esp+0x44],edi
	push offset _D_VTMISSING
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x58],ebp
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [esi]
	shl eax,4
	add eax,dword ptr [esi+8]
	mov byte ptr [esp+0x54],1
	mov eax,dword ptr [eax+8]
	cmp eax,ebp
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea edx,[esp+0x3C]
	push edx
	lea ecx,[esp+0x30]
	push ecx
	push ebp
	mov ecx,eax
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x2C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x54],edi
	call Ztl_variant_t::~Ztl_variant_t

 Block11:
	mov eax,dword ptr [esi]
	shl eax,4
	add eax,dword ptr [esi+8]
	mov eax,dword ptr [eax+8]
	cmp eax,ebp
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea edx,[esp+0x5C]
	push edx
	mov ecx,eax
	call IWzGr2DLayer::Getalpha
	mov edi,dword ptr [eax]
	mov dword ptr [esp+0x54],2
	cmp edi,ebp
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0x40]
	push ebp
	push ebp
	push edi
	call ecx
	cmp eax,ebp
	jge Block17

 Block16:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block17:
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp eax,ebp
	je Block19

 Block18:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block19:
	mov dword ptr [esi],ebx

 Block20:
	mov edi,dword ptr [esi]
	shl edi,4
	add edi,dword ptr [esi+8]
	mov ecx,dword ptr [edi+8]
	mov dword ptr [esp+0x14],edi
	cmp ecx,ebp
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea edx,[esp+0x5C]
	push edx
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x54],3
	cmp esi,ebp
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x40]
	push ebp
	push 0xFF
	push esi
	call ecx
	cmp eax,ebp
	jge Block26

 Block25:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block26:
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp eax,ebp
	je Block28

 Block27:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block28:
	mov eax,dword ptr [edi+4]
	cmp eax,ebp
	je Block43

 Block29:
	mov eax,dword ptr [eax]
	cmp eax,ebp
	je Block43

 Block30:
	mov eax,dword ptr [eax-4]
	shr eax,1
	cmp eax,ebp
	je Block43

 Block31:
	mov esi,dword ptr [edi+8]
	cmp esi,ebp
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x28]
	lea edx,[esp+0x5C]
	push edx
	push esi
	mov dword ptr [esp+0x64],ebp
	call eax
	cmp eax,ebp
	jge Block35

 Block34:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block35:
	mov ebx,dword ptr [esp+0x14]
	mov esi,dword ptr [ebx+8]
	mov edi,dword ptr [esp+0x5C]
	cmp esi,ebp
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x60]
	push edx
	push esi
	mov dword ptr [esp+0x68],ebp
	call eax
	cmp eax,ebp
	jge Block39

 Block38:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block39:
	mov eax,dword ptr [ebx+4]
	cmp eax,ebp
	je Block41

 Block40:
	mov esi,dword ptr [eax]
	jmp Block42

 Block41:
	xor esi,esi

 Block42:
	mov ecx,dword ptr [esp+0x60]
	push edi
	push ecx
	call get_sound_volume_by_pos
	push eax
	push esi
	call play_field_sound
	add esp,0x10
	mov edi,ebx

 Block43:
	cmp dword ptr [edi+0xC],ebp
	je Block98

 Block44:
	mov ecx,dword ptr [edi+8]
	cmp ecx,ebp
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	lea edx,[esp+0x1C]
	push edx
	call IWzVector2D::Getorigin
	movzx ecx,word ptr [eax]
	mov dword ptr [esp+0x54],4
	cmp cx,9
	je Block53

 Block47:
	cmp cx,0xD
	je Block53

 Block48:
	mov edx,0x4009
	cmp cx,dx
	je Block51

 Block49:
	mov edx,0x400D
	cmp cx,dx
	je Block51

 Block50:
	xor eax,eax
	jmp Block54

 Block51:
	mov eax,dword ptr [eax+8]
	cmp eax,ebp
	je Block50

 Block52:
	mov eax,dword ptr [eax]
	jmp Block54

 Block53:
	mov eax,dword ptr [eax+8]

 Block54:
	push eax
	lea ecx,[esp+0x60]
	mov dword ptr [esp+0x60],ebp
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,ebp
	jge Block57

 Block55:
	cmp eax,0x80004002
	je Block57

 Block56:
	push eax
	call _com_issue_error

 Block57:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x54],7
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov esi,dword ptr [esp+0x5C]
	cmp esi,ebp
	je Block91

 Block62:
	lea edx,[esp+0x2C]
	push edx
	mov ecx,esi
	call IWzVector2D::Getorigin
	movzx ecx,word ptr [eax]
	cmp cx,9
	je Block69

 Block63:
	cmp cx,0xD
	je Block69

 Block64:
	mov edx,0x4009
	cmp cx,dx
	je Block67

 Block65:
	mov edx,0x400D
	cmp cx,dx
	je Block67

 Block66:
	xor eax,eax
	jmp Block70

 Block67:
	mov eax,dword ptr [eax+8]
	cmp eax,ebp
	je Block66

 Block68:
	mov eax,dword ptr [eax]
	jmp Block70

 Block69:
	mov eax,dword ptr [eax+8]

 Block70:
	cmp eax,ebp
	setne bl
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x54],7
	jne Block73

 Block71:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block74:
	test bl,bl
	je Block92

 Block75:
	cmp esi,ebp
	je Block6

 Block76:
	lea edx,[esp+0x3C]
	push edx
	mov ecx,esi
	call IWzVector2D::Getorigin
	movzx ecx,word ptr [eax]
	mov byte ptr [esp+0x54],0xA
	cmp cx,9
	je Block83

 Block77:
	cmp cx,0xD
	je Block83

 Block78:
	mov edx,0x4009
	cmp cx,dx
	je Block81

 Block79:
	mov edx,0x400D
	cmp cx,dx
	je Block81

 Block80:
	xor eax,eax
	jmp Block84

 Block81:
	mov eax,dword ptr [eax+8]
	cmp eax,ebp
	je Block80

 Block82:
	mov eax,dword ptr [eax]
	jmp Block84

 Block83:
	mov eax,dword ptr [eax+8]

 Block84:
	push eax
	lea ecx,[esp+0x60]
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,ebp
	jge Block86

 Block85:
	cmp eax,0x80004002
	jne Block56

 Block86:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x54],7
	jne Block89

 Block87:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	mov esi,dword ptr [esp+0x5C]
	cmp esi,ebp
	jne Block62

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x64],esp
	mov dword ptr [eax],esi
	cmp esi,ebp
	je Block94

 Block93:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block94:
	mov eax,dword ptr [edi+8]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x68],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block96

 Block95:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block96:
	mov ecx,dword ptr [esp+0x20]
	call CMapLoadable::MakeVectorAnimate
	mov dword ptr [esp+0x54],0xFFFFFFFF
	cmp esi,ebp
	je Block98

 Block97:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block98:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edi+8]
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x64],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block100

 Block99:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block100:
	call CMapLoadable::AnimateObjLayer
	add esp,8
	mov eax,1

 Block101:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret 8
}
}
// CMapLoadable::VISIBLE_BY_QUEST::~VISIBLE_BY_QUEST
_SUB_EXCEPTION_HANDLER(213110)
__SUB_CLASS_THIS0(00213110, __thiscall, 19828,  CMapLoadable::VISIBLE_BY_QUEST, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_213110
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
	lea ecx,[esi+4]
	mov dword ptr [esp+0x14],0
	call ZArray<ZPair<unsigned short, long>>::RemoveAll
	mov esi,dword ptr [esi]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block2

 Block1:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block2:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CMapLoadable::AddLetterBox
_SUB_EXCEPTION_HANDLER(21AEB0)
__SUB_CLASS_THIS(0021AEB0, __thiscall, 19693,  CMapLoadable, void, long, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_21AEB0
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
	mov dword ptr [esp+0x1C],ecx
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	mov dword ptr [esp+0x4C],edi
	call ebx
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
	mov byte ptr [esp+0x4C],1
	call ebx
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
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x48],2
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov ebx,dword ptr [esp+0x54]
	mov ebp,dword ptr [esp+0x50]
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push 0xC006153A
	push ebx
	push ebp
	push 0
	push 0
	lea edx,[esp+0x34]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov edi,eax
	push eax
	mov dword ptr [esp+0x18],edi
	call edx

 Block8:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov esi,8
	mov byte ptr [esp+0x48],1
	cmp word ptr [esp+0x20],si
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x30],si
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov ecx,3
	mov word ptr [esp+0x30],cx
	mov dword ptr [esp+0x38],0
	mov byte ptr [esp+0x48],cl
	test edi,edi
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x58]
	push eax
	mov ecx,edi
	call IWzGr2DLayer::Getcanvas
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x48],4
	test esi,esi
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFF000000
	push ebx
	push ebp
	push 0
	push 0
	push esi
	call edx
	test eax,eax
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block24:
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x48],3
	test eax,eax
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x48],0
	jne Block32

 Block27:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block29:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block30:
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block33

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x30]
	push ecx
	call ebp
	jmp Block30

 Block33:
	lea edx,[esp+0x50]
	push edx
	call IWzGr2D::Getcenter
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x48],5
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block35

 Block34:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block35:
	lea ecx,[esp+0x54]
	push ecx
	mov bl,6
	mov ecx,edi
	mov byte ptr [esp+0x4C],bl
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x48],7
	test esi,esi
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x64]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x3C]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block39

 Block38:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block39:
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x48],bl
	test eax,eax
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block41:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],5
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x20]
	push ecx
	call ebp

 Block45:
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block47

 Block46:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block47:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x20]
	push ecx
	call esi
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block49

 Block48:
	push eax
	call _com_issue_error

 Block49:
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0x4C],8
	call esi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	lea edx,[esp+0x54]
	mov bl,9
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x4C],bl
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x48],0xA
	test ecx,ecx
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [esp+0x60]
	lea edx,[esp+0x34]
	push edx
	mov edx,dword ptr [esp+0x60]
	add eax,0xFFFFFFAC
	push eax
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x48],bl
	test eax,eax
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block55:
	mov esi,8
	mov byte ptr [esp+0x48],8
	cmp word ptr [esp+0x30],si
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
	call ebp

 Block59:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x20],si
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
	call ebp

 Block63:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push edi
	call edx
	test eax,eax
	jge Block65

 Block64:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block65:
	mov ecx,dword ptr [esp+0x1C]
	add ecx,0x100
	call ZList<_x_com_ptr<IWzGr2DLayer>>::AddTail_
	mov esi,dword ptr [eax]
	cmp esi,edi
	je Block68

 Block66:
	mov dword ptr [eax],edi
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx
	test esi,esi
	je Block68

 Block67:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block68:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 0x10
}
}
// CMapLoadable::Init
_SUB_EXCEPTION_HANDLER(214DD0)
__SUB_CLASS_THIS(00214DD0, __thiscall, 19650,  CMapLoadable, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_214DD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	lea eax,[ebx+0x118]
	push eax
	lea ecx,[ebx+0x114]
	push ecx
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	add ecx,0x6C
	call CONFIG_SYSOPT::GetVideo_MagLevel
	mov eax,dword ptr [_D_G_GR]
	test eax,eax
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov edx,dword ptr [eax]
	mov esi,eax
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_e576ea33_d465_4f08_aab1_e78df73ee6d9
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0xC]
	push edx
	call IWzGr2D::Getcenter
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x1C],0
	test esi,esi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov edx,dword ptr [_D_VTEMPTY]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [_D_VTEMPTY+4]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [_D_VTEMPTY+8]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [_D_VTEMPTY+12]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block10

 Block9:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea eax,[esp+0x10]
	push eax
	call IWzGr2D::Getcenter
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x1C],1
	test esi,esi
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x40]
	push 0
	push 0
	push esi
	call edx
	test eax,eax
	jge Block18

 Block17:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block18:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	lea ecx,[ebx+0x38]
	call ZRef<CWvsPhysicalSpace2D>::_Alloc
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 1
	call CInputSystem::ShowCursor
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x14
	ret 4
}
}
// CMapLoadable::RestoreTile
_SUB_EXCEPTION_HANDLER(21E190)
__SUB_CLASS_THIS0(0021E190, __thiscall, 19649,  CMapLoadable, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_21E190
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x70],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x54],ecx
	xor edi,edi
	mov dword ptr [ebp+0x68],edi
	jmp Block3

 Block2:
	xor edi,edi

 Block3:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push edi
	push edi
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x68]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x54]
	mov ecx,dword ptr [ecx+0x30]
	mov dword ptr [ebp-4],edi
	cmp ecx,edi
	je Block93

 Block4:
	lea edx,[ebp-0x4C]
	push edx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],1
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x50],esi
	cmp eax,edi
	je Block7

 Block5:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x3C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x3C]
	cmp eax,edi
	mov esi,ecx
	mov dword ptr [ebp+0x50],esi
	jge Block7

 Block6:
	cmp eax,0x80004002
	jne Block94

 Block7:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],3
	jne Block10

 Block8:
	mov eax,dword ptr [ebp-0x44]
	xor edx,edx
	mov word ptr [ebp-0x4C],dx
	cmp eax,edi
	je Block11

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block11

 Block10:
	lea eax,[ebp-0x4C]
	push eax
	call ebx

 Block11:
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x6C],esp
	push 0x3D5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],4
	cmp esi,edi
	je Block93

 Block12:
	lea edx,[ebp-0x2C]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp+0x60],edi
	cmp eax,edi
	je Block15

 Block13:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x38]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x38]
	cmp eax,edi
	mov dword ptr [ebp+0x60],ecx
	jge Block15

 Block14:
	cmp eax,0x80004002
	jne Block94

 Block15:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],7
	jne Block18

 Block16:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	cmp eax,edi
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[ebp-0x2C]
	push eax
	call ebx

 Block19:
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x6C],esp
	push 0x5FD
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp]
	mov byte ptr [ebp-4],8
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x5C],esi
	cmp eax,edi
	je Block22

 Block20:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x34]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x34]
	cmp eax,edi
	mov esi,ecx
	mov dword ptr [ebp+0x5C],esi
	jge Block22

 Block21:
	cmp eax,0x80004002
	jne Block94

 Block22:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0xB
	jne Block25

 Block23:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	cmp eax,edi
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[ebp]
	push eax
	call ebx

 Block26:
	cmp esi,edi
	je Block93

 Block27:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[ebp+0x64]
	push edx
	push esi
	mov dword ptr [ebp+0x64],edi
	call eax
	cmp eax,edi
	jge Block29

 Block28:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block29:
	cmp dword ptr [ebp+0x64],edi
	jle Block89

 Block30:
	lea ecx,[ebp+0x58]
	push 0x5FE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x6C],esp
	push 0x5FF
	push edx
	mov byte ptr [ebp-4],0xC
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x60]
	xor ebx,ebx
	mov byte ptr [ebp-4],0xD
	cmp ecx,ebx
	je Block93

 Block31:
	lea eax,[ebp-0x1C]
	push eax
	mov byte ptr [ebp-4],0xC
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp+0x4C]
	push ecx
	mov byte ptr [ebp-4],0xE
	call DetachBSTR
	add esp,8
	mov eax,dword ptr [eax]
	mov byte ptr [ebp-4],0xF
	cmp eax,ebx
	je Block33

 Block32:
	mov edx,dword ptr [eax]
	jmp Block34

 Block33:
	xor edx,edx

 Block34:
	mov eax,edx
	lea esi,[eax+2]
	mov edi,edi

 Block35:
	mov cx,word ptr [eax]
	add eax,2
	cmp cx,bx
	jne Block35

 Block36:
	sub eax,esi
	sar eax,1
	push eax
	push edx
	lea ecx,[ebp+0x58]
	call ZXString16::_Cat
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0xE
	cmp eax,ebx
	je Block45

 Block37:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebx
	jne Block44

 Block38:
	cmp esi,ebx
	je Block44

 Block39:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block41

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block41:
	mov eax,dword ptr [esi+4]
	cmp eax,ebx
	je Block43

 Block42:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block43:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block44:
	mov dword ptr [ebp+0x4C],ebx

 Block45:
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0xC
	jne Block58

 Block46:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	cmp eax,ebx
	je Block48

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block48:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block49:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x10]
	push ecx
	call esi
	lea edx,[ebp+0x10]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block94

 Block50:
	lea eax,[ebp+0x20]
	push eax
	mov byte ptr [ebp-4],0x10
	call esi
	lea ecx,[ebp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block94

 Block51:
	push ebx
	push ebx
	lea edx,[ebp+0x10]
	push edx
	mov edx,dword ptr [ebp+0x58]
	lea eax,[ebp+0x20]
	push eax
	push ecx
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push edx
	mov byte ptr [ebp-4],0x11
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x12
	cmp dword ptr [_D_G_RM],ebx
	je Block93

 Block52:
	lea eax,[ebp-0x3C]
	mov byte ptr [ebp-4],0x11
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x13
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp+0x44],ebx
	test eax,eax
	je Block55

 Block53:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x48]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	test eax,eax
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x48]
	mov dword ptr [ebp+0x44],ebx
	test eax,eax
	jge Block55

 Block54:
	cmp eax,0x80004002
	jne Block94

 Block55:
	mov esi,8
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp-0x3C],si
	jne Block59

 Block56:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	test eax,eax
	je Block60

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block58:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x1C]
	push eax
	call edi
	jmp Block49

 Block59:
	lea edx,[ebp-0x3C]
	push edx
	call edi

 Block60:
	mov byte ptr [ebp-4],0x16
	cmp word ptr [ebp+0x20],si
	jne Block63

 Block61:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea ecx,[ebp+0x20]
	push ecx
	call edi

 Block64:
	mov byte ptr [ebp-4],0x17
	cmp word ptr [ebp+0x10],si
	jne Block67

 Block65:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea eax,[ebp+0x10]
	push eax
	call edi

 Block68:
	xor edi,edi
	cmp dword ptr [ebp+0x64],edi
	jle Block85

 Block69:
	jmp Block71

 Block71:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x5C]
	push ecx
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x18
	mov byte ptr [ebp-4],0x17
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x19
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x6C],esi
	test eax,eax
	je Block74

 Block72:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp+0x40]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x40]
	mov esi,ecx
	mov dword ptr [ebp+0x6C],esi
	test eax,eax
	jge Block74

 Block73:
	cmp eax,0x80004002
	jne Block94

 Block74:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],0x1B
	jne Block77

 Block75:
	mov eax,dword ptr [ebp-0x54]
	xor edx,edx
	mov word ptr [ebp-0x5C],dx
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea eax,[ebp-0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block78:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x30],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block80

 Block79:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block80:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x30],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block82

 Block81:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx

 Block82:
	mov edx,dword ptr [ebp+0x68]
	mov ecx,dword ptr [ebp+0x54]
	push edx
	call CMapLoadable::MakeTile
	mov byte ptr [ebp-4],0x17
	test esi,esi
	je Block84

 Block83:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block84:
	inc edi
	cmp edi,dword ptr [ebp+0x64]
	jl Block71

 Block85:
	mov byte ptr [ebp-4],0xC
	test ebx,ebx
	je Block87

 Block86:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block87:
	mov eax,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block89

 Block88:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block89:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],7
	call edx
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block91

 Block90:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block91:
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	mov eax,dword ptr [ebp+0x68]
	inc eax
	cmp eax,8
	mov dword ptr [ebp+0x68],eax
	jl Block2

 Block92:
	lea esp,[ebp-0x6C]
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
	ret

 Block93:
	push 0x80004003
	call _com_issue_error

 Block94:
	push eax
	call _com_issue_error
}
}
// CMapLoadable::TransientLayer_Weather
_SUB_EXCEPTION_HANDLER(2177C0)
__SUB_CLASS_THIS(002177C0, __thiscall, 19688,  CMapLoadable, void, const ZXString16&, long, long, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x64]
	sub esp,0x64
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2177C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2A8
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x60],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp-0x5C],ecx
	call CMapLoadable::WeatherLayer_RemoveAll
	xor edi,edi
	mov dword ptr [ebp+0x30],edi
	mov dword ptr [ebp-4],edi
	mov dword ptr [ebp+8],edi
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x274]
	push eax
	mov byte ptr [ebp-4],1
	call esi
	lea ecx,[ebp-0x274]
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
	lea edx,[ebp-0x254]
	push edx
	mov byte ptr [ebp-4],2
	call esi
	lea eax,[ebp-0x254]
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
	mov eax,dword ptr [ebp+0x6C]
	mov eax,dword ptr [eax]
	push edi
	push edi
	lea ecx,[ebp-0x274]
	push ecx
	lea edx,[ebp-0x254]
	push edx
	push ecx
	mov dword ptr [ebp+0x2C],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],3
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],4
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0x284]
	push ecx
	mov byte ptr [ebp-4],3
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x14]
	mov dword ptr [ebp+0x14],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
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
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x284],bx
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x27C]
	xor edx,edx
	mov word ptr [ebp-0x284],dx
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0x284]
	push eax
	call esi

 Block13:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x254],bx
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x24C]
	xor ecx,ecx
	mov word ptr [ebp-0x254],cx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp-0x254]
	push edx
	call esi

 Block17:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x274],bx
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp-0x274],ax
	mov eax,dword ptr [ebp-0x26C]
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp-0x274]
	push ecx
	call esi

 Block21:
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x2C],esp
	push 0x616
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0xA
	cmp ebx,edi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea eax,[ebp+0x34]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xB
	call get_int32
	add esp,8
	mov esi,eax
	neg esi
	sbb esi,esi
	neg esi
	cmp word ptr [ebp+0x34],8
	mov dword ptr [ebp-0x58],esi
	mov byte ptr [ebp-4],9
	jne Block26

 Block24:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	cmp eax,edi
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea edx,[ebp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	cmp esi,edi
	jne Block50

 Block28:
	xor esi,esi
	mov dword ptr [ebp+0x24],esi

 Block29:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[ebp+0x54]
	push ecx
	push ebx
	mov dword ptr [ebp+0x54],edi
	call edx
	cmp eax,edi
	jge Block31

 Block30:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push ebx
	push eax
	call _com_issue_errorex

 Block31:
	cmp esi,dword ptr [ebp+0x54]
	jae Block50

 Block32:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push edi
	push edi
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x2C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp+0x34]
	mov byte ptr [ebp-4],0xC
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xD
	call Ztl_variant_t::GetUnknown
	cmp eax,edi
	je Block40

 Block33:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x18]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x18]
	cmp dword ptr [ebp+0x30],0
	mov edi,ecx
	je Block35

 Block34:
	mov eax,dword ptr [ebp+0x30]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block35:
	mov dword ptr [ebp+0x30],edi
	test esi,esi
	jge Block37

 Block36:
	cmp esi,0x80004002
	jne Block49

 Block37:
	cmp word ptr [ebp+0x34],8
	mov byte ptr [ebp-4],9
	jne Block43

 Block38:
	xor eax,eax
	mov word ptr [ebp+0x34],ax
	mov eax,dword ptr [ebp+0x3C]
	test eax,eax
	je Block44

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block40:
	cmp dword ptr [ebp+0x30],edi
	je Block37

 Block41:
	mov eax,dword ptr [ebp+0x30]
	mov dword ptr [ebp+0x30],0
	test eax,eax
	je Block37

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block37

 Block43:
	lea ecx,[ebp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov edi,dword ptr [ebp+0x30]
	test edi,edi
	je Block48

 Block45:
	push 0xFFFFFFFF
	lea ecx,[ebp+8]
	call ZArray<_x_com_ptr<IWzCanvas>>::InsertBefore
	mov esi,dword ptr [eax]
	cmp esi,edi
	je Block48

 Block46:
	mov dword ptr [eax],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax
	test esi,esi
	je Block48

 Block47:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block48:
	inc dword ptr [ebp+0x24]
	mov esi,dword ptr [ebp+0x24]
	xor edi,edi
	jmp Block29

 Block49:
	push esi
	call _com_issue_error

 Block50:
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x2C],esp
	push 0x624
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x34]
	push ecx
	mov byte ptr [ebp-4],0xE
	mov ecx,ebx
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xF
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	mov esi,8
	mov dword ptr [ebp-0x224],eax
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x34],si
	jne Block53

 Block51:
	mov eax,dword ptr [ebp+0x3C]
	xor edx,edx
	mov word ptr [ebp+0x34],dx
	cmp eax,edi
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea eax,[ebp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block54:
	push 0x64
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x2C],esp
	push 0x3E5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x34]
	mov byte ptr [ebp-4],0x10
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x11
	call get_int32
	add esp,8
	mov dword ptr [ebp-0x218],eax
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x34],si
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [ebp+0x34],ax
	mov eax,dword ptr [ebp+0x3C]
	cmp eax,edi
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[ebp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x2C],esp
	push 0xF03
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x34]
	mov byte ptr [ebp-4],0x12
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x13
	call get_int32
	add esp,8
	mov esi,eax
	neg esi
	sbb esi,esi
	neg esi
	cmp word ptr [ebp+0x34],8
	mov byte ptr [ebp-4],9
	jne Block61

 Block59:
	mov eax,dword ptr [ebp+0x3C]
	xor ecx,ecx
	mov word ptr [ebp+0x34],cx
	cmp eax,edi
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea edx,[ebp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	cmp esi,edi
	je Block66

 Block63:
	push 0x64
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x2C],esp
	push 0x1AA6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x34]
	push ecx
	mov byte ptr [ebp-4],0x14
	mov ecx,ebx
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x15
	call get_int32
	add esp,8
	mov esi,eax
	call _rand
	cdq
	mov ecx,0x19
	idiv ecx
	mov eax,0x51EB851F
	mov byte ptr [ebp-4],9
	add edx,0x1E
	imul esi,edx
	imul esi
	sar edx,5
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	cmp word ptr [ebp+0x34],8
	mov dword ptr [ebp+0x18],esi
	jne Block65

 Block64:
	xor edx,edx
	mov word ptr [ebp+0x34],dx
	jmp Block68

 Block65:
	lea eax,[ebp+0x34]
	push eax
	jmp Block71

 Block66:
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x2C],esp
	push 0x1AA6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x34]
	mov byte ptr [ebp-4],0x16
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x17
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x34],8
	mov esi,eax
	mov dword ptr [ebp+0x18],esi
	mov byte ptr [ebp-4],9
	jne Block70

 Block67:
	xor eax,eax
	mov word ptr [ebp+0x34],ax

 Block68:
	mov eax,dword ptr [ebp+0x3C]
	cmp eax,edi
	je Block72

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block70:
	lea ecx,[ebp+0x34]
	push ecx

 Block71:
	call dword ptr [ZImports::_VariantClear]

 Block72:
	cmp esi,edi
	jne Block107

 Block73:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x24]
	push edx
	call esi
	lea eax,[ebp-0x24]
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
	mov ecx,3
	mov word ptr [ebp-0x44],cx
	mov dword ptr [ebp-0x3C],edi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x19
	cmp ecx,edi
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	lea edx,[ebp-0x24]
	push edx
	lea eax,[ebp-0x44]
	push eax
	push edi
	push edi
	push edi
	push edi
	push edi
	lea edx,[ebp+0x18]
	push edx
	call IWzGr2D::CreateLayer
	cmp word ptr [ebp-0x44],8
	mov byte ptr [ebp-4],0x1B
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [ebp-0x44],ax
	mov eax,dword ptr [ebp-0x3C]
	cmp eax,edi
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[ebp-0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	cmp word ptr [ebp-0x24],8
	mov byte ptr [ebp-4],0x1C
	jne Block84

 Block82:
	mov eax,dword ptr [ebp-0x1C]
	xor edx,edx
	mov word ptr [ebp-0x24],dx
	cmp eax,edi
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea eax,[ebp-0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block85:
	lea ecx,[ebp-0x34]
	push ecx
	call esi
	lea edx,[ebp-0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block87

 Block86:
	push eax
	call _com_issue_error

 Block87:
	lea eax,[ebp-0x54]
	push eax
	mov byte ptr [ebp-4],0x1D
	call esi
	lea ecx,[ebp-0x54]
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
	mov esi,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],0x1E
	cmp esi,edi
	jne Block91

 Block90:
	push 0x80004003
	call _com_issue_error

 Block91:
	lea edx,[ebp]
	push edx
	mov ecx,esi
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x1F
	cmp ecx,edi
	jne Block93

 Block92:
	push 0x80004003
	call _com_issue_error

 Block93:
	lea eax,[ebp-0x34]
	push eax
	lea edx,[ebp-0x54]
	push edx
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp]
	mov byte ptr [ebp-4],0x1E
	cmp eax,edi
	je Block95

 Block94:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block95:
	cmp word ptr [ebp-0x54],8
	mov byte ptr [ebp-4],0x1D
	jne Block98

 Block96:
	xor eax,eax
	mov word ptr [ebp-0x54],ax
	mov eax,dword ptr [ebp-0x4C]
	cmp eax,edi
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea ecx,[ebp-0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block99:
	cmp word ptr [ebp-0x34],8
	mov byte ptr [ebp-4],0x1C
	jne Block102

 Block100:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	cmp eax,edi
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block103:
	mov ecx,dword ptr [ebp-0x5C]
	add ecx,0x68
	call ZList<_x_com_ptr<IWzGr2DLayer>>::AddTail_
	mov edi,dword ptr [eax]
	cmp edi,esi
	je Block106

 Block104:
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx
	test edi,edi
	je Block106

 Block105:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block106:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],9
	call eax
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [ebp-4],1
	call edx
	lea ecx,[ebp+8]
	mov byte ptr [ebp-4],0
	call ZArray<_x_com_ptr<IWzCanvas>>::RemoveAll
	mov eax,dword ptr [ebp+0x30]
	test eax,eax
	jmp Block459

 Block107:
	mov ecx,dword ptr [ebp+0x78]
	imul ecx,0x1F40
	mov eax,0xC350
	sub eax,ecx
	cmp esi,edi
	mov dword ptr [ebp+0x78],eax
	mov dword ptr [ebp],edi
	jle Block458

 Block108:
	lea esp,[esp]

 Block109:
	mov ebx,dword ptr [ebp+0x14]
	call _rand
	mov esi,eax
	and esi,0x80000003
	jns Block111

 Block110:
	dec esi
	or esi,0xFFFFFFFC
	inc esi

 Block111:
	call _rand
	and eax,0x80000003
	jns Block113

 Block112:
	dec eax
	or eax,0xFFFFFFFC
	inc eax

 Block113:
	imul eax,esi
	add eax,0xF
	mov dword ptr [ebp+0x1C],eax
	call _rand
	cdq
	mov ecx,0x168
	idiv ecx
	mov dword ptr [ebp+0x54],edx
	call _rand
	cdq
	mov ecx,0xBB8
	idiv ecx
	xor esi,esi
	add edx,ecx
	mov dword ptr [ebp-0x1F8],edx
	cmp dword ptr [ebp-0x58],esi
	jne Block117

 Block114:
	mov eax,dword ptr [ebp+8]
	cmp eax,esi
	je Block116

 Block115:
	mov esi,dword ptr [eax-4]

 Block116:
	call _rand
	xor edx,edx
	div esi
	mov dword ptr [ebp+0x5C],edx
	jmp Block118

 Block117:
	mov dword ptr [ebp+0x5C],esi

 Block118:
	mov eax,dword ptr [ebp+0x74]
	cmp eax,6
	ja Block127

 Block119:
	cmp EAX, 0
je Block120
cmp EAX, 1
je Block121
cmp EAX, 2
je Block122
cmp EAX, 3
je Block123
cmp EAX, 4
je Block124
cmp EAX, 5
je Block125
cmp EAX, 6
je Block126


 Block120:
	call _rand
	mov esi,eax
	call get_screen_width
	mov ecx,eax
	mov eax,esi
	cdq
	idiv ecx
	mov esi,edx
	call get_screen_width
	cdq
	sub eax,edx
	sar eax,1
	sub esi,eax
	mov edi,esi
	mov dword ptr [ebp+0x28],edi
	call _rand
	mov esi,eax
	call get_screen_height
	mov ecx,eax
	mov eax,esi
	cdq
	idiv ecx
	mov esi,edx
	call get_screen_height
	cdq
	sub eax,edx
	sar eax,1
	sub esi,eax
	mov dword ptr [ebp+0x44],esi
	call _rand
	cdq
	mov ecx,0xC8
	idiv ecx
	lea edx,[edx+edi-0x64]
	mov dword ptr [ebp+0x58],edx
	call get_screen_height
	cdq
	sub eax,edx
	sar eax,1
	add eax,esi
	mov dword ptr [ebp+0x4C],eax
	jmp Block127

 Block121:
	call _rand
	mov esi,eax
	call get_screen_width
	mov ecx,eax
	mov eax,esi
	cdq
	idiv ecx
	mov esi,edx
	call get_screen_width
	cdq
	sub eax,edx
	sar eax,1
	sub esi,eax
	mov ebx,esi
	mov dword ptr [ebp+0x28],ebx
	call _rand
	mov esi,eax
	call get_screen_height
	mov ecx,eax
	mov eax,esi
	cdq
	idiv ecx
	mov esi,edx
	call get_screen_height
	cdq
	sub eax,edx
	mov edi,eax
	sar edi,1
	sub edi,esi
	mov dword ptr [ebp+0x44],edi
	call _rand
	cdq
	mov ecx,0xC8
	idiv ecx
	lea edx,[edx+ebx-0x64]
	mov dword ptr [ebp+0x58],edx
	call get_screen_height
	mov ebx,dword ptr [ebp+0x14]
	cdq
	sub eax,edx
	sar eax,1
	sub edi,eax
	mov dword ptr [ebp+0x4C],edi
	jmp Block127

 Block122:
	call _rand
	mov esi,eax
	call get_screen_width
	mov ecx,eax
	mov eax,esi
	cdq
	idiv ecx
	mov esi,edx
	call get_screen_width
	cdq
	sub eax,edx
	mov edi,eax
	sar edi,1
	sub edi,esi
	mov dword ptr [ebp+0x28],edi
	call _rand
	mov esi,eax
	call get_screen_height
	mov ecx,eax
	mov eax,esi
	cdq
	idiv ecx
	mov esi,edx
	call get_screen_height
	cdq
	sub eax,edx
	sar eax,1
	sub esi,eax
	mov dword ptr [ebp+0x44],esi
	call get_screen_width
	cdq
	sub eax,edx
	sar eax,1
	sub edi,eax
	mov dword ptr [ebp+0x58],edi
	call _rand
	cdq
	mov ecx,0xC8
	idiv ecx
	lea edx,[edx+esi-0x64]
	mov dword ptr [ebp+0x4C],edx
	jmp Block127

 Block123:
	call _rand
	mov esi,eax
	call get_screen_width
	mov ecx,eax
	mov eax,esi
	cdq
	idiv ecx
	mov esi,edx
	call get_screen_width
	cdq
	sub eax,edx
	sar eax,1
	sub esi,eax
	mov edi,esi
	mov dword ptr [ebp+0x28],edi
	call _rand
	mov esi,eax
	call get_screen_height
	mov ecx,eax
	mov eax,esi
	cdq
	idiv ecx
	mov esi,edx
	call get_screen_height
	cdq
	sub eax,edx
	sar eax,1
	sub esi,eax
	mov dword ptr [ebp+0x44],esi
	call get_screen_width
	cdq
	sub eax,edx
	sar eax,1
	add eax,edi
	mov dword ptr [ebp+0x58],eax
	call _rand
	cdq
	mov ecx,0xC8
	idiv ecx
	lea edx,[edx+esi-0x64]
	mov dword ptr [ebp+0x4C],edx
	jmp Block127

 Block124:
	call _rand
	cdq
	mov ecx,0x14
	idiv ecx
	mov esi,edx
	call get_screen_width
	cdq
	sub eax,edx
	sar eax,1
	lea edx,[eax+esi-0xA]
	mov dword ptr [ebp+0x28],edx
	call _rand
	cdq
	mov ecx,0x14
	idiv ecx
	lea esi,[edx-0xA]
	call get_screen_height
	fild dword ptr [ebp+0x54]
	add eax,esi
	mov dword ptr [ebp+0x44],eax
	fstp qword ptr [ebp-0x14]
	call get_screen_width
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [ebp+0x58],eax
	fild dword ptr [ebp+0x58]
	fstp qword ptr [ebp+0xC]
	fld qword ptr [ebp-0x14]
	call __CIcos
	fmul qword ptr [__real_4086880000000000]
	fadd qword ptr [ebp+0xC]
	call __ftol2_sse
	fld qword ptr [ebp-0x14]
	mov dword ptr [ebp+0x58],eax
	call __CIsin
	fabs
	fmul qword ptr [__real_4086880000000000]
	call __ftol2_sse
	mov dword ptr [ebp+0x4C],eax
	jmp Block127

 Block125:
	call _rand
	cdq
	mov ecx,0x14
	idiv ecx
	mov esi,edx
	call get_screen_width
	cdq
	sub eax,edx
	sar eax,1
	lea edx,[eax+esi-0xA]
	mov dword ptr [ebp+0x28],edx
	call _rand
	cdq
	mov ecx,0x14
	idiv ecx
	mov esi,edx
	call get_screen_height
	fild dword ptr [ebp+0x54]
	cdq
	sub eax,edx
	sar eax,1
	fstp qword ptr [ebp-0x14]
	lea edx,[eax+esi-0xA]
	mov dword ptr [ebp+0x44],edx
	call get_screen_width
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [ebp+0x58],eax
	fild dword ptr [ebp+0x58]
	fstp qword ptr [ebp+0xC]
	fld qword ptr [ebp-0x14]
	call __CIcos
	fmul qword ptr [__real_407f400000000000]
	fadd qword ptr [ebp+0xC]
	call __ftol2_sse
	mov dword ptr [ebp+0x58],eax
	call get_screen_height
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [ebp+0x4C],eax
	fild dword ptr [ebp+0x4C]
	fstp qword ptr [ebp+0xC]
	fld qword ptr [ebp-0x14]
	call __CIsin
	fmul qword ptr [__real_407f400000000000]
	fadd qword ptr [ebp+0xC]
	call __ftol2_sse
	mov dword ptr [ebp+0x4C],eax
	jmp Block127

 Block126:
	call _rand
	mov esi,eax
	call get_screen_width
	mov ecx,eax
	mov eax,esi
	cdq
	idiv ecx
	mov esi,edx
	call get_screen_width
	cdq
	sub eax,edx
	sar eax,1
	sub esi,eax
	mov dword ptr [ebp+0x28],esi
	call _rand
	mov esi,eax
	call get_screen_height
	mov ecx,eax
	mov eax,esi
	cdq
	idiv ecx
	mov esi,edx
	call get_screen_height
	cdq
	sub eax,edx
	sar eax,1
	sub esi,eax
	mov dword ptr [ebp+0x44],esi

 Block127:
	mov dword ptr [ebp+0x50],0
	cmp dword ptr [ebp-0x58],0
	mov byte ptr [ebp-4],0x20
	jne Block168

 Block128:
	lea edx,[ebp+0x34]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block129:
	mov ebx,dword ptr [ebp+8]
	mov edi,dword ptr [ebp+0x5C]
	mov eax,dword ptr [ebx+edi*4]
	mov ecx,0xD
	mov byte ptr [ebp-4],0x21
	mov word ptr [ebp-0x264],cx
	mov dword ptr [ebp-0x25C],eax
	test eax,eax
	je Block131

 Block130:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block131:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x22
	test ecx,ecx
	je Block5

 Block132:
	lea edx,[ebp+0x34]
	push edx
	lea eax,[ebp-0x264]
	push eax
	push 0xC0061508
	push 0
	push 0
	push 0
	push 0
	lea edx,[ebp-0x238]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	test eax,eax
	je Block134

 Block133:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	mov dword ptr [ebp+0x50],eax
	call edx

 Block134:
	mov eax,dword ptr [ebp-0x238]
	test eax,eax
	je Block136

 Block135:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block136:
	mov esi,8
	mov byte ptr [ebp-4],0x21
	cmp word ptr [ebp-0x264],si
	jne Block139

 Block137:
	xor eax,eax
	mov word ptr [ebp-0x264],ax
	mov eax,dword ptr [ebp-0x25C]
	test eax,eax
	je Block140

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block139:
	lea ecx,[ebp-0x264]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block140:
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp+0x34],si
	jne Block143

 Block141:
	mov eax,dword ptr [ebp+0x3C]
	xor edx,edx
	mov word ptr [ebp+0x34],dx
	test eax,eax
	je Block144

 Block142:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block144

 Block143:
	lea eax,[ebp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block144:
	push 0xFF
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x64],esp
	push 0x1A98
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebx+edi*4]
	mov byte ptr [ebp-4],0x23
	test ecx,ecx
	je Block5

 Block145:
	lea edx,[ebp-0x228]
	push edx
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x24
	test ecx,ecx
	je Block5

 Block146:
	lea eax,[ebp-0x2A4]
	push eax
	mov byte ptr [ebp-4],0x25
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x26
	call get_int32
	mov ebx,8
	add esp,8
	mov edi,eax
	mov dword ptr [ebp-0x64],edi
	mov byte ptr [ebp-4],0x25
	cmp word ptr [ebp-0x2A4],bx
	jne Block149

 Block147:
	mov eax,dword ptr [ebp-0x29C]
	xor ecx,ecx
	mov word ptr [ebp-0x2A4],cx
	test eax,eax
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea edx,[ebp-0x2A4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block150:
	mov eax,dword ptr [ebp-0x228]
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block152

 Block151:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block152:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x74]
	push eax
	call esi
	lea ecx,[ebp-0x74]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block153:
	lea edx,[ebp-0x194]
	push edx
	mov byte ptr [ebp-4],0x27
	call esi
	lea eax,[ebp-0x194]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block154:
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x28
	test ecx,ecx
	je Block5

 Block155:
	lea edx,[ebp-0x214]
	push edx
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x29
	test esi,esi
	je Block5

 Block156:
	mov edx,dword ptr [ebp-0x74]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x70]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x6C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x68]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [ebp-0x194]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x190]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x18C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x188]
	push 0
	push edi
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x90]
	push esi
	call eax
	test eax,eax
	jge Block158

 Block157:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block158:
	mov eax,dword ptr [ebp-0x214]
	mov byte ptr [ebp-4],0x28
	test eax,eax
	je Block160

 Block159:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block160:
	mov byte ptr [ebp-4],0x27
	cmp word ptr [ebp-0x194],bx
	jne Block163

 Block161:
	xor eax,eax
	mov word ptr [ebp-0x194],ax
	mov eax,dword ptr [ebp-0x18C]
	test eax,eax
	je Block164

 Block162:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block164

 Block163:
	lea ecx,[ebp-0x194]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block164:
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp-0x74],bx
	jne Block167

 Block165:
	mov eax,dword ptr [ebp-0x6C]
	xor edx,edx
	mov word ptr [ebp-0x74],dx
	test eax,eax
	je Block211

 Block166:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block211

 Block167:
	lea eax,[ebp-0x74]
	push eax
	call dword ptr [ZImports::_VariantClear]
	jmp Block211

 Block168:
	xor edi,edi
	nop

 Block169:
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
	mov dword ptr [ebp+0x10],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x294]
	push ecx
	mov byte ptr [ebp-4],0x2A
	mov ecx,ebx
	mov byte ptr [ebp-4],0x20
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x2B
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x5C],esi
	test eax,eax
	je Block172

 Block170:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x22C]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x22C]
	mov esi,ecx
	mov dword ptr [ebp+0x5C],esi
	test eax,eax
	jge Block172

 Block171:
	cmp eax,0x80004002
	jne Block1

 Block172:
	cmp word ptr [ebp-0x294],8
	mov byte ptr [ebp-4],0x2D
	jne Block175

 Block173:
	mov eax,dword ptr [ebp-0x28C]
	xor edx,edx
	mov word ptr [ebp-0x294],dx
	test eax,eax
	je Block176

 Block174:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block176

 Block175:
	lea eax,[ebp-0x294]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block176:
	test esi,esi
	sete al
	mov byte ptr [ebp-4],0x20
	test al,al
	jne Block180

 Block177:
	test esi,esi
	je Block179

 Block178:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block179:
	inc edi
	jmp Block169

 Block180:
	test esi,esi
	je Block182

 Block181:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block182:
	call _rand
	cdq
	idiv edi
	mov eax,0x20
	mov esi,edx
	call __alloca_probe_8
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push esi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x10],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x2B4]
	mov byte ptr [ebp-4],0x2E
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x20
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x2F
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x5C],esi
	test eax,eax
	je Block185

 Block183:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x21C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x21C]
	mov esi,ecx
	mov dword ptr [ebp+0x5C],esi
	test eax,eax
	jge Block185

 Block184:
	cmp eax,0x80004002
	jne Block1

 Block185:
	cmp word ptr [ebp-0x2B4],8
	mov byte ptr [ebp-4],0x31
	jne Block188

 Block186:
	mov eax,dword ptr [ebp-0x2AC]
	xor edx,edx
	mov word ptr [ebp-0x2B4],dx
	test eax,eax
	je Block189

 Block187:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block189

 Block188:
	lea eax,[ebp-0x2B4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block189:
	push 0
	push 0xFF
	push 0xC0061508
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x10],esp
	mov dword ptr [eax],0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x10],esp
	push 0
	push ecx
	mov dword ptr [eax],0
	mov eax,esp
	mov byte ptr [ebp-4],0x32
	mov dword ptr [ebp-0x10],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block191

 Block190:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block191:
	lea eax,[ebp-0x234]
	push eax
	mov byte ptr [ebp-4],0x31
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	add esp,0x28
	test eax,eax
	je Block193

 Block192:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov edi,eax
	push eax
	mov dword ptr [ebp+0x50],edi
	call edx
	jmp Block194

 Block193:
	mov edi,dword ptr [ebp+0x50]

 Block194:
	mov eax,dword ptr [ebp-0x234]
	test eax,eax
	je Block196

 Block195:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block196:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x1D4]
	push eax
	call ebx
	lea ecx,[ebp-0x1D4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block197:
	lea edx,[ebp-0x1B4]
	push edx
	mov byte ptr [ebp-4],0x33
	call ebx
	lea eax,[ebp-0x1B4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block198:
	mov byte ptr [ebp-4],0x34
	test edi,edi
	je Block5

 Block199:
	mov edx,dword ptr [ebp-0x1D4]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x1D0]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x1CC]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x1C8]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [ebp-0x1B4]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x1B0]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x1AC]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x1A8]
	push 0x20
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x110]
	push edi
	call eax
	test eax,eax
	jge Block201

 Block200:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block201:
	mov edi,8
	mov byte ptr [ebp-4],0x33
	cmp word ptr [ebp-0x1B4],di
	jne Block204

 Block202:
	mov eax,dword ptr [ebp-0x1AC]
	xor ecx,ecx
	mov word ptr [ebp-0x1B4],cx
	test eax,eax
	je Block205

 Block203:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block205

 Block204:
	lea edx,[ebp-0x1B4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block205:
	mov byte ptr [ebp-4],0x31
	cmp word ptr [ebp-0x1D4],di
	jne Block208

 Block206:
	xor eax,eax
	mov word ptr [ebp-0x1D4],ax
	mov eax,dword ptr [ebp-0x1CC]
	test eax,eax
	je Block209

 Block207:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block209

 Block208:
	lea ecx,[ebp-0x1D4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block209:
	mov byte ptr [ebp-4],0x20
	test esi,esi
	je Block211

 Block210:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block211:
	xor edi,edi
	cmp dword ptr [ebp-0x224],edi
	jne Block227

 Block212:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x144]
	push ecx
	call esi
	lea edx,[ebp-0x144]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block213:
	lea eax,[ebp-0x1F4]
	push eax
	mov byte ptr [ebp-4],0x35
	call esi
	lea ecx,[ebp-0x1F4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block214:
	mov ecx,dword ptr [ebp+0x50]
	lea edx,[ebp-0x23C]
	push edx
	mov byte ptr [ebp-4],0x36
	call IWzGr2DLayer::Getrb
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x37
	cmp esi,edi
	je Block5

 Block215:
	mov edx,dword ptr [ebp-0x144]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x140]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x13C]
	mov ecx,dword ptr [esi]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x138]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [ebp-0x1F4]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x1F0]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x1EC]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x1E8]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x1C]
	push eax
	push eax
	mov eax,dword ptr [ecx+0x90]
	push esi
	call eax
	cmp eax,edi
	jge Block217

 Block216:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block217:
	mov eax,dword ptr [ebp-0x23C]
	mov byte ptr [ebp-4],0x36
	cmp eax,edi
	je Block219

 Block218:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block219:
	mov esi,8
	mov byte ptr [ebp-4],0x35
	cmp word ptr [ebp-0x1F4],si
	jne Block222

 Block220:
	xor eax,eax
	mov word ptr [ebp-0x1F4],ax
	mov eax,dword ptr [ebp-0x1EC]
	cmp eax,edi
	je Block223

 Block221:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block223

 Block222:
	lea ecx,[ebp-0x1F4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block223:
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp-0x144],si
	jne Block226

 Block224:
	mov eax,dword ptr [ebp-0x13C]
	xor edx,edx
	mov word ptr [ebp-0x144],dx
	cmp eax,edi
	je Block227

 Block225:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block227

 Block226:
	lea eax,[ebp-0x144]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block227:
	mov dword ptr [ebp+0x20],edi
	mov dword ptr [ebp+0x24],edi
	mov dword ptr [ebp+4],edi
	mov dword ptr [ebp+0x48],edi
	lea ecx,[ebp-0x244]
	push 0x3D2
	push ecx
	mov byte ptr [ebp-4],0x3B
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea edx,[ebp+0x20]
	push edx
	push eax
	mov byte ptr [ebp-4],0x3C
	call PcCreate_IWzVector2D
	mov eax,dword ptr [ebp-0x244]
	add esp,0xC
	mov byte ptr [ebp-4],0x3B
	cmp eax,edi
	je Block229

 Block228:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block229:
	lea eax,[ebp-0x1FC]
	push 0x3D2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[ebp+0x24]
	push ecx
	push eax
	mov byte ptr [ebp-4],0x3D
	call PcCreate_IWzVector2D
	mov eax,dword ptr [ebp-0x1FC]
	add esp,0xC
	mov byte ptr [ebp-4],0x3B
	cmp eax,edi
	je Block231

 Block230:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block231:
	lea edx,[ebp-0x200]
	push 0x3D2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[ebp+4]
	push ecx
	push eax
	mov byte ptr [ebp-4],0x3E
	call PcCreate_IWzVector2D
	mov eax,dword ptr [ebp-0x200]
	add esp,0xC
	mov byte ptr [ebp-4],0x3B
	cmp eax,edi
	je Block233

 Block232:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block233:
	lea edx,[ebp-0x208]
	push 0x3D2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[ebp+0x48]
	push ecx
	push eax
	mov byte ptr [ebp-4],0x3F
	call PcCreate_IWzVector2D
	mov eax,dword ptr [ebp-0x208]
	add esp,0xC
	mov byte ptr [ebp-4],0x3B
	cmp eax,edi
	je Block235

 Block234:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block235:
	mov eax,dword ptr [ebp+0x24]
	mov edx,0xD
	mov word ptr [ebp-0xA4],dx
	mov dword ptr [ebp-0x9C],eax
	cmp eax,edi
	je Block237

 Block236:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block237:
	mov ecx,dword ptr [ebp+4]
	mov byte ptr [ebp-4],0x40
	cmp ecx,edi
	je Block5

 Block238:
	mov ebx,dword ptr [ebp-0xA4]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0xA0]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp-0x9C]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp-0x98]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [edx+0x64]
	push ecx
	mov esi,ecx
	call eax
	cmp eax,edi
	jge Block240

 Block239:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block240:
	cmp word ptr [ebp-0xA4],8
	mov byte ptr [ebp-4],0x3B
	jne Block243

 Block241:
	mov eax,dword ptr [ebp-0x9C]
	xor ecx,ecx
	mov word ptr [ebp-0xA4],cx
	cmp eax,edi
	je Block244

 Block242:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block244

 Block243:
	lea edx,[ebp-0xA4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block244:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0xC4]
	push eax
	call esi
	lea ecx,[ebp-0xC4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block245:
	lea edx,[ebp-0x1A4]
	push edx
	mov byte ptr [ebp-4],0x41
	call esi
	lea eax,[ebp-0x1A4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block246:
	mov ecx,dword ptr [ebp+4]
	mov byte ptr [ebp-4],0x42
	cmp ecx,edi
	je Block5

 Block247:
	mov edx,dword ptr [ebp-0xC4]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0xC0]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0xBC]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0xB8]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [ebp-0x1A4]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0x1A0]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0x19C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x198]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x1C]
	cdq
	sub eax,edx
	push edi
	sar eax,1
	push eax
	mov eax,dword ptr [ebx+0x90]
	push ecx
	mov esi,ecx
	call eax
	cmp eax,edi
	jge Block249

 Block248:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block249:
	mov esi,8
	mov byte ptr [ebp-4],0x41
	cmp word ptr [ebp-0x1A4],si
	jne Block252

 Block250:
	mov eax,dword ptr [ebp-0x19C]
	xor ecx,ecx
	mov word ptr [ebp-0x1A4],cx
	cmp eax,edi
	je Block253

 Block251:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block253

 Block252:
	lea edx,[ebp-0x1A4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block253:
	mov byte ptr [ebp-4],0x3B
	cmp word ptr [ebp-0xC4],si
	jne Block256

 Block254:
	xor eax,eax
	mov word ptr [ebp-0xC4],ax
	mov eax,dword ptr [ebp-0xBC]
	cmp eax,edi
	je Block257

 Block255:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block257

 Block256:
	lea ecx,[ebp-0xC4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block257:
	lea edx,[ebp-0x164]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x164]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block258:
	mov ecx,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],0x43
	cmp ecx,edi
	je Block5

 Block259:
	mov ebx,dword ptr [ebp-0x164]
	fild dword ptr [ebp+0x54]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x160]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp-0x15C]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp-0x158]
	sub esp,8
	mov dword ptr [eax+0xC],ebx
	fstp qword ptr [esp]
	mov eax,dword ptr [edx+0xA0]
	push ecx
	mov esi,ecx
	call eax
	cmp eax,edi
	jge Block261

 Block260:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block261:
	cmp word ptr [ebp-0x164],8
	mov byte ptr [ebp-4],0x3B
	jne Block264

 Block262:
	mov eax,dword ptr [ebp-0x15C]
	xor ecx,ecx
	mov word ptr [ebp-0x164],cx
	cmp eax,edi
	je Block265

 Block263:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block265

 Block264:
	lea edx,[ebp-0x164]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block265:
	mov eax,3
	mov edx,0x7D0
	mov word ptr [ebp-0x34],ax
	mov dword ptr [ebp-0x2C],edx
	mov ecx,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],0x44
	cmp ecx,edi
	je Block5

 Block266:
	mov ebx,dword ptr [ebp-0x34]
	fldz
	mov edi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x30]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x28]
	sub esp,8
	mov dword ptr [eax+0xC],edx
	fstp qword ptr [esp]
	mov eax,dword ptr [edi+0xA0]
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block268

 Block267:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block268:
	mov edi,8
	mov byte ptr [ebp-4],0x3B
	cmp word ptr [ebp-0x34],di
	jne Block271

 Block269:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	test eax,eax
	je Block272

 Block270:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block272

 Block271:
	lea edx,[ebp-0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block272:
	mov eax,dword ptr [ebp+0x74]
	cmp eax,4
	je Block316

 Block273:
	cmp eax,5
	je Block316

 Block274:
	mov eax,3
	mov word ptr [ebp-0x1E4],ax
	mov dword ptr [ebp-0x1DC],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x45
	test ecx,ecx
	je Block5

 Block275:
	lea edx,[ebp-0x210]
	push edx
	call IWzGr2D::Getcenter
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [ebp-4],0x46
	mov word ptr [ebp-0xE4],cx
	mov dword ptr [ebp-0xDC],eax
	test eax,eax
	je Block277

 Block276:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block277:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x47
	test eax,eax
	je Block5

 Block278:
	mov dword ptr [ebp+0x54],eax
	call get_screen_height
	mov esi,dword ptr [ebp+0x1C]
	mov ebx,eax
	add ebx,esi
	call get_screen_width
	add eax,esi
	mov dword ptr [ebp+0x5C],eax
	neg esi
	call get_screen_height
	cdq
	sub eax,edx
	sar eax,1
	mov edi,esi
	sub edi,eax
	call get_adjust_cy
	sub edi,eax
	call get_screen_width
	mov ecx,dword ptr [ebp+0x54]
	cdq
	sub eax,edx
	mov edx,dword ptr [ecx]
	mov ecx,dword ptr [ebp-0x1E4]
	sub esp,0x10
	sar eax,1
	sub esi,eax
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x1E0]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0x1DC]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x1D8]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [ebp-0xE4]
	push ebx
	push eax
	push edi
	push esi
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0xE0]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0xDC]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0xD8]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [edx+0x9C]
	push eax
	call ecx
	test eax,eax
	jge Block280

 Block279:
	mov edx,dword ptr [ebp+0x54]
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edx
	push eax
	call _com_issue_errorex

 Block280:
	mov esi,8
	mov byte ptr [ebp-4],0x46
	cmp word ptr [ebp-0xE4],si
	jne Block289

 Block281:
	xor eax,eax
	mov word ptr [ebp-0xE4],ax
	mov eax,dword ptr [ebp-0xDC]
	test eax,eax
	je Block283

 Block282:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block283:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block284:
	mov eax,dword ptr [ebp-0x210]
	mov byte ptr [ebp-4],0x45
	test eax,eax
	je Block286

 Block285:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block286:
	mov byte ptr [ebp-4],0x3B
	cmp word ptr [ebp-0x1E4],si
	jne Block290

 Block287:
	mov eax,dword ptr [ebp-0x1DC]
	xor ecx,ecx
	mov word ptr [ebp-0x1E4],cx
	test eax,eax
	je Block291

 Block288:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block291

 Block289:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0xE4]
	push ecx
	call edi
	jmp Block284

 Block290:
	lea edx,[ebp-0x1E4]
	push edx
	call edi

 Block291:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x184]
	push eax
	call esi
	lea ecx,[ebp-0x184]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block292:
	lea edx,[ebp-0x104]
	push edx
	mov byte ptr [ebp-4],0x48
	call esi
	lea eax,[ebp-0x104]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block293:
	mov ecx,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x49
	test ecx,ecx
	je Block5

 Block294:
	mov ebx,dword ptr [ebp-0x184]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x180]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp-0x17C]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp-0x178]
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+0xC],ebx
	mov ebx,dword ptr [ebp-0x104]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x100]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp-0xFC]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp-0xF8]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [ebp+0x44]
	push eax
	mov eax,dword ptr [ebp+0x28]
	push eax
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [edx+0x90]
	call ecx
	test eax,eax
	jge Block296

 Block295:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block296:
	mov esi,8
	mov byte ptr [ebp-4],0x48
	cmp word ptr [ebp-0x104],si
	jne Block299

 Block297:
	mov eax,dword ptr [ebp-0xFC]
	xor edx,edx
	mov word ptr [ebp-0x104],dx
	test eax,eax
	je Block300

 Block298:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block300

 Block299:
	lea eax,[ebp-0x104]
	push eax
	call edi

 Block300:
	mov byte ptr [ebp-4],0x3B
	cmp word ptr [ebp-0x184],si
	jne Block303

 Block301:
	mov eax,dword ptr [ebp-0x17C]
	xor ecx,ecx
	mov word ptr [ebp-0x184],cx
	test eax,eax
	je Block304

 Block302:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block304

 Block303:
	lea edx,[ebp-0x184]
	push edx
	call edi

 Block304:
	mov eax,0xD
	mov word ptr [ebp-0x124],ax
	mov eax,dword ptr [ebp+0x20]
	mov dword ptr [ebp-0x11C],eax
	test eax,eax
	je Block306

 Block305:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block306:
	mov ecx,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x4A
	test ecx,ecx
	je Block5

 Block307:
	mov ebx,dword ptr [ebp-0x124]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x120]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp-0x11C]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp-0x118]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [edx+0x64]
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block309

 Block308:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block309:
	cmp word ptr [ebp-0x124],8
	mov byte ptr [ebp-4],0x3B
	jne Block312

 Block310:
	mov eax,dword ptr [ebp-0x11C]
	xor ecx,ecx
	mov word ptr [ebp-0x124],cx
	test eax,eax
	je Block313

 Block311:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block313

 Block312:
	lea edx,[ebp-0x124]
	push edx
	call edi

 Block313:
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block5

 Block314:
	mov edx,dword ptr [ebp-0x218]
	mov ecx,dword ptr [eax]
	push 5
	push edx
	mov edx,dword ptr [ebp+4]
	push 0x64
	push 0x64
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x98]
	call eax
	test eax,eax
	jge Block359

 Block315:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex
	jmp Block359

 Block316:
	push 0
	lea ecx,[ebp-0x220]
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov edx,0xD
	mov byte ptr [ebp-4],0x4B
	mov word ptr [ebp-0x1C4],dx
	mov dword ptr [ebp-0x1BC],eax
	test eax,eax
	je Block318

 Block317:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block318:
	mov ecx,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x4C
	test ecx,ecx
	je Block5

 Block319:
	mov ebx,dword ptr [ebp-0x1C4]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x1C0]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp-0x1BC]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp-0x1B8]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [edx+0x64]
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block321

 Block320:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block321:
	mov byte ptr [ebp-4],0x4B
	cmp word ptr [ebp-0x1C4],di
	jne Block324

 Block322:
	mov eax,dword ptr [ebp-0x1BC]
	xor ecx,ecx
	mov word ptr [ebp-0x1C4],cx
	test eax,eax
	je Block325

 Block323:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block325

 Block324:
	lea edx,[ebp-0x1C4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block325:
	mov eax,dword ptr [ebp-0x220]
	mov byte ptr [ebp-4],0x3B
	test eax,eax
	je Block327

 Block326:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block327:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x94]
	push eax
	call esi
	lea ecx,[ebp-0x94]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block328:
	lea edx,[ebp-0x84]
	push edx
	mov byte ptr [ebp-4],0x4D
	call esi
	lea eax,[ebp-0x84]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block329:
	mov ecx,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x4E
	test ecx,ecx
	je Block5

 Block330:
	mov edi,dword ptr [ebp-0x94]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp-0x90]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp-0x8C]
	mov ebx,dword ptr [ebp+0x28]
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [ebp-0x88]
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [ebp-0x84]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp-0x80]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp-0x7C]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [ebp-0x78]
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [ebp+0x44]
	mov eax,dword ptr [edx+0x90]
	push edi
	push ebx
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block332

 Block331:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block332:
	mov esi,8
	mov byte ptr [ebp-4],0x4D
	cmp word ptr [ebp-0x84],si
	jne Block335

 Block333:
	mov eax,dword ptr [ebp-0x7C]
	xor ecx,ecx
	mov word ptr [ebp-0x84],cx
	test eax,eax
	je Block336

 Block334:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block336

 Block335:
	lea edx,[ebp-0x84]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block336:
	mov byte ptr [ebp-4],0x3B
	cmp word ptr [ebp-0x94],si
	jne Block339

 Block337:
	xor eax,eax
	mov word ptr [ebp-0x94],ax
	mov eax,dword ptr [ebp-0x8C]
	test eax,eax
	je Block340

 Block338:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block340

 Block339:
	lea ecx,[ebp-0x94]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block340:
	mov edx,3
	mov word ptr [ebp-0xD4],dx
	mov dword ptr [ebp-0xCC],0
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 0
	lea eax,[ebp-0x230]
	push eax
	mov byte ptr [ebp-4],0x4F
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [ebp-4],0x50
	mov word ptr [ebp-0xB4],cx
	mov dword ptr [ebp-0xAC],eax
	test eax,eax
	je Block342

 Block341:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block342:
	mov ecx,dword ptr [ebp+0x4C]
	cmp edi,ecx
	mov byte ptr [ebp-4],0x51
	mov dword ptr [ebp+0x5C],edi
	jl Block344

 Block343:
	mov dword ptr [ebp+0x5C],ecx

 Block344:
	mov edi,dword ptr [ebp+0x58]
	cmp ebx,edi
	mov dword ptr [ebp+0x54],ebx
	jl Block346

 Block345:
	mov dword ptr [ebp+0x54],edi

 Block346:
	mov esi,dword ptr [ebp+0x48]
	test esi,esi
	je Block5

 Block347:
	mov eax,dword ptr [ebp+0x44]
	sub eax,ecx
	cdq
	mov ecx,eax
	xor ecx,edx
	sub ecx,edx
	mov eax,ebx
	mov ebx,dword ptr [ebp-0xD4]
	sub eax,edi
	cdq
	xor eax,edx
	sub eax,edx
	sub esp,0x10
	mov edx,esp
	mov dword ptr [edx],ebx
	mov ebx,dword ptr [ebp-0xD0]
	mov dword ptr [edx+4],ebx
	mov ebx,dword ptr [ebp-0xCC]
	mov dword ptr [edx+8],ebx
	mov ebx,dword ptr [ebp-0xC8]
	push ecx
	mov dword ptr [edx+0xC],ebx
	mov edx,dword ptr [ebp+0x44]
	xor ecx,ecx
	cmp dword ptr [ebp+0x4C],edx
	mov edx,dword ptr [ebp-0xB4]
	setl cl
	push eax
	mov edi,dword ptr [esi]
	xor eax,eax
	add ecx,dword ptr [ebp+0x5C]
	push ecx
	mov ecx,dword ptr [ebp+0x28]
	cmp dword ptr [ebp+0x58],ecx
	mov ecx,dword ptr [ebp-0xB0]
	setl al
	add eax,dword ptr [ebp+0x54]
	push eax
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0xAC]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0xA8]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [edi+0x9C]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block349

 Block348:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	mov ecx,esi
	push ecx
	push eax
	call _com_issue_errorex

 Block349:
	mov esi,8
	mov byte ptr [ebp-4],0x50
	cmp word ptr [ebp-0xB4],si
	jne Block352

 Block350:
	mov eax,dword ptr [ebp-0xAC]
	xor edx,edx
	mov word ptr [ebp-0xB4],dx
	test eax,eax
	je Block353

 Block351:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block353

 Block352:
	lea eax,[ebp-0xB4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block353:
	mov eax,dword ptr [ebp-0x230]
	mov byte ptr [ebp-4],0x4F
	test eax,eax
	je Block355

 Block354:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block355:
	mov byte ptr [ebp-4],0x3B
	cmp word ptr [ebp-0xD4],si
	jne Block358

 Block356:
	xor eax,eax
	mov word ptr [ebp-0xD4],ax
	mov eax,dword ptr [ebp-0xCC]
	test eax,eax
	je Block359

 Block357:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block359

 Block358:
	lea ecx,[ebp-0xD4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block359:
	mov eax,dword ptr [ebp+0x48]
	xor edi,edi
	mov edx,0xD
	mov word ptr [ebp-0xF4],dx
	mov dword ptr [ebp-0xEC],eax
	cmp eax,edi
	je Block361

 Block360:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block361:
	mov ebx,dword ptr [ebp+0x50]
	lea eax,[ebp-0x204]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x52
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x53
	cmp esi,edi
	je Block5

 Block362:
	mov edx,dword ptr [ebp-0xF4]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp-0xF0]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp-0xEC]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0xE8]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,edi
	jge Block364

 Block363:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block364:
	mov eax,dword ptr [ebp-0x204]
	mov byte ptr [ebp-4],0x52
	cmp eax,edi
	je Block366

 Block365:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block366:
	cmp word ptr [ebp-0xF4],8
	mov byte ptr [ebp-4],0x3B
	jne Block369

 Block367:
	xor eax,eax
	mov word ptr [ebp-0xF4],ax
	mov eax,dword ptr [ebp-0xEC]
	cmp eax,edi
	je Block370

 Block368:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block370

 Block369:
	lea ecx,[ebp-0xF4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block370:
	lea edx,[ebp-0x240]
	push edx
	mov ecx,ebx
	call IWzGr2DLayer::Getlt
	mov esi,eax
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0xB8]
	lea ecx,[ebp+0x5C]
	push ecx
	push ebx
	mov byte ptr [ebp-4],0x54
	mov dword ptr [ebp+0x5C],edi
	call edx
	cmp eax,edi
	jge Block372

 Block371:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block372:
	mov esi,dword ptr [esi]
	cmp esi,edi
	je Block5

 Block373:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [esi]
	cdq
	sub eax,edx
	mov edx,dword ptr [ecx+0x6C]
	sar eax,1
	neg eax
	push eax
	push esi
	call edx
	cmp eax,edi
	jge Block375

 Block374:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block375:
	mov eax,dword ptr [ebp-0x240]
	mov byte ptr [ebp-4],0x3B
	cmp eax,edi
	je Block377

 Block376:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block377:
	lea eax,[ebp-0x20C]
	push eax
	mov ecx,ebx
	call IWzGr2DLayer::Getlt
	mov esi,eax
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0xC0]
	lea edx,[ebp+0x5C]
	push edx
	push ebx
	mov byte ptr [ebp-4],0x55
	mov dword ptr [ebp+0x5C],edi
	call eax
	cmp eax,edi
	jge Block379

 Block378:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block379:
	mov esi,dword ptr [esi]
	cmp esi,edi
	je Block5

 Block380:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [esi]
	cdq
	sub eax,edx
	mov edx,dword ptr [ecx+0x74]
	sar eax,1
	neg eax
	push eax
	push esi
	call edx
	cmp eax,edi
	jge Block382

 Block381:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block382:
	mov eax,dword ptr [ebp-0x20C]
	mov byte ptr [ebp-4],0x3B
	cmp eax,edi
	je Block384

 Block383:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block384:
	cmp dword ptr [ebp+0x70],2
	jne Block392

 Block385:
	call _rand
	cdq
	mov ecx,0xBB8
	idiv ecx
	mov eax,3
	mov word ptr [ebp-0x54],ax
	add edx,0x12C
	mov dword ptr [ebp-0x4C],edx
	mov ecx,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x56
	cmp ecx,edi
	je Block5

 Block386:
	mov edi,dword ptr [ebp-0x54]
	fldz
	mov esi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp-0x50]
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x48]
	sub esp,8
	mov dword ptr [eax+0xC],edx
	fstp qword ptr [esp]
	mov eax,dword ptr [esi+0xA0]
	push ecx
	mov dword ptr [ebp+0x10],ecx
	call eax
	xor edi,edi
	cmp eax,edi
	jge Block388

 Block387:
	mov ecx,dword ptr [ebp+0x10]
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push ecx
	push eax
	call _com_issue_errorex

 Block388:
	cmp word ptr [ebp-0x54],8
	mov byte ptr [ebp-4],0x3B
	jne Block391

 Block389:
	mov eax,dword ptr [ebp-0x4C]
	xor edx,edx
	mov word ptr [ebp-0x54],dx
	cmp eax,edi
	je Block392

 Block390:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block392

 Block391:
	lea eax,[ebp-0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block392:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+0xE0]
	push 0x1FFFFFF
	push ebx
	call edx
	cmp eax,edi
	jge Block394

 Block393:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebx
	push eax
	call _com_issue_errorex

 Block394:
	lea eax,[ebp-0x134]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x134]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block395:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx+0x58]
	lea eax,[ebp+0x5C]
	push eax
	push ebx
	mov byte ptr [ebp-4],0x57
	mov dword ptr [ebp+0x5C],edi
	call ecx
	cmp eax,edi
	jge Block397

 Block396:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push ebx
	push eax
	call _com_issue_errorex

 Block397:
	mov edx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [ebp-0x1F8]
	add eax,edx
	mov ecx,3
	mov word ptr [ebp-0x114],cx
	mov dword ptr [ebp-0x10C],eax
	cmp dword ptr [ebp+0x1C],0x64
	mov byte ptr [ebp-4],0x58
	jle Block399

 Block398:
	lea edi,[ecx+0x2F]
	jmp Block400

 Block399:
	mov edx,dword ptr [ebp+0x1C]
	mov edi,dword ptr [ebp-0x64]
	lea eax,[edx+edx]
	sub edi,eax

 Block400:
	lea ecx,[ebp+0x2C]
	push ecx
	mov ecx,ebx
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x59
	test esi,esi
	je Block5

 Block401:
	mov ecx,dword ptr [ebp-0x134]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x90]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x130]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0x12C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x128]
	mov dword ptr [eax+0xC],ecx
	mov ecx,dword ptr [ebp-0x114]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp-0x110]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp-0x10C]
	push 0xFF
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp-0x108]
	push edi
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block403

 Block402:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block403:
	mov eax,dword ptr [ebp+0x2C]
	mov byte ptr [ebp-4],0x58
	test eax,eax
	je Block405

 Block404:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block405:
	mov esi,8
	mov byte ptr [ebp-4],0x57
	cmp word ptr [ebp-0x114],si
	jne Block408

 Block406:
	xor eax,eax
	mov word ptr [ebp-0x114],ax
	mov eax,dword ptr [ebp-0x10C]
	test eax,eax
	je Block409

 Block407:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block409

 Block408:
	lea ecx,[ebp-0x114]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block409:
	mov byte ptr [ebp-4],0x3B
	cmp word ptr [ebp-0x134],si
	jne Block412

 Block410:
	mov eax,dword ptr [ebp-0x12C]
	xor edx,edx
	mov word ptr [ebp-0x134],dx
	test eax,eax
	je Block413

 Block411:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block413

 Block412:
	lea eax,[ebp-0x134]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block413:
	mov eax,dword ptr [ebp+0x74]
	cmp eax,5
	ja Block445

 Block414:
	cmp EAX, 0
je Block415
cmp EAX, 1
je Block415
cmp EAX, 2
je Block415
cmp EAX, 3
je Block415
cmp EAX, 4
je Block430
cmp EAX, 5
je Block430


 Block415:
	mov ecx,3
	mov word ptr [ebp-0x154],cx
	mov dword ptr [ebp-0x14C],0x10000000
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x5A
	test eax,eax
	je Block5

 Block416:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x58]
	lea ecx,[ebp+0x5C]
	push ecx
	push eax
	mov esi,eax
	mov dword ptr [ebp+0x5C],0
	call edx
	test eax,eax
	jge Block418

 Block417:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block418:
	mov eax,dword ptr [ebp+0x78]
	cdq
	idiv dword ptr [ebp+0x1C]
	mov ecx,3
	mov word ptr [ebp-0x24],cx
	add eax,dword ptr [ebp+0x5C]
	mov edx,eax
	mov dword ptr [ebp-0x1C],edx
	mov ecx,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x5B
	test ecx,ecx
	je Block5

 Block419:
	mov ebx,dword ptr [ebp-0x154]
	mov edi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x150]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp-0x14C]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp-0x148]
	mov dword ptr [eax+0xC],ebx
	mov ebx,dword ptr [ebp-0x24]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x20]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x18]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x4C]
	mov edx,dword ptr [ebp+0x58]
	push eax
	mov eax,dword ptr [edi+0x90]
	push edx
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block421

 Block420:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block421:
	mov esi,8
	mov byte ptr [ebp-4],0x5A
	cmp word ptr [ebp-0x24],si
	jne Block424

 Block422:
	mov eax,dword ptr [ebp-0x1C]
	xor ecx,ecx
	mov word ptr [ebp-0x24],cx
	test eax,eax
	je Block425

 Block423:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block425

 Block424:
	lea edx,[ebp-0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block425:
	mov byte ptr [ebp-4],0x3B
	cmp word ptr [ebp-0x154],si
	jne Block429

 Block426:
	xor eax,eax
	mov word ptr [ebp-0x154],ax
	mov eax,dword ptr [ebp-0x14C]

 Block427:
	test eax,eax
	je Block444

 Block428:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block444

 Block429:
	lea ecx,[ebp-0x154]
	jmp Block443

 Block430:
	mov edx,3
	mov word ptr [ebp-0x174],dx
	mov dword ptr [ebp-0x16C],0x10000000
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x5C
	test eax,eax
	je Block5

 Block431:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x60]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x58]
	mov dword ptr [ebp-0x60],0
	call eax
	test eax,eax
	jge Block433

 Block432:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block433:
	mov esi,dword ptr [ebp-0x60]
	call _rand
	cdq
	mov ecx,0x7530
	idiv ecx
	mov eax,dword ptr [ebp+0x78]
	mov ecx,3
	mov word ptr [ebp-0x44],cx
	lea eax,[edx+eax-0x3A98]
	cdq
	idiv dword ptr [ebp+0x1C]
	add eax,esi
	mov edx,eax
	mov dword ptr [ebp-0x3C],edx
	mov ecx,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x5D
	test ecx,ecx
	je Block5

 Block434:
	mov ebx,dword ptr [ebp-0x174]
	mov edi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x170]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp-0x16C]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp-0x168]
	mov dword ptr [eax+0xC],ebx
	mov ebx,dword ptr [ebp-0x44]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp-0x40]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp-0x38]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x4C]
	mov edx,dword ptr [ebp+0x58]
	push eax
	mov eax,dword ptr [edi+0x90]
	push edx
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block436

 Block435:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block436:
	mov esi,8
	mov byte ptr [ebp-4],0x5C
	cmp word ptr [ebp-0x44],si
	jne Block439

 Block437:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	test eax,eax
	je Block440

 Block438:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block440

 Block439:
	lea edx,[ebp-0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block440:
	mov byte ptr [ebp-4],0x3B
	cmp word ptr [ebp-0x174],si
	jne Block442

 Block441:
	xor eax,eax
	mov word ptr [ebp-0x174],ax
	mov eax,dword ptr [ebp-0x16C]
	jmp Block427

 Block442:
	lea ecx,[ebp-0x174]

 Block443:
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block444:
	mov ebx,dword ptr [ebp+0x50]

 Block445:
	mov ecx,dword ptr [ebp-0x5C]
	add ecx,0x68
	call ZList<_x_com_ptr<IWzGr2DLayer>>::AddTail_
	mov esi,dword ptr [eax]
	cmp esi,ebx
	je Block448

 Block446:
	mov dword ptr [eax],ebx
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push ebx
	call eax
	test esi,esi
	je Block448

 Block447:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block448:
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x3A
	test eax,eax
	je Block450

 Block449:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block450:
	mov eax,dword ptr [ebp+4]
	mov byte ptr [ebp-4],0x39
	test eax,eax
	je Block452

 Block451:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block452:
	mov eax,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],0x38
	test eax,eax
	je Block454

 Block453:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block454:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block456

 Block455:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block456:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [ebp-4],9
	call ecx
	mov eax,dword ptr [ebp]
	inc eax
	cmp eax,dword ptr [ebp+0x18]
	mov dword ptr [ebp],eax
	jl Block109

 Block457:
	mov ebx,dword ptr [ebp+0x14]
	xor edi,edi

 Block458:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov byte ptr [ebp-4],1
	call eax
	lea ecx,[ebp+8]
	mov byte ptr [ebp-4],0
	call ZArray<_x_com_ptr<IWzCanvas>>::RemoveAll
	mov eax,dword ptr [ebp+0x30]
	cmp eax,edi

 Block459:
	mov dword ptr [ebp-4],0xFFFFFFFF
	je Block461

 Block460:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block461:
	lea esp,[ebp-0x2C4]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x60]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x64
	mov esp,ebp
	pop ebp
	ret 0x10
}
}
// CMapLoadable::IsInSafeZone
__SUB_CLASS_THIS(00210720, __thiscall, 19655,  CMapLoadable, int32_t, const tagRECT&) {
__asm {

 Block0:
	sub esp,0x30
	mov edx,ecx
	mov eax,dword ptr [edx+0x134]
	mov dword ptr [esp],edx
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	push ebx
	push ebp
	lea ebx,[eax-1]
	push esi
	push edi
	test ebx,ebx
	jl Block8

 Block3:
	lea ebp,[ebx*8]
	sub ebp,ebx
	add ebp,ebp
	add ebp,ebp
	lea ecx,[ecx]

 Block4:
	mov esi,dword ptr [edx+0x134]
	add esi,ebp
	mov ecx,7
	lea edi,[esp+0x24]
	rep movsd
	mov eax,dword ptr [esp+0x3C]
	cmp dword ptr [eax+0x34],0
	je Block7

 Block5:
	mov edx,dword ptr [esp+0x44]
	lea ecx,[esp+0x24]
	push ecx
	push edx
	lea eax,[esp+0x1C]
	push eax
	call IntersectRect
	test eax,eax
	jne Block9

 Block6:
	mov edx,dword ptr [esp+0x10]

 Block7:
	dec ebx
	sub ebp,0x1C
	test ebx,ebx
	jge Block4

 Block8:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x30
	ret 4

 Block9:
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,0x30
	ret 4
}
}
// CMapLoadable::RenderAvatar
_SUB_EXCEPTION_HANDLER(213610)
__SUB_CLASS_THIS(00213610, __thiscall, 19692,  CMapLoadable, void, NakedParam<_x_com_ptr<IWzCanvas>>, CAvatar*, tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_213610
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x58]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0x24],ebx
	mov esi,dword ptr [esp+0x6C]
	mov ecx,esi
	mov dword ptr [esp+0x60],ebx
	call CAvatar::GetHeight
	test eax,eax
	jg Block2

 Block1:
	mov eax,dword ptr [esp+0x68]
	cmp eax,ebx
	jmp Block136

 Block2:
	lea ecx,[esi+0x1908]
	call TSecType<long>::GetData
	lea ecx,[esi+0x18FC]
	mov dword ptr [esp+0x1C],eax
	call TSecType<long>::GetData
	mov ecx,esi
	mov edi,eax
	call CAvatar::GetHeight
	mov ecx,dword ptr [esi+0x570]
	sub edi,eax
	mov dword ptr [esp+0x20],edi
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x30],ebx
	mov eax,offset _D_RIDING_WILDHUNTE__143+4

 Block3:
	cmp dword ptr [eax],ecx
	je Block7

 Block4:
	add eax,4
	cmp eax,offset _D_DB_DATE_19000101__147
	jl Block3

 Block5:
	mov eax,dword ptr [esi+0x5B8]
	push ebx
	push eax
	mov ecx,esi
	call CAvatar::MoveAction2RawAction
	mov ecx,esi
	mov edi,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block8

 Block6:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	mov edi,eax
	mov dword ptr [esp+0x6C],eax
	jmp Block9

 Block7:
	push ebx
	mov ecx,esi
	call CAvatar::GetCurCharacterAction
	mov edi,eax

 Block8:
	mov dword ptr [esp+0x6C],edi

 Block9:
	mov eax,dword ptr [esi+0x570]
	push eax
	call is_vehicle
	add esp,4
	test eax,eax
	je Block12

 Block10:
	mov ecx,esi
	call CAvatar::IsRidingEx
	test eax,eax
	jne Block12

 Block11:
	mov ecx,dword ptr [esi+0x588]
	mov dword ptr [esp+0x18],ecx
	jmp Block13

 Block12:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	xor ecx,ecx
	cmp eax,0xFFFFFFFF
	setg cl
	imul ecx,0x974
	mov edx,dword ptr [ecx+esi+0x5C0]
	mov dword ptr [esp+0x18],edx
	mov ecx,edx

 Block13:
	lea ebp,[edi+edi*2]
	mov eax,dword ptr [ebp*8+ActionData::m_saCharacterActions+20]
	lea ebp,[ebp*8+ActionData::m_saCharacterActions]
	mov dword ptr [esp+0x28],ebp
	cmp eax,ebx
	je Block16

 Block14:
	cmp dword ptr [eax-4],ecx
	jbe Block16

 Block15:
	mov edx,dword ptr [ebp+0x14]
	mov eax,ecx
	shl eax,5
	mov eax,dword ptr [eax+edx+0x10]
	jmp Block17

 Block16:
	xor eax,eax

 Block17:
	mov edx,dword ptr [esi+0x5B8]
	mov ebx,edx
	and ebx,1
	xor ebx,eax
	jne Block27

 Block18:
	xor eax,eax
	cmp dword ptr [esi+0x548],eax
	setne al
	test eax,eax
	je Block21

 Block19:
	cmp edi,9
	je Block27

 Block20:
	cmp edi,0xA
	jmp Block25

 Block21:
	cmp edi,0x2D
	je Block27

 Block22:
	cmp edi,0x2E
	je Block27

 Block23:
	cmp edi,0x82
	je Block27

 Block24:
	cmp edi,0x81

 Block25:
	je Block27

 Block26:
	xor ebx,ebx
	jmp Block28

 Block27:
	mov ebx,1

 Block28:
	mov eax,dword ptr [ebp+0x14]
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block32

 Block29:
	cmp dword ptr [eax-4],ecx
	jbe Block32

 Block30:
	mov eax,ecx
	mov ecx,dword ptr [ebp+0x14]
	shl eax,5
	mov edi,dword ptr [eax+ecx+0x18]
	mov ecx,dword ptr [eax+ecx+0x1C]
	mov dword ptr [esp+0x40],edi
	mov dword ptr [esp+0x44],ecx
	test dl,1
	jne Block33

 Block31:
	neg edi
	mov dword ptr [esp+0x40],edi
	jmp Block33

 Block32:
	xor ecx,ecx
	mov dword ptr [esp+0x44],ecx
	mov dword ptr [esp+0x40],ecx

 Block33:
	mov eax,dword ptr [ebp+0x14]
	test eax,eax
	je Block38

 Block34:
	mov edi,dword ptr [esp+0x18]
	cmp dword ptr [eax-4],edi
	jbe Block38

 Block35:
	shl edi,5
	test dl,1
	je Block37

 Block36:
	mov eax,dword ptr [edi+eax+0x18]
	neg eax
	jmp Block39

 Block37:
	mov edx,eax
	mov eax,dword ptr [edi+edx+0x18]
	jmp Block39

 Block38:
	xor eax,eax

 Block39:
	mov ebp,dword ptr [esp+0x1C]
	sub ebp,eax
	mov eax,dword ptr [esp+0x20]
	add ecx,eax
	cmp dword ptr [esi+0x548],0
	mov dword ptr [esp+0x38],ebp
	mov dword ptr [esp+0x3C],ecx
	jne Block53

 Block40:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	xor ecx,ecx
	cmp eax,0xFFFFFFFF
	mov eax,dword ptr [esp+0x18]
	setg cl
	imul ecx,0x25D
	add ecx,dword ptr [esp+0x6C]
	mov edx,dword ptr [esi+ecx*4+0x5E4]
	mov eax,dword ptr [edx+eax*8+4]
	mov edx,dword ptr [eax+0x18]
	lea edi,[esi+ecx*4+0x5E4]
	mov ecx,dword ptr [eax+0x14]
	mov dword ptr [esp+0x30],ecx
	mov dword ptr [esp+0x34],edx
	test ebx,ebx
	jne Block42

 Block41:
	neg ecx
	mov dword ptr [esp+0x30],ecx

 Block42:
	mov ecx,esi
	call CAvatar::IsRidingEx
	test eax,eax
	je Block46

 Block43:
	mov ebx,dword ptr [esi+0x5A8]
	cmp ebx,0xFFFFFFFF
	jg Block45

 Block44:
	mov ebx,dword ptr [esi+0x5AC]

 Block45:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	xor ecx,ecx
	cmp eax,0xFFFFFFFF
	setg cl
	imul ecx,0x25D
	add ecx,ebx
	lea ebx,[esi+ecx*4+0xA28]
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	mov ecx,dword ptr [ebx]
	xor edx,edx
	cmp eax,0xFFFFFFFF
	setg dl
	imul edx,0x974
	lea eax,[edx+esi+0x5C0]
	mov eax,dword ptr [eax+0x14]
	mov ebp,dword ptr [ecx+eax*8+4]
	lea eax,[ecx+eax*8]
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	mov ecx,dword ptr [edi]
	mov ebp,dword ptr [ebp+0x28]
	xor edx,edx
	cmp eax,0xFFFFFFFF
	setg dl
	imul edx,0x974
	lea eax,[edx+esi+0x5C0]
	mov eax,dword ptr [eax]
	mov eax,dword ptr [ecx+eax*8+4]
	sub ebp,dword ptr [eax+0x1C]
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	mov ecx,dword ptr [ebx]
	xor edx,edx
	cmp eax,0xFFFFFFFF
	setg dl
	imul edx,0x974
	lea eax,[edx+esi+0x5C0]
	mov eax,dword ptr [eax+0x14]
	mov ebx,dword ptr [ecx+eax*8+4]
	lea eax,[ecx+eax*8]
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	mov ecx,dword ptr [edi]
	mov edi,dword ptr [ebx+0x2C]
	xor edx,edx
	cmp eax,0xFFFFFFFF
	setg dl
	imul edx,0x974
	lea eax,[edx+esi+0x5C0]
	mov eax,dword ptr [eax]
	mov eax,dword ptr [ecx+eax*8+4]
	sub edi,dword ptr [eax+0x20]
	jmp Block48

 Block46:
	mov edx,dword ptr [esi+0x570]
	push edx
	call is_vehicle
	add esp,4
	test eax,eax
	je Block53

 Block47:
	mov ecx,esi
	call CAvatar::GetActionInfo
	mov ecx,dword ptr [esp+0x6C]
	lea ebx,[eax+ecx*4+0x468]
	mov ecx,esi
	call CAvatar::GetActionInfo
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [eax]
	mov eax,dword ptr [edx+eax*8+4]
	mov ecx,dword ptr [esi+0x588]
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+ecx*8+4]
	mov ebp,dword ptr [eax+0x28]
	sub ebp,dword ptr [ecx+0x1C]
	mov ecx,esi
	call CAvatar::GetActionInfo
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [eax]
	mov eax,dword ptr [ecx+eax*8+4]
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [esi+0x588]
	mov ecx,dword ptr [ecx+edx*8+4]
	mov edi,dword ptr [eax+0x2C]
	sub edi,dword ptr [ecx+0x20]

 Block48:
	mov ecx,dword ptr [esi+0x18E4]
	test ecx,ecx
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	call IWzGr2DLayer::Getflip
	test eax,eax
	je Block52

 Block51:
	neg ebp

 Block52:
	add dword ptr [esp+0x38],ebp
	add dword ptr [esp+0x30],ebp
	add dword ptr [esp+0x3C],edi
	mov ebx,dword ptr [esp+0x14]
	mov ebp,dword ptr [esp+0x38]
	add dword ptr [esp+0x34],edi

 Block53:
	mov edi,dword ptr [esp+0x70]
	mov edx,dword ptr [esp+0x20]
	mov eax,dword ptr [esp+0x1C]
	push ebx
	push edi
	push edx
	push eax
	mov eax,dword ptr [esi+0x18E4]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block55

 Block54:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block55:
	push ecx
	mov ecx,dword ptr [esp+0x80]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x80]
	mov dword ptr [esp+0x44],esp
	test eax,eax
	je Block57

 Block56:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block57:
	call draw_layer
	mov ecx,dword ptr [esp+0x54]
	mov eax,dword ptr [esi+0x18D8]
	add esp,0x18
	push ebx
	push edi
	push ecx
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block59

 Block58:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block59:
	push ecx
	mov ecx,dword ptr [esp+0x80]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x80]
	mov dword ptr [esp+0x44],esp
	test eax,eax
	je Block61

 Block60:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block61:
	call draw_layer
	mov ecx,3
	add esp,0x18
	mov word ptr [esp+0x48],cx
	mov dword ptr [esp+0x50],0
	mov ecx,dword ptr [esi+0x18D0]
	mov byte ptr [esp+0x60],1
	mov dword ptr [esp+0x24],1
	test ecx,ecx
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x30]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp dword ptr [eax],0
	sete al
	test al,al
	sete al
	test al,al
	je Block74

 Block64:
	xor eax,eax
	cmp dword ptr [esi+0x548],eax
	setne al
	test eax,eax
	mov eax,dword ptr [esp+0x6C]
	je Block67

 Block65:
	cmp eax,9
	je Block74

 Block66:
	cmp eax,0xA
	jmp Block71

 Block67:
	cmp eax,0x2D
	je Block74

 Block68:
	cmp eax,0x2E
	je Block74

 Block69:
	cmp eax,0x82
	je Block74

 Block70:
	cmp eax,0x81

 Block71:
	je Block74

 Block72:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [ecx+0x14]
	shl eax,5
	cmp dword ptr [eax+edx+0xC],0
	je Block74

 Block73:
	mov bl,1
	jmp Block75

 Block74:
	xor bl,bl

 Block75:
	mov eax,1
	mov dword ptr [esp+0x60],eax
	mov dword ptr [esp+0x24],eax
	mov eax,dword ptr [esp+0x2C]
	xor ebp,ebp
	cmp eax,ebp
	je Block77

 Block76:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block77:
	cmp word ptr [esp+0x48],8
	mov dword ptr [esp+0x60],ebp
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebp
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	test bl,bl
	je Block98

 Block82:
	mov edx,3
	mov word ptr [esp+0x48],dx
	mov dword ptr [esp+0x50],ebp
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi+0x18D0]
	push eax
	mov byte ptr [esp+0x64],dl
	push edi
	cmp ecx,ebp
	jne Block84

 Block83:
	push 0x80004003
	call _com_issue_error

 Block84:
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x38]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov ebp,eax
	lea ecx,[esi+0x18FC]
	mov byte ptr [esp+0x68],4
	call TSecType<long>::GetData
	mov ebp,dword ptr [ebp]
	mov edi,eax
	test ebp,ebp
	jne Block86

 Block85:
	push 0x80004003
	call _com_issue_error

 Block86:
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx+0x74]
	lea edx,[esp+0x74]
	push edx
	push ebp
	mov dword ptr [esp+0x7C],0
	call eax
	test eax,eax
	jge Block88

 Block87:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block88:
	sub edi,dword ptr [esp+0x74]
	lea ecx,[esi+0x1908]
	add edi,dword ptr [esp+0x4C]
	add edi,dword ptr [esp+0x3C]
	push edi
	call TSecType<long>::GetData
	add eax,dword ptr [esp+0x4C]
	add eax,dword ptr [esp+0x3C]
	push eax
	mov eax,dword ptr [esi+0x18D0]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x80],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block90

 Block89:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block90:
	push ecx
	mov ecx,dword ptr [esp+0x80]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x80]
	mov dword ptr [esp+0x84],esp
	test eax,eax
	je Block92

 Block91:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block92:
	call draw_layer
	mov eax,dword ptr [esp+0x44]
	add esp,0x18
	mov byte ptr [esp+0x60],3
	test eax,eax
	je Block94

 Block93:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block94:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x60],0
	jne Block97

 Block95:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	mov edx,3
	mov word ptr [esp+0x48],dx
	mov dword ptr [esp+0x50],0
	mov ecx,dword ptr [esi+0x18E0]
	mov bl,5
	mov byte ptr [esp+0x60],bl
	test ecx,ecx
	jne Block100

 Block99:
	push 0x80004003
	call _com_issue_error

 Block100:
	lea eax,[esp+0x48]
	push eax
	lea edx,[esp+0x30]
	push edx
	call IWzGr2DLayer::Getcanvas
	cmp dword ptr [eax],0
	mov byte ptr [esp+0x60],bl
	sete al
	test al,al
	mov eax,dword ptr [esp+0x2C]
	sete byte ptr [esp+0x6C]
	test eax,eax
	je Block102

 Block101:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block102:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x60],0
	jne Block105

 Block103:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	cmp byte ptr [esp+0x6C],0
	je Block123

 Block107:
	mov edx,3
	mov word ptr [esp+0x48],dx
	mov dword ptr [esp+0x50],0
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x70]
	push eax
	push ecx
	mov ecx,dword ptr [esi+0x18E0]
	mov bl,7
	mov byte ptr [esp+0x68],bl
	test ecx,ecx
	jne Block109

 Block108:
	push 0x80004003
	call _com_issue_error

 Block109:
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x38]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov edi,eax
	lea ecx,[esi+0x18FC]
	mov byte ptr [esp+0x68],8
	call TSecType<long>::GetData
	mov edi,dword ptr [edi]
	mov ebp,eax
	test edi,edi
	jne Block111

 Block110:
	push 0x80004003
	call _com_issue_error

 Block111:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x74]
	lea edx,[esp+0x74]
	push edx
	push edi
	mov dword ptr [esp+0x7C],0
	call eax
	test eax,eax
	jge Block113

 Block112:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block113:
	sub ebp,dword ptr [esp+0x74]
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [esi+0x18E0]
	push ebp
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block115

 Block114:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block115:
	push ecx
	mov ecx,dword ptr [esp+0x80]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x80]
	mov dword ptr [esp+0x40],esp
	test eax,eax
	je Block117

 Block116:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block117:
	call draw_layer
	mov eax,dword ptr [esp+0x44]
	add esp,0x18
	mov byte ptr [esp+0x60],bl
	test eax,eax
	je Block119

 Block118:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block119:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x60],0
	jne Block122

 Block120:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block123:
	mov ebx,dword ptr [esp+0x14]
	mov edi,dword ptr [esp+0x70]
	mov edx,dword ptr [esp+0x20]
	mov ebp,dword ptr [esp+0x1C]
	mov eax,dword ptr [esi+0x18E8]
	push ebx
	push edi
	push edx
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x84],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block125

 Block124:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block125:
	push ecx
	mov ecx,dword ptr [esp+0x80]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x80]
	mov dword ptr [esp+0x88],esp
	test eax,eax
	je Block127

 Block126:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block127:
	call draw_layer
	mov ecx,dword ptr [esp+0x38]
	mov eax,dword ptr [esi+0x18EC]
	add esp,0x18
	push ebx
	push edi
	push ecx
	push ebp
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x84],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block129

 Block128:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block129:
	push ecx
	mov ecx,dword ptr [esp+0x80]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x80]
	mov dword ptr [esp+0x88],esp
	test eax,eax
	je Block131

 Block130:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block131:
	call draw_layer
	mov ecx,dword ptr [esp+0x54]
	mov edx,dword ptr [esp+0x50]
	mov esi,dword ptr [esi+0x18D4]
	add esp,0x18
	push ebx
	push edi
	push ecx
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x84],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block133

 Block132:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block133:
	mov edx,dword ptr [esp+0x7C]
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x80]
	mov dword ptr [esp+0x88],esp
	test eax,eax
	je Block135

 Block134:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block135:
	call draw_layer
	mov eax,dword ptr [esp+0x80]
	add esp,0x18
	test eax,eax

 Block136:
	mov dword ptr [esp+0x60],0xFFFFFFFF
	je Block138

 Block137:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block138:
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret 0xC
}
}
// CMapLoadable::OnLeaveDirectionMode
__SUB_CLASS_THIS0(00210070, __thiscall, 19649,  CMapLoadable, void) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x18],0
	jne Block2

 Block1:
	mov dword ptr [ecx+0x18],0xFFFFFFFF

 Block2:
	jmp  CMapLoadable::PrepareNextBGM
}
}
// Field::BackEffect::Decode
__SUB_CLASS_THIS(00165500, __thiscall, 16489,  Field::BackEffect, void, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,edi
	mov dword ptr [esi+0x10],eax
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi+0x14],eax
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [esi+0x18],ecx
	mov ecx,edi
	call CInPacket::Decode4
	pop edi
	mov dword ptr [esi+0x1C],eax
	pop esi
	ret 4
}
}
// CMapLoadable::Close
_SUB_EXCEPTION_HANDLER(2133D0)
__SUB_CLASS_THIS0(002133D0, __thiscall, 19649,  CMapLoadable, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2133D0
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
	call CStage::FadeOut
	mov ecx,dword ptr [_D_G_GR]
	xor ebp,ebp
	cmp ecx,ebp
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea eax,[esp+0x14]
	push eax
	call IWzGr2D::Getcenter
	mov edi,dword ptr [eax]
	mov dword ptr [esp+0x24],ebp
	cmp edi,ebp
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov edx,dword ptr [_D_VTEMPTY]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [_D_VTEMPTY+4]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [_D_VTEMPTY+8]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [_D_VTEMPTY+12]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push edi
	call eax
	cmp eax,ebp
	jge Block6

 Block5:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block6:
	mov eax,dword ptr [esp+0x14]
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x24],ebx
	cmp eax,ebp
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov ecx,dword ptr [_D_G_GR]
	cmp ecx,ebp
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea eax,[esp+0x18]
	push eax
	call IWzGr2D::Getcenter
	mov edi,dword ptr [eax]
	mov dword ptr [esp+0x24],1
	cmp edi,ebp
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0x40]
	push ebp
	push ebp
	push edi
	call edx
	cmp eax,ebp
	jge Block14

 Block13:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block14:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x24],ebx
	cmp eax,ebp
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov eax,dword ptr [esi+0x30]
	cmp eax,ebp
	je Block18

 Block17:
	mov dword ptr [esi+0x30],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	lea ecx,[esi+0x40]
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	lea ecx,[esi+0x54]
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	lea ecx,[esi+0xE8]
	call ZMap<long, ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>, long>::RemoveAll
	mov ecx,esi
	call CMapLoadable::WeatherLayer_RemoveAll
	lea ecx,[esi+0x7C]
	call ZList<ZRef<CMapLoadable::OBSTACLE>>::RemoveAll
	lea ecx,[esi+0xD0]
	call ZMap<char const *, ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>, ZXString<char>>::RemoveAll
	lea ecx,[esi+0x100]
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	mov eax,dword ptr [esi+0x3C]
	cmp eax,ebp
	je Block23

 Block19:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block22

 Block20:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebp
	je Block22

 Block21:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block22:
	mov dword ptr [esi+0x3C],ebp

 Block23:
	push ebp
	mov dword ptr [esi+0x34],ebp
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push ebp
	call CConfig::ApplySysOpt
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
// CMapLoadable::UpdateObstacleInfo
_SUB_EXCEPTION_HANDLER(21A530)
__SUB_CLASS_THIS0(0021A530, __thiscall, 19649,  CMapLoadable, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_21A530
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xB4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea ecx,[esi+0x134]
	xor ebp,ebp
	mov dword ptr [esp+0x30],ebp
	mov dword ptr [esp+0x60],ecx
	call ZArray<CMapLoadable::OBSTACLE_INFO>::RemoveAll
	mov esi,dword ptr [esi+0x88]
	mov dword ptr [esp+0x48],esi
	cmp esi,ebp
	jne Block4

 Block1:
	mov ecx,dword ptr [esp+0xC8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block3:
	xor ebp,ebp

 Block4:
	lea eax,[esp+0x48]
	push eax
	call ZList<ZRef<CMapLoadable::OBSTACLE>>::GetNext
	mov eax,dword ptr [eax+4]
	mov esi,dword ptr [eax+0xC]
	add esp,4
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x2C],esi
	cmp esi,ebp
	je Block6

 Block5:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block6:
	mov eax,3
	mov dword ptr [esp+0xD0],ebp
	mov word ptr [esp+0x64],ax
	mov dword ptr [esp+0x6C],ebp
	mov byte ptr [esp+0xD0],1
	cmp esi,ebp
	je Block100

 Block7:
	lea ecx,[esp+0x64]
	push ecx
	lea edx,[esp+0x24]
	push edx
	mov ecx,esi
	call IWzGr2DLayer::Getcanvas
	mov esi,8
	mov byte ptr [esp+0xD0],3
	cmp word ptr [esp+0x64],si
	jne Block10

 Block8:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	cmp eax,ebp
	je Block11

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block11

 Block10:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block11:
	mov ecx,dword ptr [esp+0x20]
	cmp ecx,ebp
	je Block100

 Block12:
	lea edx,[esp+0x44]
	push edx
	call IWzCanvas::Getproperty
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x4C],esp
	push 0x1ABE
	push eax
	mov byte ptr [esp+0xE4],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x50]
	mov byte ptr [esp+0xDC],5
	cmp edi,ebp
	je Block100

 Block13:
	lea ecx,[esp+0xC0]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0xE0],4
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xD8],6
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [esp+0x58],ebx
	cmp eax,ebp
	je Block16

 Block14:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x54]
	push ecx
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push eax
	call edx
	cmp eax,ebp
	setl bl
	dec ebx
	and ebx,dword ptr [esp+0x54]
	cmp eax,ebp
	mov dword ptr [esp+0x58],ebx
	jge Block16

 Block15:
	cmp eax,0x80004002
	jne Block101

 Block16:
	mov byte ptr [esp+0xD0],8
	cmp word ptr [esp+0xB4],si
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0xB4],ax
	mov eax,dword ptr [esp+0xBC]
	cmp eax,ebp
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0xB4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x4C],esp
	push 0x1ACB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0xA0]
	mov byte ptr [esp+0xDC],9
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xE0],8
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xD8],0xA
	call Ztl_variant_t::GetUnknown
	xor ebp,ebp
	mov dword ptr [esp+0x40],ebp
	test eax,eax
	je Block23

 Block21:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x5C]
	push edx
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x5C]
	mov ebp,ecx
	mov dword ptr [esp+0x40],ebp
	test eax,eax
	jge Block23

 Block22:
	cmp eax,0x80004002
	jne Block101

 Block23:
	cmp word ptr [esp+0x94],8
	mov byte ptr [esp+0xD0],0xC
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x9C]
	xor edx,edx
	mov word ptr [esp+0x94],dx
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[esp+0x94]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block27:
	lea ecx,[esp+0x50]
	push ecx
	mov ecx,dword ptr [esp+0x30]
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0xD0],0xD
	test esi,esi
	je Block100

 Block28:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[esp+0x1C]
	push eax
	push esi
	mov dword ptr [esp+0x24],0
	call ecx
	test eax,eax
	jge Block30

 Block29:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block30:
	cmp dword ptr [esp+0x1C],0x7E
	mov eax,dword ptr [esp+0x50]
	setl byte ptr [esp+0x17]
	mov byte ptr [esp+0xD0],0xC
	test eax,eax
	je Block32

 Block31:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block32:
	cmp byte ptr [esp+0x17],0
	je Block38

 Block33:
	mov byte ptr [esp+0xD0],8
	test ebp,ebp
	je Block35

 Block34:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block35:
	mov byte ptr [esp+0xD0],4
	test ebx,ebx
	je Block37

 Block36:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block37:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0xD4],3
	call eax
	jmp Block98

 Block38:
	test ebx,ebx
	sete al
	test al,al
	jne Block92

 Block39:
	test ebp,ebp
	sete al
	test al,al
	jne Block92

 Block40:
	test ebp,ebp
	je Block100

 Block41:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x1C]
	push ecx
	push ebp
	mov dword ptr [esp+0x24],0
	call edx
	test eax,eax
	jge Block43

 Block42:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebp
	push eax
	call _com_issue_errorex

 Block43:
	mov esi,dword ptr [esp+0x1C]
	test ebx,ebx
	je Block100

 Block44:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x18]
	push ecx
	push ebx
	mov dword ptr [esp+0x20],0
	call edx
	test eax,eax
	jge Block46

 Block45:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block46:
	sub esi,dword ptr [esp+0x18]
	cmp esi,5
	jge Block53

 Block47:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[esp+0x18]
	push ecx
	push ebp
	mov dword ptr [esp+0x20],0
	call edx
	test eax,eax
	jge Block49

 Block48:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebp
	push eax
	call _com_issue_errorex

 Block49:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x28]
	mov esi,dword ptr [esp+0x18]
	lea ecx,[esp+0x1C]
	push ecx
	push ebx
	mov dword ptr [esp+0x24],0
	call edx
	test eax,eax
	jge Block51

 Block50:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block51:
	sub esi,dword ptr [esp+0x1C]
	cmp esi,5
	jge Block53

 Block52:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0xD4],8
	call ecx
	mov byte ptr [esp+0xD0],4
	jmp Block95

 Block53:
	mov eax,dword ptr [esp+0x3C]
	mov eax,dword ptr [eax+0x1C]
	xor esi,esi
	mov dword ptr [esp+0x18],eax
	test eax,eax
	jne Block55

 Block54:
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push 0x60E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0xAC]
	mov byte ptr [esp+0xD8],0xE
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xDC],0xC
	call IWzProperty::Getitem
	or dword ptr [esp+0x34],1
	push eax
	mov byte ptr [esp+0xD8],0xF
	call get_int32
	add esp,8
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x17],0
	cmp eax,esi
	je Block56

 Block55:
	mov byte ptr [esp+0x17],1

 Block56:
	test byte ptr [esp+0x30],1
	mov dword ptr [esp+0xD0],0xC
	je Block61

 Block57:
	and dword ptr [esp+0x30],0xFFFFFFFE
	cmp word ptr [esp+0xA4],8
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [esp+0xA4],ax
	mov eax,dword ptr [esp+0xAC]
	cmp eax,esi
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[esp+0xA4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	cmp byte ptr [esp+0x17],0
	je Block63

 Block62:
	fild dword ptr [esp+0x18]
	fmul qword ptr [__real_403e000000000000]
	fsubr qword ptr [__real_4056800000000000]
	fst qword ptr [esp+0x34]
	call __CIcos
	fmul qword ptr [__real_4079000000000000]
	call __ftol2_sse
	fld qword ptr [esp+0x34]
	mov dword ptr [esp+0x88],eax
	call __CIsin
	fmul qword ptr [__real_c079000000000000]
	call __ftol2_sse
	mov dword ptr [esp+0x8C],eax
	jmp Block64

 Block63:
	mov dword ptr [esp+0x88],esi
	mov dword ptr [esp+0x8C],esi

 Block64:
	mov edx,dword ptr [esp+0x3C]
	cmp dword ptr [edx+0x10],esi
	je Block74

 Block65:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[esp+0x18]
	push ecx
	push ebp
	mov dword ptr [esp+0x20],esi
	call edx
	cmp eax,esi
	jge Block67

 Block66:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebp
	push eax
	call _com_issue_errorex

 Block67:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [ebx]
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0x38],eax
	mov eax,dword ptr [ecx+0x20]
	push ebx
	mov dword ptr [esp+0x24],esi
	call eax
	cmp eax,esi
	jge Block69

 Block68:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block69:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x28]
	mov esi,dword ptr [esp+0x1C]
	lea edx,[esp+0x24]
	push edx
	push ebx
	mov dword ptr [esp+0x2C],0
	call eax
	test eax,eax
	jge Block71

 Block70:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block71:
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx+0x20]
	mov edi,dword ptr [esp+0x24]
	lea edx,[esp+0x28]
	push edx
	push ebp
	mov dword ptr [esp+0x30],0
	call eax
	test eax,eax
	jge Block73

 Block72:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebp
	push eax
	call _com_issue_errorex

 Block73:
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x28]
	push ecx
	neg esi
	push esi
	push edi
	neg edx
	push edx
	lea eax,[esp+0x88]
	push eax
	call SetRect
	mov ecx,dword ptr [esp+0x88]
	neg ecx
	mov dword ptr [esp+0x88],ecx
	jmp Block83

 Block74:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x28]
	lea eax,[esp+0x28]
	push eax
	push ebp
	mov dword ptr [esp+0x30],esi
	call ecx
	cmp eax,esi
	jge Block76

 Block75:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebp
	push eax
	call _com_issue_errorex

 Block76:
	mov edx,dword ptr [esp+0x28]
	mov eax,dword ptr [ebp]
	lea ecx,[esp+0x24]
	push ecx
	mov dword ptr [esp+0x38],edx
	mov edx,dword ptr [eax+0x20]
	push ebp
	mov dword ptr [esp+0x2C],esi
	call edx
	cmp eax,esi
	jge Block78

 Block77:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebp
	push eax
	call _com_issue_errorex

 Block78:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x28]
	mov edi,dword ptr [esp+0x24]
	lea ecx,[esp+0x18]
	push ecx
	push ebx
	mov dword ptr [esp+0x20],0
	call edx
	test eax,eax
	jge Block80

 Block79:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block80:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x20]
	mov esi,dword ptr [esp+0x18]
	lea ecx,[esp+0x1C]
	push ecx
	push ebx
	mov dword ptr [esp+0x24],0
	call edx
	test eax,eax
	jge Block82

 Block81:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ebx
	push eax
	call _com_issue_errorex

 Block82:
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x1C]
	push eax
	push edi
	push esi
	push ecx
	lea edx,[esp+0x88]
	push edx
	call SetRect

 Block83:
	mov esi,dword ptr [esp+0x2C]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[esp+0x28]
	push ecx
	xor edi,edi
	push esi
	mov dword ptr [esp+0x30],edi
	call edx
	cmp eax,edi
	jge Block85

 Block84:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block85:
	mov eax,dword ptr [esp+0x28]
	mov esi,dword ptr [esp+0x20]
	mov ecx,dword ptr [esi]
	lea edx,[esp+0x24]
	push edx
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [ecx+0x74]
	push esi
	mov dword ptr [esp+0x2C],edi
	call eax
	cmp eax,edi
	jge Block87

 Block86:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block87:
	mov esi,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	mov edi,dword ptr [esp+0x24]
	lea edx,[esp+0x4C]
	push edx
	push esi
	mov dword ptr [esp+0x54],0
	call eax
	test eax,eax
	jge Block89

 Block88:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block89:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax]
	mov esi,dword ptr [esp+0x4C]
	lea edx,[esp+0x34]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x6C]
	mov dword ptr [esp+0x3C],0
	call eax
	test eax,eax
	jge Block91

 Block90:
	mov ecx,dword ptr [esp+0x20]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block91:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x34]
	add edi,edx
	push edi
	add eax,esi
	push eax
	lea ecx,[esp+0x80]
	push ecx
	call OffsetRect
	mov edx,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esp+0x60]
	push 0xFFFFFFFF
	mov dword ptr [esp+0x94],edx
	call ZArray<CMapLoadable::OBSTACLE_INFO>::InsertBefore
	mov edi,eax
	mov ecx,7
	lea esi,[esp+0x78]
	rep movsd
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0xD4],8
	call ecx
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov byte ptr [esp+0xD4],4
	call eax
	mov eax,dword ptr [esp+0x44]
	mov ecx,dword ptr [eax]
	push eax
	jmp Block97

 Block92:
	mov byte ptr [esp+0xD0],8
	test ebp,ebp
	je Block94

 Block93:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block94:
	mov byte ptr [esp+0xD0],4
	test ebx,ebx
	je Block96

 Block95:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block96:
	mov ecx,dword ptr [edi]
	push edi

 Block97:
	mov edx,dword ptr [ecx+8]
	mov byte ptr [esp+0xD4],3
	call edx

 Block98:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xD4],0
	call edx
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [esp+0xD4],0xFFFFFFFF
	call edx
	cmp dword ptr [esp+0x48],0
	jne Block3

 Block99:
	mov ecx,dword ptr [esp+0xC8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block100:
	push 0x80004003
	call _com_issue_error

 Block101:
	push eax
	call _com_issue_error
}
}
// CMapLoadable::FootHoldStateChange
_SUB_EXCEPTION_HANDLER(220240)
__SUB_CLASS_THIS(00220240, __thiscall, 19666,  CMapLoadable, void, const char*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_220240
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	push 0
	lea eax,[esp+0x34]
	push eax
	add ecx,0xB8
	call ZMap<char const *, CMapLoadable::CHANGING_OBJECT, ZXString<char>>::GetAt
	mov ecx,eax
	mov dword ptr [esp+0x18],ecx
	test ecx,ecx
	je Block21

 Block1:
	mov dword ptr [esp+0x30],0
	xor ebp,ebp

 Block2:
	mov eax,dword ptr [ecx+8]
	test eax,eax
	je Block21

 Block3:
	mov edx,dword ptr [esp+0x30]
	cmp edx,dword ptr [eax-4]
	jae Block21

 Block4:
	mov edi,eax
	mov ecx,dword ptr [edi+ebp+8]
	add edi,ebp
	cmp dword ptr [esp+0x34],0
	jne Block10

 Block5:
	test ecx,ecx
	je Block20

 Block6:
	lea eax,[esp+0x10]
	push eax
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x28],0
	test esi,esi
	je Block20

 Block7:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x40]
	push 0
	push 0
	push esi
	call edx
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block9:
	mov eax,dword ptr [esp+0x10]
	jmp Block15

 Block10:
	test ecx,ecx
	je Block20

 Block11:
	lea eax,[esp+0x14]
	push eax
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x28],1
	test esi,esi
	je Block20

 Block12:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x40]
	push 0
	push 0xFF
	push esi
	call edx
	test eax,eax
	jge Block14

 Block13:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	mov eax,dword ptr [esp+0x14]

 Block15:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	mov eax,dword ptr [edi]
	push eax
	mov eax,dword ptr [edi+8]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block19:
	call CMapLoadable::AnimateObjLayer
	inc dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x20]
	add esp,8
	add ebp,0x10
	jmp Block2

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x1C
	ret 8
}
}
// CMapLoadable::PlayNextMusic
_SUB_EXCEPTION_HANDLER(21DAB0)
__SUB_CLASS_THIS0(0021DAB0, __thiscall, 19649,  CMapLoadable, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_21DAB0
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
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	xor ebx,ebx
	push ebx
	push 0x3E8
	push ebx
	push ebx
	push ebx
	call CSoundMan::PlayBGM
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push ebx
	push ebx
	call CConfig::ApplySysOpt
	mov eax,dword ptr [esi+0x18]
	cmp eax,0xFFFFFFFF
	jne Block2

 Block1:
	mov ecx,esi
	call CMapLoadable::RestoreBGM
	mov dword ptr [esi+0x20],ebx
	mov dword ptr [esi+0x18],ebx
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret

 Block2:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea eax,[esp+0x14]
	push eax
	call CItemInfo::GetItemInfo
	mov eax,dword ptr [esp+0x10]
	cmp eax,ebx
	sete cl
	mov dword ptr [esp+0x30],ebx
	cmp cl,bl
	je Block5

 Block3:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block18

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret

 Block5:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0x734
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],1
	cmp ecx,ebx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x38],bl
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [esp+0x30],2
	jne Block9

 Block8:
	mov eax,dword ptr [eax+8]
	jmp Block10

 Block9:
	mov eax,offset _S___3

 Block10:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString16::Assign
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x30],4
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebx
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov edi,dword ptr [esp+0x14]
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 1
	push 0x3E8
	push 0x3E8
	push 1
	push edi
	call CSoundMan::PlayBGM
	mov dword ptr [esi+0x20],1
	mov dword ptr [esi+0x18],ebx
	mov byte ptr [esp+0x30],bl
	cmp edi,ebx
	je Block16

 Block15:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block18

 Block17:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block18:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret
}
}
// CMapLoadable::TransientLayer_FireCracker
_SUB_EXCEPTION_HANDLER(21D7C0)
__SUB_CLASS_THIS(0021D7C0, __thiscall, 19689,  CMapLoadable, void, NakedParam<ZXString16>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_21D7C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	xor ebx,ebx
	mov dword ptr [esp+0x58],ebx
	call CMapLoadable::WeatherLayer_RemoveAll
	mov eax,0xC8
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x20],0x320
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x24],0x258
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x2C],1
	mov dword ptr [esp+0x30],0x3E8
	mov dword ptr [esp+0x34],5
	mov dword ptr [esp+0x38],0x1F4
	mov dword ptr [esp+0x3C],3
	mov dword ptr [esp+0x40],0x12C
	mov dword ptr [esp+0x44],2
	mov dword ptr [esp+0x48],eax
	mov dword ptr [esp+0x4C],1
	xor esi,esi

 Block1:
	mov dword ptr [esp+0x10],ebx
	lea eax,[esp+0x14]
	push 0xC20
	push eax
	mov byte ptr [esp+0x60],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x60]
	mov eax,dword ptr [eax]
	push esi
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x68],2
	call ZXString16::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0x10
	mov byte ptr [esp+0x58],1
	cmp eax,ebx
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block3:
	mov eax,dword ptr [esp+esi*8+0x2C]
	mov ecx,dword ptr [esp+esi*8+0x28]
	mov edi,dword ptr [esp+0x10]
	push 0x7530
	push 0xC8
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	lea edx,[esp+0x28]
	push edx
	push edi
	call CAnimationDisplayer::RegisterFireCrackerAnimation
	mov byte ptr [esp+0x58],bl
	cmp edi,ebx
	je Block5

 Block4:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block5:
	inc esi
	cmp esi,5
	jb Block1

 Block6:
	mov eax,dword ptr [esp+0x60]
	mov dword ptr [esp+0x58],0xFFFFFFFF
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block8:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x4C
	ret 4
}
}
// CMapLoadable::OnSetMapObjectVisible
_SUB_EXCEPTION_HANDLER(21AE00)
__SUB_CLASS_THIS(0021AE00, __thiscall, 19694,  CMapLoadable, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_21AE00
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
	mov edi,ecx
	mov esi,dword ptr [esp+0x20]
	mov ecx,esi
	call CInPacket::Decode1
	movzx eax,al
	test eax,eax
	jle Block6

 Block1:
	mov dword ptr [esp+0xC],eax
	jmp Block3

 Block3:
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov ecx,esi
	mov dword ptr [esp+0x18],0
	call CInPacket::Decode1
	movzx eax,al
	push eax
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,edi
	call CMapLoadable::SetMapObjectVisible
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	sub dword ptr [esp+0xC],1
	jne Block3

 Block6:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CMapLoadable::GetCollideObstacleRect
_SUB_EXCEPTION_HANDLER(212660)
__SUB_CLASS_THIS(00212660, __thiscall, 19654,  CMapLoadable, int32_t, const tagRECT&, long&, unsigned long&, tagPOINT&, unsigned long&, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_212660
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
	mov edx,ecx
	mov dword ptr [esp+0x14],edx
	mov eax,dword ptr [esp+0x64]
	mov dword ptr [eax+4],0
	mov dword ptr [eax],0
	mov eax,dword ptr [edx+0x134]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	lea ebp,[eax-1]
	test ebp,ebp
	jl Block11

 Block3:
	lea ebx,[ebp*8]
	sub ebx,ebp
	add ebx,ebx
	add ebx,ebx
	nop

 Block4:
	mov esi,dword ptr [edx+0x134]
	add esi,ebx
	mov ecx,7
	lea edi,[esp+0x2C]
	rep movsd
	mov edi,dword ptr [esp+0x6C]
	test edi,edi
	je Block6

 Block5:
	mov eax,dword ptr [esp+0x44]
	cmp dword ptr [eax+0x18],0
	je Block10

 Block6:
	mov edx,dword ptr [esp+0x58]
	lea ecx,[esp+0x2C]
	push ecx
	push edx
	lea eax,[esp+0x24]
	push eax
	call IntersectRect
	test eax,eax
	je Block9

 Block7:
	mov eax,dword ptr [esp+0x44]
	test edi,edi
	je Block14

 Block8:
	cmp dword ptr [eax+0x18],0
	jne Block13

 Block9:
	mov edx,dword ptr [esp+0x14]

 Block10:
	dec ebp
	sub ebx,0x1C
	test ebp,ebp
	jge Block4

 Block11:
	xor eax,eax

 Block12:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 0x18

 Block13:
	mov ecx,dword ptr [eax+0x18]
	jmp Block15

 Block14:
	mov ecx,dword ptr [eax+0x14]

 Block15:
	cmp ecx,0xA
	mov ebp,dword ptr [esp+0x5C]
	mov dword ptr [ebp],ecx
	jle Block19

 Block16:
	mov eax,0x66666667
	imul ecx
	sar edx,2
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	sub ecx,eax
	mov ebx,ecx
	mov ecx,offset _D_G_RAND
	lea esi,[eax+eax+1]
	call CRand32::Random
	test esi,esi
	je Block18

 Block17:
	xor edx,edx
	div esi
	mov eax,edx
	add eax,ebx

 Block18:
	mov dword ptr [ebp],eax
	mov eax,dword ptr [esp+0x44]

 Block19:
	cmp dword ptr [ebp],0
	jle Block23

 Block20:
	cmp dword ptr [eax+0x20],0
	je Block23

 Block21:
	cmp dword ptr [eax+0x24],0
	je Block23

 Block22:
	mov cx,word ptr [eax+0x20]
	shl cx,8
	movzx edx,cx
	movzx ecx,byte ptr [eax+0x24]
	or edx,ecx
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr [ecx],edx
	jmp Block24

 Block23:
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [edx],0

 Block24:
	mov ecx,dword ptr [esp+0x64]
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [ecx],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [ecx+4],edx
	mov ecx,dword ptr [eax+0x30]
	mov edx,dword ptr [esp+0x68]
	mov dword ptr [edx],ecx
	test edi,edi
	jne Block33

 Block25:
	cmp dword ptr [eax+0x28],edi
	jl Block33

 Block26:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x14]
	push eax
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	mov dword ptr [esp+0x58],edi
	call _ZtlSecureFuseHelper<long>::call
	mov esi,eax
	mov eax,dword ptr [esp+0x20]
	add esp,8
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test eax,eax
	je Block30

 Block27:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block30

 Block28:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block30

 Block29:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block30:
	mov ecx,dword ptr [esp+0x44]
	mov eax,dword ptr [ecx+0x28]
	cmp esi,eax
	jle Block32

 Block31:
	sub esi,eax

 Block32:
	mov dword ptr [ebp],esi

 Block33:
	mov eax,1
	jmp Block12
}
}
// Field::BackEffect::~BackEffect
__SUB_CLASS_THIS0(0020FE50, __thiscall, 16487,  Field::BackEffect, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset ZRefCounted::`vftable'
	ret
}
}
// CMapLoadable::MakeGrid
_SUB_EXCEPTION_HANDLER(214F70)
__SUB_CLASS_THIS(00214F70, __thiscall, 19682,  CMapLoadable, void, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long, long, long, long, long, int32_t, NakedParam<ZRef<ZList<_x_com_ptr<IWzGr2DLayer> > >>, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_214F70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1D8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1EC]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x2C],ecx
	xor ebx,ebx
	mov dword ptr [esp+0x1F4],ebx
	mov esi,dword ptr [ecx+0x3C]
	mov eax,3
	mov dword ptr [esp+0x24],esi
	mov word ptr [esp+0x12C],ax
	mov dword ptr [esp+0x134],ebx
	mov ecx,dword ptr [esp+0x1FC]
	mov byte ptr [esp+0x1F4],2
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x12C]
	push edx
	lea eax,[esp+0x48]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x12C],8
	mov byte ptr [esp+0x1F4],4
	jne Block5

 Block3:
	mov eax,dword ptr [esp+0x134]
	xor ecx,ecx
	mov word ptr [esp+0x12C],cx
	cmp eax,ebx
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea edx,[esp+0x12C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block6:
	mov edi,dword ptr [esp+0x44]
	cmp edi,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x6C]
	lea ecx,[esp+0x4C]
	push ecx
	push edi
	mov dword ptr [esp+0x54],ebx
	call edx
	cmp eax,ebx
	jge Block10

 Block9:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block10:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x3C]
	push ecx
	push edi
	mov dword ptr [esp+0x44],ebx
	call edx
	cmp eax,ebx
	jge Block12

 Block11:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block12:
	mov ebp,dword ptr [esp+0x204]
	cmp ebp,ebx
	jne Block23

 Block13:
	cmp dword ptr [esp+0x214],ebx
	je Block15

 Block14:
	mov ebp,dword ptr [esi+0x2C]
	sub ebp,dword ptr [esi+0x24]
	jmp Block22

 Block15:
	mov eax,dword ptr [esp+0x1FC]
	cmp eax,ebx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x1C]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0xB8]
	mov dword ptr [esp+0x24],ebx
	call eax
	cmp eax,ebx
	jge Block19

 Block18:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block19:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x58]
	mov esi,dword ptr [esp+0x1C]
	lea edx,[esp+0x18]
	push edx
	push edi
	mov dword ptr [esp+0x20],ebx
	call eax
	cmp eax,ebx
	jge Block21

 Block20:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block21:
	mov ecx,dword ptr [esp+0x18]
	mov edx,1
	shl edx,cl
	sub esi,edx
	inc esi
	mov ebp,esi

 Block22:
	mov dword ptr [esp+0x204],ebp

 Block23:
	mov ebx,dword ptr [esp+0x208]
	test ebx,ebx
	jne Block34

 Block24:
	cmp dword ptr [esp+0x214],ebx
	je Block26

 Block25:
	mov eax,dword ptr [esp+0x24]
	mov ebx,dword ptr [eax+0x30]
	sub ebx,dword ptr [eax+0x28]
	jmp Block33

 Block26:
	mov eax,dword ptr [esp+0x1FC]
	test eax,eax
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x1C]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0xC0]
	xor ebx,ebx
	mov dword ptr [esp+0x24],ebx
	call eax
	cmp eax,ebx
	jge Block30

 Block29:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block30:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x58]
	mov esi,dword ptr [esp+0x1C]
	lea edx,[esp+0x18]
	push edx
	push edi
	mov dword ptr [esp+0x20],ebx
	call eax
	cmp eax,ebx
	jge Block32

 Block31:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block32:
	mov ecx,dword ptr [esp+0x18]
	mov edx,1
	shl edx,cl
	sub esi,edx
	inc esi
	mov ebx,esi

 Block33:
	mov dword ptr [esp+0x208],ebx

 Block34:
	mov edi,dword ptr [esp+0x200]
	mov eax,edi
	and eax,1
	mov dword ptr [esp+0x34],eax
	je Block38

 Block35:
	mov esi,1
	test ebp,ebp
	je Block37

 Block36:
	mov esi,ebp

 Block37:
	call get_screen_width
	mov ecx,dword ptr [esp+0x204]
	lea eax,[eax+ecx*2-2]
	cdq
	idiv esi
	mov ebp,eax
	imul ebp,ecx
	jmp Block39

 Block38:
	xor ebp,ebp

 Block39:
	and edi,2
	mov dword ptr [esp+0x38],ebp
	mov dword ptr [esp+0x48],edi
	je Block43

 Block40:
	mov esi,1
	test ebx,ebx
	je Block42

 Block41:
	mov esi,ebx

 Block42:
	call get_screen_height
	lea eax,[eax+ebx*2-2]
	cdq
	idiv esi
	imul eax,ebx
	jmp Block44

 Block43:
	xor eax,eax

 Block44:
	mov dword ptr [esp+0x40],eax
	add eax,ebx
	mov dword ptr [esp+0x1C],0
	mov dword ptr [esp+0x24],eax
	test eax,eax
	jle Block247

 Block45:
	mov edx,dword ptr [esp+0x204]
	add ebp,edx
	mov dword ptr [esp+0x18],ebp

 Block46:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x28],0
	jle Block246

 Block47:
	lea esp,[esp]

 Block48:
	lea eax,[esp+0x16C]
	push eax
	mov edi,8
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x16C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebx,ebx
	add esp,8
	cmp eax,ebx
	jl Block255

 Block49:
	mov edx,3
	mov word ptr [esp+0x10C],dx
	mov dword ptr [esp+0x114],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x1F4],6
	cmp ecx,ebx
	je Block1

 Block50:
	lea eax,[esp+0x16C]
	push eax
	lea edx,[esp+0x110]
	push edx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea eax,[esp+0x3C]
	push eax
	call IWzGr2D::CreateLayer
	mov byte ptr [esp+0x1F4],8
	cmp word ptr [esp+0x10C],di
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x114]
	xor ecx,ecx
	mov word ptr [esp+0x10C],cx
	cmp eax,ebx
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[esp+0x10C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov byte ptr [esp+0x1F4],9
	cmp word ptr [esp+0x16C],di
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0x16C],ax
	mov eax,dword ptr [esp+0x174]
	cmp eax,ebx
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[esp+0x16C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov dword ptr [esp+0x30],ebx

 Block59:
	mov eax,dword ptr [esp+0x1FC]
	test eax,eax
	je Block1

 Block60:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x1C]
	lea ecx,[esp+0x14]
	push ecx
	push eax
	mov esi,eax
	mov dword ptr [esp+0x1C],0
	call edx
	test eax,eax
	jge Block62

 Block61:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block62:
	cmp ebx,dword ptr [esp+0x14]
	jae Block127

 Block63:
	mov eax,3
	mov word ptr [esp+0x14C],ax
	mov dword ptr [esp+0x154],ebx
	mov ecx,dword ptr [esp+0x1FC]
	mov byte ptr [esp+0x1F4],0xA
	test ecx,ecx
	je Block1

 Block64:
	lea edx,[esp+0x14C]
	push edx
	lea eax,[esp+0x10C]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov byte ptr [esp+0x1F4],0xC
	cmp word ptr [esp+0x14C],di
	jne Block67

 Block65:
	mov eax,dword ptr [esp+0x154]
	xor ecx,ecx
	mov word ptr [esp+0x14C],cx
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea edx,[esp+0x14C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	push 0x78
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1AA9
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,dword ptr [esp+0x110]
	mov byte ptr [esp+0x1FC],0xD
	test ebp,ebp
	je Block1

 Block69:
	lea ecx,[esp+0xF4]
	push ecx
	mov ecx,ebp
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x1FC],0xE
	test ecx,ecx
	je Block1

 Block70:
	lea edx,[esp+0x1A4]
	push edx
	mov byte ptr [esp+0x200],0xF
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x1FC],0x10
	call get_int32
	add esp,8
	mov ebx,eax
	mov byte ptr [esp+0x1F4],0xF
	cmp word ptr [esp+0x19C],di
	jne Block73

 Block71:
	xor eax,eax
	mov word ptr [esp+0x19C],ax
	mov eax,dword ptr [esp+0x1A4]
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea ecx,[esp+0x19C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block74:
	mov eax,dword ptr [esp+0xEC]
	mov byte ptr [esp+0x1F4],0xC
	test eax,eax
	je Block76

 Block75:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block76:
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A98
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x104]
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x200],0x11
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x1FC],0x12
	test ecx,ecx
	je Block1

 Block77:
	lea eax,[esp+0x1D4]
	push eax
	mov byte ptr [esp+0x200],0x13
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x1FC],0x14
	call get_int32
	add esp,8
	cmp word ptr [esp+0x1CC],8
	mov edi,eax
	mov byte ptr [esp+0x1F4],0x13
	jne Block80

 Block78:
	mov eax,dword ptr [esp+0x1D4]
	xor ecx,ecx
	mov word ptr [esp+0x1CC],cx
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea edx,[esp+0x1CC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov eax,dword ptr [esp+0xFC]
	mov byte ptr [esp+0x1F4],0xC
	test eax,eax
	je Block83

 Block82:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block83:
	push 0xFFFFFFFF
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1A99
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0xFC]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x200],0x15
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x1FC],0x16
	test ecx,ecx
	je Block1

 Block84:
	lea edx,[esp+0x1B4]
	push edx
	mov byte ptr [esp+0x200],0x17
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x1FC],0x18
	call get_int32
	add esp,8
	cmp word ptr [esp+0x1AC],8
	mov esi,eax
	mov byte ptr [esp+0x1F4],0x17
	jne Block87

 Block85:
	xor eax,eax
	mov word ptr [esp+0x1AC],ax
	mov eax,dword ptr [esp+0x1B4]
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea ecx,[esp+0x1AC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block88:
	mov eax,dword ptr [esp+0xF4]
	mov byte ptr [esp+0x1F4],0xC
	test eax,eax
	je Block90

 Block89:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block90:
	mov ecx,dword ptr [esp+0x2C]
	mov eax,dword ptr [ecx+0x118]
	test eax,eax
	jle Block93

 Block91:
	mov edx,dword ptr [ebp]
	push eax
	mov eax,dword ptr [edx+0x5C]
	push ebp
	call eax
	test eax,eax
	jge Block93

 Block92:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block93:
	mov ecx,dword ptr [esp+0x20C]
	cmp ecx,0xFF
	je Block98

 Block94:
	mov eax,0xFF
	sub eax,ecx
	test edi,edi
	jl Block96

 Block95:
	mov ecx,edi
	sub ecx,eax
	mov edx,0
	sets dl
	dec edx
	and edx,ecx
	mov edi,edx

 Block96:
	test esi,esi
	jl Block98

 Block97:
	mov ecx,esi
	sub ecx,eax
	mov eax,0
	sets al
	dec eax
	and eax,ecx
	mov esi,eax

 Block98:
	lea ecx,[esp+0x13C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x13C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block255

 Block99:
	lea eax,[esp+0x11C]
	push eax
	mov byte ptr [esp+0x1F8],0x19
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x11C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block255

 Block100:
	mov edx,3
	mov word ptr [esp+0x15C],dx
	mov dword ptr [esp+0x164],esi
	mov eax,edx
	mov word ptr [esp+0x17C],ax
	mov dword ptr [esp+0x184],edi
	mov ecx,edx
	mov word ptr [esp+0x18C],cx
	mov dword ptr [esp+0x194],ebx
	cmp dword ptr [esp+0x20],0
	mov byte ptr [esp+0x1F4],0x1D
	je Block1

 Block101:
	lea edx,[esp+0x13C]
	push edx
	lea eax,[esp+0x120]
	push eax
	lea ecx,[esp+0x164]
	push ecx
	lea edx,[esp+0x188]
	push edx
	lea eax,[esp+0x19C]
	push eax
	push ebp
	lea ecx,[esp+0x1D4]
	push ecx
	mov ecx,dword ptr [esp+0x3C]
	call IWzGr2DLayer::InsertCanvas
	mov edi,8
	cmp word ptr [esp+0x1BC],di
	jne Block108

 Block102:
	mov eax,dword ptr [esp+0x1C4]
	xor edx,edx
	mov word ptr [esp+0x1BC],dx
	test eax,eax
	je Block104

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block104:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block105:
	mov byte ptr [esp+0x1F4],0x1C
	cmp word ptr [esp+0x18C],di
	jne Block109

 Block106:
	mov eax,dword ptr [esp+0x194]
	xor ecx,ecx
	mov word ptr [esp+0x18C],cx
	test eax,eax
	je Block110

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block108:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x1BC]
	push eax
	call esi
	jmp Block105

 Block109:
	lea edx,[esp+0x18C]
	push edx
	call esi

 Block110:
	mov byte ptr [esp+0x1F4],0x1B
	cmp word ptr [esp+0x17C],di
	jne Block113

 Block111:
	xor eax,eax
	mov word ptr [esp+0x17C],ax
	mov eax,dword ptr [esp+0x184]
	test eax,eax
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea ecx,[esp+0x17C]
	push ecx
	call esi

 Block114:
	mov byte ptr [esp+0x1F4],0x1A
	cmp word ptr [esp+0x15C],di
	jne Block117

 Block115:
	mov eax,dword ptr [esp+0x164]
	xor edx,edx
	mov word ptr [esp+0x15C],dx
	test eax,eax
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea eax,[esp+0x15C]
	push eax
	call esi

 Block118:
	mov byte ptr [esp+0x1F4],0x19
	cmp word ptr [esp+0x11C],di
	jne Block121

 Block119:
	mov eax,dword ptr [esp+0x124]
	xor ecx,ecx
	mov word ptr [esp+0x11C],cx
	test eax,eax
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea edx,[esp+0x11C]
	push edx
	call esi

 Block122:
	mov byte ptr [esp+0x1F4],0xC
	cmp word ptr [esp+0x13C],di
	jne Block125

 Block123:
	xor eax,eax
	mov word ptr [esp+0x13C],ax
	mov eax,dword ptr [esp+0x144]
	test eax,eax
	je Block126

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block126

 Block125:
	lea ecx,[esp+0x13C]
	push ecx
	call esi

 Block126:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	mov byte ptr [esp+0x1F8],9
	call eax
	inc dword ptr [esp+0x30]
	mov ebx,dword ptr [esp+0x30]
	jmp Block59

 Block127:
	mov ecx,dword ptr [esp+0x1FC]
	test ecx,ecx
	je Block1

 Block128:
	lea edx,[esp+0xE8]
	push edx
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x1F4],0x1E
	test ecx,ecx
	je Block1

 Block129:
	lea eax,[esp+0x1DC]
	push eax
	call IWzVector2D::Getorigin
	mov edi,eax
	mov ebx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x1F4],0x1F
	test ebx,ebx
	je Block1

 Block130:
	lea ecx,[esp+0xE4]
	push ecx
	mov ecx,ebx
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x1F4],0x20
	test esi,esi
	je Block1

 Block131:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x64]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [edi+4]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [edi+8]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [edi+0xC]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block133

 Block132:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block133:
	mov eax,dword ptr [esp+0xE4]
	mov byte ptr [esp+0x1F4],0x1F
	test eax,eax
	je Block135

 Block134:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block135:
	mov ebp,8
	mov byte ptr [esp+0x1F4],0x1E
	cmp word ptr [esp+0x1DC],bp
	jne Block138

 Block136:
	xor eax,eax
	mov word ptr [esp+0x1DC],ax
	mov eax,dword ptr [esp+0x1E4]
	test eax,eax
	je Block139

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block139

 Block138:
	lea ecx,[esp+0x1DC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block139:
	mov eax,dword ptr [esp+0xE8]
	mov byte ptr [esp+0x1F4],9
	test eax,eax
	je Block141

 Block140:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block141:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x80]
	push ecx
	call edi
	lea edx,[esp+0x80]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block255

 Block142:
	lea eax,[esp+0x50]
	push eax
	mov byte ptr [esp+0x1F8],0x21
	call edi
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block255

 Block143:
	lea edx,[esp+0xF0]
	push edx
	mov ecx,ebx
	mov byte ptr [esp+0x1F8],0x22
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x1F4],0x23
	test esi,esi
	je Block1

 Block144:
	mov edx,dword ptr [esp+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x94]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x98]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x9C]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [esp+0x60]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x74]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x78]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x7C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x3C]
	sub eax,dword ptr [esp+0x5C]
	mov edx,dword ptr [esp+0x48]
	sub edx,dword ptr [esp+0x6C]
	push eax
	mov eax,dword ptr [ecx+0x90]
	push edx
	push esi
	call eax
	test eax,eax
	jge Block146

 Block145:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block146:
	mov eax,dword ptr [esp+0xF0]
	mov byte ptr [esp+0x1F4],0x22
	test eax,eax
	je Block148

 Block147:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block148:
	mov byte ptr [esp+0x1F4],0x21
	cmp word ptr [esp+0x50],bp
	jne Block151

 Block149:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block152

 Block150:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block152

 Block151:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block152:
	mov byte ptr [esp+0x1F4],9
	cmp word ptr [esp+0x80],bp
	jne Block155

 Block153:
	mov eax,dword ptr [esp+0x88]
	xor edx,edx
	mov word ptr [esp+0x80],dx
	test eax,eax
	je Block156

 Block154:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block156

 Block155:
	lea eax,[esp+0x80]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block156:
	lea ecx,[esp+0x60]
	push ecx
	call edi
	lea edx,[esp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block255

 Block157:
	cmp dword ptr [esp+0x48],0
	mov byte ptr [esp+0x1F4],0x24
	je Block159

 Block158:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x14],eax
	jmp Block160

 Block159:
	mov dword ptr [esp+0x14],0xFFFF

 Block160:
	cmp dword ptr [esp+0x34],0
	mov ebx,dword ptr [esp+0x18]
	jne Block162

 Block161:
	mov ebx,0xFFFF

 Block162:
	cmp dword ptr [esp+0x48],0
	je Block164

 Block163:
	call get_adjust_cy
	mov ebp,dword ptr [esp+0x208]
	mov ecx,eax
	mov eax,dword ptr [esp+0x40]
	cdq
	sub eax,edx
	sar eax,1
	neg ebp
	sub ebp,eax
	sub ebp,ecx
	jmp Block165

 Block164:
	mov ebp,0xFFFF8001

 Block165:
	cmp dword ptr [esp+0x34],0
	je Block167

 Block166:
	mov eax,dword ptr [esp+0x38]
	mov edi,dword ptr [esp+0x204]
	cdq
	sub eax,edx
	sar eax,1
	neg edi
	sub edi,eax
	jmp Block168

 Block167:
	mov edi,0xFFFF8001

 Block168:
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	je Block1

 Block169:
	lea edx,[esp+0x100]
	push edx
	call IWzGr2D::Getcenter
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x1F4],0x25
	mov word ptr [esp+0xC0],cx
	mov dword ptr [esp+0xC8],eax
	test eax,eax
	je Block171

 Block170:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block171:
	lea ecx,[esp+0xF8]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0x1F8],0x26
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x1F4],0x27
	test esi,esi
	je Block1

 Block172:
	mov ecx,dword ptr [esp+0x60]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x74]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x7C]
	mov edx,dword ptr [esi]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0xD0]
	mov edx,dword ptr [edx+0x9C]
	push eax
	push ebx
	push ebp
	push edi
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0xF4]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0xF8]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0xFC]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block174

 Block173:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block174:
	mov eax,dword ptr [esp+0xF8]
	mov byte ptr [esp+0x1F4],0x26
	test eax,eax
	je Block176

 Block175:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block176:
	mov esi,8
	mov byte ptr [esp+0x1F4],0x25
	cmp word ptr [esp+0xC0],si
	jne Block179

 Block177:
	xor eax,eax
	mov word ptr [esp+0xC0],ax
	mov eax,dword ptr [esp+0xC8]
	test eax,eax
	je Block180

 Block178:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block180

 Block179:
	lea ecx,[esp+0xC0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block180:
	mov eax,dword ptr [esp+0x100]
	mov byte ptr [esp+0x1F4],0x24
	test eax,eax
	je Block182

 Block181:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block182:
	mov byte ptr [esp+0x1F4],9
	cmp word ptr [esp+0x60],si
	jne Block185

 Block183:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	test eax,eax
	je Block186

 Block184:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block186

 Block185:
	lea edx,[esp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block186:
	mov eax,0xD
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x1FC]
	mov dword ptr [esp+0x78],eax
	test eax,eax
	je Block188

 Block187:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block188:
	mov edx,dword ptr [esp+0x70]
	mov edi,dword ptr [esp+0x20]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x84]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x88]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x8C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push edi
	mov byte ptr [esp+0x208],0x28
	call eax
	test eax,eax
	jge Block190

 Block189:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block190:
	mov byte ptr [esp+0x1F4],9
	cmp word ptr [esp+0x70],si
	jne Block193

 Block191:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	test eax,eax
	je Block194

 Block192:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block194

 Block193:
	lea edx,[esp+0x70]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block194:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push edi
	call ecx
	test eax,eax
	jge Block196

 Block195:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block196:
	mov edx,dword ptr [esp+0x2C]
	cmp dword ptr [edx+0x34],0
	je Block199

 Block197:
	mov ecx,dword ptr [esp+0x220]
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xE0]
	push ecx
	push edi
	call edx
	test eax,eax
	jge Block199

 Block198:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block199:
	mov eax,dword ptr [esp+0x1FC]
	test eax,eax
	je Block1

 Block200:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x14]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0xD4]
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block202

 Block201:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block202:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0xD8]
	push edx
	push edi
	call eax
	test eax,eax
	jge Block204

 Block203:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block204:
	mov ebx,dword ptr [esp+0x20C]
	mov ebp,dword ptr [ZImports::_VariantInit]
	cmp ebx,0xFF
	je Block220

 Block205:
	lea ecx,[esp+0xB0]
	push ecx
	call ebp
	lea edx,[esp+0xB0]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block255

 Block206:
	lea eax,[esp+0x90]
	push eax
	mov byte ptr [esp+0x1F8],0x29
	call ebp
	lea ecx,[esp+0x90]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block255

 Block207:
	lea edx,[esp+0xE0]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x1F8],0x2A
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x1F4],0x2B
	test esi,esi
	je Block1

 Block208:
	mov edx,dword ptr [esp+0xB0]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0xC4]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0xC8]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0xCC]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [esp+0xA0]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0xB4]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0xB8]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0xBC]
	push 0xFF
	push ebx
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x90]
	push esi
	call eax
	test eax,eax
	jge Block210

 Block209:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block210:
	mov eax,dword ptr [esp+0xE0]
	mov byte ptr [esp+0x1F4],0x2A
	test eax,eax
	je Block212

 Block211:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block212:
	mov esi,8
	mov byte ptr [esp+0x1F4],0x29
	cmp word ptr [esp+0x90],si
	jne Block215

 Block213:
	xor eax,eax
	mov word ptr [esp+0x90],ax
	mov eax,dword ptr [esp+0x98]
	test eax,eax
	je Block216

 Block214:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block216

 Block215:
	lea ecx,[esp+0x90]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block216:
	mov byte ptr [esp+0x1F4],9
	cmp word ptr [esp+0xB0],si
	jne Block219

 Block217:
	mov eax,dword ptr [esp+0xB8]
	xor edx,edx
	mov word ptr [esp+0xB0],dx
	test eax,eax
	je Block220

 Block218:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block220

 Block219:
	lea eax,[esp+0xB0]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block220:
	mov eax,dword ptr [esp+0x1FC]
	test eax,eax
	je Block1

 Block221:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x104]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0xF0]
	call eax
	test eax,eax
	jge Block223

 Block222:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block223:
	mov edx,dword ptr [esp+0x104]
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0xF4]
	push edx
	push edi
	call eax
	test eax,eax
	jge Block225

 Block224:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block225:
	cmp dword ptr [esp+0x214],0
	je Block229

 Block226:
	mov ecx,dword ptr [esp+0x210]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x1C],esp
	push edi
	call eax
	call CMapLoadable::AnimateObjLayer
	mov ecx,dword ptr [esp+0x34]
	add esp,8
	add ecx,0x54
	call ZList<_x_com_ptr<IWzGr2DLayer>>::AddTail_
	mov esi,dword ptr [eax]
	cmp esi,edi
	je Block244

 Block227:
	mov dword ptr [eax],edi
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx
	test esi,esi
	je Block244

 Block228:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx
	jmp Block244

 Block229:
	cmp dword ptr [esp+0x210],0
	je Block241

 Block230:
	lea ecx,[esp+0xA0]
	push ecx
	call ebp
	lea edx,[esp+0xA0]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block255

 Block231:
	lea eax,[esp+0xD0]
	push eax
	mov byte ptr [esp+0x1F8],0x2C
	call ebp
	lea ecx,[esp+0xD0]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block255

 Block232:
	mov ecx,dword ptr [esp+0xA0]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x110]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0xB4]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0xB8]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0xBC]
	mov dword ptr [eax+0xC],ecx
	mov ecx,dword ptr [esp+0xE0]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0xF4]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0xF8]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0xFC]
	push 0x20
	push edi
	mov byte ptr [esp+0x21C],0x2D
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block234

 Block233:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block234:
	mov esi,8
	mov byte ptr [esp+0x1F4],0x2C
	cmp word ptr [esp+0xD0],si
	jne Block237

 Block235:
	xor eax,eax
	mov word ptr [esp+0xD0],ax
	mov eax,dword ptr [esp+0xD8]
	test eax,eax
	je Block238

 Block236:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block238

 Block237:
	lea ecx,[esp+0xD0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block238:
	mov byte ptr [esp+0x1F4],9
	cmp word ptr [esp+0xA0],si
	jne Block254

 Block239:
	mov eax,dword ptr [esp+0xA8]
	xor edx,edx
	mov word ptr [esp+0xA0],dx
	test eax,eax
	je Block241

 Block240:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block241:
	mov ecx,dword ptr [esp+0x21C]
	call ZList<_x_com_ptr<IWzGr2DLayer>>::AddTail_
	mov esi,dword ptr [eax]
	cmp esi,edi
	je Block244

 Block242:
	mov dword ptr [eax],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax
	test esi,esi
	je Block244

 Block243:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block244:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0x1F8],4
	call ecx
	mov eax,dword ptr [esp+0x28]
	add eax,dword ptr [esp+0x204]
	cmp eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x28],eax
	jl Block48

 Block245:
	mov ebx,dword ptr [esp+0x208]

 Block246:
	mov eax,dword ptr [esp+0x1C]
	add eax,ebx
	cmp eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],eax
	jl Block46

 Block247:
	mov eax,dword ptr [esp+0x44]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0x1F8],1
	call eax
	mov eax,dword ptr [esp+0x1FC]
	mov byte ptr [esp+0x1F4],0
	test eax,eax
	je Block249

 Block248:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block249:
	mov eax,dword ptr [esp+0x21C]
	mov dword ptr [esp+0x1F4],0xFFFFFFFF
	test eax,eax
	je Block253

 Block250:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block253

 Block251:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block253

 Block252:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block253:
	mov ecx,dword ptr [esp+0x1EC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1E4
	ret 0x28

 Block254:
	lea eax,[esp+0xA0]
	push eax
	call dword ptr [ZImports::_VariantClear]
	jmp Block241

 Block255:
	push eax
	call _com_issue_error
}
}
// CMapLoadable::GetObjectRect
_SUB_EXCEPTION_HANDLER(220A70)
__SUB_CLASS_THIS(00220A70, __thiscall, 19663,  CMapLoadable, tagRECT*, tagRECT*, const char*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_220A70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x50
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x64]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	lea eax,[esp+0x24]
	push eax
	call SetRectEmpty
	xor esi,esi
	push esi
	lea ecx,[esp+0x7C]
	push ecx
	lea ecx,[edi+0xB8]
	call ZMap<char const *, CMapLoadable::CHANGING_OBJECT, ZXString<char>>::GetAt
	cmp eax,esi
	jne Block2

 Block1:
	mov eax,dword ptr [esp+0x74]
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],edx
	mov dword ptr [eax+0xC],ecx
	jmp Block53

 Block2:
	mov ecx,dword ptr [eax]
	shl ecx,4
	add ecx,dword ptr [eax+8]
	mov edi,dword ptr [ecx+8]
	mov dword ptr [esp+0x20],edi
	cmp edi,esi
	je Block4

 Block3:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block4:
	mov dword ptr [esp+0x6C],esi
	cmp edi,esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x78]
	push ecx
	mov ecx,edi
	call IWzGr2DLayer::Getalpha
	cmp dword ptr [eax],esi
	mov eax,dword ptr [esp+0x78]
	sete bl
	mov byte ptr [esp+0x6C],0
	cmp eax,esi
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block8:
	test bl,bl
	je Block10

 Block9:
	mov esi,dword ptr [esp+0x74]
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x28]
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esi],ecx
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [esi+4],edx
	mov edx,dword ptr [edi]
	mov dword ptr [esi+8],eax
	mov eax,dword ptr [edx+8]
	push edi
	mov dword ptr [esi+0xC],ecx
	mov dword ptr [esp+0x70],0xFFFFFFFF
	call eax
	jmp Block52

 Block10:
	mov ecx,3
	mov word ptr [esp+0x34],cx
	mov dword ptr [esp+0x3C],esi
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x7C]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x74],2
	call IWzGr2DLayer::Getcanvas
	mov ebp,8
	mov byte ptr [esp+0x6C],4
	cmp word ptr [esp+0x34],bp
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	cmp eax,esi
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov ecx,dword ptr [esp+0x78]
	cmp ecx,esi
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea eax,[esp+0x14]
	push eax
	call IWzCanvas::Getproperty
	push esi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1ABE
	push ecx
	mov byte ptr [esp+0x80],5
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x78],6
	cmp ebx,esi
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea edx,[esp+0x50]
	push edx
	mov ecx,ebx
	mov byte ptr [esp+0x7C],5
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x74],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],esi
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,esi
	jge Block21

 Block19:
	cmp eax,0x80004002
	je Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	mov byte ptr [esp+0x6C],9
	cmp word ptr [esp+0x44],bp
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	cmp eax,esi
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	push esi
	push esi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1ACB
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x60]
	mov byte ptr [esp+0x78],0xA
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x7C],9
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x74],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],esi
	call _x_com_ptr<IWzVector2D>::_QueryUnknown
	cmp eax,esi
	jge Block28

 Block26:
	cmp eax,0x80004002
	je Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov byte ptr [esp+0x6C],0xD
	cmp word ptr [esp+0x54],bp
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	cmp eax,esi
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea edx,[esp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov ebx,dword ptr [esp+0x18]
	mov ebp,dword ptr [esp+0x1C]
	cmp ebx,esi
	sete al
	test al,al
	jne Block46

 Block33:
	cmp ebp,esi
	sete al
	test al,al
	jne Block46

 Block34:
	mov ecx,edi
	call IWzGr2DLayer::Getflip
	test eax,eax
	je Block40

 Block35:
	cmp ebp,esi
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	cmp ebx,esi
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	mov ecx,ebp
	call IWzShape2D::Gety
	push eax
	mov ecx,ebx
	call IWzShape2D::Getx
	neg eax
	push eax
	mov ecx,ebx
	call IWzShape2D::Gety
	push eax
	mov ecx,ebp
	call IWzShape2D::Getx
	neg eax
	push eax
	lea eax,[esp+0x34]
	push eax
	jmp Block45

 Block40:
	cmp ebp,esi
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	cmp ebx,esi
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	mov ecx,ebp
	call IWzShape2D::Gety
	push eax
	mov ecx,ebp
	call IWzShape2D::Getx
	push eax
	mov ecx,ebx
	call IWzShape2D::Gety
	push eax
	mov ecx,ebx
	call IWzShape2D::Getx
	push eax
	lea ecx,[esp+0x34]
	push ecx

 Block45:
	call SetRect
	mov ecx,dword ptr [esp+0x78]
	call IWzCanvas::Getcy
	mov ecx,edi
	mov esi,eax
	call IWzShape2D::Gety
	mov ecx,dword ptr [esp+0x78]
	add esi,eax
	push esi
	call IWzCanvas::Getcx
	mov ecx,edi
	mov esi,eax
	call IWzShape2D::Getx
	add esi,eax
	push esi
	lea edx,[esp+0x2C]
	push edx
	call OffsetRect
	mov esi,dword ptr [esp+0x74]
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [esi],eax
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esi+4],ecx
	mov ecx,dword ptr [ebp]
	mov dword ptr [esi+8],edx
	mov edx,dword ptr [ecx+8]
	push ebp
	mov dword ptr [esi+0xC],eax
	mov byte ptr [esp+0x70],9
	call edx
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [esp+0x70],5
	call ecx
	mov eax,dword ptr [esp+0x14]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0x70],4
	call eax
	jmp Block51

 Block46:
	mov esi,dword ptr [esp+0x74]
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [esi],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],ecx
	mov dword ptr [esi+0xC],edx
	mov byte ptr [esp+0x6C],9
	test ebp,ebp
	je Block48

 Block47:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block48:
	mov byte ptr [esp+0x6C],5
	test ebx,ebx
	je Block50

 Block49:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block50:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x70],4
	call edx

 Block51:
	mov eax,dword ptr [esp+0x78]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x70],0
	call edx
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [esp+0x70],0xFFFFFFFF
	call ecx

 Block52:
	mov eax,esi

 Block53:
	mov ecx,dword ptr [esp+0x64]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x5C
	ret 8
}
}
// Field::BackEffect::Init
__SUB_CLASS_THIS(00165350, __thiscall, 16490,  Field::BackEffect, void, long, long, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,1
	ja Block2

 Block1:
	mov dword ptr [ecx+0x10],eax

 Block2:
	mov eax,dword ptr [esp+8]
	test eax,eax
	jl Block4

 Block3:
	mov dword ptr [ecx+0x14],eax

 Block4:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	jl Block6

 Block5:
	mov dword ptr [ecx+0x18],eax

 Block6:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	jl Block8

 Block7:
	mov dword ptr [ecx+0x1C],eax

 Block8:
	ret 0x10
}
}
// CMapLoadable::IsKindOf
__SUB_CLASS_THIS(002133A0, __thiscall, 19708,  CMapLoadable, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CMapLoadable::ms_RTTI_CMapLoadable
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
// CMapLoadable::WeatherLayer_RemoveAll
__SUB_CLASS_THIS0(00212630, __thiscall, 19649,  CMapLoadable, void) {
__asm {

 Block0:
	add ecx,0x68
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	add ecx,0xE4
	call ZList<CAnimationDisplayer::FIRECRACKER>::RemoveAll
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	add ecx,0xF8
	jmp  ZList<CAnimationDisplayer::NEWYEARINFO>::RemoveAll
}
}
// CMapLoadable::RestoreLetterBox
_SUB_EXCEPTION_HANDLER(21DC70)
__SUB_CLASS_THIS0(0021DC70, __thiscall, 19649,  CMapLoadable, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_21DC70
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
	mov esi,dword ptr [ecx+0x2C]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],esi
	cmp esi,ebx
	je Block2

 Block1:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block2:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [esp+0x3C],ebx
	cmp byte ptr [edx+0x41C4],bl
	jne Block5

 Block3:
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp esi,ebx
	je Block27

 Block4:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret

 Block5:
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x191E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x44],1
	cmp esi,ebx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea eax,[esp+0x2C]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x48],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x44],2
	call get_int32
	mov edi,8
	add esp,8
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x3C],bl
	cmp word ptr [esp+0x24],di
	jne Block10

 Block8:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,ebx
	je Block11

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block11

 Block10:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block11:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x191F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0x48],3
	mov ecx,esi
	mov byte ptr [esp+0x48],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x44],4
	call get_int32
	add esp,8
	mov ebp,eax
	mov byte ptr [esp+0x3C],bl
	cmp word ptr [esp+0x24],di
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	cmp eax,ebx
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block15:
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x191D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x2C]
	mov byte ptr [esp+0x44],5
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x48],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x44],6
	call get_int32
	add esp,8
	cmp word ptr [esp+0x24],8
	mov edi,eax
	mov byte ptr [esp+0x3C],bl
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebx
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	cmp ebp,ebx
	jle Block21

 Block20:
	push 0xFFFFFE80
	push 0xFFFFFE00
	push ebp
	mov ebp,dword ptr [esp+0x20]
	push 0x400
	mov ecx,ebp
	call CMapLoadable::AddLetterBox
	jmp Block22

 Block21:
	mov ebp,dword ptr [esp+0x14]

 Block22:
	cmp edi,ebx
	jle Block24

 Block23:
	mov edx,0x13F
	sub edx,edi
	push edx
	push 0xFFFFFE00
	add edi,0x41
	push edi
	push 0x400
	mov ecx,ebp
	call CMapLoadable::AddLetterBox

 Block24:
	mov edi,dword ptr [esp+0x18]
	cmp edi,ebx
	jle Block26

 Block25:
	push 0xFFFFFE80
	push 0xFFFFFE00
	push 0x300
	push edi
	mov ecx,ebp
	call CMapLoadable::AddLetterBox
	push 0xFFFFFE80
	mov eax,0x200
	sub eax,edi
	push eax
	push 0x300
	push edi
	mov ecx,ebp
	call CMapLoadable::AddLetterBox

 Block26:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [esp+0x40],0xFFFFFFFF
	call edx

 Block27:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret
}
}
// draw_layer
_SUB_EXCEPTION_HANDLER(210A50)
__SUB(00210A50, __cdecl, 138631,  void, NakedParam<_x_com_ptr<IWzCanvas>>, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long, long, tagRECT*, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_210A50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x8C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xA0]
	mov dword ptr fs:[0],eax
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov dword ptr [esp+0xA8],ebp
	mov ecx,dword ptr [esp+0xB4]
	cmp ecx,ebp
	sete al
	lea ebx,[ebp+2]
	lea esi,[ebp+1]
	test al,al
	jne Block4

 Block1:
	mov eax,3
	mov word ptr [esp+0x28],ax
	mov dword ptr [esp+0x30],ebp
	mov byte ptr [esp+0xA8],bl
	mov dword ptr [esp+0x14],esi
	cmp ecx,ebp
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x20]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp dword ptr [eax],ebp
	mov ecx,dword ptr [esp+0xB4]
	sete al
	mov dword ptr [esp+0x14],3
	mov byte ptr [esp+0x1B],0
	test al,al
	je Block5

 Block4:
	mov byte ptr [esp+0x1B],1

 Block5:
	mov dword ptr [esp+0xA8],ebx
	test byte ptr [esp+0x14],bl
	je Block8

 Block6:
	mov eax,dword ptr [esp+0x1C]
	and dword ptr [esp+0x14],0xFFFFFFFD
	cmp eax,ebp
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov ecx,dword ptr [esp+0xB4]

 Block8:
	test byte ptr [esp+0x14],1
	mov dword ptr [esp+0xA8],esi
	je Block14

 Block9:
	and dword ptr [esp+0x14],0xFFFFFFFE
	cmp word ptr [esp+0x28],8
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block14

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov ecx,dword ptr [esp+0xB4]

 Block14:
	cmp byte ptr [esp+0x1B],0
	je Block19

 Block15:
	mov eax,dword ptr [esp+0xB0]
	mov byte ptr [esp+0xA8],0
	cmp eax,ebp
	je Block17

 Block16:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	mov ecx,dword ptr [esp+0xB4]

 Block17:
	mov dword ptr [esp+0xA8],0xFFFFFFFF
	cmp ecx,ebp
	je Block140

 Block18:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax
	jmp Block140

 Block19:
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],ebp
	mov byte ptr [esp+0xA8],4
	cmp ecx,ebp
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x20]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov ebx,eax
	mov eax,dword ptr [esp+0xB4]
	mov byte ptr [esp+0xA8],5
	cmp eax,ebp
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x24]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0xB8]
	mov dword ptr [esp+0x2C],ebp
	call eax
	cmp eax,ebp
	jge Block25

 Block24:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	mov esi,dword ptr [ebx]
	mov edi,dword ptr [esp+0x24]
	cmp esi,ebp
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x6C]
	lea edx,[esp+0x20]
	push edx
	push esi
	mov dword ptr [esp+0x28],ebp
	call eax
	cmp eax,ebp
	jge Block29

 Block28:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block29:
	mov esi,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0xC0]
	sub esi,dword ptr [ecx]
	mov ebx,dword ptr [esp+0xB8]
	mov eax,dword ptr [esp+0x1C]
	sub esi,edi
	add esi,ebx
	mov byte ptr [esp+0xA8],4
	cmp eax,ebp
	je Block31

 Block30:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block31:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xA8],1
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,ebp
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	cmp dword ptr [esp+0xC4],ebp
	je Block61

 Block36:
	mov eax,3
	mov word ptr [esp+0x3C],ax
	mov dword ptr [esp+0x44],0xFF
	mov ecx,eax
	mov word ptr [esp+0x4C],cx
	mov dword ptr [esp+0x54],ebp
	mov edx,eax
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],ebp
	mov ecx,dword ptr [esp+0xB4]
	mov byte ptr [esp+0xA8],8
	cmp ecx,ebp
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea eax,[esp+0x4C]
	push eax
	lea edx,[esp+0x3C]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov esi,eax
	mov ecx,dword ptr [esp+0xB4]
	mov byte ptr [esp+0xA8],9
	cmp ecx,ebp
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x20]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov edi,dword ptr [esi]
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0xA8],0xA
	cmp esi,ebp
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x6C]
	lea ecx,[esp+0x20]
	push ecx
	push esi
	mov dword ptr [esp+0x28],ebp
	call edx
	cmp eax,ebp
	jge Block44

 Block43:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block44:
	mov ecx,dword ptr [esp+0xB0]
	cmp ecx,ebp
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	mov edx,dword ptr [esp+0xC0]
	sub ebx,dword ptr [edx]
	lea eax,[esp+0x3C]
	sub ebx,dword ptr [esp+0x20]
	push eax
	mov eax,dword ptr [esp+0xC0]
	sub eax,dword ptr [edx+4]
	push edi
	push eax
	push ebx
	call IWzCanvas::Copy
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xA8],9
	cmp eax,ebp
	je Block48

 Block47:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block48:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0xA8],8
	cmp eax,ebp
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block50:
	mov esi,8
	mov byte ptr [esp+0xA8],7
	cmp word ptr [esp+0x28],si
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov byte ptr [esp+0xA8],6
	cmp word ptr [esp+0x4C],si
	jne Block57

 Block55:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	cmp eax,ebp
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov byte ptr [esp+0xA8],1
	cmp word ptr [esp+0x3C],si
	jne Block60

 Block59:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebp
	jmp Block133

 Block60:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]
	jmp Block136

 Block61:
	lea eax,[esp+0x90]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x90]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block63

 Block62:
	push eax
	call _com_issue_error

 Block63:
	mov edx,3
	mov word ptr [esp+0x80],dx
	mov dword ptr [esp+0x88],ebp
	cmp esi,ebp
	lea edi,[edx+0xD]
	jge Block65

 Block64:
	mov dword ptr [esp+0x24],esi
	jmp Block76

 Block65:
	mov eax,3
	mov word ptr [esp+0x70],ax
	mov dword ptr [esp+0x78],ebp
	mov ecx,dword ptr [esp+0xB4]
	or dword ptr [esp+0x14],4
	mov byte ptr [esp+0xA8],0xD
	cmp ecx,ebp
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	lea edx,[esp+0x70]
	push edx
	lea eax,[esp+0x68]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov ecx,dword ptr [eax]
	or dword ptr [esp+0x14],8
	mov dword ptr [esp+0xA8],0xE
	cmp ecx,ebp
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	call IWzCanvas::Getcx
	mov esi,dword ptr [esp+0xC0]
	add eax,ebx
	cmp eax,dword ptr [esi+8]
	jge Block71

 Block70:
	mov dword ptr [esp+0x24],ebp
	jmp Block76

 Block71:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],ebp
	mov ecx,dword ptr [esp+0xB4]
	or dword ptr [esp+0x14],edi
	mov dword ptr [esp+0xA8],0xF
	cmp ecx,ebp
	jne Block73

 Block72:
	push 0x80004003
	call _com_issue_error

 Block73:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x64]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov ecx,dword ptr [eax]
	or dword ptr [esp+0x14],0x20
	mov dword ptr [esp+0xA8],edi
	cmp ecx,ebp
	jne Block75

 Block74:
	push 0x80004003
	call _com_issue_error

 Block75:
	call IWzCanvas::Getcx
	sub ebx,dword ptr [esi+8]
	add eax,ebx
	mov dword ptr [esp+0x24],eax

 Block76:
	mov ecx,3
	mov word ptr [esp+0x4C],cx
	mov dword ptr [esp+0x54],ebp
	mov edx,ecx
	mov dword ptr [esp+0xA8],0x11
	mov word ptr [esp+0x3C],dx
	mov dword ptr [esp+0x44],ebp
	mov ecx,dword ptr [esp+0xB4]
	mov byte ptr [esp+0xA8],0x12
	cmp ecx,ebp
	jne Block78

 Block77:
	push 0x80004003
	call _com_issue_error

 Block78:
	lea eax,[esp+0x80]
	push eax
	lea edx,[esp+0x60]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov esi,eax
	mov ecx,dword ptr [esp+0xB4]
	mov byte ptr [esp+0xA8],0x13
	cmp ecx,ebp
	jne Block80

 Block79:
	push 0x80004003
	call _com_issue_error

 Block80:
	lea eax,[esp+0x4C]
	push eax
	lea edx,[esp+0x70]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov ebx,eax
	mov ecx,dword ptr [esp+0xB4]
	mov byte ptr [esp+0xA8],0x14
	cmp ecx,ebp
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	lea eax,[esp+0x3C]
	push eax
	lea edx,[esp+0x6C]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov dword ptr [esp+0x1C],eax
	mov edi,dword ptr [esi]
	mov byte ptr [esp+0xA8],0x15
	cmp edi,ebp
	jne Block84

 Block83:
	push 0x80004003
	call _com_issue_error

 Block84:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x20]
	push ecx
	push edi
	mov dword ptr [esp+0x28],ebp
	call edx
	cmp eax,ebp
	jge Block86

 Block85:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block86:
	mov eax,dword ptr [esp+0xB4]
	mov edi,dword ptr [esp+0x20]
	mov ebx,dword ptr [ebx]
	cmp eax,ebp
	jne Block88

 Block87:
	push 0x80004003
	call _com_issue_error

 Block88:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x38]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0xB8]
	mov dword ptr [esp+0x40],ebp
	call eax
	cmp eax,ebp
	jge Block90

 Block89:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block90:
	mov ecx,dword ptr [esp+0x1C]
	mov ebp,dword ptr [ecx]
	mov esi,dword ptr [esp+0x38]
	test ebp,ebp
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x6C]
	lea eax,[esp+0x1C]
	push eax
	push ebp
	mov dword ptr [esp+0x24],0
	call ecx
	test eax,eax
	jge Block94

 Block93:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block94:
	mov ecx,dword ptr [esp+0xB0]
	test ecx,ecx
	jne Block96

 Block95:
	push 0x80004003
	call _com_issue_error

 Block96:
	mov eax,dword ptr [esp+0x24]
	lea edx,[esp+0x90]
	push edx
	mov edx,dword ptr [esp+0xC4]
	push 0
	neg edi
	push edi
	push 0
	push eax
	mov eax,dword ptr [esp+0xD0]
	sub eax,dword ptr [edx+4]
	push 0
	push 0
	push 0xFF
	push ebx
	push eax
	mov eax,dword ptr [esp+0x44]
	sub eax,esi
	sub eax,dword ptr [edx]
	add eax,dword ptr [esp+0xE0]
	push eax
	call IWzCanvas::CopyEx
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0xA8],0x14
	test eax,eax
	je Block98

 Block97:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block98:
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0xA8],0x13
	test eax,eax
	je Block100

 Block99:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block100:
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0xA8],0x12
	test eax,eax
	je Block102

 Block101:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block102:
	mov edi,8
	mov byte ptr [esp+0xA8],0x11
	cmp word ptr [esp+0x3C],di
	jne Block109

 Block103:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block105

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block105:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block106:
	mov byte ptr [esp+0xA8],0x10
	cmp word ptr [esp+0x4C],di
	jne Block110

 Block107:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block111

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block109:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x3C]
	push ecx
	call esi
	jmp Block106

 Block110:
	lea eax,[esp+0x4C]
	push eax
	call esi

 Block111:
	mov ebx,dword ptr [esp+0x14]
	mov dword ptr [esp+0xA8],0xF
	test bl,0x20
	je Block114

 Block112:
	mov eax,dword ptr [esp+0x60]
	and ebx,0xFFFFFFDF
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block114

 Block113:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block114:
	mov dword ptr [esp+0xA8],0xE
	test bl,0x10
	je Block119

 Block115:
	and ebx,0xFFFFFFEF
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x28],di
	jne Block118

 Block116:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea ecx,[esp+0x28]
	push ecx
	call esi

 Block119:
	mov dword ptr [esp+0xA8],0xD
	test bl,8
	je Block122

 Block120:
	mov eax,dword ptr [esp+0x64]
	and ebx,0xFFFFFFF7
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block122

 Block121:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block122:
	mov dword ptr [esp+0xA8],0xC
	test bl,4
	je Block127

 Block123:
	cmp word ptr [esp+0x70],di
	jne Block126

 Block124:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	test eax,eax
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea edx,[esp+0x70]
	push edx
	call esi

 Block127:
	mov byte ptr [esp+0xA8],0xB
	cmp word ptr [esp+0x80],di
	jne Block130

 Block128:
	xor eax,eax
	mov word ptr [esp+0x80],ax
	mov eax,dword ptr [esp+0x88]
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea ecx,[esp+0x80]
	push ecx
	call esi

 Block131:
	mov byte ptr [esp+0xA8],1
	cmp word ptr [esp+0x90],di
	jne Block135

 Block132:
	mov eax,dword ptr [esp+0x98]
	xor edx,edx
	mov word ptr [esp+0x90],dx
	test eax,eax

 Block133:
	je Block136

 Block134:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block136

 Block135:
	lea eax,[esp+0x90]
	push eax
	call esi

 Block136:
	mov eax,dword ptr [esp+0xB0]
	mov byte ptr [esp+0xA8],0
	test eax,eax
	je Block138

 Block137:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block138:
	mov eax,dword ptr [esp+0xB4]
	mov dword ptr [esp+0xA8],0xFFFFFFFF
	test eax,eax
	je Block140

 Block139:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block140:
	mov ecx,dword ptr [esp+0xA0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x98
	ret
}
}
// CMapLoadable::SetFieldMagLevel
_SUB_EXCEPTION_HANDLER(223770)
__SUB_CLASS_THIS0(00223770, __thiscall, 19649,  CMapLoadable, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_223770
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
	cmp dword ptr [esi+0x30],0
	sete al
	test al,al
	jne Block28

 Block1:
	lea eax,[esp+0x10]
	push eax
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	add ecx,0x6C
	call CONFIG_SYSOPT::GetVideo_MagLevel
	mov eax,dword ptr [esp+0xC]
	xor edi,edi
	cmp dword ptr [esi+0x114],eax
	je Block7

 Block2:
	lea ecx,[esi+0x54]
	mov dword ptr [esi+0x114],eax
	call ZList<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	mov eax,dword ptr [_D_G_RM]
	test eax,eax
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov edx,dword ptr [eax]
	push 0
	mov edi,eax
	push eax
	mov eax,dword ptr [edx+0x24]
	call eax
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_57dfe40b_3e20_4dbc_97e8_805a50f381bf
	push edi
	push eax
	call _com_issue_errorex

 Block6:
	mov edi,1
	mov ecx,esi
	mov dword ptr [esi+0x130],edi
	call CMapLoadable::RestoreObj
	mov dword ptr [esi+0x130],0

 Block7:
	mov eax,dword ptr [esp+0x10]
	cmp dword ptr [esi+0x118],eax
	je Block28

 Block8:
	lea ecx,[esi+0xE8]
	mov dword ptr [esi+0x118],eax
	call ZMap<long, ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>, long>::RemoveAll
	test edi,edi
	jne Block13

 Block9:
	mov eax,dword ptr [_D_G_RM]
	test eax,eax
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x24]
	push 0
	push eax
	mov edi,eax
	call edx
	test eax,eax
	jge Block13

 Block12:
	push offset __GUID_57dfe40b_3e20_4dbc_97e8_805a50f381bf
	push edi
	push eax
	call _com_issue_errorex

 Block13:
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea eax,[esp+0x10]
	push eax
	call IWzGr2D::Getcenter
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x1C],0
	test ecx,ecx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	push offset _D_VTEMPTY
	call IWzVector2D::Putorigin
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	lea eax,[esp+0xC]
	push eax
	call IWzGr2D::Getcenter
	mov edi,dword ptr [eax]
	mov dword ptr [esp+0x1C],1
	test edi,edi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0x40]
	push 0
	push 0
	push edi
	call edx
	test eax,eax
	jge Block25

 Block24:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block25:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block27:
	mov ecx,esi
	call CMapLoadable::RestoreBack
	push ecx
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,esp
	mov dword ptr [esp+0x14],esp
	push eax
	call CUser::GetVecCtrl_0
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::SetCenterOrigin

 Block28:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret
}
}
// CMapLoadable::RestoreBGM
__SUB_CLASS_THIS0(0021A4F0, __thiscall, 19649,  CMapLoadable, void) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	lea esi,[edi+0x28]
	push offset _S___3
	mov ecx,esi
	call ZXString16::Compare
	test eax,eax
	jne Block2

 Block1:
	mov ecx,edi
	pop edi
	pop esi
	jmp  CMapLoadable::PlayBGMFromMapInfo

 Block2:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 1
	push 0x3E8
	push 0x3E8
	push 1
	push eax
	call CSoundMan::PlayBGM
	pop edi
	pop esi
	ret
}
}
// CMapLoadable::GetRTTI
__SUB_CLASS_THIS0(00213380, __thiscall, 19707,  CMapLoadable, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CMapLoadable::ms_RTTI_CMapLoadable
	ret
}
}
// CMapLoadable::TransientLayer_Clear
_SUB_EXCEPTION_HANDLER(211B00)
__SUB_CLASS_THIS0(00211B00, __thiscall, 19649,  CMapLoadable, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_211B00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ecx+0x70]
	xor ebx,ebx
	cmp eax,ebx
	je Block23

 Block1:
	mov ecx,dword ptr [ecx+0x74]
	mov dword ptr [esp+0x18],ecx
	cmp ecx,ebx
	je Block23

 Block2:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea esp,[esp]

 Block3:
	lea eax,[esp+0x18]
	push eax
	call ZList<_x_com_ptr<IWzGr2DLayer>>::GetNext
	mov edi,dword ptr [eax]
	add esp,4
	mov dword ptr [esp+0x20],edi
	cmp edi,ebx
	je Block5

 Block4:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block5:
	mov dword ptr [esp+0x4C],ebx
	cmp edi,ebx
	je Block24

 Block6:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x58]
	lea ecx,[esp+0x14]
	push ecx
	push edi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block8

 Block7:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block8:
	mov esi,dword ptr [esp+0x14]
	call _rand
	cdq
	mov ecx,0x3E8
	idiv ecx
	lea esi,[edx+esi+0x3E8]
	lea edx,[esp+0x34]
	push edx
	call ebp
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block25

 Block9:
	mov ecx,3
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],esi
	lea edx,[esp+0x1C]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x50],2
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x4C],3
	cmp esi,ebx
	je Block24

 Block10:
	mov edx,dword ptr [esp+0x34]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [esp+0x34]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x50]
	push 0xFF
	push ebx
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x90]
	push esi
	call eax
	cmp eax,ebx
	jge Block12

 Block11:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block12:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x4C],2
	cmp eax,ebx
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov esi,8
	mov byte ptr [esp+0x4C],1
	cmp word ptr [esp+0x24],si
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebx
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov byte ptr [esp+0x4C],bl
	cmp word ptr [esp+0x34],si
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	cmp eax,ebx
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0x50],0xFFFFFFFF
	call edx
	cmp dword ptr [esp+0x18],ebx
	jne Block3

 Block23:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	push eax
	call _com_issue_error
}
}
// CMapLoadable::MakeObj
_SUB_EXCEPTION_HANDLER(220EE0)
__SUB_CLASS_THIS(00220EE0, __thiscall, 19672,  CMapLoadable, void, int32_t, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_220EE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x128
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x13C]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x40],ecx
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov dword ptr [esp+0x144],ebp
	mov dword ptr [esp+0x98],ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x608
	push eax
	mov byte ptr [esp+0x150],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x154]
	mov byte ptr [esp+0x148],2
	cmp ecx,ebp
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0xB4]
	push edx
	mov byte ptr [esp+0x14C],1
	call IWzProperty::Getitem
	mov edi,8
	mov byte ptr [esp+0x144],3
	cmp word ptr [eax],di
	jne Block4

 Block3:
	mov eax,dword ptr [eax+8]
	jmp Block5

 Block4:
	mov eax,offset _S___3

 Block5:
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x607
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x158]
	mov byte ptr [esp+0x14C],4
	cmp ecx,ebp
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea edx,[esp+0x88]
	push edx
	mov byte ptr [esp+0x150],3
	call IWzProperty::Getitem
	mov byte ptr [esp+0x148],5
	cmp word ptr [eax],di
	jne Block9

 Block8:
	mov eax,dword ptr [eax+8]
	jmp Block10

 Block9:
	mov eax,offset _S___3

 Block10:
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x606
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x15C]
	mov byte ptr [esp+0x150],6
	cmp ecx,ebp
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea edx,[esp+0x68]
	push edx
	mov byte ptr [esp+0x154],5
	call IWzProperty::Getitem
	mov byte ptr [esp+0x14C],7
	cmp word ptr [eax],di
	jne Block14

 Block13:
	mov eax,dword ptr [eax+8]
	jmp Block15

 Block14:
	mov eax,offset _S___3

 Block15:
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x605
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x160]
	mov byte ptr [esp+0x154],8
	cmp ecx,ebp
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x158],7
	call IWzProperty::Getitem
	mov esi,eax
	lea eax,[esp+0xA8]
	push 0x604
	mov bl,9
	push eax
	mov byte ptr [esp+0x158],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x150],0xA
	cmp word ptr [esi],di
	jne Block19

 Block18:
	mov esi,dword ptr [esi+8]
	jmp Block20

 Block19:
	mov esi,offset _S___3

 Block20:
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[esp+0xAC]
	push ecx
	call ZXString16::Format
	mov eax,dword ptr [esp+0xB4]
	add esp,0x18
	mov byte ptr [esp+0x144],bl
	cmp eax,ebp
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block22:
	mov byte ptr [esp+0x144],7
	cmp word ptr [esp+0x20],di
	jne Block29

 Block23:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	cmp eax,ebp
	je Block25

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block25:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block26:
	mov byte ptr [esp+0x144],5
	cmp word ptr [esp+0x5C],di
	jne Block30

 Block27:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	cmp eax,ebp
	je Block31

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block29:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x20]
	push eax
	call esi
	jmp Block26

 Block30:
	lea edx,[esp+0x5C]
	push edx
	call esi

 Block31:
	mov byte ptr [esp+0x144],3
	cmp word ptr [esp+0x80],di
	jne Block34

 Block32:
	xor eax,eax
	mov word ptr [esp+0x80],ax
	mov eax,dword ptr [esp+0x88]
	cmp eax,ebp
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea ecx,[esp+0x80]
	push ecx
	call esi

 Block35:
	mov byte ptr [esp+0x144],1
	cmp word ptr [esp+0xB0],di
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0xB8]
	xor edx,edx
	mov word ptr [esp+0xB0],dx
	cmp eax,ebp
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea eax,[esp+0xB0]
	push eax
	call esi

 Block39:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0xEC]
	push ecx
	call esi
	lea edx,[esp+0xEC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block41

 Block40:
	push eax
	call _com_issue_error

 Block41:
	lea eax,[esp+0xFC]
	push eax
	mov byte ptr [esp+0x148],0xB
	call esi
	lea ecx,[esp+0xFC]
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
	push ebp
	push ebp
	lea edx,[esp+0xF4]
	push edx
	mov edx,dword ptr [esp+0xA4]
	lea eax,[esp+0x108]
	push eax
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,0xC
	push edx
	mov byte ptr [esp+0x15C],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x158],0xD
	cmp dword ptr [_D_G_RM],ebp
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	lea eax,[esp+0x140]
	mov byte ptr [esp+0x158],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x14C],0xE
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x5C]
	mov dword ptr [esp+0x5C],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block48

 Block46:
	cmp eax,0x80004002
	je Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	mov byte ptr [esp+0x144],0x10
	cmp word ptr [esp+0x12C],di
	jne Block55

 Block49:
	mov eax,dword ptr [esp+0x134]
	xor ecx,ecx
	mov word ptr [esp+0x12C],cx
	cmp eax,ebp
	je Block51

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block51:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block52:
	mov byte ptr [esp+0x144],0x11
	cmp word ptr [esp+0xFC],di
	jne Block56

 Block53:
	xor eax,eax
	mov word ptr [esp+0xFC],ax
	mov eax,dword ptr [esp+0x104]
	cmp eax,ebp
	je Block57

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block55:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x12C]
	push edx
	call esi
	jmp Block52

 Block56:
	lea ecx,[esp+0xFC]
	push ecx
	call esi

 Block57:
	mov byte ptr [esp+0x144],0x12
	cmp word ptr [esp+0xEC],di
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0xF4]
	xor edx,edx
	mov word ptr [esp+0xEC],dx
	cmp eax,ebp
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea eax,[esp+0xEC]
	push eax
	call esi

 Block61:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x3E5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x154]
	mov byte ptr [esp+0x148],0x13
	cmp ecx,ebp
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x14C],0x12
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x144],0x14
	call _xvariant_t::op_long
	mov dword ptr [esp+0x9C],eax
	mov byte ptr [esp+0x144],0x12
	cmp word ptr [esp+0x20],di
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[esp+0x20]
	push ecx
	call esi

 Block67:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x3E6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x154]
	mov byte ptr [esp+0x148],0x15
	cmp ecx,ebp
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x14C],0x12
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x144],0x16
	call _xvariant_t::op_long
	mov dword ptr [esp+0xE0],eax
	mov byte ptr [esp+0x144],0x12
	cmp word ptr [esp+0x20],di
	jne Block72

 Block70:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea edx,[esp+0x20]
	push edx
	call esi

 Block73:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x3E7
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x154]
	mov byte ptr [esp+0x148],0x17
	cmp ecx,ebp
	jne Block75

 Block74:
	push 0x80004003
	call _com_issue_error

 Block75:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x14C],0x12
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x144],0x18
	call _xvariant_t::op_long
	mov dword ptr [esp+0xD8],eax
	mov byte ptr [esp+0x144],0x12
	cmp word ptr [esp+0x20],di
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[esp+0x20]
	push ecx
	call esi

 Block79:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x5E5
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x154]
	mov byte ptr [esp+0x148],0x19
	cmp ecx,ebp
	jne Block81

 Block80:
	push 0x80004003
	call _com_issue_error

 Block81:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x14C],0x12
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x144],0x1A
	call _xvariant_t::op_long
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esp+0xDC],eax
	mov byte ptr [esp+0x144],0x12
	cmp word ptr [esp+0x20],di
	jne Block84

 Block82:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea edx,[esp+0x20]
	push edx
	call esi

 Block85:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x612
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x154]
	mov byte ptr [esp+0x148],0x1B
	cmp ecx,ebp
	jne Block87

 Block86:
	push 0x80004003
	call _com_issue_error

 Block87:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x14C],0x12
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x144],0x1C
	call _xvariant_t::op_long
	mov dword ptr [esp+0xD4],eax
	mov byte ptr [esp+0x144],0x12
	cmp word ptr [esp+0x20],di
	jne Block90

 Block88:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea ecx,[esp+0x20]
	push ecx
	call esi

 Block91:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x613
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x154]
	mov byte ptr [esp+0x148],0x1D
	cmp ecx,ebp
	jne Block93

 Block92:
	push 0x80004003
	call _com_issue_error

 Block93:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x14C],0x12
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x144],0x1E
	call _xvariant_t::op_long
	mov dword ptr [esp+0x38],eax
	mov byte ptr [esp+0x144],0x12
	cmp word ptr [esp+0x20],di
	jne Block96

 Block94:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea edx,[esp+0x20]
	push edx
	call esi

 Block97:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0xD0D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x154]
	mov byte ptr [esp+0x148],0x1F
	cmp ecx,ebp
	jne Block99

 Block98:
	push 0x80004003
	call _com_issue_error

 Block99:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x14C],0x12
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x144],0x20
	call _xvariant_t::op_long
	mov dword ptr [esp+0x6C],eax
	mov byte ptr [esp+0x144],0x12
	cmp word ptr [esp+0x20],di
	jne Block102

 Block100:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea ecx,[esp+0x20]
	push ecx
	call esi

 Block103:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x614
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x154]
	mov byte ptr [esp+0x148],0x21
	cmp ecx,ebp
	jne Block105

 Block104:
	push 0x80004003
	call _com_issue_error

 Block105:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x14C],0x12
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x144],0x22
	call _xvariant_t::op_long
	mov dword ptr [esp+0x30],eax
	mov byte ptr [esp+0x144],0x12
	cmp word ptr [esp+0x20],di
	jne Block108

 Block106:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea edx,[esp+0x20]
	push edx
	call esi

 Block109:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x615
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x154]
	mov byte ptr [esp+0x148],0x23
	cmp ecx,ebp
	jne Block111

 Block110:
	push 0x80004003
	call _com_issue_error

 Block111:
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x14C],0x12
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x144],0x24
	call _xvariant_t::op_long
	mov dword ptr [esp+0x54],eax
	mov byte ptr [esp+0x144],0x12
	cmp word ptr [esp+0x20],di
	jne Block114

 Block112:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea ecx,[esp+0x20]
	push ecx
	call esi

 Block115:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0xC45
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x154]
	mov byte ptr [esp+0x148],0x25
	cmp ecx,ebp
	jne Block117

 Block116:
	push 0x80004003
	call _com_issue_error

 Block117:
	lea eax,[esp+0x24]
	push eax
	mov byte ptr [esp+0x14C],0x12
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x144],0x26
	call _xvariant_t::op_long
	neg eax
	sbb eax,eax
	neg eax
	mov dword ptr [esp+0x44],eax
	mov byte ptr [esp+0x144],0x12
	cmp word ptr [esp+0x20],di
	jne Block120

 Block118:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block121

 Block119:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block120:
	lea edx,[esp+0x20]
	push edx
	call esi

 Block121:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x1503
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x154]
	mov byte ptr [esp+0x148],0x27
	cmp ecx,ebp
	jne Block123

 Block122:
	push 0x80004003
	call _com_issue_error

 Block123:
	lea edx,[esp+0x110]
	push edx
	mov byte ptr [esp+0x14C],0x12
	call IWzProperty::Getitem
	mov byte ptr [esp+0x144],0x28
	cmp word ptr [eax],di
	jne Block125

 Block124:
	mov eax,dword ptr [eax+8]
	jmp Block126

 Block125:
	mov eax,offset _S___3

 Block126:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0xC8]
	mov dword ptr [esp+0xC8],ebp
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x144],0x2A
	cmp word ptr [esp+0x10C],di
	jne Block129

 Block127:
	xor eax,eax
	mov word ptr [esp+0x10C],ax
	mov eax,dword ptr [esp+0x114]
	cmp eax,ebp
	je Block130

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block129:
	lea ecx,[esp+0x10C]
	push ecx
	call esi

 Block130:
	xor esi,esi
	mov dword ptr [esp+0x94],esi
	mov ebp,dword ptr [esp+0xC0]
	lea edx,[esp+0x94]
	push edx
	push offset _S___31
	push ebp
	mov byte ptr [esp+0x150],0x2B
	call Util::StrSplit
	add esp,8
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x671
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x154]
	mov byte ptr [esp+0x148],0x2C
	cmp ecx,esi
	jne Block132

 Block131:
	push 0x80004003
	call _com_issue_error

 Block132:
	lea edx,[esp+0x120]
	push edx
	mov byte ptr [esp+0x14C],0x2B
	call IWzProperty::Getitem
	mov byte ptr [esp+0x144],0x2D
	cmp word ptr [eax],di
	jne Block134

 Block133:
	mov eax,dword ptr [eax+8]
	jmp Block135

 Block134:
	mov eax,offset _S___3

 Block135:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x98]
	mov dword ptr [esp+0x98],esi
	call ZXString<char>::AssignWideStr
	mov byte ptr [esp+0x144],0x2F
	cmp word ptr [esp+0x11C],di
	jne Block138

 Block136:
	xor eax,eax
	mov word ptr [esp+0x11C],ax
	mov eax,dword ptr [esp+0x124]
	cmp eax,esi
	je Block139

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block139

 Block138:
	lea ecx,[esp+0x11C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block139:
	mov esi,dword ptr [esp+0x90]
	mov edi,dword ptr [esp+0x58]
	test esi,esi
	je Block141

 Block140:
	cmp byte ptr [esi],0
	jne Block144

 Block141:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x60B
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x14C],0x30
	test edi,edi
	jne Block143

 Block142:
	push 0x80004003
	call _com_issue_error

 Block143:
	lea eax,[esp+0x28]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x150],0x2F
	call IWzProperty::Getitem
	mov ebx,1
	push eax
	mov byte ptr [esp+0x14C],0x31
	mov dword ptr [esp+0x1C],ebx
	call get_int32
	add esp,8
	mov dword ptr [esp+0x3C],ebx
	test eax,eax
	je Block145

 Block144:
	mov dword ptr [esp+0x3C],0

 Block145:
	mov ebx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x144],0x2F
	test bl,1
	je Block150

 Block146:
	and ebx,0xFFFFFFFE
	cmp word ptr [esp+0x20],8
	mov dword ptr [esp+0x14],ebx
	jne Block149

 Block147:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block150:
	cmp dword ptr [esp+0x3C],0
	jne Block158

 Block151:
	mov eax,dword ptr [esp+0x40]
	cmp dword ptr [eax+0x130],0
	je Block158

 Block152:
	mov byte ptr [esp+0x144],0x2B
	test esi,esi
	je Block154

 Block153:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block154:
	lea ecx,[esp+0x94]
	mov byte ptr [esp+0x144],0x2A
	call ZArray<ZXString<char>>::RemoveAll
	mov byte ptr [esp+0x144],0x12
	test ebp,ebp
	je Block156

 Block155:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block156:
	mov byte ptr [esp+0x144],1
	test edi,edi
	je Block483

 Block157:
	mov ecx,dword ptr [edi]
	push edi
	jmp Block482

 Block158:
	test esi,esi
	je Block160

 Block159:
	cmp byte ptr [esi],0
	jne Block394

 Block160:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0x110C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	xor ebp,ebp
	mov byte ptr [esp+0x148],0x32
	cmp edi,ebp
	jne Block162

 Block161:
	push 0x80004003
	call _com_issue_error

 Block162:
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x14C],0x2F
	call IWzProperty::Getitem
	mov dword ptr [esp+0x50],ebp
	mov byte ptr [esp+0x144],0x34
	cmp word ptr [esp+0x20],bp
	je Block165

 Block163:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x20]
	push eax
	call get_unknown
	add esp,8
	push eax
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x148],0x35
	call _x_com_ptr<IWzCanvas>::op_assign_unknown_com_ptr
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x144],0x34
	cmp eax,ebp
	je Block165

 Block164:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block165:
	push ebp
	push offset _S_
	push ebp
	push ebp
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0x44],ebp
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push ebp
	lea ecx,[esp+0x38]
	call ZXString<char>::ReleaseBuffer
	mov byte ptr [esp+0x144],0x36
	cmp dword ptr [esp+0x3C],ebp
	je Block167

 Block166:
	mov eax,dword ptr [esp+0x40]
	mov eax,dword ptr [eax+0x114]
	jmp Block168

 Block167:
	xor eax,eax

 Block168:
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,dword ptr [esp+0x3C]
	lea edx,[esp+0x3C]
	push edx
	mov edx,dword ptr [esp+0xDC]
	push eax
	mov eax,dword ptr [esp+0x78]
	push eax
	mov eax,dword ptr [esp+0xEC]
	push ecx
	mov ecx,dword ptr [esp+0xEC]
	push edx
	mov edx,dword ptr [esp+0xF8]
	push eax
	mov eax,dword ptr [esp+0xB8]
	push ecx
	mov ecx,dword ptr [esp+0x16C]
	push edx
	push eax
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x48],esp
	push edi
	call eax
	lea ecx,[esp+0x44]
	push ecx
	mov ecx,dword ptr [esp+0x74]
	call CMapLoadable::MakeObjLayer
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x144],0x38
	cmp eax,ebp
	je Block170

 Block169:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block170:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	jne Block172

 Block171:
	push 0x80004003
	call _com_issue_error

 Block172:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x1C]
	lea ecx,[esp+0x1C]
	push ecx
	push eax
	mov esi,eax
	mov dword ptr [esp+0x24],ebp
	call edx
	cmp eax,ebp
	jge Block174

 Block173:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block174:
	cmp dword ptr [esp+0x1C],1
	jbe Block178

 Block175:
	mov eax,dword ptr [esp+0x38]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x20],esp
	cmp eax,ebp
	je Block177

 Block176:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block177:
	call CMapLoadable::AnimateObjLayer
	add esp,8

 Block178:
	cmp dword ptr [esp+0x44],ebp
	je Block183

 Block179:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	jne Block181

 Block180:
	push 0x80004003
	call _com_issue_error

 Block181:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x11C]
	push ebp
	push eax
	mov esi,eax
	call edx
	cmp eax,ebp
	jge Block183

 Block182:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block183:
	mov eax,dword ptr [esp+0x94]
	cmp eax,ebp
	je Block207

 Block184:
	mov ecx,dword ptr [eax-4]
	cmp ecx,ebp
	je Block207

 Block185:
	lea eax,[eax+ecx*4-4]
	mov dword ptr [esp+0x34],eax
	cmp eax,ebp
	je Block207

 Block186:
	mov edi,edi

 Block187:
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x98]
	call ZArray<ZXString<char>>::GetNext
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x20],ebp
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x4C],ebp
	mov ebx,dword ptr [esp+0x1C]
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,dword ptr [esp+0x44]
	lea edx,[esp+0x48]
	push edx
	add ecx,0xD0
	mov byte ptr [esp+0x14C],0x3A
	mov dword ptr [esp+0x4C],ebx
	call ZMap<char const *, ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>, ZXString<char>>::GetAt
	mov esi,dword ptr [esp+0x4C]
	test eax,eax
	jne Block194

 Block188:
	cmp esi,ebp
	je Block193

 Block189:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block192

 Block190:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block192

 Block191:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block192:
	mov dword ptr [esp+0x4C],ebp

 Block193:
	push ebp
	call ZRefCounted_AllocHelper<ZRefCountedDummy<ZList<_x_com_ptr<IWzGr2DLayer>>>>::call
	lea esi,[eax+0x10]
	add esp,4
	mov dword ptr [eax+4],1
	lea eax,[esp+0x48]
	push eax
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,dword ptr [esp+0x48]
	add ecx,0xD0
	mov dword ptr [esp+0x54],esi
	mov dword ptr [esp+0x4C],ebx
	call ZMap<char const *, ZRef<ZList<_x_com_ptr<IWzGr2DLayer>>>, ZXString<char>>::Insert

 Block194:
	mov ecx,esi
	call ZList<_x_com_ptr<IWzGr2DLayer>>::AddTail_
	mov edi,dword ptr [eax]
	mov ecx,dword ptr [esp+0x14]
	cmp edi,ecx
	je Block199

 Block195:
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	je Block197

 Block196:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block197:
	cmp edi,ebp
	je Block199

 Block198:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block199:
	mov byte ptr [esp+0x144],0x39
	cmp esi,ebp
	je Block204

 Block200:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block203

 Block201:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block203

 Block202:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block203:
	mov dword ptr [esp+0x4C],ebp

 Block204:
	mov byte ptr [esp+0x144],0x38
	cmp ebx,ebp
	je Block206

 Block205:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block206:
	cmp dword ptr [esp+0x34],ebp
	jne Block187

 Block207:
	cmp dword ptr [esp+0x3C],ebp
	je Block212

 Block208:
	mov esi,dword ptr [esp+0x40]
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esi+0x54]
	call ZList<_x_com_ptr<IWzGr2DLayer>>::AddTail_Position
	mov ecx,dword ptr [esp+0x6C]
	cmp ecx,ebp
	je Block212

 Block209:
	mov edx,dword ptr [esp+0x38]
	push 0xFFFFFFFF
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 1
	push edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+4],ebp
	mov eax,dword ptr [esp+0x68]
	push 0xFF
	push eax
	push edx
	push ecx
	push ecx
	mov ecx,dword ptr [esp+0x3C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x40],esp
	cmp eax,ebp
	je Block211

 Block210:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block211:
	mov ecx,esi
	call CMapLoadable::MakeGrid

 Block212:
	cmp dword ptr [esp+0x50],ebp
	je Block339

 Block213:
	lea ecx,[esp+0x48]
	mov dword ptr [esp+0x4C],ebp
	call ZRef<CMapLoadable::REFLECTION_INFO>::_Alloc
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x144],0x3B
	cmp eax,ebp
	jne Block215

 Block214:
	push 0x80004003
	call _com_issue_error

 Block215:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x38]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x28]
	mov dword ptr [esp+0x40],ebp
	call eax
	cmp eax,ebp
	jge Block217

 Block216:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block217:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr [esp+0x54],ecx
	cmp eax,ebp
	jne Block219

 Block218:
	push 0x80004003
	call _com_issue_error

 Block219:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x20]
	lea ecx,[esp+0x1C]
	push ecx
	push eax
	mov dword ptr [esp+0x38],eax
	mov esi,eax
	mov dword ptr [esp+0x24],ebp
	call edx
	cmp eax,ebp
	jge Block221

 Block220:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block221:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x44],eax
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	jne Block223

 Block222:
	push 0x80004003
	call _com_issue_error

 Block223:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x6C]
	push edx
	mov ebx,eax
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x28]
	mov dword ptr [esp+0x74],ebp
	call eax
	cmp eax,ebp
	jge Block225

 Block224:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block225:
	mov eax,dword ptr [esp+0x14]
	mov ebp,dword ptr [esp+0x6C]
	test eax,eax
	jne Block227

 Block226:
	push 0x80004003
	call _com_issue_error

 Block227:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x3C]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x20]
	mov dword ptr [esp+0x44],0
	call eax
	test eax,eax
	jge Block229

 Block228:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block229:
	mov esi,dword ptr [esp+0x4C]
	mov ecx,dword ptr [esp+0x30]
	mov edi,dword ptr [esp+0x3C]
	add esi,0x10
	call IWzGr2DLayer::Getheight
	add eax,dword ptr [esp+0x54]
	mov ecx,ebx
	push eax
	call IWzGr2DLayer::Getwidth
	add eax,dword ptr [esp+0x48]
	push eax
	push ebp
	push edi
	push esi
	call SetRect
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x5E9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x60]
	lea edx,[esp+0x88]
	mov byte ptr [esp+0x14C],0x3C
	push edx
	mov byte ptr [esp+0x150],0x3B
	call IWzProperty::Getitem
	mov bl,0x3D
	push eax
	mov byte ptr [esp+0x14C],bl
	call get_int32
	mov ecx,dword ptr [esp+0x1C]
	add esp,8
	push eax
	test ecx,ecx
	jne Block231

 Block230:
	push 0x80004003
	call _com_issue_error

 Block231:
	call IWzGr2DLayer::Getwidth
	neg eax
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x5E8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x68]
	push ecx
	mov ecx,dword ptr [esp+0x68]
	mov byte ptr [esp+0x154],0x3E
	mov byte ptr [esp+0x154],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x150],0x3F
	call get_int32
	add esp,8
	push eax
	push esi
	call OffsetRect
	mov byte ptr [esp+0x144],bl
	mov ebx,8
	cmp word ptr [esp+0x5C],bx
	jne Block238

 Block232:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	xor ebp,ebp
	mov word ptr [esp+0x5C],dx
	cmp eax,ebp
	je Block234

 Block233:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block234:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block235:
	mov byte ptr [esp+0x144],0x3B
	cmp word ptr [esp+0x80],bx
	jne Block239

 Block236:
	mov eax,dword ptr [esp+0x88]
	xor ecx,ecx
	mov word ptr [esp+0x80],cx
	cmp eax,ebp
	je Block240

 Block237:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block240

 Block238:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x5C]
	push eax
	call edi
	xor ebp,ebp
	jmp Block235

 Block239:
	lea edx,[esp+0x80]
	push edx
	call edi

 Block240:
	mov eax,3
	mov word ptr [esp+0x70],ax
	mov dword ptr [esp+0x78],ebp
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x144],0x40
	cmp ecx,ebp
	jne Block242

 Block241:
	push 0x80004003
	call _com_issue_error

 Block242:
	lea edx,[esp+0x70]
	push edx
	lea eax,[esp+0x34]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov ecx,dword ptr [esp+0x4C]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ecx+4]
	cmp esi,eax
	je Block247

 Block243:
	mov dword ptr [ecx+4],eax
	cmp eax,ebp
	je Block245

 Block244:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block245:
	cmp esi,ebp
	je Block247

 Block246:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block247:
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block249

 Block248:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block249:
	mov byte ptr [esp+0x144],0x3B
	cmp word ptr [esp+0x70],bx
	jne Block252

 Block250:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	cmp eax,ebp
	je Block253

 Block251:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block253

 Block252:
	lea edx,[esp+0x70]
	push edx
	call edi

 Block253:
	mov eax,3
	mov word ptr [esp+0x70],ax
	mov dword ptr [esp+0x78],ebp
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x144],0x41
	cmp ecx,ebp
	jne Block255

 Block254:
	push 0x80004003
	call _com_issue_error

 Block255:
	lea edx,[esp+0x70]
	push edx
	lea eax,[esp+0x34]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block257

 Block256:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block257:
	mov byte ptr [esp+0x144],0x3B
	cmp word ptr [esp+0x70],bx
	jne Block260

 Block258:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	cmp eax,ebp
	je Block261

 Block259:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block261

 Block260:
	lea ecx,[esp+0x70]
	push ecx
	call edi

 Block261:
	mov dword ptr [esp+0x34],ebp
	lea edx,[esp+0x30]
	push 0x3D0
	push edx
	mov byte ptr [esp+0x14C],0x42
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea ecx,[esp+0x38]
	push ecx
	push eax
	mov byte ptr [esp+0x150],0x43
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov byte ptr [esp+0x144],0x42
	cmp eax,ebp
	je Block263

 Block262:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block263:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xC4]
	push edx
	call edi
	lea eax,[esp+0xC4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block265

 Block264:
	push eax
	call _com_issue_error

 Block265:
	lea ecx,[esp+0x70]
	mov bl,0x44
	push ecx
	mov byte ptr [esp+0x148],bl
	call edi
	lea edx,[esp+0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block267

 Block266:
	push eax
	call _com_issue_error

 Block267:
	mov eax,dword ptr [esp+0x4C]
	mov esi,dword ptr [eax+4]
	mov byte ptr [esp+0x144],0x45
	cmp esi,ebp
	jne Block269

 Block268:
	push 0x80004003
	call _com_issue_error

 Block269:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x38]
	push edx
	push esi
	mov dword ptr [esp+0x40],ebp
	call eax
	cmp eax,ebp
	jge Block271

 Block270:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block271:
	mov ecx,dword ptr [esp+0x4C]
	mov esi,dword ptr [ecx+4]
	mov ebp,dword ptr [esp+0x38]
	test esi,esi
	jne Block273

 Block272:
	push 0x80004003
	call _com_issue_error

 Block273:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x1C]
	push eax
	push esi
	mov dword ptr [esp+0x24],0
	call ecx
	test eax,eax
	jge Block275

 Block274:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block275:
	mov ecx,dword ptr [esp+0x34]
	test ecx,ecx
	jne Block277

 Block276:
	push 0x80004003
	call _com_issue_error

 Block277:
	lea edx,[esp+0xC4]
	push edx
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x74]
	push eax
	push ebp
	push edx
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0x144],bl
	cmp word ptr [esp+0x70],si
	jne Block280

 Block278:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block281

 Block279:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block281

 Block280:
	lea ecx,[esp+0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block281:
	mov byte ptr [esp+0x144],0x42
	cmp word ptr [esp+0xC4],si
	jne Block284

 Block282:
	mov eax,dword ptr [esp+0xCC]
	xor edx,edx
	mov word ptr [esp+0xC4],dx
	test eax,eax
	je Block285

 Block283:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block285

 Block284:
	lea eax,[esp+0xC4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block285:
	lea ecx,[esp+0x5C]
	push ecx
	call edi
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block287

 Block286:
	push eax
	call _com_issue_error

 Block287:
	lea eax,[esp+0x80]
	push eax
	mov byte ptr [esp+0x148],0x46
	call edi
	lea ecx,[esp+0x80]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block289

 Block288:
	push eax
	call _com_issue_error

 Block289:
	lea edx,[esp+0xB0]
	push edx
	mov byte ptr [esp+0x148],0x47
	call edi
	lea eax,[esp+0xB0]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block291

 Block290:
	push eax
	call _com_issue_error

 Block291:
	lea ecx,[esp+0x70]
	push ecx
	mov byte ptr [esp+0x148],0x48
	call edi
	lea edx,[esp+0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block293

 Block292:
	push eax
	call _com_issue_error

 Block293:
	lea eax,[esp+0xC4]
	mov bl,0x49
	push eax
	mov byte ptr [esp+0x148],bl
	call edi
	lea ecx,[esp+0xC4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block295

 Block294:
	push eax
	call _com_issue_error

 Block295:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x144],0x4A
	test ecx,ecx
	jne Block297

 Block296:
	push 0x80004003
	call _com_issue_error

 Block297:
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x84]
	push eax
	lea edx,[esp+0xB8]
	push edx
	lea eax,[esp+0x7C]
	push eax
	mov eax,dword ptr [esp+0x44]
	lea edx,[esp+0xD4]
	push edx
	push eax
	lea edx,[esp+0xB8]
	push edx
	call IWzGr2DLayer::InsertCanvas
	mov esi,8
	cmp word ptr [esp+0xA0],si
	jne Block304

 Block298:
	xor eax,eax
	mov word ptr [esp+0xA0],ax
	mov eax,dword ptr [esp+0xA8]
	test eax,eax
	je Block300

 Block299:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block300:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block301:
	mov byte ptr [esp+0x144],bl
	cmp word ptr [esp+0xC4],si
	jne Block305

 Block302:
	mov eax,dword ptr [esp+0xCC]
	xor edx,edx
	mov word ptr [esp+0xC4],dx
	test eax,eax
	je Block306

 Block303:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block306

 Block304:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0xA0]
	push ecx
	call ebp
	jmp Block301

 Block305:
	lea eax,[esp+0xC4]
	push eax
	call ebp

 Block306:
	mov byte ptr [esp+0x144],0x48
	cmp word ptr [esp+0x70],si
	jne Block309

 Block307:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	test eax,eax
	je Block310

 Block308:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block310

 Block309:
	lea edx,[esp+0x70]
	push edx
	call ebp

 Block310:
	mov byte ptr [esp+0x144],0x47
	cmp word ptr [esp+0xB0],si
	jne Block313

 Block311:
	xor eax,eax
	mov word ptr [esp+0xB0],ax
	mov eax,dword ptr [esp+0xB8]
	test eax,eax
	je Block314

 Block312:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block314

 Block313:
	lea ecx,[esp+0xB0]
	push ecx
	call ebp

 Block314:
	mov byte ptr [esp+0x144],0x46
	cmp word ptr [esp+0x80],si
	jne Block317

 Block315:
	mov eax,dword ptr [esp+0x88]
	xor edx,edx
	mov word ptr [esp+0x80],dx
	test eax,eax
	je Block318

 Block316:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block318

 Block317:
	lea eax,[esp+0x80]
	push eax
	call ebp

 Block318:
	mov byte ptr [esp+0x144],0x42
	cmp word ptr [esp+0x5C],si
	jne Block321

 Block319:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	test eax,eax
	je Block322

 Block320:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block322

 Block321:
	lea edx,[esp+0x5C]
	push edx
	call ebp

 Block322:
	lea eax,[esp+0x30]
	push 0x3D0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edi,dword ptr [esp+0x4C]
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[edi+8]
	push ecx
	push eax
	mov byte ptr [esp+0x150],0x4B
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov byte ptr [esp+0x144],0x42
	test eax,eax
	je Block324

 Block323:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block324:
	mov esi,dword ptr [edi]
	mov eax,dword ptr [esp+0x14]
	cmp esi,eax
	je Block329

 Block325:
	mov dword ptr [edi],eax
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block327

 Block326:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block327:
	test esi,esi
	je Block329

 Block328:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block329:
	push 0xFF
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x10D3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0xA8]
	push ecx
	mov ecx,dword ptr [esp+0x64]
	mov byte ptr [esp+0x150],0x4C
	mov byte ptr [esp+0x150],0x42
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x14C],0x4D
	call get_int32
	add esp,8
	mov dword ptr [edi+0x20],eax
	cmp word ptr [esp+0xA0],8
	mov byte ptr [esp+0x144],0x42
	jne Block332

 Block330:
	mov eax,dword ptr [esp+0xA8]
	xor edx,edx
	mov word ptr [esp+0xA0],dx
	test eax,eax
	je Block333

 Block331:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block333

 Block332:
	lea eax,[esp+0xA0]
	push eax
	call ebp

 Block333:
	mov esi,dword ptr [edi+0xC]
	mov eax,dword ptr [esp+0x50]
	cmp esi,eax
	je Block336

 Block334:
	mov dword ptr [edi+0xC],eax
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx
	test esi,esi
	je Block336

 Block335:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block336:
	mov ecx,dword ptr [esp+0x40]
	add ecx,0x90
	mov dword ptr [edi+0x24],1
	call ZList<ZRef<CMapLoadable::REFLECTION_INFO>>::AddTail_
	lea edx,[esp+0x48]
	push edx
	mov ecx,eax
	call ZRef<CMapLoadable::REFLECTION_INFO>::op_assign_copy
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x144],0x3B
	test eax,eax
	je Block338

 Block337:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block338:
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0x144],0x38
	call ZRef<CMapLoadable::REFLECTION_INFO>::~ZRef<CMapLoadable::REFLECTION_INFO>
	xor ebp,ebp

 Block339:
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0xBC8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x15C]
	mov byte ptr [esp+0x150],0x4E
	cmp ecx,ebp
	jne Block341

 Block340:
	push 0x80004003
	call _com_issue_error

 Block341:
	lea edx,[esp+0xAC]
	push edx
	mov byte ptr [esp+0x154],0x38
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x14C],0x4F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x40],ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block344

 Block342:
	cmp eax,0x80004002
	je Block344

 Block343:
	push eax
	call _com_issue_error

 Block344:
	cmp word ptr [esp+0xA0],8
	mov byte ptr [esp+0x144],0x51
	jne Block347

 Block345:
	xor eax,eax
	mov word ptr [esp+0xA0],ax
	mov eax,dword ptr [esp+0xA8]
	cmp eax,ebp
	je Block348

 Block346:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block348

 Block347:
	lea ecx,[esp+0xA0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block348:
	cmp dword ptr [esp+0x3C],ebp
	je Block384

 Block349:
	mov ecx,dword ptr [esp+0x40]
	add ecx,0xA4
	call ZList<CMapLoadable::VISIBLE_BY_QUEST>::AddHead_
	mov ecx,eax
	mov esi,dword ptr [ecx]
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x44],ecx
	cmp esi,eax
	je Block354

 Block350:
	mov dword ptr [ecx],eax
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block352

 Block351:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block352:
	test esi,esi
	je Block354

 Block353:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block354:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [esp+0x40]
	mov byte ptr [esp+0x148],0x52
	call IWzProperty::Get_NewEnum
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x148],0x53
	call _x_com_ptr<IEnumVARIANT>::CreateFromUnknownComPtr
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x144],0x55
	test eax,eax
	je Block356

 Block355:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block356:
	cmp dword ptr [esp+0x38],0
	mov dword ptr [esp+0x54],0
	je Block1

 Block357:
	mov bl,0x56

 Block358:
	mov edi,dword ptr [esp+0x38]
	mov ecx,dword ptr [edi]
	mov ecx,dword ptr [ecx+0xC]
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x60]
	push eax
	push 1
	push edi
	call ecx
	test eax,eax
	jne Block376

 Block359:
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x20]
	push eax
	call DetachBSTR
	add esp,8
	mov esi,dword ptr [esp+0x1C]
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block361

 Block360:
	lea ecx,[esi+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block361:
	mov ecx,dword ptr [esp+0x44]
	lea edx,[esp+0x88]
	mov byte ptr [esp+0x14C],0x57
	push edx
	mov byte ptr [esp+0x150],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x14C],0x58
	call get_int32
	add esp,8
	cmp word ptr [esp+0x80],8
	mov ebp,eax
	mov byte ptr [esp+0x144],bl
	jne Block364

 Block362:
	xor eax,eax
	mov word ptr [esp+0x80],ax
	mov eax,dword ptr [esp+0x88]
	test eax,eax
	je Block365

 Block363:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block365

 Block364:
	lea ecx,[esp+0x80]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block365:
	mov ecx,dword ptr [esp+0x44]
	push 0xFFFFFFFF
	add ecx,4
	call ZArray<ZPair<unsigned short, long>>::InsertBefore
	mov edi,eax
	test esi,esi
	je Block367

 Block366:
	mov eax,dword ptr [esi]
	jmp Block368

 Block367:
	xor eax,eax

 Block368:
	push eax
	call __wtoi
	add esp,4
	mov word ptr [edi],ax
	mov dword ptr [edi+4],ebp
	mov byte ptr [esp+0x144],0x55
	test esi,esi
	je Block358

 Block369:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block375

 Block370:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block372

 Block371:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block372:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block374

 Block373:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block374:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block375:
	mov dword ptr [esp+0x1C],0
	jmp Block358

 Block376:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	jne Block378

 Block377:
	push 0x80004003
	call _com_issue_error

 Block378:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x11C]
	push 0
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block380

 Block379:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block380:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0x148],0x52
	call ecx
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0x144],0x51
	jne Block383

 Block381:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block384

 Block382:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block384

 Block383:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block384:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x144],0x38
	test eax,eax
	je Block386

 Block385:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block386:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x144],0x34
	test eax,eax
	je Block388

 Block387:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block388:
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x144],0x33
	test eax,eax
	je Block390

 Block389:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block390:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x144],0x2F
	jne Block393

 Block391:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block476

 Block392:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block476

 Block393:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block476

 Block394:
	mov ecx,dword ptr [esp+0x40]
	push 0
	lea edx,[esp+0x34]
	push edx
	add ecx,0xB8
	mov dword ptr [esp+0x38],esi
	call ZMap<char const *, CMapLoadable::CHANGING_OBJECT, ZXString<char>>::Insert
	xor esi,esi
	mov dword ptr [esp+0xE4],eax
	mov dword ptr [esp+0x50],esi
	lea ecx,[ecx]

 Block395:
	mov dword ptr [esp+0x1C],0
	mov byte ptr [esp+0x144],0x59
	test esi,esi
	je Block398

 Block396:
	push 0
	push 0
	lea eax,[esp+0x4C]
	push 0xB03
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[esp+0x2C]
	or ebx,2
	push ecx
	mov byte ptr [esp+0x158],0x5A
	mov dword ptr [esp+0x28],ebx
	call ZXString16::Format
	mov eax,dword ptr [eax]
	add esp,8
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov dword ptr [esp+0x150],0x5B
	test edi,edi
	je Block1

 Block397:
	lea edx,[esp+0xAC]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x154],0x5A
	call IWzProperty::Getitem
	or ebx,4
	mov ecx,eax
	mov dword ptr [esp+0x14C],0x5C
	mov dword ptr [esp+0x1C],ebx
	call Ztl_variant_t::GetUnknown
	jmp Block399

 Block398:
	mov eax,edi

 Block399:
	xor edi,edi
	mov dword ptr [esp+0x54],edi
	test eax,eax
	je Block402

 Block400:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x30]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x30]
	mov edi,ecx
	mov dword ptr [esp+0x54],edi
	test eax,eax
	jge Block402

 Block401:
	cmp eax,0x80004002
	jne Block40

 Block402:
	mov dword ptr [esp+0x144],0x5E
	test bl,4
	je Block407

 Block403:
	and ebx,0xFFFFFFFB
	cmp word ptr [esp+0xA0],8
	mov dword ptr [esp+0x14],ebx
	jne Block406

 Block404:
	mov eax,dword ptr [esp+0xA8]
	xor edx,edx
	mov word ptr [esp+0xA0],dx
	test eax,eax
	je Block407

 Block405:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block407

 Block406:
	lea eax,[esp+0xA0]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block407:
	mov byte ptr [esp+0x144],0x5F
	test bl,2
	je Block410

 Block408:
	mov eax,dword ptr [esp+0x44]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block410

 Block409:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block410:
	test edi,edi
	sete al
	test al,al
	jne Block472

 Block411:
	mov ecx,dword ptr [esp+0xE4]
	push 0xFFFFFFFF
	add ecx,0x14
	call ZArray<CMapLoadable::OBJECT_STATE>::InsertBefore
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push 0x49B
	push ecx
	mov ebp,eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x148],0x60
	test edi,edi
	je Block1

 Block412:
	lea edx,[esp+0x24]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x14C],0x5F
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [esp+0x144],0x61
	jne Block414

 Block413:
	mov eax,dword ptr [eax+8]
	jmp Block415

 Block414:
	mov eax,offset _S___3

 Block415:
	push eax
	lea ecx,[esp+0x38]
	call _xbstr_t::_ctor_1
	mov ebx,dword ptr [esp+0x34]
	lea esi,[ebp+4]
	lea eax,[esp+0x34]
	cmp esi,eax
	je Block420

 Block416:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block418

 Block417:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block418:
	mov dword ptr [esi],ebx
	test ebx,ebx
	je Block428

 Block419:
	lea ecx,[ebx+8]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block420:
	test ebx,ebx
	je Block428

 Block421:
	lea edx,[ebx+8]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block427

 Block422:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block424

 Block423:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block424:
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block426

 Block425:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block426:
	push ebx
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block427:
	mov dword ptr [esp+0x34],0

 Block428:
	mov esi,8
	mov byte ptr [esp+0x144],0x5F
	cmp word ptr [esp+0x20],si
	jne Block431

 Block429:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block432

 Block430:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block432

 Block431:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block432:
	push 0
	push ecx
	mov dword ptr [esp+0x50],esp
	mov ecx,esp
	push offset _S_RESTARTMOVING
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x64]
	mov byte ptr [esp+0x14C],0x62
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x150],0x5F
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x14C],0x63
	call get_int32
	add esp,8
	mov dword ptr [ebp+0xC],eax
	mov byte ptr [esp+0x144],0x5F
	cmp word ptr [esp+0x5C],si
	jne Block435

 Block433:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block436

 Block434:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block436

 Block435:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block436:
	cmp dword ptr [esp+0x3C],0
	je Block438

 Block437:
	mov edx,dword ptr [esp+0x40]
	mov eax,dword ptr [edx+0x114]
	jmp Block439

 Block438:
	xor eax,eax

 Block439:
	mov edx,dword ptr [esp+0x6C]
	lea ecx,[esp+0x90]
	push ecx
	mov ecx,dword ptr [esp+0xD8]
	push ebp
	push eax
	mov eax,dword ptr [esp+0x44]
	push edx
	mov edx,dword ptr [esp+0xEC]
	push eax
	mov eax,dword ptr [esp+0xEC]
	push ecx
	mov ecx,dword ptr [esp+0xF8]
	push edx
	mov edx,dword ptr [esp+0xB8]
	push eax
	mov eax,dword ptr [esp+0x16C]
	push ecx
	push edx
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x78],esp
	push edi
	call edx
	mov ecx,dword ptr [esp+0x70]
	lea eax,[esp+0x118]
	push eax
	call CMapLoadable::MakeObjLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+8]
	cmp esi,eax
	je Block444

 Block440:
	mov dword ptr [ebp+8],eax
	test eax,eax
	je Block442

 Block441:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block442:
	test esi,esi
	je Block444

 Block443:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block444:
	mov eax,dword ptr [esp+0xE8]
	test eax,eax
	je Block446

 Block445:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block446:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push 0x168A
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x154]
	mov byte ptr [esp+0x148],0x64
	test ecx,ecx
	je Block1

 Block447:
	lea edx,[esp+0x84]
	push edx
	mov byte ptr [esp+0x14C],0x5F
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x144],0x65
	call _xvariant_t::op_long
	mov ebx,8
	mov esi,eax
	mov byte ptr [esp+0x144],0x5F
	cmp word ptr [esp+0x80],bx
	jne Block450

 Block448:
	xor eax,eax
	mov word ptr [esp+0x80],ax
	mov eax,dword ptr [esp+0x88]
	test eax,eax
	je Block451

 Block449:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block451

 Block450:
	lea ecx,[esp+0x80]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block451:
	test esi,esi
	jne Block458

 Block452:
	mov ebp,dword ptr [ebp+8]
	test ebp,ebp
	je Block1

 Block453:
	lea edx,[esp+0x18]
	push edx
	mov ecx,ebp
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x144],0x66
	test esi,esi
	je Block1

 Block454:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x40]
	push 0
	push 0
	push esi
	call ecx
	test eax,eax
	jge Block456

 Block455:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block456:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x144],0x5F
	test eax,eax
	je Block458

 Block457:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block458:
	cmp dword ptr [esp+0x50],0
	jne Block461

 Block459:
	push 0
	push ecx
	mov dword ptr [esp+0x50],esp
	mov ecx,esp
	push offset _S_AUTOACTIVE
	call _xbstr_t::_ctor_1
	lea ecx,[esp+0xB8]
	push ecx
	mov byte ptr [esp+0x150],0x67
	mov ecx,edi
	mov byte ptr [esp+0x150],0x5F
	call IWzProperty::Getitem
	or dword ptr [esp+0x18],ebx
	push eax
	mov byte ptr [esp+0x14C],0x68
	call get_int32
	add esp,8
	test eax,eax
	je Block461

 Block460:
	mov bl,1
	jmp Block462

 Block461:
	xor bl,bl

 Block462:
	test byte ptr [esp+0x14],8
	mov dword ptr [esp+0x144],0x5F
	je Block467

 Block463:
	and dword ptr [esp+0x14],0xFFFFFFF7
	cmp word ptr [esp+0xB0],8
	jne Block466

 Block464:
	mov eax,dword ptr [esp+0xB8]
	xor edx,edx
	mov word ptr [esp+0xB0],dx
	test eax,eax
	je Block467

 Block465:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block467

 Block466:
	lea eax,[esp+0xB0]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block467:
	test bl,bl
	je Block469

 Block468:
	mov ecx,dword ptr [esp+0x90]
	push 0xFFFFFFFF
	push ecx
	mov ecx,dword ptr [esp+0x48]
	call CMapLoadable::SetObjectState

 Block469:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0x148],0x59
	call eax
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x144],0x2F
	test eax,eax
	je Block471

 Block470:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block471:
	inc dword ptr [esp+0x50]
	mov esi,dword ptr [esp+0x50]
	mov edi,dword ptr [esp+0x58]
	mov ebx,dword ptr [esp+0x14]
	jmp Block395

 Block472:
	mov byte ptr [esp+0x144],0x59
	test edi,edi
	je Block474

 Block473:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block474:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x144],0x2F
	test eax,eax
	je Block476

 Block475:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block476:
	mov eax,dword ptr [esp+0x90]
	mov byte ptr [esp+0x144],0x2B
	test eax,eax
	je Block478

 Block477:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block478:
	lea ecx,[esp+0x94]
	mov byte ptr [esp+0x144],0x2A
	call ZArray<ZXString<char>>::RemoveAll
	mov eax,dword ptr [esp+0xC0]
	mov byte ptr [esp+0x144],0x12
	test eax,eax
	je Block480

 Block479:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block480:
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x144],1
	test eax,eax
	je Block483

 Block481:
	mov ecx,dword ptr [eax]
	push eax

 Block482:
	mov edx,dword ptr [ecx+8]
	call edx

 Block483:
	mov eax,dword ptr [esp+0x98]
	mov byte ptr [esp+0x144],0
	test eax,eax
	je Block485

 Block484:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block485:
	mov eax,dword ptr [esp+0x150]
	mov dword ptr [esp+0x144],0xFFFFFFFF
	test eax,eax
	je Block487

 Block486:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block487:
	mov ecx,dword ptr [esp+0x13C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x134
	ret 8
}
}
