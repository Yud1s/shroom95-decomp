#include "regen.hpp"
// Field_KillCount.ipp
#include "Field_KillCount.hpp"

// CField_KillCount::CField_KillCount
__SUB_CLASS_THIS0(00154080, __thiscall, 143640,  CField_KillCount, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::_ctor_default
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CField_KillCount::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_KillCount::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_KillCount::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_KillCount::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xDA4],eax
	mov dword ptr [esi+0xDA8],eax
	mov dword ptr [esi+0xDAC],eax
	mov dword ptr [esi+0xDB0],eax
	mov dword ptr [esi+0xDB4],eax
	mov eax,esi
	pop esi
	ret
}
}
// CField_KillCount::Init
_SUB_EXCEPTION_HANDLER(1541F0)
__SUB_CLASS_THIS(001541F0, __thiscall, 143644,  CField_KillCount, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1541F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x4C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x60]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x18],ecx
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [esp+0x70]
	push eax
	call CField::Init
	push 0x48
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x70],esi
	mov edi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esp+0x68],ebx
	test esi,esi
	je Block11

 Block1:
	lea ecx,[esp+0x40]
	push ecx
	call edi
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x6C],1
	mov dword ptr [esp+0x18],1
	call edi
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	push 0x16
	mov edi,3
	push edi
	push 0
	push 0
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x34]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x1984
	push ecx
	mov dword ptr [esp+0x8C],2
	mov dword ptr [esp+0x38],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov dword ptr [esp+0x84],edi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea edx,[esp+0x6C]
	mov byte ptr [esp+0x84],2
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ebx,7
	mov ecx,eax
	mov dword ptr [esp+0x78],4
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
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x68],7
	test edi,edi
	je Block14

 Block13:
	lea eax,[edi+4]
	push eax
	call ebp

 Block14:
	mov eax,dword ptr [esp+0x18]
	mov esi,dword ptr [eax+0xDA4]
	mov dword ptr [eax+0xDA4],edi
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
	call ebp
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block17:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov dword ptr [esp+0x68],6
	mov edi,8
	test bl,4
	je Block22

 Block18:
	and ebx,0xFFFFFFFB
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x50],di
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[esp+0x50]
	push edx
	call esi

 Block22:
	mov dword ptr [esp+0x68],5
	test bl,2
	je Block27

 Block23:
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x20],di
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[esp+0x20]
	push ecx
	call esi

 Block27:
	mov dword ptr [esp+0x68],0xFFFFFFFF
	test bl,1
	je Block32

 Block28:
	cmp word ptr [esp+0x40],di
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[esp+0x40]
	push eax
	call esi

 Block32:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x20]
	push ecx
	call ebp
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block34

 Block33:
	push eax
	call _com_issue_error

 Block34:
	lea eax,[esp+0x40]
	push eax
	mov dword ptr [esp+0x6C],edi
	call ebp
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x68],9
	test ecx,ecx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x44]
	push eax
	push 0xC00614A4
	push 0x12C
	push 0x12C
	push 0
	push 0
	lea edx,[esp+0x8C]
	push edx
	call IWzGr2D::CreateLayer
	mov edi,dword ptr [esp+0x18]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xDA8]
	cmp esi,eax
	je Block43

 Block39:
	mov dword ptr [edi+0xDA8],eax
	test eax,eax
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block41:
	test esi,esi
	je Block43

 Block42:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block43:
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block45

 Block44:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block45:
	mov esi,8
	mov byte ptr [esp+0x68],8
	cmp word ptr [esp+0x40],si
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	mov dword ptr [esp+0x68],0xFFFFFFFF
	cmp word ptr [esp+0x20],si
	jne Block52

 Block50:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block53:
	cmp dword ptr [edi+0xDA8],0
	je Block70

 Block54:
	mov esi,dword ptr [edi+0xDA8]
	test esi,esi
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block58

 Block57:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block58:
	push 0
	lea ecx,[esp+0x74]
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov ebx,0xA
	mov edx,0xD
	mov dword ptr [esp+0x68],ebx
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block60

 Block59:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block60:
	mov esi,dword ptr [edi+0xDA8]
	mov byte ptr [esp+0x68],0xB
	test esi,esi
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
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
	jge Block64

 Block63:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block64:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x68],bl
	jne Block67

 Block65:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	mov eax,dword ptr [esp+0x70]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	test eax,eax
	je Block70

 Block69:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block70:
	lea eax,[esp+0x20]
	push eax
	call ebp
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	lea edx,[esp+0x40]
	mov ebx,0xC
	push edx
	mov dword ptr [esp+0x6C],ebx
	call ebp
	lea eax,[esp+0x40]
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
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x68],0xD
	test ecx,ecx
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x44]
	push eax
	push 0xC00614A4
	push 0x12C
	push 0x12C
	push 0
	push 0
	lea edx,[esp+0x8C]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xDAC]
	cmp esi,eax
	je Block81

 Block77:
	mov dword ptr [edi+0xDAC],eax
	test eax,eax
	je Block79

 Block78:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block79:
	test esi,esi
	je Block81

 Block80:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block81:
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block83

 Block82:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block83:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x68],bl
	jne Block86

 Block84:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block87:
	or ebp,0xFFFFFFFF
	cmp word ptr [esp+0x20],8
	mov dword ptr [esp+0x68],ebp
	jne Block90

 Block88:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block91:
	cmp dword ptr [edi+0xDAC],0
	je Block108

 Block92:
	mov esi,dword ptr [edi+0xDAC]
	test esi,esi
	jne Block94

 Block93:
	push 0x80004003
	call _com_issue_error

 Block94:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push ebp
	push esi
	call eax
	test eax,eax
	jge Block96

 Block95:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block96:
	push 0
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov ebx,0xE
	mov edx,0xD
	mov dword ptr [esp+0x68],ebx
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],eax
	test eax,eax
	je Block98

 Block97:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block98:
	mov esi,dword ptr [edi+0xDAC]
	mov byte ptr [esp+0x68],0xF
	test esi,esi
	jne Block100

 Block99:
	push 0x80004003
	call _com_issue_error

 Block100:
	mov edx,dword ptr [esp+0x30]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block102

 Block101:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block102:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x68],bl
	jne Block105

 Block103:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x68],ebp
	test eax,eax
	je Block108

 Block107:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block108:
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 4
}
}
// CField_KillCount::~CField_KillCount
_SUB_EXCEPTION_HANDLER(1540F0)
__SUB_CLASS_THIS0(001540F0, __thiscall, 143642,  CField_KillCount, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1540F0
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
	int 3// TODO: 	mov dword ptr [esi],offset CField_KillCount::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_KillCount::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_KillCount::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_KillCount::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xDAC]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xDA8]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xDA4]
	test eax,eax
	je Block9

 Block5:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	mov eax,dword ptr [esi+0xDA4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0xDA4]
	test ecx,ecx
	je Block8

 Block7:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block8:
	mov dword ptr [esi+0xDA4],0

 Block9:
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
// CField_KillCount::_SetKillCountInfo
__SUB_CLASS_THIS0(00154010, __thiscall, 143647,  CField_KillCount, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xDB4]
	cmp dword ptr [ecx+0xDB0],eax
	je Block2

 Block1:
	mov dword ptr [ecx+0xDB0],eax
	mov eax,1
	ret

 Block2:
	xor eax,eax
	ret
}
}
// CField_KillCount::GetFieldType
__SUB_CLASS_THIS0(001540D0, __thiscall, 143643,  CField_KillCount, long) {
__asm {

 Block0:
	mov eax,0x22
	ret
}
}
// CField_KillCount::OnPacket
__SUB_CLASS_THIS(00154050, __thiscall, 143645,  CField_KillCount, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0xB2
	je Block2

 Block1:
	mov dword ptr [esp+4],eax
	jmp  CField::OnPacket

 Block2:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField_KillCount::OnKillCountInfo
	ret 8
}
}
// CField_KillCount::Update
__SUB_CLASS_THIS0(00154C80, __thiscall, 143642,  CField_KillCount, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::Update
	mov ecx,esi
	call CField_KillCount::_SetKillCountInfo
	pop esi
	test eax,eax
	je Block2

 Block1:
	jmp  CField_KillCount::_UpdateCountInfo

 Block2:
	ret
}
}
// CField_KillCount::OnKillCountInfo
__SUB_CLASS_THIS(00154030, __thiscall, 143646,  CField_KillCount, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode4
	mov dword ptr [esi+0xDB4],eax
	pop esi
	ret 4
}
}
// CField_KillCount::_UpdateCountInfo
_SUB_EXCEPTION_HANDLER(154900)
__SUB_CLASS_THIS0(00154900, __thiscall, 143642,  CField_KillCount, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_154900
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x88
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
	xor edi,edi
	cmp dword ptr [esi+0xDB0],edi
	jl Block35

 Block1:
	cmp dword ptr [esi+0xDAC],edi
	sete al
	test al,al
	jne Block35

 Block2:
	mov eax,3
	mov word ptr [ebp-0x34],ax
	mov dword ptr [ebp-0x2C],edi
	mov ecx,dword ptr [esi+0xDA8]
	mov dword ptr [ebp-4],edi
	cmp ecx,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[ebp-0x34]
	push edx
	lea eax,[ebp-0x1C]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov ebx,8
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp-0x34],bx
	jne Block7

 Block5:
	mov eax,dword ptr [ebp-0x2C]
	xor ecx,ecx
	mov word ptr [ebp-0x34],cx
	cmp eax,edi
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea edx,[ebp-0x34]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov eax,3
	mov word ptr [ebp-0x44],ax
	mov dword ptr [ebp-0x3C],edi
	mov ecx,dword ptr [esi+0xDAC]
	mov byte ptr [ebp-4],al
	cmp ecx,edi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea edx,[ebp-0x44]
	push edx
	lea eax,[ebp-0x20]
	push eax
	call IWzGr2DLayer::Getcanvas
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x44],bx
	jne Block13

 Block11:
	mov eax,dword ptr [ebp-0x3C]
	xor ecx,ecx
	mov word ptr [ebp-0x44],cx
	cmp eax,edi
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea edx,[ebp-0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov ebx,dword ptr [ebp-0x1C]
	cmp ebx,edi
	mov edi,dword ptr [ebp-0x20]
	sete al
	test al,al
	jne Block31

 Block15:
	test edi,edi
	sete al
	test al,al
	jne Block31

 Block16:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x54]
	call Ztl_variant_t::_ctor_1
	mov byte ptr [ebp-4],6
	test edi,edi
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea eax,[ebp-0x54]
	push eax
	push ebx
	push 0
	push 0
	mov ecx,edi
	call IWzCanvas::Copy
	lea ecx,[ebp-0x54]
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [TSingleton<CUIMiniMap>::ms_pInstance]
	test eax,eax
	je Block20

 Block19:
	mov eax,dword ptr [eax+0x28]
	add eax,0xA
	mov dword ptr [ebp-0x18],eax
	jmp Block21

 Block20:
	mov dword ptr [ebp-0x18],0x87

 Block21:
	cmp dword ptr [esi+0xDA4],0
	je Block23

 Block22:
	mov ecx,dword ptr [esi+0xDB0]
	mov edx,dword ptr [ebp-0x18]
	push ecx
	push edx
	push 8
	push ecx
	lea eax,[ebp-0x20]
	mov ecx,esp
	mov dword ptr [ebp-0x14],esp
	push eax
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	mov ecx,dword ptr [esi+0xDA4]
	call CBitmapNumber::Draw

 Block23:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x64]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x54]
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::_ctor_1
	push 0
	push 0
	lea ecx,[ebp-0x64]
	push ecx
	lea edx,[ebp-0x54]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x14],esp
	push 0x1983
	push eax
	mov byte ptr [ebp-4],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],9
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea ecx,[ebp-0x84]
	push ecx
	mov byte ptr [ebp-4],8
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xA
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x24]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[ebp-0x84]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x54]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x64]
	mov byte ptr [ebp-4],0xE
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push 0
	call __itow
	add esp,8
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [ebp-0x24]
	mov byte ptr [ebp-4],0xF
	test esi,esi
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea edx,[ebp-0x94]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	call _x_com_ptr<IWzCanvas>::CreateFromUnknown
	lea ecx,[ebp-0x94]
	mov byte ptr [ebp-4],0x12
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[ebp-0x74]
	call Ztl_variant_t::_ctor_1
	mov ebx,dword ptr [ebp-0x14]
	mov ecx,dword ptr [ebp-0x18]
	lea eax,[ebp-0x74]
	push eax
	push ebx
	push ecx
	push 0x50
	mov ecx,edi
	mov byte ptr [ebp-4],0x13
	call IWzCanvas::Copy
	lea ecx,[ebp-0x74]
	call Ztl_variant_t::~Ztl_variant_t
	mov byte ptr [ebp-4],0xE
	test ebx,ebx
	je Block29

 Block28:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax

 Block29:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],5
	call edx
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [ebp-4],2
	call ecx
	mov eax,dword ptr [ebp-0x1C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block35

 Block30:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block35

 Block31:
	mov byte ptr [ebp-4],2
	test edi,edi
	je Block33

 Block32:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block33:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test ebx,ebx
	je Block35

 Block34:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block35:
	lea esp,[ebp-0xA4]
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
}
}
