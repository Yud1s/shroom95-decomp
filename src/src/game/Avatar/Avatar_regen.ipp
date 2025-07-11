#include "regen.hpp"
// Avatar.ipp
#include "Avatar.hpp"

static void *ZLIST_COMPTR_CANVAS_VTABLE = get_vtable<ZList<_x_com_ptr<IWzCanvas>>>();

// AvatarLook::Decode
__SUB_CLASS_THIS(000F2C00, __thiscall, 66704,  AvatarLook, void, CInPacket&) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov esi,dword ptr [esp+0x10]
	push edi
	mov edi,ecx
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	mov byte ptr [edi+0xC],al
	call CInPacket::Decode1
	movzx eax,al
	mov ecx,esi
	mov dword ptr [edi+0xD],eax
	call CInPacket::Decode4
	push 0xF0
	lea ebx,[edi+0x19]
	push 0
	push ebx
	mov dword ptr [edi+0x11],eax
	call _memset
	push 0xF0
	lea ecx,[edi+0x109]
	push 0
	push ecx
	call _memset
	add esp,0x18
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	call CInPacket::Decode4
	mov ecx,esi
	mov dword ptr [ebx],eax
	call CInPacket::Decode1
	mov bl,al
	cmp bl,0xFF
	je Block7

 Block1:
	nop

 Block2:
	mov ecx,esi
	call CInPacket::Decode4
	mov ebp,eax
	cmp bl,0x3B
	ja Block6

 Block3:
	test bl,bl
	je Block6

 Block4:
	movzx ebx,bl
	push 2
	push ebx
	push ebp
	call is_correct_bodypart
	add esp,0xC
	test eax,eax
	je Block6

 Block5:
	mov dword ptr [edi+ebx*4+0x19],ebp

 Block6:
	mov ecx,esi
	call CInPacket::Decode1
	mov bl,al
	cmp bl,0xFF
	jne Block2

 Block7:
	mov ecx,esi
	call CInPacket::Decode1
	mov bl,al
	cmp bl,0xFF
	je Block13

 Block8:
	mov ecx,esi
	call CInPacket::Decode4
	mov ebp,eax
	cmp bl,0x3B
	ja Block12

 Block9:
	test bl,bl
	je Block12

 Block10:
	movzx ebx,bl
	push 2
	push ebx
	push ebp
	call is_correct_bodypart
	add esp,0xC
	test eax,eax
	je Block12

 Block11:
	mov dword ptr [edi+ebx*4+0x109],ebp

 Block12:
	mov ecx,esi
	call CInPacket::Decode1
	mov bl,al
	cmp bl,0xFF
	jne Block8

 Block13:
	mov ecx,esi
	call CInPacket::Decode4
	mov dword ptr [edi+0x15],eax
	push 0xC
	add edi,0x1F9
	push edi
	mov ecx,esi
	call CInPacket::DecodeBuffer
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// AvatarLook::AvatarLook
__SUB_CLASS_THIS0(00038B60, __thiscall, 66696,  AvatarLook, void) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,ecx
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	xor ebx,ebx
	push 0xF0
	lea eax,[esi+0x19]
	push ebx
	push eax
	int 3// TODO: 	mov dword ptr [esi],offset AvatarLook::`vftable'
	mov byte ptr [esi+0xC],bl
	mov dword ptr [esi+0xD],ebx
	mov dword ptr [esi+0x11],ebx
	mov dword ptr [esi+0x15],ebx
	call _memset
	xor eax,eax
	mov dword ptr [esi+0x1F9],eax
	mov dword ptr [esi+0x1FD],eax
	add esp,0xC
	mov dword ptr [esi+0x201],eax
	mov eax,esi
	pop esi
	pop ebx
	ret
}
}
// AvatarLook::AvatarLook
__SUB_CLASS_THIS(0006D470, __thiscall, 66685,  AvatarLook, void, const AvatarLook&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,ecx
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3// TODO: 	mov dword ptr [eax],offset AvatarLook::`vftable'
	mov cl,byte ptr [edx+0xC]
	mov byte ptr [eax+0xC],cl
	mov ecx,dword ptr [edx+0xD]
	mov dword ptr [eax+0xD],ecx
	mov ecx,dword ptr [edx+0x11]
	mov dword ptr [eax+0x11],ecx
	mov ecx,dword ptr [edx+0x15]
	push esi
	mov dword ptr [eax+0x15],ecx
	push edi
	lea esi,[edx+0x19]
	lea edi,[eax+0x19]
	mov ecx,0x3C
	rep movsd
	lea esi,[edx+0x109]
	lea edi,[eax+0x109]
	mov ecx,0x3C
	rep movsd
	lea ecx,[edx+0x1F9]
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+0x1F9],edx
	mov edx,dword ptr [ecx+4]
	mov dword ptr [eax+0x1FD],edx
	mov ecx,dword ptr [ecx+8]
	pop edi
	mov dword ptr [eax+0x201],ecx
	pop esi
	ret 4
}
}
// AvatarLook::AvatarLook
_SUB_EXCEPTION_HANDLER(29BC0)
__SUB_CLASS_THIS(00029BC0, __thiscall, 66694,  AvatarLook, void, const CharacterData&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_29BC0
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
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	mov dword ptr [esp+0x14],eax
	mov eax,dword ptr [esp+0x1C]
	lea ecx,[eax+0x2D9]
	push ecx
	lea edx,[eax+0xF9]
	push edx
	push eax
	mov ecx,esi
	int 3// TODO: 	mov dword ptr [esi],offset AvatarLook::`vftable'
	call AvatarLook::Load_1
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// AvatarLook::operator=
__SUB_CLASS_THIS(0005F2A0, __thiscall, 66706,  AvatarLook, AvatarLook&, const AvatarLook&) {
__asm {

 Block0:
	mov eax,ecx
	push ebx
	push esi
	mov esi,dword ptr [esp+0xC]
	mov cl,byte ptr [esi+0xC]
	mov byte ptr [eax+0xC],cl
	mov edx,dword ptr [esi+0xD]
	mov dword ptr [eax+0xD],edx
	mov ecx,dword ptr [esi+0x11]
	mov dword ptr [eax+0x11],ecx
	mov edx,dword ptr [esi+0x15]
	mov dword ptr [eax+0x15],edx
	mov edx,esi
	push edi
	lea ecx,[eax+0x19]
	sub edx,eax
	mov edi,0x3C
	lea ecx,[ecx]

 Block1:
	mov ebx,dword ptr [edx+ecx]
	mov dword ptr [ecx],ebx
	add ecx,4
	sub edi,1
	jne Block1

 Block2:
	lea ecx,[eax+0x109]
	mov edi,0x3C

 Block3:
	mov ebx,dword ptr [ecx+edx]
	mov dword ptr [ecx],ebx
	add ecx,4
	sub edi,1
	jne Block3

 Block4:
	mov ecx,dword ptr [esi+0x1F9]
	mov dword ptr [eax+0x1F9],ecx
	mov edx,dword ptr [esi+0x1FD]
	pop edi
	mov dword ptr [eax+0x1FD],edx
	mov ecx,dword ptr [esi+0x201]
	pop esi
	mov dword ptr [eax+0x201],ecx
	pop ebx
	ret 4
}
}
// AvatarLook::AvatarLook
_SUB_EXCEPTION_HANDLER(57ACD0)
__SUB_CLASS_THIS(0057ACD0, __thiscall, 66691,  AvatarLook, void, const GW_CharacterStat&, const ZRef<GW_ItemSlotBase>*, const ZRef<GW_ItemSlotBase>*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_57ACD0
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
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],eax
	mov eax,dword ptr [esp+0x24]
	push eax
	push ecx
	push edx
	mov ecx,esi
	int 3// TODO: 	mov dword ptr [esi],offset AvatarLook::`vftable'
	call AvatarLook::Load_1
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0xC
}
}

