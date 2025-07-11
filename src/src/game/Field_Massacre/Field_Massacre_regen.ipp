#include "regen.hpp"
// Field_Massacre.ipp
#include "Field_Massacre.hpp"

// CField_Massacre::CField_Massacre
_SUB_EXCEPTION_HANDLER(156490)
__SUB_CLASS_THIS0(00156490, __thiscall, 143502,  CField_Massacre, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_156490
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
	xor edi,edi
	int 3// TODO: 	mov dword ptr [esi],offset CField_Massacre::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_Massacre::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_Massacre::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_Massacre::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esi+0xDA4],edi
	mov dword ptr [esi+0xDAC],edi
	mov dword ptr [esi+0xDB0],edi
	mov dword ptr [esi+0xDB4],edi
	mov dword ptr [esi+0xDB8],edi
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push offset _x_com_ptr<IWzGr2DLayer>::_ctor_default
	push 3
	push 4
	lea eax,[esi+0xDBC]
	push eax
	mov byte ptr [esp+0x2C],5
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xDC8],0xFFFFFFFF
	mov dword ptr [esi+0xDCC],edi
	mov dword ptr [esi+0xDD0],edi
	mov dword ptr [esi+0xDD4],edi
	mov dword ptr [esi+0xDD8],edi
	mov dword ptr [esi+0xDDC],edi
	mov dword ptr [esi+0xDE0],edi
	mov dword ptr [esi+0xDE4],edi
	mov dword ptr [esi+0xDE8],edi
	mov dword ptr [esi+0xDF0],edi
	mov dword ptr [esi+0xDF4],edi
	mov dword ptr [esi+0xDF8],edi
	mov dword ptr [esi+0xDFC],edi
	mov dword ptr [esi+0xE00],edi
	mov dword ptr [esi+0xE04],edi
	mov dword ptr [esi+0xE08],edi
	mov dword ptr [esi+0xE0C],edi
	mov dword ptr [esi+0xE14],edi
	mov dword ptr [esi+0xE18],edi
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
// CField_Massacre::OnClock
_SUB_EXCEPTION_HANDLER(156AF0)
__SUB_CLASS_THIS(00156AF0, __thiscall, 143508,  CField_Massacre, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_156AF0
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
	mov edi,dword ptr [esp+0x1C]
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,2
	jne Block7

 Block1:
	mov ecx,dword ptr [esi+0x208]
	test ecx,ecx
	je Block3

 Block2:
	call CWnd::Destroy

 Block3:
	mov ecx,edi
	call CInPacket::Decode4
	push 0xE4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esi+0xE08],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block5

 Block4:
	mov ecx,eax
	call CTimerboard_Massacre::_ctor_default
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	push eax
	lea ecx,[esi+0xE10]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call ZRef<CTimerboard_Massacre>::op_assign_ptr
	mov eax,dword ptr [eax+4]
	push eax
	lea ecx,[esi+0x204]
	call ZRef<CClock>::op_assign_ptr
	mov ecx,dword ptr [esi+0xE14]
	push 1
	push 1
	push 0
	push 1
	push 0xC006153B
	push 0x3D
	push 0x102
	push 5
	push 0xFFFFFFA0
	call CWnd::CreateWnd
	mov ecx,dword ptr [esi+0xE08]
	push ecx
	mov ecx,dword ptr [esi+0xE14]
	call CClock::SetTimer
	mov ecx,dword ptr [esi+0xE14]
	call CClock::Start

 Block7:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 4
}
}
// CTimerboard_Massacre::CTimerboard_Massacre
__SUB_CLASS_THIS0(001569E0, __thiscall, 143591,  CTimerboard_Massacre, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CWnd::_ctor_default
	xor eax,eax
	mov dword ptr [esi+0x88],eax
	mov dword ptr [esi+0x98],eax
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [esi+0xD8],eax
	int 3// TODO: 	mov dword ptr [esi],offset CTimerboard_Massacre::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CTimerboard_Massacre::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CTimerboard_Massacre::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xDC],eax
	mov dword ptr [esi+0xE0],eax
	mov eax,esi
	pop esi
	ret
}
}
// CField_Massacre::_SetMassacreInfo
__SUB_CLASS_THIS(00155F90, __thiscall, 143513,  CField_Massacre, int32_t, const CWvsContext::Massacre&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov edx,dword ptr [edi]
	xor eax,eax
	cmp dword ptr [ecx+0xDF0],edx
	je Block2

 Block1:
	mov dword ptr [ecx+0xDF0],edx
	mov eax,1

 Block2:
	mov edx,dword ptr [edi+4]
	cmp dword ptr [ecx+0xDF4],edx
	je Block4

 Block3:
	mov dword ptr [ecx+0xDF4],edx
	mov eax,1

 Block4:
	mov edx,dword ptr [edi+8]
	cmp dword ptr [ecx+0xDF8],edx
	je Block6

 Block5:
	mov dword ptr [ecx+0xDF8],edx
	mov eax,1

 Block6:
	mov esi,dword ptr [ecx+0xDFC]
	mov edx,dword ptr [edi+0xC]
	cmp esi,edx
	je Block16

 Block7:
	cmp dword ptr [ecx+0xDE8],0
	jne Block15

 Block8:
	test esi,esi
	jne Block11

 Block9:
	test edx,edx
	jle Block12

 Block10:
	mov dword ptr [ecx+0xDC8],esi
	mov eax,dword ptr [edi+0xC]
	mov dword ptr [ecx+0xDFC],eax
	pop edi
	lea eax,[esi+1]
	pop esi
	ret 4

 Block11:
	test edx,edx

 Block12:
	jne Block15

 Block13:
	test esi,esi
	jle Block15

 Block14:
	mov dword ptr [ecx+0xDC8],2

 Block15:
	mov eax,dword ptr [edi+0xC]
	mov dword ptr [ecx+0xDFC],eax
	mov eax,1

 Block16:
	pop edi
	pop esi
	ret 4
}
}
// CField_MassacreResult::CField_MassacreResult
__SUB_CLASS_THIS0(001567F0, __thiscall, 143573,  CField_MassacreResult, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::_ctor_default
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CField_MassacreResult::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_MassacreResult::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_MassacreResult::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_MassacreResult::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xDA4],eax
	mov dword ptr [esi+0xDAC],eax
	mov eax,esi
	pop esi
	ret
}
}
// CField_Massacre::OnMassacreIncGauge
__SUB_CLASS_THIS(00156200, __thiscall, 143508,  CField_Massacre, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esp+8]
	call CInPacket::Decode4
	mov dword ptr [esi+0xE0C],eax
	pop esi
	ret 4
}
}
// CField_Massacre::_SetDecGauge
__SUB_CLASS_THIS(00156040, __thiscall, 143514,  CField_Massacre, void, long) {
__asm {

 Block0:
	push ebx
	push esi
	xor eax,eax
	push edi
	mov edi,dword ptr [esp+0x10]
	test edi,edi
	setle al
	mov esi,ecx
	mov ecx,dword ptr [esi+0xE00]
	dec eax
	and eax,edi
	cmp eax,ecx
	jl Block2

 Block1:
	mov eax,ecx

 Block2:
	imul eax,0x103
	cdq
	idiv ecx
	mov ebx,eax
	mov eax,edi
	imul eax,0x64
	cdq
	idiv ecx
	xor ecx,ecx
	cmp eax,0x41
	mov eax,dword ptr [esi+0xDD0]
	setge cl
	mov edi,ecx
	test eax,eax
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x6C]
	mov ecx,0x8C
	sub ecx,ebx
	push ecx
	push eax
	call edx
	mov eax,dword ptr [esi+0xDD0]
	test eax,eax
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0xBC]
	push ebx
	push eax
	call edx
	mov eax,dword ptr [esi+0xDD8]
	test eax,eax
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x11C]
	push edi
	push eax
	call edx
	mov eax,dword ptr [esi+0xDE0]
	test eax,eax
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x11C]
	push edi
	push eax
	call edx
	mov eax,dword ptr [esi+0xDDC]
	test eax,eax
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x11C]
	push edi
	push eax
	call edx
	mov eax,dword ptr [esi+0xDE4]
	test eax,eax
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x11C]
	push edi
	push eax
	call edx
	mov eax,dword ptr [esi+0xDD4]
	test eax,eax
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov ecx,dword ptr [eax]
	xor edx,edx
	test edi,edi
	sete dl
	push edx
	push eax
	mov eax,dword ptr [ecx+0x11C]
	call eax
	mov esi,dword ptr [esi+0xDE4]
	test esi,esi
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x6C]
	mov edx,0x82
	sub edx,ebx
	push edx
	push esi
	call eax
	pop edi
	pop esi
	pop ebx
	ret 4
}
}
// CField_MassacreResult::~CField_MassacreResult
_SUB_EXCEPTION_HANDLER(156850)
__SUB_CLASS_THIS0(00156850, __thiscall, 143575,  CField_MassacreResult, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_156850
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x10],esi
	int 3// TODO: 	mov dword ptr [esi],offset CField_MassacreResult::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_MassacreResult::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_MassacreResult::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_MassacreResult::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xDAC]
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0x1C],1
	test eax,eax
	je Block5

 Block1:
	add eax,4
	push eax
	call ebp
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0xDAC]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [esi+0xDAC]
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+0xDAC],0

 Block5:
	mov eax,dword ptr [esi+0xDA4]
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block10

 Block6:
	add eax,4
	push eax
	call ebp
	test eax,eax
	jne Block9

 Block7:
	mov eax,dword ptr [esi+0xDA4]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [esi+0xDA4]
	test ecx,ecx
	je Block9

 Block8:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block9:
	mov dword ptr [esi+0xDA4],0

 Block10:
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CField::~CField
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x10
	ret
}
}
// CField_Massacre::GetFieldType
__SUB_CLASS_THIS0(001565B0, __thiscall, 143505,  CField_Massacre, long) {
__asm {

 Block0:
	mov eax,0x17
	ret
}
}
// CField_Massacre::~CField_Massacre
_SUB_EXCEPTION_HANDLER(1565E0)
__SUB_CLASS_THIS0(001565E0, __thiscall, 143504,  CField_Massacre, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1565E0
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
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	int 3// TODO: 	mov dword ptr [esi],offset CField_Massacre::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_Massacre::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_Massacre::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_Massacre::`vftable'{for `ZRefCounted'}
	lea edi,[esi+0xE10]
	xor ebx,ebx
	mov dword ptr [esp+0x20],0xD
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CTimerboard_Massacre>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	mov eax,dword ptr [esi+0xDE4]
	mov byte ptr [esp+0x20],0xC
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xDE0]
	mov byte ptr [esp+0x20],0xB
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [esi+0xDDC]
	mov byte ptr [esp+0x20],0xA
	cmp eax,ebx
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esi+0xDD8]
	mov byte ptr [esp+0x20],9
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [esi+0xDD4]
	mov byte ptr [esp+0x20],8
	cmp eax,ebx
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov eax,dword ptr [esi+0xDD0]
	mov byte ptr [esp+0x20],7
	cmp eax,ebx
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov eax,dword ptr [esi+0xDCC]
	mov byte ptr [esp+0x20],6
	cmp eax,ebx
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	push offset _x_com_ptr<IWzGr2DLayer>::~_x_com_ptr<IWzGr2DLayer>
	push 3
	push 4
	lea eax,[esi+0xDBC]
	push eax
	mov byte ptr [esp+0x30],5
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0xDB8]
	mov byte ptr [esp+0x20],4
	cmp eax,ebx
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov eax,dword ptr [esi+0xDB4]
	mov byte ptr [esp+0x20],3
	cmp eax,ebx
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	mov eax,dword ptr [esi+0xDB0]
	mov byte ptr [esp+0x20],2
	cmp eax,ebx
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block22:
	mov eax,dword ptr [esi+0xDAC]
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x20],1
	cmp eax,ebx
	je Block27

 Block23:
	add eax,4
	push eax
	call ebp
	test eax,eax
	jne Block26

 Block24:
	mov eax,dword ptr [esi+0xDAC]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [esi+0xDAC]
	cmp ecx,ebx
	je Block26

 Block25:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block26:
	mov dword ptr [esi+0xDAC],ebx

 Block27:
	mov eax,dword ptr [esi+0xDA4]
	mov byte ptr [esp+0x20],bl
	cmp eax,ebx
	je Block32

 Block28:
	add eax,4
	push eax
	call ebp
	test eax,eax
	jne Block31

 Block29:
	mov eax,dword ptr [esi+0xDA4]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [esi+0xDA4]
	cmp ecx,ebx
	je Block31

 Block30:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block31:
	mov dword ptr [esi+0xDA4],ebx

 Block32:
	mov ecx,esi
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call CField::~CField
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret
}
}
// CField_Massacre::Init
_SUB_EXCEPTION_HANDLER(1579D0)
__SUB_CLASS_THIS(001579D0, __thiscall, 143506,  CField_Massacre, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1579D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x98
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xAC]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	mov dword ptr [esp+0x30],ebp
	mov eax,dword ptr [esp+0xBC]
	xor ebx,ebx
	push eax
	xor edi,edi
	mov dword ptr [esp+0x18],ebx
	call CField::Init
	push edi
	push edi
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_MOBMASSACRE
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x30]
	mov dword ptr [esp+0xC0],edi
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x78]
	push edx
	mov dword ptr [esp+0xC4],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [esp+0xBC],1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x68]
	mov dword ptr [esp+0x68],edi
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
	cmp word ptr [esp+0x6C],8
	mov byte ptr [esp+0xB4],3
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	cmp eax,edi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	push edi
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_DISABLESKILL
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [esp+0x6C]
	mov byte ptr [esp+0xBC],4
	cmp esi,edi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea edx,[esp+0x28]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xC0],3
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],5
	call get_int32
	add esp,8
	neg eax
	sbb eax,eax
	neg eax
	cmp word ptr [esp+0x20],8
	mov dword ptr [ebp+0xDE8],eax
	mov byte ptr [esp+0xB4],3
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	push edi
	push edi
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push offset _S_GAUGE
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x98]
	mov byte ptr [esp+0xC0],6
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xC4],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xBC],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x6C]
	mov dword ptr [esp+0x6C],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block18

 Block16:
	cmp eax,0x80004002
	je Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	cmp word ptr [esp+0x8C],8
	mov byte ptr [esp+0xB4],9
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x8C],ax
	mov eax,dword ptr [esp+0x94]
	cmp eax,edi
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x8C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	push edi
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_TOTAL
	call _xbstr_t::_ctor_1
	mov esi,dword ptr [esp+0x70]
	mov byte ptr [esp+0xBC],0xA
	cmp esi,edi
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	lea edx,[esp+0x28]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xC0],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0xB
	call get_int32
	add esp,8
	cmp word ptr [esp+0x20],8
	mov dword ptr [ebp+0xE00],eax
	mov byte ptr [esp+0xB4],9
	jne Block27

 Block25:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	je Block28

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block28

 Block27:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block28:
	push edi
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	push offset _S_DECREASE
	call _xbstr_t::_ctor_1
	lea edx,[esp+0x28]
	mov byte ptr [esp+0xBC],0xC
	push edx
	mov ecx,esi
	mov byte ptr [esp+0xC0],9
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xBC],0xD
	call get_int32
	add esp,8
	cmp word ptr [esp+0x20],8
	mov dword ptr [ebp+0xE04],eax
	mov byte ptr [esp+0xB4],9
	jne Block31

 Block29:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	push 0x48
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x18],esi
	mov ebp,dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0xB4],0xE
	cmp esi,edi
	je Block43

 Block33:
	lea edx,[esp+0x54]
	push edx
	call ebp
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	lea ecx,[esp+0x44]
	push ecx
	mov byte ptr [esp+0xB8],0xF
	mov dword ptr [esp+0x18],1
	call ebp
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	push 0xC
	push 5
	push edi
	push edi
	lea eax,[esp+0x64]
	push eax
	lea ecx,[esp+0x58]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push 0x1513
	push edx
	mov dword ptr [esp+0xD8],0x10
	mov dword ptr [esp+0x38],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov dword ptr [esp+0xD0],0x11
	cmp dword ptr [_D_G_RM],edi
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea eax,[esp+0x3C]
	mov byte ptr [esp+0xD0],0x10
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ebx,7
	mov ecx,eax
	mov dword ptr [esp+0xC4],0x12
	mov dword ptr [esp+0x24],ebx
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push eax
	mov dword ptr [ecx],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block42

 Block40:
	cmp eax,0x80004002
	je Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	mov ecx,esi
	call CBitmapNumber::_ctor_0
	mov edi,eax

 Block43:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esp+0xB4],0x15
	test edi,edi
	je Block45

 Block44:
	lea ecx,[edi+4]
	push ecx
	call ebp

 Block45:
	mov eax,dword ptr [esp+0x30]
	mov esi,dword ptr [eax+0xDA4]
	mov dword ptr [eax+0xDA4],edi
	test esi,esi
	je Block48

 Block46:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block48

 Block47:
	push edi
	call ebp
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block48:
	mov dword ptr [esp+0xB4],0x14
	test bl,4
	je Block53

 Block49:
	and ebx,0xFFFFFFFB
	cmp word ptr [esp+0x20],8
	mov dword ptr [esp+0x14],ebx
	jne Block52

 Block50:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block53:
	mov dword ptr [esp+0xB4],0x13
	test bl,2
	je Block58

 Block54:
	and ebx,0xFFFFFFFD
	cmp word ptr [esp+0x44],8
	mov dword ptr [esp+0x14],ebx
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[esp+0x44]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov dword ptr [esp+0xB4],9
	test bl,1
	je Block63

 Block59:
	and ebx,0xFFFFFFFE
	cmp word ptr [esp+0x54],8
	mov dword ptr [esp+0x14],ebx
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov edi,dword ptr [esp+0x30]
	cmp dword ptr [edi+0xDE8],0
	jne Block91

 Block64:
	push 0x48
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x18],esi
	mov ebp,dword ptr [ZImports::_VariantInit]
	mov byte ptr [esp+0xB4],0x16
	test esi,esi
	je Block75

 Block65:
	lea ecx,[esp+0x44]
	push ecx
	call ebp
	lea edx,[esp+0x44]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	lea eax,[esp+0x54]
	or ebx,8
	push eax
	mov byte ptr [esp+0xB8],0x17
	mov dword ptr [esp+0x18],ebx
	call ebp
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block69

 Block68:
	push eax
	call _com_issue_error

 Block69:
	push 0x11
	push 1
	push 0
	push 0
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x68]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x1514
	or ebx,0x10
	push ecx
	mov dword ptr [esp+0xD8],0x18
	mov dword ptr [esp+0x38],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov dword ptr [esp+0xD0],0x19
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	lea edx,[esp+0x3C]
	mov byte ptr [esp+0xD0],0x18
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	or ebx,0x20
	mov ecx,eax
	mov dword ptr [esp+0xC4],0x1A
	mov dword ptr [esp+0x24],ebx
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block74

 Block72:
	cmp eax,0x80004002
	je Block74

 Block73:
	push eax
	call _com_issue_error

 Block74:
	mov ecx,esi
	call CBitmapNumber::_ctor_0
	jmp Block76

 Block75:
	xor eax,eax

 Block76:
	push eax
	lea ecx,[edi+0xDA8]
	mov dword ptr [esp+0xB8],0x1D
	call ZRef<CBitmapNumber>::op_assign_ptr
	mov dword ptr [esp+0xB4],0x1C
	mov esi,8
	test bl,0x20
	je Block81

 Block77:
	and ebx,0xFFFFFFDF
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x20],si
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov dword ptr [esp+0xB4],0x1B
	test bl,0x10
	je Block86

 Block82:
	and ebx,0xFFFFFFEF
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x54],si
	jne Block85

 Block83:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	test eax,eax
	je Block86

 Block84:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block86

 Block85:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block86:
	mov dword ptr [esp+0xB4],9
	test bl,8
	je Block92

 Block87:
	and ebx,0xFFFFFFF7
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x44],si
	jne Block90

 Block88:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block92

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block90:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]
	jmp Block92

 Block91:
	mov ebp,dword ptr [ZImports::_VariantInit]

 Block92:
	mov eax,dword ptr [esp+0x30]
	cmp dword ptr [eax+0xDE8],0
	mov edi,0x22
	lea esi,[edi+1]
	je Block100

 Block93:
	lea ecx,[esp+0x20]
	push ecx
	call ebp
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block95

 Block94:
	push eax
	call _com_issue_error

 Block95:
	lea eax,[esp+0x34]
	or ebx,0x40
	push eax
	mov byte ptr [esp+0xB8],0x1E
	mov dword ptr [esp+0x18],ebx
	call ebp
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block97

 Block96:
	push eax
	call _com_issue_error

 Block97:
	push 0
	push 0
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x40]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x150E
	or ebx,0x80
	push ecx
	mov dword ptr [esp+0xD0],0x1F
	mov dword ptr [esp+0x30],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov dword ptr [esp+0xC8],0x20
	jne Block99

 Block98:
	push 0x80004003
	call _com_issue_error

 Block99:
	lea edx,[esp+0xB0]
	mov byte ptr [esp+0xC8],0x1F
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov dword ptr [esp+0xBC],0x21
	or ebx,0x100
	jmp Block107

 Block100:
	lea eax,[esp+0x44]
	push eax
	call ebp
	lea ecx,[esp+0x44]
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
	lea edx,[esp+0x54]
	or ebx,0x200
	push edx
	mov dword ptr [esp+0xB8],edi
	mov dword ptr [esp+0x18],ebx
	call ebp
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block104

 Block103:
	push eax
	call _com_issue_error

 Block104:
	push 0
	push 0
	lea ecx,[esp+0x4C]
	push ecx
	lea edx,[esp+0x60]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	push 0x150F
	or ebx,0x400
	push eax
	mov dword ptr [esp+0xD0],esi
	mov dword ptr [esp+0x30],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov dword ptr [esp+0xC8],0x24
	jne Block106

 Block105:
	push 0x80004003
	call _com_issue_error

 Block106:
	lea ecx,[esp+0x90]
	push ecx
	mov byte ptr [esp+0xCC],0x23
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov dword ptr [esp+0xBC],0x25
	or ebx,0x800

 Block107:
	mov ecx,eax
	mov dword ptr [esp+0x1C],ebx
	call Ztl_variant_t::GetUnknown
	mov ebp,dword ptr [esp+0x30]
	add ebp,0xDB0
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block110

 Block108:
	cmp eax,0x80004002
	je Block110

 Block109:
	push eax
	call _com_issue_error

 Block110:
	mov dword ptr [esp+0xB4],esi
	test ebx,0x800
	je Block115

 Block111:
	and ebx,0xFFFFF7FF
	cmp word ptr [esp+0x7C],8
	mov dword ptr [esp+0x14],ebx
	jne Block114

 Block112:
	mov eax,dword ptr [esp+0x84]
	xor edx,edx
	mov word ptr [esp+0x7C],dx
	test eax,eax
	je Block115

 Block113:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block114:
	lea eax,[esp+0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block115:
	mov dword ptr [esp+0xB4],edi
	mov edi,8
	test ebx,0x400
	je Block119

 Block116:
	and ebx,0xFFFFFBFF
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x54],di
	jne Block124

 Block117:
	mov eax,dword ptr [esp+0x5C]
	xor ecx,ecx
	mov word ptr [esp+0x54],cx
	test eax,eax
	je Block119

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block119:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block120:
	mov dword ptr [esp+0xB4],0x21
	test ebx,0x200
	je Block126

 Block121:
	and ebx,0xFFFFFDFF
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x44],di
	jne Block125

 Block122:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	test eax,eax
	je Block126

 Block123:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block126

 Block124:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x54]
	push edx
	call esi
	jmp Block120

 Block125:
	lea ecx,[esp+0x44]
	push ecx
	call esi

 Block126:
	mov dword ptr [esp+0xB4],0x1F
	test ebx,0x100
	je Block131

 Block127:
	and ebx,0xFFFFFEFF
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x9C],di
	jne Block130

 Block128:
	mov eax,dword ptr [esp+0xA4]
	xor edx,edx
	mov word ptr [esp+0x9C],dx
	test eax,eax
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea eax,[esp+0x9C]
	push eax
	call esi

 Block131:
	mov dword ptr [esp+0xB4],0x1E
	test bl,bl
	jns Block136

 Block132:
	and ebx,0xFFFFFF7F
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x34],di
	jne Block135

 Block133:
	mov eax,dword ptr [esp+0x3C]
	xor ecx,ecx
	mov word ptr [esp+0x34],cx
	test eax,eax
	je Block136

 Block134:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block136

 Block135:
	lea edx,[esp+0x34]
	push edx
	call esi

 Block136:
	mov dword ptr [esp+0xB4],9
	test bl,0x40
	je Block141

 Block137:
	cmp word ptr [esp+0x20],di
	jne Block140

 Block138:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea ecx,[esp+0x20]
	push ecx
	call esi

 Block141:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x34]
	push edx
	call esi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block143

 Block142:
	push eax
	call _com_issue_error

 Block143:
	lea ecx,[esp+0x20]
	mov bl,0x26
	push ecx
	mov byte ptr [esp+0xB8],bl
	call esi
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block145

 Block144:
	push eax
	call _com_issue_error

 Block145:
	mov esi,dword ptr [ebp]
	mov byte ptr [esp+0xB4],0x27
	test esi,esi
	jne Block147

 Block146:
	push 0x80004003
	call _com_issue_error

 Block147:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],0
	call edx
	test eax,eax
	jge Block149

 Block148:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block149:
	mov esi,dword ptr [ebp]
	mov edi,dword ptr [esp+0x14]
	test esi,esi
	jne Block151

 Block150:
	push 0x80004003
	call _com_issue_error

 Block151:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x1C]
	push ecx
	push esi
	mov dword ptr [esp+0x24],0
	call edx
	test eax,eax
	jge Block153

 Block152:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block153:
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block155

 Block154:
	push 0x80004003
	call _com_issue_error

 Block155:
	lea eax,[esp+0x34]
	push eax
	mov eax,dword ptr [esp+0x20]
	lea edx,[esp+0x24]
	push edx
	push 0xC006153B
	push edi
	push eax
	push 0x15
	push 1
	lea edx,[esp+0x34]
	push edx
	call IWzGr2D::CreateLayer
	mov edi,dword ptr [esp+0x30]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xDB8]
	cmp esi,eax
	je Block160

 Block156:
	mov dword ptr [edi+0xDB8],eax
	test eax,eax
	je Block158

 Block157:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block158:
	test esi,esi
	je Block160

 Block159:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block160:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block162

 Block161:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block162:
	mov ebp,8
	mov byte ptr [esp+0xB4],bl
	cmp word ptr [esp+0x20],bp
	jne Block165

 Block163:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block166

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block166

 Block165:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block166:
	mov byte ptr [esp+0xB4],9
	cmp word ptr [esp+0x34],bp
	jne Block169

 Block167:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block170

 Block168:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block170

 Block169:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block170:
	cmp dword ptr [edi+0xDB8],0
	je Block188

 Block171:
	mov esi,dword ptr [edi+0xDB8]
	test esi,esi
	jne Block173

 Block172:
	push 0x80004003
	call _com_issue_error

 Block173:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block175

 Block174:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block175:
	push 0
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov bl,0x28
	mov edx,0xD
	mov byte ptr [esp+0xB4],bl
	mov word ptr [esp+0x44],dx
	mov dword ptr [esp+0x4C],eax
	test eax,eax
	je Block177

 Block176:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block177:
	mov esi,dword ptr [edi+0xDB8]
	mov byte ptr [esp+0xB4],0x29
	test esi,esi
	jne Block179

 Block178:
	push 0x80004003
	call _com_issue_error

 Block179:
	mov edx,dword ptr [esp+0x44]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x58]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x5C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x60]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block181

 Block180:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block181:
	mov byte ptr [esp+0xB4],bl
	cmp word ptr [esp+0x44],bp
	jne Block184

 Block182:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block185

 Block183:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block185

 Block184:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block185:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0xB4],9
	test eax,eax
	je Block187

 Block186:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block187:
	mov ecx,edi
	call CField_Massacre::_UpdatePoint

 Block188:
	push 0
	push 0xFF
	push 0xC006153B
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],0
	push 0x40
	push 0xFFFFFF6B
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 1
	push eax
	mov byte ptr [esp+0xD8],0x2A
	call CWndMan::GetOrgWindow
	lea ecx,[esp+0x38]
	push 0x1515
	push ecx
	mov byte ptr [esp+0xD8],0x2B
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xD0],0x2C
	push 0
	push eax
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0xDC],0x2D
	call CAnimationDisplayer::LoadSingleLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xDCC]
	add esp,0x28
	cmp esi,eax
	je Block193

 Block189:
	mov dword ptr [edi+0xDCC],eax
	test eax,eax
	je Block191

 Block190:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block191:
	test esi,esi
	je Block193

 Block192:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block193:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block195

 Block194:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block195:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB4],9
	test eax,eax
	je Block197

 Block196:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block197:
	push 0
	push 0xFF
	push 0xC006153B
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],0
	push 0x40
	push 0xFFFFFF6B
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 1
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov byte ptr [esp+0xD8],0x2E
	call CWndMan::GetOrgWindow
	lea edx,[esp+0x38]
	push 0x1516
	push edx
	mov byte ptr [esp+0xD8],0x2F
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xD0],0x30
	push 0
	push eax
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0xDC],0x31
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xDD8]
	add esp,0x28
	cmp esi,eax
	je Block202

 Block198:
	mov dword ptr [edi+0xDD8],eax
	test eax,eax
	je Block200

 Block199:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block200:
	test esi,esi
	je Block202

 Block201:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block202:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block204

 Block203:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block204:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB4],9
	test eax,eax
	je Block206

 Block205:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block206:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x34]
	push ecx
	call ebp
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block208

 Block207:
	push eax
	call _com_issue_error

 Block208:
	lea eax,[esp+0x20]
	mov bl,0x32
	push eax
	mov byte ptr [esp+0xB8],bl
	call ebp
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block210

 Block209:
	push eax
	call _com_issue_error

 Block210:
	mov ecx,dword ptr [edi+0xDD8]
	mov byte ptr [esp+0xB4],0x33
	test ecx,ecx
	jne Block212

 Block211:
	push 0x80004003
	call _com_issue_error

 Block212:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x24]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0xB4],bl
	cmp word ptr [esp+0x20],si
	jne Block215

 Block213:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block216

 Block214:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block216

 Block215:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block216:
	mov byte ptr [esp+0xB4],9
	cmp word ptr [esp+0x34],si
	jne Block219

 Block217:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block220

 Block218:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block220

 Block219:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block220:
	push 0
	push 0xFF
	push 0xC006153B
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],0
	push 0x47
	push 0x8C
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 1
	push edx
	mov byte ptr [esp+0xD8],0x34
	call CWndMan::GetOrgWindow
	lea eax,[esp+0x38]
	push 0x1519
	push eax
	mov byte ptr [esp+0xD8],0x35
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xD0],0x36
	push 0
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0xDC],0x37
	call CAnimationDisplayer::LoadSingleLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xDD0]
	add esp,0x28
	cmp esi,eax
	je Block225

 Block221:
	mov dword ptr [edi+0xDD0],eax
	test eax,eax
	je Block223

 Block222:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block223:
	test esi,esi
	je Block225

 Block224:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block225:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block227

 Block226:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block227:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB4],9
	test eax,eax
	je Block229

 Block228:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block229:
	push 0
	push 0xFF
	push 0xC006153B
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],0
	push 0x40
	push 0xFFFFFF6B
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 1
	push eax
	mov byte ptr [esp+0xD8],0x38
	call CWndMan::GetOrgWindow
	lea ecx,[esp+0x38]
	push 0x151A
	push ecx
	mov byte ptr [esp+0xD8],0x39
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xD0],0x3A
	push 0
	push eax
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0xDC],0x3B
	call CAnimationDisplayer::LoadSingleLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xDD4]
	add esp,0x28
	cmp esi,eax
	je Block234

 Block230:
	mov dword ptr [edi+0xDD4],eax
	test eax,eax
	je Block232

 Block231:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block232:
	test esi,esi
	je Block234

 Block233:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block234:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block236

 Block235:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block236:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB4],9
	test eax,eax
	je Block238

 Block237:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block238:
	push 0
	push 0xFF
	push 0xC006153B
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],0
	push 0x40
	push 0xFFFFFF6B
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push 1
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov byte ptr [esp+0xD8],0x3C
	call CWndMan::GetOrgWindow
	lea edx,[esp+0x38]
	push 0x151B
	push edx
	mov byte ptr [esp+0xD8],0x3D
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xD0],0x3E
	push 0
	push eax
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0xDC],0x3F
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xDE0]
	add esp,0x28
	cmp esi,eax
	je Block243

 Block239:
	mov dword ptr [edi+0xDE0],eax
	test eax,eax
	je Block241

 Block240:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block241:
	test esi,esi
	je Block243

 Block242:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block243:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block245

 Block244:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block245:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB4],9
	test eax,eax
	je Block247

 Block246:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block247:
	lea ecx,[esp+0x34]
	push ecx
	call ebp
	lea edx,[esp+0x34]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block249

 Block248:
	push eax
	call _com_issue_error

 Block249:
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0xB8],0x40
	call ebp
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block251

 Block250:
	push eax
	call _com_issue_error

 Block251:
	mov ecx,dword ptr [edi+0xDE0]
	mov byte ptr [esp+0xB4],0x41
	test ecx,ecx
	jne Block253

 Block252:
	push 0x80004003
	call _com_issue_error

 Block253:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x24]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0xB4],0x40
	cmp word ptr [esp+0x20],si
	jne Block256

 Block254:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block257

 Block255:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block257

 Block256:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block257:
	mov byte ptr [esp+0xB4],9
	cmp word ptr [esp+0x34],si
	jne Block260

 Block258:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block261

 Block259:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block261

 Block260:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block261:
	push 0
	push 0xFF
	push 0xC006153B
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],0
	push 0x3F
	push 0xFFFFFF4E
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 1
	push edx
	mov byte ptr [esp+0xD8],0x42
	call CWndMan::GetOrgWindow
	lea eax,[esp+0x38]
	push 0x1518
	push eax
	mov byte ptr [esp+0xD8],0x43
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xD0],0x44
	push 0
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0xDC],0x45
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xDDC]
	add esp,0x28
	cmp esi,eax
	je Block266

 Block262:
	mov dword ptr [edi+0xDDC],eax
	test eax,eax
	je Block264

 Block263:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block264:
	test esi,esi
	je Block266

 Block265:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block266:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block268

 Block267:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block268:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB4],9
	test eax,eax
	je Block270

 Block269:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block270:
	lea eax,[esp+0x34]
	push eax
	call ebp
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block272

 Block271:
	push eax
	call _com_issue_error

 Block272:
	lea edx,[esp+0x20]
	mov bl,0x46
	push edx
	mov byte ptr [esp+0xB8],bl
	call ebp
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block274

 Block273:
	push eax
	call _com_issue_error

 Block274:
	mov ecx,dword ptr [edi+0xDDC]
	mov byte ptr [esp+0xB4],0x47
	test ecx,ecx
	jne Block276

 Block275:
	push 0x80004003
	call _com_issue_error

 Block276:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x24]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0xB4],bl
	cmp word ptr [esp+0x20],si
	jne Block279

 Block277:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block280

 Block278:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block280

 Block279:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block280:
	mov byte ptr [esp+0xB4],9
	cmp word ptr [esp+0x34],si
	jne Block283

 Block281:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block284

 Block282:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block284

 Block283:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block284:
	push 0
	push 0xFF
	push 0xC006153B
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	mov dword ptr [eax],0
	push 0x55
	push 0xFFFFFF6B
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov edx,esp
	mov dword ptr [esp+0x30],esp
	push 1
	push edx
	mov byte ptr [esp+0xD8],0x48
	call CWndMan::GetOrgWindow
	lea eax,[esp+0x38]
	push 0x1517
	push eax
	mov byte ptr [esp+0xD8],0x49
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xD0],0x4A
	push 0
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0xDC],0x4B
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xDE4]
	add esp,0x28
	cmp esi,eax
	je Block289

 Block285:
	mov dword ptr [edi+0xDE4],eax
	test eax,eax
	je Block287

 Block286:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block287:
	test esi,esi
	je Block289

 Block288:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block289:
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block291

 Block290:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block291:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB4],9
	test eax,eax
	je Block293

 Block292:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block293:
	lea eax,[esp+0x34]
	push eax
	call ebp
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block295

 Block294:
	push eax
	call _com_issue_error

 Block295:
	lea edx,[esp+0x20]
	mov bl,0x4C
	push edx
	mov byte ptr [esp+0xB8],bl
	call ebp
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block297

 Block296:
	push eax
	call _com_issue_error

 Block297:
	mov ecx,dword ptr [edi+0xDE4]
	mov byte ptr [esp+0xB4],0x4D
	test ecx,ecx
	jne Block299

 Block298:
	push 0x80004003
	call _com_issue_error

 Block299:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x24]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0xB4],bl
	cmp word ptr [esp+0x20],si
	jne Block302

 Block300:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block303

 Block301:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block303

 Block302:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block303:
	mov byte ptr [esp+0xB4],9
	cmp word ptr [esp+0x34],si
	jne Block306

 Block304:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block307

 Block305:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block307

 Block306:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block307:
	push 0
	mov ecx,edi
	call CField_Massacre::_SetDecGauge
	mov eax,dword ptr [esp+0x68]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0xB8],3
	call eax
	mov eax,dword ptr [esp+0x64]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [esp+0xB8],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0xAC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA4
	ret 4
}
}
// CTimerboard_Massacre::Draw
_SUB_EXCEPTION_HANDLER(157100)
__SUB_CLASS_THIS(00157100, __thiscall, 143595,  CTimerboard_Massacre, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_157100
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
	mov ebp,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	lea eax,[esp+0x20]
	push eax
	mov dword ptr [esp+0x40],ebx
	call CWnd::GetCanvas
	mov esi,dword ptr [esp+0x20]
	mov byte ptr [esp+0x3C],1
	cmp esi,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],ebx
	call eax
	cmp eax,ebx
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	mov edi,dword ptr [esp+0x18]
	lea edx,[esp+0x1C]
	push edx
	push esi
	mov dword ptr [esp+0x24],ebx
	call eax
	cmp eax,ebx
	jge Block6

 Block5:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push edi
	push edx
	push ebx
	push ebx
	push esi
	call eax
	cmp eax,ebx
	jge Block8

 Block7:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov ecx,3
	mov word ptr [esp+0x24],cx
	mov ecx,0xFF
	mov dword ptr [esp+0x2C],ecx
	mov edx,dword ptr [ebp+0xDC]
	mov ebx,dword ptr [esp+0x24]
	mov edi,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x38]
	push edx
	mov edx,dword ptr [edi+0x80]
	push 0
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x48]
	push 0
	push esi
	mov byte ptr [esp+0x5C],2
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block10

 Block9:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],1
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
	mov eax,dword ptr [ebp+0x94]
	xor ecx,ecx
	test eax,eax
	jle Block16

 Block15:
	mov ecx,eax

 Block16:
	mov eax,0x88888889
	imul ecx
	mov eax,dword ptr [ebp+0xE0]
	add edx,ecx
	sar edx,5
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	mov edx,edi
	shl edx,4
	sub edx,edi
	add edx,edx
	add edx,edx
	sub ecx,edx
	push 5
	push ecx
	mov ebx,ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block18:
	push edi
	lea eax,[esp+0x20]
	push offset _S_02D
	push eax
	mov byte ptr [esp+0x50],3
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push 0xD
	push 0x14
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x30],esp
	push esi
	call edx
	mov byte ptr [esp+0x54],1
	call draw_text_by_image
	mov eax,dword ptr [ebp+0xE0]
	add esp,0x18
	push 5
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block20:
	push ebx
	lea eax,[esp+0x20]
	push offset _S_02D
	push eax
	mov byte ptr [esp+0x50],4
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push 0xD
	push 0x69
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x30],esp
	push esi
	call edx
	mov byte ptr [esp+0x54],1
	call draw_text_by_image
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	add esp,0x18
	push esi
	mov byte ptr [esp+0x40],0
	call ecx
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
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
// CTimerboard_Massacre::GetFontTime
_SUB_EXCEPTION_HANDLER(157810)
__SUB_CLASS_THIS0(00157810, __thiscall, 143597,  CTimerboard_Massacre, _x_com_ptr<IWzProperty>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_157810
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebx
	push ebp
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	lea eax,[esp+0x24]
	mov dword ptr [esp+0x10],0
	mov esi,dword ptr [ZImports::_VariantInit]
	push eax
	call esi
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x14]
	push edx
	mov dword ptr [esp+0x50],0
	call esi
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push 0
	push 0
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x20]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x14EF
	mov bl,1
	push eax
	mov byte ptr [esp+0x68],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x60],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x64],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x54],3
	call Ztl_variant_t::GetUnknown
	mov esi,dword ptr [esp+0x54]
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x4C],bl
	mov ebx,8
	cmp word ptr [esp+0x34],bx
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x34]
	push eax
	call ebp

 Block13:
	mov byte ptr [esp+0x4C],0
	cmp word ptr [esp+0x14],bx
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x14]
	push edx
	call ebp

 Block17:
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	cmp word ptr [esp+0x24],bx
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x24]
	push ecx
	call ebp

 Block21:
	mov eax,esi
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 4
}
}
// CField_MassacreResult::GetFieldType
__SUB_CLASS_THIS0(00156830, __thiscall, 143576,  CField_MassacreResult, long) {
__asm {

 Block0:
	mov eax,0x18
	ret
}
}
// CTimerboard_Massacre::LoadClockCanvas
_SUB_EXCEPTION_HANDLER(157390)
__SUB_CLASS_THIS(00157390, __thiscall, 143598,  CTimerboard_Massacre, void, ZArray<_x_com_ptr<IWzCanvas> >&, NakedParam<_x_com_ptr<IWzProperty>>) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_157390
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
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
	xor ebx,ebx
	mov dword ptr [ebp-4],ebx
	cmp eax,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x14]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x20]
	mov dword ptr [ebp-0x14],ebx
	call eax
	cmp eax,ebx
	jge Block4

 Block3:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov edx,dword ptr [ebp-0x14]
	lea ecx,[ebp-0x15]
	push ecx
	mov ecx,dword ptr [ebp+8]
	push edx
	call ZArray<_x_com_ptr<IWzCanvas>>::_Alloc

 Block5:
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
	mov dword ptr [ebp-0x1C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0xC]
	mov byte ptr [ebp-4],1
	test ecx,ecx
	je Block1

 Block6:
	lea eax,[ebp-0x2C]
	push eax
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov ecx,dword ptr [ebp+8]
	mov edx,dword ptr [ecx]
	mov ecx,eax
	mov byte ptr [ebp-4],2
	lea esi,[edx+ebx*4]
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block14

 Block7:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x14]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov edi,eax
	mov eax,dword ptr [esi]
	test edi,edi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x14]
	mov dword ptr [ebp-0x1C],ecx
	test eax,eax
	je Block9

 Block8:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block9:
	mov ecx,dword ptr [ebp-0x1C]
	mov dword ptr [esi],ecx
	test edi,edi
	jge Block11

 Block10:
	cmp edi,0x80004002
	jne Block21

 Block11:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0
	jne Block16

 Block12:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block17

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block14:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block11

 Block15:
	mov dword ptr [esi],0
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block11

 Block16:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	inc ebx
	cmp ebx,0xA
	jl Block5

 Block18:
	mov eax,dword ptr [ebp+0xC]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	lea esp,[ebp-0x3C]
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

 Block21:
	push edi
	call _com_issue_error
}
}
// CField_Massacre::CanUseSpecialArts
__SUB_CLASS_THIS0(001565C0, __thiscall, 143509,  CField_Massacre, int32_t) {
__asm {

 Block0:
	mov eax,1
	ret
}
}
// CField_Massacre::OnPacket
__SUB_CLASS_THIS(00156460, __thiscall, 143507,  CField_Massacre, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0xAD
	je Block2

 Block1:
	mov dword ptr [esp+4],eax
	jmp  CField::OnPacket

 Block2:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField_Massacre::OnMassacreIncGauge
	ret 8
}
}
// CField_Massacre::_UpdatePoint
_SUB_EXCEPTION_HANDLER(156220)
__SUB_CLASS_THIS0(00156220, __thiscall, 143504,  CField_Massacre, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_156220
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
	mov edi,ecx
	xor esi,esi
	cmp dword ptr [edi+0xDB8],esi
	sete al
	test al,al
	jne Block23

 Block1:
	mov eax,3
	mov word ptr [esp+0x14],ax
	mov dword ptr [esp+0x1C],esi
	mov ecx,dword ptr [edi+0xDB8]
	mov dword ptr [esp+0x3C],esi
	cmp ecx,esi
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x10]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0x3C],2
	jne Block6

 Block4:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,esi
	je Block7

 Block5:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block7

 Block6:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block7:
	mov esi,dword ptr [esp+0xC]
	test esi,esi
	sete al
	test al,al
	je Block10

 Block8:
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	test esi,esi
	je Block23

 Block9:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x34
	ret

 Block10:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	mov eax,dword ptr [edi+0xDB0]
	mov byte ptr [esp+0x3C],3
	test esi,esi
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea ecx,[esp+0x24]
	push ecx
	push eax
	push 0
	push 0
	mov ecx,esi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],2
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x2C]
	xor edx,edx
	mov word ptr [esp+0x24],dx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[esp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block18:
	cmp dword ptr [edi+0xDA4],0
	je Block20

 Block19:
	mov ecx,dword ptr [edi+0xDF0]
	push ecx
	push 0xB
	push 0x39
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x20],esp
	push esi
	call eax
	mov ecx,dword ptr [edi+0xDA4]
	call CBitmapNumber::Draw
	mov ecx,dword ptr [edi+0xDF8]
	push ecx
	push 0x21
	push 0x39
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x20],esp
	push esi
	call eax
	mov ecx,dword ptr [edi+0xDA4]
	call CBitmapNumber::Draw
	mov ecx,dword ptr [edi+0xDF4]
	push ecx
	push 0x37
	push 0x39
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x20],esp
	push esi
	call eax
	mov ecx,dword ptr [edi+0xDA4]
	call CBitmapNumber::Draw

 Block20:
	cmp dword ptr [edi+0xDAC],0
	je Block22

 Block21:
	mov eax,dword ptr [edi+0xDFC]
	xor ecx,ecx
	test eax,eax
	setle cl
	dec ecx
	and eax,ecx
	push eax
	push 0x55
	push 0x50
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x20],esp
	push esi
	call eax
	mov ecx,dword ptr [edi+0xDAC]
	call CBitmapNumber::Draw

 Block22:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [esp+0x40],0xFFFFFFFF
	call edx

 Block23:
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x34
	ret
}
}
// CField_Massacre::Update
__SUB_CLASS_THIS0(00157530, __thiscall, 143504,  CField_Massacre, void) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	call CField::Update
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	test eax,eax
	je Block8

 Block1:
	add eax,0x4174
	push eax
	mov ecx,esi
	call CField_Massacre::_SetMassacreInfo
	test eax,eax
	je Block3

 Block2:
	call CField_Massacre::_UpdatePoint

 Block3:
	mov eax,dword ptr [esi+0xE08]
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [esi+0xE14]
	sub eax,dword ptr [ecx+0x94]
	mov ecx,esi
	imul eax,dword ptr [esi+0xE04]
	sub eax,dword ptr [esi+0xE0C]
	push eax
	call CField_Massacre::_SetDecGauge

 Block5:
	mov ecx,esi
	call CField_Massacre::UpdateKeyAnimation
	cmp dword ptr [esi+0xE18],0
	jne Block8

 Block6:
	mov edx,dword ptr [esi+0xE14]
	cmp dword ptr [edx+0x94],1
	jg Block8

 Block7:
	push ecx
	mov eax,esp
	mov dword ptr [esp+8],esp
	push 0x14EC
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov ecx,esi
	call CField::ShowScreenEffect
	mov dword ptr [esi+0xE18],1

 Block8:
	pop esi
	pop ecx
	ret
}
}
// CField_MassacreResult::OnPacket
__SUB_CLASS_THIS(0015A1D0, __thiscall, 143578,  CField_MassacreResult, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0xAE
	je Block2

 Block1:
	mov dword ptr [esp+4],eax
	jmp  CField::OnPacket

 Block2:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField_MassacreResult::OnMassacreResult
	ret 8
}
}
// CField_MassacreResult::Init
_SUB_EXCEPTION_HANDLER(1591C0)
__SUB_CLASS_THIS(001591C0, __thiscall, 143577,  CField_MassacreResult, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1591C0
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
	mov ebp,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov eax,dword ptr [esp+0x8C]
	push eax
	call CField::Init
	push 0x48
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x8C],esi
	mov dword ptr [esp+0x84],ebx
	cmp esi,ebx
	je Block11

 Block1:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call edi
	lea edx,[esp+0x2C]
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
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0x88],1
	mov dword ptr [esp+0x18],1
	call edi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	push 0xC
	push 5
	push 0
	push 0
	lea edx,[esp+0x3C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0x151E
	mov edi,3
	push ecx
	mov dword ptr [esp+0xA8],2
	mov dword ptr [esp+0x38],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov dword ptr [esp+0xA0],edi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea edx,[esp+0x78]
	mov byte ptr [esp+0xA0],2
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ebx,7
	mov ecx,eax
	mov dword ptr [esp+0x94],4
	mov dword ptr [esp+0x24],ebx
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block10

 Block8:
	cmp eax,0x80004002
	je Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	mov ecx,esi
	call CBitmapNumber::_ctor_0
	mov edi,eax
	jmp Block12

 Block11:
	xor edi,edi

 Block12:
	mov dword ptr [esp+0x84],7
	test edi,edi
	je Block14

 Block13:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block14:
	mov esi,dword ptr [ebp+0xDA4]
	mov dword ptr [ebp+0xDA4],edi
	test esi,esi
	je Block17

 Block15:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block17

 Block16:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block17:
	mov dword ptr [esp+0x84],6
	mov edi,8
	test bl,4
	je Block22

 Block18:
	and ebx,0xFFFFFFFB
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x5C],di
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[esp+0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov dword ptr [esp+0x84],5
	test bl,2
	je Block27

 Block23:
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x1C],di
	jne Block26

 Block24:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block27:
	mov dword ptr [esp+0x84],0xFFFFFFFF
	test bl,1
	je Block32

 Block28:
	and ebx,0xFFFFFFFE
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x2C],di
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block32:
	push 0x48
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x8C],esi
	mov dword ptr [esp+0x84],edi
	test esi,esi
	je Block43

 Block33:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x4C]
	push ecx
	call edi
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	lea eax,[esp+0x3C]
	or ebx,8
	push eax
	mov byte ptr [esp+0x88],9
	mov dword ptr [esp+0x18],ebx
	call edi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block37

 Block36:
	push eax
	call _com_issue_error

 Block37:
	push 0xF
	push 7
	push 0
	push 0
	lea edx,[esp+0x5C]
	push edx
	lea eax,[esp+0x50]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0x151F
	or ebx,0x10
	push ecx
	mov dword ptr [esp+0xA8],0xA
	mov dword ptr [esp+0x38],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov dword ptr [esp+0xA0],0xB
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea edx,[esp+0x88]
	mov byte ptr [esp+0xA0],0xA
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	or ebx,0x20
	mov ecx,eax
	mov dword ptr [esp+0x94],0xC
	mov dword ptr [esp+0x24],ebx
	call Ztl_variant_t::GetUnknown
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push eax
	mov dword ptr [ecx],0
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block42

 Block40:
	cmp eax,0x80004002
	je Block42

 Block41:
	push eax
	call _com_issue_error

 Block42:
	mov ecx,esi
	call CBitmapNumber::_ctor_0
	mov edi,eax
	jmp Block44

 Block43:
	xor edi,edi

 Block44:
	mov dword ptr [esp+0x84],0xF
	test edi,edi
	je Block46

 Block45:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block46:
	mov esi,dword ptr [ebp+0xDAC]
	mov dword ptr [ebp+0xDAC],edi
	test esi,esi
	je Block49

 Block47:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block49

 Block48:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block49:
	mov dword ptr [esp+0x84],0xE
	mov esi,8
	test bl,0x20
	je Block54

 Block50:
	and ebx,0xFFFFFFDF
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x6C],si
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x74]
	xor ecx,ecx
	mov word ptr [esp+0x6C],cx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea edx,[esp+0x6C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov dword ptr [esp+0x84],0xD
	test bl,0x10
	je Block59

 Block55:
	and ebx,0xFFFFFFEF
	mov dword ptr [esp+0x14],ebx
	cmp word ptr [esp+0x3C],si
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov dword ptr [esp+0x84],0xFFFFFFFF
	test bl,8
	je Block64

 Block60:
	cmp word ptr [esp+0x4C],si
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea eax,[esp+0x4C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block64:
	mov ecx,dword ptr [esp+0x7C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x74
	ret 4
}
}
// CField_Massacre::UpdateKeyAnimation
_SUB_EXCEPTION_HANDLER(156BF0)
__SUB_CLASS_THIS0(00156BF0, __thiscall, 143504,  CField_Massacre, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_156BF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x80
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x8C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0xDE8],0
	jne Block34

 Block1:
	mov eax,dword ptr [esi+0xDC8]
	inc eax
	cmp eax,3
	ja Block34

 Block2:
	cmp EAX, 0
je Block3
cmp EAX, 1
je Block6
cmp EAX, 2
je Block13
cmp EAX, 3
je Block23


 Block3:
	add esi,0xDC4
	cmp dword ptr [esi],0
	je Block34

 Block4:
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::GetanimationState
	test eax,eax
	jne Block34

 Block5:
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putvisible
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x8C
	ret

 Block6:
	push 0
	push 0xFF
	push 0xC006153B
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [eax],0
	push 0x87
	push 7
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	push 0
	push eax
	mov dword ptr [esp+0xB8],0
	call CWndMan::GetOrgWindow
	lea ecx,[esp+0x2C]
	push 0x1512
	push ecx
	mov byte ptr [esp+0xB8],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xB0],2
	push 0
	push eax
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0xBC],3
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	lea edi,[esi+0xDBC]
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	push offset _D_VTMISSING
	lea ecx,[esp+0x40]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x98],4
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x94],5
	test ecx,ecx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea eax,[esp+0x3C]
	push eax
	lea edx,[esp+0x30]
	push edx
	push 0
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x2C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x3C]
	call Ztl_variant_t::~Ztl_variant_t
	mov dword ptr [esi+0xDC8],1
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x8C
	ret

 Block13:
	mov ecx,dword ptr [esi+0xDBC]
	lea edi,[esi+0xDBC]
	test ecx,ecx
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	call IWzGr2DLayer::GetanimationState
	test eax,eax
	jne Block34

 Block16:
	add esi,0xDC0
	cmp dword ptr [esi],eax
	sete al
	test al,al
	jne Block18

 Block17:
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::GetanimationState
	test eax,eax
	jne Block34

 Block18:
	push 0
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putvisible
	push 0
	push 0xFF
	push 0xC006153B
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [eax],0
	push 0x87
	push 7
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0
	push eax
	mov dword ptr [esp+0xB8],6
	call CWndMan::GetOrgWindow
	lea ecx,[esp+0x34]
	push 0x1511
	push ecx
	mov byte ptr [esp+0xB8],7
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xB0],8
	push 0
	push eax
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0xBC],9
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	push eax
	mov ecx,esi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block22:
	push offset _D_VTMISSING
	lea ecx,[esp+0x60]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x50]
	mov dword ptr [esp+0x98],0xA
	call Ztl_variant_t::_ctor_1
	lea eax,[esp+0x5C]
	push eax
	lea ecx,[esp+0x50]
	push ecx
	push 0
	mov ecx,esi
	mov byte ptr [esp+0xA0],0xB
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x4C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x5C]
	call Ztl_variant_t::~Ztl_variant_t
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x8C
	ret

 Block23:
	cmp dword ptr [esi+0xDC0],0
	lea edi,[esi+0xDC0]
	sete al
	test al,al
	jne Block25

 Block24:
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::GetanimationState
	test eax,eax
	jne Block34

 Block25:
	cmp dword ptr [edi],0
	sete al
	test al,al
	sete al
	test al,al
	je Block27

 Block26:
	push 0
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_arrow
	mov ecx,eax
	call IWzGr2DLayer::Putvisible

 Block27:
	push 0
	push 0xFF
	push 0xC006153B
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [eax],0
	push 0x87
	push 7
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0
	push edx
	mov dword ptr [esp+0xB8],0xC
	call CWndMan::GetOrgWindow
	lea eax,[esp+0x3C]
	push 0x1510
	push eax
	mov byte ptr [esp+0xB8],0xD
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xB0],0xE
	push 0
	push eax
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0xBC],0xF
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	lea edi,[esi+0xDC4]
	push eax
	mov ecx,edi
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block29

 Block28:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block29:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x94],0xFFFFFFFF
	test eax,eax
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block31:
	push offset _D_VTMISSING
	lea ecx,[esp+0x80]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x70]
	mov dword ptr [esp+0x98],0x10
	call Ztl_variant_t::_ctor_1
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x94],0x11
	test ecx,ecx
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	lea edx,[esp+0x7C]
	push edx
	lea eax,[esp+0x70]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	lea ecx,[esp+0x6C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x7C]
	call Ztl_variant_t::~Ztl_variant_t
	mov dword ptr [esi+0xDC8],0xFFFFFFFF

 Block34:
	mov ecx,dword ptr [esp+0x8C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x8C
	ret
}
}
// CField_MassacreResult::OnMassacreResult
_SUB_EXCEPTION_HANDLER(1596C0)
__SUB_CLASS_THIS(001596C0, __thiscall, 143579,  CField_MassacreResult, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1596C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x98
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xAC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov esi,dword ptr [esp+0xBC]
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	mov byte ptr [esp+0x27],al
	call CInPacket::Decode4
	mov esi,dword ptr [ZImports::_VariantInit]
	mov dword ptr [esp+0x28],eax
	lea eax,[esp+0x8C]
	push eax
	call esi
	lea ecx,[esp+0x8C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebp,ebp
	add esp,8
	cmp eax,ebp
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x7C]
	push edx
	mov dword ptr [esp+0xB8],ebp
	call esi
	lea eax,[esp+0x7C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea ecx,[esp+0x8C]
	push ecx
	lea edx,[esp+0x80]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x151C
	push eax
	mov byte ptr [esp+0xC8],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xC0],2
	cmp dword ptr [_D_G_RM],ebp
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0xA8]
	push ecx
	mov byte ptr [esp+0xC4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	push eax
	lea edx,[esp+0x68]
	push edx
	mov byte ptr [esp+0xBC],3
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [esp+0xB8],4
	mov dword ptr [esp+0x24],ebp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	lea ecx,[esp+0x24]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	cmp eax,ebp
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0xB4],6
	cmp eax,ebp
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	cmp word ptr [esp+0x9C],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0xB4],7
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x9C],ax
	mov eax,dword ptr [esp+0xA4]
	cmp eax,ebp
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x9C]
	push ecx
	call edi

 Block17:
	cmp word ptr [esp+0x7C],8
	mov byte ptr [esp+0xB4],8
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x84]
	xor edx,edx
	mov word ptr [esp+0x7C],dx
	cmp eax,ebp
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x7C]
	push eax
	call edi

 Block21:
	cmp word ptr [esp+0x8C],8
	mov byte ptr [esp+0xB4],9
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x94]
	xor ecx,ecx
	mov word ptr [esp+0x8C],cx
	cmp eax,ebp
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[esp+0x8C]
	push edx
	call edi

 Block25:
	mov edi,dword ptr [esp+0x20]
	cmp edi,ebp
	sete al
	test al,al
	sete al
	test al,al
	je Block75

 Block26:
	lea eax,[esp+0x50]
	push eax
	call esi
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	lea edx,[esp+0x6C]
	push edx
	mov byte ptr [esp+0xB8],0xA
	call esi
	lea eax,[esp+0x6C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov byte ptr [esp+0xB4],0xB
	cmp edi,ebp
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x14]
	push edx
	push edi
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block34

 Block33:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block34:
	mov ecx,dword ptr [edi]
	mov eax,dword ptr [ecx+0x40]
	mov esi,dword ptr [esp+0x14]
	lea edx,[esp+0x1C]
	push edx
	push edi
	mov dword ptr [esp+0x24],ebp
	call eax
	cmp eax,ebp
	jge Block36

 Block35:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block36:
	mov ecx,dword ptr [_D_G_GR]
	cmp ecx,ebp
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea edx,[esp+0x50]
	push edx
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x70]
	push eax
	push 0xC006153B
	push esi
	push edx
	push 0xFFFFFF72
	push 0xFFFFFF3F
	lea eax,[esp+0x58]
	push eax
	call IWzGr2D::CreateLayer
	cmp word ptr [esp+0x6C],8
	mov byte ptr [esp+0xB4],0xD
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x74]
	xor ecx,ecx
	mov word ptr [esp+0x6C],cx
	cmp eax,ebp
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[esp+0x6C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0xB4],0xE
	jne Block45

 Block43:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	cmp eax,ebp
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 4
	lea edx,[esp+0x20]
	push edx
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0xB4],0xF
	mov word ptr [esp+0x2C],cx
	mov dword ptr [esp+0x34],eax
	cmp eax,ebp
	je Block48

 Block47:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block48:
	mov ebp,dword ptr [esp+0x3C]
	mov byte ptr [esp+0xB4],0x10
	test ebp,ebp
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [ebp]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x40]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push ebp
	call eax
	test eax,eax
	jge Block52

 Block51:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push ebp
	push eax
	call _com_issue_errorex

 Block52:
	mov esi,8
	mov byte ptr [esp+0xB4],0xF
	cmp word ptr [esp+0x2C],si
	jne Block55

 Block53:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	test eax,eax
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB4],0xE
	test eax,eax
	je Block58

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block58:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push ebp
	call ecx
	test eax,eax
	jge Block60

 Block59:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push ebp
	push eax
	call _com_issue_errorex

 Block60:
	mov edx,3
	mov word ptr [esp+0x2C],dx
	mov dword ptr [esp+0x34],0
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0xBC],0x11
	call IWzGr2DLayer::Getcanvas
	mov byte ptr [esp+0xB4],0x13
	cmp word ptr [esp+0x2C],si
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block64:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block66

 Block65:
	push eax
	call _com_issue_error

 Block66:
	mov esi,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB4],0x14
	test esi,esi
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	lea eax,[esp+0x40]
	push eax
	push edi
	push 0
	push 0
	mov ecx,esi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0xB4],0x13
	jne Block71

 Block69:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [edi+0x4174]
	mov ecx,dword ptr [edi+0x4178]
	add edi,0x4174
	add ecx,eax
	add ecx,dword ptr [edi+8]
	cmp ecx,1
	mov dword ptr [esp+0x14],ecx
	jg Block74

 Block73:
	mov dword ptr [esp+0x14],1

 Block74:
	push eax
	push 0x3F
	push 0xDA
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x28],esp
	push esi
	call ecx
	mov ecx,dword ptr [ebx+0xDA4]
	call CBitmapNumber::Draw
	mov edx,dword ptr [edi+8]
	push edx
	push 0x57
	push 0xDA
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x28],esp
	push esi
	call ecx
	mov ecx,dword ptr [ebx+0xDA4]
	call CBitmapNumber::Draw
	mov edx,dword ptr [edi+4]
	push edx
	push 0x6F
	push 0xDA
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x28],esp
	push esi
	call ecx
	mov ecx,dword ptr [ebx+0xDA4]
	call CBitmapNumber::Draw
	mov eax,dword ptr [edi]
	imul eax,0x64
	cdq
	idiv dword ptr [esp+0x14]
	push eax
	push 0x3F
	push 0x109
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x28],esp
	push esi
	call eax
	mov ecx,dword ptr [ebx+0xDA4]
	call CBitmapNumber::Draw
	mov eax,dword ptr [edi+8]
	imul eax,0x64
	cdq
	idiv dword ptr [esp+0x14]
	push eax
	push 0x57
	push 0x109
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x28],esp
	push esi
	call edx
	mov ecx,dword ptr [ebx+0xDA4]
	call CBitmapNumber::Draw
	mov eax,dword ptr [edi+4]
	imul eax,0x64
	cdq
	idiv dword ptr [esp+0x14]
	push eax
	push 0x6F
	push 0x109
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x28],esp
	push esi
	call ecx
	mov ecx,dword ptr [ebx+0xDA4]
	call CBitmapNumber::Draw
	mov edx,dword ptr [esp+0x28]
	push edx
	push 0xA8
	push 0x102
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x28],esp
	push esi
	call ecx
	mov ecx,dword ptr [ebx+0xDAC]
	call CBitmapNumber::Draw
	push 0x1388
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebp
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x20],esp
	push ebp
	call eax
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterRepeatAnimation
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0xB8],0xE
	call edx
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0xB8],9
	call ecx
	mov edi,dword ptr [esp+0x20]
	mov esi,dword ptr [ZImports::_VariantInit]
	xor ebp,ebp

 Block75:
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	cmp edi,ebp
	je Block77

 Block76:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block77:
	push ebp
	push 0xFF
	push 0xC006153B
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax],ebp
	push 0xFFFFFFCB
	push 0xFFFFFF59
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x7C],esp
	push 4
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov dword ptr [esp+0xD8],0x15
	call CWndMan::GetOrgWindow
	lea edx,[esp+0x44]
	push 0x151D
	push edx
	mov byte ptr [esp+0xD8],0x16
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0xD0],0x17
	push ebp
	push eax
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0xDC],0x18
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xB4],0x1A
	cmp eax,ebp
	je Block79

 Block78:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block79:
	lea ecx,[esp+0x50]
	push ecx
	call esi
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block81

 Block80:
	push eax
	call _com_issue_error

 Block81:
	lea eax,[esp+0x40]
	mov bl,0x1B
	push eax
	mov byte ptr [esp+0xB8],bl
	call esi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block83

 Block82:
	push eax
	call _com_issue_error

 Block83:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0xB4],0x1C
	cmp ecx,ebp
	jne Block85

 Block84:
	push 0x80004003
	call _com_issue_error

 Block85:
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x44]
	push eax
	push 0x20
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0xB4],bl
	cmp word ptr [esp+0x40],si
	jne Block88

 Block86:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	cmp eax,ebp
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block89:
	mov byte ptr [esp+0xB4],0x1A
	cmp word ptr [esp+0x50],si
	jne Block92

 Block90:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	cmp eax,ebp
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block93:
	mov edx,dword ptr [esp+0x14]
	push 0x1388
	push ecx
	mov eax,esp
	mov dword ptr [eax],edx
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x20],esp
	cmp eax,ebp
	je Block95

 Block94:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block95:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterRepeatAnimation
	mov eax,dword ptr [esp+0x14]
	or esi,0xFFFFFFFF
	mov dword ptr [esp+0xB4],esi
	cmp eax,ebp
	je Block97

 Block96:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block97:
	mov dword ptr [esp+0x14],ebp
	movzx eax,byte ptr [esp+0x27]
	mov ebx,0x1D
	mov dword ptr [esp+0xB4],ebx
	cmp eax,4
	ja Block106

 Block98:
	cmp EAX, 0
