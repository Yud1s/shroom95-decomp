#include "regen.hpp"
// UIKeyConfig.ipp
#include "UIKeyConfig.hpp"

// CUIKeyConfig::CNoticeDlg::OnCreate
_SUB_EXCEPTION_HANDLER(3DC280)
__SUB_CLASS_THIS(003DC280, __thiscall, 56014,  CUIKeyConfig::CNoticeDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DC280
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
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x1C],1
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	push offset _S_UIUIWINDOW2IMGKE__4
	lea ecx,[esp+0x2C]
	mov dword ptr [esp+0x38],ebx
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],1
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block11

 Block4:
	add eax,8
	cmp eax,ebx
	je Block11

 Block5:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block7

 Block6:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block7:
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block9

 Block8:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esi+0x98]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push ebx
	push 0x35
	push 0x9D
	push 1
	push esi
	call edx
	push offset _S_UIUIWINDOW2IMGKE__3
	lea ecx,[esp+0x2C]
	call ZXString16::AssignCStr
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],2
	cmp eax,ebx
	je Block12

 Block10:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block13

 Block11:
	xor edi,edi
	jmp Block7

 Block12:
	xor eax,eax

 Block13:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block22

 Block14:
	add eax,8
	cmp eax,ebx
	je Block22

 Block15:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block17

 Block16:
	lea eax,[edi+0xC]
	push eax
	call ebp

 Block17:
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block19

 Block18:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block19:
	mov ecx,dword ptr [esi+0xA0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push ebx
	push 0x35
	push 0xC9
	push 2
	push esi
	call edx
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block21:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 4

 Block22:
	xor edi,edi
	jmp Block17
}
}
// CDraggableSkill::MapFuncKey
__SUB_CLASS_THIS(0010A330, __thiscall, 84976,  CDraggableSkill, int32_t, long, long, int32_t) {
__asm {

 Block0:
	sub esp,0xC
	push ebx
	mov ebx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push esi
	mov esi,dword ptr [esp+0x20]
	push edi
	mov edi,ecx
	mov dword ptr [esp+0x10],ebx
	test esi,esi
	je Block3

 Block1:
	lea ecx,[ebx+0x1824]
	call CUIStatusBar::CQuickSlot::IsEnabled
	test eax,eax
	jne Block3

 Block2:
	pop edi
	pop esi
	pop ebx
	add esp,0xC
	ret 0xC

 Block3:
	mov eax,dword ptr [TSingleton<CUIKeyConfig>::ms_pInstance]
	mov dword ptr [esp+0xC],0
	test eax,eax
	je Block5

 Block4:
	mov dword ptr [esp+0xC],eax

 Block5:
	mov eax,dword ptr [TSingleton<CQuickslotKeyMappedMan>::ms_pInstance]
	push ebp
	mov ebp,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	mov dword ptr [esp+0x18],eax
	test esi,esi
	je Block7

 Block6:
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x20]
	push ecx
	push edx
	mov ecx,ebx
	call CUIStatusBar::GetShortCutIndexByPos
	jmp Block8

 Block7:
	mov eax,dword ptr [esp+0x24]
	mov ecx,dword ptr [esp+0x20]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x18]
	call CUIKeyConfig::GetShortCutIndexByPos

 Block8:
	mov ebx,eax
	cmp ebx,0xFFFFFFFF
	jne Block10

 Block9:
	pop ebp
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	add esp,0xC
	ret 0xC

 Block10:
	xor esi,esi

 Block11:
	push esi
	mov ecx,ebp
	call CFuncKeyMappedMan::FuncKeyMapped
	mov cl,byte ptr [eax]
	cmp cl,1
	jne Block14

 Block12:
	mov edx,dword ptr [eax+1]
	cmp edx,dword ptr [edi+0x18]
	jne Block14

 Block13:
	cmp dword ptr [edi+0x1C],0
	je Block17

 Block14:
	cmp cl,8
	jne Block18

 Block15:
	mov ecx,dword ptr [eax+1]
	cmp ecx,dword ptr [edi+0x18]
	jne Block18

 Block16:
	cmp dword ptr [edi+0x1C],0
	je Block18

 Block17:
	mov byte ptr [eax],0

 Block18:
	inc esi
	cmp esi,0x59
	jl Block11

 Block19:
	cmp ebx,0x59
	jl Block22

 Block20:
	mov ecx,dword ptr [esp+0x14]
	push 0
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x10]
	test ecx,ecx
	je Block34

 Block21:
	push 0
	call CWnd::InvalidateRect
	pop ebp
	pop edi
	pop esi
	mov eax,1
	pop ebx
	add esp,0xC
	ret 0xC

 Block22:
	cmp dword ptr [esp+0x28],0
	mov ecx,ebp
	je Block31

 Block23:
	mov edx,dword ptr [esp+0x18]
	mov eax,dword ptr [edx+ebx*4+4]
	push eax
	call CFuncKeyMappedMan::FuncKeyMapped
	mov esi,eax
	mov eax,dword ptr [esi]
	mov dword ptr [edi+0x10],eax
	mov cl,byte ptr [esi+4]
	mov byte ptr [edi+0x14],cl

 Block24:
	mov ebx,dword ptr [esp+0x10]
	test ebx,ebx
	je Block29

 Block25:
	cmp dword ptr [esp+0x28],0
	jne Block29

 Block26:
	mov al,byte ptr [esi]
	cmp al,4
	je Block28

 Block27:
	cmp al,5
	jne Block29

 Block28:
	mov edx,dword ptr [esi+1]
	movzx eax,al
	push edx
	push eax
	mov ecx,ebx
	call CUIKeyConfig::AddToPalette

 Block29:
	mov ecx,dword ptr [edi+0x1C]
	neg ecx
	sbb cl,cl
	and cl,7
	inc cl
	mov byte ptr [esi],cl
	mov edx,dword ptr [edi+0x18]
	mov ecx,dword ptr [esp+0x14]
	push 0
	mov dword ptr [esi+1],edx
	call CWnd::InvalidateRect
	test ebx,ebx
	je Block32

 Block30:
	push 0
	mov ecx,ebx
	call CWnd::InvalidateRect
	pop ebp
	pop edi
	pop esi
	mov eax,1
	pop ebx
	add esp,0xC
	ret 0xC

 Block31:
	push ebx
	call CFuncKeyMappedMan::FuncKeyMapped
	mov esi,eax
	jmp Block24

 Block32:
	cmp dword ptr [esp+0x28],0
	je Block34

 Block33:
	mov ecx,ebp
	call CFuncKeyMappedMan::SaveFuncKeyMap

 Block34:
	pop ebp
	pop edi
	pop esi
	mov eax,1
	pop ebx
	add esp,0xC
	ret 0xC
}
}
// CUIKeyConfig::~CUIKeyConfig
_SUB_EXCEPTION_HANDLER(3D8CD0)
__SUB_CLASS_THIS0(003D8CD0, __thiscall, 55977,  CUIKeyConfig, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D8CD0
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
	mov ebx,ecx
	mov dword ptr [esp+0x10],ebx
	int 3// TODO: 	mov dword ptr [ebx],offset CUIKeyConfig::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [ebx+4],offset CUIKeyConfig::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [ebx+8],offset CUIKeyConfig::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	lea esi,[eax+0x1C1]
	lea edi,[eax+4]
	mov ecx,0x6F
	rep movsd
	movsb
	mov eax,dword ptr [TSingleton<CQuickslotKeyMappedMan>::ms_pInstance]
	lea esi,[eax+0x24]
	lea edi,[eax+4]
	mov ecx,8
	rep movsd
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	mov dword ptr [esp+0x1C],7
	test ecx,ecx
	je Block2

 Block1:
	call CUIStatusBar::ReDrawQuickslot

 Block2:
	lea ecx,[ebx+0x11D4]
	mov byte ptr [esp+0x1C],6
	call CLayoutMan::~CLayoutMan
	mov eax,dword ptr [ebx+0x11CC]
	mov byte ptr [esp+0x1C],5
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [ebx+0x11C8]
	mov byte ptr [esp+0x1C],4
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov eax,dword ptr [ebx+0x11C4]
	mov byte ptr [esp+0x1C],3
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	mov eax,dword ptr [ebx+0x11C0]
	mov byte ptr [esp+0x1C],2
	test eax,eax
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov eax,dword ptr [ebx+0x11BC]
	mov byte ptr [esp+0x1C],1
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block12:
	mov ecx,ebx
	mov dword ptr [TSingleton<CUIKeyConfig>::ms_pInstance],0
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CUIWnd::~CUIWnd
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
// CDraggableMenu::MapFuncKey
__SUB_CLASS_THIS(00109A90, __thiscall, 84957,  CDraggableMenu, int32_t, long, long, int32_t) {
__asm {

 Block0:
	sub esp,8
	mov eax,dword ptr [TSingleton<CQuickslotKeyMappedMan>::ms_pInstance]
	push ebx
	mov ebx,dword ptr [esp+0x18]
	push ebp
	mov ebp,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	push esi
	mov esi,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push edi
	mov edi,ecx
	mov dword ptr [esp+0x14],eax
	test ebx,ebx
	je Block2

 Block1:
	lea ecx,[esi+0x1824]
	call CUIStatusBar::CQuickSlot::IsEnabled
	test eax,eax
	je Block17

 Block2:
	mov eax,dword ptr [TSingleton<CUIKeyConfig>::ms_pInstance]
	mov dword ptr [esp+0x10],0
	test eax,eax
	je Block4

 Block3:
	mov dword ptr [esp+0x10],eax

 Block4:
	test ebx,ebx
	je Block14

 Block5:
	mov ecx,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x1C]
	push ecx
	push edx
	mov ecx,esi
	call CUIStatusBar::GetShortCutIndexByPos
	mov ebx,eax
	test ebx,ebx
	jl Block17

 Block6:
	cmp ebx,8
	jge Block17

 Block7:
	xor esi,esi

 Block8:
	push esi
	mov ecx,ebp
	call CFuncKeyMappedMan::FuncKeyMapped
	movzx edx,byte ptr [eax]
	cmp edx,dword ptr [edi+0x18]
	jne Block11

 Block9:
	mov ecx,dword ptr [eax+1]
	cmp ecx,dword ptr [edi+0x1C]
	jne Block11

 Block10:
	mov byte ptr [eax],0

 Block11:
	inc esi
	cmp esi,0x59
	jl Block8

 Block12:
	cmp ebx,0x5A
	jle Block18

 Block13:
	mov edx,dword ptr [edi+0x1C]
	mov eax,dword ptr [edi+0x18]
	mov esi,dword ptr [esp+0x10]
	push edx
	push eax
	mov ecx,esi
	call CUIKeyConfig::AddToPalette
	jmp Block27

 Block14:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov ecx,dword ptr [esp+0x18]
	call CUIKeyConfig::GetShortCutIndexByPos
	mov ebx,eax
	test ebx,ebx
	jl Block17

 Block15:
	cmp ebx,0x5A
	jle Block7

 Block16:
	cmp dword ptr [edi+0x20],0
	je Block7

 Block17:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,8
	ret 0xC

 Block18:
	cmp dword ptr [esp+0x24],0
	je Block20

 Block19:
	mov ecx,dword ptr [esp+0x14]
	mov eax,dword ptr [ecx+ebx*4+4]
	push eax
	mov ecx,ebp
	call CFuncKeyMappedMan::FuncKeyMapped
	mov esi,eax
	mov edx,dword ptr [esi]
	mov dword ptr [edi+0x10],edx
	mov al,byte ptr [esi+4]
	mov byte ptr [edi+0x14],al
	jmp Block26

 Block20:
	push ebx
	mov ecx,ebp
	call CFuncKeyMappedMan::FuncKeyMapped
	cmp dword ptr [edi+0x20],0
	mov esi,eax
	je Block22

 Block21:
	mov ecx,dword ptr [edi+0x1C]
	mov edx,dword ptr [edi+0x18]
	push ecx
	mov ecx,dword ptr [esp+0x14]
	push edx
	call CUIKeyConfig::RemoveFromPalette

 Block22:
	mov al,byte ptr [esi]
	cmp al,4
	je Block25

 Block23:
	cmp al,5
	je Block25

 Block24:
	cmp al,6
	jne Block26

 Block25:
	mov ecx,dword ptr [esi+1]
	movzx edx,al
	push ecx
	mov ecx,dword ptr [esp+0x14]
	push edx
	call CUIKeyConfig::AddToPalette

 Block26:
	mov al,byte ptr [edi+0x18]
	mov byte ptr [esi],al
	mov ecx,dword ptr [edi+0x1C]
	mov dword ptr [esi+1],ecx
	mov esi,dword ptr [esp+0x10]

 Block27:
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0
	call CWnd::InvalidateRect
	test esi,esi
	je Block29

 Block28:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,8
	ret 0xC

 Block29:
	cmp dword ptr [esp+0x24],0
	je Block31

 Block30:
	mov ecx,ebp
	call CFuncKeyMappedMan::SaveFuncKeyMap

 Block31:
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	add esp,8
	ret 0xC
}
}
// CUIKeyConfig::CompareValidateFuncKeyMappedInfo
__SUB_CLASS_THIS0(003D9370, __thiscall, 55979,  CUIKeyConfig, int32_t) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	sub esp,0x30
	push ebx
	push ebp
	push esi
	push edi
	mov ebp,ecx
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x38]
	push eax
	mov ecx,esi
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [esp+0x3C]
	xor ecx,ecx
	cmp dword ptr [eax+4],ecx
	sete cl
	mov dword ptr [esp+0x24],ecx
	test edi,edi
	je Block4

 Block1:
	add edi,0xFFFFFFF0
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
	cmp dword ptr [esp+0x24],0
	je Block10

 Block5:
	xor eax,eax
	add ebp,0xB08
	mov ecx,ebp
	lea esp,[esp]

 Block6:
	cmp byte ptr [ecx],0
	jne Block9

 Block7:
	inc eax
	add ecx,0xC
	cmp eax,0x59
	jl Block6

 Block8:
	mov eax,1
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block9:
	push 0x42C
	push 0
	push ebp
	call _memset
	add esp,0xC
	xor eax,eax
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret

 Block10:
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,esi
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [esp+0x3C]
	mov edx,dword ptr [eax+4]
	mov dword ptr [esp+0x1C],edx
	test esi,esi
	je Block15

 Block11:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block14

 Block12:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block14

 Block13:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block14:
	mov dword ptr [esp+0x3C],0

 Block15:
	mov eax,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	xor esi,esi
	lea edi,[ebp+0xB08]
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x14],1
	mov dword ptr [esp+0x24],esi
	mov dword ptr [esp+0x20],edi

 Block16:
	mov ecx,dword ptr [esp+0x28]
	push esi
	call CFuncKeyMappedMan::FuncKeyMapped
	mov ebx,eax
	movzx eax,byte ptr [ebx]
	xor ebp,ebp
	dec eax
	mov dword ptr [esp+0x18],ebp
	cmp eax,7
	ja Block69

 Block17:
	cmp EAX, 0
