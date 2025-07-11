#include "regen.hpp"
// ITCWnd.ipp
#include "ITCWnd.hpp"

// CITCWnd_Inventory::OnMouseButton
__SUB_CLASS_THIS(00181E30, __thiscall, 84129,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	push esi
	mov esi,ecx
	push edi
	lea ecx,[esi+0x94]
	call CUIToolTip::ClearToolTip
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block5

 Block1:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block4

 Block3:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block4:
	mov dword ptr [esp+0x1C],0

 Block5:
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [esp+0x2C]
	push ecx
	lea ebx,[esi-4]
	push edx
	mov ecx,ebx
	call CITCWnd_Inventory::GetSlotPositionFromPoint
	mov edi,eax
	mov eax,dword ptr [esi+0xAE4]
	push edi
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebp
	call CharacterData::GetItem
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block10

 Block6:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	mov edx,dword ptr [esp+0x14]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block9

 Block8:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block9:
	mov dword ptr [esp+0x14],0

 Block10:
	push ebp
	call IsITCTradeLimitItem
	add esp,4
	test eax,eax
	jne Block15

 Block11:
	mov eax,dword ptr [esp+0x24]
	cmp eax,0x201
	jne Block13

 Block12:
	push edi
	mov ecx,ebx
	call CITCWnd_Inventory::SetSelectedNo
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 0x10

 Block13:
	cmp eax,0x203
	jne Block15

 Block14:
	mov eax,dword ptr [esi+0xAE4]
	mov ecx,dword ptr [esi+0xAEC]
	push ebp
	push edi
	push eax
	push 0
	call CITC::OnRegisterSaleEntry
	mov dword ptr [esi+0xAE8],0xFFFFFFFF

 Block15:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 0x10
}
}
// CITCWnd_PURCHASE::OnMouseButton
__SUB_CLASS_THIS(00181550, __thiscall, 84091,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push ebp
	push esi
	mov ebp,ecx
	push edi
	lea ecx,[ebp+0x84]
	call CUIToolTip::ClearToolTip
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x10]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block5

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
	mov dword ptr [esp+0x14],0

 Block5:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,0x201
	jne Block11

 Block6:
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x24]
	mov esi,dword ptr [ebp+0xAD4]
	push ecx
	lea edi,[ebp-4]
	push edx
	mov ecx,edi
	add esi,0x4C
	call CITCWnd_PURCHASE::GetWndPurchaseIndex
	test eax,eax
	jl Block18

 Block7:
	mov esi,dword ptr [esi]
	test esi,esi
	je Block18

 Block8:
	cmp eax,dword ptr [esi-4]
	jae Block18

 Block9:
	cmp dword ptr [ebp+0xAD0],eax
	je Block18

 Block10:
	push 0
	mov ecx,edi
	mov dword ptr [ebp+0xAD0],eax
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0x10

 Block11:
	cmp eax,0x203
	jne Block18

 Block12:
	mov eax,dword ptr [esp+0x28]
	mov esi,dword ptr [ebp+0xAD4]
	mov ecx,dword ptr [esp+0x24]
	push eax
	push ecx
	add esi,0x4C
	lea ecx,[ebp-4]
	mov dword ptr [esp+0x24],esi
	call CITCWnd_PURCHASE::GetWndPurchaseIndex
	test eax,eax
	jl Block18

 Block13:
	mov ecx,dword ptr [esi]
	test ecx,ecx
	je Block18

 Block14:
	cmp eax,dword ptr [ecx-4]
	jae Block18

 Block15:
	lea edi,[eax*8]
	mov eax,dword ptr [edi+ecx+4]
	mov eax,dword ptr [eax+0x18]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	push esi
	mov ecx,ebx
	call CharacterData::FindEmptySlotPosition
	mov edx,dword ptr [TSingleton<CITCWnd_Inventory>::ms_pInstance]
	mov ecx,dword ptr [edx+0x84]
	mov ebx,eax
	lea eax,[esi-1]
	push eax
	call CCtrlTab::SetTab
	test ebx,ebx
	je Block17

 Block16:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [ebp+0xAD0],0xFFFFFFFF
	mov edx,dword ptr [ecx]
	mov ecx,dword ptr [ebp+0xAD4]
	push ebx
	push esi
	add edx,edi
	push edx
	call CITC::OnMoveITCPurchaseItemLtoS
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0x10

 Block17:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push 0x1A8F
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block18:
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0x10
}
}
// CITCWnd_Inventory::OnTabChanged
__SUB_CLASS_THIS(00180810, __thiscall, 84139,  CITCWnd_Inventory, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub esp,8
	push ebp
	push esi
	mov esi,ecx
	inc eax
	lea ecx,[esp+8]
	mov dword ptr [esi+0xAE8],eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block5

 Block1:
	push ebx
	push edi
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block4

 Block3:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block4:
	pop edi
	mov dword ptr [esp+0x10],0
	pop ebx

 Block5:
	mov ecx,dword ptr [esi+0xAE8]
	lea eax,[ebp+ecx*4+0x501]
	mov eax,dword ptr [eax]
	test eax,eax
	je Block7

 Block6:
	mov eax,dword ptr [eax-4]

 Block7:
	lea ecx,[eax-0x10]
	mov eax,0x2AAAAAAB
	imul ecx
	mov eax,edx
	shr eax,0x1F
	lea ecx,[edx+eax+1]
	push ecx
	mov ecx,dword ptr [esi+0x8C]
	call CCtrlScrollBar::SetScrollRange
	mov edx,dword ptr [esi+0xAE8]
	mov eax,dword ptr [edx*4+CITCWnd_Inventory::ms_anItemScrollPos]
	mov ecx,dword ptr [esi+0x8C]
	push eax
	call CCtrlScrollBar::SetCurPos
	mov ecx,dword ptr [esi+0x8C]
	mov eax,dword ptr [ecx+0x38]
	lea edx,[eax+eax*2]
	lea eax,[edx+edx+1]
	lea ecx,[esi+0x98]
	mov dword ptr [esi+0xAE4],eax
	call CUIToolTip::ClearToolTip
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	pop ebp
	add esp,8
	ret 4
}
}
// CITCWnd_Inventory::ResetInfo
__SUB_CLASS_THIS0(0017FFB0, __thiscall, 84126,  CITCWnd_Inventory, void) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0x84]
	mov eax,dword ptr [ecx+0x44]
	push eax
	call CCtrlTab::SetTab
	ret
}
}
// CITCWnd_Inventory::OnMouseEnter
__SUB_CLASS_THIS(0017FF30, __thiscall, 84132,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::OnMouseEnter
	lea ecx,[esi+0x94]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 4
}
}
// CITCWnd_Char::~CITCWnd_Char
_SUB_EXCEPTION_HANDLER(1803F0)
__SUB_CLASS_THIS0(001803F0, __thiscall, 83950,  CITCWnd_Char, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1803F0
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
	mov dword ptr [esp+0x10],esi
	int 3// TODO: 	mov dword ptr [esi],offset CITCWnd_Char::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CITCWnd_Char::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CITCWnd_Char::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x480]
	mov dword ptr [esp+0x1C],3
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	cmp dword ptr [esi+0x47C],0
	lea edi,[esi+0x478]
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CUserPreview>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	mov eax,dword ptr [esi+0x474]
	mov byte ptr [esp+0x1C],2
	test eax,eax
	je Block9

 Block5:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block8

 Block7:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block8:
	mov dword ptr [esi+0x474],0

 Block9:
	int 3// TODO: 	mov dword ptr [esi+0x80],offset ZRefCounted::`vftable'
	mov ecx,esi
	mov dword ptr [TSingleton<CITCWnd_Char>::ms_pInstance],0
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CWnd::~CWnd
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x10
	ret
}
}
// CITCWnd_Inventory::OnSetFocus
__SUB_CLASS_THIS(00172410, __thiscall, 84134,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CITCWnd_PURCHASE::GetWndPurchaseIndex
__SUB_CLASS_THIS(00180270, __thiscall, 84097,  CITCWnd_PURCHASE, long, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,dword ptr [esp+0x18]
	push ebp
	mov ebp,dword ptr [esp+0x20]
	push esi
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0x84]
	mov eax,dword ptr [eax+0x38]
	lea esi,[eax+eax*2]
	lea ecx,[eax+eax*2+6]
	add esi,esi
	add ecx,ecx
	cmp esi,ecx
	jge Block4

 Block1:
	lea esp,[esp]

 Block2:
	push esi
	lea edx,[esp+0x14]
	push edx
	mov ecx,edi
	call CITCWnd_PURCHASE::GetWndPurchaseRect
	push ebp
	push ebx
	lea eax,[esp+0x18]
	push eax
	call PtInRect
	test eax,eax
	jne Block5

 Block3:
	mov ecx,dword ptr [edi+0x84]
	mov eax,dword ptr [ecx+0x38]
	add eax,2
	lea edx,[eax+eax*2]
	inc esi
	add edx,edx
	cmp esi,edx
	jl Block2

 Block4:
	pop edi
	pop esi
	pop ebp
	or eax,0xFFFFFFFF
	pop ebx
	add esp,0x10
	ret 8

 Block5:
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8
}
}
// CITCWnd_Char::InitPet
_SUB_EXCEPTION_HANDLER(180C30)
__SUB_CLASS_THIS0(00180C30, __thiscall, 83950,  CITCWnd_Char, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_180C30
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
	mov dword ptr [esp+0x18],ecx
	xor ebx,ebx
	lea eax,[esp+0x24]
	mov dword ptr [esp+0x14],ebx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block5

 Block1:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block4

 Block3:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block4:
	mov dword ptr [esp+0x28],ebx

 Block5:
	mov ecx,dword ptr [esi+0x1F]
	mov edx,dword ptr [esi+0x1B]
	push ecx
	push edx
	push 5
	mov ecx,esi
	call CharacterData::FindCashItemSlotPosition_0
	push eax
	push 5
	lea eax,[esp+0x24]
	push eax
	mov ecx,esi
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x20]
	xor edi,edi
	cmp eax,edi
	je Block10

 Block6:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	mov ecx,dword ptr [esp+0x20]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x20]
	cmp ecx,edi
	je Block9

 Block8:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block9:
	mov dword ptr [esp+0x20],edi

 Block10:
	cmp esi,edi
	je Block12

 Block11:
	lea eax,[esi+0xC]
	jmp Block13

 Block12:
	push edi
	lea ecx,[esp+0x30]
	call TSecType<long>::_ctor_1
	mov ebx,1
	mov dword ptr [esp+0x40],edi
	mov dword ptr [esp+0x14],ebx

 Block13:
	push edi
	push edi
	mov ecx,eax
	call TSecType<long>::GetData
	mov ecx,dword ptr [esp+0x20]
	push eax
	call CITCWnd_Char::SetPet
	mov dword ptr [esp+0x40],0xFFFFFFFF
	test bl,1
	je Block16

 Block14:
	mov eax,dword ptr [esp+0x34]
	cmp eax,edi
	je Block16

 Block15:
	push eax
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Free

 Block16:
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
// CITCWnd_Char::SetPet
__SUB_CLASS_THIS(0017FFC0, __thiscall, 83959,  CITCWnd_Char, void, long, long, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0x47C]
	mov eax,dword ptr [eax+0x19E4]
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov ecx,dword ptr [eax+0x1BC]
	push ecx
	add eax,0x1B4
	push eax
	call _ZtlSecureFuseHelper<CLadderOrRope *>::call
	add esp,8
	test eax,eax
	jne Block9

 Block4:
	mov eax,dword ptr [esp+8]
	cmp dword ptr [esi+0x468],eax
	jne Block7

 Block5:
	cmp dword ptr [esp+0x10],0
	jne Block8

 Block6:
	mov dword ptr [esi+0x46C],0
	mov dword ptr [esi+0x468],0
	jmp Block8

 Block7:
	mov edx,dword ptr [esp+0xC]
	mov dword ptr [esi+0x468],eax
	mov dword ptr [esi+0x46C],edx

 Block8:
	mov eax,dword ptr [esi+0x468]
	mov ecx,dword ptr [esi+0x47C]
	push eax
	call CUserPreview::SetPet

 Block9:
	pop esi
	ret 0xC
}
}
// CITCWnd_SALE::CITCWnd_SALE
_SUB_EXCEPTION_HANDLER(171FF0)
__SUB_CLASS_THIS0(00171FF0, __thiscall, 84047,  CITCWnd_SALE, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_171FF0
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
	call CWnd::_ctor_default
	xor edi,edi
	lea eax,[esi+0x80]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0x80]
	mov dword ptr [TSingleton<CITCWnd_SALE>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CITCWnd_SALE>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CITCWnd_SALE::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CITCWnd_SALE::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CITCWnd_SALE::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],edi
	mov dword ptr [esi+0x8C],edi
	lea ecx,[esi+0x90]
	mov byte ptr [esp+0x18],3
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xAD8],edi
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
// CITCWnd_SALE::OnMouseEnter
__SUB_CLASS_THIS(0017FE80, __thiscall, 84055,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::OnMouseEnter
	lea ecx,[esi+0x8C]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 4
}
}
// CITCWnd_PURCHASE::Draw
_SUB_EXCEPTION_HANDLER(181230)
__SUB_CLASS_THIS(00181230, __thiscall, 84093,  CITCWnd_PURCHASE, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_181230
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
	mov ebx,ecx
	mov dword ptr [esp+0x14],ebx
	lea eax,[esp+0x1C]
	push eax
	call CWnd::GetCanvas
	mov edi,dword ptr [ebx+0xAD8]
	mov esi,dword ptr [esp+0x1C]
	add edi,0x4C
	mov dword ptr [esp+0x44],0
	mov dword ptr [esp+0x20],edi
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push 0x49
	push 0xD3
	push 0x1D
	push 0x11
	push esi
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov ecx,dword ptr [ebx+0xAD4]
	test ecx,ecx
	jl Block8

 Block5:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block7

 Block6:
	mov eax,dword ptr [eax-4]

 Block7:
	cmp ecx,eax
	jb Block9

 Block8:
	mov dword ptr [ebx+0xAD4],0xFFFFFFFF

 Block9:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block11

 Block10:
	cmp dword ptr [eax-4],0
	jne Block12

 Block11:
	mov ebx,dword ptr [ebx+0x84]
	push 0
	mov ecx,ebx
	call CCtrlScrollBar::SetScrollRange
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call ecx
	jmp Block36

 Block12:
	mov ecx,ebx
	call CITCWnd_PURCHASE::ResetScrollBar
	mov eax,dword ptr [ebx+0x84]
	mov ebp,dword ptr [eax+0x38]
	mov eax,dword ptr [eax+0x38]
	lea ebp,[ebp+ebp*2]
	lea edx,[eax+eax*2+6]
	add ebp,ebp
	add edx,edx
	cmp ebp,edx
	jge Block35

 Block13:
	jmp Block15

 Block14:
	mov edi,dword ptr [esp+0x20]

 Block15:
	mov ecx,edi
	call ZArray<ZRef<ITCITEM>>::GetCount
	cmp ebp,eax
	jae Block35

 Block16:
	mov eax,dword ptr [edi]
	lea eax,[eax+ebp*8]
	mov dword ptr [esp+0x24],eax
	mov eax,dword ptr [eax+4]
	mov eax,dword ptr [eax+0x18]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push ebp
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,ebx
	mov dword ptr [esp+0x20],eax
	call CITCWnd_PURCHASE::GetWndPurchaseRect
	mov edx,dword ptr [esp+0x38]
	mov edi,dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x18]
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push edx
	push edi
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x54],esp
	push esi
	call edx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	cmp ebp,dword ptr [ebx+0xAD4]
	jne Block28

 Block17:
	mov ebx,dword ptr [esp+0x30]
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x8C]
	push 0x401030CC
	push 0x20
	push 0x20
	push ebx
	push edi
	push esi
	call ecx
	test eax,eax
	jge Block19

 Block18:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block19:
	mov edx,dword ptr [esi]
	push 0xAA1030CC
	push 2
	push 0x20
	lea eax,[ebx-1]
	push eax
	mov eax,dword ptr [edx+0x8C]
	push edi
	push esi
	call eax
	test eax,eax
	jge Block21

 Block20:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block21:
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xAA1030CC
	push 2
	push 0x20
	dec eax
	push eax
	push edi
	push esi
	call edx
	test eax,eax
	jge Block23

 Block22:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block23:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xAA1030CC
	push 0x20
	push 2
	push ebx
	lea eax,[edi-1]
	push eax
	push esi
	call edx
	test eax,eax
	jge Block25

 Block24:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xAA1030CC
	push 0x20
	push 2
	push ebx
	dec eax
	push eax
	push esi
	call edx
	test eax,eax
	jge Block27

 Block26:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	mov ebx,dword ptr [esp+0x14]

 Block28:
	mov eax,0x431BDE83
	imul dword ptr [esp+0x18]
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,2
	je Block31

 Block29:
	cmp eax,3
	je Block31

 Block30:
	cmp eax,4
	jne Block34

 Block31:
	mov eax,dword ptr [esp+0x24]
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x18]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	push 0
	push ecx
	mov dword ptr [esp+0x2C],eax
	mov eax,dword ptr [ebx+0xAD0]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block33:
	mov eax,dword ptr [esp+0x2C]
	mov ecx,dword ptr [esp+0x40]
	push eax
	add ecx,0xFFFFFFF4
	push ecx
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x40],esp
	push esi
	call eax
	call draw_number_by_image
	add esp,0x18

 Block34:
	mov eax,dword ptr [ebx+0x84]
	mov eax,dword ptr [eax+0x38]
	lea ecx,[eax+eax*2+6]
	inc ebp
	add ecx,ecx
	cmp ebp,ecx
	jl Block14

 Block35:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call eax

 Block36:
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
// CITCWnd_SALE::GetWndSaleRect
__SUB_CLASS_THIS(001800A0, __thiscall, 84061,  CITCWnd_SALE, tagRECT*, tagRECT*, long) {
__asm {

 Block0:
	mov edx,dword ptr [esp+8]
	push esi
	mov esi,dword ptr [esp+8]
	mov dword ptr [esi],0
	mov dword ptr [esi+4],0
	mov dword ptr [esi+8],0
	mov dword ptr [esi+0xC],0
	test edx,edx
	jl Block5

 Block1:
	mov eax,dword ptr [ecx+0xAE0]
	add eax,0x48
	mov eax,dword ptr [eax]
	test eax,eax
	je Block5

 Block2:
	cmp edx,dword ptr [eax-4]
	jae Block5

 Block3:
	mov eax,dword ptr [ecx+0x8C]
	mov eax,dword ptr [eax+0x38]
	lea ecx,[eax*4]
	sub ecx,eax
	neg ecx
	lea ecx,[edx+ecx*2]
	cmp ecx,0xB
	ja Block5

 Block4:
	mov eax,0x2AAAAAAB
	imul ecx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+eax*2]
	add edx,edx
	sub ecx,edx
	imul ecx,0x23
	inc eax
	imul eax,0x23
	add ecx,0x13
	mov dword ptr [esi],ecx
	add ecx,0x20
	mov dword ptr [esi+4],eax
	add eax,0x20
	mov dword ptr [esi+8],ecx
	mov dword ptr [esi+0xC],eax

 Block5:
	mov eax,esi
	pop esi
	ret 8
}
}
// CITCWnd_Inventory::OnButtonClicked
__SUB_CLASS_THIS(00180700, __thiscall, 84131,  CITCWnd_Inventory, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub esp,0x10
	sub eax,0x3EA
	push ebx
	mov ebx,ecx
	je Block3

 Block1:
	sub eax,1
	jne Block16

 Block2:
	mov dword ptr [esp+0x18],1
	jmp Block4

 Block3:
	mov dword ptr [esp+0x18],0

 Block4:
	cmp dword ptr [ebx+0xAEC],0
	jl Block16

 Block5:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebp
	push esi
	lea eax,[esp+0x14]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block10

 Block6:
	push edi
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block9

 Block7:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block9

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block9:
	mov dword ptr [esp+0x1C],0
	pop edi

 Block10:
	mov ecx,dword ptr [ebx+0xAEC]
	mov edx,dword ptr [ebx+0xAE8]
	push ecx
	push edx
	lea eax,[esp+0x14]
	push eax
	mov ecx,ebp
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block15

 Block11:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block12:
	mov ecx,dword ptr [esp+0x10]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x10]
	test ecx,ecx
	je Block14

 Block13:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block14:
	mov dword ptr [esp+0x10],0

 Block15:
	mov ecx,dword ptr [ebx+0xAEC]
	mov edx,dword ptr [ebx+0xAE8]
	mov eax,dword ptr [esp+0x20]
	push esi
	push ecx
	mov ecx,dword ptr [ebx+0xAF0]
	push edx
	push eax
	call CITC::OnRegisterSaleEntry
	pop esi
	pop ebp

 Block16:
	pop ebx
	add esp,0x10
	ret 4
}
}
// CITCWnd_Char::OnChildNotify
__SUB_CLASS_THIS(0017FE00, __thiscall, 83952,  CITCWnd_Char, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+8],0x64
	jne Block2

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [eax+0x20]
	push edx
	call eax

 Block2:
	ret 0xC
}
}
// CITCWnd_Inventory::CITCWnd_Inventory
_SUB_EXCEPTION_HANDLER(172360)
__SUB_CLASS_THIS0(00172360, __thiscall, 84124,  CITCWnd_Inventory, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_172360
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
	call CWnd::_ctor_default
	xor edi,edi
	lea eax,[esi+0x80]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0x80]
	mov dword ptr [TSingleton<CITCWnd_Inventory>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CITCWnd_Inventory>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CITCWnd_Inventory::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CITCWnd_Inventory::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CITCWnd_Inventory::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],edi
	mov dword ptr [esi+0x8C],edi
	mov dword ptr [esi+0x94],edi
	lea ecx,[esi+0x98]
	mov byte ptr [esp+0x18],4
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xAE0],edi
	mov dword ptr [esi+0xAE8],1
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
// CITCWnd_PURCHASE::OnMouseEnter
__SUB_CLASS_THIS(0017FF00, __thiscall, 84092,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CWnd::OnMouseEnter
	lea ecx,[esi+0x84]
	call CUIToolTip::ClearToolTip
	pop esi
	ret 4
}
}
// CITCWnd_SALE::GetWndSaleIndex
__SUB_CLASS_THIS(00180130, __thiscall, 84060,  CITCWnd_SALE, long, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,dword ptr [esp+0x18]
	push ebp
	mov ebp,dword ptr [esp+0x20]
	push esi
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0x8C]
	mov eax,dword ptr [eax+0x38]
	lea esi,[eax+eax*2]
	lea ecx,[eax+eax*2+6]
	add esi,esi
	add ecx,ecx
	cmp esi,ecx
	jge Block4

 Block1:
	lea esp,[esp]

 Block2:
	push esi
	lea edx,[esp+0x14]
	push edx
	mov ecx,edi
	call CITCWnd_SALE::GetWndSaleRect
	push ebp
	push ebx
	lea eax,[esp+0x18]
	push eax
	call PtInRect
	test eax,eax
	jne Block5

 Block3:
	mov ecx,dword ptr [edi+0x8C]
	mov eax,dword ptr [ecx+0x38]
	add eax,2
	lea edx,[eax+eax*2]
	inc esi
	add edx,edx
	cmp esi,edx
	jl Block2

 Block4:
	pop edi
	pop esi
	pop ebp
	or eax,0xFFFFFFFF
	pop ebx
	add esp,0x10
	ret 8

 Block5:
	pop edi
	mov eax,esi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8
}
}
// CITCWnd_Char::GetWeaponItemID
__SUB_CLASS_THIS(001804E0, __thiscall, 83957,  CITCWnd_Char, long, long, long&) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push ebp
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x2E0]
	mov eax,0x14F8B589
	imul ecx
	sar edx,0xD
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	push edi
	cmp eax,0x11
	je Block2

 Block1:
	pop edi
	pop esi
	pop ebp
	mov eax,ecx
	pop ebx
	add esp,8
	ret 8

 Block2:
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetEquipItem
	test eax,eax
	je Block13

 Block3:
	mov ebx,dword ptr [eax+0x1E0]
	mov ebp,dword ptr [esp+0x1C]
	xor edi,edi
	xor esi,esi

 Block4:
	mov eax,1
	mov ecx,esi
	shl eax,cl
	test eax,ebx
	je Block6

 Block5:
	push eax
	call get_substitute_weaponid
	add esp,4
	mov edi,eax
	cmp dword ptr [esi*4+_D_G_ANWEAPONTYPE],ebp
	je Block8

 Block6:
	inc esi
	cmp esi,0x20
	jl Block4

 Block7:
	mov eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 8

 Block8:
	push edi
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CActionMan>::ms_pInstance]
	call CActionMan::GetCharacterImgEntry
	mov edx,dword ptr [eax+4]
	mov eax,dword ptr [edx+0x2C]
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [ecx],eax
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block12

 Block9:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block12

 Block10:
	mov edx,dword ptr [esp+0x14]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block12

 Block11:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block12:
	mov eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 8

 Block13:
	mov eax,dword ptr [esi+0xC5]
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 8
}
}
// CITCWnd_SALE::OnButtonClicked
__SUB_CLASS_THIS(00180050, __thiscall, 84052,  CITCWnd_SALE, void, uint32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x3E8
	push esi
	mov esi,ecx
	jne Block7

 Block1:
	mov edx,dword ptr [esi+0xADC]
	test edx,edx
	jl Block6

 Block2:
	mov eax,dword ptr [esi+0xAE0]
	add eax,0x48
	mov eax,dword ptr [eax]
	test eax,eax
	je Block4

 Block3:
	mov eax,dword ptr [eax-4]

 Block4:
	cmp edx,eax
	jae Block6

 Block5:
	mov ecx,dword ptr [esi+0xAE0]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[eax+edx*8]
	push edx
	call CITC::OnCancelSaleItem

 Block6:
	lea ecx,[esi+0x90]
	call CUIToolTip::ClearToolTip

 Block7:
	pop esi
	ret 4
}
}
// CITCWnd_Inventory::SetSelectedNo
__SUB_CLASS_THIS(001808F0, __thiscall, 84139,  CITCWnd_Inventory, void, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	push esi
	push edi
	lea eax,[esp+0x18]
	mov edi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block5

 Block1:
	lea esi,[eax-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
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
	mov dword ptr [esp+0x1C],0

 Block5:
	mov esi,dword ptr [esp+0x24]
	mov dword ptr [edi+0xAEC],0xFFFFFFFF
	test esi,esi
	jl Block15

 Block6:
	mov eax,dword ptr [edi+0xAE8]
	mov ecx,dword ptr [ebp+eax*4+0x501]
	test ecx,ecx
	je Block8

 Block7:
	mov ecx,dword ptr [ecx-4]

 Block8:
	dec ecx
	cmp esi,ecx
	jge Block15

 Block9:
	push esi
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,ebp
	call CharacterData::GetItem
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block13

 Block10:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	mov edx,dword ptr [esp+0x14]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x14]
	test ecx,ecx
	je Block13

 Block12:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block13:
	test ebx,ebx
	je Block15

 Block14:
	mov dword ptr [edi+0xAEC],esi

 Block15:
	mov eax,dword ptr [edi+0xAEC]
	cmp eax,0xFFFFFFFF
	je Block22

 Block16:
	mov ecx,dword ptr [edi+0x8C]
	mov esi,dword ptr [ecx+0x38]
	lea ecx,[eax-1]
	mov eax,0x2AAAAAAB
	imul ecx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,esi
	jge Block18

 Block17:
	mov esi,eax
	jmp Block20

 Block18:
	lea edx,[esi+3]
	cmp eax,edx
	jl Block20

 Block19:
	lea esi,[eax-2]

 Block20:
	mov eax,dword ptr [edi+0xAE8]
	cmp esi,dword ptr [eax*4+CITCWnd_Inventory::ms_anItemScrollPos]
	je Block22

 Block21:
	mov dword ptr [eax*4+CITCWnd_Inventory::ms_anItemScrollPos],esi
	mov ecx,dword ptr [edi+0x8C]
	push esi
	call CCtrlScrollBar::SetCurPos
	lea eax,[esi+esi*2]
	lea ecx,[eax+eax+1]
	mov dword ptr [edi+0xAE4],ecx

 Block22:
	push 0
	mov ecx,edi
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 4
}
}
// CITCWnd_Inventory::OnDestroy
__SUB_CLASS_THIS0(0017FF20, __thiscall, 84126,  CITCWnd_Inventory, void) {
__asm {

 Block0:
	add ecx,0x98
	jmp  CUIToolTip::ClearToolTip
}
}
// CITCWnd_Inventory::GetSlotPositionFromPoint
__SUB_CLASS_THIS(00181910, __thiscall, 84136,  CITCWnd_Inventory, long, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	push esi
	push edi
	lea eax,[esp+0x10]
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block5

 Block1:
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block4

 Block3:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block4:
	mov dword ptr [esp+0x14],0

 Block5:
	mov ecx,dword ptr [esi+0xAE8]
	mov ebx,dword ptr [esp+0x24]
	lea eax,[ebp+ecx*4+0x501]
	mov eax,dword ptr [eax]
	test eax,eax
	je Block7

 Block6:
	mov eax,dword ptr [eax-4]

 Block7:
	mov edi,dword ptr [esi+0xAE4]
	mov ebp,eax

 Block8:
	mov eax,dword ptr [esi+0xAE4]
	add eax,0x12
	cmp eax,ebp
	jl Block10

 Block9:
	mov eax,ebp

 Block10:
	cmp edi,eax
	jge Block14

 Block11:
	lea edx,[esp+0x10]
	push edx
	push edi
	mov ecx,esi
	call CITCWnd_Inventory::GetItemSlotRect
	mov eax,dword ptr [esp+0x28]
	push eax
	push ebx
	lea eax,[esp+0x18]
	push eax
	call PtInRect
	test eax,eax
	jne Block13

 Block12:
	inc edi
	jmp Block8

 Block13:
	mov eax,edi
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10
	ret 8

 Block14:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 8
}
}
// CITCWnd_PURCHASE::OnDestroy
__SUB_CLASS_THIS0(0017FEA0, __thiscall, 84087,  CITCWnd_PURCHASE, void) {
__asm {

 Block0:
	add ecx,0x88
	jmp  CUIToolTip::ClearToolTip
}
}
// CITCWnd_Char::OnDestroy
__SUB_CLASS_THIS0(001805E0, __thiscall, 83950,  CITCWnd_Char, void) {
__asm {

 Block0:
	push ebx
	mov ebx,ecx
	mov eax,dword ptr [ebx+0x474]
	push esi
	test eax,eax
	je Block5

 Block1:
	push edi
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
	mov dword ptr [ebx+0x474],0
	pop edi

 Block5:
	cmp dword ptr [ebx+0x47C],0
	lea esi,[ebx+0x478]
	je Block7

 Block6:
	push 0
	mov ecx,esi
	call ZRef<CUserPreview>::_ReleaseRaw
	mov dword ptr [esi+4],0

 Block7:
	pop esi
	pop ebx
	ret
}
}
// CITCWnd_Inventory::GetItemSlotRect
__SUB_CLASS_THIS(00180A40, __thiscall, 84140,  CITCWnd_Inventory, int32_t, long, tagRECT*) {
__asm {

 Block0:
	sub esp,8
	push ebp
	push edi
	lea eax,[esp+8]
	mov edi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block5

 Block1:
	push ebx
	push esi
	lea esi,[eax-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
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
	pop esi
	mov dword ptr [esp+0x10],0
	pop ebx

 Block5:
	mov ecx,dword ptr [edi+0xAE8]
	lea eax,[ebp+ecx*4+0x501]
	mov eax,dword ptr [eax]
	test eax,eax
	jne Block7

 Block6:
	xor edx,edx
	jmp Block8

 Block7:
	mov edx,dword ptr [eax-4]

 Block8:
	mov ecx,dword ptr [edi+0xAE4]
	mov eax,dword ptr [esp+0x14]
	cmp eax,ecx
	jl Block13

 Block9:
	add ecx,0x12
	cmp ecx,edx
	jl Block11

 Block10:
	mov ecx,edx

 Block11:
	cmp eax,ecx
	jge Block13

 Block12:
	sub eax,dword ptr [edi+0xAE4]
	mov ecx,6
	cdq
	idiv ecx
	imul eax,0x23
	mov ecx,edx
	imul ecx,0x23
	lea edx,[eax+0x5B]
	push edx
	lea edx,[ecx+0x33]
	push edx
	add eax,0x3B
	push eax
	mov eax,dword ptr [esp+0x24]
	add ecx,0x13
	push ecx
	push eax
	call SetRect
	pop edi
	mov eax,1
	pop ebp
	add esp,8
	ret 8

 Block13:
	mov ecx,dword ptr [esp+0x18]
	push ecx
	call SetRectEmpty
	pop edi
	xor eax,eax
	pop ebp
	add esp,8
	ret 8
}
}
// CITCWnd_SALE::OnSetFocus
__SUB_CLASS_THIS(00172090, __thiscall, 84057,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CITCWnd_SALE::ResetScrollBar
__SUB_CLASS_THIS0(001801B0, __thiscall, 84049,  CITCWnd_SALE, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xAE0]
	add eax,0x48
	mov eax,dword ptr [eax]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	mov ecx,dword ptr [ecx+0x8C]
	lea edx,[eax+5]
	mov eax,0xAAAAAAAB
	mul edx
	shr edx,2
	dec edx
	push edx
	call CCtrlScrollBar::SetScrollRange
	ret
}
}
// CITCWnd_Char::OnDefaultAvatar
__SUB_CLASS_THIS0(001837D0, __thiscall, 83950,  CITCWnd_Char, void) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,ecx
	push 0x1E0
	lea edi,[esi+0x288]
	push 0
	push edi
	call _memset
	add esp,0xC
	mov eax,edi
	lea ecx,[esi+0x99]
	mov edx,0x3C

 Block1:
	mov edi,dword ptr [ecx]
	mov dword ptr [eax],edi
	add eax,8
	add ecx,4
	sub edx,1
	jne Block1

 Block2:
	mov ecx,esi
	call CITCWnd_Char::InitRing
	mov ecx,esi
	call CITCWnd_Char::InitPet
	push 0
	mov ecx,esi
	call CITCWnd_Char::SetActiveEffectItem
	mov ecx,dword ptr [esi+0x47C]
	lea eax,[esi+0x80]
	push eax
	add ecx,0x88
	call CAvatar::SetAvatarLook
	mov ecx,dword ptr [esi+0x47C]
	call CUserPreview::InitObjects
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 0
	call CWndMan::SetFocus
	pop edi
	pop esi
	ret
}
}
// CITCWnd_Char::SetActiveEffectItem
__SUB_CLASS_THIS(0017FF90, __thiscall, 83958,  CITCWnd_Char, void, long) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0x47C]
	mov eax,dword ptr [esp+4]
	cmp dword ptr [ecx+0x39BC],eax
	jne Block2

 Block1:
	xor eax,eax

 Block2:
	mov dword ptr [esp+4],eax
	jmp  CUser::SetActiveEffectItem
}
}
// CITCWnd_SALE::OnCreate
_SUB_EXCEPTION_HANDLER(182710)
__SUB_CLASS_THIS(00182710, __thiscall, 84050,  CITCWnd_SALE, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_182710
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
	mov eax,dword ptr [esp+0x64]
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esi+0xAE0],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x64],eax
	xor ebp,ebp
	mov dword ptr [esp+0x5C],ebp
	cmp eax,ebp
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp eax,ebp
	je Block11

 Block4:
	add eax,8
	cmp eax,ebp
	je Block11

 Block5:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block7

 Block6:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [esi+0x8C]
	mov dword ptr [esi+0x8C],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block9

 Block8:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esi+0x8C]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push ebp
	push 0x43
	push 0x23
	push 0xE4
	push ebp
	push 1
	push 0x3E9
	push esi
	call eax
	mov eax,dword ptr [esi+0x8C]
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x24]
	push ecx
	mov dword ptr [eax+0x34],0xD0
	call edi
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block12

 Block10:
	push eax
	call _com_issue_error

 Block11:
	xor edi,edi
	jmp Block7

 Block12:
	lea eax,[esp+0x14]
	push eax
	mov dword ptr [esp+0x60],1
	call edi
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	push ebp
	push ebp
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x20]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x78],esp
	push 0x50E
	mov bl,2
	push ecx
	mov byte ptr [esp+0x78],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x70],3
	cmp dword ptr [_D_G_RM],ebp
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea edx,[esp+0x58]
	mov byte ptr [esp+0x70],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x64],4
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xAD8]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebp
	jge Block19

 Block17:
	cmp eax,0x80004002
	je Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	mov edi,8
	mov byte ptr [esp+0x5C],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x44],di
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	cmp eax,ebp
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[esp+0x44]
	push ecx
	call ebx

 Block23:
	mov byte ptr [esp+0x5C],1
	cmp word ptr [esp+0x14],di
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	cmp eax,ebp
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[esp+0x14]
	push eax
	call ebx

 Block27:
	mov dword ptr [esp+0x5C],0xFFFFFFFF
	cmp word ptr [esp+0x24],di
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,ebp
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x24]
	push edx
	call ebx

 Block31:
	mov dword ptr [esp+0x40],ebp
	mov dword ptr [esp+0x34],1
	mov dword ptr [esp+0x38],ebp
	mov dword ptr [esp+0x3C],ebp
	lea eax,[esp+0x64]
	push 0x1286
	mov ebx,5
	push eax
	mov dword ptr [esp+0x64],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x44]
	mov byte ptr [esp+0x60],6
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0x5C],bl
	cmp eax,ebp
	je Block33

 Block32:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block33:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x64],eax
	mov byte ptr [esp+0x5C],7
	cmp eax,ebp
	je Block35

 Block34:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block36

 Block35:
	xor eax,eax

 Block36:
	mov byte ptr [esp+0x5C],bl
	cmp eax,ebp
	je Block45

 Block37:
	add eax,8
	cmp eax,ebp
	je Block45

 Block38:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block40

 Block39:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block40:
	mov eax,dword ptr [esi+0x84]
	mov dword ptr [esi+0x84],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block42

 Block41:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block42:
	mov ecx,dword ptr [esi+0x84]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x34]
	push eax
	push ebp
	push 9
	push 0x9F
	push 0x3E8
	push esi
	call edx
	or eax,0xFFFFFFFF
	mov dword ptr [esi+0xADC],eax
	mov dword ptr [esp+0x5C],eax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block44:
	mov ecx,dword ptr [esp+0x54]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x4C
	ret 4

 Block45:
	xor edi,edi
	jmp Block40
}
}
// CITCWnd_Char::Draw
_SUB_EXCEPTION_HANDLER(182090)
__SUB_CLASS_THIS(00182090, __thiscall, 83953,  CITCWnd_Char, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_182090
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
	mov eax,dword ptr [esp+0x70]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	xor ebx,ebx
	mov dword ptr [esp+0x68],ebx
	mov dword ptr [esp+0x20],ebx
	lea edx,[esp+0x70]
	push 1
	push edx
	mov byte ptr [esp+0x70],1
	call get_basic_font
	lea eax,[esp+0x24]
	push 0x38
	push eax
	mov byte ptr [esp+0x78],2
	call get_basic_font
	add esp,0x10
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x6C],3
	mov dword ptr [esp+0x1C],ecx
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebx
	je Block4

 Block1:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp edi,ebx
	je Block4

 Block3:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block4:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x50]
	push eax
	call edi
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x6C],4
	call edi
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0x6C],5
	call edi
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
	mov edx,dword ptr [esp+0x70]
	lea eax,[esp+0x50]
	push eax
	mov eax,dword ptr [esi+0x484]
	mov eax,dword ptr [eax+0x40]
	lea ecx,[esp+0x44]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x7C],6
	call _xbstr_t::_ctor_0
	mov edx,dword ptr [esi+0x484]
	mov eax,dword ptr [edx+0x40]
	push 0x97
	lea ecx,[esp+0x44]
	push ecx
	push ecx
	mov dword ptr [esp+0x44],esp
	mov ecx,esp
	mov bl,7
	push eax
	mov byte ptr [esp+0x88],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x8C]
	mov byte ptr [esp+0x84],8
	test ecx,ecx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov byte ptr [esp+0x84],bl
	call IWzFont::CalcTextWidth
	mov ebp,dword ptr [esp+0x28]
	test ebp,ebp
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov ecx,0xE1
	sub ecx,eax
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x80],6
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x68],5
	cmp word ptr [esp+0x30],si
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
	mov byte ptr [esp+0x68],4
	cmp word ptr [esp+0x40],si
	jne Block21

 Block19:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov byte ptr [esp+0x68],3
	cmp word ptr [esp+0x50],si
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	lea edx,[esp+0x30]
	push edx
	call edi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0x6C],9
	call edi
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	lea eax,[esp+0x50]
	push eax
	mov byte ptr [esp+0x6C],0xA
	call edi
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block32

 Block31:
	push eax
	call _com_issue_error

 Block32:
	mov esi,dword ptr [esp+0x18]
	mov ecx,dword ptr [esp+0x70]
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x44]
	push eax
	mov eax,dword ptr [esi+0x20CC]
	mov byte ptr [esp+0x70],0xB
	push ecx
	test eax,eax
	je Block34

 Block33:
	add eax,4
	jmp Block35

 Block34:
	xor eax,eax

 Block35:
	push ecx
	mov dword ptr [esp+0x38],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esi+0x20CC]
	mov bl,0xC
	push 0xAA
	lea edx,[esp+0x64]
	mov byte ptr [esp+0x7C],bl
	push edx
	test eax,eax
	je Block37

 Block36:
	add eax,4
	jmp Block38

 Block37:
	xor eax,eax

 Block38:
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x8C]
	mov byte ptr [esp+0x84],0xD
	test ecx,ecx
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	mov byte ptr [esp+0x84],bl
	call IWzFont::CalcTextWidth
	mov ecx,0xE1
	sub ecx,eax
	push ecx
	mov ecx,ebp
	mov byte ptr [esp+0x80],0xB
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [esp+0x68],0xA
	cmp word ptr [esp+0x50],si
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea eax,[esp+0x50]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov byte ptr [esp+0x68],9
	cmp word ptr [esp+0x40],si
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
	mov byte ptr [esp+0x68],3
	cmp word ptr [esp+0x30],si
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x68],2
	test eax,eax
	je Block54

 Block53:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block54:
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0x68],1
	test eax,eax
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block56:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov dword ptr [esp+0x6C],0xFFFFFFFF
	call ecx
	mov ecx,dword ptr [esp+0x60]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x58
	ret 4
}
}
// CITCWnd_PURCHASE::OnCreate
_SUB_EXCEPTION_HANDLER(182A70)
__SUB_CLASS_THIS(00182A70, __thiscall, 84088,  CITCWnd_PURCHASE, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_182A70
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
	mov esi,ecx
	mov eax,dword ptr [esp+0x50]
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esi+0xAD8],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x50],eax
	mov dword ptr [esp+0x48],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test eax,eax
	je Block11

 Block4:
	add eax,8
	je Block11

 Block5:
	lea edi,[eax-8]
	test edi,edi
	je Block7

 Block6:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [esi+0x84]
	mov dword ptr [esi+0x84],edi
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block9

 Block8:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esi+0x84]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0x43
	push 0x21
	push 0xE4
	push 0
	push 1
	push 0x3E8
	push esi
	call eax
	mov eax,dword ptr [esi+0x84]
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x20]
	push ecx
	mov dword ptr [eax+0x34],0xD0
	call edi
	lea edx,[esp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block12

 Block10:
	push eax
	call _com_issue_error

 Block11:
	xor edi,edi
	jmp Block7

 Block12:
	lea eax,[esp+0x10]
	push eax
	mov dword ptr [esp+0x4C],1
	call edi
	lea ecx,[esp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	push 0
	push 0
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x64],esp
	push 0x50E
	mov bl,2
	push ecx
	mov byte ptr [esp+0x64],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x5C],3
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea edx,[esp+0x44]
	mov byte ptr [esp+0x5C],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x50],4
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xAD0]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block19

 Block17:
	cmp eax,0x80004002
	je Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	mov edi,8
	mov byte ptr [esp+0x48],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x30],di
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[esp+0x30]
	push ecx
	call ebx

 Block23:
	mov byte ptr [esp+0x48],1
	cmp word ptr [esp+0x10],di
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x18]
	xor edx,edx
	mov word ptr [esp+0x10],dx
	test eax,eax
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[esp+0x10]
	push eax
	call ebx

 Block27:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	cmp word ptr [esp+0x20],di
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x20]
	push edx
	call ebx

 Block31:
	mov dword ptr [esi+0xAD4],0xFFFFFFFF
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x3C
	ret 4
}
}
// CITCWnd_PURCHASE::ClearToolTip
__SUB_CLASS_THIS0(00172260, __thiscall, 84095,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0x84
	jmp  CUIToolTip::ClearToolTip
}
}
// CITCWnd_Char::OnMouseButton
__SUB_CLASS_THIS(001803D0, __thiscall, 83955,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	ret 0x10
}
}
// CITCWnd_PURCHASE::OnSetFocus
__SUB_CLASS_THIS(00172250, __thiscall, 84094,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CITCWnd_PURCHASE::ResetScrollBar
__SUB_CLASS_THIS0(001802F0, __thiscall, 84087,  CITCWnd_PURCHASE, void) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xAD8]
	add eax,0x4C
	mov eax,dword ptr [eax]
	test eax,eax
	je Block2

 Block1:
	mov eax,dword ptr [eax-4]

 Block2:
	mov ecx,dword ptr [ecx+0x84]
	lea edx,[eax+5]
	mov eax,0xAAAAAAAB
	mul edx
	shr edx,2
	dec edx
	push edx
	call CCtrlScrollBar::SetScrollRange
	ret
}
}
// CITCWnd_Char::InitRing
__SUB_CLASS_THIS0(00183780, __thiscall, 83950,  CITCWnd_Char, void) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	mov dword ptr [edi+0x300],0
	mov dword ptr [edi+0x308],0
	mov esi,offset _D_G_ANRINGBODYPART
	lea ecx,[ecx]

 Block1:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [edi+eax*4+0x99]
	push 0
	push 0
	push ecx
	mov ecx,edi
	call CITCWnd_Char::SetRing
	add esi,4
	cmp esi,offset _D_G_ANPETABILBODYP
	jl Block1

 Block2:
	pop edi
	pop esi
	ret
}
}
// CITCWnd_Char::OnCreate
_SUB_EXCEPTION_HANDLER(183850)
__SUB_CLASS_THIS(00183850, __thiscall, 83951,  CITCWnd_Char, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_183850
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x100
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x114]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x18],ebx
	mov eax,dword ptr [esp+0x124]
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x50]
	push ecx
	mov dword ptr [ebx+0x484],eax
	call ebp
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	xor edi,edi
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[esp+0x80]
	push eax
	mov dword ptr [esp+0x120],edi
	call ebp
	lea ecx,[esp+0x80]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push edi
	push edi
	lea edx,[esp+0x58]
	push edx
	lea eax,[esp+0x8C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1285
	push ecx
	mov byte ptr [esp+0x138],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x130],2
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea edx,[esp+0xD4]
	mov byte ptr [esp+0x130],1
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x124],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x40]
	mov dword ptr [esp+0x40],edi
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov esi,8
	mov byte ptr [esp+0x11C],5
	cmp word ptr [esp+0xC0],si
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0xC0],ax
	mov eax,dword ptr [esp+0xC8]
	cmp eax,edi
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0xC0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0x11C],6
	cmp word ptr [esp+0x80],si
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x88]
	xor edx,edx
	mov word ptr [esp+0x80],dx
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[esp+0x80]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov byte ptr [esp+0x11C],7
	cmp word ptr [esp+0x50],si
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea eax,[esp+0x40]
	push eax
	call ebp
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	mov eax,dword ptr [esp+0x3C]
	mov edx,0xD
	mov byte ptr [esp+0x11C],8
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],eax
	cmp eax,edi
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block25:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x11C],9
	cmp ecx,edi
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[esp+0x40]
	push eax
	lea edx,[esp+0x20]
	push edx
	push 0xC0000000
	push 0x6D
	push 0xD5
	push 0x22
	push 0x17
	lea eax,[esp+0x30]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0x480]
	cmp esi,eax
	je Block32

 Block28:
	mov dword ptr [ebx+0x480],eax
	cmp eax,edi
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block30:
	cmp esi,edi
	je Block32

 Block31:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block32:
	mov eax,dword ptr [esp+0x14]
	cmp eax,edi
	je Block34

 Block33:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block34:
	mov esi,8
	mov byte ptr [esp+0x11C],8
	cmp word ptr [esp+0x1C],si
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,edi
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov byte ptr [esp+0x11C],7
	cmp word ptr [esp+0x40],si
	jne Block41

 Block39:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,edi
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov ecx,dword ptr [esp+0x18]
	lea edx,[esp+0x14]
	push edx
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0xA
	mov ecx,0xD
	mov byte ptr [esp+0x11C],bl
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	cmp eax,edi
	je Block44

 Block43:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block44:
	mov ecx,dword ptr [esp+0x18]
	mov esi,dword ptr [ecx+0x480]
	mov byte ptr [esp+0x11C],0xB
	cmp esi,edi
	jne Block46

 Block45:
	push 0x80004003
	call _com_issue_error

 Block46:
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x64]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x38]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,edi
	jge Block48

 Block47:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block48:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x11C],bl
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,edi
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x11C],7
	cmp eax,edi
	je Block54

 Block53:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block54:
	mov ecx,dword ptr [esp+0x18]
	mov esi,dword ptr [ecx+0x480]
	cmp esi,edi
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	cmp eax,edi
	jge Block58

 Block57:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block58:
	lea ecx,[esp+0xB0]
	push ecx
	call ebp
	lea edx,[esp+0xB0]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block60

 Block59:
	push eax
	call _com_issue_error

 Block60:
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x120],0xC
	call ebp
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	push edi
	push edi
	lea edx,[esp+0xB8]
	push edx
	lea eax,[esp+0x4C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1283
	push ecx
	mov byte ptr [esp+0x138],0xD
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x130],0xE
	cmp dword ptr [_D_G_RM],edi
	jne Block64

 Block63:
	push 0x80004003
	call _com_issue_error

 Block64:
	lea edx,[esp+0xF4]
	mov byte ptr [esp+0x130],0xD
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x124],0xF
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block67

 Block65:
	cmp eax,0x80004002
	je Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	mov esi,8
	mov byte ptr [esp+0x11C],0x11
	cmp word ptr [esp+0xE0],si
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [esp+0xE0],ax
	mov eax,dword ptr [esp+0xE8]
	cmp eax,edi
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea ecx,[esp+0xE0]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	mov byte ptr [esp+0x11C],0x12
	cmp word ptr [esp+0x40],si
	jne Block74

 Block72:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	cmp eax,edi
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov byte ptr [esp+0x11C],0x13
	cmp word ptr [esp+0xB0],si
	jne Block78

 Block76:
	mov eax,dword ptr [esp+0xB8]
	xor ecx,ecx
	mov word ptr [esp+0xB0],cx
	cmp eax,edi
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea edx,[esp+0xB0]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	lea eax,[esp+0x90]
	push eax
	call ebp
	lea ecx,[esp+0x90]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block81

 Block80:
	push eax
	call _com_issue_error

 Block81:
	lea edx,[esp+0xA0]
	push edx
	mov byte ptr [esp+0x120],0x14
	call ebp
	lea eax,[esp+0xA0]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block83

 Block82:
	push eax
	call _com_issue_error

 Block83:
	push edi
	push edi
	lea ecx,[esp+0x98]
	push ecx
	lea edx,[esp+0xAC]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push 0x1284
	mov bl,0x15
	push eax
	mov byte ptr [esp+0x138],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x130],0x16
	cmp dword ptr [_D_G_RM],edi
	jne Block85

 Block84:
	push 0x80004003
	call _com_issue_error

 Block85:
	lea ecx,[esp+0xE4]
	push ecx
	mov byte ptr [esp+0x134],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x124],0x17
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x38]
	mov dword ptr [esp+0x38],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block88

 Block86:
	cmp eax,0x80004002
	je Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	mov ebx,8
	mov byte ptr [esp+0x11C],0x19
	cmp word ptr [esp+0xD0],bx
	jne Block95

 Block89:
	mov eax,dword ptr [esp+0xD8]
	xor edx,edx
	mov word ptr [esp+0xD0],dx
	cmp eax,edi
	je Block91

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block91:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block92:
	mov byte ptr [esp+0x11C],0x1A
	cmp word ptr [esp+0xA0],bx
	jne Block96

 Block93:
	mov eax,dword ptr [esp+0xA8]
	xor ecx,ecx
	mov word ptr [esp+0xA0],cx
	cmp eax,edi
	je Block97

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block95:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0xD0]
	push eax
	call esi
	jmp Block92

 Block96:
	lea edx,[esp+0xA0]
	push edx
	call esi

 Block97:
	mov byte ptr [esp+0x11C],0x1B
	cmp word ptr [esp+0x90],bx
	jne Block100

 Block98:
	xor eax,eax
	mov word ptr [esp+0x90],ax
	mov eax,dword ptr [esp+0x98]
	cmp eax,edi
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea ecx,[esp+0x90]
	push ecx
	call esi

 Block101:
	lea edx,[esp+0x70]
	push edx
	call ebp
	lea eax,[esp+0x70]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block103

 Block102:
	push eax
	call _com_issue_error

 Block103:
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0x120],0x1C
	call ebp
	lea edx,[esp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block105

 Block104:
	push eax
	call _com_issue_error

 Block105:
	push edi
	push edi
	lea eax,[esp+0x78]
	push eax
	lea ecx,[esp+0x6C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x1293
	mov bl,0x1D
	push edx
	mov byte ptr [esp+0x138],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0x130],0x1E
	cmp dword ptr [_D_G_RM],edi
	jne Block107

 Block106:
	push 0x80004003
	call _com_issue_error

 Block107:
	lea eax,[esp+0x114]
	mov byte ptr [esp+0x130],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x124],0x1F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x34]
	mov dword ptr [esp+0x34],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block110

 Block108:
	cmp eax,0x80004002
	je Block110

 Block109:
	push eax
	call _com_issue_error

 Block110:
	mov ebp,8
	mov byte ptr [esp+0x11C],0x21
	cmp word ptr [esp+0x100],bp
	jne Block113

 Block111:
	mov eax,dword ptr [esp+0x108]
	xor ecx,ecx
	mov word ptr [esp+0x100],cx
	cmp eax,edi
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea edx,[esp+0x100]
	push edx
	call esi

 Block114:
	mov byte ptr [esp+0x11C],0x22
	cmp word ptr [esp+0x60],bp
	jne Block117

 Block115:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	cmp eax,edi
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea ecx,[esp+0x60]
	push ecx
	call esi

 Block118:
	mov byte ptr [esp+0x11C],0x23
	cmp word ptr [esp+0x70],bp
	jne Block121

 Block119:
	mov eax,dword ptr [esp+0x78]
	xor edx,edx
	mov word ptr [esp+0x70],dx
	cmp eax,edi
	je Block122

 Block120:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block122

 Block121:
	lea eax,[esp+0x70]
	push eax
	call esi

 Block122:
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push 0x5FB
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x128],0x24
	cmp ecx,edi
	jne Block124

 Block123:
	push 0x80004003
	call _com_issue_error

 Block124:
	lea edx,[esp+0xFC]
	push edx
	mov byte ptr [esp+0x12C],0x23
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x124],0x25
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x30],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block127

 Block125:
	cmp eax,0x80004002
	je Block127

 Block126:
	push eax
	call _com_issue_error

 Block127:
	mov bl,0x27
	mov byte ptr [esp+0x11C],bl
	cmp word ptr [esp+0xF0],bp
	jne Block130

 Block128:
	xor eax,eax
	mov word ptr [esp+0xF0],ax
	mov eax,dword ptr [esp+0xF8]
	cmp eax,edi
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea ecx,[esp+0xF0]
	push ecx
	call esi

 Block131:
	mov ebp,dword ptr [esp+0x18]
	lea ecx,[ebp+0x470]
	call ZRef<CWvsPhysicalSpace2D>::_Alloc
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x114],esp
	mov dword ptr [eax],edi
	mov esi,dword ptr [esp+0x30]
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push ecx
	mov dword ptr [eax],edi
	mov eax,esp
	mov byte ptr [esp+0x128],0x28
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax],esi
	cmp esi,edi
	je Block133

 Block132:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block133:
	mov ecx,dword ptr [ebp+0x474]
	mov byte ptr [esp+0x128],bl
	call CWvsPhysicalSpace2D::Load
	mov ecx,dword ptr [TSingleton<CWvsPhysicalSpace2D>::ms_pInstance]
	call CWvsPhysicalSpace2D::SetFieldAttr
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	lea edx,[eax+0x2D9]
	push edx
	lea ecx,[eax+0xF9]
	push ecx
	push eax
	lea ecx,[ebp+0x80]
	mov byte ptr [esp+0x128],0x29
	call AvatarLook::Load_1
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x11C],bl
	cmp eax,edi
	je Block137

 Block134:
	lea edi,[eax-0x10]
	lea ebp,[edi+4]
	push ebp
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block137

 Block135:
	push ebp
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block137

 Block136:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block137:
	mov edi,dword ptr [esp+0x18]
	lea ecx,[esp+0x3B]
	push ecx
	lea ecx,[edi+0x478]
	call ZRef<CUserPreview>::Alloc
	mov ecx,dword ptr [edi+0x47C]
	call CUserPreview::Init
	mov ecx,edi
	call CITCWnd_Char::OnDefaultAvatar
	mov byte ptr [esp+0x11C],0x23
	test esi,esi
	je Block139

 Block138:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block139:
	mov eax,dword ptr [esp+0x30]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x120],0x1B
	call edx
	mov eax,dword ptr [esp+0x34]
	mov byte ptr [esp+0x11C],0x13
	test eax,eax
	je Block141

 Block140:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block141:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x11C],7
	test eax,eax
	je Block143

 Block142:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block143:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x11C],0xFFFFFFFF
	test eax,eax
	je Block145

 Block144:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block145:
	mov ecx,dword ptr [esp+0x114]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x10C
	ret 4
}
}
// CITCWnd_Inventory::OnCreate
_SUB_EXCEPTION_HANDLER(182CE0)
__SUB_CLASS_THIS(00182CE0, __thiscall, 84127,  CITCWnd_Inventory, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_182CE0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x60
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [ebp+0x70]
	push 0x70
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [edi+0xAF0],eax
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x60],eax
	mov dword ptr [ebp-4],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlTab::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block11

 Block4:
	add eax,8
	je Block11

 Block5:
	lea esi,[eax-8]
	test esi,esi
	je Block7

 Block6:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov eax,dword ptr [edi+0x84]
	mov dword ptr [edi+0x84],esi
	mov dword ptr [ebp+0x4C],eax
	test eax,eax
	je Block9

 Block8:
	push 0
	lea ecx,[ebp+0x48]
	call ZRef<CCtrlTab>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [edi+0x84]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0
	push 0x9C
	push 0x1E
	push 0x12
	push 3
	push 0x3E8
	push edi
	call eax
	mov eax,dword ptr [edi+0x84]
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp-0x2C]
	mov ebx,1
	push ecx
	mov dword ptr [eax+0x34],ebx
	mov dword ptr [eax+0x38],0
	call esi
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block12

 Block10:
	push eax
	call _com_issue_error

 Block11:
	xor esi,esi
	jmp Block7

 Block12:
	lea eax,[ebp]
	push eax
	mov dword ptr [ebp-4],ebx
	call esi
	lea ecx,[ebp]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	push 0
	push 0
	lea edx,[ebp-0x2C]
	push edx
	lea eax,[ebp]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1273
	mov bl,2
	push ecx
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],3
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea edx,[ebp-0x4C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],4
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	push eax
	lea ecx,[ebp+0x50]
	mov dword ptr [ebp+0x50],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block19

 Block17:
	cmp eax,0x80004002
	je Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],6
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	cmp eax,ebx
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[ebp-0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],7
	jne Block26

 Block24:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	cmp eax,ebx
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block27:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],8
	jne Block30

 Block28:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	cmp eax,ebx
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	lea eax,[ebp-0x3C]
	push eax
	call esi
	lea ecx,[ebp-0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	lea edx,[ebp-0x1C]
	push edx
	mov byte ptr [ebp-4],9
	call esi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	push ebx
	push ebx
	lea ecx,[ebp-0x3C]
	push ecx
	lea edx,[ebp-0x1C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x60],esp
	push 0x1274
	push eax
	mov byte ptr [ebp-4],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],0xB
	cmp dword ptr [_D_G_RM],ebx
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea ecx,[ebp-0x5C]
	push ecx
	mov byte ptr [ebp-4],0xA
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xC
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	mov dword ptr [ebp+0x58],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block40

 Block38:
	cmp eax,0x80004002
	je Block40

 Block39:
	push eax
	call _com_issue_error

 Block40:
	mov esi,8
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x5C],si
	jne Block43

 Block41:
	mov eax,dword ptr [ebp-0x54]
	xor edx,edx
	mov word ptr [ebp-0x5C],dx
	cmp eax,ebx
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea eax,[ebp-0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block44:
	mov byte ptr [ebp-4],0xF
	cmp word ptr [ebp-0x1C],si
	jne Block47

 Block45:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	cmp eax,ebx
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[ebp-0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp-0x3C],si
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	cmp eax,ebx
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov dword ptr [ebp+0x54],ebx
	mov edi,edi

 Block53:
	mov ebx,dword ptr [ebp+0x58]
	mov eax,0x20
	call __chkstk
	mov eax,0x20
	mov esi,esp
	call __chkstk
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [ebp+0x5C],esp
	push 1
	push 0
	push 0
	push 0xA
	push esi
	push edx
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x34],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov byte ptr [ebp-4],0x11
	test ebx,ebx
	je Block15

 Block54:
	lea eax,[ebp+0x24]
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x10
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x12
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x4C],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block59

 Block55:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x10]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov ebx,eax
	mov eax,dword ptr [esi]
	test ebx,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x10]
	mov dword ptr [ebp+0x34],ecx
	test eax,eax
	je Block57

 Block56:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block57:
	mov ecx,dword ptr [ebp+0x34]
	mov dword ptr [esi],ecx
	test ebx,ebx
	jge Block59

 Block58:
	cmp ebx,0x80004002
	jne Block76

 Block59:
	mov edx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [ebp+0x54]
	push 0
	push 0
	push 0xA
	push edx
	push eax
	mov byte ptr [ebp-4],0x13
	call _itoa
	add esp,8
	mov dword ptr [ebp+0x5C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x14
	test ecx,ecx
	je Block15

 Block60:
	lea edx,[ebp+0x38]
	push edx
	mov byte ptr [ebp-4],0x13
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x15
	call Ztl_variant_t::GetUnknown
	push ecx
	mov esi,esp
	mov dword ptr [ebp+0x5C],esp
	mov dword ptr [esi],0
	test eax,eax
	je Block65

 Block61:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov ebx,eax
	mov eax,dword ptr [esi]
	test ebx,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x60]
	mov dword ptr [ebp+0x5C],ecx
	test eax,eax
	je Block63

 Block62:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block63:
	mov ecx,dword ptr [ebp+0x5C]
	mov dword ptr [esi],ecx
	test ebx,ebx
	jge Block65

 Block64:
	cmp ebx,0x80004002
	jne Block76

 Block65:
	mov ecx,dword ptr [edi+0x84]
	mov byte ptr [ebp-4],0x16
	call CCtrlTab::AddItem_Canvas
	mov esi,8
	mov byte ptr [ebp-4],0x12
	cmp word ptr [ebp+0x38],si
	jne Block68

 Block66:
	mov eax,dword ptr [ebp+0x40]
	xor edx,edx
	mov word ptr [ebp+0x38],dx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea eax,[ebp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov byte ptr [ebp-4],0x10
	cmp word ptr [ebp+0x24],si
	jne Block72

 Block70:
	mov eax,dword ptr [ebp+0x2C]
	xor ecx,ecx
	mov word ptr [ebp+0x24],cx
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea edx,[ebp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov eax,dword ptr [ebp+0x54]
	inc eax
	cmp eax,4
	mov dword ptr [ebp+0x54],eax
	jl Block53

 Block74:
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x4C],eax
	mov byte ptr [ebp-4],0x17
	test eax,eax
	je Block77

 Block75:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block78

 Block76:
	push ebx
	call _com_issue_error

 Block77:
	xor eax,eax

 Block78:
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block88

 Block79:
	add eax,8
	je Block88

 Block80:
	lea esi,[eax-8]
	test esi,esi
	je Block82

 Block81:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block82:
	mov eax,dword ptr [edi+0x8C]
	mov dword ptr [edi+0x8C],esi
	test eax,eax
	je Block86

 Block83:
	lea esi,[eax+8]
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block86

 Block84:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block86

 Block85:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block86:
	mov ecx,dword ptr [edi+0x8C]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x28]
	xor esi,esi
	push esi
	push 0x66
	push 0x3D
	push 0xE4
	push esi
	mov ebx,1
	push ebx
	push 0x3E9
	push edi
	call edx
	mov eax,dword ptr [edi+0x8C]
	mov dword ptr [eax+0x34],0x8C
	mov ecx,dword ptr [edi+0x84]
	push esi
	mov dword ptr [edi+0xAE4],ebx
	call CCtrlTab::SetTab
	mov dword ptr [ebp+0x20],esi
	mov dword ptr [ebp+0x14],ebx
	mov dword ptr [ebp+0x18],esi
	mov dword ptr [ebp+0x1C],esi
	push esi
	push esi
	push 0xFFFFFFFF
	push offset _S_UIITCIMGBTSELL
	push esi
	push esi
	mov byte ptr [ebp-4],0x18
	call MultiByteToWideChar
	add eax,eax
	mov esi,eax
	shr esi,1
	push 0
	sub esi,ebx
	push esi
	lea ecx,[ebp+0x20]
	call ZXString16::GetBuffer
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push offset _S_UIITCIMGBTSELL
	push 0
	push 0
	call MultiByteToWideChar
	push esi
	lea ecx,[ebp+0x20]
	call ZXString16::ReleaseBuffer
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x4C],eax
	mov byte ptr [ebp-4],0x19
	test eax,eax
	je Block89

 Block87:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block90

 Block88:
	xor esi,esi
	jmp Block82

 Block89:
	xor eax,eax

 Block90:
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block102

 Block91:
	add eax,8
	je Block102

 Block92:
	lea esi,[eax-8]
	test esi,esi
	je Block94

 Block93:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block94:
	mov eax,dword ptr [edi+0x94]
	mov dword ptr [edi+0x94],esi
	test eax,eax
	je Block98

 Block95:
	lea esi,[eax+8]
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block98

 Block96:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block98

 Block97:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push ebx
	mov ecx,esi
	call edx

 Block98:
	mov ecx,dword ptr [edi+0x94]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[ebp+0x14]
	push edx
	push 0
	push 7
	push 0x9E
	push 0x3EA
	push edi
	call eax
	lea ecx,[ebp+0x60]
	push 0x1267
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [edi+0x94]
	push 0
	push ebx
	push eax
	mov byte ptr [ebp-4],0x1A
	call CCtrlButton::LoadToolTip
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block100

 Block99:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block100:
	push 0
	push 0
	push 0xFFFFFFFF
	push offset _S_UIITCIMGBTAUCTIO
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	mov esi,eax
	shr esi,1
	push 0
	sub esi,ebx
	push esi
	lea ecx,[ebp+0x20]
	call ZXString16::GetBuffer
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push offset _S_UIITCIMGBTAUCTIO
	push 0
	push 0
	call MultiByteToWideChar
	push esi
	lea ecx,[ebp+0x20]
	call ZXString16::ReleaseBuffer
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x4C],eax
	mov byte ptr [ebp-4],0x1B
	test eax,eax
	je Block103

 Block101:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block104

 Block102:
	xor esi,esi
	jmp Block94

 Block103:
	xor eax,eax

 Block104:
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block116

 Block105:
	add eax,8
	je Block116

 Block106:
	lea esi,[eax-8]
	test esi,esi
	je Block108

 Block107:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block108:
	mov eax,dword ptr [edi+0x94]
	mov dword ptr [edi+0x94],esi
	test eax,eax
	je Block112

 Block109:
	lea esi,[eax+8]
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block112

 Block110:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block112

 Block111:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push ebx
	mov ecx,esi
	call eax

 Block112:
	mov ecx,dword ptr [edi+0x94]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+0x14]
	push eax
	push 0
	push 7
	push 0xC1
	push 0x3EB
	push edi
	call edx
	lea eax,[ebp+0x60]
	push 0x1271
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [edi+0x94]
	push 0
	push ebx
	push eax
	mov byte ptr [ebp-4],0x1C
	call CCtrlButton::LoadToolTip
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block114

 Block113:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block114:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x38]
	push ecx
	call esi
	lea edx,[ebp+0x38]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block117

 Block115:
	push eax
	call _com_issue_error

 Block116:
	xor esi,esi
	jmp Block108

 Block117:
	lea eax,[ebp+0x24]
	push eax
	mov byte ptr [ebp-4],0x1D
	call esi
	lea ecx,[ebp+0x24]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block119

 Block118:
	push eax
	call _com_issue_error

 Block119:
	push 0
	push 0
	lea edx,[ebp+0x38]
	push edx
	lea eax,[ebp+0x24]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x4C],esp
	push 0x50E
	push ecx
	mov byte ptr [ebp-4],0x1E
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x1F
	jne Block121

 Block120:
	push 0x80004003
	call _com_issue_error

 Block121:
	lea edx,[ebp-0x6C]
	mov byte ptr [ebp-4],0x1E
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x20
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block127

 Block122:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ebx,ebx
	mov esi,eax
	mov eax,dword ptr [edi+0xAE0]
	test esi,esi
	setl bl
	dec ebx
	and ebx,dword ptr [ebp+0x60]
	test eax,eax
	je Block124

 Block123:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block124:
	mov dword ptr [edi+0xAE0],ebx
	test esi,esi
	jge Block129

 Block125:
	cmp esi,0x80004002
	je Block129

 Block126:
	push esi
	call _com_issue_error

 Block127:
	mov eax,dword ptr [edi+0xAE0]
	test eax,eax
	je Block129

 Block128:
	mov dword ptr [edi+0xAE0],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block129:
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0x1E
	jne Block132

 Block130:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block133

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block133

 Block132:
	lea ecx,[ebp-0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block133:
	mov esi,8
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp+0x24],si
	jne Block136

 Block134:
	mov eax,dword ptr [ebp+0x2C]
	xor edx,edx
	mov word ptr [ebp+0x24],dx
	test eax,eax
	je Block137

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block137

 Block136:
	lea eax,[ebp+0x24]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block137:
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp+0x38],si
	jne Block140

 Block138:
	mov eax,dword ptr [ebp+0x40]
	xor ecx,ecx
	mov word ptr [ebp+0x38],cx
	test eax,eax
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea edx,[ebp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block141:
	mov eax,dword ptr [ebp+0x20]
	or esi,0xFFFFFFFF
	mov dword ptr [edi+0xAEC],esi
	mov byte ptr [ebp-4],0x10
	test eax,eax
	je Block143

 Block142:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block143:
	mov eax,dword ptr [ebp+0x58]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],8
	call edx
	mov eax,dword ptr [ebp+0x50]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],esi
	call edx
	lea esp,[ebp-0x7C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x64]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x68
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CITCWnd_PURCHASE::OnChildNotify
__SUB_CLASS_THIS(0017FEB0, __thiscall, 84089,  CITCWnd_PURCHASE, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	cmp edi,0x3E8
	jne Block4

 Block1:
	cmp ebx,0x12C
	jb Block4

 Block2:
	cmp ebx,0x130
	ja Block4

 Block3:
	lea ecx,[esi+0x88]
	call CUIToolTip::ClearToolTip
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block4:
	cmp ebx,0x64
	jne Block6

 Block5:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push edi
	mov ecx,esi
	call edx

 Block6:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CITCWnd_Inventory::ClearToolTip
__SUB_CLASS_THIS0(00172420, __thiscall, 84135,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0x94
	jmp  CUIToolTip::ClearToolTip
}
}
// CITCWnd_SALE::OnMouseMove
_SUB_EXCEPTION_HANDLER(1810C0)
__SUB_CLASS_THIS(001810C0, __thiscall, 84053,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1810C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x5C]
	mov ecx,dword ptr [esp+0x58]
	mov ebp,dword ptr [esi+0xADC]
	push eax
	push ecx
	lea ecx,[esi-4]
	add ebp,0x48
	call CITCWnd_SALE::GetWndSaleIndex
	xor ebx,ebx
	cmp eax,ebx
	jl Block4

 Block1:
	mov ecx,dword ptr [ebp]
	cmp ecx,ebx
	je Block4

 Block2:
	cmp eax,dword ptr [ecx-4]
	jae Block4

 Block3:
	lea edi,[eax*8]
	mov eax,dword ptr [edi+ecx+4]
	mov eax,dword ptr [eax+0x18]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea edx,[esp+0x18]
	push edx
	call CItemInfo::GetItemSlot
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [_D_DB_DATE_19000101__165]
	add eax,edi
	mov edi,dword ptr [_D_DB_DATE_19000101__165+4]
	mov dword ptr [esp+0x50],ebx
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x34],edx
	mov dword ptr [esp+0x38],edi
	mov dword ptr [esp+0x44],ebx
	mov ecx,dword ptr [eax+4]
	mov ebp,dword ptr [ecx+0xFC]
	add ebp,dword ptr [ecx+0x24]
	push ebx
	push ebx
	push 1
	mov dword ptr [esp+0x40],edx
	mov edx,dword ptr [esi]
	mov dword ptr [esp+0x3C],ebp
	mov dword ptr [esp+0x44],edi
	mov dword ptr [esp+0x48],offset _S_
	mov eax,dword ptr [eax+4]
	mov eax,dword ptr [eax+0x18]
	push ebx
	lea ecx,[esp+0x2C]
	push ecx
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	mov byte ptr [esp+0x68],1
	call eax
	mov ecx,dword ptr [esp+0x74]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x74]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[esi+0x8C]
	call CUIToolTip::ShowItemToolTip
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x50],bl
	call CUIToolTip::ItemToolTipParam::~ItemToolTipParam
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	jmp Block5

 Block4:
	lea ecx,[esi+0x8C]
	call CUIToolTip::ClearToolTip

 Block5:
	xor eax,eax
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 8
}
}
// CITCWnd_Inventory::OnChildNotify
__SUB_CLASS_THIS(00181880, __thiscall, 84128,  CITCWnd_Inventory, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	cmp edi,0x3E8
	jne Block3

 Block1:
	cmp ebx,0x1F4
	jne Block7

 Block2:
	mov eax,dword ptr [esp+0x18]
	push eax
	call CITCWnd_Inventory::OnTabChanged
	pop edi
	pop esi
	pop ebx
	ret 0xC

 Block3:
	cmp edi,0x3E9
	jne Block7

 Block4:
	cmp ebx,0x12C
	jb Block7

 Block5:
	cmp ebx,0x130
	ja Block7

 Block6:
	lea ecx,[esi+0x98]
	call CUIToolTip::ClearToolTip
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi+0xAE8]
	mov dword ptr [ecx*4+CITCWnd_Inventory::ms_anItemScrollPos],eax
	lea edx,[eax+eax*2]
	lea eax,[edx+edx+1]
	push 0
	mov ecx,esi
	mov dword ptr [esi+0xAE4],eax
	call CWnd::InvalidateRect

 Block7:
	cmp ebx,0x64
	jne Block9

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x20]
	push edi
	mov ecx,esi
	call eax

 Block9:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CITCWnd_PURCHASE::CITCWnd_PURCHASE
