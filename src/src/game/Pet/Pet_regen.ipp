#include "regen.hpp"
// Pet.ipp
#include "Pet.hpp"

// CDurationChecker::~CDurationChecker
__SUB_CLASS_THIS0(002A01E0, __thiscall, 47995,  CDurationChecker, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset CDurationChecker::`vftable'
	add ecx,0x30
	jmp  ZArray<long>::RemoveAll
}
}
// CPet::IsInExceptionListPet
__SUB_CLASS_THIS(0029FCA0, __thiscall, 47427,  CPet, int32_t, long) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	xor edx,edx
	jmp Block2

 Block2:
	mov eax,dword ptr [ecx+0x8C]
	test eax,eax
	je Block7

 Block3:
	cmp edx,dword ptr [eax-4]
	jae Block7

 Block4:
	cmp dword ptr [eax+edx*4],esi
	je Block6

 Block5:
	inc edx
	jmp Block2

 Block6:
	mov eax,1
	pop esi
	ret 4

 Block7:
	xor eax,eax
	pop esi
	ret 4
}
}
// CPet::DoActionByUserAction
_SUB_EXCEPTION_HANDLER(2A2710)
// 6A297C
static uint8_t _SUB_2A2710_LOOKUP_TABLE_0[12] = {
0, 1, 1, 0, 0, 1, 1, 1, 0, 141, 73, 0, 
};
__SUB_CLASS_THIS(002A2710, __thiscall, 47437,  CPet, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2A2710
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
	mov dword ptr [esp+0x10],0
	mov eax,dword ptr [esi+0x88]
	cmp dword ptr [eax+0x40],0
	je Block5

 Block1:
	mov eax,dword ptr [esi+0xF0]
	push 0
	push eax
	call CPet::MoveAction2RawAction
	mov ecx,dword ptr [esi+0xF8]
	cmp ecx,0xFFFFFFFF
	mov edi,ecx
	jg Block3

 Block2:
	mov edi,eax

 Block3:
	cmp edi,8
	ja Block6

 Block4:
	movzx ecx,byte ptr [edi+_SUB_2A2710_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block5
cmp ECX, 1
je Block6


 Block5:
	xor eax,eax
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 4

 Block6:
	push ecx
	mov dword ptr [esp+0x14],esp
	mov ecx,esp
	push offset _S_SLEEP
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x88]
	call CPetTemplate::GetActionNo
	cmp edi,eax
	je Block5

 Block7:
	mov eax,dword ptr [esp+0x24]
	cmp edi,5
	jne Block9

 Block8:
	cmp eax,4
	jne Block5

 Block9:
	mov dword ptr [esp+0x24],0
	mov dword ptr [esp+0x1C],0
	cmp eax,6
	ja Block23

 Block10:
	cmp EAX, 0
je Block11
cmp EAX, 1
je Block12
cmp EAX, 2
je Block16
cmp EAX, 3
je Block17
cmp EAX, 4
je Block18
cmp EAX, 5
je Block15
cmp EAX, 6
je Block19


 Block11:
	push offset _S_START
	lea ecx,[esp+0x14]
	call _xbstr_t::_ctor_0
	lea edx,[esp+0x10]
	push edx
	jmp Block22

 Block12:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCurFieldID
	push eax
	call is_town_field_id
	add esp,4
	lea ecx,[esp+0x10]
	test eax,eax
	je Block14

 Block13:
	push offset _S_LOVE
	jmp Block21

 Block14:
	push offset _S_ANGRY
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0x10]
	push ecx
	jmp Block22

 Block15:
	push offset _S_ANGRY
	lea ecx,[esp+0x14]
	call _xbstr_t::_ctor_0
	lea edx,[esp+0x10]
	push edx
	jmp Block22

 Block16:
	push offset _S_CRY
	jmp Block20

 Block17:
	push offset _S_QUESTION
	lea ecx,[esp+0x14]
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0x10]
	push ecx
	jmp Block22

 Block18:
	push offset _S_LOVE
	lea ecx,[esp+0x14]
	call _xbstr_t::_ctor_0
	lea edx,[esp+0x10]
	push edx
	jmp Block22

 Block19:
	push offset _S_SLEEP

 Block20:
	lea ecx,[esp+0x14]

 Block21:
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x10]
	push eax

 Block22:
	lea ecx,[esp+0x28]
	call Ztl_bstr_t::op_assign
	lea ecx,[esp+0x10]
	call Ztl_bstr_t::~Ztl_bstr_t

 Block23:
	push offset _S_SLEEP
	lea ecx,[esp+0x14]
	call _xbstr_t::_ctor_0
	lea ecx,[esp+0x10]
	push ecx
	lea ecx,[esp+0x28]
	call _xbstr_t::operator!=
	mov edi,0x1388
	test al,al
	je Block26

 Block24:
	cmp dword ptr [esi+0xB8],edi
	jle Block26

 Block25:
	mov bl,1
	jmp Block27

 Block26:
	xor bl,bl

 Block27:
	mov ecx,dword ptr [esp+0x10]
	test ecx,ecx
	je Block29

 Block28:
	call _xbstr_t::Data_t::Release

 Block29:
	test bl,bl
	je Block31

 Block30:
	mov dword ptr [esi+0xB8],edi

 Block31:
	mov ebx,dword ptr [esp+0x24]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x14],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block33

 Block32:
	lea edx,[ebx+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block33:
	mov ecx,dword ptr [esi+0x88]
	call CPetTemplate::GetActionNo
	mov edi,eax
	test edi,edi
	jge Block37

 Block34:
	test ebx,ebx
	je Block36

 Block35:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release

 Block36:
	xor eax,eax
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 4

 Block37:
	push 1
	push 0
	push 1
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_
	call _xbstr_t::_ctor_0
	push edi
	push 0
	mov ecx,esi
	call CPet::DoAction
	test ebx,ebx
	je Block39

 Block38:
	mov ecx,ebx
	call _xbstr_t::Data_t::Release

 Block39:
	mov eax,1
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 4
}
}
// CPet::HangOnBack
_SUB_EXCEPTION_HANDLER(2A29B0)
__SUB_CLASS_THIS(002A29B0, __thiscall, 47438,  CPet, void, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2A29B0
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
	mov eax,dword ptr [esp+0x40]
	xor ebx,ebx
	cmp dword ptr [esp+0x44],ebx
	jne Block9

 Block1:
	cmp dword ptr [esi+0x11C],eax
	jne Block9

 Block2:
	cmp dword ptr [esi+0x9C],ebx
	jne Block9

 Block3:
	cmp eax,ebx
	je Block7

 Block4:
	mov eax,dword ptr [esi+0x120]
	cmp eax,0x78
	jge Block7

 Block5:
	add eax,0x1E
	cmp eax,0x78
	mov dword ptr [esi+0x120],eax
	jl Block7

 Block6:
	push 0xFFFFFFFF
	lea ecx,[esi+0x124]
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putcolor

 Block7:
	mov eax,dword ptr [esi+0x94]
	cmp dword ptr [eax+0x638],ebx
	je Block75

 Block8:
	push ebx
	jmp Block74

 Block9:
	mov dword ptr [esi+0x11C],eax
	cmp eax,ebx
	je Block50

 Block10:
	mov eax,dword ptr [esi+0xF8]
	cmp eax,0xFFFFFFFF
	jle Block12

 Block11:
	mov dword ptr [esi+0xF8],0xFFFFFFFF
	call CPet::PrepareActionLayer

 Block12:
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x10]
	call eax
	test eax,eax
	jne Block14

 Block13:
	mov dword ptr [esp+0x44],ebx

 Block14:
	cmp dword ptr [esi+0x1F0],ebx
	jne Block17

 Block15:
	mov eax,dword ptr [esi+0x18]
	cmp eax,ebx
	je Block17

 Block16:
	mov dword ptr [esi+0x18],ebx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block17:
	mov ecx,dword ptr [esi+0x94]
	lea eax,[esp+0x40]
	push eax
	add ecx,0x88
	call CAvatar::GetBodyOrigin
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0x38],ebx
	mov word ptr [esp+0x10],cx
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block19

 Block18:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block19:
	mov edi,dword ptr [esi+0x124]
	mov byte ptr [esp+0x38],1
	cmp edi,ebx
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	mov edx,dword ptr [esp+0x10]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push edi
	call eax
	cmp eax,ebx
	jge Block23

 Block22:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block23:
	cmp word ptr [esp+0x10],8
	mov byte ptr [esp+0x38],0
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x18]
	xor ecx,ecx
	mov word ptr [esp+0x10],cx
	cmp eax,ebx
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea edx,[esp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebx
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block29:
	mov ecx,dword ptr [esi+0x94]
	lea eax,[esp+0x40]
	push eax
	add ecx,0x88
	call CAvatar::GetLayerUnderFace
	mov eax,dword ptr [eax]
	mov ebx,2
	mov ecx,0xD
	mov dword ptr [esp+0x38],ebx
	mov word ptr [esp+0x10],cx
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block31

 Block30:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block31:
	mov edi,dword ptr [esi+0x124]
	mov byte ptr [esp+0x38],3
	test edi,edi
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	mov edx,dword ptr [esp+0x10]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x24]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push edi
	call eax
	test eax,eax
	jge Block35

 Block34:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block35:
	cmp word ptr [esp+0x10],8
	mov byte ptr [esp+0x38],bl
	jne Block38

 Block36:
	mov eax,dword ptr [esp+0x18]
	xor ecx,ecx
	mov word ptr [esp+0x10],cx
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea edx,[esp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block41:
	mov edi,dword ptr [esi+0x124]
	test edi,edi
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xB4]
	push 3
	push edi
	call ecx
	test eax,eax
	jge Block45

 Block44:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block45:
	mov edi,dword ptr [esi+0x124]
	test edi,edi
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0xE0]
	push 0
	push edi
	call eax
	test eax,eax
	jge Block49

 Block48:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block49:
	mov dword ptr [esi+0x120],0
	xor ebx,ebx
	jmp Block70

 Block50:
	mov eax,dword ptr [esi+0x90]
	mov ecx,0xD
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	cmp eax,ebx
	je Block52

 Block51:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block52:
	mov edi,dword ptr [esi+0x124]
	mov dword ptr [esp+0x38],4
	cmp edi,ebx
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	mov edx,dword ptr [esp+0x20]
	mov ecx,dword ptr [edi]
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
	push edi
	call eax
	cmp eax,ebx
	jge Block56

 Block55:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block56:
	cmp word ptr [esp+0x20],8
	mov dword ptr [esp+0x38],0xFFFFFFFF
	jne Block59

 Block57:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebx
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	mov edi,dword ptr [esi+0x124]
	cmp edi,ebx
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
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
	cmp eax,ebx
	jge Block64

 Block63:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block64:
	mov ecx,esi
	call CPet::SetLayerZ
	mov edi,dword ptr [esi+0x124]
	cmp edi,ebx
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push edi
	call edx
	cmp eax,ebx
	jge Block68

 Block67:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block68:
	mov ecx,dword ptr [esi+0x94]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x10]
	call edx
	test eax,eax
	jne Block70

 Block69:
	mov dword ptr [esp+0x44],1

 Block70:
	mov ecx,dword ptr [esi+0x94]
	cmp dword ptr [ecx+0x638],ebx
	je Block72

 Block71:
	mov dword ptr [esp+0x44],ebx

 Block72:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x10]
	call edx
	test eax,eax
	jne Block75

 Block73:
	mov eax,dword ptr [esp+0x44]
	push eax

 Block74:
	mov ecx,esi
	call CLife::ShowNameTag

 Block75:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x2C
	ret 8
}
}
// CPet::GetRTTI
__SUB_CLASS_THIS0(002A0410, __thiscall, 47456,  CPet, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CPet::ms_RTTI_CPet
	ret
}
}
// CDurationChecker::DurationQueue::DurationQueue
__SUB_CLASS_THIS(004E2D60, __thiscall, 48008,  CDurationChecker::DurationQueue, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push ebx
	push esi
	mov esi,ecx
	push edi
	lea ecx,[esp+0x10]
	push ecx
	lea edi,[esi+0x14]
	mov dword ptr [esi],eax
	xor ebx,ebx
	push eax
	mov ecx,edi
	mov dword ptr [edi],ebx
	call ZArray<long>::_Alloc
	xor eax,eax
	cmp dword ptr [esi],ebx
	jle Block2

 Block1:
	mov edx,dword ptr [edi]
	mov dword ptr [edx+eax*4],ebx
	inc eax
	cmp eax,dword ptr [esi]
	jl Block1

 Block2:
	pop edi
	mov dword ptr [esi+4],ebx
	mov dword ptr [esi+8],ebx
	mov dword ptr [esi+0xC],ebx
	mov dword ptr [esi+0x10],ebx
	mov eax,esi
	pop esi
	pop ebx
	ret 4
}
}
// CPet::SetMoveAction
__SUB_CLASS_THIS(002A3830, __thiscall, 47409,  CPet, void, long, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+8],0
	mov eax,dword ptr [esp+4]
	jne Block2

 Block1:
	cmp eax,dword ptr [ecx+0xF0]
	je Block4

 Block2:
	cmp dword ptr [ecx+0xF8],0xFFFFFFFF
	mov dword ptr [ecx+0xF0],eax
	jg Block4

 Block3:
	call CPet::PrepareActionLayer

 Block4:
	ret 8
}
}
// CPet::CanPickupMeso
__SUB_CLASS_THIS0(002A0220, __thiscall, 47449,  CPet, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [_D_G_PSTAGE+4]
	test esi,esi
	je Block3

 Block1:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esi+4]
	push offset CField::ms_RTTI_CField
	call edx
	test eax,eax
	je Block3

 Block2:
	lea ecx,[esi+0x16C]
	call TSecType<unsigned long>::GetData
	xor ecx,ecx
	cmp eax,0xC764EC0
	sete cl
	pop esi
	mov eax,ecx
	ret

 Block3:
	xor eax,eax
	pop esi
	ret
}
}
// CPet::CPet
_SUB_EXCEPTION_HANDLER(4E3DF0)
__SUB_CLASS_THIS0(004E3DF0, __thiscall, 47392,  CPet, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E3DF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x10],esi
	call CLife::_ctor_default
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CPet::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CPet::`vftable'{for `IVecCtrlOwner'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CPet::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x20],edi
	mov dword ptr [esi+0x8C],edi
	mov dword ptr [esi+0x90],edi
	mov dword ptr [esi+0x98],edi
	push offset CPet::ADDITIONALLAYER::~ADDITIONALLAYER
	push offset CPet::ADDITIONALLAYER::_ctor_default
	push 2
	push 0x18
	lea eax,[esi+0xC0]
	push eax
	mov byte ptr [esp+0x34],3
	mov dword ptr [esi+0xB4],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xBC],edi
	call __eh_vector_ctor_iterator
	lea edx,[esp+0xF]
	push edx
	lea ecx,[esi+0x104]
	mov dword ptr [esi+0xF4],1
	mov dword ptr [esi+0xF8],0xFFFFFFFF
	push 0x22
	mov byte ptr [esp+0x28],4
	mov dword ptr [ecx],edi
	call ZArray<ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>>::_Alloc
	int 3// TODO: 	mov dword ptr [esi+0x108],offset ZList<ZRef<CActionMan::PETACTIONFRAMEENTRY>>::`vftable'
	mov dword ptr [esi+0x110],edi
	mov dword ptr [esi+0x114],edi
	mov dword ptr [esi+0x118],edi
	mov dword ptr [esi+0x124],edi
	push 0x90
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0x24],7
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x20],8
	cmp eax,edi
	je Block2

 Block1:
	push edi
	mov ecx,eax
	call CAttrShoe::_ctor_0
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov dword ptr [esi+0x1AC],eax
	cmp eax,edi
	je Block5

 Block4:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	lea ecx,[esi+0x1B0]
	mov byte ptr [esp+0x20],9
	call SECPOINT::_ctor_default
	lea ecx,[esi+0x1C8]
	mov byte ptr [esp+0x20],0xA
	call SECPOINT::_ctor_default
	mov dword ptr [esi+0x1F0],edi
	mov eax,0x7FFFFFFF
	push 4
	lea ecx,[esi+0x220]
	mov byte ptr [esp+0x24],0xB
	int 3// TODO: 	mov dword ptr [esi+0x204],offset CDurationChecker::`vftable'
	mov dword ptr [esi+0x208],3
	mov dword ptr [esi+0x20C],4
	mov dword ptr [esi+0x210],0x3E8
	mov dword ptr [esi+0x214],eax
	mov dword ptr [esi+0x218],0x80000000
	mov dword ptr [esi+0x21C],eax
	call CDurationChecker::DurationQueue::_ctor_0
	lea edx,[esi+0x134]
	xor ecx,ecx
	mov byte ptr [esp+0x20],0xC
	mov dword ptr [esi+0x238],1
	mov dword ptr [esi+0x23C],edi
	mov dword ptr [esi+0x240],edi
	call _ZtlSecureTearHelper<int>::call
	lea edx,[esi+0x128]
	xor ecx,ecx
	mov dword ptr [esi+0x13C],eax
	call _ZtlSecureTearHelper<int>::call
	lea edx,[esi+0x140]
	xor ecx,ecx
	mov dword ptr [esi+0x130],eax
	call _ZtlSecureTearHelper<int>::call
	lea edx,[esi+0x14C]
	xor ecx,ecx
	mov dword ptr [esi+0x148],eax
	call _ZtlSecureTearHelper<int>::call
	lea edx,[esi+0x158]
	xor ecx,ecx
	mov dword ptr [esi+0x154],eax
	call _ZtlSecureTearHelper<int>::call
	lea edx,[esi+0x164]
	xor ecx,ecx
	mov dword ptr [esi+0x160],eax
	call _ZtlSecureTearHelper<int>::call
	lea edx,[esi+0x170]
	xor ecx,ecx
	mov dword ptr [esi+0x16C],eax
	call _ZtlSecureTearHelper<int>::call
	lea edx,[esi+0x17C]
	xor ecx,ecx
	mov dword ptr [esi+0x178],eax
	call _ZtlSecureTearHelper<int>::call
	lea edx,[esi+0x188]
	xor ecx,ecx
	mov dword ptr [esi+0x184],eax
	call _ZtlSecureTearHelper<int>::call
	lea edx,[esi+0x194]
	xor ecx,ecx
	mov dword ptr [esi+0x190],eax
	call _ZtlSecureTearHelper<int>::call
	mov dword ptr [esi+0x19C],eax
	mov dword ptr [esi+0x1A0],edi
	call get_update_time
	mov dword ptr [esi+0x1A4],eax
	mov eax,esi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x18
	ret
}
}
// CPet::ChatCommand
__SUB_CLASS_THIS(002A4020, __thiscall, 47415,  CPet, void, const ZXString<char>&) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	call CPet::UpdatePetAbility
	mov ecx,esi
	call CPet::GetLevel
	cmp eax,0xF
	jl Block2

 Block1:
	mov eax,dword ptr [esi+0x19C]
	push 1
	push eax
	lea ecx,[esi+0x194]
	push ecx
	call _ZtlSecureFuseHelper<int>::call
	mov edx,dword ptr [esp+0x18]
	add esp,8
	push eax
	mov eax,dword ptr [edx]
	push 1
	push ecx
	mov dword ptr [esp+0x14],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	push 0
	push 2
	mov ecx,esi
	call CPet::DoAction

 Block2:
	pop esi
	pop ecx
	ret 4
}
}
// CPet::IsKindOf
__SUB_CLASS_THIS(002A0420, __thiscall, 47457,  CPet, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CPet::ms_RTTI_CPet
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
// CPet::SetSetItemEffect
_SUB_EXCEPTION_HANDLER(2A4F10)
__SUB_CLASS_THIS(002A4F10, __thiscall, 47416,  CPet, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2A4F10
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
	mov edi,ecx
	mov ebp,dword ptr [esp+0x54]
	xor ebx,ebx
	cmp ebp,ebx
	jl Block30

 Block1:
	mov eax,dword ptr [edi+0x94]
	cmp dword ptr [eax+0x5D0],ebx
	jne Block30

 Block2:
	push ebx
	call CPet::GetAdditionalLayer
	mov esi,eax
	cmp dword ptr [esi],ebp
	je Block31

 Block3:
	mov dword ptr [esp+0x14],ebx
	lea ecx,[esp+0x18]
	push 0x12E3
	push ecx
	mov dword ptr [esp+0x54],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x58],1
	call ZXString16::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	push ebx
	lea eax,[esi+0xC]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov dword ptr [esi],ebp
	mov ecx,dword ptr [edi+0x94]
	add ecx,0x88
	call CAvatar::GetLayerUnderFace
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x54],2
	cmp ecx,ebx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	call IWzGr2DLayer::Getflip
	mov edx,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push edx
	call _xbstr_t::_ctor_1
	mov ecx,edi
	call CPet::LoadLayer
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	cmp dword ptr [esp+0x1C],ebx
	je Block13

 Block10:
	push offset _D_VTMISSING
	lea ecx,[esp+0x38]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x50],3
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [esi+0x14]
	mov byte ptr [esp+0x4C],4
	cmp ecx,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea eax,[esp+0x34]
	push eax
	lea edx,[esp+0x28]
	push edx
	push 0x20
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x24]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x4C],bl
	call Ztl_variant_t::~Ztl_variant_t
	jmp Block14

 Block13:
	push ebx
	mov ecx,edi
	call CPet::RemoveAdditionalLayer

 Block14:
	lea eax,[esp+0x1C]
	push 0x12E4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x58]
	mov eax,dword ptr [eax]
	push ecx
	push ebp
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x5C],5
	call ZXString16::Format
	mov eax,dword ptr [esp+0x2C]
	add esp,0x10
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block16:
	push 1
	mov ecx,edi
	call CPet::GetAdditionalLayer
	mov esi,eax
	lea eax,[esp+0x18]
	push eax
	lea ebp,[esi+0xC]
	push ebp
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,dword ptr [edi+0x94]
	add ecx,0x88
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call CAvatar::GetLayerUnderFace
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x54],6
	cmp ecx,ebx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	call IWzGr2DLayer::Getflip
	mov edx,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	push edx
	call _xbstr_t::_ctor_1
	mov ecx,edi
	call CPet::LoadLayer
	mov dword ptr [esp+0x20],eax
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x4C],bl
	cmp eax,ebx
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	cmp dword ptr [esp+0x20],ebx
	je Block27

 Block21:
	mov dword ptr [ebp],1
	lea ebp,[esi+0x14]
	mov dword ptr [esi],ebx
	mov ecx,dword ptr [ebp]
	cmp ecx,ebx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	push 0xFFFFFFFF
	call IWzGr2DLayer::Putz
	mov eax,dword ptr [esp+0x58]
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr [esi+8],eax
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebx
	mov dword ptr [esi+4],ecx
	jl Block25

 Block24:
	mov edx,3
	mov word ptr [esp+0x24],dx
	mov dword ptr [esp+0x2C],eax
	push offset _D_VTMISSING
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x50],7
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x50],8
	push ecx
	jmp Block26

 Block25:
	push offset _D_VTMISSING
	lea ecx,[esp+0x28]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x50],9
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x38]
	mov byte ptr [esp+0x50],0xA
	push eax

 Block26:
	push 0x20
	mov ecx,ebp
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x34]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x4C],bl
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [esp+0x58]
	push ebx
	push ecx
	mov ecx,edi
	call CPet::SetSetItemBackground
	jmp Block28

 Block27:
	push 1
	mov ecx,edi
	call CPet::RemoveAdditionalLayer

 Block28:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp eax,ebx
	je Block31

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block31

 Block30:
	push ebx
	call CPet::RemoveAdditionalLayer
	push 1
	mov ecx,edi
	call CPet::RemoveAdditionalLayer

 Block31:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret 8
}
}
// CPet::Init
_SUB_EXCEPTION_HANDLER(2A3530)
__SUB_CLASS_THIS(002A3530, __thiscall, 47396,  CPet, void, CUser*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2A3530
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
	mov ecx,dword ptr [esp+0x54]
	mov eax,dword ptr [esp+0x50]
	push ecx
	mov dword ptr [esi+0x94],eax
	call CPetTemplate::GetPetTemplate
	mov ecx,dword ptr [esi+0x94]
	mov dword ptr [esi+0x88],eax
	mov ebx,1
	add ecx,4
	mov dword ptr [esi+0xA8],ebx
	mov dword ptr [esi+0xAC],0x64
	mov dword ptr [esi+0xB0],0
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x10]
	add esp,4
	lea eax,[esp+0x14]
	push eax
	call edx
	mov ebp,eax
	mov eax,dword ptr [ebp]
	lea edi,[esi+0x1C8]
	lea ecx,[edi+0xC]
	push eax
	call TSecType<long>::SetData
	mov ebp,dword ptr [ebp+4]
	push ebp
	mov ecx,edi
	call TSecType<long>::SetData
	lea ecx,[edi+0xC]
	lea ebp,[esi+0x1B0]
	call TSecType<long>::GetData
	lea ecx,[ebp+0xC]
	push eax
	call TSecType<long>::SetData
	mov ecx,edi
	call TSecType<long>::GetData
	push eax
	mov ecx,ebp
	call TSecType<long>::SetData
	mov ecx,esi
	mov dword ptr [esi+0xF0],ebx
	call CPet::SetShoeAttr
	mov ecx,ebp
	call TSecType<long>::GetData
	lea ebx,[esi+0x1BC]
	mov ecx,ebx
	mov edi,eax
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	push 1
	push 0x7FFFFFFF
	push 0
	push edi
	push eax
	call CWvsPhysicalSpace2D::GetFootholdUnderneath
	mov ecx,dword ptr [esi+0x94]
	mov dword ptr [esp+0x14],eax
	lea eax,[esp+0x54]
	push eax
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	mov dword ptr [esp+0x50],eax
	jmp Block3

 Block2:
	mov dword ptr [esp+0x50],0

 Block3:
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block5:
	call CVecCtrlPet::CreateInstance
	mov ecx,dword ptr [esi+0x88]
	mov edx,dword ptr [ecx+8]
	mov edi,eax
	lea eax,[esi+4]
	push edx
	push eax
	mov ecx,edi
	call CVecCtrlPet::Init
	mov ecx,ebp
	call TSecType<long>::GetData
	mov ecx,ebx
	mov ebp,eax
	call TSecType<long>::GetData
	mov ecx,dword ptr [esp+0x14]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+4]
	push ecx
	mov ecx,dword ptr [esi+0xF0]
	push ecx
	xor ebx,ebx
	push ebx
	push ebx
	push ebp
	add eax,0x50
	push eax
	push 1
	mov ecx,edi
	call edx
	mov eax,dword ptr [edi+0x1D8]
	lea ecx,[esi+0x90]
	push edi
	mov dword ptr [esi+0xF0],eax
	call _x_com_ptr<IWzVector2D>::_QueryVecCtrlPet
	cmp eax,ebx
	jge Block8

 Block6:
	cmp eax,0x80004002
	je Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov eax,3
	mov dword ptr [esp+0x48],ebx
	mov word ptr [esp+0x20],ax
	mov dword ptr [esp+0x28],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x48],1
	cmp ecx,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea edx,[esp+0x38]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x124]
	cmp edi,eax
	je Block17

 Block13:
	mov dword ptr [esi+0x124],eax
	cmp eax,ebx
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block15:
	cmp edi,ebx
	je Block17

 Block16:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block17:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block19

 Block18:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block19:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebp,8
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x20],bp
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebx
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[esp+0x20]
	push edx
	call edi

 Block23:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp word ptr [esp+0x30],bp
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebx
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[esp+0x30]
	push ecx
	call edi

 Block27:
	mov eax,dword ptr [esp+0x50]
	mov edx,dword ptr [eax+0x1BC]
	push 1
	push edx
	add eax,0x1B4
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	push eax
	mov ecx,esi
	call CPet::HangOnBack
	mov ecx,esi
	call CPet::PrepareActionLayer
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 8
}
}
// CPet::SetSetItemBackground
_SUB_EXCEPTION_HANDLER(2A4320)
__SUB_CLASS_THIS(002A4320, __thiscall, 47409,  CPet, void, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2A4320
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
	mov esi,ecx
	push 1
	call CPet::GetAdditionalLayer
	mov ebx,eax
	xor ebp,ebp
	cmp dword ptr [ebx+0x14],ebp
	lea edi,[ebx+0x14]
	sete al
	mov dword ptr [esp+0x14],ebx
	test al,al
	jne Block64

 Block1:
	call get_update_time
	mov ecx,eax
	mov eax,dword ptr [esi+0x94]
	mov eax,dword ptr [eax+0x640]
	and eax,0xFFFFFFFE
	mov dword ptr [esp+0x18],ecx
	cmp eax,4
	jne Block29

 Block2:
	cmp dword ptr [esp+0x74],ebp
	jne Block29

 Block3:
	mov eax,dword ptr [ebx]
	cmp eax,ebp
	je Block64

 Block4:
	sub ecx,eax
	cmp ecx,0x5DC
	jle Block64

 Block5:
	mov ebx,dword ptr [ebx+4]
	cmp ebx,ebp
	jge Block7

 Block6:
	mov ecx,dword ptr [esp+0x70]
	mov edx,dword ptr [esp+0x14]
	cmp ecx,dword ptr [edx+8]
	je Block20

 Block7:
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	mov dword ptr [esp+0x74],ebp
	push 1
	mov ecx,esi
	mov dword ptr [esp+0x6C],ebp
	call CPet::RemoveAdditionalLayer
	lea eax,[esp+0x2C]
	push 0x12E4
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [esp+0x70]
	mov eax,dword ptr [eax]
	push ecx
	push ebx
	push eax
	lea edx,[esp+0x80]
	push edx
	mov byte ptr [esp+0x78],1
	call ZXString16::Format
	mov eax,dword ptr [esp+0x3C]
	add esp,0x10
	mov byte ptr [esp+0x68],0
	cmp eax,ebp
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block9:
	mov ebp,dword ptr [esp+0x14]
	lea eax,[esp+0x1C]
	push eax
	add ebp,0xC
	push ebp
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,dword ptr [esi+0x94]
	add ecx,0x88
	call CAvatar::GetLayerUnderFace
	mov ecx,eax
	mov byte ptr [esp+0x70],2
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getflip
	mov edx,dword ptr [esp+0x7C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x4C],esp
	push edx
	call Ztl_bstr_t::_ctor_2
	mov ecx,esi
	call CPet::LoadLayer
	mov dword ptr [esp+0x3C],eax
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x68],0
	test eax,eax
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	cmp dword ptr [esp+0x3C],0
	je Block17

 Block12:
	push 0xFFFFFFFF
	mov ecx,edi
	mov dword ptr [ebp],1
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putz
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	jl Block14

 Block13:
	mov edx,3
	mov word ptr [esp+0x40],dx
	mov dword ptr [esp+0x48],eax
	push offset _D_VTMISSING
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x6C],dl
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x40]
	push eax
	lea ecx,[esp+0x30]
	push ecx
	push 0x20
	mov ecx,edi
	mov byte ptr [esp+0x74],4
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x2C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x40]
	jmp Block15

 Block14:
	push offset _D_VTMISSING
	lea ecx,[esp+0x30]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0x6C],5
	call Ztl_variant_t::_ctor_1
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x44]
	push eax
	push 0x20
	mov ecx,edi
	mov byte ptr [esp+0x74],6
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x40]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x2C]

 Block15:
	mov byte ptr [esp+0x68],0
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x70]
	push ecx
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getalpha
	push 0
	push 0
	mov ecx,eax
	mov byte ptr [esp+0x70],7
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzShape2D::Move
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0x68],0
	test eax,eax
	je Block17

 Block16:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block17:
	mov eax,dword ptr [esp+0x74]
	mov dword ptr [esp+0x68],0xFFFFFFFF
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	xor ebp,ebp

 Block20:
	push edi
	lea ecx,[esp+0x74]
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	mov ecx,3
	mov dword ptr [esp+0x68],8
	mov word ptr [esp+0x40],cx
	mov dword ptr [esp+0x48],ebp
	mov ebp,dword ptr [esp+0x70]
	mov byte ptr [esp+0x68],9
	test ebp,ebp
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x40]
	push eax
	mov ecx,ebp
	call IWzGr2DLayer::Getcanvas
	mov bl,0xB
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0x68],bl
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x74]
	push ecx
	mov ecx,dword ptr [esi+0x94]
	add ecx,0x88
	call CAvatar::GetLayerUnderFace
	mov ecx,eax
	mov byte ptr [esp+0x68],0xC
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Getflip
	mov edi,eax
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0x68],bl
	test eax,eax
	je Block24

 Block23:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block24:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [ecx],0
	push edi
	mov ecx,ebp
	call IWzGr2DLayer::Putflip
	mov ebx,dword ptr [esp+0x3C]
	test ebx,ebx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov edx,dword ptr [esi+4]
	mov edx,dword ptr [edx+0x10]
	add esi,4
	lea eax,[esp+0x2C]
	push eax
	mov ecx,esi
	call edx
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	call edx
	mov esi,dword ptr [eax]
	mov ecx,ebx
	call IWzCanvas::Getcy
	sub edi,eax
	push edi
	mov ecx,ebx
	call IWzCanvas::Getcx
	sub esi,eax
	push esi
	mov ecx,ebp
	call IWzShape2D::Move
	push offset _D_VTMISSING
	lea ecx,[esp+0x54]
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [esp+0x18]
	add eax,0x1F4
	mov ecx,3
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],eax
	lea edx,[esp+0x74]
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x6C],0xE
	call IWzGr2DLayer::Getalpha
	lea ecx,[esp+0x50]
	push ecx
	lea edx,[esp+0x30]
	push edx
	push 0
	push 0xFF
	mov ecx,eax
	mov byte ptr [esp+0x78],0xF
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0x68],0xE
	test eax,eax
	je Block28

 Block27:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block28:
	lea ecx,[esp+0x2C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x50]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	mov byte ptr [esp+0x6C],8
	call ecx
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	call eax
	jmp Block64

 Block29:
	cmp dword ptr [ebx],ebp
	jne Block61

 Block30:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x2C],edi
	cmp edi,ebp
	je Block32

 Block31:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	push edi
	call edx

 Block32:
	mov dword ptr [esp+0x68],0x10
	cmp edi,ebp
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	lea eax,[esp+0x3C]
	push eax
	mov ecx,edi
	call IWzGr2DLayer::Getalpha
	mov esi,eax
	lea ecx,[esp+0x74]
	push ecx
	mov ecx,edi
	mov byte ptr [esp+0x6C],0x11
	call IWzGr2DLayer::Getalpha
	mov ebx,eax
	mov esi,dword ptr [esi]
	mov byte ptr [esp+0x68],0x12
	cmp esi,ebp
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[esp+0x70]
	push eax
	push esi
	mov dword ptr [esp+0x78],ebp
	call ecx
	cmp eax,ebp
	jge Block38

 Block37:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block38:
	mov esi,dword ptr [ebx]
	cmp esi,ebp
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	mov eax,dword ptr [esp+0x70]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x40]
	push ebp
	push eax
	push esi
	call ecx
	cmp eax,ebp
	jge Block42

 Block41:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block42:
	mov eax,dword ptr [esp+0x74]
	mov byte ptr [esp+0x68],0x11
	cmp eax,ebp
	je Block44

 Block43:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block44:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x68],0x10
	cmp eax,ebp
	je Block46

 Block45:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block46:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block48

 Block47:
	push eax
	call _com_issue_error

 Block48:
	mov eax,dword ptr [esp+0x18]
	add eax,0x1F4
	mov edx,3
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],eax
	lea eax,[esp+0x70]
	mov bl,0x14
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x6C],bl
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x68],0x15
	cmp ecx,ebp
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x20]
	push eax
	push ebp
	push ebp
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0x68],bl
	cmp eax,ebp
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block52:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [esp+0x68],0x13
	cmp word ptr [esp+0x1C],si
	jne Block55

 Block53:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea ecx,[esp+0x1C]
	push ecx
	call ebx

 Block56:
	mov byte ptr [esp+0x68],0x10
	cmp word ptr [esp+0x40],si
	jne Block59

 Block57:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	cmp eax,ebp
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea eax,[esp+0x40]
	push eax
	call ebx

 Block60:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	call edx
	mov ebx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esp+0x18]

 Block61:
	mov eax,ecx
	cmp ecx,ebp
	jne Block63

 Block62:
	mov eax,1

 Block63:
	mov dword ptr [ebx],eax

 Block64:
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 8
}
}
// CPet::GetUpgradePetSkill
_SUB_EXCEPTION_HANDLER(2A00B0)
__SUB_CLASS_THIS0(002A00B0, __thiscall, 47423,  CPet, uint16_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2A00B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	call CPet::GetItemSlot
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov esi,eax
	mov dword ptr [esp+0x18],esi
	test esi,esi
	je Block2

 Block1:
	lea eax,[esi+4]
	push eax
	call ebp

 Block2:
	mov dword ptr [esp+0x24],0
	test esi,esi
	je Block4

 Block3:
	mov ecx,dword ptr [esi+0x55]
	push ecx
	lea edx,[esi+0x51]
	push edx
	call _ZtlSecureFuseHelper<unsigned short>::call
	add esp,8
	movzx ebx,ax
	jmp Block5

 Block4:
	xor ebx,ebx

 Block5:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test esi,esi
	je Block8

 Block6:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block7:
	push edi
	call ebp
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block8:
	mov ax,bx
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret
}
}
// CPet::DoAction
_SUB_EXCEPTION_HANDLER(2A2340)
__SUB_CLASS_THIS(002A2340, __thiscall, 47436,  CPet, void, long, long, NakedParam<Ztl_bstr_t>, int32_t, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2A2340
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ebx,dword ptr [esp+0x48]
	xor ebp,ebp
	cmp ebx,ebp
	mov dword ptr [esp+0x3C],ebp
	jge Block2

 Block1:
	mov ecx,dword ptr [esp+0x4C]
	cmp ecx,ebp
	jmp Block59

 Block2:
	cmp dword ptr [esp+0x58],ebp
	jne Block5

 Block3:
	cmp dword ptr [esi+0xF8],0xFFFFFFFF
	jle Block5

 Block4:
	mov ecx,dword ptr [esp+0x4C]
	cmp ecx,ebp
	jmp Block59

 Block5:
	call get_update_time
	mov edi,eax
	mov dword ptr [esp+0x14],edi
	cmp dword ptr [esi+0x238],ebp
	je Block9

 Block6:
	mov dword ptr [esi+0x23C],edi
	mov dword ptr [esi+0x238],ebp

 Block7:
	mov eax,dword ptr [esi+0x90]
	cmp eax,ebp
	je Block11

 Block8:
	lea ecx,[eax-0xC]
	jmp Block12

 Block9:
	sub eax,dword ptr [esi+0x23C]
	lea ecx,[esi+0x204]
	push eax
	mov dword ptr [esi+0x23C],edi
	call CDurationChecker::Validate
	test eax,eax
	jne Block7

 Block10:
	mov ecx,dword ptr [esp+0x4C]
	cmp ecx,ebp
	jmp Block59

 Block11:
	xor ecx,ecx

 Block12:
	call CVecCtrl::IsOnLadder
	test eax,eax
	jne Block17

 Block13:
	mov eax,dword ptr [esi+0x90]
	cmp eax,ebp
	je Block15

 Block14:
	lea ecx,[eax-0xC]
	jmp Block16

 Block15:
	xor ecx,ecx

 Block16:
	call CVecCtrl::IsOnRope
	test eax,eax
	je Block18

 Block17:
	mov dword ptr [esp+0x48],8
	mov ebx,dword ptr [esp+0x48]
	mov dword ptr [esi+0xF4],ebx
	jmp Block27

 Block18:
	cmp ebx,9
	jge Block20

 Block19:
	mov dword ptr [esi+0xF4],ebx
	jmp Block27

 Block20:
	mov ecx,esi
	mov dword ptr [esi+0xF8],ebx
	call CPet::PrepareActionLayer
	cmp dword ptr [esp+0x44],ebp
	jne Block27

 Block21:
	mov ecx,dword ptr [esi+0x88]
	add ebx,0xFFFFFFF7
	push ebx
	lea eax,[esp+0x1C]
	push eax
	call CPetTemplate::GetActionName
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x3C],1
	cmp eax,ebp
	je Block23

 Block22:
	mov ecx,dword ptr [eax]
	mov dword ptr [esp+0x58],ecx
	jmp Block24

 Block23:
	mov dword ptr [esp+0x58],ebp

 Block24:
	mov edx,dword ptr [esi+0x88]
	mov eax,dword ptr [esi+4]
	mov ebp,dword ptr [edx]
	mov edx,dword ptr [eax+0x10]
	lea edi,[esi+4]
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	call edx
	mov ebx,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [ebx]
	push eax
	push ecx
	call get_sound_volume_by_pos
	mov edx,dword ptr [esp+0x60]
	push eax
	push edx
	push ebp
	call play_pet_sound
	mov ecx,dword ptr [esp+0x2C]
	add esp,0x14
	mov byte ptr [esp+0x3C],0
	test ecx,ecx
	je Block26

 Block25:
	call _xbstr_t::Data_t::Release

 Block26:
	mov edi,dword ptr [esp+0x14]
	mov ebx,dword ptr [esp+0x48]

 Block27:
	mov ecx,dword ptr [esp+0x4C]
	test ecx,ecx
	je Block47

 Block28:
	cmp dword ptr [ecx],0
	je Block47

 Block29:
	mov eax,dword ptr [ecx]
	test eax,eax
	je Block47

 Block30:
	mov eax,dword ptr [eax-4]
	shr eax,1
	je Block47

 Block31:
	mov eax,dword ptr [esi+0x88]
	cmp dword ptr [eax],0x4C4B5A
	jne Block37

 Block32:
	cmp ebx,0x14
	jne Block37

 Block33:
	cmp dword ptr [esp+0x54],0
	je Block35

 Block34:
	mov eax,dword ptr [eax+0x14]
	jmp Block36

 Block35:
	xor eax,eax

 Block36:
	push 0
	push 0x5A
	push 0
	push eax
	push 0x3EA
	push 0x1388
	push ecx
	lea eax,[esi+0x90]
	mov ecx,esp
	mov dword ptr [esp+0x64],esp
	push eax
	call _x_com_ptr<IWzVector2D>::_ctor_copy
	push ecx
	lea eax,[esi+0x124]
	mov ecx,esp
	mov dword ptr [esp+0x68],esp
	push eax
	call _x_com_ptr<IWzGr2DLayer>::_ctor_copy
	push ecx
	lea edx,[esp+0x70]
	mov ecx,esp
	mov dword ptr [esp+0x6C],esp
	push edx
	call Ztl_bstr_t::_ctor_copy
	jmp Block46

 Block37:
	cmp dword ptr [esp+0x54],0
	je Block39

 Block38:
	mov eax,dword ptr [eax+0x14]
	jmp Block40

 Block39:
	xor eax,eax

 Block40:
	push 0
	push 0
	push 0
	push eax
	mov eax,dword ptr [esi+0x90]
	push 0x3EA
	push 0x1388
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x64],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block42:
	mov eax,dword ptr [esi+0x124]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x68],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block44

 Block43:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block44:
	push ecx
	mov ecx,dword ptr [esp+0x70]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x70]
	mov dword ptr [esp+0x6C],esp
	test eax,eax
	je Block46

 Block45:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block46:
	lea ecx,[esi+0x14]
	call CChatBalloon::MakeBalloon
	mov ecx,dword ptr [esp+0x4C]

 Block47:
	cmp dword ptr [esp+0x50],0
	je Block58

 Block48:
	push 0xC8
	lea ecx,[esp+0x28]
	call COutPacket::_ctor_1
	push 8
	add esi,0xA0
	push esi
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x44],2
	call COutPacket::EncodeBuffer
	push edi
	lea ecx,[esp+0x28]
	call COutPacket::Encode4
	mov edx,dword ptr [esp+0x44]
	push edx
	lea ecx,[esp+0x28]
	call COutPacket::Encode1
	cmp ebx,9
	setl al
	dec al
	and al,bl
	movzx ecx,al
	push ecx
	lea ecx,[esp+0x28]
	call COutPacket::Encode1
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block52

 Block49:
	cmp dword ptr [eax+4],0
	lea esi,[eax+4]
	jne Block51

 Block50:
	mov edx,dword ptr [eax]
	push edx
	call ZComAPI::ZtlConvertBSTRToString
	mov dword ptr [esi],eax

 Block51:
	mov ecx,dword ptr [esi]
	jmp Block53

 Block52:
	xor ecx,ecx

 Block53:
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x4C],esp
	mov dword ptr [edi],0
	test ecx,ecx
	je Block57

 Block54:
	mov eax,ecx
	lea esi,[eax+1]
	lea esp,[esp]

 Block55:
	mov dl,byte ptr [eax]
	inc eax
	test dl,dl
	jne Block55

 Block56:
	sub eax,esi
	mov esi,eax
	push esi
	push ecx
	push 0
	push esi
	mov ecx,edi
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	mov ecx,edi
	call ZXString<char>::ReleaseBuffer

 Block57:
	lea ecx,[esp+0x28]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x24]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x3C],0
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x4C]

 Block58:
	test ecx,ecx

 Block59:
	je Block61

 Block60:
	call _xbstr_t::Data_t::Release

 Block61:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 0x18
}
}
// CPet::GetBodyRect
__SUB_CLASS_THIS(002A1AC0, __thiscall, 47410,  CPet, void, tagRECT&) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,ecx
	mov eax,dword ptr [esi+0xF0]
	push 0
	push eax
	call CPet::MoveAction2RawAction
	mov ecx,dword ptr [esi+0xFC]
	mov eax,dword ptr [ecx+4]
	lea edi,[eax+0x10]
	push edi
	call IsRectEmpty
	add esp,4
	test eax,eax
	je Block2

 Block1:
	pop edi
	pop esi
	jmp dword ptr [SetRectEmpty]

 Block2:
	push ebx
	mov ebx,dword ptr [esi+0xF0]
	push ebp
	lea ecx,[esi+0x1B0]
	call TSecType<long>::GetData
	lea ecx,[esi+0x1BC]
	mov ebp,eax
	call TSecType<long>::GetData
	mov esi,eax
	mov eax,dword ptr [esp+0x14]
	push edi
	push eax
	call SECRECT::ToRect
	add esp,8
	test bl,1
	jne Block4

 Block3:
	mov ecx,dword ptr [eax+8]
	neg ecx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [eax]
	neg ecx
	mov dword ptr [eax],ecx
	mov edx,dword ptr [eax+8]
	mov dword ptr [eax],edx
	mov dword ptr [eax+8],ecx

 Block4:
	push ebp
	push esi
	push eax
	call OffsetRect
	pop ebp
	pop ebx
	pop edi
	pop esi
	ret 4
}
}
// CPet::ShowEffect
_SUB_EXCEPTION_HANDLER(2A2050)
__SUB_CLASS_THIS(002A2050, __thiscall, 47418,  CPet, void, long, NakedParam<tagPOINT>, NakedParam<tagPOINT>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2A2050
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
	mov edi,ecx
	mov dword ptr [esp+0x10],0
	xor esi,esi
	mov dword ptr [esp+0x38],0
	mov dword ptr [esp+0x14],esi
	mov eax,dword ptr [esp+0x40]
	mov ebx,1
	mov byte ptr [esp+0x38],bl
	cmp eax,3
	ja Block8

 Block1:
	cmp EAX, 0
je Block19
cmp EAX, 1
je Block22
cmp EAX, 2
je Block24
cmp EAX, 3
je Block2


 Block2:
	lea eax,[esp+0x40]
	push 0x6C3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x3C],2
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x38],bl
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	lea ecx,[esp+0x18]
	push 0x1A4C
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x3C],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x38],bl

 Block5:
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block7:
	mov esi,dword ptr [esp+0x14]

 Block8:
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0
	push 0
	mov dword ptr [eax],0
	mov eax,dword ptr [edi+0x90]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block10

 Block9:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block10:
	mov edi,dword ptr [esp+0x24]
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0
	push edi
	call CAnimationDisplayer::Effect_General
	test esi,esi
	je Block13

 Block11:
	cmp word ptr [esi],0
	je Block13

 Block12:
	push 0x64
	push esi
	call play_game_sound
	add esp,8

 Block13:
	mov byte ptr [esp+0x38],0
	test esi,esi
	je Block15

 Block14:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block15:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test edi,edi
	je Block18

 Block16:
	add edi,0xFFFFFFF4
	push edi

 Block17:
	call ZXString16::_Release
	add esp,4

 Block18:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x2C
	ret 0x14

 Block19:
	lea edx,[esp+0x1C]
	push 0x6C1
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x3C],4
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x38],bl
	test eax,eax
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block21:
	lea eax,[esp+0x20]
	push 0x1A4C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x3C],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x38],bl
	jmp Block5

 Block22:
	lea ecx,[esp+0x24]
	push 0x6C2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x3C],6
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x38],bl
	test eax,eax
	je Block8

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	jmp Block8

 Block24:
	lea edx,[esp+0x28]
	push 0x6C4
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [edi+0x88]
	mov ecx,dword ptr [ecx]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x44],7
	call ZXString16::Format
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0x38],bl
	test eax,eax
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block26:
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [eax],0
	mov eax,dword ptr [esp+0x50]
	mov ecx,dword ptr [esp+0x4C]
	mov esi,dword ptr [esp+0x18]
	push eax
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],0
	mov eax,dword ptr [edi+0xF0]
	mov dword ptr [esp+0x40],esp
	and eax,ebx
	mov byte ptr [esp+0x4C],8
	push eax
	mov byte ptr [esp+0x50],bl
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push esi
	call CAnimationDisplayer::Effect_General
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test esi,esi
	je Block18

 Block27:
	add esi,0xFFFFFFF4
	push esi
	jmp Block17
}
}
// CPet::ParseCommand
_SUB_EXCEPTION_HANDLER(2A3CC0)
__SUB_CLASS_THIS(002A3CC0, __thiscall, 47414,  CPet, int32_t, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2A3CC0
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
	mov ebp,ecx
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	mov eax,dword ptr [ebp+0xF8]
	or esi,0xFFFFFFFF
	cmp eax,esi
	mov dword ptr [esp+0x38],edi
	jg Block60

 Block1:
	cmp dword ptr [ebp+0xB4],edi
	jne Block60

 Block2:
	cmp dword ptr [ebp+0xB8],0x1F4
	jl Block60

 Block3:
	mov ecx,dword ptr [ebp+0x94]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	test eax,eax
	je Block60

 Block4:
	mov eax,dword ptr [ebp+0x94]
	cmp dword ptr [eax+0x63C],edi
	jg Block60

 Block5:
	push edi
	push edi
	lea ecx,[esp+0x48]
	mov dword ptr [esp+0x20],edi
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push eax
	lea ecx,[esp+0x44]
	call ZXString<char>::op_assign
	mov ecx,ebp
	call CPet::IsNamedPet
	test eax,eax
	je Block18

 Block6:
	mov eax,dword ptr [esp+0x40]
	cmp eax,edi
	je Block8

 Block7:
	mov ecx,dword ptr [eax-4]
	jmp Block9

 Block8:
	xor ecx,ecx

 Block9:
	mov eax,dword ptr [ebp+0x98]
	lea esi,[ebp+0x98]
	cmp eax,edi
	je Block11

 Block10:
	mov eax,dword ptr [eax-4]
	jmp Block12

 Block11:
	xor eax,eax

 Block12:
	cmp ecx,eax
	jle Block18

 Block13:
	mov eax,dword ptr [esi]
	cmp eax,edi
	je Block15

 Block14:
	mov eax,dword ptr [eax-4]
	jmp Block16

 Block15:
	xor eax,eax

 Block16:
	push eax
	lea ecx,[esp+0x20]
	push ecx
	lea ecx,[esp+0x48]
	call ZXString<char>::Left
	push esi
	mov ecx,eax
	mov dword ptr [esp+0x18],1
	call ZXString<char>::op_eq_0
	test eax,eax
	je Block18

 Block17:
	mov bl,1
	jmp Block19

 Block18:
	xor bl,bl

 Block19:
	test byte ptr [esp+0x14],1
	je Block22

 Block20:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,edi
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	test bl,bl
	je Block37

 Block23:
	mov eax,dword ptr [ebp+0x98]
	cmp eax,edi
	je Block25

 Block24:
	mov eax,dword ptr [eax-4]
	jmp Block26

 Block25:
	xor eax,eax

 Block26:
	push 0xFFFFFFFF
	push eax
	lea edx,[esp+0x24]
	push edx
	lea ecx,[esp+0x4C]
	call ZXString<char>::Mid
	push edi
	push edi
	mov ecx,eax
	mov byte ptr [esp+0x40],1
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push eax
	lea ecx,[esp+0x44]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x38],0
	cmp eax,edi
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov bl,2

 Block29:
	mov eax,dword ptr [esp+0x40]
	cmp eax,edi
	je Block36

 Block30:
	mov al,byte ptr [eax]
	test al,al
	je Block36

 Block31:
	cmp al,0x21
	je Block34

 Block32:
	cmp al,0x2C
	je Block34

 Block33:
	cmp al,0x7E
	jne Block36

 Block34:
	push 0xFFFFFFFF
	push 1
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x4C]
	call ZXString<char>::Mid
	push edi
	push edi
	mov ecx,eax
	mov byte ptr [esp+0x40],bl
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	push eax
	lea ecx,[esp+0x44]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x38],0
	cmp eax,edi
	je Block29

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block29

 Block36:
	mov dword ptr [esp+0x18],1

 Block37:
	xor ebx,ebx

 Block38:
	mov ecx,dword ptr [ebp+0x88]
	mov eax,dword ptr [ecx+0x48]
	mov dword ptr [esp+0x14],edi
	test eax,eax
	je Block40

 Block39:
	mov eax,dword ptr [eax-4]

 Block40:
	cmp edi,eax
	jge Block53

 Block41:
	mov esi,dword ptr [ecx+0x48]
	mov ecx,ebp
	add esi,ebx
	call CPet::GetLevel
	cmp eax,dword ptr [esi]
	jl Block51

 Block42:
	mov ecx,ebp
	call CPet::GetLevel
	cmp dword ptr [esi+4],eax
	jl Block51

 Block43:
	xor edi,edi

 Block44:
	mov eax,dword ptr [esi+0x10]
	test eax,eax
	je Block48

 Block45:
	cmp edi,dword ptr [eax-4]
	jae Block48

 Block46:
	lea ecx,[esp+0x40]
	mov edx,eax
	push ecx
	lea ecx,[edx+edi*4]
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block48

 Block47:
	inc edi
	jmp Block44

 Block48:
	mov esi,dword ptr [esi+0x10]
	test esi,esi
	je Block50

 Block49:
	cmp edi,dword ptr [esi-4]
	jb Block52

 Block50:
	mov edi,dword ptr [esp+0x14]

 Block51:
	inc edi
	add ebx,0x1C
	jmp Block38

 Block52:
	mov edi,dword ptr [esp+0x14]

 Block53:
	mov eax,dword ptr [ebp+0x88]
	add eax,0x48
	mov eax,dword ptr [eax]
	test eax,eax
	je Block55

 Block54:
	mov eax,dword ptr [eax-4]

 Block55:
	cmp edi,eax
	jne Block57

 Block56:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	jmp Block61

 Block57:
	push 0xC9
	lea ecx,[esp+0x24]
	call COutPacket::_ctor_1
	push 8
	lea eax,[ebp+0xA0]
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x40],3
	call COutPacket::EncodeBuffer
	mov ecx,dword ptr [esp+0x18]
	push ecx
	lea ecx,[esp+0x24]
	call COutPacket::Encode1
	push edi
	lea ecx,[esp+0x24]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x20]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x24]
	mov dword ptr [ebp+0xB4],1
	mov byte ptr [esp+0x38],0
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block59:
	mov eax,1
	jmp Block64

 Block60:
	mov eax,dword ptr [esp+0x40]
	cmp eax,edi
	mov dword ptr [esp+0x38],esi

 Block61:
	je Block63

 Block62:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block63:
	xor eax,eax

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
// CPet::SetPositionContext
__SUB_CLASS_THIS(0029FC10, __thiscall, 47419,  CPet, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x90]
	test eax,eax
	je Block2

 Block1:
	lea ecx,[eax-0xC]
	jmp  CVecCtrlPet::SetPositionContext

 Block2:
	xor ecx,ecx
	jmp  CVecCtrlPet::SetPositionContext
}
}
// CPet::GetVecCtrl
__SUB_CLASS_THIS0(0029FC60, __thiscall, 47406,  CPet, _x_com_ptr<IWzVector2D>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x90]
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
// CPet::GetType
__SUB_CLASS_THIS0(002A0400, __thiscall, 47428,  CPet, long) {
__asm {

 Block0:
	mov eax,3
	ret
}
}
// CPet::RemoveAdditionalLayer
__SUB_CLASS_THIS(0029FF10, __thiscall, 47442,  CPet, CPet::ADDITIONALLAYER*, long) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [esp+8]
	push ebx
	mov ebx,ecx
	xor ecx,ecx
	sub eax,ecx
	push edi
	je Block3

 Block1:
	sub eax,1
	jne Block4

 Block2:
	mov dword ptr [esp+8],1
	mov dword ptr [esp+0x10],2
	jmp Block4

 Block3:
	mov dword ptr [esp+8],ecx
	mov dword ptr [esp+0x10],1

 Block4:
	mov edi,dword ptr [esp+8]
	cmp edi,dword ptr [esp+0x10]
	jge Block12

 Block5:
	push ebp
	push esi
	or ebp,0xFFFFFFFF

 Block6:
	lea eax,[edi+edi*2+0x18]
	lea esi,[ebx+eax*8]
	mov dword ptr [esi],ebp
	mov dword ptr [esi+0xC],1
	mov eax,dword ptr [esi+0x14]
	cmp eax,ecx
	je Block8

 Block7:
	mov dword ptr [esi+0x14],ecx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	xor ecx,ecx

 Block8:
	mov dword ptr [esi+4],ebp
	mov dword ptr [esi+8],ebp
	cmp edi,1
	jne Block10

 Block9:
	mov dword ptr [ebx+0xD8],ecx

 Block10:
	inc edi
	cmp edi,dword ptr [esp+0x18]
	jl Block6

 Block11:
	mov edi,dword ptr [esp+0x10]
	pop esi
	pop ebp

 Block12:
	lea eax,[edi+edi*2+0x18]
	pop edi
	lea eax,[ebx+eax*8]
	pop ebx
	pop ecx
	ret 4
}
}
// CPet::OnLayerZChanged
__SUB_CLASS_THIS(0029FB30, __thiscall, 47430,  CPet, void, const CVecCtrl*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	test eax,eax
	je Block2

 Block1:
	add eax,0xC
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	cmp eax,dword ptr [ecx+0x8C]
	jne Block5

 Block4:
	add ecx,0xFFFFFFFC
	call CPet::SetLayerZ

 Block5:
	ret 4
}
}
// CPet::GetAdditionalLayer
__SUB_CLASS_THIS(0029F9C0, __thiscall, 47442,  CPet, CPet::ADDITIONALLAYER*, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0
	je Block4

 Block1:
	sub eax,1
	je Block3

 Block2:
	xor eax,eax
	ret 4

 Block3:
	lea eax,[ecx+0xD8]
	ret 4

 Block4:
	lea eax,[ecx+0xC0]
	ret 4
}
}
// CPet::IsNamedPet
__SUB_CLASS_THIS0(0029FEB0, __thiscall, 47402,  CPet, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x88]
	add eax,4
	push eax
	add ecx,0x98
	call ZXString<char>::op_eq_0
	neg eax
	sbb eax,eax
	inc eax
	ret
}
}
// CPet::ADDITIONALLAYER::~ADDITIONALLAYER
__SUB_CLASS_THIS0(0029FED0, __thiscall, 48023,  CPet::ADDITIONALLAYER, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x14]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	ret
}
}
// CPet::GetShoeAttr
__SUB_CLASS_THIS0(002A0480, __thiscall, 47431,  CPet, const ZRef<CAttrShoe>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x1A8]
	push esi
	mov esi,dword ptr [esp+0xC]
	mov dword ptr [esp+4],0
	mov dword ptr [esi+4],eax
	test eax,eax
	je Block2

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CPet::~CPet
__SUB_CLASS_THIS0(000FFD20, __thiscall, 47394,  CPet, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov dword ptr [esi+0x1A0],1
	call get_update_time
	mov dword ptr [esi+0x1A4],eax
	pop esi
	ret
}
}
// CPet::SendDropPickUpRequest
_SUB_EXCEPTION_HANDLER(2A0820)
__SUB_CLASS_THIS(002A0820, __thiscall, 47422,  CPet, int32_t, const tagPOINT&, unsigned long, unsigned long, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2A0820
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
	cmp dword ptr [esi+0x1A0],0
	je Block3

 Block1:
	call get_update_time
	sub eax,dword ptr [esi+0x1A4]
	cmp eax,0x1F4
	jl Block3

 Block2:
	xor eax,eax
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret 0x10

 Block3:
	push 0xCA
	lea ecx,[esp+0x18]
	call COutPacket::_ctor_1
	push 8
	lea eax,[esi+0xA0]
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x34],0
	call COutPacket::EncodeBuffer
	mov edi,dword ptr [_D_G_PSTAGE+4]
	test edi,edi
	je Block5

 Block4:
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[edi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	jne Block6

 Block5:
	xor edi,edi

 Block6:
	mov cl,byte ptr [edi+0x168]
	mov byte ptr [esp+0xC],cl
	mov edx,dword ptr [esp+0xC]
	push edx
	lea ecx,[esp+0x18]
	call COutPacket::Encode1
	call get_update_time
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	mov edi,dword ptr [esp+0x34]
	movzx eax,word ptr [edi]
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode2
	movzx ecx,word ptr [edi+4]
	push ecx
	lea ecx,[esp+0x18]
	call COutPacket::Encode2
	mov edi,dword ptr [esp+0x38]
	push edi
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	mov edx,dword ptr [esp+0x3C]
	push edx
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	mov eax,dword ptr [esi+0x148]
	push eax
	lea ecx,[esi+0x140]
	push ecx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode1
	mov edx,dword ptr [esi+0x160]
	push edx
	lea eax,[esi+0x158]
	push eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode1
	mov ecx,dword ptr [esi+0x154]
	push ecx
	lea edx,[esi+0x14C]
	push edx
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode1
	mov eax,0x4EC4EC4F
	mul edi
	shr edx,2
	imul edx,0xD
	sub edi,edx
	jne Block8

 Block7:
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x10]
	lea edi,[esi+4]
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,edi
	call edx
	movzx eax,word ptr [eax]
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode2
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x10]
	lea eax,[esp+0xC]
	push eax
	mov ecx,edi
	call edx
	movzx eax,word ptr [eax+4]
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode2
	mov ecx,dword ptr [esi+0x200]
	push ecx
	add esi,0x1F8
	push esi
	call _ZtlSecureFuseHelper<unsigned long>::call
	add esp,8
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	mov edx,dword ptr [esp+0x40]
	push edx
	lea ecx,[esp+0x18]
	call COutPacket::Encode4

 Block8:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x14]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov eax,1
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret 0x10
}
}
// CPet::LoadLayer
_SUB_EXCEPTION_HANDLER(2A2E50)
__SUB_CLASS_THIS(002A2E50, __thiscall, 47446,  CPet, int32_t, NakedParam<Ztl_bstr_t>, int32_t, PETLAYER&, long*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2A2E50
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
	mov ebx,ecx
	mov dword ptr [esp+0x1C],ebx
	mov ecx,dword ptr [esp+0x90]
	xor edi,edi
	mov dword ptr [esp+0x88],edi
	cmp ecx,edi
	je Block70

 Block1:
	cmp dword ptr [ecx],edi
	je Block69

 Block2:
	mov eax,dword ptr [ecx]
	cmp eax,edi
	je Block69

 Block3:
	mov eax,dword ptr [eax-4]
	shr eax,1
	cmp eax,edi
	je Block69

 Block4:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x50]
	push eax
	call esi
	lea ecx,[esp+0x50]
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
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x8C],1
	call esi
	lea eax,[esp+0x40]
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
	lea ecx,[esp+0x58]
	push ecx
	lea edx,[esp+0x4C]
	push edx
	push ecx
	mov ecx,dword ptr [esp+0xA4]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0xA4]
	mov dword ptr [esp+0x2C],esp
	cmp eax,edi
	je Block10

 Block9:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	mov byte ptr [esp+0x9C],3
	cmp dword ptr [_D_G_RM],edi
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea edx,[esp+0x84]
	mov byte ptr [esp+0x9C],2
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x90],4
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block15

 Block13:
	cmp eax,0x80004002
	je Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	mov esi,8
	mov byte ptr [esp+0x88],6
	cmp word ptr [esp+0x70],si
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	cmp eax,edi
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[esp+0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov byte ptr [esp+0x88],7
	cmp word ptr [esp+0x40],si
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	cmp eax,edi
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov byte ptr [esp+0x88],8
	cmp word ptr [esp+0x50],si
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,edi
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov esi,dword ptr [esp+0x14]
	cmp esi,edi
	sete al
	test al,al
	jne Block66

 Block28:
	cmp esi,edi
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	lea ecx,[esp+0x18]
	push ecx
	push esi
	mov dword ptr [esp+0x20],edi
	call edx
	cmp eax,edi
	jge Block32

 Block31:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block32:
	cmp dword ptr [esp+0x18],edi
	je Block66

 Block33:
	lea eax,[esp+0x18]
	push eax
	mov ecx,ebx
	call CPet::GetVecCtrl_1
	lea ecx,[esp+0x60]
	push ecx
	mov ecx,ebx
	mov byte ptr [esp+0x8C],9
	xor ebp,ebp
	call CPet::GetBodyRect
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x3E9
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea eax,[esp+0x38]
	mov byte ptr [esp+0x90],0xA
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x94],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x90],0xB
	call get_int32
	mov ebx,dword ptr [esp+0xA0]
	add esp,8
	cmp word ptr [esp+0x30],8
	mov dword ptr [ebx],eax
	mov byte ptr [esp+0x88],9
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0xA0],esp
	push 0xAB1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x94],0xC
	mov ecx,esi
	mov byte ptr [esp+0x94],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x90],0xD
	call get_int32
	add esp,8
	cmp word ptr [esp+0x30],8
	mov dword ptr [ebx+4],eax
	mov byte ptr [esp+0x88],9
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov eax,dword ptr [ebx+4]
	sub eax,1
	jne Block47

 Block42:
	lea ecx,[esp+0x60]
	push ecx
	call IsRectEmpty
	test eax,eax
	je Block46

 Block43:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x88],8
	test eax,eax
	je Block45

 Block44:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block45:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0x8C],0
	call edx
	lea ecx,[esp+0x90]
	call Ztl_bstr_t::~Ztl_bstr_t
	jmp Block70

 Block46:
	mov edi,dword ptr [esp+0x1C]
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x10]
	add edi,4
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,edi
	call edx
	mov edx,dword ptr [esp+0x60]
	mov ecx,eax
	mov eax,dword ptr [esp+0x68]
	add eax,edx
	cdq
	sub eax,edx
	mov ebp,eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x10]
	sar ebp,1
	sub ebp,dword ptr [ecx]
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,edi
	call edx
	mov edx,dword ptr [esp+0x6C]
	mov ecx,eax
	mov eax,dword ptr [esp+0x64]
	add eax,edx
	cdq
	sub eax,edx
	mov edi,eax
	sar edi,1
	sub edi,dword ptr [ecx+4]

 Block47:
	mov edx,dword ptr [esp+0x1C]
	push 0
	push 0xFF
	push 3
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0xA8],esp
	push ecx
	mov ecx,dword ptr [edx+0x94]
	add ecx,0x88
	call CAvatar::GetLayerUnderFace
	push edi
	push ebp
	mov ebp,dword ptr [esp+0x30]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [eax],ebp
	test ebp,ebp
	je Block49

 Block48:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+4]
	push ebp
	call ecx

 Block49:
	mov edx,dword ptr [esp+0xB0]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0xB8],esp
	push esi
	call ecx
	lea edx,[esp+0xBC]
	push edx
	call CAnimationDisplayer::LoadLayer_0
	add esp,0x28
	add ebx,8
	push eax
	mov ecx,ebx
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x98]
	test eax,eax
	je Block51

 Block50:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block51:
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0xA0],esp
	push 0x1AD0
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x94],0xE
	mov ecx,esi
	mov byte ptr [esp+0x94],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x90],0xF
	call get_int32
	add esp,8
	cmp word ptr [esp+0x30],8
	mov edi,eax
	mov byte ptr [esp+0x88],9
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
	test edi,edi
	je Block59

 Block56:
	push offset _D_VTMISSING
	lea ecx,[esp+0x24]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x34]
	mov byte ptr [esp+0x8C],0x10
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [ebx]
	mov byte ptr [esp+0x88],0x11
	test ecx,ecx
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x34]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x30]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x88],9
	call Ztl_variant_t::~Ztl_variant_t

 Block59:
	mov edi,dword ptr [esp+0x9C]
	test edi,edi
	je Block61

 Block60:
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0xA0],esp
	push 0x12E2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[esp+0x38]
	mov byte ptr [esp+0x90],0x12
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x94],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x90],0x13
	call get_int32
	add esp,8
	lea ecx,[esp+0x30]
	mov dword ptr [edi],eax
	call Ztl_variant_t::~Ztl_variant_t

 Block61:
	mov byte ptr [esp+0x88],8
	test ebp,ebp
	je Block63

 Block62:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block63:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0x8C],0
	call eax
	mov ecx,dword ptr [esp+0x90]
	test ecx,ecx
	je Block65

 Block64:
	call _xbstr_t::Data_t::Release

 Block65:
	mov eax,1
	jmp Block71

 Block66:
	mov byte ptr [esp+0x88],0
	cmp esi,edi
	je Block68

 Block67:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block68:
	mov ecx,dword ptr [esp+0x90]
	cmp ecx,edi
	je Block70

 Block69:
	call _xbstr_t::Data_t::Release

 Block70:
	xor eax,eax

 Block71:
	mov ecx,dword ptr [esp+0x80]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x78
	ret 0x10
}
}
// CPet::SendUpdateExceptionListRequest
_SUB_EXCEPTION_HANDLER(2A0DD0)
__SUB_CLASS_THIS(002A0DD0, __thiscall, 47426,  CPet, void, ZArray<long>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2A0DD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0xCC
	lea ecx,[esp+0x14]
	call COutPacket::_ctor_1
	push 8
	add esi,0xA0
	push esi
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x30],0
	call COutPacket::EncodeBuffer
	mov edi,dword ptr [esp+0x30]
	mov eax,dword ptr [edi]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	push eax
	lea ecx,[esp+0x14]
	call COutPacket::Encode1
	mov ecx,edi
	xor esi,esi
	call ZArray<long>::GetCount
	test eax,eax
	jbe Block12

 Block3:
	mov eax,dword ptr [edi]
	mov ebx,dword ptr [eax+esi*4]
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	jne Block5

 Block4:
	xor edx,edx
	jmp Block6

 Block5:
	mov edx,dword ptr [eax-4]

 Block6:
	mov ecx,dword ptr [esp+0x18]
	add ecx,4
	cmp ecx,edx
	jbe Block11

 Block7:
	test eax,eax
	je Block9

 Block8:
	mov eax,dword ptr [eax-4]
	lea ebx,[ebx]

 Block9:
	add eax,eax
	cmp ecx,eax
	ja Block9

 Block10:
	lea ecx,[esp+0x30]
	push ecx
	push 0
	push eax
	lea ecx,[esp+0x20]
	call ZArray<unsigned char>::_Realloc
	mov eax,dword ptr [esp+0x14]

 Block11:
	mov edx,dword ptr [esp+0x18]
	mov dword ptr [edx+eax],ebx
	add dword ptr [esp+0x18],4
	mov ecx,edi
	inc esi
	call ZArray<long>::GetCount
	cmp esi,eax
	jb Block3

 Block12:
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret 4
}
}
// CPet::GetVecCtrl
__SUB_CLASS_THIS0(0010FD10, __thiscall, 47407,  CPet, _x_com_ptr<IWzVector2D>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0x90]
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
// CPet::OnMove
__SUB_CLASS_THIS(0029FB60, __thiscall, 47433,  CPet, void, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x90]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [esp+4]
	push 0
	add eax,0xFFFFFFF4
	push ecx
	lea ecx,[eax+0x244]
	call CMovePath::OnMovePacket
	ret 4

 Block2:
	mov ecx,dword ptr [esp+4]
	xor eax,eax
	push eax
	push ecx
	lea ecx,[eax+0x244]
	call CMovePath::OnMovePacket
	ret 4
}
}
// CPet::GetZMass
__SUB_CLASS_THIS0(002A0460, __thiscall, 47428,  CPet, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x8C]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax+0x1B8]
	ret

 Block2:
	xor eax,eax
	mov eax,dword ptr [eax+0x1C4]
	ret
}
}
// CPet::OnActionCommand
_SUB_EXCEPTION_HANDLER(2A3930)
__SUB_CLASS_THIS(002A3930, __thiscall, 47433,  CPet, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2A3930
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
	mov ebp,ecx
	mov dword ptr [esp+0x1C],ebp
	mov eax,dword ptr [ebp+0x94]
	test eax,eax
	je Block2

 Block1:
	cmp dword ptr [eax+0x638],0
	jne Block42

 Block2:
	call CPet::GetLevel
	mov ebx,dword ptr [esp+0x30]
	mov ecx,ebx
	mov edi,eax
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [esp+0x18],eax
	test eax,eax
	jne Block8

 Block3:
	mov ecx,ebx
	mov dword ptr [ebp+0xB4],eax
	call CInPacket::Decode1
	mov ecx,dword ptr [ebp+0x88]
	movzx eax,al
	lea edx,[eax*8]
	sub edx,eax
	mov eax,dword ptr [ecx+0x48]
	cmp edi,dword ptr [eax+edx*4]
	lea esi,[eax+edx*4]
	jl Block42

 Block4:
	cmp dword ptr [esi+4],edi
	jl Block42

 Block5:
	mov ecx,ebx
	call CInPacket::Decode1
	test al,al
	je Block7

 Block6:
	lea edi,[esi+0x14]
	jmp Block25

 Block7:
	lea edi,[esi+0x18]
	jmp Block25

 Block8:
	cmp eax,1
	jne Block24

 Block9:
	mov edx,dword ptr [ebp+0x88]
	xor ebx,ebx
	xor ecx,ecx
	lea esp,[esp]

 Block10:
	mov eax,dword ptr [edx+0x4C]
	test eax,eax
	je Block12

 Block11:
	mov eax,dword ptr [eax-4]

 Block12:
	cmp ebx,eax
	jge Block19

 Block13:
	mov esi,dword ptr [edx+0x4C]
	add esi,ecx
	cmp edi,dword ptr [esi]
	jl Block15

 Block14:
	cmp dword ptr [esi+4],edi
	jge Block16

 Block15:
	inc ebx
	add ecx,0x10
	jmp Block10

 Block16:
	mov ecx,dword ptr [esp+0x30]
	call CInPacket::Decode1
	test al,al
	je Block18

 Block17:
	lea edi,[esi+8]
	jmp Block20

 Block18:
	lea edi,[esi+0xC]
	jmp Block20

 Block19:
	mov edi,dword ptr [esp+0x30]

 Block20:
	mov eax,dword ptr [ebp+0x88]
	add eax,0x4C
	mov eax,dword ptr [eax]
	test eax,eax
	je Block22

 Block21:
	mov eax,dword ptr [eax-4]

 Block22:
	cmp ebx,eax
	jne Block25

 Block23:
	jmp Block42

 Block24:
	mov edi,dword ptr [esp+0x30]

 Block25:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block42

 Block26:
	mov esi,dword ptr [eax-4]
	test esi,esi
	je Block42

 Block27:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	div esi
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+edx*8]
	push ecx
	mov dword ptr [esp+0x18],esp
	lea edi,[ecx+edx*8]
	mov ecx,esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block29

 Block28:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block29:
	mov ecx,dword ptr [ebp+0x88]
	call CPetTemplate::GetActionNo
	xor esi,esi
	mov ebp,eax
	mov dword ptr [esp+0x14],esi
	mov eax,dword ptr [edi+4]
	mov dword ptr [esp+0x28],esi
	cmp eax,esi
	je Block38

 Block30:
	cmp dword ptr [eax-4],esi
	je Block38

 Block31:
	cmp eax,esi
	je Block34

 Block32:
	mov ebx,dword ptr [eax-4]
	test ebx,ebx
	je Block34

 Block33:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	div ebx
	mov eax,edx
	jmp Block35

 Block34:
	mov ecx,offset _D_G_RAND
	call CRand32::Random

 Block35:
	mov edx,dword ptr [edi+4]
	lea eax,[edx+eax*4]
	lea ecx,[esp+0x14]
	cmp ecx,eax
	je Block38

 Block36:
	mov esi,dword ptr [eax]
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block38

 Block37:
	lea edx,[esi+8]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block38:
	mov ecx,dword ptr [esp+0x30]
	call CInPacket::Decode1
	movzx eax,al
	push 0
	push eax
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block40

 Block39:
	lea eax,[esi+8]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block40:
	mov ecx,dword ptr [esp+0x28]
	push ebp
	push ecx
	mov ecx,dword ptr [esp+0x34]
	call CPet::DoAction
	test esi,esi
	je Block42

 Block41:
	mov ecx,esi
	call _xbstr_t::Data_t::Release

 Block42:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 4
}
}
// CPet::MoveAction2RawAction
// 6A11B8
static uint8_t _SUB_2A0FF0_LOOKUP_TABLE_0[16] = {
0, 1, 2, 8, 8, 3, 8, 8, 8, 8, 1, 4, 5, 6, 7, 144, 
};
__SUB_CLASS_THIS(002A0FF0, __thiscall, 47448,  CPet, long, long, long*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0xC]
	test ecx,ecx
	je Block2

 Block1:
	mov edx,eax
	and edx,1
	mov dword ptr [ecx],edx

 Block2:
	sar eax,1
	lea ecx,[eax-1]
	cmp ecx,0xE
	ja Block13

 Block3:
	movzx ecx,byte ptr [ecx+_SUB_2A0FF0_LOOKUP_TABLE_0]
	cmp ECX, 0
