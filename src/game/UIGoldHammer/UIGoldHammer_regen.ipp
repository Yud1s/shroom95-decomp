#include "regen.hpp"
// UIGoldHammer.ipp
#include "UIGoldHammer.hpp"

// CUIItemUpgrade::OnCreate
_SUB_EXCEPTION_HANDLER(3C06A0)
__SUB_CLASS_THIS(003C06A0, __thiscall, 67141,  CUIItemUpgrade, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C06A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x5C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x38],ebx
	mov dword ptr [esp+0x2C],1
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x34],ebx
	lea eax,[esp+0x14]
	push 0x13CC
	push eax
	mov dword ptr [esp+0x6C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x68],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],bl
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
	mov byte ptr [esp+0x64],2
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
	mov byte ptr [esp+0x64],0
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
	mov eax,dword ptr [esi+0xC0]
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0xC0]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x2C]
	push eax
	push 1
	push 0xB3
	push 0x2A
	push 0x7D0
	push esi
	call edx
	lea eax,[esp+0x14]
	push 0x13CD
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x3C]
	mov byte ptr [esp+0x68],3
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x64],0
	cmp eax,ebx
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block13:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x14],eax
	mov byte ptr [esp+0x64],4
	cmp eax,ebx
	je Block16

 Block14:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block17

 Block15:
	xor edi,edi
	jmp Block9

 Block16:
	xor eax,eax

 Block17:
	mov byte ptr [esp+0x64],0
	cmp eax,ebx
	je Block25

 Block18:
	add eax,8
	cmp eax,ebx
	je Block25

 Block19:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block21

 Block20:
	lea ecx,[edi+0xC]
	push ecx
	call ebp

 Block21:
	mov eax,dword ptr [esi+0xB8]
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esp+0x18],eax
	cmp eax,ebx
	je Block23

 Block22:
	push ebx
	lea ecx,[esp+0x18]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block23:
	mov ecx,dword ptr [esi+0xB8]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x2C]
	push eax
	push 1
	push 0xB3
	push 0x64
	push 0x7D1
	push esi
	call edx
	mov eax,dword ptr [esi+0xC0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push ebx
	call edx
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x3C]
	push eax
	call edi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block26

 Block24:
	push eax
	call _com_issue_error

 Block25:
	xor edi,edi
	jmp Block21

 Block26:
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0x68],5
	call edi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	push ebx
	push ebx
	lea ecx,[esp+0x44]
	push ecx
	lea edx,[esp+0x28]
	push edx
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	push offset _S_UIUIWINDOWIMGVIC__1
	mov byte ptr [esp+0x7C],6
	call _xbstr_t::_ctor_0
	mov byte ptr [esp+0x78],7
	cmp dword ptr [_D_G_RM],ebx
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	lea eax,[esp+0x60]
	mov byte ptr [esp+0x78],6
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],8
	call Ztl_variant_t::GetUnknown
	lea ebp,[esi+0xCC]
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,ebx
	jge Block33

 Block31:
	cmp eax,0x80004002
	je Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	mov ebx,8
	mov byte ptr [esp+0x64],6
	cmp word ptr [esp+0x4C],bx
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov byte ptr [esp+0x64],5
	cmp word ptr [esp+0x1C],bx
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov byte ptr [esp+0x64],0
	cmp word ptr [esp+0x3C],bx
	jne Block44

 Block42:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	test eax,eax
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block45:
	lea ecx,[esp+0x1C]
	push ecx
	call edi
	lea edx,[esp+0x1C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block47

 Block46:
	push eax
	call _com_issue_error

 Block47:
	lea eax,[esp+0x3C]
	push eax
	mov byte ptr [esp+0x68],9
	call edi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block49

 Block48:
	push eax
	call _com_issue_error

 Block49:
	push 0
	push 0
	lea edx,[esp+0x24]
	push edx
	lea eax,[esp+0x48]
	push eax
	push ecx
	mov dword ptr [esp+0x28],esp
	mov ecx,esp
	mov bl,0xA
	push offset _S_UIUIWINDOWIMGVIC
	mov byte ptr [esp+0x7C],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x78],0xB
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	lea ecx,[esp+0x60]
	push ecx
	mov byte ptr [esp+0x7C],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x6C],0xC
	call Ztl_variant_t::GetUnknown
	lea ecx,[esi+0xD0]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block54

 Block52:
	cmp eax,0x80004002
	je Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	mov edi,8
	mov byte ptr [esp+0x64],bl
	cmp word ptr [esp+0x4C],di
	jne Block61

 Block55:
	mov eax,dword ptr [esp+0x54]
	xor edx,edx
	mov word ptr [esp+0x4C],dx
	test eax,eax
	je Block57

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block57:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block58:
	mov byte ptr [esp+0x64],9
	cmp word ptr [esp+0x3C],di
	jne Block62

 Block59:
	mov eax,dword ptr [esp+0x44]
	xor ecx,ecx
	mov word ptr [esp+0x3C],cx
	test eax,eax
	je Block63

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block61:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x4C]
	push eax
	call ebx
	jmp Block58

 Block62:
	lea edx,[esp+0x3C]
	push edx
	call ebx

 Block63:
	mov byte ptr [esp+0x64],0
	cmp word ptr [esp+0x1C],di
	jne Block66

 Block64:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea ecx,[esp+0x1C]
	push ecx
	call ebx

 Block67:
	mov edi,dword ptr [ebp]
	test edi,edi
	jne Block69

 Block68:
	push 0x80004003
	call _com_issue_error

 Block69:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x40]
	lea eax,[esp+0x14]
	push eax
	push edi
	mov dword ptr [esp+0x1C],0
	call ecx
	test eax,eax
	jge Block71

 Block70:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block71:
	mov edx,dword ptr [esp+0x14]
	add edx,0xFFFFFFFC
	mov dword ptr [esp+0x14],edx
	fild dword ptr [esp+0x14]
	test edx,edx
	jge Block73

 Block72:
	fadd qword ptr [__real_41f0000000000000]

 Block73:
	fdiv qword ptr [__real_400599999999999a]
	call __ftol2_sse
	mov dword ptr [esi+0xDC],eax
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call CWnd::GetCanvas
	mov ecx,3
	mov word ptr [esp+0x1C],cx
	mov ecx,0xFF
	mov dword ptr [esp+0x24],ecx
	mov esi,dword ptr [esp+0x14]
	mov edx,dword ptr [ebp]
	mov byte ptr [esp+0x64],0xE
	test esi,esi
	jne Block75

 Block74:
	push 0x80004003
	call _com_issue_error

 Block75:
	mov ebp,dword ptr [esp+0x1C]
	mov edi,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x30]
	push edx
	mov edx,dword ptr [edi+0x80]
	push 0x98
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x40]
	push 6
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block77

 Block76:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block77:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x64],0xD
	jne Block80

 Block78:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea ecx,[esp+0x1C]
	push ecx
	call ebx

 Block81:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0x68],0
	call eax
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x64],0xFFFFFFFF
	test eax,eax
	je Block83

 Block82:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block83:
	mov ecx,dword ptr [esp+0x5C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x54
	ret 4
}
}
// CUIVega::IsKindOf
__SUB_CLASS_THIS(003C0460, __thiscall, 67237,  CUIVega, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIVega::ms_RTTI_CUIVega
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
// CUIItemUpgrade::OnPacket
__SUB_CLASS_THIS(003C2E10, __thiscall, 67142,  CUIItemUpgrade, void, long, CInPacket&) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x1A9
	jne Block2

 Block1:
	mov eax,dword ptr [esp+8]
	push eax
	call CUIItemUpgrade::OnItemUpgradeResult

 Block2:
	ret 8
}
}
// CUIItemUpgrade::~CUIItemUpgrade
_SUB_EXCEPTION_HANDLER(3BFF80)
__SUB_CLASS_THIS0(003BFF80, __thiscall, 67140,  CUIItemUpgrade, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BFF80
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIItemUpgrade::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIItemUpgrade::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIItemUpgrade::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB48]
	mov dword ptr [esp+0x1C],7
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[esi+0xB38]
	mov byte ptr [esp+0x1C],6
	call ZArray<unsigned char>::RemoveAll
	lea ecx,[esi+0xEC]
	mov byte ptr [esp+0x1C],5
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+0xD0]
	xor ebx,ebx
	mov byte ptr [esp+0x1C],4
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0xCC]
	mov byte ptr [esp+0x1C],3
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xC8]
	mov byte ptr [esp+0x1C],2
	cmp eax,ebx
	je Block9

 Block5:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block8

 Block6:
	mov eax,dword ptr [esi+0xC8]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0xC8]
	cmp ecx,ebx
	je Block8

 Block7:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block8:
	mov dword ptr [esi+0xC8],ebx

 Block9:
	lea edi,[esi+0xBC]
	mov byte ptr [esp+0x1C],1
	cmp dword ptr [edi+4],ebx
	je Block11

 Block10:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block11:
	lea edi,[esi+0xB4]
	mov byte ptr [esp+0x1C],bl
	cmp dword ptr [edi+4],ebx
	je Block13

 Block12:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block13:
	int 3// TODO: 	mov dword ptr [esi],offset CUniqueModeless::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUniqueModeless::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUniqueModeless::`vftable'{for `ZRefCounted'}
	mov ecx,esi
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	mov dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],ebx
	call CDialog::~CDialog
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
// CUIItemUpgrade::ClearToolTip
__SUB_CLASS_THIS0(003BFF20, __thiscall, 67149,  IUIMsgHandler, void) {
__asm {

 Block0:
	add ecx,0xE8
	jmp  CUIToolTip::ClearToolTip
}
}
// CUIVega::OnPacket
__SUB_CLASS_THIS(003C0680, __thiscall, 67225,  CUIVega, void, long, CInPacket&) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0x1AD
	jne Block2

 Block1:
	mov eax,dword ptr [esp+8]
	push eax
	call CUIVega::OnVegaResult

 Block2:
	ret 8
}
}
// CUIVega::OnVegaResult
_SUB_EXCEPTION_HANDLER(3BF7B0)
__SUB_CLASS_THIS(003BF7B0, __thiscall, 67226,  CUIVega, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BF7B0
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
	mov esi,ecx
	mov ecx,dword ptr [esp+0x24]
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,0x44
	je Block6

 Block1:
	cmp eax,0x49
	je Block6

 Block2:
	cmp eax,0x45
	je Block5

 Block3:
	cmp eax,0x47
	je Block5

 Block4:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	push 0x1A6C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	add esp,0x14
	push 1
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4

 Block5:
	mov dword ptr [esi+0xA0],eax
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4

 Block6:
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x18],esp
	push ecx
	mov ecx,esi
	mov dword ptr [esi+0x9C],eax
	call CWnd::GetLayer
	lea edx,[esp+0x2C]
	push edx
	mov ecx,esi
	mov dword ptr [esp+0x28],0
	call CWnd::GetLayer
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [edi],0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x2C],1
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	mov ecx,edi
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	test eax,eax
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov byte ptr [esp+0x28],2
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0
	call CAnimationDisplayer::Effect_Vega
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	push 4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x28],3
	call CWnd::GetLayer
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x18],esp
	mov dword ptr [edi],0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x2C],4
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block15

 Block14:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block15:
	mov ecx,edi
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	test eax,eax
	jge Block18

 Block16:
	cmp eax,0x80004002
	je Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	mov byte ptr [esp+0x28],5
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0
	call CAnimationDisplayer::Effect_Vega
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	lea eax,[esp+0xC]
	push 0x1534
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x20],6
	call play_ui_sound_loop
	mov dword ptr [esi+0xA4],eax
	mov eax,dword ptr [esp+0x10]
	add esp,4
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block22:
	call get_update_time
	mov dword ptr [esi+0xB20],eax
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x14
	ret 4
}
}
// CUIVegaResultPopup::OnCreate
_SUB_EXCEPTION_HANDLER(3C2BD0)
__SUB_CLASS_THIS(003C2BD0, __thiscall, 71961,  CUIVegaResultPopup, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C2BD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x30]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x2C],ebx
	mov dword ptr [esp+0x20],1
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x28],ebx
	lea eax,[esp+0x10]
	push 0x152C
	push eax
	mov dword ptr [esp+0x40],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x30]
	mov byte ptr [esp+0x3C],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x38],bl
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
	mov dword ptr [esp+0x10],eax
	mov byte ptr [esp+0x38],2
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block5

 Block4:
	xor eax,eax

 Block5:
	mov byte ptr [esp+0x38],bl
	cmp eax,ebx
	je Block16

 Block6:
	lea edi,[eax+8]
	cmp edi,ebx
	je Block16

 Block7:
	add edi,0xFFFFFFF8
	cmp edi,ebx
	je Block9

 Block8:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block9:
	mov eax,dword ptr [esi+0x94]
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	je Block11

 Block10:
	push ebx
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block11:
	mov ecx,dword ptr [esi+0x94]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x20]
	push eax
	push ebx
	push 0x87
	push 0x37
	push 1
	push esi
	call edx
	mov eax,dword ptr [esi+0x98]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	lea edx,[esp+0x18]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x44],3
	call CWnd::GetLayer
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [edi],ebx
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x48],4
	mov dword ptr [esp+0x28],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block13:
	mov ecx,edi
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	cmp eax,ebx
	jge Block17

 Block14:
	cmp eax,0x80004002
	je Block17

 Block15:
	push eax
	call _com_issue_error

 Block16:
	xor edi,edi
	jmp Block9

 Block17:
	mov byte ptr [esp+0x44],5
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push ebx
	call CAnimationDisplayer::Effect_Vega
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x38],bl
	cmp eax,ebx
	je Block19

 Block18:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block19:
	mov esi,dword ptr [esi+0x98]
	cmp esi,1
	jne Block21

 Block20:
	lea eax,[esp+0x10]
	push 0x1532
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x38],6
	jmp Block23

 Block21:
	cmp esi,2
	jne Block25

 Block22:
	lea ecx,[esp+0x10]
	push 0x1533
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov byte ptr [esp+0x38],7

 Block23:
	mov eax,dword ptr [eax]
	push eax
	call play_ui_sound
	mov eax,dword ptr [esp+0x14]
	add esp,4
	mov byte ptr [esp+0x38],bl
	cmp eax,ebx
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebx
	je Block27

 Block26:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block27:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x2C
	ret 4
}
}
// CUIVega::DrawGaugeBar
_SUB_EXCEPTION_HANDLER(3BE480)
__SUB_CLASS_THIS(003BE480, __thiscall, 67233,  CUIVega, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BE480
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
	mov dword ptr [esp+0x18],esi
	mov eax,dword ptr [esi+0x98]
	mov dword ptr [esp+0x34],0
	cmp eax,1
	jne Block18

 Block1:
	cmp dword ptr [esi+0xB20],0
	jle Block32

 Block2:
	call get_update_time
	sub eax,dword ptr [esi+0xB20]
	test eax,eax
	jle Block32

 Block3:
	mov ecx,dword ptr [esi+0xB24]
	imul ecx,eax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,0x9F
	jle Block7

 Block4:
	cmp dword ptr [esi+0xA0],0x43
	je Block6

 Block5:
	mov dword ptr [esi+0x98],2
	jmp Block32

 Block6:
	mov eax,0x9F

 Block7:
	mov edi,0x13
	lea ebp,[eax+0xC]
	cmp ebp,edi
	jle Block32

 Block8:
	mov ebx,0xFF

 Block9:
	cmp edi,0x9F
	jge Block32

 Block10:
	mov eax,3
	mov word ptr [esp+0x1C],ax
	mov dword ptr [esp+0x24],ebx
	mov ecx,dword ptr [esp+0x3C]
	mov eax,dword ptr [esi+0xB14]
	mov byte ptr [esp+0x34],1
	test ecx,ecx
	je Block17

 Block11:
	lea edx,[esp+0x1C]
	push edx
	push eax
	push 0xB6
	push edi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],0
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	inc edi
	cmp edi,ebp
	jl Block9

 Block16:
	jmp Block32

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	cmp eax,2
	je Block20

 Block19:
	cmp eax,3
	jne Block32

 Block20:
	mov dword ptr [esp+0x14],0x13
	jmp Block24

 Block23:
	mov esi,dword ptr [esp+0x18]

 Block24:
	mov edx,3
	mov word ptr [esp+0x1C],dx
	mov edx,0xFF
	mov dword ptr [esp+0x24],edx
	mov ecx,dword ptr [esp+0x3C]
	mov esi,dword ptr [esi+0xB14]
	mov byte ptr [esp+0x34],2
	test ecx,ecx
	je Block17

 Block25:
	mov ebp,dword ptr [esp+0x1C]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x30]
	push esi
	mov esi,dword ptr [esp+0x28]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x3C]
	push 0xB6
	push esi
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebx+0x80]
	push ecx
	mov edi,ecx
	call eax
	test eax,eax
	jge Block27

 Block26:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block27:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x34],0
	jne Block30

 Block28:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	inc esi
	cmp esi,0x9F
	mov dword ptr [esp+0x14],esi
	jl Block23

 Block32:
	mov eax,dword ptr [esp+0x3C]
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test eax,eax
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret 4
}
}
// CUIVega::OnMouseMove
__SUB_CLASS_THIS(003BECE0, __thiscall, 67231,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x94],0
	jne Block12

 Block1:
	push ebx
	mov ebx,dword ptr [esp+0x1C]
	push ebp
	mov ebp,dword ptr [esp+0x24]
	lea eax,[ebx-0x1F]
	push edi
	cmp eax,0x19
	ja Block5

 Block2:
	lea ecx,[ebp-0x75]
	cmp ecx,0x28
	ja Block5

 Block3:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x10]
	push edx
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x10]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov eax,dword ptr [esi+0xB00]
	mov ecx,dword ptr [esi+0xAFC]
	push eax
	push ecx
	lea edx,[esp+0x20]
	push edx
	mov ecx,edi
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x18]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test edi,edi
	je Block11

 Block4:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	push 0
	push 0
	push 0
	push 0
	push 0
	push edi
	mov ecx,esi
	call edx
	lea eax,[eax+ebp+0x14]
	push eax
	jmp Block9

 Block5:
	lea ecx,[ebx-0x75]
	cmp ecx,0x19
	ja Block10

 Block6:
	lea edx,[ebp-0x75]
	cmp edx,0x28
	ja Block10

 Block7:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x18]
	push eax
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x18]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov ecx,dword ptr [esi+0xB08]
	mov edx,dword ptr [esi+0xB04]
	push ecx
	push edx
	lea eax,[esp+0x18]
	push eax
	mov ecx,edi
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x10]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test edi,edi
	je Block11

 Block8:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x30]
	push 0
	push 0
	push 0
	push 0
	push 0
	push edi
	mov ecx,esi
	call eax
	lea ecx,[eax+ebp+0x14]
	push ecx

 Block9:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,ebx
	push eax
	lea ecx,[esi+0xB4]
	call CUIToolTip::ShowItemToolTip
	pop edi
	pop ebp
	pop ebx
	xor eax,eax
	pop esi
	add esp,0x10
	ret 8

 Block10:
	lea ecx,[esi+0xB4]
	call CUIToolTip::ClearToolTip

 Block11:
	pop edi
	pop ebp
	pop ebx

 Block12:
	xor eax,eax
	pop esi
	add esp,0x10
	ret 8
}
}
// CUIItemUpgrade::HitTest
__SUB_CLASS_THIS(003BE2C0, __thiscall, 67147,  CUIItemUpgrade, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [esp+0x10]
	push edi
	mov edi,dword ptr [esp+0x10]
	push esi
	push edi
	push eax
	call CWnd::HitTest
	test eax,eax
	je Block4

 Block1:
	test esi,esi
	je Block3

 Block2:
	cmp dword ptr [esi],0
	jne Block4

 Block3:
	mov ecx,0x18
	cmp ecx,edi
	sbb eax,eax
	neg eax
	inc eax

 Block4:
	pop edi
	pop esi
	ret 0xC
}
}
// CUIVega::CUIVega
_SUB_EXCEPTION_HANDLER(3C01F0)
__SUB_CLASS_THIS(003C01F0, __thiscall, 67221,  CUIVega, void, NakedParam<COutPacket>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C01F0
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
	xor edi,edi
	mov dword ptr [esp+0x24],edi
	call CUniqueModeless::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CUIVega::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIVega::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIVega::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0xA8],edi
	mov dword ptr [esi+0xB4],edi
	lea ecx,[esi+0xB8]
	mov byte ptr [esp+0x24],2
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xB10],edi
	mov dword ptr [esi+0xB14],edi
	mov dword ptr [esi+0xB18],edi
	mov dword ptr [esi+0xB1C],edi
	mov dword ptr [esi+0xB2C],edi
	mov dword ptr [esi+0xB34],edi
	mov dword ptr [esi+0xB3C],edi
	mov dword ptr [esi+0xB44],edi
	lea ebp,[esi+0xB48]
	mov ecx,ebp
	mov byte ptr [esp+0x24],0xB
	call COutPacket::_ctor_default
	mov eax,dword ptr [esp+0x3C]
	sub eax,edi
	mov bl,0xC
	mov byte ptr [esp+0x24],bl
	je Block3

 Block1:
	sub eax,1
	jne Block17

 Block2:
	lea eax,[esp+0x3C]
	push 0x1528
	push eax
	mov dword ptr [esi+0x94],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x34],0xE
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x3C]
	jmp Block4

 Block3:
	lea ecx,[esp+0x14]
	push 0x1527
	push ecx
	mov dword ptr [esi+0x94],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x34],0xD
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x14]

 Block4:
	mov byte ptr [esp+0x24],bl
	cmp eax,edi
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esi+0xB3C]
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	cmp eax,edi
	je Block11

 Block7:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block8:
	mov eax,dword ptr [esi+0xB3C]
	add eax,4
	push eax
	call ebx
	mov ecx,dword ptr [esi+0xB3C]
	cmp ecx,edi
	je Block10

 Block9:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block10:
	mov dword ptr [esi+0xB3C],edi

 Block11:
	mov dword ptr [esi+0xB00],edi
	mov dword ptr [esi+0xB04],edi
	mov eax,dword ptr [esi+0xB44]
	cmp eax,edi
	je Block16

 Block12:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block15

 Block13:
	mov eax,dword ptr [esi+0xB44]
	add eax,4
	push eax
	call ebx
	mov ecx,dword ptr [esi+0xB44]
	cmp ecx,edi
	je Block15

 Block14:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block15:
	mov dword ptr [esi+0xB44],edi

 Block16:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [esi+0xB08],edi
	mov dword ptr [esi+0xB0C],edi
	mov dword ptr [esi+0xAC],edi
	lea edx,[esp+0x30]
	mov dword ptr [ebp],ecx
	push edx
	lea ecx,[ebp+4]
	call ZArray<unsigned char>::operator=
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr [ebp+8],eax
	mov dword ptr [ebp+0xC],ecx
	mov eax,0x43
	mov dword ptr [esi+0x9C],eax
	mov dword ptr [esi+0xA0],eax
	mov dword ptr [esi+0xA4],edi

 Block17:
	lea ecx,[esp+0x30]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov eax,esi
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 0x14
}
}
// CUIItemUpgrade::OnKey
__SUB_CLASS_THIS(003BE290, __thiscall, 67146,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	test dword ptr [esp+8],0x80000000
	jne Block5

 Block1:
	cmp dword ptr [esp+4],0x1B
	jne Block5

 Block2:
	mov eax,dword ptr [ecx+0x90]
	cmp eax,1
	je Block5

 Block3:
	test eax,eax
	jne Block5

 Block4:
	mov eax,dword ptr [ecx-4]
	mov edx,dword ptr [eax+0x34]
	add ecx,0xFFFFFFFC
	push 2
	call edx

 Block5:
	ret 8
}
}
// CUIVegaResultPopup::OnButtonClicked
__SUB_CLASS_THIS(003BE390, __thiscall, 71962,  CUIVegaResultPopup, void, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,1
	jne Block2

 Block1:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],1
	jmp edx

 Block2:
	cmp eax,2
	jne Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],2
	jmp edx

 Block4:
	cmp eax,8
	jne Block6

 Block5:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x34]
	mov dword ptr [esp+4],8
	jmp edx

 Block6:
	ret 4
}
}
// CUIItemUpgrade::OnItemUpgradeResult
_SUB_EXCEPTION_HANDLER(3C0FD0)
__SUB_CLASS_THIS(003C0FD0, __thiscall, 67143,  CUIItemUpgrade, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C0FD0
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
	xor ebx,ebx
	mov dword ptr [esi+0xB0],ebx
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov edi,eax
	mov dword ptr [eax+0x20B8],ebx
	call get_update_time
	mov dword ptr [edi+0x20BC],eax
	mov edi,dword ptr [esp+0x2C]
	mov ecx,edi
	call CInPacket::Decode1
	movzx eax,al
	mov dword ptr [esi+0x9C],eax
	cmp eax,0x41
	jne Block14

 Block1:
	mov ebp,dword ptr [_D_G_PSTAGE+4]
	mov eax,dword ptr [esi+0xE8]
	mov edi,dword ptr [esi+0xA4]
	mov dword ptr [esp+0x14],eax
	cmp ebp,ebx
	je Block3

 Block2:
	mov edx,dword ptr [ebp+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[ebp+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	jne Block4

 Block3:
	xor ebp,ebp

 Block4:
	mov dword ptr [ebp+0x23C],ebx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 1
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x2C]
	call CInPacket::Decode4
	mov dword ptr [esp+0x2C],ebx
	cmp eax,ebx
	jne Block8

 Block5:
	lea ecx,[esp+0x18]
	push 0x13D0
	push ecx
	mov dword ptr [esp+0x2C],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	mov edx,edi
	sar edx,8
	and edx,0xFF
	and edi,0xFF
	sub edx,edi
	add edx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],1
	push edx
	push eax
	lea eax,[esp+0x34]
	push eax
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x24],bl
	cmp eax,ebx
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	lea edx,[esp+0x40]
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push edx
	jmp Block11

 Block8:
	lea eax,[esp+0x18]
	push 0x1A86
	push eax
	mov dword ptr [esp+0x2C],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xA0]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0x30],3
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x24],2
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	lea eax,[esp+0x40]
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push eax

 Block11:
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign

 Block12:
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x40]
	add esp,0x14
	mov dword ptr [esp+0x24],0xFFFFFFFF
	cmp eax,ebx
	je Block29

 Block13:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block29

 Block14:
	mov ecx,edi
	cmp eax,0x42
	jne Block27

 Block15:
	call CInPacket::Decode4
	mov edi,dword ptr [_D_G_PSTAGE+4]
	mov ebp,eax
	cmp edi,ebx
	je Block17

 Block16:
	mov edx,dword ptr [edi+4]
	mov eax,dword ptr [edx+0x48]
	lea ecx,[edi+4]
	push offset CField::ms_RTTI_CField
	call eax
	test eax,eax
	jne Block18

 Block17:
	xor edi,edi

 Block18:
	mov dword ptr [edi+0x23C],ebx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 1
	mov ecx,esi
	call eax
	cmp ebp,1
	jne Block20

 Block19:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x13CE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block29

 Block20:
	cmp ebp,2
	jne Block22

 Block21:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x13CF
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block29

 Block22:
	cmp ebp,3
	jne Block24

 Block23:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x13D1
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	jmp Block29

 Block24:
	mov dword ptr [esp+0x2C],ebx
	lea ecx,[esp+0x18]
	push 0x1A86
	push ecx
	mov dword ptr [esp+0x2C],4
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi+0xA0]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0x30],5
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x24],4
	cmp eax,ebx
	je Block26

 Block25:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block26:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	lea edx,[esp+0x40]
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push edx
	call ZXString<char>::_ctor_copy
	jmp Block12

 Block27:
	call CInPacket::Decode4
	mov ecx,edi
	mov dword ptr [esi+0xA0],eax
	call CInPacket::Decode4
	cmp dword ptr [esi+0x94],2
	mov dword ptr [esi+0xA4],eax
	mov dword ptr [esi+0x98],1
	jne Block29

 Block28:
	mov ecx,esi
	call CUIItemUpgrade::ShowResult

 Block29:
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
// CUIVega::GetRTTI
__SUB_CLASS_THIS0(003C0440, __thiscall, 67236,  CUIVega, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIVega::ms_RTTI_CUIVega
	ret
}
}
// CUIItemUpgrade::CUIItemUpgrade
_SUB_EXCEPTION_HANDLER(3BFD40)
__SUB_CLASS_THIS(003BFD40, __thiscall, 67138,  CUIItemUpgrade, void, NakedParam<COutPacket>, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BFD40
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
	xor edi,edi
	mov dword ptr [esp+0x24],edi
	call CUniqueModeless::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CUIItemUpgrade::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIItemUpgrade::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIItemUpgrade::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x94],edi
	mov dword ptr [esi+0xB0],edi
	mov dword ptr [esi+0xB8],edi
	mov dword ptr [esi+0xC0],edi
	mov dword ptr [esi+0xC8],edi
	mov dword ptr [esi+0xCC],edi
	mov dword ptr [esi+0xD0],edi
	lea ecx,[esi+0xEC]
	mov byte ptr [esp+0x24],6
	call CUIToolTip::_ctor_default
	lea ebp,[esi+0xB34]
	mov ecx,ebp
	mov byte ptr [esp+0x24],7
	call COutPacket::_ctor_default
	lea ebx,[esi+0xB44]
	mov ecx,ebx
	mov byte ptr [esp+0x24],8
	call COutPacket::_ctor_default
	lea eax,[esp+0x14]
	push 0x13CB
	push eax
	mov byte ptr [esp+0x2C],9
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	push edi
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x34],0xA
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x24],9
	cmp eax,edi
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esi+0xC8]
	cmp eax,edi
	je Block7

 Block3:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block6

 Block4:
	mov eax,dword ptr [esi+0xC8]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0xC8]
	cmp ecx,edi
	je Block6

 Block5:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block6:
	mov dword ptr [esi+0xC8],edi

 Block7:
	mov ecx,dword ptr [esp+0x2C]
	lea edx,[esp+0x30]
	mov dword ptr [ebp],ecx
	push edx
	lea ecx,[ebp+4]
	call ZArray<unsigned char>::operator=
	mov eax,dword ptr [esp+0x34]
	mov ecx,dword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [ebp+8],eax
	mov dword ptr [ebp+0xC],ecx
	lea eax,[esp+0x30]
	mov dword ptr [esi+0x98],edi
	mov dword ptr [esi+0x9C],edi
	mov dword ptr [esi+0xA0],0xFFFFFFFE
	push eax
	lea ecx,[ebx+4]
	mov dword ptr [ebx],edx
	call ZArray<unsigned char>::operator=
	mov ecx,dword ptr [esp+0x34]
	mov edx,dword ptr [esp+0x38]
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [ebx+8],ecx
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [ebx+0xC],edx
	mov dword ptr [esi+0xA8],ecx
	lea ecx,[esp+0x30]
	mov dword ptr [esi+0xA4],edi
	mov dword ptr [esi+0xAC],eax
	mov dword ptr [esi+0xE8],2
	mov dword ptr [esp+0x24],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov eax,esi
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x14
	ret 0x18
}
}
// CUIItemUpgrade::DrawGaugeBar
_SUB_EXCEPTION_HANDLER(3BF0F0)
__SUB_CLASS_THIS(003BF0F0, __thiscall, 67151,  CUIItemUpgrade, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BF0F0
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
	mov eax,3
	mov edx,0xFF
	mov dword ptr [esp+0x38],0
	mov word ptr [esp+0x20],ax
	mov dword ptr [esp+0x28],edx
	mov ecx,dword ptr [esp+0x40]
	mov esi,dword ptr [edi+0xCC]
	mov byte ptr [esp+0x38],1
	test ecx,ecx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ebp,dword ptr [esp+0x20]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x34]
	push esi
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x40]
	push 0x98
	push 6
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebx+0x80]
	push ecx
	mov dword ptr [esp+0x38],ecx
	call eax
	xor ebx,ebx
	cmp eax,ebx
	jge Block4

 Block3:
	mov ecx,dword ptr [esp+0x18]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block4:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x38],bl
	jne Block7

 Block5:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	cmp eax,ebx
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
	xor esi,esi
	cmp dword ptr [edi+0x94],1
	jne Block19

 Block9:
	cmp dword ptr [edi+0xD4],ebx
	jle Block16

 Block10:
	call get_update_time
	sub eax,dword ptr [edi+0xD4]
	cmp eax,ebx
	jle Block16

 Block11:
	mov ecx,dword ptr [edi+0xDC]
	imul ecx,eax
	mov eax,0x10624DD3
	imul ecx
	mov ecx,dword ptr [edi+0xCC]
	sar edx,6
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	cmp ecx,ebx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	call IWzCanvas::Getwidth
	sub eax,4
	cmp esi,eax
	jbe Block19

 Block14:
	mov dword ptr [edi+0x94],2
	cmp dword ptr [edi+0x98],ebx
	je Block16

 Block15:
	mov ecx,edi
	call CUIItemUpgrade::ShowResult

 Block16:
	mov eax,dword ptr [esp+0x40]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebx
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 4

 Block19:
	mov eax,dword ptr [edi+0x94]
	cmp eax,1
	jne Block34

 Block20:
	mov ebp,0xC
	add esi,ebp
	cmp esi,ebp
	mov dword ptr [esp+0x18],ebp
	mov dword ptr [esp+0x1C],esi
	jle Block16

 Block21:
	mov esi,dword ptr [edi+0xCC]
	cmp esi,ebx
	je Block1

 Block22:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x14]
	push ecx
	push esi
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block24

 Block23:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block24:
	cmp ebp,dword ptr [esp+0x14]
	jae Block16

 Block25:
	mov eax,3
	mov edx,0xFF
	mov word ptr [esp+0x20],ax
	mov dword ptr [esp+0x28],edx
	mov ecx,dword ptr [esp+0x40]
	mov esi,dword ptr [edi+0xD0]
	mov byte ptr [esp+0x38],2
	cmp ecx,ebx
	je Block1

 Block26:
	mov ebp,dword ptr [esp+0x20]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x34]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x28]
	push esi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x40]
	push 0x9C
	push ebp
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebx+0x80]
	push ecx
	mov dword ptr [esp+0x34],ecx
	call eax
	xor ebx,ebx
	cmp eax,ebx
	jge Block28

 Block27:
	mov ecx,dword ptr [esp+0x14]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block28:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x38],bl
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	cmp eax,ebx
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block32:
	inc ebp
	cmp ebp,dword ptr [esp+0x1C]
	mov dword ptr [esp+0x18],ebp
	jl Block21

 Block33:
	jmp Block16

 Block34:
	cmp eax,2
	jne Block16

 Block35:
	mov esi,dword ptr [edi+0xCC]
	mov ebp,0xC
	mov dword ptr [esp+0x14],ebp
	cmp esi,ebx
	je Block47

 Block36:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],ebx
	call eax
	cmp eax,ebx
	jge Block38

 Block37:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block38:
	cmp ebp,dword ptr [esp+0x18]
	jae Block16

 Block39:
	mov ecx,3
	mov edx,0xFF
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],edx
	mov esi,dword ptr [edi+0xD0]
	mov byte ptr [esp+0x38],cl
	mov ecx,dword ptr [esp+0x40]
	cmp ecx,ebx
	je Block1

 Block40:
	mov ebp,dword ptr [esp+0x20]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x34]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x24]
	push esi
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x40]
	push 0x9C
	push ebp
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebx+0x80]
	push ecx
	mov dword ptr [esp+0x3C],ecx
	call eax
	xor ebx,ebx
	cmp eax,ebx
	jge Block42

 Block41:
	mov ecx,dword ptr [esp+0x1C]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block42:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x38],bl
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	cmp eax,ebx
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov esi,dword ptr [edi+0xCC]
	inc ebp
	mov dword ptr [esp+0x14],ebp
	cmp esi,ebx
	jne Block36

 Block47:
	push 0x80004003
	call _com_issue_error
}
}
// CUIVega::~CUIVega
_SUB_EXCEPTION_HANDLER(3C0490)
__SUB_CLASS_THIS0(003C0490, __thiscall, 67223,  CUIVega, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C0490
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIVega::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIVega::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIVega::`vftable'{for `ZRefCounted'}
	lea ecx,[esi+0xB4C]
	mov dword ptr [esp+0x20],0xA
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esi+0xB44]
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	xor ebx,ebx
	mov byte ptr [esp+0x20],9
	cmp eax,ebx
	je Block5

 Block1:
	add eax,4
	push eax
	call ebp
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0xB44]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [esi+0xB44]
	cmp ecx,ebx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+0xB44],ebx

 Block5:
	mov eax,dword ptr [esi+0xB3C]
	mov byte ptr [esp+0x20],8
	cmp eax,ebx
	je Block10

 Block6:
	add eax,4
	push eax
	call ebp
	test eax,eax
	jne Block9

 Block7:
	mov eax,dword ptr [esi+0xB3C]
	add eax,4
	push eax
	call edi
	mov ecx,dword ptr [esi+0xB3C]
	cmp ecx,ebx
	je Block9

 Block8:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block9:
	mov dword ptr [esi+0xB3C],ebx

 Block10:
	lea edi,[esi+0xB30]
	mov byte ptr [esp+0x20],7
	cmp dword ptr [edi+4],ebx
	je Block12

 Block11:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block12:
	lea edi,[esi+0xB28]
	mov byte ptr [esp+0x20],6
	cmp dword ptr [edi+4],ebx
	je Block14

 Block13:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block14:
	lea ecx,[esi+0xB1C]
	mov byte ptr [esp+0x20],5
	call ZArray<_x_com_ptr<IWzCanvas>>::RemoveAll
	mov eax,dword ptr [esi+0xB18]
	mov byte ptr [esp+0x20],4
	cmp eax,ebx
	je Block16

 Block15:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block16:
	mov eax,dword ptr [esi+0xB14]
	mov byte ptr [esp+0x20],3
	cmp eax,ebx
	je Block18

 Block17:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block18:
	mov eax,dword ptr [esi+0xB10]
	mov byte ptr [esp+0x20],2
	cmp eax,ebx
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block20:
	lea ecx,[esi+0xB8]
	mov byte ptr [esp+0x20],1
	call CUIToolTip::~CUIToolTip
	lea ecx,[esi+0xB4]
	mov byte ptr [esp+0x20],bl
	call ZArray<long>::RemoveAll
	int 3// TODO: 	mov dword ptr [esi],offset CUniqueModeless::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUniqueModeless::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUniqueModeless::`vftable'{for `ZRefCounted'}
	mov ecx,esi
	mov dword ptr [esp+0x20],0xFFFFFFFF
	mov dword ptr [TSingleton<CUniqueModeless>::ms_pInstance],ebx
	call CDialog::~CDialog
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
// CUIVega::OnButtonClicked
_SUB_EXCEPTION_HANDLER(3BF4A0)
__SUB_CLASS_THIS(003BF4A0, __thiscall, 67228,  CUIVega, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BF4A0
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
	cmp eax,0x7D0
	jne Block13

 Block1:
	mov eax,dword ptr [esi+0xB3C]
	test eax,eax
	je Block20

 Block2:
	cmp dword ptr [esi+0xB44],0
	je Block20

 Block3:
	mov eax,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	test eax,eax
	je Block22

 Block4:
	cmp dword ptr [eax+0x63C],0
	jle Block6

 Block5:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x40],esp
	push 0x116
	push eax
	jmp Block21

 Block6:
	mov eax,dword ptr [eax+0x640]
	and eax,0xFFFFFFFE
	cmp eax,0x12
	jne Block8

 Block7:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x40],esp
	push 0x42
	push ecx
	jmp Block21

 Block8:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x14]
	push edx
	call CWvsContext::GetCharacterData
	lea ecx,[esp+0x14]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov eax,dword ptr [esi+0xB3C]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov edi,eax
	mov eax,dword ptr [esi+0xB44]
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push edi
	push eax
	call is_correct_upgrade_equip
	add esp,8
	test eax,eax
	je Block19

 Block9:
	mov ecx,dword ptr [esi+0xB3C]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+4]
	call edx
	test eax,eax
	je Block11

 Block10:
	push 0
	push 1
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0x1160
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::YesNo_0
	add esp,0x14
	cmp eax,6
	jne Block22

 Block11:
	mov eax,dword ptr [esi+0xB34]
	lea ecx,[eax+4]
	mov dword ptr [esi+0xAC],1
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+0x1C]
	push 0
	call eax
	mov ecx,dword ptr [esi+0xB00]
	lea edi,[esi+0xB48]
	push ecx
	mov ecx,edi
	mov dword ptr [esi+0x98],1
	call COutPacket::Encode4
	mov edx,dword ptr [esi+0xB04]
	push edx
	mov ecx,edi
	call COutPacket::Encode4
	mov eax,dword ptr [esi+0xB08]
	push eax
	mov ecx,edi
	call COutPacket::Encode4
	mov ecx,dword ptr [esi+0xB0C]
	push ecx
	mov ecx,edi
	call COutPacket::Encode4
	mov edx,dword ptr [esi+0xAC]
	push edx
	mov ecx,edi
	call COutPacket::Encode4
	call get_update_time
	push eax
	mov ecx,edi
	call COutPacket::Encode4
	push edi
	call SendPacket
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	add esp,4
	push 1
	call CWvsContext::SetExclRequestSent
	mov eax,dword ptr [esi+0xB2C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	push 3
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x14],esp
	push eax
	mov ecx,esi
	call CWnd::GetLayer
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x30],0
	call CWnd::GetLayer
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	mov byte ptr [esp+0x34],1
	call _x_com_ptr<IWzVector2D>::CreateFromWzGr2DLayerComPtr
	mov byte ptr [esp+0x30],2
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0
	call CAnimationDisplayer::Effect_Vega
	mov eax,dword ptr [esp+0x2C]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block22

 Block12:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4

 Block13:
	cmp eax,1
	jne Block15

 Block14:
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x34]
	call eax
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4

 Block15:
	cmp eax,2
	jne Block17

 Block16:
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x34]
	call eax
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4

 Block17:
	cmp eax,8
	jne Block22

 Block18:
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x34]
	call eax
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4

 Block19:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x24],esp
	push 0x152F
	push ecx
	jmp Block21

 Block20:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x40],esp
	push 0x152E
	push edx

 Block21:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block22:
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x1C
	ret 4
}
}
// CUIVega::DrawCount
_SUB_EXCEPTION_HANDLER(3BE6C0)
__SUB_CLASS_THIS(003BE6C0, __thiscall, 67233,  CUIVega, void, NakedParam<_x_com_ptr<IWzCanvas>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BE6C0
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
	mov esi,ecx
	mov eax,dword ptr [esi+0x94]
	xor ebx,ebx
	sub eax,ebx
	mov dword ptr [esp+0x9C],ebx
	je Block25

 Block1:
	sub eax,1
	jne Block51

 Block2:
	mov eax,3
	mov edi,0xFF
	mov word ptr [esp+0x14],ax
	mov dword ptr [esp+0x1C],edi
	mov eax,dword ptr [esi+0xB1C]
	mov ecx,dword ptr [esp+0xA4]
	add eax,0x18
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x9C],5
	cmp ecx,ebx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[esp+0x14]
	push edx
	push eax
	push 0x25
	push 0x1F
	call IWzCanvas::Copy
	mov ebp,8
	mov byte ptr [esp+0x9C],bl
	cmp word ptr [esp+0x14],bp
	jne Block7

 Block5:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov edx,3
	mov word ptr [esp+0x24],dx
	mov dword ptr [esp+0x2C],edi
	mov ecx,dword ptr [esp+0xA4]
	mov eax,dword ptr [esi+0xB1C]
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x9C],6
	cmp ecx,ebx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea edx,[esp+0x24]
	push edx
	push eax
	push 0x25
	push 0x27
	call IWzCanvas::Copy
	mov byte ptr [esp+0x9C],bl
	cmp word ptr [esp+0x24],bp
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebx
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
	mov edx,3
	mov word ptr [esp+0x34],dx
	mov dword ptr [esp+0x3C],edi
	mov eax,dword ptr [esi+0xB1C]
	mov ecx,dword ptr [esp+0xA4]
	add eax,0x24
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x9C],7
	cmp ecx,ebx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea edx,[esp+0x34]
	push edx
	push eax
	push 0x25
	push 0x7B
	call IWzCanvas::Copy
	mov byte ptr [esp+0x9C],bl
	cmp word ptr [esp+0x34],bp
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebx
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov edx,3
	mov word ptr [esp+0x44],dx
	mov dword ptr [esp+0x4C],edi
	mov ecx,dword ptr [esp+0xA4]
	mov esi,dword ptr [esi+0xB1C]
	mov esi,dword ptr [esi]
	mov byte ptr [esp+0x9C],8
	cmp ecx,ebx
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea eax,[esp+0x44]
	push eax
	push esi
	push 0x25
	push 0x83
	call IWzCanvas::Copy
	mov byte ptr [esp+0x9C],bl
	cmp word ptr [esp+0x44],bp
	jne Block24

 Block23:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	jmp Block47

 Block24:
	lea edx,[esp+0x44]
	jmp Block50

 Block25:
	mov eax,3
	mov edi,0xFF
	mov word ptr [esp+0x54],ax
	mov dword ptr [esp+0x5C],edi
	mov eax,dword ptr [esi+0xB1C]
	mov ecx,dword ptr [esp+0xA4]
	add eax,4
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x9C],1
	cmp ecx,ebx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea edx,[esp+0x54]
	push edx
	push eax
	push 0x25
	push 0x1F
	call IWzCanvas::Copy
	mov ebp,8
	mov byte ptr [esp+0x9C],bl
	cmp word ptr [esp+0x54],bp
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [esp+0x54],ax
	mov eax,dword ptr [esp+0x5C]
	cmp eax,ebx
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[esp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov edx,3
	mov word ptr [esp+0x64],dx
	mov dword ptr [esp+0x6C],edi
	mov ecx,dword ptr [esp+0xA4]
	mov eax,dword ptr [esi+0xB1C]
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x9C],2
	cmp ecx,ebx
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	lea edx,[esp+0x64]
	push edx
	push eax
	push 0x25
	push 0x27
	call IWzCanvas::Copy
	mov byte ptr [esp+0x9C],bl
	cmp word ptr [esp+0x64],bp
	jne Block36

 Block34:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	cmp eax,ebx
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov edx,3
	mov word ptr [esp+0x74],dx
	mov dword ptr [esp+0x7C],edi
	mov eax,dword ptr [esi+0xB1C]
	mov ecx,dword ptr [esp+0xA4]
	add eax,0xC
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x9C],dl
	cmp ecx,ebx
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea edx,[esp+0x74]
	push edx
	push eax
	push 0x25
	push 0x7B
	call IWzCanvas::Copy
	mov byte ptr [esp+0x9C],bl
	cmp word ptr [esp+0x74],bp
	jne Block42

 Block40:
	xor eax,eax
	mov word ptr [esp+0x74],ax
	mov eax,dword ptr [esp+0x7C]
	cmp eax,ebx
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea ecx,[esp+0x74]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov edx,3
	mov word ptr [esp+0x84],dx
	mov dword ptr [esp+0x8C],edi
	mov ecx,dword ptr [esp+0xA4]
	mov esi,dword ptr [esi+0xB1C]
	mov esi,dword ptr [esi]
	mov byte ptr [esp+0x9C],4
	cmp ecx,ebx
	jne Block45

 Block44:
	push 0x80004003
	call _com_issue_error

 Block45:
	lea eax,[esp+0x84]
	push eax
	push esi
	push 0x25
	push 0x83
	call IWzCanvas::Copy
	mov byte ptr [esp+0x9C],bl
	cmp word ptr [esp+0x84],bp
	jne Block49

 Block46:
	mov eax,dword ptr [esp+0x8C]
	xor ecx,ecx
	mov word ptr [esp+0x84],cx

 Block47:
	cmp eax,ebx
	je Block51

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block49:
	lea edx,[esp+0x84]

 Block50:
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov eax,dword ptr [esp+0xA4]
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	cmp eax,ebx
	je Block53

 Block52:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block53:
	mov ecx,dword ptr [esp+0x94]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x8C
	ret 4
}
}
// CUIVega::is_right_scroll
__SUB_CLASS_THIS(003BE3E0, __thiscall, 67234,  CUIVega, int32_t, long) {
__asm {

 Block0:
	mov edx,dword ptr [ecx+0xB0]
	xor eax,eax
	push esi
	test edx,edx
	jle Block4

 Block1:
	mov ecx,dword ptr [ecx+0xB4]
	mov esi,dword ptr [esp+8]

 Block2:
	cmp dword ptr [ecx],esi
	je Block5

 Block3:
	inc eax
	add ecx,4
	cmp eax,edx
	jl Block2

 Block4:
	xor eax,eax
	pop esi
	ret 4

 Block5:
	mov eax,1
	pop esi
	ret 4
}
}
// CUIVegaResultPopup::CUIVegaResultPopup
_SUB_EXCEPTION_HANDLER(3BF9F0)
__SUB_CLASS_THIS(003BF9F0, __thiscall, 71958,  CUIVegaResultPopup, void, long, NakedParam<ZRef<GW_ItemSlotBase>>, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BF9F0
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
	mov dword ptr [esp+0x14],0
	call CDialog::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CUIVegaResultPopup::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIVegaResultPopup::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIVegaResultPopup::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x94],0
	lea ecx,[esi+0x9C]
	mov byte ptr [esp+0x14],2
	call CUIToolTip::_ctor_default
	lea ecx,[esi+0xAE4]
	mov dword ptr [ecx+4],0
	mov eax,dword ptr [esp+0x1C]
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0x18],4
	mov dword ptr [esi+0x98],eax
	call ZRef<GW_ItemSlotBase>::op_assign_copy
	mov eax,dword ptr [esp+0x28]
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr [esi+0xAEC],eax
	mov eax,dword ptr [esi+0x98]
	sub eax,1
	mov dword ptr [esi+0xAF0],ecx
	je Block3

 Block1:
	sub eax,1
	jne Block6

 Block2:
	lea edx,[esp+0x1C]
	push 0x152A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x24],6
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x1C]
	jmp Block4

 Block3:
	lea eax,[esp+0x28]
	push 0x1529
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push 0
	push 0
	push 1
	push eax
	mov ecx,esi
	mov byte ptr [esp+0x24],5
	call CDialog::CreateDlg_2
	mov eax,dword ptr [esp+0x28]

 Block4:
	mov byte ptr [esp+0x14],4
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block10

 Block7:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block8:
	mov ecx,dword ptr [esp+0x24]
	add ecx,4
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esp+0x24]
	test ecx,ecx
	je Block10

 Block9:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx]
	push 1
	call eax

 Block10:
	mov eax,esi
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 0x14
}
}
// CUIVega::Update
__SUB_CLASS_THIS0(003BE330, __thiscall, 67223,  CUIVega, void) {
__asm {

 Block0:
	push esi
	push 0
	mov esi,ecx
	call CWnd::InvalidateRect
	mov ecx,esi
	pop esi
	jmp  CWnd::Update
}
}
// CUIVega::HitTest
__SUB_CLASS_THIS(003BE350, __thiscall, 67230,  CUIVega, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [esp+0x10]
	push edi
	mov edi,dword ptr [esp+0x10]
	push esi
	push edi
	push eax
	call CWnd::HitTest
	test eax,eax
	je Block4

 Block1:
	test esi,esi
	je Block3

 Block2:
	cmp dword ptr [esi],0
	jne Block4

 Block3:
	mov ecx,0x18
	cmp ecx,edi
	sbb eax,eax
	neg eax
	inc eax

 Block4:
	pop edi
	pop esi
	ret 0xC
}
}
// CUIVegaResultPopup::Draw
_SUB_EXCEPTION_HANDLER(3BFC80)
__SUB_CLASS_THIS(003BFC80, __thiscall, 71963,  CUIVegaResultPopup, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BFC80
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
	mov eax,dword ptr [esp+0x20]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov esi,dword ptr [esi+0xAE8]
	mov edi,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0
	test esi,esi
	je Block4

 Block1:
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0x61
	push 0x3C
	lea ecx,[esi+0xC]
	call TSecType<long>::GetData
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block3

 Block2:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block3:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot

 Block4:
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test edi,edi
	je Block6

 Block5:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block6:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CUIItemUpgrade::ShowResult
_SUB_EXCEPTION_HANDLER(3BEC20)
__SUB_CLASS_THIS0(003BEC20, __thiscall, 67140,  CUIItemUpgrade, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BEC20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	cmp dword ptr [esi+0x9C],0x3D
	jne Block5

 Block1:
	cmp dword ptr [esi+0xA0],0
	jne Block5

 Block2:
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x14],esp
	push eax
	call CWnd::GetLayer
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,esi
	mov dword ptr [esp+0x28],0
	call CWnd::GetLayer
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push eax
	mov byte ptr [esp+0x2C],1
	call _x_com_ptr<IWzVector2D>::CreateFromWzGr2DLayerComPtr
	mov byte ptr [esp+0x28],2
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0
	call CAnimationDisplayer::Effect_ViciousHammer
	mov eax,dword ptr [esp+8]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block4:
	call get_update_time
	add eax,0x3E8
	jmp Block6

 Block5:
	call get_update_time

 Block6:
	mov dword ptr [esi+0xD8],eax
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x18
	ret
}
}
// CUIItemUpgrade::Draw
_SUB_EXCEPTION_HANDLER(3C0100)
__SUB_CLASS_THIS(003C0100, __thiscall, 67144,  CUIItemUpgrade, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C0100
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
	mov eax,dword ptr [esp+0x20]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,edi
	call CWnd::GetCanvas
	mov eax,dword ptr [edi+0xC8]
	mov dword ptr [esp+0x18],0
	test eax,eax
	jne Block3

 Block1:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block10

 Block2:
	mov edx,dword ptr [eax]
	push eax
	jmp Block9

 Block3:
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0x7A
	push 0x28
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	mov esi,dword ptr [esp+0x44]
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block5

 Block4:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block5:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x10],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block7

 Block6:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block7:
	mov ecx,edi
	call CUIItemUpgrade::DrawGaugeBar
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test esi,esi
	je Block10

 Block8:
	mov edx,dword ptr [esi]
	push esi

 Block9:
	mov eax,dword ptr [edx+8]
	call eax

 Block10:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret 4
}
}
// CUIItemUpgrade::OnButtonClicked
_SUB_EXCEPTION_HANDLER(3C0CA0)
__SUB_CLASS_THIS(003C0CA0, __thiscall, 67145,  CUIItemUpgrade, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C0CA0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x14
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x24]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [esp+0x1C],0
	mov ecx,dword ptr [esp+0x34]
	mov eax,ecx
	sub eax,0x7D0
	mov dword ptr [esp+0x2C],0
	je Block4

 Block1:
	sub eax,1
	je Block3

 Block2:
	push ecx
	mov ecx,esi
	call CDialog::OnButtonClicked
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 2
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 4

 Block4:
	cmp dword ptr [esi+0xC8],0
	jne Block6

 Block5:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push 0x13CE
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 4

 Block6:
	cmp dword ptr [esi+0xB0],0
	je Block11

 Block7:
	mov dword ptr [esp+0x34],0
	lea ecx,[esp+0x10]
	push 0x1A86
	mov ebx,1
	push ecx
	mov byte ptr [esp+0x34],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 9
	push eax
	lea edx,[esp+0x3C]
	push edx
	mov byte ptr [esp+0x38],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x1C]
	add esp,0xC
	mov byte ptr [esp+0x2C],bl
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block9:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	lea eax,[esp+0x48]
	mov dword ptr [esp+0x34],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov eax,dword ptr [esp+0x48]
	add esp,0x14
	mov byte ptr [esp+0x2C],0
	test eax,eax
	je Block20

 Block10:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	jmp Block19

 Block11:
	mov ecx,dword ptr [esi+0xE0]
	lea edi,[esi+0xB34]
	push ecx
	mov ecx,edi
	call COutPacket::Encode4
	mov edx,dword ptr [esi+0xE4]
	push edx
	mov ecx,edi
	call COutPacket::Encode4
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	cmp dword ptr [eax+0x20B8],0
	mov ebx,eax
	jne Block14

 Block12:
	mov eax,dword ptr [eax+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block14

 Block13:
	call get_update_time
	sub eax,dword ptr [ebx+0x20BC]
	cmp eax,0x1F4
	jge Block15

 Block14:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x48],esp
	push 0x136
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 4

 Block15:
	call get_update_time
	mov ebx,1
	mov dword ptr [esi+0xD4],eax
	mov dword ptr [esi+0x94],ebx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push ebx
	call CWvsContext::SetExclRequestSent
	mov eax,dword ptr [esi+0xC0]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	mov eax,dword ptr [esi+0xB8]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 0
	call edx
	call get_update_time
	push eax
	mov ecx,edi
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	push edi
	call CClientSocket::SendPacket
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x3C],esp
	push eax
	mov ecx,esi
	mov dword ptr [esi+0xB0],ebx
	call CWnd::GetLayer
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x38],3
	call CWnd::GetLayer
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov byte ptr [esp+0x3C],4
	call _x_com_ptr<IWzVector2D>::CreateFromWzGr2DLayerComPtr
	mov byte ptr [esp+0x38],5
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	push 0
	call CAnimationDisplayer::Effect_ViciousHammer
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x2C],0
	test eax,eax
	je Block17

 Block16:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block17:
	lea ecx,[esp+0x18]
	push 0x13D4
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov byte ptr [esp+0x30],6
	call play_ui_sound
	mov eax,dword ptr [esp+0x1C]
	add esp,4
	mov byte ptr [esp+0x2C],0
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release

 Block19:
	add esp,4

 Block20:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x20
	ret 4
}
}
// CUIItemUpgrade::PutItem
__SUB_CLASS_THIS(003BF040, __thiscall, 67150,  CUIItemUpgrade, int32_t, GW_ItemSlotBase*, long, long) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	test edi,edi
	jne Block2

 Block1:
	pop edi
	xor eax,eax
	pop esi
	ret 0xC

 Block2:
	cmp dword ptr [esi+0x94],0
	jne Block1

 Block3:
	push edi
	lea ecx,[esi+0xC4]
	call ZRef<GW_ItemSlotBase>::op_assign_ptr
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr [esi+0xE0],eax
	mov eax,dword ptr [esi+0xC0]
	mov dword ptr [esi+0xE4],ecx
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax
	mov eax,dword ptr [esi+0xB8]
	mov edx,dword ptr [eax+4]
	lea ecx,[eax+4]
	mov eax,dword ptr [edx+0x1C]
	push 1
	call eax
	lea ecx,[edi+0xC]
	mov dword ptr [esi+0xE8],2
	call TSecType<long>::GetData
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push eax
	call CItemInfo::GetEquipItem
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [eax+0x26C]
	mov dword ptr [esi+0xE8],ecx

 Block5:
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	pop edi
	mov eax,1
	pop esi
	ret 0xC
}
}
// CUIItemUpgrade::GetRTTI
__SUB_CLASS_THIS0(003BFF30, __thiscall, 67153,  CUIItemUpgrade, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIItemUpgrade::ms_RTTI_CUIItemUpgrade
	ret
}
}
// CUIVegaResultPopup::~CUIVegaResultPopup
_SUB_EXCEPTION_HANDLER(3BFB80)
__SUB_CLASS_THIS0(003BFB80, __thiscall, 71960,  CUIVegaResultPopup, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BFB80
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIVegaResultPopup::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIVegaResultPopup::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIVegaResultPopup::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xAE8]
	mov dword ptr [esp+0x18],2
	test eax,eax
	je Block5

 Block1:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	mov eax,dword ptr [esi+0xAE8]
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]
	mov ecx,dword ptr [esi+0xAE8]
	test ecx,ecx
	je Block4

 Block3:
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax]
	push 1
	call edx

 Block4:
	mov dword ptr [esi+0xAE8],0

 Block5:
	lea ecx,[esi+0x9C]
	mov byte ptr [esp+0x18],1
	call CUIToolTip::~CUIToolTip
	cmp dword ptr [esi+0x94],0
	lea edi,[esi+0x90]
	mov byte ptr [esp+0x18],0
	je Block7

 Block6:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block7:
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
// CUIItemUpgrade::Update
_SUB_EXCEPTION_HANDLER(3BEF50)
__SUB_CLASS_THIS0(003BEF50, __thiscall, 67140,  CUIItemUpgrade, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3BEF50
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
	mov eax,dword ptr [esi+0x94]
	cmp eax,2
	jne Block5

 Block1:
	cmp dword ptr [esi+0x98],1
	jne Block4

 Block2:
	call get_update_time
	cmp eax,dword ptr [esi+0xD8]
	jle Block6

 Block3:
	push 0x128
	lea ecx,[esp+0xC]
	mov dword ptr [esi+0x94],3
	call COutPacket::_ctor_1
	mov eax,dword ptr [esi+0x9C]
	push eax
	lea ecx,[esp+0xC]
	mov dword ptr [esp+0x24],0
	call COutPacket::Encode4
	mov ecx,dword ptr [esi+0xA0]
	push ecx
	lea ecx,[esp+0xC]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+8]
	push edx
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

 Block4:
	cmp eax,2
	je Block6

 Block5:
	call CWnd::Update
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect

 Block6:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x1C
	ret
}
}
// CUIVega::Draw
_SUB_EXCEPTION_HANDLER(3C1DD0)
__SUB_CLASS_THIS(003C1DD0, __thiscall, 67227,  CUIVega, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C1DD0
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
	mov esi,ecx
	mov eax,dword ptr [esp+0x40]
	push eax
	call CWnd::Draw
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	call CWnd::GetCanvas
	mov edx,3
	mov ecx,0xFF
	mov dword ptr [esp+0x38],0
	mov word ptr [esp+0x20],dx
	mov dword ptr [esp+0x28],ecx
	mov edi,dword ptr [esp+0x14]
	mov edx,dword ptr [esi+0xB18]
	mov byte ptr [esp+0x38],1
	test edi,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ebp,dword ptr [esp+0x20]
	mov ebx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x34]
	push edx
	mov edx,dword ptr [ebx+0x80]
	push 0x24
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x44]
	push 0x50
	push edi
	mov dword ptr [eax+0xC],ecx
	call edx
	xor ebp,ebp
	cmp eax,ebp
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block4:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x38],0
	jne Block7

 Block5:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	cmp eax,ebp
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov eax,dword ptr [esi+0xB3C]
	cmp eax,ebp
	je Block10

 Block9:
	push 2
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	push 0x94
	push 0x17
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x6C],esp
	push edi
	call eax
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot

 Block10:
	mov eax,dword ptr [esi+0xB44]
	cmp eax,ebp
	je Block12

 Block11:
	push 2
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	push 0x94
	push 0x76
	lea ecx,[eax+0xC]
	call TSecType<long>::GetData
	push eax
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x6C],esp
	push edi
	call edx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x44],esp
	push edi
	call ecx
	mov ecx,esi
	call CUIVega::DrawCount

 Block12:
	cmp dword ptr [esi+0xB3C],ebp
	je Block15

 Block13:
	cmp dword ptr [esi+0xB44],ebp
	je Block15

 Block14:
	push ecx
	mov eax,esp
	mov dword ptr [eax],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	mov dword ptr [esp+0x44],esp
	push edi
	call eax
	mov ecx,esi
	call CUIVega::DrawGaugeBar

 Block15:
	cmp dword ptr [esi+0x98],2
	jne Block39

 Block16:
	mov ebx,3
	mov dword ptr [esi+0x98],ebx
	mov dword ptr [esp+0x24],ebp
	mov eax,dword ptr [esi+0xA4]
	mov byte ptr [esp+0x38],2
	cmp eax,ebp
	je Block18

 Block17:
	push eax
	call stop_ui_sound_loop
	add esp,4
	mov dword ptr [esi+0xA4],ebp

 Block18:
	mov eax,dword ptr [esi+0xA0]
	cmp eax,0x45
	je Block24

 Block19:
	cmp eax,0x47
	je Block24

 Block20:
	mov dword ptr [esp+0x40],ebp
	lea ecx,[esp+0x18]
	push 0x1530
	mov bl,5
	push ecx
	mov byte ptr [esp+0x40],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi+0xA0]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x48]
	push eax
	mov byte ptr [esp+0x44],6
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x44],bl
	xor ebx,ebx
	add esp,0xC
	cmp eax,ebx
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
	push ebx
	push ebx
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	lea edx,[esp+0x54]
	mov dword ptr [esp+0x30],esp
	push edx
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	mov dword ptr [esi+0xA8],ebx
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	add esp,0x14
	mov ebp,eax
	mov dword ptr [eax+0x20B8],ebx
	call get_update_time
	mov dword ptr [ebp+0x20BC],eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x34]
	push 1
	mov ecx,esi
	call edx
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x38],2
	cmp eax,ebx
	je Block36

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block36

 Block24:
	mov eax,dword ptr [esi+0x9C]
	cmp eax,0x44
	jne Block29

 Block25:
	push 0xAF4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebp,eax
	mov dword ptr [esp+0x40],ebp
	mov byte ptr [esp+0x38],bl
	test ebp,ebp
	je Block32

 Block26:
	mov eax,dword ptr [esi+0xB04]
	mov ecx,dword ptr [esi+0xB00]
	push eax
	mov eax,dword ptr [esi+0xB3C]
	push ecx
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx+4],eax
	test eax,eax
	je Block28

 Block27:
	add eax,4
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block28:
	push 1
	mov ecx,ebp
	call CUIVegaResultPopup::_ctor_0
	jmp Block33

 Block29:
	cmp eax,0x49
	jne Block34

 Block30:
	push 0xAF4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov ebp,eax
	mov dword ptr [esp+0x40],ebp
	mov byte ptr [esp+0x38],4
	test ebp,ebp
	je Block32

 Block31:
	mov edx,dword ptr [esi+0xB04]
	mov eax,dword ptr [esi+0xB00]
	push edx
	push eax
	sub esp,8
	lea edx,[esi+0xB38]
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push edx
	call ZRef<GW_ItemSlotBase>::_ctor_copy
	push 2
	mov ecx,ebp
	call CUIVegaResultPopup::_ctor_0
	jmp Block33

 Block32:
	xor eax,eax

 Block33:
	push eax
	lea ecx,[esp+0x24]
	mov byte ptr [esp+0x3C],2
	call ZRef<CUIVegaResultPopup>::op_assign_ptr
	mov ecx,dword ptr [esp+0x24]
	call CDialog::DoModal
	xor ebp,ebp
	jmp Block35

 Block34:
	push ebp
	push ebp
	push ebp
	push ebp
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x54],esp
	push 0x1A6C
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block35:
	mov dword ptr [esi+0xA8],ebp
	mov eax,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	mov ebp,eax
	mov dword ptr [eax+0x20B8],0
	call get_update_time
	mov dword ptr [ebp+0x20BC],eax
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x34]
	push 1
	mov ecx,esi
	call eax

 Block36:
	cmp dword ptr [esp+0x24],0
	mov byte ptr [esp+0x38],0
	je Block38

 Block37:
	push 0
	lea ecx,[esp+0x24]
	call ZRef<CUIVegaResultPopup>::_ReleaseRaw

 Block38:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call edx
	jmp Block40

 Block39:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov dword ptr [esp+0x3C],0xFFFFFFFF
	call ecx

 Block40:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 4
}
}
// CUIItemUpgrade::IsKindOf
__SUB_CLASS_THIS(003BFF50, __thiscall, 67154,  CUIItemUpgrade, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIItemUpgrade::ms_RTTI_CUIItemUpgrade
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
// CUIVega::OnKey
__SUB_CLASS_THIS(003BE300, __thiscall, 67229,  IUIMsgHandler, void, uint32_t, uint32_t) {
__asm {

 Block0:
	test dword ptr [esp+8],0x80000000
	jne Block4

 Block1:
	cmp dword ptr [esp+4],0x1B
	jne Block4

 Block2:
	cmp dword ptr [ecx+0x94],1
	je Block4

 Block3:
	mov eax,dword ptr [ecx-4]
	mov edx,dword ptr [eax+0x34]
	add ecx,0xFFFFFFFC
	push 2
	call edx

 Block4:
	ret 8
}
}
// CUIVega::PutItem
_SUB_EXCEPTION_HANDLER(3C2200)
__SUB_CLASS_THIS(003C2200, __thiscall, 67232,  CUIVega, int32_t, GW_ItemSlotBase*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C2200
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
	mov ebx,ecx
	mov dword ptr [esp+0x1C],ebx
	mov edi,dword ptr [esp+0xA4]
	lea esi,[edi+0xC]
	mov ecx,esi
	call TSecType<long>::GetData
	mov ebp,eax
	mov eax,dword ptr [esp+0xA8]
	cmp eax,1
	jne Block4

 Block1:
	mov ecx,esi
	call TSecType<long>::GetData
	mov ecx,eax
	mov eax,0x431BDE83
	imul ecx
	sar edx,0x12
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,1
	jne Block63

 Block2:
	mov ecx,dword ptr [edi+0x4B]
	lea eax,[edi+0x49]
	push ecx
	push eax
	call _ZtlSecureFuseHelper<unsigned char>::call
	add esp,8
	test al,al
	je Block63

 Block3:
	push edi
	lea ecx,[ebx+0xB38]
	call ZRef<GW_ItemSlotBase>::op_assign_ptr
	mov eax,dword ptr [esp+0xAC]
	mov dword ptr [ebx+0xB00],1
	mov dword ptr [ebx+0xB04],eax
	jmp Block58

 Block4:
	cmp eax,2
	jne Block63

 Block5:
	mov eax,0x68DB8BAD
	imul ebp
	sar edx,0xC
	mov ecx,edx
	shr ecx,0x1F
	add ecx,edx
	cmp ecx,0xCC
	jne Block63

 Block6:
	cmp ebp,0x1F257B
	je Block62

 Block7:
	cmp ebp,0x1F257C
	je Block62

 Block8:
	cmp ebp,0x1F444C
	je Block62

 Block9:
	push ebp
	mov ecx,ebx
	call CUIVega::is_right_scroll
	test eax,eax
	je Block62

 Block10:
	xor edi,edi
	cmp dword ptr [ebx+0x94],edi
	jne Block33

 Block11:
	mov dword ptr [esp+0x14],edi
	lea edx,[esp+0x20]
	push 0x953
	push edx
	mov dword ptr [esp+0xA4],edi
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,eax
	lea eax,[esp+0x18]
	push 0x967
	push eax
	mov byte ptr [esp+0xA4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x1C]
	push edx
	mov byte ptr [esp+0xA8],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x9C],1
	cmp eax,edi
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x9C],0
	cmp eax,edi
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	push offset _S_0204IMG
	lea ecx,[esp+0x18]
	call ZXString<char>::op_add_assign_t_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x48]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x38]
	mov byte ptr [esp+0xA0],3
	call Ztl_variant_t::_ctor_1
	mov edx,dword ptr [esp+0x14]
	push edi
	push edi
	lea eax,[esp+0x4C]
	push eax
	lea ecx,[esp+0x40]
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	mov bl,4
	push edx
	mov byte ptr [esp+0xB4],bl
	call Ztl_bstr_t::_ctor_1
	mov byte ptr [esp+0xB0],5
	cmp dword ptr [_D_G_RM],edi
	jne Block17

 Block16:
	push 0x80004003
	call _com_issue_error

 Block17:
	lea eax,[esp+0x68]
	mov byte ptr [esp+0xB0],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA4],6
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x24]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[esp+0x54]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x34]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x44]
	call Ztl_variant_t::~Ztl_variant_t
	mov dword ptr [esp+0x18],edi
	push ebp
	lea ecx,[esp+0x1C]
	push offset _S_08D
	push ecx
	mov byte ptr [esp+0xA8],0xB
	call ZXString<char>::Format
	mov ebx,dword ptr [esp+0x24]
	add esp,0xC
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push ebx
	call Ztl_bstr_t::_ctor_1
	mov ebp,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xA8],0xC
	cmp ebp,edi
	jne Block19

 Block18:
	push 0x80004003
	call _com_issue_error

 Block19:
	lea edx,[esp+0x70]
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0xAC],0xB
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xA4],0xD
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x28]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[esp+0x64]
	mov byte ptr [esp+0x9C],0xF
	call Ztl_variant_t::~Ztl_variant_t
	push edi
	push edi
	lea eax,[esp+0x30]
	push 0x3D5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x3C],esp
	push eax
	mov byte ptr [esp+0xAC],0x10
	call Ztl_bstr_t::_ctor_1
	mov esi,dword ptr [esp+0x30]
	mov byte ptr [esp+0xA8],0x11
	cmp esi,edi
	jne Block21

 Block20:
	push 0x80004003
	call _com_issue_error

 Block21:
	lea ecx,[esp+0x80]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0xAC],0x10
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xA4],0x12
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x30]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[esp+0x74]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x9C],0x15
	cmp eax,edi
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x38],esp
	push 0x1ADC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x34]
	mov byte ptr [esp+0xA4],0x16
	test edi,edi
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea eax,[esp+0x8C]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xA8],0x15
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xA4],0x17
	call get_int32
	add esp,8
	lea ecx,[esp+0x84]
	mov dword ptr [esp+0x30],eax
	mov byte ptr [esp+0x9C],0x15
	call Ztl_variant_t::~Ztl_variant_t
	cmp dword ptr [esp+0x30],0xA
	je Block30

 Block26:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push 0x152D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	add esp,0x14
	push edi
	mov byte ptr [esp+0xA0],0xF
	call eax
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0xA0],0xB
	call edx
	mov byte ptr [esp+0x9C],0xA
	test ebx,ebx
	je Block28

 Block27:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block28:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0xA0],0
	call ecx
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	test eax,eax
	je Block65

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block65

 Block30:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0xA0],0xF
	call eax
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0xA0],0xB
	call edx
	mov byte ptr [esp+0x9C],0xA
	test ebx,ebx
	je Block32

 Block31:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block32:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0xA0],0
	call ecx
	mov eax,dword ptr [esp+0x14]
	jmp Block55

 Block33:
	mov dword ptr [esp+0x18],edi
	lea edx,[esp+0x2C]
	push 0x953
	push edx
	mov dword ptr [esp+0xA4],0x18
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov esi,eax
	lea eax,[esp+0x30]
	push 0x967
	mov bl,0x19
	push eax
	mov byte ptr [esp+0xA4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0xA8],0x1A
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov byte ptr [esp+0x9C],bl
	cmp eax,edi
	je Block35

 Block34:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block35:
	mov eax,dword ptr [esp+0x2C]
	mov byte ptr [esp+0x9C],0x18
	cmp eax,edi
	je Block37

 Block36:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block37:
	push offset _S_0204IMG
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_add_assign_t_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x38]
	call Ztl_variant_t::_ctor_1
	push offset _D_VTMISSING
	lea ecx,[esp+0x48]
	mov byte ptr [esp+0xA0],0x1B
	call Ztl_variant_t::_ctor_1
	mov edx,dword ptr [esp+0x18]
	push edi
	push edi
	lea eax,[esp+0x3C]
	push eax
	lea ecx,[esp+0x50]
	push ecx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	mov bl,0x1C
	push edx
	mov byte ptr [esp+0xB4],bl
	call Ztl_bstr_t::_ctor_1
	mov byte ptr [esp+0xB0],0x1D
	cmp dword ptr [_D_G_RM],edi
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea eax,[esp+0x98]
	mov byte ptr [esp+0xB0],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0xA4],0x1E
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x34]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[esp+0x84]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x44]
	call Ztl_variant_t::~Ztl_variant_t
	lea ecx,[esp+0x34]
	call Ztl_variant_t::~Ztl_variant_t
	mov dword ptr [esp+0x14],edi
	push ebp
	lea ecx,[esp+0x18]
	push offset _S_08D
	push ecx
	mov byte ptr [esp+0xA8],0x23
	call ZXString<char>::Format
	mov ebx,dword ptr [esp+0x20]
	add esp,0xC
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x38],esp
	push ebx
	call Ztl_bstr_t::_ctor_1
	mov ebp,dword ptr [esp+0x3C]
	mov byte ptr [esp+0xA8],0x24
	cmp ebp,edi
	jne Block41

 Block40:
	push 0x80004003
	call _com_issue_error

 Block41:
	lea edx,[esp+0x80]
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0xAC],0x23
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xA4],0x25
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x30]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[esp+0x74]
	mov byte ptr [esp+0x9C],0x27
	call Ztl_variant_t::~Ztl_variant_t
	push edi
	push edi
	lea eax,[esp+0x30]
	push 0x3D5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x30],esp
	push eax
	mov byte ptr [esp+0xAC],0x28
	call Ztl_bstr_t::_ctor_1
	mov esi,dword ptr [esp+0x38]
	mov byte ptr [esp+0xA8],0x29
	cmp esi,edi
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	lea ecx,[esp+0x70]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0xAC],0x28
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0xA4],0x2A
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x28]
	call _x_com_ptr<IWzProperty>::CreateFromUnknown
	lea ecx,[esp+0x64]
	call Ztl_variant_t::~Ztl_variant_t
	mov eax,dword ptr [esp+0x28]
	mov byte ptr [esp+0x9C],0x2D
	cmp eax,edi
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block45:
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1ADC
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov edi,dword ptr [esp+0x2C]
	mov byte ptr [esp+0xA4],0x2E
	test edi,edi
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	lea eax,[esp+0x5C]
	push eax
	mov ecx,edi
	mov byte ptr [esp+0xA8],0x2D
	call IWzProperty::Getitem
	push eax
	mov byte ptr [esp+0xA4],0x2F
	call get_int32
	add esp,8
	lea ecx,[esp+0x54]
	mov dword ptr [esp+0x20],eax
	mov byte ptr [esp+0x9C],0x2D
	call Ztl_variant_t::~Ztl_variant_t
	cmp dword ptr [esp+0x20],0x3C
	je Block52

 Block48:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x34],esp
	push 0x152D
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	add esp,0x14
	push edi
	mov byte ptr [esp+0xA0],0x27
	call eax
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0xA0],0x23
	call edx
	mov byte ptr [esp+0x9C],0x22
	test ebx,ebx
	je Block50

 Block49:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block50:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0xA0],0x18
	call ecx
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	test eax,eax
	je Block65

 Block51:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4
	jmp Block65

 Block52:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	mov byte ptr [esp+0xA0],0x27
	call eax
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0xA0],0x23
	call edx
	mov byte ptr [esp+0x9C],0x22
	test ebx,ebx
	je Block54

 Block53:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block54:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov byte ptr [esp+0xA0],0x18
	call ecx
	mov eax,dword ptr [esp+0x18]

 Block55:
	mov dword ptr [esp+0x9C],0xFFFFFFFF
	test eax,eax
	je Block57

 Block56:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block57:
	mov edx,dword ptr [esp+0xA4]
	mov esi,dword ptr [esp+0x1C]
	push edx
	lea ecx,[esi+0xB40]
	call ZRef<GW_ItemSlotBase>::op_assign_ptr
	mov eax,dword ptr [esp+0xAC]
	mov dword ptr [esi+0xB08],2
	mov dword ptr [esi+0xB0C],eax
	mov ebx,esi

 Block58:
	cmp dword ptr [ebx+0xB3C],0
	je Block61

 Block59:
	cmp dword ptr [ebx+0xB44],0
	je Block61

 Block60:
	mov ecx,dword ptr [ebx+0xB2C]
	mov edx,dword ptr [ecx+4]
	mov eax,dword ptr [edx+0x1C]
	add ecx,4
	push 1
	call eax

 Block61:
	push 0
	mov ecx,ebx
	call CWnd::InvalidateRect
	mov eax,1
	jmp Block66

 Block62:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push 0x152D
	push ecx
	jmp Block64

 Block63:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x44],esp
	push 0x1A6C
	push edx

 Block64:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14

 Block65:
	xor eax,eax

 Block66:
	mov ecx,dword ptr [esp+0x94]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x8C
	ret 0xC
}
}
// CUIVegaResultPopup::OnMouseMove
__SUB_CLASS_THIS(003BEE30, __thiscall, 71964,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x1C]
	lea eax,[ebp-0x3C]
	push esi
	mov esi,ecx
	cmp eax,0x1B
	ja Block5

 Block1:
	mov ebx,dword ptr [esp+0x24]
	lea ecx,[ebx-0x46]
	cmp ecx,0x1B
	ja Block5

 Block2:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edi
	lea edx,[esp+0x10]
	push edx
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x10]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov eax,dword ptr [esi+0xAEC]
	mov ecx,dword ptr [esi+0xAE8]
	push eax
	push ecx
	lea edx,[esp+0x20]
	push edx
	mov ecx,edi
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x18]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test edi,edi
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	push 0
	push 0
	push 0
	push 0
	push 0
	push edi
	mov ecx,esi
	call edx
	mov edx,dword ptr [esi]
	lea eax,[eax+ebx+0x14]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,ebp
	push eax
	lea ecx,[esi+0x98]
	call CUIToolTip::ShowItemToolTip

 Block4:
	pop edi
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 8

 Block5:
	lea ecx,[esi+0x98]
	call CUIToolTip::ClearToolTip
	pop esi
	pop ebp
	xor eax,eax
	pop ebx
	add esp,0x10
	ret 8
}
}
// CUIItemUpgrade::OnMouseMove
__SUB_CLASS_THIS(003BEB50, __thiscall, 67148,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	sub esp,0x10
	push esi
	mov esi,ecx
	cmp dword ptr [esi+0x90],0
	jne Block7

 Block1:
	push ebx
	push ebp
	mov ebp,dword ptr [esp+0x20]
	lea eax,[ebp-0x29]
	push edi
	cmp eax,0x19
	ja Block5

 Block2:
	mov ebx,dword ptr [esp+0x28]
	lea ecx,[ebx-0x61]
	cmp ecx,0x19
	ja Block5

 Block3:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea edx,[esp+0x10]
	push edx
	call CWvsContext::GetCharacterData
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x10]
	call ZRef<CharacterData>::~ZRef<CharacterData>
	mov eax,dword ptr [esi+0xE0]
	mov ecx,dword ptr [esi+0xDC]
	push eax
	push ecx
	lea edx,[esp+0x20]
	push edx
	mov ecx,edi
	call CharacterData::GetItem
	mov edi,dword ptr [eax+4]
	lea ecx,[esp+0x18]
	call ZRef<GW_ItemSlotBase>::~ZRef<GW_ItemSlotBase>
	test edi,edi
	je Block6

 Block4:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	push 0
	push 0
	push 0
	push 0
	push 0
	push edi
	mov ecx,esi
	call edx
	mov edx,dword ptr [esi]
	lea eax,[eax+ebx+0x14]
	push eax
	mov eax,dword ptr [edx+0x2C]
	mov ecx,esi
	call eax
	add eax,ebp
	push eax
	lea ecx,[esi+0xE8]
	call CUIToolTip::ShowItemToolTip
	pop edi
	pop ebp
	pop ebx
	xor eax,eax
	pop esi
	add esp,0x10
	ret 8

 Block5:
	lea ecx,[esi+0xE8]
	call CUIToolTip::ClearToolTip

 Block6:
	pop edi
	pop ebp
	pop ebx

 Block7:
	xor eax,eax
	pop esi
	add esp,0x10
	ret 8
}
}
// CUIVega::OnCreate
_SUB_EXCEPTION_HANDLER(3C1320)
__SUB_CLASS_THIS(003C1320, __thiscall, 67224,  CUIVega, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x68]
	sub esp,0x68
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3C1320
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
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
	mov dword ptr [ebp+0x5C],ebx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x2C]
	push eax
	call esi
	lea ecx,[ebp-0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor edi,edi
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x1C]
	push edx
	mov dword ptr [ebp-4],edi
	call esi
	lea eax,[ebp-0x1C]
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
	push edi
	push edi
	lea ecx,[ebp-0x2C]
	push ecx
	lea edx,[ebp-0x1C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x54],esp
	push 0x1535
	push eax
	mov byte ptr [ebp-4],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],2
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[ebp-0x3C]
	push ecx
	mov byte ptr [ebp-4],1
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],3
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x2C]
	mov dword ptr [ebp+0x2C],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov edi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp-0x3C],di
	jne Block12

 Block10:
	mov eax,dword ptr [ebp-0x34]
	xor edx,edx
	mov word ptr [ebp-0x3C],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[ebp-0x3C]
	push eax
	call esi

 Block13:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x1C],di
	jne Block16

 Block14:
	mov eax,dword ptr [ebp-0x14]
	xor ecx,ecx
	mov word ptr [ebp-0x1C],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[ebp-0x1C]
	push edx
	call esi

 Block17:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x2C],di
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[ebp-0x2C]
	push ecx
	call esi

 Block21:
	mov esi,dword ptr [ebp+0x2C]
	test esi,esi
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0x20]
	lea eax,[ebp+0x58]
	push eax
	push esi
	mov dword ptr [ebp+0x58],0
	call ecx
	test eax,eax
	jge Block25

 Block24:
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push esi
	push eax
	call _com_issue_errorex

 Block25:
	mov eax,dword ptr [ebp+0x58]
	mov dword ptr [ebx+0xB0],eax
	test eax,eax
	jg Block27

 Block26:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x54],esp
	push 0x1531
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	add esp,0x14
	push esi
	mov dword ptr [ebp-4],0xFFFFFFFF
	call ecx
	jmp Block151

 Block27:
	lea edx,[ebp+0x2B]
	push edx
	lea ecx,[ebx+0xB4]
	push eax
	call ZArray<long>::_Alloc
	xor esi,esi
	xor edi,edi
	cmp dword ptr [ebx+0xB0],esi
	jle Block42

 Block28:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x2C]
	lea eax,[ebp+0x30]
	mov byte ptr [ebp-4],8
	push eax
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],9
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x58],esi
	test eax,eax
	je Block31

 Block29:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x60]
	mov esi,ecx
	mov dword ptr [ebp+0x58],esi
	test eax,eax
	jge Block31

 Block30:
	cmp eax,0x80004002
	jne Block1

 Block31:
	cmp word ptr [ebp+0x30],8
	mov byte ptr [ebp-4],0xB
	jne Block34

 Block32:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block35:
	push ecx
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push offset _S_ITEM__1
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0xC
	test esi,esi
	je Block5

 Block36:
	lea ecx,[ebp+0x40]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xD
	call _xvariant_t::op_long
	cmp word ptr [ebp+0x40],8
	mov ebx,eax
	mov byte ptr [ebp-4],0xB
	jne Block39

 Block37:
	mov eax,dword ptr [ebp+0x48]
	xor edx,edx
	mov word ptr [ebp+0x40],dx
	test eax,eax
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea eax,[ebp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov eax,dword ptr [ebp+0x5C]
	mov ecx,dword ptr [eax+0xB4]
	add eax,0xB4
	mov dword ptr [ecx+edi*4],ebx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],7
	call eax
	mov ecx,dword ptr [ebp+0x5C]
	inc edi
	cmp edi,dword ptr [ecx+0xB0]
	jl Block28

 Block41:
	mov ebx,ecx
	xor esi,esi

 Block42:
	mov dword ptr [ebp+0x14],esi
	mov dword ptr [ebp+8],1
	mov dword ptr [ebp+0xC],esi
	mov dword ptr [ebp+0x10],esi
	lea edx,[ebp+0x60]
	push 0x152B
	push edx
	mov byte ptr [ebp-4],0xE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x14]
	mov byte ptr [ebp-4],0xF
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0xE
	cmp eax,esi
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block44:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x54],eax
	mov byte ptr [ebp-4],0x10
	cmp eax,esi
	je Block46

 Block45:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block47

 Block46:
	xor eax,eax

 Block47:
	mov edi,dword ptr [ZImports::_InterlockedIncrement]
	mov byte ptr [ebp-4],0xE
	cmp eax,esi
	je Block51

 Block48:
	add eax,8
	cmp eax,esi
	je Block51

 Block49:
	lea esi,[eax-8]
	test esi,esi
	je Block51

 Block50:
	lea eax,[esi+0xC]
	push eax
	call edi

 Block51:
	mov eax,dword ptr [ebx+0xB2C]
	mov dword ptr [ebx+0xB2C],esi
	mov dword ptr [ebp+0x54],eax
	test eax,eax
	je Block53

 Block52:
	push 0
	lea ecx,[ebp+0x50]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block53:
	mov ecx,dword ptr [ebx+0xB2C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+8]
	push eax
	push 1
	push 0xC8
	push 0x43
	push 0x7D0
	push ebx
	call edx
	mov ecx,dword ptr [ebx+0xB2C]
	mov eax,dword ptr [ecx+4]
	mov edx,dword ptr [eax+0x1C]
	add ecx,4
	push 0
	call edx
	lea eax,[ebp+0x60]
	push 0x1A71
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[ebp+0x14]
	mov byte ptr [ebp-4],0x11
	call ZXString16::op_assign
	mov eax,dword ptr [ebp+0x60]
	mov byte ptr [ebp-4],0xE
	test eax,eax
	je Block55

 Block54:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block55:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x54],eax
	mov byte ptr [ebp-4],0x12
	test eax,eax
	je Block57

 Block56:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block58

 Block57:
	xor eax,eax

 Block58:
	mov byte ptr [ebp-4],0xE
	test eax,eax
	je Block66

 Block59:
	add eax,8
	je Block66

 Block60:
	lea esi,[eax-8]
	test esi,esi
	je Block62

 Block61:
	lea ecx,[esi+0xC]
	push ecx
	call edi

 Block62:
	mov eax,dword ptr [ebx+0xB34]
	mov dword ptr [ebx+0xB34],esi
	mov dword ptr [ebp+0x54],eax
	test eax,eax
	je Block64

 Block63:
	push 0
	lea ecx,[ebp+0x50]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block64:
	mov ecx,dword ptr [ebx+0xB34]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[ebp+8]
	push eax
	push 0
	push 8
	push 0x9E
	push 2
	push ebx
	call edx
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x30]
	push eax
	call esi
	lea ecx,[ebp+0x30]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block67

 Block65:
	push eax
	call _com_issue_error

 Block66:
	xor esi,esi
	jmp Block62

 Block67:
	lea edx,[ebp+0x40]
	push edx
	mov byte ptr [ebp-4],0x13
	call esi
	lea eax,[ebp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block69

 Block68:
	push eax
	call _com_issue_error

 Block69:
	push 0
	push 0
	lea ecx,[ebp+0x30]
	push ecx
	lea edx,[ebp+0x40]
	push edx
	push ecx
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	mov bl,0x14
	push offset _S_UIUIWINDOWIMGVEG__1
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x15
	jne Block71

 Block70:
	push 0x80004003
	call _com_issue_error

 Block71:
	lea eax,[ebp+0x18]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x16
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block77

 Block72:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	mov edx,dword ptr [ebp+0x5C]
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [edx+0xB14]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x60]
	mov edi,ecx
	test eax,eax
	je Block74

 Block73:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block74:
	mov eax,dword ptr [ebp+0x5C]
	mov dword ptr [eax+0xB14],edi
	test esi,esi
	jge Block79

 Block75:
	cmp esi,0x80004002
	je Block79

 Block76:
	push esi
	call _com_issue_error

 Block77:
	mov ecx,dword ptr [ebp+0x5C]
	mov eax,dword ptr [ecx+0xB14]
	test eax,eax
	je Block79

 Block78:
	mov edx,ecx
	mov dword ptr [edx+0xB14],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block79:
	cmp word ptr [ebp+0x18],8
	mov byte ptr [ebp-4],bl
	jne Block82

 Block80:
	xor eax,eax
	mov word ptr [ebp+0x18],ax
	mov eax,dword ptr [ebp+0x20]
	test eax,eax
	je Block83

 Block81:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block83

 Block82:
	lea ecx,[ebp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block83:
	mov esi,8
	mov byte ptr [ebp-4],0x13
	cmp word ptr [ebp+0x40],si
	jne Block86

 Block84:
	mov eax,dword ptr [ebp+0x48]
	xor edx,edx
	mov word ptr [ebp+0x40],dx
	test eax,eax
	je Block87

 Block85:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block87

 Block86:
	lea eax,[ebp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block87:
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp+0x30],si
	jne Block90

 Block88:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block91:
	mov edi,dword ptr [ebp+0x5C]
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x40]
	push eax
	mov dword ptr [edi+0xB24],0x3F
	call esi
	lea ecx,[ebp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block93

 Block92:
	push eax
	call _com_issue_error

 Block93:
	lea edx,[ebp+0x30]
	push edx
	mov byte ptr [ebp-4],0x17
	call esi
	lea eax,[ebp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block95

 Block94:
	push eax
	call _com_issue_error

 Block95:
	push 0
	push 0
	lea ecx,[ebp+0x40]
	push ecx
	lea edx,[ebp+0x30]
	push edx
	push ecx
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	mov bl,0x18
	push offset _S_UIUIWINDOWIMGVEG
	mov byte ptr [ebp-4],bl
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x19
	jne Block97

 Block96:
	push 0x80004003
	call _com_issue_error

 Block97:
	lea eax,[ebp+0x18]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x1A
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block103

 Block98:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x60]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	mov edx,dword ptr [ebp+0x5C]
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [edx+0xB18]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x60]
	mov edi,ecx
	test eax,eax
	je Block100

 Block99:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block100:
	mov eax,dword ptr [ebp+0x5C]
	mov dword ptr [eax+0xB18],edi
	test esi,esi
	jge Block105

 Block101:
	cmp esi,0x80004002
	je Block105

 Block102:
	push esi
	call _com_issue_error

 Block103:
	mov eax,dword ptr [edi+0xB18]
	test eax,eax
	je Block105

 Block104:
	mov dword ptr [edi+0xB18],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block105:
	mov esi,8
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x18],si
	jne Block108

 Block106:
	xor eax,eax
	mov word ptr [ebp+0x18],ax
	mov eax,dword ptr [ebp+0x20]
	test eax,eax
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea ecx,[ebp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block109:
	mov byte ptr [ebp-4],0x17
	cmp word ptr [ebp+0x30],si
	jne Block112

 Block110:
	mov eax,dword ptr [ebp+0x38]
	xor edx,edx
	mov word ptr [ebp+0x30],dx
	test eax,eax
	je Block113

 Block111:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block113

 Block112:
	lea eax,[ebp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block113:
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp+0x40],si
	jne Block116

 Block114:
	mov eax,dword ptr [ebp+0x48]
	xor ecx,ecx
	mov word ptr [ebp+0x40],cx
	test eax,eax
	je Block117

 Block115:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block117

 Block116:
	lea edx,[ebp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block117:
	mov dword ptr [ebp+0x58],0
	lea esp,[esp]

 Block118:
	mov dword ptr [ebp+0x60],0
	lea eax,[ebp+4]
	push 0x1536
	push eax
	mov byte ptr [ebp-4],0x1B
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0x58]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[ebp+0x60]
	push edx
	mov byte ptr [ebp-4],0x1C
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+4]
	add esp,0xC
	mov byte ptr [ebp-4],0x1B
	test eax,eax
	je Block120

 Block119:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block120:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x40]
	push eax
	call esi
	lea ecx,[ebp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block121:
	lea edx,[ebp+0x30]
	push edx
	mov byte ptr [ebp-4],0x1D
	call esi
	lea eax,[ebp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block1

 Block122:
	mov ebx,dword ptr [ebp+0x60]
	push 0
	push 0
	lea ecx,[ebp+0x40]
	push ecx
	lea edx,[ebp+0x30]
	push edx
	push ecx
	mov dword ptr [ebp+0x54],esp
	mov ecx,esp
	push ebx
	mov byte ptr [ebp-4],0x1E
	call _xbstr_t::_ctor_0
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x1F
	je Block5

 Block123:
	lea eax,[ebp+0x18]
	mov byte ptr [ebp-4],0x1E
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x20
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x54],esi
	test eax,eax
	je Block126

 Block124:
	mov ecx,dword ptr [eax]
	lea edx,[ebp]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp]
	mov esi,ecx
	mov dword ptr [ebp+0x54],esi
	test eax,eax
	jge Block126

 Block125:
	cmp eax,0x80004002
	jne Block1

 Block126:
	mov edi,8
	mov byte ptr [ebp-4],0x22
	cmp word ptr [ebp+0x18],di
	jne Block129

 Block127:
	mov eax,dword ptr [ebp+0x20]
	xor edx,edx
	mov word ptr [ebp+0x18],dx
	test eax,eax
	je Block130

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block129:
	lea eax,[ebp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block130:
	mov byte ptr [ebp-4],0x23
	cmp word ptr [ebp+0x30],di
	jne Block133

 Block131:
	mov eax,dword ptr [ebp+0x38]
	xor ecx,ecx
	mov word ptr [ebp+0x30],cx
	test eax,eax
	je Block134

 Block132:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block134

 Block133:
	lea edx,[ebp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block134:
	mov byte ptr [ebp-4],0x24
	cmp word ptr [ebp+0x40],di
	jne Block137

 Block135:
	xor eax,eax
	mov word ptr [ebp+0x40],ax
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block138

 Block136:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block138

 Block137:
	lea ecx,[ebp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block138:
	mov ecx,dword ptr [ebp+0x5C]
	push 0xFFFFFFFF
	add ecx,0xB1C
	call ZArray<_x_com_ptr<IWzCanvas>>::InsertBefore
	mov edi,dword ptr [eax]
	cmp edi,esi
	je Block143

 Block139:
	mov dword ptr [eax],esi
	test esi,esi
	je Block141

 Block140:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block141:
	test edi,edi
	je Block143

 Block142:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block143:
	mov byte ptr [ebp-4],0x1B
	test esi,esi
	je Block145

 Block144:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block145:
	mov byte ptr [ebp-4],0xE
	test ebx,ebx
	je Block147

 Block146:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString<char>::_Release
	add esp,4

 Block147:
	mov eax,dword ptr [ebp+0x58]
	inc eax
	cmp eax,0xA
	mov dword ptr [ebp+0x58],eax
	jl Block118

 Block148:
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],7
	test eax,eax
	je Block150

 Block149:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block150:
	mov eax,dword ptr [ebp+0x2C]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov dword ptr [ebp-4],0xFFFFFFFF
	call eax

 Block151:
	lea esp,[ebp-0x4C]
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
