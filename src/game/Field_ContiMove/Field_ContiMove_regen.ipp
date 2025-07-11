#include "regen.hpp"
// Field_ContiMove.ipp
#include "Field_ContiMove.hpp"

// CField_ContiMove::OnPacket
__SUB_CLASS_THIS(0014D6E0, __thiscall, 143821,  CField_ContiMove, void, long, CInPacket&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,edx
	sub eax,0xA4
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
	call CField_ContiMove::OnContiState
	ret 8

 Block4:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField_ContiMove::OnContiMove
	ret 8
}
}
// CShip::DisappearShip
_SUB_EXCEPTION_HANDLER(14C000)
__SUB_CLASS_THIS0(0014C000, __thiscall, 143833,  CShip, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14C000
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x18],ebx
	cmp dword ptr [edi+0x40],ebx
	sete al
	test al,al
	jne Block9

 Block1:
	cmp dword ptr [edi+0xC],1
	jne Block9

 Block2:
	mov ecx,dword ptr [edi+0x40]
	test ecx,ecx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov ebx,1
	mov dword ptr [esp+0x48],0
	mov dword ptr [esp+0x18],ebx
	test esi,esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x20]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	cmp dword ptr [esp+0x14],0
	mov byte ptr [esp+0x13],0
	jne Block10

 Block9:
	mov byte ptr [esp+0x13],1

 Block10:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test bl,1
	je Block13

 Block11:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	cmp byte ptr [esp+0x13],0
	jne Block42

 Block14:
	mov ecx,dword ptr [edi+0x40]
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x48],1
	test esi,esi
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x40]
	push 0xFF
	push 0xFF
	push esi
	call edx
	test eax,eax
	jge Block20

 Block19:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block22:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block24

 Block23:
	push eax
	call _com_issue_error

 Block24:
	mov esi,dword ptr [edi+0x40]
	mov dword ptr [esp+0x48],2
	test esi,esi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x58]
	lea eax,[esp+0x14]
	push eax
	push esi
	mov dword ptr [esp+0x1C],0
	call ecx
	test eax,eax
	jge Block28

 Block27:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block28:
	mov eax,dword ptr [edi+0x20]
	imul eax,0x3E8
	add eax,dword ptr [esp+0x14]
	mov ebx,3
	mov edx,ebx
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],eax
	mov ecx,dword ptr [edi+0x40]
	mov byte ptr [esp+0x48],bl
	test ecx,ecx
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x48],4
	test ecx,ecx
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x48],bl
	test eax,eax
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x48],2
	cmp word ptr [esp+0x20],si
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[esp+0x20]
	push ecx
	call edi

 Block38:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp word ptr [esp+0x30],si
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x3C
	ret

 Block41:
	lea eax,[esp+0x30]
	push eax
	call edi

 Block42:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x3C
	ret
}
}
// CField_ContiMove::OnKey
__SUB_CLASS_THIS(0014C520, __thiscall, 143820,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	push eax
	push ecx
	mov ecx,esi
	call CField::OnKey
	mov eax,1
	cmp dword ptr [esi+0xDA8],eax
	jne Block3

 Block1:
	add dword ptr [esi+0xDE4],eax
	cmp dword ptr [esi+0xDE4],0x28
	jne Block3

 Block2:
	lea ecx,[esi+0xD9C]
	mov dword ptr [esi+0xDE4],0
	call CShip::MoveShip

 Block3:
	pop esi
	ret 8
}
}
// CField_ContiMove::OnEndShipMoveField
__SUB_CLASS_THIS(0014C9A0, __thiscall, 143822,  CField_ContiMove, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode1
	cmp al,6
	jne Block2

 Block1:
	lea ecx,[esi+0xDA0]
	call CShip::EnterShipMove

 Block2:
	pop esi
	ret 4
}
}
// CField_ContiMove::Init
_SUB_EXCEPTION_HANDLER(14D4C0)
__SUB_CLASS_THIS(0014D4C0, __thiscall, 143819,  CField_ContiMove, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14D4C0
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
	mov eax,dword ptr [esp+0x28]
	push eax
	call CField::Init
	mov eax,dword ptr [esi+0x30]
	push ecx
	mov ecx,esp
	mov dword ptr [esi+0xDE8],0
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	lea ecx,[esi+0xDA0]
	call CShip::Init
	mov eax,dword ptr [esi+0xDAC]
	test eax,eax
	je Block4

 Block3:
	cmp eax,1
	jne Block5

 Block4:
	push 0x108
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	lea ecx,[esi+0x16C]
	mov dword ptr [esp+0x20],0
	call TSecType<unsigned long>::GetData
	push eax
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	movzx eax,byte ptr [esi+0xDAC]
	push eax
	lea ecx,[esp+0xC]
	call COutPacket::Encode1
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block5:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret 4
}
}
// CShip::EnterShipMove
_SUB_EXCEPTION_HANDLER(14C770)
__SUB_CLASS_THIS0(0014C770, __thiscall, 143833,  CShip, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14C770
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
	mov esi,ecx
	cmp dword ptr [esi+0x40],0
	sete al
	test al,al
	jne Block24

 Block1:
	cmp dword ptr [esi+0xC],0
	jne Block24

 Block2:
	lea eax,[esp+0x10]
	push 0x509
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [esp+0x44],0
	call play_object_sound
	mov eax,dword ptr [esp+0x18]
	add esp,8
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov edi,dword ptr [esi+0x44]
	test edi,edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov eax,dword ptr [esi+0x18]
	mov ecx,dword ptr [esi+0x14]
	mov edx,dword ptr [edi]
	push eax
	mov eax,dword ptr [edx+0x40]
	push ecx
	push edi
	call eax
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block8:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov edi,dword ptr [esi+0x40]
	mov dword ptr [esp+0x3C],1
	test edi,edi
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x58]
	lea ecx,[esp+0xC]
	push ecx
	push edi
	mov dword ptr [esp+0x14],0
	call edx
	test eax,eax
	jge Block14

 Block13:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block14:
	mov eax,dword ptr [esi+0x20]
	imul eax,0x3E8
	add eax,dword ptr [esp+0xC]
	mov ecx,3
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	mov ecx,dword ptr [esi+0x44]
	mov byte ptr [esp+0x3C],2
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea edx,[esp+0x24]
	push edx
	mov edx,dword ptr [esi+0x18]
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [esi+0x10]
	push edx
	push eax
	call IWzVector2D::RelMove
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x3C],1
	cmp word ptr [esp+0x14],si
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block20:
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp word ptr [esp+0x24],si
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x34
	ret

 Block23:
	lea ecx,[esp+0x24]
	push ecx
	call edi

 Block24:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x34
	ret
}
}
// CShip::LeaveShipMove
_SUB_EXCEPTION_HANDLER(14C570)
__SUB_CLASS_THIS0(0014C570, __thiscall, 143833,  CShip, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14C570
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
	mov esi,ecx
	cmp dword ptr [esi+0x40],0
	sete al
	test al,al
	jne Block24

 Block1:
	cmp dword ptr [esi+0xC],0
	jne Block24

 Block2:
	lea eax,[esp+0x10]
	push 0x509
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov dword ptr [esp+0x44],0
	call play_object_sound
	mov eax,dword ptr [esp+0x18]
	add esp,8
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov edi,dword ptr [esi+0x44]
	test edi,edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov eax,dword ptr [esi+0x18]
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [edi]
	push eax
	mov eax,dword ptr [edx+0x40]
	push ecx
	push edi
	call eax
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block8:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov edi,dword ptr [esi+0x40]
	mov dword ptr [esp+0x3C],1
	test edi,edi
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x58]
	lea ecx,[esp+0xC]
	push ecx
	push edi
	mov dword ptr [esp+0x14],0
	call edx
	test eax,eax
	jge Block14

 Block13:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block14:
	mov eax,dword ptr [esi+0x20]
	imul eax,0x3E8
	add eax,dword ptr [esp+0xC]
	mov ecx,3
	mov word ptr [esp+0x14],cx
	mov dword ptr [esp+0x1C],eax
	mov ecx,dword ptr [esi+0x44]
	mov byte ptr [esp+0x3C],2
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea edx,[esp+0x24]
	push edx
	mov edx,dword ptr [esi+0x18]
	lea eax,[esp+0x18]
	push eax
	mov eax,dword ptr [esi+0x14]
	push edx
	push eax
	call IWzVector2D::RelMove
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x3C],1
	cmp word ptr [esp+0x14],si
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block20:
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp word ptr [esp+0x24],si
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x34
	ret

 Block23:
	lea ecx,[esp+0x24]
	push ecx
	call edi

 Block24:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x34
	ret
}
}
// CShip::MoveShip
_SUB_EXCEPTION_HANDLER(14C2B0)
__SUB_CLASS_THIS0(0014C2B0, __thiscall, 143833,  CShip, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14C2B0
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
	mov esi,ecx
	cmp dword ptr [esi+0x40],0
	sete al
	test al,al
	jne Block29

 Block1:
	mov edi,dword ptr [esi+0x44]
	test edi,edi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov eax,dword ptr [esi+0x18]
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [edi]
	push eax
	mov eax,dword ptr [edx+0x40]
	push ecx
	push edi
	call eax
	test eax,eax
	jge Block5

 Block4:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block5:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x1E
	div ecx
	mov ecx,offset _D_G_RAND
	add edx,0x14
	mov dword ptr [esp+0x20],edx
	call CRand32::Random
	xor edx,edx
	mov ecx,0xA
	div ecx
	mov eax,dword ptr [esi+0x10]
	cmp edx,5
	sbb ebp,ebp
	and ebp,0xFFFFFFFE
	inc ebp
	cmp dword ptr [esi+0x2C],eax
	jle Block7

 Block6:
	lea ebp,[ecx-9]
	jmp Block9

 Block7:
	cmp dword ptr [esi+0x30],eax
	jge Block9

 Block8:
	or ebp,0xFFFFFFFF

 Block9:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x1E
	div ecx
	mov ecx,offset _D_G_RAND
	mov ebx,edx
	add ebx,0x14
	call CRand32::Random
	xor edx,edx
	mov ecx,0xA
	div ecx
	mov eax,dword ptr [esi+0x18]
	cmp edx,5
	sbb edi,edi
	and edi,0xFFFFFFFE
	inc edi
	cmp dword ptr [esi+0x38],eax
	jle Block11

 Block10:
	lea edi,[ecx-9]
	jmp Block13

 Block11:
	cmp dword ptr [esi+0x34],eax
	jge Block13

 Block12:
	or edi,0xFFFFFFFF

 Block13:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0xA
	div ecx
	add edx,ecx
	imul edx,0x64
	mov dword ptr [esp+0x1C],edx
	lea edx,[esp+0x34]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	xor ecx,ecx
	add esp,8
	cmp eax,ecx
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov eax,dword ptr [esi+0x40]
	mov dword ptr [esp+0x4C],ecx
	mov dword ptr [esp+0x18],eax
	cmp eax,ecx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea edx,[esp+0x14]
	mov dword ptr [esp+0x14],ecx
	mov ecx,dword ptr [eax]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x58]
	call eax
	test eax,eax
	jge Block19

 Block18:
	mov ecx,dword ptr [esp+0x18]
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push ecx
	push eax
	call _com_issue_errorex

 Block19:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [esp+0x1C]
	add eax,edx
	mov ecx,3
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],eax
	imul ebp,dword ptr [esp+0x20]
	imul edi,ebx
	add dword ptr [esi+0x18],edi
	add dword ptr [esi+0x10],ebp
	mov eax,dword ptr [esi+0x18]
	mov ecx,dword ptr [esi+0x10]
	mov esi,dword ptr [esi+0x44]
	mov byte ptr [esp+0x4C],1
	test esi,esi
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	lea edx,[esp+0x34]
	push edx
	lea edx,[esp+0x28]
	push edx
	push eax
	push ecx
	mov ecx,esi
	call IWzVector2D::RelMove
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x4C],0
	cmp word ptr [esp+0x24],si
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[esp+0x24]
	push ecx
	call edi

 Block25:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp word ptr [esp+0x34],si
	jne Block28

 Block26:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret

 Block28:
	lea eax,[esp+0x34]
	push eax
	call edi

 Block29:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret
}
}
// CField_ContiMove::OnContiMove
__SUB_CLASS_THIS(0014D680, __thiscall, 143822,  CField_ContiMove, void, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	add eax,0xFFFFFFF9
	cmp eax,5
	ja Block5

 Block1:
	cmp EAX, 0
je Block5
cmp EAX, 1
je Block2
cmp EAX, 2
je Block5
cmp EAX, 3
je Block3
cmp EAX, 4
je Block5
cmp EAX, 5
je Block4


 Block2:
	push edi
	mov ecx,esi
	call CField_ContiMove::OnStartShipMoveField
	pop edi
	pop esi
	ret 4

 Block3:
	push edi
	mov ecx,esi
	call CField_ContiMove::OnMoveField
	pop edi
	pop esi
	ret 4

 Block4:
	push edi
	mov ecx,esi
	call CField_ContiMove::OnEndShipMoveField

 Block5:
	pop edi
	pop esi
	ret 4
}
}
// CField_ContiMove::OnMoveField
__SUB_CLASS_THIS(0014D640, __thiscall, 143822,  CField_ContiMove, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode1
	movzx eax,al
	sub eax,4
	je Block3

 Block1:
	sub eax,1
	jne Block4

 Block2:
	lea ecx,[esi+0xDA0]
	call CShip::DisappearShip
	pop esi
	ret 4

 Block3:
	lea ecx,[esi+0xDA0]
	call CShip::AppearShip

 Block4:
	pop esi
	ret 4
}
}
// CField_ContiMove::OnContiState
__SUB_CLASS_THIS(0014D5A0, __thiscall, 143822,  CField_ContiMove, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	mov esi,ecx
	push edi
	mov ecx,ebx
	call CInPacket::Decode1
	mov ecx,ebx
	movzx edi,al
	call CInPacket::Decode1
	movzx eax,al
	cmp edi,6
	ja Block9

 Block1:
	cmp EDI, 0
je Block2
cmp EDI, 1
je Block2
cmp EDI, 2
je Block7
cmp EDI, 3
je Block4
cmp EDI, 4
je Block4
cmp EDI, 5
je Block7
cmp EDI, 6
je Block2


 Block2:
	cmp dword ptr [esi+0xDAC],0
	jne Block9

 Block3:
	lea ecx,[esi+0xDA0]
	call CShip::EnterShipMove
	pop edi
	pop esi
	pop ebx
	ret 4

 Block4:
	cmp dword ptr [esi+0xDAC],1
	jne Block7

 Block5:
	cmp eax,1
	jne Block7

 Block6:
	lea ecx,[esi+0xDA0]
	call CShip::AppearShip

 Block7:
	cmp dword ptr [esi+0xDAC],0
	jne Block9

 Block8:
	lea ecx,[esi+0xDA0]
	call CShip::LeaveShipMove

 Block9:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CField_ContiMove::~CField_ContiMove
__SUB_CLASS_THIS0(0014BFF0, __thiscall, 143818,  CField_ContiMove, void) {
__asm {

 Block0:
	jmp  CField::Update
}
}
// CField_ContiMove::OnStartShipMoveField
__SUB_CLASS_THIS(0014C970, __thiscall, 143822,  CField_ContiMove, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode1
	movzx eax,al
	sub eax,2
	jne Block2

 Block1:
	lea ecx,[esi+0xDA0]
	call CShip::LeaveShipMove

 Block2:
	pop esi
	ret 4
}
}
// CShip::Init
_SUB_EXCEPTION_HANDLER(14C9C0)
__SUB_CLASS_THIS(0014C9C0, __thiscall, 143831,  CShip, void, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14C9C0
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
	mov esi,ecx
	xor edi,edi
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x5E2
	push eax
	mov dword ptr [esp+0x5C],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x54],1
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x58],0
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x50],2
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],edi
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
	mov ebp,8
	mov bl,4
	mov byte ptr [esp+0x48],bl
	cmp word ptr [esp+0x20],bp
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov edi,dword ptr [esp+0x14]
	test edi,edi
	sete al
	test al,al
	je Block12

 Block10:
	mov byte ptr [esp+0x48],0
	test edi,edi
	je Block77

 Block11:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax
	jmp Block77

 Block12:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x5E3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x50],5
	test edi,edi
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x54],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x50],6
	call get_int32
	add esp,8
	mov dword ptr [esi+0xC],eax
	mov byte ptr [esp+0x48],bl
	cmp word ptr [esp+0x30],bp
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
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x3E5
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x38]
	mov byte ptr [esp+0x50],7
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x54],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x50],8
	call get_int32
	add esp,8
	mov dword ptr [esi+0x10],eax
	mov byte ptr [esp+0x48],bl
	cmp word ptr [esp+0x30],bp
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
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x20],esp
	push 0x3E6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x38]
	mov byte ptr [esp+0x50],9
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x54],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x50],0xA
	call get_int32
	add esp,8
	mov dword ptr [esi+0x18],eax
	mov byte ptr [esp+0x48],bl
	cmp word ptr [esp+0x30],bp
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x5E5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x54],0xB
	mov ecx,edi
	mov byte ptr [esp+0x54],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x50],0xC
	call get_int32
	add esp,8
	mov dword ptr [esi+0x24],eax
	mov byte ptr [esp+0x48],bl
	cmp word ptr [esp+0x30],bp
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block30:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x5E4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x38]
	mov byte ptr [esp+0x50],0xD
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x54],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x50],0xE
	call get_int32
	add esp,8
	mov dword ptr [esi+0x20],eax
	mov byte ptr [esp+0x48],bl
	cmp word ptr [esp+0x30],bp
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x5E2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x34]
	mov byte ptr [esp+0x4C],0xF
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x50],bl
	call IWzProperty::Getitem
	mov byte ptr [esp+0x48],0x10
	cmp word ptr [eax],bp
	jne Block36

 Block35:
	mov eax,dword ptr [eax+8]
	jmp Block37

 Block36:
	mov eax,offset _S___3

 Block37:
	push eax
	lea ecx,[esp+0x1C]
	call _xbstr_t::_ctor_1
	mov edi,dword ptr [esp+0x18]
	lea ebp,[esi+0x3C]
	lea ecx,[esp+0x18]
	cmp ebp,ecx
	je Block42

 Block38:
	mov ecx,dword ptr [ebp]
	test ecx,ecx
	je Block40

 Block39:
	call _xbstr_t::Data_t::Release
	mov dword ptr [ebp],0

 Block40:
	mov dword ptr [ebp],edi
	test edi,edi
	je Block44

 Block41:
	lea edx,[edi+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block42:
	test edi,edi
	je Block44

 Block43:
	mov ecx,edi
	call _xbstr_t::Data_t::Release

 Block44:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x48],bl
	jne Block47

 Block45:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	lea edx,[esp+0x18]
	push 0x3D2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ebp,[esi+0x44]
	push ebp
	push eax
	mov byte ptr [esp+0x54],0x11
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x48],bl
	test eax,eax
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block50:
	cmp dword ptr [esi+0xC],0
	jne Block75

 Block51:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x5E6
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x1C]
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x54],0x12
	mov ecx,edi
	mov byte ptr [esp+0x54],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x50],0x13
	call get_int32
	add esp,8
	cmp word ptr [esp+0x30],8
	mov dword ptr [esi+0x14],eax
	mov byte ptr [esp+0x48],bl
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block55:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push 0x3E7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x38]
	mov byte ptr [esp+0x50],0x14
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x54],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x50],0x15
	call get_int32
	add esp,8
	cmp word ptr [esp+0x30],8
	mov dword ptr [esi+0x1C],eax
	mov byte ptr [esp+0x48],bl
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
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov edi,dword ptr [ebp]
	test edi,edi
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	mov eax,dword ptr [esi+0x18]
	mov ecx,dword ptr [esi+0x14]
	mov edx,dword ptr [edi]
	push eax
	mov eax,dword ptr [edx+0x40]
	push ecx
	push edi
	call eax
	test eax,eax
	jge Block63

 Block62:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block63:
	mov ecx,dword ptr [esi+0x1C]
	imul ecx,0x7530
	push 0
	push 0xFF
	sub ecx,0x3FFFFF9C
	push ecx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov eax,esp
	push 0
	push 0
	mov dword ptr [eax],0
	mov eax,dword ptr [ebp]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block65

 Block64:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block65:
	mov eax,dword ptr [esi+0x3C]
	test eax,eax
	je Block67

 Block66:
	mov eax,dword ptr [eax]
	jmp Block68

 Block67:
	xor eax,eax

 Block68:
	xor ecx,ecx
	cmp dword ptr [esi+0x24],ecx
	lea edx,[esp+0x34]
	setne cl
	push ecx
	push eax
	push edx
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x40]
	add esp,0x28
	cmp edi,eax
	je Block73

 Block69:
	mov dword ptr [esi+0x40],eax
	test eax,eax
	je Block71

 Block70:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block71:
	test edi,edi
	je Block73

 Block72:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block73:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block76

 Block74:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block76

 Block75:
	mov eax,dword ptr [esi+0x10]
	lea ecx,[eax-0x32]
	add eax,0x32
	mov dword ptr [esi+0x30],eax
	mov eax,dword ptr [esi+0x18]
	lea edx,[eax-0x64]
	add eax,0x64
	mov dword ptr [esi+0x2C],ecx
	mov dword ptr [esi+0x38],edx
	mov dword ptr [esi+0x34],eax

 Block76:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x4C],0
	call edx

 Block77:
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block79

 Block78:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block79:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 4
}
}
// CField_ContiMove::CField_ContiMove
__SUB_CLASS_THIS0(0013E5B0, __thiscall, 143816,  CField_ContiMove, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CField_ContiMove::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_ContiMove::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_ContiMove::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_ContiMove::`vftable'{for `ZRefCounted'}
	xor eax,eax
	mov dword ptr [esi+0xDA4],eax
	mov dword ptr [esi+0xDA8],eax
	int 3// TODO: 	mov dword ptr [esi+0xDA0],offset CShip::`vftable'
	mov dword ptr [esi+0xDDC],eax
	mov dword ptr [esi+0xDE0],eax
	mov dword ptr [esi+0xDE4],eax
	mov eax,esi
	pop esi
	ret
}
}
// CShip::AppearShip
_SUB_EXCEPTION_HANDLER(14D020)
__SUB_CLASS_THIS0(0014D020, __thiscall, 143833,  CShip, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14D020
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
	cmp dword ptr [esi+0x44],0
	sete al
	test al,al
	jne Block71

 Block1:
	mov ebp,1
	cmp dword ptr [esi+0xC],ebp
	jne Block71

 Block2:
	mov edi,dword ptr [esi+0x44]
	test edi,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov eax,dword ptr [esi+0x18]
	mov ecx,dword ptr [esi+0x10]
	mov edx,dword ptr [edi]
	push eax
	mov eax,dword ptr [edx+0x40]
	push ecx
	push edi
	call eax
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block6:
	push 0
	push 0xFF
	push 0xC0061378
	push ecx
	mov dword ptr [esp+0x24],esp
	mov eax,esp
	push 0
	push 0
	mov dword ptr [eax],0
	mov eax,dword ptr [esi+0x44]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0x3C]
	test eax,eax
	je Block10

 Block9:
	mov eax,dword ptr [eax]
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	xor ecx,ecx
	cmp dword ptr [esi+0x24],ecx
	lea edx,[esp+0x30]
	setne cl
	push ecx
	push eax
	push edx
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x40]
	add esp,0x28
	cmp edi,eax
	je Block16

 Block12:
	mov dword ptr [esi+0x40],eax
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block14:
	test edi,edi
	je Block16

 Block15:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block16:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block18

 Block17:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block18:
	mov ecx,dword ptr [esi+0x40]
	test ecx,ecx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea edx,[esp+0x14]
	push edx
	call IWzGr2DLayer::Getalpha
	mov edi,dword ptr [eax]
	mov dword ptr [esp+0x64],0
	test edi,edi
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0x40]
	push 0
	push 0
	push edi
	call ecx
	test eax,eax
	jge Block24

 Block23:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block24:
	mov eax,dword ptr [esp+0x14]
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x64],ebx
	test eax,eax
	je Block26

 Block25:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block26:
	lea ecx,[esp+0x14]
	push 0x50D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CSoundMan>::ms_pInstance]
	push 0
	push 0
	push 0
	push ebp
	push eax
	mov dword ptr [esp+0x78],ebp
	call CSoundMan::PlayBGM
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x64],ebx
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block28:
	cmp dword ptr [esi+0xC],0
	je Block71

 Block29:
	mov ecx,dword ptr [esi+0x40]
	test ecx,ecx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea edx,[esp+0x14]
	push edx
	call IWzGr2DLayer::Getalpha
	mov edi,dword ptr [eax]
	mov dword ptr [esp+0x64],2
	test edi,edi
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0x40]
	push 0
	push 0
	push edi
	call ecx
	test eax,eax
	jge Block35

 Block34:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push edi
	push eax
	call _com_issue_errorex

 Block35:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x64],ebx
	test eax,eax
	je Block37

 Block36:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block37:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block39

 Block38:
	push eax
	call _com_issue_error

 Block39:
	mov ecx,dword ptr [esi+0x40]
	mov dword ptr [esp+0x64],3
	test ecx,ecx
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	call IWzVector2D::GetcurrentTime
	mov ecx,dword ptr [esi+0x20]
	imul ecx,0x3E8
	add eax,ecx
	mov edx,3
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],eax
	mov ecx,dword ptr [esi+0x40]
	mov bl,4
	mov byte ptr [esp+0x64],bl
	test ecx,ecx
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	lea eax,[esp+0x14]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x64],5
	test ecx,ecx
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x20]
	push eax
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],bl
	test eax,eax
	je Block47

 Block46:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block47:
	mov ebp,8
	mov byte ptr [esp+0x64],3
	cmp word ptr [esp+0x1C],bp
	jne Block50

 Block48:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov dword ptr [esp+0x64],0xFFFFFFFF
	cmp word ptr [esp+0x2C],bp
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov ecx,dword ptr [esi+0x44]
	test ecx,ecx
	jne Block57

 Block56:
	push 0x80004003
	call _com_issue_error

 Block57:
	mov edx,dword ptr [esi+0x18]
	xor eax,eax
	sub edx,0x64
	cmp dword ptr [esi+0x24],eax
	push edx
	sete al
	lea eax,[eax+eax-1]
	imul eax,0x64
	add eax,dword ptr [esi+0x10]
	push eax
	call IWzShape2D::Move
	lea ecx,[esp+0x4C]
	push ecx
	call edi
	lea edx,[esp+0x4C]
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
	mov ecx,dword ptr [esi+0x40]
	mov ebx,6
	mov dword ptr [esp+0x64],ebx
	test ecx,ecx
	jne Block61

 Block60:
	push 0x80004003
	call _com_issue_error

 Block61:
	call IWzVector2D::GetcurrentTime
	mov ecx,dword ptr [esi+0x20]
	imul ecx,0x3E8
	add eax,ecx
	mov edx,3
	mov word ptr [esp+0x3C],dx
	mov dword ptr [esp+0x44],eax
	mov ecx,dword ptr [esi+0x44]
	mov byte ptr [esp+0x64],7
	test ecx,ecx
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	lea eax,[esp+0x4C]
	push eax
	mov eax,dword ptr [esi+0x18]
	lea edx,[esp+0x40]
	push edx
	mov edx,dword ptr [esi+0x10]
	push eax
	push edx
	call IWzVector2D::RelMove
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x3C],bp
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov dword ptr [esp+0x64],0xFFFFFFFF
	cmp word ptr [esp+0x4C],bp
	jne Block70

 Block68:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret

 Block70:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block71:
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
