#include "regen.hpp"
// StoreBankDlg.ipp
#include "StoreBankDlg.hpp"

// CStoreBankDlg::DrawMoney
_SUB_EXCEPTION_HANDLER(344770)
__SUB_CLASS_THIS(00344770, __thiscall, 88793,  CStoreBankDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_344770
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
	mov dword ptr [esp+0x3C],0
	mov dword ptr [esp+0xC],0
	mov eax,dword ptr [esp+0x48]
	push 1
	push eax
	lea ecx,[esp+0x14]
	push ecx
	mov byte ptr [esp+0x48],1
	call format_integer
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[esp+0x14]
	push edx
	call esi
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	mov edx,dword ptr [esp+0xC]
	lea ecx,[esp+0x14]
	push ecx
	push ecx
	mov dword ptr [esp+0x18],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x48],2
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x50]
	push 0x37
	push eax
	mov byte ptr [esp+0x4C],3
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x44],4
	test ecx,ecx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov byte ptr [esp+0x44],5
	call IWzFont::CalcTextWidth
	mov edi,dword ptr [esp+0x4C]
	sub edi,eax
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],2
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x3C],1
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	lea edx,[esp+0x24]
	push edx
	call esi
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
	lea ecx,[esp+0x14]
	push ecx
	mov byte ptr [esp+0x40],6
	call esi
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x50]
	push 0x38
	push edx
	mov byte ptr [esp+0x4C],7
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x18]
	push ecx
	mov dword ptr [esp+0x5C],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x50],8
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0x4C],9
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	push 0x130
	push edi
	mov byte ptr [esp+0x54],8
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x3C],7
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov esi,8
	mov byte ptr [esp+0x3C],6
	cmp word ptr [esp+0x14],si
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov byte ptr [esp+0x3C],1
	cmp word ptr [esp+0x24],si
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x3C],0
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block30:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x34
	ret 0xC
}
}
// CStoreBankDlg::RemoveAll
__SUB_CLASS_THIS0(00345530, __thiscall, 88783,  CStoreBankDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea ecx,[esi+0xA8]
	call ZArray<CStoreBankDlg::ITEM>::RemoveAll
	mov dword ptr [esi+0xBC],0
	pop esi
	ret
}
}
// CStoreBankDlg::OnCreate
_SUB_EXCEPTION_HANDLER(344C00)
__SUB_CLASS_THIS(00344C00, __thiscall, 88786,  CStoreBankDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_344C00
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
	mov edi,ecx
	push 0
	push 0
	lea esi,[edi+0xCC]
	push edi
	mov ecx,esi
	call CLayoutMan::Init
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x18]
	push eax
	call ebx
	lea ecx,[esp+0x18]
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
	lea edx,[esp+0x28]
	push edx
	mov dword ptr [esp+0x84],0
	call ebx
	lea eax,[esp+0x28]
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
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x34]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x19AC
	push eax
	mov byte ptr [esp+0x9C],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x6C]
	push ecx
	mov byte ptr [esp+0x98],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xB4]
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
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov ebp,8
	mov byte ptr [esp+0x80],1
	cmp word ptr [esp+0x58],bp
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x58]
	push eax
	call ebx

 Block13:
	mov byte ptr [esp+0x80],0
	cmp word ptr [esp+0x28],bp
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x28]
	push edx
	call ebx

 Block17:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x18],bp
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x18]
	push ecx
	call ebx

 Block21:
	lea edx,[esp+0x14]
	push 0x19AD
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 0
	push 2
	push eax
	lea eax,[esp+0x2C]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x98],4
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x1C],0
	je Block23

 Block22:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x1C],0

 Block23:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	lea ecx,[esp+0x14]
	push 0x199F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 0
	push 0x3E8
	push eax
	lea edx,[esp+0x2C]
	mov ebx,5
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x98],ebx
	call CLayoutMan::AddButton
	mov eax,dword ptr [eax+4]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x80],6
	test eax,eax
	je Block37

 Block26:
	add eax,8
	je Block37

 Block27:
	lea esi,[eax-8]
	test esi,esi
	je Block29

 Block28:
	lea eax,[esi+0xC]
	push eax
	call ebp

 Block29:
	mov eax,dword ptr [edi+0x98]
	mov dword ptr [edi+0x98],esi
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	je Block31

 Block30:
	push 0
	lea ecx,[esp+0x2C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block31:
	cmp dword ptr [esp+0x1C],0
	mov byte ptr [esp+0x80],bl
	je Block33

 Block32:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [esp+0x1C],0

 Block33:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block35:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x80],7
	test eax,eax
	je Block38

 Block36:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block39

 Block37:
	xor esi,esi
	jmp Block29

 Block38:
	xor eax,eax

 Block39:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test eax,eax
	je Block54

 Block40:
	add eax,8
	je Block54

 Block41:
	lea esi,[eax-8]
	test esi,esi
	je Block43

 Block42:
	lea ecx,[esi+0xC]
	push ecx
	call ebp

 Block43:
	mov eax,dword ptr [edi+0xA0]
	mov dword ptr [edi+0xA0],esi
	mov dword ptr [esp+0x2C],eax
	test eax,eax
	je Block45

 Block44:
	push 0
	lea ecx,[esp+0x2C]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block45:
	mov ecx,dword ptr [edi+0xA0]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0xCB
	push 0x5D
	push 0xBE
	push 8
	push 1
	push 0x3E9
	push edi
	call eax
	mov eax,dword ptr [edi+0xA0]
	lea ecx,[esp+0x14]
	push 0x31
	push ecx
	mov dword ptr [eax+0x34],0xB4
	call get_basic_font
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xAC]
	add esp,8
	cmp esi,eax
	je Block50

 Block46:
	mov dword ptr [edi+0xAC],eax
	test eax,eax
	je Block48

 Block47:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block48:
	test esi,esi
	je Block50

 Block49:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block50:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block52:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x18]
	push eax
	call esi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block55

 Block53:
	push eax
	call _com_issue_error

 Block54:
	xor esi,esi
	jmp Block43

 Block55:
	lea edx,[esp+0x28]
	push edx
	mov dword ptr [esp+0x84],8
	call esi
	lea eax,[esp+0x28]
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
	push 0
	push 0
	lea ecx,[esp+0x20]
	push ecx
	lea edx,[esp+0x34]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x50E
	mov bl,9
	push eax
	mov byte ptr [esp+0x9C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],0xA
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	lea ecx,[esp+0x6C]
	push ecx
	mov byte ptr [esp+0x98],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0xB
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xB0]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block62

 Block60:
	cmp eax,0x80004002
	je Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	mov esi,8
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],si
	jne Block69

 Block63:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block65

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block65:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block66:
	mov byte ptr [esp+0x80],8
	cmp word ptr [esp+0x28],si
	jne Block70

 Block67:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block71

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block69:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x58]
	push eax
	call ebp
	jmp Block66

 Block70:
	lea edx,[esp+0x28]
	push edx
	call ebp

 Block71:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x18],si
	jne Block74

 Block72:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea ecx,[esp+0x18]
	push ecx
	call ebp

 Block75:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x48]
	push edx
	call esi
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block77

 Block76:
	push eax
	call _com_issue_error

 Block77:
	lea ecx,[esp+0x38]
	push ecx
	mov dword ptr [esp+0x84],0xC
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block79

 Block78:
	push eax
	call _com_issue_error

 Block79:
	push 0
	push 0
	lea eax,[esp+0x50]
	push eax
	lea ecx,[esp+0x44]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x95F
	mov bl,0xD
	push edx
	mov byte ptr [esp+0x9C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],0xE
	jne Block81

 Block80:
	push 0x80004003
	call _com_issue_error

 Block81:
	lea eax,[esp+0x7C]
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0xF
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0xC8]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block84

 Block82:
	cmp eax,0x80004002
	je Block84

 Block83:
	push eax
	call _com_issue_error

 Block84:
	mov esi,8
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x68],si
	jne Block87

 Block85:
	mov eax,dword ptr [esp+0x70]
	xor ecx,ecx
	mov word ptr [esp+0x68],cx
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea edx,[esp+0x68]
	push edx
	call ebp

 Block88:
	mov byte ptr [esp+0x80],0xC
	cmp word ptr [esp+0x38],si
	jne Block91

 Block89:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea ecx,[esp+0x38]
	push ecx
	call ebp

 Block92:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x48],si
	jne Block95

 Block93:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea eax,[esp+0x48]
	push eax
	call ebp

 Block96:
	mov dword ptr [edi+0xC0],0
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
// CStoreBankDlg::OnPacket
_SUB_EXCEPTION_HANDLER(345C60)
__SUB(00345C60, __cdecl, 88797,  void, long, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_345C60
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
	mov eax,dword ptr [esp+0x6C]
	sub eax,0x171
	je Block36

 Block1:
	sub eax,1
	jne Block53

 Block2:
	mov edi,dword ptr [esp+0x70]
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	add eax,0xFFFFFFDD
	cmp eax,3
	ja Block53

 Block3:
	cmp EAX, 0
je Block4
cmp EAX, 1
je Block30
cmp EAX, 2
je Block10
cmp EAX, 3
je Block29


 Block4:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	je Block6

 Block5:
	push 0x21000003
	lea ecx,[esp+0x28]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+0x24]
	push offset CDisconnectException::THROW_INFO
	lea ecx,[esp+0x2C]
	push ecx
	mov dword ptr [esp+0x30],eax
	call _CxxThrowException

 Block6:
	push 0xE0
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x6C],eax
	mov dword ptr [esp+0x64],0
	test eax,eax
	je Block8

 Block7:
	mov ecx,eax
	call CStoreBankDlg::_ctor_default
	jmp Block9

 Block8:
	xor eax,eax

 Block9:
	push edi
	mov ecx,eax
	mov dword ptr [esp+0x68],0xFFFFFFFF
	call CStoreBankDlg::SetStoreBankDlg
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret

 Block10:
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov ebp,eax
	call CInPacket::Decode4
	mov ecx,edi
	mov esi,eax
	call CInPacket::Decode1
	xor edi,edi
	mov dword ptr [esp+0x6C],edi
	mov dword ptr [esp+0x64],1
	cmp esi,0x3B9AC9FF
	je Block19

 Block11:
	cmp al,0xFE
	jae Block19

 Block12:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	movzx edx,al
	push 0xFFFFFFFF
	push edx
	call CWvsContext::GetChannelName
	push eax
	lea ecx,[esp+0x24]
	call ZXString<char>::CreateFromCharStr
	mov dword ptr [esp+0x14],edi
	mov dword ptr [esp+0x18],edi
	push edi
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	push ecx
	lea edx,[esp+0x2C]
	mov ecx,esp
	mov dword ptr [esp+0x68],esp
	mov bl,5
	push edx
	mov byte ptr [esp+0x78],bl
	call ZXString<char>::_ctor_copy
	call separate_channelName
	add esp,0x10
	lea eax,[esp+0x2C]
	push 0xDC2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	mov eax,0x51EB851F
	mul esi
	shr edx,5
	imul edx,0x64
	sub esi,edx
	mov edx,dword ptr [esp+0x14]
	push esi
	push edx
	push ecx
	lea eax,[esp+0x78]
	push eax
	mov byte ptr [esp+0x74],6
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x3C]
	add esp,0x10
	mov byte ptr [esp+0x64],bl
	cmp eax,edi
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x64],4
	cmp eax,edi
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block16:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],3
	cmp eax,edi
	je Block18

 Block17:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov eax,dword ptr [esp+0x1C]
	jmp Block20

 Block19:
	lea ecx,[esp+0x30]
	push 0xDC1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	lea edx,[esp+0x70]
	push edx
	mov byte ptr [esp+0x6C],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x38]
	add esp,8

 Block20:
	mov byte ptr [esp+0x64],1
	cmp eax,edi
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x58],eax
	mov byte ptr [esp+0x64],7
	cmp eax,edi
	je Block28

 Block23:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	cmp eax,edi
	je Block28

 Block24:
	add eax,8
	cmp eax,edi
	je Block28

 Block25:
	lea esi,[eax-8]
	mov dword ptr [esp+0x20],esi
	cmp esi,edi
	je Block27

 Block26:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block27:
	push edi
	push edi
	push ecx
	lea edx,[esp+0x78]
	mov ecx,esp
	mov dword ptr [esp+0x64],esp
	push edx
	mov byte ptr [esp+0x74],8
	call ZXString<char>::_ctor_copy
	push ebp
	push edi
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_1
	push edi
	push edi
	mov ecx,esi
	call CUtilDlgEx::SetUtilDlgEx_TEXT
	mov ecx,esi
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,esi
	call CDialog::DoModal
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x64],1
	call ZRef<CUtilDlgEx>::~ZRef<CUtilDlgEx>
	jmp Block51

 Block28:
	xor esi,esi
	mov dword ptr [esp+0x20],esi
	jmp Block27

 Block29:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x80],esp
	push 0xDC3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret

 Block30:
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test eax,eax
	je Block53

 Block31:
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x48]
	push offset CStoreBankDlg::ms_RTTI_CStoreBankDlg
	call eax
	test eax,eax
	je Block53

 Block32:
	mov esi,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	test esi,esi
	je Block53

 Block33:
	cmp dword ptr [esi+0xC0],0
	jne Block35

 Block34:
	push 0x21000003
	lea ecx,[esp+0x38]
	call CMSException::_ctor_0
	mov ecx,dword ptr [esp+0x34]
	push offset CDisconnectException::THROW_INFO
	lea edx,[esp+0x3C]
	push edx
	mov dword ptr [esp+0x40],ecx
	call _CxxThrowException

 Block35:
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov ebx,eax
	call CInPacket::Decode4
	push eax
	push ebx
	mov ecx,esi
	call CStoreBankDlg::SendGetAllRequest
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret

 Block36:
	mov eax,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	xor edi,edi
	cmp eax,edi
	je Block53

 Block37:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CStoreBankDlg::ms_RTTI_CStoreBankDlg
	call edx
	test eax,eax
	je Block53

 Block38:
	mov esi,dword ptr [TSingleton<CUniqueModeless>::ms_pInstance]
	cmp esi,edi
	je Block53

 Block39:
	cmp dword ptr [esi+0xC0],edi
	jne Block41

 Block40:
	push 0x21000003
	lea ecx,[esp+0x40]
	call CMSException::_ctor_0
	mov eax,dword ptr [esp+0x3C]
	push offset CDisconnectException::THROW_INFO
	lea ecx,[esp+0x44]
	push ecx
	mov dword ptr [esp+0x48],eax
	call _CxxThrowException

 Block41:
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr [esi+0xC0],edi
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [esp+0x6C],edi
	add eax,0xFFFFFFE2
	mov ebx,9
	mov dword ptr [esp+0x64],ebx
	cmp eax,4
	ja Block50

 Block42:
	cmp EAX, 0