je Block4
cmp ECX, 1
je Block16
cmp ECX, 2
je Block15
cmp ECX, 3
je Block31
cmp ECX, 4
je Block27
cmp ECX, 5
je Block28
cmp ECX, 6
je Block29
cmp ECX, 7
je Block30
cmp ECX, 8
je Block13


 Block4:
	mov edx,dword ptr [esi+0x88]
	cmp dword ptr [edx+0x40],0
	je Block13

 Block5:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0xF
	div ecx
	lea eax,[edx-1]
	cmp eax,4
	ja Block13

 Block6:
	cmp EAX, 0
je Block7
cmp EAX, 1
je Block8
cmp EAX, 2
je Block9
cmp EAX, 3
je Block10
cmp EAX, 4
je Block11


 Block7:
	push ecx
	mov dword ptr [esp+0x10],esp
	mov ecx,esp
	push offset _S_MOVE1
	jmp Block12

 Block8:
	push ecx
	mov dword ptr [esp+0x10],esp
	mov ecx,esp
	push offset _S_MOVE2
	jmp Block12

 Block9:
	push ecx
	mov dword ptr [esp+0x10],esp
	mov ecx,esp
	push offset _S_MOVE3
	jmp Block12

 Block10:
	push ecx
	mov dword ptr [esp+0x10],esp
	mov ecx,esp
	push offset _S_MOVE4
	jmp Block12

 Block11:
	push ecx
	mov dword ptr [esp+0x10],esp
	mov ecx,esp
	push offset _S_MOVE5

 Block12:
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x88]
	call CPetTemplate::GetActionNo
	test eax,eax
	jge Block14

 Block13:
	xor eax,eax

 Block14:
	pop esi
	ret 8

 Block15:
	mov eax,3
	pop esi
	ret 8

 Block16:
	mov edx,dword ptr [esi+0x88]
	cmp dword ptr [edx+0x40],0
	je Block26

 Block17:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0xF
	div ecx
	lea eax,[edx-2]
	cmp eax,4
	ja Block25

 Block18:
	cmp EAX, 0
