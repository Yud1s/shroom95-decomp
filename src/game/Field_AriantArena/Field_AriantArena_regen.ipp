#include "regen.hpp"
// Field_AriantArena.ipp
#include "Field_AriantArena.hpp"

// CField_AriantArena::GetRank
__SUB_CLASS_THIS(001473C0, __thiscall, 81011,  CField_AriantArena, long, ZXString<char>&) {
__asm {

 Block0:
	mov eax,dword ptr [ecx+0xDA0]
	push ebx
	push ebp
	push esi
	push edi
	test eax,eax
	jne Block2

 Block1:
	xor ebp,ebp
	jmp Block3

 Block2:
	mov ebp,dword ptr [eax-4]

 Block3:
	or ebx,0xFFFFFFFF
	test eax,eax
	je Block5

 Block4:
	mov eax,dword ptr [eax-4]

 Block5:
	lea esi,[eax-1]
	test esi,esi
	jl Block11

 Block6:
	mov ecx,dword ptr [ecx+0xDA0]
	lea eax,[esi+esi*2]
	lea edi,[ecx+eax*4]

 Block7:
	mov eax,dword ptr [edi+4]
	cmp ebx,eax
	je Block9

 Block8:
	mov ebx,eax
	lea ebp,[esi+1]

 Block9:
	mov edx,dword ptr [esp+0x14]
	push edx
	mov ecx,edi
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block12

 Block10:
	dec esi
	sub edi,0xC
	test esi,esi
	jge Block7

 Block11:
	pop edi
	pop esi
	pop ebp
	or eax,0xFFFFFFFF
	pop ebx
	ret 4

 Block12:
	pop edi
	pop esi
	mov eax,ebp
	pop ebp
	pop ebx
	ret 4
}
}
// CField_AriantArena::OnUserScore
_SUB_EXCEPTION_HANDLER(1492B0)
__SUB_CLASS_THIS(001492B0, __thiscall, 81014,  CField_AriantArena, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1492B0
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
	mov edi,ecx
	mov dword ptr [esp+0x20],edi
	mov esi,dword ptr [esp+0x80]
	xor ebp,ebp
	mov ecx,esi
	mov dword ptr [esp+0x18],ebp
	call CInPacket::Decode1
	movzx eax,al
	cmp eax,ebp
	jne Block3

 Block1:
	lea edx,[edi+0xDA0]
	push edx
	call ZSortHelperDefault<CField_AriantArena::UserScore>::call_1
	add esp,4
	mov ecx,edi
	call CField_AriantArena::UpdateScoreAndRank
	mov ecx,dword ptr [esp+0x70]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x68
	ret 4

 Block2:
	mov esi,dword ptr [esp+0x80]

 Block3:
	dec eax
	mov dword ptr [esp+0x28],eax
	lea eax,[esp+0x14]
	push eax
	mov ecx,esi
	call CInPacket::DecodeStr
	mov ecx,esi
	mov dword ptr [esp+0x78],ebp
	call CInPacket::Decode4
	cmp eax,ebp
	mov dword ptr [esp+0x1C],eax
	jge Block5

 Block4:
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,edi
	call CField_AriantArena::RemoveUserFromRank
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	jmp Block62

 Block5:
	cmp eax,0x270F
	jle Block7

 Block6:
	mov dword ptr [esp+0x1C],0x270F

 Block7:
	mov edi,dword ptr [esp+0x14]
	cmp edi,ebp
	je Block9

 Block8:
	cmp byte ptr [edi],0
	jne Block11

 Block9:
	mov dword ptr [esp+0x78],0xFFFFFFFF
	cmp edi,ebp
	je Block65

 Block10:
	add edi,0xFFFFFFF4
	push edi
	jmp Block64

 Block11:
	mov edx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	mov eax,dword ptr [edx+8]
	mov eax,dword ptr [eax+0x19EC]
	push eax
	lea ecx,[esp+0x18]
	call ZXString<char>::Compare
	test eax,eax
	je Block16

 Block12:
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	lea eax,[esp+0x38]
	push eax
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov ecx,dword ptr [eax+0x3D]
	or dword ptr [esp+0x18],1
	push ecx
	add eax,0x39
	push eax
	mov byte ptr [esp+0x80],1
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	cwde
	cdq
	mov ecx,0x3E8
	idiv ecx
	mov eax,0x51EB851F
	add esp,8
	imul edx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,9
	je Block14

 Block13:
	lea ecx,[esp+0x30]
	push ecx
	mov ecx,dword ptr [TSingleton<CWvsContext>::ms_pInstance]
	call CWvsContext::GetCharacterData
	mov eax,dword ptr [eax+4]
	mov edx,dword ptr [eax+0x3D]
	mov ecx,2
	or dword ptr [esp+0x18],ecx
	push edx
	add eax,0x39
	push eax
	mov dword ptr [esp+0x80],ecx
	call _ZtlSecureFuseHelper<short>::call
	movzx eax,ax
	cwde
	cdq
	mov ecx,0x3E8
	idiv ecx
	mov eax,0x51EB851F
	add esp,8
	imul edx
	sar edx,5
	mov eax,edx
	shr eax,0x1F
	add eax,edx
	cmp eax,8
	jne Block15

 Block14:
	mov edi,dword ptr [esp+0x14]
	mov bl,1
	jmp Block17

 Block15:
	mov edi,dword ptr [esp+0x14]

 Block16:
	xor bl,bl

 Block17:
	test byte ptr [esp+0x18],2
	mov dword ptr [esp+0x78],1
	je Block23

 Block18:
	mov esi,dword ptr [esp+0x34]
	and dword ptr [esp+0x18],0xFFFFFFFD
	cmp esi,ebp
	je Block23

 Block19:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block22

 Block20:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebp
	je Block22

 Block21:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block22:
	mov edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x34],ebp

 Block23:
	test byte ptr [esp+0x18],1
	mov dword ptr [esp+0x78],ebp
	je Block29

 Block24:
	mov esi,dword ptr [esp+0x3C]
	and dword ptr [esp+0x18],0xFFFFFFFE
	cmp esi,ebp
	je Block29

 Block25:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block28

 Block26:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block28

 Block27:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block28:
	mov edi,dword ptr [esp+0x14]
	mov dword ptr [esp+0x3C],0

 Block29:
	test bl,bl
	je Block32

 Block30:
	mov dword ptr [esp+0x78],0xFFFFFFFF
	test edi,edi
	je Block65

 Block31:
	add edi,0xFFFFFFF4
	push edi
	jmp Block64

 Block32:
	mov esi,dword ptr [esp+0x20]
	xor ebp,ebp
	add esi,0xDA0
	xor ebx,ebx

 Block33:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block38

 Block34:
	cmp ebp,dword ptr [eax-4]
	jae Block38

 Block35:
	mov edi,eax
	lea ecx,[esp+0x14]
	add edi,ebx
	push ecx
	mov ecx,edi
	call ZXString<char>::op_eq_0
	test eax,eax
	jne Block37

 Block36:
	inc ebp
	add ebx,0xC
	jmp Block33

 Block37:
	mov edx,dword ptr [esp+0x1C]
	mov dword ptr [edi+4],edx
	jmp Block61

 Block38:
	push 0xFFFFFFFF
	mov ecx,esi
	call ZArray<CField_AriantArena::UserScore>::InsertBefore
	mov edi,eax
	lea eax,[esp+0x14]
	push eax
	mov ecx,edi
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x1C]
	mov dword ptr [edi+4],ecx
	mov dword ptr [esp+0x1C],0
	lea edx,[esp+0x24]
	push 0x1123
	push edx
	mov byte ptr [esp+0x80],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov esi,dword ptr [esi]
	mov byte ptr [esp+0x78],4
	test esi,esi
	je Block40

 Block39:
	mov esi,dword ptr [esi-4]

 Block40:
	mov eax,dword ptr [eax]
	dec esi
	push esi
	push eax
	lea eax,[esp+0x24]
	push eax
	call ZXString16::Format
	mov eax,dword ptr [esp+0x30]
	add esp,0xC
	mov byte ptr [esp+0x78],3
	test eax,eax
	je Block42

 Block41:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block42:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x50]
	push ecx
	call esi
	lea edx,[esp+0x50]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block67

 Block43:
	lea eax,[esp+0x40]
	push eax
	mov byte ptr [esp+0x7C],5
	call esi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block67

 Block44:
	mov ebx,dword ptr [esp+0x1C]
	push 0
	push 0
	lea edx,[esp+0x58]
	push edx
	lea eax,[esp+0x4C]
	push eax
	push ecx
	mov dword ptr [esp+0x40],esp
	mov ecx,esp
	push ebx
	mov byte ptr [esp+0x90],6
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x8C],7
	je Block68

 Block45:
	lea ecx,[esp+0x74]
	push ecx
	mov byte ptr [esp+0x90],6
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	mov ecx,eax
	mov byte ptr [esp+0x80],8
	call Ztl_variant_t::GetUnknown
	lea ecx,[edi+8]
	push eax
	call _x_com_ptr<IWzCanvas>::_QueryUnknown
	test eax,eax
	jge Block47

 Block46:
	cmp eax,0x80004002
	jne Block67

 Block47:
	mov esi,8
	mov byte ptr [esp+0x78],6
	cmp word ptr [esp+0x60],si
	jne Block50

 Block48:
	mov eax,dword ptr [esp+0x68]
	xor edx,edx
	mov word ptr [esp+0x60],dx
	test eax,eax
	je Block51

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block51

 Block50:
	lea eax,[esp+0x60]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block51:
	mov byte ptr [esp+0x78],5
	cmp word ptr [esp+0x40],si
	jne Block54

 Block52:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block55

 Block53:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block55

 Block54:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block55:
	mov byte ptr [esp+0x78],3
	cmp word ptr [esp+0x50],si
	jne Block58

 Block56:
	xor eax,eax
	mov word ptr [esp+0x50],ax
	mov eax,dword ptr [esp+0x58]
	test eax,eax
	je Block59

 Block57:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block59

 Block58:
	lea ecx,[esp+0x50]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block59:
	mov byte ptr [esp+0x78],0
	test ebx,ebx
	je Block61

 Block60:
	add ebx,0xFFFFFFF4
	push ebx
	call ZXString16::_Release
	add esp,4

 Block61:
	mov eax,dword ptr [esp+0x14]
	test eax,eax

 Block62:
	mov dword ptr [esp+0x78],0xFFFFFFFF
	je Block65

 Block63:
	add eax,0xFFFFFFF4
	push eax

 Block64:
	call ZXString<char>::_Release
	add esp,4

 Block65:
	mov eax,dword ptr [esp+0x28]
	mov edi,dword ptr [esp+0x20]
	xor ebp,ebp
	cmp eax,ebp
	jne Block2

 Block66:
	jmp Block1

 Block67:
	push eax
	call _com_issue_error

 Block68:
	push 0x80004003
	call _com_issue_error
}
}
// DownHeap_CField_AriantArena__UserScore_
_SUB_EXCEPTION_HANDLER(147AE0)
__SUB(00147AE0, __cdecl, 144033,  void, ZArray<CField_AriantArena::UserScore>&, int32_t, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_147AE0
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
	mov esi,dword ptr [esp+0x34]
	mov ebx,dword ptr [esp+0x3C]
	mov edi,dword ptr [esp+0x30]
	mov ecx,dword ptr [edi]
	lea eax,[esi+ebx]
	lea eax,[eax+eax*2]
	lea ebp,[ecx+eax*4-0xC]
	push ebp
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],0
	call ZXString<char>::op_assign
	mov edx,dword ptr [ebp+4]
	mov ebp,dword ptr [ebp+8]
	mov dword ptr [esp+0x28],0
	mov dword ptr [esp+0x18],edx
	mov dword ptr [esp+0x1C],ebp
	test ebp,ebp
	je Block2

 Block1:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+4]
	push ebp
	call ecx

 Block2:
	mov eax,dword ptr [esp+0x38]
	cdq
	sub eax,edx
	sar eax,1
	cmp esi,eax
	mov dword ptr [esp+0x28],1
	mov dword ptr [esp+0x3C],eax
	jg Block13

 Block3:
	lea eax,[esi+esi]
	cmp eax,dword ptr [esp+0x38]
	mov dword ptr [esp+0x34],eax
	jge Block6

 Block4:
	lea ecx,[eax+ebx]
	lea edx,[ecx+ecx*2]
	mov ecx,dword ptr [edi]
	lea ecx,[ecx+edx*4]
	mov edx,dword ptr [ecx-8]
	cmp edx,dword ptr [ecx+4]
	jle Block6

 Block5:
	inc eax
	mov dword ptr [esp+0x34],eax

 Block6:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [esp+0x18]
	add eax,ebx
	lea eax,[eax+eax*2]
	cmp edx,dword ptr [ecx+eax*4-8]
	lea eax,[ecx+eax*4]
	jle Block13

 Block7:
	lea edi,[eax-0xC]
	lea eax,[esi+ebx]
	lea eax,[eax+eax*2]
	lea esi,[ecx+eax*4-0xC]
	push edi
	mov ecx,esi
	call ZXString<char>::op_assign
	mov ecx,dword ptr [edi+4]
	mov dword ptr [esi+4],ecx
	mov edi,dword ptr [edi+8]
	mov ebp,dword ptr [esi+8]
	cmp ebp,edi
	je Block12

 Block8:
	mov dword ptr [esi+8],edi
	test edi,edi
	je Block10

 Block9:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block10:
	test ebp,ebp
	je Block12

 Block11:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block12:
	mov esi,dword ptr [esp+0x34]
	cmp esi,dword ptr [esp+0x3C]
	mov edi,dword ptr [esp+0x30]
	mov ebp,dword ptr [esp+0x1C]
	jle Block3

 Block13:
	mov ecx,dword ptr [edi]
	add ebx,esi
	lea eax,[ebx+ebx*2]
	lea esi,[ecx+eax*4-0xC]
	lea edx,[esp+0x14]
	push edx
	mov ecx,esi
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esi+4],eax
	mov edi,dword ptr [esi+8]
	cmp edi,ebp
	je Block18

 Block14:
	mov dword ptr [esi+8],ebp
	test ebp,ebp
	je Block16

 Block15:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+4]
	push ebp
	call edx

 Block16:
	test edi,edi
	je Block18

 Block17:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	call ecx

 Block18:
	mov dword ptr [esp+0x28],2
	test ebp,ebp
	je Block20

 Block19:
	mov edx,dword ptr [ebp]
	mov eax,dword ptr [edx+8]
	push ebp
	call eax

 Block20:
	mov eax,dword ptr [esp+0x14]
	mov dword ptr [esp+0x28],0xFFFFFFFF
	test eax,eax
	je Block22

 Block21:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block22:
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
// CField_AriantArena::OnPacket
__SUB_CLASS_THIS(001497A0, __thiscall, 81010,  CField_AriantArena, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	cmp eax,0xAB
	je Block4

 Block1:
	cmp eax,0x162
	je Block3

 Block2:
	mov dword ptr [esp+4],eax
	jmp  CField::OnPacket

 Block3:
	mov eax,dword ptr [esp+8]
	push eax
	add ecx,0xFFFFFFF8
	call CField_AriantArena::OnUserScore
	ret 8

 Block4:
	mov edx,dword ptr [esp+8]
	push edx
	add ecx,0xFFFFFFF8
	call CField_AriantArena::OnShowResult
	ret 8
}
}
// CField_AriantArena::Update
_SUB_EXCEPTION_HANDLER(148690)
__SUB_CLASS_THIS0(00148690, __thiscall, 81008,  CField_AriantArena, void) {
__asm {

 Block0:
	push ebp
	lea ebp,[esp-0x78]
	sub esp,0x78
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_148690
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,ebp
	mov dword ptr [ebp+0x74],eax
	push ebx
	push esi
	push edi
	push eax
	lea eax,[ebp-0xC]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [ebp+0x28],ebx
	call CField::Update
	cmp dword ptr [ebx+0xDA8],0
	sete al
	test al,al
	jne Block134

 Block1:
	cmp dword ptr [ebx+0xDAC],0
	lea eax,[ebx+0xDAC]
	mov dword ptr [ebp+0x6C],eax
	jne Block134

 Block2:
	mov esi,dword ptr [ebx+0xDA8]
	test esi,esi
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x114]
	lea ecx,[ebp+0x70]
	push ecx
	push esi
	mov dword ptr [ebp+0x70],0
	call edx
	test eax,eax
	jge Block6

 Block5:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block6:
	cmp dword ptr [ebp+0x70],0
	jne Block134

 Block7:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[ebp+0x2C]
	push eax
	call edi
	lea ecx,[ebp+0x2C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block9

 Block8:
	push eax
	call _com_issue_error

 Block9:
	lea edx,[ebp+0x18]
	push edx
	mov dword ptr [ebp-4],0
	call edi
	lea eax,[ebp+0x18]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov ecx,dword ptr [ebx+0xDA8]
	mov byte ptr [ebp-4],1
	test ecx,ecx
	jne Block13

 Block12:
	push 0x80004003
	call _com_issue_error

 Block13:
	mov esi,dword ptr [_D_G_GR]
	test esi,esi
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea edx,[ebp+0x2C]
	push edx
	lea eax,[ebp+0x18]
	push eax
	call IWzGr2DLayer::Getz
	inc eax
	push eax
	push 0x140
	push 0x140
	push 0
	push 0
	lea ecx,[ebp+0x70]
	push ecx
	mov ecx,esi
	call IWzGr2D::CreateLayer
	mov ecx,dword ptr [ebp+0x6C]
	push eax
	call _x_com_ptr<IWzGr2DLayer>::op_assign_copy
	mov eax,dword ptr [ebp+0x70]
	test eax,eax
	je Block17

 Block16:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block17:
	cmp word ptr [ebp+0x18],8
	mov byte ptr [ebp-4],0
	jne Block20

 Block18:
	mov eax,dword ptr [ebp+0x20]
	xor ecx,ecx
	mov word ptr [ebp+0x18],cx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea edx,[ebp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block21:
	or esi,0xFFFFFFFF
	cmp word ptr [ebp+0x2C],8
	mov dword ptr [ebp-4],esi
	jne Block24

 Block22:
	xor eax,eax
	mov word ptr [ebp+0x2C],ax
	mov eax,dword ptr [ebp+0x34]
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea ecx,[ebp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block25:
	mov eax,dword ptr [ebx+0xDA8]
	mov edx,0xD
	mov word ptr [ebp+0x2C],dx
	mov dword ptr [ebp+0x34],eax
	test eax,eax
	je Block27

 Block26:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block27:
	mov eax,dword ptr [ebp+0x6C]
	mov ecx,dword ptr [eax]
	mov dword ptr [ebp-4],2
	test ecx,ecx
	jne Block29

 Block28:
	push 0x80004003
	call _com_issue_error

 Block29:
	lea edx,[ebp+0x2C]
	push edx
	call IWzVector2D::Putorigin
	cmp word ptr [ebp+0x2C],8
	mov dword ptr [ebp-4],esi
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [ebp+0x2C],ax
	mov eax,dword ptr [ebp+0x34]
	test eax,eax
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[ebp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	mov ebx,dword ptr [ebp+0x6C]
	mov esi,dword ptr [ebx]
	test esi,esi
	jne Block35

 Block34:
	push 0x80004003
	call _com_issue_error

 Block35:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	test eax,eax
	jge Block37

 Block36:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block37:
	mov ecx,3
	mov word ptr [ebp+0x2C],cx
	mov dword ptr [ebp+0x34],0
	mov dword ptr [ebp-4],ecx
	mov ecx,dword ptr [ebx]
	test ecx,ecx
	jne Block39

 Block38:
	push 0x80004003
	call _com_issue_error

 Block39:
	lea edx,[ebp+0x2C]
	push edx
	lea eax,[ebp+0x5C]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [ebp+0x2C],8
	mov byte ptr [ebp-4],5
	jne Block42

 Block40:
	mov eax,dword ptr [ebp+0x34]
	xor ecx,ecx
	mov word ptr [ebp+0x2C],cx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea edx,[ebp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block43:
	lea eax,[ebp+0x64]
	push 1
	push eax
	call get_basic_font
	add esp,8
	xor ebx,ebx
	mov byte ptr [ebp-4],6
	mov dword ptr [ebp+0x70],ebx
	mov dword ptr [ebp+0x68],0x68

 Block44:
	mov ecx,dword ptr [ebp+0x28]
	mov eax,dword ptr [ecx+0xDA0]
	mov esi,dword ptr [ebp+0x5C]
	test eax,eax
	je Block92

 Block45:
	mov edx,dword ptr [ebp+0x70]
	cmp edx,dword ptr [eax-4]
	jae Block92

 Block46:
	mov dword ptr [ebp+0x60],0
	add eax,ebx
	push eax
	mov byte ptr [ebp-4],7
	call CField_AriantArena::GetRank
	push eax
	lea ecx,[ebp+0x60]
	push offset _S_D__12
	push ecx
	call ZXString16::Format
	add esp,0xC
	lea edx,[ebp-0x2C]
	push edx
	call edi
	lea eax,[ebp-0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block8

 Block47:
	lea ecx,[ebp+0x18]
	push ecx
	mov byte ptr [ebp-4],8
	call edi
	lea edx,[ebp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block8

 Block48:
	mov edx,dword ptr [ebp+0x64]
	lea eax,[ebp-0x2C]
	push eax
	mov eax,dword ptr [ebp+0x60]
	lea ecx,[ebp+0x18]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp+0x14],esp
	mov ecx,esp
	push eax
	mov byte ptr [ebp-4],9
	call _xbstr_t::_ctor_1
	mov byte ptr [ebp-4],0xA
	test esi,esi
	je Block3

 Block49:
	mov ecx,dword ptr [ebp+0x68]
	push ecx
	push 0x3F
	mov ecx,esi
	mov byte ptr [ebp-4],9
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [ebp-4],8
	cmp word ptr [ebp+0x18],si
	jne Block52

 Block50:
	mov eax,dword ptr [ebp+0x20]
	xor edx,edx
	mov word ptr [ebp+0x18],dx
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea eax,[ebp+0x18]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block53:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x2C],si
	jne Block56

 Block54:
	mov eax,dword ptr [ebp-0x24]
	xor ecx,ecx
	mov word ptr [ebp-0x2C],cx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea edx,[ebp-0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	mov eax,dword ptr [ebp+0x28]
	mov eax,dword ptr [eax+0xDA0]
	push 0
	push 0
	add eax,ebx
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	add eax,eax
	call __alloca_probe_16
	mov ecx,dword ptr [ebp+0x28]
	mov eax,dword ptr [ecx+0xDA0]
	mov esi,esp
	push 0x3FFFFFFF
	push esi
	add eax,ebx
	mov eax,dword ptr [eax]
	push 0xFFFFFFFF
	push eax
	push 0
	push 0
	call MultiByteToWideChar
	push esi
	lea edx,[ebp+0x60]
	push offset _S_S__8
	push edx
	call ZXString16::Format
	add esp,0xC
	lea eax,[ebp-0x3C]
	push eax
	call edi
	lea ecx,[ebp-0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block8

 Block58:
	lea edx,[ebp-0x1C]
	push edx
	mov byte ptr [ebp-4],0xB
	call edi
	lea eax,[ebp-0x1C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block8

 Block59:
	lea ecx,[ebp-0x4C]
	push ecx
	mov byte ptr [ebp-4],0xC
	call edi
	lea edx,[ebp-0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block8

 Block60:
	mov edx,dword ptr [ebp+0x64]
	mov esi,dword ptr [ebp+0x60]
	lea eax,[ebp-0x3C]
	push eax
	lea ecx,[ebp-0x1C]
	push ecx
	push edx
	push ecx
	mov dword ptr [ebp+0x14],esp
	mov ecx,esp
	push esi
	mov byte ptr [ebp-4],0xD
	call _xbstr_t::_ctor_1
	mov eax,dword ptr [ebp+0x68]
	push eax
	lea ecx,[ebp-0x4C]
	push ecx
	push ecx
	mov dword ptr [ebp+0x10],esp
	mov ecx,esp
	push esi
	mov byte ptr [ebp-4],0xE
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0xF
	test ecx,ecx
	je Block3

 Block61:
	mov byte ptr [ebp-4],0xE
	call IWzFont::CalcTextWidth
	mov ecx,dword ptr [ebp+0x5C]
	shr eax,1
	mov edx,0x8C
	sub edx,eax
	push edx
	mov byte ptr [ebp-4],0xD
	call IWzCanvas::DrawTextA
	mov esi,8
	mov byte ptr [ebp-4],0xC
	cmp word ptr [ebp-0x4C],si
	jne Block64

 Block62:
	xor eax,eax
	mov word ptr [ebp-0x4C],ax
	mov eax,dword ptr [ebp-0x44]
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea ecx,[ebp-0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block65:
	mov byte ptr [ebp-4],0xB
	cmp word ptr [ebp-0x1C],si
	jne Block68

 Block66:
	mov eax,dword ptr [ebp-0x14]
	xor edx,edx
	mov word ptr [ebp-0x1C],dx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea eax,[ebp-0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block69:
	mov byte ptr [ebp-4],7
	cmp word ptr [ebp-0x3C],si
	jne Block72

 Block70:
	mov eax,dword ptr [ebp-0x34]
	xor ecx,ecx
	mov word ptr [ebp-0x3C],cx
	test eax,eax
	je Block73

 Block71:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block73

 Block72:
	lea edx,[ebp-0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block73:
	mov eax,dword ptr [ebp+0x28]
	mov ecx,dword ptr [eax+0xDA0]
	mov edx,dword ptr [ecx+ebx+4]
	push edx
	lea eax,[ebp+0x60]
	push offset _S_D__12
	push eax
	call ZXString16::Format
	add esp,0xC
	lea ecx,[ebp+0x4C]
	push ecx
	call edi
	lea edx,[ebp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block8

 Block74:
	lea eax,[ebp+0x3C]
	push eax
	mov byte ptr [ebp-4],0x10
	call edi
	lea ecx,[ebp+0x3C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block8

 Block75:
	lea edx,[ebp]
	push edx
	mov byte ptr [ebp-4],0x11
	call edi
	lea eax,[ebp]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block8

 Block76:
	mov eax,dword ptr [ebp+0x64]
	mov esi,dword ptr [ebp+0x60]
	lea ecx,[ebp+0x4C]
	push ecx
	lea edx,[ebp+0x3C]
	push edx
	push eax
	push ecx
	mov dword ptr [ebp+0x10],esp
	mov ecx,esp
	push esi
	mov byte ptr [ebp-4],0x12
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x68]
	push ecx
	lea edx,[ebp]
	push edx
	push ecx
	mov dword ptr [ebp+0x14],esp
	mov ecx,esp
	push esi
	mov byte ptr [ebp-4],0x13
	call _xbstr_t::_ctor_1
	mov ecx,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],0x14
	test ecx,ecx
	je Block3

 Block77:
	mov byte ptr [ebp-4],0x13
	call IWzFont::CalcTextWidth
	shr eax,1
	mov ecx,0xEB
	sub ecx,eax
	push ecx
	mov ecx,dword ptr [ebp+0x5C]
	mov byte ptr [ebp-4],0x12
	call IWzCanvas::DrawTextA
	cmp word ptr [ebp],8
	mov byte ptr [ebp-4],0x11
	jne Block80

 Block78:
	mov eax,dword ptr [ebp+8]
	xor edx,edx
	mov word ptr [ebp],dx
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea eax,[ebp]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block81:
	cmp word ptr [ebp+0x3C],8
	mov byte ptr [ebp-4],0x10
	jne Block84

 Block82:
	mov eax,dword ptr [ebp+0x44]
	xor ecx,ecx
	mov word ptr [ebp+0x3C],cx
	test eax,eax
	je Block85

 Block83:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block84:
	lea edx,[ebp+0x3C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block85:
	cmp word ptr [ebp+0x4C],8
	mov byte ptr [ebp-4],7
	jne Block88

 Block86:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block89

 Block87:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block89

 Block88:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block89:
	mov byte ptr [ebp-4],6
	test esi,esi
	je Block91

 Block90:
	add esi,0xFFFFFFF4
	push esi
	call ZXString16::_Release
	add esp,4

 Block91:
	inc dword ptr [ebp+0x70]
	add dword ptr [ebp+0x68],0x1A
	add ebx,0xC
	jmp Block44

 Block92:
	lea edx,[ebp+0x3C]
	push edx
	call edi
	lea eax,[ebp+0x3C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block94

 Block93:
	push eax
	call _com_issue_error

 Block94:
	lea ecx,[ebp+0x4C]
	push ecx
	mov byte ptr [ebp-4],0x15
	call edi
	lea edx,[ebp+0x4C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block96

 Block95:
	push eax
	call _com_issue_error

 Block96:
	mov eax,dword ptr [ebp+0x6C]
	mov ecx,dword ptr [eax]
	mov bl,0x16
	mov byte ptr [ebp-4],bl
	test ecx,ecx
	jne Block98

 Block97:
	push 0x80004003
	call _com_issue_error

 Block98:
	lea edx,[ebp+0x70]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x17
	test ecx,ecx
	jne Block100

 Block99:
	push 0x80004003
	call _com_issue_error

 Block100:
	lea eax,[ebp+0x3C]
	push eax
	lea edx,[ebp+0x4C]
	push edx
	push 0
	push 0
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp+0x70]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block102

 Block101:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block102:
	mov esi,8
	mov byte ptr [ebp-4],0x15
	cmp word ptr [ebp+0x4C],si
	jne Block105

 Block103:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block106

 Block104:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block106

 Block105:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block106:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp+0x3C],si
	jne Block109

 Block107:
	mov eax,dword ptr [ebp+0x44]
	xor edx,edx
	mov word ptr [ebp+0x3C],dx
	test eax,eax
	je Block110

 Block108:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block110

 Block109:
	lea eax,[ebp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block110:
	lea ecx,[ebp+0x3C]
	push ecx
	call edi
	lea edx,[ebp+0x3C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block112

 Block111:
	push eax
	call _com_issue_error

 Block112:
	mov edi,dword ptr [ebp+0x6C]
	mov esi,dword ptr [edi]
	mov byte ptr [ebp-4],0x18
	test esi,esi
	jne Block114

 Block113:
	push 0x80004003
	call _com_issue_error

 Block114:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x58]
	lea ecx,[ebp+0x6C]
	push ecx
	push esi
	mov dword ptr [ebp+0x6C],0
	call edx
	test eax,eax
	jge Block116

 Block115:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block116:
	mov eax,dword ptr [ebp+0x6C]
	add eax,0x3E8
	mov ecx,3
	mov word ptr [ebp+0x4C],cx
	mov dword ptr [ebp+0x54],eax
	mov ecx,dword ptr [edi]
	mov bl,0x19
	mov byte ptr [ebp-4],bl
	test ecx,ecx
	jne Block118

 Block117:
	push 0x80004003
	call _com_issue_error

 Block118:
	lea edx,[ebp+0x68]
	push edx
	call IWzGr2DLayer::Getalpha
	mov ecx,dword ptr [eax]
	mov byte ptr [ebp-4],0x1A
	test ecx,ecx
	jne Block120

 Block119:
	push 0x80004003
	call _com_issue_error

 Block120:
	lea eax,[ebp+0x3C]
	push eax
	lea edx,[ebp+0x4C]
	push edx
	push 0xFF
	push 0xFF
	call IWzVector2D::RelMove
	mov eax,dword ptr [ebp+0x68]
	mov byte ptr [ebp-4],bl
	test eax,eax
	je Block122

 Block121:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block122:
	mov esi,8
	mov byte ptr [ebp-4],0x18
	cmp word ptr [ebp+0x4C],si
	jne Block125

 Block123:
	xor eax,eax
	mov word ptr [ebp+0x4C],ax
	mov eax,dword ptr [ebp+0x54]
	test eax,eax
	je Block126

 Block124:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block126

 Block125:
	lea ecx,[ebp+0x4C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block126:
	mov byte ptr [ebp-4],6
	cmp word ptr [ebp+0x3C],si
	jne Block129

 Block127:
	mov eax,dword ptr [ebp+0x44]
	xor edx,edx
	mov word ptr [ebp+0x3C],dx
	test eax,eax
	je Block130

 Block128:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block130

 Block129:
	lea eax,[ebp+0x3C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block130:
	mov eax,dword ptr [ebp+0x64]
	mov byte ptr [ebp-4],5
	test eax,eax
	je Block132

 Block131:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block132:
	mov eax,dword ptr [ebp+0x5C]
	mov dword ptr [ebp-4],0xFFFFFFFF
	test eax,eax
	je Block134

 Block133:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block134:
	lea esp,[ebp-0x5C]
	mov ecx,dword ptr [ebp-0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	mov ecx,dword ptr [ebp+0x74]
	xor ecx,ebp
	call __xsecurity_check_cookie
	add ebp,0x78
	mov esp,ebp
	pop ebp
	ret
}
}
// Partition_CField_AriantArena__UserScore_
__SUB(00147460, __cdecl, 144027,  int32_t, ZArray<CField_AriantArena::UserScore>&, int32_t, int32_t, const CField_AriantArena::UserScore&) {
__asm {

 Block0:
	sub esp,0x14
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	mov dword ptr [esp+0x10],eax
	mov edx,dword ptr [esp+0x20]
	push ebx
	mov ebx,dword ptr [esp+0x20]
	push ebp
	push esi
	push edi
	mov edi,dword ptr [esp+0x28]
	mov dword ptr [esp+0x10],edi
	mov eax,ebx
	mov esi,edx

 Block1:
	cmp eax,edx
	jge Block6

 Block2:
	mov ecx,dword ptr [esp+0x34]
	mov ebx,dword ptr [ecx+4]
	mov ebp,dword ptr [edi]
	lea ecx,[eax+eax*2]
	lea ecx,[ebp+ecx*4+4]
	lea ebx,[ebx]

 Block3:
	cmp dword ptr [ecx],ebx
	jle Block5

 Block4:
	inc eax
	add ecx,0xC
	cmp eax,edx
	jl Block3

 Block5:
	mov ebx,dword ptr [esp+0x2C]

 Block6:
	dec esi
	cmp ebx,esi
	jge Block10

 Block7:
	mov edx,dword ptr [esp+0x34]
	mov ebp,dword ptr [edi]
	mov edx,dword ptr [edx+4]
	lea ecx,[esi+esi*2]
	lea ecx,[ebp+ecx*4+4]

 Block8:
	cmp edx,dword ptr [ecx]
	jle Block10

 Block9:
	dec esi
	sub ecx,0xC
	cmp ebx,esi
	jl Block8

 Block10:
	cmp eax,esi
	jge Block12

 Block11:
	mov edx,dword ptr [edi]
	lea edi,[eax+eax*2]
	mov ebp,dword ptr [edx+edi*4+8]
	mov ebx,dword ptr [edx+edi*4+4]
	lea ecx,[esi+esi*2]
	lea ecx,[edx+ecx*4]
	lea edx,[edx+edi*4]
	mov edi,dword ptr [edx]
	mov dword ptr [esp+0x1C],ebp
	mov ebp,dword ptr [ecx]
	mov dword ptr [edx],ebp
	mov ebp,dword ptr [ecx+4]
	mov dword ptr [edx+4],ebp
	mov ebp,dword ptr [ecx+8]
	mov dword ptr [edx+8],ebp
	mov edx,dword ptr [esp+0x1C]
	mov dword ptr [ecx],edi
	mov edi,dword ptr [esp+0x10]
	mov dword ptr [ecx+4],ebx
	mov ebx,dword ptr [esp+0x2C]
	mov dword ptr [ecx+8],edx
	mov edx,dword ptr [esp+0x30]
	inc eax
	jmp Block1

 Block12:
	mov ecx,dword ptr [esp+0x20]
	pop edi
	pop esi
	pop ebp
	pop ebx
	xor ecx,esp
	call __xsecurity_check_cookie
	add esp,0x14
	ret
}
}
// CField_AriantArena::RemoveUserFromRank
__SUB_CLASS_THIS(001491C0, __thiscall, 81013,  CField_AriantArena, void, ZXString<char>&) {
__asm {

 Block0:
	push ebx
	push ebp
	push esi
	mov ebp,ecx
	push edi
	xor ebx,ebx
	lea esi,[ebp+0xDA0]
	xor edi,edi

 Block1:
	mov eax,dword ptr [esi]
	test eax,eax
	je Block6

 Block2:
	cmp ebx,dword ptr [eax-4]
	jae Block6

 Block3:
	mov eax,dword ptr [esp+0x14]
	mov ecx,dword ptr [esi]
	push eax
	add ecx,edi
	call ZXString<char>::op_eq_0
	test eax,eax
	je Block5

 Block4:
	mov ecx,dword ptr [esi]
	add ecx,edi
	push ecx
	mov ecx,esi
	call ZArray<CField_AriantArena::UserScore>::RemoveAt

 Block5:
	inc ebx
	add edi,0xC
	jmp Block1

 Block6:
	mov ecx,ebp
	call CField_AriantArena::UpdateScoreAndRank
	pop edi
	pop esi
	pop ebp
	pop ebx
	ret 4
}
}
// CField_AriantArena::UserScore::~UserScore
__SUB_CLASS_THIS0(0012E510, __thiscall, 81032,  CField_AriantArena::UserScore, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	mov eax,dword ptr [esi+8]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov esi,dword ptr [esi]
	test esi,esi
	je Block4

 Block3:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block4:
	pop esi
	ret
}
}
// CField_AriantArena::CField_AriantArena
__SUB_CLASS_THIS0(0013ED70, __thiscall, 81006,  CField_AriantArena, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	call CField::_ctor_default
	xor eax,eax
	int 3// TODO: 	mov dword ptr [esi],offset CField_AriantArena::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CField_AriantArena::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CField_AriantArena::`vftable'{for `INetMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+0xC],offset CField_AriantArena::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xDA0],eax
	mov dword ptr [esi+0xDA4],eax
	mov dword ptr [esi+0xDA8],eax
	mov dword ptr [esi+0xDAC],eax
	mov eax,esi
	pop esi
	ret
}
}
// CField_AriantArena::UpdateScoreAndRank
_SUB_EXCEPTION_HANDLER(147C90)
__SUB_CLASS_THIS0(00147C90, __thiscall, 81008,  CField_AriantArena, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_147C90
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x8C
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xA0]
	mov dword ptr fs:[0],eax
	mov ebx,ecx
	mov dword ptr [esp+0x3C],ebx
	mov ebp,dword ptr [ZImports::_VariantInit]
	xor edi,edi
	cmp dword ptr [ebx+0xDA4],edi
	sete al
	test al,al
	je Block42

 Block1:
	lea eax,[esp+0x1C]
	push eax
	call ebp
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block3

 Block2:
	push eax
	call _com_issue_error

 Block3:
	lea edx,[esp+0x2C]
	push edx
	mov dword ptr [esp+0xAC],edi
	call ebp
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xA8],1
	cmp ecx,edi
	jne Block7

 Block6:
	push 0x80004003
	call _com_issue_error

 Block7:
	lea edx,[esp+0x1C]
	push edx
	lea eax,[esp+0x30]
	push eax
	push 0xC00614A4
	push 0x12C
	push 0x12C
	push edi
	push edi
	lea edx,[esp+0x34]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	mov esi,dword ptr [ebx+0xDA4]
	cmp esi,eax
	je Block12

 Block8:
	mov dword ptr [ebx+0xDA4],eax
	cmp eax,edi
	je Block10

 Block9:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block10:
	cmp esi,edi
	je Block12

 Block11:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block12:
	mov eax,dword ptr [esp+0x18]
	cmp eax,edi
	je Block14

 Block13:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block14:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xA8],0
	jne Block17

 Block15:
	mov eax,dword ptr [esp+0x34]
	xor ecx,ecx
	mov word ptr [esp+0x2C],cx
	cmp eax,edi
	je Block18

 Block16:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block18

 Block17:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block18:
	cmp word ptr [esp+0x1C],8
	mov dword ptr [esp+0xA8],0xFFFFFFFF
	jne Block21

 Block19:
	xor eax,eax
	mov word ptr [esp+0x1C],ax
	mov eax,dword ptr [esp+0x24]
	cmp eax,edi
	je Block22

 Block20:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block22

 Block21:
	lea ecx,[esp+0x1C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block22:
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	push edi
	lea edx,[esp+0x1C]
	push edx
	call CWndMan::GetOrgWindow
	mov eax,dword ptr [eax]
	mov ecx,0xD
	mov dword ptr [esp+0xA8],2
	mov word ptr [esp+0x1C],cx
	mov dword ptr [esp+0x24],eax
	cmp eax,edi
	je Block24

 Block23:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block24:
	mov esi,dword ptr [ebx+0xDA4]
	mov byte ptr [esp+0xA8],3
	cmp esi,edi
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
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
	cmp eax,edi
	jge Block28

 Block27:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block28:
	cmp word ptr [esp+0x1C],8
	mov byte ptr [esp+0xA8],2
	jne Block31

 Block29:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	cmp eax,edi
	je Block32

 Block30:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block32

 Block31:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block32:
	mov eax,dword ptr [esp+0x18]
	mov dword ptr [esp+0xA8],0xFFFFFFFF
	cmp eax,edi
	je Block34

 Block33:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block34:
	mov esi,dword ptr [ebx+0xDA4]
	cmp esi,edi
	jne Block36

 Block35:
	push 0x80004003
	call _com_issue_error

 Block36:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push esi
	call ecx
	cmp eax,edi
	jge Block38

 Block37:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block38:
	mov esi,dword ptr [ebx+0xDA4]
	cmp esi,edi
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0x44]
	push 0x1E
	push edi
	push esi
	call eax
	cmp eax,edi
	jge Block42

 Block41:
	push offset __GUID_4cfb57c7_eae3_40b3_ac98_4b2750e3642a
	push esi
	push eax
	call _com_issue_errorex

 Block42:
	mov ecx,3
	mov word ptr [esp+0x80],cx
	mov dword ptr [esp+0x88],edi
	mov ecx,dword ptr [ebx+0xDA4]
	mov dword ptr [esp+0xA8],4
	cmp ecx,edi
	jne Block44

 Block43:
	push 0x80004003
	call _com_issue_error

 Block44:
	lea edx,[esp+0x80]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x80],8
	mov byte ptr [esp+0xA8],6
	jne Block47

 Block45:
	mov eax,dword ptr [esp+0x88]
	xor ecx,ecx
	mov word ptr [esp+0x80],cx
	cmp eax,edi
	je Block48

 Block46:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block48

 Block47:
	lea edx,[esp+0x80]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block48:
	lea eax,[esp+0x1C]
	push eax
	call ebp
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block50

 Block49:
	push eax
	call _com_issue_error

 Block50:
	lea edx,[esp+0x2C]
	mov bl,7
	push edx
	mov byte ptr [esp+0xAC],bl
	call ebp
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block52

 Block51:
	push eax
	call _com_issue_error

 Block52:
	mov ebp,dword ptr [esp+0x18]
	mov byte ptr [esp+0xA8],8
	cmp ebp,edi
	jne Block54

 Block53:
	push 0x80004003
	call _com_issue_error

 Block54:
	lea ecx,[esp+0x1C]
	push ecx
	lea edx,[esp+0x30]
	push edx
	push 0x12C
	push 0x12C
	mov ecx,ebp
	call IWzCanvas::Create
	mov esi,8
	mov byte ptr [esp+0xA8],bl
	cmp word ptr [esp+0x2C],si
	jne Block57

 Block55:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	cmp eax,edi
	je Block58

 Block56:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block58

 Block57:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block58:
	mov byte ptr [esp+0xA8],6
	cmp word ptr [esp+0x1C],si
	jne Block61

 Block59:
	mov eax,dword ptr [esp+0x24]
	xor edx,edx
	mov word ptr [esp+0x1C],dx
	cmp eax,edi
	je Block62

 Block60:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block62

 Block61:
	lea eax,[esp+0x1C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block62:
	xor ebx,ebx
	mov dword ptr [esp+0x40],ebx
	lea edi,[ebx+2]

 Block63:
	mov esi,dword ptr [esp+0x3C]
	mov eax,dword ptr [esi+0xDA0]
	test eax,eax
	je Block101

 Block64:
	mov ecx,dword ptr [esp+0x40]
	cmp ecx,dword ptr [eax-4]
	jae Block101

 Block65:
	lea edx,[esp+0x2C]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x2C]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block2

 Block66:
	mov eax,dword ptr [esi+0xDA0]
	mov ecx,dword ptr [eax+ebx+8]
	mov esi,dword ptr [esp+0x2C]
	mov edx,dword ptr [ebp]
	sub esp,0x10
	add eax,ebx
	mov eax,esp
	mov dword ptr [eax],esi
	mov esi,dword ptr [esp+0x40]
	mov dword ptr [eax+4],esi
	mov esi,dword ptr [esp+0x44]
	mov dword ptr [eax+8],esi
	mov esi,dword ptr [esp+0x48]
	push ecx
	mov ecx,dword ptr [edx+0x80]
	mov dword ptr [eax+0xC],esi
	lea eax,[edi-2]
	push eax
	push 5
	push ebp
	mov byte ptr [esp+0xC8],9
	call ecx
	test eax,eax
	jge Block68

 Block67:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block68:
	cmp word ptr [esp+0x2C],8
	mov byte ptr [esp+0xA8],6
	jne Block71

 Block69:
	mov eax,dword ptr [esp+0x34]
	xor edx,edx
	mov word ptr [esp+0x2C],dx
	test eax,eax
	je Block72

 Block70:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block72

 Block71:
	lea eax,[esp+0x2C]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block72:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x60]
	push ecx
	call esi
	lea edx,[esp+0x60]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block2

 Block73:
	lea eax,[esp+0x50]
	push eax
	mov byte ptr [esp+0xAC],0xA
	call esi
	lea ecx,[esp+0x50]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block2

 Block74:
	lea edx,[esp+0x60]
	push edx
	lea eax,[esp+0x54]
	push eax
	lea ecx,[esp+0x54]
	push 0x46
	push ecx
	mov byte ptr [esp+0xB8],0xB
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x44]
	push eax
	mov eax,dword ptr [esi+0xDA0]
	push ecx
	add eax,ebx
	mov eax,dword ptr [eax]
	mov dword ptr [esp+0x24],esp
	mov ecx,esp
	push eax
	mov byte ptr [esp+0xBC],0xC
	call _xbstr_t::_ctor_0
	push edi
	mov byte ptr [esp+0xBC],0xD
	push 0x15
	mov ecx,ebp
	mov byte ptr [esp+0xC0],0xC
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x4C]
	mov byte ptr [esp+0xA8],0xB
	test eax,eax
	je Block76

 Block75:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block76:
	cmp word ptr [esp+0x50],8
	mov byte ptr [esp+0xA8],0xA
	jne Block79

 Block77:
	mov eax,dword ptr [esp+0x58]
	xor ecx,ecx
	mov word ptr [esp+0x50],cx
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea edx,[esp+0x50]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block80:
	cmp word ptr [esp+0x60],8
	mov byte ptr [esp+0xA8],6
	jne Block83

 Block81:
	xor eax,eax
	mov word ptr [esp+0x60],ax
	mov eax,dword ptr [esp+0x68]
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea ecx,[esp+0x60]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov dword ptr [esp+0x14],0
	lea edx,[esp+0x48]
	push 0x112A
	push edx
	mov byte ptr [esp+0xB0],0xE
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	mov ecx,dword ptr [esi+0xDA0]
	mov edx,dword ptr [ebx+ecx+4]
	mov eax,dword ptr [eax]
	push edx
	push eax
	lea eax,[esp+0x1C]
	push eax
	mov byte ptr [esp+0xB4],0xF
	call ZXString<char>::Format
	mov eax,dword ptr [esp+0x54]
	add esp,0xC
	mov byte ptr [esp+0xA8],0xE
	test eax,eax
	je Block86

 Block85:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block86:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x90]
	push ecx
	call esi
	lea edx,[esp+0x90]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block2

 Block87:
	lea eax,[esp+0x70]
	push eax
	mov byte ptr [esp+0xAC],0x10
	call esi
	lea ecx,[esp+0x70]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jl Block2

 Block88:
	lea edx,[esp+0x90]
	push edx
	lea eax,[esp+0x74]
	push eax
	lea ecx,[esp+0x4C]
	push 0x46
	push ecx
	mov byte ptr [esp+0xB8],0x11
	call get_basic_font
	add esp,8
	mov eax,dword ptr [eax]
	mov esi,dword ptr [esp+0x1C]
	push eax
	push ecx
	mov dword ptr [esp+0x2C],esp
	mov ecx,esp
	push esi
	mov byte ptr [esp+0xBC],0x12
	call _xbstr_t::_ctor_0
	push edi
	mov byte ptr [esp+0xBC],0x13
	push 0x6A
	mov ecx,ebp
	mov byte ptr [esp+0xC0],0x12
	call IWzCanvas::DrawTextA
	mov eax,dword ptr [esp+0x44]
	mov byte ptr [esp+0xA8],0x11
	test eax,eax
	je Block90

 Block89:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block90:
	cmp word ptr [esp+0x70],8
	mov byte ptr [esp+0xA8],0x10
	jne Block93

 Block91:
	mov eax,dword ptr [esp+0x78]
	xor ecx,ecx
	mov word ptr [esp+0x70],cx
	test eax,eax
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea edx,[esp+0x70]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block94:
	cmp word ptr [esp+0x90],8
	mov byte ptr [esp+0xA8],0xE
	jne Block97

 Block95:
	xor eax,eax
	mov word ptr [esp+0x90],ax
	mov eax,dword ptr [esp+0x98]
	test eax,eax
	je Block98

 Block96:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block98

 Block97:
	lea ecx,[esp+0x90]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block98:
	add edi,0x11
	mov byte ptr [esp+0xA8],6
	test esi,esi
	je Block100

 Block99:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block100:
	inc dword ptr [esp+0x40]
	add ebx,0xC
	jmp Block63

 Block101:
	mov edx,dword ptr [TSingleton<CUserPool>::ms_pInstance]
	mov eax,dword ptr [edx+0x30]
	mov dword ptr [esp+0x14],eax
	test eax,eax
	je Block108

 Block102:
	mov ebx,dword ptr [ZImports::_InterlockedIncrement]
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]

 Block103:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<USERREMOTE_ENTRY>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x20],esi
	test esi,esi
	je Block105

 Block104:
	lea ecx,[esi+4]
	push ecx
	call ebx

 Block105:
	mov ecx,dword ptr [esi+0x10]
	mov byte ptr [esp+0xA8],0x14
	call CUserRemote::RedrawGuildNameTag
	lea edi,[esi+4]
	push edi
	mov byte ptr [esp+0xAC],6
	call ebp
	test eax,eax
	jne Block107

 Block106:
	push edi
	call ebx
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block107:
	cmp dword ptr [esp+0x14],0
	mov dword ptr [esp+0x20],0
	jne Block103

 Block108:
	mov ecx,dword ptr [TSingleton<CUserLocal>::ms_pInstance]
	call CUserLocal::RedrawGuildNameTag
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov dword ptr [esp+0xAC],0xFFFFFFFF
	call edx
	mov ecx,dword ptr [esp+0xA0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x98
	ret
}
}
// ZSort_CField_AriantArena__UserScore_
__SUB(00149210, __cdecl, 144035,  void, ZArray<CField_AriantArena::UserScore>&, __POSITION*, __POSITION*) {
__asm {

 Block0:
	mov eax,dword ptr [esp+8]
	test eax,eax
	je Block8

 Block1:
	push edi
	mov edi,dword ptr [esp+0x10]
	test edi,edi
	je Block7

 Block2:
	push ebx
	mov ebx,dword ptr [esp+0xC]
	push esi
	push eax
	mov ecx,ebx
	call ZArray<CField_AriantArena::UserScore>::IndexOf
	push edi
	mov ecx,ebx
	mov esi,eax
	call ZArray<CField_AriantArena::UserScore>::IndexOf
	mov edi,eax
	cmp esi,edi
	jge Block6

 Block3:
	sub eax,esi
	xor ecx,ecx
	cmp eax,1
	je Block5

 Block4:
	sar eax,1
	inc ecx
	cmp eax,1
	jne Block4

 Block5:
	lea eax,[ecx+ecx]
	push eax
	push edi
	push esi
	push ebx
	call IntroSortLoopHelperDefault<CField_AriantArena::UserScore, int>::call
	push edi
	push esi
	push ebx
	call InsertionSortHelperDefault<CField_AriantArena::UserScore>::call
	add esp,0x1C

 Block6:
	pop esi
	pop ebx

 Block7:
	pop edi

 Block8:
	ret
}
}
// ZSort_CField_AriantArena__UserScore_
__SUB(00149270, __cdecl, 144036,  void, ZArray<CField_AriantArena::UserScore>&) {
__asm {

 Block0:
	mov edx,dword ptr [esp+4]
	mov eax,dword ptr [edx]
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax-4]
	test ecx,ecx
	jne Block3

 Block2:
	xor ecx,ecx
	push ecx
	push eax
	push edx
	call ZSortHelperDefault<CField_AriantArena::UserScore>::call_0
	add esp,0xC
	ret

 Block3:
	lea ecx,[ecx+ecx*2]
	lea ecx,[eax+ecx*4-0xC]
	push ecx
	push eax
	push edx
	call ZSortHelperDefault<CField_AriantArena::UserScore>::call_0
	add esp,0xC
	ret
}
}
// CField_AriantArena::GetFieldType
__SUB_CLASS_THIS0(0013EDC0, __thiscall, 81009,  CField_AriantArena, long) {
__asm {

 Block0:
	mov eax,0xD
	ret
}
}
// InsertionSort_CField_AriantArena__UserScore_
_SUB_EXCEPTION_HANDLER(147920)
__SUB(00147920, __cdecl, 144031,  void, ZArray<CField_AriantArena::UserScore>&, int32_t, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_147920
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
	xor eax,eax
	xor esi,esi
	mov dword ptr [esp+0x20],esi
	mov dword ptr [esp+0x28],eax
	mov ebx,dword ptr [esp+0x40]
	cmp ebx,dword ptr [esp+0x44]
	mov ebp,ebx
	mov dword ptr [esp+0x34],eax
	mov dword ptr [esp+0x18],ebp
	jg Block27

 Block1:
	lea ebx,[ebx+ebx*2]
	add ebx,ebx
	add ebx,ebx
	mov dword ptr [esp+0x1C],ebx
	jmp Block5

 Block4:
	mov ebx,dword ptr [esp+0x1C]
	mov ebp,dword ptr [esp+0x18]

 Block5:
	mov eax,dword ptr [esp+0x3C]
	mov esi,dword ptr [eax]
	add esi,ebx
	push esi
	lea ecx,[esp+0x24]
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esi+4]
	mov esi,dword ptr [esi+8]
	mov edi,dword ptr [esp+0x28]
	mov dword ptr [esp+0x24],ecx
	cmp edi,esi
	je Block11

 Block6:
	mov dword ptr [esp+0x28],esi
	test esi,esi
	je Block8

 Block7:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block8:
	test edi,edi
	je Block10

 Block9:
	mov ecx,dword ptr [edi]
	mov edx,dword ptr [ecx+8]
	push edi
	call edx

 Block10:
	mov edi,dword ptr [esp+0x28]

 Block11:
	cmp ebp,dword ptr [esp+0x40]
	jle Block20

 Block12:
	mov dword ptr [esp+0x14],ebx

 Block13:
	mov eax,dword ptr [esp+0x3C]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [esp+0x14]
	mov eax,dword ptr [esp+0x24]
	cmp eax,dword ptr [edx+ecx-8]
	lea esi,[edx+ecx]
	jle Block20

 Block14:
	lea edi,[esi-0xC]
	push edi
	mov ecx,esi
	call ZXString<char>::op_assign
	mov ecx,dword ptr [edi+4]
	mov dword ptr [esi+4],ecx
	mov edi,dword ptr [edi+8]
	mov ebx,dword ptr [esi+8]
	cmp ebx,edi
	je Block19

 Block15:
	mov dword ptr [esi+8],edi
	test edi,edi
	je Block17

 Block16:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block17:
	test ebx,ebx
	je Block19

 Block18:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block19:
	sub dword ptr [esp+0x14],0xC
	mov edi,dword ptr [esp+0x28]
	dec ebp
	cmp ebp,dword ptr [esp+0x40]
	jg Block13

 Block20:
	mov ecx,dword ptr [esp+0x3C]
	mov edx,dword ptr [ecx]
	lea eax,[ebp+ebp*2]
	lea esi,[edx+eax*4]
	lea eax,[esp+0x20]
	push eax
	mov ecx,esi
	call ZXString<char>::op_assign
	mov ecx,dword ptr [esp+0x24]
	mov dword ptr [esi+4],ecx
	mov ebx,dword ptr [esi+8]
	cmp ebx,edi
	je Block25

 Block21:
	mov dword ptr [esi+8],edi
	test edi,edi
	je Block23

 Block22:
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax

 Block23:
	test ebx,ebx
	je Block25

 Block24:
	mov ecx,dword ptr [ebx]
	mov edx,dword ptr [ecx+8]
	push ebx
	call edx

 Block25:
	mov eax,dword ptr [esp+0x18]
	add dword ptr [esp+0x1C],0xC
	inc eax
	cmp eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x18],eax
	jle Block4

 Block26:
	mov esi,dword ptr [esp+0x20]
	mov eax,dword ptr [esp+0x28]

 Block27:
	mov dword ptr [esp+0x34],1
	test eax,eax
	je Block29

 Block28:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block29:
	mov dword ptr [esp+0x34],0xFFFFFFFF
	test esi,esi
	je Block31

 Block30:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block31:
	mov ecx,dword ptr [esp+0x2C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x24
	ret
}
}
// CField_AriantArena::OnShowResult
_SUB_EXCEPTION_HANDLER(147630)
__SUB_CLASS_THIS(00147630, __thiscall, 81014,  CField_AriantArena, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_147630
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x30
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x3C]
	mov dword ptr fs:[0],eax
	mov edi,ecx
	push 0
	push 0xFF
	push 0xC00614A4
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x24],esp
	mov dword ptr [eax],0
	push 0x64
	push 0
	push ecx
	mov ecx,dword ptr [TSingleton<CWndMan>::ms_pInstance]
	mov eax,esp
	mov dword ptr [esp+0x34],esp
	push 1
	push eax
	mov dword ptr [esp+0x68],0
	call CWndMan::GetOrgWindow
	lea ecx,[esp+0x2C]
	push 0x1124
	push ecx
	mov byte ptr [esp+0x68],1
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	mov byte ptr [esp+0x60],2
	push 0
	push eax
	lea edx,[esp+0x30]
	push edx
	mov byte ptr [esp+0x6C],3
	call CAnimationDisplayer::LoadLayer_1
	mov eax,dword ptr [eax]
	mov esi,dword ptr [edi+0xDA8]
	add esp,0x28
	cmp esi,eax
	je Block5

 Block1:
	mov dword ptr [edi+0xDA8],eax
	test eax,eax
	je Block3

 Block2:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block3:
	test esi,esi
	je Block5

 Block4:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+8]
	push esi
	call ecx

 Block5:
	mov eax,dword ptr [esp+0xC]
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block7:
	mov eax,dword ptr [esp+0x10]
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test eax,eax
	je Block9

 Block8:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block9:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x2C]
	push ecx
	call esi
	lea edx,[esp+0x2C]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	lea eax,[esp+0x1C]
	push eax
	mov dword ptr [esp+0x48],4
	call esi
	lea ecx,[esp+0x1C]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block13

 Block12:
	push eax
	call _com_issue_error

 Block13:
	mov ecx,dword ptr [edi+0xDA8]
	mov byte ptr [esp+0x44],5
	test ecx,ecx
	jne Block15

 Block14:
	push 0x80004003
	call _com_issue_error

 Block15:
	lea edx,[esp+0x2C]
	push edx
	lea eax,[esp+0x20]
	push eax
	push 0
	call IWzGr2DLayer::Animate
	mov esi,8
	mov byte ptr [esp+0x44],4
	cmp word ptr [esp+0x1C],si
	jne Block18

 Block16:
	mov eax,dword ptr [esp+0x24]
	xor ecx,ecx
	mov word ptr [esp+0x1C],cx
	test eax,eax
	je Block19

 Block17:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block19

 Block18:
	lea edx,[esp+0x1C]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block19:
	mov dword ptr [esp+0x44],0xFFFFFFFF
	cmp word ptr [esp+0x2C],si
	jne Block22

 Block20:
	xor eax,eax
	mov word ptr [esp+0x2C],ax
	mov eax,dword ptr [esp+0x34]
	test eax,eax
	je Block23

 Block21:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block23

 Block22:
	lea ecx,[esp+0x2C]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block23:
	lea edx,[esp+0x14]
	push 0x1125
	push edx
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push eax
	mov dword ptr [esp+0x48],6
	call play_ui_sound
	mov eax,dword ptr [esp+0x18]
	add esp,4
	mov dword ptr [esp+0x44],0xFFFFFFFF
	test eax,eax
	je Block25

 Block24:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block25:
	mov eax,dword ptr [edi+0xDA4]
	test eax,eax
	je Block27

 Block26:
	mov dword ptr [edi+0xDA4],0
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block27:
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x3C
	ret 4
}
}
