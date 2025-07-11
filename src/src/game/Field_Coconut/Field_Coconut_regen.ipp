#include "regen.hpp"
// Field_Coconut.ipp
#include "Field_Coconut.hpp"

// CField_Coconut::GetObjectName
_SUB_EXCEPTION_HANDLER(14A510)
__SUB(0014A510, __cdecl, 143859,  ZXString<char>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14A510
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xC
	push esi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x14]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0xC],0
	mov dword ptr [esp+8],0
	lea eax,[esp+0x10]
	push 0xB02
	push eax
	mov dword ptr [esp+0x24],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esp+0x28]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x10]
	push edx
	mov byte ptr [esp+0x28],2
	call ZXString<char>::Format
	mov esi,dword ptr [esp+0x30]
	add esp,0xC
	push eax
	mov ecx,esi
	mov dword ptr [esi],0
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0xC],1
	mov byte ptr [esp+0x1C],1
	test eax,eax
	je Block2

 Block1:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block2:
	mov eax,dword ptr [esp+8]
	mov byte ptr [esp+0x1C],0
	test eax,eax
	je Block4

 Block3:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block4:
	mov eax,esi
	mov ecx,dword ptr [esp+0x14]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x18
	ret
}
}
// CField_Coconut::CField_Coconut
__SUB_CLASS_THIS0(0013E850, __thiscall, 143851,  CField_Coconut, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CField_Coconut::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_Coconut::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_Coconut::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_Coconut::`vftable'{for `ZRefCounted'}
	xor eax,eax
	mov dword ptr [esi+0xDA8],eax
	mov dword ptr [esi+0xDAC],eax
	mov dword ptr [esi+0xDB0],eax
	int 3// TODO: 	mov dword ptr [esi+0xDA0],offset ZList<CField_Coconut::HITINFO>::`vftable'
	mov dword ptr [esi+0x1188],eax
	mov dword ptr [esi+0x118C],eax
	mov eax,esi
	pop esi
	ret
}
}
// CField_Coconut::OnClock
__SUB_CLASS_THIS(0014A100, __thiscall, 143858,  CField_Coconut, void, CInPacket&) {
__asm {

 Block0:
	push esi
	mov esi,dword ptr [esp+8]
	push edi
	mov edi,ecx
	mov ecx,esi
	call CInPacket::Decode1
	mov ecx,esi
	call CInPacket::Decode4
	mov esi,eax
	imul esi,0x3E8
	call get_update_time
	add eax,esi
	mov dword ptr [edi+0xDC0],eax
	jne Block2

 Block1:
	mov dword ptr [edi+0xDC0],1

 Block2:
	pop edi
	pop esi
	ret 4
}
}
// CField_Coconut::OnCoconutScore
__SUB_CLASS_THIS(0014BF70, __thiscall, 143858,  CField_Coconut, void, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,dword ptr [esp+0xC]
	mov esi,ecx
	mov ecx,edi
	call CInPacket::Decode2
	movzx eax,ax
	mov ecx,edi
	mov dword ptr [esi+0xDB8],eax
	call CInPacket::Decode2
	movzx ecx,ax
	mov dword ptr [esi+0xDBC],ecx
	mov ecx,esi
	call CField_Coconut::DrawBoard
	pop edi
	pop esi
	ret 4
}
}
// CField_Coconut::DecodeFieldSpecificData
__SUB_CLASS_THIS(0014A0A0, __thiscall, 143856,  CField_Coconut, void, CUser*, CInPacket&) {
__asm {

 Block0:
	push esi
	push edi
	mov edi,ecx
	mov ecx,dword ptr [esp+0x10]
	call CInPacket::Decode1
	movsx esi,al
	cmp esi,0xFFFFFFFF
	je Block2

 Block1:
	mov eax,dword ptr [esp+0xC]
	xor ecx,ecx
	cmp byte ptr [eax+0x98],cl
	setne cl
	xor edx,edx
	test esi,esi
	setne dl
	lea ecx,[ecx+edx*2]
	imul ecx,0xF0
	lea edx,[ecx+edi+0xDC8]
	pop edi
	pop esi
	mov dword ptr [esp+8],edx
	mov dword ptr [esp+4],1
	lea ecx,[eax+0x88]
	jmp  CAvatar::ForcingAppearance

 Block2:
	pop edi
	pop esi
	ret 8
}
}
// CField_Coconut::OnPacket
__SUB_CLASS_THIS(0014BFB0, __thiscall, 143855,  CField_Coconut, void, long, CInPacket&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,edx
	sub eax,0x156
	je Block4

 Block1:
	sub eax,1
	je Block3

 Block2:
	mov dword ptr [esp+4],edx
	jmp  CField::OnPacket

 Block3:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField_Coconut::OnCoconutScore
	ret 8

 Block4:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField_Coconut::OnCoconutHit
	ret 8
}
}
// CField_Coconut::OnCoconutHit
__SUB_CLASS_THIS(0014A470, __thiscall, 143858,  CField_Coconut, void, CInPacket&) {
__asm {

 Block0:
	push ecx
	push ebx
	push ebp
	push esi
	mov esi,dword ptr [esp+0x14]
	push edi
	mov edi,ecx
	mov ecx,esi
	call CInPacket::Decode2
	mov ecx,esi
	movsx ebp,ax
	call CInPacket::Decode2
	movzx eax,ax
	mov ecx,esi
	mov dword ptr [esp+0x18],eax
	call CInPacket::Decode1
	movzx ebx,al
	call get_update_time
	mov esi,eax
	test ebp,ebp
	jl Block2

 Block1:
	lea ecx,[edi+0xDA0]
	call ZList<CField_Coconut::HITINFO>::AddTail_
	mov ecx,dword ptr [esp+0x18]
	add esi,ecx
	pop edi
	mov dword ptr [eax+8],esi
	pop esi
	mov dword ptr [eax],ebp
	pop ebp
	mov dword ptr [eax+4],ebx
	pop ebx
	pop ecx
	ret 4

 Block2:
	xor esi,esi
	cmp dword ptr [edi+0xDB4],esi
	jle Block5

 Block3:
	mov edx,eax
	mov eax,dword ptr [esp+0x18]
	add edx,eax
	lea ebp,[edi+0xDA0]
	mov dword ptr [esp+0x18],edx

 Block4:
	mov ecx,ebp
	call ZList<CField_Coconut::HITINFO>::AddTail_
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr [eax],esi
	inc esi
	mov dword ptr [eax+4],ebx
	mov dword ptr [eax+8],ecx
	cmp esi,dword ptr [edi+0xDB4]
	jl Block4

 Block5:
	pop edi
	pop esi
	pop ebp
	pop ebx
	pop ecx
	ret 4
}
}
// CField_Coconut::Update
_SUB_EXCEPTION_HANDLER(14BE80)
__SUB_CLASS_THIS0(0014BE80, __thiscall, 143853,  CField_Coconut, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14BE80
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
	call CField::Update
	call get_update_time
	mov ebp,eax
	sub eax,dword ptr [edi+0xDC4]
	cmp eax,0x96
	jle Block2

 Block1:
	mov ecx,edi
	mov dword ptr [edi+0xDC4],ebp
	call CField_Coconut::DrawBoard

 Block2:
	mov eax,dword ptr [edi+0xDAC]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block9

 Block3:
	lea ecx,[ecx]

 Block4:
	lea ecx,[esp+0x14]
	push ecx
	mov ebx,eax
	call ZList<CField_Coconut::HITINFO>::GetNext
	mov esi,eax
	mov edx,dword ptr [esi+8]
	sub edx,ebp
	add esp,4
	test edx,edx
	jg Block8

 Block5:
	mov eax,dword ptr [esi]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	call CField_Coconut::GetObjectName
	add esp,8
	mov edx,dword ptr [esi+4]
	mov eax,dword ptr [eax]
	push edx
	push eax
	mov ecx,edi
	mov dword ptr [esp+0x2C],0
	call CMapLoadable::SetObjectState
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0x24],0xFFFFFFFF
	test eax,eax
	je Block7

 Block6:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block7:
	push ebx
	lea ecx,[edi+0xDA0]
	call ZList<CField_Coconut::HITINFO>::RemoveAt

 Block8:
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	jne Block4

 Block9:
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
// CField_Coconut::BasicActionAttack
_SUB_EXCEPTION_HANDLER(14A5E0)
__SUB_CLASS_THIS0(0014A5E0, __thiscall, 143857,  CField_Coconut, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14A5E0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x44]
	mov dword ptr fs:[0],eax
	mov ebp,ecx
	xor edi,edi
	cmp dword ptr [TSingleton<CUserLocal>::ms_pInstance],edi
	jne Block2

 Block1:
	xor eax,eax
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret

 Block2:
	mov dword ptr [esp+0x18],edi
	mov eax,dword ptr [ebp+0xDB4]
	lea ecx,[esp+0x17]
	push ecx
	push eax
	lea ecx,[esp+0x20]
	mov dword ptr [esp+0x54],edi
	call ZArray<tagRECT>::_Alloc
	cmp dword ptr [ebp+0xDB4],edi
	jle Block7

 Block3:
	xor ebx,ebx

 Block4:
	lea edx,[esp+0x1C]
	push edi
	push edx
	call CField_Coconut::GetObjectName
	add esp,8
	mov eax,dword ptr [eax]
	mov ecx,dword ptr [esp+0x18]
	push eax
	lea edx,[esp+0x38]
	lea esi,[ebx+ecx]
	push edx
	mov ecx,ebp
	mov byte ptr [esp+0x54],1
	call CMapLoadable::GetObjectRect
	mov ecx,dword ptr [eax]
	mov dword ptr [esi],ecx
	mov edx,dword ptr [eax+4]
	mov dword ptr [esi+4],edx
	mov ecx,dword ptr [eax+8]
	mov dword ptr [esi+8],ecx
	mov edx,dword ptr [eax+0xC]
	mov dword ptr [esi+0xC],edx
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x4C],0
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	inc edi
	add ebx,0x10
	cmp edi,dword ptr [ebp+0xDB4]
	jl Block4

 Block7:
	push 0
	lea eax,[esp+0x24]
	push eax
	lea ecx,[esp+0x20]
	push ecx
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	call CUserLocal::TryDoingNormalAttack
	mov esi,eax
	test esi,esi
	jl Block9

 Block8:
	push 0x101
	lea ecx,[esp+0x28]
	call COutPacket::_ctor_1
	push esi
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x50],2
	call COutPacket::Encode2
	mov edx,dword ptr [esp+0x20]
	push edx
	lea ecx,[esp+0x28]
	call COutPacket::Encode2
	mov ecx,dword ptr [TSingleton<CClientSocket>::ms_pInstance]
	lea eax,[esp+0x24]
	push eax
	call CClientSocket::SendPacket
	lea ecx,[esp+0x28]
	mov byte ptr [esp+0x4C],0
	call ZArray<unsigned char>::RemoveAll

 Block9:
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x4C],0xFFFFFFFF
	call ZArray<tagRECT>::RemoveAll
	mov eax,1
	mov ecx,dword ptr [esp+0x44]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x3C
	ret
}
}
// CField_Coconut::DrawBoard
_SUB_EXCEPTION_HANDLER(14A750)
__SUB_CLASS_THIS0(0014A750, __thiscall, 143853,  CField_Coconut, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14A750
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
	mov ebp,ecx
	mov eax,3
	xor edi,edi
	mov word ptr [esp+0x44],ax
	mov dword ptr [esp+0x4C],edi
	mov ecx,dword ptr [ebp+0x118C]
	mov dword ptr [esp+0xB0],edi
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[esp+0x44]
	push edx
	lea eax,[esp+0x40]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x44],8
	mov byte ptr [esp+0xB0],2
	jne Block5

 Block3:
	mov eax,dword ptr [esp+0x4C]
	xor ecx,ecx
	mov word ptr [esp+0x44],cx
	cmp eax,edi
	je Block6

 Block4:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block6

 Block5:
	lea edx,[esp+0x44]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block6:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push eax
	call ebx
	lea ecx,[esp+0x28]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block8

 Block7:
	push eax
	call _com_issue_error

 Block8:
	mov esi,dword ptr [esp+0x3C]
	mov ecx,dword ptr [ebp+0x1188]
	mov byte ptr [esp+0xB0],3
	cmp esi,edi
	jne Block10

 Block9:
	push 0x80004003
	call _com_issue_error

 Block10:
	mov edi,dword ptr [esp+0x28]
	mov edx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edi
	mov edi,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],edi
	mov edi,dword ptr [esp+0x40]
	mov dword ptr [eax+8],edi
	mov edi,dword ptr [esp+0x44]
	mov dword ptr [eax+0xC],edi
	mov eax,dword ptr [edx+0x80]
	push ecx
	xor edi,edi
	push edi
	push edi
	push esi
	call eax
	cmp eax,edi
	jge Block12

 Block11:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block12:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0xB0],2
	jne Block15

 Block13:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	cmp eax,edi
	je Block16

 Block14:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block16

 Block15:
	lea edx,[esp+0x28]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block16:
	mov dword ptr [esp+0x24],edi
	lea eax,[esp+0x74]
	push eax
	mov byte ptr [esp+0xB4],4
	call ebx
	lea ecx,[esp+0x74]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block18

 Block17:
	push eax
	call _com_issue_error

 Block18:
	lea edx,[esp+0x28]
	push edx
	mov byte ptr [esp+0xB4],5
	call ebx
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block20

 Block19:
	push eax
	call _com_issue_error

 Block20:
	lea ecx,[esp+0x74]
	push ecx
	lea edx,[esp+0x2C]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0xB09
	mov bl,6
	push eax
	mov byte ptr [esp+0xC4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [esp+0xBC],7
	cmp dword ptr [_D_G_RM],edi
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea ecx,[esp+0xA0]
	push ecx
	mov byte ptr [esp+0xC0],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	push eax
	lea edx,[esp+0x44]
	push edx
	mov byte ptr [esp+0xB8],8
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [esp+0xB4],9
	mov dword ptr [esp+0x24],edi
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block24:
	lea ecx,[esp+0x24]
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block27

 Block25:
	cmp eax,0x80004002
	je Block27

 Block26:
	push eax
	call _com_issue_error

 Block27:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0xB0],0xB
	cmp eax,edi
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block29:
	mov ebx,8
	mov byte ptr [esp+0xB0],0xC
	cmp word ptr [esp+0x94],bx
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0x94],ax
	mov eax,dword ptr [esp+0x9C]
	cmp eax,edi
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0x94]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov byte ptr [esp+0xB0],0xD
	cmp word ptr [esp+0x28],bx
	jne Block36

 Block34:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,edi
	je Block37

 Block35:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block37

 Block36:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block37:
	mov byte ptr [esp+0xB0],0xE
	cmp word ptr [esp+0x74],bx
	jne Block40

 Block38:
	mov eax,dword ptr [esp+0x7C]
	xor ecx,ecx
	mov word ptr [esp+0x74],cx
	cmp eax,edi
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea edx,[esp+0x74]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block41:
	mov edi,dword ptr [esp+0x20]
	push 4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block43

 Block42:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+4]
	push edi
	call ecx

 Block43:
	lea edx,[esp+0x20]
	push 0xB02
	push edx
	mov byte ptr [esp+0xC0],0xF
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [ebp+0xDB8]
	mov eax,dword ptr [eax]
	push ecx
	push eax
	lea edx,[esp+0x34]
	push edx
	mov byte ptr [esp+0xC4],0x10
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push 0x25
	push 0x19
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	mov dword ptr [esp+0x34],esp
	push esi
	call ecx
	mov byte ptr [esp+0xC8],0x11
	call draw_text_by_image
	mov eax,dword ptr [esp+0x30]
	add esp,0x18
	mov byte ptr [esp+0xB0],0xE
	test eax,eax
	je Block45

 Block44:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block45:
	push 4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x1C],esp
	mov dword ptr [eax],edi
	test edi,edi
	je Block47

 Block46:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block47:
	lea ecx,[esp+0x20]
	push 0xB02
	push ecx
	mov byte ptr [esp+0xC0],0x12
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov edx,dword ptr [ebp+0xDBC]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x34]
	push eax
	mov byte ptr [esp+0xC4],0x13
	call ZXString<char>::Format
	add esp,8
	mov ecx,esp
	mov dword ptr [esp+0x28],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push 0x25
	push 0x96
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x34],esp
	push esi
	call edx
	mov byte ptr [esp+0xC8],0x14
	call draw_text_by_image
	mov eax,dword ptr [esp+0x30]
	add esp,0x18
	mov byte ptr [esp+0xB0],0xE
	test eax,eax
	je Block49

 Block48:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block49:
	cmp dword ptr [ebp+0xDC0],0
	je Block84

 Block50:
	call get_update_time
	mov ecx,dword ptr [ebp+0xDC0]
	sub ecx,eax
	mov eax,0x10624DD3
	imul ecx
	sar edx,6
	mov edi,edx
	shr edi,0x1F
	add edi,edx
	jns Block52

 Block51:
	xor edi,edi

 Block52:
	mov ebx,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x64]
	push eax
	call ebx
	lea ecx,[esp+0x64]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block54

 Block53:
	push eax
	call _com_issue_error

 Block54:
	lea edx,[esp+0x54]
	push edx
	mov byte ptr [esp+0xB4],0x15
	call ebx
	lea eax,[esp+0x54]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block56

 Block55:
	push eax
	call _com_issue_error

 Block56:
	lea ecx,[esp+0x64]
	push ecx
	lea edx,[esp+0x58]
	push edx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x20],esp
	push 0xB0A
	mov bl,0x16
	push eax
	mov byte ptr [esp+0xC4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0xBC],0x17
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	lea ecx,[esp+0x90]
	push ecx
	mov byte ptr [esp+0xC0],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	push eax
	lea edx,[esp+0x20]
	push edx
	mov byte ptr [esp+0xB8],0x18
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [esp+0xB4],0x19
	mov dword ptr [esp+0x1C],0
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block60

 Block59:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block60:
	lea ecx,[esp+0x1C]
	call _x_com_ptr<IWzProperty>::_QueryUnknownComPtr
	test eax,eax
	jge Block63

 Block61:
	cmp eax,0x80004002
	je Block63

 Block62:
	push eax
	call _com_issue_error

 Block63:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0xB0],0x1B
	test eax,eax
	je Block65

 Block64:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block65:
	mov ebp,8
	mov byte ptr [esp+0xB0],0x1C
	cmp word ptr [esp+0x84],bp
	jne Block68

 Block66:
	xor eax,eax
	mov word ptr [esp+0x84],ax
	mov eax,dword ptr [esp+0x8C]
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea ecx,[esp+0x84]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov byte ptr [esp+0xB0],0x1D
	cmp word ptr [esp+0x54],bp
	jne Block72

 Block70:
	mov eax,dword ptr [esp+0x5C]
	xor edx,edx
	mov word ptr [esp+0x54],dx
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea eax,[esp+0x54]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov bl,0x1E
	mov byte ptr [esp+0xB0],bl
	cmp word ptr [esp+0x64],bp
	jne Block76

 Block74:
	mov eax,dword ptr [esp+0x6C]
	xor ecx,ecx
	mov word ptr [esp+0x64],cx
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea edx,[esp+0x64]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block77:
	mov ebp,dword ptr [esp+0x18]
	push 1
	push ecx
	mov eax,esp
	mov dword ptr [esp+0xAC],esp
	mov dword ptr [eax],ebp
	test ebp,ebp
	je Block79

 Block78:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+4]
	push ebp
	call ecx

 Block79:
	lea edx,[esp+0x1C]
	push 0xB0C
	push edx
	mov byte ptr [esp+0xC0],0x1F
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [eax]
	mov eax,0x88888889
	imul edi
	add edx,edi
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	mov edx,eax
	shl edx,4
	sub edx,eax
	add edx,edx
	add edx,edx
	sub edi,edx
	push edi
	push eax
	push ecx
	lea eax,[esp+0x38]
	push eax
	mov byte ptr [esp+0xC8],0x20
	call ZXString<char>::Format
	add esp,0xC
	mov ecx,esp
	mov dword ptr [esp+0x44],esp
	push eax
	mov dword ptr [ecx],0
	call ZXString<char>::op_assign
	push 0x53
	push 0x3C
	push ecx
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x50],esp
	push esi
	call edx
	mov byte ptr [esp+0xC8],0x21
	call draw_text_by_image
	mov eax,dword ptr [esp+0x2C]
	add esp,0x18
	mov byte ptr [esp+0xB0],bl
	test eax,eax
	je Block81

 Block80:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block81:
	mov byte ptr [esp+0xB0],0xE
	test ebp,ebp
	je Block83

 Block82:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block83:
	mov edi,dword ptr [esp+0x20]

 Block84:
	mov byte ptr [esp+0xB0],4
	test edi,edi
	je Block86

 Block85:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+8]
	push edi
	call eax

 Block86:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0xB0],2
	test eax,eax
	je Block88

 Block87:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block88:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov dword ptr [esp+0xB4],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0xA8]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xA0
	ret
}
}
// CField_Coconut::Init
_SUB_EXCEPTION_HANDLER(14AF20)
__SUB_CLASS_THIS(0014AF20, __thiscall, 143854,  CField_Coconut, void, void*) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x74]
	sub esp,0x74
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_14AF20
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x3C
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x70],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov dword ptr [ebp+0x68],esi
	mov eax,dword ptr [ebp+0x7C]
	push eax
	call CField::Init
	xor edi,edi
	push edi
	push edi
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x6C],esp
	push 0xB04
	push ecx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esi+0x30]
	mov dword ptr [ebp-4],edi
	cmp ecx,edi
	jne Block2

 Block1:
	push 0x80004003
	call _com_issue_error

 Block2:
	lea edx,[ebp-0x28]
	push edx
	mov dword ptr [ebp-4],0xFFFFFFFF
	call IWzProperty::Getitem
	mov ecx,eax
	mov dword ptr [ebp-4],1
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x40]
	mov dword ptr [ebp+0x40],edi
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,edi
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	cmp word ptr [ebp-0x28],8
	mov byte ptr [ebp-4],3
	jne Block8

 Block6:
	xor eax,eax
	mov word ptr [ebp-0x28],ax
	mov eax,dword ptr [ebp-0x20]
	cmp eax,edi
	je Block9

 Block7:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block9

 Block8:
	lea ecx,[ebp-0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block9:
	push edi
	push ecx
	mov edx,esp
	mov dword ptr [ebp+0x6C],esp
	push 0xB05
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov byte ptr [ebp-4],4
	cmp dword ptr [ebp+0x40],edi
	jne Block11

 Block10:
	push 0x80004003
	call _com_issue_error

 Block11:
	mov edi,dword ptr [ebp+0x40]
	lea eax,[ebp+0x10]
	push eax
	mov ecx,edi
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov esi,eax
	push 0
	push ecx
	mov ecx,esp
	mov dword ptr [ebp+0x6C],esp
	push 0xB06
	push ecx
	mov byte ptr [ebp-4],5
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea edx,[ebp]
	mov byte ptr [ebp-4],6
	push edx
	mov ecx,edi
	mov byte ptr [ebp-4],5
	call IWzProperty::Getitem
	mov edi,eax
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [ebp+0x6C],esp
	push 0xB07
	mov bl,7
	push eax
	mov byte ptr [ebp-4],bl
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	lea ecx,[ebp+0x2C]
	push ecx
	mov ecx,dword ptr [ebp+0x40]
	mov byte ptr [ebp-4],8
	mov byte ptr [ebp-4],bl
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],9
	call get_int32
	add esp,8
	push edi
	mov dword ptr [ebp+0x44],eax
	call get_int32
	mov ecx,dword ptr [ebp+0x44]
	add esp,8
	push esi
	lea edi,[ecx+eax]
	call get_int32
	mov edx,dword ptr [ebp+0x68]
	add eax,edi
	add esp,8
	cmp word ptr [ebp+0x2C],8
	mov dword ptr [edx+0xDB4],eax
	mov byte ptr [ebp-4],bl
	jne Block14

 Block12:
	xor eax,eax
	mov word ptr [ebp+0x2C],ax
	mov eax,dword ptr [ebp+0x34]
	test eax,eax
	je Block15

 Block13:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block15

 Block14:
	lea ecx,[ebp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block15:
	mov edi,8
	mov byte ptr [ebp-4],5
	cmp word ptr [ebp],di
	jne Block18

 Block16:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov byte ptr [ebp-4],3
	cmp word ptr [ebp+0x10],di
	jne Block22

 Block20:
	mov eax,dword ptr [ebp+0x18]
	xor ecx,ecx
	mov word ptr [ebp+0x10],cx
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea edx,[ebp+0x10]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	call get_update_time
	mov esi,dword ptr [ebp+0x68]
	xor ebx,ebx
	push ebx
	push ebx
	push ecx
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push offset _S_AVATAR
	mov dword ptr [esi+0xDC4],eax
	mov dword ptr [esi+0xDC0],ebx
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x40]
	lea eax,[ebp-0x38]
	mov byte ptr [ebp-4],0xA
	push eax
	mov byte ptr [ebp-4],3
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xB
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[ebp+0x28]
	mov dword ptr [ebp+0x28],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block26

 Block24:
	cmp eax,0x80004002
	je Block26

 Block25:
	push eax
	call _com_issue_error

 Block26:
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp-0x38],di
	jne Block29

 Block27:
	mov eax,dword ptr [ebp-0x30]
	xor ecx,ecx
	mov word ptr [ebp-0x38],cx
	cmp eax,ebx
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea edx,[ebp-0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block30:
	push 0x3C0
	push ebx
	add esi,0xDC8
	push esi
	call _memset
	xor edi,edi
	add esp,0xC
	mov dword ptr [ebp+0x3C],edi
	or ebx,0xFFFFFFFF
	lea esp,[esp]

 Block31:
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
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	cmp dword ptr [ebp+0x28],0
	mov byte ptr [ebp-4],0xE
	je Block1

 Block32:
	mov ecx,dword ptr [ebp+0x28]
	lea eax,[ebp+0x2C]
	push eax
	mov byte ptr [ebp-4],0xD
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0xF
	call Ztl_variant_t::GetUnknown
	xor esi,esi
	mov dword ptr [ebp+0x44],esi
	test eax,eax
	je Block35

 Block33:
	mov ecx,dword ptr [eax]
	lea edx,[ebp-0x18]
	push edx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	mov eax,dword ptr [ecx]
	call eax
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x18]
	mov esi,ecx
	mov dword ptr [ebp+0x44],esi
	test eax,eax
	jge Block35

 Block34:
	cmp eax,0x80004002
	jne Block4

 Block35:
	cmp word ptr [ebp+0x2C],8
	mov byte ptr [ebp-4],0x11
	jne Block38

 Block36:
	mov eax,dword ptr [ebp+0x34]
	xor edx,edx
	mov word ptr [ebp+0x2C],dx
	test eax,eax
	je Block39

 Block37:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block39

 Block38:
	lea eax,[ebp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block39:
	test esi,esi
	sete al
	test al,al
	je Block42

 Block40:
	mov byte ptr [ebp-4],0xD
	test esi,esi
	je Block70

 Block41:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx
	jmp Block70

 Block42:
	mov dword ptr [ebp+0x24],0

 Block43:
	mov eax,0x20
	call __chkstk
	mov eax,esp
	push 0
	push 0
	push 0xA
	push eax
	mov eax,dword ptr [ebp+0x24]
	push eax
	call __itow
	add esp,8
	mov dword ptr [ebp+0x6C],esp
	mov ecx,esp
	push eax
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x12
	test esi,esi
	je Block1

 Block44:
	lea ecx,[ebp]
	push ecx
	mov ecx,esi
	mov byte ptr [ebp-4],0x11
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [ebp-4],0x13
	call Ztl_variant_t::GetUnknown
	xor edi,edi
	mov dword ptr [ebp+0x6C],edi
	test eax,eax
	je Block47

 Block45:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx]
	lea ecx,[ebp-0x14]
	push ecx
	push offset __GUID_986515d9_0a0b_4929_8b4f_718682177b92
	push eax
	call edx
	xor ecx,ecx
	test eax,eax
	setl cl
	dec ecx
	and ecx,dword ptr [ebp-0x14]
	mov edi,ecx
	mov dword ptr [ebp+0x6C],edi
	test eax,eax
	jge Block47

 Block46:
	cmp eax,0x80004002
	jne Block4

 Block47:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x15
	jne Block50

 Block48:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block51:
	test edi,edi
	sete al
	test al,al
	je Block54

 Block52:
	mov byte ptr [ebp-4],0x11
	test edi,edi
	je Block68

 Block53:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx
	jmp Block68

 Block54:
	mov ecx,dword ptr [ebp+0x3C]
	mov eax,dword ptr [ebp+0x24]
	lea edx,[eax+ecx*2]
	mov eax,dword ptr [ebp+0x68]
	imul edx,0xF0
	lea esi,[edx+eax]
	push 0
	push ecx
	mov dword ptr [ebp-0x10],esp
	mov ecx,esp
	push offset _S_CAP
	mov dword ptr [esi+0xDC8],ebx
	mov dword ptr [esi+0xDD0],ebx
	mov dword ptr [esi+0xDD4],ebx
	mov dword ptr [esi+0xDD8],ebx
	mov dword ptr [esi+0xDF4],ebx
	mov dword ptr [esi+0xDF8],ebx
	mov dword ptr [esi+0xDFC],ebx
	mov dword ptr [esi+0xE00],ebx
	mov dword ptr [esi+0xE04],ebx
	mov dword ptr [esi+0xE08],ebx
	mov dword ptr [esi+0xE0C],ebx
	mov dword ptr [esi+0xE8C],ebx
	mov dword ptr [esi+0xE90],ebx
	mov dword ptr [esi+0xE94],ebx
	mov dword ptr [esi+0xEB4],ebx
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0x16
	test edi,edi
	je Block1

 Block55:
	lea ecx,[ebp+0x10]
	push ecx
	mov ecx,edi
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x17
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x10],8
	mov dword ptr [esi+0xDCC],eax
	mov byte ptr [ebp-4],0x15
	jne Block58

 Block56:
	mov eax,dword ptr [ebp+0x18]
	xor edx,edx
	mov word ptr [ebp+0x10],dx
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea eax,[ebp+0x10]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block59:
	push 0
	push ecx
	mov dword ptr [ebp-0x10],esp
	mov ecx,esp
	push offset _S_CLOTHES
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x58]
	push ecx
	mov byte ptr [ebp-4],0x18
	mov ecx,edi
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x19
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x58],8
	mov dword ptr [esi+0xDDC],eax
	mov byte ptr [ebp-4],0x15
	jne Block62

 Block60:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block63

 Block61:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block63

 Block62:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block63:
	push 0
	push ecx
	mov dword ptr [ebp-0x10],esp
	mov ecx,esp
	push offset _S_SHOES
	call _xbstr_t::_ctor_1
	lea ecx,[ebp+0x48]
	push ecx
	mov byte ptr [ebp-4],0x1A
	mov ecx,edi
	mov byte ptr [ebp-4],0x15
	call IWzProperty::Getitem
	push eax
	mov byte ptr [ebp-4],0x1B
	call get_int32
	add esp,8
	cmp word ptr [ebp+0x48],8
	mov dword ptr [esi+0xDE4],eax
	mov byte ptr [ebp-4],0x15
	jne Block66

 Block64:
	mov eax,dword ptr [ebp+0x50]
	xor edx,edx
	mov word ptr [ebp+0x48],dx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea eax,[ebp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	mov byte ptr [ebp-4],0x11
	call edx
	mov esi,dword ptr [ebp+0x44]

 Block68:
	mov eax,dword ptr [ebp+0x24]
	inc eax
	cmp eax,2
	mov dword ptr [ebp+0x24],eax
	jl Block43

 Block69:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	mov byte ptr [ebp-4],0xD
	call ecx
	mov edi,dword ptr [ebp+0x3C]

 Block70:
	inc edi
	cmp edi,2
	mov dword ptr [ebp+0x3C],edi
	jl Block31

 Block71:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x48]
	push edx
	call esi
	lea eax,[ebp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block73

 Block72:
	push eax
	call _com_issue_error

 Block73:
	lea ecx,[ebp+0x58]
	push ecx
	mov byte ptr [ebp-4],0x1C
	call esi
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block75

 Block74:
	push eax
	call _com_issue_error

 Block75:
	push 0
	push 0
	lea eax,[ebp+0x48]
	push eax
	lea ecx,[ebp+0x58]
	push ecx
	push ecx
	mov edx,esp
	mov dword ptr [ebp-0x10],esp
	push 0xB08
	push edx
	mov byte ptr [ebp-4],0x1D
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [ebp-4],0x1E
	jne Block77

 Block76:
	push 0x80004003
	call _com_issue_error

 Block77:
	lea eax,[ebp+0x2C]
	mov byte ptr [ebp-4],0x1D
	mov ecx,dword ptr [_D_G_RM]
	push eax
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [ebp-4],0x1F
	call Ztl_variant_t::GetUnknown
	test eax,eax
	je Block83

 Block78:
	mov ecx,dword ptr [eax]
	lea edx,[ebp+0x6C]
	push edx
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push eax
	mov eax,dword ptr [ecx]
	call eax
	mov ebx,dword ptr [ebp+0x68]
	xor ecx,ecx
	mov esi,eax
	mov eax,dword ptr [ebx+0x1188]
	test esi,esi
	setl cl
	dec ecx
	and ecx,dword ptr [ebp+0x6C]
	mov edi,ecx
	test eax,eax
	je Block80

 Block79:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block80:
	mov dword ptr [ebx+0x1188],edi
	test esi,esi
	jge Block85

 Block81:
	cmp esi,0x80004002
	je Block85

 Block82:
	push esi
	call _com_issue_error

 Block83:
	mov ecx,dword ptr [ebp+0x68]
	mov eax,dword ptr [ecx+0x1188]
	test eax,eax
	je Block85

 Block84:
	mov edx,ecx
	mov dword ptr [edx+0x1188],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block85:
	mov esi,8
	mov byte ptr [ebp-4],0x1D
	cmp word ptr [ebp+0x2C],si
	jne Block88

 Block86:
	xor eax,eax
	mov word ptr [ebp+0x2C],ax
	mov eax,dword ptr [ebp+0x34]
	test eax,eax
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea ecx,[ebp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block89:
	mov byte ptr [ebp-4],0x1C
	cmp word ptr [ebp+0x58],si
	jne Block92

 Block90:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block93

 Block91:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block93

 Block92:
	lea eax,[ebp+0x58]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block93:
	mov byte ptr [ebp-4],0xD
	cmp word ptr [ebp+0x48],si
	jne Block96

 Block94:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block97

 Block95:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block97

 Block96:
	lea edx,[ebp+0x48]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block97:
	xor edi,edi
	mov dword ptr [ebp+0x20],edi
	lea eax,[ebp+0x6C]
	push 0x3D0
	push eax
	mov byte ptr [ebp-4],0x20
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[ebp+0x20]
	push ecx
	push eax
	mov byte ptr [ebp-4],0x21
	call PcCreate_IWzCanvas
	mov eax,dword ptr [ebp+0x6C]
	add esp,0xC
	mov byte ptr [ebp-4],0x20
	cmp eax,edi
	je Block99

 Block98:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block99:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[ebp+0x58]
	push edx
	call esi
	lea eax,[ebp+0x58]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block101

 Block100:
	push eax
	call _com_issue_error

 Block101:
	lea ecx,[ebp+0x48]
	push ecx
	mov byte ptr [ebp-4],0x22
	call esi
	lea edx,[ebp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block103

 Block102:
	push eax
	call _com_issue_error

 Block103:
	mov ebx,dword ptr [ebp+0x68]
	mov esi,dword ptr [ebx+0x1188]
	mov byte ptr [ebp-4],0x23
	cmp esi,edi
	jne Block105

 Block104:
	push 0x80004003
	call _com_issue_error

 Block105:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[ebp+0x44]
	push ecx
	push esi
	mov dword ptr [ebp+0x44],edi
	call edx
	cmp eax,edi
	jge Block107

 Block106:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block107:
	mov esi,dword ptr [ebx+0x1188]
	mov edi,dword ptr [ebp+0x44]
	test esi,esi
	jne Block109

 Block108:
	push 0x80004003
	call _com_issue_error

 Block109:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x40]
	lea ecx,[ebp+0x3C]
	push ecx
	push esi
	mov dword ptr [ebp+0x3C],0
	call edx
	test eax,eax
	jge Block111

 Block110:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block111:
	mov ecx,dword ptr [ebp+0x20]
	test ecx,ecx
	jne Block113

 Block112:
	push 0x80004003
	call _com_issue_error

 Block113:
	mov ebx,dword ptr [ebp+0x58]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp+0x60]
	mov edx,dword ptr [ecx]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp+0x64]
	mov dword ptr [eax+0xC],ebx
	mov ebx,dword ptr [ebp+0x48]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ebx
	mov ebx,dword ptr [ebp+0x4C]
	mov dword ptr [eax+4],ebx
	mov ebx,dword ptr [ebp+0x50]
	mov dword ptr [eax+8],ebx
	mov ebx,dword ptr [ebp+0x54]
	mov dword ptr [eax+0xC],ebx
	mov eax,dword ptr [ebp+0x3C]
	push edi
	push eax
	mov esi,ecx
	push ecx
	mov ecx,dword ptr [edx+0x2C]
	call ecx
	test eax,eax
	jge Block115

 Block114:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block115:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0x22
	jne Block122

 Block116:
	mov eax,dword ptr [ebp+0x50]
	xor edx,edx
	mov word ptr [ebp+0x48],dx
	test eax,eax
	je Block118

 Block117:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block118:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block119:
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],0x20
	jne Block123

 Block120:
	mov eax,dword ptr [ebp+0x60]
	xor ecx,ecx
	mov word ptr [ebp+0x58],cx
	test eax,eax
	je Block124

 Block121:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block124

 Block122:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea eax,[ebp+0x48]
	push eax
	call ebx
	jmp Block119

 Block123:
	lea edx,[ebp+0x58]
	push edx
	call ebx

 Block124:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x48]
	push eax
	call edi
	lea ecx,[ebp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block126

 Block125:
	push eax
	call _com_issue_error

 Block126:
	mov edx,3
	mov word ptr [ebp+0x58],dx
	mov dword ptr [ebp+0x60],0
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [ebp-4],0x25
	test ecx,ecx
	jne Block128

 Block127:
	push 0x80004003
	call _com_issue_error

 Block128:
	lea eax,[ebp+0x48]
	push eax
	lea edx,[ebp+0x58]
	push edx
	push 0
	push 0
	push 0
	push 0
	push 0
	lea eax,[ebp+0x6C]
	push eax
	call IWzGr2D::CreateLayer
	mov ecx,dword ptr [ebp+0x68]
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ecx+0x118C]
	cmp esi,eax
	je Block133

 Block129:
	mov dword ptr [ecx+0x118C],eax
	test eax,eax
	je Block131

 Block130:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block131:
	test esi,esi
	je Block133

 Block132:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block133:
	mov eax,dword ptr [ebp+0x6C]
	test eax,eax
	je Block135

 Block134:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block135:
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],0x24
	jne Block138

 Block136:
	mov eax,dword ptr [ebp+0x60]
	xor ecx,ecx
	mov word ptr [ebp+0x58],cx
	test eax,eax
	je Block139

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block139

 Block138:
	lea edx,[ebp+0x58]
	push edx
	call ebx

 Block139:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0x20
	jne Block142

 Block140:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block143

 Block141:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block143

 Block142:
	lea ecx,[ebp+0x48]
	push ecx
	call ebx

 Block143:
	lea edx,[ebp+0x2C]
	push edx
	call edi
	lea eax,[ebp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block145

 Block144:
	push eax
	call _com_issue_error

 Block145:
	lea ecx,[ebp]
	push ecx
	mov byte ptr [ebp-4],0x26
	call edi
	lea edx,[ebp]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block147

 Block146:
	push eax
	call _com_issue_error

 Block147:
	lea eax,[ebp+0x10]
	push eax
	mov byte ptr [ebp-4],0x27
	call edi
	lea ecx,[ebp+0x10]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block149

 Block148:
	push eax
	call _com_issue_error

 Block149:
	lea edx,[ebp+0x48]
	push edx
	mov byte ptr [ebp-4],0x28
	call edi
	lea eax,[ebp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block151

 Block150:
	push eax
	call _com_issue_error

 Block151:
	lea ecx,[ebp+0x58]
	mov bl,0x29
	push ecx
	mov byte ptr [ebp-4],bl
	call edi
	lea edx,[ebp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block153

 Block152:
	push eax
	call _com_issue_error

 Block153:
	mov eax,dword ptr [ebp+0x68]
	mov ecx,dword ptr [eax+0x118C]
	mov byte ptr [ebp-4],0x2A
	test ecx,ecx
	jne Block155

 Block154:
	push 0x80004003
	call _com_issue_error

 Block155:
	lea edx,[ebp+0x2C]
	push edx
	lea eax,[ebp]
	push eax
	lea edx,[ebp+0x10]
	push edx
	lea eax,[ebp+0x48]
	push eax
	mov eax,dword ptr [ebp+0x20]
	lea edx,[ebp+0x58]
	push edx
	push eax
	lea edx,[ebp-0x48]
	push edx
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [ebp-0x48],8
	jne Block162

 Block156:
	xor eax,eax
	mov word ptr [ebp-0x48],ax
	mov eax,dword ptr [ebp-0x40]
	test eax,eax
	je Block158

 Block157:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block158:
	mov esi,dword ptr [ZImports::_VariantClear]

 Block159:
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],bl
	jne Block163

 Block160:
	mov eax,dword ptr [ebp+0x60]
	xor edx,edx
	mov word ptr [ebp+0x58],dx
	test eax,eax
	je Block164

 Block161:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block164

 Block162:
	mov esi,dword ptr [ZImports::_VariantClear]
	lea ecx,[ebp-0x48]
	push ecx
	call esi
	jmp Block159

 Block163:
	lea eax,[ebp+0x58]
	push eax
	call esi

 Block164:
	cmp word ptr [ebp+0x48],8
	mov byte ptr [ebp-4],0x28
	jne Block167

 Block165:
	mov eax,dword ptr [ebp+0x50]
	xor ecx,ecx
	mov word ptr [ebp+0x48],cx
	test eax,eax
	je Block168

 Block166:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block168

 Block167:
	lea edx,[ebp+0x48]
	push edx
	call esi

 Block168:
	cmp word ptr [ebp+0x10],8
	mov byte ptr [ebp-4],0x27
	jne Block171

 Block169:
	xor eax,eax
	mov word ptr [ebp+0x10],ax
	mov eax,dword ptr [ebp+0x18]
	test eax,eax
	je Block172

 Block170:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block172

 Block171:
	lea ecx,[ebp+0x10]
	push ecx
	call esi

 Block172:
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x26
	jne Block175

 Block173:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block176

 Block174:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block176

 Block175:
	lea eax,[ebp]
	push eax
	call esi

 Block176:
	cmp word ptr [ebp+0x2C],8
	mov byte ptr [ebp-4],0x20
	jne Block179

 Block177:
	mov eax,dword ptr [ebp+0x34]
	xor ecx,ecx
	mov word ptr [ebp+0x2C],cx
	test eax,eax
	je Block180

 Block178:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block180

 Block179:
	lea edx,[ebp+0x2C]
	push edx
	call esi

 Block180:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push 2
	lea eax,[ebp+0x6C]
	push eax
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov bl,0x2B
	mov ecx,0xD
	mov byte ptr [ebp-4],bl
	mov word ptr [ebp+0x58],cx
	mov dword ptr [ebp+0x60],eax
	test eax,eax
	je Block182

 Block181:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block182:
	mov ecx,dword ptr [ebp+0x68]
	mov esi,dword ptr [ecx+0x118C]
	mov byte ptr [ebp-4],0x2C
	test esi,esi
	jne Block184

 Block183:
	push 0x80004003
	call _com_issue_error

 Block184:
	mov ecx,dword ptr [ebp+0x58]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x64]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [ebp+0x60]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [ebp+0x64]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	test eax,eax
	jge Block186

 Block185:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block186:
	cmp word ptr [ebp+0x58],8
	mov byte ptr [ebp-4],bl
	jne Block189

 Block187:
	xor eax,eax
	mov word ptr [ebp+0x58],ax
	mov eax,dword ptr [ebp+0x60]
	test eax,eax
	je Block190

 Block188:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block190

 Block189:
	lea ecx,[ebp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block190:
	mov eax,dword ptr [ebp+0x6C]
	mov byte ptr [ebp-4],0x20
	test eax,eax
	je Block192

 Block191:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block192:
	mov ecx,dword ptr [ebp+0x68]
	mov esi,dword ptr [ecx+0x118C]
	test esi,esi
	jne Block194

 Block193:
	push 0x80004003
	call _com_issue_error

 Block194:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block196

 Block195:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block196:
	lea ecx,[ebp+0x48]
	push ecx
	call edi
	lea edx,[ebp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block198

 Block197:
	push eax
	call _com_issue_error

 Block198:
	lea eax,[ebp+0x58]
	mov bl,0x2D
	push eax
	mov byte ptr [ebp-4],bl
	call edi
	lea ecx,[ebp+0x58]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block200

 Block199:
	push eax
	call _com_issue_error

 Block200:
	mov edx,dword ptr [ebp+0x68]
	mov esi,dword ptr [edx+0x118C]
	mov byte ptr [ebp-4],0x2E
	test esi,esi
	jne Block202

 Block201:
	push 0x80004003
	call _com_issue_error

 Block202:
	mov edx,dword ptr [ebp+0x48]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x4C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x50]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x54]
	mov dword ptr [eax+0xC],edx
	mov edx,dword ptr [ebp+0x58]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [ebp+0x5C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [ebp+0x60]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [ebp+0x64]
	mov edi,8
	push edi
	push 0xFFFFFEF7
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x90]
	push esi
	call eax
	test eax,eax
	jge Block204

 Block203:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block204:
	mov byte ptr [ebp-4],bl
	cmp word ptr [ebp+0x58],di
	jne Block207

 Block205:
	mov eax,dword ptr [ebp+0x60]
	xor ecx,ecx
	mov word ptr [ebp+0x58],cx
	test eax,eax
	je Block208

 Block206:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block208

 Block207:
	lea edx,[ebp+0x58]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block208:
	mov byte ptr [ebp-4],0x20
	cmp word ptr [ebp+0x48],di
	jne Block211

 Block209:
	xor eax,eax
	mov word ptr [ebp+0x48],ax
	mov eax,dword ptr [ebp+0x50]
	test eax,eax
	je Block212

 Block210:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block212

 Block211:
	lea ecx,[ebp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block212:
	mov ecx,dword ptr [ebp+0x68]
	call CField_Coconut::DrawBoard
	mov eax,dword ptr [ebp+0x20]
	mov byte ptr [ebp-4],0xD
	test eax,eax
	je Block214

 Block213:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block214:
	mov eax,dword ptr [ebp+0x28]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [ebp-4],3
	call edx
	mov eax,dword ptr [ebp+0x40]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [ebp-4],0xFFFFFFFF
	call edx
	lea esp,[ebp-0x58]
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
