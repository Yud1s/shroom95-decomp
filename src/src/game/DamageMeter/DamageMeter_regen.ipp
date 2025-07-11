#include "regen.hpp"
// DamageMeter.ipp
#include "DamageMeter.hpp"

// CDamageMeter::Update
__SUB_CLASS_THIS0(000F19C0, __thiscall, 71424,  CDamageMeter, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+4],0
	je Block10

 Block1:
	mov eax,dword ptr [esi+0x1C]
	mov ecx,dword ptr [eax+0x94]
	mov edx,dword ptr [esi+0x14]
	sub edx,ecx
	cmp edx,1
	jle Block7

 Block2:
	mov eax,dword ptr [esi+8]
	push edi
	mov edi,dword ptr [esi+0x18]
	sub edi,ecx
	cdq
	idiv edi
	pop edi
	cmp dword ptr [esi+0x10],eax
	mov dword ptr [esi+0xC],eax
	jge Block4

 Block3:
	mov dword ptr [esi+0x10],eax

 Block4:
	mov ecx,dword ptr [esi+0x20]
	test ecx,ecx
	je Block6

 Block5:
	mov eax,dword ptr [esi+0x10]
	mov edx,dword ptr [esi+0xC]
	push eax
	push edx
	call CUIDamageBoard::UpdateDamageInfo

 Block6:
	mov eax,dword ptr [esi+0x1C]
	mov ecx,dword ptr [eax+0x94]
	mov dword ptr [esi+0x14],ecx

 Block7:
	cmp dword ptr [eax+0x80],0
	je Block10

 Block8:
	cmp dword ptr [eax+0x94],0
	jne Block10

 Block9:
	mov ecx,esi
	pop esi
	jmp  CDamageMeter::KillTimer

 Block10:
	pop esi
	ret
}
}
// CDamageMeter::LoadDamageInfo
_SUB_EXCEPTION_HANDLER(F1A30)
__SUB_CLASS_THIS0(000F1A30, __thiscall, 71424,  CDamageMeter, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F1A30
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
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x20]
	push eax
	call CWvsContext::GetCharacterData
	mov ecx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x24]
	xor ebx,ebx
	mov dword ptr [esp+0x18],ecx
	cmp eax,ebx
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov dword ptr [esp+0x24],ebx

 Block5:
	mov dword ptr [esp+0x14],ebx
	mov esi,dword ptr [esp+0x18]
	lea ecx,[esp+0x14]
	push ecx
	lea edx,[esp+0x20]
	add esi,0x6F5
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x38],ebx
	mov dword ptr [esp+0x24],0x1E11
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetAt
	test eax,eax
	jne Block8

 Block6:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block17

 Block7:
	add eax,0xFFFFFFF4
	push eax
	jmp Block16

 Block8:
	mov edi,dword ptr [esp+0x14]
	push edi
	call _atoi
	add esp,4
	mov dword ptr [ebp+0x10],eax
	mov dword ptr [esp+0x18],ebx
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x38],1
	mov dword ptr [esp+0x24],0x1E12
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetAt
	test eax,eax
	jne Block11

 Block9:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block14

 Block10:
	add eax,0xFFFFFFF4
	push eax
	jmp Block13

 Block11:
	mov esi,dword ptr [esp+0x18]
	push esi
	call _atoi
	add esp,4
	mov dword ptr [ebp+0xC],eax
	mov byte ptr [esp+0x30],bl
	cmp esi,ebx
	je Block14

 Block12:
	add esi,0xFFFFFFF4
	push esi

 Block13:
	call ZXString<char>::_Release
	add esp,4

 Block14:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp edi,ebx
	je Block17

 Block15:
	add edi,0xFFFFFFF4
	push edi

 Block16:
	call ZXString<char>::_Release
	add esp,4

 Block17:
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
// CDamageMeter::KillTimer
__SUB_CLASS_THIS0(000F1980, __thiscall, 71424,  CDamageMeter, void) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,ecx
	call CDamageMeter::SaveDamageInfo
	mov ecx,dword ptr [esi+0x1C]
	xor edi,edi
	mov dword ptr [esi+4],edi
	mov dword ptr [esi+8],edi
	cmp ecx,edi
	je Block2

 Block1:
	call CWnd::Destroy
	mov dword ptr [esi+0x1C],edi

 Block2:
	mov ecx,dword ptr [esi+0x20]
	cmp ecx,edi
	je Block4

 Block3:
	call CWnd::Destroy
	mov dword ptr [esi+0x20],edi

 Block4:
	pop edi
	pop esi
	ret
}
}
// CDamageMeter::SaveDamageInfo
_SUB_EXCEPTION_HANDLER(F10D0)
__SUB_CLASS_THIS0(000F10D0, __thiscall, 71424,  CDamageMeter, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F10D0
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
	mov esi,ecx
	push 0x84
	lea ecx,[esp+0x20]
	call COutPacket::_ctor_1
	xor ebx,ebx
	push 0x1E11
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x38],ebx
	call COutPacket::Encode2
	mov dword ptr [esp+0x10],ebx
	lea eax,[esp+0xC]
	push 0x1A15
	push eax
	mov byte ptr [esp+0x3C],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x10]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x40],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x18]
	add esp,0xC
	mov byte ptr [esp+0x34],1
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	push ecx
	mov ecx,esp
	lea eax,[esp+0x14]
	mov dword ptr [esp+0x18],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x20]
	call COutPacket::EncodeStr
	push 0x1E12
	lea ecx,[esp+0x20]
	call COutPacket::Encode2
	mov dword ptr [esp+0xC],ebx
	lea ecx,[esp+0x14]
	push 0x1A15
	push ecx
	mov byte ptr [esp+0x3C],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi+0xC]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x14]
	push eax
	mov byte ptr [esp+0x40],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x34],3
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x10]
	mov dword ptr [esp+0x1C],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x20]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x1C]
	push eax
	call CClientSocket::SendPacket
	mov eax,dword ptr [esp+0xC]
	mov byte ptr [esp+0x34],1
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x2C
	ret
}
}
// CUIDamageBoard::UpdateDamageInfo
__SUB_CLASS_THIS(000F0D80, __thiscall, 71409,  CUIDamageBoard, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	push 0
	mov dword ptr [ecx+0x80],eax
	mov dword ptr [ecx+0x84],edx
	call CWnd::InvalidateRect
	ret 8
}
}
// CUIDamageBoard::OnCreate
__SUB_CLASS_THIS(000F0D70, __thiscall, 71406,  CUIDamageBoard, void, void*) {
__asm {

 Block0:
	ret 4
}
}
// CDamageMeter::SetTimer
_SUB_EXCEPTION_HANDLER(F0F20)
__SUB_CLASS_THIS(000F0F20, __thiscall, 71425,  CDamageMeter, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F0F20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	xor ebx,ebx
	cmp eax,ebx
	jne Block12

 Block1:
	mov edi,dword ptr [esp+0x54]
	lea ecx,[esp+0x14]
	mov dword ptr [esi+0xC],ebx
	mov dword ptr [esi+0x14],edi
	mov dword ptr [esi+0x18],edi
	call CClock::INITPARAM::_ctor_default
	lea eax,[esp+0x54]
	push 0xB68
	push eax
	mov dword ptr [esp+0x54],ebx
	mov dword ptr [esp+0x20],0xFF000040
	mov dword ptr [esp+0x24],0xFFFFFF20
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x50],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block3

 Block2:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block3:
	lea ecx,[esp+0x54]
	push 0xB0B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x50],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block5:
	push 0xDC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x4C],3
	cmp eax,ebx
	je Block7

 Block6:
	mov ecx,eax
	call CClock::_ctor_default
	jmp Block8

 Block7:
	xor eax,eax

 Block8:
	push ebx
	push 1
	lea edx,[esp+0x1C]
	push edx
	push 1
	push 0xC00616FC
	push 0x3A
	push 0x102
	push 0x1E
	push 0x10F
	mov ecx,eax
	mov byte ptr [esp+0x70],bl
	mov dword ptr [esi+0x1C],eax
	call CWnd::CreateWnd
	mov ecx,dword ptr [esi+0x1C]
	push edi
	call CClock::SetTimer
	mov ecx,dword ptr [esi+0x1C]
	call CClock::Start
	push 0x88
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x4C],4
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,eax
	call CUIDamageBoard::_ctor_default
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [esi+0xC]
	push ecx
	push edx
	mov ecx,eax
	mov byte ptr [esp+0x54],bl
	mov dword ptr [esi+0x20],eax
	call CUIDamageBoard::UpdateDamageInfo
	lea ecx,[esp+0x14]
	mov dword ptr [esi+4],1
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	call CClock::INITPARAM::~INITPARAM

 Block12:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x40
	ret 4
}
}
// CDamageMeter::~CDamageMeter
_SUB_EXCEPTION_HANDLER(F0E10)
__SUB_CLASS_THIS0(000F0E10, __thiscall, 71424,  CDamageMeter, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F0E10
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
	int 3// TODO: 	mov dword ptr [esi],offset CDamageMeter::`vftable'
	mov ecx,dword ptr [esi+0x1C]
	xor edi,edi
	mov dword ptr [esp+0x18],edi
	cmp ecx,edi
	je Block2

 Block1:
	call CWnd::Destroy
	mov dword ptr [esi+0x1C],edi

 Block2:
	mov ecx,dword ptr [esi+0x20]
	cmp ecx,edi
	je Block4

 Block3:
	call CWnd::Destroy
	mov dword ptr [esi+0x20],edi

 Block4:
	mov dword ptr [TSingleton<CDamageMeter>::ms_pInstance],edi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CUIDamageBoard::Draw
_SUB_EXCEPTION_HANDLER(F1290)
__SUB_CLASS_THIS(000F1290, __thiscall, 71407,  CUIDamageBoard, void, const tagRECT*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F1290
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
	mov dword ptr [ebp+0x34],ecx
	lea eax,[ebp+0x50]
	push eax
	call CWnd::GetCanvas
	xor edi,edi
	mov dword ptr [ebp-4],edi
	mov dword ptr [ebp+0x64],edi
	mov esi,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],1
	cmp esi,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push 0x12C
	push 0x190
	push edi
	push edi
	push esi
	call edx
	cmp eax,edi
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x10]
	push eax
	call esi
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
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
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	push edi
	push edi
	lea ecx,[ebp+0x10]
	push ecx
	lea edx,[ebp]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x58],esp
	push 0x3DC
	push eax
	mov byte ptr [ebp-4],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],4
	cmp dword ptr [_D_G_RM],edi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea ecx,[ebp-0x2C]
	push ecx
	mov byte ptr [ebp-4],3
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],5
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x38]
	mov dword ptr [ebp+0x38],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block13

 Block11:
	cmp eax,0x80004002
	je Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x2C],bx
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[ebp-0x2C]
	push eax
	call esi

 Block17:
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp],bx
	jne Block20

 Block18:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[ebp]
	push edx
	call esi

 Block21:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp+0x10],bx
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	cmp eax,edi
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[ebp+0x10]
	push ecx
	call esi

 Block25:
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x58],esp
	push 0x3E1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x38]
	mov byte ptr [ebp-4],0xA
	cmp ecx,edi
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[ebp-0x1C]
	push eax
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x4C],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block30

 Block28:
	cmp eax,0x80004002
	je Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x1C],bx
	jne Block33

 Block31:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,edi
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[ebp-0x1C]
	push edx
	call esi

 Block34:
	mov dword ptr [ebp+0x54],edi
	lea eax,[ebp+0x60]
	push 0x1A15
	push eax
	mov byte ptr [ebp-4],0xE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x34]
	mov edx,dword ptr [ecx+0x84]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp+0x54]
	push eax
	mov byte ptr [ebp-4],0xF
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x60]
	add esp,0xC
	mov byte ptr [ebp-4],0xE
	cmp eax,edi
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block36:
	mov ebx,dword ptr [ebp+0x4C]
	mov dword ptr [ebp+0x60],edi
	mov dword ptr [ebp+0x5C],edi

 Block37:
	mov esi,dword ptr [ebp+0x54]
	test esi,esi
	je Block39

 Block38:
	mov eax,dword ptr [esi-4]
	jmp Block40

 Block39:
	xor eax,eax

 Block40:
	cmp edi,eax
	jge Block62

 Block41:
	mov eax,0x20
	call __chkstk
	mov cl,byte ptr [edi+esi]
	mov eax,esp
	push 0
	push 0
	movsx ecx,cl
	push 0xA
	push eax
	sub ecx,0x30
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x20],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x10
	test ebx,ebx
	je Block1

 Block42:
	lea edx,[ebp+0x24]
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0xE
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x11
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block50

 Block43:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x58]
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
	and ecx,dword ptr [ebp+0x58]
	cmp dword ptr [ebp+0x64],0
	mov edi,ecx
	je Block45

 Block44:
	mov eax,dword ptr [ebp+0x64]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block45:
	mov dword ptr [ebp+0x64],edi
	test esi,esi
	jge Block47

 Block46:
	cmp esi,0x80004002
	jne Block61

 Block47:
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0xE
	jne Block53

 Block48:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block54

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block50:
	cmp dword ptr [ebp+0x64],0
	je Block47

 Block51:
	mov eax,dword ptr [ebp+0x64]
	mov dword ptr [ebp+0x64],0
	test eax,eax
	je Block47

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block47

 Block53:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [ebp+0x3C],dx
	mov dword ptr [ebp+0x44],ecx
	mov edi,dword ptr [ebp+0x3C]
	mov esi,dword ptr [ebp+0x50]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x40]
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x48]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [ebp+0x5C]
	push eax
	push 0
	push ecx
	push esi
	mov byte ptr [ebp-4],0x12
	call edx
	test eax,eax
	jge Block56

 Block55:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block56:
	cmp word ptr [ebp+0x3C],8
	mov byte ptr [ebp-4],0xE
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [ebp+0x3C],ax
	mov eax,dword ptr [ebp+0x44]
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc dword ptr [ebp+0x60]
	add dword ptr [ebp+0x5C],0x1E
	mov edi,dword ptr [ebp+0x60]
	jmp Block37

 Block59:
	lea ecx,[ebp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	inc dword ptr [ebp+0x60]
	add dword ptr [ebp+0x5C],0x1E
	mov edi,dword ptr [ebp+0x60]
	jmp Block37

 Block61:
	push esi
	call _com_issue_error

 Block62:
	mov dword ptr [ebp+0x5C],0
	lea edx,[ebp+0x58]
	push 0x1A15
	push edx
	mov byte ptr [ebp-4],0x13
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x34]
	mov edx,dword ptr [ecx+0x80]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[ebp+0x5C]
	push eax
	mov byte ptr [ebp-4],0x14
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x58]
	add esp,0xC
	mov byte ptr [ebp-4],0x13
	test eax,eax
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block64:
	xor ebx,ebx
	mov dword ptr [ebp+0x60],0xC8

 Block65:
	mov esi,dword ptr [ebp+0x5C]
	test esi,esi
	je Block67

 Block66:
	mov eax,dword ptr [esi-4]
	jmp Block68

 Block67:
	xor eax,eax

 Block68:
	cmp ebx,eax
	jge Block89

 Block69:
	mov eax,0x20
	call __chkstk
	mov cl,byte ptr [esi+ebx]
	mov eax,esp
	push 0
	push 0
	movsx ecx,cl
	push 0xA
	push eax
	sub ecx,0x30
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x20],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],0x15
	test ecx,ecx
	je Block1

 Block70:
	lea edx,[ebp+0x24]
	push edx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x16
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block78

 Block71:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x58]
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
	and ecx,dword ptr [ebp+0x58]
	cmp dword ptr [ebp+0x64],0
	mov edi,ecx
	je Block73

 Block72:
	mov eax,dword ptr [ebp+0x64]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block73:
	mov dword ptr [ebp+0x64],edi
	test esi,esi
	jge Block75

 Block74:
	cmp esi,0x80004002
	jne Block61

 Block75:
	cmp word ptr [ebp+0x24],8
	mov byte ptr [ebp-4],0x13
	jne Block81

 Block76:
	xor eax,eax
	mov word ptr [ebp+0x24],ax
	mov eax,dword ptr [ebp+0x2C]
	test eax,eax
	je Block82

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block78:
	cmp dword ptr [ebp+0x64],0
	je Block75

 Block79:
	mov eax,dword ptr [ebp+0x64]
	mov dword ptr [ebp+0x64],0
	test eax,eax
	je Block75

 Block80:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block75

 Block81:
	lea ecx,[ebp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block82:
	mov edx,3
	mov ecx,0xFF
	mov word ptr [ebp+0x3C],dx
	mov dword ptr [ebp+0x44],ecx
	mov edi,dword ptr [ebp+0x3C]
	mov esi,dword ptr [ebp+0x50]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x40]
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x48]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebp+0x64]
	mov ecx,dword ptr [ebp+0x60]
	push eax
	push 0
	push ecx
	push esi
	mov byte ptr [ebp-4],0x17
	call edx
	test eax,eax
	jge Block84

 Block83:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block84:
	cmp word ptr [ebp+0x3C],8
	mov byte ptr [ebp-4],0x13
	jne Block87

 Block85:
	xor eax,eax
	mov word ptr [ebp+0x3C],ax
	mov eax,dword ptr [ebp+0x44]
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc ebx
	add dword ptr [ebp+0x60],0x1E
	jmp Block65

 Block87:
	lea ecx,[ebp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block88:
	inc ebx
	add dword ptr [ebp+0x60],0x1E
	jmp Block65

 Block89:
	mov byte ptr [ebp-4],0xE
	test esi,esi
	je Block91

 Block90:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block91:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block93

 Block92:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block93:
	mov eax,dword ptr [ebp+0x4C]
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block95

 Block94:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block95:
	mov eax,dword ptr [ebp+0x38]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],1
	call edx
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block97

 Block96:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block97:
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
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
	ret 4
}
}
// CUIDamageBoard::OnSetFocus
__SUB_CLASS_THIS(000F0D40, __thiscall, 71408,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CDamageMeter::CDamageMeter
__SUB_CLASS_THIS0(000F0DD0, __thiscall, 71422,  CDamageMeter, void) {
__asm {

 Block0:
	mov eax,ecx
	lea ecx,[eax+4]
	xor edx,edx
	cmp ecx,edx
	je Block2

 Block1:
	push esi
	lea esi,[ecx-4]
	mov dword ptr [TSingleton<CDamageMeter>::ms_pInstance],esi
	pop esi
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CDamageMeter>::ms_pInstance],edx

 Block3:
	int 3// TODO: 	mov dword ptr [eax],offset CDamageMeter::`vftable'
	mov dword ptr [ecx],edx
	mov dword ptr [eax+8],edx
	mov dword ptr [eax+0xC],edx
	mov dword ptr [eax+0x10],edx
	mov dword ptr [eax+0x14],edx
	mov dword ptr [eax+0x18],0x12C
	mov dword ptr [eax+0x1C],edx
	mov dword ptr [eax+0x20],edx
	ret
}
}
// CUIDamageBoard::~CUIDamageBoard
__SUB_CLASS_THIS0(000F0D50, __thiscall, 71405,  CUIDamageBoard, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset CUIDamageBoard::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [ecx+4],offset CUIDamageBoard::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [ecx+8],offset CUIDamageBoard::`vftable'{for `ZRefCounted'}
	jmp  CWnd::~CWnd
}
}
// CDamageMeter::AddDamageInfo
__SUB_CLASS_THIS(000F0DA0, __thiscall, 71425,  CDamageMeter, void, long) {
__asm {

 Block0:
	cmp dword ptr [ecx+4],0
	je Block2

 Block1:
	mov eax,dword ptr [esp+4]
	add dword ptr [ecx+8],eax

 Block2:
	ret 4
}
}
// CUIDamageBoard::CUIDamageBoard
_SUB_EXCEPTION_HANDLER(F0CB0)
__SUB_CLASS_THIS0(000F0CB0, __thiscall, 71403,  CUIDamageBoard, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F0CB0
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
	call CWnd::_ctor_default
	xor eax,eax
	push eax
	push 1
	push eax
	push 1
	push 0xA
	push 0x12C
	push 0x190
	push 0x64
	push 0xC8
	mov ecx,esi
	mov dword ptr [esp+0x38],eax
	int 3// TODO: 	mov dword ptr [esi],offset CUIDamageBoard::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIDamageBoard::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIDamageBoard::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x80],eax
	mov dword ptr [esi+0x84],eax
	call CWnd::CreateWnd
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