_SUB_EXCEPTION_HANDLER(1721C0)
__SUB_CLASS_THIS0(001721C0, __thiscall, 84085,  CITCWnd_PURCHASE, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1721C0
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
	call CWnd::_ctor_default
	xor edi,edi
	lea eax,[esi+0x80]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0x80]
	mov dword ptr [TSingleton<CITCWnd_PURCHASE>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CITCWnd_PURCHASE>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CITCWnd_PURCHASE::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CITCWnd_PURCHASE::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CITCWnd_PURCHASE::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],edi
	lea ecx,[esi+0x88]
	mov byte ptr [esp+0x18],2
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xAD0],edi
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
// CITCWnd_Char::CITCWnd_Char
__SUB_CLASS_THIS0(00180320, __thiscall, 83948,  CITCWnd_Char, void) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,ecx
	call CWnd::_ctor_default
	lea esi,[edi+0x80]
	xor ebx,ebx
	cmp esi,ebx
	je Block2

 Block1:
	lea eax,[esi-0x80]
	mov dword ptr [TSingleton<CITCWnd_Char>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CITCWnd_Char>::ms_pInstance],ebx

 Block3:
	int 3// TODO: 	mov dword ptr [edi],offset CITCWnd_Char::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [edi+4],offset CITCWnd_Char::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [edi+8],offset CITCWnd_Char::`vftable'{for `ZRefCounted'}
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	push 0xF0
	lea ecx,[esi+0x19]
	push ebx
	push ecx
	int 3// TODO: 	mov dword ptr [esi],offset AvatarLook::`vftable'
	mov byte ptr [esi+0xC],bl
	mov dword ptr [esi+0xD],ebx
	mov dword ptr [esi+0x11],ebx
	mov dword ptr [esi+0x15],ebx
	call _memset
	xor eax,eax
	mov dword ptr [esi+0x1F9],eax
	mov dword ptr [esi+0x1FD],eax
	mov dword ptr [esi+0x201],eax
	mov dword ptr [edi+0x474],ebx
	add esp,0xC
	mov dword ptr [edi+0x47C],ebx
	mov dword ptr [edi+0x480],ebx
	mov eax,edi
	pop edi
	pop esi
	pop ebx
	ret
}
}
// CITCWnd_Inventory::OnMouseMove
__SUB_CLASS_THIS(00181F60, __thiscall, 84130,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	sub esp,0x10
	mov eax,dword ptr [esp+0x18]
	push esi
	push edi
	mov esi,ecx
	mov ecx,dword ptr [esp+0x1C]
	push eax
	push ecx
	lea ecx,[esi-4]
	call CITCWnd_Inventory::GetSlotPositionFromPoint
	mov edi,eax
	mov dword ptr [esp+8],edi
	test edi,edi
	je Block13

 Block1:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebp
	lea edx,[esp+0x14]
	push edx
	call CWvsContext::GetCharacterData
	mov ebp,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x18]
	test eax,eax
	je Block6

 Block2:
	push ebx
	lea edi,[eax-0x10]
	lea ebx,[edi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block3:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block5

 Block4:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block5:
	mov edi,dword ptr [esp+0x10]
	mov dword ptr [esp+0x1C],0
	pop ebx

 Block6:
	mov eax,dword ptr [esi+0xAE4]
	push edi
	push eax
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,ebp
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x10]
	pop ebp
	test eax,eax
	je Block11

 Block7:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block8:
	mov edx,dword ptr [esp+0xC]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0xC]
	test ecx,ecx
	je Block10

 Block9:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block10:
	mov dword ptr [esp+0xC],0

 Block11:
	push edi
	call IsITCTradeLimitItem
	add esp,4
	test eax,eax
	jne Block13

 Block12:
	push eax
	push eax
	push eax
	push eax
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	push edi
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x38]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	add eax,dword ptr [esp+0x38]
	lea ecx,[esi+0x94]
	push eax
	call CUIToolTip::ShowItemToolTip
	pop edi
	xor eax,eax
	pop esi
	add esp,0x10
	ret 8

 Block13:
	lea ecx,[esi+0x94]
	call CUIToolTip::ClearToolTip
	pop edi
	xor eax,eax
	pop esi
	add esp,0x10
	ret 8
}
}
// CITCWnd_SALE::OnMouseButton
__SUB_CLASS_THIS(00180650, __thiscall, 84054,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push esi
	push edi
	mov edi,ecx
	lea ecx,[edi+0x8C]
	call CUIToolTip::ClearToolTip
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0xC]
	push eax
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block4

 Block1:
	lea esi,[eax-0x10]
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push ebx
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
	cmp dword ptr [esp+0x18],0x201
	jne Block10

 Block5:
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x20]
	mov esi,dword ptr [edi+0xADC]
	push ecx
	lea ebx,[edi-4]
	push edx
	mov ecx,ebx
	add esi,0x48
	call CITCWnd_SALE::GetWndSaleIndex
	test eax,eax
	jl Block10

 Block6:
	mov esi,dword ptr [esi]
	test esi,esi
	je Block10

 Block7:
	cmp eax,dword ptr [esi-4]
	jae Block10

 Block8:
	cmp dword ptr [edi+0xAD8],eax
	je Block10

 Block9:
	push 0
	mov ecx,ebx
	mov dword ptr [edi+0xAD8],eax
	call CWnd::InvalidateRect

 Block10:
	pop edi
	pop esi
	pop ebx
	add esp,8
	ret 0x10
}
}
// CITCWnd_Char::OnSetFocus
__SUB_CLASS_THIS(001803C0, __thiscall, 83954,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CITCWnd_Char::OnKey
__SUB_CLASS_THIS(00180B40, __thiscall, 83956,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	push esi
	mov esi,ecx
	test eax,eax
	js Block15

 Block1:
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	shr eax,0x10
	and eax,0xFF
	push eax
	call CFuncKeyMappedMan::FuncKeyMapped
	cmp byte ptr [eax],5
	jne Block15

 Block2:
	mov eax,dword ptr [eax+1]
	cmp eax,0x35
	jne Block8

 Block3:
	mov ecx,dword ptr [esi+0x478]
	lea eax,[esp+0xC]
	push eax
	call CUser::GetVecCtrl_0
	mov eax,dword ptr [eax]
	test eax,eax
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	mov dword ptr [eax+0x200],1
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block15

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	pop esi
	ret 8

 Block8:
	cmp eax,0x34
	jne Block15

 Block9:
	mov ecx,dword ptr [esi+0xC1]
	push edi
	lea eax,[esp+0x10]
	push eax
	push ecx
	mov dword ptr [esp+0x18],0
	call get_weapon_type
	add esp,4
	push eax
	lea ecx,[esi-4]
	call CITCWnd_Char::GetWeaponItemID
	mov edi,eax
	test edi,edi
	je Block14

 Block10:
	push edi
	call get_weapon_type
	add esp,4
	cmp eax,0x2D
	je Block13

 Block11:
	push edi
	call get_weapon_type
	add esp,4
	cmp eax,0x2E
	je Block13

 Block12:
	mov edx,dword ptr [esp+0x10]
	mov ecx,dword ptr [esi+0x478]
	push edx
	push edi
	call CUserPreview::DoMeleeAttack
	pop edi
	pop esi
	ret 8

 Block13:
	mov ecx,dword ptr [esi+0x478]
	push 0
	push edi
	call CUserPreview::DoShootAttack

 Block14:
	pop edi

 Block15:
	pop esi
	ret 8
}
}
// CITCWnd_PURCHASE::GetWndPurchaseRect
__SUB_CLASS_THIS(001801E0, __thiscall, 84098,  CITCWnd_PURCHASE, tagRECT*, tagRECT*, long) {
__asm {

 Block0:
	mov edx,dword ptr [esp+8]
	push esi
	mov esi,dword ptr [esp+8]
	mov dword ptr [esi],0
	mov dword ptr [esi+4],0
	mov dword ptr [esi+8],0
	mov dword ptr [esi+0xC],0
	test edx,edx
	jl Block5

 Block1:
	mov eax,dword ptr [ecx+0xAD8]
	add eax,0x4C
	mov eax,dword ptr [eax]
	test eax,eax
	je Block5

 Block2:
	cmp edx,dword ptr [eax-4]
	jae Block5

 Block3:
	mov eax,dword ptr [ecx+0x84]
	mov eax,dword ptr [eax+0x38]
	lea ecx,[eax*4]
	sub ecx,eax
	neg ecx
	lea ecx,[edx+ecx*2]
	cmp ecx,0xB
	ja Block5

 Block4:
	mov eax,0x2AAAAAAB
	imul ecx
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	lea edx,[eax+eax*2]
	imul eax,0x23
	add edx,edx
	sub ecx,edx
	imul ecx,0x23
	add ecx,0x14
	add eax,0x21
	mov dword ptr [esi],ecx
	add ecx,0x20
	mov dword ptr [esi+4],eax
	add eax,0x20
	mov dword ptr [esi+8],ecx
	mov dword ptr [esi+0xC],eax

 Block5:
	mov eax,esi
	pop esi
	ret 8
}
}
// CITCWnd_PURCHASE::OnMouseMove
_SUB_EXCEPTION_HANDLER(181710)
__SUB_CLASS_THIS(00181710, __thiscall, 84090,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_181710
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x5C]
	mov ecx,dword ptr [esp+0x58]
	mov ebp,dword ptr [esi+0xAD4]
	push eax
	push ecx
	lea ecx,[esi-4]
	add ebp,0x4C
	call CITCWnd_PURCHASE::GetWndPurchaseIndex
	xor ebx,ebx
	cmp eax,ebx
	jl Block4

 Block1:
	mov ecx,dword ptr [ebp]
	cmp ecx,ebx
	je Block4

 Block2:
	cmp eax,dword ptr [ecx-4]
	jae Block4

 Block3:
	lea edi,[eax*8]
	mov eax,dword ptr [edi+ecx+4]
	mov eax,dword ptr [eax+0x18]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	lea edx,[esp+0x18]
	push edx
	call CItemInfo::GetItemSlot
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [_D_DB_DATE_19000101__165]
	mov edx,dword ptr [_D_DB_DATE_19000101__165+4]
	mov dword ptr [esp+0x50],ebx
	add eax,edi
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x34],ecx
	mov dword ptr [esp+0x38],edx
	mov dword ptr [esp+0x44],ebx
	mov edi,dword ptr [eax+4]
	mov edi,dword ptr [edi+0x24]
	push ebx
	push ebx
	mov dword ptr [esp+0x3C],ecx
	push ebx
	mov dword ptr [esp+0x44],edx
	mov edx,dword ptr [esi]
	mov dword ptr [esp+0x3C],edi
	mov dword ptr [esp+0x48],offset _S_
	mov eax,dword ptr [eax+4]
	mov eax,dword ptr [eax+0x18]
	push ebx
	lea ecx,[esp+0x2C]
	push ecx
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	mov byte ptr [esp+0x68],1
	call eax
	mov ecx,dword ptr [esp+0x74]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x74]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[esi+0x84]
	call CUIToolTip::ShowItemToolTip
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x50],bl
	call CUIToolTip::ItemToolTipParam::~ItemToolTipParam
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	jmp Block5

 Block4:
	lea ecx,[esi+0x84]
	call CUIToolTip::ClearToolTip

 Block5:
	xor eax,eax
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x40
	ret 8
}
}
// CITCWnd_SALE::OnChildNotify
__SUB_CLASS_THIS(0017FE30, __thiscall, 84051,  CITCWnd_SALE, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov esi,ecx
	cmp edi,0x3E9
	jne Block4

 Block1:
	cmp ebx,0x12C
	jb Block4

 Block2:
	cmp ebx,0x130
	ja Block4

 Block3:
	lea ecx,[esi+0x90]
	call CUIToolTip::ClearToolTip
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block4:
	cmp ebx,0x64
	jne Block6

 Block5:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push edi
	mov ecx,esi
	call edx

 Block6:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CITCWnd_SALE::Draw
_SUB_EXCEPTION_HANDLER(180D70)
__SUB_CLASS_THIS(00180D70, __thiscall, 84056,  CITCWnd_SALE, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_180D70
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
	mov ebx,ecx
	mov dword ptr [esp+0x14],ebx
	lea eax,[esp+0x20]
	push eax
	call CWnd::GetCanvas
	mov edi,dword ptr [ebx+0xAE0]
	mov esi,dword ptr [esp+0x20]
	add edi,0x48
	mov dword ptr [esp+0x44],0
	mov dword ptr [esp+0x24],edi
	test esi,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push 0x49
	push 0xD3
	push 0x1F
	push 0x11
	push esi
	call edx
	test eax,eax
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov ecx,dword ptr [ebx+0xADC]
	test ecx,ecx
	jl Block8

 Block5:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block7

 Block6:
	mov eax,dword ptr [eax-4]

 Block7:
	cmp ecx,eax
	jb Block9

 Block8:
	mov dword ptr [ebx+0xADC],0xFFFFFFFF

 Block9:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block11

 Block10:
	cmp dword ptr [eax-4],0
	jne Block12

 Block11:
	mov ebx,dword ptr [ebx+0x8C]
	push 0
	mov ecx,ebx
	call CCtrlScrollBar::SetScrollRange
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call ecx
	jmp Block38

 Block12:
	mov ecx,ebx
	call CITCWnd_SALE::ResetScrollBar
	mov eax,dword ptr [ebx+0x8C]
	mov ebp,dword ptr [eax+0x38]
	mov eax,dword ptr [eax+0x38]
	lea ebp,[ebp+ebp*2]
	lea edx,[eax+eax*2+6]
	add ebp,ebp
	add edx,edx
	cmp ebp,edx
	jge Block37

 Block13:
	jmp Block15

 Block14:
	mov edi,dword ptr [esp+0x24]
	mov ebx,dword ptr [esp+0x14]

 Block15:
	mov ecx,edi
	call ZArray<ZRef<ITCITEM>>::GetCount
	cmp ebp,eax
	jae Block37

 Block16:
	mov eax,dword ptr [edi]
	lea eax,[eax+ebp*8]
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [eax+4]
	mov eax,dword ptr [eax+0x18]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push ebp
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,ebx
	mov dword ptr [esp+0x20],eax
	call CITCWnd_SALE::GetWndSaleRect
	mov edx,dword ptr [esp+0x38]
	mov edi,dword ptr [esp+0x2C]
	mov eax,dword ptr [esp+0x18]
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push edx
	push edi
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x54],esp
	push esi
	call edx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	cmp ebp,dword ptr [ebx+0xADC]
	mov ebx,dword ptr [esp+0x30]
	jne Block27

 Block17:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x8C]
	push 0x401030CC
	push 0x20
	push 0x20
	push ebx
	push edi
	push esi
	call ecx
	test eax,eax
	jge Block19

 Block18:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block19:
	mov edx,dword ptr [esi]
	push 0xAA1030CC
	push 2
	push 0x20
	lea eax,[ebx-1]
	push eax
	mov eax,dword ptr [edx+0x8C]
	push edi
	push esi
	call eax
	test eax,eax
	jge Block21

 Block20:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block21:
	mov eax,dword ptr [esp+0x38]
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xAA1030CC
	push 2
	push 0x20
	dec eax
	push eax
	push edi
	push esi
	call edx
	test eax,eax
	jge Block23

 Block22:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block23:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xAA1030CC
	push 0x20
	push 2
	push ebx
	lea eax,[edi-1]
	push eax
	push esi
	call edx
	test eax,eax
	jge Block25

 Block24:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xAA1030CC
	push 0x20
	push 2
	push ebx
	dec eax
	push eax
	push esi
	call edx
	test eax,eax
	jge Block27

 Block26:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	mov eax,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax+4]
	cmp word ptr [eax+0xC],0
	je Block30

 Block28:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0x72363636
	push 0x20
	push 0x20
	push ebx
	push edi
	push esi
	call edx
	test eax,eax
	jge Block30

 Block29:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block30:
	mov eax,0x431BDE83
	imul dword ptr [esp+0x18]
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,2
	je Block33

 Block31:
	cmp eax,3
	je Block33

 Block32:
	cmp eax,4
	jne Block36

 Block33:
	mov eax,dword ptr [esp+0x1C]
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x18]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x20]
	call eax
	mov edx,dword ptr [esp+0x14]
	push 0
	push ecx
	mov ebx,eax
	mov eax,dword ptr [edx+0xAD8]
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block35:
	mov eax,dword ptr [esp+0x40]
	push ebx
	add eax,0xFFFFFFF4
	push eax
	push edi
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x40],esp
	push esi
	call edx
	call draw_number_by_image
	add esp,0x18

 Block36:
	mov eax,dword ptr [esp+0x14]
	mov eax,dword ptr [eax+0x8C]
	mov eax,dword ptr [eax+0x38]
	lea ecx,[eax+eax*2+6]
	inc ebp
	add ecx,ecx
	cmp ebp,ecx
	jl Block14

 Block37:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [esp+0x48],0xFFFFFFFF
	call eax

 Block38:
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
// CITCWnd_Char::Update
__SUB_CLASS_THIS0(0017FF60, __thiscall, 83950,  CITCWnd_Char, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0x47C]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	call edx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	call edx
	mov ecx,esi
	pop esi
	jmp  CWnd::Update
}
}
// CITCWnd_SALE::ClearToolTip
__SUB_CLASS_THIS0(001720A0, __thiscall, 84058,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0x8C
	jmp  CUIToolTip::ClearToolTip
}
}
// CITCWnd_SALE::OnDestroy
__SUB_CLASS_THIS0(0017FE20, __thiscall, 84049,  CITCWnd_SALE, void) {
__asm {

 Block0:
	add ecx,0x90
	jmp  CUIToolTip::ClearToolTip
}
}
// CITCWnd_Inventory::Draw
_SUB_EXCEPTION_HANDLER(1819E0)
__SUB_CLASS_THIS(001819E0, __thiscall, 84133,  CITCWnd_Inventory, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1819E0
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
	mov ebp,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x34]
	push eax
	call CWvsContext::GetCharacterData
	mov ebx,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x18],ebx
	test eax,eax
	je Block5

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
	mov dword ptr [esp+0x38],0

 Block5:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebp
	call CWnd::GetCanvas
	mov esi,dword ptr [ebp+0xAEC]
	mov dword ptr [esp+0x54],0
	mov dword ptr [ebp+0xAEC],0xFFFFFFFF
	test esi,esi
	jl Block16

 Block6:
	mov eax,dword ptr [ebp+0xAE8]
	mov ecx,dword ptr [ebx+eax*4+0x501]
	test ecx,ecx
	je Block8

 Block7:
	mov ecx,dword ptr [ecx-4]

 Block8:
	dec ecx
	cmp esi,ecx
	jge Block16

 Block9:
	push esi
	push eax
	lea edx,[esp+0x2C]
	push edx
	mov ecx,ebx
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block14

 Block10:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block11:
	mov eax,dword ptr [esp+0x28]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x28]
	test ecx,ecx
	je Block13

 Block12:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block13:
	mov dword ptr [esp+0x28],0

 Block14:
	push edi
	call IsITCTradeLimitItem
	add esp,4
	test eax,eax
	jne Block16

 Block15:
	mov dword ptr [ebp+0xAEC],esi

 Block16:
	mov esi,dword ptr [esp+0x1C]
	test esi,esi
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push 0xD4
	push 0xE3
	push 0x34
	push 0
	push esi
	call edx
	test eax,eax
	jge Block20

 Block19:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block20:
	mov eax,dword ptr [ebp+0xAE8]
	lea eax,[ebx+eax*4+0x501]
	mov eax,dword ptr [eax]
	test eax,eax
	je Block22

 Block21:
	mov eax,dword ptr [eax-4]

 Block22:
	mov ecx,dword ptr [ebp+0xAE4]
	mov edx,eax
	mov dword ptr [esp+0x14],ecx
	mov dword ptr [esp+0x20],edx
	lea ecx,[ecx]

 Block23:
	mov eax,dword ptr [ebp+0xAE4]
	add eax,0x12
	cmp eax,edx
	jl Block25

 Block24:
	mov eax,edx

 Block25:
	cmp ecx,eax
	jge Block57

 Block26:
	push ecx
	mov ecx,dword ptr [ebp+0xAE8]
	push ecx
	lea edx,[esp+0x34]
	push edx
	mov ecx,ebx
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block31

 Block27:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x30]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x30]
	test ecx,ecx
	je Block30

 Block29:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block30:
	mov dword ptr [esp+0x30],0

 Block31:
	test edi,edi
	je Block56

 Block32:
	lea ecx,[edi+0xC]
	call TSecType<long>::GetData
	mov edx,dword ptr [esp+0x14]
	lea ecx,[esp+0x3C]
	push ecx
	push edx
	mov ecx,ebp
	mov ebx,eax
	call CITCWnd_Inventory::GetItemSlotRect
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x18]
	mov ecx,edi
	call edx
	push 2
	push 0
	push 0
	push 0
	cmp eax,3
	jne Block34

 Block33:
	mov ecx,edi
	call GW_ItemSlotPet::IsDead
	mov ecx,dword ptr [esp+0x4C]
	push eax
	mov eax,dword ptr [esp+0x5C]
	push 0
	push 0
	push eax
	push ecx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x50],esp
	push esi
	call eax
	jmp Block35

 Block34:
	mov ecx,dword ptr [esp+0x58]
	mov edx,dword ptr [esp+0x4C]
	push 0
	push 0
	push 0
	push ecx
	push edx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x50],esp
	push esi
	call ecx

 Block35:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov eax,dword ptr [ebp+0xAE8]
	cmp eax,2
	je Block38

 Block36:
	cmp eax,3
	je Block38

 Block37:
	cmp eax,4
	jne Block41

 Block38:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x20]
	mov ecx,edi
	call eax
	push 0
	push ecx
	mov ebx,eax
	mov eax,dword ptr [ebp+0xAE0]
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block40

 Block39:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block40:
	mov eax,dword ptr [esp+0x50]
	mov ecx,dword ptr [esp+0x44]
	push ebx
	add eax,0xFFFFFFF4
	push eax
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x3C],esp
	push esi
	call eax
	call draw_number_by_image
	add esp,0x18

 Block41:
	push edi
	call IsITCTradeLimitItem
	add esp,4
	test eax,eax
	je Block44

 Block42:
	mov edx,dword ptr [esp+0x40]
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esi]
	mov ecx,dword ptr [ecx+0x8C]
	push 0x72363636
	push 0x20
	push 0x20
	push edx
	push eax
	push esi
	call ecx
	test eax,eax
	jge Block44

 Block43:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block44:
	mov edx,dword ptr [esp+0x14]
	cmp edx,dword ptr [ebp+0xAEC]
	jne Block55

 Block45:
	mov ecx,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	mov eax,dword ptr [esi]
	mov eax,dword ptr [eax+0x8C]
	push 0x401030CC
	push 0x20
	push 0x20
	push ecx
	push edx
	push esi
	call eax
	test eax,eax
	jge Block47

 Block46:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block47:
	mov eax,dword ptr [esp+0x40]
	mov edx,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esi]
	push 0xAA1030CC
	push 2
	push 0x20
	dec eax
	push eax
	mov eax,dword ptr [ecx+0x8C]
	push edx
	push esi
	call eax
	test eax,eax
	jge Block49

 Block48:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block49:
	mov eax,dword ptr [esp+0x48]
	mov edx,dword ptr [esp+0x3C]
	mov ecx,dword ptr [esi]
	push 0xAA1030CC
	push 2
	push 0x20
	dec eax
	push eax
	mov eax,dword ptr [ecx+0x8C]
	push edx
	push esi
	call eax
	test eax,eax
	jge Block51

 Block50:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block51:
	mov eax,dword ptr [esp+0x3C]
	mov edx,dword ptr [esp+0x40]
	mov ecx,dword ptr [esi]
	push 0xAA1030CC
	push 0x20
	push 2
	dec eax
	push edx
	push eax
	mov eax,dword ptr [ecx+0x8C]
	push esi
	call eax
	test eax,eax
	jge Block53

 Block52:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block53:
	mov eax,dword ptr [esp+0x44]
	mov edx,dword ptr [esp+0x40]
	mov ecx,dword ptr [esi]
	push 0xAA1030CC
	push 0x20
	push 2
	dec eax
	push edx
	push eax
	mov eax,dword ptr [ecx+0x8C]
	push esi
	call eax
	test eax,eax
	jge Block55

 Block54:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block55:
	mov ebx,dword ptr [esp+0x18]

 Block56:
	inc dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x14]
	jmp Block23

 Block57:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [esp+0x58],0xFFFFFFFF
	call edx
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
// CITCWnd_Char::SetRing
_SUB_EXCEPTION_HANDLER(182510)
__SUB_CLASS_THIS(00182510, __thiscall, 83959,  CITCWnd_Char, void, long, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_182510
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
	mov esi,ecx
	mov ebp,dword ptr [esp+0x34]
	xor ebx,ebx
	cmp ebp,ebx
	je Block27

 Block1:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push ebp
	lea eax,[esp+0x38]
	push eax
	call CItemInfo::GetItemInfo
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebx
	sete cl
	mov dword ptr [esp+0x2C],ebx
	cmp cl,bl
	jne Block25

 Block2:
	mov ecx,dword ptr [esp+0x3C]
	cmp dword ptr [esi+0x2E8],ebp
	jne Block5

 Block3:
	cmp ecx,ebx
	jne Block5

 Block4:
	mov dword ptr [esi+0x2EC],ebx
	mov dword ptr [esi+0x2E8],ebx
	jmp Block25

 Block5:
	cmp dword ptr [esi+0x2F0],ebp
	jne Block8

 Block6:
	cmp ecx,ebx
	jne Block8

 Block7:
	mov dword ptr [esi+0x2F4],ebx
	mov dword ptr [esi+0x2F0],ebx
	jmp Block25

 Block8:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	push 0x99D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],1
	cmp ecx,ebx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x38],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x34],2
	call get_int32
	add esp,8
	cmp word ptr [esp+0x14],8
	mov edi,eax
	mov byte ptr [esp+0x2C],bl
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	cmp edi,ebx
	je Block16

 Block15:
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [esi+0x2E8],ebp
	mov dword ptr [esi+0x2EC],edx

 Block16:
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x44],esp
	push 0x99E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x3C]
	mov byte ptr [esp+0x34],3
	cmp ecx,ebx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x38],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0x34],4
	call get_int32
	add esp,8
	cmp word ptr [esp+0x14],8
	mov edi,eax
	mov byte ptr [esp+0x2C],bl
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	cmp edi,ebx
	je Block24

 Block23:
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [esi+0x2F0],ebp
	mov dword ptr [esi+0x2F4],edx

 Block24:
	mov eax,dword ptr [esp+0x34]

 Block25:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp eax,ebx
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block27:
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
