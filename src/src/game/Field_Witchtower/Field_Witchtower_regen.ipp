#include "regen.hpp"
// Field_Witchtower.ipp
#include "Field_Witchtower.hpp"

// CField_Witchtower::CField_Witchtower
__SUB_CLASS_THIS0(0013F080, __thiscall, 142774,  CField_Witchtower, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CField_Witchtower::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_Witchtower::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_Witchtower::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_Witchtower::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xDA4],0
	mov eax,esi
	pop esi
	ret
}
}
// CScoreboard_Witchtower::Draw
_SUB_EXCEPTION_HANDLER(164BD0)
__SUB_CLASS_THIS(00164BD0, __thiscall, 142760,  CScoreboard_Witchtower, void, const tagRECT*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_164BD0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x20
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x34]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	lea eax,[esp+0x1C]
	push eax
	call CWnd::GetCanvas
	mov esi,dword ptr [esp+0x1C]
	xor ebp,ebp
	mov dword ptr [esp+0x3C],ebp
	cmp esi,ebp
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],ebp
	call eax
	cmp eax,ebp
	jge Block4

 Block3:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block4:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x40]
	mov ebx,dword ptr [esp+0x14]
	lea edx,[esp+0x18]
	push edx
	push esi
	mov dword ptr [esp+0x20],ebp
	call eax
	cmp eax,ebp
	jge Block6

 Block5:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	mov edx,dword ptr [esp+0x18]
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x8C]
	push 0xFFFFFF
	push ebx
	push edx
	push ebp
	push ebp
	push esi
	call eax
	cmp eax,ebp
	jge Block8

 Block7:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block8:
	mov ecx,3
	mov word ptr [esp+0x24],cx
	mov ecx,0xFF
	mov dword ptr [esp+0x2C],ecx
	mov edx,dword ptr [edi+0x80]
	mov ebp,dword ptr [esp+0x24]
	mov ebx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebp
	mov ebp,dword ptr [esp+0x38]
	push edx
	mov edx,dword ptr [ebx+0x80]
	push 0
	mov dword ptr [eax+4],ebp
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x48]
	push 0
	push esi
	mov byte ptr [esp+0x5C],1
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block10

 Block9:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],0
	jne Block13

 Block11:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	test eax,eax
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
	mov ecx,0xFF
	mov word ptr [esp+0x24],dx
	mov dword ptr [esp+0x2C],ecx
	mov ebx,dword ptr [esp+0x24]
	mov edx,dword ptr [edi+0x84]
	mov ebp,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [esp+0x38]
	mov dword ptr [eax+4],ebx
	push edx
	mov edx,dword ptr [ebp+0x80]
	xor ebx,ebx
	push ebx
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x48]
	push 7
	push esi
	mov byte ptr [esp+0x5C],2
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,ebx
	jge Block16

 Block15:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block16:
	cmp word ptr [esp+0x24],8
	mov byte ptr [esp+0x3C],bl
	jne Block19

 Block17:
	xor eax,eax
	mov word ptr [esp+0x24],ax
	mov eax,dword ptr [esp+0x2C]
	cmp eax,ebx
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea ecx,[esp+0x24]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov eax,dword ptr [edi+0x88]
	push 0xFFFFFFFE
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [ecx],eax
	cmp eax,ebx
	je Block22

 Block21:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block22:
	mov dword ptr [esp+0x20],ebx
	mov ecx,dword ptr [edi+0x8C]
	push ecx
	lea edx,[esp+0x24]
	push offset _S_02D
	push edx
	mov byte ptr [esp+0x50],4
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push eax
	mov dword ptr [ecx],ebx
	call ZXString<char>::op_assign
	push 4
	push 0x43
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x38],esp
	push esi
	call ecx
	mov byte ptr [esp+0x54],5
	call draw_text_by_image
	mov eax,dword ptr [esp+0x30]
	add esp,0x18
	mov byte ptr [esp+0x3C],bl
	cmp eax,ebx
	je Block24

 Block23:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block24:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov dword ptr [esp+0x40],0xFFFFFFFF
	call eax
	mov ecx,dword ptr [esp+0x34]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x2C
	ret 4
}
}
// CScoreboard_Witchtower::OnCreate
_SUB_EXCEPTION_HANDLER(164E50)
__SUB_CLASS_THIS(00164E50, __thiscall, 142759,  CScoreboard_Witchtower, void, void*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_164E50
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
	mov edi,ecx
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
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x18]
	push edx
	mov dword ptr [esp+0x84],0
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block4

 Block3:
	push eax
	call _com_issue_error

 Block4:
	push 0
	push 0
	lea ecx,[esp+0x30]
	push ecx
	lea edx,[esp+0x24]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	push 0x1460
	mov bl,1
	push eax
	mov byte ptr [esp+0x9C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],2
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x6C]
	push ecx
	mov byte ptr [esp+0x98],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],3
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0x80]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block9

 Block7:
	cmp eax,0x80004002
	je Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	mov ebp,8
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],bp
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea eax,[esp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0x80],0
	cmp word ptr [esp+0x18],bp
	jne Block16

 Block14:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x28],bp
	jne Block20

 Block18:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	lea edx,[esp+0x18]
	push edx
	call esi
	lea eax,[esp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block23

 Block22:
	push eax
	call _com_issue_error

 Block23:
	lea ecx,[esp+0x28]
	push ecx
	mov dword ptr [esp+0x84],4
	call esi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block25

 Block24:
	push eax
	call _com_issue_error

 Block25:
	push 0
	push 0
	lea eax,[esp+0x20]
	push eax
	lea ecx,[esp+0x34]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1462
	mov bl,5
	push edx
	mov byte ptr [esp+0x9C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],6
	jne Block27

 Block26:
	push 0x80004003
	call _com_issue_error

 Block27:
	lea eax,[esp+0x6C]
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],7
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0x84]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block30

 Block28:
	cmp eax,0x80004002
	je Block30

 Block29:
	push eax
	call _com_issue_error

 Block30:
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x58],bp
	jne Block33

 Block31:
	mov eax,dword ptr [esp+0x60]
	xor ecx,ecx
	mov word ptr [esp+0x58],cx
	test eax,eax
	je Block34

 Block32:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block34

 Block33:
	lea edx,[esp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block34:
	mov byte ptr [esp+0x80],4
	cmp word ptr [esp+0x28],bp
	jne Block37

 Block35:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block38

 Block36:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block38

 Block37:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block38:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x18],bp
	jne Block41

 Block39:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block42

 Block40:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block42

 Block41:
	lea eax,[esp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block42:
	lea ecx,[esp+0x48]
	push ecx
	call esi
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	lea eax,[esp+0x38]
	push eax
	mov dword ptr [esp+0x84],ebp
	call esi
	lea ecx,[esp+0x38]
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
	push 0
	push 0
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x44]
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push 0x1461
	mov bl,9
	push ecx
	mov byte ptr [esp+0x9C],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x94],0xA
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	lea edx,[esp+0x7C]
	mov byte ptr [esp+0x94],bl
	mov ecx,dword ptr [_D_G_RM]
	push edx
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x88],0xB
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+0x88]
	push eax
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	test eax,eax
	jge Block51

 Block49:
	cmp eax,0x80004002
	je Block51

 Block50:
	push eax
	call _com_issue_error

 Block51:
	mov byte ptr [esp+0x80],bl
	cmp word ptr [esp+0x68],bp
	jne Block54

 Block52:
	xor eax,eax
	mov word ptr [esp+0x68],ax
	mov eax,dword ptr [esp+0x70]
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea ecx,[esp+0x68]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov byte ptr [esp+0x80],8
	cmp word ptr [esp+0x38],bp
	jne Block58

 Block56:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov dword ptr [esp+0x80],0xFFFFFFFF
	cmp word ptr [esp+0x48],bp
	jne Block62

 Block60:
	mov eax,dword ptr [esp+0x50]
	xor ecx,ecx
	mov word ptr [esp+0x48],cx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea edx,[esp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block63:
	mov ecx,dword ptr [esp+0x78]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x70
	ret 4
}
}
// CField_Witchtower::~CField_Witchtower
__SUB_CLASS_THIS0(00164980, __thiscall, 142776,  CField_Witchtower, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov ecx,dword ptr [esi+0xDA4]
	test ecx,ecx
	je Block2

 Block1:
	call CWnd::Destroy

 Block2:
	mov ecx,esi
	pop esi
	jmp  CField::Close
}
}
// CScoreboard_Witchtower::OnSetFocus
__SUB_CLASS_THIS(001649E0, __thiscall, 142761,  IUIMsgHandler, int32_t, int32_t) {
__asm {

 Block0:
	xor eax,eax
	ret 4
}
}
// CField_Witchtower::OnScoreUpdate
_SUB_EXCEPTION_HANDLER(164AD0)
__SUB_CLASS_THIS(00164AD0, __thiscall, 142779,  CField_Witchtower, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_164AD0
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
	mov ecx,dword ptr [esp+0x1C]
	call CInPacket::Decode1
	movzx edi,al
	test edi,edi
	jge Block2

 Block1:
	cmp edi,0x63
	jg Block8

 Block2:
	cmp dword ptr [esi+0xDA4],0
	jne Block7

 Block3:
	push 0x90
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov dword ptr [esp+0x1C],eax
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block5

 Block4:
	mov ecx,eax
	call CScoreboard_Witchtower::_ctor_default
	jmp Block6

 Block5:
	xor eax,eax

 Block6:
	push eax
	lea ecx,[esi+0xDA0]
	mov dword ptr [esp+0x18],0xFFFFFFFF
	call ZRef<CScoreboard_Witchtower>::op_assign_ptr
	mov ecx,dword ptr [esi+0xDA4]
	push 1
	push 1
	push 0
	push 1
	push 0xC00616FC
	push 0x24
	push 0x73
	push 0x5C
	push 0xFFFFFFC7
	call CWnd::CreateWnd

 Block7:
	mov ecx,dword ptr [esi+0xDA4]
	push 0
	mov dword ptr [ecx+0x8C],edi
	call CWnd::InvalidateRect

 Block8:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 4
}
}
// CField_Witchtower::GetFieldType
__SUB_CLASS_THIS0(0013F0C0, __thiscall, 142777,  CField_Witchtower, long) {
__asm {

 Block0:
	mov eax,0x15
	ret
}
}
// CScoreboard_Witchtower::~CScoreboard_Witchtower
__SUB_CLASS_THIS0(00164A00, __thiscall, 142758,  CScoreboard_Witchtower, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	int 3// TODO: 	mov dword ptr [esi],offset CScoreboard_Witchtower::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CScoreboard_Witchtower::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CScoreboard_Witchtower::`vftable'{for `ZRefCounted'}
	mov eax,dword ptr [esi+0x88]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x84]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0x80]
	test eax,eax
	je Block6

 Block5:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block6:
	mov ecx,esi
	pop esi
	jmp  CWnd::~CWnd
}
}
// CField_Witchtower::OnPacket
__SUB_CLASS_THIS(00164BA0, __thiscall, 142778,  CField_Witchtower, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0x166
	je Block2

 Block1:
	mov dword ptr [esp+4],eax
	jmp  CField::OnPacket

 Block2:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField_Witchtower::OnScoreUpdate
	ret 8
}
}
// CScoreboard_Witchtower::CScoreboard_Witchtower
__SUB_CLASS_THIS0(001649A0, __thiscall, 142756,  CScoreboard_Witchtower, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CWnd::_ctor_default
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CScoreboard_Witchtower::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CScoreboard_Witchtower::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CScoreboard_Witchtower::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0x80],eax
	mov dword ptr [esi+0x84],eax
	mov dword ptr [esi+0x88],eax
	mov dword ptr [esi+0x8C],eax
	mov eax,esi
	pop esi
	ret
}
}
