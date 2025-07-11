#include "regen.hpp"
// EmployeePool.ipp
#include "EmployeePool.hpp"

// CEmployeePool::OnEmployeeEnterField
__SUB_CLASS_THIS(00118F70, __thiscall, 67791,  CEmployeePool, void, CInPacket&) {
__asm {

 Block0:
	sub esp,0xC
	push ebx
	push ebp
	push edi
	mov edi,dword ptr [esp+0x1C]
	mov ebx,ecx
	mov ecx,edi
	call CInPacket::Decode4
	mov ebp,eax
	lea eax,[esp+0xC]
	push eax
	lea edx,[esp+0x20]
	lea ecx,[ebx+4]
	push edx
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x24],ebp
	mov dword ptr [esp+0x1C],ecx
	call ZMap<unsigned long, __POSITION *, unsigned long>::GetAt
	test eax,eax
	je Block3

 Block1:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block3

 Block2:
	or byte ptr [eax+0x18],1
	pop edi
	pop ebp
	pop ebx
	add esp,0xC
	ret 4

 Block3:
	push esi
	lea ecx,[ebx+0x1C]
	call ZList<EMPLOYEEENTRY>::AddTail_
	mov ecx,edi
	mov esi,eax
	call CInPacket::Decode4
	push eax
	call CEmployeeTemplate::GetEmployeeTemplate
	push eax
	push ebp
	call CreateEmployee
	add esp,0xC
	push eax
	lea ecx,[esi+0xC]
	call ZRef<CEmployee>::op_assign_ptr
	lea eax,[esi+0x14]
	mov byte ptr [esi+0x18],1
	mov ecx,dword ptr [ebx+0x2C]
	push eax
	lea edx,[esp+0x18]
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x1C]
	push edx
	call ZMap<unsigned long, __POSITION *, unsigned long>::Insert
	mov ecx,dword ptr [esi+0x10]
	push edi
	call CEmployee::Init
	mov ecx,dword ptr [esi+0x10]
	push edi
	call CEmployee::SetBalloon
	pop esi
	pop edi
	pop ebp
	pop ebx
	add esp,0xC
	ret 4
}
}
// CEmployeePool::CEmployeePool
__SUB_CLASS_THIS0(00118C30, __thiscall, 67784,  CEmployeePool, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push edi
	lea ecx,[esi+4]
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset IGObj::`vftable'
	cmp ecx,edi
	je Block2

 Block1:
	lea eax,[ecx-4]
	mov dword ptr [TSingleton<CEmployeePool>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CEmployeePool>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CEmployeePool::`vftable'
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, __POSITION *, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, __POSITION *, unsigned long>::_CalcAutoGrow
	mov dword ptr [esi+0x24],edi
	mov dword ptr [esi+0x28],edi
	mov dword ptr [esi+0x2C],edi
	pop edi
	int 3// TODO: 	mov dword ptr [esi+0x1C],offset ZList<EMPLOYEEENTRY>::`vftable'
	mov eax,esi
	pop esi
	ret
}
}
// CEmployeePool::OnPacket
__SUB_CLASS_THIS(00119020, __thiscall, 67787,  CEmployeePool, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x13F
	je Block5

 Block1:
	sub eax,1
	je Block4

 Block2:
	sub eax,1
	jne Block6

 Block3:
	mov eax,dword ptr [esp+8]
	push eax
	call CEmployeePool::OnEmployeeMiniRoomBalloon
	ret 8

 Block4:
	mov edx,dword ptr [esp+8]
	push edx
	call CEmployeePool::OnEmployeeLeaveField
	ret 8

 Block5:
	mov eax,dword ptr [esp+8]
	push eax
	call CEmployeePool::OnEmployeeEnterField

 Block6:
	ret 8
}
}
// CEmployeePool::FindBalloon
__SUB_CLASS_THIS(00118820, __thiscall, 67790,  CEmployeePool, CEmployee*, const tagPOINT&) {
__asm {

 Block0:
	sub esp,0x14
	mov ecx,dword ptr [ecx+0x28]
	push esi
	push edi
	mov dword ptr [esp+8],ecx
	test ecx,ecx
	je Block5

 Block1:
	mov edi,dword ptr [esp+0x20]

 Block2:
	lea eax,[esp+8]
	push eax
	call ZList<EMPLOYEEENTRY>::GetNext
	mov esi,eax
	mov eax,dword ptr [esi+0x10]
	add esp,4
	cmp dword ptr [eax+0x90],0
	je Block4

 Block3:
	lea ecx,[esp+0xC]
	push ecx
	lea ecx,[eax+0x14]
	call CChatBalloon::GetMiniRoomBalloonRect
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edi]
	push edx
	push eax
	lea ecx,[esp+0x14]
	push ecx
	call PtInRect
	test eax,eax
	jne Block6

 Block4:
	cmp dword ptr [esp+8],0
	jne Block2

 Block5:
	pop edi
	xor eax,eax
	pop esi
	add esp,0x14
	ret 4

 Block6:
	mov eax,dword ptr [esi+0x10]
	pop edi
	pop esi
	add esp,0x14
	ret 4
}
}
// CEmployeePool::OnEmployeeLeaveField
__SUB_CLASS_THIS(00118D10, __thiscall, 67791,  CEmployeePool, void, CInPacket&) {
__asm {

 Block0:
	sub esp,8
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x10]
	push edi
	call CInPacket::Decode4
	mov dword ptr [esp+0xC],eax
	mov dword ptr [esp+0x14],eax
	lea eax,[esp+8]
	push eax
	lea ecx,[esp+0x18]
	lea edi,[esi+4]
	push ecx
	mov ecx,edi
	call ZMap<unsigned long, __POSITION *, unsigned long>::GetAt
	test eax,eax
	je Block4

 Block1:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block4

 Block2:
	and byte ptr [eax+0x18],0xFE
	jne Block4

 Block3:
	mov edx,dword ptr [eax+0x14]
	push edx
	lea ecx,[esi+0x1C]
	call ZList<EMPLOYEEENTRY>::RemoveAt
	lea eax,[esp+0xC]
	push eax
	mov ecx,edi
	call ZMap<unsigned long, __POSITION *, unsigned long>::RemoveKey

 Block4:
	pop edi
	pop esi
	add esp,8
	ret 4
}
}
// CEmployeePool::~CEmployeePool
_SUB_EXCEPTION_HANDLER(118C90)
__SUB_CLASS_THIS0(00118C90, __thiscall, 67786,  CEmployeePool, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_118C90
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
	int 3// TODO: 	mov dword ptr [esi],offset CEmployeePool::`vftable'
	lea ecx,[esi+0x1C]
	mov dword ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<EMPLOYEEENTRY>::`vftable'
	call ZList<EMPLOYEEENTRY>::RemoveAll
	lea ecx,[esi+4]
	mov byte ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, __POSITION *, unsigned long>::`vftable'
	call ZMap<unsigned long, __POSITION *, unsigned long>::RemoveAll
	mov dword ptr [TSingleton<CEmployeePool>::ms_pInstance],0
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// EMPLOYEEENTRY::~EMPLOYEEENTRY
_SUB_EXCEPTION_HANDLER(118BC0)
__SUB_CLASS_THIS0(00118BC0, __thiscall, 67856,  EMPLOYEEENTRY, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_118BC0
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
	mov edi,ecx
	mov dword ptr [esp+0xC],edi
	cmp dword ptr [edi+0x10],0
	lea esi,[edi+0xC]
	mov dword ptr [esp+0x18],0
	je Block2

 Block1:
	push 0
	mov ecx,esi
	call ZRef<CEmployee>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block2:
	int 3// TODO: 	mov dword ptr [edi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CEmployeePool::Update
__SUB_CLASS_THIS0(001187A0, __thiscall, 67786,  CEmployeePool, void) {
__asm {

 Block0:
	push ecx
	mov ecx,dword ptr [ecx+0x28]
	mov dword ptr [esp],ecx
	test ecx,ecx
	je Block4

 Block1:
	jmp Block3

 Block3:
	lea eax,[esp]
	push eax
	call ZList<EMPLOYEEENTRY>::GetNext
	mov eax,dword ptr [eax+0x10]
	mov edx,dword ptr [eax]
	mov ecx,eax
	mov eax,dword ptr [edx]
	add esp,4
	call eax
	cmp dword ptr [esp],0
	jne Block3

 Block4:
	pop ecx
	ret
}
}
// CEmployeePool::OnEmployeeMiniRoomBalloon
__SUB_CLASS_THIS(001187D0, __thiscall, 67791,  CEmployeePool, void, CInPacket&) {
__asm {

 Block0:
	push ecx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esp+0x10],eax
	lea eax,[esp+8]
	push eax
	lea ecx,[esp+0x14]
	push ecx
	lea ecx,[esi+4]
	call ZMap<unsigned long, __POSITION *, unsigned long>::GetAt
	test eax,eax
	je Block3

 Block1:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax+0x10]
	push edi
	call CEmployee::SetBalloon

 Block3:
	pop edi
	pop esi
	pop ecx
	ret 4
}
}
