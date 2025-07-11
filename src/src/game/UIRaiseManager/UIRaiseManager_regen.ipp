#include "regen.hpp"
// UIRaiseManager.ipp
#include "UIRaiseManager.hpp"

// CUIRaiseWndBase::GetEnableDropItemIndex
__SUB_CLASS_THIS(00438140, __thiscall, 59319,  CUIRaiseWndBase, long, long) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	xor eax,eax
	jmp Block2

 Block2:
	mov edx,dword ptr [ecx+0x94]
	test edx,edx
	je Block6

 Block3:
	cmp eax,dword ptr [edx-4]
	jae Block6

 Block4:
	cmp dword ptr [edx+eax*4],esi
	je Block7

 Block5:
	inc eax
	jmp Block2

 Block6:
	or eax,0xFFFFFFFF

 Block7:
	pop esi
	ret 4
}
}
// CUIRaiseWndBase::_LoadLayer
_SUB_EXCEPTION_HANDLER(438360)
__SUB_CLASS_THIS(00438360, __thiscall, 59324,  CUIRaiseWndBase, void, unsigned long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_438360
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
	mov edi,ecx
	mov eax,dword ptr [edi+0xD4]
	xor ebp,ebp
	cmp eax,ebp
	je Block2

 Block1:
	mov dword ptr [edi+0xD4],ebp
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,edi
	call edx
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	sete cl
	mov dword ptr [esp+0x44],ebp
	test cl,cl
	je Block5

 Block3:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp eax,ebp
	je Block80

 Block4:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx
	jmp Block80

 Block5:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block7

 Block6:
	push eax
	call _com_issue_error

 Block7:
	mov ebx,3
	mov edx,ebx
	mov word ptr [esp+0x1C],dx
	mov dword ptr [esp+0x24],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x44],2
	cmp ecx,ebp
	jne Block9

 Block8:
	push 0x80004003
	call _com_issue_error

 Block9:
	lea eax,[esp+0x2C]
	push eax
	lea edx,[esp+0x20]
	push edx
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	lea eax,[esp+0x34]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xD4]
	cmp esi,eax
	je Block14

 Block10:
	mov dword ptr [edi+0xD4],eax
	cmp eax,ebp
	je Block12

 Block11:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block12:
	cmp esi,ebp
	je Block14

 Block13:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block14:
	mov eax,dword ptr [esp+0x18]
	cmp eax,ebp
	je Block16

 Block15:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block16:
	mov esi,8
	mov byte ptr [esp+0x44],1
	cmp word ptr [esp+0x1C],si
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov byte ptr [esp+0x44],0
	cmp word ptr [esp+0x2C],si
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,ebp
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block24:
	lea edx,[esp+0x18]
	push edx
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov byte ptr [esp+0x44],bl
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	cmp eax,ebp
	je Block26

 Block25:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block26:
	mov esi,dword ptr [edi+0xD4]
	mov byte ptr [esp+0x44],4
	cmp esi,ebp
	jne Block28

 Block27:
	push 0x80004003
	call _com_issue_error

 Block28:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi]
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
	push esi
	call eax
	cmp eax,ebp
	jge Block30

 Block29:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block30:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x44],bl
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x44],0
	cmp eax,ebp
	je Block36

 Block35:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block36:
	lea eax,[esp+0x18]
	push eax
	mov ecx,edi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,5
	mov ecx,0xD
	mov byte ptr [esp+0x44],bl
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	cmp eax,ebp
	je Block38

 Block37:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block38:
	mov esi,dword ptr [edi+0xD4]
	mov byte ptr [esp+0x44],6
	cmp esi,ebp
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	mov edx,dword ptr [esp+0x1C]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x30]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	cmp eax,ebp
	jge Block42

 Block41:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block42:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0x44],bl
	jne Block45

 Block43:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,ebp
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x44],0
	cmp eax,ebp
	je Block48

 Block47:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block48:
	mov esi,dword ptr [edi+0xD4]
	cmp esi,ebp
	jne Block50

 Block49:
	push 0x80004003
	call _com_issue_error

 Block50:
	mov ecx,dword ptr [esp+0x4C]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xE0]
	push ecx
	push esi
	call edx
	cmp eax,ebp
	jge Block52

 Block51:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block52:
	push ecx
	mov ecx,dword ptr [esp+0x18]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x50],esp
	cmp eax,ebp
	je Block54

 Block53:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block54:
	mov eax,dword ptr [edi+0xD4]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x54],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block56

 Block55:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block56:
	call CAnimationDisplayer::LoadCanvas
	mov esi,dword ptr [ZImports::_VariantInit]
	add esp,8
	lea eax,[esp+0x1C]
	push eax
	call esi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block58

 Block57:
	push eax
	call _com_issue_error

 Block58:
	lea edx,[esp+0x2C]
	mov bl,7
	push edx
	mov byte ptr [esp+0x48],bl
	call esi
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block60

 Block59:
	push eax
	call _com_issue_error

 Block60:
	mov ecx,dword ptr [edi+0xD4]
	mov byte ptr [esp+0x44],8
	cmp ecx,ebp
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push 0x1E
	push 0xA
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x44],bl
	cmp word ptr [esp+0x2C],si
	jne Block65

 Block63:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,ebp
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	mov byte ptr [esp+0x44],0
	cmp word ptr [esp+0x1C],si
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,ebp
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	jne Block72

 Block71:
	push 0x80004003
	call _com_issue_error

 Block72:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x40]
	lea ecx,[esp+0x4C]
	push ecx
	push eax
	mov esi,eax
	mov dword ptr [esp+0x54],ebp
	call edx
	cmp eax,ebp
	jge Block74

 Block73:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block74:
	mov eax,dword ptr [esp+0x4C]
	add eax,0x14
	mov dword ptr [edi+0x24],eax
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x4C]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x48]
	mov dword ptr [esp+0x54],ebp
	call eax
	cmp eax,ebp
	jge Block78

 Block77:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block78:
	mov ecx,dword ptr [esp+0x4C]
	mov eax,dword ptr [esp+0x14]
	add ecx,0x28
	mov dword ptr [edi+0x28],ecx
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp eax,ebp
	je Block80

 Block79:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block80:
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
// CUIRaisePieceWnd::CUIRaisePieceWnd
__SUB_CLASS_THIS(0043BBA0, __thiscall, 59381,  CUIRaisePieceWnd, void, long, long, long, ZXString16&, ZXString<char>&, ZArray<ZXString<char> >&, ZArray<long>&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0x1C]
	mov edx,dword ptr [esp+0x14]
	push esi
	push eax
	mov eax,dword ptr [esp+0x18]
	mov esi,ecx
	mov ecx,dword ptr [esp+0x20]
	push ecx
	mov ecx,dword ptr [esp+0x14]
	push edx
	mov edx,dword ptr [esp+0x14]
	push eax
	push 0xFFFFFFFF
	push ecx
	push edx
	mov ecx,esi
	call CUIRaiseWndBase::_ctor_0
	int 3// TODO: 	mov dword ptr [esi],offset CUIRaisePieceWnd::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIRaisePieceWnd::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIRaisePieceWnd::`vftable'{for `ZRefCounted'}
	mov eax,esi
	pop esi
	ret 0x1C
}
}
// CUIRaiseWndBase::OnButtonClicked
__SUB_CLASS_THIS(004391D0, __thiscall, 59310,  CUIRaiseWndBase, void, uint32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	jne Block2

 Block1:
	mov eax,dword ptr [ecx+0x80]
	mov ecx,dword ptr [CUIRaiseWndBase::s_pManager]
	mov dword ptr [esp+4],eax
	jmp  CUIRaiseManager::DestroyWindow

 Block2:
	ret 4
}
}
// CUIRaiseManager::SetQRDataWithQuestID
_SUB_EXCEPTION_HANDLER(43B720)
__SUB_CLASS_THIS(0043B720, __thiscall, 59346,  CUIRaiseManager, void, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43B720
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,8
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x10]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esp+0x20]
	push eax
	call CUIRaiseManager::_Quest2Item
	mov dword ptr [esp+0xC],0
	lea ecx,[esp+8]
	push ecx
	lea edx,[esp+0x24]
	push edx
	lea ecx,[esi+0xC]
	mov dword ptr [esp+0x20],0
	mov dword ptr [esp+0x28],eax
	call ZMap<unsigned long, ZRef<CUIRaiseWndBase>, unsigned long>::GetAt
	mov esi,dword ptr [esp+0xC]
	test esi,esi
	je Block2

 Block1:
	mov eax,dword ptr [esp+0x24]
	push eax
	mov ecx,esi
	call CUIRaiseWndBase::SetQRData

 Block2:
	mov dword ptr [esp+0x18],0xFFFFFFFF
	test esi,esi
	je Block4

 Block3:
	push 0
	lea ecx,[esp+0xC]
	call ZRef<CUIRaiseWndBase>::_ReleaseRaw

 Block4:
	mov ecx,dword ptr [esp+0x10]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x14
	ret 8
}
}
// CUIRaisePieceWnd::CheckDrop
__SUB_CLASS_THIS(00438F50, __thiscall, 59384,  CUIRaisePieceWnd, int32_t, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	call CUIRaiseWndBase::GetEnableDropItemIndex
	test eax,eax
	jl Block3

 Block1:
	mov edx,dword ptr [ecx+0x98]
	mov esi,1
	mov ecx,eax
	shl esi,cl
	test edx,esi
	jne Block3

 Block2:
	mov eax,1
	pop esi
	ret 4

 Block3:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	push 0x111B
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	xor eax,eax
	pop esi
	ret 4
}
}
// CUIRaiseWndBase::OnMouseEnter
__SUB_CLASS_THIS(00437DD0, __thiscall, 59312,    IUIMsgHandler, void, int32_t) {
__asm {

 Block0:
	cmp dword ptr [esp+4],0
	jne Block2

 Block1:
	add ecx,0xD4
	call CUIToolTip::ClearToolTip

 Block2:
	ret 4
}
}
// CUIRaiseWndBase::OnCreate
_SUB_EXCEPTION_HANDLER(43ACC0)
__SUB_CLASS_THIS(0043ACC0, __thiscall, 59309,  CUIRaiseWndBase, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43ACC0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x54
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x68]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	xor ebp,ebp
	add esp,8
	cmp eax,ebp
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	mov edx,3
	mov dword ptr [esp+0x70],ebp
	mov word ptr [esp+0x28],dx
	mov dword ptr [esp+0x30],ebp
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x70],1
	cmp ecx,ebp
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea eax,[esp+0x38]
	push eax
	lea edx,[esp+0x2C]
	push edx
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	lea eax,[esp+0x30]
	push eax
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x74],2
	lea edi,[esi+0xD0]
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebp
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block6:
	mov ecx,edi
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	cmp eax,ebp
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],1
	cmp eax,ebp
	je Block11

 Block10:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block11:
	mov ebx,8
	mov byte ptr [esp+0x70],0
	cmp word ptr [esp+0x28],bx
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp word ptr [esp+0x38],bx
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,ebp
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block19:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,esi
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov edx,0xD
	mov dword ptr [esp+0x70],3
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],eax
	cmp eax,ebp
	je Block21

 Block20:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block21:
	mov edi,dword ptr [edi]
	mov byte ptr [esp+0x70],4
	cmp edi,ebp
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [edi]
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
	push edi
	call eax
	cmp eax,ebp
	jge Block25

 Block24:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block25:
	mov byte ptr [esp+0x70],3
	cmp word ptr [esp+0x18],bx
	jne Block28

 Block26:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,ebp
	je Block29

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block28:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block29:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp eax,ebp
	je Block31

 Block30:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block31:
	mov dword ptr [esp+0x54],ebp
	mov dword ptr [esp+0x48],1
	mov dword ptr [esp+0x4C],ebp
	mov dword ptr [esp+0x50],ebp
	lea eax,[esp+0x14]
	push 0x1A71
	mov ebx,5
	push eax
	mov dword ptr [esp+0x78],ebx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	push eax
	lea ecx,[esp+0x58]
	mov byte ptr [esp+0x74],6
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],bl
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
	mov dword ptr [esp+0x18],eax
	mov byte ptr [esp+0x70],7
	cmp eax,ebp
	je Block35

 Block34:
	mov ecx,eax
	call CCtrlButton::_ctor_default
	jmp Block36

 Block35:
	xor eax,eax

 Block36:
	mov byte ptr [esp+0x70],bl
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
	mov eax,dword ptr [esi+0xB24]
	mov dword ptr [esi+0xB24],edi
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebp
	je Block42

 Block41:
	push ebp
	lea ecx,[esp+0x1C]
	call ZRef<CCtrlButton>::_ReleaseRaw

 Block42:
	mov ecx,dword ptr [esi+0xB24]
	mov edx,dword ptr [ecx]
	mov edx,dword ptr [edx+0x28]
	lea eax,[esp+0x48]
	push eax
	mov eax,dword ptr [esi+0x24]
	push 2
	push 4
	sub eax,0x10
	push eax
	push ebp
	push esi
	call edx
	mov ecx,esi
	call CUIRaiseWndBase::_LevelUp
	push 0x11B
	lea ecx,[esp+0x5C]
	call COutPacket::_ctor_1
	movzx eax,word ptr [esi+0x84]
	push eax
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x74],8
	call COutPacket::Encode2
	lea ecx,[esp+0x58]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	lea ecx,[esp+0x5C]
	mov byte ptr [esp+0x70],bl
	call ZArray<unsigned char>::RemoveAll
	mov eax,dword ptr [esp+0x54]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp eax,ebp
	je Block44

 Block43:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block44:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret 4

 Block45:
	xor edi,edi
	jmp Block40
}
}
// CUIRaiseManager::CUIRaiseManager
__SUB_CLASS_THIS0(00438AA0, __thiscall, 59342,  CUIRaiseManager, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	xor eax,eax
	mov dword ptr [esi+4],eax
	mov dword ptr [esi+8],eax
	lea ecx,[esi+0xC]
	push edi
	int 3// TODO: 	mov dword ptr [esi],offset CUIRaiseManager::`vftable'
	xor edi,edi
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<CUIRaiseWndBase>, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, ZRef<CUIRaiseWndBase>, unsigned long>::_CalcAutoGrow
	lea ecx,[esi+0x24]
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, tagPOINT, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, tagPOINT, unsigned long>::_CalcAutoGrow
	pop edi
	mov dword ptr [CUIRaiseWndBase::s_pManager],esi
	mov eax,esi
	pop esi
	ret
}
}
// CUIRaiseManager::DestroyWindow
_SUB_EXCEPTION_HANDLER(438FB0)
__SUB_CLASS_THIS(00438FB0, __thiscall, 59345,  CUIRaiseManager, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_438FB0
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
	mov edi,ecx
	xor eax,eax
	mov dword ptr [esp+0x18],eax
	mov ebx,dword ptr [esp+0x34]
	mov dword ptr [esp+0x2C],eax
	lea eax,[esp+0x14]
	push eax
	lea ecx,[esp+0x38]
	lea ebp,[edi+0xC]
	push ecx
	mov ecx,ebp
	mov dword ptr [esp+0x3C],ebx
	call ZMap<unsigned long, ZRef<CUIRaiseWndBase>, unsigned long>::GetAt
	mov esi,dword ptr [esp+0x18]
	test esi,esi
	je Block2

 Block1:
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [edx+0x2C]
	add esi,4
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	mov dword ptr [esp+0x1C],eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x38]
	push edx
	lea ecx,[edi+0x24]
	mov dword ptr [esp+0x28],eax
	mov dword ptr [esp+0x3C],ebx
	call ZMap<unsigned long, tagPOINT, unsigned long>::Insert
	lea eax,[esp+0x34]
	push eax
	mov ecx,ebp
	mov dword ptr [esp+0x38],ebx
	call ZMap<unsigned long, ZRef<CUIRaiseWndBase>, unsigned long>::RemoveKey
	mov esi,dword ptr [esp+0x18]

 Block2:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	test esi,esi
	je Block4

 Block3:
	push 0
	lea ecx,[esp+0x18]
	call ZRef<CUIRaiseWndBase>::_ReleaseRaw

 Block4:
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x1C
	ret 4
}
}
// CUIRaisePieceWnd::MakePreviewImage
_SUB_EXCEPTION_HANDLER(43B340)
__SUB_CLASS_THIS0(0043B340, __thiscall, 59386,  CUIRaisePieceWnd, _x_com_ptr<IWzCanvas>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43B340
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x60
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x74]
	mov dword ptr fs:[0],eax
	mov edx,ecx
	mov dword ptr [esp+0x2C],edx
	xor ebx,ebx
	xor eax,eax
	mov dword ptr [esp+0x30],ebx
	mov dword ptr [esp+0x14],eax
	mov ecx,dword ptr [edx+0x98]
	cmp ecx,ebx
	mov dword ptr [esp+0x7C],ebx
	mov dword ptr [esp+0x20],ecx
	mov dword ptr [esp+0x1C],ebx
	jge Block2

 Block1:
	mov eax,dword ptr [esp+0x84]
	mov dword ptr [eax],ebx
	jmp Block27

 Block2:
	je Block22

 Block3:
	mov ebp,dword ptr [ZImports::_VariantClear]
	jmp Block7

 Block6:
	mov edx,dword ptr [esp+0x2C]

 Block7:
	mov eax,dword ptr [esp+0x20]
	and eax,0x80000001
	jns Block9

 Block8:
	dec eax
	or eax,0xFFFFFFFE
	inc eax

 Block9:
	je Block20

 Block10:
	mov ecx,dword ptr [esp+0x1C]
	push ecx
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edx
	call CUIRaiseWndBase::GetPreviewImage
	mov byte ptr [esp+0x7C],1
	cmp dword ptr [esp+0x18],ebx
	je Block18

 Block11:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	je Block29

 Block12:
	mov edx,3
	mov word ptr [esp+0x34],dx
	mov edx,0xFF
	mov dword ptr [esp+0x3C],edx
	mov ebp,dword ptr [esp+0x34]
	mov edi,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x48]
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [esp+0x28]
	push eax
	push ebx
	push ebx
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [edi+0x80]
	mov byte ptr [esp+0x9C],2
	call ecx
	cmp eax,ebx
	jge Block14

 Block13:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0x7C],1
	jne Block28

 Block15:
	mov eax,dword ptr [esp+0x3C]
	xor edx,edx
	mov word ptr [esp+0x34],dx
	cmp eax,ebx
	je Block17

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block17:
	mov ebp,dword ptr [ZImports::_VariantClear]

 Block18:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x7C],bl
	cmp eax,ebx
	je Block20

 Block19:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block20:
	mov eax,dword ptr [esp+0x20]
	inc dword ptr [esp+0x1C]
	cdq
	sub eax,edx
	sar eax,1
	mov dword ptr [esp+0x20],eax
	jne Block6

 Block21:
	mov eax,dword ptr [esp+0x14]

 Block22:
	mov esi,dword ptr [esp+0x84]
	mov dword ptr [esi],eax
	cmp eax,ebx
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block24:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x7C],0xFFFFFFFF
	cmp eax,ebx
	je Block26

 Block25:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block26:
	mov eax,esi

 Block27:
	mov ecx,dword ptr [esp+0x74]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x6C
	ret 4

 Block28:
	mov ebp,dword ptr [ZImports::_VariantClear]
	lea eax,[esp+0x34]
	push eax
	call ebp
	jmp Block18

 Block29:
	lea ecx,[esp+0x30]
	push 0x3D0
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea edx,[esp+0x18]
	push edx
	push eax
	mov byte ptr [esp+0x88],3
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x3C]
	add esp,0xC
	mov byte ptr [esp+0x7C],1
	cmp eax,ebx
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block31:
	cmp dword ptr [esp+0x14],ebx
	je Block18

 Block32:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x54]
	push eax
	call esi
	lea ecx,[esp+0x54]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block55

 Block33:
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0x80],4
	call esi
	lea eax,[esp+0x44]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block55

 Block34:
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x7C],5
	cmp eax,ebx
	je Block56

 Block35:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x24]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x48]
	mov dword ptr [esp+0x2C],ebx
	call eax
	cmp eax,ebx
	jge Block37

 Block36:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block37:
	mov eax,dword ptr [esp+0x18]
	mov edi,dword ptr [esp+0x24]
	cmp eax,ebx
	je Block56

 Block38:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x28]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [esp+0x30],ebx
	call eax
	cmp eax,ebx
	jge Block40

 Block39:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block40:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebx
	je Block56

 Block41:
	lea edx,[esp+0x54]
	push edx
	mov edx,dword ptr [esp+0x2C]
	lea eax,[esp+0x48]
	push eax
	push edi
	push edx
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0x7C],4
	cmp word ptr [esp+0x44],si
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x44],ax
	mov eax,dword ptr [esp+0x4C]
	cmp eax,ebx
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x44]
	push ecx
	call ebp

 Block45:
	mov byte ptr [esp+0x7C],1
	cmp word ptr [esp+0x54],si
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	cmp eax,ebx
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea eax,[esp+0x54]
	push eax
	call ebp

 Block49:
	lea ecx,[esp+0x64]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x64]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block55

 Block50:
	mov ecx,dword ptr [esp+0x14]
	mov byte ptr [esp+0x7C],6
	cmp ecx,ebx
	je Block56

 Block51:
	mov edx,dword ptr [esp+0x18]
	lea eax,[esp+0x64]
	push eax
	push edx
	push ebx
	push ebx
	call IWzCanvas::Copy
	mov byte ptr [esp+0x7C],1
	cmp word ptr [esp+0x64],si
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [esp+0x64],ax
	mov eax,dword ptr [esp+0x6C]
	cmp eax,ebx
	je Block18

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block54:
	lea ecx,[esp+0x64]
	push ecx
	call ebp
	jmp Block18

 Block55:
	push eax
	call _com_issue_error

 Block56:
	push 0x80004003
	call _com_issue_error
}
}
// CUIRaiseWndBase::SetQRData
__SUB_CLASS_THIS(0043B040, __thiscall, 59316,  CUIRaiseWndBase, void, long) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x3C]
	push edi
	call edx
	mov edx,dword ptr [esi]
	mov edi,eax
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [esi+0x98],eax
	mov eax,dword ptr [edx+0x3C]
	mov ecx,esi
	call eax
	mov ecx,esi
	cmp edi,eax
	jne Block2

 Block1:
	call CUIRaiseWndBase::_Repaint
	pop edi
	pop esi
	ret 4

 Block2:
	call CUIRaiseWndBase::_LevelUp
	pop edi
	pop esi
	ret 4
}
}
// CUIRaiseWnd::GetLevel
__SUB_CLASS_THIS0(00437E40, __thiscall, 59362,  CUIRaiseWnd, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x98]
	cdq
	idiv dword ptr [ecx+0xB28]
	mov ecx,dword ptr [ecx+0xB2C]
	cmp eax,ecx
	jle Block2

 Block1:
	mov eax,ecx

 Block2:
	ret
}
}
// CUIRaiseManager::DestroyWindowWithQuestID
__SUB_CLASS_THIS(00439080, __thiscall, 59345,  CUIRaiseManager, void, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	push esi
	push eax
	mov esi,ecx
	call CUIRaiseManager::_Quest2Item
	push eax
	mov ecx,esi
	call CUIRaiseManager::DestroyWindow
	pop esi
	ret 4
}
}
// CUIRaiseWnd::GetRTTI
__SUB_CLASS_THIS0(0043BB30, __thiscall, 59366,  CUIRaiseWnd, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIRaiseWnd::ms_RTTI_CUIRaiseWnd
	ret
}
}
// CUIRaiseWndBase::_LevelUp
_SUB_EXCEPTION_HANDLER(43A640)
__SUB_CLASS_THIS0(0043A640, __thiscall, 59308,  CUIRaiseWndBase, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43A640
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	mov ebp,dword ptr [edi+0xD4]
	mov dword ptr [esp+0x18],ebp
	test ebp,ebp
	je Block2

 Block1:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+4]
	push ebp
	call ecx

 Block2:
	push 0xFFFFFF
	mov ecx,edi
	mov dword ptr [esp+0x4C],0
	call CUIRaiseWndBase::_LoadLayer
	call get_update_time
	mov esi,eax
	test ebp,ebp
	je Block18

 Block3:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	lea eax,[esi+0x1E0]
	mov ecx,3
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],eax
	lea edx,[esp+0x14]
	mov bl,2
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x4C],bl
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x48],3
	test ecx,ecx
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea eax,[esp+0x30]
	push eax
	lea edx,[esp+0x24]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x48],bl
	test eax,eax
	je Block9

 Block8:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block9:
	mov ebx,8
	mov byte ptr [esp+0x48],1
	cmp word ptr [esp+0x20],bx
	jne Block12

 Block10:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x30],bx
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x38]
	xor edx,edx
	mov word ptr [esp+0x30],dx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea eax,[esp+0x30]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block17:
	push 0x1E0
	push ecx
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x1C],esp
	push ebp
	call edx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterRepeatAnimation

 Block18:
	cmp dword ptr [edi+0xD4],0
	je Block35

 Block19:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block21

 Block20:
	push eax
	call _com_issue_error

 Block21:
	lea eax,[esi+0x1E0]
	mov edx,3
	mov word ptr [esp+0x30],dx
	mov dword ptr [esp+0x38],eax
	mov ecx,dword ptr [edi+0xD4]
	mov bl,5
	mov byte ptr [esp+0x48],bl
	test ecx,ecx
	jne Block23

 Block22:
	push 0x80004003
	call _com_issue_error

 Block23:
	lea eax,[esp+0x14]
	push eax
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0x48],6
	test ecx,ecx
	jne Block25

 Block24:
	push 0x80004003
	call _com_issue_error

 Block25:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x34]
	push eax
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x48],bl
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block27:
	mov esi,8
	mov byte ptr [esp+0x48],4
	cmp word ptr [esp+0x30],si
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [esp+0x30],ax
	mov eax,dword ptr [esp+0x38]
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[esp+0x30]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	mov byte ptr [esp+0x48],0
	cmp word ptr [esp+0x20],si
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0x28]
	xor edx,edx
	mov word ptr [esp+0x20],dx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea eax,[esp+0x20]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block35:
	mov ecx,edi
	call CUIRaiseWndBase::_Repaint
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+0x3C]
	mov ecx,edi
	call eax
	mov esi,eax
	test esi,esi
	jl Block42

 Block36:
	mov eax,dword ptr [edi+0x90]
	test eax,eax
	je Block40

 Block37:
	cmp dword ptr [eax-4],esi
	jbe Block40

 Block38:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],0
	mov ecx,eax
	lea ecx,[ecx+esi*4]
	je Block40

 Block39:
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	push 0
	push 0xFFFFFFFF
	mov dword ptr [eax+4],0
	mov eax,dword ptr [ecx]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd

 Block40:
	test esi,esi
	jle Block42

 Block41:
	mov edx,dword ptr [edi+0x80]
	push 0x29
	push edx
	call play_item_sound
	add esp,8

 Block42:
	mov dword ptr [esp+0x48],0xFFFFFFFF
	test ebp,ebp
	je Block44

 Block43:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block44:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x38
	ret
}
}
// CUIRaiseWndBase::GetRTTI
__SUB_CLASS_THIS0(004398D0, __thiscall, 59328,  CUIRaiseWndBase, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIRaiseWndBase::ms_RTTI_CUIRaiseWndBase
	ret
}
}
// CUIRaiseManager::DestroyWindows
_SUB_EXCEPTION_HANDLER(4390A0)
__SUB_CLASS_THIS0(004390A0, __thiscall, 59344,  CUIRaiseManager, void) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4390A0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x2C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x40]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	lea ebx,[edi+0xC]
	mov ecx,ebx
	call ZMap<unsigned long, ZRef<CUIRaiseWndBase>, unsigned long>::GetHeadPosition
	mov esi,eax
	mov dword ptr [esp+0x18],esi
	test esi,esi
	je Block8

 Block1:
	add edi,0x24
	mov dword ptr [esp+0x20],edi

 Block2:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esp+0x48],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xC
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov edi,dword ptr [esi+0x10]
	mov ebp,dword ptr [esi+8]
	mov eax,dword ptr [edi+4]
	mov edx,dword ptr [eax+0x2C]
	lea esi,[edi+4]
	mov ecx,esi
	mov dword ptr [esp+0x38],edi
	call edx
	mov dword ptr [esp+0x24],eax
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,esi
	call edx
	mov dword ptr [esp+0x28],eax
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr [esp+0x24],ebp
	call ZMap<unsigned long, tagPOINT, unsigned long>::Insert
	mov dword ptr [esp+0x30],0
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x20]
	push eax
	mov ecx,ebx
	mov byte ptr [esp+0x50],1
	mov dword ptr [esp+0x24],ebp
	call ZMap<unsigned long, ZRef<CUIRaiseWndBase>, unsigned long>::Insert
	lea esi,[edi+8]
	lea ecx,[esi+4]
	push ecx
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block7

 Block5:
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block7

 Block6:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block7:
	push 0
	lea eax,[esp+0x1C]
	push eax
	mov ecx,ebx
	mov dword ptr [esp+0x40],0
	call ZMap<unsigned long, ZRef<CUIRaiseWndBase>, unsigned long>::GetNext
	mov esi,dword ptr [esp+0x18]
	test esi,esi
	jne Block2

 Block8:
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret
}
}
// CUIRaiseWndBase::EnableDrop
__SUB_CLASS_THIS(00437E30, __thiscall, 59317,  CUIRaiseWndBase, int32_t, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x38]
	jmp eax
}
}
// CUIRaiseWndBase::CUIRaiseWndBase
_SUB_EXCEPTION_HANDLER(43B7C0)
__SUB_CLASS_THIS(0043B7C0, __thiscall, 59306,  CUIRaiseWndBase, void, long, long, long, ZXString16&, ZXString<char>&, ZArray<ZXString<char> >&, ZArray<long>&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43B7C0
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
	mov esi,ecx
	mov dword ptr [esp+0x14],esi
	call CWnd::_ctor_default
	mov ecx,dword ptr [esp+0x3C]
	mov eax,dword ptr [esp+0x38]
	mov edx,dword ptr [esp+0x44]
	mov dword ptr [esi+0x84],ecx
	xor ebp,ebp
	lea ecx,[esi+0x88]
	int 3// TODO: 	mov dword ptr [esi],offset CUIRaiseWndBase::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIRaiseWndBase::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIRaiseWndBase::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x80],eax
	push edx
	mov dword ptr [esp+0x34],ebp
	mov dword ptr [ecx],ebp
	call ZXString16::op_assign
	mov eax,dword ptr [esp+0x48]
	lea ecx,[esi+0x8C]
	push eax
	mov byte ptr [esp+0x34],1
	mov dword ptr [ecx],ebp
	call ZXString<char>::op_assign
	mov edx,dword ptr [esp+0x4C]
	lea ecx,[esi+0x90]
	push edx
	mov byte ptr [esp+0x34],2
	mov dword ptr [ecx],ebp
	call ZArray<ZXString<char>>::operator=
	mov eax,dword ptr [esp+0x50]
	lea ecx,[esi+0x94]
	push eax
	mov byte ptr [esp+0x34],3
	mov dword ptr [ecx],ebp
	call ZArray<long>::operator=
	mov ecx,dword ptr [esp+0x40]
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push offset _x_com_ptr<IWzCanvas>::_ctor_default
	push 9
	push 4
	lea edi,[esi+0xAC]
	push edi
	mov byte ptr [esp+0x44],4
	mov dword ptr [esi+0x98],ecx
	call __eh_vector_ctor_iterator
	mov dword ptr [esi+0xD0],ebp
	mov dword ptr [esi+0xD4],ebp
	lea ecx,[esi+0xD8]
	mov byte ptr [esp+0x30],7
	call CUIToolTip::_ctor_default
	mov dword ptr [esi+0xB24],ebp
	lea edx,[esp+0x38]
	push 0x1118
	push edx
	mov byte ptr [esp+0x38],9
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	push edi
	mov ecx,esi
	mov byte ptr [esp+0x38],0xA
	call CUIRaiseWndBase::_LoadBgTile
	mov ecx,dword ptr [esp+0x38]
	mov byte ptr [esp+0x30],9
	cmp ecx,ebp
	je Block2

 Block1:
	call _xbstr_t::Data_t::Release

 Block2:
	lea eax,[esp+0x38]
	push 0x1119
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	push eax
	lea ecx,[esi+0xB8]
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x38],0xB
	call CUIRaiseWndBase::_LoadBgTile
	mov ecx,dword ptr [esp+0x38]
	mov byte ptr [esp+0x30],9
	cmp ecx,ebp
	je Block4

 Block3:
	call _xbstr_t::Data_t::Release

 Block4:
	lea edx,[esp+0x38]
	push 0x111A
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[esi+0xC4]
	push eax
	push ecx
	mov ecx,esi
	mov byte ptr [esp+0x38],0xC
	call CUIRaiseWndBase::_LoadBgTile
	mov ecx,dword ptr [esp+0x38]
	mov byte ptr [esp+0x30],9
	cmp ecx,ebp
	je Block6

 Block5:
	call _xbstr_t::Data_t::Release

 Block6:
	mov ebx,dword ptr [edi]
	cmp ebx,ebp
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov eax,dword ptr [ebx]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[esp+0x38]
	push ecx
	push ebx
	mov dword ptr [esp+0x40],ebp
	call edx
	cmp eax,ebp
	jge Block10

 Block9:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block10:
	mov eax,dword ptr [esp+0x38]
	mov dword ptr [esi+0x9C],eax
	mov ebx,dword ptr [esi+0xB4]
	cmp ebx,ebp
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x40]
	lea edx,[esp+0x38]
	push edx
	push ebx
	mov dword ptr [esp+0x40],ebp
	call eax
	cmp eax,ebp
	jge Block14

 Block13:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block14:
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr [esi+0xA0],ecx
	mov edi,dword ptr [edi]
	cmp edi,ebp
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov edx,dword ptr [edi]
	mov ecx,dword ptr [edx+0x48]
	lea eax,[esp+0x38]
	push eax
	push edi
	mov dword ptr [esp+0x40],ebp
	call ecx
	cmp eax,ebp
	jge Block18

 Block17:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block18:
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [esi+0xA4],edx
	mov edi,dword ptr [esi+0xC4]
	cmp edi,ebp
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x38]
	push ecx
	push edi
	mov dword ptr [esp+0x40],ebp
	call edx
	cmp eax,ebp
	jge Block22

 Block21:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push edi
	push eax
	call _com_issue_errorex

 Block22:
	mov eax,dword ptr [esp+0x38]
	push 0x11C
	lea ecx,[esp+0x1C]
	mov dword ptr [esi+0xA8],eax
	call COutPacket::_ctor_1
	mov ecx,dword ptr [esi+0x80]
	push ecx
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x34],0xD
	call COutPacket::Encode4
	push 1
	lea ecx,[esp+0x1C]
	call COutPacket::Encode1
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea edx,[esp+0x18]
	push edx
	call CClientSocket::SendPacket
	lea ecx,[esp+0x1C]
	mov byte ptr [esp+0x30],9
	call ZArray<unsigned char>::RemoveAll
	mov eax,esi
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 0x1C
}
}
// CUIRaiseWndBase::OnSetFocus
__SUB_CLASS_THIS(00437F90, __thiscall, 59313,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 0
	call CWndMan::SetFocus
	xor eax,eax
	ret 4
}
}
// CUIRaiseWndBase::PutItem
__SUB_CLASS_THIS(004380B0, __thiscall, 59315,  CUIRaiseWndBase, int32_t, long, long) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	push edi
	mov edi,ecx
	test esi,esi
	jne Block2

 Block1:
	pop edi
	xor eax,eax
	pop esi
	ret 8

 Block2:
	cmp dword ptr [esi+0x20B8],0
	jne Block1

 Block3:
	mov eax,dword ptr [esi+0x20CC]
	mov ecx,dword ptr [eax+0x69]
	push ecx
	add eax,0x61
	push eax
	call _ZtlSecureFuseHelper<long>::call
	add esp,8
	test eax,eax
	jle Block1

 Block4:
	call get_update_time
	sub eax,dword ptr [esi+0x20BC]
	cmp eax,0xC8
	jl Block1

 Block5:
	mov eax,dword ptr [edi+0x80]
	mov ecx,dword ptr [esp+0x10]
	mov edx,dword ptr [edi]
	mov edx,dword ptr [edx+0x34]
	push eax
	mov eax,dword ptr [esp+0x10]
	push ecx
	push eax
	mov ecx,edi
	call edx
	test eax,eax
	je Block1

 Block6:
	mov dword ptr [esi+0x20B8],1
	call get_update_time
	mov dword ptr [esi+0x20BC],eax
	pop edi
	mov eax,1
	pop esi
	ret 8
}
}
// CUIRaiseWnd::CheckDrop
_SUB_EXCEPTION_HANDLER(43A970)
__SUB_CLASS_THIS(0043A970, __thiscall, 59363,  CUIRaiseWnd, int32_t, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43A970
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov edi,dword ptr [ebp+8]
	push edi
	call CUIRaiseWndBase::GetEnableDropItemIndex
	test eax,eax
	jl Block40

 Block1:
	mov edx,dword ptr [ecx+0xB2C]
	imul edx,dword ptr [ecx+0xB28]
	mov eax,dword ptr [ecx+0x98]
	xor ecx,ecx
	cmp eax,edx
	setl cl
	xor esi,esi
	mov dword ptr [ebp-0x14],esi
	mov dword ptr [ebp-0x24],ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edi
	lea edx,[ebp-0x18]
	push edx
	mov dword ptr [ebp-4],esi
	call CItemInfo::GetItemInfo
	mov ecx,dword ptr [ebp-0x18]
	cmp ecx,esi
	sete al
	mov byte ptr [ebp-4],1
	test al,al
	je Block4

 Block2:
	mov byte ptr [ebp-4],0
	cmp ecx,esi
	je Block33

 Block3:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx
	jmp Block33

 Block4:
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x20],esp
	push 0x1114
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],2
	cmp ecx,esi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea eax,[ebp-0x38]
	push eax
	mov byte ptr [ebp-4],1
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp-0x28]
	push ecx
	mov byte ptr [ebp-4],3
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],4
	mov dword ptr [ebp-0x20],esi
	mov dword ptr [ebp-0x1C],esp
	mov dword ptr [ecx],eax
	cmp eax,esi
	je Block8

 Block7:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block8:
	lea ecx,[ebp-0x20]
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	cmp eax,esi
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov eax,dword ptr [ebp-0x28]
	mov byte ptr [ebp-4],6
	cmp eax,esi
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	cmp word ptr [ebp-0x38],8
	mov byte ptr [ebp-4],7
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [ebp-0x38],ax
	mov eax,dword ptr [ebp-0x30]
	cmp eax,esi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[ebp-0x38]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov ebx,dword ptr [ebp-0x20]
	cmp ebx,esi
	sete al
	test al,al
	je Block20

 Block18:
	mov byte ptr [ebp-4],1
	cmp ebx,esi
	je Block31

 Block19:
	mov edx,dword ptr [ebx]
	mov eax,dword ptr [edx+8]
	push ebx
	call eax
	jmp Block31

 Block20:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	mov eax,dword ptr [ebp-0x24]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp-0x1C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],8
	cmp ebx,esi
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea ecx,[ebp-0x48]
	push ecx
	mov ecx,ebx
	mov byte ptr [ebp-4],7
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],9
	jne Block28

 Block23:
	mov edi,dword ptr [eax+8]
	cmp edi,esi
	je Block25

 Block24:
	push esi
	push esi
	push esi
	push esi
	push 0xFFFFFFFF
	push edi
	push esi
	push esi
	call WideCharToMultiByte
	mov esi,eax
	push 0
	dec esi
	push esi
	lea ecx,[ebp-0x14]
	call ZXString<char>::GetBuffer
	push 0
	push 0
	push 0x3FFFFFFF
	push eax
	push 0xFFFFFFFF
	push edi
	push 0
	push 0
	call WideCharToMultiByte
	push esi
	lea ecx,[ebp-0x14]
	call ZXString<char>::ReleaseBuffer
	xor esi,esi

 Block25:
	cmp word ptr [ebp-0x48],8
	mov byte ptr [ebp-4],7
	jne Block29

 Block26:
	mov eax,dword ptr [ebp-0x40]
	xor edx,edx
	mov word ptr [ebp-0x48],dx
	cmp eax,esi
	je Block30

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block28:
	mov edi,offset _S___3
	jmp Block24

 Block29:
	lea eax,[ebp-0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	mov byte ptr [ebp-4],1
	call edx

 Block31:
	mov eax,dword ptr [ebp-0x18]
	mov byte ptr [ebp-4],0
	cmp eax,esi
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block33:
	mov edi,dword ptr [ebp-0x24]
	cmp edi,esi
	je Block36

 Block34:
	cmp dword ptr [TSingleton<CUIStatusBar>::ms_pInstance],esi
	je Block37

 Block35:
	sub esp,8
	mov eax,esp
	mov dword ptr [ebp-0x1C],esp
	push esi
	push 0xFFFFFFFF
	mov dword ptr [eax+4],esi
	mov eax,dword ptr [ebp-0x14]
	mov ecx,dword ptr [TSingleton<CUIStatusBar>::ms_pInstance]
	push 0xC
	push eax
	call CUIStatusBar::ChatLogAdd
	jmp Block37

 Block36:
	push esi
	push 1
	push esi
	push esi
	push ecx
	mov ecx,esp
	lea edx,[ebp-0x14]
	mov dword ptr [ebp-0x1C],esp
	push edx
	mov dword ptr [ecx],esi
	call ZXString<char>::op_assign
	call CUtilDlg::Notice
	add esp,0x14

 Block37:
	mov eax,dword ptr [ebp-0x14]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,esi
	je Block39

 Block38:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block39:
	mov eax,edi
	jmp Block41

 Block40:
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp-0x1C],esp
	push 0x111B
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x14
	xor eax,eax

 Block41:
	lea esp,[ebp-0x58]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp-0x10]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CUIRaiseWnd::IsKindOf
