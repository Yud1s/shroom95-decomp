#include "regen.hpp"
// Employee.ipp
#include "Employee.hpp"

// CEmployee::GetRTTI
__SUB_CLASS_THIS0(00117FB0, __thiscall, 67840,  CEmployee, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CEmployee::ms_RTTI_CEmployee
	ret
}
}
// CreateEmployee
_SUB_EXCEPTION_HANDLER(118160)
__SUB(00118160, __cdecl, 144323,  CEmployee*, unsigned long, CEmployeeTemplate*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_118160
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	push 0xD8
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+4],eax
	mov dword ptr [esp+0x10],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x18]
	push ecx
	push edx
	mov ecx,eax
	call CEmployee::_ctor_0
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x10
	ret

 Block2:
	xor eax,eax
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x10
	ret
}
}
// CEmployee::OnLayerZChanged
__SUB_CLASS_THIS(00117520, __thiscall, 67834,  CEmployee, void, const CVecCtrl*) {
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
	cmp eax,dword ptr [ecx+0x9C]
	jne Block5

 Block4:
	add ecx,0xFFFFFFFC
	call CEmployee::SetLayerZ

 Block5:
	ret 4
}
}
// CEmployee::GetType
__SUB_CLASS_THIS0(00117F40, __thiscall, 67832,  CEmployee, long) {
__asm {

 Block0:
	mov eax,6
	ret
}
}
// CEmployee::SetLayerZ
__SUB_CLASS_THIS0(001174B0, __thiscall, 67823,  CEmployee, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xA0]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov edx,dword ptr [eax+0x1C4]
	mov eax,dword ptr [eax+0x1C0]
	push esi
	mov esi,dword ptr [ecx+0x9C]
	test esi,esi
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	mov ecx,dword ptr [esi]
	imul eax,0xBB8
	mov ecx,dword ptr [ecx+0xB4]
	sub eax,edx
	lea edx,[eax+eax*4]
	lea eax,[edx+edx-0x3FFF8AD5]
	push eax
	push esi
	call ecx
	test eax,eax
	jge Block7

 Block6:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block7:
	pop esi
	ret
}
}
// CEmployee::GetPosPrev
__SUB_CLASS_THIS0(00117F80, __thiscall, 67836,  CEmployee, const tagPOINT) {
__asm {

 Block0:
	mov edx,dword ptr [ecx+0xBC]
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [ecx+0xC0]
	mov dword ptr [eax],edx
	mov dword ptr [eax+4],ecx
	ret 4
}
}
// CEmployee::SetBalloon
_SUB_EXCEPTION_HANDLER(118560)
__SUB_CLASS_THIS(00118560, __thiscall, 67827,  CEmployee, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_118560
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
	mov edi,ecx
	mov esi,dword ptr [esp+0x2C]
	mov ecx,esi
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [edi+0x90],eax
	test eax,eax
	je Block5

 Block1:
	mov ecx,esi
	call CInPacket::Decode4
	mov dword ptr [edi+0x94],eax
	lea eax,[esp+0x2C]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov ecx,esi
	mov dword ptr [esp+0x24],0
	call CInPacket::Decode1
	mov ecx,esi
	movzx ebp,al
	call CInPacket::Decode1
	mov ecx,esi
	movzx ebx,al
	call CInPacket::Decode1
	push 0
	movzx eax,al
	push ebx
	push eax
	mov eax,dword ptr [edi+0xA0]
	push ebp
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	mov eax,dword ptr [esp+0x44]
	push 0
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x48],1
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [edi+0x90]
	push ecx
	lea ecx,[edi+0x14]
	mov byte ptr [esp+0x48],0
	call CChatBalloon::MakeMiniRoomBalloon
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block6

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block6

 Block5:
	lea ecx,[edi+0x14]
	call CChatBalloon::DestroyMiniRoomBalloon

 Block6:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 4
}
}
// CEmployee::Init
_SUB_EXCEPTION_HANDLER(1181E0)
__SUB_CLASS_THIS(001181E0, __thiscall, 67827,  CEmployee, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1181E0
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
	call CInPacket::Decode2
	cwde
	mov ecx,edi
	mov dword ptr [esi+0xC0],eax
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [esi+0xC4],ecx
	mov ebx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	mov ecx,edi
	call CInPacket::Decode2
	movsx edx,ax
	push edx
	mov ecx,ebx
	call CWvsPhysicalSpace2D::GetFoothold
	mov ebp,eax
	lea eax,[esp+0x4C]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	xor ebx,ebx
	mov dword ptr [esp+0x44],ebx
	call CVecCtrl::CreateInstance
	mov edi,eax
	lea ecx,[esi+0xA0]
	push edi
	call _x_com_ptr<IWzVector2D>::_QueryVecCtrl
	cmp eax,ebx
	jge Block3

 Block1:
	cmp eax,0x80004002
	je Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	lea eax,[esi+4]
	push eax
	mov ecx,edi
	call CVecCtrl::Init
	mov eax,dword ptr [esi+0xC4]
	mov ecx,dword ptr [esi+0xC0]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+4]
	push ebp
	push ebx
	push ebx
	push ebx
	push eax
	push ecx
	push ebx
	mov ecx,edi
	call edx
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
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
	mov edx,3
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x44],2
	cmp ecx,ebx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea eax,[esp+0x2C]
	push eax
	lea edx,[esp+0x20]
	push edx
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea eax,[esp+0x30]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0x9C]
	cmp edi,eax
	je Block12

 Block8:
	mov dword ptr [esi+0x9C],eax
	cmp eax,ebx
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block10:
	cmp edi,ebx
	je Block12

 Block11:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block12:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebx
	je Block14

 Block13:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block14:
	mov ebp,8
	mov byte ptr [esp+0x44],1
	cmp word ptr [esp+0x1C],bp
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov byte ptr [esp+0x44],bl
	cmp word ptr [esp+0x2C],bp
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebx
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov eax,dword ptr [esi+0xA0]
	mov edx,0xD
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],eax
	cmp eax,ebx
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block24:
	mov edi,dword ptr [esi+0x9C]
	mov byte ptr [esp+0x44],3
	cmp edi,ebx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push edi
	call eax
	cmp eax,ebx
	jge Block28

 Block27:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block28:
	mov byte ptr [esp+0x44],bl
	cmp word ptr [esp+0x1C],bp
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebx
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov edi,dword ptr [esi+0x9C]
	cmp edi,ebx
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push edi
	call ecx
	cmp eax,ebx
	jge Block36

 Block35:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block36:
	mov ecx,esi
	call CEmployee::SetLayerZ
	mov ecx,esi
	call CEmployee::PrepareActionLayer
	lea edx,[esp+0x14]
	push 0xDA6
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x4C]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edi,[esi+0x98]
	push edi
	mov byte ptr [esp+0x50],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x20]
	add esp,0xC
	mov byte ptr [esp+0x44],bl
	cmp eax,ebx
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block38:
	mov eax,dword ptr [esi+0xA0]
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	push 0x3E8
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block40

 Block39:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block40:
	mov eax,dword ptr [esi+0x9C]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block42

 Block41:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block42:
	mov edi,dword ptr [edi]
	push edi
	mov ecx,esi
	call CLife::MakeNameTag
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp eax,ebx
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block44:
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
// CEmployee::OnResolveMoveAction
__SUB_CLASS_THIS(00117F50, __thiscall, 67833,  CEmployee, long, long, long, long, const CVecCtrl*) {
__asm {

 Block0:
	xor eax,eax
	ret 0x10
}
}
// CEmployee::CEmployee
_SUB_EXCEPTION_HANDLER(117E00)
__SUB_CLASS_THIS(00117E00, __thiscall, 67821,  CEmployee, void, unsigned long, CEmployeeTemplate*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_117E00
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
	call CLife::_ctor_default
	mov eax,dword ptr [esp+0x28]
	xor edi,edi
	mov dword ptr [esi+0x88],eax
	mov eax,dword ptr [esp+0x2C]
	int 3// TODO: 	mov dword ptr [esi],offset CEmployee::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CEmployee::`vftable'{for `IVecCtrlOwner'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CEmployee::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x8C],eax
	mov dword ptr [esi+0x90],edi
	mov dword ptr [esp+0x20],edi
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xA8],0xFFFFFFFF
	mov eax,dword ptr [eax+4]
	mov byte ptr [esp+0x20],3
	cmp eax,edi
	jne Block2

 Block1:
	xor eax,eax
	jmp Block3

 Block2:
	mov eax,dword ptr [eax-4]

 Block3:
	lea edx,[esp+0x2C]
	push edx
	inc eax
	lea ecx,[esi+0xB4]
	push eax
	mov dword ptr [ecx],edi
	call ZArray<ZList<ZRef<CActionMan::EMPLOYEEACTIONFRAMEENTRY>>>::_Alloc
	mov dword ptr [esi+0xBC],edi
	xor ebx,ebx
	mov byte ptr [esp+0x20],5
	xor ebp,ebp
	lea esp,[esp]

 Block4:
	mov eax,dword ptr [esp+0x2C]
	mov eax,dword ptr [eax+4]
	cmp eax,edi
	jne Block6

 Block5:
	xor eax,eax
	jmp Block7

 Block6:
	mov eax,dword ptr [eax-4]

 Block7:
	inc eax
	cmp ebx,eax
	jae Block13

 Block8:
	mov edi,dword ptr [esi+0xB4]
	add edi,ebp
	cmp dword ptr [edi+8],0
	jne Block10

 Block9:
	mov ecx,dword ptr [esi+0x8C]
	push edi
	push ebx
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	call CActionMan::LoadEmployeeAction

 Block10:
	mov edi,dword ptr [edi+0xC]
	mov dword ptr [esp+0x28],edi
	test edi,edi
	je Block12

 Block11:
	lea edx,[esp+0x28]
	push edx
	call ZList<ZRef<CActionMan::EMPLOYEEACTIONFRAMEENTRY>>::GetNext
	add esp,4
	cmp dword ptr [esp+0x28],0
	jne Block11

 Block12:
	inc ebx
	add ebp,0x14
	xor edi,edi
	jmp Block4

 Block13:
	mov eax,esi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8
}
}
// CEmployee::GetNameTag
__SUB_CLASS_THIS0(003F9520, __thiscall, 67826,  CEmployee, ZXString<char>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,dword ptr [esp+0xC]
	add ecx,0x98
	push ecx
	mov ecx,esi
	mov dword ptr [esp+8],0
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,esi
	pop esi
	pop ecx
	ret 4
}
}
// CEmployee::~CEmployee
_SUB_EXCEPTION_HANDLER(118030)
__SUB_CLASS_THIS0(00118030, __thiscall, 67823,  CEmployee, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_118030
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
	int 3// TODO: 	mov dword ptr [esi],offset CEmployee::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CEmployee::`vftable'{for `IVecCtrlOwner'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CEmployee::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xBC]
	mov dword ptr [esp+0x14],4
	test eax,eax
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0xBC]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0xBC]
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+0xBC],0

 Block5:
	lea ecx,[esi+0xB4]
	mov byte ptr [esp+0x14],3
	call ZArray<ZList<ZRef<CActionMan::EMPLOYEEACTIONFRAMEENTRY>>>::RemoveAll
	mov eax,dword ptr [esi+0xA0]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block7

 Block6:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block7:
	mov eax,dword ptr [esi+0x9C]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov eax,dword ptr [esi+0x98]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov ecx,esi
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CLife::~CLife
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CEmployee::Update
_SUB_EXCEPTION_HANDLER(117AA0)
__SUB_CLASS_THIS0(00117AA0, __thiscall, 67823,  CEmployee, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_117AA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x2C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x32
	div ecx
	mov ecx,dword ptr [esi+0xB4]
	mov eax,edx
	test ecx,ecx
	je Block2

 Block1:
	mov ecx,dword ptr [ecx-4]

 Block2:
	xor edx,edx
	div ecx
	add dword ptr [esi+0xB0],0xFFFFFFE2
	mov eax,dword ptr [esi+0xB0]
	mov dword ptr [esi+0xA4],edx
	test eax,eax
	jg Block12

 Block3:
	lea edi,[esi+0xAC]
	push edi
	call ZList<ZRef<CActionMan::EMPLOYEEACTIONFRAMEENTRY>>::GetNext
	mov eax,dword ptr [edi]
	add esp,4
	test eax,eax
	jne Block5

 Block4:
	mov ecx,esi
	mov dword ptr [esi+0xA8],0xFFFFFFFF
	call CEmployee::PrepareActionLayer
	jmp Block12

 Block5:
	mov edi,dword ptr [eax+4]
	mov edx,3
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],1
	mov ecx,dword ptr [esi+0x9C]
	mov dword ptr [esp+0x34],0
	test ecx,ecx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::ShiftCanvas
	cmp word ptr [esp+0x1C],8
	mov dword ptr [esp+0x34],0xFFFFFFFF
	jne Block10

 Block8:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block11

 Block9:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block11

 Block10:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block11:
	mov eax,dword ptr [edi+0x40]
	mov dword ptr [esi+0xB0],eax

 Block12:
	lea ecx,[esp+0xC]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xC]
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
	mov edi,dword ptr [esi+0xA0]
	mov dword ptr [esp+0x34],1
	test edi,edi
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov edx,dword ptr [esp+0xC]
	mov ecx,dword ptr [edi]
	mov ecx,dword ptr [ecx+0x8C]
	sub esp,0x10
	mov eax,esp
	push 0
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x24]
	push 0
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x2C]
	push 0
	push 0
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x38]
	push 0
	push 0
	mov dword ptr [eax+0xC],edx
	lea eax,[esi+0xC4]
	push eax
	add esi,0xC0
	push esi
	push edi
	call ecx
	test eax,eax
	jge Block18

 Block17:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block18:
	cmp word ptr [esp+0xC],8
	mov dword ptr [esp+0x34],0xFFFFFFFF
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x14]
	xor edx,edx
	mov word ptr [esp+0xC],dx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x2C
	ret

 Block21:
	lea eax,[esp+0xC]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x2C
	ret
}
}
// CEmployee::GetShoeAttr
__SUB_CLASS_THIS0(00118000, __thiscall, 67835,  CEmployee, const ZRef<CAttrShoe>) {
__asm {

 Block0:
	push ecx
	mov eax,dword ptr [ecx+0xB8]
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
// CEmployee::GetPos
__SUB_CLASS_THIS0(00117F60, __thiscall, 67836,  CEmployee, const tagPOINT) {
__asm {

 Block0:
	mov edx,dword ptr [ecx+0xBC]
	mov eax,dword ptr [esp+4]
	mov ecx,dword ptr [ecx+0xC0]
	mov dword ptr [eax],edx
	mov dword ptr [eax+4],ecx
	ret 4
}
}
// CEmployee::GetZMass
__SUB_CLASS_THIS0(00117FA0, __thiscall, 67832,  CEmployee, long) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// CEmployee::IsKindOf
__SUB_CLASS_THIS(00117FD0, __thiscall, 67841,  CEmployee, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CEmployee::ms_RTTI_CEmployee
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
// CEmployee::PrepareActionLayer
_SUB_EXCEPTION_HANDLER(117690)
__SUB_CLASS_THIS0(00117690, __thiscall, 67823,  CEmployee, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_117690
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
	mov ebp,ecx
	mov esi,dword ptr [ebp+0xA4]
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x32
	div ecx
	mov eax,dword ptr [ebp+0xB4]
	and edx,1
	mov dword ptr [esp+0x20],edx
	lea edx,[esi+esi*4]
	lea edi,[eax+edx*4]
	mov eax,dword ptr [edi+8]
	mov dword ptr [esp+0x1C],edi
	test eax,eax
	jne Block2

 Block1:
	mov ecx,dword ptr [ebp+0x8C]
	push edi
	push esi
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	call CActionMan::LoadEmployeeAction

 Block2:
	cmp dword ptr [edi+8],0
	jne Block4

 Block3:
	push 0x22000006
	lea ecx,[esp+0x18]
	call CMSException::_ctor_0
	mov edx,dword ptr [esp+0x14]
	push offset CTerminateException::THROW_INFO
	lea eax,[esp+0x1C]
	push eax
	mov dword ptr [esp+0x20],edx
	call _CxxThrowException

 Block4:
	mov ecx,3
	mov word ptr [esp+0x24],cx
	mov dword ptr [esp+0x2C],0xFFFFFFFE
	mov ecx,dword ptr [ebp+0x9C]
	mov dword ptr [esp+0x9C],0
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov ebx,8
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	cmp word ptr [esp+0x24],bx
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov eax,dword ptr [edi+0xC]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block47

 Block13:
	mov edi,dword ptr [ZImports::_VariantInit]
	jmp Block15

 Block15:
	lea edx,[esp+0x14]
	push edx
	call ZList<ZRef<CActionMan::EMPLOYEEACTIONFRAMEENTRY>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	lea eax,[esp+0x74]
	push eax
	call edi
	lea ecx,[esp+0x74]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block49

 Block16:
	lea edx,[esp+0x64]
	push edx
	mov dword ptr [esp+0xA0],1
	call edi
	lea eax,[esp+0x64]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block49

 Block17:
	lea ecx,[esp+0x54]
	push ecx
	mov byte ptr [esp+0xA0],2
	call edi
	lea edx,[esp+0x54]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block49

 Block18:
	lea eax,[esp+0x44]
	push eax
	mov byte ptr [esp+0xA0],3
	call edi
	lea ecx,[esp+0x44]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block49

 Block19:
	mov eax,dword ptr [esi+0x40]
	mov edx,3
	mov word ptr [esp+0x34],dx
	mov dword ptr [esp+0x3C],eax
	mov ecx,dword ptr [ebp+0x9C]
	mov esi,dword ptr [esi+0xC]
	mov byte ptr [esp+0x9C],5
	test ecx,ecx
	je Block5

 Block20:
	lea eax,[esp+0x74]
	push eax
	lea edx,[esp+0x68]
	push edx
	lea eax,[esp+0x5C]
	push eax
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x44]
	push eax
	push esi
	lea edx,[esp+0x9C]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x84],bx
	jne Block27

 Block21:
	xor eax,eax
	mov word ptr [esp+0x84],ax
	mov eax,dword ptr [esp+0x8C]
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block23:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block24:
	mov byte ptr [esp+0x9C],4
	cmp word ptr [esp+0x34],bx
	jne Block28

 Block25:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	test eax,eax
	je Block29

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block27:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x84]
	push ecx
	call esi
	jmp Block24

 Block28:
	lea eax,[esp+0x34]
	push eax
	call esi

 Block29:
	mov byte ptr [esp+0x9C],3
	cmp word ptr [esp+0x44],bx
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea edx,[esp+0x44]
	push edx
	call esi

 Block33:
	mov byte ptr [esp+0x9C],2
	cmp word ptr [esp+0x54],bx
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea ecx,[esp+0x54]
	push ecx
	call esi

 Block37:
	mov byte ptr [esp+0x9C],1
	cmp word ptr [esp+0x64],bx
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x6C]
	xor edx,edx
	mov word ptr [esp+0x64],dx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea eax,[esp+0x64]
	push eax
	call esi

 Block41:
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	cmp word ptr [esp+0x74],bx
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x7C]
	xor ecx,ecx
	mov word ptr [esp+0x74],cx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea edx,[esp+0x74]
	push edx
	call esi

 Block45:
	cmp dword ptr [esp+0x14],0
	jne Block15

 Block46:
	mov edi,dword ptr [esp+0x1C]

 Block47:
	mov eax,dword ptr [edi+0xC]
	mov dword ptr [ebp+0xAC],eax
	mov ecx,dword ptr [edi+0xC]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x40]
	mov dword ptr [ebp+0xB0],eax
	mov esi,dword ptr [ebp+0x9C]
	test esi,esi
	jne Block50

 Block48:
	push 0x80004003
	call _com_issue_error

 Block49:
	push eax
	call _com_issue_error

 Block50:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0xD8]
	xor edx,edx
	cmp dword ptr [esp+0x20],edx
	sete dl
	push edx
	push esi
	call eax
	test eax,eax
	jge Block52

 Block51:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block52:
	mov ecx,dword ptr [esp+0x94]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x8C
	ret
}
}