je Block19
cmp EAX, 1
je Block20
cmp EAX, 2
je Block21
cmp EAX, 3
je Block22
cmp EAX, 4
je Block23


 Block19:
	push ecx
	mov dword ptr [esp+0x10],esp
	mov ecx,esp
	push offset _S_STAND2
	jmp Block24

 Block20:
	push ecx
	mov dword ptr [esp+0x10],esp
	mov ecx,esp
	push offset _S_STAND3
	jmp Block24

 Block21:
	push ecx
	mov dword ptr [esp+0x10],esp
	mov ecx,esp
	push offset _S_STAND4
	jmp Block24

 Block22:
	push ecx
	mov dword ptr [esp+0x10],esp
	mov ecx,esp
	push offset _S_STAND5
	jmp Block24

 Block23:
	push ecx
	mov dword ptr [esp+0x10],esp
	mov ecx,esp
	push offset _S_STAND6

 Block24:
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esi+0x88]
	call CPetTemplate::GetActionNo
	test eax,eax
	jge Block14

 Block25:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	and eax,1
	inc eax
	pop esi
	ret 8

 Block26:
	xor edx,edx
	cmp eax,2
	setne dl
	inc edx
	mov eax,edx
	pop esi
	ret 8

 Block27:
	mov eax,5
	pop esi
	ret 8

 Block28:
	mov eax,6
	pop esi
	ret 8

 Block29:
	mov eax,7
	pop esi
	ret 8

 Block30:
	mov eax,8
	pop esi
	ret 8

 Block31:
	mov eax,4
	pop esi
	ret 8
}
}
// CPet::AutoSpeakingByEvent
_SUB_EXCEPTION_HANDLER(2A18A0)
__SUB_CLASS_THIS(002A18A0, __thiscall, 47419,  CPet, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2A18A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	call CPet::GetUpgradePetSkill
	mov ecx,0x100
	test cx,ax
	je Block11

 Block1:
	mov edx,dword ptr [esp+0x28]
	mov ecx,dword ptr [esi+0x88]
	push edx
	lea eax,[esp+0x2C]
	push eax
	call CPetTemplate::GetAutoSpeakingByEvent
	mov edi,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0
	test edi,edi
	je Block3

 Block2:
	cmp byte ptr [edi],0
	jne Block5

 Block3:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test edi,edi
	je Block11

 Block4:
	jmp Block10

 Block5:
	mov ecx,dword ptr [esi+0x88]
	mov edx,dword ptr [ecx+0x14]
	mov eax,dword ptr [esi+0x90]
	push 0
	push 0
	push 0
	push edx
	push 0x3EA
	push 0x1388
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block7:
	mov eax,dword ptr [esi+0x124]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x40],1
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block9:
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push edi
	mov byte ptr [esp+0x48],2
	call _xbstr_t::_ctor_0
	lea ecx,[esi+0x14]
	mov byte ptr [esp+0x44],0
	call CChatBalloon::MakeBalloon
	mov dword ptr [esp+0x20],0xFFFFFFFF

 Block10:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x18
	ret 4
}
}
// PETLAYER::~PETLAYER
__SUB_CLASS_THIS0(0029FC90, __thiscall, 48038,  PETLAYER, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+8]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	ret
}
}
// CPet::GetLevel
__SUB_CLASS_THIS0(002A0080, __thiscall, 47404,  CPet, long) {
__asm {

 Block0:
	call CPet::GetItemSlot
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax+0x37]
	push ecx
	add eax,0x35
	push eax
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	movzx eax,al
	ret

 Block2:
	or eax,0xFFFFFFFF
	ret
}
}
// CPet::Init
_SUB_EXCEPTION_HANDLER(2A5340)
__SUB_CLASS_THIS(002A5340, __thiscall, 47397,  CPet, void, CUser*, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2A5340
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
	mov eax,dword ptr [esp+0x50]
	mov ebp,dword ptr [esp+0x54]
	mov ecx,ebp
	mov dword ptr [esi+0x94],eax
	call CInPacket::Decode4
	push eax
	call CPetTemplate::GetPetTemplate
	add esp,4
	lea ecx,[esp+0x50]
	push ecx
	mov ecx,ebp
	mov dword ptr [esi+0x88],eax
	call CInPacket::DecodeStr
	lea edi,[esi+0x98]
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x4C],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x50]
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x48],ebx
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	push offset _S___2
	push offset _S___7
	lea edx,[esp+0x58]
	push edx
	mov ecx,edi
	call ZXString<char>::ReplaceAll
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x4C],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x50]
	mov dword ptr [esp+0x48],ebx
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	push 8
	lea eax,[esi+0xA0]
	push eax
	mov ecx,ebp
	call CInPacket::DecodeBuffer
	mov ecx,esi
	call CPet::GetItemSlot
	mov edi,eax
	test edi,edi
	je Block7

 Block5:
	mov ecx,dword ptr [edi+0x3F]
	push ecx
	lea edx,[edi+0x3B]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	cwde
	mov dword ptr [esi+0xA8],eax
	mov ecx,dword ptr [edi+0x45]
	push ecx
	lea edx,[edi+0x43]
	push edx
	call _ZtlSecureFuseHelper<unsigned char>::call
	movzx eax,al
	mov dword ptr [esi+0xAC],eax
	mov ecx,dword ptr [edi+0x4D]
	push ecx
	lea edx,[edi+0x49]
	push edx
	call _ZtlSecureFuseHelper<short>::call
	cwde
	mov dword ptr [esi+0xB0],eax
	mov eax,dword ptr [esi+0x88]
	add esp,0x18
	test eax,eax
	je Block7

 Block6:
	mov eax,dword ptr [eax]
	lea ecx,[edi+0xC]
	push eax
	call TSecType<long>::SetData

 Block7:
	mov ecx,esi
	call CPet::SetShoeAttr
	mov ecx,ebp
	call CInPacket::Decode2
	cwde
	lea ecx,[esi+0x1D4]
	push eax
	call TSecType<long>::SetData
	mov ecx,ebp
	call CInPacket::Decode2
	cwde
	lea edi,[esi+0x1C8]
	push eax
	mov ecx,edi
	call TSecType<long>::SetData
	lea ecx,[edi+0xC]
	lea ebx,[esi+0x1B0]
	call TSecType<long>::GetData
	lea ecx,[ebx+0xC]
	push eax
	call TSecType<long>::SetData
	mov ecx,edi
	call TSecType<long>::GetData
	push eax
	mov ecx,ebx
	call TSecType<long>::SetData
	mov ecx,ebp
	call CInPacket::Decode1
	movzx ecx,al
	mov dword ptr [esi+0xF0],ecx
	mov edi,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,ebp
	call CInPacket::Decode2
	movsx edx,ax
	push edx
	mov ecx,edi
	call CWvsPhysicalSpace2D::GetFoothold
	mov ecx,dword ptr [esi+0x94]
	mov dword ptr [esp+0x14],eax
	lea eax,[esp+0x54]
	push eax
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	mov dword ptr [esp+0x50],eax
	jmp Block10

 Block9:
	mov dword ptr [esp+0x50],0

 Block10:
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	call CVecCtrlPet::CreateInstance
	mov ecx,dword ptr [esi+0x88]
	mov edx,dword ptr [ecx+8]
	mov edi,eax
	lea eax,[esi+4]
	push edx
	push eax
	mov ecx,edi
	call CVecCtrlPet::Init
	mov ecx,ebx
	call TSecType<long>::GetData
	lea ecx,[esi+0x1BC]
	mov ebx,eax
	call TSecType<long>::GetData
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [edi]
	push edx
	mov edx,dword ptr [esi+0xF0]
	push edx
	push 0
	push 0
	mov dword ptr [esp+0x28],ecx
	mov ecx,dword ptr [esi+0x94]
	push ebx
	push eax
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	push eax
	mov eax,dword ptr [esp+0x34]
	mov edx,dword ptr [eax+4]
	mov ecx,edi
	call edx
	mov eax,dword ptr [edi+0x1D8]
	lea ecx,[esi+0x90]
	push edi
	mov dword ptr [esi+0xF0],eax
	call _x_com_ptr<IWzVector2D>::_QueryVecCtrlPet
	xor ebx,ebx
	cmp eax,ebx
	jge Block15

 Block13:
	cmp eax,0x80004002
	je Block15

 Block14:
	push eax
	call _com_issue_error

 Block15:
	lea ecx,[esp+0x30]
	push ecx
	mov dword ptr [esi+0xD8],ebx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	mov eax,3
	mov dword ptr [esp+0x48],2
	mov word ptr [esp+0x20],ax
	mov dword ptr [esp+0x28],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x48],al
	cmp ecx,ebx
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea edx,[esp+0x38]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov ebx,dword ptr [esi+0x124]
	cmp ebx,eax
	je Block24

 Block20:
	mov dword ptr [esi+0x124],eax
	test eax,eax
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block22:
	test ebx,ebx
	je Block24

 Block23:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block24:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block26

 Block25:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block26:
	mov ebx,8
	mov byte ptr [esp+0x48],2
	cmp word ptr [esp+0x20],bx
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp word ptr [esp+0x30],bx
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
	mov ecx,ebp
	call CInPacket::Decode1
	movzx ecx,al
	lea ebx,[esi+0x188]
	mov edx,ebx
	call _ZtlSecureTearHelper<int>::call
	mov ecx,ebp
	mov dword ptr [esi+0x190],eax
	call CInPacket::Decode1
	movzx ecx,al
	lea edx,[esi+0x194]
	call _ZtlSecureTearHelper<int>::call
	mov edx,dword ptr [esi+0x190]
	push edx
	push ebx
	mov dword ptr [esi+0x19C],eax
	call _ZtlSecureFuseHelper<int>::call
	add esp,8
	test eax,eax
	je Block36

 Block35:
	mov eax,dword ptr [esi+0x88]
	mov eax,dword ptr [eax+0x10]
	jmp Block37

 Block36:
	xor eax,eax

 Block37:
	push 0
	push 0
	push 0
	push 0
	push eax
	push 0x3EB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push edi
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzVector2D>::_QueryVecCtrlPet
	test eax,eax
	jge Block40

 Block38:
	cmp eax,0x80004002
	je Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	mov eax,dword ptr [esi+0x124]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block42:
	mov eax,dword ptr [esi+0x98]
	push eax
	mov ecx,esi
	call CLife::MakeNameTag
	mov eax,dword ptr [esp+0x50]
	mov ecx,dword ptr [eax+0x1BC]
	push 1
	push ecx
	add eax,0x1B4
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	push eax
	mov ecx,esi
	call CPet::HangOnBack
	mov ecx,esi
	call CPet::PrepareActionLayer
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret 8
}
}
// CPet::GetPosPrev
__SUB_CLASS_THIS0(002A04E0, __thiscall, 47432,  CPet, const tagPOINT) {
__asm {

 Block0:
	push esi
	lea esi,[ecx+0x1C4]
	push edi
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,esi
	mov edi,eax
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [eax],edi
	pop edi
	mov dword ptr [eax+4],ecx
	pop esi
	ret 4
}
}
// CPet::OnLoadExceptionList
_SUB_EXCEPTION_HANDLER(2A1510)
__SUB_CLASS_THIS(002A1510, __thiscall, 47433,  CPet, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2A1510
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov ebp,dword ptr [esp+0x44]
	push 8
	lea eax,[esp+0x2C]
	push eax
	mov ecx,ebp
	call CInPacket::DecodeBuffer
	mov ecx,dword ptr [esp+0x28]
	cmp ecx,dword ptr [edi+0xA0]
	jne Block23

 Block1:
	mov edx,dword ptr [esp+0x2C]
	cmp edx,dword ptr [edi+0xA4]
	jne Block23

 Block2:
	add edi,0x8C
	mov ecx,edi
	call ZArray<long>::RemoveAll
	mov ecx,ebp
	call CInPacket::Decode1
	movzx ebx,al
	mov dword ptr [esp+0x1C],ebx
	test ebx,ebx
	jle Block23

 Block3:
	mov dword ptr [esp+0x44],ebx

 Block4:
	mov ecx,ebp
	call CInPacket::Decode4
	push 0xFFFFFFFF
	mov ecx,edi
	mov esi,eax
	call ZArray<long>::InsertBefore
	sub dword ptr [esp+0x44],1
	mov dword ptr [eax],esi
	jne Block4

 Block5:
	test ebx,ebx
	jle Block23

 Block6:
	mov eax,1
	xor ebp,ebp
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x24],ebx

 Block7:
	cmp eax,ebx
	mov dword ptr [esp+0x18],eax
	jge Block22

 Block8:
	mov eax,dword ptr [edi]
	add eax,ebp
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemName
	mov edx,dword ptr [edi]
	cmp dword ptr [edx+ebp],0x7FFFFFFF
	mov dword ptr [esp+0x3C],0
	jne Block11

 Block9:
	lea eax,[esp+0x28]
	push 0x1A10
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x40],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x3C],0
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	push 0
	push 0
	lea ecx,[esp+0x1C]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov esi,dword ptr [esp+0x18]
	mov eax,dword ptr [edi]
	add esi,esi
	add esi,esi
	mov ecx,dword ptr [eax+esi]
	add eax,esi
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[esp+0x48]
	push edx
	call CItemInfo::GetItemName
	mov eax,dword ptr [edi]
	cmp dword ptr [esi+eax],0x7FFFFFFF
	mov byte ptr [esp+0x3C],2
	jne Block14

 Block12:
	lea ecx,[esp+0x30]
	push 0x1A10
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0x40],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x3C],2
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block14:
	push 0
	push 0
	lea ecx,[esp+0x4C]
	call ZXString<char>::TrimRight
	mov ecx,eax
	call ZXString<char>::TrimLeft
	mov ebx,dword ptr [esp+0x44]
	push ebx
	lea ecx,[esp+0x18]
	call ZXString<char>::Compare
	test eax,eax
	jle Block16

 Block15:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+esi]
	mov ecx,dword ptr [eax+ebp]
	mov dword ptr [eax+ebp],edx
	mov eax,dword ptr [edi]
	mov dword ptr [esi+eax],ecx
	mov ebx,dword ptr [esp+0x44]

 Block16:
	mov byte ptr [esp+0x3C],0
	test ebx,ebx
	je Block18

 Block17:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block18:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov eax,dword ptr [esp+0x18]
	inc eax
	cmp eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x18],eax
	jl Block8

 Block21:
	mov ebx,dword ptr [esp+0x1C]
	mov eax,dword ptr [esp+0x20]

 Block22:
	inc eax
	add ebp,4
	sub dword ptr [esp+0x24],1
	mov dword ptr [esp+0x20],eax
	jne Block7

 Block23:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 4
}
}
// CPet::GetItemSlot
__SUB_CLASS_THIS0(0029FFB0, __thiscall, 47403,  CPet, GW_ItemSlotPet*) {
__asm {

 Block0:
	sub esp,0x10
	push ebp
	mov ebp,ecx
	mov ecx,dword ptr [ebp+0x94]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx
	test eax,eax
	jne Block2

 Block1:
	pop ebp
	add esp,0x10
	ret

 Block2:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	push edi
	lea eax,[esp+0x14]
	push eax
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block7

 Block3:
	push ebx
	lea esi,[eax-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block6

 Block5:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block6:
	mov dword ptr [esp+0x1C],0
	pop ebx

 Block7:
	mov ecx,dword ptr [ebp+0xA4]
	mov edx,dword ptr [ebp+0xA0]
	push ecx
	push edx
	push 5
	mov ecx,edi
	call CharacterData::FindCashItemSlotPosition_0
	push eax
	push 5
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block11

 Block8:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block11

 Block9:
	mov ecx,dword ptr [esp+0x10]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x10]
	test ecx,ecx
	je Block11

 Block10:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block11:
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	add esp,0x10
	ret
}
}
// CPet::OnAction
_SUB_EXCEPTION_HANDLER(2A3860)
__SUB_CLASS_THIS(002A3860, __thiscall, 47433,  CPet, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2A3860
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov eax,dword ptr [ebp+0x94]
	test eax,eax
	je Block2

 Block1:
	cmp dword ptr [eax+0x638],0
	jne Block4

 Block2:
	mov esi,dword ptr [esp+0x28]
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	movsx edi,al
	call CInPacket::Decode1
	movsx ebx,al
	lea eax,[esp+0x28]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov ecx,esi
	mov dword ptr [esp+0x20],0
	call CInPacket::Decode1
	mov edx,dword ptr [esp+0x28]
	push 1
	movzx eax,al
	push eax
	push 0
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push edx
	call _xbstr_t::_ctor_0
	push ebx
	push edi
	mov ecx,ebp
	call CPet::DoAction
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 4
}
}
// CPet::GetPos
__SUB_CLASS_THIS0(002A04B0, __thiscall, 47432,  CPet, const tagPOINT) {
__asm {

 Block0:
	push esi
	lea esi,[ecx+0x1AC]
	push edi
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	mov ecx,esi
	mov edi,eax
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [eax],edi
	pop edi
	mov dword ptr [eax+4],ecx
	pop esi
	ret 4
}
}
// CPet::ADDITIONALLAYER::ADDITIONALLAYER
_SUB_EXCEPTION_HANDLER(4E16C0)
__SUB_CLASS_THIS0(004E16C0, __thiscall, 48021,  CPet::ADDITIONALLAYER, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4E16C0
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
	or eax,0xFFFFFFFF
	xor ecx,ecx
	mov dword ptr [esi],eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	mov dword ptr [esi+0x14],ecx
	mov dword ptr [esi+0xC],1
	mov eax,dword ptr [esi+0x14]
	mov dword ptr [esp+0x14],ecx
	cmp eax,ecx
	je Block2

 Block1:
	mov dword ptr [esi+0x14],ecx
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CPet::OnNameChanged
_SUB_EXCEPTION_HANDLER(2A11F0)
__SUB_CLASS_THIS(002A11F0, __thiscall, 47433,  CPet, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2A11F0
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
	mov edi,dword ptr [esp+0x24]
	lea eax,[esp+0x24]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	lea ebx,[esi+0x98]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x20],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [esi+0x88]
	mov eax,dword ptr [ecx+0x10]
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	push 0
	push 0
	push 0
	push 0
	push eax
	mov eax,dword ptr [esi+0x90]
	push 0x3EB
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block7:
	mov eax,dword ptr [esi+0x124]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block9:
	mov eax,dword ptr [ebx]
	push eax
	mov ecx,esi
	call CLife::MakeNameTag
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret 4
}
}
// CDurationChecker::Validate
__SUB_CLASS_THIS(00117440, __thiscall, 47996,  CDurationChecker, int32_t, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x2C]
	mov edx,dword ptr [ecx+0x30]
	push ebx
	mov ebx,dword ptr [edx+eax*4]
	lea eax,[edx+eax*4]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov dword ptr [eax],edi
	mov eax,dword ptr [ecx+0x2C]
	mov esi,dword ptr [ecx+0x1C]
	inc eax
	cdq
	idiv esi
	mov eax,dword ptr [ecx+0x20]
	cmp eax,esi
	mov dword ptr [ecx+0x2C],edx
	jge Block2

 Block1:
	inc eax
	mov dword ptr [ecx+0x20],eax

 Block2:
	inc dword ptr [ecx+0x24]
	mov eax,edi
	sub eax,ebx
	add dword ptr [ecx+0x28],eax
	cmp edi,dword ptr [ecx+0x14]
	mov eax,dword ptr [ecx+0x28]
	jl Block8

 Block3:
	cmp edi,dword ptr [ecx+0x18]
	jg Block8

 Block4:
	mov edx,dword ptr [ecx+0x20]
	cmp edx,dword ptr [ecx+4]
	jge Block6

 Block5:
	pop edi
	pop esi
	mov eax,1
	pop ebx
	ret 4

 Block6:
	cmp eax,dword ptr [ecx+0xC]
	jl Block8

 Block7:
	cmp eax,dword ptr [ecx+0x10]
	jle Block5

 Block8:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 4
}
}
// CPet::OnResolveMoveAction
__SUB_CLASS_THIS(002A06C0, __thiscall, 47429,  CPet, long, long, long, long, const CVecCtrl*) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0x14]
	mov eax,dword ptr [ebx+0x1BC]
	push esi
	mov esi,dword ptr [esp+0x14]
	push edi
	mov edi,ecx
	push eax
	lea ecx,[ebx+0x1B4]
	push ecx
	and esi,1
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	je Block8

 Block1:
	mov ecx,dword ptr [edi+0x90]
	push ebp
	lea edx,[esp+0x1C]
	push edx
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	test eax,eax
	je Block3

 Block2:
	lea ebp,[eax-0xC]
	jmp Block4

 Block3:
	xor ebp,ebp

 Block4:
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [ebp+0x1BC]
	push eax
	add ebp,0x1B4
	push ebp
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	pop ebp
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [edi+0x90]
	mov eax,dword ptr [ecx+0x640]
	pop edi
	and eax,1
	pop esi
	or eax,0x1E
	pop ebx
	ret 0x10

 Block8:
	cmp dword ptr [ebx+0x1A0],0
	mov eax,dword ptr [esp+0x10]
	je Block19

 Block9:
	test eax,eax
	je Block11

 Block10:
	xor edx,edx
	test eax,eax
	setl dl
	pop edi
	pop esi
	pop ebx
	and edx,1
	or edx,2
	mov eax,edx
	ret 0x10

 Block11:
	cmp dword ptr [edi+0xA8],0x32
	jg Block13

 Block12:
	mov eax,esi
	pop edi
	and eax,1
	pop esi
	or eax,0x18
	pop ebx
	ret 0x10

 Block13:
	mov edi,dword ptr [edi+0xF0]
	lea eax,[edi-1]
	cmp eax,6
	ja Block15

 Block14:
	cmp EAX, 0
