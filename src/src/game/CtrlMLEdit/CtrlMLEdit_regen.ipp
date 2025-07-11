#include "regen.hpp"
// CtrlMLEdit.ipp
#include "CtrlMLEdit.hpp"

// CCtrlMLEdit::MoveCaret
__SUB_CLASS_THIS(000E9550, __thiscall, 15246,  CCtrlMLEdit, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	cmp eax,5
	ja Block12

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block6
cmp EAX, 3
je Block7
cmp EAX, 4
je Block4
cmp EAX, 5
je Block5


 Block2:
	call CCtrlMLEdit::GetPrevCount
	sub dword ptr [esi+0x40],eax
	mov ecx,esi
	jmp Block11

 Block3:
	call CCtrlMLEdit::GetNextCount_1
	add dword ptr [esi+0x40],eax
	mov ecx,esi
	jmp Block11

 Block4:
	push 4
	call CCtrlMLEdit::AdjustVert
	mov ecx,esi
	call CCtrlWnd::InvalidateRect
	pop esi
	ret 4

 Block5:
	push 5
	call CCtrlMLEdit::AdjustVert
	mov ecx,esi
	call CCtrlWnd::InvalidateRect
	pop esi
	ret 4

 Block6:
	mov dword ptr [esi+0x40],0
	jmp Block11

 Block7:
	mov eax,dword ptr [esi+0x34]
	test eax,eax
	je Block9

 Block8:
	mov eax,dword ptr [eax-4]
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	mov dword ptr [esi+0x40],eax

 Block11:
	push 0
	push 0
	push 0
	call CCtrlMLEdit::AdjustHorz

 Block12:
	mov ecx,esi
	call CCtrlWnd::InvalidateRect
	pop esi
	ret 4
}
}
// CCtrlMLEdit::DrawTextLine
_SUB_EXCEPTION_HANDLER(E6480)
__SUB_CLASS_THIS(000E6480, __thiscall, 15275,  CCtrlMLEdit, void, NakedParam<_x_com_ptr<IWzCanvas>>, long, NakedParam<ZXString<char>>, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E6480
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x110
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x124]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x58],ebx
	mov esi,dword ptr [ebx+0x18]
	xor edi,edi
	mov dword ptr [esp+0x12C],1
	cmp esi,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x68]
	lea ecx,[esp+0x24]
	push ecx
	push esi
	mov dword ptr [esp+0x2C],edi
	call edx
	cmp eax,edi
	jge Block4

 Block3:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov eax,dword ptr [ebx+0x38]
	sub eax,dword ptr [ebx+0x60]
	mov dword ptr [esp+0x20],edi
	add eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x30],eax
	xor esi,esi
	mov dword ptr [esp+0x1C],esi
	mov eax,dword ptr [ebx+0x44]
	mov byte ptr [esp+0x12C],3
	cmp eax,edi
	jne Block6

 Block5:
	xor edx,edx
	jmp Block7

 Block6:
	mov edx,dword ptr [eax-4]

 Block7:
	mov ecx,dword ptr [ebx+0x48]
	mov eax,dword ptr [ebx+0x90]
	add eax,ecx
	cmp edx,eax
	jge Block9

 Block8:
	mov eax,edx
	mov dword ptr [esp+0x38],edx
	jmp Block10

 Block9:
	mov dword ptr [esp+0x38],eax

 Block10:
	cmp ecx,eax
	mov dword ptr [esp+0x24],ecx
	jge Block171

 Block11:
	jmp Block13

 Block13:
	mov eax,dword ptr [ebx+0x44]
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [ebx+0x44]
	mov edi,dword ptr [eax+edx*4]
	lea eax,[eax+edx*4]
	test ecx,ecx
	je Block15

 Block14:
	mov ecx,dword ptr [ecx-4]

 Block15:
	dec ecx
	cmp edx,ecx
	jne Block20

 Block16:
	mov eax,dword ptr [ebx+0x34]
	test eax,eax
	je Block18

 Block17:
	mov esi,dword ptr [eax-4]
	jmp Block19

 Block18:
	xor esi,esi

 Block19:
	push 0xFFFFFFFF
	push edi
	lea ecx,[esp+0x48]
	push ecx
	lea ecx,[esp+0x148]
	call ZXString<char>::Substring
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x130],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x40]
	jmp Block21

 Block20:
	mov esi,dword ptr [eax+4]
	push esi
	push edi
	lea edx,[esp+0x68]
	push edx
	lea ecx,[esp+0x148]
	call ZXString<char>::Substring
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x130],5
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x60]

 Block21:
	mov byte ptr [esp+0x12C],3
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov ecx,dword ptr [esp+0x140]
	cmp ecx,0xFFFFFFFF
	je Block38

 Block24:
	mov eax,dword ptr [esp+0x144]
	cmp eax,0xFFFFFFFF
	je Block38

 Block25:
	cmp ecx,edi
	jge Block31

 Block26:
	cmp eax,edi
	jl Block29

 Block27:
	cmp eax,esi
	jge Block30

 Block28:
	xor ebp,ebp
	sub eax,edi
	mov dword ptr [esp+0x18],eax
	jmp Block39

 Block29:
	cmp eax,esi
	jl Block38

 Block30:
	xor ebp,ebp
	sub esi,edi
	mov dword ptr [esp+0x18],esi
	jmp Block39

 Block31:
	cmp ecx,esi
	jge Block38

 Block32:
	cmp eax,edi
	jl Block35

 Block33:
	cmp eax,esi
	jge Block35

 Block34:
	mov ebp,ecx
	sub ebp,edi
	sub eax,edi
	mov dword ptr [esp+0x18],eax
	jmp Block39

 Block35:
	cmp ecx,esi
	jge Block38

 Block36:
	cmp eax,esi
	jl Block38

 Block37:
	mov ebp,ecx
	sub ebp,edi
	sub esi,edi
	mov dword ptr [esp+0x18],esi
	jmp Block39

 Block38:
	or ebp,0xFFFFFFFF
	mov dword ptr [esp+0x18],ebp

 Block39:
	mov ecx,ebx
	call CCtrlWnd::IsFocused
	test eax,eax
	je Block114

 Block40:
	cmp ebp,0xFFFFFFFF
	je Block114

 Block41:
	cmp dword ptr [esp+0x18],0xFFFFFFFF
	je Block114

 Block42:
	mov eax,dword ptr [ebx+0x68]
	mov edi,dword ptr [esp+0x20]
	cmp edi,eax
	je Block47

 Block43:
	mov esi,edi
	mov edi,eax
	mov dword ptr [esp+0x20],edi
	test eax,eax
	je Block45

 Block44:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block45:
	test esi,esi
	je Block47

 Block46:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block47:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x64]
	push edx
	call esi
	lea eax,[esp+0x64]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block180

 Block48:
	lea ecx,[esp+0x84]
	push ecx
	mov byte ptr [esp+0x130],9
	call esi
	lea edx,[esp+0x84]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block180

 Block49:
	lea eax,[esp+0x64]
	push eax
	lea ecx,[esp+0x88]
	push ecx
	push edi
	push ebp
	push 0
	lea edx,[esp+0x58]
	push edx
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x144],0xA
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x140],0xB
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x144]
	mov byte ptr [esp+0x13C],0xC
	test ecx,ecx
	je Block1

 Block50:
	mov eax,dword ptr [esp+0x148]
	mov edx,dword ptr [esp+0x40]
	push eax
	push edx
	mov byte ptr [esp+0x144],0xB
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x12C],0xA
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block52:
	cmp word ptr [esp+0x84],8
	mov byte ptr [esp+0x12C],9
	jne Block55

 Block53:
	xor eax,eax
	mov word ptr [esp+0x84],ax
	mov eax,dword ptr [esp+0x8C]
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea ecx,[esp+0x84]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0x12C],3
	jne Block59

 Block57:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea eax,[esp+0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block60:
	lea ecx,[esp+0x104]
	push ecx
	call esi
	lea edx,[esp+0x104]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block180

 Block61:
	lea eax,[esp+0x104]
	push eax
	push ebp
	push 0
	lea ecx,[esp+0x60]
	push ecx
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x13C],0xD
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x138],0xE
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x134],0xF
	test edi,edi
	je Block1

 Block62:
	mov ecx,edi
	mov byte ptr [esp+0x134],0xE
	call IWzFont::CalcTextWidth
	mov esi,eax
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x12C],0xD
	test eax,eax
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block64:
	cmp word ptr [esp+0x104],8
	mov byte ptr [esp+0x12C],3
	jne Block67

 Block65:
	mov eax,dword ptr [esp+0x10C]
	xor edx,edx
	mov word ptr [esp+0x104],dx
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea eax,[esp+0x104]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block68:
	mov ecx,dword ptr [esp+0x30]
	mov eax,dword ptr [ebx+0x70]
	add esi,ecx
	mov dword ptr [esp+0x28],esi
	cmp edi,eax
	je Block73

 Block69:
	mov esi,edi
	mov edi,eax
	mov dword ptr [esp+0x20],edi
	test eax,eax
	je Block71

 Block70:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block71:
	test esi,esi
	je Block73

 Block72:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block73:
	lea eax,[esp+0xA4]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0xA4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block180

 Block74:
	mov eax,dword ptr [esp+0x18]
	lea edx,[esp+0xA4]
	push edx
	push eax
	push ebp
	lea ecx,[esp+0x58]
	push ecx
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x13C],0x10
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x1C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x138],0x11
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x134],0x12
	test edi,edi
	je Block1

 Block75:
	mov ecx,edi
	mov byte ptr [esp+0x134],0x11
	call IWzFont::CalcTextWidth
	mov dword ptr [esp+0x14],eax
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x12C],0x10
	test eax,eax
	je Block77

 Block76:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block77:
	cmp word ptr [esp+0xA4],8
	mov byte ptr [esp+0x12C],3
	jne Block80

 Block78:
	mov eax,dword ptr [esp+0xAC]
	xor edx,edx
	mov word ptr [esp+0xA4],dx
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea eax,[esp+0xA4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov eax,dword ptr [esp+0x134]
	test eax,eax
	je Block1

 Block82:
	mov ecx,dword ptr [ebx+0x7C]
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x8C]
	push 0xFF00007F
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0x144]
	push ecx
	mov ecx,dword ptr [esp+0x38]
	push ecx
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block84

 Block83:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block84:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0xC4]
	push eax
	call esi
	lea ecx,[esp+0xC4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block180

 Block85:
	lea edx,[esp+0xE4]
	push edx
	mov byte ptr [esp+0x130],0x13
	call esi
	lea eax,[esp+0xE4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block180

 Block86:
	mov eax,dword ptr [esp+0x18]
	lea ecx,[esp+0xC4]
	push ecx
	lea edx,[esp+0xE8]
	push edx
	push edi
	push eax
	push ebp
	lea ecx,[esp+0x70]
	push ecx
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x144],0x14
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x140],0x15
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x144]
	mov byte ptr [esp+0x13C],0x16
	test ecx,ecx
	je Block1

 Block87:
	mov edx,dword ptr [esp+0x148]
	mov esi,dword ptr [esp+0x38]
	push edx
	push esi
	mov byte ptr [esp+0x144],0x15
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x12C],0x14
	test eax,eax
	je Block89

 Block88:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block89:
	mov ebp,8
	mov byte ptr [esp+0x12C],0x13
	cmp word ptr [esp+0xE4],bp
	jne Block92

 Block90:
	xor eax,eax
	mov word ptr [esp+0xE4],ax
	mov eax,dword ptr [esp+0xEC]
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea ecx,[esp+0xE4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	mov byte ptr [esp+0x12C],3
	cmp word ptr [esp+0xC4],bp
	jne Block96

 Block94:
	mov eax,dword ptr [esp+0xCC]
	xor edx,edx
	mov word ptr [esp+0xC4],dx
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea eax,[esp+0xC4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block97:
	mov eax,dword ptr [ebx+0x68]
	add esi,dword ptr [esp+0x14]
	cmp edi,eax
	je Block102

 Block98:
	mov ebp,edi
	mov edi,eax
	mov dword ptr [esp+0x20],edi
	test eax,eax
	je Block100

 Block99:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block100:
	test ebp,ebp
	je Block102

 Block101:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block102:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x94]
	push edx
	call ebp
	lea eax,[esp+0x94]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block180

 Block103:
	lea ecx,[esp+0x74]
	push ecx
	mov byte ptr [esp+0x130],0x17
	call ebp
	lea edx,[esp+0x74]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block180

 Block104:
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x94]
	push eax
	lea ecx,[esp+0x78]
	push ecx
	push edi
	push 0xFFFFFFFF
	push edx
	lea eax,[esp+0x50]
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x144],0x18
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x140],0x19
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x144]
	mov byte ptr [esp+0x13C],0x1A
	test ecx,ecx
	je Block1

 Block105:
	mov edx,dword ptr [esp+0x148]
	push edx
	push esi
	mov byte ptr [esp+0x144],0x19
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x12C],0x18
	test eax,eax
	je Block107

 Block106:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block107:
	mov esi,8
	mov byte ptr [esp+0x12C],0x17
	cmp word ptr [esp+0x74],si
	jne Block110

 Block108:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	test eax,eax
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block111:
	mov byte ptr [esp+0x12C],3
	cmp word ptr [esp+0x94],si
	jne Block113

 Block112:
	mov eax,dword ptr [esp+0x9C]
	xor edx,edx
	mov word ptr [esp+0x94],dx
	jmp Block130

 Block113:
	lea eax,[esp+0x94]
	jmp Block133

 Block114:
	mov edx,dword ptr [ebx+4]
	mov eax,dword ptr [edx+0x20]
	lea ecx,[ebx+4]
	call eax
	test eax,eax
	lea eax,[ebx+0x68]
	jne Block116

 Block115:
	lea eax,[ebx+0x6C]

 Block116:
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x20]
	cmp esi,eax
	je Block121

 Block117:
	mov edi,esi
	mov esi,eax
	mov dword ptr [esp+0x20],esi
	test eax,eax
	je Block119

 Block118:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block119:
	test edi,edi
	je Block121

 Block120:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block121:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xD4]
	push edx
	call edi
	lea eax,[esp+0xD4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block180

 Block122:
	lea ecx,[esp+0xB4]
	push ecx
	mov byte ptr [esp+0x130],6
	call edi
	lea edx,[esp+0xB4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block180

 Block123:
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0xD4]
	push eax
	lea ecx,[esp+0xB8]
	push ecx
	push esi
	push ecx
	mov dword ptr [esp+0x3C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x140],7
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x144]
	mov byte ptr [esp+0x13C],8
	test ecx,ecx
	je Block1

 Block124:
	mov eax,dword ptr [esp+0x148]
	mov edx,dword ptr [esp+0x40]
	push eax
	push edx
	mov byte ptr [esp+0x144],7
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x12C],6
	cmp word ptr [esp+0xB4],si
	jne Block127

 Block125:
	xor eax,eax
	mov word ptr [esp+0xB4],ax
	mov eax,dword ptr [esp+0xBC]
	test eax,eax
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea ecx,[esp+0xB4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block128:
	mov byte ptr [esp+0x12C],3
	cmp word ptr [esp+0xD4],si
	jne Block132

 Block129:
	mov eax,dword ptr [esp+0xDC]
	xor edx,edx
	mov word ptr [esp+0xD4],dx

 Block130:
	test eax,eax
	je Block134

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block134

 Block132:
	lea eax,[esp+0xD4]

 Block133:
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block134:
	mov edx,dword ptr [ebx+4]
	mov eax,dword ptr [edx+0x20]
	lea ecx,[ebx+4]
	call eax
	test eax,eax
	je Block169

 Block135:
	mov eax,dword ptr [ebx+0x50]
	xor esi,esi
	cmp eax,esi
	je Block169

 Block136:
	cmp dword ptr [eax-4],esi
	je Block169

 Block137:
	mov edi,dword ptr [ebx+0x18]
	cmp edi,esi
	je Block1

 Block138:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x68]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],esi
	call eax
	cmp eax,esi
	jge Block140

 Block139:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block140:
	mov eax,dword ptr [ebx+0x38]
	sub eax,dword ptr [ebx+0x60]
	mov edi,dword ptr [ebx+0x18]
	add eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x18],eax
	cmp edi,esi
	je Block1

 Block141:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],esi
	call eax
	cmp eax,esi
	jge Block143

 Block142:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block143:
	lea ecx,[esp+0xF4]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xF4]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,esi
	jl Block180

 Block144:
	lea eax,[esp+0xF4]
	push eax
	mov eax,dword ptr [ebx+0x50]
	mov ecx,dword ptr [eax]
	add ecx,dword ptr [ebx+0x40]
	lea edx,[esp+0x4C]
	push ecx
	push edx
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x138],0x1B
	call ZXString<char>::Left
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x138],0x1C
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebx+0x68]
	mov byte ptr [esp+0x134],0x1D
	cmp ecx,esi
	je Block1

 Block145:
	mov byte ptr [esp+0x134],0x1C
	call IWzFont::CalcTextWidth
	mov dword ptr [esp+0x14],eax
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x12C],0x1B
	cmp eax,esi
	je Block147

 Block146:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block147:
	cmp word ptr [esp+0xF4],8
	mov byte ptr [esp+0x12C],3
	jne Block150

 Block148:
	xor eax,eax
	mov word ptr [esp+0xF4],ax
	mov eax,dword ptr [esp+0xFC]
	cmp eax,esi
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea ecx,[esp+0xF4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block151:
	mov edi,1

 Block152:
	mov eax,dword ptr [ebx+0x50]
	mov dword ptr [esp+0x28],edi
	test eax,eax
	je Block169

 Block153:
	cmp edi,dword ptr [eax-4]
	jae Block169

 Block154:
	lea edx,[esp+0x114]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x114]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block180

 Block155:
	mov edx,dword ptr [ebx+0x50]
	lea eax,[edx+edi*4]
	mov eax,dword ptr [eax]
	add eax,dword ptr [ebx+0x40]
	lea ecx,[esp+0x114]
	push ecx
	push eax
	lea ecx,[esp+0x58]
	push ecx
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x138],0x1E
	call ZXString<char>::Left
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x138],0x1F
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebx+0x68]
	mov byte ptr [esp+0x134],0x20
	test ecx,ecx
	je Block1

 Block156:
	mov byte ptr [esp+0x134],0x1F
	call IWzFont::CalcTextWidth
	mov ebp,eax
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x12C],0x1E
	test eax,eax
	je Block158

 Block157:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block158:
	cmp word ptr [esp+0x114],8
	mov byte ptr [esp+0x12C],3
	jne Block161

 Block159:
	mov eax,dword ptr [esp+0x11C]
	xor edx,edx
	mov word ptr [esp+0x114],dx
	test eax,eax
	je Block162

 Block160:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block162

 Block161:
	lea eax,[esp+0x114]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block162:
	mov esi,dword ptr [ebx+0x54]
	inc esi
	sub esi,edi
	mov edi,dword ptr [ebx+0x68]
	neg esi
	sbb esi,esi
	add esi,2
	test edi,edi
	je Block1

 Block163:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x10]
	lea edx,[esp+0x34]
	push edx
	push edi
	mov dword ptr [esp+0x3C],0
	call eax
	test eax,eax
	jge Block165

 Block164:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push edi
	push eax
	call _com_issue_errorex

 Block165:
	mov ecx,dword ptr [esp+0x134]
	test ecx,ecx
	je Block1

 Block166:
	mov edx,dword ptr [esp+0x34]
	mov eax,dword ptr [ebx+0x7C]
	mov ebx,dword ptr [ecx]
	push edx
	mov edx,dword ptr [esp+0x18]
	push esi
	sub eax,esi
	add eax,dword ptr [esp+0x140]
	mov esi,ebp
	sub esi,edx
	sub esi,2
	push esi
	push eax
	mov eax,dword ptr [esp+0x28]
	lea edx,[edx+eax+1]
	mov eax,dword ptr [ebx+0x8C]
	push edx
	push ecx
	mov edi,ecx
	call eax
	test eax,eax
	jge Block168

 Block167:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block168:
	mov edi,dword ptr [esp+0x28]
	mov ebx,dword ptr [esp+0x58]
	mov dword ptr [esp+0x14],ebp
	inc edi
	jmp Block152

 Block169:
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [ebx+0x7C]
	add dword ptr [esp+0x138],ecx
	inc eax
	cmp eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x24],eax
	jl Block13

 Block170:
	mov edi,dword ptr [esp+0x20]
	mov esi,dword ptr [esp+0x1C]

 Block171:
	mov byte ptr [esp+0x12C],2
	test esi,esi
	je Block173

 Block172:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block173:
	mov byte ptr [esp+0x12C],1
	test edi,edi
	je Block175

 Block174:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block175:
	mov eax,dword ptr [esp+0x134]
	mov byte ptr [esp+0x12C],0
	test eax,eax
	je Block177

 Block176:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block177:
	mov eax,dword ptr [esp+0x13C]
	mov dword ptr [esp+0x12C],0xFFFFFFFF
	test eax,eax
	je Block179

 Block178:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block179:
	mov ecx,dword ptr [esp+0x124]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x11C
	ret 0x14

 Block180:
	push eax
	call _com_issue_error
}
}
// CCtrlMLEdit::OnCreate
_SUB_EXCEPTION_HANDLER(E87E0)
__SUB_CLASS_THIS(000E87E0, __thiscall, 15263,  CCtrlMLEdit, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E87E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov edi,dword ptr [esp+0x4C]
	mov eax,dword ptr [edi+0x10]
	mov dword ptr [esi+0x7C],eax
	mov ecx,dword ptr [edi+0x1C]
	mov dword ptr [esi+0x80],ecx
	mov edx,dword ptr [edi+0x20]
	mov dword ptr [esi+0x84],edx
	mov eax,dword ptr [edi+0x24]
	mov dword ptr [esi+0x88],eax
	mov eax,dword ptr [edi+0x28]
	cmp eax,ebx
	jne Block2

 Block1:
	mov eax,0xFFFF

 Block2:
	mov dword ptr [esi+0x8C],eax
	mov ecx,dword ptr [edi+0x2C]
	mov dword ptr [esi+0x94],ecx
	mov edx,dword ptr [edi+0x30]
	mov dword ptr [esi+0x90],edx
	mov dword ptr [esi+0x48],ebx
	mov eax,dword ptr [edi+4]
	mov dword ptr [esi+0x38],eax
	mov ecx,dword ptr [edi+8]
	mov dword ptr [esi+0x3C],ecx
	mov edx,dword ptr [edi+0x34]
	mov ecx,dword ptr [esi+0x1C]
	add eax,eax
	sub ecx,eax
	mov dword ptr [esi+0x98],edx
	mov dword ptr [esi+0x4C],ebx
	mov dword ptr [esi+0x40],ebx
	mov dword ptr [esi+0x5C],0xFFFFFFFF
	mov dword ptr [esi+0x60],ebx
	mov dword ptr [esi+0x64],ecx
	mov dword ptr [esi+0x58],ebx
	mov ebp,dword ptr [edi+0x18]
	cmp ebp,ebx
	je Block7

 Block3:
	mov edx,8
	push ebp
	mov word ptr [esp+0x30],dx
	call ZComAPI::ZComSysAllocString
	add esp,4
	mov dword ptr [esp+0x34],eax
	cmp eax,ebx
	jne Block6

 Block4:
	cmp ebp,ebx
	je Block6

 Block5:
	push 0x8007000E
	call _com_issue_error

 Block6:
	lea ebp,[esp+0x2C]
	mov dword ptr [esp+0x44],ebx
	mov dword ptr [esp+0x14],1
	jmp Block8

 Block7:
	mov ebp,offset _D_VTEMPTY

 Block8:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x1C]
	push ebp
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	test byte ptr [esp+0x14],1
	mov dword ptr [esp+0x44],2
	je Block15

 Block11:
	cmp word ptr [esp+0x2C],8
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,ebx
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block15:
	lea ecx,[esp+0x4C]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ebx,[esi+0x68]
	push ebx
	push eax
	mov byte ptr [esp+0x50],3
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x58]
	add esp,0xC
	mov byte ptr [esp+0x44],2
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block17:
	mov eax,dword ptr [edi+0x14]
	mov ecx,dword ptr [edi+0x10]
	lea edx,[esp+0x1C]
	push edx
	push eax
	mov eax,dword ptr [edi+0xC]
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x5C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block19

 Block18:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block19:
	mov ecx,dword ptr [ebx]
	mov byte ptr [esp+0x54],4
	test ecx,ecx
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	mov byte ptr [esp+0x54],2
	call IWzFont::Create
	lea edx,[esp+0x4C]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ebp,[esi+0x70]
	push ebp
	push eax
	mov byte ptr [esp+0x50],5
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x58]
	add esp,0xC
	mov byte ptr [esp+0x44],2
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block23:
	mov ecx,dword ptr [edi+0x10]
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [edi+0xC]
	push 0xFFFFFFFF
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x5C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block25

 Block24:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block25:
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x54],6
	test ecx,ecx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	mov byte ptr [esp+0x54],2
	call IWzFont::Create
	test dword ptr [esi+0x80],0xFF000000
	jne Block33

 Block28:
	mov eax,dword ptr [ebx]
	mov ebp,dword ptr [esi+0x6C]
	xor ebx,ebx
	cmp ebp,eax
	je Block40

 Block29:
	mov dword ptr [esi+0x6C],eax
	cmp eax,ebx
	je Block31

 Block30:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block31:
	cmp ebp,ebx
	je Block40

 Block32:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx
	jmp Block40

 Block33:
	lea eax,[esp+0x4C]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ebp,[esi+0x6C]
	push ebp
	push eax
	mov byte ptr [esp+0x50],7
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x58]
	add esp,0xC
	mov byte ptr [esp+0x44],2
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block35:
	mov edx,dword ptr [edi+0x10]
	mov eax,dword ptr [edi+0xC]
	lea ecx,[esp+0x1C]
	push ecx
	push 0xFF404040
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x5C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block37

 Block36:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block37:
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x54],8
	test ecx,ecx
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	mov byte ptr [esp+0x54],2
	call IWzFont::Create
	xor ebx,ebx

 Block40:
	lea eax,[esp+0x4C]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ebp,[esi+0x74]
	push ebp
	push eax
	mov byte ptr [esp+0x50],9
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x58]
	add esp,0xC
	mov byte ptr [esp+0x44],2
	cmp eax,ebx
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block42:
	mov edx,dword ptr [edi+0x10]
	mov eax,dword ptr [edi+0xC]
	lea ecx,[esp+0x1C]
	push ecx
	push 0xFF000000
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x5C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block44

 Block43:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block44:
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x54],0xA
	cmp ecx,ebx
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	mov byte ptr [esp+0x54],2
	call IWzFont::Create
	lea eax,[esp+0x4C]
	push 0x5AF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ebp,[esi+0x78]
	push ebp
	push eax
	mov byte ptr [esp+0x50],0xB
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x58]
	add esp,0xC
	mov byte ptr [esp+0x44],2
	cmp eax,ebx
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block48:
	mov edx,dword ptr [edi+0x10]
	mov eax,dword ptr [edi+0xC]
	lea ecx,[esp+0x1C]
	push ecx
	push 0xFFFFFFFF
	push edx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x5C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block50

 Block49:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block50:
	mov ecx,dword ptr [ebp]
	mov byte ptr [esp+0x54],0xC
	cmp ecx,ebx
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	mov byte ptr [esp+0x54],2
	call IWzFont::Create
	push edi
	lea ecx,[esi+0x34]
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esi+0x24]
	lea eax,[esp+0x14]
	push eax
	call CWnd::GetLayer
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x44],0xD
	cmp edi,ebx
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0xB0]
	lea edx,[esp+0x4C]
	push edx
	push edi
	mov dword ptr [esp+0x54],ebx
	call eax
	cmp eax,ebx
	jge Block56

 Block55:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block56:
	mov ecx,dword ptr [esp+0x4C]
	mov edi,dword ptr [esi+0x18]
	mov edx,dword ptr [esi+0x7C]
	inc ecx
	push ecx
	push edx
	cmp edi,ebx
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x70]
	lea ecx,[esp+0x54]
	push ecx
	push edi
	mov dword ptr [esp+0x5C],ebx
	call edx
	cmp eax,ebx
	jge Block60

 Block59:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block60:
	mov eax,dword ptr [esi+0x3C]
	add eax,dword ptr [esp+0x54]
	mov edi,dword ptr [esi+0x18]
	push eax
	cmp edi,ebx
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x68]
	lea edx,[esp+0x58]
	push edx
	push edi
	mov dword ptr [esp+0x60],ebx
	call eax
	cmp eax,ebx
	jge Block64

 Block63:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block64:
	mov ecx,dword ptr [esi+0x38]
	add ecx,dword ptr [esp+0x58]
	push ecx
	mov ecx,dword ptr [esi+0x24]
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push edx
	call CWnd::GetLayer
	lea edi,[esi+0x9C]
	mov ecx,edi
	call CCtrlMLEdit::CEditCaret::MakeCaret
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x44],2
	cmp eax,ebx
	je Block66

 Block65:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block66:
	cmp dword ptr [esi+0x88],ebx
	je Block68

 Block67:
	mov eax,1
	mov dword ptr [edi+0x1C],eax
	mov dword ptr [edi+0x18],eax

 Block68:
	push 1
	push ebx
	push ebx
	mov ecx,esi
	mov dword ptr [esi+0x5C],ebx
	mov dword ptr [esi+0x40],ebx
	call CCtrlMLEdit::AdjustHorz
	cmp word ptr [esp+0x1C],8
	mov dword ptr [esp+0x44],0xFFFFFFFF
	jne Block71

 Block69:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret 4
}
}
// CCtrlMLEdit::UpdateScrollbar
__SUB_CLASS_THIS0(000E8560, __thiscall, 15243,  CCtrlMLEdit, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov edx,dword ptr [esi+0xC8]
	test edx,edx
	je Block6

 Block1:
	push edi
	call CCtrlMLEdit::GetTotalRow
	mov ecx,1
	sub ecx,dword ptr [esi+0x90]
	add eax,ecx
	push eax
	mov ecx,edx
	call CCtrlScrollBar::SetScrollRange
	mov ecx,esi
	call CCtrlMLEdit::GetRow
	mov ecx,dword ptr [esi+0xC8]
	mov edx,dword ptr [esi+0x90]
	mov edi,dword ptr [ecx+0x38]
	add edi,edx
	cmp eax,edi
	jl Block3

 Block2:
	sub eax,edx
	inc eax
	push eax
	call CCtrlScrollBar::SetCurPos
	mov edx,dword ptr [esi+0xC8]
	mov eax,dword ptr [edx+0x38]
	push eax
	mov ecx,esi
	call CCtrlMLEdit::SetCurScrollLine
	pop edi
	pop esi
	ret

 Block3:
	mov edx,dword ptr [esi+0x48]
	cmp eax,edx
	jge Block5

 Block4:
	mov edi,dword ptr [ecx+0x38]
	sub edi,edx
	add edi,eax
	push edi
	call CCtrlScrollBar::SetCurPos
	mov ecx,dword ptr [esi+0xC8]
	mov edx,dword ptr [ecx+0x38]
	push edx
	mov ecx,esi
	call CCtrlMLEdit::SetCurScrollLine

 Block5:
	pop edi

 Block6:
	pop esi
	ret
}
}
// CCtrlMLEdit::MouseDblClk
__SUB_CLASS_THIS(000E86B0, __thiscall, 15266,  CCtrlMLEdit, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	push eax
	push ecx
	mov ecx,esi
	call CCtrlMLEdit::CalcCaretPos
	mov ecx,esi
	mov dword ptr [esi+0x40],eax
	call CCtrlMLEdit::WordSelect
	push 0
	push 0
	push 0
	mov ecx,esi
	call CCtrlMLEdit::AdjustHorz
	mov ecx,esi
	call CCtrlWnd::InvalidateRect
	pop esi
	ret 8
}
}
// CCtrlMLEdit::OnDragDrop
__SUB_CLASS_THIS(000E5280, __thiscall, 15259,  CCtrlMLEdit, int32_t, long, DRAGCTX&, long, long) {
__asm {

 Block0:
	xor eax,eax
	ret 0x10
}
}
// CCtrlMLEdit::OnSetFocus
__SUB_CLASS_THIS(000E4520, __thiscall, 15255,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	push esi
	mov esi,ecx
	je Block3

 Block1:
	cmp dword ptr [esi+0x24],0
	je Block4

 Block2:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::ClearComposition
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 0
	call CWndMan::EnableIME
	mov ecx,dword ptr [esi+0x20]
	push 0
	call CWnd::InvalidateRect
	mov eax,1
	pop esi
	ret 4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x3C]
	push offset _S_
	call edx
	mov ecx,dword ptr [esi+0x20]
	push 0
	call CWnd::InvalidateRect

 Block4:
	mov eax,1
	pop esi
	ret 4
}
}
// CCtrlMLEdit::CreateIMECandWnd
_SUB_EXCEPTION_HANDLER(E7CB0)
__SUB_CLASS_THIS(000E7CB0, __thiscall, 15277,  CCtrlMLEdit, void, ZList<ZXString<char> >&, long, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E7CB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x68
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x7C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esp+0x8C]
	xor edi,edi
	cmp dword ptr [ecx+8],edi
	je Block66

 Block1:
	mov eax,dword ptr [esi+0x7C]
	cmp dword ptr [esp+0x9C],edi
	je Block28

 Block2:
	inc eax
	imul eax,dword ptr [esp+0x94]
	add eax,3
	xor ebx,ebx
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x14],edi
	mov dword ptr [esp+0x1C],ebx
	mov eax,dword ptr [ecx+0xC]
	mov dword ptr [esp+0x84],edi
	mov dword ptr [esp+0x20],eax
	cmp eax,edi
	je Block25

 Block3:
	jmp Block6

 Block5:
	mov edi,dword ptr [esp+0x24]

 Block6:
	lea eax,[esp+0x20]
	push eax
	call ZList<ZXString<char>>::GetNext
	add esp,4
	lea ecx,[esp+0x28]
	push 0x1A15
	inc edi
	push ecx
	mov ebp,eax
	mov dword ptr [esp+0x2C],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x90],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x84],0
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x40]
	push eax
	call edi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block27

 Block9:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x88],2
	call edi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block27

 Block10:
	mov ebx,dword ptr [esp+0x1C]
	lea ecx,[esp+0x40]
	push ecx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push ebx
	mov byte ptr [esp+0x90],3
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x74]
	mov byte ptr [esp+0x8C],4
	test ecx,ecx
	je Block37

 Block11:
	mov byte ptr [esp+0x8C],3
	call IWzFont::CalcTextWidth
	lea edx,[esp+0x30]
	push edx
	push ecx
	mov edi,eax
	mov eax,dword ptr [ebp]
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x74]
	mov byte ptr [esp+0x8C],5
	test ecx,ecx
	je Block37

 Block12:
	mov byte ptr [esp+0x8C],3
	call IWzFont::CalcTextWidth
	mov ebp,8
	lea edi,[eax+edi+2]
	mov byte ptr [esp+0x84],2
	cmp word ptr [esp+0x30],bp
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov byte ptr [esp+0x84],0
	cmp word ptr [esp+0x40],bp
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block20:
	cmp edi,dword ptr [esp+0x14]
	jle Block22

 Block21:
	mov dword ptr [esp+0x14],edi

 Block22:
	cmp dword ptr [esp+0x20],0
	jne Block5

 Block23:
	cmp dword ptr [esp+0x14],0x10A
	jle Block25

 Block24:
	mov dword ptr [esp+0x14],0x320

 Block25:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi+0x7C]
	xor edi,edi
	lea eax,[edx+ecx+7]
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x84],0xFFFFFFFF
	cmp ebx,edi
	je Block29

 Block26:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4
	jmp Block29

 Block27:
	push eax
	call _com_issue_error

 Block28:
	lea ecx,[eax+0xA]
	add eax,4
	imul eax,dword ptr [esp+0x94]
	lea edx,[eax+eax+4]
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x14],edx

 Block29:
	mov eax,dword ptr [esi+0x50]
	cmp eax,edi
	je Block41

 Block30:
	cmp dword ptr [eax-4],edi
	je Block41

 Block31:
	mov ecx,dword ptr [esi+0x54]
	cmp ecx,edi
	jl Block41

 Block32:
	cmp eax,edi
	jne Block34

 Block33:
	xor eax,eax
	jmp Block35

 Block34:
	mov eax,dword ptr [eax-4]

 Block35:
	cmp ecx,eax
	jae Block41

 Block36:
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esi+0x54]
	mov edx,dword ptr [esi+0x50]
	lea eax,[esp+0x40]
	push eax
	lea eax,[edx+ecx*4]
	mov ecx,dword ptr [esi+0x40]
	add ecx,dword ptr [eax]
	lea edx,[esp+0x2C]
	push ecx
	push edx
	lea ecx,[esi+0x34]
	mov dword ptr [esp+0x90],6
	call ZXString<char>::Left
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,7
	push eax
	mov byte ptr [esp+0x90],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x68]
	mov byte ptr [esp+0x8C],8
	test ecx,ecx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	mov byte ptr [esp+0x8C],bl
	call IWzFont::CalcTextWidth
	lea edi,[esi+4]
	mov ebp,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x2C]
	mov ecx,edi
	call edx
	sub ebp,dword ptr [esi+0x60]
	mov byte ptr [esp+0x84],6
	sub ebp,dword ptr [esi+0x7C]
	lea ebp,[eax+ebp-4]
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block40

 Block39:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block40:
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,edi
	call edx
	jmp Block42

 Block41:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x2C]
	lea edi,[esi+4]
	mov ecx,edi
	call eax
	mov ecx,dword ptr [esi+0x58]
	sub ecx,dword ptr [esi+0x60]
	mov edx,dword ptr [edi]
	mov ebp,eax
	mov eax,dword ptr [edx+0x30]
	add ebp,ecx
	mov ecx,edi
	call eax

 Block42:
	mov ecx,dword ptr [esi+0x7C]
	lea ebx,[eax+ecx+1]
	test ebp,ebp
	jge Block44

 Block43:
	xor ebp,ebp

 Block44:
	mov eax,dword ptr [esp+0x14]
	lea edx,[eax+ebp]
	cmp edx,0x320
	jle Block46

 Block45:
	mov ebp,0x320
	sub ebp,eax

 Block46:
	mov eax,dword ptr [esp+0x18]
	lea ecx,[ebx+eax]
	cmp ecx,0x258
	jle Block48

 Block47:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x30]
	mov ecx,edi
	call eax
	mov ebx,eax
	sub ebx,dword ptr [esp+0x18]
	dec ebx

 Block48:
	mov ecx,esi
	call CCtrlMLEdit::DestroyIMECandWnd
	push 0xAC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x2C],eax
	xor edi,edi
	mov dword ptr [esp+0x84],9
	cmp eax,edi
	je Block50

 Block49:
	mov ecx,eax
	call CCtrlMLEdit::CIMECandWnd::_ctor_default
	jmp Block51

 Block50:
	xor eax,eax

 Block51:
	push eax
	lea ecx,[esi+0xBC]
	mov dword ptr [esp+0x88],0xFFFFFFFF
	call ZRef<CWnd>::op_assign_ptr
	int 3// TODO: 	mov dword ptr [esp+0x54],offset ZList<ZXString<char>>::`vftable'
	mov dword ptr [esp+0x5C],edi
	mov dword ptr [esp+0x60],edi
	mov dword ptr [esp+0x64],edi
	mov dword ptr [esp+0x74],edi
	mov dword ptr [esp+0x78],edi
	mov ecx,dword ptr [esp+0x9C]
	mov edx,dword ptr [esp+0x8C]
	push edi
	push edi
	push edi
	mov dword ptr [esp+0x5C],ecx
	push edx
	lea ecx,[esp+0x64]
	mov dword ptr [esp+0x94],0xA
	call ZList<ZXString<char>>::MoveAfter
	mov eax,dword ptr [esp+0x90]
	mov ecx,dword ptr [esp+0x94]
	mov edx,dword ptr [esp+0x98]
	mov dword ptr [esp+0x68],eax
	mov eax,dword ptr [esi+0x74]
	mov dword ptr [esp+0x6C],ecx
	mov ecx,dword ptr [esp+0x74]
	mov dword ptr [esp+0x70],edx
	cmp ecx,eax
	je Block56

 Block52:
	mov dword ptr [esp+0x94],ecx
	mov dword ptr [esp+0x74],eax
	cmp eax,edi
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x94]

 Block54:
	cmp ecx,edi
	je Block56

 Block55:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx

 Block56:
	mov eax,dword ptr [esi+0x78]
	mov ecx,dword ptr [esp+0x78]
	cmp ecx,eax
	je Block61

 Block57:
	mov dword ptr [esp+0x94],ecx
	mov dword ptr [esp+0x78],eax
	cmp eax,edi
	je Block59

 Block58:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax
	mov ecx,dword ptr [esp+0x94]

 Block59:
	cmp ecx,edi
	je Block61

 Block60:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax

 Block61:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi+0xC0]
	push edi
	push 1
	lea edx,[esp+0x58]
	push edx
	mov edx,dword ptr [esp+0x20]
	push 1
	push 0x7FFFFFFE
	push eax
	push edx
	push ebx
	push ebp
	call CWnd::CreateWnd
	mov eax,dword ptr [esp+0x78]
	mov dword ptr [esp+0x84],0xC
	cmp eax,edi
	je Block63

 Block62:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block63:
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0x84],0xB
	cmp eax,edi
	je Block65

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block65:
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x54],offset ZList<ZXString<char>>::`vftable'
	call ZList<ZXString<char>>::RemoveAll

 Block66:
	mov ecx,dword ptr [esp+0x7C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x74
	ret 0x14
}
}
// CCtrlMLEdit::CREATEPARAM::~CREATEPARAM
__SUB_CLASS_THIS0(00290C00, __thiscall, 15341,  CCtrlMLEdit::CREATEPARAM, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xC]
	test ecx,ecx
	je Block2

 Block1:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0xC],0

 Block2:
	mov esi,dword ptr [esi]
	test esi,esi
	je Block4

 Block3:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block4:
	pop esi
	ret
}
}
// CCtrlMLEdit::CEditCaret::SetCaret
_SUB_EXCEPTION_HANDLER(E4C40)
__SUB_CLASS_THIS(000E4C40, __thiscall, 15295,  CCtrlMLEdit::CEditCaret, void, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E4C40
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x54]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	cmp dword ptr [edi+0xC],0
	je Block46

 Block1:
	call timeGetTime
	cmp dword ptr [edi+0x18],0
	mov dword ptr [edi+8],eax
	mov esi,dword ptr [edi+0x14]
	je Block5

 Block2:
	test esi,esi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0
	push esi
	call ecx
	jmp Block8

 Block5:
	test esi,esi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax

 Block8:
	test eax,eax
	jge Block10

 Block9:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block10:
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
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	lea eax,[esp+0x14]
	push eax
	mov dword ptr [esp+0x60],0
	call esi
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov ecx,dword ptr [edi+0x14]
	mov byte ptr [esp+0x5C],1
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea edx,[esp+0x10]
	push edx
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x5C],2
	test ecx,ecx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea eax,[esp+0x24]
	push eax
	mov eax,dword ptr [edi+4]
	add eax,dword ptr [esp+0x6C]
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [edi]
	add edx,dword ptr [esp+0x6C]
	push eax
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x5C],1
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	mov ebp,8
	mov byte ptr [esp+0x5C],0
	cmp word ptr [esp+0x14],bp
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x24],bp
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block28:
	lea ecx,[esp+0x44]
	push ecx
	call esi
	lea edx,[esp+0x44]
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
	lea eax,[esp+0x34]
	push eax
	mov dword ptr [esp+0x60],3
	call esi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	mov ecx,dword ptr [edi+0x14]
	mov byte ptr [esp+0x5C],4
	test ecx,ecx
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea edx,[esp+0x68]
	push edx
	call IWzGr2DLayer::Getrb
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x5C],5
	test ecx,ecx
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	lea eax,[esp+0x44]
	push eax
	mov eax,dword ptr [edi+0x10]
	lea edx,[esp+0x38]
	push edx
	mov edx,dword ptr [esp+0x74]
	push eax
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x68]
	mov byte ptr [esp+0x5C],4
	test eax,eax
	je Block38

 Block37:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block38:
	mov byte ptr [esp+0x5C],3
	cmp word ptr [esp+0x34],bp
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x44],bp
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x50
	ret 0xC

 Block45:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x50
	ret 0xC
}
}
// CCtrlMLEdit::CIMECandWnd::OnSetFocus
__SUB_CLASS_THIS(000E5050, __thiscall, 15313,  CCtrlMLEdit::CIMECandWnd, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CCtrlMLEdit::AdjustVert
__SUB_CLASS_THIS(000E92C0, __thiscall, 15246,  CCtrlMLEdit, void, int32_t) {
__asm {

 Block0:
	push esi
	call CCtrlMLEdit::GetRow
	mov edx,dword ptr [esp+8]
	cmp edx,4
	jne Block5

 Block1:
	mov edx,dword ptr [ecx+0x44]
	lea esi,[edx+eax*4]
	mov edx,dword ptr [esi]
	test eax,eax
	jne Block3

 Block2:
	push eax
	push eax
	push eax
	mov dword ptr [ecx+0x40],eax
	call CCtrlMLEdit::AdjustHorz
	pop esi
	ret 4

 Block3:
	mov eax,dword ptr [esi-4]
	sub eax,edx
	add dword ptr [ecx+0x40],eax
	cmp dword ptr [ecx+0x40],edx
	jl Block23

 Block4:
	push 0
	push 0
	dec edx
	push 0
	mov dword ptr [ecx+0x40],edx
	call CCtrlMLEdit::AdjustHorz
	pop esi
	ret 4

 Block5:
	cmp edx,5
	jne Block23

 Block6:
	mov edx,dword ptr [ecx+0x44]
	mov esi,edx
	push ebx
	mov ebx,dword ptr [edx+eax*4]
	test esi,esi
	je Block8

 Block7:
	mov esi,dword ptr [esi-4]

 Block8:
	dec esi
	cmp eax,esi
	jne Block12

 Block9:
	mov eax,dword ptr [ecx+0x34]
	test eax,eax
	je Block11

 Block10:
	mov eax,dword ptr [eax-4]
	pop ebx
	push 0
	push 0
	push 0
	mov dword ptr [ecx+0x40],eax
	call CCtrlMLEdit::AdjustHorz
	pop esi
	ret 4

 Block11:
	xor eax,eax
	pop ebx
	push eax
	push eax
	push eax
	mov dword ptr [ecx+0x40],eax
	call CCtrlMLEdit::AdjustHorz
	pop esi
	ret 4

 Block12:
	mov esi,edx
	push edi
	mov edi,dword ptr [edx+eax*4+4]
	test esi,esi
	je Block14

 Block13:
	mov esi,dword ptr [esi-4]

 Block14:
	add esi,0xFFFFFFFE
	cmp eax,esi
	jae Block16

 Block15:
	mov eax,dword ptr [edx+eax*4+8]
	jmp Block20

 Block16:
	mov eax,dword ptr [ecx+0x34]
	test eax,eax
	je Block18

 Block17:
	mov eax,dword ptr [eax-4]
	jmp Block19

 Block18:
	xor eax,eax

 Block19:
	inc eax

 Block20:
	sub edi,ebx
	add dword ptr [ecx+0x40],edi
	cmp dword ptr [ecx+0x40],eax
	pop edi
	jl Block22

 Block21:
	dec eax
	mov dword ptr [ecx+0x40],eax

 Block22:
	pop ebx

 Block23:
	push 0
	push 0
	push 0
	call CCtrlMLEdit::AdjustHorz
	pop esi
	ret 4
}
}
// CCtrlMLEdit::GetRow
__SUB_CLASS_THIS0(000E4690, __thiscall, 15247,  CCtrlMLEdit, long) {
__asm {

 Block0:
	xor edx,edx
	push esi

 Block1:
	mov eax,dword ptr [ecx+0x44]
	test eax,eax
	je Block5

 Block2:
	cmp edx,dword ptr [eax-4]
	jae Block5

 Block3:
	mov esi,dword ptr [ecx+0x40]
	cmp esi,dword ptr [eax+edx*4]
	jl Block5

 Block4:
	inc edx
	jmp Block1

 Block5:
	lea eax,[edx-1]
	pop esi
	ret
}
}
// CCtrlMLEdit::CEditCaret::MakeCaret
_SUB_EXCEPTION_HANDLER(E4730)
__SUB_CLASS_THIS(000E4730, __thiscall, 15294,  CCtrlMLEdit::CEditCaret, void, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E4730
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
	mov edi,ecx
	mov dword ptr [esp+0x38],0
	call timeGetTime
	mov ecx,dword ptr [esp+0x48]
	mov edx,dword ptr [esp+0x4C]
	mov esi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [edi+8],eax
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [edi],eax
	lea eax,[esp+0x20]
	push eax
	mov dword ptr [edi+4],ecx
	mov dword ptr [edi+0x10],edx
	call esi
	lea ecx,[esp+0x20]
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
	lea edx,[esp+0x10]
	push edx
	mov byte ptr [esp+0x3C],1
	call esi
	lea eax,[esp+0x10]
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
	mov byte ptr [esp+0x38],2
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x20]
	push edx
	mov edx,dword ptr [esp+0x54]
	lea eax,[esp+0x14]
	push eax
	mov eax,dword ptr [edi+0x10]
	push edx
	push eax
	push 1
	push 0
	push 0
	lea edx,[esp+0x60]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x14]
	cmp esi,eax
	je Block11

 Block7:
	mov dword ptr [edi+0x14],eax
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block9:
	test esi,esi
	je Block11

 Block10:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block11:
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block13

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block13:
	mov esi,8
	mov byte ptr [esp+0x38],1
	cmp word ptr [esp+0x10],si
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x18]
	xor ecx,ecx
	mov word ptr [esp+0x10],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [esp+0x38],0
	cmp word ptr [esp+0x20],si
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov ebx,3
	mov edx,ebx
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],0
	mov ecx,dword ptr [edi+0x14]
	mov byte ptr [esp+0x38],bl
	test ecx,ecx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea eax,[esp+0x20]
	push eax
	lea edx,[esp+0x48]
	push edx
	call IWzGr2DLayer::Getcanvas
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x38],4
	test esi,esi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	mov eax,dword ptr [edi+0x10]
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFFFF
	push eax
	push 1
	push 0
	push 0
	push esi
	call edx
	test eax,eax
	jge Block27

 Block26:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x38],bl
	test eax,eax
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block29:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x38],0
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov ecx,dword ptr [esp+0x40]
	test ecx,ecx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea edx,[esp+0x48]
	push edx
	call IWzGr2DLayer::Getlt
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x38],5
	mov word ptr [esp+0x10],cx
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block37

 Block36:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block37:
	mov ecx,dword ptr [edi+0x14]
	mov bl,6
	mov byte ptr [esp+0x38],bl
	test ecx,ecx
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea edx,[esp+0x44]
	push edx
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x38],7
	test esi,esi
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	mov edx,dword ptr [esp+0x10]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block43

 Block42:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block43:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x38],bl
	test eax,eax
	je Block45

 Block44:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block45:
	mov esi,8
	mov byte ptr [esp+0x38],5
	cmp word ptr [esp+0x10],si
	jne Block48

 Block46:
	xor eax,eax
	mov word ptr [esp+0x10],ax
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea ecx,[esp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x38],0
	test eax,eax
	je Block51

 Block50:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block51:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x10]
	push ecx
	call ebx
	lea edx,[esp+0x10]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block53

 Block52:
	push eax
	call _com_issue_error

 Block53:
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x3C],8
	call ebx
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	mov ecx,dword ptr [edi+0x14]
	mov bl,9
	mov byte ptr [esp+0x38],bl
	test ecx,ecx
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	lea edx,[esp+0x44]
	push edx
	call IWzGr2DLayer::Getlt
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x38],0xA
	test ecx,ecx
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	lea eax,[esp+0x10]
	push eax
	mov eax,dword ptr [edi+4]
	lea edx,[esp+0x24]
	push edx
	mov edx,dword ptr [edi]
	push eax
	push edx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x38],bl
	test eax,eax
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	mov byte ptr [esp+0x38],8
	cmp word ptr [esp+0x20],si
	jne Block64

 Block62:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov byte ptr [esp+0x38],0
	cmp word ptr [esp+0x10],si
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0x18]
	xor edx,edx
	mov word ptr [esp+0x10],dx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea eax,[esp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov esi,dword ptr [edi+0x14]
	test esi,esi
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xF4]
	push 2
	push esi
	call edx
	test eax,eax
	jge Block73

 Block72:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block73:
	cmp dword ptr [edi+0x18],0
	mov esi,dword ptr [edi+0x14]
	je Block77

 Block74:
	test esi,esi
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0
	push esi
	call ecx
	jmp Block80

 Block77:
	test esi,esi
	jne Block79

 Block78:
	push 0x80004003
	call _com_issue_error

 Block79:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax

 Block80:
	test eax,eax
	jge Block82

 Block81:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block82:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [edi+0xC],1
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	je Block84

 Block83:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block84:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x2C
	ret 0x14
}
}
// CCtrlMLEdit::OnIMEComp
__SUB_CLASS_THIS(000E9430, __thiscall, 15262,  IUIMsgHandler, void, const char*, ZArray<unsigned long>&, uint32_t, long, ZList<ZXString<char> >&, long, long, long) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	mov ebx,ecx
	push esi
	lea ebp,[ebx+0x4C]
	push edi
	mov ecx,ebp
	mov dword ptr [esp+0x10],ebx
	call ZArray<unsigned long>::RemoveAll
	mov edi,dword ptr [esp+0x1C]
	mov ecx,edi
	xor esi,esi
	call ZArray<unsigned long>::GetCount
	test eax,eax
	jbe Block3

 Block1:
	mov eax,dword ptr [edi]
	push 0xFFFFFFFF
	mov ecx,ebp
	lea ebx,[eax+esi*4]
	call ZArray<unsigned long>::InsertBefore
	mov ecx,dword ptr [ebx]
	mov dword ptr [eax],ecx
	mov ecx,edi
	inc esi
	call ZArray<unsigned long>::GetCount
	cmp esi,eax
	jb Block1

 Block2:
	mov ebx,dword ptr [esp+0x10]

 Block3:
	mov edx,dword ptr [esp+0x20]
	mov esi,dword ptr [esp+0x28]
	mov edi,dword ptr [esp+0x24]
	mov dword ptr [ebx+0x50],edx
	cmp dword ptr [esi+8],0
	jne Block5

 Block4:
	lea esi,[ebx-4]
	mov ecx,esi
	mov dword ptr [esp+0x1C],esi
	call CCtrlMLEdit::DestroyIMECandWnd
	jmp Block6

 Block5:
	mov edx,dword ptr [esp+0x34]
	xor eax,eax
	test edi,edi
	setge al
	lea ecx,[ebx-4]
	mov dword ptr [esp+0x1C],ecx
	push eax
	mov eax,dword ptr [esp+0x34]
	push edx
	mov edx,dword ptr [esp+0x34]
	push eax
	push edx
	push esi
	call CCtrlMLEdit::CreateIMECandWnd
	mov esi,dword ptr [esp+0x1C]

 Block6:
	mov ebp,dword ptr [esp+0x18]
	test ebp,ebp
	je Block8

 Block7:
	cmp byte ptr [ebp],0
	jne Block9

 Block8:
	cmp dword ptr [ebx+0x48],0
	je Block15

 Block9:
	push 0
	mov ecx,esi
	call CCtrlMLEdit::ExtractSelection
	push edi
	push 1
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [edi],0
	test ebp,ebp
	je Block14

 Block10:
	mov eax,ebp
	lea edx,[eax+1]
	jmp Block12

 Block12:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block12

 Block13:
	sub eax,edx
	mov esi,eax
	push esi
	push ebp
	push 0
	push esi
	mov ecx,edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer
	mov esi,dword ptr [esp+0x28]

 Block14:
	mov ecx,esi
	call CCtrlMLEdit::InsertString
	mov ecx,esi
	call CCtrlWnd::InvalidateRect

 Block15:
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 0x20
}
}
// CCtrlMLEdit::Draw
_SUB_EXCEPTION_HANDLER(E8250)
__SUB_CLASS_THIS(000E8250, __thiscall, 15264,  CCtrlMLEdit, void, long, long, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E8250
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
	push 0
	lea eax,[esp+0x18]
	push eax
	call CCtrlWnd::GetCanvas
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x20]
	lea ecx,[esi+4]
	mov dword ptr [esp+0x40],0
	call eax
	mov ebp,dword ptr [esp+0x4C]
	mov ebx,dword ptr [esp+0x48]
	mov edi,dword ptr [esp+0x14]
	test eax,eax
	mov eax,dword ptr [esi+0x80]
	jne Block5

 Block1:
	and eax,0xFF000000
	neg eax
	sbb eax,eax
	inc eax
	test edi,edi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov ecx,dword ptr [esi+0x20]
	mov edx,dword ptr [edi]
	neg eax
	sbb eax,eax
	and eax,0x1000000
	dec eax
	push eax
	mov eax,dword ptr [esi+0x1C]
	push ecx
	push eax
	mov eax,dword ptr [edx+0x8C]
	push ebp
	push ebx
	push edi
	call eax
	test eax,eax
	jge Block9

 Block4:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex
	jmp Block9

 Block5:
	test eax,eax
	je Block9

 Block6:
	test edi,edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [esi+0x20]
	mov edx,dword ptr [esi+0x1C]
	push eax
	push ecx
	push edx
	push ebp
	push ebx
	mov ecx,edi
	call IWzCanvas::DrawRectangle

 Block9:
	mov eax,dword ptr [esi+0x38]
	lea ecx,[eax+ebx]
	mov dword ptr [esp+0x18],ecx
	mov ecx,dword ptr [esi+0x3C]
	lea edx,[ecx+ebp]
	mov dword ptr [esp+0x1C],edx
	mov edx,dword ptr [esi+0x1C]
	add eax,eax
	sub edx,eax
	mov eax,dword ptr [esi+0x20]
	sub eax,ecx
	mov ecx,dword ptr [esi+0x24]
	add edx,ebx
	add eax,ebp
	mov dword ptr [esp+0x20],edx
	lea edx,[esp+0x18]
	mov dword ptr [esp+0x24],eax
	push edx
	lea eax,[esp+0x2C]
	push eax
	call CWnd::ClipRect
	push 0x7FFFFFFF
	push 0
	push ecx
	mov eax,esp
	mov byte ptr [esp+0x4C],1
	mov dword ptr [esp+0x58],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block11

 Block10:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block11:
	mov ecx,esi
	call CCtrlMLEdit::DrawTextLineRange
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x40],0
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test edi,edi
	je Block17

 Block16:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block17:
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
// CCtrlMLEdit::GetTotalRow
__SUB_CLASS_THIS0(000E46B0, __thiscall, 15247,  CCtrlMLEdit, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x44]
	test eax,eax
	jne Block2

 Block1:
	ret

 Block2:
	mov eax,dword ptr [eax-4]
	ret
}
}
// CCtrlMLEdit::CEditCaret::HideCaret
__SUB_CLASS_THIS0(000E42C0, __thiscall, 15293,  CCtrlMLEdit::CEditCaret, void) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x18],0
	push esi
	mov esi,dword ptr [ecx+0x14]
	je Block4

 Block1:
	test esi,esi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0
	push esi
	call ecx
	jmp Block7

 Block4:
	test esi,esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFF
	push esi
	call eax

 Block7:
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block9:
	pop esi
	ret
}
}
// CCtrlMLEdit::DeleteString
_SUB_EXCEPTION_HANDLER(E90C0)
__SUB_CLASS_THIS(000E90C0, __thiscall, 15270,  CCtrlMLEdit, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E90C0
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
	xor ebx,ebx
	cmp dword ptr [esi+0x88],ebx
	jne Block4

 Block1:
	mov eax,dword ptr [esi+0x5C]
	cmp eax,0xFFFFFFFF
	jle Block5

 Block2:
	cmp eax,dword ptr [esi+0x40]
	je Block5

 Block3:
	push ebx
	call CCtrlMLEdit::ExtractSelection
	push ebx
	push 1
	push ebx
	mov ecx,esi
	call CCtrlMLEdit::AdjustHorz
	mov ecx,esi
	call CCtrlWnd::InvalidateRect

 Block4:
	xor eax,eax
	jmp Block25

 Block5:
	cmp dword ptr [esp+0x28],ebx
	je Block14

 Block6:
	call CCtrlMLEdit::GetNextCount_1
	mov ebp,eax
	mov dword ptr [esp+0x28],ebx
	mov eax,dword ptr [esi+0x40]
	push eax
	push ebx
	lea ecx,[esp+0x1C]
	lea edi,[esi+0x34]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0x2C],ebx
	call ZXString<char>::Mid
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x24],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov edx,dword ptr [esi+0x40]
	push 0xFFFFFFFF
	add edx,ebp
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x20],2
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax-4]
	jmp Block11

 Block10:
	xor ecx,ecx

 Block11:
	push ecx
	push eax
	lea ecx,[esp+0x30]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,edi
	call ZXString<char>::op_assign
	jmp Block22

 Block14:
	call CCtrlMLEdit::GetPrevCount
	mov ebp,eax
	mov dword ptr [esp+0x28],ebx
	mov edx,dword ptr [esi+0x40]
	sub edx,ebp
	push edx
	push ebx
	lea eax,[esp+0x1C]
	lea edi,[esi+0x34]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x2C],3
	call ZXString<char>::Mid
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x24],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x20],3
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov ecx,dword ptr [esi+0x40]
	push 0xFFFFFFFF
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,edi
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x20],5
	cmp eax,ebx
	je Block18

 Block17:
	mov ecx,dword ptr [eax-4]
	jmp Block19

 Block18:
	xor ecx,ecx

 Block19:
	push ecx
	push eax
	lea ecx,[esp+0x30]
	call ZXString<char>::_Cat
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x20],3
	cmp eax,ebx
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	lea eax,[esp+0x28]
	push eax
	mov ecx,edi
	call ZXString<char>::op_assign
	sub dword ptr [esi+0x40],ebp

 Block22:
	push ebx
	push 1
	push ebx
	mov ecx,esi
	call CCtrlMLEdit::AdjustHorz
	mov ecx,esi
	call CCtrlWnd::InvalidateRect
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp eax,ebx
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov eax,ebp

 Block25:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 4
}
}
// CCtrlMLEdit::MouseMove
__SUB_CLASS_THIS(000E86F0, __thiscall, 15266,  CCtrlMLEdit, void, long, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 1
	call CInputSystem::IsKeyPressed
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [esp+8]
	push eax
	push ecx
	mov ecx,esi
	call CCtrlMLEdit::CalcCaretPos
	push 0
	push 0
	push 0
	mov ecx,esi
	mov dword ptr [esi+0x40],eax
	call CCtrlMLEdit::AdjustHorz
	mov ecx,esi
	call CCtrlWnd::InvalidateRect

 Block2:
	pop esi
	ret 8
}
}
// CCtrlMLEdit::OnDestroy
_SUB_EXCEPTION_HANDLER(E5440)
__SUB_CLASS_THIS0(000E5440, __thiscall, 15243,  CCtrlMLEdit, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E5440
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	call CCtrlMLEdit::DestroyIMECandWnd
	xor ebp,ebp
	push ebp
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	call CCtrlWnd::GetCanvas
	mov ebx,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x28],ebp
	cmp dword ptr [esi+0x80],ebp
	je Block14

 Block1:
	mov edi,dword ptr [esi+0x18]
	cmp edi,ebp
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block5

 Block4:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block5:
	mov edi,dword ptr [esi+0x18]
	mov ebp,dword ptr [esp+0x14]
	test edi,edi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x68]
	lea edx,[esp+0x18]
	push edx
	push edi
	mov dword ptr [esp+0x20],0
	call eax
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block9:
	test ebx,ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov eax,dword ptr [esi+0x80]
	mov ecx,dword ptr [esi+0x20]
	mov edx,dword ptr [esi+0x1C]
	mov edi,dword ptr [ebx]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x20]
	push edx
	mov edx,dword ptr [edi+0x8C]
	push ebp
	push ecx
	push ebx
	call edx
	test eax,eax
	jge Block13

 Block12:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block13:
	xor ebp,ebp

 Block14:
	mov dword ptr [esi+0xA8],ebp
	mov eax,dword ptr [esi+0xB0]
	cmp eax,ebp
	je Block16

 Block15:
	mov dword ptr [esi+0xB0],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp ebx,ebp
	je Block18

 Block17:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block18:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret
}
}
// CCtrlMLEdit::GetNextCount
__SUB_CLASS_THIS(000E42A0, __thiscall, 15273,  CCtrlMLEdit, long, const char*) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	test esi,esi
	jne Block2

 Block1:
	xor eax,eax
	pop esi
	ret 4

 Block2:
	push esi
	call CharNextA
	sub eax,esi
	pop esi
	ret 4
}
}
// CCtrlMLEdit::~CCtrlMLEdit
_SUB_EXCEPTION_HANDLER(E52F0)
__SUB_CLASS_THIS0(000E52F0, __thiscall, 15243,  CCtrlMLEdit, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E52F0
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
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlMLEdit::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlMLEdit::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlMLEdit::`vftable'{for `ZRefCounted'}
	cmp dword ptr [esi+0xC8],0
	lea edi,[esi+0xC4]
	mov dword ptr [esp+0x18],0xA
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	cmp dword ptr [esi+0xC0],0
	lea edi,[esi+0xBC]
	mov byte ptr [esp+0x18],9
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CWnd>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	lea ecx,[esi+0x9C]
	mov byte ptr [esp+0x18],8
	call CCtrlMLEdit::CEditCaret::~CEditCaret
	mov eax,dword ptr [esi+0x78]
	mov byte ptr [esp+0x18],7
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0x74]
	mov byte ptr [esp+0x18],6
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x70]
	mov byte ptr [esp+0x18],5
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0x6C]
	mov byte ptr [esp+0x18],4
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esi+0x68]
	mov byte ptr [esp+0x18],3
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	lea ecx,[esi+0x50]
	mov byte ptr [esp+0x18],2
	call ZArray<unsigned long>::RemoveAll
	lea ecx,[esi+0x44]
	mov byte ptr [esp+0x18],1
	call ZArray<long>::RemoveAll
	mov eax,dword ptr [esi+0x34]
	mov byte ptr [esp+0x18],0
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov ecx,esi
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CCtrlWnd::~CCtrlWnd
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CCtrlMLEdit::SetEnable
__SUB_CLASS_THIS(000E45C0, __thiscall, 15258,  IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	cmp dword ptr [esi+0x28],edi
	je Block3

 Block1:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x3C]
	push offset _S_
	call edx
	test edi,edi
	jne Block3

 Block2:
	lea ecx,[esi+0x98]
	call CCtrlMLEdit::CEditCaret::HideCaret

 Block3:
	push edi
	mov ecx,esi
	call CCtrlWnd::SetEnable
	pop edi
	pop esi
	ret 4
}
}
// CCtrlMLEdit::GetPrevCount
__SUB_CLASS_THIS0(000E4640, __thiscall, 15247,  CCtrlMLEdit, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x34]
	test eax,eax
	je Block2

 Block1:
	cmp byte ptr [eax],0
	jne Block3

 Block2:
	xor eax,eax
	ret

 Block3:
	push esi
	mov esi,dword ptr [ecx+0x40]
	add esi,eax
	push esi
	push eax
	call CharPrevA
	sub esi,eax
	mov eax,esi
	pop esi
	ret
}
}
// CCtrlMLEdit::DestroyIMECandWnd
__SUB_CLASS_THIS0(000E51F0, __thiscall, 15243,  CCtrlMLEdit, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xC0]
	test ecx,ecx
	je Block3

 Block1:
	call CWnd::Destroy
	add esi,0xBC
	cmp dword ptr [esi+4],0
	je Block3

 Block2:
	push 0
	mov ecx,esi
	call ZRef<CWnd>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block3:
	pop esi
	ret
}
}
// CCtrlMLEdit::CIMECandWnd::CREATEPARAM::~CREATEPARAM
__SUB_CLASS_THIS0(000E51C0, __thiscall, 15328,  CCtrlMLEdit::CIMECandWnd::CREATEPARAM, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x28]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x24]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea ecx,[esi+4]
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZXString<char>>::`vftable'
	pop esi
	jmp  ZList<ZXString<char>>::RemoveAll
}
}
// CCtrlMLEdit::DisplayCaret
_SUB_EXCEPTION_HANDLER(E7390)
__SUB_CLASS_THIS(000E7390, __thiscall, 15251,  CCtrlMLEdit, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E7390
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
	mov esi,ecx
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	call CCtrlMLEdit::GetRow
	mov ecx,dword ptr [esi+0x44]
	mov ebx,dword ptr [ecx+eax*4]
	lea edx,[esp+0x28]
	push edx
	mov dword ptr [esp+0x28],eax
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi+0x34]
	lea ecx,[esp+0x28]
	push ecx
	push ecx
	lea ebp,[esi+0x34]
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov dword ptr [esp+0x5C],edi
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x68]
	mov byte ptr [esp+0x58],1
	cmp ecx,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov byte ptr [esp+0x58],0
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x28],8
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x50],0xFFFFFFFF
	jne Block7

 Block5:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,edi
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov edi,dword ptr [esp+0x58]
	test edi,edi
	jge Block35

 Block9:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov ecx,dword ptr [esi+0x40]
	lea eax,[esp+0x28]
	push eax
	push ecx
	push ebx
	lea edx,[esp+0x64]
	push edx
	mov ecx,ebp
	mov dword ptr [esp+0x60],2
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	mov ebx,3
	push eax
	mov byte ptr [esp+0x5C],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x68]
	mov byte ptr [esp+0x58],4
	test ecx,ecx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	mov byte ptr [esp+0x58],bl
	call IWzFont::CalcTextWidth
	mov dword ptr [esi+0x58],eax
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x50],2
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	cmp word ptr [esp+0x28],8
	mov dword ptr [esp+0x50],0xFFFFFFFF
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	cmp dword ptr [esi+0x4C],0
	mov edi,5
	je Block25

 Block20:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	mov eax,dword ptr [esi+0x40]
	mov edx,dword ptr [esi+0x4C]
	lea ecx,[esp+0x28]
	push ecx
	add edx,eax
	push edx
	push eax
	lea eax,[esp+0x64]
	push eax
	mov ecx,ebp
	mov dword ptr [esp+0x60],edi
	mov dword ptr [esp+0x24],1
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push eax
	mov dword ptr [esp+0x5C],6
	mov dword ptr [esp+0x20],ebx
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x68]
	mov dword ptr [esp+0x58],7
	test ecx,ecx
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov byte ptr [esp+0x58],6
	call IWzFont::CalcTextWidth
	mov ebp,eax
	jmp Block26

 Block25:
	mov ebx,dword ptr [esp+0x14]
	mov dword ptr [esp+0x58],1
	mov ebp,dword ptr [esp+0x58]

 Block26:
	mov dword ptr [esp+0x50],edi
	test bl,2
	je Block29

 Block27:
	mov eax,dword ptr [esp+0x58]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test bl,1
	je Block34

 Block30:
	cmp word ptr [esp+0x28],8
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esi+0x58]
	lea edi,[ecx+ebp]
	jmp Block68

 Block33:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov ecx,dword ptr [esi+0x58]
	lea edi,[ecx+ebp]
	jmp Block68

 Block35:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
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
	mov eax,dword ptr [esi+0x40]
	lea edx,[esp+0x28]
	push edx
	add eax,edi
	push eax
	push ebx
	lea ecx,[esp+0x64]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x60],8
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x5C],9
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x68]
	mov byte ptr [esp+0x58],0xA
	test ecx,ecx
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	mov byte ptr [esp+0x58],9
	call IWzFont::CalcTextWidth
	mov dword ptr [esi+0x58],eax
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x50],8
	test eax,eax
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block41:
	cmp word ptr [esp+0x28],8
	mov dword ptr [esp+0x50],0xFFFFFFFF
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push ecx
	mov dword ptr [esp+0x5C],1
	call edi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	mov ecx,dword ptr [esi+0x40]
	lea eax,[esp+0x28]
	push eax
	push ecx
	push ebx
	lea edx,[esp+0x24]
	push edx
	mov ecx,ebp
	mov dword ptr [esp+0x60],0xB
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x5C],0xC
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x68]
	mov byte ptr [esp+0x58],0xD
	test ecx,ecx
	jne Block49

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	mov byte ptr [esp+0x58],0xC
	call IWzFont::CalcTextWidth
	mov dword ptr [esp+0x14],eax
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x50],0xB
	test eax,eax
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	cmp word ptr [esp+0x28],8
	mov dword ptr [esp+0x50],0xFFFFFFFF
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	lea edx,[esp+0x38]
	push edx
	call edi
	lea eax,[esp+0x38]
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
	mov edx,dword ptr [esi+0x4C]
	add edx,dword ptr [esi+0x40]
	mov edi,dword ptr [esi+0x58]
	lea ecx,[esp+0x38]
	push ecx
	push edx
	push ebx
	lea eax,[esp+0x28]
	push eax
	mov ecx,ebp
	mov dword ptr [esp+0x60],0xE
	inc edi
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	mov bl,0xF
	push eax
	mov byte ptr [esp+0x5C],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x68]
	mov byte ptr [esp+0x58],0x10
	test ecx,ecx
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	mov byte ptr [esp+0x58],bl
	call IWzFont::CalcTextWidth
	cmp edi,eax
	jge Block61

 Block60:
	mov edi,eax

 Block61:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x50],0xE
	test eax,eax
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block63:
	cmp word ptr [esp+0x38],8
	mov dword ptr [esp+0x50],0xFFFFFFFF
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov ecx,dword ptr [esp+0x14]
	mov ebp,dword ptr [esp+0x58]

 Block68:
	mov edx,dword ptr [esi+0x64]
	mov eax,dword ptr [esi+0x60]
	add eax,edx
	cmp edi,eax
	jle Block73

 Block69:
	cmp edi,dword ptr [esp+0x20]
	jge Block71

 Block70:
	mov eax,dword ptr [esi+0x7C]
	add eax,eax
	add eax,eax
	jmp Block72

 Block71:
	xor eax,eax

 Block72:
	sub eax,edx
	add eax,edi
	mov dword ptr [esi+0x60],eax

 Block73:
	cmp ecx,dword ptr [esi+0x60]
	jge Block75

 Block74:
	mov eax,dword ptr [esi+0x7C]
	add eax,eax
	add eax,eax
	sub ecx,eax
	xor eax,eax
	test ecx,ecx
	setle al
	dec eax
	and eax,ecx
	mov dword ptr [esi+0x60],eax

 Block75:
	mov eax,dword ptr [esi+0x58]
	mov ecx,dword ptr [esi+0x60]
	add ecx,edx
	lea edi,[eax+ebp]
	cmp edi,ecx
	jle Block77

 Block76:
	mov ecx,eax
	sub ecx,edx
	add ecx,ebp
	mov dword ptr [esi+0x60],ecx

 Block77:
	cmp eax,dword ptr [esi+0x60]
	jge Block79

 Block78:
	mov dword ptr [esi+0x60],eax

 Block79:
	mov edx,dword ptr [esp+0x24]
	mov eax,edx
	sub eax,dword ptr [esi+0x48]
	js Block84

 Block80:
	cmp eax,dword ptr [esi+0x90]
	jge Block84

 Block81:
	cmp dword ptr [esi+0xB8],0
	lea ecx,[esi+0x9C]
	jne Block83

 Block82:
	mov dword ptr [ecx+0x18],0

 Block83:
	sub edx,dword ptr [esi+0x48]
	push ebp
	imul edx,dword ptr [esi+0x7C]
	push edx
	mov edx,dword ptr [esi+0x58]
	sub edx,dword ptr [esi+0x60]
	push edx
	call CCtrlMLEdit::CEditCaret::SetCaret
	jmp Block86

 Block84:
	cmp dword ptr [esi+0xB8],0
	jne Block86

 Block85:
	mov dword ptr [esi+0xB4],1

 Block86:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 4
}
}
// CCtrlMLEdit::SetText
__SUB_CLASS_THIS(000E8730, __thiscall, 15245,  CCtrlMLEdit, void, const char*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push edi
	mov edi,ecx
	test eax,eax
	jne Block2

 Block1:
	mov eax,offset _S_

 Block2:
	lea esi,[edi+0x34]
	push eax
	mov ecx,esi
	call ZXString<char>::AssignCStr
	mov esi,dword ptr [esi]
	test esi,esi
	je Block4

 Block3:
	mov esi,dword ptr [esi-4]
	jmp Block5

 Block4:
	xor esi,esi

 Block5:
	push 0
	push 1
	push 0
	mov ecx,edi
	mov dword ptr [edi+0x40],esi
	call CCtrlMLEdit::AdjustHorz
	mov ecx,edi
	call CCtrlWnd::InvalidateRect
	pop edi
	pop esi
	ret 4
}
}
// CCtrlMLEdit::Update
__SUB_CLASS_THIS0(000E4580, __thiscall, 15243,  CCtrlMLEdit, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x28]
	lea ecx,[esi+4]
	call edx
	test eax,eax
	je Block3

 Block1:
	mov ecx,esi
	call CCtrlWnd::IsFocused
	test eax,eax
	je Block3

 Block2:
	mov eax,1
	push eax
	lea ecx,[esi+0x9C]
	call CCtrlMLEdit::CEditCaret::Update
	pop esi
	ret

 Block3:
	xor eax,eax
	push eax
	lea ecx,[esi+0x9C]
	call CCtrlMLEdit::CEditCaret::Update
	pop esi
	ret
}
}
// CCtrlMLEdit::CREATEPARAM::CREATEPARAM
_SUB_EXCEPTION_HANDLER(E56C0)
__SUB_CLASS_THIS0(000E56C0, __thiscall, 15339,  CCtrlMLEdit::CREATEPARAM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E56C0
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
	mov dword ptr [esp+0x18],esi
	xor ebx,ebx
	mov dword ptr [esi],ebx
	lea edi,[esi+0xC]
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [edi],ebx
	push offset _S_
	mov byte ptr [esp+0x28],1
	call ZXString<char>::AssignCStr
	lea eax,[esp+0x14]
	push 0x1A25
	push eax
	mov dword ptr [esi+8],ebx
	mov dword ptr [esi+4],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebp,eax
	cmp edi,ebp
	je Block5

 Block1:
	mov ecx,dword ptr [edi]
	cmp ecx,ebx
	je Block3

 Block2:
	call _xbstr_t::Data_t::Release
	mov dword ptr [edi],ebx

 Block3:
	mov eax,dword ptr [ebp]
	mov dword ptr [edi],eax
	cmp eax,ebx
	je Block5

 Block4:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	je Block7

 Block6:
	call _xbstr_t::Data_t::Release

 Block7:
	mov dword ptr [esi+0x10],0xC
	mov dword ptr [esi+0x14],0xFF000000
	mov dword ptr [esi+0x18],ebx
	mov dword ptr [esi+0x1C],ebx
	mov dword ptr [esi+0x20],ebx
	mov dword ptr [esi+0x24],ebx
	mov dword ptr [esi+0x28],ebx
	mov dword ptr [esi+0x2C],ebx
	mov dword ptr [esi+0x30],ebx
	mov dword ptr [esi+0x34],ebx
	mov eax,esi
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
// CCtrlMLEdit::CEditCaret::~CEditCaret
_SUB_EXCEPTION_HANDLER(E46C0)
__SUB_CLASS_THIS0(000E46C0, __thiscall, 15293,  CCtrlMLEdit::CEditCaret, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E46C0
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
	mov dword ptr [esi+0x14],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov esi,dword ptr [esi+0x14]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CCtrlMLEdit::GetText
__SUB_CLASS_THIS0(000E5590, __thiscall, 15244,  CCtrlMLEdit, ZXString<char>) {
__asm {

 Block0:
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	push esi
	mov esi,dword ptr [esp+0xC]
	push esi
	mov dword ptr [esp+8],0
	call CWvsApp::GetClipboardText
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CCtrlMLEdit::SetCurScrollLine
__SUB_CLASS_THIS(000E8540, __thiscall, 15251,  CCtrlMLEdit, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov dword ptr [ecx+0x48],eax
	mov dword ptr [esp+4],0
	jmp  CCtrlMLEdit::DisplayCaret
}
}
// CCtrlMLEdit::GetNextCount
__SUB_CLASS_THIS0(000E4670, __thiscall, 15247,  CCtrlMLEdit, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x34]
	test eax,eax
	je Block2

 Block1:
	cmp byte ptr [eax],0
	jne Block3

 Block2:
	xor eax,eax
	ret

 Block3:
	push esi
	mov esi,dword ptr [ecx+0x40]
	add esi,eax
	push esi
	call CharNextA
	sub eax,esi
	pop esi
	ret
}
}
// CCtrlMLEdit::OnIMEModeChange
__SUB_CLASS_THIS(000E5290, __thiscall, 15260,  IUIMsgHandler, void, char) {
__asm {

 Block0:
	ret 4
}
}
// CCtrlMLEdit::CIMECandWnd::OnMouseButton
__SUB_CLASS_THIS(000E4410, __thiscall, 15314,  CCtrlMLEdit::CIMECandWnd, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	sub esp,0x14
	push esi
	push edi
	mov edi,ecx
	mov esi,dword ptr [edi+0xA0]
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	lea ecx,[esp+8]
	push ecx
	push esi
	mov dword ptr [esp+0x10],0
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	cmp dword ptr [edi+0x7C],0
	je Block6

 Block5:
	mov eax,dword ptr [esp+8]
	lea esi,[eax+1]
	mov eax,dword ptr [esp+0x2C]
	add eax,0xFFFFFFFE
	cdq
	idiv esi
	mov esi,eax
	jmp Block7

 Block6:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push ebp
	mov ebp,dword ptr [esp+0x30]
	lea ecx,[ebx+4]
	lea eax,[ebp-3]
	cdq
	lea esi,[ecx+ecx]
	idiv esi
	mov edx,ecx
	mov dword ptr [esp+0x18],3
	mov dword ptr [esp+0x20],ecx
	mov esi,eax
	imul edx,esi
	lea eax,[edx+edx+3]
	mov dword ptr [esp+0x14],eax
	mov eax,dword ptr [esp+0x34]
	push eax
	push ebp
	lea eax,[esp+0x1C]
	lea edx,[ebx+ebx+6]
	push eax
	mov dword ptr [esp+0x28],edx
	call PtInRect
	pop ebp
	pop ebx
	test eax,eax
	je Block14

 Block7:
	mov ecx,dword ptr [edi+0x94]
	add esi,ecx
	test esi,esi
	jl Block14

 Block8:
	mov edx,dword ptr [edi+0x88]
	add edx,ecx
	cmp esi,edx
	jae Block14

 Block9:
	mov eax,dword ptr [esp+0x20]
	sub eax,0x201
	je Block13

 Block10:
	sub eax,1
	jne Block14

 Block11:
	cmp dword ptr [edi+0x9C],esi
	jne Block14

 Block12:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push esi
	push eax
	push 0x11
	call CWndMan::NotifyIME
	pop edi
	pop esi
	add esp,0x14
	ret 0x10

 Block13:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push esi
	push 0
	push 0x12
	call CWndMan::NotifyIME

 Block14:
	pop edi
	pop esi
	add esp,0x14
	ret 0x10
}
}
// CCtrlMLEdit::CEditCaret::SetHideCaret
__SUB_CLASS_THIS(000E4320, __thiscall, 15296,  CCtrlMLEdit::CEditCaret, void, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	push esi
	mov esi,ecx
	je Block9

 Block1:
	call timeGetTime
	mov ecx,eax
	sub ecx,dword ptr [esi+8]
	mov eax,0x1B4E81B5
	mul ecx
	shr edx,5
	test dl,1
	jne Block9

 Block2:
	cmp dword ptr [esi+0x18],0
	mov esi,dword ptr [esi+0x14]
	je Block6

 Block3:
	test esi,esi
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	push 0
	jmp Block16

 Block6:
	test esi,esi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push esi
	call edx
	jmp Block17

 Block9:
	cmp dword ptr [esi+0x18],0
	mov esi,dword ptr [esi+0x14]
	je Block13

 Block10:
	test esi,esi
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0
	push esi
	call ecx
	jmp Block17

 Block13:
	test esi,esi
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	push 0xFFFFFF

 Block16:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push esi
	call eax

 Block17:
	test eax,eax
	jge Block19

 Block18:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block19:
	pop esi
	ret 4
}
}
// CCtrlMLEdit::ExtractSelection
_SUB_EXCEPTION_HANDLER(E83E0)
__SUB_CLASS_THIS(000E83E0, __thiscall, 15246,  CCtrlMLEdit, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E83E0
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
	mov ecx,dword ptr [esi+0x5C]
	cmp ecx,0xFFFFFFFF
	jle Block22

 Block1:
	mov edx,dword ptr [esi+0x40]
	cmp ecx,edx
	je Block22

 Block2:
	xor ebx,ebx
	cmp ecx,ebx
	jl Block22

 Block3:
	mov eax,dword ptr [esi+0x34]
	lea edi,[esi+0x34]
	cmp eax,ebx
	je Block5

 Block4:
	mov eax,dword ptr [eax-4]
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	cmp ecx,eax
	jg Block22

 Block7:
	cmp edx,ebx
	jl Block22

 Block8:
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block10

 Block9:
	mov eax,dword ptr [eax-4]
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	cmp edx,eax
	jg Block22

 Block12:
	cmp dword ptr [esp+0x24],ebx
	je Block14

 Block13:
	mov ecx,esi
	call CCtrlMLEdit::SetClipboard

 Block14:
	mov eax,dword ptr [esi+0x5C]
	cmp eax,dword ptr [esi+0x40]
	jle Block16

 Block15:
	mov ecx,dword ptr [esi+0x40]
	mov dword ptr [esi+0x5C],ecx
	mov dword ptr [esi+0x40],eax

 Block16:
	mov dword ptr [esp+0x24],ebx
	mov edx,dword ptr [esi+0x5C]
	push edx
	push ebx
	lea eax,[esp+0x18]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x28],ebx
	call ZXString<char>::Mid
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x20],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x1C],bl
	cmp eax,ebx
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov ecx,dword ptr [esi+0x40]
	push 0xFFFFFFFF
	push ecx
	lea edx,[esp+0x18]
	push edx
	mov ecx,edi
	call ZXString<char>::Mid
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x20],2
	call ZXString<char>::op_add_assign_other_0
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x1C],bl
	cmp eax,ebx
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	lea eax,[esp+0x24]
	push eax
	mov ecx,edi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esi+0x5C]
	mov dword ptr [esi+0x40],ecx
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	cmp eax,ebx
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov edx,dword ptr [esi+0x40]
	mov dword ptr [esi+0x5C],edx
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
// CCtrlMLEdit::CIMECandWnd::CIMECandWnd
__SUB_CLASS_THIS0(000E4FF0, __thiscall, 15308,  CCtrlMLEdit::CIMECandWnd, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CWnd::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlMLEdit::CIMECandWnd::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlMLEdit::CIMECandWnd::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlMLEdit::CIMECandWnd::`vftable'{for `ZRefCounted'}
	xor eax,eax
	mov dword ptr [esi+0x8C],eax
	mov dword ptr [esi+0x90],eax
	mov dword ptr [esi+0x94],eax
	int 3// TODO: 	mov dword ptr [esi+0x84],offset ZList<ZXString<char>>::`vftable'
	mov dword ptr [esi+0xA4],eax
	mov dword ptr [esi+0xA8],eax
	mov eax,esi
	pop esi
	ret
}
}
// CCtrlMLEdit::CCtrlMLEdit
__SUB_CLASS_THIS0(000E5220, __thiscall, 15241,  CCtrlMLEdit, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CCtrlWnd::_ctor_default
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlMLEdit::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlMLEdit::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlMLEdit::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x34],eax
	mov dword ptr [esi+0x44],eax
	mov dword ptr [esi+0x50],eax
	mov dword ptr [esi+0x68],eax
	mov dword ptr [esi+0x6C],eax
	mov dword ptr [esi+0x70],eax
	mov dword ptr [esi+0x74],eax
	mov dword ptr [esi+0x78],eax
	mov dword ptr [esi+0xB0],eax
	mov dword ptr [esi+0xA8],eax
	mov dword ptr [esi+0xB4],eax
	mov dword ptr [esi+0xB8],eax
	mov dword ptr [esi+0xC0],eax
	mov dword ptr [esi+0xC8],eax
	mov eax,esi
	pop esi
	ret
}
}
// CCtrlMLEdit::SetScrollbar
_SUB_EXCEPTION_HANDLER(E5130)
__SUB_CLASS_THIS(000E5130, __thiscall, 15253,  CCtrlMLEdit, void, NakedParam<ZRef<CCtrlScrollBar>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E5130
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x10],0
	lea esi,[ecx+0xC4]
	test eax,eax
	je Block2

 Block1:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esp+0x1C]

 Block2:
	cmp dword ptr [esi+4],0
	je Block4

 Block3:
	push 0
	mov ecx,esi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esi+4],0

 Block4:
	mov dword ptr [esi+4],eax
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block6

 Block5:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block6:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 8
}
}
// CCtrlMLEdit::WordSelect
_SUB_EXCEPTION_HANDLER(E55E0)
__SUB_CLASS_THIS0(000E55E0, __thiscall, 15243,  CCtrlMLEdit, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E55E0
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
	lea eax,[esi+0x34]
	push eax
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x14],0
	call ZXString<char>::op_assign
	mov edx,dword ptr [esp+0x10]
	test edx,edx
	je Block2

 Block1:
	mov ebx,dword ptr [edx-4]
	jmp Block3

 Block2:
	xor ebx,ebx

 Block3:
	mov edi,dword ptr [esi+0x40]
	mov dword ptr [esi+0x5C],edi
	mov al,byte ptr [edi+edx]
	cmp al,0x20
	je Block20

 Block4:
	cmp al,9
	je Block20

 Block5:
	cmp al,0xD
	je Block20

 Block6:
	cmp al,0xA
	je Block20

 Block7:
	test edi,edi
	jle Block13

 Block8:
	mov ecx,dword ptr [esi+0x5C]
	mov al,byte ptr [ecx+edx-1]
	cmp al,0x20
	je Block13

 Block9:
	cmp al,9
	je Block13

 Block10:
	cmp al,0xD
	je Block13

 Block11:
	cmp al,0xA
	je Block13

 Block12:
	dec ecx
	mov dword ptr [esi+0x5C],ecx
	test ecx,ecx
	jg Block8

 Block13:
	cmp edi,ebx
	jge Block20

 Block14:
	lea ebx,[ebx]

 Block15:
	mov ecx,dword ptr [esi+0x40]
	mov al,byte ptr [ecx+edx]
	cmp al,0x20
	je Block20

 Block16:
	cmp al,9
	je Block20

 Block17:
	cmp al,0xD
	je Block20

 Block18:
	cmp al,0xA
	je Block20

 Block19:
	inc ecx
	cmp ecx,ebx
	mov dword ptr [esi+0x40],ecx
	jl Block15

 Block20:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test edx,edx
	je Block22

 Block21:
	add edx,0xFFFFFFF4
	push edx
	call ZXString<char>::_Release
	add esp,4

 Block22:
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
// CCtrlMLEdit::SetClipboard
_SUB_EXCEPTION_HANDLER(E63C0)
__SUB_CLASS_THIS0(000E63C0, __thiscall, 15243,  CCtrlMLEdit, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E63C0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov eax,dword ptr [ecx+0x5C]
	cmp eax,0xFFFFFFFF
	jle Block16

 Block1:
	mov edx,dword ptr [ecx+0x40]
	cmp eax,edx
	je Block16

 Block2:
	test eax,eax
	jl Block16

 Block3:
	mov esi,dword ptr [ecx+0x34]
	add ecx,0x34
	test esi,esi
	je Block5

 Block4:
	mov esi,dword ptr [esi-4]
	jmp Block6

 Block5:
	xor esi,esi

 Block6:
	cmp eax,esi
	jg Block16

 Block7:
	test edx,edx
	jl Block16

 Block8:
	mov esi,dword ptr [ecx]
	test esi,esi
	je Block10

 Block9:
	mov esi,dword ptr [esi-4]
	jmp Block11

 Block10:
	xor esi,esi

 Block11:
	cmp edx,esi
	jg Block16

 Block12:
	cmp eax,edx
	jle Block14

 Block13:
	mov esi,eax
	mov eax,edx
	mov edx,esi

 Block14:
	push edx
	push eax
	lea eax,[esp+0x10]
	push eax
	call ZXString<char>::Mid
	mov ecx,dword ptr [esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	mov dword ptr [esp+0x18],0
	call CWvsApp::SetClipboardText
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CCtrlMLEdit::AdjustHorz
__SUB_CLASS_THIS(000E85F0, __thiscall, 15271,  CCtrlMLEdit, void, long, int32_t, int32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0x10
	call CInputSystem::IsKeyPressed
	test eax,eax
	jne Block4

 Block1:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 1
	call CInputSystem::IsKeyPressed
	test eax,eax
	jne Block4

 Block2:
	cmp dword ptr [esp+0x14],eax
	jne Block4

 Block3:
	xor edi,edi
	jmp Block5

 Block4:
	mov edi,1

 Block5:
	cmp dword ptr [esp+0x10],0
	je Block7

 Block6:
	xor edi,edi

 Block7:
	mov ecx,esi
	call CCtrlMLEdit::CalcLineStart
	mov ecx,esi
	call CCtrlMLEdit::UpdateScrollbar
	mov eax,dword ptr [esp+0xC]
	push eax
	mov ecx,esi
	call CCtrlMLEdit::DisplayCaret
	test edi,edi
	jne Block9

 Block8:
	mov ecx,dword ptr [esi+0x40]
	mov dword ptr [esi+0x5C],ecx

 Block9:
	pop edi
	pop esi
	ret 0xC
}
}
// CCtrlMLEdit::OnMouseMove
__SUB_CLASS_THIS(000E87C0, __thiscall, 15257,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	push eax
	push edx
	add ecx,0xFFFFFFFC
	call CCtrlMLEdit::MouseMove
	mov eax,1
	ret 8
}
}
// CCtrlMLEdit::MouseDown
__SUB_CLASS_THIS(000E8660, __thiscall, 15266,  CCtrlMLEdit, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	push eax
	push ecx
	mov ecx,esi
	call CCtrlMLEdit::CalcCaretPos
	mov ecx,dword ptr [esi+0x24]
	push 0
	mov dword ptr [esi+0x40],eax
	mov dword ptr [esi+0x5C],eax
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [esi+0x14]
	mov edx,dword ptr [edx+0x1C]
	push 0x384
	push eax
	call edx
	push 0
	push 0
	push 0
	mov ecx,esi
	call CCtrlMLEdit::AdjustHorz
	mov ecx,esi
	call CCtrlWnd::InvalidateRect
	pop esi
	ret 8
}
}
// CCtrlMLEdit::CalcCaretPos
_SUB_EXCEPTION_HANDLER(E79B0)
__SUB_CLASS_THIS(000E79B0, __thiscall, 15272,  CCtrlMLEdit, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E79B0
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
	mov edi,ecx
	mov eax,dword ptr [edi+0x60]
	add eax,dword ptr [esp+0x60]
	mov esi,dword ptr [edi+0x34]
	mov dword ptr [esp+0x24],eax
	mov eax,dword ptr [esp+0x64]
	cdq
	idiv dword ptr [edi+0x7C]
	lea edx,[edi+0x34]
	mov ecx,esi
	mov dword ptr [esp+0x14],esi
	mov ebp,esi
	add eax,dword ptr [edi+0x48]
	test ecx,ecx
	je Block2

 Block1:
	mov ecx,dword ptr [ecx-4]
	jmp Block3

 Block2:
	xor ecx,ecx

 Block3:
	add ecx,esi
	mov dword ptr [esp+0x60],ecx
	mov ecx,dword ptr [edi+0x44]
	test ecx,ecx
	je Block6

 Block4:
	cmp dword ptr [ecx-4],1
	je Block17

 Block5:
	test ecx,ecx
	jne Block7

 Block6:
	xor ecx,ecx
	jmp Block8

 Block7:
	mov ecx,dword ptr [ecx-4]

 Block8:
	dec ecx
	cmp eax,ecx
	jbe Block12

 Block9:
	mov edx,esi
	test edx,edx
	je Block11

 Block10:
	mov eax,dword ptr [edx-4]
	jmp Block48

 Block11:
	xor eax,eax
	jmp Block48

 Block12:
	mov ecx,dword ptr [edi+0x44]
	test ecx,ecx
	je Block14

 Block13:
	mov ecx,dword ptr [ecx-4]

 Block14:
	dec ecx
	cmp eax,ecx
	jne Block16

 Block15:
	mov ecx,dword ptr [edi+0x44]
	mov ebp,dword ptr [ecx+eax*4]
	add ebp,esi
	jmp Block17

 Block16:
	mov edx,dword ptr [edi+0x44]
	mov ebp,dword ptr [edx+eax*4]
	lea eax,[edx+eax*4]
	mov eax,dword ptr [eax+4]
	add ebp,esi
	add eax,esi
	mov dword ptr [esp+0x60],eax

 Block17:
	mov ebx,ebp
	push ebp
	mov dword ptr [esp+0x68],ebx
	call CharNextA
	mov dword ptr [esp+0x18],eax
	cmp ebp,eax
	jb Block24

 Block18:
	mov eax,dword ptr [esp+0x60]

 Block19:
	cmp byte ptr [eax-1],0xD
	jne Block47

 Block20:
	sub eax,esi
	dec eax
	jmp Block48

 Block23:
	mov ebx,dword ptr [esp+0x64]

 Block24:
	mov eax,dword ptr [esp+0x60]
	cmp ebx,eax
	jae Block19

 Block25:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block44

 Block26:
	lea edx,[esp+0x30]
	push edx
	mov esi,ebx
	push ebx
	mov dword ptr [esp+0x60],0
	sub esi,ebp
	call CharNextA
	sub eax,ebp
	push eax
	push esi
	lea eax,[esp+0x28]
	lea ebx,[edi+0x34]
	push eax
	mov ecx,ebx
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x64],1
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0x68]
	mov byte ptr [esp+0x60],2
	test ecx,ecx
	je Block45

 Block27:
	mov byte ptr [esp+0x60],1
	call IWzFont::CalcTextWidth
	shr eax,1
	mov dword ptr [esp+0x20],eax
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x58],0
	test eax,eax
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block29:
	cmp word ptr [esp+0x30],8
	mov dword ptr [esp+0x58],0xFFFFFFFF
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block44

 Block34:
	lea edx,[esp+0x40]
	push edx
	push esi
	push 0
	lea eax,[esp+0x34]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x68],3
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x64],4
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0x68]
	mov byte ptr [esp+0x60],5
	test ecx,ecx
	je Block45

 Block35:
	mov byte ptr [esp+0x60],4
	call IWzFont::CalcTextWidth
	mov ecx,dword ptr [esp+0x20]
	add eax,ecx
	cmp eax,dword ptr [esp+0x24]
	mov eax,dword ptr [esp+0x28]
	seta bl
	mov byte ptr [esp+0x58],3
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	cmp word ptr [esp+0x40],8
	mov dword ptr [esp+0x58],0xFFFFFFFF
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block41:
	test bl,bl
	jne Block46

 Block42:
	mov esi,dword ptr [esp+0x18]
	push esi
	mov dword ptr [esp+0x68],esi
	call CharNextA
	cmp esi,eax
	mov esi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x18],eax
	jb Block23

 Block43:
	jmp Block18

 Block44:
	push eax
	call _com_issue_error

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	mov eax,dword ptr [esp+0x64]
	sub eax,dword ptr [esp+0x14]
	jmp Block48

 Block47:
	sub eax,esi

 Block48:
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret 8
}
}
// CCtrlMLEdit::CIMECandWnd::Draw
_SUB_EXCEPTION_HANDLER(E57A0)
__SUB_CLASS_THIS(000E57A0, __thiscall, 15315,  CCtrlMLEdit::CIMECandWnd, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E57A0
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
	mov ebx,ecx
	mov dword ptr [esp+0x2C],ebx
	lea eax,[esp+0x78]
	push eax
	call CWnd::GetCanvas
	mov esi,dword ptr [esp+0x78]
	xor ebp,ebp
	mov dword ptr [esp+0xC4],ebp
	cmp esi,ebp
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x1C]
	push edx
	push esi
	mov dword ptr [esp+0x24],ebp
	call eax
	cmp eax,ebp
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block6

 Block5:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov edi,dword ptr [ebx+0xA4]
	cmp edi,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x14]
	lea edx,[esp+0x18]
	push edx
	push edi
	mov dword ptr [esp+0x20],ebp
	call eax
	cmp eax,ebp
	jge Block10

 Block9:
	push offset __GUID_2bef046d_ccd6_445a_88c4_929fc35d30ac
	push edi
	push eax
	call _com_issue_errorex

 Block10:
	mov edi,dword ptr [esp+0x14]
	mov ebp,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFF639FD2
	push edi
	push ebp
	push 0
	push 0
	push esi
	call edx
	test eax,eax
	jge Block12

 Block11:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block12:
	mov eax,dword ptr [esi]
	add edi,0xFFFFFFFE
	cmp dword ptr [ebx+0x80],0
	je Block70

 Block13:
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [eax+0x8C]
	push 0xFF6DAFE7
	push edi
	add ecx,2
	push ecx
	push 1
	push 1
	push esi
	call edx
	test eax,eax
	jge Block15

 Block14:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block15:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFFFF
	sub ebp,eax
	push edi
	mov dword ptr [esp+0x38],ebp
	add ebp,0xFFFFFFFB
	push ebp
	push 1
	add eax,4
	push eax
	push esi
	call edx
	test eax,eax
	jge Block17

 Block16:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block17:
	xor ecx,ecx
	mov dword ptr [esp+0x14],ecx
	mov eax,dword ptr [ebx+0x90]
	xor edi,edi
	mov byte ptr [esp+0xC4],1
	lea ebp,[ecx+2]
	mov dword ptr [esp+0x24],eax
	test eax,eax
	jne Block21

 Block18:
	mov byte ptr [esp+0xC4],0
	test ecx,ecx
	je Block105

 Block19:
	add ecx,0xFFFFFFF4
	push ecx
	jmp Block104

 Block20:
	mov edi,dword ptr [esp+0x28]

 Block21:
	lea eax,[esp+0x24]
	push eax
	call ZList<ZXString<char>>::GetNext
	add esp,4
	lea ecx,[esp+0x2C]
	push 0x1A15
	inc edi
	push ecx
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x30],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push edi
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xD0],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x38]
	add esp,0xC
	mov byte ptr [esp+0xC4],1
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov eax,dword ptr [ebx+0x98]
	lea ecx,[eax+edi-1]
	mov edi,dword ptr [ZImports::_VariantInit]
	cmp dword ptr [ebx+0xA0],ecx
	jne Block45

 Block24:
	lea edx,[esp+0xAC]
	push edx
	call edi
	lea eax,[esp+0xAC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block69

 Block25:
	lea ecx,[esp+0x7C]
	push ecx
	mov byte ptr [esp+0xC8],3
	call edi
	lea edx,[esp+0x7C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block69

 Block26:
	mov edx,dword ptr [esp+0x14]
	lea eax,[esp+0xAC]
	push eax
	mov eax,dword ptr [ebx+0xA4]
	lea ecx,[esp+0x80]
	push ecx
	push eax
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xD8],4
	call _xbstr_t::_ctor_0
	push ebp
	mov byte ptr [esp+0xD8],5
	push 2
	mov ecx,esi
	mov byte ptr [esp+0xDC],4
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0xC4],3
	cmp word ptr [esp+0x7C],di
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x7C],ax
	mov eax,dword ptr [esp+0x84]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x7C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov byte ptr [esp+0xC4],1
	cmp word ptr [esp+0xAC],di
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0xB4]
	xor edx,edx
	mov word ptr [esp+0xAC],dx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[esp+0xAC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov eax,dword ptr [esp+0x18]
	mov edx,dword ptr [esp+0x30]
	mov ecx,dword ptr [esi]
	push 0xFF000000
	push eax
	add edx,0xFFFFFFF9
	push edx
	lea edi,[eax+5]
	mov eax,dword ptr [ecx+0x8C]
	push ebp
	push edi
	push esi
	call eax
	test eax,eax
	jge Block36

 Block35:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block36:
	lea ecx,[esp+0x8C]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x8C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block69

 Block37:
	lea eax,[esp+0x9C]
	push eax
	mov byte ptr [esp+0xC8],6
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x9C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block69

 Block38:
	mov ecx,dword ptr [esp+0x1C]
	lea edx,[esp+0x8C]
	push edx
	lea eax,[esp+0xA0]
	push eax
	mov eax,dword ptr [ebx+0xA8]
	push eax
	mov eax,dword ptr [ecx]
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xD8],7
	call _xbstr_t::_ctor_0
	push ebp
	mov byte ptr [esp+0xD8],8
	push edi
	mov ecx,esi
	mov byte ptr [esp+0xDC],7
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x9C],8
	mov byte ptr [esp+0xC4],6
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0xA4]
	xor edx,edx
	mov word ptr [esp+0x9C],dx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea eax,[esp+0x9C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block42:
	cmp word ptr [esp+0x8C],8
	mov byte ptr [esp+0xC4],1
	jne Block44

 Block43:
	mov eax,dword ptr [esp+0x94]
	xor ecx,ecx
	mov word ptr [esp+0x8C],cx
	jmp Block63

 Block44:
	lea edx,[esp+0x8C]
	push edx
	jmp Block66

 Block45:
	lea eax,[esp+0x64]
	push eax
	call edi
	lea ecx,[esp+0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block69

 Block46:
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0xC8],9
	call edi
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block69

 Block47:
	mov eax,dword ptr [ebx+0xA4]
	lea ecx,[esp+0x64]
	push ecx
	lea edx,[esp+0x48]
	push edx
	push eax
	mov eax,dword ptr [esp+0x20]
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xD8],0xA
	call _xbstr_t::_ctor_0
	push ebp
	mov byte ptr [esp+0xD8],0xB
	push 2
	mov ecx,esi
	mov byte ptr [esp+0xDC],0xA
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0xC4],9
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0xC4],1
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	lea edx,[esp+0x54]
	push edx
	call edi
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block69

 Block56:
	lea ecx,[esp+0x34]
	push ecx
	mov byte ptr [esp+0xC8],0xC
	call edi
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block69

 Block57:
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0x54]
	push eax
	mov eax,dword ptr [ebx+0xA4]
	lea ecx,[esp+0x38]
	push ecx
	push eax
	mov eax,dword ptr [edx]
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xD8],0xD
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x28]
	push ebp
	add eax,5
	mov byte ptr [esp+0xD8],0xE
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xDC],0xD
	call IWzCanvas::DrawTextA
	mov edi,8
	mov byte ptr [esp+0xC4],0xC
	cmp word ptr [esp+0x34],di
	jne Block60

 Block58:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov byte ptr [esp+0xC4],1
	cmp word ptr [esp+0x54],di
	jne Block65

 Block62:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]

 Block63:
	test eax,eax
	je Block67

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block65:
	lea ecx,[esp+0x54]
	push ecx

 Block66:
	call dword ptr [ZImports::_VariantClear]

 Block67:
	cmp dword ptr [esp+0x24],0
	mov edx,dword ptr [esp+0x18]
	lea ebp,[edx+ebp+1]
	jne Block20

 Block68:
	mov ecx,dword ptr [esp+0x14]
	jmp Block18

 Block69:
	push eax
	call _com_issue_error

 Block70:
	mov ecx,dword ptr [eax+0x8C]
	push 0xFFFFFFFF
	push edi
	add ebp,0xFFFFFFFE
	push ebp
	push 1
	push 1
	push esi
	call ecx
	test eax,eax
	jge Block72

 Block71:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block72:
	xor ebp,ebp
	mov dword ptr [esp+0x1C],ebp
	mov eax,dword ptr [ebx+0x90]
	mov byte ptr [esp+0xC4],0xF
	mov dword ptr [esp+0x24],ebp
	lea edi,[ebp+3]
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block102

 Block73:
	mov eax,dword ptr [esp+0x18]
	lea edx,[eax+eax+6]
	lea ecx,[eax+2]
	add eax,4
	mov dword ptr [esp+0x18],edx
	mov dword ptr [esp+0x20],ecx
	mov dword ptr [esp+0x14],eax
	jmp Block75

 Block75:
	lea edx,[esp+0x28]
	push edx
	call ZList<ZXString<char>>::GetNext
	mov ebp,dword ptr [esp+0x28]
	add esp,4
	mov ebx,eax
	lea eax,[esp+0x30]
	push 0x1A15
	inc ebp
	push eax
	mov dword ptr [esp+0x2C],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push eax
	lea ecx,[esp+0x24]
	push ecx
	mov byte ptr [esp+0xD0],0x10
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov byte ptr [esp+0xC4],0xF
	test eax,eax
	je Block77

 Block76:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block77:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x8C]
	push 0xFF639FD2
	push eax
	push ecx
	push 3
	push edi
	push esi
	call edx
	test eax,eax
	jge Block79

 Block78:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block79:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esi]
	push 0xFFFFFFFF
	push eax
	add eax,eax
	push eax
	mov eax,dword ptr [ecx+0x8C]
	push 4
	lea edx,[edi+1]
	push edx
	push esi
	call eax
	test eax,eax
	jge Block81

 Block80:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block81:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x34]
	push ecx
	call ebp
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block69

 Block82:
	lea eax,[esp+0x54]
	push eax
	mov byte ptr [esp+0xC8],0x11
	call ebp
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block69

 Block83:
	mov ecx,dword ptr [esp+0x2C]
	mov ebp,dword ptr [esp+0x1C]
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x58]
	push eax
	mov eax,dword ptr [ecx+0xA4]
	push eax
	push ecx
	mov dword ptr [esp+0x84],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0xD8],0x12
	call _xbstr_t::_ctor_0
	push 5
	lea edx,[edi+2]
	mov byte ptr [esp+0xD8],0x13
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xDC],0x12
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x54],8
	mov byte ptr [esp+0xC4],0x11
	jne Block86

 Block84:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block87:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0xC4],0xF
	jne Block90

 Block88:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea eax,[esp+0x34]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block91:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block69

 Block92:
	lea eax,[esp+0x64]
	push eax
	mov byte ptr [esp+0xC8],0x14
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block69

 Block93:
	mov ecx,dword ptr [esp+0x2C]
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x68]
	push eax
	mov eax,dword ptr [ecx+0xA4]
	push eax
	mov eax,dword ptr [ebx]
	push ecx
	mov dword ptr [esp+0x84],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xD8],0x15
	call _xbstr_t::_ctor_0
	mov edx,dword ptr [esp+0x24]
	push 5
	add edx,edi
	mov byte ptr [esp+0xD8],0x16
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xDC],0x15
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x64],8
	mov byte ptr [esp+0xC4],0x14
	jne Block96

 Block94:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block97:
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0xC4],0xF
	jne Block100

 Block98:
	mov eax,dword ptr [esp+0x4C]
	xor edx,edx
	mov word ptr [esp+0x44],dx
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea eax,[esp+0x44]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block101:
	cmp dword ptr [esp+0x28],0
	mov ecx,dword ptr [esp+0x14]
	lea edi,[edi+ecx*2]
	jne Block75

 Block102:
	mov byte ptr [esp+0xC4],0
	test ebp,ebp
	je Block105

 Block103:
	add ebp,0xFFFFFFF4
	push ebp

 Block104:
	call ZXString<char>::_Release
	add esp,4

 Block105:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [esp+0xC8],0xFFFFFFFF
	call eax
	mov ecx,dword ptr [esp+0xBC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xB4
	ret 4
}
}
// CCtrlMLEdit::GetRTTI
__SUB_CLASS_THIS0(000E52A0, __thiscall, 15279,  CCtrlMLEdit, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CCtrlMLEdit::ms_RTTI_CCtrlMLEdit
	ret
}
}
// CCtrlMLEdit::OnMouseEnter
__SUB_CLASS_THIS(000E4290, __thiscall, 15258,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	jmp  CCtrlWnd::OnMouseEnter
}
}
// CCtrlMLEdit::CalcLineStart
_SUB_EXCEPTION_HANDLER(E61F0)
__SUB_CLASS_THIS0(000E61F0, __thiscall, 15243,  CCtrlMLEdit, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E61F0
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
	mov dword ptr [esp+0x14],esi
	lea ebx,[esi+0x44]
	mov ecx,ebx
	call ZArray<long>::RemoveAll
	push 0xFFFFFFFF
	mov ecx,ebx
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],0
	lea eax,[esi+0x34]
	mov esi,dword ptr [eax]
	push esi
	mov edi,esi
	mov ebp,esi
	call CharNextA
	mov dword ptr [esp+0x18],eax
	cmp esi,eax
	jb Block3

 Block1:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret

 Block2:
	mov eax,dword ptr [esp+0x18]

 Block3:
	cmp byte ptr [ebp],0xD
	jne Block5

 Block4:
	push 0xFFFFFFFF
	mov ecx,ebx
	call ZArray<long>::InsertBefore
	mov ecx,ebp
	sub ecx,esi
	inc ecx
	mov dword ptr [eax],ecx
	lea edi,[ebp+1]
	jmp Block15

 Block5:
	mov ecx,dword ptr [esp+0x14]
	sub eax,esi
	push eax
	mov edx,edi
	sub edx,esi
	push edx
	lea eax,[esp+0x24]
	push eax
	add ecx,0x34
	call ZXString<char>::Substring
	lea ecx,[esp+0x24]
	push ecx
	mov dword ptr [esp+0x40],0
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block17

 Block6:
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0x24]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x48],1
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax+0x68]
	mov byte ptr [esp+0x44],2
	test ecx,ecx
	je Block18

 Block7:
	mov byte ptr [esp+0x44],1
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x24],8
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x3C],0
	jne Block10

 Block8:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
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
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x20]
	cmp ecx,dword ptr [eax+0x94]
	jl Block13

 Block12:
	mov edi,ebp
	push 0xFFFFFFFF
	mov ecx,ebx
	sub edi,esi
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],edi
	mov edi,ebp

 Block13:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov ebp,dword ptr [esp+0x18]
	push ebp
	call CharNextA
	mov dword ptr [esp+0x18],eax
	cmp ebp,eax
	jb Block2

 Block16:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret

 Block17:
	push eax
	call _com_issue_error

 Block18:
	push 0x80004003
	call _com_issue_error
}
}
// CCtrlMLEdit::CIMECandWnd::OnCreate
__SUB_CLASS_THIS(000E4F40, __thiscall, 15311,  CCtrlMLEdit::CIMECandWnd, void, void*) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov eax,dword ptr [edi]
	push 0
	mov esi,ecx
	push 0
	push 0
	lea ecx,[edi+4]
	push ecx
	lea ecx,[esi+0x84]
	mov dword ptr [esi+0x80],eax
	call ZList<ZXString<char>>::MoveAfter
	mov edx,dword ptr [edi+0x18]
	mov dword ptr [esi+0x98],edx
	mov eax,dword ptr [edi+0x1C]
	mov dword ptr [esi+0x9C],eax
	mov ecx,dword ptr [edi+0x20]
	mov dword ptr [esi+0xA0],ecx
	mov eax,dword ptr [edi+0x24]
	mov ebx,dword ptr [esi+0xA4]
	cmp ebx,eax
	je Block5

 Block1:
	mov dword ptr [esi+0xA4],eax
	test eax,eax
	je Block3

 Block2:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block3:
	test ebx,ebx
	je Block5

 Block4:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block5:
	mov edi,dword ptr [edi+0x28]
	mov ebx,dword ptr [esi+0xA8]
	cmp ebx,edi
	je Block10

 Block6:
	mov dword ptr [esi+0xA8],edi
	test edi,edi
	je Block8

 Block7:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block8:
	test ebx,ebx
	je Block10

 Block9:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block10:
	pop edi
	lea eax,[esi+4]
	pop esi
	pop ebx
	mov dword ptr [esp+4],eax
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	jmp  CWndMan::SetCaptureWnd
}
}
// CCtrlMLEdit::OnIMEResult
__SUB_CLASS_THIS(000E93A0, __thiscall, 15261,  IUIMsgHandler, void, const char*) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,ecx
	push edi
	lea ecx,[esi+0x4C]
	call ZArray<unsigned long>::RemoveAll
	lea ebp,[esi-4]
	mov ecx,ebp
	call CCtrlMLEdit::DestroyIMECandWnd
	mov ebx,dword ptr [esp+0x14]
	test ebx,ebx
	je Block2

 Block1:
	cmp byte ptr [ebx],0
	jne Block3

 Block2:
	cmp dword ptr [esi+0x48],0
	je Block8

 Block3:
	push 1
	mov ecx,ebp
	call CCtrlMLEdit::ExtractSelection
	push 0xFFFFFFFF
	push 0
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [edi],0
	test ebx,ebx
	je Block7

 Block4:
	mov eax,ebx
	lea edx,[eax+1]
	mov edi,edi

 Block5:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block5

 Block6:
	sub eax,edx
	mov esi,eax
	push esi
	push ebx
	push 0
	push esi
	mov ecx,edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer

 Block7:
	mov ecx,ebp
	call CCtrlMLEdit::InsertString
	mov ecx,ebp
	call CCtrlWnd::InvalidateRect

 Block8:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// CCtrlMLEdit::CIMECandWnd::OnActivate
