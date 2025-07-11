#include "regen.hpp"
// UIGuildBBS.ipp
#include "UIGuildBBS.hpp"

// CUIGuildBBS::MoveEmoticon
__SUB_CLASS_THIS(003C3030, __thiscall, 70344,  CUIGuildBBS, void, int32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x7DE
	jne Block3

 Block1:
	mov eax,dword ptr [ecx+0xB2C]
	test eax,eax
	jle Block9

 Block2:
	dec eax
	mov dword ptr [ecx+0xB2C],eax
	mov dword ptr [esp+4],0
	jmp  CWnd::InvalidateRect

 Block3:
	cmp eax,0x7DF
	jne Block9

 Block4:
	mov eax,dword ptr [ecx+0xC04]
	test eax,eax
	jne Block6

 Block5:
	xor edx,edx
	jmp Block7

 Block6:
	mov edx,dword ptr [eax-4]

 Block7:
	mov eax,dword ptr [ecx+0xB2C]
	add edx,2
	cmp eax,edx
	jae Block9

 Block8:
	inc eax
	mov dword ptr [ecx+0xB2C],eax

 Block9:
	mov dword ptr [esp+4],0
	jmp  CWnd::InvalidateRect
}
}
// CUIGuildBBS::LoadViewTextBox
_SUB_EXCEPTION_HANDLER(3C4C00)
__SUB_CLASS_THIS0(003C4C00, __thiscall, 70334,  CUIGuildBBS, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C4C00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xBC
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xD0]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esi+0xB28],ebx
	call CUIGuildBBS::DestroyPreviousControls
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	lea eax,[esp+0x14]
	push 0xEB9
	push eax
	mov dword ptr [esp+0xE0],ebx
	mov dword ptr [esp+0x24],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0xDC],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD8],bl
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
	mov byte ptr [esp+0xD8],2
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
	mov byte ptr [esp+0xD8],bl
	cmp eax,ebx
	je Block17

 Block6:
	add eax,8
	cmp eax,ebx
	je Block17

 Block7:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block9

 Block8:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block9:
	mov eax,dword ptr [esi+0xB40]
	mov dword ptr [esi+0xB40],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0xB40]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0x113
	push 0x194
	push 0x7D1
	push esi
	call edx
	mov eax,dword ptr [esi+0xB40]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	mov ecx,esi
	call CUIGuildBBS::IsGuildBBSAdmin
	test eax,eax
	jne Block13

 Block12:
	mov eax,dword ptr [esi+0xB40]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebx
	call edx

 Block13:
	lea eax,[esp+0x14]
	push 0xEBA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0xDC],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD8],bl
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block15:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD8],4
	cmp eax,ebx
	je Block18

 Block16:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block19

 Block17:
	xor edi,edi
	jmp Block9

 Block18:
	xor eax,eax

 Block19:
	mov byte ptr [esp+0xD8],bl
	cmp eax,ebx
	je Block29

 Block20:
	add eax,8
	cmp eax,ebx
	je Block29

 Block21:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block23

 Block22:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block23:
	mov eax,dword ptr [esi+0xB38]
	mov dword ptr [esi+0xB38],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block25

 Block24:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block25:
	mov ecx,dword ptr [esi+0xB38]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0x113
	push 0x21C
	push 0x7D0
	push esi
	call edx
	mov eax,dword ptr [esi+0xB38]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	lea eax,[esp+0x14]
	push 0xEBB
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0xDC],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD8],bl
	cmp eax,ebx
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block27:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD8],6
	cmp eax,ebx
	je Block30

 Block28:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block31

 Block29:
	xor edi,edi
	jmp Block23

 Block30:
	xor eax,eax

 Block31:
	mov byte ptr [esp+0xD8],bl
	cmp eax,ebx
	je Block45

 Block32:
	add eax,8
	cmp eax,ebx
	je Block45

 Block33:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block35

 Block34:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block35:
	mov eax,dword ptr [esi+0xB50]
	mov dword ptr [esi+0xB50],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block37

 Block36:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block37:
	mov ecx,dword ptr [esi+0xB50]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0x113
	push 0x25A
	push 0x7D3
	push esi
	call edx
	mov eax,dword ptr [esi+0xB50]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	mov edi,dword ptr [esi+0xB14]
	cmp edi,ebx
	je Block40

 Block38:
	mov ecx,esi
	call CUIGuildBBS::IsGuildBBSAdmin
	test eax,eax
	jne Block41

 Block39:
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [eax+0x20B4]
	cmp dword ptr [edi+0x10],eax
	je Block41

 Block40:
	mov eax,dword ptr [esi+0xB50]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax

 Block41:
	lea ecx,[esp+0x14]
	push 0xEBC
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0xDC],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD8],bl
	cmp eax,ebx
	je Block43

 Block42:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block43:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD8],8
	cmp eax,ebx
	je Block46

 Block44:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block47

 Block45:
	xor edi,edi
	jmp Block35

 Block46:
	xor eax,eax

 Block47:
	mov byte ptr [esp+0xD8],bl
	cmp eax,ebx
	je Block61

 Block48:
	add eax,8
	cmp eax,ebx
	je Block61

 Block49:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block51

 Block50:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block51:
	mov eax,dword ptr [esi+0xB48]
	mov dword ptr [esi+0xB48],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block53

 Block52:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block53:
	mov ecx,dword ptr [esi+0xB48]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push 1
	push 0x113
	push 0x298
	push 0x7D2
	push esi
	call eax
	mov eax,dword ptr [esi+0xB48]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 1
	call eax
	mov edi,dword ptr [esi+0xB14]
	cmp edi,ebx
	je Block56

 Block54:
	mov ecx,esi
	call CUIGuildBBS::IsGuildBBSAdmin
	test eax,eax
	jne Block57

 Block55:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ecx+0x20B4]
	cmp dword ptr [edi+0x10],eax
	je Block57

 Block56:
	mov eax,dword ptr [esi+0xB48]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax

 Block57:
	lea ecx,[esp+0x14]
	push 0xEBD
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0xDC],9
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD8],bl
	cmp eax,ebx
	je Block59

 Block58:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block59:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD8],0xA
	cmp eax,ebx
	je Block62

 Block60:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block63

 Block61:
	xor edi,edi
	jmp Block51

 Block62:
	xor eax,eax

 Block63:
	mov byte ptr [esp+0xD8],bl
	cmp eax,ebx
	je Block75

 Block64:
	add eax,8
	cmp eax,ebx
	je Block75

 Block65:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block67

 Block66:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block67:
	mov eax,dword ptr [esi+0xB68]
	mov dword ptr [esi+0xB68],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block69

 Block68:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block69:
	mov ecx,dword ptr [esi+0xB68]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push 1
	push 0x1C9
	push 0x2C0
	push 0x7D8
	push esi
	call eax
	mov eax,dword ptr [esi+0xB68]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push 1
	call eax
	cmp dword ptr [esi+0xB14],ebx
	jne Block71

 Block70:
	mov eax,dword ptr [esi+0xB68]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push ebx
	call eax

 Block71:
	lea ecx,[esp+0x14]
	push 0xEBE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0xDC],0xB
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD8],bl
	cmp eax,ebx
	je Block73

 Block72:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block73:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD8],0xC
	cmp eax,ebx
	je Block76

 Block74:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block77

 Block75:
	xor edi,edi
	jmp Block67

 Block76:
	xor eax,eax

 Block77:
	mov byte ptr [esp+0xD8],bl
	cmp eax,ebx
	je Block87

 Block78:
	add eax,8
	cmp eax,ebx
	je Block87

 Block79:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block81

 Block80:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block81:
	mov eax,dword ptr [esi+0xB70]
	mov dword ptr [esi+0xB70],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block83

 Block82:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block83:
	mov ecx,dword ptr [esi+0xB70]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push 1
	push 0x14B
	push 0x2B2
	push 0x7D9
	push esi
	call eax
	mov eax,dword ptr [esi+0xB70]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push ebx
	call eax
	lea ecx,[esp+0x14]
	push 0xEBE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0xDC],0xD
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD8],bl
	cmp eax,ebx
	je Block85

 Block84:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block85:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD8],0xE
	cmp eax,ebx
	je Block88

 Block86:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block89

 Block87:
	xor edi,edi
	jmp Block81

 Block88:
	xor eax,eax

 Block89:
	mov byte ptr [esp+0xD8],bl
	cmp eax,ebx
	je Block99

 Block90:
	add eax,8
	cmp eax,ebx
	je Block99

 Block91:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block93

 Block92:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block93:
	mov eax,dword ptr [esi+0xB78]
	mov dword ptr [esi+0xB78],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block95

 Block94:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block95:
	mov ecx,dword ptr [esi+0xB78]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push 1
	push 0x16A
	push 0x2B2
	push 0x7DA
	push esi
	call eax
	mov eax,dword ptr [esi+0xB78]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push ebx
	call eax
	lea ecx,[esp+0x14]
	push 0xEBE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0xDC],0xF
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD8],bl
	cmp eax,ebx
	je Block97

 Block96:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block97:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD8],0x10
	cmp eax,ebx
	je Block100

 Block98:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block101

 Block99:
	xor edi,edi
	jmp Block93

 Block100:
	xor eax,eax

 Block101:
	mov byte ptr [esp+0xD8],bl
	cmp eax,ebx
	je Block111

 Block102:
	add eax,8
	cmp eax,ebx
	je Block111

 Block103:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block105

 Block104:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block105:
	mov eax,dword ptr [esi+0xB80]
	mov dword ptr [esi+0xB80],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block107

 Block106:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block107:
	mov ecx,dword ptr [esi+0xB80]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push 1
	push 0x189
	push 0x2B2
	push 0x7DB
	push esi
	call eax
	mov eax,dword ptr [esi+0xB80]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push ebx
	call eax
	lea ecx,[esp+0x14]
	push 0xEBE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0xDC],0x11
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD8],bl
	cmp eax,ebx
	je Block109

 Block108:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block109:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD8],0x12
	cmp eax,ebx
	je Block112

 Block110:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block113

 Block111:
	xor edi,edi
	jmp Block105

 Block112:
	xor eax,eax

 Block113:
	mov byte ptr [esp+0xD8],bl
	cmp eax,ebx
	je Block129

 Block114:
	add eax,8
	cmp eax,ebx
	je Block129

 Block115:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block117

 Block116:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block117:
	mov eax,dword ptr [esi+0xB88]
	mov dword ptr [esi+0xB88],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block119

 Block118:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block119:
	mov ecx,dword ptr [esi+0xB88]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push 1
	push 0x1A8
	push 0x2B2
	push 0x7DC
	push esi
	call eax
	mov eax,dword ptr [esi+0xB88]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push ebx
	call eax
	mov ecx,esi
	call CUIGuildBBS::ShowDeleteCommentButtons
	mov eax,dword ptr [esi+0xB14]
	or ebp,0xFFFFFFFF
	cmp eax,ebx
	je Block150

 Block120:
	lea ecx,[esp+0x5C]
	call CCtrlMLEdit::CREATEPARAM::_ctor_default
	lea ecx,[esp+0x14]
	push 0x1A25
	push ecx
	mov byte ptr [esp+0xE0],0x13
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea edx,[esp+0x68]
	cmp edx,edi
	je Block125

 Block121:
	mov ecx,dword ptr [esp+0x68]
	cmp ecx,ebx
	je Block123

 Block122:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x68],ebx

 Block123:
	mov eax,dword ptr [edi]
	mov dword ptr [esp+0x68],eax
	cmp eax,ebx
	je Block125

 Block124:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block125:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	je Block127

 Block126:
	call _xbstr_t::Data_t::Release

 Block127:
	mov eax,dword ptr [esi+0xB14]
	add eax,0x20
	push eax
	lea ecx,[esp+0x60]
	mov dword ptr [esp+0x88],0x258
	mov dword ptr [esp+0x8C],0xF0
	mov dword ptr [esp+0x90],0xF
	mov dword ptr [esp+0x84],1
	call ZXString<char>::op_assign
	push 0xCC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD8],0x14
	cmp eax,ebx
	je Block130

 Block128:
	mov ecx,eax
	call CCtrlMLEdit::_ctor_default
	jmp Block131

 Block129:
	xor edi,edi
	jmp Block117

 Block130:
	xor eax,eax

 Block131:
	push eax
	lea ecx,[esi+0xBAC]
	mov byte ptr [esp+0xDC],0x13
	call ZRef<CCtrlMLEdit>::op_assign_ptr
	mov ecx,dword ptr [esi+0xBB0]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x5C]
	push edx
	push 0xB4
	push 0xFA
	push 0x53
	push 0x1A8
	push 0x7E1
	push esi
	call eax
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD8],0x15
	cmp eax,ebx
	je Block133

 Block132:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block134

 Block133:
	xor eax,eax

 Block134:
	push eax
	lea ecx,[esi+0xBC4]
	mov byte ptr [esp+0xDC],0x13
	call ZRef<CCtrlScrollBar>::op_assign_ptr
	mov ecx,dword ptr [esi+0xBC8]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push ebx
	push 0xBE
	push 0x4E
	push 0x2C0
	push 3
	push 1
	push 0x7E4
	push esi
	call eax
	mov eax,dword ptr [esi+0xBC8]
	sub esp,8
	mov dword ptr [eax+0x34],0x12C
	mov eax,dword ptr [esi+0xBC8]
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx+4],eax
	cmp eax,ebx
	je Block136

 Block135:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block136:
	mov ecx,dword ptr [esi+0xBB0]
	call CCtrlMLEdit::SetScrollbar
	mov ecx,dword ptr [esi+0xBB0]
	call CCtrlMLEdit::UpdateScrollbar
	lea ecx,[esp+0x94]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea ecx,[esp+0x14]
	push 0x1A25
	push ecx
	mov byte ptr [esp+0xE0],0x16
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea edx,[esp+0xA8]
	cmp edx,edi
	je Block141

 Block137:
	mov ecx,dword ptr [esp+0xA8]
	cmp ecx,ebx
	je Block139

 Block138:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0xA8],ebx

 Block139:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0xA8],edi
	cmp edi,ebx
	je Block141

 Block140:
	add edi,8
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]

 Block141:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	je Block143

 Block142:
	call _xbstr_t::Data_t::Release

 Block143:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0xB4],ebp
	mov dword ptr [esp+0xC8],0x19
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD8],0x17
	cmp eax,ebx
	je Block145

 Block144:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block146

 Block145:
	xor eax,eax

 Block146:
	push eax
	lea ecx,[esi+0xBB4]
	mov byte ptr [esp+0xDC],0x16
	call ZRef<CCtrlEdit>::op_assign_ptr
	mov ecx,dword ptr [esi+0xBB8]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x94]
	push edx
	push 0x10
	push 0x100
	push 0x1CB
	push 0x1A8
	push 0x7E2
	push esi
	call eax
	lea ecx,[esp+0x94]
	mov byte ptr [esp+0xD8],0x13
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0x68]
	mov byte ptr [esp+0xD8],bl
	cmp ecx,ebx
	je Block148

 Block147:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x68],ebx

 Block148:
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebx
	je Block150

 Block149:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block150:
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
	jge Block152

 Block151:
	push eax
	call _com_issue_error

 Block152:
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0xDC],0x18
	call edi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block154

 Block153:
	push eax
	call _com_issue_error

 Block154:
	push ebx
	push ebx
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x48]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0xEBF
	push ecx
	mov byte ptr [esp+0xF4],0x19
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xEC],0x1A
	cmp dword ptr [_D_G_RM],ebx
	jne Block156

 Block155:
	push 0x80004003
	call _com_issue_error

 Block156:
	lea edx,[esp+0x60]
	mov byte ptr [esp+0xEC],0x19
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xE0],0x1B
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xBD4]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block159

 Block157:
	cmp eax,0x80004002
	je Block159

 Block158:
	push eax
	call _com_issue_error

 Block159:
	cmp word ptr [esp+0x4C],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0xD8],0x19
	jne Block162

 Block160:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebx
	je Block163

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block162:
	lea ecx,[esp+0x4C]
	push ecx
	call edi

 Block163:
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xD8],0x18
	jne Block166

 Block164:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebx
	je Block167

 Block165:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block167

 Block166:
	lea eax,[esp+0x3C]
	push eax
	call edi

 Block167:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xD8],bl
	jne Block170

 Block168:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebx
	je Block171

 Block169:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block171

 Block170:
	lea edx,[esp+0x2C]
	push edx
	call edi

 Block171:
	push ebx
	mov ecx,esi
	call CWnd::InvalidateRect
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0xD8],ebp
	cmp eax,ebx
	je Block173

 Block172:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block173:
	mov ecx,dword ptr [esp+0xD0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC8
	ret
}
}
// CUIGuildBBS::OnRegister
_SUB_EXCEPTION_HANDLER(3C4250)
__SUB_CLASS_THIS(003C4250, __thiscall, 70343,  CUIGuildBBS, void, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C4250
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
	mov ecx,dword ptr [esi+0xBA8]
	lea eax,[esp+0x18]
	push eax
	call CCtrlEdit::GetText
	mov ecx,dword ptr [esi+0xBB0]
	lea edx,[esp+0x14]
	xor ebx,ebx
	push edx
	mov dword ptr [esp+0x38],ebx
	call CCtrlMLEdit::GetText
	mov edi,dword ptr [esp+0x18]
	mov byte ptr [esp+0x34],1
	cmp edi,ebx
	je Block2

 Block1:
	cmp byte ptr [edi],bl
	jne Block6

 Block2:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x50],esp
	push 0x1A5D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x28]
	add esp,0x14
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	cmp edi,ebx
	je Block24

 Block5:
	add edi,0xFFFFFFF4
	push edi
	jmp Block23

 Block6:
	mov ebp,dword ptr [esp+0x14]
	cmp ebp,ebx
	je Block8

 Block7:
	cmp byte ptr [ebp],bl
	jne Block11

 Block8:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x50],esp
	push 0xEB1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov byte ptr [esp+0x34],bl
	cmp ebp,ebx
	je Block10

 Block9:
	add ebp,0xFFFFFFF4
	push ebp
	call ZXString<char>::_Release
	add esp,4

 Block10:
	add edi,0xFFFFFFF4
	mov dword ptr [esp+0x34],0xFFFFFFFF
	push edi
	jmp Block23

 Block11:
	push 1
	push ebx
	push 1
	push 0x400
	lea ecx,[esp+0x28]
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x1C]
	mov edi,eax
	call ZXString<char>::ReleaseBuffer
	cmp edi,ebx
	jne Block13

 Block12:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x50],esp
	push 0x11D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add ebp,0xFFFFFFF4
	push ebp
	mov byte ptr [esp+0x4C],bl
	call ZXString<char>::_Release
	add esp,0x18
	mov dword ptr [esp+0x34],0xFFFFFFFF
	jmp Block21

 Block13:
	push 1
	push ebx
	push 1
	push 0x400
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	or ebp,0xFFFFFFFF
	push ebp
	lea ecx,[esp+0x18]
	mov edi,eax
	call ZXString<char>::ReleaseBuffer
	cmp edi,ebx
	jne Block15

 Block14:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x50],esp
	push 0x11D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block18

 Block15:
	push 0xB3
	lea ecx,[esp+0x20]
	call COutPacket::_ctor_1
	push ebx
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x38],2
	call COutPacket::Encode1
	mov edi,dword ptr [esp+0x3C]
	push edi
	lea ecx,[esp+0x20]
	call COutPacket::Encode1
	cmp edi,ebx
	je Block17

 Block16:
	mov eax,dword ptr [esi+0xB14]
	mov ecx,dword ptr [eax+0xC]
	push ecx
	lea ecx,[esp+0x20]
	call COutPacket::Encode4

 Block17:
	mov edx,dword ptr [esp+0x40]
	push edx
	lea ecx,[esp+0x20]
	call COutPacket::Encode1
	push ecx
	mov ecx,esp
	lea eax,[esp+0x1C]
	mov dword ptr [esp+0x40],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x20]
	call COutPacket::EncodeStr
	push ecx
	mov ecx,esp
	lea edx,[esp+0x18]
	mov dword ptr [esp+0x40],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	lea ecx,[esp+0x20]
	call COutPacket::EncodeStr
	mov eax,dword ptr [esi+0xB30]
	push eax
	lea ecx,[esp+0x20]
	call COutPacket::Encode4
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	mov ecx,esi
	mov dword ptr [esi+0xB18],ebx
	call CUIGuildBBS::SendLoadListRequest
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x34],1
	call ZArray<unsigned char>::RemoveAll

 Block18:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x34],bl
	cmp eax,ebx
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov dword ptr [esp+0x34],ebp

 Block21:
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebx
	je Block24

 Block22:
	add eax,0xFFFFFFF4
	push eax

 Block23:
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 8
}
}
// CUIGuildBBS::OnEntryNotFound
__SUB_CLASS_THIS0(003C6970, __thiscall, 70334,  CUIGuildBBS, void) {
__asm {

 Block0:
	push ecx
	push esi
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0xEC7
	push eax
	mov esi,ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esi+0xB14]
	add esp,0x14
	test eax,eax
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov ecx,dword ptr [esi+0xB14]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0xB14]
	test ecx,ecx
	je Block4

 Block3:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block4:
	mov dword ptr [esi+0xB14],0

 Block5:
	mov ecx,esi
	pop esi
	add esp,4
	jmp  CUIGuildBBS::LoadViewTextBox
}
}
// CUIGuildBBS::OnButtonClicked
__SUB_CLASS_THIS(003C80A0, __thiscall, 70339,  CUIGuildBBS, void, uint32_t) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	lea eax,[edi-0x7D0]
	mov esi,ecx
	cmp eax,0xF
	ja Block18

 Block1:
	cmp EAX, 0