je Block43
cmp EAX, 1
je Block44
cmp EAX, 2
je Block45
cmp EAX, 3
je Block46
cmp EAX, 4
je Block47


 Block43:
	mov ecx,esi
	call CStoreBankDlg::RemoveAll
	push edi
	mov ecx,esi
	call CWnd::InvalidateRect
	mov esi,dword ptr [esi+0x98]
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x1C]
	lea ecx,[esi+4]
	push edi
	call eax
	lea ecx,[esp+0x44]
	push 0xDC6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x70]
	mov byte ptr [esp+0x68],0xA
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x44]
	jmp Block48

 Block44:
	lea edx,[esp+0x48]
	push 0xDC7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x70]
	mov byte ptr [esp+0x68],0xB
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x48]
	jmp Block48

 Block45:
	lea eax,[esp+0x4C]
	push 0xDC8
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x70]
	mov byte ptr [esp+0x68],0xC
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x4C]
	jmp Block48

 Block46:
	lea ecx,[esp+0x50]
	push 0xDC9
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x70]
	mov byte ptr [esp+0x68],0xD
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x50]
	jmp Block48

 Block47:
	lea edx,[esp+0x54]
	push 0xDCA
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x70]
	mov byte ptr [esp+0x68],0xE
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x54]

 Block48:
	mov byte ptr [esp+0x64],bl
	cmp eax,edi
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block50:
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov ecx,esp
	lea eax,[esp+0x80]
	mov dword ptr [esp+0x6C],esp
	push eax
	mov dword ptr [ecx],edi
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	add esp,0x14

 Block51:
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x64],0xFFFFFFFF
	cmp eax,edi
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret
}
}
// CStoreBankDlg::ITEM::~ITEM
_SUB_EXCEPTION_HANDLER(344050)
__SUB_CLASS_THIS0(00344050, __thiscall, 88814,  CStoreBankDlg::ITEM, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_344050
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
	mov eax,dword ptr [esi+0x18]
	mov dword ptr [esp+0x14],1
	test eax,eax
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0x18]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0x18]
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+0x18],0

 Block5:
	mov eax,dword ptr [esi+0x10]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov ecx,dword ptr [esi+0xC]
	test ecx,ecx
	je Block9

 Block8:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0xC],0

 Block9:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CStoreBankDlg::OnButtonClicked
