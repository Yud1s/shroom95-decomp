#include "regen.hpp"
// ReactorPool.ipp
#include "ReactorPool.hpp"

// CReactorPool::FindSkillReactor
_SUB_EXCEPTION_HANDLER(2CDAB0)
__SUB_CLASS_THIS(002CDAB0, __thiscall, 68108,  CReactorPool, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2CDAB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x54]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	call get_update_time
	mov dword ptr [esp+0x18],eax
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test eax,eax
	je Block35

 Block1:
	mov ebx,eax
	mov eax,dword ptr [ebx+4]
	mov eax,dword ptr [eax+0x10]
	lea ecx,[ebx+4]
	lea edx,[esp+0x2C]
	push edx
	call eax
	mov eax,dword ptr [esi+0x24]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block35

 Block2:
	lea ecx,[esp+0x14]
	push ecx
	call ZList<ZRef<REACTOR>>::GetNext
	mov esi,dword ptr [eax+4]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	add esp,4
	mov dword ptr [esp+0x28],esi
	test esi,esi
	je Block4

 Block3:
	lea edx,[esi-0xC]
	push edx
	call ebp

 Block4:
	cmp dword ptr [esi+0x30],0
	mov dword ptr [esp+0x5C],0
	jne Block30

 Block5:
	mov eax,dword ptr [esp+0x18]
	sub eax,dword ptr [esi+0x2C]
	js Block30

 Block6:
	mov ecx,dword ptr [esi+0x10]
	push ecx
	mov ecx,dword ptr [esi+8]
	lea edx,[esp+0x20]
	push edx
	call CReactorTemplate::GetStateInfo
	mov edx,dword ptr [esp+0x20]
	mov byte ptr [esp+0x5C],1
	test edx,edx
	jne Block10

 Block7:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x60],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block34

 Block8:
	push edi
	call ebp
	test esi,esi
	je Block34

 Block9:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx
	jmp Block34

 Block10:
	xor ebp,ebp
	lea ebx,[ebx]

 Block11:
	mov eax,dword ptr [edx+4]
	test eax,eax
	je Block23

 Block12:
	cmp ebp,dword ptr [eax-4]
	jae Block23

 Block13:
	mov eax,dword ptr [eax+ebp*8+4]
	cmp dword ptr [eax],5
	jne Block22

 Block14:
	xor edi,edi

 Block15:
	mov ecx,dword ptr [edx+4]
	mov ecx,dword ptr [ecx+ebp*8+4]
	mov eax,dword ptr [ecx+0x14]
	test eax,eax
	je Block22

 Block16:
	cmp edi,dword ptr [eax-4]
	jae Block22

 Block17:
	mov ecx,dword ptr [esp+0x64]
	cmp dword ptr [eax+edi*4],ecx
	jne Block20

 Block18:
	mov edx,dword ptr [edx+4]
	mov eax,dword ptr [edx+ebp*8+4]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x44],ecx
	mov edx,dword ptr [eax+8]
	mov dword ptr [esp+0x48],edx
	mov ecx,dword ptr [eax+0xC]
	mov dword ptr [esp+0x4C],ecx
	mov edx,dword ptr [eax+0x10]
	mov dword ptr [esp+0x50],edx
	mov eax,dword ptr [esi+0x18]
	mov ecx,dword ptr [esi+0x14]
	push eax
	push ecx
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_OffsetRect]
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [esp+0x2C]
	push eax
	push ecx
	lea edx,[esp+0x4C]
	push edx
	call PtInRect
	test eax,eax
	jne Block21

 Block19:
	mov edx,dword ptr [esp+0x20]

 Block20:
	inc edi
	jmp Block15

 Block21:
	mov dword ptr [esi+0x30],1
	mov edi,dword ptr [ebx+0x640]
	mov ecx,ebx
	call CUser::IsOnFoothold
	add eax,eax
	and edi,1
	or eax,edi
	mov dword ptr [esi+0x34],eax
	call get_update_time
	add eax,0x320
	mov dword ptr [esi+0x28],eax
	push 0xF9
	lea ecx,[esp+0x38]
	mov dword ptr [esi+0x24],ebp
	call COutPacket::_ctor_1
	mov eax,dword ptr [esi]
	push eax
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x60],2
	call COutPacket::Encode4
	push 1
	lea ecx,[esp+0x38]
	call COutPacket::Encode4
	mov ecx,dword ptr [esi+0x34]
	push ecx
	lea ecx,[esp+0x38]
	call COutPacket::Encode4
	push 0x320
	lea ecx,[esp+0x38]
	call COutPacket::Encode2
	mov edx,dword ptr [esp+0x64]
	push edx
	lea ecx,[esp+0x38]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x34]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x5C],1
	call ZArray<unsigned char>::RemoveAll
	mov edx,dword ptr [esp+0x20]

 Block22:
	inc ebp
	jmp Block11

 Block23:
	mov byte ptr [esp+0x5C],0
	test edx,edx
	je Block28

 Block24:
	lea edi,[edx-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block27

 Block25:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block27

 Block26:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block27:
	mov dword ptr [esp+0x20],0

 Block28:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x60],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block34

 Block29:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block32

 Block30:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x60],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block34

 Block31:
	push edi
	call ebp

 Block32:
	test esi,esi
	je Block34

 Block33:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block34:
	cmp dword ptr [esp+0x14],0
	mov dword ptr [esp+0x28],0
	jne Block2

 Block35:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret 4
}
}
// CReactorPool::Update
_SUB_EXCEPTION_HANDLER(2CEFC0)
__SUB_CLASS_THIS(002CEFC0, __thiscall, 68108,  CReactorPool, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2CEFC0
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
	mov edi,ecx
	mov dword ptr [esp+0x14],edi
	mov eax,dword ptr [edi+0x24]
	xor ebp,ebp
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block30

 Block1:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	jmp Block3

 Block2:
	mov edi,dword ptr [esp+0x14]

 Block3:
	lea eax,[esp+0x20]
	push eax
	call ZList<ZRef<REACTOR>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x28],esi
	cmp esi,ebp
	je Block5

 Block4:
	lea ecx,[esi-0xC]
	push ecx
	call ebx

 Block5:
	mov eax,dword ptr [esi+0x30]
	dec eax
	mov dword ptr [esp+0x34],ebp
	cmp eax,3
	ja Block26

 Block6:
	cmp EAX, 0