je Block2
cmp EAX, 1
je Block9
cmp EAX, 2
je Block4
cmp EAX, 3
je Block5
cmp EAX, 4
je Block3
cmp EAX, 5
je Block6
cmp EAX, 6
je Block7
cmp EAX, 7
je Block8
cmp EAX, 8
je Block10
cmp EAX, 9
je Block11
cmp EAX, 10
je Block12
cmp EAX, 11
je Block13
cmp EAX, 12
je Block14
cmp EAX, 13
je Block15
cmp EAX, 14
je Block16
cmp EAX, 15
je Block17


 Block2:
	push 0
	push 0
	call CUIGuildBBS::OnWrite
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4

 Block3:
	push 0
	push 0
	call CUIGuildBBS::OnRegister
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4

 Block4:
	call CUIGuildBBS::OnDelete
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4

 Block5:
	push 0
	push 1
	call CUIGuildBBS::OnWrite
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4

 Block6:
	push 0
	push 1
	call CUIGuildBBS::OnRegister
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4

 Block7:
	push 1
	push 0
	call CUIGuildBBS::OnRegister
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4

 Block8:
	call CUIGuildBBS::OnCancel
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4

 Block9:
	push 1
	push 0
	call CUIGuildBBS::OnWrite
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4

 Block10:
	call CUIGuildBBS::OnComment
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4

 Block11:
	push 0
	call CUIGuildBBS::OnCommentDelete
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4

 Block12:
	push 1
	call CUIGuildBBS::OnCommentDelete
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4

 Block13:
	push 2
	call CUIGuildBBS::OnCommentDelete
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4

 Block14:
	push 3
	call CUIGuildBBS::OnCommentDelete
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4

 Block15:
	mov eax,dword ptr [esi+0xAD0]
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push eax
	call CWvsContext::UI_Close
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4

 Block16:
	push 0x7DE
	call CUIGuildBBS::MoveEmoticon
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4

 Block17:
	push 0x7DF
	call CUIGuildBBS::MoveEmoticon

 Block18:
	push edi
	mov ecx,esi
	call CUIWnd::OnButtonClicked
	pop edi
	pop esi
	ret 4
}
}
// CUIGuildBBS::ClearToolTip
__SUB_CLASS_THIS0(003C3EB0, __thiscall, 70341,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0x84
	jmp  CUIToolTip::ClearToolTip
}
}
// CUIGuildBBS::OnCancel
__SUB_CLASS_THIS0(003C6510, __thiscall, 70334,  CUIGuildBBS, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CUIGuildBBS::LoadViewTextBox
	mov ecx,esi
	pop esi
	jmp  CUIGuildBBS::SendViewEntryRequest
}
}
// CUIGuildBBS::ShowDeleteCommentButtons
_SUB_EXCEPTION_HANDLER(3C34B0)
__SUB_CLASS_THIS0(003C34B0, __thiscall, 70334,  CUIGuildBBS, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C34B0
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
	lea ebp,[esi+0xB70]
	mov edi,ebp
	mov ebx,4

 Block1:
	mov eax,dword ptr [edi]
	test eax,eax
	je Block3

 Block2:
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 0
	call edx

 Block3:
	add edi,8
	sub ebx,1
	jne Block1

 Block4:
	xor ecx,ecx
	mov ebx,1
	mov dword ptr [esp+0x20],ecx
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x18],ecx
	mov dword ptr [esp+0x1C],ecx
	mov edi,dword ptr [esi+0xB14]
	mov dword ptr [esp+0x2C],ecx
	cmp edi,ecx
	je Block10

 Block5:
	mov eax,dword ptr [edi+0x28]
	cmp eax,ecx
	je Block10

 Block6:
	cmp dword ptr [eax-4],ecx
	jbe Block10

 Block7:
	mov ecx,esi
	call CUIGuildBBS::IsGuildBBSAdmin
	test eax,eax
	jne Block9

 Block8:
	mov eax,dword ptr [esi+0xBC0]
	mov ecx,dword ptr [edi+0x28]
	mov eax,dword ptr [eax+0x38]
	mov eax,dword ptr [ecx+eax*8+4]
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,dword ptr [edx+0x20B4]
	cmp dword ptr [eax+0x10],ecx
	jne Block10

 Block9:
	mov eax,dword ptr [ebp]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push ebx
	call edx

 Block10:
	mov edi,dword ptr [esi+0xB14]
	test edi,edi
	je Block16

 Block11:
	mov eax,dword ptr [edi+0x28]
	test eax,eax
	je Block16

 Block12:
	cmp dword ptr [eax-4],ebx
	jbe Block16

 Block13:
	mov ecx,esi
	call CUIGuildBBS::IsGuildBBSAdmin
	test eax,eax
	jne Block15

 Block14:
	mov eax,dword ptr [esi+0xBC0]
	mov ecx,dword ptr [edi+0x28]
	mov eax,dword ptr [eax+0x38]
	mov eax,dword ptr [ecx+eax*8+0xC]
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,dword ptr [edx+0x20B4]
	cmp dword ptr [eax+0x10],ecx
	jne Block16

 Block15:
	mov eax,dword ptr [esi+0xB78]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push ebx
	call edx

 Block16:
	mov edi,dword ptr [esi+0xB14]
	test edi,edi
	je Block22

 Block17:
	mov eax,dword ptr [edi+0x28]
	test eax,eax
	je Block22

 Block18:
	cmp dword ptr [eax-4],2
	jbe Block22

 Block19:
	mov ecx,esi
	call CUIGuildBBS::IsGuildBBSAdmin
	test eax,eax
	jne Block21

 Block20:
	mov eax,dword ptr [esi+0xBC0]
	mov ecx,dword ptr [edi+0x28]
	mov eax,dword ptr [eax+0x38]
	mov eax,dword ptr [ecx+eax*8+0x14]
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,dword ptr [edx+0x20B4]
	cmp dword ptr [eax+0x10],ecx
	jne Block22

 Block21:
	mov eax,dword ptr [esi+0xB80]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push ebx
	call edx

 Block22:
	mov edi,dword ptr [esi+0xB14]
	test edi,edi
	je Block28

 Block23:
	mov eax,dword ptr [edi+0x28]
	test eax,eax
	je Block28

 Block24:
	cmp dword ptr [eax-4],3
	jbe Block28

 Block25:
	mov ecx,esi
	call CUIGuildBBS::IsGuildBBSAdmin
	test eax,eax
	jne Block27

 Block26:
	mov eax,dword ptr [esi+0xBC0]
	mov ecx,dword ptr [edi+0x28]
	mov eax,dword ptr [eax+0x38]
	mov eax,dword ptr [ecx+eax*8+0x1C]
	mov edx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ecx,dword ptr [edx+0x20B4]
	cmp dword ptr [eax+0x10],ecx
	jne Block28

 Block27:
	mov esi,dword ptr [esi+0xB88]
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x24]
	lea ecx,[esi+4]
	push ebx
	call edx

 Block28:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret
}
}
// CUIGuildBBS::OnViewEntryResult
_SUB_EXCEPTION_HANDLER(3C6630)
__SUB_CLASS_THIS(003C6630, __thiscall, 70345,  CUIGuildBBS, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C6630
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
	mov eax,dword ptr [ebp+0xB14]
	xor ebx,ebx
	cmp eax,ebx
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [ebp+0xB14]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+0xB14]
	cmp ecx,ebx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [ebp+0xB14],ebx

 Block5:
	push 0x2C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebx
	je Block7

 Block6:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CUIGuildBBS::CURENTRY::`vftable'
	mov dword ptr [eax+0x1C],ebx
	mov dword ptr [eax+0x20],ebx
	mov dword ptr [eax+0x28],ebx
	mov edi,eax
	jmp Block8

 Block7:
	xor edi,edi

 Block8:
	cmp edi,ebx
	je Block10

 Block9:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	mov esi,dword ptr [ebp+0xB14]
	mov dword ptr [ebp+0xB14],edi
	cmp esi,ebx
	je Block13

 Block11:
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block13

 Block12:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block13:
	mov edi,dword ptr [esp+0x30]
	mov esi,dword ptr [ebp+0xB14]
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esi+0xC],eax
	mov esi,dword ptr [ebp+0xB14]
	mov ecx,dword ptr [esi+0xC]
	mov dword ptr [ebp+0xB0C],ecx
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esi+0x10],eax
	mov eax,dword ptr [ebp+0xB14]
	push 8
	add eax,0x14
	push eax
	mov ecx,edi
	call CInPacket::DecodeBuffer
	lea edx,[esp+0x30]
	push edx
	mov ecx,edi
	call CInPacket::DecodeStr
	mov ecx,dword ptr [ebp+0xB14]
	push eax
	add ecx,0x1C
	mov dword ptr [esp+0x2C],ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	or esi,0xFFFFFFFF
	mov dword ptr [esp+0x28],esi
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	lea eax,[esp+0x30]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	mov ecx,dword ptr [ebp+0xB14]
	push eax
	add ecx,0x20
	mov dword ptr [esp+0x2C],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0x28],esi
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov esi,dword ptr [ebp+0xB14]
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esi+0x24],eax
	mov eax,dword ptr [ebp+0xB14]
	lea ecx,[eax+0x28]
	call ZArray<ZRef<CUIGuildBBS::COMMENT>>::RemoveAll
	mov ecx,edi
	call CInPacket::Decode4
	cmp eax,ebx
	jle Block36

 Block18:
	mov dword ptr [esp+0x30],eax
	jmp Block21

 Block20:
	xor ebx,ebx

 Block21:
	push 0x20
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebx
	je Block23

 Block22:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CUIGuildBBS::COMMENT::`vftable'
	mov dword ptr [eax+0x14],ebx
	mov esi,eax
	jmp Block24

 Block23:
	xor esi,esi

 Block24:
	mov dword ptr [esp+0x1C],esi
	cmp esi,ebx
	je Block26

 Block25:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block26:
	mov ecx,edi
	mov dword ptr [esp+0x28],2
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi+0xC],eax
	call CInPacket::Decode4
	push 8
	lea edx,[esi+0x18]
	push edx
	mov ecx,edi
	mov dword ptr [esi+0x10],eax
	call CInPacket::DecodeBuffer
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	push eax
	lea ecx,[esi+0x14]
	mov byte ptr [esp+0x2C],3
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x28],2
	cmp eax,ebx
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov eax,dword ptr [ebp+0xB14]
	push 0xFFFFFFFF
	lea ecx,[eax+0x28]
	call ZArray<ZRef<CUIGuildBBS::COMMENT>>::InsertBefore
	mov ebx,eax
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebx+4]
	test eax,eax
	je Block33

 Block29:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block32

 Block30:
	mov eax,dword ptr [ebx+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebx+4]
	test ecx,ecx
	je Block32

 Block31:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block32:
	mov dword ptr [ebx+4],0

 Block33:
	mov dword ptr [ebx+4],esi
	lea ebx,[esi+4]
	push ebx
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block35

 Block34:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block35:
	sub dword ptr [esp+0x30],1
	mov dword ptr [esp+0x1C],0
	jne Block20

 Block36:
	mov ecx,ebp
	call CUIGuildBBS::SetScrollBar
	mov ecx,ebp
	call CUIGuildBBS::LoadViewTextBox
	mov dword ptr [ebp+0xB08],1
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
// CUIGuildBBS::OnWrite
__SUB_CLASS_THIS(003C63F0, __thiscall, 70343,  CUIGuildBBS, void, int32_t, int32_t) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	push esi
	push edi
	mov edi,ecx
	mov eax,dword ptr [edi+0xB24]
	test eax,eax
	je Block3

 Block1:
	cmp dword ptr [esp+0x1C],0
	je Block3

 Block2:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x30],esp
	push 0xEB3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 8

 Block3:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov dword ptr [esp+0x10],ecx
	lea ebx,[edi+0xC04]
	mov ecx,ebx
	call ZArray<long>::RemoveAll
	mov esi,0x50B810
	mov ebp,7
	lea ebx,[ebx]

 Block4:
	mov ecx,dword ptr [esp+0x10]
	push esi
	call CWvsContext::IsExist
	test eax,eax
	je Block6

 Block5:
	push 0xFFFFFFFF
	mov ecx,ebx
	call ZArray<long>::InsertBefore
	lea edx,[esi-0x50B7AC]
	mov dword ptr [eax],edx

 Block6:
	inc esi
	sub ebp,1
	jne Block4

 Block7:
	xor esi,esi
	cmp dword ptr [esp+0x18],esi
	je Block16

 Block8:
	mov edx,dword ptr [edi+0xB14]
	mov eax,dword ptr [edx+0x24]
	cmp eax,3
	jge Block10

 Block9:
	mov dword ptr [edi+0xB2C],eax
	mov dword ptr [edi+0xB30],eax
	jmp Block17

 Block10:
	mov dword ptr [edi+0xB2C],esi
	mov dword ptr [edi+0xB30],esi
	xor eax,eax

 Block11:
	mov ecx,dword ptr [ebx]
	cmp ecx,esi
	je Block17

 Block12:
	cmp eax,dword ptr [ecx-4]
	jae Block17

 Block13:
	mov ebp,dword ptr [edx+0x24]
	cmp ebp,dword ptr [ecx+eax*4]
	je Block15

 Block14:
	inc eax
	jmp Block11

 Block15:
	add eax,3
	mov dword ptr [edi+0xB2C],eax
	mov edx,dword ptr [edx+0x24]
	mov dword ptr [edi+0xB30],edx
	jmp Block17

 Block16:
	mov dword ptr [edi+0xB2C],esi
	mov dword ptr [edi+0xB30],esi

 Block17:
	mov eax,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esp+0x18]
	push eax
	push ecx
	mov ecx,edi
	call CUIGuildBBS::LoadWriteTextBox
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 8
}
}
// CUIGuildBBS::IsKindOf
__SUB_CLASS_THIS(003C3EE0, __thiscall, 70355,  CUIGuildBBS, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIGuildBBS::ms_RTTI_CUIGuildBBS
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
// CUIGuildBBS::OnGuildBBSPacket
__SUB_CLASS_THIS(003C8260, __thiscall, 70345,  CUIGuildBBS, void, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	sub eax,6
	je Block5

 Block1:
	sub eax,1
	je Block4

 Block2:
	sub eax,1
	jne Block6

 Block3:
	mov ecx,esi
	call CUIGuildBBS::OnEntryNotFound
	pop edi
	pop esi
	ret 4

 Block4:
	push edi
	mov ecx,esi
	call CUIGuildBBS::OnViewEntryResult
	pop edi
	pop esi
	ret 4

 Block5:
	push edi
	mov ecx,esi
	call CUIGuildBBS::OnLoadListResult

 Block6:
	pop edi
	pop esi
	ret 4
}
}
// CUIGuildBBS::SendLoadListRequest
_SUB_EXCEPTION_HANDLER(3C3680)
__SUB_CLASS_THIS0(003C3680, __thiscall, 70334,  CUIGuildBBS, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C3680
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0xB3
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 2
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov eax,dword ptr [esi+0xB18]
	push eax
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret
}
}
// CUIGuildBBS::OnCommentDelete
_SUB_EXCEPTION_HANDLER(3C3B70)
__SUB_CLASS_THIS(003C3B70, __thiscall, 70344,  CUIGuildBBS, void, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C3B70
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
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0xEB2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block2

 Block1:
	push 0xB3
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 5
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0
	call COutPacket::Encode1
	mov eax,dword ptr [esi+0xB14]
	mov ecx,dword ptr [eax+0xC]
	push ecx
	lea ecx,[esp+0x10]
	call COutPacket::Encode4
	mov eax,dword ptr [esi+0xBC0]
	mov eax,dword ptr [eax+0x38]
	mov ecx,dword ptr [esi+0xB14]
	mov edx,dword ptr [esp+0x2C]
	mov ecx,dword ptr [ecx+0x28]
	add eax,edx
	mov eax,dword ptr [ecx+eax*8+4]
	mov eax,dword ptr [eax+0xC]
	push eax
	lea ecx,[esp+0x10]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0xC]
	push edx
	call CClientSocket::SendPacket
	mov ecx,esi
	call CUIGuildBBS::SendLoadListRequest
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block2:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret 4
}
}
// CUIGuildBBS::LoadWriteTextBox
_SUB_EXCEPTION_HANDLER(3C5A10)
__SUB_CLASS_THIS(003C5A10, __thiscall, 70343,  CUIGuildBBS, void, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C5A10
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xBC
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xD0]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esi+0xB28],1
	call CUIGuildBBS::DestroyPreviousControls
	xor ebp,ebp
	mov dword ptr [esp+0x28],ebp
	mov dword ptr [esp+0x20],ebp
	mov dword ptr [esp+0x24],ebp
	lea eax,[esp+0x14]
	push 0xEC0
	push eax
	mov dword ptr [esp+0xE0],ebp
	mov dword ptr [esp+0x24],ebp
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0xDC],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD8],0
	cmp eax,ebp
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
	cmp dword ptr [esp+0xE4],ebp
	je Block7

 Block3:
	mov byte ptr [esp+0xD8],2
	cmp eax,ebp
	je Block5

 Block4:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	push eax
	lea ecx,[esi+0xB54]
	mov byte ptr [esp+0xDC],0
	call ZRef<CCtrlButton>::op_assign_ptr
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0x113
	push 0x25A
	push 0x7D6
	jmp Block16

 Block7:
	cmp dword ptr [esp+0xE0],ebp
	je Block12

 Block8:
	mov byte ptr [esp+0xD8],3
	cmp eax,ebp
	je Block10

 Block9:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block11

 Block10:
	xor eax,eax

 Block11:
	push eax
	lea ecx,[esi+0xB54]
	mov byte ptr [esp+0xDC],0
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0xB58]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x1C]
	push edx
	push 1
	push 0x113
	push 0x25A
	push 0x7D5
	push esi
	call eax
	jmp Block17

 Block12:
	mov byte ptr [esp+0xD8],4
	cmp eax,ebp
	je Block14

 Block13:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block15

 Block14:
	xor eax,eax

 Block15:
	push eax
	lea ecx,[esi+0xB54]
	mov byte ptr [esp+0xDC],0
	call ZRef<CCtrlButton>::op_assign_ptr
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0x113
	push 0x25A
	push 0x7D4

 Block16:
	mov ecx,dword ptr [esi+0xB58]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	push esi
	call edx

 Block17:
	mov eax,dword ptr [esi+0xB58]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	lea eax,[esp+0x14]
	push 0xEC1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0xDC],5
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD8],0
	cmp eax,ebp
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block19:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD8],6
	cmp eax,ebp
	je Block21

 Block20:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block22

 Block21:
	xor eax,eax

 Block22:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0xD8],0
	cmp eax,ebp
	je Block32

 Block23:
	add eax,8
	cmp eax,ebp
	je Block32

 Block24:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block26

 Block25:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block26:
	mov eax,dword ptr [esi+0xB60]
	mov dword ptr [esi+0xB60],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block28

 Block27:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block28:
	mov ecx,dword ptr [esi+0xB60]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0x113
	push 0x298
	push 0x7D7
	push esi
	call edx
	mov eax,dword ptr [esi+0xB60]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	lea eax,[esp+0x14]
	push 0xEC2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0xDC],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD8],0
	cmp eax,ebp
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block30:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD8],8
	cmp eax,ebp
	je Block33

 Block31:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block34

 Block32:
	xor edi,edi
	jmp Block26

 Block33:
	xor eax,eax

 Block34:
	mov byte ptr [esp+0xD8],0
	cmp eax,ebp
	je Block44

 Block35:
	add eax,8
	cmp eax,ebp
	je Block44

 Block36:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block38

 Block37:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block38:
	mov eax,dword ptr [esi+0xB98]
	mov dword ptr [esi+0xB98],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block40

 Block39:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block40:
	mov ecx,dword ptr [esi+0xB98]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0xF3
	push 0x194
	push 0x7DE
	push esi
	call edx
	mov eax,dword ptr [esi+0xB98]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	lea eax,[esp+0x14]
	push 0xEC3
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0xDC],9
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xD8],0
	cmp eax,ebp
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block42:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD8],0xA
	cmp eax,ebp
	je Block45

 Block43:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block46

 Block44:
	xor edi,edi
	jmp Block38

 Block45:
	xor eax,eax

 Block46:
	mov byte ptr [esp+0xD8],0
	cmp eax,ebp
	je Block63

 Block47:
	add eax,8
	cmp eax,ebp
	je Block63

 Block48:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block50

 Block49:
	lea ecx,[edi+0xC]
	push ecx
	call ebx

 Block50:
	mov eax,dword ptr [esi+0xBA0]
	mov dword ptr [esi+0xBA0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block52

 Block51:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block52:
	mov ecx,dword ptr [esi+0xBA0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0xF3
	push 0x2C0
	push 0x7DF
	push esi
	call edx
	mov eax,dword ptr [esi+0xBA0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x24]
	push 1
	call edx
	lea ecx,[esp+0x94]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	lea eax,[esp+0x14]
	push 0x1A25
	push eax
	mov byte ptr [esp+0xE0],0xB
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea ecx,[esp+0xA8]
	cmp ecx,edi
	je Block57

 Block53:
	mov ecx,dword ptr [esp+0xA8]
	cmp ecx,ebp
	je Block55

 Block54:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0xA8],ebp

 Block55:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0xA8],edi
	cmp edi,ebp
	je Block57

 Block56:
	add edi,8
	push edi
	call ebx

 Block57:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebp
	je Block59

 Block58:
	call _xbstr_t::Data_t::Release

 Block59:
	cmp dword ptr [esp+0xE0],ebp
	je Block61

 Block60:
	mov eax,dword ptr [esi+0xB14]
	add eax,0x1C
	push eax
	lea ecx,[esp+0x98]
	call ZXString<char>::op_assign

 Block61:
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0xC8],0x19
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD8],0xC
	cmp eax,ebp
	je Block64

 Block62:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block65

 Block63:
	xor edi,edi
	jmp Block50

 Block64:
	xor eax,eax

 Block65:
	mov byte ptr [esp+0xD8],0xB
	cmp eax,ebp
	je Block82

 Block66:
	add eax,8
	cmp eax,ebp
	je Block82

 Block67:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block69

 Block68:
	lea edx,[edi+0xC]
	push edx
	call ebx

 Block69:
	mov eax,dword ptr [esi+0xBA8]
	mov dword ptr [esi+0xBA8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block71

 Block70:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlEdit>::_ReleaseRaw

 Block71:
	mov ecx,dword ptr [esi+0xBA8]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x94]
	push edx
	push 0x10
	push 0x100
	push 0x1E
	push 0x1C1
	push 0x7E0
	push esi
	call eax
	lea ecx,[esp+0x5C]
	call CCtrlMLEdit::CREATEPARAM::_ctor_default
	lea ecx,[esp+0x14]
	push 0x1A25
	push ecx
	mov byte ptr [esp+0xE0],0xD
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,eax
	lea edx,[esp+0x68]
	cmp edx,edi
	je Block76

 Block72:
	mov ecx,dword ptr [esp+0x68]
	cmp ecx,ebp
	je Block74

 Block73:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x68],ebp

 Block74:
	mov edi,dword ptr [edi]
	mov dword ptr [esp+0x68],edi
	cmp edi,ebp
	je Block76

 Block75:
	add edi,8
	push edi
	call ebx

 Block76:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebp
	je Block78

 Block77:
	call _xbstr_t::Data_t::Release

 Block78:
	mov ebx,0xF
	mov dword ptr [esp+0x84],0x258
	mov dword ptr [esp+0x88],0xF0
	mov dword ptr [esp+0x8C],ebx
	cmp dword ptr [esp+0xE0],ebp
	je Block80

 Block79:
	mov eax,dword ptr [esi+0xB14]
	add eax,0x20
	push eax
	lea ecx,[esp+0x60]
	call ZXString<char>::op_assign

 Block80:
	push 0xCC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD8],0xE
	cmp eax,ebp
	je Block83

 Block81:
	mov ecx,eax
	call CCtrlMLEdit::_ctor_default
	jmp Block84

 Block82:
	xor edi,edi
	jmp Block69

 Block83:
	xor eax,eax

 Block84:
	mov byte ptr [esp+0xD8],0xD
	cmp eax,ebp
	je Block92

 Block85:
	add eax,8
	cmp eax,ebp
	je Block92

 Block86:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block88

 Block87:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block88:
	mov eax,dword ptr [esi+0xBB0]
	mov dword ptr [esi+0xBB0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block90

 Block89:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlMLEdit>::_ReleaseRaw

 Block90:
	mov ecx,dword ptr [esi+0xBB0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+8]
	lea eax,[esp+0x5C]
	push eax
	push 0xB4
	push 0xFA
	push 0x38
	push 0x1C1
	push 0x7E1
	push esi
	call edx
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xD8],bl
	cmp eax,ebp
	je Block93

 Block91:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block94

 Block92:
	xor edi,edi
	jmp Block88

 Block93:
	xor eax,eax

 Block94:
	mov byte ptr [esp+0xD8],0xD
	cmp eax,ebp
	je Block104

 Block95:
	add eax,8
	cmp eax,ebp
	je Block104

 Block96:
	lea edi,[eax-8]
	cmp edi,ebp
	je Block98

 Block97:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block98:
	mov eax,dword ptr [esi+0xBC8]
	mov dword ptr [esi+0xBC8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebp
	je Block100

 Block99:
	push ebp
	lea ecx,[esp+0x18]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block100:
	mov ecx,dword ptr [esi+0xBC8]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push ebp
	push 0xBB
	push 0x35
	push 0x2C2
	push 3
	push 1
	push 0x7E4
	push esi
	call eax
	mov eax,dword ptr [esi+0xBC8]
	sub esp,8
	mov dword ptr [eax+0x34],0x12C
	mov eax,dword ptr [esi+0xBC8]
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx+4],eax
	cmp eax,ebp
	je Block102

 Block101:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block102:
	mov ecx,dword ptr [esi+0xBB0]
	call CCtrlMLEdit::SetScrollbar
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call edi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block105

 Block103:
	push eax
	call _com_issue_error

 Block104:
	xor edi,edi
	jmp Block98

 Block105:
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0xDC],0x10
	call edi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block107

 Block106:
	push eax
	call _com_issue_error

 Block107:
	push ebp
	push ebp
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x48]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0xEC4
	mov bl,0x11
	push ecx
	mov byte ptr [esp+0xF4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xEC],0x12
	cmp dword ptr [_D_G_RM],ebp
	jne Block109

 Block108:
	push 0x80004003
	call _com_issue_error

 Block109:
	lea edx,[esp+0x60]
	mov byte ptr [esp+0xEC],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xE0],0x13
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xBD4]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block112

 Block110:
	cmp eax,0x80004002
	je Block112

 Block111:
	push eax
	call _com_issue_error

 Block112:
	cmp word ptr [esp+0x4C],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0xD8],bl
	jne Block115

 Block113:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	cmp eax,ebp
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea ecx,[esp+0x4C]
	push ecx
	call edi

 Block116:
	mov ebx,8
	mov byte ptr [esp+0xD8],0x10
	cmp word ptr [esp+0x3C],bx
	jne Block119

 Block117:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea eax,[esp+0x3C]
	push eax
	call edi

 Block120:
	mov byte ptr [esp+0xD8],0xD
	cmp word ptr [esp+0x2C],bx
	jne Block123

 Block121:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea edx,[esp+0x2C]
	push edx
	call edi

 Block124:
	push ebp
	mov ecx,esi
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x68]
	mov byte ptr [esp+0xD8],0xB
	cmp ecx,ebp
	je Block126

 Block125:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x68],ebp

 Block126:
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebp
	je Block128

 Block127:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block128:
	lea ecx,[esp+0x94]
	mov byte ptr [esp+0xD8],0
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0xD8],0xFFFFFFFF
	cmp eax,ebp
	je Block130

 Block129:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block130:
	mov ecx,dword ptr [esp+0xD0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC8
	ret 8
}
}
// CUIGuildBBS::OnDestroy
__SUB_CLASS_THIS0(003C2FC0, __thiscall, 70334,  CUIGuildBBS, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	call CWvsContext::RemoveFromStackForTab
	mov ecx,esi
	pop esi
	jmp  CUIWnd::OnDestroy
}
}
// CUIGuildBBS::SetScrollBar
__SUB_CLASS_THIS0(003C2FE0, __thiscall, 70334,  CUIGuildBBS, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+0xB14]
	add eax,0x28
	mov eax,dword ptr [eax]
	push edi
	test eax,eax
	jne Block2

 Block1:
	xor edi,edi
	jmp Block3

 Block2:
	mov edi,dword ptr [eax-4]

 Block3:
	mov ecx,dword ptr [esi+0xBC0]
	lea eax,[edi-3]
	push eax
	call CCtrlScrollBar::SetScrollRange
	xor ecx,ecx
	lea eax,[edi-4]
	test eax,eax
	setl cl
	dec ecx
	and eax,ecx
	mov ecx,dword ptr [esi+0xBC0]
	push eax
	call CCtrlScrollBar::SetCurPos
	pop edi
	pop esi
	ret
}
}
// CUIGuildBBS::Draw
_SUB_EXCEPTION_HANDLER(3C82B0)
__SUB_CLASS_THIS(003C82B0, __thiscall, 70340,  CUIGuildBBS, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C82B0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xBC
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xD0]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov dword ptr [esp+0x24],edi
	mov eax,dword ptr [esp+0xE0]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	cmp dword ptr [edi+0xBD4],0
	mov esi,dword ptr [esp+0x4C]
	mov dword ptr [esp+0xD8],0
	je Block9

 Block1:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	mov eax,dword ptr [edi+0xBD4]
	mov byte ptr [esp+0xD8],1
	test esi,esi
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea ecx,[esp+0x14]
	push ecx
	push eax
	push 0x12
	push 0x18F
	mov ecx,esi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xD8],0
	jne Block8

 Block6:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block9:
	cmp dword ptr [edi+0xB28],0
	je Block42

 Block10:
	mov ebx,dword ptr [esp+0x24]
	mov edi,0x1AB
	add ebx,0xBD8

 Block11:
	cmp dword ptr [ebx],0
	je Block20

 Block12:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block2

 Block13:
	mov ecx,dword ptr [ebx]
	mov byte ptr [esp+0xD8],2
	test esi,esi
	je Block4

 Block14:
	mov ebp,dword ptr [esp+0x14]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x28]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x2C]
	push ecx
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x34]
	push 0xF7
	push edi
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [edx+0x80]
	push esi
	call eax
	test eax,eax
	jge Block16

 Block15:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block16:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xD8],0
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	add edi,0x17
	add ebx,4
	cmp edi,0x1F0
	jl Block11

 Block21:
	xor ebx,ebx
	mov ebp,0x1F0

 Block22:
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [ecx+0xC04]
	test eax,eax
	je Block34

 Block23:
	cmp ebx,dword ptr [eax-4]
	jae Block34

 Block24:
	mov edi,dword ptr [eax+ebx*4]
	sub edi,0x64
	cmp dword ptr [ecx+edi*4+0xBE4],0
	je Block33

 Block25:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block2

 Block26:
	mov eax,dword ptr [esp+0x24]
	mov edi,dword ptr [eax+edi*4+0xBE4]
	mov byte ptr [esp+0xD8],3
	test esi,esi
	je Block4

 Block27:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x2C]
	push edi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x34]
	push 0xF7
	push ebp
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push esi
	call eax
	test eax,eax
	jge Block29

 Block28:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block29:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xD8],0
	jne Block32

 Block30:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc ebx
	add ebp,0x17
	jmp Block22

 Block32:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	inc ebx
	add ebp,0x17
	jmp Block22

 Block34:
	mov eax,3
	mov edx,0xFF
	mov word ptr [esp+0x14],ax
	mov dword ptr [esp+0x1C],edx
	mov edi,dword ptr [ecx+0xC00]
	mov byte ptr [esp+0xD8],4
	test esi,esi
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [ecx+0xB2C]
	mov ebp,dword ptr [esp+0x14]
	imul eax,0x17
	mov ebx,dword ptr [esi]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],ebp
	mov ebp,dword ptr [esp+0x28]
	push edi
	add eax,0x1A9
	push 0xF5
	mov dword ptr [ecx+4],ebp
	mov dword ptr [ecx+8],edx
	mov edx,dword ptr [esp+0x38]
	push eax
	mov eax,dword ptr [ebx+0x80]
	push esi
	mov dword ptr [ecx+0xC],edx
	call eax
	test eax,eax
	jge Block38

 Block37:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block38:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xD8],0
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	mov edi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	mov dword ptr [esp+0x88],edi
	call ebx
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebp,ebp
	add esp,8
	cmp eax,ebp
	jge Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0xDC],5
	call ebx
	lea eax,[esp+0x14]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x60]
	push 1
	push eax
	mov byte ptr [esp+0xE8],6
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	mov bl,7
	mov ecx,edi
	mov byte ptr [esp+0xE8],bl
	call CWvsContext::GetGuildName
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xEC],8
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xE8],9
	cmp esi,ebp
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	push 0x16
	push 0x3A
	mov ecx,esi
	mov byte ptr [esp+0xF0],8
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xD8],bl
	cmp eax,ebp
	je Block50

 Block49:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block50:
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0xD8],6
	cmp eax,ebp
	je Block52

 Block51:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block52:
	mov ebx,8
	mov byte ptr [esp+0xD8],5
	cmp word ptr [esp+0x14],bx
	jne Block55

 Block53:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebp
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov byte ptr [esp+0xD8],0
	cmp word ptr [esp+0x2C],bx
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block60:
	movzx eax,word ptr [edi+0x37E3]
	cmp ax,bp
	je Block69

 Block61:
	push ebp
	push ebp
	push ebp
	push ebp
	lea edx,[esp+0x6C]
	push edx
	mov ecx,edi
	call CWvsContext::GetGuildMarkCanvas
	mov eax,3
	mov ecx,0xFF
	mov word ptr [esp+0x14],ax
	mov dword ptr [esp+0x1C],ecx
	mov edi,dword ptr [esp+0x14]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edi
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr [eax+0xC],ecx
	mov eax,dword ptr [esp+0x6C]
	mov ecx,dword ptr [edx+0x80]
	push eax
	push 0x18
	push 0x14
	push esi
	mov byte ptr [esp+0xF8],0xB
	call ecx
	cmp eax,ebp
	jge Block63

 Block62:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block63:
	mov byte ptr [esp+0xD8],0xA
	cmp word ptr [esp+0x14],bx
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	cmp eax,ebp
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0xD8],0
	cmp eax,ebp
	je Block112

 Block68:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block112

 Block69:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push eax
	call edi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block71

 Block70:
	push eax
	call _com_issue_error

 Block71:
	lea edx,[esp+0x2C]
	push edx
	mov byte ptr [esp+0xDC],0xC
	call edi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block73

 Block72:
	push eax
	call _com_issue_error

 Block73:
	push ebp
	push ebp
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x64],esp
	push 0x871
	mov bl,0xD
	push eax
	mov byte ptr [esp+0xF4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xEC],0xE
	cmp dword ptr [_D_G_RM],ebp
	jne Block75

 Block74:
	push 0x80004003
	call _com_issue_error

 Block75:
	lea ecx,[esp+0x88]
	push ecx
	mov byte ptr [esp+0xF0],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xE0],0xF
	call Ztl_variant_t::GetUnknown
	xor ebx,ebx
	mov dword ptr [esp+0x58],ebx
	cmp eax,ebp
	je Block79

 Block76:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x28]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	cmp eax,ebp
	setl bl
	dec ebx
	and ebx,dword ptr [esp+0x28]
	cmp eax,ebp
	mov dword ptr [esp+0x58],ebx
	jge Block79

 Block77:
	cmp eax,0x80004002
	je Block79

 Block78:
	push eax
	call _com_issue_error

 Block79:
	mov edi,8
	mov byte ptr [esp+0xD8],0x11
	cmp word ptr [esp+0x74],di
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,ebp
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	mov byte ptr [esp+0xD8],0x12
	cmp word ptr [esp+0x2C],di
	jne Block86

 Block84:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,ebp
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block87:
	mov byte ptr [esp+0xD8],0x13
	cmp word ptr [esp+0x3C],di
	jne Block90

 Block88:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebp
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block91:
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x5C],esp
	push 0x877
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xE4],0x14
	cmp ebx,ebp
	jne Block93

 Block92:
	push 0x80004003
	call _com_issue_error

 Block93:
	lea ecx,[esp+0x94]
	push ecx
	mov ecx,ebx
	mov byte ptr [esp+0xE8],0x13
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xE0],0x15
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [esp+0x54],edi
	cmp eax,ebp
	je Block97

 Block94:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x28]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	xor ecx,ecx
	cmp eax,ebp
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x28]
	cmp eax,ebp
	mov edi,ecx
	mov dword ptr [esp+0x54],edi
	jge Block97

 Block95:
	cmp eax,0x80004002
	je Block97

 Block96:
	push eax
	call _com_issue_error

 Block97:
	cmp word ptr [esp+0x88],8
	mov byte ptr [esp+0xD8],0x17
	jne Block100

 Block98:
	mov eax,dword ptr [esp+0x90]
	xor edx,edx
	mov word ptr [esp+0x88],dx
	cmp eax,ebp
	je Block101

 Block99:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block101

 Block100:
	lea eax,[esp+0x88]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block101:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block103

 Block102:
	push eax
	call _com_issue_error

 Block103:
	mov edx,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x28]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x2C]
	push edi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x34]
	push 0x18
	push 0x14
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push esi
	mov byte ptr [esp+0xF8],0x18
	call eax
	cmp eax,ebp
	jge Block105

 Block104:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block105:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xD8],0x17
	jne Block108

 Block106:
	mov eax,dword ptr [esp+0x1C]
	xor ecx,ecx
	mov word ptr [esp+0x14],cx
	cmp eax,ebp
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea edx,[esp+0x14]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block109:
	mov byte ptr [esp+0xD8],0x13
	cmp edi,ebp
	je Block111

 Block110:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block111:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	mov byte ptr [esp+0xDC],0
	call eax

 Block112:
	mov ecx,dword ptr [esp+0x24]
	cmp dword ptr [ecx+0xB24],ebp
	je Block114

 Block113:
	push 0x67
	lea edx,[esp+0x50]
	push edx
	lea eax,[ecx+0xB20]
	push eax
	call CUIGuildBBS::DrawList

 Block114:
	mov ebx,dword ptr [esp+0x24]
	xor esi,esi
	mov edi,0x86
	lea ebx,[ebx]

 Block115:
	mov eax,dword ptr [ebx+0xB1C]
	cmp eax,ebp
	je Block118

 Block116:
	cmp esi,dword ptr [eax-4]
	jae Block118

 Block117:
	push edi
	lea ecx,[esp+0x50]
	mov edx,eax
	push ecx
	lea eax,[edx+esi*8]
	push eax
	mov ecx,ebx
	call CUIGuildBBS::DrawList
	inc esi
	add edi,0x1F
	jmp Block115

 Block118:
	cmp dword ptr [ebx+0xB08],ebp
	je Block241

 Block119:
	mov ecx,ebx
	cmp dword ptr [ecx+0xB14],ebp
	je Block241

 Block120:
	lea edx,[esp+0x5C]
	push 0x45
	push edx
	call get_basic_font
	add esp,8
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0xDC],0x19
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block122

 Block121:
	push eax
	call _com_issue_error

 Block122:
	mov eax,dword ptr [esp+0x24]
	mov eax,dword ptr [eax+0xB14]
	mov eax,dword ptr [eax+0x1C]
	lea edx,[esp+0x3C]
	push edx
	push ecx
	mov dword ptr [esp+0x58],esp
	mov ecx,esp
	mov bl,0x1A
	push eax
	mov byte ptr [esp+0xE4],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x64]
	mov byte ptr [esp+0xE0],0x1B
	cmp ecx,ebp
	jne Block124

 Block123:
	push 0x80004003
	call _com_issue_error

 Block124:
	mov byte ptr [esp+0xE0],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x3C],8
	mov esi,eax
	mov byte ptr [esp+0xD8],0x19
	jne Block127

 Block125:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	cmp eax,ebp
	je Block128

 Block126:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block128

 Block127:
	lea edx,[esp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block128:
	mov edi,dword ptr [ZImports::_VariantInit]
	mov eax,0x12C
	sub eax,esi
	cdq
	sub eax,edx
	mov esi,eax
	lea eax,[esp+0x2C]
	push eax
	sar esi,1
	call edi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block130

 Block129:
	push eax
	call _com_issue_error

 Block130:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0xDC],0x1C
	call edi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block132

 Block131:
	push eax
	call _com_issue_error

 Block132:
	mov eax,dword ptr [esp+0x5C]
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0x28]
	lea edx,[esp+0x40]
	push edx
	push eax
	mov eax,dword ptr [ecx+0xB14]
	mov eax,dword ptr [eax+0x1C]
	push ecx
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	mov bl,0x1D
	push eax
	mov byte ptr [esp+0xEC],bl
	call _xbstr_t::_ctor_0
	mov edi,dword ptr [esp+0x5C]
	mov byte ptr [esp+0xE8],0x1E
	cmp edi,ebp
	jne Block134

 Block133:
	push 0x80004003
	call _com_issue_error

 Block134:
	push 0x24
	add esi,0x199
	push esi
	mov ecx,edi
	mov byte ptr [esp+0xF0],bl
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x3C],8
	mov byte ptr [esp+0xD8],0x1C
	jne Block137

 Block135:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,ebp
	je Block138

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block137:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block138:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xD8],0x19
	jne Block141

 Block139:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block142

 Block140:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block142

 Block141:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block142:
	mov dword ptr [esp+0x64],ebp
	mov eax,dword ptr [esp+0x24]
	mov eax,dword ptr [eax+0xB14]
	mov edx,dword ptr [eax+0x10]
	lea ecx,[esp+0x64]
	push ecx
	mov ecx,dword ptr [esp+0x88]
	push edx
	mov byte ptr [esp+0xE0],0x1F
	call CWvsContext::GetGuildMemberNameByID
	mov esi,dword ptr [ZImports::_VariantInit]
	test eax,eax
	je Block157

 Block143:
	lea eax,[esp+0x2C]
	push eax
	call esi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block145

 Block144:
	push eax
	call _com_issue_error

 Block145:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0xDC],0x20
	call esi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block147

 Block146:
	push eax
	call _com_issue_error

 Block147:
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x30]
	push 2
	push eax
	mov byte ptr [esp+0xE8],0x21
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edx,dword ptr [esp+0x6C]
	push eax
	push ecx
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	mov bl,0x22
	push edx
	mov byte ptr [esp+0xEC],bl
	call _xbstr_t::_ctor_0
	push 0x3F
	mov byte ptr [esp+0xEC],0x23
	push 0x1BD
	mov ecx,edi
	mov byte ptr [esp+0xF0],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xD8],0x21
	cmp eax,ebp
	je Block149

 Block148:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block149:
	mov ebx,8
	mov byte ptr [esp+0xD8],0x20
	cmp word ptr [esp+0x3C],bx
	jne Block152

 Block150:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block153

 Block151:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block153

 Block152:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block153:
	mov byte ptr [esp+0xD8],0x1F
	cmp word ptr [esp+0x2C],bx
	jne Block156

 Block154:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,ebp
	je Block157

 Block155:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block157

 Block156:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block157:
	mov dword ptr [esp+0x6C],ebp
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [ecx+0xB14]
	lea edx,[esp+0x6C]
	push edx
	add eax,0x14
	push eax
	mov byte ptr [esp+0xE0],0x24
	call CUIGuildBBS::FormatDate
	lea eax,[esp+0x2C]
	push eax
	call esi
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block159

 Block158:
	push eax
	call _com_issue_error

 Block159:
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0xDC],0x25
	call esi
	lea eax,[esp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block161

 Block160:
	push eax
	call _com_issue_error

 Block161:
	lea ecx,[esp+0x2C]
	push ecx
	lea edx,[esp+0x40]
	push edx
	lea eax,[esp+0x30]
	push 2
	push eax
	mov byte ptr [esp+0xE8],0x26
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x74]
	push eax
	push ecx
	mov dword ptr [esp+0x60],esp
	mov ecx,esp
	mov bl,0x27
	push esi
	mov byte ptr [esp+0xEC],bl
	call _xbstr_t::_ctor_0
	push 0x3F
	mov byte ptr [esp+0xEC],0x28
	push 0x240
	mov ecx,edi
	mov byte ptr [esp+0xF0],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xD8],0x26
	cmp eax,ebp
	je Block163

 Block162:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block163:
	mov edi,8
	mov byte ptr [esp+0xD8],0x25
	cmp word ptr [esp+0x3C],di
	jne Block166

 Block164:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block167

 Block165:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block167

 Block166:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block167:
	mov byte ptr [esp+0xD8],0x24
	cmp word ptr [esp+0x2C],di
	jne Block170

 Block168:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,ebp
	je Block171

 Block169:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block171

 Block170:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block171:
	mov edi,dword ptr [esp+0x24]
	mov eax,dword ptr [edi+0xBC0]
	mov ecx,dword ptr [edi+0xB14]
	mov edx,dword ptr [eax+0x38]
	mov eax,dword ptr [ecx+0x28]
	cmp eax,ebp
	jne Block173

 Block172:
	xor eax,eax
	jmp Block175

 Block173:
	mov eax,dword ptr [eax-4]
	cmp eax,4
	jle Block175

 Block174:
	mov eax,4

 Block175:
	mov dword ptr [esp+0x28],eax
	cmp dword ptr [edi+0xB08],ebp
	je Block235

 Block176:
	cmp ecx,ebp
	je Block235

 Block177:
	mov ecx,dword ptr [ecx+0x28]
	cmp ecx,ebp
	je Block235

 Block178:
	cmp dword ptr [ecx-4],ebp
	je Block235

 Block179:
	cmp eax,ebp
	mov dword ptr [esp+0x58],ebp
	jle Block235

 Block180:
	lea ecx,[edx*8]
	mov ebx,0x14F
	mov dword ptr [esp+0x68],ecx
	jmp Block182

 Block182:
	mov edx,dword ptr [esp+0x24]
	mov eax,dword ptr [edx+0xB14]
	mov eax,dword ptr [eax+0x28]
	add eax,dword ptr [esp+0x68]
	mov edi,dword ptr [eax+4]
	mov dword ptr [esp+0x18],edi
	cmp edi,ebp
	je Block184

 Block183:
	lea eax,[edi+4]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block184:
	mov dword ptr [esp+0x60],ebp
	mov edx,dword ptr [edi+0x10]
	lea ecx,[esp+0x60]
	push ecx
	mov ecx,dword ptr [esp+0x88]
	push edx
	mov byte ptr [esp+0xE0],0x2A
	call CWvsContext::GetGuildMemberNameByID
	test eax,eax
	je Block203

 Block185:
	lea eax,[esp+0x70]
	push 2
	push eax
	call get_basic_font
	add esp,8
	lea ecx,[esp+0x3C]
	push ecx
	mov byte ptr [esp+0xDC],0x2B
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block2

 Block186:
	mov edx,dword ptr [esp+0x60]
	lea eax,[esp+0x3C]
	push eax
	push ecx
	mov dword ptr [esp+0x5C],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0xE4],0x2C
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x78]
	mov byte ptr [esp+0xE0],0x2D
	cmp ecx,ebp
	je Block4

 Block187:
	mov byte ptr [esp+0xE0],0x2C
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x3C],8
	mov esi,eax
	mov byte ptr [esp+0xD8],0x2B
	jne Block190

 Block188:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebp
	je Block191

 Block189:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block191

 Block190:
	lea ecx,[esp+0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block191:
	mov eax,0x4C
	sub eax,esi
	cdq
	sub eax,edx
	lea edx,[esp+0xAC]
	mov esi,eax
	push edx
	sar esi,1
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0xAC]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block2

 Block192:
	lea ecx,[esp+0x2C]
	push ecx
	mov byte ptr [esp+0xDC],0x2E
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block2

 Block193:
	mov edx,dword ptr [esp+0x70]
	lea eax,[esp+0xAC]
	push eax
	mov eax,dword ptr [esp+0x64]
	lea ecx,[esp+0x30]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x64],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xEC],0x2F
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x5C]
	push ebx
	add esi,0x18F
	mov byte ptr [esp+0xEC],0x30
	push esi
	mov byte ptr [esp+0xF0],0x2F
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xD8],0x2E
	jne Block196

 Block194:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block197

 Block195:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block197

 Block196:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block197:
	cmp word ptr [esp+0xAC],8
	mov byte ptr [esp+0xD8],0x2B
	jne Block200

 Block198:
	xor eax,eax
	mov word ptr [esp+0xAC],ax
	mov eax,dword ptr [esp+0xB4]
	cmp eax,ebp
	je Block201

 Block199:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block201

 Block200:
	lea ecx,[esp+0xAC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block201:
	mov eax,dword ptr [esp+0x70]
	mov byte ptr [esp+0xD8],0x2A
	cmp eax,ebp
	je Block203

 Block202:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block203:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x9C]
	push ecx
	call esi
	lea edx,[esp+0x9C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block2

 Block204:
	lea eax,[esp+0xBC]
	push eax
	mov byte ptr [esp+0xDC],0x31
	call esi
	lea ecx,[esp+0xBC]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block2

 Block205:
	lea edx,[esp+0x9C]
	push edx
	lea eax,[esp+0xC0]
	push eax
	lea ecx,[esp+0xA0]
	push 2
	push ecx
	mov byte ptr [esp+0xE8],0x32
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [edi+0x14]
	push ecx
	mov dword ptr [esp+0x64],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xEC],0x33
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x5C]
	push ebx
	mov byte ptr [esp+0xEC],0x34
	push 0x1E0
	mov byte ptr [esp+0xF0],0x33
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x98]
	mov byte ptr [esp+0xD8],0x32
	cmp eax,ebp
	je Block207

 Block206:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block207:
	cmp word ptr [esp+0xBC],8
	mov byte ptr [esp+0xD8],0x31
	jne Block210

 Block208:
	mov eax,dword ptr [esp+0xC4]
	xor ecx,ecx
	mov word ptr [esp+0xBC],cx
	cmp eax,ebp
	je Block211

 Block209:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block211

 Block210:
	lea edx,[esp+0xBC]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block211:
	cmp word ptr [esp+0x9C],8
	mov byte ptr [esp+0xD8],0x2A
	jne Block214

 Block212:
	xor eax,eax
	mov word ptr [esp+0x9C],ax
	mov eax,dword ptr [esp+0xA4]
	cmp eax,ebp
	je Block215

 Block213:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block215

 Block214:
	lea ecx,[esp+0x9C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block215:
	mov dword ptr [esp+0x54],ebp
	mov ecx,dword ptr [esp+0x24]
	lea edx,[esp+0x54]
	push edx
	lea eax,[edi+0x18]
	push eax
	mov byte ptr [esp+0xE0],0x35
	call CUIGuildBBS::FormatShortDate
	lea ecx,[esp+0x74]
	push ecx
	call esi
	lea edx,[esp+0x74]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block2

 Block216:
	lea eax,[esp+0x88]
	push eax
	mov byte ptr [esp+0xDC],0x36
	call esi
	lea ecx,[esp+0x88]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jl Block2

 Block217:
	lea edx,[esp+0x74]
	push edx
	lea eax,[esp+0x8C]
	push eax
	lea ecx,[esp+0x58]
	push 2
	push ecx
	mov byte ptr [esp+0xE8],0x37
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x5C]
	push eax
	push ecx
	mov dword ptr [esp+0xDC],esp
	mov ecx,esp
	push esi
	mov byte ptr [esp+0xEC],0x38
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x5C]
	push ebx
	mov byte ptr [esp+0xEC],0x39
	push 0x28E
	mov byte ptr [esp+0xF0],0x38
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0xD8],0x37
	cmp eax,ebp
	je Block219

 Block218:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block219:
	cmp word ptr [esp+0x88],8
	mov byte ptr [esp+0xD8],0x36
	jne Block222

 Block220:
	mov eax,dword ptr [esp+0x90]
	xor ecx,ecx
	mov word ptr [esp+0x88],cx
	cmp eax,ebp
	je Block223

 Block221:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block223

 Block222:
	lea edx,[esp+0x88]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block223:
	cmp word ptr [esp+0x74],8
	mov byte ptr [esp+0xD8],0x35
	jne Block226

 Block224:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,ebp
	je Block227

 Block225:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block227

 Block226:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block227:
	mov byte ptr [esp+0xD8],0x2A
	cmp esi,ebp
	je Block229

 Block228:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block229:
	mov eax,dword ptr [esp+0x60]
	mov byte ptr [esp+0xD8],0x29
	cmp eax,ebp
	je Block231

 Block230:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block231:
	lea esi,[edi+4]
	push esi
	mov byte ptr [esp+0xDC],0x24
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block233

 Block232:
	push esi
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,edi
	call eax

 Block233:
	mov eax,dword ptr [esp+0x58]
	add dword ptr [esp+0x68],8
	inc eax
	add ebx,0x1F
	cmp eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x58],eax
	jl Block182

 Block234:
	mov esi,dword ptr [esp+0x6C]

 Block235:
	mov byte ptr [esp+0xD8],0x1F
	cmp esi,ebp
	je Block237

 Block236:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block237:
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0xD8],0x19
	cmp eax,ebp
	je Block239

 Block238:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block239:
	mov eax,dword ptr [esp+0x5C]
	mov byte ptr [esp+0xD8],0
	cmp eax,ebp
	je Block241

 Block240:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block241:
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0xD8],0xFFFFFFFF
	cmp eax,ebp
	je Block243

 Block242:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block243:
	mov ecx,dword ptr [esp+0xD0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xC8
	ret 4
}
}
// CUIGuildBBS::OnDelete
_SUB_EXCEPTION_HANDLER(3C6520)
__SUB_CLASS_THIS0(003C6520, __thiscall, 70334,  CUIGuildBBS, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C6520
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
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	push 0xEB2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block7

 Block1:
	push 0xB3
	lea ecx,[esp+0x10]
	call COutPacket::_ctor_1
	push 1
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x28],0
	call COutPacket::Encode1
	mov eax,dword ptr [esi+0xB14]
	mov ecx,dword ptr [eax+0xC]
	push ecx
	lea ecx,[esp+0x10]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0xC]
	push edx
	call CClientSocket::SendPacket
	mov eax,dword ptr [esi+0xB14]
	test eax,eax
	je Block6

 Block2:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block5

 Block3:
	mov eax,dword ptr [esi+0xB14]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0xB14]
	test ecx,ecx
	je Block5

 Block4:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block5:
	mov dword ptr [esi+0xB14],0

 Block6:
	mov ecx,esi
	call CUIGuildBBS::SendLoadListRequest
	mov ecx,esi
	call CUIGuildBBS::LoadViewTextBox
	lea ecx,[esp+0x10]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll

 Block7:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x20
	ret
}
}
// CUIGuildBBS::IsGuildBBSAdmin
__SUB_CLASS_THIS0(003C30A0, __thiscall, 70346,  CUIGuildBBS, int32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov eax,dword ptr [ecx+0x20B4]
	push eax
	call CWvsContext::GetGuildMemberGrade
	xor ecx,ecx
	cmp eax,2
	setle cl
	mov eax,ecx
	ret
}
}
// CUIGuildBBS::FormatShortDate
__SUB_CLASS_THIS(003C4B50, __thiscall, 70352,  CUIGuildBBS, void, const _FILETIME&, ZXString<char>&) {
__asm {

 Block0:
	sub esp,0x20
	lea eax,[esp+0x10]
	push eax
	call GetLocalTime
	mov edx,dword ptr [esp+0x24]
	lea ecx,[esp]
	push ecx
	push edx
	call dword ptr [ZImports::_FileTimeToSystemTime]
	movzx eax,word ptr [esp+0x10]
	cmp ax,word ptr [esp]
	mov ax,word ptr [esp+6]
	mov cx,word ptr [esp+2]
	jne Block4

 Block1:
	cmp word ptr [esp+0x12],cx
	jne Block4

 Block2:
	cmp word ptr [esp+0x16],ax
	jne Block4

 Block3:
	movzx ecx,word ptr [esp+0xA]
	movzx edx,word ptr [esp+8]
	mov eax,dword ptr [esp+0x28]
	push ecx
	push edx
	push offset _S_D02D
	push eax
	call ZXString<char>::Format
	add esp,0x10
	add esp,0x20
	ret 8

 Block4:
	movzx edx,ax
	movzx eax,cx
	mov ecx,dword ptr [esp+0x28]
	push edx
	push eax
	push offset _S_02D02D
	push ecx
	call ZXString<char>::Format
	add esp,0x10
	add esp,0x20
	ret 8
}
}
// CUIGuildBBS::OnComment
_SUB_EXCEPTION_HANDLER(3C4530)
__SUB_CLASS_THIS0(003C4530, __thiscall, 70334,  CUIGuildBBS, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C4530
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
	mov ecx,dword ptr [esi+0xBB8]
	lea eax,[esp+0xC]
	push eax
	call CCtrlEdit::GetText
	mov edi,dword ptr [esp+0xC]
	mov dword ptr [esp+0x2C],0
	test edi,edi
	je Block2

 Block1:
	cmp byte ptr [edi],0
	jne Block4

 Block2:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0xEB1
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test edi,edi
	je Block10

 Block3:
	add edi,0xFFFFFFF4
	push edi
	jmp Block9

 Block4:
	push 1
	push 0
	push 1
	push 0x400
	lea ecx,[esp+0x1C]
	call ZXString<char>::GetBuffer
	push eax
	call CCurseProcess::ProcessString
	add esp,0xC
	push 0xFFFFFFFF
	lea ecx,[esp+0x10]
	mov edi,eax
	call ZXString<char>::ReleaseBuffer
	test edi,edi
	jne Block6

 Block5:
	push edi
	push edi
	push edi
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x24],esp
	push 0x11D
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block7

 Block6:
	push 0xB3
	lea ecx,[esp+0x18]
	call COutPacket::_ctor_1
	push 4
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x30],1
	call COutPacket::Encode1
	mov eax,dword ptr [esi+0xB14]
	mov eax,dword ptr [eax+0xC]
	push eax
	lea ecx,[esp+0x18]
	call COutPacket::Encode4
	push ecx
	mov ecx,esp
	lea edx,[esp+0x10]
	mov dword ptr [esp+0x14],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	lea ecx,[esp+0x18]
	call COutPacket::EncodeStr
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x14]
	push eax
	call CClientSocket::SendPacket
	mov ecx,esi
	call CUIGuildBBS::SendLoadListRequest
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x2C],0
	call ZArray<unsigned char>::RemoveAll

 Block7:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFF4
	push eax

 Block9:
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x24
	ret
}
}
// CUIGuildBBS::SendViewEntryRequest
_SUB_EXCEPTION_HANDLER(3C3710)
__SUB_CLASS_THIS0(003C3710, __thiscall, 70334,  CUIGuildBBS, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C3710
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x18]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	push 0xB3
	lea ecx,[esp+0xC]
	call COutPacket::_ctor_1
	push 3
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode1
	mov eax,dword ptr [esi+0xB0C]
	push eax
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	lea ecx,[esp+8]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	mov ecx,esi
	call CUIGuildBBS::SendLoadListRequest
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret
}
}
// CUIGuildBBS::OnLoadListResult
_SUB_EXCEPTION_HANDLER(3C46C0)
__SUB_CLASS_THIS(003C46C0, __thiscall, 70345,  CUIGuildBBS, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C46C0
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
	mov ebp,ecx
	mov dword ptr [esp+0x14],ebp
	lea ecx,[ebp+0xB1C]
	call ZArray<ZRef<CUIGuildBBS::ENTRYLIST>>::RemoveAll
	mov eax,dword ptr [ebp+0xB24]
	lea esi,[ebp+0xB20]
	xor ebx,ebx
	cmp eax,ebx
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+4]
	cmp ecx,ebx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+4],ebx

 Block5:
	mov edi,dword ptr [esp+0x38]
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,ebx
	je Block12

 Block6:
	push 0x28
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebx
	je Block8

 Block7:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CUIGuildBBS::ENTRYLIST::`vftable'
	mov dword ptr [eax+0x10],ebx
	jmp Block9

 Block8:
	xor eax,eax

 Block9:
	push eax
	mov ecx,esi
	call ZRef<CUIGuildBBS::ENTRYLIST>::op_assign_ptr
	mov esi,dword ptr [ebp+0xB24]
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esi+0xC],eax
	mov esi,dword ptr [ebp+0xB24]
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esi+0x14],eax
	lea eax,[esp+0x38]
	push eax
	mov ecx,edi
	call CInPacket::DecodeStr
	mov ecx,dword ptr [ebp+0xB24]
	push eax
	add ecx,0x10
	mov dword ptr [esp+0x34],ebx
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block11

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block11:
	mov eax,dword ptr [ebp+0xB24]
	push 8
	add eax,0x18
	push eax
	mov ecx,edi
	call CInPacket::DecodeBuffer
	mov esi,dword ptr [ebp+0xB24]
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esi+0x24],eax
	mov esi,dword ptr [ebp+0xB24]
	mov ecx,edi
	call CInPacket::Decode4
	mov dword ptr [esi+0x20],eax

 Block12:
	mov ecx,edi
	call CInPacket::Decode4
	mov esi,eax
	cmp esi,ebx
	mov dword ptr [esp+0x1C],esi
	jle Block32

 Block13:
	mov ecx,edi
	call CInPacket::Decode4
	cmp eax,ebx
	jle Block32

 Block14:
	mov dword ptr [esp+0x38],eax
	jmp Block16

 Block15:
	xor ebx,ebx

 Block16:
	push 0x28
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	cmp eax,ebx
	je Block18

 Block17:
	xor ecx,ecx
	mov dword ptr [eax+4],ecx
	mov dword ptr [eax+8],ecx
	int 3// TODO: 	mov dword ptr [eax],offset CUIGuildBBS::ENTRYLIST::`vftable'
	mov dword ptr [eax+0x10],ebx
	mov esi,eax
	jmp Block19

 Block18:
	xor esi,esi

 Block19:
	mov dword ptr [esp+0x24],esi
	cmp esi,ebx
	je Block21

 Block20:
	lea ecx,[esi+4]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block21:
	mov ecx,edi
	mov dword ptr [esp+0x30],1
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi+0xC],eax
	call CInPacket::Decode4
	lea edx,[esp+0x18]
	push edx
	mov ecx,edi
	mov dword ptr [esi+0x14],eax
	call CInPacket::DecodeStr
	push eax
	lea ecx,[esi+0x10]
	mov byte ptr [esp+0x34],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x30],1
	cmp eax,ebx
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	push 8
	lea eax,[esi+0x18]
	push eax
	mov ecx,edi
	call CInPacket::DecodeBuffer
	mov ecx,edi
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi+0x24],eax
	call CInPacket::Decode4
	push 0xFFFFFFFF
	lea ecx,[ebp+0xB1C]
	mov dword ptr [esi+0x20],eax
	call ZArray<ZRef<CUIGuildBBS::ENTRYLIST>>::InsertBefore
	lea ebx,[esi+4]
	push ebx
	mov ebp,eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov eax,dword ptr [ebp+4]
	test eax,eax
	je Block28

 Block24:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block27

 Block25:
	mov eax,dword ptr [ebp+4]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [ebp+4]
	test ecx,ecx
	je Block27

 Block26:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block27:
	mov dword ptr [ebp+4],0

 Block28:
	push ebx
	mov dword ptr [ebp+4],esi
	mov dword ptr [esp+0x34],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block30

 Block29:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block30:
	sub dword ptr [esp+0x38],1
	mov ebp,dword ptr [esp+0x14]
	mov dword ptr [esp+0x24],0
	jne Block15

 Block31:
	mov esi,dword ptr [esp+0x1C]

 Block32:
	lea ecx,[esi-1]
	mov eax,0x66666667
	imul ecx
	sar edx,2
	push 1
	mov ecx,edx
	shr ecx,0x1F
	push 1
	lea ebx,[edx+ecx+1]
	mov ecx,dword ptr [ebp+0xBD0]
	push 0xA
	push ebx
	call CCtrlSelector::SetSelectorStart
	xor esi,esi
	test ebx,ebx
	jle Block38

 Block33:
	mov dword ptr [esp+0x38],0
	lea edx,[esp+0x1C]
	push 0x1A15
	push edx
	mov dword ptr [esp+0x38],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	lea edi,[esi+1]
	push edi
	push eax
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x3C],4
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x30],3
	test eax,eax
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	push ecx
	mov ecx,esp
	lea edx,[esp+0x3C]
	mov dword ptr [esp+0x1C],esp
	push edx
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	mov ecx,dword ptr [ebp+0xBD0]
	push esi
	call CCtrlSelector::SetSelector
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	test eax,eax
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	mov esi,edi
	cmp esi,ebx
	jl Block33

 Block38:
	mov ecx,dword ptr [ebp+0xBD0]
	call CCtrlSelector::SetSelectorEnd
	mov eax,dword ptr [ebp+0xB18]
	mov ecx,dword ptr [ebp+0xBD0]
	push eax
	call CCtrlSelector::SetCurSel
	push 0
	mov ecx,ebp
	call CWnd::InvalidateRect
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 4
}
}
// CUIGuildBBS::GetRTTI
__SUB_CLASS_THIS0(003C3EC0, __thiscall, 70354,  CUIGuildBBS, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIGuildBBS::ms_RTTI_CUIGuildBBS
	ret
}
}
// CUIGuildBBS::ENTRYLIST::~ENTRYLIST
_SUB_EXCEPTION_HANDLER(3C37A0)
__SUB_CLASS_THIS0(003C37A0, __thiscall, 70514,  CUIGuildBBS::ENTRYLIST, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C37A0
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
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

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
// CUIGuildBBS::OnChildNotify
__SUB_CLASS_THIS(003C38E0, __thiscall, 70342,  CUIGuildBBS, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	push ebx
	mov ebx,dword ptr [esp+8]
	push esi
	mov eax,ebx
	sub eax,0x7E3
	push edi
	mov edi,dword ptr [esp+0x14]
	mov esi,ecx
	je Block8

 Block1:
	sub eax,1
	je Block5

 Block2:
	sub eax,1
	jne Block12

 Block3:
	cmp edi,0x320
	jne Block12

 Block4:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esi+0xB18],eax
	call CUIGuildBBS::SendLoadListRequest
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebx
	ret 0xC

 Block5:
	cmp edi,0x12C
	jb Block12

 Block6:
	cmp edi,0x130
	ja Block12

 Block7:
	mov ecx,dword ptr [esi+0xBC8]
	mov edx,dword ptr [ecx+0x38]
	mov ecx,dword ptr [esi+0xBB0]
	push edx
	call CCtrlMLEdit::SetCurScrollLine
	jmp Block11

 Block8:
	cmp edi,0x12C
	jb Block12

 Block9:
	cmp edi,0x130
	ja Block12

 Block10:
	call CUIGuildBBS::ShowDeleteCommentButtons

 Block11:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block12:
	cmp edi,0x64
	jne Block14

 Block13:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x20]
	push ebx
	mov ecx,esi
	call edx

 Block14:
	pop edi
	pop esi
	pop ebx
	ret 0xC
}
}
// CUIGuildBBS::OnCreate
_SUB_EXCEPTION_HANDLER(3C69F0)
__SUB_CLASS_THIS(003C69F0, __thiscall, 70335,  CUIGuildBBS, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C69F0
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
	mov ebp,ecx
	mov eax,dword ptr [esp+0x80]
	push eax
	call CUIWnd::OnCreate_0
	mov ecx,ebp
	call CUIGuildBBS::LoadViewTextBox
	push 0x74
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x80],eax
	mov dword ptr [esp+0x78],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,eax
	call CCtrlScrollBar::_ctor_default
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x78],ebx
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
	mov eax,dword ptr [ebp+0xBC0]
	mov dword ptr [ebp+0xBC0],esi
	mov dword ptr [esp+0x24],eax
	test eax,eax
	je Block9

 Block8:
	push 0
	lea ecx,[esp+0x24]
	call ZRef<CCtrlScrollBar>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [ebp+0xBC0]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push 0
	push 0x7D
	push 0x146
	push 0x2C6
	push 3
	mov edi,1
	push edi
	push 0x7E3
	push ebp
	call eax
	mov eax,dword ptr [ebp+0xBC0]
	push 0x68
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [eax+0x34],0x12C
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x80],eax
	mov dword ptr [esp+0x78],edi
	test eax,eax
	je Block12

 Block10:
	mov ecx,eax
	call CCtrlSelector::_ctor_default
	jmp Block13

 Block11:
	xor esi,esi
	jmp Block7

 Block12:
	xor eax,eax

 Block13:
	mov dword ptr [esp+0x78],ebx
	test eax,eax
	je Block23

 Block14:
	add eax,8
	je Block23

 Block15:
	lea esi,[eax-8]
	xor ebx,ebx
	cmp esi,ebx
	je Block17

 Block16:
	lea ecx,[esi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block17:
	mov eax,dword ptr [ebp+0xBD0]
	mov dword ptr [ebp+0xBD0],esi
	mov dword ptr [esp+0x24],eax
	cmp eax,ebx
	je Block19

 Block18:
	push ebx
	lea ecx,[esp+0x24]
	call ZRef<CCtrlSelector>::_ReleaseRaw

 Block19:
	mov ecx,dword ptr [ebp+0xBD0]
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x28]
	push ebx
	push 0x140
	push 0x1C2
	push 0x28
	push 0x7E5
	push ebp
	call eax
	mov ecx,dword ptr [ebp+0xBD0]
	push 0xFF000000
	push 0xFF64B4F0
	push ebx
	call CCtrlSelector::SetSelectorAttr
	mov dword ptr [esp+0x5C],ebx
	mov dword ptr [esp+0x50],edi
	mov dword ptr [esp+0x54],ebx
	mov dword ptr [esp+0x58],ebx
	lea ecx,[esp+0x80]
	push 0xEB4
	push ecx
	mov dword ptr [esp+0x80],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x60]
	mov byte ptr [esp+0x7C],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x80]
	mov byte ptr [esp+0x78],2
	cmp eax,ebx
	je Block21

 Block20:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block21:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x80],eax
	mov byte ptr [esp+0x78],4
	cmp eax,ebx
	je Block24

 Block22:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block25

 Block23:
	xor esi,esi
	xor ebx,ebx
	jmp Block17

 Block24:
	xor eax,eax

 Block25:
	mov byte ptr [esp+0x78],2
	cmp eax,ebx
	je Block33

 Block26:
	add eax,8
	cmp eax,ebx
	je Block33

 Block27:
	lea esi,[eax-8]
	cmp esi,ebx
	je Block29

 Block28:
	lea edx,[esi+0xC]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block29:
	mov eax,dword ptr [ebp+0xB90]
	mov dword ptr [ebp+0xB90],esi
	mov dword ptr [esp+0x24],eax
	cmp eax,ebx
	je Block31

 Block30:
	push ebx
	lea ecx,[esp+0x24]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block31:
	mov ecx,dword ptr [ebp+0xB90]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x50]
	push edx
	push edi
	push 0x1F5
	push 0x2A8
	push 0x7DD
	push ebp
	call eax
	mov eax,dword ptr [ebp+0xB90]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x24]
	push edi
	call eax
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
	jge Block34

 Block32:
	push eax
	call _com_issue_error

 Block33:
	xor esi,esi
	jmp Block29

 Block34:
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x7C],5
	call esi
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	push 0
	push 0
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x2C]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x94],esp
	push 0xEB5
	mov bl,6
	push ecx
	mov byte ptr [esp+0x94],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x8C],7
	jne Block38

 Block37:
	push 0x80004003
	call _com_issue_error

 Block38:
	lea edx,[esp+0x54]
	mov byte ptr [esp+0x8C],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x80],8
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xBD8]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block41

 Block39:
	cmp eax,0x80004002
	je Block41

 Block40:
	push eax
	call _com_issue_error

 Block41:
	cmp word ptr [esp+0x40],8
	mov edi,dword ptr [ZImports::_VariantClear]
	mov byte ptr [esp+0x78],bl
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x40],ax
	mov eax,dword ptr [esp+0x48]
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x40]
	push ecx
	call edi

 Block45:
	mov ebx,8
	mov byte ptr [esp+0x78],5
	cmp word ptr [esp+0x20],bx
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea eax,[esp+0x20]
	push eax
	call edi

 Block49:
	mov byte ptr [esp+0x78],2
	cmp word ptr [esp+0x30],bx
	jne Block52

 Block50:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea edx,[esp+0x30]
	push edx
	call edi

 Block53:
	lea eax,[esp+0x20]
	push eax
	call esi
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block55

 Block54:
	push eax
	call _com_issue_error

 Block55:
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x7C],9
	call esi
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block57

 Block56:
	push eax
	call _com_issue_error

 Block57:
	push 0
	push 0
	lea ecx,[esp+0x28]
	push ecx
	lea edx,[esp+0x3C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x94],esp
	push 0xEB6
	mov bl,0xA
	push eax
	mov byte ptr [esp+0x94],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x8C],0xB
	jne Block59

 Block58:
	push 0x80004003
	call _com_issue_error

 Block59:
	lea ecx,[esp+0x54]
	push ecx
	mov byte ptr [esp+0x90],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x80],0xC
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xBDC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block62

 Block60:
	cmp eax,0x80004002
	je Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x78],bl
	jne Block65

 Block63:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea eax,[esp+0x40]
	push eax
	call edi

 Block66:
	mov ebx,8
	mov byte ptr [esp+0x78],9
	cmp word ptr [esp+0x30],bx
	jne Block69

 Block67:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea edx,[esp+0x30]
	push edx
	call edi

 Block70:
	mov byte ptr [esp+0x78],2
	cmp word ptr [esp+0x20],bx
	jne Block73

 Block71:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea ecx,[esp+0x20]
	push ecx
	call edi

 Block74:
	lea edx,[esp+0x20]
	push edx
	call esi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block76

 Block75:
	push eax
	call _com_issue_error

 Block76:
	lea ecx,[esp+0x30]
	push ecx
	mov byte ptr [esp+0x7C],0xD
	call esi
	lea edx,[esp+0x30]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block78

 Block77:
	push eax
	call _com_issue_error

 Block78:
	push 0
	push 0
	lea eax,[esp+0x28]
	push eax
	lea ecx,[esp+0x3C]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x94],esp
	push 0xEB7
	mov bl,0xE
	push edx
	mov byte ptr [esp+0x94],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x8C],0xF
	jne Block80

 Block79:
	push 0x80004003
	call _com_issue_error

 Block80:
	lea eax,[esp+0x54]
	mov byte ptr [esp+0x8C],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x80],0x10
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+0xBE0]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block83

 Block81:
	cmp eax,0x80004002
	je Block83

 Block82:
	push eax
	call _com_issue_error

 Block83:
	mov esi,8
	mov byte ptr [esp+0x78],bl
	cmp word ptr [esp+0x40],si
	jne Block86

 Block84:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea edx,[esp+0x40]
	push edx
	call edi

 Block87:
	mov byte ptr [esp+0x78],0xD
	cmp word ptr [esp+0x30],si
	jne Block90

 Block88:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea ecx,[esp+0x30]
	push ecx
	call edi

 Block91:
	mov byte ptr [esp+0x78],2
	cmp word ptr [esp+0x20],si
	jne Block94

 Block92:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea eax,[esp+0x20]
	push eax
	call edi

 Block95:
	mov dword ptr [esp+0x14],0
	lea ebx,[ebp+0xBE4]

 Block96:
	mov dword ptr [esp+0x80],0
	lea ecx,[esp+0x18]
	push 0xEC8
	push ecx
	mov byte ptr [esp+0x80],0x11
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x88]
	push eax
	mov byte ptr [esp+0x84],0x12
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x78],0x11
	test eax,eax
	je Block98

 Block97:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block98:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x40]
	push ecx
	call esi
	lea edx,[esp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block32

 Block99:
	lea eax,[esp+0x30]
	push eax
	mov byte ptr [esp+0x7C],0x13
	call esi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block32

 Block100:
	push 0
	push 0
	lea edx,[esp+0x48]
	push edx
	mov edx,dword ptr [esp+0x8C]
	lea eax,[esp+0x3C]
	push eax
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	push edx
	mov byte ptr [esp+0x90],0x14
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x8C],0x15
	je Block37

 Block101:
	lea eax,[esp+0x74]
	mov byte ptr [esp+0x8C],0x14
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x80],0x16
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block109

 Block102:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x1C]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [ebx]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [esp+0x1C]
	mov edi,ecx
	test eax,eax
	je Block104

 Block103:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block104:
	mov dword ptr [ebx],edi
	test esi,esi
	jge Block106

 Block105:
	cmp esi,0x80004002
	jne Block134

 Block106:
	mov esi,8
	mov byte ptr [esp+0x78],0x14
	cmp word ptr [esp+0x60],si
	jne Block111

 Block107:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block112

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block112

 Block109:
	mov eax,dword ptr [ebx]
	test eax,eax
	je Block106

 Block110:
	mov dword ptr [ebx],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block106

 Block111:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block112:
	mov byte ptr [esp+0x78],0x13
	cmp word ptr [esp+0x30],si
	jne Block115

 Block113:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block116

 Block114:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block116

 Block115:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block116:
	mov byte ptr [esp+0x78],0x11
	cmp word ptr [esp+0x40],si
	jne Block119

 Block117:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block120:
	mov eax,dword ptr [esp+0x80]
	mov byte ptr [esp+0x78],2
	test eax,eax
	je Block122

 Block121:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block122:
	mov eax,dword ptr [esp+0x14]
	inc eax
	add ebx,4
	cmp eax,7
	mov dword ptr [esp+0x14],eax
	jl Block96

 Block123:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	call esi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block125

 Block124:
	push eax
	call _com_issue_error

 Block125:
	lea edx,[esp+0x40]
	push edx
	mov byte ptr [esp+0x7C],0x17
	call esi
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block127

 Block126:
	push eax
	call _com_issue_error

 Block127:
	push 0
	push 0
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[esp+0x4C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x94],esp
	push 0xEB8
	mov bl,0x18
	push eax
	mov byte ptr [esp+0x94],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x8C],0x19
	jne Block129

 Block128:
	push 0x80004003
	call _com_issue_error

 Block129:
	lea ecx,[esp+0x74]
	push ecx
	mov byte ptr [esp+0x90],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x80],0x1A
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block135

 Block130:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[esp+0x80]
	push ecx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	call edx
	mov esi,eax
	xor eax,eax
	test esi,esi
	setl al
	dec eax
	and eax,dword ptr [esp+0x80]
	mov edi,eax
	mov eax,dword ptr [ebp+0xC00]
	test eax,eax
	je Block132

 Block131:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block132:
	mov dword ptr [ebp+0xC00],edi
	test esi,esi
	jge Block137

 Block133:
	cmp esi,0x80004002
	je Block137

 Block134:
	push esi
	call _com_issue_error

 Block135:
	mov eax,dword ptr [ebp+0xC00]
	test eax,eax
	je Block137

 Block136:
	mov dword ptr [ebp+0xC00],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block137:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x78],bl
	jne Block140

 Block138:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block141

 Block139:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block141

 Block140:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block141:
	mov esi,8
	mov byte ptr [esp+0x78],0x17
	cmp word ptr [esp+0x40],si
	jne Block144

 Block142:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block145

 Block143:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block145

 Block144:
	lea eax,[esp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block145:
	mov byte ptr [esp+0x78],2
	cmp word ptr [esp+0x30],si
	jne Block148

 Block146:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block149

 Block147:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block149

 Block148:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block149:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	add ecx,0x40A0
	call ZArray<CUIWnd *>::InsertBefore
	mov ecx,ebp
	mov dword ptr [eax],ebp
	call CUIGuildBBS::SendLoadListRequest
	mov eax,dword ptr [esp+0x5C]
	mov dword ptr [esp+0x78],0xFFFFFFFF
	test eax,eax
	je Block151

 Block150:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block151:
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x68
	ret 4
}
}
// CUIGuildBBS::CUIGuildBBS
_SUB_EXCEPTION_HANDLER(3C3CB0)
__SUB_CLASS_THIS0(003C3CB0, __thiscall, 70332,  CUIGuildBBS, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C3CB0
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
	mov dword ptr [esp+0x14],esi
	xor edi,edi
	push edi
	push edi
	push 1
	push 6
	push 0x2CA
	push 3
	push 0x27
	call CUIWnd::_ctor_0
	lea eax,[esi+0xB08]
	mov dword ptr [esp+0x20],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0xB08]
	mov dword ptr [TSingleton<CUIGuildBBS>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIGuildBBS>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIGuildBBS::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIGuildBBS::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIGuildBBS::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax],edi
	mov dword ptr [esi+0xB14],edi
	mov dword ptr [esi+0xB18],edi
	mov dword ptr [esi+0xB1C],edi
	mov dword ptr [esi+0xB24],edi
	mov dword ptr [esi+0xB28],edi
	mov dword ptr [esi+0xB2C],edi
	mov dword ptr [esi+0xB38],edi
	mov dword ptr [esi+0xB40],edi
	mov dword ptr [esi+0xB48],edi
	mov dword ptr [esi+0xB50],edi
	mov dword ptr [esi+0xB58],edi
	mov dword ptr [esi+0xB60],edi
	mov dword ptr [esi+0xB68],edi
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push offset ZRef<CCtrlButton>::_ctor_default
	push 4
	push 8
	lea edx,[esi+0xB6C]
	push edx
	mov byte ptr [esp+0x34],0xB
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xB90],edi
	mov dword ptr [esi+0xB98],edi
	mov dword ptr [esi+0xBA0],edi
	mov dword ptr [esi+0xBA8],edi
	mov dword ptr [esi+0xBB0],edi
	mov dword ptr [esi+0xBB8],edi
	mov dword ptr [esi+0xBC0],edi
	mov dword ptr [esi+0xBC8],edi
	mov dword ptr [esi+0xBD0],edi
	mov dword ptr [esi+0xBD4],edi
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 3
	push 4
	lea eax,[esi+0xBD8]
	push eax
	mov byte ptr [esp+0x34],0x16
	call __eh_vector_ctor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 7
	push 4
	lea ecx,[esi+0xBE4]
	push ecx
	mov byte ptr [esp+0x34],0x17
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xC00],edi
	mov dword ptr [esi+0xC04],edi
	mov byte ptr [esp+0x20],0x1A
	lea edx,[esi+0xAFC]
	push edx
	mov edx,dword ptr [esi+0xAD0]
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push edx
	call CConfig::GetUIWndPos
	mov eax,dword ptr [esp+0xC]
	cmp eax,edi
	jge Block5

 Block4:
	xor eax,eax
	jmp Block7

 Block5:
	cmp eax,0x42
	jle Block8

 Block6:
	mov eax,0x42

 Block7:
	mov dword ptr [esp+0xC],eax

 Block8:
	mov ecx,dword ptr [esp+0x10]
	cmp ecx,edi
	jge Block10

 Block9:
	xor ecx,ecx
	jmp Block12

 Block10:
	cmp ecx,0x4A
	jle Block13

 Block11:
	mov ecx,0x4A

 Block12:
	mov dword ptr [esp+0x10],ecx

 Block13:
	push edi
	push 1
	push edi
	push 1
	push 0xA
	push 0x20E
	push 0x2DE
	push ecx
	push eax
	mov ecx,esi
	call CWnd::CreateWnd
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
// CUIGuildBBS::CURENTRY::~CURENTRY
_SUB_EXCEPTION_HANDLER(3C4A80)
__SUB_CLASS_THIS0(003C4A80, __thiscall, 70445,  CUIGuildBBS::CURENTRY, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C4A80
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
	lea ecx,[esi+0x28]
	mov dword ptr [esp+0x14],2
	call ZArray<ZRef<CUIGuildBBS::COMMENT>>::RemoveAll
	mov eax,dword ptr [esi+0x20]
	mov byte ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0x1C]
	mov byte ptr [esp+0x14],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIGuildBBS::OnMouseMove