// AvatarLook::Load
__SUB_CLASS_THIS(00029660, __thiscall, 66700,  AvatarLook, void, const CharacterData&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	lea edx,[eax+0x2D9]
	push edx
	lea edx,[eax+0xF9]
	push edx
	push eax
	call AvatarLook::Load_1
	ret 4
}
}
// AvatarLook::~AvatarLook
__SUB_CLASS_THIS0(00029680, __thiscall, 66705,  AvatarLook, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset ZRefCounted::`vftable'
	ret
}
}
// AvatarLook::Load
_SUB_EXCEPTION_HANDLER(F6E70)
__SUB_CLASS_THIS(000F6E70, __thiscall, 66698,  AvatarLook, void, const GW_CharacterStat&, const ZRef<GW_ItemSlotBase>*, const ZRef<GW_ItemSlotBase>*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_F6E70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x14],0
	mov cl,byte ptr [eax+0x11]
	mov byte ptr [edi+0xC],cl
	movzx edx,byte ptr [eax+0x12]
	mov dword ptr [edi+0xD],edx
	mov ecx,dword ptr [eax+0x13]
	mov dword ptr [edi+0x11],ecx
	mov edx,dword ptr [eax+0x17]
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x3C]
	sub ecx,eax
	mov dword ptr [edi+0x19],edx
	mov ebx,1
	lea esi,[eax+0xC]
	lea ebp,[edi+0x1D]
	mov dword ptr [esp+0x34],ecx
	jmp Block3

 Block2:
	mov ecx,dword ptr [esp+0x34]

 Block3:
	cmp ebx,0xB
	je Block6

 Block4:
	mov eax,dword ptr [ecx+esi]
	test eax,eax
	je Block6

 Block5:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov dword ptr [ebp],eax
	jmp Block9

 Block6:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block8

 Block7:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov dword ptr [ebp],eax
	jmp Block9

 Block8:
	mov dword ptr [ebp],0

 Block9:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block13

 Block10:
	mov ecx,dword ptr [esp+0x34]
	cmp dword ptr [ecx+esi],0
	je Block13

 Block11:
	cmp ebx,0xB
	je Block13

 Block12:
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov dword ptr [ebp+0xF0],eax
	jmp Block14

 Block13:
	mov dword ptr [ebp+0xF0],0

 Block14:
	inc ebx
	add esi,8
	add ebp,4
	cmp ebx,0x3B
	jle Block2

 Block15:
	mov edx,dword ptr [esp+0x3C]
	mov eax,dword ptr [edx+0x5C]
	test eax,eax
	je Block17

 Block16:
	lea ecx,[eax+0xC]
	jmp Block18

 Block17:
	push 0xC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	lea esi,[esp+0x20]
	mov dword ptr [esp+0x20],eax
	sub esi,0x4000
	call _rand
	add eax,esi
	mov dword ptr [esp+0x18],eax
	call _rand
	mov cl,byte ptr [esp+0x18]
	add eax,esi
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [eax+5],cl
	mov edx,dword ptr [esp+0x20]
	mov al,byte ptr [esp+0x1C]
	push 0
	lea ecx,[esp+0x1C]
	mov byte ptr [edx+6],al
	call TSecType<long>::SetData
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x2C],0
	mov dword ptr [esp+0x14],1

 Block18:
	call TSecType<long>::GetData
	test byte ptr [esp+0x14],1
	mov dword ptr [edi+0x15],eax
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	je Block21

 Block19:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block21

 Block20:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block21:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 0xC
}
}
// AvatarLook::AvatarLook
_SUB_EXCEPTION_HANDLER(2371D0)
__SUB_CLASS_THIS(002371D0, __thiscall, 66695,  AvatarLook, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2371D0
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
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	mov dword ptr [esp+0x14],eax
	mov eax,dword ptr [esp+0x1C]
	push eax
	int 3// TODO: 	mov dword ptr [esi],offset AvatarLook::`vftable'
	call AvatarLook::Decode
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// CAvatar::ApplyScaleAndOffset
__SUB_CLASS_THIS(0005F7F0, __thiscall, 19994,  CAvatar, void, _x_com_ptr<IWzGr2DLayer>&, _x_com_ptr<IWzCanvas>&, long) {
__asm {

 Block0:
	sub esp,0x10
	mov ecx,dword ptr [ecx+0x192C]
	mov dword ptr [esp],ecx
	cmp ecx,0x64
	je Block39

 Block1:
	fild dword ptr [esp]
	push ebx
	mov ebx,dword ptr [esp+0x1C]
	push ebp
	fdiv qword ptr [__real_4059000000000000]
	xor ebp,ebp
	push esi
	push edi
	fstp qword ptr [esp+0x18]
	cmp dword ptr [esp+0x2C],ebp
	jne Block18

 Block2:
	mov esi,dword ptr [ebx]
	cmp esi,ebp
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x2C]
	push ecx
	push esi
	mov dword ptr [esp+0x34],ebp
	call edx
	cmp eax,ebp
	jge Block6

 Block5:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov esi,dword ptr [ebx]
	mov edi,dword ptr [esp+0x2C]
	cmp esi,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x28]
	push ecx
	push esi
	mov dword ptr [esp+0x30],ebp
	call edx
	cmp eax,ebp
	jge Block10

 Block9:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov eax,dword ptr [esp+0x24]
	mov esi,dword ptr [eax]
	cmp esi,ebp
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	fld1
	mov dword ptr [esp+0x24],edi
	fsub qword ptr [esp+0x18]
	fild dword ptr [esp+0x24]
	test edi,edi
	jge Block14

 Block13:
	fadd qword ptr [__real_41f0000000000000]

 Block14:
	fmul st,st(1)
	call __ftol2_sse
	fild dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x28]
	push eax
	test ecx,ecx
	jge Block16

 Block15:
	fadd qword ptr [__real_41f0000000000000]

 Block16:
	fmul qword ptr [__real_3fe0000000000000]
	fmulp st(1),st(0)
	call __ftol2_sse
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x44]
	push esi
	call edx
	cmp eax,ebp
	jge Block18

 Block17:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block18:
	mov esi,dword ptr [ebx]
	cmp esi,ebp
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x28]
	push ecx
	push esi
	mov dword ptr [esp+0x30],ebp
	call edx
	cmp eax,ebp
	jge Block22

 Block21:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block22:
	mov esi,dword ptr [ebx]
	cmp esi,ebp
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov edx,dword ptr [esp+0x28]
	fild dword ptr [esp+0x28]
	mov ecx,dword ptr [esi]
	test edx,edx
	jge Block26

 Block25:
	fadd qword ptr [__real_41f0000000000000]

 Block26:
	fmul qword ptr [esp+0x18]
	mov ecx,dword ptr [ecx+0x44]
	fnstcw word ptr [esp+0x2C]
	movzx eax,word ptr [esp+0x2C]
	or eax,0xC00
	mov dword ptr [esp+0x24],eax
	fldcw word ptr [esp+0x24]
	fistp qword ptr [esp+0x10]
	mov eax,dword ptr [esp+0x10]
	push eax
	push esi
	fldcw word ptr [esp+0x34]
	call ecx
	cmp eax,ebp
	jge Block28

 Block27:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block28:
	mov esi,dword ptr [ebx]
	cmp esi,ebp
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x28]
	push eax
	push esi
	mov dword ptr [esp+0x30],ebp
	call ecx
	cmp eax,ebp
	jge Block32

 Block31:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block32:
	mov esi,dword ptr [ebx]
	cmp esi,ebp
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	mov eax,dword ptr [esp+0x28]
	fild dword ptr [esp+0x28]
	mov edx,dword ptr [esi]
	test eax,eax
	jge Block36

 Block35:
	fadd qword ptr [__real_41f0000000000000]

 Block36:
	fmul qword ptr [esp+0x18]
	mov edx,dword ptr [edx+0x4C]
	fnstcw word ptr [esp+0x2C]
	movzx eax,word ptr [esp+0x2C]
	or eax,0xC00
	mov dword ptr [esp+0x24],eax
	fldcw word ptr [esp+0x24]
	fistp qword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x18]
	push ecx
	push esi
	fldcw word ptr [esp+0x34]
	call edx
	cmp eax,ebp
	jge Block38

 Block37:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block38:
	pop edi
	pop esi
	pop ebp
	pop ebx

 Block39:
	add esp,0x10
	ret 0xC
}
}
// CAvatar::IsEvanJob
__SUB_CLASS_THIS0(000FFF80, __thiscall, 19976,  CAvatar, int32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0x570]
	mov eax,0x68DB8BAD
	imul ecx
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	xor ecx,ecx
	cmp eax,0xBE
	sete cl
	mov eax,ecx
	ret
}
}
// CAvatar::SetEmotion
_SUB_EXCEPTION_HANDLER(66B00)
__SUB_CLASS_THIS(00066B00, __thiscall, 19986,  CAvatar, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_66B00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	cmp dword ptr [esi+0x548],ebx
	jne Block23

 Block1:
	mov eax,dword ptr [esi+0x5B8]
	push ebx
	push eax
	call CAvatar::MoveAction2RawAction
	mov ecx,esi
	mov edi,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block3

 Block2:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	jmp Block4

 Block3:
	mov eax,edi

 Block4:
	mov ecx,dword ptr [esi+0x548]
	mov edi,dword ptr [esp+0x28]
	cmp ecx,ebx
	je Block8

 Block5:
	cmp eax,8
	je Block11

 Block6:
	cmp eax,0x14
	je Block11

 Block7:
	cmp ecx,ebx
	jne Block12

 Block8:
	cmp eax,0x2A
	je Block11

 Block9:
	cmp eax,0x29
	je Block11

 Block10:
	cmp eax,0x39
	jne Block12

 Block11:
	cmp edi,8
	je Block23

 Block12:
	cmp edi,0x17
	ja Block23

 Block13:
	lea edx,[esi+0x538]
	mov ecx,edi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x540],eax
	mov dword ptr [esi+0x544],ebx
	cmp dword ptr [esi+0x5B0],ebx
	jne Block23

 Block14:
	mov eax,dword ptr [esp+0x2C]
	push eax
	mov ecx,esi
	call CAvatar::PrepareFaceLayer
	mov dword ptr [esp+0x28],ebx
	lea ecx,[esp+0x2C]
	push 0x3ED
	push ecx
	mov dword ptr [esp+0x28],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [edi*4+ActionData::m_saEmotionName]
	mov byte ptr [esp+0x20],1
	cmp ecx,ebx
	je Block16

 Block15:
	mov ecx,dword ptr [ecx]
	jmp Block17

 Block16:
	xor ecx,ecx

 Block17:
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x30]
	push edx
	call ZXString16::Format
	mov eax,dword ptr [esp+0x38]
	add esp,0xC
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	mov edi,dword ptr [esp+0x28]
	cmp dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance],ebx
	je Block21

 Block20:
	push 3
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push eax
	mov ecx,esi
	call CAvatar::GetLayerUnderFace
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x38],2
	call CAvatar::GetOrigin
	mov esi,dword ptr [esi+0x5B8]
	not esi
	and esi,1
	push esi
	mov byte ptr [esp+0x38],bl
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push edi
	call CAnimationDisplayer::Effect_General

 Block21:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp edi,ebx
	je Block23

 Block22:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block23:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 8
}
}
// CAvatar::TamingMobFrameUpdate
_SUB_EXCEPTION_HANDLER(6B450)
__SUB_CLASS_THIS0(0006B450, __thiscall, 19962,  CAvatar, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_6B450
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x68]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+0x5B8]
	lea ecx,[esp+0x18]
	push ecx
	push eax
	mov ecx,esi
	call CAvatar::MoveAction2RawAction
	mov ecx,esi
	mov edi,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block2

 Block1:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	jmp Block3

 Block2:
	mov eax,edi

 Block3:
	push eax
	mov ecx,esi
	call CAvatar::ConvertCharacterAction
	mov ebp,eax
	mov eax,dword ptr [esi+0x5A8]
	cmp eax,0xFFFFFFFF
	mov dword ptr [esp+0x18],ebp
	jle Block5

 Block4:
	mov dword ptr [esp+0x14],eax
	jmp Block6

 Block5:
	mov edx,dword ptr [esi+0x5AC]
	mov dword ptr [esp+0x14],edx

 Block6:
	xor ecx,ecx
	cmp eax,0xFFFFFFFF
	setg cl
	imul ecx,0x974
	add dword ptr [ecx+esi+0x5D8],0xFFFFFFE2
	lea eax,[ecx+esi+0x5D8]
	mov eax,dword ptr [eax]
	test eax,eax
	jg Block47

 Block7:
	mov eax,dword ptr [esi+0x5A8]
	xor edx,edx
	cmp eax,0xFFFFFFFF
	setg dl
	imul edx,0x974
	cmp dword ptr [edx+esi+0x5D0],0
	jne Block47

 Block8:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	xor ecx,ecx
	cmp eax,0xFFFFFFFF
	mov eax,dword ptr [esi+0x5A8]
	setg cl
	xor edx,edx
	imul ecx,0x974
	cmp eax,0xFFFFFFFF
	mov eax,dword ptr [esp+0x14]
	setg dl
	lea ebx,[ecx+esi+0x5C0]
	imul edx,0x974
	lea edi,[edx+esi+0x5C0]
	lea ecx,[edi+eax*4+0x468]
	mov dword ptr [esp+0x14],ecx
	cmp ebp,0x2D
	je Block12

 Block9:
	cmp ebp,0x2E
	je Block12

 Block10:
	cmp ebp,0x82
	je Block12

 Block11:
	cmp ebp,0x81
	jne Block15

 Block12:
	lea ecx,[esi+0x1914]
	call TSecType<long>::GetData
	lea ecx,[esi+0x18FC]
	mov ebp,eax
	call TSecType<long>::GetData
	cmp ebp,eax
	jne Block14

 Block13:
	mov dword ptr [edi+0x18],0
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret

 Block14:
	mov ebp,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x14]

 Block15:
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block17

 Block16:
	mov eax,dword ptr [eax-4]

 Block17:
	inc dword ptr [edi+0x14]
	cmp dword ptr [edi+0x14],eax
	jl Block21

 Block18:
	or eax,0xFFFFFFFF
	cmp dword ptr [esi+0x5A8],eax
	jle Block20

 Block19:
	push 1
	mov ecx,esi
	mov dword ptr [esi+0x5A8],eax
	call CAvatar::ClearTamingMobActionLayer
	push 0
	push 0x64
	push 6
	mov ecx,esi
	call CAvatar::PrepareTamingMobActionLayer
	mov ecx,esi
	call CAvatar::FixCharacterPosition
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret

 Block20:
	mov dword ptr [edi+0x14],0

 Block21:
	mov eax,dword ptr [edi+0x20]
	mov edx,dword ptr [edi+0x14]
	mov edx,dword ptr [eax+edx*4]
	add dword ptr [edi+0x18],edx
	mov eax,dword ptr [ebx+ebp*4+0x24]
	test eax,eax
	je Block47

 Block22:
	cmp dword ptr [eax-4],0
	je Block47

 Block23:
	call ZArray<ZRef<CActionMan::TAMINGMOBACTIONFRAMEENTRY>>::IsEmpty
	test eax,eax
	jne Block47

 Block24:
	mov eax,3
	mov word ptr [esp+0x18],ax
	mov dword ptr [esp+0x20],1
	mov ecx,dword ptr [esi+0x18E4]
	mov dword ptr [esp+0x70],0
	test ecx,ecx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::ShiftCanvas
	lea ecx,[esp+0x18]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,3
	mov word ptr [esp+0x18],ax
	mov eax,1
	mov dword ptr [esp+0x20],eax
	mov ecx,dword ptr [esi+0x18E0]
	mov dword ptr [esp+0x70],eax
	test ecx,ecx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::ShiftCanvas
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edi+0x14]
	mov eax,dword ptr [edx+eax*8+4]
	mov edx,dword ptr [ebx+ebp*4+0x24]
	mov ecx,dword ptr [ebx]
	mov ecx,dword ptr [edx+ecx*8+4]
	mov ebp,dword ptr [eax+0x28]
	mov ebx,dword ptr [eax+0x2C]
	sub ebp,dword ptr [ecx+0x1C]
	sub ebx,dword ptr [ecx+0x20]
	mov ecx,dword ptr [esi+0x18E4]
	test ecx,ecx
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	call IWzGr2DLayer::Getflip
	test eax,eax
	je Block32

 Block31:
	neg ebp

 Block32:
	mov eax,ebp
	lea ebp,[esi+0x598]
	push eax
	mov ecx,ebp
	call TSecType<long>::SetData
	lea ecx,[esi+0x58C]
	push ebx
	call TSecType<long>::SetData
	push offset _D_VTMISSING
	lea ecx,[esp+0x2C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x74],2
	call Ztl_variant_t::_ctor_1
	lea ecx,[esi+0x58C]
	mov byte ptr [esp+0x70],3
	call TSecType<long>::GetData
	mov ecx,ebp
	mov ebx,eax
	call TSecType<long>::GetData
	mov ecx,dword ptr [esi+0x18BC]
	test ecx,ecx
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea edx,[esp+0x28]
	push edx
	lea edx,[esp+0x1C]
	push edx
	push ebx
	push eax
	call IWzVector2D::RelMove
	lea ecx,[esp+0x18]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [edi+0x14]
	mov ebx,dword ptr [esp+0x14]
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+eax*8+4]
	mov edx,dword ptr [eax+0x14]
	mov dword ptr [esi+0x578],edx
	mov ecx,dword ptr [eax+0x18]
	add eax,0x14
	mov dword ptr [esi+0x57C],ecx
	mov edx,dword ptr [eax+8]
	mov dword ptr [esi+0x580],edx
	mov eax,dword ptr [eax+0xC]
	mov dword ptr [esi+0x584],eax
	mov ecx,dword ptr [edi+0x14]
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+ecx*8+4]
	mov ecx,dword ptr [eax+0x28]
	mov ebp,dword ptr [eax+0x2C]
	mov dword ptr [esp+0x18],ecx
	push offset _D_VTMISSING
	lea ecx,[esp+0x3C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x74],4
	call Ztl_variant_t::_ctor_1
	cmp dword ptr [esi+0x1930],0
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x70],5
	je Block36

 Block35:
	neg eax

 Block36:
	mov ecx,dword ptr [esi+0x18C4]
	test ecx,ecx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea edx,[esp+0x38]
	push edx
	lea edx,[esp+0x2C]
	push edx
	push ebp
	push eax
	call IWzVector2D::RelMove
	lea ecx,[esp+0x28]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [edi+0x14]
	mov eax,dword ptr [ecx+eax*8+4]
	mov edx,dword ptr [eax+0x30]
	mov ebp,dword ptr [eax+0x34]
	push offset _D_VTMISSING
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x1C],edx
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x74],6
	call Ztl_variant_t::_ctor_1
	cmp dword ptr [esi+0x1930],0
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x70],7
	je Block40

 Block39:
	neg eax

 Block40:
	mov ecx,dword ptr [esi+0x18C8]
	test ecx,ecx
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	lea edx,[esp+0x28]
	push edx
	lea edx,[esp+0x3C]
	push edx
	push ebp
	push eax
	call IWzVector2D::RelMove
	lea ecx,[esp+0x38]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [edi+0x14]
	mov eax,dword ptr [ecx+eax*8+4]
	mov edi,dword ptr [eax+0x38]
	mov ebx,dword ptr [eax+0x3C]
	push offset _D_VTMISSING
	lea ecx,[esp+0x5C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0x74],8
	call Ztl_variant_t::_ctor_1
	cmp dword ptr [esi+0x1930],0
	mov byte ptr [esp+0x70],9
	je Block44

 Block43:
	neg edi

 Block44:
	mov esi,dword ptr [esi+0x18CC]
	test esi,esi
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	lea edx,[esp+0x58]
	push edx
	lea eax,[esp+0x4C]
	push eax
	push ebx
	push edi
	mov ecx,esi
	call IWzVector2D::RelMove
	lea ecx,[esp+0x48]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x58]
	call Ztl_variant_t::~Ztl_variant_t

 Block47:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret
}
}
// CAvatar::Update
_SUB_EXCEPTION_HANDLER(6C050)
__SUB_CLASS_THIS0(0006C050, __thiscall, 19962,  CAvatar, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_6C050
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x5C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x70]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x18],ebp
	cmp dword ptr [esi+0x5B0],ebp
	jne Block159

 Block1:
	call get_update_time
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x24],eax
	mov eax,dword ptr [esi+0x5B8]
	push ecx
	push eax
	mov ecx,esi
	call CAvatar::MoveAction2RawAction
	mov ecx,esi
	mov edi,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block3

 Block2:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	mov ebx,eax
	mov dword ptr [esp+0x14],ebx
	jmp Block4

 Block3:
	mov dword ptr [esp+0x14],edi
	mov ebx,edi

 Block4:
	mov eax,dword ptr [esi+0x548]
	cmp eax,ebp
	je Block7

 Block5:
	cmp ebx,0x31
	jl Block8

 Block6:
	cmp eax,ebp
	jne Block159

 Block7:
	cmp ebx,0x111
	jge Block159

 Block8:
	mov eax,dword ptr [esi+0x5B4]
	cmp eax,ebp
	jle Block12

 Block9:
	add eax,0xFFFFFFE2
	cmp eax,ebp
	mov dword ptr [esi+0x5B4],eax
	jge Block12

 Block10:
	mov eax,dword ptr [esi+0x5B8]
	mov edx,eax
	and edx,0xFFFFFFFE
	mov dword ptr [esi+0x5B4],ebp
	cmp edx,8
	jne Block12

 Block11:
	mov edx,dword ptr [esi]
	and eax,1
	or eax,4
	push ebp
	push eax
	mov eax,dword ptr [edx+0x10]
	mov ecx,esi
	call eax

 Block12:
	cmp dword ptr [esi+0x548],ebp
	mov ebp,dword ptr [ZImports::_VariantInit]
	je Block53

 Block13:
	mov ecx,esi
	mov dword ptr [esp+0x20],1
	call CAvatar::GetOneTimeAction
	xor ecx,ecx
	cmp eax,0xFFFFFFFF
	setg cl
	imul ecx,0x974
	add dword ptr [ecx+esi+0x5C4],0xFFFFFFE2
	cmp dword ptr [ecx+esi+0x5C4],0
	lea eax,[ecx+esi+0x5C4]
	jg Block30

 Block14:
	mov ecx,esi
	call CAvatar::GetActionInfo
	mov edi,eax
	cmp ebx,9
	je Block16

 Block15:
	cmp ebx,0xA
	jne Block18

 Block16:
	lea edx,[esi+0x18FC]
	push edx
	lea ecx,[esi+0x1914]
	call TSecType<long>::op_eq_0
	test eax,eax
	je Block18

 Block17:
	mov dword ptr [edi+4],0
	jmp Block30

 Block18:
	inc dword ptr [edi]
	mov eax,dword ptr [edi+ebx*4+0x8AC]
	mov ecx,dword ptr [edi]
	test eax,eax
	je Block20

 Block19:
	cmp ecx,dword ptr [eax-4]
	jb Block23

 Block20:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block22

 Block21:
	mov ecx,esi
	call CAvatar::ResetOneTimeAction
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	push 0
	push 0x64
	push 6
	mov ecx,esi
	call edx
	jmp Block30

 Block22:
	mov dword ptr [edi],0

 Block23:
	mov eax,dword ptr [edi+ebx*4+0x8AC]
	test eax,eax
	je Block29

 Block24:
	cmp dword ptr [eax-4],0
	je Block29

 Block25:
	mov ecx,dword ptr [edi]
	cmp dword ptr [eax+ecx*8+4],0
	lea eax,[eax+ecx*8+4]
	je Block29

 Block26:
	mov eax,dword ptr [eax]
	mov edx,dword ptr [eax+0x10]
	mov dword ptr [esi+0x54C],edx
	mov ecx,dword ptr [eax+0x14]
	add eax,0x10
	mov dword ptr [esi+0x550],ecx
	mov edx,dword ptr [eax+8]
	mov dword ptr [esi+0x554],edx
	mov eax,dword ptr [eax+0xC]
	mov edx,dword ptr [esp+0x14]
	mov dword ptr [esi+0x558],eax
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [edi+edx*4+0x8AC]
	mov eax,dword ptr [eax+ecx*8+4]
	mov ebp,dword ptr [eax+0x20]
	mov ebx,dword ptr [eax+0x24]
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x7C],0
	call Ztl_variant_t::_ctor_1
	lea ecx,[esi+0x18D0]
	mov byte ptr [esp+0x78],1
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getflip
	test eax,eax
	je Block28

 Block27:
	neg ebp

 Block28:
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x54]
	push edx
	push ebx
	push ebp
	lea ecx,[esi+0x18B8]
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,3
	mov word ptr [esp+0x60],ax
	mov dword ptr [esp+0x68],1
	lea ecx,[esp+0x60]
	push ecx
	lea ecx,[esi+0x18D8]
	mov dword ptr [esp+0x7C],2
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::ShiftCanvas
	lea ecx,[esp+0x60]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edi+0xC]
	mov ecx,dword ptr [eax+edx*4]
	add dword ptr [edi+4],ecx
	mov ebp,dword ptr [ZImports::_VariantInit]
	jmp Block30

 Block29:
	push 0
	mov ecx,esi
	mov dword ptr [esp+0x24],0
	call CAvatar::SetMorphed

 Block30:
	lea edi,[esi+0x18FC]
	push edi
	lea ecx,[esi+0x1914]
	call SECPOINT::op_assign_1
	lea edx,[esp+0x40]
	push edx
	call ebp
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	mov ecx,dword ptr [esi+0x18B0]
	mov dword ptr [esp+0x78],3
	test ecx,ecx
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea edx,[esp+0x40]
	push edx
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	lea eax,[esp+0x50]
	push eax
	lea edx,[esp+0x50]
	push edx
	call IWzVector2D::_GetSnapshot
	mov ebx,8
	mov dword ptr [esp+0x78],0xFFFFFFFF
	cmp word ptr [esp+0x40],bx
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov edx,dword ptr [esp+0x30]
	lea ecx,[edi+0xC]
	push edx
	call TSecType<long>::SetData
	mov eax,dword ptr [esp+0x34]
	push eax
	mov ecx,edi
	call TSecType<long>::SetData
	lea ecx,[esp+0x50]
	push ecx
	call ebp
	lea edx,[esp+0x50]
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
	lea eax,[esp+0x40]
	push eax
	mov dword ptr [esp+0x7C],4
	call ebp
	lea ecx,[esp+0x40]
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
	mov ecx,dword ptr [esi+0x18BC]
	mov byte ptr [esp+0x78],5
	test ecx,ecx
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x44]
	push eax
	push 0
	push 0
	call IWzVector2D::RelMove
	mov byte ptr [esp+0x78],4
	cmp word ptr [esp+0x40],bx
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov dword ptr [esp+0x78],0xFFFFFFFF
	cmp word ptr [esp+0x50],bx
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	cmp dword ptr [esp+0x20],0
	jne Block159

 Block53:
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [edx+0x3850],0
	jne Block56

 Block54:
	call TSimpleSingleton<CDayOfWeek>::GetInstance
	mov ecx,eax
	call CDayOfWeek::GetCurrentDay
	movzx edi,ax
	cmp word ptr [esi+0x1934],di
	je Block56

 Block55:
	push 1
	mov ecx,esi
	call CAvatar::NotifyAvatarModified
	mov word ptr [esi+0x1934],di
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x68
	ret

 Block56:
	mov ecx,esi
	call CAvatar::IsRidingEx
	mov ecx,esi
	test eax,eax
	je Block59

 Block57:
	call CAvatar::CharacterFrameUpdate
	test eax,eax
	je Block131

 Block58:
	mov ecx,esi
	call CAvatar::TamingMobFrameUpdate
	jmp Block131

 Block59:
	call CAvatar::GetActionInfo
	add dword ptr [eax+4],0xFFFFFFE2
	add eax,4
	cmp dword ptr [eax],0
	jg Block131

 Block60:
	mov ecx,esi
	call CAvatar::GetActionInfo
	cmp dword ptr [eax+0x10],0
	jne Block131

 Block61:
	mov ecx,esi
	call CAvatar::GetActionInfo
	mov ebp,eax
	mov eax,dword ptr [esp+0x14]
	lea edi,[ebp+eax*4+0x24]
	lea ebx,[ebp+eax*4+0x468]
	mov dword ptr [esp+0x28],edi
	mov dword ptr [esp+0x20],ebx
	cmp eax,0x2D
	je Block65

 Block62:
	cmp eax,0x2E
	je Block65

 Block63:
	cmp eax,0x82
	je Block65

 Block64:
	cmp eax,0x81
	jne Block67

 Block65:
	lea eax,[esi+0x18FC]
	push eax
	lea ecx,[esi+0x1914]
	call TSecType<long>::op_eq_0
	test eax,eax
	je Block67

 Block66:
	mov dword ptr [ebp+4],0
	jmp Block131

 Block67:
	mov ecx,dword ptr [esi+0x570]
	push ecx
	call is_vehicle
	add esp,4
	test eax,eax
	je Block69

 Block68:
	mov eax,dword ptr [ebx]
	jmp Block70

 Block69:
	mov eax,dword ptr [edi]

 Block70:
	test eax,eax
	je Block72

 Block71:
	mov eax,dword ptr [eax-4]

 Block72:
	inc dword ptr [ebp]
	cmp dword ptr [ebp],eax
	jl Block76

 Block73:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block75

 Block74:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	mov ecx,esi
	mov edi,eax
	call CAvatar::ResetOneTimeAction
	push edi
	mov ecx,esi
	call CAvatar::ActionProcess
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x14]
	push 0
	push 0x64
	push 6
	mov ecx,esi
	call eax
	jmp Block131

 Block75:
	mov dword ptr [ebp],0

 Block76:
	mov eax,dword ptr [esp+0x14]
	lea ecx,[eax+eax*2]
	mov eax,dword ptr [esi+0x570]
	lea edx,[ecx*8+ActionData::m_saCharacterActions]
	push eax
	mov dword ptr [esp+0x20],edx
	call is_vehicle
	add esp,4
	test eax,eax
	je Block85

 Block77:
	mov ecx,ebx
	call ZArray<ZRef<CActionMan::TAMINGMOBACTIONFRAMEENTRY>>::IsEmpty
	test eax,eax
	jne Block131

 Block78:
	mov eax,dword ptr [esp+0x14]
	cmp eax,0x101
	je Block80

 Block79:
	cmp eax,0x102
	jne Block81

 Block80:
	mov ecx,3
	mov ebx,1
	mov word ptr [esp+0x60],cx
	mov dword ptr [esp+0x68],ebx
	lea edx,[esp+0x60]
	push edx
	lea ecx,[esi+0x18D8]
	mov dword ptr [esp+0x7C],6
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::ShiftCanvas
	lea ecx,[esp+0x60]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,3
	mov word ptr [esp+0x60],ax
	mov dword ptr [esp+0x68],ebx
	lea ecx,[esp+0x60]
	push ecx
	lea ecx,[esi+0x18D4]
	mov dword ptr [esp+0x7C],7
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::ShiftCanvas
	lea ecx,[esp+0x60]
	call Ztl_variant_t::~Ztl_variant_t
	mov edx,3
	mov word ptr [esp+0x60],dx
	mov dword ptr [esp+0x68],ebx
	lea eax,[esp+0x60]
	push eax
	lea ecx,[esi+0x18DC]
	mov dword ptr [esp+0x7C],8
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::ShiftCanvas
	lea ecx,[esp+0x60]
	call Ztl_variant_t::~Ztl_variant_t
	add dword ptr [esi+0x588],ebx
	jmp Block82

 Block81:
	mov ebx,1

 Block82:
	mov ecx,3
	mov word ptr [esp+0x50],cx
	mov dword ptr [esp+0x58],ebx
	lea edx,[esp+0x50]
	lea ecx,[esi+0x18E4]
	push edx
	mov dword ptr [esp+0x7C],9
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::ShiftCanvas
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,3
	mov word ptr [esp+0x50],ax
	mov dword ptr [esp+0x58],ebx
	lea ecx,[esp+0x50]
	push ecx
	lea ecx,[esi+0x18E0]
	mov dword ptr [esp+0x7C],0xA
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::ShiftCanvas
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x20]
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [ecx+edx*8+4]
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [esi+0x588]
	mov ecx,dword ptr [ecx+edx*8+4]
	mov ebx,dword ptr [eax+0x28]
	mov edi,dword ptr [eax+0x2C]
	sub ebx,dword ptr [ecx+0x1C]
	sub edi,dword ptr [ecx+0x20]
	lea ecx,[esi+0x18E4]
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getflip
	test eax,eax
	je Block84

 Block83:
	neg ebx

 Block84:
	mov eax,ebx
	lea ebx,[esi+0x598]
	push eax
	mov ecx,ebx
	call TSecType<long>::op_assign
	lea ecx,[esi+0x58C]
	push edi
	call TSecType<long>::op_assign
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x7C],0xB
	call Ztl_variant_t::_ctor_1
	lea ecx,[esi+0x58C]
	mov byte ptr [esp+0x78],0xC
	call TSecType<long>::GetData
	mov ecx,ebx
	mov edi,eax
	call TSecType<long>::GetData
	lea edx,[esp+0x40]
	push edx
	lea ecx,[esp+0x54]
	push ecx
	push edi
	push eax
	lea ecx,[esi+0x18BC]
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [ecx+edx*8+4]
	mov edx,dword ptr [eax+0x14]
	mov edi,dword ptr [esp+0x28]
	add eax,0x14
	mov dword ptr [esi+0x578],edx
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esi+0x57C],ecx
	mov edx,dword ptr [eax+8]
	mov dword ptr [esi+0x580],edx
	mov eax,dword ptr [eax+0xC]
	mov dword ptr [esi+0x584],eax
	jmp Block87

 Block85:
	mov ecx,edi
	call ZArray<ZRef<CActionMan::CHARACTERACTIONFRAMEENTRY>>::IsEmpty
	test eax,eax
	jne Block131

 Block86:
	mov ecx,3
	mov ebx,1
	mov word ptr [esp+0x50],cx
	mov dword ptr [esp+0x58],ebx
	lea edx,[esp+0x50]
	push edx
	lea ecx,[esi+0x18D8]
	mov dword ptr [esp+0x7C],0xD
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::ShiftCanvas
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,3
	mov word ptr [esp+0x50],ax
	mov dword ptr [esp+0x58],ebx
	lea ecx,[esp+0x50]
	push ecx
	lea ecx,[esi+0x18D4]
	mov dword ptr [esp+0x7C],0xE
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::ShiftCanvas
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	mov edx,3
	mov word ptr [esp+0x50],dx
	mov dword ptr [esp+0x58],ebx
	lea eax,[esp+0x50]
	push eax
	lea ecx,[esi+0x18DC]
	mov dword ptr [esp+0x7C],0xF
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::ShiftCanvas
	or ebx,0xFFFFFFFF
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x78],ebx
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x7C],0x10
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x54]
	push edx
	push 0
	push 0
	lea ecx,[esi+0x18BC]
	mov byte ptr [esp+0x88],0x11
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x78],ebx
	call Ztl_variant_t::~Ztl_variant_t

 Block87:
	mov eax,dword ptr [esi+0x570]
	push eax
	call is_vehicle
	add esp,4
	test eax,eax
	jne Block91

 Block88:
	mov eax,dword ptr [esp+0x14]
	cmp eax,0x101
	je Block91

 Block89:
	cmp eax,0x102
	je Block91

 Block90:
	mov ebx,dword ptr [ebp]
	jmp Block92

 Block91:
	mov ebx,dword ptr [esi+0x588]

 Block92:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+ebx*8+4]
	mov ecx,dword ptr [ebp+0xC]
	mov edx,dword ptr [ebp]
	mov edx,dword ptr [ecx+edx*4]
	add dword ptr [ebp+4],edx
	mov ecx,dword ptr [eax+0x14]
	mov edx,dword ptr [eax+0x18]
	mov dword ptr [esp+0x2C],eax
	mov eax,dword ptr [esi+0x1930]
	mov dword ptr [esp+0x30],ecx
	lea edi,[esi+0x18D8]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x38],edx
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putflip
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov edx,dword ptr [esp+0x1C]
	shl ebx,5
	mov ecx,ebx
	mov ebx,dword ptr [edx+0x14]
	mov dword ptr [esp+0x14],ecx
	add ebx,ecx
	mov ecx,eax
	mov dword ptr [esp+0x28],eax
	call IWzGr2DLayer::Getflip
	xor eax,dword ptr [ebx+0x10]
	mov ecx,dword ptr [esp+0x28]
	push eax
	call IWzGr2DLayer::Putflip
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getflip
	push eax
	lea ecx,[esi+0x18D4]
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putflip
	mov ecx,edi
	lea ebx,[esi+0x18D0]
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getflip
	push eax
	mov ecx,ebx
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putflip
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x7C],0x12
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax+0x14]
	mov ebx,dword ptr [esp+0x14]
	cmp dword ptr [ecx+ebx+0x14],0
	mov byte ptr [esp+0x78],0x13
	jne Block95

 Block93:
	lea ecx,[esi+0x18D0]
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getflip
	test eax,eax
	je Block95

 Block94:
	mov eax,dword ptr [esp+0x30]
	neg eax
	jmp Block96

 Block95:
	mov eax,dword ptr [esp+0x30]

 Block96:
	lea edx,[esp+0x40]
	push edx
	mov edx,dword ptr [esp+0x38]
	lea ecx,[esp+0x54]
	push ecx
	push edx
	push eax
	lea ecx,[esi+0x18B8]
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax+0x14]
	cmp dword ptr [ecx+ebx+0xC],0
	je Block100

 Block97:
	lea edx,[esp+0x14]
	push edx
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getalpha
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0x78],0x14
	mov dword ptr [esp+0x18],1
	mov word ptr [esp+0x50],cx
	mov dword ptr [esp+0x58],eax
	test eax,eax
	je Block99

 Block98:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block99:
	lea edi,[esp+0x50]
	mov dword ptr [esp+0x78],0x15
	mov dword ptr [esp+0x18],3
	jmp Block101

 Block100:
	mov edi,offset _D_VTEMPTY

 Block101:
	lea ecx,[esp+0x28]
	push ecx
	lea ecx,[esi+0x18D0]
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getalpha
	push edi
	mov ecx,eax
	mov dword ptr [esp+0x7C],0x16
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Putorigin
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x78],0x15
	test eax,eax
	je Block103

 Block102:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block103:
	test byte ptr [esp+0x18],2
	je Block105

 Block104:
	and dword ptr [esp+0x18],0xFFFFFFFD
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t

 Block105:
	test byte ptr [esp+0x18],1
	mov dword ptr [esp+0x78],0xFFFFFFFF
	je Block108

 Block106:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block108

 Block107:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block108:
	push 0
	mov ecx,esi
	call CAvatar::GetCurrentAction
	cmp eax,0x10E
	je Block114

 Block109:
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x7C],0x17
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x54]
	push ecx
	push 0
	lea edi,[esi+0x18B4]
	push 0
	mov ecx,edi
	mov byte ptr [esp+0x88],0x18
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x7C],0x19
	call Ztl_variant_t::_ctor_1
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [edx+0x14]
	add eax,ebx
	cmp dword ptr [eax+0x14],0
	mov byte ptr [esp+0x78],0x1A
	jne Block112

 Block110:
	cmp dword ptr [esi+0x1930],0
	je Block112

 Block111:
	mov ecx,dword ptr [eax+0x18]
	neg ecx
	jmp Block113

 Block112:
	mov ecx,dword ptr [eax+0x18]

 Block113:
	mov eax,dword ptr [eax+0x1C]
	lea edx,[esp+0x40]
	push edx
	lea edx,[esp+0x54]
	push edx
	push eax
	push ecx
	mov ecx,edi
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelOffset
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t

 Block114:
	lea edi,[esi+0x18D0]
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getflip
	test eax,eax
	je Block117

 Block115:
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [ecx+0x14]
	cmp dword ptr [edx+ebx+0x14],0
	je Block117

 Block116:
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x1C],0
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x50]
	push eax
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	lea ecx,[esp+0x38]
	push ecx
	lea ecx,[esi+0x18B0]
	mov dword ptr [esp+0x9C],0x1B
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::_GetSnapshot
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	mov edx,dword ptr [esp+0x18]
	push edx
	lea ecx,[esi+0x18B4]
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::PutflipX

 Block117:
	mov eax,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax+0x14]
	fild dword ptr [eax+ebx+0x14]
	add eax,ebx
	sub esp,8
	lea ecx,[esi+0x18B4]
	fstp qword ptr [esp]
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Putra
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x7C],0x1C
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x28]
	push ecx
	mov bl,0x1D
	mov ecx,edi
	mov byte ptr [esp+0x7C],bl
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getalpha
	lea edx,[esp+0x40]
	push edx
	lea ecx,[esp+0x54]
	push ecx
	push 0
	push 0
	mov ecx,eax
	mov byte ptr [esp+0x88],0x1E
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x78],bl
	test eax,eax
	je Block119

 Block118:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block119:
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	cmp dword ptr [esi+0x18EC],0
	lea ecx,[esi+0x18EC]
	je Block121

 Block120:
	mov edx,dword ptr [esi+0x1930]
	push edx
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putflip

 Block121:
	mov eax,dword ptr [esp+0x2C]
	mov ebx,dword ptr [eax+0x24]
	mov edi,dword ptr [eax+0x28]
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x7C],0x1F
	call Ztl_variant_t::_ctor_1
	cmp dword ptr [esi+0x1930],0
	mov byte ptr [esp+0x78],0x20
	je Block123

 Block122:
	neg ebx

 Block123:
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x54]
	push ecx
	push edi
	push ebx
	lea ecx,[esi+0x18C0]
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	mov edx,dword ptr [esi+0x570]
	push edx
	call is_vehicle
	add esp,4
	test eax,eax
	je Block131

 Block124:
	mov edi,dword ptr [esp+0x20]
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ebp]
	mov eax,dword ptr [ecx+eax*8+4]
	mov edx,dword ptr [eax+0x28]
	mov ebx,dword ptr [eax+0x2C]
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0x34],edx
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x7C],0x21
	call Ztl_variant_t::_ctor_1
	cmp dword ptr [esi+0x1930],0
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x78],0x22
	je Block126

 Block125:
	neg eax

 Block126:
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x54]
	push edx
	push ebx
	push eax
	lea ecx,[esi+0x18C4]
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ebp]
	mov eax,dword ptr [ecx+eax*8+4]
	mov edx,dword ptr [eax+0x30]
	mov ebx,dword ptr [eax+0x34]
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0x34],edx
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x7C],0x23
	call Ztl_variant_t::_ctor_1
	cmp dword ptr [esi+0x1930],0
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x78],0x24
	je Block128

 Block127:
	neg eax

 Block128:
	lea ecx,[esp+0x40]
	push ecx
	lea edx,[esp+0x54]
	push edx
	push ebx
	push eax
	lea ecx,[esi+0x18C8]
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ebp]
	mov eax,dword ptr [ecx+eax*8+4]
	mov edi,dword ptr [eax+0x38]
	mov ebx,dword ptr [eax+0x3C]
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x7C],0x25
	call Ztl_variant_t::_ctor_1
	cmp dword ptr [esi+0x1930],0
	mov byte ptr [esp+0x78],0x26
	je Block130

 Block129:
	neg edi

 Block130:
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x54]
	push eax
	push ebx
	push edi
	lea ecx,[esi+0x18CC]
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t

 Block131:
	mov ecx,dword ptr [esi+0x540]
	push ecx
	lea edx,[esi+0x538]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	je Block134

 Block132:
	mov eax,dword ptr [esp+0x24]
	sub eax,dword ptr [esi+0x534]
	test eax,eax
	jle Block145

 Block133:
	push 0xFFFFFFFF
	push 0
	mov ecx,esi
	call CAvatar::SetEmotion
	mov dword ptr [esi+0x544],1
	jmp Block145

 Block134:
	cmp dword ptr [esi+0x52C],0
	je Block139

 Block135:
	mov ecx,dword ptr [esi+0x18D0]
	lea edi,[esi+0x18D0]
	test ecx,ecx
	jne Block137

 Block136:
	push 0x80004003
	call _com_issue_error

 Block137:
	call IWzGr2DLayer::GetanimationState
	test eax,eax
	jne Block145

 Block138:
	mov eax,3
	mov word ptr [esp+0x50],ax
	mov dword ptr [esp+0x58],1
	lea ecx,[esp+0x50]
	push ecx
	mov ecx,edi
	mov dword ptr [esp+0x7C],0x27
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::ShiftCanvas
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,esi
	call CAvatar::RegisterNextBlink
	jmp Block145

 Block139:
	mov eax,dword ptr [esp+0x24]
	sub eax,dword ptr [esi+0x530]
	test eax,eax
	jle Block145

 Block140:
	call _rand
	cdq
	mov ecx,3
	idiv ecx
	inc edx
	test edx,edx
	jle Block144

 Block141:
	lea ebp,[esi+0x18D0]
	mov edi,edx
	mov bl,0x29
	jmp Block143

 Block143:
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x7C],0x28
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x54]
	push eax
	push 0x100
	mov ecx,ebp
	mov byte ptr [esp+0x84],bl
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	sub edi,1
	jne Block143

 Block144:
	mov dword ptr [esi+0x52C],1

 Block145:
	lea edi,[esi+0x18FC]
	push edi
	lea ecx,[esi+0x1914]
	call SECPOINT::op_assign_1
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block147

 Block146:
	push eax
	call _com_issue_error

 Block147:
	mov ecx,dword ptr [esi+0x18B0]
	mov dword ptr [esp+0x78],0x2A
	test ecx,ecx
	jne Block149

 Block148:
	push 0x80004003
	call _com_issue_error

 Block149:
	lea eax,[esp+0x60]
	push eax
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	lea edx,[esp+0x58]
	push edx
	lea eax,[esp+0x58]
	push eax
	call IWzVector2D::_GetSnapshot
	cmp word ptr [esp+0x60],8
	mov dword ptr [esp+0x78],0xFFFFFFFF
	jne Block152

 Block150:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	test eax,eax
	je Block153

 Block151:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block153

 Block152:
	lea edx,[esp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block153:
	mov eax,dword ptr [esp+0x38]
	push eax
	lea ecx,[edi+0xC]
	call TSecType<long>::SetData
	mov ecx,dword ptr [esp+0x3C]
	push ecx
	mov ecx,edi
	call TSecType<long>::SetData
	push 0
	mov ecx,esi
	call CAvatar::GetCurrentAction
	cmp eax,0x10E
	jne Block157

 Block154:
	mov ecx,esi
	call CAvatar::IsTransFormSkill
	test eax,eax
	jne Block157

 Block155:
	mov edx,dword ptr [esi+0x570]
	push edx
	call is_vehicle
	add esp,4
	test eax,eax
	jne Block157

 Block156:
	mov ecx,esi
	call CAvatar::DoLevitationAction
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x68
	ret

 Block157:
	cmp dword ptr [esi+0x1938],0
	je Block159

 Block158:
	mov ecx,esi
	call CAvatar::StopLevitationAction

 Block159:
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x68
	ret
}
}
// CAvatar::SetMechanicMode
__SUB_CLASS_THIS(00064EA0, __thiscall, 19982,  CAvatar, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov dword ptr [esi+0x560],eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jg Block2

 Block1:
	push 0
	mov ecx,esi
	call CAvatar::ClearActionLayer
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x14]
	push 0
	push 0x64
	push 6
	mov ecx,esi
	call eax

 Block2:
	pop esi
	ret 4
}
}
// CAvatar::CAvatar
_SUB_EXCEPTION_HANDLER(667C0)
__SUB_CLASS_THIS0(000667C0, __thiscall, 19960,  CAvatar, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_667C0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0xC],esi
	xor ebx,ebx
	int 3// TODO: 	mov dword ptr [esi],offset CAvatar::`vftable'
	mov dword ptr [esi+8],ebx
	mov dword ptr [esi+0xC],ebx
	push 0xF0
	lea eax,[esi+0x1D]
	push ebx
	push eax
	int 3// TODO: 	mov dword ptr [esi+4],offset AvatarLook::`vftable'
	mov byte ptr [esi+0x10],bl
	mov dword ptr [esi+0x11],ebx
	mov dword ptr [esi+0x15],ebx
	mov dword ptr [esi+0x19],ebx
	call _memset
	mov dword ptr [esi+0x1FD],ebx
	mov dword ptr [esi+0x201],ebx
	mov dword ptr [esi+0x205],ebx
	mov dword ptr [esi+0x20D],ebx
	mov dword ptr [esi+0x211],ebx
	push 0xF0
	lea ecx,[esi+0x222]
	push ebx
	push ecx
	mov dword ptr [esp+0x30],ebx
	int 3// TODO: 	mov dword ptr [esi+0x209],offset AvatarLook::`vftable'
	mov byte ptr [esi+0x215],bl
	mov dword ptr [esi+0x216],ebx
	mov dword ptr [esi+0x21A],ebx
	mov dword ptr [esi+0x21E],ebx
	call _memset
	mov dword ptr [esi+0x402],ebx
	mov dword ptr [esi+0x406],ebx
	add esp,0x18
	mov dword ptr [esi+0x40A],ebx
	mov dword ptr [esi+0x500],ebx
	mov dword ptr [esi+0x504],ebx
	mov dword ptr [esi+0x508],ebx
	mov dword ptr [esi+0x50C],ebx
	mov dword ptr [esi+0x510],ebx
	mov dword ptr [esi+0x514],ebx
	mov dword ptr [esi+0x518],ebx
	mov dword ptr [esi+0x528],ebx
	lea ecx,[esi+0x58C]
	mov byte ptr [esp+0x18],2
	mov dword ptr [esi+0x52C],ebx
	mov dword ptr [esi+0x530],ebx
	mov dword ptr [esi+0x544],ebx
	mov dword ptr [esi+0x548],ebx
	mov dword ptr [esi+0x55C],ebx
	mov dword ptr [esi+0x560],ebx
	mov dword ptr [esi+0x564],ebx
	mov dword ptr [esi+0x568],ebx
	mov dword ptr [esi+0x56C],ebx
	mov dword ptr [esi+0x570],ebx
	mov dword ptr [esi+0x574],ebx
	call SECPOINT::_ctor_default
	mov dword ptr [esi+0x5A4],ebx
	mov dword ptr [esi+0x5A8],0xFFFFFFFF
	mov dword ptr [esi+0x5AC],2
	mov dword ptr [esi+0x5B0],ebx
	mov dword ptr [esi+0x5B4],ebx
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [edx+0x3850]
	xor ecx,ecx
	cmp eax,ebx
	setne cl
	push offset CAvatar::ACTIONINFO::~ACTIONINFO
	push offset CAvatar::ACTIONINFO::_ctor_default
	push 2
	push 0x974
	lea edx,[esi+0x5C0]
	mov byte ptr [esp+0x28],3
	and ecx,1
	or ecx,6
	mov dword ptr [esi+0x5B8],ecx
	mov dword ptr [esi+0x5BC],0xFFFFFFFF
	push edx
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x18A8],ebx
	mov dword ptr [esi+0x18AC],ebx
	mov dword ptr [esi+0x18B0],ebx
	mov dword ptr [esi+0x18B4],ebx
	mov dword ptr [esi+0x18B8],ebx
	mov dword ptr [esi+0x18BC],ebx
	mov dword ptr [esi+0x18C0],ebx
	mov dword ptr [esi+0x18C4],ebx
	mov dword ptr [esi+0x18C8],ebx
	mov dword ptr [esi+0x18CC],ebx
	mov dword ptr [esi+0x18D0],ebx
	mov dword ptr [esi+0x18D4],ebx
	mov dword ptr [esi+0x18D8],ebx
	mov dword ptr [esi+0x18DC],ebx
	mov dword ptr [esi+0x18E0],ebx
	mov dword ptr [esi+0x18E4],ebx
	mov dword ptr [esi+0x18E8],ebx
	mov dword ptr [esi+0x18EC],ebx
	mov dword ptr [esi+0x18F0],ebx
	mov dword ptr [esi+0x18F4],ebx
	mov dword ptr [esi+0x18F8],ebx
	lea ecx,[esi+0x18FC]
	mov byte ptr [esp+0x18],0x17
	call SECPOINT::_ctor_default
	lea ecx,[esi+0x1914]
	mov byte ptr [esp+0x18],0x18
	call SECPOINT::_ctor_default
	xor eax,eax
	lea edx,[esi+0x538]
	or ecx,0xFFFFFFFF
	mov byte ptr [esp+0x18],0x19
	mov dword ptr [esi+0x192C],0x64
	mov dword ptr [esi+0x1930],ebx
	mov word ptr [esi+0x1934],ax
	mov dword ptr [esi+0x1938],ebx
	mov dword ptr [esi+0x193C],ebx
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x540],eax
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret
}
}
// CAvatar::ClearActionLayer
__SUB_CLASS_THIS(00064D60, __thiscall, 19982,  CAvatar, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	imul eax,0x974
	push ebx
	push esi
	lea ebx,[eax+ecx+0x5C0]
	push edi
	lea esi,[ebx+0x24]
	mov edi,0x111
	lea esp,[esp]

 Block1:
	lea ecx,[esp+0x10]
	push ecx
	push 1
	push 0
	mov ecx,esi
	call ZArray<ZRef<CActionMan::CHARACTERACTIONFRAMEENTRY>>::_Realloc
	add esi,4
	sub edi,1
	jne Block1

 Block2:
	lea esi,[ebx+0x468]
	mov edi,0x111

 Block3:
	lea edx,[esp+0x10]
	push edx
	push 1
	push 0
	mov ecx,esi
	call ZArray<ZRef<CActionMan::TAMINGMOBACTIONFRAMEENTRY>>::_Realloc
	add esi,4
	sub edi,1
	jne Block3

 Block4:
	lea esi,[ebx+0x8AC]
	mov edi,0x31

 Block5:
	lea eax,[esp+0x10]
	push eax
	push 1
	push 0
	mov ecx,esi
	call ZArray<ZRef<CActionMan::MORPHACTIONFRAMEENTRY>>::_Realloc
	add esi,4
	sub edi,1
	jne Block5

 Block6:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CAvatar::RegisterNextBlink
__SUB_CLASS_THIS0(0005F320, __thiscall, 19962,  CAvatar, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push edi
	mov dword ptr [esi+0x52C],0
	call _rand
	cdq
	mov ecx,0xBB8
	idiv ecx
	mov edi,edx
	call get_update_time
	lea edx,[eax+edi+0x7D0]
	pop edi
	mov dword ptr [esi+0x530],edx
	pop esi
	ret
}
}
// CAvatar::GetGender
__SUB_CLASS_THIS0(00060170, __thiscall, 19977,  CAvatar, long) {
__asm {

 Block0:
	push ecx
	cmp dword ptr [ecx+0x18D8],0
	je Block6

 Block1:
	push esi
	mov esi,dword ptr [ecx+0x18D8]
	test esi,esi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xB0]
	lea ecx,[esp+4]
	push ecx
	push esi
	mov dword ptr [esp+0xC],0
	call edx
	test eax,eax
	jge Block5

 Block4:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block5:
	mov eax,dword ptr [esp+4]
	pop esi
	pop ecx
	ret

 Block6:
	xor eax,eax
	pop ecx
	ret
}
}
// CAvatar::PrepareActionLayer
_SUB_EXCEPTION_HANDLER(66CB0)
__SUB_CLASS_THIS(00066CB0, __thiscall, 19997,  CAvatar, void, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_66CB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x220
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x234]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x14],ebp
	xor ebx,ebx
	mov dword ptr [esp+0x80],ebx
	cmp dword ptr [ebp+0x5B0],ebx
	je Block2

 Block1:
	push ebx
	call CAvatar::ClearActionLayer
	jmp Block626

 Block2:
	mov eax,dword ptr [ebp+0x5B8]
	lea ecx,[esp+0x130]
	push ecx
	push eax
	mov ecx,ebp
	call CAvatar::MoveAction2RawAction
	mov ecx,ebp
	mov esi,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block4

 Block3:
	mov ecx,ebp
	call CAvatar::GetOneTimeAction
	mov esi,eax
	mov dword ptr [esp+0x48],eax
	jmp Block5

 Block4:
	mov dword ptr [esp+0x48],esi

 Block5:
	mov eax,dword ptr [ebp+0x548]
	cmp eax,ebx
	je Block8

 Block6:
	cmp esi,0x31
	jl Block9

 Block7:
	cmp eax,ebx
	jne Block626

 Block8:
	cmp esi,0x111
	jge Block626

 Block9:
	mov eax,dword ptr [ebp+0x560]
	cmp eax,0x217E76D
	jne Block15

 Block10:
	cmp esi,0xEF
	je Block27

 Block11:
	cmp esi,0x3B
	je Block27

 Block12:
	cmp esi,0xF0
	jne Block23

 Block13:
	mov esi,0x104

 Block14:
	mov dword ptr [esp+0x48],esi
	mov dword ptr [ebp+0x5BC],esi

 Block15:
	mov ecx,ebp
	call CAvatar::GetOneTimeAction
	xor edx,edx
	cmp eax,0xFFFFFFFF
	setg dl
	imul edx,0x974
	lea edi,[edx+ebp+0x5C0]
	mov dword ptr [esp+0x5C],edi
	cmp dword ptr [ebp+0x548],ebx
	je Block112

 Block16:
	push ebx
	mov ecx,ebp
	call CAvatar::ClearActionLayer
	mov eax,dword ptr [edi+esi*4+0x8AC]
	lea ebx,[edi+esi*4+0x8AC]
	mov dword ptr [esp+0x80],ebx
	test eax,eax
	je Block18

 Block17:
	cmp dword ptr [eax-4],0
	jne Block19

 Block18:
	mov eax,dword ptr [ebp+0x548]
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push ebx
	push esi
	push eax
	call CActionMan::LoadMorphAction

 Block19:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block626

 Block20:
	mov ebx,dword ptr [eax-4]
	mov dword ptr [esp+0x88],ebx
	test ebx,ebx
	je Block626

 Block21:
	push 0xFFFFFFFE
	mov ecx,ebp
	call CAvatar::AvatarLayerRemoveCanvas
	mov ecx,dword ptr [ebp+0x18E4]
	lea esi,[ebp+0x18E4]
	test ecx,ecx
	jne Block28

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	cmp esi,0x103
	jne Block25

 Block24:
	mov esi,0x106
	jmp Block14

 Block25:
	cmp esi,0xF1
	jne Block15

 Block26:
	mov esi,0x105
	jmp Block14

 Block27:
	mov dword ptr [ebp+0x5BC],0xFFFFFFFF
	jmp Block626

 Block28:
	call IWzGr2DLayer::Getcolor
	test eax,0xFF000000
	je Block30

 Block29:
	push 0xFFFFFF
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putcolor
	push 0xFFFFFF
	lea ecx,[ebp+0x18E0]
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putcolor

 Block30:
	lea ecx,[esp+0x87]
	push ecx
	lea esi,[edi+0xC]
	push 1
	push ebx
	mov ecx,esi
	mov dword ptr [esp+0x74],esi
	call ZArray<long>::_Realloc
	mov eax,dword ptr [esi]
	lea edx,[ebx*4]
	push edx
	push 0
	push eax
	call _memset
	mov eax,dword ptr [esp+0x250]
	add esp,0xC
	cmp eax,2
	mov dword ptr [edi+8],0
	jg Block32

 Block31:
	mov eax,2
	mov dword ptr [esp+0x244],eax
	jmp Block35

 Block32:
	cmp eax,0xA
	jge Block34

 Block33:
	mov dword ptr [esp+0x244],eax
	jmp Block35

 Block34:
	mov dword ptr [esp+0x244],0xA

 Block35:
	mov ecx,ebp
	call CAvatar::IsSuperMan
	test eax,eax
	je Block37

 Block36:
	cmp dword ptr [esp+0x48],0
	mov dword ptr [esp+0x98],1
	jne Block38

 Block37:
	mov dword ptr [esp+0x98],0

 Block38:
	mov ebx,dword ptr [ZImports::_VariantInit]
	xor edi,edi
	cmp dword ptr [esp+0x88],edi
	jle Block79

 Block39:
	mov edi,edi

 Block40:
	cmp dword ptr [esp+0x98],0
	mov ecx,dword ptr [esp+0x80]
	mov edx,dword ptr [ecx]
	lea esi,[edi*8]
	mov eax,dword ptr [esi+edx+4]
	mov ecx,dword ptr [eax+0x28]
	je Block42

 Block41:
	mov eax,dword ptr [esp+0x244]
	add eax,0xA
	imul eax,ecx
	cdq
	and edx,0xF
	add eax,edx
	sar eax,4
	jmp Block43

 Block42:
	mov eax,ecx

 Block43:
	cmp dword ptr [esp+0x24C],0
	mov ecx,dword ptr [esp+0x68]
	mov edx,dword ptr [ecx]
	mov dword ptr [edx+edi*4],eax
	je Block47

 Block44:
	mov eax,dword ptr [esp+0x48]
	push eax
	call is_shoot_morph_action
	add esp,4
	test eax,eax
	je Block47

 Block45:
	mov ecx,dword ptr [esp+0x48]
	push edi
	push ecx
	mov ecx,ebp
	call CAvatar::IsActionHold
	test eax,eax
	je Block47

 Block46:
	mov edx,dword ptr [esp+0x68]
	mov eax,dword ptr [edx]
	mov dword ptr [eax+edi*4],0x7FFFFFFF

 Block47:
	mov ecx,dword ptr [esp+0x68]
	mov edx,dword ptr [ecx]
	mov ecx,dword ptr [edx+edi*4]
	mov eax,dword ptr [esp+0x5C]
	add dword ptr [eax+8],ecx
	lea edx,[esp+0x28]
	push edx
	call ebx
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block48:
	lea ecx,[esp+0x110]
	push ecx
	mov dword ptr [esp+0x240],0
	call ebx
	lea edx,[esp+0x110]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block49:
	lea eax,[esp+0x120]
	push eax
	mov byte ptr [esp+0x240],1
	call ebx
	lea ecx,[esp+0x120]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block50:
	lea edx,[esp+0x70]
	push edx
	mov byte ptr [esp+0x240],2
	call ebx
	lea eax,[esp+0x70]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block51:
	lea ecx,[esp+0x4C]
	push ecx
	mov byte ptr [esp+0x240],3
	call ebx
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block52:
	mov eax,dword ptr [esp+0x80]
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebp+0x18D8]
	add eax,esi
	mov eax,dword ptr [eax+4]
	mov eax,dword ptr [eax+0xC]
	mov byte ptr [esp+0x23C],4
	test ecx,ecx
	je Block22

 Block53:
	lea edx,[esp+0x28]
	push edx
	lea edx,[esp+0x114]
	push edx
	lea edx,[esp+0x128]
	push edx
	lea edx,[esp+0x7C]
	push edx
	lea edx,[esp+0x5C]
	push edx
	push eax
	lea eax,[esp+0x30]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x18],8
	jne Block60

 Block54:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block56

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block56:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block57:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x23C],3
	jne Block61

 Block58:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block62

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block60:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x18]
	push edx
	call esi
	jmp Block57

 Block61:
	lea ecx,[esp+0x4C]
	push ecx
	call esi

 Block62:
	cmp word ptr [esp+0x70],8
	mov byte ptr [esp+0x23C],2
	jne Block65

 Block63:
	mov eax,dword ptr [esp+0x78]
	xor edx,edx
	mov word ptr [esp+0x70],dx
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea eax,[esp+0x70]
	push eax
	call esi

 Block66:
	cmp word ptr [esp+0x120],8
	mov byte ptr [esp+0x23C],1
	jne Block69

 Block67:
	mov eax,dword ptr [esp+0x128]
	xor ecx,ecx
	mov word ptr [esp+0x120],cx
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea edx,[esp+0x120]
	push edx
	call esi

 Block70:
	cmp word ptr [esp+0x110],8
	mov byte ptr [esp+0x23C],0
	jne Block73

 Block71:
	xor eax,eax
	mov word ptr [esp+0x110],ax
	mov eax,dword ptr [esp+0x118]
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea ecx,[esp+0x110]
	push ecx
	call esi

 Block74:
	cmp word ptr [esp+0x28],8
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	jne Block77

 Block75:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea eax,[esp+0x28]
	push eax
	call esi

 Block78:
	inc edi
	cmp edi,dword ptr [esp+0x88]
	jl Block40

 Block79:
	cmp dword ptr [esp+0x130],0
	mov eax,dword ptr [esp+0x5C]
	mov ecx,dword ptr [esp+0x68]
	mov edx,dword ptr [ecx]
	mov dword ptr [eax],0
	mov ecx,dword ptr [edx]
	mov edx,dword ptr [esp+0x80]
	mov dword ptr [eax+4],ecx
	mov eax,dword ptr [edx]
	mov eax,dword ptr [eax+4]
	mov esi,dword ptr [eax+0x20]
	mov edi,dword ptr [eax+0x24]
	jne Block83

 Block80:
	mov eax,dword ptr [esp+0x48]
	cmp eax,9
	je Block83

 Block81:
	cmp eax,0xA
	je Block83

 Block82:
	push 1
	mov ecx,ebp
	call CAvatar::AvatarLayerFlip
	push offset _D_VTMISSING
	lea ecx,[esp+0x104]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0xF4]
	mov dword ptr [esp+0x240],7
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x100]
	push ecx
	lea edx,[esp+0xF4]
	push edx
	push edi
	neg esi
	push esi
	lea ecx,[ebp+0x18B8]
	mov byte ptr [esp+0x24C],8
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	lea ecx,[esp+0xF0]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x100]
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	mov edi,8
	jmp Block97

 Block83:
	push 0
	mov ecx,ebp
	call CAvatar::AvatarLayerFlip
	lea eax,[esp+0x4C]
	push eax
	call ebx
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block85

 Block84:
	push eax
	call _com_issue_error

 Block85:
	lea edx,[esp+0x28]
	mov ebx,5
	push edx
	mov dword ptr [esp+0x240],ebx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block87

 Block86:
	push eax
	call _com_issue_error

 Block87:
	mov ecx,dword ptr [ebp+0x18B8]
	mov byte ptr [esp+0x23C],6
	test ecx,ecx
	jne Block89

 Block88:
	push 0x80004003
	call _com_issue_error

 Block89:
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push edi
	push esi
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x23C],bl
	jne Block92

 Block90:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	mov edi,8
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	cmp word ptr [esp+0x4C],di
	jne Block96

 Block94:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block97:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x4C]
	push edx
	call esi
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block99

 Block98:
	push eax
	call _com_issue_error

 Block99:
	lea ecx,[esp+0x28]
	push ecx
	mov dword ptr [esp+0x240],9
	call esi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block101

 Block100:
	push eax
	call _com_issue_error

 Block101:
	mov ecx,dword ptr [ebp+0x18B4]
	mov byte ptr [esp+0x23C],0xA
	test ecx,ecx
	jne Block103

 Block102:
	push 0x80004003
	call _com_issue_error

 Block103:
	lea eax,[esp+0x4C]
	push eax
	lea edx,[esp+0x2C]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov byte ptr [esp+0x23C],9
	cmp word ptr [esp+0x28],di
	jne Block106

 Block104:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block107

 Block105:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block107

 Block106:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block107:
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	cmp word ptr [esp+0x4C],di
	jne Block110

 Block108:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block111

 Block109:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov esi,dword ptr [ebp+0x18B4]
	jmp Block622

 Block110:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block111:
	mov esi,dword ptr [ebp+0x18B4]
	jmp Block622

 Block112:
	cmp esi,0x2F
	jne Block114

 Block113:
	mov dword ptr [ebp+0x570],ebx
	mov dword ptr [ebp+0x574],ebx

 Block114:
	mov ecx,ebp
	call CAvatar::IsRidingEx
	test eax,eax
	je Block118

 Block115:
	mov esi,dword ptr [esp+0x24C]
	mov edi,dword ptr [esp+0x248]
	mov ebx,dword ptr [esp+0x244]
	push esi
	push edi
	push ebx
	mov ecx,ebp
	call CAvatar::PrepareCharacterActionLayer
	mov eax,dword ptr [ebp+0x570]
	push eax
	mov ecx,ebp
	call CAvatar::GetOneTimeAction
	push eax
	call IsAbleTamingMobOneTimeAction
	add esp,8
	test eax,eax
	je Block117

 Block116:
	mov ecx,ebp
	call CAvatar::GetOneTimeAction
	mov dword ptr [ebp+0x5A8],eax

 Block117:
	push esi
	push edi
	push ebx
	mov ecx,ebp
	call CAvatar::PrepareTamingMobActionLayer
	mov ecx,ebp
	call CAvatar::FixCharacterPosition
	jmp Block626

 Block118:
	mov esi,dword ptr [esp+0x48]
	lea eax,[edi+esi*4+0x468]
	lea ebx,[edi+esi*4+0x24]
	mov edi,dword ptr [ebp+0x570]
	push edi
	mov dword ptr [esp+0xF0],ebx
	mov dword ptr [esp+0x68],eax
	call is_vehicle
	add esp,4
	test eax,eax
	je Block122

 Block119:
	mov ecx,dword ptr [esp+0x64]
	mov ecx,dword ptr [ecx]
	test ecx,ecx
	je Block124

 Block120:
	cmp dword ptr [ecx-4],0
	je Block124

 Block121:
	test eax,eax
	jne Block131

 Block122:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block124

 Block123:
	cmp dword ptr [eax-4],0
	jne Block131

 Block124:
	cmp dword ptr [ebp+0x500],0
	jne Block126

 Block125:
	mov eax,dword ptr [ebp+0x55C]
	mov edx,dword ptr [ebp+0x5A4]
	mov ecx,dword ptr [ebp+0x11]
	push eax
	mov eax,dword ptr [ebp+0x19]
	push edx
	movzx edx,byte ptr [ebp+0x10]
	push edi
	push eax
	mov eax,dword ptr [esp+0x58]
	push ebx
	lea esi,[ebp+0x1D]
	push esi
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push edx
	push eax
	call CActionMan::LoadCharacterAction
	mov ecx,dword ptr [esp+0x64]
	mov edx,dword ptr [ebp+0x5A4]
	mov eax,dword ptr [esp+0x48]
	push ecx
	mov ecx,dword ptr [ebp+0x570]
	push edx
	push esi
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	call CActionMan::LoadTamingMobAction
	mov esi,dword ptr [esp+0x48]
	jmp Block131

 Block126:
	xor eax,eax
	lea ecx,[ebp+0x410]
	lea esp,[esp]

 Block127:
	mov edx,dword ptr [ecx]
	cmp edx,0xFFFFFFFF
	jne Block129

 Block128:
	mov edx,dword ptr [ecx-0x3F3]

 Block129:
	mov dword ptr [esp+eax*4+0x144],edx
	inc eax
	add ecx,4
	cmp eax,0x3C
	jl Block127

 Block130:
	mov eax,dword ptr [ebp+0x55C]
	mov edx,dword ptr [ebp+0x5A4]
	push eax
	mov eax,dword ptr [ebp+0x19]
	push edx
	mov edx,dword ptr [ebp+0x11]
	push edi
	push eax
	movzx eax,byte ptr [ebp+0x10]
	push ebx
	lea ecx,[esp+0x158]
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push edx
	push eax
	push esi
	call CActionMan::LoadCharacterAction
	mov ecx,dword ptr [esp+0x64]
	mov edx,dword ptr [ebp+0x5A4]
	push ecx
	mov ecx,dword ptr [ebp+0x570]
	push edx
	lea eax,[esp+0x14C]
	push eax
	push esi
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	call CActionMan::LoadTamingMobAction

 Block131:
	mov ecx,dword ptr [ebp+0x570]
	lea edx,[esi+esi*2]
	lea eax,[edx*8+ActionData::m_saCharacterActions]
	push ecx
	mov dword ptr [esp+0x9C],eax
	call is_vehicle
	add esp,4
	test eax,eax
	je Block134

 Block132:
	mov edx,dword ptr [esp+0x64]
	mov eax,dword ptr [edx]
	test eax,eax
	jne Block136

 Block133:
	xor edi,edi
	jmp Block137

 Block134:
	mov eax,dword ptr [ebx]
	test eax,eax
	jne Block136

 Block135:
	xor edi,edi
	jmp Block137

 Block136:
	mov edi,dword ptr [eax-4]

 Block137:
	mov esi,dword ptr [esp+0x5C]
	lea eax,[esp+0x87]
	push eax
	push 1
	lea ebx,[esi+0xC]
	push edi
	mov ecx,ebx
	mov dword ptr [esp+0x6C],edi
	call ZArray<long>::_Realloc
	mov edx,dword ptr [ebx]
	lea ecx,[edi*4]
	push ecx
	push 0
	push edx
	call _memset
	mov eax,dword ptr [esp+0x54]
	add esp,0xC
	mov dword ptr [esi+8],0
	test eax,eax
	jl Block139

 Block138:
	cmp eax,1
	jle Block140

 Block139:
	cmp eax,0x7C
	jne Block153

 Block140:
	mov eax,dword ptr [esp+0x248]
	cmp eax,0x46
	jg Block142

 Block141:
	mov eax,0x46
	mov dword ptr [esp+0x248],eax
	jmp Block145

 Block142:
	cmp eax,0x8C
	jge Block144

 Block143:
	mov dword ptr [esp+0x248],eax
	jmp Block145

 Block144:
	mov dword ptr [esp+0x248],0x8C

 Block145:
	xor esi,esi
	test edi,edi
	jle Block168

 Block146:
	mov edi,dword ptr [ebx]
	xor ebp,ebp
	jmp Block148

 Block148:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax+0x570]
	push ecx
	call is_vehicle
	add esp,4
	test eax,eax
	je Block150

 Block149:
	mov edx,dword ptr [esp+0x64]
	mov eax,dword ptr [edx]
	mov eax,dword ptr [eax+esi*8+4]
	mov eax,dword ptr [eax+0x24]
	jmp Block151

 Block150:
	mov ecx,dword ptr [esp+0x98]
	mov edx,dword ptr [ecx+0x14]
	mov eax,dword ptr [edx+ebp+8]

 Block151:
	imul eax,0x64
	cdq
	idiv dword ptr [esp+0x248]
	inc esi
	add ebp,0x20
	mov dword ptr [edi+esi*4-4],eax
	mov edi,dword ptr [ebx]
	mov ecx,dword ptr [edi+esi*4-4]
	mov eax,dword ptr [esp+0x5C]
	add dword ptr [eax+8],ecx
	cmp esi,dword ptr [esp+0x60]
	jl Block148

 Block152:
	jmp Block168

 Block153:
	mov eax,dword ptr [esp+0x244]
	cmp eax,2
	jg Block155

 Block154:
	mov eax,2
	jmp Block157

 Block155:
	cmp eax,0xA
	jl Block157

 Block156:
	mov eax,0xA

 Block157:
	xor esi,esi
	test edi,edi
	jle Block168

 Block158:
	lea ebp,[eax+0xA]
	xor edi,edi
	jmp Block160

 Block160:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx+0x570]
	push eax
	call is_vehicle
	add esp,4
	test eax,eax
	je Block162

 Block161:
	mov ecx,dword ptr [esp+0x64]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+esi*8+4]
	mov ecx,dword ptr [eax+0x24]
	jmp Block163

 Block162:
	mov eax,dword ptr [esp+0x98]
	mov ecx,dword ptr [eax+0x14]
	mov ecx,dword ptr [ecx+edi+8]

 Block163:
	mov eax,ebp
	imul eax,ecx
	cdq
	and edx,0xF
	add eax,edx
	mov edx,dword ptr [ebx]
	sar eax,4
	cmp dword ptr [esp+0x24C],0
	mov dword ptr [edx+esi*4],eax
	je Block167

 Block164:
	mov eax,dword ptr [esp+0x48]
	push eax
	call is_shoot_action
	add esp,4
	test eax,eax
	je Block167

 Block165:
	mov ecx,dword ptr [esp+0x48]
	push esi
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	call CAvatar::IsActionHold
	test eax,eax
	je Block167

 Block166:
	mov edx,dword ptr [ebx]
	mov dword ptr [edx+esi*4],0x7FFFFFFF

 Block167:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+esi*4]
	mov eax,dword ptr [esp+0x5C]
	add dword ptr [eax+8],ecx
	inc esi
	add edi,0x20
	cmp esi,dword ptr [esp+0x60]
	jl Block160

 Block168:
	mov edx,3
	mov esi,0xFFFFFFFE
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],esi
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [eax+0x18D8]
	add eax,0x18D8
	mov dword ptr [esp+0x23C],0xB
	mov dword ptr [esp+0x68],eax
	test ecx,ecx
	jne Block170

 Block169:
	push 0x80004003
	call _com_issue_error

 Block170:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x8C]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x88]
	test eax,eax
	je Block172

 Block171:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block172:
	mov ebp,8
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	cmp word ptr [esp+0x28],bp
	jne Block175

 Block173:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block176

 Block174:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block176

 Block175:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block176:
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],esi
	mov edi,dword ptr [esp+0x14]
	mov ecx,dword ptr [edi+0x18D4]
	mov dword ptr [esp+0x23C],0xC
	test ecx,ecx
	jne Block178

 Block177:
	push 0x80004003
	call _com_issue_error

 Block178:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x8C]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x88]
	test eax,eax
	je Block180

 Block179:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block180:
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	cmp word ptr [esp+0x28],bp
	jne Block183

 Block181:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block184

 Block182:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block184

 Block183:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block184:
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],esi
	mov ecx,dword ptr [edi+0x18E4]
	add edi,0x18E4
	mov dword ptr [esp+0x23C],0xD
	mov dword ptr [esp+0x110],edi
	test ecx,ecx
	jne Block186

 Block185:
	push 0x80004003
	call _com_issue_error

 Block186:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x8C]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x88]
	test eax,eax
	je Block188

 Block187:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block188:
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	cmp word ptr [esp+0x28],bp
	jne Block191

 Block189:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block192

 Block190:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block192

 Block191:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block192:
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],esi
	mov ebp,dword ptr [esp+0x14]
	mov ecx,dword ptr [ebp+0x18E0]
	add ebp,0x18E0
	mov dword ptr [esp+0x23C],0xE
	mov dword ptr [esp+0x88],ebp
	test ecx,ecx
	jne Block194

 Block193:
	push 0x80004003
	call _com_issue_error

 Block194:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x70]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x6C]
	test eax,eax
	je Block196

 Block195:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block196:
	cmp word ptr [esp+0x28],8
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	jne Block199

 Block197:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block200

 Block198:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block200

 Block199:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block200:
	cmp dword ptr [esp+0x60],0
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [eax],0
	mov dword ptr [eax+4],0
	jle Block202

 Block201:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [edx]
	mov dword ptr [eax+4],ecx

 Block202:
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [edx+0x570]
	xor ebx,ebx
	push eax
	mov dword ptr [esp+0x124],ebx
	mov dword ptr [esp+0x128],ebx
	call is_vehicle
	add esp,4
	test eax,eax
	je Block357

 Block203:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],esi
	mov ecx,dword ptr [edi]
	mov dword ptr [esp+0x23C],0xF
	cmp ecx,ebx
	jne Block205

 Block204:
	push 0x80004003
	call _com_issue_error

 Block205:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x70]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x6C]
	cmp eax,ebx
	je Block207

 Block206:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block207:
	mov edi,8
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	cmp word ptr [esp+0x28],di
	jne Block210

 Block208:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebx
	je Block211

 Block209:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block211

 Block210:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block211:
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],esi
	mov ecx,dword ptr [ebp]
	mov dword ptr [esp+0x23C],0x10
	cmp ecx,ebx
	jne Block213

 Block212:
	push 0x80004003
	call _com_issue_error

 Block213:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x70]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x6C]
	cmp eax,ebx
	je Block215

 Block214:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block215:
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	cmp word ptr [esp+0x28],di
	jne Block218

 Block216:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebx
	je Block219

 Block217:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block219

 Block218:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block219:
	mov ebx,dword ptr [esp+0x64]
	mov ecx,ebx
	xor ebp,ebp
	call ZArray<ZRef<CActionMan::TAMINGMOBACTIONFRAMEENTRY>>::GetCount
	mov edi,dword ptr [ZImports::_VariantInit]
	test eax,eax
	jbe Block283

 Block220:
	nop

 Block221:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+ebp*8+4]
	mov ecx,dword ptr [esp+0x14]
	lea esi,[ebp*8]
	push ebp
	add eax,0xC
	push eax
	mov eax,dword ptr [esp+0x118]
	push eax
	call CAvatar::ApplyScaleAndOffset
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+esi+4]
	mov edx,dword ptr [esp+0x88]
	mov ecx,dword ptr [esp+0x14]
	push ebp
	add eax,0x10
	push eax
	push edx
	call CAvatar::ApplyScaleAndOffset
	lea eax,[esp+0xCC]
	push eax
	call edi
	lea ecx,[esp+0xCC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block222:
	lea edx,[esp+0x9C]
	push edx
	mov dword ptr [esp+0x240],0x11
	call edi
	lea eax,[esp+0x9C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block223:
	lea ecx,[esp+0x70]
	push ecx
	mov byte ptr [esp+0x240],0x12
	call edi
	lea edx,[esp+0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block224:
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0x240],0x13
	call edi
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block225:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x240],0x14
	call edi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block226:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [esp+0x110]
	mov ecx,dword ptr [ecx]
	add eax,esi
	mov eax,dword ptr [eax+4]
	mov eax,dword ptr [eax+0xC]
	mov byte ptr [esp+0x23C],0x15
	test ecx,ecx
	je Block22

 Block227:
	lea edx,[esp+0xCC]
	push edx
	lea edx,[esp+0xA0]
	push edx
	lea edx,[esp+0x78]
	push edx
	lea edx,[esp+0x58]
	push edx
	lea edx,[esp+0x38]
	push edx
	push eax
	lea eax,[esp+0x118]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x100],8
	jne Block230

 Block228:
	mov eax,dword ptr [esp+0x108]
	xor ecx,ecx
	mov word ptr [esp+0x100],cx
	test eax,eax
	je Block231

 Block229:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block231

 Block230:
	lea edx,[esp+0x100]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block231:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x23C],0x14
	jne Block234

 Block232:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block235

 Block233:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block235

 Block234:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block235:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x23C],0x13
	jne Block238

 Block236:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block239

 Block237:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block239

 Block238:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block239:
	cmp word ptr [esp+0x70],8
	mov byte ptr [esp+0x23C],0x12
	jne Block242

 Block240:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	test eax,eax
	je Block243

 Block241:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block243

 Block242:
	lea edx,[esp+0x70]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block243:
	cmp word ptr [esp+0x9C],8
	mov byte ptr [esp+0x23C],0x11
	jne Block246

 Block244:
	xor eax,eax
	mov word ptr [esp+0x9C],ax
	mov eax,dword ptr [esp+0xA4]
	test eax,eax
	je Block247

 Block245:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block247

 Block246:
	lea ecx,[esp+0x9C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block247:
	cmp word ptr [esp+0xCC],8
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	jne Block250

 Block248:
	mov eax,dword ptr [esp+0xD4]
	xor edx,edx
	mov word ptr [esp+0xCC],dx
	test eax,eax
	je Block251

 Block249:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block251

 Block250:
	lea eax,[esp+0xCC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block251:
	lea ecx,[esp+0x18]
	push ecx
	call edi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block252:
	lea eax,[esp+0x38]
	push eax
	mov dword ptr [esp+0x240],0x16
	call edi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block253:
	lea edx,[esp+0xBC]
	push edx
	mov byte ptr [esp+0x240],0x17
	call edi
	lea eax,[esp+0xBC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block254:
	lea ecx,[esp+0xAC]
	push ecx
	mov byte ptr [esp+0x240],0x18
	call edi
	lea edx,[esp+0xAC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block255:
	lea eax,[esp+0xDC]
	push eax
	mov byte ptr [esp+0x240],0x19
	call edi
	lea ecx,[esp+0xDC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block256:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [esp+0x88]
	mov ecx,dword ptr [edx]
	add eax,esi
	mov eax,dword ptr [eax+4]
	mov eax,dword ptr [eax+0x10]
	mov byte ptr [esp+0x23C],0x1A
	test ecx,ecx
	je Block22

 Block257:
	lea edx,[esp+0x18]
	push edx
	lea edx,[esp+0x3C]
	push edx
	lea edx,[esp+0xC4]
	push edx
	lea edx,[esp+0xB8]
	push edx
	lea edx,[esp+0xEC]
	push edx
	push eax
	lea eax,[esp+0x108]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0xF0],8
	jne Block264

 Block258:
	mov eax,dword ptr [esp+0xF8]
	xor ecx,ecx
	mov word ptr [esp+0xF0],cx
	test eax,eax
	je Block260

 Block259:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block260:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block261:
	cmp word ptr [esp+0xDC],8
	mov byte ptr [esp+0x23C],0x19
	jne Block265

 Block262:
	xor eax,eax
	mov word ptr [esp+0xDC],ax
	mov eax,dword ptr [esp+0xE4]
	test eax,eax
	je Block266

 Block263:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block266

 Block264:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0xF0]
	push edx
	call esi
	jmp Block261

 Block265:
	lea ecx,[esp+0xDC]
	push ecx
	call esi

 Block266:
	cmp word ptr [esp+0xAC],8
	mov byte ptr [esp+0x23C],0x18
	jne Block269

 Block267:
	mov eax,dword ptr [esp+0xB4]
	xor edx,edx
	mov word ptr [esp+0xAC],dx
	test eax,eax
	je Block270

 Block268:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block270

 Block269:
	lea eax,[esp+0xAC]
	push eax
	call esi

 Block270:
	cmp word ptr [esp+0xBC],8
	mov byte ptr [esp+0x23C],0x17
	jne Block273

 Block271:
	mov eax,dword ptr [esp+0xC4]
	xor ecx,ecx
	mov word ptr [esp+0xBC],cx
	test eax,eax
	je Block274

 Block272:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block274

 Block273:
	lea edx,[esp+0xBC]
	push edx
	call esi

 Block274:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x23C],0x16
	jne Block277

 Block275:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block278

 Block276:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block278

 Block277:
	lea ecx,[esp+0x38]
	push ecx
	call esi

 Block278:
	cmp word ptr [esp+0x18],8
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	jne Block281

 Block279:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block282

 Block280:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block282

 Block281:
	lea eax,[esp+0x18]
	push eax
	call esi

 Block282:
	mov ecx,ebx
	inc ebp
	call ZArray<ZRef<CActionMan::TAMINGMOBACTIONFRAMEENTRY>>::GetCount
	cmp ebp,eax
	jb Block221

 Block283:
	mov ebp,dword ptr [esp+0xEC]
	mov ecx,ebp
	mov dword ptr [esp+0x60],0
	call ZArray<ZRef<CActionMan::CHARACTERACTIONFRAMEENTRY>>::GetCount
	test eax,eax
	jbe Block346

 Block284:
	mov ebx,dword ptr [esp+0x60]
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx+ebx*8+4]
	mov edx,dword ptr [esp+0x68]
	mov ecx,dword ptr [esp+0x14]
	lea esi,[ebx*8]
	push ebx
	add eax,0xC
	push eax
	push edx
	call CAvatar::ApplyScaleAndOffset
	mov eax,dword ptr [ebp]
	mov eax,dword ptr [eax+esi+4]
	mov ecx,dword ptr [esp+0x14]
	push ebx
	mov ebx,dword ptr [esp+0x18]
	add eax,0x10
	push eax
	add ebx,0x18D4
	push ebx
	call CAvatar::ApplyScaleAndOffset
	lea ecx,[esp+0xDC]
	push ecx
	call edi
	lea edx,[esp+0xDC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block285:
	lea eax,[esp+0xAC]
	push eax
	mov dword ptr [esp+0x240],0x1B
	call edi
	lea ecx,[esp+0xAC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block286:
	lea edx,[esp+0xBC]
	push edx
	mov byte ptr [esp+0x240],0x1C
	call edi
	lea eax,[esp+0xBC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block287:
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x240],0x1D
	call edi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block288:
	lea eax,[esp+0x18]
	push eax
	mov byte ptr [esp+0x240],0x1E
	call edi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block289:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [esp+0x68]
	mov ecx,dword ptr [edx]
	add eax,esi
	mov eax,dword ptr [eax+4]
	mov eax,dword ptr [eax+0xC]
	mov byte ptr [esp+0x23C],0x1F
	test ecx,ecx
	je Block22

 Block290:
	lea edx,[esp+0xDC]
	push edx
	lea edx,[esp+0xB0]
	push edx
	lea edx,[esp+0xC4]
	push edx
	lea edx,[esp+0x44]
	push edx
	lea edx,[esp+0x28]
	push edx
	push eax
	lea eax,[esp+0x108]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0xF0],8
	jne Block293

 Block291:
	mov eax,dword ptr [esp+0xF8]
	xor ecx,ecx
	mov word ptr [esp+0xF0],cx
	test eax,eax
	je Block294

 Block292:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block294

 Block293:
	lea edx,[esp+0xF0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block294:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x23C],0x1E
	jne Block297

 Block295:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block298

 Block296:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block298

 Block297:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block298:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x23C],0x1D
	jne Block301

 Block299:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block302

 Block300:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block302

 Block301:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block302:
	cmp word ptr [esp+0xBC],8
	mov byte ptr [esp+0x23C],0x1C
	jne Block305

 Block303:
	mov eax,dword ptr [esp+0xC4]
	xor ecx,ecx
	mov word ptr [esp+0xBC],cx
	test eax,eax
	je Block306

 Block304:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block306

 Block305:
	lea edx,[esp+0xBC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block306:
	cmp word ptr [esp+0xAC],8
	mov byte ptr [esp+0x23C],0x1B
	jne Block309

 Block307:
	xor eax,eax
	mov word ptr [esp+0xAC],ax
	mov eax,dword ptr [esp+0xB4]
	test eax,eax
	je Block310

 Block308:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block310

 Block309:
	lea ecx,[esp+0xAC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block310:
	cmp word ptr [esp+0xDC],8
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	jne Block313

 Block311:
	mov eax,dword ptr [esp+0xE4]
	xor edx,edx
	mov word ptr [esp+0xDC],dx
	test eax,eax
	je Block314

 Block312:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block314

 Block313:
	lea eax,[esp+0xDC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block314:
	lea ecx,[esp+0x70]
	push ecx
	call edi
	lea edx,[esp+0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block315:
	lea eax,[esp+0x4C]
	push eax
	mov dword ptr [esp+0x240],0x20
	call edi
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block316:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x240],0x21
	call edi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block317:
	lea ecx,[esp+0x9C]
	push ecx
	mov byte ptr [esp+0x240],0x22
	call edi
	lea edx,[esp+0x9C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block318:
	lea eax,[esp+0xCC]
	push eax
	mov byte ptr [esp+0x240],0x23
	call edi
	lea ecx,[esp+0xCC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block319:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [ebx]
	add eax,esi
	mov eax,dword ptr [eax+4]
	mov eax,dword ptr [eax+0x10]
	mov byte ptr [esp+0x23C],0x24
	test ecx,ecx
	je Block22

 Block320:
	lea edx,[esp+0x70]
	push edx
	lea edx,[esp+0x50]
	push edx
	lea edx,[esp+0x30]
	push edx
	lea edx,[esp+0xA8]
	push edx
	lea edx,[esp+0xDC]
	push edx
	push eax
	lea eax,[esp+0x118]
	push eax
	call IWzGr2DLayer::InsertCanvas
	mov ebx,8
	cmp word ptr [esp+0x100],bx
	jne Block327

 Block321:
	mov eax,dword ptr [esp+0x108]
	xor ecx,ecx
	mov word ptr [esp+0x100],cx
	test eax,eax
	je Block323

 Block322:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block323:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block324:
	mov byte ptr [esp+0x23C],0x23
	cmp word ptr [esp+0xCC],bx
	jne Block328

 Block325:
	xor eax,eax
	mov word ptr [esp+0xCC],ax
	mov eax,dword ptr [esp+0xD4]
	test eax,eax
	je Block329

 Block326:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block329

 Block327:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x100]
	push edx
	call esi
	jmp Block324

 Block328:
	lea ecx,[esp+0xCC]
	push ecx
	call esi

 Block329:
	mov byte ptr [esp+0x23C],0x22
	cmp word ptr [esp+0x9C],bx
	jne Block332

 Block330:
	mov eax,dword ptr [esp+0xA4]
	xor edx,edx
	mov word ptr [esp+0x9C],dx
	test eax,eax
	je Block333

 Block331:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block333

 Block332:
	lea eax,[esp+0x9C]
	push eax
	call esi

 Block333:
	mov byte ptr [esp+0x23C],0x21
	cmp word ptr [esp+0x28],bx
	jne Block336

 Block334:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block337

 Block335:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block337

 Block336:
	lea edx,[esp+0x28]
	push edx
	call esi

 Block337:
	mov byte ptr [esp+0x23C],0x20
	cmp word ptr [esp+0x4C],bx
	jne Block340

 Block338:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block341

 Block339:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block341

 Block340:
	lea ecx,[esp+0x4C]
	push ecx
	call esi

 Block341:
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	cmp word ptr [esp+0x70],bx
	jne Block344

 Block342:
	mov eax,dword ptr [esp+0x78]
	xor edx,edx
	mov word ptr [esp+0x70],dx
	test eax,eax
	je Block345

 Block343:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block345

 Block344:
	lea eax,[esp+0x70]
	push eax
	call esi

 Block345:
	mov esi,dword ptr [esp+0x60]
	inc esi
	mov ecx,ebp
	mov dword ptr [esp+0x60],esi
	call ZArray<ZRef<CActionMan::CHARACTERACTIONFRAMEENTRY>>::GetCount
	cmp esi,eax
	jb Block284

 Block346:
	mov ecx,dword ptr [esp+0x14]
	mov esi,dword ptr [ecx+0x56C]
	mov edx,dword ptr [esp+0x110]
	mov edi,dword ptr [edx]
	neg esi
	sbb esi,esi
	and esi,0x1000000
	dec esi
	test edi,edi
	jne Block348

 Block347:
	push 0x80004003
	call _com_issue_error

 Block348:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push esi
	push edi
	call ecx
	test eax,eax
	jge Block350

 Block349:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block350:
	mov edx,dword ptr [esp+0x88]
	mov edi,dword ptr [edx]
	test edi,edi
	jne Block352

 Block351:
	push 0x80004003
	call _com_issue_error

 Block352:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push esi
	push edi
	call ecx
	test eax,eax
	jge Block354

 Block353:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block354:
	mov edi,dword ptr [esp+0x14]
	xor ebx,ebx
	mov dword ptr [edi+0x588],ebx
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x18]
	mov ebp,dword ptr [eax+0x14]
	mov eax,dword ptr [esp+0x64]
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x114],edx
	mov dword ptr [esp+0x8C],ebx
	mov dword ptr [esp+0x88],ebx
	cmp eax,ebx
	je Block426

 Block355:
	mov edx,dword ptr [esp+0x5C]
	mov esi,dword ptr [eax-4]
	mov edx,dword ptr [edx]
	cmp edx,esi
	jae Block426

 Block356:
	mov eax,dword ptr [eax+edx*8+4]
	mov ecx,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x28]
	sub edx,dword ptr [ecx+0x1C]
	mov dword ptr [esp+0x88],edx
	mov edx,dword ptr [eax+0x2C]
	sub edx,dword ptr [ecx+0x20]
	add eax,0x14
	mov dword ptr [esp+0x8C],edx
	mov edx,dword ptr [eax]
	lea ecx,[edi+0x578]
	mov dword ptr [ecx],edx
	mov edx,dword ptr [eax+4]
	mov dword ptr [ecx+4],edx
	mov edx,dword ptr [eax+8]
	mov dword ptr [ecx+8],edx
	mov eax,dword ptr [eax+0xC]
	mov dword ptr [ecx+0xC],eax
	jmp Block426

 Block357:
	mov ecx,dword ptr [edi]
	cmp ecx,ebx
	jne Block359

 Block358:
	push 0x80004003
	call _com_issue_error

 Block359:
	call IWzGr2DLayer::Getcolor
	test eax,0xFF000000
	je Block365

 Block360:
	mov ecx,dword ptr [edi]
	cmp ecx,ebx
	jne Block362

 Block361:
	push 0x80004003
	call _com_issue_error

 Block362:
	push 0xFFFFFF
	call IWzGr2DLayer::Putcolor
	mov ecx,dword ptr [ebp]
	cmp ecx,ebx
	jne Block364

 Block363:
	push 0x80004003
	call _com_issue_error

 Block364:
	push 0xFFFFFF
	call IWzGr2DLayer::Putcolor

 Block365:
	mov edi,dword ptr [esp+0xEC]
	mov ecx,edi
	xor ebp,ebp
	call ZArray<ZRef<CActionMan::CHARACTERACTIONFRAMEENTRY>>::GetCount
	mov ebx,dword ptr [ZImports::_VariantInit]
	test eax,eax
	jbe Block425

 Block366:
	lea ebx,[ebx]

 Block367:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+ebp*8+4]
	mov edx,dword ptr [esp+0x68]
	mov ecx,dword ptr [esp+0x14]
	lea esi,[ebp*8]
	push ebp
	add eax,0xC
	push eax
	push edx
	call CAvatar::ApplyScaleAndOffset
	mov eax,dword ptr [edi]
	mov eax,dword ptr [eax+esi+4]
	mov ecx,dword ptr [esp+0x14]
	add eax,0x10
	push ebp
	push eax
	mov eax,dword ptr [esp+0x1C]
	add eax,0x18D4
	push eax
	call CAvatar::ApplyScaleAndOffset
	lea ecx,[esp+0xDC]
	push ecx
	call ebx
	lea edx,[esp+0xDC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block368:
	mov eax,dword ptr [esp+0x14]
	mov eax,dword ptr [eax+0x192C]
	mov ecx,3
	mov dword ptr [esp+0x23C],0x25
	mov word ptr [esp+0xAC],cx
	mov dword ptr [esp+0xB4],eax
	mov edx,ecx
	mov word ptr [esp+0xBC],dx
	mov dword ptr [esp+0xC4],eax
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0x240],0x27
	call ebx
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block369:
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x240],0x28
	call ebx
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block370:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [esp+0x68]
	mov ecx,dword ptr [ecx]
	add eax,esi
	mov eax,dword ptr [eax+4]
	mov eax,dword ptr [eax+0xC]
	mov byte ptr [esp+0x23C],0x29
	test ecx,ecx
	je Block22

 Block371:
	lea edx,[esp+0xDC]
	push edx
	lea edx,[esp+0xB0]
	push edx
	lea edx,[esp+0xC4]
	push edx
	lea edx,[esp+0x44]
	push edx
	lea edx,[esp+0x28]
	push edx
	push eax
	lea eax,[esp+0x108]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0xF0],8
	jne Block374

 Block372:
	mov eax,dword ptr [esp+0xF8]
	xor ecx,ecx
	mov word ptr [esp+0xF0],cx
	test eax,eax
	je Block375

 Block373:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block375

 Block374:
	lea edx,[esp+0xF0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block375:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x23C],0x28
	jne Block378

 Block376:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block379

 Block377:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block379

 Block378:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block379:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x23C],0x27
	jne Block382

 Block380:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block383

 Block381:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block383

 Block382:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block383:
	cmp word ptr [esp+0xBC],8
	mov byte ptr [esp+0x23C],0x26
	jne Block386

 Block384:
	mov eax,dword ptr [esp+0xC4]
	xor ecx,ecx
	mov word ptr [esp+0xBC],cx
	test eax,eax
	je Block387

 Block385:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block387

 Block386:
	lea edx,[esp+0xBC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block387:
	cmp word ptr [esp+0xAC],8
	mov byte ptr [esp+0x23C],0x25
	jne Block390

 Block388:
	xor eax,eax
	mov word ptr [esp+0xAC],ax
	mov eax,dword ptr [esp+0xB4]
	test eax,eax
	je Block391

 Block389:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block391

 Block390:
	lea ecx,[esp+0xAC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block391:
	cmp word ptr [esp+0xDC],8
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	jne Block394

 Block392:
	mov eax,dword ptr [esp+0xE4]
	xor edx,edx
	mov word ptr [esp+0xDC],dx
	test eax,eax
	je Block395

 Block393:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block395

 Block394:
	lea eax,[esp+0xDC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block395:
	lea ecx,[esp+0x70]
	push ecx
	call ebx
	lea edx,[esp+0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block396:
	mov eax,dword ptr [esp+0x14]
	mov eax,dword ptr [eax+0x192C]
	mov ecx,3
	mov dword ptr [esp+0x23C],0x2A
	mov word ptr [esp+0x4C],cx
	mov dword ptr [esp+0x54],eax
	mov edx,ecx
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],eax
	lea eax,[esp+0x9C]
	push eax
	mov byte ptr [esp+0x240],0x2C
	call ebx
	lea ecx,[esp+0x9C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block397:
	lea edx,[esp+0xCC]
	push edx
	mov byte ptr [esp+0x240],0x2D
	call ebx
	lea eax,[esp+0xCC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block84

 Block398:
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [edi]
	add eax,esi
	mov eax,dword ptr [eax+4]
	mov eax,dword ptr [eax+0x10]
	add ecx,0x18D4
	mov ecx,dword ptr [ecx]
	mov byte ptr [esp+0x23C],0x2E
	test ecx,ecx
	je Block22

 Block399:
	lea edx,[esp+0x70]
	push edx
	lea edx,[esp+0x50]
	push edx
	lea edx,[esp+0x30]
	push edx
	lea edx,[esp+0xA8]
	push edx
	lea edx,[esp+0xDC]
	push edx
	push eax
	lea eax,[esp+0x118]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x100],8
	jne Block406

 Block400:
	mov eax,dword ptr [esp+0x108]
	xor ecx,ecx
	mov word ptr [esp+0x100],cx
	test eax,eax
	je Block402

 Block401:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block402:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block403:
	cmp word ptr [esp+0xCC],8
	mov byte ptr [esp+0x23C],0x2D
	jne Block407

 Block404:
	xor eax,eax
	mov word ptr [esp+0xCC],ax
	mov eax,dword ptr [esp+0xD4]
	test eax,eax
	je Block408

 Block405:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block408

 Block406:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x100]
	push edx
	call esi
	jmp Block403

 Block407:
	lea ecx,[esp+0xCC]
	push ecx
	call esi

 Block408:
	cmp word ptr [esp+0x9C],8
	mov byte ptr [esp+0x23C],0x2C
	jne Block411

 Block409:
	mov eax,dword ptr [esp+0xA4]
	xor edx,edx
	mov word ptr [esp+0x9C],dx
	test eax,eax
	je Block412

 Block410:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block412

 Block411:
	lea eax,[esp+0x9C]
	push eax
	call esi

 Block412:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x23C],0x2B
	jne Block415

 Block413:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block416

 Block414:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block416

 Block415:
	lea edx,[esp+0x28]
	push edx
	call esi

 Block416:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x23C],0x2A
	jne Block419

 Block417:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block420

 Block418:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block420

 Block419:
	lea ecx,[esp+0x4C]
	push ecx
	call esi

 Block420:
	cmp word ptr [esp+0x70],8
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	jne Block423

 Block421:
	mov eax,dword ptr [esp+0x78]
	xor edx,edx
	mov word ptr [esp+0x70],dx
	test eax,eax
	je Block424

 Block422:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block424

 Block423:
	lea eax,[esp+0x70]
	push eax
	call esi

 Block424:
	mov ecx,edi
	inc ebp
	call ZArray<ZRef<CActionMan::CHARACTERACTIONFRAMEENTRY>>::GetCount
	cmp ebp,eax
	jb Block367

 Block425:
	mov edx,dword ptr [esp+0x14]
	xor ecx,ecx
	mov dword ptr [edx+0x588],ecx
	mov eax,dword ptr [edi]
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [eax+0x18]
	mov ebp,dword ptr [eax+0x14]
	mov dword ptr [esp+0x114],edx
	mov edx,dword ptr [eax+0x24]
	mov eax,dword ptr [eax+0x28]
	mov dword ptr [esp+0x120],edx
	mov dword ptr [esp+0x124],eax
	mov dword ptr [esp+0x8C],ecx
	mov dword ptr [esp+0x88],ecx
	xor ebx,ebx

 Block426:
	mov ecx,dword ptr [esp+0x98]
	mov edx,dword ptr [ecx+0x14]
	cmp dword ptr [edx+0xC],ebx
	je Block432

 Block427:
	mov eax,dword ptr [esp+0x68]
	mov ecx,dword ptr [eax]
	cmp ecx,ebx
	jne Block429

 Block428:
	push 0x80004003
	call _com_issue_error

 Block429:
	lea edx,[esp+0xEC]
	push edx
	call IWzGr2DLayer::Getalpha
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0x23C],0x2F
	mov dword ptr [esp+0x80],1
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	cmp eax,ebx
	je Block431

 Block430:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block431:
	mov ebx,3
	lea edi,[esp+0x18]
	mov dword ptr [esp+0x23C],0x30
	mov dword ptr [esp+0x80],ebx
	jmp Block433

 Block432:
	mov ebx,dword ptr [esp+0x80]
	mov edi,offset _D_VTEMPTY

 Block433:
	mov ecx,dword ptr [esp+0x14]
	mov ecx,dword ptr [ecx+0x18D0]
	test ecx,ecx
	jne Block435

 Block434:
	push 0x80004003
	call _com_issue_error

 Block435:
	lea edx,[esp+0x6C]
	push edx
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x23C],0x31
	test esi,esi
	jne Block437

 Block436:
	push 0x80004003
	call _com_issue_error

 Block437:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [edi+4]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [edi+8]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [edi+0xC]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block439

 Block438:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block439:
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x23C],0x30
	test eax,eax
	je Block441

 Block440:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block441:
	mov dword ptr [esp+0x23C],0x2F
	test bl,2
	je Block446

 Block442:
	and ebx,0xFFFFFFFD
	cmp word ptr [esp+0x18],8
	mov dword ptr [esp+0x80],ebx
	jne Block445

 Block443:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block446

 Block444:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block446

 Block445:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block446:
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	test bl,1
	je Block449

 Block447:
	mov eax,dword ptr [esp+0xEC]
	test eax,eax
	je Block449

 Block448:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block449:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x4C]
	push ecx
	call esi
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block451

 Block450:
	push eax
	call _com_issue_error

 Block451:
	lea eax,[esp+0x70]
	push eax
	mov dword ptr [esp+0x240],0x32
	call esi
	lea ecx,[esp+0x70]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block453

 Block452:
	push eax
	call _com_issue_error

 Block453:
	mov edi,dword ptr [esp+0x14]
	mov ecx,dword ptr [edi+0x18D0]
	mov bl,0x33
	mov byte ptr [esp+0x23C],bl
	test ecx,ecx
	jne Block455

 Block454:
	push 0x80004003
	call _com_issue_error

 Block455:
	lea edx,[esp+0x6C]
	push edx
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x23C],0x34
	test esi,esi
	jne Block457

 Block456:
	push 0x80004003
	call _com_issue_error

 Block457:
	mov edx,dword ptr [esp+0x4C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x64]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x68]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [esp+0x80]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x94]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x98]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x9C]
	push 0
	push 0
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x90]
	push esi
	call eax
	test eax,eax
	jge Block459

 Block458:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block459:
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x23C],bl
	test eax,eax
	je Block461

 Block460:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block461:
	mov esi,8
	mov byte ptr [esp+0x23C],0x32
	cmp word ptr [esp+0x70],si
	jne Block464

 Block462:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block465

 Block463:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block465

 Block464:
	lea ecx,[esp+0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block465:
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	cmp word ptr [esp+0x4C],si
	jne Block468

 Block466:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block469

 Block467:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block469

 Block468:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block469:
	cmp dword ptr [esp+0x130],0
	jne Block505

 Block470:
	mov eax,dword ptr [esp+0x48]
	cmp eax,0x2D
	je Block505

 Block471:
	cmp eax,0x2E
	je Block505

 Block472:
	cmp eax,0x82
	je Block505

 Block473:
	cmp eax,0x81
	je Block505

 Block474:
	cmp eax,0x40
	je Block505

 Block475:
	cmp eax,0x41
	je Block505

 Block476:
	push 1
	mov ecx,edi
	call CAvatar::AvatarLayerFlip
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push ecx
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block478

 Block477:
	push eax
	call _com_issue_error

 Block478:
	lea eax,[esp+0x18]
	mov ebx,0x39
	push eax
	mov dword ptr [esp+0x240],ebx
	call esi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block480

 Block479:
	push eax
	call _com_issue_error

 Block480:
	mov ecx,dword ptr [edi+0x18B8]
	mov byte ptr [esp+0x23C],0x3A
	test ecx,ecx
	jne Block482

 Block481:
	push 0x80004003
	call _com_issue_error

 Block482:
	lea edx,[esp+0x38]
	push edx
	mov edx,dword ptr [esp+0x118]
	lea eax,[esp+0x1C]
	push eax
	push edx
	neg ebp
	push ebp
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x23C],bl
	jne Block485

 Block483:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block486

 Block484:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block486

 Block485:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block486:
	cmp word ptr [esp+0x38],8
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	jne Block489

 Block487:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block490

 Block488:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block490

 Block489:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block490:
	lea ecx,[esp+0x38]
	push ecx
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block492

 Block491:
	push eax
	call _com_issue_error

 Block492:
	lea eax,[esp+0x18]
	push eax
	mov dword ptr [esp+0x240],0x3B
	call esi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block494

 Block493:
	push eax
	call _com_issue_error

 Block494:
	mov ecx,dword ptr [edi+0x18BC]
	mov byte ptr [esp+0x23C],0x3C
	test ecx,ecx
	jne Block496

 Block495:
	push 0x80004003
	call _com_issue_error

 Block496:
	mov esi,dword ptr [esp+0x88]
	mov ebx,dword ptr [esp+0x8C]
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push ebx
	neg esi
	push esi
	call IWzVector2D::RelMove
	mov ebp,8
	mov byte ptr [esp+0x23C],0x3B
	cmp word ptr [esp+0x18],bp
	jne Block499

 Block497:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block500

 Block498:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block500

 Block499:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block500:
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	cmp word ptr [esp+0x38],bp
	jne Block503

 Block501:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block504

 Block502:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block504

 Block503:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block504:
	lea ecx,[edi+0x598]
	push esi
	call TSecType<long>::SetData
	lea ecx,[edi+0x58C]
	push ebx
	call TSecType<long>::SetData
	mov dword ptr [edi+0x1930],1
	jmp Block534

 Block505:
	push 0
	mov ecx,edi
	call CAvatar::AvatarLayerFlip
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	push edx
	call esi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block507

 Block506:
	push eax
	call _com_issue_error

 Block507:
	lea ecx,[esp+0x18]
	mov ebx,0x35
	push ecx
	mov dword ptr [esp+0x240],ebx
	call esi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block509

 Block508:
	push eax
	call _com_issue_error

 Block509:
	mov ecx,dword ptr [edi+0x18B8]
	mov byte ptr [esp+0x23C],0x36
	test ecx,ecx
	jne Block511

 Block510:
	push 0x80004003
	call _com_issue_error

 Block511:
	lea eax,[esp+0x38]
	push eax
	mov eax,dword ptr [esp+0x118]
	lea edx,[esp+0x1C]
	push edx
	push eax
	push ebp
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x23C],bl
	jne Block514

 Block512:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block515

 Block513:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block515

 Block514:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block515:
	cmp word ptr [esp+0x38],8
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	jne Block518

 Block516:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block519

 Block517:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block519

 Block518:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block519:
	lea edx,[esp+0x38]
	push edx
	call esi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block521

 Block520:
	push eax
	call _com_issue_error

 Block521:
	lea ecx,[esp+0x18]
	mov ebx,0x37
	push ecx
	mov dword ptr [esp+0x240],ebx
	call esi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block523

 Block522:
	push eax
	call _com_issue_error

 Block523:
	mov ecx,dword ptr [edi+0x18BC]
	mov byte ptr [esp+0x23C],0x38
	test ecx,ecx
	jne Block525

 Block524:
	push 0x80004003
	call _com_issue_error

 Block525:
	mov esi,dword ptr [esp+0x8C]
	mov ebp,dword ptr [esp+0x88]
	lea eax,[esp+0x38]
	push eax
	lea edx,[esp+0x1C]
	push edx
	push esi
	push ebp
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x23C],bl
	jne Block528

 Block526:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block529

 Block527:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block529

 Block528:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block529:
	cmp word ptr [esp+0x38],8
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	jne Block532

 Block530:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block533

 Block531:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block533

 Block532:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block533:
	lea ecx,[edi+0x598]
	push ebp
	call TSecType<long>::SetData
	lea ecx,[edi+0x58C]
	push esi
	call TSecType<long>::SetData
	mov dword ptr [edi+0x1930],0
	mov ebp,8

 Block534:
	mov ecx,dword ptr [edi+0x570]
	push ecx
	call is_vehicle
	add esp,4
	test eax,eax
	jne Block540

 Block535:
	cmp dword ptr [edi+0x18EC],eax
	sete al
	test al,al
	sete al
	test al,al
	je Block540

 Block536:
	mov esi,dword ptr [edi+0x18EC]
	test esi,esi
	jne Block538

 Block537:
	push 0x80004003
	call _com_issue_error

 Block538:
	mov eax,dword ptr [edi+0x1930]
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0xD8]
	push esi
	call eax
	test eax,eax
	jge Block540

 Block539:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block540:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push ecx
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block542

 Block541:
	push eax
	call _com_issue_error

 Block542:
	lea eax,[esp+0x18]
	mov ebx,0x3D
	push eax
	mov dword ptr [esp+0x240],ebx
	call esi
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block544

 Block543:
	push eax
	call _com_issue_error

 Block544:
	cmp dword ptr [edi+0x1930],0
	mov eax,dword ptr [esp+0x120]
	mov byte ptr [esp+0x23C],0x3E
	je Block546

 Block545:
	neg eax

 Block546:
	mov ecx,dword ptr [edi+0x18C0]
	test ecx,ecx
	jne Block548

 Block547:
	push 0x80004003
	call _com_issue_error

 Block548:
	lea edx,[esp+0x38]
	push edx
	lea edx,[esp+0x1C]
	push edx
	mov edx,dword ptr [esp+0x12C]
	push edx
	push eax
	call IWzVector2D::RelMove
	mov byte ptr [esp+0x23C],bl
	cmp word ptr [esp+0x18],bp
	jne Block551

 Block549:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block552

 Block550:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block552

 Block551:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block552:
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	cmp word ptr [esp+0x38],bp
	jne Block555

 Block553:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block556

 Block554:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block556

 Block555:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block556:
	mov ecx,dword ptr [edi+0x570]
	push ecx
	call is_vehicle
	add esp,4
	test eax,eax
	je Block607

 Block557:
	mov edx,dword ptr [esp+0x64]
	mov eax,dword ptr [edx]
	test eax,eax
	je Block607

 Block558:
	cmp dword ptr [eax-4],0
	je Block607

 Block559:
	mov ecx,dword ptr [esp+0x5C]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [eax+edx*8+4]
	mov esi,dword ptr [eax+0x28]
	mov edi,dword ptr [eax+0x2C]
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push eax
	call ebp
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block561

 Block560:
	push eax
	call _com_issue_error

 Block561:
	lea edx,[esp+0x18]
	mov ebx,0x3F
	push edx
	mov dword ptr [esp+0x240],ebx
	call ebp
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block563

 Block562:
	push eax
	call _com_issue_error

 Block563:
	mov eax,dword ptr [esp+0x14]
	cmp dword ptr [eax+0x1930],0
	mov byte ptr [esp+0x23C],0x40
	je Block565

 Block564:
	neg esi

 Block565:
	mov ecx,dword ptr [eax+0x18C4]
	test ecx,ecx
	jne Block567

 Block566:
	push 0x80004003
	call _com_issue_error

 Block567:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push edi
	push esi
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x23C],bl
	jne Block570

 Block568:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block571

 Block569:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block571

 Block570:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block571:
	cmp word ptr [esp+0x38],8
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	jne Block574

 Block572:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block575

 Block573:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block575

 Block574:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block575:
	mov edx,dword ptr [esp+0x5C]
	mov eax,dword ptr [edx]
	mov ebx,dword ptr [esp+0x64]
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+eax*8+4]
	mov esi,dword ptr [eax+0x30]
	mov edi,dword ptr [eax+0x34]
	lea edx,[esp+0x38]
	push edx
	call ebp
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block577

 Block576:
	push eax
	call _com_issue_error

 Block577:
	lea ecx,[esp+0x18]
	push ecx
	mov dword ptr [esp+0x240],0x41
	call ebp
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block579

 Block578:
	push eax
	call _com_issue_error

 Block579:
	mov eax,dword ptr [esp+0x14]
	cmp dword ptr [eax+0x1930],0
	mov byte ptr [esp+0x23C],0x42
	je Block581

 Block580:
	neg esi

 Block581:
	mov ecx,dword ptr [eax+0x18C8]
	test ecx,ecx
	jne Block583

 Block582:
	push 0x80004003
	call _com_issue_error

 Block583:
	lea eax,[esp+0x38]
	push eax
	lea edx,[esp+0x1C]
	push edx
	push edi
	push esi
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x23C],0x41
	jne Block586

 Block584:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block587

 Block585:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block587

 Block586:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block587:
	cmp word ptr [esp+0x38],8
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	jne Block590

 Block588:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block591

 Block589:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block591

 Block590:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block591:
	mov ecx,dword ptr [esp+0x5C]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [ebx]
	mov eax,dword ptr [eax+edx*8+4]
	mov esi,dword ptr [eax+0x38]
	mov edi,dword ptr [eax+0x3C]
	lea ecx,[esp+0x38]
	push ecx
	call ebp
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block593

 Block592:
	push eax
	call _com_issue_error

 Block593:
	lea eax,[esp+0x18]
	mov ebx,0x43
	push eax
	mov dword ptr [esp+0x240],ebx
	call ebp
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block595

 Block594:
	push eax
	call _com_issue_error

 Block595:
	mov eax,dword ptr [esp+0x14]
	cmp dword ptr [eax+0x1930],0
	mov byte ptr [esp+0x23C],0x44
	je Block597

 Block596:
	neg esi

 Block597:
	mov ecx,dword ptr [eax+0x18CC]
	test ecx,ecx
	jne Block599

 Block598:
	push 0x80004003
	call _com_issue_error

 Block599:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push edi
	push esi
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x23C],bl
	cmp word ptr [esp+0x18],si
	jne Block602

 Block600:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block603

 Block601:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block603

 Block602:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block603:
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	cmp word ptr [esp+0x38],si
	jne Block606

 Block604:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block607

 Block605:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block607

 Block606:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block607:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x134]
	push edx
	call esi
	lea eax,[esp+0x134]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block609

 Block608:
	push eax
	call _com_issue_error

 Block609:
	lea ecx,[esp+0x88]
	mov ebx,0x45
	push ecx
	mov dword ptr [esp+0x240],ebx
	call esi
	lea edx,[esp+0x88]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block611

 Block610:
	push eax
	call _com_issue_error

 Block611:
	mov edi,dword ptr [esp+0x14]
	mov ecx,dword ptr [edi+0x18B4]
	mov byte ptr [esp+0x23C],0x46
	test ecx,ecx
	jne Block613

 Block612:
	push 0x80004003
	call _com_issue_error

 Block613:
	lea eax,[esp+0x134]
	push eax
	lea edx,[esp+0x8C]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x23C],bl
	cmp word ptr [esp+0x88],si
	jne Block616

 Block614:
	xor eax,eax
	mov word ptr [esp+0x88],ax
	mov eax,dword ptr [esp+0x90]
	test eax,eax
	je Block617

 Block615:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block617

 Block616:
	lea ecx,[esp+0x88]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block617:
	mov dword ptr [esp+0x23C],0xFFFFFFFF
	cmp word ptr [esp+0x134],si
	jne Block620

 Block618:
	mov eax,dword ptr [esp+0x13C]
	xor edx,edx
	mov word ptr [esp+0x134],dx
	test eax,eax
	je Block621

 Block619:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block621

 Block620:
	lea eax,[esp+0x134]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block621:
	mov esi,dword ptr [edi+0x18B4]

 Block622:
	test esi,esi
	jne Block624

 Block623:
	push 0x80004003
	call _com_issue_error

 Block624:
	fldz
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x80]
	sub esp,8
	fstp qword ptr [esp]
	push esi
	call edx
	test eax,eax
	jge Block626

 Block625:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block626:
	mov ecx,dword ptr [esp+0x234]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x22C
	ret 0xC
}
}
// CAvatar::ActionProcess
// 466768
static uint8_t _SUB_666C0_LOOKUP_TABLE_0[55] = {
0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 
3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 1, 3, 1, 
3, 3, 3, 3, 2, 3, 2, 
};
__SUB_CLASS_THIS(000666C0, __thiscall, 19982,  CAvatar, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	add eax,0xFFFFFF34
	push esi
	mov esi,ecx
	cmp eax,0x36
	ja Block6

 Block1:
	movzx eax,byte ptr [eax+_SUB_666C0_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block4
cmp EAX, 2
je Block3
cmp EAX, 3
je Block6


 Block2:
	mov dword ptr [esi+0x5BC],0xCD
	jmp Block6

 Block3:
	or eax,0xFFFFFFFF
	push 1
	mov dword ptr [esi+0x570],0
	mov dword ptr [esi+0x5BC],eax
	mov dword ptr [esi+0x5A8],eax
	call CAvatar::ClearActionLayer
	jmp Block5

 Block4:
	or eax,0xFFFFFFFF
	push 1
	mov dword ptr [esi+0x5BC],eax
	mov dword ptr [esi+0x5A8],eax
	call CAvatar::ClearActionLayer
	mov dword ptr [esi+0x5BC],0xF9

 Block5:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x14]
	push 0
	push 0x64
	push 6
	mov ecx,esi
	call eax

 Block6:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	cmp eax,0xCD
	jne Block8

 Block7:
	mov ecx,esi
	call CAvatar::LoadCyclone

 Block8:
	pop esi
	ret 4
}
}
// CAvatar::ClearCharacterActionLayer
__SUB_CLASS_THIS(00064DF0, __thiscall, 19982,  CAvatar, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	imul eax,0x974
	push esi
	lea eax,[eax+ecx+0x5C0]
	push edi
	lea esi,[eax+0x24]
	mov edi,0x111
	jmp Block2

 Block2:
	lea ecx,[esp+0xC]
	push ecx
	push 1
	push 0
	mov ecx,esi
	call ZArray<ZRef<CActionMan::CHARACTERACTIONFRAMEENTRY>>::_Realloc
	add esi,4
	sub edi,1
	jne Block2

 Block3:
	pop edi
	pop esi
	ret 4
}
}
// CAvatar::AvatarLayerFlip
__SUB_CLASS_THIS(0005FF20, __thiscall, 19982,  CAvatar, void, long) {
__asm {

 Block0:
	push ebx
	mov ebx,ecx
	push esi
	mov esi,dword ptr [ebx+0x18D8]
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xD8]
	push edi
	mov edi,dword ptr [esp+0x10]
	push edi
	push esi
	call ecx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov esi,dword ptr [ebx+0x18D4]
	test esi,esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xD8]
	push edi
	push esi
	call eax
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov esi,dword ptr [ebx+0x18D0]
	test esi,esi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xD8]
	push edi
	push esi
	call edx
	test eax,eax
	jge Block12

 Block11:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block12:
	mov esi,dword ptr [ebx+0x18E4]
	test esi,esi
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xD8]
	push edi
	push esi
	call ecx
	test eax,eax
	jge Block16

 Block15:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block16:
	mov esi,dword ptr [ebx+0x18E0]
	test esi,esi
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xD8]
	push edi
	push esi
	call eax
	test eax,eax
	jge Block20

 Block19:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CAvatar::CharacterFrameUpdate