je Block7
cmp EAX, 1
je Block11
cmp EAX, 2
je Block16
cmp EAX, 3
je Block18


 Block7:
	mov eax,dword ptr [esi+0x28]
	cmp eax,ebp
	je Block26

 Block8:
	mov edx,dword ptr [esp+0x3C]
	sub edx,eax
	test edx,edx
	jle Block26

 Block9:
	sub esp,8
	mov eax,esp
	mov dword ptr [esi+0x28],ebp
	mov dword ptr [eax+4],esi
	lea eax,[esi-0xC]
	mov dword ptr [esp+0x20],esp
	push eax
	call ebx
	mov ecx,edi
	call CReactorPool::LoadReactorLayer
	cmp dword ptr [esi+0x30],ebp
	je Block26

 Block10:
	xor ecx,ecx
	cmp dword ptr [esi+0x24],0xFFFFFFFE
	sete cl
	add ecx,2
	mov dword ptr [esi+0x30],ecx
	jmp Block26

 Block11:
	mov edi,dword ptr [esi+0x38]
	cmp edi,ebp
	je Block31

 Block12:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x114]
	lea eax,[esp+0x18]
	push eax
	push edi
	mov dword ptr [esp+0x20],ebp
	call ecx
	cmp eax,ebp
	jge Block14

 Block13:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block14:
	cmp dword ptr [esp+0x18],ebp
	jne Block26

 Block15:
	sub esp,8
	mov eax,esp
	lea edx,[esi-0xC]
	mov dword ptr [esp+0x20],esp
	push edx
	mov dword ptr [eax+4],esi
	call ebx
	mov ecx,dword ptr [esp+0x1C]
	call CReactorPool::LoadReactorLayer
	mov dword ptr [esi+0x30],ebp
	jmp Block26

 Block16:
	cmp dword ptr [esi+0x24],0xFFFFFFFE
	je Block26

 Block17:
	mov dword ptr [esi+0x30],2
	jmp Block26

 Block18:
	mov eax,dword ptr [esi+0x28]
	mov ecx,dword ptr [esp+0x3C]
	sub ecx,eax
	js Block26

 Block19:
	cmp eax,ebp
	je Block21

 Block20:
	sub esp,8
	mov eax,esp
	lea edx,[esi-0xC]
	mov dword ptr [esp+0x24],esp
	push edx
	mov dword ptr [eax+4],esi
	call ebx
	mov ecx,edi
	call CReactorPool::LoadReactorLayer
	mov dword ptr [esi+0x28],ebp

 Block21:
	mov edi,dword ptr [esi+0x38]
	cmp edi,ebp
	je Block31

 Block22:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x114]
	lea ecx,[esp+0x1C]
	push ecx
	push edi
	mov dword ptr [esp+0x24],ebp
	call edx
	cmp eax,ebp
	jge Block24

 Block23:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block24:
	cmp dword ptr [esp+0x1C],ebp
	jne Block26

 Block25:
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],esi
	lea eax,[esi-0xC]
	mov dword ptr [esp+0x20],esp
	push eax
	call ebx
	mov ecx,dword ptr [esp+0x1C]
	call CReactorPool::RemoveReactor

 Block26:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x38],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block29

 Block27:
	push edi
	call ebx
	cmp esi,ebp
	je Block29

 Block28:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block29:
	mov dword ptr [esp+0x28],ebp
	cmp dword ptr [esp+0x20],ebp
	jne Block2

 Block30:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 4

 Block31:
	push 0x80004003
	call _com_issue_error
}
}
// get_hittype_priority_level
__SUB(002CC000, __cdecl, 133934,  long, unsigned long, long) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,ecx
	and eax,1
	test cl,2
	mov ecx,dword ptr [esp+8]
	je Block7

 Block1:
	sub ecx,0
	je Block6

 Block2:
	sub ecx,1
	je Block5

 Block3:
	sub ecx,1
	jne Block12

 Block4:
	neg eax
	sbb eax,eax
	neg eax
	dec eax
	ret

 Block5:
	neg eax
	sbb eax,eax
	ret

 Block6:
	mov eax,1
	ret

 Block7:
	cmp ecx,4
	ja Block12

 Block8:
	cmp ECX, 0
