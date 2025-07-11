#include "regen.hpp"
// NoticeQuestProgress.ipp
#include "NoticeQuestProgress.hpp"

// CNoticeQuestProgress::NoticeProgressChange
_SUB_EXCEPTION_HANDLER(26E6B0)
__SUB_CLASS_THIS0(0026E6B0, __thiscall, 59602,  CNoticeQuestProgress, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_26E6B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1A8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1BC]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x14],ecx
	xor ebx,ebx
	xor ebp,ebp
	mov dword ptr [esp+0x28],ebp

 Block1:
	mov ecx,dword ptr [esp+0x14]
	mov eax,ebp
	imul eax,0x2C
	lea esi,[eax+ecx]
	mov dword ptr [esp+0x1C],esi
	cmp dword ptr [esi+0xA4],ebx
	je Block164

 Block2:
	mov eax,dword ptr [esi+0xA8]
	add esi,0xA8
	cmp eax,ebx
	je Block5

 Block3:
	cmp byte ptr [eax],bl
	je Block5

 Block4:
	xor eax,eax
	jmp Block6

 Block5:
	mov eax,1

 Block6:
	xor edx,edx
	cmp eax,ebx
	sete dl
	xor edi,edi
	mov dword ptr [esp+0x98],edi
	mov dword ptr [esp+0x24],edx
	lea eax,[esp+0xBC]
	push eax
	mov dword ptr [esp+0x1C8],ebx
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0xBC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block166

 Block7:
	lea edx,[esp+0x13C]
	push edx
	mov byte ptr [esp+0x1C8],1
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x13C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block166

 Block8:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x1C4],2
	cmp ecx,ebx
	je Block167

 Block9:
	lea edx,[esp+0xBC]
	push edx
	lea eax,[esp+0x140]
	push eax
	push ebx
	push 0x14
	push 0x320
	push ebx
	push ebx
	lea edx,[esp+0xA0]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	cmp eax,ebx
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov edi,eax
	push eax
	mov dword ptr [esp+0x9C],edi
	call edx

 Block11:
	mov eax,dword ptr [esp+0x84]
	cmp eax,ebx
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	cmp word ptr [esp+0x13C],8
	mov byte ptr [esp+0x1C4],1
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x13C],ax
	mov eax,dword ptr [esp+0x144]
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x13C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	cmp word ptr [esp+0xBC],8
	mov byte ptr [esp+0x1C4],bl
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0xC4]
	xor edx,edx
	mov word ptr [esp+0xBC],dx
	cmp eax,ebx
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0xBC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov ecx,dword ptr [esp+0x14]
	add ebp,3
	imul ebp,0x2C
	mov eax,dword ptr [ecx+ebp]
	mov edx,0xD
	mov word ptr [esp+0x3C],dx
	mov dword ptr [esp+0x44],eax
	cmp eax,ebx
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block23:
	mov byte ptr [esp+0x1C4],3
	cmp edi,ebx
	je Block167

 Block24:
	mov edx,dword ptr [esp+0x3C]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x54]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x58]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push edi
	call eax
	cmp eax,ebx
	jge Block26

 Block25:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block26:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x1C4],bl
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebx
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x6C]
	push eax
	call ebp
	lea ecx,[esp+0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block166

 Block31:
	lea edx,[esp+0x4C]
	push edx
	mov byte ptr [esp+0x1C8],4
	call ebp
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block166

 Block32:
	mov edx,dword ptr [esp+0x6C]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x80]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x84]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x88]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [esp+0x5C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x70]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x74]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x78]
	push 0xFFFFFFF6
	push 0xFFFFFE70
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x90]
	push edi
	mov byte ptr [esp+0x1F0],5
	call eax
	cmp eax,ebx
	jge Block34

 Block33:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block34:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x1C4],4
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	cmp eax,ebx
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	cmp word ptr [esp+0x6C],8
	mov byte ptr [esp+0x1C4],bl
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	cmp eax,ebx
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push edi
	call eax
	cmp eax,ebx
	jge Block44

 Block43:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block44:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xB4]
	push 0xA
	push edi
	call edx
	cmp eax,ebx
	jge Block46

 Block45:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block46:
	mov dword ptr [esp+0x20],ebx
	mov byte ptr [esp+0x1C4],6
	cmp dword ptr [esp+0x24],ebx
	je Block48

 Block47:
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::op_assign
	jmp Block49

 Block48:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax+0xA0]
	mov edx,dword ptr [eax+0x9C]
	mov eax,dword ptr [eax+0x98]
	push ecx
	push edx
	push eax
	lea ecx,[esp+0x2C]
	push offset _S_SDD__2
	push ecx
	call ZXString<char>::Format
	add esp,0x14

 Block49:
	lea edx,[esp+0x9C]
	push edx
	call ebp
	lea eax,[esp+0x9C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block166

 Block50:
	mov ebp,dword ptr [esp+0x20]
	lea ecx,[esp+0x9C]
	push ecx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x1D0],7
	call _xbstr_t::_ctor_0
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [edx+0x15C]
	mov byte ptr [esp+0x1CC],8
	cmp ecx,ebx
	je Block167

 Block51:
	mov byte ptr [esp+0x1CC],7
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x9C],8
	mov esi,eax
	mov byte ptr [esp+0x1C4],6
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [esp+0x9C],ax
	mov eax,dword ptr [esp+0xA4]
	cmp eax,ebx
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[esp+0x9C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0xB8]
	lea eax,[esp+0x18]
	push eax
	push edi
	mov dword ptr [esp+0x20],ebx
	call ecx
	cmp eax,ebx
	jge Block57

 Block56:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block57:
	mov eax,dword ptr [esp+0x18]
	sub eax,esi
	cdq
	sub eax,edx
	lea edx,[esp+0xFC]
	mov esi,eax
	push edx
	sar esi,1
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0xFC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block166

 Block58:
	lea ecx,[esp+0x17C]
	push ecx
	mov byte ptr [esp+0x1C8],9
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x17C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block166

 Block59:
	mov eax,3
	mov word ptr [esp+0xDC],ax
	mov dword ptr [esp+0xE4],ebx
	mov eax,dword ptr [esp+0x14]
	mov eax,dword ptr [eax+0x160]
	lea ecx,[esp+0xFC]
	push ecx
	lea edx,[esp+0x180]
	push edx
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x1D8],0xB
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0xEC]
	push ecx
	lea edx,[esp+0xA0]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x1DC],0xC
	call IWzGr2DLayer::Getcanvas
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x1D4],0xD
	cmp ecx,ebx
	je Block167

 Block60:
	push ebx
	lea eax,[esi-1]
	push eax
	mov byte ptr [esp+0x1DC],0xE
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x8C]
	mov byte ptr [esp+0x1C4],0xB
	cmp eax,ebx
	je Block62

 Block61:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block62:
	cmp word ptr [esp+0xDC],8
	mov byte ptr [esp+0x1C4],0xA
	jne Block65

 Block63:
	xor eax,eax
	mov word ptr [esp+0xDC],ax
	mov eax,dword ptr [esp+0xE4]
	cmp eax,ebx
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea ecx,[esp+0xDC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	cmp word ptr [esp+0x17C],8
	mov byte ptr [esp+0x1C4],9
	jne Block69

 Block67:
	mov eax,dword ptr [esp+0x184]
	xor edx,edx
	mov word ptr [esp+0x17C],dx
	cmp eax,ebx
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea eax,[esp+0x17C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block70:
	cmp word ptr [esp+0xFC],8
	mov byte ptr [esp+0x1C4],6
	jne Block73

 Block71:
	mov eax,dword ptr [esp+0x104]
	xor ecx,ecx
	mov word ptr [esp+0xFC],cx
	cmp eax,ebx
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea edx,[esp+0xFC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block74:
	lea eax,[esp+0x19C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x19C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block166

 Block75:
	lea edx,[esp+0x11C]
	push edx
	mov byte ptr [esp+0x1C8],0xF
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x11C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block166

 Block76:
	mov ecx,3
	mov word ptr [esp+0x15C],cx
	mov dword ptr [esp+0x164],ebx
	mov ecx,dword ptr [esp+0x14]
	lea edx,[esp+0x19C]
	push edx
	lea eax,[esp+0x120]
	push eax
	mov eax,dword ptr [ecx+0x160]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x1D8],0x11
	call _xbstr_t::_ctor_0
	lea edx,[esp+0x16C]
	push edx
	lea eax,[esp+0x94]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x1DC],0x12
	call IWzGr2DLayer::Getcanvas
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x1D4],0x13
	cmp ecx,ebx
	je Block167

 Block77:
	push ebx
	lea edx,[esi+1]
	push edx
	mov byte ptr [esp+0x1DC],0x14
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x80]
	mov byte ptr [esp+0x1C4],0x11
	cmp eax,ebx
	je Block79

 Block78:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block79:
	cmp word ptr [esp+0x15C],8
	mov byte ptr [esp+0x1C4],0x10
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [esp+0x15C],ax
	mov eax,dword ptr [esp+0x164]
	cmp eax,ebx
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[esp+0x15C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	cmp word ptr [esp+0x11C],8
	mov byte ptr [esp+0x1C4],0xF
	jne Block86

 Block84:
	mov eax,dword ptr [esp+0x124]
	xor edx,edx
	mov word ptr [esp+0x11C],dx
	cmp eax,ebx
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea eax,[esp+0x11C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block87:
	cmp word ptr [esp+0x19C],8
	mov byte ptr [esp+0x1C4],6
	jne Block90

 Block88:
	mov eax,dword ptr [esp+0x1A4]
	xor ecx,ecx
	mov word ptr [esp+0x19C],cx
	cmp eax,ebx
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea edx,[esp+0x19C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block91:
	lea eax,[esp+0xEC]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0xEC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block166

 Block92:
	lea edx,[esp+0xCC]
	push edx
	mov byte ptr [esp+0x1C8],0x15
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0xCC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block166

 Block93:
	mov ecx,3
	mov word ptr [esp+0xAC],cx
	mov dword ptr [esp+0xB4],ebx
	mov ecx,dword ptr [esp+0x14]
	lea edx,[esp+0xEC]
	push edx
	lea eax,[esp+0xD0]
	push eax
	mov eax,dword ptr [ecx+0x160]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x1D8],0x17
	call _xbstr_t::_ctor_0
	lea edx,[esp+0xBC]
	push edx
	lea eax,[esp+0x9C]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x1DC],0x18
	call IWzGr2DLayer::Getcanvas
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x1D4],0x19
	cmp ecx,ebx
	je Block167

 Block94:
	push 0xFFFFFFFF
	push esi
	mov byte ptr [esp+0x1DC],0x1A
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x88]
	mov byte ptr [esp+0x1C4],0x17
	cmp eax,ebx
	je Block96

 Block95:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block96:
	cmp word ptr [esp+0xAC],8
	mov byte ptr [esp+0x1C4],0x16
	jne Block99

 Block97:
	xor eax,eax
	mov word ptr [esp+0xAC],ax
	mov eax,dword ptr [esp+0xB4]
	cmp eax,ebx
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea ecx,[esp+0xAC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block100:
	cmp word ptr [esp+0xCC],8
	mov byte ptr [esp+0x1C4],0x15
	jne Block103

 Block101:
	mov eax,dword ptr [esp+0xD4]
	xor edx,edx
	mov word ptr [esp+0xCC],dx
	cmp eax,ebx
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea eax,[esp+0xCC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block104:
	cmp word ptr [esp+0xEC],8
	mov byte ptr [esp+0x1C4],6
	jne Block107

 Block105:
	mov eax,dword ptr [esp+0xF4]
	xor ecx,ecx
	mov word ptr [esp+0xEC],cx
	cmp eax,ebx
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea edx,[esp+0xEC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block108:
	lea eax,[esp+0x14C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x14C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block166

 Block109:
	lea edx,[esp+0x12C]
	push edx
	mov byte ptr [esp+0x1C8],0x1B
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x12C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block166

 Block110:
	mov ecx,3
	mov word ptr [esp+0x10C],cx
	mov dword ptr [esp+0x114],ebx
	mov ecx,dword ptr [esp+0x14]
	lea edx,[esp+0x14C]
	push edx
	lea eax,[esp+0x130]
	push eax
	mov eax,dword ptr [ecx+0x160]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x1D8],0x1D
	call _xbstr_t::_ctor_0
	lea edx,[esp+0x11C]
	push edx
	lea eax,[esp+0xA4]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x1DC],0x1E
	call IWzGr2DLayer::Getcanvas
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x1D4],0x1F
	cmp ecx,ebx
	je Block167

 Block111:
	push 1
	push esi
	mov byte ptr [esp+0x1DC],0x20
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x90]
	mov byte ptr [esp+0x1C4],0x1D
	cmp eax,ebx
	je Block113

 Block112:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block113:
	cmp word ptr [esp+0x10C],8
	mov byte ptr [esp+0x1C4],0x1C
	jne Block116

 Block114:
	xor eax,eax
	mov word ptr [esp+0x10C],ax
	mov eax,dword ptr [esp+0x114]
	cmp eax,ebx
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea ecx,[esp+0x10C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block117:
	cmp word ptr [esp+0x12C],8
	mov byte ptr [esp+0x1C4],0x1B
	jne Block120

 Block118:
	mov eax,dword ptr [esp+0x134]
	xor edx,edx
	mov word ptr [esp+0x12C],dx
	cmp eax,ebx
	je Block121

 Block119:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block121

 Block120:
	lea eax,[esp+0x12C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block121:
	cmp word ptr [esp+0x14C],8
	mov byte ptr [esp+0x1C4],6
	jne Block124

 Block122:
	mov eax,dword ptr [esp+0x154]
	xor ecx,ecx
	mov word ptr [esp+0x14C],cx
	cmp eax,ebx
	je Block125

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block125

 Block124:
	lea edx,[esp+0x14C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block125:
	lea eax,[esp+0x1AC]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x1AC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block166

 Block126:
	lea edx,[esp+0x18C]
	push edx
	mov byte ptr [esp+0x1C8],0x21
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x18C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block166

 Block127:
	mov ecx,3
	mov word ptr [esp+0x16C],cx
	mov dword ptr [esp+0x174],ebx
	mov ecx,dword ptr [esp+0x14]
	lea edx,[esp+0x1AC]
	push edx
	lea eax,[esp+0x190]
	push eax
	mov eax,dword ptr [ecx+0x15C]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push ebp
	mov byte ptr [esp+0x1D8],0x23
	call _xbstr_t::_ctor_0
	lea edx,[esp+0x17C]
	push edx
	lea eax,[esp+0x90]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x1DC],0x24
	call IWzGr2DLayer::Getcanvas
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x1D4],0x25
	cmp ecx,ebx
	je Block167

 Block128:
	push ebx
	push esi
	mov byte ptr [esp+0x1DC],0x26
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x7C]
	mov byte ptr [esp+0x1C4],0x23
	cmp eax,ebx
	je Block130

 Block129:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block130:
	mov esi,8
	mov byte ptr [esp+0x1C4],0x22
	cmp word ptr [esp+0x16C],si
	jne Block133

 Block131:
	xor eax,eax
	mov word ptr [esp+0x16C],ax
	mov eax,dword ptr [esp+0x174]
	cmp eax,ebx
	je Block134

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block134

 Block133:
	lea ecx,[esp+0x16C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block134:
	mov byte ptr [esp+0x1C4],0x21
	cmp word ptr [esp+0x18C],si
	jne Block137

 Block135:
	mov eax,dword ptr [esp+0x194]
	xor edx,edx
	mov word ptr [esp+0x18C],dx
	cmp eax,ebx
	je Block138

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block137:
	lea eax,[esp+0x18C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block138:
	mov byte ptr [esp+0x1C4],6
	cmp word ptr [esp+0x1AC],si
	jne Block141

 Block139:
	mov eax,dword ptr [esp+0x1B4]
	xor ecx,ecx
	mov word ptr [esp+0x1AC],cx
	cmp eax,ebx
	je Block142

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block142

 Block141:
	lea edx,[esp+0x1AC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block142:
	call get_update_time
	mov esi,eax
	add esi,0xBB8
	cmp dword ptr [esp+0x24],ebx
	je Block144

 Block143:
	add esi,0xBB8

 Block144:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block166

 Block145:
	mov edx,3
	mov word ptr [esp+0x5C],dx
	mov dword ptr [esp+0x64],esi
	lea eax,[esp+0x94]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x1C8],0x28
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x1C4],0x29
	cmp esi,ebx
	je Block167

 Block146:
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [esp+0x6C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x80]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x84]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x88]
	push ebx
	push ebx
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x90]
	push esi
	call eax
	cmp eax,ebx
	jge Block148

 Block147:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block148:
	mov eax,dword ptr [esp+0x94]
	mov byte ptr [esp+0x1C4],0x28
	cmp eax,ebx
	je Block150

 Block149:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block150:
	mov esi,8
	mov byte ptr [esp+0x1C4],0x27
	cmp word ptr [esp+0x5C],si
	jne Block153

 Block151:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	cmp eax,ebx
	je Block154

 Block152:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block154

 Block153:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block154:
	mov byte ptr [esp+0x1C4],6
	cmp word ptr [esp+0x2C],si
	jne Block157

 Block155:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,ebx
	je Block158

 Block156:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block158

 Block157:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block158:
	mov ecx,dword ptr [esp+0x1C]
	mov esi,dword ptr [ecx+0x80]
	cmp esi,edi
	je Block161

 Block159:
	mov edx,ecx
	mov dword ptr [edx+0x80],edi
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx
	cmp esi,ebx
	je Block161

 Block160:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block161:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [ecx+0xA4],ebx
	mov byte ptr [esp+0x1C4],bl
	cmp ebp,ebx
	je Block163

 Block162:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block163:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov dword ptr [esp+0x1C8],0xFFFFFFFF
	call eax
	mov ebp,dword ptr [esp+0x28]

 Block164:
	inc ebp
	cmp ebp,5
	mov dword ptr [esp+0x28],ebp
	jl Block1

 Block165:
	mov ecx,dword ptr [esp+0x1BC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1B4
	ret

 Block166:
	push eax
	call _com_issue_error

 Block167:
	push 0x80004003
	call _com_issue_error
}
}
// CNoticeQuestProgress::HitTest
__SUB_CLASS_THIS(0026DC90, __thiscall, 59603,  CNoticeQuestProgress, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	xor eax,eax
	ret 0xC
}
}
// CNoticeQuestProgress::OnSetFocus
__SUB_CLASS_THIS(0026DCA0, __thiscall, 59604,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CNoticeQuestProgress::NOTICE_CHANGE::~NOTICE_CHANGE
_SUB_EXCEPTION_HANDLER(26DB30)
__SUB_CLASS_THIS0(0026DB30, __thiscall, 59621,  CNoticeQuestProgress::NOTICE_CHANGE, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_26DB30
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
	mov eax,dword ptr [esi+0x28]
	mov dword ptr [esp+0x14],2
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0x18]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esi+4]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov esi,dword ptr [esi]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block8

 Block7:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block8:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CNoticeQuestProgress::OnQuestProgressUpdated_Script
