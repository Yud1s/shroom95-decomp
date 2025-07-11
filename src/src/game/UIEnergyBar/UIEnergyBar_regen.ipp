#include "regen.hpp"
// UIEnergyBar.ipp
#include "UIEnergyBar.hpp"

// CUIEnergyBar::OnMouseMove
_SUB_EXCEPTION_HANDLER(3A24F0)
__SUB_CLASS_THIS(003A24F0, __thiscall, 70276,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A24F0
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
	push 1
	push 0xEB
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x14],esp
	push 0x786
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	mov dword ptr [esp+0x20],0
	call eax
	mov ecx,dword ptr [esp+0x2C]
	lea edx,[eax+ecx+0x14]
	mov eax,dword ptr [esi]
	push edx
	mov edx,dword ptr [eax+0x2C]
	mov ecx,esi
	call edx
	mov ecx,dword ptr [esp+0x2C]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[esi+0x84]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call CUIToolTip::SetToolTip_String_MultiLine
	mov eax,1
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret 8
}
}
// CUIEnergyBar::CUIEnergyBar
_SUB_EXCEPTION_HANDLER(3A2370)
__SUB_CLASS_THIS0(003A2370, __thiscall, 70272,  CUIEnergyBar, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A2370
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
	xor edi,edi
	push edi
	push edi
	push edi
	push 0xFFFFFFFF
	push 0xFFFFFFFF
	push edi
	push 0x13
	call CUIWnd::_ctor_0
	lea eax,[esi+0xB08]
	mov dword ptr [esp+0x18],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0xB08]
	mov dword ptr [TSingleton<CUIEnergyBar>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIEnergyBar>::ms_pInstance],edi

 Block3:
	push 0xA
	push edi
	push edi
	mov ecx,esi
	mov byte ptr [esp+0x24],1
	int 3// TODO: 	mov dword ptr [esi],offset CUIEnergyBar::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIEnergyBar::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIEnergyBar::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax],edi
	mov dword ptr [esi+0xB0C],edi
	call CUIWnd::CreateUIWndPosSaved
	mov eax,dword ptr [esi+0xAFC]
	cmp eax,edi
	jl Block5

 Block4:
	cmp eax,2
	jle Block6

 Block5:
	mov dword ptr [esi+0xAFC],edi

 Block6:
	cmp dword ptr [esi+0xAFC],edi
	jne Block8

 Block7:
	mov dword ptr [esi+0x24],0x52
	mov dword ptr [esi+0x28],0xA

 Block8:
	push edi
	mov ecx,esi
	call CWnd::InvalidateRect
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
// CUIEnergyBar::HitTest
__SUB_CLASS_THIS(003A2330, __thiscall, 70275,  CUIEnergyBar, int32_t, long, long, CCtrlWnd**) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	mov edx,dword ptr [esp+4]
	push esi
	mov esi,dword ptr [esp+0x10]
	push esi
	push eax
	push edx
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
	mov eax,1

 Block4:
	pop esi
	ret 0xC
}
}
// CUIEnergyBar::~CUIEnergyBar
__SUB_CLASS_THIS0(003A2490, __thiscall, 70274,  CUIEnergyBar, void) {
__asm {

 Block0:
	cmp dword ptr [ecx+0x14],0
	je Block3

 Block1:
	cmp dword ptr [TSingleton<CUserLocal>::ms_pInstance],0
	je Block3

 Block2:
	jmp  CWnd::Update

 Block3:
	ret
}
}
// CUIEnergyBar::SetEnergy
_SUB_EXCEPTION_HANDLER(3A2590)
__SUB_CLASS_THIS(003A2590, __thiscall, 70279,  CUIEnergyBar, void, long, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x70]
	sub esp,0x70
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A2590
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x70
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x6C],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp+0x3C],esi
	mov edi,dword ptr [ebp+0x78]
	mov eax,dword ptr [ebp+0x7C]
	cmp edi,dword ptr [esi+0xB08]
	jne Block2

 Block1:
	cmp eax,dword ptr [esi+0xB0C]
	je Block291

 Block2:
	xor ebx,ebx
	mov dword ptr [esi+0xB08],edi
	mov dword ptr [esi+0xB0C],eax
	mov dword ptr [ebp+0x50],ebx
	lea eax,[ebp+0x54]
	push 0x3D0
	push eax
	mov dword ptr [ebp-4],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[ebp+0x50]
	push ecx
	push eax
	mov byte ptr [ebp-4],1
	call PcCreate_IWzCanvas
	mov eax,dword ptr [ebp+0x54]
	add esp,0xC
	mov byte ptr [ebp-4],bl
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block4:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x2C]
	push edx
	call ebx
	lea eax,[ebp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block6

 Block5:
	push eax
	call _com_issue_error

 Block6:
	lea ecx,[ebp+0x58]
	push ecx
	mov byte ptr [ebp-4],2
	call ebx
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],3
	test ecx,ecx
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	lea eax,[ebp+0x2C]
	push eax
	mov eax,dword ptr [esi+0x28]
	lea edx,[ebp+0x58]
	push edx
	mov edx,dword ptr [esi+0x24]
	push eax
	push edx
	call IWzCanvas::Create
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [ebp-4],2
	cmp word ptr [ebp+0x58],si
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block14

 Block12:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block14

 Block13:
	lea ecx,[ebp+0x58]
	push ecx
	call ebx

 Block14:
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp+0x2C],si
	jne Block17

 Block15:
	mov eax,dword ptr [ebp+0x34]
	xor edx,edx
	mov word ptr [ebp+0x2C],dx
	test eax,eax
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea eax,[ebp+0x2C]
	push eax
	call ebx

 Block18:
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x70]
	push 0
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block22

 Block21:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block22:
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	jne Block24

 Block23:
	push 0x80004003
	call _com_issue_error

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+0x78]
	push 0
	push eax
	mov esi,eax
	call edx
	test eax,eax
	jge Block26

 Block25:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block26:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x4C]
	push eax
	call esi
	lea ecx,[ebp-0x4C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	lea edx,[ebp-0x5C]
	push edx
	mov byte ptr [ebp-4],4
	call esi
	lea eax,[ebp-0x5C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	xor esi,esi
	push esi
	push esi
	lea ecx,[ebp-0x4C]
	push ecx
	lea edx,[ebp-0x5C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x68],esp
	push 0x783
	mov bl,5
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],6
	cmp dword ptr [_D_G_RM],esi
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	lea ecx,[ebp-0x7C]
	push ecx
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],7
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x18]
	mov dword ptr [ebp+0x18],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block35

 Block33:
	cmp eax,0x80004002
	je Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	mov ebx,8
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x7C],bx
	jne Block38

 Block36:
	mov eax,dword ptr [ebp-0x74]
	xor edx,edx
	mov word ptr [ebp-0x7C],dx
	cmp eax,esi
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea eax,[ebp-0x7C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block39:
	mov byte ptr [ebp-4],0xA
	cmp word ptr [ebp-0x5C],bx
	jne Block42

 Block40:
	mov eax,dword ptr [ebp-0x54]
	xor ecx,ecx
	mov word ptr [ebp-0x5C],cx
	cmp eax,esi
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea edx,[ebp-0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x4C],bx
	jne Block46

 Block44:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	cmp eax,esi
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea ecx,[ebp-0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	cmp edi,dword ptr [ebp+0x7C]
	jne Block115

 Block48:
	mov edx,3
	mov word ptr [ebp+0x58],dx
	mov dword ptr [ebp+0x60],0xFFFFFFFE
	mov ecx,dword ptr [ebp+0x3C]
	lea eax,[ebp+0x24]
	mov bl,0xC
	push eax
	mov byte ptr [ebp-4],bl
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0xD
	cmp ecx,esi
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	lea edx,[ebp+0x58]
	push edx
	lea eax,[ebp+0x54]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [ebp+0x54]
	cmp eax,esi
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block52:
	mov eax,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],bl
	cmp eax,esi
	je Block54

 Block53:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block54:
	mov edi,8
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp+0x58],di
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	cmp eax,esi
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	push esi
	push esi
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x68],esp
	push 0x1AAD
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],0xE
	cmp ecx,esi
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	lea eax,[ebp+0x40]
	push eax
	mov byte ptr [ebp-4],0xB
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x20]
	mov dword ptr [ebp+0x20],esi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,esi
	jge Block63

 Block61:
	cmp eax,0x80004002
	je Block63

 Block62:
	push eax
	call _com_issue_error

 Block63:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp+0x40],di
	jne Block66

 Block64:
	mov eax,dword ptr [ebp+0x48]
	xor ecx,ecx
	mov word ptr [ebp+0x40],cx
	cmp eax,esi
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea edx,[ebp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov edi,dword ptr [ebp+0x20]
	xor ebx,ebx

 Block68:
	mov eax,0x20
	call __alloca_probe_8
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x12
	cmp edi,esi
	je Block9

 Block69:
	lea eax,[ebp+0x2C]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],0x11
	call IWzProperty::Getitem
	lea ecx,[ebp+0x2C]
	mov byte ptr [ebp-4],0x13
	push ecx
	cmp word ptr [ebp+0x2C],si
	je Block89

 Block70:
	lea edx,[ebp+0x54]
	push edx
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x14
	mov dword ptr [ebp+0x24],esi
	mov dword ptr [ebp+0x68],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block72

 Block71:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block72:
	lea ecx,[ebp+0x24]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	cmp eax,esi
	jge Block74

 Block73:
	cmp eax,0x80004002
	jne Block5

 Block74:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],0x16
	cmp eax,esi
	je Block76

 Block75:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block76:
	mov esi,dword ptr [ebp+0x24]
	test esi,esi
	sete al
	test al,al
	jne Block90

 Block77:
	test esi,esi
	je Block9

 Block78:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0x70]
	push 0
	push esi
	call ecx
	test eax,eax
	jge Block80

 Block79:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block80:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x78]
	push 0
	push esi
	call eax
	test eax,eax
	jge Block82

 Block81:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block82:
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [ebp+0x68],esp
	push esi
	call edx
	mov eax,dword ptr [ebp+0x3C]
	mov eax,dword ptr [eax+0x18]
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block84

 Block83:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block84:
	call CAnimationDisplayer::LoadCanvas
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	add esp,8
	push esi
	mov byte ptr [ebp-4],0x13
	call ecx
	cmp word ptr [ebp+0x2C],8
	mov byte ptr [ebp-4],0x11
	jne Block87

 Block85:
	mov eax,dword ptr [ebp+0x34]
	xor edx,edx
	mov word ptr [ebp+0x2C],dx
	test eax,eax
	je Block88

 Block86:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	inc ebx
	xor esi,esi
	jmp Block68

 Block87:
	lea eax,[ebp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block88:
	inc ebx
	xor esi,esi
	jmp Block68

 Block89:
	mov byte ptr [ebp-4],0x11
	call dword ptr [ZImports::_VariantClear]
	mov edi,8
	jmp Block96

 Block90:
	mov byte ptr [ebp-4],0x13
	test esi,esi
	je Block92

 Block91:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	call eax

 Block92:
	mov edi,8
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp+0x2C],di
	jne Block95

 Block93:
	mov eax,dword ptr [ebp+0x34]
	xor ecx,ecx
	mov word ptr [ebp+0x2C],cx
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea edx,[ebp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x58]
	push eax
	call esi
	lea ecx,[ebp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block98

 Block97:
	push eax
	call _com_issue_error

 Block98:
	lea edx,[ebp+0x2C]
	push edx
	mov byte ptr [ebp-4],0x17
	call esi
	lea eax,[ebp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block100

 Block99:
	push eax
	call _com_issue_error

 Block100:
	lea ecx,[ebp+0x54]
	push ecx
	mov ecx,dword ptr [ebp+0x3C]
	mov bl,0x18
	mov byte ptr [ebp-4],bl
	call CWnd::GetLayer
	mov esi,dword ptr [eax]
	mov byte ptr [ebp-4],0x19
	test esi,esi
	jne Block102

 Block101:
	push 0x80004003
	call _com_issue_error

 Block102:
	mov ecx,dword ptr [ebp+0x58]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x110]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x60]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x64]
	mov dword ptr [eax+0xC],ecx
	mov ecx,dword ptr [ebp+0x2C]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x30]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x34]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x38]
	push 0x20
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block104

 Block103:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block104:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block106

 Block105:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block106:
	mov byte ptr [ebp-4],0x17
	cmp word ptr [ebp+0x2C],di
	jne Block109

 Block107:
	xor eax,eax
	mov word ptr [ebp+0x2C],ax
	mov eax,dword ptr [ebp+0x34]
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea ecx,[ebp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block110:
	mov byte ptr [ebp-4],0x11
	cmp word ptr [ebp+0x58],di
	jne Block113

 Block111:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0xB
	jmp Block288

 Block113:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block114:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0xB
	jmp Block288

 Block115:
	mov dword ptr [ebp+0x14],esi
	mov dword ptr [ebp+0x24],esi
	push esi
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x68],esp
	push 0x5A4
	push eax
	mov byte ptr [ebp-4],0x1B
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ebx,dword ptr [ebp+0x18]
	mov byte ptr [ebp-4],0x1C
	cmp ebx,esi
	jne Block117

 Block116:
	push 0x80004003
	call _com_issue_error

 Block117:
	lea ecx,[ebp+0x40]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x1B
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1D
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x14]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block120

 Block118:
	cmp eax,0x80004002
	je Block120

 Block119:
	push eax
	call _com_issue_error

 Block120:
	mov edi,8
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp+0x40],di
	jne Block123

 Block121:
	mov eax,dword ptr [ebp+0x48]
	xor edx,edx
	mov word ptr [ebp+0x40],dx
	cmp eax,esi
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea eax,[ebp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block124:
	push esi
	push esi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x68],esp
	push 0x5A3
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp+0x40]
	mov byte ptr [ebp-4],0x1E
	push edx
	mov ecx,ebx
	mov byte ptr [ebp-4],0x1B
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x1F
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x24]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block127

 Block125:
	cmp eax,0x80004002
	je Block127

 Block126:
	push eax
	call _com_issue_error

 Block127:
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp+0x40],di
	jne Block130

 Block128:
	xor eax,eax
	mov word ptr [ebp+0x40],ax
	mov eax,dword ptr [ebp+0x48]
	cmp eax,esi
	je Block131

 Block129:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block131

 Block130:
	lea ecx,[ebp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block131:
	mov edx,3
	mov edi,0xB4
	mov word ptr [ebp+0x58],dx
	mov dword ptr [ebp+0x60],edi
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x20
	cmp ecx,esi
	jne Block133

 Block132:
	push 0x80004003
	call _com_issue_error

 Block133:
	mov edx,dword ptr [ebp+0x14]
	lea eax,[ebp+0x58]
	push eax
	push edx
	push esi
	push esi
	call IWzCanvas::Copy
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],0x1B
	jne Block136

 Block134:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	cmp eax,esi
	je Block137

 Block135:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block137

 Block136:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block137:
	mov edx,3
	mov word ptr [ebp+0x58],dx
	mov dword ptr [ebp+0x60],edi
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x21
	cmp ecx,esi
	jne Block139

 Block138:
	push 0x80004003
	call _com_issue_error

 Block139:
	mov edx,dword ptr [ebp+0x24]
	mov edi,dword ptr [ebp+0x3C]
	lea eax,[ebp+0x58]
	push eax
	mov eax,dword ptr [edi+0x24]
	push edx
	push esi
	sub eax,6
	push eax
	call IWzCanvas::Copy
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],0x1B
	jne Block142

 Block140:
	mov eax,dword ptr [ebp+0x60]
	xor ecx,ecx
	mov word ptr [ebp+0x58],cx
	cmp eax,esi
	je Block143

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block143

 Block142:
	lea edx,[ebp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block143:
	push esi
	push esi
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x68],esp
	push 0x5A5
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x40]
	push ecx
	mov byte ptr [ebp-4],0x22
	mov ecx,ebx
	mov byte ptr [ebp-4],0x1B
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x23
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x14]
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,esi
	jge Block146

 Block144:
	cmp eax,0x80004002
	je Block146

 Block145:
	push eax
	call _com_issue_error

 Block146:
	cmp word ptr [ebp+0x40],8
	mov byte ptr [ebp-4],0x1B
	jne Block149

 Block147:
	mov eax,dword ptr [ebp+0x48]
	xor edx,edx
	mov word ptr [ebp+0x40],dx
	cmp eax,esi
	je Block150

 Block148:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block150

 Block149:
	lea eax,[ebp+0x40]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block150:
	mov ecx,dword ptr [edi+0x24]
	sub ecx,6
	cmp ecx,6
	mov dword ptr [ebp+0x1C],6
	jle Block160

 Block151:
	mov edx,3
	mov word ptr [ebp+0x58],dx
	mov edx,0xB4
	mov dword ptr [ebp+0x60],edx
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x24
	test ecx,ecx
	je Block9

 Block152:
	mov edi,dword ptr [ebp+0x58]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [ebp+0x5C]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [ebp+0x1C]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x64]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x14]
	push eax
	push 0
	push edi
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [ebx+0x80]
	call ecx
	test eax,eax
	jge Block154

 Block153:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block154:
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],0x1B
	jne Block157

 Block155:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block158

 Block156:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block158

 Block157:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block158:
	mov ecx,dword ptr [ebp+0x3C]
	mov edx,dword ptr [ecx+0x24]
	inc edi
	sub edx,6
	cmp edi,edx
	mov dword ptr [ebp+0x1C],edi
	jl Block151

 Block159:
	xor esi,esi
	mov edi,ecx

 Block160:
	mov eax,dword ptr [edi+0xB08]
	mov dword ptr [ebp+0x54],eax
	cmp eax,esi
	je Block235

 Block161:
	mov eax,dword ptr [ebp+0x3C]
	mov eax,dword ptr [eax+0xB0C]
	mov dword ptr [ebp+0x1C],eax
	test eax,eax
	je Block235

 Block162:
	fild dword ptr [ebp+0x54]
	fidiv dword ptr [ebp+0x1C]
	fmul qword ptr [__real_4053800000000000]
	call __ftol2_sse
	xor edi,edi
	mov dword ptr [ebp+0x54],eax
	mov dword ptr [ebp+0x1C],edi
	mov dword ptr [ebp+0x20],edi
	lea ecx,[ebp+0x28]
	push 0x784
	push ecx
	mov byte ptr [ebp-4],0x26
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 1
	push eax
	lea edx,[ebp+0x1C]
	push edx
	mov byte ptr [ebp-4],0x27
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x28]
	add esp,0xC
	mov byte ptr [ebp-4],0x26
	cmp eax,edi
	je Block164

 Block163:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block164:
	lea eax,[ebp+0x28]
	push 0x785
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push 1
	push eax
	lea ecx,[ebp+0x20]
	push ecx
	mov byte ptr [ebp-4],0x28
	call ZXString<char>::Format
	mov eax,dword ptr [ebp+0x28]
	add esp,0xC
	mov byte ptr [ebp-4],0x26
	cmp eax,edi
	je Block166

 Block165:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block166:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp]
	push edx
	call esi
	lea eax,[ebp]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block168

 Block167:
	push eax
	call _com_issue_error

 Block168:
	lea ecx,[ebp+0x2C]
	push ecx
	mov byte ptr [ebp-4],0x29
	call esi
	lea edx,[ebp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block170

 Block169:
	push eax
	call _com_issue_error

 Block170:
	mov edi,dword ptr [ebp+0x1C]
	push 0
	push 0
	push 0xFFFFFFFF
	push edi
	push 0
	mov bl,0x2A
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov esi,esp
	push 0
	push 0
	lea eax,[ebp]
	push eax
	lea ecx,[ebp+0x2C]
	push ecx
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x2B
	jne Block172

 Block171:
	push 0x80004003
	call _com_issue_error

 Block172:
	lea edx,[ebp-0x6C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x2C
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x10]
	mov dword ptr [ebp+0x10],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block175

 Block173:
	cmp eax,0x80004002
	je Block175

 Block174:
	push eax
	call _com_issue_error

 Block175:
	cmp word ptr [ebp-0x6C],8
	mov byte ptr [ebp-4],0x2E
	jne Block182

 Block176:
	xor eax,eax
	mov word ptr [ebp-0x6C],ax
	mov eax,dword ptr [ebp-0x64]
	test eax,eax
	je Block178

 Block177:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block178:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block179:
	mov esi,8
	mov byte ptr [ebp-4],0x2F
	cmp word ptr [ebp+0x2C],si
	jne Block183

 Block180:
	mov eax,dword ptr [ebp+0x34]
	xor edx,edx
	mov word ptr [ebp+0x2C],dx
	test eax,eax
	je Block184

 Block181:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block184

 Block182:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x6C]
	push ecx
	call edi
	jmp Block179

 Block183:
	lea eax,[ebp+0x2C]
	push eax
	call edi

 Block184:
	mov byte ptr [ebp-4],0x30
	cmp word ptr [ebp],si
	jne Block187

 Block185:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	test eax,eax
	je Block188

 Block186:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block188

 Block187:
	lea edx,[ebp]
	push edx
	call edi

 Block188:
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
	jge Block190

 Block189:
	push eax
	call _com_issue_error

 Block190:
	lea edx,[ebp-0x1C]
	push edx
	mov byte ptr [ebp-4],0x31
	call esi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block192

 Block191:
	push eax
	call _com_issue_error

 Block192:
	mov ecx,dword ptr [ebp+0x20]
	push 0
	push 0
	push 0xFFFFFFFF
	push ecx
	push 0
	mov bl,0x32
	push 0
	mov byte ptr [ebp-4],bl
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ecx,dword ptr [ebp+0x20]
	mov esi,esp
	push 0
	push 0
	lea edx,[ebp-0x2C]
	push edx
	lea eax,[ebp-0x1C]
	push eax
	push 0x3FFFFFFF
	push esi
	push 0xFFFFFFFF
	push ecx
	push 0
	push 0
	call MultiByteToWideChar
	push ecx
	mov dword ptr [ebp+0x68],esp
	mov ecx,esp
	push esi
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x33
	jne Block194

 Block193:
	push 0x80004003
	call _com_issue_error

 Block194:
	lea edx,[ebp-0x3C]
	mov byte ptr [ebp-4],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x34
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x28]
	mov dword ptr [ebp+0x28],0
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block197

 Block195:
	cmp eax,0x80004002
	je Block197

 Block196:
	push eax
	call _com_issue_error

 Block197:
	mov esi,8
	mov byte ptr [ebp-4],0x36
	cmp word ptr [ebp-0x3C],si
	jne Block200

 Block198:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block201

 Block199:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block201

 Block200:
	lea ecx,[ebp-0x3C]
	push ecx
	call edi

 Block201:
	mov byte ptr [ebp-4],0x37
	cmp word ptr [ebp-0x1C],si
	jne Block204

 Block202:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block205

 Block203:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block205

 Block204:
	lea eax,[ebp-0x1C]
	push eax
	call edi

 Block205:
	mov byte ptr [ebp-4],0x38
	cmp word ptr [ebp-0x2C],si
	jne Block208

 Block206:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block209

 Block207:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block209

 Block208:
	lea edx,[ebp-0x2C]
	push edx
	call edi

 Block209:
	cmp dword ptr [ebp+0x54],0
	mov esi,dword ptr [ebp+0x10]
	mov eax,dword ptr [ebp+0x28]
	jle Block227

 Block210:
	mov esi,2
	lea ebx,[esi+6]

 Block211:
	cmp esi,2
	je Block218

 Block212:
	mov eax,dword ptr [ebp+0x3C]
	mov ecx,dword ptr [eax+0x24]
	sub ecx,3
	cmp esi,ecx
	je Block218

 Block213:
	mov edx,3
	mov word ptr [ebp+0x40],dx
	mov dword ptr [ebp+0x48],0xFF
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x3A
	test ecx,ecx
	je Block9

 Block214:
	mov edx,dword ptr [ebp+0x28]
	lea eax,[ebp+0x40]
	push eax
	push edx
	push 2
	push esi
	call IWzCanvas::Copy
	mov byte ptr [ebp-4],0x38
	cmp word ptr [ebp+0x40],bx
	jne Block217

 Block215:
	xor eax,eax
	mov word ptr [ebp+0x40],ax
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block225

 Block216:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block225

 Block217:
	lea ecx,[ebp+0x40]
	push ecx
	call edi
	jmp Block225

 Block218:
	mov edx,3
	mov word ptr [ebp+0x58],dx
	mov edx,0xFF
	mov dword ptr [ebp+0x60],edx
	mov ecx,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x39
	test ecx,ecx
	je Block9

 Block219:
	mov ebx,dword ptr [ebp+0x58]
	mov edi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x64]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ebp+0x10]
	push eax
	push 3
	push esi
	mov dword ptr [ebp+0x68],ecx
	push ecx
	mov ecx,dword ptr [edi+0x80]
	call ecx
	test eax,eax
	jge Block221

 Block220:
	mov edx,dword ptr [ebp+0x68]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edx
	push eax
	call _com_issue_errorex

 Block221:
	mov ebx,8
	mov byte ptr [ebp-4],0x38
	cmp word ptr [ebp+0x58],bx
	jne Block237

 Block222:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block224

 Block223:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block224:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block225:
	inc esi
	lea edx,[esi-2]
	cmp edx,dword ptr [ebp+0x54]
	jl Block211

 Block226:
	mov esi,dword ptr [ebp+0x10]
	mov eax,dword ptr [ebp+0x28]

 Block227:
	mov byte ptr [ebp-4],0x30
	test eax,eax
	je Block229

 Block228:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block229:
	mov byte ptr [ebp-4],0x26
	test esi,esi
	je Block231

 Block230:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block231:
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x25
	test eax,eax
	je Block233

 Block232:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block233:
	mov eax,dword ptr [ebp+0x1C]
	mov byte ptr [ebp-4],0x1B
	test eax,eax
	je Block235

 Block234:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block235:
	mov edx,3
	mov word ptr [ebp+0x40],dx
	mov dword ptr [ebp+0x48],0xFFFFFFFE
	mov edi,dword ptr [ebp+0x3C]
	lea eax,[ebp+0x54]
	mov bl,0x3B
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x3C
	test ecx,ecx
	jne Block238

 Block236:
	push 0x80004003
	call _com_issue_error

 Block237:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp+0x58]
	push ecx
	call edi
	jmp Block225

 Block238:
	lea edx,[ebp+0x40]
	push edx
	lea eax,[ebp+0x68]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [ebp+0x68]
	test eax,eax
	je Block240

 Block239:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block240:
	mov eax,dword ptr [ebp+0x54]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block242

 Block241:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block242:
	cmp word ptr [ebp+0x40],8
	mov byte ptr [ebp-4],0x1B
	jne Block245

 Block243:
	xor eax,eax
	mov word ptr [ebp+0x40],ax
	mov eax,dword ptr [ebp+0x48]
	test eax,eax
	je Block246

 Block244:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block246

 Block245:
	lea ecx,[ebp+0x40]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block246:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x58]
	push edx
	call esi
	lea eax,[ebp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block248

 Block247:
	push eax
	call _com_issue_error

 Block248:
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],0x3D
	call esi
	lea edx,[ebp]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block250

 Block249:
	push eax
	call _com_issue_error

 Block250:
	lea eax,[ebp-0x1C]
	push eax
	mov byte ptr [ebp-4],0x3E
	call esi
	lea ecx,[ebp-0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block252

 Block251:
	push eax
	call _com_issue_error

 Block252:
	lea edx,[ebp-0x2C]
	push edx
	mov byte ptr [ebp-4],0x3F
	call esi
	lea eax,[ebp-0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block254

 Block253:
	push eax
	call _com_issue_error

 Block254:
	lea ecx,[ebp+0x40]
	push ecx
	mov byte ptr [ebp-4],0x40
	call esi
	lea edx,[ebp+0x40]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block256

 Block255:
	push eax
	call _com_issue_error

 Block256:
	lea eax,[ebp+0x68]
	mov bl,0x41
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],bl
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x42
	test ecx,ecx
	jne Block258

 Block257:
	push 0x80004003
	call _com_issue_error

 Block258:
	lea edx,[ebp+0x58]
	push edx
	lea eax,[ebp]
	push eax
	lea edx,[ebp-0x1C]
	push edx
	lea eax,[ebp-0x2C]
	push eax
	mov eax,dword ptr [ebp+0x50]
	lea edx,[ebp+0x40]
	push edx
	push eax
	lea edx,[ebp-0x3C]
	push edx
	call IWzGr2DLayer::InsertCanvas
	mov edi,8
	cmp word ptr [ebp-0x3C],di
	jne Block267

 Block259:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	test eax,eax
	je Block261

 Block260:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block261:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block262:
	mov eax,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block264

 Block263:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block264:
	mov byte ptr [ebp-4],0x40
	cmp word ptr [ebp+0x40],di
	jne Block268

 Block265:
	mov eax,dword ptr [ebp+0x48]
	xor ecx,ecx
	mov word ptr [ebp+0x40],cx
	test eax,eax
	je Block269

 Block266:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block269

 Block267:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x3C]
	push ecx
	call esi
	jmp Block262

 Block268:
	lea edx,[ebp+0x40]
	push edx
	call esi

 Block269:
	mov byte ptr [ebp-4],0x3F
	cmp word ptr [ebp-0x2C],di
	jne Block272

 Block270:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block273

 Block271:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block273

 Block272:
	lea ecx,[ebp-0x2C]
	push ecx
	call esi

 Block273:
	mov byte ptr [ebp-4],0x3E
	cmp word ptr [ebp-0x1C],di
	jne Block276

 Block274:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block277

 Block275:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block277

 Block276:
	lea eax,[ebp-0x1C]
	push eax
	call esi

 Block277:
	mov byte ptr [ebp-4],0x3D
	cmp word ptr [ebp],di
	jne Block280

 Block278:
	mov eax,dword ptr [ebp+8]
	xor ecx,ecx
	mov word ptr [ebp],cx
	test eax,eax
	je Block281

 Block279:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block281

 Block280:
	lea edx,[ebp]
	push edx
	call esi

 Block281:
	mov byte ptr [ebp-4],0x1B
	cmp word ptr [ebp+0x58],di
	jne Block284

 Block282:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block285

 Block283:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block285

 Block284:
	lea ecx,[ebp+0x58]
	push ecx
	call esi

 Block285:
	mov eax,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],0x1A
	test eax,eax
	je Block287

 Block286:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block287:
	mov eax,dword ptr [ebp+0x14]
	mov byte ptr [ebp-4],0xB
	test eax,eax
	je Block289

 Block288:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block289:
	mov eax,dword ptr [ebp+0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],0
	call edx
	mov eax,dword ptr [ebp+0x50]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block291

 Block290:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block291:
	lea esp,[ebp-0x8C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x6C]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x70
	mov esp,ebp
	pop ebp
	ret 8
}
}