je Block11
cmp ECX, 1
je Block9
cmp ECX, 2
je Block10
cmp ECX, 3
je Block5
cmp ECX, 4
je Block4


 Block9:
	xor ecx,ecx
	test eax,eax
	sete cl
	lea ecx,[ecx+ecx-1]
	mov eax,ecx
	ret

 Block10:
	xor edx,edx
	test eax,eax
	setne dl
	lea edx,[edx+edx-1]
	mov eax,edx
	ret

 Block11:
	mov eax,2
	ret

 Block12:
	or eax,0xFFFFFFFF
	ret
}
}
// CReactorPool::FindHitReactor
_SUB_EXCEPTION_HANDLER(2CD4E0)
__SUB_CLASS_THIS0(002CD4E0, __thiscall, 68114,  CReactorPool, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2CD4E0
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
	mov dword ptr [esp+0x2C],esi
	call get_update_time
	xor ecx,ecx
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x14],ecx
	mov eax,dword ptr [esi+0x24]
	mov dword ptr [esp+0x78],ecx
	mov dword ptr [esp+0x18],eax
	cmp eax,ecx
	je Block65

 Block1:
	lea eax,[esp+0x18]
	push eax
	call ZList<ZRef<REACTOR>>::GetNext
	mov ebx,dword ptr [eax+4]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	add esp,4
	mov dword ptr [esp+0x3C],ebx
	test ebx,ebx
	je Block3

 Block2:
	lea ecx,[ebx-0xC]
	push ecx
	call ebp

 Block3:
	push 0xFFFFFFFF
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x7C],1
	call ZArray<tagRECT>::InsertBefore
	mov edi,eax
	push edi
	call dword ptr [ZImports::_SetRectEmpty]
	cmp dword ptr [ebx+0x30],0
	jne Block50

 Block4:
	mov edx,dword ptr [esp+0x20]
	sub edx,dword ptr [ebx+0x2C]
	js Block50

 Block5:
	mov eax,dword ptr [ebx+0x10]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,dword ptr [ebx+8]
	call CReactorTemplate::GetStateInfo
	mov edx,dword ptr [esp+0x34]
	mov byte ptr [esp+0x78],2
	test edx,edx
	jne Block10

 Block6:
	lea esi,[ebx-0x10]
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x7C],dl
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block54

 Block7:
	push edi
	call ebp

 Block8:
	test esi,esi
	je Block54

 Block9:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax
	jmp Block54

 Block10:
	xor ecx,ecx

 Block11:
	mov eax,dword ptr [edx+4]
	test eax,eax
	je Block16

 Block12:
	cmp ecx,dword ptr [eax-4]
	jae Block16

 Block13:
	mov eax,dword ptr [eax+ecx*8+4]
	cmp dword ptr [eax],0
	jl Block15

 Block14:
	cmp dword ptr [eax],4
	jle Block21

 Block15:
	inc ecx
	jmp Block11

 Block16:
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	lea esi,[edx-0x10]
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x7C],1
	call ebp
	test eax,eax
	jne Block19

 Block17:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block19

 Block18:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block19:
	lea esi,[ebx-0x10]
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x38],0
	mov byte ptr [esp+0x7C],0
	call ebp
	test eax,eax
	jne Block54

 Block20:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block8

 Block21:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block66

 Block22:
	mov ecx,dword ptr [ebx+0x38]
	mov byte ptr [esp+0x78],3
	test ecx,ecx
	je Block67

 Block23:
	lea eax,[esp+0x24]
	push eax
	call IWzGr2DLayer::Getlt
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x78],4
	test esi,esi
	je Block67

 Block24:
	mov edx,dword ptr [esp+0x40]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x8C]
	sub esp,0x10
	mov eax,esp
	push 0
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x58]
	push 0
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x60]
	push 0
	push 0
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x6C]
	push 0
	push 0
	mov dword ptr [eax+0xC],edx
	lea eax,[edi+4]
	push eax
	push edi
	push esi
	call ecx
	test eax,eax
	jge Block26

 Block25:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block26:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x78],3
	test eax,eax
	je Block28

 Block27:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block28:
	mov ebp,8
	mov byte ptr [esp+0x78],2
	cmp word ptr [esp+0x40],bp
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block66

 Block33:
	mov ecx,dword ptr [ebx+0x38]
	mov byte ptr [esp+0x78],5
	test ecx,ecx
	je Block67

 Block34:
	lea edx,[esp+0x28]
	push edx
	call IWzGr2DLayer::Getrb
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x78],6
	test esi,esi
	je Block67

 Block35:
	mov edx,dword ptr [esp+0x50]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x8C]
	sub esp,0x10
	mov eax,esp
	push 0
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x68]
	push 0
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x70]
	push 0
	push 0
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x7C]
	push 0
	push 0
	mov dword ptr [eax+0xC],edx
	lea eax,[edi+0xC]
	push eax
	add edi,8
	push edi
	push esi
	call ecx
	test eax,eax
	jge Block37

 Block36:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block37:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x78],5
	test eax,eax
	je Block39

 Block38:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block39:
	mov byte ptr [esp+0x78],2
	cmp word ptr [esp+0x50],bp
	jne Block42

 Block40:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x78],1
	test eax,eax
	je Block48

 Block44:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block47

 Block45:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block47

 Block46:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block47:
	mov dword ptr [esp+0x34],0

 Block48:
	lea esi,[ebx-0x10]
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x7C],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block54

 Block49:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	jmp Block52

 Block50:
	lea esi,[ebx-0x10]
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x7C],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block54

 Block51:
	push edi
	call ebp

 Block52:
	test esi,esi
	je Block54

 Block53:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block54:
	cmp dword ptr [esp+0x18],0
	mov dword ptr [esp+0x3C],0
	jne Block1

 Block55:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block65

 Block56:
	cmp dword ptr [eax-4],0
	jbe Block65

 Block57:
	mov edi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	push 1
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,edi
	call CUserLocal::TryDoingNormalAttack
	test eax,eax
	jl Block65

 Block58:
	mov ecx,dword ptr [esp+0x2C]
	push eax
	add ecx,0x18
	call ZList<ZRef<REACTOR>>::FindIndex
	mov esi,dword ptr [eax+4]
	mov dword ptr [esp+0x3C],esi
	test esi,esi
	je Block60

 Block59:
	lea edx,[esi-0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block60:
	mov bl,7
	mov byte ptr [esp+0x78],bl
	test esi,esi
	je Block65

 Block61:
	mov eax,dword ptr [esi+8]
	cmp dword ptr [eax+0x1C],0
	je Block68

 Block62:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0x7C],0
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block65

 Block63:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block65

 Block64:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block65:
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	call ZArray<tagRECT>::RemoveAll
	xor eax,eax
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x68
	ret

 Block66:
	push eax
	call _com_issue_error

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	cmp dword ptr [eax+0x24],0
	je Block71

 Block69:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x30]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	lea ecx,[esp+0x30]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [esi+8]
	movzx edx,word ptr [ecx+0x24]
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[ebp+0x6F5]
	mov dword ptr [esp+0x30],edx
	call ZMap<unsigned short, ZXString<char>, unsigned short>::GetPos
	test eax,eax
	jne Block71

 Block70:
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x78],al
	call ZRef<REACTOR>::~ZRef<REACTOR>
	jmp Block65

 Block71:
	mov dword ptr [esi+0x30],1
	mov ecx,dword ptr [edi+0x19E4]
	mov eax,dword ptr [edi+0x640]
	test ecx,ecx
	je Block73

 Block72:
	add ecx,0xFFFFFFF4
	jmp Block74

 Block73:
	xor ecx,ecx

 Block74:
	xor edx,edx
	cmp dword ptr [ecx+0x1A0],edx
	setne dl
	and eax,1
	add edx,edx
	or edx,eax
	mov dword ptr [esi+0x34],edx
	call get_update_time
	add eax,dword ptr [esp+0x1C]
	push 0xF9
	mov dword ptr [esi+0x28],eax
	lea ecx,[esp+0x64]
	mov dword ptr [esi+0x24],0xFFFFFFFE
	call COutPacket::_ctor_1
	mov eax,dword ptr [esi]
	push eax
	lea ecx,[esp+0x64]
	mov byte ptr [esp+0x7C],8
	call COutPacket::Encode4
	push 0
	lea ecx,[esp+0x64]
	call COutPacket::Encode4
	mov ecx,dword ptr [esi+0x34]
	push ecx
	lea ecx,[esp+0x64]
	call COutPacket::Encode4
	mov edx,dword ptr [esp+0x1C]
	push edx
	lea ecx,[esp+0x64]
	call COutPacket::Encode2
	push 0
	lea ecx,[esp+0x64]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x60]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x64]
	mov byte ptr [esp+0x78],bl
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0x78],0
	call ZRef<REACTOR>::~ZRef<REACTOR>
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	call ZArray<tagRECT>::RemoveAll
	mov eax,1
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
// CReactorPool::LoadReactorLayer
_SUB_EXCEPTION_HANDLER(2CE630)
__SUB_CLASS_THIS(002CE630, __thiscall, 68111,  CReactorPool, void, NakedParam<ZRef<REACTOR>>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2CE630
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
	mov eax,dword ptr [ebp+0xC]
	cmp dword ptr [eax+8],0
	mov dword ptr [ebp-4],0
	jne Block2

 Block1:
	mov esi,eax
	mov eax,dword ptr [eax+4]
	push eax
	call CReactorTemplate::GetReactorTemplate
	mov dword ptr [esi+8],eax
	mov eax,dword ptr [ebp+0xC]
	add esp,4

 Block2:
	mov ecx,dword ptr [eax+0x30]
	cmp ecx,1
	je Block36

 Block3:
	cmp ecx,4
	je Block36

 Block4:
	lea ecx,[ebp-0x14]
	push ecx
	mov ecx,dword ptr [eax+8]
	call CReactorTemplate::GetTemplateProp
	mov ecx,dword ptr [ebp-0x14]
	test ecx,ecx
	sete al
	mov byte ptr [ebp-4],9
	test al,al
	je Block8

 Block5:
	mov byte ptr [ebp-4],0
	test ecx,ecx
	je Block7

 Block6:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax

 Block7:
	lea ecx,[ebp+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ZRef<REACTOR>::~ZRef<REACTOR>
	jmp Block125

 Block8:
	mov eax,0x20
	call __chkstk
	mov ecx,dword ptr [ebp+0xC]
	mov ecx,dword ptr [ecx+0x10]
	mov eax,esp
	push 0xA
	push eax
	push ecx
	call __itow
	add esp,8
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0xA
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea edx,[ebp-0x3C]
	push edx
	mov byte ptr [ebp-4],9
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp-0x1C]
	push eax
	mov byte ptr [ebp-4],0xB
	call get_unknown
	add esp,8
	push eax
	lea ecx,[ebp-0x40]
	mov byte ptr [ebp-4],0xC
	call _x_com_ptr<IWzProperty>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],0xE
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0xF
	jne Block15

 Block13:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	push 0
	push 0xFF
	push 0
	push ecx
	mov dword ptr [ebp-0x18],esp
	mov eax,esp
	push 0
	mov dword ptr [eax],0
	mov edx,dword ptr [ebp+0xC]
	mov eax,dword ptr [edx+0x3C]
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x20],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block18:
	mov eax,dword ptr [ebp+0xC]
	mov ecx,dword ptr [eax+0x40]
	mov ebx,dword ptr [ebp-0x40]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x20],esp
	mov dword ptr [eax],ebx
	test ebx,ebx
	je Block20

 Block19:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+4]
	push ebx
	call eax

 Block20:
	lea ecx,[ebp-0x18]
	push ecx
	call CAnimationDisplayer::LoadLayer_0
	mov ecx,dword ptr [ebp+0xC]
	add esp,0x28
	push eax
	add ecx,0x38
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block22

 Block21:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block22:
	mov eax,dword ptr [ebp+0xC]
	mov ecx,dword ptr [eax+0x10]
	push ecx
	mov ecx,dword ptr [eax+8]
	lea edx,[ebp-0x24]
	push edx
	call CReactorTemplate::GetStateInfo
	mov eax,dword ptr [eax+4]
	mov esi,dword ptr [eax]
	lea ecx,[ebp-0x24]
	call ZRef<CReactorTemplate::STATEINFO>::~ZRef<CReactorTemplate::STATEINFO>
	push offset _D_VTMISSING
	test esi,esi
	je Block26

 Block23:
	lea ecx,[ebp-0x54]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x2C]
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [ebp+0xC]
	mov ecx,dword ptr [eax+0x38]
	mov byte ptr [ebp-4],0x11
	test ecx,ecx
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea edx,[ebp-0x54]
	push edx
	lea eax,[ebp-0x2C]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	lea ecx,[ebp-0x2C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x54]
	jmp Block29

 Block26:
	lea ecx,[ebp-0x2C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x54]
	mov byte ptr [ebp-4],0x12
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [ebp+0xC]
	mov ecx,dword ptr [ecx+0x38]
	mov byte ptr [ebp-4],0x13
	test ecx,ecx
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	lea edx,[ebp-0x2C]
	push edx
	lea eax,[ebp-0x54]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	lea ecx,[ebp-0x54]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x2C]

 Block29:
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebp+0xC]
	cmp dword ptr [eax+0x30],2
	jne Block32

 Block30:
	mov ecx,dword ptr [eax+8]
	cmp dword ptr [ecx+0x14],0
	je Block32

 Block31:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x54]
	call Ztl_variant_t::_ctor_1
	mov eax,dword ptr [ebp+0xC]
	lea ecx,[eax+0x3C]
	mov byte ptr [ebp-4],0x14
	mov edi,eax
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::GetcurrentTime
	mov esi,eax
	call get_update_time
	mov edx,dword ptr [edi+0x2C]
	sub edx,eax
	add esi,edx
	mov eax,3
	mov word ptr [ebp-0x2C],ax
	mov dword ptr [ebp-0x24],esi
	mov eax,dword ptr [ebp+0xC]
	lea ecx,[ebp-0x54]
	push ecx
	mov ecx,dword ptr [eax+0x18]
	lea edx,[ebp-0x2C]
	push edx
	mov edx,dword ptr [eax+0x14]
	push ecx
	push edx
	lea ecx,[eax+0x3C]
	mov byte ptr [ebp-4],0x15
	call _x_com_ptr<IWzVector2D>::op_arrow
	mov ecx,eax
	call IWzVector2D::RelMove
	lea ecx,[ebp-0x2C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x54]
	call Ztl_variant_t::~Ztl_variant_t

 Block32:
	mov byte ptr [ebp-4],9
	test ebx,ebx
	je Block34

 Block33:
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block34:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block108

 Block35:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block108

 Block36:
	mov ecx,dword ptr [eax+0xC]
	push ecx
	mov ecx,dword ptr [eax+8]
	lea edx,[ebp-0x44]
	push edx
	call CReactorTemplate::GetStateInfo
	mov eax,dword ptr [ebp+0xC]
	cmp dword ptr [eax+0x24],0xFFFFFFFE
	mov byte ptr [ebp-4],1
	jne Block57

 Block37:
	mov ebx,dword ptr [ebp-0x40]
	or edi,0xFFFFFFFF
	mov dword ptr [ebp-0x14],edi
	xor esi,esi
	nop

 Block38:
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block46

 Block39:
	cmp esi,dword ptr [eax-4]
	jae Block46

 Block40:
	mov edx,dword ptr [ebp+0xC]
	mov ecx,eax
	mov eax,dword ptr [ecx+esi*8+4]
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+0x34]
	push eax
	call get_hittype_priority_level
	add esp,8
	cmp eax,0xFFFFFFFF
	je Block44

 Block41:
	cmp eax,edi
	jl Block43

 Block42:
	cmp edi,0xFFFFFFFF
	jne Block44

 Block43:
	mov edi,eax
	mov dword ptr [ebp-0x14],esi

 Block44:
	test eax,eax
	je Block46

 Block45:
	inc esi
	jmp Block38

 Block46:
	cmp edi,0xFFFFFFFF
	jne Block56

 Block47:
	mov ecx,dword ptr [ebp+0xC]
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	mov dword ptr [ecx+0x30],0
	mov eax,dword ptr [ebp-0x40]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block52

 Block48:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block51

 Block49:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block51

 Block50:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block51:
	mov dword ptr [ebp-0x40],0

 Block52:
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block125

 Block53:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block125

 Block54:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block125

 Block55:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax
	jmp Block125

 Block56:
	mov ecx,dword ptr [ebp-0x14]
	mov edx,dword ptr [ebp+0xC]
	mov dword ptr [edx+0x24],ecx

 Block57:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x3C]
	push eax
	call edi
	lea ecx,[ebp-0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block59

 Block58:
	push eax
	call _com_issue_error

 Block59:
	lea edx,[ebp-0x2C]
	mov bl,2
	push edx
	mov byte ptr [ebp-4],bl
	call edi
	lea eax,[ebp-0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	mov ecx,dword ptr [ebp+0xC]
	mov ecx,dword ptr [ecx+0x38]
	mov byte ptr [ebp-4],3
	test ecx,ecx
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	lea edx,[ebp-0x3C]
	push edx
	lea eax,[ebp-0x2C]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x2C],si
	jne Block66

 Block64:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov byte ptr [ebp-4],1
	cmp word ptr [ebp-0x3C],si
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	mov eax,dword ptr [ebp+0xC]
	mov edx,dword ptr [eax+0x24]
	mov ecx,dword ptr [eax+0xC]
	push edx
	push ecx
	mov ecx,dword ptr [eax+8]
	lea edx,[ebp-0x1C]
	push edx
	call CReactorTemplate::GetHitProp
	mov eax,dword ptr [ebp-0x1C]
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block102

 Block72:
	push 0
	push 0xFF
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x20],esp
	push 0
	mov dword ptr [eax],0
	mov eax,dword ptr [ebp+0xC]
	mov eax,dword ptr [eax+0x3C]
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp-0x20],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block74

 Block73:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block74:
	mov eax,dword ptr [ebp+0xC]
	mov ecx,dword ptr [eax+0x40]
	mov edx,dword ptr [ebp-0x1C]
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [ebp-0x1C]
	mov dword ptr [ebp-0x20],esp
	test eax,eax
	je Block76

 Block75:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block76:
	lea eax,[ebp-0x18]
	push eax
	call CAnimationDisplayer::LoadLayer_0
	mov ecx,dword ptr [ebp+0xC]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ecx+0x38]
	add esp,0x28
	cmp esi,eax
	je Block81

 Block77:
	mov dword ptr [ecx+0x38],eax
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
	mov eax,dword ptr [ebp-0x18]
	test eax,eax
	je Block83

 Block82:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block83:
	lea ecx,[ebp-0x2C]
	push ecx
	call edi
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block85

 Block84:
	push eax
	call _com_issue_error

 Block85:
	lea eax,[ebp-0x3C]
	mov bl,5
	push eax
	mov byte ptr [ebp-4],bl
	call edi
	lea ecx,[ebp-0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block87

 Block86:
	push eax
	call _com_issue_error

 Block87:
	mov edx,dword ptr [ebp+0xC]
	mov ecx,dword ptr [edx+0x38]
	mov byte ptr [ebp-4],6
	test ecx,ecx
	jne Block89

 Block88:
	push 0x80004003
	call _com_issue_error

 Block89:
	lea eax,[ebp-0x2C]
	push eax
	lea edx,[ebp-0x3C]
	push edx
	push 0
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x3C],si
	jne Block92

 Block90:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp-0x2C],si
	jne Block96

 Block94:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block97:
	mov dword ptr [ebp-0x14],0
	lea ecx,[ebp-0x18]
	push 0x849
	mov bl,7
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,dword ptr [ebp+0xC]
	mov edx,dword ptr [ecx+0xC]
	mov ecx,dword ptr [ecx+8]
	mov eax,dword ptr [eax]
	push edx
	mov edx,dword ptr [ecx+0xC]
	push edx
	push eax
	lea eax,[ebp-0x14]
	push eax
	mov byte ptr [ebp-4],8
	call ZXString16::Format
	mov eax,dword ptr [ebp-0x18]
	add esp,0x10
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block99

 Block98:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block99:
	mov eax,dword ptr [ebp+0xC]
	mov ecx,dword ptr [eax+0x18]
	mov edx,dword ptr [eax+0x14]
	push ecx
	push edx
	call get_sound_volume_by_pos
	mov esi,dword ptr [ebp-0x14]
	push eax
	push 0x37
	push esi
	call play_reactor_sound
	add esp,0x14
	mov byte ptr [ebp-4],4
	test esi,esi
	je Block101

 Block100:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block101:
	mov eax,dword ptr [ebp-0x1C]

 Block102:
	mov byte ptr [ebp-4],1
	test eax,eax
	je Block104

 Block103:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block104:
	mov eax,dword ptr [ebp-0x40]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block108

 Block105:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block108

 Block106:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block108

 Block107:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block108:
	mov eax,dword ptr [ebp+0xC]
	mov ecx,dword ptr [eax+0x18]
	mov edx,dword ptr [eax+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	push edx
	call CWvsPhysicalSpace2D::GetFootholdClosest
	mov ecx,dword ptr [ebp+0xC]
	mov edx,dword ptr [ecx+8]
	mov edx,dword ptr [edx+0x18]
	sub edx,1
	mov esi,dword ptr [ecx+0x38]
	je Block116

 Block109:
	sub edx,1
	je Block113

 Block110:
	mov edx,dword ptr [eax+0x30]
	mov eax,dword ptr [eax+0x2C]
	test esi,esi
	jne Block112

 Block111:
	push 0x80004003
	call _com_issue_error

 Block112:
	mov ecx,dword ptr [esi]
	imul eax,0xBB8
	mov ecx,dword ptr [ecx+0xB4]
	sub eax,edx
	lea edx,[eax+eax*4]
	lea eax,[edx+edx-0x3FFF8ADA]
	push eax
	push esi
	call ecx
	jmp Block119

 Block113:
	test esi,esi
	jne Block115

 Block114:
	push 0x80004003
	call _com_issue_error

 Block115:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xB4]
	push 0xC0041F78
	push esi
	call eax
	jmp Block119

 Block116:
	mov eax,dword ptr [eax+0x2C]
	test esi,esi
	jne Block118

 Block117:
	push 0x80004003
	call _com_issue_error

 Block118:
	mov ecx,dword ptr [esi]
	imul eax,0x7530
	mov edx,dword ptr [ecx+0xB4]
	sub eax,0x3FFFF830
	push eax
	push esi
	call edx

 Block119:
	test eax,eax
	jge Block121

 Block120:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block121:
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block125

 Block122:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block125

 Block123:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block125

 Block124:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block125:
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
	ret 8
}
}
// CReactorPool::FindTouchReactorAroundLocalUser
_SUB_EXCEPTION_HANDLER(2CDED0)
__SUB_CLASS_THIS(002CDED0, __thiscall, 68115,  CReactorPool, void, ZMap<long,long,long>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2CDED0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x74
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x88]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [ecx+0x24]
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	xor ebx,ebx
	mov dword ptr [esp+0x20],eax
	mov dword ptr [esp+0x14],ecx
	cmp ecx,ebx
	je Block42

 Block1:
	mov ebp,dword ptr [esp+0x98]
	jmp Block3

 Block3:
	lea ecx,[esp+0x14]
	push ecx
	call ZList<ZRef<REACTOR>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x2C],esi
	cmp esi,ebx
	je Block5

 Block4:
	lea edx,[esi-0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov eax,dword ptr [esi+8]
	mov dword ptr [esp+0x90],ebx
	cmp dword ptr [eax+0x20],ebx
	je Block38

 Block6:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_SetRectEmpty]
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block43

 Block7:
	mov ecx,dword ptr [esi+0x38]
	mov byte ptr [esp+0x90],1
	cmp ecx,ebx
	je Block44

 Block8:
	lea edx,[esp+0x18]
	push edx
	call IWzGr2DLayer::Getlt
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x90],2
	cmp edi,ebx
	je Block44

 Block9:
	mov edx,dword ptr [esp+0x38]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x4C]
	push ebx
	push ebx
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x58]
	push ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x60]
	push ebx
	push ebx
	mov dword ptr [eax+0xC],edx
	push ebx
	lea eax,[esp+0x84]
	push eax
	mov eax,dword ptr [ecx+0x8C]
	lea edx,[esp+0x84]
	push edx
	push edi
	call eax
	cmp eax,ebx
	jge Block11

 Block10:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block11:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x90],1
	cmp eax,ebx
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x90],bl
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block43

 Block18:
	mov ecx,dword ptr [esi+0x38]
	mov byte ptr [esp+0x90],3
	cmp ecx,ebx
	je Block44

 Block19:
	lea edx,[esp+0x1C]
	push edx
	call IWzGr2DLayer::Getrb
	mov edi,dword ptr [eax]
	mov byte ptr [esp+0x90],4
	cmp edi,ebx
	je Block44

 Block20:
	mov edx,dword ptr [esp+0x48]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x5C]
	push ebx
	push ebx
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x68]
	push ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x70]
	push ebx
	push ebx
	mov dword ptr [eax+0xC],edx
	push ebx
	lea eax,[esp+0x8C]
	push eax
	mov eax,dword ptr [ecx+0x8C]
	lea edx,[esp+0x8C]
	push edx
	push edi
	call eax
	cmp eax,ebx
	jge Block22

 Block21:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block22:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x90],3
	cmp eax,ebx
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x90],bl
	jne Block27

 Block25:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebx
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	lea edx,[esp+0x58]
	push edx
	call IsRectEmpty
	test eax,eax
	je Block32

 Block29:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x94],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block41

 Block30:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block41

 Block31:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx
	jmp Block41

 Block32:
	mov ecx,dword ptr [esp+0x20]
	mov eax,dword ptr [ecx+4]
	mov eax,dword ptr [eax+0x10]
	add ecx,4
	lea edx,[esp+0x30]
	push edx
	call eax
	mov ecx,dword ptr [eax+4]
	mov edx,dword ptr [eax]
	push ecx
	push edx
	lea eax,[esp+0x60]
	push eax
	call PtInRect
	mov ecx,dword ptr [esi]
	push ebx
	lea edx,[esp+0x28]
	mov dword ptr [esp+0x28],ecx
	push edx
	mov ecx,ebp
	test eax,eax
	je Block35

 Block33:
	call ZMap<long, long, long>::GetAt
	test eax,eax
	jne Block38

 Block34:
	mov eax,dword ptr [esi]
	push ebx
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x2C],eax
	call ZMap<long, long, long>::Insert
	push 0xFA
	lea ecx,[esp+0x6C]
	mov dword ptr [eax+0xC],1
	call COutPacket::_ctor_1
	mov edx,dword ptr [esi]
	push edx
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0x94],5
	call COutPacket::Encode4
	push 1
	lea ecx,[esp+0x6C]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x68]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x6C]
	jmp Block37

 Block35:
	call ZMap<long, long, long>::GetAt
	test eax,eax
	je Block38

 Block36:
	mov eax,dword ptr [esi]
	lea ecx,[esp+0x24]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x28],eax
	call ZMap<long, long, long>::RemoveKey
	push 0xFA
	lea ecx,[esp+0x7C]
	call COutPacket::_ctor_1
	mov edx,dword ptr [esi]
	push edx
	lea ecx,[esp+0x7C]
	mov byte ptr [esp+0x94],6
	call COutPacket::Encode4
	push ebx
	lea ecx,[esp+0x7C]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x78]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x7C]

 Block37:
	mov byte ptr [esp+0x90],bl
	call ZArray<unsigned char>::RemoveAll

 Block38:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x94],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block41

 Block39:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block41

 Block40:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block41:
	mov dword ptr [esp+0x2C],ebx
	cmp dword ptr [esp+0x14],ebx
	jne Block3

 Block42:
	mov ecx,dword ptr [esp+0x88]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x80
	ret 4

 Block43:
	push eax
	call _com_issue_error

 Block44:
	push 0x80004003
	call _com_issue_error
}
}
// CReactorPool::OnReactorMove
_SUB_EXCEPTION_HANDLER(2CD110)
__SUB_CLASS_THIS(002CD110, __thiscall, 68113,  CReactorPool, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2CD110
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
	mov esi,ecx
	call get_update_time
	mov edi,dword ptr [esp+0x48]
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esp+0x14],0
	mov dword ptr [esp+0x48],eax
	lea eax,[esp+0x10]
	push eax
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x48],0
	call ZMap<long, ZRef<REACTOR>, long>::GetAt
	test eax,eax
	jne Block3

 Block1:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test eax,eax
	je Block21

 Block2:
	lea esi,[eax-0x10]
	jmp Block18

 Block3:
	mov esi,dword ptr [esp+0x14]
	mov ecx,edi
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [esi+0x14],ecx
	mov ecx,edi
	call CInPacket::Decode2
	mov edi,dword ptr [ZImports::_VariantInit]
	movsx edx,ax
	lea eax,[esp+0x28]
	push eax
	mov dword ptr [esi+0x18],edx
	call edi
	lea ecx,[esp+0x28]
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
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0x44],1
	call edi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	mov ecx,dword ptr [esi+0x3C]
	mov byte ptr [esp+0x40],2
	test ecx,ecx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea edx,[esp+0x28]
	push edx
	mov edx,dword ptr [esi+0x18]
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [esi+0x14]
	push edx
	push eax
	call IWzVector2D::RelMove
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0x40],1
	cmp word ptr [esp+0x18],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x18]
	push edx
	call ebp

 Block13:
	mov byte ptr [esp+0x40],0
	cmp word ptr [esp+0x28],di
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x28]
	push ecx
	call ebp

 Block17:
	mov dword ptr [esp+0x40],0xFFFFFFFF
	add esi,0xFFFFFFF0

 Block18:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block21

 Block19:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block21

 Block20:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block21:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x34
	ret 4
}
}
// REACTOR::~REACTOR
_SUB_EXCEPTION_HANDLER(2CE310)
__SUB_CLASS_THIS0(002CE310, __thiscall, 68412,  REACTOR, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2CE310
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
	mov eax,dword ptr [esi+0x44]
	mov dword ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0x3C]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov esi,dword ptr [esi+0x38]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block6

 Block5:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block6:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CReactorPool::OnReactorLeaveField