_SUB_EXCEPTION_HANDLER(6ABE0)
__SUB_CLASS_THIS0(0006ABE0, __thiscall, 19972,  CAvatar, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_6ABE0
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
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x14],0
	mov eax,dword ptr [esi+0x5B8]
	push ecx
	push eax
	mov ecx,esi
	call CAvatar::MoveAction2RawAction
	mov ecx,esi
	mov ebx,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block2

 Block1:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	jmp Block3

 Block2:
	mov eax,ebx

 Block3:
	push eax
	mov ecx,esi
	call CAvatar::ConvertCharacterAction
	mov ebp,eax
	mov eax,dword ptr [esi+0x5A8]
	cmp eax,0xFFFFFFFF
	mov dword ptr [esp+0x20],ebp
	mov edi,eax
	jg Block5

 Block4:
	mov edi,dword ptr [esi+0x5AC]

 Block5:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	xor edx,edx
	cmp eax,0xFFFFFFFF
	setg dl
	imul edx,0x974
	add dword ptr [edx+esi+0x5C4],0xFFFFFFE2
	lea eax,[edx+esi+0x5C4]
	mov eax,dword ptr [eax]
	test eax,eax
	jg Block52

 Block6:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	xor ecx,ecx
	cmp eax,0xFFFFFFFF
	setg cl
	imul ecx,0x974
	cmp dword ptr [ecx+esi+0x5D0],0
	lea eax,[ecx+esi+0x5C0]
	jne Block52

 Block7:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	xor edx,edx
	cmp eax,0xFFFFFFFF
	mov eax,dword ptr [esi+0x5A8]
	setg dl
	xor ecx,ecx
	imul edx,0x974
	cmp eax,0xFFFFFFFF
	setg cl
	lea ebx,[edx+esi+0x5C0]
	imul ecx,0x974
	lea eax,[ecx+esi+0x5C0]
	lea edi,[eax+edi*4+0x468]
	mov dword ptr [esp+0x24],eax
	mov dword ptr [esp+0x1C],edi
	cmp ebp,0x2D
	je Block11

 Block8:
	cmp ebp,0x2E
	je Block11

 Block9:
	cmp ebp,0x82
	je Block11

 Block10:
	cmp ebp,0x81
	jne Block12

 Block11:
	mov dword ptr [ebx+4],0
	jmp Block52

 Block12:
	mov eax,dword ptr [ebx+ebp*4+0x24]
	test eax,eax
	je Block14

 Block13:
	mov eax,dword ptr [eax-4]

 Block14:
	inc dword ptr [ebx]
	cmp dword ptr [ebx],eax
	jl Block21

 Block15:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block20

 Block16:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	mov ecx,esi
	mov ebx,eax
	call CAvatar::ResetCharacterOneTimeAction
	push ebx
	mov ecx,esi
	call CAvatar::ActionProcess
	cmp ebx,0x100
	je Block19

 Block17:
	cmp ebx,0xF9
	je Block19

 Block18:
	push 0
	push 0x64
	push 6
	mov ecx,esi
	call CAvatar::PrepareCharacterActionLayer
	mov ecx,esi
	call CAvatar::FixCharacterPosition
	jmp Block52

 Block19:
	xor eax,eax
	mov ecx,dword ptr [esp+0x7C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x74
	ret

 Block20:
	mov dword ptr [ebx],0

 Block21:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [ebx+0xC]
	mov ecx,dword ptr [eax+edx*4]
	add dword ptr [ebx+4],ecx
	lea edx,[ebp+ebp*2]
	lea eax,[edx*8+ActionData::m_saCharacterActions]
	mov dword ptr [esp+0x18],eax
	mov eax,dword ptr [ebx+ebp*4+0x24]
	test eax,eax
	je Block52

 Block22:
	cmp dword ptr [eax-4],0
	je Block52

 Block23:
	mov ecx,edi
	call ZArray<ZRef<CActionMan::TAMINGMOBACTIONFRAMEENTRY>>::IsEmpty
	test eax,eax
	jne Block52

 Block24:
	mov ecx,3
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],1
	lea edx,[esp+0x2C]
	lea edi,[esi+0x18D8]
	push edx
	mov ecx,edi
	mov dword ptr [esp+0x88],eax
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::ShiftCanvas
	lea ecx,[esp+0x2C]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,3
	mov word ptr [esp+0x2C],ax
	mov eax,1
	mov dword ptr [esp+0x34],eax
	lea edx,[esp+0x2C]
	lea ecx,[esi+0x18D4]
	push edx
	mov dword ptr [esp+0x88],eax
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::ShiftCanvas
	lea ecx,[esp+0x2C]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,3
	mov word ptr [esp+0x2C],ax
	mov dword ptr [esp+0x34],1
	lea ecx,[esp+0x2C]
	push ecx
	lea ecx,[esi+0x18DC]
	mov dword ptr [esp+0x88],2
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::ShiftCanvas
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x30]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x88],3
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x40]
	push eax
	push 0
	lea ecx,[esi+0x18BC]
	push 0
	mov byte ptr [esp+0x94],4
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	lea ecx,[esp+0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [ecx+0x14]
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax]
	mov eax,dword ptr [ecx+edx*8+4]
	mov ecx,dword ptr [ebx+ebp*4+0x24]
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [ecx+edx*8+4]
	mov edx,dword ptr [eax+0x28]
	sub edx,dword ptr [ecx+0x1C]
	mov ebp,dword ptr [eax+0x2C]
	sub ebp,dword ptr [ecx+0x20]
	mov dword ptr [esp+0x2C],edx
	lea ecx,[esi+0x18E4]
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getflip
	test eax,eax
	mov eax,dword ptr [esp+0x2C]
	je Block26

 Block25:
	neg eax

 Block26:
	lea ecx,[esi+0x598]
	push eax
	call TSecType<long>::op_assign
	lea ecx,[esi+0x58C]
	push ebp
	call TSecType<long>::op_assign
	push offset _D_VTMISSING
	lea ecx,[esp+0x30]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x88],5
	call Ztl_variant_t::_ctor_1
	lea ecx,[esi+0x58C]
	mov byte ptr [esp+0x84],6
	call TSecType<long>::GetData
	lea ecx,[esi+0x598]
	mov ebp,eax
	call TSecType<long>::GetData
	lea edx,[esp+0x2C]
	push edx
	lea ecx,[esp+0x40]
	push ecx
	push ebp
	push eax
	lea ecx,[esi+0x18BC]
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	lea ecx,[esp+0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	mov edx,dword ptr [esi+0x1930]
	mov ebp,dword ptr [ebx]
	push edx
	mov ecx,edi
	mov dword ptr [esp+0x28],ebp
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putflip
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,dword ptr [esp+0x18]
	mov edx,dword ptr [ecx+0x14]
	shl ebp,5
	add edx,ebp
	mov ecx,eax
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x1C],edx
	call IWzGr2DLayer::Getflip
	mov edx,dword ptr [esp+0x1C]
	xor eax,dword ptr [edx+0x10]
	mov ecx,dword ptr [esp+0x28]
	push eax
	call IWzGr2DLayer::Putflip
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getflip
	push eax
	lea ecx,[esi+0x18D4]
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putflip
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getflip
	push eax
	lea ecx,[esi+0x18D0]
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putflip
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [ebx+eax*4+0x24]
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [ecx+edx*8+4]
	mov ecx,dword ptr [eax+0x14]
	mov edx,dword ptr [eax+0x18]
	mov dword ptr [esp+0x2C],ecx
	push offset _D_VTMISSING
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x34],edx
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x88],7
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0x14]
	cmp dword ptr [ecx+ebp+0x14],0
	mov byte ptr [esp+0x84],8
	jne Block29

 Block27:
	lea ecx,[esi+0x18D0]
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getflip
	test eax,eax
	je Block29

 Block28:
	mov eax,dword ptr [esp+0x2C]
	neg eax
	jmp Block30

 Block29:
	mov eax,dword ptr [esp+0x2C]

 Block30:
	lea edx,[esp+0x4C]
	push edx
	mov edx,dword ptr [esp+0x34]
	lea ecx,[esp+0x40]
	push ecx
	push edx
	push eax
	lea ecx,[esi+0x18B8]
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	lea ecx,[esp+0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0x14]
	cmp dword ptr [ecx+ebp+0xC],0
	je Block34

 Block31:
	lea edx,[esp+0x2C]
	push edx
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getalpha
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0x84],9
	mov dword ptr [esp+0x14],1
	mov word ptr [esp+0x3C],cx
	mov dword ptr [esp+0x44],eax
	test eax,eax
	je Block33

 Block32:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block33:
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x1C],ecx
	mov dword ptr [esp+0x84],0xA
	mov dword ptr [esp+0x14],3
	jmp Block35

 Block34:
	mov dword ptr [esp+0x1C],offset _D_VTEMPTY

 Block35:
	lea edx,[esp+0x28]
	lea edi,[esi+0x18D0]
	push edx
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [esp+0x1C]
	push ecx
	mov ecx,eax
	mov dword ptr [esp+0x88],0xB
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Putorigin
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x84],0xA
	test eax,eax
	je Block37

 Block36:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block37:
	test byte ptr [esp+0x14],2
	je Block39

 Block38:
	and dword ptr [esp+0x14],0xFFFFFFFD
	lea ecx,[esp+0x3C]
	call Ztl_variant_t::~Ztl_variant_t

 Block39:
	test byte ptr [esp+0x14],1
	mov dword ptr [esp+0x84],0xFFFFFFFF
	je Block42

 Block40:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block42:
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getflip
	test eax,eax
	je Block45

 Block43:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax+0x14]
	cmp dword ptr [ecx+ebp+0x14],0
	je Block45

 Block44:
	push offset _D_VTMISSING
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x20],0
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x4C]
	push edx
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esi+0x18B0]
	mov dword ptr [esp+0xA8],0xC
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::_GetSnapshot
	lea ecx,[esp+0x4C]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [esp+0x1C]
	push ecx
	lea ecx,[esi+0x18B4]
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::PutflipX

 Block45:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [edx+0x14]
	fild dword ptr [eax+ebp+0x14]
	add eax,ebp
	sub esp,8
	lea ecx,[esi+0x18B4]
	fstp qword ptr [esp]
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::Putra
	push offset _D_VTMISSING
	lea ecx,[esp+0x40]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x88],0xD
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x2C]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x88],0xE
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getalpha
	lea ecx,[esp+0x3C]
	push ecx
	lea edx,[esp+0x50]
	push edx
	push 0
	push 0
	mov ecx,eax
	mov byte ptr [esp+0x94],0xF
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x84],0xE
	test eax,eax
	je Block47

 Block46:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block47:
	lea ecx,[esp+0x4C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x3C]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	cmp dword ptr [esi+0x18EC],0
	lea ecx,[esi+0x18EC]
	je Block49

 Block48:
	mov eax,dword ptr [esi+0x1930]
	push eax
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putflip

 Block49:
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [ebx+ecx*4+0x24]
	mov eax,dword ptr [esp+0x24]
	mov eax,dword ptr [edx+eax*8+4]
	mov edi,dword ptr [eax+0x24]
	mov ebx,dword ptr [eax+0x28]
	push offset _D_VTMISSING
	lea ecx,[esp+0x70]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x60]
	mov dword ptr [esp+0x88],0x10
	call Ztl_variant_t::_ctor_1
	cmp dword ptr [esi+0x1930],0
	mov byte ptr [esp+0x84],0x11
	je Block51

 Block50:
	neg edi

 Block51:
	lea ecx,[esp+0x6C]
	push ecx
	lea edx,[esp+0x60]
	push edx
	push ebx
	push edi
	lea ecx,[esi+0x18C0]
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	lea ecx,[esp+0x5C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x6C]
	call Ztl_variant_t::~Ztl_variant_t

 Block52:
	mov eax,1
	mov ecx,dword ptr [esp+0x7C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x74
	ret
}
}
// CAvatar::SetMoveAction
__SUB_CLASS_THIS(0006BF40, __thiscall, 19981,  CAvatar, void, long, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x570]
	mov eax,offset _D_RIDING_WILDHUNTE__219+4
	mov edi,edi

 Block1:
	cmp dword ptr [eax],ecx
	je Block11

 Block2:
	add eax,4
	cmp eax,offset _D_DB_DATE_19000101__227
	jl Block1

 Block3:
	cmp dword ptr [esp+0xC],0
	mov eax,dword ptr [esp+8]
	jne Block5

 Block4:
	cmp eax,dword ptr [esi+0x5B8]
	je Block22

 Block5:
	mov dword ptr [esi+0x5B8],eax
	and eax,0xFFFFFFFE
	cmp eax,0x12
	jne Block7

 Block6:
	push 1
	mov ecx,esi
	mov dword ptr [esi+0x5BC],0xFFFFFFFF
	mov dword ptr [esi+0x5A8],0xFFFFFFFF
	call CAvatar::ClearActionLayer

 Block7:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jg Block9

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x14]
	push 0
	push 0x64
	push 6
	mov ecx,esi
	call eax

 Block9:
	mov eax,dword ptr [esi+0x5B8]
	push edi
	push 0
	push eax
	mov ecx,esi
	call CAvatar::MoveAction2RawAction
	mov ecx,esi
	mov edi,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block12

 Block10:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	jmp Block13

 Block11:
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [esp+8]
	push eax
	push ecx
	mov ecx,esi
	call CAvatar::SetResistanceRidingMoveAction
	jmp Block9

 Block12:
	mov eax,edi

 Block13:
	mov ecx,dword ptr [esi+0x548]
	pop edi
	test ecx,ecx
	je Block17

 Block14:
	cmp eax,8
	je Block20

 Block15:
	cmp eax,0x14
	je Block20

 Block16:
	test ecx,ecx
	jne Block22

 Block17:
	cmp eax,0x2A
	je Block20

 Block18:
	cmp eax,0x29
	je Block20

 Block19:
	cmp eax,0x39
	jne Block22

 Block20:
	mov ecx,dword ptr [esi+0x540]
	push ecx
	lea edx,[esi+0x538]
	push edx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	cmp eax,8
	jne Block22

 Block21:
	push 0xFFFFFFFF
	push 0
	mov ecx,esi
	call CAvatar::SetEmotion

 Block22:
	pop esi
	ret 8
}
}
// CAvatar::SetVisibleMan
__SUB_CLASS_THIS(00060270, __thiscall, 19974,  CAvatar, void, int32_t) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,dword ptr [esp+0xC]
	neg esi
	sbb esi,esi
	mov ebx,ecx
	and esi,0xFF000000
	push edi
	mov edi,dword ptr [ebx+0x18D8]
	add esi,0xFFFFFF
	test edi,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push esi
	push edi
	call ecx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block4:
	mov edi,dword ptr [ebx+0x18D4]
	test edi,edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xE0]
	push esi
	push edi
	call eax
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block8:
	mov edi,dword ptr [ebx+0x18D0]
	test edi,edi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push esi
	push edi
	call edx
	test eax,eax
	jge Block12

 Block11:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block12:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CAvatar::ACTIONINFO::~ACTIONINFO