__SUB_CLASS_THIS(00344000, __thiscall, 88790,  CStoreBankDlg, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x3E8
	jne Block3

 Block1:
	call CStoreBankDlg::SendCalculateFeeRequest

 Block2:
	ret 4

 Block3:
	cmp eax,1
	jne Block5

 Block4:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],1
	jmp edx

 Block5:
	cmp eax,2
	jne Block7

 Block6:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],2
	jmp edx

 Block7:
	cmp eax,8
	jne Block2

 Block8:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],8
	jmp edx
}
}
// CStoreBankDlg::DrawGetItem
_SUB_EXCEPTION_HANDLER(3440F0)
__SUB_CLASS_THIS(003440F0, __thiscall, 88792,  CStoreBankDlg, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3440F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x8C]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x1C],ebx
	mov eax,dword ptr [ebx+0xA0]
	mov eax,dword ptr [eax+0x38]
	lea edx,[eax*8]
	sub edx,eax
	add edx,edx
	add edx,edx
	mov dword ptr [esp+0x94],0
	mov ecx,eax
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x14],0x5D
	mov dword ptr [esp+0x20],edx
	jmp Block2

 Block2:
	mov eax,dword ptr [ebx+0xA8]
	test eax,eax
	je Block75

 Block3:
	cmp ecx,dword ptr [eax-4]
	jae Block75

 Block4:
	cmp ecx,dword ptr [ebx+0xB8]
	jge Block13

 Block5:
	mov eax,3
	mov edx,0xFF
	mov word ptr [esp+0x5C],ax
	mov dword ptr [esp+0x64],edx
	mov ecx,dword ptr [esp+0x9C]
	mov esi,dword ptr [ebx+0xB4]
	mov byte ptr [esp+0x94],1
	test ecx,ecx
	je Block78

 Block6:
	mov ebp,dword ptr [esp+0x5C]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x70]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x78]
	push esi
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x28]
	push eax
	push 0xA
	mov edi,ecx
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	call ecx
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block8:
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0x94],0
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov ebx,dword ptr [esp+0x1C]

 Block13:
	mov ebp,dword ptr [ebx+0xA8]
	add ebp,dword ptr [esp+0x20]
	mov ecx,3
	mov word ptr [esp+0x3C],cx
	mov dword ptr [esp+0x44],0xFF
	mov edx,dword ptr [ebp+0x10]
	mov esi,edx
	mov byte ptr [esp+0x94],2
	mov dword ptr [esp+0x38],edx
	test esi,esi
	je Block78

 Block14:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[esp+0x24]
	push ecx
	push esi
	mov dword ptr [esp+0x2C],0
	call edx
	test eax,eax
	jge Block16

 Block15:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block16:
	mov esi,dword ptr [ebp+0x10]
	mov edi,dword ptr [esp+0x24]
	test esi,esi
	je Block78

 Block17:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x6C]
	lea ecx,[esp+0x28]
	push ecx
	push esi
	mov dword ptr [esp+0x30],0
	call edx
	test eax,eax
	jge Block19

 Block18:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block19:
	mov ecx,dword ptr [esp+0x9C]
	test ecx,ecx
	je Block78

 Block20:
	mov ebx,dword ptr [esp+0x3C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x50]
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x54]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x58]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [esp+0x48]
	push eax
	mov eax,dword ptr [esp+0x28]
	sub eax,edi
	add eax,0x22
	push eax
	mov eax,0xC
	sub eax,dword ptr [esp+0x40]
	mov esi,ecx
	push eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block22

 Block21:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block22:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x94],0
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov esi,dword ptr [ebp+0xC]
	test esi,esi
	je Block30

 Block27:
	cmp dword ptr [esi+4],0
	jne Block29

 Block28:
	mov ecx,dword ptr [esi]
	push ecx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block29:
	mov edx,dword ptr [esi+4]
	jmp Block31

 Block30:
	xor edx,edx

 Block31:
	mov dword ptr [esp+0x18],0
	test edx,edx
	je Block35

 Block32:
	mov eax,edx
	lea esi,[eax+1]

 Block33:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block33

 Block34:
	sub eax,esi
	mov esi,eax
	push esi
	push edx
	push 0
	push esi
	lea ecx,[esp+0x28]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x1C]
	call ZXString<char>::ReleaseBuffer

 Block35:
	mov ebx,dword ptr [esp+0x1C]
	mov eax,dword ptr [ebx+0xAC]
	push 0xA0
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x9C],3
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block37

 Block36:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block37:
	lea ecx,[esp+0x20]
	push ecx
	call format_string_1
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,0xC
	lea edx,[esp+0x7C]
	push edx
	call esi
	lea eax,[esp+0x7C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block79

 Block38:
	lea ecx,[esp+0x6C]
	push ecx
	mov byte ptr [esp+0x98],4
	call esi
	lea edx,[esp+0x6C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block79

 Block39:
	mov edx,dword ptr [esp+0x9C]
	lea eax,[esp+0x7C]
	push eax
	mov eax,dword ptr [esp+0x1C]
	lea ecx,[esp+0x70]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xA8],5
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebx+0xAC]
	mov byte ptr [esp+0xA4],6
	test ecx,ecx
	je Block78

 Block40:
	mov edi,dword ptr [esp+0x24]
	add edi,0x14
	lea edx,[edi-0x11]
	push edx
	push 0x35
	mov byte ptr [esp+0xAC],5
	call IWzFont::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x94],4
	cmp word ptr [esp+0x6C],si
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov byte ptr [esp+0x94],3
	cmp word ptr [esp+0x7C],si
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x84]
	xor edx,edx
	mov word ptr [esp+0x7C],dx
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea eax,[esp+0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov esi,dword ptr [ebp]
	mov eax,0x431BDE83
	imul esi
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,2
	je Block53

 Block49:
	cmp eax,3
	je Block53

 Block50:
	cmp eax,4
	je Block53

 Block51:
	push esi
	call get_consume_cash_item_type
	add esp,4
	test eax,eax
	jne Block53

 Block52:
	push esi
	call get_etc_cash_item_type
	add esp,4
	test eax,eax
	je Block58

 Block53:
	mov ecx,dword ptr [ebp+0x18]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	push 0
	push ecx
	mov esi,eax
	mov eax,dword ptr [ebx+0xB0]
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
	push esi
	push edi
	push 0xA
	push ecx
	mov ecx,dword ptr [esp+0xB4]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xB4]
	mov dword ptr [esp+0x50],esp
	test eax,eax
	je Block57

 Block56:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block57:
	call draw_number_by_image
	add esp,0x18

 Block58:
	mov ecx,dword ptr [ebp]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::IsCashItem_1
	test eax,eax
	je Block72

 Block59:
	mov edx,3
	mov word ptr [esp+0x4C],dx
	mov dword ptr [esp+0x54],0xFF
	mov eax,dword ptr [ebx+0xC8]
	mov esi,eax
	mov byte ptr [esp+0x94],7
	mov dword ptr [esp+0x38],eax
	test esi,esi
	je Block78

 Block60:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x74]
	lea edx,[esp+0x2C]
	push edx
	push esi
	mov dword ptr [esp+0x34],0
	call eax
	test eax,eax
	jge Block62

 Block61:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block62:
	mov esi,dword ptr [ebx+0xC8]
	mov edi,dword ptr [esp+0x2C]
	test esi,esi
	je Block78

 Block63:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x6C]
	lea edx,[esp+0x30]
	push edx
	push esi
	mov dword ptr [esp+0x38],0
	call eax
	test eax,eax
	jge Block65

 Block64:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block65:
	mov ecx,dword ptr [esp+0x9C]
	test ecx,ecx
	je Block78

 Block66:
	mov ebp,dword ptr [esp+0x4C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x60]
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x64]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x68]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esp+0x48]
	push eax
	mov eax,dword ptr [esp+0x28]
	sub eax,edi
	add eax,0x20
	push eax
	mov eax,0x2A
	sub eax,dword ptr [esp+0x48]
	mov esi,ecx
	push eax
	push ecx
	mov ecx,dword ptr [edx+0x80]
	call ecx
	test eax,eax
	jge Block68

 Block67:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block68:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x94],3
	jne Block71

 Block69:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block72:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x94],0
	test eax,eax
	je Block74

 Block73:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block74:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x34]
	add dword ptr [esp+0x20],0x1C
	add eax,0x2A
	inc ecx
	cmp eax,0x12F
	mov dword ptr [esp+0x34],ecx
	mov dword ptr [esp+0x14],eax
	jl Block2

 Block75:
	mov eax,dword ptr [esp+0x9C]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	test eax,eax
	je Block77

 Block76:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block77:
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret 4

 Block78:
	push 0x80004003
	call _com_issue_error

 Block79:
	push eax
	call _com_issue_error
}
}
// CStoreBankDlg::IsKindOf
__SUB_CLASS_THIS(00345680, __thiscall, 88800,  CStoreBankDlg, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CStoreBankDlg::ms_RTTI_CStoreBankDlg
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
// CStoreBankDlg::SetScrollBar
__SUB_CLASS_THIS0(003434E0, __thiscall, 88783,  CStoreBankDlg, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xB8]
	cmp eax,5
	jle Block2

 Block1:
	mov ecx,dword ptr [ecx+0xA0]
	add eax,0xFFFFFFFC
	push eax
	call CCtrlScrollBar::SetScrollRange
	ret

 Block2:
	mov ecx,dword ptr [ecx+0xA0]
	xor eax,eax
	push eax
	call CCtrlScrollBar::SetScrollRange
	ret
}
}
// CStoreBankDlg::SetNPC
_SUB_EXCEPTION_HANDLER(3435D0)
__SUB_CLASS_THIS0(003435D0, __thiscall, 88783,  CStoreBankDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3435D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x78
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x8C]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
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
	mov edx,3
	mov dword ptr [esp+0x94],edi
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],edi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x94],1
	cmp ecx,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x1C]
	push edx
	push edi
	push edi
	push edi
	push edi
	push edi
	lea eax,[esp+0x30]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0xC4]
	cmp esi,eax
	je Block9

 Block5:
	mov dword ptr [ebp+0xC4],eax
	cmp eax,edi
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block7:
	cmp esi,edi
	je Block9

 Block8:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block9:
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	je Block11

 Block10:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block11:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x94],0
	cmp word ptr [esp+0x18],si
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[esp+0x18]
	push edx
	call ebx

 Block15:
	mov dword ptr [esp+0x94],0xFFFFFFFF
	cmp word ptr [esp+0x28],si
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,edi
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x28]
	push ecx
	call ebx

 Block19:
	lea edx,[esp+0x14]
	push edx
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,2
	mov ecx,0xD
	mov dword ptr [esp+0x94],ebx
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	cmp eax,edi
	je Block21

 Block20:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block21:
	mov esi,dword ptr [ebp+0xC4]
	mov byte ptr [esp+0x94],3
	cmp esi,edi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	cmp eax,edi
	jge Block25

 Block24:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x94],bl
	jne Block28

 Block26:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	cmp eax,edi
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x18]
	push eax
	call esi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	lea edx,[esp+0x28]
	mov ebx,4
	push edx
	mov dword ptr [esp+0x98],ebx
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	mov ecx,dword ptr [ebp+0xC4]
	mov byte ptr [esp+0x94],5
	cmp ecx,edi
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push 0x4C
	push 0x35
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x94],bl
	cmp word ptr [esp+0x28],si
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,edi
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov dword ptr [esp+0x94],0xFFFFFFFF
	cmp word ptr [esp+0x18],si
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov esi,dword ptr [ebp+0xC4]
	cmp esi,edi
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	cmp eax,edi
	jge Block49

 Block48:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block49:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ebx,6
	mov edx,0xD
	mov dword ptr [esp+0x94],ebx
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],eax
	cmp eax,edi
	je Block51

 Block50:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block51:
	mov esi,dword ptr [ebp+0xC4]
	mov byte ptr [esp+0x94],7
	cmp esi,edi
	jne Block53

 Block52:
	push 0x80004003
	call _com_issue_error

 Block53:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	cmp eax,edi
	jge Block55

 Block54:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block55:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x94],bl
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	cmp eax,edi
	je Block61

 Block60:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block61:
	mov esi,dword ptr [ebp+0xC4]
	cmp esi,edi
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 1
	push esi
	call ecx
	cmp eax,edi
	jge Block65

 Block64:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block65:
	mov esi,dword ptr [ebp+0xC4]
	cmp esi,edi
	jne Block67

 Block66:
	push 0x80004003
	call _com_issue_error

 Block67:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xD8]
	push 1
	push esi
	call eax
	cmp eax,edi
	jge Block69

 Block68:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block69:
	mov ecx,dword ptr [ebp+0xA4]
	push ecx
	call CNpcTemplate::GetNpcTemplate
	add esp,4
	int 3// TODO: 	mov dword ptr [esp+0x78],offset ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::`vftable'
	mov dword ptr [esp+0x80],edi
	mov dword ptr [esp+0x84],edi
	mov dword ptr [esp+0x88],edi
	mov ecx,dword ptr [eax+0x34]
	mov esi,8
	mov dword ptr [esp+0x94],esi
	cmp ecx,edi
	jne Block71

 Block70:
	mov ecx,1

 Block71:
	push 0xFFFFFFFE
	lea edx,[esp+0x7C]
	push edx
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push eax
	call CActionMan::LoadNpcAction
	mov eax,3
	mov word ptr [esp+0x28],ax
	mov dword ptr [esp+0x30],0xFFFFFFFE
	mov ecx,dword ptr [ebp+0xC4]
	mov byte ptr [esp+0x94],9
	cmp ecx,edi
	jne Block73

 Block72:
	push 0x80004003
	call _com_issue_error

 Block73:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block75:
	mov byte ptr [esp+0x94],8
	cmp word ptr [esp+0x28],si
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,edi
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
	mov eax,dword ptr [esp+0x84]
	mov ebx,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esp+0x14],eax
	cmp eax,edi
	je Block112

 Block80:
	lea ebx,[ebx]

 Block81:
	lea edx,[esp+0x14]
	push edx
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	lea eax,[esp+0x58]
	push eax
	call ebx
	lea ecx,[esp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block82:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x98],0xA
	call ebx
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block83:
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x98],0xB
	call ebx
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block84:
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0x98],0xC
	call ebx
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jl Block1

 Block85:
	mov eax,dword ptr [esi+0x10]
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],eax
	mov ecx,dword ptr [ebp+0xC4]
	mov esi,dword ptr [esi+0xC]
	mov byte ptr [esp+0x94],0xE
	cmp ecx,edi
	je Block3

 Block86:
	lea eax,[esp+0x58]
	push eax
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x40]
	push eax
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x38]
	push eax
	push esi
	lea edx,[esp+0x80]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x68],8
	jne Block89

 Block87:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	cmp eax,edi
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block90:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x94],0xD
	jne Block97

 Block91:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,edi
	je Block93

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block93:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block94:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x94],0xC
	jne Block98

 Block95:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block99

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block99

 Block97:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x28]
	push eax
	call esi
	jmp Block94

 Block98:
	lea edx,[esp+0x18]
	push edx
	call esi

 Block99:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x94],0xB
	jne Block102

 Block100:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,edi
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea ecx,[esp+0x38]
	push ecx
	call esi

 Block103:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x94],0xA
	jne Block106

 Block104:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,edi
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea eax,[esp+0x48]
	push eax
	call esi

 Block107:
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x94],8
	jne Block110

 Block108:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	cmp eax,edi
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block110:
	lea edx,[esp+0x58]
	push edx
	call esi

 Block111:
	cmp dword ptr [esp+0x14],edi
	jne Block81

 Block112:
	lea eax,[esp+0x48]
	push eax
	call ebx
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block114

 Block113:
	push eax
	call _com_issue_error

 Block114:
	lea edx,[esp+0x58]
	mov bl,0xF
	push edx
	mov byte ptr [esp+0x98],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block116

 Block115:
	push eax
	call _com_issue_error

 Block116:
	mov ecx,dword ptr [ebp+0xC4]
	mov byte ptr [esp+0x94],0x10
	cmp ecx,edi
	jne Block118

 Block117:
	push 0x80004003
	call _com_issue_error

 Block118:
	lea edx,[esp+0x48]
	push edx
	lea eax,[esp+0x5C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x94],bl
	cmp word ptr [esp+0x58],si
	jne Block121

 Block119:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	cmp eax,edi
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block122:
	mov byte ptr [esp+0x94],8
	cmp word ptr [esp+0x48],si
	jne Block125

 Block123:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,edi
	je Block126

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block126

 Block125:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block126:
	lea ecx,[esp+0x78]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	int 3// TODO: 	mov dword ptr [esp+0x78],offset ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::`vftable'
	call ZList<ZRef<CActionMan::NPCACTIONFRAMEENTRY>>::RemoveAll
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x84
	ret
}
}
// CStoreBankDlg::SetStoreBankDlg
__SUB_CLASS_THIS(00345C20, __thiscall, 88784,  CStoreBankDlg, void, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode4
	push edi
	mov ecx,esi
	mov dword ptr [esi+0xA4],eax
	call CStoreBankDlg::SetItems
	mov ecx,esi
	call CStoreBankDlg::SetScrollBar
	mov ecx,esi
	call CStoreBankDlg::SetNPC
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop edi
	pop esi
	ret 4
}
}
// CStoreBankDlg::ResetInfo
__SUB_CLASS_THIS0(00343510, __thiscall, 88783,  CStoreBankDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CStoreBankDlg::SetScrollBar
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret
}
}
// CStoreBankDlg::~CStoreBankDlg
_SUB_EXCEPTION_HANDLER(3456B0)
__SUB_CLASS_THIS0(003456B0, __thiscall, 88783,  CStoreBankDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3456B0
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
	int 3// TODO: 	mov dword ptr [esi],offset CStoreBankDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CStoreBankDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CStoreBankDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xCC]
	mov dword ptr [esp+0x1C],8
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [esi+0xC8]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],7
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xC4]
	mov byte ptr [esp+0x1C],6
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xB4]
	mov byte ptr [esp+0x1C],5
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0xB0]
	mov byte ptr [esp+0x1C],4
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0xAC]
	mov byte ptr [esp+0x1C],3
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	lea ecx,[esi+0xA8]
	mov byte ptr [esp+0x1C],2
	call ZArray<CStoreBankDlg::ITEM>::RemoveAll
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	int 3// TODO: 	mov dword ptr [esi],offset CUniqueModeless::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUniqueModeless::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUniqueModeless::`vftable'{for `ZRefCounted'}
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	mov dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],ebx
	call CDialog::~CDialog
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
// CStoreBankDlg::SendGetAllRequest
_SUB_EXCEPTION_HANDLER(3449F0)
__SUB_CLASS_THIS(003449F0, __thiscall, 88795,  CStoreBankDlg, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3449F0
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
	mov dword ptr [esp+0x18],ecx
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov ebp,dword ptr [esp+0x40]
	mov dword ptr [esp+0x34],ebx
	cmp ebp,ebx
	jne Block2

 Block1:
	lea eax,[esp+0x40]
	push 0xDC5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x38],1
	call ZXString<char>::op_assign
	jmp Block5

 Block2:
	mov edi,dword ptr [esp+0x3C]
	cmp edi,0x64
	mov esi,0x64
	jg Block4

 Block3:
	mov esi,edi

 Block4:
	lea ecx,[esp+0x40]
	push 0xDC4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push esi
	push edi
	push eax
	lea edx,[esp+0x24]
	push edx
	mov byte ptr [esp+0x48],2
	call ZXString<char>::Format
	add esp,0x14

 Block5:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea eax,[esp+0x28]
	mov dword ptr [esp+0x50],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	je Block9

 Block8:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [ecx+0xC0],ebx
	jmp Block10

 Block9:
	push 0x45
	lea ecx,[esp+0x20]
	call COutPacket::_ctor_1
	push 0x1B
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x38],3
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x1C]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x34],bl
	call ZArray<unsigned char>::RemoveAll

 Block10:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 8
}
}
// CStoreBankDlg::ITEM::operator=
__SUB_CLASS_THIS(00344B50, __thiscall, 88816,  CStoreBankDlg::ITEM, CStoreBankDlg::ITEM&, const CStoreBankDlg::ITEM&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	mov eax,dword ptr [ebx]
	push ebp
	push esi
	mov esi,ecx
	mov dword ptr [esi],eax
	mov ecx,dword ptr [ebx+4]
	push edi
	mov dword ptr [esi+4],ecx
	mov edx,dword ptr [ebx+8]
	lea ebp,[ebx+0xC]
	lea edi,[esi+0xC]
	mov dword ptr [esi+8],edx
	cmp edi,ebp
	je Block5

 Block1:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	je Block3

 Block2:
	call _xbstr_t::Data_t::Release
	mov dword ptr [edi],0

 Block3:
	mov eax,dword ptr [ebp]
	mov dword ptr [edi],eax
	test eax,eax
	je Block5

 Block4:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov eax,dword ptr [ebx+0x10]
	mov edi,dword ptr [esi+0x10]
	cmp edi,eax
	je Block10

 Block6:
	mov dword ptr [esi+0x10],eax
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	test edi,edi
	je Block10

 Block9:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block10:
	add ebx,0x14
	push ebx
	lea ecx,[esi+0x14]
	call ZRef<GW_ItemSlotBase>::op_assign_copy
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// CStoreBankDlg::CStoreBankDlg
_SUB_EXCEPTION_HANDLER(345560)
__SUB_CLASS_THIS0(00345560, __thiscall, 88781,  CStoreBankDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_345560
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
	mov dword ptr [esp+0x10],esi
	call CUniqueModeless::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CStoreBankDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CStoreBankDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CStoreBankDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x1C],edi
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xAC],edi
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xC4],edi
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esi+0xD0],edi
	mov dword ptr [esi+0xD4],edi
	mov dword ptr [esi+0xD8],edi
	mov dword ptr [esi+0xDC],edi
	lea eax,[esp+0xC]
	push 0x19AE
	push eax
	mov byte ptr [esp+0x24],9
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 1
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x2C],0xA
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x1C],9
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret
}
}
// CStoreBankDlg::GetRTTI
__SUB_CLASS_THIS0(00345660, __thiscall, 88799,  CStoreBankDlg, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CStoreBankDlg::ms_RTTI_CStoreBankDlg
	ret
}
}
// CStoreBankDlg::SetRet
_SUB_EXCEPTION_HANDLER(343EB0)
__SUB_CLASS_THIS(00343EB0, __thiscall, 88785,  CStoreBankDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_343EB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0x45
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0x1C
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	cmp dword ptr [esi+0x84],0
	jne Block3

 Block1:
	cmp dword ptr [esi+0x14],0
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [esi+0x80],ecx
	mov dword ptr [esi+0x84],1
	je Block3

 Block2:
	mov ecx,esi
	call CWnd::Destroy

 Block3:
	mov ecx,esi
	call CWnd::Destroy
	mov edx,dword ptr [esi+8]
	mov eax,dword ptr [edx]
	lea ecx,[esi+8]
	push 1
	call eax
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4
}
}
// CStoreBankDlg::HitTest
__SUB_CLASS_THIS(00343470, __thiscall, 88787,  CStoreBankDlg, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [esp+0x10]
	push esi
	push eax
	push edx
	call CWnd::HitTest
	test eax,eax
	je Block4

 Block1:
	test esi,esi
	je Block3

 Block2:
	cmp dword ptr [esi],0
	jne Block4

 Block3:
	xor eax,eax

 Block4:
	pop esi
	ret 0xC
}
}
// CStoreBankDlg::Draw
_SUB_EXCEPTION_HANDLER(345330)
__SUB_CLASS_THIS(00345330, __thiscall, 88788,  CStoreBankDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_345330
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
	mov edi,ecx
	mov eax,dword ptr [esp+0x2C]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov dword ptr [esp+0x18],0

 Block5:
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	mov esi,dword ptr [esp+0x2C]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],0
	mov dword ptr [esp+0x14],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block7

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block7:
	mov ecx,edi
	call CStoreBankDlg::DrawGetItem
	mov ecx,dword ptr [edi+0xBC]
	push 0xAA
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block9

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block9:
	mov ecx,edi
	call CStoreBankDlg::DrawMoney
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test esi,esi
	je Block11

 Block10:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block11:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x18
	ret 4
}
}
// CStoreBankDlg::SetItems
_SUB_EXCEPTION_HANDLER(345820)
__SUB_CLASS_THIS(00345820, __thiscall, 88784,  CStoreBankDlg, void, CInPacket&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_345820
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
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
	mov edi,dword ptr [ebp+8]
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	push 8
	lea ecx,[ebp-0x58]
	push ecx
	mov ecx,edi
	mov dword ptr [esi+0xB8],eax
	call CInPacket::DecodeBuffer
	mov eax,dword ptr [ebp-0x58]
	and eax,2
	xor ecx,ecx
	xor ebx,ebx
	or eax,ecx
	je Block2

 Block1:
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esi+0xBC],eax

 Block2:
	mov dword ptr [ebp-0x14],ebx
	add esi,0xA8
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-4],ebx
	mov dword ptr [ebp-0x40],esi
	call ZArray<CStoreBankDlg::ITEM>::RemoveAll
	mov edx,dword ptr [esi]
	mov eax,1
	mov dword ptr [ebp-0x14],edx
	mov dword ptr [esi],ebx
	mov dword ptr [ebp-0x18],eax
	jmp Block4

 Block3:
	mov eax,dword ptr [ebp-0x18]
	mov edi,dword ptr [ebp+8]

 Block4:
	lea ecx,[eax-1]
	cmp ecx,4
	ja Block11

 Block5:
	dec eax
	cmp EAX, 0
