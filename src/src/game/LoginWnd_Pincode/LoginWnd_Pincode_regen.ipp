#include "regen.hpp"
// LoginWnd_Pincode.ipp
#include "LoginWnd_Pincode.hpp"

// CPinCodeDlg::AssignPinCode
_SUB_EXCEPTION_HANDLER(1FE5D0)
__SUB(001FE5D0, __cdecl, 139445,  long, ZRef<CDialog>*, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FE5D0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	push 0x13C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x14],0
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x28],0
	test eax,eax
	je Block10

 Block1:
	mov ecx,eax
	call CPinCodeDlg::_ctor_default
	test eax,eax
	je Block10

 Block2:
	add eax,8
	je Block10

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x1C],esi
	test esi,esi
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ecx,dword ptr [esp+0x30]
	mov ebx,1
	mov dword ptr [esp+0x28],ebx
	test ecx,ecx
	je Block12

 Block6:
	cmp dword ptr [ecx+4],0
	je Block11

 Block7:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test esi,esi
	je Block9

 Block8:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CPinCodeDlg>::_ReleaseRaw

 Block9:
	mov eax,3
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret

 Block10:
	xor esi,esi
	mov dword ptr [esp+0x1C],esi
	jmp Block5

 Block11:
	push esi
	call ZRef<CDialog>::op_assign_ptr

 Block12:
	mov edi,dword ptr [esp+0x34]
	push edi
	push ebx
	mov ecx,esi
	call CPinCodeDlg::Init
	test edi,edi
	jne Block14

 Block13:
	lea ecx,[esp+0x14]
	push 0xC1B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x28],2
	jmp Block15

 Block14:
	lea edx,[esp+0x14]
	push 0xC1A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x28],3

 Block15:
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 0
	push ebx
	push 0xA
	push eax
	push 0xDB
	push 0x16A
	mov ecx,esi
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x28],bl
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block17:
	mov ecx,esi
	call CPinCodeDlg::DoModal
	cmp eax,ebx
	jne Block19

 Block18:
	mov ecx,dword ptr [esi+0x124]
	lea eax,[esp+0x14]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x14],ebx
	call _atoi
	add esp,4
	mov edi,eax
	jmp Block20

 Block19:
	or edi,0xFFFFFFFF

 Block20:
	test byte ptr [esp+0x10],bl
	je Block23

 Block21:
	mov eax,dword ptr [esp+0x14]
	and dword ptr [esp+0x10],0xFFFFFFFE
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov ecx,dword ptr [esi+0x124]
	lea edx,[esp+0x14]
	push edx
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	or dword ptr [esp+0x10],2
	test eax,eax
	je Block25

 Block24:
	cmp dword ptr [eax-4],4
	je Block26

 Block25:
	test edi,edi
	jge Block27

 Block26:
	xor bl,bl

 Block27:
	test byte ptr [esp+0x10],2
	je Block30

 Block28:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	test bl,bl
	je Block32

 Block31:
	mov edi,0xFFFFFFFD

 Block32:
	mov ebx,dword ptr [esp+0x30]
	test ebx,ebx
	je Block36

 Block33:
	mov eax,dword ptr [ebx+4]
	cmp eax,esi
	jne Block36

 Block34:
	test eax,eax
	je Block36

 Block35:
	push 0
	mov ecx,ebx
	call ZRef<CDialog>::_ReleaseRaw
	mov dword ptr [ebx+4],0

 Block36:
	push 0
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZRef<CPinCodeDlg>::_ReleaseRaw
	mov eax,edi
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x1C
	ret
}
}
// CPinCodeDlg::EnterPinCode
_SUB_EXCEPTION_HANDLER(1FE1A0)
__SUB(001FE1A0, __cdecl, 139447,  long, ZRef<CDialog>*, long, long*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FE1A0
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
	xor edi,edi
	push 0x13C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x18],edi
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x24],edi
	cmp eax,edi
	je Block10

 Block1:
	mov ecx,eax
	call CPinCodeDlg::_ctor_default
	cmp eax,edi
	je Block10

 Block2:
	add eax,8
	cmp eax,edi
	je Block10

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x18],esi
	cmp esi,edi
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ebp,dword ptr [esp+0x2C]
	mov ebx,1
	mov dword ptr [esp+0x24],ebx
	cmp ebp,edi
	je Block12

 Block6:
	cmp dword ptr [ebp+4],edi
	je Block11

 Block7:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp esi,edi
	je Block9

 Block8:
	push edi
	lea ecx,[esp+0x18]
	call ZRef<CPinCodeDlg>::_ReleaseRaw

 Block9:
	mov eax,3
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret

 Block10:
	xor esi,esi
	mov dword ptr [esp+0x18],esi
	jmp Block5

 Block11:
	push esi
	mov ecx,ebp
	call ZRef<CDialog>::op_assign_ptr

 Block12:
	mov edi,dword ptr [esp+0x30]
	push edi
	push 3
	mov ecx,esi
	call CPinCodeDlg::Init
	cmp edi,4
	jne Block14

 Block13:
	lea ecx,[esp+0x2C]
	push 0xC1B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x24],2
	jmp Block15

 Block14:
	lea edx,[esp+0x2C]
	push 0xC1A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x24],3

 Block15:
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 0
	push ebx
	push 0xA
	push eax
	push 0xDB
	push 0x16A
	mov ecx,esi
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x24],bl
	test eax,eax
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block17:
	mov ecx,esi
	call CPinCodeDlg::DoModal
	mov edi,eax
	cmp edi,ebx
	je Block20

 Block18:
	cmp edi,2
	je Block20

 Block19:
	xor edi,edi

 Block20:
	mov ecx,dword ptr [esi+0x124]
	lea eax,[esp+0x2C]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	call _atoi
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr [ecx],eax
	mov eax,dword ptr [esp+0x30]
	add esp,4
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	mov ecx,dword ptr [esi+0x124]
	lea edx,[esp+0x2C]
	push edx
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	test eax,eax
	je Block24

 Block23:
	cmp dword ptr [eax-4],4
	je Block25

 Block24:
	test edi,edi
	jg Block26

 Block25:
	xor bl,bl

 Block26:
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	test bl,bl
	je Block30

 Block29:
	mov edi,0xFFFFFFFD

 Block30:
	test ebp,ebp
	je Block34

 Block31:
	mov eax,dword ptr [ebp+4]
	cmp eax,esi
	jne Block34

 Block32:
	test eax,eax
	je Block34

 Block33:
	push 0
	mov ecx,ebp
	call ZRef<CDialog>::_ReleaseRaw
	mov dword ptr [ebp+4],0

 Block34:
	push 0
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZRef<CPinCodeDlg>::_ReleaseRaw
	mov eax,edi
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret
}
}
// CPinCodeDlg::HitTest
__SUB_CLASS_THIS(001FD5D0, __thiscall, 139466,  CPinCodeDlg, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	jne Block2

 Block1:
	ret 0xC

 Block2:
	mov dword ptr [esp+0xC],eax
	jmp  CFadeWnd::HitTest
}
}
// CPinCodeDlg_MODAL_OWNER::MODAL_OWNER
__SUB_CLASS_THIS(001FD600, __thiscall, 139589,  CPinCodeDlg_MODAL_OWNER, void, CPinCodeDlg*) {
__asm {

 Block0:
	mov dword ptr [edi],esi
	test esi,esi
	je Block2

 Block1:
	lea eax,[esi+4]
	jmp Block3

 Block2:
	xor eax,eax

 Block3:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push eax
	call CWndMan::SetCaptureWnd
	test esi,esi
	je Block5

 Block4:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	lea eax,[esi+4]
	push eax
	call CWndMan::SetFocus
	mov eax,edi
	ret

 Block5:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	xor eax,eax
	push eax
	call CWndMan::SetFocus
	mov eax,edi
	ret
}
}
// CPinCodeDlg::SetRet
_SUB_EXCEPTION_HANDLER(1FD6A0)
__SUB_CLASS_THIS(001FD6A0, __thiscall, 139460,  CPinCodeDlg, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FD6A0
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
	mov esi,ecx
	xor ebp,ebp
	cmp dword ptr [esi+0xF8],ebp
	jne Block57

 Block1:
	mov eax,dword ptr [esp+0xA0]
	mov ebx,1
	mov dword ptr [esi+0xF4],eax
	mov dword ptr [esi+0xF8],ebx
	cmp dword ptr [esi+0x14],ebp
	je Block57

 Block2:
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov edx,3
	mov dword ptr [esp+0x98],ebp
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],ebp
	mov edi,dword ptr [esp+0x18]
	mov byte ptr [esp+0x98],bl
	cmp edi,ebp
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,edi
	call IWzGr2DLayer::Getcanvas
	mov ebx,8
	mov byte ptr [esp+0x98],3
	cmp word ptr [esp+0x20],bx
	jne Block7

 Block5:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	cmp eax,ebp
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov ecx,3
	mov word ptr [esp+0x30],cx
	mov dword ptr [esp+0x38],0xFFFFFFFE
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x20]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xA0],4
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebp
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block10:
	mov byte ptr [esp+0x98],3
	cmp word ptr [esp+0x30],bx
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebp
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block14:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x70]
	push edx
	call ebp
	lea eax,[esp+0x70]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	lea ecx,[esp+0x60]
	mov bl,5
	push ecx
	mov byte ptr [esp+0x9C],bl
	call ebp
	lea edx,[esp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	mov eax,dword ptr [esi+0x98]
	mov ecx,3
	mov word ptr [esp+0x50],cx
	mov dword ptr [esp+0x58],eax
	mov eax,dword ptr [esi+0x94]
	mov edx,ecx
	mov word ptr [esp+0x40],dx
	mov dword ptr [esp+0x48],eax
	mov eax,dword ptr [esi+0xA4]
	mov word ptr [esp+0x30],cx
	mov dword ptr [esp+0x38],eax
	lea edx,[esp+0x70]
	push edx
	lea eax,[esp+0x64]
	push eax
	lea ecx,[esp+0x58]
	push ecx
	mov ecx,dword ptr [esp+0x20]
	lea edx,[esp+0x4C]
	push edx
	lea eax,[esp+0x40]
	push eax
	push ecx
	lea edx,[esp+0x98]
	push edx
	mov ecx,edi
	mov byte ptr [esp+0xB4],9
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x80],8
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x80],ax
	mov eax,dword ptr [esp+0x88]
	test eax,eax
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x80]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x98],8
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	cmp word ptr [esp+0x40],8
	mov byte ptr [esp+0x98],7
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0x98],6
	jne Block33

 Block31:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0x98],bl
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea eax,[esp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block38:
	cmp word ptr [esp+0x70],8
	mov byte ptr [esp+0x98],3
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea edx,[esp+0x70]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block42:
	lea eax,[esp+0x60]
	push eax
	call ebp
	lea ecx,[esp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	lea edx,[esp+0x70]
	mov bl,0xA
	push edx
	mov byte ptr [esp+0x9C],bl
	call ebp
	lea eax,[esp+0x70]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	lea ecx,[esp+0x60]
	push ecx
	lea edx,[esp+0x74]
	push edx
	push 0
	mov ecx,edi
	mov byte ptr [esp+0xA4],0xB
	call IWzGr2DLayer::Animate
	mov byte ptr [esp+0x98],bl
	mov ebx,8
	cmp word ptr [esp+0x70],bx
	jne Block49

 Block47:
	xor eax,eax
	mov word ptr [esp+0x70],ax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea ecx,[esp+0x70]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov byte ptr [esp+0x98],3
	cmp word ptr [esp+0x60],bx
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea eax,[esp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block54:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0
	push ecx
	mov dword ptr [eax],0
	mov eax,esp
	mov dword ptr [eax],edi
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x28],esp
	push edi
	call edx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov ecx,esi
	call CWnd::Destroy
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x98],0
	test eax,eax
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block56:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	call ecx

 Block57:
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
// CPinCodeDlg::Draw
_SUB_EXCEPTION_HANDLER(1FDBD0)
__SUB_CLASS_THIS(001FDBD0, __thiscall, 139465,  CPinCodeDlg, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FDBD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x2C]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0xC]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0xC]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea eax,[esp+0x2C]
	push eax
	mov ecx,esi
	mov dword ptr [esp+0x28],0
	call CWnd::GetCanvas
	mov ecx,dword ptr [esi+0x104]
	mov esi,dword ptr [eax]
	mov byte ptr [esp+0x24],1
	test esi,esi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov edi,dword ptr [esp+0xC]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x20]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x24]
	push ecx
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x2C]
	push 0x15
	push 0x77
	mov dword ptr [eax+0xC],edi
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
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x24],0
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block8:
	cmp word ptr [esp+0xC],8
	mov dword ptr [esp+0x24],0xFFFFFFFF
	jne Block11

 Block9:
	xor eax,eax
	mov word ptr [esp+0xC],ax
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4

 Block11:
	lea ecx,[esp+0xC]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block12:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4
}
}
// CPinCodeDlg::OnCreate
_SUB_EXCEPTION_HANDLER(1FEB70)
__SUB_CLASS_THIS(001FEB70, __thiscall, 139462,  CPinCodeDlg, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FEB70
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x94
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xA8]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x28],ebx
	lea eax,[esp+0x2C]
	push 0xC18
	push eax
	mov dword ptr [esp+0xB8],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0x100]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0xBC],1
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x38]
	add esp,0xC
	mov byte ptr [esp+0xB0],bl
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push eax
	call edi
	lea ecx,[esp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	lea edx,[esp+0x18]
	push edx
	mov byte ptr [esp+0xB4],2
	call edi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	mov eax,dword ptr [esp+0x28]
	push ebx
	push ebx
	lea ecx,[esp+0x38]
	push ecx
	lea edx,[esp+0x24]
	push edx
	push ecx
	mov dword ptr [esp+0x54],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xC8],3
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0xC4],4
	cmp dword ptr [_D_G_RM],ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea ecx,[esp+0x70]
	push ecx
	mov byte ptr [esp+0xC8],3
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xB8],5
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0x104]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov edi,dword ptr [ZImports::_VariantClear]
	mov ebp,8
	mov byte ptr [esp+0xB0],3
	cmp word ptr [esp+0x5C],bp
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	cmp eax,ebx
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea eax,[esp+0x5C]
	push eax
	call edi

 Block15:
	mov byte ptr [esp+0xB0],2
	cmp word ptr [esp+0x18],bp
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebx
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[esp+0x18]
	push edx
	call edi

 Block19:
	mov byte ptr [esp+0xB0],bl
	cmp word ptr [esp+0x30],bp
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	cmp eax,ebx
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[esp+0x30]
	push ecx
	call edi

 Block23:
	mov eax,dword ptr [esi+0xFC]
	cmp eax,3
	ja Block77

 Block24:
	cmp EAX, 0
