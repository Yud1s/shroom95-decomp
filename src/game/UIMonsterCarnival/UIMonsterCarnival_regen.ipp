#include "regen.hpp"
// UIMonsterCarnival.ipp
#include "UIMonsterCarnival.hpp"

// CTabList::Draw
_SUB_EXCEPTION_HANDLER(40BF70)
__SUB_CLASS_THIS(0040BF70, __thiscall, 69985,  CTabList, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_40BF70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xEC
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x100]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x38],ebp
	push 0
	push 0
	push offset _S_UIUIWINDOW2IMGMO__9
	push ecx
	mov ecx,dword ptr [esp+0x120]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x120]
	mov dword ptr [esp+0x118],0
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	lea esi,[ebp+0xC]
	mov ecx,esi
	call CLayoutMan::CopyToCanvas_1
	push 0
	push 0
	push offset _S_UIUIWINDOW2IMGMO__8
	push ecx
	mov ecx,dword ptr [esp+0x120]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x120]
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block4:
	mov ecx,esi
	call CLayoutMan::CopyToCanvas_1
	push 0
	push 0
	push offset _S_UIUIWINDOW2IMGMO__7
	push ecx
	mov ecx,dword ptr [esp+0x120]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x120]
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block6

 Block5:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block6:
	mov ecx,esi
	call CLayoutMan::CopyToCanvas_1
	mov eax,dword ptr [ebp+4]
	add eax,0xB74
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [ebp+4]
	mov ebx,dword ptr [eax+0xB64]
	add eax,0xB64
	mov byte ptr [esp+0x108],1
	mov dword ptr [esp+0x24],ebx
	test ebx,ebx
	je Block10

 Block9:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+4]
	push ebx
	call ecx

 Block10:
	xor ecx,ecx
	mov edi,0x1A
	mov byte ptr [esp+0x108],2
	mov dword ptr [esp+0x2C],edi
	mov dword ptr [esp+0x28],ecx
	xor esi,esi

 Block11:
	mov eax,dword ptr [ebp+8]
	mov dword ptr [esp+0x3C],esi
	test eax,eax
	je Block121

 Block12:
	cmp esi,dword ptr [eax-4]
	jae Block121

 Block13:
	cmp ecx,0xB
	jge Block121

 Block14:
	mov edx,dword ptr [ebp+4]
	mov eax,dword ptr [edx+0xB18]
	cmp esi,dword ptr [eax+0x38]
	jge Block16

 Block15:
	mov ecx,dword ptr [ebp+8]
	push 0
	push 0
	push 0
	lea eax,[esi+esi*4]
	push 0
	lea edx,[ecx+eax*8+0x14]
	push edx
	call SetRect
	jmp Block118

 Block16:
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block18

 Block17:
	mov eax,dword ptr [eax-4]

 Block18:
	dec eax
	cmp esi,eax
	je Block20

 Block19:
	cmp ecx,0xA
	jne Block25

 Block20:
	push edi
	push 0
	push offset _S_UIUIWINDOW2IMGMO__6
	push ecx
	mov ecx,dword ptr [esp+0x120]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x120]
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block22

 Block21:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block22:
	lea ebx,[ebp+0xC]
	mov ecx,ebx
	call CLayoutMan::CopyToCanvas_1
	push edi
	push 0
	push offset _S_UIUIWINDOW2IMGMO__5
	push ecx
	mov ecx,dword ptr [esp+0x120]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x120]
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block24

 Block23:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block24:
	mov ecx,ebx
	call CLayoutMan::CopyToCanvas_1
	push edi
	push 0
	push offset _S_UIUIWINDOW2IMGMO__4
	jmp Block30

 Block25:
	push edi
	push 0
	push offset _S_UIUIWINDOW2IMGMO__3
	push ecx
	mov ecx,dword ptr [esp+0x120]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x120]
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block27

 Block26:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block27:
	lea ebx,[ebp+0xC]
	mov ecx,ebx
	call CLayoutMan::CopyToCanvas_1
	push edi
	push 0
	push offset _S_UIUIWINDOW2IMGMO__2
	push ecx
	mov ecx,dword ptr [esp+0x120]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x120]
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block29

 Block28:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block29:
	mov ecx,ebx
	call CLayoutMan::CopyToCanvas_1
	push edi
	push 0
	push offset _S_UIUIWINDOW2IMGMO__1

 Block30:
	push ecx
	mov ecx,dword ptr [esp+0x120]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x120]
	mov dword ptr [esp+0x24],esp
	test eax,eax
	je Block32

 Block31:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block32:
	mov ecx,ebx
	call CLayoutMan::CopyToCanvas_1
	xor ebx,ebx
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x34],ebx
	mov ecx,dword ptr [ebp+8]
	lea esi,[esi+esi*4]
	add esi,esi
	add esi,esi
	add esi,esi
	mov edx,dword ptr [esi+ecx+4]
	push edx
	lea eax,[esp+0x20]
	push offset _S_S__1
	push eax
	mov byte ptr [esp+0x114],5
	mov dword ptr [esp+0x20],esi
	call ZXString<char>::Format
	add esp,0xC
	push 0x3A
	push ecx
	mov ecx,dword ptr [esp+0x28]
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],ecx
	cmp ecx,ebx
	je Block34

 Block33:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ecx
	call eax

 Block34:
	lea ecx,[esp+0x24]
	push ecx
	call format_string_1
	mov edx,dword ptr [ebp+8]
	mov eax,dword ptr [esi+edx+8]
	push eax
	lea ecx,[esp+0x40]
	push offset _S_D__1
	push ecx
	call ZXString<char>::Format
	mov edx,dword ptr [ebp+8]
	mov eax,dword ptr [esi+edx+0xC]
	push eax
	lea ecx,[esp+0x50]
	push offset _S_S__1
	push ecx
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+4]
	mov edx,dword ptr [ebp+8]
	mov ecx,dword ptr [eax+0x15C0]
	add esp,0x24
	lea ebx,[edi+1]
	cmp ecx,dword ptr [esi+edx]
	jne Block73

 Block35:
	mov eax,dword ptr [esp+0x110]
	test eax,eax
	je Block119

 Block36:
	mov edx,dword ptr [eax]
	push 0xFF244768
	push 0xE
	push 0x72
	push edi
	push 0xB
	mov esi,eax
	push eax
	mov eax,dword ptr [edx+0x8C]
	call eax
	test eax,eax
	jge Block38

 Block37:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block38:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x60]
	push ecx
	call esi
	lea edx,[esp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block120

 Block39:
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x10C],6
	call esi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block120

 Block40:
	mov ecx,dword ptr [esp+0x24]
	lea edx,[esp+0x60]
	push edx
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x44]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x11C],7
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x120]
	mov byte ptr [esp+0x118],8
	test ecx,ecx
	je Block119

 Block41:
	push ebx
	push 0xC
	mov byte ptr [esp+0x120],7
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0x108],6
	cmp word ptr [esp+0x40],di
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov byte ptr [esp+0x108],5
	cmp word ptr [esp+0x60],di
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea eax,[esp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block49:
	lea ecx,[esp+0x80]
	push ecx
	call esi
	lea edx,[esp+0x80]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block120

 Block50:
	lea eax,[esp+0xE0]
	push eax
	mov byte ptr [esp+0x10C],9
	call esi
	lea ecx,[esp+0xE0]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block120

 Block51:
	mov ecx,dword ptr [esp+0x24]
	mov ebp,dword ptr [esp+0x30]
	lea edx,[esp+0x80]
	push edx
	lea eax,[esp+0xE4]
	push eax
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x11C],0xA
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x118],0xB
	test ebp,ebp
	je Block53

 Block52:
	mov eax,dword ptr [ebp-4]
	jmp Block54

 Block53:
	xor eax,eax

 Block54:
	mov ecx,dword ptr [esp+0x120]
	test ecx,ecx
	je Block119

 Block55:
	lea edx,[eax+eax*4]
	mov eax,0x59
	push ebx
	sub eax,edx
	push eax
	mov byte ptr [esp+0x120],0xA
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x108],9
	cmp word ptr [esp+0xE0],si
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0xE8]
	xor ecx,ecx
	mov word ptr [esp+0xE0],cx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[esp+0xE0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov byte ptr [esp+0x108],5
	cmp word ptr [esp+0x80],si
	jne Block62

 Block60:
	xor eax,eax
	mov word ptr [esp+0x80],ax
	mov eax,dword ptr [esp+0x88]
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea ecx,[esp+0x80]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xA0]
	push edx
	call esi
	lea eax,[esp+0xA0]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block120

 Block64:
	lea ecx,[esp+0xC0]
	push ecx
	mov byte ptr [esp+0x10C],0xC
	call esi
	lea edx,[esp+0xC0]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block120

 Block65:
	mov edx,dword ptr [esp+0x24]
	mov edi,dword ptr [esp+0x34]
	lea eax,[esp+0xA0]
	push eax
	lea ecx,[esp+0xC4]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edi
	mov byte ptr [esp+0x11C],0xD
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x120]
	mov byte ptr [esp+0x118],0xE
	test ecx,ecx
	je Block119

 Block66:
	push ebx
	push 0x65
	mov byte ptr [esp+0x120],0xD
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x108],0xC
	cmp word ptr [esp+0xC0],si
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [esp+0xC0],ax
	mov eax,dword ptr [esp+0xC8]
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[esp+0xC0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov byte ptr [esp+0x108],5
	cmp word ptr [esp+0xA0],si
	jne Block72

 Block71:
	mov eax,dword ptr [esp+0xA8]
	xor edx,edx
	mov word ptr [esp+0xA0],dx
	jmp Block108

 Block72:
	lea eax,[esp+0xA0]
	jmp Block111

 Block73:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x70]
	push ecx
	call esi
	lea edx,[esp+0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block120

 Block74:
	lea eax,[esp+0x50]
	push eax
	mov byte ptr [esp+0x10C],0xF
	call esi
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block120

 Block75:
	mov ebp,dword ptr [esp+0x20]
	lea edx,[esp+0x70]
	push edx
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x54]
	push eax
	push ebp
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x11C],0x10
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x120]
	mov byte ptr [esp+0x118],0x11
	test ecx,ecx
	je Block119

 Block76:
	push ebx
	push 0xC
	mov byte ptr [esp+0x120],0x10
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x108],0xF
	jne Block83

 Block77:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block79

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block79:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block80:
	cmp word ptr [esp+0x70],8
	mov byte ptr [esp+0x108],5
	jne Block84

 Block81:
	mov eax,dword ptr [esp+0x78]
	xor edx,edx
	mov word ptr [esp+0x70],dx
	test eax,eax
	je Block85

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block83:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x50]
	push ecx
	call edi
	jmp Block80

 Block84:
	lea eax,[esp+0x70]
	push eax
	call edi

 Block85:
	lea ecx,[esp+0xB0]
	push ecx
	call esi
	lea edx,[esp+0xB0]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block120

 Block86:
	lea eax,[esp+0x90]
	push eax
	mov byte ptr [esp+0x10C],0x12
	call esi
	lea ecx,[esp+0x90]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block120

 Block87:
	lea edx,[esp+0xB0]
	push edx
	lea eax,[esp+0x94]
	push eax
	push ebp
	mov ebp,dword ptr [esp+0x3C]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x11C],0x13
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x118],0x14
	test ebp,ebp
	je Block89

 Block88:
	mov eax,dword ptr [ebp-4]
	jmp Block90

 Block89:
	xor eax,eax

 Block90:
	mov ecx,dword ptr [esp+0x120]
	test ecx,ecx
	je Block119

 Block91:
	lea edx,[eax+eax*4]
	mov eax,0x59
	push ebx
	sub eax,edx
	push eax
	mov byte ptr [esp+0x120],0x13
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x90],8
	mov byte ptr [esp+0x108],0x12
	jne Block94

 Block92:
	mov eax,dword ptr [esp+0x98]
	xor ecx,ecx
	mov word ptr [esp+0x90],cx
	test eax,eax
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea edx,[esp+0x90]
	push edx
	call edi

 Block95:
	cmp word ptr [esp+0xB0],8
	mov byte ptr [esp+0x108],5
	jne Block98

 Block96:
	xor eax,eax
	mov word ptr [esp+0xB0],ax
	mov eax,dword ptr [esp+0xB8]
	test eax,eax
	je Block99

 Block97:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block98:
	lea ecx,[esp+0xB0]
	push ecx
	call edi

 Block99:
	lea edx,[esp+0xF0]
	push edx
	call esi
	lea eax,[esp+0xF0]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block120

 Block100:
	lea ecx,[esp+0xD0]
	push ecx
	mov byte ptr [esp+0x10C],0x15
	call esi
	lea edx,[esp+0xD0]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block120

 Block101:
	mov edx,dword ptr [esp+0x20]
	mov edi,dword ptr [esp+0x34]
	lea eax,[esp+0xF0]
	push eax
	lea ecx,[esp+0xD4]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edi
	mov byte ptr [esp+0x11C],0x16
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x120]
	mov byte ptr [esp+0x118],0x17
	test ecx,ecx
	je Block119

 Block102:
	push ebx
	push 0x65
	mov byte ptr [esp+0x120],0x16
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x108],0x15
	cmp word ptr [esp+0xD0],si
	jne Block105

 Block103:
	xor eax,eax
	mov word ptr [esp+0xD0],ax
	mov eax,dword ptr [esp+0xD8]
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea ecx,[esp+0xD0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	mov byte ptr [esp+0x108],5
	cmp word ptr [esp+0xF0],si
	jne Block110

 Block107:
	mov eax,dword ptr [esp+0xF8]
	xor edx,edx
	mov word ptr [esp+0xF0],dx

 Block108:
	test eax,eax
	je Block112

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block110:
	lea eax,[esp+0xF0]

 Block111:
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block112:
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x38]
	mov edx,dword ptr [ecx+8]
	lea esi,[eax+0xE]
	push esi
	push 0x7D
	push eax
	mov eax,dword ptr [esp+0x20]
	push 0xB
	lea ecx,[eax+edx+0x14]
	push ecx
	call SetRect
	inc dword ptr [esp+0x28]
	mov dword ptr [esp+0x2C],esi
	mov byte ptr [esp+0x108],4
	test edi,edi
	je Block114

 Block113:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block114:
	mov byte ptr [esp+0x108],3
	test ebp,ebp
	je Block116

 Block115:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block116:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x108],2
	test eax,eax
	je Block118

 Block117:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block118:
	mov esi,dword ptr [esp+0x3C]
	mov ebx,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x28]
	mov ebp,dword ptr [esp+0x38]
	mov edi,dword ptr [esp+0x2C]
	inc esi
	jmp Block11

 Block119:
	push 0x80004003
	call _com_issue_error

 Block120:
	push eax
	call _com_issue_error

 Block121:
	mov byte ptr [esp+0x108],1
	test ebx,ebx
	je Block123

 Block122:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block123:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x108],0
	test eax,eax
	je Block125

 Block124:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block125:
	mov eax,dword ptr [esp+0x110]
	mov dword ptr [esp+0x108],0xFFFFFFFF
	test eax,eax
	je Block127

 Block126:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block127:
	mov ecx,dword ptr [esp+0x100]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xF8
	ret 4
}
}
// CTabList::GetSelectItemIdx
__SUB_CLASS_THIS(0040AE00, __thiscall, 69990,  CTabList, unsigned long, uint32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	xor edx,edx
	xor esi,esi
	lea ebx,[ebx]

 Block1:
	mov eax,dword ptr [ecx+8]
	test eax,eax
	je Block6

 Block2:
	cmp edx,dword ptr [eax-4]
	jae Block6

 Block3:
	cmp dword ptr [esi+eax+0x24],edi
	je Block5

 Block4:
	inc edx
	add esi,0x28
	jmp Block1

 Block5:
	lea edx,[edx+edx*4]
	mov eax,dword ptr [eax+edx*8]
	pop edi
	pop esi
	ret 4

 Block6:
	pop edi
	xor eax,eax
	pop esi
	ret 4
}
}
// CTabList::GetSelectItemIdx
__SUB_CLASS_THIS(0040ADA0, __thiscall, 69991,  CTabList, unsigned long, NakedParam<tagPOINT>) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	xor esi,esi
	mov ebx,ecx
	xor edi,edi
	lea esp,[esp]

 Block1:
	mov eax,dword ptr [ebx+8]
	test eax,eax
	je Block6

 Block2:
	cmp esi,dword ptr [eax-4]
	jae Block6

 Block3:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x10]
	push ecx
	add eax,edi
	push edx
	add eax,0x14
	push eax
	call PtInRect
	test eax,eax
	jne Block5

 Block4:
	inc esi
	add edi,0x28
	jmp Block1

 Block5:
	mov ecx,dword ptr [ebx+8]
	pop edi
	lea eax,[esi+esi*4]
	mov eax,dword ptr [ecx+eax*8]
	pop esi
	pop ebx
	ret 8

 Block6:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 8
}
}
// CUISummonedList::OnCreate
_SUB_EXCEPTION_HANDLER(40E240)
__SUB_CLASS_THIS(0040E240, __thiscall, 70115,  CUISummonedList, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_40E240
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
	mov ebp,ecx
	push 0
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGMO__15
	call _xbstr_t::_ctor_1
	mov ecx,ebp
	call CWnd::SetBackgrnd
	lea eax,[esp+0x14]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea esi,[ebp+0xAC8]
	push esi
	push eax
	mov dword ptr [esp+0x44],0
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	or ebx,0xFFFFFFFF
	add esp,0xC
	mov dword ptr [esp+0x38],ebx
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	lea ecx,[esp+0x14]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[ebp+0xACC]
	push edi
	push eax
	mov dword ptr [esp+0x44],1
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov dword ptr [esp+0x38],ebx
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x20]
	push ecx
	push 0xFF777777
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1A25
	push edx
	mov dword ptr [esp+0x50],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x48],3
	test ecx,ecx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov byte ptr [esp+0x48],2
	call IWzFont::Create
	mov esi,8
	mov dword ptr [esp+0x38],ebx
	cmp word ptr [esp+0x20],si
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	lea ecx,[esp+0x20]
	push ecx
	push 0xFFFFFFFF
	push 0xB
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1A25
	mov ebx,4
	push edx
	mov dword ptr [esp+0x50],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x48],5
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov byte ptr [esp+0x48],bl
	call IWzFont::Create
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp word ptr [esp+0x20],si
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov ecx,dword ptr [TSingleton<CUIMonsterCarnival>::ms_pInstance]
	lea edx,[esp+0x18]
	push edx
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0x38],6
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block22

 Block21:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block22:
	lea ecx,[esp+0x14]
	push ecx
	mov bl,7
	mov ecx,ebp
	mov byte ptr [esp+0x3C],bl
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x38],8
	test esi,esi
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0xFC]
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
	jge Block26

 Block25:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block26:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x38],bl
	test eax,eax
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block28:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x38],6
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov eax,dword ptr [esp+0x18]
	or edi,0xFFFFFFFF
	mov dword ptr [esp+0x38],edi
	test eax,eax
	je Block34

 Block33:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block34:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebp
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x38],9
	test esi,esi
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xB4]
	push 0xFFFFFFFE
	push esi
	call eax
	test eax,eax
	jge Block38

 Block37:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block38:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x38],edi
	test eax,eax
	je Block40

 Block39:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block40:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x38],0xA
	test eax,eax
	je Block42

 Block41:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block43

 Block42:
	xor eax,eax

 Block43:
	mov dword ptr [esp+0x38],edi
	test eax,eax
	je Block50

 Block44:
	add eax,8
	je Block50

 Block45:
	lea esi,[eax-8]
	test esi,esi
	je Block47

 Block46:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block47:
	mov eax,dword ptr [ebp+0xAD4]
	mov dword ptr [ebp+0xAD4],esi
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block49

 Block48:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block49:
	mov ecx,ebp
	call CUISummonedList::SetScrollBar
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 4

 Block50:
	xor esi,esi
	jmp Block47
}
}
// CUIMonsterCarnival::SetUIData
_SUB_EXCEPTION_HANDLER(40E9B0)
__SUB_CLASS_THIS(0040E9B0, __thiscall, 70039,  CUIMonsterCarnival, void, long, long, NakedParam<ZXString<char>>, long, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_40E9B0
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
	push ecx
	mov ecx,esp
	lea eax,[esp+0x30]
	mov dword ptr [esp+0xC],esp
	push eax
	mov dword ptr [esp+0x1C],1
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x2C]
	push ecx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x30]
	mov dword ptr [esp+0x34],esp
	push edx
	mov byte ptr [esp+0x24],2
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0x20],1
	mov ecx,dword ptr [esi+ecx*4+0xB50]
	push eax
	call CTabList::SetData
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0x14
}
}
// CUISummonedList::OnSetFocus
__SUB_CLASS_THIS(0040B1A0, __thiscall, 70116,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CUIMonsterCarnival::DrawLockTooltip
_SUB_EXCEPTION_HANDLER(40DE40)
__SUB_CLASS_THIS(0040DE40, __thiscall, 70042,  CUIMonsterCarnival, int32_t, long, long, NakedParam<tagPOINT>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_40DE40
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
	mov ebp,ecx
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x34]
	push eax
	push ecx
	lea edx,[ebp+0xB2C]
	push edx
	call PtInRect
	test eax,eax
	je Block9

 Block1:
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x24],ebx
	cmp dword ptr [ebp+0xB3C],ebx
	je Block3

 Block2:
	lea eax,[esp+0x18]
	push 0x1079
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x28],1
	push ecx
	jmp Block4

 Block3:
	lea edx,[esp+0x18]
	push 0x1078
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea eax,[esp+0x18]
	mov byte ptr [esp+0x28],2
	push eax

 Block4:
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,8
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov edx,dword ptr [ebp+4]
	mov edi,dword ptr [esp+0x14]
	mov eax,dword ptr [edx+0x30]
	lea esi,[ebp+4]
	push edi
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x34]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x34]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[ebp+0xB78]
	call CUIToolTip::SetToolTip_String
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp edi,ebx
	je Block8

 Block7:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,1
	jmp Block10

 Block9:
	lea ecx,[ebp+0xB78]
	call CUIToolTip::ClearToolTip
	xor eax,eax

 Block10:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 0x10
}
}
// CUIMonsterCarnival::DrawCPTooltip
_SUB_EXCEPTION_HANDLER(40FD90)
__SUB_CLASS_THIS(0040FD90, __thiscall, 70042,  CUIMonsterCarnival, int32_t, long, long, NakedParam<tagPOINT>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_40FD90
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
	push 0x22
	push 0x76
	push 0x18
	push 8
	lea eax,[esp+0x5C]
	push eax
	call SetRect
	push 0x34
	push 0x76
	xor ebx,ebx
	push 0x2A
	push 8
	cmp dword ptr [esi+0x15E4],ebx
	jne Block2

 Block1:
	lea ecx,[esp+0x3C]
	push ecx
	call SetRect
	push 0x41
	push 0x76
	push 0x37
	push 8
	lea edx,[esp+0x4C]
	push edx
	jmp Block3

 Block2:
	lea eax,[esp+0x4C]
	push eax
	call SetRect
	push 0x41
	push 0x76
	push 0x37
	push 8
	lea ecx,[esp+0x3C]
	push ecx

 Block3:
	call SetRect
	mov dword ptr [esp+0x14],ebx
	xor ebp,ebp
	mov dword ptr [esp+0x64],ebx
	mov dword ptr [esp+0x18],ebp
	mov edx,dword ptr [esp+0x78]
	mov eax,dword ptr [esp+0x74]
	push edx
	push eax
	lea ecx,[esp+0x54]
	push ecx
	mov byte ptr [esp+0x70],1
	call PtInRect
	test eax,eax
	je Block7

 Block4:
	lea edx,[esp+0x1C]
	push 0x1048
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0x6C],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,8
	mov byte ptr [esp+0x64],1
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	lea ecx,[esp+0x1C]
	push 0x1049
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi+0x15D0]
	mov ecx,dword ptr [esi+0x15CC]
	mov eax,dword ptr [eax]
	push edx
	push ecx
	push eax
	lea edx,[esp+0x24]
	mov byte ptr [esp+0x70],3
	push edx
	jmp Block15

 Block7:
	mov eax,dword ptr [esp+0x78]
	mov ecx,dword ptr [esp+0x74]
	push eax
	push ecx
	lea edx,[esp+0x34]
	push edx
	call PtInRect
	test eax,eax
	je Block11

 Block8:
	lea eax,[esp+0x1C]
	push 0x104A
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x6C],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,8
	mov byte ptr [esp+0x64],1
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	lea edx,[esp+0x1C]
	push 0x1049
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [esi+0x15E4]
	mov edx,dword ptr [esi+eax*4+0x15DC]
	mov eax,dword ptr [esi+eax*4+0x15D4]
	push edx
	push eax
	push ecx
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x70],5
	push ecx
	jmp Block15

 Block11:
	mov edx,dword ptr [esp+0x78]
	mov eax,dword ptr [esp+0x74]
	push edx
	push eax
	lea ecx,[esp+0x44]
	push ecx
	call PtInRect
	test eax,eax
	je Block31

 Block12:
	xor edx,edx
	cmp dword ptr [esi+0x15E4],ebx
	lea eax,[esp+0x1C]
	sete dl
	push 0x104C
	push eax
	mov edi,edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x6C],6
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,8
	mov byte ptr [esp+0x64],1
	cmp eax,ebx
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	lea edx,[esp+0x1C]
	push 0x1049
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+edi*4+0x15DC]
	mov edx,dword ptr [esi+edi*4+0x15D4]
	mov eax,dword ptr [eax]
	push ecx
	push edx
	push eax
	lea eax,[esp+0x24]
	mov byte ptr [esp+0x70],7
	push eax

 Block15:
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x2C]
	add esp,0x10
	mov byte ptr [esp+0x64],1
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block30

 Block18:
	cmp byte ptr [eax],0
	je Block30

 Block19:
	mov ebp,dword ptr [esp+0x18]
	cmp ebp,ebx
	je Block31

 Block20:
	cmp byte ptr [ebp],0
	je Block31

 Block21:
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [ebp-4]
	mov ecx,dword ptr [ecx-4]
	cmp eax,ecx
	jge Block23

 Block22:
	mov eax,ecx

 Block23:
	lea edi,[eax+eax*2]
	add edi,edi
	mov dword ptr [esp+0x1C],ebx
	push offset _S_N
	lea edx,[esp+0x28]
	push edx
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x6C],8
	call ZXString<char>::op_add_0
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x24]
	mov bl,9
	push edx
	mov ecx,eax
	mov byte ptr [esp+0x6C],bl
	call ZXString<char>::op_add_1
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x68],0xA
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x64],bl
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x64],8
	test eax,eax
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block27:
	push 1
	push edi
	push ecx
	mov ecx,esp
	lea eax,[esp+0x28]
	mov dword ptr [esp+0x34],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	lea edi,[esi+4]
	mov ecx,edi
	mov byte ptr [esp+0x70],0xB
	call eax
	mov ecx,dword ptr [esp+0x7C]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [edi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	mov ecx,dword ptr [esp+0x7C]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[esi+0xB78]
	mov byte ptr [esp+0x78],8
	call CUIToolTip::SetToolTip_String_MultiLine
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x64],1
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	add ebp,0xFFFFFFF4
	push ebp
	mov byte ptr [esp+0x68],0
	call ZXString<char>::_Release
	mov eax,dword ptr [esp+0x18]
	add eax,0xFFFFFFF4
	push eax
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	call ZXString<char>::_Release
	add esp,8
	mov eax,1
	jmp Block36

 Block30:
	mov ebp,dword ptr [esp+0x18]

 Block31:
	lea ecx,[esi+0xB78]
	call CUIToolTip::ClearToolTip
	mov byte ptr [esp+0x64],0
	cmp ebp,ebx
	je Block33

 Block32:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block33:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x64],0xFFFFFFFF
	cmp eax,ebx
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	xor eax,eax

 Block36:
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret 0x10
}
}
// CUIMonsterCarnival::OnTabAutoOpen
_SUB_EXCEPTION_HANDLER(410200)
__SUB_CLASS_THIS(00410200, __thiscall, 70028,  CUIMonsterCarnival, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_410200
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0xB44],0
	je Block3

 Block1:
	cmp dword ptr [esp+0x1C],0
	je Block3

 Block2:
	mov eax,dword ptr [esi+0xB40]
	inc eax
	cdq
	mov ecx,3
	idiv ecx
	mov edi,edx
	jmp Block4

 Block3:
	mov edi,dword ptr [esi+0xB40]

 Block4:
	lea edx,[esp+0x1C]
	push 0x4F7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x18],0
	call play_ui_sound
	mov eax,dword ptr [esp+0x20]
	add esp,4
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esi+0xB10]
	push edi
	call CCtrlTab::SetTab
	push 1
	mov ecx,esi
	call CUIMonsterCarnival::ToggleTabWindow
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 4
}
}
// CTabList::SetData
_SUB_EXCEPTION_HANDLER(40E110)
__SUB_CLASS_THIS(0040E110, __thiscall, 69987,  CTabList, void, long, NakedParam<ZXString<char>>, long, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_40E110
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x40],ebx
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	mov esi,dword ptr [esp+0x48]
	lea eax,[esp+0x4C]
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x44],2
	mov dword ptr [esp+0x14],esi
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x48],ebx
	push esi
	lea edx,[esp+0x4C]
	push offset _S_FD
	push edx
	mov byte ptr [esp+0x4C],3
	call ZXString<char>::Format
	add esp,0xC
	push eax
	lea ecx,[esp+0x20]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],2
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	lea eax,[esp+0x54]
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::op_assign
	lea ecx,[esi-1]
	cmp ecx,0xB
	ja Block4

 Block3:
	add esi,0x6F
	mov dword ptr [esp+0x34],esi
	jmp Block5

 Block4:
	mov dword ptr [esp+0x34],ebx

 Block5:
	lea edx,[esp+0x10]
	push edx
	push 0xFFFFFFFF
	lea ecx,[edi+8]
	call ZArray<CTabList::TAB_ITEM>::InsertBefore
	mov ecx,eax
	call CTabList::TAB_ITEM::operator=
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x40],1
	call CTabList::TAB_ITEM::~TAB_ITEM
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x40],bl
	cmp eax,ebx
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	cmp eax,ebx
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x34
	ret 0x10
}
}
// CUIMonsterCarnival::~CUIMonsterCarnival
_SUB_EXCEPTION_HANDLER(40EEB0)
__SUB_CLASS_THIS0(0040EEB0, __thiscall, 70025,  CUIMonsterCarnival, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_40EEB0
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
	mov dword ptr [esp+0x14],esi
	int 3// TODO: 	mov dword ptr [esi],offset CUIMonsterCarnival::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIMonsterCarnival::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIMonsterCarnival::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x20],0xF
	lea edi,[esi+0xB50]
	mov ebx,3
	xor ebp,ebp

 Block1:
	mov ecx,dword ptr [edi]
	cmp ecx,ebp
	je Block3

 Block2:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block3:
	add edi,4
	sub ebx,1
	jne Block1

 Block4:
	mov ecx,dword ptr [esi+0xB60]
	cmp ecx,ebp
	je Block7

 Block5:
	call CWnd::Destroy
	cmp dword ptr [esi+0xB60],ebp
	lea edi,[esi+0xB5C]
	je Block7

 Block6:
	push ebp
	mov ecx,edi
	call ZRef<CUISummonedList>::_ReleaseRaw
	mov dword ptr [edi+4],ebp

 Block7:
	lea ecx,[esi+0x15E8]
	mov byte ptr [esp+0x20],0xE
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0x15C4]
	mov byte ptr [esp+0x20],0xD
	cmp eax,ebp
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	lea ecx,[esi+0xB78]
	mov byte ptr [esp+0x20],0xC
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+0xB74]
	mov byte ptr [esp+0x20],0xB
	cmp eax,ebp
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov eax,dword ptr [esi+0xB70]
	mov byte ptr [esp+0x20],0xA
	cmp eax,ebp
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov eax,dword ptr [esi+0xB6C]
	mov byte ptr [esp+0x20],9
	cmp eax,ebp
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	mov eax,dword ptr [esi+0xB68]
	mov byte ptr [esp+0x20],8
	cmp eax,ebp
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	mov eax,dword ptr [esi+0xB64]
	mov byte ptr [esp+0x20],7
	cmp eax,ebp
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	mov eax,dword ptr [esi+0xB60]
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x20],6
	cmp eax,ebp
	je Block28

 Block20:
	add eax,0xC
	push eax
	call ebx
	test eax,eax
	jne Block27

 Block21:
	mov eax,dword ptr [esi+0xB60]
	cmp eax,ebp
	je Block23

 Block22:
	add eax,8
	jmp Block24

 Block23:
	xor eax,eax

 Block24:
	add eax,4
	push eax
	call edi
	mov eax,dword ptr [esi+0xB60]
	cmp eax,ebp
	je Block27

 Block25:
	lea ecx,[eax+8]
	cmp ecx,ebp
	je Block27

 Block26:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block27:
	mov dword ptr [esi+0xB60],ebp

 Block28:
	mov eax,dword ptr [esi+0xB28]
	mov byte ptr [esp+0x20],5
	cmp eax,ebp
	je Block37

 Block29:
	add eax,0xC
	push eax
	call ebx
	test eax,eax
	jne Block36

 Block30:
	mov eax,dword ptr [esi+0xB28]
	cmp eax,ebp
	je Block32

 Block31:
	add eax,8
	jmp Block33

 Block32:
	xor eax,eax

 Block33:
	add eax,4
	push eax
	call edi
	mov eax,dword ptr [esi+0xB28]
	cmp eax,ebp
	je Block36

 Block34:
	lea ecx,[eax+8]
	cmp ecx,ebp
	je Block36

 Block35:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block36:
	mov dword ptr [esi+0xB28],ebp

 Block37:
	mov eax,dword ptr [esi+0xB20]
	mov byte ptr [esp+0x20],4
	cmp eax,ebp
	je Block46

 Block38:
	add eax,0xC
	push eax
	call ebx
	test eax,eax
	jne Block45

 Block39:
	mov eax,dword ptr [esi+0xB20]
	cmp eax,ebp
	je Block41

 Block40:
	add eax,8
	jmp Block42

 Block41:
	xor eax,eax

 Block42:
	add eax,4
	push eax
	call edi
	mov eax,dword ptr [esi+0xB20]
	cmp eax,ebp
	je Block45

 Block43:
	lea ecx,[eax+8]
	cmp ecx,ebp
	je Block45

 Block44:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block45:
	mov dword ptr [esi+0xB20],ebp

 Block46:
	mov eax,dword ptr [esi+0xB18]
	mov byte ptr [esp+0x20],3
	cmp eax,ebp
	je Block55

 Block47:
	add eax,0xC
	push eax
	call ebx
	test eax,eax
	jne Block54

 Block48:
	mov eax,dword ptr [esi+0xB18]
	cmp eax,ebp
	je Block50

 Block49:
	add eax,8
	jmp Block51

 Block50:
	xor eax,eax

 Block51:
	add eax,4
	push eax
	call edi
	mov eax,dword ptr [esi+0xB18]
	cmp eax,ebp
	je Block54

 Block52:
	lea ecx,[eax+8]
	cmp ecx,ebp
	je Block54

 Block53:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block54:
	mov dword ptr [esi+0xB18],ebp

 Block55:
	mov eax,dword ptr [esi+0xB10]
	mov byte ptr [esp+0x20],2
	cmp eax,ebp
	je Block64

 Block56:
	add eax,0xC
	push eax
	call ebx
	test eax,eax
	jne Block63

 Block57:
	mov eax,dword ptr [esi+0xB10]
	cmp eax,ebp
	je Block59

 Block58:
	add eax,8
	jmp Block60

 Block59:
	xor eax,eax

 Block60:
	add eax,4
	push eax
	call edi
	mov eax,dword ptr [esi+0xB10]
	cmp eax,ebp
	je Block63

 Block61:
	lea ecx,[eax+8]
	cmp ecx,ebp
	je Block63

 Block62:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block63:
	mov dword ptr [esi+0xB10],ebp

 Block64:
	lea ecx,[esi+0xB08]
	mov byte ptr [esp+0x20],1
	call ZArray<CUIMonsterCarnival::SPELLED_ITEM>::RemoveAll
	mov ecx,esi
	mov dword ptr [TSingleton<CUIMonsterCarnival>::ms_pInstance],ebp
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call CUIWnd::~CUIWnd
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret
}
}
// CUIMonsterCarnival::ResetUI
__SUB_CLASS_THIS0(0040E060, __thiscall, 70025,  CUIMonsterCarnival, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CUIMonsterCarnival::SetLayer
	mov ecx,esi
	call CUIMonsterCarnival::SetScrollBar
	mov ecx,esi
	call CUIMonsterCarnival::SetButton
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret
}
}
// CUIMonsterCarnival::SetPersonalCP
__SUB_CLASS_THIS(0040AC60, __thiscall, 70033,  CUIMonsterCarnival, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	push 0
	mov dword ptr [ecx+0x15CC],eax
	mov dword ptr [ecx+0x15D0],edx
	call CWnd::InvalidateRect
	ret 8
}
}
// CUISummonedList::CUISummonedList
_SUB_EXCEPTION_HANDLER(40B0D0)
__SUB_CLASS_THIS(0040B0D0, __thiscall, 70112,  CUISummonedList, void, CUIMonsterCarnival*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_40B0D0
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
	call CWnd::_ctor_default
	xor edi,edi
	lea ecx,[esi+0x80]
	mov dword ptr [esp+0x18],edi
	cmp ecx,edi
	je Block2

 Block1:
	lea eax,[ecx-0x80]
	mov dword ptr [TSingleton<CUISummonedList>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUISummonedList>::ms_pInstance],edi

 Block3:
	mov byte ptr [esp+0x18],1
	int 3// TODO: 	mov dword ptr [esi],offset CUISummonedList::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUISummonedList::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUISummonedList::`vftable'{for `ZRefCounted'}
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xAC8],edi
	mov dword ptr [esi+0xACC],edi
	mov dword ptr [esi+0xAD4],edi
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x20]
	mov eax,dword ptr [esp+0x24]
	push edi
	push 1
	push edi
	push 1
	push 0xA
	push 0x64
	push 0x76
	push edx
	mov dword ptr [esi+0xAD8],ecx
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x3C],5
	call CWnd::CreateWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 0xC
}
}
// CTabList::GetDataName
__SUB_CLASS_THIS(0040BEC0, __thiscall, 69988,  CTabList, ZXString<char>*, ZXString<char>*, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+0xC]
	push esi
	mov dword ptr [esp+4],0
	test eax,eax
	jl Block4

 Block1:
	mov edx,dword ptr [ecx+8]
	test edx,edx
	je Block4

 Block2:
	cmp eax,dword ptr [edx-4]
	jae Block4

 Block3:
	mov esi,dword ptr [esp+0xC]
	lea eax,[eax+eax*4]
	mov ecx,edx
	lea eax,[ecx+eax*8]
	add eax,4
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,esi
	pop esi
	pop ecx
	ret 8

 Block4:
	mov esi,dword ptr [esp+0xC]
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	mov eax,esi
	pop esi
	pop ecx
	ret 8
}
}
// CUIMonsterCarnival::ToggleTabWindow
__SUB_CLASS_THIS(0040E960, __thiscall, 70028,  CUIMonsterCarnival, void, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	push esi
	mov esi,ecx
	je Block2

 Block1:
	mov dword ptr [esi+0xB44],1
	mov dword ptr [esi+0x15C8],0x1F40
	call CUIMonsterCarnival::ResetUI
	pop esi
	ret 4

 Block2:
	lea ecx,[esi+0xB78]
	mov dword ptr [esi+0xB44],0
	call CUIToolTip::ClearToolTip
	mov ecx,esi
	call CUIMonsterCarnival::ResetUI
	pop esi
	ret 4
}
}
// CUIMonsterCarnival::Draw
_SUB_EXCEPTION_HANDLER(40D250)
__SUB_CLASS_THIS(0040D250, __thiscall, 70026,  CUIMonsterCarnival, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_40D250
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x94
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xA8]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x44],ebx
	xor ebp,ebp
	xor edi,edi
	mov dword ptr [esp+0x14],ebp
	mov dword ptr [esp+0x54],edi
	mov dword ptr [esp+0xB0],ebp
	mov dword ptr [esp+0x40],ebp
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0xB4],1
	call CWnd::GetCanvas
	mov eax,dword ptr [eax]
	cmp eax,ebp
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov edi,eax
	push eax
	mov dword ptr [esp+0x58],edi
	call edx

 Block2:
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebp
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	push ebp
	push ebp
	push offset _S_UIUIWINDOW2IMGMO__14
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax],edi
	cmp edi,ebp
	je Block6

 Block5:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block6:
	lea esi,[ebx+0x15E8]
	mov ecx,esi
	call CLayoutMan::CopyToCanvas_1
	push ebp
	push ebp
	push offset _S_UIUIWINDOW2IMGMO__13
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax],edi
	cmp edi,ebp
	je Block8

 Block7:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block8:
	mov ecx,esi
	call CLayoutMan::CopyToCanvas_1
	push ebp
	push ebp
	push offset _S_UIUIWINDOW2IMGMO__12
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax],edi
	cmp edi,ebp
	je Block10

 Block9:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block10:
	mov ecx,esi
	call CLayoutMan::CopyToCanvas_1
	mov dword ptr [esp+0x50],0
	mov eax,dword ptr [ebx+0x15D0]
	mov ecx,dword ptr [ebx+0x15CC]
	push eax
	push ecx
	lea edx,[esp+0x58]
	push offset _S_DD__4
	push edx
	mov byte ptr [esp+0xC0],2
	call ZXString<char>::Format
	mov ebp,dword ptr [ZImports::_VariantInit]
	add esp,0x10
	lea eax,[esp+0x1C]
	push eax
	call ebp
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0xB4],3
	call ebp
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov eax,dword ptr [ebx+0xB70]
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x34]
	push edx
	push eax
	mov eax,dword ptr [esp+0x5C]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xC4],4
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xC0],5
	test edi,edi
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	push 0x18
	push 0x44
	mov ecx,edi
	mov byte ptr [esp+0xC8],4
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0xB0],3
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xB0],2
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	cmp dword ptr [ebx+0xB44],0
	je Block26

 Block25:
	push 0x64
	push 0
	push offset _S_UIUIWINDOW2IMGMO__9
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x28],esp
	push edi
	call eax
	mov ecx,esi
	call CLayoutMan::CopyToCanvas_1
	push 0x64
	push 0
	push offset _S_UIUIWINDOW2IMGMO__8
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x28],esp
	push edi
	call edx
	mov ecx,esi
	call CLayoutMan::CopyToCanvas_1
	push 0x64
	push 0
	push offset _S_UIUIWINDOW2IMGMO__7
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x28],esp
	push edi
	call ecx
	mov ecx,esi
	call CLayoutMan::CopyToCanvas_1

 Block26:
	mov dword ptr [esp+0x48],0
	mov edx,dword ptr [ebx+0x15DC]
	mov eax,dword ptr [ebx+0x15D4]
	push edx
	push eax
	lea ecx,[esp+0x50]
	push offset _S_DD__4
	push ecx
	mov byte ptr [esp+0xC0],6
	call ZXString<char>::Format
	add esp,0x10
	lea edx,[esp+0x30]
	push edx
	call ebp
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0xB4],7
	call ebp
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov edx,dword ptr [esp+0x48]
	lea eax,[esp+0x30]
	push eax
	mov eax,dword ptr [ebx+0xB70]
	lea ecx,[esp+0x20]
	push ecx
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xC4],8
	call _xbstr_t::_ctor_0
	push 0x2A
	mov byte ptr [esp+0xC4],9
	push 0x44
	mov ecx,edi
	mov byte ptr [esp+0xC8],8
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0xB0],7
	cmp word ptr [esp+0x1C],si
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
	mov byte ptr [esp+0xB0],6
	cmp word ptr [esp+0x30],si
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov dword ptr [esp+0x4C],0
	mov ecx,dword ptr [ebx+0x15E0]
	mov edx,dword ptr [ebx+0x15D8]
	push ecx
	push edx
	lea eax,[esp+0x54]
	push offset _S_DD__4
	push eax
	mov byte ptr [esp+0xC0],0xA
	call ZXString<char>::Format
	add esp,0x10
	lea ecx,[esp+0x30]
	push ecx
	call ebp
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xB4],0xB
	call ebp
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	mov esi,dword ptr [esp+0x44]
	lea edx,[esp+0x30]
	push edx
	mov edx,dword ptr [esp+0x50]
	lea eax,[esp+0x20]
	push eax
	mov eax,dword ptr [esi+0xB70]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0xC
	push edx
	mov byte ptr [esp+0xC4],bl
	call _xbstr_t::_ctor_0
	push 0x37
	mov byte ptr [esp+0xC4],0xD
	push 0x44
	mov ecx,edi
	mov byte ptr [esp+0xC8],bl
	call IWzCanvas::DrawTextA
	mov ebx,8
	mov byte ptr [esp+0xB0],0xB
	cmp word ptr [esp+0x1C],bx
	jne Block45

 Block43:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov byte ptr [esp+0xB0],0xA
	cmp word ptr [esp+0x30],bx
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block50:
	lea ecx,[esp+0x2C]
	push 0x3D0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edx,[esp+0x44]
	push edx
	push eax
	mov byte ptr [esp+0xBC],0xE
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x38]
	add esp,0xC
	mov byte ptr [esp+0xB0],0xA
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block52:
	cmp dword ptr [esi+0xB44],0
	je Block133

 Block53:
	mov eax,dword ptr [esp+0x44]
	mov ecx,dword ptr [eax+0xB40]
	mov eax,dword ptr [eax+ecx*4+0xB50]
	add eax,8
	mov eax,dword ptr [eax]
	test eax,eax
	je Block56

 Block54:
	mov eax,dword ptr [eax-4]
	cmp eax,0xB
	jle Block56

 Block55:
	mov eax,0xB

 Block56:
	lea esi,[eax*8]
	sub esi,eax
	lea edx,[esp+0x30]
	lea esi,[esi+esi+0x3C]
	push edx
	mov dword ptr [esp+0x1C],esi
	call ebp
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	lea ecx,[esp+0x1C]
	mov bl,0xF
	push ecx
	mov byte ptr [esp+0xB4],bl
	call ebp
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block60

 Block59:
	push eax
	call _com_issue_error

 Block60:
	mov ecx,dword ptr [esp+0x40]
	mov byte ptr [esp+0xB0],0x10
	test ecx,ecx
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	lea eax,[esp+0x30]
	push eax
	lea edx,[esp+0x20]
	push edx
	push esi
	push 0x94
	call IWzCanvas::Create
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xB0],bl
	jne Block65

 Block63:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0xB0],0xA
	jne Block69

 Block67:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block70:
	push ecx
	mov ecx,dword ptr [esp+0x44]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x30],esp
	test eax,eax
	je Block72

 Block71:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block72:
	mov ebx,dword ptr [esp+0x48]
	mov ecx,dword ptr [ebx+0xB40]
	mov ecx,dword ptr [ebx+ecx*4+0xB50]
	call CTabList::Draw
	lea edx,[esp+0x1C]
	push edx
	call ebp
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block74

 Block73:
	push eax
	call _com_issue_error

 Block74:
	mov edx,dword ptr [esp+0x40]
	lea ecx,[esp+0x1C]
	push ecx
	push esi
	push 0x94
	push 0
	push 0
	push esi
	push 0x94
	push 0xFF
	push edx
	push 0x64
	push 0
	mov ecx,edi
	mov byte ptr [esp+0xDC],0x11
	call IWzCanvas::CopyEx
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xB0],0xA
	jne Block77

 Block75:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block78:
	cmp dword ptr [ebx+0xB3C],0
	je Block86

 Block79:
	lea edx,[esp+0x78]
	push edx
	call ebp
	lea eax,[esp+0x78]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block81

 Block80:
	push eax
	call _com_issue_error

 Block81:
	lea ecx,[esp+0x68]
	push ecx
	mov byte ptr [esp+0xB4],0x12
	mov dword ptr [esp+0x18],1
	call ebp
	lea edx,[esp+0x68]
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
	push 0
	push 0
	lea eax,[esp+0x80]
	push eax
	lea ecx,[esp+0x74]
	push ecx
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	mov ebx,0x13
	push offset _S_UIUIWINDOW2IMGMO__11
	mov dword ptr [esp+0xC8],ebx
	mov dword ptr [esp+0x2C],3
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov dword ptr [esp+0xC4],0x14
	jne Block85

 Block84:
	push 0x80004003
	call _com_issue_error

 Block85:
	lea edx,[esp+0xAC]
	mov byte ptr [esp+0xC4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov dword ptr [esp+0xB8],0x15
	mov ebx,7
	jmp Block93

 Block86:
	lea eax,[esp+0x30]
	push eax
	call ebp
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0xB4],0x16
	mov dword ptr [esp+0x18],8
	call ebp
	lea eax,[esp+0x1C]
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
	push 0
	push 0
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	mov ebx,0x17
	mov esi,0x18
	push offset _S_UIUIWINDOW2IMGMO__10
	mov dword ptr [esp+0xC8],ebx
	mov dword ptr [esp+0x2C],esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov dword ptr [esp+0xC4],esi
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	lea eax,[esp+0x9C]
	mov byte ptr [esp+0xC4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov dword ptr [esp+0xB8],0x19
	mov ebx,0x38

 Block93:
	mov ecx,eax
	mov dword ptr [esp+0x1C],ebx
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x30],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block96

 Block94:
	cmp eax,0x80004002
	je Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	mov dword ptr [esp+0xB0],0x1B
	mov ebp,8
	test bl,0x20
	je Block100

 Block97:
	and ebx,0xFFFFFFDF
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x88],bp
	jne Block105

 Block98:
	mov eax,dword ptr [esp+0x90]
	xor ecx,ecx
	mov word ptr [esp+0x88],cx
	test eax,eax
	je Block100

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block100:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block101:
	mov byte ptr [esp+0xB0],0x1C
	test bl,0x10
	je Block107

 Block102:
	and ebx,0xFFFFFFEF
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x1C],bp
	jne Block106

 Block103:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block107

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block105:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x88]
	push edx
	call esi
	jmp Block101

 Block106:
	lea ecx,[esp+0x1C]
	push ecx
	call esi

 Block107:
	mov byte ptr [esp+0xB0],0x1D
	test bl,8
	je Block112

 Block108:
	and ebx,0xFFFFFFF7
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x30],bp
	jne Block111

 Block109:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block112

 Block110:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block111:
	lea eax,[esp+0x30]
	push eax
	call esi

 Block112:
	mov byte ptr [esp+0xB0],0x1E
	test bl,4
	je Block117

 Block113:
	and ebx,0xFFFFFFFB
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x98],bp
	jne Block116

 Block114:
	mov eax,dword ptr [esp+0xA0]
	xor ecx,ecx
	mov word ptr [esp+0x98],cx
	test eax,eax
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea edx,[esp+0x98]
	push edx
	call esi

 Block117:
	mov byte ptr [esp+0xB0],0x1F
	test bl,2
	je Block122

 Block118:
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x68],bp
	jne Block121

 Block119:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea ecx,[esp+0x68]
	push ecx
	call esi

 Block122:
	mov byte ptr [esp+0xB0],0x20
	test bl,1
	je Block127

 Block123:
	cmp word ptr [esp+0x78],bp
	jne Block126

 Block124:
	mov eax,dword ptr [esp+0x80]
	xor edx,edx
	mov word ptr [esp+0x78],dx
	test eax,eax
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea eax,[esp+0x78]
	push eax
	call esi

 Block127:
	mov ecx,3
	mov word ptr [esp+0x58],cx
	mov dword ptr [esp+0x60],0xFF
	mov esi,dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x18]
	lea edx,[esp+0x58]
	push edx
	push esi
	add eax,0x4B
	push eax
	push 9
	mov ecx,edi
	mov byte ptr [esp+0xC0],0x21
	call IWzCanvas::Copy
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0xB0],0x20
	jne Block130

 Block128:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block131:
	mov byte ptr [esp+0xB0],0xA
	test esi,esi
	je Block133

 Block132:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block133:
	mov edx,dword ptr [esp+0xB8]
	mov ecx,dword ptr [esp+0x44]
	push edx
	call CWnd::Draw
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xB0],6
	test eax,eax
	je Block135

 Block134:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block135:
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0xB0],2
	test eax,eax
	je Block137

 Block136:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block137:
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0xB0],1
	test eax,eax
	je Block139

 Block138:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block139:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xB0],0
	test eax,eax
	je Block141

 Block140:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block141:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	call ecx
	mov ecx,dword ptr [esp+0xA8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA0
	ret 4
}
}
// CUIMonsterCarnival::OnMouseMove
__SUB_CLASS_THIS(004103C0, __thiscall, 70032,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,dword ptr [esp+0xC]
	push edi
	mov edi,dword ptr [esp+0x14]
	push edi
	push esi
	lea ebx,[ecx-4]
	push edi
	push esi
	mov ecx,ebx
	call CUIMonsterCarnival::DrawCPTooltip
	test eax,eax
	jne Block4

 Block1:
	push ebp
	lea ebp,[edi-0x64]
	push ebp
	push esi
	push edi
	push esi
	mov ecx,ebx
	call CUIMonsterCarnival::DrawLockTooltip
	test eax,eax
	jne Block3

 Block2:
	push ebp
	push esi
	push edi
	push esi
	mov ecx,ebx
	call CUIMonsterCarnival::DrawListTooltip

 Block3:
	pop ebp

 Block4:
	pop edi
	pop esi
	mov eax,1
	pop ebx
	ret 8
}
}
// CUIMonsterCarnival::SetTeam
__SUB_CLASS_THIS(0040ACB0, __thiscall, 70036,  CUIMonsterCarnival, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,1
	ja Block2

 Block1:
	mov dword ptr [ecx+0x15E4],eax
	mov dword ptr [esp+4],0
	jmp  CWnd::InvalidateRect

 Block2:
	ret 4
}
}
// CUIMonsterCarnival::SetLayer
__SUB_CLASS_THIS0(0040D1F0, __thiscall, 70025,  CUIMonsterCarnival, void) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [ecx+0xB44]
	xor eax,eax
	test esi,esi
	je Block4

 Block1:
	mov eax,dword ptr [ecx+0xB40]
	mov eax,dword ptr [ecx+eax*4+0xB50]
	add eax,8
	mov eax,dword ptr [eax]
	test eax,eax
	je Block4

 Block2:
	mov eax,dword ptr [eax-4]
	cmp eax,0xB
	jle Block4

 Block3:
	mov eax,0xB

 Block4:
	test esi,esi
	mov edx,0x64
	pop esi
	je Block6

 Block5:
	lea edx,[eax*8]
	sub edx,eax
	lea edx,[edx+edx+0xA0]

 Block6:
	push edx
	push 0x94
	call CUIMonsterCarnival::SetLayerSize
	ret
}
}
// CUIMonsterCarnival::OnChildNotify
__SUB_CLASS_THIS(00410370, __thiscall, 70029,  CUIMonsterCarnival, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	test edi,edi
	jne Block3

 Block1:
	cmp ebx,0x1F4
	jne Block3

 Block2:
	mov eax,dword ptr [esp+0x18]
	push eax
	call CUIMonsterCarnival::OnTabChanged
	pop edi
	pop esi
	pop ebx
	ret 0xC

 Block3:
	push 0
	call CWnd::InvalidateRect
	cmp ebx,0x64
	jne Block5

 Block4:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x20]
	push edi
	mov ecx,esi
	call eax

 Block5:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CUIMonsterCarnival::GetRecentSpell