je Block6
cmp EAX, 1
je Block7
cmp EAX, 2
je Block8
cmp EAX, 3
je Block9
cmp EAX, 4
je Block10


 Block6:
	mov eax,4
	jmp Block12

 Block7:
	mov eax,8
	jmp Block12

 Block8:
	mov eax,0x10
	jmp Block12

 Block9:
	mov eax,0x20
	jmp Block12

 Block10:
	mov eax,0x40
	jmp Block12

 Block11:
	xor eax,eax

 Block12:
	and eax,dword ptr [ebp-0x58]
	xor ecx,ecx
	and ecx,dword ptr [ebp-0x54]
	or eax,ecx
	jne Block20

 Block13:
	xor edi,edi
	mov esi,edx
	jmp Block15

 Block15:
	cmp edx,ebx
	je Block62

 Block16:
	cmp edi,dword ptr [edx-4]
	jae Block62

 Block17:
	mov ecx,dword ptr [esi]
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,dword ptr [ebp-0x18]
	jne Block19

 Block18:
	mov ecx,dword ptr [ebp-0x40]
	push esi
	push 0xFFFFFFFF
	call ZArray<CStoreBankDlg::ITEM>::InsertBefore
	mov ecx,eax
	call CStoreBankDlg::ITEM::operator=

 Block19:
	mov edx,dword ptr [ebp-0x14]
	inc edi
	add esi,0x1C
	jmp Block15

 Block20:
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,ebx
	mov dword ptr [ebp-0x5C],eax
	mov dword ptr [ebp-0x1C],ebx
	jle Block61

 Block21:
	mov dword ptr [ebp-0x2C],ebx
	mov dword ptr [ebp-0x28],ebx
	mov dword ptr [ebp-0x20],ebx
	mov ecx,dword ptr [ebp+8]
	push ecx
	lea edx,[ebp-0x48]
	push edx
	mov byte ptr [ebp-4],1
	call GW_ItemSlotBase::Decode
	add esp,8
	mov esi,eax
	mov eax,dword ptr [esi+4]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [ebp-4],2
	cmp eax,ebx
	je Block23

 Block22:
	add eax,4
	push eax
	call edi

 Block23:
	mov eax,dword ptr [ebp-0x20]
	cmp eax,ebx
	je Block28

 Block24:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block27

 Block25:
	mov eax,dword ptr [ebp-0x20]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [ebp-0x20]
	cmp ecx,ebx
	je Block27

 Block26:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block27:
	mov dword ptr [ebp-0x20],ebx

 Block28:
	mov eax,dword ptr [ebp-0x44]
	mov ecx,dword ptr [esi+4]
	mov dword ptr [ebp-0x20],ecx
	mov byte ptr [ebp-4],1
	cmp eax,ebx
	je Block33

 Block29:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block32

 Block30:
	mov edx,dword ptr [ebp-0x44]
	add edx,4
	push edx
	call edi
	mov ecx,dword ptr [ebp-0x44]
	cmp ecx,ebx
	je Block32

 Block31:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block32:
	mov dword ptr [ebp-0x44],ebx

 Block33:
	mov ecx,dword ptr [ebp-0x20]
	add ecx,0xC
	call TSecType<long>::GetData
	mov ecx,dword ptr [ebp-0x20]
	mov dword ptr [ebp-0x38],eax
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	call edx
	mov ecx,dword ptr [ebp-0x38]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	mov dword ptr [ebp-0x34],eax
	mov eax,dword ptr [ebp-0x1C]
	lea edx,[ebp-0x50]
	push edx
	mov dword ptr [ebp-0x30],eax
	call CItemInfo::GetItemName
	mov eax,dword ptr [eax]
	push ebx
	push ebx
	push 0xFFFFFFFF
	push eax
	push ebx
	push ebx
	mov byte ptr [ebp-4],3
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov eax,dword ptr [ebp-0x38]
	mov esi,esp
	push eax
	lea ecx,[ebp-0x4C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	mov eax,dword ptr [eax]
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push eax
	push ebx
	push ebx
	mov byte ptr [ebp-4],4
	call MultiByteToWideChar
	push esi
	lea ecx,[ebp-0x3C]
	call _xbstr_t::_ctor_1
	mov eax,dword ptr [ebp-0x2C]
	cmp eax,ebx
	je Block41

 Block34:
	mov esi,eax
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebx
	jne Block41

 Block35:
	cmp esi,ebx
	je Block41

 Block36:
	mov eax,dword ptr [esi]
	cmp eax,ebx
	je Block38

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block38:
	mov eax,dword ptr [esi+4]
	cmp eax,ebx
	je Block40

 Block39:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block40:
	push esi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block41:
	mov edi,dword ptr [ebp-0x3C]
	mov dword ptr [ebp-0x2C],edi
	cmp edi,ebx
	je Block49

 Block42:
	lea esi,[edi+8]
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	cmp eax,ebx
	jne Block48

 Block43:
	mov eax,dword ptr [edi]
	cmp eax,ebx
	je Block45

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block45:
	mov eax,dword ptr [edi+4]
	cmp eax,ebx
	je Block47

 Block46:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block47:
	push edi
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block48:
	mov dword ptr [ebp-0x3C],ebx

 Block49:
	mov eax,dword ptr [ebp-0x4C]
	mov byte ptr [ebp-4],3
	cmp eax,ebx
	je Block51

 Block50:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block51:
	mov eax,dword ptr [ebp-0x50]
	mov byte ptr [ebp-4],1
	cmp eax,ebx
	je Block53

 Block52:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block53:
	mov edx,dword ptr [ebp-0x38]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebx
	push 1
	push edx
	lea eax,[ebp-0x60]
	push eax
	call CItemInfo::GetItemIcon
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebp-0x28]
	cmp ecx,eax
	je Block58

 Block54:
	mov esi,ecx
	mov dword ptr [ebp-0x28],eax
	cmp eax,ebx
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block56:
	cmp esi,ebx
	je Block58

 Block57:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block58:
	mov eax,dword ptr [ebp-0x60]
	cmp eax,ebx
	je Block60

 Block59:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block60:
	lea ecx,[ebp-0x38]
	push ecx
	mov ecx,dword ptr [ebp-0x40]
	push 0xFFFFFFFF
	call ZArray<CStoreBankDlg::ITEM>::InsertBefore
	mov ecx,eax
	call CStoreBankDlg::ITEM::operator=
	lea ecx,[ebp-0x38]
	mov byte ptr [ebp-4],bl
	call CStoreBankDlg::ITEM::~ITEM
	mov eax,dword ptr [ebp-0x1C]
	inc eax
	cmp eax,dword ptr [ebp-0x5C]
	mov dword ptr [ebp-0x1C],eax
	jl Block21

 Block61:
	mov edx,dword ptr [ebp-0x14]

 Block62:
	mov eax,dword ptr [ebp-0x18]
	inc eax
	cmp eax,5
	mov dword ptr [ebp-0x18],eax
	jle Block3

 Block63:
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZArray<CStoreBankDlg::ITEM>::RemoveAll
	lea esp,[ebp-0x70]
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
// CStoreBankDlg::OnChildNotify
__SUB_CLASS_THIS(003434A0, __thiscall, 88789,  CStoreBankDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	cmp eax,0x3E9
	jne Block4

 Block1:
	cmp edx,0x12C
	jb Block4

 Block2:
	cmp edx,0x130
	ja Block4

 Block3:
	push 0
	call CWnd::InvalidateRect
	ret 0xC

 Block4:
	cmp edx,0x64
	jne Block6

 Block5:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax

 Block6:
	ret 0xC
}
}
// CStoreBankDlg::SendCalculateFeeRequest
_SUB_EXCEPTION_HANDLER(343F70)
__SUB_CLASS_THIS0(00343F70, __thiscall, 88783,  CStoreBankDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_343F70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0xC0],0
	jne Block2

 Block1:
	push 0x45
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 0x1A
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+8]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0xC0],1
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret
}
}