_SUB_EXCEPTION_HANDLER(64400)
__SUB_CLASS_THIS0(00064400, __thiscall, 22844,  CAvatar::ACTIONINFO, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_64400
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
	lea ecx,[esi+0x970]
	mov dword ptr [esp+0x14],4
	call ZArray<ZList<ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY>>>::RemoveAll
	push offset ZArray<ZRef<CActionMan::MORPHACTIONFRAMEENTRY>>::~ZArray<ZRef<CActionMan::MORPHACTIONFRAMEENTRY>>
	push 0x31
	push 4
	lea eax,[esi+0x8AC]
	push eax
	mov byte ptr [esp+0x24],3
	call __eh_vector_dtor_iterator
	push offset ZArray<ZRef<CActionMan::TAMINGMOBACTIONFRAMEENTRY>>::~ZArray<ZRef<CActionMan::TAMINGMOBACTIONFRAMEENTRY>>
	push 0x111
	push 4
	lea ecx,[esi+0x468]
	push ecx
	mov byte ptr [esp+0x24],2
	call __eh_vector_dtor_iterator
	push offset ZArray<ZRef<CActionMan::CHARACTERACTIONFRAMEENTRY>>::~ZArray<ZRef<CActionMan::CHARACTERACTIONFRAMEENTRY>>
	push 0x111
	push 4
	lea edx,[esi+0x24]
	push edx
	mov byte ptr [esp+0x24],1
	call __eh_vector_dtor_iterator
	lea ecx,[esi+0x20]
	mov byte ptr [esp+0x14],0
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0xC]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call ZArray<long>::RemoveAll
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CAvatar::PrepareTamingMobActionLayer
_SUB_EXCEPTION_HANDLER(65CE0)
__SUB_CLASS_THIS(00065CE0, __thiscall, 19997,  CAvatar, void, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_65CE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1C8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1DC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x20],esi
	cmp dword ptr [esi+0x5B0],0
	je Block2

 Block1:
	push 0
	call CAvatar::ClearActionLayer
	jmp Block137

 Block2:
	mov eax,dword ptr [esi+0x5A8]
	cmp eax,0xFFFFFFFF
	jle Block4

 Block3:
	mov ebp,eax
	mov dword ptr [esp+0x18],ebp
	jmp Block5

 Block4:
	mov ecx,dword ptr [esi+0x5AC]
	mov dword ptr [esp+0x18],ecx
	mov ebp,ecx

 Block5:
	cmp ebp,0x111
	jge Block137

 Block6:
	xor edx,edx
	cmp eax,0xFFFFFFFF
	setg dl
	imul edx,0x974
	lea ebx,[edx+esi+0x5C0]
	mov eax,dword ptr [ebx+ebp*4+0x468]
	lea edi,[ebx+ebp*4+0x468]
	mov dword ptr [esp+0x14],edi
	test eax,eax
	je Block8

 Block7:
	cmp dword ptr [eax-4],0
	jne Block16

 Block8:
	cmp dword ptr [esi+0x500],0
	jne Block10

 Block9:
	lea ecx,[esi+0x1D]
	jmp Block15

 Block10:
	xor eax,eax
	lea ecx,[esi+0x410]
	lea ebx,[ebx]

 Block11:
	mov edx,dword ptr [ecx]
	cmp edx,0xFFFFFFFF
	jne Block13

 Block12:
	mov edx,dword ptr [ecx-0x3F3]

 Block13:
	mov dword ptr [esp+eax*4+0xEC],edx
	inc eax
	add ecx,4
	cmp eax,0x3C
	jl Block11

 Block14:
	lea ecx,[esp+0xEC]

 Block15:
	mov eax,dword ptr [esi+0x5A4]
	mov edx,dword ptr [esi+0x570]
	push edi
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push ebp
	push edx
	call CActionMan::LoadTamingMobAction

 Block16:
	mov edi,dword ptr [edi]
	test edi,edi
	jne Block18

 Block17:
	xor esi,esi
	jmp Block19

 Block18:
	mov esi,dword ptr [edi-4]

 Block19:
	lea eax,[esp+0x3B]
	push eax
	push 1
	lea edi,[ebx+0x20]
	push esi
	mov ecx,edi
	mov dword ptr [esp+0x28],esi
	call ZArray<long>::_Realloc
	mov edx,dword ptr [edi]
	lea ecx,[esi*4]
	push ecx
	push 0
	push edx
	call _memset
	add esp,0xC
	mov dword ptr [ebx+0x1C],0
	test ebp,ebp
	jl Block21

 Block20:
	cmp ebp,1
	jle Block22

 Block21:
	cmp ebp,0x7C
	jne Block30

 Block22:
	mov eax,dword ptr [esp+0x1F0]
	cmp eax,0x46
	jle Block29

 Block23:
	cmp eax,0x8C
	mov ebp,eax
	jl Block25

 Block24:
	mov ebp,0x8C

 Block25:
	xor ecx,ecx
	test esi,esi
	jle Block46

 Block26:
	mov esi,dword ptr [edi]

 Block27:
	mov eax,dword ptr [esp+0x14]
	mov edx,dword ptr [eax]
	mov eax,dword ptr [edx+ecx*8+4]
	mov eax,dword ptr [eax+0x24]
	imul eax,0x64
	cdq
	idiv ebp
	inc ecx
	mov dword ptr [esi+ecx*4-4],eax
	mov esi,dword ptr [edi]
	mov eax,dword ptr [esi+ecx*4-4]
	add dword ptr [ebx+0x1C],eax
	cmp ecx,dword ptr [esp+0x1C]
	jl Block27

 Block28:
	jmp Block46

 Block29:
	mov ebp,0x46
	jmp Block25

 Block30:
	mov eax,dword ptr [esp+0x1EC]
	cmp eax,2
	jg Block32

 Block31:
	mov eax,2
	jmp Block34

 Block32:
	cmp eax,0xA
	jl Block34

 Block33:
	mov eax,0xA

 Block34:
	xor esi,esi
	cmp dword ptr [esp+0x1C],esi
	jle Block46

 Block35:
	mov ebp,dword ptr [esp+0x1F4]
	add eax,0xA
	mov dword ptr [esp+0x24],eax
	lea ecx,[ecx]

 Block36:
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+esi*8+4]
	mov ecx,dword ptr [eax+0x24]
	mov eax,dword ptr [esp+0x24]
	imul eax,ecx
	mov ecx,dword ptr [edi]
	cdq
	and edx,0xF
	add eax,edx
	sar eax,4
	mov dword ptr [ecx+esi*4],eax
	test ebp,ebp
	je Block45

 Block37:
	mov edx,dword ptr [esp+0x18]
	push edx
	call is_shoot_action
	add esp,4
	test eax,eax
	je Block45

 Block38:
	mov eax,dword ptr [esp+0x18]
	cmp eax,0x7A
	jne Block40

 Block39:
	test esi,esi
	jmp Block42

 Block40:
	cmp eax,0x1F
	jne Block43

 Block41:
	cmp esi,2

 Block42:
	je Block44

 Block43:
	cmp esi,4
	jne Block45

 Block44:
	mov eax,dword ptr [edi]
	mov dword ptr [eax+esi*4],0x7FFFFFFF

 Block45:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+esi*4]
	add dword ptr [ebx+0x1C],edx
	inc esi
	cmp esi,dword ptr [esp+0x1C]
	jl Block36

 Block46:
	mov ebp,dword ptr [esp+0x14]
	mov eax,3
	mov esi,0xFFFFFFFE
	mov word ptr [esp+0x28],ax
	mov dword ptr [esp+0x30],esi
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax+0x18E4]
	add eax,0x18E4
	mov dword ptr [esp+0x1E4],0
	mov dword ptr [esp+0x18],eax
	test ecx,ecx
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x28]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block50

 Block49:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block50:
	cmp word ptr [esp+0x28],8
	mov dword ptr [esp+0x1E4],0xFFFFFFFF
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],esi
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax+0x18E0]
	add eax,0x18E0
	mov dword ptr [esp+0x1E4],1
	mov dword ptr [esp+0x14],eax
	test ecx,ecx
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x28]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x24]
	xor esi,esi
	cmp eax,esi
	je Block58

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block58:
	cmp word ptr [esp+0x28],8
	mov dword ptr [esp+0x1E4],0xFFFFFFFF
	jne Block61

 Block59:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,esi
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,esi
	mov dword ptr [ebx+0x14],esi
	mov dword ptr [ebx+0x18],esi
	jle Block64

 Block63:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx]
	mov dword ptr [ebx+0x18],ecx

 Block64:
	xor ebx,ebx
	cmp eax,esi
	jle Block128

 Block65:
	mov edi,dword ptr [ZImports::_VariantInit]
	nop

 Block66:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+ebx*8+4]
	mov ecx,dword ptr [esp+0x20]
	lea esi,[ebx*8]
	push ebx
	add eax,0xC
	push eax
	mov eax,dword ptr [esp+0x20]
	push eax
	call CAvatar::ApplyScaleAndOffset
	mov ecx,dword ptr [ebp]
	mov eax,dword ptr [ecx+esi+4]
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x20]
	push ebx
	add eax,0x10
	push eax
	push edx
	call CAvatar::ApplyScaleAndOffset
	lea eax,[esp+0x7C]
	push eax
	call edi
	lea ecx,[esp+0x7C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block130

 Block67:
	lea edx,[esp+0x3C]
	push edx
	mov dword ptr [esp+0x1E8],2
	call edi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block130

 Block68:
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0x1E8],3
	call edi
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block130

 Block69:
	lea eax,[esp+0xBC]
	push eax
	mov byte ptr [esp+0x1E8],4
	call edi
	lea ecx,[esp+0xBC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block130

 Block70:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x1E8],5
	call edi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block130

 Block71:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [esp+0x18]
	mov ecx,dword ptr [ecx]
	add eax,esi
	mov eax,dword ptr [eax+4]
	mov eax,dword ptr [eax+0xC]
	mov byte ptr [esp+0x1E4],6
	test ecx,ecx
	je Block47

 Block72:
	lea edx,[esp+0x7C]
	push edx
	lea edx,[esp+0x40]
	push edx
	lea edx,[esp+0x64]
	push edx
	lea edx,[esp+0xC8]
	push edx
	lea edx,[esp+0x38]
	push edx
	push eax
	lea eax,[esp+0xE4]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0xCC],8
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0xD4]
	xor ecx,ecx
	mov word ptr [esp+0xCC],cx
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea edx,[esp+0xCC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x1E4],5
	jne Block79

 Block77:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	cmp word ptr [esp+0xBC],8
	mov byte ptr [esp+0x1E4],4
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0xC4]
	xor edx,edx
	mov word ptr [esp+0xBC],dx
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea eax,[esp+0xBC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block84:
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0x1E4],3
	jne Block87

 Block85:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea edx,[esp+0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block88:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x1E4],2
	jne Block91

 Block89:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block92:
	cmp word ptr [esp+0x7C],8
	mov dword ptr [esp+0x1E4],0xFFFFFFFF
	jne Block95

 Block93:
	mov eax,dword ptr [esp+0x84]
	xor edx,edx
	mov word ptr [esp+0x7C],dx
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea eax,[esp+0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block96:
	lea ecx,[esp+0x8C]
	push ecx
	call edi
	lea edx,[esp+0x8C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block130

 Block97:
	lea eax,[esp+0x6C]
	push eax
	mov dword ptr [esp+0x1E8],7
	call edi
	lea ecx,[esp+0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block130

 Block98:
	lea edx,[esp+0x4C]
	push edx
	mov byte ptr [esp+0x1E8],8
	call edi
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block130

 Block99:
	lea ecx,[esp+0x9C]
	push ecx
	mov byte ptr [esp+0x1E8],9
	call edi
	lea edx,[esp+0x9C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block130

 Block100:
	lea eax,[esp+0xAC]
	push eax
	mov byte ptr [esp+0x1E8],0xA
	call edi
	lea ecx,[esp+0xAC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block130

 Block101:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edx]
	add eax,esi
	mov eax,dword ptr [eax+4]
	mov eax,dword ptr [eax+0x10]
	mov byte ptr [esp+0x1E4],0xB
	test ecx,ecx
	je Block47

 Block102:
	lea edx,[esp+0x8C]
	push edx
	lea edx,[esp+0x70]
	push edx
	lea edx,[esp+0x54]
	push edx
	lea edx,[esp+0xA8]
	push edx
	lea edx,[esp+0xBC]
	push edx
	push eax
	lea eax,[esp+0xF4]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0xDC],8
	jne Block109

 Block103:
	mov eax,dword ptr [esp+0xE4]
	xor ecx,ecx
	mov word ptr [esp+0xDC],cx
	test eax,eax
	je Block105

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block105:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block106:
	cmp word ptr [esp+0xAC],8
	mov byte ptr [esp+0x1E4],0xA
	jne Block110

 Block107:
	xor eax,eax
	mov word ptr [esp+0xAC],ax
	mov eax,dword ptr [esp+0xB4]
	test eax,eax
	je Block111

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block111

 Block109:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0xDC]
	push edx
	call esi
	jmp Block106

 Block110:
	lea ecx,[esp+0xAC]
	push ecx
	call esi

 Block111:
	cmp word ptr [esp+0x9C],8
	mov byte ptr [esp+0x1E4],9
	jne Block114

 Block112:
	mov eax,dword ptr [esp+0xA4]
	xor edx,edx
	mov word ptr [esp+0x9C],dx
	test eax,eax
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea eax,[esp+0x9C]
	push eax
	call esi

 Block115:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0x1E4],8
	jne Block118

 Block116:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block119

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block119

 Block118:
	lea edx,[esp+0x4C]
	push edx
	call esi

 Block119:
	cmp word ptr [esp+0x6C],8
	mov byte ptr [esp+0x1E4],7
	jne Block122

 Block120:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	test eax,eax
	je Block123

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block123

 Block122:
	lea ecx,[esp+0x6C]
	push ecx
	call esi

 Block123:
	cmp word ptr [esp+0x8C],8
	mov dword ptr [esp+0x1E4],0xFFFFFFFF
	jne Block126

 Block124:
	mov eax,dword ptr [esp+0x94]
	xor edx,edx
	mov word ptr [esp+0x8C],dx
	test eax,eax
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea eax,[esp+0x8C]
	push eax
	call esi

 Block127:
	inc ebx
	cmp ebx,dword ptr [esp+0x1C]
	jl Block66

 Block128:
	mov ecx,dword ptr [esp+0x20]
	mov esi,dword ptr [ecx+0x56C]
	mov edx,dword ptr [esp+0x18]
	mov edi,dword ptr [edx]
	neg esi
	sbb esi,esi
	and esi,0x1000000
	dec esi
	test edi,edi
	jne Block131

 Block129:
	push 0x80004003
	call _com_issue_error

 Block130:
	push eax
	call _com_issue_error

 Block131:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push esi
	push edi
	call ecx
	test eax,eax
	jge Block133

 Block132:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block133:
	mov edx,dword ptr [esp+0x14]
	mov edi,dword ptr [edx]
	test edi,edi
	jne Block135

 Block134:
	push 0x80004003
	call _com_issue_error

 Block135:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push esi
	push edi
	call ecx
	test eax,eax
	jge Block137

 Block136:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block137:
	mov ecx,dword ptr [esp+0x1DC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1D4
	ret 0xC
}
}
// CAvatar::GetOrigin
__SUB_CLASS_THIS0(00060890, __thiscall, 19988,  CAvatar, _x_com_ptr<IWzVector2D>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x18B4]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [esi],eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CAvatar::SetRidingChair
__SUB_CLASS_THIS(0006AB80, __thiscall, 19982,  CAvatar, void, long) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x500],0
	jne Block2

 Block1:
	mov eax,dword ptr [esp+4]
	push 0
	push eax
	mov dword ptr [ecx+0x574],eax
	call CAvatar::SetRidingVehicle

 Block2:
	ret 4
}
}
// CAvatar::SetVisibleTamingMob
__SUB_CLASS_THIS(00060320, __thiscall, 19974,  CAvatar, void, int32_t) {
__asm {

 Block0:
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0xC]
	push esi
	mov esi,ebp
	neg esi
	sbb esi,esi
	mov ebx,ecx
	and esi,0xFF000000
	push edi
	mov edi,dword ptr [ebx+0x18E0]
	add esi,0xFFFFFF
	test edi,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push esi
	push edi
	call ecx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block4:
	mov edi,dword ptr [ebx+0x18E4]
	test edi,edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xE0]
	push esi
	push edi
	call eax
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block8:
	xor ecx,ecx
	test ebp,ebp
	sete cl
	pop edi
	pop esi
	pop ebp
	mov dword ptr [ebx+0x56C],ecx
	pop ebx
	ret 4
}
}
// CAvatar::TakeOffWeapon
__SUB_CLASS_THIS0(00064180, __thiscall, 19962,  CAvatar, void) {
__asm {

 Block0:
	push ecx
	mov eax,1
	push esi
	mov dword ptr [ecx+0x514],eax
	mov dword ptr [ecx+0x510],eax
	lea esi,[ecx+0x528]
	lea eax,[esp+4]
	mov dword ptr [ecx+0x504],0
	mov dword ptr [ecx+0x518],0
	cmp esi,eax
	je Block4

 Block1:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block3

 Block2:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi],0

 Block3:
	mov dword ptr [esi],0

 Block4:
	pop esi
	pop ecx
	ret
}
}
// CAvatar::SetAvatarLook
__SUB_CLASS_THIS(0006D450, __thiscall, 19971,  CAvatar, void, const AvatarLook&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	push eax
	lea ecx,[esi+4]
	call AvatarLook::operator=
	push 0
	mov ecx,esi
	call CAvatar::NotifyAvatarModified
	pop esi
	ret 4
}
}
// CAvatar::IsTransFormSkill
__SUB_CLASS_THIS0(0005F040, __thiscall, 19972,  CAvatar, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x548]
	cmp eax,0x3E8
	je Block5

 Block1:
	cmp eax,0x3E9
	je Block5

 Block2:
	cmp eax,0x44C
	je Block5

 Block3:
	cmp eax,0x44D
	je Block5

 Block4:
	xor eax,eax
	ret

 Block5:
	mov eax,1
	ret
}
}
// CAvatar::GetActionInfo
__SUB_CLASS_THIS0(000608C0, __thiscall, 19996,  CAvatar, CAvatar::ACTIONINFO&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CAvatar::GetOneTimeAction
	xor ecx,ecx
	cmp eax,0xFFFFFFFF
	setg cl
	imul ecx,0x974
	lea eax,[ecx+esi+0x5C0]
	pop esi
	ret
}
}
// CAvatar::IsRidingEx
__SUB_CLASS_THIS0(00060040, __thiscall, 19972,  CAvatar, int32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0x570]
	mov eax,offset _D_RIDING_WILDHUNTE__219+4
	jmp Block2

 Block2:
	cmp dword ptr [eax],ecx
	je Block5

 Block3:
	add eax,4
	cmp eax,offset _D_DB_DATE_19000101__227
	jl Block2

 Block4:
	xor eax,eax
	ret

 Block5:
	mov eax,1
	ret
}
}
// CAvatar::StopLevitationAction
_SUB_EXCEPTION_HANDLER(60640)
__SUB_CLASS_THIS0(00060640, __thiscall, 19962,  CAvatar, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_60640
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
	mov esi,ecx
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x20]
	xor ebx,ebx
	push eax
	mov dword ptr [esi+0x1938],ebx
	mov dword ptr [esi+0x193C],ebx
	call edi
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x10]
	push edx
	mov dword ptr [esp+0x3C],ebx
	call edi
	lea eax,[esp+0x10]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	mov ecx,dword ptr [esi+0x18B4]
	mov byte ptr [esp+0x38],1
	cmp ecx,ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x14]
	push eax
	push ebx
	push ebx
	call IWzVector2D::RelMove
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x38],bl
	cmp word ptr [esp+0x10],si
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x18]
	xor ecx,ecx
	mov word ptr [esp+0x10],cx
	cmp eax,ebx
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x10]
	push edx
	call edi

 Block10:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp word ptr [esp+0x20],si
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebx
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x2C
	ret

 Block13:
	lea ecx,[esp+0x20]
	push ecx
	call edi

 Block14:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x2C
	ret
}
}
// CAvatar::~CAvatar
_SUB_EXCEPTION_HANDLER(644C0)
__SUB_CLASS_THIS0(000644C0, __thiscall, 19962,  CAvatar, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_644C0
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
	int 3// TODO: 	mov dword ptr [esi],offset CAvatar::`vftable'
	cmp dword ptr [esi+0x18E8],0
	mov dword ptr [esp+0x18],0x19
	je Block5

 Block1:
	mov edi,dword ptr [esi+0x18E8]
	test edi,edi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov edx,dword ptr [_D_VTEMPTY]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [_D_VTEMPTY+4]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [_D_VTEMPTY+8]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [_D_VTEMPTY+12]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push edi
	call eax
	test eax,eax
	jge Block5

 Block4:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block5:
	lea ecx,[esi+0x1914]
	mov byte ptr [esp+0x18],0x18
	call SECPOINT::~SECPOINT
	lea ecx,[esi+0x18FC]
	mov byte ptr [esp+0x18],0x17
	call SECPOINT::~SECPOINT
	mov eax,dword ptr [esi+0x18F8]
	mov byte ptr [esp+0x18],0x16
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov eax,dword ptr [esi+0x18F4]
	mov byte ptr [esp+0x18],0x15
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov eax,dword ptr [esi+0x18F0]
	mov byte ptr [esp+0x18],0x14
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov eax,dword ptr [esi+0x18EC]
	mov byte ptr [esp+0x18],0x13
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov eax,dword ptr [esi+0x18E8]
	mov byte ptr [esp+0x18],0x12
	test eax,eax
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	mov eax,dword ptr [esi+0x18E4]
	mov byte ptr [esp+0x18],0x11
	test eax,eax
	je Block17

 Block16:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	mov eax,dword ptr [esi+0x18E0]
	mov byte ptr [esp+0x18],0x10
	test eax,eax
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	mov eax,dword ptr [esi+0x18DC]
	mov byte ptr [esp+0x18],0xF
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block21:
	mov eax,dword ptr [esi+0x18D8]
	mov byte ptr [esp+0x18],0xE
	test eax,eax
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block23:
	mov eax,dword ptr [esi+0x18D4]
	mov byte ptr [esp+0x18],0xD
	test eax,eax
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block25:
	mov eax,dword ptr [esi+0x18D0]
	mov byte ptr [esp+0x18],0xC
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block27:
	mov eax,dword ptr [esi+0x18CC]
	mov byte ptr [esp+0x18],0xB
	test eax,eax
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block29:
	mov eax,dword ptr [esi+0x18C8]
	mov byte ptr [esp+0x18],0xA
	test eax,eax
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
	mov eax,dword ptr [esi+0x18C4]
	mov byte ptr [esp+0x18],9
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block33:
	mov eax,dword ptr [esi+0x18C0]
	mov byte ptr [esp+0x18],8
	test eax,eax
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block35:
	mov eax,dword ptr [esi+0x18BC]
	mov byte ptr [esp+0x18],7
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	mov eax,dword ptr [esi+0x18B8]
	mov byte ptr [esp+0x18],6
	test eax,eax
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	mov eax,dword ptr [esi+0x18B4]
	mov byte ptr [esp+0x18],5
	test eax,eax
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block41:
	mov eax,dword ptr [esi+0x18B0]
	mov byte ptr [esp+0x18],4
	test eax,eax
	je Block43

 Block42:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block43:
	push offset CAvatar::ACTIONINFO::~ACTIONINFO
	push 2
	push 0x974
	lea eax,[esi+0x5C0]
	push eax
	mov byte ptr [esp+0x28],3
	call __eh_vector_dtor_iterator
	lea ecx,[esi+0x58C]
	mov byte ptr [esp+0x18],2
	call SECPOINT::~SECPOINT
	mov ecx,dword ptr [esi+0x528]
	test ecx,ecx
	je Block45

 Block44:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x528],0

 Block45:
	int 3// TODO: 	mov eax,offset ZRefCounted::`vftable'
	mov dword ptr [esi+0x209],eax
	mov dword ptr [esi+4],eax
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CAvatar::SetGhostState
__SUB_CLASS_THIS(00064E70, __thiscall, 19982,  CAvatar, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	push 0
	mov dword ptr [esi+0x55C],eax
	call CAvatar::ClearActionLayer
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x14]
	push 0
	push 0x64
	push 6
	mov ecx,esi
	call eax
	pop esi
	ret 4
}
}
// CAvatar::MoveAction2RawAction
// 45FDD4
static uint8_t _SUB_5FA30_LOOKUP_TABLE_1[20] = {
0, 1, 2, 1, 3, 4, 5, 6, 7, 1, 10, 10, 10, 10, 10, 10, 
8, 9, 139, 255, 
};
// 45FEB4
static uint8_t _SUB_5FA30_LOOKUP_TABLE_2[20] = {
0, 1, 4, 4, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
4, 4, 4, 3, 
};
// 45FD94
static uint8_t _SUB_5FA30_LOOKUP_TABLE_0[20] = {
0, 1, 2, 1, 3, 4, 5, 6, 7, 1, 8, 8, 8, 8, 8, 8, 
4, 4, 139, 255, 
};
__SUB_CLASS_THIS(0005FA30, __thiscall, 20000,  CAvatar, long, long, long*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0xC]
	push edi
	test ecx,ecx
	je Block2

 Block1:
	mov edx,eax
	and edx,1
	mov dword ptr [ecx],edx

 Block2:
	sar eax,1
	cmp dword ptr [esi+0x548],0
	mov edi,eax
	mov eax,dword ptr [esi+0x560]
	je Block28

 Block3:
	mov ecx,esi
	call CAvatar::IsMonsterMorphed
	test eax,eax
	je Block12

 Block4:
	lea eax,[edi-1]
	cmp eax,0x11
	ja Block80

 Block5:
	movzx eax,byte ptr [eax+_SUB_5FA30_LOOKUP_TABLE_0]
	cmp EAX, 0
