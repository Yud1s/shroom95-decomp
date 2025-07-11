#include "regen.hpp"
// Field_SnowBall.ipp
#include "Field_SnowBall.hpp"

// CField_SnowBall::CField_SnowBall
_SUB_EXCEPTION_HANDLER(13E410)
__SUB_CLASS_THIS0(0013E410, __thiscall, 143097,  CField_SnowBall, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_13E410
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
	call CField::_ctor_default
	push offset CSnowBall::~CSnowBall
	push offset CSnowBall::_ctor_default
	push 2
	push 0x38
	lea eax,[esi+0xDA4]
	xor edi,edi
	push eax
	mov dword ptr [esp+0x2C],edi
	int 3// TODO: 	mov dword ptr [esi],offset CField_SnowBall::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_SnowBall::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_SnowBall::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_SnowBall::`vftable'{for `ZRefCounted'}
	call __eh_vector_ctor_iterator
	push offset CSnowMan::~CSnowMan
	push offset CSnowMan::_ctor_default
	push 2
	push 0x28
	lea ecx,[esi+0xE14]
	push ecx
	mov byte ptr [esp+0x2C],1
	call __eh_vector_ctor_iterator
	int 3// TODO: 	mov dword ptr [esi+0xE70],offset ZList<CField_SnowBall::DAMAGEINFO>::`vftable'
	mov dword ptr [esi+0xE78],edi
	mov dword ptr [esi+0xE7C],edi
	mov dword ptr [esi+0xE80],edi
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
// CField_SnowBall::~CField_SnowBall
_SUB_EXCEPTION_HANDLER(1612D0)
__SUB_CLASS_THIS0(001612D0, __thiscall, 143099,  CField_SnowBall, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1612D0
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
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test eax,eax
	je Block13

 Block1:
	mov ebp,eax
	mov eax,dword ptr [ebp+4]
	mov eax,dword ptr [eax+0x10]
	lea ecx,[ebp+4]
	lea edx,[esp+0x20]
	push edx
	call eax
	xor edi,edi
	lea ebx,[esi+0xDC4]

 Block2:
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x20]
	push ecx
	push edx
	push ebx
	call PtInRect
	test eax,eax
	jne Block5

 Block3:
	inc edi
	add ebx,0x38
	cmp edi,1
	jle Block2

 Block4:
	jmp Block8

 Block5:
	add edi,2
	cmp dword ptr [esi+0xDA0],edi
	je Block8

 Block6:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+8]
	mov ecx,ebp
	call edx
	mov ecx,dword ptr [eax+0x35C]
	push ecx
	add eax,0x354
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jne Block8

 Block7:
	push 0x100
	lea ecx,[esp+0x2C]
	call COutPacket::_ctor_1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x28]
	push edx
	mov dword ptr [esp+0x44],0
	call CClientSocket::SendPacket
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block8:
	xor edi,edi
	lea ebx,[esi+0xE24]
	lea ecx,[ecx]

 Block9:
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x20]
	push eax
	push ecx
	push ebx
	call PtInRect
	test eax,eax
	jne Block12

 Block10:
	inc edi
	add ebx,0x28
	cmp edi,1
	jle Block9

 Block11:
	jmp Block13

 Block12:
	mov edi,dword ptr [ebp]
	push 1
	push 1
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0xFFFFFEF2
	push 0x10E
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0xB
	div ecx
	mov ecx,ebp
	add edx,0x1E
	push edx
	mov edx,dword ptr [edi+0x48]
	call edx

 Block13:
	call get_update_time
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [esi+0xE7C]
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block28

 Block14:
	mov ebx,dword ptr [esp+0x2C]
	mov ebp,dword ptr [esp+0x28]

 Block15:
	mov dword ptr [esp+0x20],eax
	lea eax,[esp+0x18]
	push eax
	call ZList<CField_SnowBall::DAMAGEINFO>::GetNext
	mov edx,dword ptr [esp+0x20]
	mov ecx,eax
	add esp,4
	sub edx,dword ptr [ecx+8]
	mov dword ptr [esp+0x14],ecx
	js Block27

 Block16:
	mov eax,dword ptr [ecx]
	cmp eax,3
	ja Block23

 Block17:
	cmp EAX, 0
