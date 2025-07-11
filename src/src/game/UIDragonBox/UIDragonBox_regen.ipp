#include "regen.hpp"
// UIDragonBox.ipp
#include "UIDragonBox.hpp"

// CUIDragonBox::Draw
__SUB_CLASS_THIS(0039F750, __thiscall, 71895,  CUIDragonBox, void, const tagRECT*) {
__asm {

 Block0:
	jmp  CWnd::Draw
}
}
// CUIDragonBox::OnMouseMove
__SUB_CLASS_THIS(0039F760, __thiscall, 71897,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	xor eax,eax
	ret 8
}
}
// CUIDragonBox::Update
__SUB_CLASS_THIS0(003A06C0, __thiscall, 71893,  CUIDragonBox, void) {
__asm {

 Block0:
	push esi
	push edi
	mov esi,ecx
	call CWnd::Update
	call dword ptr [ZImports::_timeGetTime]
	mov edi,eax
	mov eax,dword ptr [esi+0xB18]
	test eax,eax
	jle Block2

 Block1:
	mov ecx,dword ptr [esi+0xB1C]
	sub ecx,edi
	add ecx,eax
	mov dword ptr [esi+0xB18],ecx
	jmp Block3

 Block2:
	mov dword ptr [esi+0xB18],0

 Block3:
	cmp dword ptr [esi+0x94],0
	je Block5

 Block4:
	mov ecx,esi
	call CUIDragonBox::ShowToolTip

 Block5:
	mov dword ptr [esi+0xB1C],edi
	pop edi
	pop esi
	ret
}
}
// CUIDragonBox::SetOrb
_SUB_EXCEPTION_HANDLER(39FAB0)
__SUB_CLASS_THIS(0039FAB0, __thiscall, 71894,  CUIDragonBox, void, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_39FAB0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x38
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	cmp dword ptr [edi+0xB10],0
	je Block3

 Block1:
	mov eax,dword ptr [edi+0xB10]
	test eax,eax
	je Block3

 Block2:
	mov dword ptr [edi+0xB10],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block3:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push eax
	call esi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	lea edx,[esp+0x18]
	push edx
	mov dword ptr [esp+0x54],0
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x50],1
	test ecx,ecx
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x1C]
	push eax
	push 0
	push 0xC8
	push 0xA0
	push 0
	push 0
	lea edx,[esp+0x2C]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xB10]
	cmp esi,eax
	je Block14

 Block10:
	mov dword ptr [edi+0xB10],eax
	test eax,eax
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block12:
	test esi,esi
	je Block14

 Block13:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block14:
	mov eax,dword ptr [esp+0x10]
	test eax,eax
	je Block16

 Block15:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block16:
	mov esi,8
	mov byte ptr [esp+0x50],0
	cmp word ptr [esp+0x18],si
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	or ebx,0xFFFFFFFF
	mov dword ptr [esp+0x50],ebx
	cmp word ptr [esp+0x28],si
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	mov esi,dword ptr [edi+0xB10]
	test esi,esi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push ebx
	push esi
	call eax
	test eax,eax
	jge Block28

 Block27:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block28:
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov edx,0xD
	mov dword ptr [esp+0x50],2
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block30

 Block29:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block30:
	mov esi,dword ptr [edi+0xB10]
	mov byte ptr [esp+0x50],3
	test esi,esi
	jne Block32

 Block31:
	push 0x80004003
	call _com_issue_error

 Block32:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block34

 Block33:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block34:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x50],2
	jne Block37

 Block35:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x50],ebx
	test eax,eax
	je Block40

 Block39:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block40:
	lea eax,[esp+0x10]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0x50],4
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	test eax,eax
	je Block42

 Block41:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block42:
	mov esi,dword ptr [edi+0xB10]
	mov byte ptr [esp+0x50],5
	test esi,esi
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x2C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block46

 Block45:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block46:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0x50],4
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block50:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x50],ebx
	test eax,eax
	je Block52

 Block51:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block52:
	mov esi,dword ptr [edi+0xB10]
	test esi,esi
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xB4]
	push 2
	push esi
	call ecx
	test eax,eax
	jge Block56

 Block55:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block56:
	mov edx,3
	mov word ptr [esp+0x38],dx
	mov dword ptr [esp+0x40],0
	mov ecx,dword ptr [edi+0xB10]
	mov dword ptr [esp+0x50],6
	test ecx,ecx
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea eax,[esp+0x38]
	push eax
	lea edx,[esp+0x14]
	push edx
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x50],8
	jne Block61

 Block59:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea ecx,[esp+0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block62:
	mov eax,dword ptr [esp+0x5C]
	mov esi,dword ptr [esp+0x10]
	test eax,eax
	je Block65

 Block63:
	mov edx,dword ptr [edi+0xB14]
	xor edx,eax
	je Block103

 Block64:
	push 0
	push 0
	push 0
	push 0xFFFFFFFC
	push 0xFFFFFFFA
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x70],esp
	push 0x17FF
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,edi
	call CWnd::SetBackgrnd
	jmp Block103

 Block65:
	cmp dword ptr [edi+0xB14],0
	je Block67

 Block66:
	push 0
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x17FE
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,edi
	call CWnd::SetBackgrnd

 Block67:
	mov ebx,dword ptr [esp+0x58]
	test bl,1
	je Block71

 Block68:
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0x4B
	push 0x1F
	push 0x3CF258
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x84],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block70

 Block69:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block70:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot

 Block71:
	test bl,2
	je Block75

 Block72:
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0x4A
	push 0x40
	push 0x3CF259
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x84],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block74

 Block73:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block74:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot

 Block75:
	test bl,4
	je Block79

 Block76:
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0x4B
	push 0x64
	push 0x3CF25A
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x84],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block78

 Block77:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block78:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot

 Block79:
	test bl,8
	je Block83

 Block80:
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0x6E
	push 0x1C
	push 0x3CF25B
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x84],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block82

 Block81:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block82:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot

 Block83:
	test bl,0x10
	je Block87

 Block84:
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0x6F
	push 0x40
	push 0x3CF25C
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x84],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block86

 Block85:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block86:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot

 Block87:
	test bl,0x20
	je Block91

 Block88:
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0x6E
	push 0x66
	push 0x3CF25D
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x84],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block90

 Block89:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block90:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot

 Block91:
	test bl,0x40
	je Block95

 Block92:
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0x8F
	push 0x1C
	push 0x3CF25E
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x84],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block94

 Block93:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block94:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot

 Block95:
	test bl,bl
	jns Block99

 Block96:
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0x90
	push 0x41
	push 0x3CF25F
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x84],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block98

 Block97:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	push esi
	call edx

 Block98:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot

 Block99:
	test ebx,0x100
	je Block103

 Block100:
	push 2
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0
	push 0x90
	push 0x67
	push 0x3CF260
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x84],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block102

 Block101:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block102:
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::DrawItemIconForSlot

 Block103:
	mov edx,dword ptr [esp+0x5C]
	push 0
	mov ecx,edi
	mov dword ptr [edi+0xB14],edx
	call CWnd::InvalidateRect
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test esi,esi
	je Block105

 Block104:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block105:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x44
	ret 8
}
}
// CUIDragonBox::OnChildNotify
__SUB_CLASS_THIS(003A0710, __thiscall, 71900,  CUIDragonBox, void, uint32_t, uint32_t, uint32_t) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	cmp eax,0x7D0
	jne Block6

 Block1:
	cmp edx,0x65
	jne Block6

 Block2:
	mov eax,dword ptr [esp+0xC]
	cmp eax,1
	jne Block4

 Block3:
	call CUIDragonBox::ShowToolTip
	ret 0xC

 Block4:
	test eax,eax
	jne Block8

 Block5:
	add ecx,0x88
	call CUIToolTip::ClearToolTip
	ret 0xC

 Block6:
	cmp edx,0x64
	jne Block8

 Block7:
	mov edx,dword ptr [ecx]
	push eax
	mov eax,dword ptr [edx+0x20]
	call eax

 Block8:
	ret 0xC
}
}
// CUIDragonBox::GetRTTI
__SUB_CLASS_THIS0(0039F8B0, __thiscall, 71902,  CUIDragonBox, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIDragonBox::ms_RTTI_CUIDragonBox
	ret
}
}
// CUIDragonBox::~CUIDragonBox
_SUB_EXCEPTION_HANDLER(39F900)
__SUB_CLASS_THIS0(0039F900, __thiscall, 71893,  CUIDragonBox, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_39F900
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIDragonBox::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIDragonBox::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIDragonBox::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0xB10]
	mov dword ptr [esp+0x18],1
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	cmp dword ptr [esi+0xB0C],0
	lea edi,[esi+0xB08]
	je Block4

 Block3:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block4:
	mov ecx,esi
	mov dword ptr [TSingleton<CUIDragonBox>::ms_pInstance],0
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call CUIWnd::~CUIWnd
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x10
	ret
}
}
// CUIDragonBox::CUIDragonBox
_SUB_EXCEPTION_HANDLER(39F7B0)
__SUB_CLASS_THIS0(0039F7B0, __thiscall, 71891,  CUIDragonBox, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_39F7B0
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
	push 0xC
	push 0x7D
	push 4
	push 0x2A
	call CUIWnd::_ctor_0
	lea eax,[esi+0xB08]
	mov dword ptr [esp+0x20],edi
	cmp eax,edi
	je Block2

 Block1:
	lea ecx,[eax-0xB08]
	mov dword ptr [TSingleton<CUIDragonBox>::ms_pInstance],ecx
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CUIDragonBox>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CUIDragonBox::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIDragonBox::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIDragonBox::`vftable'{for `ZRefCounted'}
	mov dword ptr [eax+4],edi
	mov dword ptr [esi+0xB10],edi
	lea edx,[esi+0xAFC]
	push edx
	mov edx,dword ptr [esi+0xAD0]
	lea eax,[esp+0x10]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	mov dword ptr [esi+0xB14],edi
	mov dword ptr [esi+0xB18],edi
	mov ecx,dword ptr [TSingleton<CConfig>::ms_pInstance]
	push edx
	mov byte ptr [esp+0x30],3
	call CConfig::GetUIWndPos
	mov eax,dword ptr [esp+0xC]
	mov ecx,dword ptr [esp+0x10]
	push edi
	push 1
	push edi
	push 1
	push 0xA
	push 0xC8
	push 0xA0
	push eax
	push ecx
	mov ecx,esi
	call CWnd::CreateWnd
	call dword ptr [ZImports::_timeGetTime]
	mov dword ptr [esi+0xB1C],eax
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
// CUIDragonBox::ShowToolTip
_SUB_EXCEPTION_HANDLER(3A0360)
__SUB_CLASS_THIS0(003A0360, __thiscall, 71893,  CUIDragonBox, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A0360
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
	mov eax,ecx
	mov dword ptr [esp+0x24],eax
	xor edi,edi
	mov dword ptr [esp+0x14],edi
	mov ecx,dword ptr [eax+0xB18]
	cmp ecx,edi
	mov dword ptr [esp+0x38],edi
	jle Block24

 Block1:
	mov eax,0x45E7B273
	imul ecx
	sar edx,0xE
	mov eax,edx
	shr eax,0x1F
	lea ecx,[edx+eax+1]
	mov eax,0x88888889
	imul ecx
	add edx,ecx
	sar edx,5
	mov esi,edx
	shr esi,0x1F
	add esi,edx
	mov edx,esi
	shl edx,4
	sub edx,esi
	neg edx
	lea ebp,[ecx+edx*4]
	cmp esi,edi
	je Block10

 Block2:
	mov dword ptr [esp+0x18],edi
	lea eax,[esp+0x1C]
	push 0x1802
	push eax
	mov byte ptr [esp+0x40],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push esi
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov byte ptr [esp+0x44],2
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x28]
	add esp,0xC
	mov byte ptr [esp+0x38],1
	cmp eax,edi
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	lea edx,[esp+0x18]
	push edx
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_add_1
	push offset _S___2
	lea ecx,[esp+0x20]
	push ecx
	mov bl,3
	mov ecx,eax
	mov byte ptr [esp+0x40],bl
	call ZXString<char>::op_add_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x3C],4
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x38],bl
	cmp eax,edi
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x38],1
	cmp eax,edi
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x38],0
	cmp eax,edi
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block10:
	cmp ebp,edi
	je Block19

 Block11:
	mov dword ptr [esp+0x18],edi
	lea edx,[esp+0x20]
	push 0x1803
	push edx
	mov byte ptr [esp+0x40],5
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov eax,dword ptr [eax]
	push ebp
	push eax
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x44],6
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov byte ptr [esp+0x38],5
	cmp eax,edi
	je Block13

 Block12:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block13:
	lea ecx,[esp+0x18]
	push ecx
	lea edx,[esp+0x20]
	push edx
	lea ecx,[esp+0x1C]
	call ZXString<char>::op_add_1
	push offset _S___2
	lea ecx,[esp+0x24]
	push ecx
	mov bl,7
	mov ecx,eax
	mov byte ptr [esp+0x40],bl
	call ZXString<char>::op_add_0
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x3C],8
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x38],bl
	cmp eax,edi
	je Block15

 Block14:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block15:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x38],5
	cmp eax,edi
	je Block17

 Block16:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block17:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x38],0
	cmp eax,edi
	je Block19

 Block18:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block19:
	cmp esi,edi
	jne Block21

 Block20:
	cmp ebp,edi
	je Block30

 Block21:
	lea edx,[esp+0x1C]
	push 0x1804
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	push eax
	lea eax,[esp+0x24]
	mov bl,9
	push eax
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x40],bl
	call ZXString<char>::op_add_1
	push eax
	lea ecx,[esp+0x18]
	mov byte ptr [esp+0x3C],0xA
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]
	mov byte ptr [esp+0x38],bl
	cmp eax,edi
	je Block23

 Block22:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block23:
	mov eax,dword ptr [esp+0x1C]
	jmp Block28

 Block24:
	cmp dword ptr [eax+0xB14],edi
	jne Block26

 Block25:
	lea ecx,[esp+0x20]
	push 0x1806
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x38],0xB
	jmp Block27

 Block26:
	lea edx,[esp+0x20]
	push 0x1805
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov byte ptr [esp+0x38],0xC

 Block27:
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x20]

 Block28:
	mov byte ptr [esp+0x38],0
	cmp eax,edi
	je Block30

 Block29:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block30:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push edi
	lea eax,[esp+0x2C]
	push eax
	call CWndMan::GetCursorPos
	mov ecx,dword ptr [esp+0x2C]
	mov esi,dword ptr [esp+0x14]
	mov edx,dword ptr [esp+0x28]
	add ecx,0x14
	push esi
	push ecx
	mov ecx,dword ptr [esp+0x2C]
	add edx,0x14
	push edx
	add ecx,0x88
	call CUIToolTip::SetToolTip_String
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp esi,edi
	je Block32

 Block31:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block32:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret
}
}
// CUIDragonBox::IsKindOf
__SUB_CLASS_THIS(0039F8D0, __thiscall, 71903,  CUIDragonBox, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIDragonBox::ms_RTTI_CUIDragonBox
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
// CUIDragonBox::OnDestroy
__SUB_CLASS_THIS0(0039F790, __thiscall, 71893,  CUIDragonBox, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CUIWnd::OnDestroy
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push esi
	call CWvsContext::RemoveFromStackForTab
	pop esi
	ret
}
}
// CUIDragonBox::OnCreate
_SUB_EXCEPTION_HANDLER(3A01A0)
__SUB_CLASS_THIS(003A01A0, __thiscall, 71896,  CUIDragonBox, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_3A01A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x18
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x28]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x38]
	push eax
	call CUIWnd::OnCreate_0
	xor ebx,ebx
	push ebx
	push ebx
	push ebx
	cmp dword ptr [esi+0xB14],ebx
	je Block2

 Block1:
	push 0xFFFFFFFC
	push 0xFFFFFFFA
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x50],esp
	push 0x17FF
	push ecx
	jmp Block3

 Block2:
	push ebx
	push ebx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x50],esp
	push 0x17FE
	push edx

 Block3:
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,esi
	call CWnd::SetBackgrnd
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x18],1
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	lea eax,[esp+0x38]
	push 0x1800
	push eax
	mov dword ptr [esp+0x38],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x34],1
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block5

 Block4:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block5:
	push 0xADC
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x38],eax
	mov byte ptr [esp+0x30],2
	cmp eax,ebx
	je Block7

 Block6:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block8

 Block7:
	xor eax,eax

 Block8:
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block17

 Block9:
	add eax,8
	cmp eax,ebx
	je Block17

 Block10:
	lea edi,[eax-8]
	cmp edi,ebx
	je Block12

 Block11:
	lea ecx,[edi+0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block12:
	mov eax,dword ptr [esi+0xB0C]
	mov dword ptr [esi+0xB0C],edi
	mov dword ptr [esp+0x14],eax
	cmp eax,ebx
	je Block14

 Block13:
	push ebx
	lea ecx,[esp+0x14]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block14:
	mov ecx,dword ptr [esi+0xB0C]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x18]
	push eax
	push ebx
	push 0xAD
	push 0x1B
	push 0x7D0
	push esi
	call edx
	mov eax,dword ptr [esi+0xB0C]
	lea ecx,[eax+4]
	mov eax,dword ptr [ecx]
	mov edx,dword ptr [eax+0x1C]
	push 1
	call edx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push 0xFFFFFFFF
	add ecx,0x40A0
	call ZArray<CUIWnd *>::InsertBefore
	mov dword ptr [eax],esi
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0x30],0xFFFFFFFF
	cmp eax,ebx
	je Block16

 Block15:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block16:
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x24
	ret 4

 Block17:
	xor edi,edi
	jmp Block12
}
}
// CUIDragonBox::OnMouseButton
__SUB_CLASS_THIS(0039F770, __thiscall, 71898,  IUIMsgHandler, void, uint32_t, uint32_t, long, long) {
__asm {

 Block0:
	ret 0x10
}
}
// CUIDragonBox::OnButtonClicked
_SUB_EXCEPTION_HANDLER(39F9D0)
__SUB_CLASS_THIS(0039F9D0, __thiscall, 71899,  CUIDragonBox, void, uint32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_39F9D0
	mov eax,dword ptr fs:[0]
	push eax
	push ecx
	push ebx
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov ebx,dword ptr [esp+0x20]
	cmp ebx,0x7D0
	jne Block8

 Block1:
	cmp dword ptr [edi+0xB18],0
	jg Block4

 Block2:
	cmp dword ptr [edi+0xB14],0
	je Block4

 Block3:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::SendDragonBallSummonRequest
	jmp Block8

 Block4:
	lea eax,[esp+0x20]
	push 0x1806
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],0
	mov dword ptr [esp+0x18],0
	je Block6

 Block5:
	sub esp,8
	mov ecx,esp
	mov dword ptr [esp+0x14],esp
	push 0
	push 0xFFFFFFFF
	mov dword ptr [ecx+4],0
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block6:
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	push ebx
	mov ecx,edi
	call CUIWnd::OnButtonClicked
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop ebx
	add esp,0x10
	ret 4
}
}