je Block80
cmp EAX, 1
je Block6
cmp EAX, 2
je Block8
cmp EAX, 3
je Block16
cmp EAX, 4
je Block7
cmp EAX, 5
je Block9
cmp EAX, 6
je Block10
cmp EAX, 7
je Block11
cmp EAX, 8
je Block80


 Block6:
	pop edi
	mov eax,1
	pop esi
	ret 8

 Block7:
	pop edi
	mov eax,7
	pop esi
	ret 8

 Block8:
	pop edi
	mov eax,2
	pop esi
	ret 8

 Block9:
	pop edi
	mov eax,9
	pop esi
	ret 8

 Block10:
	pop edi
	mov eax,0xA
	pop esi
	ret 8

 Block11:
	pop edi
	mov eax,0xB
	pop esi
	ret 8

 Block12:
	mov eax,dword ptr [esi+0x548]
	test eax,eax
	je Block19

 Block13:
	push eax
	call CMorphTemplate::IsHideMorphed
	add esp,4
	test eax,eax
	je Block19

 Block14:
	lea eax,[edi-1]
	cmp eax,0x11
	ja Block80

 Block15:
	movzx ecx,byte ptr [eax+_SUB_5FA30_LOOKUP_TABLE_1]
	cmp ECX, 0
je Block80
cmp ECX, 1
je Block6
cmp ECX, 2
je Block8
cmp ECX, 3
je Block16
cmp ECX, 4
je Block7
cmp ECX, 5
je Block9
cmp ECX, 6
je Block10
cmp ECX, 7
je Block11
cmp ECX, 8
je Block17
cmp ECX, 9
je Block18
cmp ECX, 10
je Block80


 Block16:
	pop edi
	mov eax,8
	pop esi
	ret 8

 Block17:
	pop edi
	mov eax,0x29
	pop esi
	ret 8

 Block18:
	pop edi
	mov eax,0x2A
	pop esi
	ret 8

 Block19:
	mov eax,dword ptr [esi+0x548]
	test eax,eax
	je Block24

 Block20:
	push eax
	call CMorphTemplate::IsSuperMan
	add esp,4
	test eax,eax
	je Block24

 Block21:
	lea eax,[edi-1]
	cmp eax,0x11
	ja Block80

 Block22:
	cmp EAX, 0
je Block80
cmp EAX, 1
je Block6
cmp EAX, 2
je Block8
cmp EAX, 3
je Block23
cmp EAX, 4
je Block16
cmp EAX, 5
je Block7
cmp EAX, 6
je Block9
cmp EAX, 7
je Block10
cmp EAX, 8
je Block11
cmp EAX, 9
je Block27
cmp EAX, 10
je Block80
cmp EAX, 11
je Block80
cmp EAX, 12
je Block80
cmp EAX, 13
je Block80
cmp EAX, 14
je Block80
cmp EAX, 15
je Block80
cmp EAX, 16
je Block17
cmp EAX, 17
je Block18


 Block23:
	pop edi
	mov eax,3
	pop esi
	ret 8

 Block24:
	mov ecx,esi
	call CAvatar::IsAttackableMorphed
	test eax,eax
	je Block80

 Block25:
	lea eax,[edi-1]
	cmp eax,0x11
	ja Block80

 Block26:
	cmp EAX, 0
je Block80
cmp EAX, 1
je Block6
cmp EAX, 2
je Block8
cmp EAX, 3
je Block23
cmp EAX, 4
je Block16
cmp EAX, 5
je Block7
cmp EAX, 6
je Block9
cmp EAX, 7
je Block10
cmp EAX, 8
je Block11
cmp EAX, 9
je Block27
cmp EAX, 10
je Block80
cmp EAX, 11
je Block80
cmp EAX, 12
je Block80
cmp EAX, 13
je Block80
cmp EAX, 14
je Block80
cmp EAX, 15
je Block80
cmp EAX, 16
je Block17
cmp EAX, 17
je Block18


 Block27:
	pop edi
	mov eax,0xC
	pop esi
	ret 8

 Block28:
	cmp dword ptr [esi+0x55C],0
	je Block40

 Block29:
	lea eax,[edi-1]
	cmp eax,9
	ja Block32

 Block30:
	cmp EAX, 0
je Block31
cmp EAX, 1
je Block32
cmp EAX, 2
je Block35
cmp EAX, 3
je Block32
cmp EAX, 4
je Block33
cmp EAX, 5
je Block34
cmp EAX, 6
je Block36
cmp EAX, 7
je Block37
cmp EAX, 8
je Block38
cmp EAX, 9
je Block39


 Block31:
	pop edi
	mov eax,0x7C
	pop esi
	ret 8

 Block32:
	pop edi
	mov eax,0x7D
	pop esi
	ret 8

 Block33:
	pop edi
	mov eax,0x7F
	pop esi
	ret 8

 Block34:
	pop edi
	mov eax,0x80
	pop esi
	ret 8

 Block35:
	pop edi
	mov eax,0x7E
	pop esi
	ret 8

 Block36:
	pop edi
	mov eax,0x81
	pop esi
	ret 8

 Block37:
	pop edi
	mov eax,0x82
	pop esi
	ret 8

 Block38:
	pop edi
	mov eax,0x2F
	pop esi
	ret 8

 Block39:
	pop edi
	mov eax,0x83
	pop esi
	ret 8

 Block40:
	cmp eax,0x217C05C
	jne Block42

 Block41:
	pop edi
	mov eax,0xD9
	pop esi
	ret 8

 Block42:
	cmp eax,0x217E76D
	jne Block51

 Block43:
	cmp dword ptr [esi+0x564],0
	jne Block50

 Block44:
	cmp dword ptr [esi+0x568],0
	jne Block50

 Block45:
	lea eax,[edi-1]
	cmp eax,0x13
	ja Block48

 Block46:
	movzx edx,byte ptr [eax+_SUB_5FA30_LOOKUP_TABLE_2]
	cmp EDX, 0
je Block47
cmp EDX, 1
je Block48
cmp EDX, 2
je Block49
cmp EDX, 3
je Block50
cmp EDX, 4
je Block48


 Block47:
	pop edi
	mov eax,0xDF
	pop esi
	ret 8

 Block48:
	pop edi
	mov eax,0xDD
	pop esi
	ret 8

 Block49:
	pop edi
	mov eax,0x38
	pop esi
	ret 8

 Block50:
	pop edi
	mov eax,0xD2
	pop esi
	ret 8

 Block51:
	cmp eax,0x217E775
	jne Block53

 Block52:
	pop edi
	mov eax,0xE3
	pop esi
	ret 8

 Block53:
	cmp eax,0x21612A9
	jne Block55

 Block54:
	pop edi
	mov eax,0xEA
	pop esi
	ret 8

 Block55:
	cmp eax,0x2179951
	jne Block57

 Block56:
	pop edi
	mov eax,0xED
	pop esi
	ret 8

 Block57:
	lea eax,[edi-1]
	cmp eax,0x13
	ja Block80

 Block58:
	cmp EAX, 0