__SUB_CLASS_THIS(000E5040, __thiscall, 15312,  CCtrlMLEdit::CIMECandWnd, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CCtrlMLEdit::DrawTextLineRange
_SUB_EXCEPTION_HANDLER(E7280)
__SUB_CLASS_THIS(000E7280, __thiscall, 15276,  CCtrlMLEdit, void, NakedParam<_x_com_ptr<IWzCanvas>>, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E7280
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
	mov eax,dword ptr [esp+0x24]
	cmp eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x18],0
	jge Block13

 Block1:
	mov eax,dword ptr [esi+0x5C]
	or ecx,0xFFFFFFFF
	or edx,ecx
	cmp eax,ecx
	jle Block6

 Block2:
	mov edi,dword ptr [esi+0x40]
	cmp eax,edi
	je Block6

 Block3:
	jge Block5

 Block4:
	mov ecx,eax
	mov edx,edi
	jmp Block6

 Block5:
	mov ecx,edi
	mov edx,eax

 Block6:
	push edx
	push ecx
	push ecx
	mov ecx,esp
	lea eax,[esi+0x34]
	mov dword ptr [esp+0x34],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov edi,dword ptr [esi+0x18]
	mov byte ptr [esp+0x24],1
	test edi,edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x70]
	lea edx,[esp+0x30]
	push edx
	push edi
	mov dword ptr [esp+0x38],0
	call eax
	test eax,eax
	jge Block10

 Block9:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block10:
	mov ecx,dword ptr [esi+0x3C]
	add ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [esp+0x2C]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x20],esp
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block12:
	mov ecx,esi
	mov byte ptr [esp+0x2C],0
	call CCtrlMLEdit::DrawTextLine

 Block13:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 0xC
}
}
// CCtrlMLEdit::CIMECandWnd::~CIMECandWnd
_SUB_EXCEPTION_HANDLER(E5070)
__SUB_CLASS_THIS0(000E5070, __thiscall, 15310,  CCtrlMLEdit::CIMECandWnd, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E5070
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
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlMLEdit::CIMECandWnd::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlMLEdit::CIMECandWnd::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlMLEdit::CIMECandWnd::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xA8]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xA4]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea ecx,[esi+0x84]
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZXString<char>>::`vftable'
	call ZList<ZXString<char>>::RemoveAll
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
// CCtrlMLEdit::CIMECandWnd::OnDestroy
__SUB_CLASS_THIS0(000E43E0, __thiscall, 15310,  CCtrlMLEdit::CIMECandWnd, void) {
__asm {

 Block0:
	test ecx,ecx
	je Block2

 Block1:
	lea eax,[ecx+4]
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::ReleaseCaptureWnd
	ret

 Block2:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	xor eax,eax
	push eax
	call CWndMan::ReleaseCaptureWnd
	ret
}
}
// CCtrlMLEdit::IsKindOf
__SUB_CLASS_THIS(000E52C0, __thiscall, 15280,  CCtrlMLEdit, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CCtrlMLEdit::ms_RTTI_CCtrlMLEdit
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
// CCtrlMLEdit::OnMouseButton
__SUB_CLASS_THIS(000E8780, __thiscall, 15256,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x201
	je Block4

 Block1:
	sub eax,1
	je Block5

 Block2:
	sub eax,1
	jne Block5

 Block3:
	mov eax,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0xC]
	push eax
	push edx
	add ecx,0xFFFFFFFC
	call CCtrlMLEdit::MouseDblClk
	ret 0x10

 Block4:
	mov eax,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0xC]
	push eax
	push edx
	add ecx,0xFFFFFFFC
	call CCtrlMLEdit::MouseDown

 Block5:
	ret 0x10
}
}
// CCtrlMLEdit::OnMouseWheel
__SUB_CLASS_THIS(000E4600, __thiscall, 15265,  IUIMsgHandler, int32_t, long, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xC4]
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax+4]
	push esi
	mov esi,dword ptr [esp+0x10]
	push esi
	mov esi,dword ptr [esp+0x10]
	push esi
	mov esi,dword ptr [esp+0x10]
	sub esi,dword ptr [ecx+0x90]
	add eax,4
	mov ecx,eax
	mov eax,dword ptr [edx+0x10]
	push esi
	call eax
	pop esi

 Block2:
	mov eax,1
	ret 0xC
}
}
// CCtrlMLEdit::InsertString
_SUB_EXCEPTION_HANDLER(E8DA0)
__SUB_CLASS_THIS(000E8DA0, __thiscall, 15269,  CCtrlMLEdit, long, NakedParam<ZXString<char>>, int32_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_E8DA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x28],ebp
	cmp dword ptr [esi+0x88],ebp
	je Block3

 Block1:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp eax,ebp
	je Block11

 Block2:
	add eax,0xFFFFFFF4
	push eax
	jmp Block10

 Block3:
	mov edx,dword ptr [esp+0x30]
	cmp dword ptr [esi+0x98],ebp
	je Block13

 Block4:
	mov al,byte ptr [edx]
	cmp al,0x30
	jl Block6

 Block5:
	cmp al,0x39
	jle Block13

 Block6:
	cmp dword ptr [esi+0x34],ebp
	lea ecx,[esi+0x34]
	jne Block8

 Block7:
	push offset _S_
	call ZXString<char>::AssignCStr
	mov edx,dword ptr [esp+0x30]

 Block8:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	cmp edx,ebp
	je Block11

 Block9:
	add edx,0xFFFFFFF4
	push edx

 Block10:
	call ZXString<char>::_Release
	add esp,4

 Block11:
	xor eax,eax

 Block12:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 0xC

 Block13:
	mov eax,dword ptr [esi+0x40]
	cmp eax,ebp
	mov dword ptr [esi+0x5C],eax
	jl Block8

 Block14:
	mov ecx,dword ptr [esi+0x34]
	lea edi,[esi+0x34]
	cmp ecx,ebp
	je Block16

 Block15:
	mov ecx,dword ptr [ecx-4]
	jmp Block17

 Block16:
	xor ecx,ecx

 Block17:
	cmp eax,ecx
	jg Block8

 Block18:
	push eax
	push ebp
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call ZXString<char>::Mid
	mov ecx,dword ptr [esi+0x4C]
	add ecx,dword ptr [esi+0x40]
	push 0xFFFFFFFF
	push ecx
	lea edx,[esp+0x20]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x34],1
	call ZXString<char>::Mid
	mov byte ptr [esp+0x28],2
	cmp dword ptr [esp+0x34],ebp
	je Block27

 Block19:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	je Block21

 Block20:
	mov ebx,dword ptr [eax-4]
	jmp Block22

 Block21:
	xor ebx,ebx

 Block22:
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebp
	je Block24

 Block23:
	mov edi,dword ptr [eax-4]
	jmp Block25

 Block24:
	xor edi,edi

 Block25:
	mov eax,dword ptr [esp+0x30]
	push eax
	mov ecx,esi
	call CCtrlMLEdit::GetNextCount_0
	add eax,edi
	add eax,ebx
	cmp eax,dword ptr [esi+0x8C]
	jle Block50

 Block26:
	lea ecx,[esp+0x30]
	call ZXString<char>::Empty
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	xor ebx,ebx
	mov dword ptr [esp+0x34],ebp
	call CWndMan::ClearComposition
	jmp Block51

 Block27:
	mov edx,dword ptr [esp+0x14]
	cmp edx,ebp
	je Block29

 Block28:
	mov edi,dword ptr [edx-4]
	jmp Block30

 Block29:
	xor edi,edi

 Block30:
	mov ebp,dword ptr [esp+0x18]
	test ebp,ebp
	je Block32

 Block31:
	mov ecx,dword ptr [ebp-4]
	jmp Block33

 Block32:
	xor ecx,ecx

 Block33:
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block35

 Block34:
	mov eax,dword ptr [eax-4]
	jmp Block36

 Block35:
	xor eax,eax

 Block36:
	add eax,ecx
	add eax,edi
	cmp eax,dword ptr [esi+0x8C]
	jle Block50

 Block37:
	xor edi,edi

 Block38:
	test edx,edx
	je Block40

 Block39:
	mov ebx,dword ptr [edx-4]
	jmp Block41

 Block40:
	xor ebx,ebx

 Block41:
	test ebp,ebp
	je Block43

 Block42:
	mov ebp,dword ptr [ebp-4]
	jmp Block44

 Block43:
	xor ebp,ebp

 Block44:
	mov ecx,dword ptr [esp+0x30]
	lea edx,[edi+ecx]
	push edx
	mov ecx,esi
	call CCtrlMLEdit::GetNextCount_0
	add eax,ebp
	add eax,ebx
	add eax,edi
	cmp eax,dword ptr [esi+0x8C]
	jg Block46

 Block45:
	mov eax,dword ptr [esp+0x30]
	lea ecx,[edi+eax]
	push ecx
	mov ecx,esi
	call CCtrlMLEdit::GetNextCount_0
	mov edx,dword ptr [esp+0x14]
	mov ebp,dword ptr [esp+0x18]
	add edi,eax
	jmp Block38

 Block46:
	push edi
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esp+0x38]
	call ZXString<char>::Left
	push eax
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x2C],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x28],2
	test eax,eax
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block48:
	mov ebx,dword ptr [esp+0x38]
	cmp ebx,edi
	jle Block51

 Block49:
	mov ebx,edi
	jmp Block51

 Block50:
	mov ebx,dword ptr [esp+0x38]

 Block51:
	mov ecx,dword ptr [esp+0x30]
	test ecx,ecx
	je Block53

 Block52:
	mov eax,dword ptr [ecx-4]
	jmp Block54

 Block53:
	xor eax,eax

 Block54:
	push eax
	push ecx
	lea ecx,[esp+0x1C]
	call ZXString<char>::_Cat
	mov edx,dword ptr [esp+0x18]
	test edx,edx
	je Block56

 Block55:
	mov edi,dword ptr [edx-4]
	jmp Block57

 Block56:
	xor edi,edi

 Block57:
	push edi
	push edx
	mov ecx,eax
	call ZXString<char>::_Cat
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esi+0x34]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block59

 Block58:
	mov eax,dword ptr [eax-4]
	jmp Block60

 Block59:
	xor eax,eax

 Block60:
	mov ecx,dword ptr [esi+0x40]
	lea edi,[ecx+eax]
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block62

 Block61:
	mov edx,dword ptr [eax-4]
	jmp Block63

 Block62:
	xor edx,edx

 Block63:
	cmp edi,edx
	jle Block67

 Block64:
	test eax,eax
	je Block66

 Block65:
	mov edi,dword ptr [eax-4]
	jmp Block67

 Block66:
	xor edi,edi

 Block67:
	cmp dword ptr [esp+0x34],0
	je Block69

 Block68:
	mov edx,edi
	sub edx,ecx
	mov dword ptr [esi+0x4C],edx
	jmp Block70

 Block69:
	mov dword ptr [esi+0x40],edi
	mov dword ptr [esi+0x4C],0

 Block70:
	push 0
	push 1
	push ebx
	mov ecx,esi
	call CCtrlMLEdit::AdjustHorz
	mov eax,dword ptr [esp+0x18]
	sub edi,dword ptr [esi+0x40]
	mov byte ptr [esp+0x28],1
	test eax,eax
	je Block72

 Block71:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block72:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x28],0
	test eax,eax
	je Block74

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block74:
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block76

 Block75:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block76:
	mov eax,edi
	jmp Block12
}
}
// CCtrlMLEdit::OnKey
// 4E97A4
static uint8_t _SUB_E95F0_LOOKUP_TABLE_0[116] = {
0, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 
13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 1, 2, 3, 4, 5, 
6, 13, 13, 13, 13, 7, 8, 13, 13, 13, 13, 13, 13, 13, 13, 13, 
13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 9, 13, 13, 13, 13, 
13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 10, 13, 
11, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 
13, 13, 13, 13, 13, 13, 13, 13, 12, 12, 12, 12, 12, 12, 12, 12, 
12, 12, 12, 12, 
};
__SUB_CLASS_THIS(000E95F0, __thiscall, 15254,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	mov esi,ecx
	mov eax,edi
	shr eax,4
	mov ecx,edi
	and eax,1
	and ecx,1
	test edi,edi
	js Block18

 Block1:
	lea edx,[ebx-8]
	cmp edx,0x73
	ja Block18

 Block2:
	movzx edx,byte ptr [edx+_SUB_E95F0_LOOKUP_TABLE_0]
	cmp EDX, 0
je Block8
cmp EDX, 1
je Block25
cmp EDX, 2
je Block23
cmp EDX, 3
je Block16
cmp EDX, 4
je Block20
cmp EDX, 5
je Block19
cmp EDX, 6
je Block21
cmp EDX, 7
je Block5
cmp EDX, 8
je Block3
cmp EDX, 9
je Block10
cmp EDX, 10
je Block14
cmp EDX, 11
je Block12
cmp EDX, 12
je Block22
cmp EDX, 13
je Block18


 Block3:
	push 1
	test ecx,ecx
	je Block9

 Block4:
	add esi,0xFFFFFFFC
	mov ecx,esi
	call CCtrlMLEdit::ExtractSelection
	push 0
	push 1
	push 0
	mov ecx,esi
	call CCtrlMLEdit::AdjustHorz
	mov ecx,esi
	call CCtrlWnd::InvalidateRect
	pop edi
	pop esi
	pop ebx
	ret 8

 Block5:
	test ecx,ecx
	je Block18

 Block6:
	add esi,0xFFFFFFFC
	push 0
	mov ecx,esi
	call CCtrlMLEdit::ExtractSelection
	push 0xFFFFFFFF
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push eax

 Block7:
	mov ecx,esi
	call CCtrlMLEdit::GetClipboard
	mov ecx,esi
	call CCtrlMLEdit::InsertString
	mov ecx,esi
	call CCtrlWnd::InvalidateRect
	pop edi
	pop esi
	pop ebx
	ret 8

 Block8:
	push 0

 Block9:
	lea ecx,[esi-4]
	call CCtrlMLEdit::DeleteString
	pop edi
	pop esi
	pop ebx
	ret 8

 Block10:
	test eax,eax
	je Block18

 Block11:
	lea ecx,[esi-4]
	call CCtrlMLEdit::SetClipboard
	pop edi
	pop esi
	pop ebx
	ret 8

 Block12:
	test eax,eax
	je Block18

 Block13:
	add esi,0xFFFFFFFC
	push 1
	mov ecx,esi
	call CCtrlMLEdit::ExtractSelection
	push 0
	push 1
	push 0
	mov ecx,esi
	call CCtrlMLEdit::AdjustHorz
	mov ecx,esi
	call CCtrlWnd::InvalidateRect
	pop edi
	pop esi
	pop ebx
	ret 8

 Block14:
	test eax,eax
	je Block18

 Block15:
	add esi,0xFFFFFFFC
	push 0
	mov ecx,esi
	call CCtrlMLEdit::ExtractSelection
	push 0xFFFFFFFF
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push ecx
	jmp Block7

 Block16:
	push 0

 Block17:
	lea ecx,[esi-4]
	call CCtrlMLEdit::MoveCaret

 Block18:
	mov esi,dword ptr [esi+0x20]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx]
	lea ecx,[esi+4]
	push edi
	push ebx
	call eax
	pop edi
	pop esi
	pop ebx
	ret 8

 Block19:
	push 1
	jmp Block17

 Block20:
	push 4
	jmp Block17

 Block21:
	push 5
	jmp Block17

 Block22:
	mov ecx,dword ptr [_D_G_PSTAGE+4]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx]
	add ecx,4
	push edi
	push ebx
	call eax
	pop edi
	pop esi
	pop ebx
	ret 8

 Block23:
	test eax,eax
	jne Block18

 Block24:
	push 2
	lea ecx,[esi-4]
	call CCtrlMLEdit::MoveCaret
	pop edi
	pop esi
	pop ebx
	ret 8

 Block25:
	test eax,eax
	jne Block18

 Block26:
	push 3
	lea ecx,[esi-4]
	call CCtrlMLEdit::MoveCaret
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