je Block18
cmp EAX, 1
je Block19
cmp EAX, 2
je Block20
cmp EAX, 3
je Block21


 Block18:
	mov eax,dword ptr [esi+0xDCC]
	mov edx,dword ptr [esi+0xDD0]
	mov ebp,dword ptr [esi+0xDC4]
	mov ebx,dword ptr [esi+0xDC8]
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x34],edx
	jmp Block23

 Block19:
	mov eax,dword ptr [esi+0xE04]
	mov edx,dword ptr [esi+0xE08]
	mov ebp,dword ptr [esi+0xDFC]
	mov ebx,dword ptr [esi+0xE00]
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x34],edx
	jmp Block23

 Block20:
	mov ecx,dword ptr [esi+0xE30]
	mov eax,dword ptr [esi+0xE2C]
	mov ebp,dword ptr [esi+0xE24]
	mov ebx,dword ptr [esi+0xE28]
	mov dword ptr [esp+0x34],ecx
	mov dword ptr [esp+0x30],eax
	lea ecx,[esi+0xE14]
	jmp Block22

 Block21:
	mov edx,dword ptr [esi+0xE54]
	mov eax,dword ptr [esi+0xE58]
	mov ebp,dword ptr [esi+0xE4C]
	mov ebx,dword ptr [esi+0xE50]
	mov dword ptr [esp+0x30],edx
	mov dword ptr [esp+0x34],eax
	lea ecx,[esi+0xE3C]

 Block22:
	call CSnowMan::Hit
	mov ecx,dword ptr [esp+0x14]

 Block23:
	mov edx,dword ptr [esp+0x30]
	lea eax,[edx+ebp]
	cdq
	sub eax,edx
	mov edi,eax
	mov eax,dword ptr [ecx+4]
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	sar edi,1
	push 0
	test eax,eax
	jle Block25

 Block24:
	push 0
	push eax
	push ebx
	push edi
	call CAnimationDisplayer::Effect_HP
	jmp Block26

 Block25:
	push ebx
	push edi
	call CAnimationDisplayer::Effect_Miss

 Block26:
	push ebx
	push edi
	call get_sound_volume_by_pos
	push eax
	push 0
	push 0x18704
	call play_mob_sound
	mov eax,dword ptr [esp+0x34]
	add esp,0x14
	push eax
	lea ecx,[esi+0xE70]
	call ZList<CField_SnowBall::DAMAGEINFO>::RemoveAt

 Block27:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	jne Block15

 Block28:
	cmp dword ptr [esi+0xDA0],1
	jne Block30

 Block29:
	lea ecx,[esi+0xDA4]
	call CSnowBall::Update
	lea ecx,[esi+0xDDC]
	call CSnowBall::Update

 Block30:
	mov ecx,esi
	call CField::Update
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x30
	ret
}
}
// CField_SnowBall::SnowBallHit
__SUB_CLASS_THIS(001619A0, __thiscall, 143104,  CField_SnowBall, void, long, long, long) {
__asm {

 Block0:
	push esi
	add ecx,0xE70
	call ZList<CField_SnowBall::DAMAGEINFO>::AddTail_
	mov ecx,dword ptr [esp+0xC]
	mov esi,eax
	mov eax,dword ptr [esp+8]
	mov dword ptr [esi],eax
	mov dword ptr [esi+4],ecx
	call get_update_time
	add eax,dword ptr [esp+0x10]
	mov dword ptr [esi+8],eax
	pop esi
	ret 0xC
}
}
// CField_SnowBall::OnSnowBallState
__SUB_CLASS_THIS(00160AB0, __thiscall, 143103,  CField_SnowBall, void, CInPacket&) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	push esi
	mov esi,ecx
	xor eax,eax
	cmp dword ptr [esi+0xDA0],0xFFFFFFFF
	push edi
	mov edi,dword ptr [esp+0x18]
	sete al
	mov ecx,edi
	mov dword ptr [esp+0x10],eax
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [esi+0xDA0],ecx
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi+0xE20],eax
	call CInPacket::Decode4
	mov dword ptr [esi+0xE48],eax
	lea ebx,[esi+0xDA4]
	mov dword ptr [esp+0x18],2

 Block1:
	mov ecx,edi
	call CInPacket::Decode2
	mov ecx,edi
	movsx ebp,ax
	call CInPacket::Decode1
	cmp dword ptr [esp+0x10],0
	movzx ecx,al
	jne Block4

 Block2:
	cmp dword ptr [esi+0xDA0],1
	jne Block4

 Block3:
	xor eax,eax
	jmp Block5

 Block4:
	mov eax,1

 Block5:
	push eax
	push ecx
	push ebp
	mov ecx,ebx
	call CSnowBall::SetPos
	add ebx,0x38
	sub dword ptr [esp+0x18],1
	jne Block1

 Block6:
	mov eax,dword ptr [esi+0xDA0]
	sub eax,2
	je Block9

 Block7:
	sub eax,1
	jne Block11

 Block8:
	lea ecx,[esi+0xDDC]
	jmp Block10

 Block9:
	lea ecx,[esi+0xDA4]

 Block10:
	call CSnowBall::Win

 Block11:
	cmp dword ptr [esp+0x10],0
	je Block13

 Block12:
	mov ecx,edi
	call CInPacket::Decode2
	movzx edx,ax
	mov ecx,edi
	mov dword ptr [esi+0xE64],edx
	call CInPacket::Decode2
	movzx eax,ax
	mov ecx,edi
	mov dword ptr [esi+0xE68],eax
	call CInPacket::Decode2
	movzx ecx,ax
	mov dword ptr [esi+0xE6C],ecx

 Block13:
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 4
}
}
// CField_SnowBall::Init
_SUB_EXCEPTION_HANDLER(161A10)
__SUB_CLASS_THIS(00161A10, __thiscall, 143100,  CField_SnowBall, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_161A10
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
	mov edi,ecx
	mov dword ptr [ebp+0x3C],edi
	mov eax,dword ptr [ebp+0x74]
	push eax
	call CField::Init
	xor esi,esi
	push esi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x54],esp
	push 0x5E7
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [edi+0x30]
	mov dword ptr [ebp-4],esi
	cmp ecx,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x1C]
	push edx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x48]
	mov dword ptr [ebp+0x48],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov ebx,8
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x1C],bx
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,esi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	push esi
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x54],esp
	push 0x5E8
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov esi,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],4
	test esi,esi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[ebp+0x58]
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],5
	call get_int32
	add esp,8
	mov dword ptr [CSnowBall::ms_nDeltaX],eax
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp+0x58],bx
	jne Block14

 Block12:
	mov eax,dword ptr [ebp+0x60]
	xor ecx,ecx
	mov word ptr [ebp+0x58],cx
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea edx,[ebp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x54],esp
	push 0x3E5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x58]
	push ecx
	mov byte ptr [ebp-4],6
	mov ecx,esi
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],7
	call get_int32
	add esp,8
	mov dword ptr [ebp+0x30],eax
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp+0x58],bx
	jne Block18

 Block16:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block19:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x54],esp
	push 0x5E6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x58]
	mov byte ptr [ebp-4],8
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],9
	call get_int32
	add esp,8
	mov dword ptr [ebp+0x54],eax
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp+0x58],bx
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x5EC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x58]
	mov byte ptr [ebp-4],0xA
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xB
	call get_int32
	add esp,8
	mov dword ptr [CField_SnowBall::ms_rgBall],eax
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp+0x58],bx
	jne Block26

 Block24:
	mov eax,dword ptr [ebp+0x60]
	xor ecx,ecx
	mov word ptr [ebp+0x58],cx
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea edx,[ebp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x5ED
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x58]
	push ecx
	mov byte ptr [ebp-4],0xC
	mov ecx,esi
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xD
	call get_int32
	add esp,8
	mov dword ptr [CField_SnowBall::ms_rgBall+4],eax
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp+0x58],bx
	jne Block30

 Block28:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block31:
	lea ecx,[edi+0xDA4]
	xor ebx,ebx
	add edi,0xE14
	mov dword ptr [ebp+0x44],ecx
	mov dword ptr [ebp+0x40],edi
	jmp Block34

 Block33:
	mov esi,dword ptr [ebp+0x48]

 Block34:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp+0x58]
	mov byte ptr [ebp-4],0xE
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x4C],esi
	test eax,eax
	je Block37

 Block35:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x38]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x38]
	mov esi,ecx
	mov dword ptr [ebp+0x4C],esi
	test eax,eax
	jge Block37

 Block36:
	cmp eax,0x80004002
	jne Block4

 Block37:
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],0x11
	jne Block40

 Block38:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block41:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push 0x3E6
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0x12
	test esi,esi
	je Block1

 Block42:
	lea edx,[ebp+0x20]
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x11
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x13
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x20],8
	mov edi,eax
	mov byte ptr [ebp-4],0x11
	jne Block45

 Block43:
	xor eax,eax
	mov word ptr [ebp+0x20],ax
	mov eax,dword ptr [ebp+0x28]
	test eax,eax
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea ecx,[ebp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x50],esp
	push 0x5EE
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp+0x10]
	mov byte ptr [ebp-4],0x14
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x11
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x15
	jne Block48

 Block47:
	mov eax,dword ptr [eax+8]
	jmp Block49

 Block48:
	mov eax,offset _S___3

 Block49:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x50]
	mov dword ptr [ebp+0x50],0
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],0x17
	jne Block52

 Block50:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block53:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x34],esp
	push 0x5EF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],0x18
	mov ecx,esi
	mov byte ptr [ebp-4],0x17
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x19
	jne Block55

 Block54:
	mov eax,dword ptr [eax+8]
	jmp Block56

 Block55:
	mov eax,offset _S___3

 Block56:
	mov edx,dword ptr [ebp+0x30]
	mov ecx,dword ptr [ebp+0x40]
	push eax
	push edi
	push edx
	call CSnowMan::Init
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x17
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x34],esp
	push 0x5E7
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[ebp-0x2C]
	mov byte ptr [ebp-4],0x1A
	push eax
	mov ecx,esi
	mov byte ptr [ebp-4],0x17
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x1B
	jne Block62

 Block61:
	mov eax,dword ptr [eax+8]
	jmp Block63

 Block62:
	mov eax,offset _S___3

 Block63:
	mov edx,dword ptr [ebp+0x54]
	push eax
	lea ecx,[ebp+0x50]
	push ecx
	mov ecx,dword ptr [ebp+0x44]
	push edi
	push edx
	call CSnowBall::Init
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0x17
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x11
	test eax,eax
	je Block69

 Block68:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block69:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],3
	call eax
	add dword ptr [ebp+0x40],0x28
	add dword ptr [ebp+0x44],0x38
	inc ebx
	cmp ebx,1
	jle Block33

 Block70:
	mov ecx,dword ptr [ebp+0x3C]
	or eax,0xFFFFFFFF
	mov dword ptr [ecx+0xDA0],eax
	mov dword ptr [ebp-4],eax
	mov eax,dword ptr [ebp+0x48]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
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
// CField_SnowBall::OnPacket
__SUB_CLASS_THIS(00162290, __thiscall, 143101,  CField_SnowBall, void, long, CInPacket&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	lea eax,[edx-0x152]
	cmp eax,3
	ja Block6

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block3
cmp EAX, 2
je Block4
cmp EAX, 3
je Block5


 Block2:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField_SnowBall::OnSnowBallState
	ret 8

 Block3:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField_SnowBall::OnSnowBallHit
	ret 8

 Block4:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField_SnowBall::OnSnowBallMsg
	ret 8

 Block5:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField_SnowBall::OnSnowBallTouch
	ret 8

 Block6:
	mov dword ptr [esp+4],edx
	jmp  CField::OnPacket
}
}
// CField_SnowBall::BasicActionAttack
_SUB_EXCEPTION_HANDLER(1617B0)
__SUB_CLASS_THIS0(001617B0, __thiscall, 143102,  CField_SnowBall, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1617B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [TSingleton<CUserLocal>::ms_pInstance],0
	jne Block2

 Block1:
	xor eax,eax
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret

 Block2:
	mov dword ptr [esp+0xC],0
	push 0xFFFFFFFF
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x30],0
	call ZArray<tagRECT>::InsertBefore
	mov ecx,dword ptr [esi+0xDC4]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [esi+0xDC8]
	mov dword ptr [eax+4],edx
	mov ecx,dword ptr [esi+0xDCC]
	mov dword ptr [eax+8],ecx
	mov edx,dword ptr [esi+0xDD0]
	push 0xFFFFFFFF
	lea ecx,[esp+0x10]
	mov dword ptr [eax+0xC],edx
	call ZArray<tagRECT>::InsertBefore
	mov ecx,dword ptr [esi+0xDFC]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [esi+0xE00]
	mov dword ptr [eax+4],edx
	mov ecx,dword ptr [esi+0xE04]
	mov dword ptr [eax+8],ecx
	mov edx,dword ptr [esi+0xE08]
	push 0xFFFFFFFF
	lea ecx,[esp+0x10]
	mov dword ptr [eax+0xC],edx
	call ZArray<tagRECT>::InsertBefore
	mov ecx,dword ptr [esi+0xE24]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [esi+0xE28]
	mov dword ptr [eax+4],edx
	mov ecx,dword ptr [esi+0xE2C]
	mov dword ptr [eax+8],ecx
	mov edx,dword ptr [esi+0xE30]
	push 0xFFFFFFFF
	lea ecx,[esp+0x10]
	mov dword ptr [eax+0xC],edx
	call ZArray<tagRECT>::InsertBefore
	mov ecx,dword ptr [esi+0xE4C]
	mov dword ptr [eax],ecx
	mov edx,dword ptr [esi+0xE50]
	mov dword ptr [eax+4],edx
	mov ecx,dword ptr [esi+0xE54]
	mov dword ptr [eax+8],ecx
	mov edx,dword ptr [esi+0xE58]
	mov dword ptr [eax+0xC],edx
	push 0
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	call CUserLocal::TryDoingNormalAttack
	mov edi,eax
	test edi,edi
	jl Block10

 Block3:
	cmp dword ptr [esi+0xDA0],1
	jne Block10

 Block4:
	cmp edi,2
	jge Block6

 Block5:
	mov esi,dword ptr [esi+0xE64]
	jmp Block9

 Block6:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x64
	div ecx
	cmp edx,0x14
	jge Block8

 Block7:
	xor esi,esi
	jmp Block9

 Block8:
	xor eax,eax
	cmp edx,0x5A
	setge al
	mov esi,dword ptr [esi+eax*4+0xE68]

 Block9:
	push 0xFF
	lea ecx,[esp+0x18]
	call COutPacket::_ctor_1
	push edi
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x30],1
	call COutPacket::Encode1
	push esi
	lea ecx,[esp+0x18]
	call COutPacket::Encode2
	mov ecx,dword ptr [esp+0x10]
	push ecx
	lea ecx,[esp+0x18]
	call COutPacket::Encode2
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x14]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x2C],0
	call ZArray<unsigned char>::RemoveAll

 Block10:
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZArray<tagRECT>::RemoveAll
	mov eax,1
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret
}
}
// CField_SnowBall::OnSnowBallMsg
_SUB_EXCEPTION_HANDLER(162040)
__SUB_CLASS_THIS(00162040, __thiscall, 143103,  CField_SnowBall, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_162040
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
	mov edi,dword ptr [esp+0x38]
	mov ecx,edi
	call CInPacket::Decode1
	mov ecx,edi
	movzx esi,al
	call CInPacket::Decode1
	movzx edi,al
	lea eax,[edi-1]
	mov ebx,4
	cmp eax,ebx
	ja Block36

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block2
cmp EAX, 2
je Block2
cmp EAX, 3
je Block12
cmp EAX, 4
je Block23


 Block2:
	xor ebx,ebx
	mov ebp,offset _S_STORY
	cmp esi,ebx
	je Block4

 Block3:
	mov ebp,offset _S_MAPLE

 Block4:
	lea eax,[esp+0x1C]
	push 0xD75
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x38],ebx
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x30],1
	cmp esi,ebx
	je Block8

 Block5:
	cmp dword ptr [esi+4],ebx
	jne Block7

 Block6:
	mov ecx,dword ptr [esi]
	push ecx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block7:
	mov esi,dword ptr [esi+4]
	jmp Block9

 Block8:
	xor esi,esi

 Block9:
	push 8
	push edi
	push ebp
	lea edx,[esp+0x44]
	push esi
	push edx
	call ZXString<char>::Format
	add esp,0x10
	push eax
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x40]
	add esp,8
	mov byte ptr [esp+0x30],0
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov ecx,dword ptr [esp+0x1C]
	cmp ecx,ebx
	jmp Block34

 Block12:
	test esi,esi
	jne Block14

 Block13:
	mov ebp,offset _S_STORY
	mov edi,offset _S_MAPLE
	jmp Block15

 Block14:
	mov ebp,offset _S_MAPLE
	mov edi,offset _S_STORY

 Block15:
	lea eax,[esp+0x20]
	push 0xD76
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,2
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x14],0
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x30],3
	test esi,esi
	je Block19

 Block16:
	cmp dword ptr [esi+4],0
	jne Block18

 Block17:
	mov ecx,dword ptr [esi]
	push ecx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block18:
	mov esi,dword ptr [esi+4]
	jmp Block20

 Block19:
	xor esi,esi

 Block20:
	push 8
	push ebp
	push edi
	lea edx,[esp+0x20]
	push esi
	push edx
	call ZXString<char>::Format
	add esp,0x10
	push eax
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x1C]
	add esp,8
	mov byte ptr [esp+0x30],bl
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov ecx,dword ptr [esp+0x20]
	jmp Block33

 Block23:
	mov edi,offset _S_STORY
	test esi,esi
	je Block25

 Block24:
	mov edi,offset _S_MAPLE

 Block25:
	lea eax,[esp+0x24]
	push 0xD77
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x18],0
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x30],5
	test esi,esi
	je Block29

 Block26:
	cmp dword ptr [esi+4],0
	jne Block28

 Block27:
	mov ecx,dword ptr [esi]
	push ecx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi+4],eax

 Block28:
	mov esi,dword ptr [esi+4]
	jmp Block30

 Block29:
	xor esi,esi

 Block30:
	push 8
	push edi
	lea edx,[esp+0x20]
	push esi
	push edx
	call ZXString<char>::Format
	add esp,0xC
	push eax
	call CHATLOG_ADD
	mov eax,dword ptr [esp+0x20]
	add esp,8
	mov byte ptr [esp+0x30],bl
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	mov ecx,dword ptr [esp+0x24]

 Block33:
	test ecx,ecx

 Block34:
	je Block36

 Block35:
	call _xbstr_t::Data_t::Release

 Block36:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 4
}
}
// CField_SnowBall::OnSnowBallTouch
__SUB_CLASS_THIS(00160510, __thiscall, 143103,  CField_SnowBall, void, CInPacket&) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	push 1
	push 0x12C
	push 0x1D
	call CUserLocal::SetImpact
	ret 4
}
}
// CField_SnowBall::OnSnowBallHit
__SUB_CLASS_THIS(001619D0, __thiscall, 143103,  CField_SnowBall, void, CInPacket&) {
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
	movzx ebx,al
	call CInPacket::Decode2
	mov ecx,esi
	movzx ebp,ax
	call CInPacket::Decode2
	movzx eax,ax
	push eax
	push ebp
	push ebx
	mov ecx,edi
	call CField_SnowBall::SnowBallHit
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