__SUB_CLASS_THIS0(0040BF40, __thiscall, 70044,  CUIMonsterCarnival, ZXString<char>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	add ecx,0x15C4
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
// CUIMonsterCarnival::IsMyAddon
__SUB_CLASS_THIS(0040EE90, __thiscall, 70034,  CUIMonsterCarnival, int32_t, CWnd*) {
__asm {

 Block0:
	mov eax,dword ptr [TSingleton<CUISummonedList>::ms_pInstance]
	test eax,eax
	je Block3

 Block1:
	cmp eax,dword ptr [esp+4]
	jne Block3

 Block2:
	mov eax,1
	ret 4

 Block3:
	xor eax,eax
	ret 4
}
}
// CUISummonedList::~CUISummonedList
_SUB_EXCEPTION_HANDLER(40B1D0)
__SUB_CLASS_THIS0(0040B1D0, __thiscall, 70114,  CUISummonedList, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_40B1D0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUISummonedList::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUISummonedList::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUISummonedList::`vftable'{for `ZRefCounted'}
	cmp dword ptr [esi+0xAD4],0
	lea edi,[esi+0xAD0]
	mov dword ptr [esp+0x18],4
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	mov eax,dword ptr [esi+0xACC]
	mov byte ptr [esp+0x18],3
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xAC8]
	mov byte ptr [esp+0x18],2
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	lea ecx,[esi+0x80]
	mov byte ptr [esp+0x18],1
	call CUIToolTip::~CUIToolTip
	mov ecx,esi
	mov dword ptr [TSingleton<CUISummonedList>::ms_pInstance],0
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CWnd::~CWnd
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CUISummonedList::SetScrollBar
__SUB_CLASS_THIS0(0040AE40, __thiscall, 70114,  CUISummonedList, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xAD8]
	add eax,0xB08
	mov eax,dword ptr [eax]
	push edi
	test eax,eax
	jne Block2

 Block1:
	xor edi,edi
	jmp Block3

 Block2:
	mov edi,dword ptr [eax-4]

 Block3:
	mov ecx,dword ptr [esi+0xAD4]
	test ecx,ecx
	je Block5

 Block4:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx

 Block5:
	mov ecx,dword ptr [esi+0xAD4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x28]
	push 0
	push 0x46
	push 0x15
	push 0x62
	push 8
	push 1
	push 0
	push esi
	call edx
	xor eax,eax
	cmp edi,5
	jle Block7

 Block6:
	lea eax,[edi-4]

 Block7:
	mov ecx,dword ptr [esi+0xAD4]
	push eax
	call CCtrlScrollBar::SetScrollRange
	mov eax,dword ptr [esi+0xAD4]
	pop edi
	mov dword ptr [eax+0x34],0x5A
	pop esi
	ret
}
}
// CUIMonsterCarnival::SPELLED_ITEM::~SPELLED_ITEM
__SUB_CLASS_THIS0(0040B3A0, __thiscall, 70152,  CUIMonsterCarnival::SPELLED_ITEM, void) {
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
// CTabList::GetSelectItemDesc
__SUB_CLASS_THIS(0040CAF0, __thiscall, 69993,  CTabList, ZXString<char>*, ZXString<char>*, NakedParam<tagPOINT>) {
__asm {

 Block0:
	push ecx
	push ebx
	push esi
	push edi
	xor esi,esi
	mov edi,ecx
	mov dword ptr [esp+0xC],0
	xor ebx,ebx

 Block1:
	mov eax,dword ptr [edi+8]
	test eax,eax
	je Block6

 Block2:
	cmp esi,dword ptr [eax-4]
	jae Block6

 Block3:
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x18]
	push ecx
	add eax,ebx
	push edx
	add eax,0x14
	push eax
	call PtInRect
	test eax,eax
	jne Block5

 Block4:
	inc esi
	add ebx,0x28
	jmp Block1

 Block5:
	mov ecx,dword ptr [edi+8]
	lea eax,[esi+esi*4]
	mov esi,dword ptr [esp+0x14]
	lea eax,[ecx+eax*8]
	add eax,0x10
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	pop ecx
	ret 0xC

 Block6:
	mov esi,dword ptr [esp+0x14]
	push 0
	push offset _S_
	push 0
	push 0
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push 0
	mov ecx,esi
	call ZXString<char>::ReleaseBuffer
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	pop ecx
	ret 0xC
}
}
// CTabList::TAB_ITEM::operator=
__SUB_CLASS_THIS(0040BD00, __thiscall, 70009,  CTabList::TAB_ITEM, CTabList::TAB_ITEM&, const CTabList::TAB_ITEM&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov eax,dword ptr [edi]
	mov esi,ecx
	lea ecx,[edi+4]
	push ecx
	lea ecx,[esi+4]
	mov dword ptr [esi],eax
	call ZXString<char>::op_assign
	mov edx,dword ptr [edi+8]
	lea eax,[edi+0xC]
	push eax
	lea ecx,[esi+0xC]
	mov dword ptr [esi+8],edx
	call ZXString<char>::op_assign
	lea ecx,[edi+0x10]
	push ecx
	lea ecx,[esi+0x10]
	call ZXString<char>::op_assign
	mov edx,dword ptr [edi+0x14]
	mov dword ptr [esi+0x14],edx
	mov eax,dword ptr [edi+0x18]
	mov dword ptr [esi+0x18],eax
	mov ecx,dword ptr [edi+0x1C]
	mov dword ptr [esi+0x1C],ecx
	mov edx,dword ptr [edi+0x20]
	mov dword ptr [esi+0x20],edx
	mov eax,dword ptr [edi+0x24]
	mov dword ptr [esi+0x24],eax
	pop edi
	mov eax,esi
	pop esi
	ret 4
}
}
// CUIMonsterCarnival::OnButtonClicked
__SUB_CLASS_THIS(0040BB10, __thiscall, 70030,  CUIMonsterCarnival, void, uint32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov eax,edi
	sub eax,2
	mov esi,ecx
	je Block3

 Block1:
	sub eax,1
	jne Block4

 Block2:
	mov dword ptr [esi+0x15C8],0x1F40
	call CUIMonsterCarnival::RequestSend
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4

 Block3:
	mov ecx,dword ptr [esi+0xB48]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x3C]
	push ecx
	mov ecx,esi
	call edx

 Block4:
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4
}
}
// CUIMonsterCarnival::OnMoveWnd
__SUB_CLASS_THIS(0040AF50, __thiscall, 70033,  CUIMonsterCarnival, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	push edi
	mov esi,ecx
	mov ecx,dword ptr [esp+0xC]
	push eax
	push ecx
	mov ecx,esi
	call CWnd::OnMoveWnd
	mov edi,dword ptr [esi+0xB60]
	test edi,edi
	je Block2

 Block1:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x30]
	add esi,4
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,0x8F
	push eax
	mov ecx,edi
	call CWnd::MoveWnd

 Block2:
	pop edi
	pop esi
	ret 8
}
}
// CUIMonsterCarnival::FuncKeyProcess
__SUB_CLASS_THIS(00410310, __thiscall, 70030,  CUIMonsterCarnival, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xB40]
	mov ecx,dword ptr [esi+ecx*4+0xB50]
	push eax
	call CTabList::GetSelectItemIdx_1
	test eax,eax
	je Block2

 Block1:
	push 0
	mov ecx,esi
	mov dword ptr [esi+0x15C0],eax
	call CUIMonsterCarnival::OnTabAutoOpen
	mov ecx,esi
	call CUIMonsterCarnival::RequestSend

 Block2:
	pop esi
	ret 4
}
}
// CUIMonsterCarnival::InsertSpelledData
_SUB_EXCEPTION_HANDLER(40E640)
__SUB_CLASS_THIS(0040E640, __thiscall, 70017,  CUIMonsterCarnival, void, NakedParam<ZXString<char>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_40E640
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x18],0
	mov dword ptr [esp+0xC],0
	mov eax,dword ptr [esp+0x24]
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x1C],1
	mov dword ptr [esp+0xC],eax
	call ZXString<char>::op_assign
	push 0xFFFFFFFF
	lea ecx,[esi+0xB08]
	call ZArray<CUIMonsterCarnival::SPELLED_ITEM>::InsertBefore
	mov edx,dword ptr [esp+8]
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[eax+4]
	mov dword ptr [eax],edx
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret 8
}
}
// CTabList::TAB_ITEM::~TAB_ITEM
_SUB_EXCEPTION_HANDLER(40B310)
__SUB_CLASS_THIS0(0040B310, __thiscall, 70007,  CTabList::TAB_ITEM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_40B310
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
	mov eax,dword ptr [esi+0x10]
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
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov esi,dword ptr [esi+4]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block6

 Block5:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIMonsterCarnival::OnDestroy
__SUB_CLASS_THIS0(0040AC40, __thiscall, 70025,  CUIMonsterCarnival, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xB40]
	mov dword ptr [ecx+0xAFC],eax
	jmp  CUIWnd::OnDestroy
}
}
// CUIMonsterCarnival::RequestResult
_SUB_EXCEPTION_HANDLER(40EA80)
__SUB_CLASS_THIS(0040EA80, __thiscall, 70037,  CUIMonsterCarnival, void, long, long, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_40EA80
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
	mov dword ptr [esp+0x20],ecx
	mov eax,dword ptr [esp+0x3C]
	push eax
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [ecx+eax*4+0xB50]
	lea edx,[esp+0x14]
	push edx
	mov dword ptr [esp+0x38],0
	call CTabList::GetDataName
	mov esi,dword ptr [esp+0x10]
	test esi,esi
	je Block2

 Block1:
	cmp byte ptr [esi],0
	jne Block4

 Block2:
	mov byte ptr [esp+0x30],0
	test esi,esi
	je Block22

 Block3:
	jmp Block21

 Block4:
	xor edi,edi
	mov dword ptr [esp+0x3C],edi
	mov eax,dword ptr [esp+0x38]
	sub eax,edi
	mov bl,2
	mov byte ptr [esp+0x30],bl
	je Block9

 Block5:
	sub eax,1
	je Block8

 Block6:
	sub eax,1
	jne Block16

 Block7:
	lea ecx,[esp+0x14]
	push 0x1026
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x40]
	mov eax,dword ptr [eax]
	push esi
	push edx
	push eax
	lea eax,[esp+0x48]
	push eax
	mov byte ptr [esp+0x40],5
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	jmp Block10

 Block8:
	lea ecx,[esp+0x18]
	push 0x1025
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x40]
	mov eax,dword ptr [eax]
	push esi
	push edx
	push eax
	lea eax,[esp+0x48]
	push eax
	mov byte ptr [esp+0x40],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	jmp Block10

 Block9:
	lea ecx,[esp+0x1C]
	push 0x1024
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x40]
	mov eax,dword ptr [eax]
	push esi
	push edx
	push eax
	lea eax,[esp+0x48]
	push eax
	mov byte ptr [esp+0x40],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x2C]

 Block10:
	add esp,0x10
	mov byte ptr [esp+0x30],bl
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov edi,dword ptr [esp+0x3C]
	test edi,edi
	je Block16

 Block13:
	cmp byte ptr [edi],0
	je Block16

 Block14:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],0
	je Block16

 Block15:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0
	push 0xFFFFFFFF
	push 7
	mov dword ptr [eax+4],0
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push edi
	call CUIStatusBar::ChatLogAdd

 Block16:
	cmp dword ptr [esp+0x38],0
	jne Block18

 Block17:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x14]
	mov dword ptr [esp+0x3C],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x24]
	call CUIMonsterCarnival::UpdateSpelledData

 Block18:
	mov byte ptr [esp+0x30],1
	test edi,edi
	je Block20

 Block19:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov byte ptr [esp+0x30],0

 Block21:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret 0xC
}
}
// CUIMonsterCarnival::DrawListTooltip
_SUB_EXCEPTION_HANDLER(40DF80)
__SUB_CLASS_THIS(0040DF80, __thiscall, 70041,  CUIMonsterCarnival, void, long, long, NakedParam<tagPOINT>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_40DF80
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
	mov edi,ecx
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+0x2C]
	push eax
	mov eax,dword ptr [edi+0xB40]
	push ecx
	mov ecx,dword ptr [edi+eax*4+0xB50]
	lea edx,[esp+0x18]
	push edx
	call CTabList::GetSelectItemDesc
	mov ebx,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],0
	test ebx,ebx
	je Block3

 Block1:
	cmp byte ptr [ebx],0
	je Block3

 Block2:
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x30]
	lea esi,[edi+4]
	push ebx
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x2C]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x2C]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[edi+0xB78]
	call CUIToolTip::SetToolTip_String
	mov dword ptr [edi+0x15C8],0x1F40
	jmp Block4

 Block3:
	lea ecx,[edi+0xB78]
	call CUIToolTip::ClearToolTip

 Block4:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test ebx,ebx
	je Block6

 Block5:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 0x10
}
}
// CUIMonsterCarnival::ToggleAddOn
_SUB_EXCEPTION_HANDLER(40B3C0)
__SUB_CLASS_THIS(0040B3C0, __thiscall, 70028,  CUIMonsterCarnival, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_40B3C0
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
	mov edi,ecx
	mov ecx,dword ptr [edi+0xB60]
	test ecx,ecx
	je Block3

 Block1:
	call CWnd::Destroy
	cmp dword ptr [edi+0xB60],0
	lea esi,[edi+0xB5C]
	je Block7

 Block2:
	push 0
	mov ecx,esi
	call ZRef<CUISummonedList>::_ReleaseRaw
	mov dword ptr [esi+4],0
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 4

 Block3:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebx,eax
	mov dword ptr [esp+0x10],ebx
	mov dword ptr [esp+0x1C],0
	test ebx,ebx
	je Block5

 Block4:
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x30]
	lea esi,[edi+4]
	mov ecx,esi
	call edx
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	add eax,0x93
	push eax
	push edi
	mov ecx,ebx
	call CUISummonedList::_ctor_0
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	push eax
	lea ecx,[edi+0xB5C]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZRef<CUISummonedList>::op_assign_ptr

 Block7:
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
// CUISummonedList::OnDestroy
__SUB_CLASS_THIS0(0040B190, __thiscall, 70114,  CUISummonedList, void) {
__asm {

 Block0:
	ret
}
}
// CUIMonsterCarnival::UpdateSpelledData
_SUB_EXCEPTION_HANDLER(40E700)
__SUB_CLASS_THIS(0040E700, __thiscall, 70018,  CUIMonsterCarnival, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_40E700
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
	mov dword ptr [esp+0x18],0
	xor edi,edi
	nop

 Block1:
	mov eax,dword ptr [esi+0xB08]
	test eax,eax
	je Block13

 Block2:
	cmp edi,dword ptr [eax-4]
	jae Block13

 Block3:
	mov ecx,dword ptr [esi+0xB08]
	lea eax,[esp+0x20]
	push eax
	lea ecx,[ecx+edi*8+4]
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block5

 Block4:
	inc edi
	jmp Block1

 Block5:
	mov edx,dword ptr [esi+0xB08]
	inc dword ptr [edx+edi*8]
	lea eax,[edx+edi*8]
	mov edx,dword ptr [esi+0xB08]
	lea eax,[edx+edi*8+4]
	push eax
	lea ecx,[esi+0x15C4]
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esi+0xB60]
	test ecx,ecx
	je Block8

 Block6:
	call CUISummonedList::SetScrollBar
	push edi

 Block7:
	mov ecx,dword ptr [esi+0xB60]
	call CUISummonedList::MoveScrollBarPos

 Block8:
	mov ecx,dword ptr [esi+0xB60]
	test ecx,ecx
	je Block10

 Block9:
	push 0
	call CWnd::InvalidateRect

 Block10:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4

 Block13:
	push 1
	push ecx
	mov ecx,esp
	lea eax,[esp+0x28]
	mov dword ptr [esp+0x14],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,esi
	call CUIMonsterCarnival::InsertSpelledData
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esi+0x15C4]
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esi+0xB60]
	test ecx,ecx
	je Block8

 Block14:
	call CUISummonedList::SetScrollBar
	mov eax,dword ptr [esi+0xB08]
	test eax,eax
	jne Block16

 Block15:
	inc eax
	push eax
	jmp Block7

 Block16:
	mov eax,dword ptr [eax-4]
	inc eax
	push eax
	jmp Block7
}
}
// CUIMonsterCarnival::CalcTabWindowHeight
__SUB_CLASS_THIS(0040ACD0, __thiscall, 70045,  CUIMonsterCarnival, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	lea ecx,[eax*8]
	sub ecx,eax
	lea eax,[ecx+ecx+0x3C]
	ret 4
}
}
// CUIMonsterCarnival::SetScrollBar
__SUB_CLASS_THIS0(0040AEB0, __thiscall, 70025,  CUIMonsterCarnival, void) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xB40]
	mov eax,dword ptr [esi+eax*4+0xB50]
	add eax,8
	mov eax,dword ptr [eax]
	push edi
	test eax,eax
	jne Block2

 Block1:
	xor edi,edi
	jmp Block3

 Block2:
	mov edi,dword ptr [eax-4]
	cmp edi,0xB
	mov eax,0xB
	jg Block4

 Block3:
	mov eax,edi

 Block4:
	mov ecx,dword ptr [esi+0xB18]
	lea ebx,[eax*8]
	sub ebx,eax
	lea ebx,[ebx+ebx+0x11]
	test ecx,ecx
	je Block6

 Block5:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0xC]
	call eax

 Block6:
	cmp dword ptr [esi+0xB44],0
	je Block10

 Block7:
	mov ecx,dword ptr [esi+0xB18]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push ebx
	push 0x6E
	push 0x80
	push 8
	push 1
	push 1
	push esi
	call eax
	mov ecx,dword ptr [esi+0xB18]
	xor eax,eax
	cmp edi,0xB
	mov dword ptr [ecx+0x34],0x7D
	jle Block9

 Block8:
	lea eax,[edi-0xA]

 Block9:
	mov ecx,dword ptr [esi+0xB18]
	push eax
	call CCtrlScrollBar::SetScrollRange

 Block10:
	pop edi
	pop esi
	pop ebx
	ret
}
}
// CUIMonsterCarnival::Update
__SUB_CLASS_THIS0(004101D0, __thiscall, 70025,  CUIMonsterCarnival, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CWnd::Update
	cmp dword ptr [esi+0xB3C],0
	jne Block4

 Block1:
	cmp dword ptr [esi+0xB44],0
	je Block4

 Block2:
	add dword ptr [esi+0x15C8],0xFFFFFFD8
	jns Block4

 Block3:
	push 0
	mov ecx,esi
	call CUIMonsterCarnival::ToggleTabWindow

 Block4:
	pop esi
	ret
}
}
// CUISummonedList::Draw
_SUB_EXCEPTION_HANDLER(40CB90)
__SUB_CLASS_THIS(0040CB90, __thiscall, 70117,  CUISummonedList, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_40CB90
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
	mov edi,ecx
	mov eax,dword ptr [esp+0xC0]
	push eax
	call CWnd::Draw
	xor ebp,ebp
	xor esi,esi
	mov dword ptr [esp+0x28],ebp
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0xBC],esi
	call CWnd::GetCanvas
	mov eax,dword ptr [eax]
	cmp eax,esi
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	mov ebp,eax
	push eax
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x2C],ebp
	call eax

 Block2:
	mov eax,dword ptr [esp+0x14]
	cmp eax,esi
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [edi+0xAD4]
	mov dword ptr [esp+0x24],esi
	mov esi,dword ptr [eax+0x38]
	mov dword ptr [esp+0x14],esi
	mov ebx,0x1A

 Block5:
	mov eax,dword ptr [edi+0xAD8]
	mov ecx,dword ptr [eax+0xB08]
	xor edx,edx
	cmp ecx,edx
	je Block65

 Block6:
	cmp esi,dword ptr [ecx-4]
	jae Block65

 Block7:
	cmp dword ptr [esp+0x24],5
	jge Block65

 Block8:
	mov dword ptr [esp+0x18],edx
	mov dword ptr [esp+0x20],edx
	mov eax,ecx
	mov ecx,dword ptr [eax+esi*8+4]
	push ecx
	lea edx,[esp+0x1C]
	push offset _S_5S
	push edx
	mov byte ptr [esp+0xC4],2
	call ZXString<char>::Format
	mov eax,dword ptr [edi+0xAC8]
	add esp,0xC
	push 0x41
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block10:
	lea eax,[esp+0x20]
	push eax
	call format_string_1
	mov ecx,dword ptr [edi+0xAD8]
	mov edx,dword ptr [ecx+0xB08]
	mov eax,dword ptr [edx+esi*8]
	push eax
	lea ecx,[esp+0x30]
	push offset _S_D__1
	push ecx
	call ZXString<char>::Format
	mov ecx,dword ptr [edi+0xAD8]
	add esp,0x18
	lea edx,[esp+0x2C]
	push edx
	call CUIMonsterCarnival::GetRecentSpell
	mov ecx,dword ptr [edi+0xAD8]
	mov edx,dword ptr [ecx+0xB08]
	lea ecx,[edx+esi*8+4]
	push ecx
	mov ecx,eax
	call ZXString<char>::op_eq_0
	mov esi,eax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	test esi,esi
	je Block35

 Block13:
	test ebp,ebp
	je Block63

 Block14:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x8C]
	push 0xFF244768
	push 0xD
	push 0x55
	lea eax,[ebx-1]
	push eax
	push 0xA
	push ebp
	call ecx
	test eax,eax
	jge Block16

 Block15:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block16:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x50]
	push edx
	call esi
	lea eax,[esp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block64

 Block17:
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0xBC],3
	call esi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block64

 Block18:
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x50]
	push eax
	mov eax,dword ptr [edi+0xACC]
	lea ecx,[esp+0x34]
	push ecx
	push eax
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xCC],4
	call _xbstr_t::_ctor_0
	push ebx
	mov byte ptr [esp+0xCC],5
	push 0xD
	mov ecx,ebp
	mov byte ptr [esp+0xD0],4
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0xB8],3
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0xB8],2
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	lea ecx,[esp+0x70]
	push ecx
	call esi
	lea edx,[esp+0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block64

 Block27:
	lea eax,[esp+0x90]
	push eax
	mov byte ptr [esp+0xBC],6
	call esi
	lea ecx,[esp+0x90]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block64

 Block28:
	mov esi,dword ptr [esp+0x20]
	lea edx,[esp+0x70]
	push edx
	lea eax,[esp+0x94]
	push eax
	mov eax,dword ptr [edi+0xACC]
	push eax
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push esi
	mov byte ptr [esp+0xCC],7
	call _xbstr_t::_ctor_0
	push ebx
	mov byte ptr [esp+0xCC],8
	push 0x50
	mov ecx,ebp
	mov byte ptr [esp+0xD0],7
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x90],8
	mov byte ptr [esp+0xB8],6
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x98]
	xor ecx,ecx
	mov word ptr [esp+0x90],cx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea edx,[esp+0x90]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	cmp word ptr [esp+0x70],8
	mov byte ptr [esp+0xB8],2
	jne Block34

 Block33:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	jmp Block54

 Block34:
	lea ecx,[esp+0x70]
	jmp Block57

 Block35:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x60]
	push edx
	call esi
	lea eax,[esp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block64

 Block36:
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0xBC],9
	call esi
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block64

 Block37:
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x60]
	push eax
	mov eax,dword ptr [edi+0xAC8]
	lea ecx,[esp+0x44]
	push ecx
	push eax
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xCC],0xA
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xC8],0xB
	test ebp,ebp
	je Block63

 Block38:
	push ebx
	push 0xD
	mov ecx,ebp
	mov byte ptr [esp+0xD0],0xA
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0xB8],9
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0xB8],2
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[esp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	lea ecx,[esp+0xA0]
	push ecx
	call esi
	lea edx,[esp+0xA0]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block64

 Block47:
	lea eax,[esp+0x80]
	push eax
	mov byte ptr [esp+0xBC],0xC
	call esi
	lea ecx,[esp+0x80]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block64

 Block48:
	mov esi,dword ptr [esp+0x20]
	lea edx,[esp+0xA0]
	push edx
	lea eax,[esp+0x84]
	push eax
	mov eax,dword ptr [edi+0xAC8]
	push eax
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push esi
	mov byte ptr [esp+0xCC],0xD
	call _xbstr_t::_ctor_0
	push ebx
	mov byte ptr [esp+0xCC],0xE
	push 0x50
	mov ecx,ebp
	mov byte ptr [esp+0xD0],0xD
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x80],8
	mov byte ptr [esp+0xB8],0xC
	jne Block51

 Block49:
	mov eax,dword ptr [esp+0x88]
	xor ecx,ecx
	mov word ptr [esp+0x80],cx
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea edx,[esp+0x80]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	cmp word ptr [esp+0xA0],8
	mov byte ptr [esp+0xB8],2
	jne Block56

 Block53:
	xor eax,eax
	mov word ptr [esp+0xA0],ax
	mov eax,dword ptr [esp+0xA8]

 Block54:
	test eax,eax
	je Block58

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block56:
	lea ecx,[esp+0xA0]

 Block57:
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	inc dword ptr [esp+0x24]
	add ebx,0xD
	mov byte ptr [esp+0xB8],1
	test esi,esi
	je Block60

 Block59:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block60:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xB8],0
	test eax,eax
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block62:
	inc dword ptr [esp+0x14]
	mov esi,dword ptr [esp+0x14]
	jmp Block5

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	push eax
	call _com_issue_error

 Block65:
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	cmp ebp,edx
	je Block67

 Block66:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block67:
	mov ecx,dword ptr [esp+0xB0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA8
	ret 4
}
}
// CUIMonsterCarnival::OnCreate
_SUB_EXCEPTION_HANDLER(40F1C0)
__SUB_CLASS_THIS(0040F1C0, __thiscall, 70027,  CUIMonsterCarnival, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_40F1C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp+0x34],esi
	push 0
	push 0
	lea ecx,[esi+0x15E8]
	push esi
	call CLayoutMan::Init
	mov eax,dword ptr [esi+0xAFC]
	test eax,eax
	jl Block2

 Block1:
	cmp eax,2
	jle Block3

 Block2:
	mov dword ptr [esi+0xAFC],0

 Block3:
	mov eax,dword ptr [esi+0xAFC]
	mov dword ptr [esi+0xB40],eax
	lea edi,[esi+0xB50]
	mov ebx,3
	jmp Block5

 Block5:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	test eax,eax
	je Block7

 Block6:
	xor ecx,ecx
	int 3// TODO: 	mov dword ptr [eax],offset CTabList::`vftable'
	mov dword ptr [eax+8],ecx
	mov dword ptr [eax+0xC],ecx
	mov dword ptr [eax+0x10],ecx
	mov dword ptr [eax+0x14],ecx
	mov dword ptr [eax+0x18],ecx
	mov dword ptr [eax+0x1C],ecx
	mov dword ptr [eax+4],esi
	jmp Block8

 Block7:
	xor eax,eax

 Block8:
	push 0
	mov dword ptr [edi],eax
	mov ecx,dword ptr [eax+4]
	push 0
	push ecx
	lea ecx,[eax+0xC]
	call CLayoutMan::Init
	add edi,4
	sub ebx,1
	jne Block5

 Block9:
	mov ecx,esi
	call CUIMonsterCarnival::SetLayer
	xor edi,edi
	push edi
	push edi
	push edi
	push 2
	push offset _S_UIUIWINDOW2IMGMO__18
	lea edx,[ebp+0x44]
	push edx
	lea ecx,[esi+0x15E8]
	call CLayoutMan::AddButton
	mov eax,dword ptr [ebp+0x48]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	cmp eax,edi
	je Block17

 Block10:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block17

 Block11:
	mov eax,dword ptr [ebp+0x48]
	cmp eax,edi
	je Block13

 Block12:
	add eax,8
	jmp Block14

 Block13:
	xor eax,eax

 Block14:
	add eax,4
	push eax
	call ebx
	mov eax,dword ptr [ebp+0x48]
	cmp eax,edi
	je Block17

 Block15:
	lea ecx,[eax+8]
	cmp ecx,edi
	je Block17

 Block16:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block17:
	mov eax,dword ptr [ebp+0x70]
	push eax
	mov ecx,esi
	call CUIWnd::OnCreate_0
	push 0x70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [ebp-0x24],edi
	mov dword ptr [ebp-0x20],2
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x60],eax
	mov dword ptr [ebp-4],edi
	cmp eax,edi
	je Block19

 Block18:
	mov ecx,eax
	call CCtrlTab::_ctor_default
	jmp Block20

 Block19:
	xor eax,eax

 Block20:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,edi
	je Block30

 Block21:
	add eax,8
	cmp eax,edi
	je Block30

 Block22:
	lea edi,[eax-8]
	test edi,edi
	je Block24

 Block23:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block24:
	mov eax,dword ptr [esi+0xB10]
	mov dword ptr [esi+0xB10],edi
	test eax,eax
	je Block28

 Block25:
	lea edi,[eax+8]
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block28

 Block26:
	lea eax,[edi+4]
	push eax
	call ebx
	test edi,edi
	je Block28

 Block27:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block28:
	mov ecx,dword ptr [esi+0xB10]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp-0x24]
	push eax
	push 0x10
	push 0x94
	push 0x4B
	push 9
	push 8
	xor ebx,ebx
	push ebx
	push esi
	call edx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x20]
	push eax
	call esi
	lea ecx,[ebp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block31

 Block29:
	push eax
	call _com_issue_error

 Block30:
	xor edi,edi
	jmp Block24

 Block31:
	lea edx,[ebp]
	push edx
	mov dword ptr [ebp-4],1
	call esi
	lea eax,[ebp]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	push ebx
	push ebx
	lea ecx,[ebp+0x20]
	push ecx
	lea edx,[ebp]
	push edx
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGMO__17
	mov byte ptr [ebp-4],2
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],3
	cmp dword ptr [_D_G_RM],ebx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea eax,[ebp-0x44]
	mov byte ptr [ebp-4],2
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x38],edi
	cmp eax,ebx
	je Block39

 Block36:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x40]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x40]
	cmp eax,ebx
	mov edi,ecx
	mov dword ptr [ebp+0x38],edi
	jge Block39

 Block37:
	cmp eax,0x80004002
	je Block39

 Block38:
	push eax
	call _com_issue_error

 Block39:
	cmp word ptr [ebp-0x44],8
	mov byte ptr [ebp-4],6
	jne Block42

 Block40:
	mov eax,dword ptr [ebp-0x3C]
	xor edx,edx
	mov word ptr [ebp-0x44],dx
	cmp eax,ebx
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea eax,[ebp-0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block43:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],7
	jne Block46

 Block44:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	cmp eax,ebx
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea edx,[ebp]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	cmp word ptr [ebp+0x20],8
	mov byte ptr [ebp-4],8
	jne Block50

 Block48:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	cmp eax,ebx
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	lea edx,[ebp-0x1C]
	push edx
	call esi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block53

 Block52:
	push eax
	call _com_issue_error

 Block53:
	lea ecx,[ebp+0x10]
	push ecx
	mov byte ptr [ebp-4],9
	call esi
	lea edx,[ebp+0x10]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	push ebx
	push ebx
	lea eax,[ebp-0x1C]
	push eax
	lea ecx,[ebp+0x10]
	push ecx
	push ecx
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push offset _S_UIUIWINDOW2IMGMO__16
	mov byte ptr [ebp-4],0xA
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0xB
	cmp dword ptr [_D_G_RM],ebx
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	lea edx,[ebp-0x34]
	mov byte ptr [ebp-4],0xA
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xC
	call Ztl_variant_t::GetUnknown
	mov dword ptr [ebp+0x40],ebx
	cmp eax,ebx
	je Block61

 Block58:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x4C]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x4C]
	cmp eax,ebx
	mov dword ptr [ebp+0x40],ecx
	jge Block61

 Block59:
	cmp eax,0x80004002
	je Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	mov esi,8
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x34],si
	jne Block64

 Block62:
	mov eax,dword ptr [ebp-0x2C]
	xor edx,edx
	mov word ptr [ebp-0x34],dx
	cmp eax,ebx
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea eax,[ebp-0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp+0x10],si
	jne Block68

 Block66:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	cmp eax,ebx
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp-0x1C],si
	jne Block72

 Block70:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,ebx
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov dword ptr [ebp+0x4C],ebx
	jmp Block77

 Block72:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov dword ptr [ebp+0x4C],ebx
	jmp Block77

 Block76:
	mov edi,dword ptr [ebp+0x38]

 Block77:
	mov eax,0x20
	call __chkstk
	mov eax,0x20
	mov esi,esp
	call __chkstk
	mov edx,dword ptr [ebp+0x4C]
	mov dword ptr [ebp+0x3C],esp
	push 1
	push 0
	push 0
	push 0xA
	push esi
	push edx
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x48],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x11
	test edi,edi
	je Block34

 Block78:
	lea eax,[ebp-0x54]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x12
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x48],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block83

 Block79:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x30]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [esi]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x30]
	test eax,eax
	je Block81

 Block80:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block81:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block83

 Block82:
	cmp edi,0x80004002
	jne Block100

 Block83:
	mov eax,dword ptr [ebp+0x3C]
	mov ecx,dword ptr [ebp+0x4C]
	push 0
	push 0
	push 0xA
	push eax
	push ecx
	mov byte ptr [ebp-4],0x13
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x3C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],0x14
	test ecx,ecx
	je Block34

 Block84:
	lea edx,[ebp+0x50]
	push edx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x15
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x3C],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block89

 Block85:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov edi,eax
	mov eax,dword ptr [esi]
	test edi,edi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x60]
	test eax,eax
	je Block87

 Block86:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block87:
	mov dword ptr [esi],ebx
	test edi,edi
	jge Block89

 Block88:
	cmp edi,0x80004002
	jne Block100

 Block89:
	mov ebx,dword ptr [ebp+0x34]
	mov ecx,dword ptr [ebx+0xB10]
	mov byte ptr [ebp-4],0x16
	call CCtrlTab::AddItem_Canvas
	mov esi,8
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp+0x50],si
	jne Block92

 Block90:
	xor eax,eax
	mov word ptr [ebp+0x50],ax
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea ecx,[ebp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp-0x54],si
	jne Block96

 Block94:
	mov eax,dword ptr [ebp-0x4C]
	xor edx,edx
	mov word ptr [ebp-0x54],dx
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea eax,[ebp-0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block97:
	mov eax,dword ptr [ebp+0x4C]
	inc eax
	cmp eax,3
	mov dword ptr [ebp+0x4C],eax
	jl Block76

 Block98:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x48],eax
	mov byte ptr [ebp-4],0x17
	test eax,eax
	je Block101

 Block99:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block102

 Block100:
	push edi
	call _com_issue_error

 Block101:
	xor eax,eax

 Block102:
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block122

 Block103:
	add eax,8
	je Block122

 Block104:
	lea esi,[eax-8]
	test esi,esi
	je Block106

 Block105:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block106:
	mov eax,dword ptr [ebx+0xB18]
	mov dword ptr [ebx+0xB18],esi
	test eax,eax
	je Block110

 Block107:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block110

 Block108:
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block110

 Block109:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block110:
	mov ecx,ebx
	call CUIMonsterCarnival::SetScrollBar
	lea ecx,[ebp+0x60]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea esi,[ebx+0xB64]
	push esi
	push eax
	mov byte ptr [ebp-4],0x18
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block112

 Block111:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block112:
	lea edx,[ebp+0x60]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edi,[ebx+0xB68]
	push edi
	push eax
	mov byte ptr [ebp-4],0x19
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block114

 Block113:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block114:
	lea eax,[ebp+0x60]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[ebx+0xB6C]
	push 0
	push ecx
	push eax
	mov byte ptr [ebp-4],0x1A
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block116

 Block115:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block116:
	lea ecx,[ebp+0x60]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	lea ecx,[ebx+0xB70]
	push 0
	push ecx
	push eax
	mov byte ptr [ebp-4],0x1B
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block118

 Block117:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block118:
	lea edx,[ebp+0x60]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	add ebx,0xB74
	push ebx
	push eax
	mov byte ptr [ebp-4],0x1C
	call PcCreate_IWzFont
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block120

 Block119:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block120:
	lea eax,[ebp+0x50]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block123

 Block121:
	push eax
	call _com_issue_error

 Block122:
	xor esi,esi
	jmp Block106

 Block123:
	lea edx,[ebp+0x50]
	push edx
	push 0xFFFFFFFF
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x48],esp
	push 0x1A25
	mov bl,0x1D
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi]
	mov byte ptr [ebp-4],0x1E
	test ecx,ecx
	jne Block125

 Block124:
	push 0x80004003
	call _com_issue_error

 Block125:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x10
	jne Block128

 Block126:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	test eax,eax
	je Block129

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block128:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block129:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x50]
	push eax
	call esi
	lea ecx,[ebp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block131

 Block130:
	push eax
	call _com_issue_error

 Block131:
	lea edx,[ebp+0x50]
	push edx
	push 0xFF000000
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x48],esp
	push 0x1A25
	mov bl,0x1F
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi]
	mov byte ptr [ebp-4],0x20
	test ecx,ecx
	jne Block133

 Block132:
	push 0x80004003
	call _com_issue_error

 Block133:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x10
	jne Block136

 Block134:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	test eax,eax
	je Block137

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block137

 Block136:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block137:
	lea eax,[ebp+0x50]
	push eax
	call esi
	lea ecx,[ebp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block139

 Block138:
	push eax
	call _com_issue_error

 Block139:
	lea edx,[ebp+0x50]
	push edx
	push 0xFF909090
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x48],esp
	push 0x1A25
	mov bl,0x21
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [ebp+0x34]
	mov ecx,dword ptr [edi+0xB6C]
	mov byte ptr [ebp-4],0x22
	test ecx,ecx
	jne Block141

 Block140:
	push 0x80004003
	call _com_issue_error

 Block141:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x10
	jne Block144

 Block142:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	test eax,eax
	je Block145

 Block143:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block145

 Block144:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block145:
	lea eax,[ebp+0x50]
	push eax
	call esi
	lea ecx,[ebp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block147

 Block146:
	push eax
	call _com_issue_error

 Block147:
	lea edx,[ebp+0x50]
	push edx
	push 0xFF555555
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x48],esp
	push 0x1A25
	mov bl,0x23
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi+0xB70]
	mov byte ptr [ebp-4],0x24
	test ecx,ecx
	jne Block149

 Block148:
	push 0x80004003
	call _com_issue_error

 Block149:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x10
	jne Block152

 Block150:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	test eax,eax
	je Block153

 Block151:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block153

 Block152:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block153:
	lea eax,[ebp+0x50]
	push eax
	call esi
	lea ecx,[ebp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block155

 Block154:
	push eax
	call _com_issue_error

 Block155:
	lea edx,[ebp+0x50]
	push edx
	push 0xFF777777
	push 0xB
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x48],esp
	push 0x1A25
	mov bl,0x25
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi+0xB74]
	mov byte ptr [ebp-4],0x26
	test ecx,ecx
	jne Block157

 Block156:
	push 0x80004003
	call _com_issue_error

 Block157:
	mov byte ptr [ebp-4],bl
	call IWzFont::Create
	cmp word ptr [ebp+0x50],8
	mov byte ptr [ebp-4],0x10
	jne Block160

 Block158:
	mov eax,dword ptr [ebp+0x58]
	xor ecx,ecx
	mov word ptr [ebp+0x50],cx
	test eax,eax
	je Block161

 Block159:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block161

 Block160:
	lea edx,[ebp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block161:
	mov eax,dword ptr [edi+0xB40]
	mov ecx,dword ptr [edi+0xB10]
	push eax
	call CCtrlTab::SetTab
	push 0
	mov ecx,edi
	call CUIMonsterCarnival::ToggleTabWindow
	mov eax,dword ptr [ebp+0x40]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],8
	call edx
	mov eax,dword ptr [ebp+0x38]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0x64]
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
	ret 4
}
}
// CUISummonedList::OnChildNotify
__SUB_CLASS_THIS(0040AC10, __thiscall, 70118,  CUISummonedList, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push esi
	push 0
	mov esi,ecx
	call CWnd::InvalidateRect
	cmp dword ptr [esp+0xC],0x64
	jne Block2

 Block1:
	mov ecx,dword ptr [esp+8]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push ecx
	mov ecx,esi
	call edx

 Block2:
	pop esi
	ret 0xC
}
}
// CUIMonsterCarnival::SetButton
_SUB_EXCEPTION_HANDLER(40BB60)
__SUB_CLASS_THIS0(0040BB60, __thiscall, 70025,  CUIMonsterCarnival, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_40BB60
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
	mov ecx,dword ptr [esi+0xB20]
	xor ebx,ebx
	cmp ecx,ebx
	je Block3

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	cmp dword ptr [esi+0xB20],ebx
	lea edi,[esi+0xB1C]
	je Block3

 Block2:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block3:
	mov eax,dword ptr [esi+0xB40]
	mov eax,dword ptr [esi+eax*4+0xB50]
	add eax,8
	mov eax,dword ptr [eax]
	cmp eax,ebx
	jne Block5

 Block4:
	xor ebp,ebp
	jmp Block7

 Block5:
	mov ebp,dword ptr [eax-4]
	cmp ebp,0xB
	jle Block7

 Block6:
	mov ebp,0xB

 Block7:
	push ebp
	mov ecx,esi
	call CUIMonsterCarnival::CalcTabWindowHeight
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x30],ebx
	lea ecx,[esp+0x28]
	push ecx
	add eax,0x4B
	push eax
	push 0x63
	push 3
	push offset _S_UIUIWINDOW2IMGMO
	lea edx,[esp+0x2C]
	push edx
	lea ecx,[esi+0x15E8]
	mov dword ptr [esp+0x58],ebx
	mov dword ptr [esp+0x40],ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov byte ptr [esp+0x40],1
	cmp eax,ebx
	je Block21

 Block8:
	add eax,8
	cmp eax,ebx
	je Block21

 Block9:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block11

 Block10:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov eax,dword ptr [esi+0xB20]
	mov dword ptr [esi+0xB20],edi
	mov dword ptr [esp+0x24],eax
	cmp eax,ebx
	je Block13

 Block12:
	push ebx
	lea ecx,[esp+0x24]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block13:
	mov byte ptr [esp+0x40],bl
	cmp dword ptr [esp+0x1C],ebx
	je Block15

 Block14:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x1C],ebx

 Block15:
	cmp ebp,ebx
	jle Block17

 Block16:
	cmp dword ptr [esi+0x15C0],ebx
	jne Block18

 Block17:
	mov eax,dword ptr [esi+0xB20]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax

 Block18:
	mov eax,dword ptr [esp+0x14]
	add eax,0xFFFFFFE7
	lea ecx,[eax+0x10]
	push ecx
	push 0x19
	push eax
	push 9
	add esi,0xB2C
	push esi
	call SetRect
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	cmp eax,ebx
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block20:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret

 Block21:
	xor edi,edi
	jmp Block11
}
}
// CUIMonsterCarnival::SetTeamCP
__SUB_CLASS_THIS(0040AC80, __thiscall, 70043,  CUIMonsterCarnival, void, long, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,1
	ja Block2

 Block1:
	mov edx,dword ptr [esp+8]
	mov dword ptr [ecx+eax*4+0x15D4],edx
	mov edx,dword ptr [esp+0xC]
	push 0
	mov dword ptr [ecx+eax*4+0x15DC],edx
	call CWnd::InvalidateRect

 Block2:
	ret 0xC
}
}
// CUIMonsterCarnival::OnTabChanged
__SUB_CLASS_THIS(004102C0, __thiscall, 70036,  CUIMonsterCarnival, void, long) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	xor eax,eax
	cmp edx,dword ptr [ecx+0xB40]
	setne al
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [ecx+0x15C0],0

 Block2:
	mov dword ptr [ecx+0xB40],edx
	mov dword ptr [ecx+0x15C8],0x1F40
	test eax,eax
	jne Block5

 Block3:
	cmp dword ptr [ecx+0xB44],eax
	je Block5

 Block4:
	mov dword ptr [esp+4],eax
	jmp  CUIMonsterCarnival::ToggleTabWindow

 Block5:
	mov dword ptr [esp+4],1
	jmp  CUIMonsterCarnival::ToggleTabWindow
}
}
// CUIMonsterCarnival::CUIMonsterCarnival
_SUB_EXCEPTION_HANDLER(40ED20)
__SUB_CLASS_THIS0(0040ED20, __thiscall, 70023,  CUIMonsterCarnival, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_40ED20
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
	xor edi,edi
	push edi
	push edi
	push edi
	push 0xFFFFFFFF
	push 0xFFFFFFFF
	push edi
	push 0x11
	call CUIWnd::_ctor_0
	lea eax,[esi+0xB08]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0xB08]
	mov dword ptr [TSingleton<CUIMonsterCarnival>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIMonsterCarnival>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIMonsterCarnival::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIMonsterCarnival::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIMonsterCarnival::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax],edi
	mov dword ptr [esi+0xB10],edi
	mov dword ptr [esi+0xB18],edi
	mov dword ptr [esi+0xB20],edi
	mov dword ptr [esi+0xB28],edi
	mov dword ptr [esi+0xB3C],edi
	mov dword ptr [esi+0xB44],edi
	mov dword ptr [esi+0xB48],edi
	mov dword ptr [esi+0xB4C],edi
	mov dword ptr [esi+0xB60],edi
	mov dword ptr [esi+0xB64],edi
	mov dword ptr [esi+0xB68],edi
	mov dword ptr [esi+0xB6C],edi
	mov dword ptr [esi+0xB70],edi
	mov dword ptr [esi+0xB74],edi
	lea ecx,[esi+0xB78]
	mov byte ptr [esp+0x18],0xC
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0x15C0],edi
	mov dword ptr [esi+0x15C4],edi
	mov dword ptr [esi+0x15C8],0x1F40
	mov dword ptr [esi+0x15E8],edi
	mov dword ptr [esi+0x15EC],edi
	mov dword ptr [esi+0x15F0],edi
	mov dword ptr [esi+0x15F4],edi
	mov dword ptr [esi+0x15F8],edi
	push 0xA
	mov dword ptr [esi+0x15CC],edi
	mov dword ptr [esi+0x15D0],edi
	push edi
	push edi
	mov ecx,esi
	mov byte ptr [esp+0x24],0xF
	mov dword ptr [esi+0x15D4],edi
	mov dword ptr [esi+0x15DC],edi
	mov dword ptr [esi+0x15D8],edi
	mov dword ptr [esi+0x15E0],edi
	call CUIWnd::CreateUIWndPosSaved
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
// CUIMonsterCarnival::RequestSend
_SUB_EXCEPTION_HANDLER(40B4A0)
__SUB_CLASS_THIS0(0040B4A0, __thiscall, 70025,  CUIMonsterCarnival, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_40B4A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [eax+0x20B8],0
	mov edi,eax
	jne Block4

 Block1:
	mov eax,dword ptr [eax+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block4

 Block2:
	call get_update_time
	sub eax,dword ptr [edi+0x20BC]
	cmp eax,0x1F4
	jl Block4

 Block3:
	push 0x106
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	movzx edx,byte ptr [esi+0xB40]
	push edx
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0
	call COutPacket::Encode1
	mov eax,dword ptr [esi+0x15C0]
	dec eax
	push eax
	lea ecx,[esp+0x10]
	call COutPacket::Encode4
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov esi,eax
	mov dword ptr [eax+0x20B8],1
	call get_update_time
	lea ecx,[esp+0x10]
	mov dword ptr [esi+0x20BC],eax
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block4:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret
}
}
// CUIMonsterCarnival::SetLayerSize
_SUB_EXCEPTION_HANDLER(40B5E0)
__SUB_CLASS_THIS(0040B5E0, __thiscall, 70033,  CUIMonsterCarnival, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_40B5E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x88]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x10],ecx
	mov eax,dword ptr [esp+0x98]
	mov edi,dword ptr [esp+0x9C]
	cmp dword ptr [ecx+0x24],eax
	jne Block2

 Block1:
	cmp dword ptr [ecx+0x28],edi
	je Block75

 Block2:
	test eax,eax
	je Block75

 Block3:
	test edi,edi
	je Block75

 Block4:
	mov eax,3
	mov word ptr [esp+0x18],ax
	mov dword ptr [esp+0x20],0xFFFFFFFE
	mov ecx,dword ptr [ecx+0x18]
	mov dword ptr [esp+0x90],0
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	cmp word ptr [esp+0x18],8
	mov dword ptr [esp+0x90],0xFFFFFFFF
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov dword ptr [esp+0xC],0
	lea edx,[esp+0x14]
	push 0x3D0
	push edx
	mov dword ptr [esp+0x98],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[esp+0x10]
	push ecx
	push eax
	mov byte ptr [esp+0x9C],2
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x90],1
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block14:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push edx
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x94],3
	call esi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	mov ecx,dword ptr [esp+0xC]
	mov byte ptr [esp+0x90],4
	test ecx,ecx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea eax,[esp+0x28]
	push eax
	mov eax,dword ptr [esp+0x9C]
	lea edx,[esp+0x1C]
	push edx
	push edi
	push eax
	call IWzCanvas::Create
	mov edi,8
	mov byte ptr [esp+0x90],3
	cmp word ptr [esp+0x18],di
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov byte ptr [esp+0x90],1
	cmp word ptr [esp+0x28],di
	jne Block27

 Block25:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov edx,dword ptr [eax]
	push 0
	mov edi,eax
	push eax
	mov eax,dword ptr [edx+0x70]
	call eax
	test eax,eax
	jge Block32

 Block31:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block32:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x78]
	push 0
	push eax
	mov edi,eax
	call edx
	test eax,eax
	jge Block36

 Block35:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block36:
	lea eax,[esp+0x68]
	push eax
	call esi
	lea ecx,[esp+0x68]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	lea edx,[esp+0x58]
	push edx
	mov byte ptr [esp+0x94],5
	call esi
	lea eax,[esp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x94],6
	call esi
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x94],7
	call esi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x94],8
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	mov ecx,dword ptr [esp+0x10]
	mov ecx,dword ptr [ecx+0x18]
	mov byte ptr [esp+0x90],9
	test ecx,ecx
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	lea edx,[esp+0x68]
	push edx
	lea eax,[esp+0x5C]
	push eax
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x44]
	push eax
	mov eax,dword ptr [esp+0x1C]
	lea edx,[esp+0x38]
	push edx
	push eax
	lea edx,[esp+0x90]
	push edx
	call IWzGr2DLayer::InsertCanvas
	mov edi,8
	cmp word ptr [esp+0x78],di
	jne Block55

 Block49:
	xor eax,eax
	mov word ptr [esp+0x78],ax
	mov eax,dword ptr [esp+0x80]
	test eax,eax
	je Block51

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block51:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block52:
	mov byte ptr [esp+0x90],8
	cmp word ptr [esp+0x28],di
	jne Block56

 Block53:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block57

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block55:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x78]
	push ecx
	call esi
	jmp Block52

 Block56:
	lea eax,[esp+0x28]
	push eax
	call esi

 Block57:
	mov byte ptr [esp+0x90],7
	cmp word ptr [esp+0x38],di
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea edx,[esp+0x38]
	push edx
	call esi

 Block61:
	mov byte ptr [esp+0x90],6
	cmp word ptr [esp+0x48],di
	jne Block64

 Block62:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea ecx,[esp+0x48]
	push ecx
	call esi

 Block65:
	mov byte ptr [esp+0x90],5
	cmp word ptr [esp+0x58],di
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea eax,[esp+0x58]
	push eax
	call esi

 Block69:
	mov byte ptr [esp+0x90],1
	cmp word ptr [esp+0x68],di
	jne Block72

 Block70:
	mov eax,dword ptr [esp+0x70]
	xor ecx,ecx
	mov word ptr [esp+0x68],cx
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea edx,[esp+0x68]
	push edx
	call esi

 Block73:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [esp+0x98]
	mov edx,dword ptr [esp+0x9C]
	mov dword ptr [eax+0x24],ecx
	mov dword ptr [eax+0x28],edx
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x90],0xFFFFFFFF
	test eax,eax
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block75:
	mov ecx,dword ptr [esp+0x88]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x88
	ret 8
}
}
// CUISummonedList::ClearToolTip
__SUB_CLASS_THIS0(0040B1B0, __thiscall, 70119,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0x7C
	jmp  CUIToolTip::ClearToolTip
}
}
// CUISummonedList::MoveScrollBarPos
__SUB_CLASS_THIS(0040AD10, __thiscall, 70120,  CUISummonedList, void, long) {
__asm {

 Block0:
	cmp dword ptr [ecx+0xAD4],0
	je Block2

 Block1:
	mov ecx,dword ptr [ecx+0xAD4]
	mov eax,dword ptr [ecx+0x38]
	add eax,dword ptr [esp+4]
	mov dword ptr [esp+4],eax
	jmp  CCtrlScrollBar::SetCurPos

 Block2:
	ret 4
}
}
// CTabList::~CTabList
_SUB_EXCEPTION_HANDLER(40ECA0)
__SUB_CLASS_THIS0(0040ECA0, __thiscall, 69984,  CTabList, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_40ECA0
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
	int 3// TODO: 	mov dword ptr [esi],offset CTabList::`vftable'
	lea ecx,[esi+0xC]
	mov dword ptr [esp+0x14],0
	call CLayoutMan::~CLayoutMan
	lea ecx,[esi+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call ZArray<CTabList::TAB_ITEM>::RemoveAll
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIMonsterCarnival::OnMouseButton
__SUB_CLASS_THIS(0040E840, __thiscall, 70031,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0x10]
	push ebp
	mov ebp,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x20]
	add edi,0xFFFFFF9C
	mov esi,ecx
	cmp ebp,0x201
	je Block2

 Block1:
	cmp ebp,0x203
	jne Block11

 Block2:
	push edi
	push ebx
	lea eax,[esi+0xB28]
	push eax
	call PtInRect
	test eax,eax
	je Block4

 Block3:
	xor ecx,ecx
	cmp dword ptr [esi+0xB38],ecx
	mov dword ptr [esi+0x15C4],0x1F40
	sete cl
	mov dword ptr [esi+0xB38],ecx
	lea ecx,[esi+0xB74]
	call CUIToolTip::ClearToolTip
	add esi,0xFFFFFFFC
	mov ecx,esi
	call CUIMonsterCarnival::SetButton
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0x10

 Block4:
	mov eax,dword ptr [esi+0xB3C]
	mov edx,dword ptr [esi+0x15BC]
	mov ecx,dword ptr [esi+eax*4+0xB4C]
	push edi
	push ebx
	mov dword ptr [esp+0x24],edx
	call CTabList::GetSelectItemIdx_0
	mov dword ptr [esi+0x15BC],eax
	test eax,eax
	je Block7

 Block5:
	mov eax,dword ptr [esi+0xB1C]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax
	mov dword ptr [esi+0x15C4],0x1F40
	cmp ebp,0x203
	jne Block8

 Block6:
	lea ecx,[esi-4]
	call CUIMonsterCarnival::RequestSend
	jmp Block8

 Block7:
	mov ecx,dword ptr [esi+0xB1C]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x1C]
	add ecx,4
	push 0
	call eax

 Block8:
	mov ecx,dword ptr [esp+0x1C]
	cmp dword ptr [esi+0x15BC],ecx
	je Block10

 Block9:
	push 0
	lea ecx,[esi-4]
	call CWnd::InvalidateRect

 Block10:
	mov edx,dword ptr [esp+0x20]
	push edi
	push ebx
	push edx
	push ebx
	lea ecx,[esi-4]
	call CUIMonsterCarnival::DrawListTooltip

 Block11:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0x10
}
}
