#include "regen.hpp"
// Field_PartyRaid.ipp
#include "Field_PartyRaid.hpp"

// CField_PartyRaidBoss::Init
_SUB_EXCEPTION_HANDLER(15D270)
__SUB_CLASS_THIS(0015D270, __thiscall, 143303,  CField_PartyRaidBoss, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_15D270
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x5C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x14],edi
	mov dword ptr [esp+0x10],0
	mov eax,dword ptr [esp+0x6C]
	push eax
	call CField::Init
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push ecx
	call esi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[esp+0x1C]
	push eax
	mov dword ptr [esp+0x68],0
	call esi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
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
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x28]
	push eax
	push ecx
	mov dword ptr [esp+0x80],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMGDUA__3
	mov byte ptr [esp+0x7C],1
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0x7C],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xDAC]
	push eax
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
	cmp word ptr [esp+0x4C],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x64],1
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x4C]
	push eax
	call ebx

 Block13:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x64],0
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x1C]
	push edx
	call ebx

 Block17:
	or ebx,0xFFFFFFFF
	cmp word ptr [esp+0x3C],8
	mov dword ptr [esp+0x64],ebx
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea edx,[esp+0x1C]
	push edx
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea ecx,[esp+0x3C]
	push ecx
	mov dword ptr [esp+0x68],4
	call esi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	push 0
	push 0
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x48]
	push ecx
	push ecx
	mov dword ptr [esp+0x80],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMGDUA__2
	mov byte ptr [esp+0x7C],5
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],6
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea edx,[esp+0x60]
	mov byte ptr [esp+0x78],5
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],7
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xDB0]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block30

 Block28:
	cmp eax,0x80004002
	je Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x64],5
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x64],4
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	cmp word ptr [esp+0x1C],8
	mov dword ptr [esp+0x64],ebx
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	lea eax,[esp+0x1C]
	push eax
	call esi
	lea ecx,[esp+0x1C]
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
	lea edx,[esp+0x3C]
	push edx
	mov dword ptr [esp+0x68],8
	call esi
	lea eax,[esp+0x3C]
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
	push 0
	push 0
	lea ecx,[esp+0x24]
	push ecx
	lea edx,[esp+0x48]
	push edx
	push ecx
	mov dword ptr [esp+0x80],esp
	mov ecx,esp
	mov bl,9
	push offset _S_UIUIWINDOWIMGDUA__1
	mov byte ptr [esp+0x7C],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],0xA
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	lea eax,[esp+0x60]
	mov byte ptr [esp+0x78],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],0xB
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xDB8]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block51

 Block49:
	cmp eax,0x80004002
	je Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x64],bl
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov ebx,8
	mov byte ptr [esp+0x64],8
	cmp word ptr [esp+0x3C],bx
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov dword ptr [esp+0x64],0xFFFFFFFF
	cmp word ptr [esp+0x1C],bx
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block63:
	lea ecx,[esp+0x1C]
	push ecx
	call esi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	lea eax,[esp+0x3C]
	mov ebx,0xC
	push eax
	mov dword ptr [esp+0x68],ebx
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	push 0
	push 0
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x48]
	push eax
	push ecx
	mov dword ptr [esp+0x80],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMGDUA
	mov byte ptr [esp+0x7C],0xD
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],0xE
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0x7C],0xD
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],0xF
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xDB4]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block72

 Block70:
	cmp eax,0x80004002
	je Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x64],0xD
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block76:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x64],bl
	jne Block79

 Block77:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	cmp word ptr [esp+0x1C],8
	mov dword ptr [esp+0x64],0xFFFFFFFF
	jne Block83

 Block81:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	lea edx,[esp+0x1C]
	push edx
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	lea ecx,[esp+0x3C]
	mov ebx,0x10
	push ecx
	mov dword ptr [esp+0x68],ebx
	call esi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x64],0x11
	test ecx,ecx
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	lea eax,[esp+0x1C]
	push eax
	lea edx,[esp+0x40]
	push edx
	push 0xC00616FC
	push 0x64
	push 0x320
	push 0x3E
	push 0xFFFFFE70
	lea eax,[esp+0x88]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xDA8]
	cmp esi,eax
	je Block95

 Block91:
	mov dword ptr [edi+0xDA8],eax
	test eax,eax
	je Block93

 Block92:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block93:
	test esi,esi
	je Block95

 Block94:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block95:
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block97

 Block96:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block97:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x64],bl
	jne Block100

 Block98:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block101:
	cmp word ptr [esp+0x1C],8
	mov dword ptr [esp+0x64],0xFFFFFFFF
	jne Block104

 Block102:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block105:
	cmp dword ptr [edi+0xDA8],0
	je Block122

 Block106:
	mov esi,dword ptr [edi+0xDA8]
	test esi,esi
	jne Block108

 Block107:
	push 0x80004003
	call _com_issue_error

 Block108:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block110

 Block109:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block110:
	push 1
	lea ecx,[esp+0x70]
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov ebx,0x12
	mov edx,0xD
	mov dword ptr [esp+0x64],ebx
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block112

 Block111:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block112:
	mov esi,dword ptr [edi+0xDA8]
	mov byte ptr [esp+0x64],0x13
	test esi,esi
	jne Block114

 Block113:
	push 0x80004003
	call _com_issue_error

 Block114:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi]
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
	push esi
	call eax
	test eax,eax
	jge Block116

 Block115:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block116:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x64],bl
	jne Block119

 Block117:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block120:
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x64],0xFFFFFFFF
	test eax,eax
	je Block122

 Block121:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block122:
	push 0x48
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x6C],esi
	mov dword ptr [esp+0x64],0x14
	test esi,esi
	je Block133

 Block123:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x1C]
	push eax
	call edi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block125

 Block124:
	push eax
	call _com_issue_error

 Block125:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x68],0x15
	mov dword ptr [esp+0x14],1
	call edi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block127

 Block126:
	push eax
	call _com_issue_error

 Block127:
	push 0xB
	push 5
	push 0
	push 0
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x50]
	push edx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov ebx,0x16
	push offset _S_UIUIWINDOWIMGPAR__7
	mov dword ptr [esp+0x84],ebx
	mov dword ptr [esp+0x30],3
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov dword ptr [esp+0x80],0x17
	jne Block129

 Block128:
	push 0x80004003
	call _com_issue_error

 Block129:
	lea eax,[esp+0x68]
	mov byte ptr [esp+0x80],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov dword ptr [esp+0x74],0x18
	mov dword ptr [esp+0x20],7
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block132

 Block130:
	cmp eax,0x80004002
	je Block132

 Block131:
	push eax
	call _com_issue_error

 Block132:
	mov ecx,esi
	call CBitmapNumber::_ctor_0
	mov edi,eax
	jmp Block134

 Block133:
	xor edi,edi

 Block134:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x64],0x1B
	test edi,edi
	je Block136

 Block135:
	lea ecx,[edi+4]
	push ecx
	call ebx

 Block136:
	mov eax,dword ptr [esp+0x14]
	mov esi,dword ptr [eax+0xDC8]
	mov dword ptr [eax+0xDC8],edi
	test esi,esi
	je Block139

 Block137:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block139

 Block138:
	push edi
	call ebx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block139:
	mov ebx,dword ptr [esp+0x10]
	mov dword ptr [esp+0x64],0x1A
	test bl,4
	je Block144

 Block140:
	and ebx,0xFFFFFFFB
	cmp word ptr [esp+0x4C],8
	mov dword ptr [esp+0x10],ebx
	jne Block143

 Block141:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block144

 Block142:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block144

 Block143:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block144:
	mov dword ptr [esp+0x64],0x19
	test bl,2
	je Block149

 Block145:
	and ebx,0xFFFFFFFD
	cmp word ptr [esp+0x3C],8
	mov dword ptr [esp+0x10],ebx
	jne Block148

 Block146:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block149

 Block147:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block149

 Block148:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block149:
	mov dword ptr [esp+0x64],0xFFFFFFFF
	test bl,1
	je Block154

 Block150:
	cmp word ptr [esp+0x1C],8
	jne Block153

 Block151:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block154

 Block152:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block154

 Block153:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block154:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x1C]
	push ecx
	call edi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block156

 Block155:
	push eax
	call _com_issue_error

 Block156:
	lea eax,[esp+0x3C]
	push eax
	mov dword ptr [esp+0x68],0x1C
	call edi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block158

 Block157:
	push eax
	call _com_issue_error

 Block158:
	push 0
	push 0
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x48]
	push eax
	push ecx
	mov dword ptr [esp+0x80],esp
	mov ecx,esp
	mov bl,0x1D
	push offset _S_UIUIWINDOWIMGPAR__6
	mov byte ptr [esp+0x7C],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],0x1E
	jne Block160

 Block159:
	push 0x80004003
	call _com_issue_error

 Block160:
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0x7C],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],0x1F
	call Ztl_variant_t::GetUnknown
	mov esi,dword ptr [esp+0x14]
	add esi,0xDC0
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block163

 Block161:
	cmp eax,0x80004002
	je Block163

 Block162:
	push eax
	call _com_issue_error

 Block163:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x64],bl
	jne Block166

 Block164:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block167

 Block165:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block167

 Block166:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block167:
	mov ebx,8
	mov byte ptr [esp+0x64],0x1C
	cmp word ptr [esp+0x3C],bx
	jne Block170

 Block168:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block171

 Block169:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block171

 Block170:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block171:
	mov dword ptr [esp+0x64],0xFFFFFFFF
	cmp word ptr [esp+0x1C],bx
	jne Block174

 Block172:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block175

 Block173:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block175

 Block174:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block175:
	lea edx,[esp+0x1C]
	push edx
	call edi
	lea eax,[esp+0x1C]
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
	lea ecx,[esp+0x3C]
	mov ebx,0x20
	push ecx
	mov dword ptr [esp+0x68],ebx
	call edi
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block179

 Block178:
	push eax
	call _com_issue_error

 Block179:
	mov esi,dword ptr [esi]
	mov byte ptr [esp+0x64],0x21
	test esi,esi
	jne Block181

 Block180:
	push 0x80004003
	call _com_issue_error

 Block181:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x6C]
	push ecx
	push esi
	mov dword ptr [esp+0x74],0
	call edx
	test eax,eax
	jge Block183

 Block182:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block183:
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block185

 Block184:
	push 0x80004003
	call _com_issue_error

 Block185:
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [esp+0x70]
	lea edx,[esp+0x40]
	push edx
	push 0xC00616FC
	push 0x1E
	push eax
	push 0x28
	push 0
	lea edx,[esp+0x2C]
	push edx
	call IWzGr2D::CreateLayer
	mov edi,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xDBC]
	cmp esi,eax
	je Block190

 Block186:
	mov dword ptr [edi+0xDBC],eax
	test eax,eax
	je Block188

 Block187:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block188:
	test esi,esi
	je Block190

 Block189:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block190:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block192

 Block191:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block192:
	mov esi,8
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x3C],si
	jne Block195

 Block193:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block196

 Block194:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block196

 Block195:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block196:
	mov dword ptr [esp+0x64],0xFFFFFFFF
	cmp word ptr [esp+0x1C],si
	jne Block199

 Block197:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block200

 Block198:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block200

 Block199:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block200:
	cmp dword ptr [edi+0xDBC],0
	je Block217

 Block201:
	mov esi,dword ptr [edi+0xDBC]
	test esi,esi
	jne Block203

 Block202:
	push 0x80004003
	call _com_issue_error

 Block203:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block205

 Block204:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block205:
	push 0
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov ebx,0x22
	mov edx,0xD
	mov dword ptr [esp+0x64],ebx
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],eax
	test eax,eax
	je Block207

 Block206:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block207:
	mov esi,dword ptr [edi+0xDBC]
	mov byte ptr [esp+0x64],0x23
	test esi,esi
	jne Block209

 Block208:
	push 0x80004003
	call _com_issue_error

 Block209:
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
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block211

 Block210:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block211:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x64],bl
	jne Block214

 Block212:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block215

 Block213:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block215

 Block214:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block215:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x64],0xFFFFFFFF
	test eax,eax
	je Block217

 Block216:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block217:
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x58
	ret 4
}
}
// CField_PartyRaidBoss::OnPartyValue
_SUB_EXCEPTION_HANDLER(15D070)
__SUB_CLASS_THIS(0015D070, __thiscall, 143305,  CField_PartyRaidBoss, void, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_15D070
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x38]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	lea eax,[esp+0x10]
	push 0x1A58
	push eax
	mov dword ptr [esp+0x48],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x4C]
	call ZXString<char>::op_eq_0
	mov esi,eax
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	test esi,esi
	je Block17

 Block3:
	mov ecx,dword ptr [esp+0x4C]
	push ecx
	call _atoi
	xor edx,edx
	add esp,4
	test eax,eax
	setle dl
	dec edx
	and edx,eax
	cmp dword ptr [edi+0xDBC],0
	mov ebp,edx
	sete al
	test al,al
	jne Block17

 Block4:
	cmp dword ptr [edi+0xDC8],0
	je Block17

 Block5:
	mov eax,3
	mov word ptr [esp+0x18],ax
	mov dword ptr [esp+0x20],0
	mov ecx,dword ptr [edi+0xDBC]
	mov byte ptr [esp+0x40],2
	test ecx,ecx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x14]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x40],4
	jne Block10

 Block8:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block11

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block11

 Block10:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block11:
	mov esi,dword ptr [esp+0x10]
	test esi,esi
	sete al
	test al,al
	je Block14

 Block12:
	mov byte ptr [esp+0x40],1
	test esi,esi
	je Block17

 Block13:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx
	jmp Block17

 Block14:
	push offset _D_VTMISSING
	lea ecx,[esp+0x2C]
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [edi+0xDC0]
	mov byte ptr [esp+0x40],5
	test esi,esi
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea edx,[esp+0x28]
	push edx
	push eax
	push 0
	push 0
	mov ecx,esi
	call IWzCanvas::Copy
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x40],4
	call Ztl_variant_t::~Ztl_variant_t
	push ebp
	push 2
	push 0x45
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x24],esp
	push esi
	call ecx
	mov ecx,dword ptr [edi+0xDC8]
	call CBitmapNumber::Draw
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0x44],1
	call eax

 Block17:
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x40],0
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block21:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x34
	ret 8
}
}
// CField_PartyRaidResult::GetFieldType
__SUB_CLASS_THIS0(0015C800, __thiscall, 143321,  CField_PartyRaidResult, long) {
__asm {

 Block0:
	mov eax,0x1B
	ret
}
}
// CField_PartyRaidBoss::GetFieldType
__SUB_CLASS_THIS0(0015C640, __thiscall, 143302,  CField_PartyRaidBoss, long) {
__asm {

 Block0:
	mov eax,0x1A
	ret
}
}
// CField_PartyRaid::Update
__SUB_CLASS_THIS0(0015C320, __thiscall, 143283,  CField_PartyRaid, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::Update
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test eax,eax
	je Block12

 Block1:
	push ebx
	mov ebx,dword ptr [eax+0x418C]
	push edi
	mov edi,dword ptr [eax+0x4188]
	mov eax,dword ptr [eax+0x4190]
	cmp dword ptr [esi+0xDCC],eax
	je Block3

 Block2:
	mov ecx,esi
	mov dword ptr [esi+0xDCC],eax
	call CField_PartyRaid::_UpdatePoint

 Block3:
	cmp dword ptr [esi+0xDC4],edi
	je Block7

 Block4:
	mov dword ptr [esi+0xDC4],edi
	mov eax,dword ptr [esi+0xDA4]
	test eax,eax
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [eax]
	imul edi,0x17
	mov edx,dword ptr [ecx+0x6C]
	sub edi,0x47
	push edi
	push eax
	call edx
	mov ecx,esi
	call CField_PartyRaid::_UpdatePoint

 Block7:
	cmp dword ptr [esi+0xDC8],ebx
	je Block11

 Block8:
	mov dword ptr [esi+0xDC8],ebx
	mov esi,dword ptr [esi+0xDA8]
	test esi,esi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov eax,dword ptr [esi]
	imul ebx,0x17
	mov ecx,dword ptr [eax+0x6C]
	sub ebx,0x43
	push ebx
	push esi
	call ecx

 Block11:
	pop edi
	pop ebx

 Block12:
	pop esi
	ret
}
}
// CField_PartyRaid::_UpdatePoint
_SUB_EXCEPTION_HANDLER(15C120)
__SUB_CLASS_THIS0(0015C120, __thiscall, 143283,  CField_PartyRaid, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_15C120
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	cmp dword ptr [edi+0xDAC],0
	sete al
	test al,al
	jne Block23

 Block1:
	mov eax,3
	mov word ptr [esp+0x14],ax
	mov dword ptr [esp+0x1C],0
	mov ecx,dword ptr [edi+0xDAC]
	mov dword ptr [esp+0x3C],0
	test ecx,ecx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x10]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x3C],2
	jne Block6

 Block4:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block7

 Block5:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block7

 Block6:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block7:
	mov esi,dword ptr [esp+0xC]
	test esi,esi
	sete al
	test al,al
	je Block10

 Block8:
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test esi,esi
	je Block23

 Block9:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x34
	ret

 Block10:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	mov eax,dword ptr [edi+0xDB0]
	mov byte ptr [esp+0x3C],3
	test esi,esi
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea ecx,[esp+0x24]
	push ecx
	push eax
	push 0
	push 0
	mov ecx,esi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],2
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block18:
	cmp dword ptr [edi+0xDC0],0
	je Block20

 Block19:
	mov eax,dword ptr [edi+0xDCC]
	xor ecx,ecx
	test eax,eax
	setle cl
	dec ecx
	and eax,ecx
	push eax
	push 2
	push 0x45
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x20],esp
	push esi
	call eax
	mov ecx,dword ptr [edi+0xDC0]
	call CBitmapNumber::Draw

 Block20:
	cmp dword ptr [edi+0xDB8],0
	je Block22

 Block21:
	mov eax,dword ptr [edi+0xDC4]
	xor ecx,ecx
	test eax,eax
	setle cl
	dec ecx
	and eax,ecx
	push eax
	push 0x18
	push 0x63
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x20],esp
	push esi
	call eax
	mov ecx,dword ptr [edi+0xDB8]
	call CBitmapNumber::Draw

 Block22:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [esp+0x40],0xFFFFFFFF
	call edx

 Block23:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x34
	ret
}
}
// CField_PartyRaidBoss::OnMakeTimerParam
__SUB_CLASS_THIS(0015C9C0, __thiscall, 143304,  CField_PartyRaidBoss, void, CClock::INITPARAM&, long&, long&) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push offset _S_MAPOBJETCIMGKILL__1
	lea ecx,[esi+0x18]
	call ZXString<char>::AssignCStr
	push offset _S_MAPOBJETCIMGKILL
	lea ecx,[esi+0x14]
	call ZXString<char>::AssignCStr
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [esi+0x1C],0x1A
	mov dword ptr [esi+0x20],0x32
	mov dword ptr [esi+0x24],0x6E
	mov dword ptr [esi+0x28],0x8C
	mov dword ptr [eax],0xFFFFFFA0
	mov dword ptr [ecx],5
	pop esi
	ret 0xC
}
}
// CField_PartyRaidResult::CField_PartyRaidResult
__SUB_CLASS_THIS0(0015C7B0, __thiscall, 143318,  CField_PartyRaidResult, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::_ctor_default
	or eax,0xFFFFFFFF
	mov dword ptr [esi+0xDA0],eax
	mov dword ptr [esi+0xDA4],eax
	mov dword ptr [esi+0xDA8],eax
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CField_PartyRaidResult::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_PartyRaidResult::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_PartyRaidResult::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_PartyRaidResult::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xDB0],eax
	mov dword ptr [esi+0xDB8],eax
	mov eax,esi
	pop esi
	ret
}
}
// CField_PartyRaid::GetFieldType
__SUB_CLASS_THIS0(0015C440, __thiscall, 143284,  CField_PartyRaid, long) {
__asm {

 Block0:
	mov eax,0x19
	ret
}
}
// CField_PartyRaid::OnMakeTimerParam
__SUB_CLASS_THIS(0015C940, __thiscall, 143286,  CField_PartyRaid, void, CClock::INITPARAM&, long&, long&) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push offset _S_MAPOBJETCIMGKILL__1
	lea ecx,[esi+0x18]
	call ZXString<char>::AssignCStr
	push offset _S_MAPOBJETCIMGKILL
	lea ecx,[esi+0x14]
	call ZXString<char>::AssignCStr
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [esi+0x1C],0x1A
	mov dword ptr [esi+0x20],0x32
	mov dword ptr [esi+0x24],0x6E
	mov dword ptr [esi+0x28],0x8C
	mov dword ptr [eax],0xFFFFFFA0
	mov dword ptr [ecx],5
	pop esi
	ret 0xC
}
}
// CField_PartyRaidResult::OnSessionValue
_SUB_EXCEPTION_HANDLER(15E5C0)
__SUB_CLASS_THIS(0015E5C0, __thiscall, 143323,  CField_PartyRaidResult, void, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_15E5C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xF4
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x108]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x18],edi
	lea eax,[esp+0x14]
	push 0x1A58
	push eax
	mov dword ptr [esp+0x118],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x11C]
	call ZXString<char>::op_eq_0
	mov esi,eax
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	test esi,esi
	je Block4

 Block3:
	mov ecx,dword ptr [esp+0x11C]
	push ecx
	call _atoi
	mov dword ptr [edi+0xDA0],eax
	jmp Block12

 Block4:
	lea edx,[esp+0x14]
	push 0x156D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x11C]
	call ZXString<char>::op_eq_0
	mov esi,eax
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	test esi,esi
	je Block8

 Block7:
	mov eax,dword ptr [esp+0x11C]
	push eax
	call _atoi
	mov dword ptr [edi+0xDA4],eax
	jmp Block12

 Block8:
	lea ecx,[esp+0x14]
	push 0x156E
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x11C]
	call ZXString<char>::op_eq_0
	mov esi,eax
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	test esi,esi
	je Block13

 Block11:
	mov edx,dword ptr [esp+0x11C]
	push edx
	call _atoi
	mov dword ptr [edi+0xDA8],eax

 Block12:
	add esp,4

 Block13:
	cmp dword ptr [edi+0xDA0],0
	jl Block122

 Block14:
	cmp dword ptr [edi+0xDA4],0
	jl Block122

 Block15:
	cmp dword ptr [edi+0xDA8],0
	jl Block122

 Block16:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x58]
	push eax
	call esi
	lea ecx,[esp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	lea edx,[esp+0xA8]
	push edx
	mov byte ptr [esp+0x114],2
	call esi
	lea eax,[esp+0xA8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	lea ecx,[esp+0x58]
	push ecx
	lea edx,[esp+0xAC]
	push edx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMGPAR__12
	mov byte ptr [esp+0x120],3
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x11C],4
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea eax,[esp+0xE4]
	mov byte ptr [esp+0x11C],3
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	push eax
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x118],5
	call get_unknown
	add esp,8
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x114],6
	call _x_com_ptr<IWzCanvas>::CreateFromUnknownComPtr
	mov eax,dword ptr [esp+0x44]
	mov ebp,8
	mov byte ptr [esp+0x110],8
	test eax,eax
	je Block24

 Block23:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block24:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x110],9
	cmp word ptr [esp+0xD8],bp
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0xE0]
	xor ecx,ecx
	mov word ptr [esp+0xD8],cx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea edx,[esp+0xD8]
	push edx
	call edi

 Block28:
	mov byte ptr [esp+0x110],0xA
	cmp word ptr [esp+0xA8],bp
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [esp+0xA8],ax
	mov eax,dword ptr [esp+0xB0]
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[esp+0xA8]
	push ecx
	call edi

 Block32:
	mov byte ptr [esp+0x110],0xB
	cmp word ptr [esp+0x58],bp
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea eax,[esp+0x58]
	push eax
	call edi

 Block36:
	lea ecx,[esp+0x88]
	push ecx
	call esi
	lea edx,[esp+0x88]
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
	lea eax,[esp+0x78]
	push eax
	mov byte ptr [esp+0x114],0xC
	call esi
	lea ecx,[esp+0x78]
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
	lea edx,[esp+0x88]
	push edx
	lea eax,[esp+0x7C]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMGPAR__11
	mov byte ptr [esp+0x120],0xD
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x11C],0xE
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	lea ecx,[esp+0xC4]
	push ecx
	mov byte ptr [esp+0x120],0xD
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	push eax
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0x118],0xF
	call get_unknown
	add esp,8
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x114],0x10
	call _x_com_ptr<IWzCanvas>::CreateFromUnknownComPtr
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x110],0x12
	test eax,eax
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block44:
	mov byte ptr [esp+0x110],0x13
	cmp word ptr [esp+0xB8],bp
	jne Block47

 Block45:
	xor eax,eax
	mov word ptr [esp+0xB8],ax
	mov eax,dword ptr [esp+0xC0]
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea ecx,[esp+0xB8]
	push ecx
	call edi

 Block48:
	mov byte ptr [esp+0x110],0x14
	cmp word ptr [esp+0x78],bp
	jne Block51

 Block49:
	mov eax,dword ptr [esp+0x80]
	xor edx,edx
	mov word ptr [esp+0x78],dx
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea eax,[esp+0x78]
	push eax
	call edi

 Block52:
	mov byte ptr [esp+0x110],0x15
	cmp word ptr [esp+0x88],bp
	jne Block55

 Block53:
	mov eax,dword ptr [esp+0x90]
	xor ecx,ecx
	mov word ptr [esp+0x88],cx
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea edx,[esp+0x88]
	push edx
	call edi

 Block56:
	lea eax,[esp+0x68]
	push eax
	call esi
	lea ecx,[esp+0x68]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	lea edx,[esp+0x98]
	push edx
	mov byte ptr [esp+0x114],0x16
	call esi
	lea eax,[esp+0x98]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block60

 Block59:
	push eax
	call _com_issue_error

 Block60:
	lea ecx,[esp+0x68]
	push ecx
	lea edx,[esp+0x9C]
	push edx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,0x17
	push offset _S_UIUIWINDOWIMGPAR__10
	mov byte ptr [esp+0x120],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x11C],0x18
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	lea eax,[esp+0xD4]
	mov byte ptr [esp+0x11C],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0x118],0x19
	call get_unknown
	add esp,8
	push eax
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x114],0x1A
	call _x_com_ptr<IWzCanvas>::CreateFromUnknownComPtr
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x110],0x1C
	test eax,eax
	je Block64

 Block63:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block64:
	mov byte ptr [esp+0x110],0x1D
	cmp word ptr [esp+0xC8],bp
	jne Block67

 Block65:
	mov eax,dword ptr [esp+0xD0]
	xor ecx,ecx
	mov word ptr [esp+0xC8],cx
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea edx,[esp+0xC8]
	push edx
	call edi

 Block68:
	mov byte ptr [esp+0x110],0x1E
	cmp word ptr [esp+0x98],bp
	jne Block71

 Block69:
	xor eax,eax
	mov word ptr [esp+0x98],ax
	mov eax,dword ptr [esp+0xA0]
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea ecx,[esp+0x98]
	push ecx
	call edi

 Block72:
	mov byte ptr [esp+0x110],0x1F
	cmp word ptr [esp+0x68],bp
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea eax,[esp+0x68]
	push eax
	call edi

 Block76:
	mov eax,dword ptr [esp+0x18]
	cmp dword ptr [eax+0xDB0],0
	je Block116

 Block77:
	cmp dword ptr [eax+0xDB8],0
	je Block116

 Block78:
	push offset _D_VTMISSING
	lea ecx,[esp+0xFC]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0xEC]
	mov byte ptr [esp+0x114],0x20
	call Ztl_variant_t::_ctor_1
	mov ebp,dword ptr [esp+0x14]
	mov byte ptr [esp+0x110],0x21
	test ebp,ebp
	jne Block80

 Block79:
	push 0x80004003
	call _com_issue_error

 Block80:
	mov esi,dword ptr [_D_G_GR]
	test esi,esi
	jne Block82

 Block81:
	push 0x80004003
	call _com_issue_error

 Block82:
	lea ecx,[esp+0xF8]
	push ecx
	lea edx,[esp+0xEC]
	push edx
	push 0xC00616FC
	mov ecx,ebp
	call IWzCanvas::Getheight
	push eax
	mov ecx,ebp
	call IWzCanvas::Getwidth
	push eax
	mov ecx,ebp
	call IWzCanvas::Getheight
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	mov ecx,ebp
	call IWzCanvas::Getwidth
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	lea eax,[esp+0x44]
	push eax
	mov ecx,esi
	call IWzGr2D::CreateLayer
	lea ecx,[esp+0xE8]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xF8]
	mov byte ptr [esp+0x110],0x24
	call Ztl_variant_t::~Ztl_variant_t
	mov edi,dword ptr [esp+0x28]
	test edi,edi
	sete al
	test al,al
	je Block90

 Block83:
	mov byte ptr [esp+0x110],0x1F
	test edi,edi
	je Block85

 Block84:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block85:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x110],0x15
	test eax,eax
	je Block87

 Block86:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block87:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x110],0xB
	test eax,eax
	je Block89

 Block88:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block89:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0x114],1
	call ecx
	jmp Block122

 Block90:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 4
	lea edx,[esp+0x20]
	push edx
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x110],0x25
	mov word ptr [esp+0x48],cx
	mov dword ptr [esp+0x50],eax
	test eax,eax
	je Block92

 Block91:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block92:
	mov byte ptr [esp+0x110],0x26
	test edi,edi
	jne Block94

 Block93:
	push 0x80004003
	call _com_issue_error

 Block94:
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,edi
	call IWzVector2D::Putorigin
	lea ecx,[esp+0x48]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x110],0x24
	test eax,eax
	je Block96

 Block95:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block96:
	push 0xFFFFFFFF
	mov ecx,edi
	call IWzGr2DLayer::Putcolor
	mov ecx,3
	mov word ptr [esp+0x48],cx
	mov dword ptr [esp+0x50],0
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x20]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x118],0x27
	call IWzGr2DLayer::Getcanvas
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0x110],0x29
	call Ztl_variant_t::~Ztl_variant_t
	mov esi,dword ptr [esp+0x1C]
	test esi,esi
	sete al
	test al,al
	je Block104

 Block97:
	mov byte ptr [esp+0x110],0x24
	test esi,esi
	je Block99

 Block98:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block99:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0x114],0x1F
	call ecx
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x110],0x15
	test eax,eax
	je Block101

 Block100:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block101:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x110],0xB
	test eax,eax
	je Block103

 Block102:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block103:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0x114],1
	call ecx
	jmp Block122

 Block104:
	push offset _D_VTMISSING
	lea ecx,[esp+0x34]
	call Ztl_variant_t::_ctor_1
	mov byte ptr [esp+0x110],0x2A
	test esi,esi
	jne Block106

 Block105:
	push 0x80004003
	call _com_issue_error

 Block106:
	lea edx,[esp+0x30]
	push edx
	push ebp
	push 0
	push 0
	mov ecx,esi
	call IWzCanvas::Copy
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x110],0x29
	call Ztl_variant_t::~Ztl_variant_t
	mov ebx,dword ptr [esp+0x18]
	add ebx,0x16C
	mov ecx,ebx
	call TSecType<unsigned long>::GetData
	cmp eax,0x37042AEA
	jne Block108

 Block107:
	mov eax,3
	mov word ptr [esp+0x30],ax
	mov dword ptr [esp+0x38],0xFF
	mov edx,dword ptr [esp+0x24]
	lea ecx,[esp+0x30]
	push ecx
	push edx
	push 0x38
	mov byte ptr [esp+0x11C],0x2B
	push 0x50
	jmp Block110

 Block108:
	mov ecx,ebx
	call TSecType<unsigned long>::GetData
	cmp eax,0x37042AF4
	jne Block111

 Block109:
	mov eax,3
	mov word ptr [esp+0x30],ax
	mov dword ptr [esp+0x38],0xFF
	mov edx,dword ptr [esp+0x20]
	lea ecx,[esp+0x30]
	push ecx
	push edx
	push 0x38
	mov byte ptr [esp+0x11C],0x2C
	push 0x43

 Block110:
	mov ecx,esi
	call IWzCanvas::Copy
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x110],0x29
	call Ztl_variant_t::~Ztl_variant_t

 Block111:
	mov ebx,dword ptr [esp+0x18]
	mov eax,dword ptr [ebx+0xDA0]
	push eax
	push 0x85
	push 0x87
	push ecx
	lea edx,[esp+0x2C]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	mov ecx,dword ptr [ebx+0xDB0]
	call CBitmapNumber::Draw
	mov eax,dword ptr [ebx+0xDA4]
	push eax
	push 0x9D
	push 0x87
	push ecx
	lea edx,[esp+0x2C]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	mov ecx,dword ptr [ebx+0xDB0]
	call CBitmapNumber::Draw
	mov eax,dword ptr [ebx+0xDA8]
	push eax
	push 0xC2
	push 0x89
	push ecx
	lea edx,[esp+0x2C]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	mov ecx,dword ptr [ebx+0xDB8]
	call CBitmapNumber::Draw
	push 0x7530
	push ecx
	lea eax,[esp+0x30]
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push eax
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterRepeatAnimation
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0x114],0x24
	call edx
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0x114],0x1F
	call ecx
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x110],0x15
	test eax,eax
	je Block113

 Block112:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block113:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x110],0xB
	test eax,eax
	je Block115

 Block114:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block115:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0x114],1
	call ecx
	jmp Block122

 Block116:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x110],0x15
	test eax,eax
	je Block118

 Block117:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block118:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x110],0xB
	test eax,eax
	je Block120

 Block119:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block120:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x110],1
	test eax,eax
	je Block122

 Block121:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block122:
	mov eax,dword ptr [esp+0x118]
	mov byte ptr [esp+0x110],0
	test eax,eax
	je Block124

 Block123:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block124:
	mov eax,dword ptr [esp+0x11C]
	mov dword ptr [esp+0x110],0xFFFFFFFF
	test eax,eax
	je Block126

 Block125:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block126:
	mov ecx,dword ptr [esp+0x108]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x100
	ret 8
}
}
// CField_PartyRaidResult::~CField_PartyRaidResult
_SUB_EXCEPTION_HANDLER(15C820)
__SUB_CLASS_THIS0(0015C820, __thiscall, 143320,  CField_PartyRaidResult, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_15C820
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
	int 3// TODO: 	mov dword ptr [esi],offset CField_PartyRaidResult::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_PartyRaidResult::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_PartyRaidResult::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_PartyRaidResult::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xDB8]
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x1C],1
	test eax,eax
	je Block5

 Block1:
	add eax,4
	push eax
	call ebp
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0xDB8]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [esi+0xDB8]
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+0xDB8],0

 Block5:
	mov eax,dword ptr [esi+0xDB0]
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block10

 Block6:
	add eax,4
	push eax
	call ebp
	test eax,eax
	jne Block9

 Block7:
	mov eax,dword ptr [esi+0xDB0]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [esi+0xDB0]
	test ecx,ecx
	je Block9

 Block8:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block9:
	mov dword ptr [esi+0xDB0],0

 Block10:
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CField::~CField
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
// CField_PartyRaidResult::Init
_SUB_EXCEPTION_HANDLER(15E0D0)
__SUB_CLASS_THIS(0015E0D0, __thiscall, 143322,  CField_PartyRaidResult, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_15E0D0
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
	mov ebp,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [esp+0x8C]
	push eax
	call CField::Init
	push 0x48
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x8C],esi
	mov dword ptr [esp+0x84],ebx
	cmp esi,ebx
	je Block11

 Block1:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x88],1
	mov dword ptr [esp+0x18],1
	call edi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	push 0xC
	push 6
	push 0
	push 0
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov edi,3
	push offset _S_UIUIWINDOWIMGPAR__9
	mov dword ptr [esp+0xA4],2
	mov dword ptr [esp+0x34],edi
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov dword ptr [esp+0xA0],edi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea ecx,[esp+0x78]
	push ecx
	mov byte ptr [esp+0xA4],2
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ebx,7
	mov ecx,eax
	mov dword ptr [esp+0x94],4
	mov dword ptr [esp+0x24],ebx
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block10

 Block8:
	cmp eax,0x80004002
	je Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov ecx,esi
	call CBitmapNumber::_ctor_0
	mov edi,eax
	jmp Block12

 Block11:
	xor edi,edi

 Block12:
	mov dword ptr [esp+0x84],7
	test edi,edi
	je Block14

 Block13:
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov esi,dword ptr [ebp+0xDB0]
	mov dword ptr [ebp+0xDB0],edi
	test esi,esi
	je Block17

 Block15:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block17

 Block16:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block17:
	mov dword ptr [esp+0x84],6
	mov edi,8
	test bl,4
	je Block22

 Block18:
	and ebx,0xFFFFFFFB
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x5C],di
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov dword ptr [esp+0x84],5
	test bl,2
	je Block27

 Block23:
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x1C],di
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov dword ptr [esp+0x84],0xFFFFFFFF
	test bl,1
	je Block32

 Block28:
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x2C],di
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	push 0x48
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x8C],esi
	mov dword ptr [esp+0x84],edi
	test esi,esi
	je Block43

 Block33:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x4C]
	push eax
	call edi
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	lea edx,[esp+0x3C]
	or ebx,8
	push edx
	mov byte ptr [esp+0x88],9
	mov dword ptr [esp+0x18],ebx
	call edi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	push 0xF
	push 6
	push 0
	push 0
	lea ecx,[esp+0x5C]
	push ecx
	lea edx,[esp+0x50]
	push edx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	or ebx,0x10
	push offset _S_UIUIWINDOWIMGPAR__8
	mov dword ptr [esp+0xA4],0xA
	mov dword ptr [esp+0x34],ebx
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov dword ptr [esp+0xA0],0xB
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea eax,[esp+0x88]
	mov byte ptr [esp+0xA0],0xA
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	or ebx,0x20
	mov ecx,eax
	mov dword ptr [esp+0x94],0xC
	mov dword ptr [esp+0x24],ebx
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block42

 Block40:
	cmp eax,0x80004002
	je Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	mov ecx,esi
	call CBitmapNumber::_ctor_0
	mov edi,eax
	jmp Block44

 Block43:
	xor edi,edi

 Block44:
	mov dword ptr [esp+0x84],0xF
	test edi,edi
	je Block46

 Block45:
	lea ecx,[edi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block46:
	mov esi,dword ptr [ebp+0xDB8]
	mov dword ptr [ebp+0xDB8],edi
	test esi,esi
	je Block49

 Block47:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block49

 Block48:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block49:
	mov dword ptr [esp+0x84],0xE
	mov esi,8
	test bl,0x20
	je Block54

 Block50:
	and ebx,0xFFFFFFDF
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x6C],si
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x74]
	xor ecx,ecx
	mov word ptr [esp+0x6C],cx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[esp+0x6C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov dword ptr [esp+0x84],0xD
	test bl,0x10
	je Block59

 Block55:
	and ebx,0xFFFFFFEF
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x3C],si
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov dword ptr [esp+0x84],0xFFFFFFFF
	test bl,8
	je Block64

 Block60:
	cmp word ptr [esp+0x4C],si
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov ecx,dword ptr [esp+0x7C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x74
	ret 4
}
}
// CField_PartyRaidBoss::~CField_PartyRaidBoss
_SUB_EXCEPTION_HANDLER(15C660)
__SUB_CLASS_THIS0(0015C660, __thiscall, 143301,  CField_PartyRaidBoss, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_15C660
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
	int 3// TODO: 	mov dword ptr [esi],offset CField_PartyRaidBoss::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_PartyRaidBoss::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_PartyRaidBoss::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_PartyRaidBoss::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xDC8]
	mov dword ptr [esp+0x14],7
	test eax,eax
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0xDC8]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0xDC8]
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+0xDC8],0

 Block5:
	mov eax,dword ptr [esi+0xDC0]
	mov byte ptr [esp+0x14],6
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov eax,dword ptr [esi+0xDBC]
	mov byte ptr [esp+0x14],5
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov eax,dword ptr [esi+0xDB8]
	mov byte ptr [esp+0x14],4
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov eax,dword ptr [esi+0xDB4]
	mov byte ptr [esp+0x14],3
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov eax,dword ptr [esi+0xDB0]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	mov eax,dword ptr [esi+0xDAC]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	mov eax,dword ptr [esi+0xDA8]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CField::~CField
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CField_PartyRaid::CField_PartyRaid
__SUB_CLASS_THIS0(0015C3D0, __thiscall, 143281,  CField_PartyRaid, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::_ctor_default
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CField_PartyRaid::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_PartyRaid::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_PartyRaid::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_PartyRaid::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xDA0],eax
	mov dword ptr [esi+0xDA4],eax
	mov dword ptr [esi+0xDA8],eax
	mov dword ptr [esi+0xDAC],eax
	mov dword ptr [esi+0xDB0],eax
	mov dword ptr [esi+0xDB8],eax
	mov dword ptr [esi+0xDC0],eax
	mov ecx,1
	mov dword ptr [esi+0xDCC],eax
	mov dword ptr [esi+0xDC4],ecx
	mov dword ptr [esi+0xDC8],ecx
	mov eax,esi
	pop esi
	ret
}
}
// CField_PartyRaidBoss::CField_PartyRaidBoss
__SUB_CLASS_THIS0(0015C5D0, __thiscall, 143299,  CField_PartyRaidBoss, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::_ctor_default
	xor eax,eax
	mov dword ptr [esi+0xDA0],eax
	mov dword ptr [esi+0xDA4],eax
	int 3// TODO: 	mov dword ptr [esi],offset CField_PartyRaidBoss::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_PartyRaidBoss::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_PartyRaidBoss::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_PartyRaidBoss::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xDA8],eax
	mov dword ptr [esi+0xDAC],eax
	mov dword ptr [esi+0xDB0],eax
	mov dword ptr [esi+0xDB4],eax
	mov dword ptr [esi+0xDB8],eax
	mov dword ptr [esi+0xDBC],eax
	mov dword ptr [esi+0xDC0],eax
	mov dword ptr [esi+0xDC8],eax
	mov eax,esi
	pop esi
	ret
}
}
// CField_PartyRaidBoss::OnFieldSetVariable
_SUB_EXCEPTION_HANDLER(15CA40)
__SUB_CLASS_THIS(0015CA40, __thiscall, 143305,  CField_PartyRaidBoss, void, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_15CA40
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
	mov ebp,ecx
	mov dword ptr [esp+0x18],0
	lea eax,[esp+0x20]
	push 0x1ACE
	mov esi,1
	push eax
	mov dword ptr [esp+0x58],esi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,esi
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x54],2
	mov dword ptr [esp+0x1C],ebx
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block2

 Block1:
	lea ecx,[esp+0x1C]
	push 0x1AA3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x5C]
	lea ebx,[esi+2]
	call ZXString<char>::op_eq_0
	mov byte ptr [esp+0x17],0
	test eax,eax
	je Block3

 Block2:
	mov byte ptr [esp+0x17],1

 Block3:
	test bl,2
	je Block6

 Block4:
	mov eax,dword ptr [esp+0x1C]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x18],ebx
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov dword ptr [esp+0x50],esi
	test bl,1
	je Block9

 Block7:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	cmp byte ptr [esp+0x17],0
	je Block72

 Block10:
	lea edx,[esp+0x20]
	push 0x1ACE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x5C]
	call ZXString<char>::op_eq_0
	mov esi,eax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	test esi,esi
	je Block14

 Block13:
	mov eax,dword ptr [esp+0x5C]
	push eax
	call _atoi
	mov dword ptr [ebp+0xDA0],eax
	jmp Block18

 Block14:
	lea ecx,[esp+0x20]
	push 0x1AA3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x5C]
	call ZXString<char>::op_eq_0
	mov esi,eax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	test esi,esi
	je Block19

 Block17:
	mov edx,dword ptr [esp+0x5C]
	push edx
	call _atoi
	mov dword ptr [ebp+0xDA4],eax

 Block18:
	add esp,4

 Block19:
	push 0x9402C5
	call CMobTemplate::GetMobTemplate
	mov ecx,dword ptr [eax+0x84]
	push ecx
	add eax,0x7C
	push eax
	call _ZtlSecureFuseHelper<long>::call
	cdq
	sub eax,edx
	mov ecx,eax
	sar ecx,1
	xor edx,edx
	add esp,0xC
	mov eax,ecx
	sub eax,dword ptr [ebp+0xDA0]
	test eax,eax
	setle dl
	dec edx
	and edx,eax
	mov esi,edx
	xor edx,edx
	mov eax,ecx
	sub eax,dword ptr [ebp+0xDA4]
	test eax,eax
	setle dl
	dec edx
	and edx,eax
	mov eax,esi
	imul eax,0x142
	mov edi,edx
	cdq
	idiv ecx
	mov ebx,eax
	mov eax,edi
	imul eax,0x142
	cdq
	idiv ecx
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x1C],eax
	test esi,esi
	jle Block22

 Block20:
	test ebx,ebx
	jne Block22

 Block21:
	mov dword ptr [esp+0x18],1

 Block22:
	test edi,edi
	jle Block25

 Block23:
	test eax,eax
	jne Block25

 Block24:
	mov dword ptr [esp+0x1C],1

 Block25:
	cmp dword ptr [ebp+0xDA8],0
	sete al
	test al,al
	jne Block72

 Block26:
	mov eax,3
	mov word ptr [esp+0x38],ax
	mov dword ptr [esp+0x40],0
	mov ecx,dword ptr [ebp+0xDA8]
	mov byte ptr [esp+0x50],al
	test ecx,ecx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x24]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov edi,8
	mov byte ptr [esp+0x50],5
	cmp word ptr [esp+0x38],di
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov esi,dword ptr [esp+0x20]
	test esi,esi
	sete al
	test al,al
	je Block35

 Block33:
	mov byte ptr [esp+0x50],1
	test esi,esi
	je Block72

 Block34:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx
	jmp Block72

 Block35:
	test esi,esi
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	push 0xFFFFFF
	mov ecx,esi
	call IWzCanvas::Getheight
	push eax
	mov ecx,esi
	call IWzCanvas::Getwidth
	push eax
	push 0
	push 0
	mov ecx,esi
	call IWzCanvas::DrawRectangle
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],0xFF
	mov eax,dword ptr [ebp+0xDAC]
	lea ecx,[esp+0x28]
	push ecx
	push eax
	push 0
	push 0x36
	mov ecx,esi
	mov byte ptr [esp+0x60],6
	call IWzCanvas::Copy
	mov byte ptr [esp+0x50],5
	cmp word ptr [esp+0x28],di
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov ebx,0x142
	sub ebx,dword ptr [esp+0x18]
	xor edi,edi
	test ebx,ebx
	jle Block48

 Block42:
	lea ecx,[ecx]

 Block43:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],0xFF
	mov eax,dword ptr [ebp+0xDB8]
	lea edx,[esp+0x28]
	push edx
	push eax
	push 0x10
	lea eax,[edi+0x36]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x60],7
	call IWzCanvas::Copy
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x50],5
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	inc edi
	cmp edi,ebx
	jl Block43

 Block48:
	mov eax,0x142
	sub eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x18],0
	mov dword ptr [esp+0x24],eax
	test eax,eax
	jle Block59

 Block49:
	mov eax,3
	mov word ptr [esp+0x28],ax
	mov dword ptr [esp+0x30],0xFF
	mov edi,dword ptr [ebp+0xDAC]
	mov ebx,dword ptr [ebp+0xDB8]
	mov byte ptr [esp+0x50],8
	test edi,edi
	je Block27

 Block50:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x1C]
	push edx
	push edi
	mov dword ptr [esp+0x24],0
	call eax
	test eax,eax
	jge Block52

 Block51:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block52:
	mov edx,dword ptr [esp+0x28]
	mov edi,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x2C]
	push ebx
	sub eax,edi
	push 0x10
	add eax,0x35
	push eax
	push esi
	call ecx
	test eax,eax
	jge Block54

 Block53:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block54:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x50],5
	jne Block57

 Block55:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block58:
	inc edi
	cmp edi,dword ptr [esp+0x24]
	mov dword ptr [esp+0x18],edi
	jl Block49

 Block59:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov ecx,0xFF
	mov dword ptr [esp+0x30],ecx
	mov edx,dword ptr [ebp+0xDB0]
	mov ebx,dword ptr [esp+0x28]
	mov edi,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x3C]
	push edx
	mov edx,dword ptr [edi+0x80]
	push 7
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x4C]
	push 0
	push esi
	mov byte ptr [esp+0x70],9
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block61

 Block60:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block61:
	mov edi,8
	mov byte ptr [esp+0x50],5
	cmp word ptr [esp+0x28],di
	jne Block64

 Block62:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],ecx
	mov ebx,dword ptr [esp+0x28]
	mov ebp,dword ptr [ebp+0xDB4]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x3C]
	push ebp
	push 9
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x4C]
	push 0x17E
	push esi
	mov byte ptr [esp+0x70],0xA
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block67

 Block66:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block67:
	mov byte ptr [esp+0x50],5
	cmp word ptr [esp+0x28],di
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0x54],1
	call eax

 Block72:
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x50],0
	test eax,eax
	je Block74

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block74:
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test eax,eax
	je Block76

 Block75:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block76:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 8
}
}
// CField_PartyRaid::Init
_SUB_EXCEPTION_HANDLER(15F110)
__SUB_CLASS_THIS(0015F110, __thiscall, 143285,  CField_PartyRaid, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_15F110
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x64
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x78]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x18],ebp
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [esp+0x88]
	push eax
	call CField::Init
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [esp+0x88],ecx
	push 0x48
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x20],esi
	mov edi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esp+0x80],ebx
	cmp esi,ebx
	je Block11

 Block1:
	lea edx,[esp+0x38]
	push edx
	call edi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0x84],1
	mov dword ptr [esp+0x18],1
	call edi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	push 0xC
	push 1
	push 0
	push 0
	lea eax,[esp+0x48]
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	mov edi,3
	push offset _S_UIUIWINDOWIMGPAR__15
	mov dword ptr [esp+0xA0],2
	mov dword ptr [esp+0x34],edi
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov dword ptr [esp+0x9C],edi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea edx,[esp+0x84]
	mov byte ptr [esp+0x9C],2
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ebx,7
	mov ecx,eax
	mov dword ptr [esp+0x90],4
	mov dword ptr [esp+0x24],ebx
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block10

 Block8:
	cmp eax,0x80004002
	je Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov ecx,esi
	call CBitmapNumber::_ctor_0
	mov edi,eax
	jmp Block12

 Block11:
	xor edi,edi

 Block12:
	mov dword ptr [esp+0x80],7
	test edi,edi
	je Block14

 Block13:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov esi,dword ptr [ebp+0xDB8]
	mov dword ptr [ebp+0xDB8],edi
	test esi,esi
	je Block17

 Block15:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block17

 Block16:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block17:
	mov dword ptr [esp+0x80],6
	test bl,4
	je Block22

 Block18:
	and ebx,0xFFFFFFFB
	cmp word ptr [esp+0x68],8
	mov dword ptr [esp+0x14],ebx
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x70]
	xor ecx,ecx
	mov word ptr [esp+0x68],cx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[esp+0x68]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov dword ptr [esp+0x80],5
	mov edi,8
	test bl,2
	je Block27

 Block23:
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x28],di
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test bl,1
	je Block32

 Block28:
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x38],di
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block32:
	push 0x48
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x20],esi
	mov dword ptr [esp+0x80],edi
	test esi,esi
	je Block43

 Block33:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push ecx
	call edi
	lea edx,[esp+0x28]
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
	lea eax,[esp+0x38]
	or ebx,8
	push eax
	mov byte ptr [esp+0x84],9
	mov dword ptr [esp+0x18],ebx
	call edi
	lea ecx,[esp+0x38]
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
	push 0xB
	push 5
	push 0
	push 0
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x4C]
	push eax
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	or ebx,0x10
	push offset _S_UIUIWINDOWIMGPAR__7
	mov dword ptr [esp+0xA0],0xA
	mov dword ptr [esp+0x34],ebx
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov dword ptr [esp+0x9C],0xB
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea ecx,[esp+0x84]
	push ecx
	mov byte ptr [esp+0xA0],0xA
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	or ebx,0x20
	mov ecx,eax
	mov dword ptr [esp+0x90],0xC
	mov dword ptr [esp+0x24],ebx
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block42

 Block40:
	cmp eax,0x80004002
	je Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	mov ecx,esi
	call CBitmapNumber::_ctor_0
	mov edi,eax
	jmp Block44

 Block43:
	xor edi,edi

 Block44:
	mov dword ptr [esp+0x80],0xF
	test edi,edi
	je Block46

 Block45:
	lea edx,[edi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block46:
	mov esi,dword ptr [ebp+0xDC0]
	mov dword ptr [ebp+0xDC0],edi
	test esi,esi
	je Block49

 Block47:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block49

 Block48:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block49:
	mov dword ptr [esp+0x80],0xE
	mov esi,8
	test bl,0x20
	je Block54

 Block50:
	and ebx,0xFFFFFFDF
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x68],si
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov dword ptr [esp+0x80],0xD
	test bl,0x10
	je Block59

 Block55:
	and ebx,0xFFFFFFEF
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x38],si
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test bl,8
	je Block64

 Block60:
	cmp word ptr [esp+0x28],si
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov eax,dword ptr [esp+0x88]
	cmp dword ptr [eax+0x4184],0
	mov edx,offset _S_UIUIWINDOWIMGPAR__14
	je Block66

 Block65:
	mov edx,offset _S_UIUIWINDOWIMGPAR__13

 Block66:
	mov dword ptr [esp+0x88],0
	test edx,edx
	je Block70

 Block67:
	mov eax,edx
	lea esi,[eax+2]

 Block68:
	mov cx,word ptr [eax]
	add eax,2
	test cx,cx
	jne Block68

 Block69:
	sub eax,esi
	sar eax,1
	mov esi,eax
	lea ecx,[esi+esi]
	push ecx
	push edx
	push 0
	push esi
	lea ecx,[esp+0x98]
	call ZXString16::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x8C]
	call ZXString16::ReleaseBuffer

 Block70:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push edx
	mov dword ptr [esp+0x84],0x10
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x84],0x11
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block74

 Block73:
	push eax
	call _com_issue_error

 Block74:
	push 0
	push 0
	lea eax,[esp+0x30]
	push eax
	lea ecx,[esp+0x44]
	push ecx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,0x12
	push offset _S_UIUIWINDOWIMGPAR__6
	mov byte ptr [esp+0x98],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],0x13
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	lea edx,[esp+0x7C]
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0x14
	call Ztl_variant_t::GetUnknown
	mov ebp,dword ptr [esp+0x18]
	add ebp,0xDB0
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block79

 Block77:
	cmp eax,0x80004002
	je Block79

 Block78:
	push eax
	call _com_issue_error

 Block79:
	mov esi,8
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x68],si
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	mov byte ptr [esp+0x80],0x11
	cmp word ptr [esp+0x38],si
	jne Block86

 Block84:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block87:
	mov byte ptr [esp+0x80],0x10
	cmp word ptr [esp+0x28],si
	jne Block90

 Block88:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block91:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push eax
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block93

 Block92:
	push eax
	call _com_issue_error

 Block93:
	lea edx,[esp+0x38]
	mov bl,0x15
	push edx
	mov byte ptr [esp+0x84],bl
	call esi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block95

 Block94:
	push eax
	call _com_issue_error

 Block95:
	mov esi,dword ptr [ebp]
	mov byte ptr [esp+0x80],0x16
	test esi,esi
	jne Block97

 Block96:
	push 0x80004003
	call _com_issue_error

 Block97:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block99

 Block98:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block99:
	mov esi,dword ptr [ebp]
	mov edi,dword ptr [esp+0x14]
	test esi,esi
	jne Block101

 Block100:
	push 0x80004003
	call _com_issue_error

 Block101:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x1C]
	push edx
	push esi
	mov dword ptr [esp+0x24],0
	call eax
	test eax,eax
	jge Block103

 Block102:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block103:
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block105

 Block104:
	push 0x80004003
	call _com_issue_error

 Block105:
	lea edx,[esp+0x28]
	push edx
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x3C]
	push eax
	push 0xC00616FC
	push edi
	push edx
	push 0x28
	push 0
	lea eax,[esp+0x3C]
	push eax
	call IWzGr2D::CreateLayer
	mov edi,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xDAC]
	cmp esi,eax
	je Block110

 Block106:
	mov dword ptr [edi+0xDAC],eax
	test eax,eax
	je Block108

 Block107:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block108:
	test esi,esi
	je Block110

 Block109:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block110:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block112

 Block111:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block112:
	mov ebp,8
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x38],bp
	jne Block115

 Block113:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block116:
	mov byte ptr [esp+0x80],0x10
	cmp word ptr [esp+0x28],bp
	jne Block119

 Block117:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block120:
	cmp dword ptr [edi+0xDAC],0
	je Block138

 Block121:
	mov esi,dword ptr [edi+0xDAC]
	test esi,esi
	jne Block123

 Block122:
	push 0x80004003
	call _com_issue_error

 Block123:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block125

 Block124:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block125:
	push 0
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov bl,0x17
	mov edx,0xD
	mov byte ptr [esp+0x80],bl
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],eax
	test eax,eax
	je Block127

 Block126:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block127:
	mov esi,dword ptr [edi+0xDAC]
	mov byte ptr [esp+0x80],0x18
	test esi,esi
	jne Block129

 Block128:
	push 0x80004003
	call _com_issue_error

 Block129:
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
	test eax,eax
	jge Block131

 Block130:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block131:
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x28],bp
	jne Block134

 Block132:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block135:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x80],0x10
	test eax,eax
	je Block137

 Block136:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block137:
	mov ecx,edi
	call CField_PartyRaid::_UpdatePoint

 Block138:
	push 0
	push 0xFF
	push 0xC00616FC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [eax],0
	push 0x46
	push 0xFFFFFF89
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 1
	push eax
	mov byte ptr [esp+0xA4],0x19
	call CWndMan::GetOrgWindow
	push offset _S_BACKGRD
	lea ecx,[esp+0x3C]
	push ecx
	lea ecx,[esp+0xAC]
	mov byte ptr [esp+0xA4],0x1A
	call ZXString16::op_add_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x9C],0x1B
	push 0
	push eax
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0xA8],0x1C
	call CAnimationDisplayer::LoadSingleLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xDA0]
	add esp,0x28
	cmp esi,eax
	je Block143

 Block139:
	mov dword ptr [edi+0xDA0],eax
	test eax,eax
	je Block141

 Block140:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block141:
	test esi,esi
	je Block143

 Block142:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block143:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block145

 Block144:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block145:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x80],0x10
	test eax,eax
	je Block147

 Block146:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block147:
	push 0
	push 0xFF
	push 0xC00616FC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [eax],0
	push 0x58
	push 0xFFFFFFD9
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 1
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov byte ptr [esp+0xA4],0x1D
	call CWndMan::GetOrgWindow
	push offset _S_EFFMINE
	lea edx,[esp+0x3C]
	push edx
	lea ecx,[esp+0xAC]
	mov byte ptr [esp+0xA4],0x1E
	call ZXString16::op_add_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x9C],0x1F
	push 0
	push eax
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0xA8],0x20
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xDA4]
	add esp,0x28
	cmp esi,eax
	je Block152

 Block148:
	mov dword ptr [edi+0xDA4],eax
	test eax,eax
	je Block150

 Block149:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block150:
	test esi,esi
	je Block152

 Block151:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block152:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block154

 Block153:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block154:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x80],0x10
	test eax,eax
	je Block156

 Block155:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block156:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block158

 Block157:
	push eax
	call _com_issue_error

 Block158:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	mov bl,0x21
	push eax
	mov byte ptr [esp+0x84],bl
	call ebp
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block160

 Block159:
	push eax
	call _com_issue_error

 Block160:
	mov edi,dword ptr [esp+0x18]
	mov ecx,dword ptr [edi+0xDA4]
	mov byte ptr [esp+0x80],0x22
	test ecx,ecx
	jne Block162

 Block161:
	push 0x80004003
	call _com_issue_error

 Block162:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x38],si
	jne Block165

 Block163:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block166

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block166

 Block165:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block166:
	mov byte ptr [esp+0x80],0x10
	cmp word ptr [esp+0x28],si
	jne Block169

 Block167:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block170

 Block168:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block170

 Block169:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block170:
	push 0
	push 0xFF
	push 0xC00616FC
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [eax],0
	push 0x6E
	push 0xFFFFFFD9
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov edx,esp
	mov dword ptr [esp+0x34],esp
	push 1
	push edx
	mov byte ptr [esp+0xA4],0x23
	call CWndMan::GetOrgWindow
	push offset _S_EFFOTHER
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0xAC]
	mov byte ptr [esp+0xA4],0x24
	call ZXString16::op_add_0
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x9C],0x25
	push 0
	push eax
	lea ecx,[esp+0x44]
	push ecx
	mov byte ptr [esp+0xA8],0x26
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xDA8]
	add esp,0x28
	cmp esi,eax
	je Block175

 Block171:
	mov dword ptr [edi+0xDA8],eax
	test eax,eax
	je Block173

 Block172:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block173:
	test esi,esi
	je Block175

 Block174:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block175:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block177

 Block176:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block177:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x80],0x10
	test eax,eax
	je Block179

 Block178:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block179:
	lea eax,[esp+0x58]
	push eax
	call ebp
	lea ecx,[esp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block181

 Block180:
	push eax
	call _com_issue_error

 Block181:
	lea edx,[esp+0x48]
	mov bl,0x27
	push edx
	mov byte ptr [esp+0x84],bl
	call ebp
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block183

 Block182:
	push eax
	call _com_issue_error

 Block183:
	mov ecx,dword ptr [edi+0xDA8]
	mov byte ptr [esp+0x80],0x28
	test ecx,ecx
	jne Block185

 Block184:
	push 0x80004003
	call _com_issue_error

 Block185:
	lea edx,[esp+0x58]
	push edx
	lea eax,[esp+0x4C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x48],si
	jne Block188

 Block186:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block189

 Block187:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block189

 Block188:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block189:
	mov byte ptr [esp+0x80],0x10
	cmp word ptr [esp+0x58],si
	jne Block192

 Block190:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	test eax,eax
	je Block193

 Block191:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block193

 Block192:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block193:
	mov eax,dword ptr [esp+0x88]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test eax,eax
	je Block195

 Block194:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block195:
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret 4
}
}
// CField_PartyRaid::~CField_PartyRaid
_SUB_EXCEPTION_HANDLER(15C460)
__SUB_CLASS_THIS0(0015C460, __thiscall, 143283,  CField_PartyRaid, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_15C460
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
	int 3// TODO: 	mov dword ptr [esi],offset CField_PartyRaid::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_PartyRaid::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_PartyRaid::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_PartyRaid::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xDC0]
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x1C],6
	test eax,eax
	je Block5

 Block1:
	add eax,4
	push eax
	call ebp
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0xDC0]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [esi+0xDC0]
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+0xDC0],0

 Block5:
	mov eax,dword ptr [esi+0xDB8]
	mov byte ptr [esp+0x1C],5
	test eax,eax
	je Block10

 Block6:
	add eax,4
	push eax
	call ebp
	test eax,eax
	jne Block9

 Block7:
	mov eax,dword ptr [esi+0xDB8]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [esi+0xDB8]
	test ecx,ecx
	je Block9

 Block8:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block9:
	mov dword ptr [esi+0xDB8],0

 Block10:
	mov eax,dword ptr [esi+0xDB0]
	mov byte ptr [esp+0x1C],4
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esi+0xDAC]
	mov byte ptr [esp+0x1C],3
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov eax,dword ptr [esi+0xDA8]
	mov byte ptr [esp+0x1C],2
	test eax,eax
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov eax,dword ptr [esi+0xDA4]
	mov byte ptr [esp+0x1C],1
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov eax,dword ptr [esi+0xDA0]
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CField::~CField
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
