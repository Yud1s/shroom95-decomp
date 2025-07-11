#include "regen.hpp"
// MessageBoxPool.ipp
#include "MessageBoxPool.hpp"

// CMessageBoxPool::RemoveMessageBox
_SUB_EXCEPTION_HANDLER(235870)
__SUB_CLASS_THIS(00235870, __thiscall, 51143,  CMessageBoxPool, void, NakedParam<ZRef<MESSAGEBOX>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_235870
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
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax]
	push ecx
	lea ecx,[esi+0x1C]
	mov dword ptr [esp+0x18],0
	call ZList<ZRef<MESSAGEBOX>>::RemoveAt
	mov edx,dword ptr [esp+0x20]
	add edx,0x10
	push edx
	lea ecx,[esi+4]
	call ZMap<unsigned long, ZRef<MESSAGEBOX>, unsigned long>::RemoveKey
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block4

 Block1:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 8
}
}
// CMessageBoxPool::Update
_SUB_EXCEPTION_HANDLER(235B30)
__SUB_CLASS_THIS(00235B30, __thiscall, 51138,  CMessageBoxPool, void, long) {
__asm {

 Block0:
	push ebp
	mov ebp,esp
	and esp,0xFFFFFFF8
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_235B30
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x34
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x48]
	mov dword ptr fs:[0],eax
	mov ecx,dword ptr [ecx+0x28]
	xor ebx,ebx
	mov dword ptr [esp+0x18],ecx
	cmp ecx,ebx
	je Block21

 Block1:
	mov edi,edi

 Block2:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x18]
	push eax
	call ZList<ZRef<MESSAGEBOX>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x20],esi
	cmp esi,ebx
	je Block4

 Block3:
	lea ecx,[esi-0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	fld qword ptr [_D_PI__134]
	fadd st(0),st
	lea edx,[esp+0x34]
	push edx
	mov dword ptr [esp+0x54],ebx
	fmul qword ptr [__real_403e000000000000]
	fdiv qword ptr [__real_408f400000000000]
	fmul qword ptr [__real_3fe0000000000000]
	fadd qword ptr [esi+0x30]
	fstp qword ptr [esi+0x30]
	call edi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block22

 Block5:
	lea ecx,[esp+0x24]
	push ecx
	mov byte ptr [esp+0x54],1
	call edi
	lea edx,[esp+0x24]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jl Block22

 Block6:
	mov edi,dword ptr [esi+0x18]
	mov byte ptr [esp+0x50],2
	cmp edi,ebx
	je Block23

 Block7:
	fld qword ptr [esi+0x30]
	call __CIsin
	fmul qword ptr [__real_4008000000000000]
	fiadd dword ptr [esi+0x28]
	call __ftol2_sse
	mov ebp,dword ptr [esp+0x34]
	mov edx,dword ptr [esi+0x24]
	mov ebx,dword ptr [edi]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],ebp
	mov ebp,dword ptr [esp+0x48]
	mov dword ptr [ecx+4],ebp
	mov ebp,dword ptr [esp+0x4C]
	mov dword ptr [ecx+8],ebp
	mov ebp,dword ptr [esp+0x50]
	mov dword ptr [ecx+0xC],ebp
	mov ebp,dword ptr [esp+0x34]
	sub esp,0x10
	mov ecx,esp
	mov dword ptr [ecx],ebp
	mov ebp,dword ptr [esp+0x48]
	mov dword ptr [ecx+4],ebp
	mov ebp,dword ptr [esp+0x4C]
	push eax
	mov eax,dword ptr [ebx+0x90]
	mov dword ptr [ecx+8],ebp
	mov ebp,dword ptr [esp+0x54]
	push edx
	push edi
	mov dword ptr [ecx+0xC],ebp
	call eax
	xor ebx,ebx
	cmp eax,ebx
	jge Block9

 Block8:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block9:
	mov edi,8
	mov byte ptr [esp+0x50],1
	cmp word ptr [esp+0x24],di
	jne Block12

 Block10:
	mov eax,dword ptr [esp+0x2C]
	xor ecx,ecx
	mov word ptr [esp+0x24],cx
	cmp eax,ebx
	je Block13

 Block11:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block13

 Block12:
	lea edx,[esp+0x24]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block13:
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x34],di
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,ebx
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x34]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block17:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x54],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block20

 Block18:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block20

 Block19:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block20:
	mov dword ptr [esp+0x20],ebx
	cmp dword ptr [esp+0x18],ebx
	jne Block2

 Block21:
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	mov esp,ebp
	pop ebp
	ret 4

 Block22:
	push eax
	call _com_issue_error

 Block23:
	push 0x80004003
	call _com_issue_error
}
}
// CMessageBoxPool::AddMessageBox
_SUB_EXCEPTION_HANDLER(2368B0)
__SUB_CLASS_THIS(002368B0, __thiscall, 51143,  CMessageBoxPool, void, NakedParam<ZRef<MESSAGEBOX>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2368B0
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
	lea ecx,[esi+0x1C]
	mov dword ptr [esp+0x14],0
	call ZList<ZRef<MESSAGEBOX>>::AddTail_
	mov edi,eax
	lea eax,[esp+0x1C]
	push eax
	mov ecx,edi
	call ZRef<MESSAGEBOX>::op_assign_copy
	mov ecx,dword ptr [esp+0x20]
	mov dword ptr [ecx],edi
	mov eax,dword ptr [esp+0x20]
	lea edx,[esp+0x1C]
	push edx
	add eax,0x10
	push eax
	lea ecx,[esi+4]
	call ZMap<unsigned long, ZRef<MESSAGEBOX>, unsigned long>::Insert
	mov eax,dword ptr [esp+0x20]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test eax,eax
	je Block4

 Block1:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block4

 Block2:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block4

 Block3:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block4:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0xC
	ret 8
}
}
// MESSAGEBOX::~MESSAGEBOX
_SUB_EXCEPTION_HANDLER(236690)
__SUB_CLASS_THIS0(00236690, __thiscall, 51166,  MESSAGEBOX, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_236690
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
	mov eax,dword ptr [esi+0x18]
	mov dword ptr [esp+0x14],0
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	mov eax,dword ptr [esi+0x14]
	test eax,eax
	je Block4

 Block3:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block4:
	mov eax,dword ptr [esi+0xC]
	test eax,eax
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	mov esi,dword ptr [esi+8]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	test esi,esi
	je Block8

 Block7:
	add esi,0xFFFFFFF4
	push esi
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CMessageBoxPool::OnPacket
__SUB_CLASS_THIS(00237150, __thiscall, 51139,  CMessageBoxPool, void, long, CInPacket&) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	sub eax,0x145
	je Block5

 Block1:
	sub eax,1
	je Block4

 Block2:
	sub eax,1
	jne Block6

 Block3:
	mov eax,dword ptr [esp+8]
	push eax
	call CMessageBoxPool::OnMessageBoxLeaveField
	ret 8

 Block4:
	mov edx,dword ptr [esp+8]
	push edx
	call CMessageBoxPool::OnMessageBoxEnterField
	ret 8

 Block5:
	mov eax,dword ptr [esp+8]
	push eax
	call CMessageBoxPool::OnCreateFailed

 Block6:
	ret 8
}
}
// CMessageBoxPool::OnCreateFailed
__SUB_CLASS_THIS(00236760, __thiscall, 51140,  CMessageBoxPool, void, CInPacket&) {
__asm {

 Block0:
	push ecx
	push 0
	push 0
	push 0
	push 0
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x14],esp
	push 0x1EA
	push eax
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetString_0
	call CUtilDlg::Notice
	add esp,0x18
	ret 4
}
}
// CMessageBoxPool::CMessageBoxPool
__SUB_CLASS_THIS0(00235910, __thiscall, 51132,  CMessageBoxPool, void) {
__asm {

 Block0:
	push esi
	mov esi,ecx
	push edi
	lea ecx,[esi+4]
	xor edi,edi
	cmp ecx,edi
	je Block2

 Block1:
	lea eax,[ecx-4]
	mov dword ptr [TSingleton<CMessageBoxPool>::ms_pInstance],eax
	jmp Block3

 Block2:
	mov dword ptr [TSingleton<CMessageBoxPool>::ms_pInstance],edi

 Block3:
	int 3// TODO: 	mov dword ptr [esi],offset CMessageBoxPool::`vftable'
	push 0x64
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<MESSAGEBOX>, unsigned long>::`vftable'
	mov dword ptr [ecx+4],edi
	mov dword ptr [ecx+8],0x1F
	mov dword ptr [ecx+0xC],edi
	call ZMap<unsigned long, ZRef<MESSAGEBOX>, unsigned long>::_CalcAutoGrow
	mov dword ptr [esi+0x24],edi
	mov dword ptr [esi+0x28],edi
	mov dword ptr [esi+0x2C],edi
	int 3// TODO: 	mov dword ptr [esi+0x1C],offset ZList<ZRef<MESSAGEBOX>>::`vftable'
	mov dword ptr [esi+0x30],edi
	pop edi
	mov eax,esi
	pop esi
	ret
}
}
// CMessageBoxPool::~CMessageBoxPool
_SUB_EXCEPTION_HANDLER(235970)
__SUB_CLASS_THIS0(00235970, __thiscall, 51134,  CMessageBoxPool, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_235970
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
	int 3// TODO: 	mov dword ptr [esi],offset CMessageBoxPool::`vftable'
	mov eax,dword ptr [esi+0x30]
	mov dword ptr [esp+0x14],1
	test eax,eax
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block2:
	lea ecx,[esi+0x1C]
	int 3// TODO: 	mov dword ptr [ecx],offset ZList<ZRef<MESSAGEBOX>>::`vftable'
	call ZList<ZRef<MESSAGEBOX>>::RemoveAll
	lea ecx,[esi+4]
	mov byte ptr [esp+0x14],0
	int 3// TODO: 	mov dword ptr [ecx],offset ZMap<unsigned long, ZRef<MESSAGEBOX>, unsigned long>::`vftable'
	call ZMap<unsigned long, ZRef<MESSAGEBOX>, unsigned long>::RemoveAll
	mov dword ptr [TSingleton<CMessageBoxPool>::ms_pInstance],0
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CMessageBoxPool::FindMessageBox
_SUB_EXCEPTION_HANDLER(235A00)
__SUB_CLASS_THIS(00235A00, __thiscall, 51137,  CMessageBoxPool, MESSAGEBOX*, const tagPOINT&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_235A00
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
	mov ecx,dword ptr [ecx+0x28]
	mov dword ptr [esp+0x14],ecx
	test ecx,ecx
	je Block9

 Block1:
	mov ebx,dword ptr [esp+0x40]
	mov ebp,dword ptr [ZImports::_InterlockedDecrement]

 Block2:
	lea eax,[esp+0x14]
	push eax
	call ZList<ZRef<MESSAGEBOX>>::GetNext
	mov esi,dword ptr [eax+4]
	add esp,4
	mov dword ptr [esp+0x1C],esi
	test esi,esi
	je Block4

 Block3:
	lea ecx,[esi-0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block4:
	mov edx,dword ptr [esi+0x24]
	sub edx,0x1E
	mov dword ptr [esp+0x20],edx
	mov eax,dword ptr [esi+0x28]
	sub eax,0x28
	mov dword ptr [esp+0x24],eax
	mov ecx,dword ptr [esi+0x24]
	mov eax,dword ptr [ebx+4]
	add ecx,0x1E
	mov dword ptr [esp+0x28],ecx
	mov edx,dword ptr [esi+0x28]
	mov ecx,dword ptr [ebx]
	add edx,0x28
	push eax
	mov dword ptr [esp+0x30],edx
	push ecx
	lea edx,[esp+0x28]
	push edx
	mov dword ptr [esp+0x44],0
	call PtInRect
	mov dword ptr [esp+0x38],0xFFFFFFFF
	test eax,eax
	jne Block11

 Block5:
	add esi,0xFFFFFFF0
	lea edi,[esi+4]
	push edi
	call ebp
	test eax,eax
	jne Block8

 Block6:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block8

 Block7:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block8:
	cmp dword ptr [esp+0x14],0
	mov dword ptr [esp+0x1C],0
	jne Block2

 Block9:
	xor eax,eax

 Block10:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 4

 Block11:
	lea edi,[esi-0x10]
	lea ebx,[edi+4]
	push ebx
	call ebp
	test eax,eax
	jne Block14

 Block12:
	push ebx
	call dword ptr [ZImports::_InterlockedIncrement]
	test edi,edi
	je Block14

 Block13:
	mov eax,dword ptr [edi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,edi
	call edx

 Block14:
	mov eax,esi
	jmp Block10
}
}
// CMessageBoxPool::OnMessageBoxLeaveField
_SUB_EXCEPTION_HANDLER(235D60)
__SUB_CLASS_THIS(00235D60, __thiscall, 51140,  CMessageBoxPool, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_235D60
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0xD8
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0xEC]
	mov dword ptr fs:[0],eax
	mov esi,ecx
	mov edi,dword ptr [esp+0xFC]
	mov ecx,edi
	call CInPacket::Decode1
	mov ecx,edi
	movsx ebp,al
	call CInPacket::Decode4
	xor ebx,ebx
	mov dword ptr [esp+0x14],eax
	mov dword ptr [esp+0x1C],ebx
	lea eax,[esp+0x18]
	push eax
	lea ecx,[esp+0x18]
	push ecx
	lea ecx,[esi+4]
	mov dword ptr [esp+0xFC],ebx
	call ZMap<unsigned long, ZRef<MESSAGEBOX>, unsigned long>::GetAt
	test eax,eax
	jne Block5

 Block1:
	mov eax,dword ptr [esp+0x1C]
	mov dword ptr [esp+0xF4],0xFFFFFFFF
	cmp eax,ebx
	je Block88

 Block2:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block88

 Block3:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	je Block88

 Block4:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax
	jmp Block88

 Block5:
	mov edi,dword ptr [esp+0x1C]
	sub esp,8
	mov eax,esp
	mov dword ptr [esp+0x28],esp
	mov dword ptr [eax+4],edi
	cmp edi,ebx
	je Block7

 Block6:
	lea ecx,[edi-0xC]
	push ecx
	call dword ptr [ZImports::_InterlockedIncrement]

 Block7:
	mov ecx,esi
	call CMessageBoxPool::RemoveMessageBox
	cmp ebp,ebx
	jne Block84

 Block8:
	mov esi,dword ptr [edi+0x18]
	mov dword ptr [esp+0x20],esi
	cmp esi,ebx
	je Block10

 Block9:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block10:
	mov edi,dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x58]
	push ecx
	mov byte ptr [esp+0xF8],1
	call edi
	lea edx,[esp+0x58]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	lea eax,[esp+0x88]
	mov bl,2
	push eax
	mov byte ptr [esp+0xF8],bl
	call edi
	lea ecx,[esp+0x88]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov byte ptr [esp+0xF4],3
	test esi,esi
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov ebp,dword ptr [esp+0x1C]
	mov ecx,dword ptr [ebp+0x28]
	lea edx,[esp+0x58]
	push edx
	mov edx,dword ptr [ebp+0x24]
	lea eax,[esp+0x8C]
	push eax
	push ecx
	push edx
	mov ecx,esi
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x88],8
	mov byte ptr [esp+0xF4],bl
	jne Block23

 Block17:
	xor eax,eax
	mov word ptr [esp+0x88],ax
	mov eax,dword ptr [esp+0x90]
	test eax,eax
	je Block19

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block19:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block20:
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0xF4],1
	jne Block24

 Block21:
	mov eax,dword ptr [esp+0x60]
	xor edx,edx
	mov word ptr [esp+0x58],dx
	test eax,eax
	je Block25

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block23:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x88]
	push ecx
	call ebx
	jmp Block20

 Block24:
	lea eax,[esp+0x58]
	push eax
	call ebx

 Block25:
	fldz
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0x80]
	sub esp,8
	fstp qword ptr [esp]
	push esi
	call edx
	test eax,eax
	jge Block27

 Block26:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block27:
	mov esi,dword ptr [ebp+0x14]
	mov dword ptr [esp+0xE8],esi
	test esi,esi
	je Block29

 Block28:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+4]
	push esi
	call ecx

 Block29:
	mov edx,3
	mov word ptr [esp+0xB8],dx
	mov dword ptr [esp+0xC0],0
	mov byte ptr [esp+0xF4],5
	test esi,esi
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	lea eax,[esp+0xB8]
	push eax
	lea ecx,[esp+0x28]
	push ecx
	mov ecx,esi
	call IWzGr2DLayer::Getcanvas
	mov ebp,8
	mov byte ptr [esp+0xF4],7
	cmp word ptr [esp+0xB8],bp
	jne Block34

 Block32:
	mov eax,dword ptr [esp+0xC0]
	xor edx,edx
	mov word ptr [esp+0xB8],dx
	test eax,eax
	je Block35

 Block33:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block35

 Block34:
	lea eax,[esp+0xB8]
	push eax
	call ebx

 Block35:
	mov ecx,3
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],0xFFFFFFFE
	lea edx,[esp+0x28]
	push edx
	lea eax,[esp+0x18]
	push eax
	mov ecx,esi
	mov byte ptr [esp+0xFC],8
	call IWzGr2DLayer::RemoveCanvas
	mov eax,dword ptr [esp+0x14]
	test eax,eax
	je Block37

 Block36:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block37:
	mov byte ptr [esp+0xF4],7
	cmp word ptr [esp+0x28],bp
	jne Block40

 Block38:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	test eax,eax
	je Block41

 Block39:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block41

 Block40:
	lea ecx,[esp+0x28]
	push ecx
	call ebx

 Block41:
	lea edx,[esp+0xA8]
	push edx
	call edi
	lea eax,[esp+0xA8]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block43

 Block42:
	push eax
	call _com_issue_error

 Block43:
	lea ecx,[esp+0x68]
	mov bl,9
	push ecx
	mov byte ptr [esp+0xF8],bl
	call edi
	lea edx,[esp+0x68]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block45

 Block44:
	push eax
	call _com_issue_error

 Block45:
	mov eax,3
	mov word ptr [esp+0x48],ax
	mov dword ptr [esp+0x50],0
	mov ecx,eax
	mov word ptr [esp+0x38],cx
	mov dword ptr [esp+0x40],0xFFFFFFFF
	mov edx,eax
	mov word ptr [esp+0x78],dx
	mov dword ptr [esp+0x80],0x3E8
	mov ebp,dword ptr [esp+0x24]
	lea eax,[esp+0xA8]
	push eax
	lea ecx,[esp+0x6C]
	push ecx
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x44]
	push eax
	lea ecx,[esp+0x88]
	push ecx
	push ebp
	lea edx,[esp+0xF0]
	push edx
	mov ecx,esi
	mov byte ptr [esp+0x110],0xD
	call IWzGr2DLayer::InsertCanvas
	cmp word ptr [esp+0xD8],8
	jne Block48

 Block46:
	xor eax,eax
	mov word ptr [esp+0xD8],ax
	mov eax,dword ptr [esp+0xE0]
	test eax,eax
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea ecx,[esp+0xD8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block49:
	cmp word ptr [esp+0x78],8
	mov byte ptr [esp+0xF4],0xC
	jne Block52

 Block50:
	mov eax,dword ptr [esp+0x80]
	xor edx,edx
	mov word ptr [esp+0x78],dx
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea eax,[esp+0x78]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block53:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0xF4],0xB
	jne Block56

 Block54:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block57

 Block55:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block57

 Block56:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block57:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0xF4],0xA
	jne Block60

 Block58:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block61

 Block59:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block61

 Block60:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block61:
	cmp word ptr [esp+0x68],8
	mov byte ptr [esp+0xF4],bl
	jne Block64

 Block62:
	mov eax,dword ptr [esp+0x70]
	xor edx,edx
	mov word ptr [esp+0x68],dx
	test eax,eax
	je Block65

 Block63:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block65

 Block64:
	lea eax,[esp+0x68]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block65:
	cmp word ptr [esp+0xA8],8
	mov byte ptr [esp+0xF4],7
	jne Block68

 Block66:
	mov eax,dword ptr [esp+0xB0]
	xor ecx,ecx
	mov word ptr [esp+0xA8],cx
	test eax,eax
	je Block69

 Block67:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block69

 Block68:
	lea edx,[esp+0xA8]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block69:
	lea eax,[esp+0x98]
	push eax
	call edi
	lea ecx,[esp+0x98]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block71

 Block70:
	push eax
	call _com_issue_error

 Block71:
	lea edx,[esp+0xC8]
	mov bl,0xE
	push edx
	mov byte ptr [esp+0xF8],bl
	call edi
	lea eax,[esp+0xC8]
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
	lea ecx,[esp+0x98]
	push ecx
	lea edx,[esp+0xCC]
	push edx
	push 0
	mov ecx,esi
	mov byte ptr [esp+0x100],0xF
	call IWzGr2DLayer::Animate
	mov edi,8
	mov byte ptr [esp+0xF4],bl
	cmp word ptr [esp+0xC8],di
	jne Block76

 Block74:
	xor eax,eax
	mov word ptr [esp+0xC8],ax
	mov eax,dword ptr [esp+0xD0]
	test eax,eax
	je Block77

 Block75:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block77

 Block76:
	lea ecx,[esp+0xC8]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block77:
	mov byte ptr [esp+0xF4],7
	cmp word ptr [esp+0x98],di
	jne Block80

 Block78:
	mov eax,dword ptr [esp+0xA0]
	xor edx,edx
	mov word ptr [esp+0x98],dx
	test eax,eax
	je Block81

 Block79:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block81

 Block80:
	lea eax,[esp+0x98]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block81:
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x18],esp
	push 0
	push ecx
	mov dword ptr [eax],0
	mov eax,esp
	mov dword ptr [eax],esi
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+4]
	mov dword ptr [esp+0x20],esp
	push esi
	call edx
	mov ecx,dword ptr [TSingleton<CAnimationDisplayer>::ms_pInstance]
	call CAnimationDisplayer::RegisterOneTimeAnimation
	mov byte ptr [esp+0xF4],4
	test ebp,ebp
	je Block83

 Block82:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block83:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+8]
	push esi
	mov byte ptr [esp+0xF8],1
	call eax
	mov eax,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0xF8],0
	call edx
	mov edi,dword ptr [esp+0x1C]

 Block84:
	mov dword ptr [esp+0xF4],0xFFFFFFFF
	test edi,edi
	je Block88

 Block85:
	lea esi,[edi-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block88

 Block86:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	test esi,esi
	je Block88

 Block87:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax]
	push 1
	mov ecx,esi
	call edx

 Block88:
	mov ecx,dword ptr [esp+0xEC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0xE4
	ret 4
}
}
// CMessageBoxPool::OnMessageBoxEnterField
_SUB_EXCEPTION_HANDLER(2369C0)
__SUB_CLASS_THIS(002369C0, __thiscall, 51140,  CMessageBoxPool, void, CInPacket&) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_2369C0
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
	mov dword ptr [esp+0x24],esi
	xor ebx,ebx
	mov dword ptr [esp+0x34],ebx
	mov edi,dword ptr [esp+0x78]
	mov ecx,edi
	mov dword ptr [esp+0x70],ebx
	call CInPacket::Decode4
	mov ebp,eax
	lea eax,[esp+0x30]
	push eax
	lea ecx,[esp+0x1C]
	push ecx
	lea ecx,[esi+4]
	mov dword ptr [esp+0x20],ebp
	call ZMap<unsigned long, ZRef<MESSAGEBOX>, unsigned long>::GetAt
	test eax,eax
	je Block4

 Block1:
	mov eax,dword ptr [esp+0x34]
	mov dword ptr [esp+0x70],0xFFFFFFFF
	cmp eax,ebx
	je Block104

 Block2:
	lea esi,[eax-0x10]
	lea edi,[esi+4]
	push edi
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block104

 Block3:
	push edi
	call dword ptr [ZImports::_InterlockedIncrement]
	cmp esi,ebx
	jmp Block102

 Block4:
	lea ecx,[esp+0x30]
	call ZRef<MESSAGEBOX>::_Alloc
	mov esi,dword ptr [esp+0x34]
	mov ecx,edi
	mov dword ptr [esi+0x10],ebp
	call CInPacket::Decode4
	lea ecx,[esp+0x18]
	push ecx
	mov ecx,edi
	mov dword ptr [esi+0x38],eax
	call CInPacket::DecodeStr
	push eax
	lea ecx,[esi+8]
	mov byte ptr [esp+0x74],1
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x70],0
	cmp eax,ebx
	je Block6

 Block5:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block6:
	lea edx,[esp+0x18]
	push edx
	mov ecx,edi
	call CInPacket::DecodeStr
	push eax
	lea ecx,[esi+0xC]
	mov byte ptr [esp+0x74],2
	call ZXString<char>::op_assign
	mov eax,dword ptr [esp+0x18]
	mov byte ptr [esp+0x70],0
	cmp eax,ebx
	je Block8

 Block7:
	add eax,0xFFFFFFF4
	push eax
	call ZXString<char>::_Release
	add esp,4

 Block8:
	mov ecx,edi
	call CInPacket::Decode2
	cwde
	mov ecx,edi
	mov dword ptr [esi+0x1C],eax
	call CInPacket::Decode2
	movsx ecx,ax
	mov dword ptr [esi+0x20],ecx
	mov edx,dword ptr [esi+0x1C]
	sub edx,3
	mov dword ptr [esi+0x24],edx
	mov eax,dword ptr [esi+0x20]
	sub eax,0x64
	mov dword ptr [esi+0x28],eax
	mov dword ptr [esp+0x78],ebx
	lea ecx,[esp+0x18]
	push 0x3D2
	push ecx
	mov byte ptr [esp+0x78],3
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebx
	lea edx,[esp+0x7C]
	push edx
	push eax
	mov byte ptr [esp+0x7C],4
	call PcCreate_IWzVector2D
	mov eax,dword ptr [esp+0x24]
	add esp,0xC
	mov byte ptr [esp+0x70],3
	cmp eax,ebx
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x48]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	mov ebp,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x38]
	mov bl,5
	push edx
	mov byte ptr [esp+0x74],bl
	call ebp
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov ecx,dword ptr [esp+0x78]
	mov byte ptr [esp+0x70],6
	test ecx,ecx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	lea edx,[esp+0x48]
	push edx
	mov edx,dword ptr [esi+0x28]
	lea eax,[esp+0x3C]
	push eax
	mov eax,dword ptr [esi+0x24]
	push edx
	push eax
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x70],bl
	mov ebx,dword ptr [ZImports::_VariantClear]
	cmp word ptr [esp+0x38],di
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea edx,[esp+0x38]
	push edx
	call ebx

 Block20:
	mov byte ptr [esp+0x70],3
	cmp word ptr [esp+0x48],di
	jne Block23

 Block21:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	test eax,eax
	je Block24

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block24

 Block23:
	lea ecx,[esp+0x48]
	push ecx
	call ebx

 Block24:
	xor edi,edi
	xor ebx,ebx
	mov dword ptr [esp+0x18],edi
	mov edx,dword ptr [esi+0x38]
	mov ecx,dword ptr [TSingleton<CItemInfo>::ms_pInstance]
	push edx
	lea eax,[esp+0x20]
	push eax
	mov byte ptr [esp+0x78],7
	call CItemInfo::GetItemProp
	push ebx
	push ebx
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x2C],esp
	push 0x660
	push ecx
	mov byte ptr [esp+0x84],8
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetBSTR
	mov ecx,dword ptr [esp+0x28]
	mov byte ptr [esp+0x7C],9
	cmp ecx,ebx
	jne Block26

 Block25:
	push 0x80004003
	call _com_issue_error

 Block26:
	lea edx,[esp+0x64]
	push edx
	mov byte ptr [esp+0x80],8
	call IWzProperty::Getitem
	mov ecx,eax
	mov byte ptr [esp+0x78],0xA
	call Ztl_variant_t::GetUnknown
	push eax
	lea ecx,[esp+0x18]
	mov dword ptr [esp+0x18],ebx
	call _x_com_ptr<IWzProperty>::_QueryUnknown
	cmp eax,ebx
	jge Block29

 Block27:
	cmp eax,0x80004002
	je Block29

 Block28:
	push eax
	call _com_issue_error

 Block29:
	cmp word ptr [esp+0x58],8
	mov byte ptr [esp+0x70],0xC
	jne Block32

 Block30:
	xor eax,eax
	mov word ptr [esp+0x58],ax
	mov eax,dword ptr [esp+0x60]
	cmp eax,ebx
	je Block33

 Block31:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block33

 Block32:
	lea ecx,[esp+0x58]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block33:
	lea edx,[esp+0x38]
	push edx
	call ebp
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebx
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	mov ecx,3
	mov word ptr [esp+0x48],cx
	mov dword ptr [esp+0x50],ebx
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x70],0xE
	cmp ecx,ebx
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x4C]
	push eax
	push ebx
	push ebx
	push ebx
	push ebx
	push ebx
	lea edx,[esp+0x3C]
	push edx
	call IWzGr2D::CreateLayer
	mov eax,dword ptr [eax]
	cmp eax,ebx
	je Block39

 Block38:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	mov edi,eax
	push eax
	mov dword ptr [esp+0x1C],edi
	call edx

 Block39:
	mov eax,dword ptr [esp+0x20]
	cmp eax,ebx
	je Block41

 Block40:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block41:
	mov ebp,8
	mov byte ptr [esp+0x70],0xD
	cmp word ptr [esp+0x48],bp
	jne Block44

 Block42:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebx
	je Block45

 Block43:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block45

 Block44:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block45:
	mov byte ptr [esp+0x70],0xC
	cmp word ptr [esp+0x38],bp
	jne Block48

 Block46:
	mov eax,dword ptr [esp+0x40]
	xor edx,edx
	mov word ptr [esp+0x38],dx
	cmp eax,ebx
	je Block49

 Block47:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block49

 Block48:
	lea eax,[esp+0x38]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block49:
	push ebx
	push 0xFF
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x38],esp
	mov dword ptr [eax],ebx
	push ebx
	push ebx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x48],esp
	push ebx
	push ecx
	mov ecx,dword ptr [esp+0x38]
	mov dword ptr [eax],ebx
	mov eax,esp
	mov byte ptr [esp+0x94],0xF
	mov dword ptr [esp+0x50],esp
	mov dword ptr [eax],ecx
	cmp ecx,ebx
	je Block51

 Block50:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ecx
	call eax

 Block51:
	lea ecx,[esp+0x44]
	push ecx
	mov byte ptr [esp+0x98],0xC
	call CAnimationDisplayer::LoadLayer_0
	mov eax,dword ptr [eax]
	add esp,0x28
	cmp edi,eax
	je Block56

 Block52:
	mov ebp,edi
	mov edi,eax
	mov dword ptr [esp+0x18],edi
	test eax,eax
	je Block54

 Block53:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block54:
	test ebp,ebp
	je Block56

 Block55:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block56:
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block58

 Block57:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block58:
	test edi,edi
	jne Block60

 Block59:
	push 0x80004003
	call _com_issue_error

 Block60:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xB4]
	push 0xC0061440
	push edi
	call ecx
	test eax,eax
	jge Block62

 Block61:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block62:
	mov eax,dword ptr [esp+0x78]
	mov edx,0xD
	mov word ptr [esp+0x38],dx
	mov dword ptr [esp+0x40],eax
	test eax,eax
	je Block64

 Block63:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block64:
	mov edx,dword ptr [esp+0x38]
	mov ecx,dword ptr [edi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x4C]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x50]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x54]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push edi
	mov byte ptr [esp+0x84],0x10
	call eax
	test eax,eax
	jge Block66

 Block65:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push edi
	push eax
	call _com_issue_errorex

 Block66:
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x70],0xC
	jne Block69

 Block67:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block70:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+0xE0]
	push 0xFFFFFFFF
	push edi
	call ecx
	test eax,eax
	jge Block72

 Block71:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push edi
	push eax
	call _com_issue_errorex

 Block72:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block74

 Block73:
	push eax
	call _com_issue_error

 Block74:
	lea ecx,[esp+0x48]
	mov bl,0x11
	push ecx
	mov byte ptr [esp+0x74],bl
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block76

 Block75:
	push eax
	call _com_issue_error

 Block76:
	lea eax,[esp+0x38]
	push eax
	lea ecx,[esp+0x4C]
	push ecx
	push 0x20
	mov ecx,edi
	mov byte ptr [esp+0x7C],0x12
	call IWzGr2DLayer::Animate
	mov byte ptr [esp+0x70],bl
	mov ebx,8
	cmp word ptr [esp+0x48],bx
	jne Block79

 Block77:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	test eax,eax
	je Block80

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block80

 Block79:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block80:
	mov byte ptr [esp+0x70],0xC
	cmp word ptr [esp+0x38],bx
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	test eax,eax
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov ebp,dword ptr [esi+0x18]
	mov eax,dword ptr [esp+0x78]
	cmp ebp,eax
	je Block89

 Block85:
	mov dword ptr [esi+0x18],eax
	mov eax,dword ptr [esp+0x78]
	test eax,eax
	je Block87

 Block86:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block87:
	test ebp,ebp
	je Block89

 Block88:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block89:
	mov ebp,dword ptr [esi+0x14]
	cmp ebp,edi
	je Block92

 Block90:
	mov dword ptr [esi+0x14],edi
	mov edx,dword ptr [edi]
	mov eax,dword ptr [edx+4]
	push edi
	call eax
	test ebp,ebp
	je Block92

 Block91:
	mov ecx,dword ptr [ebp]
	mov edx,dword ptr [ecx+8]
	push ebp
	call edx

 Block92:
	mov ecx,offset _D_G_RAND
	call CRand32::Random
	xor edx,edx
	mov ecx,0x168
	div ecx
	mov dword ptr [esp+0x2C],edx
	fild dword ptr [esp+0x2C]
	test edx,edx
	jge Block94

 Block93:
	fadd qword ptr [__real_41f0000000000000]

 Block94:
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	fstp qword ptr [esi+0x30]
	sub esp,8
	mov eax,esp
	mov dword ptr [eax+4],esi
	add esi,0xFFFFFFF0
	lea edx,[esi+4]
	mov dword ptr [esp+0x34],esp
	push edx
	call ebp
	mov ecx,dword ptr [esp+0x2C]
	call CMessageBoxPool::AddMessageBox
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x70],bl
	test eax,eax
	je Block96

 Block95:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block96:
	mov eax,dword ptr [esp+0x1C]
	mov byte ptr [esp+0x70],7
	test eax,eax
	je Block98

 Block97:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block98:
	mov eax,dword ptr [edi]
	mov ecx,dword ptr [eax+8]
	push edi
	mov byte ptr [esp+0x74],3
	call ecx
	mov eax,dword ptr [esp+0x78]
	mov byte ptr [esp+0x70],0
	test eax,eax
	je Block100

 Block99:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block100:
	lea edi,[esi+4]
	push edi
	mov dword ptr [esp+0x74],0xFFFFFFFF
	call dword ptr [ZImports::_InterlockedDecrement]
	test eax,eax
	jne Block104

 Block101:
	push edi
	call ebp
	test esi,esi

 Block102:
	je Block104

 Block103:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx]
	push 1
	mov ecx,esi
	call eax

 Block104:
	mov ecx,dword ptr [esp+0x68]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x60
	ret 4
}
}