_SUB_EXCEPTION_HANDLER(2CCEA0)
__SUB_CLASS_THIS(002CCEA0, __thiscall, 68113,  CReactorPool, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2CCEA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x28
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0x4C]
	mov ecx,edi
	call CInPacket::Decode4
	xor ebx,ebx
	mov dword ptr [esp+0x4C],eax
	mov dword ptr [esp+0x18],ebx
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x50]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x4C],ebx
	call ZMap<long, ZRef<REACTOR>, long>::GetAt
	test eax,eax
	jne Block5

 Block1:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp eax,ebx
	je Block32

 Block2:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block32

 Block3:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block32

 Block4:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax
	jmp Block32

 Block5:
	call get_update_time
	mov esi,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi+0x10]
	mov dword ptr [esi+0xC],ecx
	mov ecx,edi
	mov ebp,eax
	call CInPacket::Decode1
	movzx edx,al
	mov ecx,edi
	mov dword ptr [esi+0x10],edx
	call CInPacket::Decode2
	cwde
	mov ecx,edi
	mov dword ptr [esi+0x14],eax
	call CInPacket::Decode2
	mov edi,dword ptr [ZImports::_VariantInit]
	movsx ecx,ax
	lea edx,[esp+0x2C]
	push edx
	mov dword ptr [esi+0x18],ecx
	call edi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	lea ecx,[esp+0x1C]
	push ecx
	mov byte ptr [esp+0x48],1
	call edi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ecx,dword ptr [esi+0x38]
	mov byte ptr [esp+0x44],2
	cmp ecx,ebx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[esp+0x2C]
	push eax
	lea edx,[esp+0x20]
	push edx
	push ebx
	call IWzGr2DLayer::Animate
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0x44],1
	cmp word ptr [esp+0x1C],di
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x1C]
	push ecx
	call ebx

 Block15:
	mov byte ptr [esp+0x44],0
	cmp word ptr [esp+0x2C],di
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[esp+0x2C]
	push eax
	call ebx

 Block19:
	mov dword ptr [esi+0x30],4
	mov ecx,dword ptr [esi+0x10]
	push ecx
	mov ecx,dword ptr [esi+8]
	lea edx,[esp+0x20]
	push edx
	call CReactorTemplate::GetStateInfo
	mov eax,dword ptr [eax+4]
	mov eax,dword ptr [eax+4]
	test eax,eax
	je Block22

 Block20:
	cmp dword ptr [eax-4],0
	je Block22

 Block21:
	xor eax,eax
	jmp Block24

 Block22:
	lea eax,[ebp+0x190]
	test eax,eax
	jne Block24

 Block23:
	mov eax,1

 Block24:
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	mov dword ptr [esi+0x28],eax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block29

 Block25:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call ebx
	test eax,eax
	jne Block28

 Block26:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block28

 Block27:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block28:
	mov dword ptr [esp+0x20],0

 Block29:
	mov dword ptr [esi+0x24],0xFFFFFFFE
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call ebx
	test eax,eax
	jne Block32

 Block30:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block32

 Block31:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block32:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x34
	ret 4
}
}
// CReactorPool::OnPacket
__SUB_CLASS_THIS(002CF9B0, __thiscall, 68112,  CReactorPool, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	add eax,0xFFFFFEB2
	cmp eax,3
	ja Block6

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block5
cmp EAX, 2
je Block3
cmp EAX, 3
je Block4


 Block2:
	mov eax,dword ptr [esp+8]
	push eax
	call CReactorPool::OnReactorChangeState
	ret 8

 Block3:
	mov edx,dword ptr [esp+8]
	push edx
	call CReactorPool::OnReactorEnterField
	ret 8

 Block4:
	mov eax,dword ptr [esp+8]
	push eax
	call CReactorPool::OnReactorLeaveField
	ret 8

 Block5:
	mov edx,dword ptr [esp+8]
	push edx
	call CReactorPool::OnReactorMove

 Block6:
	ret 8
}
}
// CReactorPool::RemoveReactor
_SUB_EXCEPTION_HANDLER(2CCCA0)
__SUB_CLASS_THIS(002CCCA0, __thiscall, 68111,  CReactorPool, void, NakedParam<ZRef<REACTOR>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2CCCA0
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
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [eax+0x48]
	push ecx
	lea ecx,[esi+0x18]
	mov dword ptr [esp+0x1C],0
	call ZList<ZRef<REACTOR>>::RemoveAt
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [edx]
	lea ecx,[esp+0xC]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x10],eax
	call ZMap<long, ZRef<REACTOR>, long>::RemoveKey
	mov edx,dword ptr [esp+0x24]
	mov ecx,dword ptr [edx+0x44]
	lea eax,[edx+0x44]
	test ecx,ecx
	je Block3

 Block1:
	cmp byte ptr [ecx],0
	je Block3

 Block2:
	push eax
	lea ecx,[esi+0x2C]
	call ZMap<ZXString<char>, ZRef<REACTOR>, ZXString<char>>::RemoveKey
	mov edx,dword ptr [esp+0x24]

 Block3:
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test edx,edx
	je Block7

 Block4:
	lea esi,[edx-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block7

 Block5:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block7

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block7:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 8
}
}
// CReactorPool::OnReactorEnterField
_SUB_EXCEPTION_HANDLER(2CF490)
__SUB_CLASS_THIS(002CF490, __thiscall, 68113,  CReactorPool, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2CF490
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
	mov dword ptr [esp+0x18],ecx
	call get_update_time
	xor ebx,ebx
	mov ebp,eax
	mov dword ptr [esp+0x28],ebx
	lea ecx,[esp+0x24]
	mov dword ptr [esp+0x54],ebx
	call ZRef<REACTOR>::_Alloc
	mov edi,dword ptr [esp+0x5C]
	mov ecx,edi
	call CInPacket::Decode4
	mov esi,dword ptr [esp+0x28]
	mov ecx,edi
	mov dword ptr [esi],eax
	call CInPacket::Decode4
	mov dword ptr [esi+4],eax
	mov ecx,edi
	mov dword ptr [esi+8],ebx
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [esi+0x10],eax
	mov ecx,edi
	mov dword ptr [esi+0xC],eax
	call CInPacket::Decode2
	cwde
	mov ecx,edi
	mov dword ptr [esi+0x14],eax
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [esi+0x18],ecx
	mov ecx,edi
	call CInPacket::Decode1
	movzx edx,al
	lea eax,[esp+0x5C]
	push eax
	mov ecx,edi
	mov dword ptr [esi+0x40],edx
	call CInPacket::DecodeStr
	push eax
	lea ecx,[esi+0x44]
	mov byte ptr [esp+0x58],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x54],bl
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov dword ptr [esi+0x30],ebx
	mov dword ptr [esp+0x14],ebx
	lea ecx,[esp+0x5C]
	push 0x3D2
	push ecx
	mov byte ptr [esp+0x5C],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea edx,[esp+0x18]
	push edx
	push eax
	mov byte ptr [esp+0x60],3
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x68]
	add esp,0xC
	mov byte ptr [esp+0x54],2
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov edi,dword ptr [esi+0x3C]
	mov eax,dword ptr [esp+0x14]
	cmp edi,eax
	je Block9

 Block5:
	mov dword ptr [esi+0x3C],eax
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block7:
	cmp edi,ebx
	je Block9

 Block8:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block9:
	sub esp,8
	mov eax,esp
	mov dword ptr [esi+0x28],ebx
	add ebp,0x320
	mov dword ptr [esi+0x2C],ebp
	mov dword ptr [eax+4],esi
	lea eax,[esi-0x10]
	mov dword ptr [esp+0x28],eax
	add eax,4
	mov dword ptr [esp+0x64],esp
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x20]
	call CReactorPool::LoadReactorLayer
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x3C]
	push edx
	call ebp
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0x58],4
	call ebp
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	mov ecx,dword ptr [esi+0x38]
	mov byte ptr [esp+0x54],5
	cmp ecx,ebx
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea eax,[esp+0x5C]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x54],6
	cmp ecx,ebx
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push ebx
	push ebx
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0x54],5
	cmp eax,ebx
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	mov edi,8
	mov byte ptr [esp+0x54],4
	cmp word ptr [esp+0x2C],di
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebx
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	mov byte ptr [esp+0x54],2
	cmp word ptr [esp+0x3C],di
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebx
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block27:
	lea ecx,[esp+0x2C]
	push ecx
	call ebp
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	mov edi,dword ptr [esi+0x3C]
	mov byte ptr [esp+0x54],7
	cmp edi,ebx
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x58]
	lea ecx,[esp+0x5C]
	push ecx
	push edi
	mov dword ptr [esp+0x64],ebx
	call edx
	cmp eax,ebx
	jge Block33

 Block32:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block33:
	mov eax,dword ptr [esp+0x5C]
	add eax,0x320
	mov ecx,3
	mov word ptr [esp+0x3C],cx
	mov dword ptr [esp+0x44],eax
	mov ecx,dword ptr [esi+0x38]
	mov byte ptr [esp+0x54],8
	cmp ecx,ebx
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	lea edx,[esp+0x1C]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x54],9
	cmp ecx,ebx
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea eax,[esp+0x2C]
	push eax
	lea edx,[esp+0x40]
	push edx
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x54],8
	cmp eax,ebx
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block39:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0x54],7
	jne Block46

 Block40:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebx
	je Block42

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block42:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block43:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x54],2
	jne Block47

 Block44:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,ebx
	je Block48

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block46:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x3C]
	push ecx
	call edi
	jmp Block43

 Block47:
	lea eax,[esp+0x2C]
	push eax
	call edi

 Block48:
	lea ecx,[esp+0x2C]
	push ecx
	call ebp
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0x58],0xA
	call ebp
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block52

 Block51:
	push eax
	call _com_issue_error

 Block52:
	mov ecx,dword ptr [esi+0x3C]
	mov byte ptr [esp+0x54],0xB
	cmp ecx,ebx
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	lea edx,[esp+0x2C]
	push edx
	mov edx,dword ptr [esi+0x18]
	lea eax,[esp+0x40]
	push eax
	mov eax,dword ptr [esi+0x14]
	push edx
	push eax
	call IWzVector2D::RelMove
	mov ebp,8
	mov byte ptr [esp+0x54],0xA
	cmp word ptr [esp+0x3C],bp
	jne Block57

 Block55:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebx
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea edx,[esp+0x3C]
	push edx
	call edi

 Block58:
	mov byte ptr [esp+0x54],2
	cmp word ptr [esp+0x2C],bp
	jne Block61

 Block59:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebx
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea ecx,[esp+0x2C]
	push ecx
	call edi

 Block62:
	mov edi,dword ptr [esp+0x20]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	sub esp,8
	mov eax,esp
	lea edx,[edi+4]
	mov dword ptr [esp+0x64],esp
	push edx
	mov dword ptr [eax+4],esi
	call ebp
	mov ecx,dword ptr [esp+0x20]
	call CReactorPool::AddReactor
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x54],bl
	cmp eax,ebx
	je Block64

 Block63:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block64:
	lea esi,[edi+4]
	push esi
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block67

 Block65:
	push esi
	call ebp
	cmp edi,ebx
	je Block67

 Block66:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block67:
	mov ecx,dword ptr [esp+0x4C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x44
	ret 4
}
}
// CReactorPool::GetStates
_SUB_EXCEPTION_HANDLER(2CDDB0)
__SUB_CLASS_THIS(002CDDB0, __thiscall, 68118,  CReactorPool, int32_t, NakedParam<ZXString<char>>, long*, long*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2CDDB0
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
	xor ebx,ebx
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x14],ebx
	lea eax,[esp+0x10]
	push eax
	lea edx,[esp+0x2C]
	push edx
	add ecx,0x2C
	mov byte ptr [esp+0x28],1
	call ZMap<ZXString<char>, ZRef<REACTOR>, ZXString<char>>::GetAt
	test eax,eax
	mov eax,dword ptr [esp+0x14]
	je Block9

 Block1:
	cmp eax,ebx
	je Block9

 Block2:
	mov ecx,dword ptr [esp+0x2C]
	cmp ecx,ebx
	je Block4

 Block3:
	mov edx,dword ptr [eax+0x10]
	mov dword ptr [ecx],edx

 Block4:
	mov ecx,dword ptr [esp+0x30]
	cmp ecx,ebx
	je Block6

 Block5:
	mov eax,dword ptr [eax+0x30]
	mov dword ptr [ecx],eax

 Block6:
	lea ecx,[esp+0x10]
	mov byte ptr [esp+0x20],bl
	call ZRef<REACTOR>::~ZRef<REACTOR>
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,1
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 0xC

 Block9:
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block13

 Block10:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block13

 Block12:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block13:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	xor eax,eax
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 0xC
}
}
// CReactorPool::~CReactorPool
_SUB_EXCEPTION_HANDLER(5D3B90)
__SUB_CLASS_THIS0(005D3B90, __thiscall, 68107,  CReactorPool, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_5D3B90
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
	lea ecx,[esi+0x2C]
	mov dword ptr [esp+0x14],2
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, ZRef<REACTOR>, ZXString<char>>::`vftable'
	call ZMap<ZXString<char>, ZRef<REACTOR>, ZXString<char>>::RemoveAll
	lea ecx,[esi+0x18]
	mov byte ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<REACTOR>>::`vftable'
	call ZList<ZRef<REACTOR>>::RemoveAll
	mov ecx,esi
	mov byte ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [esi],offset ZMap<long, ZRef<REACTOR>, long>::`vftable'
	call ZMap<long, ZRef<REACTOR>, long>::RemoveAll
	mov dword ptr [TSingleton<CReactorPool>::ms_pInstance],0
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CReactorPool::OnReactorChangeState
_SUB_EXCEPTION_HANDLER(2CCD60)
__SUB_CLASS_THIS(002CCD60, __thiscall, 68113,  CReactorPool, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2CCD60
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
	call get_update_time
	mov edi,dword ptr [esp+0x28]
	mov ecx,edi
	mov ebx,eax
	call CInPacket::Decode4
	mov dword ptr [esp+0x14],0
	mov dword ptr [esp+0x28],eax
	lea eax,[esp+0x10]
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x28],0
	call ZMap<long, ZRef<REACTOR>, long>::GetAt
	test eax,eax
	jne Block3

 Block1:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test eax,eax
	je Block10

 Block2:
	lea esi,[eax-0x10]
	jmp Block7

 Block3:
	mov esi,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi+0x10]
	mov dword ptr [esi+0xC],ecx
	mov ecx,edi
	call CInPacket::Decode1
	movzx edx,al
	mov ecx,edi
	mov dword ptr [esi+0x10],edx
	call CInPacket::Decode2
	cwde
	mov ecx,edi
	mov dword ptr [esi+0x14],eax
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [esi+0x18],ecx
	mov ecx,edi
	call CInPacket::Decode2
	cmp dword ptr [esi+0x30],0
	movzx eax,ax
	jne Block6

 Block4:
	add eax,ebx
	mov ecx,1
	mov dword ptr [esi+0x30],ecx
	mov dword ptr [esi+0x28],eax
	test eax,eax
	jne Block6

 Block5:
	mov dword ptr [esi+0x28],ecx

 Block6:
	mov ecx,edi
	call CInPacket::Decode1
	movsx edx,al
	mov ecx,edi
	mov dword ptr [esi+0x24],edx
	call CInPacket::Decode1
	movsx eax,al
	imul eax,0x64
	add eax,ebx
	mov dword ptr [esi+0x2C],eax
	mov dword ptr [esp+0x20],0xFFFFFFFF
	add esi,0xFFFFFFF0

 Block7:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block8:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block10

 Block9:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block10:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4
}
}
// CReactorPool::AddReactor
_SUB_EXCEPTION_HANDLER(2CF250)
__SUB_CLASS_THIS(002CF250, __thiscall, 68111,  CReactorPool, void, NakedParam<ZRef<REACTOR>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2CF250
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
	mov edi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x48],ebx
	mov dword ptr [esp+0x1C],ebx
	mov eax,dword ptr [esp+0x54]
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x18]
	mov dword ptr [esp+0x18],ecx
	push eax
	mov ecx,edi
	mov byte ptr [esp+0x50],1
	call ZMap<long, ZRef<REACTOR>, long>::GetAt
	mov ebp,dword ptr [esp+0x1C]
	test eax,eax
	je Block18

 Block1:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x30]
	push ecx
	call esi
	lea edx,[esp+0x30]
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
	lea eax,[esp+0x20]
	mov bl,2
	push eax
	mov byte ptr [esp+0x4C],bl
	call esi
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
	mov ecx,dword ptr [ebp+0x38]
	mov byte ptr [esp+0x48],3
	test ecx,ecx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x24]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x48],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x20],si
	jne Block10

 Block8:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block11

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block11

 Block10:
	lea edx,[esp+0x20]
	push edx
	call ebx

 Block11:
	mov byte ptr [esp+0x48],1
	cmp word ptr [esp+0x30],si
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x30]
	push ecx
	call ebx

 Block15:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [eax+4],ebp
	test ebp,ebp
	je Block17

 Block16:
	lea edx,[ebp-0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block17:
	mov ecx,edi
	call CReactorPool::RemoveReactor

 Block18:
	lea ecx,[edi+0x18]
	call ZList<ZRef<REACTOR>>::AddTail_
	mov esi,eax
	lea eax,[esp+0x50]
	push eax
	mov ecx,esi
	call ZRef<REACTOR>::op_assign_copy
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr [ecx+0x48],esi
	mov edx,dword ptr [esp+0x54]
	mov eax,dword ptr [edx]
	lea ecx,[esp+0x50]
	push ecx
	lea edx,[esp+0x18]
	push edx
	mov ecx,edi
	mov dword ptr [esp+0x1C],eax
	call ZMap<long, ZRef<REACTOR>, long>::Insert
	mov eax,dword ptr [esp+0x54]
	mov ecx,dword ptr [eax+0x44]
	add eax,0x44
	test ecx,ecx
	je Block21

 Block19:
	cmp byte ptr [ecx],0
	je Block21

 Block20:
	lea ecx,[esp+0x50]
	push ecx
	push eax
	lea ecx,[edi+0x2C]
	call ZMap<ZXString<char>, ZRef<REACTOR>, ZXString<char>>::Insert

 Block21:
	mov ebx,dword ptr [ZImports::_InterlockedDecrement]
	mov byte ptr [esp+0x48],0
	test ebp,ebp
	je Block25

 Block22:
	lea esi,[ebp-0x10]
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block25

 Block23:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block25

 Block24:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block25:
	mov esi,dword ptr [esp+0x54]
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test esi,esi
	je Block29

 Block26:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebx
	test eax,eax
	jne Block29

 Block27:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block29

 Block28:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block29:
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
// CReactorPool::CReactorPool
__SUB_CLASS_THIS0(005D3B30, __thiscall, 68105,  CReactorPool, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push edi
	mov dword ptr [TSingleton<CReactorPool>::ms_pInstance],esi
	xor edi,edi
	push 0x64
	int 3// TODO: 	mov dword ptr [esi],offset ZMap<long, ZRef<REACTOR>, long>::`vftable'
	mov dword ptr [esi+4],edi
	mov dword ptr [esi+8],0x1F
	mov dword ptr [esi+0xC],edi
	call ZMap<long, ZRef<REACTOR>, long>::_CalcAutoGrow
	lea ecx,[esi+0x2C]
	int 3// TODO: 	mov dword ptr [esi+0x18],offset ZList<ZRef<REACTOR>>::`vftable'
	mov dword ptr [esi+0x20],edi
	mov dword ptr [esi+0x24],edi
	mov dword ptr [esi+0x28],edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<ZXString<char>, ZRef<REACTOR>, ZXString<char>>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<ZXString<char>, ZRef<REACTOR>, ZXString<char>>::_CalcAutoGrow
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