_SUB_EXCEPTION_HANDLER(26DF50)
__SUB_CLASS_THIS(0026DF50, __thiscall, 59607,  CNoticeQuestProgress, void, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_26DF50
	mov eax,dword ptr fs:[0]
	push eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov eax,dword ptr [esp+0x24]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],ebx
	cmp eax,ebx
	je Block11

 Block1:
	cmp byte ptr [eax],bl
	je Block11

 Block2:
	xor esi,esi
	lea edi,[ebp+0x94]

 Block3:
	call get_update_time
	mov ecx,dword ptr [edi]
	add ecx,0xBB8
	cmp ecx,eax
	jl Block6

 Block4:
	inc esi
	add edi,0x2C
	cmp esi,5
	jl Block3

 Block5:
	jmp Block10

 Block6:
	cmp esi,5
	jge Block10

 Block7:
	imul esi,0x2C
	add esi,ebp
	xor edx,edx
	mov word ptr [esi+0x88],dx
	mov dword ptr [esi+0x8C],ebx
	mov dword ptr [esi+0x90],ebx
	mov eax,dword ptr [esi+0x98]
	cmp eax,ebx
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esi+0x98],ebx

 Block9:
	mov dword ptr [esi+0x9C],ebx
	mov dword ptr [esi+0xA0],ebx
	call get_update_time
	mov dword ptr [esi+0x94],eax
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esi+0xA8]
	mov dword ptr [esi+0xA4],1
	call ZXString<char>::op_assign

 Block10:
	mov eax,dword ptr [esp+0x24]

 Block11:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC
	ret 4
}
}
// CNoticeQuestProgress::OnQuestProgressUpdated_Item
_SUB_EXCEPTION_HANDLER(26DCE0)
__SUB_CLASS_THIS(0026DCE0, __thiscall, 59605,  CNoticeQuestProgress, void, uint16_t, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_26DCE0
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
	mov dword ptr [esp+0x18],ecx
	mov esi,dword ptr [esp+0x34]
	xor ebx,ebx
	cmp esi,ebx
	je Block33

 Block1:
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	push eax
	call CQuestMan::GetCompleteDemand
	mov edi,eax
	cmp edi,ebx
	je Block33

 Block2:
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [edi+0x74]
	mov dword ptr [esp+0x28],ebx
	cmp eax,ebx
	je Block33

 Block3:
	cmp dword ptr [eax-4],ebx
	je Block33

 Block4:
	xor eax,eax
	xor edx,edx

 Block5:
	mov ecx,dword ptr [edi+0x74]
	cmp ecx,ebx
	je Block30

 Block6:
	cmp eax,dword ptr [ecx-4]
	jae Block30

 Block7:
	cmp esi,dword ptr [edx+ecx]
	je Block9

 Block8:
	inc eax
	add edx,0xC
	jmp Block5

 Block9:
	lea esi,[eax+eax*2]
	add esi,esi
	mov eax,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	add esi,esi
	mov edx,dword ptr [eax+esi]
	add eax,esi
	push edx
	call CWvsContext::GetItemCount
	mov ecx,dword ptr [esp+0x34]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov ebx,eax
	mov eax,dword ptr [edi+0x74]
	mov ebp,dword ptr [eax+esi+4]
	lea edx,[esp+0x20]
	push edx
	call CItemInfo::GetItemName
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x2C],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x28],0
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	test ebp,ebp
	je Block30

 Block12:
	cmp dword ptr [esp+0x14],0
	je Block30

 Block13:
	mov eax,dword ptr [esp+0x14]
	cmp byte ptr [eax],0
	je Block30

 Block14:
	mov edi,dword ptr [esp+0x18]
	xor esi,esi
	add edi,0x88
	mov edi,edi

 Block15:
	call get_update_time
	mov ecx,dword ptr [edi+0xC]
	add ecx,0xBB8
	cmp ecx,eax
	jl Block18

 Block16:
	mov dx,word ptr [esp+0x30]
	cmp dx,word ptr [edi]
	jne Block18

 Block17:
	mov eax,dword ptr [esp+0x34]
	cmp eax,dword ptr [edi+4]
	je Block20

 Block18:
	inc esi
	add edi,0x2C
	cmp esi,5
	jl Block15

 Block19:
	jmp Block21

 Block20:
	cmp esi,5
	jl Block27

 Block21:
	mov edi,dword ptr [esp+0x18]
	xor esi,esi
	add edi,0x94

 Block22:
	call get_update_time
	mov ecx,dword ptr [edi]
	add ecx,0xBB8
	cmp ecx,eax
	jl Block25

 Block23:
	inc esi
	add edi,0x2C
	cmp esi,5
	jl Block22

 Block24:
	mov edx,dword ptr [esp+0x14]
	add edx,0xFFFFFFF4
	mov dword ptr [esp+0x28],0xFFFFFFFF
	push edx
	jmp Block32

 Block25:
	cmp esi,5
	jl Block27

 Block26:
	mov edx,dword ptr [esp+0x14]
	add edx,0xFFFFFFF4
	mov dword ptr [esp+0x28],0xFFFFFFFF
	push edx
	jmp Block32

 Block27:
	mov eax,dword ptr [esp+0x18]
	imul esi,0x2C
	mov cx,word ptr [esp+0x30]
	mov edx,dword ptr [esp+0x34]
	add esi,eax
	lea eax,[esp+0x14]
	mov word ptr [esi+0x88],cx
	xor edi,edi
	push eax
	lea ecx,[esi+0x98]
	mov dword ptr [esi+0x8C],edx
	mov dword ptr [esi+0x90],edi
	call ZXString<char>::op_assign
	mov dword ptr [esi+0x9C],ebx
	mov dword ptr [esi+0xA0],ebp
	call get_update_time
	mov dword ptr [esi+0x94],eax
	mov dword ptr [esi+0xA4],1
	mov eax,dword ptr [esi+0xA8]
	cmp eax,edi
	je Block29

 Block28:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esi+0xA8],edi

 Block29:
	mov ecx,dword ptr [esp+0x14]
	add ecx,0xFFFFFFF4
	mov dword ptr [esp+0x28],0xFFFFFFFF
	push ecx
	jmp Block32

 Block30:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFF4
	push eax

 Block32:
	call ZXString<char>::_Release
	add esp,4

 Block33:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 8
}
}
// CNoticeQuestProgress::OnQuestProgressUpdated_Mob
_SUB_EXCEPTION_HANDLER(26F6B0)
__SUB_CLASS_THIS(0026F6B0, __thiscall, 59606,  CNoticeQuestProgress, void, uint16_t, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_26F6B0
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
	mov dword ptr [esp+0x34],ecx
	mov edi,dword ptr [esp+0x94]
	mov ecx,dword ptr [TSingleton<CQuestMan>::ms_pInstance]
	xor ebp,ebp
	push edi
	mov dword ptr [esp+0x90],ebp
	call CQuestMan::GetCompleteDemand
	mov ebx,eax
	mov dword ptr [esp+0x38],ebx
	cmp ebx,ebp
	jne Block2

 Block1:
	mov eax,dword ptr [esp+0x98]
	cmp eax,ebp
	jmp Block61

 Block2:
	mov dword ptr [esp+0x1C],ebp
	mov eax,dword ptr [ebx+0x78]
	cmp eax,ebp
	je Block4

 Block3:
	cmp dword ptr [eax-4],ebp
	jne Block5

 Block4:
	mov eax,dword ptr [esp+0x98]
	cmp eax,ebp
	jmp Block61

 Block5:
	mov dword ptr [esp+0x14],ebp
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0x90],2
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	lea ecx,[esp+0x4C]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	movzx ecx,di
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x34]
	mov dword ptr [esp+0x34],ecx
	push eax
	lea ecx,[esi+0x6F5]
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetAt
	test eax,eax
	jne Block9

 Block6:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x8C],1
	cmp eax,ebp
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esp+0x98]
	cmp eax,ebp
	jmp Block61

 Block9:
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x28],ebp
	mov dword ptr [esp+0x24],ebp
	mov dword ptr [esp+0x20],ebp
	mov dword ptr [esp+0x2C],ebp
	mov byte ptr [esp+0x8C],6
	mov ebp,3

 Block10:
	mov eax,dword ptr [ebx+0x78]
	mov dword ptr [esp+0x30],ebp
	test eax,eax
	je Block40

 Block11:
	mov ecx,dword ptr [esp+0x2C]
	cmp ecx,dword ptr [eax-4]
	jae Block40

 Block12:
	mov eax,dword ptr [esp+0x14]
	xor edi,edi
	test eax,eax
	je Block14

 Block13:
	mov eax,dword ptr [eax-4]
	jmp Block15

 Block14:
	xor eax,eax

 Block15:
	cmp eax,ebp
	jl Block38

 Block16:
	push ebp
	lea esi,[ebp-3]
	push esi
	lea edx,[esp+0x44]
	push edx
	lea ecx,[esp+0x20]
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov ebx,eax
	mov eax,dword ptr [esp+0x40]
	add esp,4
	test eax,eax
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	test ebx,ebx
	je Block38

 Block19:
	mov eax,dword ptr [esp+0x98]
	test eax,eax
	je Block21

 Block20:
	mov eax,dword ptr [eax-4]
	jmp Block22

 Block21:
	xor eax,eax

 Block22:
	cmp eax,ebp
	jl Block25

 Block23:
	push ebp
	push esi
	lea eax,[esp+0x48]
	push eax
	lea ecx,[esp+0xA4]
	call ZXString<char>::Mid
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov edi,eax
	mov eax,dword ptr [esp+0x44]
	add esp,4
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block25:
	cmp ebx,edi
	je Block38

 Block26:
	mov ecx,dword ptr [esp+0x38]
	mov edx,dword ptr [ecx+0x78]
	mov eax,dword ptr [esp+0x2C]
	mov ebp,dword ptr [edx+eax*8+4]
	lea eax,[edx+eax*8+8]
	test ebp,ebp
	je Block37

 Block27:
	mov edi,dword ptr [eax-8]
	push offset _D_VTMISSING
	lea ecx,[esp+0x68]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x58]
	mov byte ptr [esp+0x90],7
	call Ztl_variant_t::_ctor_1
	push 0
	push 0
	lea ecx,[esp+0x6C]
	push ecx
	lea edx,[esp+0x60]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x60],esp
	push 0x8E6
	push eax
	mov byte ptr [esp+0xA8],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xA0],9
	je Block39

 Block28:
	lea ecx,[esp+0x88]
	push ecx
	mov byte ptr [esp+0xA4],8
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x94],0xA
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x48]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[esp+0x74]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x54]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x64]
	mov byte ptr [esp+0x8C],0xE
	call Ztl_variant_t::~Ztl_variant_t
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x50],esp
	push 0x671
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [esp+0x48]
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x58],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block30

 Block29:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block30:
	lea edx,[esp+0x54]
	push edx
	call get_labeled_string_0
	add esp,0x10
	push eax
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x90],0xF
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x8C],0xE
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block35

 Block33:
	cmp byte ptr [eax],0
	je Block35

 Block34:
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	call ZArray<unsigned long>::InsertBefore
	push 0xFFFFFFFF
	lea ecx,[esp+0x2C]
	mov dword ptr [eax],edi
	call ZArray<long>::InsertBefore
	push 0xFFFFFFFF
	lea ecx,[esp+0x28]
	mov dword ptr [eax],ebx
	call ZArray<long>::InsertBefore
	lea edx,[esp+0x1C]
	push edx
	push 0xFFFFFFFF
	lea ecx,[esp+0x28]
	mov dword ptr [eax],ebp
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign

 Block35:
	mov byte ptr [esp+0x8C],6
	test esi,esi
	je Block37

 Block36:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block37:
	mov ebp,dword ptr [esp+0x30]

 Block38:
	inc dword ptr [esp+0x2C]
	mov ebx,dword ptr [esp+0x38]
	add ebp,3
	jmp Block10

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block56

 Block41:
	cmp dword ptr [eax-4],0
	je Block56

 Block42:
	mov ecx,dword ptr [esp+0x28]
	mov ebx,dword ptr [esp+0x20]
	sub ecx,eax
	mov dword ptr [esp+0x44],ecx
	mov ecx,dword ptr [esp+0x24]
	sub ebx,eax
	sub ecx,eax
	mov dword ptr [esp+0x30],0
	mov edi,eax
	mov dword ptr [esp+0x40],ecx
	jmp Block44

 Block44:
	mov edx,dword ptr [esp+0x30]
	cmp edx,dword ptr [eax-4]
	jae Block56

 Block45:
	mov ebp,dword ptr [esp+0x34]
	xor esi,esi
	add ebp,0x88

 Block46:
	call get_update_time
	mov ecx,dword ptr [ebp+0xC]
	add ecx,0xBB8
	cmp ecx,eax
	jl Block50

 Block47:
	mov dx,word ptr [esp+0x94]
	cmp dx,word ptr [ebp]
	jne Block50

 Block48:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block50

 Block49:
	cmp eax,dword ptr [ebp+8]
	je Block52

 Block50:
	inc esi
	add ebp,0x2C
	cmp esi,5
	jl Block46

 Block51:
	jmp Block53

 Block52:
	cmp esi,5
	jl Block65

 Block53:
	mov ebp,dword ptr [esp+0x34]
	xor esi,esi
	add ebp,0x94

 Block54:
	call get_update_time
	mov ecx,dword ptr [ebp]
	add ecx,0xBB8
	cmp ecx,eax
	jl Block64

 Block55:
	inc esi
	add ebp,0x2C
	cmp esi,5
	jl Block54

 Block56:
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x8C],5
	call ZArray<ZXString<char>>::RemoveAll
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x8C],4
	call ZArray<long>::RemoveAll
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x8C],3
	call ZArray<long>::RemoveAll
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x8C],2
	call ZArray<unsigned long>::RemoveAll
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x8C],1
	test eax,eax
	je Block58

 Block57:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block58:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x8C],0
	test eax,eax
	je Block60

 Block59:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block60:
	mov eax,dword ptr [esp+0x98]
	test eax,eax

 Block61:
	mov dword ptr [esp+0x8C],0xFFFFFFFF
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block63:
	mov ecx,dword ptr [esp+0x84]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x7C
	ret 8

 Block64:
	cmp esi,5
	jge Block56

 Block65:
	mov edx,dword ptr [esp+0x34]
	imul esi,0x2C
	mov ax,word ptr [esp+0x94]
	add esi,edx
	mov word ptr [esi+0x88],ax
	mov dword ptr [esi+0x8C],0
	mov ecx,dword ptr [edi]
	lea edx,[ebx+edi]
	mov dword ptr [esi+0x90],ecx
	push edx
	lea ecx,[esi+0x98]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x44]
	mov ecx,dword ptr [eax+edi]
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [esi+0x9C],ecx
	mov eax,dword ptr [edx+edi]
	mov dword ptr [esi+0xA0],eax
	call get_update_time
	mov ebp,1
	mov dword ptr [esi+0x94],eax
	mov dword ptr [esi+0xA4],ebp
	mov eax,dword ptr [esi+0xA8]
	test eax,eax
	je Block67

 Block66:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov dword ptr [esi+0xA8],0

 Block67:
	add dword ptr [esp+0x30],ebp
	mov eax,dword ptr [esp+0x18]
	add edi,4
	jmp Block44
}
}
// CNoticeQuestProgress::CNoticeQuestProgress
_SUB_EXCEPTION_HANDLER(26E060)
__SUB_CLASS_THIS0(0026E060, __thiscall, 59600,  CNoticeQuestProgress, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_26E060
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
	mov dword ptr [esp+0x14],edi
	call CWnd::_ctor_default
	push offset CNoticeQuestProgress::NOTICE_CHANGE::~NOTICE_CHANGE
	push offset CNoticeQuestProgress::NOTICE_CHANGE::_ctor_default
	push 5
	push 0x2C
	lea eax,[edi+0x80]
	xor esi,esi
	push eax
	mov dword ptr [esp+0x6C],esi
	int 3// TODO: 	mov dword ptr [edi],offset CNoticeQuestProgress::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [edi+4],offset CNoticeQuestProgress::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [edi+8],offset CNoticeQuestProgress::`vftable'{for `ZRefCounted'}
	call __eh_vector_ctor_iterator
	mov dword ptr [edi+0x15C],esi
	mov dword ptr [edi+0x160],esi
	push esi
	push 1
	push esi
	push 1
	push 0xA
	push 2
	push 2
	push 1
	push 1
	mov ecx,edi
	mov byte ptr [esp+0x7C],3
	call CWnd::CreateWnd
	mov ebx,0x96
	lea ebp,[edi+0x84]
	lea esp,[esp]

 Block1:
	lea ecx,[esp+0x18]
	push 0x3D2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push ebp
	push eax
	mov byte ptr [esp+0x64],4
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x58],3
	test eax,eax
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block3:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 1
	lea edx,[esp+0x20]
	push edx
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x58],5
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block5

 Block4:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block5:
	mov esi,dword ptr [ebp]
	mov byte ptr [esp+0x58],6
	test esi,esi
	je Block44

 Block6:
	mov edx,dword ptr [esp+0x20]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x58],5
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x58],3
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x40]
	push eax
	call esi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block32

 Block15:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x5C],7
	call esi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block32

 Block16:
	mov esi,dword ptr [ebp]
	mov byte ptr [esp+0x58],8
	test esi,esi
	je Block44

 Block17:
	mov edx,dword ptr [esp+0x40]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x54]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x58]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x5C]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [esp+0x40]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x54]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x58]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x5C]
	push ebx
	push 0
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x90]
	push esi
	call eax
	test eax,eax
	jge Block19

 Block18:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block19:
	mov esi,8
	mov byte ptr [esp+0x58],7
	cmp word ptr [esp+0x30],si
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov byte ptr [esp+0x58],3
	cmp word ptr [esp+0x40],si
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	sub ebx,0x14
	add ebp,0x2C
	cmp ebx,0x32
	jg Block1

 Block28:
	lea edx,[esp+0x1C]
	push 0x5AF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[edi+0x15C]
	push ecx
	push eax
	mov byte ptr [esp+0x64],9
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x58],3
	test eax,eax
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block30:
	lea eax,[esp+0x1C]
	push 0x5B1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x58],0xA
	test eax,eax
	je Block33

 Block31:
	mov ebp,dword ptr [eax]
	jmp Block34

 Block32:
	push eax
	call _com_issue_error

 Block33:
	xor ebp,ebp

 Block34:
	mov ecx,8
	mov word ptr [esp+0x40],cx
	test ebp,ebp
	jne Block36

 Block35:
	xor esi,esi
	jmp Block40

 Block36:
	mov eax,ebp
	lea edx,[eax+2]

 Block37:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block37

 Block38:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea edx,[edi+edi+6]
	push edx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block40

 Block39:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC

 Block40:
	mov dword ptr [esp+0x48],esi
	test esi,esi
	jne Block43

 Block41:
	test ebp,ebp
	je Block43

 Block42:
	push 0x8007000E
	call _com_issue_error

 Block43:
	lea eax,[esp+0x40]
	push eax
	push 0xFFFFC600
	push 0xF
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1A25
	mov bl,0xB
	push ecx
	mov byte ptr [esp+0x70],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x24]
	mov ecx,dword ptr [edi+0x15C]
	mov byte ptr [esp+0x68],0xC
	test ecx,ecx
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	mov byte ptr [esp+0x68],bl
	call IWzFont::Create
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x58],0xA
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block49:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x58],3
	test eax,eax
	je Block57

 Block50:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block57

 Block51:
	test esi,esi
	je Block57

 Block52:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block54

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block54:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block56

 Block55:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block56:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block57:
	lea ecx,[esp+0x1C]
	push 0x5AF
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[edi+0x160]
	push ecx
	push eax
	mov byte ptr [esp+0x64],0xD
	call PcCreate_IWzFont
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x58],3
	test eax,eax
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block59:
	lea edx,[esp+0x1C]
	push 0x5B1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov eax,dword ptr [eax]
	mov bl,0xE
	mov byte ptr [esp+0x58],bl
	test eax,eax
	je Block61

 Block60:
	mov ebp,dword ptr [eax]
	jmp Block62

 Block61:
	xor ebp,ebp

 Block62:
	mov eax,8
	mov word ptr [esp+0x40],ax
	test ebp,ebp
	jne Block64

 Block63:
	xor esi,esi
	jmp Block70

 Block64:
	mov eax,ebp
	lea edx,[eax+2]
	jmp Block66

 Block66:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block66

 Block67:
	sub eax,edx
	sar eax,1
	mov edi,eax
	lea ecx,[edi+edi+6]
	push ecx
	call CoTaskMemAlloc
	mov esi,eax
	test esi,esi
	je Block69

 Block68:
	lea eax,[edi+edi]
	mov dword ptr [esi],eax
	add eax,2
	push eax
	add esi,4
	push ebp
	push esi
	call _memcpy
	add esp,0xC

 Block69:
	mov edi,dword ptr [esp+0x14]

 Block70:
	mov dword ptr [esp+0x48],esi
	test esi,esi
	jne Block73

 Block71:
	test ebp,ebp
	je Block73

 Block72:
	push 0x8007000E
	call _com_issue_error

 Block73:
	lea edx,[esp+0x40]
	push edx
	push 0xFF000000
	push 0xF
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x1A25
	push eax
	mov byte ptr [esp+0x70],0xF
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi+0x160]
	mov byte ptr [esp+0x68],0x10
	test ecx,ecx
	jne Block75

 Block74:
	push 0x80004003
	call _com_issue_error

 Block75:
	mov byte ptr [esp+0x68],0xF
	call IWzFont::Create
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x58],bl
	jne Block78

 Block76:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	mov esi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x58],3
	test esi,esi
	je Block87

 Block80:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block87

 Block81:
	test esi,esi
	je Block87

 Block82:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block84

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block84:
	mov eax,dword ptr [esi+4]
	test eax,eax
	je Block86

 Block85:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block86:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block87:
	mov eax,edi
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
// CNoticeQuestProgress::NOTICE_CHANGE::NOTICE_CHANGE
__SUB_CLASS_THIS0(0026DB00, __thiscall, 59619,  CNoticeQuestProgress::NOTICE_CHANGE, void) {
__asm {

 Block0:
	mov eax,ecx
	xor ecx,ecx
	mov dword ptr [eax],ecx
	mov dword ptr [eax+4],ecx
	xor edx,edx
	mov word ptr [eax+8],dx
	mov dword ptr [eax+0xC],ecx
	mov dword ptr [eax+0x10],ecx
	mov dword ptr [eax+0x14],ecx
	mov dword ptr [eax+0x18],ecx
	mov dword ptr [eax+0x24],ecx
	mov dword ptr [eax+0x28],ecx
	ret
}
}
// CNoticeQuestProgress::Update
__SUB_CLASS_THIS0(0026F6A0, __thiscall, 59602,  CNoticeQuestProgress, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CWnd::Update
	mov ecx,esi
	pop esi
	jmp  CNoticeQuestProgress::NoticeProgressChange
}
}
// CNoticeQuestProgress::~CNoticeQuestProgress
_SUB_EXCEPTION_HANDLER(26DBD0)
__SUB_CLASS_THIS0(0026DBD0, __thiscall, 59602,  CNoticeQuestProgress, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_26DBD0
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
	int 3// TODO: 	mov dword ptr [esi],offset CNoticeQuestProgress::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CNoticeQuestProgress::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CNoticeQuestProgress::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x14],3
	call CWnd::Destroy
	mov eax,dword ptr [esi+0x160]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x15C]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	push offset CNoticeQuestProgress::NOTICE_CHANGE::~NOTICE_CHANGE
	push 5
	push 0x2C
	lea eax,[esi+0x80]
	push eax
	mov byte ptr [esp+0x24],0
	call __eh_vector_dtor_iterator
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
