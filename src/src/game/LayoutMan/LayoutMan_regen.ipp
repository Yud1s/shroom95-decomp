#include "regen.hpp"
// LayoutMan.ipp
#include "LayoutMan.hpp"

// CLayoutMan::AddSingleLayer
_SUB_EXCEPTION_HANDLER(1CDCB0)
__SUB_CLASS_THIS(001CDCB0, __thiscall, 12801,  CLayoutMan, _x_com_ptr<IWzGr2DLayer>*, _x_com_ptr<IWzGr2DLayer>*, const wchar_t*, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1CDCB0
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
	push 0
	mov dword ptr [esp+0x10],0
	mov eax,dword ptr [esp+0x34]
	push 0xFF
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push ecx
	mov ecx,dword ptr [esi]
	mov dword ptr [esp+0x34],0
	call CWnd::GetLayer
	mov edx,dword ptr [esi+8]
	mov eax,dword ptr [esi+4]
	push edx
	push eax
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,dword ptr [esi]
	mov dword ptr [esp+0x3C],1
	call CWnd::GetLayer
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [edi],0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x40],2
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov ecx,edi
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	test eax,eax
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov ecx,dword ptr [esp+0x48]
	mov edi,dword ptr [esp+0x44]
	push 0
	push ecx
	push edi
	mov byte ptr [esp+0x48],3
	call CAnimationDisplayer::LoadSingleLayer_1
	add esp,0x28
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0xC],1
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block7:
	cmp dword ptr [edi],0
	sete al
	test al,al
	sete al
	test al,al
	je Block14

 Block8:
	cmp dword ptr [esp+0x34],0
	je Block14

 Block9:
	push 0xFFFFFFFF
	lea ecx,[esi+0xC]
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::InsertBefore
	mov ecx,dword ptr [edi]
	mov esi,dword ptr [eax]
	cmp esi,ecx
	je Block14

 Block10:
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block12

 Block11:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ecx
	call eax

 Block12:
	test esi,esi
	je Block14

 Block13:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block14:
	mov eax,edi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x18
	ret 0x10
}
}
// CLayoutMan::CopyToCanvas
_SUB_EXCEPTION_HANDLER(1CEFC0)
__SUB_CLASS_THIS(001CEFC0, __thiscall, 12807,  CLayoutMan, int32_t, NakedParam<_x_com_ptr<IWzCanvas>>, const wchar_t*, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1CEFC0
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
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x28]
	push eax
	mov dword ptr [esp+0x54],0
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
	mov byte ptr [esp+0x54],1
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
	mov eax,dword ptr [esp+0x5C]
	lea ecx,[esp+0x28]
	push ecx
	lea edx,[esp+0x1C]
	push edx
	push ecx
	mov dword ptr [esp+0x20],esp
	mov ecx,esp
	mov bl,2
	push eax
	mov byte ptr [esp+0x60],bl
	call _xbstr_t::_ctor_1
	cmp dword ptr [_D_G_RM],0
	mov byte ptr [esp+0x5C],3
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x44]
	push ecx
	mov byte ptr [esp+0x60],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	push eax
	lea edx,[esp+0x14]
	push edx
	mov byte ptr [esp+0x58],4
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [esp+0x54],5
	mov dword ptr [esp+0x60],0
	mov dword ptr [esp+0x18],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	lea ecx,[esp+0x60]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	test eax,eax
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov eax,dword ptr [esp+0x10]
	mov byte ptr [esp+0x50],7
	test eax,eax
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov esi,dword ptr [ZImports::_VariantClear]
	mov ebx,8
	mov byte ptr [esp+0x50],bl
	cmp word ptr [esp+0x38],bx
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x38],ax
	mov eax,dword ptr [esp+0x40]
	test eax,eax
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x38]
	push ecx
	call esi

 Block17:
	mov byte ptr [esp+0x50],9
	cmp word ptr [esp+0x18],bx
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x20]
	xor edx,edx
	mov word ptr [esp+0x18],dx
	test eax,eax
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x18]
	push eax
	call esi

 Block21:
	mov byte ptr [esp+0x50],0xA
	cmp word ptr [esp+0x28],bx
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x30]
	xor ecx,ecx
	mov word ptr [esp+0x28],cx
	test eax,eax
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[esp+0x28]
	push edx
	call esi

 Block25:
	mov eax,dword ptr [esp+0x64]
	mov ecx,dword ptr [esp+0x60]
	mov esi,dword ptr [esp+0x5C]
	push eax
	push ecx
	push ecx
	mov eax,esp
	mov dword ptr [esp+0x70],esp
	mov dword ptr [eax],esi
	test esi,esi
	je Block27

 Block26:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+4]
	push esi
	call eax

 Block27:
	push ecx
	mov ecx,dword ptr [esp+0x68]
	mov eax,esp
	mov dword ptr [eax],ecx
	mov eax,dword ptr [esp+0x68]
	mov dword ptr [esp+0x74],esp
	test eax,eax
	je Block29

 Block28:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block29:
	mov ecx,edi
	call CLayoutMan::CopyToCanvas_0
	mov edi,eax
	mov byte ptr [esp+0x50],0
	test esi,esi
	je Block31

 Block30:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block31:
	mov eax,dword ptr [esp+0x58]
	mov dword ptr [esp+0x50],0xFFFFFFFF
	test eax,eax
	je Block33

 Block32:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block33:
	mov eax,edi
	mov ecx,dword ptr [esp+0x48]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x44
	ret 0x10
}
}
// CLayoutMan::Init
__SUB_CLASS_THIS(001CD2B0, __thiscall, 12799,  CLayoutMan, void, CWnd*, long, long) {
__asm {

 Block0:
	mov eax,dword ptr [esp+4]
	mov edx,dword ptr [esp+8]
	mov dword ptr [ecx],eax
	mov eax,dword ptr [esp+0xC]
	mov dword ptr [ecx+4],edx
	mov dword ptr [ecx+8],eax
	ret 0xC
}
}
// CLayoutMan::~CLayoutMan
_SUB_EXCEPTION_HANDLER(1CE660)
__SUB_CLASS_THIS0(001CE660, __thiscall, 12797,  CLayoutMan, void) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1CE660
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
	lea ecx,[esi+0x10]
	mov dword ptr [esp+0x14],0
	call ZArray<ZRef<CCtrlOriginButton>>::RemoveAll
	lea ecx,[esi+0xC]
	mov dword ptr [esp+0x14],0xFFFFFFFF
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::RemoveAll
	mov ecx,dword ptr [esp+0xC]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop esi
	add esp,0x10
	ret
}
}
// CLayoutMan::AddButton
_SUB_EXCEPTION_HANDLER(1CF210)
__SUB_CLASS_THIS(001CF210, __thiscall, 12805,  CLayoutMan, ZRef<CCtrlOriginButton>*, ZRef<CCtrlOriginButton>*, const wchar_t*, uint32_t, long, long, CCtrlButton::CREATEPARAM*) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1CF210
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
	mov edi,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x14],ebx
	mov dword ptr [esp+0x24],ebx
	mov dword ptr [esp+0x1C],ebx
	mov dword ptr [esp+0x20],ebx
	mov eax,dword ptr [esp+0x4C]
	mov dword ptr [esp+0x30],1
	cmp eax,ebx
	je Block2

 Block1:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [eax+4]
	mov dword ptr [esp+0x18],ecx
	mov ecx,dword ptr [eax+8]
	add eax,0xC
	mov dword ptr [esp+0x20],ecx
	push eax
	lea ecx,[esp+0x28]
	mov dword ptr [esp+0x20],edx
	call ZXString16::op_assign
	jmp Block3

 Block2:
	mov dword ptr [esp+0x18],ebx

 Block3:
	mov edx,dword ptr [esp+0x3C]
	push edx
	lea ecx,[esp+0x28]
	call ZXString16::AssignCStr
	push 0xAE4
	mov ecx,offset ZAllocEx<ZAllocAnonSelector>::_s_alloc
	call ZAllocEx<ZAllocAnonSelector>::Alloc
	mov esi,eax
	mov dword ptr [esp+0x4C],esi
	mov byte ptr [esp+0x30],2
	cmp esi,ebx
	je Block5

 Block4:
	mov ecx,esi
	call CCtrlButton::_ctor_default
	int 3// TODO: 	mov dword ptr [esi],offset CCtrlOriginButton::`vftable'{for `IGObj'}
	int 3// TODO: 	mov dword ptr [esi+4],offset CCtrlOriginButton::`vftable'{for `IUIMsgHandler'}
	int 3// TODO: 	mov dword ptr [esi+8],offset CCtrlOriginButton::`vftable'{for `ZRefCounted'}
	mov dword ptr [esi+0xADC],ebx
	mov dword ptr [esi+0xAE0],ebx
	jmp Block6

 Block5:
	xor esi,esi

 Block6:
	mov byte ptr [esp+0x30],1
	cmp esi,ebx
	je Block9

 Block7:
	lea eax,[esi+8]
	cmp eax,ebx
	je Block9

 Block8:
	add eax,0xFFFFFFF8
	jmp Block10

 Block9:
	xor eax,eax

 Block10:
	mov esi,dword ptr [esp+0x38]
	mov ebp,dword ptr [ZImports::_InterlockedIncrement]
	mov dword ptr [esi+4],eax
	cmp eax,ebx
	je Block12

 Block11:
	add eax,0xC
	push eax
	call ebp

 Block12:
	mov ecx,dword ptr [esi+4]
	mov eax,dword ptr [ecx]
	mov eax,dword ptr [eax+0x28]
	lea edx,[esp+0x18]
	push edx
	mov edx,dword ptr [edi+8]
	add edx,dword ptr [esp+0x4C]
	push ebx
	push edx
	mov edx,dword ptr [edi+4]
	add edx,dword ptr [esp+0x50]
	mov dword ptr [esp+0x20],1
	push edx
	mov edx,dword ptr [esp+0x50]
	push edx
	mov edx,dword ptr [edi]
	push edx
	call eax
	cmp dword ptr [esi+4],ebx
	je Block18

 Block13:
	push 0xFFFFFFFF
	lea ecx,[edi+0x10]
	call ZArray<ZRef<CCtrlOriginButton>>::InsertBefore
	mov edi,eax
	mov eax,dword ptr [esi+4]
	cmp eax,ebx
	je Block15

 Block14:
	add eax,0xC
	push eax
	call ebp

 Block15:
	cmp dword ptr [edi+4],ebx
	je Block17

 Block16:
	push ebx
	mov ecx,edi
	call ZRef<CCtrlOriginButton>::_ReleaseRaw
	mov dword ptr [edi+4],ebx

 Block17:
	mov ecx,dword ptr [esi+4]
	mov dword ptr [edi+4],ecx

 Block18:
	mov eax,dword ptr [esp+0x24]
	mov byte ptr [esp+0x30],bl
	cmp eax,ebx
	je Block20

 Block19:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block20:
	mov eax,esi
	mov ecx,dword ptr [esp+0x28]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x20
	ret 0x18
}
}
// CLayoutMan::AddSingleLayerRemoveOrigin
_SUB_EXCEPTION_HANDLER(1CE6C0)
__SUB_CLASS_THIS(001CE6C0, __thiscall, 12801,  CLayoutMan, _x_com_ptr<IWzGr2DLayer>*, _x_com_ptr<IWzGr2DLayer>*, const wchar_t*, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1CE6C0
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
	mov dword ptr [esp+0x44],ecx
	xor edi,edi
	lea eax,[esp+0x60]
	mov dword ptr [esp+0x48],edi
	mov esi,dword ptr [ZImports::_VariantInit]
	push eax
	call esi
	lea ecx,[esp+0x60]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	lea edx,[esp+0x80]
	push edx
	mov dword ptr [esp+0xAC],edi
	call esi
	lea eax,[esp+0x80]
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
	mov eax,dword ptr [esp+0xB4]
	lea ecx,[esp+0x60]
	push ecx
	lea edx,[esp+0x84]
	push edx
	push ecx
	mov dword ptr [esp+0x34],esp
	mov ecx,esp
	mov bl,1
	push eax
	mov byte ptr [esp+0xB8],bl
	call _xbstr_t::_ctor_1
	mov byte ptr [esp+0xB4],2
	cmp dword ptr [_D_G_RM],edi
	jne Block6

 Block5:
	push 0x80004003
	call _com_issue_error

 Block6:
	lea ecx,[esp+0x9C]
	push ecx
	mov byte ptr [esp+0xB8],bl
	mov ecx,dword ptr [_D_G_RM]
	call IWzResMan::GetObjectA
	push eax
	lea edx,[esp+0x4C]
	push edx
	mov byte ptr [esp+0xB0],3
	call get_unknown
	mov eax,dword ptr [eax]
	add esp,4
	mov ecx,esp
	mov byte ptr [esp+0xAC],4
	mov dword ptr [esp+0x50],edi
	mov dword ptr [esp+0x2C],esp
	mov dword ptr [ecx],eax
	cmp eax,edi
	je Block8

 Block7:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block8:
	lea ecx,[esp+0x50]
	call _x_com_ptr<IWzCanvas>::_QueryUnknownComPtr
	cmp eax,edi
	jge Block11

 Block9:
	cmp eax,0x80004002
	je Block11

 Block10:
	push eax
	call _com_issue_error

 Block11:
	mov eax,dword ptr [esp+0x48]
	mov byte ptr [esp+0xA8],6
	cmp eax,edi
	je Block13

 Block12:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block13:
	mov ebx,dword ptr [ZImports::_VariantClear]
	mov ebp,8
	mov byte ptr [esp+0xA8],7
	cmp word ptr [esp+0x90],bp
	jne Block16

 Block14:
	xor eax,eax
	mov word ptr [esp+0x90],ax
	mov eax,dword ptr [esp+0x98]
	cmp eax,edi
	je Block17

 Block15:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block17

 Block16:
	lea ecx,[esp+0x90]
	push ecx
	call ebx

 Block17:
	mov byte ptr [esp+0xA8],8
	cmp word ptr [esp+0x80],bp
	jne Block20

 Block18:
	mov eax,dword ptr [esp+0x88]
	xor edx,edx
	mov word ptr [esp+0x80],dx
	cmp eax,edi
	je Block21

 Block19:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block21

 Block20:
	lea eax,[esp+0x80]
	push eax
	call ebx

 Block21:
	mov byte ptr [esp+0xA8],9
	cmp word ptr [esp+0x60],bp
	jne Block24

 Block22:
	mov eax,dword ptr [esp+0x68]
	xor ecx,ecx
	mov word ptr [esp+0x60],cx
	cmp eax,edi
	je Block25

 Block23:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block25

 Block24:
	lea edx,[esp+0x60]
	push edx
	call ebx

 Block25:
	mov ebp,dword ptr [esp+0x4C]
	cmp ebp,edi
	sete al
	test al,al
	je Block29

 Block26:
	mov esi,dword ptr [esp+0xB0]
	mov dword ptr [esi],edi
	mov dword ptr [esp+0xA8],0xFFFFFFFF
	cmp ebp,edi
	je Block28

 Block27:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	call ecx

 Block28:
	mov eax,esi
	jmp Block123

 Block29:
	mov dword ptr [esp+0x30],edi
	lea edx,[esp+0x28]
	push 0x3D0
	push edx
	mov byte ptr [esp+0xB0],0xA
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push edi
	lea ecx,[esp+0x34]
	push ecx
	push eax
	mov byte ptr [esp+0xB4],0xB
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x34]
	add esp,0xC
	mov byte ptr [esp+0xA8],0xA
	cmp eax,edi
	je Block31

 Block30:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block31:
	lea edx,[esp+0x34]
	push edx
	call esi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block33

 Block32:
	push eax
	call _com_issue_error

 Block33:
	lea ecx,[esp+0x18]
	mov bl,0xC
	push ecx
	mov byte ptr [esp+0xAC],bl
	call esi
	lea edx,[esp+0x18]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block35

 Block34:
	push eax
	call _com_issue_error

 Block35:
	mov byte ptr [esp+0xA8],0xD
	cmp ebp,edi
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x2C]
	push ecx
	push ebp
	mov dword ptr [esp+0x34],edi
	call edx
	cmp eax,edi
	jge Block39

 Block38:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block39:
	mov eax,dword ptr [ebp]
	mov edx,dword ptr [eax+0x40]
	mov esi,dword ptr [esp+0x2C]
	lea ecx,[esp+0x14]
	push ecx
	push ebp
	mov dword ptr [esp+0x1C],edi
	call edx
	cmp eax,edi
	jge Block41

 Block40:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block41:
	mov ecx,dword ptr [esp+0x30]
	cmp ecx,edi
	jne Block43

 Block42:
	push 0x80004003
	call _com_issue_error

 Block43:
	lea eax,[esp+0x34]
	push eax
	mov eax,dword ptr [esp+0x18]
	lea edx,[esp+0x1C]
	push edx
	push esi
	push eax
	call IWzCanvas::Create
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xA8],bl
	jne Block46

 Block44:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block47

 Block45:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block47

 Block46:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block47:
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0xA8],0xA
	jne Block53

 Block48:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,edi
	je Block50

 Block49:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block50:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block51:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x34]
	push edx
	call esi
	lea eax,[esp+0x34]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block54

 Block52:
	push eax
	call _com_issue_error

 Block53:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x34]
	push ecx
	call ebx
	jmp Block51

 Block54:
	mov ecx,dword ptr [esp+0x30]
	mov byte ptr [esp+0xA8],0xE
	cmp ecx,edi
	jne Block56

 Block55:
	push 0x80004003
	call _com_issue_error

 Block56:
	lea edx,[esp+0x34]
	push edx
	push ebp
	push edi
	push edi
	call IWzCanvas::Copy
	cmp word ptr [esp+0x34],8
	mov byte ptr [esp+0xA8],0xA
	jne Block59

 Block57:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,edi
	je Block60

 Block58:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block60

 Block59:
	lea ecx,[esp+0x34]
	push ecx
	call ebx

 Block60:
	lea edx,[esp+0x50]
	push edx
	call esi
	lea eax,[esp+0x50]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block62

 Block61:
	push eax
	call _com_issue_error

 Block62:
	mov eax,dword ptr [esp+0x30]
	mov ecx,0xD
	mov byte ptr [esp+0xA8],0xF
	mov word ptr [esp+0x34],cx
	mov dword ptr [esp+0x3C],eax
	cmp eax,edi
	je Block64

 Block63:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block64:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0xA8],0x10
	cmp ecx,edi
	jne Block66

 Block65:
	push 0x80004003
	call _com_issue_error

 Block66:
	lea edx,[esp+0x50]
	push edx
	lea eax,[esp+0x38]
	push eax
	push edi
	push edi
	push edi
	push edi
	push edi
	lea edx,[esp+0x44]
	push edx
	call IWzGr2D::CreateLayer
	mov esi,8
	mov byte ptr [esp+0xA8],0x12
	cmp word ptr [esp+0x34],si
	jne Block69

 Block67:
	xor eax,eax
	mov word ptr [esp+0x34],ax
	mov eax,dword ptr [esp+0x3C]
	cmp eax,edi
	je Block70

 Block68:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block70

 Block69:
	lea ecx,[esp+0x34]
	push ecx
	call ebx

 Block70:
	mov byte ptr [esp+0xA8],0x13
	cmp word ptr [esp+0x50],si
	jne Block73

 Block71:
	mov eax,dword ptr [esp+0x58]
	xor edx,edx
	mov word ptr [esp+0x50],dx
	cmp eax,edi
	je Block74

 Block72:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block74

 Block73:
	lea eax,[esp+0x50]
	push eax
	call ebx

 Block74:
	mov edx,dword ptr [esp+0x44]
	lea ecx,[esp+0x14]
	push ecx
	mov ecx,dword ptr [edx]
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x14
	mov ecx,0xD
	mov byte ptr [esp+0xA8],bl
	mov word ptr [esp+0x18],cx
	mov dword ptr [esp+0x20],eax
	cmp eax,edi
	je Block76

 Block75:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block76:
	mov esi,dword ptr [esp+0x28]
	mov byte ptr [esp+0xA8],0x15
	cmp esi,edi
	jne Block78

 Block77:
	push 0x80004003
	call _com_issue_error

 Block78:
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
	cmp eax,edi
	jge Block80

 Block79:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block80:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xA8],bl
	jne Block83

 Block81:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block84

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block84

 Block83:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block84:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA8],0x13
	cmp eax,edi
	je Block86

 Block85:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block86:
	mov ecx,dword ptr [esp+0x44]
	mov ecx,dword ptr [ecx]
	lea eax,[esp+0x14]
	push eax
	call CWnd::GetLayer
	mov eax,dword ptr [eax]
	mov bl,0x16
	mov edx,0xD
	mov byte ptr [esp+0xA8],bl
	mov word ptr [esp+0x18],dx
	mov dword ptr [esp+0x20],eax
	cmp eax,edi
	je Block88

 Block87:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block88:
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
	mov byte ptr [esp+0xBC],0x17
	call eax
	cmp eax,edi
	jge Block90

 Block89:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block90:
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xA8],bl
	jne Block93

 Block91:
	mov eax,dword ptr [esp+0x20]
	xor ecx,ecx
	mov word ptr [esp+0x18],cx
	cmp eax,edi
	je Block94

 Block92:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block94

 Block93:
	lea edx,[esp+0x18]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block94:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0xA8],0x13
	cmp eax,edi
	je Block96

 Block95:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block96:
	mov eax,dword ptr [esi]
	mov ecx,dword ptr [eax+0xD8]
	push edi
	push esi
	call ecx
	cmp eax,edi
	jge Block98

 Block97:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block98:
	mov eax,dword ptr [esp+0xB8]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xB4]
	push eax
	push esi
	call ecx
	cmp eax,edi
	jge Block100

 Block99:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block100:
	mov edx,dword ptr [esi]
	mov eax,dword ptr [edx+0xE0]
	push 0xFFFFFFFF
	push esi
	call eax
	cmp eax,edi
	jge Block102

 Block101:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block102:
	lea ecx,[esp+0x70]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x70]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block104

 Block103:
	push eax
	call _com_issue_error

 Block104:
	lea eax,[esp+0x18]
	mov bl,0x18
	push eax
	mov byte ptr [esp+0xAC],bl
	call dword ptr [ZImports::_VariantInit]
	lea ecx,[esp+0x18]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,edi
	jge Block106

 Block105:
	push eax
	call _com_issue_error

 Block106:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x74]
	lea eax,[esp+0x14]
	push eax
	push ebp
	mov byte ptr [esp+0xB0],0x19
	mov dword ptr [esp+0x1C],edi
	call ecx
	cmp eax,edi
	jge Block108

 Block107:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block108:
	mov edx,dword ptr [ebp]
	mov ecx,dword ptr [edx+0x6C]
	mov edi,dword ptr [esp+0x14]
	lea eax,[esp+0x2C]
	push eax
	push ebp
	mov dword ptr [esp+0x34],0
	call ecx
	test eax,eax
	jge Block110

 Block109:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebp
	push eax
	call _com_issue_errorex

 Block110:
	lea edx,[esp+0x70]
	push edx
	lea eax,[esp+0x1C]
	push eax
	mov eax,dword ptr [esp+0x4C]
	mov ecx,dword ptr [eax+8]
	mov edx,dword ptr [eax+4]
	sub edx,dword ptr [esp+0x34]
	sub ecx,edi
	push ecx
	push edx
	mov ecx,esi
	call IWzVector2D::RelMove
	cmp word ptr [esp+0x18],8
	mov byte ptr [esp+0xA8],bl
	jne Block113

 Block111:
	xor eax,eax
	mov word ptr [esp+0x18],ax
	mov eax,dword ptr [esp+0x20]
	test eax,eax
	je Block114

 Block112:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block114

 Block113:
	lea ecx,[esp+0x18]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block114:
	cmp word ptr [esp+0x70],8
	mov byte ptr [esp+0xA8],0x13
	jne Block117

 Block115:
	mov eax,dword ptr [esp+0x78]
	xor edx,edx
	mov word ptr [esp+0x70],dx
	test eax,eax
	je Block118

 Block116:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block118

 Block117:
	lea eax,[esp+0x70]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block118:
	cmp dword ptr [esp+0xBC],0
	je Block120

 Block119:
	push 0xFFFFFFFF
	lea ecx,[esp+0x2C]
	push ecx
	mov ecx,dword ptr [esp+0x4C]
	add ecx,0xC
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::Insert

 Block120:
	mov edx,dword ptr [esi]
	mov edi,dword ptr [esp+0xB0]
	mov eax,dword ptr [edx+4]
	push esi
	mov dword ptr [edi],esi
	call eax
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	mov byte ptr [esp+0xAC],0xA
	call edx
	mov eax,dword ptr [esp+0x30]
	mov byte ptr [esp+0xA8],9
	test eax,eax
	je Block122

 Block121:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block122:
	mov eax,dword ptr [ebp]
	mov ecx,dword ptr [eax+8]
	push ebp
	mov dword ptr [esp+0xAC],0xFFFFFFFF
	call ecx
	mov eax,edi

 Block123:
	mov ecx,dword ptr [esp+0xA0]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x98
	ret 0x10
}
}
// CLayoutMan::CopyToCanvas
_SUB_EXCEPTION_HANDLER(1CD350)
__SUB_CLASS_THIS(001CD350, __thiscall, 12809,  CLayoutMan, int32_t, NakedParam<_x_com_ptr<IWzCanvas>>, NakedParam<_x_com_ptr<IWzCanvas>>, long, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1CD350
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
	mov ebp,ecx
	xor ebx,ebx
	mov dword ptr [esp+0x38],ebx
	mov eax,dword ptr [esp+0x44]
	cmp eax,ebx
	sete cl
	cmp cl,bl
	je Block6

 Block1:
	mov ecx,dword ptr [esp+0x40]
	mov byte ptr [esp+0x38],bl
	cmp ecx,ebx
	je Block3

 Block2:
	mov eax,dword ptr [ecx]
	push ecx
	mov ecx,dword ptr [eax+8]
	call ecx
	mov eax,dword ptr [esp+0x44]

 Block3:
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebx
	je Block5

 Block4:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block5:
	xor eax,eax
	jmp Block25

 Block6:
	mov ecx,3
	mov word ptr [esp+0x20],cx
	mov dword ptr [esp+0x28],0xFF
	mov byte ptr [esp+0x38],2
	mov dword ptr [esp+0x1C],eax
	cmp eax,ebx
	jne Block8

 Block7:
	push 0x80004003
	call _com_issue_error

 Block8:
	mov edx,dword ptr [eax]
	mov edx,dword ptr [edx+0x74]
	lea ecx,[esp+0x14]
	push ecx
	push eax
	mov esi,eax
	mov dword ptr [esp+0x1C],ebx
	call edx
	cmp eax,ebx
	jge Block10

 Block9:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block10:
	mov eax,dword ptr [esp+0x44]
	mov edi,dword ptr [esp+0x14]
	cmp eax,ebx
	jne Block12

 Block11:
	push 0x80004003
	call _com_issue_error

 Block12:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x18]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x6C]
	mov dword ptr [esp+0x20],ebx
	call eax
	cmp eax,ebx
	jge Block14

 Block13:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block14:
	mov ecx,dword ptr [esp+0x40]
	cmp ecx,ebx
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov eax,dword ptr [esp+0x1C]
	lea edx,[esp+0x20]
	push edx
	mov edx,dword ptr [ebp+8]
	push eax
	mov eax,dword ptr [ebp+4]
	sub eax,dword ptr [esp+0x20]
	sub edx,edi
	add edx,dword ptr [esp+0x54]
	add eax,dword ptr [esp+0x50]
	push edx
	push eax
	call IWzCanvas::Copy
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x38],1
	jne Block19

 Block17:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	cmp eax,ebx
	je Block20

 Block18:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block20

 Block19:
	lea edx,[esp+0x20]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block20:
	mov eax,dword ptr [esp+0x40]
	mov byte ptr [esp+0x38],bl
	cmp eax,ebx
	je Block22

 Block21:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block22:
	mov eax,dword ptr [esp+0x44]
	mov dword ptr [esp+0x38],0xFFFFFFFF
	cmp eax,ebx
	je Block24

 Block23:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block24:
	mov eax,1

 Block25:
	mov ecx,dword ptr [esp+0x30]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x28
	ret 0x10
}
}
// CLayoutMan::CopyToEmptyLayer
_SUB_EXCEPTION_HANDLER(1CDDF0)
__SUB(001CDDF0, __cdecl, 12812,  _x_com_ptr<IWzGr2DLayer>, NakedParam<_x_com_ptr<IWzGr2DLayer>>) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1CDDF0
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x44
	push ebx
	push ebp
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x58]
	mov dword ptr fs:[0],eax
	xor ebp,ebp
	mov dword ptr [esp+0x24],ebp
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x38]
	mov edi,1
	push eax
	mov dword ptr [esp+0x64],edi
	call esi
	lea ecx,[esp+0x38]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block2

 Block1:
	push eax
	call _com_issue_error

 Block2:
	mov ecx,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x60],2
	cmp ecx,ebp
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[esp+0x38]
	push edx
	lea eax,[esp+0x1C]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x38],8
	mov byte ptr [esp+0x60],4
	jne Block7

 Block5:
	mov eax,dword ptr [esp+0x40]
	xor ecx,ecx
	mov word ptr [esp+0x38],cx
	cmp eax,ebp
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea edx,[esp+0x38]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	mov dword ptr [esp+0x14],ebp
	lea eax,[esp+0x20]
	push 0x3D0
	push eax
	mov byte ptr [esp+0x68],5
	call StringPool::GetInstance
	mov ecx,eax
	call StringPool::GetStringW
	mov eax,dword ptr [eax]
	push ebp
	lea ecx,[esp+0x18]
	push ecx
	push eax
	mov byte ptr [esp+0x6C],6
	call PcCreate_IWzCanvas
	mov eax,dword ptr [esp+0x2C]
	add esp,0xC
	mov byte ptr [esp+0x60],5
	cmp eax,ebp
	je Block10

 Block9:
	add eax,0xFFFFFFF4
	push eax
	call ZXString16::_Release
	add esp,4

 Block10:
	lea edx,[esp+0x48]
	push edx
	call esi
	lea eax,[esp+0x48]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	lea ecx,[esp+0x28]
	mov bl,7
	push ecx
	mov byte ptr [esp+0x64],bl
	call esi
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block14

 Block13:
	push eax
	call _com_issue_error

 Block14:
	mov esi,dword ptr [esp+0x18]
	mov byte ptr [esp+0x60],8
	cmp esi,ebp
	jne Block16

 Block15:
	push 0x80004003
	call _com_issue_error

 Block16:
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0x48]
	lea ecx,[esp+0x1C]
	push ecx
	push esi
	mov dword ptr [esp+0x24],ebp
	call edx
	cmp eax,ebp
	jge Block18

 Block17:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block18:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax]
	mov esi,dword ptr [esp+0x1C]
	lea edx,[esp+0x20]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [esp+0x28],ebp
	call eax
	cmp eax,ebp
	jge Block20

 Block19:
	mov ecx,dword ptr [esp+0x18]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block20:
	mov ecx,dword ptr [esp+0x14]
	cmp ecx,ebp
	jne Block22

 Block21:
	push 0x80004003
	call _com_issue_error

 Block22:
	lea edx,[esp+0x48]
	push edx
	mov edx,dword ptr [esp+0x24]
	lea eax,[esp+0x2C]
	push eax
	push esi
	push edx
	call IWzCanvas::Create
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x60],bl
	jne Block25

 Block23:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block26

 Block24:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block26

 Block25:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block26:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x60],5
	jne Block29

 Block27:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,ebp
	je Block30

 Block28:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block30

 Block29:
	lea eax,[esp+0x48]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block30:
	mov ebx,dword ptr [esp+0x18]
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x6C]
	lea edx,[esp+0x20]
	push edx
	push ebx
	mov dword ptr [esp+0x28],ebp
	call eax
	cmp eax,ebp
	jge Block32

 Block31:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block32:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	jne Block34

 Block33:
	push 0x80004003
	call _com_issue_error

 Block34:
	mov edx,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x70]
	call eax
	cmp eax,ebp
	jge Block36

 Block35:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block36:
	mov ecx,dword ptr [ebx]
	mov eax,dword ptr [ecx+0x74]
	lea edx,[esp+0x20]
	push edx
	push ebx
	mov dword ptr [esp+0x28],ebp
	call eax
	cmp eax,ebp
	jge Block38

 Block37:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ebx
	push eax
	call _com_issue_errorex

 Block38:
	mov eax,dword ptr [esp+0x14]
	cmp eax,ebp
	jne Block40

 Block39:
	push 0x80004003
	call _com_issue_error

 Block40:
	mov edx,dword ptr [esp+0x20]
	mov ecx,dword ptr [eax]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x78]
	call eax
	cmp eax,ebp
	jge Block42

 Block41:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block42:
	lea ecx,[esp+0x28]
	push ecx
	call dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block44

 Block43:
	push eax
	call _com_issue_error

 Block44:
	mov eax,0xD
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x60],9
	mov dword ptr [esp+0x50],eax
	cmp eax,ebp
	je Block46

 Block45:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block46:
	mov ecx,dword ptr [_D_G_GR]
	mov byte ptr [esp+0x60],0xA
	cmp ecx,ebp
	jne Block48

 Block47:
	push 0x80004003
	call _com_issue_error

 Block48:
	mov esi,dword ptr [esp+0x68]
	lea eax,[esp+0x28]
	push eax
	lea edx,[esp+0x4C]
	push edx
	push ebp
	push ebp
	push ebp
	push ebp
	push ebp
	push esi
	call IWzGr2D::CreateLayer
	mov dword ptr [esp+0x24],edi
	mov edi,8
	mov byte ptr [esp+0x60],9
	cmp word ptr [esp+0x48],di
	jne Block51

 Block49:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebp
	je Block52

 Block50:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block52

 Block51:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block52:
	mov byte ptr [esp+0x60],5
	cmp word ptr [esp+0x28],di
	jne Block55

 Block53:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebp
	je Block56

 Block54:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block56

 Block55:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block56:
	mov esi,dword ptr [esi]
	cmp esi,ebp
	jne Block58

 Block57:
	push 0x80004003
	call _com_issue_error

 Block58:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push esi
	call edx
	cmp eax,ebp
	jge Block60

 Block59:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block60:
	mov ecx,dword ptr [esp+0x6C]
	cmp ecx,ebp
	jne Block62

 Block61:
	push 0x80004003
	call _com_issue_error

 Block62:
	lea eax,[esp+0x48]
	push eax
	call IWzVector2D::Getorigin
	movzx ecx,word ptr [eax]
	mov bl,0xB
	mov byte ptr [esp+0x60],bl
	cmp cx,9
	je Block69

 Block63:
	cmp cx,0xD
	je Block69

 Block64:
	mov edx,0x4009
	cmp cx,dx
	je Block67

 Block65:
	mov edx,0x400D
	cmp cx,dx
	je Block67

 Block66:
	xor eax,eax
	jmp Block70

 Block67:
	mov eax,dword ptr [eax+8]
	cmp eax,ebp
	je Block66

 Block68:
	mov eax,dword ptr [eax]
	jmp Block70

 Block69:
	mov eax,dword ptr [eax+8]

 Block70:
	mov ecx,0xD
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],eax
	cmp eax,ebp
	je Block72

 Block71:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block72:
	mov ecx,dword ptr [esp+0x68]
	mov esi,dword ptr [ecx]
	mov byte ptr [esp+0x60],0xD
	cmp esi,ebp
	jne Block74

 Block73:
	push 0x80004003
	call _com_issue_error

 Block74:
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0x64]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x44]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,ebp
	jge Block76

 Block75:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block76:
	cmp word ptr [esp+0x28],8
	mov byte ptr [esp+0x60],bl
	jne Block83

 Block77:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block79

 Block78:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block79:
	mov edi,dword ptr [ZImports::_VariantClear]

 Block80:
	cmp word ptr [esp+0x48],8
	mov byte ptr [esp+0x60],5
	jne Block84

 Block81:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,ebp
	je Block85

 Block82:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block85

 Block83:
	mov edi,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x28]
	push ecx
	call edi
	jmp Block80

 Block84:
	lea eax,[esp+0x48]
	push eax
	call edi

 Block85:
	mov ecx,dword ptr [esp+0x6C]
	cmp ecx,ebp
	jne Block87

 Block86:
	push 0x80004003
	call _com_issue_error

 Block87:
	lea edx,[esp+0x48]
	push edx
	call IWzGr2DLayer::Getoverlay
	movzx ecx,word ptr [eax]
	mov bl,0xE
	mov byte ptr [esp+0x60],bl
	cmp cx,9
	je Block94

 Block88:
	cmp cx,0xD
	je Block94

 Block89:
	mov edx,0x4009
	cmp cx,dx
	je Block92

 Block90:
	mov edx,0x400D
	cmp cx,dx
	je Block92

 Block91:
	xor eax,eax
	jmp Block95

 Block92:
	mov eax,dword ptr [eax+8]
	cmp eax,ebp
	je Block91

 Block93:
	mov eax,dword ptr [eax]
	jmp Block95

 Block94:
	mov eax,dword ptr [eax+8]

 Block95:
	mov ecx,0xD
	mov word ptr [esp+0x28],cx
	mov dword ptr [esp+0x30],eax
	cmp eax,ebp
	je Block97

 Block96:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block97:
	mov ecx,dword ptr [esp+0x68]
	mov esi,dword ptr [ecx]
	mov byte ptr [esp+0x60],0x10
	cmp esi,ebp
	jne Block99

 Block98:
	push 0x80004003
	call _com_issue_error

 Block99:
	mov ecx,dword ptr [esp+0x28]
	mov edx,dword ptr [esi]
	mov edx,dword ptr [edx+0xFC]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],ecx
	mov ecx,dword ptr [esp+0x3C]
	mov dword ptr [eax+4],ecx
	mov ecx,dword ptr [esp+0x40]
	mov dword ptr [eax+8],ecx
	mov ecx,dword ptr [esp+0x44]
	push esi
	mov dword ptr [eax+0xC],ecx
	call edx
	cmp eax,ebp
	jge Block101

 Block100:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block101:
	mov esi,8
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x28],si
	jne Block104

 Block102:
	xor eax,eax
	mov word ptr [esp+0x28],ax
	mov eax,dword ptr [esp+0x30]
	cmp eax,ebp
	je Block105

 Block103:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block105

 Block104:
	lea ecx,[esp+0x28]
	push ecx
	call edi

 Block105:
	mov byte ptr [esp+0x60],5
	cmp word ptr [esp+0x48],si
	jne Block108

 Block106:
	mov eax,dword ptr [esp+0x50]
	xor edx,edx
	mov word ptr [esp+0x48],dx
	cmp eax,ebp
	je Block109

 Block107:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block109

 Block108:
	lea eax,[esp+0x48]
	push eax
	call edi

 Block109:
	mov eax,dword ptr [esp+0x6C]
	cmp eax,ebp
	jne Block111

 Block110:
	push 0x80004003
	call _com_issue_error

 Block111:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x20]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0xB0]
	mov dword ptr [esp+0x28],ebp
	call eax
	cmp eax,ebp
	jge Block113

 Block112:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block113:
	mov ecx,dword ptr [esp+0x68]
	mov esi,dword ptr [ecx]
	cmp esi,ebp
	jne Block115

 Block114:
	push 0x80004003
	call _com_issue_error

 Block115:
	mov eax,dword ptr [esp+0x20]
	mov edx,dword ptr [esi]
	mov ecx,dword ptr [edx+0xB4]
	push eax
	push esi
	call ecx
	cmp eax,ebp
	jge Block117

 Block116:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block117:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea edx,[esp+0x28]
	push edx
	call esi
	lea eax,[esp+0x28]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block119

 Block118:
	push eax
	call _com_issue_error

 Block119:
	lea ecx,[esp+0x48]
	mov bl,0x11
	push ecx
	mov byte ptr [esp+0x64],bl
	call esi
	lea edx,[esp+0x48]
	push offset _D_VTMISSING
	push edx
	call ZComAPI::ZComVariantCopy
	add esp,8
	cmp eax,ebp
	jge Block121

 Block120:
	push eax
	call _com_issue_error

 Block121:
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x60],0x12
	cmp eax,ebp
	jne Block123

 Block122:
	push 0x80004003
	call _com_issue_error

 Block123:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x20]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x70]
	mov dword ptr [esp+0x28],ebp
	call eax
	cmp eax,ebp
	jge Block125

 Block124:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block125:
	mov eax,dword ptr [esp+0x6C]
	mov edi,dword ptr [esp+0x20]
	cmp eax,ebp
	jne Block127

 Block126:
	push 0x80004003
	call _com_issue_error

 Block127:
	mov ecx,dword ptr [eax]
	lea edx,[esp+0x1C]
	push edx
	mov esi,eax
	push eax
	mov eax,dword ptr [ecx+0x68]
	mov dword ptr [esp+0x24],ebp
	call eax
	cmp eax,ebp
	jge Block129

 Block128:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block129:
	mov esi,dword ptr [esp+0x68]
	mov ecx,dword ptr [esi]
	cmp ecx,ebp
	jne Block131

 Block130:
	push 0x80004003
	call _com_issue_error

 Block131:
	lea edx,[esp+0x28]
	push edx
	mov edx,dword ptr [esp+0x20]
	lea eax,[esp+0x4C]
	push eax
	push edi
	push edx
	call IWzVector2D::RelMove
	mov edi,8
	mov byte ptr [esp+0x60],bl
	cmp word ptr [esp+0x48],di
	jne Block134

 Block132:
	xor eax,eax
	mov word ptr [esp+0x48],ax
	mov eax,dword ptr [esp+0x50]
	cmp eax,ebp
	je Block135

 Block133:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block135

 Block134:
	lea ecx,[esp+0x48]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block135:
	mov byte ptr [esp+0x60],5
	cmp word ptr [esp+0x28],di
	jne Block138

 Block136:
	mov eax,dword ptr [esp+0x30]
	xor edx,edx
	mov word ptr [esp+0x28],dx
	cmp eax,ebp
	je Block139

 Block137:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block139

 Block138:
	lea eax,[esp+0x28]
	push eax
	call dword ptr [ZImports::_VariantClear]

 Block139:
	mov eax,dword ptr [esp+0x14]
	mov byte ptr [esp+0x60],4
	cmp eax,ebp
	je Block141

 Block140:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block141:
	mov eax,dword ptr [esp+0x18]
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	mov byte ptr [esp+0x64],1
	call edx
	mov eax,dword ptr [esp+0x6C]
	mov byte ptr [esp+0x60],0
	cmp eax,ebp
	je Block143

 Block142:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block143:
	mov eax,esi
	mov ecx,dword ptr [esp+0x58]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebp
	pop ebx
	add esp,0x50
	ret
}
}
// CLayoutMan::AddLayer
_SUB_EXCEPTION_HANDLER(1CDB70)
__SUB_CLASS_THIS(001CDB70, __thiscall, 12801,  CLayoutMan, _x_com_ptr<IWzGr2DLayer>*, _x_com_ptr<IWzGr2DLayer>*, const wchar_t*, long, int32_t) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1CDB70
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
	push 0
	mov dword ptr [esp+0x10],0
	mov eax,dword ptr [esp+0x34]
	push 0xFF
	push eax
	push ecx
	mov ecx,esp
	mov dword ptr [esp+0x20],esp
	push ecx
	mov ecx,dword ptr [esi]
	mov dword ptr [esp+0x34],0
	call CWnd::GetLayer
	mov edx,dword ptr [esi+8]
	mov eax,dword ptr [esi+4]
	push edx
	push eax
	lea ecx,[esp+0x48]
	push ecx
	mov ecx,dword ptr [esi]
	mov dword ptr [esp+0x3C],1
	call CWnd::GetLayer
	push ecx
	mov edi,esp
	mov dword ptr [esp+0x30],esp
	mov dword ptr [edi],0
	mov eax,dword ptr [eax]
	push ecx
	mov ecx,esp
	mov byte ptr [esp+0x40],2
	mov dword ptr [esp+0x34],esp
	mov dword ptr [ecx],eax
	test eax,eax
	je Block2

 Block1:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+4]
	call eax

 Block2:
	mov ecx,edi
	call _x_com_ptr<IWzVector2D>::_QueryWzGr2DLayerComPtr
	test eax,eax
	jge Block5

 Block3:
	cmp eax,0x80004002
	je Block5

 Block4:
	push eax
	call _com_issue_error

 Block5:
	mov ecx,dword ptr [esp+0x48]
	mov edi,dword ptr [esp+0x44]
	push 0
	push ecx
	push edi
	mov byte ptr [esp+0x48],3
	call CAnimationDisplayer::LoadLayer_1
	add esp,0x28
	mov eax,dword ptr [esp+0x30]
	mov dword ptr [esp+0xC],1
	mov byte ptr [esp+0x20],0
	test eax,eax
	je Block7

 Block6:
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	call eax

 Block7:
	cmp dword ptr [edi],0
	sete al
	test al,al
	sete al
	test al,al
	je Block14

 Block8:
	cmp dword ptr [esp+0x34],0
	je Block14

 Block9:
	push 0xFFFFFFFF
	lea ecx,[esi+0xC]
	call ZArray<_x_com_ptr<IWzGr2DLayer>>::InsertBefore
	mov ecx,dword ptr [edi]
	mov esi,dword ptr [eax]
	cmp esi,ecx
	je Block14

 Block10:
	mov dword ptr [eax],ecx
	test ecx,ecx
	je Block12

 Block11:
	mov edx,dword ptr [ecx]
	mov eax,dword ptr [edx+4]
	push ecx
	call eax

 Block12:
	test esi,esi
	je Block14

 Block13:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+8]
	push esi
	call edx

 Block14:
	mov eax,edi
	mov ecx,dword ptr [esp+0x18]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	add esp,0x18
	ret 0x10
}
}
// CLayoutMan::CopyToEmptyLayerOverlay
_SUB_EXCEPTION_HANDLER(1CD500)
__SUB(001CD500, __cdecl, 12814,  _x_com_ptr<IWzGr2DLayer>, NakedParam<_x_com_ptr<IWzGr2DLayer>>, long) {
__asm {

 Block0:
	push 0xFFFFFFFF
	push offset _EXCEPTION_HANDLER_1CD500
	mov eax,dword ptr fs:[0]
	push eax
	sub esp,0x40
	push ebx
	push esi
	push edi
	mov eax,dword ptr [_D___SECURITY_COOKI]
	xor eax,esp
	push eax
	lea eax,[esp+0x50]
	mov dword ptr fs:[0],eax
	mov dword ptr [esp+0x1C],0
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x30]
	mov edi,1
	push eax
	mov dword ptr [esp+0x5C],edi
	call esi
	lea ecx,[esp+0x30]
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
	mov ecx,dword ptr [esp+0x64]
	mov byte ptr [esp+0x58],2
	test ecx,ecx
	jne Block4

 Block3:
	push 0x80004003
	call _com_issue_error

 Block4:
	lea edx,[esp+0x30]
	push edx
	lea eax,[esp+0x14]
	push eax
	call IWzGr2DLayer::Getcanvas
	cmp word ptr [esp+0x30],8
	mov byte ptr [esp+0x58],4
	jne Block7

 Block5:
	mov eax,dword ptr [esp+0x38]
	xor ecx,ecx
	mov word ptr [esp+0x30],cx
	test eax,eax
	je Block8

 Block6:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block8

 Block7:
	lea edx,[esp+0x30]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block8:
	lea eax,[esp+0x40]
	push eax
	call esi
	lea ecx,[esp+0x40]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block10

 Block9:
	push eax
	call _com_issue_error

 Block10:
	lea edx,[esp+0x20]
	mov bl,5
	push edx
	mov byte ptr [esp+0x5C],bl
	call esi
	lea eax,[esp+0x20]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block12

 Block11:
	push eax
	call _com_issue_error

 Block12:
	mov esi,dword ptr [esp+0x10]
	mov byte ptr [esp+0x58],6
	test esi,esi
	jne Block14

 Block13:
	push 0x80004003
	call _com_issue_error

 Block14:
	mov ecx,dword ptr [esi]
	mov eax,dword ptr [ecx+0x48]
	lea edx,[esp+0x14]
	push edx
	push esi
	mov dword ptr [esp+0x1C],0
	call eax
	test eax,eax
	jge Block16

 Block15:
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push esi
	push eax
	call _com_issue_errorex

 Block16:
	mov eax,dword ptr [esp+0x10]
	mov ecx,dword ptr [eax]
	mov esi,dword ptr [esp+0x14]
	lea edx,[esp+0x18]
	push edx
	push eax
	mov eax,dword ptr [ecx+0x40]
	mov dword ptr [esp+0x20],0
	call eax
	test eax,eax
	jge Block18

 Block17:
	mov ecx,dword ptr [esp+0x10]
	push offset __GUID_7600dc6c_9328_4bff_9624_5b0f5c01179e
	push ecx
	push eax
	call _com_issue_errorex

 Block18:
	mov ecx,dword ptr [_D_G_GR]
	test ecx,ecx
	jne Block20

 Block19:
	push 0x80004003
	call _com_issue_error

 Block20:
	lea edx,[esp+0x40]
	push edx
	mov edx,dword ptr [esp+0x1C]
	lea eax,[esp+0x24]
	push eax
	push 0
	push esi
	mov esi,dword ptr [esp+0x70]
	push edx
	push 0
	push 0
	push esi
	call IWzGr2D::CreateLayer
	mov dword ptr [esp+0x1C],edi
	mov edi,8
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x20],di
	jne Block27

 Block21:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block23

 Block22:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree

 Block23:
	mov ebx,dword ptr [ZImports::_VariantClear]

 Block24:
	mov byte ptr [esp+0x58],4
	cmp word ptr [esp+0x40],di
	jne Block28

 Block25:
	mov eax,dword ptr [esp+0x48]
	xor edx,edx
	mov word ptr [esp+0x40],dx
	test eax,eax
	je Block29

 Block26:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block29

 Block27:
	mov ebx,dword ptr [ZImports::_VariantClear]
	lea ecx,[esp+0x20]
	push ecx
	call ebx
	jmp Block24

 Block28:
	lea eax,[esp+0x40]
	push eax
	call ebx

 Block29:
	mov esi,dword ptr [esi]
	test esi,esi
	jne Block31

 Block30:
	push 0x80004003
	call _com_issue_error

 Block31:
	mov ecx,dword ptr [esi]
	mov edx,dword ptr [ecx+0xE0]
	push 0xFFFFFFFF
	push esi
	call edx
	test eax,eax
	jge Block33

 Block32:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block33:
	mov eax,0xD
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x64]
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block35

 Block34:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block35:
	mov edi,dword ptr [esp+0x60]
	mov esi,dword ptr [edi]
	mov byte ptr [esp+0x58],7
	test esi,esi
	jne Block37

 Block36:
	push 0x80004003
	call _com_issue_error

 Block37:
	mov edx,dword ptr [esp+0x20]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0x64]
	push esi
	call eax
	test eax,eax
	jge Block39

 Block38:
	push offset __GUID_f28bd1ed_3deb_4f92_9eec_10ef5a1c3fb4
	push esi
	push eax
	call _com_issue_errorex

 Block39:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x58],4
	jne Block42

 Block40:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block43

 Block41:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block43

 Block42:
	lea edx,[esp+0x20]
	push edx
	call ebx

 Block43:
	mov eax,0xD
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x64]
	mov dword ptr [esp+0x28],eax
	test eax,eax
	je Block45

 Block44:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+4]
	push eax
	call edx

 Block45:
	mov esi,dword ptr [edi]
	mov byte ptr [esp+0x58],8
	test esi,esi
	jne Block47

 Block46:
	push 0x80004003
	call _com_issue_error

 Block47:
	mov edx,dword ptr [esp+0x20]
	mov ecx,dword ptr [esi]
	sub esp,0x10
	mov eax,esp
	mov dword ptr [eax],edx
	mov edx,dword ptr [esp+0x34]
	mov dword ptr [eax+4],edx
	mov edx,dword ptr [esp+0x38]
	mov dword ptr [eax+8],edx
	mov edx,dword ptr [esp+0x3C]
	mov dword ptr [eax+0xC],edx
	mov eax,dword ptr [ecx+0xFC]
	push esi
	call eax
	test eax,eax
	jge Block49

 Block48:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block49:
	cmp word ptr [esp+0x20],8
	mov byte ptr [esp+0x58],4
	jne Block52

 Block50:
	mov eax,dword ptr [esp+0x28]
	xor ecx,ecx
	mov word ptr [esp+0x20],cx
	test eax,eax
	je Block53

 Block51:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block53

 Block52:
	lea edx,[esp+0x20]
	push edx
	call ebx

 Block53:
	mov esi,dword ptr [edi]
	test esi,esi
	jne Block55

 Block54:
	push 0x80004003
	call _com_issue_error

 Block55:
	mov ecx,dword ptr [esp+0x68]
	mov eax,dword ptr [esi]
	mov edx,dword ptr [eax+0xB4]
	push ecx
	push esi
	call edx
	test eax,eax
	jge Block57

 Block56:
	push offset __GUID_6dc8c7ce_8e81_4420_b4f6_4b60b7d5fcdf
	push esi
	push eax
	call _com_issue_errorex

 Block57:
	mov esi,dword ptr [ZImports::_VariantInit]
	lea eax,[esp+0x20]
	push eax
	call esi
	lea ecx,[esp+0x20]
	push offset _D_VTMISSING
	push ecx
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block59

 Block58:
	push eax
	call _com_issue_error

 Block59:
	lea edx,[esp+0x40]
	mov bl,9
	push edx
	mov byte ptr [esp+0x5C],bl
	call esi
	lea eax,[esp+0x40]
	push offset _D_VTMISSING
	push eax
	call ZComAPI::ZComVariantCopy
	add esp,8
	test eax,eax
	jge Block61

 Block60:
	push eax
	call _com_issue_error

 Block61:
	mov ecx,dword ptr [edi]
	mov byte ptr [esp+0x58],0xA
	test ecx,ecx
	jne Block63

 Block62:
	push 0x80004003
	call _com_issue_error

 Block63:
	lea edx,[esp+0x20]
	push edx
	lea eax,[esp+0x44]
	push eax
	push 0
	push 0
	call IWzVector2D::RelMove
	mov esi,8
	mov byte ptr [esp+0x58],bl
	cmp word ptr [esp+0x40],si
	jne Block66

 Block64:
	mov eax,dword ptr [esp+0x48]
	xor ecx,ecx
	mov word ptr [esp+0x40],cx
	test eax,eax
	je Block67

 Block65:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block67

 Block66:
	lea edx,[esp+0x40]
	push edx
	call dword ptr [ZImports::_VariantClear]

 Block67:
	mov byte ptr [esp+0x58],4
	cmp word ptr [esp+0x20],si
	jne Block70

 Block68:
	xor eax,eax
	mov word ptr [esp+0x20],ax
	mov eax,dword ptr [esp+0x28]
	test eax,eax
	je Block71

 Block69:
	add eax,0xFFFFFFFC
	push eax
	call CoTaskMemFree
	jmp Block71

 Block70:
	lea ecx,[esp+0x20]
	push ecx
	call dword ptr [ZImports::_VariantClear]

 Block71:
	mov eax,dword ptr [esp+0x10]
	mov edx,dword ptr [eax]
	push eax
	mov eax,dword ptr [edx+8]
	mov byte ptr [esp+0x5C],1
	call eax
	mov eax,dword ptr [esp+0x64]
	mov byte ptr [esp+0x58],0
	test eax,eax
	je Block73

 Block72:
	mov ecx,dword ptr [eax]
	mov edx,dword ptr [ecx+8]
	push eax
	call edx

 Block73:
	mov eax,edi
	mov ecx,dword ptr [esp+0x50]
	mov dword ptr fs:[0],ecx
	pop ecx
	pop edi
	pop esi
	pop ebx
	add esp,0x4C
	ret
}
}
