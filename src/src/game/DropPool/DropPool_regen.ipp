#include "regen.hpp"
// DropPool.ipp
#include "DropPool.hpp"

// CDropPool::~CDropPool
_SUB_EXCEPTION_HANDLER(1111D0)
__SUB_CLASS_THIS0(001111D0, __thiscall, 45869,  CDropPool, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1111D0
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
	int 3// TODO: 	mov dword ptr [esi],offset CDropPool::`vftable'
	mov eax,dword ptr [esi+0x4C]
	mov dword ptr [esp+0x14],5
	test eax,eax
	je Block2

 Block1:
	mov dword ptr [esi+0x4C],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	lea ecx,[esi+0x54]
	mov byte ptr [esp+0x14],4
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<tagPOINT>::`vftable'
	call ZList<tagPOINT>::RemoveAll
	mov eax,dword ptr [esi+0x4C]
	mov byte ptr [esp+0x14],3
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea ecx,[esi+0x34]
	mov byte ptr [esp+0x14],2
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, tagPOINT, unsigned long>::`vftable'
	call ZMap<unsigned long, tagPOINT, unsigned long>::RemoveAll
	lea ecx,[esi+0x20]
	mov byte ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<DROP>>::`vftable'
	call ZList<ZRef<DROP>>::RemoveAll
	lea ecx,[esi+8]
	mov byte ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<DROP>, unsigned long>::`vftable'
	call ZMap<unsigned long, ZRef<DROP>, unsigned long>::RemoveAll
	mov dword ptr [TSingleton<CDropPool>::ms_pInstance],0
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CDropPool::OnDropLeaveField
_SUB_EXCEPTION_HANDLER(111E20)
__SUB_CLASS_THIS(00111E20, __thiscall, 45888,  CDropPool, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_111E20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xF8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10C]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov ebp,dword ptr [esp+0x11C]
	mov ecx,ebp
	call CInPacket::Decode1
	mov ecx,ebp
	movsx edi,al
	call CInPacket::Decode4
	xor esi,esi
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x24],esi
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	lea ecx,[ebx+8]
	mov dword ptr [esp+0x11C],esi
	call ZMap<unsigned long, ZRef<DROP>, unsigned long>::GetAt
	test eax,eax
	jne Block3

 Block1:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x114],0xFFFFFFFF
	cmp eax,esi
	je Block37

 Block2:
	lea esi,[eax-0x10]
	jmp Block34

 Block3:
	mov esi,dword ptr [esp+0x24]
	cmp edi,2
	je Block8

 Block4:
	cmp edi,3
	je Block8

 Block5:
	cmp edi,5
	je Block8

 Block6:
	cmp edi,4
	jne Block9

 Block7:
	mov ecx,ebp
	call CInPacket::Decode2
	movsx esi,ax
	call get_update_time
	mov ecx,eax
	mov eax,dword ptr [esp+0x24]
	add ecx,esi
	mov dword ptr [eax+0x44],ecx
	lea ecx,[esp+0x20]
	mov dword ptr [eax+0x48],edi
	mov dword ptr [esp+0x114],0xFFFFFFFF
	call ZRef<DROP>::~ZRef<DROP>
	jmp Block37

 Block8:
	mov ecx,ebp
	call CInPacket::Decode4
	mov dword ptr [esi+0x58],eax

 Block9:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [eax+4],esi
	test esi,esi
	je Block11

 Block10:
	lea edx,[esi-0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block11:
	mov ecx,ebx
	call CDropPool::Remove
	cmp edi,5
	ja Block32

 Block12:
	cmp EDI, 0
je Block13
cmp EDI, 1
je Block32
cmp EDI, 2
je Block22
cmp EDI, 3
je Block26
cmp EDI, 4
je Block32
cmp EDI, 5
je Block27


 Block13:
	lea eax,[esi+0x3C]
	push eax
	lea ecx,[esp+0x34]
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	push offset _D_VTMISSING
	lea ecx,[esp+0xA8]
	mov byte ptr [esp+0x118],1
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x88]
	mov byte ptr [esp+0x118],2
	call Ztl_variant_t::_ctor_1
	lea ecx,[esi+0x68]
	mov byte ptr [esp+0x114],3
	call TSecType<long>::GetData
	lea ecx,[esi+0x74]
	mov edi,eax
	call TSecType<long>::GetData
	mov ebp,dword ptr [esp+0x30]
	xor ebx,ebx
	cmp ebp,ebx
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea ecx,[esp+0xA4]
	push ecx
	lea edx,[esp+0x88]
	push edx
	push edi
	push eax
	mov ecx,ebp
	call IWzVector2D::RelMove
	lea ecx,[esp+0x84]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xA4]
	mov byte ptr [esp+0x114],1
	call Ztl_variant_t::~Ztl_variant_t
	fldz
	sub esp,8
	fstp qword ptr [esp]
	mov ecx,ebp
	call IWzVector2D::Putra
	lea eax,[esi+0x38]
	push eax
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov ecx,3
	mov word ptr [esp+0x34],cx
	mov dword ptr [esp+0x3C],ebx
	mov edi,dword ptr [esp+0x18]
	mov byte ptr [esp+0x114],5
	cmp edi,ebx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x18]
	push eax
	mov ecx,edi
	call IWzGr2DLayer::Getcanvas
	lea ecx,[esp+0x34]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,3
	mov word ptr [esp+0x54],cx
	mov dword ptr [esp+0x5C],0xFFFFFFFE
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x20]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x11C],8
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x114],7
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0xB8]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x98]
	mov byte ptr [esp+0x118],9
	call Ztl_variant_t::_ctor_1
	mov eax,3
	mov word ptr [esp+0x44],ax
	mov dword ptr [esp+0x4C],ebx
	mov ecx,eax
	mov word ptr [esp+0x64],cx
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	mov edx,eax
	mov word ptr [esp+0x74],dx
	mov dword ptr [esp+0x7C],0x3E8
	mov ebx,dword ptr [esp+0x14]
	lea eax,[esp+0xB4]
	push eax
	lea ecx,[esp+0x98]
	push ecx
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x70]
	push eax
	lea ecx,[esp+0x84]
	push ecx
	push ebx
	lea edx,[esp+0x114]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0x130],0xD
	call IWzGr2DLayer::InsertCanvas
	lea ecx,[esp+0xFC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x74]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x64]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x44]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x94]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xB4]
	mov byte ptr [esp+0x114],7
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0xC8]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0xD8]
	mov byte ptr [esp+0x118],0xE
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0xC4]
	push eax
	lea ecx,[esp+0xD8]
	push ecx
	push 0
	mov ecx,edi
	mov byte ptr [esp+0x120],0xF
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0xD4]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0xC4]
	mov byte ptr [esp+0x114],7
	call Ztl_variant_t::~Ztl_variant_t
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],0
	push 0
	push ecx
	lea edx,[esp+0x24]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov byte ptr [esp+0x114],4
	test ebx,ebx
	je Block21

 Block20:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block21:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0x118],1
	call eax
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	mov byte ptr [esp+0x118],0
	call edx
	jmp Block32

 Block22:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x20B4]
	cmp dword ptr [esi+0x58],eax
	jne Block25

 Block23:
	lea ecx,[esp+0x2C]
	push 0x506
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov byte ptr [esp+0x11C],0x10
	call play_game_sound
	mov eax,dword ptr [esp+0x34]
	add esp,8
	mov byte ptr [esp+0x114],0
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	push 0xFFFFFFFF
	push ecx
	lea edx,[esi+0x38]
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push edx
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov edi,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	lea eax,[esp+0xEC]
	push eax
	lea ecx,[esi+0x68]
	mov byte ptr [esp+0x120],0x11
	call SECPOINT::op_tagpoint
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [eax]
	mov eax,dword ptr [esi+0x58]
	push ecx
	push edx
	push 0
	push eax
	jmp Block31

 Block26:
	push 0xFFFFFFFF
	push ecx
	lea edx,[esi+0x38]
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push edx
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov edi,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	lea eax,[esp+0xFC]
	push eax
	lea ecx,[esi+0x68]
	mov byte ptr [esp+0x120],0x12
	call SECPOINT::op_tagpoint
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [eax]
	mov eax,dword ptr [esi+0x58]
	push ecx
	push edx
	push eax
	push 0
	jmp Block31

 Block27:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ecx+0x20B4]
	cmp dword ptr [esi+0x58],eax
	jne Block30

 Block28:
	lea edx,[esp+0x28]
	push 0x506
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0x64
	push eax
	mov byte ptr [esp+0x11C],0x13
	call play_game_sound
	mov eax,dword ptr [esp+0x30]
	add esp,8
	mov byte ptr [esp+0x114],0
	test eax,eax
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block30:
	mov ecx,ebp
	call CInPacket::Decode4
	push eax
	push ecx
	lea eax,[esi+0x38]
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov edi,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	lea ecx,[esp+0xF4]
	push ecx
	lea ecx,[esi+0x68]
	mov byte ptr [esp+0x120],0x14
	call SECPOINT::op_tagpoint
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x58]
	push edx
	push eax
	push 0
	push ecx

 Block31:
	mov ecx,edi
	mov byte ptr [esp+0x12C],0
	call CAnimationDisplayer::RegisterAbsorbItemAnimation

 Block32:
	mov dword ptr [esp+0x114],0xFFFFFFFF
	test esi,esi
	je Block37

 Block33:
	add esi,0xFFFFFFF0

 Block34:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block37

 Block35:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block37

 Block36:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block37:
	mov ecx,dword ptr [esp+0x10C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x104
	ret 4
}
}
// CDropPool::GetMoneyIconType
__SUB_CLASS_THIS(0010F440, __thiscall, 45893,  CDropPool, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x32
	jge Block2

 Block1:
	xor eax,eax
	ret 4

 Block2:
	cmp eax,0x64
	jge Block4

 Block3:
	mov eax,1
	ret 4

 Block4:
	xor ecx,ecx
	cmp eax,0x3E8
	setge cl
	add ecx,2
	mov eax,ecx
	ret 4
}
}
// CDropPool::OnDropEnterField
_SUB_EXCEPTION_HANDLER(116670)
__SUB_CLASS_THIS(00116670, __thiscall, 45888,  CDropPool, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_116670
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x80
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x94]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x28],esi
	call get_update_time
	mov edi,dword ptr [esp+0xA4]
	xor ebp,ebp
	mov ecx,edi
	mov dword ptr [esp+0x40],eax
	mov dword ptr [esp+0x38],ebp
	call CInPacket::Decode1
	movzx ebx,al
	mov dword ptr [esp+0x18],ebx
	mov dword ptr [esp+0x5C],ebp
	mov ecx,edi
	mov dword ptr [esp+0x9C],ebp
	call CInPacket::Decode4
	mov ebp,eax
	lea eax,[esp+0x58]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	lea ecx,[esi+8]
	mov dword ptr [esp+0x3C],ebp
	call ZMap<unsigned long, ZRef<DROP>, unsigned long>::GetAt
	test eax,eax
	je Block9

 Block1:
	mov eax,dword ptr [esp+0x5C]
	cmp ebx,1
	je Block3

 Block2:
	cmp ebx,2
	jne Block5

 Block3:
	cmp byte ptr [eax+0x1D],0
	jne Block5

 Block4:
	mov byte ptr [eax+0x1D],1

 Block5:
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	test eax,eax
	je Block166

 Block6:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block166

 Block7:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block166

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax
	jmp Block166

 Block9:
	lea ecx,[esp+0x58]
	call ZRef<DROP>::_Alloc
	mov esi,dword ptr [esp+0x5C]
	mov byte ptr [esi+0x1C],bl
	cmp ebx,1
	je Block12

 Block10:
	cmp ebx,2
	je Block12

 Block11:
	xor al,al
	jmp Block13

 Block12:
	mov al,1

 Block13:
	mov byte ptr [esi+0x1D],al
	mov ecx,edi
	mov dword ptr [esi+0x20],ebp
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [esi+0x30],ecx
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi+0x34],eax
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi+0x24],eax
	call CInPacket::Decode1
	movzx edx,al
	mov ecx,edi
	mov dword ptr [esi+0x2C],edx
	call CInPacket::Decode2
	mov ecx,edi
	movsx ebp,ax
	call CInPacket::Decode2
	mov ecx,edi
	movsx ebx,ax
	call CInPacket::Decode4
	mov dword ptr [esi+0x28],eax
	xor edi,edi
	mov dword ptr [esp+0x80],0
	mov dword ptr [esp+0x88],edi
	mov dword ptr [esp+0x8C],edi
	mov dword ptr [esp+0x90],edi
	lea eax,[esp+0x80]
	push eax
	lea ecx,[ebx+1]
	push ecx
	lea edx,[ebp+1]
	push edx
	lea eax,[ebx-1]
	push eax
	lea ecx,[ebp-1]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov byte ptr [esp+0xB0],1
	call CWvsPhysicalSpace2D::GetCrossCandidate
	cmp dword ptr [esp+0x88],edi
	jne Block15

 Block14:
	mov dword ptr [esp+0x34],edi
	mov dword ptr [esp+0x30],edi
	jmp Block16

 Block15:
	mov edx,dword ptr [esp+0x8C]
	mov eax,dword ptr [edx+4]
	mov ecx,dword ptr [eax+0x2C]
	mov edx,dword ptr [eax+0x30]
	mov dword ptr [esp+0x30],ecx
	mov dword ptr [esp+0x34],edx

 Block16:
	lea edi,[esi+0x74]
	push ebp
	mov ecx,edi
	call TSecType<long>::SetData
	push ebx
	lea ebx,[esi+0x68]
	mov ecx,ebx
	call TSecType<long>::SetData
	mov ecx,edi
	call TSecType<long>::GetData
	lea edi,[esi+0xC]
	push eax
	mov ecx,edi
	call TSecType<long>::SetData
	mov ecx,ebx
	call TSecType<long>::GetData
	push eax
	mov ecx,esi
	call TSecType<long>::SetData
	cmp dword ptr [esp+0x18],0
	je Block20

 Block17:
	cmp dword ptr [esp+0x18],1
	je Block20

 Block18:
	cmp dword ptr [esp+0x18],3
	je Block20

 Block19:
	cmp dword ptr [esp+0x18],4
	jne Block23

 Block20:
	mov ebx,dword ptr [esp+0xA4]
	mov ecx,ebx
	call CInPacket::Decode2
	cwde
	push eax
	mov ecx,edi
	call TSecType<long>::SetData
	mov ecx,ebx
	call CInPacket::Decode2
	cwde
	push eax
	mov ecx,esi
	call TSecType<long>::SetData
	mov eax,dword ptr [esi+0x28]
	mov ecx,dword ptr [TSingleton<CMobPool>::ms_pInstance]
	push eax
	call CMobPool::GetMob
	test eax,eax
	je Block22

 Block21:
	mov edx,dword ptr [eax+4]
	mov edx,dword ptr [edx+0x10]
	lea ecx,[eax+4]
	lea eax,[esp+0x48]
	push eax
	call edx
	mov ebp,eax
	mov eax,dword ptr [ebp]
	push eax
	mov ecx,edi
	call TSecType<long>::SetData
	mov ebp,dword ptr [ebp+4]
	push ebp
	mov ecx,esi
	call TSecType<long>::SetData

 Block22:
	mov ecx,ebx
	call CInPacket::Decode2
	cwde
	mov dword ptr [esp+0x38],eax

 Block23:
	mov dword ptr [esp+0x14],0
	lea ecx,[esp+0x2C]
	push 0x3D2
	push ecx
	mov byte ptr [esp+0xA4],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	lea edx,[esp+0x18]
	push edx
	push eax
	mov byte ptr [esp+0xA8],3
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x38]
	add esp,0xC
	mov byte ptr [esp+0x9C],2
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x60]
	push eax
	call ebp
	lea ecx,[esp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	lea edx,[esp+0x48]
	push edx
	mov byte ptr [esp+0xA0],4
	call ebp
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	mov ecx,esi
	mov byte ptr [esp+0x9C],5
	call TSecType<long>::GetData
	mov ecx,edi
	mov ebx,eax
	call TSecType<long>::GetData
	mov ecx,dword ptr [esp+0x14]
	xor edi,edi
	cmp ecx,edi
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea edx,[esp+0x60]
	push edx
	lea edx,[esp+0x4C]
	push edx
	push ebx
	push eax
	call IWzVector2D::RelMove
	mov ebx,8
	mov byte ptr [esp+0x9C],4
	cmp word ptr [esp+0x48],bx
	jne Block34

 Block32:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,edi
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov byte ptr [esp+0x9C],2
	cmp word ptr [esp+0x60],bx
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	cmp eax,edi
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea eax,[esp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov dword ptr [esp+0x1C],edi
	xor ebx,ebx
	mov dword ptr [esp+0x24],ebx
	mov ecx,dword ptr [esi+0x34]
	mov byte ptr [esp+0x9C],7
	cmp dword ptr [esi+0x30],edi
	je Block65

 Block40:
	push edi
	push ecx
	mov ecx,dword ptr [esp+0x30]
	lea edx,[esp+0x34]
	push edx
	call CDropPool::GetMoneyIcon
	mov eax,dword ptr [eax]
	cmp eax,edi
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov ebx,eax
	push eax
	mov dword ptr [esp+0x28],ebx
	call edx

 Block42:
	mov eax,dword ptr [esp+0x2C]
	cmp eax,edi
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block44:
	cmp ebx,edi
	sete al
	test al,al
	je Block49

 Block45:
	mov byte ptr [esp+0x9C],6
	cmp ebx,edi
	je Block47

 Block46:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block47:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x9C],1
	cmp eax,edi
	je Block165

 Block48:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block165

 Block49:
	lea ecx,[esp+0x48]
	push ecx
	call ebp
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	mov eax,0xD
	mov byte ptr [esp+0x9C],8
	mov word ptr [esp+0x60],ax
	mov dword ptr [esp+0x68],ebx
	cmp ebx,edi
	je Block53

 Block52:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	push ebx
	call edx

 Block53:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x9C],9
	cmp ecx,edi
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	lea eax,[esp+0x48]
	push eax
	lea edx,[esp+0x64]
	push edx
	push edi
	push edi
	push edi
	push edi
	push edi
	lea eax,[esp+0x48]
	push eax
	call IWzGr2D::CreateLayer
	push eax
	lea ecx,[esp+0x20]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x2C]
	cmp eax,edi
	je Block57

 Block56:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block57:
	mov ebp,8
	mov byte ptr [esp+0x9C],8
	cmp word ptr [esp+0x60],bp
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	cmp eax,edi
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	mov byte ptr [esp+0x9C],7
	cmp word ptr [esp+0x48],bp
	jne Block64

 Block62:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,edi
	je Block103

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block64:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]
	jmp Block103

 Block65:
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[esp+0x24]
	push edx
	call CItemInfo::GetItemInfo
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	sete cl
	mov byte ptr [esp+0x9C],0xA
	test cl,cl
	je Block69

 Block66:
	mov byte ptr [esp+0x9C],7
	cmp eax,edi
	je Block68

 Block67:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block68:
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	jmp Block163

 Block69:
	push edi
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push 0x660
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xA8],0xB
	cmp ecx,edi
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	lea edx,[esp+0x6C]
	push edx
	mov byte ptr [esp+0xAC],0xA
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xA4],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x30],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block74

 Block72:
	cmp eax,0x80004002
	je Block74

 Block73:
	push eax
	call _com_issue_error

 Block74:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x9C],0xE
	jne Block77

 Block75:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	cmp eax,edi
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block78:
	mov edi,dword ptr [esp+0x2C]
	test edi,edi
	sete al
	push 0
	test al,al
	je Block95

 Block79:
	mov edx,dword ptr [esi+0x34]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push 0
	push edx
	lea eax,[esp+0x48]
	push eax
	call CItemInfo::GetItemIcon
	push eax
	lea ecx,[esp+0x28]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block81

 Block80:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block81:
	mov ebx,dword ptr [esp+0x24]
	test ebx,ebx
	sete al
	test al,al
	je Block88

 Block82:
	mov byte ptr [esp+0x9C],0xA
	test edi,edi
	je Block84

 Block83:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block84:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x9C],7
	test eax,eax
	je Block86

 Block85:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block86:
	mov byte ptr [esp+0x9C],6
	test ebx,ebx
	je Block162

 Block87:
	mov ecx,dword ptr [ebx]
	push ebx
	jmp Block161

 Block88:
	push offset _D_VTMISSING
	lea ecx,[esp+0x74]
	call Ztl_variant_t::_ctor_1
	mov eax,0xD
	mov byte ptr [esp+0x9C],0xF
	mov word ptr [esp+0x48],ax
	mov dword ptr [esp+0x50],ebx
	test ebx,ebx
	je Block90

 Block89:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	push ebx
	call edx

 Block90:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x9C],0x10
	test ecx,ecx
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	lea eax,[esp+0x70]
	push eax
	lea edx,[esp+0x4C]
	push edx
	push 0
	push 0
	push 0
	push 0
	push 0
	lea eax,[esp+0x58]
	push eax
	call IWzGr2D::CreateLayer
	push eax
	lea ecx,[esp+0x20]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block94

 Block93:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block94:
	lea ecx,[esp+0x48]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x70]
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block99

 Block95:
	push 0xFF
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x54],esp
	mov dword ptr [eax],0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x64],esp
	push 0
	push ecx
	mov dword ptr [eax],0
	mov eax,esp
	mov byte ptr [esp+0xC0],0x11
	mov dword ptr [esp+0x6C],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block97

 Block96:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block97:
	lea edx,[esp+0x60]
	push edx
	mov byte ptr [esp+0xC4],0xE
	call CAnimationDisplayer::LoadLayer_0
	add esp,0x28
	push eax
	lea ecx,[esp+0x20]
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block99

 Block98:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block99:
	mov byte ptr [esp+0x9C],0xA
	test edi,edi
	je Block101

 Block100:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block101:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x9C],7
	test eax,eax
	je Block103

 Block102:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block103:
	mov edi,dword ptr [esp+0x1C]
	test edi,edi
	sete al
	test al,al
	je Block110

 Block104:
	mov byte ptr [esp+0x9C],6
	test ebx,ebx
	je Block106

 Block105:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block106:
	mov byte ptr [esp+0x9C],2
	test edi,edi
	je Block108

 Block107:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block108:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x9C],1
	test eax,eax
	je Block165

 Block109:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block165

 Block110:
	test edi,edi
	jne Block112

 Block111:
	push 0x80004003
	call _com_issue_error

 Block112:
	mov ecx,edi
	call IWzGr2DLayer::Getheight
	cdq
	sub eax,edx
	mov ebp,eax
	mov ecx,esi
	sar ebp,1
	call TSecType<long>::GetData
	sub eax,ebp
	push eax
	mov ecx,esi
	call TSecType<long>::SetData
	mov ecx,edi
	call IWzGr2DLayer::Getheight
	cdq
	sub eax,edx
	mov ebp,eax
	lea ebx,[esi+0x68]
	mov ecx,ebx
	sar ebp,1
	call TSecType<long>::GetData
	sub eax,ebp
	push eax
	mov ecx,ebx
	call TSecType<long>::SetData
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [edi]
	imul eax,0xBB8
	sub eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [ecx+0xB4]
	lea edx,[eax+eax*4]
	lea eax,[edx+edx-0x3FFF8AD1]
	push eax
	push edi
	call ecx
	test eax,eax
	jge Block114

 Block113:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block114:
	cmp dword ptr [esp+0x18],4
	jne Block116

 Block115:
	push 0xC0041F79
	mov ecx,edi
	call IWzGr2DLayer::Putz

 Block116:
	mov eax,dword ptr [esp+0x14]
	mov edx,0xD
	mov word ptr [esp+0x60],dx
	mov dword ptr [esp+0x68],eax
	test eax,eax
	je Block118

 Block117:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block118:
	lea eax,[esp+0x60]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xA0],0x12
	call IWzVector2D::Putorigin
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x9C],7
	jne Block121

 Block119:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	test eax,eax
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea edx,[esp+0x60]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block122:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x48]
	push eax
	call ebp
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block124

 Block123:
	push eax
	call _com_issue_error

 Block124:
	lea edx,[esp+0x60]
	push edx
	mov byte ptr [esp+0xA0],0x13
	call ebp
	lea eax,[esp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block126

 Block125:
	push eax
	call _com_issue_error

 Block126:
	lea ecx,[esp+0x48]
	push ecx
	lea edx,[esp+0x64]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xA4],0x14
	call IWzGr2DLayer::Getheight
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	mov ecx,edi
	call IWzGr2DLayer::Getwidth
	cdq
	sub eax,edx
	sar eax,1
	neg eax
	push eax
	mov ecx,edi
	call IWzVector2D::RelMove
	mov ebp,8
	mov byte ptr [esp+0x9C],0x13
	cmp word ptr [esp+0x60],bp
	jne Block129

 Block127:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block130

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block129:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block130:
	mov byte ptr [esp+0x9C],7
	cmp word ptr [esp+0x48],bp
	jne Block133

 Block131:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block134

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block134

 Block133:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block134:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push edi
	call edx
	test eax,eax
	jge Block136

 Block135:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block136:
	lea eax,[esp+0x14]
	lea ecx,[esi+0x3C]
	push eax
	call _x_com_ptr<IWzVector2D>::op_assign_copy
	lea ecx,[esp+0x1C]
	lea ebp,[esi+0x38]
	push ecx
	mov ecx,ebp
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	cmp dword ptr [esi+0x30],0
	je Block138

 Block137:
	sub esp,8
	lea edx,[esp+0x60]
	mov ecx,esp
	mov dword ptr [esp+0x50],esp
	push edx
	call ZRef<DROP>::_ctor_copy
	mov ecx,dword ptr [esp+0x30]
	call CDropPool::MakeMoneyAnimation
	jmp Block142

 Block138:
	cmp byte ptr [esi+0x1C],4
	je Block142

 Block139:
	mov eax,3
	mov word ptr [esp+0x60],ax
	mov dword ptr [esp+0x68],0x12C
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x9C],0x15
	test ecx,ecx
	jne Block141

 Block140:
	push 0x80004003
	call _com_issue_error

 Block141:
	fldz
	lea edx,[esp+0x60]
	push edx
	sub esp,8
	fstp qword ptr [esp]
	call IWzVector2D::Rotate
	lea ecx,[esp+0x60]
	mov byte ptr [esp+0x9C],7
	call Ztl_variant_t::~Ztl_variant_t

 Block142:
	mov eax,dword ptr [esp+0x18]
	cmp eax,2
	jne Block147

 Block143:
	mov dword ptr [esi+0x48],3
	mov ecx,dword ptr [esi+0x3C]
	test ecx,ecx
	jne Block145

 Block144:
	push 0x80004003
	call _com_issue_error

 Block145:
	fldz
	sub esp,8
	fstp qword ptr [esp]
	call IWzVector2D::Putra
	mov ecx,edi
	call IWzShape2D::Getcount
	cmp eax,1
	jbe Block151

 Block146:
	push offset _D_VTMISSING
	lea ecx,[esp+0x64]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0xA0],0x16
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x60]
	push eax
	lea ecx,[esp+0x74]
	push ecx
	push 0x20
	mov ecx,ebp
	mov byte ptr [esp+0xA8],0x17
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x70]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x60]
	mov byte ptr [esp+0x9C],7
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block151

 Block147:
	mov dword ptr [esi+0x48],0
	push 0xFFFFFF
	mov ecx,ebp
	cmp eax,4
	jne Block149

 Block148:
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putcolor
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,esi
	mov ebx,eax
	call TSecType<long>::GetData
	xor edx,edx
	cmp dword ptr [esi+0x2C],3
	sete dl
	push edx
	push ebx
	push eax
	call calculate_parbolic_motion_duration
	add esp,0xC
	add eax,eax
	jmp Block150

 Block149:
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putcolor
	mov ecx,ebx
	call TSecType<long>::GetData
	mov ecx,esi
	mov ebx,eax
	call TSecType<long>::GetData
	xor ecx,ecx
	cmp dword ptr [esi+0x2C],3
	sete cl
	push ecx
	push ebx
	push eax
	call calculate_parbolic_motion_duration
	add esp,0xC

 Block150:
	mov dword ptr [esi+0x50],eax

 Block151:
	mov ecx,dword ptr [esp+0x40]
	fldz
	mov edx,dword ptr [esp+0x38]
	mov ebx,dword ptr [esp+0xA4]
	xor eax,eax
	mov dword ptr [esi+0x4C],eax
	add edx,ecx
	mov dword ptr [esi+0x40],edx
	add ecx,0xFFFFF448
	mov dword ptr [esi+0x54],ecx
	mov dword ptr [esi+0x58],eax
	fstp qword ptr [esi+0x60]
	cmp dword ptr [esi+0x30],eax
	jne Block153

 Block152:
	push 8
	lea eax,[esi+0x80]
	push eax
	mov ecx,ebx
	call CInPacket::DecodeBuffer
	jmp Block154

 Block153:
	mov dword ptr [esi+0x80],eax
	mov dword ptr [esi+0x84],eax

 Block154:
	mov ecx,ebx
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [esi+0x88],ecx
	mov ecx,ebx
	call CInPacket::Decode1
	movzx eax,al
	test eax,eax
	je Block158

 Block155:
	mov ebp,dword ptr [ebp]
	test ebp,ebp
	jne Block157

 Block156:
	push 0x80004003
	call _com_issue_error

 Block157:
	push 0xC0041F15
	mov ecx,ebp
	call IWzGr2DLayer::Putz

 Block158:
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],esi
	mov dword ptr [esp+0x50],esp
	add esi,0xFFFFFFF4
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x30]
	call CDropPool::Add
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x9C],6
	test eax,eax
	je Block160

 Block159:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block160:
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x9C],2
	push edi

 Block161:
	mov edx,dword ptr [ecx+8]
	call edx

 Block162:
	mov eax,dword ptr [esp+0x14]
	test eax,eax

 Block163:
	mov byte ptr [esp+0x9C],1
	je Block165

 Block164:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block165:
	lea ecx,[esp+0x80]
	mov byte ptr [esp+0x9C],0
	mov dword ptr [esp+0x80],0
	call ZList<ZRef<CStaticFoothold>>::RemoveAll
	lea ecx,[esp+0x58]
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	call ZRef<DROP>::~ZRef<DROP>

 Block166:
	mov ecx,dword ptr [esp+0x94]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x8C
	ret 4
}
}
// CDropPool::GetMoneyIcon
_SUB_EXCEPTION_HANDLER(112B30)
__SUB_CLASS_THIS(00112B30, __thiscall, 45894,  CDropPool, _x_com_ptr<IWzCanvas>*, _x_com_ptr<IWzCanvas>*, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_112B30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
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
	xor ebx,ebx
	mov dword ptr [ebp-0x18],ebx
	mov dword ptr [ebp-0x20],ebx
	lea eax,[ebp-0x14]
	push 0x6DF
	push eax
	mov dword ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0xC]
	mov edx,dword ptr [eax]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],2
	call CDropPool::GetMoneyIconType
	add eax,0x895440
	push eax
	push edx
	lea edx,[ebp-0x20]
	push edx
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x14]
	add esp,0xC
	mov byte ptr [ebp-4],1
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [ebp-0x20]
	push ebx
	push ebx
	push ecx
	mov dword ptr [ebp-0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x4C]
	mov byte ptr [ebp-4],3
	cmp ecx,ebx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[ebp-0x30]
	push edx
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x1C]
	mov dword ptr [ebp-0x1C],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block7

 Block5:
	cmp eax,0x80004002
	je Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	mov esi,8
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x30],si
	jne Block10

 Block8:
	xor eax,eax
	mov word ptr [ebp-0x30],ax
	mov eax,dword ptr [ebp-0x28]
	cmp eax,ebx
	je Block11

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block11

 Block10:
	lea ecx,[ebp-0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block11:
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x14],esp
	push 0x661
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],7
	cmp ecx,ebx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	lea eax,[ebp-0x50]
	push eax
	mov byte ptr [ebp-4],6
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],8
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp-0x14]
	mov dword ptr [ebp-0x14],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block16

 Block14:
	cmp eax,0x80004002
	je Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x50],si
	jne Block19

 Block17:
	mov eax,dword ptr [ebp-0x48]
	xor ecx,ecx
	mov word ptr [ebp-0x50],cx
	cmp eax,ebx
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea edx,[ebp-0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov esi,dword ptr [ebp-0x14]
	cmp esi,ebx
	je Block22

 Block21:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push ebx
	push ebx
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x10]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp-0x54],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea ecx,[ebp-0x40]
	push ecx
	mov byte ptr [ebp-4],0xB
	mov ecx,esi
	mov byte ptr [ebp-4],0xA
	call IWzProperty::Getitem
	mov ebx,1
	mov ecx,eax
	mov byte ptr [ebp-4],0xC
	mov dword ptr [ebp-0x18],ebx
	call Ztl_variant_t::GetUnknown
	jmp Block23

 Block22:
	xor eax,eax

 Block23:
	mov edi,dword ptr [ebp+8]
	push eax
	mov ecx,edi
	mov dword ptr [edi],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block26

 Block24:
	cmp eax,0x80004002
	je Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	or ebx,2
	mov dword ptr [ebp-0x18],ebx
	mov dword ptr [ebp-4],0xA
	test bl,1
	je Block31

 Block27:
	and ebx,0xFFFFFFFE
	cmp word ptr [ebp-0x40],8
	mov dword ptr [ebp-0x18],ebx
	jne Block30

 Block28:
	mov eax,dword ptr [ebp-0x38]
	xor edx,edx
	mov word ptr [ebp-0x40],dx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[ebp-0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov byte ptr [ebp-4],6
	test esi,esi
	je Block33

 Block32:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block33:
	mov eax,dword ptr [ebp-0x1C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],1
	call edx
	mov eax,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	mov eax,edi
	lea esp,[ebp-0x64]
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
	ret 0xC
}
}
// CDropPool::UpdateChasingDropForPet
_SUB_EXCEPTION_HANDLER(1152F0)
__SUB_CLASS_THIS0(001152F0, __thiscall, 45869,  CDropPool, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1152F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x6C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x80]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x18],ecx
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [esp+0x14],eax
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	xor ebx,ebx
	cmp eax,ebx
	je Block63

 Block1:
	mov ebp,eax
	mov dword ptr [esp+0x68],0
	mov dword ptr [esp+0x70],ebx
	mov dword ptr [esp+0x74],ebx
	mov dword ptr [esp+0x78],ebx
	mov dword ptr [esp+0x88],ebx
	xor edi,edi

 Block2:
	mov ecx,dword ptr [ebp+0x2E44]
	mov esi,dword ptr [ecx+edi+4]
	cmp esi,ebx
	je Block10

 Block3:
	mov edx,dword ptr [esi+0x160]
	push edx
	lea eax,[esi+0x158]
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block9

 Block4:
	lea ecx,[esp+0x68]
	call ZList<CPet *>::AddTail_
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [eax],esi
	call CPet::GetVecCtrl_0
	mov eax,dword ptr [eax]
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	jmp Block7

 Block6:
	xor eax,eax

 Block7:
	mov dword ptr [eax+0x30C],ebx
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebx
	je Block9

 Block8:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block9:
	add edi,8
	cmp edi,0x18
	jl Block2

 Block10:
	cmp dword ptr [esp+0x70],ebx
	je Block62

 Block11:
	mov edx,dword ptr [ebp+4]
	mov edx,dword ptr [edx+0x10]
	lea ecx,[ebp+4]
	lea eax,[esp+0x48]
	push eax
	call edx
	call get_update_time
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [esp+0x18]
	mov eax,dword ptr [eax+0x2C]
	mov dword ptr [esp+0x2C],eax
	cmp eax,ebx
	je Block62

 Block12:
	lea ecx,[esp+0x2C]
	push ecx
	call ZList<ZRef<DROP>>::GetNext
	mov edi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x44],edi
	cmp edi,ebx
	je Block14

 Block13:
	lea edx,[edi-0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov byte ptr [esp+0x88],1
	cmp dword ptr [edi+0x88],ebx
	je Block54

 Block15:
	mov eax,dword ptr [esp+0x74]
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x20],0xFFFFFFFF
	mov dword ptr [esp+0x24],eax
	cmp eax,ebx
	je Block53

 Block16:
	lea ecx,[ecx]

 Block17:
	mov dword ptr [esp+0x30],eax
	lea eax,[esp+0x24]
	push eax
	call ZList<CPet *>::GetNext
	mov esi,dword ptr [eax]
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	lea ecx,[esi+4]
	add esp,4
	lea eax,[esp+0x38]
	push eax
	call edx
	mov eax,dword ptr [esp+0x48]
	lea ebx,[eax-0x7D]
	add eax,0x7D
	mov dword ptr [esp+0x60],eax
	mov eax,dword ptr [esi+0x154]
	push eax
	lea ecx,[esi+0x14C]
	push ecx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block19

 Block18:
	sub ebx,0x96
	add dword ptr [esp+0x60],0x96

 Block19:
	mov edx,dword ptr [esi+0x148]
	push edx
	lea eax,[esi+0x140]
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	cmp dword ptr [edi+0x30],0
	mov ebp,eax
	jne Block23

 Block20:
	mov ecx,dword ptr [esi+0x13C]
	push ecx
	lea edx,[esi+0x134]
	push edx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	jne Block22

 Block21:
	test ebp,ebp
	je Block44

 Block22:
	mov eax,dword ptr [edi+0x34]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsPickUpBlockItem
	test eax,eax
	jne Block44

 Block23:
	mov ecx,dword ptr [esp+0x1C]
	sub ecx,dword ptr [edi+0x40]
	cmp ecx,0x3A98
	jle Block25

 Block24:
	test ebp,ebp
	jne Block30

 Block25:
	cmp dword ptr [edi+0x28],0
	je Block30

 Block26:
	mov eax,dword ptr [edi+0x2C]
	test eax,eax
	jne Block28

 Block27:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edx+0x20B4]
	cmp dword ptr [edi+0x24],ecx
	jne Block44

 Block28:
	cmp eax,1
	jne Block30

 Block29:
	mov eax,dword ptr [esp+0x14]
	mov eax,dword ptr [eax+0x3604]
	cmp dword ptr [edi+0x24],eax
	jne Block44

 Block30:
	mov ecx,dword ptr [esi+0x184]
	push ecx
	add esi,0x17C
	push esi
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block34

 Block31:
	cmp dword ptr [edi+0x30],0
	mov eax,0x7FFFFFFF
	jne Block33

 Block32:
	mov eax,dword ptr [edi+0x34]

 Block33:
	mov ecx,dword ptr [esp+0x18]
	push eax
	call CDropPool::IsInExceptionList
	test eax,eax
	jne Block44

 Block34:
	cmp byte ptr [edi+0x1D],0
	je Block44

 Block35:
	cmp dword ptr [edi+0x48],3
	jne Block44

 Block36:
	mov edx,dword ptr [esp+0x1C]
	sub edx,dword ptr [edi+0x54]
	cmp edx,0xBB8
	jl Block44

 Block37:
	lea esi,[edi+0x68]
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,dword ptr [esp+0x3C]
	add ecx,0xFFFFFFCE
	cmp eax,ecx
	jle Block44

 Block38:
	mov ecx,esi
	call TSecType<long>::GetData
	mov edx,dword ptr [esp+0x3C]
	add edx,0xA
	cmp eax,edx
	jge Block44

 Block39:
	lea esi,[edi+0x74]
	mov ecx,esi
	call TSecType<long>::GetData
	cmp eax,ebx
	jle Block44

 Block40:
	mov ecx,esi
	call TSecType<long>::GetData
	cmp eax,dword ptr [esp+0x60]
	jge Block44

 Block41:
	mov ecx,esi
	call TSecType<long>::GetData
	sub eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esp+0x20]
	cdq
	xor eax,edx
	sub eax,edx
	cmp ecx,0xFFFFFFFF
	je Block43

 Block42:
	cmp eax,ecx
	jge Block44

 Block43:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],ecx
	mov dword ptr [esp+0x20],eax

 Block44:
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	jne Block17

 Block45:
	mov ebp,dword ptr [esp+0x28]
	test ebp,ebp
	je Block52

 Block46:
	mov esi,dword ptr [ebp]
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	lea ecx,[esi+4]
	lea eax,[esp+0x50]
	push eax
	call edx
	lea eax,[esp+0x34]
	push eax
	mov ecx,esi
	call CPet::GetVecCtrl_0
	mov esi,eax
	lea ecx,[edi+0x74]
	mov byte ptr [esp+0x88],2
	call TSecType<long>::GetData
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block48

 Block47:
	add ecx,0xFFFFFFF4
	jmp Block49

 Block48:
	xor ecx,ecx

 Block49:
	xor edx,edx
	cmp eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x88],1
	setg dl
	lea edx,[edx+edx-1]
	mov eax,edx
	mov dword ptr [ecx+0x30C],eax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block51

 Block50:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block51:
	push ebp
	lea ecx,[esp+0x6C]
	call ZList<CPet *>::RemoveAt

 Block52:
	xor ebx,ebx

 Block53:
	cmp dword ptr [esp+0x70],ebx
	je Block59

 Block54:
	lea esi,[edi-0x10]
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x8C],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block57

 Block55:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block57

 Block56:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block57:
	mov dword ptr [esp+0x44],ebx
	cmp dword ptr [esp+0x2C],ebx
	jne Block12

 Block58:
	jmp Block62

 Block59:
	lea esi,[edi-0x10]
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x8C],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block62

 Block60:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block62

 Block61:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block62:
	lea ecx,[esp+0x68]
	mov dword ptr [esp+0x88],0xFFFFFFFF
	mov dword ptr [esp+0x68], 0
	call ZList<CPet *>::RemoveAll

 Block63:
	mov ecx,dword ptr [esp+0x80]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CDropPool::Update