je Block59
cmp EAX, 1
je Block60
cmp EAX, 2
je Block63
cmp EAX, 3
je Block61
cmp EAX, 4
je Block18
cmp EAX, 5
je Block62
cmp EAX, 6
je Block64
cmp EAX, 7
je Block65
cmp EAX, 8
je Block38
cmp EAX, 9
je Block66
cmp EAX, 10
je Block80
cmp EAX, 11
je Block80
cmp EAX, 12
je Block80
cmp EAX, 13
je Block80
cmp EAX, 14
je Block80
cmp EAX, 15
je Block80
cmp EAX, 16
je Block77
cmp EAX, 17
je Block78
cmp EAX, 18
je Block79
cmp EAX, 19
je Block50


 Block59:
	xor eax,eax
	cmp dword ptr [esi+0x510],1
	pop edi
	setne al
	pop esi
	ret 8

 Block60:
	xor eax,eax
	cmp dword ptr [esi+0x514],1
	pop edi
	setne al
	pop esi
	add eax,2
	ret 8

 Block61:
	pop edi
	mov eax,4
	pop esi
	ret 8

 Block62:
	pop edi
	mov eax,0x2B
	pop esi
	ret 8

 Block63:
	pop edi
	mov eax,0x2C
	pop esi
	ret 8

 Block64:
	pop edi
	mov eax,0x2D
	pop esi
	ret 8

 Block65:
	pop edi
	mov eax,0x2E
	pop esi
	ret 8

 Block66:
	mov eax,dword ptr [esi+0x18AC]
	cmp eax,1
	jne Block68

 Block67:
	pop edi
	mov eax,0x31
	pop esi
	ret 8

 Block68:
	cmp eax,2
	jne Block70

 Block69:
	pop edi
	mov eax,0x32
	pop esi
	ret 8

 Block70:
	cmp eax,3
	jne Block72

 Block71:
	pop edi
	mov eax,0x33
	pop esi
	ret 8

 Block72:
	cmp eax,4
	jne Block74

 Block73:
	pop edi
	mov eax,0x34
	pop esi
	ret 8

 Block74:
	cmp eax,5
	jne Block76

 Block75:
	pop edi
	mov eax,0x35
	pop esi
	ret 8

 Block76:
	sub eax,6
	neg eax
	sbb eax,eax
	and eax,0xFFFFFFFA
	pop edi
	add eax,0x36
	pop esi
	ret 8

 Block77:
	pop edi
	mov eax,0x10E
	pop esi
	ret 8

 Block78:
	pop edi
	mov eax,0x10F
	pop esi
	ret 8

 Block79:
	pop edi
	mov eax,0x50
	pop esi
	ret 8

 Block80:
	pop edi
	xor eax,eax
	pop esi
	ret 8
}
}
// CAvatar::DoLevitationAction
_SUB_EXCEPTION_HANDLER(603B0)
__SUB_CLASS_THIS0(000603B0, __thiscall, 19962,  CAvatar, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_603B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x58]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	call get_update_time
	mov ecx,eax
	mov eax,dword ptr [edi+0x193C]
	mov dword ptr [esp+0x14],ecx
	test eax,eax
	je Block2

 Block1:
	sub ecx,eax
	add dword ptr [edi+0x1938],ecx

 Block2:
	mov eax,dword ptr [edi+0x1938]
	cmp eax,0x4B0
	jle Block4

 Block3:
	add eax,0xFFFFFB50
	mov dword ptr [edi+0x1938],eax

 Block4:
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
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea edx,[esp+0x18]
	push edx
	mov dword ptr [esp+0x64],0
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [edi+0x18B4]
	mov byte ptr [esp+0x60],1
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push 0
	push 0
	call IWzVector2D::RelMove
	mov ebp,8
	mov byte ptr [esp+0x60],0
	cmp word ptr [esp+0x18],bp
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp word ptr [esp+0x28],bp
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	lea edx,[esp+0x48]
	push edx
	call esi
	lea eax,[esp+0x48]
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
	lea ecx,[esp+0x38]
	push ecx
	mov dword ptr [esp+0x64],2
	call esi
	lea edx,[esp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	fild dword ptr [edi+0x1938]
	mov byte ptr [esp+0x60],3
	fdiv qword ptr [__real_4092c00000000000]
	fmul qword ptr [_D_PI__214]
	fadd st(0),st
	fstp dword ptr [esp+0x10]
	fld dword ptr [esp+0x10]
	call __CIsin
	fstp dword ptr [esp+0x10]
	mov esi,dword ptr [edi+0x18B4]
	fld dword ptr [esp+0x10]
	fstp dword ptr [esp+0x10]
	test esi,esi
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	fld dword ptr [esp+0x10]
	lea eax,[esp+0x48]
	fmul qword ptr [__real_4010000000000000]
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	fadd qword ptr [__real_3fe0000000000000]
	call __ftol2_sse
	push eax
	push 0
	mov ecx,esi
	call IWzVector2D::RelOffset
	mov byte ptr [esp+0x60],2
	cmp word ptr [esp+0x38],bp
	jne Block27

 Block25:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block28:
	mov dword ptr [esp+0x60],0xFFFFFFFF
	cmp word ptr [esp+0x48],bp
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [edi+0x193C],eax
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x54
	ret
}
}
// CAvatar::Init
_SUB_EXCEPTION_HANDLER(6D360)
__SUB_CLASS_THIS(0006D360, __thiscall, 19966,  CAvatar, void, const AvatarLook&, long, NakedParam<_x_com_ptr<IWzVector2D>>, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long, long, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_6D360
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esp+0x28]
	mov eax,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x24]
	push ecx
	mov dword ptr [esi+0x192C],eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x3C],esp
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x28]
	push eax
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x48],esp
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	mov ecx,esi
	call CAvatar::Init_0
	mov eax,dword ptr [esp+0x18]
	push eax
	lea ecx,[esi+4]
	call AvatarLook::operator=
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [esi+0x5B8],ecx
	push 0
	mov ecx,esi
	mov dword ptr [esi+0x18A8],edx
	call CAvatar::NotifyAvatarModified
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x10],0
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 0x24
}
}
// is_back_action
__SUB(0005F1B0, __cdecl, 146094,  int32_t, long, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+8],0
	mov eax,dword ptr [esp+4]
	je Block4

 Block1:
	cmp eax,9
	je Block8

 Block2:
	cmp eax,0xA
	je Block8

 Block3:
	xor eax,eax
	ret

 Block4:
	cmp eax,0x2D
	je Block8

 Block5:
	cmp eax,0x2E
	je Block8

 Block6:
	cmp eax,0x82
	je Block8

 Block7:
	cmp eax,0x81
	jne Block3

 Block8:
	mov eax,1
	ret
}
}
// rc_vc
__SUB(0005F150, __cdecl, 146093,  CVecCtrl*, IWzVector2D*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	ret

 Block2:
	xor eax,eax
	ret
}
}
// CAvatar::LoadBarrier
_SUB_EXCEPTION_HANDLER(612A0)
__SUB_CLASS_THIS0(000612A0, __thiscall, 19962,  CAvatar, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_612A0
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
	cmp dword ptr [esi+0x18F0],0
	sete al
	test al,al
	je Block26

 Block1:
	mov eax,dword ptr [esi+0x18E0]
	push 0
	push 0xFF
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	mov eax,dword ptr [esi+0x18B4]
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block5:
	push 0
	lea eax,[esp+0x2C]
	push offset _S_EFFECTITEMEFFIMG__2
	push eax
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x18F0]
	add esp,0x28
	cmp edi,eax
	je Block10

 Block6:
	mov dword ptr [esi+0x18F0],eax
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
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block12

 Block11:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block12:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push ecx
	call edi
	lea edx,[esp+0x24]
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
	lea eax,[esp+0x14]
	push eax
	mov dword ptr [esp+0x40],0
	call edi
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov ecx,dword ptr [esi+0x18F0]
	mov byte ptr [esp+0x3C],1
	test ecx,ecx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x18]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x3C],0
	cmp word ptr [esp+0x14],si
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[esp+0x14]
	push edx
	call edi

 Block22:
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	cmp word ptr [esp+0x24],si
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block26

 Block24:
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

 Block25:
	lea ecx,[esp+0x24]
	push ecx
	call edi

 Block26:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x34
	ret
}
}
// CAvatar::ACTIONINFO::ACTIONINFO
_SUB_EXCEPTION_HANDLER(64330)
__SUB_CLASS_THIS0(00064330, __thiscall, 22834,  CAvatar::ACTIONINFO, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_64330
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
	mov dword ptr [esi],0xFFFFFFFF
	mov dword ptr [esi+4],edi
	mov dword ptr [esi+8],edi
	mov dword ptr [esi+0xC],edi
	mov dword ptr [esi+0x10],edi
	mov dword ptr [esi+0x14],0xFFFFFFFF
	mov dword ptr [esi+0x18],edi
	mov dword ptr [esi+0x1C],edi
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0x20],edi
	push offset ZArray<ZRef<CActionMan::CHARACTERACTIONFRAMEENTRY>>::~ZArray<ZRef<CActionMan::CHARACTERACTIONFRAMEENTRY>>
	push offset ZArray<ZRef<CActionMan::CHARACTERACTIONFRAMEENTRY>>::_ctor_default
	push 0x111
	push 4
	lea eax,[esi+0x24]
	push eax
	mov byte ptr [esp+0x2C],1
	call __eh_vector_ctor_iterator
	push offset ZArray<ZRef<CActionMan::TAMINGMOBACTIONFRAMEENTRY>>::~ZArray<ZRef<CActionMan::TAMINGMOBACTIONFRAMEENTRY>>
	push offset ZArray<ZRef<CActionMan::TAMINGMOBACTIONFRAMEENTRY>>::_ctor_default
	push 0x111
	push 4
	lea ecx,[esi+0x468]
	push ecx
	mov byte ptr [esp+0x2C],2
	call __eh_vector_ctor_iterator
	push offset ZArray<ZRef<CActionMan::MORPHACTIONFRAMEENTRY>>::~ZArray<ZRef<CActionMan::MORPHACTIONFRAMEENTRY>>
	push offset ZArray<ZRef<CActionMan::MORPHACTIONFRAMEENTRY>>::_ctor_default
	push 0x31
	push 4
	lea edx,[esi+0x8AC]
	push edx
	mov byte ptr [esp+0x2C],3
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0x970],edi
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
// CAvatar::NotifyAvatarModified
_SUB_EXCEPTION_HANDLER(6BB20)
__SUB_CLASS_THIS(0006BB20, __thiscall, 19974,  CAvatar, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_6BB20
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
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+8]
	xor ebp,ebp
	call edx
	test eax,eax
	je Block5

 Block1:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp ecx,ebp
	je Block5

 Block2:
	cmp dword ptr [esi+0x3D],ebp
	jne Block5

 Block3:
	push 0x55FC
	call CWvsContext::GetQuestState
	cmp eax,2
	jne Block5

 Block4:
	mov dword ptr [esi+0x3D],0x108396

 Block5:
	cmp dword ptr [esp+0x40],ebp
	jne Block10

 Block6:
	mov eax,0x205
	lea ecx,[esi+4]
	lea edx,[esi+0x209]

 Block7:
	mov edi,dword ptr [edx]
	cmp edi,dword ptr [ecx]
	jne Block10

 Block8:
	sub eax,4
	add ecx,4
	add edx,4
	cmp eax,4
	jae Block7

 Block9:
	mov al,byte ptr [ecx]
	cmp al,byte ptr [edx]
	je Block64

 Block10:
	lea ecx,[esi+4]
	push ecx
	lea ecx,[esi+0x209]
	call AvatarLook::operator=
	mov dword ptr [esp+0x1C],ebp
	mov eax,dword ptr [esi+0x49]
	mov dword ptr [esp+0x38],ebp
	cmp eax,ebp
	je Block13

 Block11:
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push eax
	lea edx,[esp+0x2C]
	push edx
	call CActionMan::GetCharacterImgEntry
	mov edi,1
	mov ebx,edi
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x3C],1
	mov dword ptr [esp+0x18],ebx
	call ZRef<CActionMan::CHARACTERIMGENTRY>::op_assign_copy
	mov ebp,dword ptr [esp+0x1C]
	test ebp,ebp
	jne Block17

 Block12:
	jmp Block14

 Block13:
	mov edi,1

 Block14:
	cmp dword ptr [esi+0x49],0
	jne Block18

 Block15:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+4]
	mov ecx,esi
	call edx
	test eax,eax
	je Block18

 Block16:
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push 0x153D80
	lea eax,[esp+0x24]
	push eax
	call CActionMan::GetCharacterImgEntry
	or ebx,2
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x3C],2
	mov dword ptr [esp+0x18],ebx
	call ZRef<CActionMan::CHARACTERIMGENTRY>::op_assign_copy
	mov ebp,dword ptr [esp+0x1C]
	test ebp,ebp
	je Block18

 Block17:
	mov byte ptr [esp+0x40],1
	jmp Block19

 Block18:
	mov byte ptr [esp+0x40],0

 Block19:
	mov dword ptr [esp+0x38],edi
	test bl,2
	je Block25

 Block20:
	mov eax,dword ptr [esp+0x24]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block25

 Block21:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block24

 Block22:
	mov ecx,dword ptr [esp+0x24]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x24]
	test ecx,ecx
	je Block24

 Block23:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push edi
	call eax

 Block24:
	mov dword ptr [esp+0x24],0

 Block25:
	mov dword ptr [esp+0x38],0
	test bl,1
	je Block30

 Block26:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block30

 Block27:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block30

 Block28:
	mov ecx,dword ptr [esp+0x2C]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x2C]
	test ecx,ecx
	je Block30

 Block29:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push edi
	call eax

 Block30:
	cmp byte ptr [esp+0x40],0
	je Block47

 Block31:
	mov eax,dword ptr [esi+0x49]
	test eax,eax
	jne Block33

 Block32:
	mov eax,0x153D80

 Block33:
	mov dword ptr [esi+0x504],eax
	mov eax,dword ptr [esi+0x45]
	mov dword ptr [esi+0x508],eax
	mov dword ptr [esi+0x50C],eax
	mov ecx,dword ptr [ebp+0x24]
	mov dword ptr [esi+0x510],ecx
	mov edx,dword ptr [ebp+0x28]
	mov dword ptr [esi+0x514],edx
	mov eax,dword ptr [ebp+0x2C]
	mov dword ptr [esi+0x518],eax
	mov ecx,dword ptr [ebp+0x20]
	lea edx,[esi+0x51C]
	call _ZtlSecureTearHelper<long>::call
	lea ebx,[ebp+0x1C]
	lea edi,[esi+0x528]
	mov dword ptr [esi+0x524],eax
	cmp edi,ebx
	je Block38

 Block34:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	je Block36

 Block35:
	call _xbstr_t::Data_t::Release
	mov dword ptr [edi],0

 Block36:
	mov ebx,dword ptr [ebx]
	mov dword ptr [edi],ebx
	test ebx,ebx
	je Block38

 Block37:
	add ebx,8
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block38:
	mov ecx,dword ptr [esi+0x508]
	push ecx
	call get_weapon_type
	add esp,4
	test eax,eax
	je Block51

 Block39:
	mov edx,dword ptr [esi+0x45]
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push edx
	lea eax,[esp+0x24]
	push eax
	call CActionMan::GetCharacterImgEntry
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x38],3
	test eax,eax
	je Block43

 Block40:
	mov edx,dword ptr [esi+0x524]
	mov ecx,dword ptr [eax+0x2C]
	push edx
	lea edi,[esi+0x51C]
	push edi
	mov dword ptr [esi+0x518],ecx
	mov ebx,eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [ebx+0x20]
	add esp,8
	cmp ecx,eax
	jge Block42

 Block41:
	mov ecx,eax

 Block42:
	mov edx,edi
	call _ZtlSecureTearHelper<long>::call
	mov dword ptr [esi+0x524],eax
	mov eax,dword ptr [esp+0x24]

 Block43:
	mov byte ptr [esp+0x38],0
	test eax,eax
	je Block51

 Block44:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block51

 Block45:
	mov eax,dword ptr [esp+0x24]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x24]
	test ecx,ecx
	je Block51

 Block46:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax
	jmp Block51

 Block47:
	xor eax,eax
	lea edx,[esi+0x51C]
	lea ecx,[eax+6]
	mov dword ptr [esi+0x504],eax
	mov dword ptr [esi+0x514],edi
	mov dword ptr [esi+0x510],edi
	mov dword ptr [esi+0x518],eax
	call _ZtlSecureTearHelper<long>::call
	lea edi,[esi+0x528]
	lea ecx,[esp+0x40]
	mov dword ptr [esi+0x524],eax
	cmp edi,ecx
	je Block51

 Block48:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	je Block50

 Block49:
	call _xbstr_t::Data_t::Release
	mov dword ptr [edi],0

 Block50:
	mov dword ptr [edi],0

 Block51:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test eax,eax
	je Block54

 Block52:
	lea ecx,[eax+0x88]
	cmp esi,ecx
	jne Block54

 Block53:
	mov ecx,dword ptr [TSingleton<CSequencedKeyMan>::ms_pInstance]
	call CSequencedKeyMan::Restore
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]

 Block54:
	cmp dword ptr [esi+0x5B0],0
	jne Block61

 Block55:
	test eax,eax
	je Block57

 Block56:
	add eax,0x88
	cmp esi,eax
	jne Block59

 Block57:
	mov eax,dword ptr [TSingleton<CMacroSysMan>::ms_pInstance]
	test eax,eax
	je Block59

 Block58:
	cmp dword ptr [eax+0xC],0
	jne Block60

 Block59:
	push 0
	mov ecx,esi
	call CAvatar::ClearActionLayer
	mov edx,dword ptr [esi]
	mov eax,dword ptr [esi+0x5B8]
	mov edx,dword ptr [edx+0x10]
	push 1
	push eax
	mov ecx,esi
	call edx

 Block60:
	mov eax,dword ptr [esi+0x18A8]
	push 0xFFFFFFFF
	push eax
	mov ecx,esi
	call CAvatar::SetEmotion
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xC]
	mov ecx,esi
	call eax

 Block61:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test ebp,ebp
	je Block64

 Block62:
	lea esi,[ebp+4]
	push esi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block64

 Block63:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,ebp
	call eax

 Block64:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 4
}
}
// CAvatar::GetWeaponItemID
__SUB_CLASS_THIS0(000FEEA0, __thiscall, 19980,  CAvatar, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x504]
	ret
}
}
// CAvatar::GetLayerUnderFace
__SUB_CLASS_THIS0(00060860, __thiscall, 19987,  CAvatar, _x_com_ptr<IWzGr2DLayer>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x18D8]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [esi],eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CAvatar::_ZtlSecureGet_m_nWeaponAttackSpeed
__SUB_CLASS0(00060020, __fastcall, 20002,  CAvatar, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x524]
	push eax
	add ecx,0x51C
	push ecx
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	ret
}
}
// CAvatar::Init
_SUB_EXCEPTION_HANDLER(62330)
__SUB_CLASS_THIS(00062330, __thiscall, 19964,  CAvatar, void, NakedParam<_x_com_ptr<IWzVector2D>>, long, long, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_62330
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
	mov dword ptr [esp+0x14],ecx
	mov edi,dword ptr [esp+0x54]
	mov ebp,dword ptr [esp+0x58]
	mov dword ptr [esp+0x48],1
	test edi,edi
	jne Block2

 Block1:
	test ebp,ebp
	je Block34

 Block2:
	mov dword ptr [esp+0x54],0
	lea eax,[esp+0x58]
	push 0x3D2
	push eax
	mov byte ptr [esp+0x50],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea ecx,[esp+0x58]
	push ecx
	push eax
	mov byte ptr [esp+0x54],3
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x64]
	add esp,0xC
	mov byte ptr [esp+0x48],2
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block13

 Block5:
	mov edx,0xD
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],eax
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0x48],4
	test ecx,ecx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	mov ebx,dword ptr [esp+0x20]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x34]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [esp+0x38]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [esp+0x3C]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [edx+0x64]
	push ecx
	mov esi,ecx
	call eax
	test eax,eax
	jge Block9

 Block8:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block9:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],2
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	lea edx,[esp+0x20]
	mov bl,5
	push edx
	mov byte ptr [esp+0x4C],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0x48],6
	test ecx,ecx
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push ebp
	push edi
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x48],bl
	cmp word ptr [esp+0x20],si
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov byte ptr [esp+0x48],2
	cmp word ptr [esp+0x30],si
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov ecx,dword ptr [esp+0x50]
	mov eax,dword ptr [esp+0x54]
	cmp ecx,eax
	je Block32

 Block28:
	mov esi,ecx
	mov ecx,eax
	mov dword ptr [esp+0x50],ecx
	test eax,eax
	je Block30

 Block29:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax
	mov ecx,dword ptr [esp+0x50]
	mov eax,dword ptr [esp+0x54]

 Block30:
	test esi,esi
	je Block32

 Block31:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	mov ecx,dword ptr [esp+0x50]
	mov eax,dword ptr [esp+0x54]

 Block32:
	mov byte ptr [esp+0x48],1
	test eax,eax
	je Block35

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	mov ecx,dword ptr [esp+0x50]

 Block35:
	mov edi,dword ptr [esp+0x14]
	mov esi,dword ptr [edi+0x18B0]
	cmp esi,ecx
	je Block40

 Block36:
	mov dword ptr [edi+0x18B0],ecx
	test ecx,ecx
	je Block38

 Block37:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+4]
	call ecx

 Block38:
	test esi,esi
	je Block40

 Block39:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block40:
	lea ecx,[esp+0x58]
	push 0x3D2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	add edi,0x18B4
	push 0
	push edi
	push eax
	mov byte ptr [esp+0x54],7
	mov dword ptr [esp+0x60],edi
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x64]
	add esp,0xC
	mov byte ptr [esp+0x48],1
	test eax,eax
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block42:
	mov eax,dword ptr [esp+0x50]
	mov edx,0xD
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block44:
	mov esi,dword ptr [edi]
	mov byte ptr [esp+0x48],8
	test esi,esi
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
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
	jge Block48

 Block47:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block48:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],1
	jne Block51

 Block49:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	lea edx,[esp+0x30]
	mov bl,9
	push edx
	mov byte ptr [esp+0x4C],bl
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	xor ebp,ebp
	add esp,8
	cmp eax,ebp
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	mov esi,dword ptr [esp+0x54]
	mov ecx,dword ptr [esi]
	mov byte ptr [esp+0x48],0xA
	cmp ecx,ebp
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x34]
	push eax
	push ebp
	push ebp
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x48],bl
	cmp word ptr [esp+0x30],di
	jne Block61

 Block59:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,ebp
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov byte ptr [esp+0x48],1
	cmp word ptr [esp+0x20],di
	jne Block65

 Block63:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	lea edx,[esp+0x58]
	push 0x3D2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ebx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push ebp
	lea edi,[ebx+0x18BC]
	push edi
	push eax
	mov byte ptr [esp+0x54],0xB
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x64]
	add esp,0xC
	mov byte ptr [esp+0x48],1
	cmp eax,ebp
	je Block68

 Block67:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block68:
	mov eax,dword ptr [esi]
	mov ecx,0xD
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block70

 Block69:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block70:
	mov esi,dword ptr [edi]
	mov byte ptr [esp+0x48],0xC
	cmp esi,ebp
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
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
	cmp eax,ebp
	jge Block74

 Block73:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block74:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],1
	jne Block77

 Block75:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block78:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x20]
	push eax
	call esi
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block80

 Block79:
	push eax
	call _com_issue_error

 Block80:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x4C],0xD
	call esi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block82

 Block81:
	push eax
	call _com_issue_error

 Block82:
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x48],0xE
	cmp ecx,ebp
	jne Block84

 Block83:
	push 0x80004003
	call _com_issue_error

 Block84:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x34]
	push eax
	push ebp
	push ebp
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x48],0xD
	cmp word ptr [esp+0x30],si
	jne Block87

 Block85:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,ebp
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block88:
	mov byte ptr [esp+0x48],1
	cmp word ptr [esp+0x20],si
	jne Block91

 Block89:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block92:
	lea edx,[esp+0x58]
	push 0x3D2
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea edi,[ebx+0x18B8]
	push edi
	push eax
	mov byte ptr [esp+0x54],0xF
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x64]
	add esp,0xC
	mov byte ptr [esp+0x48],1
	cmp eax,ebp
	je Block94

 Block93:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block94:
	mov eax,dword ptr [ebx+0x18BC]
	mov ecx,0xD
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block96

 Block95:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block96:
	mov esi,dword ptr [edi]
	mov byte ptr [esp+0x48],0x10
	cmp esi,ebp
	jne Block98

 Block97:
	push 0x80004003
	call _com_issue_error

 Block98:
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
	cmp eax,ebp
	jge Block100

 Block99:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block100:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],1
	jne Block103

 Block101:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block104:
	lea eax,[esp+0x58]
	push 0x3D2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea esi,[ebx+0x18C0]
	push esi
	push eax
	mov byte ptr [esp+0x54],0x11
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x64]
	add esp,0xC
	mov byte ptr [esp+0x48],1
	cmp eax,ebp
	je Block106

 Block105:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block106:
	mov eax,dword ptr [ebx+0x18BC]
	mov ecx,0xD
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block108

 Block107:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block108:
	mov esi,dword ptr [esi]
	mov byte ptr [esp+0x48],0x12
	cmp esi,ebp
	jne Block110

 Block109:
	push 0x80004003
	call _com_issue_error

 Block110:
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
	cmp eax,ebp
	jge Block112

 Block111:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block112:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],1
	jne Block115

 Block113:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block116:
	lea eax,[esp+0x58]
	push 0x3D2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea esi,[ebx+0x18C4]
	push esi
	push eax
	mov byte ptr [esp+0x54],0x13
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x64]
	add esp,0xC
	mov byte ptr [esp+0x48],1
	cmp eax,ebp
	je Block118

 Block117:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block118:
	mov ecx,dword ptr [esp+0x54]
	mov eax,dword ptr [ecx]
	mov edx,0xD
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block120

 Block119:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block120:
	mov esi,dword ptr [esi]
	mov byte ptr [esp+0x48],0x14
	cmp esi,ebp
	jne Block122

 Block121:
	push 0x80004003
	call _com_issue_error

 Block122:
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
	cmp eax,ebp
	jge Block124

 Block123:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block124:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],1
	jne Block127

 Block125:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block128:
	lea eax,[esp+0x58]
	push 0x3D2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea esi,[ebx+0x18C8]
	push esi
	push eax
	mov byte ptr [esp+0x54],0x15
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x64]
	add esp,0xC
	mov byte ptr [esp+0x48],1
	cmp eax,ebp
	je Block130

 Block129:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block130:
	mov ecx,dword ptr [esp+0x54]
	mov eax,dword ptr [ecx]
	mov edx,0xD
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block132

 Block131:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block132:
	mov esi,dword ptr [esi]
	mov byte ptr [esp+0x48],0x16
	cmp esi,ebp
	jne Block134

 Block133:
	push 0x80004003
	call _com_issue_error

 Block134:
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
	cmp eax,ebp
	jge Block136

 Block135:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block136:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],1
	jne Block139

 Block137:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block140

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block139:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block140:
	lea eax,[esp+0x58]
	push 0x3D2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea esi,[ebx+0x18CC]
	push esi
	push eax
	mov byte ptr [esp+0x54],0x17
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x64]
	add esp,0xC
	mov byte ptr [esp+0x48],1
	cmp eax,ebp
	je Block142

 Block141:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block142:
	mov ecx,dword ptr [esp+0x54]
	mov eax,dword ptr [ecx]
	mov edx,0xD
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block144

 Block143:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block144:
	mov esi,dword ptr [esi]
	mov byte ptr [esp+0x48],0x18
	cmp esi,ebp
	jne Block146

 Block145:
	push 0x80004003
	call _com_issue_error

 Block146:
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
	cmp eax,ebp
	jge Block148

 Block147:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block148:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],1
	jne Block151

 Block149:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block152

 Block150:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block152

 Block151:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block152:
	mov eax,dword ptr [ebx+0x192C]
	sub eax,0x64
	neg eax
	sbb eax,eax
	and eax,2
	mov ecx,3
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	mov edx,ecx
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x48],0x1A
	cmp ecx,ebp
	jne Block154

 Block153:
	push 0x80004003
	call _com_issue_error

 Block154:
	lea eax,[esp+0x20]
	push eax
	lea edx,[esp+0x34]
	push edx
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	lea eax,[esp+0x74]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x18D8]
	cmp esi,eax
	je Block159

 Block155:
	mov dword ptr [ebx+0x18D8],eax
	cmp eax,ebp
	je Block157

 Block156:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block157:
	cmp esi,ebp
	je Block159

 Block158:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block159:
	mov eax,dword ptr [esp+0x58]
	cmp eax,ebp
	je Block161

 Block160:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block161:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x48],0x19
	jne Block164

 Block162:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,ebp
	je Block165

 Block163:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block165

 Block164:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block165:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],1
	jne Block168

 Block166:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block169

 Block167:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block169

 Block168:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block169:
	mov eax,dword ptr [ebx+0x18BC]
	mov edx,0xD
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block171

 Block170:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block171:
	mov esi,dword ptr [ebx+0x18D8]
	mov byte ptr [esp+0x48],0x1B
	cmp esi,ebp
	jne Block173

 Block172:
	push 0x80004003
	call _com_issue_error

 Block173:
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
	cmp eax,ebp
	jge Block175

 Block174:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block175:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],1
	jne Block178

 Block176:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block179

 Block177:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block179

 Block178:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block179:
	mov esi,dword ptr [ebx+0x18D8]
	cmp esi,ebp
	jne Block181

 Block180:
	push 0x80004003
	call _com_issue_error

 Block181:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,ebp
	jge Block183

 Block182:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block183:
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebp
	sete cl
	test cl,cl
	sete cl
	test cl,cl
	je Block198

 Block184:
	mov edx,0xD
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block186

 Block185:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block186:
	mov esi,dword ptr [ebx+0x18D8]
	mov byte ptr [esp+0x48],0x1C
	cmp esi,ebp
	jne Block188

 Block187:
	push 0x80004003
	call _com_issue_error

 Block188:
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
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	cmp eax,ebp
	jge Block190

 Block189:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block190:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],1
	jne Block193

 Block191:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block194

 Block192:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block194

 Block193:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block194:
	mov esi,dword ptr [ebx+0x18D8]
	cmp esi,ebp
	jne Block196

 Block195:
	push 0x80004003
	call _com_issue_error

 Block196:
	mov ecx,dword ptr [esp+0x60]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xB4]
	push ecx
	push esi
	call edx
	cmp eax,ebp
	jge Block198

 Block197:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block198:
	mov eax,dword ptr [ebx+0x192C]
	sub eax,0x64
	neg eax
	sbb eax,eax
	and eax,2
	mov ecx,3
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	mov edx,ecx
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x48],0x1E
	cmp ecx,ebp
	jne Block200

 Block199:
	push 0x80004003
	call _com_issue_error

 Block200:
	lea eax,[esp+0x20]
	push eax
	lea edx,[esp+0x34]
	push edx
	push 1
	push ebp
	push ebp
	push ebp
	push ebp
	lea eax,[esp+0x74]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x18D0]
	cmp esi,eax
	je Block205

 Block201:
	mov dword ptr [ebx+0x18D0],eax
	cmp eax,ebp
	je Block203

 Block202:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block203:
	cmp esi,ebp
	je Block205

 Block204:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block205:
	mov eax,dword ptr [esp+0x58]
	cmp eax,ebp
	je Block207

 Block206:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block207:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x48],0x1D
	jne Block210

 Block208:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,ebp
	je Block211

 Block209:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block211

 Block210:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block211:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],1
	jne Block214

 Block212:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block215

 Block213:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block215

 Block214:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block215:
	mov eax,dword ptr [edi]
	mov edx,0xD
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block217

 Block216:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block217:
	mov esi,dword ptr [ebx+0x18D0]
	mov byte ptr [esp+0x48],0x1F
	cmp esi,ebp
	jne Block219

 Block218:
	push 0x80004003
	call _com_issue_error

 Block219:
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
	cmp eax,ebp
	jge Block221

 Block220:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block221:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],1
	jne Block229

 Block222:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block224

 Block223:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block224:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block225:
	mov eax,dword ptr [ebx+0x18D8]
	mov ecx,0xD
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block227

 Block226:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block227:
	mov esi,dword ptr [ebx+0x18D0]
	mov byte ptr [esp+0x48],0x20
	cmp esi,ebp
	jne Block230

 Block228:
	push 0x80004003
	call _com_issue_error

 Block229:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x20]
	push edx
	call edi
	jmp Block225

 Block230:
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
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	cmp eax,ebp
	jge Block232

 Block231:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block232:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],1
	jne Block235

 Block233:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block236

 Block234:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block236

 Block235:
	lea edx,[esp+0x20]
	push edx
	call edi

 Block236:
	mov esi,dword ptr [ebx+0x18D0]
	cmp esi,ebp
	jne Block238

 Block237:
	push 0x80004003
	call _com_issue_error

 Block238:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,ebp
	jge Block240

 Block239:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block240:
	mov eax,dword ptr [ebx+0x192C]
	sub eax,0x64
	neg eax
	sbb eax,eax
	and eax,2
	mov edx,3
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],eax
	mov eax,edx
	mov word ptr [esp+0x30],ax
	mov dword ptr [esp+0x38],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x48],0x22
	cmp ecx,ebp
	jne Block242

 Block241:
	push 0x80004003
	call _com_issue_error

 Block242:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x34]
	push eax
	push 2
	push ebp
	push ebp
	push ebp
	push ebp
	lea edx,[esp+0x74]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x18D4]
	cmp esi,eax
	je Block247

 Block243:
	mov dword ptr [ebx+0x18D4],eax
	cmp eax,ebp
	je Block245

 Block244:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block245:
	cmp esi,ebp
	je Block247

 Block246:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block247:
	mov eax,dword ptr [esp+0x58]
	cmp eax,ebp
	je Block249

 Block248:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block249:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x48],0x21
	jne Block252

 Block250:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,ebp
	je Block253

 Block251:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block253

 Block252:
	lea edx,[esp+0x30]
	push edx
	call edi

 Block253:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],1
	jne Block256

 Block254:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block257

 Block255:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block257

 Block256:
	lea ecx,[esp+0x20]
	push ecx
	call edi

 Block257:
	mov eax,dword ptr [ebx+0x18BC]
	mov edx,0xD
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block259

 Block258:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block259:
	mov esi,dword ptr [ebx+0x18D4]
	mov byte ptr [esp+0x48],0x23
	cmp esi,ebp
	jne Block261

 Block260:
	push 0x80004003
	call _com_issue_error

 Block261:
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
	cmp eax,ebp
	jge Block263

 Block262:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block263:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],1
	jne Block266

 Block264:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block267

 Block265:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block267

 Block266:
	lea edx,[esp+0x20]
	push edx
	call edi

 Block267:
	mov eax,dword ptr [ebx+0x18D8]
	mov ecx,0xD
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block269

 Block268:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block269:
	mov esi,dword ptr [ebx+0x18D4]
	mov byte ptr [esp+0x48],0x24
	cmp esi,ebp
	jne Block271

 Block270:
	push 0x80004003
	call _com_issue_error

 Block271:
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
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	cmp eax,ebp
	jge Block273

 Block272:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block273:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],1
	jne Block276

 Block274:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block277

 Block275:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block277

 Block276:
	lea edx,[esp+0x20]
	push edx
	call edi

 Block277:
	mov esi,dword ptr [ebx+0x18D4]
	cmp esi,ebp
	jne Block279

 Block278:
	push 0x80004003
	call _com_issue_error

 Block279:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,ebp
	jge Block281

 Block280:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block281:
	mov eax,dword ptr [ebx+0x192C]
	sub eax,0x64
	neg eax
	sbb eax,eax
	and eax,2
	mov edx,3
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],eax
	mov eax,edx
	mov word ptr [esp+0x30],ax
	mov dword ptr [esp+0x38],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x48],0x26
	cmp ecx,ebp
	jne Block283

 Block282:
	push 0x80004003
	call _com_issue_error

 Block283:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x34]
	push eax
	push 0xFFFFFFFE
	push ebp
	push ebp
	push ebp
	push ebp
	lea edx,[esp+0x74]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x18DC]
	cmp esi,eax
	je Block288

 Block284:
	mov dword ptr [ebx+0x18DC],eax
	cmp eax,ebp
	je Block286

 Block285:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block286:
	cmp esi,ebp
	je Block288

 Block287:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block288:
	mov eax,dword ptr [esp+0x58]
	cmp eax,ebp
	je Block290

 Block289:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block290:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x48],0x25
	jne Block293

 Block291:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,ebp
	je Block294

 Block292:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block294

 Block293:
	lea edx,[esp+0x30]
	push edx
	call edi

 Block294:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],1
	jne Block297

 Block295:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block298

 Block296:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block298

 Block297:
	lea ecx,[esp+0x20]
	push ecx
	call edi

 Block298:
	mov eax,dword ptr [ebx+0x18BC]
	mov edx,0xD
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block300

 Block299:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block300:
	mov esi,dword ptr [ebx+0x18DC]
	mov byte ptr [esp+0x48],0x27
	cmp esi,ebp
	jne Block302

 Block301:
	push 0x80004003
	call _com_issue_error

 Block302:
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
	cmp eax,ebp
	jge Block304

 Block303:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block304:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],1
	jne Block307

 Block305:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block308

 Block306:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block308

 Block307:
	lea edx,[esp+0x20]
	push edx
	call edi

 Block308:
	mov eax,dword ptr [ebx+0x18D8]
	mov ecx,0xD
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block310

 Block309:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block310:
	mov esi,dword ptr [ebx+0x18DC]
	mov byte ptr [esp+0x48],0x28
	cmp esi,ebp
	jne Block312

 Block311:
	push 0x80004003
	call _com_issue_error

 Block312:
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
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	cmp eax,ebp
	jge Block314

 Block313:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block314:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],1
	jne Block317

 Block315:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block318

 Block316:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block318

 Block317:
	lea edx,[esp+0x20]
	push edx
	call edi

 Block318:
	mov esi,dword ptr [ebx+0x18DC]
	cmp esi,ebp
	jne Block320

 Block319:
	push 0x80004003
	call _com_issue_error

 Block320:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFF
	push esi
	call ecx
	cmp eax,ebp
	jge Block322

 Block321:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block322:
	lea esi,[ebx+0xF30]
	mov edi,2
	mov edi,edi

 Block323:
	lea edx,[esp+0x50]
	push edx
	push 0x111
	mov ecx,esi
	call ZArray<ZList<ZRef<CActionMan::SHADOWPARTNERACTIONFRAMEENTRY>>>::_Alloc
	add esi,0x974
	sub edi,1
	jne Block323

 Block324:
	mov eax,dword ptr [ebx+0x192C]
	sub eax,0x64
	neg eax
	sbb eax,eax
	and eax,2
	mov ecx,3
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	mov edx,ecx
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x48],0x2A
	cmp ecx,ebp
	jne Block326

 Block325:
	push 0x80004003
	call _com_issue_error

 Block326:
	lea eax,[esp+0x20]
	push eax
	lea edx,[esp+0x34]
	push edx
	push 0xFFFFFFFF
	push ebp
	push ebp
	push ebp
	push ebp
	lea eax,[esp+0x74]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x18E4]
	cmp esi,eax
	je Block331

 Block327:
	mov dword ptr [ebx+0x18E4],eax
	cmp eax,ebp
	je Block329

 Block328:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block329:
	cmp esi,ebp
	je Block331

 Block330:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block331:
	mov eax,dword ptr [esp+0x58]
	cmp eax,ebp
	je Block333

 Block332:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block333:
	mov esi,8
	mov byte ptr [esp+0x48],0x29
	cmp word ptr [esp+0x30],si
	jne Block336

 Block334:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,ebp
	je Block337

 Block335:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block337

 Block336:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block337:
	mov byte ptr [esp+0x48],1
	cmp word ptr [esp+0x20],si
	jne Block340

 Block338:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block341

 Block339:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block341

 Block340:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block341:
	mov edi,dword ptr [esp+0x54]
	mov eax,dword ptr [edi]
	mov edx,0xD
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block343

 Block342:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block343:
	mov esi,dword ptr [ebx+0x18E4]
	mov byte ptr [esp+0x48],0x2B
	cmp esi,ebp
	jne Block345

 Block344:
	push 0x80004003
	call _com_issue_error

 Block345:
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
	cmp eax,ebp
	jge Block347

 Block346:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block347:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],1
	jne Block350

 Block348:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block351

 Block349:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block351

 Block350:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block351:
	mov eax,dword ptr [ebx+0x18D8]
	mov ecx,0xD
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block353

 Block352:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block353:
	mov esi,dword ptr [ebx+0x18E4]
	mov byte ptr [esp+0x48],0x2C
	cmp esi,ebp
	jne Block355

 Block354:
	push 0x80004003
	call _com_issue_error

 Block355:
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
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	cmp eax,ebp
	jge Block357

 Block356:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block357:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],1
	jne Block360

 Block358:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block361

 Block359:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block361

 Block360:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block361:
	mov esi,dword ptr [ebx+0x18E4]
	cmp esi,ebp
	jne Block363

 Block362:
	push 0x80004003
	call _com_issue_error

 Block363:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFF
	push esi
	call ecx
	cmp eax,ebp
	jge Block365

 Block364:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block365:
	mov eax,dword ptr [ebx+0x192C]
	sub eax,0x64
	neg eax
	sbb eax,eax
	and eax,2
	mov edx,3
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],eax
	mov eax,edx
	mov word ptr [esp+0x30],ax
	mov dword ptr [esp+0x38],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x48],0x2E
	cmp ecx,ebp
	jne Block367

 Block366:
	push 0x80004003
	call _com_issue_error

 Block367:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x34]
	push eax
	push 3
	push ebp
	push ebp
	push ebp
	push ebp
	lea edx,[esp+0x70]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x18E0]
	cmp esi,eax
	je Block372

 Block368:
	mov dword ptr [ebx+0x18E0],eax
	cmp eax,ebp
	je Block370

 Block369:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block370:
	cmp esi,ebp
	je Block372

 Block371:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block372:
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebp
	je Block374

 Block373:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block374:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x48],0x2D
	jne Block377

 Block375:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,ebp
	je Block378

 Block376:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block378

 Block377:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block378:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],1
	jne Block381

 Block379:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block382

 Block380:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block382

 Block381:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block382:
	mov eax,dword ptr [edi]
	mov edx,0xD
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block384

 Block383:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block384:
	mov esi,dword ptr [ebx+0x18E0]
	mov byte ptr [esp+0x48],0x2F
	cmp esi,ebp
	jne Block386

 Block385:
	push 0x80004003
	call _com_issue_error

 Block386:
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
	cmp eax,ebp
	jge Block388

 Block387:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block388:
	mov edi,8
	mov byte ptr [esp+0x48],1
	cmp word ptr [esp+0x20],di
	jne Block391

 Block389:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block392

 Block390:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block392

 Block391:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block392:
	mov eax,dword ptr [ebx+0x18D8]
	mov ecx,0xD
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block394

 Block393:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block394:
	mov esi,dword ptr [ebx+0x18E0]
	mov byte ptr [esp+0x48],0x30
	cmp esi,ebp
	jne Block396

 Block395:
	push 0x80004003
	call _com_issue_error

 Block396:
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
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	cmp eax,ebp
	jge Block398

 Block397:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block398:
	mov byte ptr [esp+0x48],1
	cmp word ptr [esp+0x20],di
	jne Block401

 Block399:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block402

 Block400:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block402

 Block401:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block402:
	mov esi,dword ptr [ebx+0x18E0]
	cmp esi,ebp
	jne Block404

 Block403:
	push 0x80004003
	call _com_issue_error

 Block404:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFF
	push esi
	call ecx
	cmp eax,ebp
	jge Block406

 Block405:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block406:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x20]
	push edx
	call edi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block408

 Block407:
	push eax
	call _com_issue_error

 Block408:
	mov ecx,3
	mov word ptr [esp+0x30],cx
	mov dword ptr [esp+0x38],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x48],0x32
	cmp ecx,ebp
	jne Block410

 Block409:
	push 0x80004003
	call _com_issue_error

 Block410:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x34]
	push eax
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	lea edx,[esp+0x70]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x18E8]
	cmp esi,eax
	je Block415

 Block411:
	mov dword ptr [ebx+0x18E8],eax
	cmp eax,ebp
	je Block413

 Block412:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block413:
	cmp esi,ebp
	je Block415

 Block414:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block415:
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebp
	je Block417

 Block416:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block417:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x48],0x31
	jne Block420

 Block418:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,ebp
	je Block421

 Block419:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block421

 Block420:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block421:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x48],1
	jne Block424

 Block422:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block425

 Block423:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block425

 Block424:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block425:
	mov eax,dword ptr [ebx+0x18D8]
	mov edx,0xD
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebp
	je Block427

 Block426:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block427:
	mov esi,dword ptr [ebx+0x18E8]
	mov byte ptr [esp+0x48],0x33
	cmp esi,ebp
	jne Block429

 Block428:
	push 0x80004003
	call _com_issue_error

 Block429:
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
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	cmp eax,ebp
	jge Block431

 Block430:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block431:
	mov ebx,8
	mov byte ptr [esp+0x48],1
	cmp word ptr [esp+0x20],bx
	jne Block434

 Block432:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebp
	je Block435

 Block433:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block435

 Block434:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block435:
	lea eax,[esp+0x20]
	push eax
	call edi
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block437

 Block436:
	push eax
	call _com_issue_error

 Block437:
	mov ecx,dword ptr [esp+0x50]
	mov byte ptr [esp+0x48],0x34
	cmp ecx,ebp
	jne Block439

 Block438:
	push 0x80004003
	call _com_issue_error

 Block439:
	mov edi,dword ptr [esp+0x20]
	mov edx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x34]
	push ebp
	push ebp
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x40]
	push ebp
	push ebp
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x4C]
	push ebp
	mov dword ptr [eax+0xC],edi
	push ebp
	lea eax,[esp+0x44]
	push eax
	lea eax,[esp+0x44]
	push eax
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [edx+0x8C]
	call ecx
	cmp eax,ebp
	jge Block441

 Block440:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block441:
	mov byte ptr [esp+0x48],1
	cmp word ptr [esp+0x20],bx
	jne Block444

 Block442:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	cmp eax,ebp
	je Block445

 Block443:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block445

 Block444:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block445:
	mov ebp,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x18]
	lea esi,[ebp+0x1914]
	lea edi,[esi+0xC]
	push ecx
	mov ecx,edi
	call TSecType<long>::SetData
	mov edx,dword ptr [esp+0x1C]
	push edx
	mov ecx,esi
	call TSecType<long>::SetData
	mov ecx,edi
	add ebp,0x18FC
	call TSecType<long>::GetData
	lea ecx,[ebp+0xC]
	push eax
	call TSecType<long>::SetData
	mov ecx,esi
	call TSecType<long>::GetData
	push eax
	mov ecx,ebp
	call TSecType<long>::SetData
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x48],0
	test eax,eax
	je Block447

 Block446:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block447:
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block449

 Block448:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block449:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 0x14
}
}
// CAvatar::SetResistanceRidingMoveAction
__SUB_CLASS_THIS(0006B980, __thiscall, 19981,  CAvatar, void, long, int32_t) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov ebx,edi
	sar ebx,1
	mov esi,ecx
	cmp ebx,9
	jne Block4

 Block1:
	cmp dword ptr [esp+0x14],0
	jne Block3

 Block2:
	cmp edi,dword ptr [esi+0x5B8]
	je Block30

 Block3:
	or eax,0xFFFFFFFF
	push 1
	mov dword ptr [esi+0x5B8],edi
	mov dword ptr [esi+0x5BC],eax
	mov dword ptr [esi+0x5A8],eax
	call CAvatar::ClearActionLayer
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	push 0
	push 0x64
	push 6
	mov ecx,esi
	call edx
	pop edi
	pop esi
	pop ebx
	ret 8

 Block4:
	push ebp
	push 0
	push edi
	call CAvatar::MoveAction2RawAction
	mov ecx,esi
	mov ebp,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block20

 Block5:
	mov eax,dword ptr [esi+0x5B8]
	cmp eax,edi
	je Block8

 Block6:
	sar eax,1
	cmp eax,ebx
	jne Block8

 Block7:
	mov eax,1
	jmp Block9

 Block8:
	xor eax,eax

 Block9:
	mov dword ptr [esi+0x5B8],edi
	test eax,eax
	je Block11

 Block10:
	mov ecx,esi
	call CAvatar::FixCharacterPosition

 Block11:
	test ebp,ebp
	jl Block13

 Block12:
	cmp ebp,1
	jle Block16

 Block13:
	cmp ebp,0x7C
	je Block16

 Block14:
	push ebp
	call is_stand_action
	add esp,4
	test eax,eax
	jne Block16

 Block15:
	cmp ebp,4
	jne Block29

 Block16:
	cmp dword ptr [esp+0x18],0
	jne Block18

 Block17:
	cmp ebp,dword ptr [esi+0x5AC]
	je Block29

 Block18:
	cmp dword ptr [esi+0x5A8],0xFFFFFFFF
	mov dword ptr [esi+0x5AC],ebp
	jg Block29

 Block19:
	push 0
	push 0x64
	push 6
	mov ecx,esi
	call CAvatar::PrepareTamingMobActionLayer
	mov ecx,esi
	call CAvatar::FixCharacterPosition
	pop ebp
	pop edi
	pop esi
	pop ebx
	ret 8

 Block20:
	cmp dword ptr [esi+0x5A8],0xFFFFFFFF
	jg Block29

 Block21:
	mov ebx,dword ptr [esp+0x18]
	mov dword ptr [esp+0x14],0
	test ebx,ebx
	jne Block23

 Block22:
	cmp edi,dword ptr [esi+0x5B8]
	je Block24

 Block23:
	push 0
	push 0x64
	push 6
	mov ecx,esi
	mov dword ptr [esi+0x5B8],edi
	call CAvatar::PrepareCharacterActionLayer
	mov dword ptr [esp+0x14],1
	test ebx,ebx
	jne Block26

 Block24:
	cmp ebp,dword ptr [esi+0x5AC]
	je Block27

 Block25:
	mov eax,dword ptr [esi+0x570]
	push eax
	push ebp
	call IsAbleTamingMobAction
	add esp,8
	test eax,eax
	je Block27

 Block26:
	push 0
	push 0x64
	push 6
	mov ecx,esi
	mov dword ptr [esi+0x5AC],ebp
	call CAvatar::PrepareTamingMobActionLayer
	mov ecx,esi
	call CAvatar::FixCharacterPosition
	pop ebp
	pop edi
	pop esi
	pop ebx
	ret 8

 Block27:
	cmp dword ptr [esp+0x14],0
	je Block29

 Block28:
	mov ecx,esi
	call CAvatar::FixCharacterPosition

 Block29:
	pop ebp

 Block30:
	pop edi
	pop esi
	pop ebx
	ret 8
}
}
// CAvatar::GetCurrentAction
__SUB_CLASS_THIS(00060800, __thiscall, 19983,  CAvatar, long, long*) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	mov eax,dword ptr [esi+0x5B8]
	push edi
	push ecx
	push eax
	mov ecx,esi
	call CAvatar::MoveAction2RawAction
	mov ecx,esi
	mov edi,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block2

 Block1:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	pop edi
	pop esi
	ret 4

 Block2:
	mov eax,edi
	pop edi
	pop esi
	ret 4
}
}
// CAvatar::ClearTamingMobActionLayer
__SUB_CLASS_THIS(00064E30, __thiscall, 19982,  CAvatar, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	imul eax,0x974
	push esi
	lea eax,[eax+ecx+0x5C0]
	push edi
	lea esi,[eax+0x468]
	mov edi,0x111
	mov edi,edi

 Block1:
	lea ecx,[esp+0xC]
	push ecx
	push 1
	push 0
	mov ecx,esi
	call ZArray<ZRef<CActionMan::TAMINGMOBACTIONFRAMEENTRY>>::_Realloc
	add esi,4
	sub edi,1
	jne Block1

 Block2:
	pop edi
	pop esi
	ret 4
}
}
// CAvatar::SetOneTimeAction
__SUB_CLASS_THIS(0006ABA0, __thiscall, 19982,  CAvatar, void, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	or eax,0xFFFFFFFF
	push 1
	mov dword ptr [esi+0x5BC],eax
	mov dword ptr [esi+0x5A8],eax
	call CAvatar::ClearActionLayer
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esi]
	push 0
	push 0x64
	mov dword ptr [esi+0x5BC],eax
	mov eax,dword ptr [edx+0x14]
	push 6
	mov ecx,esi
	call eax
	pop esi
	ret 4
}
}
// CAvatar::FixCharacterPosition
_SUB_EXCEPTION_HANDLER(616B0)
__SUB_CLASS_THIS0(000616B0, __thiscall, 19962,  CAvatar, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_616B0
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
	mov edi,ecx
	cmp dword ptr [edi+0x5B0],0
	jne Block132

 Block1:
	mov eax,dword ptr [edi+0x5B8]
	lea ecx,[esp+0x20]
	push ecx
	push eax
	mov ecx,edi
	call CAvatar::MoveAction2RawAction
	mov ecx,edi
	mov esi,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block3

 Block2:
	mov ecx,edi
	call CAvatar::GetOneTimeAction
	jmp Block4

 Block3:
	mov eax,esi

 Block4:
	push eax
	mov ecx,edi
	call CAvatar::ConvertCharacterAction
	mov esi,eax
	mov eax,dword ptr [edi+0x5A8]
	cmp eax,0xFFFFFFFF
	mov dword ptr [esp+0x1C],esi
	jle Block6

 Block5:
	mov ebp,eax
	mov dword ptr [esp+0x18],eax
	jmp Block7

 Block6:
	mov ebp,dword ptr [edi+0x5AC]
	mov dword ptr [esp+0x18],ebp

 Block7:
	mov ecx,edi
	call CAvatar::GetOneTimeAction
	xor edx,edx
	cmp eax,0xFFFFFFFF
	mov eax,dword ptr [edi+0x5A8]
	setg dl
	xor ecx,ecx
	imul edx,0x974
	cmp eax,0xFFFFFFFF
	setg cl
	lea edx,[edx+edi+0x5C0]
	mov ebx,dword ptr [edx+esi*4+0x24]
	imul ecx,0x974
	lea ecx,[ecx+edi+0x5C0]
	test ebx,ebx
	je Block132

 Block8:
	cmp dword ptr [ebx-4],0
	je Block132

 Block9:
	mov eax,dword ptr [ecx+ebp*4+0x468]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block132

 Block10:
	cmp dword ptr [eax-4],0
	je Block132

 Block11:
	mov eax,dword ptr [edx]
	lea ebx,[ebx+eax*8+4]
	mov eax,dword ptr [ebx]
	mov esi,dword ptr [eax+0x14]
	mov eax,dword ptr [eax+0x18]
	mov dword ptr [esp+0x50],eax
	mov eax,dword ptr [esp+0x14]
	mov eax,dword ptr [eax-4]
	mov dword ptr [esp+0x4C],esi
	xor esi,esi
	xor ebp,ebp
	mov dword ptr [esp+0x24],esi
	mov dword ptr [esp+0x28],esi
	mov dword ptr [esp+0x2C],esi
	mov dword ptr [esp+0x30],esi
	mov dword ptr [esp+0x34],esi
	mov dword ptr [esp+0x38],esi
	mov dword ptr [esp+0x3C],esi
	mov dword ptr [esp+0x40],esi
	cmp dword ptr [ecx+0x14],eax
	jae Block13

 Block12:
	mov eax,dword ptr [ecx+0x14]
	mov ebx,dword ptr [ebx]
	mov esi,dword ptr [esp+0x14]
	mov eax,dword ptr [esi+eax*8+4]
	mov ebp,dword ptr [eax+0x28]
	mov esi,dword ptr [eax+0x2C]
	sub ebp,dword ptr [ebx+0x1C]
	sub esi,dword ptr [ebx+0x20]
	mov ebx,dword ptr [eax+0x14]
	mov dword ptr [edi+0x578],ebx
	mov ebx,dword ptr [eax+0x18]
	mov dword ptr [edi+0x57C],ebx
	mov ebx,dword ptr [eax+0x1C]
	mov dword ptr [edi+0x580],ebx
	mov ebx,dword ptr [esp+0x18]
	add eax,0x14
	mov eax,dword ptr [eax+0xC]
	mov dword ptr [edi+0x584],eax
	mov eax,dword ptr [ecx+0x14]
	mov ecx,dword ptr [ecx+ebx*4+0x468]
	mov eax,dword ptr [ecx+eax*8+4]
	mov ecx,dword ptr [eax+0x28]
	mov ebx,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x2C],ecx
	mov ecx,dword ptr [eax+0x2C]
	mov dword ptr [esp+0x30],ecx
	mov ecx,dword ptr [eax+0x30]
	mov dword ptr [esp+0x34],ecx
	mov ecx,dword ptr [eax+0x34]
	mov dword ptr [esp+0x38],ecx
	mov ecx,dword ptr [edx]
	mov edx,dword ptr [edx+ebx*4+0x24]
	mov ecx,dword ptr [edx+ecx*8+4]
	mov edx,dword ptr [ecx+0x24]
	mov ecx,dword ptr [ecx+0x28]
	mov dword ptr [esp+0x24],edx
	mov edx,dword ptr [eax+0x38]
	mov eax,dword ptr [eax+0x3C]
	mov dword ptr [esp+0x28],ecx
	mov dword ptr [esp+0x3C],edx
	mov dword ptr [esp+0x40],eax

 Block13:
	cmp dword ptr [esp+0x20],0
	mov ebx,dword ptr [ZImports::_VariantInit]
	jne Block21

 Block14:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,0x2D
	je Block21

 Block15:
	cmp eax,0x2E
	je Block21

 Block16:
	cmp eax,0x82
	je Block21

 Block17:
	cmp eax,0x81
	je Block21

 Block18:
	cmp eax,0x40
	je Block21

 Block19:
	cmp eax,0x41
	je Block21

 Block20:
	push 1
	mov ecx,edi
	call CAvatar::AvatarLayerFlip
	push offset _D_VTMISSING
	lea ecx,[esp+0x60]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x70]
	mov dword ptr [esp+0x88],4
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [esp+0x50]
	lea ecx,[esp+0x5C]
	push ecx
	lea edx,[esp+0x70]
	push edx
	push eax
	mov eax,dword ptr [esp+0x58]
	neg eax
	push eax
	lea ecx,[edi+0x18B8]
	mov byte ptr [esp+0x94],5
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	lea ecx,[esp+0x6C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x5C]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x60]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x70]
	mov dword ptr [esp+0x88],6
	call Ztl_variant_t::_ctor_1
	lea ecx,[esp+0x5C]
	push ecx
	lea edx,[esp+0x70]
	push edx
	push esi
	neg ebp
	push ebp
	lea ecx,[edi+0x18BC]
	mov byte ptr [esp+0x94],7
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	lea ecx,[esp+0x6C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x5C]
	mov dword ptr [esp+0x84],0xFFFFFFFF
	call Ztl_variant_t::~Ztl_variant_t
	push ebp
	lea ecx,[edi+0x598]
	call TSecType<long>::op_assign
	push esi
	lea ecx,[edi+0x58C]
	call TSecType<long>::op_assign
	mov dword ptr [edi+0x1930],1
	jmp Block50

 Block21:
	push 0
	mov ecx,edi
	call CAvatar::AvatarLayerFlip
	lea eax,[esp+0x6C]
	push eax
	call ebx
	lea ecx,[esp+0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea edx,[esp+0x5C]
	push edx
	mov dword ptr [esp+0x88],0
	call ebx
	lea eax,[esp+0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	mov ecx,dword ptr [edi+0x18B8]
	mov byte ptr [esp+0x84],1
	test ecx,ecx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea edx,[esp+0x6C]
	push edx
	mov edx,dword ptr [esp+0x54]
	lea eax,[esp+0x60]
	push eax
	mov eax,dword ptr [esp+0x54]
	push edx
	push eax
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x5C],8
	mov byte ptr [esp+0x84],0
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	cmp word ptr [esp+0x6C],8
	mov dword ptr [esp+0x84],0xFFFFFFFF
	jne Block34

 Block32:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	lea edx,[esp+0x5C]
	push edx
	call ebx
	lea eax,[esp+0x5C]
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
	lea ecx,[esp+0x6C]
	mov ebx,2
	push ecx
	mov dword ptr [esp+0x88],ebx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x6C]
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
	mov ecx,dword ptr [edi+0x18BC]
	mov byte ptr [esp+0x84],3
	test ecx,ecx
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	lea eax,[esp+0x5C]
	push eax
	lea edx,[esp+0x70]
	push edx
	push esi
	push ebp
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x6C],8
	mov byte ptr [esp+0x84],bl
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	cmp word ptr [esp+0x5C],8
	mov dword ptr [esp+0x84],0xFFFFFFFF
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block49:
	lea ecx,[edi+0x598]
	push ebp
	call TSecType<long>::SetData
	lea ecx,[edi+0x58C]
	push esi
	call TSecType<long>::SetData
	mov ebx,dword ptr [ZImports::_VariantInit]
	mov dword ptr [edi+0x1930],0

 Block50:
	lea ecx,[esp+0x5C]
	push ecx
	call ebx
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block52

 Block51:
	push eax
	call _com_issue_error

 Block52:
	lea eax,[esp+0x6C]
	mov esi,8
	push eax
	mov dword ptr [esp+0x88],esi
	call ebx
	lea ecx,[esp+0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	cmp dword ptr [edi+0x1930],0
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x84],9
	je Block56

 Block55:
	neg eax

 Block56:
	mov ecx,dword ptr [edi+0x18C0]
	test ecx,ecx
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea edx,[esp+0x5C]
	push edx
	lea edx,[esp+0x70]
	push edx
	mov edx,dword ptr [esp+0x30]
	push edx
	push eax
	call IWzVector2D::RelMove
	mov byte ptr [esp+0x84],8
	cmp word ptr [esp+0x6C],si
	jne Block61

 Block59:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov dword ptr [esp+0x84],0xFFFFFFFF
	cmp word ptr [esp+0x5C],si
	jne Block65

 Block63:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block66:
	lea ecx,[esp+0x5C]
	push ecx
	call ebx
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block68

 Block67:
	push eax
	call _com_issue_error

 Block68:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x6C]
	mov ebx,0xA
	push eax
	mov dword ptr [esp+0x88],ebx
	call ebp
	lea ecx,[esp+0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block70

 Block69:
	push eax
	call _com_issue_error

 Block70:
	cmp dword ptr [edi+0x1930],0
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x84],0xB
	je Block72

 Block71:
	neg eax

 Block72:
	mov ecx,dword ptr [edi+0x18C4]
	test ecx,ecx
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	lea edx,[esp+0x5C]
	push edx
	lea edx,[esp+0x70]
	push edx
	mov edx,dword ptr [esp+0x38]
	push edx
	push eax
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x84],bl
	cmp word ptr [esp+0x6C],si
	jne Block77

 Block75:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block78:
	mov dword ptr [esp+0x84],0xFFFFFFFF
	cmp word ptr [esp+0x5C],si
	jne Block81

 Block79:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block82:
	lea ecx,[esp+0x5C]
	push ecx
	call ebp
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block84

 Block83:
	push eax
	call _com_issue_error

 Block84:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x6C]
	mov ebx,0xC
	push eax
	mov dword ptr [esp+0x88],ebx
	call ebp
	lea ecx,[esp+0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	cmp dword ptr [edi+0x1930],0
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x84],0xD
	je Block88

 Block87:
	neg eax

 Block88:
	mov ecx,dword ptr [edi+0x18C8]
	test ecx,ecx
	jne Block90

 Block89:
	push 0x80004003
	call _com_issue_error

 Block90:
	lea edx,[esp+0x5C]
	push edx
	lea edx,[esp+0x70]
	push edx
	mov edx,dword ptr [esp+0x40]
	push edx
	push eax
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x84],bl
	cmp word ptr [esp+0x6C],si
	jne Block93

 Block91:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block94:
	mov dword ptr [esp+0x84],0xFFFFFFFF
	cmp word ptr [esp+0x5C],si
	jne Block97

 Block95:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block98:
	lea ecx,[esp+0x5C]
	push ecx
	call ebp
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block100

 Block99:
	push eax
	call _com_issue_error

 Block100:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x6C]
	mov ebx,0xE
	push eax
	mov dword ptr [esp+0x88],ebx
	call ebp
	lea ecx,[esp+0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block102

 Block101:
	push eax
	call _com_issue_error

 Block102:
	cmp dword ptr [edi+0x1930],0
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x84],0xF
	je Block104

 Block103:
	neg eax

 Block104:
	mov ecx,dword ptr [edi+0x18CC]
	test ecx,ecx
	jne Block106

 Block105:
	push 0x80004003
	call _com_issue_error

 Block106:
	lea edx,[esp+0x5C]
	push edx
	lea edx,[esp+0x70]
	push edx
	mov edx,dword ptr [esp+0x48]
	push edx
	push eax
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x84],bl
	cmp word ptr [esp+0x6C],si
	jne Block109

 Block107:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block110:
	mov dword ptr [esp+0x84],0xFFFFFFFF
	cmp word ptr [esp+0x5C],si
	jne Block113

 Block111:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	test eax,eax
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block114:
	lea ecx,[esp+0x3C]
	push ecx
	call ebp
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block116

 Block115:
	push eax
	call _com_issue_error

 Block116:
	lea eax,[esp+0x4C]
	mov ebx,0x10
	push eax
	mov dword ptr [esp+0x88],ebx
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block118

 Block117:
	push eax
	call _com_issue_error

 Block118:
	mov ecx,dword ptr [edi+0x18B4]
	mov byte ptr [esp+0x84],0x11
	test ecx,ecx
	jne Block120

 Block119:
	push 0x80004003
	call _com_issue_error

 Block120:
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x50]
	push eax
	push 0
	push 0
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x84],bl
	cmp word ptr [esp+0x4C],si
	jne Block123

 Block121:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block124:
	mov dword ptr [esp+0x84],0xFFFFFFFF
	cmp word ptr [esp+0x3C],si
	jne Block127

 Block125:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block128:
	mov edi,dword ptr [edi+0x18B4]
	test edi,edi
	jne Block130

 Block129:
	push 0x80004003
	call _com_issue_error

 Block130:
	fldz
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x80]
	sub esp,8
	fstp qword ptr [esp]
	push edi
	call eax
	test eax,eax
	jge Block132

 Block131:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block132:
	mov ecx,dword ptr [esp+0x7C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x74
	ret
}
}
// CAvatar::SetMorphed
_SUB_EXCEPTION_HANDLER(69C80)
__SUB_CLASS_THIS(00069C80, __thiscall, 19989,  CAvatar, int32_t, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_69C80
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x68]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x78]
	cmp dword ptr [esi+0x548],edi
	jne Block2

 Block1:
	xor eax,eax
	jmp Block175

 Block2:
	xor ebp,ebp
	push ebp
	mov dword ptr [esi+0x548],edi
	mov dword ptr [esi+0x570],ebp
	call CAvatar::ClearActionLayer
	or ebx,0xFFFFFFFF
	push 1
	mov ecx,esi
	mov dword ptr [esi+0x5BC],ebx
	mov dword ptr [esi+0x5A8],ebx
	call CAvatar::ClearActionLayer
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	push ebp
	push 0x64
	push 6
	mov ecx,esi
	call edx
	cmp dword ptr [esi+0x548],ebp
	jne Block4

 Block3:
	push ebx
	push ebp
	mov ecx,esi
	call CAvatar::SetEmotion

 Block4:
	mov ebx,0x1F4
	mov dword ptr [esp+0x78],ebx
	cmp edi,0x3EA
	jne Block6

 Block5:
	xor ebx,ebx
	mov dword ptr [esp+0x78],ebx

 Block6:
	mov edi,dword ptr [esi+0x18D0]
	cmp edi,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0xDC]
	lea ecx,[esp+0x18]
	push ecx
	push edi
	mov dword ptr [esp+0x20],ebp
	call edx
	cmp eax,ebp
	jge Block10

 Block9:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block10:
	mov edi,dword ptr [esi+0x18D0]
	cmp edi,ebp
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFF
	push edi
	call ecx
	cmp eax,ebp
	jge Block14

 Block13:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block14:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov edi,dword ptr [esi+0x18D0]
	mov dword ptr [esp+0x70],ebp
	cmp edi,ebp
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x58]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block20

 Block19:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block20:
	mov ecx,dword ptr [esp+0x14]
	lea eax,[ecx+ebx]
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],eax
	mov ecx,dword ptr [esi+0x18D0]
	mov byte ptr [esp+0x70],1
	cmp ecx,ebp
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea eax,[esp+0x20]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x70],2
	cmp ecx,ebp
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov eax,dword ptr [esp+0x18]
	lea edx,[esp+0x38]
	push edx
	lea edx,[esp+0x2C]
	shr eax,0x18
	push edx
	push eax
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x70],1
	cmp eax,ebp
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0x70],0
	cmp word ptr [esp+0x28],di
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x28]
	push ecx
	call ebx

 Block30:
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp word ptr [esp+0x38],di
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,ebp
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[esp+0x38]
	push eax
	call ebx

 Block34:
	mov edi,dword ptr [esi+0x18D4]
	cmp edi,ebp
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0xDC]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block38

 Block37:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block38:
	mov edi,dword ptr [esi+0x18D4]
	cmp edi,ebp
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFF
	push edi
	call edx
	cmp eax,ebp
	jge Block42

 Block41:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block42:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	mov edi,dword ptr [esi+0x18D4]
	mov dword ptr [esp+0x70],3
	cmp edi,ebp
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x58]
	lea eax,[esp+0x18]
	push eax
	push edi
	mov dword ptr [esp+0x20],ebp
	call ecx
	cmp eax,ebp
	jge Block48

 Block47:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block48:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x78]
	add eax,edx
	mov ecx,3
	mov word ptr [esp+0x38],cx
	mov dword ptr [esp+0x40],eax
	mov ecx,dword ptr [esi+0x18D4]
	mov bl,4
	mov byte ptr [esp+0x70],bl
	cmp ecx,ebp
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea edx,[esp+0x20]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x70],5
	cmp ecx,ebp
	jne Block52

 Block51:
	push 0x80004003
	call _com_issue_error

 Block52:
	mov eax,dword ptr [esp+0x14]
	lea edx,[esp+0x28]
	push edx
	lea edx,[esp+0x3C]
	shr eax,0x18
	push edx
	push eax
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebp
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block54:
	mov edi,8
	mov byte ptr [esp+0x70],3
	cmp word ptr [esp+0x38],di
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp word ptr [esp+0x28],di
	jne Block61

 Block59:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebp
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov edi,dword ptr [esi+0x18D8]
	cmp edi,ebp
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0xDC]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block66

 Block65:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block66:
	mov edi,dword ptr [esi+0x18D8]
	cmp edi,ebp
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFF
	push edi
	call edx
	cmp eax,ebp
	jge Block70

 Block69:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block70:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block72

 Block71:
	push eax
	call _com_issue_error

 Block72:
	mov edi,dword ptr [esi+0x18D8]
	mov dword ptr [esp+0x70],6
	cmp edi,ebp
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x58]
	lea eax,[esp+0x18]
	push eax
	push edi
	mov dword ptr [esp+0x20],ebp
	call ecx
	cmp eax,ebp
	jge Block76

 Block75:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block76:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x78]
	add eax,edx
	mov ecx,3
	mov word ptr [esp+0x38],cx
	mov dword ptr [esp+0x40],eax
	mov ecx,dword ptr [esi+0x18D8]
	mov bl,7
	mov byte ptr [esp+0x70],bl
	cmp ecx,ebp
	jne Block78

 Block77:
	push 0x80004003
	call _com_issue_error

 Block78:
	lea edx,[esp+0x20]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x70],8
	cmp ecx,ebp
	jne Block80

 Block79:
	push 0x80004003
	call _com_issue_error

 Block80:
	mov eax,dword ptr [esp+0x14]
	lea edx,[esp+0x28]
	push edx
	lea edx,[esp+0x3C]
	shr eax,0x18
	push edx
	push eax
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebp
	je Block82

 Block81:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block82:
	mov edi,8
	mov byte ptr [esp+0x70],6
	cmp word ptr [esp+0x38],di
	jne Block85

 Block83:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block86:
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp word ptr [esp+0x28],di
	jne Block89

 Block87:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebp
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block90:
	mov edi,dword ptr [esi+0x18DC]
	cmp edi,ebp
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0xDC]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block94

 Block93:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block94:
	mov edi,dword ptr [esi+0x18DC]
	cmp edi,ebp
	jne Block96

 Block95:
	push 0x80004003
	call _com_issue_error

 Block96:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFF
	push edi
	call edx
	cmp eax,ebp
	jge Block98

 Block97:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block98:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block100

 Block99:
	push eax
	call _com_issue_error

 Block100:
	mov edi,dword ptr [esi+0x18DC]
	mov dword ptr [esp+0x70],9
	cmp edi,ebp
	jne Block102

 Block101:
	push 0x80004003
	call _com_issue_error

 Block102:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x58]
	lea eax,[esp+0x18]
	push eax
	push edi
	mov dword ptr [esp+0x20],ebp
	call ecx
	cmp eax,ebp
	jge Block104

 Block103:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block104:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x78]
	add eax,edx
	mov ecx,3
	mov word ptr [esp+0x38],cx
	mov dword ptr [esp+0x40],eax
	mov ecx,dword ptr [esi+0x18DC]
	mov bl,0xA
	mov byte ptr [esp+0x70],bl
	cmp ecx,ebp
	jne Block106

 Block105:
	push 0x80004003
	call _com_issue_error

 Block106:
	lea edx,[esp+0x20]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x70],0xB
	cmp ecx,ebp
	jne Block108

 Block107:
	push 0x80004003
	call _com_issue_error

 Block108:
	mov eax,dword ptr [esp+0x14]
	lea edx,[esp+0x28]
	push edx
	lea edx,[esp+0x3C]
	shr eax,0x18
	push edx
	push eax
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebp
	je Block110

 Block109:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block110:
	mov edi,8
	mov byte ptr [esp+0x70],9
	cmp word ptr [esp+0x38],di
	jne Block113

 Block111:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block114:
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp word ptr [esp+0x28],di
	jne Block117

 Block115:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebp
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block118:
	mov edi,dword ptr [esi+0x18E0]
	cmp edi,ebp
	jne Block120

 Block119:
	push 0x80004003
	call _com_issue_error

 Block120:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0xDC]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block122

 Block121:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block122:
	mov edi,dword ptr [esi+0x18E0]
	cmp edi,ebp
	jne Block124

 Block123:
	push 0x80004003
	call _com_issue_error

 Block124:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFF
	push edi
	call edx
	cmp eax,ebp
	jge Block126

 Block125:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block126:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block128

 Block127:
	push eax
	call _com_issue_error

 Block128:
	mov edi,dword ptr [esi+0x18E0]
	mov dword ptr [esp+0x70],0xC
	cmp edi,ebp
	jne Block130

 Block129:
	push 0x80004003
	call _com_issue_error

 Block130:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x58]
	lea eax,[esp+0x18]
	push eax
	push edi
	mov dword ptr [esp+0x20],ebp
	call ecx
	cmp eax,ebp
	jge Block132

 Block131:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block132:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x78]
	add eax,edx
	mov ecx,3
	mov word ptr [esp+0x38],cx
	mov dword ptr [esp+0x40],eax
	mov ecx,dword ptr [esi+0x18E0]
	mov bl,0xD
	mov byte ptr [esp+0x70],bl
	cmp ecx,ebp
	jne Block134

 Block133:
	push 0x80004003
	call _com_issue_error

 Block134:
	lea edx,[esp+0x20]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x70],0xE
	cmp ecx,ebp
	jne Block136

 Block135:
	push 0x80004003
	call _com_issue_error

 Block136:
	mov eax,dword ptr [esp+0x14]
	lea edx,[esp+0x28]
	push edx
	lea edx,[esp+0x3C]
	shr eax,0x18
	push edx
	push eax
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebp
	je Block138

 Block137:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block138:
	mov edi,8
	mov byte ptr [esp+0x70],0xC
	cmp word ptr [esp+0x38],di
	jne Block141

 Block139:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block142

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block142

 Block141:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block142:
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp word ptr [esp+0x28],di
	jne Block145

 Block143:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebp
	je Block146

 Block144:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block146

 Block145:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block146:
	mov edi,dword ptr [esi+0x18E4]
	cmp edi,ebp
	jne Block148

 Block147:
	push 0x80004003
	call _com_issue_error

 Block148:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0xDC]
	lea edx,[esp+0x18]
	push edx
	push edi
	mov dword ptr [esp+0x20],ebp
	call eax
	cmp eax,ebp
	jge Block150

 Block149:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block150:
	mov edi,dword ptr [esi+0x18E4]
	cmp edi,ebp
	jne Block152

 Block151:
	push 0x80004003
	call _com_issue_error

 Block152:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFF
	push edi
	call edx
	cmp eax,ebp
	jge Block154

 Block153:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block154:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block156

 Block155:
	push eax
	call _com_issue_error

 Block156:
	mov edi,dword ptr [esi+0x18E4]
	mov dword ptr [esp+0x70],0xF
	cmp edi,ebp
	jne Block158

 Block157:
	push 0x80004003
	call _com_issue_error

 Block158:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x58]
	lea eax,[esp+0x1C]
	push eax
	push edi
	mov dword ptr [esp+0x24],ebp
	call ecx
	cmp eax,ebp
	jge Block160

 Block159:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block160:
	mov edx,dword ptr [esp+0x1C]
	mov eax,dword ptr [esp+0x78]
	add eax,edx
	mov ecx,3
	mov word ptr [esp+0x48],cx
	mov dword ptr [esp+0x50],eax
	mov ecx,dword ptr [esi+0x18E4]
	mov bl,0x10
	mov byte ptr [esp+0x70],bl
	cmp ecx,ebp
	jne Block162

 Block161:
	push 0x80004003
	call _com_issue_error

 Block162:
	lea edx,[esp+0x24]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x70],0x11
	cmp ecx,ebp
	jne Block164

 Block163:
	push 0x80004003
	call _com_issue_error

 Block164:
	mov eax,dword ptr [esp+0x18]
	lea edx,[esp+0x58]
	push edx
	lea edx,[esp+0x4C]
	shr eax,0x18
	push edx
	push eax
	push eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x70],bl
	cmp eax,ebp
	je Block166

 Block165:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block166:
	mov esi,8
	mov byte ptr [esp+0x70],0xF
	cmp word ptr [esp+0x48],si
	jne Block169

 Block167:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebp
	je Block170

 Block168:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block170

 Block169:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block170:
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp word ptr [esp+0x58],si
	jne Block173

 Block171:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	cmp eax,ebp
	je Block174

 Block172:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block174

 Block173:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block174:
	mov eax,1

 Block175:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret 4
}
}
// CAvatar::GetBodyRect
__SUB_CLASS_THIS(00062190, __thiscall, 19985,  CAvatar, void, tagRECT&, int32_t) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	push esi
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0x5B8]
	xor ecx,ecx
	and eax,0xFFFFFFFE
	cmp eax,0xA
	sete cl
	cmp dword ptr [edi+0x548],0
	mov ebp,ecx
	je Block2

 Block1:
	mov edx,dword ptr [edi+0x54C]
	mov esi,dword ptr [esp+0x24]
	mov dword ptr [esi],edx
	mov eax,dword ptr [edi+0x550]
	mov dword ptr [esi+4],eax
	mov ecx,dword ptr [edi+0x554]
	mov dword ptr [esi+8],ecx
	mov edx,dword ptr [edi+0x558]
	mov dword ptr [esi+0xC],edx
	jmp Block6

 Block2:
	mov eax,offset _D_RCBODYPRONE
	test ebp,ebp
	jne Block4

 Block3:
	mov eax,offset _D_RCBODYDEFAULT

 Block4:
	mov ecx,dword ptr [eax]
	mov esi,dword ptr [esp+0x24]
	mov dword ptr [esi],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [esi+4],edx
	mov ecx,dword ptr [eax+8]
	mov dword ptr [esi+8],ecx
	mov edx,dword ptr [eax+0xC]
	mov dword ptr [esi+0xC],edx
	mov eax,dword ptr [edi+0x570]
	push eax
	call is_vehicle
	add esp,4
	test eax,eax
	je Block6

 Block5:
	lea ebx,[edi+0x58C]
	mov ecx,ebx
	call TSecType<long>::GetData
	add dword ptr [esi+0xC],eax
	mov ecx,ebx
	call TSecType<long>::GetData
	add dword ptr [esi+4],eax
	lea ebx,[edi+0x598]
	mov ecx,ebx
	call TSecType<long>::GetData
	add dword ptr [esi],eax
	mov ecx,ebx
	call TSecType<long>::GetData
	add dword ptr [esi+8],eax
	lea ecx,[edi+0x578]
	push ecx
	push esi
	push esi
	call UnionRect

 Block6:
	mov bl,1
	test byte ptr [edi+0x5B8],bl
	jne Block8

 Block7:
	mov edx,dword ptr [esi+8]
	mov eax,dword ptr [esi]
	neg edx
	mov ecx,edx
	neg eax
	mov dword ptr [esi],ecx
	mov dword ptr [esi+8],eax

 Block8:
	lea ecx,[edi+0x18FC]
	call TSecType<long>::GetData
	push eax
	lea ecx,[edi+0x1908]
	call TSecType<long>::GetData
	push eax
	push esi
	call OffsetRect
	cmp dword ptr [esp+0x28],0
	je Block16

 Block9:
	cmp dword ptr [edi+0x548],0
	je Block11

 Block10:
	lea eax,[edi+0x54C]
	jmp Block13

 Block11:
	mov eax,offset _D_RCBODYPRONE
	test ebp,ebp
	jne Block13

 Block12:
	mov eax,offset _D_RCBODYDEFAULT

 Block13:
	mov edx,dword ptr [eax+4]
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x14],edx
	mov edx,dword ptr [eax+8]
	mov eax,dword ptr [eax+0xC]
	mov dword ptr [esp+0x10],ecx
	mov dword ptr [esp+0x18],edx
	mov dword ptr [esp+0x1C],eax
	test byte ptr [edi+0x5B8],bl
	jne Block15

 Block14:
	neg edx
	neg ecx
	mov dword ptr [esp+0x10],edx
	mov dword ptr [esp+0x18],ecx

 Block15:
	lea ecx,[edi+0x1914]
	call TSecType<long>::GetData
	push eax
	lea ecx,[edi+0x1920]
	call TSecType<long>::GetData
	push eax
	lea ecx,[esp+0x18]
	push ecx
	call OffsetRect
	lea edx,[esp+0x10]
	push edx
	push esi
	push esi
	call UnionRect

 Block16:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8
}
}
// CAvatar::CanUseBareHand
__SUB_CLASS_THIS0(000647A0, __thiscall, 19972,  CAvatar, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// CAvatar::AvatarLayerRemoveCanvas
_SUB_EXCEPTION_HANDLER(60D30)
__SUB_CLASS_THIS(00060D30, __thiscall, 19982,  CAvatar, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_60D30
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
	mov eax,3
	mov edi,0xFFFFFFFE
	mov word ptr [esp+0x18],ax
	mov dword ptr [esp+0x20],edi
	mov ecx,dword ptr [esi+0x18D8]
	mov dword ptr [esp+0x40],0
	test ecx,ecx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	or ebp,0xFFFFFFFF
	mov ebx,8
	mov dword ptr [esp+0x40],ebp
	cmp word ptr [esp+0x18],bx
	jne Block7

 Block5:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov edx,3
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],edi
	mov ecx,dword ptr [esi+0x18D4]
	mov dword ptr [esp+0x40],1
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea eax,[esp+0x18]
	push eax
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov dword ptr [esp+0x40],ebp
	cmp word ptr [esp+0x18],bx
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov edx,3
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],edi
	mov ecx,dword ptr [esi+0x18D0]
	mov dword ptr [esp+0x40],2
	test ecx,ecx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea eax,[esp+0x18]
	push eax
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	mov dword ptr [esp+0x40],ebp
	cmp word ptr [esp+0x18],bx
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov edx,3
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],edi
	mov ecx,dword ptr [esi+0x18E4]
	mov dword ptr [esp+0x40],edx
	test ecx,ecx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea eax,[esp+0x18]
	push eax
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block28:
	mov dword ptr [esp+0x40],ebp
	cmp word ptr [esp+0x18],bx
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov edx,3
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],edi
	mov ecx,dword ptr [esi+0x18E0]
	mov dword ptr [esp+0x40],4
	test ecx,ecx
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	mov dword ptr [esp+0x40],ebp
	cmp word ptr [esp+0x28],bx
	jne Block39

 Block37:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret 4
}
}
// CAvatar::GetCurCharacterAction
__SUB_CLASS_THIS(000608E0, __thiscall, 19983,  CAvatar, long, long*) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	mov eax,dword ptr [esi+0x5B8]
	push edi
	push ecx
	push eax
	mov ecx,esi
	call CAvatar::MoveAction2RawAction
	mov ecx,esi
	mov edi,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block2

 Block1:
	mov ecx,esi
	call CAvatar::GetOneTimeAction
	push eax
	mov ecx,esi
	call CAvatar::ConvertCharacterAction
	pop edi
	pop esi
	ret 4

 Block2:
	mov eax,edi
	push eax
	mov ecx,esi
	call CAvatar::ConvertCharacterAction
	pop edi
	pop esi
	ret 4
}
}
// CAvatar::ResetCharacterOneTimeAction
__SUB_CLASS_THIS0(000667A0, __thiscall, 19962,  CAvatar, void) {
__asm {

 Block0:
	push 1
	mov dword ptr [ecx+0x5BC],0xFFFFFFFF
	call CAvatar::ClearCharacterActionLayer
	ret
}
}
// CAvatar::RemoveBarrier
__SUB_CLASS_THIS0(00061480, __thiscall, 19962,  CAvatar, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x18F0]
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [ecx+0x18F0],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	ret
}
}
// CAvatar::ForcingAppearance
__SUB_CLASS_THIS(00066A90, __thiscall, 19979,  CAvatar, void, int32_t, long*) {
__asm {

 Block0:
	push ebx
	push esi
	mov esi,dword ptr [esp+0x10]
	xor edx,edx
	mov ebx,ecx
	cmp esi,edx
	je Block5

 Block1:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [ebx+0x570],edx
	mov dword ptr [ebx+0x574],edx
	mov dword ptr [ebx+0x500],eax
	cmp eax,edx
	je Block3

 Block2:
	push edi
	lea edi,[ebx+0x410]
	mov ecx,0x3C
	rep movsd
	pop edi

 Block3:
	push edx
	mov ecx,ebx
	call CAvatar::ClearActionLayer
	mov ecx,ebx
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jg Block5

 Block4:
	mov ecx,dword ptr [ebx+0x5B8]
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x10]
	push 1
	push ecx
	mov ecx,ebx
	call edx

 Block5:
	pop esi
	pop ebx
	ret 8
}
}
// CAvatar::PrepareCharacterActionLayer
_SUB_EXCEPTION_HANDLER(65100)
__SUB_CLASS_THIS(00065100, __thiscall, 19997,  CAvatar, void, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_65100
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x1F0
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x204]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x50],ebx
	mov dword ptr [esp+0x18],0
	cmp dword ptr [ebx+0x5B0],0
	je Block2

 Block1:
	push 0
	call CAvatar::ClearActionLayer
	jmp Block157

 Block2:
	mov eax,dword ptr [ebx+0x5B8]
	lea ecx,[esp+0x1C]
	push ecx
	push eax
	mov ecx,ebx
	call CAvatar::MoveAction2RawAction
	mov ecx,ebx
	mov esi,eax
	call CAvatar::GetOneTimeAction
	cmp eax,0xFFFFFFFF
	jle Block4

 Block3:
	mov ecx,ebx
	call CAvatar::GetOneTimeAction
	jmp Block5

 Block4:
	mov eax,esi

 Block5:
	push eax
	mov ecx,ebx
	call CAvatar::ConvertCharacterAction
	mov esi,eax
	cmp esi,0x111
	mov dword ptr [esp+0x14],esi
	jge Block157

 Block6:
	mov ecx,ebx
	call CAvatar::GetOneTimeAction
	xor edx,edx
	cmp eax,0xFFFFFFFF
	setg dl
	imul edx,0x974
	lea edi,[edx+ebx+0x5C0]
	mov eax,dword ptr [edi+esi*4+0x24]
	mov dword ptr [esp+0x38],edi
	lea edi,[edi+esi*4+0x24]
	mov dword ptr [esp+0x34],edi
	test eax,eax
	je Block8

 Block7:
	cmp dword ptr [eax-4],0
	jne Block16

 Block8:
	cmp dword ptr [ebx+0x500],0
	jne Block10

 Block9:
	mov eax,dword ptr [ebx+0x55C]
	mov ecx,dword ptr [ebx+0x19]
	push eax
	mov eax,dword ptr [ebx+0x5A4]
	push eax
	mov eax,dword ptr [ebx+0x11]
	push 0
	push ecx
	movzx ecx,byte ptr [ebx+0x10]
	push edi
	lea edx,[ebx+0x1D]
	push edx
	push eax
	push ecx
	jmp Block15

 Block10:
	xor eax,eax
	lea ecx,[ebx+0x410]

 Block11:
	mov edx,dword ptr [ecx]
	cmp edx,0xFFFFFFFF
	jne Block13

 Block12:
	mov edx,dword ptr [ecx-0x3F3]

 Block13:
	mov dword ptr [esp+eax*4+0x114],edx
	inc eax
	add ecx,4
	cmp eax,0x3C
	jl Block11

 Block14:
	mov eax,dword ptr [ebx+0x55C]
	mov edx,dword ptr [ebx+0x5A4]
	push eax
	mov eax,dword ptr [ebx+0x19]
	push edx
	mov edx,dword ptr [ebx+0x11]
	push 0
	push eax
	movzx eax,byte ptr [ebx+0x10]
	push edi
	lea ecx,[esp+0x128]
	push ecx
	push edx
	push eax

 Block15:
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	push esi
	call CActionMan::LoadCharacterAction

 Block16:
	mov eax,dword ptr [edi]
	lea ecx,[esi+esi*2]
	lea edx,[ecx*8+ActionData::m_saCharacterActions]
	mov dword ptr [esp+0x1C],edx
	test eax,eax
	jne Block18

 Block17:
	xor ebp,ebp
	jmp Block19

 Block18:
	mov ebp,dword ptr [eax-4]

 Block19:
	mov esi,dword ptr [esp+0x38]
	lea eax,[esp+0x3F]
	push eax
	push 1
	lea edi,[esi+0xC]
	push ebp
	mov ecx,edi
	mov dword ptr [esp+0x2C],ebp
	call ZArray<long>::_Realloc
	mov edx,dword ptr [edi]
	lea ecx,[ebp*4]
	push ecx
	push 0
	push edx
	call _memset
	mov eax,dword ptr [esp+0x220]
	add esp,0xC
	cmp eax,2
	mov dword ptr [esi+8],0
	jg Block21

 Block20:
	mov eax,2
	jmp Block23

 Block21:
	cmp eax,0xA
	jl Block23

 Block22:
	mov eax,0xA

 Block23:
	xor esi,esi
	test ebp,ebp
	jle Block36

 Block24:
	mov ebx,dword ptr [esp+0x21C]
	lea ebp,[eax+0xA]

 Block25:
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [ecx+0x14]
	mov ecx,dword ptr [edi]
	mov eax,esi
	shl eax,5
	mov eax,dword ptr [eax+edx+8]
	imul eax,ebp
	cdq
	and edx,0xF
	add eax,edx
	sar eax,4
	mov dword ptr [ecx+esi*4],eax
	test ebx,ebx
	je Block34

 Block26:
	mov edx,dword ptr [esp+0x14]
	push edx
	call is_shoot_action
	add esp,4
	test eax,eax
	je Block34

 Block27:
	mov eax,dword ptr [esp+0x14]
	cmp eax,0x7A
	jne Block29

 Block28:
	test esi,esi
	jmp Block31

 Block29:
	cmp eax,0x1F
	jne Block32

 Block30:
	cmp esi,2

 Block31:
	je Block33

 Block32:
	cmp esi,4
	jne Block34

 Block33:
	mov eax,dword ptr [edi]
	mov dword ptr [eax+esi*4],0x7FFFFFFF

 Block34:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+esi*4]
	mov eax,dword ptr [esp+0x38]
	add dword ptr [eax+8],edx
	inc esi
	cmp esi,dword ptr [esp+0x20]
	jl Block25

 Block35:
	mov ebx,dword ptr [esp+0x50]
	mov ebp,dword ptr [esp+0x20]

 Block36:
	mov eax,3
	mov esi,0xFFFFFFFE
	mov word ptr [esp+0x24],ax
	mov dword ptr [esp+0x2C],esi
	mov ecx,dword ptr [ebx+0x18D8]
	mov dword ptr [esp+0x20C],0
	test ecx,ecx
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block40

 Block39:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block40:
	cmp word ptr [esp+0x24],8
	mov dword ptr [esp+0x20C],0xFFFFFFFF
	jne Block43

 Block41:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov edx,3
	mov word ptr [esp+0x24],dx
	mov dword ptr [esp+0x2C],esi
	mov ecx,dword ptr [ebx+0x18D4]
	mov dword ptr [esp+0x20C],1
	test ecx,ecx
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	lea eax,[esp+0x24]
	push eax
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block48

 Block47:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block48:
	cmp word ptr [esp+0x24],8
	mov dword ptr [esp+0x20C],0xFFFFFFFF
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [eax],0
	mov dword ptr [eax+4],0
	test ebp,ebp
	jle Block54

 Block53:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx]
	mov dword ptr [eax+4],ecx

 Block54:
	mov edi,dword ptr [ZImports::_VariantInit]
	xor ebp,ebp
	cmp dword ptr [esp+0x20],ebp
	jle Block114

 Block55:
	lea esp,[esp]

 Block56:
	mov edx,dword ptr [esp+0x34]
	mov eax,dword ptr [edx]
	lea esi,[ebp*8]
	mov eax,dword ptr [esi+eax+4]
	push ebp
	add eax,0xC
	push eax
	lea eax,[ebx+0x18D8]
	push eax
	mov ecx,ebx
	call CAvatar::ApplyScaleAndOffset
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [esi+edx+4]
	push ebp
	add eax,0x10
	push eax
	lea eax,[ebx+0x18D4]
	push eax
	mov ecx,ebx
	call CAvatar::ApplyScaleAndOffset
	lea eax,[esp+0xA4]
	push eax
	call edi
	lea ecx,[esp+0xA4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block138

 Block57:
	mov eax,dword ptr [ebx+0x192C]
	mov edx,3
	mov dword ptr [esp+0x20C],2
	mov word ptr [esp+0xE4],dx
	mov dword ptr [esp+0xEC],eax
	mov ecx,edx
	mov word ptr [esp+0xB4],cx
	mov dword ptr [esp+0xBC],eax
	lea edx,[esp+0x74]
	push edx
	mov byte ptr [esp+0x210],4
	call edi
	lea eax,[esp+0x74]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block138

 Block58:
	lea ecx,[esp+0x24]
	push ecx
	mov byte ptr [esp+0x210],5
	call edi
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block138

 Block59:
	mov eax,dword ptr [esp+0x34]
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [ebx+0x18D8]
	add eax,esi
	mov eax,dword ptr [eax+4]
	mov eax,dword ptr [eax+0xC]
	mov byte ptr [esp+0x20C],6
	test ecx,ecx
	je Block37

 Block60:
	lea edx,[esp+0xA4]
	push edx
	lea edx,[esp+0xE8]
	push edx
	lea edx,[esp+0xBC]
	push edx
	lea edx,[esp+0x80]
	push edx
	lea edx,[esp+0x34]
	push edx
	push eax
	lea eax,[esp+0x10C]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0xF4],8
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0xFC]
	xor ecx,ecx
	mov word ptr [esp+0xF4],cx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea edx,[esp+0xF4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x20C],5
	jne Block67

 Block65:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0x20C],4
	jne Block71

 Block69:
	mov eax,dword ptr [esp+0x7C]
	xor edx,edx
	mov word ptr [esp+0x74],dx
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea eax,[esp+0x74]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block72:
	cmp word ptr [esp+0xB4],8
	mov byte ptr [esp+0x20C],3
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0xBC]
	xor ecx,ecx
	mov word ptr [esp+0xB4],cx
	test eax,eax
	je Block76

 Block74:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block75:
	lea edx,[esp+0xB4]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block76:
	cmp word ptr [esp+0xE4],8
	mov byte ptr [esp+0x20C],2
	jne Block79

 Block77:
	xor eax,eax
	mov word ptr [esp+0xE4],ax
	mov eax,dword ptr [esp+0xEC]
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea ecx,[esp+0xE4]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	cmp word ptr [esp+0xA4],8
	mov dword ptr [esp+0x20C],0xFFFFFFFF
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0xAC]
	xor edx,edx
	mov word ptr [esp+0xA4],dx
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea eax,[esp+0xA4]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block84:
	lea ecx,[esp+0x40]
	push ecx
	call edi
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block138

 Block85:
	mov eax,dword ptr [ebx+0x192C]
	mov ecx,3
	mov dword ptr [esp+0x20C],7
	mov word ptr [esp+0x94],cx
	mov dword ptr [esp+0x9C],eax
	mov edx,ecx
	mov word ptr [esp+0x84],dx
	mov dword ptr [esp+0x8C],eax
	lea eax,[esp+0xC4]
	push eax
	mov byte ptr [esp+0x210],9
	call edi
	lea ecx,[esp+0xC4]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block138

 Block86:
	lea edx,[esp+0xD4]
	push edx
	mov byte ptr [esp+0x210],0xA
	call edi
	lea eax,[esp+0xD4]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block138

 Block87:
	mov ecx,dword ptr [esp+0x34]
	mov eax,dword ptr [ecx]
	mov ecx,dword ptr [ebx+0x18D4]
	add eax,esi
	mov eax,dword ptr [eax+4]
	mov eax,dword ptr [eax+0x10]
	mov byte ptr [esp+0x20C],0xB
	test ecx,ecx
	je Block37

 Block88:
	lea edx,[esp+0x40]
	push edx
	lea edx,[esp+0x98]
	push edx
	lea edx,[esp+0x8C]
	push edx
	lea edx,[esp+0xD0]
	push edx
	lea edx,[esp+0xE4]
	push edx
	push eax
	lea eax,[esp+0x11C]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x104],8
	jne Block95

 Block89:
	mov eax,dword ptr [esp+0x10C]
	xor ecx,ecx
	mov word ptr [esp+0x104],cx
	test eax,eax
	je Block91

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block91:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block92:
	cmp word ptr [esp+0xD4],8
	mov byte ptr [esp+0x20C],0xA
	jne Block96

 Block93:
	xor eax,eax
	mov word ptr [esp+0xD4],ax
	mov eax,dword ptr [esp+0xDC]
	test eax,eax
	je Block97

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block95:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x104]
	push edx
	call esi
	jmp Block92

 Block96:
	lea ecx,[esp+0xD4]
	push ecx
	call esi

 Block97:
	cmp word ptr [esp+0xC4],8
	mov byte ptr [esp+0x20C],9
	jne Block100

 Block98:
	mov eax,dword ptr [esp+0xCC]
	xor edx,edx
	mov word ptr [esp+0xC4],dx
	test eax,eax
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea eax,[esp+0xC4]
	push eax
	call esi

 Block101:
	cmp word ptr [esp+0x84],8
	mov byte ptr [esp+0x20C],8
	jne Block104

 Block102:
	mov eax,dword ptr [esp+0x8C]
	xor ecx,ecx
	mov word ptr [esp+0x84],cx
	test eax,eax
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea edx,[esp+0x84]
	push edx
	call esi

 Block105:
	cmp word ptr [esp+0x94],8
	mov byte ptr [esp+0x20C],7
	jne Block108

 Block106:
	xor eax,eax
	mov word ptr [esp+0x94],ax
	mov eax,dword ptr [esp+0x9C]
	test eax,eax
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea ecx,[esp+0x94]
	push ecx
	call esi

 Block109:
	cmp word ptr [esp+0x40],8
	mov dword ptr [esp+0x20C],0xFFFFFFFF
	jne Block112

 Block110:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block113

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block112:
	lea eax,[esp+0x40]
	push eax
	call esi

 Block113:
	inc ebp
	cmp ebp,dword ptr [esp+0x20]
	jl Block56

 Block114:
	mov ecx,dword ptr [esp+0x38]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [eax+0x14]
	shl edx,5
	cmp dword ptr [edx+ecx+0xC],0
	mov ebp,0xC
	je Block120

 Block115:
	mov ecx,dword ptr [ebx+0x18D8]
	test ecx,ecx
	jne Block117

 Block116:
	push 0x80004003
	call _com_issue_error

 Block117:
	lea edx,[esp+0x14]
	push edx
	call IWzGr2DLayer::Getalpha
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0x20C],ebp
	mov dword ptr [esp+0x18],1
	mov word ptr [esp+0x40],cx
	mov dword ptr [esp+0x48],eax
	test eax,eax
	je Block119

 Block118:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block119:
	lea esi,[esp+0x40]
	mov dword ptr [esp+0x20C],0xD
	mov dword ptr [esp+0x18],3
	jmp Block121

 Block120:
	mov esi,offset _D_VTEMPTY

 Block121:
	mov ecx,dword ptr [ebx+0x18D0]
	test ecx,ecx
	jne Block123

 Block122:
	push 0x80004003
	call _com_issue_error

 Block123:
	lea edx,[esp+0x1C]
	push edx
	call IWzGr2DLayer::Getalpha
	mov edi,dword ptr [eax]
	mov dword ptr [esp+0x20C],0xE
	test edi,edi
	jne Block125

 Block124:
	push 0x80004003
	call _com_issue_error

 Block125:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esi+4]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esi+8]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esi+0xC]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push edi
	call eax
	test eax,eax
	jge Block127

 Block126:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block127:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x20C],0xD
	test eax,eax
	je Block129

 Block128:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block129:
	mov ebx,dword ptr [esp+0x18]
	mov dword ptr [esp+0x20C],ebp
	mov edi,8
	test bl,2
	je Block134

 Block130:
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x18],ebx
	cmp word ptr [esp+0x40],di
	jne Block133

 Block131:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block134

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block134

 Block133:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block134:
	mov dword ptr [esp+0x20C],0xFFFFFFFF
	test bl,1
	je Block137

 Block135:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block137

 Block136:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block137:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x64]
	push ecx
	call esi
	lea edx,[esp+0x64]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block139

 Block138:
	push eax
	call _com_issue_error

 Block139:
	lea eax,[esp+0x54]
	push eax
	mov dword ptr [esp+0x210],0xF
	call esi
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block141

 Block140:
	push eax
	call _com_issue_error

 Block141:
	mov edx,dword ptr [esp+0x50]
	mov ecx,dword ptr [edx+0x18D0]
	mov bl,0x10
	mov byte ptr [esp+0x20C],bl
	test ecx,ecx
	jne Block143

 Block142:
	push 0x80004003
	call _com_issue_error

 Block143:
	lea eax,[esp+0x18]
	push eax
	call IWzGr2DLayer::Getalpha
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x20C],0x11
	test esi,esi
	jne Block145

 Block144:
	push 0x80004003
	call _com_issue_error

 Block145:
	mov edx,dword ptr [esp+0x64]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x78]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x7C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x80]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [esp+0x64]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x78]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x7C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x80]
	push 0
	push 0
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x90]
	push esi
	call eax
	test eax,eax
	jge Block147

 Block146:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block147:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x20C],bl
	test eax,eax
	je Block149

 Block148:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block149:
	mov byte ptr [esp+0x20C],0xF
	cmp word ptr [esp+0x54],di
	jne Block152

 Block150:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block153

 Block151:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block153

 Block152:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block153:
	mov dword ptr [esp+0x20C],0xFFFFFFFF
	cmp word ptr [esp+0x64],di
	jne Block156

 Block154:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	test eax,eax
	je Block157

 Block155:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block157

 Block156:
	lea eax,[esp+0x64]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block157:
	mov ecx,dword ptr [esp+0x204]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1FC
	ret 0xC
}
}
// CAvatar::SetLayerColor
__SUB_CLASS_THIS(000601D0, __thiscall, 19982,  CAvatar, void, long) {
__asm {

 Block0:
	push ebx
	mov ebx,ecx
	push esi
	mov esi,dword ptr [ebx+0x18D0]
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push edi
	mov edi,dword ptr [esp+0x10]
	push edi
	push esi
	call ecx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov esi,dword ptr [ebx+0x18D4]
	test esi,esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push edi
	push esi
	call eax
	test eax,eax
	jge Block8

 Block7:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov esi,dword ptr [ebx+0x18D8]
	test esi,esi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push edi
	push esi
	call edx
	test eax,eax
	jge Block12

 Block11:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block12:
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CAvatar::IsActionHold
__SUB_CLASS_THIS(0005F070, __thiscall, 19992,  CAvatar, int32_t, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [esp+8]
	cmp eax,0x7A
	jne Block2

 Block1:
	test ecx,ecx
	jmp Block4

 Block2:
	cmp eax,0x1F
	jne Block5

 Block3:
	cmp ecx,2

 Block4:
	je Block7

 Block5:
	cmp ecx,4
	je Block7

 Block6:
	xor eax,eax
	ret 8

 Block7:
	mov eax,1
	ret 8
}
}
// CAvatar::SetLayerZ
__SUB_CLASS_THIS(00060120, __thiscall, 19982,  CAvatar, void, long) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x18D8],0
	je Block6

 Block1:
	push esi
	mov esi,dword ptr [ecx+0x18D8]
	test esi,esi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	mov ecx,dword ptr [esp+8]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xB4]
	push ecx
	push esi
	call edx
	test eax,eax
	jge Block5

 Block4:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block5:
	pop esi

 Block6:
	ret 4
}
}
// CAvatar::ResetOneTimeAction
__SUB_CLASS_THIS0(000666A0, __thiscall, 19962,  CAvatar, void) {
__asm {

 Block0:
	or eax,0xFFFFFFFF
	push 1
	mov dword ptr [ecx+0x5BC],eax
	mov dword ptr [ecx+0x5A8],eax
	call CAvatar::ClearActionLayer
	ret
}
}
// CAvatar::ConvertCharacterAction
__SUB_CLASS_THIS(00060070, __thiscall, 20004,  CAvatar, long, long) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	cmp esi,2
	jl Block2

 Block1:
	cmp esi,3
	jle Block19

 Block2:
	cmp esi,0x30
	je Block19

 Block3:
	cmp esi,0x31
	je Block19

 Block4:
	cmp esi,0x32
	je Block19

 Block5:
	cmp esi,0x33
	je Block19

 Block6:
	cmp esi,0x34
	je Block19

 Block7:
	cmp esi,0x35
	je Block19

 Block8:
	cmp esi,0x36
	je Block19

 Block9:
	cmp esi,0x7D
	je Block19

 Block10:
	test esi,esi
	jl Block12

 Block11:
	cmp esi,1
	jle Block19

 Block12:
	cmp esi,0x7C
	je Block19

 Block13:
	cmp esi,0x2A
	je Block19

 Block14:
	cmp esi,0x38
	je Block19

 Block15:
	call CAvatar::IsRidingWildHunterJaguar
	test eax,eax
	je Block18

 Block16:
	cmp esi,0x29
	jne Block18

 Block17:
	lea eax,[esi+0x10]
	pop esi
	ret 4

 Block18:
	mov eax,esi
	pop esi
	ret 4

 Block19:
	mov eax,0x30
	pop esi
	ret 4
}
}
// CAvatar::OnAvatarModified
__SUB_CLASS_THIS0(000647C0, __thiscall, 19962,  CAvatar, void) {
__asm {

 Block0:
	ret
}
}
// CAvatar::SetRidingVehicle
_SUB_EXCEPTION_HANDLER(6A790)
__SUB_CLASS_THIS(0006A790, __thiscall, 19981,  CAvatar, void, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_6A790
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
	mov esi,ecx
	cmp dword ptr [esi+0x500],0
	jne Block48

 Block1:
	mov eax,offset _D_RIDING_WILDHUNTE__219+4
	jmp Block3

 Block3:
	mov edi,dword ptr [esp+0x38]
	cmp dword ptr [eax],edi
	je Block7

 Block4:
	add eax,4
	cmp eax,offset _D_DB_DATE_19000101__227
	jl Block3

 Block5:
	mov eax,dword ptr [esi+0x570]
	push eax
	call is_wildhunter_jaguar_vehicle
	add esp,4
	test eax,eax
	jne Block7

 Block6:
	xor ebx,ebx
	jmp Block8

 Block7:
	mov ebx,1

 Block8:
	cmp edi,0x1D7AF0
	je Block11

 Block9:
	cmp dword ptr [esi+0x570],0x1D7AF0
	je Block11

 Block10:
	xor edi,edi
	jmp Block12

 Block11:
	mov edi,1

 Block12:
	push 0
	mov ecx,esi
	call CAvatar::ClearActionLayer
	cmp dword ptr [esp+0x3C],0
	je Block44

 Block13:
	test ebx,ebx
	jne Block15

 Block14:
	test edi,edi
	je Block44

 Block15:
	mov eax,dword ptr [esi+0x195C]
	mov edi,ebx
	neg edi
	sbb edi,edi
	and edi,0xFFFFFF38
	add edi,0xDAC
	mov ebp,ebx
	neg ebp
	sbb ebp,ebp
	and ebp,0xFFE17B7F
	add ebp,0x21612AA
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	jmp Block18

 Block17:
	xor eax,eax

 Block18:
	cmp dword ptr [eax+0x1A0],0
	je Block33

 Block19:
	mov eax,dword ptr [esp+0x38]
	test ebx,ebx
	je Block21

 Block20:
	neg eax
	sbb eax,eax
	add eax,0x100
	jmp Block22

 Block21:
	neg eax
	sbb eax,eax
	add eax,0x102

 Block22:
	cmp dword ptr [esp+0x38],0
	mov dword ptr [esi+0x5BC],eax
	je Block32

 Block23:
	lea ecx,[esp+0x18]
	push 0x96F
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	xor ebx,ebx
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x3C],ebx
	mov eax,dword ptr [eax]
	push ebp
	push edi
	push eax
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0x40],1
	call ZXString16::Format
	add esp,0x10
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebx
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x30],3
	cmp eax,ebx
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x30],4
	cmp eax,ebx
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block27:
	mov edi,dword ptr [esp+0x14]
	cmp edi,ebx
	je Block30

 Block28:
	mov eax,dword ptr [edi-4]
	shr eax,1
	cmp eax,ebx
	je Block30

 Block29:
	push ebx
	push ebx
	push ebx
	push 3
	push 0x7FFFFFFF
	push 0x3E8
	push ecx
	lea eax,[esi+0x18D8]
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push eax
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x54],5
	call CAvatar::GetOrigin
	mov eax,dword ptr [esi+0x5B8]
	not eax
	and eax,1
	push eax
	mov byte ptr [esp+0x54],4
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push edi
	call CAnimationDisplayer::Effect_SkillUse

 Block30:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp edi,ebx
	je Block44

 Block31:
	add edi,0xFFFFFFF4
	push edi
	jmp Block43

 Block32:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x14]
	push 0
	push 0x64
	push 6
	mov ecx,esi
	call eax
	jmp Block48

 Block33:
	lea ecx,[esp+0x18]
	push 0x9E7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	xor ebx,ebx
	mov dword ptr [esp+0x30],6
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [eax]
	push ebp
	push edi
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x40],7
	call ZXString16::Format
	add esp,0x10
	push eax
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x40],ebx
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x30],9
	cmp eax,ebx
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block35:
	mov eax,dword ptr [esp+0x18]
	mov bl,0xA
	mov byte ptr [esp+0x30],bl
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block37:
	mov ebp,dword ptr [esp+0x3C]
	test ebp,ebp
	je Block41

 Block38:
	mov eax,dword ptr [ebp-4]
	shr eax,1
	je Block41

 Block39:
	push 0
	push 0
	push 0
	push 3
	push 0x7FFFFFFF
	push 0x3E8
	push ecx
	lea edi,[esi+0x18D8]
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push edi
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x54],0xB
	call CAvatar::GetOrigin
	mov eax,dword ptr [esi+0x5B8]
	not eax
	and eax,1
	push eax
	mov byte ptr [esp+0x54],bl
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push ebp
	call CAnimationDisplayer::Effect_SkillUse
	push 0
	push 0
	push 0
	push 3
	push 0x7FFFFFFF
	push 0x3E8
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push edi
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x54],0xC
	call CAvatar::GetOrigin
	push offset _S_0
	lea edx,[esp+0x40]
	push edx
	lea ecx,[esp+0x64]
	mov byte ptr [esp+0x58],0xD
	call ZXString16::op_add_0
	mov ecx,dword ptr [esi+0x5B8]
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x50],0xE
	not ecx
	and ecx,1
	push ecx
	mov byte ptr [esp+0x54],0xF
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_SkillUse
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x30],bl
	test eax,eax
	je Block41

 Block40:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block41:
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test ebp,ebp
	je Block44

 Block42:
	add ebp,0xFFFFFFF4
	push ebp

 Block43:
	call ZXString16::_Release
	add esp,4

 Block44:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esi+0x570],eax
	test eax,eax
	jne Block47

 Block45:
	mov eax,dword ptr [esi+0x574]
	test eax,eax
	je Block47

 Block46:
	mov dword ptr [esi+0x570],eax

 Block47:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x14]
	push 0
	push 0x64
	push 6
	mov ecx,esi
	call edx

 Block48:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 8
}
}
// CAvatar::LoadCyclone
_SUB_EXCEPTION_HANDLER(64EE0)
__SUB_CLASS_THIS0(00064EE0, __thiscall, 19962,  CAvatar, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_64EE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x1EA20AB
	call CSkillInfo::GetSkill
	push 0
	push 0xFF
	push 0
	push ecx
	mov esi,eax
	mov eax,dword ptr [edi+0x18E0]
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [edi+0x18B0]
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x60],0
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	push 0
	lea eax,[esp+0x30]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x68],1
	call SKILLENTRY::GetSpecialUOL
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x60],2
	test eax,eax
	je Block6

 Block5:
	mov eax,dword ptr [eax]
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	push 0
	push eax
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0x6C],3
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0x18F4]
	add esp,0x28
	cmp esi,eax
	je Block12

 Block8:
	mov dword ptr [edi+0x18F4],eax
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block10:
	test esi,esi
	je Block12

 Block11:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block12:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test ecx,ecx
	je Block16

 Block15:
	call _xbstr_t::Data_t::Release

 Block16:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call esi
	lea ecx,[esp+0x2C]
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
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0x48],4
	call esi
	lea eax,[esp+0x1C]
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
	mov ecx,dword ptr [edi+0x18F4]
	mov byte ptr [esp+0x44],5
	test ecx,ecx
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x20]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x44],4
	cmp word ptr [esp+0x1C],si
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea edx,[esp+0x1C]
	push edx
	call edi

 Block26:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp word ptr [esp+0x2C],si
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x3C
	ret

 Block29:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block30:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x3C
	ret
}
}
// CAvatar::PrepareFaceLayer
_SUB_EXCEPTION_HANDLER(647D0)
__SUB_CLASS_THIS(000647D0, __thiscall, 19982,  CAvatar, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_647D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x84
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x98]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	xor ebx,ebx
	cmp dword ptr [ebp+0x5B0],ebx
	jne Block69

 Block1:
	mov dword ptr [esp+0x5C],offset ZLIST_COMPTR_CANVAS_VTABLE
	mov dword ptr [esp+0x64],ebx
	mov dword ptr [esp+0x68],ebx
	mov dword ptr [esp+0x6C],ebx
	mov esi,dword ptr [ebp+0x25]
	mov dword ptr [esp+0xA0],ebx
	cmp dword ptr [ebp+0x500],ebx
	je Block4

 Block2:
	mov eax,dword ptr [ebp+0x418]
	cmp eax,0xFFFFFFFF
	je Block4

 Block3:
	mov esi,eax

 Block4:
	mov ecx,dword ptr [ebp+0x540]
	lea eax,[ebp+0x538]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<long>::call
	mov ecx,dword ptr [ebp+0x11]
	add esp,8
	lea edx,[esp+0x5C]
	push edx
	push esi
	push eax
	mov eax,dword ptr [ebp+0x15]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	call CActionMan::LoadFaceLook
	cmp dword ptr [esp+0xA8],ebx
	jge Block6

 Block5:
	mov dword ptr [esp+0xA8],eax

 Block6:
	mov edx,3
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],0xFFFFFFFE
	mov ecx,dword ptr [ebp+0x18D0]
	mov byte ptr [esp+0xA0],1
	cmp ecx,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea eax,[esp+0x18]
	push eax
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xA0],0
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebx
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov eax,dword ptr [esp+0x68]
	mov edi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block52

 Block15:
	lea esp,[esp]

 Block16:
	lea edx,[esp+0x14]
	push edx
	call ZList<_x_com_ptr<IWzCanvas>>::GetNext
	mov esi,dword ptr [eax]
	add esp,4
	mov dword ptr [esp+0x90],esi
	cmp esi,ebx
	je Block18

 Block17:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block18:
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0xA4],2
	call edi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block55

 Block19:
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0xA4],3
	call edi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block55

 Block20:
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0xA4],4
	call edi
	lea ecx,[esp+0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block55

 Block21:
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0xA4],5
	call edi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block55

 Block22:
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x54]
	push eax
	lea ecx,[esp+0x24]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0xA8],esp
	push 0x1AA9
	push edx
	mov byte ptr [esp+0xBC],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xB4],7
	cmp esi,ebx
	je Block7

 Block23:
	lea eax,[esp+0x5C]
	push eax
	mov ecx,esi
	call IWzCanvas::Getproperty
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xB4],8
	cmp ecx,ebx
	je Block7

 Block24:
	lea edx,[esp+0x94]
	push edx
	mov byte ptr [esp+0xB8],9
	call IWzProperty::Getitem
	mov ecx,dword ptr [ebp+0x18D0]
	mov byte ptr [esp+0xB0],0xA
	cmp ecx,ebx
	je Block7

 Block25:
	push eax
	push esi
	lea eax,[esp+0x88]
	push eax
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x70],8
	jne Block28

 Block26:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	cmp eax,ebx
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea edx,[esp+0x70]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	cmp word ptr [esp+0x80],8
	mov byte ptr [esp+0xA0],9
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0x80],ax
	mov eax,dword ptr [esp+0x88]
	cmp eax,ebx
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0x80]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0xA0],6
	cmp eax,ebx
	je Block35

 Block34:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block35:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xA0],5
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebx
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block39:
	cmp word ptr [esp+0x4C],8
	mov byte ptr [esp+0xA0],4
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebx
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xA0],3
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebx
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block47:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0xA0],2
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,ebx
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0xA4],0
	call ecx
	cmp dword ptr [esp+0x14],ebx
	jne Block16

 Block52:
	mov edx,dword ptr [ebp+0x540]
	push edx
	lea eax,[ebp+0x538]
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block54

 Block53:
	mov ecx,ebp
	call CAvatar::RegisterNextBlink
	jmp Block68

 Block54:
	call get_update_time
	add eax,dword ptr [esp+0xA8]
	mov dword ptr [ebp+0x534],eax
	lea eax,[esp+0x28]
	push eax
	call edi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	lea edx,[esp+0x38]
	mov bl,0xB
	push edx
	mov byte ptr [esp+0xA4],bl
	call edi
	lea eax,[esp+0x38]
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
	mov ecx,dword ptr [ebp+0x18D0]
	mov byte ptr [esp+0xA0],0xC
	test ecx,ecx
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x3C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0xA0],bl
	cmp word ptr [esp+0x38],si
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov byte ptr [esp+0xA0],0
	cmp word ptr [esp+0x28],si
	jne Block67

 Block65:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block68

 Block66:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block68

 Block67:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block68:
	lea ecx,[esp+0x5C]
	mov dword ptr [esp+0xA0],0xFFFFFFFF
	mov dword ptr [esp+0x5C],offset ZLIST_COMPTR_CANVAS_VTABLE
	call ZList<_x_com_ptr<IWzCanvas>>::RemoveAll

 Block69:
	mov ecx,dword ptr [esp+0x98]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x90
	ret 4
}
}