__SUB_CLASS_THIS(0043BB50, __thiscall, 59367,  CUIRaiseWnd, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIRaiseWnd::ms_RTTI_CUIRaiseWnd
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
// CUIRaiseWndBase::OnMouseMove
__SUB_CLASS_THIS(00438010, __thiscall, 59311,  IUIMsgHandler, int32_t, long, long) {
__asm {

 Block0:
	push ebp
	mov ebp,dword ptr [esp+0xC]
	cmp ebp,0x14
	push esi
	push edi
	mov esi,ecx
	jle Block7

 Block1:
	mov eax,dword ptr [esi-4]
	mov edx,dword ptr [eax+0x3C]
	lea edi,[esi-4]
	mov ecx,edi
	call edx
	test eax,eax
	jl Block7

 Block2:
	mov eax,dword ptr [esi+0x8C]
	push ebx
	test eax,eax
	jne Block4

 Block3:
	xor ebx,ebx
	jmp Block5

 Block4:
	mov ebx,dword ptr [eax-4]

 Block5:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x3C]
	mov ecx,edi
	call edx
	cmp ebx,eax
	pop ebx
	jbe Block7

 Block6:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x3C]
	mov ecx,edi
	call edx
	mov ecx,dword ptr [esi+0x8C]
	mov eax,dword ptr [ecx+eax*4]
	mov edx,dword ptr [esi]
	push eax
	mov eax,dword ptr [edx+0x30]
	mov ecx,esi
	call eax
	mov edx,dword ptr [esi]
	lea ecx,[eax+ebp+0x14]
	mov eax,dword ptr [edx+0x2C]
	push ecx
	mov ecx,esi
	call eax
	mov ecx,dword ptr [esp+0x18]
	lea edx,[eax+ecx+0x14]
	push edx
	lea ecx,[esi+0xD4]
	call CUIToolTip::SetToolTip_String
	pop edi
	pop esi
	xor eax,eax
	pop ebp
	ret 8

 Block7:
	lea ecx,[esi+0xD4]
	call CUIToolTip::ClearToolTip
	pop edi
	pop esi
	xor eax,eax
	pop ebp
	ret 8
}
}
// CUIRaiseWndBase::IsKindOf
__SUB_CLASS_THIS(004398F0, __thiscall, 59329,  CUIRaiseWndBase, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIRaiseWndBase::ms_RTTI_CUIRaiseWndBase
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
// CUIRaiseWndBase::~CUIRaiseWndBase
_SUB_EXCEPTION_HANDLER(439740)
__SUB_CLASS_THIS0(00439740, __thiscall, 59308,  CUIRaiseWndBase, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_439740
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
	mov dword ptr [esp+0xC],esi
	int 3// TODO: 	mov dword ptr [esi],offset CUIRaiseWndBase::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIRaiseWndBase::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIRaiseWndBase::`vftable'{for `ZRefCounted'}
	push 0x11C
	lea ecx,[esp+0x14]
	mov dword ptr [esp+0x2C],9
	call COutPacket::_ctor_1
	mov eax,dword ptr [esi+0x80]
	push eax
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x2C],0xA
	call COutPacket::Encode4
	push 0
	lea ecx,[esp+0x14]
	call COutPacket::Encode1
	lea ecx,[esp+0x10]
	push ecx
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	call CClientSocket::SendPacket
	mov ecx,esi
	call CWnd::Destroy
	lea ecx,[esp+0x14]
	mov byte ptr [esp+0x28],9
	call ZArray<unsigned char>::RemoveAll
	cmp dword ptr [esi+0xB24],0
	lea edi,[esi+0xB20]
	mov byte ptr [esp+0x28],8
	je Block2

 Block1:
	push 0
	mov ecx,edi
	call ZRef<CCtrlButton>::_ReleaseRaw
	mov dword ptr [edi+4],0

 Block2:
	lea ecx,[esi+0xD8]
	mov byte ptr [esp+0x28],7
	call CUIToolTip::~CUIToolTip
	mov eax,dword ptr [esi+0xD4]
	mov byte ptr [esp+0x28],6
	test eax,eax
	je Block4

 Block3:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block4:
	mov eax,dword ptr [esi+0xD0]
	mov byte ptr [esp+0x28],5
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	push offset _x_com_ptr<IWzCanvas>::~_x_com_ptr<IWzCanvas>
	push 9
	push 4
	lea eax,[esi+0xAC]
	push eax
	mov byte ptr [esp+0x38],4
	call __eh_vector_dtor_iterator
	lea ecx,[esi+0x94]
	mov byte ptr [esp+0x28],3
	call ZArray<long>::RemoveAll
	lea ecx,[esi+0x90]
	mov byte ptr [esp+0x28],2
	call ZArray<ZXString<char>>::RemoveAll
	mov eax,dword ptr [esi+0x8C]
	mov byte ptr [esp+0x28],1
	test eax,eax
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov eax,dword ptr [esi+0x88]
	mov byte ptr [esp+0x28],0
	test eax,eax
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	mov ecx,esi
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call CWnd::~CWnd
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x20
	ret
}
}
// CUIRaiseManager::OpenWindow
_SUB_EXCEPTION_HANDLER(43C510)
__SUB_CLASS_THIS(0043C510, __thiscall, 59345,  CUIRaiseManager, void, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43C510
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
	mov esi,ecx
	mov dword ptr [esp+0x14],0
	mov edi,dword ptr [esp+0x28]
	lea eax,[esp+0x10]
	push eax
	lea ecx,[esp+0x2C]
	push ecx
	lea ecx,[esi+0xC]
	mov dword ptr [esp+0x28],0
	mov dword ptr [esp+0x30],edi
	call ZMap<unsigned long, ZRef<CUIRaiseWndBase>, unsigned long>::GetAt
	mov ebx,dword ptr [esp+0x14]
	test eax,eax
	je Block3

 Block1:
	test ebx,ebx
	je Block3

 Block2:
	mov dword ptr [esp+0x20],0xFFFFFFFF
	jmp Block4

 Block3:
	push edi
	mov ecx,esi
	call CUIRaiseManager::_CreateWindow
	mov dword ptr [esp+0x20],0xFFFFFFFF
	test ebx,ebx
	je Block5

 Block4:
	push 0
	lea ecx,[esp+0x14]
	call ZRef<CUIRaiseWndBase>::_ReleaseRaw

 Block5:
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x14
	ret 4
}
}
// CUIRaiseManager::ClearWindows
__SUB_CLASS_THIS0(00438880, __thiscall, 59344,  CUIRaiseManager, void) {
__asm {

 Block0:
	add ecx,0xC
	jmp  ZMap<unsigned long, ZRef<CUIRaiseWndBase>, unsigned long>::RemoveAll
}
}
// CUIRaiseManager::_Quest2Item
_SUB_EXCEPTION_HANDLER(438E50)
__SUB_CLASS_THIS(00438E50, __thiscall, 59347,  CUIRaiseManager, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_438E50
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push ebx
	push ebp
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x1C]
	mov dword ptr fs:[0],eax
	lea ebp,[ecx+0xC]
	mov ecx,ebp
	call ZMap<unsigned long, ZRef<CUIRaiseWndBase>, unsigned long>::GetHeadPosition
	mov esi,eax
	mov dword ptr [esp+0x10],esi
	test esi,esi
	je Block12

 Block1:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov eax,dword ptr [esi+0x10]
	test eax,eax
	je Block4

 Block3:
	add eax,0xC
	push eax
	call ebx

 Block4:
	mov eax,dword ptr [esi+0x10]
	mov esi,dword ptr [esi+8]
	mov dword ptr [esp+0x18],eax
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [esp+0x2C]
	cmp dword ptr [eax+0x84],ecx
	je Block13

 Block6:
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block11

 Block7:
	lea esi,[eax+8]
	lea edx,[esi+4]
	push edx
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block8:
	lea eax,[esi+4]
	push eax
	call ebx
	test esi,esi
	je Block10

 Block9:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block10:
	mov dword ptr [esp+0x18],0

 Block11:
	push 0
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,ebp
	call ZMap<unsigned long, ZRef<CUIRaiseWndBase>, unsigned long>::GetNext
	mov esi,dword ptr [esp+0x10]
	test esi,esi
	jne Block2

 Block12:
	xor eax,eax
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 4

 Block13:
	push 0
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	call ZRef<CUIRaiseWndBase>::_ReleaseRaw
	mov eax,esi
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	pop ebp
	pop ebx
	add esp,0x18
	ret 4
}
}
// CUIRaiseWndBase::GetPreviewImage
_SUB_EXCEPTION_HANDLER(43B080)
__SUB_CLASS_THIS(0043B080, __thiscall, 59320,  CUIRaiseWndBase, _x_com_ptr<IWzCanvas>*, _x_com_ptr<IWzCanvas>*, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43B080
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x48
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp-0x10],eax
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,0x20
	mov dword ptr [ebp-0x1C],0
	call __chkstk
	mov edi,esp
	push offset _S___9
	lea eax,[ebp-0x20]
	push eax
	lea ecx,[esi+0x88]
	call ZXString16::op_add_0
	mov esi,eax
	mov ecx,dword ptr [ebp+0xC]
	push 0xA
	push edi
	push ecx
	mov dword ptr [ebp-4],1
	call __itow
	add esp,0xC
	push eax
	lea edx,[ebp-0x14]
	push edx
	mov ecx,esi
	call ZXString16::op_add_0
	mov eax,dword ptr [ebp-0x20]
	mov byte ptr [ebp-4],3
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block2:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp-0x40]
	push eax
	call esi
	lea ecx,[ebp-0x40]
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
	lea edx,[ebp-0x50]
	push edx
	mov byte ptr [ebp-4],4
	call esi
	lea eax,[ebp-0x50]
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
	mov eax,dword ptr [ebp-0x14]
	lea ecx,[ebp-0x40]
	push ecx
	lea edx,[ebp-0x50]
	push edx
	push ecx
	mov dword ptr [ebp-0x18],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],5
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],6
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea ecx,[ebp-0x30]
	push ecx
	mov byte ptr [ebp-4],5
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov edi,dword ptr [ZImports::_VariantClear]
	mov esi,8
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp-0x50],si
	jne Block11

 Block9:
	mov eax,dword ptr [ebp-0x48]
	xor edx,edx
	mov word ptr [ebp-0x50],dx
	test eax,eax
	je Block12

 Block10:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block12

 Block11:
	lea eax,[ebp-0x50]
	push eax
	call edi

 Block12:
	mov byte ptr [ebp-4],9
	cmp word ptr [ebp-0x40],si
	jne Block15

 Block13:
	mov eax,dword ptr [ebp-0x38]
	xor ecx,ecx
	mov word ptr [ebp-0x40],cx
	test eax,eax
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea edx,[ebp-0x40]
	push edx
	call edi

 Block16:
	cmp word ptr [ebp-0x30],0
	jne Block18

 Block17:
	mov esi,dword ptr [ebp+8]
	mov dword ptr [esi],0
	lea eax,[ebp-0x30]
	mov dword ptr [ebp-0x1C],1
	push eax
	jmp Block29

 Block18:
	lea ecx,[ebp-0x30]
	push ecx
	lea edx,[ebp-0x18]
	push edx
	call get_unknown
	mov esi,dword ptr [ebp+8]
	add esp,4
	mov dword ptr [esi],0
	mov eax,dword ptr [eax]
	mov ecx,esp
	mov byte ptr [ebp-4],0xA
	mov dword ptr [ebp-0x54],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block20

 Block19:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block20:
	mov ecx,esi
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	test eax,eax
	jge Block23

 Block21:
	cmp eax,0x80004002
	je Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	mov eax,dword ptr [ebp-0x18]
	mov dword ptr [ebp-0x1C],1
	mov byte ptr [ebp-4],9
	test eax,eax
	je Block25

 Block24:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block25:
	cmp word ptr [ebp-0x30],8
	mov byte ptr [ebp-4],3
	jne Block28

 Block26:
	xor eax,eax
	mov word ptr [ebp-0x30],ax
	mov eax,dword ptr [ebp-0x28]
	test eax,eax
	je Block30

 Block27:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block28:
	lea ecx,[ebp-0x30]
	push ecx

 Block29:
	call edi

 Block30:
	mov eax,dword ptr [ebp-0x14]
	mov byte ptr [ebp-4],0
	test eax,eax
	je Block32

 Block31:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block32:
	mov eax,esi
	lea esp,[ebp-0x60]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	mov ecx,dword ptr [ebp-0x10]
	xor ecx,ebp
	call __xsecurity_check_cookie
	mov esp,ebp
	pop ebp
	ret 8
}
}
// CUIRaiseWnd::MakePreviewImage
__SUB_CLASS_THIS0(0043B2F0, __thiscall, 59364,  CUIRaiseWnd, _x_com_ptr<IWzCanvas>) {
__asm {

 Block0:
	push ecx
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x3C]
	mov dword ptr [esp+4],0
	call edx
	test eax,eax
	jge Block2

 Block1:
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [eax],0
	pop esi
	pop ecx
	ret 4

 Block2:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x3C]
	push edi
	mov ecx,esi
	call edx
	mov edi,dword ptr [esp+0x10]
	push eax
	push edi
	mov ecx,esi
	call CUIRaiseWndBase::GetPreviewImage
	mov eax,edi
	pop edi
	pop esi
	pop ecx
	ret 4
}
}
// CUIRaiseWndBase::_Repaint
_SUB_EXCEPTION_HANDLER(439920)
__SUB_CLASS_THIS0(00439920, __thiscall, 59308,  CUIRaiseWndBase, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_439920
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x88
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x9C]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov eax,dword ptr [esi+4]
	mov edx,dword ptr [eax+0x2C]
	lea edi,[esi+4]
	mov ecx,edi
	call edx
	mov dword ptr [esp+0x44],eax
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax+0x30]
	mov ecx,edi
	call edx
	mov dword ptr [esp+0x48],eax
	mov eax,3
	mov word ptr [esp+0x14],ax
	mov dword ptr [esp+0x1C],0xFFFFFFFE
	lea ecx,[esp+0x38]
	push ecx
	xor ebx,ebx
	mov ecx,esi
	mov dword ptr [esp+0xA8],ebx
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xA4],1
	cmp ecx,ebx
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x44]
	push eax
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x40]
	cmp eax,ebx
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esp+0x38]
	mov byte ptr [esp+0xA4],0
	cmp eax,ebx
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov edi,8
	mov dword ptr [esp+0xA4],0xFFFFFFFF
	cmp word ptr [esp+0x14],di
	jne Block9

 Block7:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	cmp eax,ebx
	je Block10

 Block8:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block10

 Block9:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block10:
	mov dword ptr [esp+0x24],ebx
	lea edx,[esp+0x38]
	push 0x3D0
	push edx
	mov dword ptr [esp+0xAC],2
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea ecx,[esp+0x28]
	push ecx
	push eax
	mov byte ptr [esp+0xB0],3
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x44]
	add esp,0xC
	mov byte ptr [esp+0xA4],2
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block12:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push edx
	call ebp
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	lea ecx,[esp+0x14]
	mov bl,4
	push ecx
	mov byte ptr [esp+0xA8],bl
	call ebp
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block16

 Block15:
	push eax
	call _com_issue_error

 Block16:
	mov ecx,dword ptr [esp+0x24]
	mov byte ptr [esp+0xA4],5
	test ecx,ecx
	jne Block18

 Block17:
	push 0x80004003
	call _com_issue_error

 Block18:
	lea eax,[esp+0x28]
	push eax
	mov eax,dword ptr [esi+0x28]
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [esi+0x24]
	push eax
	push edx
	call IWzCanvas::Create
	mov byte ptr [esp+0xA4],bl
	cmp word ptr [esp+0x14],di
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
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
	mov byte ptr [esp+0xA4],2
	cmp word ptr [esp+0x28],di
	jne Block25

 Block23:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	test eax,eax
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block26:
	mov edi,dword ptr [esi+0x24]
	mov eax,dword ptr [esi+0x28]
	sub edi,dword ptr [esi+0xA0]
	sub eax,dword ptr [esi+0xA8]
	sub edi,dword ptr [esi+0x9C]
	sub eax,dword ptr [esi+0xA4]
	lea ecx,[esp+0x14]
	push ecx
	mov dword ptr [esp+0x44],edi
	mov dword ptr [esp+0x40],eax
	call ebp
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block28

 Block27:
	push eax
	call _com_issue_error

 Block28:
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esi+0xAC]
	mov byte ptr [esp+0xA4],6
	test ecx,ecx
	jne Block30

 Block29:
	push 0x80004003
	call _com_issue_error

 Block30:
	mov ebp,dword ptr [esp+0x14]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x28]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x2C]
	push edx
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x34]
	push 0
	push 0
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [ebx+0x80]
	push ecx
	mov dword ptr [esp+0x58],ecx
	call eax
	test eax,eax
	jge Block32

 Block31:
	mov ecx,dword ptr [esp+0x38]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block32:
	cmp word ptr [esp+0x14],8
	mov bl,2
	mov byte ptr [esp+0xA4],bl
	jne Block35

 Block33:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block36

 Block34:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block36

 Block35:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block36:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push ecx
	call ebp
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block38

 Block37:
	push eax
	call _com_issue_error

 Block38:
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [esi+0xB0]
	mov byte ptr [esp+0xA4],7
	test ecx,ecx
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	lea edx,[esp+0x28]
	push edx
	push 0
	push 0
	push 0
	push 0
	push 0
	push edi
	push 0xFF
	push eax
	mov eax,dword ptr [esi+0x9C]
	push 0
	push eax
	call IWzCanvas::CopyEx
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xA4],bl
	jne Block43

 Block41:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block44

 Block42:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block44

 Block43:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block44:
	lea eax,[esp+0x14]
	push eax
	call ebp
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block46

 Block45:
	push eax
	call _com_issue_error

 Block46:
	mov edx,dword ptr [esp+0x24]
	mov edi,dword ptr [esi+0xB4]
	mov byte ptr [esp+0xA4],8
	test edx,edx
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	mov ebp,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi+0x24]
	sub ecx,dword ptr [esi+0xA0]
	mov ebx,dword ptr [edx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x28]
	push edi
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x30]
	push 0
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x38]
	push ecx
	mov dword ptr [esp+0x54],edx
	push edx
	mov edx,dword ptr [ebx+0x80]
	mov dword ptr [eax+0xC],ebp
	call edx
	test eax,eax
	jge Block50

 Block49:
	mov ecx,dword ptr [esp+0x38]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block50:
	cmp word ptr [esp+0x14],8
	mov byte ptr [esp+0xA4],2
	jne Block53

 Block51:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block54

 Block52:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block54

 Block53:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block54:
	mov edi,dword ptr [esi+0xA4]
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esi+0xB8]
	mov byte ptr [esp+0xA4],9
	test ecx,ecx
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	mov ebp,dword ptr [esp+0x14]
	sub esp,0x10
	mov eax,esp
	mov ebx,dword ptr [ecx]
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x28]
	push 0
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x30]
	push 0
	push 0
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x3C]
	push 0
	mov dword ptr [eax+0xC],ebp
	mov ebp,dword ptr [esp+0x5C]
	mov eax,dword ptr [ebx+0x84]
	push ebp
	push 0
	push 0xFF
	push edx
	push edi
	push 0
	push ecx
	mov dword ptr [esp+0x74],ecx
	call eax
	test eax,eax
	jge Block60

 Block59:
	mov ecx,dword ptr [esp+0x38]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block60:
	mov ebx,8
	mov byte ptr [esp+0xA4],2
	cmp word ptr [esp+0x14],bx
	jne Block63

 Block61:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block64

 Block62:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block64

 Block63:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block64:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block66

 Block65:
	push eax
	call _com_issue_error

 Block66:
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [esi+0xBC]
	mov byte ptr [esp+0xA4],0xA
	test ecx,ecx
	jne Block68

 Block67:
	push 0x80004003
	call _com_issue_error

 Block68:
	lea edx,[esp+0x28]
	push edx
	mov edx,dword ptr [esp+0x44]
	push 0
	push 0
	push 0
	push 0
	push ebp
	push edx
	push 0xFF
	push eax
	mov eax,dword ptr [esi+0x9C]
	push edi
	push eax
	call IWzCanvas::CopyEx
	mov byte ptr [esp+0xA4],2
	cmp word ptr [esp+0x28],bx
	jne Block71

 Block69:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block72:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block74

 Block73:
	push eax
	call _com_issue_error

 Block74:
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [esi+0xC0]
	mov byte ptr [esp+0xA4],0xB
	test ecx,ecx
	jne Block76

 Block75:
	push 0x80004003
	call _com_issue_error

 Block76:
	lea edx,[esp+0x28]
	push edx
	push 0
	push 0
	push 0
	push 0
	push ebp
	push 0
	push 0xFF
	push eax
	mov eax,dword ptr [esi+0x24]
	sub eax,dword ptr [esi+0xA0]
	push edi
	push eax
	call IWzCanvas::CopyEx
	mov byte ptr [esp+0xA4],2
	cmp word ptr [esp+0x28],bx
	jne Block79

 Block77:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	lea eax,[esp+0x14]
	push eax
	add edi,ebp
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block82

 Block81:
	push eax
	call _com_issue_error

 Block82:
	mov ecx,dword ptr [esp+0x24]
	mov edx,dword ptr [esi+0xC4]
	mov byte ptr [esp+0xA4],0xC
	test ecx,ecx
	jne Block84

 Block83:
	push 0x80004003
	call _com_issue_error

 Block84:
	mov ebp,dword ptr [esp+0x14]
	mov ebx,dword ptr [ecx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x28]
	push edx
	mov edx,dword ptr [ebx+0x80]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x30]
	push edi
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x38]
	push 0
	push ecx
	mov dword ptr [esp+0x5C],ecx
	mov dword ptr [eax+0xC],ebp
	call edx
	test eax,eax
	jge Block86

 Block85:
	mov ecx,dword ptr [esp+0x3C]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block86:
	cmp word ptr [esp+0x14],8
	mov bl,2
	mov byte ptr [esp+0xA4],bl
	jne Block89

 Block87:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block90

 Block88:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block90

 Block89:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block90:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x28]
	push ecx
	call ebp
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block92

 Block91:
	push eax
	call _com_issue_error

 Block92:
	mov ecx,dword ptr [esp+0x24]
	mov eax,dword ptr [esi+0xC8]
	mov byte ptr [esp+0xA4],0xD
	test ecx,ecx
	jne Block94

 Block93:
	push 0x80004003
	call _com_issue_error

 Block94:
	lea edx,[esp+0x28]
	push edx
	mov edx,dword ptr [esp+0x44]
	push 0
	push 0
	push 0
	push 0
	push 0
	push edx
	push 0xFF
	push eax
	mov eax,dword ptr [esi+0x9C]
	push edi
	push eax
	call IWzCanvas::CopyEx
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xA4],bl
	jne Block97

 Block95:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	lea eax,[esp+0x14]
	push eax
	call ebp
	lea ecx,[esp+0x14]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block100

 Block99:
	push eax
	call _com_issue_error

 Block100:
	mov edx,dword ptr [esp+0x24]
	mov byte ptr [esp+0xA4],0xE
	test edx,edx
	jne Block102

 Block101:
	push 0x80004003
	call _com_issue_error

 Block102:
	mov ebp,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi+0x24]
	sub ecx,dword ptr [esi+0xA0]
	mov ebx,dword ptr [edx]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x28]
	mov dword ptr [eax+4],ebp
	mov ebp,dword ptr [esp+0x2C]
	mov dword ptr [eax+8],ebp
	mov ebp,dword ptr [esp+0x30]
	mov dword ptr [eax+0xC],ebp
	mov eax,dword ptr [esi+0xCC]
	push eax
	push edi
	push ecx
	mov dword ptr [esp+0x58],edx
	push edx
	mov edx,dword ptr [ebx+0x80]
	call edx
	test eax,eax
	jge Block104

 Block103:
	mov ecx,dword ptr [esp+0x3C]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block104:
	mov ebp,8
	mov byte ptr [esp+0xA4],2
	cmp word ptr [esp+0x14],bp
	jne Block107

 Block105:
	mov eax,dword ptr [esp+0x1C]
	xor edx,edx
	mov word ptr [esp+0x14],dx
	test eax,eax
	je Block108

 Block106:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block108

 Block107:
	lea eax,[esp+0x14]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block108:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x14]
	push ecx
	call edi
	lea edx,[esp+0x14]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block110

 Block109:
	push eax
	call _com_issue_error

 Block110:
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0xA8],0xF
	call edi
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block112

 Block111:
	push eax
	call _com_issue_error

 Block112:
	lea edx,[esp+0x14]
	push edx
	lea eax,[esp+0x2C]
	push eax
	lea ecx,[esp+0x44]
	push 1
	push ecx
	mov byte ptr [esp+0xB4],0x10
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	push eax
	mov eax,dword ptr [esi+0x8C]
	push ecx
	mov dword ptr [esp+0x48],esp
	mov ecx,esp
	mov bl,0x11
	push eax
	mov byte ptr [esp+0xB8],bl
	call _xbstr_t::_ctor_0
	mov ecx,dword ptr [esp+0x34]
	mov byte ptr [esp+0xB4],0x12
	test ecx,ecx
	jne Block114

 Block113:
	push 0x80004003
	call _com_issue_error

 Block114:
	push 5
	push 5
	mov byte ptr [esp+0xBC],bl
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0xA4],0x10
	test eax,eax
	je Block116

 Block115:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block116:
	mov byte ptr [esp+0xA4],0xF
	cmp word ptr [esp+0x28],bp
	jne Block119

 Block117:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block120

 Block118:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block120

 Block119:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block120:
	mov byte ptr [esp+0xA4],2
	cmp word ptr [esp+0x14],bp
	jne Block123

 Block121:
	xor eax,eax
	mov word ptr [esp+0x14],ax
	mov eax,dword ptr [esp+0x1C]
	test eax,eax
	je Block124

 Block122:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block123:
	lea ecx,[esp+0x14]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block124:
	lea edx,[esp+0x6C]
	push edx
	call edi
	lea eax,[esp+0x6C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block126

 Block125:
	push eax
	call _com_issue_error

 Block126:
	lea ecx,[esp+0x5C]
	push ecx
	mov byte ptr [esp+0xA8],0x13
	call edi
	lea edx,[esp+0x5C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block128

 Block127:
	push eax
	call _com_issue_error

 Block128:
	lea eax,[esp+0x7C]
	push eax
	mov byte ptr [esp+0xA8],0x14
	call edi
	lea ecx,[esp+0x7C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block130

 Block129:
	push eax
	call _com_issue_error

 Block130:
	lea edx,[esp+0x4C]
	push edx
	mov byte ptr [esp+0xA8],0x15
	call edi
	lea eax,[esp+0x4C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block132

 Block131:
	push eax
	call _com_issue_error

 Block132:
	lea ecx,[esp+0x28]
	push ecx
	mov byte ptr [esp+0xA8],0x16
	call edi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block134

 Block133:
	push eax
	call _com_issue_error

 Block134:
	lea eax,[esp+0x3C]
	mov bl,0x17
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xA8],bl
	call CWnd::GetLayer
	mov ecx,dword ptr [eax]
	mov byte ptr [esp+0xA4],0x18
	test ecx,ecx
	jne Block136

 Block135:
	push 0x80004003
	call _com_issue_error

 Block136:
	lea edx,[esp+0x6C]
	push edx
	lea eax,[esp+0x60]
	push eax
	lea edx,[esp+0x84]
	push edx
	lea eax,[esp+0x58]
	push eax
	mov eax,dword ptr [esp+0x34]
	lea edx,[esp+0x38]
	push edx
	push eax
	lea edx,[esp+0xA4]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0x8C],bp
	jne Block145

 Block137:
	xor eax,eax
	mov word ptr [esp+0x8C],ax
	mov eax,dword ptr [esp+0x94]
	test eax,eax
	je Block139

 Block138:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block139:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block140:
	mov eax,dword ptr [esp+0x3C]
	mov byte ptr [esp+0xA4],bl
	test eax,eax
	je Block142

 Block141:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block142:
	mov byte ptr [esp+0xA4],0x16
	cmp word ptr [esp+0x28],bp
	jne Block146

 Block143:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block147

 Block144:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block147

 Block145:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x8C]
	push ecx
	call edi
	jmp Block140

 Block146:
	lea edx,[esp+0x28]
	push edx
	call edi

 Block147:
	mov byte ptr [esp+0xA4],0x15
	cmp word ptr [esp+0x4C],bp
	jne Block150

 Block148:
	xor eax,eax
	mov word ptr [esp+0x4C],ax
	mov eax,dword ptr [esp+0x54]
	test eax,eax
	je Block151

 Block149:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block151

 Block150:
	lea ecx,[esp+0x4C]
	push ecx
	call edi

 Block151:
	mov byte ptr [esp+0xA4],0x14
	cmp word ptr [esp+0x7C],bp
	jne Block154

 Block152:
	mov eax,dword ptr [esp+0x84]
	xor edx,edx
	mov word ptr [esp+0x7C],dx
	test eax,eax
	je Block155

 Block153:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block155

 Block154:
	lea eax,[esp+0x7C]
	push eax
	call edi

 Block155:
	mov byte ptr [esp+0xA4],0x13
	cmp word ptr [esp+0x5C],bp
	jne Block158

 Block156:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	test eax,eax
	je Block159

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block159

 Block158:
	lea edx,[esp+0x5C]
	push edx
	call edi

 Block159:
	mov byte ptr [esp+0xA4],2
	cmp word ptr [esp+0x6C],bp
	jne Block162

 Block160:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	test eax,eax
	je Block163

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block163

 Block162:
	lea ecx,[esp+0x6C]
	push ecx
	call edi

 Block163:
	mov edx,dword ptr [esi+0x24]
	mov ecx,dword ptr [esi+0xB24]
	push 4
	sub edx,0x10
	push edx
	call CCtrlWnd::Move
	push 0
	mov ecx,esi
	call CWnd::InvalidateRect
	mov eax,dword ptr [esp+0x48]
	mov ecx,dword ptr [esp+0x44]
	push eax
	push ecx
	mov ecx,esi
	call CWnd::MoveWnd
	mov eax,dword ptr [esp+0x24]
	mov dword ptr [esp+0xA4],0xFFFFFFFF
	test eax,eax
	je Block165

 Block164:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block165:
	mov ecx,dword ptr [esp+0x9C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x94
	ret
}
}
// CUIRaiseWndBase::_LoadBgTile
_SUB_EXCEPTION_HANDLER(4391F0)
__SUB_CLASS_THIS(004391F0, __thiscall, 59323,  CUIRaiseWndBase, void, _x_com_ptr<IWzCanvas>*, Ztl_bstr_t&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_4391F0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x68
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x7C]
	mov dword ptr fs:[0],eax
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push eax
	call esi
	lea ecx,[esp+0x2C]
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
	lea edx,[esp+0x1C]
	push edx
	mov dword ptr [esp+0x88],edi
	call esi
	lea eax,[esp+0x1C]
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
	lea ecx,[esp+0x34]
	push ecx
	mov ecx,dword ptr [esp+0x9C]
	lea edx,[esp+0x28]
	push edx
	push offset _S_LEFT
	lea eax,[esp+0x28]
	push eax
	mov byte ptr [esp+0x9C],1
	call Ztl_bstr_t::op_add_1
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block6

 Block5:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block6:
	mov byte ptr [esp+0x98],3
	cmp dword ptr [_D_G_RM],edi
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	lea ecx,[esp+0x70]
	mov bl,2
	push ecx
	mov byte ptr [esp+0x9C],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x8C],4
	call Ztl_variant_t::GetUnknown
	mov ebp,dword ptr [esp+0x8C]
	push eax
	mov ecx,ebp
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov byte ptr [esp+0x84],bl
	mov ebx,8
	cmp word ptr [esp+0x5C],bx
	jne Block14

 Block12:
	mov eax,dword ptr [esp+0x64]
	xor edx,edx
	mov word ptr [esp+0x5C],dx
	cmp eax,edi
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea eax,[esp+0x5C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,edi
	je Block17

 Block16:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x14],edi

 Block17:
	mov byte ptr [esp+0x84],0
	cmp word ptr [esp+0x1C],bx
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	mov dword ptr [esp+0x84],0xFFFFFFFF
	cmp word ptr [esp+0x2C],bx
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,edi
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	lea edx,[esp+0x1C]
	push edx
	call esi
	lea eax,[esp+0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	lea ecx,[esp+0x2C]
	push ecx
	mov dword ptr [esp+0x88],5
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	push edi
	push edi
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x38]
	push ecx
	mov ecx,dword ptr [esp+0xA0]
	push offset _S_CENTER
	lea edx,[esp+0xA0]
	push edx
	mov byte ptr [esp+0x9C],6
	call Ztl_bstr_t::op_add_1
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block31

 Block30:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block31:
	mov byte ptr [esp+0x98],8
	cmp dword ptr [_D_G_RM],edi
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	lea eax,[esp+0x70]
	mov bl,7
	mov byte ptr [esp+0x98],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x8C],9
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+4]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block36

 Block34:
	cmp eax,0x80004002
	je Block36

 Block35:
	push eax
	call _com_issue_error

 Block36:
	mov byte ptr [esp+0x84],bl
	mov ebx,8
	cmp word ptr [esp+0x5C],bx
	jne Block39

 Block37:
	mov eax,dword ptr [esp+0x64]
	xor ecx,ecx
	mov word ptr [esp+0x5C],cx
	cmp eax,edi
	je Block40

 Block38:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block40

 Block39:
	lea edx,[esp+0x5C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block40:
	mov ecx,dword ptr [esp+0x8C]
	cmp ecx,edi
	je Block42

 Block41:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x8C],edi

 Block42:
	mov byte ptr [esp+0x84],5
	cmp word ptr [esp+0x2C],bx
	jne Block45

 Block43:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,edi
	je Block46

 Block44:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block46

 Block45:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block46:
	mov dword ptr [esp+0x84],0xFFFFFFFF
	cmp word ptr [esp+0x1C],bx
	jne Block49

 Block47:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,edi
	je Block50

 Block48:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block50

 Block49:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block50:
	lea ecx,[esp+0x4C]
	push ecx
	call esi
	lea edx,[esp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block52

 Block51:
	push eax
	call _com_issue_error

 Block52:
	lea eax,[esp+0x3C]
	push eax
	mov dword ptr [esp+0x88],0xA
	call esi
	lea ecx,[esp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	push edi
	push edi
	lea edx,[esp+0x54]
	push edx
	lea eax,[esp+0x48]
	push eax
	push offset _S_RIGHT
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0xA8]
	mov byte ptr [esp+0x9C],0xB
	call Ztl_bstr_t::op_add_1
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0xA4],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block56

 Block55:
	add eax,8
	push eax
	call dword ptr [ZImports::_InterlockedIncrement]

 Block56:
	mov byte ptr [esp+0x98],0xD
	cmp dword ptr [_D_G_RM],edi
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea edx,[esp+0x80]
	mov bl,0xC
	mov byte ptr [esp+0x98],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x8C],0xE
	call Ztl_variant_t::GetUnknown
	lea ecx,[ebp+8]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	cmp eax,edi
	jge Block61

 Block59:
	cmp eax,0x80004002
	je Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	mov esi,8
	mov byte ptr [esp+0x84],bl
	cmp word ptr [esp+0x6C],si
	jne Block64

 Block62:
	xor eax,eax
	mov word ptr [esp+0x6C],ax
	mov eax,dword ptr [esp+0x74]
	cmp eax,edi
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea ecx,[esp+0x6C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov ecx,dword ptr [esp+0x18]
	cmp ecx,edi
	je Block67

 Block66:
	call _xbstr_t::Data_t::Release
	mov dword ptr [esp+0x18],edi

 Block67:
	mov byte ptr [esp+0x84],0xA
	cmp word ptr [esp+0x3C],si
	jne Block70

 Block68:
	mov eax,dword ptr [esp+0x44]
	xor edx,edx
	mov word ptr [esp+0x3C],dx
	cmp eax,edi
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea eax,[esp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block71:
	mov dword ptr [esp+0x84],0xFFFFFFFF
	cmp word ptr [esp+0x4C],si
	jne Block74

 Block72:
	mov eax,dword ptr [esp+0x54]
	xor ecx,ecx
	mov word ptr [esp+0x4C],cx
	cmp eax,edi
	je Block75

 Block73:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block75

 Block74:
	lea edx,[esp+0x4C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block75:
	mov ecx,dword ptr [esp+0x7C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x74
	ret 8
}
}
// CUIRaisePieceWnd::GetLevel
__SUB_CLASS_THIS0(00437E60, __thiscall, 59385,  CUIRaisePieceWnd, long) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0x98]
	push esi
	xor esi,esi
	test eax,eax
	jge Block2

 Block1:
	or eax,0xFFFFFFFF
	pop esi
	ret

 Block2:
	je Block8

 Block3:
	mov ecx,eax
	and ecx,0x80000001
	jns Block5

 Block4:
	dec ecx
	or ecx,0xFFFFFFFE
	inc ecx

 Block5:
	je Block7

 Block6:
	inc esi

 Block7:
	cdq
	sub eax,edx
	sar eax,1
	jne Block3

 Block8:
	mov eax,esi
	pop esi
	ret
}
}
// CUIRaisePieceWnd::GetRTTI
__SUB_CLASS_THIS0(0043BBF0, __thiscall, 59388,  CUIRaisePieceWnd, const CRTTI*) {
__asm {

 Block0:
	mov eax,offset CUIRaisePieceWnd::ms_RTTI_CUIRaisePieceWnd
	ret
}
}
// CUIRaiseManager::~CUIRaiseManager
_SUB_EXCEPTION_HANDLER(438B00)
__SUB_CLASS_THIS0(00438B00, __thiscall, 59344,  CUIRaiseManager, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_438B00
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
	int 3// TODO: 	mov dword ptr [esi],offset CUIRaiseManager::`vftable'
	lea ecx,[esi+0x24]
	mov dword ptr [esp+0x14],1
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, tagPOINT, unsigned long>::`vftable'
	call ZMap<unsigned long, tagPOINT, unsigned long>::RemoveAll
	lea ecx,[esi+0xC]
	mov byte ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<CUIRaiseWndBase>, unsigned long>::`vftable'
	call ZMap<unsigned long, ZRef<CUIRaiseWndBase>, unsigned long>::RemoveAll
	int 3// TODO: 	mov dword ptr [esi],offset ZRefCounted::`vftable'
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CUIRaiseManager::_CreateWindow
_SUB_EXCEPTION_HANDLER(43BC60)
__SUB_CLASS_THIS(0043BC60, __thiscall, 59345,  CUIRaiseManager, void, long) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43BC60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x70],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov dword ptr [ebp+0x38],ecx
	mov eax,dword ptr [ebp+0x7C]
	push eax
	lea ecx,[ebp+0x6C]
	push ecx
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	call CItemInfo::GetItemInfo
	mov ecx,dword ptr [ebp+0x6C]
	xor ebx,ebx
	cmp ecx,ebx
	sete al
	mov dword ptr [ebp-4],ebx
	test al,al
	je Block3

 Block1:
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp ecx,ebx
	je Block117

 Block2:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+8]
	push ecx
	call eax
	jmp Block117

 Block3:
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push 0x1117
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],1
	cmp ecx,ebx
	jne Block5

 Block4:
	push 0x80004003
	call _com_issue_error

 Block5:
	lea edx,[ebp+0x54]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],2
	call get_int32
	mov edi,8
	add esp,8
	mov esi,eax
	mov dword ptr [ebp+0x30],esi
	mov byte ptr [ebp-4],0
	cmp word ptr [ebp+0x54],di
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp+0x54],ax
	mov eax,dword ptr [ebp+0x5C]
	cmp eax,ebx
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	cmp esi,ebx
	je Block23

 Block10:
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push 0x1116
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],3
	cmp ecx,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	lea edx,[ebp-0x3C]
	push edx
	mov byte ptr [ebp-4],0
	call IWzProperty::Getitem
	mov byte ptr [ebp-4],4
	cmp word ptr [eax],di
	jne Block14

 Block13:
	mov eax,dword ptr [eax+8]
	jmp Block15

 Block14:
	mov eax,offset _S___3

 Block15:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x4C]
	mov dword ptr [ebp+0x4C],ebx
	call ZXString16::Assign
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp-0x3C],di
	jne Block18

 Block16:
	xor eax,eax
	mov word ptr [ebp-0x3C],ax
	mov eax,dword ptr [ebp-0x34]
	cmp eax,ebx
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea ecx,[ebp-0x3C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov edi,dword ptr [ebp+0x4C]
	cmp edi,ebx
	je Block21

 Block20:
	cmp word ptr [edi],bx
	jne Block25

 Block21:
	mov byte ptr [ebp-4],0
	cmp edi,ebx
	je Block23

 Block22:
	add edi,0xFFFFFFF4
	push edi
	call ZXString16::_Release
	add esp,4

 Block23:
	mov eax,dword ptr [ebp+0x6C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	cmp eax,ebx
	je Block117

 Block24:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax
	jmp Block117

 Block25:
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x50],esp
	push 0x683
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],7
	cmp ecx,ebx
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea edx,[ebp+0x54]
	push edx
	mov byte ptr [ebp-4],6
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],8
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x54],8
	mov ebx,eax
	mov dword ptr [ebp+0x50],ebx
	mov byte ptr [ebp-4],6
	jne Block30

 Block28:
	xor eax,eax
	mov word ptr [ebp+0x54],ax
	mov eax,dword ptr [ebp+0x5C]
	test eax,eax
	je Block31

 Block29:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block31

 Block30:
	lea ecx,[ebp+0x54]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block31:
	push 0
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1113
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],9
	test ecx,ecx
	jne Block33

 Block32:
	push 0x80004003
	call _com_issue_error

 Block33:
	lea eax,[ebp+0x54]
	push eax
	mov byte ptr [ebp-4],6
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0xA
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x54],8
	mov esi,eax
	mov dword ptr [ebp+0x2C],esi
	mov byte ptr [ebp-4],6
	jne Block36

 Block34:
	mov eax,dword ptr [ebp+0x5C]
	xor ecx,ecx
	mov word ptr [ebp+0x54],cx
	test eax,eax
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea edx,[ebp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block37:
	test ebx,ebx
	je Block40

 Block38:
	test esi,esi
	jne Block40

 Block39:
	add edi,0xFFFFFFF4
	push edi
	jmp Block115

 Block40:
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x64],esp
	push 0x671
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x6C]
	xor esi,esi
	mov byte ptr [ebp-4],0xB
	cmp ecx,esi
	jne Block42

 Block41:
	push 0x80004003
	call _com_issue_error

 Block42:
	lea edx,[ebp-0x1C]
	push edx
	mov byte ptr [ebp-4],6
	call IWzProperty::Getitem
	mov edi,8
	mov byte ptr [ebp-4],0xC
	cmp word ptr [eax],di
	jne Block44

 Block43:
	mov eax,dword ptr [eax+8]
	jmp Block45

 Block44:
	mov eax,offset _S___3

 Block45:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x48]
	mov dword ptr [ebp+0x48],esi
	call ZXString<char>::AssignWideStr
	mov byte ptr [ebp-4],0xE
	cmp word ptr [ebp-0x1C],di
	jne Block48

 Block46:
	xor eax,eax
	mov word ptr [ebp-0x1C],ax
	mov eax,dword ptr [ebp-0x14]
	cmp eax,esi
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea ecx,[ebp-0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	mov dword ptr [ebp+0x44],esi
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1114
	push edx
	mov byte ptr [ebp-4],0xF
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0x10
	cmp ecx,esi
	jne Block51

 Block50:
	push 0x80004003
	call _com_issue_error

 Block51:
	lea eax,[ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0xF
	call IWzProperty::Getitem
	push eax
	lea ecx,[ebp+0x24]
	push ecx
	mov byte ptr [ebp-4],0x11
	call get_unknown
	add esp,8
	push eax
	lea ecx,[ebp+0x28]
	mov byte ptr [ebp-4],0x12
	call _x_com_ptr<IWzProperty>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp+0x24]
	mov byte ptr [ebp-4],0x14
	cmp eax,esi
	je Block53

 Block52:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block53:
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x10],di
	jne Block56

 Block54:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	cmp eax,esi
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	mov ebx,dword ptr [ebp+0x28]
	cmp ebx,esi
	je Block71

 Block58:
	xor edi,edi

 Block59:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push edi
	call __itow
	add esp,8
	mov dword ptr [ebp+0x64],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea eax,[ebp+0x54]
	mov byte ptr [ebp-4],0x16
	push eax
	mov ecx,ebx
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	cmp word ptr [eax],8
	mov byte ptr [ebp-4],0x17
	jne Block61

 Block60:
	mov eax,dword ptr [eax+8]
	jmp Block62

 Block61:
	mov eax,offset _S___3

 Block62:
	push 0xFFFFFFFF
	push eax
	lea ecx,[ebp+0x68]
	mov dword ptr [ebp+0x68],0
	call ZXString<char>::AssignWideStr
	cmp word ptr [ebp+0x54],8
	mov byte ptr [ebp-4],0x19
	jne Block65

 Block63:
	mov eax,dword ptr [ebp+0x5C]
	xor ecx,ecx
	mov word ptr [ebp+0x54],cx
	test eax,eax
	je Block66

 Block64:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block66

 Block65:
	lea edx,[ebp+0x54]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block66:
	mov esi,dword ptr [ebp+0x68]
	test esi,esi
	je Block69

 Block67:
	cmp byte ptr [esi],0
	je Block69

 Block68:
	lea eax,[ebp+0x68]
	push eax
	push 0xFFFFFFFF
	lea ecx,[ebp+0x44]
	call ZArray<ZXString<char>>::InsertBefore
	mov ecx,eax
	call ZXString<char>::op_assign
	add esi,0xFFFFFFF4
	push esi
	mov byte ptr [ebp-4],0x15
	call ZXString<char>::_Release
	add esp,4
	inc edi
	jmp Block59

 Block69:
	mov byte ptr [ebp-4],0x15
	test esi,esi
	je Block71

 Block70:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block71:
	mov dword ptr [ebp+0x68],0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x64],esp
	push 0x1115
	push ecx
	mov byte ptr [ebp-4],0x1A
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0x1B
	test ecx,ecx
	jne Block73

 Block72:
	push 0x80004003
	call _com_issue_error

 Block73:
	lea edx,[ebp]
	push edx
	mov byte ptr [ebp-4],0x1A
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp+0x20]
	push eax
	mov byte ptr [ebp-4],0x1C
	call get_unknown
	add esp,8
	push eax
	lea ecx,[ebp+0x3C]
	mov byte ptr [ebp-4],0x1D
	call _x_com_ptr<IWzProperty>::CreateFromUnknownComPtr
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0x1F
	test eax,eax
	je Block75

 Block74:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block75:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x20
	jne Block78

 Block76:
	xor eax,eax
	mov word ptr [ebp],ax
	mov eax,dword ptr [ebp+8]
	test eax,eax
	je Block79

 Block77:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block79

 Block78:
	lea ecx,[ebp]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block79:
	cmp dword ptr [ebp+0x3C],0
	je Block100

 Block80:
	xor ebx,ebx
	lea esp,[esp]

 Block81:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0xA
	push eax
	push ebx
	call __itow
	add esp,8
	mov dword ptr [ebp+0x60],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x3C]
	lea edx,[ebp-0x2C]
	mov byte ptr [ebp-4],0x21
	push edx
	mov byte ptr [ebp-4],0x20
	call IWzProperty::Getitem
	push eax
	lea eax,[ebp+0x64]
	push eax
	mov byte ptr [ebp-4],0x22
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [ebp-4],0x23
	mov dword ptr [ebp+0x60],0
	mov dword ptr [ebp+0x40],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block83

 Block82:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block83:
	lea ecx,[ebp+0x60]
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	test eax,eax
	jge Block85

 Block84:
	cmp eax,0x80004002
	jne Block98

 Block85:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x25
	test eax,eax
	je Block87

 Block86:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block87:
	cmp word ptr [ebp-0x2C],8
	mov byte ptr [ebp-4],0x26
	jne Block90

 Block88:
	xor eax,eax
	mov word ptr [ebp-0x2C],ax
	mov eax,dword ptr [ebp-0x24]
	test eax,eax
	je Block91

 Block89:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block91

 Block90:
	lea ecx,[ebp-0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block91:
	mov esi,dword ptr [ebp+0x60]
	test esi,esi
	je Block100

 Block92:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0xA
	push eax
	push 0
	call __itow
	add esp,8
	mov dword ptr [ebp+0x40],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	lea edx,[ebp-0x4C]
	mov byte ptr [ebp-4],0x27
	push edx
	mov ecx,esi
	mov byte ptr [ebp-4],0x26
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x28
	call get_int32
	add esp,8
	cmp word ptr [ebp-0x4C],8
	mov edi,eax
	mov byte ptr [ebp-4],0x26
	jne Block95

 Block93:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	test eax,eax
	je Block96

 Block94:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block96

 Block95:
	lea ecx,[ebp-0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block96:
	test edi,edi
	je Block99

 Block97:
	push 0xFFFFFFFF
	lea ecx,[ebp+0x68]
	call ZArray<long>::InsertBefore
	mov dword ptr [eax],edi
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [ebp-4],0x20
	call eax
	inc ebx
	jmp Block81

 Block98:
	push eax
	call _com_issue_error

 Block99:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [ebp-4],0x20
	call edx

 Block100:
	mov ebx,dword ptr [ebp+0x38]
	mov edi,dword ptr [ebp+0x7C]
	lea eax,[ebp+0x5C]
	push eax
	lea ecx,[ebp+0x64]
	push ecx
	xor esi,esi
	lea ecx,[ebx+0x24]
	mov dword ptr [ebp+0x5C],esi
	mov dword ptr [ebp+0x60],0x96
	mov dword ptr [ebp+0x64],edi
	call ZMap<unsigned long, tagPOINT, unsigned long>::GetAt
	mov dword ptr [ebp+0x38],esi
	mov esi,dword ptr [ebp+0x50]
	mov byte ptr [ebp-4],0x29
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	test esi,esi
	jle Block103

 Block101:
	push 0xB30
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x40],eax
	mov byte ptr [ebp-4],0x2A
	test eax,eax
	je Block105

 Block102:
	lea edx,[ebp+0x68]
	push edx
	lea ecx,[ebp+0x44]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	mov edx,dword ptr [ebp+0x2C]
	lea ecx,[ebp+0x4C]
	push ecx
	mov ecx,dword ptr [ebp+0x30]
	push edx
	push esi
	push ecx
	push edi
	mov ecx,eax
	call CUIRaiseWnd::_ctor_0
	jmp Block106

 Block103:
	push 0xB28
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [ebp+0x40],eax
	mov byte ptr [ebp-4],0x2B
	test eax,eax
	je Block105

 Block104:
	lea edx,[ebp+0x68]
	push edx
	lea ecx,[ebp+0x44]
	push ecx
	lea edx,[ebp+0x48]
	push edx
	mov edx,dword ptr [ebp+0x2C]
	lea ecx,[ebp+0x4C]
	push ecx
	mov ecx,dword ptr [ebp+0x30]
	push edx
	push ecx
	push edi
	mov ecx,eax
	call CUIRaisePieceWnd::_ctor_0
	jmp Block106

 Block105:
	xor eax,eax

 Block106:
	push eax
	lea ecx,[ebp+0x34]
	mov byte ptr [ebp-4],0x29
	call ZRef<CUIRaiseWndBase>::op_assign_ptr
	mov edx,dword ptr [ebp+0x60]
	mov eax,dword ptr [ebp+0x5C]
	mov esi,dword ptr [ebp+0x38]
	push 0
	push 0
	push 0
	push 1
	push 0xA
	push 0x96
	push 0x96
	push edx
	push eax
	mov ecx,esi
	call CWnd::CreateWnd
	lea ecx,[ebp+0x34]
	push ecx
	lea edx,[ebp+0x50]
	push edx
	lea ecx,[ebx+0xC]
	mov dword ptr [ebp+0x50],edi
	call ZMap<unsigned long, ZRef<CUIRaiseWndBase>, unsigned long>::Insert
	mov byte ptr [ebp-4],0x20
	test esi,esi
	je Block108

 Block107:
	push 0
	lea ecx,[ebp+0x34]
	call ZRef<CUIRaiseWndBase>::_ReleaseRaw

 Block108:
	mov eax,dword ptr [ebp+0x3C]
	mov byte ptr [ebp-4],0x1A
	test eax,eax
	je Block110

 Block109:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block110:
	lea ecx,[ebp+0x68]
	mov byte ptr [ebp-4],0x15
	call ZArray<long>::RemoveAll
	mov eax,dword ptr [ebp+0x28]
	mov byte ptr [ebp-4],0xF
	test eax,eax
	je Block112

 Block111:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block112:
	lea ecx,[ebp+0x44]
	mov byte ptr [ebp-4],0xE
	call ZArray<ZXString<char>>::RemoveAll
	mov eax,dword ptr [ebp+0x48]
	mov byte ptr [ebp-4],6
	test eax,eax
	je Block114

 Block113:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block114:
	mov eax,dword ptr [ebp+0x4C]
	add eax,0xFFFFFFF4
	push eax

 Block115:
	mov byte ptr [ebp-4],0
	call ZXString16::_Release
	mov eax,dword ptr [ebp+0x6C]
	add esp,4
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block117

 Block116:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block117:
	lea esp,[ebp-0x5C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x70]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x74
	mov esp,ebp
	pop ebp
	ret 4
}
}
// CUIRaiseManager::RestoreWindows
_SUB_EXCEPTION_HANDLER(43C5B0)
__SUB_CLASS_THIS0(0043C5B0, __thiscall, 59344,  CUIRaiseManager, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_43C5B0
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
	mov dword ptr [esp+0x14],ecx
	add ecx,0xC
	call ZMap<unsigned long, ZRef<CUIRaiseWndBase>, unsigned long>::GetHeadPosition
	mov esi,eax
	xor ebx,ebx
	mov dword ptr [esp+0x18],esi
	cmp esi,ebx
	je Block12

 Block1:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]

 Block2:
	mov eax,dword ptr [esi+0x10]
	mov dword ptr [esp+0x2C],ebx
	cmp eax,ebx
	je Block4

 Block3:
	add eax,0xC
	push eax
	call ebp

 Block4:
	mov edi,dword ptr [esi+0x10]
	mov esi,dword ptr [esi+8]
	mov dword ptr [esp+0x20],edi
	cmp edi,ebx
	jne Block6

 Block5:
	mov ecx,dword ptr [esp+0x14]
	push esi
	call CUIRaiseManager::_CreateWindow

 Block6:
	mov dword ptr [esp+0x2C],0xFFFFFFFF
	cmp edi,ebx
	je Block11

 Block7:
	lea esi,[edi+8]
	lea eax,[esi+4]
	push eax
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block10

 Block8:
	lea ecx,[esi+4]
	push ecx
	call ebp
	cmp esi,ebx
	je Block10

 Block9:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block10:
	mov dword ptr [esp+0x20],ebx

 Block11:
	push ebx
	lea ecx,[esp+0x1C]
	push ecx
	mov ecx,dword ptr [esp+0x1C]
	add ecx,0xC
	call ZMap<unsigned long, ZRef<CUIRaiseWndBase>, unsigned long>::GetNext
	mov esi,dword ptr [esp+0x18]
	cmp esi,ebx
	jne Block2

 Block12:
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
// CUIRaiseWndBase::HitTest
__SUB_CLASS_THIS(00437DF0, __thiscall, 59314,  CUIRaiseWndBase, int32_t, long, long, CCtrlWnd**) {
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
	mov ecx,0x13
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
// CUIRaisePieceWnd::SendPutItem
_SUB_EXCEPTION_HANDLER(438D90)
__SUB_CLASS_THIS(00438D90, __thiscall, 59383,  CUIRaisePieceWnd, int32_t, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_438D90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	push 0x11E
	lea ecx,[esp+8]
	call COutPacket::_ctor_1
	mov eax,dword ptr [esp+0x24]
	push eax
	lea ecx,[esp+8]
	mov dword ptr [esp+0x20],0
	call COutPacket::Encode1
	mov ecx,dword ptr [esp+0x28]
	push ecx
	lea ecx,[esp+8]
	call COutPacket::Encode2
	mov edx,dword ptr [esp+0x2C]
	push edx
	lea ecx,[esp+8]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+4]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+8]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov eax,1
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x1C
	ret 0xC
}
}
// CUIRaiseWnd::CUIRaiseWnd
__SUB_CLASS_THIS(0043BAD0, __thiscall, 59359,  CUIRaiseWnd, void, long, long, long, long, ZXString16&, ZXString<char>&, ZArray<ZXString<char> >&, ZArray<long>&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+0x20]
	mov edx,dword ptr [esp+0x18]
	push esi
	push edi
	mov edi,dword ptr [esp+0x14]
	push eax
	mov eax,dword ptr [esp+0x20]
	mov esi,ecx
	mov ecx,dword ptr [esp+0x28]
	push ecx
	push edx
	mov edx,dword ptr [esp+0x1C]
	push eax
	mov eax,dword ptr [esp+0x1C]
	mov ecx,edi
	neg ecx
	push ecx
	push edx
	push eax
	mov ecx,esi
	call CUIRaiseWndBase::_ctor_0
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [esi+0xB28],edi
	pop edi
	int 3// TODO: 	mov dword ptr [esi],offset CUIRaiseWnd::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CUIRaiseWnd::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CUIRaiseWnd::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xB2C],ecx
	mov eax,esi
	pop esi
	ret 0x20
}
}
// CUIRaiseWnd::SendPutItem
_SUB_EXCEPTION_HANDLER(438CF0)
__SUB_CLASS_THIS(00438CF0, __thiscall, 59361,  CUIRaiseWnd, int32_t, long, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_438CF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x10
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	push 0x11D
	lea ecx,[esp+8]
	call COutPacket::_ctor_1
	mov eax,dword ptr [esp+0x24]
	push eax
	lea ecx,[esp+8]
	mov dword ptr [esp+0x20],0
	call COutPacket::Encode1
	mov ecx,dword ptr [esp+0x28]
	push ecx
	lea ecx,[esp+8]
	call COutPacket::Encode2
	mov edx,dword ptr [esp+0x2C]
	push edx
	lea ecx,[esp+8]
	call COutPacket::Encode4
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+4]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+8]
	mov dword ptr [esp+0x1C],0xFFFFFFFF
	call ZArray<unsigned char>::RemoveAll
	mov eax,1
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	add esp,0x1C
	ret 0xC
}
}
// CUIRaisePieceWnd::IsKindOf
__SUB_CLASS_THIS(0043BC10, __thiscall, 59389,  CUIRaisePieceWnd, int32_t, const CRTTI*) {
__asm {

 Block0:
	mov ecx,dword ptr [esp+4]
	mov eax,offset CUIRaisePieceWnd::ms_RTTI_CUIRaisePieceWnd
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