_SUB_EXCEPTION_HANDLER(115890)
__SUB_CLASS_THIS(00115890, __thiscall, 45870,  CDropPool, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_115890
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x128
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x13C]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x20],ecx
	mov eax,dword ptr [ecx+0x2C]
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block149

 Block1:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push eax
	call ZList<ZRef<DROP>>::GetNext
	mov esi,dword ptr [eax+4]
	xor ebp,ebp
	add esp,4
	mov dword ptr [esp+0x138],esi
	cmp esi,ebp
	je Block3

 Block2:
	lea ecx,[esi-0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block3:
	fld qword ptr [__real_4079000000000000]
	cmp dword ptr [esi+0x2C],3
	fstp qword ptr [esp+0x38]
	mov dword ptr [esp+0x144],ebp
	jne Block5

 Block4:
	fld qword ptr [__real_4086800000000000]
	fstp qword ptr [esp+0x38]

 Block5:
	mov eax,dword ptr [esi+0x48]
	cmp eax,4
	ja Block140

 Block6:
	cmp EAX, 0
je Block7
cmp EAX, 1
je Block44
cmp EAX, 2
je Block92
cmp EAX, 3
je Block120
cmp EAX, 4
je Block130


 Block7:
	mov edx,dword ptr [esp+0x14C]
	sub edx,dword ptr [esi+0x40]
	test edx,edx
	jle Block140

 Block8:
	mov dword ptr [esi+0x48],1
	mov edi,dword ptr [esi+0x38]
	cmp edi,ebp
	je Block150

 Block9:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push edi
	call ecx
	cmp eax,ebp
	jge Block11

 Block10:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block11:
	lea edx,[esp+0x8C]
	push edx
	call ebx
	lea eax,[esp+0x8C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block151

 Block12:
	lea ecx,[esp+0x4C]
	push ecx
	mov byte ptr [esp+0x148],1
	call ebx
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block151

 Block13:
	mov ecx,dword ptr [esi+0x38]
	mov byte ptr [esp+0x144],2
	cmp ecx,ebp
	je Block150

 Block14:
	lea eax,[esp+0x8C]
	push eax
	lea edx,[esp+0x50]
	push edx
	push 0x20
	call IWzGr2DLayer::Animate
	mov edi,8
	mov byte ptr [esp+0x144],1
	cmp word ptr [esp+0x4C],di
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebp
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[esp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov byte ptr [esp+0x144],0
	cmp word ptr [esp+0x8C],di
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x94]
	xor edx,edx
	mov word ptr [esp+0x8C],dx
	cmp eax,ebp
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea eax,[esp+0x8C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block22:
	cmp byte ptr [esi+0x1C],3
	jne Block39

 Block23:
	lea ecx,[esp+0xAC]
	push ecx
	call ebx
	lea edx,[esp+0xAC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block151

 Block24:
	mov edi,dword ptr [esi+0x38]
	mov byte ptr [esp+0x144],3
	cmp edi,ebp
	je Block150

 Block25:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x58]
	lea ecx,[esp+0x28]
	push ecx
	push edi
	mov dword ptr [esp+0x30],ebp
	call edx
	cmp eax,ebp
	jge Block27

 Block26:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block27:
	mov eax,dword ptr [esp+0x28]
	add eax,0x3E8
	mov ecx,3
	mov word ptr [esp+0x10C],cx
	mov dword ptr [esp+0x114],eax
	mov ecx,dword ptr [esi+0x38]
	mov byte ptr [esp+0x144],4
	cmp ecx,ebp
	je Block150

 Block28:
	lea edx,[esp+0x40]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x144],5
	cmp ecx,ebp
	je Block150

 Block29:
	lea eax,[esp+0xAC]
	push eax
	lea edx,[esp+0x110]
	push edx
	push ebp
	push ebp
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x144],4
	cmp eax,ebp
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
	mov edi,8
	mov byte ptr [esp+0x144],3
	cmp word ptr [esp+0x10C],di
	jne Block34

 Block32:
	xor eax,eax
	mov word ptr [esp+0x10C],ax
	mov eax,dword ptr [esp+0x114]
	cmp eax,ebp
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea ecx,[esp+0x10C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov byte ptr [esp+0x144],0
	cmp word ptr [esp+0xAC],di
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0xB4]
	xor edx,edx
	mov word ptr [esp+0xAC],dx
	cmp eax,ebp
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea eax,[esp+0xAC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block39:
	cmp byte ptr [esi+0x1C],1
	jne Block140

 Block40:
	mov ecx,dword ptr [esp+0x14C]
	sub ecx,dword ptr [_D_TLASTSFX]
	cmp ecx,0x12C
	jle Block140

 Block41:
	lea edx,[esp+0x34]
	push 0x504
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov edi,eax
	mov ecx,esi
	mov byte ptr [esp+0x144],6
	call TSecType<long>::GetData
	lea ecx,[esi+0xC]
	mov ebp,eax
	call TSecType<long>::GetData
	mov edi,dword ptr [edi]
	push ebp
	push eax
	call get_sound_volume_by_pos
	push eax
	push edi
	call play_game_sound
	mov eax,dword ptr [esp+0x44]
	add esp,0x10
	mov byte ptr [esp+0x144],0
	test eax,eax
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block43:
	mov eax,dword ptr [esp+0x14C]
	mov dword ptr [_D_TLASTSFX],eax
	jmp Block140

 Block44:
	add dword ptr [esi+0x4C],0x1E
	lea ebx,[esi+0x74]
	mov ecx,ebx
	call TSecType<long>::GetData
	lea ebp,[esi+0xC]
	mov ecx,ebp
	mov edi,eax
	call TSecType<long>::GetData
	sub edi,eax
	cmp byte ptr [esi+0x1C],4
	mov eax,dword ptr [esi+0x4C]
	mov dword ptr [esp+0x14],edi
	fild dword ptr [esp+0x14]
	mov dword ptr [esp+0x14],eax
	fmul qword ptr [__real_3fe0000000000000]
	fstp qword ptr [esp+0x44]
	fild dword ptr [esp+0x14]
	fdiv qword ptr [__real_408f400000000000]
	fst qword ptr [esp+0x12C]
	jne Block46

 Block45:
	fdiv qword ptr [__real_4008000000000000]
	fstp qword ptr [esp+0x12C]
	jmp Block47

 Block46:
	fstp st(0)

 Block47:
	cmp eax,0x1F4
	jle Block51

 Block48:
	mov ecx,dword ptr [esi+0x50]
	add eax,0xFFFFFE0C
	mov dword ptr [esp+0x14],eax
	fild dword ptr [esp+0x14]
	sub ecx,0x1F4
	mov dword ptr [esp+0x14],ecx
	fild dword ptr [esp+0x14]
	fdivp st(1),st(0)
	fld1
	fcom
	fnstsw ax
	test ah,0x41
	jne Block50

 Block49:
	fstp st(0)
	jmp Block52

 Block50:
	fstp st(1)
	jmp Block52

 Block51:
	fldz

 Block52:
	mov ecx,ebp
	fstp qword ptr [esp+0x18]
	call TSecType<long>::GetData
	fild dword ptr [esi+0x4C]
	mov dword ptr [esp+0x14],eax
	fdiv qword ptr [__real_407f400000000000]
	fld1
	fcom
	fnstsw ax
	test ah,0x41
	jne Block54

 Block53:
	fstp st(0)
	jmp Block55

 Block54:
	fstp st(1)

 Block55:
	fadd qword ptr [esp+0x18]
	fmul qword ptr [esp+0x44]
	fiadd dword ptr [esp+0x14]
	fldz
	fcomp
	fnstsw ax
	test ah,0x41
	jp Block57

 Block56:
	fadd qword ptr [__real_3fe0000000000000]
	jmp Block58

 Block57:
	fsub qword ptr [__real_3fdffffffeed1f41]

 Block58:
	call __ftol2_sse
	mov ecx,esi
	mov dword ptr [esp+0x14],eax
	call TSecType<long>::GetData
	mov dword ptr [esp+0x18],eax
	fild dword ptr [esp+0x18]
	fld qword ptr [esp+0x12C]
	fld qword ptr [esp+0x38]
	fmul st,st(1)
	fsubp st(2),st
	fld qword ptr [__real_4079000000000000]
	fmul st,st(1)
	fmulp st(1),st(0)
	faddp st(1),st(0)
	fldz
	fcomp
	fnstsw ax
	test ah,0x41
	jp Block60

 Block59:
	fadd qword ptr [__real_3fe0000000000000]
	jmp Block61

 Block60:
	fsub qword ptr [__real_3fdffffffeed1f41]

 Block61:
	call __ftol2_sse
	mov edx,dword ptr [esi+0x4C]
	cmp edx,dword ptr [esi+0x50]
	mov ebp,eax
	jl Block80

 Block62:
	mov ecx,esi
	call TSecType<long>::GetData
	lea ebp,[esi+0x68]
	mov ecx,ebp
	mov edi,eax
	call TSecType<long>::GetData
	cmp edi,eax
	jl Block79

 Block63:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x6C]
	push eax
	mov dword ptr [esi+0x48],3
	call edi
	lea ecx,[esp+0x6C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block151

 Block64:
	lea edx,[esp+0xEC]
	push edx
	mov byte ptr [esp+0x148],7
	call edi
	lea eax,[esp+0xEC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block151

 Block65:
	mov ecx,ebp
	mov byte ptr [esp+0x144],8
	call TSecType<long>::GetData
	mov ecx,ebx
	mov edi,eax
	call TSecType<long>::GetData
	mov ecx,dword ptr [esi+0x3C]
	test ecx,ecx
	je Block150

 Block66:
	lea edx,[esp+0x6C]
	push edx
	lea edx,[esp+0xF0]
	push edx
	push edi
	push eax
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x144],7
	cmp word ptr [esp+0xEC],di
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [esp+0xEC],ax
	mov eax,dword ptr [esp+0xF4]
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[esp+0xEC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov byte ptr [esp+0x144],0
	cmp word ptr [esp+0x6C],di
	jne Block74

 Block71:
	mov eax,dword ptr [esp+0x74]
	xor edx,edx
	mov word ptr [esp+0x6C],dx

 Block72:
	test eax,eax
	je Block76

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block76

 Block74:
	lea eax,[esp+0x6C]

 Block75:
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block76:
	mov edi,dword ptr [esi+0x3C]
	test edi,edi
	je Block150

 Block77:
	fldz
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0x80]
	sub esp,8
	fstp qword ptr [esp]
	push edi
	call edx
	test eax,eax
	jge Block140

 Block78:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex
	jmp Block140

 Block79:
	mov dword ptr [esi+0x48],2
	mov dword ptr [esi+0x4C],0
	jmp Block140

 Block80:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x9C]
	push eax
	call edi
	lea ecx,[esp+0x9C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block151

 Block81:
	lea edx,[esp+0x5C]
	push edx
	mov byte ptr [esp+0x148],9
	call edi
	lea eax,[esp+0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block151

 Block82:
	mov ecx,dword ptr [esi+0x3C]
	mov byte ptr [esp+0x144],0xA
	test ecx,ecx
	je Block150

 Block83:
	lea edx,[esp+0x9C]
	push edx
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x60]
	push eax
	push ebp
	push edx
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x144],9
	cmp word ptr [esp+0x5C],di
	jne Block86

 Block84:
	xor eax,eax
	mov word ptr [esp+0x5C],ax
	mov eax,dword ptr [esp+0x64]
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea ecx,[esp+0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block87:
	mov byte ptr [esp+0x144],0
	cmp word ptr [esp+0x9C],di
	jne Block91

 Block88:
	mov eax,dword ptr [esp+0xA4]
	xor edx,edx
	mov word ptr [esp+0x9C],dx

 Block89:
	test eax,eax
	je Block140

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block91:
	lea eax,[esp+0x9C]
	push eax
	call dword ptr [ZImports::_VariantClear]
	jmp Block140

 Block92:
	add dword ptr [esi+0x4C],0x1E
	fild dword ptr [esi+0x4C]
	mov ecx,esi
	fdiv qword ptr [__real_408f400000000000]
	fstp qword ptr [esp+0x44]
	call TSecType<long>::GetData
	lea edi,[esi+0x68]
	mov ecx,edi
	mov ebp,eax
	call TSecType<long>::GetData
	cmp ebp,eax
	jge Block107

 Block93:
	mov ecx,esi
	call TSecType<long>::GetData
	fld qword ptr [esp+0x44]
	fmul qword ptr [esp+0x38]
	mov dword ptr [esp+0x18],eax
	fiadd dword ptr [esp+0x18]
	fldz
	fcomp
	fnstsw ax
	test ah,0x41
	jp Block95

 Block94:
	fadd qword ptr [__real_3fe0000000000000]
	call __ftol2_sse
	mov ebp,eax
	mov dword ptr [esp+0x2C],ebp
	jmp Block96

 Block95:
	fsub qword ptr [__real_3fdffffffeed1f41]
	call __ftol2_sse
	mov ebp,eax
	mov dword ptr [esp+0x2C],eax

 Block96:
	mov ecx,edi
	call TSecType<long>::GetData
	cmp ebp,eax
	jl Block108

 Block97:
	lea ecx,[esp+0xDC]
	push ecx
	mov dword ptr [esi+0x48],3
	call ebx
	lea edx,[esp+0xDC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block151

 Block98:
	lea eax,[esp+0xBC]
	push eax
	mov byte ptr [esp+0x148],0xB
	call ebx
	lea ecx,[esp+0xBC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block151

 Block99:
	mov ecx,edi
	mov byte ptr [esp+0x144],0xC
	call TSecType<long>::GetData
	lea ecx,[esi+0x74]
	mov edi,eax
	call TSecType<long>::GetData
	mov ecx,dword ptr [esi+0x3C]
	test ecx,ecx
	je Block150

 Block100:
	lea edx,[esp+0xDC]
	push edx
	lea edx,[esp+0xC0]
	push edx
	push edi
	push eax
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x144],0xB
	cmp word ptr [esp+0xBC],di
	jne Block103

 Block101:
	xor eax,eax
	mov word ptr [esp+0xBC],ax
	mov eax,dword ptr [esp+0xC4]
	test eax,eax
	je Block104

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block104

 Block103:
	lea ecx,[esp+0xBC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block104:
	mov byte ptr [esp+0x144],0
	cmp word ptr [esp+0xDC],di
	jne Block106

 Block105:
	mov eax,dword ptr [esp+0xE4]
	xor edx,edx
	mov word ptr [esp+0xDC],dx
	jmp Block72

 Block106:
	lea eax,[esp+0xDC]
	jmp Block75

 Block107:
	mov ebp,dword ptr [esp+0x2C]

 Block108:
	lea eax,[esp+0x11C]
	push eax
	call ebx
	lea ecx,[esp+0x11C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block151

 Block109:
	lea edx,[esp+0xFC]
	push edx
	mov byte ptr [esp+0x148],0xD
	call ebx
	lea eax,[esp+0xFC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block151

 Block110:
	mov ecx,esi
	mov byte ptr [esp+0x144],0xE
	call TSecType<long>::GetData
	mov ecx,edi
	mov ebx,eax
	call TSecType<long>::GetData
	cmp ebx,eax
	lea ecx,[esi+0x74]
	jl Block112

 Block111:
	lea ecx,[esi+0xC]

 Block112:
	call TSecType<long>::GetData
	mov ecx,dword ptr [esi+0x3C]
	test ecx,ecx
	je Block150

 Block113:
	lea edx,[esp+0x11C]
	push edx
	lea edx,[esp+0x100]
	push edx
	push ebp
	push eax
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x144],0xD
	cmp word ptr [esp+0xFC],di
	jne Block116

 Block114:
	xor eax,eax
	mov word ptr [esp+0xFC],ax
	mov eax,dword ptr [esp+0x104]
	test eax,eax
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea ecx,[esp+0xFC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block117:
	mov byte ptr [esp+0x144],0
	cmp word ptr [esp+0x11C],di
	jne Block119

 Block118:
	mov eax,dword ptr [esp+0x124]
	xor edx,edx
	mov word ptr [esp+0x11C],dx
	jmp Block89

 Block119:
	lea eax,[esp+0x11C]
	push eax
	call dword ptr [ZImports::_VariantClear]
	jmp Block140

 Block120:
	fld qword ptr [_D_PI__193]
	lea ecx,[esp+0x7C]
	fadd st(0),st
	push ecx
	fmul qword ptr [__real_403e000000000000]
	fdiv qword ptr [__real_408f400000000000]
	fmul qword ptr [__real_3fe0000000000000]
	fadd qword ptr [esi+0x60]
	fstp qword ptr [esi+0x60]
	call ebx
	lea edx,[esp+0x7C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block151

 Block121:
	lea eax,[esp+0xCC]
	push eax
	mov byte ptr [esp+0x148],0xF
	call ebx
	lea ecx,[esp+0xCC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block151

 Block122:
	lea ecx,[esi+0x68]
	mov byte ptr [esp+0x144],0x10
	call TSecType<long>::GetData
	lea ecx,[esi+0x74]
	mov dword ptr [esp+0x18],eax
	call TSecType<long>::GetData
	mov edi,dword ptr [esi+0x3C]
	mov ebp,eax
	test edi,edi
	je Block150

 Block123:
	fld qword ptr [esi+0x60]
	lea edx,[esp+0x7C]
	push edx
	lea eax,[esp+0xD0]
	push eax
	call __CIsin
	fmul qword ptr [__real_4008000000000000]
	fiadd dword ptr [esp+0x20]
	call __ftol2_sse
	push eax
	push ebp
	mov ecx,edi
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x144],0xF
	cmp word ptr [esp+0xCC],di
	jne Block126

 Block124:
	mov eax,dword ptr [esp+0xD4]
	xor ecx,ecx
	mov word ptr [esp+0xCC],cx
	test eax,eax
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea edx,[esp+0xCC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block127:
	mov byte ptr [esp+0x144],0
	cmp word ptr [esp+0x7C],di
	jne Block129

 Block128:
	xor eax,eax
	mov word ptr [esp+0x7C],ax
	mov eax,dword ptr [esp+0x84]
	jmp Block89

 Block129:
	lea ecx,[esp+0x7C]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block140

 Block130:
	mov edx,dword ptr [esi+0x44]
	sub edx,dword ptr [esp+0x14C]
	jns Block140

 Block131:
	test byte ptr [_D__S3__11],1
	jne Block133

 Block132:
	or dword ptr [_D__S3__11],1
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push 0x40413E
	mov byte ptr [esp+0x148],0x11
	call CSkillInfo::GetSkill
	mov dword ptr [_D_S_PMESOEXPLOSION],eax
	mov byte ptr [esp+0x144],0

 Block133:
	lea edi,[esi+0x68]
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	mov ecx,edi
	mov ebp,eax
	call TSecType<long>::GetData
	sub esp,8
	mov edi,eax
	mov eax,esp
	mov dword ptr [eax+4],esi
	lea eax,[esi-0xC]
	mov dword ptr [esp+0x20],esp
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ebx,dword ptr [esp+0x28]
	mov ecx,ebx
	call CDropPool::Remove
	mov ecx,dword ptr [esp+0x14C]
	sub ecx,dword ptr [ebx+4]
	cmp ecx,0x5A
	jl Block135

 Block134:
	push 0
	push 0x34
	push 0x40413E
	call play_skill_sound
	mov edx,dword ptr [esp+0x158]
	add esp,0xC
	mov dword ptr [ebx+4],edx

 Block135:
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	mov dword ptr [eax],0
	push edi
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax],0
	mov ecx,dword ptr [_D_S_PMESOEXPLOSION]
	push 1
	push 1
	lea eax,[esp+0x4C]
	push eax
	mov byte ptr [esp+0x164],0x13
	call SKILLENTRY::GetRandomHitUOL
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x158],0x14
	test eax,eax
	je Block137

 Block136:
	mov eax,dword ptr [eax]
	jmp Block138

 Block137:
	xor eax,eax

 Block138:
	push 0
	mov byte ptr [esp+0x15C],0x15
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push eax
	call CAnimationDisplayer::Effect_General
	mov ecx,dword ptr [esp+0x30]
	mov byte ptr [esp+0x144],0
	test ecx,ecx
	je Block140

 Block139:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x30],0

 Block140:
	cmp byte ptr [esi+0x1D],0
	jne Block144

 Block141:
	cmp dword ptr [esi+0x48],3
	je Block143

 Block142:
	mov ecx,dword ptr [esp+0x14C]
	sub ecx,dword ptr [esi+0x40]
	cmp ecx,0xBB8
	jle Block144

 Block143:
	sub esp,8
	mov eax,esp
	lea edx,[esi-0xC]
	mov dword ptr [esp+0x20],esp
	push edx
	mov dword ptr [eax+4],esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x28]
	call CDropPool::Remove

 Block144:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x148],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block147

 Block145:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block147

 Block146:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block147:
	cmp dword ptr [esp+0x24],0
	mov dword ptr [esp+0x138],0
	jne Block1

 Block148:
	mov ecx,dword ptr [esp+0x20]

 Block149:
	call CDropPool::UpdateChasingDropForPet
	mov ecx,dword ptr [esp+0x13C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x134
	ret 4

 Block150:
	push 0x80004003
	call _com_issue_error

 Block151:
	push eax
	call _com_issue_error
}
}
// CDropPool::BoobyTrapCheckPickupItem
__SUB_CLASS_THIS(001104E0, __thiscall, 45873,  CDropPool, void, const tagPOINT&) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x5C],0
	push edi
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	je Block3

 Block1:
	cmp dword ptr [esi+0x68],0
	jne Block3

 Block2:
	push 1
	mov ecx,edi
	call CWvsContext::SendBoobyTrapAlert

 Block3:
	cmp dword ptr [edi+0x40B8],0
	je Block6

 Block4:
	cmp dword ptr [esi+0x5C],0
	jne Block6

 Block5:
	push 1
	mov ecx,edi
	call CWvsContext::SendBoobyTrapAlert

 Block6:
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [ecx]
	mov ecx,dword ptr [ecx+4]
	lea edx,[eax-0x19]
	add eax,0x19
	mov dword ptr [esp+8],edx
	lea edx,[ecx-0x32]
	mov dword ptr [esp+0x10],eax
	mov eax,dword ptr [esi+0x60]
	add ecx,0xA
	mov dword ptr [esp+0xC],edx
	mov dword ptr [esp+0x14],ecx
	mov dword ptr [esp+0x1C],eax
	test eax,eax
	je Block12

 Block7:
	lea ebx,[ebx]

 Block8:
	lea eax,[esp+0x1C]
	push eax
	call ZList<tagPOINT>::GetNext
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [eax]
	add esp,4
	push ecx
	push edx
	lea eax,[esp+0x10]
	push eax
	call PtInRect
	test eax,eax
	je Block11

 Block9:
	cmp dword ptr [esp+0x1C],0
	jne Block8

 Block10:
	jmp Block12

 Block11:
	push 2
	mov ecx,edi
	call CWvsContext::SendBoobyTrapAlert

 Block12:
	lea ecx,[esi+0x54]
	mov dword ptr [esi+0x68],0
	call ZList<tagPOINT>::RemoveAll
	mov dword ptr [edi+0x40B8],0
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// tolong
__SUB(0010F470, __cdecl, 144462,  long, double) {
__asm {

 Block0:
	fldz
	fld qword ptr [esp+4]
	fcom
	fnstsw ax
	fstp st(1)
	test ah,1
	jne Block2

 Block1:
	fadd qword ptr [__real_3fe0000000000000]
	jmp  __ftol2_sse

 Block2:
	fsub qword ptr [__real_3fdffffffeed1f41]
	jmp  __ftol2_sse
}
}
// CDropPool::TryPickUpDropByPet
_SUB_EXCEPTION_HANDLER(111AB0)
__SUB_CLASS_THIS(00111AB0, __thiscall, 45879,  CDropPool, void, CPet*, const tagPOINT&, const SECPOINT&) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_111AB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp-0x1C],esi
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,dword ptr [ebp+0xC]
	mov dword ptr [ebp-0x14],eax
	mov eax,dword ptr [ecx]
	mov ecx,dword ptr [ecx+4]
	lea edx,[eax-0x19]
	mov dword ptr [ebp-0x34],edx
	lea edx,[ecx-0x32]
	add eax,0x19
	add ecx,0xA
	mov dword ptr [ebp-0x30],edx
	mov dword ptr [ebp-0x2C],eax
	mov dword ptr [ebp-0x28],ecx
	call get_update_time
	mov esi,dword ptr [esi+0x2C]
	mov dword ptr [ebp-0x10],eax
	mov dword ptr [ebp-0x18],esi
	test esi,esi
	je Block48

 Block1:
	lea eax,[ebp-0x18]
	push eax
	call ZList<ZRef<DROP>>::GetNext
	mov esi,dword ptr [eax+4]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	add esp,4
	mov dword ptr [ebp-0x20],esi
	test esi,esi
	je Block3

 Block2:
	lea ecx,[esi-0xC]
	push ecx
	call ebx

 Block3:
	cmp dword ptr [esi+0x88],0
	mov dword ptr [ebp-4],0
	jne Block7

 Block4:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block39

 Block5:
	push edi
	call ebx
	test esi,esi
	je Block39

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax
	jmp Block39

 Block7:
	mov edi,dword ptr [ebp+8]
	test edi,edi
	jne Block11

 Block8:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block39

 Block9:
	push edi
	call ebx
	test esi,esi
	je Block39

 Block10:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax
	jmp Block39

 Block11:
	cmp dword ptr [esi+0x30],0
	jne Block18

 Block12:
	mov ecx,dword ptr [edi+0x13C]
	push ecx
	lea edx,[edi+0x134]
	push edx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block14

 Block13:
	mov eax,dword ptr [esi+0x34]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::IsPickUpBlockItem
	test eax,eax
	je Block17

 Block14:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block39

 Block15:
	push edi
	call ebx
	test esi,esi
	je Block39

 Block16:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax
	jmp Block39

 Block17:
	cmp dword ptr [esi+0x30],0
	je Block19

 Block18:
	mov ecx,dword ptr [edi+0x130]
	push ecx
	lea edx,[edi+0x128]
	push edx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block36

 Block19:
	mov eax,dword ptr [edi+0x148]
	push eax
	add edi,0x140
	push edi
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block21

 Block20:
	mov ecx,dword ptr [ebp-0x10]
	sub ecx,dword ptr [esi+0x40]
	cmp ecx,0x3A98
	jg Block27

 Block21:
	cmp dword ptr [esi+0x28],0
	je Block27

 Block22:
	mov eax,dword ptr [esi+0x2C]
	test eax,eax
	jne Block24

 Block23:
	mov edx,dword ptr [ebp-0x14]
	mov ecx,dword ptr [edx+0x20B4]
	cmp dword ptr [esi+0x24],ecx
	jne Block26

 Block24:
	cmp eax,1
	jne Block27

 Block25:
	mov eax,dword ptr [ebp-0x14]
	mov eax,dword ptr [eax+0x3604]
	cmp dword ptr [esi+0x24],eax
	je Block27

 Block26:
	lea ecx,[ebp-0x24]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<DROP>::~ZRef<DROP>
	jmp Block40

 Block27:
	cmp byte ptr [esi+0x1D],0
	je Block36

 Block28:
	cmp dword ptr [esi+0x48],3
	jne Block36

 Block29:
	mov ecx,dword ptr [ebp-0x10]
	sub ecx,dword ptr [esi+0x54]
	cmp ecx,0xBB8
	jl Block36

 Block30:
	lea edi,[esi+0x68]
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	mov ecx,edi
	mov ebx,eax
	call TSecType<long>::GetData
	push eax
	push ebx
	lea edx,[ebp-0x34]
	push edx
	call PtInRect
	test eax,eax
	jne Block32

 Block31:
	lea ecx,[ebp-0x24]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<DROP>::~ZRef<DROP>
	jmp Block40

 Block32:
	cmp dword ptr [esi+0x30],0
	mov eax,0x7FFFFFFF
	jne Block34

 Block33:
	mov eax,dword ptr [esi+0x34]

 Block34:
	mov ecx,dword ptr [ebp-0x1C]
	push eax
	call CDropPool::IsInExceptionList
	test eax,eax
	je Block42

 Block35:
	lea ecx,[ebp-0x24]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<DROP>::~ZRef<DROP>
	jmp Block40

 Block36:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block39

 Block37:
	push edi
	call ebx
	test esi,esi
	je Block39

 Block38:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block39:
	mov dword ptr [ebp-0x20],0

 Block40:
	cmp dword ptr [ebp-0x18],0
	jne Block1

 Block41:
	jmp Block48

 Block42:
	cmp dword ptr [esi+0x30],0
	jne Block44

 Block43:
	mov eax,dword ptr [esi+0x34]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetItemCRC
	mov edi,eax
	jmp Block45

 Block44:
	xor edi,edi

 Block45:
	push 0
	push 0
	push 0
	push 0
	lea ecx,[ebp-0x34]
	push 0x10
	push ecx
	call CCrc32::GetCrc32
	mov edx,dword ptr [esi+0x20]
	mov ecx,dword ptr [ebp+8]
	add esp,0x18
	push eax
	mov eax,dword ptr [ebp+0xC]
	push edi
	push edx
	push eax
	call CPet::SendDropPickUpRequest
	mov ecx,dword ptr [ebp-0x10]
	mov dword ptr [esi+0x54],ecx
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block48

 Block46:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block48

 Block47:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block48:
	mov esi,dword ptr [ebp+0x10]
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov edi,dword ptr [ebp+0xC]
	cmp dword ptr [edi],eax
	jne Block50

 Block49:
	mov ecx,esi
	call TSecType<long>::GetData
	cmp dword ptr [edi+4],eax
	je Block51

 Block50:
	push 0
	ret

 Block51:
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov esp,ebp
	pop ebp
	ret 0xC
}
}
// CDropPool::Remove
_SUB_EXCEPTION_HANDLER(111120)
__SUB_CLASS_THIS(00111120, __thiscall, 45892,  CDropPool, void, NakedParam<ZRef<DROP>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_111120
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax+0x18]
	push ecx
	lea ecx,[esi+0x20]
	mov dword ptr [esp+0x18],0
	call ZList<ZRef<DROP>>::RemoveAt
	mov edx,dword ptr [esp+0x20]
	add edx,0x20
	push edx
	lea ecx,[esi+8]
	call ZMap<unsigned long, ZRef<DROP>, unsigned long>::RemoveKey
	mov eax,dword ptr [esp+0x20]
	add eax,0x20
	push eax
	lea ecx,[esi+0x34]
	call ZMap<unsigned long, tagPOINT, unsigned long>::RemoveKey
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block4

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
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 8
}
}
// CDropPool::CDropPool
_SUB_EXCEPTION_HANDLER(112900)
__SUB_CLASS_THIS0(00112900, __thiscall, 45867,  CDropPool, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_112900
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x4C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	lea eax,[esi+4]
	xor edi,edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-4]
	mov dword ptr [TSingleton<CDropPool>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CDropPool>::ms_pInstance],edi

 Block3:
	lea ecx,[esi+8]
	int 3// TODO: 	mov dword ptr [esi],offset CDropPool::`vftable'
	mov dword ptr [eax],edi
	mov ebx,0x1F
	push 0x64
	mov dword ptr [esp+0x58],edi
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<DROP>, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, ZRef<DROP>, unsigned long>::_CalcAutoGrow
	int 3// TODO: 	mov dword ptr [esi+0x20],offset ZList<ZRef<DROP>>::`vftable'
	mov dword ptr [esi+0x28],edi
	mov dword ptr [esi+0x2C],edi
	mov dword ptr [esi+0x30],edi
	lea ecx,[esi+0x34]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, tagPOINT, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],ebx
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, tagPOINT, unsigned long>::_CalcAutoGrow
	lea ebp,[esi+0x4C]
	mov dword ptr [ebp],edi
	int 3// TODO: 	mov dword ptr [esi+0x54],offset ZList<tagPOINT>::`vftable'
	mov dword ptr [esi+0x5C],edi
	mov dword ptr [esi+0x60],edi
	mov dword ptr [esi+0x64],edi
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0x58],5
	mov dword ptr [esi+0x68],edi
	call ebx
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x58],6
	call ebx
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	push edi
	push edi
	lea eax,[esp+0x34]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x6DE
	mov bl,7
	push edx
	mov byte ptr [esp+0x70],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x68],8
	cmp dword ptr [_D_G_RM],edi
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea eax,[esp+0x50]
	mov byte ptr [esp+0x68],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x5C],9
	call Ztl_variant_t::GetUnknown
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block12

 Block10:
	cmp eax,0x80004002
	je Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x54],bl
	mov ebx,8
	cmp word ptr [esp+0x3C],bx
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,edi
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea edx,[esp+0x3C]
	push edx
	call ebp

 Block16:
	mov byte ptr [esp+0x54],6
	cmp word ptr [esp+0x1C],bx
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,edi
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x1C]
	push ecx
	call ebp

 Block20:
	mov byte ptr [esp+0x54],5
	cmp word ptr [esp+0x2C],bx
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,edi
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[esp+0x2C]
	push eax
	call ebp

 Block24:
	mov eax,esi
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret
}
}
// DROP::~DROP
_SUB_EXCEPTION_HANDLER(110D40)
__SUB_CLASS_THIS0(00110D40, __thiscall, 46121,  DROP, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_110D40
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
	lea ecx,[esi+0x68]
	mov dword ptr [esp+0x14],2
	call SECPOINT::~SECPOINT
	mov eax,dword ptr [esi+0x3C]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x38]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call SECPOINT::~SECPOINT
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CDropPool::TryPickUpDrop
_SUB_EXCEPTION_HANDLER(111860)
__SUB_CLASS_THIS(00111860, __thiscall, 45873,  CDropPool, void, const tagPOINT&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_111860
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
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [edi+0x20B8],0
	mov dword ptr [esp+0x18],edi
	jne Block34

 Block1:
	mov eax,dword ptr [edi+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block34

 Block2:
	call get_update_time
	sub eax,dword ptr [edi+0x20BC]
	cmp eax,0x1E
	jl Block34

 Block3:
	mov ecx,dword ptr [esp+0x48]
	mov eax,dword ptr [ecx]
	mov ecx,dword ptr [ecx+4]
	lea edx,[eax-0x19]
	mov dword ptr [esp+0x28],edx
	lea edx,[ecx-0x32]
	add eax,0x19
	add ecx,0xA
	mov dword ptr [esp+0x2C],edx
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x34],ecx
	call get_update_time
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [esi+0x2C]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block34

 Block4:
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	jmp Block6

 Block5:
	mov edi,dword ptr [esp+0x18]

 Block6:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<DROP>>::GetNext
	mov esi,dword ptr [eax+4]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	add esp,4
	mov dword ptr [esp+0x24],esi
	test esi,esi
	je Block8

 Block7:
	lea ecx,[esi-0xC]
	push ecx
	call ebp

 Block8:
	cmp dword ptr [esi+0x30],0
	mov dword ptr [esp+0x40],0
	jne Block13

 Block9:
	mov edx,dword ptr [esi+0x34]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edx
	call CItemInfo::IsPickUpBlockItem
	test eax,eax
	je Block13

 Block10:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x44],0xFFFFFFFF
	call ebx
	test eax,eax
	jne Block27

 Block11:
	push edi
	call ebp
	test esi,esi
	je Block27

 Block12:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx
	jmp Block27

 Block13:
	mov edx,dword ptr [esp+0x1C]
	mov eax,edx
	sub eax,dword ptr [esi+0x40]
	cmp eax,0x3A98
	jge Block19

 Block14:
	cmp dword ptr [esi+0x28],0
	je Block19

 Block15:
	mov eax,dword ptr [esi+0x2C]
	test eax,eax
	jne Block17

 Block16:
	mov ecx,dword ptr [edi+0x20B4]
	cmp dword ptr [esi+0x24],ecx
	jne Block24

 Block17:
	cmp eax,1
	jne Block19

 Block18:
	mov eax,dword ptr [edi+0x3604]
	cmp dword ptr [esi+0x24],eax
	jne Block24

 Block19:
	cmp byte ptr [esi+0x1D],0
	je Block24

 Block20:
	cmp dword ptr [esi+0x48],3
	jne Block24

 Block21:
	sub edx,dword ptr [esi+0x54]
	cmp edx,0xBB8
	jl Block24

 Block22:
	lea edi,[esi+0x68]
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	mov ecx,edi
	mov ebp,eax
	call TSecType<long>::GetData
	push eax
	push ebp
	lea ecx,[esp+0x30]
	push ecx
	call PtInRect
	test eax,eax
	jne Block30

 Block23:
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	call ZRef<DROP>::~ZRef<DROP>
	jmp Block28

 Block24:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x44],0xFFFFFFFF
	call ebx
	test eax,eax
	jne Block27

 Block25:
	push edi
	call ebp
	test esi,esi
	je Block27

 Block26:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block27:
	mov dword ptr [esp+0x24],0

 Block28:
	cmp dword ptr [esp+0x14],0
	jne Block5

 Block29:
	jmp Block34

 Block30:
	cmp dword ptr [esi+0x30],0
	jne Block32

 Block31:
	mov ecx,dword ptr [esi+0x34]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemCRC
	jmp Block33

 Block32:
	xor eax,eax

 Block33:
	mov edx,dword ptr [esi+0x20]
	mov ecx,dword ptr [esp+0x18]
	push eax
	mov eax,dword ptr [esp+0x4C]
	push edx
	push eax
	call CWvsContext::SendDropPickUpRequest
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [esi+0x54],ecx
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	call ZRef<DROP>::~ZRef<DROP>

 Block34:
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
// CDropPool::TryPickUpDropByMob
_SUB_EXCEPTION_HANDLER(1112A0)
__SUB_CLASS_THIS(001112A0, __thiscall, 45875,  CDropPool, void, CMob*, const tagPOINT&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1112A0
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
	mov edx,dword ptr [esp+0x58]
	mov eax,dword ptr [edx]
	mov edx,dword ptr [edx+4]
	mov ecx,dword ptr [ecx+0x2C]
	lea esi,[eax-0x14]
	mov dword ptr [esp+0x34],esi
	lea esi,[edx-0x28]
	add eax,0x14
	add edx,0xA
	mov dword ptr [esp+0x38],esi
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x40],edx
	mov dword ptr [esp+0x58],ecx
	test ecx,ecx
	je Block21

 Block1:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]

 Block2:
	lea eax,[esp+0x58]
	push eax
	call ZList<ZRef<DROP>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x20],esi
	test esi,esi
	je Block4

 Block3:
	lea ecx,[esi-0xC]
	push ecx
	call ebx

 Block4:
	cmp dword ptr [esi+0x30],0
	mov dword ptr [esp+0x4C],0
	jne Block6

 Block5:
	mov edx,dword ptr [esi+0x34]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edx
	call CItemInfo::IsPickUpBlockItem
	test eax,eax
	jne Block22

 Block6:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block28

 Block7:
	mov edi,dword ptr [esi+0x3C]
	mov byte ptr [esp+0x4C],1
	test edi,edi
	je Block29

 Block8:
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x8C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x38]
	push 0
	push 0
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x44]
	push 0
	push 0
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x50]
	push 0
	mov dword ptr [eax+0xC],ecx
	push 0
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x40]
	push ecx
	push edi
	call edx
	test eax,eax
	jge Block10

 Block9:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block10:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x4C],0
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	cmp byte ptr [esi+0x1D],0
	je Block22

 Block15:
	cmp dword ptr [esi+0x48],3
	jne Block22

 Block16:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [esp+0x14]
	push edx
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	call PtInRect
	test eax,eax
	je Block22

 Block17:
	mov edx,dword ptr [esi+0x20]
	mov ecx,dword ptr [esp+0x54]
	push edx
	call CMob::SendDropPickUpRequest
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	push edi
	test eax,eax
	je Block23

 Block18:
	call ebp
	test eax,eax
	jne Block21

 Block19:
	push edi
	call ebx
	test esi,esi
	je Block21

 Block20:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block21:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 8

 Block22:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	push edi

 Block23:
	call ebp
	test eax,eax
	jne Block26

 Block24:
	push edi
	call ebx
	test esi,esi
	je Block26

 Block25:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block26:
	cmp dword ptr [esp+0x58],0
	mov dword ptr [esp+0x20],0
	jne Block2

 Block27:
	jmp Block21

 Block28:
	push eax
	call _com_issue_error

 Block29:
	push 0x80004003
	call _com_issue_error
}
}
// CDropPool::IsInExceptionList
__SUB_CLASS_THIS(0010FDC0, __thiscall, 45889,  CDropPool, int32_t, long) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	mov eax,dword ptr [ebx+0x2E44]
	mov eax,dword ptr [eax+4]
	test eax,eax
	je Block10

 Block1:
	mov ecx,dword ptr [eax+0x184]
	push ecx
	add eax,0x17C
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block10

 Block2:
	push ebp
	mov ebp,dword ptr [esp+0xC]
	push edi
	xor edi,edi
	push esi
	jmp Block4

 Block4:
	mov edx,dword ptr [ebx+0x2E44]
	mov esi,dword ptr [edi+edx+4]
	test esi,esi
	je Block8

 Block5:
	mov eax,dword ptr [esi+0x184]
	push eax
	lea ecx,[esi+0x17C]
	push ecx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block7

 Block6:
	push ebp
	mov ecx,esi
	call CPet::IsInExceptionListPet
	test eax,eax
	jne Block9

 Block7:
	add edi,8
	cmp edi,0x18
	jl Block4

 Block8:
	pop esi
	pop edi
	pop ebp
	xor eax,eax
	pop ebx
	ret 4

 Block9:
	pop esi
	pop edi
	pop ebp
	mov eax,1
	pop ebx
	ret 4

 Block10:
	xor eax,eax
	pop ebx
	ret 4
}
}
// CDropPool::RecordRecentPickupItem
__SUB_CLASS_THIS(00115140, __thiscall, 45887,  CDropPool, void, unsigned long) {
__asm {

 Block0:
	sub esp,8
	push esi
	mov esi,ecx
	lea eax,[esp+4]
	push eax
	lea ecx,[esp+0x14]
	push ecx
	lea ecx,[esi+0x34]
	call ZMap<unsigned long, tagPOINT, unsigned long>::GetAt
	test eax,eax
	je Block2

 Block1:
	lea ecx,[esi+0x54]
	mov dword ptr [esi+0x68],1
	call ZList<tagPOINT>::AddTail_
	mov edx,dword ptr [esp+4]
	mov ecx,dword ptr [esp+8]
	mov dword ptr [eax],edx
	mov dword ptr [eax+4],ecx

 Block2:
	pop esi
	add esp,8
	ret 4
}
}
// DROP::DROP
_SUB_EXCEPTION_HANDLER(111620)
__SUB_CLASS_THIS0(00111620, __thiscall, 46119,  DROP, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_111620
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
	call SECPOINT::_ctor_default
	xor eax,eax
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esi+0x38],eax
	mov dword ptr [esi+0x3C],eax
	lea ecx,[esi+0x68]
	mov byte ptr [esp+0x14],2
	call SECPOINT::_ctor_default
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CDropPool::OnPacket
__SUB_CLASS_THIS(00117410, __thiscall, 45880,  CDropPool, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x142
	je Block3

 Block1:
	sub eax,2
	jne Block4

 Block2:
	mov eax,dword ptr [esp+8]
	push eax
	call CDropPool::OnDropLeaveField
	ret 8

 Block3:
	mov edx,dword ptr [esp+8]
	push edx
	call CDropPool::OnDropEnterField

 Block4:
	ret 8
}
}
// CDropPool::GetExplosiveDropInRect
_SUB_EXCEPTION_HANDLER(112630)
__SUB_CLASS_THIS(00112630, __thiscall, 45884,  CDropPool, void, const tagRECT&, ZArray<DROP *>&, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_112630
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
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edx,dword ptr [eax+0x20B4]
	mov ecx,dword ptr [ecx+0x2C]
	mov eax,dword ptr [eax+0x3604]
	mov dword ptr [esp+0x18],edx
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x14],ecx
	test ecx,ecx
	je Block27

 Block1:
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]

 Block2:
	lea ecx,[esp+0x14]
	push ecx
	call ZList<ZRef<DROP>>::GetNext
	mov esi,dword ptr [eax+4]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	add esp,4
	mov dword ptr [esp+0x24],esi
	test esi,esi
	je Block4

 Block3:
	lea edx,[esi-0xC]
	push edx
	call ebx

 Block4:
	cmp dword ptr [esi+0x30],0
	mov dword ptr [esp+0x30],0
	je Block18

 Block5:
	cmp dword ptr [esi+0x48],3
	jne Block18

 Block6:
	mov eax,dword ptr [esi+0x2C]
	test eax,eax
	jne Block8

 Block7:
	mov ecx,dword ptr [esp+0x18]
	cmp dword ptr [esi+0x24],ecx
	jne Block10

 Block8:
	cmp eax,1
	jne Block13

 Block9:
	mov edx,dword ptr [esp+0x1C]
	cmp dword ptr [esi+0x24],edx
	je Block13

 Block10:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ebp
	test eax,eax
	jne Block22

 Block11:
	push edi
	call ebx
	test esi,esi
	je Block22

 Block12:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx
	jmp Block22

 Block13:
	lea edi,[esi+0x68]
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	mov ecx,edi
	mov ebx,eax
	call TSecType<long>::GetData
	push eax
	mov eax,dword ptr [esp+0x3C]
	push ebx
	push eax
	call PtInRect
	test eax,eax
	je Block15

 Block14:
	mov ecx,dword ptr [esp+0x3C]
	push 0xFFFFFFFF
	call ZArray<DROP *>::InsertBefore
	mov dword ptr [eax],esi

 Block15:
	mov ecx,dword ptr [esp+0x3C]
	call ZArray<DROP *>::GetCount
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	push edi
	cmp eax,dword ptr [esp+0x44]
	jae Block24

 Block16:
	call ebp
	test eax,eax
	jne Block22

 Block17:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block20

 Block18:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call ebp
	test eax,eax
	jne Block22

 Block19:
	push edi
	call ebx

 Block20:
	test esi,esi
	je Block22

 Block21:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block22:
	cmp dword ptr [esp+0x14],0
	mov dword ptr [esp+0x24],0
	jne Block2

 Block23:
	jmp Block27

 Block24:
	call ebp
	test eax,eax
	jne Block27

 Block25:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block27

 Block26:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block27:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 0xC
}
}
// CDropPool::Add
_SUB_EXCEPTION_HANDLER(115180)
__SUB_CLASS_THIS(00115180, __thiscall, 45892,  CDropPool, void, NakedParam<ZRef<DROP>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_115180
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
	lea ecx,[esi+0x20]
	mov dword ptr [esp+0x1C],0
	call ZList<ZRef<DROP>>::AddTail_
	mov edi,eax
	lea eax,[esp+0x24]
	push eax
	mov ecx,edi
	call ZRef<DROP>::op_assign_copy
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [ecx+0x18],edi
	mov eax,dword ptr [esp+0x28]
	lea edx,[esp+0x24]
	push edx
	add eax,0x20
	push eax
	lea ecx,[esi+8]
	call ZMap<unsigned long, ZRef<DROP>, unsigned long>::Insert
	mov edi,dword ptr [esp+0x28]
	add edi,0x68
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	mov ecx,edi
	mov dword ptr [esp+0xC],eax
	call TSecType<long>::GetData
	mov edx,dword ptr [esp+0x28]
	lea ecx,[esp+0xC]
	push ecx
	add edx,0x20
	push edx
	lea ecx,[esi+0x34]
	mov dword ptr [esp+0x18],eax
	call ZMap<unsigned long, tagPOINT, unsigned long>::Insert
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block4

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
	test esi,esi
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block4:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 8
}
}
// CDropPool::MakeMoneyAnimation
_SUB_EXCEPTION_HANDLER(112DF0)
__SUB_CLASS_THIS(00112DF0, __thiscall, 45892,  CDropPool, void, NakedParam<ZRef<DROP>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_112DF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x514
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x528]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov edx,dword ptr [esp+0x53C]
	mov eax,dword ptr [edx+0x34]
	push eax
	mov dword ptr [esp+0x534],0
	call CDropPool::GetMoneyIconType
	mov edi,dword ptr [edx+0x38]
	mov esi,eax
	mov dword ptr [esp+0x14],edi
	test edi,edi
	je Block2

 Block1:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block2:
	mov eax,3
	mov word ptr [esp+0x1C],ax
	mov dword ptr [esp+0x24],0xFFFFFFFE
	mov byte ptr [esp+0x530],2
	test edi,edi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	mov ecx,edi
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x530],1
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	cmp esi,3
	ja Block419

 Block11:
	cmp ESI, 0
