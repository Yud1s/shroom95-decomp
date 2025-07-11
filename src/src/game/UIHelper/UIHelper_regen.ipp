#include "regen.hpp"
// UIHelper.ipp
#include "UIHelper.hpp"

// UIHelper::MakeBalloonTip
_SUB_EXCEPTION_HANDLER(3C9780)
__SUB(003C9780, __cdecl, 79110,  _x_com_ptr<IWzGr2DLayer>, NakedParam<_x_com_ptr<IWzFont>>, long, long, long, const ZArray<ZXString<char> >&, NakedParam<_x_com_ptr<IWzGr2DLayer>>) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x5C]
	sub esp,0x5C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C9780
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x70
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x58],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	xor edi,edi
	mov dword ptr [ebp+0x3C],edi
	mov eax,dword ptr [ebp+0x68]
	cmp eax,edi
	sete cl
	mov dword ptr [ebp-4],1
	test cl,cl
	je Block6

 Block1:
	mov esi,dword ptr [ebp+0x64]
	mov dword ptr [esi],edi
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,edi
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block5:
	mov eax,esi
	jmp Block159

 Block6:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x4C]
	push eax
	call esi
	lea ecx,[ebp-0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	lea edx,[ebp]
	push edx
	mov byte ptr [ebp-4],2
	call esi
	lea eax,[ebp]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	push edi
	push edi
	lea ecx,[ebp-0x4C]
	push ecx
	lea edx,[ebp]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x3C],esp
	push 0xC9D
	push eax
	mov byte ptr [ebp-4],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],4
	cmp dword ptr [_D_G_RM],edi
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea ecx,[ebp-0x6C]
	push ecx
	mov byte ptr [ebp-4],3
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x24]
	mov dword ptr [ebp+0x24],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block15

 Block13:
	cmp eax,0x80004002
	je Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x6C],bx
	jne Block18

 Block16:
	mov eax,dword ptr [ebp-0x64]
	xor edx,edx
	mov word ptr [ebp-0x6C],dx
	cmp eax,edi
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[ebp-0x6C]
	push eax
	call esi

 Block19:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp],bx
	jne Block22

 Block20:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	cmp eax,edi
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[ebp]
	push edx
	call esi

 Block23:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x4C],bx
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	cmp eax,edi
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[ebp-0x4C]
	push ecx
	call esi

 Block27:
	mov eax,dword ptr [ebp+0x24]
	cmp eax,edi
	sete cl
	test cl,cl
	je Block34

 Block28:
	mov esi,dword ptr [ebp+0x64]
	mov dword ptr [esi],edi
	mov byte ptr [ebp-4],1
	cmp eax,edi
	je Block30

 Block29:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block30:
	mov eax,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block32

 Block31:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block32:
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,edi
	je Block5

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	mov eax,esi
	jmp Block159

 Block34:
	mov ebx,dword ptr [ebp+0x78]
	mov ecx,ebx
	mov dword ptr [ebp+0x34],edi
	mov dword ptr [ebp+0x50],edi
	call ZArray<ZXString<char>>::GetCount
	test eax,eax
	jbe Block45

 Block35:
	lea eax,[ebp+0x40]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block7

 Block36:
	mov esi,dword ptr [ebp+0x50]
	mov eax,dword ptr [ebx]
	push 0
	add esi,esi
	push 0
	add esi,esi
	add eax,esi
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0xA
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [ebx]
	mov edi,esp
	lea edx,[ebp+0x40]
	push edx
	push 0x3FFFFFFF
	push edi
	add eax,esi
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0xB
	test ecx,ecx
	je Block11

 Block37:
	mov byte ptr [ebp-4],0xA
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+0x40],8
	mov esi,eax
	mov byte ptr [ebp-4],9
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [ebp+0x40],ax
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[ebp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	cmp esi,dword ptr [ebp+0x34]
	jle Block43

 Block42:
	mov dword ptr [ebp+0x34],esi

 Block43:
	mov esi,dword ptr [ebp+0x50]
	inc esi
	mov ecx,ebx
	mov dword ptr [ebp+0x50],esi
	call ZArray<ZXString<char>>::GetCount
	cmp esi,eax
	jb Block35

 Block44:
	xor edi,edi

 Block45:
	mov eax,dword ptr [ebx]
	add dword ptr [ebp+0x34],0x14
	cmp eax,edi
	jne Block47

 Block46:
	xor ecx,ecx
	jmp Block48

 Block47:
	mov ecx,dword ptr [eax-4]

 Block48:
	mov edx,dword ptr [ebp+0x6C]
	mov eax,ecx
	shl eax,4
	sub eax,ecx
	xor ecx,ecx
	add eax,0x14
	xor esi,esi
	xor edi,edi
	mov dword ptr [ebp+0x3C],eax
	mov dword ptr [ebp+0x28],ecx
	mov dword ptr [ebp+0x2C],ecx
	mov dword ptr [ebp+0x38],ecx
	mov dword ptr [ebp+0x30],ecx
	mov dword ptr [ebp+0x50],ecx
	cmp edx,3
	ja Block55

 Block49:
	cmp EDX, 0
je Block50
cmp EDX, 1
je Block51
cmp EDX, 2
je Block52
cmp EDX, 3
je Block53


 Block50:
	mov eax,dword ptr [ebp+0x34]
	mov esi,dword ptr [ebp+0x70]
	sub esi,eax
	sub esi,0x17
	add eax,0xFFFFFFF8
	mov dword ptr [ebp+0x28],ecx
	mov dword ptr [ebp+0x2C],0x17
	mov dword ptr [ebp+0x38],eax
	mov dword ptr [ebp+0x50],0x5AC
	jmp Block54

 Block51:
	mov edx,dword ptr [ebp+0x34]
	mov esi,dword ptr [ebp+0x70]
	mov edi,dword ptr [ebp+0x74]
	sub esi,edx
	sub edi,eax
	add edx,0xFFFFFFF8
	sub esi,0x17
	sub edi,0x17
	add eax,0xFFFFFFF0
	mov dword ptr [ebp+0x28],ecx
	mov dword ptr [ebp+0x2C],ecx
	mov dword ptr [ebp+0x38],edx
	mov dword ptr [ebp+0x30],eax
	mov dword ptr [ebp+0x50],0x5AA
	jmp Block55

 Block52:
	mov edi,dword ptr [ebp+0x74]
	mov esi,dword ptr [ebp+0x70]
	sub edi,eax
	sub edi,0x17
	add eax,0xFFFFFFF0
	mov dword ptr [ebp+0x28],0x17
	mov dword ptr [ebp+0x2C],ecx
	mov dword ptr [ebp+0x38],ecx
	mov dword ptr [ebp+0x30],eax
	mov dword ptr [ebp+0x50],0x5AB
	jmp Block55

 Block53:
	mov esi,dword ptr [ebp+0x70]
	mov eax,0x17
	mov dword ptr [ebp+0x28],eax
	mov dword ptr [ebp+0x2C],eax
	mov dword ptr [ebp+0x38],ecx
	mov dword ptr [ebp+0x50],0x5AD

 Block54:
	mov edi,dword ptr [ebp+0x74]
	mov dword ptr [ebp+0x30],ecx

 Block55:
	lea edx,[ebp-0x5C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x5C]
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
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],0xC
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block59

 Block58:
	push eax
	call _com_issue_error

 Block59:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0xD
	test ecx,ecx
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	lea eax,[ebp-0x5C]
	push eax
	mov eax,dword ptr [ebp+0x3C]
	lea edx,[ebp-0x2C]
	push edx
	mov edx,dword ptr [ebp+0x34]
	push 0xA
	add eax,0x17
	push eax
	add edx,0x17
	push edx
	push 0
	push 0
	lea eax,[ebp+0x54]
	push eax
	call IWzGr2D::CreateLayer
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0xF
	jne Block64

 Block62:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],0x10
	jne Block68

 Block66:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea ecx,[ebp-0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov eax,dword ptr [ebp+0x7C]
	test eax,eax
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block88

 Block70:
	mov edx,0xD
	mov word ptr [ebp+0x40],dx
	mov dword ptr [ebp+0x48],eax
	test eax,eax
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block72:
	cmp dword ptr [ebp+0x54],0
	mov byte ptr [ebp-4],0x11
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ebp+0x40]
	mov ecx,dword ptr [ecx+0x64]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x44]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x48]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x4C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x54]
	push eax
	call ecx
	test eax,eax
	jge Block76

 Block75:
	mov edx,dword ptr [ebp+0x54]
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edx
	push eax
	call _com_issue_errorex

 Block76:
	cmp word ptr [ebp+0x40],8
	mov byte ptr [ebp-4],0x10
	jne Block79

 Block77:
	xor eax,eax
	mov word ptr [ebp+0x40],ax
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea ecx,[ebp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov eax,dword ptr [ebp+0x7C]
	mov edx,0xD
	mov word ptr [ebp+0x40],dx
	mov dword ptr [ebp+0x48],eax
	test eax,eax
	je Block82

 Block81:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block82:
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ebp+0x40]
	mov ecx,dword ptr [ecx+0xFC]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x44]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x48]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x4C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x54]
	push eax
	mov byte ptr [ebp-4],0x12
	call ecx
	test eax,eax
	jge Block84

 Block83:
	mov edx,dword ptr [ebp+0x54]
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edx
	push eax
	call _com_issue_errorex

 Block84:
	cmp word ptr [ebp+0x40],8
	mov byte ptr [ebp-4],0x10
	jne Block87

 Block85:
	xor eax,eax
	mov word ptr [ebp+0x40],ax
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea ecx,[ebp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block88:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x10]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block90

 Block89:
	push eax
	call _com_issue_error

 Block90:
	lea ecx,[ebp+0x40]
	push ecx
	mov byte ptr [ebp-4],0x13
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block92

 Block91:
	push eax
	call _com_issue_error

 Block92:
	cmp dword ptr [ebp+0x54],0
	mov byte ptr [ebp-4],0x14
	jne Block94

 Block93:
	push 0x80004003
	call _com_issue_error

 Block94:
	lea eax,[ebp+0x10]
	push eax
	lea ecx,[ebp+0x40]
	push ecx
	mov ecx,dword ptr [ebp+0x54]
	push 0
	push 0
	call IWzVector2D::RelMove
	cmp word ptr [ebp+0x40],8
	mov byte ptr [ebp-4],0x13
	jne Block97

 Block95:
	mov eax,dword ptr [ebp+0x48]
	xor edx,edx
	mov word ptr [ebp+0x40],dx
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea eax,[ebp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block98:
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],0x10
	jne Block101

 Block99:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	test eax,eax
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block102:
	mov eax,dword ptr [ebp+0x54]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push eax
	call edx
	test eax,eax
	jge Block104

 Block103:
	mov ecx,dword ptr [ebp+0x54]
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ecx
	push eax
	call _com_issue_errorex

 Block104:
	mov eax,dword ptr [ebp+0x54]
	mov edx,dword ptr [eax]
	push edi
	push esi
	push eax
	mov eax,dword ptr [edx+0x44]
	call eax
	test eax,eax
	jge Block106

 Block105:
	mov ecx,dword ptr [ebp+0x54]
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push ecx
	push eax
	call _com_issue_errorex

 Block106:
	mov edx,3
	xor edi,edi
	mov word ptr [ebp+0x10],dx
	mov dword ptr [ebp+0x18],edi
	lea eax,[ebp+0x10]
	push eax
	lea ecx,[ebp+0x20]
	push ecx
	mov ecx,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x15
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],0x17
	jne Block109

 Block107:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	cmp eax,edi
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block110:
	mov ecx,dword ptr [ebp+0x3C]
	mov edx,dword ptr [ebp+0x34]
	mov eax,dword ptr [ebp+0x2C]
	mov esi,dword ptr [ebp+0x20]
	push ecx
	mov ecx,dword ptr [ebp+0x28]
	push edx
	push eax
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x3C],esp
	mov dword ptr [eax],esi
	cmp esi,edi
	je Block112

 Block111:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block112:
	call make_balloon
	mov edx,dword ptr [ebp+0x50]
	add esp,0x14
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x3C],esp
	push edx
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],0x18
	cmp ecx,edi
	jne Block114

 Block113:
	push 0x80004003
	call _com_issue_error

 Block114:
	lea eax,[ebp-0x7C]
	push eax
	mov byte ptr [ebp-4],0x17
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x19
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x3C]
	mov dword ptr [ebp+0x3C],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block117

 Block115:
	cmp eax,0x80004002
	je Block117

 Block116:
	push eax
	call _com_issue_error

 Block117:
	cmp word ptr [ebp-0x7C],8
	mov byte ptr [ebp-4],0x1B
	jne Block120

 Block118:
	mov eax,dword ptr [ebp-0x74]
	xor ecx,ecx
	mov word ptr [ebp-0x7C],cx
	cmp eax,edi
	je Block121

 Block119:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block120:
	lea edx,[ebp-0x7C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block121:
	lea eax,[ebp+0x40]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block123

 Block122:
	push eax
	call _com_issue_error

 Block123:
	mov byte ptr [ebp-4],0x1C
	cmp esi,edi
	jne Block125

 Block124:
	push 0x80004003
	call _com_issue_error

 Block125:
	mov ecx,dword ptr [ebp+0x40]
	mov edi,dword ptr [ebp+0x3C]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x44]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x48]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x4C]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x30]
	mov ecx,dword ptr [ebp+0x38]
	push edi
	push eax
	push ecx
	push esi
	call edx
	test eax,eax
	jge Block127

 Block126:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block127:
	cmp word ptr [ebp+0x40],8
	mov byte ptr [ebp-4],0x1B
	jne Block130

 Block128:
	xor eax,eax
	mov word ptr [ebp+0x40],ax
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea ecx,[ebp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block131:
	mov ecx,ebx
	mov dword ptr [ebp+0x50],0
	call ZArray<ZXString<char>>::GetCount
	test eax,eax
	jbe Block152

 Block132:
	mov edx,dword ptr [ebp+0x2C]
	add edx,0xA
	mov dword ptr [ebp+0x38],edx
	jmp Block134

 Block134:
	lea eax,[ebp+0x40]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block7

 Block135:
	mov esi,dword ptr [ebp+0x50]
	mov eax,dword ptr [ebx]
	push 0
	add esi,esi
	push 0
	add esi,esi
	add eax,esi
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x1D
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [ebx]
	mov edi,esp
	lea edx,[ebp+0x40]
	push edx
	push 0x3FFFFFFF
	push edi
	add eax,esi
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x30],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0x1E
	test ecx,ecx
	je Block11

 Block136:
	mov byte ptr [ebp-4],0x1D
	call IWzFont::CalcTextWidth
	cmp word ptr [ebp+0x40],8
	mov dword ptr [ebp+0x30],eax
	mov byte ptr [ebp-4],0x1B
	jne Block139

 Block137:
	xor eax,eax
	mov word ptr [ebp+0x40],ax
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block140

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block139:
	lea ecx,[ebp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block140:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x3C]
	push edx
	call edi
	lea eax,[ebp-0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block7

 Block141:
	lea ecx,[ebp-0x1C]
	push ecx
	mov byte ptr [ebp-4],0x1F
	call edi
	lea edx,[ebp-0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block7

 Block142:
	mov eax,dword ptr [ebx]
	push 0
	push 0
	add eax,esi
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	mov byte ptr [ebp-4],0x20
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edx,dword ptr [ebp+0x68]
	mov edi,esp
	lea eax,[ebp-0x3C]
	push eax
	mov eax,dword ptr [ebx]
	lea ecx,[ebp-0x1C]
	push ecx
	push edx
	push 0x3FFFFFFF
	push edi
	add eax,esi
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x2C],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov eax,dword ptr [ebp+0x38]
	push eax
	mov eax,dword ptr [ebp+0x30]
	cdq
	sub eax,edx
	mov ecx,eax
	mov eax,dword ptr [ebp+0x34]
	cdq
	sub eax,edx
	sar ecx,1
	sar eax,1
	sub eax,ecx
	add eax,dword ptr [ebp+0x28]
	mov ecx,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x21
	push eax
	mov byte ptr [ebp-4],0x20
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],0x1F
	jne Block145

 Block143:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block146

 Block144:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block146

 Block145:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block146:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0x1B
	jne Block149

 Block147:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	test eax,eax
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea edx,[ebp-0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block150:
	mov esi,dword ptr [ebp+0x50]
	add dword ptr [ebp+0x38],0xF
	inc esi
	mov ecx,ebx
	mov dword ptr [ebp+0x50],esi
	call ZArray<ZXString<char>>::GetCount
	cmp esi,eax
	jb Block134

 Block151:
	mov esi,dword ptr [ebp+0x20]
	mov edi,dword ptr [ebp+0x3C]

 Block152:
	mov ebx,dword ptr [ebp+0x54]
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ebp+0x64]
	mov edx,dword ptr [ecx+4]
	push ebx
	mov dword ptr [eax],ebx
	call edx
	mov byte ptr [ebp-4],0x17
	test edi,edi
	je Block154

 Block153:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block154:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0x10
	call eax
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [ebp-4],9
	call edx
	mov eax,dword ptr [ebp+0x24]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],1
	call edx
	mov eax,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block156

 Block155:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block156:
	mov eax,dword ptr [ebp+0x7C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block158

 Block157:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block158:
	mov eax,dword ptr [ebp+0x64]

 Block159:
	lea esp,[ebp-0x8C]
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
	ret
}
}