je Block99
cmp EAX, 1
je Block100
cmp EAX, 2
je Block101
cmp EAX, 3
je Block102
cmp EAX, 4
je Block103


 Block99:
	lea eax,[esp+0x3C]
	push 0x1524
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0xB8],0x1E
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x3C]
	jmp Block104

 Block100:
	lea ecx,[esp+0x1C]
	push 0x1520
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0xB8],0x1F
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x1C]
	jmp Block104

 Block101:
	lea edx,[esp+0x68]
	push 0x1521
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0xB8],0x20
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x68]
	jmp Block104

 Block102:
	lea eax,[esp+0x60]
	push 0x1522
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0xB8],0x21
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x60]
	jmp Block104

 Block103:
	lea ecx,[esp+0x18]
	push 0x1523
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0xB8],0x22
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x18]

 Block104:
	mov byte ptr [esp+0xB4],bl
	cmp eax,ebp
	je Block106

 Block105:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block106:
	push ebp
	push 0xFF
	push 0xC006153B
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [eax],ebp
	push 0xFFFFFFCB
	push 0xFFFFFF59
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov edx,esp
	mov dword ptr [esp+0x80],esp
	push 4
	push edx
	mov byte ptr [esp+0xD8],0x23
	call CWndMan::GetOrgWindow
	mov edi,dword ptr [esp+0x30]
	push ebp
	lea eax,[esp+0x40]
	push edi
	push eax
	mov byte ptr [esp+0xDC],bl
	call CAnimationDisplayer::LoadSingleLayer_1
	add esp,0x28
	push 0x1388
	push ecx
	mov ecx,dword ptr [esp+0x28]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xBC],0x24
	mov dword ptr [esp+0x30],esp
	cmp eax,ebp
	je Block108

 Block107:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block108:
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterRepeatAnimation
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0xB4],bl
	cmp eax,ebp
	je Block110

 Block109:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block110:
	mov dword ptr [esp+0xB4],esi
	cmp edi,ebp
	je Block112

 Block111:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block112:
	mov ecx,dword ptr [esp+0xAC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA4
	ret 4
}
}
// CTimerboard_Massacre::OnCreate
_SUB_EXCEPTION_HANDLER(1575E0)
__SUB_CLASS_THIS(001575E0, __thiscall, 143594,  CTimerboard_Massacre, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1575E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x64
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x74]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea ecx,[esp+0x44]
	call CClock::INITPARAM::_ctor_default
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x80],0
	call CClock::OnCreate
	lea ecx,[esp+0x44]
	mov dword ptr [esp+0x7C],0xFFFFFFFF
	call CClock::INITPARAM::~INITPARAM
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x24]
	push eax
	call edi
	lea ecx,[esp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x14]
	push edx
	mov dword ptr [esp+0x80],1
	call edi
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push 0
	push 0
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x20]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0x14EE
	mov bl,2
	push eax
	mov byte ptr [esp+0x98],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x90],3
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x48]
	push ecx
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x84],4
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xDC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov edi,8
	mov byte ptr [esp+0x7C],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x34],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x34]
	push eax
	call ebx

 Block13:
	mov byte ptr [esp+0x7C],1
	cmp word ptr [esp+0x14],di
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x14]
	push edx
	call ebx

 Block17:
	mov dword ptr [esp+0x7C],0xFFFFFFFF
	cmp word ptr [esp+0x24],di
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x24]
	push ecx
	call ebx

 Block21:
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x34]
	lea eax,[esp+0x10]
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xE0]
	cmp edi,eax
	je Block26

 Block22:
	mov dword ptr [esi+0xE0],eax
	test eax,eax
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block24:
	test edi,edi
	je Block26

 Block25:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block26:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block28

 Block27:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block28:
	mov ecx,dword ptr [esp+0x74]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x70
	ret 4
}
}