je Block59
cmp EAX, 1
je Block18
cmp EAX, 2
je Block18
cmp EAX, 3
je Block65
cmp EAX, 4
je Block65
cmp EAX, 5
je Block65
cmp EAX, 6
je Block18
cmp EAX, 7
je Block65


 Block18:
	mov esi,dword ptr [ebx+1]
	mov eax,0x431BDE83
	imul esi
	sar edx,0x12
	mov ebp,edx
	shr ebp,0x1F
	add ebp,edx
	cmp ebp,2
	jne Block33

 Block19:
	mov eax,0x68DB8BAD
	imul esi
	sar edx,0xC
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0xC8
	je Block31

 Block20:
	cmp eax,0xC9
	je Block31

 Block21:
	cmp eax,0xCA
	je Block31

 Block22:
	cmp eax,0xCD
	je Block31

 Block23:
	cmp eax,0xDD
	je Block31

 Block24:
	cmp eax,0xEC
	je Block31

 Block25:
	cmp eax,0xEE
	je Block31

 Block26:
	cmp eax,0xF5
	je Block31

 Block27:
	cmp eax,0xD4
	je Block31

 Block28:
	cmp eax,0xE2
	je Block31

 Block29:
	cmp eax,0xE3
	je Block31

 Block30:
	push esi
	call is_immediate_mobsummon_item
	add esp,4
	test eax,eax
	je Block39

 Block31:
	mov ecx,dword ptr [esp+0x1C]
	mov eax,dword ptr [ecx+ebp*4+0x501]
	test eax,eax
	jne Block40

 Block32:
	jmp Block41

 Block33:
	cmp ebp,5
	jne Block31

 Block34:
	push esi
	call get_cashslot_item_type
	add esp,4
	cmp eax,8
	jl Block38

 Block35:
	cmp eax,0xB
	jle Block37

 Block36:
	cmp eax,0x27
	jne Block38

 Block37:
	cmp eax,9
	je Block31

 Block38:
	push esi
	call get_etc_cash_item_type
	add esp,4
	cmp eax,6
	je Block31

 Block39:
	mov dword ptr [esp+0x14],0
	jmp Block58

 Block40:
	mov eax,dword ptr [eax-4]

 Block41:
	dec eax
	mov edi,1
	cmp eax,edi
	mov dword ptr [esp+0x2C],eax
	jl Block53

 Block42:
	lea esp,[esp]

 Block43:
	mov ecx,dword ptr [esp+0x1C]
	push edi
	push ebp
	lea edx,[esp+0x38]
	push edx
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block48

 Block44:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x34]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x34]
	test ecx,ecx
	je Block47

 Block46:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block47:
	mov dword ptr [esp+0x34],0

 Block48:
	test esi,esi
	je Block52

 Block49:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	cmp eax,dword ptr [ebx+1]
	jne Block52

 Block50:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	mov ecx,esi
	call eax
	test eax,eax
	jne Block52

 Block51:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x20]
	mov ecx,esi
	call eax
	add dword ptr [esp+0x18],eax

 Block52:
	inc edi
	cmp edi,dword ptr [esp+0x2C]
	jle Block43

 Block53:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax]
	cmp ecx,dword ptr [ebx]
	jne Block56

 Block54:
	mov dl,byte ptr [ebx+4]
	cmp dl,byte ptr [eax+4]
	jne Block56

 Block55:
	mov ecx,dword ptr [esp+0x18]
	cmp dword ptr [eax+8],ecx
	je Block57

 Block56:
	mov dword ptr [esp+0x14],0

 Block57:
	mov edi,dword ptr [esp+0x20]

 Block58:
	mov edx,dword ptr [ebx]
	mov ecx,dword ptr [esp+0x18]
	mov esi,dword ptr [esp+0x24]
	mov dword ptr [edi],edx
	mov al,byte ptr [ebx+4]
	mov byte ptr [edi+4],al
	mov dword ptr [edi+8],ecx
	jmp Block72

 Block59:
	mov edx,dword ptr [ebx+1]
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push ebp
	push edx
	push eax
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block69

 Block60:
	cmp dword ptr [ebx+1],ebp
	je Block69

 Block61:
	mov ecx,dword ptr [edi]
	cmp ecx,dword ptr [ebx]
	jne Block63

 Block62:
	mov dl,byte ptr [ebx+4]
	cmp dl,byte ptr [edi+4]
	je Block64

 Block63:
	mov dword ptr [esp+0x14],ebp

 Block64:
	mov eax,dword ptr [ebx]
	mov dword ptr [edi],eax
	mov cl,byte ptr [ebx+4]
	mov byte ptr [edi+4],cl
	jmp Block72

 Block65:
	mov edx,dword ptr [edi]
	cmp edx,dword ptr [ebx]
	jne Block67

 Block66:
	mov al,byte ptr [ebx+4]
	cmp al,byte ptr [edi+4]
	je Block68

 Block67:
	mov dword ptr [esp+0x14],ebp

 Block68:
	mov ecx,dword ptr [ebx]
	mov dword ptr [edi],ecx
	mov dl,byte ptr [ebx+4]
	mov byte ptr [edi+4],dl
	jmp Block72

 Block69:
	cmp byte ptr [edi],0
	je Block71

 Block70:
	mov dword ptr [esp+0x14],ebp

 Block71:
	mov byte ptr [edi],0
	mov byte ptr [ebx],0

 Block72:
	inc esi
	add edi,0xC
	cmp esi,0x59
	mov dword ptr [esp+0x24],esi
	mov dword ptr [esp+0x20],edi
	jl Block16

 Block73:
	mov eax,dword ptr [esp+0x14]
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CUIKeyConfig::OnMouseMove
_SUB_EXCEPTION_HANDLER(3D90D0)
__SUB_CLASS_THIS(003D90D0, __thiscall, 55984,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D90D0
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
	mov esi,ecx
	mov ebx,dword ptr [esp+0x30]
	mov ebp,dword ptr [esp+0x2C]
	push ebx
	push ebp
	lea ecx,[esi-4]
	call CUIKeyConfig::GetShortCutIndexByPos
	cmp eax,0x5A
	jg Block9

 Block1:
	cmp eax,0xFFFFFFFF
	je Block9

 Block2:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	lea eax,[eax+eax*2+0x2C1]
	push 5
	lea edi,[esi+eax*4]
	call CInputSystem::SetCursorState
	mov al,byte ptr [edi]
	cmp al,2
	je Block8

 Block3:
	cmp al,7
	je Block8

 Block4:
	cmp al,1
	jne Block6

 Block5:
	mov ecx,dword ptr [edi+1]
	push 1
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	call CSkillInfo::GetSkill
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	lea ecx,[eax+ebx+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	add eax,ebp
	push eax
	lea ecx,[esi+0x84]
	call CUIToolTip::SetToolTip_Skill
	jmp Block11

 Block6:
	cmp al,8
	jne Block11

 Block7:
	mov ecx,dword ptr [edi+1]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x30]
	push ecx
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	lea ecx,[eax+ebx+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	add eax,ebp
	push eax
	lea ecx,[esi+0x84]
	call CUIToolTip::SetToolTip_MacroSysSkill
	jmp Block11

 Block8:
	mov ecx,dword ptr [edi+1]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[esp+0x18]
	push edx
	call CItemInfo::GetItemSlot
	mov ecx,dword ptr [esp+0x18]
	push 1
	sub esp,8
	xor edx,edx
	mov eax,esp
	mov dword ptr [esp+0x30],edx
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [eax+4],edx
	push edx
	push edx
	mov eax,dword ptr [ecx]
	push edx
	mov ebp,dword ptr [esp+0x30]
	push edx
	push edx
	push edx
	push edx
	push edx
	push edx
	push edx
	push edx
	push edx
	push edx
	mov edx,dword ptr [eax+4]
	mov byte ptr [esp+0x64],1
	call edx
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edi+1]
	add ebp,0x20
	push ebp
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	lea ecx,[eax+ebx+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	add eax,dword ptr [esp+0x7C]
	lea ecx,[esi+0x84]
	push eax
	mov byte ptr [esp+0x78],0
	call CUIToolTip::SetToolTip_Bundle
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	jmp Block11

 Block9:
	cmp dword ptr [esi+0x88],1
	je Block11

 Block10:
	lea ecx,[esi+0x84]
	call CUIToolTip::ClearToolTip

 Block11:
	xor eax,eax
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 8
}
}
// CUIKeyConfig::OnButtonClicked
_SUB_EXCEPTION_HANDLER(3DDD90)
__SUB_CLASS_THIS(003DDD90, __thiscall, 55983,  CUIKeyConfig, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DDD90
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
	push edi
	call CUIWnd::OnButtonClicked
	cmp edi,0x7D0
	ja Block11

 Block1:
	je Block6

 Block2:
	sub edi,1
	je Block5

 Block3:
	sub edi,1
	jne Block20

 Block4:
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push edi
	call CWnd::InvalidateRect
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 5
	call CWvsContext::UI_Close
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 4

 Block5:
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	call CFuncKeyMappedMan::SaveFuncKeyMap
	mov ecx,dword ptr [TSingleton<CQuickslotKeyMappedMan>::ms_pInstance]
	call CQuickslotKeyMappedMan::SaveQuickslotKeyMap
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 5
	call CWvsContext::UI_Close
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 4

 Block6:
	push 0xAEC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block8

 Block7:
	push 0
	push esi
	mov ecx,eax
	call CUIKeyConfig::CNoticeDlg::_ctor_0
	jmp Block9

 Block8:
	xor eax,eax

 Block9:
	mov ecx,eax
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CDialog::DoModal
	cmp eax,1
	jne Block20

 Block10:
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	call CFuncKeyMappedMan::DefaultFuncKeyMap
	mov ecx,dword ptr [TSingleton<CQuickslotKeyMappedMan>::ms_pInstance]
	call CQuickslotKeyMappedMan::DefaultQuickslotKeyMap
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	call CUIStatusBar::ReDrawQuickslot
	jmp Block19

 Block11:
	sub edi,0x7D1
	je Block14

 Block12:
	sub edi,1
	jne Block20

 Block13:
	mov ecx,esi
	call CUIKeyConfig::OnQuickslotKeyConf
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 4

 Block14:
	push 0xAEC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x14],1
	test eax,eax
	je Block16

 Block15:
	push 1
	push esi
	mov ecx,eax
	call CUIKeyConfig::CNoticeDlg::_ctor_0
	jmp Block17

 Block16:
	xor eax,eax

 Block17:
	mov ecx,eax
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call CDialog::DoModal
	cmp eax,1
	jne Block20

 Block18:
	mov eax,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	push 0x1BD
	add eax,4
	push 0
	push eax
	call _memset
	add esp,0xC
	mov ecx,esi
	call CUIKeyConfig::ResetPaletteItems
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0
	call CWnd::InvalidateRect

 Block19:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block20:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 4
}
}
// CUIKeyConfig::DrawKeyPalette
_SUB_EXCEPTION_HANDLER(3D99F0)
__SUB_CLASS_THIS0(003D99F0, __thiscall, 55977,  CUIKeyConfig, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x78]
	sub esp,0x78
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D99F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x74],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [ebp+0x54],edi
	xor ebx,ebx
	mov dword ptr [ebp+0x68],ebx
	lea eax,[ebp+0x70]
	push 0x3D0
	push eax
	mov dword ptr [ebp-4],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[ebp+0x68]
	push ecx
	push eax
	mov byte ptr [ebp-4],1
	call PcCreate_IWzCanvas
	mov eax,dword ptr [ebp+0x70]
	add esp,0xC
	mov byte ptr [ebp-4],bl
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x40]
	push edx
	call esi
	lea eax,[ebp+0x40]
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
	lea ecx,[ebp+0x58]
	push ecx
	mov byte ptr [ebp-4],2
	call esi
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov esi,dword ptr [edi+0x78]
	mov byte ptr [ebp-4],3
	cmp esi,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[ebp+0x70]
	push ecx
	push esi
	mov dword ptr [ebp+0x70],ebx
	call edx
	cmp eax,ebx
	jge Block10

 Block9:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov eax,dword ptr [ebp+0x54]
	mov esi,dword ptr [eax+0x78]
	mov edi,dword ptr [ebp+0x70]
	cmp esi,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[ebp+0x6C]
	push edx
	push esi
	mov dword ptr [ebp+0x6C],ebx
	call eax
	cmp eax,ebx
	jge Block14

 Block13:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	mov ecx,dword ptr [ebp+0x68]
	cmp ecx,ebx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea edx,[ebp+0x40]
	push edx
	mov edx,dword ptr [ebp+0x6C]
	lea eax,[ebp+0x58]
	push eax
	push edi
	push edx
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp+0x58],si
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	cmp eax,ebx
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp+0x40],si
	jne Block23

 Block21:
	mov eax,dword ptr [ebp+0x48]
	xor edx,edx
	mov word ptr [ebp+0x40],dx
	cmp eax,ebx
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[ebp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov ecx,dword ptr [ebp+0x54]
	xor esi,esi
	add ecx,0xF3C
	mov dword ptr [ebp+0x50],esi
	mov dword ptr [ebp+0x70],ecx

 Block25:
	mov edx,dword ptr [ebp+0x70]
	cmp dword ptr [edx],ebx
	jne Block53

 Block26:
	mov dword ptr [ebp+0x6C],ebx
	lea eax,[ebp+0x24]
	push 0x994
	push eax
	mov byte ptr [ebp-4],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x54]
	mov edx,dword ptr [eax]
	push esi
	mov byte ptr [ebp-4],5
	call CUIKeyConfig::GetIdxFromPaletteSlot
	push eax
	push edx
	lea ecx,[ebp+0x6C]
	push ecx
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x24]
	add esp,0xC
	mov byte ptr [ebp-4],4
	cmp eax,ebx
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov edi,dword ptr [ebp+0x6C]
	push ebx
	push ebx
	push 0xFFFFFFFF
	push edi
	push ebx
	push ebx
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push ebx
	push ebx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push ebx
	push ebx
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x2C],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x54]
	mov ecx,dword ptr [edx+0x11C0]
	mov byte ptr [ebp-4],6
	cmp ecx,ebx
	je Block7

 Block29:
	lea eax,[ebp+0x30]
	push eax
	mov byte ptr [ebp-4],4
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x28],esi
	cmp eax,ebx
	je Block32

 Block30:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x20]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	cmp eax,ebx
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x20]
	cmp eax,ebx
	mov esi,ecx
	mov dword ptr [ebp+0x28],esi
	jge Block32

 Block31:
	cmp eax,0x80004002
	jne Block3

 Block32:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],9
	jne Block35

 Block33:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	cmp eax,ebx
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block36:
	cmp esi,ebx
	sete al
	test al,al
	je Block41

 Block37:
	mov byte ptr [ebp-4],4
	cmp esi,ebx
	je Block39

 Block38:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block39:
	mov byte ptr [ebp-4],0
	cmp edi,ebx
	je Block53

 Block40:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4
	jmp Block53

 Block41:
	mov eax,3
	mov word ptr [ebp+0x58],ax
	mov dword ptr [ebp+0x60],0xFF
	mov ecx,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],0xA
	cmp ecx,ebx
	je Block7

 Block42:
	mov ebx,dword ptr [ebp+0x58]
	mov edx,dword ptr [ebp+0x50]
	mov edx,dword ptr [edx*8+_D_S_PTSHORTKEYPOS__1+732]
	mov edi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp+0x60]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp+0x64]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [ebp+0x50]
	mov eax,dword ptr [eax*8+_D_S_PTSHORTKEYPOS__1+728]
	push esi
	push edx
	push eax
	mov dword ptr [ebp+0x2C],ecx
	push ecx
	mov ecx,dword ptr [edi+0x80]
	call ecx
	test eax,eax
	jge Block44

 Block43:
	mov edx,dword ptr [ebp+0x2C]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edx
	push eax
	call _com_issue_errorex

 Block44:
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],9
	jne Block47

 Block45:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	mov byte ptr [ebp-4],4
	test esi,esi
	je Block50

 Block49:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block50:
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block52

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block52:
	xor ebx,ebx

 Block53:
	mov esi,dword ptr [ebp+0x50]
	add dword ptr [ebp+0x70],0xC
	inc esi
	cmp esi,0x2A
	mov dword ptr [ebp+0x50],esi
	jl Block25

 Block54:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x30]
	push ecx
	call esi
	lea edx,[ebp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	lea eax,[ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0xB
	call esi
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	lea edx,[ebp]
	push edx
	mov byte ptr [ebp-4],0xC
	call esi
	lea eax,[ebp]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block60

 Block59:
	push eax
	call _com_issue_error

 Block60:
	lea ecx,[ebp+0x58]
	push ecx
	mov byte ptr [ebp-4],0xD
	call esi
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	lea eax,[ebp+0x40]
	mov bl,0xE
	push eax
	mov byte ptr [ebp-4],bl
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block64

 Block63:
	push eax
	call _com_issue_error

 Block64:
	mov edx,dword ptr [ebp+0x54]
	mov ecx,dword ptr [edx+0x11CC]
	mov byte ptr [ebp-4],0xF
	test ecx,ecx
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	lea eax,[ebp+0x30]
	push eax
	lea edx,[ebp+0x10]
	push edx
	lea eax,[ebp]
	push eax
	lea edx,[ebp+0x58]
	push edx
	mov edx,dword ptr [ebp+0x68]
	lea eax,[ebp+0x40]
	push eax
	push edx
	lea eax,[ebp-0x1C]
	push eax
	call IWzGr2DLayer::InsertCanvas
	mov edi,8
	cmp word ptr [ebp-0x1C],di
	jne Block73

 Block67:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	test eax,eax
	je Block69

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block69:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block70:
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x40],di
	jne Block74

 Block71:
	xor eax,eax
	mov word ptr [ebp+0x40],ax
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block75

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block73:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea edx,[ebp-0x1C]
	push edx
	call esi
	jmp Block70

 Block74:
	lea ecx,[ebp+0x40]
	push ecx
	call esi

 Block75:
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp+0x58],di
	jne Block78

 Block76:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea eax,[ebp+0x58]
	push eax
	call esi

 Block79:
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp],di
	jne Block82

 Block80:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea edx,[ebp]
	push edx
	call esi

 Block83:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x10],di
	jne Block86

 Block84:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea ecx,[ebp+0x10]
	push ecx
	call esi

 Block87:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp+0x30],di
	jne Block90

 Block88:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea eax,[ebp+0x30]
	push eax
	call esi

 Block91:
	mov eax,dword ptr [ebp+0x68]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block93

 Block92:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block93:
	lea esp,[ebp-0x2C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x74]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x78
	mov esp,ebp
	pop ebp
	ret
}
}
// CUIKeyConfig::CNoticeDlg::OnButtonClicked
__SUB_CLASS_THIS(003D8350, __thiscall, 56015,  CUIKeyConfig::CNoticeDlg, void, uint32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	lea ecx,[esi+0xA4]
	call CUIToolTip::ClearToolTip
	mov ecx,dword ptr [esp+8]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push ecx
	mov ecx,esi
	call edx
	pop esi
	ret 4
}
}
// CDraggableSkill::CDraggableSkill
_SUB_EXCEPTION_HANDLER(3D8F60)
__SUB_CLASS_THIS(003D8F60, __thiscall, 84971,  CDraggableSkill, void, IWzGr2DLayer*, long, IUIMsgHandler*, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D8F60
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
	int 3// TODO: 	mov dword ptr [esi],offset IDraggable::`vftable'
	mov dword ptr [esi+0xC],eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [esi+0x18],eax
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esi+0x1C],ecx
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [esi+0x24],eax
	int 3// TODO: 	mov dword ptr [esi],offset CDraggableSkill::`vftable'
	mov dword ptr [esi+0x20],edx
	mov dword ptr [esi+0x28],ecx
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0x18
}
}
// CUIKeyConfig::OnMouseButton
__SUB_CLASS_THIS(003DD7A0, __thiscall, 55986,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x201
	jne Block2

 Block1:
	mov eax,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+0xC]
	push eax
	push edx
	add ecx,0xFFFFFFFC
	call CUIKeyConfig::TryBeginDragFuncKeyMappedIcon

 Block2:
	ret 0x10
}
}
// CUIKeyConfig::AddToPalette
__SUB_CLASS_THIS(003D8B80, __thiscall, 55980,  CUIKeyConfig, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	push esi
	cmp eax,5
	jne Block2

 Block1:
	lea esi,[edx-0x14]
	jmp Block4

 Block2:
	cmp eax,6
	jne Block5

 Block3:
	lea esi,[edx-0x41]

 Block4:
	cmp esi,0x36
	jg Block6

 Block5:
	push edx
	push eax
	call CUIKeyConfig::GetPaletteSlotFromIdx
	add eax,0x145
	lea eax,[eax+eax*2]
	mov dword ptr [ecx+eax*4],0

 Block6:
	pop esi
	ret 8
}
}
// CUIKeyConfig::TryBeginDragFuncKeyMappedIcon
_SUB_EXCEPTION_HANDLER(3DB310)
__SUB_CLASS_THIS(003DB310, __thiscall, 55980,  CUIKeyConfig, void, long, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DB310
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x240
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x64],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [ebp+0x58],ebx
	mov eax,dword ptr [ebp+0x74]
	mov ecx,dword ptr [ebp+0x70]
	push eax
	push ecx
	mov ecx,ebx
	call CUIKeyConfig::GetShortCutIndexByPos
	mov edi,eax
	mov dword ptr [ebp+0x5C],edi
	cmp edi,0xFFFFFFFF
	je Block166

 Block1:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[ebp+0x3C]
	push edx
	call CWvsContext::GetCharacterData
	mov esi,dword ptr [ebp+0x40]
	mov eax,dword ptr [eax+4]
	mov dword ptr [ebp+0x44],eax
	test esi,esi
	je Block6

 Block2:
	add esi,0xFFFFFFF0
	lea ebx,[esi+4]
	push ebx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block3:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block5

 Block4:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block5:
	mov ebx,dword ptr [ebp+0x58]
	mov dword ptr [ebp+0x40],0

 Block6:
	cmp edi,0x5A
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	jg Block8

 Block7:
	push edi
	call CFuncKeyMappedMan::FuncKeyMapped
	mov ecx,dword ptr [eax]
	mov dl,byte ptr [eax+4]
	mov dword ptr [ebp+0x4C],ecx
	mov byte ptr [ebp+0x50],dl
	jmp Block10

 Block8:
	lea eax,[edi+edi*2+0x2BE]
	cmp dword ptr [ebx+eax*4],0
	jne Block166

 Block9:
	lea ecx,[edi+edi*2]
	mov edx,dword ptr [ebx+ecx*4+0xAF0]
	lea eax,[ebx+ecx*4+0xAF0]
	mov al,byte ptr [eax+4]
	mov dword ptr [ebp+0x4C],edx
	mov byte ptr [ebp+0x50],al

 Block10:
	lea ecx,[ebp+0x10]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x10]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	xor edi,edi
	add esp,8
	cmp eax,edi
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	mov eax,3
	mov dword ptr [ebp-4],edi
	mov word ptr [ebp-0x1C],ax
	mov dword ptr [ebp-0x14],edi
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],1
	cmp ecx,edi
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	lea edx,[ebp+0x10]
	push edx
	lea eax,[ebp-0x1C]
	push eax
	push edi
	push edi
	push edi
	push edi
	push edi
	lea edx,[ebp+0x48]
	push edx
	call IWzGr2D::CreateLayer
	mov esi,8
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp-0x1C],si
	jne Block17

 Block15:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,edi
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	mov byte ptr [ebp-4],4
	cmp word ptr [ebp+0x10],si
	jne Block21

 Block19:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	cmp eax,edi
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov esi,dword ptr [ebp+0x48]
	cmp esi,edi
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0x80FFFFFF
	push esi
	call edx
	cmp eax,edi
	jge Block26

 Block25:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block26:
	lea eax,[ebp+0x54]
	push eax
	mov ecx,ebx
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,5
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp+0x28],cx
	mov dword ptr [ebp+0x30],eax
	test eax,eax
	je Block28

 Block27:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block28:
	mov edx,dword ptr [ebp+0x28]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x2C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x30]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x34]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	mov byte ptr [ebp-4],6
	call eax
	test eax,eax
	jge Block30

 Block29:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block30:
	cmp word ptr [ebp+0x28],8
	mov byte ptr [ebp-4],bl
	jne Block33

 Block31:
	mov eax,dword ptr [ebp+0x30]
	xor ecx,ecx
	mov word ptr [ebp+0x28],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[ebp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	mov dword ptr [ebp+0x60],0
	movzx edi,byte ptr [ebp+0x4C]
	lea eax,[edi-1]
	mov byte ptr [ebp-4],7
	cmp eax,7
	ja Block163

 Block37:
	cmp EAX, 0
je Block115
cmp EAX, 1
je Block38
cmp EAX, 2
je Block38
cmp EAX, 3
je Block144
cmp EAX, 4
je Block144
cmp EAX, 5
je Block144
cmp EAX, 6
je Block38
cmp EAX, 7
je Block125


 Block38:
	mov ecx,dword ptr [ebp+0x44]
	mov eax,0x431BDE83
	imul dword ptr [ebp+0x4D]
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov dword ptr [ebp+0x54],eax
	mov eax,dword ptr [ecx+eax*4+0x501]
	test eax,eax
	je Block40

 Block39:
	mov eax,dword ptr [eax-4]

 Block40:
	lea edi,[eax-1]
	cmp edi,1
	mov dword ptr [ebp+0x5C],1
	jl Block163

 Block41:
	mov ebx,ecx
	lea ecx,[ecx]

 Block42:
	mov edx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [ebp+0x54]
	push edx
	push eax
	lea ecx,[ebp+0x30]
	push ecx
	mov ecx,ebx
	call CharacterData::GetItem
	mov esi,dword ptr [eax+4]
	mov eax,dword ptr [ebp+0x34]
	test eax,eax
	je Block47

 Block43:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block46

 Block44:
	mov edx,dword ptr [ebp+0x34]
	add edx,4
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0x34]
	test ecx,ecx
	je Block46

 Block45:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block46:
	mov dword ptr [ebp+0x34],0

 Block47:
	test esi,esi
	je Block49

 Block48:
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	cmp eax,dword ptr [ebp+0x4D]
	je Block51

 Block49:
	mov eax,dword ptr [ebp+0x5C]
	inc eax
	cmp eax,edi
	mov dword ptr [ebp+0x5C],eax
	jle Block42

 Block50:
	jmp Block163

 Block51:
	cmp dword ptr [ebp+0x5C],0
	je Block163

 Block52:
	mov eax,dword ptr [ebp+0x4D]
	push 0
	push 0
	push eax
	lea ecx,[ebp+0x44]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemIcon
	mov eax,dword ptr [eax]
	test eax,eax
	je Block54

 Block53:
	mov edx,dword ptr [eax]
	mov dword ptr [ebp+0x60],eax
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block54:
	mov eax,dword ptr [ebp+0x44]
	test eax,eax
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block56:
	cmp dword ptr [ebp+0x60],0
	sete al
	test al,al
	jne Block163

 Block57:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x2C]
	push eax
	call esi
	lea ecx,[ebp-0x2C]
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
	lea edx,[ebp]
	push edx
	mov byte ptr [ebp-4],8
	call esi
	lea eax,[ebp]
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
	lea ecx,[ebp-0x7C]
	push ecx
	mov byte ptr [ebp-4],9
	call esi
	lea edx,[ebp-0x7C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block63

 Block62:
	push eax
	call _com_issue_error

 Block63:
	lea eax,[ebp-0x3C]
	push eax
	mov byte ptr [ebp-4],0xA
	call esi
	lea ecx,[ebp-0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block65

 Block64:
	push eax
	call _com_issue_error

 Block65:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp-0x5C]
	mov bl,0xB
	push edx
	mov byte ptr [ebp-4],bl
	call edi
	lea eax,[ebp-0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block67

 Block66:
	push eax
	call _com_issue_error

 Block67:
	mov esi,dword ptr [ebp+0x60]
	lea ecx,[ebp-0x2C]
	push ecx
	lea edx,[ebp]
	push edx
	lea eax,[ebp-0x7C]
	push eax
	lea ecx,[ebp-0x3C]
	push ecx
	mov ecx,dword ptr [ebp+0x48]
	lea edx,[ebp-0x5C]
	push edx
	push esi
	lea eax,[ebp-0x8C]
	push eax
	mov byte ptr [ebp-4],0xC
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x8C],8
	jne Block70

 Block68:
	mov eax,dword ptr [ebp-0x84]
	xor ecx,ecx
	mov word ptr [ebp-0x8C],cx
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea edx,[ebp-0x8C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	cmp word ptr [ebp-0x5C],8
	mov byte ptr [ebp-4],bl
	jne Block74

 Block72:
	xor eax,eax
	mov word ptr [ebp-0x5C],ax
	mov eax,dword ptr [ebp-0x54]
	test eax,eax
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea ecx,[ebp-0x5C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0xA
	jne Block82

 Block76:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block78

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block78:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block79:
	cmp word ptr [ebp-0x7C],8
	mov byte ptr [ebp-4],9
	jne Block83

 Block80:
	mov eax,dword ptr [ebp-0x74]
	xor ecx,ecx
	mov word ptr [ebp-0x7C],cx
	test eax,eax
	je Block84

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block82:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp-0x3C]
	push eax
	call ebx
	jmp Block79

 Block83:
	lea edx,[ebp-0x7C]
	push edx
	call ebx

 Block84:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],8
	jne Block87

 Block85:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block88

 Block87:
	lea ecx,[ebp]
	push ecx
	call ebx

 Block88:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],7
	jne Block91

 Block89:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block92

 Block90:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block92

 Block91:
	lea eax,[ebp-0x2C]
	push eax
	call ebx

 Block92:
	lea ecx,[ebp-0x6C]
	push ecx
	call edi
	lea edx,[ebp-0x6C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block94

 Block93:
	push eax
	call _com_issue_error

 Block94:
	lea eax,[ebp-0x4C]
	push eax
	mov byte ptr [ebp-4],0xD
	call edi
	lea ecx,[ebp-0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	mov byte ptr [ebp-4],0xE
	test esi,esi
	jne Block98

 Block97:
	push 0x80004003
	call _com_issue_error

 Block98:
	lea edx,[ebp-0x6C]
	push edx
	lea eax,[ebp-0x4C]
	push eax
	mov ecx,esi
	call IWzCanvas::Getcy
	mov ecx,eax
	mov eax,dword ptr [ebp+0x74]
	sub eax,ecx
	add eax,0x10
	push eax
	mov ecx,esi
	call IWzCanvas::Getcx
	mov edi,dword ptr [ebp+0x48]
	mov edx,eax
	mov eax,dword ptr [ebp+0x70]
	sub eax,edx
	sub eax,0x10
	push eax
	mov ecx,edi
	call IWzVector2D::RelMove
	cmp word ptr [ebp-0x4C],8
	mov byte ptr [ebp-4],0xD
	jne Block101

 Block99:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	test eax,eax
	je Block102

 Block100:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block102

 Block101:
	lea ecx,[ebp-0x4C]
	push ecx
	call ebx

 Block102:
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],7
	jne Block105

 Block103:
	mov eax,dword ptr [ebp-0x64]
	xor edx,edx
	mov word ptr [ebp-0x6C],dx
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea eax,[ebp-0x6C]
	push eax
	call ebx

 Block106:
	push 0x28
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x40],eax
	mov esi,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block111

 Block107:
	test esi,esi
	je Block109

 Block108:
	lea edx,[esi+4]
	jmp Block110

 Block109:
	xor edx,edx

 Block110:
	mov ecx,dword ptr [ebp+0x5C]
	push edx
	mov edx,dword ptr [ebp+0x54]
	push 0
	push ecx
	push edx
	push edi
	mov ecx,eax
	call CDraggableItem::_ctor_0
	jmp Block112

 Block111:
	xor eax,eax

 Block112:
	mov byte ptr [ebp-4],7
	test esi,esi
	je Block114

 Block113:
	push 0
	lea ecx,[esi+4]
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::BeginDragDrop
	jmp Block160

 Block114:
	xor ecx,ecx
	push ecx
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::BeginDragDrop
	jmp Block160

 Block115:
	mov esi,dword ptr [ebp+0x4D]
	push esi
	call is_active_skill
	add esp,4
	test eax,eax
	je Block163

 Block116:
	mov ecx,dword ptr [ebp+0x44]
	lea eax,[ebp+0x5C]
	push eax
	push esi
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	mov dword ptr [ebp+0x5C],0
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block163

 Block117:
	mov edx,dword ptr [ebp+0x5C]
	add edx,0x25C
	push edx
	lea ecx,[ebp+0x60]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	cmp dword ptr [ebp+0x60],0
	sete al
	test al,al
	jne Block163

 Block118:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x19C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0xDC]
	mov byte ptr [ebp-4],0x10
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x9C]
	mov byte ptr [ebp-4],0x11
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0xBC]
	mov byte ptr [ebp-4],0x12
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1CC]
	mov byte ptr [ebp-4],0x13
	call Ztl_variant_t::_ctor_1
	mov esi,dword ptr [ebp+0x60]
	mov edi,dword ptr [ebp+0x48]
	lea eax,[ebp-0x19C]
	push eax
	lea ecx,[ebp-0xDC]
	push ecx
	lea edx,[ebp-0x9C]
	push edx
	lea eax,[ebp-0xBC]
	push eax
	lea ecx,[ebp-0x1CC]
	push ecx
	push esi
	lea edx,[ebp-0x20C]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x14
	call IWzGr2DLayer::InsertCanvas
	lea ecx,[ebp-0x20C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1CC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0xBC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x9C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0xDC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x19C]
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1DC]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0xFC]
	mov byte ptr [ebp-4],0x15
	call Ztl_variant_t::_ctor_1
	mov byte ptr [ebp-4],0x16
	test esi,esi
	jne Block120

 Block119:
	push 0x80004003
	call _com_issue_error

 Block120:
	lea eax,[ebp-0x1DC]
	push eax
	lea ecx,[ebp-0xFC]
	push ecx
	mov ecx,esi
	call IWzCanvas::Getcy
	mov edx,eax
	mov eax,dword ptr [ebp+0x74]
	sub eax,edx
	add eax,0x10
	push eax
	mov ecx,esi
	call IWzCanvas::Getcx
	mov ecx,eax
	mov eax,dword ptr [ebp+0x70]
	sub eax,ecx
	sub eax,0x10
	push eax
	mov ecx,edi
	call IWzVector2D::RelMove
	lea ecx,[ebp-0xFC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1DC]
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::~Ztl_variant_t
	push 0x2C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x40],eax
	mov esi,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x17
	test eax,eax
	je Block111

 Block121:
	test esi,esi
	je Block123

 Block122:
	lea ecx,[esi+4]
	jmp Block124

 Block123:
	xor ecx,ecx

 Block124:
	mov edx,dword ptr [ebp+0x5C]
	push 0xFFFFFFFF
	push 0xFFFFFFFF
	push 0
	push ecx
	mov ecx,dword ptr [edx]
	push ecx
	push edi
	mov ecx,eax
	call CDraggableSkill::_ctor_0
	jmp Block112

 Block125:
	mov dword ptr [ebp+0x54],0
	lea edx,[ebp+0x24]
	push 0x1069
	push edx
	mov byte ptr [ebp-4],0x18
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x4D]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x54]
	push edx
	mov byte ptr [ebp-4],0x19
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x24]
	add esp,0xC
	mov byte ptr [ebp-4],0x18
	test eax,eax
	je Block127

 Block126:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block127:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1BC]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x11C]
	mov byte ptr [ebp-4],0x1A
	call Ztl_variant_t::_ctor_1
	mov esi,dword ptr [ebp+0x54]
	push 0xFFFFFFFF
	push 0
	mov bl,0x1B
	push esi
	mov byte ptr [ebp-4],bl
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov eax,esp
	push 0
	push 0
	lea ecx,[ebp-0x1BC]
	push ecx
	lea edx,[ebp-0x11C]
	push edx
	push 0xFFFFFFFF
	push eax
	push esi
	call ZStrUtil::_Conv_0
	add esp,8
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x1C
	jne Block129

 Block128:
	push 0x80004003
	call _com_issue_error

 Block129:
	lea eax,[ebp-0x23C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x1D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x20]
	call _x_com_ptr<IWzCanvas>::CreateFromUnknown
	push eax
	lea ecx,[ebp+0x60]
	call _x_com_ptr<IWzCanvas>::op_assign_copy
	mov eax,dword ptr [ebp+0x20]
	test eax,eax
	je Block131

 Block130:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block131:
	lea ecx,[ebp-0x23C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x11C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1BC]
	mov byte ptr [ebp-4],0x18
	call Ztl_variant_t::~Ztl_variant_t
	mov ebx,dword ptr [ebp+0x60]
	test ebx,ebx
	sete al
	test al,al
	je Block134

 Block132:
	mov byte ptr [ebp-4],7
	test esi,esi
	je Block163

 Block133:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	jmp Block162

 Block134:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x17C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1EC]
	mov byte ptr [ebp-4],0x1E
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x15C]
	mov byte ptr [ebp-4],0x1F
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1FC]
	mov byte ptr [ebp-4],0x20
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x13C]
	mov byte ptr [ebp-4],0x21
	call Ztl_variant_t::_ctor_1
	mov edi,dword ptr [ebp+0x48]
	lea eax,[ebp-0x17C]
	push eax
	lea ecx,[ebp-0x1EC]
	push ecx
	lea edx,[ebp-0x15C]
	push edx
	lea eax,[ebp-0x1FC]
	push eax
	lea ecx,[ebp-0x13C]
	push ecx
	push ebx
	lea edx,[ebp-0x21C]
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0x22
	call IWzGr2DLayer::InsertCanvas
	lea ecx,[ebp-0x21C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x13C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1FC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x15C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1EC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x17C]
	mov byte ptr [ebp-4],0x18
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[ebp-0xCC]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0xAC]
	mov byte ptr [ebp-4],0x23
	call Ztl_variant_t::_ctor_1
	mov byte ptr [ebp-4],0x24
	test ebx,ebx
	jne Block136

 Block135:
	push 0x80004003
	call _com_issue_error

 Block136:
	lea eax,[ebp-0xCC]
	push eax
	lea ecx,[ebp-0xAC]
	push ecx
	mov ecx,ebx
	call IWzCanvas::Getcy
	mov edx,eax
	mov eax,dword ptr [ebp+0x74]
	sub eax,edx
	add eax,0x10
	push eax
	mov ecx,ebx
	call IWzCanvas::Getcx
	mov ecx,eax
	mov eax,dword ptr [ebp+0x70]
	sub eax,ecx
	sub eax,0x10
	push eax
	mov ecx,edi
	call IWzVector2D::RelMove
	lea ecx,[ebp-0xAC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0xCC]
	mov byte ptr [ebp-4],0x18
	call Ztl_variant_t::~Ztl_variant_t
	push 0x2C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x40],eax
	mov ebx,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],0x25
	test eax,eax
	je Block141

 Block137:
	test ebx,ebx
	je Block139

 Block138:
	lea ecx,[ebx+4]
	jmp Block140

 Block139:
	xor ecx,ecx

 Block140:
	mov edx,dword ptr [ebp+0x4D]
	push 0xFFFFFFFF
	push 0xFFFFFFFF
	push 1
	push ecx
	push edx
	push edi
	mov ecx,eax
	call CDraggableSkill::_ctor_0
	jmp Block142

 Block141:
	xor eax,eax

 Block142:
	mov byte ptr [ebp-4],0x18
	test ebx,ebx
	je Block157

 Block143:
	lea ecx,[ebx+4]
	jmp Block158

 Block144:
	mov dword ptr [ebp+0x54],0
	lea eax,[ebp+0x38]
	push 0x994
	mov bl,0x26
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x4D]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x54]
	push edx
	mov byte ptr [ebp-4],0x27
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x38]
	add esp,0xC
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block146

 Block145:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block146:
	mov esi,dword ptr [ebp+0x54]
	push 0xFFFFFFFF
	push 0
	push esi
	call ZStrUtil::_ConvReqSize_0
	add esp,0xC
	call __alloca_probe_16
	mov eax,esp
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push esi
	call ZStrUtil::_Conv_0
	add esp,8
	mov ecx,esp
	mov dword ptr [ebp+0x40],esp
	push eax
	call Ztl_bstr_t::_ctor_2
	mov ecx,dword ptr [ebp+0x58]
	lea eax,[ebp-0x22C]
	push eax
	add ecx,0x11C0
	mov byte ptr [ebp-4],0x28
	call _x_com_ptr<IWzProperty>::op_arrow
	mov ecx,eax
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x29
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x60]
	call _x_com_ptr<IWzCanvas>::op_assign_unknown
	lea ecx,[ebp-0x22C]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	cmp dword ptr [ebp+0x60],0
	sete al
	test al,al
	jne Block132

 Block147:
	push offset _D_VTMISSING
	lea ecx,[ebp-0x16C]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x14C]
	mov byte ptr [ebp-4],0x2A
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x12C]
	mov byte ptr [ebp-4],0x2B
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x10C]
	mov byte ptr [ebp-4],0x2C
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0xEC]
	mov byte ptr [ebp-4],0x2D
	call Ztl_variant_t::_ctor_1
	lea ecx,[ebp-0x16C]
	push ecx
	lea edx,[ebp-0x14C]
	push edx
	lea eax,[ebp-0x12C]
	push eax
	mov eax,dword ptr [ebp+0x60]
	lea ecx,[ebp-0x10C]
	push ecx
	lea edx,[ebp-0xEC]
	push edx
	push eax
	lea ecx,[ebp-0x24C]
	push ecx
	mov ecx,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],0x2E
	call IWzGr2DLayer::InsertCanvas
	lea ecx,[ebp-0x24C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0xEC]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x10C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x12C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x14C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x16C]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push offset _D_VTMISSING
	lea ecx,[ebp-0x1AC]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[ebp-0x18C]
	mov byte ptr [ebp-4],0x2F
	call Ztl_variant_t::_ctor_1
	cmp dword ptr [ebp+0x60],0
	mov byte ptr [ebp-4],0x30
	jne Block149

 Block148:
	push 0x80004003
	call _com_issue_error

 Block149:
	mov ecx,dword ptr [ebp+0x60]
	lea edx,[ebp-0x1AC]
	push edx
	lea eax,[ebp-0x18C]
	push eax
	call IWzCanvas::Getcy
	mov ecx,eax
	mov eax,dword ptr [ebp+0x74]
	sub eax,ecx
	mov ecx,dword ptr [ebp+0x60]
	add eax,0x10
	push eax
	call IWzCanvas::Getcx
	mov ecx,dword ptr [ebp+0x48]
	mov edx,eax
	mov eax,dword ptr [ebp+0x70]
	sub eax,edx
	sub eax,0x10
	push eax
	call IWzVector2D::RelMove
	lea ecx,[ebp-0x18C]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[ebp-0x1AC]
	mov byte ptr [ebp-4],bl
	call Ztl_variant_t::~Ztl_variant_t
	push 0x28
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x40],eax
	mov byte ptr [ebp-4],0x31
	test eax,eax
	je Block154

 Block150:
	mov ecx,dword ptr [ebp+0x58]
	test ecx,ecx
	je Block152

 Block151:
	add ecx,4
	jmp Block153

 Block152:
	xor ecx,ecx

 Block153:
	mov edx,dword ptr [ebp+0x4D]
	push ecx
	xor ecx,ecx
	cmp dword ptr [ebp+0x5C],0x5A
	setg cl
	push ecx
	mov ecx,dword ptr [ebp+0x48]
	push edx
	push edi
	push ecx
	mov ecx,eax
	call CDraggableMenu::_ctor_0
	jmp Block155

 Block154:
	xor eax,eax

 Block155:
	mov ecx,dword ptr [ebp+0x58]
	mov byte ptr [ebp-4],bl
	test ecx,ecx
	je Block157

 Block156:
	add ecx,4
	jmp Block158

 Block157:
	xor ecx,ecx

 Block158:
	push 0
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	call CWndMan::BeginDragDrop
	mov byte ptr [ebp-4],7
	test esi,esi
	je Block160

 Block159:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block160:
	lea edx,[ebp+0x38]
	push 0x75E
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [ebp-4],0x32
	call play_ui_sound
	mov eax,dword ptr [ebp+0x38]
	add esp,4
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block163

 Block161:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release

 Block162:
	add esp,4

 Block163:
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block165

 Block164:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block165:
	mov eax,dword ptr [ebp+0x48]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx

 Block166:
	lea esp,[ebp-0x25C]
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
	ret 8
}
}
// CUIKeyConfig::GetRTTI
__SUB_CLASS_THIS0(003D8E00, __thiscall, 55996,  CUIKeyConfig, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIKeyConfig::ms_RTTI_CUIKeyConfig
	ret
}
}
// CDraggableSkill::~CDraggableSkill
_SUB_EXCEPTION_HANDLER(3D8FF0)
__SUB_CLASS_THIS0(003D8FF0, __thiscall, 84973,  CDraggableSkill, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D8FF0
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
	int 3// TODO: 	mov dword ptr [esi],offset IDraggable::`vftable'
	mov eax,dword ptr [esi+0xC]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CDraggableSkill::OnDropped
__SUB_CLASS_THIS(0010A4E0, __thiscall, 84974,  CDraggableSkill, int32_t, IUIMsgHandler*, IUIMsgHandler*, long, long) {
__asm {

 Block0:
	sub esp,8
	push ebx
	push ebp
	push esi
	push edi
	lea eax,[esp+0x10]
	mov ebp,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
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
	cmp dword ptr [ebp+0x1C],0
	jne Block7

 Block6:
	mov ecx,dword ptr [ebp+0x18]
	push 0
	push ecx
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push ebx
	call CSkillInfo::GetSkillLevel_0
	test eax,eax
	jle Block132

 Block7:
	mov edi,dword ptr [esp+0x1C]
	test edi,edi
	je Block132

 Block8:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CUISkill::ms_RTTI_CUISkill
	mov ecx,edi
	call eax
	mov esi,dword ptr [esp+0x20]
	test eax,eax
	je Block14

 Block9:
	lea eax,[edi-4]
	test eax,eax
	je Block14

 Block10:
	test esi,esi
	je Block14

 Block11:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIStatusBar::ms_RTTI_CUIStatusBar
	mov ecx,esi
	call eax
	test eax,eax
	je Block14

 Block12:
	lea eax,[esi-4]
	test eax,eax
	je Block14

 Block13:
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x24]
	push 1
	push ecx
	push edx
	mov ecx,ebp
	call CDraggableSkill::MapFuncKey
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0x10

 Block14:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CUISkillEx::ms_RTTI_CUISkillEx
	mov ecx,edi
	call edx
	test eax,eax
	je Block20

 Block15:
	lea eax,[edi-4]
	test eax,eax
	je Block20

 Block16:
	test esi,esi
	je Block20

 Block17:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIStatusBar::ms_RTTI_CUIStatusBar
	mov ecx,esi
	call edx
	test eax,eax
	je Block20

 Block18:
	lea eax,[esi-4]
	test eax,eax
	je Block20

 Block19:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x24]
	push 1
	push eax
	push ecx
	mov ecx,ebp
	call CDraggableSkill::MapFuncKey
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0x10

 Block20:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CUISkill::ms_RTTI_CUISkill
	mov ecx,edi
	call eax
	test eax,eax
	je Block26

 Block21:
	lea eax,[edi-4]
	test eax,eax
	je Block26

 Block22:
	test esi,esi
	je Block26

 Block23:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIKeyConfig::ms_RTTI_CUIKeyConfig
	mov ecx,esi
	call eax
	test eax,eax
	je Block26

 Block24:
	lea eax,[esi-4]
	test eax,eax
	je Block26

 Block25:
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esp+0x24]
	push 0
	push ecx
	push edx
	mov ecx,ebp
	call CDraggableSkill::MapFuncKey
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0x10

 Block26:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CUISkillEx::ms_RTTI_CUISkillEx
	mov ecx,edi
	call edx
	test eax,eax
	je Block32

 Block27:
	lea eax,[edi-4]
	test eax,eax
	je Block32

 Block28:
	test esi,esi
	je Block32

 Block29:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIKeyConfig::ms_RTTI_CUIKeyConfig
	mov ecx,esi
	call edx
	test eax,eax
	je Block32

 Block30:
	lea eax,[esi-4]
	test eax,eax
	je Block32

 Block31:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x24]
	push 0
	push eax
	push ecx
	mov ecx,ebp
	call CDraggableSkill::MapFuncKey
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0x10

 Block32:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIStatusBar::ms_RTTI_CUIStatusBar
	mov ecx,edi
	call eax
	test eax,eax
	je Block37

 Block33:
	lea eax,[edi-4]
	test eax,eax
	je Block37

 Block34:
	test esi,esi
	je Block37

 Block35:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIStatusBar::ms_RTTI_CUIStatusBar
	mov ecx,esi
	call eax
	test eax,eax
	je Block37

 Block36:
	lea eax,[esi-4]
	test eax,eax
	jne Block13

 Block37:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIKeyConfig::ms_RTTI_CUIKeyConfig
	mov ecx,edi
	call edx
	test eax,eax
	je Block42

 Block38:
	lea eax,[edi-4]
	test eax,eax
	je Block42

 Block39:
	test esi,esi
	je Block42

 Block40:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIKeyConfig::ms_RTTI_CUIKeyConfig
	mov ecx,esi
	call edx
	test eax,eax
	je Block42

 Block41:
	lea eax,[esi-4]
	test eax,eax
	jne Block31

 Block42:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIKeyConfig::ms_RTTI_CUIKeyConfig
	mov ecx,edi
	call eax
	test eax,eax
	je Block47

 Block43:
	lea eax,[edi-4]
	test eax,eax
	je Block47

 Block44:
	test esi,esi
	je Block47

 Block45:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIStatusBar::ms_RTTI_CUIStatusBar
	mov ecx,esi
	call eax
	test eax,eax
	je Block47

 Block46:
	lea eax,[esi-4]
	test eax,eax
	jne Block13

 Block47:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIStatusBar::ms_RTTI_CUIStatusBar
	mov ecx,edi
	call edx
	test eax,eax
	je Block52

 Block48:
	lea eax,[edi-4]
	test eax,eax
	je Block52

 Block49:
	test esi,esi
	je Block52

 Block50:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIKeyConfig::ms_RTTI_CUIKeyConfig
	mov ecx,esi
	call edx
	test eax,eax
	je Block52

 Block51:
	lea eax,[esi-4]
	test eax,eax
	jne Block31

 Block52:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CUISkill::ms_RTTI_CUISkill
	mov ecx,edi
	call eax
	test eax,eax
	je Block60

 Block53:
	lea eax,[edi-4]
	test eax,eax
	je Block60

 Block54:
	test esi,esi
	je Block60

 Block55:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIMacroSys::ms_RTTI_CUIMacroSys
	mov ecx,esi
	call eax
	test eax,eax
	je Block60

 Block56:
	lea eax,[esi-4]
	test eax,eax
	je Block60

 Block57:
	push 0

 Block58:
	push 0

 Block59:
	mov ecx,dword ptr [esp+0x30]
	mov edx,dword ptr [esp+0x2C]
	push ecx
	push edx
	mov ecx,ebp
	call CDraggableSkill::MapMacro
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0x10

 Block60:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CUISkillEx::ms_RTTI_CUISkillEx
	mov ecx,edi
	call edx
	test eax,eax
	je Block66

 Block61:
	lea eax,[edi-4]
	test eax,eax
	je Block66

 Block62:
	test esi,esi
	je Block66

 Block63:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIMacroSysEx::ms_RTTI_CUIMacroSysEx
	mov ecx,esi
	call edx
	test eax,eax
	je Block66

 Block64:
	lea eax,[esi-4]
	test eax,eax
	je Block66

 Block65:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x24]
	push 0
	push 0
	push eax
	push ecx
	mov ecx,ebp
	call CDraggableSkill::MapMacro
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0x10

 Block66:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIMacroSys::ms_RTTI_CUIMacroSys
	mov ecx,edi
	call eax
	test eax,eax
	je Block73

 Block67:
	lea eax,[edi-4]
	test eax,eax
	je Block73

 Block68:
	test esi,esi
	je Block73

 Block69:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIMacroSys::ms_RTTI_CUIMacroSys
	mov ecx,esi
	call eax
	test eax,eax
	je Block73

 Block70:
	lea eax,[esi-4]
	test eax,eax
	je Block73

 Block71:
	cmp dword ptr [ebp+0x1C],0
	jne Block73

 Block72:
	push 1
	jmp Block58

 Block73:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIMacroSysEx::ms_RTTI_CUIMacroSysEx
	mov ecx,edi
	call edx
	test eax,eax
	je Block80

 Block74:
	lea eax,[edi-4]
	test eax,eax
	je Block80

 Block75:
	test esi,esi
	je Block80

 Block76:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIMacroSysEx::ms_RTTI_CUIMacroSysEx
	mov ecx,esi
	call edx
	test eax,eax
	je Block80

 Block77:
	lea eax,[esi-4]
	test eax,eax
	je Block80

 Block78:
	cmp dword ptr [ebp+0x1C],0
	jne Block80

 Block79:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x24]
	push 1
	push 0
	push eax
	push ecx
	mov ecx,ebp
	call CDraggableSkill::MapMacro
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0x10

 Block80:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIMacroSys::ms_RTTI_CUIMacroSys
	mov ecx,edi
	call eax
	test eax,eax
	je Block88

 Block81:
	lea eax,[edi-4]
	test eax,eax
	je Block88

 Block82:
	mov eax,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test eax,eax
	je Block84

 Block83:
	add eax,4
	jmp Block85

 Block84:
	xor eax,eax

 Block85:
	cmp esi,eax
	jne Block88

 Block86:
	cmp dword ptr [ebp+0x1C],0
	jne Block88

 Block87:
	push 0
	push 1
	jmp Block59

 Block88:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIMacroSysEx::ms_RTTI_CUIMacroSysEx
	mov ecx,edi
	call edx
	test eax,eax
	je Block96

 Block89:
	lea eax,[edi-4]
	test eax,eax
	je Block96

 Block90:
	mov eax,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	test eax,eax
	je Block92

 Block91:
	add eax,4
	jmp Block93

 Block92:
	xor eax,eax

 Block93:
	cmp esi,eax
	jne Block96

 Block94:
	cmp dword ptr [ebp+0x1C],0
	jne Block96

 Block95:
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x24]
	push 0
	push 1
	push eax
	push ecx
	mov ecx,ebp
	call CDraggableSkill::MapMacro
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,8
	ret 0x10

 Block96:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIMacroSys::ms_RTTI_CUIMacroSys
	mov ecx,edi
	call eax
	test eax,eax
	je Block102

 Block97:
	lea eax,[edi-4]
	test eax,eax
	je Block102

 Block98:
	test esi,esi
	je Block102

 Block99:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIStatusBar::ms_RTTI_CUIStatusBar
	mov ecx,esi
	call eax
	test eax,eax
	je Block102

 Block100:
	lea eax,[esi-4]
	test eax,eax
	je Block102

 Block101:
	cmp dword ptr [ebp+0x1C],0
	jne Block13

 Block102:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIMacroSysEx::ms_RTTI_CUIMacroSysEx
	mov ecx,edi
	call edx
	test eax,eax
	je Block108

 Block103:
	lea eax,[edi-4]
	test eax,eax
	je Block108

 Block104:
	test esi,esi
	je Block108

 Block105:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIStatusBar::ms_RTTI_CUIStatusBar
	mov ecx,esi
	call edx
	test eax,eax
	je Block108

 Block106:
	lea eax,[esi-4]
	test eax,eax
	je Block108

 Block107:
	cmp dword ptr [ebp+0x1C],0
	jne Block19

 Block108:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIStatusBar::ms_RTTI_CUIStatusBar
	mov ecx,edi
	call eax
	test eax,eax
	je Block114

 Block109:
	lea eax,[edi-4]
	test eax,eax
	je Block114

 Block110:
	test esi,esi
	je Block114

 Block111:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIStatusBar::ms_RTTI_CUIStatusBar
	mov ecx,esi
	call eax
	test eax,eax
	je Block114

 Block112:
	lea eax,[esi-4]
	test eax,eax
	je Block114

 Block113:
	cmp dword ptr [ebp+0x1C],0
	jne Block13

 Block114:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIMacroSys::ms_RTTI_CUIMacroSys
	mov ecx,edi
	call edx
	test eax,eax
	je Block120

 Block115:
	lea eax,[edi-4]
	test eax,eax
	je Block120

 Block116:
	test esi,esi
	je Block120

 Block117:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIKeyConfig::ms_RTTI_CUIKeyConfig
	mov ecx,esi
	call edx
	test eax,eax
	je Block120

 Block118:
	lea eax,[esi-4]
	test eax,eax
	je Block120

 Block119:
	cmp dword ptr [ebp+0x1C],0
	jne Block31

 Block120:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIMacroSysEx::ms_RTTI_CUIMacroSysEx
	mov ecx,edi
	call eax
	test eax,eax
	je Block126

 Block121:
	lea eax,[edi-4]
	test eax,eax
	je Block126

 Block122:
	test esi,esi
	je Block126

 Block123:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIKeyConfig::ms_RTTI_CUIKeyConfig
	mov ecx,esi
	call eax
	test eax,eax
	je Block126

 Block124:
	lea eax,[esi-4]
	test eax,eax
	je Block126

 Block125:
	cmp dword ptr [ebp+0x1C],0
	jne Block25

 Block126:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIKeyConfig::ms_RTTI_CUIKeyConfig
	mov ecx,edi
	call edx
	test eax,eax
	je Block132

 Block127:
	lea eax,[edi-4]
	test eax,eax
	je Block132

 Block128:
	test esi,esi
	je Block132

 Block129:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIKeyConfig::ms_RTTI_CUIKeyConfig
	mov ecx,esi
	call edx
	test eax,eax
	je Block132

 Block130:
	lea eax,[esi-4]
	test eax,eax
	je Block132

 Block131:
	cmp dword ptr [ebp+0x1C],0
	jne Block31

 Block132:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,8
	ret 0x10
}
}
// CDraggableSkill::OnDoubleClicked
__SUB_CLASS_THIS0(0010A0F0, __thiscall, 84975,  CDraggableSkill, int32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x28],0
	push edi
	je Block14

 Block1:
	mov ecx,dword ptr [esi+0x28]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CUISkill::ms_RTTI_CUISkill
	call edx
	test eax,eax
	je Block4

 Block2:
	mov eax,dword ptr [esi+0x28]
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFFC
	jne Block8

 Block4:
	cmp dword ptr [esi+0x28],0
	je Block14

 Block5:
	mov ecx,dword ptr [esi+0x28]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x48]
	push offset CUISkillEx::ms_RTTI_CUISkillEx
	call edx
	test eax,eax
	je Block14

 Block6:
	mov eax,dword ptr [esi+0x28]
	test eax,eax
	je Block14

 Block7:
	add eax,0xFFFFFFFC
	je Block14

 Block8:
	mov edi,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test edi,edi
	je Block14

 Block9:
	mov esi,dword ptr [esi+0x18]
	test esi,esi
	jl Block14

 Block10:
	cmp dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
	jne Block14

 Block11:
	push esi
	call is_keydown_skill
	add esp,4
	test eax,eax
	jne Block13

 Block12:
	push eax
	push eax
	push esi
	mov ecx,edi
	call CUserLocal::DoActiveSkill

 Block13:
	pop edi
	mov eax,1
	pop esi
	ret

 Block14:
	pop edi
	xor eax,eax
	pop esi
	ret
}
}
// CUIKeyConfig::DrawFuncKeyMapped
_SUB_EXCEPTION_HANDLER(3DA4E0)
__SUB_CLASS_THIS0(003DA4E0, __thiscall, 55977,  CUIKeyConfig, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x78]
	sub esp,0x78
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DA4E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x74],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [ebp+0x60],ebx
	xor edi,edi
	mov dword ptr [ebp+0x68],edi
	lea eax,[ebp+0x6C]
	push 0x3D0
	push eax
	mov dword ptr [ebp-4],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[ebp+0x68]
	push ecx
	push eax
	mov byte ptr [ebp-4],1
	call PcCreate_IWzCanvas
	mov eax,dword ptr [ebp+0x6C]
	add esp,0xC
	mov byte ptr [ebp-4],0
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x40]
	push edx
	call esi
	lea eax,[ebp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea ecx,[ebp+0x20]
	push ecx
	mov byte ptr [ebp-4],2
	call esi
	lea edx,[ebp+0x20]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov esi,dword ptr [ebx+0x78]
	mov byte ptr [ebp-4],3
	cmp esi,edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[ebp+0x54]
	push ecx
	push esi
	mov dword ptr [ebp+0x54],edi
	call edx
	cmp eax,edi
	jge Block10

 Block9:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov esi,dword ptr [ebx+0x78]
	mov edi,dword ptr [ebp+0x54]
	xor ebx,ebx
	cmp esi,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[ebp+0x58]
	push ecx
	push esi
	mov dword ptr [ebp+0x58],ebx
	call edx
	cmp eax,ebx
	jge Block14

 Block13:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	mov ecx,dword ptr [ebp+0x68]
	cmp ecx,ebx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea eax,[ebp+0x40]
	push eax
	mov eax,dword ptr [ebp+0x58]
	lea edx,[ebp+0x20]
	push edx
	push edi
	push eax
	call IWzCanvas::Create
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp+0x20],si
	jne Block19

 Block17:
	mov eax,dword ptr [ebp+0x28]
	xor ecx,ecx
	mov word ptr [ebp+0x20],cx
	cmp eax,ebx
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea edx,[ebp+0x20]
	push edx
	call edi

 Block20:
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x40],si
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [ebp+0x40],ax
	mov eax,dword ptr [ebp+0x48]
	cmp eax,ebx
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[ebp+0x40]
	push ecx
	call edi

 Block24:
	mov dword ptr [ebp+0x54],ebx
	mov eax,ebx

 Block25:
	mov ecx,dword ptr [ebp+0x60]
	lea edx,[eax+eax*2]
	lea ebx,[ecx+edx*4]
	movzx edx,byte ptr [ebx+0xB08]
	mov dword ptr [ebp+0x6C],edx
	test edx,edx
	je Block163

 Block26:
	lea edx,[ebp+0x50]
	push edx
	lea edx,[ebp+0x5C]
	push edx
	push eax
	call CUIKeyConfig::GetShortCutPos
	cmp dword ptr [ebp+0x5C],0
	mov edi,dword ptr [ebp+0x50]
	jne Block28

 Block27:
	test edi,edi
	je Block163

 Block28:
	xor esi,esi
	mov dword ptr [ebp+0x58],esi
	mov al,byte ptr [ebx+0xB08]
	mov byte ptr [ebp-4],4
	cmp al,2
	je Block31

 Block29:
	cmp al,3
	je Block31

 Block30:
	cmp al,7
	jne Block48

 Block31:
	mov ecx,dword ptr [ebx+0xB09]
	mov eax,dword ptr [ebp+0x54]
	mov edx,dword ptr [ebp+0x60]
	push 2
	push 0
	push 0
	push 0
	push 0
	lea eax,[eax+eax*2+0x2C4]
	mov ebx,dword ptr [edx+eax*4]
	mov edx,dword ptr [ebp+0x5C]
	push 0
	push 0
	lea eax,[edi+0x20]
	push eax
	push edx
	push ecx
	push ecx
	mov dword ptr [ebp+0x70],ecx
	mov ecx,dword ptr [ebp+0x68]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x68]
	mov dword ptr [ebp+0x64],esp
	test eax,eax
	je Block33

 Block32:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block33:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov eax,dword ptr [ebp+0x6C]
	cmp eax,2
	jne Block39

 Block34:
	mov edx,dword ptr [ebp+0x60]
	mov eax,dword ptr [edx+0x11BC]
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x6C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block36:
	mov eax,dword ptr [ebp+0x5C]
	push ebx
	add edi,0x14
	push edi
	push eax
	push ecx
	mov ecx,dword ptr [ebp+0x68]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x68]
	mov dword ptr [ebp+0x6C],esp
	test eax,eax
	je Block38

 Block37:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block38:
	call draw_number_by_image
	add esp,0x18
	jmp Block44

 Block39:
	cmp eax,3
	jne Block44

 Block40:
	test ebx,ebx
	jg Block44

 Block41:
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block7

 Block42:
	mov edx,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax]
	push 0xA0808080
	push 0x20
	push 0x20
	push edi
	push edx
	mov ebx,eax
	push eax
	mov eax,dword ptr [ecx+0x8C]
	call eax
	test eax,eax
	jge Block44

 Block43:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block44:
	mov ecx,dword ptr [ebp+0x70]
	push 0
	push 0
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	lea edx,[ebp-0x44]
	push edx
	call CItemInfo::GetItemIcon
	mov eax,dword ptr [eax]
	test eax,eax
	je Block46

 Block45:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov esi,eax
	push eax
	mov dword ptr [ebp+0x58],esi
	call edx

 Block46:
	mov eax,dword ptr [ebp-0x44]
	test eax,eax
	je Block117

 Block47:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block117

 Block48:
	cmp al,1
	jne Block61

 Block49:
	mov eax,dword ptr [ebx+0xB09]
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push eax
	call CSkillInfo::GetSkill
	mov eax,dword ptr [eax+0x25C]
	test eax,eax
	je Block51

 Block50:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov esi,eax
	push eax
	mov dword ptr [ebp+0x58],esi
	call edx

 Block51:
	mov eax,3
	mov word ptr [ebp+0x40],ax
	mov dword ptr [ebp+0x48],0xFF
	mov byte ptr [ebp-4],5
	test esi,esi
	je Block7

 Block52:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x74]
	lea edx,[ebp+0x64]
	push edx
	push esi
	mov dword ptr [ebp+0x64],0
	call eax
	test eax,eax
	jge Block54

 Block53:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block54:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x6C]
	mov ebx,dword ptr [ebp+0x64]
	lea edx,[ebp+0x70]
	push edx
	push esi
	mov dword ptr [ebp+0x70],0
	call eax
	test eax,eax
	jge Block56

 Block55:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block56:
	mov ecx,dword ptr [ebp+0x68]
	test ecx,ecx
	je Block7

 Block57:
	mov eax,dword ptr [ebp+0x5C]
	sub eax,dword ptr [ebp+0x70]
	lea edx,[ebp+0x40]
	push edx
	push esi
	sub edi,ebx
	add edi,0x20
	push edi
	push eax
	call IWzCanvas::Copy
	cmp word ptr [ebp+0x40],8
	mov byte ptr [ebp-4],4
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [ebp+0x40],ax
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block117

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block60:
	lea ecx,[ebp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]
	jmp Block117

 Block61:
	cmp al,8
	jne Block91

 Block62:
	mov dword ptr [ebp+0x64],0
	mov edx,dword ptr [ebx+0xB09]
	push edx
	lea eax,[ebp+0x64]
	push offset _S_UIUIWINDOW2IMGSK
	push eax
	mov byte ptr [ebp-4],6
	call ZXString<char>::Format
	add esp,0xC
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[ebp]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block63:
	lea eax,[ebp+0x20]
	push eax
	mov byte ptr [ebp-4],7
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[ebp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block3

 Block64:
	mov edx,dword ptr [ebp+0x64]
	push 0
	push 0
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	mov byte ptr [ebp-4],8
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov edx,dword ptr [ebp+0x64]
	mov ebx,esp
	push 0
	push 0
	lea eax,[ebp]
	push eax
	lea ecx,[ebp+0x20]
	push ecx
	push 0x3FFFFFFF
	push ebx
	push 0xFFFFFFFF
	push edx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push ebx
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],9
	je Block7

 Block65:
	lea eax,[ebp-0x54]
	mov byte ptr [ebp-4],8
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0xA
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x70]
	mov dword ptr [ebp+0x70],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block67

 Block66:
	cmp eax,0x80004002
	jne Block3

 Block67:
	mov ebx,dword ptr [ebp+0x70]
	test ebx,ebx
	je Block69

 Block68:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+4]
	mov esi,ebx
	push ebx
	mov dword ptr [ebp+0x58],esi
	call edx
	mov eax,dword ptr [ebx]
	mov ecx,dword ptr [eax+8]
	push ebx
	call ecx

 Block69:
	mov ebx,8
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x54],bx
	jne Block72

 Block70:
	mov eax,dword ptr [ebp-0x4C]
	xor edx,edx
	mov word ptr [ebp-0x54],dx
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea eax,[ebp-0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp+0x20],bx
	jne Block76

 Block74:
	mov eax,dword ptr [ebp+0x28]
	xor ecx,ecx
	mov word ptr [ebp+0x20],cx
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea edx,[ebp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block77:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp],bx
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov edx,3
	mov word ptr [ebp+0x30],dx
	mov dword ptr [ebp+0x38],0xFF
	mov byte ptr [ebp-4],0xB
	test esi,esi
	je Block7

 Block82:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x74]
	lea ecx,[ebp+0x70]
	push ecx
	push esi
	mov dword ptr [ebp+0x70],0
	call edx
	test eax,eax
	jge Block84

 Block83:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block84:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x6C]
	mov ebx,dword ptr [ebp+0x70]
	lea ecx,[ebp+0x6C]
	push ecx
	push esi
	mov dword ptr [ebp+0x6C],0
	call edx
	test eax,eax
	jge Block86

 Block85:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block86:
	mov ecx,dword ptr [ebp+0x68]
	test ecx,ecx
	je Block7

 Block87:
	lea eax,[ebp+0x30]
	push eax
	mov eax,dword ptr [ebp+0x5C]
	sub eax,dword ptr [ebp+0x6C]
	push esi
	sub edi,ebx
	add edi,0x20
	push edi
	push eax
	call IWzCanvas::Copy
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],6
	jne Block90

 Block88:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	test eax,eax
	je Block115

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block115

 Block90:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]
	jmp Block115

 Block91:
	cmp al,4
	je Block94

 Block92:
	cmp al,5
	je Block94

 Block93:
	cmp al,6
	jne Block117

 Block94:
	mov dword ptr [ebp+0x64],0
	lea eax,[ebp-0x40]
	push 0x994
	push eax
	mov byte ptr [ebp-4],0xC
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebx+0xB09]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x64]
	push edx
	mov byte ptr [ebp-4],0xD
	call ZXString<char>::Format
	mov eax,dword ptr [ebp-0x40]
	add esp,0xC
	mov byte ptr [ebp-4],0xC
	test eax,eax
	je Block96

 Block95:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block96:
	mov eax,dword ptr [ebp+0x64]
	push 0
	push 0
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ecx,dword ptr [ebp+0x64]
	mov esi,esp
	push 0
	push 0
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x70],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov edx,dword ptr [ebp+0x60]
	mov ecx,dword ptr [edx+0x11C0]
	mov byte ptr [ebp-4],0xE
	test ecx,ecx
	je Block7

 Block97:
	lea eax,[ebp-0x3C]
	push eax
	mov byte ptr [ebp-4],0xC
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x58]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block99

 Block98:
	cmp eax,0x80004002
	jne Block3

 Block99:
	cmp word ptr [ebp-0x3C],8
	mov byte ptr [ebp-4],0xC
	jne Block102

 Block100:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	test eax,eax
	je Block103

 Block101:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block103

 Block102:
	lea edx,[ebp-0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block103:
	mov esi,dword ptr [ebp+0x58]
	test esi,esi
	sete al
	test al,al
	je Block108

 Block104:
	cmp dword ptr [ebp+0x64],0
	mov byte ptr [ebp-4],4
	je Block106

 Block105:
	mov eax,dword ptr [ebp+0x64]
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block106:
	mov byte ptr [ebp-4],0
	test esi,esi
	je Block163

 Block107:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	jmp Block163

 Block108:
	mov eax,3
	mov word ptr [ebp-0x64],ax
	mov dword ptr [ebp-0x5C],0xFF
	mov byte ptr [ebp-4],0x10
	test esi,esi
	je Block7

 Block109:
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block7

 Block110:
	lea ecx,[ebp-0x64]
	push ecx
	push esi
	mov ecx,esi
	mov dword ptr [ebp+0x70],eax
	call IWzCanvas::Getcy
	sub edi,eax
	add edi,0x20
	push edi
	mov ecx,esi
	call IWzCanvas::Getcx
	mov ecx,dword ptr [ebp+0x5C]
	sub ecx,eax
	push ecx
	mov ecx,dword ptr [ebp+0x70]
	call IWzCanvas::Copy
	lea ecx,[ebp-0x64]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [ebx+0xB09]
	lea edx,[eax-0x41]
	cmp edx,0x36
	jle Block114

 Block111:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block113

 Block112:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block113:
	mov byte ptr [ebp-4],0
	jmp Block162

 Block114:
	mov edx,dword ptr [ebp+0x6C]
	mov ecx,dword ptr [ebp+0x60]
	push eax
	push edx
	call CUIKeyConfig::GetPaletteSlotFromIdx
	add eax,0x145
	lea eax,[eax+eax*2]
	mov dword ptr [ecx+eax*4],1

 Block115:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],4
	test eax,eax
	je Block117

 Block116:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block117:
	mov eax,dword ptr [ebp+0x54]
	cmp eax,0x1D
	je Block134

 Block118:
	cmp eax,0x2A
	je Block125

 Block119:
	cmp eax,0x38
	jne Block161

 Block120:
	lea ecx,[ebp+0x50]
	push ecx
	mov ecx,dword ptr [ebp+0x60]
	lea edx,[ebp+0x5C]
	push edx
	push 0x5A
	call CUIKeyConfig::GetShortCutPos
	mov eax,3
	mov word ptr [ebp+0x10],ax
	mov dword ptr [ebp+0x18],0xFF
	mov byte ptr [ebp-4],0x13
	test esi,esi
	je Block7

 Block121:
	mov edi,dword ptr [ebp+0x68]
	test edi,edi
	je Block7

 Block122:
	lea ecx,[ebp+0x10]
	push ecx
	push esi
	mov ecx,esi
	call IWzCanvas::Getcy
	mov edx,dword ptr [ebp+0x50]
	sub edx,eax
	add edx,0x20
	push edx
	mov ecx,esi
	call IWzCanvas::Getcx
	mov ecx,dword ptr [ebp+0x5C]
	sub ecx,eax
	push ecx
	mov ecx,edi
	call IWzCanvas::Copy
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],4
	jne Block124

 Block123:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	jmp Block156

 Block124:
	lea eax,[ebp+0x10]
	push eax
	jmp Block160

 Block125:
	lea ecx,[ebp+0x50]
	push ecx
	mov ecx,dword ptr [ebp+0x60]
	lea edx,[ebp+0x5C]
	push edx
	push 0x36
	call CUIKeyConfig::GetShortCutPos
	mov eax,3
	mov word ptr [ebp-0x1C],ax
	mov dword ptr [ebp-0x14],0xFF
	xor ebx,ebx
	mov byte ptr [ebp-4],0x12
	cmp esi,ebx
	je Block7

 Block126:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x74]
	lea edx,[ebp+0x6C]
	push edx
	push esi
	mov dword ptr [ebp+0x6C],ebx
	call eax
	cmp eax,ebx
	jge Block128

 Block127:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block128:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x6C]
	mov edi,dword ptr [ebp+0x6C]
	lea edx,[ebp+0x70]
	push edx
	push esi
	mov dword ptr [ebp+0x70],ebx
	call eax
	cmp eax,ebx
	jge Block130

 Block129:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block130:
	mov ecx,dword ptr [ebp+0x68]
	cmp ecx,ebx
	je Block7

 Block131:
	mov eax,dword ptr [ebp+0x50]
	lea edx,[ebp-0x1C]
	push edx
	mov edx,dword ptr [ebp+0x5C]
	sub edx,dword ptr [ebp+0x70]
	sub eax,edi
	push esi
	add eax,0x20
	push eax
	push edx
	call IWzCanvas::Copy
	cmp word ptr [ebp-0x1C],8
	mov byte ptr [ebp-4],4
	jne Block133

 Block132:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,ebx
	jmp Block157

 Block133:
	lea ecx,[ebp-0x1C]
	push ecx
	jmp Block160

 Block134:
	mov edi,dword ptr [ebp+0x60]
	lea edx,[ebp+0x50]
	push edx
	lea eax,[ebp+0x5C]
	push eax
	push 0x59
	mov ecx,edi
	call CUIKeyConfig::GetShortCutPos
	mov al,byte ptr [edi+0xC64]
	mov edi,dword ptr [ebp+0x50]
	mov ebx,dword ptr [ebp+0x5C]
	test al,al
	je Block148

 Block135:
	cmp al,2
	je Block138

 Block136:
	cmp al,3
	je Block138

 Block137:
	cmp al,7
	jne Block148

 Block138:
	test ebx,ebx
	jne Block140

 Block139:
	test edi,edi
	je Block148

 Block140:
	mov ecx,dword ptr [ebp+0x60]
	mov eax,dword ptr [ecx+0xC65]
	mov ecx,dword ptr [ecx+0xC6C]
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	lea edx,[edi+0x20]
	push edx
	push ebx
	push eax
	push ecx
	mov dword ptr [ebp+0x6C],ecx
	mov ecx,dword ptr [ebp+0x68]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [ebp+0x68]
	mov dword ptr [ebp+0x70],esp
	test eax,eax
	je Block142

 Block141:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block142:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	mov ecx,dword ptr [ebp+0x60]
	cmp byte ptr [ecx+0xC64],2
	jne Block144

 Block143:
	push 0
	mov edx,ecx
	push ecx
	add edx,0x11BC
	mov ecx,esp
	mov dword ptr [ebp+0x70],esp
	push edx
	call _x_com_ptr<IWzProperty>::_ctor_copy
	mov eax,dword ptr [ebp+0x6C]
	push eax
	lea ecx,[edi+0x14]
	push ecx
	push ebx
	push ecx
	lea edx,[ebp+0x68]
	mov ecx,esp
	mov dword ptr [ebp+0x70],esp
	push edx
	call _x_com_ptr<IWzCanvas>::_ctor_copy
	call draw_number_by_image
	add esp,0x18

 Block144:
	mov eax,dword ptr [ebp+0x60]
	cmp byte ptr [eax+0xC64],3
	jne Block161

 Block145:
	cmp dword ptr [ebp+0x6C],0
	jg Block161

 Block146:
	mov ecx,dword ptr [ebp+0x68]
	test ecx,ecx
	je Block7

 Block147:
	push 0xA0808080
	push 0x20
	push 0x20
	push edi
	push ebx
	call IWzCanvas::DrawRectangle
	jmp Block161

 Block148:
	mov ecx,3
	mov word ptr [ebp-0x2C],cx
	mov dword ptr [ebp-0x24],0xFF
	mov byte ptr [ebp-4],0x11
	test esi,esi
	je Block7

 Block149:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[ebp+0x6C]
	push eax
	push esi
	mov dword ptr [ebp+0x6C],0
	call ecx
	test eax,eax
	jge Block151

 Block150:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block151:
	mov edx,dword ptr [ebp+0x6C]
	mov eax,dword ptr [esi]
	lea ecx,[ebp+0x70]
	push ecx
	mov dword ptr [ebp+0x64],edx
	mov edx,dword ptr [eax+0x6C]
	push esi
	mov dword ptr [ebp+0x70],0
	call edx
	test eax,eax
	jge Block153

 Block152:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block153:
	mov ecx,dword ptr [ebp+0x68]
	test ecx,ecx
	je Block7

 Block154:
	sub edi,dword ptr [ebp+0x64]
	sub ebx,dword ptr [ebp+0x70]
	lea eax,[ebp-0x2C]
	push eax
	push esi
	add edi,0x20
	push edi
	push ebx
	call IWzCanvas::Copy
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],4
	jne Block159

 Block155:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx

 Block156:
	test eax,eax

 Block157:
	je Block161

 Block158:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block161

 Block159:
	lea edx,[ebp-0x2C]
	push edx

 Block160:
	call dword ptr [ZImports::_VariantClear]

 Block161:
	mov byte ptr [ebp-4],0
	test esi,esi
	je Block163

 Block162:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block163:
	mov eax,dword ptr [ebp+0x54]
	inc eax
	cmp eax,0x59
	mov dword ptr [ebp+0x54],eax
	jl Block25

 Block164:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp]
	push edx
	call esi
	lea eax,[ebp]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block166

 Block165:
	push eax
	call _com_issue_error

 Block166:
	lea ecx,[ebp+0x30]
	push ecx
	mov byte ptr [ebp-4],0x14
	call esi
	lea edx,[ebp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block168

 Block167:
	push eax
	call _com_issue_error

 Block168:
	lea eax,[ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0x15
	call esi
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block170

 Block169:
	push eax
	call _com_issue_error

 Block170:
	lea edx,[ebp-0x1C]
	push edx
	mov byte ptr [ebp-4],0x16
	call esi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block172

 Block171:
	push eax
	call _com_issue_error

 Block172:
	lea ecx,[ebp-0x2C]
	mov bl,0x17
	push ecx
	mov byte ptr [ebp-4],bl
	call esi
	lea edx,[ebp-0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block174

 Block173:
	push eax
	call _com_issue_error

 Block174:
	mov eax,dword ptr [ebp+0x60]
	mov ecx,dword ptr [eax+0x11C8]
	mov byte ptr [ebp-4],0x18
	test ecx,ecx
	jne Block176

 Block175:
	push 0x80004003
	call _com_issue_error

 Block176:
	lea edx,[ebp]
	push edx
	lea eax,[ebp+0x30]
	push eax
	lea edx,[ebp+0x10]
	push edx
	lea eax,[ebp-0x1C]
	push eax
	mov eax,dword ptr [ebp+0x68]
	lea edx,[ebp-0x2C]
	push edx
	push eax
	lea edx,[ebp-0x3C]
	push edx
	call IWzGr2DLayer::InsertCanvas
	mov edi,8
	cmp word ptr [ebp-0x3C],di
	jne Block183

 Block177:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block179

 Block178:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block179:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block180:
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp-0x2C],di
	jne Block184

 Block181:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block185

 Block182:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block185

 Block183:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x3C]
	push ecx
	call esi
	jmp Block180

 Block184:
	lea eax,[ebp-0x2C]
	push eax
	call esi

 Block185:
	mov byte ptr [ebp-4],0x16
	cmp word ptr [ebp-0x1C],di
	jne Block188

 Block186:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	test eax,eax
	je Block189

 Block187:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block189

 Block188:
	lea edx,[ebp-0x1C]
	push edx
	call esi

 Block189:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x10],di
	jne Block192

 Block190:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	test eax,eax
	je Block193

 Block191:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block193

 Block192:
	lea ecx,[ebp+0x10]
	push ecx
	call esi

 Block193:
	mov byte ptr [ebp-4],0x14
	cmp word ptr [ebp+0x30],di
	jne Block196

 Block194:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block197

 Block195:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block197

 Block196:
	lea eax,[ebp+0x30]
	push eax
	call esi

 Block197:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp],di
	jne Block200

 Block198:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	test eax,eax
	je Block201

 Block199:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block201

 Block200:
	lea edx,[ebp]
	push edx
	call esi

 Block201:
	mov eax,dword ptr [ebp+0x68]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block203

 Block202:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block203:
	lea esp,[ebp-0x74]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x74]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x78
	mov esp,ebp
	pop ebp
	ret
}
}
// CUIKeyConfig::GetShortCutPos
__SUB_CLASS_THIS(003D8320, __thiscall, 55987,  CUIKeyConfig, void, long, long&, long&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x91
	jge Block2

 Block1:
	mov ecx,dword ptr [eax*8+_D_S_PTSHORTKEYPOS__1]
	mov edx,dword ptr [esp+8]
	mov dword ptr [edx],ecx
	mov eax,dword ptr [eax*8+_D_S_PTSHORTKEYPOS__1+4]
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr [ecx],eax

 Block2:
	ret 0xC
}
}
// CUIKeyConfig::ResetPaletteItems
__SUB_CLASS_THIS0(003D8BC0, __thiscall, 55977,  CUIKeyConfig, void) {
__asm {

 Block0:
	push esi
	xor edx,edx
	lea esi,[ecx+0xF35]
	lea esp,[esp]

 Block1:
	cmp edx,0x1E
	jge Block3

 Block2:
	mov eax,4
	jmp Block4

 Block3:
	xor eax,eax
	cmp edx,0x23
	setge al
	add eax,5

 Block4:
	push edx
	mov byte ptr [esi-1],al
	call CUIKeyConfig::GetIdxFromPaletteSlot
	mov dword ptr [esi],eax
	mov dword ptr [esi+7],0
	inc edx
	add esi,0xC
	cmp edx,0x2A
	jl Block1

 Block5:
	pop esi
	ret
}
}
// CUIKeyConfig::DrawKeys
_SUB_EXCEPTION_HANDLER(3DA030)
__SUB_CLASS_THIS0(003DA030, __thiscall, 55977,  CUIKeyConfig, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x6C]
	sub esp,0x6C
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DA030
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
	mov dword ptr [ebp+0x5C],edi
	mov eax,3
	xor esi,esi
	mov word ptr [ebp+0x10],ax
	mov dword ptr [ebp+0x18],esi
	mov ecx,dword ptr [edi+0x11C4]
	mov dword ptr [ebp-4],esi
	cmp ecx,esi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp+0x10]
	push edx
	lea eax,[ebp+0x58]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],2
	jne Block5

 Block3:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	cmp eax,esi
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov dword ptr [ebp+0x54],esi
	jmp Block9

 Block5:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block6:
	mov dword ptr [ebp+0x54],esi
	jmp Block9

 Block8:
	mov edi,dword ptr [ebp+0x5C]

 Block9:
	lea eax,[ebp+0x64]
	push eax
	lea ecx,[ebp+0x60]
	push ecx
	push esi
	mov ecx,edi
	call CUIKeyConfig::GetShortCutPos
	mov ebx,dword ptr [ebp+0x60]
	test ebx,ebx
	jne Block11

 Block10:
	cmp dword ptr [ebp+0x64],ebx
	je Block60

 Block11:
	mov dword ptr [ebp+0x50],0
	lea edx,[ebp+0x20]
	push 0x995
	push edx
	mov byte ptr [ebp-4],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea eax,[ebp+0x50]
	push eax
	mov byte ptr [ebp-4],4
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x20]
	add esp,0xC
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov edi,dword ptr [ebp+0x50]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x4C],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [ecx+0x11C0]
	mov byte ptr [ebp-4],5
	test ecx,ecx
	je Block1

 Block14:
	lea edx,[ebp-0x2C]
	push edx
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],6
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x24],esi
	test eax,eax
	je Block17

 Block15:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x28]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x28]
	mov esi,ecx
	mov dword ptr [ebp+0x24],esi
	test eax,eax
	jge Block17

 Block16:
	cmp eax,0x80004002
	jne Block64

 Block17:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],8
	jne Block20

 Block18:
	mov eax,dword ptr [ebp-0x24]
	xor edx,edx
	mov word ptr [ebp-0x2C],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[ebp-0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block21:
	test esi,esi
	sete al
	test al,al
	je Block26

 Block22:
	mov byte ptr [ebp-4],3
	test esi,esi
	je Block24

 Block23:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block24:
	mov byte ptr [ebp-4],2
	test edi,edi
	je Block60

 Block25:
	add edi,0xFFFFFFF4
	push edi
	jmp Block59

 Block26:
	mov eax,3
	mov word ptr [ebp+0x3C],ax
	mov dword ptr [ebp+0x44],0xFF
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],9
	cmp eax,0x2A
	jne Block28

 Block27:
	lea edx,[ebx+2]
	jmp Block30

 Block28:
	mov edx,ebx
	cmp eax,0x39
	je Block30

 Block29:
	lea edx,[ebx+4]

 Block30:
	mov eax,dword ptr [ebp+0x58]
	test eax,eax
	je Block1

 Block31:
	mov ebx,dword ptr [eax]
	mov edi,dword ptr [ebp+0x3C]
	mov ecx,dword ptr [ebp+0x64]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x40]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp+0x44]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [ebp+0x48]
	push esi
	add ecx,4
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	mov dword ptr [eax+0xC],edi
	mov edi,dword ptr [ebp+0x58]
	push edx
	push edi
	call ecx
	test eax,eax
	jge Block33

 Block32:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block33:
	mov ebx,8
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp+0x3C],bx
	jne Block36

 Block34:
	mov eax,dword ptr [ebp+0x44]
	xor edx,edx
	mov word ptr [ebp+0x3C],dx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea eax,[ebp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov eax,dword ptr [ebp+0x54]
	cmp eax,0x1D
	je Block46

 Block38:
	cmp eax,0x2A
	je Block43

 Block39:
	cmp eax,0x38
	jne Block55

 Block40:
	lea ecx,[ebp+0x64]
	push ecx
	mov ecx,dword ptr [ebp+0x5C]
	lea edx,[ebp+0x60]
	push edx
	push 0x5A
	call CUIKeyConfig::GetShortCutPos
	mov eax,3
	mov word ptr [ebp-0x1C],ax
	mov dword ptr [ebp-0x14],0xFF
	mov edx,dword ptr [ebp+0x64]
	mov eax,dword ptr [ebp+0x60]
	lea ecx,[ebp-0x1C]
	push ecx
	push esi
	add edx,4
	push edx
	add eax,4
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0xC
	call IWzCanvas::Copy
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x1C],bx
	jne Block42

 Block41:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	jmp Block50

 Block42:
	lea edx,[ebp-0x1C]
	jmp Block53

 Block43:
	lea eax,[ebp+0x64]
	push eax
	lea ecx,[ebp+0x60]
	push ecx
	mov ecx,dword ptr [ebp+0x5C]
	push 0x36
	call CUIKeyConfig::GetShortCutPos
	mov edx,3
	mov word ptr [ebp],dx
	mov dword ptr [ebp+8],0xFF
	mov ecx,dword ptr [ebp+0x64]
	mov edx,dword ptr [ebp+0x60]
	lea eax,[ebp]
	push eax
	push esi
	add ecx,4
	push ecx
	add edx,2
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],0xB
	call IWzCanvas::Copy
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp],bx
	jne Block45

 Block44:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	jmp Block50

 Block45:
	lea ecx,[ebp]
	push ecx
	jmp Block54

 Block46:
	mov ecx,dword ptr [ebp+0x5C]
	lea edx,[ebp+0x64]
	push edx
	lea eax,[ebp+0x60]
	push eax
	push 0x59
	call CUIKeyConfig::GetShortCutPos
	mov ecx,3
	mov word ptr [ebp+0x2C],cx
	mov ecx,0xFF
	mov dword ptr [ebp+0x34],ecx
	mov eax,dword ptr [ebp+0x60]
	mov ebx,dword ptr [edi]
	mov edi,dword ptr [ebp+0x2C]
	mov edx,dword ptr [ebp+0x64]
	sub esp,0x10
	add eax,4
	mov dword ptr [ebp+0x4C],eax
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x30]
	push esi
	add edx,4
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp+0x58]
	push edx
	mov edx,dword ptr [ebp+0x4C]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x38]
	push edx
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [ebx+0x80]
	push edi
	mov byte ptr [ebp-4],0xA
	call eax
	test eax,eax
	jge Block48

 Block47:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block48:
	cmp word ptr [ebp+0x2C],8
	mov byte ptr [ebp-4],8
	jne Block52

 Block49:
	mov eax,dword ptr [ebp+0x34]
	xor ecx,ecx
	mov word ptr [ebp+0x2C],cx

 Block50:
	test eax,eax
	je Block55

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block52:
	lea edx,[ebp+0x2C]

 Block53:
	push edx

 Block54:
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov byte ptr [ebp-4],3
	test esi,esi
	je Block57

 Block56:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block57:
	mov eax,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],2
	test eax,eax
	je Block60

 Block58:
	add eax,0xFFFFFFF4
	push eax

 Block59:
	call ZXString<char>::_Release
	add esp,4

 Block60:
	mov esi,dword ptr [ebp+0x54]
	inc esi
	cmp esi,0x59
	mov dword ptr [ebp+0x54],esi
	jl Block8

 Block61:
	mov eax,dword ptr [ebp+0x58]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block63

 Block62:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block63:
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
	ret

 Block64:
	push eax
	call _com_issue_error
}
}
// CUIKeyConfig::CNoticeDlg::CNoticeDlg
_SUB_EXCEPTION_HANDLER(3DDBB0)
__SUB_CLASS_THIS(003DDBB0, __thiscall, 56011,  CUIKeyConfig::CNoticeDlg, void, CUIKeyConfig*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DDBB0
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
	mov esi,ecx
	mov dword ptr [esp+0x18],esi
	call CDialog::_ctor_default
	xor ebp,ebp
	int 3// TODO: 	mov dword ptr [esi],offset CUIKeyConfig::CNoticeDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIKeyConfig::CNoticeDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIKeyConfig::CNoticeDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x24],ebp
	mov dword ptr [esi+0x98],ebp
	mov dword ptr [esi+0xA0],ebp
	lea ecx,[esi+0xA4]
	mov byte ptr [esp+0x24],2
	call CUIToolTip::_ctor_default
	mov dword ptr [esp+0x14],ebp
	mov ebx,dword ptr [esp+0x30]
	push ebx
	lea eax,[esp+0x18]
	push offset _S_UIUIWINDOW2IMGKE__8
	push eax
	mov byte ptr [esp+0x30],4
	call ZXString16::Format
	add esp,0xC
	push ebp
	push 1
	push 0x73
	push 0x108
	mov ecx,esi
	call CDialog::CreateDlg_1
	mov edi,dword ptr [esp+0x14]
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	push edi
	call _xbstr_t::_ctor_1
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov dword ptr [esi+0x90],ebx
	mov byte ptr [esp+0x24],3
	cmp edi,ebp
	je Block2

 Block1:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,esi
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 8
}
}
// CUIKeyConfig::CUIKeyConfig
_SUB_EXCEPTION_HANDLER(3D9700)
__SUB_CLASS_THIS0(003D9700, __thiscall, 55975,  CUIKeyConfig, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D9700
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x1C],esi
	push 1
	xor edi,edi
	push edi
	push edi
	push offset _S_UIUIWINDOW2IMGKE__2
	push 6
	push 0x258
	push 5
	push 5
	call CUIWnd::_ctor_1
	lea eax,[esi+0xB08]
	mov dword ptr [esp+0x58],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0xB08]
	mov dword ptr [TSingleton<CUIKeyConfig>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIKeyConfig>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIKeyConfig::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIKeyConfig::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIKeyConfig::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x11BC],edi
	lea ebp,[esi+0x11C0]
	mov dword ptr [ebp],edi
	mov dword ptr [esi+0x11C4],edi
	mov dword ptr [esi+0x11C8],edi
	mov dword ptr [esi+0x11CC],edi
	mov dword ptr [esi+0x11D4],edi
	mov dword ptr [esi+0x11D8],edi
	mov dword ptr [esi+0x11DC],edi
	mov dword ptr [esi+0x11E0],edi
	mov dword ptr [esi+0x11E4],edi
	push 0x42C
	push edi
	push eax
	mov byte ptr [esp+0x64],7
	call _memset
	push 0x288
	lea edx,[esi+0xF34]
	push edi
	push edx
	call _memset
	mov ebx,dword ptr [ZImports::_VariantInit]
	add esp,0x18
	lea eax,[esp+0x30]
	push eax
	mov dword ptr [esi+0x11D0],edi
	call ebx
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x5C],8
	call ebx
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
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
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	mov bl,9
	push offset _S_UIUIWINDOW2IMGKE
	mov byte ptr [esp+0x70],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0x6C],0xA
	cmp dword ptr [_D_G_RM],edi
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea eax,[esp+0x54]
	mov byte ptr [esp+0x6C],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x60],0xB
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
	mov ebp,8
	mov byte ptr [esp+0x58],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x40],bp
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	cmp eax,edi
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea edx,[esp+0x40]
	push edx
	call ebx

 Block16:
	mov byte ptr [esp+0x58],8
	cmp word ptr [esp+0x20],bp
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x20]
	push ecx
	call ebx

 Block20:
	mov byte ptr [esp+0x58],7
	cmp word ptr [esp+0x30],bp
	jne Block23

 Block21:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,edi
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea eax,[esp+0x30]
	push eax
	call ebx

 Block24:
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	mov ebx,dword ptr [TSingleton<CQuickslotKeyMappedMan>::ms_pInstance]
	call CFuncKeyMappedMan::SaveFuncKeyMap
	mov ecx,ebx
	call CQuickslotKeyMappedMan::SaveQuickslotKeyMap
	mov ebx,dword ptr [esi+0x78]
	cmp ebx,edi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x14]
	push edx
	push ebx
	mov dword ptr [esp+0x1C],edi
	call eax
	cmp eax,edi
	jge Block28

 Block27:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block28:
	mov ebx,dword ptr [esi+0x78]
	mov ebp,dword ptr [esp+0x14]
	cmp ebx,edi
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x18]
	push edx
	push ebx
	mov dword ptr [esp+0x20],edi
	call eax
	cmp eax,edi
	jge Block32

 Block31:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block32:
	mov ecx,dword ptr [esp+0x18]
	push 0xA
	push ebp
	push ecx
	mov ecx,esi
	call CUIWnd::CreateUIWndPosSaved
	mov ecx,esi
	call CUIKeyConfig::CalcKeyIconPosInfo
	mov eax,esi
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x48
	ret
}
}
// CDraggableMenu::~CDraggableMenu
_SUB_EXCEPTION_HANDLER(3D8EE0)
__SUB_CLASS_THIS0(003D8EE0, __thiscall, 84954,  CDraggableMenu, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D8EE0
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
	int 3// TODO: 	mov dword ptr [esi],offset IDraggable::`vftable'
	mov eax,dword ptr [esi+0xC]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIKeyConfig::GetPaletteSlotFromIdx
__SUB_CLASS_THIS(003D8380, __thiscall, 55978,  CUIKeyConfig, long, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,4
	jne Block2

 Block1:
	mov eax,dword ptr [esp+8]
	ret 8

 Block2:
	cmp eax,6
	mov eax,dword ptr [esp+8]
	jne Block4

 Block3:
	add eax,0xFFFFFFBF
	ret 8

 Block4:
	add eax,0xFFFFFFEC
	ret 8
}
}
// CUIKeyConfig::OnQuickslotKeyConf
_SUB_EXCEPTION_HANDLER(3D9280)
__SUB_CLASS_THIS0(003D9280, __thiscall, 55977,  CUIKeyConfig, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D9280
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
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x20],0
	test eax,eax
	je Block13

 Block1:
	mov ecx,eax
	call CQuickslotKeyModifyDlg::_ctor_default
	test eax,eax
	je Block13

 Block2:
	add eax,8
	je Block13

 Block3:
	lea ebx,[eax-8]
	mov dword ptr [esp+0x14],ebx
	test ebx,ebx
	je Block5

 Block4:
	lea eax,[ebx+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ecx,ebx
	mov dword ptr [esp+0x20],1
	call CDialog::DoModal
	cmp eax,3
	je Block10

 Block6:
	cmp eax,1
	jne Block10

 Block7:
	lea esi,[ebx+0x90]
	test esi,esi
	je Block9

 Block8:
	mov edi,dword ptr [TSingleton<CQuickslotKeyMappedMan>::ms_pInstance]
	add edi,4
	mov ecx,8
	rep movsd

 Block9:
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	call CUIStatusBar::ReDrawQuickslot

 Block10:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test ebx,ebx
	je Block12

 Block11:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CQuickslotKeyModifyDlg>::_ReleaseRaw

 Block12:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret

 Block13:
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	jmp Block5
}
}
// CDraggableMenu::OnDropped
__SUB_CLASS_THIS(00109CC0, __thiscall, 84955,  CDraggableMenu, int32_t, IUIMsgHandler*, IUIMsgHandler*, long, long) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	mov ebx,ecx
	test edi,edi
	je Block34

 Block1:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIKeyConfig::ms_RTTI_CUIKeyConfig
	mov ecx,edi
	call edx
	mov esi,dword ptr [esp+0x14]
	test eax,eax
	je Block7

 Block2:
	lea eax,[edi-4]
	test eax,eax
	je Block7

 Block3:
	test esi,esi
	je Block7

 Block4:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIKeyConfig::ms_RTTI_CUIKeyConfig
	mov ecx,esi
	call edx
	test eax,eax
	je Block7

 Block5:
	lea eax,[esi-4]
	test eax,eax
	je Block7

 Block6:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x18]
	push 0
	push eax
	push ecx
	mov ecx,ebx
	call CDraggableMenu::MapFuncKey
	pop edi
	pop esi
	pop ebx
	ret 0x10

 Block7:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIStatusBar::ms_RTTI_CUIStatusBar
	mov ecx,edi
	call eax
	test eax,eax
	je Block14

 Block8:
	lea eax,[edi-4]
	test eax,eax
	je Block14

 Block9:
	test esi,esi
	je Block14

 Block10:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIStatusBar::ms_RTTI_CUIStatusBar
	mov ecx,esi
	call eax
	test eax,eax
	je Block14

 Block11:
	lea eax,[esi-4]
	test eax,eax
	je Block14

 Block12:
	mov esi,dword ptr [esp+0x1C]
	mov edi,dword ptr [esp+0x18]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push esi
	push edi
	call CUIStatusBar::GetShortCutIndexByPos
	mov ecx,ebx
	cmp eax,7
	ja Block33

 Block13:
	push 1
	push esi
	push edi
	call CDraggableMenu::MapFuncKey
	pop edi
	pop esi
	pop ebx
	ret 0x10

 Block14:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIKeyConfig::ms_RTTI_CUIKeyConfig
	mov ecx,edi
	call eax
	test eax,eax
	je Block20

 Block15:
	lea eax,[edi-4]
	test eax,eax
	je Block20

 Block16:
	test esi,esi
	je Block20

 Block17:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIStatusBar::ms_RTTI_CUIStatusBar
	mov ecx,esi
	call eax
	test eax,eax
	je Block20

 Block18:
	lea eax,[esi-4]
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x18]
	push 1
	push ecx
	push edx
	mov ecx,ebx
	call CDraggableMenu::MapFuncKey
	pop edi
	pop esi
	pop ebx
	ret 0x10

 Block20:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIStatusBar::ms_RTTI_CUIStatusBar
	mov ecx,edi
	call edx
	test eax,eax
	je Block25

 Block21:
	lea eax,[edi-4]
	test eax,eax
	je Block25

 Block22:
	test esi,esi
	je Block25

 Block23:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	push offset CUIKeyConfig::ms_RTTI_CUIKeyConfig
	mov ecx,esi
	call edx
	test eax,eax
	je Block25

 Block24:
	lea eax,[esi-4]
	test eax,eax
	jne Block6

 Block25:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIStatusBar::ms_RTTI_CUIStatusBar
	mov ecx,edi
	call eax
	test eax,eax
	je Block34

 Block26:
	lea eax,[edi-4]
	test eax,eax
	je Block34

 Block27:
	test esi,esi
	je Block32

 Block28:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIStatusBar::ms_RTTI_CUIStatusBar
	mov ecx,esi
	call eax
	test eax,eax
	je Block30

 Block29:
	lea eax,[esi-4]
	test eax,eax
	jne Block34

 Block30:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x48]
	push offset CUIKeyConfig::ms_RTTI_CUIKeyConfig
	mov ecx,esi
	call eax
	test eax,eax
	je Block32

 Block31:
	lea eax,[esi-4]
	test eax,eax
	jne Block34

 Block32:
	mov ecx,ebx

 Block33:
	call CDraggableMenu::QuickslotDropOut

 Block34:
	pop edi
	pop esi
	xor eax,eax
	pop ebx
	ret 0x10
}
}
// CUIKeyConfig::ReDrawKeyPalette
_SUB_EXCEPTION_HANDLER(3DD930)
__SUB_CLASS_THIS0(003DD930, __thiscall, 55977,  CUIKeyConfig, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DD930
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0x11CC],0
	je Block10

 Block1:
	mov eax,3
	mov word ptr [esp+0xC],ax
	mov dword ptr [esp+0x14],0xFFFFFFFE
	mov ecx,dword ptr [esi+0x11CC]
	mov dword ptr [esp+0x24],0
	test ecx,ecx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea edx,[esp+0xC]
	push edx
	lea eax,[esp+0xC]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block5:
	cmp word ptr [esp+0xC],8
	mov dword ptr [esp+0x24],0xFFFFFFFF
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+0xC],ax
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+0xC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov ecx,esi
	call CUIKeyConfig::DrawKeyPalette

 Block10:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret
}
}
// CUIKeyConfig::GetShortCutIndexByPos
__SUB_CLASS_THIS(003D8270, __thiscall, 55978,  CUIKeyConfig, long, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	mov ebx,dword ptr [esp+0x1C]
	push esi
	push edi
	mov edi,dword ptr [esp+0x20]
	xor esi,esi

 Block1:
	mov eax,dword ptr [esi*8+_D_S_PTSHORTKEYPOS__1]
	mov ecx,dword ptr [esi*8+_D_S_PTSHORTKEYPOS__1+4]
	mov dword ptr [esp+0xC],eax
	add eax,0x20
	push ebx
	mov dword ptr [esp+0x18],eax
	mov dword ptr [esp+0x14],ecx
	push edi
	lea eax,[esp+0x14]
	add ecx,0x20
	push eax
	mov dword ptr [esp+0x24],ecx
	call PtInRect
	test eax,eax
	jne Block4

 Block2:
	inc esi
	cmp esi,0x91
	jl Block1

 Block3:
	pop edi
	pop esi
	or eax,0xFFFFFFFF
	pop ebx
	add esp,0x10
	ret 8

 Block4:
	cmp dword ptr [esi*8+_D_S_PTSHORTKEYPOS__1],0
	jne Block6

 Block5:
	cmp dword ptr [esi*8+_D_S_PTSHORTKEYPOS__1+4],0
	je Block3

 Block6:
	mov eax,esi
	sub eax,0x36
	je Block11

 Block7:
	sub eax,0x23
	je Block10

 Block8:
	sub eax,1
	jne Block12

 Block9:
	mov esi,0x38
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	add esp,0x10
	ret 8

 Block10:
	mov esi,0x1D
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	add esp,0x10
	ret 8

 Block11:
	mov esi,0x2A

 Block12:
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	add esp,0x10
	ret 8
}
}
// CUIKeyConfig::OnDestroy
_SUB_EXCEPTION_HANDLER(3DDF60)
__SUB_CLASS_THIS0(003DDF60, __thiscall, 55977,  CUIKeyConfig, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DDF60
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
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edi
	call CWvsContext::RemoveFromStackForTab
	mov ebx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	mov ebp,dword ptr [TSingleton<CQuickslotKeyMappedMan>::ms_pInstance]
	mov ecx,ebx
	call CFuncKeyMappedMan::IsFuncKeyMapModified
	test eax,eax
	jne Block2

 Block1:
	mov ecx,ebp
	call CQuickslotKeyMappedMan::IsQuickslotKeyMapModified
	test eax,eax
	je Block15

 Block2:
	xor esi,esi
	cmp dword ptr [edi+0x11D0],esi
	jne Block15

 Block3:
	push 0xAEC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x24],esi
	cmp eax,esi
	je Block16

 Block4:
	push 2
	push edi
	mov ecx,eax
	call CUIKeyConfig::CNoticeDlg::_ctor_0
	cmp eax,esi
	je Block16

 Block5:
	add eax,8
	cmp eax,esi
	je Block16

 Block6:
	lea esi,[eax-8]
	mov dword ptr [esp+0x18],esi
	test esi,esi
	je Block8

 Block7:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block8:
	mov ecx,esi
	mov dword ptr [esp+0x24],1
	call CDialog::DoModal
	cmp eax,1
	jne Block13

 Block9:
	mov ecx,ebx
	call CFuncKeyMappedMan::IsFuncKeyMapModified
	test eax,eax
	je Block11

 Block10:
	mov ecx,ebx
	call CFuncKeyMappedMan::SaveFuncKeyMap

 Block11:
	mov ecx,ebp
	call CQuickslotKeyMappedMan::IsQuickslotKeyMapModified
	test eax,eax
	je Block13

 Block12:
	mov ecx,ebp
	call CQuickslotKeyMappedMan::SaveQuickslotKeyMap

 Block13:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test esi,esi
	je Block15

 Block14:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CUIKeyConfig::CNoticeDlg>::_ReleaseRaw

 Block15:
	mov ecx,edi
	call CUIWnd::OnDestroy
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret

 Block16:
	mov dword ptr [esp+0x18],esi
	jmp Block8
}
}
// CUIKeyConfig::RemoveFromPalette
__SUB_CLASS_THIS(003D8B50, __thiscall, 55980,  CUIKeyConfig, void, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	cmp eax,5
	jne Block2

 Block1:
	push esi
	lea esi,[edx-0x14]
	cmp esi,0x36
	pop esi
	jg Block3

 Block2:
	push edx
	push eax
	call CUIKeyConfig::GetPaletteSlotFromIdx
	add eax,0x145
	lea eax,[eax+eax*2]
	mov dword ptr [ecx+eax*4],1

 Block3:
	ret 8
}
}
// CUIKeyConfig::HitTest
__SUB_CLASS_THIS(003D8AC0, __thiscall, 55985,  CUIKeyConfig, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push ebp
	mov ebp,dword ptr [esp+0xC]
	push esi
	push edi
	mov edi,dword ptr [esp+0x1C]
	push edi
	push ebx
	push ebp
	mov esi,ecx
	call CWnd::HitTest
	test eax,eax
	je Block10

 Block1:
	test edi,edi
	je Block3

 Block2:
	cmp dword ptr [edi],0
	jne Block10

 Block3:
	push ebx
	push ebp
	mov ecx,esi
	call CUIKeyConfig::GetShortCutIndexByPos
	cmp eax,0xFFFFFFFF
	je Block6

 Block4:
	cmp eax,0x5A
	mov ecx,dword ptr [TSingleton<CFuncKeyMappedMan>::ms_pInstance]
	jg Block7

 Block5:
	push eax
	call CFuncKeyMappedMan::FuncKeyMapped
	cmp byte ptr [eax],0
	jne Block9

 Block6:
	pop edi
	pop esi
	pop ebp
	mov eax,1
	pop ebx
	ret 0xC

 Block7:
	lea ecx,[eax+eax*2+0x2BE]
	cmp dword ptr [esi+ecx*4],0
	jne Block6

 Block8:
	lea edx,[eax+eax*2]
	cmp byte ptr [esi+edx*4+0xAF0],0
	mov eax,1
	je Block10

 Block9:
	mov eax,2

 Block10:
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 0xC
}
}
// CUIKeyConfig::CalcKeyIconPosInfo
__SUB_CLASS_THIS0(003D83D0, __thiscall, 55977,  CUIKeyConfig, void) {
__asm {

 Block0:
	sub esp,0x4E4
	push esi
	push 0x198
	lea eax,[esp+0x354]
	push 0
	push eax
	call _memset
	mov eax,0x2A
	add esp,0xC
	or esi,0xFFFFFFFF
	mov dword ptr [esp+0x360],eax
	mov dword ptr [esp+0x370],eax
	mov dword ptr [esp+0x380],eax
	mov ecx,0x32
	mov dword ptr [esp+0x40C],eax
	mov eax,0x38
	push ebx
	push ebp
	mov dword ptr [esp+0x3E0],ecx
	mov dword ptr [esp+0x4B0],ecx
	mov dword ptr [esp+0x4BC],eax
	mov dword ptr [esp+0x4C0],eax
	mov dword ptr [esp+0x358],0x44
	mov dword ptr [esp+0x398],esi
	mov dword ptr [esp+0x3D0],0x3A
	mov dword ptr [esp+0x424],0x43
	mov dword ptr [esp+0x458],esi
	mov dword ptr [esp+0x45C],esi
	mov dword ptr [esp+0x460],esi
	mov dword ptr [esp+0x464],esi
	mov dword ptr [esp+0x468],0x54
	mov dword ptr [esp+0x498],esi
	mov dword ptr [esp+0x49C],esi
	mov dword ptr [esp+0x4A0],esi
	mov dword ptr [esp+0x4A4],esi
	mov dword ptr [esp+0x4A8],esi
	mov dword ptr [esp+0x4AC],0x31
	mov dword ptr [esp+0x4B4],0x35
	mov dword ptr [esp+0x4B8],0xAA
	mov dword ptr [esp+0x4C8],esi
	mov dword ptr [esp+0x4CC],esi
	mov dword ptr [esp+0x4D0],esi
	mov dword ptr [esp+0x4D4],esi
	mov dword ptr [esp+0x4D8],esi
	mov dword ptr [esp+0x4DC],esi
	mov dword ptr [esp+0x4E0],esi
	mov dword ptr [esp+0x4E4],esi
	mov dword ptr [esp+0x4E8],esi
	mov dword ptr [esp+0x4EC],esi
	mov dword ptr [esp+0x10],0x1C
	mov dword ptr [esp+0x14],0x42
	mov dword ptr [esp+0x18],0x63
	mov dword ptr [esp+0x1C],0x84
	mov dword ptr [esp+0x20],0xA5
	mov dword ptr [esp+0x24],0xC6
	mov dword ptr [esp+0xC],0
	lea eax,[esp+0x2C]
	lea ecx,[esp+0x358]
	push edi
	jmp Block2

 Block2:
	mov edi,0xB
	mov ebp,1
	lea ebx,[edi+6]
	lea ecx,[ecx]

 Block3:
	test ebp,ebp
	je Block5

 Block4:
	mov edx,dword ptr [esp+0x10]
	mov edx,dword ptr [esp+edx*4+0x14]
	mov dword ptr [eax-4],edi
	mov dword ptr [eax],edx
	jmp Block6

 Block5:
	mov dword ptr [eax-4],0
	mov dword ptr [eax],0

 Block6:
	mov edx,dword ptr [ecx]
	test edx,edx
	jne Block8

 Block7:
	add edi,0x22
	jmp Block11

 Block8:
	cmp edx,esi
	jne Block10

 Block9:
	xor ebp,ebp
	jmp Block11

 Block10:
	add edi,edx

 Block11:
	add eax,8
	add ecx,4
	sub ebx,1
	jne Block3

 Block12:
	mov edx,dword ptr [esp+0x10]
	inc edx
	cmp edx,6
	mov dword ptr [esp+0x10],edx
	jl Block2

 Block13:
	push 0x488
	push ebx
	push offset _D_S_PTSHORTKEYPOS__1
	call _memset
	mov ecx,dword ptr [esp+0x9C]
	mov edx,dword ptr [esp+0x98]
	mov esi,dword ptr [esp+0x94]
	mov edi,dword ptr [esp+0x90]
	mov ebx,dword ptr [esp+0x8C]
	add esp,0xC
	xor eax,eax
	mov dword ptr [esp+0x10],eax
	lea ebx,[ebx]

 Block14:
	test eax,eax
	jne Block16

 Block15:
	mov ebp,dword ptr [esp+0x34]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+472],ebp
	mov ebp,dword ptr [esp+0x38]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+476],ebp
	mov ebp,dword ptr [esp+0x3C]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+480],ebp
	mov ebp,dword ptr [esp+0x40]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+484],ebp
	mov ebp,dword ptr [esp+0x44]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+488],ebp
	mov ebp,dword ptr [esp+0x48]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+492],ebp
	mov ebp,dword ptr [esp+0x4C]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+496],ebp
	mov ebp,dword ptr [esp+0x50]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+500],ebp
	mov ebp,dword ptr [esp+0x54]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+504],ebp
	mov ebp,dword ptr [esp+0x58]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+508],ebp
	mov ebp,dword ptr [esp+0x5C]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+512],ebp
	mov ebp,dword ptr [esp+0x60]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+516],ebp
	mov ebp,dword ptr [esp+0x64]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+520],ebp
	mov ebp,dword ptr [esp+0x68]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+524],ebp
	mov ebp,dword ptr [esp+0x6C]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+528],ebp
	mov ebp,dword ptr [esp+0x70]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+532],ebp
	mov ebp,dword ptr [esp+0x74]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+536],ebp
	mov ebp,dword ptr [esp+0x78]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+540],ebp
	mov ebp,dword ptr [esp+0x7C]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+544],ebp
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+548],ebx
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+696],edi
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+700],esi
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+704],edx
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+708],ecx
	jmp Block34

 Block16:
	cmp eax,1
	jne Block21

 Block17:
	xor eax,eax
	jmp Block19

 Block19:
	mov ebp,dword ptr [esp+eax+0xBC]
	mov dword ptr [eax+_D_S_PTSHORTKEYPOS__1+16],ebp
	mov ebp,dword ptr [esp+eax+0xC0]
	mov dword ptr [eax+_D_S_PTSHORTKEYPOS__1+20],ebp
	add eax,8
	cmp eax,0x58
	jle Block19

 Block20:
	mov eax,dword ptr [esp+0xB4]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+328],eax
	mov eax,dword ptr [esp+0xB8]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+332],eax
	mov eax,dword ptr [esp+0x124]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+656],eax
	mov eax,dword ptr [esp+0x128]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+660],eax
	mov eax,dword ptr [esp+0x12C]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+568],eax
	mov eax,dword ptr [esp+0x130]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+572],eax
	mov eax,dword ptr [esp+0x134]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+584],eax
	mov eax,dword ptr [esp+0x138]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+588],eax
	mov eax,dword ptr [esp+0x10]
	jmp Block34

 Block21:
	cmp eax,2
	jne Block26

 Block22:
	xor eax,eax
	jmp Block24

 Block24:
	mov ebp,dword ptr [esp+eax+0x144]
	mov dword ptr [eax+_D_S_PTSHORTKEYPOS__1+128],ebp
	mov ebp,dword ptr [esp+eax+0x148]
	mov dword ptr [eax+_D_S_PTSHORTKEYPOS__1+132],ebp
	add eax,8
	cmp eax,0x58
	jle Block24

 Block25:
	mov eax,dword ptr [esp+0x1A4]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+344],eax
	mov eax,dword ptr [esp+0x1A8]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+348],eax
	mov eax,dword ptr [esp+0x1AC]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+664],eax
	mov eax,dword ptr [esp+0x1B0]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+668],eax
	mov eax,dword ptr [esp+0x1B4]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+632],eax
	mov eax,dword ptr [esp+0x1B8]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+636],eax
	mov eax,dword ptr [esp+0x1BC]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+648],eax
	mov eax,dword ptr [esp+0x1C0]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+652],eax
	mov eax,dword ptr [esp+0x10]
	jmp Block34

 Block26:
	cmp eax,3
	jne Block30

 Block27:
	xor eax,eax

 Block28:
	mov ebp,dword ptr [esp+eax+0x1CC]
	mov dword ptr [eax+_D_S_PTSHORTKEYPOS__1+240],ebp
	mov ebp,dword ptr [esp+eax+0x1D0]
	mov dword ptr [eax+_D_S_PTSHORTKEYPOS__1+244],ebp
	add eax,8
	cmp eax,0x50
	jle Block28

 Block29:
	mov eax,dword ptr [esp+0x10]
	jmp Block34

 Block30:
	cmp eax,4
	jne Block32

 Block31:
	mov ebp,dword ptr [esp+0x254]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+352],ebp
	mov ebp,dword ptr [esp+0x258]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+356],ebp
	mov ebp,dword ptr [esp+0x25C]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+360],ebp
	mov ebp,dword ptr [esp+0x260]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+364],ebp
	mov ebp,dword ptr [esp+0x264]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+368],ebp
	mov ebp,dword ptr [esp+0x268]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+372],ebp
	mov ebp,dword ptr [esp+0x26C]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+376],ebp
	mov ebp,dword ptr [esp+0x270]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+380],ebp
	mov ebp,dword ptr [esp+0x274]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+384],ebp
	mov ebp,dword ptr [esp+0x278]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+388],ebp
	mov ebp,dword ptr [esp+0x27C]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+392],ebp
	mov ebp,dword ptr [esp+0x280]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+396],ebp
	mov ebp,dword ptr [esp+0x284]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+400],ebp
	mov ebp,dword ptr [esp+0x288]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+404],ebp
	mov ebp,dword ptr [esp+0x28C]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+408],ebp
	mov ebp,dword ptr [esp+0x290]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+412],ebp
	mov ebp,dword ptr [esp+0x294]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+416],ebp
	mov ebp,dword ptr [esp+0x298]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+420],ebp
	mov ebp,dword ptr [esp+0x24C]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+336],ebp
	mov ebp,dword ptr [esp+0x250]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+340],ebp
	mov ebp,dword ptr [esp+0x2A4]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+432],ebp
	mov ebp,dword ptr [esp+0x2A8]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+436],ebp
	jmp Block34

 Block32:
	cmp eax,5
	jne Block34

 Block33:
	mov ebp,dword ptr [esp+0x2D4]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+232],ebp
	mov ebp,dword ptr [esp+0x2D8]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+236],ebp
	mov ebp,dword ptr [esp+0x2E4]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+448],ebp
	mov ebp,dword ptr [esp+0x2E8]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+452],ebp
	mov ebp,dword ptr [esp+0x2EC]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+456],ebp
	mov ebp,dword ptr [esp+0x2F0]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+460],ebp
	mov ebp,dword ptr [esp+0x2F4]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+720],ebp
	mov ebp,dword ptr [esp+0x2F8]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+724],ebp
	mov ebp,dword ptr [esp+0x304]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+712],ebp
	mov ebp,dword ptr [esp+0x308]
	mov dword ptr [_D_S_PTSHORTKEYPOS__1+716],ebp

 Block34:
	inc eax
	cmp eax,6
	mov dword ptr [esp+0x10],eax
	jl Block14

 Block35:
	pop edi
	xor eax,eax
	pop ebp
	lea ecx,[eax+0x5B]
	mov edx,0x10B
	pop ebx
	nop

 Block36:
	mov esi,eax
	shl esi,4
	add esi,eax
	lea esi,[esi+esi+6]
	inc eax
	mov dword ptr [ecx*8+_D_S_PTSHORTKEYPOS__1],esi
	mov dword ptr [ecx*8+_D_S_PTSHORTKEYPOS__1+4],edx
	cmp ecx,0x6C
	je Block38

 Block37:
	cmp ecx,0x7E
	jne Block39

 Block38:
	xor eax,eax
	add edx,0x22

 Block39:
	inc ecx
	cmp ecx,0x91
	jl Block36

 Block40:
	add dword ptr [_D_S_PTSHORTKEYPOS__1+336],0x18
	add dword ptr [_D_S_PTSHORTKEYPOS__1+432],0x10
	mov eax,8
	add dword ptr [_D_S_PTSHORTKEYPOS__1+232],eax
	add dword ptr [_D_S_PTSHORTKEYPOS__1+712],eax
	mov eax,9
	add dword ptr [_D_S_PTSHORTKEYPOS__1+448],eax
	add dword ptr [_D_S_PTSHORTKEYPOS__1+720],eax
	add dword ptr [_D_S_PTSHORTKEYPOS__1+456],0x3C
	pop esi
	add esp,0x4E4
	ret
}
}
// CUIKeyConfig::IsKindOf
__SUB_CLASS_THIS(003D8E20, __thiscall, 55997,  CUIKeyConfig, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIKeyConfig::ms_RTTI_CUIKeyConfig
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
// CUIKeyConfig::GetIdxFromPaletteSlot
__SUB_CLASS_THIS(003D83B0, __thiscall, 55988,  CUIKeyConfig, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x1E
	jl Block4

 Block1:
	cmp eax,0x23
	jge Block3

 Block2:
	add eax,0x14
	ret 4

 Block3:
	add eax,0x41

 Block4:
	ret 4
}
}
// CDraggableMenu::OnDoubleClicked
__SUB_CLASS_THIS0(00109A80, __thiscall, 84956,  CDraggableMenu, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret
}
}
// CDraggableSkill::MapMacro
__SUB_CLASS_THIS(0010A180, __thiscall, 84977,  CDraggableSkill, int32_t, long, long, int32_t, int32_t) {
__asm {

 Block0:
	sub esp,8
	push ebp
	mov ebp,ecx
	push esi
	mov esi,dword ptr [ebp+0x18]
	push esi
	call is_able_to_map_macrosys_skill
	add esp,4
	test eax,eax
	jne Block2

 Block1:
	pop esi
	pop ebp
	add esp,8
	ret 0x10

 Block2:
	mov ecx,dword ptr [TSingleton<CSkillInfo>::ms_pInstance]
	push ebx
	push edi
	push esi
	call CSkillInfo::GetSkill
	mov esi,eax
	xor ebx,ebx
	cmp esi,ebx
	je Block6

 Block3:
	mov ecx,esi
	lea edi,[ebx+1]
	call SKILLENTRY::GetMaxLevel
	cmp eax,edi
	jl Block6

 Block4:
	push edi
	mov ecx,esi
	call SKILLENTRY::GetLevelData
	mov ecx,dword ptr [eax+0x21C]
	push ecx
	add eax,0x214
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jg Block18

 Block5:
	mov ecx,esi
	inc edi
	call SKILLENTRY::GetMaxLevel
	cmp edi,eax
	jle Block4

 Block6:
	mov eax,dword ptr [TSingleton<CUIMacroSys>::ms_pInstance]
	xor esi,esi
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x10],ebx
	test eax,eax
	je Block8

 Block7:
	mov esi,eax
	jmp Block10

 Block8:
	mov eax,dword ptr [TSingleton<CUIMacroSysEx>::ms_pInstance]
	test eax,eax
	je Block18

 Block9:
	mov ebx,eax

 Block10:
	cmp dword ptr [esp+0x28],0
	je Block15

 Block11:
	mov ecx,dword ptr [ebp+0x20]
	cmp ecx,0xFFFFFFFF
	je Block15

 Block12:
	mov eax,dword ptr [ebp+0x24]
	cmp eax,0xFFFFFFFF
	je Block15

 Block13:
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CMacroSysMan>::ms_pInstance]
	call CMacroSysMan::Delete
	mov ecx,dword ptr [TSingleton<CMacroSysMan>::ms_pInstance]
	call CMacroSysMan::FlushToSvr
	test esi,esi
	je Block19

 Block14:
	mov ecx,esi
	call CUIMacroSys::ResetInfo

 Block15:
	test esi,esi
	je Block20

 Block16:
	mov edi,dword ptr [esp+0x24]
	test edi,edi
	jne Block22

 Block17:
	mov ecx,dword ptr [esp+0x20]
	lea edx,[esp+0x10]
	push edx
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x18]
	push eax
	push edi
	push ecx
	push edx
	mov ecx,esi
	call CUIMacroSys::GetIndexByPos
	test eax,eax
	jne Block22

 Block18:
	pop edi
	pop ebx
	pop esi
	xor eax,eax
	pop ebp
	add esp,8
	ret 0x10

 Block19:
	mov ecx,ebx
	call CUIMacroSysEx::ResetInfo

 Block20:
	mov edi,dword ptr [esp+0x24]
	test edi,edi
	jne Block22

 Block21:
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x10]
	push eax
	mov eax,dword ptr [esp+0x20]
	lea ecx,[esp+0x18]
	push ecx
	push edi
	push edx
	push eax
	mov ecx,ebx
	call CUIMacroSysEx::GetIndexByPos
	test eax,eax
	je Block18

 Block22:
	mov ecx,dword ptr [ebp+0x20]
	cmp ecx,0xFFFFFFFF
	je Block25

 Block23:
	mov eax,dword ptr [ebp+0x24]
	cmp eax,0xFFFFFFFF
	je Block25

 Block24:
	push eax
	push ecx
	mov ecx,dword ptr [TSingleton<CMacroSysMan>::ms_pInstance]
	call CMacroSysMan::Delete

 Block25:
	test edi,edi
	jne Block27

 Block26:
	mov ecx,dword ptr [ebp+0x18]
	mov edx,dword ptr [esp+0x10]
	mov eax,dword ptr [esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CMacroSysMan>::ms_pInstance]
	push edx
	push eax
	call CMacroSysMan::Map

 Block27:
	mov ecx,dword ptr [TSingleton<CMacroSysMan>::ms_pInstance]
	call CMacroSysMan::FlushToSvr
	test esi,esi
	je Block29

 Block28:
	mov ecx,esi
	call CUIMacroSys::ResetInfo
	pop edi
	pop ebx
	pop esi
	mov eax,1
	pop ebp
	add esp,8
	ret 0x10

 Block29:
	mov ecx,ebx
	call CUIMacroSysEx::ResetInfo
	pop edi
	pop ebx
	pop esi
	mov eax,1
	pop ebp
	add esp,8
	ret 0x10
}
}
// CUIKeyConfig::CNoticeDlg::SetToolTipInNotice
_SUB_EXCEPTION_HANDLER(3DC430)
__SUB_CLASS_THIS(003DC430, __thiscall, 56019,  CUIKeyConfig::CNoticeDlg, void, NakedParam<ZRef<CCtrlButton>>, const char*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DC430
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
	mov edi,ecx
	mov dword ptr [esp+0x18],edi
	cmp dword ptr [esp+0x44],0
	mov dword ptr [esp+0x38],0
	je Block13

 Block1:
	mov esi,dword ptr [esp+0x48]
	test esi,esi
	je Block13

 Block2:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea edx,[esp+0x20]
	push edx
	push ecx
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push esi
	mov byte ptr [esp+0x44],1
	call _xbstr_t::_ctor_0
	lea eax,[esp+0x1C]
	push 0
	push eax
	mov byte ptr [esp+0x48],2
	call get_basic_font
	add esp,8
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x40],3
	test ecx,ecx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	mov byte ptr [esp+0x40],4
	call IWzFont::CalcTextWidth
	mov edx,dword ptr [edi+4]
	mov ebx,dword ptr [esp+0x44]
	add edi,4
	mov esi,eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,edi
	call eax
	mov ebp,eax
	shr esi,1
	mov ecx,ebx
	sub ebp,esi
	call CCtrlWnd::GetX
	mov esi,eax
	mov eax,dword ptr [esp+0x14]
	add esi,ebp
	mov byte ptr [esp+0x38],1
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x38],0
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x30]
	mov ebx,dword ptr [esp+0x44]
	mov ecx,edi
	call eax
	mov ecx,ebx
	mov edi,eax
	call CCtrlWnd::GetY
	mov ecx,dword ptr [esp+0x48]
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	lea eax,[edi+eax+0x1E]
	push eax
	push esi
	add ecx,0xA4
	call CUIToolTip::SetToolTip_String
	jmp Block14

 Block13:
	lea ecx,[edi+0xA4]
	call CUIToolTip::ClearToolTip

 Block14:
	cmp dword ptr [esp+0x44],0
	mov dword ptr [esp+0x38],0xFFFFFFFF
	je Block16

 Block15:
	push 0
	lea ecx,[esp+0x44]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block16:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 0xC
}
}
// CUIKeyConfig::Draw
_SUB_EXCEPTION_HANDLER(3DD7C0)
__SUB_CLASS_THIS(003DD7C0, __thiscall, 55982,  CUIKeyConfig, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DD7C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x38]
	push eax
	call CWnd::Draw
	mov ecx,esi
	call CUIKeyConfig::CompareValidateFuncKeyMappedInfo
	test eax,eax
	jne Block18

 Block1:
	mov ecx,3
	mov word ptr [esp+8],cx
	mov dword ptr [esp+0x10],0xFFFFFFFE
	mov ecx,dword ptr [esi+0x11C8]
	mov dword ptr [esp+0x30],eax
	test ecx,ecx
	jne Block3

 Block2:
	push 0x80004003
	call _com_issue_error

 Block3:
	lea edx,[esp+8]
	push edx
	lea eax,[esp+0x3C]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block5:
	cmp word ptr [esp+8],8
	mov dword ptr [esp+0x30],0xFFFFFFFF
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [esp+8],ax
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[esp+8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	mov edx,3
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],0xFFFFFFFE
	mov ecx,dword ptr [esi+0x11CC]
	mov dword ptr [esp+0x30],1
	test ecx,ecx
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	lea eax,[esp+0x18]
	push eax
	lea edx,[esp+0x3C]
	push edx
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	cmp word ptr [esp+0x18],8
	mov dword ptr [esp+0x30],0xFFFFFFFF
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov ecx,esi
	call CUIKeyConfig::DrawFuncKeyMapped
	mov ecx,esi
	call CUIKeyConfig::DrawKeys
	mov ecx,esi
	call CUIKeyConfig::DrawKeyPalette

 Block18:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x2C
	ret 4
}
}
// CUIKeyConfig::CNoticeDlg::~CNoticeDlg
_SUB_EXCEPTION_HANDLER(3DDCB0)
__SUB_CLASS_THIS0(003DDCB0, __thiscall, 56013,  CUIKeyConfig::CNoticeDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DDCB0
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIKeyConfig::CNoticeDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIKeyConfig::CNoticeDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIKeyConfig::CNoticeDlg::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xA4]
	mov dword ptr [esp+0x18],2
	call CUIToolTip::~CUIToolTip
	cmp dword ptr [esi+0xA0],0
	lea edi,[esi+0x9C]
	mov byte ptr [esp+0x18],1
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	cmp dword ptr [esi+0x98],0
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x18],0
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	mov ecx,esi
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CDialog::~CDialog
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CDraggableMenu::CDraggableMenu
_SUB_EXCEPTION_HANDLER(3D8E50)
__SUB_CLASS_THIS(003D8E50, __thiscall, 84952,  CDraggableMenu, void, IWzGr2DLayer*, long, long, int32_t, IUIMsgHandler*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3D8E50
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
	int 3// TODO: 	mov dword ptr [esi],offset IDraggable::`vftable'
	mov dword ptr [esi+0xC],eax
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [esi+0x18],eax
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esi+0x24],eax
	int 3// TODO: 	mov dword ptr [esi],offset CDraggableMenu::`vftable'
	mov dword ptr [esi+0x1C],ecx
	mov dword ptr [esi+0x20],edx
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0x14
}
}
// CUIKeyConfig::CNoticeDlg::OnKey
__SUB_CLASS_THIS(003D8370, __thiscall, 56016,  CUIKeyConfig::CNoticeDlg, void, uint32_t, uint32_t) {
__asm {

 Block0:
	jmp  CDialog::OnKey
}
}
// CUIKeyConfig::CNoticeDlg::OnChildNotify
_SUB_EXCEPTION_HANDLER(3DDA00)
__SUB_CLASS_THIS(003DDA00, __thiscall, 56017,  CUIKeyConfig::CNoticeDlg, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DDA00
	mov eax,dword ptr fs:[0]
	push eax
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x1C]
	cmp eax,0x65
	jne Block13

 Block1:
	mov eax,dword ptr [esp+0x18]
	sub eax,1
	je Block9

 Block2:
	sub eax,1
	jne Block15

 Block3:
	cmp dword ptr [esp+0x20],eax
	jne Block5

 Block4:
	push 0
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [eax+4],0
	call CUIKeyConfig::CNoticeDlg::SetToolTipInNotice
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 0xC

 Block5:
	cmp dword ptr [esi+0x90],2
	jne Block15

 Block6:
	mov ecx,dword ptr [TSingleton<CQuickslotKeyMappedMan>::ms_pInstance]
	call CQuickslotKeyMappedMan::IsQuickslotKeyMapModified
	test eax,eax
	je Block15

 Block7:
	lea eax,[esp+0x20]
	push 0x1557
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	sub esp,8
	lea edx,[esi+0x9C]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	mov dword ptr [esp+0x20],0
	call ZRef<CCtrlButton>::_ctor_copy
	mov ecx,esi
	call CUIKeyConfig::CNoticeDlg::SetToolTipInNotice
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block15

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 0xC

 Block9:
	cmp dword ptr [esp+0x20],0
	je Block4

 Block10:
	cmp dword ptr [esi+0x90],0
	jne Block15

 Block11:
	lea eax,[esp+0x18]
	push 0x1557
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push eax
	sub esp,8
	lea edx,[esi+0x94]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	mov dword ptr [esp+0x20],1
	call ZRef<CCtrlButton>::_ctor_copy
	mov ecx,esi
	call CUIKeyConfig::CNoticeDlg::SetToolTipInNotice
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x10],0xFFFFFFFF
	test eax,eax
	je Block15

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 0xC

 Block13:
	cmp eax,0x64
	jne Block15

 Block14:
	mov ecx,dword ptr [esp+0x18]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push ecx
	mov ecx,esi
	call edx

 Block15:
	mov ecx,dword ptr [esp+8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0xC
	ret 0xC
}
}
// CUIKeyConfig::OnCreate
_SUB_EXCEPTION_HANDLER(3DC5D0)
__SUB_CLASS_THIS(003DC5D0, __thiscall, 55981,  CUIKeyConfig, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3DC5D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x7C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x90]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	xor edi,edi
	push edi
	push edi
	lea esi,[ebp+0x11D4]
	push ebp
	mov ecx,esi
	call CLayoutMan::Init
	mov eax,dword ptr [esp+0xA0]
	push eax
	mov ecx,ebp
	call CUIWnd::OnCreate_0
	mov dword ptr [esp+0x8C],edi
	mov dword ptr [esp+0x80],1
	mov dword ptr [esp+0x84],edi
	mov dword ptr [esp+0x88],edi
	push edi
	push edi
	push edi
	push 1
	push offset _S_UIUIWINDOW2IMGKE__4
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0xB0],edi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x24],edi
	je Block2

 Block1:
	push edi
	lea ecx,[esp+0x24]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block2:
	push edi
	push edi
	push edi
	push 2
	push offset _S_UIUIWINDOW2IMGKE__3
	lea edx,[esp+0x34]
	push edx
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x24],edi
	je Block4

 Block3:
	push edi
	lea ecx,[esp+0x24]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block4:
	push edi
	push edi
	push edi
	push 0x7D0
	push offset _S_UIUIWINDOW2IMGKE__7
	lea eax,[esp+0x34]
	push eax
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x24],edi
	je Block6

 Block5:
	push edi
	lea ecx,[esp+0x24]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block6:
	push edi
	push edi
	push edi
	push 0x7D1
	push offset _S_UIUIWINDOW2IMGKE__6
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x24],edi
	je Block8

 Block7:
	push edi
	lea ecx,[esp+0x24]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block8:
	push edi
	push edi
	push edi
	push 0x7D2
	push offset _S_UIUIWINDOW2IMGKE__5
	lea edx,[esp+0x34]
	push edx
	mov ecx,esi
	call CLayoutMan::AddButton
	cmp dword ptr [esp+0x24],edi
	je Block10

 Block9:
	push edi
	lea ecx,[esp+0x24]
	call ZRef<CCtrlOriginButton>::_ReleaseRaw

 Block10:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x40]
	push eax
	call esi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x9C],1
	call esi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	push edi
	push edi
	lea ecx,[esp+0x48]
	push ecx
	lea edx,[esp+0x3C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 0x50E
	push eax
	mov byte ptr [esp+0xB4],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xAC],3
	cmp dword ptr [_D_G_RM],edi
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea ecx,[esp+0x74]
	push ecx
	mov byte ptr [esp+0xB0],2
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA0],4
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0x11BC]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block19

 Block17:
	cmp eax,0x80004002
	je Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	cmp word ptr [esp+0x60],8
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x98],2
	jne Block22

 Block20:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	cmp eax,edi
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea eax,[esp+0x60]
	push eax
	call ebx

 Block23:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x98],1
	jne Block26

 Block24:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,edi
	je Block27

 Block25:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block26:
	lea edx,[esp+0x30]
	push edx
	call ebx

 Block27:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x98],0
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,edi
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[esp+0x40]
	push ecx
	call ebx

 Block31:
	lea edx,[esp+0x30]
	push edx
	call esi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	lea ecx,[esp+0x40]
	mov bl,5
	push ecx
	mov byte ptr [esp+0x9C],bl
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x98],6
	cmp ecx,edi
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea eax,[esp+0x30]
	push eax
	lea edx,[esp+0x44]
	push edx
	push edi
	push 0x130
	push 0x26E
	push edi
	push edi
	lea eax,[esp+0x38]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x11C4]
	cmp esi,eax
	je Block42

 Block38:
	mov dword ptr [ebp+0x11C4],eax
	cmp eax,edi
	je Block40

 Block39:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block40:
	cmp esi,edi
	je Block42

 Block41:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block42:
	mov eax,dword ptr [esp+0x1C]
	cmp eax,edi
	je Block44

 Block43:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block44:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x98],bl
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	cmp eax,edi
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
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x98],0
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,edi
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
	lea edx,[esp+0x1C]
	push edx
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,7
	mov ecx,0xD
	mov byte ptr [esp+0x98],bl
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	cmp eax,edi
	je Block54

 Block53:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block54:
	mov esi,dword ptr [ebp+0x11C4]
	mov byte ptr [esp+0x98],8
	cmp esi,edi
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
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
	cmp eax,edi
	jge Block58

 Block57:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block58:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x98],bl
	jne Block61

 Block59:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,edi
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x98],0
	cmp eax,edi
	je Block64

 Block63:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block64:
	mov esi,dword ptr [ebp+0x11C4]
	cmp esi,edi
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 2
	push esi
	call ecx
	cmp eax,edi
	jge Block68

 Block67:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block68:
	mov esi,dword ptr [ebp+0x11C4]
	cmp esi,edi
	jne Block70

 Block69:
	push 0x80004003
	call _com_issue_error

 Block70:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	cmp eax,edi
	jge Block72

 Block71:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block72:
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,9
	mov edx,0xD
	mov byte ptr [esp+0x98],bl
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],eax
	cmp eax,edi
	je Block74

 Block73:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block74:
	mov esi,dword ptr [ebp+0x11C4]
	mov byte ptr [esp+0x98],0xA
	cmp esi,edi
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
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
	cmp eax,edi
	jge Block78

 Block77:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block78:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x98],bl
	jne Block81

 Block79:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,edi
	je Block82

 Block80:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block82

 Block81:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block82:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x98],0
	cmp eax,edi
	je Block84

 Block83:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block84:
	mov dword ptr [esp+0x14],edi
	lea eax,[esp+0x1C]
	push 0x3D0
	push eax
	mov byte ptr [esp+0xA0],0xB
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[esp+0x18]
	push ecx
	push eax
	mov byte ptr [esp+0xA4],0xC
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x98],0xB
	cmp eax,edi
	je Block86

 Block85:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block86:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x30]
	push edx
	call esi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block88

 Block87:
	push eax
	call _com_issue_error

 Block88:
	lea ecx,[esp+0x40]
	push ecx
	mov byte ptr [esp+0x9C],0xD
	call esi
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block90

 Block89:
	push eax
	call _com_issue_error

 Block90:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x98],0xE
	cmp ecx,edi
	jne Block92

 Block91:
	push 0x80004003
	call _com_issue_error

 Block92:
	lea eax,[esp+0x30]
	push eax
	lea edx,[esp+0x44]
	push edx
	push 0x130
	push 0x26E
	call IWzCanvas::Create
	mov ebx,8
	mov byte ptr [esp+0x98],0xD
	cmp word ptr [esp+0x40],bx
	jne Block95

 Block93:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	cmp eax,edi
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea ecx,[esp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov byte ptr [esp+0x98],0xB
	cmp word ptr [esp+0x30],bx
	jne Block99

 Block97:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	cmp eax,edi
	je Block100

 Block98:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block100

 Block99:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block100:
	lea ecx,[esp+0x60]
	push ecx
	call esi
	lea edx,[esp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block102

 Block101:
	push eax
	call _com_issue_error

 Block102:
	lea eax,[esp+0x50]
	push eax
	mov byte ptr [esp+0x9C],0xF
	call esi
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block104

 Block103:
	push eax
	call _com_issue_error

 Block104:
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x9C],0x10
	call esi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block106

 Block105:
	push eax
	call _com_issue_error

 Block106:
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0x9C],0x11
	call esi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block108

 Block107:
	push eax
	call _com_issue_error

 Block108:
	lea eax,[esp+0x40]
	mov bl,0x12
	push eax
	mov byte ptr [esp+0x9C],bl
	call esi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block110

 Block109:
	push eax
	call _com_issue_error

 Block110:
	mov ecx,dword ptr [ebp+0x11C4]
	mov byte ptr [esp+0x98],0x13
	cmp ecx,edi
	jne Block112

 Block111:
	push 0x80004003
	call _com_issue_error

 Block112:
	lea edx,[esp+0x60]
	push edx
	lea eax,[esp+0x54]
	push eax
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [esp+0x24]
	lea edx,[esp+0x50]
	push edx
	push eax
	lea edx,[esp+0x88]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x70],8
	jne Block115

 Block113:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	cmp eax,edi
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea ecx,[esp+0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block116:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x98],bl
	jne Block119

 Block117:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	cmp eax,edi
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block120:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x98],0x11
	jne Block127

 Block121:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	cmp eax,edi
	je Block123

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block123:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block124:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x98],0x10
	jne Block128

 Block125:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	je Block129

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block129

 Block127:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x30]
	push edx
	call ebx
	jmp Block124

 Block128:
	lea ecx,[esp+0x20]
	push ecx
	call ebx

 Block129:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x98],0xF
	jne Block132

 Block130:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	cmp eax,edi
	je Block133

 Block131:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block133

 Block132:
	lea eax,[esp+0x50]
	push eax
	call ebx

 Block133:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x98],0xB
	jne Block136

 Block134:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	cmp eax,edi
	je Block137

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block137

 Block136:
	lea edx,[esp+0x60]
	push edx
	call ebx

 Block137:
	lea eax,[esp+0x50]
	push eax
	call esi
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block139

 Block138:
	push eax
	call _com_issue_error

 Block139:
	lea edx,[esp+0x60]
	mov bl,0x14
	push edx
	mov byte ptr [esp+0x9C],bl
	call esi
	lea eax,[esp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block141

 Block140:
	push eax
	call _com_issue_error

 Block141:
	mov esi,dword ptr [ebp+0x78]
	mov byte ptr [esp+0x98],0x15
	cmp esi,edi
	jne Block143

 Block142:
	push 0x80004003
	call _com_issue_error

 Block143:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],edi
	call eax
	cmp eax,edi
	jge Block145

 Block144:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block145:
	mov esi,dword ptr [ebp+0x78]
	mov edi,dword ptr [esp+0x18]
	test esi,esi
	jne Block147

 Block146:
	push 0x80004003
	call _com_issue_error

 Block147:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x1C]
	push edx
	push esi
	mov dword ptr [esp+0x24],0
	call eax
	test eax,eax
	jge Block149

 Block148:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block149:
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block151

 Block150:
	push 0x80004003
	call _com_issue_error

 Block151:
	lea edx,[esp+0x50]
	push edx
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x64]
	push eax
	push 0
	push edi
	push edx
	push 0
	push 0
	lea eax,[esp+0x3C]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x11C8]
	cmp esi,eax
	je Block156

 Block152:
	mov dword ptr [ebp+0x11C8],eax
	test eax,eax
	je Block154

 Block153:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block154:
	test esi,esi
	je Block156

 Block155:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block156:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block158

 Block157:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block158:
	mov esi,8
	mov byte ptr [esp+0x98],bl
	cmp word ptr [esp+0x60],si
	jne Block165

 Block159:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	test eax,eax
	je Block161

 Block160:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block161:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block162:
	mov byte ptr [esp+0x98],0xB
	cmp word ptr [esp+0x50],si
	jne Block166

 Block163:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block167

 Block164:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block167

 Block165:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x60]
	push edx
	call edi
	jmp Block162

 Block166:
	lea ecx,[esp+0x50]
	push ecx
	call edi

 Block167:
	lea edx,[esp+0x20]
	push edx
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x16
	mov ecx,0xD
	mov byte ptr [esp+0x98],bl
	mov word ptr [esp+0x30],cx
	mov dword ptr [esp+0x38],eax
	test eax,eax
	je Block169

 Block168:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block169:
	mov esi,dword ptr [ebp+0x11C8]
	mov byte ptr [esp+0x98],0x17
	test esi,esi
	jne Block171

 Block170:
	push 0x80004003
	call _com_issue_error

 Block171:
	mov edx,dword ptr [esp+0x30]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block173

 Block172:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block173:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x98],bl
	jne Block176

 Block174:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block177

 Block175:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block177

 Block176:
	lea edx,[esp+0x30]
	push edx
	call edi

 Block177:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x98],0xB
	test eax,eax
	je Block179

 Block178:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block179:
	mov esi,dword ptr [ebp+0x11C8]
	test esi,esi
	jne Block181

 Block180:
	push 0x80004003
	call _com_issue_error

 Block181:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 1
	push esi
	call ecx
	test eax,eax
	jge Block183

 Block182:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block183:
	mov esi,dword ptr [ebp+0x11C8]
	test esi,esi
	jne Block185

 Block184:
	push 0x80004003
	call _com_issue_error

 Block185:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block187

 Block186:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block187:
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x18
	mov edx,0xD
	mov byte ptr [esp+0x98],bl
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],eax
	test eax,eax
	je Block189

 Block188:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block189:
	mov esi,dword ptr [ebp+0x11C8]
	mov byte ptr [esp+0x98],0x19
	test esi,esi
	jne Block191

 Block190:
	push 0x80004003
	call _com_issue_error

 Block191:
	mov edx,dword ptr [esp+0x30]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block193

 Block192:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block193:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x98],bl
	jne Block196

 Block194:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block197

 Block195:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block197

 Block196:
	lea edx,[esp+0x30]
	push edx
	call edi

 Block197:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x98],0xB
	test eax,eax
	je Block199

 Block198:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block199:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x50]
	push eax
	call esi
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block201

 Block200:
	push eax
	call _com_issue_error

 Block201:
	lea edx,[esp+0x60]
	mov bl,0x1A
	push edx
	mov byte ptr [esp+0x9C],bl
	call esi
	lea eax,[esp+0x60]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block203

 Block202:
	push eax
	call _com_issue_error

 Block203:
	mov esi,dword ptr [ebp+0x78]
	mov byte ptr [esp+0x98],0x1B
	test esi,esi
	jne Block205

 Block204:
	push 0x80004003
	call _com_issue_error

 Block205:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x1C]
	push edx
	push esi
	mov dword ptr [esp+0x24],0
	call eax
	test eax,eax
	jge Block207

 Block206:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block207:
	mov esi,dword ptr [ebp+0x78]
	mov edi,dword ptr [esp+0x1C]
	test esi,esi
	jne Block209

 Block208:
	push 0x80004003
	call _com_issue_error

 Block209:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],0
	call eax
	test eax,eax
	jge Block211

 Block210:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block211:
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block213

 Block212:
	push 0x80004003
	call _com_issue_error

 Block213:
	lea edx,[esp+0x50]
	push edx
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0x64]
	push eax
	push 0
	push edi
	push edx
	push 0
	push 0
	lea eax,[esp+0x3C]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebp+0x11CC]
	cmp esi,eax
	je Block218

 Block214:
	mov dword ptr [ebp+0x11CC],eax
	test eax,eax
	je Block216

 Block215:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block216:
	test esi,esi
	je Block218

 Block217:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block218:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block220

 Block219:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block220:
	mov esi,8
	mov byte ptr [esp+0x98],bl
	cmp word ptr [esp+0x60],si
	jne Block227

 Block221:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	test eax,eax
	je Block223

 Block222:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block223:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block224:
	mov byte ptr [esp+0x98],0xB
	cmp word ptr [esp+0x50],si
	jne Block228

 Block225:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block229

 Block226:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block229

 Block227:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x60]
	push edx
	call edi
	jmp Block224

 Block228:
	lea ecx,[esp+0x50]
	push ecx
	call edi

 Block229:
	lea edx,[esp+0x20]
	push edx
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x1C
	mov ecx,0xD
	mov byte ptr [esp+0x98],bl
	mov word ptr [esp+0x30],cx
	mov dword ptr [esp+0x38],eax
	test eax,eax
	je Block231

 Block230:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block231:
	mov esi,dword ptr [ebp+0x11CC]
	mov byte ptr [esp+0x98],0x1D
	test esi,esi
	jne Block233

 Block232:
	push 0x80004003
	call _com_issue_error

 Block233:
	mov edx,dword ptr [esp+0x30]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block235

 Block234:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block235:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x98],bl
	jne Block238

 Block236:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block239

 Block237:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block239

 Block238:
	lea edx,[esp+0x30]
	push edx
	call edi

 Block239:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x98],0xB
	test eax,eax
	je Block241

 Block240:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block241:
	mov esi,dword ptr [ebp+0x11CC]
	test esi,esi
	jne Block243

 Block242:
	push 0x80004003
	call _com_issue_error

 Block243:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 1
	push esi
	call ecx
	test eax,eax
	jge Block245

 Block244:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block245:
	mov esi,dword ptr [ebp+0x11CC]
	test esi,esi
	jne Block247

 Block246:
	push 0x80004003
	call _com_issue_error

 Block247:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block249

 Block248:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block249:
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,ebp
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x1E
	mov edx,0xD
	mov byte ptr [esp+0x98],bl
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],eax
	test eax,eax
	je Block251

 Block250:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block251:
	mov esi,dword ptr [ebp+0x11CC]
	mov byte ptr [esp+0x98],0x1F
	test esi,esi
	jne Block253

 Block252:
	push 0x80004003
	call _com_issue_error

 Block253:
	mov edx,dword ptr [esp+0x30]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x48]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block255

 Block254:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block255:
	mov esi,8
	mov byte ptr [esp+0x98],bl
	cmp word ptr [esp+0x30],si
	jne Block258

 Block256:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block259

 Block257:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block259

 Block258:
	lea edx,[esp+0x30]
	push edx
	call edi

 Block259:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x98],0xB
	test eax,eax
	je Block261

 Block260:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block261:
	mov ecx,ebp
	call CUIKeyConfig::ResetPaletteItems
	push 0
	call CWnd::Draw
	mov eax,3
	mov word ptr [esp+0x60],ax
	mov dword ptr [esp+0x68],0xFFFFFFFE
	mov ecx,dword ptr [ebp+0x11CC]
	mov byte ptr [esp+0x98],0x20
	test ecx,ecx
	jne Block263

 Block262:
	push 0x80004003
	call _com_issue_error

 Block263:
	lea edx,[esp+0x60]
	push edx
	lea eax,[esp+0x24]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block265

 Block264:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block265:
	mov byte ptr [esp+0x98],0xB
	cmp word ptr [esp+0x60],si
	jne Block268

 Block266:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block269

 Block267:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block269

 Block268:
	lea ecx,[esp+0x60]
	push ecx
	call edi

 Block269:
	mov ecx,ebp
	call CUIKeyConfig::DrawFuncKeyMapped
	mov ecx,ebp
	call CUIKeyConfig::DrawKeys
	mov ecx,ebp
	call CUIKeyConfig::DrawKeyPalette
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	add ecx,0x40A0
	call ZArray<CUIWnd *>::InsertBefore
	mov dword ptr [eax],ebp
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x98],0
	test eax,eax
	je Block271

 Block270:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block271:
	mov ecx,dword ptr [esp+0x90]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x88
	ret 4
}
}