je Block12
cmp ESI, 1
je Block12
cmp ESI, 2
je Block165
cmp ESI, 3
je Block316


 Block12:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x3C8]
	push edx
	call esi
	lea eax,[esp+0x3C8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	lea ecx,[esp+0x88]
	push ecx
	mov byte ptr [esp+0x534],3
	call esi
	lea edx,[esp+0x88]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	lea eax,[esp+0x2C8]
	push eax
	mov byte ptr [esp+0x534],4
	call esi
	lea ecx,[esp+0x2C8]
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
	lea edx,[esp+0x378]
	push edx
	mov byte ptr [esp+0x534],5
	call esi
	lea eax,[esp+0x378]
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
	mov ecx,3
	mov edi,0x50
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],edi
	mov edx,dword ptr [esp+0x53C]
	mov eax,dword ptr [edx+0x34]
	push 0
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov bl,7
	mov ecx,ebp
	mov byte ptr [esp+0x53C],bl
	call CDropPool::GetMoneyIcon
	mov eax,dword ptr [eax]
	lea edx,[esp+0x3C8]
	push edx
	lea ecx,[esp+0x8C]
	push ecx
	lea edx,[esp+0x2D0]
	push edx
	lea ecx,[esp+0x384]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	lea edx,[esp+0x2C]
	push edx
	push eax
	lea eax,[esp+0x400]
	push eax
	mov byte ptr [esp+0x54C],8
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x3E8],8
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x3F0]
	xor ecx,ecx
	mov word ptr [esp+0x3E8],cx
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea edx,[esp+0x3E8]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x530],bl
	test eax,eax
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x530],6
	jne Block29

 Block27:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	cmp word ptr [esp+0x378],8
	mov byte ptr [esp+0x530],5
	jne Block37

 Block31:
	mov eax,dword ptr [esp+0x380]
	xor edx,edx
	mov word ptr [esp+0x378],dx
	test eax,eax
	je Block33

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block33:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block34:
	cmp word ptr [esp+0x2C8],8
	mov byte ptr [esp+0x530],4
	jne Block38

 Block35:
	mov eax,dword ptr [esp+0x2D0]
	xor ecx,ecx
	mov word ptr [esp+0x2C8],cx
	test eax,eax
	je Block39

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block37:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x378]
	push eax
	call ebx
	jmp Block34

 Block38:
	lea edx,[esp+0x2C8]
	push edx
	call ebx

 Block39:
	cmp word ptr [esp+0x88],8
	mov byte ptr [esp+0x530],3
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [esp+0x88],ax
	mov eax,dword ptr [esp+0x90]
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea ecx,[esp+0x88]
	push ecx
	call ebx

 Block43:
	cmp word ptr [esp+0x3C8],8
	mov byte ptr [esp+0x530],1
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0x3D0]
	xor edx,edx
	mov word ptr [esp+0x3C8],dx
	test eax,eax
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea eax,[esp+0x3C8]
	push eax
	call ebx

 Block47:
	lea ecx,[esp+0xE8]
	push ecx
	call esi
	lea edx,[esp+0xE8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block49

 Block48:
	push eax
	call _com_issue_error

 Block49:
	lea eax,[esp+0x368]
	push eax
	mov byte ptr [esp+0x534],9
	call esi
	lea ecx,[esp+0x368]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	lea edx,[esp+0xC8]
	push edx
	mov byte ptr [esp+0x534],0xA
	call esi
	lea eax,[esp+0xC8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block53

 Block52:
	push eax
	call _com_issue_error

 Block53:
	lea ecx,[esp+0x2E8]
	push ecx
	mov byte ptr [esp+0x534],0xB
	call esi
	lea edx,[esp+0x2E8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	mov eax,3
	mov word ptr [esp+0xA8],ax
	mov dword ptr [esp+0xB0],edi
	mov ecx,dword ptr [esp+0x53C]
	mov edx,dword ptr [ecx+0x34]
	push 1
	push edx
	lea eax,[esp+0x50]
	mov bl,0xD
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x53C],bl
	call CDropPool::GetMoneyIcon
	mov eax,dword ptr [eax]
	lea ecx,[esp+0xE8]
	push ecx
	lea edx,[esp+0x36C]
	push edx
	lea ecx,[esp+0xD0]
	push ecx
	lea edx,[esp+0x2F4]
	push edx
	lea ecx,[esp+0xB8]
	push ecx
	mov ecx,dword ptr [esp+0x28]
	push eax
	lea edx,[esp+0x420]
	push edx
	mov byte ptr [esp+0x54C],0xE
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x408],8
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [esp+0x408],ax
	mov eax,dword ptr [esp+0x410]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[esp+0x408]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x530],bl
	test eax,eax
	je Block61

 Block60:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block61:
	cmp word ptr [esp+0xA8],8
	mov byte ptr [esp+0x530],0xC
	jne Block64

 Block62:
	mov eax,dword ptr [esp+0xB0]
	xor ecx,ecx
	mov word ptr [esp+0xA8],cx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea edx,[esp+0xA8]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	cmp word ptr [esp+0x2E8],8
	mov byte ptr [esp+0x530],0xB
	jne Block72

 Block66:
	xor eax,eax
	mov word ptr [esp+0x2E8],ax
	mov eax,dword ptr [esp+0x2F0]
	test eax,eax
	je Block68

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block68:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block69:
	cmp word ptr [esp+0xC8],8
	mov byte ptr [esp+0x530],0xA
	jne Block73

 Block70:
	mov eax,dword ptr [esp+0xD0]
	xor edx,edx
	mov word ptr [esp+0xC8],dx
	test eax,eax
	je Block74

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block72:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x2E8]
	push ecx
	call ebx
	jmp Block69

 Block73:
	lea eax,[esp+0xC8]
	push eax
	call ebx

 Block74:
	cmp word ptr [esp+0x368],8
	mov byte ptr [esp+0x530],9
	jne Block77

 Block75:
	mov eax,dword ptr [esp+0x370]
	xor ecx,ecx
	mov word ptr [esp+0x368],cx
	test eax,eax
	je Block78

 Block76:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block78

 Block77:
	lea edx,[esp+0x368]
	push edx
	call ebx

 Block78:
	cmp word ptr [esp+0xE8],8
	mov byte ptr [esp+0x530],1
	jne Block81

 Block79:
	xor eax,eax
	mov word ptr [esp+0xE8],ax
	mov eax,dword ptr [esp+0xF0]
	test eax,eax
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea ecx,[esp+0xE8]
	push ecx
	call ebx

 Block82:
	lea edx,[esp+0x328]
	push edx
	call esi
	lea eax,[esp+0x328]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block84

 Block83:
	push eax
	call _com_issue_error

 Block84:
	lea ecx,[esp+0x128]
	push ecx
	mov byte ptr [esp+0x534],0xF
	call esi
	lea edx,[esp+0x128]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block86

 Block85:
	push eax
	call _com_issue_error

 Block86:
	lea eax,[esp+0x3A8]
	push eax
	mov byte ptr [esp+0x534],0x10
	call esi
	lea ecx,[esp+0x3A8]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	lea edx,[esp+0x108]
	push edx
	mov byte ptr [esp+0x534],0x11
	call esi
	lea eax,[esp+0x108]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block90

 Block89:
	push eax
	call _com_issue_error

 Block90:
	mov ecx,3
	mov word ptr [esp+0x308],cx
	mov dword ptr [esp+0x310],edi
	mov edx,dword ptr [esp+0x53C]
	mov eax,dword ptr [edx+0x34]
	push 2
	push eax
	lea ecx,[esp+0x5C]
	push ecx
	mov bl,0x13
	mov ecx,ebp
	mov byte ptr [esp+0x53C],bl
	call CDropPool::GetMoneyIcon
	mov eax,dword ptr [eax]
	lea edx,[esp+0x328]
	push edx
	lea ecx,[esp+0x12C]
	push ecx
	lea edx,[esp+0x3B0]
	push edx
	lea ecx,[esp+0x114]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	lea edx,[esp+0x318]
	push edx
	push eax
	lea eax,[esp+0x4A0]
	push eax
	mov byte ptr [esp+0x54C],0x14
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x488],8
	jne Block93

 Block91:
	mov eax,dword ptr [esp+0x490]
	xor ecx,ecx
	mov word ptr [esp+0x488],cx
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea edx,[esp+0x488]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block94:
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x530],bl
	test eax,eax
	je Block96

 Block95:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block96:
	cmp word ptr [esp+0x308],8
	mov byte ptr [esp+0x530],0x12
	jne Block99

 Block97:
	xor eax,eax
	mov word ptr [esp+0x308],ax
	mov eax,dword ptr [esp+0x310]
	test eax,eax
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea ecx,[esp+0x308]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block100:
	cmp word ptr [esp+0x108],8
	mov byte ptr [esp+0x530],0x11
	jne Block107

 Block101:
	mov eax,dword ptr [esp+0x110]
	xor edx,edx
	mov word ptr [esp+0x108],dx
	test eax,eax
	je Block103

 Block102:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block103:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block104:
	cmp word ptr [esp+0x3A8],8
	mov byte ptr [esp+0x530],0x10
	jne Block108

 Block105:
	mov eax,dword ptr [esp+0x3B0]
	xor ecx,ecx
	mov word ptr [esp+0x3A8],cx
	test eax,eax
	je Block109

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block107:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x108]
	push eax
	call ebx
	jmp Block104

 Block108:
	lea edx,[esp+0x3A8]
	push edx
	call ebx

 Block109:
	cmp word ptr [esp+0x128],8
	mov byte ptr [esp+0x530],0xF
	jne Block112

 Block110:
	xor eax,eax
	mov word ptr [esp+0x128],ax
	mov eax,dword ptr [esp+0x130]
	test eax,eax
	je Block113

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block112:
	lea ecx,[esp+0x128]
	push ecx
	call ebx

 Block113:
	cmp word ptr [esp+0x328],8
	mov byte ptr [esp+0x530],1
	jne Block116

 Block114:
	mov eax,dword ptr [esp+0x330]
	xor edx,edx
	mov word ptr [esp+0x328],dx
	test eax,eax
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea eax,[esp+0x328]
	push eax
	call ebx

 Block117:
	lea ecx,[esp+0x188]
	push ecx
	call esi
	lea edx,[esp+0x188]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block119

 Block118:
	push eax
	call _com_issue_error

 Block119:
	lea eax,[esp+0x348]
	push eax
	mov byte ptr [esp+0x534],0x15
	call esi
	lea ecx,[esp+0x348]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block121

 Block120:
	push eax
	call _com_issue_error

 Block121:
	lea edx,[esp+0x168]
	push edx
	mov byte ptr [esp+0x534],0x16
	call esi
	lea eax,[esp+0x168]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block123

 Block122:
	push eax
	call _com_issue_error

 Block123:
	lea ecx,[esp+0x388]
	push ecx
	mov byte ptr [esp+0x534],0x17
	call esi
	lea edx,[esp+0x388]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block125

 Block124:
	push eax
	call _com_issue_error

 Block125:
	mov eax,3
	mov word ptr [esp+0x148],ax
	mov dword ptr [esp+0x150],edi
	mov ecx,dword ptr [esp+0x53C]
	mov edx,dword ptr [ecx+0x34]
	push eax
	push edx
	lea eax,[esp+0x58]
	mov bl,0x19
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x53C],bl
	call CDropPool::GetMoneyIcon
	mov eax,dword ptr [eax]
	lea ecx,[esp+0x188]
	push ecx
	lea edx,[esp+0x34C]
	push edx
	lea ecx,[esp+0x170]
	push ecx
	lea edx,[esp+0x394]
	push edx
	lea ecx,[esp+0x158]
	push ecx
	mov ecx,dword ptr [esp+0x28]
	push eax
	lea edx,[esp+0x470]
	push edx
	mov byte ptr [esp+0x54C],0x1A
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x458],8
	jne Block128

 Block126:
	xor eax,eax
	mov word ptr [esp+0x458],ax
	mov eax,dword ptr [esp+0x460]
	test eax,eax
	je Block129

 Block127:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block128:
	lea ecx,[esp+0x458]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block129:
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0x530],bl
	test eax,eax
	je Block131

 Block130:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block131:
	mov ebp,8
	mov byte ptr [esp+0x530],0x18
	cmp word ptr [esp+0x148],bp
	jne Block138

 Block132:
	mov eax,dword ptr [esp+0x150]
	xor ecx,ecx
	mov word ptr [esp+0x148],cx
	test eax,eax
	je Block134

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block134:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block135:
	mov byte ptr [esp+0x530],0x17
	cmp word ptr [esp+0x388],bp
	jne Block139

 Block136:
	xor eax,eax
	mov word ptr [esp+0x388],ax
	mov eax,dword ptr [esp+0x390]
	test eax,eax
	je Block140

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block140

 Block138:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x148]
	push edx
	call edi
	jmp Block135

 Block139:
	lea ecx,[esp+0x388]
	push ecx
	call edi

 Block140:
	mov byte ptr [esp+0x530],0x16
	cmp word ptr [esp+0x168],bp
	jne Block143

 Block141:
	mov eax,dword ptr [esp+0x170]
	xor edx,edx
	mov word ptr [esp+0x168],dx
	test eax,eax
	je Block144

 Block142:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block144

 Block143:
	lea eax,[esp+0x168]
	push eax
	call edi

 Block144:
	mov byte ptr [esp+0x530],0x15
	cmp word ptr [esp+0x348],bp
	jne Block147

 Block145:
	mov eax,dword ptr [esp+0x350]
	xor ecx,ecx
	mov word ptr [esp+0x348],cx
	test eax,eax
	je Block148

 Block146:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block148

 Block147:
	lea edx,[esp+0x348]
	push edx
	call edi

 Block148:
	mov byte ptr [esp+0x530],1
	cmp word ptr [esp+0x188],bp
	jne Block151

 Block149:
	xor eax,eax
	mov word ptr [esp+0x188],ax
	mov eax,dword ptr [esp+0x190]
	test eax,eax
	je Block152

 Block150:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block152

 Block151:
	lea ecx,[esp+0x188]
	push ecx
	call edi

 Block152:
	lea edx,[esp+0x1A8]
	push edx
	call esi
	lea eax,[esp+0x1A8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block154

 Block153:
	push eax
	call _com_issue_error

 Block154:
	lea ecx,[esp+0x2B8]
	mov bl,0x1B
	push ecx
	mov byte ptr [esp+0x534],bl
	call esi
	lea edx,[esp+0x2B8]
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
	lea eax,[esp+0x1A8]
	push eax
	lea ecx,[esp+0x2BC]
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	push 0x20
	mov byte ptr [esp+0x53C],0x1C
	call IWzGr2DLayer::Animate
	mov byte ptr [esp+0x530],bl
	cmp word ptr [esp+0x2B8],bp
	jne Block159

 Block157:
	mov eax,dword ptr [esp+0x2C0]
	xor edx,edx
	mov word ptr [esp+0x2B8],dx
	test eax,eax
	je Block160

 Block158:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block160

 Block159:
	lea eax,[esp+0x2B8]
	push eax
	call edi

 Block160:
	mov byte ptr [esp+0x530],1
	cmp word ptr [esp+0x1A8],bp
	jne Block164

 Block161:
	mov eax,dword ptr [esp+0x1B0]
	xor ecx,ecx
	mov word ptr [esp+0x1A8],cx

 Block162:
	test eax,eax
	je Block419

 Block163:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block419

 Block164:
	lea edx,[esp+0x1A8]
	push edx
	call edi
	jmp Block419

 Block165:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x318]
	push eax
	call esi
	lea ecx,[esp+0x318]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block167

 Block166:
	push eax
	call _com_issue_error

 Block167:
	lea edx,[esp+0x1E8]
	push edx
	mov byte ptr [esp+0x534],0x1D
	call esi
	lea eax,[esp+0x1E8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block169

 Block168:
	push eax
	call _com_issue_error

 Block169:
	lea ecx,[esp+0x2F8]
	push ecx
	mov byte ptr [esp+0x534],0x1E
	call esi
	lea edx,[esp+0x2F8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block171

 Block170:
	push eax
	call _com_issue_error

 Block171:
	lea eax,[esp+0x1C8]
	push eax
	mov byte ptr [esp+0x534],0x1F
	call esi
	lea ecx,[esp+0x1C8]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block173

 Block172:
	push eax
	call _com_issue_error

 Block173:
	mov edx,3
	mov edi,0xC8
	mov word ptr [esp+0x2D8],dx
	mov dword ptr [esp+0x2E0],edi
	mov eax,dword ptr [esp+0x53C]
	mov ecx,dword ptr [eax+0x34]
	push 0
	push ecx
	lea edx,[esp+0x40]
	mov bl,0x21
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x53C],bl
	call CDropPool::GetMoneyIcon
	mov eax,dword ptr [eax]
	lea ecx,[esp+0x318]
	push ecx
	lea edx,[esp+0x1EC]
	push edx
	lea ecx,[esp+0x300]
	push ecx
	lea edx,[esp+0x1D4]
	push edx
	lea ecx,[esp+0x2E8]
	push ecx
	mov ecx,dword ptr [esp+0x28]
	push eax
	lea edx,[esp+0x450]
	push edx
	mov byte ptr [esp+0x54C],0x22
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x438],8
	jne Block176

 Block174:
	xor eax,eax
	mov word ptr [esp+0x438],ax
	mov eax,dword ptr [esp+0x440]
	test eax,eax
	je Block177

 Block175:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block177

 Block176:
	lea ecx,[esp+0x438]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block177:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x530],bl
	test eax,eax
	je Block179

 Block178:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block179:
	cmp word ptr [esp+0x2D8],8
	mov byte ptr [esp+0x530],0x20
	jne Block182

 Block180:
	mov eax,dword ptr [esp+0x2E0]
	xor ecx,ecx
	mov word ptr [esp+0x2D8],cx
	test eax,eax
	je Block183

 Block181:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block183

 Block182:
	lea edx,[esp+0x2D8]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block183:
	cmp word ptr [esp+0x1C8],8
	mov byte ptr [esp+0x530],0x1F
	jne Block190

 Block184:
	xor eax,eax
	mov word ptr [esp+0x1C8],ax
	mov eax,dword ptr [esp+0x1D0]
	test eax,eax
	je Block186

 Block185:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block186:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block187:
	cmp word ptr [esp+0x2F8],8
	mov byte ptr [esp+0x530],0x1E
	jne Block191

 Block188:
	mov eax,dword ptr [esp+0x300]
	xor edx,edx
	mov word ptr [esp+0x2F8],dx
	test eax,eax
	je Block192

 Block189:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block192

 Block190:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x1C8]
	push ecx
	call ebx
	jmp Block187

 Block191:
	lea eax,[esp+0x2F8]
	push eax
	call ebx

 Block192:
	cmp word ptr [esp+0x1E8],8
	mov byte ptr [esp+0x530],0x1D
	jne Block195

 Block193:
	mov eax,dword ptr [esp+0x1F0]
	xor ecx,ecx
	mov word ptr [esp+0x1E8],cx
	test eax,eax
	je Block196

 Block194:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block196

 Block195:
	lea edx,[esp+0x1E8]
	push edx
	call ebx

 Block196:
	cmp word ptr [esp+0x318],8
	mov byte ptr [esp+0x530],1
	jne Block199

 Block197:
	xor eax,eax
	mov word ptr [esp+0x318],ax
	mov eax,dword ptr [esp+0x320]
	test eax,eax
	je Block200

 Block198:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block200

 Block199:
	lea ecx,[esp+0x318]
	push ecx
	call ebx

 Block200:
	lea edx,[esp+0x248]
	push edx
	call esi
	lea eax,[esp+0x248]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block202

 Block201:
	push eax
	call _com_issue_error

 Block202:
	lea ecx,[esp+0x358]
	push ecx
	mov byte ptr [esp+0x534],0x23
	call esi
	lea edx,[esp+0x358]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block204

 Block203:
	push eax
	call _com_issue_error

 Block204:
	lea eax,[esp+0x228]
	push eax
	mov byte ptr [esp+0x534],0x24
	call esi
	lea ecx,[esp+0x228]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block206

 Block205:
	push eax
	call _com_issue_error

 Block206:
	lea edx,[esp+0x338]
	push edx
	mov byte ptr [esp+0x534],0x25
	call esi
	lea eax,[esp+0x338]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block208

 Block207:
	push eax
	call _com_issue_error

 Block208:
	mov ecx,3
	mov word ptr [esp+0x208],cx
	mov dword ptr [esp+0x210],edi
	mov edx,dword ptr [esp+0x53C]
	mov eax,dword ptr [edx+0x34]
	push 1
	push eax
	lea ecx,[esp+0x34]
	push ecx
	mov bl,0x27
	mov ecx,ebp
	mov byte ptr [esp+0x53C],bl
	call CDropPool::GetMoneyIcon
	mov eax,dword ptr [eax]
	lea edx,[esp+0x248]
	push edx
	lea ecx,[esp+0x35C]
	push ecx
	lea edx,[esp+0x230]
	push edx
	lea ecx,[esp+0x344]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	lea edx,[esp+0x218]
	push edx
	push eax
	lea eax,[esp+0x490]
	push eax
	mov byte ptr [esp+0x54C],0x28
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x478],8
	jne Block211

 Block209:
	mov eax,dword ptr [esp+0x480]
	xor ecx,ecx
	mov word ptr [esp+0x478],cx
	test eax,eax
	je Block212

 Block210:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block212

 Block211:
	lea edx,[esp+0x478]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block212:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x530],bl
	test eax,eax
	je Block214

 Block213:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block214:
	cmp word ptr [esp+0x208],8
	mov byte ptr [esp+0x530],0x26
	jne Block217

 Block215:
	xor eax,eax
	mov word ptr [esp+0x208],ax
	mov eax,dword ptr [esp+0x210]
	test eax,eax
	je Block218

 Block216:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block218

 Block217:
	lea ecx,[esp+0x208]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block218:
	cmp word ptr [esp+0x338],8
	mov byte ptr [esp+0x530],0x25
	jne Block225

 Block219:
	mov eax,dword ptr [esp+0x340]
	xor edx,edx
	mov word ptr [esp+0x338],dx
	test eax,eax
	je Block221

 Block220:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block221:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block222:
	cmp word ptr [esp+0x228],8
	mov byte ptr [esp+0x530],0x24
	jne Block226

 Block223:
	mov eax,dword ptr [esp+0x230]
	xor ecx,ecx
	mov word ptr [esp+0x228],cx
	test eax,eax
	je Block227

 Block224:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block227

 Block225:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x338]
	push eax
	call ebx
	jmp Block222

 Block226:
	lea edx,[esp+0x228]
	push edx
	call ebx

 Block227:
	cmp word ptr [esp+0x358],8
	mov byte ptr [esp+0x530],0x23
	jne Block230

 Block228:
	xor eax,eax
	mov word ptr [esp+0x358],ax
	mov eax,dword ptr [esp+0x360]
	test eax,eax
	je Block231

 Block229:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block231

 Block230:
	lea ecx,[esp+0x358]
	push ecx
	call ebx

 Block231:
	cmp word ptr [esp+0x248],8
	mov byte ptr [esp+0x530],1
	jne Block234

 Block232:
	mov eax,dword ptr [esp+0x250]
	xor edx,edx
	mov word ptr [esp+0x248],dx
	test eax,eax
	je Block235

 Block233:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block235

 Block234:
	lea eax,[esp+0x248]
	push eax
	call ebx

 Block235:
	lea ecx,[esp+0x3B8]
	push ecx
	call esi
	lea edx,[esp+0x3B8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block237

 Block236:
	push eax
	call _com_issue_error

 Block237:
	lea eax,[esp+0x288]
	push eax
	mov byte ptr [esp+0x534],0x29
	call esi
	lea ecx,[esp+0x288]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block239

 Block238:
	push eax
	call _com_issue_error

 Block239:
	lea edx,[esp+0x398]
	push edx
	mov byte ptr [esp+0x534],0x2A
	call esi
	lea eax,[esp+0x398]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block241

 Block240:
	push eax
	call _com_issue_error

 Block241:
	lea ecx,[esp+0x268]
	push ecx
	mov byte ptr [esp+0x534],0x2B
	call esi
	lea edx,[esp+0x268]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block243

 Block242:
	push eax
	call _com_issue_error

 Block243:
	mov eax,3
	mov word ptr [esp+0x58],ax
	mov dword ptr [esp+0x60],edi
	mov ecx,dword ptr [esp+0x53C]
	mov edx,dword ptr [ecx+0x34]
	push 2
	push edx
	lea eax,[esp+0x48]
	mov bl,0x2D
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x53C],bl
	call CDropPool::GetMoneyIcon
	mov eax,dword ptr [eax]
	lea ecx,[esp+0x3B8]
	push ecx
	lea edx,[esp+0x28C]
	push edx
	lea ecx,[esp+0x3A0]
	push ecx
	lea edx,[esp+0x274]
	push edx
	lea ecx,[esp+0x68]
	push ecx
	mov ecx,dword ptr [esp+0x28]
	push eax
	lea edx,[esp+0x430]
	push edx
	mov byte ptr [esp+0x54C],0x2E
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x418],8
	jne Block246

 Block244:
	xor eax,eax
	mov word ptr [esp+0x418],ax
	mov eax,dword ptr [esp+0x420]
	test eax,eax
	je Block247

 Block245:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block247

 Block246:
	lea ecx,[esp+0x418]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block247:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x530],bl
	test eax,eax
	je Block249

 Block248:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block249:
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x530],0x2C
	jne Block252

 Block250:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	test eax,eax
	je Block253

 Block251:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block253

 Block252:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block253:
	cmp word ptr [esp+0x268],8
	mov byte ptr [esp+0x530],0x2B
	jne Block260

 Block254:
	xor eax,eax
	mov word ptr [esp+0x268],ax
	mov eax,dword ptr [esp+0x270]
	test eax,eax
	je Block256

 Block255:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block256:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block257:
	cmp word ptr [esp+0x398],8
	mov byte ptr [esp+0x530],0x2A
	jne Block261

 Block258:
	mov eax,dword ptr [esp+0x3A0]
	xor edx,edx
	mov word ptr [esp+0x398],dx
	test eax,eax
	je Block262

 Block259:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block262

 Block260:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x268]
	push ecx
	call ebx
	jmp Block257

 Block261:
	lea eax,[esp+0x398]
	push eax
	call ebx

 Block262:
	cmp word ptr [esp+0x288],8
	mov byte ptr [esp+0x530],0x29
	jne Block265

 Block263:
	mov eax,dword ptr [esp+0x290]
	xor ecx,ecx
	mov word ptr [esp+0x288],cx
	test eax,eax
	je Block266

 Block264:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block266

 Block265:
	lea edx,[esp+0x288]
	push edx
	call ebx

 Block266:
	cmp word ptr [esp+0x3B8],8
	mov byte ptr [esp+0x530],1
	jne Block269

 Block267:
	xor eax,eax
	mov word ptr [esp+0x3B8],ax
	mov eax,dword ptr [esp+0x3C0]
	test eax,eax
	je Block270

 Block268:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block270

 Block269:
	lea ecx,[esp+0x3B8]
	push ecx
	call ebx

 Block270:
	lea edx,[esp+0x98]
	push edx
	call esi
	lea eax,[esp+0x98]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block272

 Block271:
	push eax
	call _com_issue_error

 Block272:
	lea ecx,[esp+0x78]
	push ecx
	mov byte ptr [esp+0x534],0x2F
	call esi
	lea edx,[esp+0x78]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block274

 Block273:
	push eax
	call _com_issue_error

 Block274:
	lea eax,[esp+0x68]
	push eax
	mov byte ptr [esp+0x534],0x30
	call esi
	lea ecx,[esp+0x68]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block276

 Block275:
	push eax
	call _com_issue_error

 Block276:
	lea edx,[esp+0x3D8]
	push edx
	mov byte ptr [esp+0x534],0x31
	call esi
	lea eax,[esp+0x3D8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block278

 Block277:
	push eax
	call _com_issue_error

 Block278:
	mov ecx,3
	mov word ptr [esp+0x2A8],cx
	mov dword ptr [esp+0x2B0],edi
	mov edx,dword ptr [esp+0x53C]
	mov eax,dword ptr [edx+0x34]
	push ecx
	push eax
	lea ecx,[esp+0x38]
	push ecx
	mov bl,0x33
	mov ecx,ebp
	mov byte ptr [esp+0x53C],bl
	call CDropPool::GetMoneyIcon
	mov eax,dword ptr [eax]
	lea edx,[esp+0x98]
	push edx
	lea ecx,[esp+0x7C]
	push ecx
	lea edx,[esp+0x70]
	push edx
	lea ecx,[esp+0x3E4]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	lea edx,[esp+0x2B8]
	push edx
	push eax
	lea eax,[esp+0x440]
	push eax
	mov byte ptr [esp+0x54C],0x34
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x428],8
	jne Block281

 Block279:
	mov eax,dword ptr [esp+0x430]
	xor ecx,ecx
	mov word ptr [esp+0x428],cx
	test eax,eax
	je Block282

 Block280:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block282

 Block281:
	lea edx,[esp+0x428]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block282:
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x530],bl
	test eax,eax
	je Block284

 Block283:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block284:
	mov ebp,8
	mov byte ptr [esp+0x530],0x32
	cmp word ptr [esp+0x2A8],bp
	jne Block291

 Block285:
	xor eax,eax
	mov word ptr [esp+0x2A8],ax
	mov eax,dword ptr [esp+0x2B0]
	test eax,eax
	je Block287

 Block286:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block287:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block288:
	mov byte ptr [esp+0x530],0x31
	cmp word ptr [esp+0x3D8],bp
	jne Block292

 Block289:
	mov eax,dword ptr [esp+0x3E0]
	xor edx,edx
	mov word ptr [esp+0x3D8],dx
	test eax,eax
	je Block293

 Block290:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block293

 Block291:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x2A8]
	push ecx
	call edi
	jmp Block288

 Block292:
	lea eax,[esp+0x3D8]
	push eax
	call edi

 Block293:
	mov byte ptr [esp+0x530],0x30
	cmp word ptr [esp+0x68],bp
	jne Block296

 Block294:
	mov eax,dword ptr [esp+0x70]
	xor ecx,ecx
	mov word ptr [esp+0x68],cx
	test eax,eax
	je Block297

 Block295:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block297

 Block296:
	lea edx,[esp+0x68]
	push edx
	call edi

 Block297:
	mov byte ptr [esp+0x530],0x2F
	cmp word ptr [esp+0x78],bp
	jne Block300

 Block298:
	xor eax,eax
	mov word ptr [esp+0x78],ax
	mov eax,dword ptr [esp+0x80]
	test eax,eax
	je Block301

 Block299:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block301

 Block300:
	lea ecx,[esp+0x78]
	push ecx
	call edi

 Block301:
	mov byte ptr [esp+0x530],1
	cmp word ptr [esp+0x98],bp
	jne Block304

 Block302:
	mov eax,dword ptr [esp+0xA0]
	xor edx,edx
	mov word ptr [esp+0x98],dx
	test eax,eax
	je Block305

 Block303:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block305

 Block304:
	lea eax,[esp+0x98]
	push eax
	call edi

 Block305:
	lea ecx,[esp+0xD8]
	push ecx
	call esi
	lea edx,[esp+0xD8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block307

 Block306:
	push eax
	call _com_issue_error

 Block307:
	lea eax,[esp+0xB8]
	mov bl,0x35
	push eax
	mov byte ptr [esp+0x534],bl
	call esi
	lea ecx,[esp+0xB8]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block309

 Block308:
	push eax
	call _com_issue_error

 Block309:
	mov ecx,dword ptr [esp+0x14]
	lea edx,[esp+0xD8]
	push edx
	lea eax,[esp+0xBC]
	push eax
	push 0x20
	mov byte ptr [esp+0x53C],0x36
	call IWzGr2DLayer::Animate
	mov byte ptr [esp+0x530],bl
	cmp word ptr [esp+0xB8],bp
	jne Block312

 Block310:
	mov eax,dword ptr [esp+0xC0]
	xor ecx,ecx
	mov word ptr [esp+0xB8],cx
	test eax,eax
	je Block313

 Block311:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block313

 Block312:
	lea edx,[esp+0xB8]
	push edx
	call edi

 Block313:
	mov byte ptr [esp+0x530],1
	cmp word ptr [esp+0xD8],bp
	jne Block315

 Block314:
	xor eax,eax
	mov word ptr [esp+0xD8],ax
	mov eax,dword ptr [esp+0xE0]
	jmp Block162

 Block315:
	lea ecx,[esp+0xD8]
	push ecx
	call edi
	jmp Block419

 Block316:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x178]
	push edx
	call esi
	lea eax,[esp+0x178]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block318

 Block317:
	push eax
	call _com_issue_error

 Block318:
	lea ecx,[esp+0x158]
	push ecx
	mov byte ptr [esp+0x534],0x37
	call esi
	lea edx,[esp+0x158]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block320

 Block319:
	push eax
	call _com_issue_error

 Block320:
	lea eax,[esp+0x138]
	push eax
	mov byte ptr [esp+0x534],0x38
	call esi
	lea ecx,[esp+0x138]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block322

 Block321:
	push eax
	call _com_issue_error

 Block322:
	lea edx,[esp+0x118]
	push edx
	mov byte ptr [esp+0x534],0x39
	call esi
	lea eax,[esp+0x118]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block324

 Block323:
	push eax
	call _com_issue_error

 Block324:
	mov ecx,3
	mov word ptr [esp+0xF8],cx
	mov dword ptr [esp+0x100],0xFA0
	mov edx,dword ptr [esp+0x53C]
	mov eax,dword ptr [edx+0x34]
	push 0
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	mov bl,0x3B
	mov ecx,ebp
	mov byte ptr [esp+0x53C],bl
	call CDropPool::GetMoneyIcon
	mov eax,dword ptr [eax]
	lea edx,[esp+0x178]
	push edx
	lea ecx,[esp+0x15C]
	push ecx
	lea edx,[esp+0x140]
	push edx
	lea ecx,[esp+0x124]
	push ecx
	lea edx,[esp+0x108]
	push edx
	push eax
	lea eax,[esp+0x460]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x54C],0x3C
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x448],8
	jne Block327

 Block325:
	mov eax,dword ptr [esp+0x450]
	xor ecx,ecx
	mov word ptr [esp+0x448],cx
	test eax,eax
	je Block328

 Block326:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block328

 Block327:
	lea edx,[esp+0x448]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block328:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x530],bl
	test eax,eax
	je Block330

 Block329:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block330:
	mov ebx,8
	mov byte ptr [esp+0x530],0x3A
	cmp word ptr [esp+0xF8],bx
	jne Block337

 Block331:
	xor eax,eax
	mov word ptr [esp+0xF8],ax
	mov eax,dword ptr [esp+0x100]
	test eax,eax
	je Block333

 Block332:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block333:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block334:
	mov byte ptr [esp+0x530],0x39
	cmp word ptr [esp+0x118],bx
	jne Block338

 Block335:
	mov eax,dword ptr [esp+0x120]
	xor edx,edx
	mov word ptr [esp+0x118],dx
	test eax,eax
	je Block339

 Block336:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block339

 Block337:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0xF8]
	push ecx
	call edi
	jmp Block334

 Block338:
	lea eax,[esp+0x118]
	push eax
	call edi

 Block339:
	mov byte ptr [esp+0x530],0x38
	cmp word ptr [esp+0x138],bx
	jne Block342

 Block340:
	mov eax,dword ptr [esp+0x140]
	xor ecx,ecx
	mov word ptr [esp+0x138],cx
	test eax,eax
	je Block343

 Block341:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block343

 Block342:
	lea edx,[esp+0x138]
	push edx
	call edi

 Block343:
	mov byte ptr [esp+0x530],0x37
	cmp word ptr [esp+0x158],bx
	jne Block346

 Block344:
	xor eax,eax
	mov word ptr [esp+0x158],ax
	mov eax,dword ptr [esp+0x160]
	test eax,eax
	je Block347

 Block345:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block347

 Block346:
	lea ecx,[esp+0x158]
	push ecx
	call edi

 Block347:
	mov byte ptr [esp+0x530],1
	cmp word ptr [esp+0x178],bx
	jne Block350

 Block348:
	mov eax,dword ptr [esp+0x180]
	xor edx,edx
	mov word ptr [esp+0x178],dx
	test eax,eax
	je Block351

 Block349:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block351

 Block350:
	lea eax,[esp+0x178]
	push eax
	call edi

 Block351:
	lea ecx,[esp+0x218]
	push ecx
	call esi
	lea edx,[esp+0x218]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block353

 Block352:
	push eax
	call _com_issue_error

 Block353:
	lea eax,[esp+0x1F8]
	push eax
	mov byte ptr [esp+0x534],0x3D
	call esi
	lea ecx,[esp+0x1F8]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block355

 Block354:
	push eax
	call _com_issue_error

 Block355:
	lea edx,[esp+0x1D8]
	push edx
	mov byte ptr [esp+0x534],0x3E
	call esi
	lea eax,[esp+0x1D8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block357

 Block356:
	push eax
	call _com_issue_error

 Block357:
	lea ecx,[esp+0x1B8]
	push ecx
	mov byte ptr [esp+0x534],0x3F
	call esi
	lea edx,[esp+0x1B8]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block359

 Block358:
	push eax
	call _com_issue_error

 Block359:
	mov eax,3
	mov edi,0x78
	mov word ptr [esp+0x198],ax
	mov dword ptr [esp+0x1A0],edi
	mov ecx,dword ptr [esp+0x53C]
	mov edx,dword ptr [ecx+0x34]
	push 1
	push edx
	lea eax,[esp+0x44]
	mov bl,0x41
	push eax
	mov ecx,ebp
	mov byte ptr [esp+0x53C],bl
	call CDropPool::GetMoneyIcon
	mov eax,dword ptr [eax]
	lea ecx,[esp+0x218]
	push ecx
	lea edx,[esp+0x1FC]
	push edx
	lea ecx,[esp+0x1E0]
	push ecx
	lea edx,[esp+0x1C4]
	push edx
	lea ecx,[esp+0x1A8]
	push ecx
	mov ecx,dword ptr [esp+0x28]
	push eax
	lea edx,[esp+0x480]
	push edx
	mov byte ptr [esp+0x54C],0x42
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x468],8
	jne Block362

 Block360:
	xor eax,eax
	mov word ptr [esp+0x468],ax
	mov eax,dword ptr [esp+0x470]
	test eax,eax
	je Block363

 Block361:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block363

 Block362:
	lea ecx,[esp+0x468]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block363:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x530],bl
	test eax,eax
	je Block365

 Block364:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block365:
	cmp word ptr [esp+0x198],8
	mov byte ptr [esp+0x530],0x40
	jne Block368

 Block366:
	mov eax,dword ptr [esp+0x1A0]
	xor ecx,ecx
	mov word ptr [esp+0x198],cx
	test eax,eax
	je Block369

 Block367:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block369

 Block368:
	lea edx,[esp+0x198]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block369:
	cmp word ptr [esp+0x1B8],8
	mov byte ptr [esp+0x530],0x3F
	jne Block376

 Block370:
	xor eax,eax
	mov word ptr [esp+0x1B8],ax
	mov eax,dword ptr [esp+0x1C0]
	test eax,eax
	je Block372

 Block371:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block372:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block373:
	cmp word ptr [esp+0x1D8],8
	mov byte ptr [esp+0x530],0x3E
	jne Block377

 Block374:
	mov eax,dword ptr [esp+0x1E0]
	xor edx,edx
	mov word ptr [esp+0x1D8],dx
	test eax,eax
	je Block378

 Block375:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block378

 Block376:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x1B8]
	push ecx
	call ebx
	jmp Block373

 Block377:
	lea eax,[esp+0x1D8]
	push eax
	call ebx

 Block378:
	cmp word ptr [esp+0x1F8],8
	mov byte ptr [esp+0x530],0x3D
	jne Block381

 Block379:
	mov eax,dword ptr [esp+0x200]
	xor ecx,ecx
	mov word ptr [esp+0x1F8],cx
	test eax,eax
	je Block382

 Block380:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block382

 Block381:
	lea edx,[esp+0x1F8]
	push edx
	call ebx

 Block382:
	cmp word ptr [esp+0x218],8
	mov byte ptr [esp+0x530],1
	jne Block385

 Block383:
	xor eax,eax
	mov word ptr [esp+0x218],ax
	mov eax,dword ptr [esp+0x220]
	test eax,eax
	je Block386

 Block384:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block386

 Block385:
	lea ecx,[esp+0x218]
	push ecx
	call ebx

 Block386:
	lea edx,[esp+0x498]
	push edx
	call esi
	lea eax,[esp+0x498]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block388

 Block387:
	push eax
	call _com_issue_error

 Block388:
	lea ecx,[esp+0x298]
	push ecx
	mov byte ptr [esp+0x534],0x43
	call esi
	lea edx,[esp+0x298]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block390

 Block389:
	push eax
	call _com_issue_error

 Block390:
	lea eax,[esp+0x278]
	push eax
	mov byte ptr [esp+0x534],0x44
	call esi
	lea ecx,[esp+0x278]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block392

 Block391:
	push eax
	call _com_issue_error

 Block392:
	lea edx,[esp+0x258]
	push edx
	mov byte ptr [esp+0x534],0x45
	call esi
	lea eax,[esp+0x258]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block394

 Block393:
	push eax
	call _com_issue_error

 Block394:
	mov ecx,3
	mov word ptr [esp+0x238],cx
	mov dword ptr [esp+0x240],edi
	mov edx,dword ptr [esp+0x53C]
	mov eax,dword ptr [edx+0x34]
	push 2
	push eax
	lea ecx,[esp+0x4C]
	push ecx
	mov bl,0x47
	mov ecx,ebp
	mov byte ptr [esp+0x53C],bl
	call CDropPool::GetMoneyIcon
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x14]
	lea edx,[esp+0x498]
	push edx
	lea ecx,[esp+0x29C]
	push ecx
	lea edx,[esp+0x280]
	push edx
	lea ecx,[esp+0x264]
	push ecx
	lea edx,[esp+0x248]
	push edx
	push eax
	lea eax,[esp+0x410]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x54C],0x48
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x3F8],8
	jne Block397

 Block395:
	mov eax,dword ptr [esp+0x400]
	xor ecx,ecx
	mov word ptr [esp+0x3F8],cx
	test eax,eax
	je Block398

 Block396:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block398

 Block397:
	lea edx,[esp+0x3F8]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block398:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x530],bl
	test eax,eax
	je Block400

 Block399:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block400:
	cmp word ptr [esp+0x238],8
	mov byte ptr [esp+0x530],0x46
	jne Block403

 Block401:
	xor eax,eax
	mov word ptr [esp+0x238],ax
	mov eax,dword ptr [esp+0x240]
	test eax,eax
	je Block404

 Block402:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block404

 Block403:
	lea ecx,[esp+0x238]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block404:
	mov ebx,8
	mov byte ptr [esp+0x530],0x45
	cmp word ptr [esp+0x258],bx
	jne Block407

 Block405:
	mov eax,dword ptr [esp+0x260]
	xor edx,edx
	mov word ptr [esp+0x258],dx
	test eax,eax
	je Block408

 Block406:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block408

 Block407:
	lea eax,[esp+0x258]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block408:
	mov byte ptr [esp+0x530],0x44
	cmp word ptr [esp+0x278],bx
	jne Block411

 Block409:
	mov eax,dword ptr [esp+0x280]
	xor ecx,ecx
	mov word ptr [esp+0x278],cx
	test eax,eax
	je Block412

 Block410:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block412

 Block411:
	lea edx,[esp+0x278]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block412:
	mov byte ptr [esp+0x530],0x43
	cmp word ptr [esp+0x298],bx
	jne Block415

 Block413:
	xor eax,eax
	mov word ptr [esp+0x298],ax
	mov eax,dword ptr [esp+0x2A0]
	test eax,eax
	je Block416

 Block414:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block416

 Block415:
	lea ecx,[esp+0x298]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block416:
	lea ecx,[esp+0x498]
	mov byte ptr [esp+0x530],1
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x4CC]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x4BC]
	mov byte ptr [esp+0x534],0x49
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x50C]
	mov byte ptr [esp+0x534],0x4A
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x4EC]
	mov byte ptr [esp+0x534],0x4B
	call Ztl_variant_t::_ctor_1
	mov edx,3
	mov word ptr [esp+0x4A8],dx
	mov dword ptr [esp+0x4B0],edi
	mov eax,dword ptr [esp+0x53C]
	mov ecx,dword ptr [eax+0x34]
	push edx
	push ecx
	lea edx,[esp+0x54]
	mov bl,0x4D
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x53C],bl
	call CDropPool::GetMoneyIcon
	mov eax,dword ptr [eax]
	lea ecx,[esp+0x4C8]
	push ecx
	lea edx,[esp+0x4BC]
	push edx
	lea ecx,[esp+0x510]
	push ecx
	lea edx,[esp+0x4F4]
	push edx
	lea ecx,[esp+0x4B8]
	push ecx
	push eax
	lea edx,[esp+0x530]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x54C],0x4E
	call IWzGr2DLayer::InsertCanvas
	lea ecx,[esp+0x518]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x530],bl
	test eax,eax
	je Block418

 Block417:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block418:
	lea ecx,[esp+0x4A8]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x4E8]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x508]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x4B8]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x4C8]
	mov byte ptr [esp+0x530],1
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[esp+0x4FC]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x4DC]
	mov byte ptr [esp+0x534],0x4F
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x4F8]
	push eax
	lea ecx,[esp+0x4DC]
	push ecx
	push 0x20
	mov ecx,esi
	mov byte ptr [esp+0x53C],0x50
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x4D8]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x4F8]
	call Ztl_variant_t::~Ztl_variant_t

 Block419:
	mov eax,dword ptr [esp+0x14]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0x534],0
	call eax
	lea ecx,[esp+0x538]
	mov dword ptr [esp+0x530],0xFFFFFFFF
	call ZRef<DROP>::~ZRef<DROP>
	mov ecx,dword ptr [esp+0x528]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x520
	ret 8
}
}
