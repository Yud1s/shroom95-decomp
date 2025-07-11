#include "regen.hpp"
// Field_Wedding.ipp
#include "Field_Wedding.hpp"

// CField_Wedding::OnWeddingProgress
_SUB_EXCEPTION_HANDLER(1640F0)
__SUB_CLASS_THIS(001640F0, __thiscall, 142857,  CField_Wedding, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1640F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x88
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x9C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,dword ptr [eax+0x20B4]
	mov dword ptr [esp+0x28],ecx
	lea ebx,[edi+0x16C]
	mov ecx,ebx
	call TSecType<unsigned long>::GetData
	cmp eax,0x2887FA6E
	jne Block2

 Block1:
	mov dword ptr [esp+0x24],0x8C6573
	jmp Block4

 Block2:
	mov ecx,ebx
	call TSecType<unsigned long>::GetData
	cmp eax,0x2887FAD2
	jne Block96

 Block3:
	mov dword ptr [esp+0x24],0x8C656A

 Block4:
	mov esi,dword ptr [esp+0xAC]
	mov ecx,esi
	call CInPacket::Decode1
	movzx ebp,al
	mov ecx,esi
	mov dword ptr [esp+0x20],ebp
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [edi+0xDB4],eax
	call CInPacket::Decode4
	mov dword ptr [edi+0xDB8],eax
	mov eax,dword ptr [edi+0xDB0]
	test eax,eax
	je Block13

 Block5:
	mov ecx,ebx
	call TSecType<unsigned long>::GetData
	cmp eax,0x2887FAD2
	jne Block10

 Block6:
	cmp dword ptr [edi+0xDA8],2
	jne Block10

 Block7:
	mov eax,dword ptr [esp+0x28]
	cmp eax,dword ptr [edi+0xDB4]
	je Block10

 Block8:
	cmp eax,dword ptr [edi+0xDB8]
	je Block10

 Block9:
	push 7
	jmp Block11

 Block10:
	push 0x2001

 Block11:
	mov ecx,dword ptr [edi+0xDB0]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	cmp dword ptr [edi+0xDB0],0
	lea esi,[edi+0xDAC]
	je Block13

 Block12:
	push 0
	mov ecx,esi
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block13:
	or esi,0xFFFFFFFF
	mov dword ptr [edi+0xDA8],ebp
	test ebp,ebp
	jne Block23

 Block14:
	cmp dword ptr [edi+0xDBC],ebp
	je Block17

 Block15:
	mov eax,dword ptr [edi+0xDBC]
	test eax,eax
	je Block17

 Block16:
	mov dword ptr [edi+0xDBC],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	mov ecx,ebx
	call TSecType<unsigned long>::GetData
	cmp eax,0x2887FA6E
	jne Block19

 Block18:
	lea eax,[esp+0x14]
	push 0x108E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0xA4],0
	jmp Block21

 Block19:
	mov ecx,ebx
	call TSecType<unsigned long>::GetData
	cmp eax,0x2887FAD2
	jne Block23

 Block20:
	lea ecx,[esp+0x14]
	push 0x108F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov dword ptr [esp+0xA4],1

 Block21:
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0
	push 0
	push 0
	push 1
	push eax
	call CSoundMan::PlayBGM
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0xA4],esi
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block23:
	mov dword ptr [esp+0x1C],0
	mov ebp,2
	mov ecx,ebx
	mov dword ptr [esp+0xA4],ebp
	call TSecType<unsigned long>::GetData
	cmp eax,0x2887FAD2
	jne Block32

 Block24:
	cmp dword ptr [edi+0xDA8],ebp
	jne Block32

 Block25:
	mov eax,dword ptr [esp+0x28]
	cmp eax,dword ptr [edi+0xDB4]
	je Block93

 Block26:
	cmp eax,dword ptr [edi+0xDB8]
	je Block93

 Block27:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xA4],3
	test eax,eax
	je Block29

 Block28:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	jmp Block30

 Block29:
	xor eax,eax

 Block30:
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xA8],2
	call ZRef<CUtilDlgEx>::op_assign_ptr
	push eax
	lea ecx,[edi+0xDAC]
	call ZRef<CUtilDlgEx>::op_assign_copy
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x1090
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+0x28]
	push eax
	push 1
	call CUtilDlgEx::SetUtilDlgEx_1
	mov ecx,dword ptr [esp+0x1C]
	call CUtilDlgEx::SetUtilDlgEx_YESNO
	mov ecx,dword ptr [esp+0x1C]
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,dword ptr [esp+0x1C]
	call CDialog::DoModal
	cmp eax,6
	jne Block93

 Block31:
	push 0xA4
	lea ecx,[esp+0x4C]
	call COutPacket::_ctor_1
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	mov byte ptr [esp+0xA8],4
	call CClientSocket::SendPacket
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0xA4],2
	call ZArray<unsigned char>::RemoveAll
	jmp Block93

 Block32:
	push 0xC50
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xA4],5
	test eax,eax
	je Block34

 Block33:
	mov ecx,eax
	call CUtilDlgEx::_ctor_default
	jmp Block35

 Block34:
	xor eax,eax

 Block35:
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0xA8],2
	call ZRef<CUtilDlgEx>::op_assign_ptr
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	xor ebx,ebx
	lea esi,[edi+0xDAC]
	cmp eax,ebx
	je Block37

 Block36:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block37:
	cmp dword ptr [esi+4],ebx
	je Block39

 Block38:
	push ebx
	mov ecx,esi
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov dword ptr [esi+4],ebx

 Block39:
	mov edx,dword ptr [ebp+4]
	lea eax,[esp+0x58]
	mov dword ptr [esi+4],edx
	mov esi,dword ptr [ZImports::_VariantInit]
	push eax
	call esi
	lea ecx,[esp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block41

 Block40:
	push eax
	call _com_issue_error

 Block41:
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0xA8],6
	call esi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	push ebx
	push ebx
	lea ecx,[esp+0x60]
	push ecx
	lea edx,[esp+0x44]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x6AC
	push eax
	mov byte ptr [esp+0xC0],7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,8
	mov byte ptr [esp+0xB8],8
	cmp dword ptr [_D_G_RM],ebx
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	lea ecx,[esp+0x7C]
	push ecx
	mov byte ptr [esp+0xBC],7
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xAC],9
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x30],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block48

 Block46:
	cmp eax,0x80004002
	je Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	mov byte ptr [esp+0xA4],0xB
	cmp word ptr [esp+0x68],si
	jne Block51

 Block49:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	cmp eax,ebx
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov byte ptr [esp+0xA4],0xC
	cmp word ptr [esp+0x38],si
	jne Block55

 Block53:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,ebx
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov byte ptr [esp+0xA4],0xD
	cmp word ptr [esp+0x58],si
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	cmp eax,ebx
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	xor esi,esi
	push esi
	push esi
	mov dword ptr [esp+0x38],esi
	mov edx,dword ptr [esp+0x2C]
	push edx
	lea eax,[esp+0x3C]
	push offset _S_D__1
	mov bl,0xE
	push eax
	mov byte ptr [esp+0xB8],bl
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,8
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ebp,dword ptr [esp+0x38]
	mov byte ptr [esp+0xB0],0xF
	cmp ebp,esi
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	lea ecx,[esp+0x84]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0xB4],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xAC],0x10
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x38],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block65

 Block63:
	cmp eax,0x80004002
	je Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	cmp word ptr [esp+0x78],8
	mov byte ptr [esp+0xA4],0x12
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0x80]
	xor edx,edx
	mov word ptr [esp+0x78],dx
	cmp eax,esi
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea eax,[esp+0x78]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0xA4],0x13
	cmp eax,esi
	je Block71

 Block70:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block71:
	mov dword ptr [esp+0x14],0
	mov ecx,dword ptr [esp+0x20]
	push ecx
	lea edx,[esp+0x18]
	push offset _S_WEDDINGD
	mov bl,0x14
	push edx
	mov byte ptr [esp+0xB0],bl
	call ZXString<char>::Format
	mov eax,dword ptr [eax]
	add esp,8
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov esi,dword ptr [esp+0x38]
	mov byte ptr [esp+0xA8],0x15
	test esi,esi
	jne Block73

 Block72:
	push 0x80004003
	call _com_issue_error

 Block73:
	lea eax,[esp+0x8C]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xAC],bl
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [esp+0xA4],0x16
	jne Block75

 Block74:
	mov eax,dword ptr [eax+8]
	jmp Block76

 Block75:
	mov eax,offset _S___3

 Block76:
	push 0xFFFFFFFF
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x28],0
	call ZXString<char>::AssignWideStr
	cmp word ptr [esp+0x88],8
	mov byte ptr [esp+0xA4],0x18
	jne Block79

 Block77:
	mov eax,dword ptr [esp+0x90]
	xor ecx,ecx
	mov word ptr [esp+0x88],cx
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea edx,[esp+0x88]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov eax,dword ptr [esp+0x14]
	mov bl,0x19
	mov byte ptr [esp+0xA4],bl
	test eax,eax
	je Block82

 Block81:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block82:
	push 0
	push 0
	push ecx
	mov ecx,esp
	lea eax,[esp+0x2C]
	mov dword ptr [esp+0xA4],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x30]
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	push 0
	call CUtilDlgEx::SetUtilDlgEx_1
	mov ecx,dword ptr [esp+0x1C]
	push 1
	push 0
	call CUtilDlgEx::SetUtilDlgEx_TEXT
	mov ecx,dword ptr [esp+0x1C]
	call CUtilDlgEx::CreateUtilDlgEx
	mov ecx,dword ptr [esp+0x1C]
	call CDialog::DoModal
	mov eax,dword ptr [esp+0x28]
	cmp eax,dword ptr [edi+0xDB4]
	je Block84

 Block83:
	cmp eax,dword ptr [edi+0xDB8]
	jne Block90

 Block84:
	lea ecx,[edi+0x16C]
	call TSecType<unsigned long>::GetData
	cmp eax,0x2887FAD2
	jne Block89

 Block85:
	cmp dword ptr [edi+0xDA8],2
	jne Block89

 Block86:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xA4],0x13
	test eax,eax
	je Block88

 Block87:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block88:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0xA8],0xD
	call eax
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0xA8],2
	call edx
	mov dword ptr [esp+0xA4],0xFFFFFFFF
	jmp Block94

 Block89:
	push 0xA3
	lea ecx,[esp+0x4C]
	call COutPacket::_ctor_1
	movzx eax,byte ptr [edi+0xDA8]
	push eax
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0xA8],0x1A
	call COutPacket::Encode1
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0xA4],bl
	call ZArray<unsigned char>::RemoveAll

 Block90:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xA4],0x13
	test eax,eax
	je Block92

 Block91:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block92:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0xA8],0xD
	call eax
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0xA8],2
	call edx
	or esi,0xFFFFFFFF

 Block93:
	mov dword ptr [esp+0xA4],esi

 Block94:
	cmp dword ptr [esp+0x1C],0
	je Block96

 Block95:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CUtilDlgEx>::_ReleaseRaw

 Block96:
	mov ecx,dword ptr [esp+0x9C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x94
	ret 4
}
}
// CField_Wedding::OnWeddingCeremonyEnd
__SUB_CLASS_THIS(001640A0, __thiscall, 142857,  CField_Wedding, void, CInPacket&) {
__asm {

 Block0:
	push edi
	mov edi,ecx
	mov ecx,dword ptr [edi+0xDB0]
	test ecx,ecx
	je Block4

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x20]
	push esi
	push 0x2001
	call edx
	cmp dword ptr [edi+0xDB0],0
	lea esi,[edi+0xDAC]
	je Block3

 Block2:
	push 0
	mov ecx,esi
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block3:
	pop esi

 Block4:
	push 1
	mov ecx,edi
	call CField_Wedding::SetBlessEffect
	pop edi
	ret 4
}
}
// CField_Wedding::~CField_Wedding
_SUB_EXCEPTION_HANDLER(163A20)
__SUB_CLASS_THIS0(00163A20, __thiscall, 142853,  CField_Wedding, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_163A20
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
	int 3// TODO: 	mov dword ptr [esi],offset CField_Wedding::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_Wedding::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_Wedding::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_Wedding::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xDBC]
	mov dword ptr [esp+0x18],2
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [esi+0xDBC],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xDBC]
	mov byte ptr [esp+0x18],1
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	cmp dword ptr [esi+0xDB0],0
	lea edi,[esi+0xDAC]
	mov byte ptr [esp+0x18],0
	je Block6

 Block5:
	push 0
	mov ecx,edi
	call ZRef<CUtilDlgEx>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block6:
	mov ecx,esi
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CField::~CField
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CField_Wedding::Update
__SUB_CLASS_THIS0(001638F0, __thiscall, 142853,  CField_Wedding, void) {
__asm {

 Block0:
	call CField::Update
	jmp  get_update_time
}
}
// CField_Wedding::GetFieldType
__SUB_CLASS_THIS0(00163A00, __thiscall, 142855,  CField_Wedding, long) {
__asm {

 Block0:
	mov eax,0x3C
	ret
}
}
// CField_Wedding::CField_Wedding
_SUB_EXCEPTION_HANDLER(163960)
__SUB_CLASS_THIS0(00163960, __thiscall, 142851,  CField_Wedding, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_163960
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
	call CField::_ctor_default
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CField_Wedding::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_Wedding::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_Wedding::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_Wedding::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xDA4],eax
	mov dword ptr [esi+0xDA8],eax
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esi+0xDB0],eax
	mov dword ptr [esi+0xDB4],eax
	mov dword ptr [esi+0xDB8],eax
	mov dword ptr [esi+0xDBC],eax
	mov byte ptr [esp+0x14],2
	call get_update_time
	mov dword ptr [esi+0xDA0],eax
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CField_Wedding::SetBlessEffect
_SUB_EXCEPTION_HANDLER(163B60)
__SUB_CLASS_THIS(00163B60, __thiscall, 142856,  CField_Wedding, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_163B60
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
	mov ebp,ecx
	xor ebx,ebx
	cmp dword ptr [esp+0x6C],ebx
	je Block62

 Block1:
	mov eax,dword ptr [ebp+0xDB4]
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	push eax
	call CUserPool::GetUser
	mov ecx,dword ptr [ebp+0xDB8]
	push ecx
	mov ecx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	mov esi,eax
	call CUserPool::GetUser
	mov edi,eax
	cmp esi,ebx
	je Block60

 Block2:
	cmp edi,ebx
	je Block60

 Block3:
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	lea ecx,[esi+4]
	lea eax,[esp+0x34]
	push eax
	call edx
	mov eax,dword ptr [edi+4]
	mov eax,dword ptr [eax+0x10]
	lea ecx,[edi+4]
	lea edx,[esp+0x2C]
	push edx
	call eax
	mov dword ptr [esp+0x6C],ebx
	lea ecx,[esp+0x1C]
	push 0x3D2
	push ecx
	mov dword ptr [esp+0x6C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea edx,[esp+0x70]
	push edx
	push eax
	mov byte ptr [esp+0x70],1
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x64],bl
	cmp eax,ebx
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	mov dword ptr [esp+0x18],ebx
	lea eax,[esp+0x1C]
	push 0x3D2
	push eax
	mov byte ptr [esp+0x6C],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[esp+0x1C]
	push ecx
	push eax
	mov byte ptr [esp+0x70],3
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x64],2
	cmp eax,ebx
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block7:
	lea edx,[esp+0x1C]
	push edx
	mov ecx,esi
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x64],4
	mov word ptr [esp+0x3C],cx
	mov dword ptr [esp+0x44],eax
	cmp eax,ebx
	je Block9

 Block8:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block9:
	mov ecx,dword ptr [esp+0x18]
	mov byte ptr [esp+0x64],5
	cmp ecx,ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea edx,[esp+0x3C]
	push edx
	call IWzVector2D::Putorigin
	mov esi,8
	mov byte ptr [esp+0x64],4
	cmp word ptr [esp+0x3C],si
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebx
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x64],2
	cmp eax,ebx
	je Block17

 Block16:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block17:
	mov dword ptr [esp+0x14],ebx
	lea ecx,[esp+0x1C]
	push 0x3D2
	push ecx
	mov byte ptr [esp+0x6C],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea edx,[esp+0x18]
	push edx
	push eax
	mov byte ptr [esp+0x70],7
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x64],6
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x64],8
	mov word ptr [esp+0x3C],cx
	mov dword ptr [esp+0x44],eax
	cmp eax,ebx
	je Block21

 Block20:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block21:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],9
	cmp ecx,ebx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea edx,[esp+0x3C]
	push edx
	call IWzVector2D::Putorigin
	mov byte ptr [esp+0x64],8
	cmp word ptr [esp+0x3C],si
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebx
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x64],6
	cmp eax,ebx
	je Block29

 Block28:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block29:
	mov ecx,dword ptr [esp+0x6C]
	cmp ecx,ebx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	mov edx,dword ptr [esp+0x30]
	mov eax,dword ptr [esp+0x38]
	add eax,edx
	cdq
	sub eax,edx
	mov edx,dword ptr [esp+0x2C]
	sar eax,1
	sub eax,0x14
	push eax
	mov eax,dword ptr [esp+0x38]
	add eax,edx
	cdq
	sub eax,edx
	sar eax,1
	push eax
	call IWzShape2D::Move
	mov ecx,dword ptr [esp+0x6C]
	cmp ecx,ebx
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	mov edx,dword ptr [esp+0x18]
	push 1
	push 1
	push 2
	push 2
	push edx
	call IWzVector2D::Ratio
	mov ecx,dword ptr [esp+0x6C]
	cmp ecx,ebx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	mov eax,dword ptr [esp+0x14]
	push 1
	push 1
	push 2
	push 2
	push eax
	call IWzVector2D::Ratio
	push ebx
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [eax],ebx
	push ebx
	push ebx
	push ecx
	mov ecx,dword ptr [esp+0x88]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x88]
	mov byte ptr [esp+0x80],0xA
	mov dword ptr [esp+0x44],esp
	cmp eax,ebx
	je Block37

 Block36:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block37:
	lea ecx,[esp+0x3C]
	push 0x1091
	push ecx
	mov byte ptr [esp+0x88],0xB
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x80],0xC
	push ebx
	push eax
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x8C],0xD
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	lea esi,[ebp+0xDBC]
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x64],6
	cmp eax,ebx
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block41:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x4C]
	push eax
	call edi
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x68],0xE
	call edi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x64],0xF
	cmp ecx,ebx
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x40]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x64],0xE
	cmp word ptr [esp+0x3C],si
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebx
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov byte ptr [esp+0x64],6
	cmp word ptr [esp+0x4C],si
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebx
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],2
	cmp eax,ebx
	je Block57

 Block56:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block57:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x64],bl
	cmp eax,ebx
	je Block59

 Block58:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block59:
	mov eax,dword ptr [esp+0x6C]
	mov dword ptr [esp+0x64],0xFFFFFFFF
	jmp Block64

 Block60:
	mov eax,dword ptr [ebp+0xDBC]
	cmp eax,ebx
	je Block66

 Block61:
	mov dword ptr [ebp+0xDBC],ebx
	jmp Block65

 Block62:
	mov eax,dword ptr [ebp+0xDBC]
	cmp eax,ebx
	je Block66

 Block63:
	mov dword ptr [ebp+0xDBC],ebx

 Block64:
	cmp eax,ebx
	je Block66

 Block65:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block66:
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret 4
}
}
// CField_Wedding::OnPacket
__SUB_CLASS_THIS(00164940, __thiscall, 142854,  CField_Wedding, void, long, CInPacket&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,edx
	sub eax,0x17B
	je Block4

 Block1:
	sub eax,1
	je Block3

 Block2:
	mov dword ptr [esp+4],edx
	jmp  CField::OnPacket

 Block3:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField_Wedding::OnWeddingCeremonyEnd
	ret 8

 Block4:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField_Wedding::OnWeddingProgress
	ret 8
}
}
