#include "regen.hpp"
// Field_EscortResult.ipp
#include "Field_EscortResult.hpp"

// CField_EscortResult::GetFieldType
__SUB_CLASS_THIS0(001510C0, __thiscall, 143740,  CField_EscortResult, long) {
__asm {

 Block0:
	mov eax,0x1F
	ret
}
}
// CField_EscortResult::Init
__SUB_CLASS_THIS(00151120, __thiscall, 143741,  CField_EscortResult, void, void*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push eax
	call CField::Init
	push 1
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0xC],esp
	push 0x1767
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::SendRequestSessionValue
	ret 4
}
}
// CField_EscortResult::CField_EscortResult
__SUB_CLASS_THIS0(00151090, __thiscall, 143737,  CField_EscortResult, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CField_EscortResult::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_EscortResult::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_EscortResult::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_EscortResult::`vftable'{for `ZRefCounted'}
	mov eax,esi
	pop esi
	ret
}
}
// CField_EscortResult::OnSessionValue
_SUB_EXCEPTION_HANDLER(151160)
__SUB_CLASS_THIS(00151160, __thiscall, 143742,  CField_EscortResult, void, NakedParam<ZXString<char>>, NakedParam<ZXString<char>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_151160
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
	mov edi,ecx
	lea eax,[esp+0xC]
	push 0x1767
	push eax
	mov dword ptr [esp+0x24],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea ecx,[esp+0x28]
	call ZXString<char>::op_eq_0
	mov esi,eax
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	test esi,esi
	je Block5

 Block3:
	push offset _S_FAIL
	lea ecx,[esp+0x2C]
	call ZXString<char>::Compare
	test eax,eax
	jne Block5

 Block4:
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x14],esp
	push 0x14ED
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,edi
	call CField::ShowScreenEffect

 Block5:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 8
}
}
// CField_EscortResult::~CField_EscortResult
__SUB_CLASS_THIS0(001510D0, __thiscall, 143739,  CField_EscortResult, void) {
__asm {

 Block0:
	int 3// TODO: 	mov dword ptr [ecx],offset CField_EscortResult::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [ecx+4],offset CField_EscortResult::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [ecx+8],offset CField_EscortResult::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [ecx+0xC],offset CField_EscortResult::`vftable'{for `ZRefCounted'}
	jmp  CField::~CField
}
}
