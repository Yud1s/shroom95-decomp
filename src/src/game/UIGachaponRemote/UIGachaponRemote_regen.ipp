#include "regen.hpp"
// UIGachaponRemote.ipp
#include "UIGachaponRemote.hpp"

// CUIGachaponRemote::Draw
__SUB_CLASS_THIS(003BD260, __thiscall, 60720,  CUIGachaponRemote, void, const tagRECT*) {
__asm {

 Block0:
	jmp  CWnd::Draw
}
}
// CUIGachaponRemote::OnButtonClicked
__SUB_CLASS_THIS(003BD290, __thiscall, 60721,  CUIGachaponRemote, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	lea edx,[eax-0x7D0]
	push esi
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp edx,0xA
	ja Block30

 Block1:
	cmp EDX, 0
je Block2
cmp EDX, 1
je Block3
cmp EDX, 2
je Block7
cmp EDX, 3
je Block10
cmp EDX, 4
je Block12
cmp EDX, 5
je Block15
cmp EDX, 6
je Block17
cmp EDX, 7
je Block20
cmp EDX, 8
je Block22
cmp EDX, 9
je Block25
cmp EDX, 10
je Block27


 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 2
	mov ecx,esi
	call edx
	pop esi
	ret 4

 Block3:
	test ecx,ecx
	je Block6

 Block4:
	push 0

 Block5:
	mov eax,dword ptr [esi+0xEC]
	push eax
	call CWvsContext::SendUseGachaponRemoteRequest

 Block6:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 1
	mov ecx,esi
	call eax
	pop esi
	ret 4

 Block7:
	test ecx,ecx
	je Block9

 Block8:
	mov edx,dword ptr [esi+0xEC]
	push 1
	push edx
	call CWvsContext::SendUseGachaponRemoteRequest

 Block9:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 1
	mov ecx,esi
	call edx
	pop esi
	ret 4

 Block10:
	test ecx,ecx
	je Block6

 Block11:
	push 2
	jmp Block5

 Block12:
	test ecx,ecx
	je Block14

 Block13:
	mov edx,dword ptr [esi+0xEC]
	push 3
	push edx
	call CWvsContext::SendUseGachaponRemoteRequest

 Block14:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 1
	mov ecx,esi
	call edx
	pop esi
	ret 4

 Block15:
	test ecx,ecx
	je Block6

 Block16:
	push 4
	jmp Block5

 Block17:
	test ecx,ecx
	je Block19

 Block18:
	mov edx,dword ptr [esi+0xEC]
	push 5
	push edx
	call CWvsContext::SendUseGachaponRemoteRequest

 Block19:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 1
	mov ecx,esi
	call edx
	pop esi
	ret 4

 Block20:
	test ecx,ecx
	je Block6

 Block21:
	push 6
	jmp Block5

 Block22:
	test ecx,ecx
	je Block24

 Block23:
	mov edx,dword ptr [esi+0xEC]
	push 7
	push edx
	call CWvsContext::SendUseGachaponRemoteRequest

 Block24:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 1
	mov ecx,esi
	call edx
	pop esi
	ret 4

 Block25:
	test ecx,ecx
	je Block6

 Block26:
	push 8
	jmp Block5

 Block27:
	test ecx,ecx
	je Block29

 Block28:
	mov edx,dword ptr [esi+0xEC]
	push 9
	push edx
	call CWvsContext::SendUseGachaponRemoteRequest

 Block29:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 1
	mov ecx,esi
	call edx
	pop esi
	ret 4

 Block30:
	cmp eax,1
	je Block9

 Block31:
	cmp eax,2
	je Block2

 Block32:
	cmp eax,8
	jne Block34

 Block33:
	push eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	mov ecx,esi
	call edx

 Block34:
	pop esi
	ret 4
}
}
// CUIGachaponRemote::OnChildNotify
__SUB_CLASS_THIS(003BD270, __thiscall, 60719,  CUIGachaponRemote, void, uint32_t, uint32_t, uint32_t) {
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
// CUIGachaponRemote::~CUIGachaponRemote
_SUB_EXCEPTION_HANDLER(3BD560)
__SUB_CLASS_THIS0(003BD560, __thiscall, 60717,  CUIGachaponRemote, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BD560
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIGachaponRemote::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIGachaponRemote::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIGachaponRemote::`vftable'{for `ZRefCounted'}
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 0xA
	push 8
	lea eax,[esi+0x9C]
	push eax
	mov dword ptr [esp+0x28],1
	call __eh_vector_dtor_iterator
	cmp dword ptr [esi+0x98],0
	lea edi,[esi+0x94]
	mov byte ptr [esp+0x18],0
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	int 3// TODO: 	mov dword ptr [esi],offset CUniqueModeless::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUniqueModeless::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUniqueModeless::`vftable'{for `ZRefCounted'}
	mov ecx,esi
	mov dword ptr [esp+0x18],0xFFFFFFFF
	mov dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],0
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
// CUIGachaponRemote::OnCreate
_SUB_EXCEPTION_HANDLER(3BD640)
__SUB_CLASS_THIS(003BD640, __thiscall, 60718,  CUIGachaponRemote, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BD640
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
	lea eax,[esp+0x14]
	push 0x1A71
	push eax
	mov dword ptr [esp+0x3C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block15

 Block6:
	add eax,8
	cmp eax,ebx
	je Block15

 Block7:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block9

 Block8:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block9:
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0x98]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 7
	push 0xF7
	push 0x7D0
	push esi
	call edx
	mov eax,dword ptr [esi+0x98]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	lea eax,[esp+0x14]
	push 0x132E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	push 0xFFFFFFFF
	push offset _S_0__1
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString16::AssignCharStr
	mov edi,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],4
	cmp edi,ebx
	je Block16

 Block14:
	mov eax,dword ptr [edi-4]
	shr eax,1
	jmp Block17

 Block15:
	xor edi,edi
	jmp Block9

 Block16:
	xor eax,eax

 Block17:
	push eax
	push edi
	lea ecx,[esp+0x30]
	call ZXString16::_Cat
	mov byte ptr [esp+0x34],bl
	cmp edi,ebx
	je Block19

 Block18:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block19:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],5
	cmp eax,ebx
	je Block21

 Block20:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block22

 Block21:
	xor eax,eax

 Block22:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block32

 Block23:
	add eax,8
	cmp eax,ebx
	je Block32

 Block24:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block26

 Block25:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block26:
	mov eax,dword ptr [esi+0xA0]
	mov dword ptr [esi+0xA0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block28

 Block27:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block28:
	mov ecx,dword ptr [esi+0xA0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0x82
	push 0x1A
	push 0x7D1
	push esi
	call edx
	lea eax,[esp+0x14]
	push 0x132E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],6
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block30:
	push 0xFFFFFFFF
	push offset _S_1__1
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString16::AssignCharStr
	mov edi,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],7
	cmp edi,ebx
	je Block33

 Block31:
	mov eax,dword ptr [edi-4]
	shr eax,1
	jmp Block34

 Block32:
	xor edi,edi
	jmp Block26

 Block33:
	xor eax,eax

 Block34:
	push eax
	push edi
	lea ecx,[esp+0x30]
	call ZXString16::_Cat
	mov byte ptr [esp+0x34],bl
	cmp edi,ebx
	je Block36

 Block35:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block36:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],8
	cmp eax,ebx
	je Block38

 Block37:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block39

 Block38:
	xor eax,eax

 Block39:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block49

 Block40:
	add eax,8
	cmp eax,ebx
	je Block49

 Block41:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block43

 Block42:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block43:
	mov eax,dword ptr [esi+0xA8]
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block45

 Block44:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block45:
	mov ecx,dword ptr [esi+0xA8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0x82
	push 0x8B
	push 0x7D2
	push esi
	call edx
	lea eax,[esp+0x14]
	push 0x132E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],9
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block47

 Block46:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block47:
	push 0xFFFFFFFF
	push offset _S_2__1
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString16::AssignCharStr
	mov edi,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],0xA
	cmp edi,ebx
	je Block50

 Block48:
	mov eax,dword ptr [edi-4]
	shr eax,1
	jmp Block51

 Block49:
	xor edi,edi
	jmp Block43

 Block50:
	xor eax,eax

 Block51:
	push eax
	push edi
	lea ecx,[esp+0x30]
	call ZXString16::_Cat
	mov byte ptr [esp+0x34],bl
	cmp edi,ebx
	je Block53

 Block52:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block53:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],0xB
	cmp eax,ebx
	je Block55

 Block54:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block56

 Block55:
	xor eax,eax

 Block56:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block66

 Block57:
	add eax,8
	cmp eax,ebx
	je Block66

 Block58:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block60

 Block59:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block60:
	mov eax,dword ptr [esi+0xB0]
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block62

 Block61:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block62:
	mov ecx,dword ptr [esi+0xB0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0x97
	push 0x1A
	push 0x7D3
	push esi
	call edx
	lea eax,[esp+0x14]
	push 0x132E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],0xC
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block64

 Block63:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block64:
	push 0xFFFFFFFF
	push offset _S_3
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString16::AssignCharStr
	mov edi,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],0xD
	cmp edi,ebx
	je Block67

 Block65:
	mov eax,dword ptr [edi-4]
	shr eax,1
	jmp Block68

 Block66:
	xor edi,edi
	jmp Block60

 Block67:
	xor eax,eax

 Block68:
	push eax
	push edi
	lea ecx,[esp+0x30]
	call ZXString16::_Cat
	mov byte ptr [esp+0x34],bl
	cmp edi,ebx
	je Block70

 Block69:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block70:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],0xE
	cmp eax,ebx
	je Block72

 Block71:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block73

 Block72:
	xor eax,eax

 Block73:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block83

 Block74:
	add eax,8
	cmp eax,ebx
	je Block83

 Block75:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block77

 Block76:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block77:
	mov eax,dword ptr [esi+0xB8]
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block79

 Block78:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block79:
	mov ecx,dword ptr [esi+0xB8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0x97
	push 0x8B
	push 0x7D4
	push esi
	call edx
	lea eax,[esp+0x14]
	push 0x132E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],0xF
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block81

 Block80:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block81:
	push 0xFFFFFFFF
	push offset _S_4
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString16::AssignCharStr
	mov edi,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],0x10
	cmp edi,ebx
	je Block84

 Block82:
	mov eax,dword ptr [edi-4]
	shr eax,1
	jmp Block85

 Block83:
	xor edi,edi
	jmp Block77

 Block84:
	xor eax,eax

 Block85:
	push eax
	push edi
	lea ecx,[esp+0x30]
	call ZXString16::_Cat
	mov byte ptr [esp+0x34],bl
	cmp edi,ebx
	je Block87

 Block86:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block87:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],0x11
	cmp eax,ebx
	je Block89

 Block88:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block90

 Block89:
	xor eax,eax

 Block90:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block100

 Block91:
	add eax,8
	cmp eax,ebx
	je Block100

 Block92:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block94

 Block93:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block94:
	mov eax,dword ptr [esi+0xC0]
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block96

 Block95:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block96:
	mov ecx,dword ptr [esi+0xC0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0xAC
	push 0x8B
	push 0x7D5
	push esi
	call edx
	lea eax,[esp+0x14]
	push 0x132E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],0x12
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block98

 Block97:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block98:
	push 0xFFFFFFFF
	push offset _S_5
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString16::AssignCharStr
	mov edi,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],0x13
	cmp edi,ebx
	je Block101

 Block99:
	mov eax,dword ptr [edi-4]
	shr eax,1
	jmp Block102

 Block100:
	xor edi,edi
	jmp Block94

 Block101:
	xor eax,eax

 Block102:
	push eax
	push edi
	lea ecx,[esp+0x30]
	call ZXString16::_Cat
	mov byte ptr [esp+0x34],bl
	cmp edi,ebx
	je Block104

 Block103:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block104:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],0x14
	cmp eax,ebx
	je Block106

 Block105:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block107

 Block106:
	xor eax,eax

 Block107:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block117

 Block108:
	add eax,8
	cmp eax,ebx
	je Block117

 Block109:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block111

 Block110:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block111:
	mov eax,dword ptr [esi+0xC8]
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block113

 Block112:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block113:
	mov ecx,dword ptr [esi+0xC8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0xC1
	push 0x1A
	push 0x7D6
	push esi
	call edx
	lea eax,[esp+0x14]
	push 0x132E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],0x15
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block115

 Block114:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block115:
	push 0xFFFFFFFF
	push offset _S_6
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString16::AssignCharStr
	mov edi,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],0x16
	cmp edi,ebx
	je Block118

 Block116:
	mov eax,dword ptr [edi-4]
	shr eax,1
	jmp Block119

 Block117:
	xor edi,edi
	jmp Block111

 Block118:
	xor eax,eax

 Block119:
	push eax
	push edi
	lea ecx,[esp+0x30]
	call ZXString16::_Cat
	mov byte ptr [esp+0x34],bl
	cmp edi,ebx
	je Block121

 Block120:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block121:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],0x17
	cmp eax,ebx
	je Block123

 Block122:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block124

 Block123:
	xor eax,eax

 Block124:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block134

 Block125:
	add eax,8
	cmp eax,ebx
	je Block134

 Block126:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block128

 Block127:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block128:
	mov eax,dword ptr [esi+0xD0]
	mov dword ptr [esi+0xD0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block130

 Block129:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block130:
	mov ecx,dword ptr [esi+0xD0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0xD6
	push 0x1A
	push 0x7D7
	push esi
	call edx
	lea eax,[esp+0x14]
	push 0x132E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],0x18
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block132

 Block131:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block132:
	push 0xFFFFFFFF
	push offset _S_7
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString16::AssignCharStr
	mov edi,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],0x19
	cmp edi,ebx
	je Block135

 Block133:
	mov eax,dword ptr [edi-4]
	shr eax,1
	jmp Block136

 Block134:
	xor edi,edi
	jmp Block128

 Block135:
	xor eax,eax

 Block136:
	push eax
	push edi
	lea ecx,[esp+0x30]
	call ZXString16::_Cat
	mov byte ptr [esp+0x34],bl
	cmp edi,ebx
	je Block138

 Block137:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block138:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],0x1A
	cmp eax,ebx
	je Block140

 Block139:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block141

 Block140:
	xor eax,eax

 Block141:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block151

 Block142:
	add eax,8
	cmp eax,ebx
	je Block151

 Block143:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block145

 Block144:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block145:
	mov eax,dword ptr [esi+0xD8]
	mov dword ptr [esi+0xD8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block147

 Block146:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block147:
	mov ecx,dword ptr [esi+0xD8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0xD6
	push 0x8B
	push 0x7D8
	push esi
	call edx
	lea eax,[esp+0x14]
	push 0x132E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],0x1B
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block149

 Block148:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block149:
	push 0xFFFFFFFF
	push offset _S_8
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString16::AssignCharStr
	mov edi,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],0x1C
	cmp edi,ebx
	je Block152

 Block150:
	mov eax,dword ptr [edi-4]
	shr eax,1
	jmp Block153

 Block151:
	xor edi,edi
	jmp Block145

 Block152:
	xor eax,eax

 Block153:
	push eax
	push edi
	lea ecx,[esp+0x30]
	call ZXString16::_Cat
	mov byte ptr [esp+0x34],bl
	cmp edi,ebx
	je Block155

 Block154:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block155:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],0x1D
	cmp eax,ebx
	je Block157

 Block156:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block158

 Block157:
	xor eax,eax

 Block158:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block168

 Block159:
	add eax,8
	cmp eax,ebx
	je Block168

 Block160:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block162

 Block161:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block162:
	mov eax,dword ptr [esi+0xE0]
	mov dword ptr [esi+0xE0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block164

 Block163:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block164:
	mov ecx,dword ptr [esi+0xE0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0xC1
	push 0x8B
	push 0x7D9
	push esi
	call edx
	lea eax,[esp+0x14]
	push 0x132E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0x38],0x1E
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block166

 Block165:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block166:
	push 0xFFFFFFFF
	push offset _S_9
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x1C],ebx
	call ZXString16::AssignCharStr
	mov edi,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],0x1F
	cmp edi,ebx
	je Block169

 Block167:
	mov eax,dword ptr [edi-4]
	shr eax,1
	jmp Block170

 Block168:
	xor edi,edi
	jmp Block162

 Block169:
	xor eax,eax

 Block170:
	push eax
	push edi
	lea ecx,[esp+0x30]
	call ZXString16::_Cat
	mov byte ptr [esp+0x34],bl
	cmp edi,ebx
	je Block172

 Block171:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block172:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x34],0x20
	cmp eax,ebx
	je Block174

 Block173:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block175

 Block174:
	xor eax,eax

 Block175:
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block184

 Block176:
	add eax,8
	cmp eax,ebx
	je Block184

 Block177:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block179

 Block178:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block179:
	mov eax,dword ptr [esi+0xE8]
	mov dword ptr [esi+0xE8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block181

 Block180:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block181:
	mov ecx,dword ptr [esi+0xE8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0xAC
	push 0x1A
	push 0x7DA
	push esi
	call edx
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp eax,ebx
	je Block183

 Block182:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block183:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 4

 Block184:
	xor edi,edi
	jmp Block179
}
}
// CUIGachaponRemote::GetRTTI
__SUB_CLASS_THIS0(003BD510, __thiscall, 60724,  CUIGachaponRemote, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIGachaponRemote::ms_RTTI_CUIGachaponRemote
	ret
}
}
// CUIGachaponRemote::IsKindOf
__SUB_CLASS_THIS(003BD530, __thiscall, 60725,  CUIGachaponRemote, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIGachaponRemote::ms_RTTI_CUIGachaponRemote
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
// CUIGachaponRemote::CUIGachaponRemote
_SUB_EXCEPTION_HANDLER(3BD410)
__SUB_CLASS_THIS(003BD410, __thiscall, 60715,  CUIGachaponRemote, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BD410
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
	call CUniqueModeless::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CUIGachaponRemote::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIGachaponRemote::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIGachaponRemote::`vftable'{for `ZRefCounted'}
	mov dword ptr [esp+0x14],0
	mov dword ptr [esi+0x98],0
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 0xA
	push 8
	lea eax,[esi+0x9C]
	push eax
	mov byte ptr [esp+0x28],1
	call __eh_vector_ctor_iterator
	mov ecx,dword ptr [esp+0x1C]
	lea edx,[esp+0x1C]
	push 0x132D
	push edx
	mov byte ptr [esp+0x1C],2
	mov dword ptr [esi+0xEC],ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x24],3
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x14],2
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 4
}
}
// CUIGachaponRemote::OnDestroy
__SUB_CLASS_THIS0(003BD500, __thiscall, 60717,  CUIGachaponRemote, void) {
__asm {

 Block0:
	ret
}
}