je Block25
cmp EAX, 1
je Block55
cmp EAX, 2
je Block69
cmp EAX, 3
je Block36


 Block25:
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	lea edx,[esp+0x2C]
	push 0xC1C
	push edx
	mov byte ptr [esp+0xB8],6
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0xB4],7
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xB0],6
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
	mov byte ptr [esp+0xB0],8
	cmp eax,ebx
	je Block29

 Block28:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block30

 Block29:
	xor eax,eax

 Block30:
	push eax
	lea ecx,[esi+0x108]
	mov byte ptr [esp+0xB4],6
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x10C]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x18]
	push edx
	push ebx
	push 0x96
	push 0xC4
	push 0x3E8
	push esi
	call eax
	lea ecx,[esp+0x50]
	push 0xC1D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0xB4],9
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x50]
	mov byte ptr [esp+0xB0],6
	cmp eax,ebx
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block32:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xB0],0xA
	cmp eax,ebx
	je Block34

 Block33:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block35

 Block34:
	xor eax,eax

 Block35:
	push eax
	lea ecx,[esi+0x110]
	mov byte ptr [esp+0xB4],6
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x114]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x96
	push 0x6B
	push 0x3E9
	push esi
	call edx
	mov eax,dword ptr [esp+0x24]
	jmp Block75

 Block36:
	mov ebp,1
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	lea eax,[esp+0x58]
	push 0xC1F
	push eax
	mov byte ptr [esp+0xB8],0xB
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0xB4],0xC
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x58]
	mov byte ptr [esp+0xB0],0xB
	cmp eax,ebx
	je Block38

 Block37:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block38:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xB0],0xD
	cmp eax,ebx
	je Block40

 Block39:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block41

 Block40:
	xor eax,eax

 Block41:
	push eax
	lea ecx,[esi+0x108]
	mov byte ptr [esp+0xB4],0xB
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x10C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x96
	push 0x84
	push 0x3E8
	push esi
	call edx
	lea eax,[esp+0x54]
	push 0xC1D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0xB4],0xE
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x54]
	mov byte ptr [esp+0xB0],0xB
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
	mov byte ptr [esp+0xB0],0xF
	cmp eax,ebx
	je Block45

 Block44:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block46

 Block45:
	xor eax,eax

 Block46:
	lea edi,[esi+0x110]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xB4],0xB
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x114]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x96
	push 0xD4
	push 0x3E9
	push esi
	call edx
	lea eax,[esp+0x48]
	push 0xC1E
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0xB4],0x10
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0xB0],0xB
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
	mov byte ptr [esp+0xB0],0x11
	cmp eax,ebx
	je Block50

 Block49:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block51

 Block50:
	xor eax,eax

 Block51:
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xB4],0xB
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x114]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x96
	push 0x2F
	push 0x3EA
	push esi
	call edx
	lea ecx,[esp+0x6C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0xB4],0x12
	mov dword ptr [esp+0x94],ebx
	mov dword ptr [esp+0x8C],0xFF000000
	mov dword ptr [esp+0xA0],8
	mov dword ptr [esp+0x98],ebp
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xB0],0x13
	cmp eax,ebx
	je Block53

 Block52:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block54

 Block53:
	xor eax,eax

 Block54:
	push eax
	lea ecx,[esi+0x120]
	mov byte ptr [esp+0xB4],0x12
	call ZRef<CCtrlEdit>::op_assign_ptr
	mov ecx,dword ptr [esi+0x124]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x6C]
	push edx
	push 0xF
	push 0x96
	push 0x67
	push 0x82
	push 0x3EB
	push esi
	call eax
	mov eax,dword ptr [esi+0x124]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0xB0],0xB
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x24]
	jmp Block75

 Block55:
	mov edi,1
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],edi
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	lea ecx,[esp+0x44]
	push 0xC1C
	push ecx
	mov byte ptr [esp+0xB8],0x14
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0xB4],0x15
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0xB0],0x14
	cmp eax,ebx
	je Block57

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block57:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xB0],0x16
	cmp eax,ebx
	je Block59

 Block58:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block60

 Block59:
	xor eax,eax

 Block60:
	push eax
	lea ecx,[esi+0x108]
	mov byte ptr [esp+0xB4],0x14
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x10C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x96
	push 0x6B
	push 0x3E8
	push esi
	call edx
	lea eax,[esp+0x4C]
	push 0xC1D
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0xB4],0x17
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xB0],0x14
	cmp eax,ebx
	je Block62

 Block61:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block62:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xB0],0x18
	cmp eax,ebx
	je Block64

 Block63:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block65

 Block64:
	xor eax,eax

 Block65:
	push eax
	lea ecx,[esi+0x110]
	mov byte ptr [esp+0xB4],0x14
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x114]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0x96
	push 0xC4
	push 0x3E9
	push esi
	call edx
	lea ecx,[esp+0x6C]
	call CCtrlEdit::CREATEPARAM::_ctor_default
	push 0xBC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov byte ptr [esp+0xB4],0x19
	mov dword ptr [esp+0x94],ebx
	mov dword ptr [esp+0x8C],0xFF000000
	mov dword ptr [esp+0xA0],ebp
	mov dword ptr [esp+0x98],edi
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xB0],0x1A
	cmp eax,ebx
	je Block67

 Block66:
	mov ecx,eax
	call CCtrlEdit::_ctor_default
	jmp Block68

 Block67:
	xor eax,eax

 Block68:
	push eax
	lea ecx,[esi+0x120]
	mov byte ptr [esp+0xB4],0x19
	call ZRef<CCtrlEdit>::op_assign_ptr
	mov ecx,dword ptr [esi+0x124]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+8]
	lea edx,[esp+0x6C]
	push edx
	push 0xF
	push 0x96
	push 0x67
	push 0x82
	push 0x3EB
	push esi
	call eax
	mov eax,dword ptr [esi+0x124]
	push eax
	mov ecx,esi
	call CWnd::SetFocusChild
	lea ecx,[esp+0x6C]
	mov byte ptr [esp+0xB0],0x14
	call CCtrlEdit::CREATEPARAM::~CREATEPARAM
	mov eax,dword ptr [esp+0x24]
	jmp Block75

 Block69:
	mov dword ptr [esp+0x3C],ebx
	mov dword ptr [esp+0x30],1
	mov dword ptr [esp+0x34],ebx
	mov dword ptr [esp+0x38],ebx
	lea ecx,[esp+0x40]
	push 0xC1C
	push ecx
	mov byte ptr [esp+0xB8],0x1B
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x40]
	mov byte ptr [esp+0xB4],0x1C
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xB0],0x1B
	cmp eax,ebx
	je Block71

 Block70:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block71:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0xB0],0x1D
	cmp eax,ebx
	je Block73

 Block72:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block74

 Block73:
	xor eax,eax

 Block74:
	push eax
	lea ecx,[esi+0x108]
	mov byte ptr [esp+0xB4],0x1B
	call ZRef<CCtrlButton>::op_assign_ptr
	mov ecx,dword ptr [esi+0x10C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x30]
	push eax
	push ebx
	push 0x96
	push 0xA2
	push 0x3E8
	push esi
	call edx
	mov eax,dword ptr [esp+0x3C]

 Block75:
	mov byte ptr [esp+0xB0],bl
	cmp eax,ebx
	je Block77

 Block76:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block77:
	mov eax,dword ptr [esp+0x28]
	mov dword ptr [esp+0xB0],0xFFFFFFFF
	cmp eax,ebx
	je Block79

 Block78:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block79:
	mov ecx,dword ptr [esp+0xA8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA0
	ret 4
}
}
// CPinCodeDlg::CreatePinCode
__SUB(001FEAF0, __cdecl, 139443,  long, ZRef<CDialog>*) {
__asm {

 Block0:
	push ebx
	push esi
	push edi
	mov edi,dword ptr [esp+0x10]
	push 0
	push edi
	or ebx,0xFFFFFFFF
	call CPinCodeDlg::AssignPinCode
	mov esi,eax
	add esp,8
	cmp esi,ebx
	je Block14

 Block1:
	jmp Block3

 Block3:
	cmp esi,0xFFFFFFFD
	jne Block5

 Block4:
	lea eax,[esi+4]
	jmp Block13

 Block5:
	cmp esi,0xFFFFFFFE
	jne Block7

 Block6:
	xor eax,eax
	jmp Block13

 Block7:
	push edi
	call CPinCodeDlg::ConfirmPinCode
	add esp,4
	cmp eax,0xFFFFFFFF
	je Block14

 Block8:
	cmp eax,0xFFFFFFFD
	je Block12

 Block9:
	cmp eax,0xFFFFFFFE
	jne Block11

 Block10:
	xor eax,eax
	jmp Block13

 Block11:
	cmp esi,eax
	je Block15

 Block12:
	mov eax,3

 Block13:
	push eax
	push edi
	call CPinCodeDlg::AssignPinCode
	mov esi,eax
	add esp,8
	cmp esi,0xFFFFFFFF
	jne Block3

 Block14:
	pop edi
	pop esi
	mov eax,ebx
	pop ebx
	ret

 Block15:
	pop edi
	mov eax,esi
	pop esi
	pop ebx
	ret
}
}
// CPinCodeDlg::Init
__SUB_CLASS_THIS(001FD560, __thiscall, 139458,  CPinCodeDlg, void, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov eax,0xDB
	lea edi,[eax-0x45]
	push edi
	push 0
	push edi
	mov esi,ecx
	lea ecx,[eax-0x31]
	push ecx
	push eax
	push ecx
	push eax
	push edi
	lea edx,[eax+0x14]
	push edx
	push 0
	push 0xFF
	push 0
	mov ecx,esi
	call CFadeWnd::SetOption
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [esp+0x10]
	pop edi
	mov dword ptr [esi+0xFC],eax
	mov dword ptr [esi+0x100],ecx
	pop esi
	ret 8
}
}
// CPinCodeDlg_MODAL_OWNER::~MODAL_OWNER
__SUB_CLASS_THIS0(001FD550, __thiscall, 139588,  CPinCodeDlg_MODAL_OWNER, void) {
__asm {

 Block0:
	mov ecx,dword ptr [eax]
	cmp dword ptr [ecx+0x14],0
	je Block2

 Block1:
	jmp  CWnd::Destroy

 Block2:
	ret
}
}
// CPinCodeDlg::Delete
__SUB_CLASS_THIS0(001FD5B0, __thiscall, 139456,  CPinCodeDlg, void) {
__asm {

 Block0:
	test ecx,ecx
	je Block2

 Block1:
	mov eax,dword ptr [ecx+8]
	mov edx,dword ptr [eax]
	add ecx,8
	push 1
	call edx

 Block2:
	ret
}
}
// CPinCodeDlg::ConfirmPinCode
_SUB_EXCEPTION_HANDLER(1FE3C0)
__SUB(001FE3C0, __cdecl, 139443,  long, ZRef<CDialog>*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FE3C0
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
	xor ebx,ebx
	push 0x13C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	mov dword ptr [esp+0x18],ebx
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x28],ebx
	cmp eax,ebx
	je Block10

 Block1:
	mov ecx,eax
	call CPinCodeDlg::_ctor_default
	cmp eax,ebx
	je Block10

 Block2:
	add eax,8
	cmp eax,ebx
	je Block10

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x1C],esi
	cmp esi,ebx
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ebp,dword ptr [esp+0x30]
	mov edi,1
	mov dword ptr [esp+0x28],edi
	test ebp,ebp
	je Block12

 Block6:
	cmp dword ptr [ebp+4],0
	je Block11

 Block7:
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test esi,esi
	je Block9

 Block8:
	push 0
	lea ecx,[esp+0x1C]
	call ZRef<CPinCodeDlg>::_ReleaseRaw

 Block9:
	mov eax,3
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret

 Block10:
	xor esi,esi
	mov dword ptr [esp+0x1C],esi
	jmp Block5

 Block11:
	push esi
	mov ecx,ebp
	call ZRef<CDialog>::op_assign_ptr

 Block12:
	push 2
	push edi
	mov ecx,esi
	call CPinCodeDlg::Init
	lea ecx,[esp+0x30]
	push 0xC1B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 0
	push edi
	push 0xA
	push eax
	push 0xDB
	push 0x16A
	mov ecx,esi
	mov byte ptr [esp+0x48],2
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0x28],1
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block14:
	mov ecx,esi
	call CPinCodeDlg::DoModal
	cmp eax,edi
	jne Block16

 Block15:
	mov ecx,dword ptr [esi+0x124]
	lea edx,[esp+0x30]
	push edx
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x18],edi
	call _atoi
	mov ebx,dword ptr [esp+0x18]
	add esp,4
	mov edi,eax
	jmp Block17

 Block16:
	or edi,0xFFFFFFFF

 Block17:
	test bl,1
	je Block20

 Block18:
	mov eax,dword ptr [esp+0x30]
	and ebx,0xFFFFFFFE
	test eax,eax
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block20:
	mov ecx,dword ptr [esi+0x124]
	lea eax,[esp+0x30]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	or ebx,2
	mov dword ptr [esp+0x14],ebx
	test eax,eax
	je Block22

 Block21:
	cmp dword ptr [eax-4],4
	je Block24

 Block22:
	test edi,edi
	jl Block24

 Block23:
	mov bl,1
	jmp Block25

 Block24:
	xor bl,bl

 Block25:
	test byte ptr [esp+0x14],2
	je Block28

 Block26:
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block28

 Block27:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block28:
	test bl,bl
	je Block30

 Block29:
	mov edi,0xFFFFFFFD

 Block30:
	test ebp,ebp
	je Block34

 Block31:
	mov eax,dword ptr [ebp+4]
	cmp eax,esi
	jne Block34

 Block32:
	test eax,eax
	je Block34

 Block33:
	push 0
	mov ecx,ebp
	call ZRef<CDialog>::_ReleaseRaw
	mov dword ptr [ebp+4],0

 Block34:
	push 0
	lea ecx,[esp+0x1C]
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	call ZRef<CPinCodeDlg>::_ReleaseRaw
	mov eax,edi
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret
}
}
// CPinCodeDlg::OnPreFadeIn
__SUB_CLASS_THIS0(001FD5F0, __thiscall, 139456,  CPinCodeDlg, void) {
__asm {

 Block0:
	push 0
	call CFadeWnd::Fade
	ret
}
}
// CPinCodeDlg::CPinCodeDlg
__SUB_CLASS_THIS0(001FDD30, __thiscall, 139454,  CPinCodeDlg, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CFadeWnd::_ctor_default
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CPinCodeDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CPinCodeDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CPinCodeDlg::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x104],eax
	mov dword ptr [esi+0x10C],eax
	mov dword ptr [esi+0x114],eax
	mov dword ptr [esi+0x11C],eax
	mov dword ptr [esi+0x124],eax
	mov dword ptr [esi+0x12C],eax
	mov dword ptr [esi+0x134],eax
	mov dword ptr [esi+0x138],eax
	mov dword ptr [esi+0xF8],eax
	mov eax,esi
	pop esi
	ret
}
}
// CPinCodeDlg::~CPinCodeDlg
_SUB_EXCEPTION_HANDLER(1FDDA0)
__SUB_CLASS_THIS0(001FDDA0, __thiscall, 139456,  CPinCodeDlg, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FDDA0
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
	int 3// TODO: 	mov dword ptr [esi],offset CPinCodeDlg::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CPinCodeDlg::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CPinCodeDlg::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x138]
	xor ebx,ebx
	mov dword ptr [esp+0x1C],7
	cmp eax,ebx
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0x134]
	mov byte ptr [esp+0x1C],6
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	lea edi,[esi+0x128]
	mov byte ptr [esp+0x1C],5
	cmp dword ptr [edi+4],ebx
	je Block6

 Block5:
	push ebx
	mov ecx,edi
	call ZRef<CPinCodeDlg>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block6:
	lea edi,[esi+0x120]
	mov byte ptr [esp+0x1C],4
	cmp dword ptr [edi+4],ebx
	je Block8

 Block7:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block8:
	lea edi,[esi+0x118]
	mov byte ptr [esp+0x1C],3
	cmp dword ptr [edi+4],ebx
	je Block10

 Block9:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlEdit>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block10:
	lea edi,[esi+0x110]
	mov byte ptr [esp+0x1C],2
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea edi,[esi+0x108]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	mov eax,dword ptr [esi+0x104]
	mov byte ptr [esp+0x1C],bl
	cmp eax,ebx
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov ecx,esi
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
// CPinCodeDlg::OnButtonClicked
_SUB_EXCEPTION_HANDLER(1FE800)
__SUB_CLASS_THIS(001FE800, __thiscall, 139463,  CPinCodeDlg, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FE800
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
	mov eax,dword ptr [esp+0x1C]
	sub eax,0x3E8
	je Block12

 Block1:
	sub eax,1
	je Block5

 Block2:
	sub eax,1
	jne Block11

 Block3:
	cmp dword ptr [esi+0xFC],3
	jne Block11

 Block4:
	push 2
	jmp Block10

 Block5:
	cmp dword ptr [esi+0xFC],1
	push 0
	jne Block10

 Block6:
	push 7
	call CPinCodeDlg::YesNo
	add esp,8
	test eax,eax
	je Block8

 Block7:
	push 0
	mov ecx,esi
	jmp Block10

 Block8:
	mov ecx,dword ptr [esi+0x124]
	push offset _S_2__2
	call CCtrlEdit::SetText
	mov ecx,esi

 Block9:
	push 1

 Block10:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	call edx

 Block11:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 4

 Block12:
	cmp dword ptr [esi+0xFC],0x3EB
	jne Block9

 Block13:
	mov ecx,dword ptr [esi+0x124]
	lea eax,[esp+0x1C]
	push eax
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi]
	push eax
	mov dword ptr [esp+0x18],0
	call _atoi
	mov edx,dword ptr [edi+0x34]
	add esp,4
	push eax
	mov ecx,esi
	call edx
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block11

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 4
}
}
// CPinCodeDlg::DoModal
_SUB_EXCEPTION_HANDLER(1FDB50)
__SUB_CLASS_THIS0(001FDB50, __thiscall, 139461,  CPinCodeDlg, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FDB50
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
	lea edi,[esp+0xC]
	call CPinCodeDlg::MODAL_OWNER::_ctor_0
	mov ecx,dword ptr [TSingleton<CWvsApp>::ms_pInstance]
	lea eax,[esi+0xF8]
	push eax
	mov dword ptr [esp+0x1C],0
	call CWvsApp::Run
	mov esi,dword ptr [esi+0xF4]
	mov eax,edi
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CPinCodeDlg::MODAL_OWNER::~MODAL_OWNER
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
// CPinCodeDlg::YesNo
_SUB_EXCEPTION_HANDLER(1FE020)
__SUB(001FE020, __cdecl, 139441,  int32_t, long, ZRef<CDialog>*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FE020
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
	push 0x13C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x10],eax
	mov dword ptr [esp+0x20],0
	test eax,eax
	je Block10

 Block1:
	mov ecx,eax
	call CPinCodeDlg::_ctor_default
	test eax,eax
	je Block10

 Block2:
	add eax,8
	je Block10

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x14],esi
	test esi,esi
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov edi,dword ptr [esp+0x2C]
	mov ebx,1
	mov dword ptr [esp+0x20],ebx
	test edi,edi
	je Block12

 Block6:
	cmp dword ptr [edi+4],0
	je Block11

 Block7:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test esi,esi
	je Block9

 Block8:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CPinCodeDlg>::_ReleaseRaw

 Block9:
	mov eax,3
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret

 Block10:
	xor esi,esi
	mov dword ptr [esp+0x14],esi
	jmp Block5

 Block11:
	push esi
	mov ecx,edi
	call ZRef<CDialog>::op_assign_ptr

 Block12:
	mov ecx,dword ptr [esp+0x28]
	push ecx
	push 0
	mov ecx,esi
	call CPinCodeDlg::Init
	lea edx,[esp+0x2C]
	push 0xC19
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 0
	push ebx
	push 0xA
	push eax
	push 0xDB
	push 0x16A
	mov ecx,esi
	mov byte ptr [esp+0x40],2
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x20],bl
	test eax,eax
	je Block14

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block14:
	mov ecx,esi
	call CPinCodeDlg::DoModal
	mov ebx,eax
	test edi,edi
	je Block18

 Block15:
	mov eax,dword ptr [edi+4]
	cmp eax,esi
	jne Block18

 Block16:
	test eax,eax
	je Block18

 Block17:
	push 0
	mov ecx,edi
	call ZRef<CDialog>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block18:
	xor eax,eax
	test ebx,ebx
	setne al
	mov dword ptr [esp+0x20],0xFFFFFFFF
	mov edi,eax
	test esi,esi
	je Block20

 Block19:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CPinCodeDlg>::_ReleaseRaw

 Block20:
	mov eax,edi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret
}
}
// CPinCodeDlg::OnKey
_SUB_EXCEPTION_HANDLER(1FE900)
__SUB_CLASS_THIS(001FE900, __thiscall, 139464,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FE900
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x20]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x30]
	test ecx,ecx
	js Block18

 Block1:
	cmp edx,0xD
	je Block14

 Block2:
	cmp edx,0x1B
	je Block13

 Block3:
	mov eax,dword ptr [esi+0xF8]
	cmp eax,1
	je Block5

 Block4:
	cmp eax,3
	jne Block18

 Block5:
	push 0x308
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x30],eax
	mov dword ptr [esp+0x28],1
	test eax,eax
	je Block12

 Block6:
	mov ecx,eax
	call CUISoftKeyboard::_ctor_default
	test eax,eax
	je Block12

 Block7:
	add eax,8
	je Block12

 Block8:
	lea edi,[eax-8]
	mov dword ptr [esp+0x10],edi
	test edi,edi
	je Block10

 Block9:
	lea eax,[edi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block10:
	mov esi,dword ptr [esi+0x120]
	lea ecx,[esp+0x14]
	push ecx
	mov eax,4
	push esi
	mov ecx,edi
	mov dword ptr [esp+0x30],2
	mov dword ptr [esp+0x24],3
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x20],eax
	call CUISoftKeyboard::SetSoftKeyboard
	mov ecx,edi
	call CDialog::DoModal
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test edi,edi
	je Block19

 Block11:
	push 0
	lea ecx,[esp+0x10]
	call ZRef<CUISoftKeyboard>::_ReleaseRaw
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 8

 Block12:
	xor edi,edi
	mov dword ptr [esp+0x10],edi
	jmp Block10

 Block13:
	mov edx,dword ptr [esi-4]
	mov eax,dword ptr [edx+0x34]
	lea ecx,[esi-4]
	push 0
	call eax
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 8

 Block14:
	cmp dword ptr [esi+0xF8],0x3EB
	jne Block17

 Block15:
	mov ecx,dword ptr [esi+0x120]
	lea edx,[esp+0x34]
	push edx
	call CCtrlEdit::GetText
	mov eax,dword ptr [eax]
	mov edi,dword ptr [esi-4]
	add esi,0xFFFFFFFC
	push eax
	mov dword ptr [esp+0x2C],0
	call _atoi
	add esp,4
	push eax
	mov eax,dword ptr [edi+0x34]
	mov ecx,esi
	call eax
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block19

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 8

 Block17:
	mov edx,dword ptr [esi-4]
	mov eax,dword ptr [edx+0x34]
	lea ecx,[esi-4]
	push 1
	call eax
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 8

 Block18:
	push ecx
	push edx
	mov ecx,esi
	call CDialog::OnKey

 Block19:
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret 8
}
}
// CPinCodeDlg::Notice
_SUB_EXCEPTION_HANDLER(1FDF00)
__SUB(001FDF00, __cdecl, 139442,  void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1FDF00
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	push 0x13C
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+8],eax
	mov dword ptr [esp+0x1C],0
	test eax,eax
	je Block10

 Block1:
	mov ecx,eax
	call CPinCodeDlg::_ctor_default
	test eax,eax
	je Block10

 Block2:
	add eax,8
	je Block10

 Block3:
	lea esi,[eax-8]
	mov dword ptr [esp+0x10],esi
	test esi,esi
	je Block5

 Block4:
	lea eax,[esi+0xC]
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block5:
	mov ecx,dword ptr [esp+0x24]
	push ecx
	push 2
	mov ecx,esi
	mov dword ptr [esp+0x24],1
	call CPinCodeDlg::Init
	lea edx,[esp+8]
	push 0xC19
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 0
	push 1
	push 0xA
	push eax
	push 0xDB
	push 0x16A
	mov ecx,esi
	mov byte ptr [esp+0x3C],2
	call CFadeWnd::CreateFadeWnd
	mov eax,dword ptr [esp+8]
	mov byte ptr [esp+0x1C],1
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block7:
	mov ecx,esi
	call CPinCodeDlg::DoModal
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test esi,esi
	je Block9

 Block8:
	push 0
	lea ecx,[esp+0x10]
	call ZRef<CPinCodeDlg>::_ReleaseRaw

 Block9:
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x18
	ret

 Block10:
	xor esi,esi
	mov dword ptr [esp+0x10],esi
	jmp Block5
}
}