je Block15
cmp EAX, 1
je Block16
cmp EAX, 2
je Block15
cmp EAX, 3
je Block15
cmp EAX, 4
je Block15
cmp EAX, 5
je Block17
cmp EAX, 6
je Block18


 Block15:
	mov eax,esi
	pop edi
	and eax,1
	pop esi
	or eax,4
	pop ebx
	ret 0x10

 Block16:
	mov eax,esi
	pop edi
	and eax,1
	pop esi
	or eax,0x16
	pop ebx
	ret 0x10

 Block17:
	mov eax,esi
	pop edi
	and eax,1
	pop esi
	or eax,0x1A
	pop ebx
	ret 0x10

 Block18:
	mov eax,esi
	pop edi
	and eax,1
	pop esi
	or eax,0x1C
	pop ebx
	ret 0x10

 Block19:
	test eax,eax
	je Block21

 Block20:
	xor ecx,ecx
	test eax,eax
	setl cl
	mov esi,ecx

 Block21:
	mov ecx,ebx
	call CVecCtrl::IsSwimming
	neg eax
	sbb eax,eax
	and eax,3
	add eax,3
	and esi,1
	add eax,eax
	pop edi
	or eax,esi
	pop esi
	pop ebx
	ret 0x10
}
}
// CPet::ChatCommandInPreview
_SUB_EXCEPTION_HANDLER(2A1450)
__SUB_CLASS_THIS(002A1450, __thiscall, 47415,  CPet, void, const ZXString<char>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2A1450
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+0x88]
	mov ecx,dword ptr [eax+0x14]
	mov eax,dword ptr [esi+0x90]
	push 0
	push 0
	push 0
	push ecx
	push 0x3EA
	push 0x1388
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov eax,dword ptr [esi+0x124]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],0
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esp+0x40]
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x40],1
	call _xbstr_t::_ctor_0
	lea ecx,[esi+0x14]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call CChatBalloon::MakeBalloon
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret 4
}
}