__SUB_CLASS_THIS(003C2E40, __thiscall, 70338,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	xor eax,eax
	ret 8
}
}
// CUIGuildBBS::COMMENT::~COMMENT
_SUB_EXCEPTION_HANDLER(3C3800)
__SUB_CLASS_THIS0(003C3800, __thiscall, 70378,  CUIGuildBBS::COMMENT, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C3800
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
	mov eax,dword ptr [esi+0x14]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

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
// CUIGuildBBS::~CUIGuildBBS
_SUB_EXCEPTION_HANDLER(3C3F10)
__SUB_CLASS_THIS0(003C3F10, __thiscall, 70334,  CUIGuildBBS, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C3F10
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIGuildBBS::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIGuildBBS::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIGuildBBS::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xC04]
	mov dword ptr [esp+0x20],0x19
	call ZArray<long>::RemoveAll
	mov eax,dword ptr [esi+0xC00]
	xor ebx,ebx
	mov byte ptr [esp+0x20],0x18
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 7
	push 4
	lea eax,[esi+0xBE4]
	push eax
	mov byte ptr [esp+0x30],0x17
	call __eh_vector_dtor_iterator
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 3
	push 4
	lea ecx,[esi+0xBD8]
	push ecx
	mov byte ptr [esp+0x30],0x16
	call __eh_vector_dtor_iterator
	mov eax,dword ptr [esi+0xBD4]
	mov byte ptr [esp+0x20],0x15
	cmp eax,ebx
	je Block4

 Block3:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block4:
	lea edi,[esi+0xBCC]
	mov byte ptr [esp+0x20],0x14
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlSelector>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0xBC4]
	mov byte ptr [esp+0x20],0x13
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0xBBC]
	mov byte ptr [esp+0x20],0x12
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlScrollBar>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0xBB4]
	mov byte ptr [esp+0x20],0x11
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea edi,[esi+0xBAC]
	mov byte ptr [esp+0x20],0x10
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlMLEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	lea edi,[esi+0xBA4]
	mov byte ptr [esp+0x20],0xF
	cmp dword ptr [edi+4],ebx
	je Block16

 Block15:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block16:
	lea edi,[esi+0xB9C]
	mov byte ptr [esp+0x20],0xE
	cmp dword ptr [edi+4],ebx
	je Block18

 Block17:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block18:
	lea edi,[esi+0xB94]
	mov byte ptr [esp+0x20],0xD
	cmp dword ptr [edi+4],ebx
	je Block20

 Block19:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block20:
	lea edi,[esi+0xB8C]
	mov byte ptr [esp+0x20],0xC
	cmp dword ptr [edi+4],ebx
	je Block22

 Block21:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block22:
	push offset ZRef<CCtrlButton>::~ZRef<CCtrlButton>
	push 4
	push 8
	lea ecx,[esi+0xB6C]
	push ecx
	mov byte ptr [esp+0x30],0xB
	call __eh_vector_dtor_iterator
	lea edi,[esi+0xB64]
	mov byte ptr [esp+0x20],0xA
	cmp dword ptr [edi+4],ebx
	je Block24

 Block23:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block24:
	lea edi,[esi+0xB5C]
	mov byte ptr [esp+0x20],9
	cmp dword ptr [edi+4],ebx
	je Block26

 Block25:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block26:
	lea edi,[esi+0xB54]
	mov byte ptr [esp+0x20],8
	cmp dword ptr [edi+4],ebx
	je Block28

 Block27:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block28:
	lea edi,[esi+0xB4C]
	mov byte ptr [esp+0x20],7
	cmp dword ptr [edi+4],ebx
	je Block30

 Block29:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block30:
	lea edi,[esi+0xB44]
	mov byte ptr [esp+0x20],6
	cmp dword ptr [edi+4],ebx
	je Block32

 Block31:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block32:
	lea edi,[esi+0xB3C]
	mov byte ptr [esp+0x20],5
	cmp dword ptr [edi+4],ebx
	je Block34

 Block33:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block34:
	lea edi,[esi+0xB34]
	mov byte ptr [esp+0x20],4
	cmp dword ptr [edi+4],ebx
	je Block36

 Block35:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block36:
	mov eax,dword ptr [esi+0xB24]
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0x20],3
	cmp eax,ebx
	je Block41

 Block37:
	add eax,4
	push eax
	call ebp
	test eax,eax
	jne Block40

 Block38:
	mov eax,dword ptr [esi+0xB24]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [esi+0xB24]
	cmp ecx,ebx
	je Block40

 Block39:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block40:
	mov dword ptr [esi+0xB24],ebx

 Block41:
	lea ecx,[esi+0xB1C]
	mov byte ptr [esp+0x20],2
	call ZArray<ZRef<CUIGuildBBS::ENTRYLIST>>::RemoveAll
	mov eax,dword ptr [esi+0xB14]
	mov byte ptr [esp+0x20],1
	cmp eax,ebx
	je Block46

 Block42:
	add eax,4
	push eax
	call ebp
	test eax,eax
	jne Block45

 Block43:
	mov eax,dword ptr [esi+0xB14]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [esi+0xB14]
	cmp ecx,ebx
	je Block45

 Block44:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block45:
	mov dword ptr [esi+0xB14],ebx

 Block46:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIGuildBBS>::ms_pInstance],ebx
	mov dword ptr [esp+0x20],0xFFFFFFFF
	call CUIWnd::~CUIWnd
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
// CUIGuildBBS::OnKey
__SUB_CLASS_THIS(003C2E30, __thiscall, 70336,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	ret 8
}
}
// CUIGuildBBS::DrawList
_SUB_EXCEPTION_HANDLER(3C7550)
__SUB_CLASS_THIS(003C7550, __thiscall, 70350,  CUIGuildBBS, void, ZRef<CUIGuildBBS::ENTRYLIST>&, _x_com_ptr<IWzCanvas>&, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C7550
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x58
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x54],eax
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x6C]
	mov dword ptr fs:[0],eax
	mov ebp,dword ptr [esp+0x7C]
	mov eax,dword ptr [esp+0x80]
	mov ebx,ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	xor edi,edi
	mov dword ptr [esp+0x50],ebx
	mov dword ptr [esp+0x5C],ebp
	mov dword ptr [esp+0x3C],eax
	mov dword ptr [esp+0x54],ecx
	mov dword ptr [esp+0x40],edi
	mov eax,dword ptr [ebp+4]
	mov dword ptr [esp+0x74],edi
	cmp dword ptr [eax+0xC],edi
	je Block2

 Block1:
	mov eax,dword ptr [eax+0xC]
	push 0xA
	lea edx,[esp+0x64]
	push edx
	push eax
	call _itoa
	add esp,0xC
	lea ecx,[esp+0x60]
	push ecx
	jmp Block3

 Block2:
	push offset _S_NOTICE

 Block3:
	lea ecx,[esp+0x44]
	call ZXString<char>::AssignCStr
	mov dword ptr [esp+0x58],edi
	mov eax,dword ptr [ebp+4]
	mov byte ptr [esp+0x74],1
	cmp dword ptr [eax+0x20],edi
	je Block12

 Block4:
	mov eax,dword ptr [eax+0x20]
	push 0xA
	lea edx,[esp+0x64]
	push edx
	push eax
	call _itoa
	lea eax,[esp+0x6C]
	add esp,0xC
	mov dword ptr [esp+0x14],edi
	lea edx,[eax+1]

 Block5:
	mov cl,byte ptr [eax]
	inc eax
	test cl,cl
	jne Block5

 Block6:
	sub eax,edx
	mov esi,eax
	push esi
	lea ecx,[esp+0x64]
	push ecx
	push edi
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::GetBuffer
	push eax
	call _memcpy
	add esp,0xC
	push esi
	lea ecx,[esp+0x18]
	call ZXString<char>::ReleaseBuffer
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x2C]
	push offset _S___34
	push eax
	mov byte ptr [esp+0x80],2
	call __op_add_char_char
	add esp,0xC
	push offset _S___33
	lea ecx,[esp+0x4C]
	push ecx
	mov ecx,eax
	mov byte ptr [esp+0x7C],3
	call ZXString<char>::op_add_0
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x78],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x74],3
	cmp eax,edi
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x74],2
	cmp eax,edi
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x74],1
	cmp eax,edi
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block12:
	lea edx,[esp+0x4C]
	push 1
	push edx
	call get_basic_font
	add esp,8
	mov eax,dword ptr [ebp+4]
	mov eax,dword ptr [eax+0xC]
	mov byte ptr [esp+0x74],5
	cmp eax,dword ptr [ebx+0xB0C]
	jne Block20

 Block13:
	lea ecx,[esp+0x28]
	push 0x3D
	push ecx
	call get_basic_font
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x54]
	add esp,8
	cmp esi,eax
	je Block18

 Block14:
	mov dword ptr [esp+0x4C],eax
	cmp eax,edi
	je Block16

 Block15:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block16:
	cmp esi,edi
	je Block18

 Block17:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block18:
	mov eax,dword ptr [esp+0x28]
	cmp eax,edi
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block22

 Block21:
	push eax
	call _com_issue_error

 Block22:
	lea edx,[esp+0x2C]
	push edx
	push edi
	push 1
	lea ecx,[esp+0x20]
	mov byte ptr [esp+0x80],6
	mov dword ptr [esp+0x20],edi
	call ZXString<char>::GetBuffer
	mov cl,byte ptr [_S___2]
	mov byte ptr [eax],cl
	push 1
	lea ecx,[esp+0x1C]
	call ZXString<char>::ReleaseBuffer
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x50]
	push eax
	lea ecx,[esp+0x4C]
	mov byte ptr [esp+0x80],7
	call ZXString<char>::op_add_1
	mov ecx,dword ptr [ebp+4]
	add ecx,0x10
	push ecx
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,eax
	mov byte ptr [esp+0x80],8
	call ZXString<char>::op_add_1
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x68],esp
	mov ecx,esp
	mov bl,9
	push eax
	mov byte ptr [esp+0x80],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x54]
	mov byte ptr [esp+0x7C],0xA
	cmp ecx,edi
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov byte ptr [esp+0x7C],bl
	call IWzFont::CalcTextWidth
	mov esi,eax
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x74],8
	cmp eax,edi
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x74],7
	cmp eax,edi
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x74],6
	cmp eax,edi
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x74],5
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,edi
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push ecx
	call ebx
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	lea eax,[esp+0x2C]
	push eax
	mov byte ptr [esp+0x78],0xB
	call ebx
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	mov ecx,dword ptr [esp+0x4C]
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x30]
	push eax
	push ecx
	push edi
	push 1
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x88],0xC
	mov dword ptr [esp+0x28],edi
	call ZXString<char>::GetBuffer
	mov dl,byte ptr [_S___2]
	push 1
	lea ecx,[esp+0x24]
	mov byte ptr [eax],dl
	call ZXString<char>::ReleaseBuffer
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x58]
	push ecx
	lea ecx,[esp+0x54]
	mov byte ptr [esp+0x88],0xD
	call ZXString<char>::op_add_1
	mov ecx,dword ptr [ebp+4]
	add ecx,0x10
	push ecx
	lea edx,[esp+0x38]
	push edx
	mov ecx,eax
	mov byte ptr [esp+0x88],0xE
	call ZXString<char>::op_add_1
	mov eax,dword ptr [eax]
	push ecx
	mov dword ptr [esp+0x70],esp
	mov ecx,esp
	mov bl,0xF
	push eax
	mov byte ptr [esp+0x88],bl
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x4C]
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x84],0x10
	cmp ecx,edi
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	mov ebp,dword ptr [esp+0x94]
	add ebp,8
	push ebp
	push 0x1A
	mov byte ptr [esp+0x8C],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x74],0xE
	cmp eax,edi
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block42:
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0x74],0xD
	cmp eax,edi
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block44:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x74],0xC
	cmp eax,edi
	je Block46

 Block45:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block46:
	mov ebx,8
	mov byte ptr [esp+0x74],0xB
	cmp word ptr [esp+0x2C],bx
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,edi
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov byte ptr [esp+0x74],5
	cmp word ptr [esp+0x18],bx
	jne Block53

 Block51:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push edx
	call ebx
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x78],0x11
	call ebx
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x30]
	push 5
	push edx
	mov byte ptr [esp+0x84],0x12
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esp+0x64]
	push ecx
	mov dword ptr [esp+0x70],esp
	mov ecx,esp
	mov bl,0x13
	push eax
	mov byte ptr [esp+0x88],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x4C]
	mov ecx,dword ptr [ecx]
	mov byte ptr [esp+0x84],0x14
	cmp ecx,edi
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	push ebp
	add esi,0x1C
	push esi
	mov byte ptr [esp+0x8C],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x74],0x12
	cmp eax,edi
	je Block62

 Block61:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block62:
	mov esi,8
	mov byte ptr [esp+0x74],0x11
	cmp word ptr [esp+0x18],si
	jne Block65

 Block63:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	mov byte ptr [esp+0x74],5
	cmp word ptr [esp+0x2C],si
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,edi
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov dword ptr [esp+0x44],edi
	mov edx,dword ptr [esp+0x5C]
	mov eax,dword ptr [edx+4]
	mov edx,dword ptr [eax+0x14]
	lea ecx,[esp+0x44]
	push ecx
	mov ecx,dword ptr [esp+0x58]
	push edx
	mov byte ptr [esp+0x7C],0x15
	call CWvsContext::GetGuildMemberNameByID
	test eax,eax
	je Block97

 Block71:
	lea eax,[esp+0x14]
	push 1
	push eax
	call get_basic_font
	add esp,8
	push 0x46
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x7C],0x16
	mov dword ptr [esp+0x68],esp
	cmp eax,edi
	je Block73

 Block72:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block73:
	lea ecx,[esp+0x4C]
	push ecx
	call format_string_1
	add esp,0xC
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	mov edx,dword ptr [esp+0x44]
	lea ecx,[esp+0x18]
	push ecx
	push ecx
	mov dword ptr [esp+0x68],esp
	mov ecx,esp
	mov bl,0x17
	push edx
	mov byte ptr [esp+0x80],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x7C],0x18
	cmp ecx,edi
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	mov byte ptr [esp+0x7C],bl
	call IWzFont::CalcTextWidth
	cmp word ptr [esp+0x18],8
	mov esi,eax
	mov byte ptr [esp+0x74],0x16
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block81:
	mov eax,0x42
	sub eax,esi
	cdq
	sub eax,edx
	lea edx,[esp+0x2C]
	mov esi,eax
	push edx
	sar esi,1
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
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
	lea ecx,[esp+0x18]
	mov bl,0x19
	push ecx
	mov byte ptr [esp+0x78],bl
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block85

 Block84:
	push eax
	call _com_issue_error

 Block85:
	mov edx,dword ptr [esp+0x14]
	lea eax,[esp+0x2C]
	push eax
	mov eax,dword ptr [esp+0x48]
	lea ecx,[esp+0x1C]
	push ecx
	push edx
	push ecx
	mov dword ptr [esp+0x70],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0x88],0x1A
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x4C]
	mov ecx,dword ptr [ecx]
	mov byte ptr [esp+0x84],0x1B
	cmp ecx,edi
	jne Block87

 Block86:
	push 0x80004003
	call _com_issue_error

 Block87:
	push ebp
	add esi,0x101
	push esi
	mov byte ptr [esp+0x8C],0x1A
	call IWzCanvas::DrawTextA
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x74],bl
	jne Block90

 Block88:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	cmp eax,edi
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block91:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0x74],0x16
	jne Block94

 Block92:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,edi
	je Block95

 Block93:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block95

 Block94:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block95:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x74],0x15
	cmp eax,edi
	je Block97

 Block96:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block97:
	mov dword ptr [esp+0x14],edi
	mov eax,dword ptr [esp+0x5C]
	mov eax,dword ptr [eax+4]
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [esp+0x54]
	add eax,0x18
	push eax
	mov byte ptr [esp+0x7C],0x1C
	call CUIGuildBBS::FormatShortDate
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x2C]
	push edx
	call esi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block99

 Block98:
	push eax
	call _com_issue_error

 Block99:
	lea ecx,[esp+0x18]
	push ecx
	mov byte ptr [esp+0x78],0x1D
	call esi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block101

 Block100:
	push eax
	call _com_issue_error

 Block101:
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x5C]
	push 2
	push edx
	mov byte ptr [esp+0x84],0x1E
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov dword ptr [esp+0x70],esp
	mov ecx,esp
	mov bl,0x1F
	push esi
	mov byte ptr [esp+0x88],bl
	call _xbstr_t::_ctor_0
	mov eax,dword ptr [esp+0x4C]
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x84],0x20
	cmp ecx,edi
	jne Block103

 Block102:
	push 0x80004003
	call _com_issue_error

 Block103:
	push ebp
	push 0x14C
	mov byte ptr [esp+0x8C],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0x74],0x1E
	cmp eax,edi
	je Block105

 Block104:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block105:
	mov ebx,8
	mov byte ptr [esp+0x74],0x1D
	cmp word ptr [esp+0x18],bx
	jne Block112

 Block106:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	cmp eax,edi
	je Block108

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block108:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block109:
	mov byte ptr [esp+0x74],0x1C
	cmp word ptr [esp+0x2C],bx
	jne Block113

 Block110:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	cmp eax,edi
	je Block114

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block112:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x18]
	push ecx
	call ebp
	jmp Block109

 Block113:
	lea eax,[esp+0x2C]
	push eax
	call ebp

 Block114:
	mov ebx,dword ptr [esp+0x5C]
	mov eax,dword ptr [ebx+4]
	cmp dword ptr [eax+0x24],3
	jge Block118

 Block115:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block117

 Block116:
	push eax
	call _com_issue_error

 Block117:
	mov eax,dword ptr [ebx+4]
	mov ecx,dword ptr [esp+0x50]
	mov eax,dword ptr [eax+0x24]
	mov edx,dword ptr [esp+0x3C]
	mov eax,dword ptr [ecx+eax*4+0xBD8]
	mov ecx,dword ptr [edx]
	mov byte ptr [esp+0x74],0x21
	jmp Block121

 Block118:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block120

 Block119:
	push eax
	call _com_issue_error

 Block120:
	mov eax,dword ptr [ebx+4]
	mov edx,dword ptr [eax+0x24]
	mov eax,dword ptr [esp+0x50]
	mov ecx,dword ptr [esp+0x3C]
	mov eax,dword ptr [eax+edx*4+0xA54]
	mov ecx,dword ptr [ecx]
	mov byte ptr [esp+0x74],0x22

 Block121:
	cmp ecx,edi
	jne Block123

 Block122:
	push 0x80004003
	call _com_issue_error

 Block123:
	lea edx,[esp+0x18]
	push edx
	push eax
	mov eax,dword ptr [esp+0x8C]
	add eax,5
	push eax
	push 0xED
	call IWzCanvas::Copy
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x74],0x1C
	jne Block126

 Block124:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block127

 Block125:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block127

 Block126:
	lea edx,[esp+0x18]
	push edx
	call ebp

 Block127:
	mov byte ptr [esp+0x74],0x15
	cmp esi,edi
	je Block129

 Block128:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block129:
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0x74],5
	cmp eax,edi
	je Block131

 Block130:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block131:
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0x74],1
	cmp eax,edi
	je Block133

 Block132:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block133:
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0x74],0
	cmp eax,edi
	je Block135

 Block134:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block135:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x74],0xFFFFFFFF
	cmp eax,edi
	je Block137

 Block136:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block137:
	mov ecx,dword ptr [esp+0x6C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov ecx,dword ptr [esp+0x54]
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x64
	ret 0xC
}
}
// CUIGuildBBS::FormatDate
__SUB_CLASS_THIS(003C4B00, __thiscall, 70352,  CUIGuildBBS, void, const _FILETIME&, ZXString<char>&) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	sub esp,0x10
	lea eax,[esp]
	push eax
	push ecx
	call dword ptr [ZImports::_FileTimeToSystemTime]
	movzx edx,word ptr [esp+0xA]
	movzx eax,word ptr [esp+8]
	movzx ecx,word ptr [esp+6]
	push edx
	movzx edx,word ptr [esp+6]
	push eax
	movzx eax,word ptr [esp+8]
	push ecx
	mov ecx,dword ptr [esp+0x24]
	push edx
	push eax
	push offset _S_D02D02D02D02D
	push ecx
	call ZXString<char>::Format
	add esp,0x2C
	ret 8
}
}
// CUIGuildBBS::DestroyPreviousControls
__SUB_CLASS_THIS0(003C2E80, __thiscall, 70334,  CUIGuildBBS, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xBA8]
	test ecx,ecx
	je Block2

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx

 Block2:
	mov ecx,dword ptr [esi+0xBB0]
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx

 Block4:
	mov ecx,dword ptr [esi+0xBB8]
	test ecx,ecx
	je Block6

 Block5:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx

 Block6:
	mov ecx,dword ptr [esi+0xB38]
	test ecx,ecx
	je Block8

 Block7:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx

 Block8:
	mov ecx,dword ptr [esi+0xB40]
	test ecx,ecx
	je Block10

 Block9:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx

 Block10:
	mov ecx,dword ptr [esi+0xB58]
	test ecx,ecx
	je Block12

 Block11:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx

 Block12:
	mov ecx,dword ptr [esi+0xB48]
	test ecx,ecx
	je Block14

 Block13:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx

 Block14:
	mov ecx,dword ptr [esi+0xB50]
	test ecx,ecx
	je Block16

 Block15:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx

 Block16:
	mov ecx,dword ptr [esi+0xB60]
	test ecx,ecx
	je Block18

 Block17:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx

 Block18:
	mov ecx,dword ptr [esi+0xB68]
	test ecx,ecx
	je Block20

 Block19:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx

 Block20:
	mov ecx,dword ptr [esi+0xB98]
	test ecx,ecx
	je Block22

 Block21:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx

 Block22:
	mov ecx,dword ptr [esi+0xBA0]
	test ecx,ecx
	je Block24

 Block23:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx

 Block24:
	push ebx
	push edi
	lea edi,[esi+0xB70]
	mov ebx,4
	lea esp,[esp]

 Block25:
	mov ecx,dword ptr [edi]
	test ecx,ecx
	je Block27

 Block26:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx

 Block27:
	add edi,8
	sub ebx,1
	jne Block25

 Block28:
	mov ecx,dword ptr [esi+0xBC8]
	pop edi
	pop ebx
	test ecx,ecx
	je Block30

 Block29:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0xC]
	call edx

 Block30:
	mov dword ptr [esi+0xB08],0
	pop esi
	ret
}
}
// CUIGuildBBS::OnMouseButton
__SUB_CLASS_THIS(003C3980, __thiscall, 70337,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	sub esp,0x20
	cmp dword ptr [esp+0x24],0x201
	push ebx
	mov ebx,ecx
	jne Block23

 Block1:
	cmp dword ptr [ebx+0xB20],0
	push ebp
	mov ebp,dword ptr [esp+0x34]
	push esi
	mov esi,dword ptr [esp+0x3C]
	push edi
	mov edi,0x86
	je Block4

 Block2:
	push esi
	push ebp
	lea eax,[esp+0x18]
	push eax
	mov dword ptr [esp+0x1C],0x16
	mov dword ptr [esp+0x20],0x67
	mov dword ptr [esp+0x24],0x16E
	mov dword ptr [esp+0x28],edi
	call PtInRect
	test eax,eax
	je Block4

 Block3:
	lea ecx,[ebx-4]
	mov dword ptr [ebx+0xB08],0
	call CUIGuildBBS::SendViewEntryRequest
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 0x10

 Block4:
	mov eax,dword ptr [ebx+0xB18]
	test eax,eax
	je Block6

 Block5:
	mov eax,dword ptr [eax-4]

 Block6:
	mov ecx,eax
	shl ecx,5
	push esi
	sub ecx,eax
	push ebp
	lea edx,[esp+0x28]
	add ecx,edi
	push edx
	mov dword ptr [esp+0x2C],0x16
	mov dword ptr [esp+0x30],edi
	mov dword ptr [esp+0x34],0x16E
	mov dword ptr [esp+0x38],ecx
	call PtInRect
	test eax,eax
	je Block11

 Block7:
	lea ecx,[esi-0x86]
	mov eax,0x84210843
	imul ecx
	add edx,ecx
	sar edx,4
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	js Block11

 Block8:
	mov ecx,dword ptr [ebx+0xB18]
	test ecx,ecx
	je Block11

 Block9:
	cmp eax,dword ptr [ecx-4]
	jae Block11

 Block10:
	mov edx,dword ptr [ecx+eax*8+4]
	mov eax,dword ptr [edx+0xC]
	lea ecx,[ebx-4]
	mov dword ptr [ebx+0xB08],eax
	call CUIGuildBBS::SendViewEntryRequest
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 0x10

 Block11:
	xor edi,edi
	mov esi,0x1BE

 Block12:
	mov edx,dword ptr [esp+0x40]
	push edx
	push ebp
	lea eax,[esp+0x18]
	lea ecx,[esi-0x14]
	push eax
	mov dword ptr [esp+0x1C],ecx
	mov dword ptr [esp+0x20],0xF6
	mov dword ptr [esp+0x24],esi
	mov dword ptr [esp+0x28],0x10A
	call PtInRect
	test eax,eax
	jne Block20

 Block13:
	add esi,0x17
	inc edi
	cmp esi,0x203
	jl Block12

 Block14:
	xor edi,edi
	mov esi,0x203
	jmp Block16

 Block16:
	mov eax,dword ptr [ebx+0xC00]
	test eax,eax
	je Block22

 Block17:
	cmp edi,dword ptr [eax-4]
	jae Block22

 Block18:
	mov edx,dword ptr [esp+0x40]
	push edx
	push ebp
	lea eax,[esp+0x18]
	lea ecx,[esi-0x14]
	push eax
	mov dword ptr [esp+0x1C],ecx
	mov dword ptr [esp+0x20],0xF6
	mov dword ptr [esp+0x24],esi
	mov dword ptr [esp+0x28],0x10A
	call PtInRect
	test eax,eax
	jne Block21

 Block19:
	inc edi
	add esi,0x17
	jmp Block16

 Block20:
	push 0
	lea ecx,[ebx-4]
	mov dword ptr [ebx+0xB28],edi
	mov dword ptr [ebx+0xB2C],edi
	call CWnd::InvalidateRect
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 0x10

 Block21:
	mov edx,dword ptr [ebx+0xC00]
	lea ecx,[edi+3]
	mov dword ptr [ebx+0xB28],ecx
	mov eax,dword ptr [edx+edi*4]
	push 0
	lea ecx,[ebx-4]
	mov dword ptr [ebx+0xB2C],eax
	call CWnd::InvalidateRect

 Block22:
	pop edi
	pop esi
	pop ebp

 Block23:
	pop ebx
	add esp,0x20
	ret 0x10
}
}
