#include "regen.hpp"
// LoginWnd_GetUserInfo.ipp
#include "LoginWnd_GetUserInfo.hpp"

// CUIGetUserInfo::Delete
__SUB_CLASS_THIS0(001F22B0, __thiscall, 139671,  CUIGetUserInfo, void) {
__asm {

 Block0:
	mov ecx,dword ptr [ecx+0x100]
	call CLogin::SendCancelGenderPacket
	mov ecx,dword ptr [TSingleton<CUIGetUserInfo>::ms_pInstance]
	test ecx,ecx
	je Block3

 Block1:
	call CWnd::Destroy
	mov eax,dword ptr [TSingleton<CUIGetUserInfo>::ms_pInstance]
	test eax,eax
	je Block3

 Block2:
	lea ecx,[eax+8]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block3:
	ret
}
}
// CUIGetUserInfo::OnCreate
_SUB_EXCEPTION_HANDLER(1F2CD0)
__SUB_CLASS_THIS(001F2CD0, __thiscall, 139672,  CUIGetUserInfo, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F2CD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x84
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x98]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push eax
	call edi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebx,ebx
	add esp,8
	cmp eax,ebx
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x2C]
	push edx
	mov dword ptr [esp+0xA4],ebx
	call edi
	lea eax,[esp+0x2C]
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
	push ebx
	push ebx
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x38]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0xC11
	push eax
	mov byte ptr [esp+0xBC],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xB4],2
	cmp dword ptr [_D_G_RM],ebx
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0xB8],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA8],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xFC]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ebp,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [esp+0xA0],1
	cmp word ptr [esp+0x4C],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	cmp eax,ebx
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x4C]
	push eax
	call ebp

 Block13:
	mov byte ptr [esp+0xA0],bl
	cmp word ptr [esp+0x2C],di
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x2C]
	push edx
	call ebp

 Block17:
	mov dword ptr [esp+0xA0],0xFFFFFFFF
	cmp word ptr [esp+0x3C],di
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x3C],ax
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebx
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x3C]
	push ecx
	call ebp

 Block21:
	lea ecx,[esp+0x5C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	mov dword ptr [esp+0xA0],4
	mov dword ptr [esp+0x80],ebx
	mov dword ptr [esp+0x78],0xFF000000
	mov dword ptr [esp+0x28],ebx
	mov dword ptr [esp+0x20],ebx
	mov dword ptr [esp+0x24],ebx
	push 0x110
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0xA4],5
	mov dword ptr [esp+0x20],ebx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xA0],6
	cmp eax,ebx
	je Block23

 Block22:
	mov ecx,eax
	call CCtrlComboBox::_ctor_default
	jmp Block24

 Block23:
	xor eax,eax

 Block24:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [esp+0xA0],5
	cmp eax,ebx
	je Block38

 Block25:
	add eax,8
	cmp eax,ebx
	je Block38

 Block26:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block28

 Block27:
	lea edx,[edi+0xC]
	push edx
	call ebp

 Block28:
	mov eax,dword ptr [esi+0x16C]
	mov dword ptr [esi+0x16C],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block30

 Block29:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlComboBox>::_ReleaseRaw

 Block30:
	mov ecx,dword ptr [esi+0x16C]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esi+0x114]
	push edx
	push 0x14
	push 0x55
	push 0x62
	push 0x9B
	push ebx
	push 0x1F44
	push esi
	call eax
	lea ecx,[esp+0x14]
	push 0x3C2
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x16C]
	push ebx
	push eax
	mov byte ptr [esp+0xA8],7
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],5
	cmp eax,ebx
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block32:
	lea edx,[esp+0x14]
	push 0x3C3
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esi+0x16C]
	push 1
	push eax
	mov byte ptr [esp+0xA8],8
	call CCtrlComboBox::AddItem
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],5
	cmp eax,ebx
	je Block34

 Block33:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block34:
	lea eax,[esp+0x14]
	push 0xC13
	push eax
	mov dword ptr [esp+0x24],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0xA4],9
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],5
	cmp eax,ebx
	je Block36

 Block35:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block36:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xA0],0xA
	cmp eax,ebx
	je Block39

 Block37:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block40

 Block38:
	xor edi,edi
	jmp Block28

 Block39:
	xor eax,eax

 Block40:
	mov byte ptr [esp+0xA0],5
	cmp eax,ebx
	je Block50

 Block41:
	add eax,8
	cmp eax,ebx
	je Block50

 Block42:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block44

 Block43:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block44:
	mov eax,dword ptr [esi+0x108]
	mov dword ptr [esi+0x108],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block46

 Block45:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block46:
	mov ecx,dword ptr [esi+0x108]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0x96
	push 0xBE
	push 0x1F42
	push esi
	call edx
	lea eax,[esp+0x14]
	push 0xC14
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x2C]
	mov byte ptr [esp+0xA4],0xB
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA0],5
	cmp eax,ebx
	je Block48

 Block47:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block48:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xA0],0xC
	cmp eax,ebx
	je Block51

 Block49:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block52

 Block50:
	xor edi,edi
	jmp Block44

 Block51:
	xor eax,eax

 Block52:
	mov byte ptr [esp+0xA0],5
	cmp eax,ebx
	je Block61

 Block53:
	add eax,8
	cmp eax,ebx
	je Block61

 Block54:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block56

 Block55:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block56:
	mov eax,dword ptr [esi+0x110]
	mov dword ptr [esi+0x110],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block58

 Block57:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block58:
	mov ecx,dword ptr [esi+0x110]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x1C]
	push eax
	push 1
	push 0x96
	push 0x106
	push 0x1F43
	push esi
	call edx
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0xA0],4
	cmp eax,ebx
	je Block60

 Block59:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block60:
	lea ecx,[esp+0x5C]
	mov dword ptr [esp+0xA0],0xFFFFFFFF
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov ecx,dword ptr [esp+0x98]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x90
	ret 4

 Block61:
	xor edi,edi
	jmp Block56
}
}
// CUIGetUserInfo::CUIGetUserInfo
_SUB_EXCEPTION_HANDLER(1F25A0)
__SUB_CLASS_THIS(001F25A0, __thiscall, 139669,  CUIGetUserInfo, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F25A0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0xC],esi
	call CFadeWnd::_ctor_default
	xor ebx,ebx
	lea eax,[esi+0xF4]
	mov dword ptr [esp+0x18],ebx
	cmp eax,ebx
	je Block2

 Block1:
	lea ecx,[eax-0xF4]
	mov dword ptr [TSingleton<CUIGetUserInfo>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIGetUserInfo>::ms_pInstance],ebx

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIGetUserInfo::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIGetUserInfo::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIGetUserInfo::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax],ebx
	mov dword ptr [esi+0xF8],ebx
	mov dword ptr [esi+0xFC],ebx
	mov dword ptr [esi+0x108],ebx
	mov dword ptr [esi+0x110],ebx
	lea ecx,[esi+0x114]
	mov byte ptr [esp+0x18],5
	call CCtrlComboBox::CREATEPARAM::_ctor_default
	mov dword ptr [esi+0x16C],ebx
	mov dword ptr [esi+0x174],ebx
	mov dword ptr [esi+0x17C],ebx
	push ebx
	push ebx
	push ebx
	mov ecx,0xC8
	push ecx
	mov eax,0x163
	push eax
	push ecx
	push eax
	push ecx
	push eax
	push ebx
	push 0xFF
	push ebx
	mov ecx,esi
	mov byte ptr [esp+0x48],9
	mov byte ptr [esi+0x180],bl
	mov dword ptr [esi+0x184],ebx
	call CFadeWnd::SetOption
	push ebx
	push ebx
	push ebx
	push 1
	push 0xA
	push ebx
	push 0x103
	push 0x162
	mov ecx,esi
	call CFadeWnd::CreateFadeWnd
	mov edx,dword ptr [esp+0x20]
	mov dword ptr [esi+0x100],edx
	mov eax,esi
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebx
	add esp,0x10
	ret 4
}
}
// CUIGetUserInfo::Draw
_SUB_EXCEPTION_HANDLER(1F3200)
__SUB_CLASS_THIS(001F3200, __thiscall, 139674,  CUIGetUserInfo, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F3200
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov eax,dword ptr [esp+0x30]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	lea edx,[esp+0x10]
	push edx
	mov dword ptr [esp+0x2C],0
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x10]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	mov esi,dword ptr [esp+0x30]
	mov ecx,dword ptr [edi+0xFC]
	mov byte ptr [esp+0x28],1
	test esi,esi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov ebp,dword ptr [esp+0x10]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x24]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x28]
	push ecx
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x30]
	push 0x19
	push 0x16
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [edx+0x80]
	push esi
	call eax
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	cmp word ptr [esp+0x10],8
	mov byte ptr [esp+0x28],0
	jne Block9

 Block7:
	mov eax,dword ptr [esp+0x18]
	xor ecx,ecx
	mov word ptr [esp+0x10],cx
	test eax,eax
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea edx,[esp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov ecx,edi
	call CUIGetUserInfo::DrawSexTarget
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ecx
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	add esp,0x1C
	ret 4
}
}
// CUIGetUserInfo::~CUIGetUserInfo
_SUB_EXCEPTION_HANDLER(1F2B70)
__SUB_CLASS_THIS0(001F2B70, __thiscall, 139671,  CUIGetUserInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F2B70
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIGetUserInfo::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIGetUserInfo::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIGetUserInfo::`vftable'{for `ZRefCounted'}
	lea edi,[esi+0x178]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],8
	cmp dword ptr [edi+4],ebx
	je Block2

 Block1:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block2:
	lea edi,[esi+0x170]
	mov byte ptr [esp+0x1C],7
	cmp dword ptr [edi+4],ebx
	je Block4

 Block3:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block4:
	lea edi,[esi+0x168]
	mov byte ptr [esp+0x1C],6
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlComboBox>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	mov ecx,dword ptr [esi+0x160]
	cmp ecx,ebx
	je Block8

 Block7:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esi+0x160],ebx

 Block8:
	lea edi,[esi+0x10C]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0x104]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	mov eax,dword ptr [esi+0xFC]
	mov byte ptr [esp+0x1C],2
	cmp eax,ebx
	je Block14

 Block13:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block14:
	mov eax,dword ptr [esi+0xF8]
	mov byte ptr [esp+0x1C],1
	cmp eax,ebx
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIGetUserInfo>::ms_pInstance],ebx
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call CFadeWnd::~CFadeWnd
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
// CUIGetUserInfo::CheckGenderForm
__SUB_CLASS_THIS0(001F2190, __thiscall, 139671,  CUIGetUserInfo, void) {
__asm {

 Block0:
	movzx eax,byte ptr [ecx+0x180]
	mov ecx,dword ptr [ecx+0x100]
	push eax
	call CLogin::SendSetGenderPacket
	ret
}
}
// CUIGetUserInfo::SetSex
__SUB_CLASS_THIS(001F2170, __thiscall, 139679,  CUIGetUserInfo, void, long) {
__asm {

 Block0:
	mov al,byte ptr [esp+4]
	mov byte ptr [ecx+0x180],al
	ret 4
}
}
// CUIGetUserInfo::OnButtonClicked
__SUB_CLASS_THIS(001F21C0, __thiscall, 139673,  CUIGetUserInfo, void, uint32_t) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x184],0
	jne Block11

 Block1:
	mov ecx,dword ptr [esp+8]
	mov eax,ecx
	sub eax,0x1F42
	je Block4

 Block2:
	sub eax,1
	jne Block5

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x38]
	mov ecx,esi
	call edx
	pop esi
	ret 4

 Block4:
	mov ecx,esi
	call CUIGetUserInfo::CheckGenderForm
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop esi
	ret 4

 Block5:
	cmp ecx,1
	jne Block7

 Block6:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push ecx
	mov ecx,esi
	call edx
	pop esi
	ret 4

 Block7:
	cmp ecx,2
	jne Block9

 Block8:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push ecx
	mov ecx,esi
	call edx
	pop esi
	ret 4

 Block9:
	cmp ecx,8
	jne Block11

 Block10:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push ecx
	mov ecx,esi
	call edx

 Block11:
	pop esi
	ret 4
}
}
// CUIGetUserInfo::OnChildNotify
__SUB_CLASS_THIS(001F2240, __thiscall, 139678,  CUIGetUserInfo, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	cmp eax,0x1F44
	jne Block3

 Block1:
	cmp edx,0x258
	jne Block3

 Block2:
	mov eax,dword ptr [esp+0xC]
	push eax
	call CUIGetUserInfo::SetSex
	push 0
	call CWnd::InvalidateRect
	ret 0xC

 Block3:
	cmp edx,0x64
	jne Block5

 Block4:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax

 Block5:
	ret 0xC
}
}
// CUIGetUserInfo::DrawSexTarget
_SUB_EXCEPTION_HANDLER(1F26C0)
__SUB_CLASS_THIS0(001F26C0, __thiscall, 139671,  CUIGetUserInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F26C0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x64
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x78]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebp,ebp
	mov dword ptr [esp+0x14],ebp
	mov dword ptr [esp+0x18],ebp
	cmp byte ptr [esi+0x180],0
	mov dword ptr [esp+0x80],ebp
	jne Block2

 Block1:
	lea eax,[esp+0x20]
	push 0x3C2
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x80],1
	lea ebx,[ebp+1]
	jmp Block3

 Block2:
	lea ecx,[esp+0x1C]
	push 0x3C3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ebx,2
	mov dword ptr [esp+0x80],ebx

 Block3:
	push eax
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x18],ebx
	call ZXString<char>::op_assign
	mov dword ptr [esp+0x80],1
	test bl,2
	je Block6

 Block4:
	mov eax,dword ptr [esp+0x1C]
	and ebx,0xFFFFFFFD
	mov dword ptr [esp+0x14],ebx
	cmp eax,ebp
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov dword ptr [esp+0x80],ebp
	test bl,1
	je Block9

 Block7:
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebp
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	lea edx,[esp+0x20]
	push edx
	mov ecx,esi
	call CWnd::GetCanvas
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x48]
	push eax
	mov byte ptr [esp+0x84],3
	call edi
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	lea edx,[esp+0x38]
	push edx
	mov byte ptr [esp+0x84],4
	call edi
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	push ebp
	push ebp
	lea ecx,[esp+0x50]
	push ecx
	lea edx,[esp+0x44]
	push edx
	push ecx
	mov dword ptr [esp+0x30],esp
	mov ecx,esp
	mov bl,5
	push offset _S_UISTATUSBARIMGBA
	mov byte ptr [esp+0x98],bl
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x94],6
	cmp dword ptr [_D_G_RM],ebp
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea eax,[esp+0x7C]
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebp
	jge Block18

 Block16:
	cmp eax,0x80004002
	je Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	mov esi,8
	mov byte ptr [esp+0x80],9
	cmp word ptr [esp+0x68],si
	jne Block25

 Block19:
	mov eax,dword ptr [esp+0x70]
	xor ecx,ecx
	mov word ptr [esp+0x68],cx
	cmp eax,ebp
	je Block21

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block21:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block22:
	mov byte ptr [esp+0x80],0xA
	cmp word ptr [esp+0x38],si
	jne Block26

 Block23:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebp
	je Block27

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block27

 Block25:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea edx,[esp+0x68]
	push edx
	call ebx
	jmp Block22

 Block26:
	lea ecx,[esp+0x38]
	push ecx
	call ebx

 Block27:
	mov byte ptr [esp+0x80],0xB
	cmp word ptr [esp+0x48],si
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,ebp
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea eax,[esp+0x48]
	push eax
	call ebx

 Block31:
	lea ecx,[esp+0x28]
	push ecx
	call edi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	mov esi,dword ptr [esp+0x20]
	mov byte ptr [esp+0x80],0xC
	cmp esi,ebp
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	mov edx,dword ptr [esp+0x28]
	mov ebp,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x40]
	push ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x48]
	push 0x62
	push 0x9D
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x80]
	push esi
	call eax
	test eax,eax
	jge Block37

 Block36:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block37:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x80],0xB
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[esp+0x28]
	push edx
	call ebx

 Block41:
	lea eax,[esp+0x58]
	push eax
	call edi
	lea ecx,[esp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0x84],0xD
	call edi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	lea ecx,[esp+0x58]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x24]
	push 0
	push eax
	mov byte ptr [esp+0x90],0xE
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esp+0x20]
	push eax
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,0xF
	push edi
	mov byte ptr [esp+0x94],bl
	call _xbstr_t::_ctor_0
	push 0x67
	mov byte ptr [esp+0x94],0x10
	push 0xAA
	mov ecx,esi
	mov byte ptr [esp+0x98],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x80],0xE
	test eax,eax
	je Block47

 Block46:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block47:
	mov ebx,8
	mov byte ptr [esp+0x80],0xD
	cmp word ptr [esp+0x28],bx
	jne Block50

 Block48:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov byte ptr [esp+0x80],0xB
	cmp word ptr [esp+0x58],bx
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov byte ptr [esp+0x80],3
	test ebp,ebp
	je Block57

 Block56:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block57:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [esp+0x84],0
	call ecx
	mov dword ptr [esp+0x80],0xFFFFFFFF
	test edi,edi
	je Block59

 Block58:
	add edi,0xFFFFFFF4
	push edi
	call ZXString<char>::_Release
	add esp,4

 Block59:
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret
}
}
// CUIGetUserInfo::OnPreFadeIn
_SUB_EXCEPTION_HANDLER(1F22E0)
__SUB_CLASS_THIS0(001F22E0, __thiscall, 139671,  CUIGetUserInfo, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1F22E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0xF4],0
	jne Block31

 Block1:
	lea eax,[esp+0x10]
	push 0xC15
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push 0
	push 0xFF
	push 0xFFFFFFFF
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x60],0
	call CWnd::GetLayer
	push 0
	push 0
	lea edx,[esp+0x30]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x68],1
	call CWnd::GetLayer
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x3C],esp
	mov dword ptr [edi],0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x6C],2
	mov dword ptr [esp+0x40],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	mov ecx,edi
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	test eax,eax
	jge Block6

 Block4:
	cmp eax,0x80004002
	je Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov eax,dword ptr [esp+0x2C]
	push 0
	push eax
	lea ecx,[esp+0x38]
	push ecx
	mov byte ptr [esp+0x74],3
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi+0xF8]
	add esp,0x28
	cmp edi,eax
	je Block11

 Block7:
	mov dword ptr [esi+0xF8],eax
	test eax,eax
	je Block9

 Block8:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block9:
	test edi,edi
	je Block11

 Block10:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block11:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x4C],0
	test eax,eax
	je Block15

 Block14:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block15:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x34]
	push eax
	call edi
	lea ecx,[esp+0x34]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block17

 Block16:
	push eax
	call _com_issue_error

 Block17:
	lea edx,[esp+0x24]
	mov bl,4
	push edx
	mov byte ptr [esp+0x50],bl
	call edi
	lea eax,[esp+0x24]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block19

 Block18:
	push eax
	call _com_issue_error

 Block19:
	mov ecx,dword ptr [esi+0xF8]
	mov byte ptr [esp+0x4C],5
	test ecx,ecx
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	lea edx,[esp+0x34]
	push edx
	lea eax,[esp+0x28]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov edi,8
	mov byte ptr [esp+0x4C],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x24],di
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[esp+0x24]
	push edx
	call ebx

 Block25:
	mov byte ptr [esp+0x4C],0
	cmp word ptr [esp+0x34],di
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	test eax,eax
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea ecx,[esp+0x34]
	push ecx
	call ebx

 Block29:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esi+0xF4],1
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	test eax,eax
	je Block38

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x40
	ret

 Block31:
	cmp dword ptr [esi+0xF8],0
	je Block38

 Block32:
	mov edi,dword ptr [esi+0xF8]
	test edi,edi
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x114]
	lea eax,[esp+0x14]
	push eax
	push edi
	mov dword ptr [esp+0x1C],0
	call ecx
	test eax,eax
	jge Block36

 Block35:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block36:
	cmp dword ptr [esp+0x14],0
	jne Block38

 Block37:
	mov ecx,esi
	call CFadeWnd::OnPreFadeIn
	mov dword ptr [esi+0xF4],0

 Block38:
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x40
	ret
}
}
// CUIGetUserInfo::HitTest
__SUB_CLASS_THIS(001F2180, __thiscall, 139676,  CUIGetUserInfo, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	jmp  CWnd::HitTest
}
}
// CUIGetUserInfo::OnKey
__SUB_CLASS_THIS(001F2280, __thiscall, 139675,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	test dword ptr [esp+8],0x80000000
	push esi
	mov esi,ecx
	jne Block3

 Block1:
	cmp dword ptr [esp+8],9
	jne Block3

 Block2:
	mov ecx,dword ptr [TSingleton<CInputSystem>::ms_pInstance]
	push 0x10
	call CInputSystem::IsKeyPressed
	push eax
	lea ecx,[esi-4]
	call CDialog::ProcessTab

 Block3:
	pop esi
	ret 8
}
}
